#include "NNfunction_ss_uRcR.h"
#include <cmath>

double NNfunction_ss_uRcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.7141)/15.0159;
   input1 = (in1 - 59.2703)/722.61;
   input2 = (in2 - 356.278)/444.219;
   input3 = (in3 - 316.156)/601.584;
   input4 = (in4 - 746.443)/681.459;
   input5 = (in5 - 644.6)/654.949;
   input6 = (in6 - 651.287)/662.254;
   input7 = (in7 - 640.427)/652.259;
   input8 = (in8 - 618.667)/640.129;
   input9 = (in9 - 614.99)/632.335;
   input10 = (in10 - 620.15)/655.107;
   input11 = (in11 - 690.214)/537.49;
   input12 = (in12 - 690.994)/542.495;
   input13 = (in13 - 550.327)/352.718;
   input14 = (in14 - 570.739)/328.776;
   input15 = (in15 - 571.746)/330.046;
   input16 = (in16 - 493.12)/382.609;
   input17 = (in17 - 694.946)/550.845;
   input18 = (in18 - 692.768)/556.448;
   input19 = (in19 - 692.833)/548.747;
   input20 = (in20 - -241.814)/414.2;
   input21 = (in21 - -313.046)/880.565;
   input22 = (in22 - -1.3383)/873.544;
   input23 = (in23 - 10.5744)/504.689;
   switch(index) {
     case 0:
         return neuron0x31cc200();
     default:
         return 0.;
   }
}

double NNfunction_ss_uRcR::Value(int index, double* input) {
   input0 = (input[0] - 22.7141)/15.0159;
   input1 = (input[1] - 59.2703)/722.61;
   input2 = (input[2] - 356.278)/444.219;
   input3 = (input[3] - 316.156)/601.584;
   input4 = (input[4] - 746.443)/681.459;
   input5 = (input[5] - 644.6)/654.949;
   input6 = (input[6] - 651.287)/662.254;
   input7 = (input[7] - 640.427)/652.259;
   input8 = (input[8] - 618.667)/640.129;
   input9 = (input[9] - 614.99)/632.335;
   input10 = (input[10] - 620.15)/655.107;
   input11 = (input[11] - 690.214)/537.49;
   input12 = (input[12] - 690.994)/542.495;
   input13 = (input[13] - 550.327)/352.718;
   input14 = (input[14] - 570.739)/328.776;
   input15 = (input[15] - 571.746)/330.046;
   input16 = (input[16] - 493.12)/382.609;
   input17 = (input[17] - 694.946)/550.845;
   input18 = (input[18] - 692.768)/556.448;
   input19 = (input[19] - 692.833)/548.747;
   input20 = (input[20] - -241.814)/414.2;
   input21 = (input[21] - -313.046)/880.565;
   input22 = (input[22] - -1.3383)/873.544;
   input23 = (input[23] - 10.5744)/504.689;
   switch(index) {
     case 0:
         return neuron0x31cc200();
     default:
         return 0.;
   }
}

double NNfunction_ss_uRcR::neuron0x31982f0() {
   return input0;
}

double NNfunction_ss_uRcR::neuron0x3198630() {
   return input1;
}

double NNfunction_ss_uRcR::neuron0x3198970() {
   return input2;
}

double NNfunction_ss_uRcR::neuron0x3198cb0() {
   return input3;
}

double NNfunction_ss_uRcR::neuron0x3198ff0() {
   return input4;
}

double NNfunction_ss_uRcR::neuron0x3199330() {
   return input5;
}

double NNfunction_ss_uRcR::neuron0x3199670() {
   return input6;
}

double NNfunction_ss_uRcR::neuron0x31999b0() {
   return input7;
}

double NNfunction_ss_uRcR::neuron0x3199cf0() {
   return input8;
}

double NNfunction_ss_uRcR::neuron0x319a030() {
   return input9;
}

double NNfunction_ss_uRcR::neuron0x319a370() {
   return input10;
}

double NNfunction_ss_uRcR::neuron0x319a6b0() {
   return input11;
}

double NNfunction_ss_uRcR::neuron0x319a9f0() {
   return input12;
}

double NNfunction_ss_uRcR::neuron0x319ad30() {
   return input13;
}

double NNfunction_ss_uRcR::neuron0x319b070() {
   return input14;
}

double NNfunction_ss_uRcR::neuron0x319b3b0() {
   return input15;
}

double NNfunction_ss_uRcR::neuron0x319b6f0() {
   return input16;
}

double NNfunction_ss_uRcR::neuron0x319bc50() {
   return input17;
}

double NNfunction_ss_uRcR::neuron0x319be70() {
   return input18;
}

double NNfunction_ss_uRcR::neuron0x319c1b0() {
   return input19;
}

double NNfunction_ss_uRcR::neuron0x319c4f0() {
   return input20;
}

double NNfunction_ss_uRcR::neuron0x319c830() {
   return input21;
}

double NNfunction_ss_uRcR::neuron0x319cb70() {
   return input22;
}

double NNfunction_ss_uRcR::neuron0x319ceb0() {
   return input23;
}

double NNfunction_ss_uRcR::input0x319d320() {
   double input = -1.74682;
   input += synapse0x31981b0();
   input += synapse0x31981f0();
   input += synapse0x319d5d0();
   input += synapse0x319d610();
   input += synapse0x319d650();
   input += synapse0x319d690();
   input += synapse0x319d6d0();
   input += synapse0x319d710();
   input += synapse0x319d750();
   input += synapse0x319d790();
   input += synapse0x319d7d0();
   input += synapse0x319d810();
   input += synapse0x319d850();
   input += synapse0x319d890();
   input += synapse0x319d8d0();
   input += synapse0x319d910();
   input += synapse0x3198120();
   input += synapse0x3198160();
   input += synapse0x2f53510();
   input += synapse0x2f53550();
   input += synapse0x319db70();
   input += synapse0x319dbb0();
   input += synapse0x319dbf0();
   input += synapse0x319dc30();
   return input;
}

double NNfunction_ss_uRcR::neuron0x319d320() {
   double input = input0x319d320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x319dc70() {
   double input = 0.750451;
   input += synapse0x319dfb0();
   input += synapse0x319dff0();
   input += synapse0x319e030();
   input += synapse0x319e070();
   input += synapse0x319e0b0();
   input += synapse0x319e0f0();
   input += synapse0x319e130();
   input += synapse0x319e170();
   input += synapse0x319e1b0();
   input += synapse0x319da60();
   input += synapse0x319daa0();
   input += synapse0x319dae0();
   input += synapse0x319db20();
   input += synapse0x319e400();
   input += synapse0x319e440();
   input += synapse0x319e480();
   input += synapse0x319de00();
   input += synapse0x319de40();
   input += synapse0x319e5d0();
   input += synapse0x319e610();
   input += synapse0x319e650();
   input += synapse0x319e690();
   input += synapse0x319e6d0();
   input += synapse0x319e710();
   return input;
}

double NNfunction_ss_uRcR::neuron0x319dc70() {
   double input = input0x319dc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x319e750() {
   double input = 0.316091;
   input += synapse0x319ea90();
   input += synapse0x319ead0();
   input += synapse0x319eb10();
   input += synapse0x319eb50();
   input += synapse0x319eb90();
   input += synapse0x319ebd0();
   input += synapse0x319ec10();
   input += synapse0x319ec50();
   input += synapse0x319ec90();
   input += synapse0x319ecd0();
   input += synapse0x319ed10();
   input += synapse0x319ed50();
   input += synapse0x319ed90();
   input += synapse0x319edd0();
   input += synapse0x319ee10();
   input += synapse0x319ee50();
   input += synapse0x319e8e0();
   input += synapse0x319e920();
   input += synapse0x2f52660();
   input += synapse0x2f61460();
   input += synapse0x2f614a0();
   input += synapse0x3187380();
   input += synapse0x31873c0();
   input += synapse0x3187400();
   return input;
}

double NNfunction_ss_uRcR::neuron0x319e750() {
   double input = input0x319e750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x319e1f0() {
   double input = 0.247375;
   input += synapse0x2f61ce0();
   input += synapse0x319e380();
   input += synapse0x319e3c0();
   input += synapse0x319efa0();
   input += synapse0x319efe0();
   input += synapse0x319f020();
   input += synapse0x319f060();
   input += synapse0x319f0a0();
   input += synapse0x319f0e0();
   input += synapse0x319f120();
   input += synapse0x319f160();
   input += synapse0x319f1a0();
   input += synapse0x319f1e0();
   input += synapse0x319f220();
   input += synapse0x319f260();
   input += synapse0x319f2a0();
   input += synapse0x3198230();
   input += synapse0x3198270();
   input += synapse0x31982b0();
   input += synapse0x319f3f0();
   input += synapse0x319f430();
   input += synapse0x319f470();
   input += synapse0x319f4b0();
   input += synapse0x319f4f0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x319e1f0() {
   double input = input0x319e1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x319f530() {
   double input = -2.91755;
   input += synapse0x319f870();
   input += synapse0x319f8b0();
   input += synapse0x319f8f0();
   input += synapse0x319f930();
   input += synapse0x319f970();
   input += synapse0x319f9b0();
   input += synapse0x319f9f0();
   input += synapse0x319fa30();
   input += synapse0x319fa70();
   input += synapse0x319fab0();
   input += synapse0x319faf0();
   input += synapse0x319fb30();
   input += synapse0x319fb70();
   input += synapse0x319fbb0();
   input += synapse0x319fbf0();
   input += synapse0x319fc30();
   input += synapse0x319f6c0();
   input += synapse0x319f700();
   input += synapse0x319fd80();
   input += synapse0x319fdc0();
   input += synapse0x319fe00();
   input += synapse0x319fe40();
   input += synapse0x319fe80();
   input += synapse0x319fec0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x319f530() {
   double input = input0x319f530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x319ff00() {
   double input = 0.093862;
   input += synapse0x31a0240();
   input += synapse0x31a0280();
   input += synapse0x31a02c0();
   input += synapse0x31a0300();
   input += synapse0x31a0340();
   input += synapse0x31a0380();
   input += synapse0x31a03c0();
   input += synapse0x31a0400();
   input += synapse0x31a0440();
   input += synapse0x2f617b0();
   input += synapse0x2f617f0();
   input += synapse0x2f61830();
   input += synapse0x2f61870();
   input += synapse0x2f618b0();
   input += synapse0x2f618f0();
   input += synapse0x2f61930();
   input += synapse0x31a0090();
   input += synapse0x31a00d0();
   input += synapse0x2f61a80();
   input += synapse0x2f61ac0();
   input += synapse0x2f61b00();
   input += synapse0x2f61b40();
   input += synapse0x2f61b80();
   input += synapse0x31a0c90();
   return input;
}

double NNfunction_ss_uRcR::neuron0x319ff00() {
   double input = input0x319ff00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31a0cd0() {
   double input = 0.1141;
   input += synapse0x31a1010();
   input += synapse0x31a1050();
   input += synapse0x31a1090();
   input += synapse0x31a10d0();
   input += synapse0x31a1110();
   input += synapse0x31a1150();
   input += synapse0x31a1190();
   input += synapse0x31a11d0();
   input += synapse0x31a1210();
   input += synapse0x31a1250();
   input += synapse0x31a1290();
   input += synapse0x31a12d0();
   input += synapse0x31a1310();
   input += synapse0x31a1350();
   input += synapse0x31a1390();
   input += synapse0x31a13d0();
   input += synapse0x31a0e60();
   input += synapse0x31a0ea0();
   input += synapse0x31a1520();
   input += synapse0x31a1560();
   input += synapse0x31a15a0();
   input += synapse0x31a15e0();
   input += synapse0x31a1620();
   input += synapse0x31a1660();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31a0cd0() {
   double input = input0x31a0cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31a16a0() {
   double input = 1.0097;
   input += synapse0x31a19e0();
   input += synapse0x31a1a20();
   input += synapse0x31a1a60();
   input += synapse0x31a1aa0();
   input += synapse0x31a1ae0();
   input += synapse0x31a1b20();
   input += synapse0x31a1b60();
   input += synapse0x31a1ba0();
   input += synapse0x31a1be0();
   input += synapse0x31a1c20();
   input += synapse0x31a1c60();
   input += synapse0x31a1ca0();
   input += synapse0x31a1ce0();
   input += synapse0x31a1d20();
   input += synapse0x31a1d60();
   input += synapse0x31a1da0();
   input += synapse0x31a1830();
   input += synapse0x31a1870();
   input += synapse0x31a1ef0();
   input += synapse0x31a1f30();
   input += synapse0x31a1f70();
   input += synapse0x31a1fb0();
   input += synapse0x31a1ff0();
   input += synapse0x31a2030();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31a16a0() {
   double input = input0x31a16a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31a2070() {
   double input = 0.175304;
   input += synapse0x319bb40();
   input += synapse0x319bb80();
   input += synapse0x319bbc0();
   input += synapse0x319bc00();
   input += synapse0x31a25c0();
   input += synapse0x31a2600();
   input += synapse0x31a2640();
   input += synapse0x31a2680();
   input += synapse0x31a26c0();
   input += synapse0x31a2700();
   input += synapse0x31a2740();
   input += synapse0x31a2780();
   input += synapse0x31a27c0();
   input += synapse0x31a2800();
   input += synapse0x31a2840();
   input += synapse0x31a2880();
   input += synapse0x31a2200();
   input += synapse0x31a2240();
   input += synapse0x31a29d0();
   input += synapse0x31a2a10();
   input += synapse0x31a2a50();
   input += synapse0x31a2a90();
   input += synapse0x31a2ad0();
   input += synapse0x31a2b10();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31a2070() {
   double input = input0x31a2070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31a2b50() {
   double input = 0.52548;
   input += synapse0x31a2e90();
   input += synapse0x31a2ed0();
   input += synapse0x31a2f10();
   input += synapse0x31a2f50();
   input += synapse0x31a2f90();
   input += synapse0x31a2fd0();
   input += synapse0x31a3010();
   input += synapse0x31a3050();
   input += synapse0x31a3090();
   input += synapse0x31a30d0();
   input += synapse0x31a3110();
   input += synapse0x31a3150();
   input += synapse0x31a3190();
   input += synapse0x31a31d0();
   input += synapse0x31a3210();
   input += synapse0x31a3250();
   input += synapse0x31a2ce0();
   input += synapse0x31a2d20();
   input += synapse0x31a33a0();
   input += synapse0x31a33e0();
   input += synapse0x31a3420();
   input += synapse0x31a3460();
   input += synapse0x31a34a0();
   input += synapse0x31a34e0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31a2b50() {
   double input = input0x31a2b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31a3520() {
   double input = 1.32587;
   input += synapse0x31a3860();
   input += synapse0x31a38a0();
   input += synapse0x31a38e0();
   input += synapse0x31a3920();
   input += synapse0x31a3960();
   input += synapse0x31a39a0();
   input += synapse0x31a39e0();
   input += synapse0x31a3a20();
   input += synapse0x31a3a60();
   input += synapse0x31a3aa0();
   input += synapse0x31a3ae0();
   input += synapse0x31a3b20();
   input += synapse0x31a3b60();
   input += synapse0x31a3ba0();
   input += synapse0x31a3be0();
   input += synapse0x31a3c20();
   input += synapse0x31a36b0();
   input += synapse0x31a36f0();
   input += synapse0x31a0480();
   input += synapse0x31a04c0();
   input += synapse0x31a0500();
   input += synapse0x31a0540();
   input += synapse0x31a0580();
   input += synapse0x31a05c0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31a3520() {
   double input = input0x31a3520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31a0600() {
   double input = -0.56896;
   input += synapse0x31a0940();
   input += synapse0x31a0980();
   input += synapse0x31a09c0();
   input += synapse0x31a0a00();
   input += synapse0x31a0a40();
   input += synapse0x31a0a80();
   input += synapse0x31a0ac0();
   input += synapse0x31a0b00();
   input += synapse0x31a0b40();
   input += synapse0x31a0b80();
   input += synapse0x31a0bc0();
   input += synapse0x31a0c00();
   input += synapse0x31a0c40();
   input += synapse0x31a4d80();
   input += synapse0x31a4dc0();
   input += synapse0x31a4e00();
   input += synapse0x31a0790();
   input += synapse0x31a07d0();
   input += synapse0x31a4f50();
   input += synapse0x31a4f90();
   input += synapse0x31a4fd0();
   input += synapse0x31a5010();
   input += synapse0x31a5050();
   input += synapse0x31a5090();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31a0600() {
   double input = input0x31a0600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31a50d0() {
   double input = 1.2954;
   input += synapse0x31a5410();
   input += synapse0x31a5450();
   input += synapse0x31a5490();
   input += synapse0x31a54d0();
   input += synapse0x31a5510();
   input += synapse0x31a5550();
   input += synapse0x31a5590();
   input += synapse0x31a55d0();
   input += synapse0x31a5610();
   input += synapse0x31a5650();
   input += synapse0x31a5690();
   input += synapse0x31a56d0();
   input += synapse0x31a5710();
   input += synapse0x31a5750();
   input += synapse0x31a5790();
   input += synapse0x31a57d0();
   input += synapse0x31a5260();
   input += synapse0x31a52a0();
   input += synapse0x31a5920();
   input += synapse0x31a5960();
   input += synapse0x31a59a0();
   input += synapse0x31a59e0();
   input += synapse0x31a5a20();
   input += synapse0x31a5a60();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31a50d0() {
   double input = input0x31a50d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31a5aa0() {
   double input = 0.227351;
   input += synapse0x31a5de0();
   input += synapse0x31a5e20();
   input += synapse0x31a5e60();
   input += synapse0x31a5ea0();
   input += synapse0x31a5ee0();
   input += synapse0x31a5f20();
   input += synapse0x31a5f60();
   input += synapse0x31a5fa0();
   input += synapse0x31a5fe0();
   input += synapse0x31a6020();
   input += synapse0x31a6060();
   input += synapse0x31a60a0();
   input += synapse0x31a60e0();
   input += synapse0x31a6120();
   input += synapse0x31a6160();
   input += synapse0x31a61a0();
   input += synapse0x31a5c30();
   input += synapse0x31a5c70();
   input += synapse0x31a62f0();
   input += synapse0x31a6330();
   input += synapse0x31a6370();
   input += synapse0x31a63b0();
   input += synapse0x31a63f0();
   input += synapse0x31a6430();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31a5aa0() {
   double input = input0x31a5aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31a6470() {
   double input = 0.631211;
   input += synapse0x31a67b0();
   input += synapse0x31a67f0();
   input += synapse0x31a6830();
   input += synapse0x31a6870();
   input += synapse0x31a68b0();
   input += synapse0x31a68f0();
   input += synapse0x31a6930();
   input += synapse0x31a6970();
   input += synapse0x31a69b0();
   input += synapse0x31a69f0();
   input += synapse0x31a6a30();
   input += synapse0x31a6a70();
   input += synapse0x31a6ab0();
   input += synapse0x31a6af0();
   input += synapse0x31a6b30();
   input += synapse0x31a6b70();
   input += synapse0x31a6600();
   input += synapse0x31a6640();
   input += synapse0x31a6cc0();
   input += synapse0x31a6d00();
   input += synapse0x31a6d40();
   input += synapse0x31a6d80();
   input += synapse0x31a6dc0();
   input += synapse0x31a6e00();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31a6470() {
   double input = input0x31a6470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31a6e40() {
   double input = 0.623991;
   input += synapse0x31a7180();
   input += synapse0x3198510();
   input += synapse0x3198550();
   input += synapse0x3198850();
   input += synapse0x3198890();
   input += synapse0x3198b90();
   input += synapse0x3198bd0();
   input += synapse0x3198ed0();
   input += synapse0x3198f10();
   input += synapse0x3199210();
   input += synapse0x3199250();
   input += synapse0x3199550();
   input += synapse0x3199590();
   input += synapse0x3199890();
   input += synapse0x31998d0();
   input += synapse0x3199bd0();
   input += synapse0x3199c10();
   input += synapse0x3199f10();
   input += synapse0x3199f50();
   input += synapse0x319a250();
   input += synapse0x319a290();
   input += synapse0x319a590();
   input += synapse0x319a5d0();
   input += synapse0x319a8d0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31a6e40() {
   double input = input0x31a6e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31a8c50() {
   double input = 1.95982;
   input += synapse0x319a910();
   input += synapse0x319b5d0();
   input += synapse0x319b610();
   input += synapse0x31a6fd0();
   input += synapse0x31a7010();
   input += synapse0x319b910();
   input += synapse0x319b950();
   input += synapse0x2f533f0();
   input += synapse0x2f53430();
   input += synapse0x319c090();
   input += synapse0x319c0d0();
   input += synapse0x319c3d0();
   input += synapse0x319c410();
   input += synapse0x319c710();
   input += synapse0x319c750();
   input += synapse0x319ca50();
   input += synapse0x319ca90();
   input += synapse0x319cd90();
   input += synapse0x319cdd0();
   input += synapse0x319d0d0();
   input += synapse0x319d110();
   input += synapse0x319ac10();
   input += synapse0x319ac50();
   input += synapse0x31a8ef0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31a8c50() {
   double input = input0x31a8c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31a8f30() {
   double input = -1.80129;
   input += synapse0x31a9270();
   input += synapse0x31a92b0();
   input += synapse0x31a92f0();
   input += synapse0x31a9330();
   input += synapse0x31a9370();
   input += synapse0x31a93b0();
   input += synapse0x31a93f0();
   input += synapse0x31a9430();
   input += synapse0x31a9470();
   input += synapse0x31a94b0();
   input += synapse0x31a94f0();
   input += synapse0x31a9530();
   input += synapse0x31a9570();
   input += synapse0x31a95b0();
   input += synapse0x31a95f0();
   input += synapse0x31a9630();
   input += synapse0x31a90c0();
   input += synapse0x31a9100();
   input += synapse0x31a9780();
   input += synapse0x31a97c0();
   input += synapse0x31a9800();
   input += synapse0x31a9840();
   input += synapse0x31a9880();
   input += synapse0x31a98c0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31a8f30() {
   double input = input0x31a8f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31a9900() {
   double input = 0.790434;
   input += synapse0x31a9c40();
   input += synapse0x31a9c80();
   input += synapse0x31a9cc0();
   input += synapse0x31a9d00();
   input += synapse0x31a9d40();
   input += synapse0x31a9d80();
   input += synapse0x31a9dc0();
   input += synapse0x31a9e00();
   input += synapse0x31a9e40();
   input += synapse0x31a9e80();
   input += synapse0x31a9ec0();
   input += synapse0x31a9f00();
   input += synapse0x31a9f40();
   input += synapse0x31a9f80();
   input += synapse0x31a9fc0();
   input += synapse0x31aa000();
   input += synapse0x31a9a90();
   input += synapse0x31a9ad0();
   input += synapse0x31aa150();
   input += synapse0x31aa190();
   input += synapse0x31aa1d0();
   input += synapse0x31aa210();
   input += synapse0x31aa250();
   input += synapse0x31aa290();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31a9900() {
   double input = input0x31a9900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31aa2d0() {
   double input = -0.659184;
   input += synapse0x31aa610();
   input += synapse0x31aa650();
   input += synapse0x31aa690();
   input += synapse0x31aa6d0();
   input += synapse0x31aa710();
   input += synapse0x31aa750();
   input += synapse0x31aa790();
   input += synapse0x31aa7d0();
   input += synapse0x31aa810();
   input += synapse0x31aa850();
   input += synapse0x31aa890();
   input += synapse0x31aa8d0();
   input += synapse0x31aa910();
   input += synapse0x31aa950();
   input += synapse0x31aa990();
   input += synapse0x31aa9d0();
   input += synapse0x31aa460();
   input += synapse0x31aa4a0();
   input += synapse0x31aab20();
   input += synapse0x31aab60();
   input += synapse0x31aaba0();
   input += synapse0x31aabe0();
   input += synapse0x31aac20();
   input += synapse0x31aac60();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31aa2d0() {
   double input = input0x31aa2d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31aaca0() {
   double input = 1.34664;
   input += synapse0x31aafe0();
   input += synapse0x31ab020();
   input += synapse0x31ab060();
   input += synapse0x31ab0a0();
   input += synapse0x31ab0e0();
   input += synapse0x31ab120();
   input += synapse0x31ab160();
   input += synapse0x31ab1a0();
   input += synapse0x31ab1e0();
   input += synapse0x31ab220();
   input += synapse0x31ab260();
   input += synapse0x31ab2a0();
   input += synapse0x31ab2e0();
   input += synapse0x31ab320();
   input += synapse0x31ab360();
   input += synapse0x31ab3a0();
   input += synapse0x31aae30();
   input += synapse0x31aae70();
   input += synapse0x31ab4f0();
   input += synapse0x31ab530();
   input += synapse0x31ab570();
   input += synapse0x31ab5b0();
   input += synapse0x31ab5f0();
   input += synapse0x31ab630();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31aaca0() {
   double input = input0x31aaca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31ab670() {
   double input = 1.06429;
   input += synapse0x31ab9b0();
   input += synapse0x31ab9f0();
   input += synapse0x31aba30();
   input += synapse0x31aba70();
   input += synapse0x31abab0();
   input += synapse0x31abaf0();
   input += synapse0x31abb30();
   input += synapse0x31abb70();
   input += synapse0x31abbb0();
   input += synapse0x31a3d70();
   input += synapse0x31a3db0();
   input += synapse0x31a3df0();
   input += synapse0x31a3e30();
   input += synapse0x31a3e70();
   input += synapse0x31a3eb0();
   input += synapse0x31a3ef0();
   input += synapse0x31ab800();
   input += synapse0x31ab840();
   input += synapse0x31a4040();
   input += synapse0x31a4080();
   input += synapse0x31a40c0();
   input += synapse0x31a4100();
   input += synapse0x31a4140();
   input += synapse0x31a4180();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31ab670() {
   double input = input0x31ab670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31a41c0() {
   double input = -1.42511;
   input += synapse0x31a4500();
   input += synapse0x31a4540();
   input += synapse0x31a4580();
   input += synapse0x31a45c0();
   input += synapse0x31a4600();
   input += synapse0x31a4640();
   input += synapse0x31a4680();
   input += synapse0x31a46c0();
   input += synapse0x31a4700();
   input += synapse0x31a4740();
   input += synapse0x31a4780();
   input += synapse0x31a47c0();
   input += synapse0x31a4800();
   input += synapse0x31a4840();
   input += synapse0x31a4880();
   input += synapse0x31a48c0();
   input += synapse0x31a4350();
   input += synapse0x31a4390();
   input += synapse0x31a4a10();
   input += synapse0x31a4a50();
   input += synapse0x31a4a90();
   input += synapse0x31a4ad0();
   input += synapse0x31a4b10();
   input += synapse0x31a4b50();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31a41c0() {
   double input = input0x31a41c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31a4b90() {
   double input = -0.219746;
   input += synapse0x31a4d20();
   input += synapse0x31addb0();
   input += synapse0x31addf0();
   input += synapse0x31ade30();
   input += synapse0x31ade70();
   input += synapse0x31adeb0();
   input += synapse0x31adef0();
   input += synapse0x31adf30();
   input += synapse0x31adf70();
   input += synapse0x31adfb0();
   input += synapse0x31adff0();
   input += synapse0x31ae030();
   input += synapse0x31ae070();
   input += synapse0x31ae0b0();
   input += synapse0x31ae0f0();
   input += synapse0x31ae130();
   input += synapse0x31adc00();
   input += synapse0x31adc40();
   input += synapse0x31ae280();
   input += synapse0x31ae2c0();
   input += synapse0x31ae300();
   input += synapse0x31ae340();
   input += synapse0x31ae380();
   input += synapse0x31ae3c0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31a4b90() {
   double input = input0x31a4b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31ae400() {
   double input = -3.19102;
   input += synapse0x31ae740();
   input += synapse0x31ae780();
   input += synapse0x31ae7c0();
   input += synapse0x31ae800();
   input += synapse0x31ae840();
   input += synapse0x31ae880();
   input += synapse0x31ae8c0();
   input += synapse0x31ae900();
   input += synapse0x31ae940();
   input += synapse0x31ae980();
   input += synapse0x31ae9c0();
   input += synapse0x31aea00();
   input += synapse0x31aea40();
   input += synapse0x31aea80();
   input += synapse0x31aeac0();
   input += synapse0x31aeb00();
   input += synapse0x31ae590();
   input += synapse0x31ae5d0();
   input += synapse0x31aec50();
   input += synapse0x31aec90();
   input += synapse0x31aecd0();
   input += synapse0x31aed10();
   input += synapse0x31aed50();
   input += synapse0x31aed90();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31ae400() {
   double input = input0x31ae400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31aedd0() {
   double input = -2.39227;
   input += synapse0x31af110();
   input += synapse0x31af150();
   input += synapse0x31af190();
   input += synapse0x31af1d0();
   input += synapse0x31af210();
   input += synapse0x31af250();
   input += synapse0x31af290();
   input += synapse0x31af2d0();
   input += synapse0x31af310();
   input += synapse0x31af350();
   input += synapse0x31af390();
   input += synapse0x31af3d0();
   input += synapse0x31af410();
   input += synapse0x31af450();
   input += synapse0x31af490();
   input += synapse0x31af4d0();
   input += synapse0x31aef60();
   input += synapse0x31aefa0();
   input += synapse0x31af620();
   input += synapse0x31af660();
   input += synapse0x31af6a0();
   input += synapse0x31af6e0();
   input += synapse0x31af720();
   input += synapse0x31af760();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31aedd0() {
   double input = input0x31aedd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31af7a0() {
   double input = 1.22619;
   input += synapse0x31afae0();
   input += synapse0x31afb20();
   input += synapse0x31afb60();
   input += synapse0x31afba0();
   input += synapse0x31afbe0();
   input += synapse0x31afc20();
   input += synapse0x31afc60();
   input += synapse0x31afca0();
   input += synapse0x31afce0();
   input += synapse0x31afd20();
   input += synapse0x31afd60();
   input += synapse0x31afda0();
   input += synapse0x31afde0();
   input += synapse0x31afe20();
   input += synapse0x31afe60();
   input += synapse0x31afea0();
   input += synapse0x31af930();
   input += synapse0x31af970();
   input += synapse0x31afff0();
   input += synapse0x31b0030();
   input += synapse0x31b0070();
   input += synapse0x31b00b0();
   input += synapse0x31b00f0();
   input += synapse0x31b0130();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31af7a0() {
   double input = input0x31af7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31b0170() {
   double input = -1.67457;
   input += synapse0x31b04b0();
   input += synapse0x31b04f0();
   input += synapse0x31b0530();
   input += synapse0x31b0570();
   input += synapse0x31b05b0();
   input += synapse0x31b05f0();
   input += synapse0x31b0630();
   input += synapse0x31b0670();
   input += synapse0x31b06b0();
   input += synapse0x31b06f0();
   input += synapse0x31b0730();
   input += synapse0x31b0770();
   input += synapse0x31b07b0();
   input += synapse0x31b07f0();
   input += synapse0x31b0830();
   input += synapse0x31b0870();
   input += synapse0x31b0300();
   input += synapse0x31b0340();
   input += synapse0x31b09c0();
   input += synapse0x31b0a00();
   input += synapse0x31b0a40();
   input += synapse0x31b0a80();
   input += synapse0x31b0ac0();
   input += synapse0x31b0b00();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31b0170() {
   double input = input0x31b0170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31b0b40() {
   double input = -0.362172;
   input += synapse0x31b0e80();
   input += synapse0x31b0ec0();
   input += synapse0x31b0f00();
   input += synapse0x31b0f40();
   input += synapse0x31b0f80();
   input += synapse0x31b0fc0();
   input += synapse0x31b1000();
   input += synapse0x31b1040();
   input += synapse0x31b1080();
   input += synapse0x31b10c0();
   input += synapse0x31b1100();
   input += synapse0x31b1140();
   input += synapse0x31b1180();
   input += synapse0x31b11c0();
   input += synapse0x31b1200();
   input += synapse0x31b1240();
   input += synapse0x31b0cd0();
   input += synapse0x31b0d10();
   input += synapse0x31b1390();
   input += synapse0x31b13d0();
   input += synapse0x31b1410();
   input += synapse0x31b1450();
   input += synapse0x31b1490();
   input += synapse0x31b14d0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31b0b40() {
   double input = input0x31b0b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31b1510() {
   double input = -0.881829;
   input += synapse0x31b1850();
   input += synapse0x31b1890();
   input += synapse0x31b18d0();
   input += synapse0x31b1910();
   input += synapse0x31b1950();
   input += synapse0x31b1990();
   input += synapse0x31b19d0();
   input += synapse0x31b1a10();
   input += synapse0x31b1a50();
   input += synapse0x31b1a90();
   input += synapse0x31b1ad0();
   input += synapse0x31b1b10();
   input += synapse0x31b1b50();
   input += synapse0x31b1b90();
   input += synapse0x31b1bd0();
   input += synapse0x31b1c10();
   input += synapse0x31b16a0();
   input += synapse0x31b16e0();
   input += synapse0x31b1d60();
   input += synapse0x31b1da0();
   input += synapse0x31b1de0();
   input += synapse0x31b1e20();
   input += synapse0x31b1e60();
   input += synapse0x31b1ea0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31b1510() {
   double input = input0x31b1510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31b1ee0() {
   double input = 0.797773;
   input += synapse0x31b2220();
   input += synapse0x31b2260();
   input += synapse0x31b22a0();
   input += synapse0x31b22e0();
   input += synapse0x31b2320();
   input += synapse0x31b2360();
   input += synapse0x31b23a0();
   input += synapse0x31b23e0();
   input += synapse0x31b2420();
   input += synapse0x31b2460();
   input += synapse0x31b24a0();
   input += synapse0x31b24e0();
   input += synapse0x31b2520();
   input += synapse0x31b2560();
   input += synapse0x31b25a0();
   input += synapse0x31b25e0();
   input += synapse0x31b2070();
   input += synapse0x31b20b0();
   input += synapse0x31b2730();
   input += synapse0x31b2770();
   input += synapse0x31b27b0();
   input += synapse0x31b27f0();
   input += synapse0x31b2830();
   input += synapse0x31b2870();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31b1ee0() {
   double input = input0x31b1ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31b28b0() {
   double input = -1.47662;
   input += synapse0x31b2bf0();
   input += synapse0x31a71c0();
   input += synapse0x31a7200();
   input += synapse0x31a7240();
   input += synapse0x31a7490();
   input += synapse0x31a74d0();
   input += synapse0x31a7510();
   input += synapse0x31a7760();
   input += synapse0x31a77a0();
   input += synapse0x31a79f0();
   input += synapse0x31a7a30();
   input += synapse0x31a7a70();
   input += synapse0x31a7cc0();
   input += synapse0x31a7d00();
   input += synapse0x31a7f50();
   input += synapse0x31a7f90();
   input += synapse0x31b2a40();
   input += synapse0x31b2a80();
   input += synapse0x31a80e0();
   input += synapse0x31a85f0();
   input += synapse0x31a8630();
   input += synapse0x31a8670();
   input += synapse0x31a88c0();
   input += synapse0x31a8900();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31b28b0() {
   double input = input0x31b28b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31a8940() {
   double input = 1.17701;
   input += synapse0x31a81b0();
   input += synapse0x31a81f0();
   input += synapse0x31a8230();
   input += synapse0x31a8270();
   input += synapse0x31a8bf0();
   input += synapse0x31b4f40();
   input += synapse0x31b4f80();
   input += synapse0x31b4fc0();
   input += synapse0x31b5000();
   input += synapse0x31b5040();
   input += synapse0x31b5080();
   input += synapse0x31b50c0();
   input += synapse0x31b5100();
   input += synapse0x31b5140();
   input += synapse0x31b5180();
   input += synapse0x31b51c0();
   input += synapse0x31a8ad0();
   input += synapse0x31a8b10();
   input += synapse0x31b5310();
   input += synapse0x31b5350();
   input += synapse0x31b5390();
   input += synapse0x31b53d0();
   input += synapse0x31b5410();
   input += synapse0x31b5450();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31a8940() {
   double input = input0x31a8940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31b5490() {
   double input = -0.0691187;
   input += synapse0x31b57d0();
   input += synapse0x31b5810();
   input += synapse0x31b5850();
   input += synapse0x31b5890();
   input += synapse0x31b58d0();
   input += synapse0x31b5910();
   input += synapse0x31b5950();
   input += synapse0x31b5990();
   input += synapse0x31b59d0();
   input += synapse0x31b5a10();
   input += synapse0x31b5a50();
   input += synapse0x31b5a90();
   input += synapse0x31b5ad0();
   input += synapse0x31b5b10();
   input += synapse0x31b5b50();
   input += synapse0x31b5b90();
   input += synapse0x31b5620();
   input += synapse0x31b5660();
   input += synapse0x31b5ce0();
   input += synapse0x31b5d20();
   input += synapse0x31b5d60();
   input += synapse0x31b5da0();
   input += synapse0x31b5de0();
   input += synapse0x31b5e20();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31b5490() {
   double input = input0x31b5490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31b5e60() {
   double input = 0.41826;
   input += synapse0x31b61a0();
   input += synapse0x31b61e0();
   input += synapse0x31b6220();
   input += synapse0x31b6260();
   input += synapse0x31b62a0();
   input += synapse0x31b62e0();
   input += synapse0x31b6320();
   input += synapse0x31b6360();
   input += synapse0x31b63a0();
   input += synapse0x31b63e0();
   input += synapse0x31b6420();
   input += synapse0x31b6460();
   input += synapse0x31b64a0();
   input += synapse0x31b64e0();
   input += synapse0x31b6520();
   input += synapse0x31b6560();
   input += synapse0x31b5ff0();
   input += synapse0x31b6030();
   input += synapse0x31b66b0();
   input += synapse0x31b66f0();
   input += synapse0x31b6730();
   input += synapse0x31b6770();
   input += synapse0x31b67b0();
   input += synapse0x31b67f0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31b5e60() {
   double input = input0x31b5e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31b6830() {
   double input = 0.495006;
   input += synapse0x31b6b70();
   input += synapse0x31b6bb0();
   input += synapse0x31b6bf0();
   input += synapse0x31b6c30();
   input += synapse0x31b6c70();
   input += synapse0x31b6cb0();
   input += synapse0x31b6cf0();
   input += synapse0x31b6d30();
   input += synapse0x31b6d70();
   input += synapse0x31b6db0();
   input += synapse0x31b6df0();
   input += synapse0x31b6e30();
   input += synapse0x31b6e70();
   input += synapse0x31b6eb0();
   input += synapse0x31b6ef0();
   input += synapse0x31b6f30();
   input += synapse0x31b69c0();
   input += synapse0x31b6a00();
   input += synapse0x31b7080();
   input += synapse0x31b70c0();
   input += synapse0x31b7100();
   input += synapse0x31b7140();
   input += synapse0x31b7180();
   input += synapse0x31b71c0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31b6830() {
   double input = input0x31b6830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31b7200() {
   double input = -1.86423;
   input += synapse0x31b7540();
   input += synapse0x31b7580();
   input += synapse0x31b75c0();
   input += synapse0x31b7600();
   input += synapse0x31b7640();
   input += synapse0x31b7680();
   input += synapse0x31b76c0();
   input += synapse0x31b7700();
   input += synapse0x31b7740();
   input += synapse0x31b7780();
   input += synapse0x31b77c0();
   input += synapse0x31b7800();
   input += synapse0x31b7840();
   input += synapse0x31b7880();
   input += synapse0x31b78c0();
   input += synapse0x31b7900();
   input += synapse0x31b7390();
   input += synapse0x31b73d0();
   input += synapse0x31b7a50();
   input += synapse0x31b7a90();
   input += synapse0x31b7ad0();
   input += synapse0x31b7b10();
   input += synapse0x31b7b50();
   input += synapse0x31b7b90();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31b7200() {
   double input = input0x31b7200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31b7bd0() {
   double input = 2.28877;
   input += synapse0x31b7f10();
   input += synapse0x31b7f50();
   input += synapse0x31b7f90();
   input += synapse0x31b7fd0();
   input += synapse0x31b8010();
   input += synapse0x31b8050();
   input += synapse0x31b8090();
   input += synapse0x31b80d0();
   input += synapse0x31b8110();
   input += synapse0x31b8150();
   input += synapse0x31b8190();
   input += synapse0x31b81d0();
   input += synapse0x31b8210();
   input += synapse0x31b8250();
   input += synapse0x31b8290();
   input += synapse0x31b82d0();
   input += synapse0x31b7d60();
   input += synapse0x31b7da0();
   input += synapse0x31b8420();
   input += synapse0x31b8460();
   input += synapse0x31b84a0();
   input += synapse0x31b84e0();
   input += synapse0x31b8520();
   input += synapse0x31b8560();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31b7bd0() {
   double input = input0x31b7bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31b85a0() {
   double input = -1.25923;
   input += synapse0x31b88e0();
   input += synapse0x31b8920();
   input += synapse0x31b8960();
   input += synapse0x31b89a0();
   input += synapse0x31b89e0();
   input += synapse0x31b8a20();
   input += synapse0x31b8a60();
   input += synapse0x31b8aa0();
   input += synapse0x31b8ae0();
   input += synapse0x31b8b20();
   input += synapse0x31b8b60();
   input += synapse0x31b8ba0();
   input += synapse0x31b8be0();
   input += synapse0x31b8c20();
   input += synapse0x31b8c60();
   input += synapse0x31b8ca0();
   input += synapse0x31b8730();
   input += synapse0x31b8770();
   input += synapse0x31b8df0();
   input += synapse0x31b8e30();
   input += synapse0x31b8e70();
   input += synapse0x31b8eb0();
   input += synapse0x31b8ef0();
   input += synapse0x31b8f30();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31b85a0() {
   double input = input0x31b85a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31b8f70() {
   double input = -0.634922;
   input += synapse0x31b92b0();
   input += synapse0x31b92f0();
   input += synapse0x31b9330();
   input += synapse0x31b9370();
   input += synapse0x31b93b0();
   input += synapse0x31b93f0();
   input += synapse0x31b9430();
   input += synapse0x31b9470();
   input += synapse0x31b94b0();
   input += synapse0x31b94f0();
   input += synapse0x31b9530();
   input += synapse0x31b9570();
   input += synapse0x31b95b0();
   input += synapse0x31b95f0();
   input += synapse0x31b9630();
   input += synapse0x31b9670();
   input += synapse0x31b9100();
   input += synapse0x31b9140();
   input += synapse0x31b97c0();
   input += synapse0x31b9800();
   input += synapse0x31b9840();
   input += synapse0x31b9880();
   input += synapse0x31b98c0();
   input += synapse0x31b9900();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31b8f70() {
   double input = input0x31b8f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31b9940() {
   double input = -1.11029;
   input += synapse0x31a23b0();
   input += synapse0x31a23f0();
   input += synapse0x31a2430();
   input += synapse0x31a2470();
   input += synapse0x31a24b0();
   input += synapse0x31a24f0();
   input += synapse0x31a2530();
   input += synapse0x31a2570();
   input += synapse0x31ba090();
   input += synapse0x31ba0d0();
   input += synapse0x31ba110();
   input += synapse0x31ba150();
   input += synapse0x31ba190();
   input += synapse0x31ba1d0();
   input += synapse0x31ba210();
   input += synapse0x31ba250();
   input += synapse0x31b9ad0();
   input += synapse0x31b9b10();
   input += synapse0x31ba3a0();
   input += synapse0x31ba3e0();
   input += synapse0x31ba420();
   input += synapse0x31ba460();
   input += synapse0x31ba4a0();
   input += synapse0x31ba4e0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31b9940() {
   double input = input0x31b9940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31ba520() {
   double input = 2.06252;
   input += synapse0x31ba860();
   input += synapse0x31ba8a0();
   input += synapse0x31ba8e0();
   input += synapse0x31ba920();
   input += synapse0x31ba960();
   input += synapse0x31ba9a0();
   input += synapse0x31ba9e0();
   input += synapse0x31baa20();
   input += synapse0x31baa60();
   input += synapse0x31baaa0();
   input += synapse0x31baae0();
   input += synapse0x31bab20();
   input += synapse0x31bab60();
   input += synapse0x31baba0();
   input += synapse0x31babe0();
   input += synapse0x31bac20();
   input += synapse0x31ba6b0();
   input += synapse0x31ba6f0();
   input += synapse0x31bad70();
   input += synapse0x31badb0();
   input += synapse0x31badf0();
   input += synapse0x31bae30();
   input += synapse0x31bae70();
   input += synapse0x31baeb0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31ba520() {
   double input = input0x31ba520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31baef0() {
   double input = 2.79918;
   input += synapse0x31bb230();
   input += synapse0x31bb270();
   input += synapse0x31bb2b0();
   input += synapse0x31bb2f0();
   input += synapse0x31bb330();
   input += synapse0x31bb370();
   input += synapse0x31bb3b0();
   input += synapse0x31bb3f0();
   input += synapse0x31bb430();
   input += synapse0x31bb470();
   input += synapse0x31bb4b0();
   input += synapse0x31bb4f0();
   input += synapse0x31bb530();
   input += synapse0x31bb570();
   input += synapse0x31bb5b0();
   input += synapse0x31bb5f0();
   input += synapse0x31bb080();
   input += synapse0x31bb0c0();
   input += synapse0x31abbf0();
   input += synapse0x31abc30();
   input += synapse0x31abc70();
   input += synapse0x31abcb0();
   input += synapse0x31abcf0();
   input += synapse0x31abd30();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31baef0() {
   double input = input0x31baef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31abd70() {
   double input = -0.297159;
   input += synapse0x31ac0b0();
   input += synapse0x31ac0f0();
   input += synapse0x31ac130();
   input += synapse0x31ac170();
   input += synapse0x31ac1b0();
   input += synapse0x31ac1f0();
   input += synapse0x31ac230();
   input += synapse0x31ac270();
   input += synapse0x31ac2b0();
   input += synapse0x31ac2f0();
   input += synapse0x31ac330();
   input += synapse0x31ac370();
   input += synapse0x31ac3b0();
   input += synapse0x31ac3f0();
   input += synapse0x31ac430();
   input += synapse0x31ac470();
   input += synapse0x31abf00();
   input += synapse0x31abf40();
   input += synapse0x31ac5c0();
   input += synapse0x31ac600();
   input += synapse0x31ac640();
   input += synapse0x31ac680();
   input += synapse0x31ac6c0();
   input += synapse0x31ac700();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31abd70() {
   double input = input0x31abd70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31ac740() {
   double input = -2.10253;
   input += synapse0x31aca80();
   input += synapse0x31acac0();
   input += synapse0x31acb00();
   input += synapse0x31acb40();
   input += synapse0x31acb80();
   input += synapse0x31acbc0();
   input += synapse0x31acc00();
   input += synapse0x31acc40();
   input += synapse0x31acc80();
   input += synapse0x31accc0();
   input += synapse0x31acd00();
   input += synapse0x31acd40();
   input += synapse0x31acd80();
   input += synapse0x31acdc0();
   input += synapse0x31ace00();
   input += synapse0x31ace40();
   input += synapse0x31ac8d0();
   input += synapse0x31ac910();
   input += synapse0x31acf90();
   input += synapse0x31acfd0();
   input += synapse0x31ad010();
   input += synapse0x31ad050();
   input += synapse0x31ad090();
   input += synapse0x31ad0d0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31ac740() {
   double input = input0x31ac740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31ad110() {
   double input = 1.18513;
   input += synapse0x31ad450();
   input += synapse0x31ad490();
   input += synapse0x31ad4d0();
   input += synapse0x31ad510();
   input += synapse0x31ad550();
   input += synapse0x31ad590();
   input += synapse0x31ad5d0();
   input += synapse0x31ad610();
   input += synapse0x31ad650();
   input += synapse0x31ad690();
   input += synapse0x31ad6d0();
   input += synapse0x31ad710();
   input += synapse0x31ad750();
   input += synapse0x31ad790();
   input += synapse0x31ad7d0();
   input += synapse0x31ad810();
   input += synapse0x31ad2a0();
   input += synapse0x31ad2e0();
   input += synapse0x31ad960();
   input += synapse0x31ad9a0();
   input += synapse0x31ad9e0();
   input += synapse0x31ada20();
   input += synapse0x31ada60();
   input += synapse0x31adaa0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31ad110() {
   double input = input0x31ad110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31bf750() {
   double input = 0.734968;
   input += synapse0x31bf970();
   input += synapse0x31bf9b0();
   input += synapse0x31bf9f0();
   input += synapse0x31bfa30();
   input += synapse0x31bfa70();
   input += synapse0x31bfab0();
   input += synapse0x31bfaf0();
   input += synapse0x31bfb30();
   input += synapse0x31bfb70();
   input += synapse0x31bfbb0();
   input += synapse0x31bfbf0();
   input += synapse0x31bfc30();
   input += synapse0x31bfc70();
   input += synapse0x31bfcb0();
   input += synapse0x31bfcf0();
   input += synapse0x31bfd30();
   input += synapse0x31adae0();
   input += synapse0x31adb20();
   input += synapse0x31bfe80();
   input += synapse0x31bfec0();
   input += synapse0x31bff00();
   input += synapse0x31bff40();
   input += synapse0x31bff80();
   input += synapse0x31bffc0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31bf750() {
   double input = input0x31bf750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31c0000() {
   double input = 2.89144;
   input += synapse0x31c0340();
   input += synapse0x31c0380();
   input += synapse0x31c03c0();
   input += synapse0x31c0400();
   input += synapse0x31c0440();
   input += synapse0x31c0480();
   input += synapse0x31c04c0();
   input += synapse0x31c0500();
   input += synapse0x31c0540();
   input += synapse0x31c0580();
   input += synapse0x31c05c0();
   input += synapse0x31c0600();
   input += synapse0x31c0640();
   input += synapse0x31c0680();
   input += synapse0x31c06c0();
   input += synapse0x31c0700();
   input += synapse0x31c0190();
   input += synapse0x31c01d0();
   input += synapse0x31c0850();
   input += synapse0x31c0890();
   input += synapse0x31c08d0();
   input += synapse0x31c0910();
   input += synapse0x31c0950();
   input += synapse0x31c0990();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31c0000() {
   double input = input0x31c0000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31c09d0() {
   double input = -1.33285;
   input += synapse0x31c0d10();
   input += synapse0x31c0d50();
   input += synapse0x31c0d90();
   input += synapse0x31c0dd0();
   input += synapse0x31c0e10();
   input += synapse0x31c0e50();
   input += synapse0x31c0e90();
   input += synapse0x31c0ed0();
   input += synapse0x31c0f10();
   input += synapse0x31c0f50();
   input += synapse0x31c0f90();
   input += synapse0x31c0fd0();
   input += synapse0x31c1010();
   input += synapse0x31c1050();
   input += synapse0x31c1090();
   input += synapse0x31c10d0();
   input += synapse0x31c0b60();
   input += synapse0x31c0ba0();
   input += synapse0x31c1220();
   input += synapse0x31c1260();
   input += synapse0x31c12a0();
   input += synapse0x31c12e0();
   input += synapse0x31c1320();
   input += synapse0x31c1360();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31c09d0() {
   double input = input0x31c09d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31c13a0() {
   double input = -0.842821;
   input += synapse0x31c16e0();
   input += synapse0x31c1720();
   input += synapse0x31c1760();
   input += synapse0x31c17a0();
   input += synapse0x31c17e0();
   input += synapse0x31c1820();
   input += synapse0x31c1860();
   input += synapse0x31c18a0();
   input += synapse0x31c18e0();
   input += synapse0x31c1920();
   input += synapse0x31c1960();
   input += synapse0x31c19a0();
   input += synapse0x31c19e0();
   input += synapse0x31c1a20();
   input += synapse0x31c1a60();
   input += synapse0x31c1aa0();
   input += synapse0x31c1530();
   input += synapse0x31c1570();
   input += synapse0x31c1bf0();
   input += synapse0x31c1c30();
   input += synapse0x31c1c70();
   input += synapse0x31c1cb0();
   input += synapse0x31c1cf0();
   input += synapse0x31c1d30();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31c13a0() {
   double input = input0x31c13a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31c85a0() {
   double input = -0.107093;
   input += synapse0x2f61c50();
   input += synapse0x2f61c90();
   input += synapse0x319f7e0();
   input += synapse0x319f820();
   input += synapse0x31a01b0();
   input += synapse0x31a01f0();
   input += synapse0x31a0f80();
   input += synapse0x31a0fc0();
   input += synapse0x31a1950();
   input += synapse0x31a1990();
   input += synapse0x31a2320();
   input += synapse0x31a2360();
   input += synapse0x31a2e00();
   input += synapse0x31a2e40();
   input += synapse0x31a37d0();
   input += synapse0x31a3810();
   input += synapse0x31a08b0();
   input += synapse0x31a08f0();
   input += synapse0x31a5380();
   input += synapse0x31a53c0();
   input += synapse0x31a5d50();
   input += synapse0x31a5d90();
   input += synapse0x31a6720();
   input += synapse0x31a6760();
   input += synapse0x31a70f0();
   input += synapse0x31a7130();
   input += synapse0x319b290();
   input += synapse0x319b2d0();
   input += synapse0x31a91e0();
   input += synapse0x31a9220();
   input += synapse0x31a9bb0();
   input += synapse0x31a9bf0();
   input += synapse0x31aa580();
   input += synapse0x31aa5c0();
   input += synapse0x31aaf50();
   input += synapse0x31aaf90();
   input += synapse0x31ab920();
   input += synapse0x31ab960();
   input += synapse0x31a4470();
   input += synapse0x31a44b0();
   input += synapse0x31add20();
   input += synapse0x31add60();
   input += synapse0x31ae6b0();
   input += synapse0x31ae6f0();
   input += synapse0x31af080();
   input += synapse0x31af0c0();
   input += synapse0x31afa50();
   input += synapse0x31afa90();
   input += synapse0x31b0420();
   input += synapse0x31b0460();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31c85a0() {
   double input = input0x31c85a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31c8940() {
   double input = 0.630897;
   input += synapse0x31b2b60();
   input += synapse0x31b2ba0();
   input += synapse0x31a8120();
   input += synapse0x31a8160();
   input += synapse0x31b5740();
   input += synapse0x31b5780();
   input += synapse0x31b6110();
   input += synapse0x31b6150();
   input += synapse0x31b6ae0();
   input += synapse0x31b6b20();
   input += synapse0x31b74b0();
   input += synapse0x31b74f0();
   input += synapse0x31b7e80();
   input += synapse0x31b7ec0();
   input += synapse0x31b8850();
   input += synapse0x31b8890();
   input += synapse0x31b9220();
   input += synapse0x31b9260();
   input += synapse0x31b9bf0();
   input += synapse0x31b9c30();
   input += synapse0x31ba7d0();
   input += synapse0x31ba810();
   input += synapse0x31bb1a0();
   input += synapse0x31bb1e0();
   input += synapse0x31ac020();
   input += synapse0x31ac060();
   input += synapse0x31ac9f0();
   input += synapse0x31aca30();
   input += synapse0x31ad3c0();
   input += synapse0x31ad400();
   input += synapse0x31bf8e0();
   input += synapse0x31bf920();
   input += synapse0x31c02b0();
   input += synapse0x31c02f0();
   input += synapse0x31c0c80();
   input += synapse0x31c0cc0();
   input += synapse0x31c1650();
   input += synapse0x31c1690();
   input += synapse0x319d540();
   input += synapse0x319d580();
   input += synapse0x31b0df0();
   input += synapse0x31b0e30();
   input += synapse0x31c1d70();
   input += synapse0x31c1db0();
   input += synapse0x31c1df0();
   input += synapse0x31c1e30();
   input += synapse0x31c8ce0();
   input += synapse0x31c8d20();
   input += synapse0x31c8d60();
   input += synapse0x31c8da0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31c8940() {
   double input = input0x31c8940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31c8de0() {
   double input = -0.719726;
   input += synapse0x31c9120();
   input += synapse0x31c9160();
   input += synapse0x31c91a0();
   input += synapse0x31c91e0();
   input += synapse0x31c9220();
   input += synapse0x31c9260();
   input += synapse0x31c92a0();
   input += synapse0x31c92e0();
   input += synapse0x31c9320();
   input += synapse0x31c9360();
   input += synapse0x31c93a0();
   input += synapse0x31c93e0();
   input += synapse0x31c9420();
   input += synapse0x31c9460();
   input += synapse0x31c94a0();
   input += synapse0x31c94e0();
   input += synapse0x31c8f70();
   input += synapse0x31c8fb0();
   input += synapse0x31c9630();
   input += synapse0x31c9670();
   input += synapse0x31c96b0();
   input += synapse0x31c96f0();
   input += synapse0x31c9730();
   input += synapse0x31c9770();
   input += synapse0x31c97b0();
   input += synapse0x31c97f0();
   input += synapse0x31c9830();
   input += synapse0x31c9870();
   input += synapse0x31c98b0();
   input += synapse0x31c98f0();
   input += synapse0x31c9930();
   input += synapse0x31c9970();
   input += synapse0x31c9520();
   input += synapse0x31c9560();
   input += synapse0x31c95a0();
   input += synapse0x31c95e0();
   input += synapse0x31c9bc0();
   input += synapse0x31c9c00();
   input += synapse0x31c9c40();
   input += synapse0x31c9c80();
   input += synapse0x31c9cc0();
   input += synapse0x31c9d00();
   input += synapse0x31c9d40();
   input += synapse0x31c9d80();
   input += synapse0x31c9dc0();
   input += synapse0x31c9e00();
   input += synapse0x31c9e40();
   input += synapse0x31c9e80();
   input += synapse0x31c9ec0();
   input += synapse0x31c9f00();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31c8de0() {
   double input = input0x31c8de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31c9f40() {
   double input = -0.735048;
   input += synapse0x31ca280();
   input += synapse0x31ca2c0();
   input += synapse0x31ca300();
   input += synapse0x31ca340();
   input += synapse0x31ca380();
   input += synapse0x31ca3c0();
   input += synapse0x31ca400();
   input += synapse0x31ca440();
   input += synapse0x31ca480();
   input += synapse0x31ca4c0();
   input += synapse0x31ca500();
   input += synapse0x31ca540();
   input += synapse0x31ca580();
   input += synapse0x31ca5c0();
   input += synapse0x31ca600();
   input += synapse0x31ca640();
   input += synapse0x31ca0d0();
   input += synapse0x31ca110();
   input += synapse0x31ca790();
   input += synapse0x31ca7d0();
   input += synapse0x31ca810();
   input += synapse0x31ca850();
   input += synapse0x31ca890();
   input += synapse0x31ca8d0();
   input += synapse0x31ca910();
   input += synapse0x31ca950();
   input += synapse0x31ca990();
   input += synapse0x31ca9d0();
   input += synapse0x31caa10();
   input += synapse0x31caa50();
   input += synapse0x31caa90();
   input += synapse0x31caad0();
   input += synapse0x31ca680();
   input += synapse0x31ca6c0();
   input += synapse0x31ca700();
   input += synapse0x31ca740();
   input += synapse0x31cad20();
   input += synapse0x31cad60();
   input += synapse0x31cada0();
   input += synapse0x31cade0();
   input += synapse0x31cae20();
   input += synapse0x31cae60();
   input += synapse0x31caea0();
   input += synapse0x31caee0();
   input += synapse0x31caf20();
   input += synapse0x31caf60();
   input += synapse0x31cafa0();
   input += synapse0x31cafe0();
   input += synapse0x31cb020();
   input += synapse0x31cb060();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31c9f40() {
   double input = input0x31c9f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31cb0a0() {
   double input = 0.668167;
   input += synapse0x31cb3e0();
   input += synapse0x31cb420();
   input += synapse0x31cb460();
   input += synapse0x31cb4a0();
   input += synapse0x31cb4e0();
   input += synapse0x31cb520();
   input += synapse0x31cb560();
   input += synapse0x31cb5a0();
   input += synapse0x31cb5e0();
   input += synapse0x31cb620();
   input += synapse0x31cb660();
   input += synapse0x31cb6a0();
   input += synapse0x31cb6e0();
   input += synapse0x31cb720();
   input += synapse0x31cb760();
   input += synapse0x31cb7a0();
   input += synapse0x31cb230();
   input += synapse0x31cb270();
   input += synapse0x31cb8f0();
   input += synapse0x31cb930();
   input += synapse0x31cb970();
   input += synapse0x31cb9b0();
   input += synapse0x31cb9f0();
   input += synapse0x31cba30();
   input += synapse0x31cba70();
   input += synapse0x31cbab0();
   input += synapse0x31cbaf0();
   input += synapse0x31cbb30();
   input += synapse0x31cbb70();
   input += synapse0x31cbbb0();
   input += synapse0x31cbbf0();
   input += synapse0x31cbc30();
   input += synapse0x31cb7e0();
   input += synapse0x31cb820();
   input += synapse0x31cb860();
   input += synapse0x31cb8a0();
   input += synapse0x31cbe80();
   input += synapse0x31cbec0();
   input += synapse0x31cbf00();
   input += synapse0x31cbf40();
   input += synapse0x31cbf80();
   input += synapse0x31cbfc0();
   input += synapse0x31cc000();
   input += synapse0x31cc040();
   input += synapse0x31cc080();
   input += synapse0x31cc0c0();
   input += synapse0x31cc100();
   input += synapse0x31cc140();
   input += synapse0x31cc180();
   input += synapse0x31cc1c0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31cb0a0() {
   double input = input0x31cb0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x31cc200() {
   double input = 12.4827;
   input += synapse0x31cc420();
   input += synapse0x31cc460();
   input += synapse0x31cc4a0();
   input += synapse0x31cc4e0();
   input += synapse0x31cc520();
   return input;
}

double NNfunction_ss_uRcR::neuron0x31cc200() {
   double input = input0x31cc200();
   return (input * 1)+0;
}

double NNfunction_ss_uRcR::synapse0x31981b0() {
   return (neuron0x31982f0()*0.0419758);
}

double NNfunction_ss_uRcR::synapse0x31981f0() {
   return (neuron0x3198630()*-0.0257183);
}

double NNfunction_ss_uRcR::synapse0x319d5d0() {
   return (neuron0x3198970()*0.198613);
}

double NNfunction_ss_uRcR::synapse0x319d610() {
   return (neuron0x3198cb0()*-0.628091);
}

double NNfunction_ss_uRcR::synapse0x319d650() {
   return (neuron0x3198ff0()*-0.261344);
}

double NNfunction_ss_uRcR::synapse0x319d690() {
   return (neuron0x3199330()*0.140617);
}

double NNfunction_ss_uRcR::synapse0x319d6d0() {
   return (neuron0x3199670()*0.0129543);
}

double NNfunction_ss_uRcR::synapse0x319d710() {
   return (neuron0x31999b0()*-0.00551214);
}

double NNfunction_ss_uRcR::synapse0x319d750() {
   return (neuron0x3199cf0()*0.0175333);
}

double NNfunction_ss_uRcR::synapse0x319d790() {
   return (neuron0x319a030()*0.0210917);
}

double NNfunction_ss_uRcR::synapse0x319d7d0() {
   return (neuron0x319a370()*-0.0321354);
}

double NNfunction_ss_uRcR::synapse0x319d810() {
   return (neuron0x319a6b0()*0.0271104);
}

double NNfunction_ss_uRcR::synapse0x319d850() {
   return (neuron0x319a9f0()*0.0849835);
}

double NNfunction_ss_uRcR::synapse0x319d890() {
   return (neuron0x319ad30()*-0.249129);
}

double NNfunction_ss_uRcR::synapse0x319d8d0() {
   return (neuron0x319b070()*1.67134);
}

double NNfunction_ss_uRcR::synapse0x319d910() {
   return (neuron0x319b3b0()*-0.722044);
}

double NNfunction_ss_uRcR::synapse0x3198120() {
   return (neuron0x319b6f0()*0.0928243);
}

double NNfunction_ss_uRcR::synapse0x3198160() {
   return (neuron0x319bc50()*0.0756802);
}

double NNfunction_ss_uRcR::synapse0x2f53510() {
   return (neuron0x319be70()*-0.0481264);
}

double NNfunction_ss_uRcR::synapse0x2f53550() {
   return (neuron0x319c1b0()*0.00400252);
}

double NNfunction_ss_uRcR::synapse0x319db70() {
   return (neuron0x319c4f0()*-0.175201);
}

double NNfunction_ss_uRcR::synapse0x319dbb0() {
   return (neuron0x319c830()*0.400611);
}

double NNfunction_ss_uRcR::synapse0x319dbf0() {
   return (neuron0x319cb70()*-0.180872);
}

double NNfunction_ss_uRcR::synapse0x319dc30() {
   return (neuron0x319ceb0()*-0.202696);
}

double NNfunction_ss_uRcR::synapse0x319dfb0() {
   return (neuron0x31982f0()*0.100579);
}

double NNfunction_ss_uRcR::synapse0x319dff0() {
   return (neuron0x3198630()*-0.140062);
}

double NNfunction_ss_uRcR::synapse0x319e030() {
   return (neuron0x3198970()*0.102874);
}

double NNfunction_ss_uRcR::synapse0x319e070() {
   return (neuron0x3198cb0()*-0.203164);
}

double NNfunction_ss_uRcR::synapse0x319e0b0() {
   return (neuron0x3198ff0()*-0.445487);
}

double NNfunction_ss_uRcR::synapse0x319e0f0() {
   return (neuron0x3199330()*-0.498845);
}

double NNfunction_ss_uRcR::synapse0x319e130() {
   return (neuron0x3199670()*-0.388902);
}

double NNfunction_ss_uRcR::synapse0x319e170() {
   return (neuron0x31999b0()*-0.20353);
}

double NNfunction_ss_uRcR::synapse0x319e1b0() {
   return (neuron0x3199cf0()*-0.0543533);
}

double NNfunction_ss_uRcR::synapse0x319da60() {
   return (neuron0x319a030()*-0.11148);
}

double NNfunction_ss_uRcR::synapse0x319daa0() {
   return (neuron0x319a370()*0.191774);
}

double NNfunction_ss_uRcR::synapse0x319dae0() {
   return (neuron0x319a6b0()*0.178802);
}

double NNfunction_ss_uRcR::synapse0x319db20() {
   return (neuron0x319a9f0()*-0.0401901);
}

double NNfunction_ss_uRcR::synapse0x319e400() {
   return (neuron0x319ad30()*-0.045974);
}

double NNfunction_ss_uRcR::synapse0x319e440() {
   return (neuron0x319b070()*-0.157913);
}

double NNfunction_ss_uRcR::synapse0x319e480() {
   return (neuron0x319b3b0()*-1.28504);
}

double NNfunction_ss_uRcR::synapse0x319de00() {
   return (neuron0x319b6f0()*-0.382512);
}

double NNfunction_ss_uRcR::synapse0x319de40() {
   return (neuron0x319bc50()*-0.071362);
}

double NNfunction_ss_uRcR::synapse0x319e5d0() {
   return (neuron0x319be70()*-0.0617175);
}

double NNfunction_ss_uRcR::synapse0x319e610() {
   return (neuron0x319c1b0()*0.0305322);
}

double NNfunction_ss_uRcR::synapse0x319e650() {
   return (neuron0x319c4f0()*-0.224114);
}

double NNfunction_ss_uRcR::synapse0x319e690() {
   return (neuron0x319c830()*0.441766);
}

double NNfunction_ss_uRcR::synapse0x319e6d0() {
   return (neuron0x319cb70()*-0.311509);
}

double NNfunction_ss_uRcR::synapse0x319e710() {
   return (neuron0x319ceb0()*0.268685);
}

double NNfunction_ss_uRcR::synapse0x319ea90() {
   return (neuron0x31982f0()*-0.0496493);
}

double NNfunction_ss_uRcR::synapse0x319ead0() {
   return (neuron0x3198630()*-0.0757451);
}

double NNfunction_ss_uRcR::synapse0x319eb10() {
   return (neuron0x3198970()*0.873396);
}

double NNfunction_ss_uRcR::synapse0x319eb50() {
   return (neuron0x3198cb0()*-2.60295);
}

double NNfunction_ss_uRcR::synapse0x319eb90() {
   return (neuron0x3198ff0()*0.127945);
}

double NNfunction_ss_uRcR::synapse0x319ebd0() {
   return (neuron0x3199330()*0.466979);
}

double NNfunction_ss_uRcR::synapse0x319ec10() {
   return (neuron0x3199670()*0.380028);
}

double NNfunction_ss_uRcR::synapse0x319ec50() {
   return (neuron0x31999b0()*0.315248);
}

double NNfunction_ss_uRcR::synapse0x319ec90() {
   return (neuron0x3199cf0()*0.266181);
}

double NNfunction_ss_uRcR::synapse0x319ecd0() {
   return (neuron0x319a030()*0.949618);
}

double NNfunction_ss_uRcR::synapse0x319ed10() {
   return (neuron0x319a370()*0.00538365);
}

double NNfunction_ss_uRcR::synapse0x319ed50() {
   return (neuron0x319a6b0()*0.121807);
}

double NNfunction_ss_uRcR::synapse0x319ed90() {
   return (neuron0x319a9f0()*0.347445);
}

double NNfunction_ss_uRcR::synapse0x319edd0() {
   return (neuron0x319ad30()*0.541366);
}

double NNfunction_ss_uRcR::synapse0x319ee10() {
   return (neuron0x319b070()*-1.53031);
}

double NNfunction_ss_uRcR::synapse0x319ee50() {
   return (neuron0x319b3b0()*-1.41894);
}

double NNfunction_ss_uRcR::synapse0x319e8e0() {
   return (neuron0x319b6f0()*0.89047);
}

double NNfunction_ss_uRcR::synapse0x319e920() {
   return (neuron0x319bc50()*0.592349);
}

double NNfunction_ss_uRcR::synapse0x2f52660() {
   return (neuron0x319be70()*-0.140139);
}

double NNfunction_ss_uRcR::synapse0x2f61460() {
   return (neuron0x319c1b0()*0.38139);
}

double NNfunction_ss_uRcR::synapse0x2f614a0() {
   return (neuron0x319c4f0()*0.34649);
}

double NNfunction_ss_uRcR::synapse0x3187380() {
   return (neuron0x319c830()*0.198741);
}

double NNfunction_ss_uRcR::synapse0x31873c0() {
   return (neuron0x319cb70()*-0.165361);
}

double NNfunction_ss_uRcR::synapse0x3187400() {
   return (neuron0x319ceb0()*0.0530081);
}

double NNfunction_ss_uRcR::synapse0x2f61ce0() {
   return (neuron0x31982f0()*-0.359758);
}

double NNfunction_ss_uRcR::synapse0x319e380() {
   return (neuron0x3198630()*0.249048);
}

double NNfunction_ss_uRcR::synapse0x319e3c0() {
   return (neuron0x3198970()*-0.146107);
}

double NNfunction_ss_uRcR::synapse0x319efa0() {
   return (neuron0x3198cb0()*-0.119916);
}

double NNfunction_ss_uRcR::synapse0x319efe0() {
   return (neuron0x3198ff0()*-0.329317);
}

double NNfunction_ss_uRcR::synapse0x319f020() {
   return (neuron0x3199330()*0.405264);
}

double NNfunction_ss_uRcR::synapse0x319f060() {
   return (neuron0x3199670()*0.293312);
}

double NNfunction_ss_uRcR::synapse0x319f0a0() {
   return (neuron0x31999b0()*0.685859);
}

double NNfunction_ss_uRcR::synapse0x319f0e0() {
   return (neuron0x3199cf0()*0.628898);
}

double NNfunction_ss_uRcR::synapse0x319f120() {
   return (neuron0x319a030()*0.0837934);
}

double NNfunction_ss_uRcR::synapse0x319f160() {
   return (neuron0x319a370()*0.708462);
}

double NNfunction_ss_uRcR::synapse0x319f1a0() {
   return (neuron0x319a6b0()*-0.199885);
}

double NNfunction_ss_uRcR::synapse0x319f1e0() {
   return (neuron0x319a9f0()*-0.0140718);
}

double NNfunction_ss_uRcR::synapse0x319f220() {
   return (neuron0x319ad30()*0.123226);
}

double NNfunction_ss_uRcR::synapse0x319f260() {
   return (neuron0x319b070()*-0.794326);
}

double NNfunction_ss_uRcR::synapse0x319f2a0() {
   return (neuron0x319b3b0()*0.393177);
}

double NNfunction_ss_uRcR::synapse0x3198230() {
   return (neuron0x319b6f0()*0.0424945);
}

double NNfunction_ss_uRcR::synapse0x3198270() {
   return (neuron0x319bc50()*1.61394);
}

double NNfunction_ss_uRcR::synapse0x31982b0() {
   return (neuron0x319be70()*-0.41594);
}

double NNfunction_ss_uRcR::synapse0x319f3f0() {
   return (neuron0x319c1b0()*-0.049931);
}

double NNfunction_ss_uRcR::synapse0x319f430() {
   return (neuron0x319c4f0()*1.15336);
}

double NNfunction_ss_uRcR::synapse0x319f470() {
   return (neuron0x319c830()*0.374153);
}

double NNfunction_ss_uRcR::synapse0x319f4b0() {
   return (neuron0x319cb70()*0.683276);
}

double NNfunction_ss_uRcR::synapse0x319f4f0() {
   return (neuron0x319ceb0()*0.106178);
}

double NNfunction_ss_uRcR::synapse0x319f870() {
   return (neuron0x31982f0()*0.0115183);
}

double NNfunction_ss_uRcR::synapse0x319f8b0() {
   return (neuron0x3198630()*-0.128594);
}

double NNfunction_ss_uRcR::synapse0x319f8f0() {
   return (neuron0x3198970()*-0.418859);
}

double NNfunction_ss_uRcR::synapse0x319f930() {
   return (neuron0x3198cb0()*-1.42118);
}

double NNfunction_ss_uRcR::synapse0x319f970() {
   return (neuron0x3198ff0()*0.201079);
}

double NNfunction_ss_uRcR::synapse0x319f9b0() {
   return (neuron0x3199330()*0.184638);
}

double NNfunction_ss_uRcR::synapse0x319f9f0() {
   return (neuron0x3199670()*-0.0496441);
}

double NNfunction_ss_uRcR::synapse0x319fa30() {
   return (neuron0x31999b0()*0.30799);
}

double NNfunction_ss_uRcR::synapse0x319fa70() {
   return (neuron0x3199cf0()*0.0441788);
}

double NNfunction_ss_uRcR::synapse0x319fab0() {
   return (neuron0x319a030()*0.113868);
}

double NNfunction_ss_uRcR::synapse0x319faf0() {
   return (neuron0x319a370()*0.155351);
}

double NNfunction_ss_uRcR::synapse0x319fb30() {
   return (neuron0x319a6b0()*-0.0141884);
}

double NNfunction_ss_uRcR::synapse0x319fb70() {
   return (neuron0x319a9f0()*0.175731);
}

double NNfunction_ss_uRcR::synapse0x319fbb0() {
   return (neuron0x319ad30()*0.00374806);
}

double NNfunction_ss_uRcR::synapse0x319fbf0() {
   return (neuron0x319b070()*0.392394);
}

double NNfunction_ss_uRcR::synapse0x319fc30() {
   return (neuron0x319b3b0()*0.488855);
}

double NNfunction_ss_uRcR::synapse0x319f6c0() {
   return (neuron0x319b6f0()*0.0921847);
}

double NNfunction_ss_uRcR::synapse0x319f700() {
   return (neuron0x319bc50()*0.496716);
}

double NNfunction_ss_uRcR::synapse0x319fd80() {
   return (neuron0x319be70()*-0.13091);
}

double NNfunction_ss_uRcR::synapse0x319fdc0() {
   return (neuron0x319c1b0()*0.258503);
}

double NNfunction_ss_uRcR::synapse0x319fe00() {
   return (neuron0x319c4f0()*-0.155234);
}

double NNfunction_ss_uRcR::synapse0x319fe40() {
   return (neuron0x319c830()*-0.362441);
}

double NNfunction_ss_uRcR::synapse0x319fe80() {
   return (neuron0x319cb70()*0.351823);
}

double NNfunction_ss_uRcR::synapse0x319fec0() {
   return (neuron0x319ceb0()*0.0915244);
}

double NNfunction_ss_uRcR::synapse0x31a0240() {
   return (neuron0x31982f0()*-0.169637);
}

double NNfunction_ss_uRcR::synapse0x31a0280() {
   return (neuron0x3198630()*0.0719469);
}

double NNfunction_ss_uRcR::synapse0x31a02c0() {
   return (neuron0x3198970()*0.103576);
}

double NNfunction_ss_uRcR::synapse0x31a0300() {
   return (neuron0x3198cb0()*0.100817);
}

double NNfunction_ss_uRcR::synapse0x31a0340() {
   return (neuron0x3198ff0()*0.431611);
}

double NNfunction_ss_uRcR::synapse0x31a0380() {
   return (neuron0x3199330()*-0.00063741);
}

double NNfunction_ss_uRcR::synapse0x31a03c0() {
   return (neuron0x3199670()*-0.282203);
}

double NNfunction_ss_uRcR::synapse0x31a0400() {
   return (neuron0x31999b0()*0.236287);
}

double NNfunction_ss_uRcR::synapse0x31a0440() {
   return (neuron0x3199cf0()*0.0340511);
}

double NNfunction_ss_uRcR::synapse0x2f617b0() {
   return (neuron0x319a030()*0.183155);
}

double NNfunction_ss_uRcR::synapse0x2f617f0() {
   return (neuron0x319a370()*-0.0232098);
}

double NNfunction_ss_uRcR::synapse0x2f61830() {
   return (neuron0x319a6b0()*0.218582);
}

double NNfunction_ss_uRcR::synapse0x2f61870() {
   return (neuron0x319a9f0()*0.0325249);
}

double NNfunction_ss_uRcR::synapse0x2f618b0() {
   return (neuron0x319ad30()*-0.0121688);
}

double NNfunction_ss_uRcR::synapse0x2f618f0() {
   return (neuron0x319b070()*-0.412256);
}

double NNfunction_ss_uRcR::synapse0x2f61930() {
   return (neuron0x319b3b0()*-0.707617);
}

double NNfunction_ss_uRcR::synapse0x31a0090() {
   return (neuron0x319b6f0()*0.149647);
}

double NNfunction_ss_uRcR::synapse0x31a00d0() {
   return (neuron0x319bc50()*0.0904752);
}

double NNfunction_ss_uRcR::synapse0x2f61a80() {
   return (neuron0x319be70()*0.160798);
}

double NNfunction_ss_uRcR::synapse0x2f61ac0() {
   return (neuron0x319c1b0()*-0.113844);
}

double NNfunction_ss_uRcR::synapse0x2f61b00() {
   return (neuron0x319c4f0()*0.0735231);
}

double NNfunction_ss_uRcR::synapse0x2f61b40() {
   return (neuron0x319c830()*-0.0968282);
}

double NNfunction_ss_uRcR::synapse0x2f61b80() {
   return (neuron0x319cb70()*-0.16868);
}

double NNfunction_ss_uRcR::synapse0x31a0c90() {
   return (neuron0x319ceb0()*0.199517);
}

double NNfunction_ss_uRcR::synapse0x31a1010() {
   return (neuron0x31982f0()*-0.117601);
}

double NNfunction_ss_uRcR::synapse0x31a1050() {
   return (neuron0x3198630()*-0.457316);
}

double NNfunction_ss_uRcR::synapse0x31a1090() {
   return (neuron0x3198970()*-0.473087);
}

double NNfunction_ss_uRcR::synapse0x31a10d0() {
   return (neuron0x3198cb0()*-0.733045);
}

double NNfunction_ss_uRcR::synapse0x31a1110() {
   return (neuron0x3198ff0()*-0.390055);
}

double NNfunction_ss_uRcR::synapse0x31a1150() {
   return (neuron0x3199330()*-0.502059);
}

double NNfunction_ss_uRcR::synapse0x31a1190() {
   return (neuron0x3199670()*-0.332058);
}

double NNfunction_ss_uRcR::synapse0x31a11d0() {
   return (neuron0x31999b0()*-0.0682112);
}

double NNfunction_ss_uRcR::synapse0x31a1210() {
   return (neuron0x3199cf0()*-1.10894);
}

double NNfunction_ss_uRcR::synapse0x31a1250() {
   return (neuron0x319a030()*0.339859);
}

double NNfunction_ss_uRcR::synapse0x31a1290() {
   return (neuron0x319a370()*-0.125828);
}

double NNfunction_ss_uRcR::synapse0x31a12d0() {
   return (neuron0x319a6b0()*0.197879);
}

double NNfunction_ss_uRcR::synapse0x31a1310() {
   return (neuron0x319a9f0()*0.50411);
}

double NNfunction_ss_uRcR::synapse0x31a1350() {
   return (neuron0x319ad30()*-0.202866);
}

double NNfunction_ss_uRcR::synapse0x31a1390() {
   return (neuron0x319b070()*0.870407);
}

double NNfunction_ss_uRcR::synapse0x31a13d0() {
   return (neuron0x319b3b0()*0.336584);
}

double NNfunction_ss_uRcR::synapse0x31a0e60() {
   return (neuron0x319b6f0()*-0.201681);
}

double NNfunction_ss_uRcR::synapse0x31a0ea0() {
   return (neuron0x319bc50()*0.284352);
}

double NNfunction_ss_uRcR::synapse0x31a1520() {
   return (neuron0x319be70()*-0.359001);
}

double NNfunction_ss_uRcR::synapse0x31a1560() {
   return (neuron0x319c1b0()*-0.210045);
}

double NNfunction_ss_uRcR::synapse0x31a15a0() {
   return (neuron0x319c4f0()*0.467068);
}

double NNfunction_ss_uRcR::synapse0x31a15e0() {
   return (neuron0x319c830()*0.633984);
}

double NNfunction_ss_uRcR::synapse0x31a1620() {
   return (neuron0x319cb70()*-0.17927);
}

double NNfunction_ss_uRcR::synapse0x31a1660() {
   return (neuron0x319ceb0()*0.17721);
}

double NNfunction_ss_uRcR::synapse0x31a19e0() {
   return (neuron0x31982f0()*-0.332676);
}

double NNfunction_ss_uRcR::synapse0x31a1a20() {
   return (neuron0x3198630()*0.02881);
}

double NNfunction_ss_uRcR::synapse0x31a1a60() {
   return (neuron0x3198970()*0.125338);
}

double NNfunction_ss_uRcR::synapse0x31a1aa0() {
   return (neuron0x3198cb0()*0.125168);
}

double NNfunction_ss_uRcR::synapse0x31a1ae0() {
   return (neuron0x3198ff0()*-0.108983);
}

double NNfunction_ss_uRcR::synapse0x31a1b20() {
   return (neuron0x3199330()*0.110274);
}

double NNfunction_ss_uRcR::synapse0x31a1b60() {
   return (neuron0x3199670()*-0.710656);
}

double NNfunction_ss_uRcR::synapse0x31a1ba0() {
   return (neuron0x31999b0()*-0.820087);
}

double NNfunction_ss_uRcR::synapse0x31a1be0() {
   return (neuron0x3199cf0()*0.173502);
}

double NNfunction_ss_uRcR::synapse0x31a1c20() {
   return (neuron0x319a030()*0.0720157);
}

double NNfunction_ss_uRcR::synapse0x31a1c60() {
   return (neuron0x319a370()*-0.312732);
}

double NNfunction_ss_uRcR::synapse0x31a1ca0() {
   return (neuron0x319a6b0()*-0.00448266);
}

double NNfunction_ss_uRcR::synapse0x31a1ce0() {
   return (neuron0x319a9f0()*-0.258798);
}

double NNfunction_ss_uRcR::synapse0x31a1d20() {
   return (neuron0x319ad30()*0.0128617);
}

double NNfunction_ss_uRcR::synapse0x31a1d60() {
   return (neuron0x319b070()*-0.250525);
}

double NNfunction_ss_uRcR::synapse0x31a1da0() {
   return (neuron0x319b3b0()*1.72805);
}

double NNfunction_ss_uRcR::synapse0x31a1830() {
   return (neuron0x319b6f0()*0.191255);
}

double NNfunction_ss_uRcR::synapse0x31a1870() {
   return (neuron0x319bc50()*-0.267751);
}

double NNfunction_ss_uRcR::synapse0x31a1ef0() {
   return (neuron0x319be70()*-0.128466);
}

double NNfunction_ss_uRcR::synapse0x31a1f30() {
   return (neuron0x319c1b0()*-0.0340272);
}

double NNfunction_ss_uRcR::synapse0x31a1f70() {
   return (neuron0x319c4f0()*-0.179173);
}

double NNfunction_ss_uRcR::synapse0x31a1fb0() {
   return (neuron0x319c830()*-0.307927);
}

double NNfunction_ss_uRcR::synapse0x31a1ff0() {
   return (neuron0x319cb70()*-0.133041);
}

double NNfunction_ss_uRcR::synapse0x31a2030() {
   return (neuron0x319ceb0()*-0.228014);
}

double NNfunction_ss_uRcR::synapse0x319bb40() {
   return (neuron0x31982f0()*0.00774163);
}

double NNfunction_ss_uRcR::synapse0x319bb80() {
   return (neuron0x3198630()*-0.00492638);
}

double NNfunction_ss_uRcR::synapse0x319bbc0() {
   return (neuron0x3198970()*-0.0169923);
}

double NNfunction_ss_uRcR::synapse0x319bc00() {
   return (neuron0x3198cb0()*-1.62021);
}

double NNfunction_ss_uRcR::synapse0x31a25c0() {
   return (neuron0x3198ff0()*-0.00860095);
}

double NNfunction_ss_uRcR::synapse0x31a2600() {
   return (neuron0x3199330()*-0.00737926);
}

double NNfunction_ss_uRcR::synapse0x31a2640() {
   return (neuron0x3199670()*-0.00743887);
}

double NNfunction_ss_uRcR::synapse0x31a2680() {
   return (neuron0x31999b0()*-0.00971016);
}

double NNfunction_ss_uRcR::synapse0x31a26c0() {
   return (neuron0x3199cf0()*-0.0037381);
}

double NNfunction_ss_uRcR::synapse0x31a2700() {
   return (neuron0x319a030()*-0.0224533);
}

double NNfunction_ss_uRcR::synapse0x31a2740() {
   return (neuron0x319a370()*0.000831333);
}

double NNfunction_ss_uRcR::synapse0x31a2780() {
   return (neuron0x319a6b0()*0.0194802);
}

double NNfunction_ss_uRcR::synapse0x31a27c0() {
   return (neuron0x319a9f0()*0.0253164);
}

double NNfunction_ss_uRcR::synapse0x31a2800() {
   return (neuron0x319ad30()*-0.00350057);
}

double NNfunction_ss_uRcR::synapse0x31a2840() {
   return (neuron0x319b070()*-0.109779);
}

double NNfunction_ss_uRcR::synapse0x31a2880() {
   return (neuron0x319b3b0()*-0.133223);
}

double NNfunction_ss_uRcR::synapse0x31a2200() {
   return (neuron0x319b6f0()*0.00530769);
}

double NNfunction_ss_uRcR::synapse0x31a2240() {
   return (neuron0x319bc50()*-0.00227287);
}

double NNfunction_ss_uRcR::synapse0x31a29d0() {
   return (neuron0x319be70()*-0.000578242);
}

double NNfunction_ss_uRcR::synapse0x31a2a10() {
   return (neuron0x319c1b0()*-0.00254095);
}

double NNfunction_ss_uRcR::synapse0x31a2a50() {
   return (neuron0x319c4f0()*-0.00161554);
}

double NNfunction_ss_uRcR::synapse0x31a2a90() {
   return (neuron0x319c830()*-0.00570603);
}

double NNfunction_ss_uRcR::synapse0x31a2ad0() {
   return (neuron0x319cb70()*0.0067453);
}

double NNfunction_ss_uRcR::synapse0x31a2b10() {
   return (neuron0x319ceb0()*-0.000921816);
}

double NNfunction_ss_uRcR::synapse0x31a2e90() {
   return (neuron0x31982f0()*-0.0131848);
}

double NNfunction_ss_uRcR::synapse0x31a2ed0() {
   return (neuron0x3198630()*-0.00283023);
}

double NNfunction_ss_uRcR::synapse0x31a2f10() {
   return (neuron0x3198970()*0.00641276);
}

double NNfunction_ss_uRcR::synapse0x31a2f50() {
   return (neuron0x3198cb0()*0.045173);
}

double NNfunction_ss_uRcR::synapse0x31a2f90() {
   return (neuron0x3198ff0()*0.00736831);
}

double NNfunction_ss_uRcR::synapse0x31a2fd0() {
   return (neuron0x3199330()*-0.0110022);
}

double NNfunction_ss_uRcR::synapse0x31a3010() {
   return (neuron0x3199670()*0.00298574);
}

double NNfunction_ss_uRcR::synapse0x31a3050() {
   return (neuron0x31999b0()*-0.00736014);
}

double NNfunction_ss_uRcR::synapse0x31a3090() {
   return (neuron0x3199cf0()*-0.00178692);
}

double NNfunction_ss_uRcR::synapse0x31a30d0() {
   return (neuron0x319a030()*0.00510484);
}

double NNfunction_ss_uRcR::synapse0x31a3110() {
   return (neuron0x319a370()*0.013285);
}

double NNfunction_ss_uRcR::synapse0x31a3150() {
   return (neuron0x319a6b0()*0.00756773);
}

double NNfunction_ss_uRcR::synapse0x31a3190() {
   return (neuron0x319a9f0()*0.00913519);
}

double NNfunction_ss_uRcR::synapse0x31a31d0() {
   return (neuron0x319ad30()*0.00573741);
}

double NNfunction_ss_uRcR::synapse0x31a3210() {
   return (neuron0x319b070()*-0.680238);
}

double NNfunction_ss_uRcR::synapse0x31a3250() {
   return (neuron0x319b3b0()*0.111877);
}

double NNfunction_ss_uRcR::synapse0x31a2ce0() {
   return (neuron0x319b6f0()*-0.00931648);
}

double NNfunction_ss_uRcR::synapse0x31a2d20() {
   return (neuron0x319bc50()*0.00370331);
}

double NNfunction_ss_uRcR::synapse0x31a33a0() {
   return (neuron0x319be70()*0.00939469);
}

double NNfunction_ss_uRcR::synapse0x31a33e0() {
   return (neuron0x319c1b0()*0.00681132);
}

double NNfunction_ss_uRcR::synapse0x31a3420() {
   return (neuron0x319c4f0()*0.00583617);
}

double NNfunction_ss_uRcR::synapse0x31a3460() {
   return (neuron0x319c830()*-0.0137372);
}

double NNfunction_ss_uRcR::synapse0x31a34a0() {
   return (neuron0x319cb70()*0.00953217);
}

double NNfunction_ss_uRcR::synapse0x31a34e0() {
   return (neuron0x319ceb0()*0.0050365);
}

double NNfunction_ss_uRcR::synapse0x31a3860() {
   return (neuron0x31982f0()*0.0191798);
}

double NNfunction_ss_uRcR::synapse0x31a38a0() {
   return (neuron0x3198630()*-0.204724);
}

double NNfunction_ss_uRcR::synapse0x31a38e0() {
   return (neuron0x3198970()*-0.0212297);
}

double NNfunction_ss_uRcR::synapse0x31a3920() {
   return (neuron0x3198cb0()*-0.330821);
}

double NNfunction_ss_uRcR::synapse0x31a3960() {
   return (neuron0x3198ff0()*0.0391109);
}

double NNfunction_ss_uRcR::synapse0x31a39a0() {
   return (neuron0x3199330()*-0.0721355);
}

double NNfunction_ss_uRcR::synapse0x31a39e0() {
   return (neuron0x3199670()*-0.0253518);
}

double NNfunction_ss_uRcR::synapse0x31a3a20() {
   return (neuron0x31999b0()*0.0603229);
}

double NNfunction_ss_uRcR::synapse0x31a3a60() {
   return (neuron0x3199cf0()*-0.0573696);
}

double NNfunction_ss_uRcR::synapse0x31a3aa0() {
   return (neuron0x319a030()*-0.0502469);
}

double NNfunction_ss_uRcR::synapse0x31a3ae0() {
   return (neuron0x319a370()*-0.0726476);
}

double NNfunction_ss_uRcR::synapse0x31a3b20() {
   return (neuron0x319a6b0()*0.585447);
}

double NNfunction_ss_uRcR::synapse0x31a3b60() {
   return (neuron0x319a9f0()*0.627362);
}

double NNfunction_ss_uRcR::synapse0x31a3ba0() {
   return (neuron0x319ad30()*-0.0131898);
}

double NNfunction_ss_uRcR::synapse0x31a3be0() {
   return (neuron0x319b070()*-0.0258427);
}

double NNfunction_ss_uRcR::synapse0x31a3c20() {
   return (neuron0x319b3b0()*0.124504);
}

double NNfunction_ss_uRcR::synapse0x31a36b0() {
   return (neuron0x319b6f0()*-0.030222);
}

double NNfunction_ss_uRcR::synapse0x31a36f0() {
   return (neuron0x319bc50()*0.344475);
}

double NNfunction_ss_uRcR::synapse0x31a0480() {
   return (neuron0x319be70()*0.234922);
}

double NNfunction_ss_uRcR::synapse0x31a04c0() {
   return (neuron0x319c1b0()*-0.0197495);
}

double NNfunction_ss_uRcR::synapse0x31a0500() {
   return (neuron0x319c4f0()*-0.110321);
}

double NNfunction_ss_uRcR::synapse0x31a0540() {
   return (neuron0x319c830()*-0.0382479);
}

double NNfunction_ss_uRcR::synapse0x31a0580() {
   return (neuron0x319cb70()*0.0206149);
}

double NNfunction_ss_uRcR::synapse0x31a05c0() {
   return (neuron0x319ceb0()*-0.0603389);
}

double NNfunction_ss_uRcR::synapse0x31a0940() {
   return (neuron0x31982f0()*-0.00441822);
}

double NNfunction_ss_uRcR::synapse0x31a0980() {
   return (neuron0x3198630()*0.00195913);
}

double NNfunction_ss_uRcR::synapse0x31a09c0() {
   return (neuron0x3198970()*0.00383759);
}

double NNfunction_ss_uRcR::synapse0x31a0a00() {
   return (neuron0x3198cb0()*-0.00133459);
}

double NNfunction_ss_uRcR::synapse0x31a0a40() {
   return (neuron0x3198ff0()*0.0176899);
}

double NNfunction_ss_uRcR::synapse0x31a0a80() {
   return (neuron0x3199330()*-0.00258143);
}

double NNfunction_ss_uRcR::synapse0x31a0ac0() {
   return (neuron0x3199670()*-0.000606417);
}

double NNfunction_ss_uRcR::synapse0x31a0b00() {
   return (neuron0x31999b0()*0.00884412);
}

double NNfunction_ss_uRcR::synapse0x31a0b40() {
   return (neuron0x3199cf0()*-0.00432479);
}

double NNfunction_ss_uRcR::synapse0x31a0b80() {
   return (neuron0x319a030()*-0.0141017);
}

double NNfunction_ss_uRcR::synapse0x31a0bc0() {
   return (neuron0x319a370()*-0.00731787);
}

double NNfunction_ss_uRcR::synapse0x31a0c00() {
   return (neuron0x319a6b0()*-0.0134699);
}

double NNfunction_ss_uRcR::synapse0x31a0c40() {
   return (neuron0x319a9f0()*-0.00986636);
}

double NNfunction_ss_uRcR::synapse0x31a4d80() {
   return (neuron0x319ad30()*0.0108539);
}

double NNfunction_ss_uRcR::synapse0x31a4dc0() {
   return (neuron0x319b070()*-0.10863);
}

double NNfunction_ss_uRcR::synapse0x31a4e00() {
   return (neuron0x319b3b0()*0.613147);
}

double NNfunction_ss_uRcR::synapse0x31a0790() {
   return (neuron0x319b6f0()*0.00741483);
}

double NNfunction_ss_uRcR::synapse0x31a07d0() {
   return (neuron0x319bc50()*-0.00179138);
}

double NNfunction_ss_uRcR::synapse0x31a4f50() {
   return (neuron0x319be70()*-0.00293971);
}

double NNfunction_ss_uRcR::synapse0x31a4f90() {
   return (neuron0x319c1b0()*0.00148413);
}

double NNfunction_ss_uRcR::synapse0x31a4fd0() {
   return (neuron0x319c4f0()*0.0113846);
}

double NNfunction_ss_uRcR::synapse0x31a5010() {
   return (neuron0x319c830()*-0.0109885);
}

double NNfunction_ss_uRcR::synapse0x31a5050() {
   return (neuron0x319cb70()*0.00164215);
}

double NNfunction_ss_uRcR::synapse0x31a5090() {
   return (neuron0x319ceb0()*0.0026817);
}

double NNfunction_ss_uRcR::synapse0x31a5410() {
   return (neuron0x31982f0()*0.0244753);
}

double NNfunction_ss_uRcR::synapse0x31a5450() {
   return (neuron0x3198630()*0.675087);
}

double NNfunction_ss_uRcR::synapse0x31a5490() {
   return (neuron0x3198970()*0.14871);
}

double NNfunction_ss_uRcR::synapse0x31a54d0() {
   return (neuron0x3198cb0()*-0.226146);
}

double NNfunction_ss_uRcR::synapse0x31a5510() {
   return (neuron0x3198ff0()*0.106503);
}

double NNfunction_ss_uRcR::synapse0x31a5550() {
   return (neuron0x3199330()*0.0194421);
}

double NNfunction_ss_uRcR::synapse0x31a5590() {
   return (neuron0x3199670()*-0.0890724);
}

double NNfunction_ss_uRcR::synapse0x31a55d0() {
   return (neuron0x31999b0()*0.0350108);
}

double NNfunction_ss_uRcR::synapse0x31a5610() {
   return (neuron0x3199cf0()*0.188297);
}

double NNfunction_ss_uRcR::synapse0x31a5650() {
   return (neuron0x319a030()*0.181394);
}

double NNfunction_ss_uRcR::synapse0x31a5690() {
   return (neuron0x319a370()*0.153813);
}

double NNfunction_ss_uRcR::synapse0x31a56d0() {
   return (neuron0x319a6b0()*0.50177);
}

double NNfunction_ss_uRcR::synapse0x31a5710() {
   return (neuron0x319a9f0()*0.458836);
}

double NNfunction_ss_uRcR::synapse0x31a5750() {
   return (neuron0x319ad30()*0.0688784);
}

double NNfunction_ss_uRcR::synapse0x31a5790() {
   return (neuron0x319b070()*-0.0107749);
}

double NNfunction_ss_uRcR::synapse0x31a57d0() {
   return (neuron0x319b3b0()*-0.26211);
}

double NNfunction_ss_uRcR::synapse0x31a5260() {
   return (neuron0x319b6f0()*-0.0364092);
}

double NNfunction_ss_uRcR::synapse0x31a52a0() {
   return (neuron0x319bc50()*0.0985167);
}

double NNfunction_ss_uRcR::synapse0x31a5920() {
   return (neuron0x319be70()*0.346375);
}

double NNfunction_ss_uRcR::synapse0x31a5960() {
   return (neuron0x319c1b0()*-0.136792);
}

double NNfunction_ss_uRcR::synapse0x31a59a0() {
   return (neuron0x319c4f0()*0.00702734);
}

double NNfunction_ss_uRcR::synapse0x31a59e0() {
   return (neuron0x319c830()*-0.0423896);
}

double NNfunction_ss_uRcR::synapse0x31a5a20() {
   return (neuron0x319cb70()*-0.112869);
}

double NNfunction_ss_uRcR::synapse0x31a5a60() {
   return (neuron0x319ceb0()*0.325285);
}

double NNfunction_ss_uRcR::synapse0x31a5de0() {
   return (neuron0x31982f0()*-0.252225);
}

double NNfunction_ss_uRcR::synapse0x31a5e20() {
   return (neuron0x3198630()*0.0437529);
}

double NNfunction_ss_uRcR::synapse0x31a5e60() {
   return (neuron0x3198970()*-0.818805);
}

double NNfunction_ss_uRcR::synapse0x31a5ea0() {
   return (neuron0x3198cb0()*-0.3202);
}

double NNfunction_ss_uRcR::synapse0x31a5ee0() {
   return (neuron0x3198ff0()*0.311535);
}

double NNfunction_ss_uRcR::synapse0x31a5f20() {
   return (neuron0x3199330()*0.487726);
}

double NNfunction_ss_uRcR::synapse0x31a5f60() {
   return (neuron0x3199670()*-0.155791);
}

double NNfunction_ss_uRcR::synapse0x31a5fa0() {
   return (neuron0x31999b0()*-0.507807);
}

double NNfunction_ss_uRcR::synapse0x31a5fe0() {
   return (neuron0x3199cf0()*-0.102339);
}

double NNfunction_ss_uRcR::synapse0x31a6020() {
   return (neuron0x319a030()*0.38092);
}

double NNfunction_ss_uRcR::synapse0x31a6060() {
   return (neuron0x319a370()*-0.665013);
}

double NNfunction_ss_uRcR::synapse0x31a60a0() {
   return (neuron0x319a6b0()*0.302384);
}

double NNfunction_ss_uRcR::synapse0x31a60e0() {
   return (neuron0x319a9f0()*-0.14606);
}

double NNfunction_ss_uRcR::synapse0x31a6120() {
   return (neuron0x319ad30()*0.515824);
}

double NNfunction_ss_uRcR::synapse0x31a6160() {
   return (neuron0x319b070()*0.78383);
}

double NNfunction_ss_uRcR::synapse0x31a61a0() {
   return (neuron0x319b3b0()*0.274733);
}

double NNfunction_ss_uRcR::synapse0x31a5c30() {
   return (neuron0x319b6f0()*-0.192051);
}

double NNfunction_ss_uRcR::synapse0x31a5c70() {
   return (neuron0x319bc50()*-0.0853338);
}

double NNfunction_ss_uRcR::synapse0x31a62f0() {
   return (neuron0x319be70()*0.741455);
}

double NNfunction_ss_uRcR::synapse0x31a6330() {
   return (neuron0x319c1b0()*1.0576);
}

double NNfunction_ss_uRcR::synapse0x31a6370() {
   return (neuron0x319c4f0()*0.574045);
}

double NNfunction_ss_uRcR::synapse0x31a63b0() {
   return (neuron0x319c830()*0.0246963);
}

double NNfunction_ss_uRcR::synapse0x31a63f0() {
   return (neuron0x319cb70()*0.944278);
}

double NNfunction_ss_uRcR::synapse0x31a6430() {
   return (neuron0x319ceb0()*-0.818783);
}

double NNfunction_ss_uRcR::synapse0x31a67b0() {
   return (neuron0x31982f0()*-0.231894);
}

double NNfunction_ss_uRcR::synapse0x31a67f0() {
   return (neuron0x3198630()*-0.808333);
}

double NNfunction_ss_uRcR::synapse0x31a6830() {
   return (neuron0x3198970()*0.10464);
}

double NNfunction_ss_uRcR::synapse0x31a6870() {
   return (neuron0x3198cb0()*0.588804);
}

double NNfunction_ss_uRcR::synapse0x31a68b0() {
   return (neuron0x3198ff0()*-0.778238);
}

double NNfunction_ss_uRcR::synapse0x31a68f0() {
   return (neuron0x3199330()*-0.207071);
}

double NNfunction_ss_uRcR::synapse0x31a6930() {
   return (neuron0x3199670()*-1.16895);
}

double NNfunction_ss_uRcR::synapse0x31a6970() {
   return (neuron0x31999b0()*-0.0396778);
}

double NNfunction_ss_uRcR::synapse0x31a69b0() {
   return (neuron0x3199cf0()*0.179531);
}

double NNfunction_ss_uRcR::synapse0x31a69f0() {
   return (neuron0x319a030()*-0.0297195);
}

double NNfunction_ss_uRcR::synapse0x31a6a30() {
   return (neuron0x319a370()*-0.453872);
}

double NNfunction_ss_uRcR::synapse0x31a6a70() {
   return (neuron0x319a6b0()*-0.329698);
}

double NNfunction_ss_uRcR::synapse0x31a6ab0() {
   return (neuron0x319a9f0()*0.713451);
}

double NNfunction_ss_uRcR::synapse0x31a6af0() {
   return (neuron0x319ad30()*-0.500984);
}

double NNfunction_ss_uRcR::synapse0x31a6b30() {
   return (neuron0x319b070()*0.569806);
}

double NNfunction_ss_uRcR::synapse0x31a6b70() {
   return (neuron0x319b3b0()*0.135691);
}

double NNfunction_ss_uRcR::synapse0x31a6600() {
   return (neuron0x319b6f0()*-0.321178);
}

double NNfunction_ss_uRcR::synapse0x31a6640() {
   return (neuron0x319bc50()*0.839666);
}

double NNfunction_ss_uRcR::synapse0x31a6cc0() {
   return (neuron0x319be70()*-0.294652);
}

double NNfunction_ss_uRcR::synapse0x31a6d00() {
   return (neuron0x319c1b0()*0.742164);
}

double NNfunction_ss_uRcR::synapse0x31a6d40() {
   return (neuron0x319c4f0()*0.782704);
}

double NNfunction_ss_uRcR::synapse0x31a6d80() {
   return (neuron0x319c830()*-0.0299893);
}

double NNfunction_ss_uRcR::synapse0x31a6dc0() {
   return (neuron0x319cb70()*0.475486);
}

double NNfunction_ss_uRcR::synapse0x31a6e00() {
   return (neuron0x319ceb0()*0.455689);
}

double NNfunction_ss_uRcR::synapse0x31a7180() {
   return (neuron0x31982f0()*-0.0408945);
}

double NNfunction_ss_uRcR::synapse0x3198510() {
   return (neuron0x3198630()*0.0269289);
}

double NNfunction_ss_uRcR::synapse0x3198550() {
   return (neuron0x3198970()*-0.696766);
}

double NNfunction_ss_uRcR::synapse0x3198850() {
   return (neuron0x3198cb0()*-0.781434);
}

double NNfunction_ss_uRcR::synapse0x3198890() {
   return (neuron0x3198ff0()*-0.0103015);
}

double NNfunction_ss_uRcR::synapse0x3198b90() {
   return (neuron0x3199330()*-0.101491);
}

double NNfunction_ss_uRcR::synapse0x3198bd0() {
   return (neuron0x3199670()*0.593436);
}

double NNfunction_ss_uRcR::synapse0x3198ed0() {
   return (neuron0x31999b0()*-0.5434);
}

double NNfunction_ss_uRcR::synapse0x3198f10() {
   return (neuron0x3199cf0()*-0.394605);
}

double NNfunction_ss_uRcR::synapse0x3199210() {
   return (neuron0x319a030()*-0.217587);
}

double NNfunction_ss_uRcR::synapse0x3199250() {
   return (neuron0x319a370()*0.160274);
}

double NNfunction_ss_uRcR::synapse0x3199550() {
   return (neuron0x319a6b0()*0.49781);
}

double NNfunction_ss_uRcR::synapse0x3199590() {
   return (neuron0x319a9f0()*-0.562466);
}

double NNfunction_ss_uRcR::synapse0x3199890() {
   return (neuron0x319ad30()*-0.490538);
}

double NNfunction_ss_uRcR::synapse0x31998d0() {
   return (neuron0x319b070()*-0.287713);
}

double NNfunction_ss_uRcR::synapse0x3199bd0() {
   return (neuron0x319b3b0()*-0.737123);
}

double NNfunction_ss_uRcR::synapse0x3199c10() {
   return (neuron0x319b6f0()*-0.308465);
}

double NNfunction_ss_uRcR::synapse0x3199f10() {
   return (neuron0x319bc50()*0.0568272);
}

double NNfunction_ss_uRcR::synapse0x3199f50() {
   return (neuron0x319be70()*-0.142528);
}

double NNfunction_ss_uRcR::synapse0x319a250() {
   return (neuron0x319c1b0()*-0.05072);
}

double NNfunction_ss_uRcR::synapse0x319a290() {
   return (neuron0x319c4f0()*-0.442166);
}

double NNfunction_ss_uRcR::synapse0x319a590() {
   return (neuron0x319c830()*0.0775312);
}

double NNfunction_ss_uRcR::synapse0x319a5d0() {
   return (neuron0x319cb70()*-0.0775933);
}

double NNfunction_ss_uRcR::synapse0x319a8d0() {
   return (neuron0x319ceb0()*-0.134454);
}

double NNfunction_ss_uRcR::synapse0x319a910() {
   return (neuron0x31982f0()*-0.297111);
}

double NNfunction_ss_uRcR::synapse0x319b5d0() {
   return (neuron0x3198630()*-0.00184166);
}

double NNfunction_ss_uRcR::synapse0x319b610() {
   return (neuron0x3198970()*-0.299903);
}

double NNfunction_ss_uRcR::synapse0x31a6fd0() {
   return (neuron0x3198cb0()*0.687838);
}

double NNfunction_ss_uRcR::synapse0x31a7010() {
   return (neuron0x3198ff0()*-0.294452);
}

double NNfunction_ss_uRcR::synapse0x319b910() {
   return (neuron0x3199330()*-0.155554);
}

double NNfunction_ss_uRcR::synapse0x319b950() {
   return (neuron0x3199670()*0.165587);
}

double NNfunction_ss_uRcR::synapse0x2f533f0() {
   return (neuron0x31999b0()*0.161563);
}

double NNfunction_ss_uRcR::synapse0x2f53430() {
   return (neuron0x3199cf0()*0.158759);
}

double NNfunction_ss_uRcR::synapse0x319c090() {
   return (neuron0x319a030()*1.00551);
}

double NNfunction_ss_uRcR::synapse0x319c0d0() {
   return (neuron0x319a370()*-0.138984);
}

double NNfunction_ss_uRcR::synapse0x319c3d0() {
   return (neuron0x319a6b0()*-0.583375);
}

double NNfunction_ss_uRcR::synapse0x319c410() {
   return (neuron0x319a9f0()*0.316218);
}

double NNfunction_ss_uRcR::synapse0x319c710() {
   return (neuron0x319ad30()*-0.197946);
}

double NNfunction_ss_uRcR::synapse0x319c750() {
   return (neuron0x319b070()*-0.12062);
}

double NNfunction_ss_uRcR::synapse0x319ca50() {
   return (neuron0x319b3b0()*-0.568534);
}

double NNfunction_ss_uRcR::synapse0x319ca90() {
   return (neuron0x319b6f0()*-0.0836697);
}

double NNfunction_ss_uRcR::synapse0x319cd90() {
   return (neuron0x319bc50()*1.3001);
}

double NNfunction_ss_uRcR::synapse0x319cdd0() {
   return (neuron0x319be70()*-0.182733);
}

double NNfunction_ss_uRcR::synapse0x319d0d0() {
   return (neuron0x319c1b0()*-0.248372);
}

double NNfunction_ss_uRcR::synapse0x319d110() {
   return (neuron0x319c4f0()*-0.0819781);
}

double NNfunction_ss_uRcR::synapse0x319ac10() {
   return (neuron0x319c830()*0.14772);
}

double NNfunction_ss_uRcR::synapse0x319ac50() {
   return (neuron0x319cb70()*-0.431192);
}

double NNfunction_ss_uRcR::synapse0x31a8ef0() {
   return (neuron0x319ceb0()*0.13044);
}

double NNfunction_ss_uRcR::synapse0x31a9270() {
   return (neuron0x31982f0()*-0.364017);
}

double NNfunction_ss_uRcR::synapse0x31a92b0() {
   return (neuron0x3198630()*-0.375392);
}

double NNfunction_ss_uRcR::synapse0x31a92f0() {
   return (neuron0x3198970()*0.00587704);
}

double NNfunction_ss_uRcR::synapse0x31a9330() {
   return (neuron0x3198cb0()*-0.82378);
}

double NNfunction_ss_uRcR::synapse0x31a9370() {
   return (neuron0x3198ff0()*-0.489102);
}

double NNfunction_ss_uRcR::synapse0x31a93b0() {
   return (neuron0x3199330()*0.791733);
}

double NNfunction_ss_uRcR::synapse0x31a93f0() {
   return (neuron0x3199670()*-0.407473);
}

double NNfunction_ss_uRcR::synapse0x31a9430() {
   return (neuron0x31999b0()*-1.17616);
}

double NNfunction_ss_uRcR::synapse0x31a9470() {
   return (neuron0x3199cf0()*0.308472);
}

double NNfunction_ss_uRcR::synapse0x31a94b0() {
   return (neuron0x319a030()*-1.24684);
}

double NNfunction_ss_uRcR::synapse0x31a94f0() {
   return (neuron0x319a370()*0.802692);
}

double NNfunction_ss_uRcR::synapse0x31a9530() {
   return (neuron0x319a6b0()*0.495378);
}

double NNfunction_ss_uRcR::synapse0x31a9570() {
   return (neuron0x319a9f0()*0.89833);
}

double NNfunction_ss_uRcR::synapse0x31a95b0() {
   return (neuron0x319ad30()*0.909299);
}

double NNfunction_ss_uRcR::synapse0x31a95f0() {
   return (neuron0x319b070()*0.812766);
}

double NNfunction_ss_uRcR::synapse0x31a9630() {
   return (neuron0x319b3b0()*-0.66795);
}

double NNfunction_ss_uRcR::synapse0x31a90c0() {
   return (neuron0x319b6f0()*0.269187);
}

double NNfunction_ss_uRcR::synapse0x31a9100() {
   return (neuron0x319bc50()*-0.110019);
}

double NNfunction_ss_uRcR::synapse0x31a9780() {
   return (neuron0x319be70()*-1.37123);
}

double NNfunction_ss_uRcR::synapse0x31a97c0() {
   return (neuron0x319c1b0()*-0.182525);
}

double NNfunction_ss_uRcR::synapse0x31a9800() {
   return (neuron0x319c4f0()*0.610774);
}

double NNfunction_ss_uRcR::synapse0x31a9840() {
   return (neuron0x319c830()*0.132685);
}

double NNfunction_ss_uRcR::synapse0x31a9880() {
   return (neuron0x319cb70()*-0.760975);
}

double NNfunction_ss_uRcR::synapse0x31a98c0() {
   return (neuron0x319ceb0()*-0.262335);
}

double NNfunction_ss_uRcR::synapse0x31a9c40() {
   return (neuron0x31982f0()*0.0878181);
}

double NNfunction_ss_uRcR::synapse0x31a9c80() {
   return (neuron0x3198630()*-0.114562);
}

double NNfunction_ss_uRcR::synapse0x31a9cc0() {
   return (neuron0x3198970()*1.05853);
}

double NNfunction_ss_uRcR::synapse0x31a9d00() {
   return (neuron0x3198cb0()*-2.03926);
}

double NNfunction_ss_uRcR::synapse0x31a9d40() {
   return (neuron0x3198ff0()*0.502617);
}

double NNfunction_ss_uRcR::synapse0x31a9d80() {
   return (neuron0x3199330()*1.01239);
}

double NNfunction_ss_uRcR::synapse0x31a9dc0() {
   return (neuron0x3199670()*0.326482);
}

double NNfunction_ss_uRcR::synapse0x31a9e00() {
   return (neuron0x31999b0()*1.13301);
}

double NNfunction_ss_uRcR::synapse0x31a9e40() {
   return (neuron0x3199cf0()*0.15963);
}

double NNfunction_ss_uRcR::synapse0x31a9e80() {
   return (neuron0x319a030()*0.927693);
}

double NNfunction_ss_uRcR::synapse0x31a9ec0() {
   return (neuron0x319a370()*1.05663);
}

double NNfunction_ss_uRcR::synapse0x31a9f00() {
   return (neuron0x319a6b0()*0.127314);
}

double NNfunction_ss_uRcR::synapse0x31a9f40() {
   return (neuron0x319a9f0()*0.201369);
}

double NNfunction_ss_uRcR::synapse0x31a9f80() {
   return (neuron0x319ad30()*0.372321);
}

double NNfunction_ss_uRcR::synapse0x31a9fc0() {
   return (neuron0x319b070()*-0.633861);
}

double NNfunction_ss_uRcR::synapse0x31aa000() {
   return (neuron0x319b3b0()*-2.23509);
}

double NNfunction_ss_uRcR::synapse0x31a9a90() {
   return (neuron0x319b6f0()*0.303476);
}

double NNfunction_ss_uRcR::synapse0x31a9ad0() {
   return (neuron0x319bc50()*0.0948278);
}

double NNfunction_ss_uRcR::synapse0x31aa150() {
   return (neuron0x319be70()*-0.404438);
}

double NNfunction_ss_uRcR::synapse0x31aa190() {
   return (neuron0x319c1b0()*-0.284467);
}

double NNfunction_ss_uRcR::synapse0x31aa1d0() {
   return (neuron0x319c4f0()*1.00387);
}

double NNfunction_ss_uRcR::synapse0x31aa210() {
   return (neuron0x319c830()*0.187931);
}

double NNfunction_ss_uRcR::synapse0x31aa250() {
   return (neuron0x319cb70()*-1.08295);
}

double NNfunction_ss_uRcR::synapse0x31aa290() {
   return (neuron0x319ceb0()*0.340475);
}

double NNfunction_ss_uRcR::synapse0x31aa610() {
   return (neuron0x31982f0()*-0.4584);
}

double NNfunction_ss_uRcR::synapse0x31aa650() {
   return (neuron0x3198630()*0.445143);
}

double NNfunction_ss_uRcR::synapse0x31aa690() {
   return (neuron0x3198970()*0.45999);
}

double NNfunction_ss_uRcR::synapse0x31aa6d0() {
   return (neuron0x3198cb0()*0.625945);
}

double NNfunction_ss_uRcR::synapse0x31aa710() {
   return (neuron0x3198ff0()*0.0110707);
}

double NNfunction_ss_uRcR::synapse0x31aa750() {
   return (neuron0x3199330()*0.290815);
}

double NNfunction_ss_uRcR::synapse0x31aa790() {
   return (neuron0x3199670()*0.289007);
}

double NNfunction_ss_uRcR::synapse0x31aa7d0() {
   return (neuron0x31999b0()*-0.026408);
}

double NNfunction_ss_uRcR::synapse0x31aa810() {
   return (neuron0x3199cf0()*0.574106);
}

double NNfunction_ss_uRcR::synapse0x31aa850() {
   return (neuron0x319a030()*-0.175874);
}

double NNfunction_ss_uRcR::synapse0x31aa890() {
   return (neuron0x319a370()*0.0210164);
}

double NNfunction_ss_uRcR::synapse0x31aa8d0() {
   return (neuron0x319a6b0()*0.0554845);
}

double NNfunction_ss_uRcR::synapse0x31aa910() {
   return (neuron0x319a9f0()*-0.138541);
}

double NNfunction_ss_uRcR::synapse0x31aa950() {
   return (neuron0x319ad30()*-0.290373);
}

double NNfunction_ss_uRcR::synapse0x31aa990() {
   return (neuron0x319b070()*-0.0792901);
}

double NNfunction_ss_uRcR::synapse0x31aa9d0() {
   return (neuron0x319b3b0()*0.342901);
}

double NNfunction_ss_uRcR::synapse0x31aa460() {
   return (neuron0x319b6f0()*-0.776204);
}

double NNfunction_ss_uRcR::synapse0x31aa4a0() {
   return (neuron0x319bc50()*0.11163);
}

double NNfunction_ss_uRcR::synapse0x31aab20() {
   return (neuron0x319be70()*0.736424);
}

double NNfunction_ss_uRcR::synapse0x31aab60() {
   return (neuron0x319c1b0()*-0.401483);
}

double NNfunction_ss_uRcR::synapse0x31aaba0() {
   return (neuron0x319c4f0()*-0.128351);
}

double NNfunction_ss_uRcR::synapse0x31aabe0() {
   return (neuron0x319c830()*0.792492);
}

double NNfunction_ss_uRcR::synapse0x31aac20() {
   return (neuron0x319cb70()*-0.628321);
}

double NNfunction_ss_uRcR::synapse0x31aac60() {
   return (neuron0x319ceb0()*-0.426944);
}

double NNfunction_ss_uRcR::synapse0x31aafe0() {
   return (neuron0x31982f0()*-0.164717);
}

double NNfunction_ss_uRcR::synapse0x31ab020() {
   return (neuron0x3198630()*-0.569651);
}

double NNfunction_ss_uRcR::synapse0x31ab060() {
   return (neuron0x3198970()*-1.28333);
}

double NNfunction_ss_uRcR::synapse0x31ab0a0() {
   return (neuron0x3198cb0()*0.0736853);
}

double NNfunction_ss_uRcR::synapse0x31ab0e0() {
   return (neuron0x3198ff0()*0.501347);
}

double NNfunction_ss_uRcR::synapse0x31ab120() {
   return (neuron0x3199330()*0.196752);
}

double NNfunction_ss_uRcR::synapse0x31ab160() {
   return (neuron0x3199670()*0.525367);
}

double NNfunction_ss_uRcR::synapse0x31ab1a0() {
   return (neuron0x31999b0()*-0.855371);
}

double NNfunction_ss_uRcR::synapse0x31ab1e0() {
   return (neuron0x3199cf0()*0.0441811);
}

double NNfunction_ss_uRcR::synapse0x31ab220() {
   return (neuron0x319a030()*-0.0995484);
}

double NNfunction_ss_uRcR::synapse0x31ab260() {
   return (neuron0x319a370()*0.178788);
}

double NNfunction_ss_uRcR::synapse0x31ab2a0() {
   return (neuron0x319a6b0()*0.57018);
}

double NNfunction_ss_uRcR::synapse0x31ab2e0() {
   return (neuron0x319a9f0()*-0.0494669);
}

double NNfunction_ss_uRcR::synapse0x31ab320() {
   return (neuron0x319ad30()*-0.631104);
}

double NNfunction_ss_uRcR::synapse0x31ab360() {
   return (neuron0x319b070()*0.00372341);
}

double NNfunction_ss_uRcR::synapse0x31ab3a0() {
   return (neuron0x319b3b0()*-1.52328);
}

double NNfunction_ss_uRcR::synapse0x31aae30() {
   return (neuron0x319b6f0()*-0.0287381);
}

double NNfunction_ss_uRcR::synapse0x31aae70() {
   return (neuron0x319bc50()*0.269865);
}

double NNfunction_ss_uRcR::synapse0x31ab4f0() {
   return (neuron0x319be70()*-0.531357);
}

double NNfunction_ss_uRcR::synapse0x31ab530() {
   return (neuron0x319c1b0()*-0.32688);
}

double NNfunction_ss_uRcR::synapse0x31ab570() {
   return (neuron0x319c4f0()*-0.429643);
}

double NNfunction_ss_uRcR::synapse0x31ab5b0() {
   return (neuron0x319c830()*0.701001);
}

double NNfunction_ss_uRcR::synapse0x31ab5f0() {
   return (neuron0x319cb70()*-0.352381);
}

double NNfunction_ss_uRcR::synapse0x31ab630() {
   return (neuron0x319ceb0()*-0.236422);
}

double NNfunction_ss_uRcR::synapse0x31ab9b0() {
   return (neuron0x31982f0()*0.0746505);
}

double NNfunction_ss_uRcR::synapse0x31ab9f0() {
   return (neuron0x3198630()*0.0421112);
}

double NNfunction_ss_uRcR::synapse0x31aba30() {
   return (neuron0x3198970()*-0.286521);
}

double NNfunction_ss_uRcR::synapse0x31aba70() {
   return (neuron0x3198cb0()*0.12752);
}

double NNfunction_ss_uRcR::synapse0x31abab0() {
   return (neuron0x3198ff0()*0.173854);
}

double NNfunction_ss_uRcR::synapse0x31abaf0() {
   return (neuron0x3199330()*0.513309);
}

double NNfunction_ss_uRcR::synapse0x31abb30() {
   return (neuron0x3199670()*0.183629);
}

double NNfunction_ss_uRcR::synapse0x31abb70() {
   return (neuron0x31999b0()*-0.498502);
}

double NNfunction_ss_uRcR::synapse0x31abbb0() {
   return (neuron0x3199cf0()*-0.492427);
}

double NNfunction_ss_uRcR::synapse0x31a3d70() {
   return (neuron0x319a030()*0.294543);
}

double NNfunction_ss_uRcR::synapse0x31a3db0() {
   return (neuron0x319a370()*0.473111);
}

double NNfunction_ss_uRcR::synapse0x31a3df0() {
   return (neuron0x319a6b0()*0.738182);
}

double NNfunction_ss_uRcR::synapse0x31a3e30() {
   return (neuron0x319a9f0()*-0.5564);
}

double NNfunction_ss_uRcR::synapse0x31a3e70() {
   return (neuron0x319ad30()*-0.81612);
}

double NNfunction_ss_uRcR::synapse0x31a3eb0() {
   return (neuron0x319b070()*0.327747);
}

double NNfunction_ss_uRcR::synapse0x31a3ef0() {
   return (neuron0x319b3b0()*1.48619);
}

double NNfunction_ss_uRcR::synapse0x31ab800() {
   return (neuron0x319b6f0()*-0.259209);
}

double NNfunction_ss_uRcR::synapse0x31ab840() {
   return (neuron0x319bc50()*-1.06455);
}

double NNfunction_ss_uRcR::synapse0x31a4040() {
   return (neuron0x319be70()*-0.347364);
}

double NNfunction_ss_uRcR::synapse0x31a4080() {
   return (neuron0x319c1b0()*1.20739);
}

double NNfunction_ss_uRcR::synapse0x31a40c0() {
   return (neuron0x319c4f0()*0.0522511);
}

double NNfunction_ss_uRcR::synapse0x31a4100() {
   return (neuron0x319c830()*0.318027);
}

double NNfunction_ss_uRcR::synapse0x31a4140() {
   return (neuron0x319cb70()*-0.168131);
}

double NNfunction_ss_uRcR::synapse0x31a4180() {
   return (neuron0x319ceb0()*-0.0213664);
}

double NNfunction_ss_uRcR::synapse0x31a4500() {
   return (neuron0x31982f0()*0.0480079);
}

double NNfunction_ss_uRcR::synapse0x31a4540() {
   return (neuron0x3198630()*1.01955);
}

double NNfunction_ss_uRcR::synapse0x31a4580() {
   return (neuron0x3198970()*1.24689);
}

double NNfunction_ss_uRcR::synapse0x31a45c0() {
   return (neuron0x3198cb0()*0.136298);
}

double NNfunction_ss_uRcR::synapse0x31a4600() {
   return (neuron0x3198ff0()*0.813071);
}

double NNfunction_ss_uRcR::synapse0x31a4640() {
   return (neuron0x3199330()*-0.370331);
}

double NNfunction_ss_uRcR::synapse0x31a4680() {
   return (neuron0x3199670()*-1.24272);
}

double NNfunction_ss_uRcR::synapse0x31a46c0() {
   return (neuron0x31999b0()*-0.64468);
}

double NNfunction_ss_uRcR::synapse0x31a4700() {
   return (neuron0x3199cf0()*0.0263827);
}

double NNfunction_ss_uRcR::synapse0x31a4740() {
   return (neuron0x319a030()*1.04205);
}

double NNfunction_ss_uRcR::synapse0x31a4780() {
   return (neuron0x319a370()*-0.19999);
}

double NNfunction_ss_uRcR::synapse0x31a47c0() {
   return (neuron0x319a6b0()*0.624807);
}

double NNfunction_ss_uRcR::synapse0x31a4800() {
   return (neuron0x319a9f0()*-0.757421);
}

double NNfunction_ss_uRcR::synapse0x31a4840() {
   return (neuron0x319ad30()*0.00431647);
}

double NNfunction_ss_uRcR::synapse0x31a4880() {
   return (neuron0x319b070()*0.387455);
}

double NNfunction_ss_uRcR::synapse0x31a48c0() {
   return (neuron0x319b3b0()*0.203036);
}

double NNfunction_ss_uRcR::synapse0x31a4350() {
   return (neuron0x319b6f0()*-0.605729);
}

double NNfunction_ss_uRcR::synapse0x31a4390() {
   return (neuron0x319bc50()*-0.203689);
}

double NNfunction_ss_uRcR::synapse0x31a4a10() {
   return (neuron0x319be70()*0.107001);
}

double NNfunction_ss_uRcR::synapse0x31a4a50() {
   return (neuron0x319c1b0()*0.767968);
}

double NNfunction_ss_uRcR::synapse0x31a4a90() {
   return (neuron0x319c4f0()*0.0793318);
}

double NNfunction_ss_uRcR::synapse0x31a4ad0() {
   return (neuron0x319c830()*1.07826);
}

double NNfunction_ss_uRcR::synapse0x31a4b10() {
   return (neuron0x319cb70()*-0.627315);
}

double NNfunction_ss_uRcR::synapse0x31a4b50() {
   return (neuron0x319ceb0()*-0.0480029);
}

double NNfunction_ss_uRcR::synapse0x31a4d20() {
   return (neuron0x31982f0()*0.212861);
}

double NNfunction_ss_uRcR::synapse0x31addb0() {
   return (neuron0x3198630()*-0.472142);
}

double NNfunction_ss_uRcR::synapse0x31addf0() {
   return (neuron0x3198970()*0.925228);
}

double NNfunction_ss_uRcR::synapse0x31ade30() {
   return (neuron0x3198cb0()*0.773296);
}

double NNfunction_ss_uRcR::synapse0x31ade70() {
   return (neuron0x3198ff0()*0.478878);
}

double NNfunction_ss_uRcR::synapse0x31adeb0() {
   return (neuron0x3199330()*0.164946);
}

double NNfunction_ss_uRcR::synapse0x31adef0() {
   return (neuron0x3199670()*-0.975987);
}

double NNfunction_ss_uRcR::synapse0x31adf30() {
   return (neuron0x31999b0()*-0.226693);
}

double NNfunction_ss_uRcR::synapse0x31adf70() {
   return (neuron0x3199cf0()*-1.10243);
}

double NNfunction_ss_uRcR::synapse0x31adfb0() {
   return (neuron0x319a030()*0.452862);
}

double NNfunction_ss_uRcR::synapse0x31adff0() {
   return (neuron0x319a370()*0.143328);
}

double NNfunction_ss_uRcR::synapse0x31ae030() {
   return (neuron0x319a6b0()*0.185322);
}

double NNfunction_ss_uRcR::synapse0x31ae070() {
   return (neuron0x319a9f0()*-0.68545);
}

double NNfunction_ss_uRcR::synapse0x31ae0b0() {
   return (neuron0x319ad30()*0.623849);
}

double NNfunction_ss_uRcR::synapse0x31ae0f0() {
   return (neuron0x319b070()*0.374506);
}

double NNfunction_ss_uRcR::synapse0x31ae130() {
   return (neuron0x319b3b0()*0.700669);
}

double NNfunction_ss_uRcR::synapse0x31adc00() {
   return (neuron0x319b6f0()*-0.0474476);
}

double NNfunction_ss_uRcR::synapse0x31adc40() {
   return (neuron0x319bc50()*0.850676);
}

double NNfunction_ss_uRcR::synapse0x31ae280() {
   return (neuron0x319be70()*0.0781167);
}

double NNfunction_ss_uRcR::synapse0x31ae2c0() {
   return (neuron0x319c1b0()*-0.103524);
}

double NNfunction_ss_uRcR::synapse0x31ae300() {
   return (neuron0x319c4f0()*-0.427155);
}

double NNfunction_ss_uRcR::synapse0x31ae340() {
   return (neuron0x319c830()*0.0229537);
}

double NNfunction_ss_uRcR::synapse0x31ae380() {
   return (neuron0x319cb70()*0.138877);
}

double NNfunction_ss_uRcR::synapse0x31ae3c0() {
   return (neuron0x319ceb0()*-0.11325);
}

double NNfunction_ss_uRcR::synapse0x31ae740() {
   return (neuron0x31982f0()*-0.00516763);
}

double NNfunction_ss_uRcR::synapse0x31ae780() {
   return (neuron0x3198630()*-0.00327062);
}

double NNfunction_ss_uRcR::synapse0x31ae7c0() {
   return (neuron0x3198970()*-0.0583423);
}

double NNfunction_ss_uRcR::synapse0x31ae800() {
   return (neuron0x3198cb0()*-4.92205);
}

double NNfunction_ss_uRcR::synapse0x31ae840() {
   return (neuron0x3198ff0()*-0.0191019);
}

double NNfunction_ss_uRcR::synapse0x31ae880() {
   return (neuron0x3199330()*0.0315296);
}

double NNfunction_ss_uRcR::synapse0x31ae8c0() {
   return (neuron0x3199670()*0.0210084);
}

double NNfunction_ss_uRcR::synapse0x31ae900() {
   return (neuron0x31999b0()*0.00277505);
}

double NNfunction_ss_uRcR::synapse0x31ae940() {
   return (neuron0x3199cf0()*-0.00797213);
}

double NNfunction_ss_uRcR::synapse0x31ae980() {
   return (neuron0x319a030()*0.0278724);
}

double NNfunction_ss_uRcR::synapse0x31ae9c0() {
   return (neuron0x319a370()*0.000618537);
}

double NNfunction_ss_uRcR::synapse0x31aea00() {
   return (neuron0x319a6b0()*0.016836);
}

double NNfunction_ss_uRcR::synapse0x31aea40() {
   return (neuron0x319a9f0()*-0.00339826);
}

double NNfunction_ss_uRcR::synapse0x31aea80() {
   return (neuron0x319ad30()*-0.0135474);
}

double NNfunction_ss_uRcR::synapse0x31aeac0() {
   return (neuron0x319b070()*0.23106);
}

double NNfunction_ss_uRcR::synapse0x31aeb00() {
   return (neuron0x319b3b0()*0.236279);
}

double NNfunction_ss_uRcR::synapse0x31ae590() {
   return (neuron0x319b6f0()*0.0184868);
}

double NNfunction_ss_uRcR::synapse0x31ae5d0() {
   return (neuron0x319bc50()*0.00579639);
}

double NNfunction_ss_uRcR::synapse0x31aec50() {
   return (neuron0x319be70()*-0.0117812);
}

double NNfunction_ss_uRcR::synapse0x31aec90() {
   return (neuron0x319c1b0()*0.00214891);
}

double NNfunction_ss_uRcR::synapse0x31aecd0() {
   return (neuron0x319c4f0()*0.0276553);
}

double NNfunction_ss_uRcR::synapse0x31aed10() {
   return (neuron0x319c830()*-0.0153305);
}

double NNfunction_ss_uRcR::synapse0x31aed50() {
   return (neuron0x319cb70()*-0.00406742);
}

double NNfunction_ss_uRcR::synapse0x31aed90() {
   return (neuron0x319ceb0()*0.0503995);
}

double NNfunction_ss_uRcR::synapse0x31af110() {
   return (neuron0x31982f0()*0.0789713);
}

double NNfunction_ss_uRcR::synapse0x31af150() {
   return (neuron0x3198630()*0.0536636);
}

double NNfunction_ss_uRcR::synapse0x31af190() {
   return (neuron0x3198970()*-0.0626665);
}

double NNfunction_ss_uRcR::synapse0x31af1d0() {
   return (neuron0x3198cb0()*-2.71313);
}

double NNfunction_ss_uRcR::synapse0x31af210() {
   return (neuron0x3198ff0()*0.0955004);
}

double NNfunction_ss_uRcR::synapse0x31af250() {
   return (neuron0x3199330()*-0.0957255);
}

double NNfunction_ss_uRcR::synapse0x31af290() {
   return (neuron0x3199670()*-0.0746273);
}

double NNfunction_ss_uRcR::synapse0x31af2d0() {
   return (neuron0x31999b0()*0.0422497);
}

double NNfunction_ss_uRcR::synapse0x31af310() {
   return (neuron0x3199cf0()*-0.00614117);
}

double NNfunction_ss_uRcR::synapse0x31af350() {
   return (neuron0x319a030()*-0.0660701);
}

double NNfunction_ss_uRcR::synapse0x31af390() {
   return (neuron0x319a370()*-0.118295);
}

double NNfunction_ss_uRcR::synapse0x31af3d0() {
   return (neuron0x319a6b0()*-0.0735549);
}

double NNfunction_ss_uRcR::synapse0x31af410() {
   return (neuron0x319a9f0()*-0.0563789);
}

double NNfunction_ss_uRcR::synapse0x31af450() {
   return (neuron0x319ad30()*-0.0597444);
}

double NNfunction_ss_uRcR::synapse0x31af490() {
   return (neuron0x319b070()*0.406644);
}

double NNfunction_ss_uRcR::synapse0x31af4d0() {
   return (neuron0x319b3b0()*0.408845);
}

double NNfunction_ss_uRcR::synapse0x31aef60() {
   return (neuron0x319b6f0()*-0.150313);
}

double NNfunction_ss_uRcR::synapse0x31aefa0() {
   return (neuron0x319bc50()*-0.0469761);
}

double NNfunction_ss_uRcR::synapse0x31af620() {
   return (neuron0x319be70()*-0.095371);
}

double NNfunction_ss_uRcR::synapse0x31af660() {
   return (neuron0x319c1b0()*-0.110702);
}

double NNfunction_ss_uRcR::synapse0x31af6a0() {
   return (neuron0x319c4f0()*0.014539);
}

double NNfunction_ss_uRcR::synapse0x31af6e0() {
   return (neuron0x319c830()*0.00720652);
}

double NNfunction_ss_uRcR::synapse0x31af720() {
   return (neuron0x319cb70()*-0.00452279);
}

double NNfunction_ss_uRcR::synapse0x31af760() {
   return (neuron0x319ceb0()*0.0495105);
}

double NNfunction_ss_uRcR::synapse0x31afae0() {
   return (neuron0x31982f0()*0.063314);
}

double NNfunction_ss_uRcR::synapse0x31afb20() {
   return (neuron0x3198630()*0.266166);
}

double NNfunction_ss_uRcR::synapse0x31afb60() {
   return (neuron0x3198970()*0.182326);
}

double NNfunction_ss_uRcR::synapse0x31afba0() {
   return (neuron0x3198cb0()*0.625158);
}

double NNfunction_ss_uRcR::synapse0x31afbe0() {
   return (neuron0x3198ff0()*-0.49007);
}

double NNfunction_ss_uRcR::synapse0x31afc20() {
   return (neuron0x3199330()*0.465026);
}

double NNfunction_ss_uRcR::synapse0x31afc60() {
   return (neuron0x3199670()*0.56904);
}

double NNfunction_ss_uRcR::synapse0x31afca0() {
   return (neuron0x31999b0()*-0.453994);
}

double NNfunction_ss_uRcR::synapse0x31afce0() {
   return (neuron0x3199cf0()*0.0768514);
}

double NNfunction_ss_uRcR::synapse0x31afd20() {
   return (neuron0x319a030()*0.0205885);
}

double NNfunction_ss_uRcR::synapse0x31afd60() {
   return (neuron0x319a370()*-0.0929452);
}

double NNfunction_ss_uRcR::synapse0x31afda0() {
   return (neuron0x319a6b0()*0.484914);
}

double NNfunction_ss_uRcR::synapse0x31afde0() {
   return (neuron0x319a9f0()*1.63849);
}

double NNfunction_ss_uRcR::synapse0x31afe20() {
   return (neuron0x319ad30()*-0.724918);
}

double NNfunction_ss_uRcR::synapse0x31afe60() {
   return (neuron0x319b070()*0.688385);
}

double NNfunction_ss_uRcR::synapse0x31afea0() {
   return (neuron0x319b3b0()*-0.459608);
}

double NNfunction_ss_uRcR::synapse0x31af930() {
   return (neuron0x319b6f0()*0.444573);
}

double NNfunction_ss_uRcR::synapse0x31af970() {
   return (neuron0x319bc50()*-0.913401);
}

double NNfunction_ss_uRcR::synapse0x31afff0() {
   return (neuron0x319be70()*-0.725414);
}

double NNfunction_ss_uRcR::synapse0x31b0030() {
   return (neuron0x319c1b0()*0.487964);
}

double NNfunction_ss_uRcR::synapse0x31b0070() {
   return (neuron0x319c4f0()*0.40284);
}

double NNfunction_ss_uRcR::synapse0x31b00b0() {
   return (neuron0x319c830()*0.592737);
}

double NNfunction_ss_uRcR::synapse0x31b00f0() {
   return (neuron0x319cb70()*-0.122916);
}

double NNfunction_ss_uRcR::synapse0x31b0130() {
   return (neuron0x319ceb0()*-0.0740564);
}

double NNfunction_ss_uRcR::synapse0x31b04b0() {
   return (neuron0x31982f0()*0.0820783);
}

double NNfunction_ss_uRcR::synapse0x31b04f0() {
   return (neuron0x3198630()*0.591917);
}

double NNfunction_ss_uRcR::synapse0x31b0530() {
   return (neuron0x3198970()*-0.122959);
}

double NNfunction_ss_uRcR::synapse0x31b0570() {
   return (neuron0x3198cb0()*-2.02728);
}

double NNfunction_ss_uRcR::synapse0x31b05b0() {
   return (neuron0x3198ff0()*0.74938);
}

double NNfunction_ss_uRcR::synapse0x31b05f0() {
   return (neuron0x3199330()*1.13952);
}

double NNfunction_ss_uRcR::synapse0x31b0630() {
   return (neuron0x3199670()*0.463716);
}

double NNfunction_ss_uRcR::synapse0x31b0670() {
   return (neuron0x31999b0()*-0.499212);
}

double NNfunction_ss_uRcR::synapse0x31b06b0() {
   return (neuron0x3199cf0()*-1.39862);
}

double NNfunction_ss_uRcR::synapse0x31b06f0() {
   return (neuron0x319a030()*0.618114);
}

double NNfunction_ss_uRcR::synapse0x31b0730() {
   return (neuron0x319a370()*-0.204968);
}

double NNfunction_ss_uRcR::synapse0x31b0770() {
   return (neuron0x319a6b0()*-0.0736882);
}

double NNfunction_ss_uRcR::synapse0x31b07b0() {
   return (neuron0x319a9f0()*0.473003);
}

double NNfunction_ss_uRcR::synapse0x31b07f0() {
   return (neuron0x319ad30()*0.195393);
}

double NNfunction_ss_uRcR::synapse0x31b0830() {
   return (neuron0x319b070()*0.394984);
}

double NNfunction_ss_uRcR::synapse0x31b0870() {
   return (neuron0x319b3b0()*-0.213286);
}

double NNfunction_ss_uRcR::synapse0x31b0300() {
   return (neuron0x319b6f0()*-0.934636);
}

double NNfunction_ss_uRcR::synapse0x31b0340() {
   return (neuron0x319bc50()*0.444808);
}

double NNfunction_ss_uRcR::synapse0x31b09c0() {
   return (neuron0x319be70()*-0.00108486);
}

double NNfunction_ss_uRcR::synapse0x31b0a00() {
   return (neuron0x319c1b0()*-1.01394);
}

double NNfunction_ss_uRcR::synapse0x31b0a40() {
   return (neuron0x319c4f0()*0.465774);
}

double NNfunction_ss_uRcR::synapse0x31b0a80() {
   return (neuron0x319c830()*0.685614);
}

double NNfunction_ss_uRcR::synapse0x31b0ac0() {
   return (neuron0x319cb70()*-0.844204);
}

double NNfunction_ss_uRcR::synapse0x31b0b00() {
   return (neuron0x319ceb0()*0.0412131);
}

double NNfunction_ss_uRcR::synapse0x31b0e80() {
   return (neuron0x31982f0()*0.0258058);
}

double NNfunction_ss_uRcR::synapse0x31b0ec0() {
   return (neuron0x3198630()*-1.29931);
}

double NNfunction_ss_uRcR::synapse0x31b0f00() {
   return (neuron0x3198970()*0.547655);
}

double NNfunction_ss_uRcR::synapse0x31b0f40() {
   return (neuron0x3198cb0()*0.925491);
}

double NNfunction_ss_uRcR::synapse0x31b0f80() {
   return (neuron0x3198ff0()*0.34777);
}

double NNfunction_ss_uRcR::synapse0x31b0fc0() {
   return (neuron0x3199330()*0.386445);
}

double NNfunction_ss_uRcR::synapse0x31b1000() {
   return (neuron0x3199670()*0.0396451);
}

double NNfunction_ss_uRcR::synapse0x31b1040() {
   return (neuron0x31999b0()*-0.354126);
}

double NNfunction_ss_uRcR::synapse0x31b1080() {
   return (neuron0x3199cf0()*0.494299);
}

double NNfunction_ss_uRcR::synapse0x31b10c0() {
   return (neuron0x319a030()*0.522197);
}

double NNfunction_ss_uRcR::synapse0x31b1100() {
   return (neuron0x319a370()*0.51525);
}

double NNfunction_ss_uRcR::synapse0x31b1140() {
   return (neuron0x319a6b0()*0.206823);
}

double NNfunction_ss_uRcR::synapse0x31b1180() {
   return (neuron0x319a9f0()*0.116412);
}

double NNfunction_ss_uRcR::synapse0x31b11c0() {
   return (neuron0x319ad30()*0.08341);
}

double NNfunction_ss_uRcR::synapse0x31b1200() {
   return (neuron0x319b070()*-1.43591);
}

double NNfunction_ss_uRcR::synapse0x31b1240() {
   return (neuron0x319b3b0()*-0.721493);
}

double NNfunction_ss_uRcR::synapse0x31b0cd0() {
   return (neuron0x319b6f0()*0.0469911);
}

double NNfunction_ss_uRcR::synapse0x31b0d10() {
   return (neuron0x319bc50()*-0.099452);
}

double NNfunction_ss_uRcR::synapse0x31b1390() {
   return (neuron0x319be70()*0.190894);
}

double NNfunction_ss_uRcR::synapse0x31b13d0() {
   return (neuron0x319c1b0()*0.393453);
}

double NNfunction_ss_uRcR::synapse0x31b1410() {
   return (neuron0x319c4f0()*-0.00861506);
}

double NNfunction_ss_uRcR::synapse0x31b1450() {
   return (neuron0x319c830()*0.515139);
}

double NNfunction_ss_uRcR::synapse0x31b1490() {
   return (neuron0x319cb70()*0.0126093);
}

double NNfunction_ss_uRcR::synapse0x31b14d0() {
   return (neuron0x319ceb0()*-0.00676709);
}

double NNfunction_ss_uRcR::synapse0x31b1850() {
   return (neuron0x31982f0()*0.087082);
}

double NNfunction_ss_uRcR::synapse0x31b1890() {
   return (neuron0x3198630()*-0.252685);
}

double NNfunction_ss_uRcR::synapse0x31b18d0() {
   return (neuron0x3198970()*0.0153064);
}

double NNfunction_ss_uRcR::synapse0x31b1910() {
   return (neuron0x3198cb0()*0.0315951);
}

double NNfunction_ss_uRcR::synapse0x31b1950() {
   return (neuron0x3198ff0()*-0.457336);
}

double NNfunction_ss_uRcR::synapse0x31b1990() {
   return (neuron0x3199330()*-0.106299);
}

double NNfunction_ss_uRcR::synapse0x31b19d0() {
   return (neuron0x3199670()*0.37957);
}

double NNfunction_ss_uRcR::synapse0x31b1a10() {
   return (neuron0x31999b0()*0.31283);
}

double NNfunction_ss_uRcR::synapse0x31b1a50() {
   return (neuron0x3199cf0()*0.566192);
}

double NNfunction_ss_uRcR::synapse0x31b1a90() {
   return (neuron0x319a030()*0.249409);
}

double NNfunction_ss_uRcR::synapse0x31b1ad0() {
   return (neuron0x319a370()*-0.974624);
}

double NNfunction_ss_uRcR::synapse0x31b1b10() {
   return (neuron0x319a6b0()*-0.2005);
}

double NNfunction_ss_uRcR::synapse0x31b1b50() {
   return (neuron0x319a9f0()*-0.578719);
}

double NNfunction_ss_uRcR::synapse0x31b1b90() {
   return (neuron0x319ad30()*-1.1551);
}

double NNfunction_ss_uRcR::synapse0x31b1bd0() {
   return (neuron0x319b070()*-0.170219);
}

double NNfunction_ss_uRcR::synapse0x31b1c10() {
   return (neuron0x319b3b0()*-0.353986);
}

double NNfunction_ss_uRcR::synapse0x31b16a0() {
   return (neuron0x319b6f0()*0.162869);
}

double NNfunction_ss_uRcR::synapse0x31b16e0() {
   return (neuron0x319bc50()*-0.886536);
}

double NNfunction_ss_uRcR::synapse0x31b1d60() {
   return (neuron0x319be70()*0.10908);
}

double NNfunction_ss_uRcR::synapse0x31b1da0() {
   return (neuron0x319c1b0()*1.07587);
}

double NNfunction_ss_uRcR::synapse0x31b1de0() {
   return (neuron0x319c4f0()*0.3408);
}

double NNfunction_ss_uRcR::synapse0x31b1e20() {
   return (neuron0x319c830()*-0.33496);
}

double NNfunction_ss_uRcR::synapse0x31b1e60() {
   return (neuron0x319cb70()*0.0208299);
}

double NNfunction_ss_uRcR::synapse0x31b1ea0() {
   return (neuron0x319ceb0()*0.00816567);
}

double NNfunction_ss_uRcR::synapse0x31b2220() {
   return (neuron0x31982f0()*-0.162523);
}

double NNfunction_ss_uRcR::synapse0x31b2260() {
   return (neuron0x3198630()*-1.46854);
}

double NNfunction_ss_uRcR::synapse0x31b22a0() {
   return (neuron0x3198970()*-0.294513);
}

double NNfunction_ss_uRcR::synapse0x31b22e0() {
   return (neuron0x3198cb0()*-0.734317);
}

double NNfunction_ss_uRcR::synapse0x31b2320() {
   return (neuron0x3198ff0()*-0.390423);
}

double NNfunction_ss_uRcR::synapse0x31b2360() {
   return (neuron0x3199330()*0.391638);
}

double NNfunction_ss_uRcR::synapse0x31b23a0() {
   return (neuron0x3199670()*0.0212247);
}

double NNfunction_ss_uRcR::synapse0x31b23e0() {
   return (neuron0x31999b0()*0.311487);
}

double NNfunction_ss_uRcR::synapse0x31b2420() {
   return (neuron0x3199cf0()*0.553792);
}

double NNfunction_ss_uRcR::synapse0x31b2460() {
   return (neuron0x319a030()*0.0571498);
}

double NNfunction_ss_uRcR::synapse0x31b24a0() {
   return (neuron0x319a370()*0.61469);
}

double NNfunction_ss_uRcR::synapse0x31b24e0() {
   return (neuron0x319a6b0()*-0.136297);
}

double NNfunction_ss_uRcR::synapse0x31b2520() {
   return (neuron0x319a9f0()*-0.404582);
}

double NNfunction_ss_uRcR::synapse0x31b2560() {
   return (neuron0x319ad30()*1.07634);
}

double NNfunction_ss_uRcR::synapse0x31b25a0() {
   return (neuron0x319b070()*0.302153);
}

double NNfunction_ss_uRcR::synapse0x31b25e0() {
   return (neuron0x319b3b0()*0.463169);
}

double NNfunction_ss_uRcR::synapse0x31b2070() {
   return (neuron0x319b6f0()*0.453968);
}

double NNfunction_ss_uRcR::synapse0x31b20b0() {
   return (neuron0x319bc50()*0.467934);
}

double NNfunction_ss_uRcR::synapse0x31b2730() {
   return (neuron0x319be70()*0.75667);
}

double NNfunction_ss_uRcR::synapse0x31b2770() {
   return (neuron0x319c1b0()*0.233153);
}

double NNfunction_ss_uRcR::synapse0x31b27b0() {
   return (neuron0x319c4f0()*0.0295856);
}

double NNfunction_ss_uRcR::synapse0x31b27f0() {
   return (neuron0x319c830()*0.532216);
}

double NNfunction_ss_uRcR::synapse0x31b2830() {
   return (neuron0x319cb70()*-0.347469);
}

double NNfunction_ss_uRcR::synapse0x31b2870() {
   return (neuron0x319ceb0()*0.504003);
}

double NNfunction_ss_uRcR::synapse0x31b2bf0() {
   return (neuron0x31982f0()*0.0820138);
}

double NNfunction_ss_uRcR::synapse0x31a71c0() {
   return (neuron0x3198630()*0.0475816);
}

double NNfunction_ss_uRcR::synapse0x31a7200() {
   return (neuron0x3198970()*0.130011);
}

double NNfunction_ss_uRcR::synapse0x31a7240() {
   return (neuron0x3198cb0()*-1.58078);
}

double NNfunction_ss_uRcR::synapse0x31a7490() {
   return (neuron0x3198ff0()*0.351723);
}

double NNfunction_ss_uRcR::synapse0x31a74d0() {
   return (neuron0x3199330()*0.547354);
}

double NNfunction_ss_uRcR::synapse0x31a7510() {
   return (neuron0x3199670()*0.245004);
}

double NNfunction_ss_uRcR::synapse0x31a7760() {
   return (neuron0x31999b0()*0.26285);
}

double NNfunction_ss_uRcR::synapse0x31a77a0() {
   return (neuron0x3199cf0()*0.312218);
}

double NNfunction_ss_uRcR::synapse0x31a79f0() {
   return (neuron0x319a030()*0.0149912);
}

double NNfunction_ss_uRcR::synapse0x31a7a30() {
   return (neuron0x319a370()*0.28708);
}

double NNfunction_ss_uRcR::synapse0x31a7a70() {
   return (neuron0x319a6b0()*-0.142913);
}

double NNfunction_ss_uRcR::synapse0x31a7cc0() {
   return (neuron0x319a9f0()*-0.0107293);
}

double NNfunction_ss_uRcR::synapse0x31a7d00() {
   return (neuron0x319ad30()*0.0288534);
}

double NNfunction_ss_uRcR::synapse0x31a7f50() {
   return (neuron0x319b070()*-1.11711);
}

double NNfunction_ss_uRcR::synapse0x31a7f90() {
   return (neuron0x319b3b0()*-1.25632);
}

double NNfunction_ss_uRcR::synapse0x31b2a40() {
   return (neuron0x319b6f0()*0.165857);
}

double NNfunction_ss_uRcR::synapse0x31b2a80() {
   return (neuron0x319bc50()*0.311771);
}

double NNfunction_ss_uRcR::synapse0x31a80e0() {
   return (neuron0x319be70()*-0.0371415);
}

double NNfunction_ss_uRcR::synapse0x31a85f0() {
   return (neuron0x319c1b0()*0.127067);
}

double NNfunction_ss_uRcR::synapse0x31a8630() {
   return (neuron0x319c4f0()*-0.0110337);
}

double NNfunction_ss_uRcR::synapse0x31a8670() {
   return (neuron0x319c830()*0.142441);
}

double NNfunction_ss_uRcR::synapse0x31a88c0() {
   return (neuron0x319cb70()*-0.325747);
}

double NNfunction_ss_uRcR::synapse0x31a8900() {
   return (neuron0x319ceb0()*-0.244422);
}

double NNfunction_ss_uRcR::synapse0x31a81b0() {
   return (neuron0x31982f0()*0.264009);
}

double NNfunction_ss_uRcR::synapse0x31a81f0() {
   return (neuron0x3198630()*0.243337);
}

double NNfunction_ss_uRcR::synapse0x31a8230() {
   return (neuron0x3198970()*-0.200534);
}

double NNfunction_ss_uRcR::synapse0x31a8270() {
   return (neuron0x3198cb0()*0.209644);
}

double NNfunction_ss_uRcR::synapse0x31a8bf0() {
   return (neuron0x3198ff0()*0.59928);
}

double NNfunction_ss_uRcR::synapse0x31b4f40() {
   return (neuron0x3199330()*-1.21011);
}

double NNfunction_ss_uRcR::synapse0x31b4f80() {
   return (neuron0x3199670()*0.0107846);
}

double NNfunction_ss_uRcR::synapse0x31b4fc0() {
   return (neuron0x31999b0()*0.159381);
}

double NNfunction_ss_uRcR::synapse0x31b5000() {
   return (neuron0x3199cf0()*-0.0644263);
}

double NNfunction_ss_uRcR::synapse0x31b5040() {
   return (neuron0x319a030()*0.225919);
}

double NNfunction_ss_uRcR::synapse0x31b5080() {
   return (neuron0x319a370()*-0.504695);
}

double NNfunction_ss_uRcR::synapse0x31b50c0() {
   return (neuron0x319a6b0()*-0.154838);
}

double NNfunction_ss_uRcR::synapse0x31b5100() {
   return (neuron0x319a9f0()*0.230318);
}

double NNfunction_ss_uRcR::synapse0x31b5140() {
   return (neuron0x319ad30()*0.0237088);
}

double NNfunction_ss_uRcR::synapse0x31b5180() {
   return (neuron0x319b070()*1.63848);
}

double NNfunction_ss_uRcR::synapse0x31b51c0() {
   return (neuron0x319b3b0()*0.66069);
}

double NNfunction_ss_uRcR::synapse0x31a8ad0() {
   return (neuron0x319b6f0()*-0.509108);
}

double NNfunction_ss_uRcR::synapse0x31a8b10() {
   return (neuron0x319bc50()*0.348536);
}

double NNfunction_ss_uRcR::synapse0x31b5310() {
   return (neuron0x319be70()*-0.00596094);
}

double NNfunction_ss_uRcR::synapse0x31b5350() {
   return (neuron0x319c1b0()*-0.0630674);
}

double NNfunction_ss_uRcR::synapse0x31b5390() {
   return (neuron0x319c4f0()*0.162632);
}

double NNfunction_ss_uRcR::synapse0x31b53d0() {
   return (neuron0x319c830()*0.118626);
}

double NNfunction_ss_uRcR::synapse0x31b5410() {
   return (neuron0x319cb70()*-0.216244);
}

double NNfunction_ss_uRcR::synapse0x31b5450() {
   return (neuron0x319ceb0()*-0.399019);
}

double NNfunction_ss_uRcR::synapse0x31b57d0() {
   return (neuron0x31982f0()*-0.372729);
}

double NNfunction_ss_uRcR::synapse0x31b5810() {
   return (neuron0x3198630()*0.00942306);
}

double NNfunction_ss_uRcR::synapse0x31b5850() {
   return (neuron0x3198970()*0.375785);
}

double NNfunction_ss_uRcR::synapse0x31b5890() {
   return (neuron0x3198cb0()*0.551527);
}

double NNfunction_ss_uRcR::synapse0x31b58d0() {
   return (neuron0x3198ff0()*0.972719);
}

double NNfunction_ss_uRcR::synapse0x31b5910() {
   return (neuron0x3199330()*0.311184);
}

double NNfunction_ss_uRcR::synapse0x31b5950() {
   return (neuron0x3199670()*-0.309572);
}

double NNfunction_ss_uRcR::synapse0x31b5990() {
   return (neuron0x31999b0()*-0.108054);
}

double NNfunction_ss_uRcR::synapse0x31b59d0() {
   return (neuron0x3199cf0()*0.494526);
}

double NNfunction_ss_uRcR::synapse0x31b5a10() {
   return (neuron0x319a030()*-0.177346);
}

double NNfunction_ss_uRcR::synapse0x31b5a50() {
   return (neuron0x319a370()*-1.07182);
}

double NNfunction_ss_uRcR::synapse0x31b5a90() {
   return (neuron0x319a6b0()*-0.0474723);
}

double NNfunction_ss_uRcR::synapse0x31b5ad0() {
   return (neuron0x319a9f0()*-0.0127149);
}

double NNfunction_ss_uRcR::synapse0x31b5b10() {
   return (neuron0x319ad30()*0.0279954);
}

double NNfunction_ss_uRcR::synapse0x31b5b50() {
   return (neuron0x319b070()*1.06711);
}

double NNfunction_ss_uRcR::synapse0x31b5b90() {
   return (neuron0x319b3b0()*0.0217444);
}

double NNfunction_ss_uRcR::synapse0x31b5620() {
   return (neuron0x319b6f0()*0.0723986);
}

double NNfunction_ss_uRcR::synapse0x31b5660() {
   return (neuron0x319bc50()*0.536851);
}

double NNfunction_ss_uRcR::synapse0x31b5ce0() {
   return (neuron0x319be70()*0.513264);
}

double NNfunction_ss_uRcR::synapse0x31b5d20() {
   return (neuron0x319c1b0()*-0.0825285);
}

double NNfunction_ss_uRcR::synapse0x31b5d60() {
   return (neuron0x319c4f0()*0.178829);
}

double NNfunction_ss_uRcR::synapse0x31b5da0() {
   return (neuron0x319c830()*0.146704);
}

double NNfunction_ss_uRcR::synapse0x31b5de0() {
   return (neuron0x319cb70()*-0.48095);
}

double NNfunction_ss_uRcR::synapse0x31b5e20() {
   return (neuron0x319ceb0()*0.0471939);
}

double NNfunction_ss_uRcR::synapse0x31b61a0() {
   return (neuron0x31982f0()*-0.0488083);
}

double NNfunction_ss_uRcR::synapse0x31b61e0() {
   return (neuron0x3198630()*-0.218631);
}

double NNfunction_ss_uRcR::synapse0x31b6220() {
   return (neuron0x3198970()*0.136565);
}

double NNfunction_ss_uRcR::synapse0x31b6260() {
   return (neuron0x3198cb0()*0.777052);
}

double NNfunction_ss_uRcR::synapse0x31b62a0() {
   return (neuron0x3198ff0()*-0.299834);
}

double NNfunction_ss_uRcR::synapse0x31b62e0() {
   return (neuron0x3199330()*0.490366);
}

double NNfunction_ss_uRcR::synapse0x31b6320() {
   return (neuron0x3199670()*0.74238);
}

double NNfunction_ss_uRcR::synapse0x31b6360() {
   return (neuron0x31999b0()*0.343778);
}

double NNfunction_ss_uRcR::synapse0x31b63a0() {
   return (neuron0x3199cf0()*-0.38177);
}

double NNfunction_ss_uRcR::synapse0x31b63e0() {
   return (neuron0x319a030()*-0.441532);
}

double NNfunction_ss_uRcR::synapse0x31b6420() {
   return (neuron0x319a370()*1.96931);
}

double NNfunction_ss_uRcR::synapse0x31b6460() {
   return (neuron0x319a6b0()*-0.0752615);
}

double NNfunction_ss_uRcR::synapse0x31b64a0() {
   return (neuron0x319a9f0()*0.446555);
}

double NNfunction_ss_uRcR::synapse0x31b64e0() {
   return (neuron0x319ad30()*0.115184);
}

double NNfunction_ss_uRcR::synapse0x31b6520() {
   return (neuron0x319b070()*0.30145);
}

double NNfunction_ss_uRcR::synapse0x31b6560() {
   return (neuron0x319b3b0()*-0.197019);
}

double NNfunction_ss_uRcR::synapse0x31b5ff0() {
   return (neuron0x319b6f0()*0.455645);
}

double NNfunction_ss_uRcR::synapse0x31b6030() {
   return (neuron0x319bc50()*-0.178298);
}

double NNfunction_ss_uRcR::synapse0x31b66b0() {
   return (neuron0x319be70()*-0.378692);
}

double NNfunction_ss_uRcR::synapse0x31b66f0() {
   return (neuron0x319c1b0()*-0.291511);
}

double NNfunction_ss_uRcR::synapse0x31b6730() {
   return (neuron0x319c4f0()*-0.323653);
}

double NNfunction_ss_uRcR::synapse0x31b6770() {
   return (neuron0x319c830()*0.413289);
}

double NNfunction_ss_uRcR::synapse0x31b67b0() {
   return (neuron0x319cb70()*0.274071);
}

double NNfunction_ss_uRcR::synapse0x31b67f0() {
   return (neuron0x319ceb0()*-0.124664);
}

double NNfunction_ss_uRcR::synapse0x31b6b70() {
   return (neuron0x31982f0()*-0.147689);
}

double NNfunction_ss_uRcR::synapse0x31b6bb0() {
   return (neuron0x3198630()*0.636729);
}

double NNfunction_ss_uRcR::synapse0x31b6bf0() {
   return (neuron0x3198970()*0.0761807);
}

double NNfunction_ss_uRcR::synapse0x31b6c30() {
   return (neuron0x3198cb0()*-0.21694);
}

double NNfunction_ss_uRcR::synapse0x31b6c70() {
   return (neuron0x3198ff0()*-0.138202);
}

double NNfunction_ss_uRcR::synapse0x31b6cb0() {
   return (neuron0x3199330()*0.603779);
}

double NNfunction_ss_uRcR::synapse0x31b6cf0() {
   return (neuron0x3199670()*-0.324186);
}

double NNfunction_ss_uRcR::synapse0x31b6d30() {
   return (neuron0x31999b0()*0.111232);
}

double NNfunction_ss_uRcR::synapse0x31b6d70() {
   return (neuron0x3199cf0()*0.430529);
}

double NNfunction_ss_uRcR::synapse0x31b6db0() {
   return (neuron0x319a030()*-0.600119);
}

double NNfunction_ss_uRcR::synapse0x31b6df0() {
   return (neuron0x319a370()*-1.00374);
}

double NNfunction_ss_uRcR::synapse0x31b6e30() {
   return (neuron0x319a6b0()*-0.154058);
}

double NNfunction_ss_uRcR::synapse0x31b6e70() {
   return (neuron0x319a9f0()*-0.315324);
}

double NNfunction_ss_uRcR::synapse0x31b6eb0() {
   return (neuron0x319ad30()*0.433146);
}

double NNfunction_ss_uRcR::synapse0x31b6ef0() {
   return (neuron0x319b070()*0.34116);
}

double NNfunction_ss_uRcR::synapse0x31b6f30() {
   return (neuron0x319b3b0()*-0.0431174);
}

double NNfunction_ss_uRcR::synapse0x31b69c0() {
   return (neuron0x319b6f0()*-0.255854);
}

double NNfunction_ss_uRcR::synapse0x31b6a00() {
   return (neuron0x319bc50()*0.255);
}

double NNfunction_ss_uRcR::synapse0x31b7080() {
   return (neuron0x319be70()*0.58479);
}

double NNfunction_ss_uRcR::synapse0x31b70c0() {
   return (neuron0x319c1b0()*-1.00717);
}

double NNfunction_ss_uRcR::synapse0x31b7100() {
   return (neuron0x319c4f0()*0.172568);
}

double NNfunction_ss_uRcR::synapse0x31b7140() {
   return (neuron0x319c830()*1.22412);
}

double NNfunction_ss_uRcR::synapse0x31b7180() {
   return (neuron0x319cb70()*-0.971783);
}

double NNfunction_ss_uRcR::synapse0x31b71c0() {
   return (neuron0x319ceb0()*-0.935155);
}

double NNfunction_ss_uRcR::synapse0x31b7540() {
   return (neuron0x31982f0()*-0.015887);
}

double NNfunction_ss_uRcR::synapse0x31b7580() {
   return (neuron0x3198630()*-0.0162635);
}

double NNfunction_ss_uRcR::synapse0x31b75c0() {
   return (neuron0x3198970()*0.0300919);
}

double NNfunction_ss_uRcR::synapse0x31b7600() {
   return (neuron0x3198cb0()*-1.72406);
}

double NNfunction_ss_uRcR::synapse0x31b7640() {
   return (neuron0x3198ff0()*-0.00469869);
}

double NNfunction_ss_uRcR::synapse0x31b7680() {
   return (neuron0x3199330()*0.0124747);
}

double NNfunction_ss_uRcR::synapse0x31b76c0() {
   return (neuron0x3199670()*0.01066);
}

double NNfunction_ss_uRcR::synapse0x31b7700() {
   return (neuron0x31999b0()*-0.00247605);
}

double NNfunction_ss_uRcR::synapse0x31b7740() {
   return (neuron0x3199cf0()*-0.00393473);
}

double NNfunction_ss_uRcR::synapse0x31b7780() {
   return (neuron0x319a030()*0.0127368);
}

double NNfunction_ss_uRcR::synapse0x31b77c0() {
   return (neuron0x319a370()*0.0200817);
}

double NNfunction_ss_uRcR::synapse0x31b7800() {
   return (neuron0x319a6b0()*0.00797909);
}

double NNfunction_ss_uRcR::synapse0x31b7840() {
   return (neuron0x319a9f0()*-0.00252529);
}

double NNfunction_ss_uRcR::synapse0x31b7880() {
   return (neuron0x319ad30()*0.0140846);
}

double NNfunction_ss_uRcR::synapse0x31b78c0() {
   return (neuron0x319b070()*0.160624);
}

double NNfunction_ss_uRcR::synapse0x31b7900() {
   return (neuron0x319b3b0()*0.148368);
}

double NNfunction_ss_uRcR::synapse0x31b7390() {
   return (neuron0x319b6f0()*0.0217447);
}

double NNfunction_ss_uRcR::synapse0x31b73d0() {
   return (neuron0x319bc50()*-0.00549861);
}

double NNfunction_ss_uRcR::synapse0x31b7a50() {
   return (neuron0x319be70()*0.0152424);
}

double NNfunction_ss_uRcR::synapse0x31b7a90() {
   return (neuron0x319c1b0()*0.0130207);
}

double NNfunction_ss_uRcR::synapse0x31b7ad0() {
   return (neuron0x319c4f0()*0.00120716);
}

double NNfunction_ss_uRcR::synapse0x31b7b10() {
   return (neuron0x319c830()*0.00147878);
}

double NNfunction_ss_uRcR::synapse0x31b7b50() {
   return (neuron0x319cb70()*0.00120292);
}

double NNfunction_ss_uRcR::synapse0x31b7b90() {
   return (neuron0x319ceb0()*-0.0101147);
}

double NNfunction_ss_uRcR::synapse0x31b7f10() {
   return (neuron0x31982f0()*0.307744);
}

double NNfunction_ss_uRcR::synapse0x31b7f50() {
   return (neuron0x3198630()*0.77978);
}

double NNfunction_ss_uRcR::synapse0x31b7f90() {
   return (neuron0x3198970()*-0.462842);
}

double NNfunction_ss_uRcR::synapse0x31b7fd0() {
   return (neuron0x3198cb0()*-2.27056);
}

double NNfunction_ss_uRcR::synapse0x31b8010() {
   return (neuron0x3198ff0()*0.261617);
}

double NNfunction_ss_uRcR::synapse0x31b8050() {
   return (neuron0x3199330()*-0.29209);
}

double NNfunction_ss_uRcR::synapse0x31b8090() {
   return (neuron0x3199670()*0.393005);
}

double NNfunction_ss_uRcR::synapse0x31b80d0() {
   return (neuron0x31999b0()*0.201756);
}

double NNfunction_ss_uRcR::synapse0x31b8110() {
   return (neuron0x3199cf0()*-0.394347);
}

double NNfunction_ss_uRcR::synapse0x31b8150() {
   return (neuron0x319a030()*0.225572);
}

double NNfunction_ss_uRcR::synapse0x31b8190() {
   return (neuron0x319a370()*1.03285);
}

double NNfunction_ss_uRcR::synapse0x31b81d0() {
   return (neuron0x319a6b0()*-0.128777);
}

double NNfunction_ss_uRcR::synapse0x31b8210() {
   return (neuron0x319a9f0()*0.12633);
}

double NNfunction_ss_uRcR::synapse0x31b8250() {
   return (neuron0x319ad30()*0.245124);
}

double NNfunction_ss_uRcR::synapse0x31b8290() {
   return (neuron0x319b070()*-1.30059);
}

double NNfunction_ss_uRcR::synapse0x31b82d0() {
   return (neuron0x319b3b0()*0.401692);
}

double NNfunction_ss_uRcR::synapse0x31b7d60() {
   return (neuron0x319b6f0()*-0.604695);
}

double NNfunction_ss_uRcR::synapse0x31b7da0() {
   return (neuron0x319bc50()*0.891471);
}

double NNfunction_ss_uRcR::synapse0x31b8420() {
   return (neuron0x319be70()*0.246853);
}

double NNfunction_ss_uRcR::synapse0x31b8460() {
   return (neuron0x319c1b0()*0.348471);
}

double NNfunction_ss_uRcR::synapse0x31b84a0() {
   return (neuron0x319c4f0()*-0.0097009);
}

double NNfunction_ss_uRcR::synapse0x31b84e0() {
   return (neuron0x319c830()*0.743296);
}

double NNfunction_ss_uRcR::synapse0x31b8520() {
   return (neuron0x319cb70()*0.405153);
}

double NNfunction_ss_uRcR::synapse0x31b8560() {
   return (neuron0x319ceb0()*-0.254705);
}

double NNfunction_ss_uRcR::synapse0x31b88e0() {
   return (neuron0x31982f0()*0.581549);
}

double NNfunction_ss_uRcR::synapse0x31b8920() {
   return (neuron0x3198630()*0.366206);
}

double NNfunction_ss_uRcR::synapse0x31b8960() {
   return (neuron0x3198970()*-0.168936);
}

double NNfunction_ss_uRcR::synapse0x31b89a0() {
   return (neuron0x3198cb0()*-0.223137);
}

double NNfunction_ss_uRcR::synapse0x31b89e0() {
   return (neuron0x3198ff0()*-0.170501);
}

double NNfunction_ss_uRcR::synapse0x31b8a20() {
   return (neuron0x3199330()*0.0542661);
}

double NNfunction_ss_uRcR::synapse0x31b8a60() {
   return (neuron0x3199670()*0.546748);
}

double NNfunction_ss_uRcR::synapse0x31b8aa0() {
   return (neuron0x31999b0()*-0.30699);
}

double NNfunction_ss_uRcR::synapse0x31b8ae0() {
   return (neuron0x3199cf0()*0.504905);
}

double NNfunction_ss_uRcR::synapse0x31b8b20() {
   return (neuron0x319a030()*-0.948279);
}

double NNfunction_ss_uRcR::synapse0x31b8b60() {
   return (neuron0x319a370()*-0.129317);
}

double NNfunction_ss_uRcR::synapse0x31b8ba0() {
   return (neuron0x319a6b0()*-1.98744);
}

double NNfunction_ss_uRcR::synapse0x31b8be0() {
   return (neuron0x319a9f0()*1.00796);
}

double NNfunction_ss_uRcR::synapse0x31b8c20() {
   return (neuron0x319ad30()*0.269974);
}

double NNfunction_ss_uRcR::synapse0x31b8c60() {
   return (neuron0x319b070()*-0.197298);
}

double NNfunction_ss_uRcR::synapse0x31b8ca0() {
   return (neuron0x319b3b0()*0.856337);
}

double NNfunction_ss_uRcR::synapse0x31b8730() {
   return (neuron0x319b6f0()*0.300605);
}

double NNfunction_ss_uRcR::synapse0x31b8770() {
   return (neuron0x319bc50()*-0.493516);
}

double NNfunction_ss_uRcR::synapse0x31b8df0() {
   return (neuron0x319be70()*-0.84733);
}

double NNfunction_ss_uRcR::synapse0x31b8e30() {
   return (neuron0x319c1b0()*-0.109994);
}

double NNfunction_ss_uRcR::synapse0x31b8e70() {
   return (neuron0x319c4f0()*-0.385506);
}

double NNfunction_ss_uRcR::synapse0x31b8eb0() {
   return (neuron0x319c830()*0.21509);
}

double NNfunction_ss_uRcR::synapse0x31b8ef0() {
   return (neuron0x319cb70()*0.311452);
}

double NNfunction_ss_uRcR::synapse0x31b8f30() {
   return (neuron0x319ceb0()*-0.162444);
}

double NNfunction_ss_uRcR::synapse0x31b92b0() {
   return (neuron0x31982f0()*0.431283);
}

double NNfunction_ss_uRcR::synapse0x31b92f0() {
   return (neuron0x3198630()*0.125222);
}

double NNfunction_ss_uRcR::synapse0x31b9330() {
   return (neuron0x3198970()*0.428455);
}

double NNfunction_ss_uRcR::synapse0x31b9370() {
   return (neuron0x3198cb0()*-0.326157);
}

double NNfunction_ss_uRcR::synapse0x31b93b0() {
   return (neuron0x3198ff0()*-0.461623);
}

double NNfunction_ss_uRcR::synapse0x31b93f0() {
   return (neuron0x3199330()*-0.733361);
}

double NNfunction_ss_uRcR::synapse0x31b9430() {
   return (neuron0x3199670()*-0.300912);
}

double NNfunction_ss_uRcR::synapse0x31b9470() {
   return (neuron0x31999b0()*0.0357616);
}

double NNfunction_ss_uRcR::synapse0x31b94b0() {
   return (neuron0x3199cf0()*0.500322);
}

double NNfunction_ss_uRcR::synapse0x31b94f0() {
   return (neuron0x319a030()*0.49525);
}

double NNfunction_ss_uRcR::synapse0x31b9530() {
   return (neuron0x319a370()*-0.0800769);
}

double NNfunction_ss_uRcR::synapse0x31b9570() {
   return (neuron0x319a6b0()*-0.32057);
}

double NNfunction_ss_uRcR::synapse0x31b95b0() {
   return (neuron0x319a9f0()*-0.661381);
}

double NNfunction_ss_uRcR::synapse0x31b95f0() {
   return (neuron0x319ad30()*-0.116844);
}

double NNfunction_ss_uRcR::synapse0x31b9630() {
   return (neuron0x319b070()*0.828435);
}

double NNfunction_ss_uRcR::synapse0x31b9670() {
   return (neuron0x319b3b0()*-0.210237);
}

double NNfunction_ss_uRcR::synapse0x31b9100() {
   return (neuron0x319b6f0()*0.108277);
}

double NNfunction_ss_uRcR::synapse0x31b9140() {
   return (neuron0x319bc50()*-0.265929);
}

double NNfunction_ss_uRcR::synapse0x31b97c0() {
   return (neuron0x319be70()*-1.36415);
}

double NNfunction_ss_uRcR::synapse0x31b9800() {
   return (neuron0x319c1b0()*0.0435351);
}

double NNfunction_ss_uRcR::synapse0x31b9840() {
   return (neuron0x319c4f0()*-0.400749);
}

double NNfunction_ss_uRcR::synapse0x31b9880() {
   return (neuron0x319c830()*0.222665);
}

double NNfunction_ss_uRcR::synapse0x31b98c0() {
   return (neuron0x319cb70()*0.861751);
}

double NNfunction_ss_uRcR::synapse0x31b9900() {
   return (neuron0x319ceb0()*-0.100009);
}

double NNfunction_ss_uRcR::synapse0x31a23b0() {
   return (neuron0x31982f0()*-0.403037);
}

double NNfunction_ss_uRcR::synapse0x31a23f0() {
   return (neuron0x3198630()*-0.149997);
}

double NNfunction_ss_uRcR::synapse0x31a2430() {
   return (neuron0x3198970()*0.553149);
}

double NNfunction_ss_uRcR::synapse0x31a2470() {
   return (neuron0x3198cb0()*-1.68364);
}

double NNfunction_ss_uRcR::synapse0x31a24b0() {
   return (neuron0x3198ff0()*-0.404875);
}

double NNfunction_ss_uRcR::synapse0x31a24f0() {
   return (neuron0x3199330()*-0.384073);
}

double NNfunction_ss_uRcR::synapse0x31a2530() {
   return (neuron0x3199670()*-0.298831);
}

double NNfunction_ss_uRcR::synapse0x31a2570() {
   return (neuron0x31999b0()*0.0739262);
}

double NNfunction_ss_uRcR::synapse0x31ba090() {
   return (neuron0x3199cf0()*-0.109278);
}

double NNfunction_ss_uRcR::synapse0x31ba0d0() {
   return (neuron0x319a030()*0.35938);
}

double NNfunction_ss_uRcR::synapse0x31ba110() {
   return (neuron0x319a370()*-0.225511);
}

double NNfunction_ss_uRcR::synapse0x31ba150() {
   return (neuron0x319a6b0()*0.313793);
}

double NNfunction_ss_uRcR::synapse0x31ba190() {
   return (neuron0x319a9f0()*0.228796);
}

double NNfunction_ss_uRcR::synapse0x31ba1d0() {
   return (neuron0x319ad30()*0.0793122);
}

double NNfunction_ss_uRcR::synapse0x31ba210() {
   return (neuron0x319b070()*-0.0640267);
}

double NNfunction_ss_uRcR::synapse0x31ba250() {
   return (neuron0x319b3b0()*1.52221);
}

double NNfunction_ss_uRcR::synapse0x31b9ad0() {
   return (neuron0x319b6f0()*0.366039);
}

double NNfunction_ss_uRcR::synapse0x31b9b10() {
   return (neuron0x319bc50()*-0.0982108);
}

double NNfunction_ss_uRcR::synapse0x31ba3a0() {
   return (neuron0x319be70()*0.227986);
}

double NNfunction_ss_uRcR::synapse0x31ba3e0() {
   return (neuron0x319c1b0()*-0.244975);
}

double NNfunction_ss_uRcR::synapse0x31ba420() {
   return (neuron0x319c4f0()*-0.413857);
}

double NNfunction_ss_uRcR::synapse0x31ba460() {
   return (neuron0x319c830()*0.502634);
}

double NNfunction_ss_uRcR::synapse0x31ba4a0() {
   return (neuron0x319cb70()*-0.382346);
}

double NNfunction_ss_uRcR::synapse0x31ba4e0() {
   return (neuron0x319ceb0()*-0.148762);
}

double NNfunction_ss_uRcR::synapse0x31ba860() {
   return (neuron0x31982f0()*0.0229714);
}

double NNfunction_ss_uRcR::synapse0x31ba8a0() {
   return (neuron0x3198630()*-0.00564501);
}

double NNfunction_ss_uRcR::synapse0x31ba8e0() {
   return (neuron0x3198970()*-0.0731991);
}

double NNfunction_ss_uRcR::synapse0x31ba920() {
   return (neuron0x3198cb0()*5.18385);
}

double NNfunction_ss_uRcR::synapse0x31ba960() {
   return (neuron0x3198ff0()*-0.00490598);
}

double NNfunction_ss_uRcR::synapse0x31ba9a0() {
   return (neuron0x3199330()*0.0127737);
}

double NNfunction_ss_uRcR::synapse0x31ba9e0() {
   return (neuron0x3199670()*-0.00788758);
}

double NNfunction_ss_uRcR::synapse0x31baa20() {
   return (neuron0x31999b0()*0.00603716);
}

double NNfunction_ss_uRcR::synapse0x31baa60() {
   return (neuron0x3199cf0()*-0.00353931);
}

double NNfunction_ss_uRcR::synapse0x31baaa0() {
   return (neuron0x319a030()*-0.0302966);
}

double NNfunction_ss_uRcR::synapse0x31baae0() {
   return (neuron0x319a370()*-0.0085102);
}

double NNfunction_ss_uRcR::synapse0x31bab20() {
   return (neuron0x319a6b0()*-0.0325132);
}

double NNfunction_ss_uRcR::synapse0x31bab60() {
   return (neuron0x319a9f0()*0.0134783);
}

double NNfunction_ss_uRcR::synapse0x31baba0() {
   return (neuron0x319ad30()*-0.0111466);
}

double NNfunction_ss_uRcR::synapse0x31babe0() {
   return (neuron0x319b070()*0.230762);
}

double NNfunction_ss_uRcR::synapse0x31bac20() {
   return (neuron0x319b3b0()*0.16986);
}

double NNfunction_ss_uRcR::synapse0x31ba6b0() {
   return (neuron0x319b6f0()*0.000127812);
}

double NNfunction_ss_uRcR::synapse0x31ba6f0() {
   return (neuron0x319bc50()*-0.0163282);
}

double NNfunction_ss_uRcR::synapse0x31bad70() {
   return (neuron0x319be70()*-0.0579731);
}

double NNfunction_ss_uRcR::synapse0x31badb0() {
   return (neuron0x319c1b0()*-0.0184288);
}

double NNfunction_ss_uRcR::synapse0x31badf0() {
   return (neuron0x319c4f0()*-0.00378227);
}

double NNfunction_ss_uRcR::synapse0x31bae30() {
   return (neuron0x319c830()*-0.0060642);
}

double NNfunction_ss_uRcR::synapse0x31bae70() {
   return (neuron0x319cb70()*-0.00289241);
}

double NNfunction_ss_uRcR::synapse0x31baeb0() {
   return (neuron0x319ceb0()*0.038751);
}

double NNfunction_ss_uRcR::synapse0x31bb230() {
   return (neuron0x31982f0()*-0.038916);
}

double NNfunction_ss_uRcR::synapse0x31bb270() {
   return (neuron0x3198630()*-0.0265448);
}

double NNfunction_ss_uRcR::synapse0x31bb2b0() {
   return (neuron0x3198970()*0.0984805);
}

double NNfunction_ss_uRcR::synapse0x31bb2f0() {
   return (neuron0x3198cb0()*-2.02462);
}

double NNfunction_ss_uRcR::synapse0x31bb330() {
   return (neuron0x3198ff0()*-0.188022);
}

double NNfunction_ss_uRcR::synapse0x31bb370() {
   return (neuron0x3199330()*0.0317854);
}

double NNfunction_ss_uRcR::synapse0x31bb3b0() {
   return (neuron0x3199670()*-0.12);
}

double NNfunction_ss_uRcR::synapse0x31bb3f0() {
   return (neuron0x31999b0()*-0.154495);
}

double NNfunction_ss_uRcR::synapse0x31bb430() {
   return (neuron0x3199cf0()*0.220297);
}

double NNfunction_ss_uRcR::synapse0x31bb470() {
   return (neuron0x319a030()*0.0800622);
}

double NNfunction_ss_uRcR::synapse0x31bb4b0() {
   return (neuron0x319a370()*-0.0235308);
}

double NNfunction_ss_uRcR::synapse0x31bb4f0() {
   return (neuron0x319a6b0()*-0.0975847);
}

double NNfunction_ss_uRcR::synapse0x31bb530() {
   return (neuron0x319a9f0()*-0.131969);
}

double NNfunction_ss_uRcR::synapse0x31bb570() {
   return (neuron0x319ad30()*0.0426796);
}

double NNfunction_ss_uRcR::synapse0x31bb5b0() {
   return (neuron0x319b070()*-0.307166);
}

double NNfunction_ss_uRcR::synapse0x31bb5f0() {
   return (neuron0x319b3b0()*-0.345404);
}

double NNfunction_ss_uRcR::synapse0x31bb080() {
   return (neuron0x319b6f0()*0.0673951);
}

double NNfunction_ss_uRcR::synapse0x31bb0c0() {
   return (neuron0x319bc50()*-0.329233);
}

double NNfunction_ss_uRcR::synapse0x31abbf0() {
   return (neuron0x319be70()*-0.0941108);
}

double NNfunction_ss_uRcR::synapse0x31abc30() {
   return (neuron0x319c1b0()*-0.182942);
}

double NNfunction_ss_uRcR::synapse0x31abc70() {
   return (neuron0x319c4f0()*-0.0145256);
}

double NNfunction_ss_uRcR::synapse0x31abcb0() {
   return (neuron0x319c830()*0.0407769);
}

double NNfunction_ss_uRcR::synapse0x31abcf0() {
   return (neuron0x319cb70()*0.0777928);
}

double NNfunction_ss_uRcR::synapse0x31abd30() {
   return (neuron0x319ceb0()*0.0538299);
}

double NNfunction_ss_uRcR::synapse0x31ac0b0() {
   return (neuron0x31982f0()*-0.228384);
}

double NNfunction_ss_uRcR::synapse0x31ac0f0() {
   return (neuron0x3198630()*-0.1159);
}

double NNfunction_ss_uRcR::synapse0x31ac130() {
   return (neuron0x3198970()*-0.137488);
}

double NNfunction_ss_uRcR::synapse0x31ac170() {
   return (neuron0x3198cb0()*0.0103359);
}

double NNfunction_ss_uRcR::synapse0x31ac1b0() {
   return (neuron0x3198ff0()*0.288893);
}

double NNfunction_ss_uRcR::synapse0x31ac1f0() {
   return (neuron0x3199330()*1.03836);
}

double NNfunction_ss_uRcR::synapse0x31ac230() {
   return (neuron0x3199670()*-0.527623);
}

double NNfunction_ss_uRcR::synapse0x31ac270() {
   return (neuron0x31999b0()*0.760661);
}

double NNfunction_ss_uRcR::synapse0x31ac2b0() {
   return (neuron0x3199cf0()*-0.606618);
}

double NNfunction_ss_uRcR::synapse0x31ac2f0() {
   return (neuron0x319a030()*-0.496697);
}

double NNfunction_ss_uRcR::synapse0x31ac330() {
   return (neuron0x319a370()*-0.569442);
}

double NNfunction_ss_uRcR::synapse0x31ac370() {
   return (neuron0x319a6b0()*-0.218528);
}

double NNfunction_ss_uRcR::synapse0x31ac3b0() {
   return (neuron0x319a9f0()*0.00478117);
}

double NNfunction_ss_uRcR::synapse0x31ac3f0() {
   return (neuron0x319ad30()*-0.309328);
}

double NNfunction_ss_uRcR::synapse0x31ac430() {
   return (neuron0x319b070()*1.07032);
}

double NNfunction_ss_uRcR::synapse0x31ac470() {
   return (neuron0x319b3b0()*0.272502);
}

double NNfunction_ss_uRcR::synapse0x31abf00() {
   return (neuron0x319b6f0()*-0.0929394);
}

double NNfunction_ss_uRcR::synapse0x31abf40() {
   return (neuron0x319bc50()*0.127371);
}

double NNfunction_ss_uRcR::synapse0x31ac5c0() {
   return (neuron0x319be70()*0.00160654);
}

double NNfunction_ss_uRcR::synapse0x31ac600() {
   return (neuron0x319c1b0()*0.174145);
}

double NNfunction_ss_uRcR::synapse0x31ac640() {
   return (neuron0x319c4f0()*-0.0101653);
}

double NNfunction_ss_uRcR::synapse0x31ac680() {
   return (neuron0x319c830()*0.187571);
}

double NNfunction_ss_uRcR::synapse0x31ac6c0() {
   return (neuron0x319cb70()*0.853687);
}

double NNfunction_ss_uRcR::synapse0x31ac700() {
   return (neuron0x319ceb0()*0.149343);
}

double NNfunction_ss_uRcR::synapse0x31aca80() {
   return (neuron0x31982f0()*0.373333);
}

double NNfunction_ss_uRcR::synapse0x31acac0() {
   return (neuron0x3198630()*-0.697473);
}

double NNfunction_ss_uRcR::synapse0x31acb00() {
   return (neuron0x3198970()*0.311722);
}

double NNfunction_ss_uRcR::synapse0x31acb40() {
   return (neuron0x3198cb0()*-1.4491);
}

double NNfunction_ss_uRcR::synapse0x31acb80() {
   return (neuron0x3198ff0()*0.131675);
}

double NNfunction_ss_uRcR::synapse0x31acbc0() {
   return (neuron0x3199330()*0.16257);
}

double NNfunction_ss_uRcR::synapse0x31acc00() {
   return (neuron0x3199670()*0.0402735);
}

double NNfunction_ss_uRcR::synapse0x31acc40() {
   return (neuron0x31999b0()*-0.126177);
}

double NNfunction_ss_uRcR::synapse0x31acc80() {
   return (neuron0x3199cf0()*-0.221278);
}

double NNfunction_ss_uRcR::synapse0x31accc0() {
   return (neuron0x319a030()*-0.291259);
}

double NNfunction_ss_uRcR::synapse0x31acd00() {
   return (neuron0x319a370()*-0.171163);
}

double NNfunction_ss_uRcR::synapse0x31acd40() {
   return (neuron0x319a6b0()*-0.149713);
}

double NNfunction_ss_uRcR::synapse0x31acd80() {
   return (neuron0x319a9f0()*-0.191912);
}

double NNfunction_ss_uRcR::synapse0x31acdc0() {
   return (neuron0x319ad30()*-0.966052);
}

double NNfunction_ss_uRcR::synapse0x31ace00() {
   return (neuron0x319b070()*0.921446);
}

double NNfunction_ss_uRcR::synapse0x31ace40() {
   return (neuron0x319b3b0()*1.32033);
}

double NNfunction_ss_uRcR::synapse0x31ac8d0() {
   return (neuron0x319b6f0()*-0.0740798);
}

double NNfunction_ss_uRcR::synapse0x31ac910() {
   return (neuron0x319bc50()*0.17908);
}

double NNfunction_ss_uRcR::synapse0x31acf90() {
   return (neuron0x319be70()*0.17245);
}

double NNfunction_ss_uRcR::synapse0x31acfd0() {
   return (neuron0x319c1b0()*-0.399005);
}

double NNfunction_ss_uRcR::synapse0x31ad010() {
   return (neuron0x319c4f0()*0.611644);
}

double NNfunction_ss_uRcR::synapse0x31ad050() {
   return (neuron0x319c830()*-0.140919);
}

double NNfunction_ss_uRcR::synapse0x31ad090() {
   return (neuron0x319cb70()*-0.595145);
}

double NNfunction_ss_uRcR::synapse0x31ad0d0() {
   return (neuron0x319ceb0()*0.0271449);
}

double NNfunction_ss_uRcR::synapse0x31ad450() {
   return (neuron0x31982f0()*0.0265809);
}

double NNfunction_ss_uRcR::synapse0x31ad490() {
   return (neuron0x3198630()*0.377643);
}

double NNfunction_ss_uRcR::synapse0x31ad4d0() {
   return (neuron0x3198970()*-0.164323);
}

double NNfunction_ss_uRcR::synapse0x31ad510() {
   return (neuron0x3198cb0()*1.52189);
}

double NNfunction_ss_uRcR::synapse0x31ad550() {
   return (neuron0x3198ff0()*-0.117815);
}

double NNfunction_ss_uRcR::synapse0x31ad590() {
   return (neuron0x3199330()*-0.0857601);
}

double NNfunction_ss_uRcR::synapse0x31ad5d0() {
   return (neuron0x3199670()*-0.276736);
}

double NNfunction_ss_uRcR::synapse0x31ad610() {
   return (neuron0x31999b0()*-0.616601);
}

double NNfunction_ss_uRcR::synapse0x31ad650() {
   return (neuron0x3199cf0()*-1.14608);
}

double NNfunction_ss_uRcR::synapse0x31ad690() {
   return (neuron0x319a030()*-2.16697);
}

double NNfunction_ss_uRcR::synapse0x31ad6d0() {
   return (neuron0x319a370()*-1.66012);
}

double NNfunction_ss_uRcR::synapse0x31ad710() {
   return (neuron0x319a6b0()*-0.556157);
}

double NNfunction_ss_uRcR::synapse0x31ad750() {
   return (neuron0x319a9f0()*1.36687);
}

double NNfunction_ss_uRcR::synapse0x31ad790() {
   return (neuron0x319ad30()*1.58392);
}

double NNfunction_ss_uRcR::synapse0x31ad7d0() {
   return (neuron0x319b070()*1.95296);
}

double NNfunction_ss_uRcR::synapse0x31ad810() {
   return (neuron0x319b3b0()*1.72026);
}

double NNfunction_ss_uRcR::synapse0x31ad2a0() {
   return (neuron0x319b6f0()*0.348178);
}

double NNfunction_ss_uRcR::synapse0x31ad2e0() {
   return (neuron0x319bc50()*-2.02742);
}

double NNfunction_ss_uRcR::synapse0x31ad960() {
   return (neuron0x319be70()*-1.55018);
}

double NNfunction_ss_uRcR::synapse0x31ad9a0() {
   return (neuron0x319c1b0()*0.213435);
}

double NNfunction_ss_uRcR::synapse0x31ad9e0() {
   return (neuron0x319c4f0()*-1.27132);
}

double NNfunction_ss_uRcR::synapse0x31ada20() {
   return (neuron0x319c830()*-0.594799);
}

double NNfunction_ss_uRcR::synapse0x31ada60() {
   return (neuron0x319cb70()*1.10232);
}

double NNfunction_ss_uRcR::synapse0x31adaa0() {
   return (neuron0x319ceb0()*0.116951);
}

double NNfunction_ss_uRcR::synapse0x31bf970() {
   return (neuron0x31982f0()*-0.161686);
}

double NNfunction_ss_uRcR::synapse0x31bf9b0() {
   return (neuron0x3198630()*0.0483033);
}

double NNfunction_ss_uRcR::synapse0x31bf9f0() {
   return (neuron0x3198970()*-0.456865);
}

double NNfunction_ss_uRcR::synapse0x31bfa30() {
   return (neuron0x3198cb0()*-0.60527);
}

double NNfunction_ss_uRcR::synapse0x31bfa70() {
   return (neuron0x3198ff0()*-0.498802);
}

double NNfunction_ss_uRcR::synapse0x31bfab0() {
   return (neuron0x3199330()*-0.121179);
}

double NNfunction_ss_uRcR::synapse0x31bfaf0() {
   return (neuron0x3199670()*0.0809848);
}

double NNfunction_ss_uRcR::synapse0x31bfb30() {
   return (neuron0x31999b0()*0.378338);
}

double NNfunction_ss_uRcR::synapse0x31bfb70() {
   return (neuron0x3199cf0()*0.102284);
}

double NNfunction_ss_uRcR::synapse0x31bfbb0() {
   return (neuron0x319a030()*0.256882);
}

double NNfunction_ss_uRcR::synapse0x31bfbf0() {
   return (neuron0x319a370()*-0.16745);
}

double NNfunction_ss_uRcR::synapse0x31bfc30() {
   return (neuron0x319a6b0()*-0.0255024);
}

double NNfunction_ss_uRcR::synapse0x31bfc70() {
   return (neuron0x319a9f0()*0.111493);
}

double NNfunction_ss_uRcR::synapse0x31bfcb0() {
   return (neuron0x319ad30()*-0.116283);
}

double NNfunction_ss_uRcR::synapse0x31bfcf0() {
   return (neuron0x319b070()*-0.730965);
}

double NNfunction_ss_uRcR::synapse0x31bfd30() {
   return (neuron0x319b3b0()*-0.534482);
}

double NNfunction_ss_uRcR::synapse0x31adae0() {
   return (neuron0x319b6f0()*-0.0301979);
}

double NNfunction_ss_uRcR::synapse0x31adb20() {
   return (neuron0x319bc50()*0.377127);
}

double NNfunction_ss_uRcR::synapse0x31bfe80() {
   return (neuron0x319be70()*-0.0357229);
}

double NNfunction_ss_uRcR::synapse0x31bfec0() {
   return (neuron0x319c1b0()*-0.0509676);
}

double NNfunction_ss_uRcR::synapse0x31bff00() {
   return (neuron0x319c4f0()*0.242513);
}

double NNfunction_ss_uRcR::synapse0x31bff40() {
   return (neuron0x319c830()*0.0306516);
}

double NNfunction_ss_uRcR::synapse0x31bff80() {
   return (neuron0x319cb70()*-0.133312);
}

double NNfunction_ss_uRcR::synapse0x31bffc0() {
   return (neuron0x319ceb0()*0.223382);
}

double NNfunction_ss_uRcR::synapse0x31c0340() {
   return (neuron0x31982f0()*-0.0411364);
}

double NNfunction_ss_uRcR::synapse0x31c0380() {
   return (neuron0x3198630()*-0.0491604);
}

double NNfunction_ss_uRcR::synapse0x31c03c0() {
   return (neuron0x3198970()*-0.00309751);
}

double NNfunction_ss_uRcR::synapse0x31c0400() {
   return (neuron0x3198cb0()*-0.240204);
}

double NNfunction_ss_uRcR::synapse0x31c0440() {
   return (neuron0x3198ff0()*-0.111478);
}

double NNfunction_ss_uRcR::synapse0x31c0480() {
   return (neuron0x3199330()*-0.333389);
}

double NNfunction_ss_uRcR::synapse0x31c04c0() {
   return (neuron0x3199670()*-0.239939);
}

double NNfunction_ss_uRcR::synapse0x31c0500() {
   return (neuron0x31999b0()*0.0420444);
}

double NNfunction_ss_uRcR::synapse0x31c0540() {
   return (neuron0x3199cf0()*-0.181123);
}

double NNfunction_ss_uRcR::synapse0x31c0580() {
   return (neuron0x319a030()*-0.263051);
}

double NNfunction_ss_uRcR::synapse0x31c05c0() {
   return (neuron0x319a370()*-0.0334988);
}

double NNfunction_ss_uRcR::synapse0x31c0600() {
   return (neuron0x319a6b0()*-0.0315014);
}

double NNfunction_ss_uRcR::synapse0x31c0640() {
   return (neuron0x319a9f0()*-0.092094);
}

double NNfunction_ss_uRcR::synapse0x31c0680() {
   return (neuron0x319ad30()*0.0914559);
}

double NNfunction_ss_uRcR::synapse0x31c06c0() {
   return (neuron0x319b070()*1.12474);
}

double NNfunction_ss_uRcR::synapse0x31c0700() {
   return (neuron0x319b3b0()*0.942803);
}

double NNfunction_ss_uRcR::synapse0x31c0190() {
   return (neuron0x319b6f0()*0.0220816);
}

double NNfunction_ss_uRcR::synapse0x31c01d0() {
   return (neuron0x319bc50()*-0.126617);
}

double NNfunction_ss_uRcR::synapse0x31c0850() {
   return (neuron0x319be70()*-0.12867);
}

double NNfunction_ss_uRcR::synapse0x31c0890() {
   return (neuron0x319c1b0()*-0.0316595);
}

double NNfunction_ss_uRcR::synapse0x31c08d0() {
   return (neuron0x319c4f0()*-0.0223603);
}

double NNfunction_ss_uRcR::synapse0x31c0910() {
   return (neuron0x319c830()*0.0121201);
}

double NNfunction_ss_uRcR::synapse0x31c0950() {
   return (neuron0x319cb70()*0.0346575);
}

double NNfunction_ss_uRcR::synapse0x31c0990() {
   return (neuron0x319ceb0()*0.0936011);
}

double NNfunction_ss_uRcR::synapse0x31c0d10() {
   return (neuron0x31982f0()*-0.038365);
}

double NNfunction_ss_uRcR::synapse0x31c0d50() {
   return (neuron0x3198630()*0.158003);
}

double NNfunction_ss_uRcR::synapse0x31c0d90() {
   return (neuron0x3198970()*0.102197);
}

double NNfunction_ss_uRcR::synapse0x31c0dd0() {
   return (neuron0x3198cb0()*3.30051);
}

double NNfunction_ss_uRcR::synapse0x31c0e10() {
   return (neuron0x3198ff0()*0.18044);
}

double NNfunction_ss_uRcR::synapse0x31c0e50() {
   return (neuron0x3199330()*0.216826);
}

double NNfunction_ss_uRcR::synapse0x31c0e90() {
   return (neuron0x3199670()*0.188091);
}

double NNfunction_ss_uRcR::synapse0x31c0ed0() {
   return (neuron0x31999b0()*0.237846);
}

double NNfunction_ss_uRcR::synapse0x31c0f10() {
   return (neuron0x3199cf0()*0.120265);
}

double NNfunction_ss_uRcR::synapse0x31c0f50() {
   return (neuron0x319a030()*0.575553);
}

double NNfunction_ss_uRcR::synapse0x31c0f90() {
   return (neuron0x319a370()*0.0829335);
}

double NNfunction_ss_uRcR::synapse0x31c0fd0() {
   return (neuron0x319a6b0()*0.0617857);
}

double NNfunction_ss_uRcR::synapse0x31c1010() {
   return (neuron0x319a9f0()*-0.194148);
}

double NNfunction_ss_uRcR::synapse0x31c1050() {
   return (neuron0x319ad30()*0.0862237);
}

double NNfunction_ss_uRcR::synapse0x31c1090() {
   return (neuron0x319b070()*-0.839015);
}

double NNfunction_ss_uRcR::synapse0x31c10d0() {
   return (neuron0x319b3b0()*0.16554);
}

double NNfunction_ss_uRcR::synapse0x31c0b60() {
   return (neuron0x319b6f0()*-0.110714);
}

double NNfunction_ss_uRcR::synapse0x31c0ba0() {
   return (neuron0x319bc50()*0.160553);
}

double NNfunction_ss_uRcR::synapse0x31c1220() {
   return (neuron0x319be70()*0.0890945);
}

double NNfunction_ss_uRcR::synapse0x31c1260() {
   return (neuron0x319c1b0()*0.0159794);
}

double NNfunction_ss_uRcR::synapse0x31c12a0() {
   return (neuron0x319c4f0()*0.169612);
}

double NNfunction_ss_uRcR::synapse0x31c12e0() {
   return (neuron0x319c830()*0.158249);
}

double NNfunction_ss_uRcR::synapse0x31c1320() {
   return (neuron0x319cb70()*-0.188091);
}

double NNfunction_ss_uRcR::synapse0x31c1360() {
   return (neuron0x319ceb0()*-0.00832215);
}

double NNfunction_ss_uRcR::synapse0x31c16e0() {
   return (neuron0x31982f0()*0.314835);
}

double NNfunction_ss_uRcR::synapse0x31c1720() {
   return (neuron0x3198630()*-0.164904);
}

double NNfunction_ss_uRcR::synapse0x31c1760() {
   return (neuron0x3198970()*0.0862964);
}

double NNfunction_ss_uRcR::synapse0x31c17a0() {
   return (neuron0x3198cb0()*-0.0830266);
}

double NNfunction_ss_uRcR::synapse0x31c17e0() {
   return (neuron0x3198ff0()*0.657592);
}

double NNfunction_ss_uRcR::synapse0x31c1820() {
   return (neuron0x3199330()*0.0760176);
}

double NNfunction_ss_uRcR::synapse0x31c1860() {
   return (neuron0x3199670()*0.418386);
}

double NNfunction_ss_uRcR::synapse0x31c18a0() {
   return (neuron0x31999b0()*0.57848);
}

double NNfunction_ss_uRcR::synapse0x31c18e0() {
   return (neuron0x3199cf0()*0.0269367);
}

double NNfunction_ss_uRcR::synapse0x31c1920() {
   return (neuron0x319a030()*0.336331);
}

double NNfunction_ss_uRcR::synapse0x31c1960() {
   return (neuron0x319a370()*0.158046);
}

double NNfunction_ss_uRcR::synapse0x31c19a0() {
   return (neuron0x319a6b0()*0.300059);
}

double NNfunction_ss_uRcR::synapse0x31c19e0() {
   return (neuron0x319a9f0()*0.156018);
}

double NNfunction_ss_uRcR::synapse0x31c1a20() {
   return (neuron0x319ad30()*0.384852);
}

double NNfunction_ss_uRcR::synapse0x31c1a60() {
   return (neuron0x319b070()*-1.2432);
}

double NNfunction_ss_uRcR::synapse0x31c1aa0() {
   return (neuron0x319b3b0()*0.825093);
}

double NNfunction_ss_uRcR::synapse0x31c1530() {
   return (neuron0x319b6f0()*-0.0555095);
}

double NNfunction_ss_uRcR::synapse0x31c1570() {
   return (neuron0x319bc50()*0.309052);
}

double NNfunction_ss_uRcR::synapse0x31c1bf0() {
   return (neuron0x319be70()*0.670633);
}

double NNfunction_ss_uRcR::synapse0x31c1c30() {
   return (neuron0x319c1b0()*0.0911935);
}

double NNfunction_ss_uRcR::synapse0x31c1c70() {
   return (neuron0x319c4f0()*-0.320037);
}

double NNfunction_ss_uRcR::synapse0x31c1cb0() {
   return (neuron0x319c830()*0.546064);
}

double NNfunction_ss_uRcR::synapse0x31c1cf0() {
   return (neuron0x319cb70()*-0.274774);
}

double NNfunction_ss_uRcR::synapse0x31c1d30() {
   return (neuron0x319ceb0()*-0.252703);
}

double NNfunction_ss_uRcR::synapse0x2f61c50() {
   return (neuron0x319d320()*-0.460413);
}

double NNfunction_ss_uRcR::synapse0x2f61c90() {
   return (neuron0x319dc70()*-2.92174);
}

double NNfunction_ss_uRcR::synapse0x319f7e0() {
   return (neuron0x319e750()*1.76496);
}

double NNfunction_ss_uRcR::synapse0x319f820() {
   return (neuron0x319e1f0()*-1.87056);
}

double NNfunction_ss_uRcR::synapse0x31a01b0() {
   return (neuron0x319f530()*-3.97488);
}

double NNfunction_ss_uRcR::synapse0x31a01f0() {
   return (neuron0x319ff00()*-2.08069);
}

double NNfunction_ss_uRcR::synapse0x31a0f80() {
   return (neuron0x31a0cd0()*-0.200496);
}

double NNfunction_ss_uRcR::synapse0x31a0fc0() {
   return (neuron0x31a16a0()*1.88093);
}

double NNfunction_ss_uRcR::synapse0x31a1950() {
   return (neuron0x31a2070()*-0.685703);
}

double NNfunction_ss_uRcR::synapse0x31a1990() {
   return (neuron0x31a2b50()*-0.845466);
}

double NNfunction_ss_uRcR::synapse0x31a2320() {
   return (neuron0x31a3520()*0.989094);
}

double NNfunction_ss_uRcR::synapse0x31a2360() {
   return (neuron0x31a0600()*1.13045);
}

double NNfunction_ss_uRcR::synapse0x31a2e00() {
   return (neuron0x31a50d0()*0.986652);
}

double NNfunction_ss_uRcR::synapse0x31a2e40() {
   return (neuron0x31a5aa0()*-1.86438);
}

double NNfunction_ss_uRcR::synapse0x31a37d0() {
   return (neuron0x31a6470()*0.788601);
}

double NNfunction_ss_uRcR::synapse0x31a3810() {
   return (neuron0x31a6e40()*1.518);
}

double NNfunction_ss_uRcR::synapse0x31a08b0() {
   return (neuron0x31a8c50()*2.1417);
}

double NNfunction_ss_uRcR::synapse0x31a08f0() {
   return (neuron0x31a8f30()*-1.94984);
}

double NNfunction_ss_uRcR::synapse0x31a5380() {
   return (neuron0x31a9900()*-2.64855);
}

double NNfunction_ss_uRcR::synapse0x31a53c0() {
   return (neuron0x31aa2d0()*-2.00066);
}

double NNfunction_ss_uRcR::synapse0x31a5d50() {
   return (neuron0x31aaca0()*-1.97978);
}

double NNfunction_ss_uRcR::synapse0x31a5d90() {
   return (neuron0x31ab670()*1.60171);
}

double NNfunction_ss_uRcR::synapse0x31a6720() {
   return (neuron0x31a41c0()*-0.931787);
}

double NNfunction_ss_uRcR::synapse0x31a6760() {
   return (neuron0x31a4b90()*-0.67307);
}

double NNfunction_ss_uRcR::synapse0x31a70f0() {
   return (neuron0x31ae400()*3.63793);
}

double NNfunction_ss_uRcR::synapse0x31a7130() {
   return (neuron0x31aedd0()*2.15326);
}

double NNfunction_ss_uRcR::synapse0x319b290() {
   return (neuron0x31af7a0()*1.53593);
}

double NNfunction_ss_uRcR::synapse0x319b2d0() {
   return (neuron0x31b0170()*-1.4385);
}

double NNfunction_ss_uRcR::synapse0x31a91e0() {
   return (neuron0x31b0b40()*2.32225);
}

double NNfunction_ss_uRcR::synapse0x31a9220() {
   return (neuron0x31b1510()*-1.73845);
}

double NNfunction_ss_uRcR::synapse0x31a9bb0() {
   return (neuron0x31b1ee0()*1.74252);
}

double NNfunction_ss_uRcR::synapse0x31a9bf0() {
   return (neuron0x31b28b0()*2.20345);
}

double NNfunction_ss_uRcR::synapse0x31aa580() {
   return (neuron0x31a8940()*2.37077);
}

double NNfunction_ss_uRcR::synapse0x31aa5c0() {
   return (neuron0x31b5490()*1.94098);
}

double NNfunction_ss_uRcR::synapse0x31aaf50() {
   return (neuron0x31b5e60()*1.50686);
}

double NNfunction_ss_uRcR::synapse0x31aaf90() {
   return (neuron0x31b6830()*1.99987);
}

double NNfunction_ss_uRcR::synapse0x31ab920() {
   return (neuron0x31b7200()*0.868539);
}

double NNfunction_ss_uRcR::synapse0x31ab960() {
   return (neuron0x31b7bd0()*2.73819);
}

double NNfunction_ss_uRcR::synapse0x31a4470() {
   return (neuron0x31b85a0()*-2.17048);
}

double NNfunction_ss_uRcR::synapse0x31a44b0() {
   return (neuron0x31b8f70()*-1.20664);
}

double NNfunction_ss_uRcR::synapse0x31add20() {
   return (neuron0x31b9940()*-2.38878);
}

double NNfunction_ss_uRcR::synapse0x31add60() {
   return (neuron0x31ba520()*2.91499);
}

double NNfunction_ss_uRcR::synapse0x31ae6b0() {
   return (neuron0x31baef0()*2.83631);
}

double NNfunction_ss_uRcR::synapse0x31ae6f0() {
   return (neuron0x31abd70()*1.17093);
}

double NNfunction_ss_uRcR::synapse0x31af080() {
   return (neuron0x31ac740()*-2.83528);
}

double NNfunction_ss_uRcR::synapse0x31af0c0() {
   return (neuron0x31ad110()*0.0667672);
}

double NNfunction_ss_uRcR::synapse0x31afa50() {
   return (neuron0x31bf750()*-0.727168);
}

double NNfunction_ss_uRcR::synapse0x31afa90() {
   return (neuron0x31c0000()*1.45164);
}

double NNfunction_ss_uRcR::synapse0x31b0420() {
   return (neuron0x31c09d0()*-0.653827);
}

double NNfunction_ss_uRcR::synapse0x31b0460() {
   return (neuron0x31c13a0()*-2.4899);
}

double NNfunction_ss_uRcR::synapse0x31b2b60() {
   return (neuron0x319d320()*-0.0760519);
}

double NNfunction_ss_uRcR::synapse0x31b2ba0() {
   return (neuron0x319dc70()*0.0353794);
}

double NNfunction_ss_uRcR::synapse0x31a8120() {
   return (neuron0x319e750()*-0.0440814);
}

double NNfunction_ss_uRcR::synapse0x31a8160() {
   return (neuron0x319e1f0()*0.0231581);
}

double NNfunction_ss_uRcR::synapse0x31b5740() {
   return (neuron0x319f530()*0.0296845);
}

double NNfunction_ss_uRcR::synapse0x31b5780() {
   return (neuron0x319ff00()*-0.0725789);
}

double NNfunction_ss_uRcR::synapse0x31b6110() {
   return (neuron0x31a0cd0()*0.00985157);
}

double NNfunction_ss_uRcR::synapse0x31b6150() {
   return (neuron0x31a16a0()*0.00681721);
}

double NNfunction_ss_uRcR::synapse0x31b6ae0() {
   return (neuron0x31a2070()*-2.08071);
}

double NNfunction_ss_uRcR::synapse0x31b6b20() {
   return (neuron0x31a2b50()*-2.02025);
}

double NNfunction_ss_uRcR::synapse0x31b74b0() {
   return (neuron0x31a3520()*0.234971);
}

double NNfunction_ss_uRcR::synapse0x31b74f0() {
   return (neuron0x31a0600()*2.09957);
}

double NNfunction_ss_uRcR::synapse0x31b7e80() {
   return (neuron0x31a50d0()*0.123183);
}

double NNfunction_ss_uRcR::synapse0x31b7ec0() {
   return (neuron0x31a5aa0()*0.0122905);
}

double NNfunction_ss_uRcR::synapse0x31b8850() {
   return (neuron0x31a6470()*0.0028488);
}

double NNfunction_ss_uRcR::synapse0x31b8890() {
   return (neuron0x31a6e40()*-0.00463696);
}

double NNfunction_ss_uRcR::synapse0x31b9220() {
   return (neuron0x31a8c50()*-0.00314138);
}

double NNfunction_ss_uRcR::synapse0x31b9260() {
   return (neuron0x31a8f30()*-0.00331681);
}

double NNfunction_ss_uRcR::synapse0x31b9bf0() {
   return (neuron0x31a9900()*0.00494523);
}

double NNfunction_ss_uRcR::synapse0x31b9c30() {
   return (neuron0x31aa2d0()*0.00560117);
}

double NNfunction_ss_uRcR::synapse0x31ba7d0() {
   return (neuron0x31aaca0()*0.0243453);
}

double NNfunction_ss_uRcR::synapse0x31ba810() {
   return (neuron0x31ab670()*0.00219456);
}

double NNfunction_ss_uRcR::synapse0x31bb1a0() {
   return (neuron0x31a41c0()*-0.006334);
}

double NNfunction_ss_uRcR::synapse0x31bb1e0() {
   return (neuron0x31a4b90()*-0.00237804);
}

double NNfunction_ss_uRcR::synapse0x31ac020() {
   return (neuron0x31ae400()*0.382731);
}

double NNfunction_ss_uRcR::synapse0x31ac060() {
   return (neuron0x31aedd0()*0.191233);
}

double NNfunction_ss_uRcR::synapse0x31ac9f0() {
   return (neuron0x31af7a0()*0.0178892);
}

double NNfunction_ss_uRcR::synapse0x31aca30() {
   return (neuron0x31b0170()*0.00315871);
}

double NNfunction_ss_uRcR::synapse0x31ad3c0() {
   return (neuron0x31b0b40()*-0.00915191);
}

double NNfunction_ss_uRcR::synapse0x31ad400() {
   return (neuron0x31b1510()*-0.00410955);
}

double NNfunction_ss_uRcR::synapse0x31bf8e0() {
   return (neuron0x31b1ee0()*-0.00153987);
}

double NNfunction_ss_uRcR::synapse0x31bf920() {
   return (neuron0x31b28b0()*0.000256386);
}

double NNfunction_ss_uRcR::synapse0x31c02b0() {
   return (neuron0x31a8940()*0.00704187);
}

double NNfunction_ss_uRcR::synapse0x31c02f0() {
   return (neuron0x31b5490()*-0.013346);
}

double NNfunction_ss_uRcR::synapse0x31c0c80() {
   return (neuron0x31b5e60()*-0.00190901);
}

double NNfunction_ss_uRcR::synapse0x31c0cc0() {
   return (neuron0x31b6830()*-0.0109407);
}

double NNfunction_ss_uRcR::synapse0x31c1650() {
   return (neuron0x31b7200()*1.64509);
}

double NNfunction_ss_uRcR::synapse0x31c1690() {
   return (neuron0x31b7bd0()*-0.00478754);
}

double NNfunction_ss_uRcR::synapse0x319d540() {
   return (neuron0x31b85a0()*-0.0141939);
}

double NNfunction_ss_uRcR::synapse0x319d580() {
   return (neuron0x31b8f70()*-0.0125751);
}

double NNfunction_ss_uRcR::synapse0x31b0df0() {
   return (neuron0x31b9940()*0.0156531);
}

double NNfunction_ss_uRcR::synapse0x31b0e30() {
   return (neuron0x31ba520()*0.486554);
}

double NNfunction_ss_uRcR::synapse0x31c1d70() {
   return (neuron0x31baef0()*0.0220831);
}

double NNfunction_ss_uRcR::synapse0x31c1db0() {
   return (neuron0x31abd70()*-0.00530444);
}

double NNfunction_ss_uRcR::synapse0x31c1df0() {
   return (neuron0x31ac740()*0.000895485);
}

double NNfunction_ss_uRcR::synapse0x31c1e30() {
   return (neuron0x31ad110()*0.00336457);
}

double NNfunction_ss_uRcR::synapse0x31c8ce0() {
   return (neuron0x31bf750()*-0.00553951);
}

double NNfunction_ss_uRcR::synapse0x31c8d20() {
   return (neuron0x31c0000()*-0.0837943);
}

double NNfunction_ss_uRcR::synapse0x31c8d60() {
   return (neuron0x31c09d0()*-0.104688);
}

double NNfunction_ss_uRcR::synapse0x31c8da0() {
   return (neuron0x31c13a0()*-0.0106183);
}

double NNfunction_ss_uRcR::synapse0x31c9120() {
   return (neuron0x319d320()*-0.257901);
}

double NNfunction_ss_uRcR::synapse0x31c9160() {
   return (neuron0x319dc70()*-0.44987);
}

double NNfunction_ss_uRcR::synapse0x31c91a0() {
   return (neuron0x319e750()*-0.0145319);
}

double NNfunction_ss_uRcR::synapse0x31c91e0() {
   return (neuron0x319e1f0()*-0.45844);
}

double NNfunction_ss_uRcR::synapse0x31c9220() {
   return (neuron0x319f530()*-0.212826);
}

double NNfunction_ss_uRcR::synapse0x31c9260() {
   return (neuron0x319ff00()*-0.632874);
}

double NNfunction_ss_uRcR::synapse0x31c92a0() {
   return (neuron0x31a0cd0()*-0.128822);
}

double NNfunction_ss_uRcR::synapse0x31c92e0() {
   return (neuron0x31a16a0()*-0.113192);
}

double NNfunction_ss_uRcR::synapse0x31c9320() {
   return (neuron0x31a2070()*-0.259111);
}

double NNfunction_ss_uRcR::synapse0x31c9360() {
   return (neuron0x31a2b50()*0.218868);
}

double NNfunction_ss_uRcR::synapse0x31c93a0() {
   return (neuron0x31a3520()*0.00487911);
}

double NNfunction_ss_uRcR::synapse0x31c93e0() {
   return (neuron0x31a0600()*-0.354606);
}

double NNfunction_ss_uRcR::synapse0x31c9420() {
   return (neuron0x31a50d0()*-0.339628);
}

double NNfunction_ss_uRcR::synapse0x31c9460() {
   return (neuron0x31a5aa0()*-0.446991);
}

double NNfunction_ss_uRcR::synapse0x31c94a0() {
   return (neuron0x31a6470()*-0.116367);
}

double NNfunction_ss_uRcR::synapse0x31c94e0() {
   return (neuron0x31a6e40()*0.0658111);
}

double NNfunction_ss_uRcR::synapse0x31c8f70() {
   return (neuron0x31a8c50()*-0.148616);
}

double NNfunction_ss_uRcR::synapse0x31c8fb0() {
   return (neuron0x31a8f30()*0.107967);
}

double NNfunction_ss_uRcR::synapse0x31c9630() {
   return (neuron0x31a9900()*-0.592334);
}

double NNfunction_ss_uRcR::synapse0x31c9670() {
   return (neuron0x31aa2d0()*-0.225755);
}

double NNfunction_ss_uRcR::synapse0x31c96b0() {
   return (neuron0x31aaca0()*-0.38092);
}

double NNfunction_ss_uRcR::synapse0x31c96f0() {
   return (neuron0x31ab670()*-0.667024);
}

double NNfunction_ss_uRcR::synapse0x31c9730() {
   return (neuron0x31a41c0()*-0.400869);
}

double NNfunction_ss_uRcR::synapse0x31c9770() {
   return (neuron0x31a4b90()*-0.308508);
}

double NNfunction_ss_uRcR::synapse0x31c97b0() {
   return (neuron0x31ae400()*-0.520637);
}

double NNfunction_ss_uRcR::synapse0x31c97f0() {
   return (neuron0x31aedd0()*-0.222693);
}

double NNfunction_ss_uRcR::synapse0x31c9830() {
   return (neuron0x31af7a0()*0.0578104);
}

double NNfunction_ss_uRcR::synapse0x31c9870() {
   return (neuron0x31b0170()*0.252083);
}

double NNfunction_ss_uRcR::synapse0x31c98b0() {
   return (neuron0x31b0b40()*0.184428);
}

double NNfunction_ss_uRcR::synapse0x31c98f0() {
   return (neuron0x31b1510()*-0.00528141);
}

double NNfunction_ss_uRcR::synapse0x31c9930() {
   return (neuron0x31b1ee0()*-0.0577809);
}

double NNfunction_ss_uRcR::synapse0x31c9970() {
   return (neuron0x31b28b0()*0.0472194);
}

double NNfunction_ss_uRcR::synapse0x31c9520() {
   return (neuron0x31a8940()*0.293125);
}

double NNfunction_ss_uRcR::synapse0x31c9560() {
   return (neuron0x31b5490()*0.0815059);
}

double NNfunction_ss_uRcR::synapse0x31c95a0() {
   return (neuron0x31b5e60()*-0.0794005);
}

double NNfunction_ss_uRcR::synapse0x31c95e0() {
   return (neuron0x31b6830()*0.16358);
}

double NNfunction_ss_uRcR::synapse0x31c9bc0() {
   return (neuron0x31b7200()*-0.258295);
}

double NNfunction_ss_uRcR::synapse0x31c9c00() {
   return (neuron0x31b7bd0()*0.0484136);
}

double NNfunction_ss_uRcR::synapse0x31c9c40() {
   return (neuron0x31b85a0()*-0.440139);
}

double NNfunction_ss_uRcR::synapse0x31c9c80() {
   return (neuron0x31b8f70()*-0.411656);
}

double NNfunction_ss_uRcR::synapse0x31c9cc0() {
   return (neuron0x31b9940()*0.0928182);
}

double NNfunction_ss_uRcR::synapse0x31c9d00() {
   return (neuron0x31ba520()*-0.0736678);
}

double NNfunction_ss_uRcR::synapse0x31c9d40() {
   return (neuron0x31baef0()*-0.143462);
}

double NNfunction_ss_uRcR::synapse0x31c9d80() {
   return (neuron0x31abd70()*-0.104817);
}

double NNfunction_ss_uRcR::synapse0x31c9dc0() {
   return (neuron0x31ac740()*-0.191468);
}

double NNfunction_ss_uRcR::synapse0x31c9e00() {
   return (neuron0x31ad110()*-0.0718762);
}

double NNfunction_ss_uRcR::synapse0x31c9e40() {
   return (neuron0x31bf750()*-0.0188598);
}

double NNfunction_ss_uRcR::synapse0x31c9e80() {
   return (neuron0x31c0000()*-0.409329);
}

double NNfunction_ss_uRcR::synapse0x31c9ec0() {
   return (neuron0x31c09d0()*-0.30339);
}

double NNfunction_ss_uRcR::synapse0x31c9f00() {
   return (neuron0x31c13a0()*-0.556223);
}

double NNfunction_ss_uRcR::synapse0x31ca280() {
   return (neuron0x319d320()*3.36958);
}

double NNfunction_ss_uRcR::synapse0x31ca2c0() {
   return (neuron0x319dc70()*-0.396959);
}

double NNfunction_ss_uRcR::synapse0x31ca300() {
   return (neuron0x319e750()*2.73903);
}

double NNfunction_ss_uRcR::synapse0x31ca340() {
   return (neuron0x319e1f0()*-0.155493);
}

double NNfunction_ss_uRcR::synapse0x31ca380() {
   return (neuron0x319f530()*0.624265);
}

double NNfunction_ss_uRcR::synapse0x31ca3c0() {
   return (neuron0x319ff00()*-0.757754);
}

double NNfunction_ss_uRcR::synapse0x31ca400() {
   return (neuron0x31a0cd0()*-0.537133);
}

double NNfunction_ss_uRcR::synapse0x31ca440() {
   return (neuron0x31a16a0()*1.01174);
}

double NNfunction_ss_uRcR::synapse0x31ca480() {
   return (neuron0x31a2070()*-2.23881);
}

double NNfunction_ss_uRcR::synapse0x31ca4c0() {
   return (neuron0x31a2b50()*-1.2104);
}

double NNfunction_ss_uRcR::synapse0x31ca500() {
   return (neuron0x31a3520()*1.22098);
}

double NNfunction_ss_uRcR::synapse0x31ca540() {
   return (neuron0x31a0600()*-0.0817764);
}

double NNfunction_ss_uRcR::synapse0x31ca580() {
   return (neuron0x31a50d0()*-1.08106);
}

double NNfunction_ss_uRcR::synapse0x31ca5c0() {
   return (neuron0x31a5aa0()*-0.207689);
}

double NNfunction_ss_uRcR::synapse0x31ca600() {
   return (neuron0x31a6470()*-1.23116);
}

double NNfunction_ss_uRcR::synapse0x31ca640() {
   return (neuron0x31a6e40()*1.51302);
}

double NNfunction_ss_uRcR::synapse0x31ca0d0() {
   return (neuron0x31a8c50()*-1.03861);
}

double NNfunction_ss_uRcR::synapse0x31ca110() {
   return (neuron0x31a8f30()*1.5996);
}

double NNfunction_ss_uRcR::synapse0x31ca790() {
   return (neuron0x31a9900()*0.270771);
}

double NNfunction_ss_uRcR::synapse0x31ca7d0() {
   return (neuron0x31aa2d0()*-1.35972);
}

double NNfunction_ss_uRcR::synapse0x31ca810() {
   return (neuron0x31aaca0()*-0.469356);
}

double NNfunction_ss_uRcR::synapse0x31ca850() {
   return (neuron0x31ab670()*-1.99461);
}

double NNfunction_ss_uRcR::synapse0x31ca890() {
   return (neuron0x31a41c0()*1.79716);
}

double NNfunction_ss_uRcR::synapse0x31ca8d0() {
   return (neuron0x31a4b90()*-1.97586);
}

double NNfunction_ss_uRcR::synapse0x31ca910() {
   return (neuron0x31ae400()*2.27055);
}

double NNfunction_ss_uRcR::synapse0x31ca950() {
   return (neuron0x31aedd0()*1.20183);
}

double NNfunction_ss_uRcR::synapse0x31ca990() {
   return (neuron0x31af7a0()*-1.70217);
}

double NNfunction_ss_uRcR::synapse0x31ca9d0() {
   return (neuron0x31b0170()*1.20067);
}

double NNfunction_ss_uRcR::synapse0x31caa10() {
   return (neuron0x31b0b40()*1.12296);
}

double NNfunction_ss_uRcR::synapse0x31caa50() {
   return (neuron0x31b1510()*1.24099);
}

double NNfunction_ss_uRcR::synapse0x31caa90() {
   return (neuron0x31b1ee0()*0.244325);
}

double NNfunction_ss_uRcR::synapse0x31caad0() {
   return (neuron0x31b28b0()*-1.64775);
}

double NNfunction_ss_uRcR::synapse0x31ca680() {
   return (neuron0x31a8940()*0.504467);
}

double NNfunction_ss_uRcR::synapse0x31ca6c0() {
   return (neuron0x31b5490()*-1.27972);
}

double NNfunction_ss_uRcR::synapse0x31ca700() {
   return (neuron0x31b5e60()*0.301348);
}

double NNfunction_ss_uRcR::synapse0x31ca740() {
   return (neuron0x31b6830()*-0.785316);
}

double NNfunction_ss_uRcR::synapse0x31cad20() {
   return (neuron0x31b7200()*0.497192);
}

double NNfunction_ss_uRcR::synapse0x31cad60() {
   return (neuron0x31b7bd0()*0.236676);
}

double NNfunction_ss_uRcR::synapse0x31cada0() {
   return (neuron0x31b85a0()*0.955666);
}

double NNfunction_ss_uRcR::synapse0x31cade0() {
   return (neuron0x31b8f70()*-1.2532);
}

double NNfunction_ss_uRcR::synapse0x31cae20() {
   return (neuron0x31b9940()*0.85736);
}

double NNfunction_ss_uRcR::synapse0x31cae60() {
   return (neuron0x31ba520()*1.0954);
}

double NNfunction_ss_uRcR::synapse0x31caea0() {
   return (neuron0x31baef0()*2.93671);
}

double NNfunction_ss_uRcR::synapse0x31caee0() {
   return (neuron0x31abd70()*1.85865);
}

double NNfunction_ss_uRcR::synapse0x31caf20() {
   return (neuron0x31ac740()*0.976469);
}

double NNfunction_ss_uRcR::synapse0x31caf60() {
   return (neuron0x31ad110()*-2.05616);
}

double NNfunction_ss_uRcR::synapse0x31cafa0() {
   return (neuron0x31bf750()*-0.228485);
}

double NNfunction_ss_uRcR::synapse0x31cafe0() {
   return (neuron0x31c0000()*4.00762);
}

double NNfunction_ss_uRcR::synapse0x31cb020() {
   return (neuron0x31c09d0()*3.9593);
}

double NNfunction_ss_uRcR::synapse0x31cb060() {
   return (neuron0x31c13a0()*-0.0393859);
}

double NNfunction_ss_uRcR::synapse0x31cb3e0() {
   return (neuron0x319d320()*0.371491);
}

double NNfunction_ss_uRcR::synapse0x31cb420() {
   return (neuron0x319dc70()*-0.423347);
}

double NNfunction_ss_uRcR::synapse0x31cb460() {
   return (neuron0x319e750()*0.0500626);
}

double NNfunction_ss_uRcR::synapse0x31cb4a0() {
   return (neuron0x319e1f0()*0.269852);
}

double NNfunction_ss_uRcR::synapse0x31cb4e0() {
   return (neuron0x319f530()*-0.0807173);
}

double NNfunction_ss_uRcR::synapse0x31cb520() {
   return (neuron0x319ff00()*-0.891238);
}

double NNfunction_ss_uRcR::synapse0x31cb560() {
   return (neuron0x31a0cd0()*-0.580998);
}

double NNfunction_ss_uRcR::synapse0x31cb5a0() {
   return (neuron0x31a16a0()*0.321437);
}

double NNfunction_ss_uRcR::synapse0x31cb5e0() {
   return (neuron0x31a2070()*-2.76178);
}

double NNfunction_ss_uRcR::synapse0x31cb620() {
   return (neuron0x31a2b50()*-0.594541);
}

double NNfunction_ss_uRcR::synapse0x31cb660() {
   return (neuron0x31a3520()*0.64704);
}

double NNfunction_ss_uRcR::synapse0x31cb6a0() {
   return (neuron0x31a0600()*0.150955);
}

double NNfunction_ss_uRcR::synapse0x31cb6e0() {
   return (neuron0x31a50d0()*0.492451);
}

double NNfunction_ss_uRcR::synapse0x31cb720() {
   return (neuron0x31a5aa0()*0.285633);
}

double NNfunction_ss_uRcR::synapse0x31cb760() {
   return (neuron0x31a6470()*0.186981);
}

double NNfunction_ss_uRcR::synapse0x31cb7a0() {
   return (neuron0x31a6e40()*-0.11139);
}

double NNfunction_ss_uRcR::synapse0x31cb230() {
   return (neuron0x31a8c50()*0.667155);
}

double NNfunction_ss_uRcR::synapse0x31cb270() {
   return (neuron0x31a8f30()*-0.120201);
}

double NNfunction_ss_uRcR::synapse0x31cb8f0() {
   return (neuron0x31a9900()*0.320224);
}

double NNfunction_ss_uRcR::synapse0x31cb930() {
   return (neuron0x31aa2d0()*0.134832);
}

double NNfunction_ss_uRcR::synapse0x31cb970() {
   return (neuron0x31aaca0()*0.0208572);
}

double NNfunction_ss_uRcR::synapse0x31cb9b0() {
   return (neuron0x31ab670()*0.121774);
}

double NNfunction_ss_uRcR::synapse0x31cb9f0() {
   return (neuron0x31a41c0()*-0.17376);
}

double NNfunction_ss_uRcR::synapse0x31cba30() {
   return (neuron0x31a4b90()*0.129597);
}

double NNfunction_ss_uRcR::synapse0x31cba70() {
   return (neuron0x31ae400()*4.34595);
}

double NNfunction_ss_uRcR::synapse0x31cbab0() {
   return (neuron0x31aedd0()*1.73009);
}

double NNfunction_ss_uRcR::synapse0x31cbaf0() {
   return (neuron0x31af7a0()*0.184872);
}

double NNfunction_ss_uRcR::synapse0x31cbb30() {
   return (neuron0x31b0170()*0.0653704);
}

double NNfunction_ss_uRcR::synapse0x31cbb70() {
   return (neuron0x31b0b40()*0.010006);
}

double NNfunction_ss_uRcR::synapse0x31cbbb0() {
   return (neuron0x31b1510()*0.13014);
}

double NNfunction_ss_uRcR::synapse0x31cbbf0() {
   return (neuron0x31b1ee0()*0.030958);
}

double NNfunction_ss_uRcR::synapse0x31cbc30() {
   return (neuron0x31b28b0()*-0.8207);
}

double NNfunction_ss_uRcR::synapse0x31cb7e0() {
   return (neuron0x31a8940()*0.30747);
}

double NNfunction_ss_uRcR::synapse0x31cb820() {
   return (neuron0x31b5490()*-0.0373361);
}

double NNfunction_ss_uRcR::synapse0x31cb860() {
   return (neuron0x31b5e60()*0.328977);
}

double NNfunction_ss_uRcR::synapse0x31cb8a0() {
   return (neuron0x31b6830()*0.109932);
}

double NNfunction_ss_uRcR::synapse0x31cbe80() {
   return (neuron0x31b7200()*1.22773);
}

double NNfunction_ss_uRcR::synapse0x31cbec0() {
   return (neuron0x31b7bd0()*-0.135275);
}

double NNfunction_ss_uRcR::synapse0x31cbf00() {
   return (neuron0x31b85a0()*-0.0961396);
}

double NNfunction_ss_uRcR::synapse0x31cbf40() {
   return (neuron0x31b8f70()*-0.0104346);
}

double NNfunction_ss_uRcR::synapse0x31cbf80() {
   return (neuron0x31b9940()*0.207453);
}

double NNfunction_ss_uRcR::synapse0x31cbfc0() {
   return (neuron0x31ba520()*3.62978);
}

double NNfunction_ss_uRcR::synapse0x31cc000() {
   return (neuron0x31baef0()*-0.371145);
}

double NNfunction_ss_uRcR::synapse0x31cc040() {
   return (neuron0x31abd70()*-0.141282);
}

double NNfunction_ss_uRcR::synapse0x31cc080() {
   return (neuron0x31ac740()*0.171409);
}

double NNfunction_ss_uRcR::synapse0x31cc0c0() {
   return (neuron0x31ad110()*0.00359659);
}

double NNfunction_ss_uRcR::synapse0x31cc100() {
   return (neuron0x31bf750()*-1.38497);
}

double NNfunction_ss_uRcR::synapse0x31cc140() {
   return (neuron0x31c0000()*1.64956);
}

double NNfunction_ss_uRcR::synapse0x31cc180() {
   return (neuron0x31c09d0()*0.60381);
}

double NNfunction_ss_uRcR::synapse0x31cc1c0() {
   return (neuron0x31c13a0()*0.169239);
}

double NNfunction_ss_uRcR::synapse0x31cc420() {
   return (neuron0x31c85a0()*-5.0155);
}

double NNfunction_ss_uRcR::synapse0x31cc460() {
   return (neuron0x31c8940()*-7.07859);
}

double NNfunction_ss_uRcR::synapse0x31cc4a0() {
   return (neuron0x31c8de0()*0.305317);
}

double NNfunction_ss_uRcR::synapse0x31cc4e0() {
   return (neuron0x31c9f40()*-3.32192);
}

double NNfunction_ss_uRcR::synapse0x31cc520() {
   return (neuron0x31cb0a0()*-3.22657);
}

