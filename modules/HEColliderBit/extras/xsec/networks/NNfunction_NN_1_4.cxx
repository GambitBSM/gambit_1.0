#include "NNfunction_NN_1_4.h"
#include <cmath>

double NNfunction_NN_1_4::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.2681)/15.1263;
   input1 = (in1 - -51.889)/305.376;
   input2 = (in2 - 254.094)/244.526;
   input3 = (in3 - -26.8721)/850.529;
   input4 = (in4 - 1083.7)/919.855;
   input5 = (in5 - 936.14)/951.004;
   input6 = (in6 - 943.293)/950.507;
   input7 = (in7 - 960.201)/928.675;
   input8 = (in8 - 939.668)/976.538;
   input9 = (in9 - 921.134)/963.876;
   input10 = (in10 - 985.9)/954.982;
   input11 = (in11 - 530.68)/733.446;
   input12 = (in12 - 721.038)/867.212;
   input13 = (in13 - 499.791)/520.58;
   input14 = (in14 - 706.097)/803.145;
   input15 = (in15 - 705.327)/798.178;
   input16 = (in16 - 538.232)/570.208;
   input17 = (in17 - 738.962)/884.486;
   input18 = (in18 - 746.019)/895.081;
   input19 = (in19 - 763.455)/856.491;
   input20 = (in20 - -3.52157)/493.767;
   input21 = (in21 - -7.08235)/1136.36;
   input22 = (in22 - 0.277533)/1210.5;
   input23 = (in23 - -45.8411)/236.918;
   switch(index) {
     case 0:
         return neuron0x1b8b780();
     default:
         return 0.;
   }
}

double NNfunction_NN_1_4::Value(int index, double* input) {
   input0 = (input[0] - 23.2681)/15.1263;
   input1 = (input[1] - -51.889)/305.376;
   input2 = (input[2] - 254.094)/244.526;
   input3 = (input[3] - -26.8721)/850.529;
   input4 = (input[4] - 1083.7)/919.855;
   input5 = (input[5] - 936.14)/951.004;
   input6 = (input[6] - 943.293)/950.507;
   input7 = (input[7] - 960.201)/928.675;
   input8 = (input[8] - 939.668)/976.538;
   input9 = (input[9] - 921.134)/963.876;
   input10 = (input[10] - 985.9)/954.982;
   input11 = (input[11] - 530.68)/733.446;
   input12 = (input[12] - 721.038)/867.212;
   input13 = (input[13] - 499.791)/520.58;
   input14 = (input[14] - 706.097)/803.145;
   input15 = (input[15] - 705.327)/798.178;
   input16 = (input[16] - 538.232)/570.208;
   input17 = (input[17] - 738.962)/884.486;
   input18 = (input[18] - 746.019)/895.081;
   input19 = (input[19] - 763.455)/856.491;
   input20 = (input[20] - -3.52157)/493.767;
   input21 = (input[21] - -7.08235)/1136.36;
   input22 = (input[22] - 0.277533)/1210.5;
   input23 = (input[23] - -45.8411)/236.918;
   switch(index) {
     case 0:
         return neuron0x1b8b780();
     default:
         return 0.;
   }
}

double NNfunction_NN_1_4::neuron0x1b57840() {
   return input0;
}

double NNfunction_NN_1_4::neuron0x1b57b80() {
   return input1;
}

double NNfunction_NN_1_4::neuron0x1b57ec0() {
   return input2;
}

double NNfunction_NN_1_4::neuron0x1b58200() {
   return input3;
}

double NNfunction_NN_1_4::neuron0x1b58540() {
   return input4;
}

double NNfunction_NN_1_4::neuron0x1b58880() {
   return input5;
}

double NNfunction_NN_1_4::neuron0x1b58bc0() {
   return input6;
}

double NNfunction_NN_1_4::neuron0x1b58f00() {
   return input7;
}

double NNfunction_NN_1_4::neuron0x1b59240() {
   return input8;
}

double NNfunction_NN_1_4::neuron0x1b59580() {
   return input9;
}

double NNfunction_NN_1_4::neuron0x1b598c0() {
   return input10;
}

double NNfunction_NN_1_4::neuron0x1b59c00() {
   return input11;
}

double NNfunction_NN_1_4::neuron0x1b59f40() {
   return input12;
}

double NNfunction_NN_1_4::neuron0x1b5a280() {
   return input13;
}

double NNfunction_NN_1_4::neuron0x1b5a5c0() {
   return input14;
}

double NNfunction_NN_1_4::neuron0x1b5a900() {
   return input15;
}

double NNfunction_NN_1_4::neuron0x1b5ac40() {
   return input16;
}

double NNfunction_NN_1_4::neuron0x1b5b1a0() {
   return input17;
}

double NNfunction_NN_1_4::neuron0x1b5b3c0() {
   return input18;
}

double NNfunction_NN_1_4::neuron0x1b5b700() {
   return input19;
}

double NNfunction_NN_1_4::neuron0x1b5ba40() {
   return input20;
}

double NNfunction_NN_1_4::neuron0x1b5bd80() {
   return input21;
}

double NNfunction_NN_1_4::neuron0x1b5c0c0() {
   return input22;
}

double NNfunction_NN_1_4::neuron0x1b5c400() {
   return input23;
}

double NNfunction_NN_1_4::input0x1b5c8a0() {
   double input = 2.34601;
   input += synapse0x19176b0();
   input += synapse0x1b57700();
   input += synapse0x1b57740();
   input += synapse0x1b5cb50();
   input += synapse0x1b5cb90();
   input += synapse0x1b5cbd0();
   input += synapse0x1b5cc10();
   input += synapse0x1b5cc50();
   input += synapse0x1b5cc90();
   input += synapse0x1b5ccd0();
   input += synapse0x1b5cd10();
   input += synapse0x1b5cd50();
   input += synapse0x1b5cd90();
   input += synapse0x1b5cdd0();
   input += synapse0x1b5ce10();
   input += synapse0x1b5ce50();
   input += synapse0x1b57670();
   input += synapse0x1b576b0();
   input += synapse0x1908f10();
   input += synapse0x1908f50();
   input += synapse0x1b5d0b0();
   input += synapse0x1b5d0f0();
   input += synapse0x1b5d130();
   input += synapse0x1b5d170();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b5c8a0() {
   double input = input0x1b5c8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b5d1b0() {
   double input = 3.98816;
   input += synapse0x1b5d4f0();
   input += synapse0x1b5d530();
   input += synapse0x1b5d570();
   input += synapse0x1b5d5b0();
   input += synapse0x1b5d5f0();
   input += synapse0x1b5d630();
   input += synapse0x1b5d670();
   input += synapse0x1b5d6b0();
   input += synapse0x1b5d6f0();
   input += synapse0x1b5cfa0();
   input += synapse0x1b5cfe0();
   input += synapse0x1b5d020();
   input += synapse0x1b5d060();
   input += synapse0x1b5d940();
   input += synapse0x1b5d980();
   input += synapse0x1b5d9c0();
   input += synapse0x1b5d340();
   input += synapse0x1b5d380();
   input += synapse0x1b5db10();
   input += synapse0x1b5db50();
   input += synapse0x1b5db90();
   input += synapse0x1b5dbd0();
   input += synapse0x1b5dc10();
   input += synapse0x1b5dc50();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b5d1b0() {
   double input = input0x1b5d1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b5dc90() {
   double input = -0.138122;
   input += synapse0x1b5dfd0();
   input += synapse0x1b5e010();
   input += synapse0x1b5e050();
   input += synapse0x1b5e090();
   input += synapse0x1b5e0d0();
   input += synapse0x1b5e110();
   input += synapse0x1b5e150();
   input += synapse0x1b5e190();
   input += synapse0x1b5e1d0();
   input += synapse0x1b5e210();
   input += synapse0x1b5e250();
   input += synapse0x1b5e290();
   input += synapse0x1b5e2d0();
   input += synapse0x1b5e310();
   input += synapse0x1b5e350();
   input += synapse0x1b5e390();
   input += synapse0x1b5de20();
   input += synapse0x1b5de60();
   input += synapse0x1916d80();
   input += synapse0x1916dc0();
   input += synapse0x1b468d0();
   input += synapse0x1b46910();
   input += synapse0x1b46950();
   input += synapse0x1b57780();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b5dc90() {
   double input = input0x1b5dc90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1917520() {
   double input = -1.78572;
   input += synapse0x1b5d8e0();
   input += synapse0x1b577c0();
   input += synapse0x1b57800();
   input += synapse0x1b5e4e0();
   input += synapse0x1b5e520();
   input += synapse0x1b5e560();
   input += synapse0x1b5e5a0();
   input += synapse0x1b5e5e0();
   input += synapse0x1b5e620();
   input += synapse0x1b5e660();
   input += synapse0x1b5e6a0();
   input += synapse0x1b5e6e0();
   input += synapse0x1b5e720();
   input += synapse0x1b5e760();
   input += synapse0x1b5e7a0();
   input += synapse0x1b5e7e0();
   input += synapse0x1b5d730();
   input += synapse0x1b5d770();
   input += synapse0x1b5e930();
   input += synapse0x1b5e970();
   input += synapse0x1b5e9b0();
   input += synapse0x1b5e9f0();
   input += synapse0x1b5ea30();
   input += synapse0x1b5ea70();
   return input;
}

double NNfunction_NN_1_4::neuron0x1917520() {
   double input = input0x1917520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b5eab0() {
   double input = -2.28546;
   input += synapse0x1b5edf0();
   input += synapse0x1b5ee30();
   input += synapse0x1b5ee70();
   input += synapse0x1b5eeb0();
   input += synapse0x1b5eef0();
   input += synapse0x1b5ef30();
   input += synapse0x1b5ef70();
   input += synapse0x1b5efb0();
   input += synapse0x1b5eff0();
   input += synapse0x1b5f030();
   input += synapse0x1b5f070();
   input += synapse0x1b5f0b0();
   input += synapse0x1b5f0f0();
   input += synapse0x1b5f130();
   input += synapse0x1b5f170();
   input += synapse0x1b5f1b0();
   input += synapse0x1b5ec40();
   input += synapse0x1b5ec80();
   input += synapse0x1b5f300();
   input += synapse0x1b5f340();
   input += synapse0x1b5f380();
   input += synapse0x1b5f3c0();
   input += synapse0x1b5f400();
   input += synapse0x1b5f440();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b5eab0() {
   double input = input0x1b5eab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b5f480() {
   double input = -3.03347;
   input += synapse0x1b5f7c0();
   input += synapse0x1b5f800();
   input += synapse0x1b5f840();
   input += synapse0x1b5f880();
   input += synapse0x1b5f8c0();
   input += synapse0x1b5f900();
   input += synapse0x1b5f940();
   input += synapse0x1b5f980();
   input += synapse0x1b5f9c0();
   input += synapse0x1917110();
   input += synapse0x1917150();
   input += synapse0x1917190();
   input += synapse0x19171d0();
   input += synapse0x1917210();
   input += synapse0x1917250();
   input += synapse0x1917290();
   input += synapse0x1b5f610();
   input += synapse0x1b5f650();
   input += synapse0x19173e0();
   input += synapse0x1917420();
   input += synapse0x1917460();
   input += synapse0x19174a0();
   input += synapse0x19174e0();
   input += synapse0x1b60210();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b5f480() {
   double input = input0x1b5f480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b60250() {
   double input = 0.26497;
   input += synapse0x1b60590();
   input += synapse0x1b605d0();
   input += synapse0x1b60610();
   input += synapse0x1b60650();
   input += synapse0x1b60690();
   input += synapse0x1b606d0();
   input += synapse0x1b60710();
   input += synapse0x1b60750();
   input += synapse0x1b60790();
   input += synapse0x1b607d0();
   input += synapse0x1b60810();
   input += synapse0x1b60850();
   input += synapse0x1b60890();
   input += synapse0x1b608d0();
   input += synapse0x1b60910();
   input += synapse0x1b60950();
   input += synapse0x1b603e0();
   input += synapse0x1b60420();
   input += synapse0x1b60aa0();
   input += synapse0x1b60ae0();
   input += synapse0x1b60b20();
   input += synapse0x1b60b60();
   input += synapse0x1b60ba0();
   input += synapse0x1b60be0();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b60250() {
   double input = input0x1b60250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b60c20() {
   double input = 0.0596338;
   input += synapse0x1b60f60();
   input += synapse0x1b60fa0();
   input += synapse0x1b60fe0();
   input += synapse0x1b61020();
   input += synapse0x1b61060();
   input += synapse0x1b610a0();
   input += synapse0x1b610e0();
   input += synapse0x1b61120();
   input += synapse0x1b61160();
   input += synapse0x1b611a0();
   input += synapse0x1b611e0();
   input += synapse0x1b61220();
   input += synapse0x1b61260();
   input += synapse0x1b612a0();
   input += synapse0x1b612e0();
   input += synapse0x1b61320();
   input += synapse0x1b60db0();
   input += synapse0x1b60df0();
   input += synapse0x1b61470();
   input += synapse0x1b614b0();
   input += synapse0x1b614f0();
   input += synapse0x1b61530();
   input += synapse0x1b61570();
   input += synapse0x1b615b0();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b60c20() {
   double input = input0x1b60c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b615f0() {
   double input = 0.0988112;
   input += synapse0x1b5b090();
   input += synapse0x1b5b0d0();
   input += synapse0x1b5b110();
   input += synapse0x1b5b150();
   input += synapse0x1b61b40();
   input += synapse0x1b61b80();
   input += synapse0x1b61bc0();
   input += synapse0x1b61c00();
   input += synapse0x1b61c40();
   input += synapse0x1b61c80();
   input += synapse0x1b61cc0();
   input += synapse0x1b61d00();
   input += synapse0x1b61d40();
   input += synapse0x1b61d80();
   input += synapse0x1b61dc0();
   input += synapse0x1b61e00();
   input += synapse0x1b61780();
   input += synapse0x1b617c0();
   input += synapse0x1b61f50();
   input += synapse0x1b61f90();
   input += synapse0x1b61fd0();
   input += synapse0x1b62010();
   input += synapse0x1b62050();
   input += synapse0x1b62090();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b615f0() {
   double input = input0x1b615f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b620d0() {
   double input = 0.758289;
   input += synapse0x1b62410();
   input += synapse0x1b62450();
   input += synapse0x1b62490();
   input += synapse0x1b624d0();
   input += synapse0x1b62510();
   input += synapse0x1b62550();
   input += synapse0x1b62590();
   input += synapse0x1b625d0();
   input += synapse0x1b62610();
   input += synapse0x1b62650();
   input += synapse0x1b62690();
   input += synapse0x1b626d0();
   input += synapse0x1b62710();
   input += synapse0x1b62750();
   input += synapse0x1b62790();
   input += synapse0x1b627d0();
   input += synapse0x1b62260();
   input += synapse0x1b622a0();
   input += synapse0x1b62920();
   input += synapse0x1b62960();
   input += synapse0x1b629a0();
   input += synapse0x1b629e0();
   input += synapse0x1b62a20();
   input += synapse0x1b62a60();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b620d0() {
   double input = input0x1b620d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b62aa0() {
   double input = 2.1552;
   input += synapse0x1b62de0();
   input += synapse0x1b62e20();
   input += synapse0x1b62e60();
   input += synapse0x1b62ea0();
   input += synapse0x1b62ee0();
   input += synapse0x1b62f20();
   input += synapse0x1b62f60();
   input += synapse0x1b62fa0();
   input += synapse0x1b62fe0();
   input += synapse0x1b63020();
   input += synapse0x1b63060();
   input += synapse0x1b630a0();
   input += synapse0x1b630e0();
   input += synapse0x1b63120();
   input += synapse0x1b63160();
   input += synapse0x1b631a0();
   input += synapse0x1b62c30();
   input += synapse0x1b62c70();
   input += synapse0x1b5fa00();
   input += synapse0x1b5fa40();
   input += synapse0x1b5fa80();
   input += synapse0x1b5fac0();
   input += synapse0x1b5fb00();
   input += synapse0x1b5fb40();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b62aa0() {
   double input = input0x1b62aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b5fb80() {
   double input = -0.198166;
   input += synapse0x1b5fec0();
   input += synapse0x1b5ff00();
   input += synapse0x1b5ff40();
   input += synapse0x1b5ff80();
   input += synapse0x1b5ffc0();
   input += synapse0x1b60000();
   input += synapse0x1b60040();
   input += synapse0x1b60080();
   input += synapse0x1b600c0();
   input += synapse0x1b60100();
   input += synapse0x1b60140();
   input += synapse0x1b60180();
   input += synapse0x1b601c0();
   input += synapse0x1b64300();
   input += synapse0x1b64340();
   input += synapse0x1b64380();
   input += synapse0x1b5fd10();
   input += synapse0x1b5fd50();
   input += synapse0x1b644d0();
   input += synapse0x1b64510();
   input += synapse0x1b64550();
   input += synapse0x1b64590();
   input += synapse0x1b645d0();
   input += synapse0x1b64610();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b5fb80() {
   double input = input0x1b5fb80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b64650() {
   double input = 0.492814;
   input += synapse0x1b64990();
   input += synapse0x1b649d0();
   input += synapse0x1b64a10();
   input += synapse0x1b64a50();
   input += synapse0x1b64a90();
   input += synapse0x1b64ad0();
   input += synapse0x1b64b10();
   input += synapse0x1b64b50();
   input += synapse0x1b64b90();
   input += synapse0x1b64bd0();
   input += synapse0x1b64c10();
   input += synapse0x1b64c50();
   input += synapse0x1b64c90();
   input += synapse0x1b64cd0();
   input += synapse0x1b64d10();
   input += synapse0x1b64d50();
   input += synapse0x1b647e0();
   input += synapse0x1b64820();
   input += synapse0x1b64ea0();
   input += synapse0x1b64ee0();
   input += synapse0x1b64f20();
   input += synapse0x1b64f60();
   input += synapse0x1b64fa0();
   input += synapse0x1b64fe0();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b64650() {
   double input = input0x1b64650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b65020() {
   double input = 1.33094;
   input += synapse0x1b65360();
   input += synapse0x1b653a0();
   input += synapse0x1b653e0();
   input += synapse0x1b65420();
   input += synapse0x1b65460();
   input += synapse0x1b654a0();
   input += synapse0x1b654e0();
   input += synapse0x1b65520();
   input += synapse0x1b65560();
   input += synapse0x1b655a0();
   input += synapse0x1b655e0();
   input += synapse0x1b65620();
   input += synapse0x1b65660();
   input += synapse0x1b656a0();
   input += synapse0x1b656e0();
   input += synapse0x1b65720();
   input += synapse0x1b651b0();
   input += synapse0x1b651f0();
   input += synapse0x1b65870();
   input += synapse0x1b658b0();
   input += synapse0x1b658f0();
   input += synapse0x1b65930();
   input += synapse0x1b65970();
   input += synapse0x1b659b0();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b65020() {
   double input = input0x1b65020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b659f0() {
   double input = 1.27257;
   input += synapse0x1b65d30();
   input += synapse0x1b65d70();
   input += synapse0x1b65db0();
   input += synapse0x1b65df0();
   input += synapse0x1b65e30();
   input += synapse0x1b65e70();
   input += synapse0x1b65eb0();
   input += synapse0x1b65ef0();
   input += synapse0x1b65f30();
   input += synapse0x1b65f70();
   input += synapse0x1b65fb0();
   input += synapse0x1b65ff0();
   input += synapse0x1b66030();
   input += synapse0x1b66070();
   input += synapse0x1b660b0();
   input += synapse0x1b660f0();
   input += synapse0x1b65b80();
   input += synapse0x1b65bc0();
   input += synapse0x1b66240();
   input += synapse0x1b66280();
   input += synapse0x1b662c0();
   input += synapse0x1b66300();
   input += synapse0x1b66340();
   input += synapse0x1b66380();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b659f0() {
   double input = input0x1b659f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b663c0() {
   double input = 0.676038;
   input += synapse0x1b66700();
   input += synapse0x1b57a60();
   input += synapse0x1b57aa0();
   input += synapse0x1b57da0();
   input += synapse0x1b57de0();
   input += synapse0x1b580e0();
   input += synapse0x1b58120();
   input += synapse0x1b58420();
   input += synapse0x1b58460();
   input += synapse0x1b58760();
   input += synapse0x1b587a0();
   input += synapse0x1b58aa0();
   input += synapse0x1b58ae0();
   input += synapse0x1b58de0();
   input += synapse0x1b58e20();
   input += synapse0x1b59120();
   input += synapse0x1b59160();
   input += synapse0x1b59460();
   input += synapse0x1b594a0();
   input += synapse0x1b597a0();
   input += synapse0x1b597e0();
   input += synapse0x1b59ae0();
   input += synapse0x1b59b20();
   input += synapse0x1b59e20();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b663c0() {
   double input = input0x1b663c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b681d0() {
   double input = 0.809924;
   input += synapse0x1b59e60();
   input += synapse0x1b5ab20();
   input += synapse0x1b5ab60();
   input += synapse0x1b66550();
   input += synapse0x1b66590();
   input += synapse0x1b5ae60();
   input += synapse0x1b5aea0();
   input += synapse0x1908df0();
   input += synapse0x1908e30();
   input += synapse0x1b5b5e0();
   input += synapse0x1b5b620();
   input += synapse0x1b5b920();
   input += synapse0x1b5b960();
   input += synapse0x1b5bc60();
   input += synapse0x1b5bca0();
   input += synapse0x1b5bfa0();
   input += synapse0x1b5bfe0();
   input += synapse0x1b5c2e0();
   input += synapse0x1b5c320();
   input += synapse0x1b5c620();
   input += synapse0x1b5c660();
   input += synapse0x1b5a160();
   input += synapse0x1b5a1a0();
   input += synapse0x1b68470();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b681d0() {
   double input = input0x1b681d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b684b0() {
   double input = -0.399856;
   input += synapse0x1b687f0();
   input += synapse0x1b68830();
   input += synapse0x1b68870();
   input += synapse0x1b688b0();
   input += synapse0x1b688f0();
   input += synapse0x1b68930();
   input += synapse0x1b68970();
   input += synapse0x1b689b0();
   input += synapse0x1b689f0();
   input += synapse0x1b68a30();
   input += synapse0x1b68a70();
   input += synapse0x1b68ab0();
   input += synapse0x1b68af0();
   input += synapse0x1b68b30();
   input += synapse0x1b68b70();
   input += synapse0x1b68bb0();
   input += synapse0x1b68640();
   input += synapse0x1b68680();
   input += synapse0x1b68d00();
   input += synapse0x1b68d40();
   input += synapse0x1b68d80();
   input += synapse0x1b68dc0();
   input += synapse0x1b68e00();
   input += synapse0x1b68e40();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b684b0() {
   double input = input0x1b684b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b68e80() {
   double input = -0.795374;
   input += synapse0x1b691c0();
   input += synapse0x1b69200();
   input += synapse0x1b69240();
   input += synapse0x1b69280();
   input += synapse0x1b692c0();
   input += synapse0x1b69300();
   input += synapse0x1b69340();
   input += synapse0x1b69380();
   input += synapse0x1b693c0();
   input += synapse0x1b69400();
   input += synapse0x1b69440();
   input += synapse0x1b69480();
   input += synapse0x1b694c0();
   input += synapse0x1b69500();
   input += synapse0x1b69540();
   input += synapse0x1b69580();
   input += synapse0x1b69010();
   input += synapse0x1b69050();
   input += synapse0x1b696d0();
   input += synapse0x1b69710();
   input += synapse0x1b69750();
   input += synapse0x1b69790();
   input += synapse0x1b697d0();
   input += synapse0x1b69810();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b68e80() {
   double input = input0x1b68e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b69850() {
   double input = -0.179638;
   input += synapse0x1b69b90();
   input += synapse0x1b69bd0();
   input += synapse0x1b69c10();
   input += synapse0x1b69c50();
   input += synapse0x1b69c90();
   input += synapse0x1b69cd0();
   input += synapse0x1b69d10();
   input += synapse0x1b69d50();
   input += synapse0x1b69d90();
   input += synapse0x1b69dd0();
   input += synapse0x1b69e10();
   input += synapse0x1b69e50();
   input += synapse0x1b69e90();
   input += synapse0x1b69ed0();
   input += synapse0x1b69f10();
   input += synapse0x1b69f50();
   input += synapse0x1b699e0();
   input += synapse0x1b69a20();
   input += synapse0x1b6a0a0();
   input += synapse0x1b6a0e0();
   input += synapse0x1b6a120();
   input += synapse0x1b6a160();
   input += synapse0x1b6a1a0();
   input += synapse0x1b6a1e0();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b69850() {
   double input = input0x1b69850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b6a220() {
   double input = 2.31196;
   input += synapse0x1b6a560();
   input += synapse0x1b6a5a0();
   input += synapse0x1b6a5e0();
   input += synapse0x1b6a620();
   input += synapse0x1b6a660();
   input += synapse0x1b6a6a0();
   input += synapse0x1b6a6e0();
   input += synapse0x1b6a720();
   input += synapse0x1b6a760();
   input += synapse0x1b6a7a0();
   input += synapse0x1b6a7e0();
   input += synapse0x1b6a820();
   input += synapse0x1b6a860();
   input += synapse0x1b6a8a0();
   input += synapse0x1b6a8e0();
   input += synapse0x1b6a920();
   input += synapse0x1b6a3b0();
   input += synapse0x1b6a3f0();
   input += synapse0x1b6aa70();
   input += synapse0x1b6aab0();
   input += synapse0x1b6aaf0();
   input += synapse0x1b6ab30();
   input += synapse0x1b6ab70();
   input += synapse0x1b6abb0();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b6a220() {
   double input = input0x1b6a220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b6abf0() {
   double input = 0.0320425;
   input += synapse0x1b6af30();
   input += synapse0x1b6af70();
   input += synapse0x1b6afb0();
   input += synapse0x1b6aff0();
   input += synapse0x1b6b030();
   input += synapse0x1b6b070();
   input += synapse0x1b6b0b0();
   input += synapse0x1b6b0f0();
   input += synapse0x1b6b130();
   input += synapse0x1b632f0();
   input += synapse0x1b63330();
   input += synapse0x1b63370();
   input += synapse0x1b633b0();
   input += synapse0x1b633f0();
   input += synapse0x1b63430();
   input += synapse0x1b63470();
   input += synapse0x1b6ad80();
   input += synapse0x1b6adc0();
   input += synapse0x1b635c0();
   input += synapse0x1b63600();
   input += synapse0x1b63640();
   input += synapse0x1b63680();
   input += synapse0x1b636c0();
   input += synapse0x1b63700();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b6abf0() {
   double input = input0x1b6abf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b63740() {
   double input = 0.779971;
   input += synapse0x1b63a80();
   input += synapse0x1b63ac0();
   input += synapse0x1b63b00();
   input += synapse0x1b63b40();
   input += synapse0x1b63b80();
   input += synapse0x1b63bc0();
   input += synapse0x1b63c00();
   input += synapse0x1b63c40();
   input += synapse0x1b63c80();
   input += synapse0x1b63cc0();
   input += synapse0x1b63d00();
   input += synapse0x1b63d40();
   input += synapse0x1b63d80();
   input += synapse0x1b63dc0();
   input += synapse0x1b63e00();
   input += synapse0x1b63e40();
   input += synapse0x1b638d0();
   input += synapse0x1b63910();
   input += synapse0x1b63f90();
   input += synapse0x1b63fd0();
   input += synapse0x1b64010();
   input += synapse0x1b64050();
   input += synapse0x1b64090();
   input += synapse0x1b640d0();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b63740() {
   double input = input0x1b63740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b64110() {
   double input = 0.686417;
   input += synapse0x1b642a0();
   input += synapse0x1b6d330();
   input += synapse0x1b6d370();
   input += synapse0x1b6d3b0();
   input += synapse0x1b6d3f0();
   input += synapse0x1b6d430();
   input += synapse0x1b6d470();
   input += synapse0x1b6d4b0();
   input += synapse0x1b6d4f0();
   input += synapse0x1b6d530();
   input += synapse0x1b6d570();
   input += synapse0x1b6d5b0();
   input += synapse0x1b6d5f0();
   input += synapse0x1b6d630();
   input += synapse0x1b6d670();
   input += synapse0x1b6d6b0();
   input += synapse0x1b6d180();
   input += synapse0x1b6d1c0();
   input += synapse0x1b6d800();
   input += synapse0x1b6d840();
   input += synapse0x1b6d880();
   input += synapse0x1b6d8c0();
   input += synapse0x1b6d900();
   input += synapse0x1b6d940();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b64110() {
   double input = input0x1b64110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b6d980() {
   double input = 0.869834;
   input += synapse0x1b6dcc0();
   input += synapse0x1b6dd00();
   input += synapse0x1b6dd40();
   input += synapse0x1b6dd80();
   input += synapse0x1b6ddc0();
   input += synapse0x1b6de00();
   input += synapse0x1b6de40();
   input += synapse0x1b6de80();
   input += synapse0x1b6dec0();
   input += synapse0x1b6df00();
   input += synapse0x1b6df40();
   input += synapse0x1b6df80();
   input += synapse0x1b6dfc0();
   input += synapse0x1b6e000();
   input += synapse0x1b6e040();
   input += synapse0x1b6e080();
   input += synapse0x1b6db10();
   input += synapse0x1b6db50();
   input += synapse0x1b6e1d0();
   input += synapse0x1b6e210();
   input += synapse0x1b6e250();
   input += synapse0x1b6e290();
   input += synapse0x1b6e2d0();
   input += synapse0x1b6e310();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b6d980() {
   double input = input0x1b6d980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b6e350() {
   double input = 0.952628;
   input += synapse0x1b6e690();
   input += synapse0x1b6e6d0();
   input += synapse0x1b6e710();
   input += synapse0x1b6e750();
   input += synapse0x1b6e790();
   input += synapse0x1b6e7d0();
   input += synapse0x1b6e810();
   input += synapse0x1b6e850();
   input += synapse0x1b6e890();
   input += synapse0x1b6e8d0();
   input += synapse0x1b6e910();
   input += synapse0x1b6e950();
   input += synapse0x1b6e990();
   input += synapse0x1b6e9d0();
   input += synapse0x1b6ea10();
   input += synapse0x1b6ea50();
   input += synapse0x1b6e4e0();
   input += synapse0x1b6e520();
   input += synapse0x1b6eba0();
   input += synapse0x1b6ebe0();
   input += synapse0x1b6ec20();
   input += synapse0x1b6ec60();
   input += synapse0x1b6eca0();
   input += synapse0x1b6ece0();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b6e350() {
   double input = input0x1b6e350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b6ed20() {
   double input = 0.0473614;
   input += synapse0x1b6f060();
   input += synapse0x1b6f0a0();
   input += synapse0x1b6f0e0();
   input += synapse0x1b6f120();
   input += synapse0x1b6f160();
   input += synapse0x1b6f1a0();
   input += synapse0x1b6f1e0();
   input += synapse0x1b6f220();
   input += synapse0x1b6f260();
   input += synapse0x1b6f2a0();
   input += synapse0x1b6f2e0();
   input += synapse0x1b6f320();
   input += synapse0x1b6f360();
   input += synapse0x1b6f3a0();
   input += synapse0x1b6f3e0();
   input += synapse0x1b6f420();
   input += synapse0x1b6eeb0();
   input += synapse0x1b6eef0();
   input += synapse0x1b6f570();
   input += synapse0x1b6f5b0();
   input += synapse0x1b6f5f0();
   input += synapse0x1b6f630();
   input += synapse0x1b6f670();
   input += synapse0x1b6f6b0();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b6ed20() {
   double input = input0x1b6ed20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b6f6f0() {
   double input = 0.17588;
   input += synapse0x1b6fa30();
   input += synapse0x1b6fa70();
   input += synapse0x1b6fab0();
   input += synapse0x1b6faf0();
   input += synapse0x1b6fb30();
   input += synapse0x1b6fb70();
   input += synapse0x1b6fbb0();
   input += synapse0x1b6fbf0();
   input += synapse0x1b6fc30();
   input += synapse0x1b6fc70();
   input += synapse0x1b6fcb0();
   input += synapse0x1b6fcf0();
   input += synapse0x1b6fd30();
   input += synapse0x1b6fd70();
   input += synapse0x1b6fdb0();
   input += synapse0x1b6fdf0();
   input += synapse0x1b6f880();
   input += synapse0x1b6f8c0();
   input += synapse0x1b6ff40();
   input += synapse0x1b6ff80();
   input += synapse0x1b6ffc0();
   input += synapse0x1b70000();
   input += synapse0x1b70040();
   input += synapse0x1b70080();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b6f6f0() {
   double input = input0x1b6f6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b700c0() {
   double input = -0.675266;
   input += synapse0x1b70400();
   input += synapse0x1b70440();
   input += synapse0x1b70480();
   input += synapse0x1b704c0();
   input += synapse0x1b70500();
   input += synapse0x1b70540();
   input += synapse0x1b70580();
   input += synapse0x1b705c0();
   input += synapse0x1b70600();
   input += synapse0x1b70640();
   input += synapse0x1b70680();
   input += synapse0x1b706c0();
   input += synapse0x1b70700();
   input += synapse0x1b70740();
   input += synapse0x1b70780();
   input += synapse0x1b707c0();
   input += synapse0x1b70250();
   input += synapse0x1b70290();
   input += synapse0x1b70910();
   input += synapse0x1b70950();
   input += synapse0x1b70990();
   input += synapse0x1b709d0();
   input += synapse0x1b70a10();
   input += synapse0x1b70a50();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b700c0() {
   double input = input0x1b700c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b70a90() {
   double input = -2.20282;
   input += synapse0x1b70dd0();
   input += synapse0x1b70e10();
   input += synapse0x1b70e50();
   input += synapse0x1b70e90();
   input += synapse0x1b70ed0();
   input += synapse0x1b70f10();
   input += synapse0x1b70f50();
   input += synapse0x1b70f90();
   input += synapse0x1b70fd0();
   input += synapse0x1b71010();
   input += synapse0x1b71050();
   input += synapse0x1b71090();
   input += synapse0x1b710d0();
   input += synapse0x1b71110();
   input += synapse0x1b71150();
   input += synapse0x1b71190();
   input += synapse0x1b70c20();
   input += synapse0x1b70c60();
   input += synapse0x1b712e0();
   input += synapse0x1b71320();
   input += synapse0x1b71360();
   input += synapse0x1b713a0();
   input += synapse0x1b713e0();
   input += synapse0x1b71420();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b70a90() {
   double input = input0x1b70a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b71460() {
   double input = 0.204573;
   input += synapse0x1b717a0();
   input += synapse0x1b717e0();
   input += synapse0x1b71820();
   input += synapse0x1b71860();
   input += synapse0x1b718a0();
   input += synapse0x1b718e0();
   input += synapse0x1b71920();
   input += synapse0x1b71960();
   input += synapse0x1b719a0();
   input += synapse0x1b719e0();
   input += synapse0x1b71a20();
   input += synapse0x1b71a60();
   input += synapse0x1b71aa0();
   input += synapse0x1b71ae0();
   input += synapse0x1b71b20();
   input += synapse0x1b71b60();
   input += synapse0x1b715f0();
   input += synapse0x1b71630();
   input += synapse0x1b71cb0();
   input += synapse0x1b71cf0();
   input += synapse0x1b71d30();
   input += synapse0x1b71d70();
   input += synapse0x1b71db0();
   input += synapse0x1b71df0();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b71460() {
   double input = input0x1b71460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b71e30() {
   double input = -1.4477;
   input += synapse0x1b72170();
   input += synapse0x1b66740();
   input += synapse0x1b66780();
   input += synapse0x1b667c0();
   input += synapse0x1b66a10();
   input += synapse0x1b66a50();
   input += synapse0x1b66a90();
   input += synapse0x1b66ce0();
   input += synapse0x1b66d20();
   input += synapse0x1b66f70();
   input += synapse0x1b66fb0();
   input += synapse0x1b66ff0();
   input += synapse0x1b67240();
   input += synapse0x1b67280();
   input += synapse0x1b674d0();
   input += synapse0x1b67510();
   input += synapse0x1b71fc0();
   input += synapse0x1b72000();
   input += synapse0x1b67660();
   input += synapse0x1b67b70();
   input += synapse0x1b67bb0();
   input += synapse0x1b67bf0();
   input += synapse0x1b67e40();
   input += synapse0x1b67e80();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b71e30() {
   double input = input0x1b71e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b67ec0() {
   double input = -4.82584;
   input += synapse0x1b67730();
   input += synapse0x1b67770();
   input += synapse0x1b677b0();
   input += synapse0x1b677f0();
   input += synapse0x1b68170();
   input += synapse0x1b744c0();
   input += synapse0x1b74500();
   input += synapse0x1b74540();
   input += synapse0x1b74580();
   input += synapse0x1b745c0();
   input += synapse0x1b74600();
   input += synapse0x1b74640();
   input += synapse0x1b74680();
   input += synapse0x1b746c0();
   input += synapse0x1b74700();
   input += synapse0x1b74740();
   input += synapse0x1b68050();
   input += synapse0x1b68090();
   input += synapse0x1b74890();
   input += synapse0x1b748d0();
   input += synapse0x1b74910();
   input += synapse0x1b74950();
   input += synapse0x1b74990();
   input += synapse0x1b749d0();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b67ec0() {
   double input = input0x1b67ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b74a10() {
   double input = 0.788348;
   input += synapse0x1b74d50();
   input += synapse0x1b74d90();
   input += synapse0x1b74dd0();
   input += synapse0x1b74e10();
   input += synapse0x1b74e50();
   input += synapse0x1b74e90();
   input += synapse0x1b74ed0();
   input += synapse0x1b74f10();
   input += synapse0x1b74f50();
   input += synapse0x1b74f90();
   input += synapse0x1b74fd0();
   input += synapse0x1b75010();
   input += synapse0x1b75050();
   input += synapse0x1b75090();
   input += synapse0x1b750d0();
   input += synapse0x1b75110();
   input += synapse0x1b74ba0();
   input += synapse0x1b74be0();
   input += synapse0x1b75260();
   input += synapse0x1b752a0();
   input += synapse0x1b752e0();
   input += synapse0x1b75320();
   input += synapse0x1b75360();
   input += synapse0x1b753a0();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b74a10() {
   double input = input0x1b74a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b753e0() {
   double input = -0.187334;
   input += synapse0x1b75720();
   input += synapse0x1b75760();
   input += synapse0x1b757a0();
   input += synapse0x1b757e0();
   input += synapse0x1b75820();
   input += synapse0x1b75860();
   input += synapse0x1b758a0();
   input += synapse0x1b758e0();
   input += synapse0x1b75920();
   input += synapse0x1b75960();
   input += synapse0x1b759a0();
   input += synapse0x1b759e0();
   input += synapse0x1b75a20();
   input += synapse0x1b75a60();
   input += synapse0x1b75aa0();
   input += synapse0x1b75ae0();
   input += synapse0x1b75570();
   input += synapse0x1b755b0();
   input += synapse0x1b75c30();
   input += synapse0x1b75c70();
   input += synapse0x1b75cb0();
   input += synapse0x1b75cf0();
   input += synapse0x1b75d30();
   input += synapse0x1b75d70();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b753e0() {
   double input = input0x1b753e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b75db0() {
   double input = -0.370605;
   input += synapse0x1b760f0();
   input += synapse0x1b76130();
   input += synapse0x1b76170();
   input += synapse0x1b761b0();
   input += synapse0x1b761f0();
   input += synapse0x1b76230();
   input += synapse0x1b76270();
   input += synapse0x1b762b0();
   input += synapse0x1b762f0();
   input += synapse0x1b76330();
   input += synapse0x1b76370();
   input += synapse0x1b763b0();
   input += synapse0x1b763f0();
   input += synapse0x1b76430();
   input += synapse0x1b76470();
   input += synapse0x1b764b0();
   input += synapse0x1b75f40();
   input += synapse0x1b75f80();
   input += synapse0x1b76600();
   input += synapse0x1b76640();
   input += synapse0x1b76680();
   input += synapse0x1b766c0();
   input += synapse0x1b76700();
   input += synapse0x1b76740();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b75db0() {
   double input = input0x1b75db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b76780() {
   double input = 5.70758;
   input += synapse0x1b76ac0();
   input += synapse0x1b76b00();
   input += synapse0x1b76b40();
   input += synapse0x1b76b80();
   input += synapse0x1b76bc0();
   input += synapse0x1b76c00();
   input += synapse0x1b76c40();
   input += synapse0x1b76c80();
   input += synapse0x1b76cc0();
   input += synapse0x1b76d00();
   input += synapse0x1b76d40();
   input += synapse0x1b76d80();
   input += synapse0x1b76dc0();
   input += synapse0x1b76e00();
   input += synapse0x1b76e40();
   input += synapse0x1b76e80();
   input += synapse0x1b76910();
   input += synapse0x1b76950();
   input += synapse0x1b76fd0();
   input += synapse0x1b77010();
   input += synapse0x1b77050();
   input += synapse0x1b77090();
   input += synapse0x1b770d0();
   input += synapse0x1b77110();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b76780() {
   double input = input0x1b76780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b77150() {
   double input = -1.59365;
   input += synapse0x1b77490();
   input += synapse0x1b774d0();
   input += synapse0x1b77510();
   input += synapse0x1b77550();
   input += synapse0x1b77590();
   input += synapse0x1b775d0();
   input += synapse0x1b77610();
   input += synapse0x1b77650();
   input += synapse0x1b77690();
   input += synapse0x1b776d0();
   input += synapse0x1b77710();
   input += synapse0x1b77750();
   input += synapse0x1b77790();
   input += synapse0x1b777d0();
   input += synapse0x1b77810();
   input += synapse0x1b77850();
   input += synapse0x1b772e0();
   input += synapse0x1b77320();
   input += synapse0x1b779a0();
   input += synapse0x1b779e0();
   input += synapse0x1b77a20();
   input += synapse0x1b77a60();
   input += synapse0x1b77aa0();
   input += synapse0x1b77ae0();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b77150() {
   double input = input0x1b77150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b77b20() {
   double input = -1.72696;
   input += synapse0x1b77e60();
   input += synapse0x1b77ea0();
   input += synapse0x1b77ee0();
   input += synapse0x1b77f20();
   input += synapse0x1b77f60();
   input += synapse0x1b77fa0();
   input += synapse0x1b77fe0();
   input += synapse0x1b78020();
   input += synapse0x1b78060();
   input += synapse0x1b780a0();
   input += synapse0x1b780e0();
   input += synapse0x1b78120();
   input += synapse0x1b78160();
   input += synapse0x1b781a0();
   input += synapse0x1b781e0();
   input += synapse0x1b78220();
   input += synapse0x1b77cb0();
   input += synapse0x1b77cf0();
   input += synapse0x1b78370();
   input += synapse0x1b783b0();
   input += synapse0x1b783f0();
   input += synapse0x1b78430();
   input += synapse0x1b78470();
   input += synapse0x1b784b0();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b77b20() {
   double input = input0x1b77b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b784f0() {
   double input = 1.51086;
   input += synapse0x1b78830();
   input += synapse0x1b78870();
   input += synapse0x1b788b0();
   input += synapse0x1b788f0();
   input += synapse0x1b78930();
   input += synapse0x1b78970();
   input += synapse0x1b789b0();
   input += synapse0x1b789f0();
   input += synapse0x1b78a30();
   input += synapse0x1b78a70();
   input += synapse0x1b78ab0();
   input += synapse0x1b78af0();
   input += synapse0x1b78b30();
   input += synapse0x1b78b70();
   input += synapse0x1b78bb0();
   input += synapse0x1b78bf0();
   input += synapse0x1b78680();
   input += synapse0x1b786c0();
   input += synapse0x1b78d40();
   input += synapse0x1b78d80();
   input += synapse0x1b78dc0();
   input += synapse0x1b78e00();
   input += synapse0x1b78e40();
   input += synapse0x1b78e80();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b784f0() {
   double input = input0x1b784f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b78ec0() {
   double input = -1.77495;
   input += synapse0x1b61930();
   input += synapse0x1b61970();
   input += synapse0x1b619b0();
   input += synapse0x1b619f0();
   input += synapse0x1b61a30();
   input += synapse0x1b61a70();
   input += synapse0x1b61ab0();
   input += synapse0x1b61af0();
   input += synapse0x1b79610();
   input += synapse0x1b79650();
   input += synapse0x1b79690();
   input += synapse0x1b796d0();
   input += synapse0x1b79710();
   input += synapse0x1b79750();
   input += synapse0x1b79790();
   input += synapse0x1b797d0();
   input += synapse0x1b79050();
   input += synapse0x1b79090();
   input += synapse0x1b79920();
   input += synapse0x1b79960();
   input += synapse0x1b799a0();
   input += synapse0x1b799e0();
   input += synapse0x1b79a20();
   input += synapse0x1b79a60();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b78ec0() {
   double input = input0x1b78ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b79aa0() {
   double input = -2.3748;
   input += synapse0x1b79de0();
   input += synapse0x1b79e20();
   input += synapse0x1b79e60();
   input += synapse0x1b79ea0();
   input += synapse0x1b79ee0();
   input += synapse0x1b79f20();
   input += synapse0x1b79f60();
   input += synapse0x1b79fa0();
   input += synapse0x1b79fe0();
   input += synapse0x1b7a020();
   input += synapse0x1b7a060();
   input += synapse0x1b7a0a0();
   input += synapse0x1b7a0e0();
   input += synapse0x1b7a120();
   input += synapse0x1b7a160();
   input += synapse0x1b7a1a0();
   input += synapse0x1b79c30();
   input += synapse0x1b79c70();
   input += synapse0x1b7a2f0();
   input += synapse0x1b7a330();
   input += synapse0x1b7a370();
   input += synapse0x1b7a3b0();
   input += synapse0x1b7a3f0();
   input += synapse0x1b7a430();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b79aa0() {
   double input = input0x1b79aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b7a470() {
   double input = 0.151393;
   input += synapse0x1b7a7b0();
   input += synapse0x1b7a7f0();
   input += synapse0x1b7a830();
   input += synapse0x1b7a870();
   input += synapse0x1b7a8b0();
   input += synapse0x1b7a8f0();
   input += synapse0x1b7a930();
   input += synapse0x1b7a970();
   input += synapse0x1b7a9b0();
   input += synapse0x1b7a9f0();
   input += synapse0x1b7aa30();
   input += synapse0x1b7aa70();
   input += synapse0x1b7aab0();
   input += synapse0x1b7aaf0();
   input += synapse0x1b7ab30();
   input += synapse0x1b7ab70();
   input += synapse0x1b7a600();
   input += synapse0x1b7a640();
   input += synapse0x1b6b170();
   input += synapse0x1b6b1b0();
   input += synapse0x1b6b1f0();
   input += synapse0x1b6b230();
   input += synapse0x1b6b270();
   input += synapse0x1b6b2b0();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b7a470() {
   double input = input0x1b7a470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b6b2f0() {
   double input = -1.35926;
   input += synapse0x1b6b630();
   input += synapse0x1b6b670();
   input += synapse0x1b6b6b0();
   input += synapse0x1b6b6f0();
   input += synapse0x1b6b730();
   input += synapse0x1b6b770();
   input += synapse0x1b6b7b0();
   input += synapse0x1b6b7f0();
   input += synapse0x1b6b830();
   input += synapse0x1b6b870();
   input += synapse0x1b6b8b0();
   input += synapse0x1b6b8f0();
   input += synapse0x1b6b930();
   input += synapse0x1b6b970();
   input += synapse0x1b6b9b0();
   input += synapse0x1b6b9f0();
   input += synapse0x1b6b480();
   input += synapse0x1b6b4c0();
   input += synapse0x1b6bb40();
   input += synapse0x1b6bb80();
   input += synapse0x1b6bbc0();
   input += synapse0x1b6bc00();
   input += synapse0x1b6bc40();
   input += synapse0x1b6bc80();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b6b2f0() {
   double input = input0x1b6b2f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b6bcc0() {
   double input = -2.48883;
   input += synapse0x1b6c000();
   input += synapse0x1b6c040();
   input += synapse0x1b6c080();
   input += synapse0x1b6c0c0();
   input += synapse0x1b6c100();
   input += synapse0x1b6c140();
   input += synapse0x1b6c180();
   input += synapse0x1b6c1c0();
   input += synapse0x1b6c200();
   input += synapse0x1b6c240();
   input += synapse0x1b6c280();
   input += synapse0x1b6c2c0();
   input += synapse0x1b6c300();
   input += synapse0x1b6c340();
   input += synapse0x1b6c380();
   input += synapse0x1b6c3c0();
   input += synapse0x1b6be50();
   input += synapse0x1b6be90();
   input += synapse0x1b6c510();
   input += synapse0x1b6c550();
   input += synapse0x1b6c590();
   input += synapse0x1b6c5d0();
   input += synapse0x1b6c610();
   input += synapse0x1b6c650();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b6bcc0() {
   double input = input0x1b6bcc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b6c690() {
   double input = 1.74846;
   input += synapse0x1b6c9d0();
   input += synapse0x1b6ca10();
   input += synapse0x1b6ca50();
   input += synapse0x1b6ca90();
   input += synapse0x1b6cad0();
   input += synapse0x1b6cb10();
   input += synapse0x1b6cb50();
   input += synapse0x1b6cb90();
   input += synapse0x1b6cbd0();
   input += synapse0x1b6cc10();
   input += synapse0x1b6cc50();
   input += synapse0x1b6cc90();
   input += synapse0x1b6ccd0();
   input += synapse0x1b6cd10();
   input += synapse0x1b6cd50();
   input += synapse0x1b6cd90();
   input += synapse0x1b6c820();
   input += synapse0x1b6c860();
   input += synapse0x1b6cee0();
   input += synapse0x1b6cf20();
   input += synapse0x1b6cf60();
   input += synapse0x1b6cfa0();
   input += synapse0x1b6cfe0();
   input += synapse0x1b6d020();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b6c690() {
   double input = input0x1b6c690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b7ecd0() {
   double input = -0.319467;
   input += synapse0x1b7eef0();
   input += synapse0x1b7ef30();
   input += synapse0x1b7ef70();
   input += synapse0x1b7efb0();
   input += synapse0x1b7eff0();
   input += synapse0x1b7f030();
   input += synapse0x1b7f070();
   input += synapse0x1b7f0b0();
   input += synapse0x1b7f0f0();
   input += synapse0x1b7f130();
   input += synapse0x1b7f170();
   input += synapse0x1b7f1b0();
   input += synapse0x1b7f1f0();
   input += synapse0x1b7f230();
   input += synapse0x1b7f270();
   input += synapse0x1b7f2b0();
   input += synapse0x1b6d060();
   input += synapse0x1b6d0a0();
   input += synapse0x1b7f400();
   input += synapse0x1b7f440();
   input += synapse0x1b7f480();
   input += synapse0x1b7f4c0();
   input += synapse0x1b7f500();
   input += synapse0x1b7f540();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b7ecd0() {
   double input = input0x1b7ecd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b7f580() {
   double input = -2.5715;
   input += synapse0x1b7f8c0();
   input += synapse0x1b7f900();
   input += synapse0x1b7f940();
   input += synapse0x1b7f980();
   input += synapse0x1b7f9c0();
   input += synapse0x1b7fa00();
   input += synapse0x1b7fa40();
   input += synapse0x1b7fa80();
   input += synapse0x1b7fac0();
   input += synapse0x1b7fb00();
   input += synapse0x1b7fb40();
   input += synapse0x1b7fb80();
   input += synapse0x1b7fbc0();
   input += synapse0x1b7fc00();
   input += synapse0x1b7fc40();
   input += synapse0x1b7fc80();
   input += synapse0x1b7f710();
   input += synapse0x1b7f750();
   input += synapse0x1b7fdd0();
   input += synapse0x1b7fe10();
   input += synapse0x1b7fe50();
   input += synapse0x1b7fe90();
   input += synapse0x1b7fed0();
   input += synapse0x1b7ff10();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b7f580() {
   double input = input0x1b7f580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b7ff50() {
   double input = -1.33528;
   input += synapse0x1b80290();
   input += synapse0x1b802d0();
   input += synapse0x1b80310();
   input += synapse0x1b80350();
   input += synapse0x1b80390();
   input += synapse0x1b803d0();
   input += synapse0x1b80410();
   input += synapse0x1b80450();
   input += synapse0x1b80490();
   input += synapse0x1b804d0();
   input += synapse0x1b80510();
   input += synapse0x1b80550();
   input += synapse0x1b80590();
   input += synapse0x1b805d0();
   input += synapse0x1b80610();
   input += synapse0x1b80650();
   input += synapse0x1b800e0();
   input += synapse0x1b80120();
   input += synapse0x1b807a0();
   input += synapse0x1b807e0();
   input += synapse0x1b80820();
   input += synapse0x1b80860();
   input += synapse0x1b808a0();
   input += synapse0x1b808e0();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b7ff50() {
   double input = input0x1b7ff50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b80920() {
   double input = -0.894022;
   input += synapse0x1b80c60();
   input += synapse0x1b80ca0();
   input += synapse0x1b80ce0();
   input += synapse0x1b80d20();
   input += synapse0x1b80d60();
   input += synapse0x1b80da0();
   input += synapse0x1b80de0();
   input += synapse0x1b80e20();
   input += synapse0x1b80e60();
   input += synapse0x1b80ea0();
   input += synapse0x1b80ee0();
   input += synapse0x1b80f20();
   input += synapse0x1b80f60();
   input += synapse0x1b80fa0();
   input += synapse0x1b80fe0();
   input += synapse0x1b81020();
   input += synapse0x1b80ab0();
   input += synapse0x1b80af0();
   input += synapse0x1b81170();
   input += synapse0x1b811b0();
   input += synapse0x1b811f0();
   input += synapse0x1b81230();
   input += synapse0x1b81270();
   input += synapse0x1b812b0();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b80920() {
   double input = input0x1b80920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b87b20() {
   double input = 0.704251;
   input += synapse0x1b5d850();
   input += synapse0x1b5d890();
   input += synapse0x1b5ed60();
   input += synapse0x1b5eda0();
   input += synapse0x1b5f730();
   input += synapse0x1b5f770();
   input += synapse0x1b60500();
   input += synapse0x1b60540();
   input += synapse0x1b60ed0();
   input += synapse0x1b60f10();
   input += synapse0x1b618a0();
   input += synapse0x1b618e0();
   input += synapse0x1b62380();
   input += synapse0x1b623c0();
   input += synapse0x1b62d50();
   input += synapse0x1b62d90();
   input += synapse0x1b5fe30();
   input += synapse0x1b5fe70();
   input += synapse0x1b64900();
   input += synapse0x1b64940();
   input += synapse0x1b652d0();
   input += synapse0x1b65310();
   input += synapse0x1b65ca0();
   input += synapse0x1b65ce0();
   input += synapse0x1b66670();
   input += synapse0x1b666b0();
   input += synapse0x1b5a7e0();
   input += synapse0x1b5a820();
   input += synapse0x1b68760();
   input += synapse0x1b687a0();
   input += synapse0x1b69130();
   input += synapse0x1b69170();
   input += synapse0x1b69b00();
   input += synapse0x1b69b40();
   input += synapse0x1b6a4d0();
   input += synapse0x1b6a510();
   input += synapse0x1b6aea0();
   input += synapse0x1b6aee0();
   input += synapse0x1b639f0();
   input += synapse0x1b63a30();
   input += synapse0x1b6d2a0();
   input += synapse0x1b6d2e0();
   input += synapse0x1b6dc30();
   input += synapse0x1b6dc70();
   input += synapse0x1b6e600();
   input += synapse0x1b6e640();
   input += synapse0x1b6efd0();
   input += synapse0x1b6f010();
   input += synapse0x1b6f9a0();
   input += synapse0x1b6f9e0();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b87b20() {
   double input = input0x1b87b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b87ec0() {
   double input = 0.508604;
   input += synapse0x1b720e0();
   input += synapse0x1b72120();
   input += synapse0x1b676a0();
   input += synapse0x1b676e0();
   input += synapse0x1b74cc0();
   input += synapse0x1b74d00();
   input += synapse0x1b75690();
   input += synapse0x1b756d0();
   input += synapse0x1b76060();
   input += synapse0x1b760a0();
   input += synapse0x1b76a30();
   input += synapse0x1b76a70();
   input += synapse0x1b77400();
   input += synapse0x1b77440();
   input += synapse0x1b77dd0();
   input += synapse0x1b77e10();
   input += synapse0x1b787a0();
   input += synapse0x1b787e0();
   input += synapse0x1b79170();
   input += synapse0x1b791b0();
   input += synapse0x1b79d50();
   input += synapse0x1b79d90();
   input += synapse0x1b7a720();
   input += synapse0x1b7a760();
   input += synapse0x1b6b5a0();
   input += synapse0x1b6b5e0();
   input += synapse0x1b6bf70();
   input += synapse0x1b6bfb0();
   input += synapse0x1b6c940();
   input += synapse0x1b6c980();
   input += synapse0x1b7ee60();
   input += synapse0x1b7eea0();
   input += synapse0x1b7f830();
   input += synapse0x1b7f870();
   input += synapse0x1b80200();
   input += synapse0x1b80240();
   input += synapse0x1b80bd0();
   input += synapse0x1b80c10();
   input += synapse0x1b5cac0();
   input += synapse0x1b5cb00();
   input += synapse0x1b70370();
   input += synapse0x1b703b0();
   input += synapse0x1b812f0();
   input += synapse0x1b81330();
   input += synapse0x1b81370();
   input += synapse0x1b813b0();
   input += synapse0x1b88260();
   input += synapse0x1b882a0();
   input += synapse0x1b882e0();
   input += synapse0x1b88320();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b87ec0() {
   double input = input0x1b87ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b88360() {
   double input = -1.11419;
   input += synapse0x1b886a0();
   input += synapse0x1b886e0();
   input += synapse0x1b88720();
   input += synapse0x1b88760();
   input += synapse0x1b887a0();
   input += synapse0x1b887e0();
   input += synapse0x1b88820();
   input += synapse0x1b88860();
   input += synapse0x1b888a0();
   input += synapse0x1b888e0();
   input += synapse0x1b88920();
   input += synapse0x1b88960();
   input += synapse0x1b889a0();
   input += synapse0x1b889e0();
   input += synapse0x1b88a20();
   input += synapse0x1b88a60();
   input += synapse0x1b884f0();
   input += synapse0x1b88530();
   input += synapse0x1b88bb0();
   input += synapse0x1b88bf0();
   input += synapse0x1b88c30();
   input += synapse0x1b88c70();
   input += synapse0x1b88cb0();
   input += synapse0x1b88cf0();
   input += synapse0x1b88d30();
   input += synapse0x1b88d70();
   input += synapse0x1b88db0();
   input += synapse0x1b88df0();
   input += synapse0x1b88e30();
   input += synapse0x1b88e70();
   input += synapse0x1b88eb0();
   input += synapse0x1b88ef0();
   input += synapse0x1b88aa0();
   input += synapse0x1b88ae0();
   input += synapse0x1b88b20();
   input += synapse0x1b88b60();
   input += synapse0x1b89140();
   input += synapse0x1b89180();
   input += synapse0x1b891c0();
   input += synapse0x1b89200();
   input += synapse0x1b89240();
   input += synapse0x1b89280();
   input += synapse0x1b892c0();
   input += synapse0x1b89300();
   input += synapse0x1b89340();
   input += synapse0x1b89380();
   input += synapse0x1b893c0();
   input += synapse0x1b89400();
   input += synapse0x1b89440();
   input += synapse0x1b89480();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b88360() {
   double input = input0x1b88360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b894c0() {
   double input = 0.757583;
   input += synapse0x1b89800();
   input += synapse0x1b89840();
   input += synapse0x1b89880();
   input += synapse0x1b898c0();
   input += synapse0x1b89900();
   input += synapse0x1b89940();
   input += synapse0x1b89980();
   input += synapse0x1b899c0();
   input += synapse0x1b89a00();
   input += synapse0x1b89a40();
   input += synapse0x1b89a80();
   input += synapse0x1b89ac0();
   input += synapse0x1b89b00();
   input += synapse0x1b89b40();
   input += synapse0x1b89b80();
   input += synapse0x1b89bc0();
   input += synapse0x1b89650();
   input += synapse0x1b89690();
   input += synapse0x1b89d10();
   input += synapse0x1b89d50();
   input += synapse0x1b89d90();
   input += synapse0x1b89dd0();
   input += synapse0x1b89e10();
   input += synapse0x1b89e50();
   input += synapse0x1b89e90();
   input += synapse0x1b89ed0();
   input += synapse0x1b89f10();
   input += synapse0x1b89f50();
   input += synapse0x1b89f90();
   input += synapse0x1b89fd0();
   input += synapse0x1b8a010();
   input += synapse0x1b8a050();
   input += synapse0x1b89c00();
   input += synapse0x1b89c40();
   input += synapse0x1b89c80();
   input += synapse0x1b89cc0();
   input += synapse0x1b8a2a0();
   input += synapse0x1b8a2e0();
   input += synapse0x1b8a320();
   input += synapse0x1b8a360();
   input += synapse0x1b8a3a0();
   input += synapse0x1b8a3e0();
   input += synapse0x1b8a420();
   input += synapse0x1b8a460();
   input += synapse0x1b8a4a0();
   input += synapse0x1b8a4e0();
   input += synapse0x1b8a520();
   input += synapse0x1b8a560();
   input += synapse0x1b8a5a0();
   input += synapse0x1b8a5e0();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b894c0() {
   double input = input0x1b894c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b8a620() {
   double input = 0.204925;
   input += synapse0x1b8a960();
   input += synapse0x1b8a9a0();
   input += synapse0x1b8a9e0();
   input += synapse0x1b8aa20();
   input += synapse0x1b8aa60();
   input += synapse0x1b8aaa0();
   input += synapse0x1b8aae0();
   input += synapse0x1b8ab20();
   input += synapse0x1b8ab60();
   input += synapse0x1b8aba0();
   input += synapse0x1b8abe0();
   input += synapse0x1b8ac20();
   input += synapse0x1b8ac60();
   input += synapse0x1b8aca0();
   input += synapse0x1b8ace0();
   input += synapse0x1b8ad20();
   input += synapse0x1b8a7b0();
   input += synapse0x1b8a7f0();
   input += synapse0x1b8ae70();
   input += synapse0x1b8aeb0();
   input += synapse0x1b8aef0();
   input += synapse0x1b8af30();
   input += synapse0x1b8af70();
   input += synapse0x1b8afb0();
   input += synapse0x1b8aff0();
   input += synapse0x1b8b030();
   input += synapse0x1b8b070();
   input += synapse0x1b8b0b0();
   input += synapse0x1b8b0f0();
   input += synapse0x1b8b130();
   input += synapse0x1b8b170();
   input += synapse0x1b8b1b0();
   input += synapse0x1b8ad60();
   input += synapse0x1b8ada0();
   input += synapse0x1b8ade0();
   input += synapse0x1b8ae20();
   input += synapse0x1b8b400();
   input += synapse0x1b8b440();
   input += synapse0x1b8b480();
   input += synapse0x1b8b4c0();
   input += synapse0x1b8b500();
   input += synapse0x1b8b540();
   input += synapse0x1b8b580();
   input += synapse0x1b8b5c0();
   input += synapse0x1b8b600();
   input += synapse0x1b8b640();
   input += synapse0x1b8b680();
   input += synapse0x1b8b6c0();
   input += synapse0x1b8b700();
   input += synapse0x1b8b740();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b8a620() {
   double input = input0x1b8a620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_4::input0x1b8b780() {
   double input = -5.21421;
   input += synapse0x1b5c860();
   input += synapse0x1b8b9a0();
   input += synapse0x1b8b9e0();
   input += synapse0x1b8ba20();
   input += synapse0x1b8ba60();
   return input;
}

double NNfunction_NN_1_4::neuron0x1b8b780() {
   double input = input0x1b8b780();
   return (input * 1)+0;
}

double NNfunction_NN_1_4::synapse0x19176b0() {
   return (neuron0x1b57840()*0.0914211);
}

double NNfunction_NN_1_4::synapse0x1b57700() {
   return (neuron0x1b57b80()*-2.04113);
}

double NNfunction_NN_1_4::synapse0x1b57740() {
   return (neuron0x1b57ec0()*1.21221);
}

double NNfunction_NN_1_4::synapse0x1b5cb50() {
   return (neuron0x1b58200()*0.0417568);
}

double NNfunction_NN_1_4::synapse0x1b5cb90() {
   return (neuron0x1b58540()*0.0352128);
}

double NNfunction_NN_1_4::synapse0x1b5cbd0() {
   return (neuron0x1b58880()*-0.0399639);
}

double NNfunction_NN_1_4::synapse0x1b5cc10() {
   return (neuron0x1b58bc0()*0.00120738);
}

double NNfunction_NN_1_4::synapse0x1b5cc50() {
   return (neuron0x1b58f00()*0.00242786);
}

double NNfunction_NN_1_4::synapse0x1b5cc90() {
   return (neuron0x1b59240()*0.0357063);
}

double NNfunction_NN_1_4::synapse0x1b5ccd0() {
   return (neuron0x1b59580()*-0.0622435);
}

double NNfunction_NN_1_4::synapse0x1b5cd10() {
   return (neuron0x1b598c0()*-0.0542182);
}

double NNfunction_NN_1_4::synapse0x1b5cd50() {
   return (neuron0x1b59c00()*-0.63527);
}

double NNfunction_NN_1_4::synapse0x1b5cd90() {
   return (neuron0x1b59f40()*0.0891738);
}

double NNfunction_NN_1_4::synapse0x1b5cdd0() {
   return (neuron0x1b5a280()*-0.0238431);
}

double NNfunction_NN_1_4::synapse0x1b5ce10() {
   return (neuron0x1b5a5c0()*-0.132982);
}

double NNfunction_NN_1_4::synapse0x1b5ce50() {
   return (neuron0x1b5a900()*-0.0539473);
}

double NNfunction_NN_1_4::synapse0x1b57670() {
   return (neuron0x1b5ac40()*-0.0218139);
}

double NNfunction_NN_1_4::synapse0x1b576b0() {
   return (neuron0x1b5b1a0()*0.0210266);
}

double NNfunction_NN_1_4::synapse0x1908f10() {
   return (neuron0x1b5b3c0()*-0.00755483);
}

double NNfunction_NN_1_4::synapse0x1908f50() {
   return (neuron0x1b5b700()*-0.0162864);
}

double NNfunction_NN_1_4::synapse0x1b5d0b0() {
   return (neuron0x1b5ba40()*-0.0116855);
}

double NNfunction_NN_1_4::synapse0x1b5d0f0() {
   return (neuron0x1b5bd80()*-0.0184727);
}

double NNfunction_NN_1_4::synapse0x1b5d130() {
   return (neuron0x1b5c0c0()*-0.0795604);
}

double NNfunction_NN_1_4::synapse0x1b5d170() {
   return (neuron0x1b5c400()*-3.40283);
}

double NNfunction_NN_1_4::synapse0x1b5d4f0() {
   return (neuron0x1b57840()*0.000697987);
}

double NNfunction_NN_1_4::synapse0x1b5d530() {
   return (neuron0x1b57b80()*-2.92922);
}

double NNfunction_NN_1_4::synapse0x1b5d570() {
   return (neuron0x1b57ec0()*2.26488);
}

double NNfunction_NN_1_4::synapse0x1b5d5b0() {
   return (neuron0x1b58200()*0.00169582);
}

double NNfunction_NN_1_4::synapse0x1b5d5f0() {
   return (neuron0x1b58540()*-0.0219249);
}

double NNfunction_NN_1_4::synapse0x1b5d630() {
   return (neuron0x1b58880()*-0.0167086);
}

double NNfunction_NN_1_4::synapse0x1b5d670() {
   return (neuron0x1b58bc0()*-0.0024913);
}

double NNfunction_NN_1_4::synapse0x1b5d6b0() {
   return (neuron0x1b58f00()*0.00321824);
}

double NNfunction_NN_1_4::synapse0x1b5d6f0() {
   return (neuron0x1b59240()*-0.00311897);
}

double NNfunction_NN_1_4::synapse0x1b5cfa0() {
   return (neuron0x1b59580()*0.0120245);
}

double NNfunction_NN_1_4::synapse0x1b5cfe0() {
   return (neuron0x1b598c0()*-0.0487272);
}

double NNfunction_NN_1_4::synapse0x1b5d020() {
   return (neuron0x1b59c00()*0.130937);
}

double NNfunction_NN_1_4::synapse0x1b5d060() {
   return (neuron0x1b59f40()*0.103629);
}

double NNfunction_NN_1_4::synapse0x1b5d940() {
   return (neuron0x1b5a280()*-0.00486324);
}

double NNfunction_NN_1_4::synapse0x1b5d980() {
   return (neuron0x1b5a5c0()*-0.116642);
}

double NNfunction_NN_1_4::synapse0x1b5d9c0() {
   return (neuron0x1b5a900()*-0.0529947);
}

double NNfunction_NN_1_4::synapse0x1b5d340() {
   return (neuron0x1b5ac40()*-0.0450565);
}

double NNfunction_NN_1_4::synapse0x1b5d380() {
   return (neuron0x1b5b1a0()*0.0248651);
}

double NNfunction_NN_1_4::synapse0x1b5db10() {
   return (neuron0x1b5b3c0()*0.0302733);
}

double NNfunction_NN_1_4::synapse0x1b5db50() {
   return (neuron0x1b5b700()*0.0152533);
}

double NNfunction_NN_1_4::synapse0x1b5db90() {
   return (neuron0x1b5ba40()*-0.068573);
}

double NNfunction_NN_1_4::synapse0x1b5dbd0() {
   return (neuron0x1b5bd80()*-0.0138879);
}

double NNfunction_NN_1_4::synapse0x1b5dc10() {
   return (neuron0x1b5c0c0()*-0.088543);
}

double NNfunction_NN_1_4::synapse0x1b5dc50() {
   return (neuron0x1b5c400()*-4.60463);
}

double NNfunction_NN_1_4::synapse0x1b5dfd0() {
   return (neuron0x1b57840()*-0.0284269);
}

double NNfunction_NN_1_4::synapse0x1b5e010() {
   return (neuron0x1b57b80()*0.248092);
}

double NNfunction_NN_1_4::synapse0x1b5e050() {
   return (neuron0x1b57ec0()*0.0545932);
}

double NNfunction_NN_1_4::synapse0x1b5e090() {
   return (neuron0x1b58200()*-1.51974);
}

double NNfunction_NN_1_4::synapse0x1b5e0d0() {
   return (neuron0x1b58540()*-0.0633813);
}

double NNfunction_NN_1_4::synapse0x1b5e110() {
   return (neuron0x1b58880()*-0.350551);
}

double NNfunction_NN_1_4::synapse0x1b5e150() {
   return (neuron0x1b58bc0()*-0.181726);
}

double NNfunction_NN_1_4::synapse0x1b5e190() {
   return (neuron0x1b58f00()*0.996196);
}

double NNfunction_NN_1_4::synapse0x1b5e1d0() {
   return (neuron0x1b59240()*0.103687);
}

double NNfunction_NN_1_4::synapse0x1b5e210() {
   return (neuron0x1b59580()*0.247518);
}

double NNfunction_NN_1_4::synapse0x1b5e250() {
   return (neuron0x1b598c0()*0.0179565);
}

double NNfunction_NN_1_4::synapse0x1b5e290() {
   return (neuron0x1b59c00()*0.800746);
}

double NNfunction_NN_1_4::synapse0x1b5e2d0() {
   return (neuron0x1b59f40()*0.0414761);
}

double NNfunction_NN_1_4::synapse0x1b5e310() {
   return (neuron0x1b5a280()*-0.0572737);
}

double NNfunction_NN_1_4::synapse0x1b5e350() {
   return (neuron0x1b5a5c0()*0.151017);
}

double NNfunction_NN_1_4::synapse0x1b5e390() {
   return (neuron0x1b5a900()*-0.397168);
}

double NNfunction_NN_1_4::synapse0x1b5de20() {
   return (neuron0x1b5ac40()*0.52523);
}

double NNfunction_NN_1_4::synapse0x1b5de60() {
   return (neuron0x1b5b1a0()*0.860823);
}

double NNfunction_NN_1_4::synapse0x1916d80() {
   return (neuron0x1b5b3c0()*0.437507);
}

double NNfunction_NN_1_4::synapse0x1916dc0() {
   return (neuron0x1b5b700()*0.352556);
}

double NNfunction_NN_1_4::synapse0x1b468d0() {
   return (neuron0x1b5ba40()*0.399022);
}

double NNfunction_NN_1_4::synapse0x1b46910() {
   return (neuron0x1b5bd80()*-0.355191);
}

double NNfunction_NN_1_4::synapse0x1b46950() {
   return (neuron0x1b5c0c0()*-0.183157);
}

double NNfunction_NN_1_4::synapse0x1b57780() {
   return (neuron0x1b5c400()*-0.271855);
}

double NNfunction_NN_1_4::synapse0x1b5d8e0() {
   return (neuron0x1b57840()*0.0331063);
}

double NNfunction_NN_1_4::synapse0x1b577c0() {
   return (neuron0x1b57b80()*-0.600152);
}

double NNfunction_NN_1_4::synapse0x1b57800() {
   return (neuron0x1b57ec0()*-2.29759);
}

double NNfunction_NN_1_4::synapse0x1b5e4e0() {
   return (neuron0x1b58200()*0.0570757);
}

double NNfunction_NN_1_4::synapse0x1b5e520() {
   return (neuron0x1b58540()*0.0176631);
}

double NNfunction_NN_1_4::synapse0x1b5e560() {
   return (neuron0x1b58880()*-0.0313603);
}

double NNfunction_NN_1_4::synapse0x1b5e5a0() {
   return (neuron0x1b58bc0()*0.0963109);
}

double NNfunction_NN_1_4::synapse0x1b5e5e0() {
   return (neuron0x1b58f00()*0.0455227);
}

double NNfunction_NN_1_4::synapse0x1b5e620() {
   return (neuron0x1b59240()*0.00867245);
}

double NNfunction_NN_1_4::synapse0x1b5e660() {
   return (neuron0x1b59580()*0.0208218);
}

double NNfunction_NN_1_4::synapse0x1b5e6a0() {
   return (neuron0x1b598c0()*-0.0288979);
}

double NNfunction_NN_1_4::synapse0x1b5e6e0() {
   return (neuron0x1b59c00()*0.276858);
}

double NNfunction_NN_1_4::synapse0x1b5e720() {
   return (neuron0x1b59f40()*0.0255312);
}

double NNfunction_NN_1_4::synapse0x1b5e760() {
   return (neuron0x1b5a280()*0.0263715);
}

double NNfunction_NN_1_4::synapse0x1b5e7a0() {
   return (neuron0x1b5a5c0()*-0.016778);
}

double NNfunction_NN_1_4::synapse0x1b5e7e0() {
   return (neuron0x1b5a900()*-0.0173761);
}

double NNfunction_NN_1_4::synapse0x1b5d730() {
   return (neuron0x1b5ac40()*-0.00791381);
}

double NNfunction_NN_1_4::synapse0x1b5d770() {
   return (neuron0x1b5b1a0()*0.0864785);
}

double NNfunction_NN_1_4::synapse0x1b5e930() {
   return (neuron0x1b5b3c0()*-0.0205311);
}

double NNfunction_NN_1_4::synapse0x1b5e970() {
   return (neuron0x1b5b700()*-0.00592028);
}

double NNfunction_NN_1_4::synapse0x1b5e9b0() {
   return (neuron0x1b5ba40()*-0.0855279);
}

double NNfunction_NN_1_4::synapse0x1b5e9f0() {
   return (neuron0x1b5bd80()*0.00224532);
}

double NNfunction_NN_1_4::synapse0x1b5ea30() {
   return (neuron0x1b5c0c0()*-0.00328196);
}

double NNfunction_NN_1_4::synapse0x1b5ea70() {
   return (neuron0x1b5c400()*-0.134768);
}

double NNfunction_NN_1_4::synapse0x1b5edf0() {
   return (neuron0x1b57840()*0.261118);
}

double NNfunction_NN_1_4::synapse0x1b5ee30() {
   return (neuron0x1b57b80()*1.6991);
}

double NNfunction_NN_1_4::synapse0x1b5ee70() {
   return (neuron0x1b57ec0()*1.62373);
}

double NNfunction_NN_1_4::synapse0x1b5eeb0() {
   return (neuron0x1b58200()*0.26706);
}

double NNfunction_NN_1_4::synapse0x1b5eef0() {
   return (neuron0x1b58540()*0.134953);
}

double NNfunction_NN_1_4::synapse0x1b5ef30() {
   return (neuron0x1b58880()*-0.232382);
}

double NNfunction_NN_1_4::synapse0x1b5ef70() {
   return (neuron0x1b58bc0()*-0.193696);
}

double NNfunction_NN_1_4::synapse0x1b5efb0() {
   return (neuron0x1b58f00()*0.270146);
}

double NNfunction_NN_1_4::synapse0x1b5eff0() {
   return (neuron0x1b59240()*0.227694);
}

double NNfunction_NN_1_4::synapse0x1b5f030() {
   return (neuron0x1b59580()*0.232746);
}

double NNfunction_NN_1_4::synapse0x1b5f070() {
   return (neuron0x1b598c0()*0.105835);
}

double NNfunction_NN_1_4::synapse0x1b5f0b0() {
   return (neuron0x1b59c00()*-2.65694);
}

double NNfunction_NN_1_4::synapse0x1b5f0f0() {
   return (neuron0x1b59f40()*0.044773);
}

double NNfunction_NN_1_4::synapse0x1b5f130() {
   return (neuron0x1b5a280()*-0.181778);
}

double NNfunction_NN_1_4::synapse0x1b5f170() {
   return (neuron0x1b5a5c0()*-0.142311);
}

double NNfunction_NN_1_4::synapse0x1b5f1b0() {
   return (neuron0x1b5a900()*0.0716394);
}

double NNfunction_NN_1_4::synapse0x1b5ec40() {
   return (neuron0x1b5ac40()*0.149267);
}

double NNfunction_NN_1_4::synapse0x1b5ec80() {
   return (neuron0x1b5b1a0()*0.214855);
}

double NNfunction_NN_1_4::synapse0x1b5f300() {
   return (neuron0x1b5b3c0()*-0.0450265);
}

double NNfunction_NN_1_4::synapse0x1b5f340() {
   return (neuron0x1b5b700()*0.0521036);
}

double NNfunction_NN_1_4::synapse0x1b5f380() {
   return (neuron0x1b5ba40()*-0.146419);
}

double NNfunction_NN_1_4::synapse0x1b5f3c0() {
   return (neuron0x1b5bd80()*0.0619257);
}

double NNfunction_NN_1_4::synapse0x1b5f400() {
   return (neuron0x1b5c0c0()*0.261955);
}

double NNfunction_NN_1_4::synapse0x1b5f440() {
   return (neuron0x1b5c400()*0.113216);
}

double NNfunction_NN_1_4::synapse0x1b5f7c0() {
   return (neuron0x1b57840()*-0.0461536);
}

double NNfunction_NN_1_4::synapse0x1b5f800() {
   return (neuron0x1b57b80()*-3.97902);
}

double NNfunction_NN_1_4::synapse0x1b5f840() {
   return (neuron0x1b57ec0()*-2.8219);
}

double NNfunction_NN_1_4::synapse0x1b5f880() {
   return (neuron0x1b58200()*-0.00522856);
}

double NNfunction_NN_1_4::synapse0x1b5f8c0() {
   return (neuron0x1b58540()*-0.0263522);
}

double NNfunction_NN_1_4::synapse0x1b5f900() {
   return (neuron0x1b58880()*-0.0167529);
}

double NNfunction_NN_1_4::synapse0x1b5f940() {
   return (neuron0x1b58bc0()*0.0252117);
}

double NNfunction_NN_1_4::synapse0x1b5f980() {
   return (neuron0x1b58f00()*0.0413287);
}

double NNfunction_NN_1_4::synapse0x1b5f9c0() {
   return (neuron0x1b59240()*0.00946106);
}

double NNfunction_NN_1_4::synapse0x1917110() {
   return (neuron0x1b59580()*-0.0305292);
}

double NNfunction_NN_1_4::synapse0x1917150() {
   return (neuron0x1b598c0()*-0.0116004);
}

double NNfunction_NN_1_4::synapse0x1917190() {
   return (neuron0x1b59c00()*-0.0852315);
}

double NNfunction_NN_1_4::synapse0x19171d0() {
   return (neuron0x1b59f40()*-0.0301832);
}

double NNfunction_NN_1_4::synapse0x1917210() {
   return (neuron0x1b5a280()*-0.0521605);
}

double NNfunction_NN_1_4::synapse0x1917250() {
   return (neuron0x1b5a5c0()*0.0730054);
}

double NNfunction_NN_1_4::synapse0x1917290() {
   return (neuron0x1b5a900()*-8.52046e-05);
}

double NNfunction_NN_1_4::synapse0x1b5f610() {
   return (neuron0x1b5ac40()*0.00318927);
}

double NNfunction_NN_1_4::synapse0x1b5f650() {
   return (neuron0x1b5b1a0()*-0.0431837);
}

double NNfunction_NN_1_4::synapse0x19173e0() {
   return (neuron0x1b5b3c0()*-0.0642558);
}

double NNfunction_NN_1_4::synapse0x1917420() {
   return (neuron0x1b5b700()*-0.000797582);
}

double NNfunction_NN_1_4::synapse0x1917460() {
   return (neuron0x1b5ba40()*-0.0530717);
}

double NNfunction_NN_1_4::synapse0x19174a0() {
   return (neuron0x1b5bd80()*-0.00155066);
}

double NNfunction_NN_1_4::synapse0x19174e0() {
   return (neuron0x1b5c0c0()*-0.0204466);
}

double NNfunction_NN_1_4::synapse0x1b60210() {
   return (neuron0x1b5c400()*4.4307);
}

double NNfunction_NN_1_4::synapse0x1b60590() {
   return (neuron0x1b57840()*0.786468);
}

double NNfunction_NN_1_4::synapse0x1b605d0() {
   return (neuron0x1b57b80()*-0.898295);
}

double NNfunction_NN_1_4::synapse0x1b60610() {
   return (neuron0x1b57ec0()*-0.667208);
}

double NNfunction_NN_1_4::synapse0x1b60650() {
   return (neuron0x1b58200()*-0.633756);
}

double NNfunction_NN_1_4::synapse0x1b60690() {
   return (neuron0x1b58540()*-0.65228);
}

double NNfunction_NN_1_4::synapse0x1b606d0() {
   return (neuron0x1b58880()*-0.365566);
}

double NNfunction_NN_1_4::synapse0x1b60710() {
   return (neuron0x1b58bc0()*-0.987629);
}

double NNfunction_NN_1_4::synapse0x1b60750() {
   return (neuron0x1b58f00()*-0.22857);
}

double NNfunction_NN_1_4::synapse0x1b60790() {
   return (neuron0x1b59240()*0.526448);
}

double NNfunction_NN_1_4::synapse0x1b607d0() {
   return (neuron0x1b59580()*0.18439);
}

double NNfunction_NN_1_4::synapse0x1b60810() {
   return (neuron0x1b598c0()*0.48055);
}

double NNfunction_NN_1_4::synapse0x1b60850() {
   return (neuron0x1b59c00()*0.519411);
}

double NNfunction_NN_1_4::synapse0x1b60890() {
   return (neuron0x1b59f40()*-0.6731);
}

double NNfunction_NN_1_4::synapse0x1b608d0() {
   return (neuron0x1b5a280()*0.251898);
}

double NNfunction_NN_1_4::synapse0x1b60910() {
   return (neuron0x1b5a5c0()*0.357424);
}

double NNfunction_NN_1_4::synapse0x1b60950() {
   return (neuron0x1b5a900()*0.164421);
}

double NNfunction_NN_1_4::synapse0x1b603e0() {
   return (neuron0x1b5ac40()*0.520199);
}

double NNfunction_NN_1_4::synapse0x1b60420() {
   return (neuron0x1b5b1a0()*0.0425858);
}

double NNfunction_NN_1_4::synapse0x1b60aa0() {
   return (neuron0x1b5b3c0()*-0.548127);
}

double NNfunction_NN_1_4::synapse0x1b60ae0() {
   return (neuron0x1b5b700()*0.0476589);
}

double NNfunction_NN_1_4::synapse0x1b60b20() {
   return (neuron0x1b5ba40()*0.86211);
}

double NNfunction_NN_1_4::synapse0x1b60b60() {
   return (neuron0x1b5bd80()*-0.0869734);
}

double NNfunction_NN_1_4::synapse0x1b60ba0() {
   return (neuron0x1b5c0c0()*-0.606269);
}

double NNfunction_NN_1_4::synapse0x1b60be0() {
   return (neuron0x1b5c400()*-1.47279);
}

double NNfunction_NN_1_4::synapse0x1b60f60() {
   return (neuron0x1b57840()*0.594507);
}

double NNfunction_NN_1_4::synapse0x1b60fa0() {
   return (neuron0x1b57b80()*-0.40088);
}

double NNfunction_NN_1_4::synapse0x1b60fe0() {
   return (neuron0x1b57ec0()*-0.434704);
}

double NNfunction_NN_1_4::synapse0x1b61020() {
   return (neuron0x1b58200()*0.885254);
}

double NNfunction_NN_1_4::synapse0x1b61060() {
   return (neuron0x1b58540()*0.684527);
}

double NNfunction_NN_1_4::synapse0x1b610a0() {
   return (neuron0x1b58880()*-0.484504);
}

double NNfunction_NN_1_4::synapse0x1b610e0() {
   return (neuron0x1b58bc0()*0.512106);
}

double NNfunction_NN_1_4::synapse0x1b61120() {
   return (neuron0x1b58f00()*-0.671805);
}

double NNfunction_NN_1_4::synapse0x1b61160() {
   return (neuron0x1b59240()*0.522394);
}

double NNfunction_NN_1_4::synapse0x1b611a0() {
   return (neuron0x1b59580()*-0.0180064);
}

double NNfunction_NN_1_4::synapse0x1b611e0() {
   return (neuron0x1b598c0()*-0.223902);
}

double NNfunction_NN_1_4::synapse0x1b61220() {
   return (neuron0x1b59c00()*-0.0803226);
}

double NNfunction_NN_1_4::synapse0x1b61260() {
   return (neuron0x1b59f40()*0.302601);
}

double NNfunction_NN_1_4::synapse0x1b612a0() {
   return (neuron0x1b5a280()*-0.261455);
}

double NNfunction_NN_1_4::synapse0x1b612e0() {
   return (neuron0x1b5a5c0()*-0.540926);
}

double NNfunction_NN_1_4::synapse0x1b61320() {
   return (neuron0x1b5a900()*0.154738);
}

double NNfunction_NN_1_4::synapse0x1b60db0() {
   return (neuron0x1b5ac40()*1.21073);
}

double NNfunction_NN_1_4::synapse0x1b60df0() {
   return (neuron0x1b5b1a0()*0.341584);
}

double NNfunction_NN_1_4::synapse0x1b61470() {
   return (neuron0x1b5b3c0()*0.221922);
}

double NNfunction_NN_1_4::synapse0x1b614b0() {
   return (neuron0x1b5b700()*-0.125241);
}

double NNfunction_NN_1_4::synapse0x1b614f0() {
   return (neuron0x1b5ba40()*-0.302967);
}

double NNfunction_NN_1_4::synapse0x1b61530() {
   return (neuron0x1b5bd80()*0.606947);
}

double NNfunction_NN_1_4::synapse0x1b61570() {
   return (neuron0x1b5c0c0()*-0.166692);
}

double NNfunction_NN_1_4::synapse0x1b615b0() {
   return (neuron0x1b5c400()*0.209506);
}

double NNfunction_NN_1_4::synapse0x1b5b090() {
   return (neuron0x1b57840()*-0.293711);
}

double NNfunction_NN_1_4::synapse0x1b5b0d0() {
   return (neuron0x1b57b80()*-0.178435);
}

double NNfunction_NN_1_4::synapse0x1b5b110() {
   return (neuron0x1b57ec0()*-0.164032);
}

double NNfunction_NN_1_4::synapse0x1b5b150() {
   return (neuron0x1b58200()*-0.198716);
}

double NNfunction_NN_1_4::synapse0x1b61b40() {
   return (neuron0x1b58540()*0.235813);
}

double NNfunction_NN_1_4::synapse0x1b61b80() {
   return (neuron0x1b58880()*-0.162413);
}

double NNfunction_NN_1_4::synapse0x1b61bc0() {
   return (neuron0x1b58bc0()*-0.155377);
}

double NNfunction_NN_1_4::synapse0x1b61c00() {
   return (neuron0x1b58f00()*-0.173919);
}

double NNfunction_NN_1_4::synapse0x1b61c40() {
   return (neuron0x1b59240()*0.171971);
}

double NNfunction_NN_1_4::synapse0x1b61c80() {
   return (neuron0x1b59580()*-0.0158572);
}

double NNfunction_NN_1_4::synapse0x1b61cc0() {
   return (neuron0x1b598c0()*-0.00928737);
}

double NNfunction_NN_1_4::synapse0x1b61d00() {
   return (neuron0x1b59c00()*0.357585);
}

double NNfunction_NN_1_4::synapse0x1b61d40() {
   return (neuron0x1b59f40()*-0.406547);
}

double NNfunction_NN_1_4::synapse0x1b61d80() {
   return (neuron0x1b5a280()*-0.187212);
}

double NNfunction_NN_1_4::synapse0x1b61dc0() {
   return (neuron0x1b5a5c0()*0.183244);
}

double NNfunction_NN_1_4::synapse0x1b61e00() {
   return (neuron0x1b5a900()*-0.143584);
}

double NNfunction_NN_1_4::synapse0x1b61780() {
   return (neuron0x1b5ac40()*-0.232419);
}

double NNfunction_NN_1_4::synapse0x1b617c0() {
   return (neuron0x1b5b1a0()*-0.175884);
}

double NNfunction_NN_1_4::synapse0x1b61f50() {
   return (neuron0x1b5b3c0()*-0.14062);
}

double NNfunction_NN_1_4::synapse0x1b61f90() {
   return (neuron0x1b5b700()*0.0209368);
}

double NNfunction_NN_1_4::synapse0x1b61fd0() {
   return (neuron0x1b5ba40()*0.0297626);
}

double NNfunction_NN_1_4::synapse0x1b62010() {
   return (neuron0x1b5bd80()*-0.0388137);
}

double NNfunction_NN_1_4::synapse0x1b62050() {
   return (neuron0x1b5c0c0()*-0.100366);
}

double NNfunction_NN_1_4::synapse0x1b62090() {
   return (neuron0x1b5c400()*0.0593221);
}

double NNfunction_NN_1_4::synapse0x1b62410() {
   return (neuron0x1b57840()*0.0171618);
}

double NNfunction_NN_1_4::synapse0x1b62450() {
   return (neuron0x1b57b80()*0.10372);
}

double NNfunction_NN_1_4::synapse0x1b62490() {
   return (neuron0x1b57ec0()*0.956518);
}

double NNfunction_NN_1_4::synapse0x1b624d0() {
   return (neuron0x1b58200()*-0.0270437);
}

double NNfunction_NN_1_4::synapse0x1b62510() {
   return (neuron0x1b58540()*0.551317);
}

double NNfunction_NN_1_4::synapse0x1b62550() {
   return (neuron0x1b58880()*-0.299158);
}

double NNfunction_NN_1_4::synapse0x1b62590() {
   return (neuron0x1b58bc0()*-0.213144);
}

double NNfunction_NN_1_4::synapse0x1b625d0() {
   return (neuron0x1b58f00()*0.00109746);
}

double NNfunction_NN_1_4::synapse0x1b62610() {
   return (neuron0x1b59240()*-0.13344);
}

double NNfunction_NN_1_4::synapse0x1b62650() {
   return (neuron0x1b59580()*0.254444);
}

double NNfunction_NN_1_4::synapse0x1b62690() {
   return (neuron0x1b598c0()*-0.247469);
}

double NNfunction_NN_1_4::synapse0x1b626d0() {
   return (neuron0x1b59c00()*-0.18246);
}

double NNfunction_NN_1_4::synapse0x1b62710() {
   return (neuron0x1b59f40()*-0.0132933);
}

double NNfunction_NN_1_4::synapse0x1b62750() {
   return (neuron0x1b5a280()*-0.188296);
}

double NNfunction_NN_1_4::synapse0x1b62790() {
   return (neuron0x1b5a5c0()*-0.0595961);
}

double NNfunction_NN_1_4::synapse0x1b627d0() {
   return (neuron0x1b5a900()*0.0269472);
}

double NNfunction_NN_1_4::synapse0x1b62260() {
   return (neuron0x1b5ac40()*-0.0608845);
}

double NNfunction_NN_1_4::synapse0x1b622a0() {
   return (neuron0x1b5b1a0()*-0.0320261);
}

double NNfunction_NN_1_4::synapse0x1b62920() {
   return (neuron0x1b5b3c0()*-0.161082);
}

double NNfunction_NN_1_4::synapse0x1b62960() {
   return (neuron0x1b5b700()*0.292044);
}

double NNfunction_NN_1_4::synapse0x1b629a0() {
   return (neuron0x1b5ba40()*0.341353);
}

double NNfunction_NN_1_4::synapse0x1b629e0() {
   return (neuron0x1b5bd80()*0.0186628);
}

double NNfunction_NN_1_4::synapse0x1b62a20() {
   return (neuron0x1b5c0c0()*0.0678918);
}

double NNfunction_NN_1_4::synapse0x1b62a60() {
   return (neuron0x1b5c400()*-0.0934327);
}

double NNfunction_NN_1_4::synapse0x1b62de0() {
   return (neuron0x1b57840()*-0.160297);
}

double NNfunction_NN_1_4::synapse0x1b62e20() {
   return (neuron0x1b57b80()*-0.0342579);
}

double NNfunction_NN_1_4::synapse0x1b62e60() {
   return (neuron0x1b57ec0()*3.24243);
}

double NNfunction_NN_1_4::synapse0x1b62ea0() {
   return (neuron0x1b58200()*0.036278);
}

double NNfunction_NN_1_4::synapse0x1b62ee0() {
   return (neuron0x1b58540()*-0.00312966);
}

double NNfunction_NN_1_4::synapse0x1b62f20() {
   return (neuron0x1b58880()*0.0371725);
}

double NNfunction_NN_1_4::synapse0x1b62f60() {
   return (neuron0x1b58bc0()*0.0187946);
}

double NNfunction_NN_1_4::synapse0x1b62fa0() {
   return (neuron0x1b58f00()*0.0506718);
}

double NNfunction_NN_1_4::synapse0x1b62fe0() {
   return (neuron0x1b59240()*-0.0100571);
}

double NNfunction_NN_1_4::synapse0x1b63020() {
   return (neuron0x1b59580()*-0.0226681);
}

double NNfunction_NN_1_4::synapse0x1b63060() {
   return (neuron0x1b598c0()*-0.00564496);
}

double NNfunction_NN_1_4::synapse0x1b630a0() {
   return (neuron0x1b59c00()*0.309352);
}

double NNfunction_NN_1_4::synapse0x1b630e0() {
   return (neuron0x1b59f40()*-0.0365764);
}

double NNfunction_NN_1_4::synapse0x1b63120() {
   return (neuron0x1b5a280()*0.0481868);
}

double NNfunction_NN_1_4::synapse0x1b63160() {
   return (neuron0x1b5a5c0()*-0.0488313);
}

double NNfunction_NN_1_4::synapse0x1b631a0() {
   return (neuron0x1b5a900()*-0.00786147);
}

double NNfunction_NN_1_4::synapse0x1b62c30() {
   return (neuron0x1b5ac40()*-0.0766392);
}

double NNfunction_NN_1_4::synapse0x1b62c70() {
   return (neuron0x1b5b1a0()*0.0151747);
}

double NNfunction_NN_1_4::synapse0x1b5fa00() {
   return (neuron0x1b5b3c0()*-0.0332306);
}

double NNfunction_NN_1_4::synapse0x1b5fa40() {
   return (neuron0x1b5b700()*0.0427109);
}

double NNfunction_NN_1_4::synapse0x1b5fa80() {
   return (neuron0x1b5ba40()*0.0214846);
}

double NNfunction_NN_1_4::synapse0x1b5fac0() {
   return (neuron0x1b5bd80()*0.0327075);
}

double NNfunction_NN_1_4::synapse0x1b5fb00() {
   return (neuron0x1b5c0c0()*0.0151556);
}

double NNfunction_NN_1_4::synapse0x1b5fb40() {
   return (neuron0x1b5c400()*3.00982);
}

double NNfunction_NN_1_4::synapse0x1b5fec0() {
   return (neuron0x1b57840()*-0.59374);
}

double NNfunction_NN_1_4::synapse0x1b5ff00() {
   return (neuron0x1b57b80()*0.447833);
}

double NNfunction_NN_1_4::synapse0x1b5ff40() {
   return (neuron0x1b57ec0()*-0.171602);
}

double NNfunction_NN_1_4::synapse0x1b5ff80() {
   return (neuron0x1b58200()*-0.0329354);
}

double NNfunction_NN_1_4::synapse0x1b5ffc0() {
   return (neuron0x1b58540()*0.0580579);
}

double NNfunction_NN_1_4::synapse0x1b60000() {
   return (neuron0x1b58880()*-0.285545);
}

double NNfunction_NN_1_4::synapse0x1b60040() {
   return (neuron0x1b58bc0()*0.121091);
}

double NNfunction_NN_1_4::synapse0x1b60080() {
   return (neuron0x1b58f00()*0.0930097);
}

double NNfunction_NN_1_4::synapse0x1b600c0() {
   return (neuron0x1b59240()*0.172306);
}

double NNfunction_NN_1_4::synapse0x1b60100() {
   return (neuron0x1b59580()*0.158929);
}

double NNfunction_NN_1_4::synapse0x1b60140() {
   return (neuron0x1b598c0()*-0.110535);
}

double NNfunction_NN_1_4::synapse0x1b60180() {
   return (neuron0x1b59c00()*-0.407339);
}

double NNfunction_NN_1_4::synapse0x1b601c0() {
   return (neuron0x1b59f40()*-0.0995055);
}

double NNfunction_NN_1_4::synapse0x1b64300() {
   return (neuron0x1b5a280()*0.114034);
}

double NNfunction_NN_1_4::synapse0x1b64340() {
   return (neuron0x1b5a5c0()*-0.158314);
}

double NNfunction_NN_1_4::synapse0x1b64380() {
   return (neuron0x1b5a900()*-0.0900577);
}

double NNfunction_NN_1_4::synapse0x1b5fd10() {
   return (neuron0x1b5ac40()*-0.112017);
}

double NNfunction_NN_1_4::synapse0x1b5fd50() {
   return (neuron0x1b5b1a0()*0.120915);
}

double NNfunction_NN_1_4::synapse0x1b644d0() {
   return (neuron0x1b5b3c0()*-0.137473);
}

double NNfunction_NN_1_4::synapse0x1b64510() {
   return (neuron0x1b5b700()*0.132801);
}

double NNfunction_NN_1_4::synapse0x1b64550() {
   return (neuron0x1b5ba40()*0.279427);
}

double NNfunction_NN_1_4::synapse0x1b64590() {
   return (neuron0x1b5bd80()*-0.145042);
}

double NNfunction_NN_1_4::synapse0x1b645d0() {
   return (neuron0x1b5c0c0()*-0.310037);
}

double NNfunction_NN_1_4::synapse0x1b64610() {
   return (neuron0x1b5c400()*-0.548857);
}

double NNfunction_NN_1_4::synapse0x1b64990() {
   return (neuron0x1b57840()*0.52262);
}

double NNfunction_NN_1_4::synapse0x1b649d0() {
   return (neuron0x1b57b80()*-0.428826);
}

double NNfunction_NN_1_4::synapse0x1b64a10() {
   return (neuron0x1b57ec0()*-0.407146);
}

double NNfunction_NN_1_4::synapse0x1b64a50() {
   return (neuron0x1b58200()*0.246386);
}

double NNfunction_NN_1_4::synapse0x1b64a90() {
   return (neuron0x1b58540()*-0.680918);
}

double NNfunction_NN_1_4::synapse0x1b64ad0() {
   return (neuron0x1b58880()*0.306021);
}

double NNfunction_NN_1_4::synapse0x1b64b10() {
   return (neuron0x1b58bc0()*-0.0978039);
}

double NNfunction_NN_1_4::synapse0x1b64b50() {
   return (neuron0x1b58f00()*-0.256358);
}

double NNfunction_NN_1_4::synapse0x1b64b90() {
   return (neuron0x1b59240()*0.129599);
}

double NNfunction_NN_1_4::synapse0x1b64bd0() {
   return (neuron0x1b59580()*-0.215441);
}

double NNfunction_NN_1_4::synapse0x1b64c10() {
   return (neuron0x1b598c0()*-0.382267);
}

double NNfunction_NN_1_4::synapse0x1b64c50() {
   return (neuron0x1b59c00()*0.521759);
}

double NNfunction_NN_1_4::synapse0x1b64c90() {
   return (neuron0x1b59f40()*0.0266296);
}

double NNfunction_NN_1_4::synapse0x1b64cd0() {
   return (neuron0x1b5a280()*0.085309);
}

double NNfunction_NN_1_4::synapse0x1b64d10() {
   return (neuron0x1b5a5c0()*-0.124035);
}

double NNfunction_NN_1_4::synapse0x1b64d50() {
   return (neuron0x1b5a900()*0.399172);
}

double NNfunction_NN_1_4::synapse0x1b647e0() {
   return (neuron0x1b5ac40()*-1.08308);
}

double NNfunction_NN_1_4::synapse0x1b64820() {
   return (neuron0x1b5b1a0()*0.712238);
}

double NNfunction_NN_1_4::synapse0x1b64ea0() {
   return (neuron0x1b5b3c0()*0.78373);
}

double NNfunction_NN_1_4::synapse0x1b64ee0() {
   return (neuron0x1b5b700()*-0.303619);
}

double NNfunction_NN_1_4::synapse0x1b64f20() {
   return (neuron0x1b5ba40()*-0.264808);
}

double NNfunction_NN_1_4::synapse0x1b64f60() {
   return (neuron0x1b5bd80()*0.106378);
}

double NNfunction_NN_1_4::synapse0x1b64fa0() {
   return (neuron0x1b5c0c0()*0.325951);
}

double NNfunction_NN_1_4::synapse0x1b64fe0() {
   return (neuron0x1b5c400()*-0.803834);
}

double NNfunction_NN_1_4::synapse0x1b65360() {
   return (neuron0x1b57840()*0.10992);
}

double NNfunction_NN_1_4::synapse0x1b653a0() {
   return (neuron0x1b57b80()*-9.4793);
}

double NNfunction_NN_1_4::synapse0x1b653e0() {
   return (neuron0x1b57ec0()*0.889063);
}

double NNfunction_NN_1_4::synapse0x1b65420() {
   return (neuron0x1b58200()*-0.0261052);
}

double NNfunction_NN_1_4::synapse0x1b65460() {
   return (neuron0x1b58540()*-0.0224383);
}

double NNfunction_NN_1_4::synapse0x1b654a0() {
   return (neuron0x1b58880()*-0.0696803);
}

double NNfunction_NN_1_4::synapse0x1b654e0() {
   return (neuron0x1b58bc0()*-0.002381);
}

double NNfunction_NN_1_4::synapse0x1b65520() {
   return (neuron0x1b58f00()*-0.034499);
}

double NNfunction_NN_1_4::synapse0x1b65560() {
   return (neuron0x1b59240()*-0.000359743);
}

double NNfunction_NN_1_4::synapse0x1b655a0() {
   return (neuron0x1b59580()*0.0667869);
}

double NNfunction_NN_1_4::synapse0x1b655e0() {
   return (neuron0x1b598c0()*0.0399865);
}

double NNfunction_NN_1_4::synapse0x1b65620() {
   return (neuron0x1b59c00()*0.319694);
}

double NNfunction_NN_1_4::synapse0x1b65660() {
   return (neuron0x1b59f40()*0.05318);
}

double NNfunction_NN_1_4::synapse0x1b656a0() {
   return (neuron0x1b5a280()*0.0643866);
}

double NNfunction_NN_1_4::synapse0x1b656e0() {
   return (neuron0x1b5a5c0()*0.0249107);
}

double NNfunction_NN_1_4::synapse0x1b65720() {
   return (neuron0x1b5a900()*-0.045112);
}

double NNfunction_NN_1_4::synapse0x1b651b0() {
   return (neuron0x1b5ac40()*-0.0568561);
}

double NNfunction_NN_1_4::synapse0x1b651f0() {
   return (neuron0x1b5b1a0()*0.0264201);
}

double NNfunction_NN_1_4::synapse0x1b65870() {
   return (neuron0x1b5b3c0()*0.00535495);
}

double NNfunction_NN_1_4::synapse0x1b658b0() {
   return (neuron0x1b5b700()*0.0651487);
}

double NNfunction_NN_1_4::synapse0x1b658f0() {
   return (neuron0x1b5ba40()*0.00874459);
}

double NNfunction_NN_1_4::synapse0x1b65930() {
   return (neuron0x1b5bd80()*-0.010432);
}

double NNfunction_NN_1_4::synapse0x1b65970() {
   return (neuron0x1b5c0c0()*-0.0225423);
}

double NNfunction_NN_1_4::synapse0x1b659b0() {
   return (neuron0x1b5c400()*0.271133);
}

double NNfunction_NN_1_4::synapse0x1b65d30() {
   return (neuron0x1b57840()*0.0178755);
}

double NNfunction_NN_1_4::synapse0x1b65d70() {
   return (neuron0x1b57b80()*2.51758);
}

double NNfunction_NN_1_4::synapse0x1b65db0() {
   return (neuron0x1b57ec0()*0.0842845);
}

double NNfunction_NN_1_4::synapse0x1b65df0() {
   return (neuron0x1b58200()*0.0586606);
}

double NNfunction_NN_1_4::synapse0x1b65e30() {
   return (neuron0x1b58540()*-0.00258408);
}

double NNfunction_NN_1_4::synapse0x1b65e70() {
   return (neuron0x1b58880()*0.000837284);
}

double NNfunction_NN_1_4::synapse0x1b65eb0() {
   return (neuron0x1b58bc0()*0.00991178);
}

double NNfunction_NN_1_4::synapse0x1b65ef0() {
   return (neuron0x1b58f00()*-0.0178693);
}

double NNfunction_NN_1_4::synapse0x1b65f30() {
   return (neuron0x1b59240()*-0.00284352);
}

double NNfunction_NN_1_4::synapse0x1b65f70() {
   return (neuron0x1b59580()*0.0052803);
}

double NNfunction_NN_1_4::synapse0x1b65fb0() {
   return (neuron0x1b598c0()*0.00982845);
}

double NNfunction_NN_1_4::synapse0x1b65ff0() {
   return (neuron0x1b59c00()*0.576896);
}

double NNfunction_NN_1_4::synapse0x1b66030() {
   return (neuron0x1b59f40()*-0.020129);
}

double NNfunction_NN_1_4::synapse0x1b66070() {
   return (neuron0x1b5a280()*0.0266908);
}

double NNfunction_NN_1_4::synapse0x1b660b0() {
   return (neuron0x1b5a5c0()*0.0656467);
}

double NNfunction_NN_1_4::synapse0x1b660f0() {
   return (neuron0x1b5a900()*0.00237179);
}

double NNfunction_NN_1_4::synapse0x1b65b80() {
   return (neuron0x1b5ac40()*0.0237716);
}

double NNfunction_NN_1_4::synapse0x1b65bc0() {
   return (neuron0x1b5b1a0()*0.000775319);
}

double NNfunction_NN_1_4::synapse0x1b66240() {
   return (neuron0x1b5b3c0()*0.0554507);
}

double NNfunction_NN_1_4::synapse0x1b66280() {
   return (neuron0x1b5b700()*0.00179993);
}

double NNfunction_NN_1_4::synapse0x1b662c0() {
   return (neuron0x1b5ba40()*0.0251043);
}

double NNfunction_NN_1_4::synapse0x1b66300() {
   return (neuron0x1b5bd80()*0.0329507);
}

double NNfunction_NN_1_4::synapse0x1b66340() {
   return (neuron0x1b5c0c0()*-0.000100273);
}

double NNfunction_NN_1_4::synapse0x1b66380() {
   return (neuron0x1b5c400()*-0.398561);
}

double NNfunction_NN_1_4::synapse0x1b66700() {
   return (neuron0x1b57840()*0.0352852);
}

double NNfunction_NN_1_4::synapse0x1b57a60() {
   return (neuron0x1b57b80()*0.249518);
}

double NNfunction_NN_1_4::synapse0x1b57aa0() {
   return (neuron0x1b57ec0()*-0.0721026);
}

double NNfunction_NN_1_4::synapse0x1b57da0() {
   return (neuron0x1b58200()*-0.00992851);
}

double NNfunction_NN_1_4::synapse0x1b57de0() {
   return (neuron0x1b58540()*0.15451);
}

double NNfunction_NN_1_4::synapse0x1b580e0() {
   return (neuron0x1b58880()*0.00846548);
}

double NNfunction_NN_1_4::synapse0x1b58120() {
   return (neuron0x1b58bc0()*0.0246917);
}

double NNfunction_NN_1_4::synapse0x1b58420() {
   return (neuron0x1b58f00()*-0.0746883);
}

double NNfunction_NN_1_4::synapse0x1b58460() {
   return (neuron0x1b59240()*0.0728642);
}

double NNfunction_NN_1_4::synapse0x1b58760() {
   return (neuron0x1b59580()*-0.220397);
}

double NNfunction_NN_1_4::synapse0x1b587a0() {
   return (neuron0x1b598c0()*0.121371);
}

double NNfunction_NN_1_4::synapse0x1b58aa0() {
   return (neuron0x1b59c00()*-0.403752);
}

double NNfunction_NN_1_4::synapse0x1b58ae0() {
   return (neuron0x1b59f40()*-0.439203);
}

double NNfunction_NN_1_4::synapse0x1b58de0() {
   return (neuron0x1b5a280()*-0.0967062);
}

double NNfunction_NN_1_4::synapse0x1b58e20() {
   return (neuron0x1b5a5c0()*0.0239224);
}

double NNfunction_NN_1_4::synapse0x1b59120() {
   return (neuron0x1b5a900()*0.00756223);
}

double NNfunction_NN_1_4::synapse0x1b59160() {
   return (neuron0x1b5ac40()*0.0268487);
}

double NNfunction_NN_1_4::synapse0x1b59460() {
   return (neuron0x1b5b1a0()*-0.124566);
}

double NNfunction_NN_1_4::synapse0x1b594a0() {
   return (neuron0x1b5b3c0()*0.182381);
}

double NNfunction_NN_1_4::synapse0x1b597a0() {
   return (neuron0x1b5b700()*-0.135254);
}

double NNfunction_NN_1_4::synapse0x1b597e0() {
   return (neuron0x1b5ba40()*-0.0568314);
}

double NNfunction_NN_1_4::synapse0x1b59ae0() {
   return (neuron0x1b5bd80()*0.0533012);
}

double NNfunction_NN_1_4::synapse0x1b59b20() {
   return (neuron0x1b5c0c0()*0.0990864);
}

double NNfunction_NN_1_4::synapse0x1b59e20() {
   return (neuron0x1b5c400()*-0.281745);
}

double NNfunction_NN_1_4::synapse0x1b59e60() {
   return (neuron0x1b57840()*0.038411);
}

double NNfunction_NN_1_4::synapse0x1b5ab20() {
   return (neuron0x1b57b80()*0.849158);
}

double NNfunction_NN_1_4::synapse0x1b5ab60() {
   return (neuron0x1b57ec0()*0.363801);
}

double NNfunction_NN_1_4::synapse0x1b66550() {
   return (neuron0x1b58200()*-0.0334863);
}

double NNfunction_NN_1_4::synapse0x1b66590() {
   return (neuron0x1b58540()*-0.000732466);
}

double NNfunction_NN_1_4::synapse0x1b5ae60() {
   return (neuron0x1b58880()*0.00469868);
}

double NNfunction_NN_1_4::synapse0x1b5aea0() {
   return (neuron0x1b58bc0()*-0.01336);
}

double NNfunction_NN_1_4::synapse0x1908df0() {
   return (neuron0x1b58f00()*0.0129021);
}

double NNfunction_NN_1_4::synapse0x1908e30() {
   return (neuron0x1b59240()*0.00915021);
}

double NNfunction_NN_1_4::synapse0x1b5b5e0() {
   return (neuron0x1b59580()*0.00294926);
}

double NNfunction_NN_1_4::synapse0x1b5b620() {
   return (neuron0x1b598c0()*0.00203841);
}

double NNfunction_NN_1_4::synapse0x1b5b920() {
   return (neuron0x1b59c00()*0.243799);
}

double NNfunction_NN_1_4::synapse0x1b5b960() {
   return (neuron0x1b59f40()*0.016717);
}

double NNfunction_NN_1_4::synapse0x1b5bc60() {
   return (neuron0x1b5a280()*0.0202004);
}

double NNfunction_NN_1_4::synapse0x1b5bca0() {
   return (neuron0x1b5a5c0()*0.00782048);
}

double NNfunction_NN_1_4::synapse0x1b5bfa0() {
   return (neuron0x1b5a900()*0.00408268);
}

double NNfunction_NN_1_4::synapse0x1b5bfe0() {
   return (neuron0x1b5ac40()*-0.00638846);
}

double NNfunction_NN_1_4::synapse0x1b5c2e0() {
   return (neuron0x1b5b1a0()*-0.0139732);
}

double NNfunction_NN_1_4::synapse0x1b5c320() {
   return (neuron0x1b5b3c0()*-0.00588325);
}

double NNfunction_NN_1_4::synapse0x1b5c620() {
   return (neuron0x1b5b700()*0.000750301);
}

double NNfunction_NN_1_4::synapse0x1b5c660() {
   return (neuron0x1b5ba40()*0.00713648);
}

double NNfunction_NN_1_4::synapse0x1b5a160() {
   return (neuron0x1b5bd80()*0.0165545);
}

double NNfunction_NN_1_4::synapse0x1b5a1a0() {
   return (neuron0x1b5c0c0()*0.0111989);
}

double NNfunction_NN_1_4::synapse0x1b68470() {
   return (neuron0x1b5c400()*-0.446968);
}

double NNfunction_NN_1_4::synapse0x1b687f0() {
   return (neuron0x1b57840()*0.800808);
}

double NNfunction_NN_1_4::synapse0x1b68830() {
   return (neuron0x1b57b80()*0.568328);
}

double NNfunction_NN_1_4::synapse0x1b68870() {
   return (neuron0x1b57ec0()*0.00885925);
}

double NNfunction_NN_1_4::synapse0x1b688b0() {
   return (neuron0x1b58200()*-0.0623905);
}

double NNfunction_NN_1_4::synapse0x1b688f0() {
   return (neuron0x1b58540()*-0.668385);
}

double NNfunction_NN_1_4::synapse0x1b68930() {
   return (neuron0x1b58880()*0.329683);
}

double NNfunction_NN_1_4::synapse0x1b68970() {
   return (neuron0x1b58bc0()*0.168871);
}

double NNfunction_NN_1_4::synapse0x1b689b0() {
   return (neuron0x1b58f00()*0.213109);
}

double NNfunction_NN_1_4::synapse0x1b689f0() {
   return (neuron0x1b59240()*0.364831);
}

double NNfunction_NN_1_4::synapse0x1b68a30() {
   return (neuron0x1b59580()*-0.604768);
}

double NNfunction_NN_1_4::synapse0x1b68a70() {
   return (neuron0x1b598c0()*-0.05296);
}

double NNfunction_NN_1_4::synapse0x1b68ab0() {
   return (neuron0x1b59c00()*-0.00823037);
}

double NNfunction_NN_1_4::synapse0x1b68af0() {
   return (neuron0x1b59f40()*0.232896);
}

double NNfunction_NN_1_4::synapse0x1b68b30() {
   return (neuron0x1b5a280()*-0.0126497);
}

double NNfunction_NN_1_4::synapse0x1b68b70() {
   return (neuron0x1b5a5c0()*-0.411951);
}

double NNfunction_NN_1_4::synapse0x1b68bb0() {
   return (neuron0x1b5a900()*0.383372);
}

double NNfunction_NN_1_4::synapse0x1b68640() {
   return (neuron0x1b5ac40()*-0.566975);
}

double NNfunction_NN_1_4::synapse0x1b68680() {
   return (neuron0x1b5b1a0()*0.398653);
}

double NNfunction_NN_1_4::synapse0x1b68d00() {
   return (neuron0x1b5b3c0()*0.610805);
}

double NNfunction_NN_1_4::synapse0x1b68d40() {
   return (neuron0x1b5b700()*-0.400807);
}

double NNfunction_NN_1_4::synapse0x1b68d80() {
   return (neuron0x1b5ba40()*-0.791752);
}

double NNfunction_NN_1_4::synapse0x1b68dc0() {
   return (neuron0x1b5bd80()*0.453391);
}

double NNfunction_NN_1_4::synapse0x1b68e00() {
   return (neuron0x1b5c0c0()*0.39507);
}

double NNfunction_NN_1_4::synapse0x1b68e40() {
   return (neuron0x1b5c400()*-0.594352);
}

double NNfunction_NN_1_4::synapse0x1b691c0() {
   return (neuron0x1b57840()*0.0382);
}

double NNfunction_NN_1_4::synapse0x1b69200() {
   return (neuron0x1b57b80()*0.780974);
}

double NNfunction_NN_1_4::synapse0x1b69240() {
   return (neuron0x1b57ec0()*0.43881);
}

double NNfunction_NN_1_4::synapse0x1b69280() {
   return (neuron0x1b58200()*-0.00707804);
}

double NNfunction_NN_1_4::synapse0x1b692c0() {
   return (neuron0x1b58540()*-0.0131746);
}

double NNfunction_NN_1_4::synapse0x1b69300() {
   return (neuron0x1b58880()*0.00188219);
}

double NNfunction_NN_1_4::synapse0x1b69340() {
   return (neuron0x1b58bc0()*0.00112097);
}

double NNfunction_NN_1_4::synapse0x1b69380() {
   return (neuron0x1b58f00()*0.00719639);
}

double NNfunction_NN_1_4::synapse0x1b693c0() {
   return (neuron0x1b59240()*0.0154836);
}

double NNfunction_NN_1_4::synapse0x1b69400() {
   return (neuron0x1b59580()*0.00239409);
}

double NNfunction_NN_1_4::synapse0x1b69440() {
   return (neuron0x1b598c0()*0.00770159);
}

double NNfunction_NN_1_4::synapse0x1b69480() {
   return (neuron0x1b59c00()*-0.10258);
}

double NNfunction_NN_1_4::synapse0x1b694c0() {
   return (neuron0x1b59f40()*-0.0135737);
}

double NNfunction_NN_1_4::synapse0x1b69500() {
   return (neuron0x1b5a280()*0.0118525);
}

double NNfunction_NN_1_4::synapse0x1b69540() {
   return (neuron0x1b5a5c0()*0.000558574);
}

double NNfunction_NN_1_4::synapse0x1b69580() {
   return (neuron0x1b5a900()*0.00140919);
}

double NNfunction_NN_1_4::synapse0x1b69010() {
   return (neuron0x1b5ac40()*0.0113392);
}

double NNfunction_NN_1_4::synapse0x1b69050() {
   return (neuron0x1b5b1a0()*-0.00291846);
}

double NNfunction_NN_1_4::synapse0x1b696d0() {
   return (neuron0x1b5b3c0()*0.0159717);
}

double NNfunction_NN_1_4::synapse0x1b69710() {
   return (neuron0x1b5b700()*-0.0065821);
}

double NNfunction_NN_1_4::synapse0x1b69750() {
   return (neuron0x1b5ba40()*0.0114732);
}

double NNfunction_NN_1_4::synapse0x1b69790() {
   return (neuron0x1b5bd80()*0.0193706);
}

double NNfunction_NN_1_4::synapse0x1b697d0() {
   return (neuron0x1b5c0c0()*-0.0150952);
}

double NNfunction_NN_1_4::synapse0x1b69810() {
   return (neuron0x1b5c400()*-0.617432);
}

double NNfunction_NN_1_4::synapse0x1b69b90() {
   return (neuron0x1b57840()*-0.289507);
}

double NNfunction_NN_1_4::synapse0x1b69bd0() {
   return (neuron0x1b57b80()*-0.000387121);
}

double NNfunction_NN_1_4::synapse0x1b69c10() {
   return (neuron0x1b57ec0()*0.0347633);
}

double NNfunction_NN_1_4::synapse0x1b69c50() {
   return (neuron0x1b58200()*-0.766656);
}

double NNfunction_NN_1_4::synapse0x1b69c90() {
   return (neuron0x1b58540()*1.29795);
}

double NNfunction_NN_1_4::synapse0x1b69cd0() {
   return (neuron0x1b58880()*0.724712);
}

double NNfunction_NN_1_4::synapse0x1b69d10() {
   return (neuron0x1b58bc0()*0.528342);
}

double NNfunction_NN_1_4::synapse0x1b69d50() {
   return (neuron0x1b58f00()*-0.624768);
}

double NNfunction_NN_1_4::synapse0x1b69d90() {
   return (neuron0x1b59240()*0.58289);
}

double NNfunction_NN_1_4::synapse0x1b69dd0() {
   return (neuron0x1b59580()*-0.230536);
}

double NNfunction_NN_1_4::synapse0x1b69e10() {
   return (neuron0x1b598c0()*0.107128);
}

double NNfunction_NN_1_4::synapse0x1b69e50() {
   return (neuron0x1b59c00()*0.415288);
}

double NNfunction_NN_1_4::synapse0x1b69e90() {
   return (neuron0x1b59f40()*-0.343387);
}

double NNfunction_NN_1_4::synapse0x1b69ed0() {
   return (neuron0x1b5a280()*0.186727);
}

double NNfunction_NN_1_4::synapse0x1b69f10() {
   return (neuron0x1b5a5c0()*-0.689985);
}

double NNfunction_NN_1_4::synapse0x1b69f50() {
   return (neuron0x1b5a900()*0.394051);
}

double NNfunction_NN_1_4::synapse0x1b699e0() {
   return (neuron0x1b5ac40()*-0.402864);
}

double NNfunction_NN_1_4::synapse0x1b69a20() {
   return (neuron0x1b5b1a0()*0.340404);
}

double NNfunction_NN_1_4::synapse0x1b6a0a0() {
   return (neuron0x1b5b3c0()*0.569459);
}

double NNfunction_NN_1_4::synapse0x1b6a0e0() {
   return (neuron0x1b5b700()*-0.501404);
}

double NNfunction_NN_1_4::synapse0x1b6a120() {
   return (neuron0x1b5ba40()*-0.639469);
}

double NNfunction_NN_1_4::synapse0x1b6a160() {
   return (neuron0x1b5bd80()*-0.255073);
}

double NNfunction_NN_1_4::synapse0x1b6a1a0() {
   return (neuron0x1b5c0c0()*-0.257612);
}

double NNfunction_NN_1_4::synapse0x1b6a1e0() {
   return (neuron0x1b5c400()*-0.325376);
}

double NNfunction_NN_1_4::synapse0x1b6a560() {
   return (neuron0x1b57840()*-0.0681358);
}

double NNfunction_NN_1_4::synapse0x1b6a5a0() {
   return (neuron0x1b57b80()*-0.0104078);
}

double NNfunction_NN_1_4::synapse0x1b6a5e0() {
   return (neuron0x1b57ec0()*0.254116);
}

double NNfunction_NN_1_4::synapse0x1b6a620() {
   return (neuron0x1b58200()*0.0501902);
}

double NNfunction_NN_1_4::synapse0x1b6a660() {
   return (neuron0x1b58540()*-0.0927291);
}

double NNfunction_NN_1_4::synapse0x1b6a6a0() {
   return (neuron0x1b58880()*0.0248059);
}

double NNfunction_NN_1_4::synapse0x1b6a6e0() {
   return (neuron0x1b58bc0()*0.011237);
}

double NNfunction_NN_1_4::synapse0x1b6a720() {
   return (neuron0x1b58f00()*-0.00170524);
}

double NNfunction_NN_1_4::synapse0x1b6a760() {
   return (neuron0x1b59240()*-0.128907);
}

double NNfunction_NN_1_4::synapse0x1b6a7a0() {
   return (neuron0x1b59580()*0.198203);
}

double NNfunction_NN_1_4::synapse0x1b6a7e0() {
   return (neuron0x1b598c0()*-0.14128);
}

double NNfunction_NN_1_4::synapse0x1b6a820() {
   return (neuron0x1b59c00()*-0.244464);
}

double NNfunction_NN_1_4::synapse0x1b6a860() {
   return (neuron0x1b59f40()*1.60769);
}

double NNfunction_NN_1_4::synapse0x1b6a8a0() {
   return (neuron0x1b5a280()*0.011186);
}

double NNfunction_NN_1_4::synapse0x1b6a8e0() {
   return (neuron0x1b5a5c0()*-0.0161379);
}

double NNfunction_NN_1_4::synapse0x1b6a920() {
   return (neuron0x1b5a900()*0.00254114);
}

double NNfunction_NN_1_4::synapse0x1b6a3b0() {
   return (neuron0x1b5ac40()*0.00824584);
}

double NNfunction_NN_1_4::synapse0x1b6a3f0() {
   return (neuron0x1b5b1a0()*0.0855629);
}

double NNfunction_NN_1_4::synapse0x1b6aa70() {
   return (neuron0x1b5b3c0()*-0.183723);
}

double NNfunction_NN_1_4::synapse0x1b6aab0() {
   return (neuron0x1b5b700()*0.04449);
}

double NNfunction_NN_1_4::synapse0x1b6aaf0() {
   return (neuron0x1b5ba40()*0.0842693);
}

double NNfunction_NN_1_4::synapse0x1b6ab30() {
   return (neuron0x1b5bd80()*-0.0386036);
}

double NNfunction_NN_1_4::synapse0x1b6ab70() {
   return (neuron0x1b5c0c0()*-0.00469636);
}

double NNfunction_NN_1_4::synapse0x1b6abb0() {
   return (neuron0x1b5c400()*0.266653);
}

double NNfunction_NN_1_4::synapse0x1b6af30() {
   return (neuron0x1b57840()*-0.184024);
}

double NNfunction_NN_1_4::synapse0x1b6af70() {
   return (neuron0x1b57b80()*1.24538);
}

double NNfunction_NN_1_4::synapse0x1b6afb0() {
   return (neuron0x1b57ec0()*1.39391);
}

double NNfunction_NN_1_4::synapse0x1b6aff0() {
   return (neuron0x1b58200()*0.563697);
}

double NNfunction_NN_1_4::synapse0x1b6b030() {
   return (neuron0x1b58540()*0.156044);
}

double NNfunction_NN_1_4::synapse0x1b6b070() {
   return (neuron0x1b58880()*0.606491);
}

double NNfunction_NN_1_4::synapse0x1b6b0b0() {
   return (neuron0x1b58bc0()*-0.420321);
}

double NNfunction_NN_1_4::synapse0x1b6b0f0() {
   return (neuron0x1b58f00()*-0.724274);
}

double NNfunction_NN_1_4::synapse0x1b6b130() {
   return (neuron0x1b59240()*-0.514821);
}

double NNfunction_NN_1_4::synapse0x1b632f0() {
   return (neuron0x1b59580()*0.22986);
}

double NNfunction_NN_1_4::synapse0x1b63330() {
   return (neuron0x1b598c0()*-0.177978);
}

double NNfunction_NN_1_4::synapse0x1b63370() {
   return (neuron0x1b59c00()*0.12467);
}

double NNfunction_NN_1_4::synapse0x1b633b0() {
   return (neuron0x1b59f40()*0.214086);
}

double NNfunction_NN_1_4::synapse0x1b633f0() {
   return (neuron0x1b5a280()*0.327395);
}

double NNfunction_NN_1_4::synapse0x1b63430() {
   return (neuron0x1b5a5c0()*-0.536743);
}

double NNfunction_NN_1_4::synapse0x1b63470() {
   return (neuron0x1b5a900()*0.7047);
}

double NNfunction_NN_1_4::synapse0x1b6ad80() {
   return (neuron0x1b5ac40()*1.04547);
}

double NNfunction_NN_1_4::synapse0x1b6adc0() {
   return (neuron0x1b5b1a0()*-0.310398);
}

double NNfunction_NN_1_4::synapse0x1b635c0() {
   return (neuron0x1b5b3c0()*-0.0130687);
}

double NNfunction_NN_1_4::synapse0x1b63600() {
   return (neuron0x1b5b700()*0.974182);
}

double NNfunction_NN_1_4::synapse0x1b63640() {
   return (neuron0x1b5ba40()*0.699091);
}

double NNfunction_NN_1_4::synapse0x1b63680() {
   return (neuron0x1b5bd80()*-0.334569);
}

double NNfunction_NN_1_4::synapse0x1b636c0() {
   return (neuron0x1b5c0c0()*0.30202);
}

double NNfunction_NN_1_4::synapse0x1b63700() {
   return (neuron0x1b5c400()*0.3981);
}

double NNfunction_NN_1_4::synapse0x1b63a80() {
   return (neuron0x1b57840()*-0.333831);
}

double NNfunction_NN_1_4::synapse0x1b63ac0() {
   return (neuron0x1b57b80()*-0.324816);
}

double NNfunction_NN_1_4::synapse0x1b63b00() {
   return (neuron0x1b57ec0()*0.477315);
}

double NNfunction_NN_1_4::synapse0x1b63b40() {
   return (neuron0x1b58200()*0.170958);
}

double NNfunction_NN_1_4::synapse0x1b63b80() {
   return (neuron0x1b58540()*-0.238927);
}

double NNfunction_NN_1_4::synapse0x1b63bc0() {
   return (neuron0x1b58880()*0.203929);
}

double NNfunction_NN_1_4::synapse0x1b63c00() {
   return (neuron0x1b58bc0()*-0.307483);
}

double NNfunction_NN_1_4::synapse0x1b63c40() {
   return (neuron0x1b58f00()*0.21409);
}

double NNfunction_NN_1_4::synapse0x1b63c80() {
   return (neuron0x1b59240()*-0.184898);
}

double NNfunction_NN_1_4::synapse0x1b63cc0() {
   return (neuron0x1b59580()*0.173332);
}

double NNfunction_NN_1_4::synapse0x1b63d00() {
   return (neuron0x1b598c0()*0.0760861);
}

double NNfunction_NN_1_4::synapse0x1b63d40() {
   return (neuron0x1b59c00()*-0.57506);
}

double NNfunction_NN_1_4::synapse0x1b63d80() {
   return (neuron0x1b59f40()*-0.517187);
}

double NNfunction_NN_1_4::synapse0x1b63dc0() {
   return (neuron0x1b5a280()*-0.612003);
}

double NNfunction_NN_1_4::synapse0x1b63e00() {
   return (neuron0x1b5a5c0()*0.431797);
}

double NNfunction_NN_1_4::synapse0x1b63e40() {
   return (neuron0x1b5a900()*0.634961);
}

double NNfunction_NN_1_4::synapse0x1b638d0() {
   return (neuron0x1b5ac40()*-0.100118);
}

double NNfunction_NN_1_4::synapse0x1b63910() {
   return (neuron0x1b5b1a0()*0.132939);
}

double NNfunction_NN_1_4::synapse0x1b63f90() {
   return (neuron0x1b5b3c0()*-0.238275);
}

double NNfunction_NN_1_4::synapse0x1b63fd0() {
   return (neuron0x1b5b700()*-0.0581082);
}

double NNfunction_NN_1_4::synapse0x1b64010() {
   return (neuron0x1b5ba40()*-0.324845);
}

double NNfunction_NN_1_4::synapse0x1b64050() {
   return (neuron0x1b5bd80()*-0.387797);
}

double NNfunction_NN_1_4::synapse0x1b64090() {
   return (neuron0x1b5c0c0()*0.0262323);
}

double NNfunction_NN_1_4::synapse0x1b640d0() {
   return (neuron0x1b5c400()*-0.0361384);
}

double NNfunction_NN_1_4::synapse0x1b642a0() {
   return (neuron0x1b57840()*0.0876919);
}

double NNfunction_NN_1_4::synapse0x1b6d330() {
   return (neuron0x1b57b80()*-0.117616);
}

double NNfunction_NN_1_4::synapse0x1b6d370() {
   return (neuron0x1b57ec0()*1.09252);
}

double NNfunction_NN_1_4::synapse0x1b6d3b0() {
   return (neuron0x1b58200()*0.0588474);
}

double NNfunction_NN_1_4::synapse0x1b6d3f0() {
   return (neuron0x1b58540()*0.0127612);
}

double NNfunction_NN_1_4::synapse0x1b6d430() {
   return (neuron0x1b58880()*-0.116641);
}

double NNfunction_NN_1_4::synapse0x1b6d470() {
   return (neuron0x1b58bc0()*0.0953476);
}

double NNfunction_NN_1_4::synapse0x1b6d4b0() {
   return (neuron0x1b58f00()*-0.010764);
}

double NNfunction_NN_1_4::synapse0x1b6d4f0() {
   return (neuron0x1b59240()*0.0246118);
}

double NNfunction_NN_1_4::synapse0x1b6d530() {
   return (neuron0x1b59580()*-0.0198629);
}

double NNfunction_NN_1_4::synapse0x1b6d570() {
   return (neuron0x1b598c0()*0.0279726);
}

double NNfunction_NN_1_4::synapse0x1b6d5b0() {
   return (neuron0x1b59c00()*-0.621305);
}

double NNfunction_NN_1_4::synapse0x1b6d5f0() {
   return (neuron0x1b59f40()*-0.00389904);
}

double NNfunction_NN_1_4::synapse0x1b6d630() {
   return (neuron0x1b5a280()*-0.061932);
}

double NNfunction_NN_1_4::synapse0x1b6d670() {
   return (neuron0x1b5a5c0()*-0.00298669);
}

double NNfunction_NN_1_4::synapse0x1b6d6b0() {
   return (neuron0x1b5a900()*-0.0584346);
}

double NNfunction_NN_1_4::synapse0x1b6d180() {
   return (neuron0x1b5ac40()*-0.013519);
}

double NNfunction_NN_1_4::synapse0x1b6d1c0() {
   return (neuron0x1b5b1a0()*-0.00785867);
}

double NNfunction_NN_1_4::synapse0x1b6d800() {
   return (neuron0x1b5b3c0()*-0.059728);
}

double NNfunction_NN_1_4::synapse0x1b6d840() {
   return (neuron0x1b5b700()*0.0169943);
}

double NNfunction_NN_1_4::synapse0x1b6d880() {
   return (neuron0x1b5ba40()*0.0469965);
}

double NNfunction_NN_1_4::synapse0x1b6d8c0() {
   return (neuron0x1b5bd80()*0.0395197);
}

double NNfunction_NN_1_4::synapse0x1b6d900() {
   return (neuron0x1b5c0c0()*0.0471737);
}

double NNfunction_NN_1_4::synapse0x1b6d940() {
   return (neuron0x1b5c400()*2.93544);
}

double NNfunction_NN_1_4::synapse0x1b6dcc0() {
   return (neuron0x1b57840()*-1.14944);
}

double NNfunction_NN_1_4::synapse0x1b6dd00() {
   return (neuron0x1b57b80()*-0.124422);
}

double NNfunction_NN_1_4::synapse0x1b6dd40() {
   return (neuron0x1b57ec0()*0.342192);
}

double NNfunction_NN_1_4::synapse0x1b6dd80() {
   return (neuron0x1b58200()*0.244124);
}

double NNfunction_NN_1_4::synapse0x1b6ddc0() {
   return (neuron0x1b58540()*0.339554);
}

double NNfunction_NN_1_4::synapse0x1b6de00() {
   return (neuron0x1b58880()*0.370088);
}

double NNfunction_NN_1_4::synapse0x1b6de40() {
   return (neuron0x1b58bc0()*0.0571986);
}

double NNfunction_NN_1_4::synapse0x1b6de80() {
   return (neuron0x1b58f00()*-0.607285);
}

double NNfunction_NN_1_4::synapse0x1b6dec0() {
   return (neuron0x1b59240()*0.318786);
}

double NNfunction_NN_1_4::synapse0x1b6df00() {
   return (neuron0x1b59580()*-0.23643);
}

double NNfunction_NN_1_4::synapse0x1b6df40() {
   return (neuron0x1b598c0()*0.0758333);
}

double NNfunction_NN_1_4::synapse0x1b6df80() {
   return (neuron0x1b59c00()*-0.151642);
}

double NNfunction_NN_1_4::synapse0x1b6dfc0() {
   return (neuron0x1b59f40()*0.0503656);
}

double NNfunction_NN_1_4::synapse0x1b6e000() {
   return (neuron0x1b5a280()*0.106435);
}

double NNfunction_NN_1_4::synapse0x1b6e040() {
   return (neuron0x1b5a5c0()*-0.00990672);
}

double NNfunction_NN_1_4::synapse0x1b6e080() {
   return (neuron0x1b5a900()*0.179265);
}

double NNfunction_NN_1_4::synapse0x1b6db10() {
   return (neuron0x1b5ac40()*0.481007);
}

double NNfunction_NN_1_4::synapse0x1b6db50() {
   return (neuron0x1b5b1a0()*-0.285641);
}

double NNfunction_NN_1_4::synapse0x1b6e1d0() {
   return (neuron0x1b5b3c0()*0.0593829);
}

double NNfunction_NN_1_4::synapse0x1b6e210() {
   return (neuron0x1b5b700()*0.0243124);
}

double NNfunction_NN_1_4::synapse0x1b6e250() {
   return (neuron0x1b5ba40()*-0.0465145);
}

double NNfunction_NN_1_4::synapse0x1b6e290() {
   return (neuron0x1b5bd80()*-0.0645011);
}

double NNfunction_NN_1_4::synapse0x1b6e2d0() {
   return (neuron0x1b5c0c0()*0.188079);
}

double NNfunction_NN_1_4::synapse0x1b6e310() {
   return (neuron0x1b5c400()*0.637504);
}

double NNfunction_NN_1_4::synapse0x1b6e690() {
   return (neuron0x1b57840()*-0.0840853);
}

double NNfunction_NN_1_4::synapse0x1b6e6d0() {
   return (neuron0x1b57b80()*-0.083655);
}

double NNfunction_NN_1_4::synapse0x1b6e710() {
   return (neuron0x1b57ec0()*0.614881);
}

double NNfunction_NN_1_4::synapse0x1b6e750() {
   return (neuron0x1b58200()*0.0692129);
}

double NNfunction_NN_1_4::synapse0x1b6e790() {
   return (neuron0x1b58540()*-0.483047);
}

double NNfunction_NN_1_4::synapse0x1b6e7d0() {
   return (neuron0x1b58880()*0.0468425);
}

double NNfunction_NN_1_4::synapse0x1b6e810() {
   return (neuron0x1b58bc0()*0.126808);
}

double NNfunction_NN_1_4::synapse0x1b6e850() {
   return (neuron0x1b58f00()*-0.190526);
}

double NNfunction_NN_1_4::synapse0x1b6e890() {
   return (neuron0x1b59240()*-0.153889);
}

double NNfunction_NN_1_4::synapse0x1b6e8d0() {
   return (neuron0x1b59580()*-0.0811936);
}

double NNfunction_NN_1_4::synapse0x1b6e910() {
   return (neuron0x1b598c0()*0.193061);
}

double NNfunction_NN_1_4::synapse0x1b6e950() {
   return (neuron0x1b59c00()*-0.434147);
}

double NNfunction_NN_1_4::synapse0x1b6e990() {
   return (neuron0x1b59f40()*0.104762);
}

double NNfunction_NN_1_4::synapse0x1b6e9d0() {
   return (neuron0x1b5a280()*-0.149275);
}

double NNfunction_NN_1_4::synapse0x1b6ea10() {
   return (neuron0x1b5a5c0()*0.163503);
}

double NNfunction_NN_1_4::synapse0x1b6ea50() {
   return (neuron0x1b5a900()*-0.536269);
}

double NNfunction_NN_1_4::synapse0x1b6e4e0() {
   return (neuron0x1b5ac40()*-0.0799854);
}

double NNfunction_NN_1_4::synapse0x1b6e520() {
   return (neuron0x1b5b1a0()*-0.241016);
}

double NNfunction_NN_1_4::synapse0x1b6eba0() {
   return (neuron0x1b5b3c0()*-0.0324934);
}

double NNfunction_NN_1_4::synapse0x1b6ebe0() {
   return (neuron0x1b5b700()*0.0680442);
}

double NNfunction_NN_1_4::synapse0x1b6ec20() {
   return (neuron0x1b5ba40()*-0.0872221);
}

double NNfunction_NN_1_4::synapse0x1b6ec60() {
   return (neuron0x1b5bd80()*-0.354342);
}

double NNfunction_NN_1_4::synapse0x1b6eca0() {
   return (neuron0x1b5c0c0()*-0.13613);
}

double NNfunction_NN_1_4::synapse0x1b6ece0() {
   return (neuron0x1b5c400()*-0.136813);
}

double NNfunction_NN_1_4::synapse0x1b6f060() {
   return (neuron0x1b57840()*-0.029137);
}

double NNfunction_NN_1_4::synapse0x1b6f0a0() {
   return (neuron0x1b57b80()*-0.507179);
}

double NNfunction_NN_1_4::synapse0x1b6f0e0() {
   return (neuron0x1b57ec0()*-1.50911);
}

double NNfunction_NN_1_4::synapse0x1b6f120() {
   return (neuron0x1b58200()*-0.186244);
}

double NNfunction_NN_1_4::synapse0x1b6f160() {
   return (neuron0x1b58540()*-0.0016926);
}

double NNfunction_NN_1_4::synapse0x1b6f1a0() {
   return (neuron0x1b58880()*-0.0441646);
}

double NNfunction_NN_1_4::synapse0x1b6f1e0() {
   return (neuron0x1b58bc0()*-0.0276217);
}

double NNfunction_NN_1_4::synapse0x1b6f220() {
   return (neuron0x1b58f00()*0.0676452);
}

double NNfunction_NN_1_4::synapse0x1b6f260() {
   return (neuron0x1b59240()*0.113455);
}

double NNfunction_NN_1_4::synapse0x1b6f2a0() {
   return (neuron0x1b59580()*-0.213823);
}

double NNfunction_NN_1_4::synapse0x1b6f2e0() {
   return (neuron0x1b598c0()*-0.00309598);
}

double NNfunction_NN_1_4::synapse0x1b6f320() {
   return (neuron0x1b59c00()*1.11824);
}

double NNfunction_NN_1_4::synapse0x1b6f360() {
   return (neuron0x1b59f40()*0.00684077);
}

double NNfunction_NN_1_4::synapse0x1b6f3a0() {
   return (neuron0x1b5a280()*-0.155302);
}

double NNfunction_NN_1_4::synapse0x1b6f3e0() {
   return (neuron0x1b5a5c0()*-0.177865);
}

double NNfunction_NN_1_4::synapse0x1b6f420() {
   return (neuron0x1b5a900()*-0.000397305);
}

double NNfunction_NN_1_4::synapse0x1b6eeb0() {
   return (neuron0x1b5ac40()*-0.37777);
}

double NNfunction_NN_1_4::synapse0x1b6eef0() {
   return (neuron0x1b5b1a0()*-0.0289275);
}

double NNfunction_NN_1_4::synapse0x1b6f570() {
   return (neuron0x1b5b3c0()*0.0657282);
}

double NNfunction_NN_1_4::synapse0x1b6f5b0() {
   return (neuron0x1b5b700()*0.0691082);
}

double NNfunction_NN_1_4::synapse0x1b6f5f0() {
   return (neuron0x1b5ba40()*0.0466605);
}

double NNfunction_NN_1_4::synapse0x1b6f630() {
   return (neuron0x1b5bd80()*0.00210737);
}

double NNfunction_NN_1_4::synapse0x1b6f670() {
   return (neuron0x1b5c0c0()*-0.0600676);
}

double NNfunction_NN_1_4::synapse0x1b6f6b0() {
   return (neuron0x1b5c400()*1.09541);
}

double NNfunction_NN_1_4::synapse0x1b6fa30() {
   return (neuron0x1b57840()*0.582186);
}

double NNfunction_NN_1_4::synapse0x1b6fa70() {
   return (neuron0x1b57b80()*-0.468548);
}

double NNfunction_NN_1_4::synapse0x1b6fab0() {
   return (neuron0x1b57ec0()*-1.02413);
}

double NNfunction_NN_1_4::synapse0x1b6faf0() {
   return (neuron0x1b58200()*-0.285518);
}

double NNfunction_NN_1_4::synapse0x1b6fb30() {
   return (neuron0x1b58540()*-0.0121625);
}

double NNfunction_NN_1_4::synapse0x1b6fb70() {
   return (neuron0x1b58880()*0.260517);
}

double NNfunction_NN_1_4::synapse0x1b6fbb0() {
   return (neuron0x1b58bc0()*-0.529328);
}

double NNfunction_NN_1_4::synapse0x1b6fbf0() {
   return (neuron0x1b58f00()*0.917276);
}

double NNfunction_NN_1_4::synapse0x1b6fc30() {
   return (neuron0x1b59240()*-0.880103);
}

double NNfunction_NN_1_4::synapse0x1b6fc70() {
   return (neuron0x1b59580()*0.379316);
}

double NNfunction_NN_1_4::synapse0x1b6fcb0() {
   return (neuron0x1b598c0()*-0.253053);
}

double NNfunction_NN_1_4::synapse0x1b6fcf0() {
   return (neuron0x1b59c00()*-0.942497);
}

double NNfunction_NN_1_4::synapse0x1b6fd30() {
   return (neuron0x1b59f40()*-0.117143);
}

double NNfunction_NN_1_4::synapse0x1b6fd70() {
   return (neuron0x1b5a280()*0.17693);
}

double NNfunction_NN_1_4::synapse0x1b6fdb0() {
   return (neuron0x1b5a5c0()*0.298464);
}

double NNfunction_NN_1_4::synapse0x1b6fdf0() {
   return (neuron0x1b5a900()*0.27381);
}

double NNfunction_NN_1_4::synapse0x1b6f880() {
   return (neuron0x1b5ac40()*0.0113145);
}

double NNfunction_NN_1_4::synapse0x1b6f8c0() {
   return (neuron0x1b5b1a0()*-0.728419);
}

double NNfunction_NN_1_4::synapse0x1b6ff40() {
   return (neuron0x1b5b3c0()*-0.14055);
}

double NNfunction_NN_1_4::synapse0x1b6ff80() {
   return (neuron0x1b5b700()*0.127131);
}

double NNfunction_NN_1_4::synapse0x1b6ffc0() {
   return (neuron0x1b5ba40()*-0.0497692);
}

double NNfunction_NN_1_4::synapse0x1b70000() {
   return (neuron0x1b5bd80()*-0.756241);
}

double NNfunction_NN_1_4::synapse0x1b70040() {
   return (neuron0x1b5c0c0()*0.237383);
}

double NNfunction_NN_1_4::synapse0x1b70080() {
   return (neuron0x1b5c400()*-1.59073);
}

double NNfunction_NN_1_4::synapse0x1b70400() {
   return (neuron0x1b57840()*-0.0716693);
}

double NNfunction_NN_1_4::synapse0x1b70440() {
   return (neuron0x1b57b80()*0.104293);
}

double NNfunction_NN_1_4::synapse0x1b70480() {
   return (neuron0x1b57ec0()*0.321813);
}

double NNfunction_NN_1_4::synapse0x1b704c0() {
   return (neuron0x1b58200()*-0.0034022);
}

double NNfunction_NN_1_4::synapse0x1b70500() {
   return (neuron0x1b58540()*0.117739);
}

double NNfunction_NN_1_4::synapse0x1b70540() {
   return (neuron0x1b58880()*-0.077754);
}

double NNfunction_NN_1_4::synapse0x1b70580() {
   return (neuron0x1b58bc0()*-0.108435);
}

double NNfunction_NN_1_4::synapse0x1b705c0() {
   return (neuron0x1b58f00()*0.204644);
}

double NNfunction_NN_1_4::synapse0x1b70600() {
   return (neuron0x1b59240()*-0.562021);
}

double NNfunction_NN_1_4::synapse0x1b70640() {
   return (neuron0x1b59580()*-0.311438);
}

double NNfunction_NN_1_4::synapse0x1b70680() {
   return (neuron0x1b598c0()*0.0229379);
}

double NNfunction_NN_1_4::synapse0x1b706c0() {
   return (neuron0x1b59c00()*-0.0462617);
}

double NNfunction_NN_1_4::synapse0x1b70700() {
   return (neuron0x1b59f40()*-0.0454447);
}

double NNfunction_NN_1_4::synapse0x1b70740() {
   return (neuron0x1b5a280()*-0.172885);
}

double NNfunction_NN_1_4::synapse0x1b70780() {
   return (neuron0x1b5a5c0()*-0.127959);
}

double NNfunction_NN_1_4::synapse0x1b707c0() {
   return (neuron0x1b5a900()*0.182564);
}

double NNfunction_NN_1_4::synapse0x1b70250() {
   return (neuron0x1b5ac40()*0.0773685);
}

double NNfunction_NN_1_4::synapse0x1b70290() {
   return (neuron0x1b5b1a0()*-0.325459);
}

double NNfunction_NN_1_4::synapse0x1b70910() {
   return (neuron0x1b5b3c0()*-0.262872);
}

double NNfunction_NN_1_4::synapse0x1b70950() {
   return (neuron0x1b5b700()*0.339985);
}

double NNfunction_NN_1_4::synapse0x1b70990() {
   return (neuron0x1b5ba40()*0.00705468);
}

double NNfunction_NN_1_4::synapse0x1b709d0() {
   return (neuron0x1b5bd80()*-0.361123);
}

double NNfunction_NN_1_4::synapse0x1b70a10() {
   return (neuron0x1b5c0c0()*0.44002);
}

double NNfunction_NN_1_4::synapse0x1b70a50() {
   return (neuron0x1b5c400()*-0.595756);
}

double NNfunction_NN_1_4::synapse0x1b70dd0() {
   return (neuron0x1b57840()*0.0622458);
}

double NNfunction_NN_1_4::synapse0x1b70e10() {
   return (neuron0x1b57b80()*-4.16488);
}

double NNfunction_NN_1_4::synapse0x1b70e50() {
   return (neuron0x1b57ec0()*-2.25053);
}

double NNfunction_NN_1_4::synapse0x1b70e90() {
   return (neuron0x1b58200()*0.00728167);
}

double NNfunction_NN_1_4::synapse0x1b70ed0() {
   return (neuron0x1b58540()*-0.00576828);
}

double NNfunction_NN_1_4::synapse0x1b70f10() {
   return (neuron0x1b58880()*-0.0755889);
}

double NNfunction_NN_1_4::synapse0x1b70f50() {
   return (neuron0x1b58bc0()*-0.0267682);
}

double NNfunction_NN_1_4::synapse0x1b70f90() {
   return (neuron0x1b58f00()*0.0631652);
}

double NNfunction_NN_1_4::synapse0x1b70fd0() {
   return (neuron0x1b59240()*0.0430312);
}

double NNfunction_NN_1_4::synapse0x1b71010() {
   return (neuron0x1b59580()*0.00289448);
}

double NNfunction_NN_1_4::synapse0x1b71050() {
   return (neuron0x1b598c0()*-0.044951);
}

double NNfunction_NN_1_4::synapse0x1b71090() {
   return (neuron0x1b59c00()*-0.223828);
}

double NNfunction_NN_1_4::synapse0x1b710d0() {
   return (neuron0x1b59f40()*0.000883778);
}

double NNfunction_NN_1_4::synapse0x1b71110() {
   return (neuron0x1b5a280()*0.0741191);
}

double NNfunction_NN_1_4::synapse0x1b71150() {
   return (neuron0x1b5a5c0()*0.0330232);
}

double NNfunction_NN_1_4::synapse0x1b71190() {
   return (neuron0x1b5a900()*0.0383727);
}

double NNfunction_NN_1_4::synapse0x1b70c20() {
   return (neuron0x1b5ac40()*-0.0243336);
}

double NNfunction_NN_1_4::synapse0x1b70c60() {
   return (neuron0x1b5b1a0()*0.0213917);
}

double NNfunction_NN_1_4::synapse0x1b712e0() {
   return (neuron0x1b5b3c0()*0.034443);
}

double NNfunction_NN_1_4::synapse0x1b71320() {
   return (neuron0x1b5b700()*0.0156629);
}

double NNfunction_NN_1_4::synapse0x1b71360() {
   return (neuron0x1b5ba40()*0.0157897);
}

double NNfunction_NN_1_4::synapse0x1b713a0() {
   return (neuron0x1b5bd80()*0.00660789);
}

double NNfunction_NN_1_4::synapse0x1b713e0() {
   return (neuron0x1b5c0c0()*-0.0535737);
}

double NNfunction_NN_1_4::synapse0x1b71420() {
   return (neuron0x1b5c400()*-2.36919);
}

double NNfunction_NN_1_4::synapse0x1b717a0() {
   return (neuron0x1b57840()*-0.856383);
}

double NNfunction_NN_1_4::synapse0x1b717e0() {
   return (neuron0x1b57b80()*0.317457);
}

double NNfunction_NN_1_4::synapse0x1b71820() {
   return (neuron0x1b57ec0()*-0.0581389);
}

double NNfunction_NN_1_4::synapse0x1b71860() {
   return (neuron0x1b58200()*-0.0775412);
}

double NNfunction_NN_1_4::synapse0x1b718a0() {
   return (neuron0x1b58540()*-0.0363729);
}

double NNfunction_NN_1_4::synapse0x1b718e0() {
   return (neuron0x1b58880()*-0.223818);
}

double NNfunction_NN_1_4::synapse0x1b71920() {
   return (neuron0x1b58bc0()*0.0582425);
}

double NNfunction_NN_1_4::synapse0x1b71960() {
   return (neuron0x1b58f00()*0.150478);
}

double NNfunction_NN_1_4::synapse0x1b719a0() {
   return (neuron0x1b59240()*0.24035);
}

double NNfunction_NN_1_4::synapse0x1b719e0() {
   return (neuron0x1b59580()*0.14351);
}

double NNfunction_NN_1_4::synapse0x1b71a20() {
   return (neuron0x1b598c0()*0.135735);
}

double NNfunction_NN_1_4::synapse0x1b71a60() {
   return (neuron0x1b59c00()*0.0988834);
}

double NNfunction_NN_1_4::synapse0x1b71aa0() {
   return (neuron0x1b59f40()*-0.0992206);
}

double NNfunction_NN_1_4::synapse0x1b71ae0() {
   return (neuron0x1b5a280()*0.194059);
}

double NNfunction_NN_1_4::synapse0x1b71b20() {
   return (neuron0x1b5a5c0()*-0.326962);
}

double NNfunction_NN_1_4::synapse0x1b71b60() {
   return (neuron0x1b5a900()*-0.116817);
}

double NNfunction_NN_1_4::synapse0x1b715f0() {
   return (neuron0x1b5ac40()*-0.136864);
}

double NNfunction_NN_1_4::synapse0x1b71630() {
   return (neuron0x1b5b1a0()*0.12534);
}

double NNfunction_NN_1_4::synapse0x1b71cb0() {
   return (neuron0x1b5b3c0()*-0.0455897);
}

double NNfunction_NN_1_4::synapse0x1b71cf0() {
   return (neuron0x1b5b700()*-0.0636319);
}

double NNfunction_NN_1_4::synapse0x1b71d30() {
   return (neuron0x1b5ba40()*0.0589558);
}

double NNfunction_NN_1_4::synapse0x1b71d70() {
   return (neuron0x1b5bd80()*0.0561329);
}

double NNfunction_NN_1_4::synapse0x1b71db0() {
   return (neuron0x1b5c0c0()*-0.152157);
}

double NNfunction_NN_1_4::synapse0x1b71df0() {
   return (neuron0x1b5c400()*0.05696);
}

double NNfunction_NN_1_4::synapse0x1b72170() {
   return (neuron0x1b57840()*0.029669);
}

double NNfunction_NN_1_4::synapse0x1b66740() {
   return (neuron0x1b57b80()*0.679227);
}

double NNfunction_NN_1_4::synapse0x1b66780() {
   return (neuron0x1b57ec0()*1.29015);
}

double NNfunction_NN_1_4::synapse0x1b667c0() {
   return (neuron0x1b58200()*-0.0535135);
}

double NNfunction_NN_1_4::synapse0x1b66a10() {
   return (neuron0x1b58540()*-0.00789809);
}

double NNfunction_NN_1_4::synapse0x1b66a50() {
   return (neuron0x1b58880()*0.0140277);
}

double NNfunction_NN_1_4::synapse0x1b66a90() {
   return (neuron0x1b58bc0()*-0.00434941);
}

double NNfunction_NN_1_4::synapse0x1b66ce0() {
   return (neuron0x1b58f00()*0.00620483);
}

double NNfunction_NN_1_4::synapse0x1b66d20() {
   return (neuron0x1b59240()*0.0285385);
}

double NNfunction_NN_1_4::synapse0x1b66f70() {
   return (neuron0x1b59580()*-0.0380472);
}

double NNfunction_NN_1_4::synapse0x1b66fb0() {
   return (neuron0x1b598c0()*0.0534755);
}

double NNfunction_NN_1_4::synapse0x1b66ff0() {
   return (neuron0x1b59c00()*0.465544);
}

double NNfunction_NN_1_4::synapse0x1b67240() {
   return (neuron0x1b59f40()*-0.0630878);
}

double NNfunction_NN_1_4::synapse0x1b67280() {
   return (neuron0x1b5a280()*-0.108555);
}

double NNfunction_NN_1_4::synapse0x1b674d0() {
   return (neuron0x1b5a5c0()*-0.0248661);
}

double NNfunction_NN_1_4::synapse0x1b67510() {
   return (neuron0x1b5a900()*-0.0139868);
}

double NNfunction_NN_1_4::synapse0x1b71fc0() {
   return (neuron0x1b5ac40()*0.00945688);
}

double NNfunction_NN_1_4::synapse0x1b72000() {
   return (neuron0x1b5b1a0()*-0.00830579);
}

double NNfunction_NN_1_4::synapse0x1b67660() {
   return (neuron0x1b5b3c0()*0.0297537);
}

double NNfunction_NN_1_4::synapse0x1b67b70() {
   return (neuron0x1b5b700()*-0.0270535);
}

double NNfunction_NN_1_4::synapse0x1b67bb0() {
   return (neuron0x1b5ba40()*-0.0554217);
}

double NNfunction_NN_1_4::synapse0x1b67bf0() {
   return (neuron0x1b5bd80()*0.0174288);
}

double NNfunction_NN_1_4::synapse0x1b67e40() {
   return (neuron0x1b5c0c0()*0.0374937);
}

double NNfunction_NN_1_4::synapse0x1b67e80() {
   return (neuron0x1b5c400()*0.63666);
}

double NNfunction_NN_1_4::synapse0x1b67730() {
   return (neuron0x1b57840()*-0.00805917);
}

double NNfunction_NN_1_4::synapse0x1b67770() {
   return (neuron0x1b57b80()*4.48325);
}

double NNfunction_NN_1_4::synapse0x1b677b0() {
   return (neuron0x1b57ec0()*-3.08201);
}

double NNfunction_NN_1_4::synapse0x1b677f0() {
   return (neuron0x1b58200()*0.00510003);
}

double NNfunction_NN_1_4::synapse0x1b68170() {
   return (neuron0x1b58540()*0.0227308);
}

double NNfunction_NN_1_4::synapse0x1b744c0() {
   return (neuron0x1b58880()*0.00601615);
}

double NNfunction_NN_1_4::synapse0x1b74500() {
   return (neuron0x1b58bc0()*-0.0320539);
}

double NNfunction_NN_1_4::synapse0x1b74540() {
   return (neuron0x1b58f00()*-0.0185986);
}

double NNfunction_NN_1_4::synapse0x1b74580() {
   return (neuron0x1b59240()*0.028316);
}

double NNfunction_NN_1_4::synapse0x1b745c0() {
   return (neuron0x1b59580()*-0.0262078);
}

double NNfunction_NN_1_4::synapse0x1b74600() {
   return (neuron0x1b598c0()*-0.0139131);
}

double NNfunction_NN_1_4::synapse0x1b74640() {
   return (neuron0x1b59c00()*-0.28327);
}

double NNfunction_NN_1_4::synapse0x1b74680() {
   return (neuron0x1b59f40()*-0.00915457);
}

double NNfunction_NN_1_4::synapse0x1b746c0() {
   return (neuron0x1b5a280()*0.0158924);
}

double NNfunction_NN_1_4::synapse0x1b74700() {
   return (neuron0x1b5a5c0()*0.0208013);
}

double NNfunction_NN_1_4::synapse0x1b74740() {
   return (neuron0x1b5a900()*0.0122478);
}

double NNfunction_NN_1_4::synapse0x1b68050() {
   return (neuron0x1b5ac40()*-0.00510676);
}

double NNfunction_NN_1_4::synapse0x1b68090() {
   return (neuron0x1b5b1a0()*0.0172997);
}

double NNfunction_NN_1_4::synapse0x1b74890() {
   return (neuron0x1b5b3c0()*-0.0337677);
}

double NNfunction_NN_1_4::synapse0x1b748d0() {
   return (neuron0x1b5b700()*-0.00953232);
}

double NNfunction_NN_1_4::synapse0x1b74910() {
   return (neuron0x1b5ba40()*-0.0351362);
}

double NNfunction_NN_1_4::synapse0x1b74950() {
   return (neuron0x1b5bd80()*-0.0387211);
}

double NNfunction_NN_1_4::synapse0x1b74990() {
   return (neuron0x1b5c0c0()*0.0173624);
}

double NNfunction_NN_1_4::synapse0x1b749d0() {
   return (neuron0x1b5c400()*-1.20733);
}

double NNfunction_NN_1_4::synapse0x1b74d50() {
   return (neuron0x1b57840()*-0.165455);
}

double NNfunction_NN_1_4::synapse0x1b74d90() {
   return (neuron0x1b57b80()*0.504392);
}

double NNfunction_NN_1_4::synapse0x1b74dd0() {
   return (neuron0x1b57ec0()*-0.249741);
}

double NNfunction_NN_1_4::synapse0x1b74e10() {
   return (neuron0x1b58200()*-0.0671387);
}

double NNfunction_NN_1_4::synapse0x1b74e50() {
   return (neuron0x1b58540()*-0.134856);
}

double NNfunction_NN_1_4::synapse0x1b74e90() {
   return (neuron0x1b58880()*0.184143);
}

double NNfunction_NN_1_4::synapse0x1b74ed0() {
   return (neuron0x1b58bc0()*-0.0637346);
}

double NNfunction_NN_1_4::synapse0x1b74f10() {
   return (neuron0x1b58f00()*0.0809495);
}

double NNfunction_NN_1_4::synapse0x1b74f50() {
   return (neuron0x1b59240()*-0.0696349);
}

double NNfunction_NN_1_4::synapse0x1b74f90() {
   return (neuron0x1b59580()*0.106974);
}

double NNfunction_NN_1_4::synapse0x1b74fd0() {
   return (neuron0x1b598c0()*-0.011526);
}

double NNfunction_NN_1_4::synapse0x1b75010() {
   return (neuron0x1b59c00()*-0.332718);
}

double NNfunction_NN_1_4::synapse0x1b75050() {
   return (neuron0x1b59f40()*-0.0198583);
}

double NNfunction_NN_1_4::synapse0x1b75090() {
   return (neuron0x1b5a280()*-0.355696);
}

double NNfunction_NN_1_4::synapse0x1b750d0() {
   return (neuron0x1b5a5c0()*-0.0857542);
}

double NNfunction_NN_1_4::synapse0x1b75110() {
   return (neuron0x1b5a900()*0.0155408);
}

double NNfunction_NN_1_4::synapse0x1b74ba0() {
   return (neuron0x1b5ac40()*0.170572);
}

double NNfunction_NN_1_4::synapse0x1b74be0() {
   return (neuron0x1b5b1a0()*0.0937021);
}

double NNfunction_NN_1_4::synapse0x1b75260() {
   return (neuron0x1b5b3c0()*-0.0569236);
}

double NNfunction_NN_1_4::synapse0x1b752a0() {
   return (neuron0x1b5b700()*-0.136475);
}

double NNfunction_NN_1_4::synapse0x1b752e0() {
   return (neuron0x1b5ba40()*-0.136997);
}

double NNfunction_NN_1_4::synapse0x1b75320() {
   return (neuron0x1b5bd80()*-0.0653816);
}

double NNfunction_NN_1_4::synapse0x1b75360() {
   return (neuron0x1b5c0c0()*-0.0195466);
}

double NNfunction_NN_1_4::synapse0x1b753a0() {
   return (neuron0x1b5c400()*-0.319677);
}

double NNfunction_NN_1_4::synapse0x1b75720() {
   return (neuron0x1b57840()*1.03412);
}

double NNfunction_NN_1_4::synapse0x1b75760() {
   return (neuron0x1b57b80()*0.794424);
}

double NNfunction_NN_1_4::synapse0x1b757a0() {
   return (neuron0x1b57ec0()*0.533252);
}

double NNfunction_NN_1_4::synapse0x1b757e0() {
   return (neuron0x1b58200()*0.542125);
}

double NNfunction_NN_1_4::synapse0x1b75820() {
   return (neuron0x1b58540()*-0.664011);
}

double NNfunction_NN_1_4::synapse0x1b75860() {
   return (neuron0x1b58880()*0.335476);
}

double NNfunction_NN_1_4::synapse0x1b758a0() {
   return (neuron0x1b58bc0()*0.163237);
}

double NNfunction_NN_1_4::synapse0x1b758e0() {
   return (neuron0x1b58f00()*0.505626);
}

double NNfunction_NN_1_4::synapse0x1b75920() {
   return (neuron0x1b59240()*-0.0825467);
}

double NNfunction_NN_1_4::synapse0x1b75960() {
   return (neuron0x1b59580()*-0.352649);
}

double NNfunction_NN_1_4::synapse0x1b759a0() {
   return (neuron0x1b598c0()*-0.0562615);
}

double NNfunction_NN_1_4::synapse0x1b759e0() {
   return (neuron0x1b59c00()*0.368888);
}

double NNfunction_NN_1_4::synapse0x1b75a20() {
   return (neuron0x1b59f40()*1.26424);
}

double NNfunction_NN_1_4::synapse0x1b75a60() {
   return (neuron0x1b5a280()*0.32497);
}

double NNfunction_NN_1_4::synapse0x1b75aa0() {
   return (neuron0x1b5a5c0()*-0.370175);
}

double NNfunction_NN_1_4::synapse0x1b75ae0() {
   return (neuron0x1b5a900()*0.633184);
}

double NNfunction_NN_1_4::synapse0x1b75570() {
   return (neuron0x1b5ac40()*0.443854);
}

double NNfunction_NN_1_4::synapse0x1b755b0() {
   return (neuron0x1b5b1a0()*0.676288);
}

double NNfunction_NN_1_4::synapse0x1b75c30() {
   return (neuron0x1b5b3c0()*0.0889574);
}

double NNfunction_NN_1_4::synapse0x1b75c70() {
   return (neuron0x1b5b700()*0.859109);
}

double NNfunction_NN_1_4::synapse0x1b75cb0() {
   return (neuron0x1b5ba40()*0.0269018);
}

double NNfunction_NN_1_4::synapse0x1b75cf0() {
   return (neuron0x1b5bd80()*-0.0390004);
}

double NNfunction_NN_1_4::synapse0x1b75d30() {
   return (neuron0x1b5c0c0()*0.877591);
}

double NNfunction_NN_1_4::synapse0x1b75d70() {
   return (neuron0x1b5c400()*-0.184333);
}

double NNfunction_NN_1_4::synapse0x1b760f0() {
   return (neuron0x1b57840()*-0.185882);
}

double NNfunction_NN_1_4::synapse0x1b76130() {
   return (neuron0x1b57b80()*-0.147778);
}

double NNfunction_NN_1_4::synapse0x1b76170() {
   return (neuron0x1b57ec0()*0.705079);
}

double NNfunction_NN_1_4::synapse0x1b761b0() {
   return (neuron0x1b58200()*-0.674858);
}

double NNfunction_NN_1_4::synapse0x1b761f0() {
   return (neuron0x1b58540()*0.17208);
}

double NNfunction_NN_1_4::synapse0x1b76230() {
   return (neuron0x1b58880()*0.480496);
}

double NNfunction_NN_1_4::synapse0x1b76270() {
   return (neuron0x1b58bc0()*0.0238983);
}

double NNfunction_NN_1_4::synapse0x1b762b0() {
   return (neuron0x1b58f00()*0.611514);
}

double NNfunction_NN_1_4::synapse0x1b762f0() {
   return (neuron0x1b59240()*-0.693552);
}

double NNfunction_NN_1_4::synapse0x1b76330() {
   return (neuron0x1b59580()*-0.327432);
}

double NNfunction_NN_1_4::synapse0x1b76370() {
   return (neuron0x1b598c0()*-0.642621);
}

double NNfunction_NN_1_4::synapse0x1b763b0() {
   return (neuron0x1b59c00()*0.619963);
}

double NNfunction_NN_1_4::synapse0x1b763f0() {
   return (neuron0x1b59f40()*-0.288007);
}

double NNfunction_NN_1_4::synapse0x1b76430() {
   return (neuron0x1b5a280()*0.750924);
}

double NNfunction_NN_1_4::synapse0x1b76470() {
   return (neuron0x1b5a5c0()*0.356438);
}

double NNfunction_NN_1_4::synapse0x1b764b0() {
   return (neuron0x1b5a900()*0.165123);
}

double NNfunction_NN_1_4::synapse0x1b75f40() {
   return (neuron0x1b5ac40()*-0.749064);
}

double NNfunction_NN_1_4::synapse0x1b75f80() {
   return (neuron0x1b5b1a0()*-0.209562);
}

double NNfunction_NN_1_4::synapse0x1b76600() {
   return (neuron0x1b5b3c0()*-0.115058);
}

double NNfunction_NN_1_4::synapse0x1b76640() {
   return (neuron0x1b5b700()*-0.00633744);
}

double NNfunction_NN_1_4::synapse0x1b76680() {
   return (neuron0x1b5ba40()*0.366443);
}

double NNfunction_NN_1_4::synapse0x1b766c0() {
   return (neuron0x1b5bd80()*0.174928);
}

double NNfunction_NN_1_4::synapse0x1b76700() {
   return (neuron0x1b5c0c0()*0.0748067);
}

double NNfunction_NN_1_4::synapse0x1b76740() {
   return (neuron0x1b5c400()*-0.748625);
}

double NNfunction_NN_1_4::synapse0x1b76ac0() {
   return (neuron0x1b57840()*-0.0540777);
}

double NNfunction_NN_1_4::synapse0x1b76b00() {
   return (neuron0x1b57b80()*-7.66087);
}

double NNfunction_NN_1_4::synapse0x1b76b40() {
   return (neuron0x1b57ec0()*4.00808);
}

double NNfunction_NN_1_4::synapse0x1b76b80() {
   return (neuron0x1b58200()*-0.00241885);
}

double NNfunction_NN_1_4::synapse0x1b76bc0() {
   return (neuron0x1b58540()*-0.0202195);
}

double NNfunction_NN_1_4::synapse0x1b76c00() {
   return (neuron0x1b58880()*-0.0254641);
}

double NNfunction_NN_1_4::synapse0x1b76c40() {
   return (neuron0x1b58bc0()*0.0358451);
}

double NNfunction_NN_1_4::synapse0x1b76c80() {
   return (neuron0x1b58f00()*0.0210805);
}

double NNfunction_NN_1_4::synapse0x1b76cc0() {
   return (neuron0x1b59240()*-0.0102141);
}

double NNfunction_NN_1_4::synapse0x1b76d00() {
   return (neuron0x1b59580()*0.00693023);
}

double NNfunction_NN_1_4::synapse0x1b76d40() {
   return (neuron0x1b598c0()*0.0332174);
}

double NNfunction_NN_1_4::synapse0x1b76d80() {
   return (neuron0x1b59c00()*0.0894591);
}

double NNfunction_NN_1_4::synapse0x1b76dc0() {
   return (neuron0x1b59f40()*0.0078327);
}

double NNfunction_NN_1_4::synapse0x1b76e00() {
   return (neuron0x1b5a280()*-0.0212454);
}

double NNfunction_NN_1_4::synapse0x1b76e40() {
   return (neuron0x1b5a5c0()*-0.0237487);
}

double NNfunction_NN_1_4::synapse0x1b76e80() {
   return (neuron0x1b5a900()*0.013651);
}

double NNfunction_NN_1_4::synapse0x1b76910() {
   return (neuron0x1b5ac40()*-0.00860919);
}

double NNfunction_NN_1_4::synapse0x1b76950() {
   return (neuron0x1b5b1a0()*-0.0150915);
}

double NNfunction_NN_1_4::synapse0x1b76fd0() {
   return (neuron0x1b5b3c0()*0.0286914);
}

double NNfunction_NN_1_4::synapse0x1b77010() {
   return (neuron0x1b5b700()*0.0299584);
}

double NNfunction_NN_1_4::synapse0x1b77050() {
   return (neuron0x1b5ba40()*0.021271);
}

double NNfunction_NN_1_4::synapse0x1b77090() {
   return (neuron0x1b5bd80()*0.0287038);
}

double NNfunction_NN_1_4::synapse0x1b770d0() {
   return (neuron0x1b5c0c0()*0.0136578);
}

double NNfunction_NN_1_4::synapse0x1b77110() {
   return (neuron0x1b5c400()*-0.503579);
}

double NNfunction_NN_1_4::synapse0x1b77490() {
   return (neuron0x1b57840()*-0.0456679);
}

double NNfunction_NN_1_4::synapse0x1b774d0() {
   return (neuron0x1b57b80()*1.89598);
}

double NNfunction_NN_1_4::synapse0x1b77510() {
   return (neuron0x1b57ec0()*-3.58462);
}

double NNfunction_NN_1_4::synapse0x1b77550() {
   return (neuron0x1b58200()*0.1122);
}

double NNfunction_NN_1_4::synapse0x1b77590() {
   return (neuron0x1b58540()*0.0432253);
}

double NNfunction_NN_1_4::synapse0x1b775d0() {
   return (neuron0x1b58880()*-0.0265595);
}

double NNfunction_NN_1_4::synapse0x1b77610() {
   return (neuron0x1b58bc0()*-0.0259874);
}

double NNfunction_NN_1_4::synapse0x1b77650() {
   return (neuron0x1b58f00()*-0.0648325);
}

double NNfunction_NN_1_4::synapse0x1b77690() {
   return (neuron0x1b59240()*-0.065133);
}

double NNfunction_NN_1_4::synapse0x1b776d0() {
   return (neuron0x1b59580()*0.0904292);
}

double NNfunction_NN_1_4::synapse0x1b77710() {
   return (neuron0x1b598c0()*-0.073684);
}

double NNfunction_NN_1_4::synapse0x1b77750() {
   return (neuron0x1b59c00()*0.480761);
}

double NNfunction_NN_1_4::synapse0x1b77790() {
   return (neuron0x1b59f40()*0.0700623);
}

double NNfunction_NN_1_4::synapse0x1b777d0() {
   return (neuron0x1b5a280()*-0.0588143);
}

double NNfunction_NN_1_4::synapse0x1b77810() {
   return (neuron0x1b5a5c0()*-0.0474951);
}

double NNfunction_NN_1_4::synapse0x1b77850() {
   return (neuron0x1b5a900()*-0.0314336);
}

double NNfunction_NN_1_4::synapse0x1b772e0() {
   return (neuron0x1b5ac40()*-0.0757831);
}

double NNfunction_NN_1_4::synapse0x1b77320() {
   return (neuron0x1b5b1a0()*0.0213826);
}

double NNfunction_NN_1_4::synapse0x1b779a0() {
   return (neuron0x1b5b3c0()*0.0212255);
}

double NNfunction_NN_1_4::synapse0x1b779e0() {
   return (neuron0x1b5b700()*0.10264);
}

double NNfunction_NN_1_4::synapse0x1b77a20() {
   return (neuron0x1b5ba40()*0.0388785);
}

double NNfunction_NN_1_4::synapse0x1b77a60() {
   return (neuron0x1b5bd80()*-0.0469463);
}

double NNfunction_NN_1_4::synapse0x1b77aa0() {
   return (neuron0x1b5c0c0()*0.028422);
}

double NNfunction_NN_1_4::synapse0x1b77ae0() {
   return (neuron0x1b5c400()*-1.16731);
}

double NNfunction_NN_1_4::synapse0x1b77e60() {
   return (neuron0x1b57840()*-0.119162);
}

double NNfunction_NN_1_4::synapse0x1b77ea0() {
   return (neuron0x1b57b80()*0.0366996);
}

double NNfunction_NN_1_4::synapse0x1b77ee0() {
   return (neuron0x1b57ec0()*-2.24226);
}

double NNfunction_NN_1_4::synapse0x1b77f20() {
   return (neuron0x1b58200()*-0.0460316);
}

double NNfunction_NN_1_4::synapse0x1b77f60() {
   return (neuron0x1b58540()*-0.0697611);
}

double NNfunction_NN_1_4::synapse0x1b77fa0() {
   return (neuron0x1b58880()*-0.0914076);
}

double NNfunction_NN_1_4::synapse0x1b77fe0() {
   return (neuron0x1b58bc0()*-0.159341);
}

double NNfunction_NN_1_4::synapse0x1b78020() {
   return (neuron0x1b58f00()*-0.0972487);
}

double NNfunction_NN_1_4::synapse0x1b78060() {
   return (neuron0x1b59240()*-0.10492);
}

double NNfunction_NN_1_4::synapse0x1b780a0() {
   return (neuron0x1b59580()*0.146564);
}

double NNfunction_NN_1_4::synapse0x1b780e0() {
   return (neuron0x1b598c0()*-0.079498);
}

double NNfunction_NN_1_4::synapse0x1b78120() {
   return (neuron0x1b59c00()*-0.00469314);
}

double NNfunction_NN_1_4::synapse0x1b78160() {
   return (neuron0x1b59f40()*0.0291924);
}

double NNfunction_NN_1_4::synapse0x1b781a0() {
   return (neuron0x1b5a280()*0.178684);
}

double NNfunction_NN_1_4::synapse0x1b781e0() {
   return (neuron0x1b5a5c0()*0.109319);
}

double NNfunction_NN_1_4::synapse0x1b78220() {
   return (neuron0x1b5a900()*0.0775868);
}

double NNfunction_NN_1_4::synapse0x1b77cb0() {
   return (neuron0x1b5ac40()*0.128438);
}

double NNfunction_NN_1_4::synapse0x1b77cf0() {
   return (neuron0x1b5b1a0()*-0.0385697);
}

double NNfunction_NN_1_4::synapse0x1b78370() {
   return (neuron0x1b5b3c0()*-0.0930265);
}

double NNfunction_NN_1_4::synapse0x1b783b0() {
   return (neuron0x1b5b700()*0.0528489);
}

double NNfunction_NN_1_4::synapse0x1b783f0() {
   return (neuron0x1b5ba40()*0.099281);
}

double NNfunction_NN_1_4::synapse0x1b78430() {
   return (neuron0x1b5bd80()*-0.164821);
}

double NNfunction_NN_1_4::synapse0x1b78470() {
   return (neuron0x1b5c0c0()*-0.0429181);
}

double NNfunction_NN_1_4::synapse0x1b784b0() {
   return (neuron0x1b5c400()*0.971232);
}

double NNfunction_NN_1_4::synapse0x1b78830() {
   return (neuron0x1b57840()*0.0415409);
}

double NNfunction_NN_1_4::synapse0x1b78870() {
   return (neuron0x1b57b80()*2.1709);
}

double NNfunction_NN_1_4::synapse0x1b788b0() {
   return (neuron0x1b57ec0()*-1.51571);
}

double NNfunction_NN_1_4::synapse0x1b788f0() {
   return (neuron0x1b58200()*0.0198601);
}

double NNfunction_NN_1_4::synapse0x1b78930() {
   return (neuron0x1b58540()*-0.0548087);
}

double NNfunction_NN_1_4::synapse0x1b78970() {
   return (neuron0x1b58880()*0.106963);
}

double NNfunction_NN_1_4::synapse0x1b789b0() {
   return (neuron0x1b58bc0()*-0.00988772);
}

double NNfunction_NN_1_4::synapse0x1b789f0() {
   return (neuron0x1b58f00()*0.0117502);
}

double NNfunction_NN_1_4::synapse0x1b78a30() {
   return (neuron0x1b59240()*0.0815415);
}

double NNfunction_NN_1_4::synapse0x1b78a70() {
   return (neuron0x1b59580()*-0.104431);
}

double NNfunction_NN_1_4::synapse0x1b78ab0() {
   return (neuron0x1b598c0()*0.00733886);
}

double NNfunction_NN_1_4::synapse0x1b78af0() {
   return (neuron0x1b59c00()*0.838785);
}

double NNfunction_NN_1_4::synapse0x1b78b30() {
   return (neuron0x1b59f40()*-0.0180051);
}

double NNfunction_NN_1_4::synapse0x1b78b70() {
   return (neuron0x1b5a280()*0.0317834);
}

double NNfunction_NN_1_4::synapse0x1b78bb0() {
   return (neuron0x1b5a5c0()*0.0883971);
}

double NNfunction_NN_1_4::synapse0x1b78bf0() {
   return (neuron0x1b5a900()*-0.0123031);
}

double NNfunction_NN_1_4::synapse0x1b78680() {
   return (neuron0x1b5ac40()*0.0539387);
}

double NNfunction_NN_1_4::synapse0x1b786c0() {
   return (neuron0x1b5b1a0()*-0.00700046);
}

double NNfunction_NN_1_4::synapse0x1b78d40() {
   return (neuron0x1b5b3c0()*0.0808266);
}

double NNfunction_NN_1_4::synapse0x1b78d80() {
   return (neuron0x1b5b700()*-0.0867222);
}

double NNfunction_NN_1_4::synapse0x1b78dc0() {
   return (neuron0x1b5ba40()*0.0154663);
}

double NNfunction_NN_1_4::synapse0x1b78e00() {
   return (neuron0x1b5bd80()*0.0357898);
}

double NNfunction_NN_1_4::synapse0x1b78e40() {
   return (neuron0x1b5c0c0()*0.0568718);
}

double NNfunction_NN_1_4::synapse0x1b78e80() {
   return (neuron0x1b5c400()*-0.218024);
}

double NNfunction_NN_1_4::synapse0x1b61930() {
   return (neuron0x1b57840()*0.108625);
}

double NNfunction_NN_1_4::synapse0x1b61970() {
   return (neuron0x1b57b80()*-0.971372);
}

double NNfunction_NN_1_4::synapse0x1b619b0() {
   return (neuron0x1b57ec0()*0.308382);
}

double NNfunction_NN_1_4::synapse0x1b619f0() {
   return (neuron0x1b58200()*0.0521936);
}

double NNfunction_NN_1_4::synapse0x1b61a30() {
   return (neuron0x1b58540()*0.0505971);
}

double NNfunction_NN_1_4::synapse0x1b61a70() {
   return (neuron0x1b58880()*0.0998279);
}

double NNfunction_NN_1_4::synapse0x1b61ab0() {
   return (neuron0x1b58bc0()*0.00268648);
}

double NNfunction_NN_1_4::synapse0x1b61af0() {
   return (neuron0x1b58f00()*0.00875931);
}

double NNfunction_NN_1_4::synapse0x1b79610() {
   return (neuron0x1b59240()*-0.0508912);
}

double NNfunction_NN_1_4::synapse0x1b79650() {
   return (neuron0x1b59580()*-0.00613114);
}

double NNfunction_NN_1_4::synapse0x1b79690() {
   return (neuron0x1b598c0()*0.00812964);
}

double NNfunction_NN_1_4::synapse0x1b796d0() {
   return (neuron0x1b59c00()*0.539887);
}

double NNfunction_NN_1_4::synapse0x1b79710() {
   return (neuron0x1b59f40()*-0.068251);
}

double NNfunction_NN_1_4::synapse0x1b79750() {
   return (neuron0x1b5a280()*-0.140384);
}

double NNfunction_NN_1_4::synapse0x1b79790() {
   return (neuron0x1b5a5c0()*0.00641956);
}

double NNfunction_NN_1_4::synapse0x1b797d0() {
   return (neuron0x1b5a900()*-0.0369966);
}

double NNfunction_NN_1_4::synapse0x1b79050() {
   return (neuron0x1b5ac40()*0.117989);
}

double NNfunction_NN_1_4::synapse0x1b79090() {
   return (neuron0x1b5b1a0()*-0.0228719);
}

double NNfunction_NN_1_4::synapse0x1b79920() {
   return (neuron0x1b5b3c0()*0.0809581);
}

double NNfunction_NN_1_4::synapse0x1b79960() {
   return (neuron0x1b5b700()*-0.0507316);
}

double NNfunction_NN_1_4::synapse0x1b799a0() {
   return (neuron0x1b5ba40()*-0.125718);
}

double NNfunction_NN_1_4::synapse0x1b799e0() {
   return (neuron0x1b5bd80()*0.0427953);
}

double NNfunction_NN_1_4::synapse0x1b79a20() {
   return (neuron0x1b5c0c0()*0.0598773);
}

double NNfunction_NN_1_4::synapse0x1b79a60() {
   return (neuron0x1b5c400()*-0.356034);
}

double NNfunction_NN_1_4::synapse0x1b79de0() {
   return (neuron0x1b57840()*-0.128424);
}

double NNfunction_NN_1_4::synapse0x1b79e20() {
   return (neuron0x1b57b80()*-3.30444);
}

double NNfunction_NN_1_4::synapse0x1b79e60() {
   return (neuron0x1b57ec0()*-2.77444);
}

double NNfunction_NN_1_4::synapse0x1b79ea0() {
   return (neuron0x1b58200()*0.0234018);
}

double NNfunction_NN_1_4::synapse0x1b79ee0() {
   return (neuron0x1b58540()*-0.0147718);
}

double NNfunction_NN_1_4::synapse0x1b79f20() {
   return (neuron0x1b58880()*-0.0300795);
}

double NNfunction_NN_1_4::synapse0x1b79f60() {
   return (neuron0x1b58bc0()*0.0425499);
}

double NNfunction_NN_1_4::synapse0x1b79fa0() {
   return (neuron0x1b58f00()*0.0270126);
}

double NNfunction_NN_1_4::synapse0x1b79fe0() {
   return (neuron0x1b59240()*0.0104215);
}

double NNfunction_NN_1_4::synapse0x1b7a020() {
   return (neuron0x1b59580()*-0.0479221);
}

double NNfunction_NN_1_4::synapse0x1b7a060() {
   return (neuron0x1b598c0()*-0.0183735);
}

double NNfunction_NN_1_4::synapse0x1b7a0a0() {
   return (neuron0x1b59c00()*-0.159969);
}

double NNfunction_NN_1_4::synapse0x1b7a0e0() {
   return (neuron0x1b59f40()*-0.0294135);
}

double NNfunction_NN_1_4::synapse0x1b7a120() {
   return (neuron0x1b5a280()*-0.0551431);
}

double NNfunction_NN_1_4::synapse0x1b7a160() {
   return (neuron0x1b5a5c0()*0.0169637);
}

double NNfunction_NN_1_4::synapse0x1b7a1a0() {
   return (neuron0x1b5a900()*-0.0257818);
}

double NNfunction_NN_1_4::synapse0x1b79c30() {
   return (neuron0x1b5ac40()*-0.00550205);
}

double NNfunction_NN_1_4::synapse0x1b79c70() {
   return (neuron0x1b5b1a0()*-0.0466357);
}

double NNfunction_NN_1_4::synapse0x1b7a2f0() {
   return (neuron0x1b5b3c0()*-0.0812946);
}

double NNfunction_NN_1_4::synapse0x1b7a330() {
   return (neuron0x1b5b700()*-0.00487686);
}

double NNfunction_NN_1_4::synapse0x1b7a370() {
   return (neuron0x1b5ba40()*-0.0476546);
}

double NNfunction_NN_1_4::synapse0x1b7a3b0() {
   return (neuron0x1b5bd80()*0.00761244);
}

double NNfunction_NN_1_4::synapse0x1b7a3f0() {
   return (neuron0x1b5c0c0()*-0.00900078);
}

double NNfunction_NN_1_4::synapse0x1b7a430() {
   return (neuron0x1b5c400()*3.90195);
}

double NNfunction_NN_1_4::synapse0x1b7a7b0() {
   return (neuron0x1b57840()*0.497017);
}

double NNfunction_NN_1_4::synapse0x1b7a7f0() {
   return (neuron0x1b57b80()*-0.0656561);
}

double NNfunction_NN_1_4::synapse0x1b7a830() {
   return (neuron0x1b57ec0()*0.115529);
}

double NNfunction_NN_1_4::synapse0x1b7a870() {
   return (neuron0x1b58200()*0.617235);
}

double NNfunction_NN_1_4::synapse0x1b7a8b0() {
   return (neuron0x1b58540()*-0.813497);
}

double NNfunction_NN_1_4::synapse0x1b7a8f0() {
   return (neuron0x1b58880()*-0.866205);
}

double NNfunction_NN_1_4::synapse0x1b7a930() {
   return (neuron0x1b58bc0()*-0.472171);
}

double NNfunction_NN_1_4::synapse0x1b7a970() {
   return (neuron0x1b58f00()*0.793095);
}

double NNfunction_NN_1_4::synapse0x1b7a9b0() {
   return (neuron0x1b59240()*-0.498343);
}

double NNfunction_NN_1_4::synapse0x1b7a9f0() {
   return (neuron0x1b59580()*0.207985);
}

double NNfunction_NN_1_4::synapse0x1b7aa30() {
   return (neuron0x1b598c0()*-0.0259112);
}

double NNfunction_NN_1_4::synapse0x1b7aa70() {
   return (neuron0x1b59c00()*-0.166687);
}

double NNfunction_NN_1_4::synapse0x1b7aab0() {
   return (neuron0x1b59f40()*0.305168);
}

double NNfunction_NN_1_4::synapse0x1b7aaf0() {
   return (neuron0x1b5a280()*-0.112263);
}

double NNfunction_NN_1_4::synapse0x1b7ab30() {
   return (neuron0x1b5a5c0()*0.500454);
}

double NNfunction_NN_1_4::synapse0x1b7ab70() {
   return (neuron0x1b5a900()*-0.328113);
}

double NNfunction_NN_1_4::synapse0x1b7a600() {
   return (neuron0x1b5ac40()*0.518162);
}

double NNfunction_NN_1_4::synapse0x1b7a640() {
   return (neuron0x1b5b1a0()*-0.371565);
}

double NNfunction_NN_1_4::synapse0x1b6b170() {
   return (neuron0x1b5b3c0()*-0.591353);
}

double NNfunction_NN_1_4::synapse0x1b6b1b0() {
   return (neuron0x1b5b700()*0.409491);
}

double NNfunction_NN_1_4::synapse0x1b6b1f0() {
   return (neuron0x1b5ba40()*0.420901);
}

double NNfunction_NN_1_4::synapse0x1b6b230() {
   return (neuron0x1b5bd80()*0.313652);
}

double NNfunction_NN_1_4::synapse0x1b6b270() {
   return (neuron0x1b5c0c0()*0.10178);
}

double NNfunction_NN_1_4::synapse0x1b6b2b0() {
   return (neuron0x1b5c400()*0.296833);
}

double NNfunction_NN_1_4::synapse0x1b6b630() {
   return (neuron0x1b57840()*-0.119864);
}

double NNfunction_NN_1_4::synapse0x1b6b670() {
   return (neuron0x1b57b80()*-0.0223799);
}

double NNfunction_NN_1_4::synapse0x1b6b6b0() {
   return (neuron0x1b57ec0()*0.161439);
}

double NNfunction_NN_1_4::synapse0x1b6b6f0() {
   return (neuron0x1b58200()*-0.0975829);
}

double NNfunction_NN_1_4::synapse0x1b6b730() {
   return (neuron0x1b58540()*0.00434085);
}

double NNfunction_NN_1_4::synapse0x1b6b770() {
   return (neuron0x1b58880()*0.0377377);
}

double NNfunction_NN_1_4::synapse0x1b6b7b0() {
   return (neuron0x1b58bc0()*-0.0207841);
}

double NNfunction_NN_1_4::synapse0x1b6b7f0() {
   return (neuron0x1b58f00()*0.00135371);
}

double NNfunction_NN_1_4::synapse0x1b6b830() {
   return (neuron0x1b59240()*0.0612192);
}

double NNfunction_NN_1_4::synapse0x1b6b870() {
   return (neuron0x1b59580()*-0.0717131);
}

double NNfunction_NN_1_4::synapse0x1b6b8b0() {
   return (neuron0x1b598c0()*-0.0293956);
}

double NNfunction_NN_1_4::synapse0x1b6b8f0() {
   return (neuron0x1b59c00()*-3.61818);
}

double NNfunction_NN_1_4::synapse0x1b6b930() {
   return (neuron0x1b59f40()*0.0850277);
}

double NNfunction_NN_1_4::synapse0x1b6b970() {
   return (neuron0x1b5a280()*0.0803137);
}

double NNfunction_NN_1_4::synapse0x1b6b9b0() {
   return (neuron0x1b5a5c0()*0.0501617);
}

double NNfunction_NN_1_4::synapse0x1b6b9f0() {
   return (neuron0x1b5a900()*-0.0108214);
}

double NNfunction_NN_1_4::synapse0x1b6b480() {
   return (neuron0x1b5ac40()*-0.0408288);
}

double NNfunction_NN_1_4::synapse0x1b6b4c0() {
   return (neuron0x1b5b1a0()*-0.0374613);
}

double NNfunction_NN_1_4::synapse0x1b6bb40() {
   return (neuron0x1b5b3c0()*0.0024681);
}

double NNfunction_NN_1_4::synapse0x1b6bb80() {
   return (neuron0x1b5b700()*0.0225953);
}

double NNfunction_NN_1_4::synapse0x1b6bbc0() {
   return (neuron0x1b5ba40()*0.0453958);
}

double NNfunction_NN_1_4::synapse0x1b6bc00() {
   return (neuron0x1b5bd80()*-0.00357067);
}

double NNfunction_NN_1_4::synapse0x1b6bc40() {
   return (neuron0x1b5c0c0()*-0.0715156);
}

double NNfunction_NN_1_4::synapse0x1b6bc80() {
   return (neuron0x1b5c400()*-0.00650817);
}

double NNfunction_NN_1_4::synapse0x1b6c000() {
   return (neuron0x1b57840()*0.154037);
}

double NNfunction_NN_1_4::synapse0x1b6c040() {
   return (neuron0x1b57b80()*0.752753);
}

double NNfunction_NN_1_4::synapse0x1b6c080() {
   return (neuron0x1b57ec0()*-4.08333);
}

double NNfunction_NN_1_4::synapse0x1b6c0c0() {
   return (neuron0x1b58200()*-0.0745532);
}

double NNfunction_NN_1_4::synapse0x1b6c100() {
   return (neuron0x1b58540()*0.0209003);
}

double NNfunction_NN_1_4::synapse0x1b6c140() {
   return (neuron0x1b58880()*-0.0524219);
}

double NNfunction_NN_1_4::synapse0x1b6c180() {
   return (neuron0x1b58bc0()*0.00640598);
}

double NNfunction_NN_1_4::synapse0x1b6c1c0() {
   return (neuron0x1b58f00()*-0.0178673);
}

double NNfunction_NN_1_4::synapse0x1b6c200() {
   return (neuron0x1b59240()*0.0117451);
}

double NNfunction_NN_1_4::synapse0x1b6c240() {
   return (neuron0x1b59580()*-0.0136245);
}

double NNfunction_NN_1_4::synapse0x1b6c280() {
   return (neuron0x1b598c0()*0.0108389);
}

double NNfunction_NN_1_4::synapse0x1b6c2c0() {
   return (neuron0x1b59c00()*-0.179242);
}

double NNfunction_NN_1_4::synapse0x1b6c300() {
   return (neuron0x1b59f40()*0.021433);
}

double NNfunction_NN_1_4::synapse0x1b6c340() {
   return (neuron0x1b5a280()*-0.0926807);
}

double NNfunction_NN_1_4::synapse0x1b6c380() {
   return (neuron0x1b5a5c0()*0.0620909);
}

double NNfunction_NN_1_4::synapse0x1b6c3c0() {
   return (neuron0x1b5a900()*0.017513);
}

double NNfunction_NN_1_4::synapse0x1b6be50() {
   return (neuron0x1b5ac40()*0.0706628);
}

double NNfunction_NN_1_4::synapse0x1b6be90() {
   return (neuron0x1b5b1a0()*-0.0194658);
}

double NNfunction_NN_1_4::synapse0x1b6c510() {
   return (neuron0x1b5b3c0()*-0.0387977);
}

double NNfunction_NN_1_4::synapse0x1b6c550() {
   return (neuron0x1b5b700()*-0.0180721);
}

double NNfunction_NN_1_4::synapse0x1b6c590() {
   return (neuron0x1b5ba40()*-0.00848739);
}

double NNfunction_NN_1_4::synapse0x1b6c5d0() {
   return (neuron0x1b5bd80()*-0.0281194);
}

double NNfunction_NN_1_4::synapse0x1b6c610() {
   return (neuron0x1b5c0c0()*-0.0217214);
}

double NNfunction_NN_1_4::synapse0x1b6c650() {
   return (neuron0x1b5c400()*-8.34411);
}

double NNfunction_NN_1_4::synapse0x1b6c9d0() {
   return (neuron0x1b57840()*-0.0585616);
}

double NNfunction_NN_1_4::synapse0x1b6ca10() {
   return (neuron0x1b57b80()*4.16169);
}

double NNfunction_NN_1_4::synapse0x1b6ca50() {
   return (neuron0x1b57ec0()*2.27667);
}

double NNfunction_NN_1_4::synapse0x1b6ca90() {
   return (neuron0x1b58200()*-0.00466672);
}

double NNfunction_NN_1_4::synapse0x1b6cad0() {
   return (neuron0x1b58540()*0.0123262);
}

double NNfunction_NN_1_4::synapse0x1b6cb10() {
   return (neuron0x1b58880()*0.0734661);
}

double NNfunction_NN_1_4::synapse0x1b6cb50() {
   return (neuron0x1b58bc0()*0.0291815);
}

double NNfunction_NN_1_4::synapse0x1b6cb90() {
   return (neuron0x1b58f00()*-0.0628866);
}

double NNfunction_NN_1_4::synapse0x1b6cbd0() {
   return (neuron0x1b59240()*-0.0317412);
}

double NNfunction_NN_1_4::synapse0x1b6cc10() {
   return (neuron0x1b59580()*-0.0237238);
}

double NNfunction_NN_1_4::synapse0x1b6cc50() {
   return (neuron0x1b598c0()*0.0551315);
}

double NNfunction_NN_1_4::synapse0x1b6cc90() {
   return (neuron0x1b59c00()*0.0671083);
}

double NNfunction_NN_1_4::synapse0x1b6ccd0() {
   return (neuron0x1b59f40()*-0.0314599);
}

double NNfunction_NN_1_4::synapse0x1b6cd10() {
   return (neuron0x1b5a280()*-0.0790834);
}

double NNfunction_NN_1_4::synapse0x1b6cd50() {
   return (neuron0x1b5a5c0()*-0.0346952);
}

double NNfunction_NN_1_4::synapse0x1b6cd90() {
   return (neuron0x1b5a900()*-0.01134);
}

double NNfunction_NN_1_4::synapse0x1b6c820() {
   return (neuron0x1b5ac40()*0.0425938);
}

double NNfunction_NN_1_4::synapse0x1b6c860() {
   return (neuron0x1b5b1a0()*-0.0146924);
}

double NNfunction_NN_1_4::synapse0x1b6cee0() {
   return (neuron0x1b5b3c0()*-0.0221513);
}

double NNfunction_NN_1_4::synapse0x1b6cf20() {
   return (neuron0x1b5b700()*-0.045535);
}

double NNfunction_NN_1_4::synapse0x1b6cf60() {
   return (neuron0x1b5ba40()*-0.00526795);
}

double NNfunction_NN_1_4::synapse0x1b6cfa0() {
   return (neuron0x1b5bd80()*-0.013033);
}

double NNfunction_NN_1_4::synapse0x1b6cfe0() {
   return (neuron0x1b5c0c0()*0.05344);
}

double NNfunction_NN_1_4::synapse0x1b6d020() {
   return (neuron0x1b5c400()*1.96987);
}

double NNfunction_NN_1_4::synapse0x1b7eef0() {
   return (neuron0x1b57840()*0.26018);
}

double NNfunction_NN_1_4::synapse0x1b7ef30() {
   return (neuron0x1b57b80()*-2.43027);
}

double NNfunction_NN_1_4::synapse0x1b7ef70() {
   return (neuron0x1b57ec0()*-0.823358);
}

double NNfunction_NN_1_4::synapse0x1b7efb0() {
   return (neuron0x1b58200()*0.0693591);
}

double NNfunction_NN_1_4::synapse0x1b7eff0() {
   return (neuron0x1b58540()*0.00330063);
}

double NNfunction_NN_1_4::synapse0x1b7f030() {
   return (neuron0x1b58880()*-0.0127692);
}

double NNfunction_NN_1_4::synapse0x1b7f070() {
   return (neuron0x1b58bc0()*0.0291607);
}

double NNfunction_NN_1_4::synapse0x1b7f0b0() {
   return (neuron0x1b58f00()*-0.0228698);
}

double NNfunction_NN_1_4::synapse0x1b7f0f0() {
   return (neuron0x1b59240()*-0.0062287);
}

double NNfunction_NN_1_4::synapse0x1b7f130() {
   return (neuron0x1b59580()*-0.0617038);
}

double NNfunction_NN_1_4::synapse0x1b7f170() {
   return (neuron0x1b598c0()*0.0450018);
}

double NNfunction_NN_1_4::synapse0x1b7f1b0() {
   return (neuron0x1b59c00()*-0.707181);
}

double NNfunction_NN_1_4::synapse0x1b7f1f0() {
   return (neuron0x1b59f40()*0.0269635);
}

double NNfunction_NN_1_4::synapse0x1b7f230() {
   return (neuron0x1b5a280()*-0.16177);
}

double NNfunction_NN_1_4::synapse0x1b7f270() {
   return (neuron0x1b5a5c0()*0.0224468);
}

double NNfunction_NN_1_4::synapse0x1b7f2b0() {
   return (neuron0x1b5a900()*-0.0426422);
}

double NNfunction_NN_1_4::synapse0x1b6d060() {
   return (neuron0x1b5ac40()*0.0154219);
}

double NNfunction_NN_1_4::synapse0x1b6d0a0() {
   return (neuron0x1b5b1a0()*-0.0989619);
}

double NNfunction_NN_1_4::synapse0x1b7f400() {
   return (neuron0x1b5b3c0()*-0.0715956);
}

double NNfunction_NN_1_4::synapse0x1b7f440() {
   return (neuron0x1b5b700()*0.00801351);
}

double NNfunction_NN_1_4::synapse0x1b7f480() {
   return (neuron0x1b5ba40()*0.018179);
}

double NNfunction_NN_1_4::synapse0x1b7f4c0() {
   return (neuron0x1b5bd80()*-0.0442394);
}

double NNfunction_NN_1_4::synapse0x1b7f500() {
   return (neuron0x1b5c0c0()*0.00507403);
}

double NNfunction_NN_1_4::synapse0x1b7f540() {
   return (neuron0x1b5c400()*-8.74949);
}

double NNfunction_NN_1_4::synapse0x1b7f8c0() {
   return (neuron0x1b57840()*0.139975);
}

double NNfunction_NN_1_4::synapse0x1b7f900() {
   return (neuron0x1b57b80()*1.66946);
}

double NNfunction_NN_1_4::synapse0x1b7f940() {
   return (neuron0x1b57ec0()*-4.66398);
}

double NNfunction_NN_1_4::synapse0x1b7f980() {
   return (neuron0x1b58200()*-0.0620867);
}

double NNfunction_NN_1_4::synapse0x1b7f9c0() {
   return (neuron0x1b58540()*-0.00847437);
}

double NNfunction_NN_1_4::synapse0x1b7fa00() {
   return (neuron0x1b58880()*0.00253232);
}

double NNfunction_NN_1_4::synapse0x1b7fa40() {
   return (neuron0x1b58bc0()*-0.00778278);
}

double NNfunction_NN_1_4::synapse0x1b7fa80() {
   return (neuron0x1b58f00()*0.0123697);
}

double NNfunction_NN_1_4::synapse0x1b7fac0() {
   return (neuron0x1b59240()*-0.0170922);
}

double NNfunction_NN_1_4::synapse0x1b7fb00() {
   return (neuron0x1b59580()*0.073489);
}

double NNfunction_NN_1_4::synapse0x1b7fb40() {
   return (neuron0x1b598c0()*-0.0784555);
}

double NNfunction_NN_1_4::synapse0x1b7fb80() {
   return (neuron0x1b59c00()*-0.118491);
}

double NNfunction_NN_1_4::synapse0x1b7fbc0() {
   return (neuron0x1b59f40()*0.0160642);
}

double NNfunction_NN_1_4::synapse0x1b7fc00() {
   return (neuron0x1b5a280()*0.0886725);
}

double NNfunction_NN_1_4::synapse0x1b7fc40() {
   return (neuron0x1b5a5c0()*0.00912085);
}

double NNfunction_NN_1_4::synapse0x1b7fc80() {
   return (neuron0x1b5a900()*-0.0802021);
}

double NNfunction_NN_1_4::synapse0x1b7f710() {
   return (neuron0x1b5ac40()*0.129109);
}

double NNfunction_NN_1_4::synapse0x1b7f750() {
   return (neuron0x1b5b1a0()*-0.0040426);
}

double NNfunction_NN_1_4::synapse0x1b7fdd0() {
   return (neuron0x1b5b3c0()*-0.0301986);
}

double NNfunction_NN_1_4::synapse0x1b7fe10() {
   return (neuron0x1b5b700()*0.0345155);
}

double NNfunction_NN_1_4::synapse0x1b7fe50() {
   return (neuron0x1b5ba40()*-0.111029);
}

double NNfunction_NN_1_4::synapse0x1b7fe90() {
   return (neuron0x1b5bd80()*-0.116445);
}

double NNfunction_NN_1_4::synapse0x1b7fed0() {
   return (neuron0x1b5c0c0()*-0.063663);
}

double NNfunction_NN_1_4::synapse0x1b7ff10() {
   return (neuron0x1b5c400()*0.651951);
}

double NNfunction_NN_1_4::synapse0x1b80290() {
   return (neuron0x1b57840()*0.0329953);
}

double NNfunction_NN_1_4::synapse0x1b802d0() {
   return (neuron0x1b57b80()*1.0206);
}

double NNfunction_NN_1_4::synapse0x1b80310() {
   return (neuron0x1b57ec0()*0.845796);
}

double NNfunction_NN_1_4::synapse0x1b80350() {
   return (neuron0x1b58200()*0.0785996);
}

double NNfunction_NN_1_4::synapse0x1b80390() {
   return (neuron0x1b58540()*0.0184391);
}

double NNfunction_NN_1_4::synapse0x1b803d0() {
   return (neuron0x1b58880()*0.00135866);
}

double NNfunction_NN_1_4::synapse0x1b80410() {
   return (neuron0x1b58bc0()*0.0454637);
}

double NNfunction_NN_1_4::synapse0x1b80450() {
   return (neuron0x1b58f00()*-0.0878406);
}

double NNfunction_NN_1_4::synapse0x1b80490() {
   return (neuron0x1b59240()*-0.0034454);
}

double NNfunction_NN_1_4::synapse0x1b804d0() {
   return (neuron0x1b59580()*-0.00363446);
}

double NNfunction_NN_1_4::synapse0x1b80510() {
   return (neuron0x1b598c0()*-0.0218865);
}

double NNfunction_NN_1_4::synapse0x1b80550() {
   return (neuron0x1b59c00()*1.6753);
}

double NNfunction_NN_1_4::synapse0x1b80590() {
   return (neuron0x1b59f40()*0.157667);
}

double NNfunction_NN_1_4::synapse0x1b805d0() {
   return (neuron0x1b5a280()*-0.0361998);
}

double NNfunction_NN_1_4::synapse0x1b80610() {
   return (neuron0x1b5a5c0()*0.00424722);
}

double NNfunction_NN_1_4::synapse0x1b80650() {
   return (neuron0x1b5a900()*0.0728117);
}

double NNfunction_NN_1_4::synapse0x1b800e0() {
   return (neuron0x1b5ac40()*0.0197681);
}

double NNfunction_NN_1_4::synapse0x1b80120() {
   return (neuron0x1b5b1a0()*-0.0336677);
}

double NNfunction_NN_1_4::synapse0x1b807a0() {
   return (neuron0x1b5b3c0()*0.0018498);
}

double NNfunction_NN_1_4::synapse0x1b807e0() {
   return (neuron0x1b5b700()*-0.0166778);
}

double NNfunction_NN_1_4::synapse0x1b80820() {
   return (neuron0x1b5ba40()*-0.00398985);
}

double NNfunction_NN_1_4::synapse0x1b80860() {
   return (neuron0x1b5bd80()*-0.0777283);
}

double NNfunction_NN_1_4::synapse0x1b808a0() {
   return (neuron0x1b5c0c0()*-0.0145259);
}

double NNfunction_NN_1_4::synapse0x1b808e0() {
   return (neuron0x1b5c400()*0.0376421);
}

double NNfunction_NN_1_4::synapse0x1b80c60() {
   return (neuron0x1b57840()*-0.523468);
}

double NNfunction_NN_1_4::synapse0x1b80ca0() {
   return (neuron0x1b57b80()*0.0342065);
}

double NNfunction_NN_1_4::synapse0x1b80ce0() {
   return (neuron0x1b57ec0()*-2.22122);
}

double NNfunction_NN_1_4::synapse0x1b80d20() {
   return (neuron0x1b58200()*0.330776);
}

double NNfunction_NN_1_4::synapse0x1b80d60() {
   return (neuron0x1b58540()*-0.589597);
}

double NNfunction_NN_1_4::synapse0x1b80da0() {
   return (neuron0x1b58880()*-0.334558);
}

double NNfunction_NN_1_4::synapse0x1b80de0() {
   return (neuron0x1b58bc0()*-0.181153);
}

double NNfunction_NN_1_4::synapse0x1b80e20() {
   return (neuron0x1b58f00()*-0.286671);
}

double NNfunction_NN_1_4::synapse0x1b80e60() {
   return (neuron0x1b59240()*-0.884729);
}

double NNfunction_NN_1_4::synapse0x1b80ea0() {
   return (neuron0x1b59580()*-0.279825);
}

double NNfunction_NN_1_4::synapse0x1b80ee0() {
   return (neuron0x1b598c0()*0.12433);
}

double NNfunction_NN_1_4::synapse0x1b80f20() {
   return (neuron0x1b59c00()*-0.791607);
}

double NNfunction_NN_1_4::synapse0x1b80f60() {
   return (neuron0x1b59f40()*-0.208358);
}

double NNfunction_NN_1_4::synapse0x1b80fa0() {
   return (neuron0x1b5a280()*0.0338291);
}

double NNfunction_NN_1_4::synapse0x1b80fe0() {
   return (neuron0x1b5a5c0()*-1.16294);
}

double NNfunction_NN_1_4::synapse0x1b81020() {
   return (neuron0x1b5a900()*-0.080238);
}

double NNfunction_NN_1_4::synapse0x1b80ab0() {
   return (neuron0x1b5ac40()*0.122145);
}

double NNfunction_NN_1_4::synapse0x1b80af0() {
   return (neuron0x1b5b1a0()*-1.17243);
}

double NNfunction_NN_1_4::synapse0x1b81170() {
   return (neuron0x1b5b3c0()*-0.0398274);
}

double NNfunction_NN_1_4::synapse0x1b811b0() {
   return (neuron0x1b5b700()*0.290442);
}

double NNfunction_NN_1_4::synapse0x1b811f0() {
   return (neuron0x1b5ba40()*0.14328);
}

double NNfunction_NN_1_4::synapse0x1b81230() {
   return (neuron0x1b5bd80()*0.247597);
}

double NNfunction_NN_1_4::synapse0x1b81270() {
   return (neuron0x1b5c0c0()*0.361133);
}

double NNfunction_NN_1_4::synapse0x1b812b0() {
   return (neuron0x1b5c400()*0.113292);
}

double NNfunction_NN_1_4::synapse0x1b5d850() {
   return (neuron0x1b5c8a0()*2.93982);
}

double NNfunction_NN_1_4::synapse0x1b5d890() {
   return (neuron0x1b5d1b0()*-3.76524);
}

double NNfunction_NN_1_4::synapse0x1b5ed60() {
   return (neuron0x1b5dc90()*0.196004);
}

double NNfunction_NN_1_4::synapse0x1b5eda0() {
   return (neuron0x1917520()*0.86062);
}

double NNfunction_NN_1_4::synapse0x1b5f730() {
   return (neuron0x1b5eab0()*-0.539147);
}

double NNfunction_NN_1_4::synapse0x1b5f770() {
   return (neuron0x1b5f480()*-3.1811);
}

double NNfunction_NN_1_4::synapse0x1b60500() {
   return (neuron0x1b60250()*0.1797);
}

double NNfunction_NN_1_4::synapse0x1b60540() {
   return (neuron0x1b60c20()*-0.0715209);
}

double NNfunction_NN_1_4::synapse0x1b60ed0() {
   return (neuron0x1b615f0()*-0.390088);
}

double NNfunction_NN_1_4::synapse0x1b60f10() {
   return (neuron0x1b620d0()*1.31744);
}

double NNfunction_NN_1_4::synapse0x1b618a0() {
   return (neuron0x1b62aa0()*2.20489);
}

double NNfunction_NN_1_4::synapse0x1b618e0() {
   return (neuron0x1b5fb80()*-0.93241);
}

double NNfunction_NN_1_4::synapse0x1b62380() {
   return (neuron0x1b64650()*0.40097);
}

double NNfunction_NN_1_4::synapse0x1b623c0() {
   return (neuron0x1b65020()*-2.0299);
}

double NNfunction_NN_1_4::synapse0x1b62d50() {
   return (neuron0x1b659f0()*-1.18373);
}

double NNfunction_NN_1_4::synapse0x1b62d90() {
   return (neuron0x1b663c0()*0.116239);
}

double NNfunction_NN_1_4::synapse0x1b5fe30() {
   return (neuron0x1b681d0()*-0.617469);
}

double NNfunction_NN_1_4::synapse0x1b5fe70() {
   return (neuron0x1b684b0()*-0.102431);
}

double NNfunction_NN_1_4::synapse0x1b64900() {
   return (neuron0x1b68e80()*-0.0985653);
}

double NNfunction_NN_1_4::synapse0x1b64940() {
   return (neuron0x1b69850()*1.05998);
}

double NNfunction_NN_1_4::synapse0x1b652d0() {
   return (neuron0x1b6a220()*0.396612);
}

double NNfunction_NN_1_4::synapse0x1b65310() {
   return (neuron0x1b6abf0()*0.0779394);
}

double NNfunction_NN_1_4::synapse0x1b65ca0() {
   return (neuron0x1b63740()*0.608684);
}

double NNfunction_NN_1_4::synapse0x1b65ce0() {
   return (neuron0x1b64110()*0.912788);
}

double NNfunction_NN_1_4::synapse0x1b66670() {
   return (neuron0x1b6d980()*0.598467);
}

double NNfunction_NN_1_4::synapse0x1b666b0() {
   return (neuron0x1b6e350()*1.03657);
}

double NNfunction_NN_1_4::synapse0x1b5a7e0() {
   return (neuron0x1b6ed20()*-0.397067);
}

double NNfunction_NN_1_4::synapse0x1b5a820() {
   return (neuron0x1b6f6f0()*0.0694783);
}

double NNfunction_NN_1_4::synapse0x1b68760() {
   return (neuron0x1b700c0()*-0.741871);
}

double NNfunction_NN_1_4::synapse0x1b687a0() {
   return (neuron0x1b70a90()*-0.610895);
}

double NNfunction_NN_1_4::synapse0x1b69130() {
   return (neuron0x1b71460()*0.790257);
}

double NNfunction_NN_1_4::synapse0x1b69170() {
   return (neuron0x1b71e30()*3.3105);
}

double NNfunction_NN_1_4::synapse0x1b69b00() {
   return (neuron0x1b67ec0()*2.03307);
}

double NNfunction_NN_1_4::synapse0x1b69b40() {
   return (neuron0x1b74a10()*-0.647725);
}

double NNfunction_NN_1_4::synapse0x1b6a4d0() {
   return (neuron0x1b753e0()*0.196771);
}

double NNfunction_NN_1_4::synapse0x1b6a510() {
   return (neuron0x1b75db0()*0.27708);
}

double NNfunction_NN_1_4::synapse0x1b6aea0() {
   return (neuron0x1b76780()*-0.0137244);
}

double NNfunction_NN_1_4::synapse0x1b6aee0() {
   return (neuron0x1b77150()*-1.18543);
}

double NNfunction_NN_1_4::synapse0x1b639f0() {
   return (neuron0x1b77b20()*-0.999943);
}

double NNfunction_NN_1_4::synapse0x1b63a30() {
   return (neuron0x1b784f0()*0.394652);
}

double NNfunction_NN_1_4::synapse0x1b6d2a0() {
   return (neuron0x1b78ec0()*0.677061);
}

double NNfunction_NN_1_4::synapse0x1b6d2e0() {
   return (neuron0x1b79aa0()*1.3509);
}

double NNfunction_NN_1_4::synapse0x1b6dc30() {
   return (neuron0x1b7a470()*1.09284);
}

double NNfunction_NN_1_4::synapse0x1b6dc70() {
   return (neuron0x1b6b2f0()*-0.350438);
}

double NNfunction_NN_1_4::synapse0x1b6e600() {
   return (neuron0x1b6bcc0()*1.93316);
}

double NNfunction_NN_1_4::synapse0x1b6e640() {
   return (neuron0x1b6c690()*-1.16117);
}

double NNfunction_NN_1_4::synapse0x1b6efd0() {
   return (neuron0x1b7ecd0()*-0.79509);
}

double NNfunction_NN_1_4::synapse0x1b6f010() {
   return (neuron0x1b7f580()*1.44437);
}

double NNfunction_NN_1_4::synapse0x1b6f9a0() {
   return (neuron0x1b7ff50()*0.930877);
}

double NNfunction_NN_1_4::synapse0x1b6f9e0() {
   return (neuron0x1b80920()*0.174402);
}

double NNfunction_NN_1_4::synapse0x1b720e0() {
   return (neuron0x1b5c8a0()*1.06492);
}

double NNfunction_NN_1_4::synapse0x1b72120() {
   return (neuron0x1b5d1b0()*2.83576);
}

double NNfunction_NN_1_4::synapse0x1b676a0() {
   return (neuron0x1b5dc90()*0.267925);
}

double NNfunction_NN_1_4::synapse0x1b676e0() {
   return (neuron0x1917520()*-0.275407);
}

double NNfunction_NN_1_4::synapse0x1b74cc0() {
   return (neuron0x1b5eab0()*-0.578161);
}

double NNfunction_NN_1_4::synapse0x1b74d00() {
   return (neuron0x1b5f480()*-0.297769);
}

double NNfunction_NN_1_4::synapse0x1b75690() {
   return (neuron0x1b60250()*0.307259);
}

double NNfunction_NN_1_4::synapse0x1b756d0() {
   return (neuron0x1b60c20()*0.186847);
}

double NNfunction_NN_1_4::synapse0x1b76060() {
   return (neuron0x1b615f0()*0.522386);
}

double NNfunction_NN_1_4::synapse0x1b760a0() {
   return (neuron0x1b620d0()*0.428735);
}

double NNfunction_NN_1_4::synapse0x1b76a30() {
   return (neuron0x1b62aa0()*-0.768769);
}

double NNfunction_NN_1_4::synapse0x1b76a70() {
   return (neuron0x1b5fb80()*-0.490642);
}

double NNfunction_NN_1_4::synapse0x1b77400() {
   return (neuron0x1b64650()*0.538803);
}

double NNfunction_NN_1_4::synapse0x1b77440() {
   return (neuron0x1b65020()*-0.438125);
}

double NNfunction_NN_1_4::synapse0x1b77dd0() {
   return (neuron0x1b659f0()*-3.01419);
}

double NNfunction_NN_1_4::synapse0x1b77e10() {
   return (neuron0x1b663c0()*-0.452046);
}

double NNfunction_NN_1_4::synapse0x1b787a0() {
   return (neuron0x1b681d0()*0.600965);
}

double NNfunction_NN_1_4::synapse0x1b787e0() {
   return (neuron0x1b684b0()*-0.359001);
}

double NNfunction_NN_1_4::synapse0x1b79170() {
   return (neuron0x1b68e80()*0.913426);
}

double NNfunction_NN_1_4::synapse0x1b791b0() {
   return (neuron0x1b69850()*0.892149);
}

double NNfunction_NN_1_4::synapse0x1b79d50() {
   return (neuron0x1b6a220()*0.417496);
}

double NNfunction_NN_1_4::synapse0x1b79d90() {
   return (neuron0x1b6abf0()*-0.147405);
}

double NNfunction_NN_1_4::synapse0x1b7a720() {
   return (neuron0x1b63740()*0.559276);
}

double NNfunction_NN_1_4::synapse0x1b7a760() {
   return (neuron0x1b64110()*-0.0326921);
}

double NNfunction_NN_1_4::synapse0x1b6b5a0() {
   return (neuron0x1b6d980()*0.467624);
}

double NNfunction_NN_1_4::synapse0x1b6b5e0() {
   return (neuron0x1b6e350()*0.645642);
}

double NNfunction_NN_1_4::synapse0x1b6bf70() {
   return (neuron0x1b6ed20()*-1.26351);
}

double NNfunction_NN_1_4::synapse0x1b6bfb0() {
   return (neuron0x1b6f6f0()*0.291062);
}

double NNfunction_NN_1_4::synapse0x1b6c940() {
   return (neuron0x1b700c0()*-0.294781);
}

double NNfunction_NN_1_4::synapse0x1b6c980() {
   return (neuron0x1b70a90()*2.00646);
}

double NNfunction_NN_1_4::synapse0x1b7ee60() {
   return (neuron0x1b71460()*0.83642);
}

double NNfunction_NN_1_4::synapse0x1b7eea0() {
   return (neuron0x1b71e30()*-0.114271);
}

double NNfunction_NN_1_4::synapse0x1b7f830() {
   return (neuron0x1b67ec0()*3.29971);
}

double NNfunction_NN_1_4::synapse0x1b7f870() {
   return (neuron0x1b74a10()*-0.689391);
}

double NNfunction_NN_1_4::synapse0x1b80200() {
   return (neuron0x1b753e0()*0.378405);
}

double NNfunction_NN_1_4::synapse0x1b80240() {
   return (neuron0x1b75db0()*0.268448);
}

double NNfunction_NN_1_4::synapse0x1b80bd0() {
   return (neuron0x1b76780()*2.29737);
}

double NNfunction_NN_1_4::synapse0x1b80c10() {
   return (neuron0x1b77150()*0.539492);
}

double NNfunction_NN_1_4::synapse0x1b5cac0() {
   return (neuron0x1b77b20()*-2.21167);
}

double NNfunction_NN_1_4::synapse0x1b5cb00() {
   return (neuron0x1b784f0()*0.75963);
}

double NNfunction_NN_1_4::synapse0x1b70370() {
   return (neuron0x1b78ec0()*0.928584);
}

double NNfunction_NN_1_4::synapse0x1b703b0() {
   return (neuron0x1b79aa0()*-1.27024);
}

double NNfunction_NN_1_4::synapse0x1b812f0() {
   return (neuron0x1b7a470()*0.811636);
}

double NNfunction_NN_1_4::synapse0x1b81330() {
   return (neuron0x1b6b2f0()*-0.530487);
}

double NNfunction_NN_1_4::synapse0x1b81370() {
   return (neuron0x1b6bcc0()*-0.791679);
}

double NNfunction_NN_1_4::synapse0x1b813b0() {
   return (neuron0x1b6c690()*0.860374);
}

double NNfunction_NN_1_4::synapse0x1b88260() {
   return (neuron0x1b7ecd0()*1.87994);
}

double NNfunction_NN_1_4::synapse0x1b882a0() {
   return (neuron0x1b7f580()*0.710758);
}

double NNfunction_NN_1_4::synapse0x1b882e0() {
   return (neuron0x1b7ff50()*1.22837);
}

double NNfunction_NN_1_4::synapse0x1b88320() {
   return (neuron0x1b80920()*0.37784);
}

double NNfunction_NN_1_4::synapse0x1b886a0() {
   return (neuron0x1b5c8a0()*1.13737);
}

double NNfunction_NN_1_4::synapse0x1b886e0() {
   return (neuron0x1b5d1b0()*-1.21365);
}

double NNfunction_NN_1_4::synapse0x1b88720() {
   return (neuron0x1b5dc90()*0.147638);
}

double NNfunction_NN_1_4::synapse0x1b88760() {
   return (neuron0x1917520()*-0.612526);
}

double NNfunction_NN_1_4::synapse0x1b887a0() {
   return (neuron0x1b5eab0()*-0.306776);
}

double NNfunction_NN_1_4::synapse0x1b887e0() {
   return (neuron0x1b5f480()*-0.0973721);
}

double NNfunction_NN_1_4::synapse0x1b88820() {
   return (neuron0x1b60250()*0.0880522);
}

double NNfunction_NN_1_4::synapse0x1b88860() {
   return (neuron0x1b60c20()*0.0305396);
}

double NNfunction_NN_1_4::synapse0x1b888a0() {
   return (neuron0x1b615f0()*0.326008);
}

double NNfunction_NN_1_4::synapse0x1b888e0() {
   return (neuron0x1b620d0()*0.316813);
}

double NNfunction_NN_1_4::synapse0x1b88920() {
   return (neuron0x1b62aa0()*0.482138);
}

double NNfunction_NN_1_4::synapse0x1b88960() {
   return (neuron0x1b5fb80()*-0.515276);
}

double NNfunction_NN_1_4::synapse0x1b889a0() {
   return (neuron0x1b64650()*0.195405);
}

double NNfunction_NN_1_4::synapse0x1b889e0() {
   return (neuron0x1b65020()*-0.862803);
}

double NNfunction_NN_1_4::synapse0x1b88a20() {
   return (neuron0x1b659f0()*-1.53477);
}

double NNfunction_NN_1_4::synapse0x1b88a60() {
   return (neuron0x1b663c0()*-0.679756);
}

double NNfunction_NN_1_4::synapse0x1b884f0() {
   return (neuron0x1b681d0()*-3.26435);
}

double NNfunction_NN_1_4::synapse0x1b88530() {
   return (neuron0x1b684b0()*-0.103851);
}

double NNfunction_NN_1_4::synapse0x1b88bb0() {
   return (neuron0x1b68e80()*3.7967);
}

double NNfunction_NN_1_4::synapse0x1b88bf0() {
   return (neuron0x1b69850()*0.469845);
}

double NNfunction_NN_1_4::synapse0x1b88c30() {
   return (neuron0x1b6a220()*0.398471);
}

double NNfunction_NN_1_4::synapse0x1b88c70() {
   return (neuron0x1b6abf0()*-0.00856013);
}

double NNfunction_NN_1_4::synapse0x1b88cb0() {
   return (neuron0x1b63740()*0.272402);
}

double NNfunction_NN_1_4::synapse0x1b88cf0() {
   return (neuron0x1b64110()*0.790561);
}

double NNfunction_NN_1_4::synapse0x1b88d30() {
   return (neuron0x1b6d980()*0.24204);
}

double NNfunction_NN_1_4::synapse0x1b88d70() {
   return (neuron0x1b6e350()*0.302092);
}

double NNfunction_NN_1_4::synapse0x1b88db0() {
   return (neuron0x1b6ed20()*-0.378909);
}

double NNfunction_NN_1_4::synapse0x1b88df0() {
   return (neuron0x1b6f6f0()*0.0639666);
}

double NNfunction_NN_1_4::synapse0x1b88e30() {
   return (neuron0x1b700c0()*-0.14108);
}

double NNfunction_NN_1_4::synapse0x1b88e70() {
   return (neuron0x1b70a90()*1.45244);
}

double NNfunction_NN_1_4::synapse0x1b88eb0() {
   return (neuron0x1b71460()*0.582958);
}

double NNfunction_NN_1_4::synapse0x1b88ef0() {
   return (neuron0x1b71e30()*1.16638);
}

double NNfunction_NN_1_4::synapse0x1b88aa0() {
   return (neuron0x1b67ec0()*2.16592);
}

double NNfunction_NN_1_4::synapse0x1b88ae0() {
   return (neuron0x1b74a10()*-0.723362);
}

double NNfunction_NN_1_4::synapse0x1b88b20() {
   return (neuron0x1b753e0()*0.145104);
}

double NNfunction_NN_1_4::synapse0x1b88b60() {
   return (neuron0x1b75db0()*0.189929);
}

double NNfunction_NN_1_4::synapse0x1b89140() {
   return (neuron0x1b76780()*1.4806);
}

double NNfunction_NN_1_4::synapse0x1b89180() {
   return (neuron0x1b77150()*-0.110682);
}

double NNfunction_NN_1_4::synapse0x1b891c0() {
   return (neuron0x1b77b20()*-0.86559);
}

double NNfunction_NN_1_4::synapse0x1b89200() {
   return (neuron0x1b784f0()*0.697701);
}

double NNfunction_NN_1_4::synapse0x1b89240() {
   return (neuron0x1b78ec0()*1.19697);
}

double NNfunction_NN_1_4::synapse0x1b89280() {
   return (neuron0x1b79aa0()*-0.65337);
}

double NNfunction_NN_1_4::synapse0x1b892c0() {
   return (neuron0x1b7a470()*0.448782);
}

double NNfunction_NN_1_4::synapse0x1b89300() {
   return (neuron0x1b6b2f0()*-0.770443);
}

double NNfunction_NN_1_4::synapse0x1b89340() {
   return (neuron0x1b6bcc0()*0.425685);
}

double NNfunction_NN_1_4::synapse0x1b89380() {
   return (neuron0x1b6c690()*1.26725);
}

double NNfunction_NN_1_4::synapse0x1b893c0() {
   return (neuron0x1b7ecd0()*-0.31709);
}

double NNfunction_NN_1_4::synapse0x1b89400() {
   return (neuron0x1b7f580()*0.614388);
}

double NNfunction_NN_1_4::synapse0x1b89440() {
   return (neuron0x1b7ff50()*0.921419);
}

double NNfunction_NN_1_4::synapse0x1b89480() {
   return (neuron0x1b80920()*0.0895853);
}

double NNfunction_NN_1_4::synapse0x1b89800() {
   return (neuron0x1b5c8a0()*-0.785888);
}

double NNfunction_NN_1_4::synapse0x1b89840() {
   return (neuron0x1b5d1b0()*0.679598);
}

double NNfunction_NN_1_4::synapse0x1b89880() {
   return (neuron0x1b5dc90()*-0.237796);
}

double NNfunction_NN_1_4::synapse0x1b898c0() {
   return (neuron0x1917520()*-0.740131);
}

double NNfunction_NN_1_4::synapse0x1b89900() {
   return (neuron0x1b5eab0()*0.764657);
}

double NNfunction_NN_1_4::synapse0x1b89940() {
   return (neuron0x1b5f480()*1.58438);
}

double NNfunction_NN_1_4::synapse0x1b89980() {
   return (neuron0x1b60250()*-0.621028);
}

double NNfunction_NN_1_4::synapse0x1b899c0() {
   return (neuron0x1b60c20()*-0.806588);
}

double NNfunction_NN_1_4::synapse0x1b89a00() {
   return (neuron0x1b615f0()*0.0313143);
}

double NNfunction_NN_1_4::synapse0x1b89a40() {
   return (neuron0x1b620d0()*0.578486);
}

double NNfunction_NN_1_4::synapse0x1b89a80() {
   return (neuron0x1b62aa0()*0.8482);
}

double NNfunction_NN_1_4::synapse0x1b89ac0() {
   return (neuron0x1b5fb80()*0.628678);
}

double NNfunction_NN_1_4::synapse0x1b89b00() {
   return (neuron0x1b64650()*-0.702941);
}

double NNfunction_NN_1_4::synapse0x1b89b40() {
   return (neuron0x1b65020()*1.24314);
}

double NNfunction_NN_1_4::synapse0x1b89b80() {
   return (neuron0x1b659f0()*-0.682977);
}

double NNfunction_NN_1_4::synapse0x1b89bc0() {
   return (neuron0x1b663c0()*0.810743);
}

double NNfunction_NN_1_4::synapse0x1b89650() {
   return (neuron0x1b681d0()*1.08739);
}

double NNfunction_NN_1_4::synapse0x1b89690() {
   return (neuron0x1b684b0()*0.952604);
}

double NNfunction_NN_1_4::synapse0x1b89d10() {
   return (neuron0x1b68e80()*2.09719);
}

double NNfunction_NN_1_4::synapse0x1b89d50() {
   return (neuron0x1b69850()*0.108465);
}

double NNfunction_NN_1_4::synapse0x1b89d90() {
   return (neuron0x1b6a220()*-0.282954);
}

double NNfunction_NN_1_4::synapse0x1b89dd0() {
   return (neuron0x1b6abf0()*1.28618);
}

double NNfunction_NN_1_4::synapse0x1b89e10() {
   return (neuron0x1b63740()*-0.514299);
}

double NNfunction_NN_1_4::synapse0x1b89e50() {
   return (neuron0x1b64110()*-0.325574);
}

double NNfunction_NN_1_4::synapse0x1b89e90() {
   return (neuron0x1b6d980()*-0.72367);
}

double NNfunction_NN_1_4::synapse0x1b89ed0() {
   return (neuron0x1b6e350()*0.151857);
}

double NNfunction_NN_1_4::synapse0x1b89f10() {
   return (neuron0x1b6ed20()*-0.161151);
}

double NNfunction_NN_1_4::synapse0x1b89f50() {
   return (neuron0x1b6f6f0()*-1.05585);
}

double NNfunction_NN_1_4::synapse0x1b89f90() {
   return (neuron0x1b700c0()*0.729544);
}

double NNfunction_NN_1_4::synapse0x1b89fd0() {
   return (neuron0x1b70a90()*1.18564);
}

double NNfunction_NN_1_4::synapse0x1b8a010() {
   return (neuron0x1b71460()*0.387846);
}

double NNfunction_NN_1_4::synapse0x1b8a050() {
   return (neuron0x1b71e30()*-0.158365);
}

double NNfunction_NN_1_4::synapse0x1b89c00() {
   return (neuron0x1b67ec0()*2.14944);
}

double NNfunction_NN_1_4::synapse0x1b89c40() {
   return (neuron0x1b74a10()*0.855455);
}

double NNfunction_NN_1_4::synapse0x1b89c80() {
   return (neuron0x1b753e0()*-0.507597);
}

double NNfunction_NN_1_4::synapse0x1b89cc0() {
   return (neuron0x1b75db0()*-0.182931);
}

double NNfunction_NN_1_4::synapse0x1b8a2a0() {
   return (neuron0x1b76780()*-0.448896);
}

double NNfunction_NN_1_4::synapse0x1b8a2e0() {
   return (neuron0x1b77150()*-1.28786);
}

double NNfunction_NN_1_4::synapse0x1b8a320() {
   return (neuron0x1b77b20()*0.518998);
}

double NNfunction_NN_1_4::synapse0x1b8a360() {
   return (neuron0x1b784f0()*0.625646);
}

double NNfunction_NN_1_4::synapse0x1b8a3a0() {
   return (neuron0x1b78ec0()*0.0545546);
}

double NNfunction_NN_1_4::synapse0x1b8a3e0() {
   return (neuron0x1b79aa0()*1.17713);
}

double NNfunction_NN_1_4::synapse0x1b8a420() {
   return (neuron0x1b7a470()*0.311622);
}

double NNfunction_NN_1_4::synapse0x1b8a460() {
   return (neuron0x1b6b2f0()*-0.029344);
}

double NNfunction_NN_1_4::synapse0x1b8a4a0() {
   return (neuron0x1b6bcc0()*-0.989718);
}

double NNfunction_NN_1_4::synapse0x1b8a4e0() {
   return (neuron0x1b6c690()*0.299252);
}

double NNfunction_NN_1_4::synapse0x1b8a520() {
   return (neuron0x1b7ecd0()*3.30817);
}

double NNfunction_NN_1_4::synapse0x1b8a560() {
   return (neuron0x1b7f580()*-2.07867);
}

double NNfunction_NN_1_4::synapse0x1b8a5a0() {
   return (neuron0x1b7ff50()*0.570846);
}

double NNfunction_NN_1_4::synapse0x1b8a5e0() {
   return (neuron0x1b80920()*-0.784122);
}

double NNfunction_NN_1_4::synapse0x1b8a960() {
   return (neuron0x1b5c8a0()*0.507965);
}

double NNfunction_NN_1_4::synapse0x1b8a9a0() {
   return (neuron0x1b5d1b0()*0.981465);
}

double NNfunction_NN_1_4::synapse0x1b8a9e0() {
   return (neuron0x1b5dc90()*0.260186);
}

double NNfunction_NN_1_4::synapse0x1b8aa20() {
   return (neuron0x1917520()*-0.04783);
}

double NNfunction_NN_1_4::synapse0x1b8aa60() {
   return (neuron0x1b5eab0()*0.327121);
}

double NNfunction_NN_1_4::synapse0x1b8aaa0() {
   return (neuron0x1b5f480()*-0.0146515);
}

double NNfunction_NN_1_4::synapse0x1b8aae0() {
   return (neuron0x1b60250()*0.698416);
}

double NNfunction_NN_1_4::synapse0x1b8ab20() {
   return (neuron0x1b60c20()*0.651572);
}

double NNfunction_NN_1_4::synapse0x1b8ab60() {
   return (neuron0x1b615f0()*-0.0860991);
}

double NNfunction_NN_1_4::synapse0x1b8aba0() {
   return (neuron0x1b620d0()*0.917417);
}

double NNfunction_NN_1_4::synapse0x1b8abe0() {
   return (neuron0x1b62aa0()*0.261464);
}

double NNfunction_NN_1_4::synapse0x1b8ac20() {
   return (neuron0x1b5fb80()*0.279218);
}

double NNfunction_NN_1_4::synapse0x1b8ac60() {
   return (neuron0x1b64650()*0.727197);
}

double NNfunction_NN_1_4::synapse0x1b8aca0() {
   return (neuron0x1b65020()*0.888439);
}

double NNfunction_NN_1_4::synapse0x1b8ace0() {
   return (neuron0x1b659f0()*-0.477336);
}

double NNfunction_NN_1_4::synapse0x1b8ad20() {
   return (neuron0x1b663c0()*0.185662);
}

double NNfunction_NN_1_4::synapse0x1b8a7b0() {
   return (neuron0x1b681d0()*0.0992294);
}

double NNfunction_NN_1_4::synapse0x1b8a7f0() {
   return (neuron0x1b684b0()*0.636144);
}

double NNfunction_NN_1_4::synapse0x1b8ae70() {
   return (neuron0x1b68e80()*0.804552);
}

double NNfunction_NN_1_4::synapse0x1b8aeb0() {
   return (neuron0x1b69850()*0.779039);
}

double NNfunction_NN_1_4::synapse0x1b8aef0() {
   return (neuron0x1b6a220()*0.845367);
}

double NNfunction_NN_1_4::synapse0x1b8af30() {
   return (neuron0x1b6abf0()*0.380167);
}

double NNfunction_NN_1_4::synapse0x1b8af70() {
   return (neuron0x1b63740()*0.694374);
}

double NNfunction_NN_1_4::synapse0x1b8afb0() {
   return (neuron0x1b64110()*-0.060518);
}

double NNfunction_NN_1_4::synapse0x1b8aff0() {
   return (neuron0x1b6d980()*0.214715);
}

double NNfunction_NN_1_4::synapse0x1b8b030() {
   return (neuron0x1b6e350()*0.461561);
}

double NNfunction_NN_1_4::synapse0x1b8b070() {
   return (neuron0x1b6ed20()*0.224927);
}

double NNfunction_NN_1_4::synapse0x1b8b0b0() {
   return (neuron0x1b6f6f0()*0.765092);
}

double NNfunction_NN_1_4::synapse0x1b8b0f0() {
   return (neuron0x1b700c0()*0.233746);
}

double NNfunction_NN_1_4::synapse0x1b8b130() {
   return (neuron0x1b70a90()*1.45214);
}

double NNfunction_NN_1_4::synapse0x1b8b170() {
   return (neuron0x1b71460()*0.684064);
}

double NNfunction_NN_1_4::synapse0x1b8b1b0() {
   return (neuron0x1b71e30()*-0.0795879);
}

double NNfunction_NN_1_4::synapse0x1b8ad60() {
   return (neuron0x1b67ec0()*0.737475);
}

double NNfunction_NN_1_4::synapse0x1b8ada0() {
   return (neuron0x1b74a10()*-0.328372);
}

double NNfunction_NN_1_4::synapse0x1b8ade0() {
   return (neuron0x1b753e0()*0.575276);
}

double NNfunction_NN_1_4::synapse0x1b8ae20() {
   return (neuron0x1b75db0()*1.08329);
}

double NNfunction_NN_1_4::synapse0x1b8b400() {
   return (neuron0x1b76780()*1.00611);
}

double NNfunction_NN_1_4::synapse0x1b8b440() {
   return (neuron0x1b77150()*-0.00298006);
}

double NNfunction_NN_1_4::synapse0x1b8b480() {
   return (neuron0x1b77b20()*0.0184685);
}

double NNfunction_NN_1_4::synapse0x1b8b4c0() {
   return (neuron0x1b784f0()*0.251758);
}

double NNfunction_NN_1_4::synapse0x1b8b500() {
   return (neuron0x1b78ec0()*-0.176738);
}

double NNfunction_NN_1_4::synapse0x1b8b540() {
   return (neuron0x1b79aa0()*0.421112);
}

double NNfunction_NN_1_4::synapse0x1b8b580() {
   return (neuron0x1b7a470()*1.2433);
}

double NNfunction_NN_1_4::synapse0x1b8b5c0() {
   return (neuron0x1b6b2f0()*-0.183734);
}

double NNfunction_NN_1_4::synapse0x1b8b600() {
   return (neuron0x1b6bcc0()*0.0393759);
}

double NNfunction_NN_1_4::synapse0x1b8b640() {
   return (neuron0x1b6c690()*0.454856);
}

double NNfunction_NN_1_4::synapse0x1b8b680() {
   return (neuron0x1b7ecd0()*0.851759);
}

double NNfunction_NN_1_4::synapse0x1b8b6c0() {
   return (neuron0x1b7f580()*0.234304);
}

double NNfunction_NN_1_4::synapse0x1b8b700() {
   return (neuron0x1b7ff50()*0.193081);
}

double NNfunction_NN_1_4::synapse0x1b8b740() {
   return (neuron0x1b80920()*0.278889);
}

double NNfunction_NN_1_4::synapse0x1b5c860() {
   return (neuron0x1b87b20()*6.3965);
}

double NNfunction_NN_1_4::synapse0x1b8b9a0() {
   return (neuron0x1b87ec0()*5.21747);
}

double NNfunction_NN_1_4::synapse0x1b8b9e0() {
   return (neuron0x1b88360()*-9.66947);
}

double NNfunction_NN_1_4::synapse0x1b8ba20() {
   return (neuron0x1b894c0()*3.14907);
}

double NNfunction_NN_1_4::synapse0x1b8ba60() {
   return (neuron0x1b8a620()*-4.18197);
}

