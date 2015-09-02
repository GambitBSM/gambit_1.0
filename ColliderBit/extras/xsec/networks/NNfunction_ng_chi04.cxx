#include "NNfunction_ng_chi04.h"
#include <cmath>

double NNfunction_ng_chi04::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.8366)/14.9785;
   input1 = (in1 - -29.2323)/619.714;
   input2 = (in2 - 389.169)/434.84;
   input3 = (in3 - 153.349)/599.426;
   input4 = (in4 - 914.746)/808.243;
   input5 = (in5 - 868.999)/846.564;
   input6 = (in6 - 876.829)/848.925;
   input7 = (in7 - 865.955)/823.933;
   input8 = (in8 - 876.144)/865.872;
   input9 = (in9 - 867.016)/854.058;
   input10 = (in10 - 871.816)/835.6;
   input11 = (in11 - 726.023)/704.795;
   input12 = (in12 - 790.317)/760.239;
   input13 = (in13 - 585.799)/494.392;
   input14 = (in14 - 771.324)/718.093;
   input15 = (in15 - 803.888)/737.763;
   input16 = (in16 - 563.714)/493.117;
   input17 = (in17 - 813.515)/787.606;
   input18 = (in18 - 815.947)/790.536;
   input19 = (in19 - 804.4)/743.343;
   input20 = (in20 - -121.467)/431.985;
   input21 = (in21 - -155.454)/950.951;
   input22 = (in22 - 4.26217)/986.073;
   input23 = (in23 - -33.7158)/322.873;
   switch(index) {
     case 0:
         return neuron0x1f66330();
     default:
         return 0.;
   }
}

double NNfunction_ng_chi04::Value(int index, double* input) {
   input0 = (input[0] - 23.8366)/14.9785;
   input1 = (input[1] - -29.2323)/619.714;
   input2 = (input[2] - 389.169)/434.84;
   input3 = (input[3] - 153.349)/599.426;
   input4 = (input[4] - 914.746)/808.243;
   input5 = (input[5] - 868.999)/846.564;
   input6 = (input[6] - 876.829)/848.925;
   input7 = (input[7] - 865.955)/823.933;
   input8 = (input[8] - 876.144)/865.872;
   input9 = (input[9] - 867.016)/854.058;
   input10 = (input[10] - 871.816)/835.6;
   input11 = (input[11] - 726.023)/704.795;
   input12 = (input[12] - 790.317)/760.239;
   input13 = (input[13] - 585.799)/494.392;
   input14 = (input[14] - 771.324)/718.093;
   input15 = (input[15] - 803.888)/737.763;
   input16 = (input[16] - 563.714)/493.117;
   input17 = (input[17] - 813.515)/787.606;
   input18 = (input[18] - 815.947)/790.536;
   input19 = (input[19] - 804.4)/743.343;
   input20 = (input[20] - -121.467)/431.985;
   input21 = (input[21] - -155.454)/950.951;
   input22 = (input[22] - 4.26217)/986.073;
   input23 = (input[23] - -33.7158)/322.873;
   switch(index) {
     case 0:
         return neuron0x1f66330();
     default:
         return 0.;
   }
}

double NNfunction_ng_chi04::neuron0x1f313a0() {
   return input0;
}

double NNfunction_ng_chi04::neuron0x1f31650() {
   return input1;
}

double NNfunction_ng_chi04::neuron0x1f31990() {
   return input2;
}

double NNfunction_ng_chi04::neuron0x1f31cd0() {
   return input3;
}

double NNfunction_ng_chi04::neuron0x1f32010() {
   return input4;
}

double NNfunction_ng_chi04::neuron0x1f32350() {
   return input5;
}

double NNfunction_ng_chi04::neuron0x1f32690() {
   return input6;
}

double NNfunction_ng_chi04::neuron0x1f329d0() {
   return input7;
}

double NNfunction_ng_chi04::neuron0x1f32d10() {
   return input8;
}

double NNfunction_ng_chi04::neuron0x1f33050() {
   return input9;
}

double NNfunction_ng_chi04::neuron0x1f33390() {
   return input10;
}

double NNfunction_ng_chi04::neuron0x1f336d0() {
   return input11;
}

double NNfunction_ng_chi04::neuron0x1f33a10() {
   return input12;
}

double NNfunction_ng_chi04::neuron0x1f33d50() {
   return input13;
}

double NNfunction_ng_chi04::neuron0x1f34090() {
   return input14;
}

double NNfunction_ng_chi04::neuron0x1f343d0() {
   return input15;
}

double NNfunction_ng_chi04::neuron0x1f34710() {
   return input16;
}

double NNfunction_ng_chi04::neuron0x1f34c70() {
   return input17;
}

double NNfunction_ng_chi04::neuron0x1f34fb0() {
   return input18;
}

double NNfunction_ng_chi04::neuron0x1f352f0() {
   return input19;
}

double NNfunction_ng_chi04::neuron0x1f35630() {
   return input20;
}

double NNfunction_ng_chi04::neuron0x1f35970() {
   return input21;
}

double NNfunction_ng_chi04::neuron0x1f35cb0() {
   return input22;
}

double NNfunction_ng_chi04::neuron0x1f35ff0() {
   return input23;
}

double NNfunction_ng_chi04::input0x1f36460() {
   double input = -0.915894;
   input += synapse0x1f367a0();
   input += synapse0x1f367e0();
   input += synapse0x1f36820();
   input += synapse0x1f36860();
   input += synapse0x1f368a0();
   input += synapse0x1f368e0();
   input += synapse0x1f36920();
   input += synapse0x1f36960();
   input += synapse0x1f369a0();
   input += synapse0x1f369e0();
   input += synapse0x1f36a20();
   input += synapse0x1f36a60();
   input += synapse0x1f36aa0();
   input += synapse0x1f36ae0();
   input += synapse0x1f36b20();
   input += synapse0x1f36b60();
   input += synapse0x1f365f0();
   input += synapse0x1f36630();
   input += synapse0x1ced6e0();
   input += synapse0x1ced720();
   input += synapse0x1f36ba0();
   input += synapse0x1f36be0();
   input += synapse0x1f36c20();
   input += synapse0x1f36c60();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f36460() {
   double input = input0x1f36460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f36ca0() {
   double input = -0.742135;
   input += synapse0x1f36fe0();
   input += synapse0x1f37020();
   input += synapse0x1f37060();
   input += synapse0x1f370a0();
   input += synapse0x1f370e0();
   input += synapse0x1f37120();
   input += synapse0x1f37160();
   input += synapse0x1f371a0();
   input += synapse0x1f371e0();
   input += synapse0x1ced530();
   input += synapse0x1ced570();
   input += synapse0x1ced5b0();
   input += synapse0x1ced5f0();
   input += synapse0x1f37430();
   input += synapse0x1f37470();
   input += synapse0x1f374b0();
   input += synapse0x1f36e30();
   input += synapse0x1f36e70();
   input += synapse0x1f37600();
   input += synapse0x1f37640();
   input += synapse0x1f37680();
   input += synapse0x1f376c0();
   input += synapse0x1f37700();
   input += synapse0x1f37740();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f36ca0() {
   double input = input0x1f36ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f37780() {
   double input = -0.985092;
   input += synapse0x1f37ac0();
   input += synapse0x1f37b00();
   input += synapse0x1f37b40();
   input += synapse0x1f37b80();
   input += synapse0x1f37bc0();
   input += synapse0x1f37c00();
   input += synapse0x1f37c40();
   input += synapse0x1f37c80();
   input += synapse0x1f37cc0();
   input += synapse0x1f37d00();
   input += synapse0x1f37d40();
   input += synapse0x1f37d80();
   input += synapse0x1f37dc0();
   input += synapse0x1f37e00();
   input += synapse0x1f37e40();
   input += synapse0x1f37e80();
   input += synapse0x1f37910();
   input += synapse0x1f37950();
   input += synapse0x1cfb440();
   input += synapse0x1cfb480();
   input += synapse0x1f39db0();
   input += synapse0x1f39df0();
   input += synapse0x1f310e0();
   input += synapse0x1f31120();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f37780() {
   double input = input0x1f37780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1cfbba0() {
   double input = 4.2908;
   input += synapse0x1cfbd30();
   input += synapse0x1f37340();
   input += synapse0x1f37380();
   input += synapse0x1f373c0();
   input += synapse0x1f37fd0();
   input += synapse0x1f38010();
   input += synapse0x1f38050();
   input += synapse0x1f38090();
   input += synapse0x1f380d0();
   input += synapse0x1f38110();
   input += synapse0x1f38150();
   input += synapse0x1f38190();
   input += synapse0x1f381d0();
   input += synapse0x1f38210();
   input += synapse0x1f38250();
   input += synapse0x1f38290();
   input += synapse0x1f31160();
   input += synapse0x1f311a0();
   input += synapse0x1f383e0();
   input += synapse0x1f38420();
   input += synapse0x1f38460();
   input += synapse0x1f384a0();
   input += synapse0x1f384e0();
   input += synapse0x1f38520();
   return input;
}

double NNfunction_ng_chi04::neuron0x1cfbba0() {
   double input = input0x1cfbba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f38560() {
   double input = -0.712677;
   input += synapse0x1f388a0();
   input += synapse0x1f388e0();
   input += synapse0x1f38920();
   input += synapse0x1f38960();
   input += synapse0x1f389a0();
   input += synapse0x1f389e0();
   input += synapse0x1f38a20();
   input += synapse0x1f38a60();
   input += synapse0x1f38aa0();
   input += synapse0x1f38ae0();
   input += synapse0x1f38b20();
   input += synapse0x1f38b60();
   input += synapse0x1f38ba0();
   input += synapse0x1f38be0();
   input += synapse0x1f38c20();
   input += synapse0x1f38c60();
   input += synapse0x1f38db0();
   input += synapse0x1f386f0();
   input += synapse0x1f38730();
   input += synapse0x1f39ef0();
   input += synapse0x1f39f30();
   input += synapse0x1f39f70();
   input += synapse0x1f39fb0();
   input += synapse0x1f39ff0();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f38560() {
   double input = input0x1f38560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f3a030() {
   double input = -1.42899;
   input += synapse0x1f3a370();
   input += synapse0x1f3a3b0();
   input += synapse0x1f3a3f0();
   input += synapse0x1f3a430();
   input += synapse0x1f3a470();
   input += synapse0x1f3a4b0();
   input += synapse0x1f3a4f0();
   input += synapse0x1f3a530();
   input += synapse0x1f3a570();
   input += synapse0x1cfb790();
   input += synapse0x1cfb7d0();
   input += synapse0x1cfb810();
   input += synapse0x1cfb850();
   input += synapse0x1cfb890();
   input += synapse0x1cfb8d0();
   input += synapse0x1cfb910();
   input += synapse0x1f3a1c0();
   input += synapse0x1f3a200();
   input += synapse0x1cfba60();
   input += synapse0x1cfbaa0();
   input += synapse0x1cfbae0();
   input += synapse0x1cfbb20();
   input += synapse0x1cfbb60();
   input += synapse0x1f3adc0();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f3a030() {
   double input = input0x1f3a030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f3ae00() {
   double input = 1.77618;
   input += synapse0x1f3b140();
   input += synapse0x1f3b180();
   input += synapse0x1f3b1c0();
   input += synapse0x1f3b200();
   input += synapse0x1f3b240();
   input += synapse0x1f3b280();
   input += synapse0x1f3b2c0();
   input += synapse0x1f3b300();
   input += synapse0x1f3b340();
   input += synapse0x1f3b380();
   input += synapse0x1f3b3c0();
   input += synapse0x1f3b400();
   input += synapse0x1f3b440();
   input += synapse0x1f3b480();
   input += synapse0x1f3b4c0();
   input += synapse0x1f3b500();
   input += synapse0x1f3af90();
   input += synapse0x1f3afd0();
   input += synapse0x1f3b650();
   input += synapse0x1f3b690();
   input += synapse0x1f3b6d0();
   input += synapse0x1f3b710();
   input += synapse0x1f3b750();
   input += synapse0x1f3b790();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f3ae00() {
   double input = input0x1f3ae00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f3b7d0() {
   double input = 0.558649;
   input += synapse0x1f3bb10();
   input += synapse0x1f3bb50();
   input += synapse0x1f3bb90();
   input += synapse0x1f3bbd0();
   input += synapse0x1f3bc10();
   input += synapse0x1f3bc50();
   input += synapse0x1f3bc90();
   input += synapse0x1f3bcd0();
   input += synapse0x1f3bd10();
   input += synapse0x1f3bd50();
   input += synapse0x1f3bd90();
   input += synapse0x1f3bdd0();
   input += synapse0x1f3be10();
   input += synapse0x1f3be50();
   input += synapse0x1f3be90();
   input += synapse0x1f3bed0();
   input += synapse0x1f3b960();
   input += synapse0x1f3b9a0();
   input += synapse0x1f3c020();
   input += synapse0x1f3c060();
   input += synapse0x1f3c0a0();
   input += synapse0x1f3c0e0();
   input += synapse0x1f3c120();
   input += synapse0x1f3c160();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f3b7d0() {
   double input = input0x1f3b7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f3c1a0() {
   double input = -0.543849;
   input += synapse0x1f34b60();
   input += synapse0x1f34ba0();
   input += synapse0x1f34be0();
   input += synapse0x1f34c20();
   input += synapse0x1f3c6f0();
   input += synapse0x1f3c730();
   input += synapse0x1f3c770();
   input += synapse0x1f3c7b0();
   input += synapse0x1f3c7f0();
   input += synapse0x1f3c830();
   input += synapse0x1f3c870();
   input += synapse0x1f3c8b0();
   input += synapse0x1f3c8f0();
   input += synapse0x1f3c930();
   input += synapse0x1f3c970();
   input += synapse0x1f3c9b0();
   input += synapse0x1f3c330();
   input += synapse0x1f3c370();
   input += synapse0x1f3cb00();
   input += synapse0x1f3cb40();
   input += synapse0x1f3cb80();
   input += synapse0x1f3cbc0();
   input += synapse0x1f3cc00();
   input += synapse0x1f3cc40();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f3c1a0() {
   double input = input0x1f3c1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f3cc80() {
   double input = -0.374935;
   input += synapse0x1f3cfc0();
   input += synapse0x1f3d000();
   input += synapse0x1f3d040();
   input += synapse0x1f3d080();
   input += synapse0x1f3d0c0();
   input += synapse0x1f3d100();
   input += synapse0x1f3d140();
   input += synapse0x1f3d180();
   input += synapse0x1f3d1c0();
   input += synapse0x1f3d200();
   input += synapse0x1f3d240();
   input += synapse0x1f3d280();
   input += synapse0x1f3d2c0();
   input += synapse0x1f3d300();
   input += synapse0x1f3d340();
   input += synapse0x1f3d380();
   input += synapse0x1f3ce10();
   input += synapse0x1f3ce50();
   input += synapse0x1f3d4d0();
   input += synapse0x1f3d510();
   input += synapse0x1f3d550();
   input += synapse0x1f3d590();
   input += synapse0x1f3d5d0();
   input += synapse0x1f3d610();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f3cc80() {
   double input = input0x1f3cc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f3d650() {
   double input = -1.53022;
   input += synapse0x1f3d990();
   input += synapse0x1f3d9d0();
   input += synapse0x1f3da10();
   input += synapse0x1f3da50();
   input += synapse0x1f3da90();
   input += synapse0x1f3dad0();
   input += synapse0x1f3db10();
   input += synapse0x1f3db50();
   input += synapse0x1f3db90();
   input += synapse0x1f3dbd0();
   input += synapse0x1f3dc10();
   input += synapse0x1f3dc50();
   input += synapse0x1f3dc90();
   input += synapse0x1f3dcd0();
   input += synapse0x1f3dd10();
   input += synapse0x1f3dd50();
   input += synapse0x1f3d7e0();
   input += synapse0x1f3d820();
   input += synapse0x1f3a5b0();
   input += synapse0x1f3a5f0();
   input += synapse0x1f3a630();
   input += synapse0x1f3a670();
   input += synapse0x1f3a6b0();
   input += synapse0x1f3a6f0();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f3d650() {
   double input = input0x1f3d650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f3a730() {
   double input = -2.7989;
   input += synapse0x1f3aa70();
   input += synapse0x1f3aab0();
   input += synapse0x1f3aaf0();
   input += synapse0x1f3ab30();
   input += synapse0x1f3ab70();
   input += synapse0x1f3abb0();
   input += synapse0x1f3abf0();
   input += synapse0x1f3ac30();
   input += synapse0x1f3ac70();
   input += synapse0x1f3acb0();
   input += synapse0x1f3acf0();
   input += synapse0x1f3ad30();
   input += synapse0x1f3ad70();
   input += synapse0x1f3eeb0();
   input += synapse0x1f3eef0();
   input += synapse0x1f3ef30();
   input += synapse0x1f3a8c0();
   input += synapse0x1f3a900();
   input += synapse0x1f3f080();
   input += synapse0x1f3f0c0();
   input += synapse0x1f3f100();
   input += synapse0x1f3f140();
   input += synapse0x1f3f180();
   input += synapse0x1f3f1c0();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f3a730() {
   double input = input0x1f3a730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f3f200() {
   double input = 1.3007;
   input += synapse0x1f3f540();
   input += synapse0x1f3f580();
   input += synapse0x1f3f5c0();
   input += synapse0x1f3f600();
   input += synapse0x1f3f640();
   input += synapse0x1f3f680();
   input += synapse0x1f3f6c0();
   input += synapse0x1f3f700();
   input += synapse0x1f3f740();
   input += synapse0x1f3f780();
   input += synapse0x1f3f7c0();
   input += synapse0x1f3f800();
   input += synapse0x1f3f840();
   input += synapse0x1f3f880();
   input += synapse0x1f3f8c0();
   input += synapse0x1f3f900();
   input += synapse0x1f3f390();
   input += synapse0x1f3f3d0();
   input += synapse0x1f3fa50();
   input += synapse0x1f3fa90();
   input += synapse0x1f3fad0();
   input += synapse0x1f3fb10();
   input += synapse0x1f3fb50();
   input += synapse0x1f3fb90();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f3f200() {
   double input = input0x1f3f200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f3fbd0() {
   double input = -0.165103;
   input += synapse0x1f3ff10();
   input += synapse0x1f3ff50();
   input += synapse0x1f3ff90();
   input += synapse0x1f3ffd0();
   input += synapse0x1f40010();
   input += synapse0x1f40050();
   input += synapse0x1f40090();
   input += synapse0x1f400d0();
   input += synapse0x1f40110();
   input += synapse0x1f40150();
   input += synapse0x1f40190();
   input += synapse0x1f401d0();
   input += synapse0x1f40210();
   input += synapse0x1f40250();
   input += synapse0x1f40290();
   input += synapse0x1f402d0();
   input += synapse0x1f3fd60();
   input += synapse0x1f3fda0();
   input += synapse0x1f40420();
   input += synapse0x1f40460();
   input += synapse0x1f404a0();
   input += synapse0x1f404e0();
   input += synapse0x1f40520();
   input += synapse0x1f40560();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f3fbd0() {
   double input = input0x1f3fbd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f405a0() {
   double input = -1.45586;
   input += synapse0x1f408e0();
   input += synapse0x1f40920();
   input += synapse0x1f40960();
   input += synapse0x1f409a0();
   input += synapse0x1f409e0();
   input += synapse0x1f40a20();
   input += synapse0x1f40a60();
   input += synapse0x1f40aa0();
   input += synapse0x1f40ae0();
   input += synapse0x1f40b20();
   input += synapse0x1f40b60();
   input += synapse0x1f40ba0();
   input += synapse0x1f40be0();
   input += synapse0x1f40c20();
   input += synapse0x1f40c60();
   input += synapse0x1f40ca0();
   input += synapse0x1f40730();
   input += synapse0x1f40770();
   input += synapse0x1f40df0();
   input += synapse0x1f40e30();
   input += synapse0x1f40e70();
   input += synapse0x1f40eb0();
   input += synapse0x1f40ef0();
   input += synapse0x1f40f30();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f405a0() {
   double input = input0x1f405a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f40f70() {
   double input = -1.47215;
   input += synapse0x1f412b0();
   input += synapse0x1f31530();
   input += synapse0x1f31570();
   input += synapse0x1f31870();
   input += synapse0x1f318b0();
   input += synapse0x1f31bb0();
   input += synapse0x1f31bf0();
   input += synapse0x1f31ef0();
   input += synapse0x1f31f30();
   input += synapse0x1f32230();
   input += synapse0x1f32270();
   input += synapse0x1f32570();
   input += synapse0x1f325b0();
   input += synapse0x1f328b0();
   input += synapse0x1f328f0();
   input += synapse0x1f32bf0();
   input += synapse0x1f32c30();
   input += synapse0x1f32f30();
   input += synapse0x1f32f70();
   input += synapse0x1f33270();
   input += synapse0x1f332b0();
   input += synapse0x1f335b0();
   input += synapse0x1f335f0();
   input += synapse0x1f338f0();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f40f70() {
   double input = input0x1f40f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f42d80() {
   double input = 0.218911;
   input += synapse0x1f33930();
   input += synapse0x1f345f0();
   input += synapse0x1f34630();
   input += synapse0x1f41100();
   input += synapse0x1f41140();
   input += synapse0x1f34930();
   input += synapse0x1f34970();
   input += synapse0x1f34e90();
   input += synapse0x1f34ed0();
   input += synapse0x1f351d0();
   input += synapse0x1f35210();
   input += synapse0x1f35510();
   input += synapse0x1f35550();
   input += synapse0x1f35850();
   input += synapse0x1f35890();
   input += synapse0x1f35b90();
   input += synapse0x1f35bd0();
   input += synapse0x1f35ed0();
   input += synapse0x1f35f10();
   input += synapse0x1f36210();
   input += synapse0x1f36250();
   input += synapse0x1f33c30();
   input += synapse0x1f33c70();
   input += synapse0x1f43020();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f42d80() {
   double input = input0x1f42d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f43060() {
   double input = 0.227885;
   input += synapse0x1f433a0();
   input += synapse0x1f433e0();
   input += synapse0x1f43420();
   input += synapse0x1f43460();
   input += synapse0x1f434a0();
   input += synapse0x1f434e0();
   input += synapse0x1f43520();
   input += synapse0x1f43560();
   input += synapse0x1f435a0();
   input += synapse0x1f435e0();
   input += synapse0x1f43620();
   input += synapse0x1f43660();
   input += synapse0x1f436a0();
   input += synapse0x1f436e0();
   input += synapse0x1f43720();
   input += synapse0x1f43760();
   input += synapse0x1f431f0();
   input += synapse0x1f43230();
   input += synapse0x1f438b0();
   input += synapse0x1f438f0();
   input += synapse0x1f43930();
   input += synapse0x1f43970();
   input += synapse0x1f439b0();
   input += synapse0x1f439f0();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f43060() {
   double input = input0x1f43060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f43a30() {
   double input = 1.14297;
   input += synapse0x1f43d70();
   input += synapse0x1f43db0();
   input += synapse0x1f43df0();
   input += synapse0x1f43e30();
   input += synapse0x1f43e70();
   input += synapse0x1f43eb0();
   input += synapse0x1f43ef0();
   input += synapse0x1f43f30();
   input += synapse0x1f43f70();
   input += synapse0x1f43fb0();
   input += synapse0x1f43ff0();
   input += synapse0x1f44030();
   input += synapse0x1f44070();
   input += synapse0x1f440b0();
   input += synapse0x1f440f0();
   input += synapse0x1f44130();
   input += synapse0x1f43bc0();
   input += synapse0x1f43c00();
   input += synapse0x1f44280();
   input += synapse0x1f442c0();
   input += synapse0x1f44300();
   input += synapse0x1f44340();
   input += synapse0x1f44380();
   input += synapse0x1f443c0();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f43a30() {
   double input = input0x1f43a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f44400() {
   double input = 2.01821;
   input += synapse0x1f44740();
   input += synapse0x1f44780();
   input += synapse0x1f447c0();
   input += synapse0x1f44800();
   input += synapse0x1f44840();
   input += synapse0x1f44880();
   input += synapse0x1f448c0();
   input += synapse0x1f44900();
   input += synapse0x1f44940();
   input += synapse0x1f44980();
   input += synapse0x1f449c0();
   input += synapse0x1f44a00();
   input += synapse0x1f44a40();
   input += synapse0x1f44a80();
   input += synapse0x1f44ac0();
   input += synapse0x1f44b00();
   input += synapse0x1f44590();
   input += synapse0x1f445d0();
   input += synapse0x1f44c50();
   input += synapse0x1f44c90();
   input += synapse0x1f44cd0();
   input += synapse0x1f44d10();
   input += synapse0x1f44d50();
   input += synapse0x1f44d90();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f44400() {
   double input = input0x1f44400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f44dd0() {
   double input = 0.602529;
   input += synapse0x1f45110();
   input += synapse0x1f45150();
   input += synapse0x1f45190();
   input += synapse0x1f451d0();
   input += synapse0x1f45210();
   input += synapse0x1f45250();
   input += synapse0x1f45290();
   input += synapse0x1f452d0();
   input += synapse0x1f45310();
   input += synapse0x1f45350();
   input += synapse0x1f45390();
   input += synapse0x1f453d0();
   input += synapse0x1f45410();
   input += synapse0x1f45450();
   input += synapse0x1f45490();
   input += synapse0x1f454d0();
   input += synapse0x1f44f60();
   input += synapse0x1f44fa0();
   input += synapse0x1f45620();
   input += synapse0x1f45660();
   input += synapse0x1f456a0();
   input += synapse0x1f456e0();
   input += synapse0x1f45720();
   input += synapse0x1f45760();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f44dd0() {
   double input = input0x1f44dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f457a0() {
   double input = -0.306178;
   input += synapse0x1f45ae0();
   input += synapse0x1f45b20();
   input += synapse0x1f45b60();
   input += synapse0x1f45ba0();
   input += synapse0x1f45be0();
   input += synapse0x1f45c20();
   input += synapse0x1f45c60();
   input += synapse0x1f45ca0();
   input += synapse0x1f45ce0();
   input += synapse0x1f3dea0();
   input += synapse0x1f3dee0();
   input += synapse0x1f3df20();
   input += synapse0x1f3df60();
   input += synapse0x1f3dfa0();
   input += synapse0x1f3dfe0();
   input += synapse0x1f3e020();
   input += synapse0x1f45930();
   input += synapse0x1f45970();
   input += synapse0x1f3e170();
   input += synapse0x1f3e1b0();
   input += synapse0x1f3e1f0();
   input += synapse0x1f3e230();
   input += synapse0x1f3e270();
   input += synapse0x1f3e2b0();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f457a0() {
   double input = input0x1f457a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f3e2f0() {
   double input = -1.2468;
   input += synapse0x1f3e630();
   input += synapse0x1f3e670();
   input += synapse0x1f3e6b0();
   input += synapse0x1f3e6f0();
   input += synapse0x1f3e730();
   input += synapse0x1f3e770();
   input += synapse0x1f3e7b0();
   input += synapse0x1f3e7f0();
   input += synapse0x1f3e830();
   input += synapse0x1f3e870();
   input += synapse0x1f3e8b0();
   input += synapse0x1f3e8f0();
   input += synapse0x1f3e930();
   input += synapse0x1f3e970();
   input += synapse0x1f3e9b0();
   input += synapse0x1f3e9f0();
   input += synapse0x1f3e480();
   input += synapse0x1f3e4c0();
   input += synapse0x1f3eb40();
   input += synapse0x1f3eb80();
   input += synapse0x1f3ebc0();
   input += synapse0x1f3ec00();
   input += synapse0x1f3ec40();
   input += synapse0x1f3ec80();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f3e2f0() {
   double input = input0x1f3e2f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f3ecc0() {
   double input = -0.0544413;
   input += synapse0x1f3ee50();
   input += synapse0x1f47ee0();
   input += synapse0x1f47f20();
   input += synapse0x1f47f60();
   input += synapse0x1f47fa0();
   input += synapse0x1f47fe0();
   input += synapse0x1f48020();
   input += synapse0x1f48060();
   input += synapse0x1f480a0();
   input += synapse0x1f480e0();
   input += synapse0x1f48120();
   input += synapse0x1f48160();
   input += synapse0x1f481a0();
   input += synapse0x1f481e0();
   input += synapse0x1f48220();
   input += synapse0x1f48260();
   input += synapse0x1f47d30();
   input += synapse0x1f47d70();
   input += synapse0x1f483b0();
   input += synapse0x1f483f0();
   input += synapse0x1f48430();
   input += synapse0x1f48470();
   input += synapse0x1f484b0();
   input += synapse0x1f484f0();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f3ecc0() {
   double input = input0x1f3ecc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f48530() {
   double input = -1.15226;
   input += synapse0x1f48870();
   input += synapse0x1f488b0();
   input += synapse0x1f488f0();
   input += synapse0x1f48930();
   input += synapse0x1f48970();
   input += synapse0x1f489b0();
   input += synapse0x1f489f0();
   input += synapse0x1f48a30();
   input += synapse0x1f48a70();
   input += synapse0x1f48ab0();
   input += synapse0x1f48af0();
   input += synapse0x1f48b30();
   input += synapse0x1f48b70();
   input += synapse0x1f48bb0();
   input += synapse0x1f48bf0();
   input += synapse0x1f48c30();
   input += synapse0x1f486c0();
   input += synapse0x1f48700();
   input += synapse0x1f48d80();
   input += synapse0x1f48dc0();
   input += synapse0x1f48e00();
   input += synapse0x1f48e40();
   input += synapse0x1f48e80();
   input += synapse0x1f48ec0();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f48530() {
   double input = input0x1f48530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f48f00() {
   double input = 1.85842;
   input += synapse0x1f49240();
   input += synapse0x1f49280();
   input += synapse0x1f492c0();
   input += synapse0x1f49300();
   input += synapse0x1f49340();
   input += synapse0x1f49380();
   input += synapse0x1f493c0();
   input += synapse0x1f49400();
   input += synapse0x1f49440();
   input += synapse0x1f49480();
   input += synapse0x1f494c0();
   input += synapse0x1f49500();
   input += synapse0x1f49540();
   input += synapse0x1f49580();
   input += synapse0x1f495c0();
   input += synapse0x1f49600();
   input += synapse0x1f49090();
   input += synapse0x1f490d0();
   input += synapse0x1f49750();
   input += synapse0x1f49790();
   input += synapse0x1f497d0();
   input += synapse0x1f49810();
   input += synapse0x1f49850();
   input += synapse0x1f49890();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f48f00() {
   double input = input0x1f48f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f498d0() {
   double input = 2.94532;
   input += synapse0x1f49c10();
   input += synapse0x1f49c50();
   input += synapse0x1f49c90();
   input += synapse0x1f49cd0();
   input += synapse0x1f49d10();
   input += synapse0x1f49d50();
   input += synapse0x1f49d90();
   input += synapse0x1f49dd0();
   input += synapse0x1f49e10();
   input += synapse0x1f49e50();
   input += synapse0x1f49e90();
   input += synapse0x1f49ed0();
   input += synapse0x1f49f10();
   input += synapse0x1f49f50();
   input += synapse0x1f49f90();
   input += synapse0x1f49fd0();
   input += synapse0x1f49a60();
   input += synapse0x1f49aa0();
   input += synapse0x1f4a120();
   input += synapse0x1f4a160();
   input += synapse0x1f4a1a0();
   input += synapse0x1f4a1e0();
   input += synapse0x1f4a220();
   input += synapse0x1f4a260();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f498d0() {
   double input = input0x1f498d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f4a2a0() {
   double input = 0.546516;
   input += synapse0x1f4a5e0();
   input += synapse0x1f4a620();
   input += synapse0x1f4a660();
   input += synapse0x1f4a6a0();
   input += synapse0x1f4a6e0();
   input += synapse0x1f4a720();
   input += synapse0x1f4a760();
   input += synapse0x1f4a7a0();
   input += synapse0x1f4a7e0();
   input += synapse0x1f4a820();
   input += synapse0x1f4a860();
   input += synapse0x1f4a8a0();
   input += synapse0x1f4a8e0();
   input += synapse0x1f4a920();
   input += synapse0x1f4a960();
   input += synapse0x1f4a9a0();
   input += synapse0x1f4a430();
   input += synapse0x1f4a470();
   input += synapse0x1f4aaf0();
   input += synapse0x1f4ab30();
   input += synapse0x1f4ab70();
   input += synapse0x1f4abb0();
   input += synapse0x1f4abf0();
   input += synapse0x1f4ac30();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f4a2a0() {
   double input = input0x1f4a2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f4ac70() {
   double input = -0.998275;
   input += synapse0x1f4afb0();
   input += synapse0x1f4aff0();
   input += synapse0x1f4b030();
   input += synapse0x1f4b070();
   input += synapse0x1f4b0b0();
   input += synapse0x1f4b0f0();
   input += synapse0x1f4b130();
   input += synapse0x1f4b170();
   input += synapse0x1f4b1b0();
   input += synapse0x1f4b1f0();
   input += synapse0x1f4b230();
   input += synapse0x1f4b270();
   input += synapse0x1f4b2b0();
   input += synapse0x1f4b2f0();
   input += synapse0x1f4b330();
   input += synapse0x1f4b370();
   input += synapse0x1f4ae00();
   input += synapse0x1f4ae40();
   input += synapse0x1f4b4c0();
   input += synapse0x1f4b500();
   input += synapse0x1f4b540();
   input += synapse0x1f4b580();
   input += synapse0x1f4b5c0();
   input += synapse0x1f4b600();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f4ac70() {
   double input = input0x1f4ac70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f4b640() {
   double input = -1.99646;
   input += synapse0x1f4b980();
   input += synapse0x1f4b9c0();
   input += synapse0x1f4ba00();
   input += synapse0x1f4ba40();
   input += synapse0x1f4ba80();
   input += synapse0x1f4bac0();
   input += synapse0x1f4bb00();
   input += synapse0x1f4bb40();
   input += synapse0x1f4bb80();
   input += synapse0x1f4bbc0();
   input += synapse0x1f4bc00();
   input += synapse0x1f4bc40();
   input += synapse0x1f4bc80();
   input += synapse0x1f4bcc0();
   input += synapse0x1f4bd00();
   input += synapse0x1f4bd40();
   input += synapse0x1f4b7d0();
   input += synapse0x1f4b810();
   input += synapse0x1f4be90();
   input += synapse0x1f4bed0();
   input += synapse0x1f4bf10();
   input += synapse0x1f4bf50();
   input += synapse0x1f4bf90();
   input += synapse0x1f4bfd0();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f4b640() {
   double input = input0x1f4b640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f4c010() {
   double input = -0.645071;
   input += synapse0x1f4c350();
   input += synapse0x1f4c390();
   input += synapse0x1f4c3d0();
   input += synapse0x1f4c410();
   input += synapse0x1f4c450();
   input += synapse0x1f4c490();
   input += synapse0x1f4c4d0();
   input += synapse0x1f4c510();
   input += synapse0x1f4c550();
   input += synapse0x1f4c590();
   input += synapse0x1f4c5d0();
   input += synapse0x1f4c610();
   input += synapse0x1f4c650();
   input += synapse0x1f4c690();
   input += synapse0x1f4c6d0();
   input += synapse0x1f4c710();
   input += synapse0x1f4c1a0();
   input += synapse0x1f4c1e0();
   input += synapse0x1f4c860();
   input += synapse0x1f4c8a0();
   input += synapse0x1f4c8e0();
   input += synapse0x1f4c920();
   input += synapse0x1f4c960();
   input += synapse0x1f4c9a0();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f4c010() {
   double input = input0x1f4c010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f4c9e0() {
   double input = 0.0899937;
   input += synapse0x1f4cd20();
   input += synapse0x1f412f0();
   input += synapse0x1f41330();
   input += synapse0x1f41370();
   input += synapse0x1f415c0();
   input += synapse0x1f41600();
   input += synapse0x1f41640();
   input += synapse0x1f41890();
   input += synapse0x1f418d0();
   input += synapse0x1f41b20();
   input += synapse0x1f41b60();
   input += synapse0x1f41ba0();
   input += synapse0x1f41df0();
   input += synapse0x1f41e30();
   input += synapse0x1f42080();
   input += synapse0x1f420c0();
   input += synapse0x1f4cb70();
   input += synapse0x1f4cbb0();
   input += synapse0x1f42210();
   input += synapse0x1f42720();
   input += synapse0x1f42760();
   input += synapse0x1f427a0();
   input += synapse0x1f429f0();
   input += synapse0x1f42a30();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f4c9e0() {
   double input = input0x1f4c9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f42a70() {
   double input = 0.749232;
   input += synapse0x1f422e0();
   input += synapse0x1f42320();
   input += synapse0x1f42360();
   input += synapse0x1f423a0();
   input += synapse0x1f42d20();
   input += synapse0x1f4f070();
   input += synapse0x1f4f0b0();
   input += synapse0x1f4f0f0();
   input += synapse0x1f4f130();
   input += synapse0x1f4f170();
   input += synapse0x1f4f1b0();
   input += synapse0x1f4f1f0();
   input += synapse0x1f4f230();
   input += synapse0x1f4f270();
   input += synapse0x1f4f2b0();
   input += synapse0x1f4f2f0();
   input += synapse0x1f42c00();
   input += synapse0x1f42c40();
   input += synapse0x1f4f440();
   input += synapse0x1f4f480();
   input += synapse0x1f4f4c0();
   input += synapse0x1f4f500();
   input += synapse0x1f4f540();
   input += synapse0x1f4f580();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f42a70() {
   double input = input0x1f42a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f4f5c0() {
   double input = -4.87894;
   input += synapse0x1f4f900();
   input += synapse0x1f4f940();
   input += synapse0x1f4f980();
   input += synapse0x1f4f9c0();
   input += synapse0x1f4fa00();
   input += synapse0x1f4fa40();
   input += synapse0x1f4fa80();
   input += synapse0x1f4fac0();
   input += synapse0x1f4fb00();
   input += synapse0x1f4fb40();
   input += synapse0x1f4fb80();
   input += synapse0x1f4fbc0();
   input += synapse0x1f4fc00();
   input += synapse0x1f4fc40();
   input += synapse0x1f4fc80();
   input += synapse0x1f4fcc0();
   input += synapse0x1f4f750();
   input += synapse0x1f4f790();
   input += synapse0x1f4fe10();
   input += synapse0x1f4fe50();
   input += synapse0x1f4fe90();
   input += synapse0x1f4fed0();
   input += synapse0x1f4ff10();
   input += synapse0x1f4ff50();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f4f5c0() {
   double input = input0x1f4f5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f4ff90() {
   double input = -0.913304;
   input += synapse0x1f502d0();
   input += synapse0x1f50310();
   input += synapse0x1f50350();
   input += synapse0x1f50390();
   input += synapse0x1f503d0();
   input += synapse0x1f50410();
   input += synapse0x1f50450();
   input += synapse0x1f50490();
   input += synapse0x1f504d0();
   input += synapse0x1f50510();
   input += synapse0x1f50550();
   input += synapse0x1f50590();
   input += synapse0x1f505d0();
   input += synapse0x1f50610();
   input += synapse0x1f50650();
   input += synapse0x1f50690();
   input += synapse0x1f50120();
   input += synapse0x1f50160();
   input += synapse0x1f507e0();
   input += synapse0x1f50820();
   input += synapse0x1f50860();
   input += synapse0x1f508a0();
   input += synapse0x1f508e0();
   input += synapse0x1f50920();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f4ff90() {
   double input = input0x1f4ff90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f50960() {
   double input = 2.18719;
   input += synapse0x1f50ca0();
   input += synapse0x1f50ce0();
   input += synapse0x1f50d20();
   input += synapse0x1f50d60();
   input += synapse0x1f50da0();
   input += synapse0x1f50de0();
   input += synapse0x1f50e20();
   input += synapse0x1f50e60();
   input += synapse0x1f50ea0();
   input += synapse0x1f50ee0();
   input += synapse0x1f50f20();
   input += synapse0x1f50f60();
   input += synapse0x1f50fa0();
   input += synapse0x1f50fe0();
   input += synapse0x1f51020();
   input += synapse0x1f51060();
   input += synapse0x1f50af0();
   input += synapse0x1f50b30();
   input += synapse0x1f511b0();
   input += synapse0x1f511f0();
   input += synapse0x1f51230();
   input += synapse0x1f51270();
   input += synapse0x1f512b0();
   input += synapse0x1f512f0();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f50960() {
   double input = input0x1f50960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f51330() {
   double input = 0.00255711;
   input += synapse0x1f51670();
   input += synapse0x1f516b0();
   input += synapse0x1f516f0();
   input += synapse0x1f51730();
   input += synapse0x1f51770();
   input += synapse0x1f517b0();
   input += synapse0x1f517f0();
   input += synapse0x1f51830();
   input += synapse0x1f51870();
   input += synapse0x1f518b0();
   input += synapse0x1f518f0();
   input += synapse0x1f51930();
   input += synapse0x1f51970();
   input += synapse0x1f519b0();
   input += synapse0x1f519f0();
   input += synapse0x1f51a30();
   input += synapse0x1f514c0();
   input += synapse0x1f51500();
   input += synapse0x1f51b80();
   input += synapse0x1f51bc0();
   input += synapse0x1f51c00();
   input += synapse0x1f51c40();
   input += synapse0x1f51c80();
   input += synapse0x1f51cc0();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f51330() {
   double input = input0x1f51330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f51d00() {
   double input = 1.17073;
   input += synapse0x1f52040();
   input += synapse0x1f52080();
   input += synapse0x1f520c0();
   input += synapse0x1f52100();
   input += synapse0x1f52140();
   input += synapse0x1f52180();
   input += synapse0x1f521c0();
   input += synapse0x1f52200();
   input += synapse0x1f52240();
   input += synapse0x1f52280();
   input += synapse0x1f522c0();
   input += synapse0x1f52300();
   input += synapse0x1f52340();
   input += synapse0x1f52380();
   input += synapse0x1f523c0();
   input += synapse0x1f52400();
   input += synapse0x1f51e90();
   input += synapse0x1f51ed0();
   input += synapse0x1f52550();
   input += synapse0x1f52590();
   input += synapse0x1f525d0();
   input += synapse0x1f52610();
   input += synapse0x1f52650();
   input += synapse0x1f52690();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f51d00() {
   double input = input0x1f51d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f526d0() {
   double input = -1.56354;
   input += synapse0x1f52a10();
   input += synapse0x1f52a50();
   input += synapse0x1f52a90();
   input += synapse0x1f52ad0();
   input += synapse0x1f52b10();
   input += synapse0x1f52b50();
   input += synapse0x1f52b90();
   input += synapse0x1f52bd0();
   input += synapse0x1f52c10();
   input += synapse0x1f52c50();
   input += synapse0x1f52c90();
   input += synapse0x1f52cd0();
   input += synapse0x1f52d10();
   input += synapse0x1f52d50();
   input += synapse0x1f52d90();
   input += synapse0x1f52dd0();
   input += synapse0x1f52860();
   input += synapse0x1f528a0();
   input += synapse0x1f52f20();
   input += synapse0x1f52f60();
   input += synapse0x1f52fa0();
   input += synapse0x1f52fe0();
   input += synapse0x1f53020();
   input += synapse0x1f53060();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f526d0() {
   double input = input0x1f526d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f530a0() {
   double input = 2.02799;
   input += synapse0x1f533e0();
   input += synapse0x1f53420();
   input += synapse0x1f53460();
   input += synapse0x1f534a0();
   input += synapse0x1f534e0();
   input += synapse0x1f53520();
   input += synapse0x1f53560();
   input += synapse0x1f535a0();
   input += synapse0x1f535e0();
   input += synapse0x1f53620();
   input += synapse0x1f53660();
   input += synapse0x1f536a0();
   input += synapse0x1f536e0();
   input += synapse0x1f53720();
   input += synapse0x1f53760();
   input += synapse0x1f537a0();
   input += synapse0x1f53230();
   input += synapse0x1f53270();
   input += synapse0x1f538f0();
   input += synapse0x1f53930();
   input += synapse0x1f53970();
   input += synapse0x1f539b0();
   input += synapse0x1f539f0();
   input += synapse0x1f53a30();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f530a0() {
   double input = input0x1f530a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f53a70() {
   double input = -2.6325;
   input += synapse0x1f3c4e0();
   input += synapse0x1f3c520();
   input += synapse0x1f3c560();
   input += synapse0x1f3c5a0();
   input += synapse0x1f3c5e0();
   input += synapse0x1f3c620();
   input += synapse0x1f3c660();
   input += synapse0x1f3c6a0();
   input += synapse0x1f541c0();
   input += synapse0x1f54200();
   input += synapse0x1f54240();
   input += synapse0x1f54280();
   input += synapse0x1f542c0();
   input += synapse0x1f54300();
   input += synapse0x1f54340();
   input += synapse0x1f54380();
   input += synapse0x1f53c00();
   input += synapse0x1f53c40();
   input += synapse0x1f544d0();
   input += synapse0x1f54510();
   input += synapse0x1f54550();
   input += synapse0x1f54590();
   input += synapse0x1f545d0();
   input += synapse0x1f54610();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f53a70() {
   double input = input0x1f53a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f54650() {
   double input = 3.38797;
   input += synapse0x1f54990();
   input += synapse0x1f549d0();
   input += synapse0x1f54a10();
   input += synapse0x1f54a50();
   input += synapse0x1f54a90();
   input += synapse0x1f54ad0();
   input += synapse0x1f54b10();
   input += synapse0x1f54b50();
   input += synapse0x1f54b90();
   input += synapse0x1f54bd0();
   input += synapse0x1f54c10();
   input += synapse0x1f54c50();
   input += synapse0x1f54c90();
   input += synapse0x1f54cd0();
   input += synapse0x1f54d10();
   input += synapse0x1f54d50();
   input += synapse0x1f547e0();
   input += synapse0x1f54820();
   input += synapse0x1f54ea0();
   input += synapse0x1f54ee0();
   input += synapse0x1f54f20();
   input += synapse0x1f54f60();
   input += synapse0x1f54fa0();
   input += synapse0x1f54fe0();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f54650() {
   double input = input0x1f54650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f55020() {
   double input = -1.47432;
   input += synapse0x1f55360();
   input += synapse0x1f553a0();
   input += synapse0x1f553e0();
   input += synapse0x1f55420();
   input += synapse0x1f55460();
   input += synapse0x1f554a0();
   input += synapse0x1f554e0();
   input += synapse0x1f55520();
   input += synapse0x1f55560();
   input += synapse0x1f555a0();
   input += synapse0x1f555e0();
   input += synapse0x1f55620();
   input += synapse0x1f55660();
   input += synapse0x1f556a0();
   input += synapse0x1f556e0();
   input += synapse0x1f55720();
   input += synapse0x1f551b0();
   input += synapse0x1f551f0();
   input += synapse0x1f45d20();
   input += synapse0x1f45d60();
   input += synapse0x1f45da0();
   input += synapse0x1f45de0();
   input += synapse0x1f45e20();
   input += synapse0x1f45e60();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f55020() {
   double input = input0x1f55020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f45ea0() {
   double input = 2.62756;
   input += synapse0x1f461e0();
   input += synapse0x1f46220();
   input += synapse0x1f46260();
   input += synapse0x1f462a0();
   input += synapse0x1f462e0();
   input += synapse0x1f46320();
   input += synapse0x1f46360();
   input += synapse0x1f463a0();
   input += synapse0x1f463e0();
   input += synapse0x1f46420();
   input += synapse0x1f46460();
   input += synapse0x1f464a0();
   input += synapse0x1f464e0();
   input += synapse0x1f46520();
   input += synapse0x1f46560();
   input += synapse0x1f465a0();
   input += synapse0x1f46030();
   input += synapse0x1f46070();
   input += synapse0x1f466f0();
   input += synapse0x1f46730();
   input += synapse0x1f46770();
   input += synapse0x1f467b0();
   input += synapse0x1f467f0();
   input += synapse0x1f46830();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f45ea0() {
   double input = input0x1f45ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f46870() {
   double input = -1.68207;
   input += synapse0x1f46bb0();
   input += synapse0x1f46bf0();
   input += synapse0x1f46c30();
   input += synapse0x1f46c70();
   input += synapse0x1f46cb0();
   input += synapse0x1f46cf0();
   input += synapse0x1f46d30();
   input += synapse0x1f46d70();
   input += synapse0x1f46db0();
   input += synapse0x1f46df0();
   input += synapse0x1f46e30();
   input += synapse0x1f46e70();
   input += synapse0x1f46eb0();
   input += synapse0x1f46ef0();
   input += synapse0x1f46f30();
   input += synapse0x1f46f70();
   input += synapse0x1f46a00();
   input += synapse0x1f46a40();
   input += synapse0x1f470c0();
   input += synapse0x1f47100();
   input += synapse0x1f47140();
   input += synapse0x1f47180();
   input += synapse0x1f471c0();
   input += synapse0x1f47200();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f46870() {
   double input = input0x1f46870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f47240() {
   double input = 0.444962;
   input += synapse0x1f47580();
   input += synapse0x1f475c0();
   input += synapse0x1f47600();
   input += synapse0x1f47640();
   input += synapse0x1f47680();
   input += synapse0x1f476c0();
   input += synapse0x1f47700();
   input += synapse0x1f47740();
   input += synapse0x1f47780();
   input += synapse0x1f477c0();
   input += synapse0x1f47800();
   input += synapse0x1f47840();
   input += synapse0x1f47880();
   input += synapse0x1f478c0();
   input += synapse0x1f47900();
   input += synapse0x1f47940();
   input += synapse0x1f473d0();
   input += synapse0x1f47410();
   input += synapse0x1f47a90();
   input += synapse0x1f47ad0();
   input += synapse0x1f47b10();
   input += synapse0x1f47b50();
   input += synapse0x1f47b90();
   input += synapse0x1f47bd0();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f47240() {
   double input = input0x1f47240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f59880() {
   double input = -0.22801;
   input += synapse0x1f59aa0();
   input += synapse0x1f59ae0();
   input += synapse0x1f59b20();
   input += synapse0x1f59b60();
   input += synapse0x1f59ba0();
   input += synapse0x1f59be0();
   input += synapse0x1f59c20();
   input += synapse0x1f59c60();
   input += synapse0x1f59ca0();
   input += synapse0x1f59ce0();
   input += synapse0x1f59d20();
   input += synapse0x1f59d60();
   input += synapse0x1f59da0();
   input += synapse0x1f59de0();
   input += synapse0x1f59e20();
   input += synapse0x1f59e60();
   input += synapse0x1f47c10();
   input += synapse0x1f47c50();
   input += synapse0x1f59fb0();
   input += synapse0x1f59ff0();
   input += synapse0x1f5a030();
   input += synapse0x1f5a070();
   input += synapse0x1f5a0b0();
   input += synapse0x1f5a0f0();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f59880() {
   double input = input0x1f59880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f5a130() {
   double input = -2.4468;
   input += synapse0x1f5a470();
   input += synapse0x1f5a4b0();
   input += synapse0x1f5a4f0();
   input += synapse0x1f5a530();
   input += synapse0x1f5a570();
   input += synapse0x1f5a5b0();
   input += synapse0x1f5a5f0();
   input += synapse0x1f5a630();
   input += synapse0x1f5a670();
   input += synapse0x1f5a6b0();
   input += synapse0x1f5a6f0();
   input += synapse0x1f5a730();
   input += synapse0x1f5a770();
   input += synapse0x1f5a7b0();
   input += synapse0x1f5a7f0();
   input += synapse0x1f5a830();
   input += synapse0x1f5a2c0();
   input += synapse0x1f5a300();
   input += synapse0x1f5a980();
   input += synapse0x1f5a9c0();
   input += synapse0x1f5aa00();
   input += synapse0x1f5aa40();
   input += synapse0x1f5aa80();
   input += synapse0x1f5aac0();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f5a130() {
   double input = input0x1f5a130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f5ab00() {
   double input = -1.76629;
   input += synapse0x1f5ae40();
   input += synapse0x1f5ae80();
   input += synapse0x1f5aec0();
   input += synapse0x1f5af00();
   input += synapse0x1f5af40();
   input += synapse0x1f5af80();
   input += synapse0x1f5afc0();
   input += synapse0x1f5b000();
   input += synapse0x1f5b040();
   input += synapse0x1f5b080();
   input += synapse0x1f5b0c0();
   input += synapse0x1f5b100();
   input += synapse0x1f5b140();
   input += synapse0x1f5b180();
   input += synapse0x1f5b1c0();
   input += synapse0x1f5b200();
   input += synapse0x1f5ac90();
   input += synapse0x1f5acd0();
   input += synapse0x1f5b350();
   input += synapse0x1f5b390();
   input += synapse0x1f5b3d0();
   input += synapse0x1f5b410();
   input += synapse0x1f5b450();
   input += synapse0x1f5b490();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f5ab00() {
   double input = input0x1f5ab00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f5b4d0() {
   double input = -0.811828;
   input += synapse0x1f5b810();
   input += synapse0x1f5b850();
   input += synapse0x1f5b890();
   input += synapse0x1f5b8d0();
   input += synapse0x1f5b910();
   input += synapse0x1f5b950();
   input += synapse0x1f5b990();
   input += synapse0x1f5b9d0();
   input += synapse0x1f5ba10();
   input += synapse0x1f5ba50();
   input += synapse0x1f5ba90();
   input += synapse0x1f5bad0();
   input += synapse0x1f5bb10();
   input += synapse0x1f5bb50();
   input += synapse0x1f5bb90();
   input += synapse0x1f5bbd0();
   input += synapse0x1f5b660();
   input += synapse0x1f5b6a0();
   input += synapse0x1f5bd20();
   input += synapse0x1f5bd60();
   input += synapse0x1f5bda0();
   input += synapse0x1f5bde0();
   input += synapse0x1f5be20();
   input += synapse0x1f5be60();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f5b4d0() {
   double input = input0x1f5b4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f626d0() {
   double input = -0.473796;
   input += synapse0x1f372b0();
   input += synapse0x1f372f0();
   input += synapse0x1f38810();
   input += synapse0x1f38850();
   input += synapse0x1f3a2e0();
   input += synapse0x1f3a320();
   input += synapse0x1f3b0b0();
   input += synapse0x1f3b0f0();
   input += synapse0x1f3ba80();
   input += synapse0x1f3bac0();
   input += synapse0x1f3c450();
   input += synapse0x1f3c490();
   input += synapse0x1f3cf30();
   input += synapse0x1f3cf70();
   input += synapse0x1f3d900();
   input += synapse0x1f3d940();
   input += synapse0x1f3a9e0();
   input += synapse0x1f3aa20();
   input += synapse0x1f3f4b0();
   input += synapse0x1f3f4f0();
   input += synapse0x1f3fe80();
   input += synapse0x1f3fec0();
   input += synapse0x1f40850();
   input += synapse0x1f40890();
   input += synapse0x1f41220();
   input += synapse0x1f41260();
   input += synapse0x1f342b0();
   input += synapse0x1f342f0();
   input += synapse0x1f43310();
   input += synapse0x1f43350();
   input += synapse0x1f43ce0();
   input += synapse0x1f43d20();
   input += synapse0x1f446b0();
   input += synapse0x1f446f0();
   input += synapse0x1f45080();
   input += synapse0x1f450c0();
   input += synapse0x1f45a50();
   input += synapse0x1f45a90();
   input += synapse0x1f3e5a0();
   input += synapse0x1f3e5e0();
   input += synapse0x1f47e50();
   input += synapse0x1f47e90();
   input += synapse0x1f487e0();
   input += synapse0x1f48820();
   input += synapse0x1f491b0();
   input += synapse0x1f491f0();
   input += synapse0x1f49b80();
   input += synapse0x1f49bc0();
   input += synapse0x1f4a550();
   input += synapse0x1f4a590();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f626d0() {
   double input = input0x1f626d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f62a70() {
   double input = -0.581986;
   input += synapse0x1f4cc90();
   input += synapse0x1f4ccd0();
   input += synapse0x1f42250();
   input += synapse0x1f42290();
   input += synapse0x1f4f870();
   input += synapse0x1f4f8b0();
   input += synapse0x1f50240();
   input += synapse0x1f50280();
   input += synapse0x1f50c10();
   input += synapse0x1f50c50();
   input += synapse0x1f515e0();
   input += synapse0x1f51620();
   input += synapse0x1f51fb0();
   input += synapse0x1f51ff0();
   input += synapse0x1f52980();
   input += synapse0x1f529c0();
   input += synapse0x1f53350();
   input += synapse0x1f53390();
   input += synapse0x1f53d20();
   input += synapse0x1f53d60();
   input += synapse0x1f54900();
   input += synapse0x1f54940();
   input += synapse0x1f552d0();
   input += synapse0x1f55310();
   input += synapse0x1f46150();
   input += synapse0x1f46190();
   input += synapse0x1f46b20();
   input += synapse0x1f46b60();
   input += synapse0x1f474f0();
   input += synapse0x1f47530();
   input += synapse0x1f59a10();
   input += synapse0x1f59a50();
   input += synapse0x1f5a3e0();
   input += synapse0x1f5a420();
   input += synapse0x1f5adb0();
   input += synapse0x1f5adf0();
   input += synapse0x1f5b780();
   input += synapse0x1f5b7c0();
   input += synapse0x1f36710();
   input += synapse0x1f36750();
   input += synapse0x1f4af20();
   input += synapse0x1f4af60();
   input += synapse0x1f5bea0();
   input += synapse0x1f5bee0();
   input += synapse0x1f5bf20();
   input += synapse0x1f5bf60();
   input += synapse0x1f62e10();
   input += synapse0x1f62e50();
   input += synapse0x1f62e90();
   input += synapse0x1f62ed0();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f62a70() {
   double input = input0x1f62a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f62f10() {
   double input = 0.551765;
   input += synapse0x1f63250();
   input += synapse0x1f63290();
   input += synapse0x1f632d0();
   input += synapse0x1f63310();
   input += synapse0x1f63350();
   input += synapse0x1f63390();
   input += synapse0x1f633d0();
   input += synapse0x1f63410();
   input += synapse0x1f63450();
   input += synapse0x1f63490();
   input += synapse0x1f634d0();
   input += synapse0x1f63510();
   input += synapse0x1f63550();
   input += synapse0x1f63590();
   input += synapse0x1f635d0();
   input += synapse0x1f63610();
   input += synapse0x1f630a0();
   input += synapse0x1f630e0();
   input += synapse0x1f63760();
   input += synapse0x1f637a0();
   input += synapse0x1f637e0();
   input += synapse0x1f63820();
   input += synapse0x1f63860();
   input += synapse0x1f638a0();
   input += synapse0x1f638e0();
   input += synapse0x1f63920();
   input += synapse0x1f63960();
   input += synapse0x1f639a0();
   input += synapse0x1f639e0();
   input += synapse0x1f63a20();
   input += synapse0x1f63a60();
   input += synapse0x1f63aa0();
   input += synapse0x1f63650();
   input += synapse0x1f63690();
   input += synapse0x1f636d0();
   input += synapse0x1f63710();
   input += synapse0x1f63cf0();
   input += synapse0x1f63d30();
   input += synapse0x1f63d70();
   input += synapse0x1f63db0();
   input += synapse0x1f63df0();
   input += synapse0x1f63e30();
   input += synapse0x1f63e70();
   input += synapse0x1f63eb0();
   input += synapse0x1f63ef0();
   input += synapse0x1f63f30();
   input += synapse0x1f63f70();
   input += synapse0x1f63fb0();
   input += synapse0x1f63ff0();
   input += synapse0x1f64030();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f62f10() {
   double input = input0x1f62f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f64070() {
   double input = -0.201215;
   input += synapse0x1f643b0();
   input += synapse0x1f643f0();
   input += synapse0x1f64430();
   input += synapse0x1f64470();
   input += synapse0x1f644b0();
   input += synapse0x1f644f0();
   input += synapse0x1f64530();
   input += synapse0x1f64570();
   input += synapse0x1f645b0();
   input += synapse0x1f645f0();
   input += synapse0x1f64630();
   input += synapse0x1f64670();
   input += synapse0x1f646b0();
   input += synapse0x1f646f0();
   input += synapse0x1f64730();
   input += synapse0x1f64770();
   input += synapse0x1f64200();
   input += synapse0x1f64240();
   input += synapse0x1f648c0();
   input += synapse0x1f64900();
   input += synapse0x1f64940();
   input += synapse0x1f64980();
   input += synapse0x1f649c0();
   input += synapse0x1f64a00();
   input += synapse0x1f64a40();
   input += synapse0x1f64a80();
   input += synapse0x1f64ac0();
   input += synapse0x1f64b00();
   input += synapse0x1f64b40();
   input += synapse0x1f64b80();
   input += synapse0x1f64bc0();
   input += synapse0x1f64c00();
   input += synapse0x1f647b0();
   input += synapse0x1f647f0();
   input += synapse0x1f64830();
   input += synapse0x1f64870();
   input += synapse0x1f64e50();
   input += synapse0x1f64e90();
   input += synapse0x1f64ed0();
   input += synapse0x1f64f10();
   input += synapse0x1f64f50();
   input += synapse0x1f64f90();
   input += synapse0x1f64fd0();
   input += synapse0x1f65010();
   input += synapse0x1f65050();
   input += synapse0x1f65090();
   input += synapse0x1f650d0();
   input += synapse0x1f65110();
   input += synapse0x1f65150();
   input += synapse0x1f65190();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f64070() {
   double input = input0x1f64070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f651d0() {
   double input = 0.120148;
   input += synapse0x1f65510();
   input += synapse0x1f65550();
   input += synapse0x1f65590();
   input += synapse0x1f655d0();
   input += synapse0x1f65610();
   input += synapse0x1f65650();
   input += synapse0x1f65690();
   input += synapse0x1f656d0();
   input += synapse0x1f65710();
   input += synapse0x1f65750();
   input += synapse0x1f65790();
   input += synapse0x1f657d0();
   input += synapse0x1f65810();
   input += synapse0x1f65850();
   input += synapse0x1f65890();
   input += synapse0x1f658d0();
   input += synapse0x1f65360();
   input += synapse0x1f653a0();
   input += synapse0x1f65a20();
   input += synapse0x1f65a60();
   input += synapse0x1f65aa0();
   input += synapse0x1f65ae0();
   input += synapse0x1f65b20();
   input += synapse0x1f65b60();
   input += synapse0x1f65ba0();
   input += synapse0x1f65be0();
   input += synapse0x1f65c20();
   input += synapse0x1f65c60();
   input += synapse0x1f65ca0();
   input += synapse0x1f65ce0();
   input += synapse0x1f65d20();
   input += synapse0x1f65d60();
   input += synapse0x1f65910();
   input += synapse0x1f65950();
   input += synapse0x1f65990();
   input += synapse0x1f659d0();
   input += synapse0x1f65fb0();
   input += synapse0x1f65ff0();
   input += synapse0x1f66030();
   input += synapse0x1f66070();
   input += synapse0x1f660b0();
   input += synapse0x1f660f0();
   input += synapse0x1f66130();
   input += synapse0x1f66170();
   input += synapse0x1f661b0();
   input += synapse0x1f661f0();
   input += synapse0x1f66230();
   input += synapse0x1f66270();
   input += synapse0x1f662b0();
   input += synapse0x1f662f0();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f651d0() {
   double input = input0x1f651d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi04::input0x1f66330() {
   double input = 6.71694;
   input += synapse0x1f66550();
   input += synapse0x1f66590();
   input += synapse0x1f665d0();
   input += synapse0x1f66610();
   input += synapse0x1f66650();
   return input;
}

double NNfunction_ng_chi04::neuron0x1f66330() {
   double input = input0x1f66330();
   return (input * 1)+0;
}

double NNfunction_ng_chi04::synapse0x1f367a0() {
   return (neuron0x1f313a0()*0.0567745);
}

double NNfunction_ng_chi04::synapse0x1f367e0() {
   return (neuron0x1f31650()*3.27129);
}

double NNfunction_ng_chi04::synapse0x1f36820() {
   return (neuron0x1f31990()*-0.290349);
}

double NNfunction_ng_chi04::synapse0x1f36860() {
   return (neuron0x1f31cd0()*0.00271472);
}

double NNfunction_ng_chi04::synapse0x1f368a0() {
   return (neuron0x1f32010()*0.016632);
}

double NNfunction_ng_chi04::synapse0x1f368e0() {
   return (neuron0x1f32350()*0.0173502);
}

double NNfunction_ng_chi04::synapse0x1f36920() {
   return (neuron0x1f32690()*-0.00919918);
}

double NNfunction_ng_chi04::synapse0x1f36960() {
   return (neuron0x1f329d0()*-0.00910288);
}

double NNfunction_ng_chi04::synapse0x1f369a0() {
   return (neuron0x1f32d10()*-0.00814267);
}

double NNfunction_ng_chi04::synapse0x1f369e0() {
   return (neuron0x1f33050()*0.00399716);
}

double NNfunction_ng_chi04::synapse0x1f36a20() {
   return (neuron0x1f33390()*-0.0182824);
}

double NNfunction_ng_chi04::synapse0x1f36a60() {
   return (neuron0x1f336d0()*-0.00215862);
}

double NNfunction_ng_chi04::synapse0x1f36aa0() {
   return (neuron0x1f33a10()*0.00517054);
}

double NNfunction_ng_chi04::synapse0x1f36ae0() {
   return (neuron0x1f33d50()*0.0319173);
}

double NNfunction_ng_chi04::synapse0x1f36b20() {
   return (neuron0x1f34090()*0.00477521);
}

double NNfunction_ng_chi04::synapse0x1f36b60() {
   return (neuron0x1f343d0()*-0.018707);
}

double NNfunction_ng_chi04::synapse0x1f365f0() {
   return (neuron0x1f34710()*-0.0081364);
}

double NNfunction_ng_chi04::synapse0x1f36630() {
   return (neuron0x1f34c70()*-0.00137607);
}

double NNfunction_ng_chi04::synapse0x1ced6e0() {
   return (neuron0x1f34fb0()*0.00327507);
}

double NNfunction_ng_chi04::synapse0x1ced720() {
   return (neuron0x1f352f0()*-0.0176615);
}

double NNfunction_ng_chi04::synapse0x1f36ba0() {
   return (neuron0x1f35630()*0.012695);
}

double NNfunction_ng_chi04::synapse0x1f36be0() {
   return (neuron0x1f35970()*-0.0204714);
}

double NNfunction_ng_chi04::synapse0x1f36c20() {
   return (neuron0x1f35cb0()*0.0126417);
}

double NNfunction_ng_chi04::synapse0x1f36c60() {
   return (neuron0x1f35ff0()*-2.00563);
}

double NNfunction_ng_chi04::synapse0x1f36fe0() {
   return (neuron0x1f313a0()*0.0984615);
}

double NNfunction_ng_chi04::synapse0x1f37020() {
   return (neuron0x1f31650()*1.12817);
}

double NNfunction_ng_chi04::synapse0x1f37060() {
   return (neuron0x1f31990()*-1.12888);
}

double NNfunction_ng_chi04::synapse0x1f370a0() {
   return (neuron0x1f31cd0()*0.0489415);
}

double NNfunction_ng_chi04::synapse0x1f370e0() {
   return (neuron0x1f32010()*-0.0427458);
}

double NNfunction_ng_chi04::synapse0x1f37120() {
   return (neuron0x1f32350()*-0.0117683);
}

double NNfunction_ng_chi04::synapse0x1f37160() {
   return (neuron0x1f32690()*-0.0209134);
}

double NNfunction_ng_chi04::synapse0x1f371a0() {
   return (neuron0x1f329d0()*0.0779519);
}

double NNfunction_ng_chi04::synapse0x1f371e0() {
   return (neuron0x1f32d10()*0.0516069);
}

double NNfunction_ng_chi04::synapse0x1ced530() {
   return (neuron0x1f33050()*0.069176);
}

double NNfunction_ng_chi04::synapse0x1ced570() {
   return (neuron0x1f33390()*-0.0644243);
}

double NNfunction_ng_chi04::synapse0x1ced5b0() {
   return (neuron0x1f336d0()*-0.264431);
}

double NNfunction_ng_chi04::synapse0x1ced5f0() {
   return (neuron0x1f33a10()*0.117447);
}

double NNfunction_ng_chi04::synapse0x1f37430() {
   return (neuron0x1f33d50()*-0.0759765);
}

double NNfunction_ng_chi04::synapse0x1f37470() {
   return (neuron0x1f34090()*-0.950772);
}

double NNfunction_ng_chi04::synapse0x1f374b0() {
   return (neuron0x1f343d0()*-0.0821966);
}

double NNfunction_ng_chi04::synapse0x1f36e30() {
   return (neuron0x1f34710()*-0.150666);
}

double NNfunction_ng_chi04::synapse0x1f36e70() {
   return (neuron0x1f34c70()*-0.188488);
}

double NNfunction_ng_chi04::synapse0x1f37600() {
   return (neuron0x1f34fb0()*-0.0382187);
}

double NNfunction_ng_chi04::synapse0x1f37640() {
   return (neuron0x1f352f0()*0.031497);
}

double NNfunction_ng_chi04::synapse0x1f37680() {
   return (neuron0x1f35630()*-0.0137811);
}

double NNfunction_ng_chi04::synapse0x1f376c0() {
   return (neuron0x1f35970()*-0.0389329);
}

double NNfunction_ng_chi04::synapse0x1f37700() {
   return (neuron0x1f35cb0()*-0.00181988);
}

double NNfunction_ng_chi04::synapse0x1f37740() {
   return (neuron0x1f35ff0()*-0.171067);
}

double NNfunction_ng_chi04::synapse0x1f37ac0() {
   return (neuron0x1f313a0()*0.0642697);
}

double NNfunction_ng_chi04::synapse0x1f37b00() {
   return (neuron0x1f31650()*-0.785788);
}

double NNfunction_ng_chi04::synapse0x1f37b40() {
   return (neuron0x1f31990()*1.24297);
}

double NNfunction_ng_chi04::synapse0x1f37b80() {
   return (neuron0x1f31cd0()*-0.536923);
}

double NNfunction_ng_chi04::synapse0x1f37bc0() {
   return (neuron0x1f32010()*-0.0511537);
}

double NNfunction_ng_chi04::synapse0x1f37c00() {
   return (neuron0x1f32350()*-0.0648244);
}

double NNfunction_ng_chi04::synapse0x1f37c40() {
   return (neuron0x1f32690()*-0.0416225);
}

double NNfunction_ng_chi04::synapse0x1f37c80() {
   return (neuron0x1f329d0()*0.0780916);
}

double NNfunction_ng_chi04::synapse0x1f37cc0() {
   return (neuron0x1f32d10()*0.0101385);
}

double NNfunction_ng_chi04::synapse0x1f37d00() {
   return (neuron0x1f33050()*-0.0459976);
}

double NNfunction_ng_chi04::synapse0x1f37d40() {
   return (neuron0x1f33390()*0.0946501);
}

double NNfunction_ng_chi04::synapse0x1f37d80() {
   return (neuron0x1f336d0()*0.0395647);
}

double NNfunction_ng_chi04::synapse0x1f37dc0() {
   return (neuron0x1f33a10()*0.168558);
}

double NNfunction_ng_chi04::synapse0x1f37e00() {
   return (neuron0x1f33d50()*-0.0859498);
}

double NNfunction_ng_chi04::synapse0x1f37e40() {
   return (neuron0x1f34090()*0.218387);
}

double NNfunction_ng_chi04::synapse0x1f37e80() {
   return (neuron0x1f343d0()*0.0152345);
}

double NNfunction_ng_chi04::synapse0x1f37910() {
   return (neuron0x1f34710()*0.00128365);
}

double NNfunction_ng_chi04::synapse0x1f37950() {
   return (neuron0x1f34c70()*-0.0801327);
}

double NNfunction_ng_chi04::synapse0x1cfb440() {
   return (neuron0x1f34fb0()*-0.0146287);
}

double NNfunction_ng_chi04::synapse0x1cfb480() {
   return (neuron0x1f352f0()*0.121295);
}

double NNfunction_ng_chi04::synapse0x1f39db0() {
   return (neuron0x1f35630()*0.0565429);
}

double NNfunction_ng_chi04::synapse0x1f39df0() {
   return (neuron0x1f35970()*-0.0134102);
}

double NNfunction_ng_chi04::synapse0x1f310e0() {
   return (neuron0x1f35cb0()*-0.0305942);
}

double NNfunction_ng_chi04::synapse0x1f31120() {
   return (neuron0x1f35ff0()*-1.35994);
}

double NNfunction_ng_chi04::synapse0x1cfbd30() {
   return (neuron0x1f313a0()*0.0631078);
}

double NNfunction_ng_chi04::synapse0x1f37340() {
   return (neuron0x1f31650()*-3.87783);
}

double NNfunction_ng_chi04::synapse0x1f37380() {
   return (neuron0x1f31990()*3.16906);
}

double NNfunction_ng_chi04::synapse0x1f373c0() {
   return (neuron0x1f31cd0()*-0.0221696);
}

double NNfunction_ng_chi04::synapse0x1f37fd0() {
   return (neuron0x1f32010()*0.0351478);
}

double NNfunction_ng_chi04::synapse0x1f38010() {
   return (neuron0x1f32350()*-0.0118431);
}

double NNfunction_ng_chi04::synapse0x1f38050() {
   return (neuron0x1f32690()*0.0322447);
}

double NNfunction_ng_chi04::synapse0x1f38090() {
   return (neuron0x1f329d0()*0.00787459);
}

double NNfunction_ng_chi04::synapse0x1f380d0() {
   return (neuron0x1f32d10()*-0.0110423);
}

double NNfunction_ng_chi04::synapse0x1f38110() {
   return (neuron0x1f33050()*0.00293379);
}

double NNfunction_ng_chi04::synapse0x1f38150() {
   return (neuron0x1f33390()*-0.00350315);
}

double NNfunction_ng_chi04::synapse0x1f38190() {
   return (neuron0x1f336d0()*0.22829);
}

double NNfunction_ng_chi04::synapse0x1f381d0() {
   return (neuron0x1f33a10()*-0.0231285);
}

double NNfunction_ng_chi04::synapse0x1f38210() {
   return (neuron0x1f33d50()*0.0262917);
}

double NNfunction_ng_chi04::synapse0x1f38250() {
   return (neuron0x1f34090()*-0.0844312);
}

double NNfunction_ng_chi04::synapse0x1f38290() {
   return (neuron0x1f343d0()*-0.00979183);
}

double NNfunction_ng_chi04::synapse0x1f31160() {
   return (neuron0x1f34710()*0.0131582);
}

double NNfunction_ng_chi04::synapse0x1f311a0() {
   return (neuron0x1f34c70()*-0.0260724);
}

double NNfunction_ng_chi04::synapse0x1f383e0() {
   return (neuron0x1f34fb0()*0.0244635);
}

double NNfunction_ng_chi04::synapse0x1f38420() {
   return (neuron0x1f352f0()*-0.0284964);
}

double NNfunction_ng_chi04::synapse0x1f38460() {
   return (neuron0x1f35630()*0.0147687);
}

double NNfunction_ng_chi04::synapse0x1f384a0() {
   return (neuron0x1f35970()*0.0117654);
}

double NNfunction_ng_chi04::synapse0x1f384e0() {
   return (neuron0x1f35cb0()*-0.00923013);
}

double NNfunction_ng_chi04::synapse0x1f38520() {
   return (neuron0x1f35ff0()*-2.52355);
}

double NNfunction_ng_chi04::synapse0x1f388a0() {
   return (neuron0x1f313a0()*-0.148488);
}

double NNfunction_ng_chi04::synapse0x1f388e0() {
   return (neuron0x1f31650()*0.190053);
}

double NNfunction_ng_chi04::synapse0x1f38920() {
   return (neuron0x1f31990()*-1.42665);
}

double NNfunction_ng_chi04::synapse0x1f38960() {
   return (neuron0x1f31cd0()*-0.106583);
}

double NNfunction_ng_chi04::synapse0x1f389a0() {
   return (neuron0x1f32010()*-0.0504882);
}

double NNfunction_ng_chi04::synapse0x1f389e0() {
   return (neuron0x1f32350()*0.24961);
}

double NNfunction_ng_chi04::synapse0x1f38a20() {
   return (neuron0x1f32690()*0.173527);
}

double NNfunction_ng_chi04::synapse0x1f38a60() {
   return (neuron0x1f329d0()*-0.0188528);
}

double NNfunction_ng_chi04::synapse0x1f38aa0() {
   return (neuron0x1f32d10()*-0.138899);
}

double NNfunction_ng_chi04::synapse0x1f38ae0() {
   return (neuron0x1f33050()*0.0427689);
}

double NNfunction_ng_chi04::synapse0x1f38b20() {
   return (neuron0x1f33390()*0.0734077);
}

double NNfunction_ng_chi04::synapse0x1f38b60() {
   return (neuron0x1f336d0()*0.299311);
}

double NNfunction_ng_chi04::synapse0x1f38ba0() {
   return (neuron0x1f33a10()*-0.11763);
}

double NNfunction_ng_chi04::synapse0x1f38be0() {
   return (neuron0x1f33d50()*0.159838);
}

double NNfunction_ng_chi04::synapse0x1f38c20() {
   return (neuron0x1f34090()*0.127389);
}

double NNfunction_ng_chi04::synapse0x1f38c60() {
   return (neuron0x1f343d0()*0.0512032);
}

double NNfunction_ng_chi04::synapse0x1f38db0() {
   return (neuron0x1f34710()*-0.0209868);
}

double NNfunction_ng_chi04::synapse0x1f386f0() {
   return (neuron0x1f34c70()*0.132199);
}

double NNfunction_ng_chi04::synapse0x1f38730() {
   return (neuron0x1f34fb0()*0.0639294);
}

double NNfunction_ng_chi04::synapse0x1f39ef0() {
   return (neuron0x1f352f0()*0.16339);
}

double NNfunction_ng_chi04::synapse0x1f39f30() {
   return (neuron0x1f35630()*0.102675);
}

double NNfunction_ng_chi04::synapse0x1f39f70() {
   return (neuron0x1f35970()*0.0753247);
}

double NNfunction_ng_chi04::synapse0x1f39fb0() {
   return (neuron0x1f35cb0()*-0.119887);
}

double NNfunction_ng_chi04::synapse0x1f39ff0() {
   return (neuron0x1f35ff0()*1.40138);
}

double NNfunction_ng_chi04::synapse0x1f3a370() {
   return (neuron0x1f313a0()*0.00141463);
}

double NNfunction_ng_chi04::synapse0x1f3a3b0() {
   return (neuron0x1f31650()*-3.22451);
}

double NNfunction_ng_chi04::synapse0x1f3a3f0() {
   return (neuron0x1f31990()*-2.35024);
}

double NNfunction_ng_chi04::synapse0x1f3a430() {
   return (neuron0x1f31cd0()*-0.0266626);
}

double NNfunction_ng_chi04::synapse0x1f3a470() {
   return (neuron0x1f32010()*-0.0123611);
}

double NNfunction_ng_chi04::synapse0x1f3a4b0() {
   return (neuron0x1f32350()*0.0298923);
}

double NNfunction_ng_chi04::synapse0x1f3a4f0() {
   return (neuron0x1f32690()*-0.0242274);
}

double NNfunction_ng_chi04::synapse0x1f3a530() {
   return (neuron0x1f329d0()*-0.000895889);
}

double NNfunction_ng_chi04::synapse0x1f3a570() {
   return (neuron0x1f32d10()*0.0237024);
}

double NNfunction_ng_chi04::synapse0x1cfb790() {
   return (neuron0x1f33050()*0.0114504);
}

double NNfunction_ng_chi04::synapse0x1cfb7d0() {
   return (neuron0x1f33390()*0.0237856);
}

double NNfunction_ng_chi04::synapse0x1cfb810() {
   return (neuron0x1f336d0()*-0.085566);
}

double NNfunction_ng_chi04::synapse0x1cfb850() {
   return (neuron0x1f33a10()*-0.0639517);
}

double NNfunction_ng_chi04::synapse0x1cfb890() {
   return (neuron0x1f33d50()*-0.0161778);
}

double NNfunction_ng_chi04::synapse0x1cfb8d0() {
   return (neuron0x1f34090()*0.0977808);
}

double NNfunction_ng_chi04::synapse0x1cfb910() {
   return (neuron0x1f343d0()*0.037914);
}

double NNfunction_ng_chi04::synapse0x1f3a1c0() {
   return (neuron0x1f34710()*-0.035835);
}

double NNfunction_ng_chi04::synapse0x1f3a200() {
   return (neuron0x1f34c70()*0.0578128);
}

double NNfunction_ng_chi04::synapse0x1cfba60() {
   return (neuron0x1f34fb0()*-0.0135126);
}

double NNfunction_ng_chi04::synapse0x1cfbaa0() {
   return (neuron0x1f352f0()*0.018479);
}

double NNfunction_ng_chi04::synapse0x1cfbae0() {
   return (neuron0x1f35630()*0.0230564);
}

double NNfunction_ng_chi04::synapse0x1cfbb20() {
   return (neuron0x1f35970()*-0.0031343);
}

double NNfunction_ng_chi04::synapse0x1cfbb60() {
   return (neuron0x1f35cb0()*0.0065911);
}

double NNfunction_ng_chi04::synapse0x1f3adc0() {
   return (neuron0x1f35ff0()*-2.28127);
}

double NNfunction_ng_chi04::synapse0x1f3b140() {
   return (neuron0x1f313a0()*-0.0719783);
}

double NNfunction_ng_chi04::synapse0x1f3b180() {
   return (neuron0x1f31650()*-0.773741);
}

double NNfunction_ng_chi04::synapse0x1f3b1c0() {
   return (neuron0x1f31990()*0.353058);
}

double NNfunction_ng_chi04::synapse0x1f3b200() {
   return (neuron0x1f31cd0()*-0.0914467);
}

double NNfunction_ng_chi04::synapse0x1f3b240() {
   return (neuron0x1f32010()*-0.0285893);
}

double NNfunction_ng_chi04::synapse0x1f3b280() {
   return (neuron0x1f32350()*0.0176361);
}

double NNfunction_ng_chi04::synapse0x1f3b2c0() {
   return (neuron0x1f32690()*-0.00143778);
}

double NNfunction_ng_chi04::synapse0x1f3b300() {
   return (neuron0x1f329d0()*-0.0019136);
}

double NNfunction_ng_chi04::synapse0x1f3b340() {
   return (neuron0x1f32d10()*-0.0279147);
}

double NNfunction_ng_chi04::synapse0x1f3b380() {
   return (neuron0x1f33050()*-0.0258441);
}

double NNfunction_ng_chi04::synapse0x1f3b3c0() {
   return (neuron0x1f33390()*-0.00708899);
}

double NNfunction_ng_chi04::synapse0x1f3b400() {
   return (neuron0x1f336d0()*0.0145031);
}

double NNfunction_ng_chi04::synapse0x1f3b440() {
   return (neuron0x1f33a10()*0.0105332);
}

double NNfunction_ng_chi04::synapse0x1f3b480() {
   return (neuron0x1f33d50()*0.0302829);
}

double NNfunction_ng_chi04::synapse0x1f3b4c0() {
   return (neuron0x1f34090()*-0.0431548);
}

double NNfunction_ng_chi04::synapse0x1f3b500() {
   return (neuron0x1f343d0()*0.00960693);
}

double NNfunction_ng_chi04::synapse0x1f3af90() {
   return (neuron0x1f34710()*0.00901436);
}

double NNfunction_ng_chi04::synapse0x1f3afd0() {
   return (neuron0x1f34c70()*0.0472911);
}

double NNfunction_ng_chi04::synapse0x1f3b650() {
   return (neuron0x1f34fb0()*0.00111533);
}

double NNfunction_ng_chi04::synapse0x1f3b690() {
   return (neuron0x1f352f0()*-0.014759);
}

double NNfunction_ng_chi04::synapse0x1f3b6d0() {
   return (neuron0x1f35630()*-0.0280695);
}

double NNfunction_ng_chi04::synapse0x1f3b710() {
   return (neuron0x1f35970()*-0.0151432);
}

double NNfunction_ng_chi04::synapse0x1f3b750() {
   return (neuron0x1f35cb0()*0.0188896);
}

double NNfunction_ng_chi04::synapse0x1f3b790() {
   return (neuron0x1f35ff0()*0.731904);
}

double NNfunction_ng_chi04::synapse0x1f3bb10() {
   return (neuron0x1f313a0()*-0.0495039);
}

double NNfunction_ng_chi04::synapse0x1f3bb50() {
   return (neuron0x1f31650()*0.183817);
}

double NNfunction_ng_chi04::synapse0x1f3bb90() {
   return (neuron0x1f31990()*-0.660043);
}

double NNfunction_ng_chi04::synapse0x1f3bbd0() {
   return (neuron0x1f31cd0()*-0.278493);
}

double NNfunction_ng_chi04::synapse0x1f3bc10() {
   return (neuron0x1f32010()*-0.0549344);
}

double NNfunction_ng_chi04::synapse0x1f3bc50() {
   return (neuron0x1f32350()*-0.0416008);
}

double NNfunction_ng_chi04::synapse0x1f3bc90() {
   return (neuron0x1f32690()*-0.0567626);
}

double NNfunction_ng_chi04::synapse0x1f3bcd0() {
   return (neuron0x1f329d0()*-0.0381552);
}

double NNfunction_ng_chi04::synapse0x1f3bd10() {
   return (neuron0x1f32d10()*0.0831179);
}

double NNfunction_ng_chi04::synapse0x1f3bd50() {
   return (neuron0x1f33050()*-0.0654728);
}

double NNfunction_ng_chi04::synapse0x1f3bd90() {
   return (neuron0x1f33390()*-0.0312577);
}

double NNfunction_ng_chi04::synapse0x1f3bdd0() {
   return (neuron0x1f336d0()*-0.975319);
}

double NNfunction_ng_chi04::synapse0x1f3be10() {
   return (neuron0x1f33a10()*0.389448);
}

double NNfunction_ng_chi04::synapse0x1f3be50() {
   return (neuron0x1f33d50()*0.116185);
}

double NNfunction_ng_chi04::synapse0x1f3be90() {
   return (neuron0x1f34090()*-0.310573);
}

double NNfunction_ng_chi04::synapse0x1f3bed0() {
   return (neuron0x1f343d0()*0.0453441);
}

double NNfunction_ng_chi04::synapse0x1f3b960() {
   return (neuron0x1f34710()*0.0921129);
}

double NNfunction_ng_chi04::synapse0x1f3b9a0() {
   return (neuron0x1f34c70()*-0.213888);
}

double NNfunction_ng_chi04::synapse0x1f3c020() {
   return (neuron0x1f34fb0()*0.00826452);
}

double NNfunction_ng_chi04::synapse0x1f3c060() {
   return (neuron0x1f352f0()*0.121798);
}

double NNfunction_ng_chi04::synapse0x1f3c0a0() {
   return (neuron0x1f35630()*-0.0528306);
}

double NNfunction_ng_chi04::synapse0x1f3c0e0() {
   return (neuron0x1f35970()*-0.0282015);
}

double NNfunction_ng_chi04::synapse0x1f3c120() {
   return (neuron0x1f35cb0()*0.0687972);
}

double NNfunction_ng_chi04::synapse0x1f3c160() {
   return (neuron0x1f35ff0()*0.92203);
}

double NNfunction_ng_chi04::synapse0x1f34b60() {
   return (neuron0x1f313a0()*0.372769);
}

double NNfunction_ng_chi04::synapse0x1f34ba0() {
   return (neuron0x1f31650()*0.821105);
}

double NNfunction_ng_chi04::synapse0x1f34be0() {
   return (neuron0x1f31990()*0.933037);
}

double NNfunction_ng_chi04::synapse0x1f34c20() {
   return (neuron0x1f31cd0()*0.365727);
}

double NNfunction_ng_chi04::synapse0x1f3c6f0() {
   return (neuron0x1f32010()*0.125091);
}

double NNfunction_ng_chi04::synapse0x1f3c730() {
   return (neuron0x1f32350()*-0.604351);
}

double NNfunction_ng_chi04::synapse0x1f3c770() {
   return (neuron0x1f32690()*-0.471191);
}

double NNfunction_ng_chi04::synapse0x1f3c7b0() {
   return (neuron0x1f329d0()*-0.664818);
}

double NNfunction_ng_chi04::synapse0x1f3c7f0() {
   return (neuron0x1f32d10()*-0.0706922);
}

double NNfunction_ng_chi04::synapse0x1f3c830() {
   return (neuron0x1f33050()*0.356382);
}

double NNfunction_ng_chi04::synapse0x1f3c870() {
   return (neuron0x1f33390()*-0.647078);
}

double NNfunction_ng_chi04::synapse0x1f3c8b0() {
   return (neuron0x1f336d0()*0.662863);
}

double NNfunction_ng_chi04::synapse0x1f3c8f0() {
   return (neuron0x1f33a10()*0.16132);
}

double NNfunction_ng_chi04::synapse0x1f3c930() {
   return (neuron0x1f33d50()*0.76573);
}

double NNfunction_ng_chi04::synapse0x1f3c970() {
   return (neuron0x1f34090()*0.83103);
}

double NNfunction_ng_chi04::synapse0x1f3c9b0() {
   return (neuron0x1f343d0()*0.0533544);
}

double NNfunction_ng_chi04::synapse0x1f3c330() {
   return (neuron0x1f34710()*0.1671);
}

double NNfunction_ng_chi04::synapse0x1f3c370() {
   return (neuron0x1f34c70()*0.583547);
}

double NNfunction_ng_chi04::synapse0x1f3cb00() {
   return (neuron0x1f34fb0()*0.298539);
}

double NNfunction_ng_chi04::synapse0x1f3cb40() {
   return (neuron0x1f352f0()*0.656804);
}

double NNfunction_ng_chi04::synapse0x1f3cb80() {
   return (neuron0x1f35630()*0.49483);
}

double NNfunction_ng_chi04::synapse0x1f3cbc0() {
   return (neuron0x1f35970()*-0.22507);
}

double NNfunction_ng_chi04::synapse0x1f3cc00() {
   return (neuron0x1f35cb0()*-0.615341);
}

double NNfunction_ng_chi04::synapse0x1f3cc40() {
   return (neuron0x1f35ff0()*0.0815482);
}

double NNfunction_ng_chi04::synapse0x1f3cfc0() {
   return (neuron0x1f313a0()*-0.0539781);
}

double NNfunction_ng_chi04::synapse0x1f3d000() {
   return (neuron0x1f31650()*0.61477);
}

double NNfunction_ng_chi04::synapse0x1f3d040() {
   return (neuron0x1f31990()*0.243515);
}

double NNfunction_ng_chi04::synapse0x1f3d080() {
   return (neuron0x1f31cd0()*-1.65986);
}

double NNfunction_ng_chi04::synapse0x1f3d0c0() {
   return (neuron0x1f32010()*0.0116127);
}

double NNfunction_ng_chi04::synapse0x1f3d100() {
   return (neuron0x1f32350()*-0.0592185);
}

double NNfunction_ng_chi04::synapse0x1f3d140() {
   return (neuron0x1f32690()*-0.0744086);
}

double NNfunction_ng_chi04::synapse0x1f3d180() {
   return (neuron0x1f329d0()*-0.00640383);
}

double NNfunction_ng_chi04::synapse0x1f3d1c0() {
   return (neuron0x1f32d10()*-0.0336928);
}

double NNfunction_ng_chi04::synapse0x1f3d200() {
   return (neuron0x1f33050()*0.00675139);
}

double NNfunction_ng_chi04::synapse0x1f3d240() {
   return (neuron0x1f33390()*-0.104393);
}

double NNfunction_ng_chi04::synapse0x1f3d280() {
   return (neuron0x1f336d0()*-0.162134);
}

double NNfunction_ng_chi04::synapse0x1f3d2c0() {
   return (neuron0x1f33a10()*-0.145592);
}

double NNfunction_ng_chi04::synapse0x1f3d300() {
   return (neuron0x1f33d50()*-0.0729473);
}

double NNfunction_ng_chi04::synapse0x1f3d340() {
   return (neuron0x1f34090()*-0.00231603);
}

double NNfunction_ng_chi04::synapse0x1f3d380() {
   return (neuron0x1f343d0()*-0.0469701);
}

double NNfunction_ng_chi04::synapse0x1f3ce10() {
   return (neuron0x1f34710()*-0.0654073);
}

double NNfunction_ng_chi04::synapse0x1f3ce50() {
   return (neuron0x1f34c70()*0.0566456);
}

double NNfunction_ng_chi04::synapse0x1f3d4d0() {
   return (neuron0x1f34fb0()*-0.0692701);
}

double NNfunction_ng_chi04::synapse0x1f3d510() {
   return (neuron0x1f352f0()*0.0411076);
}

double NNfunction_ng_chi04::synapse0x1f3d550() {
   return (neuron0x1f35630()*0.0342705);
}

double NNfunction_ng_chi04::synapse0x1f3d590() {
   return (neuron0x1f35970()*0.0107479);
}

double NNfunction_ng_chi04::synapse0x1f3d5d0() {
   return (neuron0x1f35cb0()*0.0312723);
}

double NNfunction_ng_chi04::synapse0x1f3d610() {
   return (neuron0x1f35ff0()*0.181938);
}

double NNfunction_ng_chi04::synapse0x1f3d990() {
   return (neuron0x1f313a0()*0.0109651);
}

double NNfunction_ng_chi04::synapse0x1f3d9d0() {
   return (neuron0x1f31650()*-1.24257);
}

double NNfunction_ng_chi04::synapse0x1f3da10() {
   return (neuron0x1f31990()*0.449512);
}

double NNfunction_ng_chi04::synapse0x1f3da50() {
   return (neuron0x1f31cd0()*-0.0785804);
}

double NNfunction_ng_chi04::synapse0x1f3da90() {
   return (neuron0x1f32010()*0.00925418);
}

double NNfunction_ng_chi04::synapse0x1f3dad0() {
   return (neuron0x1f32350()*0.00421309);
}

double NNfunction_ng_chi04::synapse0x1f3db10() {
   return (neuron0x1f32690()*0.00139465);
}

double NNfunction_ng_chi04::synapse0x1f3db50() {
   return (neuron0x1f329d0()*-0.0128145);
}

double NNfunction_ng_chi04::synapse0x1f3db90() {
   return (neuron0x1f32d10()*-0.00805233);
}

double NNfunction_ng_chi04::synapse0x1f3dbd0() {
   return (neuron0x1f33050()*0.00290232);
}

double NNfunction_ng_chi04::synapse0x1f3dc10() {
   return (neuron0x1f33390()*-0.0132801);
}

double NNfunction_ng_chi04::synapse0x1f3dc50() {
   return (neuron0x1f336d0()*0.264314);
}

double NNfunction_ng_chi04::synapse0x1f3dc90() {
   return (neuron0x1f33a10()*0.0381673);
}

double NNfunction_ng_chi04::synapse0x1f3dcd0() {
   return (neuron0x1f33d50()*0.0127903);
}

double NNfunction_ng_chi04::synapse0x1f3dd10() {
   return (neuron0x1f34090()*-0.249206);
}

double NNfunction_ng_chi04::synapse0x1f3dd50() {
   return (neuron0x1f343d0()*-0.00178998);
}

double NNfunction_ng_chi04::synapse0x1f3d7e0() {
   return (neuron0x1f34710()*0.00182447);
}

double NNfunction_ng_chi04::synapse0x1f3d820() {
   return (neuron0x1f34c70()*0.00386563);
}

double NNfunction_ng_chi04::synapse0x1f3a5b0() {
   return (neuron0x1f34fb0()*-0.000945508);
}

double NNfunction_ng_chi04::synapse0x1f3a5f0() {
   return (neuron0x1f352f0()*0.00070554);
}

double NNfunction_ng_chi04::synapse0x1f3a630() {
   return (neuron0x1f35630()*-0.0157969);
}

double NNfunction_ng_chi04::synapse0x1f3a670() {
   return (neuron0x1f35970()*0.00366719);
}

double NNfunction_ng_chi04::synapse0x1f3a6b0() {
   return (neuron0x1f35cb0()*0.00564598);
}

double NNfunction_ng_chi04::synapse0x1f3a6f0() {
   return (neuron0x1f35ff0()*-0.267789);
}

double NNfunction_ng_chi04::synapse0x1f3aa70() {
   return (neuron0x1f313a0()*-0.0396759);
}

double NNfunction_ng_chi04::synapse0x1f3aab0() {
   return (neuron0x1f31650()*-6.21734);
}

double NNfunction_ng_chi04::synapse0x1f3aaf0() {
   return (neuron0x1f31990()*-3.96309);
}

double NNfunction_ng_chi04::synapse0x1f3ab30() {
   return (neuron0x1f31cd0()*0.05719);
}

double NNfunction_ng_chi04::synapse0x1f3ab70() {
   return (neuron0x1f32010()*-0.0182586);
}

double NNfunction_ng_chi04::synapse0x1f3abb0() {
   return (neuron0x1f32350()*-0.0245831);
}

double NNfunction_ng_chi04::synapse0x1f3abf0() {
   return (neuron0x1f32690()*-0.0140581);
}

double NNfunction_ng_chi04::synapse0x1f3ac30() {
   return (neuron0x1f329d0()*-0.00813936);
}

double NNfunction_ng_chi04::synapse0x1f3ac70() {
   return (neuron0x1f32d10()*0.0191366);
}

double NNfunction_ng_chi04::synapse0x1f3acb0() {
   return (neuron0x1f33050()*-0.00437715);
}

double NNfunction_ng_chi04::synapse0x1f3acf0() {
   return (neuron0x1f33390()*0.0123347);
}

double NNfunction_ng_chi04::synapse0x1f3ad30() {
   return (neuron0x1f336d0()*0.215159);
}

double NNfunction_ng_chi04::synapse0x1f3ad70() {
   return (neuron0x1f33a10()*0.0104371);
}

double NNfunction_ng_chi04::synapse0x1f3eeb0() {
   return (neuron0x1f33d50()*-0.0136502);
}

double NNfunction_ng_chi04::synapse0x1f3eef0() {
   return (neuron0x1f34090()*-0.218129);
}

double NNfunction_ng_chi04::synapse0x1f3ef30() {
   return (neuron0x1f343d0()*-0.0356281);
}

double NNfunction_ng_chi04::synapse0x1f3a8c0() {
   return (neuron0x1f34710()*-0.00680428);
}

double NNfunction_ng_chi04::synapse0x1f3a900() {
   return (neuron0x1f34c70()*-0.0131328);
}

double NNfunction_ng_chi04::synapse0x1f3f080() {
   return (neuron0x1f34fb0()*0.0273181);
}

double NNfunction_ng_chi04::synapse0x1f3f0c0() {
   return (neuron0x1f352f0()*-0.00733928);
}

double NNfunction_ng_chi04::synapse0x1f3f100() {
   return (neuron0x1f35630()*-0.00246468);
}

double NNfunction_ng_chi04::synapse0x1f3f140() {
   return (neuron0x1f35970()*-0.0452972);
}

double NNfunction_ng_chi04::synapse0x1f3f180() {
   return (neuron0x1f35cb0()*0.0241485);
}

double NNfunction_ng_chi04::synapse0x1f3f1c0() {
   return (neuron0x1f35ff0()*-0.468211);
}

double NNfunction_ng_chi04::synapse0x1f3f540() {
   return (neuron0x1f313a0()*-0.0542171);
}

double NNfunction_ng_chi04::synapse0x1f3f580() {
   return (neuron0x1f31650()*3.41466);
}

double NNfunction_ng_chi04::synapse0x1f3f5c0() {
   return (neuron0x1f31990()*2.62268);
}

double NNfunction_ng_chi04::synapse0x1f3f600() {
   return (neuron0x1f31cd0()*-0.0149055);
}

double NNfunction_ng_chi04::synapse0x1f3f640() {
   return (neuron0x1f32010()*-0.0341298);
}

double NNfunction_ng_chi04::synapse0x1f3f680() {
   return (neuron0x1f32350()*0.0560031);
}

double NNfunction_ng_chi04::synapse0x1f3f6c0() {
   return (neuron0x1f32690()*-0.0133089);
}

double NNfunction_ng_chi04::synapse0x1f3f700() {
   return (neuron0x1f329d0()*-0.0347226);
}

double NNfunction_ng_chi04::synapse0x1f3f740() {
   return (neuron0x1f32d10()*-0.000106773);
}

double NNfunction_ng_chi04::synapse0x1f3f780() {
   return (neuron0x1f33050()*-0.000169329);
}

double NNfunction_ng_chi04::synapse0x1f3f7c0() {
   return (neuron0x1f33390()*0.0138498);
}

double NNfunction_ng_chi04::synapse0x1f3f800() {
   return (neuron0x1f336d0()*0.153695);
}

double NNfunction_ng_chi04::synapse0x1f3f840() {
   return (neuron0x1f33a10()*0.0299229);
}

double NNfunction_ng_chi04::synapse0x1f3f880() {
   return (neuron0x1f33d50()*0.0265177);
}

double NNfunction_ng_chi04::synapse0x1f3f8c0() {
   return (neuron0x1f34090()*-0.209124);
}

double NNfunction_ng_chi04::synapse0x1f3f900() {
   return (neuron0x1f343d0()*0.0190605);
}

double NNfunction_ng_chi04::synapse0x1f3f390() {
   return (neuron0x1f34710()*-0.0170959);
}

double NNfunction_ng_chi04::synapse0x1f3f3d0() {
   return (neuron0x1f34c70()*-0.0354596);
}

double NNfunction_ng_chi04::synapse0x1f3fa50() {
   return (neuron0x1f34fb0()*-0.0349957);
}

double NNfunction_ng_chi04::synapse0x1f3fa90() {
   return (neuron0x1f352f0()*-0.000974537);
}

double NNfunction_ng_chi04::synapse0x1f3fad0() {
   return (neuron0x1f35630()*-0.016247);
}

double NNfunction_ng_chi04::synapse0x1f3fb10() {
   return (neuron0x1f35970()*-0.00604627);
}

double NNfunction_ng_chi04::synapse0x1f3fb50() {
   return (neuron0x1f35cb0()*0.0197085);
}

double NNfunction_ng_chi04::synapse0x1f3fb90() {
   return (neuron0x1f35ff0()*-2.46956);
}

double NNfunction_ng_chi04::synapse0x1f3ff10() {
   return (neuron0x1f313a0()*0.0483841);
}

double NNfunction_ng_chi04::synapse0x1f3ff50() {
   return (neuron0x1f31650()*3.24095);
}

double NNfunction_ng_chi04::synapse0x1f3ff90() {
   return (neuron0x1f31990()*-0.547112);
}

double NNfunction_ng_chi04::synapse0x1f3ffd0() {
   return (neuron0x1f31cd0()*-0.0165731);
}

double NNfunction_ng_chi04::synapse0x1f40010() {
   return (neuron0x1f32010()*0.0132525);
}

double NNfunction_ng_chi04::synapse0x1f40050() {
   return (neuron0x1f32350()*0.0257004);
}

double NNfunction_ng_chi04::synapse0x1f40090() {
   return (neuron0x1f32690()*-0.00886987);
}

double NNfunction_ng_chi04::synapse0x1f400d0() {
   return (neuron0x1f329d0()*-0.00663539);
}

double NNfunction_ng_chi04::synapse0x1f40110() {
   return (neuron0x1f32d10()*-0.0234199);
}

double NNfunction_ng_chi04::synapse0x1f40150() {
   return (neuron0x1f33050()*-0.00197327);
}

double NNfunction_ng_chi04::synapse0x1f40190() {
   return (neuron0x1f33390()*-0.0183889);
}

double NNfunction_ng_chi04::synapse0x1f401d0() {
   return (neuron0x1f336d0()*-0.0206506);
}

double NNfunction_ng_chi04::synapse0x1f40210() {
   return (neuron0x1f33a10()*-0.00772285);
}

double NNfunction_ng_chi04::synapse0x1f40250() {
   return (neuron0x1f33d50()*0.0241818);
}

double NNfunction_ng_chi04::synapse0x1f40290() {
   return (neuron0x1f34090()*0.0774412);
}

double NNfunction_ng_chi04::synapse0x1f402d0() {
   return (neuron0x1f343d0()*-0.0160871);
}

double NNfunction_ng_chi04::synapse0x1f3fd60() {
   return (neuron0x1f34710()*0.0031243);
}

double NNfunction_ng_chi04::synapse0x1f3fda0() {
   return (neuron0x1f34c70()*-0.0121454);
}

double NNfunction_ng_chi04::synapse0x1f40420() {
   return (neuron0x1f34fb0()*-0.00152381);
}

double NNfunction_ng_chi04::synapse0x1f40460() {
   return (neuron0x1f352f0()*-0.0211688);
}

double NNfunction_ng_chi04::synapse0x1f404a0() {
   return (neuron0x1f35630()*-0.0107993);
}

double NNfunction_ng_chi04::synapse0x1f404e0() {
   return (neuron0x1f35970()*-0.0207674);
}

double NNfunction_ng_chi04::synapse0x1f40520() {
   return (neuron0x1f35cb0()*0.0130746);
}

double NNfunction_ng_chi04::synapse0x1f40560() {
   return (neuron0x1f35ff0()*-1.88845);
}

double NNfunction_ng_chi04::synapse0x1f408e0() {
   return (neuron0x1f313a0()*0.00303326);
}

double NNfunction_ng_chi04::synapse0x1f40920() {
   return (neuron0x1f31650()*-0.0705352);
}

double NNfunction_ng_chi04::synapse0x1f40960() {
   return (neuron0x1f31990()*0.0925626);
}

double NNfunction_ng_chi04::synapse0x1f409a0() {
   return (neuron0x1f31cd0()*-6.28358);
}

double NNfunction_ng_chi04::synapse0x1f409e0() {
   return (neuron0x1f32010()*-0.0210618);
}

double NNfunction_ng_chi04::synapse0x1f40a20() {
   return (neuron0x1f32350()*0.0157394);
}

double NNfunction_ng_chi04::synapse0x1f40a60() {
   return (neuron0x1f32690()*-0.00776221);
}

double NNfunction_ng_chi04::synapse0x1f40aa0() {
   return (neuron0x1f329d0()*-0.0098002);
}

double NNfunction_ng_chi04::synapse0x1f40ae0() {
   return (neuron0x1f32d10()*0.00968834);
}

double NNfunction_ng_chi04::synapse0x1f40b20() {
   return (neuron0x1f33050()*0.0122156);
}

double NNfunction_ng_chi04::synapse0x1f40b60() {
   return (neuron0x1f33390()*0.0151729);
}

double NNfunction_ng_chi04::synapse0x1f40ba0() {
   return (neuron0x1f336d0()*0.0707093);
}

double NNfunction_ng_chi04::synapse0x1f40be0() {
   return (neuron0x1f33a10()*0.0471373);
}

double NNfunction_ng_chi04::synapse0x1f40c20() {
   return (neuron0x1f33d50()*0.0288214);
}

double NNfunction_ng_chi04::synapse0x1f40c60() {
   return (neuron0x1f34090()*0.0403056);
}

double NNfunction_ng_chi04::synapse0x1f40ca0() {
   return (neuron0x1f343d0()*-0.0231065);
}

double NNfunction_ng_chi04::synapse0x1f40730() {
   return (neuron0x1f34710()*-0.0253432);
}

double NNfunction_ng_chi04::synapse0x1f40770() {
   return (neuron0x1f34c70()*-0.015753);
}

double NNfunction_ng_chi04::synapse0x1f40df0() {
   return (neuron0x1f34fb0()*0.0245657);
}

double NNfunction_ng_chi04::synapse0x1f40e30() {
   return (neuron0x1f352f0()*0.00110502);
}

double NNfunction_ng_chi04::synapse0x1f40e70() {
   return (neuron0x1f35630()*-0.00564258);
}

double NNfunction_ng_chi04::synapse0x1f40eb0() {
   return (neuron0x1f35970()*-0.00302128);
}

double NNfunction_ng_chi04::synapse0x1f40ef0() {
   return (neuron0x1f35cb0()*0.0162075);
}

double NNfunction_ng_chi04::synapse0x1f40f30() {
   return (neuron0x1f35ff0()*-0.00356974);
}

double NNfunction_ng_chi04::synapse0x1f412b0() {
   return (neuron0x1f313a0()*-0.0416642);
}

double NNfunction_ng_chi04::synapse0x1f31530() {
   return (neuron0x1f31650()*-0.0327534);
}

double NNfunction_ng_chi04::synapse0x1f31570() {
   return (neuron0x1f31990()*-0.207489);
}

double NNfunction_ng_chi04::synapse0x1f31870() {
   return (neuron0x1f31cd0()*-0.0952574);
}

double NNfunction_ng_chi04::synapse0x1f318b0() {
   return (neuron0x1f32010()*-0.00268489);
}

double NNfunction_ng_chi04::synapse0x1f31bb0() {
   return (neuron0x1f32350()*-0.0235732);
}

double NNfunction_ng_chi04::synapse0x1f31bf0() {
   return (neuron0x1f32690()*0.00444604);
}

double NNfunction_ng_chi04::synapse0x1f31ef0() {
   return (neuron0x1f329d0()*-0.00749273);
}

double NNfunction_ng_chi04::synapse0x1f31f30() {
   return (neuron0x1f32d10()*-0.00675806);
}

double NNfunction_ng_chi04::synapse0x1f32230() {
   return (neuron0x1f33050()*-0.000114111);
}

double NNfunction_ng_chi04::synapse0x1f32270() {
   return (neuron0x1f33390()*-0.00984687);
}

double NNfunction_ng_chi04::synapse0x1f32570() {
   return (neuron0x1f336d0()*0.166723);
}

double NNfunction_ng_chi04::synapse0x1f325b0() {
   return (neuron0x1f33a10()*0.00768443);
}

double NNfunction_ng_chi04::synapse0x1f328b0() {
   return (neuron0x1f33d50()*-0.0257342);
}

double NNfunction_ng_chi04::synapse0x1f328f0() {
   return (neuron0x1f34090()*-1.53189);
}

double NNfunction_ng_chi04::synapse0x1f32bf0() {
   return (neuron0x1f343d0()*-0.0231458);
}

double NNfunction_ng_chi04::synapse0x1f32c30() {
   return (neuron0x1f34710()*-0.0557988);
}

double NNfunction_ng_chi04::synapse0x1f32f30() {
   return (neuron0x1f34c70()*0.408842);
}

double NNfunction_ng_chi04::synapse0x1f32f70() {
   return (neuron0x1f34fb0()*0.0491149);
}

double NNfunction_ng_chi04::synapse0x1f33270() {
   return (neuron0x1f352f0()*-0.00448974);
}

double NNfunction_ng_chi04::synapse0x1f332b0() {
   return (neuron0x1f35630()*-0.0294314);
}

double NNfunction_ng_chi04::synapse0x1f335b0() {
   return (neuron0x1f35970()*0.0253146);
}

double NNfunction_ng_chi04::synapse0x1f335f0() {
   return (neuron0x1f35cb0()*-0.00268014);
}

double NNfunction_ng_chi04::synapse0x1f338f0() {
   return (neuron0x1f35ff0()*0.145847);
}

double NNfunction_ng_chi04::synapse0x1f33930() {
   return (neuron0x1f313a0()*-0.200151);
}

double NNfunction_ng_chi04::synapse0x1f345f0() {
   return (neuron0x1f31650()*0.129431);
}

double NNfunction_ng_chi04::synapse0x1f34630() {
   return (neuron0x1f31990()*0.328013);
}

double NNfunction_ng_chi04::synapse0x1f41100() {
   return (neuron0x1f31cd0()*-2.49239);
}

double NNfunction_ng_chi04::synapse0x1f41140() {
   return (neuron0x1f32010()*-0.0992017);
}

double NNfunction_ng_chi04::synapse0x1f34930() {
   return (neuron0x1f32350()*-0.263443);
}

double NNfunction_ng_chi04::synapse0x1f34970() {
   return (neuron0x1f32690()*-0.0303462);
}

double NNfunction_ng_chi04::synapse0x1f34e90() {
   return (neuron0x1f329d0()*0.100509);
}

double NNfunction_ng_chi04::synapse0x1f34ed0() {
   return (neuron0x1f32d10()*-0.226763);
}

double NNfunction_ng_chi04::synapse0x1f351d0() {
   return (neuron0x1f33050()*-0.0490972);
}

double NNfunction_ng_chi04::synapse0x1f35210() {
   return (neuron0x1f33390()*-0.215466);
}

double NNfunction_ng_chi04::synapse0x1f35510() {
   return (neuron0x1f336d0()*0.451267);
}

double NNfunction_ng_chi04::synapse0x1f35550() {
   return (neuron0x1f33a10()*-0.535211);
}

double NNfunction_ng_chi04::synapse0x1f35850() {
   return (neuron0x1f33d50()*-0.0826252);
}

double NNfunction_ng_chi04::synapse0x1f35890() {
   return (neuron0x1f34090()*0.114031);
}

double NNfunction_ng_chi04::synapse0x1f35b90() {
   return (neuron0x1f343d0()*-0.0202698);
}

double NNfunction_ng_chi04::synapse0x1f35bd0() {
   return (neuron0x1f34710()*-0.459368);
}

double NNfunction_ng_chi04::synapse0x1f35ed0() {
   return (neuron0x1f34c70()*0.147112);
}

double NNfunction_ng_chi04::synapse0x1f35f10() {
   return (neuron0x1f34fb0()*0.0300045);
}

double NNfunction_ng_chi04::synapse0x1f36210() {
   return (neuron0x1f352f0()*0.180683);
}

double NNfunction_ng_chi04::synapse0x1f36250() {
   return (neuron0x1f35630()*-0.0811228);
}

double NNfunction_ng_chi04::synapse0x1f33c30() {
   return (neuron0x1f35970()*-0.190748);
}

double NNfunction_ng_chi04::synapse0x1f33c70() {
   return (neuron0x1f35cb0()*-0.011704);
}

double NNfunction_ng_chi04::synapse0x1f43020() {
   return (neuron0x1f35ff0()*-0.184979);
}

double NNfunction_ng_chi04::synapse0x1f433a0() {
   return (neuron0x1f313a0()*-0.00867799);
}

double NNfunction_ng_chi04::synapse0x1f433e0() {
   return (neuron0x1f31650()*0.0451498);
}

double NNfunction_ng_chi04::synapse0x1f43420() {
   return (neuron0x1f31990()*0.0248584);
}

double NNfunction_ng_chi04::synapse0x1f43460() {
   return (neuron0x1f31cd0()*-3.00494);
}

double NNfunction_ng_chi04::synapse0x1f434a0() {
   return (neuron0x1f32010()*-0.00577666);
}

double NNfunction_ng_chi04::synapse0x1f434e0() {
   return (neuron0x1f32350()*0.0066144);
}

double NNfunction_ng_chi04::synapse0x1f43520() {
   return (neuron0x1f32690()*-0.00697895);
}

double NNfunction_ng_chi04::synapse0x1f43560() {
   return (neuron0x1f329d0()*-0.0117976);
}

double NNfunction_ng_chi04::synapse0x1f435a0() {
   return (neuron0x1f32d10()*-0.00486654);
}

double NNfunction_ng_chi04::synapse0x1f435e0() {
   return (neuron0x1f33050()*0.0239649);
}

double NNfunction_ng_chi04::synapse0x1f43620() {
   return (neuron0x1f33390()*0.013938);
}

double NNfunction_ng_chi04::synapse0x1f43660() {
   return (neuron0x1f336d0()*0.00891386);
}

double NNfunction_ng_chi04::synapse0x1f436a0() {
   return (neuron0x1f33a10()*0.00973317);
}

double NNfunction_ng_chi04::synapse0x1f436e0() {
   return (neuron0x1f33d50()*-0.016271);
}

double NNfunction_ng_chi04::synapse0x1f43720() {
   return (neuron0x1f34090()*-0.0401549);
}

double NNfunction_ng_chi04::synapse0x1f43760() {
   return (neuron0x1f343d0()*-0.000114277);
}

double NNfunction_ng_chi04::synapse0x1f431f0() {
   return (neuron0x1f34710()*0.0104303);
}

double NNfunction_ng_chi04::synapse0x1f43230() {
   return (neuron0x1f34c70()*-0.0426891);
}

double NNfunction_ng_chi04::synapse0x1f438b0() {
   return (neuron0x1f34fb0()*0.0221546);
}

double NNfunction_ng_chi04::synapse0x1f438f0() {
   return (neuron0x1f352f0()*-0.0219398);
}

double NNfunction_ng_chi04::synapse0x1f43930() {
   return (neuron0x1f35630()*-0.00905156);
}

double NNfunction_ng_chi04::synapse0x1f43970() {
   return (neuron0x1f35970()*-0.00188285);
}

double NNfunction_ng_chi04::synapse0x1f439b0() {
   return (neuron0x1f35cb0()*-0.00439339);
}

double NNfunction_ng_chi04::synapse0x1f439f0() {
   return (neuron0x1f35ff0()*0.117979);
}

double NNfunction_ng_chi04::synapse0x1f43d70() {
   return (neuron0x1f313a0()*0.0234339);
}

double NNfunction_ng_chi04::synapse0x1f43db0() {
   return (neuron0x1f31650()*-0.481627);
}

double NNfunction_ng_chi04::synapse0x1f43df0() {
   return (neuron0x1f31990()*-0.603981);
}

double NNfunction_ng_chi04::synapse0x1f43e30() {
   return (neuron0x1f31cd0()*0.0867062);
}

double NNfunction_ng_chi04::synapse0x1f43e70() {
   return (neuron0x1f32010()*7.22568e-05);
}

double NNfunction_ng_chi04::synapse0x1f43eb0() {
   return (neuron0x1f32350()*0.0349813);
}

double NNfunction_ng_chi04::synapse0x1f43ef0() {
   return (neuron0x1f32690()*0.0146695);
}

double NNfunction_ng_chi04::synapse0x1f43f30() {
   return (neuron0x1f329d0()*0.00541044);
}

double NNfunction_ng_chi04::synapse0x1f43f70() {
   return (neuron0x1f32d10()*0.0100411);
}

double NNfunction_ng_chi04::synapse0x1f43fb0() {
   return (neuron0x1f33050()*-0.0136965);
}

double NNfunction_ng_chi04::synapse0x1f43ff0() {
   return (neuron0x1f33390()*0.00810552);
}

double NNfunction_ng_chi04::synapse0x1f44030() {
   return (neuron0x1f336d0()*1.92378);
}

double NNfunction_ng_chi04::synapse0x1f44070() {
   return (neuron0x1f33a10()*-0.177228);
}

double NNfunction_ng_chi04::synapse0x1f440b0() {
   return (neuron0x1f33d50()*0.00817993);
}

double NNfunction_ng_chi04::synapse0x1f440f0() {
   return (neuron0x1f34090()*-0.123673);
}

double NNfunction_ng_chi04::synapse0x1f44130() {
   return (neuron0x1f343d0()*0.0202045);
}

double NNfunction_ng_chi04::synapse0x1f43bc0() {
   return (neuron0x1f34710()*0.0301189);
}

double NNfunction_ng_chi04::synapse0x1f43c00() {
   return (neuron0x1f34c70()*-0.0911694);
}

double NNfunction_ng_chi04::synapse0x1f44280() {
   return (neuron0x1f34fb0()*-0.0328286);
}

double NNfunction_ng_chi04::synapse0x1f442c0() {
   return (neuron0x1f352f0()*-0.0379917);
}

double NNfunction_ng_chi04::synapse0x1f44300() {
   return (neuron0x1f35630()*0.033411);
}

double NNfunction_ng_chi04::synapse0x1f44340() {
   return (neuron0x1f35970()*-0.0201689);
}

double NNfunction_ng_chi04::synapse0x1f44380() {
   return (neuron0x1f35cb0()*-0.00389033);
}

double NNfunction_ng_chi04::synapse0x1f443c0() {
   return (neuron0x1f35ff0()*-0.242351);
}

double NNfunction_ng_chi04::synapse0x1f44740() {
   return (neuron0x1f313a0()*0.13857);
}

double NNfunction_ng_chi04::synapse0x1f44780() {
   return (neuron0x1f31650()*-0.300503);
}

double NNfunction_ng_chi04::synapse0x1f447c0() {
   return (neuron0x1f31990()*3.71802);
}

double NNfunction_ng_chi04::synapse0x1f44800() {
   return (neuron0x1f31cd0()*0.0144518);
}

double NNfunction_ng_chi04::synapse0x1f44840() {
   return (neuron0x1f32010()*-0.00332028);
}

double NNfunction_ng_chi04::synapse0x1f44880() {
   return (neuron0x1f32350()*0.0459238);
}

double NNfunction_ng_chi04::synapse0x1f448c0() {
   return (neuron0x1f32690()*0.0135222);
}

double NNfunction_ng_chi04::synapse0x1f44900() {
   return (neuron0x1f329d0()*0.0381065);
}

double NNfunction_ng_chi04::synapse0x1f44940() {
   return (neuron0x1f32d10()*0.0150986);
}

double NNfunction_ng_chi04::synapse0x1f44980() {
   return (neuron0x1f33050()*0.0933184);
}

double NNfunction_ng_chi04::synapse0x1f449c0() {
   return (neuron0x1f33390()*-0.0102146);
}

double NNfunction_ng_chi04::synapse0x1f44a00() {
   return (neuron0x1f336d0()*-0.10561);
}

double NNfunction_ng_chi04::synapse0x1f44a40() {
   return (neuron0x1f33a10()*-0.0389339);
}

double NNfunction_ng_chi04::synapse0x1f44a80() {
   return (neuron0x1f33d50()*-0.0189934);
}

double NNfunction_ng_chi04::synapse0x1f44ac0() {
   return (neuron0x1f34090()*0.0755981);
}

double NNfunction_ng_chi04::synapse0x1f44b00() {
   return (neuron0x1f343d0()*0.00664345);
}

double NNfunction_ng_chi04::synapse0x1f44590() {
   return (neuron0x1f34710()*0.00980082);
}

double NNfunction_ng_chi04::synapse0x1f445d0() {
   return (neuron0x1f34c70()*0.0143293);
}

double NNfunction_ng_chi04::synapse0x1f44c50() {
   return (neuron0x1f34fb0()*-0.0247794);
}

double NNfunction_ng_chi04::synapse0x1f44c90() {
   return (neuron0x1f352f0()*-0.0245839);
}

double NNfunction_ng_chi04::synapse0x1f44cd0() {
   return (neuron0x1f35630()*0.0237985);
}

double NNfunction_ng_chi04::synapse0x1f44d10() {
   return (neuron0x1f35970()*0.00294671);
}

double NNfunction_ng_chi04::synapse0x1f44d50() {
   return (neuron0x1f35cb0()*0.0174711);
}

double NNfunction_ng_chi04::synapse0x1f44d90() {
   return (neuron0x1f35ff0()*3.44836);
}

double NNfunction_ng_chi04::synapse0x1f45110() {
   return (neuron0x1f313a0()*-0.501544);
}

double NNfunction_ng_chi04::synapse0x1f45150() {
   return (neuron0x1f31650()*-0.998273);
}

double NNfunction_ng_chi04::synapse0x1f45190() {
   return (neuron0x1f31990()*-1.0009);
}

double NNfunction_ng_chi04::synapse0x1f451d0() {
   return (neuron0x1f31cd0()*-1.09634);
}

double NNfunction_ng_chi04::synapse0x1f45210() {
   return (neuron0x1f32010()*-0.546974);
}

double NNfunction_ng_chi04::synapse0x1f45250() {
   return (neuron0x1f32350()*0.577632);
}

double NNfunction_ng_chi04::synapse0x1f45290() {
   return (neuron0x1f32690()*0.152212);
}

double NNfunction_ng_chi04::synapse0x1f452d0() {
   return (neuron0x1f329d0()*-0.40118);
}

double NNfunction_ng_chi04::synapse0x1f45310() {
   return (neuron0x1f32d10()*-0.108684);
}

double NNfunction_ng_chi04::synapse0x1f45350() {
   return (neuron0x1f33050()*0.0479644);
}

double NNfunction_ng_chi04::synapse0x1f45390() {
   return (neuron0x1f33390()*0.428912);
}

double NNfunction_ng_chi04::synapse0x1f453d0() {
   return (neuron0x1f336d0()*-0.0731491);
}

double NNfunction_ng_chi04::synapse0x1f45410() {
   return (neuron0x1f33a10()*-0.369125);
}

double NNfunction_ng_chi04::synapse0x1f45450() {
   return (neuron0x1f33d50()*0.382869);
}

double NNfunction_ng_chi04::synapse0x1f45490() {
   return (neuron0x1f34090()*-1.5276);
}

double NNfunction_ng_chi04::synapse0x1f454d0() {
   return (neuron0x1f343d0()*0.0381876);
}

double NNfunction_ng_chi04::synapse0x1f44f60() {
   return (neuron0x1f34710()*0.19357);
}

double NNfunction_ng_chi04::synapse0x1f44fa0() {
   return (neuron0x1f34c70()*0.322623);
}

double NNfunction_ng_chi04::synapse0x1f45620() {
   return (neuron0x1f34fb0()*-0.0677677);
}

double NNfunction_ng_chi04::synapse0x1f45660() {
   return (neuron0x1f352f0()*-0.117184);
}

double NNfunction_ng_chi04::synapse0x1f456a0() {
   return (neuron0x1f35630()*0.501911);
}

double NNfunction_ng_chi04::synapse0x1f456e0() {
   return (neuron0x1f35970()*0.427743);
}

double NNfunction_ng_chi04::synapse0x1f45720() {
   return (neuron0x1f35cb0()*-0.190555);
}

double NNfunction_ng_chi04::synapse0x1f45760() {
   return (neuron0x1f35ff0()*0.14759);
}

double NNfunction_ng_chi04::synapse0x1f45ae0() {
   return (neuron0x1f313a0()*-0.0248831);
}

double NNfunction_ng_chi04::synapse0x1f45b20() {
   return (neuron0x1f31650()*-0.0359808);
}

double NNfunction_ng_chi04::synapse0x1f45b60() {
   return (neuron0x1f31990()*-0.0797158);
}

double NNfunction_ng_chi04::synapse0x1f45ba0() {
   return (neuron0x1f31cd0()*-0.106492);
}

double NNfunction_ng_chi04::synapse0x1f45be0() {
   return (neuron0x1f32010()*0.134218);
}

double NNfunction_ng_chi04::synapse0x1f45c20() {
   return (neuron0x1f32350()*0.381449);
}

double NNfunction_ng_chi04::synapse0x1f45c60() {
   return (neuron0x1f32690()*0.11473);
}

double NNfunction_ng_chi04::synapse0x1f45ca0() {
   return (neuron0x1f329d0()*-0.210389);
}

double NNfunction_ng_chi04::synapse0x1f45ce0() {
   return (neuron0x1f32d10()*0.82018);
}

double NNfunction_ng_chi04::synapse0x1f3dea0() {
   return (neuron0x1f33050()*0.285639);
}

double NNfunction_ng_chi04::synapse0x1f3dee0() {
   return (neuron0x1f33390()*0.0585777);
}

double NNfunction_ng_chi04::synapse0x1f3df20() {
   return (neuron0x1f336d0()*1.41734);
}

double NNfunction_ng_chi04::synapse0x1f3df60() {
   return (neuron0x1f33a10()*0.848316);
}

double NNfunction_ng_chi04::synapse0x1f3dfa0() {
   return (neuron0x1f33d50()*-0.149523);
}

double NNfunction_ng_chi04::synapse0x1f3dfe0() {
   return (neuron0x1f34090()*0.837519);
}

double NNfunction_ng_chi04::synapse0x1f3e020() {
   return (neuron0x1f343d0()*-0.0104543);
}

double NNfunction_ng_chi04::synapse0x1f45930() {
   return (neuron0x1f34710()*-0.134283);
}

double NNfunction_ng_chi04::synapse0x1f45970() {
   return (neuron0x1f34c70()*0.76578);
}

double NNfunction_ng_chi04::synapse0x1f3e170() {
   return (neuron0x1f34fb0()*0.890222);
}

double NNfunction_ng_chi04::synapse0x1f3e1b0() {
   return (neuron0x1f352f0()*0.0539628);
}

double NNfunction_ng_chi04::synapse0x1f3e1f0() {
   return (neuron0x1f35630()*-0.58328);
}

double NNfunction_ng_chi04::synapse0x1f3e230() {
   return (neuron0x1f35970()*-0.186844);
}

double NNfunction_ng_chi04::synapse0x1f3e270() {
   return (neuron0x1f35cb0()*0.134339);
}

double NNfunction_ng_chi04::synapse0x1f3e2b0() {
   return (neuron0x1f35ff0()*-0.00578434);
}

double NNfunction_ng_chi04::synapse0x1f3e630() {
   return (neuron0x1f313a0()*0.0311273);
}

double NNfunction_ng_chi04::synapse0x1f3e670() {
   return (neuron0x1f31650()*-1.47691);
}

double NNfunction_ng_chi04::synapse0x1f3e6b0() {
   return (neuron0x1f31990()*-0.890976);
}

double NNfunction_ng_chi04::synapse0x1f3e6f0() {
   return (neuron0x1f31cd0()*-0.228037);
}

double NNfunction_ng_chi04::synapse0x1f3e730() {
   return (neuron0x1f32010()*-0.0205486);
}

double NNfunction_ng_chi04::synapse0x1f3e770() {
   return (neuron0x1f32350()*-0.0834092);
}

double NNfunction_ng_chi04::synapse0x1f3e7b0() {
   return (neuron0x1f32690()*0.0145825);
}

double NNfunction_ng_chi04::synapse0x1f3e7f0() {
   return (neuron0x1f329d0()*-0.00652063);
}

double NNfunction_ng_chi04::synapse0x1f3e830() {
   return (neuron0x1f32d10()*0.0585073);
}

double NNfunction_ng_chi04::synapse0x1f3e870() {
   return (neuron0x1f33050()*-0.0396778);
}

double NNfunction_ng_chi04::synapse0x1f3e8b0() {
   return (neuron0x1f33390()*0.0281233);
}

double NNfunction_ng_chi04::synapse0x1f3e8f0() {
   return (neuron0x1f336d0()*0.635672);
}

double NNfunction_ng_chi04::synapse0x1f3e930() {
   return (neuron0x1f33a10()*0.0339474);
}

double NNfunction_ng_chi04::synapse0x1f3e970() {
   return (neuron0x1f33d50()*-0.0541161);
}

double NNfunction_ng_chi04::synapse0x1f3e9b0() {
   return (neuron0x1f34090()*-0.451665);
}

double NNfunction_ng_chi04::synapse0x1f3e9f0() {
   return (neuron0x1f343d0()*-0.043437);
}

double NNfunction_ng_chi04::synapse0x1f3e480() {
   return (neuron0x1f34710()*0.0527479);
}

double NNfunction_ng_chi04::synapse0x1f3e4c0() {
   return (neuron0x1f34c70()*0.176591);
}

double NNfunction_ng_chi04::synapse0x1f3eb40() {
   return (neuron0x1f34fb0()*0.0381564);
}

double NNfunction_ng_chi04::synapse0x1f3eb80() {
   return (neuron0x1f352f0()*0.0116415);
}

double NNfunction_ng_chi04::synapse0x1f3ebc0() {
   return (neuron0x1f35630()*-0.0240457);
}

double NNfunction_ng_chi04::synapse0x1f3ec00() {
   return (neuron0x1f35970()*-0.0256006);
}

double NNfunction_ng_chi04::synapse0x1f3ec40() {
   return (neuron0x1f35cb0()*-0.0508412);
}

double NNfunction_ng_chi04::synapse0x1f3ec80() {
   return (neuron0x1f35ff0()*-0.169547);
}

double NNfunction_ng_chi04::synapse0x1f3ee50() {
   return (neuron0x1f313a0()*0.0570794);
}

double NNfunction_ng_chi04::synapse0x1f47ee0() {
   return (neuron0x1f31650()*-0.28445);
}

double NNfunction_ng_chi04::synapse0x1f47f20() {
   return (neuron0x1f31990()*0.081347);
}

double NNfunction_ng_chi04::synapse0x1f47f60() {
   return (neuron0x1f31cd0()*0.798886);
}

double NNfunction_ng_chi04::synapse0x1f47fa0() {
   return (neuron0x1f32010()*-0.0945342);
}

double NNfunction_ng_chi04::synapse0x1f47fe0() {
   return (neuron0x1f32350()*0.235769);
}

double NNfunction_ng_chi04::synapse0x1f48020() {
   return (neuron0x1f32690()*0.0241309);
}

double NNfunction_ng_chi04::synapse0x1f48060() {
   return (neuron0x1f329d0()*0.0149506);
}

double NNfunction_ng_chi04::synapse0x1f480a0() {
   return (neuron0x1f32d10()*-0.424978);
}

double NNfunction_ng_chi04::synapse0x1f480e0() {
   return (neuron0x1f33050()*0.0233927);
}

double NNfunction_ng_chi04::synapse0x1f48120() {
   return (neuron0x1f33390()*-0.13048);
}

double NNfunction_ng_chi04::synapse0x1f48160() {
   return (neuron0x1f336d0()*-0.723093);
}

double NNfunction_ng_chi04::synapse0x1f481a0() {
   return (neuron0x1f33a10()*-0.666521);
}

double NNfunction_ng_chi04::synapse0x1f481e0() {
   return (neuron0x1f33d50()*0.133661);
}

double NNfunction_ng_chi04::synapse0x1f48220() {
   return (neuron0x1f34090()*0.230077);
}

double NNfunction_ng_chi04::synapse0x1f48260() {
   return (neuron0x1f343d0()*-0.125543);
}

double NNfunction_ng_chi04::synapse0x1f47d30() {
   return (neuron0x1f34710()*-0.54833);
}

double NNfunction_ng_chi04::synapse0x1f47d70() {
   return (neuron0x1f34c70()*-0.0125777);
}

double NNfunction_ng_chi04::synapse0x1f483b0() {
   return (neuron0x1f34fb0()*-0.261075);
}

double NNfunction_ng_chi04::synapse0x1f483f0() {
   return (neuron0x1f352f0()*-0.0318596);
}

double NNfunction_ng_chi04::synapse0x1f48430() {
   return (neuron0x1f35630()*-0.29023);
}

double NNfunction_ng_chi04::synapse0x1f48470() {
   return (neuron0x1f35970()*0.029684);
}

double NNfunction_ng_chi04::synapse0x1f484b0() {
   return (neuron0x1f35cb0()*-0.112685);
}

double NNfunction_ng_chi04::synapse0x1f484f0() {
   return (neuron0x1f35ff0()*-0.339756);
}

double NNfunction_ng_chi04::synapse0x1f48870() {
   return (neuron0x1f313a0()*-0.029058);
}

double NNfunction_ng_chi04::synapse0x1f488b0() {
   return (neuron0x1f31650()*0.614238);
}

double NNfunction_ng_chi04::synapse0x1f488f0() {
   return (neuron0x1f31990()*0.385065);
}

double NNfunction_ng_chi04::synapse0x1f48930() {
   return (neuron0x1f31cd0()*0.00831529);
}

double NNfunction_ng_chi04::synapse0x1f48970() {
   return (neuron0x1f32010()*-0.010083);
}

double NNfunction_ng_chi04::synapse0x1f489b0() {
   return (neuron0x1f32350()*-0.00555794);
}

double NNfunction_ng_chi04::synapse0x1f489f0() {
   return (neuron0x1f32690()*-0.00861126);
}

double NNfunction_ng_chi04::synapse0x1f48a30() {
   return (neuron0x1f329d0()*0.00612319);
}

double NNfunction_ng_chi04::synapse0x1f48a70() {
   return (neuron0x1f32d10()*-0.00942556);
}

double NNfunction_ng_chi04::synapse0x1f48ab0() {
   return (neuron0x1f33050()*-0.00648826);
}

double NNfunction_ng_chi04::synapse0x1f48af0() {
   return (neuron0x1f33390()*-0.00588364);
}

double NNfunction_ng_chi04::synapse0x1f48b30() {
   return (neuron0x1f336d0()*-0.00249433);
}

double NNfunction_ng_chi04::synapse0x1f48b70() {
   return (neuron0x1f33a10()*0.0130576);
}

double NNfunction_ng_chi04::synapse0x1f48bb0() {
   return (neuron0x1f33d50()*-0.0175885);
}

double NNfunction_ng_chi04::synapse0x1f48bf0() {
   return (neuron0x1f34090()*0.00422354);
}

double NNfunction_ng_chi04::synapse0x1f48c30() {
   return (neuron0x1f343d0()*0.00584968);
}

double NNfunction_ng_chi04::synapse0x1f486c0() {
   return (neuron0x1f34710()*-0.00160754);
}

double NNfunction_ng_chi04::synapse0x1f48700() {
   return (neuron0x1f34c70()*-0.00755607);
}

double NNfunction_ng_chi04::synapse0x1f48d80() {
   return (neuron0x1f34fb0()*0.00769593);
}

double NNfunction_ng_chi04::synapse0x1f48dc0() {
   return (neuron0x1f352f0()*0.0111394);
}

double NNfunction_ng_chi04::synapse0x1f48e00() {
   return (neuron0x1f35630()*-0.0204695);
}

double NNfunction_ng_chi04::synapse0x1f48e40() {
   return (neuron0x1f35970()*-0.00733406);
}

double NNfunction_ng_chi04::synapse0x1f48e80() {
   return (neuron0x1f35cb0()*-0.00502845);
}

double NNfunction_ng_chi04::synapse0x1f48ec0() {
   return (neuron0x1f35ff0()*0.620297);
}

double NNfunction_ng_chi04::synapse0x1f49240() {
   return (neuron0x1f313a0()*0.0577123);
}

double NNfunction_ng_chi04::synapse0x1f49280() {
   return (neuron0x1f31650()*3.53686);
}

double NNfunction_ng_chi04::synapse0x1f492c0() {
   return (neuron0x1f31990()*2.38612);
}

double NNfunction_ng_chi04::synapse0x1f49300() {
   return (neuron0x1f31cd0()*-0.0054558);
}

double NNfunction_ng_chi04::synapse0x1f49340() {
   return (neuron0x1f32010()*0.0140053);
}

double NNfunction_ng_chi04::synapse0x1f49380() {
   return (neuron0x1f32350()*-0.0275388);
}

double NNfunction_ng_chi04::synapse0x1f493c0() {
   return (neuron0x1f32690()*0.0407227);
}

double NNfunction_ng_chi04::synapse0x1f49400() {
   return (neuron0x1f329d0()*0.011171);
}

double NNfunction_ng_chi04::synapse0x1f49440() {
   return (neuron0x1f32d10()*-0.0179582);
}

double NNfunction_ng_chi04::synapse0x1f49480() {
   return (neuron0x1f33050()*0.00157878);
}

double NNfunction_ng_chi04::synapse0x1f494c0() {
   return (neuron0x1f33390()*-0.0185661);
}

double NNfunction_ng_chi04::synapse0x1f49500() {
   return (neuron0x1f336d0()*0.196461);
}

double NNfunction_ng_chi04::synapse0x1f49540() {
   return (neuron0x1f33a10()*0.050458);
}

double NNfunction_ng_chi04::synapse0x1f49580() {
   return (neuron0x1f33d50()*0.0170538);
}

double NNfunction_ng_chi04::synapse0x1f495c0() {
   return (neuron0x1f34090()*-0.122992);
}

double NNfunction_ng_chi04::synapse0x1f49600() {
   return (neuron0x1f343d0()*-0.042059);
}

double NNfunction_ng_chi04::synapse0x1f49090() {
   return (neuron0x1f34710()*0.0454939);
}

double NNfunction_ng_chi04::synapse0x1f490d0() {
   return (neuron0x1f34c70()*-0.0536412);
}

double NNfunction_ng_chi04::synapse0x1f49750() {
   return (neuron0x1f34fb0()*0.0076467);
}

double NNfunction_ng_chi04::synapse0x1f49790() {
   return (neuron0x1f352f0()*-0.0197807);
}

double NNfunction_ng_chi04::synapse0x1f497d0() {
   return (neuron0x1f35630()*0.00303606);
}

double NNfunction_ng_chi04::synapse0x1f49810() {
   return (neuron0x1f35970()*0.00670761);
}

double NNfunction_ng_chi04::synapse0x1f49850() {
   return (neuron0x1f35cb0()*-0.00414724);
}

double NNfunction_ng_chi04::synapse0x1f49890() {
   return (neuron0x1f35ff0()*2.35785);
}

double NNfunction_ng_chi04::synapse0x1f49c10() {
   return (neuron0x1f313a0()*0.0657053);
}

double NNfunction_ng_chi04::synapse0x1f49c50() {
   return (neuron0x1f31650()*6.05481);
}

double NNfunction_ng_chi04::synapse0x1f49c90() {
   return (neuron0x1f31990()*3.8992);
}

double NNfunction_ng_chi04::synapse0x1f49cd0() {
   return (neuron0x1f31cd0()*-0.0785675);
}

double NNfunction_ng_chi04::synapse0x1f49d10() {
   return (neuron0x1f32010()*0.010345);
}

double NNfunction_ng_chi04::synapse0x1f49d50() {
   return (neuron0x1f32350()*0.0326208);
}

double NNfunction_ng_chi04::synapse0x1f49d90() {
   return (neuron0x1f32690()*0.0230469);
}

double NNfunction_ng_chi04::synapse0x1f49dd0() {
   return (neuron0x1f329d0()*0.0165458);
}

double NNfunction_ng_chi04::synapse0x1f49e10() {
   return (neuron0x1f32d10()*-0.0186743);
}

double NNfunction_ng_chi04::synapse0x1f49e50() {
   return (neuron0x1f33050()*0.00338198);
}

double NNfunction_ng_chi04::synapse0x1f49e90() {
   return (neuron0x1f33390()*-0.00210106);
}

double NNfunction_ng_chi04::synapse0x1f49ed0() {
   return (neuron0x1f336d0()*-0.0405547);
}

double NNfunction_ng_chi04::synapse0x1f49f10() {
   return (neuron0x1f33a10()*-0.00776133);
}

double NNfunction_ng_chi04::synapse0x1f49f50() {
   return (neuron0x1f33d50()*0.0176421);
}

double NNfunction_ng_chi04::synapse0x1f49f90() {
   return (neuron0x1f34090()*0.145455);
}

double NNfunction_ng_chi04::synapse0x1f49fd0() {
   return (neuron0x1f343d0()*0.0342074);
}

double NNfunction_ng_chi04::synapse0x1f49a60() {
   return (neuron0x1f34710()*0.00887106);
}

double NNfunction_ng_chi04::synapse0x1f49aa0() {
   return (neuron0x1f34c70()*-0.00762178);
}

double NNfunction_ng_chi04::synapse0x1f4a120() {
   return (neuron0x1f34fb0()*-0.0195214);
}

double NNfunction_ng_chi04::synapse0x1f4a160() {
   return (neuron0x1f352f0()*0.0112338);
}

double NNfunction_ng_chi04::synapse0x1f4a1a0() {
   return (neuron0x1f35630()*0.0134685);
}

double NNfunction_ng_chi04::synapse0x1f4a1e0() {
   return (neuron0x1f35970()*0.0461016);
}

double NNfunction_ng_chi04::synapse0x1f4a220() {
   return (neuron0x1f35cb0()*-0.0201326);
}

double NNfunction_ng_chi04::synapse0x1f4a260() {
   return (neuron0x1f35ff0()*0.524833);
}

double NNfunction_ng_chi04::synapse0x1f4a5e0() {
   return (neuron0x1f313a0()*-0.0907586);
}

double NNfunction_ng_chi04::synapse0x1f4a620() {
   return (neuron0x1f31650()*-0.411803);
}

double NNfunction_ng_chi04::synapse0x1f4a660() {
   return (neuron0x1f31990()*-0.232977);
}

double NNfunction_ng_chi04::synapse0x1f4a6a0() {
   return (neuron0x1f31cd0()*-2.86349);
}

double NNfunction_ng_chi04::synapse0x1f4a6e0() {
   return (neuron0x1f32010()*-0.00600156);
}

double NNfunction_ng_chi04::synapse0x1f4a720() {
   return (neuron0x1f32350()*-0.102981);
}

double NNfunction_ng_chi04::synapse0x1f4a760() {
   return (neuron0x1f32690()*0.0534917);
}

double NNfunction_ng_chi04::synapse0x1f4a7a0() {
   return (neuron0x1f329d0()*-0.074346);
}

double NNfunction_ng_chi04::synapse0x1f4a7e0() {
   return (neuron0x1f32d10()*-0.0587977);
}

double NNfunction_ng_chi04::synapse0x1f4a820() {
   return (neuron0x1f33050()*-0.04443);
}

double NNfunction_ng_chi04::synapse0x1f4a860() {
   return (neuron0x1f33390()*0.0320786);
}

double NNfunction_ng_chi04::synapse0x1f4a8a0() {
   return (neuron0x1f336d0()*1.5692);
}

double NNfunction_ng_chi04::synapse0x1f4a8e0() {
   return (neuron0x1f33a10()*-0.401812);
}

double NNfunction_ng_chi04::synapse0x1f4a920() {
   return (neuron0x1f33d50()*-0.14646);
}

double NNfunction_ng_chi04::synapse0x1f4a960() {
   return (neuron0x1f34090()*-0.0424324);
}

double NNfunction_ng_chi04::synapse0x1f4a9a0() {
   return (neuron0x1f343d0()*-0.0173489);
}

double NNfunction_ng_chi04::synapse0x1f4a430() {
   return (neuron0x1f34710()*0.00976024);
}

double NNfunction_ng_chi04::synapse0x1f4a470() {
   return (neuron0x1f34c70()*-0.00317859);
}

double NNfunction_ng_chi04::synapse0x1f4aaf0() {
   return (neuron0x1f34fb0()*-0.0958934);
}

double NNfunction_ng_chi04::synapse0x1f4ab30() {
   return (neuron0x1f352f0()*-0.00663865);
}

double NNfunction_ng_chi04::synapse0x1f4ab70() {
   return (neuron0x1f35630()*-0.00313767);
}

double NNfunction_ng_chi04::synapse0x1f4abb0() {
   return (neuron0x1f35970()*-0.0459043);
}

double NNfunction_ng_chi04::synapse0x1f4abf0() {
   return (neuron0x1f35cb0()*-0.027737);
}

double NNfunction_ng_chi04::synapse0x1f4ac30() {
   return (neuron0x1f35ff0()*-0.090319);
}

double NNfunction_ng_chi04::synapse0x1f4afb0() {
   return (neuron0x1f313a0()*0.113912);
}

double NNfunction_ng_chi04::synapse0x1f4aff0() {
   return (neuron0x1f31650()*0.49974);
}

double NNfunction_ng_chi04::synapse0x1f4b030() {
   return (neuron0x1f31990()*-0.523853);
}

double NNfunction_ng_chi04::synapse0x1f4b070() {
   return (neuron0x1f31cd0()*-0.0276123);
}

double NNfunction_ng_chi04::synapse0x1f4b0b0() {
   return (neuron0x1f32010()*0.00447954);
}

double NNfunction_ng_chi04::synapse0x1f4b0f0() {
   return (neuron0x1f32350()*-0.00364849);
}

double NNfunction_ng_chi04::synapse0x1f4b130() {
   return (neuron0x1f32690()*0.00610472);
}

double NNfunction_ng_chi04::synapse0x1f4b170() {
   return (neuron0x1f329d0()*-0.00317467);
}

double NNfunction_ng_chi04::synapse0x1f4b1b0() {
   return (neuron0x1f32d10()*0.0562794);
}

double NNfunction_ng_chi04::synapse0x1f4b1f0() {
   return (neuron0x1f33050()*0.0257553);
}

double NNfunction_ng_chi04::synapse0x1f4b230() {
   return (neuron0x1f33390()*-0.0209245);
}

double NNfunction_ng_chi04::synapse0x1f4b270() {
   return (neuron0x1f336d0()*0.0365091);
}

double NNfunction_ng_chi04::synapse0x1f4b2b0() {
   return (neuron0x1f33a10()*-0.0167967);
}

double NNfunction_ng_chi04::synapse0x1f4b2f0() {
   return (neuron0x1f33d50()*-0.0303528);
}

double NNfunction_ng_chi04::synapse0x1f4b330() {
   return (neuron0x1f34090()*-0.0581884);
}

double NNfunction_ng_chi04::synapse0x1f4b370() {
   return (neuron0x1f343d0()*-0.0346814);
}

double NNfunction_ng_chi04::synapse0x1f4ae00() {
   return (neuron0x1f34710()*-0.0274053);
}

double NNfunction_ng_chi04::synapse0x1f4ae40() {
   return (neuron0x1f34c70()*-0.320346);
}

double NNfunction_ng_chi04::synapse0x1f4b4c0() {
   return (neuron0x1f34fb0()*-0.0108933);
}

double NNfunction_ng_chi04::synapse0x1f4b500() {
   return (neuron0x1f352f0()*0.0209117);
}

double NNfunction_ng_chi04::synapse0x1f4b540() {
   return (neuron0x1f35630()*0.0128587);
}

double NNfunction_ng_chi04::synapse0x1f4b580() {
   return (neuron0x1f35970()*-0.00049073);
}

double NNfunction_ng_chi04::synapse0x1f4b5c0() {
   return (neuron0x1f35cb0()*0.00305022);
}

double NNfunction_ng_chi04::synapse0x1f4b600() {
   return (neuron0x1f35ff0()*-0.911381);
}

double NNfunction_ng_chi04::synapse0x1f4b980() {
   return (neuron0x1f313a0()*0.0208619);
}

double NNfunction_ng_chi04::synapse0x1f4b9c0() {
   return (neuron0x1f31650()*-0.777597);
}

double NNfunction_ng_chi04::synapse0x1f4ba00() {
   return (neuron0x1f31990()*-0.243429);
}

double NNfunction_ng_chi04::synapse0x1f4ba40() {
   return (neuron0x1f31cd0()*-2.53926);
}

double NNfunction_ng_chi04::synapse0x1f4ba80() {
   return (neuron0x1f32010()*0.0134592);
}

double NNfunction_ng_chi04::synapse0x1f4bac0() {
   return (neuron0x1f32350()*0.0179991);
}

double NNfunction_ng_chi04::synapse0x1f4bb00() {
   return (neuron0x1f32690()*-0.0495458);
}

double NNfunction_ng_chi04::synapse0x1f4bb40() {
   return (neuron0x1f329d0()*0.0673053);
}

double NNfunction_ng_chi04::synapse0x1f4bb80() {
   return (neuron0x1f32d10()*0.000362882);
}

double NNfunction_ng_chi04::synapse0x1f4bbc0() {
   return (neuron0x1f33050()*0.000895587);
}

double NNfunction_ng_chi04::synapse0x1f4bc00() {
   return (neuron0x1f33390()*-0.00390433);
}

double NNfunction_ng_chi04::synapse0x1f4bc40() {
   return (neuron0x1f336d0()*0.318519);
}

double NNfunction_ng_chi04::synapse0x1f4bc80() {
   return (neuron0x1f33a10()*0.0792732);
}

double NNfunction_ng_chi04::synapse0x1f4bcc0() {
   return (neuron0x1f33d50()*-0.0827088);
}

double NNfunction_ng_chi04::synapse0x1f4bd00() {
   return (neuron0x1f34090()*-0.109436);
}

double NNfunction_ng_chi04::synapse0x1f4bd40() {
   return (neuron0x1f343d0()*-0.0145966);
}

double NNfunction_ng_chi04::synapse0x1f4b7d0() {
   return (neuron0x1f34710()*-0.0272921);
}

double NNfunction_ng_chi04::synapse0x1f4b810() {
   return (neuron0x1f34c70()*-0.127073);
}

double NNfunction_ng_chi04::synapse0x1f4be90() {
   return (neuron0x1f34fb0()*0.0354181);
}

double NNfunction_ng_chi04::synapse0x1f4bed0() {
   return (neuron0x1f352f0()*0.0201161);
}

double NNfunction_ng_chi04::synapse0x1f4bf10() {
   return (neuron0x1f35630()*-0.0242628);
}

double NNfunction_ng_chi04::synapse0x1f4bf50() {
   return (neuron0x1f35970()*-0.0686417);
}

double NNfunction_ng_chi04::synapse0x1f4bf90() {
   return (neuron0x1f35cb0()*0.0266332);
}

double NNfunction_ng_chi04::synapse0x1f4bfd0() {
   return (neuron0x1f35ff0()*0.0466026);
}

double NNfunction_ng_chi04::synapse0x1f4c350() {
   return (neuron0x1f313a0()*-0.0234222);
}

double NNfunction_ng_chi04::synapse0x1f4c390() {
   return (neuron0x1f31650()*-1.41415);
}

double NNfunction_ng_chi04::synapse0x1f4c3d0() {
   return (neuron0x1f31990()*-0.872838);
}

double NNfunction_ng_chi04::synapse0x1f4c410() {
   return (neuron0x1f31cd0()*-0.986092);
}

double NNfunction_ng_chi04::synapse0x1f4c450() {
   return (neuron0x1f32010()*0.0312743);
}

double NNfunction_ng_chi04::synapse0x1f4c490() {
   return (neuron0x1f32350()*-0.032878);
}

double NNfunction_ng_chi04::synapse0x1f4c4d0() {
   return (neuron0x1f32690()*-0.0146531);
}

double NNfunction_ng_chi04::synapse0x1f4c510() {
   return (neuron0x1f329d0()*-0.0171495);
}

double NNfunction_ng_chi04::synapse0x1f4c550() {
   return (neuron0x1f32d10()*0.0125385);
}

double NNfunction_ng_chi04::synapse0x1f4c590() {
   return (neuron0x1f33050()*-0.0575344);
}

double NNfunction_ng_chi04::synapse0x1f4c5d0() {
   return (neuron0x1f33390()*-0.0459492);
}

double NNfunction_ng_chi04::synapse0x1f4c610() {
   return (neuron0x1f336d0()*0.0705342);
}

double NNfunction_ng_chi04::synapse0x1f4c650() {
   return (neuron0x1f33a10()*-0.0731784);
}

double NNfunction_ng_chi04::synapse0x1f4c690() {
   return (neuron0x1f33d50()*0.0139742);
}

double NNfunction_ng_chi04::synapse0x1f4c6d0() {
   return (neuron0x1f34090()*0.18833);
}

double NNfunction_ng_chi04::synapse0x1f4c710() {
   return (neuron0x1f343d0()*-0.00930114);
}

double NNfunction_ng_chi04::synapse0x1f4c1a0() {
   return (neuron0x1f34710()*0.020425);
}

double NNfunction_ng_chi04::synapse0x1f4c1e0() {
   return (neuron0x1f34c70()*0.0443479);
}

double NNfunction_ng_chi04::synapse0x1f4c860() {
   return (neuron0x1f34fb0()*0.0249079);
}

double NNfunction_ng_chi04::synapse0x1f4c8a0() {
   return (neuron0x1f352f0()*-0.0264676);
}

double NNfunction_ng_chi04::synapse0x1f4c8e0() {
   return (neuron0x1f35630()*-0.0240869);
}

double NNfunction_ng_chi04::synapse0x1f4c920() {
   return (neuron0x1f35970()*-0.0255554);
}

double NNfunction_ng_chi04::synapse0x1f4c960() {
   return (neuron0x1f35cb0()*0.0312719);
}

double NNfunction_ng_chi04::synapse0x1f4c9a0() {
   return (neuron0x1f35ff0()*0.485521);
}

double NNfunction_ng_chi04::synapse0x1f4cd20() {
   return (neuron0x1f313a0()*-0.0975607);
}

double NNfunction_ng_chi04::synapse0x1f412f0() {
   return (neuron0x1f31650()*0.423705);
}

double NNfunction_ng_chi04::synapse0x1f41330() {
   return (neuron0x1f31990()*0.136714);
}

double NNfunction_ng_chi04::synapse0x1f41370() {
   return (neuron0x1f31cd0()*5.80741);
}

double NNfunction_ng_chi04::synapse0x1f415c0() {
   return (neuron0x1f32010()*-0.0881879);
}

double NNfunction_ng_chi04::synapse0x1f41600() {
   return (neuron0x1f32350()*-0.11581);
}

double NNfunction_ng_chi04::synapse0x1f41640() {
   return (neuron0x1f32690()*-0.0240086);
}

double NNfunction_ng_chi04::synapse0x1f41890() {
   return (neuron0x1f329d0()*0.0168246);
}

double NNfunction_ng_chi04::synapse0x1f418d0() {
   return (neuron0x1f32d10()*0.0115198);
}

double NNfunction_ng_chi04::synapse0x1f41b20() {
   return (neuron0x1f33050()*0.00793947);
}

double NNfunction_ng_chi04::synapse0x1f41b60() {
   return (neuron0x1f33390()*0.0148128);
}

double NNfunction_ng_chi04::synapse0x1f41ba0() {
   return (neuron0x1f336d0()*0.59702);
}

double NNfunction_ng_chi04::synapse0x1f41df0() {
   return (neuron0x1f33a10()*-0.289562);
}

double NNfunction_ng_chi04::synapse0x1f41e30() {
   return (neuron0x1f33d50()*-0.14658);
}

double NNfunction_ng_chi04::synapse0x1f42080() {
   return (neuron0x1f34090()*-0.313324);
}

double NNfunction_ng_chi04::synapse0x1f420c0() {
   return (neuron0x1f343d0()*-0.0964121);
}

double NNfunction_ng_chi04::synapse0x1f4cb70() {
   return (neuron0x1f34710()*0.00560567);
}

double NNfunction_ng_chi04::synapse0x1f4cbb0() {
   return (neuron0x1f34c70()*-0.239128);
}

double NNfunction_ng_chi04::synapse0x1f42210() {
   return (neuron0x1f34fb0()*-0.0268606);
}

double NNfunction_ng_chi04::synapse0x1f42720() {
   return (neuron0x1f352f0()*0.0634541);
}

double NNfunction_ng_chi04::synapse0x1f42760() {
   return (neuron0x1f35630()*-0.123986);
}

double NNfunction_ng_chi04::synapse0x1f427a0() {
   return (neuron0x1f35970()*-0.00876344);
}

double NNfunction_ng_chi04::synapse0x1f429f0() {
   return (neuron0x1f35cb0()*0.0208018);
}

double NNfunction_ng_chi04::synapse0x1f42a30() {
   return (neuron0x1f35ff0()*0.260221);
}

double NNfunction_ng_chi04::synapse0x1f422e0() {
   return (neuron0x1f313a0()*0.155631);
}

double NNfunction_ng_chi04::synapse0x1f42320() {
   return (neuron0x1f31650()*0.18704);
}

double NNfunction_ng_chi04::synapse0x1f42360() {
   return (neuron0x1f31990()*1.19353);
}

double NNfunction_ng_chi04::synapse0x1f423a0() {
   return (neuron0x1f31cd0()*0.989024);
}

double NNfunction_ng_chi04::synapse0x1f42d20() {
   return (neuron0x1f32010()*0.22535);
}

double NNfunction_ng_chi04::synapse0x1f4f070() {
   return (neuron0x1f32350()*0.225633);
}

double NNfunction_ng_chi04::synapse0x1f4f0b0() {
   return (neuron0x1f32690()*-0.00900212);
}

double NNfunction_ng_chi04::synapse0x1f4f0f0() {
   return (neuron0x1f329d0()*0.0483866);
}

double NNfunction_ng_chi04::synapse0x1f4f130() {
   return (neuron0x1f32d10()*-0.0102252);
}

double NNfunction_ng_chi04::synapse0x1f4f170() {
   return (neuron0x1f33050()*0.0521242);
}

double NNfunction_ng_chi04::synapse0x1f4f1b0() {
   return (neuron0x1f33390()*0.28603);
}

double NNfunction_ng_chi04::synapse0x1f4f1f0() {
   return (neuron0x1f336d0()*0.546221);
}

double NNfunction_ng_chi04::synapse0x1f4f230() {
   return (neuron0x1f33a10()*0.139014);
}

double NNfunction_ng_chi04::synapse0x1f4f270() {
   return (neuron0x1f33d50()*-0.0643088);
}

double NNfunction_ng_chi04::synapse0x1f4f2b0() {
   return (neuron0x1f34090()*-1.06468);
}

double NNfunction_ng_chi04::synapse0x1f4f2f0() {
   return (neuron0x1f343d0()*0.0395158);
}

double NNfunction_ng_chi04::synapse0x1f42c00() {
   return (neuron0x1f34710()*-0.101365);
}

double NNfunction_ng_chi04::synapse0x1f42c40() {
   return (neuron0x1f34c70()*0.376761);
}

double NNfunction_ng_chi04::synapse0x1f4f440() {
   return (neuron0x1f34fb0()*-0.0175039);
}

double NNfunction_ng_chi04::synapse0x1f4f480() {
   return (neuron0x1f352f0()*-0.0178355);
}

double NNfunction_ng_chi04::synapse0x1f4f4c0() {
   return (neuron0x1f35630()*0.260342);
}

double NNfunction_ng_chi04::synapse0x1f4f500() {
   return (neuron0x1f35970()*0.0966011);
}

double NNfunction_ng_chi04::synapse0x1f4f540() {
   return (neuron0x1f35cb0()*0.32877);
}

double NNfunction_ng_chi04::synapse0x1f4f580() {
   return (neuron0x1f35ff0()*0.898642);
}

double NNfunction_ng_chi04::synapse0x1f4f900() {
   return (neuron0x1f313a0()*-0.0192391);
}

double NNfunction_ng_chi04::synapse0x1f4f940() {
   return (neuron0x1f31650()*-1.17636);
}

double NNfunction_ng_chi04::synapse0x1f4f980() {
   return (neuron0x1f31990()*0.307382);
}

double NNfunction_ng_chi04::synapse0x1f4f9c0() {
   return (neuron0x1f31cd0()*-0.831709);
}

double NNfunction_ng_chi04::synapse0x1f4fa00() {
   return (neuron0x1f32010()*0.0114723);
}

double NNfunction_ng_chi04::synapse0x1f4fa40() {
   return (neuron0x1f32350()*0.00452798);
}

double NNfunction_ng_chi04::synapse0x1f4fa80() {
   return (neuron0x1f32690()*0.00726058);
}

double NNfunction_ng_chi04::synapse0x1f4fac0() {
   return (neuron0x1f329d0()*0.00953156);
}

double NNfunction_ng_chi04::synapse0x1f4fb00() {
   return (neuron0x1f32d10()*-0.0150375);
}

double NNfunction_ng_chi04::synapse0x1f4fb40() {
   return (neuron0x1f33050()*-0.000157638);
}

double NNfunction_ng_chi04::synapse0x1f4fb80() {
   return (neuron0x1f33390()*0.0163449);
}

double NNfunction_ng_chi04::synapse0x1f4fbc0() {
   return (neuron0x1f336d0()*0.106971);
}

double NNfunction_ng_chi04::synapse0x1f4fc00() {
   return (neuron0x1f33a10()*0.0288776);
}

double NNfunction_ng_chi04::synapse0x1f4fc40() {
   return (neuron0x1f33d50()*-0.0289184);
}

double NNfunction_ng_chi04::synapse0x1f4fc80() {
   return (neuron0x1f34090()*0.248391);
}

double NNfunction_ng_chi04::synapse0x1f4fcc0() {
   return (neuron0x1f343d0()*0.0284839);
}

double NNfunction_ng_chi04::synapse0x1f4f750() {
   return (neuron0x1f34710()*-0.0155768);
}

double NNfunction_ng_chi04::synapse0x1f4f790() {
   return (neuron0x1f34c70()*0.0271758);
}

double NNfunction_ng_chi04::synapse0x1f4fe10() {
   return (neuron0x1f34fb0()*-0.00999426);
}

double NNfunction_ng_chi04::synapse0x1f4fe50() {
   return (neuron0x1f352f0()*0.00480883);
}

double NNfunction_ng_chi04::synapse0x1f4fe90() {
   return (neuron0x1f35630()*0.00355407);
}

double NNfunction_ng_chi04::synapse0x1f4fed0() {
   return (neuron0x1f35970()*-0.00199828);
}

double NNfunction_ng_chi04::synapse0x1f4ff10() {
   return (neuron0x1f35cb0()*0.0105544);
}

double NNfunction_ng_chi04::synapse0x1f4ff50() {
   return (neuron0x1f35ff0()*-0.133291);
}

double NNfunction_ng_chi04::synapse0x1f502d0() {
   return (neuron0x1f313a0()*-0.479448);
}

double NNfunction_ng_chi04::synapse0x1f50310() {
   return (neuron0x1f31650()*0.431175);
}

double NNfunction_ng_chi04::synapse0x1f50350() {
   return (neuron0x1f31990()*1.72082);
}

double NNfunction_ng_chi04::synapse0x1f50390() {
   return (neuron0x1f31cd0()*1.49113);
}

double NNfunction_ng_chi04::synapse0x1f503d0() {
   return (neuron0x1f32010()*-0.00666419);
}

double NNfunction_ng_chi04::synapse0x1f50410() {
   return (neuron0x1f32350()*0.298646);
}

double NNfunction_ng_chi04::synapse0x1f50450() {
   return (neuron0x1f32690()*0.0994913);
}

double NNfunction_ng_chi04::synapse0x1f50490() {
   return (neuron0x1f329d0()*0.181598);
}

double NNfunction_ng_chi04::synapse0x1f504d0() {
   return (neuron0x1f32d10()*-0.139088);
}

double NNfunction_ng_chi04::synapse0x1f50510() {
   return (neuron0x1f33050()*0.292732);
}

double NNfunction_ng_chi04::synapse0x1f50550() {
   return (neuron0x1f33390()*0.149075);
}

double NNfunction_ng_chi04::synapse0x1f50590() {
   return (neuron0x1f336d0()*0.652433);
}

double NNfunction_ng_chi04::synapse0x1f505d0() {
   return (neuron0x1f33a10()*0.344401);
}

double NNfunction_ng_chi04::synapse0x1f50610() {
   return (neuron0x1f33d50()*-0.558225);
}

double NNfunction_ng_chi04::synapse0x1f50650() {
   return (neuron0x1f34090()*0.205365);
}

double NNfunction_ng_chi04::synapse0x1f50690() {
   return (neuron0x1f343d0()*0.273637);
}

double NNfunction_ng_chi04::synapse0x1f50120() {
   return (neuron0x1f34710()*-0.0482469);
}

double NNfunction_ng_chi04::synapse0x1f50160() {
   return (neuron0x1f34c70()*-0.475988);
}

double NNfunction_ng_chi04::synapse0x1f507e0() {
   return (neuron0x1f34fb0()*-0.0711951);
}

double NNfunction_ng_chi04::synapse0x1f50820() {
   return (neuron0x1f352f0()*-0.0402034);
}

double NNfunction_ng_chi04::synapse0x1f50860() {
   return (neuron0x1f35630()*-0.147493);
}

double NNfunction_ng_chi04::synapse0x1f508a0() {
   return (neuron0x1f35970()*-0.232411);
}

double NNfunction_ng_chi04::synapse0x1f508e0() {
   return (neuron0x1f35cb0()*-0.205697);
}

double NNfunction_ng_chi04::synapse0x1f50920() {
   return (neuron0x1f35ff0()*-0.362515);
}

double NNfunction_ng_chi04::synapse0x1f50ca0() {
   return (neuron0x1f313a0()*0.0498704);
}

double NNfunction_ng_chi04::synapse0x1f50ce0() {
   return (neuron0x1f31650()*-2.20478);
}

double NNfunction_ng_chi04::synapse0x1f50d20() {
   return (neuron0x1f31990()*1.76016);
}

double NNfunction_ng_chi04::synapse0x1f50d60() {
   return (neuron0x1f31cd0()*-1.60549);
}

double NNfunction_ng_chi04::synapse0x1f50da0() {
   return (neuron0x1f32010()*0.092525);
}

double NNfunction_ng_chi04::synapse0x1f50de0() {
   return (neuron0x1f32350()*-0.00806217);
}

double NNfunction_ng_chi04::synapse0x1f50e20() {
   return (neuron0x1f32690()*-0.106101);
}

double NNfunction_ng_chi04::synapse0x1f50e60() {
   return (neuron0x1f329d0()*0.0552685);
}

double NNfunction_ng_chi04::synapse0x1f50ea0() {
   return (neuron0x1f32d10()*-0.00572379);
}

double NNfunction_ng_chi04::synapse0x1f50ee0() {
   return (neuron0x1f33050()*-0.0475859);
}

double NNfunction_ng_chi04::synapse0x1f50f20() {
   return (neuron0x1f33390()*-0.0380546);
}

double NNfunction_ng_chi04::synapse0x1f50f60() {
   return (neuron0x1f336d0()*-0.879469);
}

double NNfunction_ng_chi04::synapse0x1f50fa0() {
   return (neuron0x1f33a10()*0.28778);
}

double NNfunction_ng_chi04::synapse0x1f50fe0() {
   return (neuron0x1f33d50()*0.0514343);
}

double NNfunction_ng_chi04::synapse0x1f51020() {
   return (neuron0x1f34090()*0.236406);
}

double NNfunction_ng_chi04::synapse0x1f51060() {
   return (neuron0x1f343d0()*0.0477597);
}

double NNfunction_ng_chi04::synapse0x1f50af0() {
   return (neuron0x1f34710()*0.0539473);
}

double NNfunction_ng_chi04::synapse0x1f50b30() {
   return (neuron0x1f34c70()*0.11808);
}

double NNfunction_ng_chi04::synapse0x1f511b0() {
   return (neuron0x1f34fb0()*-0.110088);
}

double NNfunction_ng_chi04::synapse0x1f511f0() {
   return (neuron0x1f352f0()*-0.121545);
}

double NNfunction_ng_chi04::synapse0x1f51230() {
   return (neuron0x1f35630()*-0.0929025);
}

double NNfunction_ng_chi04::synapse0x1f51270() {
   return (neuron0x1f35970()*-0.0869999);
}

double NNfunction_ng_chi04::synapse0x1f512b0() {
   return (neuron0x1f35cb0()*-0.020624);
}

double NNfunction_ng_chi04::synapse0x1f512f0() {
   return (neuron0x1f35ff0()*-0.159256);
}

double NNfunction_ng_chi04::synapse0x1f51670() {
   return (neuron0x1f313a0()*-0.0186385);
}

double NNfunction_ng_chi04::synapse0x1f516b0() {
   return (neuron0x1f31650()*0.395003);
}

double NNfunction_ng_chi04::synapse0x1f516f0() {
   return (neuron0x1f31990()*-1.33599);
}

double NNfunction_ng_chi04::synapse0x1f51730() {
   return (neuron0x1f31cd0()*0.151084);
}

double NNfunction_ng_chi04::synapse0x1f51770() {
   return (neuron0x1f32010()*-0.00164899);
}

double NNfunction_ng_chi04::synapse0x1f517b0() {
   return (neuron0x1f32350()*0.0238404);
}

double NNfunction_ng_chi04::synapse0x1f517f0() {
   return (neuron0x1f32690()*0.0308203);
}

double NNfunction_ng_chi04::synapse0x1f51830() {
   return (neuron0x1f329d0()*-0.0650278);
}

double NNfunction_ng_chi04::synapse0x1f51870() {
   return (neuron0x1f32d10()*0.00675993);
}

double NNfunction_ng_chi04::synapse0x1f518b0() {
   return (neuron0x1f33050()*0.0216179);
}

double NNfunction_ng_chi04::synapse0x1f518f0() {
   return (neuron0x1f33390()*-0.0168261);
}

double NNfunction_ng_chi04::synapse0x1f51930() {
   return (neuron0x1f336d0()*-0.531358);
}

double NNfunction_ng_chi04::synapse0x1f51970() {
   return (neuron0x1f33a10()*-0.0742568);
}

double NNfunction_ng_chi04::synapse0x1f519b0() {
   return (neuron0x1f33d50()*-0.0118298);
}

double NNfunction_ng_chi04::synapse0x1f519f0() {
   return (neuron0x1f34090()*0.636899);
}

double NNfunction_ng_chi04::synapse0x1f51a30() {
   return (neuron0x1f343d0()*0.0229336);
}

double NNfunction_ng_chi04::synapse0x1f514c0() {
   return (neuron0x1f34710()*-0.0184607);
}

double NNfunction_ng_chi04::synapse0x1f51500() {
   return (neuron0x1f34c70()*0.0530628);
}

double NNfunction_ng_chi04::synapse0x1f51b80() {
   return (neuron0x1f34fb0()*0.0351122);
}

double NNfunction_ng_chi04::synapse0x1f51bc0() {
   return (neuron0x1f352f0()*-0.00381162);
}

double NNfunction_ng_chi04::synapse0x1f51c00() {
   return (neuron0x1f35630()*-0.0325172);
}

double NNfunction_ng_chi04::synapse0x1f51c40() {
   return (neuron0x1f35970()*-0.0125166);
}

double NNfunction_ng_chi04::synapse0x1f51c80() {
   return (neuron0x1f35cb0()*0.0663645);
}

double NNfunction_ng_chi04::synapse0x1f51cc0() {
   return (neuron0x1f35ff0()*-0.16174);
}

double NNfunction_ng_chi04::synapse0x1f52040() {
   return (neuron0x1f313a0()*0.0131628);
}

double NNfunction_ng_chi04::synapse0x1f52080() {
   return (neuron0x1f31650()*-0.025127);
}

double NNfunction_ng_chi04::synapse0x1f520c0() {
   return (neuron0x1f31990()*-0.0357433);
}

double NNfunction_ng_chi04::synapse0x1f52100() {
   return (neuron0x1f31cd0()*8.94178);
}

double NNfunction_ng_chi04::synapse0x1f52140() {
   return (neuron0x1f32010()*0.0310492);
}

double NNfunction_ng_chi04::synapse0x1f52180() {
   return (neuron0x1f32350()*0.00362746);
}

double NNfunction_ng_chi04::synapse0x1f521c0() {
   return (neuron0x1f32690()*0.00171848);
}

double NNfunction_ng_chi04::synapse0x1f52200() {
   return (neuron0x1f329d0()*0.0131937);
}

double NNfunction_ng_chi04::synapse0x1f52240() {
   return (neuron0x1f32d10()*-0.0040382);
}

double NNfunction_ng_chi04::synapse0x1f52280() {
   return (neuron0x1f33050()*0.00780521);
}

double NNfunction_ng_chi04::synapse0x1f522c0() {
   return (neuron0x1f33390()*-0.00897437);
}

double NNfunction_ng_chi04::synapse0x1f52300() {
   return (neuron0x1f336d0()*-0.05712);
}

double NNfunction_ng_chi04::synapse0x1f52340() {
   return (neuron0x1f33a10()*-0.0324902);
}

double NNfunction_ng_chi04::synapse0x1f52380() {
   return (neuron0x1f33d50()*-0.0313134);
}

double NNfunction_ng_chi04::synapse0x1f523c0() {
   return (neuron0x1f34090()*0.00489939);
}

double NNfunction_ng_chi04::synapse0x1f52400() {
   return (neuron0x1f343d0()*0.00888086);
}

double NNfunction_ng_chi04::synapse0x1f51e90() {
   return (neuron0x1f34710()*0.017195);
}

double NNfunction_ng_chi04::synapse0x1f51ed0() {
   return (neuron0x1f34c70()*0.00870166);
}

double NNfunction_ng_chi04::synapse0x1f52550() {
   return (neuron0x1f34fb0()*-0.0183662);
}

double NNfunction_ng_chi04::synapse0x1f52590() {
   return (neuron0x1f352f0()*-0.0114569);
}

double NNfunction_ng_chi04::synapse0x1f525d0() {
   return (neuron0x1f35630()*-0.00530084);
}

double NNfunction_ng_chi04::synapse0x1f52610() {
   return (neuron0x1f35970()*0.000602984);
}

double NNfunction_ng_chi04::synapse0x1f52650() {
   return (neuron0x1f35cb0()*-0.0177346);
}

double NNfunction_ng_chi04::synapse0x1f52690() {
   return (neuron0x1f35ff0()*0.00909417);
}

double NNfunction_ng_chi04::synapse0x1f52a10() {
   return (neuron0x1f313a0()*-0.0379558);
}

double NNfunction_ng_chi04::synapse0x1f52a50() {
   return (neuron0x1f31650()*3.6914);
}

double NNfunction_ng_chi04::synapse0x1f52a90() {
   return (neuron0x1f31990()*-2.04945);
}

double NNfunction_ng_chi04::synapse0x1f52ad0() {
   return (neuron0x1f31cd0()*0.0135783);
}

double NNfunction_ng_chi04::synapse0x1f52b10() {
   return (neuron0x1f32010()*-0.0306861);
}

double NNfunction_ng_chi04::synapse0x1f52b50() {
   return (neuron0x1f32350()*-0.0446805);
}

double NNfunction_ng_chi04::synapse0x1f52b90() {
   return (neuron0x1f32690()*-0.00506954);
}

double NNfunction_ng_chi04::synapse0x1f52bd0() {
   return (neuron0x1f329d0()*-0.00887004);
}

double NNfunction_ng_chi04::synapse0x1f52c10() {
   return (neuron0x1f32d10()*0.0211371);
}

double NNfunction_ng_chi04::synapse0x1f52c50() {
   return (neuron0x1f33050()*0.0282226);
}

double NNfunction_ng_chi04::synapse0x1f52c90() {
   return (neuron0x1f33390()*0.0107839);
}

double NNfunction_ng_chi04::synapse0x1f52cd0() {
   return (neuron0x1f336d0()*0.755464);
}

double NNfunction_ng_chi04::synapse0x1f52d10() {
   return (neuron0x1f33a10()*0.0731869);
}

double NNfunction_ng_chi04::synapse0x1f52d50() {
   return (neuron0x1f33d50()*0.0140589);
}

double NNfunction_ng_chi04::synapse0x1f52d90() {
   return (neuron0x1f34090()*-0.642578);
}

double NNfunction_ng_chi04::synapse0x1f52dd0() {
   return (neuron0x1f343d0()*-0.0300507);
}

double NNfunction_ng_chi04::synapse0x1f52860() {
   return (neuron0x1f34710()*-0.0253416);
}

double NNfunction_ng_chi04::synapse0x1f528a0() {
   return (neuron0x1f34c70()*-0.0452878);
}

double NNfunction_ng_chi04::synapse0x1f52f20() {
   return (neuron0x1f34fb0()*0.0247712);
}

double NNfunction_ng_chi04::synapse0x1f52f60() {
   return (neuron0x1f352f0()*-0.0240414);
}

double NNfunction_ng_chi04::synapse0x1f52fa0() {
   return (neuron0x1f35630()*0.0166149);
}

double NNfunction_ng_chi04::synapse0x1f52fe0() {
   return (neuron0x1f35970()*-0.01402);
}

double NNfunction_ng_chi04::synapse0x1f53020() {
   return (neuron0x1f35cb0()*0.0136164);
}

double NNfunction_ng_chi04::synapse0x1f53060() {
   return (neuron0x1f35ff0()*0.0429482);
}

double NNfunction_ng_chi04::synapse0x1f533e0() {
   return (neuron0x1f313a0()*0.00330168);
}

double NNfunction_ng_chi04::synapse0x1f53420() {
   return (neuron0x1f31650()*0.0277088);
}

double NNfunction_ng_chi04::synapse0x1f53460() {
   return (neuron0x1f31990()*-0.0425656);
}

double NNfunction_ng_chi04::synapse0x1f534a0() {
   return (neuron0x1f31cd0()*-1.35501);
}

double NNfunction_ng_chi04::synapse0x1f534e0() {
   return (neuron0x1f32010()*0.00683417);
}

double NNfunction_ng_chi04::synapse0x1f53520() {
   return (neuron0x1f32350()*-0.00902432);
}

double NNfunction_ng_chi04::synapse0x1f53560() {
   return (neuron0x1f32690()*-0.00563061);
}

double NNfunction_ng_chi04::synapse0x1f535a0() {
   return (neuron0x1f329d0()*-0.00792095);
}

double NNfunction_ng_chi04::synapse0x1f535e0() {
   return (neuron0x1f32d10()*-0.0142244);
}

double NNfunction_ng_chi04::synapse0x1f53620() {
   return (neuron0x1f33050()*-0.00136576);
}

double NNfunction_ng_chi04::synapse0x1f53660() {
   return (neuron0x1f33390()*-0.0100649);
}

double NNfunction_ng_chi04::synapse0x1f536a0() {
   return (neuron0x1f336d0()*-0.0418336);
}

double NNfunction_ng_chi04::synapse0x1f536e0() {
   return (neuron0x1f33a10()*-0.0386634);
}

double NNfunction_ng_chi04::synapse0x1f53720() {
   return (neuron0x1f33d50()*-0.0180472);
}

double NNfunction_ng_chi04::synapse0x1f53760() {
   return (neuron0x1f34090()*-0.00799456);
}

double NNfunction_ng_chi04::synapse0x1f537a0() {
   return (neuron0x1f343d0()*-0.00643616);
}

double NNfunction_ng_chi04::synapse0x1f53230() {
   return (neuron0x1f34710()*0.00140652);
}

double NNfunction_ng_chi04::synapse0x1f53270() {
   return (neuron0x1f34c70()*-0.00626017);
}

double NNfunction_ng_chi04::synapse0x1f538f0() {
   return (neuron0x1f34fb0()*-0.00740044);
}

double NNfunction_ng_chi04::synapse0x1f53930() {
   return (neuron0x1f352f0()*-0.000376869);
}

double NNfunction_ng_chi04::synapse0x1f53970() {
   return (neuron0x1f35630()*-0.00802411);
}

double NNfunction_ng_chi04::synapse0x1f539b0() {
   return (neuron0x1f35970()*0.00505422);
}

double NNfunction_ng_chi04::synapse0x1f539f0() {
   return (neuron0x1f35cb0()*-0.0116954);
}

double NNfunction_ng_chi04::synapse0x1f53a30() {
   return (neuron0x1f35ff0()*0.199665);
}

double NNfunction_ng_chi04::synapse0x1f3c4e0() {
   return (neuron0x1f313a0()*-0.0741041);
}

double NNfunction_ng_chi04::synapse0x1f3c520() {
   return (neuron0x1f31650()*0.815761);
}

double NNfunction_ng_chi04::synapse0x1f3c560() {
   return (neuron0x1f31990()*-2.71111);
}

double NNfunction_ng_chi04::synapse0x1f3c5a0() {
   return (neuron0x1f31cd0()*0.0112917);
}

double NNfunction_ng_chi04::synapse0x1f3c5e0() {
   return (neuron0x1f32010()*-0.00478975);
}

double NNfunction_ng_chi04::synapse0x1f3c620() {
   return (neuron0x1f32350()*-0.023444);
}

double NNfunction_ng_chi04::synapse0x1f3c660() {
   return (neuron0x1f32690()*0.0194286);
}

double NNfunction_ng_chi04::synapse0x1f3c6a0() {
   return (neuron0x1f329d0()*-0.0179437);
}

double NNfunction_ng_chi04::synapse0x1f541c0() {
   return (neuron0x1f32d10()*-0.0245786);
}

double NNfunction_ng_chi04::synapse0x1f54200() {
   return (neuron0x1f33050()*-0.0322329);
}

double NNfunction_ng_chi04::synapse0x1f54240() {
   return (neuron0x1f33390()*-0.0119767);
}

double NNfunction_ng_chi04::synapse0x1f54280() {
   return (neuron0x1f336d0()*-0.23991);
}

double NNfunction_ng_chi04::synapse0x1f542c0() {
   return (neuron0x1f33a10()*0.0026083);
}

double NNfunction_ng_chi04::synapse0x1f54300() {
   return (neuron0x1f33d50()*-0.0108976);
}

double NNfunction_ng_chi04::synapse0x1f54340() {
   return (neuron0x1f34090()*0.152033);
}

double NNfunction_ng_chi04::synapse0x1f54380() {
   return (neuron0x1f343d0()*-0.00346401);
}

double NNfunction_ng_chi04::synapse0x1f53c00() {
   return (neuron0x1f34710()*-0.00589888);
}

double NNfunction_ng_chi04::synapse0x1f53c40() {
   return (neuron0x1f34c70()*0.0401538);
}

double NNfunction_ng_chi04::synapse0x1f544d0() {
   return (neuron0x1f34fb0()*0.00790958);
}

double NNfunction_ng_chi04::synapse0x1f54510() {
   return (neuron0x1f352f0()*-0.00391013);
}

double NNfunction_ng_chi04::synapse0x1f54550() {
   return (neuron0x1f35630()*-0.0471035);
}

double NNfunction_ng_chi04::synapse0x1f54590() {
   return (neuron0x1f35970()*-0.00165507);
}

double NNfunction_ng_chi04::synapse0x1f545d0() {
   return (neuron0x1f35cb0()*0.00532623);
}

double NNfunction_ng_chi04::synapse0x1f54610() {
   return (neuron0x1f35ff0()*-1.78578);
}

double NNfunction_ng_chi04::synapse0x1f54990() {
   return (neuron0x1f313a0()*-0.0267407);
}

double NNfunction_ng_chi04::synapse0x1f549d0() {
   return (neuron0x1f31650()*1.71021);
}

double NNfunction_ng_chi04::synapse0x1f54a10() {
   return (neuron0x1f31990()*1.95861);
}

double NNfunction_ng_chi04::synapse0x1f54a50() {
   return (neuron0x1f31cd0()*-0.0405014);
}

double NNfunction_ng_chi04::synapse0x1f54a90() {
   return (neuron0x1f32010()*0.0104102);
}

double NNfunction_ng_chi04::synapse0x1f54ad0() {
   return (neuron0x1f32350()*0.0041769);
}

double NNfunction_ng_chi04::synapse0x1f54b10() {
   return (neuron0x1f32690()*-0.00342839);
}

double NNfunction_ng_chi04::synapse0x1f54b50() {
   return (neuron0x1f329d0()*0.0238582);
}

double NNfunction_ng_chi04::synapse0x1f54b90() {
   return (neuron0x1f32d10()*-0.0266663);
}

double NNfunction_ng_chi04::synapse0x1f54bd0() {
   return (neuron0x1f33050()*-0.0335682);
}

double NNfunction_ng_chi04::synapse0x1f54c10() {
   return (neuron0x1f33390()*-0.00496793);
}

double NNfunction_ng_chi04::synapse0x1f54c50() {
   return (neuron0x1f336d0()*-0.397532);
}

double NNfunction_ng_chi04::synapse0x1f54c90() {
   return (neuron0x1f33a10()*-0.0169733);
}

double NNfunction_ng_chi04::synapse0x1f54cd0() {
   return (neuron0x1f33d50()*-0.0147826);
}

double NNfunction_ng_chi04::synapse0x1f54d10() {
   return (neuron0x1f34090()*1.05266);
}

double NNfunction_ng_chi04::synapse0x1f54d50() {
   return (neuron0x1f343d0()*0.0159042);
}

double NNfunction_ng_chi04::synapse0x1f547e0() {
   return (neuron0x1f34710()*0.00595109);
}

double NNfunction_ng_chi04::synapse0x1f54820() {
   return (neuron0x1f34c70()*-0.105548);
}

double NNfunction_ng_chi04::synapse0x1f54ea0() {
   return (neuron0x1f34fb0()*-0.00898714);
}

double NNfunction_ng_chi04::synapse0x1f54ee0() {
   return (neuron0x1f352f0()*0.0174129);
}

double NNfunction_ng_chi04::synapse0x1f54f20() {
   return (neuron0x1f35630()*0.0238237);
}

double NNfunction_ng_chi04::synapse0x1f54f60() {
   return (neuron0x1f35970()*0.0046964);
}

double NNfunction_ng_chi04::synapse0x1f54fa0() {
   return (neuron0x1f35cb0()*-0.0233457);
}

double NNfunction_ng_chi04::synapse0x1f54fe0() {
   return (neuron0x1f35ff0()*0.0707616);
}

double NNfunction_ng_chi04::synapse0x1f55360() {
   return (neuron0x1f313a0()*0.00923965);
}

double NNfunction_ng_chi04::synapse0x1f553a0() {
   return (neuron0x1f31650()*0.183186);
}

double NNfunction_ng_chi04::synapse0x1f553e0() {
   return (neuron0x1f31990()*-0.0204163);
}

double NNfunction_ng_chi04::synapse0x1f55420() {
   return (neuron0x1f31cd0()*-0.883178);
}

double NNfunction_ng_chi04::synapse0x1f55460() {
   return (neuron0x1f32010()*-0.00359649);
}

double NNfunction_ng_chi04::synapse0x1f554a0() {
   return (neuron0x1f32350()*0.00901329);
}

double NNfunction_ng_chi04::synapse0x1f554e0() {
   return (neuron0x1f32690()*0.00937325);
}

double NNfunction_ng_chi04::synapse0x1f55520() {
   return (neuron0x1f329d0()*0.00205604);
}

double NNfunction_ng_chi04::synapse0x1f55560() {
   return (neuron0x1f32d10()*0.00957646);
}

double NNfunction_ng_chi04::synapse0x1f555a0() {
   return (neuron0x1f33050()*0.000176053);
}

double NNfunction_ng_chi04::synapse0x1f555e0() {
   return (neuron0x1f33390()*-0.000423714);
}

double NNfunction_ng_chi04::synapse0x1f55620() {
   return (neuron0x1f336d0()*0.0512286);
}

double NNfunction_ng_chi04::synapse0x1f55660() {
   return (neuron0x1f33a10()*0.0126126);
}

double NNfunction_ng_chi04::synapse0x1f556a0() {
   return (neuron0x1f33d50()*0.0342238);
}

double NNfunction_ng_chi04::synapse0x1f556e0() {
   return (neuron0x1f34090()*0.032963);
}

double NNfunction_ng_chi04::synapse0x1f55720() {
   return (neuron0x1f343d0()*-0.00280745);
}

double NNfunction_ng_chi04::synapse0x1f551b0() {
   return (neuron0x1f34710()*-0.00032759);
}

double NNfunction_ng_chi04::synapse0x1f551f0() {
   return (neuron0x1f34c70()*0.0131927);
}

double NNfunction_ng_chi04::synapse0x1f45d20() {
   return (neuron0x1f34fb0()*0.00741421);
}

double NNfunction_ng_chi04::synapse0x1f45d60() {
   return (neuron0x1f352f0()*-0.00612248);
}

double NNfunction_ng_chi04::synapse0x1f45da0() {
   return (neuron0x1f35630()*-0.00130621);
}

double NNfunction_ng_chi04::synapse0x1f45de0() {
   return (neuron0x1f35970()*0.00303377);
}

double NNfunction_ng_chi04::synapse0x1f45e20() {
   return (neuron0x1f35cb0()*0.00650819);
}

double NNfunction_ng_chi04::synapse0x1f45e60() {
   return (neuron0x1f35ff0()*-0.157424);
}

double NNfunction_ng_chi04::synapse0x1f461e0() {
   return (neuron0x1f313a0()*-0.00532088);
}

double NNfunction_ng_chi04::synapse0x1f46220() {
   return (neuron0x1f31650()*0.635232);
}

double NNfunction_ng_chi04::synapse0x1f46260() {
   return (neuron0x1f31990()*0.799925);
}

double NNfunction_ng_chi04::synapse0x1f462a0() {
   return (neuron0x1f31cd0()*0.0707075);
}

double NNfunction_ng_chi04::synapse0x1f462e0() {
   return (neuron0x1f32010()*-0.0102697);
}

double NNfunction_ng_chi04::synapse0x1f46320() {
   return (neuron0x1f32350()*-0.00462782);
}

double NNfunction_ng_chi04::synapse0x1f46360() {
   return (neuron0x1f32690()*-0.00645883);
}

double NNfunction_ng_chi04::synapse0x1f463a0() {
   return (neuron0x1f329d0()*0.00277647);
}

double NNfunction_ng_chi04::synapse0x1f463e0() {
   return (neuron0x1f32d10()*-0.00476317);
}

double NNfunction_ng_chi04::synapse0x1f46420() {
   return (neuron0x1f33050()*-0.015775);
}

double NNfunction_ng_chi04::synapse0x1f46460() {
   return (neuron0x1f33390()*-0.0101122);
}

double NNfunction_ng_chi04::synapse0x1f464a0() {
   return (neuron0x1f336d0()*0.078459);
}

double NNfunction_ng_chi04::synapse0x1f464e0() {
   return (neuron0x1f33a10()*0.0188904);
}

double NNfunction_ng_chi04::synapse0x1f46520() {
   return (neuron0x1f33d50()*-0.0296158);
}

double NNfunction_ng_chi04::synapse0x1f46560() {
   return (neuron0x1f34090()*-0.0591352);
}

double NNfunction_ng_chi04::synapse0x1f465a0() {
   return (neuron0x1f343d0()*0.00307455);
}

double NNfunction_ng_chi04::synapse0x1f46030() {
   return (neuron0x1f34710()*-0.013012);
}

double NNfunction_ng_chi04::synapse0x1f46070() {
   return (neuron0x1f34c70()*-0.113207);
}

double NNfunction_ng_chi04::synapse0x1f466f0() {
   return (neuron0x1f34fb0()*-0.0172514);
}

double NNfunction_ng_chi04::synapse0x1f46730() {
   return (neuron0x1f352f0()*0.0242537);
}

double NNfunction_ng_chi04::synapse0x1f46770() {
   return (neuron0x1f35630()*-0.0276957);
}

double NNfunction_ng_chi04::synapse0x1f467b0() {
   return (neuron0x1f35970()*-0.0270381);
}

double NNfunction_ng_chi04::synapse0x1f467f0() {
   return (neuron0x1f35cb0()*0.0157531);
}

double NNfunction_ng_chi04::synapse0x1f46830() {
   return (neuron0x1f35ff0()*-0.892356);
}

double NNfunction_ng_chi04::synapse0x1f46bb0() {
   return (neuron0x1f313a0()*-0.0632644);
}

double NNfunction_ng_chi04::synapse0x1f46bf0() {
   return (neuron0x1f31650()*3.69196);
}

double NNfunction_ng_chi04::synapse0x1f46c30() {
   return (neuron0x1f31990()*-1.58318);
}

double NNfunction_ng_chi04::synapse0x1f46c70() {
   return (neuron0x1f31cd0()*-0.0528327);
}

double NNfunction_ng_chi04::synapse0x1f46cb0() {
   return (neuron0x1f32010()*-0.0253054);
}

double NNfunction_ng_chi04::synapse0x1f46cf0() {
   return (neuron0x1f32350()*-0.000350577);
}

double NNfunction_ng_chi04::synapse0x1f46d30() {
   return (neuron0x1f32690()*0.0198401);
}

double NNfunction_ng_chi04::synapse0x1f46d70() {
   return (neuron0x1f329d0()*0.0104845);
}

double NNfunction_ng_chi04::synapse0x1f46db0() {
   return (neuron0x1f32d10()*-0.00590463);
}

double NNfunction_ng_chi04::synapse0x1f46df0() {
   return (neuron0x1f33050()*0.00240013);
}

double NNfunction_ng_chi04::synapse0x1f46e30() {
   return (neuron0x1f33390()*0.0185169);
}

double NNfunction_ng_chi04::synapse0x1f46e70() {
   return (neuron0x1f336d0()*-0.267987);
}

double NNfunction_ng_chi04::synapse0x1f46eb0() {
   return (neuron0x1f33a10()*0.00277458);
}

double NNfunction_ng_chi04::synapse0x1f46ef0() {
   return (neuron0x1f33d50()*-0.0168877);
}

double NNfunction_ng_chi04::synapse0x1f46f30() {
   return (neuron0x1f34090()*0.161295);
}

double NNfunction_ng_chi04::synapse0x1f46f70() {
   return (neuron0x1f343d0()*-0.00259857);
}

double NNfunction_ng_chi04::synapse0x1f46a00() {
   return (neuron0x1f34710()*-0.03805);
}

double NNfunction_ng_chi04::synapse0x1f46a40() {
   return (neuron0x1f34c70()*-0.00289424);
}

double NNfunction_ng_chi04::synapse0x1f470c0() {
   return (neuron0x1f34fb0()*0.0125474);
}

double NNfunction_ng_chi04::synapse0x1f47100() {
   return (neuron0x1f352f0()*-0.01516);
}

double NNfunction_ng_chi04::synapse0x1f47140() {
   return (neuron0x1f35630()*0.00280094);
}

double NNfunction_ng_chi04::synapse0x1f47180() {
   return (neuron0x1f35970()*0.00205238);
}

double NNfunction_ng_chi04::synapse0x1f471c0() {
   return (neuron0x1f35cb0()*-0.00312924);
}

double NNfunction_ng_chi04::synapse0x1f47200() {
   return (neuron0x1f35ff0()*0.288487);
}

double NNfunction_ng_chi04::synapse0x1f47580() {
   return (neuron0x1f313a0()*0.167439);
}

double NNfunction_ng_chi04::synapse0x1f475c0() {
   return (neuron0x1f31650()*-0.850078);
}

double NNfunction_ng_chi04::synapse0x1f47600() {
   return (neuron0x1f31990()*-0.114371);
}

double NNfunction_ng_chi04::synapse0x1f47640() {
   return (neuron0x1f31cd0()*7.70273);
}

double NNfunction_ng_chi04::synapse0x1f47680() {
   return (neuron0x1f32010()*0.0292393);
}

double NNfunction_ng_chi04::synapse0x1f476c0() {
   return (neuron0x1f32350()*0.0191356);
}

double NNfunction_ng_chi04::synapse0x1f47700() {
   return (neuron0x1f32690()*0.0578521);
}

double NNfunction_ng_chi04::synapse0x1f47740() {
   return (neuron0x1f329d0()*0.0598915);
}

double NNfunction_ng_chi04::synapse0x1f47780() {
   return (neuron0x1f32d10()*-0.00415519);
}

double NNfunction_ng_chi04::synapse0x1f477c0() {
   return (neuron0x1f33050()*0.094172);
}

double NNfunction_ng_chi04::synapse0x1f47800() {
   return (neuron0x1f33390()*0.115644);
}

double NNfunction_ng_chi04::synapse0x1f47840() {
   return (neuron0x1f336d0()*0.00534017);
}

double NNfunction_ng_chi04::synapse0x1f47880() {
   return (neuron0x1f33a10()*0.582108);
}

double NNfunction_ng_chi04::synapse0x1f478c0() {
   return (neuron0x1f33d50()*0.27676);
}

double NNfunction_ng_chi04::synapse0x1f47900() {
   return (neuron0x1f34090()*0.0307683);
}

double NNfunction_ng_chi04::synapse0x1f47940() {
   return (neuron0x1f343d0()*-0.00259167);
}

double NNfunction_ng_chi04::synapse0x1f473d0() {
   return (neuron0x1f34710()*-0.121822);
}

double NNfunction_ng_chi04::synapse0x1f47410() {
   return (neuron0x1f34c70()*-0.232156);
}

double NNfunction_ng_chi04::synapse0x1f47a90() {
   return (neuron0x1f34fb0()*0.388104);
}

double NNfunction_ng_chi04::synapse0x1f47ad0() {
   return (neuron0x1f352f0()*-0.108087);
}

double NNfunction_ng_chi04::synapse0x1f47b10() {
   return (neuron0x1f35630()*0.0157308);
}

double NNfunction_ng_chi04::synapse0x1f47b50() {
   return (neuron0x1f35970()*-0.064691);
}

double NNfunction_ng_chi04::synapse0x1f47b90() {
   return (neuron0x1f35cb0()*0.106386);
}

double NNfunction_ng_chi04::synapse0x1f47bd0() {
   return (neuron0x1f35ff0()*0.175082);
}

double NNfunction_ng_chi04::synapse0x1f59aa0() {
   return (neuron0x1f313a0()*0.000510845);
}

double NNfunction_ng_chi04::synapse0x1f59ae0() {
   return (neuron0x1f31650()*-0.747824);
}

double NNfunction_ng_chi04::synapse0x1f59b20() {
   return (neuron0x1f31990()*0.431279);
}

double NNfunction_ng_chi04::synapse0x1f59b60() {
   return (neuron0x1f31cd0()*-1.52258);
}

double NNfunction_ng_chi04::synapse0x1f59ba0() {
   return (neuron0x1f32010()*-0.0476376);
}

double NNfunction_ng_chi04::synapse0x1f59be0() {
   return (neuron0x1f32350()*0.134209);
}

double NNfunction_ng_chi04::synapse0x1f59c20() {
   return (neuron0x1f32690()*-0.0557048);
}

double NNfunction_ng_chi04::synapse0x1f59c60() {
   return (neuron0x1f329d0()*-0.0699191);
}

double NNfunction_ng_chi04::synapse0x1f59ca0() {
   return (neuron0x1f32d10()*0.198106);
}

double NNfunction_ng_chi04::synapse0x1f59ce0() {
   return (neuron0x1f33050()*-0.150044);
}

double NNfunction_ng_chi04::synapse0x1f59d20() {
   return (neuron0x1f33390()*0.248128);
}

double NNfunction_ng_chi04::synapse0x1f59d60() {
   return (neuron0x1f336d0()*-0.0959729);
}

double NNfunction_ng_chi04::synapse0x1f59da0() {
   return (neuron0x1f33a10()*-0.0615207);
}

double NNfunction_ng_chi04::synapse0x1f59de0() {
   return (neuron0x1f33d50()*-0.345186);
}

double NNfunction_ng_chi04::synapse0x1f59e20() {
   return (neuron0x1f34090()*0.44289);
}

double NNfunction_ng_chi04::synapse0x1f59e60() {
   return (neuron0x1f343d0()*-0.191008);
}

double NNfunction_ng_chi04::synapse0x1f47c10() {
   return (neuron0x1f34710()*0.401885);
}

double NNfunction_ng_chi04::synapse0x1f47c50() {
   return (neuron0x1f34c70()*0.290162);
}

double NNfunction_ng_chi04::synapse0x1f59fb0() {
   return (neuron0x1f34fb0()*0.372695);
}

double NNfunction_ng_chi04::synapse0x1f59ff0() {
   return (neuron0x1f352f0()*0.148673);
}

double NNfunction_ng_chi04::synapse0x1f5a030() {
   return (neuron0x1f35630()*0.49178);
}

double NNfunction_ng_chi04::synapse0x1f5a070() {
   return (neuron0x1f35970()*0.283153);
}

double NNfunction_ng_chi04::synapse0x1f5a0b0() {
   return (neuron0x1f35cb0()*0.527734);
}

double NNfunction_ng_chi04::synapse0x1f5a0f0() {
   return (neuron0x1f35ff0()*-0.278373);
}

double NNfunction_ng_chi04::synapse0x1f5a470() {
   return (neuron0x1f313a0()*-0.0885235);
}

double NNfunction_ng_chi04::synapse0x1f5a4b0() {
   return (neuron0x1f31650()*2.09445);
}

double NNfunction_ng_chi04::synapse0x1f5a4f0() {
   return (neuron0x1f31990()*-2.58354);
}

double NNfunction_ng_chi04::synapse0x1f5a530() {
   return (neuron0x1f31cd0()*0.0747122);
}

double NNfunction_ng_chi04::synapse0x1f5a570() {
   return (neuron0x1f32010()*-0.0261251);
}

double NNfunction_ng_chi04::synapse0x1f5a5b0() {
   return (neuron0x1f32350()*-0.012436);
}

double NNfunction_ng_chi04::synapse0x1f5a5f0() {
   return (neuron0x1f32690()*-0.0498178);
}

double NNfunction_ng_chi04::synapse0x1f5a630() {
   return (neuron0x1f329d0()*-0.0153154);
}

double NNfunction_ng_chi04::synapse0x1f5a670() {
   return (neuron0x1f32d10()*0.0133074);
}

double NNfunction_ng_chi04::synapse0x1f5a6b0() {
   return (neuron0x1f33050()*0.00744229);
}

double NNfunction_ng_chi04::synapse0x1f5a6f0() {
   return (neuron0x1f33390()*0.00495339);
}

double NNfunction_ng_chi04::synapse0x1f5a730() {
   return (neuron0x1f336d0()*0.224026);
}

double NNfunction_ng_chi04::synapse0x1f5a770() {
   return (neuron0x1f33a10()*0.0247419);
}

double NNfunction_ng_chi04::synapse0x1f5a7b0() {
   return (neuron0x1f33d50()*0.0230344);
}

double NNfunction_ng_chi04::synapse0x1f5a7f0() {
   return (neuron0x1f34090()*-0.237199);
}

double NNfunction_ng_chi04::synapse0x1f5a830() {
   return (neuron0x1f343d0()*0.0047178);
}

double NNfunction_ng_chi04::synapse0x1f5a2c0() {
   return (neuron0x1f34710()*0.0432897);
}

double NNfunction_ng_chi04::synapse0x1f5a300() {
   return (neuron0x1f34c70()*0.00399337);
}

double NNfunction_ng_chi04::synapse0x1f5a980() {
   return (neuron0x1f34fb0()*-0.0212836);
}

double NNfunction_ng_chi04::synapse0x1f5a9c0() {
   return (neuron0x1f352f0()*0.00476384);
}

double NNfunction_ng_chi04::synapse0x1f5aa00() {
   return (neuron0x1f35630()*-0.0347064);
}

double NNfunction_ng_chi04::synapse0x1f5aa40() {
   return (neuron0x1f35970()*-0.0470014);
}

double NNfunction_ng_chi04::synapse0x1f5aa80() {
   return (neuron0x1f35cb0()*0.0118861);
}

double NNfunction_ng_chi04::synapse0x1f5aac0() {
   return (neuron0x1f35ff0()*2.24153);
}

double NNfunction_ng_chi04::synapse0x1f5ae40() {
   return (neuron0x1f313a0()*0.0635113);
}

double NNfunction_ng_chi04::synapse0x1f5ae80() {
   return (neuron0x1f31650()*-2.73413);
}

double NNfunction_ng_chi04::synapse0x1f5aec0() {
   return (neuron0x1f31990()*-2.17498);
}

double NNfunction_ng_chi04::synapse0x1f5af00() {
   return (neuron0x1f31cd0()*-0.00631249);
}

double NNfunction_ng_chi04::synapse0x1f5af40() {
   return (neuron0x1f32010()*0.0555217);
}

double NNfunction_ng_chi04::synapse0x1f5af80() {
   return (neuron0x1f32350()*-0.0266944);
}

double NNfunction_ng_chi04::synapse0x1f5afc0() {
   return (neuron0x1f32690()*-0.014502);
}

double NNfunction_ng_chi04::synapse0x1f5b000() {
   return (neuron0x1f329d0()*-0.0070277);
}

double NNfunction_ng_chi04::synapse0x1f5b040() {
   return (neuron0x1f32d10()*0.00457823);
}

double NNfunction_ng_chi04::synapse0x1f5b080() {
   return (neuron0x1f33050()*-0.00463112);
}

double NNfunction_ng_chi04::synapse0x1f5b0c0() {
   return (neuron0x1f33390()*-0.0325857);
}

double NNfunction_ng_chi04::synapse0x1f5b100() {
   return (neuron0x1f336d0()*-0.374171);
}

double NNfunction_ng_chi04::synapse0x1f5b140() {
   return (neuron0x1f33a10()*-0.0327693);
}

double NNfunction_ng_chi04::synapse0x1f5b180() {
   return (neuron0x1f33d50()*0.00133284);
}

double NNfunction_ng_chi04::synapse0x1f5b1c0() {
   return (neuron0x1f34090()*0.367587);
}

double NNfunction_ng_chi04::synapse0x1f5b200() {
   return (neuron0x1f343d0()*-0.00453033);
}

double NNfunction_ng_chi04::synapse0x1f5ac90() {
   return (neuron0x1f34710()*0.0138737);
}

double NNfunction_ng_chi04::synapse0x1f5acd0() {
   return (neuron0x1f34c70()*0.0503155);
}

double NNfunction_ng_chi04::synapse0x1f5b350() {
   return (neuron0x1f34fb0()*0.0334795);
}

double NNfunction_ng_chi04::synapse0x1f5b390() {
   return (neuron0x1f352f0()*0.0129552);
}

double NNfunction_ng_chi04::synapse0x1f5b3d0() {
   return (neuron0x1f35630()*-0.0247899);
}

double NNfunction_ng_chi04::synapse0x1f5b410() {
   return (neuron0x1f35970()*-0.0198243);
}

double NNfunction_ng_chi04::synapse0x1f5b450() {
   return (neuron0x1f35cb0()*0.0168325);
}

double NNfunction_ng_chi04::synapse0x1f5b490() {
   return (neuron0x1f35ff0()*1.26947);
}

double NNfunction_ng_chi04::synapse0x1f5b810() {
   return (neuron0x1f313a0()*-0.197722);
}

double NNfunction_ng_chi04::synapse0x1f5b850() {
   return (neuron0x1f31650()*0.511216);
}

double NNfunction_ng_chi04::synapse0x1f5b890() {
   return (neuron0x1f31990()*0.470257);
}

double NNfunction_ng_chi04::synapse0x1f5b8d0() {
   return (neuron0x1f31cd0()*0.275051);
}

double NNfunction_ng_chi04::synapse0x1f5b910() {
   return (neuron0x1f32010()*-0.0336687);
}

double NNfunction_ng_chi04::synapse0x1f5b950() {
   return (neuron0x1f32350()*0.116108);
}

double NNfunction_ng_chi04::synapse0x1f5b990() {
   return (neuron0x1f32690()*0.0820465);
}

double NNfunction_ng_chi04::synapse0x1f5b9d0() {
   return (neuron0x1f329d0()*-0.0269648);
}

double NNfunction_ng_chi04::synapse0x1f5ba10() {
   return (neuron0x1f32d10()*-0.0660325);
}

double NNfunction_ng_chi04::synapse0x1f5ba50() {
   return (neuron0x1f33050()*-0.0895495);
}

double NNfunction_ng_chi04::synapse0x1f5ba90() {
   return (neuron0x1f33390()*-0.0331748);
}

double NNfunction_ng_chi04::synapse0x1f5bad0() {
   return (neuron0x1f336d0()*1.70754);
}

double NNfunction_ng_chi04::synapse0x1f5bb10() {
   return (neuron0x1f33a10()*-0.0520299);
}

double NNfunction_ng_chi04::synapse0x1f5bb50() {
   return (neuron0x1f33d50()*0.134374);
}

double NNfunction_ng_chi04::synapse0x1f5bb90() {
   return (neuron0x1f34090()*0.241242);
}

double NNfunction_ng_chi04::synapse0x1f5bbd0() {
   return (neuron0x1f343d0()*0.0290212);
}

double NNfunction_ng_chi04::synapse0x1f5b660() {
   return (neuron0x1f34710()*0.00399183);
}

double NNfunction_ng_chi04::synapse0x1f5b6a0() {
   return (neuron0x1f34c70()*-0.0804768);
}

double NNfunction_ng_chi04::synapse0x1f5bd20() {
   return (neuron0x1f34fb0()*0.109116);
}

double NNfunction_ng_chi04::synapse0x1f5bd60() {
   return (neuron0x1f352f0()*-0.0407076);
}

double NNfunction_ng_chi04::synapse0x1f5bda0() {
   return (neuron0x1f35630()*-0.172291);
}

double NNfunction_ng_chi04::synapse0x1f5bde0() {
   return (neuron0x1f35970()*0.0405202);
}

double NNfunction_ng_chi04::synapse0x1f5be20() {
   return (neuron0x1f35cb0()*-0.0103744);
}

double NNfunction_ng_chi04::synapse0x1f5be60() {
   return (neuron0x1f35ff0()*0.702867);
}

double NNfunction_ng_chi04::synapse0x1f372b0() {
   return (neuron0x1f36460()*0.75152);
}

double NNfunction_ng_chi04::synapse0x1f372f0() {
   return (neuron0x1f36ca0()*0.298027);
}

double NNfunction_ng_chi04::synapse0x1f38810() {
   return (neuron0x1f37780()*0.132389);
}

double NNfunction_ng_chi04::synapse0x1f38850() {
   return (neuron0x1cfbba0()*-0.0522393);
}

double NNfunction_ng_chi04::synapse0x1f3a2e0() {
   return (neuron0x1f38560()*-0.0747735);
}

double NNfunction_ng_chi04::synapse0x1f3a320() {
   return (neuron0x1f3a030()*-1.30559);
}

double NNfunction_ng_chi04::synapse0x1f3b0b0() {
   return (neuron0x1f3ae00()*-1.2591);
}

double NNfunction_ng_chi04::synapse0x1f3b0f0() {
   return (neuron0x1f3b7d0()*-0.317517);
}

double NNfunction_ng_chi04::synapse0x1f3ba80() {
   return (neuron0x1f3c1a0()*0.0244887);
}

double NNfunction_ng_chi04::synapse0x1f3bac0() {
   return (neuron0x1f3cc80()*0.223948);
}

double NNfunction_ng_chi04::synapse0x1f3c450() {
   return (neuron0x1f3d650()*1.27779);
}

double NNfunction_ng_chi04::synapse0x1f3c490() {
   return (neuron0x1f3a730()*3.15523);
}

double NNfunction_ng_chi04::synapse0x1f3cf30() {
   return (neuron0x1f3f200()*0.00725641);
}

double NNfunction_ng_chi04::synapse0x1f3cf70() {
   return (neuron0x1f3fbd0()*-0.583412);
}

double NNfunction_ng_chi04::synapse0x1f3d900() {
   return (neuron0x1f405a0()*1.02458);
}

double NNfunction_ng_chi04::synapse0x1f3d940() {
   return (neuron0x1f40f70()*-0.669132);
}

double NNfunction_ng_chi04::synapse0x1f3a9e0() {
   return (neuron0x1f42d80()*-0.040659);
}

double NNfunction_ng_chi04::synapse0x1f3aa20() {
   return (neuron0x1f43060()*-0.774775);
}

double NNfunction_ng_chi04::synapse0x1f3f4b0() {
   return (neuron0x1f43a30()*-0.112947);
}

double NNfunction_ng_chi04::synapse0x1f3f4f0() {
   return (neuron0x1f44400()*-0.110793);
}

double NNfunction_ng_chi04::synapse0x1f3fe80() {
   return (neuron0x1f44dd0()*0.0490216);
}

double NNfunction_ng_chi04::synapse0x1f3fec0() {
   return (neuron0x1f457a0()*0.00317643);
}

double NNfunction_ng_chi04::synapse0x1f40850() {
   return (neuron0x1f3e2f0()*0.474887);
}

double NNfunction_ng_chi04::synapse0x1f40890() {
   return (neuron0x1f3ecc0()*-0.0311455);
}

double NNfunction_ng_chi04::synapse0x1f41220() {
   return (neuron0x1f48530()*1.96692);
}

double NNfunction_ng_chi04::synapse0x1f41260() {
   return (neuron0x1f48f00()*-1.88189);
}

double NNfunction_ng_chi04::synapse0x1f342b0() {
   return (neuron0x1f498d0()*3.76478);
}

double NNfunction_ng_chi04::synapse0x1f342f0() {
   return (neuron0x1f4a2a0()*0.188661);
}

double NNfunction_ng_chi04::synapse0x1f43310() {
   return (neuron0x1f4ac70()*-0.843239);
}

double NNfunction_ng_chi04::synapse0x1f43350() {
   return (neuron0x1f4b640()*0.218667);
}

double NNfunction_ng_chi04::synapse0x1f43ce0() {
   return (neuron0x1f4c010()*-0.272595);
}

double NNfunction_ng_chi04::synapse0x1f43d20() {
   return (neuron0x1f4c9e0()*-0.255213);
}

double NNfunction_ng_chi04::synapse0x1f446b0() {
   return (neuron0x1f42a70()*0.0392498);
}

double NNfunction_ng_chi04::synapse0x1f446f0() {
   return (neuron0x1f4f5c0()*1.84315);
}

double NNfunction_ng_chi04::synapse0x1f45080() {
   return (neuron0x1f4ff90()*-0.0686166);
}

double NNfunction_ng_chi04::synapse0x1f450c0() {
   return (neuron0x1f50960()*0.241217);
}

double NNfunction_ng_chi04::synapse0x1f45a50() {
   return (neuron0x1f51330()*0.644855);
}

double NNfunction_ng_chi04::synapse0x1f45a90() {
   return (neuron0x1f51d00()*1.22884);
}

double NNfunction_ng_chi04::synapse0x1f3e5a0() {
   return (neuron0x1f526d0()*0.1448);
}

double NNfunction_ng_chi04::synapse0x1f3e5e0() {
   return (neuron0x1f530a0()*-1.52436);
}

double NNfunction_ng_chi04::synapse0x1f47e50() {
   return (neuron0x1f53a70()*0.0231354);
}

double NNfunction_ng_chi04::synapse0x1f47e90() {
   return (neuron0x1f54650()*0.595956);
}

double NNfunction_ng_chi04::synapse0x1f487e0() {
   return (neuron0x1f55020()*2.49198);
}

double NNfunction_ng_chi04::synapse0x1f48820() {
   return (neuron0x1f45ea0()*-1.45881);
}

double NNfunction_ng_chi04::synapse0x1f491b0() {
   return (neuron0x1f46870()*-0.889072);
}

double NNfunction_ng_chi04::synapse0x1f491f0() {
   return (neuron0x1f47240()*-0.16514);
}

double NNfunction_ng_chi04::synapse0x1f49b80() {
   return (neuron0x1f59880()*0.00325333);
}

double NNfunction_ng_chi04::synapse0x1f49bc0() {
   return (neuron0x1f5a130()*0.173333);
}

double NNfunction_ng_chi04::synapse0x1f4a550() {
   return (neuron0x1f5ab00()*0.676592);
}

double NNfunction_ng_chi04::synapse0x1f4a590() {
   return (neuron0x1f5b4d0()*0.106377);
}

double NNfunction_ng_chi04::synapse0x1f4cc90() {
   return (neuron0x1f36460()*0.0356875);
}

double NNfunction_ng_chi04::synapse0x1f4ccd0() {
   return (neuron0x1f36ca0()*0.539665);
}

double NNfunction_ng_chi04::synapse0x1f42250() {
   return (neuron0x1f37780()*0.400244);
}

double NNfunction_ng_chi04::synapse0x1f42290() {
   return (neuron0x1cfbba0()*-1.97277);
}

double NNfunction_ng_chi04::synapse0x1f4f870() {
   return (neuron0x1f38560()*-0.206486);
}

double NNfunction_ng_chi04::synapse0x1f4f8b0() {
   return (neuron0x1f3a030()*-1.56908);
}

double NNfunction_ng_chi04::synapse0x1f50240() {
   return (neuron0x1f3ae00()*-1.28991);
}

double NNfunction_ng_chi04::synapse0x1f50280() {
   return (neuron0x1f3b7d0()*-0.253623);
}

double NNfunction_ng_chi04::synapse0x1f50c10() {
   return (neuron0x1f3c1a0()*0.0696254);
}

double NNfunction_ng_chi04::synapse0x1f50c50() {
   return (neuron0x1f3cc80()*0.386408);
}

double NNfunction_ng_chi04::synapse0x1f515e0() {
   return (neuron0x1f3d650()*-0.745891);
}

double NNfunction_ng_chi04::synapse0x1f51620() {
   return (neuron0x1f3a730()*0.644339);
}

double NNfunction_ng_chi04::synapse0x1f51fb0() {
   return (neuron0x1f3f200()*1.18351);
}

double NNfunction_ng_chi04::synapse0x1f51ff0() {
   return (neuron0x1f3fbd0()*1.48443);
}

double NNfunction_ng_chi04::synapse0x1f52980() {
   return (neuron0x1f405a0()*0.896692);
}

double NNfunction_ng_chi04::synapse0x1f529c0() {
   return (neuron0x1f40f70()*1.70151);
}

double NNfunction_ng_chi04::synapse0x1f53350() {
   return (neuron0x1f42d80()*-0.44904);
}

double NNfunction_ng_chi04::synapse0x1f53390() {
   return (neuron0x1f43060()*0.0318389);
}

double NNfunction_ng_chi04::synapse0x1f53d20() {
   return (neuron0x1f43a30()*1.13278);
}

double NNfunction_ng_chi04::synapse0x1f53d60() {
   return (neuron0x1f44400()*0.515773);
}

double NNfunction_ng_chi04::synapse0x1f54900() {
   return (neuron0x1f44dd0()*-0.138943);
}

double NNfunction_ng_chi04::synapse0x1f54940() {
   return (neuron0x1f457a0()*0.00826177);
}

double NNfunction_ng_chi04::synapse0x1f552d0() {
   return (neuron0x1f3e2f0()*-1.53893);
}

double NNfunction_ng_chi04::synapse0x1f55310() {
   return (neuron0x1f3ecc0()*-0.332514);
}

double NNfunction_ng_chi04::synapse0x1f46150() {
   return (neuron0x1f48530()*-0.644875);
}

double NNfunction_ng_chi04::synapse0x1f46190() {
   return (neuron0x1f48f00()*1.08387);
}

double NNfunction_ng_chi04::synapse0x1f46b20() {
   return (neuron0x1f498d0()*0.530431);
}

double NNfunction_ng_chi04::synapse0x1f46b60() {
   return (neuron0x1f4a2a0()*0.529765);
}

double NNfunction_ng_chi04::synapse0x1f474f0() {
   return (neuron0x1f4ac70()*-0.105832);
}

double NNfunction_ng_chi04::synapse0x1f47530() {
   return (neuron0x1f4b640()*0.616663);
}

double NNfunction_ng_chi04::synapse0x1f59a10() {
   return (neuron0x1f4c010()*-1.00421);
}

double NNfunction_ng_chi04::synapse0x1f59a50() {
   return (neuron0x1f4c9e0()*0.80602);
}

double NNfunction_ng_chi04::synapse0x1f5a3e0() {
   return (neuron0x1f42a70()*-0.114621);
}

double NNfunction_ng_chi04::synapse0x1f5a420() {
   return (neuron0x1f4f5c0()*-0.446114);
}

double NNfunction_ng_chi04::synapse0x1f5adb0() {
   return (neuron0x1f4ff90()*-0.318892);
}

double NNfunction_ng_chi04::synapse0x1f5adf0() {
   return (neuron0x1f50960()*-0.0229474);
}

double NNfunction_ng_chi04::synapse0x1f5b780() {
   return (neuron0x1f51330()*-0.238941);
}

double NNfunction_ng_chi04::synapse0x1f5b7c0() {
   return (neuron0x1f51d00()*0.298977);
}

double NNfunction_ng_chi04::synapse0x1f36710() {
   return (neuron0x1f526d0()*-0.0341645);
}

double NNfunction_ng_chi04::synapse0x1f36750() {
   return (neuron0x1f530a0()*0.143773);
}

double NNfunction_ng_chi04::synapse0x1f4af20() {
   return (neuron0x1f53a70()*2.3017);
}

double NNfunction_ng_chi04::synapse0x1f4af60() {
   return (neuron0x1f54650()*1.66096);
}

double NNfunction_ng_chi04::synapse0x1f5bea0() {
   return (neuron0x1f55020()*0.000433949);
}

double NNfunction_ng_chi04::synapse0x1f5bee0() {
   return (neuron0x1f45ea0()*-0.832366);
}

double NNfunction_ng_chi04::synapse0x1f5bf20() {
   return (neuron0x1f46870()*-0.746228);
}

double NNfunction_ng_chi04::synapse0x1f5bf60() {
   return (neuron0x1f47240()*0.129819);
}

double NNfunction_ng_chi04::synapse0x1f62e10() {
   return (neuron0x1f59880()*-0.20094);
}

double NNfunction_ng_chi04::synapse0x1f62e50() {
   return (neuron0x1f5a130()*1.21657);
}

double NNfunction_ng_chi04::synapse0x1f62e90() {
   return (neuron0x1f5ab00()*-1.45998);
}

double NNfunction_ng_chi04::synapse0x1f62ed0() {
   return (neuron0x1f5b4d0()*0.160559);
}

double NNfunction_ng_chi04::synapse0x1f63250() {
   return (neuron0x1f36460()*1.6856);
}

double NNfunction_ng_chi04::synapse0x1f63290() {
   return (neuron0x1f36ca0()*-1.11985);
}

double NNfunction_ng_chi04::synapse0x1f632d0() {
   return (neuron0x1f37780()*0.0204398);
}

double NNfunction_ng_chi04::synapse0x1f63310() {
   return (neuron0x1cfbba0()*-2.37371);
}

double NNfunction_ng_chi04::synapse0x1f63350() {
   return (neuron0x1f38560()*0.360801);
}

double NNfunction_ng_chi04::synapse0x1f63390() {
   return (neuron0x1f3a030()*-1.88917);
}

double NNfunction_ng_chi04::synapse0x1f633d0() {
   return (neuron0x1f3ae00()*-1.82276);
}

double NNfunction_ng_chi04::synapse0x1f63410() {
   return (neuron0x1f3b7d0()*0.697747);
}

double NNfunction_ng_chi04::synapse0x1f63450() {
   return (neuron0x1f3c1a0()*-0.157337);
}

double NNfunction_ng_chi04::synapse0x1f63490() {
   return (neuron0x1f3cc80()*0.42036);
}

double NNfunction_ng_chi04::synapse0x1f634d0() {
   return (neuron0x1f3d650()*1.24648);
}

double NNfunction_ng_chi04::synapse0x1f63510() {
   return (neuron0x1f3a730()*1.3975);
}

double NNfunction_ng_chi04::synapse0x1f63550() {
   return (neuron0x1f3f200()*1.4873);
}

double NNfunction_ng_chi04::synapse0x1f63590() {
   return (neuron0x1f3fbd0()*-2.7365);
}

double NNfunction_ng_chi04::synapse0x1f635d0() {
   return (neuron0x1f405a0()*2.60132);
}

double NNfunction_ng_chi04::synapse0x1f63610() {
   return (neuron0x1f40f70()*0.501544);
}

double NNfunction_ng_chi04::synapse0x1f630a0() {
   return (neuron0x1f42d80()*0.0310463);
}

double NNfunction_ng_chi04::synapse0x1f630e0() {
   return (neuron0x1f43060()*0.0154735);
}

double NNfunction_ng_chi04::synapse0x1f63760() {
   return (neuron0x1f43a30()*1.36624);
}

double NNfunction_ng_chi04::synapse0x1f637a0() {
   return (neuron0x1f44400()*1.56942);
}

double NNfunction_ng_chi04::synapse0x1f637e0() {
   return (neuron0x1f44dd0()*0.0545891);
}

double NNfunction_ng_chi04::synapse0x1f63820() {
   return (neuron0x1f457a0()*-0.127673);
}

double NNfunction_ng_chi04::synapse0x1f63860() {
   return (neuron0x1f3e2f0()*0.0384053);
}

double NNfunction_ng_chi04::synapse0x1f638a0() {
   return (neuron0x1f3ecc0()*0.0381833);
}

double NNfunction_ng_chi04::synapse0x1f638e0() {
   return (neuron0x1f48530()*2.49389);
}

double NNfunction_ng_chi04::synapse0x1f63920() {
   return (neuron0x1f48f00()*-1.56983);
}

double NNfunction_ng_chi04::synapse0x1f63960() {
   return (neuron0x1f498d0()*-0.681274);
}

double NNfunction_ng_chi04::synapse0x1f639a0() {
   return (neuron0x1f4a2a0()*0.0705882);
}

double NNfunction_ng_chi04::synapse0x1f639e0() {
   return (neuron0x1f4ac70()*0.563491);
}

double NNfunction_ng_chi04::synapse0x1f63a20() {
   return (neuron0x1f4b640()*0.163348);
}

double NNfunction_ng_chi04::synapse0x1f63a60() {
   return (neuron0x1f4c010()*-0.323973);
}

double NNfunction_ng_chi04::synapse0x1f63aa0() {
   return (neuron0x1f4c9e0()*0.40903);
}

double NNfunction_ng_chi04::synapse0x1f63650() {
   return (neuron0x1f42a70()*-0.150785);
}

double NNfunction_ng_chi04::synapse0x1f63690() {
   return (neuron0x1f4f5c0()*2.367);
}

double NNfunction_ng_chi04::synapse0x1f636d0() {
   return (neuron0x1f4ff90()*0.185766);
}

double NNfunction_ng_chi04::synapse0x1f63710() {
   return (neuron0x1f50960()*0.119728);
}

double NNfunction_ng_chi04::synapse0x1f63cf0() {
   return (neuron0x1f51330()*-0.657132);
}

double NNfunction_ng_chi04::synapse0x1f63d30() {
   return (neuron0x1f51d00()*1.86537);
}

double NNfunction_ng_chi04::synapse0x1f63d70() {
   return (neuron0x1f526d0()*1.81499);
}

double NNfunction_ng_chi04::synapse0x1f63db0() {
   return (neuron0x1f530a0()*-0.477274);
}

double NNfunction_ng_chi04::synapse0x1f63df0() {
   return (neuron0x1f53a70()*2.41739);
}

double NNfunction_ng_chi04::synapse0x1f63e30() {
   return (neuron0x1f54650()*0.94753);
}

double NNfunction_ng_chi04::synapse0x1f63e70() {
   return (neuron0x1f55020()*0.551001);
}

double NNfunction_ng_chi04::synapse0x1f63eb0() {
   return (neuron0x1f45ea0()*-0.900782);
}

double NNfunction_ng_chi04::synapse0x1f63ef0() {
   return (neuron0x1f46870()*-0.379603);
}

double NNfunction_ng_chi04::synapse0x1f63f30() {
   return (neuron0x1f47240()*0.7163);
}

double NNfunction_ng_chi04::synapse0x1f63f70() {
   return (neuron0x1f59880()*-0.0858561);
}

double NNfunction_ng_chi04::synapse0x1f63fb0() {
   return (neuron0x1f5a130()*-3.02335);
}

double NNfunction_ng_chi04::synapse0x1f63ff0() {
   return (neuron0x1f5ab00()*1.4242);
}

double NNfunction_ng_chi04::synapse0x1f64030() {
   return (neuron0x1f5b4d0()*0.0654311);
}

double NNfunction_ng_chi04::synapse0x1f643b0() {
   return (neuron0x1f36460()*-1.19338);
}

double NNfunction_ng_chi04::synapse0x1f643f0() {
   return (neuron0x1f36ca0()*-0.378022);
}

double NNfunction_ng_chi04::synapse0x1f64430() {
   return (neuron0x1f37780()*0.466867);
}

double NNfunction_ng_chi04::synapse0x1f64470() {
   return (neuron0x1cfbba0()*0.18373);
}

double NNfunction_ng_chi04::synapse0x1f644b0() {
   return (neuron0x1f38560()*-0.158175);
}

double NNfunction_ng_chi04::synapse0x1f644f0() {
   return (neuron0x1f3a030()*0.420508);
}

double NNfunction_ng_chi04::synapse0x1f64530() {
   return (neuron0x1f3ae00()*0.375832);
}

double NNfunction_ng_chi04::synapse0x1f64570() {
   return (neuron0x1f3b7d0()*0.586759);
}

double NNfunction_ng_chi04::synapse0x1f645b0() {
   return (neuron0x1f3c1a0()*0.126388);
}

double NNfunction_ng_chi04::synapse0x1f645f0() {
   return (neuron0x1f3cc80()*-0.00259662);
}

double NNfunction_ng_chi04::synapse0x1f64630() {
   return (neuron0x1f3d650()*0.808291);
}

double NNfunction_ng_chi04::synapse0x1f64670() {
   return (neuron0x1f3a730()*-0.0740074);
}

double NNfunction_ng_chi04::synapse0x1f646b0() {
   return (neuron0x1f3f200()*-0.31558);
}

double NNfunction_ng_chi04::synapse0x1f646f0() {
   return (neuron0x1f3fbd0()*-0.88132);
}

double NNfunction_ng_chi04::synapse0x1f64730() {
   return (neuron0x1f405a0()*-0.160166);
}

double NNfunction_ng_chi04::synapse0x1f64770() {
   return (neuron0x1f40f70()*-0.246605);
}

double NNfunction_ng_chi04::synapse0x1f64200() {
   return (neuron0x1f42d80()*0.181877);
}

double NNfunction_ng_chi04::synapse0x1f64240() {
   return (neuron0x1f43060()*-0.354389);
}

double NNfunction_ng_chi04::synapse0x1f648c0() {
   return (neuron0x1f43a30()*-0.0565533);
}

double NNfunction_ng_chi04::synapse0x1f64900() {
   return (neuron0x1f44400()*-0.440151);
}

double NNfunction_ng_chi04::synapse0x1f64940() {
   return (neuron0x1f44dd0()*-0.0299346);
}

double NNfunction_ng_chi04::synapse0x1f64980() {
   return (neuron0x1f457a0()*0.188318);
}

double NNfunction_ng_chi04::synapse0x1f649c0() {
   return (neuron0x1f3e2f0()*-0.17601);
}

double NNfunction_ng_chi04::synapse0x1f64a00() {
   return (neuron0x1f3ecc0()*0.228532);
}

double NNfunction_ng_chi04::synapse0x1f64a40() {
   return (neuron0x1f48530()*-0.489647);
}

double NNfunction_ng_chi04::synapse0x1f64a80() {
   return (neuron0x1f48f00()*-0.72788);
}

double NNfunction_ng_chi04::synapse0x1f64ac0() {
   return (neuron0x1f498d0()*-0.688509);
}

double NNfunction_ng_chi04::synapse0x1f64b00() {
   return (neuron0x1f4a2a0()*0.0838305);
}

double NNfunction_ng_chi04::synapse0x1f64b40() {
   return (neuron0x1f4ac70()*-0.151708);
}

double NNfunction_ng_chi04::synapse0x1f64b80() {
   return (neuron0x1f4b640()*0.306482);
}

double NNfunction_ng_chi04::synapse0x1f64bc0() {
   return (neuron0x1f4c010()*0.627135);
}

double NNfunction_ng_chi04::synapse0x1f64c00() {
   return (neuron0x1f4c9e0()*0.0634474);
}

double NNfunction_ng_chi04::synapse0x1f647b0() {
   return (neuron0x1f42a70()*-0.502629);
}

double NNfunction_ng_chi04::synapse0x1f647f0() {
   return (neuron0x1f4f5c0()*1.17765);
}

double NNfunction_ng_chi04::synapse0x1f64830() {
   return (neuron0x1f4ff90()*0.084589);
}

double NNfunction_ng_chi04::synapse0x1f64870() {
   return (neuron0x1f50960()*-0.628504);
}

double NNfunction_ng_chi04::synapse0x1f64e50() {
   return (neuron0x1f51330()*-0.553446);
}

double NNfunction_ng_chi04::synapse0x1f64e90() {
   return (neuron0x1f51d00()*-0.25842);
}

double NNfunction_ng_chi04::synapse0x1f64ed0() {
   return (neuron0x1f526d0()*-0.525436);
}

double NNfunction_ng_chi04::synapse0x1f64f10() {
   return (neuron0x1f530a0()*-1.28624);
}

double NNfunction_ng_chi04::synapse0x1f64f50() {
   return (neuron0x1f53a70()*-0.99096);
}

double NNfunction_ng_chi04::synapse0x1f64f90() {
   return (neuron0x1f54650()*-1.58205);
}

double NNfunction_ng_chi04::synapse0x1f64fd0() {
   return (neuron0x1f55020()*-0.338272);
}

double NNfunction_ng_chi04::synapse0x1f65010() {
   return (neuron0x1f45ea0()*0.071637);
}

double NNfunction_ng_chi04::synapse0x1f65050() {
   return (neuron0x1f46870()*-0.416046);
}

double NNfunction_ng_chi04::synapse0x1f65090() {
   return (neuron0x1f47240()*-0.0721268);
}

double NNfunction_ng_chi04::synapse0x1f650d0() {
   return (neuron0x1f59880()*0.0822422);
}

double NNfunction_ng_chi04::synapse0x1f65110() {
   return (neuron0x1f5a130()*-0.724913);
}

double NNfunction_ng_chi04::synapse0x1f65150() {
   return (neuron0x1f5ab00()*0.266426);
}

double NNfunction_ng_chi04::synapse0x1f65190() {
   return (neuron0x1f5b4d0()*-0.455209);
}

double NNfunction_ng_chi04::synapse0x1f65510() {
   return (neuron0x1f36460()*-0.165597);
}

double NNfunction_ng_chi04::synapse0x1f65550() {
   return (neuron0x1f36ca0()*0.314378);
}

double NNfunction_ng_chi04::synapse0x1f65590() {
   return (neuron0x1f37780()*-0.433181);
}

double NNfunction_ng_chi04::synapse0x1f655d0() {
   return (neuron0x1cfbba0()*0.0162642);
}

double NNfunction_ng_chi04::synapse0x1f65610() {
   return (neuron0x1f38560()*-0.697184);
}

double NNfunction_ng_chi04::synapse0x1f65650() {
   return (neuron0x1f3a030()*-0.766791);
}

double NNfunction_ng_chi04::synapse0x1f65690() {
   return (neuron0x1f3ae00()*0.601775);
}

double NNfunction_ng_chi04::synapse0x1f656d0() {
   return (neuron0x1f3b7d0()*0.381666);
}

double NNfunction_ng_chi04::synapse0x1f65710() {
   return (neuron0x1f3c1a0()*0.168595);
}

double NNfunction_ng_chi04::synapse0x1f65750() {
   return (neuron0x1f3cc80()*-1.73501);
}

double NNfunction_ng_chi04::synapse0x1f65790() {
   return (neuron0x1f3d650()*0.348926);
}

double NNfunction_ng_chi04::synapse0x1f657d0() {
   return (neuron0x1f3a730()*-0.0351088);
}

double NNfunction_ng_chi04::synapse0x1f65810() {
   return (neuron0x1f3f200()*-0.241468);
}

double NNfunction_ng_chi04::synapse0x1f65850() {
   return (neuron0x1f3fbd0()*-0.077154);
}

double NNfunction_ng_chi04::synapse0x1f65890() {
   return (neuron0x1f405a0()*-0.478108);
}

double NNfunction_ng_chi04::synapse0x1f658d0() {
   return (neuron0x1f40f70()*0.24895);
}

double NNfunction_ng_chi04::synapse0x1f65360() {
   return (neuron0x1f42d80()*-0.191155);
}

double NNfunction_ng_chi04::synapse0x1f653a0() {
   return (neuron0x1f43060()*-1.68007);
}

double NNfunction_ng_chi04::synapse0x1f65a20() {
   return (neuron0x1f43a30()*0.353201);
}

double NNfunction_ng_chi04::synapse0x1f65a60() {
   return (neuron0x1f44400()*-0.157632);
}

double NNfunction_ng_chi04::synapse0x1f65aa0() {
   return (neuron0x1f44dd0()*-0.358103);
}

double NNfunction_ng_chi04::synapse0x1f65ae0() {
   return (neuron0x1f457a0()*-0.0345432);
}

double NNfunction_ng_chi04::synapse0x1f65b20() {
   return (neuron0x1f3e2f0()*-0.989457);
}

double NNfunction_ng_chi04::synapse0x1f65b60() {
   return (neuron0x1f3ecc0()*0.77646);
}

double NNfunction_ng_chi04::synapse0x1f65ba0() {
   return (neuron0x1f48530()*-0.74362);
}

double NNfunction_ng_chi04::synapse0x1f65be0() {
   return (neuron0x1f48f00()*-0.576146);
}

double NNfunction_ng_chi04::synapse0x1f65c20() {
   return (neuron0x1f498d0()*-0.185038);
}

double NNfunction_ng_chi04::synapse0x1f65c60() {
   return (neuron0x1f4a2a0()*-0.572508);
}

double NNfunction_ng_chi04::synapse0x1f65ca0() {
   return (neuron0x1f4ac70()*-1.12469);
}

double NNfunction_ng_chi04::synapse0x1f65ce0() {
   return (neuron0x1f4b640()*-1.24715);
}

double NNfunction_ng_chi04::synapse0x1f65d20() {
   return (neuron0x1f4c010()*-0.395996);
}

double NNfunction_ng_chi04::synapse0x1f65d60() {
   return (neuron0x1f4c9e0()*1.6977);
}

double NNfunction_ng_chi04::synapse0x1f65910() {
   return (neuron0x1f42a70()*-0.53256);
}

double NNfunction_ng_chi04::synapse0x1f65950() {
   return (neuron0x1f4f5c0()*0.0591355);
}

double NNfunction_ng_chi04::synapse0x1f65990() {
   return (neuron0x1f4ff90()*0.39104);
}

double NNfunction_ng_chi04::synapse0x1f659d0() {
   return (neuron0x1f50960()*-1.75346);
}

double NNfunction_ng_chi04::synapse0x1f65fb0() {
   return (neuron0x1f51330()*-0.839922);
}

double NNfunction_ng_chi04::synapse0x1f65ff0() {
   return (neuron0x1f51d00()*2.23502);
}

double NNfunction_ng_chi04::synapse0x1f66030() {
   return (neuron0x1f526d0()*0.280053);
}

double NNfunction_ng_chi04::synapse0x1f66070() {
   return (neuron0x1f530a0()*-1.54698);
}

double NNfunction_ng_chi04::synapse0x1f660b0() {
   return (neuron0x1f53a70()*-0.0729743);
}

double NNfunction_ng_chi04::synapse0x1f660f0() {
   return (neuron0x1f54650()*-0.573727);
}

double NNfunction_ng_chi04::synapse0x1f66130() {
   return (neuron0x1f55020()*-0.0371002);
}

double NNfunction_ng_chi04::synapse0x1f66170() {
   return (neuron0x1f45ea0()*-1.06076);
}

double NNfunction_ng_chi04::synapse0x1f661b0() {
   return (neuron0x1f46870()*0.200663);
}

double NNfunction_ng_chi04::synapse0x1f661f0() {
   return (neuron0x1f47240()*1.88072);
}

double NNfunction_ng_chi04::synapse0x1f66230() {
   return (neuron0x1f59880()*0.65195);
}

double NNfunction_ng_chi04::synapse0x1f66270() {
   return (neuron0x1f5a130()*-0.173897);
}

double NNfunction_ng_chi04::synapse0x1f662b0() {
   return (neuron0x1f5ab00()*0.265997);
}

double NNfunction_ng_chi04::synapse0x1f662f0() {
   return (neuron0x1f5b4d0()*-0.204781);
}

double NNfunction_ng_chi04::synapse0x1f66550() {
   return (neuron0x1f626d0()*-7.36781);
}

double NNfunction_ng_chi04::synapse0x1f66590() {
   return (neuron0x1f62a70()*-2.20545);
}

double NNfunction_ng_chi04::synapse0x1f665d0() {
   return (neuron0x1f62f10()*-3.4054);
}

double NNfunction_ng_chi04::synapse0x1f66610() {
   return (neuron0x1f64070()*-1.36273);
}

double NNfunction_ng_chi04::synapse0x1f66650() {
   return (neuron0x1f651d0()*-1.21186);
}

