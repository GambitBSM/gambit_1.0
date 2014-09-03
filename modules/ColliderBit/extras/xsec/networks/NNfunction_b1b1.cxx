#include "NNfunction_b1b1.h"
#include <cmath>

double NNfunction_b1b1::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5151)/15.3155;
   input1 = (in1 - 1.25851)/1164.16;
   input2 = (in2 - 664.311)/630.066;
   input3 = (in3 - -44.8404)/831.85;
   input4 = (in4 - 1065.6)/964.405;
   input5 = (in5 - 908.96)/960.969;
   input6 = (in6 - 916.043)/961.165;
   input7 = (in7 - 936.309)/942.246;
   input8 = (in8 - 927.461)/974.006;
   input9 = (in9 - 912.961)/959.948;
   input10 = (in10 - 982.842)/952.594;
   input11 = (in11 - 728.671)/872.136;
   input12 = (in12 - 730.325)/872.455;
   input13 = (in13 - 462.562)/465.624;
   input14 = (in14 - 735.644)/830.809;
   input15 = (in15 - 737.41)/830.465;
   input16 = (in16 - 544.141)/571.891;
   input17 = (in17 - 760.213)/902.273;
   input18 = (in18 - 757.623)/903.054;
   input19 = (in19 - 758.967)/844.155;
   input20 = (in20 - -3.76663)/487.721;
   input21 = (in21 - 1.58436)/1152.81;
   input22 = (in22 - -0.824955)/1201.07;
   input23 = (in23 - -203.044)/602.328;
   switch(index) {
     case 0:
         return neuron0x1f95d70();
     default:
         return 0.;
   }
}

double NNfunction_b1b1::Value(int index, double* input) {
   input0 = (input[0] - 23.5151)/15.3155;
   input1 = (input[1] - 1.25851)/1164.16;
   input2 = (input[2] - 664.311)/630.066;
   input3 = (input[3] - -44.8404)/831.85;
   input4 = (input[4] - 1065.6)/964.405;
   input5 = (input[5] - 908.96)/960.969;
   input6 = (input[6] - 916.043)/961.165;
   input7 = (input[7] - 936.309)/942.246;
   input8 = (input[8] - 927.461)/974.006;
   input9 = (input[9] - 912.961)/959.948;
   input10 = (input[10] - 982.842)/952.594;
   input11 = (input[11] - 728.671)/872.136;
   input12 = (input[12] - 730.325)/872.455;
   input13 = (input[13] - 462.562)/465.624;
   input14 = (input[14] - 735.644)/830.809;
   input15 = (input[15] - 737.41)/830.465;
   input16 = (input[16] - 544.141)/571.891;
   input17 = (input[17] - 760.213)/902.273;
   input18 = (input[18] - 757.623)/903.054;
   input19 = (input[19] - 758.967)/844.155;
   input20 = (input[20] - -3.76663)/487.721;
   input21 = (input[21] - 1.58436)/1152.81;
   input22 = (input[22] - -0.824955)/1201.07;
   input23 = (input[23] - -203.044)/602.328;
   switch(index) {
     case 0:
         return neuron0x1f95d70();
     default:
         return 0.;
   }
}

double NNfunction_b1b1::neuron0x1f61e60() {
   return input0;
}

double NNfunction_b1b1::neuron0x1f621a0() {
   return input1;
}

double NNfunction_b1b1::neuron0x1f624e0() {
   return input2;
}

double NNfunction_b1b1::neuron0x1f62820() {
   return input3;
}

double NNfunction_b1b1::neuron0x1f62b60() {
   return input4;
}

double NNfunction_b1b1::neuron0x1f62ea0() {
   return input5;
}

double NNfunction_b1b1::neuron0x1f631e0() {
   return input6;
}

double NNfunction_b1b1::neuron0x1f63520() {
   return input7;
}

double NNfunction_b1b1::neuron0x1f63860() {
   return input8;
}

double NNfunction_b1b1::neuron0x1f63ba0() {
   return input9;
}

double NNfunction_b1b1::neuron0x1f63ee0() {
   return input10;
}

double NNfunction_b1b1::neuron0x1f64220() {
   return input11;
}

double NNfunction_b1b1::neuron0x1f64560() {
   return input12;
}

double NNfunction_b1b1::neuron0x1f648a0() {
   return input13;
}

double NNfunction_b1b1::neuron0x1f64be0() {
   return input14;
}

double NNfunction_b1b1::neuron0x1f64f20() {
   return input15;
}

double NNfunction_b1b1::neuron0x1f65260() {
   return input16;
}

double NNfunction_b1b1::neuron0x1f657c0() {
   return input17;
}

double NNfunction_b1b1::neuron0x1f659e0() {
   return input18;
}

double NNfunction_b1b1::neuron0x1f65d20() {
   return input19;
}

double NNfunction_b1b1::neuron0x1f66060() {
   return input20;
}

double NNfunction_b1b1::neuron0x1f663a0() {
   return input21;
}

double NNfunction_b1b1::neuron0x1f666e0() {
   return input22;
}

double NNfunction_b1b1::neuron0x1f66a20() {
   return input23;
}

double NNfunction_b1b1::input0x1f66e90() {
   double input = -1.37563;
   input += synapse0x1f61d20();
   input += synapse0x1f61d60();
   input += synapse0x1f67140();
   input += synapse0x1f67180();
   input += synapse0x1f671c0();
   input += synapse0x1f67200();
   input += synapse0x1f67240();
   input += synapse0x1f67280();
   input += synapse0x1f672c0();
   input += synapse0x1f67300();
   input += synapse0x1f67340();
   input += synapse0x1f67380();
   input += synapse0x1f673c0();
   input += synapse0x1f67400();
   input += synapse0x1f67440();
   input += synapse0x1f67480();
   input += synapse0x1f61c90();
   input += synapse0x1f61cd0();
   input += synapse0x1d13910();
   input += synapse0x1d13950();
   input += synapse0x1f676e0();
   input += synapse0x1f67720();
   input += synapse0x1f67760();
   input += synapse0x1f677a0();
   return input;
}

double NNfunction_b1b1::neuron0x1f66e90() {
   double input = input0x1f66e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f677e0() {
   double input = 0.376725;
   input += synapse0x1f67b20();
   input += synapse0x1f67b60();
   input += synapse0x1f67ba0();
   input += synapse0x1f67be0();
   input += synapse0x1f67c20();
   input += synapse0x1f67c60();
   input += synapse0x1f67ca0();
   input += synapse0x1f67ce0();
   input += synapse0x1f67d20();
   input += synapse0x1f675d0();
   input += synapse0x1f67610();
   input += synapse0x1f67650();
   input += synapse0x1f67690();
   input += synapse0x1f67f70();
   input += synapse0x1f67fb0();
   input += synapse0x1f67ff0();
   input += synapse0x1f67970();
   input += synapse0x1f679b0();
   input += synapse0x1f68140();
   input += synapse0x1f68180();
   input += synapse0x1f681c0();
   input += synapse0x1f68200();
   input += synapse0x1f68240();
   input += synapse0x1f68280();
   return input;
}

double NNfunction_b1b1::neuron0x1f677e0() {
   double input = input0x1f677e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f682c0() {
   double input = 0.0920503;
   input += synapse0x1f68600();
   input += synapse0x1f68640();
   input += synapse0x1f68680();
   input += synapse0x1f686c0();
   input += synapse0x1f68700();
   input += synapse0x1f68740();
   input += synapse0x1f68780();
   input += synapse0x1f687c0();
   input += synapse0x1f68800();
   input += synapse0x1f68840();
   input += synapse0x1f68880();
   input += synapse0x1f688c0();
   input += synapse0x1f68900();
   input += synapse0x1f68940();
   input += synapse0x1f68980();
   input += synapse0x1f689c0();
   input += synapse0x1f68450();
   input += synapse0x1f68490();
   input += synapse0x1d13d40();
   input += synapse0x1d21460();
   input += synapse0x1d214a0();
   input += synapse0x1f50ef0();
   input += synapse0x1f50f30();
   input += synapse0x1f50f70();
   return input;
}

double NNfunction_b1b1::neuron0x1f682c0() {
   double input = input0x1f682c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f67d60() {
   double input = -1.19579;
   input += synapse0x1d21d00();
   input += synapse0x1f67ef0();
   input += synapse0x1f67f30();
   input += synapse0x1f68b10();
   input += synapse0x1f68b50();
   input += synapse0x1f68b90();
   input += synapse0x1f68bd0();
   input += synapse0x1f68c10();
   input += synapse0x1f68c50();
   input += synapse0x1f68c90();
   input += synapse0x1f68cd0();
   input += synapse0x1f68d10();
   input += synapse0x1f68d50();
   input += synapse0x1f68d90();
   input += synapse0x1f68dd0();
   input += synapse0x1f68e10();
   input += synapse0x1f61da0();
   input += synapse0x1f61de0();
   input += synapse0x1f61e20();
   input += synapse0x1f68f60();
   input += synapse0x1f68fa0();
   input += synapse0x1f68fe0();
   input += synapse0x1f69020();
   input += synapse0x1f69060();
   return input;
}

double NNfunction_b1b1::neuron0x1f67d60() {
   double input = input0x1f67d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f690a0() {
   double input = 1.11266;
   input += synapse0x1f693e0();
   input += synapse0x1f69420();
   input += synapse0x1f69460();
   input += synapse0x1f694a0();
   input += synapse0x1f694e0();
   input += synapse0x1f69520();
   input += synapse0x1f69560();
   input += synapse0x1f695a0();
   input += synapse0x1f695e0();
   input += synapse0x1f69620();
   input += synapse0x1f69660();
   input += synapse0x1f696a0();
   input += synapse0x1f696e0();
   input += synapse0x1f69720();
   input += synapse0x1f69760();
   input += synapse0x1f697a0();
   input += synapse0x1f69230();
   input += synapse0x1f69270();
   input += synapse0x1f698f0();
   input += synapse0x1f69930();
   input += synapse0x1f69970();
   input += synapse0x1f699b0();
   input += synapse0x1f699f0();
   input += synapse0x1f69a30();
   return input;
}

double NNfunction_b1b1::neuron0x1f690a0() {
   double input = input0x1f690a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f69a70() {
   double input = -0.19789;
   input += synapse0x1f69db0();
   input += synapse0x1f69df0();
   input += synapse0x1f69e30();
   input += synapse0x1f69e70();
   input += synapse0x1f69eb0();
   input += synapse0x1f69ef0();
   input += synapse0x1f69f30();
   input += synapse0x1f69f70();
   input += synapse0x1f69fb0();
   input += synapse0x1d217d0();
   input += synapse0x1d21810();
   input += synapse0x1d21850();
   input += synapse0x1d21890();
   input += synapse0x1d218d0();
   input += synapse0x1d21910();
   input += synapse0x1d21950();
   input += synapse0x1f69c00();
   input += synapse0x1f69c40();
   input += synapse0x1d21aa0();
   input += synapse0x1d21ae0();
   input += synapse0x1d21b20();
   input += synapse0x1d21b60();
   input += synapse0x1d21ba0();
   input += synapse0x1f6a800();
   return input;
}

double NNfunction_b1b1::neuron0x1f69a70() {
   double input = input0x1f69a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f6a840() {
   double input = 0.838527;
   input += synapse0x1f6ab80();
   input += synapse0x1f6abc0();
   input += synapse0x1f6ac00();
   input += synapse0x1f6ac40();
   input += synapse0x1f6ac80();
   input += synapse0x1f6acc0();
   input += synapse0x1f6ad00();
   input += synapse0x1f6ad40();
   input += synapse0x1f6ad80();
   input += synapse0x1f6adc0();
   input += synapse0x1f6ae00();
   input += synapse0x1f6ae40();
   input += synapse0x1f6ae80();
   input += synapse0x1f6aec0();
   input += synapse0x1f6af00();
   input += synapse0x1f6af40();
   input += synapse0x1f6a9d0();
   input += synapse0x1f6aa10();
   input += synapse0x1f6b090();
   input += synapse0x1f6b0d0();
   input += synapse0x1f6b110();
   input += synapse0x1f6b150();
   input += synapse0x1f6b190();
   input += synapse0x1f6b1d0();
   return input;
}

double NNfunction_b1b1::neuron0x1f6a840() {
   double input = input0x1f6a840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f6b210() {
   double input = 0.218694;
   input += synapse0x1f6b550();
   input += synapse0x1f6b590();
   input += synapse0x1f6b5d0();
   input += synapse0x1f6b610();
   input += synapse0x1f6b650();
   input += synapse0x1f6b690();
   input += synapse0x1f6b6d0();
   input += synapse0x1f6b710();
   input += synapse0x1f6b750();
   input += synapse0x1f6b790();
   input += synapse0x1f6b7d0();
   input += synapse0x1f6b810();
   input += synapse0x1f6b850();
   input += synapse0x1f6b890();
   input += synapse0x1f6b8d0();
   input += synapse0x1f6b910();
   input += synapse0x1f6b3a0();
   input += synapse0x1f6b3e0();
   input += synapse0x1f6ba60();
   input += synapse0x1f6baa0();
   input += synapse0x1f6bae0();
   input += synapse0x1f6bb20();
   input += synapse0x1f6bb60();
   input += synapse0x1f6bba0();
   return input;
}

double NNfunction_b1b1::neuron0x1f6b210() {
   double input = input0x1f6b210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f6bbe0() {
   double input = 2.76639;
   input += synapse0x1f656b0();
   input += synapse0x1f656f0();
   input += synapse0x1f65730();
   input += synapse0x1f65770();
   input += synapse0x1f6c130();
   input += synapse0x1f6c170();
   input += synapse0x1f6c1b0();
   input += synapse0x1f6c1f0();
   input += synapse0x1f6c230();
   input += synapse0x1f6c270();
   input += synapse0x1f6c2b0();
   input += synapse0x1f6c2f0();
   input += synapse0x1f6c330();
   input += synapse0x1f6c370();
   input += synapse0x1f6c3b0();
   input += synapse0x1f6c3f0();
   input += synapse0x1f6bd70();
   input += synapse0x1f6bdb0();
   input += synapse0x1f6c540();
   input += synapse0x1f6c580();
   input += synapse0x1f6c5c0();
   input += synapse0x1f6c600();
   input += synapse0x1f6c640();
   input += synapse0x1f6c680();
   return input;
}

double NNfunction_b1b1::neuron0x1f6bbe0() {
   double input = input0x1f6bbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f6c6c0() {
   double input = 0.650236;
   input += synapse0x1f6ca00();
   input += synapse0x1f6ca40();
   input += synapse0x1f6ca80();
   input += synapse0x1f6cac0();
   input += synapse0x1f6cb00();
   input += synapse0x1f6cb40();
   input += synapse0x1f6cb80();
   input += synapse0x1f6cbc0();
   input += synapse0x1f6cc00();
   input += synapse0x1f6cc40();
   input += synapse0x1f6cc80();
   input += synapse0x1f6ccc0();
   input += synapse0x1f6cd00();
   input += synapse0x1f6cd40();
   input += synapse0x1f6cd80();
   input += synapse0x1f6cdc0();
   input += synapse0x1f6c850();
   input += synapse0x1f6c890();
   input += synapse0x1f6cf10();
   input += synapse0x1f6cf50();
   input += synapse0x1f6cf90();
   input += synapse0x1f6cfd0();
   input += synapse0x1f6d010();
   input += synapse0x1f6d050();
   return input;
}

double NNfunction_b1b1::neuron0x1f6c6c0() {
   double input = input0x1f6c6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f6d090() {
   double input = 1.95269;
   input += synapse0x1f6d3d0();
   input += synapse0x1f6d410();
   input += synapse0x1f6d450();
   input += synapse0x1f6d490();
   input += synapse0x1f6d4d0();
   input += synapse0x1f6d510();
   input += synapse0x1f6d550();
   input += synapse0x1f6d590();
   input += synapse0x1f6d5d0();
   input += synapse0x1f6d610();
   input += synapse0x1f6d650();
   input += synapse0x1f6d690();
   input += synapse0x1f6d6d0();
   input += synapse0x1f6d710();
   input += synapse0x1f6d750();
   input += synapse0x1f6d790();
   input += synapse0x1f6d220();
   input += synapse0x1f6d260();
   input += synapse0x1f69ff0();
   input += synapse0x1f6a030();
   input += synapse0x1f6a070();
   input += synapse0x1f6a0b0();
   input += synapse0x1f6a0f0();
   input += synapse0x1f6a130();
   return input;
}

double NNfunction_b1b1::neuron0x1f6d090() {
   double input = input0x1f6d090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f6a170() {
   double input = -9.00895;
   input += synapse0x1f6a4b0();
   input += synapse0x1f6a4f0();
   input += synapse0x1f6a530();
   input += synapse0x1f6a570();
   input += synapse0x1f6a5b0();
   input += synapse0x1f6a5f0();
   input += synapse0x1f6a630();
   input += synapse0x1f6a670();
   input += synapse0x1f6a6b0();
   input += synapse0x1f6a6f0();
   input += synapse0x1f6a730();
   input += synapse0x1f6a770();
   input += synapse0x1f6a7b0();
   input += synapse0x1f6e8f0();
   input += synapse0x1f6e930();
   input += synapse0x1f6e970();
   input += synapse0x1f6a300();
   input += synapse0x1f6a340();
   input += synapse0x1f6eac0();
   input += synapse0x1f6eb00();
   input += synapse0x1f6eb40();
   input += synapse0x1f6eb80();
   input += synapse0x1f6ebc0();
   input += synapse0x1f6ec00();
   return input;
}

double NNfunction_b1b1::neuron0x1f6a170() {
   double input = input0x1f6a170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f6ec40() {
   double input = -2.2843;
   input += synapse0x1f6ef80();
   input += synapse0x1f6efc0();
   input += synapse0x1f6f000();
   input += synapse0x1f6f040();
   input += synapse0x1f6f080();
   input += synapse0x1f6f0c0();
   input += synapse0x1f6f100();
   input += synapse0x1f6f140();
   input += synapse0x1f6f180();
   input += synapse0x1f6f1c0();
   input += synapse0x1f6f200();
   input += synapse0x1f6f240();
   input += synapse0x1f6f280();
   input += synapse0x1f6f2c0();
   input += synapse0x1f6f300();
   input += synapse0x1f6f340();
   input += synapse0x1f6edd0();
   input += synapse0x1f6ee10();
   input += synapse0x1f6f490();
   input += synapse0x1f6f4d0();
   input += synapse0x1f6f510();
   input += synapse0x1f6f550();
   input += synapse0x1f6f590();
   input += synapse0x1f6f5d0();
   return input;
}

double NNfunction_b1b1::neuron0x1f6ec40() {
   double input = input0x1f6ec40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f6f610() {
   double input = -0.187223;
   input += synapse0x1f6f950();
   input += synapse0x1f6f990();
   input += synapse0x1f6f9d0();
   input += synapse0x1f6fa10();
   input += synapse0x1f6fa50();
   input += synapse0x1f6fa90();
   input += synapse0x1f6fad0();
   input += synapse0x1f6fb10();
   input += synapse0x1f6fb50();
   input += synapse0x1f6fb90();
   input += synapse0x1f6fbd0();
   input += synapse0x1f6fc10();
   input += synapse0x1f6fc50();
   input += synapse0x1f6fc90();
   input += synapse0x1f6fcd0();
   input += synapse0x1f6fd10();
   input += synapse0x1f6f7a0();
   input += synapse0x1f6f7e0();
   input += synapse0x1f6fe60();
   input += synapse0x1f6fea0();
   input += synapse0x1f6fee0();
   input += synapse0x1f6ff20();
   input += synapse0x1f6ff60();
   input += synapse0x1f6ffa0();
   return input;
}

double NNfunction_b1b1::neuron0x1f6f610() {
   double input = input0x1f6f610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f6ffe0() {
   double input = 0.781558;
   input += synapse0x1f70320();
   input += synapse0x1f70360();
   input += synapse0x1f703a0();
   input += synapse0x1f703e0();
   input += synapse0x1f70420();
   input += synapse0x1f70460();
   input += synapse0x1f704a0();
   input += synapse0x1f704e0();
   input += synapse0x1f70520();
   input += synapse0x1f70560();
   input += synapse0x1f705a0();
   input += synapse0x1f705e0();
   input += synapse0x1f70620();
   input += synapse0x1f70660();
   input += synapse0x1f706a0();
   input += synapse0x1f706e0();
   input += synapse0x1f70170();
   input += synapse0x1f701b0();
   input += synapse0x1f70830();
   input += synapse0x1f70870();
   input += synapse0x1f708b0();
   input += synapse0x1f708f0();
   input += synapse0x1f70930();
   input += synapse0x1f70970();
   return input;
}

double NNfunction_b1b1::neuron0x1f6ffe0() {
   double input = input0x1f6ffe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f709b0() {
   double input = -0.993342;
   input += synapse0x1f70cf0();
   input += synapse0x1f62080();
   input += synapse0x1f620c0();
   input += synapse0x1f623c0();
   input += synapse0x1f62400();
   input += synapse0x1f62700();
   input += synapse0x1f62740();
   input += synapse0x1f62a40();
   input += synapse0x1f62a80();
   input += synapse0x1f62d80();
   input += synapse0x1f62dc0();
   input += synapse0x1f630c0();
   input += synapse0x1f63100();
   input += synapse0x1f63400();
   input += synapse0x1f63440();
   input += synapse0x1f63740();
   input += synapse0x1f63780();
   input += synapse0x1f63a80();
   input += synapse0x1f63ac0();
   input += synapse0x1f63dc0();
   input += synapse0x1f63e00();
   input += synapse0x1f64100();
   input += synapse0x1f64140();
   input += synapse0x1f64440();
   return input;
}

double NNfunction_b1b1::neuron0x1f709b0() {
   double input = input0x1f709b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f727c0() {
   double input = -3.83156;
   input += synapse0x1f64480();
   input += synapse0x1f65140();
   input += synapse0x1f65180();
   input += synapse0x1f70b40();
   input += synapse0x1f70b80();
   input += synapse0x1f65480();
   input += synapse0x1f654c0();
   input += synapse0x1d137f0();
   input += synapse0x1d13830();
   input += synapse0x1f65c00();
   input += synapse0x1f65c40();
   input += synapse0x1f65f40();
   input += synapse0x1f65f80();
   input += synapse0x1f66280();
   input += synapse0x1f662c0();
   input += synapse0x1f665c0();
   input += synapse0x1f66600();
   input += synapse0x1f66900();
   input += synapse0x1f66940();
   input += synapse0x1f66c40();
   input += synapse0x1f66c80();
   input += synapse0x1f64780();
   input += synapse0x1f647c0();
   input += synapse0x1f72a60();
   return input;
}

double NNfunction_b1b1::neuron0x1f727c0() {
   double input = input0x1f727c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f72aa0() {
   double input = 0.652639;
   input += synapse0x1f72de0();
   input += synapse0x1f72e20();
   input += synapse0x1f72e60();
   input += synapse0x1f72ea0();
   input += synapse0x1f72ee0();
   input += synapse0x1f72f20();
   input += synapse0x1f72f60();
   input += synapse0x1f72fa0();
   input += synapse0x1f72fe0();
   input += synapse0x1f73020();
   input += synapse0x1f73060();
   input += synapse0x1f730a0();
   input += synapse0x1f730e0();
   input += synapse0x1f73120();
   input += synapse0x1f73160();
   input += synapse0x1f731a0();
   input += synapse0x1f72c30();
   input += synapse0x1f72c70();
   input += synapse0x1f732f0();
   input += synapse0x1f73330();
   input += synapse0x1f73370();
   input += synapse0x1f733b0();
   input += synapse0x1f733f0();
   input += synapse0x1f73430();
   return input;
}

double NNfunction_b1b1::neuron0x1f72aa0() {
   double input = input0x1f72aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f73470() {
   double input = -1.00284;
   input += synapse0x1f737b0();
   input += synapse0x1f737f0();
   input += synapse0x1f73830();
   input += synapse0x1f73870();
   input += synapse0x1f738b0();
   input += synapse0x1f738f0();
   input += synapse0x1f73930();
   input += synapse0x1f73970();
   input += synapse0x1f739b0();
   input += synapse0x1f739f0();
   input += synapse0x1f73a30();
   input += synapse0x1f73a70();
   input += synapse0x1f73ab0();
   input += synapse0x1f73af0();
   input += synapse0x1f73b30();
   input += synapse0x1f73b70();
   input += synapse0x1f73600();
   input += synapse0x1f73640();
   input += synapse0x1f73cc0();
   input += synapse0x1f73d00();
   input += synapse0x1f73d40();
   input += synapse0x1f73d80();
   input += synapse0x1f73dc0();
   input += synapse0x1f73e00();
   return input;
}

double NNfunction_b1b1::neuron0x1f73470() {
   double input = input0x1f73470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f73e40() {
   double input = -1.01532;
   input += synapse0x1f74180();
   input += synapse0x1f741c0();
   input += synapse0x1f74200();
   input += synapse0x1f74240();
   input += synapse0x1f74280();
   input += synapse0x1f742c0();
   input += synapse0x1f74300();
   input += synapse0x1f74340();
   input += synapse0x1f74380();
   input += synapse0x1f743c0();
   input += synapse0x1f74400();
   input += synapse0x1f74440();
   input += synapse0x1f74480();
   input += synapse0x1f744c0();
   input += synapse0x1f74500();
   input += synapse0x1f74540();
   input += synapse0x1f73fd0();
   input += synapse0x1f74010();
   input += synapse0x1f74690();
   input += synapse0x1f746d0();
   input += synapse0x1f74710();
   input += synapse0x1f74750();
   input += synapse0x1f74790();
   input += synapse0x1f747d0();
   return input;
}

double NNfunction_b1b1::neuron0x1f73e40() {
   double input = input0x1f73e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f74810() {
   double input = -1.38464;
   input += synapse0x1f74b50();
   input += synapse0x1f74b90();
   input += synapse0x1f74bd0();
   input += synapse0x1f74c10();
   input += synapse0x1f74c50();
   input += synapse0x1f74c90();
   input += synapse0x1f74cd0();
   input += synapse0x1f74d10();
   input += synapse0x1f74d50();
   input += synapse0x1f74d90();
   input += synapse0x1f74dd0();
   input += synapse0x1f74e10();
   input += synapse0x1f74e50();
   input += synapse0x1f74e90();
   input += synapse0x1f74ed0();
   input += synapse0x1f74f10();
   input += synapse0x1f749a0();
   input += synapse0x1f749e0();
   input += synapse0x1f75060();
   input += synapse0x1f750a0();
   input += synapse0x1f750e0();
   input += synapse0x1f75120();
   input += synapse0x1f75160();
   input += synapse0x1f751a0();
   return input;
}

double NNfunction_b1b1::neuron0x1f74810() {
   double input = input0x1f74810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f751e0() {
   double input = 1.24822;
   input += synapse0x1f75520();
   input += synapse0x1f75560();
   input += synapse0x1f755a0();
   input += synapse0x1f755e0();
   input += synapse0x1f75620();
   input += synapse0x1f75660();
   input += synapse0x1f756a0();
   input += synapse0x1f756e0();
   input += synapse0x1f75720();
   input += synapse0x1f6d8e0();
   input += synapse0x1f6d920();
   input += synapse0x1f6d960();
   input += synapse0x1f6d9a0();
   input += synapse0x1f6d9e0();
   input += synapse0x1f6da20();
   input += synapse0x1f6da60();
   input += synapse0x1f75370();
   input += synapse0x1f753b0();
   input += synapse0x1f6dbb0();
   input += synapse0x1f6dbf0();
   input += synapse0x1f6dc30();
   input += synapse0x1f6dc70();
   input += synapse0x1f6dcb0();
   input += synapse0x1f6dcf0();
   return input;
}

double NNfunction_b1b1::neuron0x1f751e0() {
   double input = input0x1f751e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f6dd30() {
   double input = -0.0877139;
   input += synapse0x1f6e070();
   input += synapse0x1f6e0b0();
   input += synapse0x1f6e0f0();
   input += synapse0x1f6e130();
   input += synapse0x1f6e170();
   input += synapse0x1f6e1b0();
   input += synapse0x1f6e1f0();
   input += synapse0x1f6e230();
   input += synapse0x1f6e270();
   input += synapse0x1f6e2b0();
   input += synapse0x1f6e2f0();
   input += synapse0x1f6e330();
   input += synapse0x1f6e370();
   input += synapse0x1f6e3b0();
   input += synapse0x1f6e3f0();
   input += synapse0x1f6e430();
   input += synapse0x1f6dec0();
   input += synapse0x1f6df00();
   input += synapse0x1f6e580();
   input += synapse0x1f6e5c0();
   input += synapse0x1f6e600();
   input += synapse0x1f6e640();
   input += synapse0x1f6e680();
   input += synapse0x1f6e6c0();
   return input;
}

double NNfunction_b1b1::neuron0x1f6dd30() {
   double input = input0x1f6dd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f6e700() {
   double input = -5.02369;
   input += synapse0x1f6e890();
   input += synapse0x1f77920();
   input += synapse0x1f77960();
   input += synapse0x1f779a0();
   input += synapse0x1f779e0();
   input += synapse0x1f77a20();
   input += synapse0x1f77a60();
   input += synapse0x1f77aa0();
   input += synapse0x1f77ae0();
   input += synapse0x1f77b20();
   input += synapse0x1f77b60();
   input += synapse0x1f77ba0();
   input += synapse0x1f77be0();
   input += synapse0x1f77c20();
   input += synapse0x1f77c60();
   input += synapse0x1f77ca0();
   input += synapse0x1f77770();
   input += synapse0x1f777b0();
   input += synapse0x1f77df0();
   input += synapse0x1f77e30();
   input += synapse0x1f77e70();
   input += synapse0x1f77eb0();
   input += synapse0x1f77ef0();
   input += synapse0x1f77f30();
   return input;
}

double NNfunction_b1b1::neuron0x1f6e700() {
   double input = input0x1f6e700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f77f70() {
   double input = -8.6655;
   input += synapse0x1f782b0();
   input += synapse0x1f782f0();
   input += synapse0x1f78330();
   input += synapse0x1f78370();
   input += synapse0x1f783b0();
   input += synapse0x1f783f0();
   input += synapse0x1f78430();
   input += synapse0x1f78470();
   input += synapse0x1f784b0();
   input += synapse0x1f784f0();
   input += synapse0x1f78530();
   input += synapse0x1f78570();
   input += synapse0x1f785b0();
   input += synapse0x1f785f0();
   input += synapse0x1f78630();
   input += synapse0x1f78670();
   input += synapse0x1f78100();
   input += synapse0x1f78140();
   input += synapse0x1f787c0();
   input += synapse0x1f78800();
   input += synapse0x1f78840();
   input += synapse0x1f78880();
   input += synapse0x1f788c0();
   input += synapse0x1f78900();
   return input;
}

double NNfunction_b1b1::neuron0x1f77f70() {
   double input = input0x1f77f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f78940() {
   double input = 1.52005;
   input += synapse0x1f78c80();
   input += synapse0x1f78cc0();
   input += synapse0x1f78d00();
   input += synapse0x1f78d40();
   input += synapse0x1f78d80();
   input += synapse0x1f78dc0();
   input += synapse0x1f78e00();
   input += synapse0x1f78e40();
   input += synapse0x1f78e80();
   input += synapse0x1f78ec0();
   input += synapse0x1f78f00();
   input += synapse0x1f78f40();
   input += synapse0x1f78f80();
   input += synapse0x1f78fc0();
   input += synapse0x1f79000();
   input += synapse0x1f79040();
   input += synapse0x1f78ad0();
   input += synapse0x1f78b10();
   input += synapse0x1f79190();
   input += synapse0x1f791d0();
   input += synapse0x1f79210();
   input += synapse0x1f79250();
   input += synapse0x1f79290();
   input += synapse0x1f792d0();
   return input;
}

double NNfunction_b1b1::neuron0x1f78940() {
   double input = input0x1f78940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f79310() {
   double input = 0.238007;
   input += synapse0x1f79650();
   input += synapse0x1f79690();
   input += synapse0x1f796d0();
   input += synapse0x1f79710();
   input += synapse0x1f79750();
   input += synapse0x1f79790();
   input += synapse0x1f797d0();
   input += synapse0x1f79810();
   input += synapse0x1f79850();
   input += synapse0x1f79890();
   input += synapse0x1f798d0();
   input += synapse0x1f79910();
   input += synapse0x1f79950();
   input += synapse0x1f79990();
   input += synapse0x1f799d0();
   input += synapse0x1f79a10();
   input += synapse0x1f794a0();
   input += synapse0x1f794e0();
   input += synapse0x1f79b60();
   input += synapse0x1f79ba0();
   input += synapse0x1f79be0();
   input += synapse0x1f79c20();
   input += synapse0x1f79c60();
   input += synapse0x1f79ca0();
   return input;
}

double NNfunction_b1b1::neuron0x1f79310() {
   double input = input0x1f79310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f79ce0() {
   double input = -1.03382;
   input += synapse0x1f7a020();
   input += synapse0x1f7a060();
   input += synapse0x1f7a0a0();
   input += synapse0x1f7a0e0();
   input += synapse0x1f7a120();
   input += synapse0x1f7a160();
   input += synapse0x1f7a1a0();
   input += synapse0x1f7a1e0();
   input += synapse0x1f7a220();
   input += synapse0x1f7a260();
   input += synapse0x1f7a2a0();
   input += synapse0x1f7a2e0();
   input += synapse0x1f7a320();
   input += synapse0x1f7a360();
   input += synapse0x1f7a3a0();
   input += synapse0x1f7a3e0();
   input += synapse0x1f79e70();
   input += synapse0x1f79eb0();
   input += synapse0x1f7a530();
   input += synapse0x1f7a570();
   input += synapse0x1f7a5b0();
   input += synapse0x1f7a5f0();
   input += synapse0x1f7a630();
   input += synapse0x1f7a670();
   return input;
}

double NNfunction_b1b1::neuron0x1f79ce0() {
   double input = input0x1f79ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f7a6b0() {
   double input = 0.068493;
   input += synapse0x1f7a9f0();
   input += synapse0x1f7aa30();
   input += synapse0x1f7aa70();
   input += synapse0x1f7aab0();
   input += synapse0x1f7aaf0();
   input += synapse0x1f7ab30();
   input += synapse0x1f7ab70();
   input += synapse0x1f7abb0();
   input += synapse0x1f7abf0();
   input += synapse0x1f7ac30();
   input += synapse0x1f7ac70();
   input += synapse0x1f7acb0();
   input += synapse0x1f7acf0();
   input += synapse0x1f7ad30();
   input += synapse0x1f7ad70();
   input += synapse0x1f7adb0();
   input += synapse0x1f7a840();
   input += synapse0x1f7a880();
   input += synapse0x1f7af00();
   input += synapse0x1f7af40();
   input += synapse0x1f7af80();
   input += synapse0x1f7afc0();
   input += synapse0x1f7b000();
   input += synapse0x1f7b040();
   return input;
}

double NNfunction_b1b1::neuron0x1f7a6b0() {
   double input = input0x1f7a6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f7b080() {
   double input = 1.62929;
   input += synapse0x1f7b3c0();
   input += synapse0x1f7b400();
   input += synapse0x1f7b440();
   input += synapse0x1f7b480();
   input += synapse0x1f7b4c0();
   input += synapse0x1f7b500();
   input += synapse0x1f7b540();
   input += synapse0x1f7b580();
   input += synapse0x1f7b5c0();
   input += synapse0x1f7b600();
   input += synapse0x1f7b640();
   input += synapse0x1f7b680();
   input += synapse0x1f7b6c0();
   input += synapse0x1f7b700();
   input += synapse0x1f7b740();
   input += synapse0x1f7b780();
   input += synapse0x1f7b210();
   input += synapse0x1f7b250();
   input += synapse0x1f7b8d0();
   input += synapse0x1f7b910();
   input += synapse0x1f7b950();
   input += synapse0x1f7b990();
   input += synapse0x1f7b9d0();
   input += synapse0x1f7ba10();
   return input;
}

double NNfunction_b1b1::neuron0x1f7b080() {
   double input = input0x1f7b080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f7ba50() {
   double input = -2.77443;
   input += synapse0x1f7bd90();
   input += synapse0x1f7bdd0();
   input += synapse0x1f7be10();
   input += synapse0x1f7be50();
   input += synapse0x1f7be90();
   input += synapse0x1f7bed0();
   input += synapse0x1f7bf10();
   input += synapse0x1f7bf50();
   input += synapse0x1f7bf90();
   input += synapse0x1f7bfd0();
   input += synapse0x1f7c010();
   input += synapse0x1f7c050();
   input += synapse0x1f7c090();
   input += synapse0x1f7c0d0();
   input += synapse0x1f7c110();
   input += synapse0x1f7c150();
   input += synapse0x1f7bbe0();
   input += synapse0x1f7bc20();
   input += synapse0x1f7c2a0();
   input += synapse0x1f7c2e0();
   input += synapse0x1f7c320();
   input += synapse0x1f7c360();
   input += synapse0x1f7c3a0();
   input += synapse0x1f7c3e0();
   return input;
}

double NNfunction_b1b1::neuron0x1f7ba50() {
   double input = input0x1f7ba50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f7c420() {
   double input = 0.707562;
   input += synapse0x1f7c760();
   input += synapse0x1f70d30();
   input += synapse0x1f70d70();
   input += synapse0x1f70db0();
   input += synapse0x1f71000();
   input += synapse0x1f71040();
   input += synapse0x1f71080();
   input += synapse0x1f712d0();
   input += synapse0x1f71310();
   input += synapse0x1f71560();
   input += synapse0x1f715a0();
   input += synapse0x1f715e0();
   input += synapse0x1f71830();
   input += synapse0x1f71870();
   input += synapse0x1f71ac0();
   input += synapse0x1f71b00();
   input += synapse0x1f7c5b0();
   input += synapse0x1f7c5f0();
   input += synapse0x1f71c50();
   input += synapse0x1f72160();
   input += synapse0x1f721a0();
   input += synapse0x1f721e0();
   input += synapse0x1f72430();
   input += synapse0x1f72470();
   return input;
}

double NNfunction_b1b1::neuron0x1f7c420() {
   double input = input0x1f7c420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f724b0() {
   double input = 2.80123;
   input += synapse0x1f71d20();
   input += synapse0x1f71d60();
   input += synapse0x1f71da0();
   input += synapse0x1f71de0();
   input += synapse0x1f72760();
   input += synapse0x1f7eab0();
   input += synapse0x1f7eaf0();
   input += synapse0x1f7eb30();
   input += synapse0x1f7eb70();
   input += synapse0x1f7ebb0();
   input += synapse0x1f7ebf0();
   input += synapse0x1f7ec30();
   input += synapse0x1f7ec70();
   input += synapse0x1f7ecb0();
   input += synapse0x1f7ecf0();
   input += synapse0x1f7ed30();
   input += synapse0x1f72640();
   input += synapse0x1f72680();
   input += synapse0x1f7ee80();
   input += synapse0x1f7eec0();
   input += synapse0x1f7ef00();
   input += synapse0x1f7ef40();
   input += synapse0x1f7ef80();
   input += synapse0x1f7efc0();
   return input;
}

double NNfunction_b1b1::neuron0x1f724b0() {
   double input = input0x1f724b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f7f000() {
   double input = 1.10752;
   input += synapse0x1f7f340();
   input += synapse0x1f7f380();
   input += synapse0x1f7f3c0();
   input += synapse0x1f7f400();
   input += synapse0x1f7f440();
   input += synapse0x1f7f480();
   input += synapse0x1f7f4c0();
   input += synapse0x1f7f500();
   input += synapse0x1f7f540();
   input += synapse0x1f7f580();
   input += synapse0x1f7f5c0();
   input += synapse0x1f7f600();
   input += synapse0x1f7f640();
   input += synapse0x1f7f680();
   input += synapse0x1f7f6c0();
   input += synapse0x1f7f700();
   input += synapse0x1f7f190();
   input += synapse0x1f7f1d0();
   input += synapse0x1f7f850();
   input += synapse0x1f7f890();
   input += synapse0x1f7f8d0();
   input += synapse0x1f7f910();
   input += synapse0x1f7f950();
   input += synapse0x1f7f990();
   return input;
}

double NNfunction_b1b1::neuron0x1f7f000() {
   double input = input0x1f7f000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f7f9d0() {
   double input = 0.854432;
   input += synapse0x1f7fd10();
   input += synapse0x1f7fd50();
   input += synapse0x1f7fd90();
   input += synapse0x1f7fdd0();
   input += synapse0x1f7fe10();
   input += synapse0x1f7fe50();
   input += synapse0x1f7fe90();
   input += synapse0x1f7fed0();
   input += synapse0x1f7ff10();
   input += synapse0x1f7ff50();
   input += synapse0x1f7ff90();
   input += synapse0x1f7ffd0();
   input += synapse0x1f80010();
   input += synapse0x1f80050();
   input += synapse0x1f80090();
   input += synapse0x1f800d0();
   input += synapse0x1f7fb60();
   input += synapse0x1f7fba0();
   input += synapse0x1f80220();
   input += synapse0x1f80260();
   input += synapse0x1f802a0();
   input += synapse0x1f802e0();
   input += synapse0x1f80320();
   input += synapse0x1f80360();
   return input;
}

double NNfunction_b1b1::neuron0x1f7f9d0() {
   double input = input0x1f7f9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f803a0() {
   double input = -0.984328;
   input += synapse0x1f806e0();
   input += synapse0x1f80720();
   input += synapse0x1f80760();
   input += synapse0x1f807a0();
   input += synapse0x1f807e0();
   input += synapse0x1f80820();
   input += synapse0x1f80860();
   input += synapse0x1f808a0();
   input += synapse0x1f808e0();
   input += synapse0x1f80920();
   input += synapse0x1f80960();
   input += synapse0x1f809a0();
   input += synapse0x1f809e0();
   input += synapse0x1f80a20();
   input += synapse0x1f80a60();
   input += synapse0x1f80aa0();
   input += synapse0x1f80530();
   input += synapse0x1f80570();
   input += synapse0x1f80bf0();
   input += synapse0x1f80c30();
   input += synapse0x1f80c70();
   input += synapse0x1f80cb0();
   input += synapse0x1f80cf0();
   input += synapse0x1f80d30();
   return input;
}

double NNfunction_b1b1::neuron0x1f803a0() {
   double input = input0x1f803a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f80d70() {
   double input = 0.620439;
   input += synapse0x1f810b0();
   input += synapse0x1f810f0();
   input += synapse0x1f81130();
   input += synapse0x1f81170();
   input += synapse0x1f811b0();
   input += synapse0x1f811f0();
   input += synapse0x1f81230();
   input += synapse0x1f81270();
   input += synapse0x1f812b0();
   input += synapse0x1f812f0();
   input += synapse0x1f81330();
   input += synapse0x1f81370();
   input += synapse0x1f813b0();
   input += synapse0x1f813f0();
   input += synapse0x1f81430();
   input += synapse0x1f81470();
   input += synapse0x1f80f00();
   input += synapse0x1f80f40();
   input += synapse0x1f815c0();
   input += synapse0x1f81600();
   input += synapse0x1f81640();
   input += synapse0x1f81680();
   input += synapse0x1f816c0();
   input += synapse0x1f81700();
   return input;
}

double NNfunction_b1b1::neuron0x1f80d70() {
   double input = input0x1f80d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f81740() {
   double input = -3.59648;
   input += synapse0x1f81a80();
   input += synapse0x1f81ac0();
   input += synapse0x1f81b00();
   input += synapse0x1f81b40();
   input += synapse0x1f81b80();
   input += synapse0x1f81bc0();
   input += synapse0x1f81c00();
   input += synapse0x1f81c40();
   input += synapse0x1f81c80();
   input += synapse0x1f81cc0();
   input += synapse0x1f81d00();
   input += synapse0x1f81d40();
   input += synapse0x1f81d80();
   input += synapse0x1f81dc0();
   input += synapse0x1f81e00();
   input += synapse0x1f81e40();
   input += synapse0x1f818d0();
   input += synapse0x1f81910();
   input += synapse0x1f81f90();
   input += synapse0x1f81fd0();
   input += synapse0x1f82010();
   input += synapse0x1f82050();
   input += synapse0x1f82090();
   input += synapse0x1f820d0();
   return input;
}

double NNfunction_b1b1::neuron0x1f81740() {
   double input = input0x1f81740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f82110() {
   double input = -0.981409;
   input += synapse0x1f82450();
   input += synapse0x1f82490();
   input += synapse0x1f824d0();
   input += synapse0x1f82510();
   input += synapse0x1f82550();
   input += synapse0x1f82590();
   input += synapse0x1f825d0();
   input += synapse0x1f82610();
   input += synapse0x1f82650();
   input += synapse0x1f82690();
   input += synapse0x1f826d0();
   input += synapse0x1f82710();
   input += synapse0x1f82750();
   input += synapse0x1f82790();
   input += synapse0x1f827d0();
   input += synapse0x1f82810();
   input += synapse0x1f822a0();
   input += synapse0x1f822e0();
   input += synapse0x1f82960();
   input += synapse0x1f829a0();
   input += synapse0x1f829e0();
   input += synapse0x1f82a20();
   input += synapse0x1f82a60();
   input += synapse0x1f82aa0();
   return input;
}

double NNfunction_b1b1::neuron0x1f82110() {
   double input = input0x1f82110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f82ae0() {
   double input = 0.340869;
   input += synapse0x1f82e20();
   input += synapse0x1f82e60();
   input += synapse0x1f82ea0();
   input += synapse0x1f82ee0();
   input += synapse0x1f82f20();
   input += synapse0x1f82f60();
   input += synapse0x1f82fa0();
   input += synapse0x1f82fe0();
   input += synapse0x1f83020();
   input += synapse0x1f83060();
   input += synapse0x1f830a0();
   input += synapse0x1f830e0();
   input += synapse0x1f83120();
   input += synapse0x1f83160();
   input += synapse0x1f831a0();
   input += synapse0x1f831e0();
   input += synapse0x1f82c70();
   input += synapse0x1f82cb0();
   input += synapse0x1f83330();
   input += synapse0x1f83370();
   input += synapse0x1f833b0();
   input += synapse0x1f833f0();
   input += synapse0x1f83430();
   input += synapse0x1f83470();
   return input;
}

double NNfunction_b1b1::neuron0x1f82ae0() {
   double input = input0x1f82ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f834b0() {
   double input = -1.62228;
   input += synapse0x1f6bf20();
   input += synapse0x1f6bf60();
   input += synapse0x1f6bfa0();
   input += synapse0x1f6bfe0();
   input += synapse0x1f6c020();
   input += synapse0x1f6c060();
   input += synapse0x1f6c0a0();
   input += synapse0x1f6c0e0();
   input += synapse0x1f83c00();
   input += synapse0x1f83c40();
   input += synapse0x1f83c80();
   input += synapse0x1f83cc0();
   input += synapse0x1f83d00();
   input += synapse0x1f83d40();
   input += synapse0x1f83d80();
   input += synapse0x1f83dc0();
   input += synapse0x1f83640();
   input += synapse0x1f83680();
   input += synapse0x1f83f10();
   input += synapse0x1f83f50();
   input += synapse0x1f83f90();
   input += synapse0x1f83fd0();
   input += synapse0x1f84010();
   input += synapse0x1f84050();
   return input;
}

double NNfunction_b1b1::neuron0x1f834b0() {
   double input = input0x1f834b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f84090() {
   double input = 0.926809;
   input += synapse0x1f843d0();
   input += synapse0x1f84410();
   input += synapse0x1f84450();
   input += synapse0x1f84490();
   input += synapse0x1f844d0();
   input += synapse0x1f84510();
   input += synapse0x1f84550();
   input += synapse0x1f84590();
   input += synapse0x1f845d0();
   input += synapse0x1f84610();
   input += synapse0x1f84650();
   input += synapse0x1f84690();
   input += synapse0x1f846d0();
   input += synapse0x1f84710();
   input += synapse0x1f84750();
   input += synapse0x1f84790();
   input += synapse0x1f84220();
   input += synapse0x1f84260();
   input += synapse0x1f848e0();
   input += synapse0x1f84920();
   input += synapse0x1f84960();
   input += synapse0x1f849a0();
   input += synapse0x1f849e0();
   input += synapse0x1f84a20();
   return input;
}

double NNfunction_b1b1::neuron0x1f84090() {
   double input = input0x1f84090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f84a60() {
   double input = 0.667567;
   input += synapse0x1f84da0();
   input += synapse0x1f84de0();
   input += synapse0x1f84e20();
   input += synapse0x1f84e60();
   input += synapse0x1f84ea0();
   input += synapse0x1f84ee0();
   input += synapse0x1f84f20();
   input += synapse0x1f84f60();
   input += synapse0x1f84fa0();
   input += synapse0x1f84fe0();
   input += synapse0x1f85020();
   input += synapse0x1f85060();
   input += synapse0x1f850a0();
   input += synapse0x1f850e0();
   input += synapse0x1f85120();
   input += synapse0x1f85160();
   input += synapse0x1f84bf0();
   input += synapse0x1f84c30();
   input += synapse0x1f75760();
   input += synapse0x1f757a0();
   input += synapse0x1f757e0();
   input += synapse0x1f75820();
   input += synapse0x1f75860();
   input += synapse0x1f758a0();
   return input;
}

double NNfunction_b1b1::neuron0x1f84a60() {
   double input = input0x1f84a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f758e0() {
   double input = 0.76491;
   input += synapse0x1f75c20();
   input += synapse0x1f75c60();
   input += synapse0x1f75ca0();
   input += synapse0x1f75ce0();
   input += synapse0x1f75d20();
   input += synapse0x1f75d60();
   input += synapse0x1f75da0();
   input += synapse0x1f75de0();
   input += synapse0x1f75e20();
   input += synapse0x1f75e60();
   input += synapse0x1f75ea0();
   input += synapse0x1f75ee0();
   input += synapse0x1f75f20();
   input += synapse0x1f75f60();
   input += synapse0x1f75fa0();
   input += synapse0x1f75fe0();
   input += synapse0x1f75a70();
   input += synapse0x1f75ab0();
   input += synapse0x1f76130();
   input += synapse0x1f76170();
   input += synapse0x1f761b0();
   input += synapse0x1f761f0();
   input += synapse0x1f76230();
   input += synapse0x1f76270();
   return input;
}

double NNfunction_b1b1::neuron0x1f758e0() {
   double input = input0x1f758e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f762b0() {
   double input = -0.918585;
   input += synapse0x1f765f0();
   input += synapse0x1f76630();
   input += synapse0x1f76670();
   input += synapse0x1f766b0();
   input += synapse0x1f766f0();
   input += synapse0x1f76730();
   input += synapse0x1f76770();
   input += synapse0x1f767b0();
   input += synapse0x1f767f0();
   input += synapse0x1f76830();
   input += synapse0x1f76870();
   input += synapse0x1f768b0();
   input += synapse0x1f768f0();
   input += synapse0x1f76930();
   input += synapse0x1f76970();
   input += synapse0x1f769b0();
   input += synapse0x1f76440();
   input += synapse0x1f76480();
   input += synapse0x1f76b00();
   input += synapse0x1f76b40();
   input += synapse0x1f76b80();
   input += synapse0x1f76bc0();
   input += synapse0x1f76c00();
   input += synapse0x1f76c40();
   return input;
}

double NNfunction_b1b1::neuron0x1f762b0() {
   double input = input0x1f762b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f76c80() {
   double input = 0.937499;
   input += synapse0x1f76fc0();
   input += synapse0x1f77000();
   input += synapse0x1f77040();
   input += synapse0x1f77080();
   input += synapse0x1f770c0();
   input += synapse0x1f77100();
   input += synapse0x1f77140();
   input += synapse0x1f77180();
   input += synapse0x1f771c0();
   input += synapse0x1f77200();
   input += synapse0x1f77240();
   input += synapse0x1f77280();
   input += synapse0x1f772c0();
   input += synapse0x1f77300();
   input += synapse0x1f77340();
   input += synapse0x1f77380();
   input += synapse0x1f76e10();
   input += synapse0x1f76e50();
   input += synapse0x1f774d0();
   input += synapse0x1f77510();
   input += synapse0x1f77550();
   input += synapse0x1f77590();
   input += synapse0x1f775d0();
   input += synapse0x1f77610();
   return input;
}

double NNfunction_b1b1::neuron0x1f76c80() {
   double input = input0x1f76c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f892c0() {
   double input = -2.8652;
   input += synapse0x1f894e0();
   input += synapse0x1f89520();
   input += synapse0x1f89560();
   input += synapse0x1f895a0();
   input += synapse0x1f895e0();
   input += synapse0x1f89620();
   input += synapse0x1f89660();
   input += synapse0x1f896a0();
   input += synapse0x1f896e0();
   input += synapse0x1f89720();
   input += synapse0x1f89760();
   input += synapse0x1f897a0();
   input += synapse0x1f897e0();
   input += synapse0x1f89820();
   input += synapse0x1f89860();
   input += synapse0x1f898a0();
   input += synapse0x1f77650();
   input += synapse0x1f77690();
   input += synapse0x1f899f0();
   input += synapse0x1f89a30();
   input += synapse0x1f89a70();
   input += synapse0x1f89ab0();
   input += synapse0x1f89af0();
   input += synapse0x1f89b30();
   return input;
}

double NNfunction_b1b1::neuron0x1f892c0() {
   double input = input0x1f892c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f89b70() {
   double input = -0.261712;
   input += synapse0x1f89eb0();
   input += synapse0x1f89ef0();
   input += synapse0x1f89f30();
   input += synapse0x1f89f70();
   input += synapse0x1f89fb0();
   input += synapse0x1f89ff0();
   input += synapse0x1f8a030();
   input += synapse0x1f8a070();
   input += synapse0x1f8a0b0();
   input += synapse0x1f8a0f0();
   input += synapse0x1f8a130();
   input += synapse0x1f8a170();
   input += synapse0x1f8a1b0();
   input += synapse0x1f8a1f0();
   input += synapse0x1f8a230();
   input += synapse0x1f8a270();
   input += synapse0x1f89d00();
   input += synapse0x1f89d40();
   input += synapse0x1f8a3c0();
   input += synapse0x1f8a400();
   input += synapse0x1f8a440();
   input += synapse0x1f8a480();
   input += synapse0x1f8a4c0();
   input += synapse0x1f8a500();
   return input;
}

double NNfunction_b1b1::neuron0x1f89b70() {
   double input = input0x1f89b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f8a540() {
   double input = 0.670827;
   input += synapse0x1f8a880();
   input += synapse0x1f8a8c0();
   input += synapse0x1f8a900();
   input += synapse0x1f8a940();
   input += synapse0x1f8a980();
   input += synapse0x1f8a9c0();
   input += synapse0x1f8aa00();
   input += synapse0x1f8aa40();
   input += synapse0x1f8aa80();
   input += synapse0x1f8aac0();
   input += synapse0x1f8ab00();
   input += synapse0x1f8ab40();
   input += synapse0x1f8ab80();
   input += synapse0x1f8abc0();
   input += synapse0x1f8ac00();
   input += synapse0x1f8ac40();
   input += synapse0x1f8a6d0();
   input += synapse0x1f8a710();
   input += synapse0x1f8ad90();
   input += synapse0x1f8add0();
   input += synapse0x1f8ae10();
   input += synapse0x1f8ae50();
   input += synapse0x1f8ae90();
   input += synapse0x1f8aed0();
   return input;
}

double NNfunction_b1b1::neuron0x1f8a540() {
   double input = input0x1f8a540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f8af10() {
   double input = 0.870348;
   input += synapse0x1f8b250();
   input += synapse0x1f8b290();
   input += synapse0x1f8b2d0();
   input += synapse0x1f8b310();
   input += synapse0x1f8b350();
   input += synapse0x1f8b390();
   input += synapse0x1f8b3d0();
   input += synapse0x1f8b410();
   input += synapse0x1f8b450();
   input += synapse0x1f8b490();
   input += synapse0x1f8b4d0();
   input += synapse0x1f8b510();
   input += synapse0x1f8b550();
   input += synapse0x1f8b590();
   input += synapse0x1f8b5d0();
   input += synapse0x1f8b610();
   input += synapse0x1f8b0a0();
   input += synapse0x1f8b0e0();
   input += synapse0x1f8b760();
   input += synapse0x1f8b7a0();
   input += synapse0x1f8b7e0();
   input += synapse0x1f8b820();
   input += synapse0x1f8b860();
   input += synapse0x1f8b8a0();
   return input;
}

double NNfunction_b1b1::neuron0x1f8af10() {
   double input = input0x1f8af10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f92110() {
   double input = 1.57191;
   input += synapse0x1d21c70();
   input += synapse0x1d21cb0();
   input += synapse0x1f69350();
   input += synapse0x1f69390();
   input += synapse0x1f69d20();
   input += synapse0x1f69d60();
   input += synapse0x1f6aaf0();
   input += synapse0x1f6ab30();
   input += synapse0x1f6b4c0();
   input += synapse0x1f6b500();
   input += synapse0x1f6be90();
   input += synapse0x1f6bed0();
   input += synapse0x1f6c970();
   input += synapse0x1f6c9b0();
   input += synapse0x1f6d340();
   input += synapse0x1f6d380();
   input += synapse0x1f6a420();
   input += synapse0x1f6a460();
   input += synapse0x1f6eef0();
   input += synapse0x1f6ef30();
   input += synapse0x1f6f8c0();
   input += synapse0x1f6f900();
   input += synapse0x1f70290();
   input += synapse0x1f702d0();
   input += synapse0x1f70c60();
   input += synapse0x1f70ca0();
   input += synapse0x1f64e00();
   input += synapse0x1f64e40();
   input += synapse0x1f72d50();
   input += synapse0x1f72d90();
   input += synapse0x1f73720();
   input += synapse0x1f73760();
   input += synapse0x1f740f0();
   input += synapse0x1f74130();
   input += synapse0x1f74ac0();
   input += synapse0x1f74b00();
   input += synapse0x1f75490();
   input += synapse0x1f754d0();
   input += synapse0x1f6dfe0();
   input += synapse0x1f6e020();
   input += synapse0x1f77890();
   input += synapse0x1f778d0();
   input += synapse0x1f78220();
   input += synapse0x1f78260();
   input += synapse0x1f78bf0();
   input += synapse0x1f78c30();
   input += synapse0x1f795c0();
   input += synapse0x1f79600();
   input += synapse0x1f79f90();
   input += synapse0x1f79fd0();
   return input;
}

double NNfunction_b1b1::neuron0x1f92110() {
   double input = input0x1f92110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f924b0() {
   double input = 0.357364;
   input += synapse0x1f7c6d0();
   input += synapse0x1f7c710();
   input += synapse0x1f71c90();
   input += synapse0x1f71cd0();
   input += synapse0x1f7f2b0();
   input += synapse0x1f7f2f0();
   input += synapse0x1f7fc80();
   input += synapse0x1f7fcc0();
   input += synapse0x1f80650();
   input += synapse0x1f80690();
   input += synapse0x1f81020();
   input += synapse0x1f81060();
   input += synapse0x1f819f0();
   input += synapse0x1f81a30();
   input += synapse0x1f823c0();
   input += synapse0x1f82400();
   input += synapse0x1f82d90();
   input += synapse0x1f82dd0();
   input += synapse0x1f83760();
   input += synapse0x1f837a0();
   input += synapse0x1f84340();
   input += synapse0x1f84380();
   input += synapse0x1f84d10();
   input += synapse0x1f84d50();
   input += synapse0x1f75b90();
   input += synapse0x1f75bd0();
   input += synapse0x1f76560();
   input += synapse0x1f765a0();
   input += synapse0x1f76f30();
   input += synapse0x1f76f70();
   input += synapse0x1f89450();
   input += synapse0x1f89490();
   input += synapse0x1f89e20();
   input += synapse0x1f89e60();
   input += synapse0x1f8a7f0();
   input += synapse0x1f8a830();
   input += synapse0x1f8b1c0();
   input += synapse0x1f8b200();
   input += synapse0x1f670b0();
   input += synapse0x1f670f0();
   input += synapse0x1f7a960();
   input += synapse0x1f7a9a0();
   input += synapse0x1f8b8e0();
   input += synapse0x1f8b920();
   input += synapse0x1f8b960();
   input += synapse0x1f8b9a0();
   input += synapse0x1f92850();
   input += synapse0x1f92890();
   input += synapse0x1f928d0();
   input += synapse0x1f92910();
   return input;
}

double NNfunction_b1b1::neuron0x1f924b0() {
   double input = input0x1f924b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f92950() {
   double input = 0.712839;
   input += synapse0x1f92c90();
   input += synapse0x1f92cd0();
   input += synapse0x1f92d10();
   input += synapse0x1f92d50();
   input += synapse0x1f92d90();
   input += synapse0x1f92dd0();
   input += synapse0x1f92e10();
   input += synapse0x1f92e50();
   input += synapse0x1f92e90();
   input += synapse0x1f92ed0();
   input += synapse0x1f92f10();
   input += synapse0x1f92f50();
   input += synapse0x1f92f90();
   input += synapse0x1f92fd0();
   input += synapse0x1f93010();
   input += synapse0x1f93050();
   input += synapse0x1f92ae0();
   input += synapse0x1f92b20();
   input += synapse0x1f931a0();
   input += synapse0x1f931e0();
   input += synapse0x1f93220();
   input += synapse0x1f93260();
   input += synapse0x1f932a0();
   input += synapse0x1f932e0();
   input += synapse0x1f93320();
   input += synapse0x1f93360();
   input += synapse0x1f933a0();
   input += synapse0x1f933e0();
   input += synapse0x1f93420();
   input += synapse0x1f93460();
   input += synapse0x1f934a0();
   input += synapse0x1f934e0();
   input += synapse0x1f93090();
   input += synapse0x1f930d0();
   input += synapse0x1f93110();
   input += synapse0x1f93150();
   input += synapse0x1f93730();
   input += synapse0x1f93770();
   input += synapse0x1f937b0();
   input += synapse0x1f937f0();
   input += synapse0x1f93830();
   input += synapse0x1f93870();
   input += synapse0x1f938b0();
   input += synapse0x1f938f0();
   input += synapse0x1f93930();
   input += synapse0x1f93970();
   input += synapse0x1f939b0();
   input += synapse0x1f939f0();
   input += synapse0x1f93a30();
   input += synapse0x1f93a70();
   return input;
}

double NNfunction_b1b1::neuron0x1f92950() {
   double input = input0x1f92950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f93ab0() {
   double input = 0.229274;
   input += synapse0x1f93df0();
   input += synapse0x1f93e30();
   input += synapse0x1f93e70();
   input += synapse0x1f93eb0();
   input += synapse0x1f93ef0();
   input += synapse0x1f93f30();
   input += synapse0x1f93f70();
   input += synapse0x1f93fb0();
   input += synapse0x1f93ff0();
   input += synapse0x1f94030();
   input += synapse0x1f94070();
   input += synapse0x1f940b0();
   input += synapse0x1f940f0();
   input += synapse0x1f94130();
   input += synapse0x1f94170();
   input += synapse0x1f941b0();
   input += synapse0x1f93c40();
   input += synapse0x1f93c80();
   input += synapse0x1f94300();
   input += synapse0x1f94340();
   input += synapse0x1f94380();
   input += synapse0x1f943c0();
   input += synapse0x1f94400();
   input += synapse0x1f94440();
   input += synapse0x1f94480();
   input += synapse0x1f944c0();
   input += synapse0x1f94500();
   input += synapse0x1f94540();
   input += synapse0x1f94580();
   input += synapse0x1f945c0();
   input += synapse0x1f94600();
   input += synapse0x1f94640();
   input += synapse0x1f941f0();
   input += synapse0x1f94230();
   input += synapse0x1f94270();
   input += synapse0x1f942b0();
   input += synapse0x1f94890();
   input += synapse0x1f948d0();
   input += synapse0x1f94910();
   input += synapse0x1f94950();
   input += synapse0x1f94990();
   input += synapse0x1f949d0();
   input += synapse0x1f94a10();
   input += synapse0x1f94a50();
   input += synapse0x1f94a90();
   input += synapse0x1f94ad0();
   input += synapse0x1f94b10();
   input += synapse0x1f94b50();
   input += synapse0x1f94b90();
   input += synapse0x1f94bd0();
   return input;
}

double NNfunction_b1b1::neuron0x1f93ab0() {
   double input = input0x1f93ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f94c10() {
   double input = -0.669417;
   input += synapse0x1f94f50();
   input += synapse0x1f94f90();
   input += synapse0x1f94fd0();
   input += synapse0x1f95010();
   input += synapse0x1f95050();
   input += synapse0x1f95090();
   input += synapse0x1f950d0();
   input += synapse0x1f95110();
   input += synapse0x1f95150();
   input += synapse0x1f95190();
   input += synapse0x1f951d0();
   input += synapse0x1f95210();
   input += synapse0x1f95250();
   input += synapse0x1f95290();
   input += synapse0x1f952d0();
   input += synapse0x1f95310();
   input += synapse0x1f94da0();
   input += synapse0x1f94de0();
   input += synapse0x1f95460();
   input += synapse0x1f954a0();
   input += synapse0x1f954e0();
   input += synapse0x1f95520();
   input += synapse0x1f95560();
   input += synapse0x1f955a0();
   input += synapse0x1f955e0();
   input += synapse0x1f95620();
   input += synapse0x1f95660();
   input += synapse0x1f956a0();
   input += synapse0x1f956e0();
   input += synapse0x1f95720();
   input += synapse0x1f95760();
   input += synapse0x1f957a0();
   input += synapse0x1f95350();
   input += synapse0x1f95390();
   input += synapse0x1f953d0();
   input += synapse0x1f95410();
   input += synapse0x1f959f0();
   input += synapse0x1f95a30();
   input += synapse0x1f95a70();
   input += synapse0x1f95ab0();
   input += synapse0x1f95af0();
   input += synapse0x1f95b30();
   input += synapse0x1f95b70();
   input += synapse0x1f95bb0();
   input += synapse0x1f95bf0();
   input += synapse0x1f95c30();
   input += synapse0x1f95c70();
   input += synapse0x1f95cb0();
   input += synapse0x1f95cf0();
   input += synapse0x1f95d30();
   return input;
}

double NNfunction_b1b1::neuron0x1f94c10() {
   double input = input0x1f94c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b1b1::input0x1f95d70() {
   double input = 7.23634;
   input += synapse0x1f95f90();
   input += synapse0x1f95fd0();
   input += synapse0x1f96010();
   input += synapse0x1f96050();
   input += synapse0x1f96090();
   return input;
}

double NNfunction_b1b1::neuron0x1f95d70() {
   double input = input0x1f95d70();
   return (input * 1)+0;
}

double NNfunction_b1b1::synapse0x1f61d20() {
   return (neuron0x1f61e60()*0.138069);
}

double NNfunction_b1b1::synapse0x1f61d60() {
   return (neuron0x1f621a0()*0.00847337);
}

double NNfunction_b1b1::synapse0x1f67140() {
   return (neuron0x1f624e0()*-0.00965513);
}

double NNfunction_b1b1::synapse0x1f67180() {
   return (neuron0x1f62820()*3.71229);
}

double NNfunction_b1b1::synapse0x1f671c0() {
   return (neuron0x1f62b60()*-0.0182095);
}

double NNfunction_b1b1::synapse0x1f67200() {
   return (neuron0x1f62ea0()*-0.00392497);
}

double NNfunction_b1b1::synapse0x1f67240() {
   return (neuron0x1f631e0()*-0.0122975);
}

double NNfunction_b1b1::synapse0x1f67280() {
   return (neuron0x1f63520()*0.00812654);
}

double NNfunction_b1b1::synapse0x1f672c0() {
   return (neuron0x1f63860()*0.0141541);
}

double NNfunction_b1b1::synapse0x1f67300() {
   return (neuron0x1f63ba0()*0.0251586);
}

double NNfunction_b1b1::synapse0x1f67340() {
   return (neuron0x1f63ee0()*0.0145242);
}

double NNfunction_b1b1::synapse0x1f67380() {
   return (neuron0x1f64220()*-0.0104813);
}

double NNfunction_b1b1::synapse0x1f673c0() {
   return (neuron0x1f64560()*-0.00121034);
}

double NNfunction_b1b1::synapse0x1f67400() {
   return (neuron0x1f648a0()*-0.181921);
}

double NNfunction_b1b1::synapse0x1f67440() {
   return (neuron0x1f64be0()*-0.0130282);
}

double NNfunction_b1b1::synapse0x1f67480() {
   return (neuron0x1f64f20()*-0.0136042);
}

double NNfunction_b1b1::synapse0x1f61c90() {
   return (neuron0x1f65260()*0.0144499);
}

double NNfunction_b1b1::synapse0x1f61cd0() {
   return (neuron0x1f657c0()*-0.00865408);
}

double NNfunction_b1b1::synapse0x1d13910() {
   return (neuron0x1f659e0()*-0.00485784);
}

double NNfunction_b1b1::synapse0x1d13950() {
   return (neuron0x1f65d20()*-0.464169);
}

double NNfunction_b1b1::synapse0x1f676e0() {
   return (neuron0x1f66060()*0.00678046);
}

double NNfunction_b1b1::synapse0x1f67720() {
   return (neuron0x1f663a0()*-0.0360025);
}

double NNfunction_b1b1::synapse0x1f67760() {
   return (neuron0x1f666e0()*0.00444009);
}

double NNfunction_b1b1::synapse0x1f677a0() {
   return (neuron0x1f66a20()*0.0761848);
}

double NNfunction_b1b1::synapse0x1f67b20() {
   return (neuron0x1f61e60()*-0.250074);
}

double NNfunction_b1b1::synapse0x1f67b60() {
   return (neuron0x1f621a0()*0.00874319);
}

double NNfunction_b1b1::synapse0x1f67ba0() {
   return (neuron0x1f624e0()*0.0761417);
}

double NNfunction_b1b1::synapse0x1f67be0() {
   return (neuron0x1f62820()*-0.158418);
}

double NNfunction_b1b1::synapse0x1f67c20() {
   return (neuron0x1f62b60()*0.144372);
}

double NNfunction_b1b1::synapse0x1f67c60() {
   return (neuron0x1f62ea0()*-0.0536417);
}

double NNfunction_b1b1::synapse0x1f67ca0() {
   return (neuron0x1f631e0()*0.00811064);
}

double NNfunction_b1b1::synapse0x1f67ce0() {
   return (neuron0x1f63520()*-0.026921);
}

double NNfunction_b1b1::synapse0x1f67d20() {
   return (neuron0x1f63860()*0.0692733);
}

double NNfunction_b1b1::synapse0x1f675d0() {
   return (neuron0x1f63ba0()*0.0379518);
}

double NNfunction_b1b1::synapse0x1f67610() {
   return (neuron0x1f63ee0()*0.1549);
}

double NNfunction_b1b1::synapse0x1f67650() {
   return (neuron0x1f64220()*-0.0187267);
}

double NNfunction_b1b1::synapse0x1f67690() {
   return (neuron0x1f64560()*0.0230081);
}

double NNfunction_b1b1::synapse0x1f67f70() {
   return (neuron0x1f648a0()*0.153441);
}

double NNfunction_b1b1::synapse0x1f67fb0() {
   return (neuron0x1f64be0()*-0.162308);
}

double NNfunction_b1b1::synapse0x1f67ff0() {
   return (neuron0x1f64f20()*1.11045);
}

double NNfunction_b1b1::synapse0x1f67970() {
   return (neuron0x1f65260()*-0.259805);
}

double NNfunction_b1b1::synapse0x1f679b0() {
   return (neuron0x1f657c0()*0.026682);
}

double NNfunction_b1b1::synapse0x1f68140() {
   return (neuron0x1f659e0()*-0.0462777);
}

double NNfunction_b1b1::synapse0x1f68180() {
   return (neuron0x1f65d20()*-0.230602);
}

double NNfunction_b1b1::synapse0x1f681c0() {
   return (neuron0x1f66060()*-0.0201852);
}

double NNfunction_b1b1::synapse0x1f68200() {
   return (neuron0x1f663a0()*-0.184415);
}

double NNfunction_b1b1::synapse0x1f68240() {
   return (neuron0x1f666e0()*-0.0288852);
}

double NNfunction_b1b1::synapse0x1f68280() {
   return (neuron0x1f66a20()*0.100414);
}

double NNfunction_b1b1::synapse0x1f68600() {
   return (neuron0x1f61e60()*-0.918841);
}

double NNfunction_b1b1::synapse0x1f68640() {
   return (neuron0x1f621a0()*0.0241859);
}

double NNfunction_b1b1::synapse0x1f68680() {
   return (neuron0x1f624e0()*0.0914441);
}

double NNfunction_b1b1::synapse0x1f686c0() {
   return (neuron0x1f62820()*-0.0555943);
}

double NNfunction_b1b1::synapse0x1f68700() {
   return (neuron0x1f62b60()*-0.0687248);
}

double NNfunction_b1b1::synapse0x1f68740() {
   return (neuron0x1f62ea0()*0.0340697);
}

double NNfunction_b1b1::synapse0x1f68780() {
   return (neuron0x1f631e0()*-0.0122137);
}

double NNfunction_b1b1::synapse0x1f687c0() {
   return (neuron0x1f63520()*-0.0365188);
}

double NNfunction_b1b1::synapse0x1f68800() {
   return (neuron0x1f63860()*0.00434927);
}

double NNfunction_b1b1::synapse0x1f68840() {
   return (neuron0x1f63ba0()*0.101795);
}

double NNfunction_b1b1::synapse0x1f68880() {
   return (neuron0x1f63ee0()*0.0170712);
}

double NNfunction_b1b1::synapse0x1f688c0() {
   return (neuron0x1f64220()*-0.00982737);
}

double NNfunction_b1b1::synapse0x1f68900() {
   return (neuron0x1f64560()*-0.0534385);
}

double NNfunction_b1b1::synapse0x1f68940() {
   return (neuron0x1f648a0()*-1.87711);
}

double NNfunction_b1b1::synapse0x1f68980() {
   return (neuron0x1f64be0()*0.00830857);
}

double NNfunction_b1b1::synapse0x1f689c0() {
   return (neuron0x1f64f20()*0.0512422);
}

double NNfunction_b1b1::synapse0x1f68450() {
   return (neuron0x1f65260()*0.0296477);
}

double NNfunction_b1b1::synapse0x1f68490() {
   return (neuron0x1f657c0()*-0.0203583);
}

double NNfunction_b1b1::synapse0x1d13d40() {
   return (neuron0x1f659e0()*0.00671637);
}

double NNfunction_b1b1::synapse0x1d21460() {
   return (neuron0x1f65d20()*-0.197443);
}

double NNfunction_b1b1::synapse0x1d214a0() {
   return (neuron0x1f66060()*-0.0211586);
}

double NNfunction_b1b1::synapse0x1f50ef0() {
   return (neuron0x1f663a0()*-0.0572702);
}

double NNfunction_b1b1::synapse0x1f50f30() {
   return (neuron0x1f666e0()*-0.0130255);
}

double NNfunction_b1b1::synapse0x1f50f70() {
   return (neuron0x1f66a20()*-0.0102923);
}

double NNfunction_b1b1::synapse0x1d21d00() {
   return (neuron0x1f61e60()*0.0728772);
}

double NNfunction_b1b1::synapse0x1f67ef0() {
   return (neuron0x1f621a0()*0.0298448);
}

double NNfunction_b1b1::synapse0x1f67f30() {
   return (neuron0x1f624e0()*-0.00241918);
}

double NNfunction_b1b1::synapse0x1f68b10() {
   return (neuron0x1f62820()*-3.99221);
}

double NNfunction_b1b1::synapse0x1f68b50() {
   return (neuron0x1f62b60()*-0.0203214);
}

double NNfunction_b1b1::synapse0x1f68b90() {
   return (neuron0x1f62ea0()*-0.00732971);
}

double NNfunction_b1b1::synapse0x1f68bd0() {
   return (neuron0x1f631e0()*-0.0322247);
}

double NNfunction_b1b1::synapse0x1f68c10() {
   return (neuron0x1f63520()*-0.00236117);
}

double NNfunction_b1b1::synapse0x1f68c50() {
   return (neuron0x1f63860()*-0.00148068);
}

double NNfunction_b1b1::synapse0x1f68c90() {
   return (neuron0x1f63ba0()*0.00262892);
}

double NNfunction_b1b1::synapse0x1f68cd0() {
   return (neuron0x1f63ee0()*0.0119545);
}

double NNfunction_b1b1::synapse0x1f68d10() {
   return (neuron0x1f64220()*-0.00220743);
}

double NNfunction_b1b1::synapse0x1f68d50() {
   return (neuron0x1f64560()*-0.0156137);
}

double NNfunction_b1b1::synapse0x1f68d90() {
   return (neuron0x1f648a0()*-0.550886);
}

double NNfunction_b1b1::synapse0x1f68dd0() {
   return (neuron0x1f64be0()*-0.0133245);
}

double NNfunction_b1b1::synapse0x1f68e10() {
   return (neuron0x1f64f20()*0.00778215);
}

double NNfunction_b1b1::synapse0x1f61da0() {
   return (neuron0x1f65260()*-0.0226669);
}

double NNfunction_b1b1::synapse0x1f61de0() {
   return (neuron0x1f657c0()*-0.0164412);
}

double NNfunction_b1b1::synapse0x1f61e20() {
   return (neuron0x1f659e0()*0.00936564);
}

double NNfunction_b1b1::synapse0x1f68f60() {
   return (neuron0x1f65d20()*-0.246016);
}

double NNfunction_b1b1::synapse0x1f68fa0() {
   return (neuron0x1f66060()*0.0179437);
}

double NNfunction_b1b1::synapse0x1f68fe0() {
   return (neuron0x1f663a0()*0.0211074);
}

double NNfunction_b1b1::synapse0x1f69020() {
   return (neuron0x1f666e0()*0.00976143);
}

double NNfunction_b1b1::synapse0x1f69060() {
   return (neuron0x1f66a20()*-0.0247518);
}

double NNfunction_b1b1::synapse0x1f693e0() {
   return (neuron0x1f61e60()*-0.194112);
}

double NNfunction_b1b1::synapse0x1f69420() {
   return (neuron0x1f621a0()*0.00189206);
}

double NNfunction_b1b1::synapse0x1f69460() {
   return (neuron0x1f624e0()*0.0106013);
}

double NNfunction_b1b1::synapse0x1f694a0() {
   return (neuron0x1f62820()*-0.00731705);
}

double NNfunction_b1b1::synapse0x1f694e0() {
   return (neuron0x1f62b60()*0.00596217);
}

double NNfunction_b1b1::synapse0x1f69520() {
   return (neuron0x1f62ea0()*0.00740068);
}

double NNfunction_b1b1::synapse0x1f69560() {
   return (neuron0x1f631e0()*0.0200768);
}

double NNfunction_b1b1::synapse0x1f695a0() {
   return (neuron0x1f63520()*0.0141074);
}

double NNfunction_b1b1::synapse0x1f695e0() {
   return (neuron0x1f63860()*0.00380547);
}

double NNfunction_b1b1::synapse0x1f69620() {
   return (neuron0x1f63ba0()*-0.00269106);
}

double NNfunction_b1b1::synapse0x1f69660() {
   return (neuron0x1f63ee0()*0.000742301);
}

double NNfunction_b1b1::synapse0x1f696a0() {
   return (neuron0x1f64220()*-0.0193724);
}

double NNfunction_b1b1::synapse0x1f696e0() {
   return (neuron0x1f64560()*-0.0185581);
}

double NNfunction_b1b1::synapse0x1f69720() {
   return (neuron0x1f648a0()*1.57242);
}

double NNfunction_b1b1::synapse0x1f69760() {
   return (neuron0x1f64be0()*0.00647004);
}

double NNfunction_b1b1::synapse0x1f697a0() {
   return (neuron0x1f64f20()*0.0146405);
}

double NNfunction_b1b1::synapse0x1f69230() {
   return (neuron0x1f65260()*0.0540201);
}

double NNfunction_b1b1::synapse0x1f69270() {
   return (neuron0x1f657c0()*-0.00833534);
}

double NNfunction_b1b1::synapse0x1f698f0() {
   return (neuron0x1f659e0()*0.00492601);
}

double NNfunction_b1b1::synapse0x1f69930() {
   return (neuron0x1f65d20()*-0.628419);
}

double NNfunction_b1b1::synapse0x1f69970() {
   return (neuron0x1f66060()*-0.00612867);
}

double NNfunction_b1b1::synapse0x1f699b0() {
   return (neuron0x1f663a0()*0.0116193);
}

double NNfunction_b1b1::synapse0x1f699f0() {
   return (neuron0x1f666e0()*-0.00100278);
}

double NNfunction_b1b1::synapse0x1f69a30() {
   return (neuron0x1f66a20()*-0.00249563);
}

double NNfunction_b1b1::synapse0x1f69db0() {
   return (neuron0x1f61e60()*-0.223674);
}

double NNfunction_b1b1::synapse0x1f69df0() {
   return (neuron0x1f621a0()*0.0335657);
}

double NNfunction_b1b1::synapse0x1f69e30() {
   return (neuron0x1f624e0()*-0.00549731);
}

double NNfunction_b1b1::synapse0x1f69e70() {
   return (neuron0x1f62820()*-0.0535907);
}

double NNfunction_b1b1::synapse0x1f69eb0() {
   return (neuron0x1f62b60()*-0.154436);
}

double NNfunction_b1b1::synapse0x1f69ef0() {
   return (neuron0x1f62ea0()*0.0495084);
}

double NNfunction_b1b1::synapse0x1f69f30() {
   return (neuron0x1f631e0()*-0.0855202);
}

double NNfunction_b1b1::synapse0x1f69f70() {
   return (neuron0x1f63520()*0.0490209);
}

double NNfunction_b1b1::synapse0x1f69fb0() {
   return (neuron0x1f63860()*0.0319646);
}

double NNfunction_b1b1::synapse0x1d217d0() {
   return (neuron0x1f63ba0()*0.0340838);
}

double NNfunction_b1b1::synapse0x1d21810() {
   return (neuron0x1f63ee0()*0.0647013);
}

double NNfunction_b1b1::synapse0x1d21850() {
   return (neuron0x1f64220()*-0.0425078);
}

double NNfunction_b1b1::synapse0x1d21890() {
   return (neuron0x1f64560()*-0.0752978);
}

double NNfunction_b1b1::synapse0x1d218d0() {
   return (neuron0x1f648a0()*-0.263544);
}

double NNfunction_b1b1::synapse0x1d21910() {
   return (neuron0x1f64be0()*-0.00456306);
}

double NNfunction_b1b1::synapse0x1d21950() {
   return (neuron0x1f64f20()*-0.0481728);
}

double NNfunction_b1b1::synapse0x1f69c00() {
   return (neuron0x1f65260()*1.33448);
}

double NNfunction_b1b1::synapse0x1f69c40() {
   return (neuron0x1f657c0()*0.00461296);
}

double NNfunction_b1b1::synapse0x1d21aa0() {
   return (neuron0x1f659e0()*-0.0256976);
}

double NNfunction_b1b1::synapse0x1d21ae0() {
   return (neuron0x1f65d20()*0.0804607);
}

double NNfunction_b1b1::synapse0x1d21b20() {
   return (neuron0x1f66060()*0.0512363);
}

double NNfunction_b1b1::synapse0x1d21b60() {
   return (neuron0x1f663a0()*-0.0428594);
}

double NNfunction_b1b1::synapse0x1d21ba0() {
   return (neuron0x1f666e0()*-0.0647013);
}

double NNfunction_b1b1::synapse0x1f6a800() {
   return (neuron0x1f66a20()*-0.0274222);
}

double NNfunction_b1b1::synapse0x1f6ab80() {
   return (neuron0x1f61e60()*1.26062);
}

double NNfunction_b1b1::synapse0x1f6abc0() {
   return (neuron0x1f621a0()*-0.0374354);
}

double NNfunction_b1b1::synapse0x1f6ac00() {
   return (neuron0x1f624e0()*-0.0388927);
}

double NNfunction_b1b1::synapse0x1f6ac40() {
   return (neuron0x1f62820()*-0.121554);
}

double NNfunction_b1b1::synapse0x1f6ac80() {
   return (neuron0x1f62b60()*-0.248941);
}

double NNfunction_b1b1::synapse0x1f6acc0() {
   return (neuron0x1f62ea0()*-0.0389699);
}

double NNfunction_b1b1::synapse0x1f6ad00() {
   return (neuron0x1f631e0()*-0.0373326);
}

double NNfunction_b1b1::synapse0x1f6ad40() {
   return (neuron0x1f63520()*-0.0287994);
}

double NNfunction_b1b1::synapse0x1f6ad80() {
   return (neuron0x1f63860()*-0.0499285);
}

double NNfunction_b1b1::synapse0x1f6adc0() {
   return (neuron0x1f63ba0()*0.0368745);
}

double NNfunction_b1b1::synapse0x1f6ae00() {
   return (neuron0x1f63ee0()*0.0378483);
}

double NNfunction_b1b1::synapse0x1f6ae40() {
   return (neuron0x1f64220()*-0.0426952);
}

double NNfunction_b1b1::synapse0x1f6ae80() {
   return (neuron0x1f64560()*-0.00678357);
}

double NNfunction_b1b1::synapse0x1f6aec0() {
   return (neuron0x1f648a0()*0.0516131);
}

double NNfunction_b1b1::synapse0x1f6af00() {
   return (neuron0x1f64be0()*-0.000364495);
}

double NNfunction_b1b1::synapse0x1f6af40() {
   return (neuron0x1f64f20()*-0.068319);
}

double NNfunction_b1b1::synapse0x1f6a9d0() {
   return (neuron0x1f65260()*0.0471476);
}

double NNfunction_b1b1::synapse0x1f6aa10() {
   return (neuron0x1f657c0()*-0.0101357);
}

double NNfunction_b1b1::synapse0x1f6b090() {
   return (neuron0x1f659e0()*0.00551794);
}

double NNfunction_b1b1::synapse0x1f6b0d0() {
   return (neuron0x1f65d20()*-0.160062);
}

double NNfunction_b1b1::synapse0x1f6b110() {
   return (neuron0x1f66060()*-0.0137258);
}

double NNfunction_b1b1::synapse0x1f6b150() {
   return (neuron0x1f663a0()*-0.0824154);
}

double NNfunction_b1b1::synapse0x1f6b190() {
   return (neuron0x1f666e0()*-0.00142947);
}

double NNfunction_b1b1::synapse0x1f6b1d0() {
   return (neuron0x1f66a20()*0.901754);
}

double NNfunction_b1b1::synapse0x1f6b550() {
   return (neuron0x1f61e60()*-0.110194);
}

double NNfunction_b1b1::synapse0x1f6b590() {
   return (neuron0x1f621a0()*-0.0624089);
}

double NNfunction_b1b1::synapse0x1f6b5d0() {
   return (neuron0x1f624e0()*0.476837);
}

double NNfunction_b1b1::synapse0x1f6b610() {
   return (neuron0x1f62820()*-0.0483302);
}

double NNfunction_b1b1::synapse0x1f6b650() {
   return (neuron0x1f62b60()*0.193608);
}

double NNfunction_b1b1::synapse0x1f6b690() {
   return (neuron0x1f62ea0()*-0.103749);
}

double NNfunction_b1b1::synapse0x1f6b6d0() {
   return (neuron0x1f631e0()*-0.0195203);
}

double NNfunction_b1b1::synapse0x1f6b710() {
   return (neuron0x1f63520()*-0.195084);
}

double NNfunction_b1b1::synapse0x1f6b750() {
   return (neuron0x1f63860()*-0.0333399);
}

double NNfunction_b1b1::synapse0x1f6b790() {
   return (neuron0x1f63ba0()*0.0175717);
}

double NNfunction_b1b1::synapse0x1f6b7d0() {
   return (neuron0x1f63ee0()*0.0482823);
}

double NNfunction_b1b1::synapse0x1f6b810() {
   return (neuron0x1f64220()*-0.0914318);
}

double NNfunction_b1b1::synapse0x1f6b850() {
   return (neuron0x1f64560()*0.187161);
}

double NNfunction_b1b1::synapse0x1f6b890() {
   return (neuron0x1f648a0()*0.947297);
}

double NNfunction_b1b1::synapse0x1f6b8d0() {
   return (neuron0x1f64be0()*-0.074265);
}

double NNfunction_b1b1::synapse0x1f6b910() {
   return (neuron0x1f64f20()*-0.00346559);
}

double NNfunction_b1b1::synapse0x1f6b3a0() {
   return (neuron0x1f65260()*0.300107);
}

double NNfunction_b1b1::synapse0x1f6b3e0() {
   return (neuron0x1f657c0()*-0.0307032);
}

double NNfunction_b1b1::synapse0x1f6ba60() {
   return (neuron0x1f659e0()*0.0962634);
}

double NNfunction_b1b1::synapse0x1f6baa0() {
   return (neuron0x1f65d20()*-0.352094);
}

double NNfunction_b1b1::synapse0x1f6bae0() {
   return (neuron0x1f66060()*-0.375219);
}

double NNfunction_b1b1::synapse0x1f6bb20() {
   return (neuron0x1f663a0()*-0.0660339);
}

double NNfunction_b1b1::synapse0x1f6bb60() {
   return (neuron0x1f666e0()*0.0574585);
}

double NNfunction_b1b1::synapse0x1f6bba0() {
   return (neuron0x1f66a20()*0.750144);
}

double NNfunction_b1b1::synapse0x1f656b0() {
   return (neuron0x1f61e60()*-0.0594915);
}

double NNfunction_b1b1::synapse0x1f656f0() {
   return (neuron0x1f621a0()*0.00313111);
}

double NNfunction_b1b1::synapse0x1f65730() {
   return (neuron0x1f624e0()*0.0208778);
}

double NNfunction_b1b1::synapse0x1f65770() {
   return (neuron0x1f62820()*-0.00438713);
}

double NNfunction_b1b1::synapse0x1f6c130() {
   return (neuron0x1f62b60()*-0.0708263);
}

double NNfunction_b1b1::synapse0x1f6c170() {
   return (neuron0x1f62ea0()*-0.0101937);
}

double NNfunction_b1b1::synapse0x1f6c1b0() {
   return (neuron0x1f631e0()*-0.00120222);
}

double NNfunction_b1b1::synapse0x1f6c1f0() {
   return (neuron0x1f63520()*-0.00248798);
}

double NNfunction_b1b1::synapse0x1f6c230() {
   return (neuron0x1f63860()*-0.00844684);
}

double NNfunction_b1b1::synapse0x1f6c270() {
   return (neuron0x1f63ba0()*-0.000444439);
}

double NNfunction_b1b1::synapse0x1f6c2b0() {
   return (neuron0x1f63ee0()*-0.000294892);
}

double NNfunction_b1b1::synapse0x1f6c2f0() {
   return (neuron0x1f64220()*-0.00509585);
}

double NNfunction_b1b1::synapse0x1f6c330() {
   return (neuron0x1f64560()*-0.00589647);
}

double NNfunction_b1b1::synapse0x1f6c370() {
   return (neuron0x1f648a0()*1.64296);
}

double NNfunction_b1b1::synapse0x1f6c3b0() {
   return (neuron0x1f64be0()*0.0149974);
}

double NNfunction_b1b1::synapse0x1f6c3f0() {
   return (neuron0x1f64f20()*0.0211525);
}

double NNfunction_b1b1::synapse0x1f6bd70() {
   return (neuron0x1f65260()*-0.00930646);
}

double NNfunction_b1b1::synapse0x1f6bdb0() {
   return (neuron0x1f657c0()*0.00654111);
}

double NNfunction_b1b1::synapse0x1f6c540() {
   return (neuron0x1f659e0()*0.0196426);
}

double NNfunction_b1b1::synapse0x1f6c580() {
   return (neuron0x1f65d20()*0.790576);
}

double NNfunction_b1b1::synapse0x1f6c5c0() {
   return (neuron0x1f66060()*-0.00208008);
}

double NNfunction_b1b1::synapse0x1f6c600() {
   return (neuron0x1f663a0()*-0.0141219);
}

double NNfunction_b1b1::synapse0x1f6c640() {
   return (neuron0x1f666e0()*-0.0112394);
}

double NNfunction_b1b1::synapse0x1f6c680() {
   return (neuron0x1f66a20()*-0.00886769);
}

double NNfunction_b1b1::synapse0x1f6ca00() {
   return (neuron0x1f61e60()*0.307458);
}

double NNfunction_b1b1::synapse0x1f6ca40() {
   return (neuron0x1f621a0()*0.0372201);
}

double NNfunction_b1b1::synapse0x1f6ca80() {
   return (neuron0x1f624e0()*-0.315153);
}

double NNfunction_b1b1::synapse0x1f6cac0() {
   return (neuron0x1f62820()*0.0676629);
}

double NNfunction_b1b1::synapse0x1f6cb00() {
   return (neuron0x1f62b60()*0.0449127);
}

double NNfunction_b1b1::synapse0x1f6cb40() {
   return (neuron0x1f62ea0()*-0.0578121);
}

double NNfunction_b1b1::synapse0x1f6cb80() {
   return (neuron0x1f631e0()*-0.040337);
}

double NNfunction_b1b1::synapse0x1f6cbc0() {
   return (neuron0x1f63520()*0.0500205);
}

double NNfunction_b1b1::synapse0x1f6cc00() {
   return (neuron0x1f63860()*0.125031);
}

double NNfunction_b1b1::synapse0x1f6cc40() {
   return (neuron0x1f63ba0()*0.0370657);
}

double NNfunction_b1b1::synapse0x1f6cc80() {
   return (neuron0x1f63ee0()*-0.0683909);
}

double NNfunction_b1b1::synapse0x1f6ccc0() {
   return (neuron0x1f64220()*0.274435);
}

double NNfunction_b1b1::synapse0x1f6cd00() {
   return (neuron0x1f64560()*0.244723);
}

double NNfunction_b1b1::synapse0x1f6cd40() {
   return (neuron0x1f648a0()*-0.906566);
}

double NNfunction_b1b1::synapse0x1f6cd80() {
   return (neuron0x1f64be0()*0.0531046);
}

double NNfunction_b1b1::synapse0x1f6cdc0() {
   return (neuron0x1f64f20()*0.00604074);
}

double NNfunction_b1b1::synapse0x1f6c850() {
   return (neuron0x1f65260()*0.969064);
}

double NNfunction_b1b1::synapse0x1f6c890() {
   return (neuron0x1f657c0()*0.148374);
}

double NNfunction_b1b1::synapse0x1f6cf10() {
   return (neuron0x1f659e0()*0.194939);
}

double NNfunction_b1b1::synapse0x1f6cf50() {
   return (neuron0x1f65d20()*-0.179907);
}

double NNfunction_b1b1::synapse0x1f6cf90() {
   return (neuron0x1f66060()*0.189089);
}

double NNfunction_b1b1::synapse0x1f6cfd0() {
   return (neuron0x1f663a0()*-0.0810813);
}

double NNfunction_b1b1::synapse0x1f6d010() {
   return (neuron0x1f666e0()*0.0748269);
}

double NNfunction_b1b1::synapse0x1f6d050() {
   return (neuron0x1f66a20()*0.132635);
}

double NNfunction_b1b1::synapse0x1f6d3d0() {
   return (neuron0x1f61e60()*-0.869895);
}

double NNfunction_b1b1::synapse0x1f6d410() {
   return (neuron0x1f621a0()*0.047094);
}

double NNfunction_b1b1::synapse0x1f6d450() {
   return (neuron0x1f624e0()*-0.172573);
}

double NNfunction_b1b1::synapse0x1f6d490() {
   return (neuron0x1f62820()*-0.050263);
}

double NNfunction_b1b1::synapse0x1f6d4d0() {
   return (neuron0x1f62b60()*0.310721);
}

double NNfunction_b1b1::synapse0x1f6d510() {
   return (neuron0x1f62ea0()*0.0876688);
}

double NNfunction_b1b1::synapse0x1f6d550() {
   return (neuron0x1f631e0()*-0.00620927);
}

double NNfunction_b1b1::synapse0x1f6d590() {
   return (neuron0x1f63520()*-0.105419);
}

double NNfunction_b1b1::synapse0x1f6d5d0() {
   return (neuron0x1f63860()*-0.0907593);
}

double NNfunction_b1b1::synapse0x1f6d610() {
   return (neuron0x1f63ba0()*0.0550674);
}

double NNfunction_b1b1::synapse0x1f6d650() {
   return (neuron0x1f63ee0()*0.249225);
}

double NNfunction_b1b1::synapse0x1f6d690() {
   return (neuron0x1f64220()*-0.108332);
}

double NNfunction_b1b1::synapse0x1f6d6d0() {
   return (neuron0x1f64560()*-0.139305);
}

double NNfunction_b1b1::synapse0x1f6d710() {
   return (neuron0x1f648a0()*0.285612);
}

double NNfunction_b1b1::synapse0x1f6d750() {
   return (neuron0x1f64be0()*0.0426129);
}

double NNfunction_b1b1::synapse0x1f6d790() {
   return (neuron0x1f64f20()*-0.0250888);
}

double NNfunction_b1b1::synapse0x1f6d220() {
   return (neuron0x1f65260()*0.394905);
}

double NNfunction_b1b1::synapse0x1f6d260() {
   return (neuron0x1f657c0()*0.0527621);
}

double NNfunction_b1b1::synapse0x1f69ff0() {
   return (neuron0x1f659e0()*-0.0942032);
}

double NNfunction_b1b1::synapse0x1f6a030() {
   return (neuron0x1f65d20()*0.193158);
}

double NNfunction_b1b1::synapse0x1f6a070() {
   return (neuron0x1f66060()*-0.157143);
}

double NNfunction_b1b1::synapse0x1f6a0b0() {
   return (neuron0x1f663a0()*-0.265842);
}

double NNfunction_b1b1::synapse0x1f6a0f0() {
   return (neuron0x1f666e0()*-0.0174429);
}

double NNfunction_b1b1::synapse0x1f6a130() {
   return (neuron0x1f66a20()*0.76852);
}

double NNfunction_b1b1::synapse0x1f6a4b0() {
   return (neuron0x1f61e60()*-0.266337);
}

double NNfunction_b1b1::synapse0x1f6a4f0() {
   return (neuron0x1f621a0()*0.00640314);
}

double NNfunction_b1b1::synapse0x1f6a530() {
   return (neuron0x1f624e0()*-0.0571284);
}

double NNfunction_b1b1::synapse0x1f6a570() {
   return (neuron0x1f62820()*4.1642);
}

double NNfunction_b1b1::synapse0x1f6a5b0() {
   return (neuron0x1f62b60()*0.0218371);
}

double NNfunction_b1b1::synapse0x1f6a5f0() {
   return (neuron0x1f62ea0()*-0.035404);
}

double NNfunction_b1b1::synapse0x1f6a630() {
   return (neuron0x1f631e0()*-0.0274802);
}

double NNfunction_b1b1::synapse0x1f6a670() {
   return (neuron0x1f63520()*-0.0171126);
}

double NNfunction_b1b1::synapse0x1f6a6b0() {
   return (neuron0x1f63860()*-0.0218378);
}

double NNfunction_b1b1::synapse0x1f6a6f0() {
   return (neuron0x1f63ba0()*-8.28948e-05);
}

double NNfunction_b1b1::synapse0x1f6a730() {
   return (neuron0x1f63ee0()*-0.0182723);
}

double NNfunction_b1b1::synapse0x1f6a770() {
   return (neuron0x1f64220()*-0.00596483);
}

double NNfunction_b1b1::synapse0x1f6a7b0() {
   return (neuron0x1f64560()*-0.0119829);
}

double NNfunction_b1b1::synapse0x1f6e8f0() {
   return (neuron0x1f648a0()*0.279718);
}

double NNfunction_b1b1::synapse0x1f6e930() {
   return (neuron0x1f64be0()*0.0258868);
}

double NNfunction_b1b1::synapse0x1f6e970() {
   return (neuron0x1f64f20()*0.0437817);
}

double NNfunction_b1b1::synapse0x1f6a300() {
   return (neuron0x1f65260()*-0.131176);
}

double NNfunction_b1b1::synapse0x1f6a340() {
   return (neuron0x1f657c0()*-0.027105);
}

double NNfunction_b1b1::synapse0x1f6eac0() {
   return (neuron0x1f659e0()*-0.00897538);
}

double NNfunction_b1b1::synapse0x1f6eb00() {
   return (neuron0x1f65d20()*0.319902);
}

double NNfunction_b1b1::synapse0x1f6eb40() {
   return (neuron0x1f66060()*-0.0272582);
}

double NNfunction_b1b1::synapse0x1f6eb80() {
   return (neuron0x1f663a0()*-0.00889306);
}

double NNfunction_b1b1::synapse0x1f6ebc0() {
   return (neuron0x1f666e0()*-0.0219022);
}

double NNfunction_b1b1::synapse0x1f6ec00() {
   return (neuron0x1f66a20()*0.121688);
}

double NNfunction_b1b1::synapse0x1f6ef80() {
   return (neuron0x1f61e60()*0.178216);
}

double NNfunction_b1b1::synapse0x1f6efc0() {
   return (neuron0x1f621a0()*-0.0131365);
}

double NNfunction_b1b1::synapse0x1f6f000() {
   return (neuron0x1f624e0()*0.0666209);
}

double NNfunction_b1b1::synapse0x1f6f040() {
   return (neuron0x1f62820()*0.0168538);
}

double NNfunction_b1b1::synapse0x1f6f080() {
   return (neuron0x1f62b60()*0.0628481);
}

double NNfunction_b1b1::synapse0x1f6f0c0() {
   return (neuron0x1f62ea0()*0.0126548);
}

double NNfunction_b1b1::synapse0x1f6f100() {
   return (neuron0x1f631e0()*0.0188505);
}

double NNfunction_b1b1::synapse0x1f6f140() {
   return (neuron0x1f63520()*0.087576);
}

double NNfunction_b1b1::synapse0x1f6f180() {
   return (neuron0x1f63860()*0.0492946);
}

double NNfunction_b1b1::synapse0x1f6f1c0() {
   return (neuron0x1f63ba0()*0.0145824);
}

double NNfunction_b1b1::synapse0x1f6f200() {
   return (neuron0x1f63ee0()*-0.0112981);
}

double NNfunction_b1b1::synapse0x1f6f240() {
   return (neuron0x1f64220()*0.00288929);
}

double NNfunction_b1b1::synapse0x1f6f280() {
   return (neuron0x1f64560()*0.000686681);
}

double NNfunction_b1b1::synapse0x1f6f2c0() {
   return (neuron0x1f648a0()*-5.66316);
}

double NNfunction_b1b1::synapse0x1f6f300() {
   return (neuron0x1f64be0()*-0.0204837);
}

double NNfunction_b1b1::synapse0x1f6f340() {
   return (neuron0x1f64f20()*-0.0462035);
}

double NNfunction_b1b1::synapse0x1f6edd0() {
   return (neuron0x1f65260()*0.0639165);
}

double NNfunction_b1b1::synapse0x1f6ee10() {
   return (neuron0x1f657c0()*0.00717251);
}

double NNfunction_b1b1::synapse0x1f6f490() {
   return (neuron0x1f659e0()*-0.0300792);
}

double NNfunction_b1b1::synapse0x1f6f4d0() {
   return (neuron0x1f65d20()*0.131819);
}

double NNfunction_b1b1::synapse0x1f6f510() {
   return (neuron0x1f66060()*0.0209368);
}

double NNfunction_b1b1::synapse0x1f6f550() {
   return (neuron0x1f663a0()*0.0998723);
}

double NNfunction_b1b1::synapse0x1f6f590() {
   return (neuron0x1f666e0()*0.0196181);
}

double NNfunction_b1b1::synapse0x1f6f5d0() {
   return (neuron0x1f66a20()*0.033661);
}

double NNfunction_b1b1::synapse0x1f6f950() {
   return (neuron0x1f61e60()*0.954369);
}

double NNfunction_b1b1::synapse0x1f6f990() {
   return (neuron0x1f621a0()*-0.0534744);
}

double NNfunction_b1b1::synapse0x1f6f9d0() {
   return (neuron0x1f624e0()*-0.0183312);
}

double NNfunction_b1b1::synapse0x1f6fa10() {
   return (neuron0x1f62820()*0.0466485);
}

double NNfunction_b1b1::synapse0x1f6fa50() {
   return (neuron0x1f62b60()*0.497036);
}

double NNfunction_b1b1::synapse0x1f6fa90() {
   return (neuron0x1f62ea0()*-0.054452);
}

double NNfunction_b1b1::synapse0x1f6fad0() {
   return (neuron0x1f631e0()*0.00953765);
}

double NNfunction_b1b1::synapse0x1f6fb10() {
   return (neuron0x1f63520()*0.0714226);
}

double NNfunction_b1b1::synapse0x1f6fb50() {
   return (neuron0x1f63860()*-0.218538);
}

double NNfunction_b1b1::synapse0x1f6fb90() {
   return (neuron0x1f63ba0()*-0.184415);
}

double NNfunction_b1b1::synapse0x1f6fbd0() {
   return (neuron0x1f63ee0()*-0.0290469);
}

double NNfunction_b1b1::synapse0x1f6fc10() {
   return (neuron0x1f64220()*0.0393272);
}

double NNfunction_b1b1::synapse0x1f6fc50() {
   return (neuron0x1f64560()*0.0204438);
}

double NNfunction_b1b1::synapse0x1f6fc90() {
   return (neuron0x1f648a0()*0.162983);
}

double NNfunction_b1b1::synapse0x1f6fcd0() {
   return (neuron0x1f64be0()*0.0141787);
}

double NNfunction_b1b1::synapse0x1f6fd10() {
   return (neuron0x1f64f20()*-0.0796391);
}

double NNfunction_b1b1::synapse0x1f6f7a0() {
   return (neuron0x1f65260()*-0.0651983);
}

double NNfunction_b1b1::synapse0x1f6f7e0() {
   return (neuron0x1f657c0()*-0.0253001);
}

double NNfunction_b1b1::synapse0x1f6fe60() {
   return (neuron0x1f659e0()*0.0416076);
}

double NNfunction_b1b1::synapse0x1f6fea0() {
   return (neuron0x1f65d20()*2.85247);
}

double NNfunction_b1b1::synapse0x1f6fee0() {
   return (neuron0x1f66060()*0.0108859);
}

double NNfunction_b1b1::synapse0x1f6ff20() {
   return (neuron0x1f663a0()*-0.0151064);
}

double NNfunction_b1b1::synapse0x1f6ff60() {
   return (neuron0x1f666e0()*-0.00077569);
}

double NNfunction_b1b1::synapse0x1f6ffa0() {
   return (neuron0x1f66a20()*-0.200083);
}

double NNfunction_b1b1::synapse0x1f70320() {
   return (neuron0x1f61e60()*-0.329675);
}

double NNfunction_b1b1::synapse0x1f70360() {
   return (neuron0x1f621a0()*0.0176836);
}

double NNfunction_b1b1::synapse0x1f703a0() {
   return (neuron0x1f624e0()*0.0335151);
}

double NNfunction_b1b1::synapse0x1f703e0() {
   return (neuron0x1f62820()*-0.0870445);
}

double NNfunction_b1b1::synapse0x1f70420() {
   return (neuron0x1f62b60()*0.21213);
}

double NNfunction_b1b1::synapse0x1f70460() {
   return (neuron0x1f62ea0()*-0.0531816);
}

double NNfunction_b1b1::synapse0x1f704a0() {
   return (neuron0x1f631e0()*-0.0716186);
}

double NNfunction_b1b1::synapse0x1f704e0() {
   return (neuron0x1f63520()*-0.0295604);
}

double NNfunction_b1b1::synapse0x1f70520() {
   return (neuron0x1f63860()*0.0961788);
}

double NNfunction_b1b1::synapse0x1f70560() {
   return (neuron0x1f63ba0()*0.0283078);
}

double NNfunction_b1b1::synapse0x1f705a0() {
   return (neuron0x1f63ee0()*0.0773884);
}

double NNfunction_b1b1::synapse0x1f705e0() {
   return (neuron0x1f64220()*0.00738788);
}

double NNfunction_b1b1::synapse0x1f70620() {
   return (neuron0x1f64560()*-0.00806178);
}

double NNfunction_b1b1::synapse0x1f70660() {
   return (neuron0x1f648a0()*0.254122);
}

double NNfunction_b1b1::synapse0x1f706a0() {
   return (neuron0x1f64be0()*0.831362);
}

double NNfunction_b1b1::synapse0x1f706e0() {
   return (neuron0x1f64f20()*0.0379397);
}

double NNfunction_b1b1::synapse0x1f70170() {
   return (neuron0x1f65260()*-0.218028);
}

double NNfunction_b1b1::synapse0x1f701b0() {
   return (neuron0x1f657c0()*-0.00138773);
}

double NNfunction_b1b1::synapse0x1f70830() {
   return (neuron0x1f659e0()*0.00916974);
}

double NNfunction_b1b1::synapse0x1f70870() {
   return (neuron0x1f65d20()*0.213968);
}

double NNfunction_b1b1::synapse0x1f708b0() {
   return (neuron0x1f66060()*0.0261438);
}

double NNfunction_b1b1::synapse0x1f708f0() {
   return (neuron0x1f663a0()*-0.0991509);
}

double NNfunction_b1b1::synapse0x1f70930() {
   return (neuron0x1f666e0()*0.0125378);
}

double NNfunction_b1b1::synapse0x1f70970() {
   return (neuron0x1f66a20()*-0.117775);
}

double NNfunction_b1b1::synapse0x1f70cf0() {
   return (neuron0x1f61e60()*-0.072922);
}

double NNfunction_b1b1::synapse0x1f62080() {
   return (neuron0x1f621a0()*0.050241);
}

double NNfunction_b1b1::synapse0x1f620c0() {
   return (neuron0x1f624e0()*0.102082);
}

double NNfunction_b1b1::synapse0x1f623c0() {
   return (neuron0x1f62820()*1.37903);
}

double NNfunction_b1b1::synapse0x1f62400() {
   return (neuron0x1f62b60()*0.113893);
}

double NNfunction_b1b1::synapse0x1f62700() {
   return (neuron0x1f62ea0()*0.0556645);
}

double NNfunction_b1b1::synapse0x1f62740() {
   return (neuron0x1f631e0()*-0.0597582);
}

double NNfunction_b1b1::synapse0x1f62a40() {
   return (neuron0x1f63520()*-0.0121986);
}

double NNfunction_b1b1::synapse0x1f62a80() {
   return (neuron0x1f63860()*-0.00389668);
}

double NNfunction_b1b1::synapse0x1f62d80() {
   return (neuron0x1f63ba0()*0.0363226);
}

double NNfunction_b1b1::synapse0x1f62dc0() {
   return (neuron0x1f63ee0()*-0.0129762);
}

double NNfunction_b1b1::synapse0x1f630c0() {
   return (neuron0x1f64220()*-0.013257);
}

double NNfunction_b1b1::synapse0x1f63100() {
   return (neuron0x1f64560()*-0.0432142);
}

double NNfunction_b1b1::synapse0x1f63400() {
   return (neuron0x1f648a0()*0.230964);
}

double NNfunction_b1b1::synapse0x1f63440() {
   return (neuron0x1f64be0()*-0.0975838);
}

double NNfunction_b1b1::synapse0x1f63740() {
   return (neuron0x1f64f20()*0.0568453);
}

double NNfunction_b1b1::synapse0x1f63780() {
   return (neuron0x1f65260()*-0.101456);
}

double NNfunction_b1b1::synapse0x1f63a80() {
   return (neuron0x1f657c0()*0.0238402);
}

double NNfunction_b1b1::synapse0x1f63ac0() {
   return (neuron0x1f659e0()*-0.0381985);
}

double NNfunction_b1b1::synapse0x1f63dc0() {
   return (neuron0x1f65d20()*-2.13789);
}

double NNfunction_b1b1::synapse0x1f63e00() {
   return (neuron0x1f66060()*0.0611415);
}

double NNfunction_b1b1::synapse0x1f64100() {
   return (neuron0x1f663a0()*0.068373);
}

double NNfunction_b1b1::synapse0x1f64140() {
   return (neuron0x1f666e0()*-0.00641232);
}

double NNfunction_b1b1::synapse0x1f64440() {
   return (neuron0x1f66a20()*-0.254548);
}

double NNfunction_b1b1::synapse0x1f64480() {
   return (neuron0x1f61e60()*0.259899);
}

double NNfunction_b1b1::synapse0x1f65140() {
   return (neuron0x1f621a0()*-0.00220851);
}

double NNfunction_b1b1::synapse0x1f65180() {
   return (neuron0x1f624e0()*-0.036084);
}

double NNfunction_b1b1::synapse0x1f70b40() {
   return (neuron0x1f62820()*0.0544027);
}

double NNfunction_b1b1::synapse0x1f70b80() {
   return (neuron0x1f62b60()*0.0204352);
}

double NNfunction_b1b1::synapse0x1f65480() {
   return (neuron0x1f62ea0()*0.0361713);
}

double NNfunction_b1b1::synapse0x1f654c0() {
   return (neuron0x1f631e0()*-0.0474311);
}

double NNfunction_b1b1::synapse0x1d137f0() {
   return (neuron0x1f63520()*-0.000231743);
}

double NNfunction_b1b1::synapse0x1d13830() {
   return (neuron0x1f63860()*-0.011692);
}

double NNfunction_b1b1::synapse0x1f65c00() {
   return (neuron0x1f63ba0()*-0.0143348);
}

double NNfunction_b1b1::synapse0x1f65c40() {
   return (neuron0x1f63ee0()*-0.010745);
}

double NNfunction_b1b1::synapse0x1f65f40() {
   return (neuron0x1f64220()*0.00719573);
}

double NNfunction_b1b1::synapse0x1f65f80() {
   return (neuron0x1f64560()*0.00595168);
}

double NNfunction_b1b1::synapse0x1f66280() {
   return (neuron0x1f648a0()*0.121044);
}

double NNfunction_b1b1::synapse0x1f662c0() {
   return (neuron0x1f64be0()*-0.0173933);
}

double NNfunction_b1b1::synapse0x1f665c0() {
   return (neuron0x1f64f20()*-0.0295302);
}

double NNfunction_b1b1::synapse0x1f66600() {
   return (neuron0x1f65260()*0.000810518);
}

double NNfunction_b1b1::synapse0x1f66900() {
   return (neuron0x1f657c0()*-0.0173268);
}

double NNfunction_b1b1::synapse0x1f66940() {
   return (neuron0x1f659e0()*-0.0015153);
}

double NNfunction_b1b1::synapse0x1f66c40() {
   return (neuron0x1f65d20()*-7.5195);
}

double NNfunction_b1b1::synapse0x1f66c80() {
   return (neuron0x1f66060()*-0.0171658);
}

double NNfunction_b1b1::synapse0x1f64780() {
   return (neuron0x1f663a0()*0.00299837);
}

double NNfunction_b1b1::synapse0x1f647c0() {
   return (neuron0x1f666e0()*0.0081527);
}

double NNfunction_b1b1::synapse0x1f72a60() {
   return (neuron0x1f66a20()*-0.0367049);
}

double NNfunction_b1b1::synapse0x1f72de0() {
   return (neuron0x1f61e60()*-0.10251);
}

double NNfunction_b1b1::synapse0x1f72e20() {
   return (neuron0x1f621a0()*-0.0174773);
}

double NNfunction_b1b1::synapse0x1f72e60() {
   return (neuron0x1f624e0()*-0.0215035);
}

double NNfunction_b1b1::synapse0x1f72ea0() {
   return (neuron0x1f62820()*-0.00766138);
}

double NNfunction_b1b1::synapse0x1f72ee0() {
   return (neuron0x1f62b60()*-0.518215);
}

double NNfunction_b1b1::synapse0x1f72f20() {
   return (neuron0x1f62ea0()*-0.0160402);
}

double NNfunction_b1b1::synapse0x1f72f60() {
   return (neuron0x1f631e0()*0.0342203);
}

double NNfunction_b1b1::synapse0x1f72fa0() {
   return (neuron0x1f63520()*0.055302);
}

double NNfunction_b1b1::synapse0x1f72fe0() {
   return (neuron0x1f63860()*0.0160569);
}

double NNfunction_b1b1::synapse0x1f73020() {
   return (neuron0x1f63ba0()*-0.0260198);
}

double NNfunction_b1b1::synapse0x1f73060() {
   return (neuron0x1f63ee0()*-0.0452344);
}

double NNfunction_b1b1::synapse0x1f730a0() {
   return (neuron0x1f64220()*-0.0497657);
}

double NNfunction_b1b1::synapse0x1f730e0() {
   return (neuron0x1f64560()*-0.0650102);
}

double NNfunction_b1b1::synapse0x1f73120() {
   return (neuron0x1f648a0()*1.53287);
}

double NNfunction_b1b1::synapse0x1f73160() {
   return (neuron0x1f64be0()*0.00413346);
}

double NNfunction_b1b1::synapse0x1f731a0() {
   return (neuron0x1f64f20()*-0.0302735);
}

double NNfunction_b1b1::synapse0x1f72c30() {
   return (neuron0x1f65260()*-0.112423);
}

double NNfunction_b1b1::synapse0x1f72c70() {
   return (neuron0x1f657c0()*0.0221155);
}

double NNfunction_b1b1::synapse0x1f732f0() {
   return (neuron0x1f659e0()*-0.00737476);
}

double NNfunction_b1b1::synapse0x1f73330() {
   return (neuron0x1f65d20()*-0.490778);
}

double NNfunction_b1b1::synapse0x1f73370() {
   return (neuron0x1f66060()*0.0211777);
}

double NNfunction_b1b1::synapse0x1f733b0() {
   return (neuron0x1f663a0()*0.0428033);
}

double NNfunction_b1b1::synapse0x1f733f0() {
   return (neuron0x1f666e0()*0.0117014);
}

double NNfunction_b1b1::synapse0x1f73430() {
   return (neuron0x1f66a20()*-2.7098);
}

double NNfunction_b1b1::synapse0x1f737b0() {
   return (neuron0x1f61e60()*0.101496);
}

double NNfunction_b1b1::synapse0x1f737f0() {
   return (neuron0x1f621a0()*-0.0192287);
}

double NNfunction_b1b1::synapse0x1f73830() {
   return (neuron0x1f624e0()*0.163934);
}

double NNfunction_b1b1::synapse0x1f73870() {
   return (neuron0x1f62820()*0.0177167);
}

double NNfunction_b1b1::synapse0x1f738b0() {
   return (neuron0x1f62b60()*0.176328);
}

double NNfunction_b1b1::synapse0x1f738f0() {
   return (neuron0x1f62ea0()*-0.0162714);
}

double NNfunction_b1b1::synapse0x1f73930() {
   return (neuron0x1f631e0()*0.0236815);
}

double NNfunction_b1b1::synapse0x1f73970() {
   return (neuron0x1f63520()*0.0529291);
}

double NNfunction_b1b1::synapse0x1f739b0() {
   return (neuron0x1f63860()*-0.0114878);
}

double NNfunction_b1b1::synapse0x1f739f0() {
   return (neuron0x1f63ba0()*0.0188225);
}

double NNfunction_b1b1::synapse0x1f73a30() {
   return (neuron0x1f63ee0()*-0.0450592);
}

double NNfunction_b1b1::synapse0x1f73a70() {
   return (neuron0x1f64220()*-0.0576253);
}

double NNfunction_b1b1::synapse0x1f73ab0() {
   return (neuron0x1f64560()*-0.0193143);
}

double NNfunction_b1b1::synapse0x1f73af0() {
   return (neuron0x1f648a0()*-2.16543);
}

double NNfunction_b1b1::synapse0x1f73b30() {
   return (neuron0x1f64be0()*-0.00406805);
}

double NNfunction_b1b1::synapse0x1f73b70() {
   return (neuron0x1f64f20()*0.0166873);
}

double NNfunction_b1b1::synapse0x1f73600() {
   return (neuron0x1f65260()*-0.0877948);
}

double NNfunction_b1b1::synapse0x1f73640() {
   return (neuron0x1f657c0()*-0.0248627);
}

double NNfunction_b1b1::synapse0x1f73cc0() {
   return (neuron0x1f659e0()*0.0046431);
}

double NNfunction_b1b1::synapse0x1f73d00() {
   return (neuron0x1f65d20()*-0.250969);
}

double NNfunction_b1b1::synapse0x1f73d40() {
   return (neuron0x1f66060()*0.0188252);
}

double NNfunction_b1b1::synapse0x1f73d80() {
   return (neuron0x1f663a0()*0.0987978);
}

double NNfunction_b1b1::synapse0x1f73dc0() {
   return (neuron0x1f666e0()*-0.0314824);
}

double NNfunction_b1b1::synapse0x1f73e00() {
   return (neuron0x1f66a20()*-1.45374);
}

double NNfunction_b1b1::synapse0x1f74180() {
   return (neuron0x1f61e60()*0.154453);
}

double NNfunction_b1b1::synapse0x1f741c0() {
   return (neuron0x1f621a0()*0.142497);
}

double NNfunction_b1b1::synapse0x1f74200() {
   return (neuron0x1f624e0()*-0.0160804);
}

double NNfunction_b1b1::synapse0x1f74240() {
   return (neuron0x1f62820()*-0.031741);
}

double NNfunction_b1b1::synapse0x1f74280() {
   return (neuron0x1f62b60()*-0.158379);
}

double NNfunction_b1b1::synapse0x1f742c0() {
   return (neuron0x1f62ea0()*-8.21349e-06);
}

double NNfunction_b1b1::synapse0x1f74300() {
   return (neuron0x1f631e0()*-1.00121);
}

double NNfunction_b1b1::synapse0x1f74340() {
   return (neuron0x1f63520()*0.0421609);
}

double NNfunction_b1b1::synapse0x1f74380() {
   return (neuron0x1f63860()*-0.0210613);
}

double NNfunction_b1b1::synapse0x1f743c0() {
   return (neuron0x1f63ba0()*0.104976);
}

double NNfunction_b1b1::synapse0x1f74400() {
   return (neuron0x1f63ee0()*-0.186629);
}

double NNfunction_b1b1::synapse0x1f74440() {
   return (neuron0x1f64220()*0.0425035);
}

double NNfunction_b1b1::synapse0x1f74480() {
   return (neuron0x1f64560()*0.016693);
}

double NNfunction_b1b1::synapse0x1f744c0() {
   return (neuron0x1f648a0()*-0.197091);
}

double NNfunction_b1b1::synapse0x1f74500() {
   return (neuron0x1f64be0()*0.0672046);
}

double NNfunction_b1b1::synapse0x1f74540() {
   return (neuron0x1f64f20()*0.134964);
}

double NNfunction_b1b1::synapse0x1f73fd0() {
   return (neuron0x1f65260()*0.18275);
}

double NNfunction_b1b1::synapse0x1f74010() {
   return (neuron0x1f657c0()*0.00758354);
}

double NNfunction_b1b1::synapse0x1f74690() {
   return (neuron0x1f659e0()*0.0701686);
}

double NNfunction_b1b1::synapse0x1f746d0() {
   return (neuron0x1f65d20()*-0.215754);
}

double NNfunction_b1b1::synapse0x1f74710() {
   return (neuron0x1f66060()*0.0701656);
}

double NNfunction_b1b1::synapse0x1f74750() {
   return (neuron0x1f663a0()*0.0615744);
}

double NNfunction_b1b1::synapse0x1f74790() {
   return (neuron0x1f666e0()*-0.0198519);
}

double NNfunction_b1b1::synapse0x1f747d0() {
   return (neuron0x1f66a20()*-0.0879351);
}

double NNfunction_b1b1::synapse0x1f74b50() {
   return (neuron0x1f61e60()*-0.0820659);
}

double NNfunction_b1b1::synapse0x1f74b90() {
   return (neuron0x1f621a0()*0.0123311);
}

double NNfunction_b1b1::synapse0x1f74bd0() {
   return (neuron0x1f624e0()*-0.0396136);
}

double NNfunction_b1b1::synapse0x1f74c10() {
   return (neuron0x1f62820()*-1.63946);
}

double NNfunction_b1b1::synapse0x1f74c50() {
   return (neuron0x1f62b60()*0.331595);
}

double NNfunction_b1b1::synapse0x1f74c90() {
   return (neuron0x1f62ea0()*-0.0559333);
}

double NNfunction_b1b1::synapse0x1f74cd0() {
   return (neuron0x1f631e0()*-0.0474804);
}

double NNfunction_b1b1::synapse0x1f74d10() {
   return (neuron0x1f63520()*-0.0559554);
}

double NNfunction_b1b1::synapse0x1f74d50() {
   return (neuron0x1f63860()*0.00187166);
}

double NNfunction_b1b1::synapse0x1f74d90() {
   return (neuron0x1f63ba0()*0.0133171);
}

double NNfunction_b1b1::synapse0x1f74dd0() {
   return (neuron0x1f63ee0()*-0.0191582);
}

double NNfunction_b1b1::synapse0x1f74e10() {
   return (neuron0x1f64220()*0.00712996);
}

double NNfunction_b1b1::synapse0x1f74e50() {
   return (neuron0x1f64560()*0.0183492);
}

double NNfunction_b1b1::synapse0x1f74e90() {
   return (neuron0x1f648a0()*0.979161);
}

double NNfunction_b1b1::synapse0x1f74ed0() {
   return (neuron0x1f64be0()*-0.00493165);
}

double NNfunction_b1b1::synapse0x1f74f10() {
   return (neuron0x1f64f20()*0.0255535);
}

double NNfunction_b1b1::synapse0x1f749a0() {
   return (neuron0x1f65260()*0.0389217);
}

double NNfunction_b1b1::synapse0x1f749e0() {
   return (neuron0x1f657c0()*0.0507982);
}

double NNfunction_b1b1::synapse0x1f75060() {
   return (neuron0x1f659e0()*0.0123378);
}

double NNfunction_b1b1::synapse0x1f750a0() {
   return (neuron0x1f65d20()*-1.12956);
}

double NNfunction_b1b1::synapse0x1f750e0() {
   return (neuron0x1f66060()*-0.0563737);
}

double NNfunction_b1b1::synapse0x1f75120() {
   return (neuron0x1f663a0()*0.0294498);
}

double NNfunction_b1b1::synapse0x1f75160() {
   return (neuron0x1f666e0()*0.0309108);
}

double NNfunction_b1b1::synapse0x1f751a0() {
   return (neuron0x1f66a20()*-1.65139);
}

double NNfunction_b1b1::synapse0x1f75520() {
   return (neuron0x1f61e60()*0.277475);
}

double NNfunction_b1b1::synapse0x1f75560() {
   return (neuron0x1f621a0()*-0.114369);
}

double NNfunction_b1b1::synapse0x1f755a0() {
   return (neuron0x1f624e0()*-0.00398218);
}

double NNfunction_b1b1::synapse0x1f755e0() {
   return (neuron0x1f62820()*1.84944);
}

double NNfunction_b1b1::synapse0x1f75620() {
   return (neuron0x1f62b60()*-0.101105);
}

double NNfunction_b1b1::synapse0x1f75660() {
   return (neuron0x1f62ea0()*0.00883716);
}

double NNfunction_b1b1::synapse0x1f756a0() {
   return (neuron0x1f631e0()*-0.00423329);
}

double NNfunction_b1b1::synapse0x1f756e0() {
   return (neuron0x1f63520()*0.101566);
}

double NNfunction_b1b1::synapse0x1f75720() {
   return (neuron0x1f63860()*0.0350807);
}

double NNfunction_b1b1::synapse0x1f6d8e0() {
   return (neuron0x1f63ba0()*-0.0941574);
}

double NNfunction_b1b1::synapse0x1f6d920() {
   return (neuron0x1f63ee0()*0.026954);
}

double NNfunction_b1b1::synapse0x1f6d960() {
   return (neuron0x1f64220()*-0.103894);
}

double NNfunction_b1b1::synapse0x1f6d9a0() {
   return (neuron0x1f64560()*-0.0419484);
}

double NNfunction_b1b1::synapse0x1f6d9e0() {
   return (neuron0x1f648a0()*-0.0916702);
}

double NNfunction_b1b1::synapse0x1f6da20() {
   return (neuron0x1f64be0()*-0.0331443);
}

double NNfunction_b1b1::synapse0x1f6da60() {
   return (neuron0x1f64f20()*-0.133135);
}

double NNfunction_b1b1::synapse0x1f75370() {
   return (neuron0x1f65260()*0.111628);
}

double NNfunction_b1b1::synapse0x1f753b0() {
   return (neuron0x1f657c0()*-0.0537114);
}

double NNfunction_b1b1::synapse0x1f6dbb0() {
   return (neuron0x1f659e0()*-0.0555098);
}

double NNfunction_b1b1::synapse0x1f6dbf0() {
   return (neuron0x1f65d20()*0.242274);
}

double NNfunction_b1b1::synapse0x1f6dc30() {
   return (neuron0x1f66060()*-0.0553968);
}

double NNfunction_b1b1::synapse0x1f6dc70() {
   return (neuron0x1f663a0()*-0.0533364);
}

double NNfunction_b1b1::synapse0x1f6dcb0() {
   return (neuron0x1f666e0()*0.0297531);
}

double NNfunction_b1b1::synapse0x1f6dcf0() {
   return (neuron0x1f66a20()*-0.536394);
}

double NNfunction_b1b1::synapse0x1f6e070() {
   return (neuron0x1f61e60()*-0.440664);
}

double NNfunction_b1b1::synapse0x1f6e0b0() {
   return (neuron0x1f621a0()*0.0114885);
}

double NNfunction_b1b1::synapse0x1f6e0f0() {
   return (neuron0x1f624e0()*0.0449918);
}

double NNfunction_b1b1::synapse0x1f6e130() {
   return (neuron0x1f62820()*-0.220602);
}

double NNfunction_b1b1::synapse0x1f6e170() {
   return (neuron0x1f62b60()*-0.0906152);
}

double NNfunction_b1b1::synapse0x1f6e1b0() {
   return (neuron0x1f62ea0()*0.0329305);
}

double NNfunction_b1b1::synapse0x1f6e1f0() {
   return (neuron0x1f631e0()*0.0591501);
}

double NNfunction_b1b1::synapse0x1f6e230() {
   return (neuron0x1f63520()*0.0239592);
}

double NNfunction_b1b1::synapse0x1f6e270() {
   return (neuron0x1f63860()*0.00980935);
}

double NNfunction_b1b1::synapse0x1f6e2b0() {
   return (neuron0x1f63ba0()*-0.101874);
}

double NNfunction_b1b1::synapse0x1f6e2f0() {
   return (neuron0x1f63ee0()*0.110834);
}

double NNfunction_b1b1::synapse0x1f6e330() {
   return (neuron0x1f64220()*-0.0373752);
}

double NNfunction_b1b1::synapse0x1f6e370() {
   return (neuron0x1f64560()*-0.0584997);
}

double NNfunction_b1b1::synapse0x1f6e3b0() {
   return (neuron0x1f648a0()*2.78689);
}

double NNfunction_b1b1::synapse0x1f6e3f0() {
   return (neuron0x1f64be0()*0.0169549);
}

double NNfunction_b1b1::synapse0x1f6e430() {
   return (neuron0x1f64f20()*-0.0150413);
}

double NNfunction_b1b1::synapse0x1f6dec0() {
   return (neuron0x1f65260()*0.283301);
}

double NNfunction_b1b1::synapse0x1f6df00() {
   return (neuron0x1f657c0()*0.116468);
}

double NNfunction_b1b1::synapse0x1f6e580() {
   return (neuron0x1f659e0()*-0.0298679);
}

double NNfunction_b1b1::synapse0x1f6e5c0() {
   return (neuron0x1f65d20()*0.58451);
}

double NNfunction_b1b1::synapse0x1f6e600() {
   return (neuron0x1f66060()*-0.0735816);
}

double NNfunction_b1b1::synapse0x1f6e640() {
   return (neuron0x1f663a0()*-0.0746966);
}

double NNfunction_b1b1::synapse0x1f6e680() {
   return (neuron0x1f666e0()*0.024397);
}

double NNfunction_b1b1::synapse0x1f6e6c0() {
   return (neuron0x1f66a20()*1.41911);
}

double NNfunction_b1b1::synapse0x1f6e890() {
   return (neuron0x1f61e60()*0.599246);
}

double NNfunction_b1b1::synapse0x1f77920() {
   return (neuron0x1f621a0()*-0.0820176);
}

double NNfunction_b1b1::synapse0x1f77960() {
   return (neuron0x1f624e0()*-0.0364002);
}

double NNfunction_b1b1::synapse0x1f779a0() {
   return (neuron0x1f62820()*0.406588);
}

double NNfunction_b1b1::synapse0x1f779e0() {
   return (neuron0x1f62b60()*-0.150125);
}

double NNfunction_b1b1::synapse0x1f77a20() {
   return (neuron0x1f62ea0()*0.053685);
}

double NNfunction_b1b1::synapse0x1f77a60() {
   return (neuron0x1f631e0()*0.0401668);
}

double NNfunction_b1b1::synapse0x1f77aa0() {
   return (neuron0x1f63520()*-0.0159562);
}

double NNfunction_b1b1::synapse0x1f77ae0() {
   return (neuron0x1f63860()*-0.0810643);
}

double NNfunction_b1b1::synapse0x1f77b20() {
   return (neuron0x1f63ba0()*-0.0406638);
}

double NNfunction_b1b1::synapse0x1f77b60() {
   return (neuron0x1f63ee0()*0.0327119);
}

double NNfunction_b1b1::synapse0x1f77ba0() {
   return (neuron0x1f64220()*0.0223656);
}

double NNfunction_b1b1::synapse0x1f77be0() {
   return (neuron0x1f64560()*-0.0960283);
}

double NNfunction_b1b1::synapse0x1f77c20() {
   return (neuron0x1f648a0()*-1.21803);
}

double NNfunction_b1b1::synapse0x1f77c60() {
   return (neuron0x1f64be0()*-0.00532644);
}

double NNfunction_b1b1::synapse0x1f77ca0() {
   return (neuron0x1f64f20()*0.0265835);
}

double NNfunction_b1b1::synapse0x1f77770() {
   return (neuron0x1f65260()*-0.178413);
}

double NNfunction_b1b1::synapse0x1f777b0() {
   return (neuron0x1f657c0()*-0.0240791);
}

double NNfunction_b1b1::synapse0x1f77df0() {
   return (neuron0x1f659e0()*-0.0248555);
}

double NNfunction_b1b1::synapse0x1f77e30() {
   return (neuron0x1f65d20()*-1.30933);
}

double NNfunction_b1b1::synapse0x1f77e70() {
   return (neuron0x1f66060()*0.0636902);
}

double NNfunction_b1b1::synapse0x1f77eb0() {
   return (neuron0x1f663a0()*0.133816);
}

double NNfunction_b1b1::synapse0x1f77ef0() {
   return (neuron0x1f666e0()*-0.0334571);
}

double NNfunction_b1b1::synapse0x1f77f30() {
   return (neuron0x1f66a20()*-1.51465);
}

double NNfunction_b1b1::synapse0x1f782b0() {
   return (neuron0x1f61e60()*-0.222769);
}

double NNfunction_b1b1::synapse0x1f782f0() {
   return (neuron0x1f621a0()*0.0234848);
}

double NNfunction_b1b1::synapse0x1f78330() {
   return (neuron0x1f624e0()*-0.03103);
}

double NNfunction_b1b1::synapse0x1f78370() {
   return (neuron0x1f62820()*-4.13741);
}

double NNfunction_b1b1::synapse0x1f783b0() {
   return (neuron0x1f62b60()*-0.0666277);
}

double NNfunction_b1b1::synapse0x1f783f0() {
   return (neuron0x1f62ea0()*0.00678871);
}

double NNfunction_b1b1::synapse0x1f78430() {
   return (neuron0x1f631e0()*0.0164802);
}

double NNfunction_b1b1::synapse0x1f78470() {
   return (neuron0x1f63520()*-0.0135945);
}

double NNfunction_b1b1::synapse0x1f784b0() {
   return (neuron0x1f63860()*-0.0369529);
}

double NNfunction_b1b1::synapse0x1f784f0() {
   return (neuron0x1f63ba0()*-0.000340224);
}

double NNfunction_b1b1::synapse0x1f78530() {
   return (neuron0x1f63ee0()*-0.00208836);
}

double NNfunction_b1b1::synapse0x1f78570() {
   return (neuron0x1f64220()*-0.0385138);
}

double NNfunction_b1b1::synapse0x1f785b0() {
   return (neuron0x1f64560()*-0.02797);
}

double NNfunction_b1b1::synapse0x1f785f0() {
   return (neuron0x1f648a0()*0.133149);
}

double NNfunction_b1b1::synapse0x1f78630() {
   return (neuron0x1f64be0()*-0.00840718);
}

double NNfunction_b1b1::synapse0x1f78670() {
   return (neuron0x1f64f20()*0.0230188);
}

double NNfunction_b1b1::synapse0x1f78100() {
   return (neuron0x1f65260()*-0.13799);
}

double NNfunction_b1b1::synapse0x1f78140() {
   return (neuron0x1f657c0()*0.00582972);
}

double NNfunction_b1b1::synapse0x1f787c0() {
   return (neuron0x1f659e0()*-0.0272946);
}

double NNfunction_b1b1::synapse0x1f78800() {
   return (neuron0x1f65d20()*0.0352987);
}

double NNfunction_b1b1::synapse0x1f78840() {
   return (neuron0x1f66060()*0.0311294);
}

double NNfunction_b1b1::synapse0x1f78880() {
   return (neuron0x1f663a0()*0.00624939);
}

double NNfunction_b1b1::synapse0x1f788c0() {
   return (neuron0x1f666e0()*-0.0159804);
}

double NNfunction_b1b1::synapse0x1f78900() {
   return (neuron0x1f66a20()*-0.0125614);
}

double NNfunction_b1b1::synapse0x1f78c80() {
   return (neuron0x1f61e60()*0.0838184);
}

double NNfunction_b1b1::synapse0x1f78cc0() {
   return (neuron0x1f621a0()*-0.0177963);
}

double NNfunction_b1b1::synapse0x1f78d00() {
   return (neuron0x1f624e0()*-0.122662);
}

double NNfunction_b1b1::synapse0x1f78d40() {
   return (neuron0x1f62820()*3.65142);
}

double NNfunction_b1b1::synapse0x1f78d80() {
   return (neuron0x1f62b60()*0.0911028);
}

double NNfunction_b1b1::synapse0x1f78dc0() {
   return (neuron0x1f62ea0()*0.0283515);
}

double NNfunction_b1b1::synapse0x1f78e00() {
   return (neuron0x1f631e0()*0.0395538);
}

double NNfunction_b1b1::synapse0x1f78e40() {
   return (neuron0x1f63520()*-0.0103271);
}

double NNfunction_b1b1::synapse0x1f78e80() {
   return (neuron0x1f63860()*0.03923);
}

double NNfunction_b1b1::synapse0x1f78ec0() {
   return (neuron0x1f63ba0()*0.0229823);
}

double NNfunction_b1b1::synapse0x1f78f00() {
   return (neuron0x1f63ee0()*-0.0196361);
}

double NNfunction_b1b1::synapse0x1f78f40() {
   return (neuron0x1f64220()*-0.0255726);
}

double NNfunction_b1b1::synapse0x1f78f80() {
   return (neuron0x1f64560()*-0.012309);
}

double NNfunction_b1b1::synapse0x1f78fc0() {
   return (neuron0x1f648a0()*2.06209);
}

double NNfunction_b1b1::synapse0x1f79000() {
   return (neuron0x1f64be0()*-0.0324482);
}

double NNfunction_b1b1::synapse0x1f79040() {
   return (neuron0x1f64f20()*-0.0701411);
}

double NNfunction_b1b1::synapse0x1f78ad0() {
   return (neuron0x1f65260()*0.163346);
}

double NNfunction_b1b1::synapse0x1f78b10() {
   return (neuron0x1f657c0()*0.00531892);
}

double NNfunction_b1b1::synapse0x1f79190() {
   return (neuron0x1f659e0()*-0.0686215);
}

double NNfunction_b1b1::synapse0x1f791d0() {
   return (neuron0x1f65d20()*0.190728);
}

double NNfunction_b1b1::synapse0x1f79210() {
   return (neuron0x1f66060()*-0.00142569);
}

double NNfunction_b1b1::synapse0x1f79250() {
   return (neuron0x1f663a0()*0.0355044);
}

double NNfunction_b1b1::synapse0x1f79290() {
   return (neuron0x1f666e0()*0.00594102);
}

double NNfunction_b1b1::synapse0x1f792d0() {
   return (neuron0x1f66a20()*0.0654012);
}

double NNfunction_b1b1::synapse0x1f79650() {
   return (neuron0x1f61e60()*0.515864);
}

double NNfunction_b1b1::synapse0x1f79690() {
   return (neuron0x1f621a0()*-0.0512977);
}

double NNfunction_b1b1::synapse0x1f796d0() {
   return (neuron0x1f624e0()*-0.0335657);
}

double NNfunction_b1b1::synapse0x1f79710() {
   return (neuron0x1f62820()*-0.0294839);
}

double NNfunction_b1b1::synapse0x1f79750() {
   return (neuron0x1f62b60()*-0.993528);
}

double NNfunction_b1b1::synapse0x1f79790() {
   return (neuron0x1f62ea0()*-0.037634);
}

double NNfunction_b1b1::synapse0x1f797d0() {
   return (neuron0x1f631e0()*0.0461548);
}

double NNfunction_b1b1::synapse0x1f79810() {
   return (neuron0x1f63520()*-0.0103802);
}

double NNfunction_b1b1::synapse0x1f79850() {
   return (neuron0x1f63860()*-0.0187553);
}

double NNfunction_b1b1::synapse0x1f79890() {
   return (neuron0x1f63ba0()*-0.00133529);
}

double NNfunction_b1b1::synapse0x1f798d0() {
   return (neuron0x1f63ee0()*-0.028298);
}

double NNfunction_b1b1::synapse0x1f79910() {
   return (neuron0x1f64220()*0.00877576);
}

double NNfunction_b1b1::synapse0x1f79950() {
   return (neuron0x1f64560()*-0.0144453);
}

double NNfunction_b1b1::synapse0x1f79990() {
   return (neuron0x1f648a0()*-0.127611);
}

double NNfunction_b1b1::synapse0x1f799d0() {
   return (neuron0x1f64be0()*0.0429546);
}

double NNfunction_b1b1::synapse0x1f79a10() {
   return (neuron0x1f64f20()*0.00246455);
}

double NNfunction_b1b1::synapse0x1f794a0() {
   return (neuron0x1f65260()*-0.100492);
}

double NNfunction_b1b1::synapse0x1f794e0() {
   return (neuron0x1f657c0()*-0.00980886);
}

double NNfunction_b1b1::synapse0x1f79b60() {
   return (neuron0x1f659e0()*-0.0238029);
}

double NNfunction_b1b1::synapse0x1f79ba0() {
   return (neuron0x1f65d20()*0.582988);
}

double NNfunction_b1b1::synapse0x1f79be0() {
   return (neuron0x1f66060()*-0.0191396);
}

double NNfunction_b1b1::synapse0x1f79c20() {
   return (neuron0x1f663a0()*0.0711104);
}

double NNfunction_b1b1::synapse0x1f79c60() {
   return (neuron0x1f666e0()*-0.00453173);
}

double NNfunction_b1b1::synapse0x1f79ca0() {
   return (neuron0x1f66a20()*-0.000775884);
}

double NNfunction_b1b1::synapse0x1f7a020() {
   return (neuron0x1f61e60()*0.189812);
}

double NNfunction_b1b1::synapse0x1f7a060() {
   return (neuron0x1f621a0()*-1.36343e-05);
}

double NNfunction_b1b1::synapse0x1f7a0a0() {
   return (neuron0x1f624e0()*-0.0140561);
}

double NNfunction_b1b1::synapse0x1f7a0e0() {
   return (neuron0x1f62820()*0.0749609);
}

double NNfunction_b1b1::synapse0x1f7a120() {
   return (neuron0x1f62b60()*0.0664656);
}

double NNfunction_b1b1::synapse0x1f7a160() {
   return (neuron0x1f62ea0()*-0.00163589);
}

double NNfunction_b1b1::synapse0x1f7a1a0() {
   return (neuron0x1f631e0()*0.00147594);
}

double NNfunction_b1b1::synapse0x1f7a1e0() {
   return (neuron0x1f63520()*0.00609349);
}

double NNfunction_b1b1::synapse0x1f7a220() {
   return (neuron0x1f63860()*0.0033145);
}

double NNfunction_b1b1::synapse0x1f7a260() {
   return (neuron0x1f63ba0()*-0.00521567);
}

double NNfunction_b1b1::synapse0x1f7a2a0() {
   return (neuron0x1f63ee0()*0.00414582);
}

double NNfunction_b1b1::synapse0x1f7a2e0() {
   return (neuron0x1f64220()*0.00270977);
}

double NNfunction_b1b1::synapse0x1f7a320() {
   return (neuron0x1f64560()*-0.00538418);
}

double NNfunction_b1b1::synapse0x1f7a360() {
   return (neuron0x1f648a0()*0.226274);
}

double NNfunction_b1b1::synapse0x1f7a3a0() {
   return (neuron0x1f64be0()*-0.00226637);
}

double NNfunction_b1b1::synapse0x1f7a3e0() {
   return (neuron0x1f64f20()*-0.0141417);
}

double NNfunction_b1b1::synapse0x1f79e70() {
   return (neuron0x1f65260()*0.0280091);
}

double NNfunction_b1b1::synapse0x1f79eb0() {
   return (neuron0x1f657c0()*0.00432212);
}

double NNfunction_b1b1::synapse0x1f7a530() {
   return (neuron0x1f659e0()*-0.00491863);
}

double NNfunction_b1b1::synapse0x1f7a570() {
   return (neuron0x1f65d20()*0.359451);
}

double NNfunction_b1b1::synapse0x1f7a5b0() {
   return (neuron0x1f66060()*0.00528717);
}

double NNfunction_b1b1::synapse0x1f7a5f0() {
   return (neuron0x1f663a0()*0.0140978);
}

double NNfunction_b1b1::synapse0x1f7a630() {
   return (neuron0x1f666e0()*-0.000264663);
}

double NNfunction_b1b1::synapse0x1f7a670() {
   return (neuron0x1f66a20()*-0.00462648);
}

double NNfunction_b1b1::synapse0x1f7a9f0() {
   return (neuron0x1f61e60()*0.072337);
}

double NNfunction_b1b1::synapse0x1f7aa30() {
   return (neuron0x1f621a0()*-0.0127931);
}

double NNfunction_b1b1::synapse0x1f7aa70() {
   return (neuron0x1f624e0()*-1.07445);
}

double NNfunction_b1b1::synapse0x1f7aab0() {
   return (neuron0x1f62820()*0.0484425);
}

double NNfunction_b1b1::synapse0x1f7aaf0() {
   return (neuron0x1f62b60()*-0.0377803);
}

double NNfunction_b1b1::synapse0x1f7ab30() {
   return (neuron0x1f62ea0()*0.0512234);
}

double NNfunction_b1b1::synapse0x1f7ab70() {
   return (neuron0x1f631e0()*0.0538251);
}

double NNfunction_b1b1::synapse0x1f7abb0() {
   return (neuron0x1f63520()*0.0646905);
}

double NNfunction_b1b1::synapse0x1f7abf0() {
   return (neuron0x1f63860()*-0.0205911);
}

double NNfunction_b1b1::synapse0x1f7ac30() {
   return (neuron0x1f63ba0()*-0.0522032);
}

double NNfunction_b1b1::synapse0x1f7ac70() {
   return (neuron0x1f63ee0()*0.0138422);
}

double NNfunction_b1b1::synapse0x1f7acb0() {
   return (neuron0x1f64220()*0.0443109);
}

double NNfunction_b1b1::synapse0x1f7acf0() {
   return (neuron0x1f64560()*0.0268424);
}

double NNfunction_b1b1::synapse0x1f7ad30() {
   return (neuron0x1f648a0()*0.279891);
}

double NNfunction_b1b1::synapse0x1f7ad70() {
   return (neuron0x1f64be0()*0.0532766);
}

double NNfunction_b1b1::synapse0x1f7adb0() {
   return (neuron0x1f64f20()*0.0583045);
}

double NNfunction_b1b1::synapse0x1f7a840() {
   return (neuron0x1f65260()*-0.155183);
}

double NNfunction_b1b1::synapse0x1f7a880() {
   return (neuron0x1f657c0()*0.011392);
}

double NNfunction_b1b1::synapse0x1f7af00() {
   return (neuron0x1f659e0()*-0.0524816);
}

double NNfunction_b1b1::synapse0x1f7af40() {
   return (neuron0x1f65d20()*0.0333309);
}

double NNfunction_b1b1::synapse0x1f7af80() {
   return (neuron0x1f66060()*0.104027);
}

double NNfunction_b1b1::synapse0x1f7afc0() {
   return (neuron0x1f663a0()*0.0136071);
}

double NNfunction_b1b1::synapse0x1f7b000() {
   return (neuron0x1f666e0()*0.0101448);
}

double NNfunction_b1b1::synapse0x1f7b040() {
   return (neuron0x1f66a20()*0.00479245);
}

double NNfunction_b1b1::synapse0x1f7b3c0() {
   return (neuron0x1f61e60()*-0.0574409);
}

double NNfunction_b1b1::synapse0x1f7b400() {
   return (neuron0x1f621a0()*0.000605291);
}

double NNfunction_b1b1::synapse0x1f7b440() {
   return (neuron0x1f624e0()*0.0354531);
}

double NNfunction_b1b1::synapse0x1f7b480() {
   return (neuron0x1f62820()*-0.0134179);
}

double NNfunction_b1b1::synapse0x1f7b4c0() {
   return (neuron0x1f62b60()*-0.0337478);
}

double NNfunction_b1b1::synapse0x1f7b500() {
   return (neuron0x1f62ea0()*-0.0280625);
}

double NNfunction_b1b1::synapse0x1f7b540() {
   return (neuron0x1f631e0()*0.0180308);
}

double NNfunction_b1b1::synapse0x1f7b580() {
   return (neuron0x1f63520()*-0.00841898);
}

double NNfunction_b1b1::synapse0x1f7b5c0() {
   return (neuron0x1f63860()*0.00635886);
}

double NNfunction_b1b1::synapse0x1f7b600() {
   return (neuron0x1f63ba0()*0.0179233);
}

double NNfunction_b1b1::synapse0x1f7b640() {
   return (neuron0x1f63ee0()*0.0122418);
}

double NNfunction_b1b1::synapse0x1f7b680() {
   return (neuron0x1f64220()*0.00439397);
}

double NNfunction_b1b1::synapse0x1f7b6c0() {
   return (neuron0x1f64560()*0.0121069);
}

double NNfunction_b1b1::synapse0x1f7b700() {
   return (neuron0x1f648a0()*2.61142);
}

double NNfunction_b1b1::synapse0x1f7b740() {
   return (neuron0x1f64be0()*0.0117597);
}

double NNfunction_b1b1::synapse0x1f7b780() {
   return (neuron0x1f64f20()*0.0261794);
}

double NNfunction_b1b1::synapse0x1f7b210() {
   return (neuron0x1f65260()*0.00404121);
}

double NNfunction_b1b1::synapse0x1f7b250() {
   return (neuron0x1f657c0()*0.0192663);
}

double NNfunction_b1b1::synapse0x1f7b8d0() {
   return (neuron0x1f659e0()*-0.000360884);
}

double NNfunction_b1b1::synapse0x1f7b910() {
   return (neuron0x1f65d20()*-3.54481);
}

double NNfunction_b1b1::synapse0x1f7b950() {
   return (neuron0x1f66060()*0.00231716);
}

double NNfunction_b1b1::synapse0x1f7b990() {
   return (neuron0x1f663a0()*-0.0209069);
}

double NNfunction_b1b1::synapse0x1f7b9d0() {
   return (neuron0x1f666e0()*-0.00771274);
}

double NNfunction_b1b1::synapse0x1f7ba10() {
   return (neuron0x1f66a20()*-0.0312115);
}

double NNfunction_b1b1::synapse0x1f7bd90() {
   return (neuron0x1f61e60()*-0.032929);
}

double NNfunction_b1b1::synapse0x1f7bdd0() {
   return (neuron0x1f621a0()*-0.00647991);
}

double NNfunction_b1b1::synapse0x1f7be10() {
   return (neuron0x1f624e0()*-0.39508);
}

double NNfunction_b1b1::synapse0x1f7be50() {
   return (neuron0x1f62820()*0.126548);
}

double NNfunction_b1b1::synapse0x1f7be90() {
   return (neuron0x1f62b60()*-0.6061);
}

double NNfunction_b1b1::synapse0x1f7bed0() {
   return (neuron0x1f62ea0()*-0.00221975);
}

double NNfunction_b1b1::synapse0x1f7bf10() {
   return (neuron0x1f631e0()*0.0137786);
}

double NNfunction_b1b1::synapse0x1f7bf50() {
   return (neuron0x1f63520()*-0.333358);
}

double NNfunction_b1b1::synapse0x1f7bf90() {
   return (neuron0x1f63860()*-0.0107429);
}

double NNfunction_b1b1::synapse0x1f7bfd0() {
   return (neuron0x1f63ba0()*0.0301725);
}

double NNfunction_b1b1::synapse0x1f7c010() {
   return (neuron0x1f63ee0()*0.134389);
}

double NNfunction_b1b1::synapse0x1f7c050() {
   return (neuron0x1f64220()*-0.0881971);
}

double NNfunction_b1b1::synapse0x1f7c090() {
   return (neuron0x1f64560()*0.0482582);
}

double NNfunction_b1b1::synapse0x1f7c0d0() {
   return (neuron0x1f648a0()*1.17238);
}

double NNfunction_b1b1::synapse0x1f7c110() {
   return (neuron0x1f64be0()*0.137793);
}

double NNfunction_b1b1::synapse0x1f7c150() {
   return (neuron0x1f64f20()*0.063864);
}

double NNfunction_b1b1::synapse0x1f7bbe0() {
   return (neuron0x1f65260()*-0.373982);
}

double NNfunction_b1b1::synapse0x1f7bc20() {
   return (neuron0x1f657c0()*-0.113296);
}

double NNfunction_b1b1::synapse0x1f7c2a0() {
   return (neuron0x1f659e0()*-0.0559082);
}

double NNfunction_b1b1::synapse0x1f7c2e0() {
   return (neuron0x1f65d20()*0.116682);
}

double NNfunction_b1b1::synapse0x1f7c320() {
   return (neuron0x1f66060()*-0.618079);
}

double NNfunction_b1b1::synapse0x1f7c360() {
   return (neuron0x1f663a0()*-0.206905);
}

double NNfunction_b1b1::synapse0x1f7c3a0() {
   return (neuron0x1f666e0()*-0.0388856);
}

double NNfunction_b1b1::synapse0x1f7c3e0() {
   return (neuron0x1f66a20()*-1.00131);
}

double NNfunction_b1b1::synapse0x1f7c760() {
   return (neuron0x1f61e60()*-0.494301);
}

double NNfunction_b1b1::synapse0x1f70d30() {
   return (neuron0x1f621a0()*0.0458595);
}

double NNfunction_b1b1::synapse0x1f70d70() {
   return (neuron0x1f624e0()*-0.0383704);
}

double NNfunction_b1b1::synapse0x1f70db0() {
   return (neuron0x1f62820()*0.019451);
}

double NNfunction_b1b1::synapse0x1f71000() {
   return (neuron0x1f62b60()*1.11048);
}

double NNfunction_b1b1::synapse0x1f71040() {
   return (neuron0x1f62ea0()*-0.0227144);
}

double NNfunction_b1b1::synapse0x1f71080() {
   return (neuron0x1f631e0()*-0.00362339);
}

double NNfunction_b1b1::synapse0x1f712d0() {
   return (neuron0x1f63520()*-0.0364242);
}

double NNfunction_b1b1::synapse0x1f71310() {
   return (neuron0x1f63860()*0.0220841);
}

double NNfunction_b1b1::synapse0x1f71560() {
   return (neuron0x1f63ba0()*-0.0385179);
}

double NNfunction_b1b1::synapse0x1f715a0() {
   return (neuron0x1f63ee0()*0.00410244);
}

double NNfunction_b1b1::synapse0x1f715e0() {
   return (neuron0x1f64220()*-0.0346531);
}

double NNfunction_b1b1::synapse0x1f71830() {
   return (neuron0x1f64560()*-0.0421873);
}

double NNfunction_b1b1::synapse0x1f71870() {
   return (neuron0x1f648a0()*0.186013);
}

double NNfunction_b1b1::synapse0x1f71ac0() {
   return (neuron0x1f64be0()*0.0498541);
}

double NNfunction_b1b1::synapse0x1f71b00() {
   return (neuron0x1f64f20()*0.00263368);
}

double NNfunction_b1b1::synapse0x1f7c5b0() {
   return (neuron0x1f65260()*-0.0247724);
}

double NNfunction_b1b1::synapse0x1f7c5f0() {
   return (neuron0x1f657c0()*-0.0046045);
}

double NNfunction_b1b1::synapse0x1f71c50() {
   return (neuron0x1f659e0()*0.0352341);
}

double NNfunction_b1b1::synapse0x1f72160() {
   return (neuron0x1f65d20()*-0.617362);
}

double NNfunction_b1b1::synapse0x1f721a0() {
   return (neuron0x1f66060()*0.0411475);
}

double NNfunction_b1b1::synapse0x1f721e0() {
   return (neuron0x1f663a0()*-0.97836);
}

double NNfunction_b1b1::synapse0x1f72430() {
   return (neuron0x1f666e0()*-0.0150121);
}

double NNfunction_b1b1::synapse0x1f72470() {
   return (neuron0x1f66a20()*-0.257515);
}

double NNfunction_b1b1::synapse0x1f71d20() {
   return (neuron0x1f61e60()*0.179023);
}

double NNfunction_b1b1::synapse0x1f71d60() {
   return (neuron0x1f621a0()*-0.0338201);
}

double NNfunction_b1b1::synapse0x1f71da0() {
   return (neuron0x1f624e0()*-0.0329362);
}

double NNfunction_b1b1::synapse0x1f71de0() {
   return (neuron0x1f62820()*-3.57656);
}

double NNfunction_b1b1::synapse0x1f72760() {
   return (neuron0x1f62b60()*-0.0128982);
}

double NNfunction_b1b1::synapse0x1f7eab0() {
   return (neuron0x1f62ea0()*0.0113737);
}

double NNfunction_b1b1::synapse0x1f7eaf0() {
   return (neuron0x1f631e0()*-0.0182542);
}

double NNfunction_b1b1::synapse0x1f7eb30() {
   return (neuron0x1f63520()*-0.018602);
}

double NNfunction_b1b1::synapse0x1f7eb70() {
   return (neuron0x1f63860()*0.0126363);
}

double NNfunction_b1b1::synapse0x1f7ebb0() {
   return (neuron0x1f63ba0()*-0.0213114);
}

double NNfunction_b1b1::synapse0x1f7ebf0() {
   return (neuron0x1f63ee0()*0.00519604);
}

double NNfunction_b1b1::synapse0x1f7ec30() {
   return (neuron0x1f64220()*0.0165386);
}

double NNfunction_b1b1::synapse0x1f7ec70() {
   return (neuron0x1f64560()*0.0228653);
}

double NNfunction_b1b1::synapse0x1f7ecb0() {
   return (neuron0x1f648a0()*-0.0309319);
}

double NNfunction_b1b1::synapse0x1f7ecf0() {
   return (neuron0x1f64be0()*0.00975191);
}

double NNfunction_b1b1::synapse0x1f7ed30() {
   return (neuron0x1f64f20()*-0.0586357);
}

double NNfunction_b1b1::synapse0x1f72640() {
   return (neuron0x1f65260()*0.0979614);
}

double NNfunction_b1b1::synapse0x1f72680() {
   return (neuron0x1f657c0()*0.0241833);
}

double NNfunction_b1b1::synapse0x1f7ee80() {
   return (neuron0x1f659e0()*0.0258742);
}

double NNfunction_b1b1::synapse0x1f7eec0() {
   return (neuron0x1f65d20()*3.72805);
}

double NNfunction_b1b1::synapse0x1f7ef00() {
   return (neuron0x1f66060()*-0.0100723);
}

double NNfunction_b1b1::synapse0x1f7ef40() {
   return (neuron0x1f663a0()*0.00276395);
}

double NNfunction_b1b1::synapse0x1f7ef80() {
   return (neuron0x1f666e0()*0.00218498);
}

double NNfunction_b1b1::synapse0x1f7efc0() {
   return (neuron0x1f66a20()*0.0589277);
}

double NNfunction_b1b1::synapse0x1f7f340() {
   return (neuron0x1f61e60()*0.148538);
}

double NNfunction_b1b1::synapse0x1f7f380() {
   return (neuron0x1f621a0()*0.00855986);
}

double NNfunction_b1b1::synapse0x1f7f3c0() {
   return (neuron0x1f624e0()*0.022165);
}

double NNfunction_b1b1::synapse0x1f7f400() {
   return (neuron0x1f62820()*0.0245195);
}

double NNfunction_b1b1::synapse0x1f7f440() {
   return (neuron0x1f62b60()*0.0176834);
}

double NNfunction_b1b1::synapse0x1f7f480() {
   return (neuron0x1f62ea0()*0.0287415);
}

double NNfunction_b1b1::synapse0x1f7f4c0() {
   return (neuron0x1f631e0()*-0.0109768);
}

double NNfunction_b1b1::synapse0x1f7f500() {
   return (neuron0x1f63520()*0.0386019);
}

double NNfunction_b1b1::synapse0x1f7f540() {
   return (neuron0x1f63860()*-0.000726961);
}

double NNfunction_b1b1::synapse0x1f7f580() {
   return (neuron0x1f63ba0()*0.00135729);
}

double NNfunction_b1b1::synapse0x1f7f5c0() {
   return (neuron0x1f63ee0()*-0.00348683);
}

double NNfunction_b1b1::synapse0x1f7f600() {
   return (neuron0x1f64220()*-0.0046301);
}

double NNfunction_b1b1::synapse0x1f7f640() {
   return (neuron0x1f64560()*-0.00518617);
}

double NNfunction_b1b1::synapse0x1f7f680() {
   return (neuron0x1f648a0()*-5.73537);
}

double NNfunction_b1b1::synapse0x1f7f6c0() {
   return (neuron0x1f64be0()*-0.026079);
}

double NNfunction_b1b1::synapse0x1f7f700() {
   return (neuron0x1f64f20()*-0.0256351);
}

double NNfunction_b1b1::synapse0x1f7f190() {
   return (neuron0x1f65260()*-0.0495457);
}

double NNfunction_b1b1::synapse0x1f7f1d0() {
   return (neuron0x1f657c0()*-0.017549);
}

double NNfunction_b1b1::synapse0x1f7f850() {
   return (neuron0x1f659e0()*-0.0109554);
}

double NNfunction_b1b1::synapse0x1f7f890() {
   return (neuron0x1f65d20()*8.77565);
}

double NNfunction_b1b1::synapse0x1f7f8d0() {
   return (neuron0x1f66060()*0.00598958);
}

double NNfunction_b1b1::synapse0x1f7f910() {
   return (neuron0x1f663a0()*-0.000779346);
}

double NNfunction_b1b1::synapse0x1f7f950() {
   return (neuron0x1f666e0()*0.00129282);
}

double NNfunction_b1b1::synapse0x1f7f990() {
   return (neuron0x1f66a20()*0.00607902);
}

double NNfunction_b1b1::synapse0x1f7fd10() {
   return (neuron0x1f61e60()*-0.202101);
}

double NNfunction_b1b1::synapse0x1f7fd50() {
   return (neuron0x1f621a0()*-0.0130124);
}

double NNfunction_b1b1::synapse0x1f7fd90() {
   return (neuron0x1f624e0()*-0.109692);
}

double NNfunction_b1b1::synapse0x1f7fdd0() {
   return (neuron0x1f62820()*0.0614657);
}

double NNfunction_b1b1::synapse0x1f7fe10() {
   return (neuron0x1f62b60()*0.121901);
}

double NNfunction_b1b1::synapse0x1f7fe50() {
   return (neuron0x1f62ea0()*0.0032965);
}

double NNfunction_b1b1::synapse0x1f7fe90() {
   return (neuron0x1f631e0()*0.260131);
}

double NNfunction_b1b1::synapse0x1f7fed0() {
   return (neuron0x1f63520()*-0.0596491);
}

double NNfunction_b1b1::synapse0x1f7ff10() {
   return (neuron0x1f63860()*-0.385759);
}

double NNfunction_b1b1::synapse0x1f7ff50() {
   return (neuron0x1f63ba0()*-0.179249);
}

double NNfunction_b1b1::synapse0x1f7ff90() {
   return (neuron0x1f63ee0()*0.867984);
}

double NNfunction_b1b1::synapse0x1f7ffd0() {
   return (neuron0x1f64220()*0.0293899);
}

double NNfunction_b1b1::synapse0x1f80010() {
   return (neuron0x1f64560()*-0.0499471);
}

double NNfunction_b1b1::synapse0x1f80050() {
   return (neuron0x1f648a0()*-0.0430372);
}

double NNfunction_b1b1::synapse0x1f80090() {
   return (neuron0x1f64be0()*0.0473906);
}

double NNfunction_b1b1::synapse0x1f800d0() {
   return (neuron0x1f64f20()*0.0704774);
}

double NNfunction_b1b1::synapse0x1f7fb60() {
   return (neuron0x1f65260()*0.0733896);
}

double NNfunction_b1b1::synapse0x1f7fba0() {
   return (neuron0x1f657c0()*0.0671941);
}

double NNfunction_b1b1::synapse0x1f80220() {
   return (neuron0x1f659e0()*-0.0763007);
}

double NNfunction_b1b1::synapse0x1f80260() {
   return (neuron0x1f65d20()*-0.507445);
}

double NNfunction_b1b1::synapse0x1f802a0() {
   return (neuron0x1f66060()*-0.0176614);
}

double NNfunction_b1b1::synapse0x1f802e0() {
   return (neuron0x1f663a0()*0.0179809);
}

double NNfunction_b1b1::synapse0x1f80320() {
   return (neuron0x1f666e0()*0.0264224);
}

double NNfunction_b1b1::synapse0x1f80360() {
   return (neuron0x1f66a20()*0.115533);
}

double NNfunction_b1b1::synapse0x1f806e0() {
   return (neuron0x1f61e60()*0.225215);
}

double NNfunction_b1b1::synapse0x1f80720() {
   return (neuron0x1f621a0()*0.0752752);
}

double NNfunction_b1b1::synapse0x1f80760() {
   return (neuron0x1f624e0()*0.363574);
}

double NNfunction_b1b1::synapse0x1f807a0() {
   return (neuron0x1f62820()*0.24318);
}

double NNfunction_b1b1::synapse0x1f807e0() {
   return (neuron0x1f62b60()*-0.209483);
}

double NNfunction_b1b1::synapse0x1f80820() {
   return (neuron0x1f62ea0()*0.0709785);
}

double NNfunction_b1b1::synapse0x1f80860() {
   return (neuron0x1f631e0()*0.123435);
}

double NNfunction_b1b1::synapse0x1f808a0() {
   return (neuron0x1f63520()*-0.0298003);
}

double NNfunction_b1b1::synapse0x1f808e0() {
   return (neuron0x1f63860()*-0.0174637);
}

double NNfunction_b1b1::synapse0x1f80920() {
   return (neuron0x1f63ba0()*-0.048629);
}

double NNfunction_b1b1::synapse0x1f80960() {
   return (neuron0x1f63ee0()*0.0426059);
}

double NNfunction_b1b1::synapse0x1f809a0() {
   return (neuron0x1f64220()*-0.0652864);
}

double NNfunction_b1b1::synapse0x1f809e0() {
   return (neuron0x1f64560()*-0.0209153);
}

double NNfunction_b1b1::synapse0x1f80a20() {
   return (neuron0x1f648a0()*0.406822);
}

double NNfunction_b1b1::synapse0x1f80a60() {
   return (neuron0x1f64be0()*0.183834);
}

double NNfunction_b1b1::synapse0x1f80aa0() {
   return (neuron0x1f64f20()*0.103269);
}

double NNfunction_b1b1::synapse0x1f80530() {
   return (neuron0x1f65260()*-0.0744738);
}

double NNfunction_b1b1::synapse0x1f80570() {
   return (neuron0x1f657c0()*0.0293147);
}

double NNfunction_b1b1::synapse0x1f80bf0() {
   return (neuron0x1f659e0()*-0.0415827);
}

double NNfunction_b1b1::synapse0x1f80c30() {
   return (neuron0x1f65d20()*-0.307832);
}

double NNfunction_b1b1::synapse0x1f80c70() {
   return (neuron0x1f66060()*0.0902443);
}

double NNfunction_b1b1::synapse0x1f80cb0() {
   return (neuron0x1f663a0()*0.0212781);
}

double NNfunction_b1b1::synapse0x1f80cf0() {
   return (neuron0x1f666e0()*0.0250699);
}

double NNfunction_b1b1::synapse0x1f80d30() {
   return (neuron0x1f66a20()*0.566844);
}

double NNfunction_b1b1::synapse0x1f810b0() {
   return (neuron0x1f61e60()*0.447658);
}

double NNfunction_b1b1::synapse0x1f810f0() {
   return (neuron0x1f621a0()*0.054257);
}

double NNfunction_b1b1::synapse0x1f81130() {
   return (neuron0x1f624e0()*-0.108572);
}

double NNfunction_b1b1::synapse0x1f81170() {
   return (neuron0x1f62820()*-0.000326414);
}

double NNfunction_b1b1::synapse0x1f811b0() {
   return (neuron0x1f62b60()*-0.200406);
}

double NNfunction_b1b1::synapse0x1f811f0() {
   return (neuron0x1f62ea0()*0.0634446);
}

double NNfunction_b1b1::synapse0x1f81230() {
   return (neuron0x1f631e0()*-0.0324661);
}

double NNfunction_b1b1::synapse0x1f81270() {
   return (neuron0x1f63520()*-0.0591312);
}

double NNfunction_b1b1::synapse0x1f812b0() {
   return (neuron0x1f63860()*0.0548166);
}

double NNfunction_b1b1::synapse0x1f812f0() {
   return (neuron0x1f63ba0()*-0.00456997);
}

double NNfunction_b1b1::synapse0x1f81330() {
   return (neuron0x1f63ee0()*0.0149524);
}

double NNfunction_b1b1::synapse0x1f81370() {
   return (neuron0x1f64220()*0.0600675);
}

double NNfunction_b1b1::synapse0x1f813b0() {
   return (neuron0x1f64560()*0.0696079);
}

double NNfunction_b1b1::synapse0x1f813f0() {
   return (neuron0x1f648a0()*2.18405);
}

double NNfunction_b1b1::synapse0x1f81430() {
   return (neuron0x1f64be0()*-0.0239712);
}

double NNfunction_b1b1::synapse0x1f81470() {
   return (neuron0x1f64f20()*0.064879);
}

double NNfunction_b1b1::synapse0x1f80f00() {
   return (neuron0x1f65260()*-0.0162533);
}

double NNfunction_b1b1::synapse0x1f80f40() {
   return (neuron0x1f657c0()*0.0241623);
}

double NNfunction_b1b1::synapse0x1f815c0() {
   return (neuron0x1f659e0()*-0.0100082);
}

double NNfunction_b1b1::synapse0x1f81600() {
   return (neuron0x1f65d20()*-1.20541);
}

double NNfunction_b1b1::synapse0x1f81640() {
   return (neuron0x1f66060()*-0.0354781);
}

double NNfunction_b1b1::synapse0x1f81680() {
   return (neuron0x1f663a0()*0.332691);
}

double NNfunction_b1b1::synapse0x1f816c0() {
   return (neuron0x1f666e0()*0.0423449);
}

double NNfunction_b1b1::synapse0x1f81700() {
   return (neuron0x1f66a20()*2.05429);
}

double NNfunction_b1b1::synapse0x1f81a80() {
   return (neuron0x1f61e60()*-0.408373);
}

double NNfunction_b1b1::synapse0x1f81ac0() {
   return (neuron0x1f621a0()*0.0173823);
}

double NNfunction_b1b1::synapse0x1f81b00() {
   return (neuron0x1f624e0()*0.892713);
}

double NNfunction_b1b1::synapse0x1f81b40() {
   return (neuron0x1f62820()*-0.0604556);
}

double NNfunction_b1b1::synapse0x1f81b80() {
   return (neuron0x1f62b60()*0.00147424);
}

double NNfunction_b1b1::synapse0x1f81bc0() {
   return (neuron0x1f62ea0()*0.0378107);
}

double NNfunction_b1b1::synapse0x1f81c00() {
   return (neuron0x1f631e0()*0.00854471);
}

double NNfunction_b1b1::synapse0x1f81c40() {
   return (neuron0x1f63520()*0.0631232);
}

double NNfunction_b1b1::synapse0x1f81c80() {
   return (neuron0x1f63860()*-0.0645007);
}

double NNfunction_b1b1::synapse0x1f81cc0() {
   return (neuron0x1f63ba0()*-0.0190676);
}

double NNfunction_b1b1::synapse0x1f81d00() {
   return (neuron0x1f63ee0()*0.0319474);
}

double NNfunction_b1b1::synapse0x1f81d40() {
   return (neuron0x1f64220()*-0.0546357);
}

double NNfunction_b1b1::synapse0x1f81d80() {
   return (neuron0x1f64560()*-0.0411088);
}

double NNfunction_b1b1::synapse0x1f81dc0() {
   return (neuron0x1f648a0()*-0.286165);
}

double NNfunction_b1b1::synapse0x1f81e00() {
   return (neuron0x1f64be0()*-0.0362298);
}

double NNfunction_b1b1::synapse0x1f81e40() {
   return (neuron0x1f64f20()*0.000462169);
}

double NNfunction_b1b1::synapse0x1f818d0() {
   return (neuron0x1f65260()*-0.134225);
}

double NNfunction_b1b1::synapse0x1f81910() {
   return (neuron0x1f657c0()*-0.027441);
}

double NNfunction_b1b1::synapse0x1f81f90() {
   return (neuron0x1f659e0()*-0.0403782);
}

double NNfunction_b1b1::synapse0x1f81fd0() {
   return (neuron0x1f65d20()*0.049585);
}

double NNfunction_b1b1::synapse0x1f82010() {
   return (neuron0x1f66060()*0.15172);
}

double NNfunction_b1b1::synapse0x1f82050() {
   return (neuron0x1f663a0()*-0.0847679);
}

double NNfunction_b1b1::synapse0x1f82090() {
   return (neuron0x1f666e0()*-0.0363156);
}

double NNfunction_b1b1::synapse0x1f820d0() {
   return (neuron0x1f66a20()*-0.551235);
}

double NNfunction_b1b1::synapse0x1f82450() {
   return (neuron0x1f61e60()*0.3843);
}

double NNfunction_b1b1::synapse0x1f82490() {
   return (neuron0x1f621a0()*0.0798664);
}

double NNfunction_b1b1::synapse0x1f824d0() {
   return (neuron0x1f624e0()*-0.0504528);
}

double NNfunction_b1b1::synapse0x1f82510() {
   return (neuron0x1f62820()*0.244694);
}

double NNfunction_b1b1::synapse0x1f82550() {
   return (neuron0x1f62b60()*-0.0405385);
}

double NNfunction_b1b1::synapse0x1f82590() {
   return (neuron0x1f62ea0()*0.0506557);
}

double NNfunction_b1b1::synapse0x1f825d0() {
   return (neuron0x1f631e0()*0.35315);
}

double NNfunction_b1b1::synapse0x1f82610() {
   return (neuron0x1f63520()*0.0798695);
}

double NNfunction_b1b1::synapse0x1f82650() {
   return (neuron0x1f63860()*-0.0549445);
}

double NNfunction_b1b1::synapse0x1f82690() {
   return (neuron0x1f63ba0()*-0.0353768);
}

double NNfunction_b1b1::synapse0x1f826d0() {
   return (neuron0x1f63ee0()*0.0103975);
}

double NNfunction_b1b1::synapse0x1f82710() {
   return (neuron0x1f64220()*-0.0582333);
}

double NNfunction_b1b1::synapse0x1f82750() {
   return (neuron0x1f64560()*-0.0244613);
}

double NNfunction_b1b1::synapse0x1f82790() {
   return (neuron0x1f648a0()*-0.486946);
}

double NNfunction_b1b1::synapse0x1f827d0() {
   return (neuron0x1f64be0()*0.241418);
}

double NNfunction_b1b1::synapse0x1f82810() {
   return (neuron0x1f64f20()*0.272176);
}

double NNfunction_b1b1::synapse0x1f822a0() {
   return (neuron0x1f65260()*0.142903);
}

double NNfunction_b1b1::synapse0x1f822e0() {
   return (neuron0x1f657c0()*-0.0265512);
}

double NNfunction_b1b1::synapse0x1f82960() {
   return (neuron0x1f659e0()*-0.0263082);
}

double NNfunction_b1b1::synapse0x1f829a0() {
   return (neuron0x1f65d20()*0.415023);
}

double NNfunction_b1b1::synapse0x1f829e0() {
   return (neuron0x1f66060()*0.108018);
}

double NNfunction_b1b1::synapse0x1f82a20() {
   return (neuron0x1f663a0()*0.13526);
}

double NNfunction_b1b1::synapse0x1f82a60() {
   return (neuron0x1f666e0()*0.0269699);
}

double NNfunction_b1b1::synapse0x1f82aa0() {
   return (neuron0x1f66a20()*0.0995461);
}

double NNfunction_b1b1::synapse0x1f82e20() {
   return (neuron0x1f61e60()*-0.737553);
}

double NNfunction_b1b1::synapse0x1f82e60() {
   return (neuron0x1f621a0()*0.101617);
}

double NNfunction_b1b1::synapse0x1f82ea0() {
   return (neuron0x1f624e0()*0.00275525);
}

double NNfunction_b1b1::synapse0x1f82ee0() {
   return (neuron0x1f62820()*-0.0703859);
}

double NNfunction_b1b1::synapse0x1f82f20() {
   return (neuron0x1f62b60()*-1.02377);
}

double NNfunction_b1b1::synapse0x1f82f60() {
   return (neuron0x1f62ea0()*0.0426796);
}

double NNfunction_b1b1::synapse0x1f82fa0() {
   return (neuron0x1f631e0()*0.00224745);
}

double NNfunction_b1b1::synapse0x1f82fe0() {
   return (neuron0x1f63520()*-0.228946);
}

double NNfunction_b1b1::synapse0x1f83020() {
   return (neuron0x1f63860()*-0.0765048);
}

double NNfunction_b1b1::synapse0x1f83060() {
   return (neuron0x1f63ba0()*-0.0232531);
}

double NNfunction_b1b1::synapse0x1f830a0() {
   return (neuron0x1f63ee0()*0.0392199);
}

double NNfunction_b1b1::synapse0x1f830e0() {
   return (neuron0x1f64220()*-0.010608);
}

double NNfunction_b1b1::synapse0x1f83120() {
   return (neuron0x1f64560()*0.0171756);
}

double NNfunction_b1b1::synapse0x1f83160() {
   return (neuron0x1f648a0()*-0.241662);
}

double NNfunction_b1b1::synapse0x1f831a0() {
   return (neuron0x1f64be0()*-0.02379);
}

double NNfunction_b1b1::synapse0x1f831e0() {
   return (neuron0x1f64f20()*-0.00983604);
}

double NNfunction_b1b1::synapse0x1f82c70() {
   return (neuron0x1f65260()*0.00773517);
}

double NNfunction_b1b1::synapse0x1f82cb0() {
   return (neuron0x1f657c0()*0.00472443);
}

double NNfunction_b1b1::synapse0x1f83330() {
   return (neuron0x1f659e0()*0.057718);
}

double NNfunction_b1b1::synapse0x1f83370() {
   return (neuron0x1f65d20()*-1.06309);
}

double NNfunction_b1b1::synapse0x1f833b0() {
   return (neuron0x1f66060()*-0.0162186);
}

double NNfunction_b1b1::synapse0x1f833f0() {
   return (neuron0x1f663a0()*0.934031);
}

double NNfunction_b1b1::synapse0x1f83430() {
   return (neuron0x1f666e0()*0.0985335);
}

double NNfunction_b1b1::synapse0x1f83470() {
   return (neuron0x1f66a20()*0.105551);
}

double NNfunction_b1b1::synapse0x1f6bf20() {
   return (neuron0x1f61e60()*-0.00883538);
}

double NNfunction_b1b1::synapse0x1f6bf60() {
   return (neuron0x1f621a0()*-0.043109);
}

double NNfunction_b1b1::synapse0x1f6bfa0() {
   return (neuron0x1f624e0()*-0.0466138);
}

double NNfunction_b1b1::synapse0x1f6bfe0() {
   return (neuron0x1f62820()*-0.193973);
}

double NNfunction_b1b1::synapse0x1f6c020() {
   return (neuron0x1f62b60()*-0.036698);
}

double NNfunction_b1b1::synapse0x1f6c060() {
   return (neuron0x1f62ea0()*-0.0212412);
}

double NNfunction_b1b1::synapse0x1f6c0a0() {
   return (neuron0x1f631e0()*-0.150652);
}

double NNfunction_b1b1::synapse0x1f6c0e0() {
   return (neuron0x1f63520()*0.000640006);
}

double NNfunction_b1b1::synapse0x1f83c00() {
   return (neuron0x1f63860()*-0.000961753);
}

double NNfunction_b1b1::synapse0x1f83c40() {
   return (neuron0x1f63ba0()*0.56887);
}

double NNfunction_b1b1::synapse0x1f83c80() {
   return (neuron0x1f63ee0()*0.204682);
}

double NNfunction_b1b1::synapse0x1f83cc0() {
   return (neuron0x1f64220()*0.110489);
}

double NNfunction_b1b1::synapse0x1f83d00() {
   return (neuron0x1f64560()*0.0669022);
}

double NNfunction_b1b1::synapse0x1f83d40() {
   return (neuron0x1f648a0()*0.252196);
}

double NNfunction_b1b1::synapse0x1f83d80() {
   return (neuron0x1f64be0()*-0.00137925);
}

double NNfunction_b1b1::synapse0x1f83dc0() {
   return (neuron0x1f64f20()*-0.0431975);
}

double NNfunction_b1b1::synapse0x1f83640() {
   return (neuron0x1f65260()*-0.0359211);
}

double NNfunction_b1b1::synapse0x1f83680() {
   return (neuron0x1f657c0()*-0.109341);
}

double NNfunction_b1b1::synapse0x1f83f10() {
   return (neuron0x1f659e0()*0.0455599);
}

double NNfunction_b1b1::synapse0x1f83f50() {
   return (neuron0x1f65d20()*1.03781);
}

double NNfunction_b1b1::synapse0x1f83f90() {
   return (neuron0x1f66060()*-0.0601621);
}

double NNfunction_b1b1::synapse0x1f83fd0() {
   return (neuron0x1f663a0()*0.109463);
}

double NNfunction_b1b1::synapse0x1f84010() {
   return (neuron0x1f666e0()*-0.014314);
}

double NNfunction_b1b1::synapse0x1f84050() {
   return (neuron0x1f66a20()*-0.365843);
}

double NNfunction_b1b1::synapse0x1f843d0() {
   return (neuron0x1f61e60()*-0.529615);
}

double NNfunction_b1b1::synapse0x1f84410() {
   return (neuron0x1f621a0()*0.0785617);
}

double NNfunction_b1b1::synapse0x1f84450() {
   return (neuron0x1f624e0()*0.0926996);
}

double NNfunction_b1b1::synapse0x1f84490() {
   return (neuron0x1f62820()*-0.0194631);
}

double NNfunction_b1b1::synapse0x1f844d0() {
   return (neuron0x1f62b60()*1.29892);
}

double NNfunction_b1b1::synapse0x1f84510() {
   return (neuron0x1f62ea0()*0.0358191);
}

double NNfunction_b1b1::synapse0x1f84550() {
   return (neuron0x1f631e0()*-0.0749734);
}

double NNfunction_b1b1::synapse0x1f84590() {
   return (neuron0x1f63520()*-0.0181809);
}

double NNfunction_b1b1::synapse0x1f845d0() {
   return (neuron0x1f63860()*0.0337755);
}

double NNfunction_b1b1::synapse0x1f84610() {
   return (neuron0x1f63ba0()*0.0492344);
}

double NNfunction_b1b1::synapse0x1f84650() {
   return (neuron0x1f63ee0()*-0.0349855);
}

double NNfunction_b1b1::synapse0x1f84690() {
   return (neuron0x1f64220()*0.0531919);
}

double NNfunction_b1b1::synapse0x1f846d0() {
   return (neuron0x1f64560()*-0.00289705);
}

double NNfunction_b1b1::synapse0x1f84710() {
   return (neuron0x1f648a0()*0.422185);
}

double NNfunction_b1b1::synapse0x1f84750() {
   return (neuron0x1f64be0()*0.0136653);
}

double NNfunction_b1b1::synapse0x1f84790() {
   return (neuron0x1f64f20()*0.0737504);
}

double NNfunction_b1b1::synapse0x1f84220() {
   return (neuron0x1f65260()*0.0696792);
}

double NNfunction_b1b1::synapse0x1f84260() {
   return (neuron0x1f657c0()*-0.0121623);
}

double NNfunction_b1b1::synapse0x1f848e0() {
   return (neuron0x1f659e0()*-0.003013);
}

double NNfunction_b1b1::synapse0x1f84920() {
   return (neuron0x1f65d20()*0.321857);
}

double NNfunction_b1b1::synapse0x1f84960() {
   return (neuron0x1f66060()*-0.0132424);
}

double NNfunction_b1b1::synapse0x1f849a0() {
   return (neuron0x1f663a0()*1.38857);
}

double NNfunction_b1b1::synapse0x1f849e0() {
   return (neuron0x1f666e0()*0.0667306);
}

double NNfunction_b1b1::synapse0x1f84a20() {
   return (neuron0x1f66a20()*0.490704);
}

double NNfunction_b1b1::synapse0x1f84da0() {
   return (neuron0x1f61e60()*-0.0607747);
}

double NNfunction_b1b1::synapse0x1f84de0() {
   return (neuron0x1f621a0()*0.00126889);
}

double NNfunction_b1b1::synapse0x1f84e20() {
   return (neuron0x1f624e0()*0.00532531);
}

double NNfunction_b1b1::synapse0x1f84e60() {
   return (neuron0x1f62820()*0.0672282);
}

double NNfunction_b1b1::synapse0x1f84ea0() {
   return (neuron0x1f62b60()*0.0145478);
}

double NNfunction_b1b1::synapse0x1f84ee0() {
   return (neuron0x1f62ea0()*0.0111327);
}

double NNfunction_b1b1::synapse0x1f84f20() {
   return (neuron0x1f631e0()*-0.00976472);
}

double NNfunction_b1b1::synapse0x1f84f60() {
   return (neuron0x1f63520()*0.00438474);
}

double NNfunction_b1b1::synapse0x1f84fa0() {
   return (neuron0x1f63860()*0.000808077);
}

double NNfunction_b1b1::synapse0x1f84fe0() {
   return (neuron0x1f63ba0()*0.00158106);
}

double NNfunction_b1b1::synapse0x1f85020() {
   return (neuron0x1f63ee0()*-0.00384238);
}

double NNfunction_b1b1::synapse0x1f85060() {
   return (neuron0x1f64220()*0.000611502);
}

double NNfunction_b1b1::synapse0x1f850a0() {
   return (neuron0x1f64560()*-0.00360339);
}

double NNfunction_b1b1::synapse0x1f850e0() {
   return (neuron0x1f648a0()*-0.286875);
}

double NNfunction_b1b1::synapse0x1f85120() {
   return (neuron0x1f64be0()*-0.00881212);
}

double NNfunction_b1b1::synapse0x1f85160() {
   return (neuron0x1f64f20()*0.00682956);
}

double NNfunction_b1b1::synapse0x1f84bf0() {
   return (neuron0x1f65260()*-0.0117244);
}

double NNfunction_b1b1::synapse0x1f84c30() {
   return (neuron0x1f657c0()*0.00048698);
}

double NNfunction_b1b1::synapse0x1f75760() {
   return (neuron0x1f659e0()*0.00577079);
}

double NNfunction_b1b1::synapse0x1f757a0() {
   return (neuron0x1f65d20()*1.75099);
}

double NNfunction_b1b1::synapse0x1f757e0() {
   return (neuron0x1f66060()*-0.00417954);
}

double NNfunction_b1b1::synapse0x1f75820() {
   return (neuron0x1f663a0()*0.00254106);
}

double NNfunction_b1b1::synapse0x1f75860() {
   return (neuron0x1f666e0()*-0.00233747);
}

double NNfunction_b1b1::synapse0x1f758a0() {
   return (neuron0x1f66a20()*-0.0450735);
}

double NNfunction_b1b1::synapse0x1f75c20() {
   return (neuron0x1f61e60()*0.742408);
}

double NNfunction_b1b1::synapse0x1f75c60() {
   return (neuron0x1f621a0()*-0.00791325);
}

double NNfunction_b1b1::synapse0x1f75ca0() {
   return (neuron0x1f624e0()*0.0520695);
}

double NNfunction_b1b1::synapse0x1f75ce0() {
   return (neuron0x1f62820()*0.0218766);
}

double NNfunction_b1b1::synapse0x1f75d20() {
   return (neuron0x1f62b60()*0.409074);
}

double NNfunction_b1b1::synapse0x1f75d60() {
   return (neuron0x1f62ea0()*0.00383676);
}

double NNfunction_b1b1::synapse0x1f75da0() {
   return (neuron0x1f631e0()*0.073826);
}

double NNfunction_b1b1::synapse0x1f75de0() {
   return (neuron0x1f63520()*-0.002282);
}

double NNfunction_b1b1::synapse0x1f75e20() {
   return (neuron0x1f63860()*0.616717);
}

double NNfunction_b1b1::synapse0x1f75e60() {
   return (neuron0x1f63ba0()*-0.1641);
}

double NNfunction_b1b1::synapse0x1f75ea0() {
   return (neuron0x1f63ee0()*0.252289);
}

double NNfunction_b1b1::synapse0x1f75ee0() {
   return (neuron0x1f64220()*0.0184126);
}

double NNfunction_b1b1::synapse0x1f75f20() {
   return (neuron0x1f64560()*0.0102365);
}

double NNfunction_b1b1::synapse0x1f75f60() {
   return (neuron0x1f648a0()*0.309463);
}

double NNfunction_b1b1::synapse0x1f75fa0() {
   return (neuron0x1f64be0()*0.0322047);
}

double NNfunction_b1b1::synapse0x1f75fe0() {
   return (neuron0x1f64f20()*-0.000477495);
}

double NNfunction_b1b1::synapse0x1f75a70() {
   return (neuron0x1f65260()*-0.0347003);
}

double NNfunction_b1b1::synapse0x1f75ab0() {
   return (neuron0x1f657c0()*-0.0437587);
}

double NNfunction_b1b1::synapse0x1f76130() {
   return (neuron0x1f659e0()*-0.0774178);
}

double NNfunction_b1b1::synapse0x1f76170() {
   return (neuron0x1f65d20()*-1.33033);
}

double NNfunction_b1b1::synapse0x1f761b0() {
   return (neuron0x1f66060()*-0.0180534);
}

double NNfunction_b1b1::synapse0x1f761f0() {
   return (neuron0x1f663a0()*-0.128504);
}

double NNfunction_b1b1::synapse0x1f76230() {
   return (neuron0x1f666e0()*-0.062602);
}

double NNfunction_b1b1::synapse0x1f76270() {
   return (neuron0x1f66a20()*0.0134486);
}

double NNfunction_b1b1::synapse0x1f765f0() {
   return (neuron0x1f61e60()*0.465048);
}

double NNfunction_b1b1::synapse0x1f76630() {
   return (neuron0x1f621a0()*0.137461);
}

double NNfunction_b1b1::synapse0x1f76670() {
   return (neuron0x1f624e0()*-0.0118629);
}

double NNfunction_b1b1::synapse0x1f766b0() {
   return (neuron0x1f62820()*0.0677999);
}

double NNfunction_b1b1::synapse0x1f766f0() {
   return (neuron0x1f62b60()*-0.161042);
}

double NNfunction_b1b1::synapse0x1f76730() {
   return (neuron0x1f62ea0()*-0.0180097);
}

double NNfunction_b1b1::synapse0x1f76770() {
   return (neuron0x1f631e0()*0.00581874);
}

double NNfunction_b1b1::synapse0x1f767b0() {
   return (neuron0x1f63520()*-0.174656);
}

double NNfunction_b1b1::synapse0x1f767f0() {
   return (neuron0x1f63860()*0.0320832);
}

double NNfunction_b1b1::synapse0x1f76830() {
   return (neuron0x1f63ba0()*0.01029);
}

double NNfunction_b1b1::synapse0x1f76870() {
   return (neuron0x1f63ee0()*0.00374395);
}

double NNfunction_b1b1::synapse0x1f768b0() {
   return (neuron0x1f64220()*-0.0129735);
}

double NNfunction_b1b1::synapse0x1f768f0() {
   return (neuron0x1f64560()*-0.0446744);
}

double NNfunction_b1b1::synapse0x1f76930() {
   return (neuron0x1f648a0()*-1.26821);
}

double NNfunction_b1b1::synapse0x1f76970() {
   return (neuron0x1f64be0()*0.0262049);
}

double NNfunction_b1b1::synapse0x1f769b0() {
   return (neuron0x1f64f20()*0.0131029);
}

double NNfunction_b1b1::synapse0x1f76440() {
   return (neuron0x1f65260()*0.0528614);
}

double NNfunction_b1b1::synapse0x1f76480() {
   return (neuron0x1f657c0()*-0.03912);
}

double NNfunction_b1b1::synapse0x1f76b00() {
   return (neuron0x1f659e0()*0.0178957);
}

double NNfunction_b1b1::synapse0x1f76b40() {
   return (neuron0x1f65d20()*1.72682);
}

double NNfunction_b1b1::synapse0x1f76b80() {
   return (neuron0x1f66060()*0.0436712);
}

double NNfunction_b1b1::synapse0x1f76bc0() {
   return (neuron0x1f663a0()*1.24499);
}

double NNfunction_b1b1::synapse0x1f76c00() {
   return (neuron0x1f666e0()*0.0368332);
}

double NNfunction_b1b1::synapse0x1f76c40() {
   return (neuron0x1f66a20()*-3.62412);
}

double NNfunction_b1b1::synapse0x1f76fc0() {
   return (neuron0x1f61e60()*0.0395651);
}

double NNfunction_b1b1::synapse0x1f77000() {
   return (neuron0x1f621a0()*0.274658);
}

double NNfunction_b1b1::synapse0x1f77040() {
   return (neuron0x1f624e0()*0.0343042);
}

double NNfunction_b1b1::synapse0x1f77080() {
   return (neuron0x1f62820()*0.0550973);
}

double NNfunction_b1b1::synapse0x1f770c0() {
   return (neuron0x1f62b60()*0.325421);
}

double NNfunction_b1b1::synapse0x1f77100() {
   return (neuron0x1f62ea0()*-0.0327214);
}

double NNfunction_b1b1::synapse0x1f77140() {
   return (neuron0x1f631e0()*0.0589678);
}

double NNfunction_b1b1::synapse0x1f77180() {
   return (neuron0x1f63520()*-0.277762);
}

double NNfunction_b1b1::synapse0x1f771c0() {
   return (neuron0x1f63860()*0.0818024);
}

double NNfunction_b1b1::synapse0x1f77200() {
   return (neuron0x1f63ba0()*-0.015608);
}

double NNfunction_b1b1::synapse0x1f77240() {
   return (neuron0x1f63ee0()*-0.00981127);
}

double NNfunction_b1b1::synapse0x1f77280() {
   return (neuron0x1f64220()*0.0124103);
}

double NNfunction_b1b1::synapse0x1f772c0() {
   return (neuron0x1f64560()*-0.0530366);
}

double NNfunction_b1b1::synapse0x1f77300() {
   return (neuron0x1f648a0()*0.128004);
}

double NNfunction_b1b1::synapse0x1f77340() {
   return (neuron0x1f64be0()*-0.0102038);
}

double NNfunction_b1b1::synapse0x1f77380() {
   return (neuron0x1f64f20()*-0.00419808);
}

double NNfunction_b1b1::synapse0x1f76e10() {
   return (neuron0x1f65260()*-0.019278);
}

double NNfunction_b1b1::synapse0x1f76e50() {
   return (neuron0x1f657c0()*-0.0409365);
}

double NNfunction_b1b1::synapse0x1f774d0() {
   return (neuron0x1f659e0()*0.0411594);
}

double NNfunction_b1b1::synapse0x1f77510() {
   return (neuron0x1f65d20()*-0.956601);
}

double NNfunction_b1b1::synapse0x1f77550() {
   return (neuron0x1f66060()*0.0300977);
}

double NNfunction_b1b1::synapse0x1f77590() {
   return (neuron0x1f663a0()*-0.971);
}

double NNfunction_b1b1::synapse0x1f775d0() {
   return (neuron0x1f666e0()*0.0537259);
}

double NNfunction_b1b1::synapse0x1f77610() {
   return (neuron0x1f66a20()*-0.114412);
}

double NNfunction_b1b1::synapse0x1f894e0() {
   return (neuron0x1f61e60()*-0.0603151);
}

double NNfunction_b1b1::synapse0x1f89520() {
   return (neuron0x1f621a0()*-0.0737846);
}

double NNfunction_b1b1::synapse0x1f89560() {
   return (neuron0x1f624e0()*0.758874);
}

double NNfunction_b1b1::synapse0x1f895a0() {
   return (neuron0x1f62820()*-0.0130322);
}

double NNfunction_b1b1::synapse0x1f895e0() {
   return (neuron0x1f62b60()*-0.0632668);
}

double NNfunction_b1b1::synapse0x1f89620() {
   return (neuron0x1f62ea0()*-0.00242286);
}

double NNfunction_b1b1::synapse0x1f89660() {
   return (neuron0x1f631e0()*-0.0392529);
}

double NNfunction_b1b1::synapse0x1f896a0() {
   return (neuron0x1f63520()*0.00188346);
}

double NNfunction_b1b1::synapse0x1f896e0() {
   return (neuron0x1f63860()*0.0397649);
}

double NNfunction_b1b1::synapse0x1f89720() {
   return (neuron0x1f63ba0()*-0.0162495);
}

double NNfunction_b1b1::synapse0x1f89760() {
   return (neuron0x1f63ee0()*0.0240688);
}

double NNfunction_b1b1::synapse0x1f897a0() {
   return (neuron0x1f64220()*0.0258286);
}

double NNfunction_b1b1::synapse0x1f897e0() {
   return (neuron0x1f64560()*-0.0493921);
}

double NNfunction_b1b1::synapse0x1f89820() {
   return (neuron0x1f648a0()*-0.0621542);
}

double NNfunction_b1b1::synapse0x1f89860() {
   return (neuron0x1f64be0()*0.00859667);
}

double NNfunction_b1b1::synapse0x1f898a0() {
   return (neuron0x1f64f20()*0.0125954);
}

double NNfunction_b1b1::synapse0x1f77650() {
   return (neuron0x1f65260()*-0.229085);
}

double NNfunction_b1b1::synapse0x1f77690() {
   return (neuron0x1f657c0()*-0.0125528);
}

double NNfunction_b1b1::synapse0x1f899f0() {
   return (neuron0x1f659e0()*-0.0864855);
}

double NNfunction_b1b1::synapse0x1f89a30() {
   return (neuron0x1f65d20()*0.164636);
}

double NNfunction_b1b1::synapse0x1f89a70() {
   return (neuron0x1f66060()*-0.34394);
}

double NNfunction_b1b1::synapse0x1f89ab0() {
   return (neuron0x1f663a0()*0.0294239);
}

double NNfunction_b1b1::synapse0x1f89af0() {
   return (neuron0x1f666e0()*0.00175565);
}

double NNfunction_b1b1::synapse0x1f89b30() {
   return (neuron0x1f66a20()*0.748943);
}

double NNfunction_b1b1::synapse0x1f89eb0() {
   return (neuron0x1f61e60()*-0.527301);
}

double NNfunction_b1b1::synapse0x1f89ef0() {
   return (neuron0x1f621a0()*-0.00250151);
}

double NNfunction_b1b1::synapse0x1f89f30() {
   return (neuron0x1f624e0()*-0.082043);
}

double NNfunction_b1b1::synapse0x1f89f70() {
   return (neuron0x1f62820()*-0.0332219);
}

double NNfunction_b1b1::synapse0x1f89fb0() {
   return (neuron0x1f62b60()*-0.362755);
}

double NNfunction_b1b1::synapse0x1f89ff0() {
   return (neuron0x1f62ea0()*0.0127314);
}

double NNfunction_b1b1::synapse0x1f8a030() {
   return (neuron0x1f631e0()*-0.0330396);
}

double NNfunction_b1b1::synapse0x1f8a070() {
   return (neuron0x1f63520()*-0.0208001);
}

double NNfunction_b1b1::synapse0x1f8a0b0() {
   return (neuron0x1f63860()*-0.000236356);
}

double NNfunction_b1b1::synapse0x1f8a0f0() {
   return (neuron0x1f63ba0()*0.0184624);
}

double NNfunction_b1b1::synapse0x1f8a130() {
   return (neuron0x1f63ee0()*0.0271155);
}

double NNfunction_b1b1::synapse0x1f8a170() {
   return (neuron0x1f64220()*-0.0348375);
}

double NNfunction_b1b1::synapse0x1f8a1b0() {
   return (neuron0x1f64560()*-0.0116345);
}

double NNfunction_b1b1::synapse0x1f8a1f0() {
   return (neuron0x1f648a0()*0.0977387);
}

double NNfunction_b1b1::synapse0x1f8a230() {
   return (neuron0x1f64be0()*-0.00864875);
}

double NNfunction_b1b1::synapse0x1f8a270() {
   return (neuron0x1f64f20()*-0.0232702);
}

double NNfunction_b1b1::synapse0x1f89d00() {
   return (neuron0x1f65260()*0.369303);
}

double NNfunction_b1b1::synapse0x1f89d40() {
   return (neuron0x1f657c0()*0.0106531);
}

double NNfunction_b1b1::synapse0x1f8a3c0() {
   return (neuron0x1f659e0()*-0.0642159);
}

double NNfunction_b1b1::synapse0x1f8a400() {
   return (neuron0x1f65d20()*-0.170543);
}

double NNfunction_b1b1::synapse0x1f8a440() {
   return (neuron0x1f66060()*0.015716);
}

double NNfunction_b1b1::synapse0x1f8a480() {
   return (neuron0x1f663a0()*-0.206293);
}

double NNfunction_b1b1::synapse0x1f8a4c0() {
   return (neuron0x1f666e0()*-0.0105616);
}

double NNfunction_b1b1::synapse0x1f8a500() {
   return (neuron0x1f66a20()*0.126219);
}

double NNfunction_b1b1::synapse0x1f8a880() {
   return (neuron0x1f61e60()*-0.0404117);
}

double NNfunction_b1b1::synapse0x1f8a8c0() {
   return (neuron0x1f621a0()*0.0637594);
}

double NNfunction_b1b1::synapse0x1f8a900() {
   return (neuron0x1f624e0()*0.131382);
}

double NNfunction_b1b1::synapse0x1f8a940() {
   return (neuron0x1f62820()*0.112957);
}

double NNfunction_b1b1::synapse0x1f8a980() {
   return (neuron0x1f62b60()*-0.313719);
}

double NNfunction_b1b1::synapse0x1f8a9c0() {
   return (neuron0x1f62ea0()*-0.057796);
}

double NNfunction_b1b1::synapse0x1f8aa00() {
   return (neuron0x1f631e0()*0.151619);
}

double NNfunction_b1b1::synapse0x1f8aa40() {
   return (neuron0x1f63520()*-0.0928778);
}

double NNfunction_b1b1::synapse0x1f8aa80() {
   return (neuron0x1f63860()*0.887962);
}

double NNfunction_b1b1::synapse0x1f8aac0() {
   return (neuron0x1f63ba0()*0.269354);
}

double NNfunction_b1b1::synapse0x1f8ab00() {
   return (neuron0x1f63ee0()*0.420379);
}

double NNfunction_b1b1::synapse0x1f8ab40() {
   return (neuron0x1f64220()*-0.0298022);
}

double NNfunction_b1b1::synapse0x1f8ab80() {
   return (neuron0x1f64560()*-0.0713763);
}

double NNfunction_b1b1::synapse0x1f8abc0() {
   return (neuron0x1f648a0()*-0.644326);
}

double NNfunction_b1b1::synapse0x1f8ac00() {
   return (neuron0x1f64be0()*0.29333);
}

double NNfunction_b1b1::synapse0x1f8ac40() {
   return (neuron0x1f64f20()*0.118261);
}

double NNfunction_b1b1::synapse0x1f8a6d0() {
   return (neuron0x1f65260()*-0.646954);
}

double NNfunction_b1b1::synapse0x1f8a710() {
   return (neuron0x1f657c0()*0.0473359);
}

double NNfunction_b1b1::synapse0x1f8ad90() {
   return (neuron0x1f659e0()*-0.145702);
}

double NNfunction_b1b1::synapse0x1f8add0() {
   return (neuron0x1f65d20()*0.47541);
}

double NNfunction_b1b1::synapse0x1f8ae10() {
   return (neuron0x1f66060()*-0.116386);
}

double NNfunction_b1b1::synapse0x1f8ae50() {
   return (neuron0x1f663a0()*-0.364015);
}

double NNfunction_b1b1::synapse0x1f8ae90() {
   return (neuron0x1f666e0()*0.256993);
}

double NNfunction_b1b1::synapse0x1f8aed0() {
   return (neuron0x1f66a20()*-0.0639584);
}

double NNfunction_b1b1::synapse0x1f8b250() {
   return (neuron0x1f61e60()*0.685012);
}

double NNfunction_b1b1::synapse0x1f8b290() {
   return (neuron0x1f621a0()*0.0205318);
}

double NNfunction_b1b1::synapse0x1f8b2d0() {
   return (neuron0x1f624e0()*0.0179658);
}

double NNfunction_b1b1::synapse0x1f8b310() {
   return (neuron0x1f62820()*0.067235);
}

double NNfunction_b1b1::synapse0x1f8b350() {
   return (neuron0x1f62b60()*0.480985);
}

double NNfunction_b1b1::synapse0x1f8b390() {
   return (neuron0x1f62ea0()*-0.00594849);
}

double NNfunction_b1b1::synapse0x1f8b3d0() {
   return (neuron0x1f631e0()*0.0601845);
}

double NNfunction_b1b1::synapse0x1f8b410() {
   return (neuron0x1f63520()*0.0129134);
}

double NNfunction_b1b1::synapse0x1f8b450() {
   return (neuron0x1f63860()*-0.091129);
}

double NNfunction_b1b1::synapse0x1f8b490() {
   return (neuron0x1f63ba0()*0.304248);
}

double NNfunction_b1b1::synapse0x1f8b4d0() {
   return (neuron0x1f63ee0()*-0.0738147);
}

double NNfunction_b1b1::synapse0x1f8b510() {
   return (neuron0x1f64220()*-0.0408163);
}

double NNfunction_b1b1::synapse0x1f8b550() {
   return (neuron0x1f64560()*-0.0636315);
}

double NNfunction_b1b1::synapse0x1f8b590() {
   return (neuron0x1f648a0()*0.209102);
}

double NNfunction_b1b1::synapse0x1f8b5d0() {
   return (neuron0x1f64be0()*0.00832647);
}

double NNfunction_b1b1::synapse0x1f8b610() {
   return (neuron0x1f64f20()*0.0498732);
}

double NNfunction_b1b1::synapse0x1f8b0a0() {
   return (neuron0x1f65260()*0.0468685);
}

double NNfunction_b1b1::synapse0x1f8b0e0() {
   return (neuron0x1f657c0()*0.0285094);
}

double NNfunction_b1b1::synapse0x1f8b760() {
   return (neuron0x1f659e0()*-0.0195501);
}

double NNfunction_b1b1::synapse0x1f8b7a0() {
   return (neuron0x1f65d20()*-0.863122);
}

double NNfunction_b1b1::synapse0x1f8b7e0() {
   return (neuron0x1f66060()*0.0560268);
}

double NNfunction_b1b1::synapse0x1f8b820() {
   return (neuron0x1f663a0()*-0.118754);
}

double NNfunction_b1b1::synapse0x1f8b860() {
   return (neuron0x1f666e0()*-0.0130207);
}

double NNfunction_b1b1::synapse0x1f8b8a0() {
   return (neuron0x1f66a20()*0.354968);
}

double NNfunction_b1b1::synapse0x1d21c70() {
   return (neuron0x1f66e90()*2.92178);
}

double NNfunction_b1b1::synapse0x1d21cb0() {
   return (neuron0x1f677e0()*0.85646);
}

double NNfunction_b1b1::synapse0x1f69350() {
   return (neuron0x1f682c0()*-2.67526);
}

double NNfunction_b1b1::synapse0x1f69390() {
   return (neuron0x1f67d60()*6.84016);
}

double NNfunction_b1b1::synapse0x1f69d20() {
   return (neuron0x1f690a0()*0.682093);
}

double NNfunction_b1b1::synapse0x1f69d60() {
   return (neuron0x1f69a70()*-1.51758);
}

double NNfunction_b1b1::synapse0x1f6aaf0() {
   return (neuron0x1f6a840()*1.13353);
}

double NNfunction_b1b1::synapse0x1f6ab30() {
   return (neuron0x1f6b210()*-1.52066);
}

double NNfunction_b1b1::synapse0x1f6b4c0() {
   return (neuron0x1f6bbe0()*-0.107836);
}

double NNfunction_b1b1::synapse0x1f6b500() {
   return (neuron0x1f6c6c0()*-1.40694);
}

double NNfunction_b1b1::synapse0x1f6be90() {
   return (neuron0x1f6d090()*2.02567);
}

double NNfunction_b1b1::synapse0x1f6bed0() {
   return (neuron0x1f6a170()*-4.30146);
}

double NNfunction_b1b1::synapse0x1f6c970() {
   return (neuron0x1f6ec40()*-3.39308);
}

double NNfunction_b1b1::synapse0x1f6c9b0() {
   return (neuron0x1f6f610()*-0.168859);
}

double NNfunction_b1b1::synapse0x1f6d340() {
   return (neuron0x1f6ffe0()*1.24089);
}

double NNfunction_b1b1::synapse0x1f6d380() {
   return (neuron0x1f709b0()*-0.793477);
}

double NNfunction_b1b1::synapse0x1f6a420() {
   return (neuron0x1f727c0()*0.0170165);
}

double NNfunction_b1b1::synapse0x1f6a460() {
   return (neuron0x1f72aa0()*0.95943);
}

double NNfunction_b1b1::synapse0x1f6eef0() {
   return (neuron0x1f73470()*1.54681);
}

double NNfunction_b1b1::synapse0x1f6ef30() {
   return (neuron0x1f73e40()*-0.65563);
}

double NNfunction_b1b1::synapse0x1f6f8c0() {
   return (neuron0x1f74810()*0.50799);
}

double NNfunction_b1b1::synapse0x1f6f900() {
   return (neuron0x1f751e0()*1.76052);
}

double NNfunction_b1b1::synapse0x1f70290() {
   return (neuron0x1f6dd30()*2.36639);
}

double NNfunction_b1b1::synapse0x1f702d0() {
   return (neuron0x1f6e700()*-1.63031);
}

double NNfunction_b1b1::synapse0x1f70c60() {
   return (neuron0x1f77f70()*-5.89635);
}

double NNfunction_b1b1::synapse0x1f70ca0() {
   return (neuron0x1f78940()*3.83786);
}

double NNfunction_b1b1::synapse0x1f64e00() {
   return (neuron0x1f79310()*-1.96733);
}

double NNfunction_b1b1::synapse0x1f64e40() {
   return (neuron0x1f79ce0()*1.45502);
}

double NNfunction_b1b1::synapse0x1f72d50() {
   return (neuron0x1f7a6b0()*-3.82786);
}

double NNfunction_b1b1::synapse0x1f72d90() {
   return (neuron0x1f7b080()*0.0236315);
}

double NNfunction_b1b1::synapse0x1f73720() {
   return (neuron0x1f7ba50()*-3.05357);
}

double NNfunction_b1b1::synapse0x1f73760() {
   return (neuron0x1f7c420()*-1.05786);
}

double NNfunction_b1b1::synapse0x1f740f0() {
   return (neuron0x1f724b0()*-0.105858);
}

double NNfunction_b1b1::synapse0x1f74130() {
   return (neuron0x1f7f000()*-0.540322);
}

double NNfunction_b1b1::synapse0x1f74ac0() {
   return (neuron0x1f7f9d0()*-0.461442);
}

double NNfunction_b1b1::synapse0x1f74b00() {
   return (neuron0x1f803a0()*-3.88353);
}

double NNfunction_b1b1::synapse0x1f75490() {
   return (neuron0x1f80d70()*1.56183);
}

double NNfunction_b1b1::synapse0x1f754d0() {
   return (neuron0x1f81740()*-4.32015);
}

double NNfunction_b1b1::synapse0x1f6dfe0() {
   return (neuron0x1f82110()*0.674424);
}

double NNfunction_b1b1::synapse0x1f6e020() {
   return (neuron0x1f82ae0()*0.673858);
}

double NNfunction_b1b1::synapse0x1f77890() {
   return (neuron0x1f834b0()*0.942815);
}

double NNfunction_b1b1::synapse0x1f778d0() {
   return (neuron0x1f84090()*-0.160022);
}

double NNfunction_b1b1::synapse0x1f78220() {
   return (neuron0x1f84a60()*1.67497);
}

double NNfunction_b1b1::synapse0x1f78260() {
   return (neuron0x1f758e0()*-0.150134);
}

double NNfunction_b1b1::synapse0x1f78bf0() {
   return (neuron0x1f762b0()*-0.496462);
}

double NNfunction_b1b1::synapse0x1f78c30() {
   return (neuron0x1f76c80()*0.948715);
}

double NNfunction_b1b1::synapse0x1f795c0() {
   return (neuron0x1f892c0()*-3.74356);
}

double NNfunction_b1b1::synapse0x1f79600() {
   return (neuron0x1f89b70()*2.11531);
}

double NNfunction_b1b1::synapse0x1f79f90() {
   return (neuron0x1f8a540()*-0.765607);
}

double NNfunction_b1b1::synapse0x1f79fd0() {
   return (neuron0x1f8af10()*-1.18355);
}

double NNfunction_b1b1::synapse0x1f7c6d0() {
   return (neuron0x1f66e90()*-1.20692);
}

double NNfunction_b1b1::synapse0x1f7c710() {
   return (neuron0x1f677e0()*0.0342246);
}

double NNfunction_b1b1::synapse0x1f71c90() {
   return (neuron0x1f682c0()*0.200468);
}

double NNfunction_b1b1::synapse0x1f71cd0() {
   return (neuron0x1f67d60()*-0.238163);
}

double NNfunction_b1b1::synapse0x1f7f2b0() {
   return (neuron0x1f690a0()*-1.0348);
}

double NNfunction_b1b1::synapse0x1f7f2f0() {
   return (neuron0x1f69a70()*-0.0199304);
}

double NNfunction_b1b1::synapse0x1f7fc80() {
   return (neuron0x1f6a840()*-1.57971);
}

double NNfunction_b1b1::synapse0x1f7fcc0() {
   return (neuron0x1f6b210()*0.139615);
}

double NNfunction_b1b1::synapse0x1f80650() {
   return (neuron0x1f6bbe0()*0.393308);
}

double NNfunction_b1b1::synapse0x1f80690() {
   return (neuron0x1f6c6c0()*0.0390513);
}

double NNfunction_b1b1::synapse0x1f81020() {
   return (neuron0x1f6d090()*0.282218);
}

double NNfunction_b1b1::synapse0x1f81060() {
   return (neuron0x1f6a170()*0.169158);
}

double NNfunction_b1b1::synapse0x1f819f0() {
   return (neuron0x1f6ec40()*-0.0896326);
}

double NNfunction_b1b1::synapse0x1f81a30() {
   return (neuron0x1f6f610()*-0.691697);
}

double NNfunction_b1b1::synapse0x1f823c0() {
   return (neuron0x1f6ffe0()*-0.127783);
}

double NNfunction_b1b1::synapse0x1f82400() {
   return (neuron0x1f709b0()*0.261407);
}

double NNfunction_b1b1::synapse0x1f82d90() {
   return (neuron0x1f727c0()*0.607595);
}

double NNfunction_b1b1::synapse0x1f82dd0() {
   return (neuron0x1f72aa0()*-0.959103);
}

double NNfunction_b1b1::synapse0x1f83760() {
   return (neuron0x1f73470()*0.313295);
}

double NNfunction_b1b1::synapse0x1f837a0() {
   return (neuron0x1f73e40()*0.0521556);
}

double NNfunction_b1b1::synapse0x1f84340() {
   return (neuron0x1f74810()*0.289832);
}

double NNfunction_b1b1::synapse0x1f84380() {
   return (neuron0x1f751e0()*1.17782);
}

double NNfunction_b1b1::synapse0x1f84d10() {
   return (neuron0x1f6dd30()*-0.780979);
}

double NNfunction_b1b1::synapse0x1f84d50() {
   return (neuron0x1f6e700()*-1.56913);
}

double NNfunction_b1b1::synapse0x1f75b90() {
   return (neuron0x1f77f70()*0.625747);
}

double NNfunction_b1b1::synapse0x1f75bd0() {
   return (neuron0x1f78940()*-0.190296);
}

double NNfunction_b1b1::synapse0x1f76560() {
   return (neuron0x1f79310()*-0.702699);
}

double NNfunction_b1b1::synapse0x1f765a0() {
   return (neuron0x1f79ce0()*-0.328095);
}

double NNfunction_b1b1::synapse0x1f76f30() {
   return (neuron0x1f7a6b0()*0.415763);
}

double NNfunction_b1b1::synapse0x1f76f70() {
   return (neuron0x1f7b080()*-0.838347);
}

double NNfunction_b1b1::synapse0x1f89450() {
   return (neuron0x1f7ba50()*-0.185817);
}

double NNfunction_b1b1::synapse0x1f89490() {
   return (neuron0x1f7c420()*-0.265936);
}

double NNfunction_b1b1::synapse0x1f89e20() {
   return (neuron0x1f724b0()*0.393657);
}

double NNfunction_b1b1::synapse0x1f89e60() {
   return (neuron0x1f7f000()*0.617414);
}

double NNfunction_b1b1::synapse0x1f8a7f0() {
   return (neuron0x1f7f9d0()*0.252305);
}

double NNfunction_b1b1::synapse0x1f8a830() {
   return (neuron0x1f803a0()*-0.0644377);
}

double NNfunction_b1b1::synapse0x1f8b1c0() {
   return (neuron0x1f80d70()*0.551544);
}

double NNfunction_b1b1::synapse0x1f8b200() {
   return (neuron0x1f81740()*0.29216);
}

double NNfunction_b1b1::synapse0x1f670b0() {
   return (neuron0x1f82110()*0.0608764);
}

double NNfunction_b1b1::synapse0x1f670f0() {
   return (neuron0x1f82ae0()*0.811499);
}

double NNfunction_b1b1::synapse0x1f7a960() {
   return (neuron0x1f834b0()*-0.152483);
}

double NNfunction_b1b1::synapse0x1f7a9a0() {
   return (neuron0x1f84090()*-0.549952);
}

double NNfunction_b1b1::synapse0x1f8b8e0() {
   return (neuron0x1f84a60()*-0.667566);
}

double NNfunction_b1b1::synapse0x1f8b920() {
   return (neuron0x1f758e0()*-0.252155);
}

double NNfunction_b1b1::synapse0x1f8b960() {
   return (neuron0x1f762b0()*-0.770503);
}

double NNfunction_b1b1::synapse0x1f8b9a0() {
   return (neuron0x1f76c80()*0.141764);
}

double NNfunction_b1b1::synapse0x1f92850() {
   return (neuron0x1f892c0()*-0.10818);
}

double NNfunction_b1b1::synapse0x1f92890() {
   return (neuron0x1f89b70()*-0.399639);
}

double NNfunction_b1b1::synapse0x1f928d0() {
   return (neuron0x1f8a540()*0.015216);
}

double NNfunction_b1b1::synapse0x1f92910() {
   return (neuron0x1f8af10()*0.159489);
}

double NNfunction_b1b1::synapse0x1f92c90() {
   return (neuron0x1f66e90()*-0.549021);
}

double NNfunction_b1b1::synapse0x1f92cd0() {
   return (neuron0x1f677e0()*0.519012);
}

double NNfunction_b1b1::synapse0x1f92d10() {
   return (neuron0x1f682c0()*0.197407);
}

double NNfunction_b1b1::synapse0x1f92d50() {
   return (neuron0x1f67d60()*-0.505849);
}

double NNfunction_b1b1::synapse0x1f92d90() {
   return (neuron0x1f690a0()*-0.0199217);
}

double NNfunction_b1b1::synapse0x1f92dd0() {
   return (neuron0x1f69a70()*0.0941453);
}

double NNfunction_b1b1::synapse0x1f92e10() {
   return (neuron0x1f6a840()*-0.769005);
}

double NNfunction_b1b1::synapse0x1f92e50() {
   return (neuron0x1f6b210()*0.0104036);
}

double NNfunction_b1b1::synapse0x1f92e90() {
   return (neuron0x1f6bbe0()*1.5834);
}

double NNfunction_b1b1::synapse0x1f92ed0() {
   return (neuron0x1f6c6c0()*0.0180916);
}

double NNfunction_b1b1::synapse0x1f92f10() {
   return (neuron0x1f6d090()*0.976188);
}

double NNfunction_b1b1::synapse0x1f92f50() {
   return (neuron0x1f6a170()*0.240088);
}

double NNfunction_b1b1::synapse0x1f92f90() {
   return (neuron0x1f6ec40()*0.390362);
}

double NNfunction_b1b1::synapse0x1f92fd0() {
   return (neuron0x1f6f610()*0.90359);
}

double NNfunction_b1b1::synapse0x1f93010() {
   return (neuron0x1f6ffe0()*0.256257);
}

double NNfunction_b1b1::synapse0x1f93050() {
   return (neuron0x1f709b0()*-0.0700808);
}

double NNfunction_b1b1::synapse0x1f92ae0() {
   return (neuron0x1f727c0()*-0.244421);
}

double NNfunction_b1b1::synapse0x1f92b20() {
   return (neuron0x1f72aa0()*1.03419);
}

double NNfunction_b1b1::synapse0x1f931a0() {
   return (neuron0x1f73470()*-1.4021);
}

double NNfunction_b1b1::synapse0x1f931e0() {
   return (neuron0x1f73e40()*-0.857288);
}

double NNfunction_b1b1::synapse0x1f93220() {
   return (neuron0x1f74810()*-0.844324);
}

double NNfunction_b1b1::synapse0x1f93260() {
   return (neuron0x1f751e0()*-0.0790127);
}

double NNfunction_b1b1::synapse0x1f932a0() {
   return (neuron0x1f6dd30()*0.80864);
}

double NNfunction_b1b1::synapse0x1f932e0() {
   return (neuron0x1f6e700()*-1.38892);
}

double NNfunction_b1b1::synapse0x1f93320() {
   return (neuron0x1f77f70()*-0.170853);
}

double NNfunction_b1b1::synapse0x1f93360() {
   return (neuron0x1f78940()*0.736196);
}

double NNfunction_b1b1::synapse0x1f933a0() {
   return (neuron0x1f79310()*0.595304);
}

double NNfunction_b1b1::synapse0x1f933e0() {
   return (neuron0x1f79ce0()*-0.0231502);
}

double NNfunction_b1b1::synapse0x1f93420() {
   return (neuron0x1f7a6b0()*-0.168259);
}

double NNfunction_b1b1::synapse0x1f93460() {
   return (neuron0x1f7b080()*1.01786);
}

double NNfunction_b1b1::synapse0x1f934a0() {
   return (neuron0x1f7ba50()*0.664588);
}

double NNfunction_b1b1::synapse0x1f934e0() {
   return (neuron0x1f7c420()*0.906423);
}

double NNfunction_b1b1::synapse0x1f93090() {
   return (neuron0x1f724b0()*0.722029);
}

double NNfunction_b1b1::synapse0x1f930d0() {
   return (neuron0x1f7f000()*0.0188406);
}

double NNfunction_b1b1::synapse0x1f93110() {
   return (neuron0x1f7f9d0()*-0.781361);
}

double NNfunction_b1b1::synapse0x1f93150() {
   return (neuron0x1f803a0()*0.20091);
}

double NNfunction_b1b1::synapse0x1f93730() {
   return (neuron0x1f80d70()*-0.281584);
}

double NNfunction_b1b1::synapse0x1f93770() {
   return (neuron0x1f81740()*0.479291);
}

double NNfunction_b1b1::synapse0x1f937b0() {
   return (neuron0x1f82110()*-1.07565);
}

double NNfunction_b1b1::synapse0x1f937f0() {
   return (neuron0x1f82ae0()*-0.684917);
}

double NNfunction_b1b1::synapse0x1f93830() {
   return (neuron0x1f834b0()*0.635457);
}

double NNfunction_b1b1::synapse0x1f93870() {
   return (neuron0x1f84090()*0.958872);
}

double NNfunction_b1b1::synapse0x1f938b0() {
   return (neuron0x1f84a60()*0.869597);
}

double NNfunction_b1b1::synapse0x1f938f0() {
   return (neuron0x1f758e0()*-0.0261157);
}

double NNfunction_b1b1::synapse0x1f93930() {
   return (neuron0x1f762b0()*1.34726);
}

double NNfunction_b1b1::synapse0x1f93970() {
   return (neuron0x1f76c80()*-0.32995);
}

double NNfunction_b1b1::synapse0x1f939b0() {
   return (neuron0x1f892c0()*-0.607125);
}

double NNfunction_b1b1::synapse0x1f939f0() {
   return (neuron0x1f89b70()*0.149909);
}

double NNfunction_b1b1::synapse0x1f93a30() {
   return (neuron0x1f8a540()*-0.347385);
}

double NNfunction_b1b1::synapse0x1f93a70() {
   return (neuron0x1f8af10()*-0.807641);
}

double NNfunction_b1b1::synapse0x1f93df0() {
   return (neuron0x1f66e90()*0.0142644);
}

double NNfunction_b1b1::synapse0x1f93e30() {
   return (neuron0x1f677e0()*0.0436825);
}

double NNfunction_b1b1::synapse0x1f93e70() {
   return (neuron0x1f682c0()*-0.115345);
}

double NNfunction_b1b1::synapse0x1f93eb0() {
   return (neuron0x1f67d60()*0.112938);
}

double NNfunction_b1b1::synapse0x1f93ef0() {
   return (neuron0x1f690a0()*1.70744);
}

double NNfunction_b1b1::synapse0x1f93f30() {
   return (neuron0x1f69a70()*-0.175068);
}

double NNfunction_b1b1::synapse0x1f93f70() {
   return (neuron0x1f6a840()*-0.0872525);
}

double NNfunction_b1b1::synapse0x1f93fb0() {
   return (neuron0x1f6b210()*0.0008559);
}

double NNfunction_b1b1::synapse0x1f93ff0() {
   return (neuron0x1f6bbe0()*-4.03949);
}

double NNfunction_b1b1::synapse0x1f94030() {
   return (neuron0x1f6c6c0()*-0.0310235);
}

double NNfunction_b1b1::synapse0x1f94070() {
   return (neuron0x1f6d090()*0.0289626);
}

double NNfunction_b1b1::synapse0x1f940b0() {
   return (neuron0x1f6a170()*-0.124023);
}

double NNfunction_b1b1::synapse0x1f940f0() {
   return (neuron0x1f6ec40()*-0.261484);
}

double NNfunction_b1b1::synapse0x1f94130() {
   return (neuron0x1f6f610()*-0.00651117);
}

double NNfunction_b1b1::synapse0x1f94170() {
   return (neuron0x1f6ffe0()*0.0296302);
}

double NNfunction_b1b1::synapse0x1f941b0() {
   return (neuron0x1f709b0()*-0.177723);
}

double NNfunction_b1b1::synapse0x1f93c40() {
   return (neuron0x1f727c0()*-0.342748);
}

double NNfunction_b1b1::synapse0x1f93c80() {
   return (neuron0x1f72aa0()*-0.0276551);
}

double NNfunction_b1b1::synapse0x1f94300() {
   return (neuron0x1f73470()*-0.0617518);
}

double NNfunction_b1b1::synapse0x1f94340() {
   return (neuron0x1f73e40()*-0.036128);
}

double NNfunction_b1b1::synapse0x1f94380() {
   return (neuron0x1f74810()*-0.0221167);
}

double NNfunction_b1b1::synapse0x1f943c0() {
   return (neuron0x1f751e0()*-0.0213238);
}

double NNfunction_b1b1::synapse0x1f94400() {
   return (neuron0x1f6dd30()*-0.183937);
}

double NNfunction_b1b1::synapse0x1f94440() {
   return (neuron0x1f6e700()*-0.374154);
}

double NNfunction_b1b1::synapse0x1f94480() {
   return (neuron0x1f77f70()*-0.0758491);
}

double NNfunction_b1b1::synapse0x1f944c0() {
   return (neuron0x1f78940()*-0.0378605);
}

double NNfunction_b1b1::synapse0x1f94500() {
   return (neuron0x1f79310()*-0.125582);
}

double NNfunction_b1b1::synapse0x1f94540() {
   return (neuron0x1f79ce0()*3.07609);
}

double NNfunction_b1b1::synapse0x1f94580() {
   return (neuron0x1f7a6b0()*-0.0637683);
}

double NNfunction_b1b1::synapse0x1f945c0() {
   return (neuron0x1f7b080()*0.612494);
}

double NNfunction_b1b1::synapse0x1f94600() {
   return (neuron0x1f7ba50()*-0.00350175);
}

double NNfunction_b1b1::synapse0x1f94640() {
   return (neuron0x1f7c420()*-0.0252274);
}

double NNfunction_b1b1::synapse0x1f941f0() {
   return (neuron0x1f724b0()*0.00868848);
}

double NNfunction_b1b1::synapse0x1f94230() {
   return (neuron0x1f7f000()*-0.415869);
}

double NNfunction_b1b1::synapse0x1f94270() {
   return (neuron0x1f7f9d0()*-0.0207809);
}

double NNfunction_b1b1::synapse0x1f942b0() {
   return (neuron0x1f803a0()*0.0513334);
}

double NNfunction_b1b1::synapse0x1f94890() {
   return (neuron0x1f80d70()*0.0890711);
}

double NNfunction_b1b1::synapse0x1f948d0() {
   return (neuron0x1f81740()*0.00277987);
}

double NNfunction_b1b1::synapse0x1f94910() {
   return (neuron0x1f82110()*-0.0738484);
}

double NNfunction_b1b1::synapse0x1f94950() {
   return (neuron0x1f82ae0()*0.108341);
}

double NNfunction_b1b1::synapse0x1f94990() {
   return (neuron0x1f834b0()*0.0553534);
}

double NNfunction_b1b1::synapse0x1f949d0() {
   return (neuron0x1f84090()*-0.0602776);
}

double NNfunction_b1b1::synapse0x1f94a10() {
   return (neuron0x1f84a60()*2.66186);
}

double NNfunction_b1b1::synapse0x1f94a50() {
   return (neuron0x1f758e0()*-0.0789326);
}

double NNfunction_b1b1::synapse0x1f94a90() {
   return (neuron0x1f762b0()*-0.0740565);
}

double NNfunction_b1b1::synapse0x1f94ad0() {
   return (neuron0x1f76c80()*-0.000803636);
}

double NNfunction_b1b1::synapse0x1f94b10() {
   return (neuron0x1f892c0()*-0.137515);
}

double NNfunction_b1b1::synapse0x1f94b50() {
   return (neuron0x1f89b70()*0.367529);
}

double NNfunction_b1b1::synapse0x1f94b90() {
   return (neuron0x1f8a540()*-0.00110832);
}

double NNfunction_b1b1::synapse0x1f94bd0() {
   return (neuron0x1f8af10()*-0.120512);
}

double NNfunction_b1b1::synapse0x1f94f50() {
   return (neuron0x1f66e90()*-5.56592);
}

double NNfunction_b1b1::synapse0x1f94f90() {
   return (neuron0x1f677e0()*-1.1393);
}

double NNfunction_b1b1::synapse0x1f94fd0() {
   return (neuron0x1f682c0()*0.771917);
}

double NNfunction_b1b1::synapse0x1f95010() {
   return (neuron0x1f67d60()*-2.02098);
}

double NNfunction_b1b1::synapse0x1f95050() {
   return (neuron0x1f690a0()*-2.03324);
}

double NNfunction_b1b1::synapse0x1f95090() {
   return (neuron0x1f69a70()*-1.2287);
}

double NNfunction_b1b1::synapse0x1f950d0() {
   return (neuron0x1f6a840()*-1.457);
}

double NNfunction_b1b1::synapse0x1f95110() {
   return (neuron0x1f6b210()*1.14275);
}

double NNfunction_b1b1::synapse0x1f95150() {
   return (neuron0x1f6bbe0()*-2.17369);
}

double NNfunction_b1b1::synapse0x1f95190() {
   return (neuron0x1f6c6c0()*0.540063);
}

double NNfunction_b1b1::synapse0x1f951d0() {
   return (neuron0x1f6d090()*-1.07625);
}

double NNfunction_b1b1::synapse0x1f95210() {
   return (neuron0x1f6a170()*4.30661);
}

double NNfunction_b1b1::synapse0x1f95250() {
   return (neuron0x1f6ec40()*-0.122381);
}

double NNfunction_b1b1::synapse0x1f95290() {
   return (neuron0x1f6f610()*-2.56114);
}

double NNfunction_b1b1::synapse0x1f952d0() {
   return (neuron0x1f6ffe0()*-1.50309);
}

double NNfunction_b1b1::synapse0x1f95310() {
   return (neuron0x1f709b0()*-2.23588);
}

double NNfunction_b1b1::synapse0x1f94da0() {
   return (neuron0x1f727c0()*4.96361);
}

double NNfunction_b1b1::synapse0x1f94de0() {
   return (neuron0x1f72aa0()*1.05226);
}

double NNfunction_b1b1::synapse0x1f95460() {
   return (neuron0x1f73470()*-2.9276);
}

double NNfunction_b1b1::synapse0x1f954a0() {
   return (neuron0x1f73e40()*1.58919);
}

double NNfunction_b1b1::synapse0x1f954e0() {
   return (neuron0x1f74810()*-0.777491);
}

double NNfunction_b1b1::synapse0x1f95520() {
   return (neuron0x1f751e0()*-0.934977);
}

double NNfunction_b1b1::synapse0x1f95560() {
   return (neuron0x1f6dd30()*-0.68291);
}

double NNfunction_b1b1::synapse0x1f955a0() {
   return (neuron0x1f6e700()*3.04647);
}

double NNfunction_b1b1::synapse0x1f955e0() {
   return (neuron0x1f77f70()*4.18323);
}

double NNfunction_b1b1::synapse0x1f95620() {
   return (neuron0x1f78940()*0.0191637);
}

double NNfunction_b1b1::synapse0x1f95660() {
   return (neuron0x1f79310()*3.12934);
}

double NNfunction_b1b1::synapse0x1f956a0() {
   return (neuron0x1f79ce0()*-1.3431);
}

double NNfunction_b1b1::synapse0x1f956e0() {
   return (neuron0x1f7a6b0()*-0.233119);
}

double NNfunction_b1b1::synapse0x1f95720() {
   return (neuron0x1f7b080()*2.4448);
}

double NNfunction_b1b1::synapse0x1f95760() {
   return (neuron0x1f7ba50()*0.0936071);
}

double NNfunction_b1b1::synapse0x1f957a0() {
   return (neuron0x1f7c420()*2.2517);
}

double NNfunction_b1b1::synapse0x1f95350() {
   return (neuron0x1f724b0()*-4.45715);
}

double NNfunction_b1b1::synapse0x1f95390() {
   return (neuron0x1f7f000()*-0.887183);
}

double NNfunction_b1b1::synapse0x1f953d0() {
   return (neuron0x1f7f9d0()*1.21352);
}

double NNfunction_b1b1::synapse0x1f95410() {
   return (neuron0x1f803a0()*0.584718);
}

double NNfunction_b1b1::synapse0x1f959f0() {
   return (neuron0x1f80d70()*-1.23295);
}

double NNfunction_b1b1::synapse0x1f95a30() {
   return (neuron0x1f81740()*-0.685121);
}

double NNfunction_b1b1::synapse0x1f95a70() {
   return (neuron0x1f82110()*2.40844);
}

double NNfunction_b1b1::synapse0x1f95ab0() {
   return (neuron0x1f82ae0()*-1.21447);
}

double NNfunction_b1b1::synapse0x1f95af0() {
   return (neuron0x1f834b0()*-1.4154);
}

double NNfunction_b1b1::synapse0x1f95b30() {
   return (neuron0x1f84090()*0.90718);
}

double NNfunction_b1b1::synapse0x1f95b70() {
   return (neuron0x1f84a60()*-0.0534008);
}

double NNfunction_b1b1::synapse0x1f95bb0() {
   return (neuron0x1f758e0()*1.54595);
}

double NNfunction_b1b1::synapse0x1f95bf0() {
   return (neuron0x1f762b0()*0.834553);
}

double NNfunction_b1b1::synapse0x1f95c30() {
   return (neuron0x1f76c80()*-1.65086);
}

double NNfunction_b1b1::synapse0x1f95c70() {
   return (neuron0x1f892c0()*0.260867);
}

double NNfunction_b1b1::synapse0x1f95cb0() {
   return (neuron0x1f89b70()*0.61773);
}

double NNfunction_b1b1::synapse0x1f95cf0() {
   return (neuron0x1f8a540()*0.13452);
}

double NNfunction_b1b1::synapse0x1f95d30() {
   return (neuron0x1f8af10()*2.49808);
}

double NNfunction_b1b1::synapse0x1f95f90() {
   return (neuron0x1f92110()*-10.4803);
}

double NNfunction_b1b1::synapse0x1f95fd0() {
   return (neuron0x1f924b0()*2.80128);
}

double NNfunction_b1b1::synapse0x1f96010() {
   return (neuron0x1f92950()*7.19006);
}

double NNfunction_b1b1::synapse0x1f96050() {
   return (neuron0x1f93ab0()*-10.2329);
}

double NNfunction_b1b1::synapse0x1f96090() {
   return (neuron0x1f94c10()*11.6676);
}

