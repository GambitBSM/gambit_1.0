#include "NNfunction_ng_chi02.h"
#include <cmath>

double NNfunction_ng_chi02::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.2416)/15.0554;
   input1 = (in1 - 39.2246)/790.279;
   input2 = (in2 - 390.068)/446.525;
   input3 = (in3 - 255.189)/653.679;
   input4 = (in4 - 1053.67)/873.522;
   input5 = (in5 - 997.058)/907.151;
   input6 = (in6 - 1002.08)/907.372;
   input7 = (in7 - 990.523)/881.071;
   input8 = (in8 - 1000.08)/923.22;
   input9 = (in9 - 992.816)/915.665;
   input10 = (in10 - 983.502)/888.059;
   input11 = (in11 - 904.015)/823.983;
   input12 = (in12 - 965.253)/855.7;
   input13 = (in13 - 729.338)/593.284;
   input14 = (in14 - 949.997)/826.003;
   input15 = (in15 - 968.659)/832.118;
   input16 = (in16 - 648.22)/516.237;
   input17 = (in17 - 981.368)/870.872;
   input18 = (in18 - 983.801)/872.711;
   input19 = (in19 - 967.908)/821.09;
   input20 = (in20 - -206.469)/518.269;
   input21 = (in21 - -274.583)/1106.63;
   input22 = (in22 - -29.0054)/1137.15;
   input23 = (in23 - 5.8448)/575.26;
   switch(index) {
     case 0:
         return neuron0x3901790();
     default:
         return 0.;
   }
}

double NNfunction_ng_chi02::Value(int index, double* input) {
   input0 = (input[0] - 23.2416)/15.0554;
   input1 = (input[1] - 39.2246)/790.279;
   input2 = (input[2] - 390.068)/446.525;
   input3 = (input[3] - 255.189)/653.679;
   input4 = (input[4] - 1053.67)/873.522;
   input5 = (input[5] - 997.058)/907.151;
   input6 = (input[6] - 1002.08)/907.372;
   input7 = (input[7] - 990.523)/881.071;
   input8 = (input[8] - 1000.08)/923.22;
   input9 = (input[9] - 992.816)/915.665;
   input10 = (input[10] - 983.502)/888.059;
   input11 = (input[11] - 904.015)/823.983;
   input12 = (input[12] - 965.253)/855.7;
   input13 = (input[13] - 729.338)/593.284;
   input14 = (input[14] - 949.997)/826.003;
   input15 = (input[15] - 968.659)/832.118;
   input16 = (input[16] - 648.22)/516.237;
   input17 = (input[17] - 981.368)/870.872;
   input18 = (input[18] - 983.801)/872.711;
   input19 = (input[19] - 967.908)/821.09;
   input20 = (input[20] - -206.469)/518.269;
   input21 = (input[21] - -274.583)/1106.63;
   input22 = (input[22] - -29.0054)/1137.15;
   input23 = (input[23] - 5.8448)/575.26;
   switch(index) {
     case 0:
         return neuron0x3901790();
     default:
         return 0.;
   }
}

double NNfunction_ng_chi02::neuron0x38cc800() {
   return input0;
}

double NNfunction_ng_chi02::neuron0x38ccab0() {
   return input1;
}

double NNfunction_ng_chi02::neuron0x38ccdf0() {
   return input2;
}

double NNfunction_ng_chi02::neuron0x38cd130() {
   return input3;
}

double NNfunction_ng_chi02::neuron0x38cd470() {
   return input4;
}

double NNfunction_ng_chi02::neuron0x38cd7b0() {
   return input5;
}

double NNfunction_ng_chi02::neuron0x38cdaf0() {
   return input6;
}

double NNfunction_ng_chi02::neuron0x38cde30() {
   return input7;
}

double NNfunction_ng_chi02::neuron0x38ce170() {
   return input8;
}

double NNfunction_ng_chi02::neuron0x38ce4b0() {
   return input9;
}

double NNfunction_ng_chi02::neuron0x38ce7f0() {
   return input10;
}

double NNfunction_ng_chi02::neuron0x38ceb30() {
   return input11;
}

double NNfunction_ng_chi02::neuron0x38cee70() {
   return input12;
}

double NNfunction_ng_chi02::neuron0x38cf1b0() {
   return input13;
}

double NNfunction_ng_chi02::neuron0x38cf4f0() {
   return input14;
}

double NNfunction_ng_chi02::neuron0x38cf830() {
   return input15;
}

double NNfunction_ng_chi02::neuron0x38cfb70() {
   return input16;
}

double NNfunction_ng_chi02::neuron0x38d00d0() {
   return input17;
}

double NNfunction_ng_chi02::neuron0x38d02f0() {
   return input18;
}

double NNfunction_ng_chi02::neuron0x38d0630() {
   return input19;
}

double NNfunction_ng_chi02::neuron0x38d0970() {
   return input20;
}

double NNfunction_ng_chi02::neuron0x38d0cb0() {
   return input21;
}

double NNfunction_ng_chi02::neuron0x38d0ff0() {
   return input22;
}

double NNfunction_ng_chi02::neuron0x38d1330() {
   return input23;
}

double NNfunction_ng_chi02::input0x38d17a0() {
   double input = -1.68741;
   input += synapse0x38d1ae0();
   input += synapse0x38d1b20();
   input += synapse0x38d1b60();
   input += synapse0x38d1ba0();
   input += synapse0x38d1be0();
   input += synapse0x38d1c20();
   input += synapse0x38d1c60();
   input += synapse0x38d1ca0();
   input += synapse0x38d1ce0();
   input += synapse0x38d1d20();
   input += synapse0x38d1d60();
   input += synapse0x38d1da0();
   input += synapse0x38d1de0();
   input += synapse0x38d1e20();
   input += synapse0x38d1e60();
   input += synapse0x38d1ea0();
   input += synapse0x38d1930();
   input += synapse0x38d1970();
   input += synapse0x3688dc0();
   input += synapse0x3688e00();
   input += synapse0x38d1ff0();
   input += synapse0x38d2030();
   input += synapse0x38d2070();
   input += synapse0x38d20b0();
   return input;
}

double NNfunction_ng_chi02::neuron0x38d17a0() {
   double input = input0x38d17a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38d20f0() {
   double input = -3.67553;
   input += synapse0x38d2430();
   input += synapse0x38d2470();
   input += synapse0x38d24b0();
   input += synapse0x38d24f0();
   input += synapse0x38d2530();
   input += synapse0x38d2570();
   input += synapse0x38d25b0();
   input += synapse0x38d25f0();
   input += synapse0x38d2630();
   input += synapse0x38d1ee0();
   input += synapse0x38d1f20();
   input += synapse0x38d1f60();
   input += synapse0x38d1fa0();
   input += synapse0x38d2880();
   input += synapse0x38d28c0();
   input += synapse0x38d2900();
   input += synapse0x38d2280();
   input += synapse0x38d22c0();
   input += synapse0x38d2a50();
   input += synapse0x38d2a90();
   input += synapse0x38d2ad0();
   input += synapse0x38d2b10();
   input += synapse0x38d2b50();
   input += synapse0x38d2b90();
   return input;
}

double NNfunction_ng_chi02::neuron0x38d20f0() {
   double input = input0x38d20f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38d2bd0() {
   double input = -0.0477925;
   input += synapse0x38d2f10();
   input += synapse0x38d2f50();
   input += synapse0x38d2f90();
   input += synapse0x38d2fd0();
   input += synapse0x38d3010();
   input += synapse0x38d3050();
   input += synapse0x38d3090();
   input += synapse0x38d30d0();
   input += synapse0x38d3110();
   input += synapse0x38d3150();
   input += synapse0x38d3190();
   input += synapse0x38d31d0();
   input += synapse0x38d3210();
   input += synapse0x38d3250();
   input += synapse0x38d3290();
   input += synapse0x38d32d0();
   input += synapse0x38d2d60();
   input += synapse0x38d2da0();
   input += synapse0x268b3c0();
   input += synapse0x36968b0();
   input += synapse0x36968f0();
   input += synapse0x38d5210();
   input += synapse0x38d5250();
   input += synapse0x38cc540();
   return input;
}

double NNfunction_ng_chi02::neuron0x38d2bd0() {
   double input = input0x38d2bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38d2670() {
   double input = 0.324231;
   input += synapse0x38cc610();
   input += synapse0x3697130();
   input += synapse0x38d2800();
   input += synapse0x38d2840();
   input += synapse0x38d3420();
   input += synapse0x38d3460();
   input += synapse0x38d34a0();
   input += synapse0x38d34e0();
   input += synapse0x38d3520();
   input += synapse0x38d3560();
   input += synapse0x38d35a0();
   input += synapse0x38d35e0();
   input += synapse0x38d3620();
   input += synapse0x38d3660();
   input += synapse0x38d36a0();
   input += synapse0x38d36e0();
   input += synapse0x38cc580();
   input += synapse0x38cc5c0();
   input += synapse0x38d3830();
   input += synapse0x38d3870();
   input += synapse0x38d38b0();
   input += synapse0x38d38f0();
   input += synapse0x38d3930();
   input += synapse0x38d3970();
   return input;
}

double NNfunction_ng_chi02::neuron0x38d2670() {
   double input = input0x38d2670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38d39b0() {
   double input = -2.53936;
   input += synapse0x38d3cf0();
   input += synapse0x38d3d30();
   input += synapse0x38d3d70();
   input += synapse0x38d3db0();
   input += synapse0x38d3df0();
   input += synapse0x38d3e30();
   input += synapse0x38d3e70();
   input += synapse0x38d3eb0();
   input += synapse0x38d3ef0();
   input += synapse0x38d3f30();
   input += synapse0x38d3f70();
   input += synapse0x38d3fb0();
   input += synapse0x38d3ff0();
   input += synapse0x38d4030();
   input += synapse0x38d4070();
   input += synapse0x38d40b0();
   input += synapse0x38d4200();
   input += synapse0x38d3b40();
   input += synapse0x38d3b80();
   input += synapse0x38d5350();
   input += synapse0x38d5390();
   input += synapse0x38d53d0();
   input += synapse0x38d5410();
   input += synapse0x38d5450();
   return input;
}

double NNfunction_ng_chi02::neuron0x38d39b0() {
   double input = input0x38d39b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38d5490() {
   double input = 2.1058;
   input += synapse0x38d57d0();
   input += synapse0x38d5810();
   input += synapse0x38d5850();
   input += synapse0x38d5890();
   input += synapse0x38d58d0();
   input += synapse0x38d5910();
   input += synapse0x38d5950();
   input += synapse0x38d5990();
   input += synapse0x38d59d0();
   input += synapse0x3696c00();
   input += synapse0x3696c40();
   input += synapse0x3696c80();
   input += synapse0x3696cc0();
   input += synapse0x3696d00();
   input += synapse0x3696d40();
   input += synapse0x3696d80();
   input += synapse0x38d5620();
   input += synapse0x38d5660();
   input += synapse0x3696ed0();
   input += synapse0x3696f10();
   input += synapse0x3696f50();
   input += synapse0x3696f90();
   input += synapse0x3696fd0();
   input += synapse0x38d6220();
   return input;
}

double NNfunction_ng_chi02::neuron0x38d5490() {
   double input = input0x38d5490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38d6260() {
   double input = -1.58928;
   input += synapse0x38d65a0();
   input += synapse0x38d65e0();
   input += synapse0x38d6620();
   input += synapse0x38d6660();
   input += synapse0x38d66a0();
   input += synapse0x38d66e0();
   input += synapse0x38d6720();
   input += synapse0x38d6760();
   input += synapse0x38d67a0();
   input += synapse0x38d67e0();
   input += synapse0x38d6820();
   input += synapse0x38d6860();
   input += synapse0x38d68a0();
   input += synapse0x38d68e0();
   input += synapse0x38d6920();
   input += synapse0x38d6960();
   input += synapse0x38d63f0();
   input += synapse0x38d6430();
   input += synapse0x38d6ab0();
   input += synapse0x38d6af0();
   input += synapse0x38d6b30();
   input += synapse0x38d6b70();
   input += synapse0x38d6bb0();
   input += synapse0x38d6bf0();
   return input;
}

double NNfunction_ng_chi02::neuron0x38d6260() {
   double input = input0x38d6260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38d6c30() {
   double input = -1.99208;
   input += synapse0x38d6f70();
   input += synapse0x38d6fb0();
   input += synapse0x38d6ff0();
   input += synapse0x38d7030();
   input += synapse0x38d7070();
   input += synapse0x38d70b0();
   input += synapse0x38d70f0();
   input += synapse0x38d7130();
   input += synapse0x38d7170();
   input += synapse0x38d71b0();
   input += synapse0x38d71f0();
   input += synapse0x38d7230();
   input += synapse0x38d7270();
   input += synapse0x38d72b0();
   input += synapse0x38d72f0();
   input += synapse0x38d7330();
   input += synapse0x38d6dc0();
   input += synapse0x38d6e00();
   input += synapse0x38d7480();
   input += synapse0x38d74c0();
   input += synapse0x38d7500();
   input += synapse0x38d7540();
   input += synapse0x38d7580();
   input += synapse0x38d75c0();
   return input;
}

double NNfunction_ng_chi02::neuron0x38d6c30() {
   double input = input0x38d6c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38d7600() {
   double input = -2.59279;
   input += synapse0x38cffc0();
   input += synapse0x38d0000();
   input += synapse0x38d0040();
   input += synapse0x38d0080();
   input += synapse0x38d7b50();
   input += synapse0x38d7b90();
   input += synapse0x38d7bd0();
   input += synapse0x38d7c10();
   input += synapse0x38d7c50();
   input += synapse0x38d7c90();
   input += synapse0x38d7cd0();
   input += synapse0x38d7d10();
   input += synapse0x38d7d50();
   input += synapse0x38d7d90();
   input += synapse0x38d7dd0();
   input += synapse0x38d7e10();
   input += synapse0x38d7790();
   input += synapse0x38d77d0();
   input += synapse0x38d7f60();
   input += synapse0x38d7fa0();
   input += synapse0x38d7fe0();
   input += synapse0x38d8020();
   input += synapse0x38d8060();
   input += synapse0x38d80a0();
   return input;
}

double NNfunction_ng_chi02::neuron0x38d7600() {
   double input = input0x38d7600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38d80e0() {
   double input = 1.99736;
   input += synapse0x38d8420();
   input += synapse0x38d8460();
   input += synapse0x38d84a0();
   input += synapse0x38d84e0();
   input += synapse0x38d8520();
   input += synapse0x38d8560();
   input += synapse0x38d85a0();
   input += synapse0x38d85e0();
   input += synapse0x38d8620();
   input += synapse0x38d8660();
   input += synapse0x38d86a0();
   input += synapse0x38d86e0();
   input += synapse0x38d8720();
   input += synapse0x38d8760();
   input += synapse0x38d87a0();
   input += synapse0x38d87e0();
   input += synapse0x38d8270();
   input += synapse0x38d82b0();
   input += synapse0x38d8930();
   input += synapse0x38d8970();
   input += synapse0x38d89b0();
   input += synapse0x38d89f0();
   input += synapse0x38d8a30();
   input += synapse0x38d8a70();
   return input;
}

double NNfunction_ng_chi02::neuron0x38d80e0() {
   double input = input0x38d80e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38d8ab0() {
   double input = -0.868558;
   input += synapse0x38d8df0();
   input += synapse0x38d8e30();
   input += synapse0x38d8e70();
   input += synapse0x38d8eb0();
   input += synapse0x38d8ef0();
   input += synapse0x38d8f30();
   input += synapse0x38d8f70();
   input += synapse0x38d8fb0();
   input += synapse0x38d8ff0();
   input += synapse0x38d9030();
   input += synapse0x38d9070();
   input += synapse0x38d90b0();
   input += synapse0x38d90f0();
   input += synapse0x38d9130();
   input += synapse0x38d9170();
   input += synapse0x38d91b0();
   input += synapse0x38d8c40();
   input += synapse0x38d8c80();
   input += synapse0x38d5a10();
   input += synapse0x38d5a50();
   input += synapse0x38d5a90();
   input += synapse0x38d5ad0();
   input += synapse0x38d5b10();
   input += synapse0x38d5b50();
   return input;
}

double NNfunction_ng_chi02::neuron0x38d8ab0() {
   double input = input0x38d8ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38d5b90() {
   double input = 1.40678;
   input += synapse0x38d5ed0();
   input += synapse0x38d5f10();
   input += synapse0x38d5f50();
   input += synapse0x38d5f90();
   input += synapse0x38d5fd0();
   input += synapse0x38d6010();
   input += synapse0x38d6050();
   input += synapse0x38d6090();
   input += synapse0x38d60d0();
   input += synapse0x38d6110();
   input += synapse0x38d6150();
   input += synapse0x38d6190();
   input += synapse0x38d61d0();
   input += synapse0x38da310();
   input += synapse0x38da350();
   input += synapse0x38da390();
   input += synapse0x38d5d20();
   input += synapse0x38d5d60();
   input += synapse0x38da4e0();
   input += synapse0x38da520();
   input += synapse0x38da560();
   input += synapse0x38da5a0();
   input += synapse0x38da5e0();
   input += synapse0x38da620();
   return input;
}

double NNfunction_ng_chi02::neuron0x38d5b90() {
   double input = input0x38d5b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38da660() {
   double input = -0.0545439;
   input += synapse0x38da9a0();
   input += synapse0x38da9e0();
   input += synapse0x38daa20();
   input += synapse0x38daa60();
   input += synapse0x38daaa0();
   input += synapse0x38daae0();
   input += synapse0x38dab20();
   input += synapse0x38dab60();
   input += synapse0x38daba0();
   input += synapse0x38dabe0();
   input += synapse0x38dac20();
   input += synapse0x38dac60();
   input += synapse0x38daca0();
   input += synapse0x38dace0();
   input += synapse0x38dad20();
   input += synapse0x38dad60();
   input += synapse0x38da7f0();
   input += synapse0x38da830();
   input += synapse0x38daeb0();
   input += synapse0x38daef0();
   input += synapse0x38daf30();
   input += synapse0x38daf70();
   input += synapse0x38dafb0();
   input += synapse0x38daff0();
   return input;
}

double NNfunction_ng_chi02::neuron0x38da660() {
   double input = input0x38da660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38db030() {
   double input = 0.618507;
   input += synapse0x38db370();
   input += synapse0x38db3b0();
   input += synapse0x38db3f0();
   input += synapse0x38db430();
   input += synapse0x38db470();
   input += synapse0x38db4b0();
   input += synapse0x38db4f0();
   input += synapse0x38db530();
   input += synapse0x38db570();
   input += synapse0x38db5b0();
   input += synapse0x38db5f0();
   input += synapse0x38db630();
   input += synapse0x38db670();
   input += synapse0x38db6b0();
   input += synapse0x38db6f0();
   input += synapse0x38db730();
   input += synapse0x38db1c0();
   input += synapse0x38db200();
   input += synapse0x38db880();
   input += synapse0x38db8c0();
   input += synapse0x38db900();
   input += synapse0x38db940();
   input += synapse0x38db980();
   input += synapse0x38db9c0();
   return input;
}

double NNfunction_ng_chi02::neuron0x38db030() {
   double input = input0x38db030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38dba00() {
   double input = -1.7776;
   input += synapse0x38dbd40();
   input += synapse0x38dbd80();
   input += synapse0x38dbdc0();
   input += synapse0x38dbe00();
   input += synapse0x38dbe40();
   input += synapse0x38dbe80();
   input += synapse0x38dbec0();
   input += synapse0x38dbf00();
   input += synapse0x38dbf40();
   input += synapse0x38dbf80();
   input += synapse0x38dbfc0();
   input += synapse0x38dc000();
   input += synapse0x38dc040();
   input += synapse0x38dc080();
   input += synapse0x38dc0c0();
   input += synapse0x38dc100();
   input += synapse0x38dbb90();
   input += synapse0x38dbbd0();
   input += synapse0x38dc250();
   input += synapse0x38dc290();
   input += synapse0x38dc2d0();
   input += synapse0x38dc310();
   input += synapse0x38dc350();
   input += synapse0x38dc390();
   return input;
}

double NNfunction_ng_chi02::neuron0x38dba00() {
   double input = input0x38dba00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38dc3d0() {
   double input = -0.123521;
   input += synapse0x38dc710();
   input += synapse0x38cc990();
   input += synapse0x38cc9d0();
   input += synapse0x38cccd0();
   input += synapse0x38ccd10();
   input += synapse0x38cd010();
   input += synapse0x38cd050();
   input += synapse0x38cd350();
   input += synapse0x38cd390();
   input += synapse0x38cd690();
   input += synapse0x38cd6d0();
   input += synapse0x38cd9d0();
   input += synapse0x38cda10();
   input += synapse0x38cdd10();
   input += synapse0x38cdd50();
   input += synapse0x38ce050();
   input += synapse0x38ce090();
   input += synapse0x38ce390();
   input += synapse0x38ce3d0();
   input += synapse0x38ce6d0();
   input += synapse0x38ce710();
   input += synapse0x38cea10();
   input += synapse0x38cea50();
   input += synapse0x38ced50();
   return input;
}

double NNfunction_ng_chi02::neuron0x38dc3d0() {
   double input = input0x38dc3d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38de1e0() {
   double input = 2.67858;
   input += synapse0x38ced90();
   input += synapse0x38cfa50();
   input += synapse0x38cfa90();
   input += synapse0x38dc560();
   input += synapse0x38dc5a0();
   input += synapse0x38cfd90();
   input += synapse0x38cfdd0();
   input += synapse0x268a3f0();
   input += synapse0x268a430();
   input += synapse0x38d0510();
   input += synapse0x38d0550();
   input += synapse0x38d0850();
   input += synapse0x38d0890();
   input += synapse0x38d0b90();
   input += synapse0x38d0bd0();
   input += synapse0x38d0ed0();
   input += synapse0x38d0f10();
   input += synapse0x38d1210();
   input += synapse0x38d1250();
   input += synapse0x38d1550();
   input += synapse0x38d1590();
   input += synapse0x38cf090();
   input += synapse0x38cf0d0();
   input += synapse0x38de480();
   return input;
}

double NNfunction_ng_chi02::neuron0x38de1e0() {
   double input = input0x38de1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38de4c0() {
   double input = -4.31494;
   input += synapse0x38de800();
   input += synapse0x38de840();
   input += synapse0x38de880();
   input += synapse0x38de8c0();
   input += synapse0x38de900();
   input += synapse0x38de940();
   input += synapse0x38de980();
   input += synapse0x38de9c0();
   input += synapse0x38dea00();
   input += synapse0x38dea40();
   input += synapse0x38dea80();
   input += synapse0x38deac0();
   input += synapse0x38deb00();
   input += synapse0x38deb40();
   input += synapse0x38deb80();
   input += synapse0x38debc0();
   input += synapse0x38de650();
   input += synapse0x38de690();
   input += synapse0x38ded10();
   input += synapse0x38ded50();
   input += synapse0x38ded90();
   input += synapse0x38dedd0();
   input += synapse0x38dee10();
   input += synapse0x38dee50();
   return input;
}

double NNfunction_ng_chi02::neuron0x38de4c0() {
   double input = input0x38de4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38dee90() {
   double input = -2.13426;
   input += synapse0x38df1d0();
   input += synapse0x38df210();
   input += synapse0x38df250();
   input += synapse0x38df290();
   input += synapse0x38df2d0();
   input += synapse0x38df310();
   input += synapse0x38df350();
   input += synapse0x38df390();
   input += synapse0x38df3d0();
   input += synapse0x38df410();
   input += synapse0x38df450();
   input += synapse0x38df490();
   input += synapse0x38df4d0();
   input += synapse0x38df510();
   input += synapse0x38df550();
   input += synapse0x38df590();
   input += synapse0x38df020();
   input += synapse0x38df060();
   input += synapse0x38df6e0();
   input += synapse0x38df720();
   input += synapse0x38df760();
   input += synapse0x38df7a0();
   input += synapse0x38df7e0();
   input += synapse0x38df820();
   return input;
}

double NNfunction_ng_chi02::neuron0x38dee90() {
   double input = input0x38dee90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38df860() {
   double input = 0.965046;
   input += synapse0x38dfba0();
   input += synapse0x38dfbe0();
   input += synapse0x38dfc20();
   input += synapse0x38dfc60();
   input += synapse0x38dfca0();
   input += synapse0x38dfce0();
   input += synapse0x38dfd20();
   input += synapse0x38dfd60();
   input += synapse0x38dfda0();
   input += synapse0x38dfde0();
   input += synapse0x38dfe20();
   input += synapse0x38dfe60();
   input += synapse0x38dfea0();
   input += synapse0x38dfee0();
   input += synapse0x38dff20();
   input += synapse0x38dff60();
   input += synapse0x38df9f0();
   input += synapse0x38dfa30();
   input += synapse0x38e00b0();
   input += synapse0x38e00f0();
   input += synapse0x38e0130();
   input += synapse0x38e0170();
   input += synapse0x38e01b0();
   input += synapse0x38e01f0();
   return input;
}

double NNfunction_ng_chi02::neuron0x38df860() {
   double input = input0x38df860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38e0230() {
   double input = -1.94611;
   input += synapse0x38e0570();
   input += synapse0x38e05b0();
   input += synapse0x38e05f0();
   input += synapse0x38e0630();
   input += synapse0x38e0670();
   input += synapse0x38e06b0();
   input += synapse0x38e06f0();
   input += synapse0x38e0730();
   input += synapse0x38e0770();
   input += synapse0x38e07b0();
   input += synapse0x38e07f0();
   input += synapse0x38e0830();
   input += synapse0x38e0870();
   input += synapse0x38e08b0();
   input += synapse0x38e08f0();
   input += synapse0x38e0930();
   input += synapse0x38e03c0();
   input += synapse0x38e0400();
   input += synapse0x38e0a80();
   input += synapse0x38e0ac0();
   input += synapse0x38e0b00();
   input += synapse0x38e0b40();
   input += synapse0x38e0b80();
   input += synapse0x38e0bc0();
   return input;
}

double NNfunction_ng_chi02::neuron0x38e0230() {
   double input = input0x38e0230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38e0c00() {
   double input = 1.64029;
   input += synapse0x38e0f40();
   input += synapse0x38e0f80();
   input += synapse0x38e0fc0();
   input += synapse0x38e1000();
   input += synapse0x38e1040();
   input += synapse0x38e1080();
   input += synapse0x38e10c0();
   input += synapse0x38e1100();
   input += synapse0x38e1140();
   input += synapse0x38d9300();
   input += synapse0x38d9340();
   input += synapse0x38d9380();
   input += synapse0x38d93c0();
   input += synapse0x38d9400();
   input += synapse0x38d9440();
   input += synapse0x38d9480();
   input += synapse0x38e0d90();
   input += synapse0x38e0dd0();
   input += synapse0x38d95d0();
   input += synapse0x38d9610();
   input += synapse0x38d9650();
   input += synapse0x38d9690();
   input += synapse0x38d96d0();
   input += synapse0x38d9710();
   return input;
}

double NNfunction_ng_chi02::neuron0x38e0c00() {
   double input = input0x38e0c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38d9750() {
   double input = 0.979857;
   input += synapse0x38d9a90();
   input += synapse0x38d9ad0();
   input += synapse0x38d9b10();
   input += synapse0x38d9b50();
   input += synapse0x38d9b90();
   input += synapse0x38d9bd0();
   input += synapse0x38d9c10();
   input += synapse0x38d9c50();
   input += synapse0x38d9c90();
   input += synapse0x38d9cd0();
   input += synapse0x38d9d10();
   input += synapse0x38d9d50();
   input += synapse0x38d9d90();
   input += synapse0x38d9dd0();
   input += synapse0x38d9e10();
   input += synapse0x38d9e50();
   input += synapse0x38d98e0();
   input += synapse0x38d9920();
   input += synapse0x38d9fa0();
   input += synapse0x38d9fe0();
   input += synapse0x38da020();
   input += synapse0x38da060();
   input += synapse0x38da0a0();
   input += synapse0x38da0e0();
   return input;
}

double NNfunction_ng_chi02::neuron0x38d9750() {
   double input = input0x38d9750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38da120() {
   double input = -0.241697;
   input += synapse0x38da2b0();
   input += synapse0x38e3340();
   input += synapse0x38e3380();
   input += synapse0x38e33c0();
   input += synapse0x38e3400();
   input += synapse0x38e3440();
   input += synapse0x38e3480();
   input += synapse0x38e34c0();
   input += synapse0x38e3500();
   input += synapse0x38e3540();
   input += synapse0x38e3580();
   input += synapse0x38e35c0();
   input += synapse0x38e3600();
   input += synapse0x38e3640();
   input += synapse0x38e3680();
   input += synapse0x38e36c0();
   input += synapse0x38e3190();
   input += synapse0x38e31d0();
   input += synapse0x38e3810();
   input += synapse0x38e3850();
   input += synapse0x38e3890();
   input += synapse0x38e38d0();
   input += synapse0x38e3910();
   input += synapse0x38e3950();
   return input;
}

double NNfunction_ng_chi02::neuron0x38da120() {
   double input = input0x38da120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38e3990() {
   double input = -2.56304;
   input += synapse0x38e3cd0();
   input += synapse0x38e3d10();
   input += synapse0x38e3d50();
   input += synapse0x38e3d90();
   input += synapse0x38e3dd0();
   input += synapse0x38e3e10();
   input += synapse0x38e3e50();
   input += synapse0x38e3e90();
   input += synapse0x38e3ed0();
   input += synapse0x38e3f10();
   input += synapse0x38e3f50();
   input += synapse0x38e3f90();
   input += synapse0x38e3fd0();
   input += synapse0x38e4010();
   input += synapse0x38e4050();
   input += synapse0x38e4090();
   input += synapse0x38e3b20();
   input += synapse0x38e3b60();
   input += synapse0x38e41e0();
   input += synapse0x38e4220();
   input += synapse0x38e4260();
   input += synapse0x38e42a0();
   input += synapse0x38e42e0();
   input += synapse0x38e4320();
   return input;
}

double NNfunction_ng_chi02::neuron0x38e3990() {
   double input = input0x38e3990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38e4360() {
   double input = -0.975677;
   input += synapse0x38e46a0();
   input += synapse0x38e46e0();
   input += synapse0x38e4720();
   input += synapse0x38e4760();
   input += synapse0x38e47a0();
   input += synapse0x38e47e0();
   input += synapse0x38e4820();
   input += synapse0x38e4860();
   input += synapse0x38e48a0();
   input += synapse0x38e48e0();
   input += synapse0x38e4920();
   input += synapse0x38e4960();
   input += synapse0x38e49a0();
   input += synapse0x38e49e0();
   input += synapse0x38e4a20();
   input += synapse0x38e4a60();
   input += synapse0x38e44f0();
   input += synapse0x38e4530();
   input += synapse0x38e4bb0();
   input += synapse0x38e4bf0();
   input += synapse0x38e4c30();
   input += synapse0x38e4c70();
   input += synapse0x38e4cb0();
   input += synapse0x38e4cf0();
   return input;
}

double NNfunction_ng_chi02::neuron0x38e4360() {
   double input = input0x38e4360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38e4d30() {
   double input = -1.54392;
   input += synapse0x38e5070();
   input += synapse0x38e50b0();
   input += synapse0x38e50f0();
   input += synapse0x38e5130();
   input += synapse0x38e5170();
   input += synapse0x38e51b0();
   input += synapse0x38e51f0();
   input += synapse0x38e5230();
   input += synapse0x38e5270();
   input += synapse0x38e52b0();
   input += synapse0x38e52f0();
   input += synapse0x38e5330();
   input += synapse0x38e5370();
   input += synapse0x38e53b0();
   input += synapse0x38e53f0();
   input += synapse0x38e5430();
   input += synapse0x38e4ec0();
   input += synapse0x38e4f00();
   input += synapse0x38e5580();
   input += synapse0x38e55c0();
   input += synapse0x38e5600();
   input += synapse0x38e5640();
   input += synapse0x38e5680();
   input += synapse0x38e56c0();
   return input;
}

double NNfunction_ng_chi02::neuron0x38e4d30() {
   double input = input0x38e4d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38e5700() {
   double input = -0.168623;
   input += synapse0x38e5a40();
   input += synapse0x38e5a80();
   input += synapse0x38e5ac0();
   input += synapse0x38e5b00();
   input += synapse0x38e5b40();
   input += synapse0x38e5b80();
   input += synapse0x38e5bc0();
   input += synapse0x38e5c00();
   input += synapse0x38e5c40();
   input += synapse0x38e5c80();
   input += synapse0x38e5cc0();
   input += synapse0x38e5d00();
   input += synapse0x38e5d40();
   input += synapse0x38e5d80();
   input += synapse0x38e5dc0();
   input += synapse0x38e5e00();
   input += synapse0x38e5890();
   input += synapse0x38e58d0();
   input += synapse0x38e5f50();
   input += synapse0x38e5f90();
   input += synapse0x38e5fd0();
   input += synapse0x38e6010();
   input += synapse0x38e6050();
   input += synapse0x38e6090();
   return input;
}

double NNfunction_ng_chi02::neuron0x38e5700() {
   double input = input0x38e5700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38e60d0() {
   double input = 0.221554;
   input += synapse0x38e6410();
   input += synapse0x38e6450();
   input += synapse0x38e6490();
   input += synapse0x38e64d0();
   input += synapse0x38e6510();
   input += synapse0x38e6550();
   input += synapse0x38e6590();
   input += synapse0x38e65d0();
   input += synapse0x38e6610();
   input += synapse0x38e6650();
   input += synapse0x38e6690();
   input += synapse0x38e66d0();
   input += synapse0x38e6710();
   input += synapse0x38e6750();
   input += synapse0x38e6790();
   input += synapse0x38e67d0();
   input += synapse0x38e6260();
   input += synapse0x38e62a0();
   input += synapse0x38e6920();
   input += synapse0x38e6960();
   input += synapse0x38e69a0();
   input += synapse0x38e69e0();
   input += synapse0x38e6a20();
   input += synapse0x38e6a60();
   return input;
}

double NNfunction_ng_chi02::neuron0x38e60d0() {
   double input = input0x38e60d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38e6aa0() {
   double input = -0.168458;
   input += synapse0x38e6de0();
   input += synapse0x38e6e20();
   input += synapse0x38e6e60();
   input += synapse0x38e6ea0();
   input += synapse0x38e6ee0();
   input += synapse0x38e6f20();
   input += synapse0x38e6f60();
   input += synapse0x38e6fa0();
   input += synapse0x38e6fe0();
   input += synapse0x38e7020();
   input += synapse0x38e7060();
   input += synapse0x38e70a0();
   input += synapse0x38e70e0();
   input += synapse0x38e7120();
   input += synapse0x38e7160();
   input += synapse0x38e71a0();
   input += synapse0x38e6c30();
   input += synapse0x38e6c70();
   input += synapse0x38e72f0();
   input += synapse0x38e7330();
   input += synapse0x38e7370();
   input += synapse0x38e73b0();
   input += synapse0x38e73f0();
   input += synapse0x38e7430();
   return input;
}

double NNfunction_ng_chi02::neuron0x38e6aa0() {
   double input = input0x38e6aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38e7470() {
   double input = -0.787773;
   input += synapse0x38e77b0();
   input += synapse0x38e77f0();
   input += synapse0x38e7830();
   input += synapse0x38e7870();
   input += synapse0x38e78b0();
   input += synapse0x38e78f0();
   input += synapse0x38e7930();
   input += synapse0x38e7970();
   input += synapse0x38e79b0();
   input += synapse0x38e79f0();
   input += synapse0x38e7a30();
   input += synapse0x38e7a70();
   input += synapse0x38e7ab0();
   input += synapse0x38e7af0();
   input += synapse0x38e7b30();
   input += synapse0x38e7b70();
   input += synapse0x38e7600();
   input += synapse0x38e7640();
   input += synapse0x38e7cc0();
   input += synapse0x38e7d00();
   input += synapse0x38e7d40();
   input += synapse0x38e7d80();
   input += synapse0x38e7dc0();
   input += synapse0x38e7e00();
   return input;
}

double NNfunction_ng_chi02::neuron0x38e7470() {
   double input = input0x38e7470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38e7e40() {
   double input = 1.33944;
   input += synapse0x38e8180();
   input += synapse0x38dc750();
   input += synapse0x38dc790();
   input += synapse0x38dc7d0();
   input += synapse0x38dca20();
   input += synapse0x38dca60();
   input += synapse0x38dcaa0();
   input += synapse0x38dccf0();
   input += synapse0x38dcd30();
   input += synapse0x38dcf80();
   input += synapse0x38dcfc0();
   input += synapse0x38dd000();
   input += synapse0x38dd250();
   input += synapse0x38dd290();
   input += synapse0x38dd4e0();
   input += synapse0x38dd520();
   input += synapse0x38e7fd0();
   input += synapse0x38e8010();
   input += synapse0x38dd670();
   input += synapse0x38ddb80();
   input += synapse0x38ddbc0();
   input += synapse0x38ddc00();
   input += synapse0x38dde50();
   input += synapse0x38dde90();
   return input;
}

double NNfunction_ng_chi02::neuron0x38e7e40() {
   double input = input0x38e7e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38dded0() {
   double input = 0.714142;
   input += synapse0x38dd740();
   input += synapse0x38dd780();
   input += synapse0x38dd7c0();
   input += synapse0x38dd800();
   input += synapse0x38de180();
   input += synapse0x38ea4d0();
   input += synapse0x38ea510();
   input += synapse0x38ea550();
   input += synapse0x38ea590();
   input += synapse0x38ea5d0();
   input += synapse0x38ea610();
   input += synapse0x38ea650();
   input += synapse0x38ea690();
   input += synapse0x38ea6d0();
   input += synapse0x38ea710();
   input += synapse0x38ea750();
   input += synapse0x38de060();
   input += synapse0x38de0a0();
   input += synapse0x38ea8a0();
   input += synapse0x38ea8e0();
   input += synapse0x38ea920();
   input += synapse0x38ea960();
   input += synapse0x38ea9a0();
   input += synapse0x38ea9e0();
   return input;
}

double NNfunction_ng_chi02::neuron0x38dded0() {
   double input = input0x38dded0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38eaa20() {
   double input = 0.0805786;
   input += synapse0x38ead60();
   input += synapse0x38eada0();
   input += synapse0x38eade0();
   input += synapse0x38eae20();
   input += synapse0x38eae60();
   input += synapse0x38eaea0();
   input += synapse0x38eaee0();
   input += synapse0x38eaf20();
   input += synapse0x38eaf60();
   input += synapse0x38eafa0();
   input += synapse0x38eafe0();
   input += synapse0x38eb020();
   input += synapse0x38eb060();
   input += synapse0x38eb0a0();
   input += synapse0x38eb0e0();
   input += synapse0x38eb120();
   input += synapse0x38eabb0();
   input += synapse0x38eabf0();
   input += synapse0x38eb270();
   input += synapse0x38eb2b0();
   input += synapse0x38eb2f0();
   input += synapse0x38eb330();
   input += synapse0x38eb370();
   input += synapse0x38eb3b0();
   return input;
}

double NNfunction_ng_chi02::neuron0x38eaa20() {
   double input = input0x38eaa20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38eb3f0() {
   double input = -0.279885;
   input += synapse0x38eb730();
   input += synapse0x38eb770();
   input += synapse0x38eb7b0();
   input += synapse0x38eb7f0();
   input += synapse0x38eb830();
   input += synapse0x38eb870();
   input += synapse0x38eb8b0();
   input += synapse0x38eb8f0();
   input += synapse0x38eb930();
   input += synapse0x38eb970();
   input += synapse0x38eb9b0();
   input += synapse0x38eb9f0();
   input += synapse0x38eba30();
   input += synapse0x38eba70();
   input += synapse0x38ebab0();
   input += synapse0x38ebaf0();
   input += synapse0x38eb580();
   input += synapse0x38eb5c0();
   input += synapse0x38ebc40();
   input += synapse0x38ebc80();
   input += synapse0x38ebcc0();
   input += synapse0x38ebd00();
   input += synapse0x38ebd40();
   input += synapse0x38ebd80();
   return input;
}

double NNfunction_ng_chi02::neuron0x38eb3f0() {
   double input = input0x38eb3f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38ebdc0() {
   double input = -1.12393;
   input += synapse0x38ec100();
   input += synapse0x38ec140();
   input += synapse0x38ec180();
   input += synapse0x38ec1c0();
   input += synapse0x38ec200();
   input += synapse0x38ec240();
   input += synapse0x38ec280();
   input += synapse0x38ec2c0();
   input += synapse0x38ec300();
   input += synapse0x38ec340();
   input += synapse0x38ec380();
   input += synapse0x38ec3c0();
   input += synapse0x38ec400();
   input += synapse0x38ec440();
   input += synapse0x38ec480();
   input += synapse0x38ec4c0();
   input += synapse0x38ebf50();
   input += synapse0x38ebf90();
   input += synapse0x38ec610();
   input += synapse0x38ec650();
   input += synapse0x38ec690();
   input += synapse0x38ec6d0();
   input += synapse0x38ec710();
   input += synapse0x38ec750();
   return input;
}

double NNfunction_ng_chi02::neuron0x38ebdc0() {
   double input = input0x38ebdc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38ec790() {
   double input = 3.3648;
   input += synapse0x38ecad0();
   input += synapse0x38ecb10();
   input += synapse0x38ecb50();
   input += synapse0x38ecb90();
   input += synapse0x38ecbd0();
   input += synapse0x38ecc10();
   input += synapse0x38ecc50();
   input += synapse0x38ecc90();
   input += synapse0x38eccd0();
   input += synapse0x38ecd10();
   input += synapse0x38ecd50();
   input += synapse0x38ecd90();
   input += synapse0x38ecdd0();
   input += synapse0x38ece10();
   input += synapse0x38ece50();
   input += synapse0x38ece90();
   input += synapse0x38ec920();
   input += synapse0x38ec960();
   input += synapse0x38ecfe0();
   input += synapse0x38ed020();
   input += synapse0x38ed060();
   input += synapse0x38ed0a0();
   input += synapse0x38ed0e0();
   input += synapse0x38ed120();
   return input;
}

double NNfunction_ng_chi02::neuron0x38ec790() {
   double input = input0x38ec790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38ed160() {
   double input = -4.32247;
   input += synapse0x38ed4a0();
   input += synapse0x38ed4e0();
   input += synapse0x38ed520();
   input += synapse0x38ed560();
   input += synapse0x38ed5a0();
   input += synapse0x38ed5e0();
   input += synapse0x38ed620();
   input += synapse0x38ed660();
   input += synapse0x38ed6a0();
   input += synapse0x38ed6e0();
   input += synapse0x38ed720();
   input += synapse0x38ed760();
   input += synapse0x38ed7a0();
   input += synapse0x38ed7e0();
   input += synapse0x38ed820();
   input += synapse0x38ed860();
   input += synapse0x38ed2f0();
   input += synapse0x38ed330();
   input += synapse0x38ed9b0();
   input += synapse0x38ed9f0();
   input += synapse0x38eda30();
   input += synapse0x38eda70();
   input += synapse0x38edab0();
   input += synapse0x38edaf0();
   return input;
}

double NNfunction_ng_chi02::neuron0x38ed160() {
   double input = input0x38ed160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38edb30() {
   double input = 0.826692;
   input += synapse0x38ede70();
   input += synapse0x38edeb0();
   input += synapse0x38edef0();
   input += synapse0x38edf30();
   input += synapse0x38edf70();
   input += synapse0x38edfb0();
   input += synapse0x38edff0();
   input += synapse0x38ee030();
   input += synapse0x38ee070();
   input += synapse0x38ee0b0();
   input += synapse0x38ee0f0();
   input += synapse0x38ee130();
   input += synapse0x38ee170();
   input += synapse0x38ee1b0();
   input += synapse0x38ee1f0();
   input += synapse0x38ee230();
   input += synapse0x38edcc0();
   input += synapse0x38edd00();
   input += synapse0x38ee380();
   input += synapse0x38ee3c0();
   input += synapse0x38ee400();
   input += synapse0x38ee440();
   input += synapse0x38ee480();
   input += synapse0x38ee4c0();
   return input;
}

double NNfunction_ng_chi02::neuron0x38edb30() {
   double input = input0x38edb30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38ee500() {
   double input = 0.535263;
   input += synapse0x38ee840();
   input += synapse0x38ee880();
   input += synapse0x38ee8c0();
   input += synapse0x38ee900();
   input += synapse0x38ee940();
   input += synapse0x38ee980();
   input += synapse0x38ee9c0();
   input += synapse0x38eea00();
   input += synapse0x38eea40();
   input += synapse0x38eea80();
   input += synapse0x38eeac0();
   input += synapse0x38eeb00();
   input += synapse0x38eeb40();
   input += synapse0x38eeb80();
   input += synapse0x38eebc0();
   input += synapse0x38eec00();
   input += synapse0x38ee690();
   input += synapse0x38ee6d0();
   input += synapse0x38eed50();
   input += synapse0x38eed90();
   input += synapse0x38eedd0();
   input += synapse0x38eee10();
   input += synapse0x38eee50();
   input += synapse0x38eee90();
   return input;
}

double NNfunction_ng_chi02::neuron0x38ee500() {
   double input = input0x38ee500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38eeed0() {
   double input = 0.555859;
   input += synapse0x38d7940();
   input += synapse0x38d7980();
   input += synapse0x38d79c0();
   input += synapse0x38d7a00();
   input += synapse0x38d7a40();
   input += synapse0x38d7a80();
   input += synapse0x38d7ac0();
   input += synapse0x38d7b00();
   input += synapse0x38ef620();
   input += synapse0x38ef660();
   input += synapse0x38ef6a0();
   input += synapse0x38ef6e0();
   input += synapse0x38ef720();
   input += synapse0x38ef760();
   input += synapse0x38ef7a0();
   input += synapse0x38ef7e0();
   input += synapse0x38ef060();
   input += synapse0x38ef0a0();
   input += synapse0x38ef930();
   input += synapse0x38ef970();
   input += synapse0x38ef9b0();
   input += synapse0x38ef9f0();
   input += synapse0x38efa30();
   input += synapse0x38efa70();
   return input;
}

double NNfunction_ng_chi02::neuron0x38eeed0() {
   double input = input0x38eeed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38efab0() {
   double input = 0.390191;
   input += synapse0x38efdf0();
   input += synapse0x38efe30();
   input += synapse0x38efe70();
   input += synapse0x38efeb0();
   input += synapse0x38efef0();
   input += synapse0x38eff30();
   input += synapse0x38eff70();
   input += synapse0x38effb0();
   input += synapse0x38efff0();
   input += synapse0x38f0030();
   input += synapse0x38f0070();
   input += synapse0x38f00b0();
   input += synapse0x38f00f0();
   input += synapse0x38f0130();
   input += synapse0x38f0170();
   input += synapse0x38f01b0();
   input += synapse0x38efc40();
   input += synapse0x38efc80();
   input += synapse0x38f0300();
   input += synapse0x38f0340();
   input += synapse0x38f0380();
   input += synapse0x38f03c0();
   input += synapse0x38f0400();
   input += synapse0x38f0440();
   return input;
}

double NNfunction_ng_chi02::neuron0x38efab0() {
   double input = input0x38efab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38f0480() {
   double input = 1.10923;
   input += synapse0x38f07c0();
   input += synapse0x38f0800();
   input += synapse0x38f0840();
   input += synapse0x38f0880();
   input += synapse0x38f08c0();
   input += synapse0x38f0900();
   input += synapse0x38f0940();
   input += synapse0x38f0980();
   input += synapse0x38f09c0();
   input += synapse0x38f0a00();
   input += synapse0x38f0a40();
   input += synapse0x38f0a80();
   input += synapse0x38f0ac0();
   input += synapse0x38f0b00();
   input += synapse0x38f0b40();
   input += synapse0x38f0b80();
   input += synapse0x38f0610();
   input += synapse0x38f0650();
   input += synapse0x38e1180();
   input += synapse0x38e11c0();
   input += synapse0x38e1200();
   input += synapse0x38e1240();
   input += synapse0x38e1280();
   input += synapse0x38e12c0();
   return input;
}

double NNfunction_ng_chi02::neuron0x38f0480() {
   double input = input0x38f0480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38e1300() {
   double input = -1.28696;
   input += synapse0x38e1640();
   input += synapse0x38e1680();
   input += synapse0x38e16c0();
   input += synapse0x38e1700();
   input += synapse0x38e1740();
   input += synapse0x38e1780();
   input += synapse0x38e17c0();
   input += synapse0x38e1800();
   input += synapse0x38e1840();
   input += synapse0x38e1880();
   input += synapse0x38e18c0();
   input += synapse0x38e1900();
   input += synapse0x38e1940();
   input += synapse0x38e1980();
   input += synapse0x38e19c0();
   input += synapse0x38e1a00();
   input += synapse0x38e1490();
   input += synapse0x38e14d0();
   input += synapse0x38e1b50();
   input += synapse0x38e1b90();
   input += synapse0x38e1bd0();
   input += synapse0x38e1c10();
   input += synapse0x38e1c50();
   input += synapse0x38e1c90();
   return input;
}

double NNfunction_ng_chi02::neuron0x38e1300() {
   double input = input0x38e1300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38e1cd0() {
   double input = -0.183772;
   input += synapse0x38e2010();
   input += synapse0x38e2050();
   input += synapse0x38e2090();
   input += synapse0x38e20d0();
   input += synapse0x38e2110();
   input += synapse0x38e2150();
   input += synapse0x38e2190();
   input += synapse0x38e21d0();
   input += synapse0x38e2210();
   input += synapse0x38e2250();
   input += synapse0x38e2290();
   input += synapse0x38e22d0();
   input += synapse0x38e2310();
   input += synapse0x38e2350();
   input += synapse0x38e2390();
   input += synapse0x38e23d0();
   input += synapse0x38e1e60();
   input += synapse0x38e1ea0();
   input += synapse0x38e2520();
   input += synapse0x38e2560();
   input += synapse0x38e25a0();
   input += synapse0x38e25e0();
   input += synapse0x38e2620();
   input += synapse0x38e2660();
   return input;
}

double NNfunction_ng_chi02::neuron0x38e1cd0() {
   double input = input0x38e1cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38e26a0() {
   double input = -1.25377;
   input += synapse0x38e29e0();
   input += synapse0x38e2a20();
   input += synapse0x38e2a60();
   input += synapse0x38e2aa0();
   input += synapse0x38e2ae0();
   input += synapse0x38e2b20();
   input += synapse0x38e2b60();
   input += synapse0x38e2ba0();
   input += synapse0x38e2be0();
   input += synapse0x38e2c20();
   input += synapse0x38e2c60();
   input += synapse0x38e2ca0();
   input += synapse0x38e2ce0();
   input += synapse0x38e2d20();
   input += synapse0x38e2d60();
   input += synapse0x38e2da0();
   input += synapse0x38e2830();
   input += synapse0x38e2870();
   input += synapse0x38e2ef0();
   input += synapse0x38e2f30();
   input += synapse0x38e2f70();
   input += synapse0x38e2fb0();
   input += synapse0x38e2ff0();
   input += synapse0x38e3030();
   return input;
}

double NNfunction_ng_chi02::neuron0x38e26a0() {
   double input = input0x38e26a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38f4ce0() {
   double input = 1.21745;
   input += synapse0x38f4f00();
   input += synapse0x38f4f40();
   input += synapse0x38f4f80();
   input += synapse0x38f4fc0();
   input += synapse0x38f5000();
   input += synapse0x38f5040();
   input += synapse0x38f5080();
   input += synapse0x38f50c0();
   input += synapse0x38f5100();
   input += synapse0x38f5140();
   input += synapse0x38f5180();
   input += synapse0x38f51c0();
   input += synapse0x38f5200();
   input += synapse0x38f5240();
   input += synapse0x38f5280();
   input += synapse0x38f52c0();
   input += synapse0x38e3070();
   input += synapse0x38e30b0();
   input += synapse0x38f5410();
   input += synapse0x38f5450();
   input += synapse0x38f5490();
   input += synapse0x38f54d0();
   input += synapse0x38f5510();
   input += synapse0x38f5550();
   return input;
}

double NNfunction_ng_chi02::neuron0x38f4ce0() {
   double input = input0x38f4ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38f5590() {
   double input = -1.52669;
   input += synapse0x38f58d0();
   input += synapse0x38f5910();
   input += synapse0x38f5950();
   input += synapse0x38f5990();
   input += synapse0x38f59d0();
   input += synapse0x38f5a10();
   input += synapse0x38f5a50();
   input += synapse0x38f5a90();
   input += synapse0x38f5ad0();
   input += synapse0x38f5b10();
   input += synapse0x38f5b50();
   input += synapse0x38f5b90();
   input += synapse0x38f5bd0();
   input += synapse0x38f5c10();
   input += synapse0x38f5c50();
   input += synapse0x38f5c90();
   input += synapse0x38f5720();
   input += synapse0x38f5760();
   input += synapse0x38f5de0();
   input += synapse0x38f5e20();
   input += synapse0x38f5e60();
   input += synapse0x38f5ea0();
   input += synapse0x38f5ee0();
   input += synapse0x38f5f20();
   return input;
}

double NNfunction_ng_chi02::neuron0x38f5590() {
   double input = input0x38f5590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38f5f60() {
   double input = -0.283772;
   input += synapse0x38f62a0();
   input += synapse0x38f62e0();
   input += synapse0x38f6320();
   input += synapse0x38f6360();
   input += synapse0x38f63a0();
   input += synapse0x38f63e0();
   input += synapse0x38f6420();
   input += synapse0x38f6460();
   input += synapse0x38f64a0();
   input += synapse0x38f64e0();
   input += synapse0x38f6520();
   input += synapse0x38f6560();
   input += synapse0x38f65a0();
   input += synapse0x38f65e0();
   input += synapse0x38f6620();
   input += synapse0x38f6660();
   input += synapse0x38f60f0();
   input += synapse0x38f6130();
   input += synapse0x38f67b0();
   input += synapse0x38f67f0();
   input += synapse0x38f6830();
   input += synapse0x38f6870();
   input += synapse0x38f68b0();
   input += synapse0x38f68f0();
   return input;
}

double NNfunction_ng_chi02::neuron0x38f5f60() {
   double input = input0x38f5f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38f6930() {
   double input = 0.364168;
   input += synapse0x38f6c70();
   input += synapse0x38f6cb0();
   input += synapse0x38f6cf0();
   input += synapse0x38f6d30();
   input += synapse0x38f6d70();
   input += synapse0x38f6db0();
   input += synapse0x38f6df0();
   input += synapse0x38f6e30();
   input += synapse0x38f6e70();
   input += synapse0x38f6eb0();
   input += synapse0x38f6ef0();
   input += synapse0x38f6f30();
   input += synapse0x38f6f70();
   input += synapse0x38f6fb0();
   input += synapse0x38f6ff0();
   input += synapse0x38f7030();
   input += synapse0x38f6ac0();
   input += synapse0x38f6b00();
   input += synapse0x38f7180();
   input += synapse0x38f71c0();
   input += synapse0x38f7200();
   input += synapse0x38f7240();
   input += synapse0x38f7280();
   input += synapse0x38f72c0();
   return input;
}

double NNfunction_ng_chi02::neuron0x38f6930() {
   double input = input0x38f6930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38fdb30() {
   double input = -1.58133;
   input += synapse0x36970a0();
   input += synapse0x36970e0();
   input += synapse0x38d3c60();
   input += synapse0x38d3ca0();
   input += synapse0x38d5740();
   input += synapse0x38d5780();
   input += synapse0x38d6510();
   input += synapse0x38d6550();
   input += synapse0x38d6ee0();
   input += synapse0x38d6f20();
   input += synapse0x38d78b0();
   input += synapse0x38d78f0();
   input += synapse0x38d8390();
   input += synapse0x38d83d0();
   input += synapse0x38d8d60();
   input += synapse0x38d8da0();
   input += synapse0x38d5e40();
   input += synapse0x38d5e80();
   input += synapse0x38da910();
   input += synapse0x38da950();
   input += synapse0x38db2e0();
   input += synapse0x38db320();
   input += synapse0x38dbcb0();
   input += synapse0x38dbcf0();
   input += synapse0x38dc680();
   input += synapse0x38dc6c0();
   input += synapse0x38cf710();
   input += synapse0x38cf750();
   input += synapse0x38de770();
   input += synapse0x38de7b0();
   input += synapse0x38df140();
   input += synapse0x38df180();
   input += synapse0x38dfb10();
   input += synapse0x38dfb50();
   input += synapse0x38e04e0();
   input += synapse0x38e0520();
   input += synapse0x38e0eb0();
   input += synapse0x38e0ef0();
   input += synapse0x38d9a00();
   input += synapse0x38d9a40();
   input += synapse0x38e32b0();
   input += synapse0x38e32f0();
   input += synapse0x38e3c40();
   input += synapse0x38e3c80();
   input += synapse0x38e4610();
   input += synapse0x38e4650();
   input += synapse0x38e4fe0();
   input += synapse0x38e5020();
   input += synapse0x38e59b0();
   input += synapse0x38e59f0();
   return input;
}

double NNfunction_ng_chi02::neuron0x38fdb30() {
   double input = input0x38fdb30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38fded0() {
   double input = 0.750069;
   input += synapse0x38e80f0();
   input += synapse0x38e8130();
   input += synapse0x38dd6b0();
   input += synapse0x38dd6f0();
   input += synapse0x38eacd0();
   input += synapse0x38ead10();
   input += synapse0x38eb6a0();
   input += synapse0x38eb6e0();
   input += synapse0x38ec070();
   input += synapse0x38ec0b0();
   input += synapse0x38eca40();
   input += synapse0x38eca80();
   input += synapse0x38ed410();
   input += synapse0x38ed450();
   input += synapse0x38edde0();
   input += synapse0x38ede20();
   input += synapse0x38ee7b0();
   input += synapse0x38ee7f0();
   input += synapse0x38ef180();
   input += synapse0x38ef1c0();
   input += synapse0x38efd60();
   input += synapse0x38efda0();
   input += synapse0x38f0730();
   input += synapse0x38f0770();
   input += synapse0x38e15b0();
   input += synapse0x38e15f0();
   input += synapse0x38e1f80();
   input += synapse0x38e1fc0();
   input += synapse0x38e2950();
   input += synapse0x38e2990();
   input += synapse0x38f4e70();
   input += synapse0x38f4eb0();
   input += synapse0x38f5840();
   input += synapse0x38f5880();
   input += synapse0x38f6210();
   input += synapse0x38f6250();
   input += synapse0x38f6be0();
   input += synapse0x38f6c20();
   input += synapse0x38d1a50();
   input += synapse0x38d1a90();
   input += synapse0x38e6380();
   input += synapse0x38e63c0();
   input += synapse0x38f7300();
   input += synapse0x38f7340();
   input += synapse0x38f7380();
   input += synapse0x38f73c0();
   input += synapse0x38fe270();
   input += synapse0x38fe2b0();
   input += synapse0x38fe2f0();
   input += synapse0x38fe330();
   return input;
}

double NNfunction_ng_chi02::neuron0x38fded0() {
   double input = input0x38fded0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38fe370() {
   double input = 1.44347;
   input += synapse0x38fe6b0();
   input += synapse0x38fe6f0();
   input += synapse0x38fe730();
   input += synapse0x38fe770();
   input += synapse0x38fe7b0();
   input += synapse0x38fe7f0();
   input += synapse0x38fe830();
   input += synapse0x38fe870();
   input += synapse0x38fe8b0();
   input += synapse0x38fe8f0();
   input += synapse0x38fe930();
   input += synapse0x38fe970();
   input += synapse0x38fe9b0();
   input += synapse0x38fe9f0();
   input += synapse0x38fea30();
   input += synapse0x38fea70();
   input += synapse0x38fe500();
   input += synapse0x38fe540();
   input += synapse0x38febc0();
   input += synapse0x38fec00();
   input += synapse0x38fec40();
   input += synapse0x38fec80();
   input += synapse0x38fecc0();
   input += synapse0x38fed00();
   input += synapse0x38fed40();
   input += synapse0x38fed80();
   input += synapse0x38fedc0();
   input += synapse0x38fee00();
   input += synapse0x38fee40();
   input += synapse0x38fee80();
   input += synapse0x38feec0();
   input += synapse0x38fef00();
   input += synapse0x38feab0();
   input += synapse0x38feaf0();
   input += synapse0x38feb30();
   input += synapse0x38feb70();
   input += synapse0x38ff150();
   input += synapse0x38ff190();
   input += synapse0x38ff1d0();
   input += synapse0x38ff210();
   input += synapse0x38ff250();
   input += synapse0x38ff290();
   input += synapse0x38ff2d0();
   input += synapse0x38ff310();
   input += synapse0x38ff350();
   input += synapse0x38ff390();
   input += synapse0x38ff3d0();
   input += synapse0x38ff410();
   input += synapse0x38ff450();
   input += synapse0x38ff490();
   return input;
}

double NNfunction_ng_chi02::neuron0x38fe370() {
   double input = input0x38fe370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x38ff4d0() {
   double input = 0.444899;
   input += synapse0x38ff810();
   input += synapse0x38ff850();
   input += synapse0x38ff890();
   input += synapse0x38ff8d0();
   input += synapse0x38ff910();
   input += synapse0x38ff950();
   input += synapse0x38ff990();
   input += synapse0x38ff9d0();
   input += synapse0x38ffa10();
   input += synapse0x38ffa50();
   input += synapse0x38ffa90();
   input += synapse0x38ffad0();
   input += synapse0x38ffb10();
   input += synapse0x38ffb50();
   input += synapse0x38ffb90();
   input += synapse0x38ffbd0();
   input += synapse0x38ff660();
   input += synapse0x38ff6a0();
   input += synapse0x38ffd20();
   input += synapse0x38ffd60();
   input += synapse0x38ffda0();
   input += synapse0x38ffde0();
   input += synapse0x38ffe20();
   input += synapse0x38ffe60();
   input += synapse0x38ffea0();
   input += synapse0x38ffee0();
   input += synapse0x38fff20();
   input += synapse0x38fff60();
   input += synapse0x38fffa0();
   input += synapse0x38fffe0();
   input += synapse0x3900020();
   input += synapse0x3900060();
   input += synapse0x38ffc10();
   input += synapse0x38ffc50();
   input += synapse0x38ffc90();
   input += synapse0x38ffcd0();
   input += synapse0x39002b0();
   input += synapse0x39002f0();
   input += synapse0x3900330();
   input += synapse0x3900370();
   input += synapse0x39003b0();
   input += synapse0x39003f0();
   input += synapse0x3900430();
   input += synapse0x3900470();
   input += synapse0x39004b0();
   input += synapse0x39004f0();
   input += synapse0x3900530();
   input += synapse0x3900570();
   input += synapse0x39005b0();
   input += synapse0x39005f0();
   return input;
}

double NNfunction_ng_chi02::neuron0x38ff4d0() {
   double input = input0x38ff4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x3900630() {
   double input = 0.497346;
   input += synapse0x3900970();
   input += synapse0x39009b0();
   input += synapse0x39009f0();
   input += synapse0x3900a30();
   input += synapse0x3900a70();
   input += synapse0x3900ab0();
   input += synapse0x3900af0();
   input += synapse0x3900b30();
   input += synapse0x3900b70();
   input += synapse0x3900bb0();
   input += synapse0x3900bf0();
   input += synapse0x3900c30();
   input += synapse0x3900c70();
   input += synapse0x3900cb0();
   input += synapse0x3900cf0();
   input += synapse0x3900d30();
   input += synapse0x39007c0();
   input += synapse0x3900800();
   input += synapse0x3900e80();
   input += synapse0x3900ec0();
   input += synapse0x3900f00();
   input += synapse0x3900f40();
   input += synapse0x3900f80();
   input += synapse0x3900fc0();
   input += synapse0x3901000();
   input += synapse0x3901040();
   input += synapse0x3901080();
   input += synapse0x39010c0();
   input += synapse0x3901100();
   input += synapse0x3901140();
   input += synapse0x3901180();
   input += synapse0x39011c0();
   input += synapse0x3900d70();
   input += synapse0x3900db0();
   input += synapse0x3900df0();
   input += synapse0x3900e30();
   input += synapse0x3901410();
   input += synapse0x3901450();
   input += synapse0x3901490();
   input += synapse0x39014d0();
   input += synapse0x3901510();
   input += synapse0x3901550();
   input += synapse0x3901590();
   input += synapse0x39015d0();
   input += synapse0x3901610();
   input += synapse0x3901650();
   input += synapse0x3901690();
   input += synapse0x39016d0();
   input += synapse0x3901710();
   input += synapse0x3901750();
   return input;
}

double NNfunction_ng_chi02::neuron0x3900630() {
   double input = input0x3900630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi02::input0x3901790() {
   double input = 4.85983;
   input += synapse0x39019b0();
   input += synapse0x39019f0();
   input += synapse0x3901a30();
   input += synapse0x3901a70();
   input += synapse0x3901ab0();
   return input;
}

double NNfunction_ng_chi02::neuron0x3901790() {
   double input = input0x3901790();
   return (input * 1)+0;
}

double NNfunction_ng_chi02::synapse0x38d1ae0() {
   return (neuron0x38cc800()*-0.0493051);
}

double NNfunction_ng_chi02::synapse0x38d1b20() {
   return (neuron0x38ccab0()*2.17124);
}

double NNfunction_ng_chi02::synapse0x38d1b60() {
   return (neuron0x38ccdf0()*-0.413754);
}

double NNfunction_ng_chi02::synapse0x38d1ba0() {
   return (neuron0x38cd130()*-0.0952673);
}

double NNfunction_ng_chi02::synapse0x38d1be0() {
   return (neuron0x38cd470()*-0.0035777);
}

double NNfunction_ng_chi02::synapse0x38d1c20() {
   return (neuron0x38cd7b0()*0.00547083);
}

double NNfunction_ng_chi02::synapse0x38d1c60() {
   return (neuron0x38cdaf0()*-0.00802608);
}

double NNfunction_ng_chi02::synapse0x38d1ca0() {
   return (neuron0x38cde30()*-0.00438105);
}

double NNfunction_ng_chi02::synapse0x38d1ce0() {
   return (neuron0x38ce170()*-0.00745748);
}

double NNfunction_ng_chi02::synapse0x38d1d20() {
   return (neuron0x38ce4b0()*0.0162115);
}

double NNfunction_ng_chi02::synapse0x38d1d60() {
   return (neuron0x38ce7f0()*0.000789598);
}

double NNfunction_ng_chi02::synapse0x38d1da0() {
   return (neuron0x38ceb30()*-0.619739);
}

double NNfunction_ng_chi02::synapse0x38d1de0() {
   return (neuron0x38cee70()*-0.0608561);
}

double NNfunction_ng_chi02::synapse0x38d1e20() {
   return (neuron0x38cf1b0()*0.0529535);
}

double NNfunction_ng_chi02::synapse0x38d1e60() {
   return (neuron0x38cf4f0()*0.388255);
}

double NNfunction_ng_chi02::synapse0x38d1ea0() {
   return (neuron0x38cf830()*0.00339878);
}

double NNfunction_ng_chi02::synapse0x38d1930() {
   return (neuron0x38cfb70()*0.0151041);
}

double NNfunction_ng_chi02::synapse0x38d1970() {
   return (neuron0x38d00d0()*0.0809089);
}

double NNfunction_ng_chi02::synapse0x3688dc0() {
   return (neuron0x38d02f0()*0.0100412);
}

double NNfunction_ng_chi02::synapse0x3688e00() {
   return (neuron0x38d0630()*0.00795717);
}

double NNfunction_ng_chi02::synapse0x38d1ff0() {
   return (neuron0x38d0970()*-0.0222956);
}

double NNfunction_ng_chi02::synapse0x38d2030() {
   return (neuron0x38d0cb0()*0.0279169);
}

double NNfunction_ng_chi02::synapse0x38d2070() {
   return (neuron0x38d0ff0()*-0.00330157);
}

double NNfunction_ng_chi02::synapse0x38d20b0() {
   return (neuron0x38d1330()*2.44564);
}

double NNfunction_ng_chi02::synapse0x38d2430() {
   return (neuron0x38cc800()*-0.0878307);
}

double NNfunction_ng_chi02::synapse0x38d2470() {
   return (neuron0x38ccab0()*0.378431);
}

double NNfunction_ng_chi02::synapse0x38d24b0() {
   return (neuron0x38ccdf0()*-5.14978);
}

double NNfunction_ng_chi02::synapse0x38d24f0() {
   return (neuron0x38cd130()*0.00477309);
}

double NNfunction_ng_chi02::synapse0x38d2530() {
   return (neuron0x38cd470()*0.118207);
}

double NNfunction_ng_chi02::synapse0x38d2570() {
   return (neuron0x38cd7b0()*-0.021289);
}

double NNfunction_ng_chi02::synapse0x38d25b0() {
   return (neuron0x38cdaf0()*0.00135924);
}

double NNfunction_ng_chi02::synapse0x38d25f0() {
   return (neuron0x38cde30()*0.0326151);
}

double NNfunction_ng_chi02::synapse0x38d2630() {
   return (neuron0x38ce170()*0.0325151);
}

double NNfunction_ng_chi02::synapse0x38d1ee0() {
   return (neuron0x38ce4b0()*0.0415681);
}

double NNfunction_ng_chi02::synapse0x38d1f20() {
   return (neuron0x38ce7f0()*-0.0585361);
}

double NNfunction_ng_chi02::synapse0x38d1f60() {
   return (neuron0x38ceb30()*-0.450594);
}

double NNfunction_ng_chi02::synapse0x38d1fa0() {
   return (neuron0x38cee70()*-0.0947504);
}

double NNfunction_ng_chi02::synapse0x38d2880() {
   return (neuron0x38cf1b0()*0.0223626);
}

double NNfunction_ng_chi02::synapse0x38d28c0() {
   return (neuron0x38cf4f0()*0.12617);
}

double NNfunction_ng_chi02::synapse0x38d2900() {
   return (neuron0x38cf830()*0.045077);
}

double NNfunction_ng_chi02::synapse0x38d2280() {
   return (neuron0x38cfb70()*0.0707807);
}

double NNfunction_ng_chi02::synapse0x38d22c0() {
   return (neuron0x38d00d0()*0.0837737);
}

double NNfunction_ng_chi02::synapse0x38d2a50() {
   return (neuron0x38d02f0()*0.00901035);
}

double NNfunction_ng_chi02::synapse0x38d2a90() {
   return (neuron0x38d0630()*0.0399148);
}

double NNfunction_ng_chi02::synapse0x38d2ad0() {
   return (neuron0x38d0970()*-0.0215141);
}

double NNfunction_ng_chi02::synapse0x38d2b10() {
   return (neuron0x38d0cb0()*-0.006703);
}

double NNfunction_ng_chi02::synapse0x38d2b50() {
   return (neuron0x38d0ff0()*-0.0131952);
}

double NNfunction_ng_chi02::synapse0x38d2b90() {
   return (neuron0x38d1330()*-6.80573);
}

double NNfunction_ng_chi02::synapse0x38d2f10() {
   return (neuron0x38cc800()*0.0484868);
}

double NNfunction_ng_chi02::synapse0x38d2f50() {
   return (neuron0x38ccab0()*-0.264894);
}

double NNfunction_ng_chi02::synapse0x38d2f90() {
   return (neuron0x38ccdf0()*1.49919);
}

double NNfunction_ng_chi02::synapse0x38d2fd0() {
   return (neuron0x38cd130()*0.0815002);
}

double NNfunction_ng_chi02::synapse0x38d3010() {
   return (neuron0x38cd470()*-0.0275301);
}

double NNfunction_ng_chi02::synapse0x38d3050() {
   return (neuron0x38cd7b0()*0.0334015);
}

double NNfunction_ng_chi02::synapse0x38d3090() {
   return (neuron0x38cdaf0()*-0.0852675);
}

double NNfunction_ng_chi02::synapse0x38d30d0() {
   return (neuron0x38cde30()*-0.03533);
}

double NNfunction_ng_chi02::synapse0x38d3110() {
   return (neuron0x38ce170()*-0.0916842);
}

double NNfunction_ng_chi02::synapse0x38d3150() {
   return (neuron0x38ce4b0()*0.0177151);
}

double NNfunction_ng_chi02::synapse0x38d3190() {
   return (neuron0x38ce7f0()*-0.0574789);
}

double NNfunction_ng_chi02::synapse0x38d31d0() {
   return (neuron0x38ceb30()*-0.0797665);
}

double NNfunction_ng_chi02::synapse0x38d3210() {
   return (neuron0x38cee70()*0.0351965);
}

double NNfunction_ng_chi02::synapse0x38d3250() {
   return (neuron0x38cf1b0()*0.00991717);
}

double NNfunction_ng_chi02::synapse0x38d3290() {
   return (neuron0x38cf4f0()*0.195258);
}

double NNfunction_ng_chi02::synapse0x38d32d0() {
   return (neuron0x38cf830()*-0.0627899);
}

double NNfunction_ng_chi02::synapse0x38d2d60() {
   return (neuron0x38cfb70()*0.0160432);
}

double NNfunction_ng_chi02::synapse0x38d2da0() {
   return (neuron0x38d00d0()*-0.0828081);
}

double NNfunction_ng_chi02::synapse0x268b3c0() {
   return (neuron0x38d02f0()*-0.0116171);
}

double NNfunction_ng_chi02::synapse0x36968b0() {
   return (neuron0x38d0630()*0.026249);
}

double NNfunction_ng_chi02::synapse0x36968f0() {
   return (neuron0x38d0970()*-0.0162187);
}

double NNfunction_ng_chi02::synapse0x38d5210() {
   return (neuron0x38d0cb0()*0.0097816);
}

double NNfunction_ng_chi02::synapse0x38d5250() {
   return (neuron0x38d0ff0()*0.00917235);
}

double NNfunction_ng_chi02::synapse0x38cc540() {
   return (neuron0x38d1330()*1.45817);
}

double NNfunction_ng_chi02::synapse0x38cc610() {
   return (neuron0x38cc800()*0.0536651);
}

double NNfunction_ng_chi02::synapse0x3697130() {
   return (neuron0x38ccab0()*-1.77687);
}

double NNfunction_ng_chi02::synapse0x38d2800() {
   return (neuron0x38ccdf0()*-0.630388);
}

double NNfunction_ng_chi02::synapse0x38d2840() {
   return (neuron0x38cd130()*0.142033);
}

double NNfunction_ng_chi02::synapse0x38d3420() {
   return (neuron0x38cd470()*0.13997);
}

double NNfunction_ng_chi02::synapse0x38d3460() {
   return (neuron0x38cd7b0()*0.0526626);
}

double NNfunction_ng_chi02::synapse0x38d34a0() {
   return (neuron0x38cdaf0()*0.0399979);
}

double NNfunction_ng_chi02::synapse0x38d34e0() {
   return (neuron0x38cde30()*0.0199817);
}

double NNfunction_ng_chi02::synapse0x38d3520() {
   return (neuron0x38ce170()*0.00389494);
}

double NNfunction_ng_chi02::synapse0x38d3560() {
   return (neuron0x38ce4b0()*-0.00975231);
}

double NNfunction_ng_chi02::synapse0x38d35a0() {
   return (neuron0x38ce7f0()*-0.0252866);
}

double NNfunction_ng_chi02::synapse0x38d35e0() {
   return (neuron0x38ceb30()*0.00765901);
}

double NNfunction_ng_chi02::synapse0x38d3620() {
   return (neuron0x38cee70()*-0.0993463);
}

double NNfunction_ng_chi02::synapse0x38d3660() {
   return (neuron0x38cf1b0()*0.0574482);
}

double NNfunction_ng_chi02::synapse0x38d36a0() {
   return (neuron0x38cf4f0()*0.0399994);
}

double NNfunction_ng_chi02::synapse0x38d36e0() {
   return (neuron0x38cf830()*0.0425128);
}

double NNfunction_ng_chi02::synapse0x38cc580() {
   return (neuron0x38cfb70()*-0.0071361);
}

double NNfunction_ng_chi02::synapse0x38cc5c0() {
   return (neuron0x38d00d0()*-0.0164561);
}

double NNfunction_ng_chi02::synapse0x38d3830() {
   return (neuron0x38d02f0()*-0.0109543);
}

double NNfunction_ng_chi02::synapse0x38d3870() {
   return (neuron0x38d0630()*-0.00737845);
}

double NNfunction_ng_chi02::synapse0x38d38b0() {
   return (neuron0x38d0970()*0.0638668);
}

double NNfunction_ng_chi02::synapse0x38d38f0() {
   return (neuron0x38d0cb0()*-0.0197142);
}

double NNfunction_ng_chi02::synapse0x38d3930() {
   return (neuron0x38d0ff0()*0.0128502);
}

double NNfunction_ng_chi02::synapse0x38d3970() {
   return (neuron0x38d1330()*2.49996);
}

double NNfunction_ng_chi02::synapse0x38d3cf0() {
   return (neuron0x38cc800()*-0.0466001);
}

double NNfunction_ng_chi02::synapse0x38d3d30() {
   return (neuron0x38ccab0()*0.128992);
}

double NNfunction_ng_chi02::synapse0x38d3d70() {
   return (neuron0x38ccdf0()*-0.509403);
}

double NNfunction_ng_chi02::synapse0x38d3db0() {
   return (neuron0x38cd130()*0.0271785);
}

double NNfunction_ng_chi02::synapse0x38d3df0() {
   return (neuron0x38cd470()*-0.00068533);
}

double NNfunction_ng_chi02::synapse0x38d3e30() {
   return (neuron0x38cd7b0()*0.0114813);
}

double NNfunction_ng_chi02::synapse0x38d3e70() {
   return (neuron0x38cdaf0()*0.01114);
}

double NNfunction_ng_chi02::synapse0x38d3eb0() {
   return (neuron0x38cde30()*0.026284);
}

double NNfunction_ng_chi02::synapse0x38d3ef0() {
   return (neuron0x38ce170()*0.00696614);
}

double NNfunction_ng_chi02::synapse0x38d3f30() {
   return (neuron0x38ce4b0()*0.0187604);
}

double NNfunction_ng_chi02::synapse0x38d3f70() {
   return (neuron0x38ce7f0()*-0.0185754);
}

double NNfunction_ng_chi02::synapse0x38d3fb0() {
   return (neuron0x38ceb30()*0.214938);
}

double NNfunction_ng_chi02::synapse0x38d3ff0() {
   return (neuron0x38cee70()*-0.00903526);
}

double NNfunction_ng_chi02::synapse0x38d4030() {
   return (neuron0x38cf1b0()*0.0380735);
}

double NNfunction_ng_chi02::synapse0x38d4070() {
   return (neuron0x38cf4f0()*0.00158362);
}

double NNfunction_ng_chi02::synapse0x38d40b0() {
   return (neuron0x38cf830()*0.0342521);
}

double NNfunction_ng_chi02::synapse0x38d4200() {
   return (neuron0x38cfb70()*0.0218724);
}

double NNfunction_ng_chi02::synapse0x38d3b40() {
   return (neuron0x38d00d0()*0.0266168);
}

double NNfunction_ng_chi02::synapse0x38d3b80() {
   return (neuron0x38d02f0()*0.0260009);
}

double NNfunction_ng_chi02::synapse0x38d5350() {
   return (neuron0x38d0630()*-0.0185189);
}

double NNfunction_ng_chi02::synapse0x38d5390() {
   return (neuron0x38d0970()*-0.025712);
}

double NNfunction_ng_chi02::synapse0x38d53d0() {
   return (neuron0x38d0cb0()*0.000856572);
}

double NNfunction_ng_chi02::synapse0x38d5410() {
   return (neuron0x38d0ff0()*0.0144953);
}

double NNfunction_ng_chi02::synapse0x38d5450() {
   return (neuron0x38d1330()*-4.10061);
}

double NNfunction_ng_chi02::synapse0x38d57d0() {
   return (neuron0x38cc800()*-0.00627071);
}

double NNfunction_ng_chi02::synapse0x38d5810() {
   return (neuron0x38ccab0()*-0.0138188);
}

double NNfunction_ng_chi02::synapse0x38d5850() {
   return (neuron0x38ccdf0()*-0.0849962);
}

double NNfunction_ng_chi02::synapse0x38d5890() {
   return (neuron0x38cd130()*2.13343);
}

double NNfunction_ng_chi02::synapse0x38d58d0() {
   return (neuron0x38cd470()*0.0131401);
}

double NNfunction_ng_chi02::synapse0x38d5910() {
   return (neuron0x38cd7b0()*0.0164742);
}

double NNfunction_ng_chi02::synapse0x38d5950() {
   return (neuron0x38cdaf0()*-0.00090127);
}

double NNfunction_ng_chi02::synapse0x38d5990() {
   return (neuron0x38cde30()*0.0139009);
}

double NNfunction_ng_chi02::synapse0x38d59d0() {
   return (neuron0x38ce170()*0.0307041);
}

double NNfunction_ng_chi02::synapse0x3696c00() {
   return (neuron0x38ce4b0()*0.0234883);
}

double NNfunction_ng_chi02::synapse0x3696c40() {
   return (neuron0x38ce7f0()*0.020867);
}

double NNfunction_ng_chi02::synapse0x3696c80() {
   return (neuron0x38ceb30()*0.476796);
}

double NNfunction_ng_chi02::synapse0x3696cc0() {
   return (neuron0x38cee70()*0.352106);
}

double NNfunction_ng_chi02::synapse0x3696d00() {
   return (neuron0x38cf1b0()*0.0593815);
}

double NNfunction_ng_chi02::synapse0x3696d40() {
   return (neuron0x38cf4f0()*-0.138271);
}

double NNfunction_ng_chi02::synapse0x3696d80() {
   return (neuron0x38cf830()*-0.0165434);
}

double NNfunction_ng_chi02::synapse0x38d5620() {
   return (neuron0x38cfb70()*0.0197307);
}

double NNfunction_ng_chi02::synapse0x38d5660() {
   return (neuron0x38d00d0()*-0.0266057);
}

double NNfunction_ng_chi02::synapse0x3696ed0() {
   return (neuron0x38d02f0()*-0.036692);
}

double NNfunction_ng_chi02::synapse0x3696f10() {
   return (neuron0x38d0630()*0.0354266);
}

double NNfunction_ng_chi02::synapse0x3696f50() {
   return (neuron0x38d0970()*-0.0224183);
}

double NNfunction_ng_chi02::synapse0x3696f90() {
   return (neuron0x38d0cb0()*-0.0124773);
}

double NNfunction_ng_chi02::synapse0x3696fd0() {
   return (neuron0x38d0ff0()*-0.000203596);
}

double NNfunction_ng_chi02::synapse0x38d6220() {
   return (neuron0x38d1330()*-0.0667619);
}

double NNfunction_ng_chi02::synapse0x38d65a0() {
   return (neuron0x38cc800()*0.112483);
}

double NNfunction_ng_chi02::synapse0x38d65e0() {
   return (neuron0x38ccab0()*3.1841);
}

double NNfunction_ng_chi02::synapse0x38d6620() {
   return (neuron0x38ccdf0()*-0.583927);
}

double NNfunction_ng_chi02::synapse0x38d6660() {
   return (neuron0x38cd130()*-0.0479237);
}

double NNfunction_ng_chi02::synapse0x38d66a0() {
   return (neuron0x38cd470()*0.00917347);
}

double NNfunction_ng_chi02::synapse0x38d66e0() {
   return (neuron0x38cd7b0()*0.0283644);
}

double NNfunction_ng_chi02::synapse0x38d6720() {
   return (neuron0x38cdaf0()*0.0381973);
}

double NNfunction_ng_chi02::synapse0x38d6760() {
   return (neuron0x38cde30()*0.0424082);
}

double NNfunction_ng_chi02::synapse0x38d67a0() {
   return (neuron0x38ce170()*-0.00493475);
}

double NNfunction_ng_chi02::synapse0x38d67e0() {
   return (neuron0x38ce4b0()*-0.0755287);
}

double NNfunction_ng_chi02::synapse0x38d6820() {
   return (neuron0x38ce7f0()*-0.0402217);
}

double NNfunction_ng_chi02::synapse0x38d6860() {
   return (neuron0x38ceb30()*-0.235365);
}

double NNfunction_ng_chi02::synapse0x38d68a0() {
   return (neuron0x38cee70()*-0.0561475);
}

double NNfunction_ng_chi02::synapse0x38d68e0() {
   return (neuron0x38cf1b0()*-0.0595794);
}

double NNfunction_ng_chi02::synapse0x38d6920() {
   return (neuron0x38cf4f0()*0.300655);
}

double NNfunction_ng_chi02::synapse0x38d6960() {
   return (neuron0x38cf830()*-0.0112596);
}

double NNfunction_ng_chi02::synapse0x38d63f0() {
   return (neuron0x38cfb70()*-0.0184498);
}

double NNfunction_ng_chi02::synapse0x38d6430() {
   return (neuron0x38d00d0()*0.0107847);
}

double NNfunction_ng_chi02::synapse0x38d6ab0() {
   return (neuron0x38d02f0()*-0.0168136);
}

double NNfunction_ng_chi02::synapse0x38d6af0() {
   return (neuron0x38d0630()*0.0190827);
}

double NNfunction_ng_chi02::synapse0x38d6b30() {
   return (neuron0x38d0970()*0.0692182);
}

double NNfunction_ng_chi02::synapse0x38d6b70() {
   return (neuron0x38d0cb0()*0.0149534);
}

double NNfunction_ng_chi02::synapse0x38d6bb0() {
   return (neuron0x38d0ff0()*-0.0322463);
}

double NNfunction_ng_chi02::synapse0x38d6bf0() {
   return (neuron0x38d1330()*-2.74438);
}

double NNfunction_ng_chi02::synapse0x38d6f70() {
   return (neuron0x38cc800()*0.00538743);
}

double NNfunction_ng_chi02::synapse0x38d6fb0() {
   return (neuron0x38ccab0()*-0.0302432);
}

double NNfunction_ng_chi02::synapse0x38d6ff0() {
   return (neuron0x38ccdf0()*-0.0947582);
}

double NNfunction_ng_chi02::synapse0x38d7030() {
   return (neuron0x38cd130()*1.27521);
}

double NNfunction_ng_chi02::synapse0x38d7070() {
   return (neuron0x38cd470()*-0.0327956);
}

double NNfunction_ng_chi02::synapse0x38d70b0() {
   return (neuron0x38cd7b0()*0.0345307);
}

double NNfunction_ng_chi02::synapse0x38d70f0() {
   return (neuron0x38cdaf0()*-0.0258343);
}

double NNfunction_ng_chi02::synapse0x38d7130() {
   return (neuron0x38cde30()*0.0187915);
}

double NNfunction_ng_chi02::synapse0x38d7170() {
   return (neuron0x38ce170()*0.0215368);
}

double NNfunction_ng_chi02::synapse0x38d71b0() {
   return (neuron0x38ce4b0()*-0.0325272);
}

double NNfunction_ng_chi02::synapse0x38d71f0() {
   return (neuron0x38ce7f0()*-0.0381055);
}

double NNfunction_ng_chi02::synapse0x38d7230() {
   return (neuron0x38ceb30()*-2.86105);
}

double NNfunction_ng_chi02::synapse0x38d7270() {
   return (neuron0x38cee70()*0.400662);
}

double NNfunction_ng_chi02::synapse0x38d72b0() {
   return (neuron0x38cf1b0()*0.0386971);
}

double NNfunction_ng_chi02::synapse0x38d72f0() {
   return (neuron0x38cf4f0()*0.187975);
}

double NNfunction_ng_chi02::synapse0x38d7330() {
   return (neuron0x38cf830()*0.0146876);
}

double NNfunction_ng_chi02::synapse0x38d6dc0() {
   return (neuron0x38cfb70()*-0.024261);
}

double NNfunction_ng_chi02::synapse0x38d6e00() {
   return (neuron0x38d00d0()*0.0955099);
}

double NNfunction_ng_chi02::synapse0x38d7480() {
   return (neuron0x38d02f0()*0.00482524);
}

double NNfunction_ng_chi02::synapse0x38d74c0() {
   return (neuron0x38d0630()*-0.0119093);
}

double NNfunction_ng_chi02::synapse0x38d7500() {
   return (neuron0x38d0970()*0.0129294);
}

double NNfunction_ng_chi02::synapse0x38d7540() {
   return (neuron0x38d0cb0()*-0.0106846);
}

double NNfunction_ng_chi02::synapse0x38d7580() {
   return (neuron0x38d0ff0()*-0.0020341);
}

double NNfunction_ng_chi02::synapse0x38d75c0() {
   return (neuron0x38d1330()*-0.0973747);
}

double NNfunction_ng_chi02::synapse0x38cffc0() {
   return (neuron0x38cc800()*0.0597192);
}

double NNfunction_ng_chi02::synapse0x38d0000() {
   return (neuron0x38ccab0()*0.103819);
}

double NNfunction_ng_chi02::synapse0x38d0040() {
   return (neuron0x38ccdf0()*-2.87384);
}

double NNfunction_ng_chi02::synapse0x38d0080() {
   return (neuron0x38cd130()*-0.0300055);
}

double NNfunction_ng_chi02::synapse0x38d7b50() {
   return (neuron0x38cd470()*-0.0417545);
}

double NNfunction_ng_chi02::synapse0x38d7b90() {
   return (neuron0x38cd7b0()*0.0296523);
}

double NNfunction_ng_chi02::synapse0x38d7bd0() {
   return (neuron0x38cdaf0()*0.00360146);
}

double NNfunction_ng_chi02::synapse0x38d7c10() {
   return (neuron0x38cde30()*-0.00161966);
}

double NNfunction_ng_chi02::synapse0x38d7c50() {
   return (neuron0x38ce170()*-0.00270789);
}

double NNfunction_ng_chi02::synapse0x38d7c90() {
   return (neuron0x38ce4b0()*0.0396531);
}

double NNfunction_ng_chi02::synapse0x38d7cd0() {
   return (neuron0x38ce7f0()*0.0163319);
}

double NNfunction_ng_chi02::synapse0x38d7d10() {
   return (neuron0x38ceb30()*-0.778938);
}

double NNfunction_ng_chi02::synapse0x38d7d50() {
   return (neuron0x38cee70()*0.0317474);
}

double NNfunction_ng_chi02::synapse0x38d7d90() {
   return (neuron0x38cf1b0()*-0.0268069);
}

double NNfunction_ng_chi02::synapse0x38d7dd0() {
   return (neuron0x38cf4f0()*0.143926);
}

double NNfunction_ng_chi02::synapse0x38d7e10() {
   return (neuron0x38cf830()*-0.0166406);
}

double NNfunction_ng_chi02::synapse0x38d7790() {
   return (neuron0x38cfb70()*-0.0365088);
}

double NNfunction_ng_chi02::synapse0x38d77d0() {
   return (neuron0x38d00d0()*0.00095289);
}

double NNfunction_ng_chi02::synapse0x38d7f60() {
   return (neuron0x38d02f0()*-0.00508246);
}

double NNfunction_ng_chi02::synapse0x38d7fa0() {
   return (neuron0x38d0630()*0.0135315);
}

double NNfunction_ng_chi02::synapse0x38d7fe0() {
   return (neuron0x38d0970()*0.0123353);
}

double NNfunction_ng_chi02::synapse0x38d8020() {
   return (neuron0x38d0cb0()*0.00308981);
}

double NNfunction_ng_chi02::synapse0x38d8060() {
   return (neuron0x38d0ff0()*0.00362966);
}

double NNfunction_ng_chi02::synapse0x38d80a0() {
   return (neuron0x38d1330()*4.63421);
}

double NNfunction_ng_chi02::synapse0x38d8420() {
   return (neuron0x38cc800()*0.033337);
}

double NNfunction_ng_chi02::synapse0x38d8460() {
   return (neuron0x38ccab0()*1.52163);
}

double NNfunction_ng_chi02::synapse0x38d84a0() {
   return (neuron0x38ccdf0()*-0.328529);
}

double NNfunction_ng_chi02::synapse0x38d84e0() {
   return (neuron0x38cd130()*-0.0124641);
}

double NNfunction_ng_chi02::synapse0x38d8520() {
   return (neuron0x38cd470()*-0.000737394);
}

double NNfunction_ng_chi02::synapse0x38d8560() {
   return (neuron0x38cd7b0()*0.0165797);
}

double NNfunction_ng_chi02::synapse0x38d85a0() {
   return (neuron0x38cdaf0()*-0.00887443);
}

double NNfunction_ng_chi02::synapse0x38d85e0() {
   return (neuron0x38cde30()*0.0316658);
}

double NNfunction_ng_chi02::synapse0x38d8620() {
   return (neuron0x38ce170()*0.00840644);
}

double NNfunction_ng_chi02::synapse0x38d8660() {
   return (neuron0x38ce4b0()*-0.0126312);
}

double NNfunction_ng_chi02::synapse0x38d86a0() {
   return (neuron0x38ce7f0()*0.00855559);
}

double NNfunction_ng_chi02::synapse0x38d86e0() {
   return (neuron0x38ceb30()*-0.0215545);
}

double NNfunction_ng_chi02::synapse0x38d8720() {
   return (neuron0x38cee70()*0.0781629);
}

double NNfunction_ng_chi02::synapse0x38d8760() {
   return (neuron0x38cf1b0()*-0.0169722);
}

double NNfunction_ng_chi02::synapse0x38d87a0() {
   return (neuron0x38cf4f0()*-0.0302677);
}

double NNfunction_ng_chi02::synapse0x38d87e0() {
   return (neuron0x38cf830()*0.0287575);
}

double NNfunction_ng_chi02::synapse0x38d8270() {
   return (neuron0x38cfb70()*-0.00083342);
}

double NNfunction_ng_chi02::synapse0x38d82b0() {
   return (neuron0x38d00d0()*0.00986254);
}

double NNfunction_ng_chi02::synapse0x38d8930() {
   return (neuron0x38d02f0()*-0.0265872);
}

double NNfunction_ng_chi02::synapse0x38d8970() {
   return (neuron0x38d0630()*-0.000646491);
}

double NNfunction_ng_chi02::synapse0x38d89b0() {
   return (neuron0x38d0970()*-0.0606902);
}

double NNfunction_ng_chi02::synapse0x38d89f0() {
   return (neuron0x38d0cb0()*-0.00317536);
}

double NNfunction_ng_chi02::synapse0x38d8a30() {
   return (neuron0x38d0ff0()*0.0197786);
}

double NNfunction_ng_chi02::synapse0x38d8a70() {
   return (neuron0x38d1330()*0.00320121);
}

double NNfunction_ng_chi02::synapse0x38d8df0() {
   return (neuron0x38cc800()*-0.0059163);
}

double NNfunction_ng_chi02::synapse0x38d8e30() {
   return (neuron0x38ccab0()*-2.64791);
}

double NNfunction_ng_chi02::synapse0x38d8e70() {
   return (neuron0x38ccdf0()*1.51246);
}

double NNfunction_ng_chi02::synapse0x38d8eb0() {
   return (neuron0x38cd130()*-0.107714);
}

double NNfunction_ng_chi02::synapse0x38d8ef0() {
   return (neuron0x38cd470()*-0.0319939);
}

double NNfunction_ng_chi02::synapse0x38d8f30() {
   return (neuron0x38cd7b0()*-0.00872272);
}

double NNfunction_ng_chi02::synapse0x38d8f70() {
   return (neuron0x38cdaf0()*-0.0447908);
}

double NNfunction_ng_chi02::synapse0x38d8fb0() {
   return (neuron0x38cde30()*0.000834975);
}

double NNfunction_ng_chi02::synapse0x38d8ff0() {
   return (neuron0x38ce170()*-0.0211124);
}

double NNfunction_ng_chi02::synapse0x38d9030() {
   return (neuron0x38ce4b0()*-0.103261);
}

double NNfunction_ng_chi02::synapse0x38d9070() {
   return (neuron0x38ce7f0()*-0.020377);
}

double NNfunction_ng_chi02::synapse0x38d90b0() {
   return (neuron0x38ceb30()*0.315958);
}

double NNfunction_ng_chi02::synapse0x38d90f0() {
   return (neuron0x38cee70()*0.0723291);
}

double NNfunction_ng_chi02::synapse0x38d9130() {
   return (neuron0x38cf1b0()*-0.0208251);
}

double NNfunction_ng_chi02::synapse0x38d9170() {
   return (neuron0x38cf4f0()*-0.0931758);
}

double NNfunction_ng_chi02::synapse0x38d91b0() {
   return (neuron0x38cf830()*-0.0385113);
}

double NNfunction_ng_chi02::synapse0x38d8c40() {
   return (neuron0x38cfb70()*-0.00410666);
}

double NNfunction_ng_chi02::synapse0x38d8c80() {
   return (neuron0x38d00d0()*0.0103928);
}

double NNfunction_ng_chi02::synapse0x38d5a10() {
   return (neuron0x38d02f0()*0.00505616);
}

double NNfunction_ng_chi02::synapse0x38d5a50() {
   return (neuron0x38d0630()*0.019529);
}

double NNfunction_ng_chi02::synapse0x38d5a90() {
   return (neuron0x38d0970()*-0.0162093);
}

double NNfunction_ng_chi02::synapse0x38d5ad0() {
   return (neuron0x38d0cb0()*-0.00846647);
}

double NNfunction_ng_chi02::synapse0x38d5b10() {
   return (neuron0x38d0ff0()*0.0045572);
}

double NNfunction_ng_chi02::synapse0x38d5b50() {
   return (neuron0x38d1330()*0.138962);
}

double NNfunction_ng_chi02::synapse0x38d5ed0() {
   return (neuron0x38cc800()*0.0511579);
}

double NNfunction_ng_chi02::synapse0x38d5f10() {
   return (neuron0x38ccab0()*4.84675);
}

double NNfunction_ng_chi02::synapse0x38d5f50() {
   return (neuron0x38ccdf0()*0.487906);
}

double NNfunction_ng_chi02::synapse0x38d5f90() {
   return (neuron0x38cd130()*0.0118581);
}

double NNfunction_ng_chi02::synapse0x38d5fd0() {
   return (neuron0x38cd470()*0.0226156);
}

double NNfunction_ng_chi02::synapse0x38d6010() {
   return (neuron0x38cd7b0()*0.0229232);
}

double NNfunction_ng_chi02::synapse0x38d6050() {
   return (neuron0x38cdaf0()*-0.0248193);
}

double NNfunction_ng_chi02::synapse0x38d6090() {
   return (neuron0x38cde30()*-0.0119074);
}

double NNfunction_ng_chi02::synapse0x38d60d0() {
   return (neuron0x38ce170()*-0.00149366);
}

double NNfunction_ng_chi02::synapse0x38d6110() {
   return (neuron0x38ce4b0()*0.0670268);
}

double NNfunction_ng_chi02::synapse0x38d6150() {
   return (neuron0x38ce7f0()*-0.022455);
}

double NNfunction_ng_chi02::synapse0x38d6190() {
   return (neuron0x38ceb30()*0.243081);
}

double NNfunction_ng_chi02::synapse0x38d61d0() {
   return (neuron0x38cee70()*0.0404917);
}

double NNfunction_ng_chi02::synapse0x38da310() {
   return (neuron0x38cf1b0()*0.0226627);
}

double NNfunction_ng_chi02::synapse0x38da350() {
   return (neuron0x38cf4f0()*-0.13708);
}

double NNfunction_ng_chi02::synapse0x38da390() {
   return (neuron0x38cf830()*-0.00159997);
}

double NNfunction_ng_chi02::synapse0x38d5d20() {
   return (neuron0x38cfb70()*0.00475128);
}

double NNfunction_ng_chi02::synapse0x38d5d60() {
   return (neuron0x38d00d0()*-0.0631271);
}

double NNfunction_ng_chi02::synapse0x38da4e0() {
   return (neuron0x38d02f0()*-0.0422184);
}

double NNfunction_ng_chi02::synapse0x38da520() {
   return (neuron0x38d0630()*-0.011565);
}

double NNfunction_ng_chi02::synapse0x38da560() {
   return (neuron0x38d0970()*0.000250434);
}

double NNfunction_ng_chi02::synapse0x38da5a0() {
   return (neuron0x38d0cb0()*0.0865719);
}

double NNfunction_ng_chi02::synapse0x38da5e0() {
   return (neuron0x38d0ff0()*0.0101561);
}

double NNfunction_ng_chi02::synapse0x38da620() {
   return (neuron0x38d1330()*8.66627);
}

double NNfunction_ng_chi02::synapse0x38da9a0() {
   return (neuron0x38cc800()*0.104207);
}

double NNfunction_ng_chi02::synapse0x38da9e0() {
   return (neuron0x38ccab0()*-0.346774);
}

double NNfunction_ng_chi02::synapse0x38daa20() {
   return (neuron0x38ccdf0()*0.0666901);
}

double NNfunction_ng_chi02::synapse0x38daa60() {
   return (neuron0x38cd130()*-0.247681);
}

double NNfunction_ng_chi02::synapse0x38daaa0() {
   return (neuron0x38cd470()*-0.0587835);
}

double NNfunction_ng_chi02::synapse0x38daae0() {
   return (neuron0x38cd7b0()*-0.00440696);
}

double NNfunction_ng_chi02::synapse0x38dab20() {
   return (neuron0x38cdaf0()*-0.0805285);
}

double NNfunction_ng_chi02::synapse0x38dab60() {
   return (neuron0x38cde30()*-0.0599948);
}

double NNfunction_ng_chi02::synapse0x38daba0() {
   return (neuron0x38ce170()*0.0532502);
}

double NNfunction_ng_chi02::synapse0x38dabe0() {
   return (neuron0x38ce4b0()*-0.0071765);
}

double NNfunction_ng_chi02::synapse0x38dac20() {
   return (neuron0x38ce7f0()*-0.048517);
}

double NNfunction_ng_chi02::synapse0x38dac60() {
   return (neuron0x38ceb30()*0.243766);
}

double NNfunction_ng_chi02::synapse0x38daca0() {
   return (neuron0x38cee70()*0.11602);
}

double NNfunction_ng_chi02::synapse0x38dace0() {
   return (neuron0x38cf1b0()*0.00995702);
}

double NNfunction_ng_chi02::synapse0x38dad20() {
   return (neuron0x38cf4f0()*0.28481);
}

double NNfunction_ng_chi02::synapse0x38dad60() {
   return (neuron0x38cf830()*0.0485563);
}

double NNfunction_ng_chi02::synapse0x38da7f0() {
   return (neuron0x38cfb70()*0.0227803);
}

double NNfunction_ng_chi02::synapse0x38da830() {
   return (neuron0x38d00d0()*0.0245283);
}

double NNfunction_ng_chi02::synapse0x38daeb0() {
   return (neuron0x38d02f0()*0.0335401);
}

double NNfunction_ng_chi02::synapse0x38daef0() {
   return (neuron0x38d0630()*-0.0502033);
}

double NNfunction_ng_chi02::synapse0x38daf30() {
   return (neuron0x38d0970()*0.0552675);
}

double NNfunction_ng_chi02::synapse0x38daf70() {
   return (neuron0x38d0cb0()*-0.00666094);
}

double NNfunction_ng_chi02::synapse0x38dafb0() {
   return (neuron0x38d0ff0()*-0.102589);
}

double NNfunction_ng_chi02::synapse0x38daff0() {
   return (neuron0x38d1330()*2.43416);
}

double NNfunction_ng_chi02::synapse0x38db370() {
   return (neuron0x38cc800()*-0.0299552);
}

double NNfunction_ng_chi02::synapse0x38db3b0() {
   return (neuron0x38ccab0()*-0.0690764);
}

double NNfunction_ng_chi02::synapse0x38db3f0() {
   return (neuron0x38ccdf0()*0.0531522);
}

double NNfunction_ng_chi02::synapse0x38db430() {
   return (neuron0x38cd130()*1.77627);
}

double NNfunction_ng_chi02::synapse0x38db470() {
   return (neuron0x38cd470()*0.0693752);
}

double NNfunction_ng_chi02::synapse0x38db4b0() {
   return (neuron0x38cd7b0()*-0.0290861);
}

double NNfunction_ng_chi02::synapse0x38db4f0() {
   return (neuron0x38cdaf0()*0.0361438);
}

double NNfunction_ng_chi02::synapse0x38db530() {
   return (neuron0x38cde30()*-0.0253481);
}

double NNfunction_ng_chi02::synapse0x38db570() {
   return (neuron0x38ce170()*0.0372114);
}

double NNfunction_ng_chi02::synapse0x38db5b0() {
   return (neuron0x38ce4b0()*0.0136911);
}

double NNfunction_ng_chi02::synapse0x38db5f0() {
   return (neuron0x38ce7f0()*0.00775226);
}

double NNfunction_ng_chi02::synapse0x38db630() {
   return (neuron0x38ceb30()*2.62495);
}

double NNfunction_ng_chi02::synapse0x38db670() {
   return (neuron0x38cee70()*-0.48874);
}

double NNfunction_ng_chi02::synapse0x38db6b0() {
   return (neuron0x38cf1b0()*0.0968037);
}

double NNfunction_ng_chi02::synapse0x38db6f0() {
   return (neuron0x38cf4f0()*-0.119672);
}

double NNfunction_ng_chi02::synapse0x38db730() {
   return (neuron0x38cf830()*-0.0232377);
}

double NNfunction_ng_chi02::synapse0x38db1c0() {
   return (neuron0x38cfb70()*0.0251406);
}

double NNfunction_ng_chi02::synapse0x38db200() {
   return (neuron0x38d00d0()*-0.114305);
}

double NNfunction_ng_chi02::synapse0x38db880() {
   return (neuron0x38d02f0()*-0.223273);
}

double NNfunction_ng_chi02::synapse0x38db8c0() {
   return (neuron0x38d0630()*0.101396);
}

double NNfunction_ng_chi02::synapse0x38db900() {
   return (neuron0x38d0970()*-0.0235146);
}

double NNfunction_ng_chi02::synapse0x38db940() {
   return (neuron0x38d0cb0()*-0.0281035);
}

double NNfunction_ng_chi02::synapse0x38db980() {
   return (neuron0x38d0ff0()*0.0262343);
}

double NNfunction_ng_chi02::synapse0x38db9c0() {
   return (neuron0x38d1330()*-0.0884341);
}

double NNfunction_ng_chi02::synapse0x38dbd40() {
   return (neuron0x38cc800()*-0.033824);
}

double NNfunction_ng_chi02::synapse0x38dbd80() {
   return (neuron0x38ccab0()*0.0503918);
}

double NNfunction_ng_chi02::synapse0x38dbdc0() {
   return (neuron0x38ccdf0()*0.220909);
}

double NNfunction_ng_chi02::synapse0x38dbe00() {
   return (neuron0x38cd130()*0.89492);
}

double NNfunction_ng_chi02::synapse0x38dbe40() {
   return (neuron0x38cd470()*0.0622187);
}

double NNfunction_ng_chi02::synapse0x38dbe80() {
   return (neuron0x38cd7b0()*0.0187137);
}

double NNfunction_ng_chi02::synapse0x38dbec0() {
   return (neuron0x38cdaf0()*0.0509808);
}

double NNfunction_ng_chi02::synapse0x38dbf00() {
   return (neuron0x38cde30()*0.0670855);
}

double NNfunction_ng_chi02::synapse0x38dbf40() {
   return (neuron0x38ce170()*0.0258396);
}

double NNfunction_ng_chi02::synapse0x38dbf80() {
   return (neuron0x38ce4b0()*-0.0549132);
}

double NNfunction_ng_chi02::synapse0x38dbfc0() {
   return (neuron0x38ce7f0()*0.124719);
}

double NNfunction_ng_chi02::synapse0x38dc000() {
   return (neuron0x38ceb30()*0.14969);
}

double NNfunction_ng_chi02::synapse0x38dc040() {
   return (neuron0x38cee70()*0.207534);
}

double NNfunction_ng_chi02::synapse0x38dc080() {
   return (neuron0x38cf1b0()*-0.0130293);
}

double NNfunction_ng_chi02::synapse0x38dc0c0() {
   return (neuron0x38cf4f0()*0.0315313);
}

double NNfunction_ng_chi02::synapse0x38dc100() {
   return (neuron0x38cf830()*-0.00219995);
}

double NNfunction_ng_chi02::synapse0x38dbb90() {
   return (neuron0x38cfb70()*-0.0626811);
}

double NNfunction_ng_chi02::synapse0x38dbbd0() {
   return (neuron0x38d00d0()*-0.0974922);
}

double NNfunction_ng_chi02::synapse0x38dc250() {
   return (neuron0x38d02f0()*0.0339996);
}

double NNfunction_ng_chi02::synapse0x38dc290() {
   return (neuron0x38d0630()*-0.0147881);
}

double NNfunction_ng_chi02::synapse0x38dc2d0() {
   return (neuron0x38d0970()*0.00251155);
}

double NNfunction_ng_chi02::synapse0x38dc310() {
   return (neuron0x38d0cb0()*0.0371997);
}

double NNfunction_ng_chi02::synapse0x38dc350() {
   return (neuron0x38d0ff0()*-0.0533123);
}

double NNfunction_ng_chi02::synapse0x38dc390() {
   return (neuron0x38d1330()*-0.805869);
}

double NNfunction_ng_chi02::synapse0x38dc710() {
   return (neuron0x38cc800()*-0.00880041);
}

double NNfunction_ng_chi02::synapse0x38cc990() {
   return (neuron0x38ccab0()*-1.40711);
}

double NNfunction_ng_chi02::synapse0x38cc9d0() {
   return (neuron0x38ccdf0()*0.361591);
}

double NNfunction_ng_chi02::synapse0x38cccd0() {
   return (neuron0x38cd130()*0.0536014);
}

double NNfunction_ng_chi02::synapse0x38ccd10() {
   return (neuron0x38cd470()*-0.0592761);
}

double NNfunction_ng_chi02::synapse0x38cd010() {
   return (neuron0x38cd7b0()*-0.0206274);
}

double NNfunction_ng_chi02::synapse0x38cd050() {
   return (neuron0x38cdaf0()*-0.0316794);
}

double NNfunction_ng_chi02::synapse0x38cd350() {
   return (neuron0x38cde30()*-0.0149131);
}

double NNfunction_ng_chi02::synapse0x38cd390() {
   return (neuron0x38ce170()*0.0017992);
}

double NNfunction_ng_chi02::synapse0x38cd690() {
   return (neuron0x38ce4b0()*-0.0312366);
}

double NNfunction_ng_chi02::synapse0x38cd6d0() {
   return (neuron0x38ce7f0()*0.0053819);
}

double NNfunction_ng_chi02::synapse0x38cd9d0() {
   return (neuron0x38ceb30()*1.0947);
}

double NNfunction_ng_chi02::synapse0x38cda10() {
   return (neuron0x38cee70()*-0.190029);
}

double NNfunction_ng_chi02::synapse0x38cdd10() {
   return (neuron0x38cf1b0()*0.00707665);
}

double NNfunction_ng_chi02::synapse0x38cdd50() {
   return (neuron0x38cf4f0()*-0.203773);
}

double NNfunction_ng_chi02::synapse0x38ce050() {
   return (neuron0x38cf830()*-0.016076);
}

double NNfunction_ng_chi02::synapse0x38ce090() {
   return (neuron0x38cfb70()*-0.0150502);
}

double NNfunction_ng_chi02::synapse0x38ce390() {
   return (neuron0x38d00d0()*-0.0553092);
}

double NNfunction_ng_chi02::synapse0x38ce3d0() {
   return (neuron0x38d02f0()*0.00562998);
}

double NNfunction_ng_chi02::synapse0x38ce6d0() {
   return (neuron0x38d0630()*-0.00785416);
}

double NNfunction_ng_chi02::synapse0x38ce710() {
   return (neuron0x38d0970()*0.00803954);
}

double NNfunction_ng_chi02::synapse0x38cea10() {
   return (neuron0x38d0cb0()*-0.0465819);
}

double NNfunction_ng_chi02::synapse0x38cea50() {
   return (neuron0x38d0ff0()*-0.00730788);
}

double NNfunction_ng_chi02::synapse0x38ced50() {
   return (neuron0x38d1330()*-1.46049);
}

double NNfunction_ng_chi02::synapse0x38ced90() {
   return (neuron0x38cc800()*-0.0325064);
}

double NNfunction_ng_chi02::synapse0x38cfa50() {
   return (neuron0x38ccab0()*-0.0359453);
}

double NNfunction_ng_chi02::synapse0x38cfa90() {
   return (neuron0x38ccdf0()*0.0384376);
}

double NNfunction_ng_chi02::synapse0x38dc560() {
   return (neuron0x38cd130()*0.819073);
}

double NNfunction_ng_chi02::synapse0x38dc5a0() {
   return (neuron0x38cd470()*0.010214);
}

double NNfunction_ng_chi02::synapse0x38cfd90() {
   return (neuron0x38cd7b0()*0.0155375);
}

double NNfunction_ng_chi02::synapse0x38cfdd0() {
   return (neuron0x38cdaf0()*0.0112391);
}

double NNfunction_ng_chi02::synapse0x268a3f0() {
   return (neuron0x38cde30()*-0.0250203);
}

double NNfunction_ng_chi02::synapse0x268a430() {
   return (neuron0x38ce170()*-0.0652895);
}

double NNfunction_ng_chi02::synapse0x38d0510() {
   return (neuron0x38ce4b0()*-0.0158701);
}

double NNfunction_ng_chi02::synapse0x38d0550() {
   return (neuron0x38ce7f0()*-0.0178933);
}

double NNfunction_ng_chi02::synapse0x38d0850() {
   return (neuron0x38ceb30()*2.81582);
}

double NNfunction_ng_chi02::synapse0x38d0890() {
   return (neuron0x38cee70()*-0.378503);
}

double NNfunction_ng_chi02::synapse0x38d0b90() {
   return (neuron0x38cf1b0()*0.0506186);
}

double NNfunction_ng_chi02::synapse0x38d0bd0() {
   return (neuron0x38cf4f0()*-0.045697);
}

double NNfunction_ng_chi02::synapse0x38d0ed0() {
   return (neuron0x38cf830()*-0.0228219);
}

double NNfunction_ng_chi02::synapse0x38d0f10() {
   return (neuron0x38cfb70()*-0.0285262);
}

double NNfunction_ng_chi02::synapse0x38d1210() {
   return (neuron0x38d00d0()*0.0482133);
}

double NNfunction_ng_chi02::synapse0x38d1250() {
   return (neuron0x38d02f0()*-0.0886935);
}

double NNfunction_ng_chi02::synapse0x38d1550() {
   return (neuron0x38d0630()*0.0447819);
}

double NNfunction_ng_chi02::synapse0x38d1590() {
   return (neuron0x38d0970()*-0.0326207);
}

double NNfunction_ng_chi02::synapse0x38cf090() {
   return (neuron0x38d0cb0()*-0.00833201);
}

double NNfunction_ng_chi02::synapse0x38cf0d0() {
   return (neuron0x38d0ff0()*0.0566453);
}

double NNfunction_ng_chi02::synapse0x38de480() {
   return (neuron0x38d1330()*-1.44629);
}

double NNfunction_ng_chi02::synapse0x38de800() {
   return (neuron0x38cc800()*0.0029732);
}

double NNfunction_ng_chi02::synapse0x38de840() {
   return (neuron0x38ccab0()*-0.0589162);
}

double NNfunction_ng_chi02::synapse0x38de880() {
   return (neuron0x38ccdf0()*0.0455632);
}

double NNfunction_ng_chi02::synapse0x38de8c0() {
   return (neuron0x38cd130()*-12.2574);
}

double NNfunction_ng_chi02::synapse0x38de900() {
   return (neuron0x38cd470()*0.0126708);
}

double NNfunction_ng_chi02::synapse0x38de940() {
   return (neuron0x38cd7b0()*0.0946704);
}

double NNfunction_ng_chi02::synapse0x38de980() {
   return (neuron0x38cdaf0()*0.0237275);
}

double NNfunction_ng_chi02::synapse0x38de9c0() {
   return (neuron0x38cde30()*0.0804331);
}

double NNfunction_ng_chi02::synapse0x38dea00() {
   return (neuron0x38ce170()*0.0226755);
}

double NNfunction_ng_chi02::synapse0x38dea40() {
   return (neuron0x38ce4b0()*0.0340182);
}

double NNfunction_ng_chi02::synapse0x38dea80() {
   return (neuron0x38ce7f0()*0.0052844);
}

double NNfunction_ng_chi02::synapse0x38deac0() {
   return (neuron0x38ceb30()*0.339767);
}

double NNfunction_ng_chi02::synapse0x38deb00() {
   return (neuron0x38cee70()*0.285936);
}

double NNfunction_ng_chi02::synapse0x38deb40() {
   return (neuron0x38cf1b0()*0.0602308);
}

double NNfunction_ng_chi02::synapse0x38deb80() {
   return (neuron0x38cf4f0()*0.138052);
}

double NNfunction_ng_chi02::synapse0x38debc0() {
   return (neuron0x38cf830()*0.07437);
}

double NNfunction_ng_chi02::synapse0x38de650() {
   return (neuron0x38cfb70()*-0.0238693);
}

double NNfunction_ng_chi02::synapse0x38de690() {
   return (neuron0x38d00d0()*0.0833027);
}

double NNfunction_ng_chi02::synapse0x38ded10() {
   return (neuron0x38d02f0()*0.0662774);
}

double NNfunction_ng_chi02::synapse0x38ded50() {
   return (neuron0x38d0630()*-0.00312279);
}

double NNfunction_ng_chi02::synapse0x38ded90() {
   return (neuron0x38d0970()*0.0315119);
}

double NNfunction_ng_chi02::synapse0x38dedd0() {
   return (neuron0x38d0cb0()*0.00918642);
}

double NNfunction_ng_chi02::synapse0x38dee10() {
   return (neuron0x38d0ff0()*0.00192903);
}

double NNfunction_ng_chi02::synapse0x38dee50() {
   return (neuron0x38d1330()*0.101546);
}

double NNfunction_ng_chi02::synapse0x38df1d0() {
   return (neuron0x38cc800()*-0.11171);
}

double NNfunction_ng_chi02::synapse0x38df210() {
   return (neuron0x38ccab0()*0.0543659);
}

double NNfunction_ng_chi02::synapse0x38df250() {
   return (neuron0x38ccdf0()*-0.223825);
}

double NNfunction_ng_chi02::synapse0x38df290() {
   return (neuron0x38cd130()*-0.0486078);
}

double NNfunction_ng_chi02::synapse0x38df2d0() {
   return (neuron0x38cd470()*-0.0391737);
}

double NNfunction_ng_chi02::synapse0x38df310() {
   return (neuron0x38cd7b0()*0.0111574);
}

double NNfunction_ng_chi02::synapse0x38df350() {
   return (neuron0x38cdaf0()*0.0139401);
}

double NNfunction_ng_chi02::synapse0x38df390() {
   return (neuron0x38cde30()*0.0264822);
}

double NNfunction_ng_chi02::synapse0x38df3d0() {
   return (neuron0x38ce170()*0.0195635);
}

double NNfunction_ng_chi02::synapse0x38df410() {
   return (neuron0x38ce4b0()*0.0295477);
}

double NNfunction_ng_chi02::synapse0x38df450() {
   return (neuron0x38ce7f0()*0.0213535);
}

double NNfunction_ng_chi02::synapse0x38df490() {
   return (neuron0x38ceb30()*-0.0279072);
}

double NNfunction_ng_chi02::synapse0x38df4d0() {
   return (neuron0x38cee70()*-0.0263382);
}

double NNfunction_ng_chi02::synapse0x38df510() {
   return (neuron0x38cf1b0()*0.0105082);
}

double NNfunction_ng_chi02::synapse0x38df550() {
   return (neuron0x38cf4f0()*-0.0237877);
}

double NNfunction_ng_chi02::synapse0x38df590() {
   return (neuron0x38cf830()*0.0170525);
}

double NNfunction_ng_chi02::synapse0x38df020() {
   return (neuron0x38cfb70()*0.00277459);
}

double NNfunction_ng_chi02::synapse0x38df060() {
   return (neuron0x38d00d0()*0.0094823);
}

double NNfunction_ng_chi02::synapse0x38df6e0() {
   return (neuron0x38d02f0()*0.0254763);
}

double NNfunction_ng_chi02::synapse0x38df720() {
   return (neuron0x38d0630()*0.00751732);
}

double NNfunction_ng_chi02::synapse0x38df760() {
   return (neuron0x38d0970()*-0.0236353);
}

double NNfunction_ng_chi02::synapse0x38df7a0() {
   return (neuron0x38d0cb0()*0.0198747);
}

double NNfunction_ng_chi02::synapse0x38df7e0() {
   return (neuron0x38d0ff0()*-0.00729526);
}

double NNfunction_ng_chi02::synapse0x38df820() {
   return (neuron0x38d1330()*3.64939);
}

double NNfunction_ng_chi02::synapse0x38dfba0() {
   return (neuron0x38cc800()*-0.0292078);
}

double NNfunction_ng_chi02::synapse0x38dfbe0() {
   return (neuron0x38ccab0()*1.48668);
}

double NNfunction_ng_chi02::synapse0x38dfc20() {
   return (neuron0x38ccdf0()*-0.521947);
}

double NNfunction_ng_chi02::synapse0x38dfc60() {
   return (neuron0x38cd130()*0.0133538);
}

double NNfunction_ng_chi02::synapse0x38dfca0() {
   return (neuron0x38cd470()*-0.0644236);
}

double NNfunction_ng_chi02::synapse0x38dfce0() {
   return (neuron0x38cd7b0()*0.0255022);
}

double NNfunction_ng_chi02::synapse0x38dfd20() {
   return (neuron0x38cdaf0()*-0.00276945);
}

double NNfunction_ng_chi02::synapse0x38dfd60() {
   return (neuron0x38cde30()*0.032486);
}

double NNfunction_ng_chi02::synapse0x38dfda0() {
   return (neuron0x38ce170()*-0.00716858);
}

double NNfunction_ng_chi02::synapse0x38dfde0() {
   return (neuron0x38ce4b0()*-0.0471156);
}

double NNfunction_ng_chi02::synapse0x38dfe20() {
   return (neuron0x38ce7f0()*0.0202815);
}

double NNfunction_ng_chi02::synapse0x38dfe60() {
   return (neuron0x38ceb30()*-0.446687);
}

double NNfunction_ng_chi02::synapse0x38dfea0() {
   return (neuron0x38cee70()*-0.0868782);
}

double NNfunction_ng_chi02::synapse0x38dfee0() {
   return (neuron0x38cf1b0()*-0.00419053);
}

double NNfunction_ng_chi02::synapse0x38dff20() {
   return (neuron0x38cf4f0()*0.243852);
}

double NNfunction_ng_chi02::synapse0x38dff60() {
   return (neuron0x38cf830()*-0.0156535);
}

double NNfunction_ng_chi02::synapse0x38df9f0() {
   return (neuron0x38cfb70()*0.023556);
}

double NNfunction_ng_chi02::synapse0x38dfa30() {
   return (neuron0x38d00d0()*0.0925381);
}

double NNfunction_ng_chi02::synapse0x38e00b0() {
   return (neuron0x38d02f0()*0.00635134);
}

double NNfunction_ng_chi02::synapse0x38e00f0() {
   return (neuron0x38d0630()*-0.0331269);
}

double NNfunction_ng_chi02::synapse0x38e0130() {
   return (neuron0x38d0970()*0.019038);
}

double NNfunction_ng_chi02::synapse0x38e0170() {
   return (neuron0x38d0cb0()*-0.0346439);
}

double NNfunction_ng_chi02::synapse0x38e01b0() {
   return (neuron0x38d0ff0()*0.0029466);
}

double NNfunction_ng_chi02::synapse0x38e01f0() {
   return (neuron0x38d1330()*-3.01274);
}

double NNfunction_ng_chi02::synapse0x38e0570() {
   return (neuron0x38cc800()*0.0038615);
}

double NNfunction_ng_chi02::synapse0x38e05b0() {
   return (neuron0x38ccab0()*-0.0449152);
}

double NNfunction_ng_chi02::synapse0x38e05f0() {
   return (neuron0x38ccdf0()*-0.0326361);
}

double NNfunction_ng_chi02::synapse0x38e0630() {
   return (neuron0x38cd130()*0.0957175);
}

double NNfunction_ng_chi02::synapse0x38e0670() {
   return (neuron0x38cd470()*-0.0346886);
}

double NNfunction_ng_chi02::synapse0x38e06b0() {
   return (neuron0x38cd7b0()*0.0170493);
}

double NNfunction_ng_chi02::synapse0x38e06f0() {
   return (neuron0x38cdaf0()*-0.00211941);
}

double NNfunction_ng_chi02::synapse0x38e0730() {
   return (neuron0x38cde30()*0.0209189);
}

double NNfunction_ng_chi02::synapse0x38e0770() {
   return (neuron0x38ce170()*0.0426127);
}

double NNfunction_ng_chi02::synapse0x38e07b0() {
   return (neuron0x38ce4b0()*-0.028562);
}

double NNfunction_ng_chi02::synapse0x38e07f0() {
   return (neuron0x38ce7f0()*-0.0202887);
}

double NNfunction_ng_chi02::synapse0x38e0830() {
   return (neuron0x38ceb30()*0.781426);
}

double NNfunction_ng_chi02::synapse0x38e0870() {
   return (neuron0x38cee70()*-1.05248);
}

double NNfunction_ng_chi02::synapse0x38e08b0() {
   return (neuron0x38cf1b0()*0.0184902);
}

double NNfunction_ng_chi02::synapse0x38e08f0() {
   return (neuron0x38cf4f0()*-0.0577078);
}

double NNfunction_ng_chi02::synapse0x38e0930() {
   return (neuron0x38cf830()*0.0102428);
}

double NNfunction_ng_chi02::synapse0x38e03c0() {
   return (neuron0x38cfb70()*0.0122279);
}

double NNfunction_ng_chi02::synapse0x38e0400() {
   return (neuron0x38d00d0()*-0.0828996);
}

double NNfunction_ng_chi02::synapse0x38e0a80() {
   return (neuron0x38d02f0()*0.0232762);
}

double NNfunction_ng_chi02::synapse0x38e0ac0() {
   return (neuron0x38d0630()*-0.0157392);
}

double NNfunction_ng_chi02::synapse0x38e0b00() {
   return (neuron0x38d0970()*-0.00242455);
}

double NNfunction_ng_chi02::synapse0x38e0b40() {
   return (neuron0x38d0cb0()*0.0193051);
}

double NNfunction_ng_chi02::synapse0x38e0b80() {
   return (neuron0x38d0ff0()*-0.02382);
}

double NNfunction_ng_chi02::synapse0x38e0bc0() {
   return (neuron0x38d1330()*0.023891);
}

double NNfunction_ng_chi02::synapse0x38e0f40() {
   return (neuron0x38cc800()*0.00973118);
}

double NNfunction_ng_chi02::synapse0x38e0f80() {
   return (neuron0x38ccab0()*0.533713);
}

double NNfunction_ng_chi02::synapse0x38e0fc0() {
   return (neuron0x38ccdf0()*0.65397);
}

double NNfunction_ng_chi02::synapse0x38e1000() {
   return (neuron0x38cd130()*-0.115341);
}

double NNfunction_ng_chi02::synapse0x38e1040() {
   return (neuron0x38cd470()*-0.0139958);
}

double NNfunction_ng_chi02::synapse0x38e1080() {
   return (neuron0x38cd7b0()*0.0269589);
}

double NNfunction_ng_chi02::synapse0x38e10c0() {
   return (neuron0x38cdaf0()*-0.0486055);
}

double NNfunction_ng_chi02::synapse0x38e1100() {
   return (neuron0x38cde30()*0.044311);
}

double NNfunction_ng_chi02::synapse0x38e1140() {
   return (neuron0x38ce170()*0.0370755);
}

double NNfunction_ng_chi02::synapse0x38d9300() {
   return (neuron0x38ce4b0()*0.00932104);
}

double NNfunction_ng_chi02::synapse0x38d9340() {
   return (neuron0x38ce7f0()*-0.0180935);
}

double NNfunction_ng_chi02::synapse0x38d9380() {
   return (neuron0x38ceb30()*-0.939683);
}

double NNfunction_ng_chi02::synapse0x38d93c0() {
   return (neuron0x38cee70()*0.0414186);
}

double NNfunction_ng_chi02::synapse0x38d9400() {
   return (neuron0x38cf1b0()*-0.0673905);
}

double NNfunction_ng_chi02::synapse0x38d9440() {
   return (neuron0x38cf4f0()*0.621187);
}

double NNfunction_ng_chi02::synapse0x38d9480() {
   return (neuron0x38cf830()*0.0489278);
}

double NNfunction_ng_chi02::synapse0x38e0d90() {
   return (neuron0x38cfb70()*-0.017578);
}

double NNfunction_ng_chi02::synapse0x38e0dd0() {
   return (neuron0x38d00d0()*0.0667449);
}

double NNfunction_ng_chi02::synapse0x38d95d0() {
   return (neuron0x38d02f0()*-0.0121839);
}

double NNfunction_ng_chi02::synapse0x38d9610() {
   return (neuron0x38d0630()*-0.0745483);
}

double NNfunction_ng_chi02::synapse0x38d9650() {
   return (neuron0x38d0970()*-0.0563115);
}

double NNfunction_ng_chi02::synapse0x38d9690() {
   return (neuron0x38d0cb0()*-0.0394675);
}

double NNfunction_ng_chi02::synapse0x38d96d0() {
   return (neuron0x38d0ff0()*0.00263736);
}

double NNfunction_ng_chi02::synapse0x38d9710() {
   return (neuron0x38d1330()*0.109116);
}

double NNfunction_ng_chi02::synapse0x38d9a90() {
   return (neuron0x38cc800()*0.0387387);
}

double NNfunction_ng_chi02::synapse0x38d9ad0() {
   return (neuron0x38ccab0()*0.00509998);
}

double NNfunction_ng_chi02::synapse0x38d9b10() {
   return (neuron0x38ccdf0()*-0.00469398);
}

double NNfunction_ng_chi02::synapse0x38d9b50() {
   return (neuron0x38cd130()*-0.00777146);
}

double NNfunction_ng_chi02::synapse0x38d9b90() {
   return (neuron0x38cd470()*-0.0148829);
}

double NNfunction_ng_chi02::synapse0x38d9bd0() {
   return (neuron0x38cd7b0()*-0.00653017);
}

double NNfunction_ng_chi02::synapse0x38d9c10() {
   return (neuron0x38cdaf0()*-0.00390705);
}

double NNfunction_ng_chi02::synapse0x38d9c50() {
   return (neuron0x38cde30()*-0.0114945);
}

double NNfunction_ng_chi02::synapse0x38d9c90() {
   return (neuron0x38ce170()*0.000299034);
}

double NNfunction_ng_chi02::synapse0x38d9cd0() {
   return (neuron0x38ce4b0()*0.00136129);
}

double NNfunction_ng_chi02::synapse0x38d9d10() {
   return (neuron0x38ce7f0()*-0.0103906);
}

double NNfunction_ng_chi02::synapse0x38d9d50() {
   return (neuron0x38ceb30()*0.0358455);
}

double NNfunction_ng_chi02::synapse0x38d9d90() {
   return (neuron0x38cee70()*-0.0100598);
}

double NNfunction_ng_chi02::synapse0x38d9dd0() {
   return (neuron0x38cf1b0()*-0.0046427);
}

double NNfunction_ng_chi02::synapse0x38d9e10() {
   return (neuron0x38cf4f0()*-0.00995744);
}

double NNfunction_ng_chi02::synapse0x38d9e50() {
   return (neuron0x38cf830()*0.00810392);
}

double NNfunction_ng_chi02::synapse0x38d98e0() {
   return (neuron0x38cfb70()*0.00390711);
}

double NNfunction_ng_chi02::synapse0x38d9920() {
   return (neuron0x38d00d0()*0.00613284);
}

double NNfunction_ng_chi02::synapse0x38d9fa0() {
   return (neuron0x38d02f0()*-0.016344);
}

double NNfunction_ng_chi02::synapse0x38d9fe0() {
   return (neuron0x38d0630()*-0.000758441);
}

double NNfunction_ng_chi02::synapse0x38da020() {
   return (neuron0x38d0970()*0.00834694);
}

double NNfunction_ng_chi02::synapse0x38da060() {
   return (neuron0x38d0cb0()*-0.00464381);
}

double NNfunction_ng_chi02::synapse0x38da0a0() {
   return (neuron0x38d0ff0()*-0.0111141);
}

double NNfunction_ng_chi02::synapse0x38da0e0() {
   return (neuron0x38d1330()*-11.4585);
}

double NNfunction_ng_chi02::synapse0x38da2b0() {
   return (neuron0x38cc800()*0.0403989);
}

double NNfunction_ng_chi02::synapse0x38e3340() {
   return (neuron0x38ccab0()*-0.624652);
}

double NNfunction_ng_chi02::synapse0x38e3380() {
   return (neuron0x38ccdf0()*0.686458);
}

double NNfunction_ng_chi02::synapse0x38e33c0() {
   return (neuron0x38cd130()*-0.862516);
}

double NNfunction_ng_chi02::synapse0x38e3400() {
   return (neuron0x38cd470()*0.0342896);
}

double NNfunction_ng_chi02::synapse0x38e3440() {
   return (neuron0x38cd7b0()*-0.092513);
}

double NNfunction_ng_chi02::synapse0x38e3480() {
   return (neuron0x38cdaf0()*-0.0609418);
}

double NNfunction_ng_chi02::synapse0x38e34c0() {
   return (neuron0x38cde30()*-0.0373893);
}

double NNfunction_ng_chi02::synapse0x38e3500() {
   return (neuron0x38ce170()*0.057167);
}

double NNfunction_ng_chi02::synapse0x38e3540() {
   return (neuron0x38ce4b0()*0.117999);
}

double NNfunction_ng_chi02::synapse0x38e3580() {
   return (neuron0x38ce7f0()*-0.0293584);
}

double NNfunction_ng_chi02::synapse0x38e35c0() {
   return (neuron0x38ceb30()*1.15426);
}

double NNfunction_ng_chi02::synapse0x38e3600() {
   return (neuron0x38cee70()*0.0565288);
}

double NNfunction_ng_chi02::synapse0x38e3640() {
   return (neuron0x38cf1b0()*-0.046694);
}

double NNfunction_ng_chi02::synapse0x38e3680() {
   return (neuron0x38cf4f0()*-1.48493);
}

double NNfunction_ng_chi02::synapse0x38e36c0() {
   return (neuron0x38cf830()*-0.0198621);
}

double NNfunction_ng_chi02::synapse0x38e3190() {
   return (neuron0x38cfb70()*-0.0130637);
}

double NNfunction_ng_chi02::synapse0x38e31d0() {
   return (neuron0x38d00d0()*0.0932525);
}

double NNfunction_ng_chi02::synapse0x38e3810() {
   return (neuron0x38d02f0()*0.0144769);
}

double NNfunction_ng_chi02::synapse0x38e3850() {
   return (neuron0x38d0630()*-0.0410582);
}

double NNfunction_ng_chi02::synapse0x38e3890() {
   return (neuron0x38d0970()*0.0579188);
}

double NNfunction_ng_chi02::synapse0x38e38d0() {
   return (neuron0x38d0cb0()*0.021644);
}

double NNfunction_ng_chi02::synapse0x38e3910() {
   return (neuron0x38d0ff0()*-0.0310836);
}

double NNfunction_ng_chi02::synapse0x38e3950() {
   return (neuron0x38d1330()*1.34536);
}

double NNfunction_ng_chi02::synapse0x38e3cd0() {
   return (neuron0x38cc800()*0.00518919);
}

double NNfunction_ng_chi02::synapse0x38e3d10() {
   return (neuron0x38ccab0()*-0.195239);
}

double NNfunction_ng_chi02::synapse0x38e3d50() {
   return (neuron0x38ccdf0()*0.187866);
}

double NNfunction_ng_chi02::synapse0x38e3d90() {
   return (neuron0x38cd130()*-2.5188);
}

double NNfunction_ng_chi02::synapse0x38e3dd0() {
   return (neuron0x38cd470()*0.0222533);
}

double NNfunction_ng_chi02::synapse0x38e3e10() {
   return (neuron0x38cd7b0()*-0.016933);
}

double NNfunction_ng_chi02::synapse0x38e3e50() {
   return (neuron0x38cdaf0()*0.0317305);
}

double NNfunction_ng_chi02::synapse0x38e3e90() {
   return (neuron0x38cde30()*0.0699456);
}

double NNfunction_ng_chi02::synapse0x38e3ed0() {
   return (neuron0x38ce170()*0.0677681);
}

double NNfunction_ng_chi02::synapse0x38e3f10() {
   return (neuron0x38ce4b0()*-0.112773);
}

double NNfunction_ng_chi02::synapse0x38e3f50() {
   return (neuron0x38ce7f0()*0.157863);
}

double NNfunction_ng_chi02::synapse0x38e3f90() {
   return (neuron0x38ceb30()*0.712326);
}

double NNfunction_ng_chi02::synapse0x38e3fd0() {
   return (neuron0x38cee70()*0.797354);
}

double NNfunction_ng_chi02::synapse0x38e4010() {
   return (neuron0x38cf1b0()*-0.0394232);
}

double NNfunction_ng_chi02::synapse0x38e4050() {
   return (neuron0x38cf4f0()*-0.0394999);
}

double NNfunction_ng_chi02::synapse0x38e4090() {
   return (neuron0x38cf830()*0.0670645);
}

double NNfunction_ng_chi02::synapse0x38e3b20() {
   return (neuron0x38cfb70()*0.0240071);
}

double NNfunction_ng_chi02::synapse0x38e3b60() {
   return (neuron0x38d00d0()*-0.547514);
}

double NNfunction_ng_chi02::synapse0x38e41e0() {
   return (neuron0x38d02f0()*-0.0332146);
}

double NNfunction_ng_chi02::synapse0x38e4220() {
   return (neuron0x38d0630()*-0.0971964);
}

double NNfunction_ng_chi02::synapse0x38e4260() {
   return (neuron0x38d0970()*-0.0135646);
}

double NNfunction_ng_chi02::synapse0x38e42a0() {
   return (neuron0x38d0cb0()*0.0425883);
}

double NNfunction_ng_chi02::synapse0x38e42e0() {
   return (neuron0x38d0ff0()*-0.0803321);
}

double NNfunction_ng_chi02::synapse0x38e4320() {
   return (neuron0x38d1330()*0.204588);
}

double NNfunction_ng_chi02::synapse0x38e46a0() {
   return (neuron0x38cc800()*-0.0241559);
}

double NNfunction_ng_chi02::synapse0x38e46e0() {
   return (neuron0x38ccab0()*1.77537);
}

double NNfunction_ng_chi02::synapse0x38e4720() {
   return (neuron0x38ccdf0()*0.0388984);
}

double NNfunction_ng_chi02::synapse0x38e4760() {
   return (neuron0x38cd130()*-0.0237147);
}

double NNfunction_ng_chi02::synapse0x38e47a0() {
   return (neuron0x38cd470()*-0.00739672);
}

double NNfunction_ng_chi02::synapse0x38e47e0() {
   return (neuron0x38cd7b0()*0.00304962);
}

double NNfunction_ng_chi02::synapse0x38e4820() {
   return (neuron0x38cdaf0()*-0.00723259);
}

double NNfunction_ng_chi02::synapse0x38e4860() {
   return (neuron0x38cde30()*-0.0149637);
}

double NNfunction_ng_chi02::synapse0x38e48a0() {
   return (neuron0x38ce170()*-0.0100757);
}

double NNfunction_ng_chi02::synapse0x38e48e0() {
   return (neuron0x38ce4b0()*-0.020312);
}

double NNfunction_ng_chi02::synapse0x38e4920() {
   return (neuron0x38ce7f0()*-0.00707063);
}

double NNfunction_ng_chi02::synapse0x38e4960() {
   return (neuron0x38ceb30()*0.101269);
}

double NNfunction_ng_chi02::synapse0x38e49a0() {
   return (neuron0x38cee70()*-0.0370467);
}

double NNfunction_ng_chi02::synapse0x38e49e0() {
   return (neuron0x38cf1b0()*0.0124343);
}

double NNfunction_ng_chi02::synapse0x38e4a20() {
   return (neuron0x38cf4f0()*-0.0427193);
}

double NNfunction_ng_chi02::synapse0x38e4a60() {
   return (neuron0x38cf830()*0.0214856);
}

double NNfunction_ng_chi02::synapse0x38e44f0() {
   return (neuron0x38cfb70()*0.00701531);
}

double NNfunction_ng_chi02::synapse0x38e4530() {
   return (neuron0x38d00d0()*0.0198316);
}

double NNfunction_ng_chi02::synapse0x38e4bb0() {
   return (neuron0x38d02f0()*0.0113749);
}

double NNfunction_ng_chi02::synapse0x38e4bf0() {
   return (neuron0x38d0630()*0.0131176);
}

double NNfunction_ng_chi02::synapse0x38e4c30() {
   return (neuron0x38d0970()*0.0211728);
}

double NNfunction_ng_chi02::synapse0x38e4c70() {
   return (neuron0x38d0cb0()*0.00371343);
}

double NNfunction_ng_chi02::synapse0x38e4cb0() {
   return (neuron0x38d0ff0()*0.00628668);
}

double NNfunction_ng_chi02::synapse0x38e4cf0() {
   return (neuron0x38d1330()*0.0111047);
}

double NNfunction_ng_chi02::synapse0x38e5070() {
   return (neuron0x38cc800()*-0.057643);
}

double NNfunction_ng_chi02::synapse0x38e50b0() {
   return (neuron0x38ccab0()*-0.566272);
}

double NNfunction_ng_chi02::synapse0x38e50f0() {
   return (neuron0x38ccdf0()*0.0888316);
}

double NNfunction_ng_chi02::synapse0x38e5130() {
   return (neuron0x38cd130()*-2.02701);
}

double NNfunction_ng_chi02::synapse0x38e5170() {
   return (neuron0x38cd470()*-0.0234311);
}

double NNfunction_ng_chi02::synapse0x38e51b0() {
   return (neuron0x38cd7b0()*0.0270608);
}

double NNfunction_ng_chi02::synapse0x38e51f0() {
   return (neuron0x38cdaf0()*0.0574194);
}

double NNfunction_ng_chi02::synapse0x38e5230() {
   return (neuron0x38cde30()*0.0118894);
}

double NNfunction_ng_chi02::synapse0x38e5270() {
   return (neuron0x38ce170()*-0.00260804);
}

double NNfunction_ng_chi02::synapse0x38e52b0() {
   return (neuron0x38ce4b0()*-0.0032573);
}

double NNfunction_ng_chi02::synapse0x38e52f0() {
   return (neuron0x38ce7f0()*0.079388);
}

double NNfunction_ng_chi02::synapse0x38e5330() {
   return (neuron0x38ceb30()*0.137065);
}

double NNfunction_ng_chi02::synapse0x38e5370() {
   return (neuron0x38cee70()*-0.0545823);
}

double NNfunction_ng_chi02::synapse0x38e53b0() {
   return (neuron0x38cf1b0()*-0.0258111);
}

double NNfunction_ng_chi02::synapse0x38e53f0() {
   return (neuron0x38cf4f0()*-0.031179);
}

double NNfunction_ng_chi02::synapse0x38e5430() {
   return (neuron0x38cf830()*0.0289906);
}

double NNfunction_ng_chi02::synapse0x38e4ec0() {
   return (neuron0x38cfb70()*0.0246187);
}

double NNfunction_ng_chi02::synapse0x38e4f00() {
   return (neuron0x38d00d0()*0.0804201);
}

double NNfunction_ng_chi02::synapse0x38e5580() {
   return (neuron0x38d02f0()*-0.0784813);
}

double NNfunction_ng_chi02::synapse0x38e55c0() {
   return (neuron0x38d0630()*-0.0558266);
}

double NNfunction_ng_chi02::synapse0x38e5600() {
   return (neuron0x38d0970()*-0.0714769);
}

double NNfunction_ng_chi02::synapse0x38e5640() {
   return (neuron0x38d0cb0()*-0.00620117);
}

double NNfunction_ng_chi02::synapse0x38e5680() {
   return (neuron0x38d0ff0()*-0.0280453);
}

double NNfunction_ng_chi02::synapse0x38e56c0() {
   return (neuron0x38d1330()*0.263052);
}

double NNfunction_ng_chi02::synapse0x38e5a40() {
   return (neuron0x38cc800()*-0.079625);
}

double NNfunction_ng_chi02::synapse0x38e5a80() {
   return (neuron0x38ccab0()*-5.22042);
}

double NNfunction_ng_chi02::synapse0x38e5ac0() {
   return (neuron0x38ccdf0()*0.0220538);
}

double NNfunction_ng_chi02::synapse0x38e5b00() {
   return (neuron0x38cd130()*0.0243647);
}

double NNfunction_ng_chi02::synapse0x38e5b40() {
   return (neuron0x38cd470()*0.0179937);
}

double NNfunction_ng_chi02::synapse0x38e5b80() {
   return (neuron0x38cd7b0()*-0.000208118);
}

double NNfunction_ng_chi02::synapse0x38e5bc0() {
   return (neuron0x38cdaf0()*0.00919583);
}

double NNfunction_ng_chi02::synapse0x38e5c00() {
   return (neuron0x38cde30()*-0.00594431);
}

double NNfunction_ng_chi02::synapse0x38e5c40() {
   return (neuron0x38ce170()*-0.00348677);
}

double NNfunction_ng_chi02::synapse0x38e5c80() {
   return (neuron0x38ce4b0()*0.0320935);
}

double NNfunction_ng_chi02::synapse0x38e5cc0() {
   return (neuron0x38ce7f0()*-0.0190103);
}

double NNfunction_ng_chi02::synapse0x38e5d00() {
   return (neuron0x38ceb30()*-0.00914511);
}

double NNfunction_ng_chi02::synapse0x38e5d40() {
   return (neuron0x38cee70()*-0.0287441);
}

double NNfunction_ng_chi02::synapse0x38e5d80() {
   return (neuron0x38cf1b0()*-0.00756072);
}

double NNfunction_ng_chi02::synapse0x38e5dc0() {
   return (neuron0x38cf4f0()*0.0835521);
}

double NNfunction_ng_chi02::synapse0x38e5e00() {
   return (neuron0x38cf830()*0.0118892);
}

double NNfunction_ng_chi02::synapse0x38e5890() {
   return (neuron0x38cfb70()*-0.0306909);
}

double NNfunction_ng_chi02::synapse0x38e58d0() {
   return (neuron0x38d00d0()*0.0383142);
}

double NNfunction_ng_chi02::synapse0x38e5f50() {
   return (neuron0x38d02f0()*-0.011239);
}

double NNfunction_ng_chi02::synapse0x38e5f90() {
   return (neuron0x38d0630()*-0.023092);
}

double NNfunction_ng_chi02::synapse0x38e5fd0() {
   return (neuron0x38d0970()*-0.0224879);
}

double NNfunction_ng_chi02::synapse0x38e6010() {
   return (neuron0x38d0cb0()*0.0142847);
}

double NNfunction_ng_chi02::synapse0x38e6050() {
   return (neuron0x38d0ff0()*0.00624782);
}

double NNfunction_ng_chi02::synapse0x38e6090() {
   return (neuron0x38d1330()*-0.120942);
}

double NNfunction_ng_chi02::synapse0x38e6410() {
   return (neuron0x38cc800()*-0.0502721);
}

double NNfunction_ng_chi02::synapse0x38e6450() {
   return (neuron0x38ccab0()*0.186135);
}

double NNfunction_ng_chi02::synapse0x38e6490() {
   return (neuron0x38ccdf0()*-0.258205);
}

double NNfunction_ng_chi02::synapse0x38e64d0() {
   return (neuron0x38cd130()*-0.0716045);
}

double NNfunction_ng_chi02::synapse0x38e6510() {
   return (neuron0x38cd470()*0.118904);
}

double NNfunction_ng_chi02::synapse0x38e6550() {
   return (neuron0x38cd7b0()*0.00673623);
}

double NNfunction_ng_chi02::synapse0x38e6590() {
   return (neuron0x38cdaf0()*-0.00304554);
}

double NNfunction_ng_chi02::synapse0x38e65d0() {
   return (neuron0x38cde30()*-0.0220056);
}

double NNfunction_ng_chi02::synapse0x38e6610() {
   return (neuron0x38ce170()*-0.0011484);
}

double NNfunction_ng_chi02::synapse0x38e6650() {
   return (neuron0x38ce4b0()*0.0269593);
}

double NNfunction_ng_chi02::synapse0x38e6690() {
   return (neuron0x38ce7f0()*-0.00310066);
}

double NNfunction_ng_chi02::synapse0x38e66d0() {
   return (neuron0x38ceb30()*0.917051);
}

double NNfunction_ng_chi02::synapse0x38e6710() {
   return (neuron0x38cee70()*-0.195472);
}

double NNfunction_ng_chi02::synapse0x38e6750() {
   return (neuron0x38cf1b0()*-0.0298282);
}

double NNfunction_ng_chi02::synapse0x38e6790() {
   return (neuron0x38cf4f0()*0.560694);
}

double NNfunction_ng_chi02::synapse0x38e67d0() {
   return (neuron0x38cf830()*-0.0885144);
}

double NNfunction_ng_chi02::synapse0x38e6260() {
   return (neuron0x38cfb70()*0.0104409);
}

double NNfunction_ng_chi02::synapse0x38e62a0() {
   return (neuron0x38d00d0()*-0.0593047);
}

double NNfunction_ng_chi02::synapse0x38e6920() {
   return (neuron0x38d02f0()*-0.00741503);
}

double NNfunction_ng_chi02::synapse0x38e6960() {
   return (neuron0x38d0630()*0.0304333);
}

double NNfunction_ng_chi02::synapse0x38e69a0() {
   return (neuron0x38d0970()*-0.0203672);
}

double NNfunction_ng_chi02::synapse0x38e69e0() {
   return (neuron0x38d0cb0()*0.020334);
}

double NNfunction_ng_chi02::synapse0x38e6a20() {
   return (neuron0x38d0ff0()*0.0349724);
}

double NNfunction_ng_chi02::synapse0x38e6a60() {
   return (neuron0x38d1330()*-0.0550136);
}

double NNfunction_ng_chi02::synapse0x38e6de0() {
   return (neuron0x38cc800()*0.0244132);
}

double NNfunction_ng_chi02::synapse0x38e6e20() {
   return (neuron0x38ccab0()*0.046807);
}

double NNfunction_ng_chi02::synapse0x38e6e60() {
   return (neuron0x38ccdf0()*0.0347407);
}

double NNfunction_ng_chi02::synapse0x38e6ea0() {
   return (neuron0x38cd130()*0.00944258);
}

double NNfunction_ng_chi02::synapse0x38e6ee0() {
   return (neuron0x38cd470()*-0.00400361);
}

double NNfunction_ng_chi02::synapse0x38e6f20() {
   return (neuron0x38cd7b0()*-0.0187817);
}

double NNfunction_ng_chi02::synapse0x38e6f60() {
   return (neuron0x38cdaf0()*-0.0127605);
}

double NNfunction_ng_chi02::synapse0x38e6fa0() {
   return (neuron0x38cde30()*0.00580518);
}

double NNfunction_ng_chi02::synapse0x38e6fe0() {
   return (neuron0x38ce170()*-0.00728986);
}

double NNfunction_ng_chi02::synapse0x38e7020() {
   return (neuron0x38ce4b0()*0.0115553);
}

double NNfunction_ng_chi02::synapse0x38e7060() {
   return (neuron0x38ce7f0()*-0.00837027);
}

double NNfunction_ng_chi02::synapse0x38e70a0() {
   return (neuron0x38ceb30()*0.0550507);
}

double NNfunction_ng_chi02::synapse0x38e70e0() {
   return (neuron0x38cee70()*0.0121028);
}

double NNfunction_ng_chi02::synapse0x38e7120() {
   return (neuron0x38cf1b0()*0.00731956);
}

double NNfunction_ng_chi02::synapse0x38e7160() {
   return (neuron0x38cf4f0()*0.0324019);
}

double NNfunction_ng_chi02::synapse0x38e71a0() {
   return (neuron0x38cf830()*-0.000671318);
}

double NNfunction_ng_chi02::synapse0x38e6c30() {
   return (neuron0x38cfb70()*0.00309);
}

double NNfunction_ng_chi02::synapse0x38e6c70() {
   return (neuron0x38d00d0()*0.0328946);
}

double NNfunction_ng_chi02::synapse0x38e72f0() {
   return (neuron0x38d02f0()*-0.000267498);
}

double NNfunction_ng_chi02::synapse0x38e7330() {
   return (neuron0x38d0630()*0.00905607);
}

double NNfunction_ng_chi02::synapse0x38e7370() {
   return (neuron0x38d0970()*-0.012001);
}

double NNfunction_ng_chi02::synapse0x38e73b0() {
   return (neuron0x38d0cb0()*-0.0100332);
}

double NNfunction_ng_chi02::synapse0x38e73f0() {
   return (neuron0x38d0ff0()*0.0134658);
}

double NNfunction_ng_chi02::synapse0x38e7430() {
   return (neuron0x38d1330()*-8.49468);
}

double NNfunction_ng_chi02::synapse0x38e77b0() {
   return (neuron0x38cc800()*0.112761);
}

double NNfunction_ng_chi02::synapse0x38e77f0() {
   return (neuron0x38ccab0()*-5.35019);
}

double NNfunction_ng_chi02::synapse0x38e7830() {
   return (neuron0x38ccdf0()*0.250289);
}

double NNfunction_ng_chi02::synapse0x38e7870() {
   return (neuron0x38cd130()*-0.0373207);
}

double NNfunction_ng_chi02::synapse0x38e78b0() {
   return (neuron0x38cd470()*0.0280931);
}

double NNfunction_ng_chi02::synapse0x38e78f0() {
   return (neuron0x38cd7b0()*-0.00282054);
}

double NNfunction_ng_chi02::synapse0x38e7930() {
   return (neuron0x38cdaf0()*0.0118483);
}

double NNfunction_ng_chi02::synapse0x38e7970() {
   return (neuron0x38cde30()*-0.0354794);
}

double NNfunction_ng_chi02::synapse0x38e79b0() {
   return (neuron0x38ce170()*-0.0433076);
}

double NNfunction_ng_chi02::synapse0x38e79f0() {
   return (neuron0x38ce4b0()*0.0428944);
}

double NNfunction_ng_chi02::synapse0x38e7a30() {
   return (neuron0x38ce7f0()*0.0483887);
}

double NNfunction_ng_chi02::synapse0x38e7a70() {
   return (neuron0x38ceb30()*-0.163988);
}

double NNfunction_ng_chi02::synapse0x38e7ab0() {
   return (neuron0x38cee70()*0.0572446);
}

double NNfunction_ng_chi02::synapse0x38e7af0() {
   return (neuron0x38cf1b0()*0.0990013);
}

double NNfunction_ng_chi02::synapse0x38e7b30() {
   return (neuron0x38cf4f0()*0.225917);
}

double NNfunction_ng_chi02::synapse0x38e7b70() {
   return (neuron0x38cf830()*-0.0202817);
}

double NNfunction_ng_chi02::synapse0x38e7600() {
   return (neuron0x38cfb70()*0.0700821);
}

double NNfunction_ng_chi02::synapse0x38e7640() {
   return (neuron0x38d00d0()*-0.0744229);
}

double NNfunction_ng_chi02::synapse0x38e7cc0() {
   return (neuron0x38d02f0()*-0.0724724);
}

double NNfunction_ng_chi02::synapse0x38e7d00() {
   return (neuron0x38d0630()*0.0223768);
}

double NNfunction_ng_chi02::synapse0x38e7d40() {
   return (neuron0x38d0970()*-0.000815272);
}

double NNfunction_ng_chi02::synapse0x38e7d80() {
   return (neuron0x38d0cb0()*-0.0679996);
}

double NNfunction_ng_chi02::synapse0x38e7dc0() {
   return (neuron0x38d0ff0()*0.0551298);
}

double NNfunction_ng_chi02::synapse0x38e7e00() {
   return (neuron0x38d1330()*2.793);
}

double NNfunction_ng_chi02::synapse0x38e8180() {
   return (neuron0x38cc800()*-0.051219);
}

double NNfunction_ng_chi02::synapse0x38dc750() {
   return (neuron0x38ccab0()*0.153091);
}

double NNfunction_ng_chi02::synapse0x38dc790() {
   return (neuron0x38ccdf0()*-1.46537);
}

double NNfunction_ng_chi02::synapse0x38dc7d0() {
   return (neuron0x38cd130()*-0.522036);
}

double NNfunction_ng_chi02::synapse0x38dca20() {
   return (neuron0x38cd470()*0.093482);
}

double NNfunction_ng_chi02::synapse0x38dca60() {
   return (neuron0x38cd7b0()*-0.00214981);
}

double NNfunction_ng_chi02::synapse0x38dcaa0() {
   return (neuron0x38cdaf0()*-0.0228547);
}

double NNfunction_ng_chi02::synapse0x38dccf0() {
   return (neuron0x38cde30()*-0.0630386);
}

double NNfunction_ng_chi02::synapse0x38dcd30() {
   return (neuron0x38ce170()*0.00470316);
}

double NNfunction_ng_chi02::synapse0x38dcf80() {
   return (neuron0x38ce4b0()*0.0324316);
}

double NNfunction_ng_chi02::synapse0x38dcfc0() {
   return (neuron0x38ce7f0()*0.0181511);
}

double NNfunction_ng_chi02::synapse0x38dd000() {
   return (neuron0x38ceb30()*-0.0612549);
}

double NNfunction_ng_chi02::synapse0x38dd250() {
   return (neuron0x38cee70()*0.0951223);
}

double NNfunction_ng_chi02::synapse0x38dd290() {
   return (neuron0x38cf1b0()*0.0427119);
}

double NNfunction_ng_chi02::synapse0x38dd4e0() {
   return (neuron0x38cf4f0()*-0.0200704);
}

double NNfunction_ng_chi02::synapse0x38dd520() {
   return (neuron0x38cf830()*0.0229223);
}

double NNfunction_ng_chi02::synapse0x38e7fd0() {
   return (neuron0x38cfb70()*-0.0172858);
}

double NNfunction_ng_chi02::synapse0x38e8010() {
   return (neuron0x38d00d0()*0.0943798);
}

double NNfunction_ng_chi02::synapse0x38dd670() {
   return (neuron0x38d02f0()*0.00490584);
}

double NNfunction_ng_chi02::synapse0x38ddb80() {
   return (neuron0x38d0630()*0.00368847);
}

double NNfunction_ng_chi02::synapse0x38ddbc0() {
   return (neuron0x38d0970()*-0.14577);
}

double NNfunction_ng_chi02::synapse0x38ddc00() {
   return (neuron0x38d0cb0()*0.0471557);
}

double NNfunction_ng_chi02::synapse0x38dde50() {
   return (neuron0x38d0ff0()*-0.0194847);
}

double NNfunction_ng_chi02::synapse0x38dde90() {
   return (neuron0x38d1330()*-0.985973);
}

double NNfunction_ng_chi02::synapse0x38dd740() {
   return (neuron0x38cc800()*-0.0111728);
}

double NNfunction_ng_chi02::synapse0x38dd780() {
   return (neuron0x38ccab0()*0.914308);
}

double NNfunction_ng_chi02::synapse0x38dd7c0() {
   return (neuron0x38ccdf0()*-0.847871);
}

double NNfunction_ng_chi02::synapse0x38dd800() {
   return (neuron0x38cd130()*1.2346);
}

double NNfunction_ng_chi02::synapse0x38de180() {
   return (neuron0x38cd470()*0.0460984);
}

double NNfunction_ng_chi02::synapse0x38ea4d0() {
   return (neuron0x38cd7b0()*0.0376159);
}

double NNfunction_ng_chi02::synapse0x38ea510() {
   return (neuron0x38cdaf0()*-0.0375555);
}

double NNfunction_ng_chi02::synapse0x38ea550() {
   return (neuron0x38cde30()*0.00507521);
}

double NNfunction_ng_chi02::synapse0x38ea590() {
   return (neuron0x38ce170()*0.00947789);
}

double NNfunction_ng_chi02::synapse0x38ea5d0() {
   return (neuron0x38ce4b0()*-0.140538);
}

double NNfunction_ng_chi02::synapse0x38ea610() {
   return (neuron0x38ce7f0()*-0.0163707);
}

double NNfunction_ng_chi02::synapse0x38ea650() {
   return (neuron0x38ceb30()*-1.68639);
}

double NNfunction_ng_chi02::synapse0x38ea690() {
   return (neuron0x38cee70()*-0.0615825);
}

double NNfunction_ng_chi02::synapse0x38ea6d0() {
   return (neuron0x38cf1b0()*-0.0349716);
}

double NNfunction_ng_chi02::synapse0x38ea710() {
   return (neuron0x38cf4f0()*1.3206);
}

double NNfunction_ng_chi02::synapse0x38ea750() {
   return (neuron0x38cf830()*0.0178631);
}

double NNfunction_ng_chi02::synapse0x38de060() {
   return (neuron0x38cfb70()*0.0433681);
}

double NNfunction_ng_chi02::synapse0x38de0a0() {
   return (neuron0x38d00d0()*-0.0733391);
}

double NNfunction_ng_chi02::synapse0x38ea8a0() {
   return (neuron0x38d02f0()*-0.00285576);
}

double NNfunction_ng_chi02::synapse0x38ea8e0() {
   return (neuron0x38d0630()*0.0380228);
}

double NNfunction_ng_chi02::synapse0x38ea920() {
   return (neuron0x38d0970()*-0.114495);
}

double NNfunction_ng_chi02::synapse0x38ea960() {
   return (neuron0x38d0cb0()*-0.0535133);
}

double NNfunction_ng_chi02::synapse0x38ea9a0() {
   return (neuron0x38d0ff0()*0.0913387);
}

double NNfunction_ng_chi02::synapse0x38ea9e0() {
   return (neuron0x38d1330()*-1.6538);
}

double NNfunction_ng_chi02::synapse0x38ead60() {
   return (neuron0x38cc800()*-0.0757306);
}

double NNfunction_ng_chi02::synapse0x38eada0() {
   return (neuron0x38ccab0()*-2.62415);
}

double NNfunction_ng_chi02::synapse0x38eade0() {
   return (neuron0x38ccdf0()*1.05884);
}

double NNfunction_ng_chi02::synapse0x38eae20() {
   return (neuron0x38cd130()*-0.0546847);
}

double NNfunction_ng_chi02::synapse0x38eae60() {
   return (neuron0x38cd470()*-0.0126001);
}

double NNfunction_ng_chi02::synapse0x38eaea0() {
   return (neuron0x38cd7b0()*-0.0214187);
}

double NNfunction_ng_chi02::synapse0x38eaee0() {
   return (neuron0x38cdaf0()*-0.0207018);
}

double NNfunction_ng_chi02::synapse0x38eaf20() {
   return (neuron0x38cde30()*0.0171415);
}

double NNfunction_ng_chi02::synapse0x38eaf60() {
   return (neuron0x38ce170()*-0.00632568);
}

double NNfunction_ng_chi02::synapse0x38eafa0() {
   return (neuron0x38ce4b0()*-0.0262727);
}

double NNfunction_ng_chi02::synapse0x38eafe0() {
   return (neuron0x38ce7f0()*0.000720169);
}

double NNfunction_ng_chi02::synapse0x38eb020() {
   return (neuron0x38ceb30()*0.0526763);
}

double NNfunction_ng_chi02::synapse0x38eb060() {
   return (neuron0x38cee70()*0.131451);
}

double NNfunction_ng_chi02::synapse0x38eb0a0() {
   return (neuron0x38cf1b0()*-0.0220025);
}

double NNfunction_ng_chi02::synapse0x38eb0e0() {
   return (neuron0x38cf4f0()*-0.125283);
}

double NNfunction_ng_chi02::synapse0x38eb120() {
   return (neuron0x38cf830()*-0.0274571);
}

double NNfunction_ng_chi02::synapse0x38eabb0() {
   return (neuron0x38cfb70()*0.0296998);
}

double NNfunction_ng_chi02::synapse0x38eabf0() {
   return (neuron0x38d00d0()*-0.0564375);
}

double NNfunction_ng_chi02::synapse0x38eb270() {
   return (neuron0x38d02f0()*0.0284048);
}

double NNfunction_ng_chi02::synapse0x38eb2b0() {
   return (neuron0x38d0630()*0.0114873);
}

double NNfunction_ng_chi02::synapse0x38eb2f0() {
   return (neuron0x38d0970()*-0.00913693);
}

double NNfunction_ng_chi02::synapse0x38eb330() {
   return (neuron0x38d0cb0()*-0.0321785);
}

double NNfunction_ng_chi02::synapse0x38eb370() {
   return (neuron0x38d0ff0()*0.0063015);
}

double NNfunction_ng_chi02::synapse0x38eb3b0() {
   return (neuron0x38d1330()*-2.25696);
}

double NNfunction_ng_chi02::synapse0x38eb730() {
   return (neuron0x38cc800()*0.00878193);
}

double NNfunction_ng_chi02::synapse0x38eb770() {
   return (neuron0x38ccab0()*-0.00660384);
}

double NNfunction_ng_chi02::synapse0x38eb7b0() {
   return (neuron0x38ccdf0()*-0.0354599);
}

double NNfunction_ng_chi02::synapse0x38eb7f0() {
   return (neuron0x38cd130()*1.85321);
}

double NNfunction_ng_chi02::synapse0x38eb830() {
   return (neuron0x38cd470()*0.0728329);
}

double NNfunction_ng_chi02::synapse0x38eb870() {
   return (neuron0x38cd7b0()*0.00637951);
}

double NNfunction_ng_chi02::synapse0x38eb8b0() {
   return (neuron0x38cdaf0()*-0.0187878);
}

double NNfunction_ng_chi02::synapse0x38eb8f0() {
   return (neuron0x38cde30()*-0.0411743);
}

double NNfunction_ng_chi02::synapse0x38eb930() {
   return (neuron0x38ce170()*-0.0355408);
}

double NNfunction_ng_chi02::synapse0x38eb970() {
   return (neuron0x38ce4b0()*-0.00267601);
}

double NNfunction_ng_chi02::synapse0x38eb9b0() {
   return (neuron0x38ce7f0()*-0.00732298);
}

double NNfunction_ng_chi02::synapse0x38eb9f0() {
   return (neuron0x38ceb30()*-0.415031);
}

double NNfunction_ng_chi02::synapse0x38eba30() {
   return (neuron0x38cee70()*-0.314797);
}

double NNfunction_ng_chi02::synapse0x38eba70() {
   return (neuron0x38cf1b0()*0.0157451);
}

double NNfunction_ng_chi02::synapse0x38ebab0() {
   return (neuron0x38cf4f0()*0.0458717);
}

double NNfunction_ng_chi02::synapse0x38ebaf0() {
   return (neuron0x38cf830()*-0.0406723);
}

double NNfunction_ng_chi02::synapse0x38eb580() {
   return (neuron0x38cfb70()*0.0303757);
}

double NNfunction_ng_chi02::synapse0x38eb5c0() {
   return (neuron0x38d00d0()*0.0603707);
}

double NNfunction_ng_chi02::synapse0x38ebc40() {
   return (neuron0x38d02f0()*-0.0470474);
}

double NNfunction_ng_chi02::synapse0x38ebc80() {
   return (neuron0x38d0630()*0.00771884);
}

double NNfunction_ng_chi02::synapse0x38ebcc0() {
   return (neuron0x38d0970()*0.0404401);
}

double NNfunction_ng_chi02::synapse0x38ebd00() {
   return (neuron0x38d0cb0()*-0.0203748);
}

double NNfunction_ng_chi02::synapse0x38ebd40() {
   return (neuron0x38d0ff0()*-0.0134255);
}

double NNfunction_ng_chi02::synapse0x38ebd80() {
   return (neuron0x38d1330()*-0.123672);
}

double NNfunction_ng_chi02::synapse0x38ec100() {
   return (neuron0x38cc800()*0.0313224);
}

double NNfunction_ng_chi02::synapse0x38ec140() {
   return (neuron0x38ccab0()*0.0190371);
}

double NNfunction_ng_chi02::synapse0x38ec180() {
   return (neuron0x38ccdf0()*-0.410493);
}

double NNfunction_ng_chi02::synapse0x38ec1c0() {
   return (neuron0x38cd130()*-0.458864);
}

double NNfunction_ng_chi02::synapse0x38ec200() {
   return (neuron0x38cd470()*-0.00315997);
}

double NNfunction_ng_chi02::synapse0x38ec240() {
   return (neuron0x38cd7b0()*0.0773802);
}

double NNfunction_ng_chi02::synapse0x38ec280() {
   return (neuron0x38cdaf0()*-0.0205456);
}

double NNfunction_ng_chi02::synapse0x38ec2c0() {
   return (neuron0x38cde30()*0.118191);
}

double NNfunction_ng_chi02::synapse0x38ec300() {
   return (neuron0x38ce170()*-0.0169742);
}

double NNfunction_ng_chi02::synapse0x38ec340() {
   return (neuron0x38ce4b0()*0.0908963);
}

double NNfunction_ng_chi02::synapse0x38ec380() {
   return (neuron0x38ce7f0()*-0.0133699);
}

double NNfunction_ng_chi02::synapse0x38ec3c0() {
   return (neuron0x38ceb30()*-0.458643);
}

double NNfunction_ng_chi02::synapse0x38ec400() {
   return (neuron0x38cee70()*-1.17617);
}

double NNfunction_ng_chi02::synapse0x38ec440() {
   return (neuron0x38cf1b0()*0.00156829);
}

double NNfunction_ng_chi02::synapse0x38ec480() {
   return (neuron0x38cf4f0()*0.359645);
}

double NNfunction_ng_chi02::synapse0x38ec4c0() {
   return (neuron0x38cf830()*0.117492);
}

double NNfunction_ng_chi02::synapse0x38ebf50() {
   return (neuron0x38cfb70()*-0.0409201);
}

double NNfunction_ng_chi02::synapse0x38ebf90() {
   return (neuron0x38d00d0()*0.216937);
}

double NNfunction_ng_chi02::synapse0x38ec610() {
   return (neuron0x38d02f0()*0.0701283);
}

double NNfunction_ng_chi02::synapse0x38ec650() {
   return (neuron0x38d0630()*-0.00831405);
}

double NNfunction_ng_chi02::synapse0x38ec690() {
   return (neuron0x38d0970()*-0.032233);
}

double NNfunction_ng_chi02::synapse0x38ec6d0() {
   return (neuron0x38d0cb0()*-0.0243419);
}

double NNfunction_ng_chi02::synapse0x38ec710() {
   return (neuron0x38d0ff0()*0.100101);
}

double NNfunction_ng_chi02::synapse0x38ec750() {
   return (neuron0x38d1330()*2.05334);
}

double NNfunction_ng_chi02::synapse0x38ecad0() {
   return (neuron0x38cc800()*-0.0691326);
}

double NNfunction_ng_chi02::synapse0x38ecb10() {
   return (neuron0x38ccab0()*1.06378);
}

double NNfunction_ng_chi02::synapse0x38ecb50() {
   return (neuron0x38ccdf0()*2.95675);
}

double NNfunction_ng_chi02::synapse0x38ecb90() {
   return (neuron0x38cd130()*-0.0141842);
}

double NNfunction_ng_chi02::synapse0x38ecbd0() {
   return (neuron0x38cd470()*-0.00932504);
}

double NNfunction_ng_chi02::synapse0x38ecc10() {
   return (neuron0x38cd7b0()*-0.0352098);
}

double NNfunction_ng_chi02::synapse0x38ecc50() {
   return (neuron0x38cdaf0()*-0.0423662);
}

double NNfunction_ng_chi02::synapse0x38ecc90() {
   return (neuron0x38cde30()*-0.0286961);
}

double NNfunction_ng_chi02::synapse0x38eccd0() {
   return (neuron0x38ce170()*0.0198198);
}

double NNfunction_ng_chi02::synapse0x38ecd10() {
   return (neuron0x38ce4b0()*0.0116959);
}

double NNfunction_ng_chi02::synapse0x38ecd50() {
   return (neuron0x38ce7f0()*0.032557);
}

double NNfunction_ng_chi02::synapse0x38ecd90() {
   return (neuron0x38ceb30()*0.442534);
}

double NNfunction_ng_chi02::synapse0x38ecdd0() {
   return (neuron0x38cee70()*0.0736448);
}

double NNfunction_ng_chi02::synapse0x38ece10() {
   return (neuron0x38cf1b0()*0.0262418);
}

double NNfunction_ng_chi02::synapse0x38ece50() {
   return (neuron0x38cf4f0()*-0.531561);
}

double NNfunction_ng_chi02::synapse0x38ece90() {
   return (neuron0x38cf830()*-0.0423124);
}

double NNfunction_ng_chi02::synapse0x38ec920() {
   return (neuron0x38cfb70()*0.00476929);
}

double NNfunction_ng_chi02::synapse0x38ec960() {
   return (neuron0x38d00d0()*-0.11763);
}

double NNfunction_ng_chi02::synapse0x38ecfe0() {
   return (neuron0x38d02f0()*-0.0160676);
}

double NNfunction_ng_chi02::synapse0x38ed020() {
   return (neuron0x38d0630()*-0.00711958);
}

double NNfunction_ng_chi02::synapse0x38ed060() {
   return (neuron0x38d0970()*-0.00337128);
}

double NNfunction_ng_chi02::synapse0x38ed0a0() {
   return (neuron0x38d0cb0()*-0.0215846);
}

double NNfunction_ng_chi02::synapse0x38ed0e0() {
   return (neuron0x38d0ff0()*0.00306197);
}

double NNfunction_ng_chi02::synapse0x38ed120() {
   return (neuron0x38d1330()*0.0399688);
}

double NNfunction_ng_chi02::synapse0x38ed4a0() {
   return (neuron0x38cc800()*0.0149627);
}

double NNfunction_ng_chi02::synapse0x38ed4e0() {
   return (neuron0x38ccab0()*-0.0381365);
}

double NNfunction_ng_chi02::synapse0x38ed520() {
   return (neuron0x38ccdf0()*0.187964);
}

double NNfunction_ng_chi02::synapse0x38ed560() {
   return (neuron0x38cd130()*-0.235663);
}

double NNfunction_ng_chi02::synapse0x38ed5a0() {
   return (neuron0x38cd470()*-0.0303764);
}

double NNfunction_ng_chi02::synapse0x38ed5e0() {
   return (neuron0x38cd7b0()*-0.0192761);
}

double NNfunction_ng_chi02::synapse0x38ed620() {
   return (neuron0x38cdaf0()*-0.0446138);
}

double NNfunction_ng_chi02::synapse0x38ed660() {
   return (neuron0x38cde30()*-0.0268518);
}

double NNfunction_ng_chi02::synapse0x38ed6a0() {
   return (neuron0x38ce170()*0.0342278);
}

double NNfunction_ng_chi02::synapse0x38ed6e0() {
   return (neuron0x38ce4b0()*0.0517617);
}

double NNfunction_ng_chi02::synapse0x38ed720() {
   return (neuron0x38ce7f0()*0.0399741);
}

double NNfunction_ng_chi02::synapse0x38ed760() {
   return (neuron0x38ceb30()*0.402886);
}

double NNfunction_ng_chi02::synapse0x38ed7a0() {
   return (neuron0x38cee70()*0.0810611);
}

double NNfunction_ng_chi02::synapse0x38ed7e0() {
   return (neuron0x38cf1b0()*-0.0187095);
}

double NNfunction_ng_chi02::synapse0x38ed820() {
   return (neuron0x38cf4f0()*-2.80836);
}

double NNfunction_ng_chi02::synapse0x38ed860() {
   return (neuron0x38cf830()*0.00084631);
}

double NNfunction_ng_chi02::synapse0x38ed2f0() {
   return (neuron0x38cfb70()*-0.0467768);
}

double NNfunction_ng_chi02::synapse0x38ed330() {
   return (neuron0x38d00d0()*0.249954);
}

double NNfunction_ng_chi02::synapse0x38ed9b0() {
   return (neuron0x38d02f0()*0.0505321);
}

double NNfunction_ng_chi02::synapse0x38ed9f0() {
   return (neuron0x38d0630()*0.00479049);
}

double NNfunction_ng_chi02::synapse0x38eda30() {
   return (neuron0x38d0970()*-0.013355);
}

double NNfunction_ng_chi02::synapse0x38eda70() {
   return (neuron0x38d0cb0()*-0.0278431);
}

double NNfunction_ng_chi02::synapse0x38edab0() {
   return (neuron0x38d0ff0()*0.0122693);
}

double NNfunction_ng_chi02::synapse0x38edaf0() {
   return (neuron0x38d1330()*0.127116);
}

double NNfunction_ng_chi02::synapse0x38ede70() {
   return (neuron0x38cc800()*-0.0775017);
}

double NNfunction_ng_chi02::synapse0x38edeb0() {
   return (neuron0x38ccab0()*-7.22684);
}

double NNfunction_ng_chi02::synapse0x38edef0() {
   return (neuron0x38ccdf0()*0.0338064);
}

double NNfunction_ng_chi02::synapse0x38edf30() {
   return (neuron0x38cd130()*0.0239708);
}

double NNfunction_ng_chi02::synapse0x38edf70() {
   return (neuron0x38cd470()*0.00382507);
}

double NNfunction_ng_chi02::synapse0x38edfb0() {
   return (neuron0x38cd7b0()*-0.00994913);
}

double NNfunction_ng_chi02::synapse0x38edff0() {
   return (neuron0x38cdaf0()*0.00565558);
}

double NNfunction_ng_chi02::synapse0x38ee030() {
   return (neuron0x38cde30()*-0.0166766);
}

double NNfunction_ng_chi02::synapse0x38ee070() {
   return (neuron0x38ce170()*-0.0107883);
}

double NNfunction_ng_chi02::synapse0x38ee0b0() {
   return (neuron0x38ce4b0()*0.0194318);
}

double NNfunction_ng_chi02::synapse0x38ee0f0() {
   return (neuron0x38ce7f0()*-0.0163302);
}

double NNfunction_ng_chi02::synapse0x38ee130() {
   return (neuron0x38ceb30()*0.0566105);
}

double NNfunction_ng_chi02::synapse0x38ee170() {
   return (neuron0x38cee70()*-0.0141683);
}

double NNfunction_ng_chi02::synapse0x38ee1b0() {
   return (neuron0x38cf1b0()*-0.012603);
}

double NNfunction_ng_chi02::synapse0x38ee1f0() {
   return (neuron0x38cf4f0()*0.0368437);
}

double NNfunction_ng_chi02::synapse0x38ee230() {
   return (neuron0x38cf830()*0.0102061);
}

double NNfunction_ng_chi02::synapse0x38edcc0() {
   return (neuron0x38cfb70()*-0.0350269);
}

double NNfunction_ng_chi02::synapse0x38edd00() {
   return (neuron0x38d00d0()*0.0305431);
}

double NNfunction_ng_chi02::synapse0x38ee380() {
   return (neuron0x38d02f0()*-0.00183349);
}

double NNfunction_ng_chi02::synapse0x38ee3c0() {
   return (neuron0x38d0630()*-0.0180729);
}

double NNfunction_ng_chi02::synapse0x38ee400() {
   return (neuron0x38d0970()*-0.0114483);
}

double NNfunction_ng_chi02::synapse0x38ee440() {
   return (neuron0x38d0cb0()*0.0080045);
}

double NNfunction_ng_chi02::synapse0x38ee480() {
   return (neuron0x38d0ff0()*0.00648788);
}

double NNfunction_ng_chi02::synapse0x38ee4c0() {
   return (neuron0x38d1330()*-0.0205053);
}

double NNfunction_ng_chi02::synapse0x38ee840() {
   return (neuron0x38cc800()*0.0696571);
}

double NNfunction_ng_chi02::synapse0x38ee880() {
   return (neuron0x38ccab0()*0.800237);
}

double NNfunction_ng_chi02::synapse0x38ee8c0() {
   return (neuron0x38ccdf0()*-1.35733);
}

double NNfunction_ng_chi02::synapse0x38ee900() {
   return (neuron0x38cd130()*-0.0165313);
}

double NNfunction_ng_chi02::synapse0x38ee940() {
   return (neuron0x38cd470()*-0.0204342);
}

double NNfunction_ng_chi02::synapse0x38ee980() {
   return (neuron0x38cd7b0()*-0.0177881);
}

double NNfunction_ng_chi02::synapse0x38ee9c0() {
   return (neuron0x38cdaf0()*-0.00533535);
}

double NNfunction_ng_chi02::synapse0x38eea00() {
   return (neuron0x38cde30()*-0.0359191);
}

double NNfunction_ng_chi02::synapse0x38eea40() {
   return (neuron0x38ce170()*-0.0436006);
}

double NNfunction_ng_chi02::synapse0x38eea80() {
   return (neuron0x38ce4b0()*0.101331);
}

double NNfunction_ng_chi02::synapse0x38eeac0() {
   return (neuron0x38ce7f0()*0.0395829);
}

double NNfunction_ng_chi02::synapse0x38eeb00() {
   return (neuron0x38ceb30()*0.87669);
}

double NNfunction_ng_chi02::synapse0x38eeb40() {
   return (neuron0x38cee70()*0.0212682);
}

double NNfunction_ng_chi02::synapse0x38eeb80() {
   return (neuron0x38cf1b0()*0.0709657);
}

double NNfunction_ng_chi02::synapse0x38eebc0() {
   return (neuron0x38cf4f0()*-0.221188);
}

double NNfunction_ng_chi02::synapse0x38eec00() {
   return (neuron0x38cf830()*0.0133018);
}

double NNfunction_ng_chi02::synapse0x38ee690() {
   return (neuron0x38cfb70()*0.0453923);
}

double NNfunction_ng_chi02::synapse0x38ee6d0() {
   return (neuron0x38d00d0()*-0.0164974);
}

double NNfunction_ng_chi02::synapse0x38eed50() {
   return (neuron0x38d02f0()*-0.0185355);
}

double NNfunction_ng_chi02::synapse0x38eed90() {
   return (neuron0x38d0630()*0.0186461);
}

double NNfunction_ng_chi02::synapse0x38eedd0() {
   return (neuron0x38d0970()*-0.07864);
}

double NNfunction_ng_chi02::synapse0x38eee10() {
   return (neuron0x38d0cb0()*0.0356646);
}

double NNfunction_ng_chi02::synapse0x38eee50() {
   return (neuron0x38d0ff0()*-0.0102243);
}

double NNfunction_ng_chi02::synapse0x38eee90() {
   return (neuron0x38d1330()*0.0294889);
}

double NNfunction_ng_chi02::synapse0x38d7940() {
   return (neuron0x38cc800()*0.0284811);
}

double NNfunction_ng_chi02::synapse0x38d7980() {
   return (neuron0x38ccab0()*-2.48025);
}

double NNfunction_ng_chi02::synapse0x38d79c0() {
   return (neuron0x38ccdf0()*0.369363);
}

double NNfunction_ng_chi02::synapse0x38d7a00() {
   return (neuron0x38cd130()*0.0193249);
}

double NNfunction_ng_chi02::synapse0x38d7a40() {
   return (neuron0x38cd470()*-0.0540599);
}

double NNfunction_ng_chi02::synapse0x38d7a80() {
   return (neuron0x38cd7b0()*-0.0407232);
}

double NNfunction_ng_chi02::synapse0x38d7ac0() {
   return (neuron0x38cdaf0()*-0.0601213);
}

double NNfunction_ng_chi02::synapse0x38d7b00() {
   return (neuron0x38cde30()*0.0607015);
}

double NNfunction_ng_chi02::synapse0x38ef620() {
   return (neuron0x38ce170()*-0.0211757);
}

double NNfunction_ng_chi02::synapse0x38ef660() {
   return (neuron0x38ce4b0()*-0.0100962);
}

double NNfunction_ng_chi02::synapse0x38ef6a0() {
   return (neuron0x38ce7f0()*0.027602);
}

double NNfunction_ng_chi02::synapse0x38ef6e0() {
   return (neuron0x38ceb30()*-0.0489693);
}

double NNfunction_ng_chi02::synapse0x38ef720() {
   return (neuron0x38cee70()*-0.04793);
}

double NNfunction_ng_chi02::synapse0x38ef760() {
   return (neuron0x38cf1b0()*-0.108569);
}

double NNfunction_ng_chi02::synapse0x38ef7a0() {
   return (neuron0x38cf4f0()*1.2928);
}

double NNfunction_ng_chi02::synapse0x38ef7e0() {
   return (neuron0x38cf830()*-0.0869572);
}

double NNfunction_ng_chi02::synapse0x38ef060() {
   return (neuron0x38cfb70()*-0.0500045);
}

double NNfunction_ng_chi02::synapse0x38ef0a0() {
   return (neuron0x38d00d0()*-0.226933);
}

double NNfunction_ng_chi02::synapse0x38ef930() {
   return (neuron0x38d02f0()*-0.0231974);
}

double NNfunction_ng_chi02::synapse0x38ef970() {
   return (neuron0x38d0630()*0.0153303);
}

double NNfunction_ng_chi02::synapse0x38ef9b0() {
   return (neuron0x38d0970()*0.00195954);
}

double NNfunction_ng_chi02::synapse0x38ef9f0() {
   return (neuron0x38d0cb0()*-0.00331072);
}

double NNfunction_ng_chi02::synapse0x38efa30() {
   return (neuron0x38d0ff0()*-0.0244006);
}

double NNfunction_ng_chi02::synapse0x38efa70() {
   return (neuron0x38d1330()*-0.868168);
}

double NNfunction_ng_chi02::synapse0x38efdf0() {
   return (neuron0x38cc800()*-0.00792388);
}

double NNfunction_ng_chi02::synapse0x38efe30() {
   return (neuron0x38ccab0()*-0.132096);
}

double NNfunction_ng_chi02::synapse0x38efe70() {
   return (neuron0x38ccdf0()*-0.311836);
}

double NNfunction_ng_chi02::synapse0x38efeb0() {
   return (neuron0x38cd130()*-1.43372);
}

double NNfunction_ng_chi02::synapse0x38efef0() {
   return (neuron0x38cd470()*-0.155796);
}

double NNfunction_ng_chi02::synapse0x38eff30() {
   return (neuron0x38cd7b0()*-0.105412);
}

double NNfunction_ng_chi02::synapse0x38eff70() {
   return (neuron0x38cdaf0()*-0.0801302);
}

double NNfunction_ng_chi02::synapse0x38effb0() {
   return (neuron0x38cde30()*-0.0360099);
}

double NNfunction_ng_chi02::synapse0x38efff0() {
   return (neuron0x38ce170()*-0.278282);
}

double NNfunction_ng_chi02::synapse0x38f0030() {
   return (neuron0x38ce4b0()*0.153343);
}

double NNfunction_ng_chi02::synapse0x38f0070() {
   return (neuron0x38ce7f0()*-0.199385);
}

double NNfunction_ng_chi02::synapse0x38f00b0() {
   return (neuron0x38ceb30()*0.677713);
}

double NNfunction_ng_chi02::synapse0x38f00f0() {
   return (neuron0x38cee70()*-0.152715);
}

double NNfunction_ng_chi02::synapse0x38f0130() {
   return (neuron0x38cf1b0()*0.117673);
}

double NNfunction_ng_chi02::synapse0x38f0170() {
   return (neuron0x38cf4f0()*-0.367318);
}

double NNfunction_ng_chi02::synapse0x38f01b0() {
   return (neuron0x38cf830()*0.116088);
}

double NNfunction_ng_chi02::synapse0x38efc40() {
   return (neuron0x38cfb70()*-0.202505);
}

double NNfunction_ng_chi02::synapse0x38efc80() {
   return (neuron0x38d00d0()*-0.818173);
}

double NNfunction_ng_chi02::synapse0x38f0300() {
   return (neuron0x38d02f0()*-0.446291);
}

double NNfunction_ng_chi02::synapse0x38f0340() {
   return (neuron0x38d0630()*-0.0868866);
}

double NNfunction_ng_chi02::synapse0x38f0380() {
   return (neuron0x38d0970()*0.379288);
}

double NNfunction_ng_chi02::synapse0x38f03c0() {
   return (neuron0x38d0cb0()*-0.0825591);
}

double NNfunction_ng_chi02::synapse0x38f0400() {
   return (neuron0x38d0ff0()*-0.125257);
}

double NNfunction_ng_chi02::synapse0x38f0440() {
   return (neuron0x38d1330()*-0.0937389);
}

double NNfunction_ng_chi02::synapse0x38f07c0() {
   return (neuron0x38cc800()*-0.0344749);
}

double NNfunction_ng_chi02::synapse0x38f0800() {
   return (neuron0x38ccab0()*-0.0288772);
}

double NNfunction_ng_chi02::synapse0x38f0840() {
   return (neuron0x38ccdf0()*-0.105075);
}

double NNfunction_ng_chi02::synapse0x38f0880() {
   return (neuron0x38cd130()*0.772342);
}

double NNfunction_ng_chi02::synapse0x38f08c0() {
   return (neuron0x38cd470()*0.00163119);
}

double NNfunction_ng_chi02::synapse0x38f0900() {
   return (neuron0x38cd7b0()*-0.0018539);
}

double NNfunction_ng_chi02::synapse0x38f0940() {
   return (neuron0x38cdaf0()*-0.010078);
}

double NNfunction_ng_chi02::synapse0x38f0980() {
   return (neuron0x38cde30()*-0.00644039);
}

double NNfunction_ng_chi02::synapse0x38f09c0() {
   return (neuron0x38ce170()*-0.0140027);
}

double NNfunction_ng_chi02::synapse0x38f0a00() {
   return (neuron0x38ce4b0()*0.00298424);
}

double NNfunction_ng_chi02::synapse0x38f0a40() {
   return (neuron0x38ce7f0()*-0.00740981);
}

double NNfunction_ng_chi02::synapse0x38f0a80() {
   return (neuron0x38ceb30()*-0.0821788);
}

double NNfunction_ng_chi02::synapse0x38f0ac0() {
   return (neuron0x38cee70()*-0.0582154);
}

double NNfunction_ng_chi02::synapse0x38f0b00() {
   return (neuron0x38cf1b0()*-0.0110856);
}

double NNfunction_ng_chi02::synapse0x38f0b40() {
   return (neuron0x38cf4f0()*0.0845383);
}

double NNfunction_ng_chi02::synapse0x38f0b80() {
   return (neuron0x38cf830()*-0.019396);
}

double NNfunction_ng_chi02::synapse0x38f0610() {
   return (neuron0x38cfb70()*-0.00459406);
}

double NNfunction_ng_chi02::synapse0x38f0650() {
   return (neuron0x38d00d0()*-0.0451765);
}

double NNfunction_ng_chi02::synapse0x38e1180() {
   return (neuron0x38d02f0()*-0.0152324);
}

double NNfunction_ng_chi02::synapse0x38e11c0() {
   return (neuron0x38d0630()*-0.00334374);
}

double NNfunction_ng_chi02::synapse0x38e1200() {
   return (neuron0x38d0970()*-0.00334907);
}

double NNfunction_ng_chi02::synapse0x38e1240() {
   return (neuron0x38d0cb0()*0.0115551);
}

double NNfunction_ng_chi02::synapse0x38e1280() {
   return (neuron0x38d0ff0()*-0.00127348);
}

double NNfunction_ng_chi02::synapse0x38e12c0() {
   return (neuron0x38d1330()*-0.00588922);
}

double NNfunction_ng_chi02::synapse0x38e1640() {
   return (neuron0x38cc800()*-0.00375816);
}

double NNfunction_ng_chi02::synapse0x38e1680() {
   return (neuron0x38ccab0()*0.141057);
}

double NNfunction_ng_chi02::synapse0x38e16c0() {
   return (neuron0x38ccdf0()*-0.149575);
}

double NNfunction_ng_chi02::synapse0x38e1700() {
   return (neuron0x38cd130()*-3.55124);
}

double NNfunction_ng_chi02::synapse0x38e1740() {
   return (neuron0x38cd470()*0.0244341);
}

double NNfunction_ng_chi02::synapse0x38e1780() {
   return (neuron0x38cd7b0()*-0.0162842);
}

double NNfunction_ng_chi02::synapse0x38e17c0() {
   return (neuron0x38cdaf0()*-0.0531864);
}

double NNfunction_ng_chi02::synapse0x38e1800() {
   return (neuron0x38cde30()*-0.0385668);
}

double NNfunction_ng_chi02::synapse0x38e1840() {
   return (neuron0x38ce170()*-0.0107819);
}

double NNfunction_ng_chi02::synapse0x38e1880() {
   return (neuron0x38ce4b0()*-0.0022973);
}

double NNfunction_ng_chi02::synapse0x38e18c0() {
   return (neuron0x38ce7f0()*-0.0114615);
}

double NNfunction_ng_chi02::synapse0x38e1900() {
   return (neuron0x38ceb30()*-0.332256);
}

double NNfunction_ng_chi02::synapse0x38e1940() {
   return (neuron0x38cee70()*-0.236779);
}

double NNfunction_ng_chi02::synapse0x38e1980() {
   return (neuron0x38cf1b0()*-0.00467677);
}

double NNfunction_ng_chi02::synapse0x38e19c0() {
   return (neuron0x38cf4f0()*-0.0531024);
}

double NNfunction_ng_chi02::synapse0x38e1a00() {
   return (neuron0x38cf830()*-0.107886);
}

double NNfunction_ng_chi02::synapse0x38e1490() {
   return (neuron0x38cfb70()*0.0282275);
}

double NNfunction_ng_chi02::synapse0x38e14d0() {
   return (neuron0x38d00d0()*0.00778753);
}

double NNfunction_ng_chi02::synapse0x38e1b50() {
   return (neuron0x38d02f0()*-0.0381182);
}

double NNfunction_ng_chi02::synapse0x38e1b90() {
   return (neuron0x38d0630()*0.0231104);
}

double NNfunction_ng_chi02::synapse0x38e1bd0() {
   return (neuron0x38d0970()*-8.06023e-05);
}

double NNfunction_ng_chi02::synapse0x38e1c10() {
   return (neuron0x38d0cb0()*0.00729589);
}

double NNfunction_ng_chi02::synapse0x38e1c50() {
   return (neuron0x38d0ff0()*0.0280855);
}

double NNfunction_ng_chi02::synapse0x38e1c90() {
   return (neuron0x38d1330()*-0.145309);
}

double NNfunction_ng_chi02::synapse0x38e2010() {
   return (neuron0x38cc800()*-0.0809996);
}

double NNfunction_ng_chi02::synapse0x38e2050() {
   return (neuron0x38ccab0()*5.24714);
}

double NNfunction_ng_chi02::synapse0x38e2090() {
   return (neuron0x38ccdf0()*0.222003);
}

double NNfunction_ng_chi02::synapse0x38e20d0() {
   return (neuron0x38cd130()*-0.0120291);
}

double NNfunction_ng_chi02::synapse0x38e2110() {
   return (neuron0x38cd470()*-0.0655572);
}

double NNfunction_ng_chi02::synapse0x38e2150() {
   return (neuron0x38cd7b0()*-0.00830479);
}

double NNfunction_ng_chi02::synapse0x38e2190() {
   return (neuron0x38cdaf0()*-0.0270074);
}

double NNfunction_ng_chi02::synapse0x38e21d0() {
   return (neuron0x38cde30()*0.00689488);
}

double NNfunction_ng_chi02::synapse0x38e2210() {
   return (neuron0x38ce170()*0.0383001);
}

double NNfunction_ng_chi02::synapse0x38e2250() {
   return (neuron0x38ce4b0()*-0.0275286);
}

double NNfunction_ng_chi02::synapse0x38e2290() {
   return (neuron0x38ce7f0()*-0.0103887);
}

double NNfunction_ng_chi02::synapse0x38e22d0() {
   return (neuron0x38ceb30()*-0.113008);
}

double NNfunction_ng_chi02::synapse0x38e2310() {
   return (neuron0x38cee70()*-0.00789127);
}

double NNfunction_ng_chi02::synapse0x38e2350() {
   return (neuron0x38cf1b0()*-0.0675267);
}

double NNfunction_ng_chi02::synapse0x38e2390() {
   return (neuron0x38cf4f0()*-0.0139569);
}

double NNfunction_ng_chi02::synapse0x38e23d0() {
   return (neuron0x38cf830()*0.0160232);
}

double NNfunction_ng_chi02::synapse0x38e1e60() {
   return (neuron0x38cfb70()*-0.0323568);
}

double NNfunction_ng_chi02::synapse0x38e1ea0() {
   return (neuron0x38d00d0()*0.051967);
}

double NNfunction_ng_chi02::synapse0x38e2520() {
   return (neuron0x38d02f0()*0.0447263);
}

double NNfunction_ng_chi02::synapse0x38e2560() {
   return (neuron0x38d0630()*0.00988986);
}

double NNfunction_ng_chi02::synapse0x38e25a0() {
   return (neuron0x38d0970()*-0.0228817);
}

double NNfunction_ng_chi02::synapse0x38e25e0() {
   return (neuron0x38d0cb0()*0.0549212);
}

double NNfunction_ng_chi02::synapse0x38e2620() {
   return (neuron0x38d0ff0()*-0.0400423);
}

double NNfunction_ng_chi02::synapse0x38e2660() {
   return (neuron0x38d1330()*-2.6984);
}

double NNfunction_ng_chi02::synapse0x38e29e0() {
   return (neuron0x38cc800()*-0.0164422);
}

double NNfunction_ng_chi02::synapse0x38e2a20() {
   return (neuron0x38ccab0()*5.34012);
}

double NNfunction_ng_chi02::synapse0x38e2a60() {
   return (neuron0x38ccdf0()*0.791328);
}

double NNfunction_ng_chi02::synapse0x38e2aa0() {
   return (neuron0x38cd130()*0.0238408);
}

double NNfunction_ng_chi02::synapse0x38e2ae0() {
   return (neuron0x38cd470()*0.0207546);
}

double NNfunction_ng_chi02::synapse0x38e2b20() {
   return (neuron0x38cd7b0()*0.0388935);
}

double NNfunction_ng_chi02::synapse0x38e2b60() {
   return (neuron0x38cdaf0()*-0.000194194);
}

double NNfunction_ng_chi02::synapse0x38e2ba0() {
   return (neuron0x38cde30()*-0.0175375);
}

double NNfunction_ng_chi02::synapse0x38e2be0() {
   return (neuron0x38ce170()*-0.0226278);
}

double NNfunction_ng_chi02::synapse0x38e2c20() {
   return (neuron0x38ce4b0()*0.0426222);
}

double NNfunction_ng_chi02::synapse0x38e2c60() {
   return (neuron0x38ce7f0()*-0.0462713);
}

double NNfunction_ng_chi02::synapse0x38e2ca0() {
   return (neuron0x38ceb30()*0.0257279);
}

double NNfunction_ng_chi02::synapse0x38e2ce0() {
   return (neuron0x38cee70()*-0.0174349);
}

double NNfunction_ng_chi02::synapse0x38e2d20() {
   return (neuron0x38cf1b0()*-0.0201624);
}

double NNfunction_ng_chi02::synapse0x38e2d60() {
   return (neuron0x38cf4f0()*-0.128298);
}

double NNfunction_ng_chi02::synapse0x38e2da0() {
   return (neuron0x38cf830()*0.0108205);
}

double NNfunction_ng_chi02::synapse0x38e2830() {
   return (neuron0x38cfb70()*-0.0428792);
}

double NNfunction_ng_chi02::synapse0x38e2870() {
   return (neuron0x38d00d0()*-0.0258635);
}

double NNfunction_ng_chi02::synapse0x38e2ef0() {
   return (neuron0x38d02f0()*0.0311176);
}

double NNfunction_ng_chi02::synapse0x38e2f30() {
   return (neuron0x38d0630()*-0.0657114);
}

double NNfunction_ng_chi02::synapse0x38e2f70() {
   return (neuron0x38d0970()*0.0521449);
}

double NNfunction_ng_chi02::synapse0x38e2fb0() {
   return (neuron0x38d0cb0()*0.0321273);
}

double NNfunction_ng_chi02::synapse0x38e2ff0() {
   return (neuron0x38d0ff0()*-0.0354253);
}

double NNfunction_ng_chi02::synapse0x38e3030() {
   return (neuron0x38d1330()*2.32575);
}

double NNfunction_ng_chi02::synapse0x38f4f00() {
   return (neuron0x38cc800()*-0.009114);
}

double NNfunction_ng_chi02::synapse0x38f4f40() {
   return (neuron0x38ccab0()*0.0388665);
}

double NNfunction_ng_chi02::synapse0x38f4f80() {
   return (neuron0x38ccdf0()*-0.169217);
}

double NNfunction_ng_chi02::synapse0x38f4fc0() {
   return (neuron0x38cd130()*-1.24471);
}

double NNfunction_ng_chi02::synapse0x38f5000() {
   return (neuron0x38cd470()*-0.00759388);
}

double NNfunction_ng_chi02::synapse0x38f5040() {
   return (neuron0x38cd7b0()*-0.00583159);
}

double NNfunction_ng_chi02::synapse0x38f5080() {
   return (neuron0x38cdaf0()*-0.0144378);
}

double NNfunction_ng_chi02::synapse0x38f50c0() {
   return (neuron0x38cde30()*-0.00867488);
}

double NNfunction_ng_chi02::synapse0x38f5100() {
   return (neuron0x38ce170()*-0.0215449);
}

double NNfunction_ng_chi02::synapse0x38f5140() {
   return (neuron0x38ce4b0()*-0.00104833);
}

double NNfunction_ng_chi02::synapse0x38f5180() {
   return (neuron0x38ce7f0()*-0.0166711);
}

double NNfunction_ng_chi02::synapse0x38f51c0() {
   return (neuron0x38ceb30()*-0.191087);
}

double NNfunction_ng_chi02::synapse0x38f5200() {
   return (neuron0x38cee70()*-0.0311117);
}

double NNfunction_ng_chi02::synapse0x38f5240() {
   return (neuron0x38cf1b0()*-0.0179505);
}

double NNfunction_ng_chi02::synapse0x38f5280() {
   return (neuron0x38cf4f0()*0.126774);
}

double NNfunction_ng_chi02::synapse0x38f52c0() {
   return (neuron0x38cf830()*-0.00883315);
}

double NNfunction_ng_chi02::synapse0x38e3070() {
   return (neuron0x38cfb70()*0.00850344);
}

double NNfunction_ng_chi02::synapse0x38e30b0() {
   return (neuron0x38d00d0()*-0.00496514);
}

double NNfunction_ng_chi02::synapse0x38f5410() {
   return (neuron0x38d02f0()*0.012207);
}

double NNfunction_ng_chi02::synapse0x38f5450() {
   return (neuron0x38d0630()*-0.0126096);
}

double NNfunction_ng_chi02::synapse0x38f5490() {
   return (neuron0x38d0970()*0.0222889);
}

double NNfunction_ng_chi02::synapse0x38f54d0() {
   return (neuron0x38d0cb0()*-0.00482353);
}

double NNfunction_ng_chi02::synapse0x38f5510() {
   return (neuron0x38d0ff0()*0.00539332);
}

double NNfunction_ng_chi02::synapse0x38f5550() {
   return (neuron0x38d1330()*0.0440646);
}

double NNfunction_ng_chi02::synapse0x38f58d0() {
   return (neuron0x38cc800()*-0.050128);
}

double NNfunction_ng_chi02::synapse0x38f5910() {
   return (neuron0x38ccab0()*-8.9113);
}

double NNfunction_ng_chi02::synapse0x38f5950() {
   return (neuron0x38ccdf0()*-0.988536);
}

double NNfunction_ng_chi02::synapse0x38f5990() {
   return (neuron0x38cd130()*0.0124024);
}

double NNfunction_ng_chi02::synapse0x38f59d0() {
   return (neuron0x38cd470()*-0.00262199);
}

double NNfunction_ng_chi02::synapse0x38f5a10() {
   return (neuron0x38cd7b0()*-0.0225687);
}

double NNfunction_ng_chi02::synapse0x38f5a50() {
   return (neuron0x38cdaf0()*0.013273);
}

double NNfunction_ng_chi02::synapse0x38f5a90() {
   return (neuron0x38cde30()*-0.0206241);
}

double NNfunction_ng_chi02::synapse0x38f5ad0() {
   return (neuron0x38ce170()*0.00851164);
}

double NNfunction_ng_chi02::synapse0x38f5b10() {
   return (neuron0x38ce4b0()*0.0238766);
}

double NNfunction_ng_chi02::synapse0x38f5b50() {
   return (neuron0x38ce7f0()*0.0104432);
}

double NNfunction_ng_chi02::synapse0x38f5b90() {
   return (neuron0x38ceb30()*-0.196056);
}

double NNfunction_ng_chi02::synapse0x38f5bd0() {
   return (neuron0x38cee70()*-0.061162);
}

double NNfunction_ng_chi02::synapse0x38f5c10() {
   return (neuron0x38cf1b0()*-0.0328396);
}

double NNfunction_ng_chi02::synapse0x38f5c50() {
   return (neuron0x38cf4f0()*0.27698);
}

double NNfunction_ng_chi02::synapse0x38f5c90() {
   return (neuron0x38cf830()*-0.0235741);
}

double NNfunction_ng_chi02::synapse0x38f5720() {
   return (neuron0x38cfb70()*-0.0393075);
}

double NNfunction_ng_chi02::synapse0x38f5760() {
   return (neuron0x38d00d0()*0.0460149);
}

double NNfunction_ng_chi02::synapse0x38f5de0() {
   return (neuron0x38d02f0()*-0.0220772);
}

double NNfunction_ng_chi02::synapse0x38f5e20() {
   return (neuron0x38d0630()*-0.0182133);
}

double NNfunction_ng_chi02::synapse0x38f5e60() {
   return (neuron0x38d0970()*-0.00572538);
}

double NNfunction_ng_chi02::synapse0x38f5ea0() {
   return (neuron0x38d0cb0()*0.0200717);
}

double NNfunction_ng_chi02::synapse0x38f5ee0() {
   return (neuron0x38d0ff0()*0.00199019);
}

double NNfunction_ng_chi02::synapse0x38f5f20() {
   return (neuron0x38d1330()*0.00377178);
}

double NNfunction_ng_chi02::synapse0x38f62a0() {
   return (neuron0x38cc800()*0.043643);
}

double NNfunction_ng_chi02::synapse0x38f62e0() {
   return (neuron0x38ccab0()*9.19596);
}

double NNfunction_ng_chi02::synapse0x38f6320() {
   return (neuron0x38ccdf0()*-1.02853);
}

double NNfunction_ng_chi02::synapse0x38f6360() {
   return (neuron0x38cd130()*0.041801);
}

double NNfunction_ng_chi02::synapse0x38f63a0() {
   return (neuron0x38cd470()*0.00682699);
}

double NNfunction_ng_chi02::synapse0x38f63e0() {
   return (neuron0x38cd7b0()*0.0593287);
}

double NNfunction_ng_chi02::synapse0x38f6420() {
   return (neuron0x38cdaf0()*0.000262983);
}

double NNfunction_ng_chi02::synapse0x38f6460() {
   return (neuron0x38cde30()*0.0318073);
}

double NNfunction_ng_chi02::synapse0x38f64a0() {
   return (neuron0x38ce170()*-0.0255362);
}

double NNfunction_ng_chi02::synapse0x38f64e0() {
   return (neuron0x38ce4b0()*-0.020057);
}

double NNfunction_ng_chi02::synapse0x38f6520() {
   return (neuron0x38ce7f0()*-0.0267956);
}

double NNfunction_ng_chi02::synapse0x38f6560() {
   return (neuron0x38ceb30()*-0.486546);
}

double NNfunction_ng_chi02::synapse0x38f65a0() {
   return (neuron0x38cee70()*-0.015531);
}

double NNfunction_ng_chi02::synapse0x38f65e0() {
   return (neuron0x38cf1b0()*0.0275516);
}

double NNfunction_ng_chi02::synapse0x38f6620() {
   return (neuron0x38cf4f0()*0.131132);
}

double NNfunction_ng_chi02::synapse0x38f6660() {
   return (neuron0x38cf830()*0.0801649);
}

double NNfunction_ng_chi02::synapse0x38f60f0() {
   return (neuron0x38cfb70()*0.0355665);
}

double NNfunction_ng_chi02::synapse0x38f6130() {
   return (neuron0x38d00d0()*0.0436806);
}

double NNfunction_ng_chi02::synapse0x38f67b0() {
   return (neuron0x38d02f0()*0.00844033);
}

double NNfunction_ng_chi02::synapse0x38f67f0() {
   return (neuron0x38d0630()*-0.00457046);
}

double NNfunction_ng_chi02::synapse0x38f6830() {
   return (neuron0x38d0970()*-0.0327221);
}

double NNfunction_ng_chi02::synapse0x38f6870() {
   return (neuron0x38d0cb0()*-0.00550696);
}

double NNfunction_ng_chi02::synapse0x38f68b0() {
   return (neuron0x38d0ff0()*0.00122453);
}

double NNfunction_ng_chi02::synapse0x38f68f0() {
   return (neuron0x38d1330()*-0.0992076);
}

double NNfunction_ng_chi02::synapse0x38f6c70() {
   return (neuron0x38cc800()*-0.0618197);
}

double NNfunction_ng_chi02::synapse0x38f6cb0() {
   return (neuron0x38ccab0()*0.0310492);
}

double NNfunction_ng_chi02::synapse0x38f6cf0() {
   return (neuron0x38ccdf0()*0.133015);
}

double NNfunction_ng_chi02::synapse0x38f6d30() {
   return (neuron0x38cd130()*0.672599);
}

double NNfunction_ng_chi02::synapse0x38f6d70() {
   return (neuron0x38cd470()*0.0806151);
}

double NNfunction_ng_chi02::synapse0x38f6db0() {
   return (neuron0x38cd7b0()*-0.0495988);
}

double NNfunction_ng_chi02::synapse0x38f6df0() {
   return (neuron0x38cdaf0()*0.011292);
}

double NNfunction_ng_chi02::synapse0x38f6e30() {
   return (neuron0x38cde30()*-0.0296225);
}

double NNfunction_ng_chi02::synapse0x38f6e70() {
   return (neuron0x38ce170()*0.0304734);
}

double NNfunction_ng_chi02::synapse0x38f6eb0() {
   return (neuron0x38ce4b0()*0.0550264);
}

double NNfunction_ng_chi02::synapse0x38f6ef0() {
   return (neuron0x38ce7f0()*0.0611776);
}

double NNfunction_ng_chi02::synapse0x38f6f30() {
   return (neuron0x38ceb30()*-0.67799);
}

double NNfunction_ng_chi02::synapse0x38f6f70() {
   return (neuron0x38cee70()*1.62327);
}

double NNfunction_ng_chi02::synapse0x38f6fb0() {
   return (neuron0x38cf1b0()*-0.0525112);
}

double NNfunction_ng_chi02::synapse0x38f6ff0() {
   return (neuron0x38cf4f0()*-0.195627);
}

double NNfunction_ng_chi02::synapse0x38f7030() {
   return (neuron0x38cf830()*-0.055843);
}

double NNfunction_ng_chi02::synapse0x38f6ac0() {
   return (neuron0x38cfb70()*0.0173169);
}

double NNfunction_ng_chi02::synapse0x38f6b00() {
   return (neuron0x38d00d0()*-0.0930124);
}

double NNfunction_ng_chi02::synapse0x38f7180() {
   return (neuron0x38d02f0()*-0.0365699);
}

double NNfunction_ng_chi02::synapse0x38f71c0() {
   return (neuron0x38d0630()*0.0407833);
}

double NNfunction_ng_chi02::synapse0x38f7200() {
   return (neuron0x38d0970()*-0.0648877);
}

double NNfunction_ng_chi02::synapse0x38f7240() {
   return (neuron0x38d0cb0()*0.0186776);
}

double NNfunction_ng_chi02::synapse0x38f7280() {
   return (neuron0x38d0ff0()*0.00182106);
}

double NNfunction_ng_chi02::synapse0x38f72c0() {
   return (neuron0x38d1330()*-0.165293);
}

double NNfunction_ng_chi02::synapse0x36970a0() {
   return (neuron0x38d17a0()*-0.789612);
}

double NNfunction_ng_chi02::synapse0x36970e0() {
   return (neuron0x38d20f0()*-0.345231);
}

double NNfunction_ng_chi02::synapse0x38d3c60() {
   return (neuron0x38d2bd0()*0.388307);
}

double NNfunction_ng_chi02::synapse0x38d3ca0() {
   return (neuron0x38d2670()*0.176976);
}

double NNfunction_ng_chi02::synapse0x38d5740() {
   return (neuron0x38d39b0()*0.875524);
}

double NNfunction_ng_chi02::synapse0x38d5780() {
   return (neuron0x38d5490()*-1.00021);
}

double NNfunction_ng_chi02::synapse0x38d6510() {
   return (neuron0x38d6260()*-0.615131);
}

double NNfunction_ng_chi02::synapse0x38d6550() {
   return (neuron0x38d6c30()*0.105796);
}

double NNfunction_ng_chi02::synapse0x38d6ee0() {
   return (neuron0x38d7600()*-0.76858);
}

double NNfunction_ng_chi02::synapse0x38d6f20() {
   return (neuron0x38d80e0()*-0.760042);
}

double NNfunction_ng_chi02::synapse0x38d78b0() {
   return (neuron0x38d8ab0()*0.26791);
}

double NNfunction_ng_chi02::synapse0x38d78f0() {
   return (neuron0x38d5b90()*-0.5412);
}

double NNfunction_ng_chi02::synapse0x38d8390() {
   return (neuron0x38da660()*0.21712);
}

double NNfunction_ng_chi02::synapse0x38d83d0() {
   return (neuron0x38db030()*0.368673);
}

double NNfunction_ng_chi02::synapse0x38d8d60() {
   return (neuron0x38dba00()*0.367835);
}

double NNfunction_ng_chi02::synapse0x38d8da0() {
   return (neuron0x38dc3d0()*-0.794758);
}

double NNfunction_ng_chi02::synapse0x38d5e40() {
   return (neuron0x38de1e0()*0.276625);
}

double NNfunction_ng_chi02::synapse0x38d5e80() {
   return (neuron0x38de4c0()*1.94777);
}

double NNfunction_ng_chi02::synapse0x38da910() {
   return (neuron0x38dee90()*1.10722);
}

double NNfunction_ng_chi02::synapse0x38da950() {
   return (neuron0x38df860()*0.391034);
}

double NNfunction_ng_chi02::synapse0x38db2e0() {
   return (neuron0x38e0230()*0.467178);
}

double NNfunction_ng_chi02::synapse0x38db320() {
   return (neuron0x38e0c00()*0.0872641);
}

double NNfunction_ng_chi02::synapse0x38dbcb0() {
   return (neuron0x38d9750()*-1.00933);
}

double NNfunction_ng_chi02::synapse0x38dbcf0() {
   return (neuron0x38da120()*-0.342749);
}

double NNfunction_ng_chi02::synapse0x38dc680() {
   return (neuron0x38e3990()*0.158775);
}

double NNfunction_ng_chi02::synapse0x38dc6c0() {
   return (neuron0x38e4360()*1.20648);
}

double NNfunction_ng_chi02::synapse0x38cf710() {
   return (neuron0x38e4d30()*-0.114481);
}

double NNfunction_ng_chi02::synapse0x38cf750() {
   return (neuron0x38e5700()*1.73262);
}

double NNfunction_ng_chi02::synapse0x38de770() {
   return (neuron0x38e60d0()*0.253325);
}

double NNfunction_ng_chi02::synapse0x38de7b0() {
   return (neuron0x38e6aa0()*0.987642);
}

double NNfunction_ng_chi02::synapse0x38df140() {
   return (neuron0x38e7470()*0.302198);
}

double NNfunction_ng_chi02::synapse0x38df180() {
   return (neuron0x38e7e40()*-0.0638982);
}

double NNfunction_ng_chi02::synapse0x38dfb10() {
   return (neuron0x38dded0()*-0.484773);
}

double NNfunction_ng_chi02::synapse0x38dfb50() {
   return (neuron0x38eaa20()*-0.944001);
}

double NNfunction_ng_chi02::synapse0x38e04e0() {
   return (neuron0x38eb3f0()*-1.11336);
}

double NNfunction_ng_chi02::synapse0x38e0520() {
   return (neuron0x38ebdc0()*0.0536447);
}

double NNfunction_ng_chi02::synapse0x38e0eb0() {
   return (neuron0x38ec790()*-0.0830703);
}

double NNfunction_ng_chi02::synapse0x38e0ef0() {
   return (neuron0x38ed160()*0.00210053);
}

double NNfunction_ng_chi02::synapse0x38d9a00() {
   return (neuron0x38edb30()*-1.32221);
}

double NNfunction_ng_chi02::synapse0x38d9a40() {
   return (neuron0x38ee500()*-0.00198507);
}

double NNfunction_ng_chi02::synapse0x38e32b0() {
   return (neuron0x38eeed0()*0.254183);
}

double NNfunction_ng_chi02::synapse0x38e32f0() {
   return (neuron0x38efab0()*0.0879016);
}

double NNfunction_ng_chi02::synapse0x38e3c40() {
   return (neuron0x38f0480()*-2.73607);
}

double NNfunction_ng_chi02::synapse0x38e3c80() {
   return (neuron0x38e1300()*1.55942);
}

double NNfunction_ng_chi02::synapse0x38e4610() {
   return (neuron0x38e1cd0()*0.422015);
}

double NNfunction_ng_chi02::synapse0x38e4650() {
   return (neuron0x38e26a0()*-0.304803);
}

double NNfunction_ng_chi02::synapse0x38e4fe0() {
   return (neuron0x38f4ce0()*-0.0131461);
}

double NNfunction_ng_chi02::synapse0x38e5020() {
   return (neuron0x38f5590()*0.0186255);
}

double NNfunction_ng_chi02::synapse0x38e59b0() {
   return (neuron0x38f5f60()*0.355358);
}

double NNfunction_ng_chi02::synapse0x38e59f0() {
   return (neuron0x38f6930()*0.31267);
}

double NNfunction_ng_chi02::synapse0x38e80f0() {
   return (neuron0x38d17a0()*-0.20665);
}

double NNfunction_ng_chi02::synapse0x38e8130() {
   return (neuron0x38d20f0()*1.35843);
}

double NNfunction_ng_chi02::synapse0x38dd6b0() {
   return (neuron0x38d2bd0()*0.394241);
}

double NNfunction_ng_chi02::synapse0x38dd6f0() {
   return (neuron0x38d2670()*-1.21443);
}

double NNfunction_ng_chi02::synapse0x38eacd0() {
   return (neuron0x38d39b0()*1.53889);
}

double NNfunction_ng_chi02::synapse0x38ead10() {
   return (neuron0x38d5490()*-0.698482);
}

double NNfunction_ng_chi02::synapse0x38eb6a0() {
   return (neuron0x38d6260()*2.03568);
}

double NNfunction_ng_chi02::synapse0x38eb6e0() {
   return (neuron0x38d6c30()*-1.18638);
}

double NNfunction_ng_chi02::synapse0x38ec070() {
   return (neuron0x38d7600()*-0.270365);
}

double NNfunction_ng_chi02::synapse0x38ec0b0() {
   return (neuron0x38d80e0()*1.45737);
}

double NNfunction_ng_chi02::synapse0x38eca40() {
   return (neuron0x38d8ab0()*-1.0077);
}

double NNfunction_ng_chi02::synapse0x38eca80() {
   return (neuron0x38d5b90()*3.39944);
}

double NNfunction_ng_chi02::synapse0x38ed410() {
   return (neuron0x38da660()*0.297468);
}

double NNfunction_ng_chi02::synapse0x38ed450() {
   return (neuron0x38db030()*0.270835);
}

double NNfunction_ng_chi02::synapse0x38edde0() {
   return (neuron0x38dba00()*1.43468);
}

double NNfunction_ng_chi02::synapse0x38ede20() {
   return (neuron0x38dc3d0()*1.71926);
}

double NNfunction_ng_chi02::synapse0x38ee7b0() {
   return (neuron0x38de1e0()*1.22676);
}

double NNfunction_ng_chi02::synapse0x38ee7f0() {
   return (neuron0x38de4c0()*0.258451);
}

double NNfunction_ng_chi02::synapse0x38ef180() {
   return (neuron0x38dee90()*2.42146);
}

double NNfunction_ng_chi02::synapse0x38ef1c0() {
   return (neuron0x38df860()*-1.93148);
}

double NNfunction_ng_chi02::synapse0x38efd60() {
   return (neuron0x38e0230()*-1.17085);
}

double NNfunction_ng_chi02::synapse0x38efda0() {
   return (neuron0x38e0c00()*0.232872);
}

double NNfunction_ng_chi02::synapse0x38f0730() {
   return (neuron0x38d9750()*0.505656);
}

double NNfunction_ng_chi02::synapse0x38f0770() {
   return (neuron0x38da120()*-0.891845);
}

double NNfunction_ng_chi02::synapse0x38e15b0() {
   return (neuron0x38e3990()*1.03849);
}

double NNfunction_ng_chi02::synapse0x38e15f0() {
   return (neuron0x38e4360()*1.02867);
}

double NNfunction_ng_chi02::synapse0x38e1f80() {
   return (neuron0x38e4d30()*-1.59771);
}

double NNfunction_ng_chi02::synapse0x38e1fc0() {
   return (neuron0x38e5700()*0.1577);
}

double NNfunction_ng_chi02::synapse0x38e2950() {
   return (neuron0x38e60d0()*-0.239193);
}

double NNfunction_ng_chi02::synapse0x38e2990() {
   return (neuron0x38e6aa0()*-0.597542);
}

double NNfunction_ng_chi02::synapse0x38f4e70() {
   return (neuron0x38e7470()*-0.938412);
}

double NNfunction_ng_chi02::synapse0x38f4eb0() {
   return (neuron0x38e7e40()*-0.211308);
}

double NNfunction_ng_chi02::synapse0x38f5840() {
   return (neuron0x38dded0()*-0.281133);
}

double NNfunction_ng_chi02::synapse0x38f5880() {
   return (neuron0x38eaa20()*1.7264);
}

double NNfunction_ng_chi02::synapse0x38f6210() {
   return (neuron0x38eb3f0()*0.104594);
}

double NNfunction_ng_chi02::synapse0x38f6250() {
   return (neuron0x38ebdc0()*0.38134);
}

double NNfunction_ng_chi02::synapse0x38f6be0() {
   return (neuron0x38ec790()*1.47858);
}

double NNfunction_ng_chi02::synapse0x38f6c20() {
   return (neuron0x38ed160()*2.47232);
}

double NNfunction_ng_chi02::synapse0x38d1a50() {
   return (neuron0x38edb30()*-0.600837);
}

double NNfunction_ng_chi02::synapse0x38d1a90() {
   return (neuron0x38ee500()*-0.610954);
}

double NNfunction_ng_chi02::synapse0x38e6380() {
   return (neuron0x38eeed0()*-0.222772);
}

double NNfunction_ng_chi02::synapse0x38e63c0() {
   return (neuron0x38efab0()*0.0466013);
}

double NNfunction_ng_chi02::synapse0x38f7300() {
   return (neuron0x38f0480()*-0.584975);
}

double NNfunction_ng_chi02::synapse0x38f7340() {
   return (neuron0x38e1300()*-0.189659);
}

double NNfunction_ng_chi02::synapse0x38f7380() {
   return (neuron0x38e1cd0()*2.67601);
}

double NNfunction_ng_chi02::synapse0x38f73c0() {
   return (neuron0x38e26a0()*1.35022);
}

double NNfunction_ng_chi02::synapse0x38fe270() {
   return (neuron0x38f4ce0()*-0.120203);
}

double NNfunction_ng_chi02::synapse0x38fe2b0() {
   return (neuron0x38f5590()*-1.01937);
}

double NNfunction_ng_chi02::synapse0x38fe2f0() {
   return (neuron0x38f5f60()*0.990554);
}

double NNfunction_ng_chi02::synapse0x38fe330() {
   return (neuron0x38f6930()*0.181049);
}

double NNfunction_ng_chi02::synapse0x38fe6b0() {
   return (neuron0x38d17a0()*0.746578);
}

double NNfunction_ng_chi02::synapse0x38fe6f0() {
   return (neuron0x38d20f0()*0.0766321);
}

double NNfunction_ng_chi02::synapse0x38fe730() {
   return (neuron0x38d2bd0()*-0.15748);
}

double NNfunction_ng_chi02::synapse0x38fe770() {
   return (neuron0x38d2670()*-0.186531);
}

double NNfunction_ng_chi02::synapse0x38fe7b0() {
   return (neuron0x38d39b0()*-0.520225);
}

double NNfunction_ng_chi02::synapse0x38fe7f0() {
   return (neuron0x38d5490()*-0.895458);
}

double NNfunction_ng_chi02::synapse0x38fe830() {
   return (neuron0x38d6260()*0.0717715);
}

double NNfunction_ng_chi02::synapse0x38fe870() {
   return (neuron0x38d6c30()*0.656057);
}

double NNfunction_ng_chi02::synapse0x38fe8b0() {
   return (neuron0x38d7600()*0.104362);
}

double NNfunction_ng_chi02::synapse0x38fe8f0() {
   return (neuron0x38d80e0()*0.374027);
}

double NNfunction_ng_chi02::synapse0x38fe930() {
   return (neuron0x38d8ab0()*-0.321444);
}

double NNfunction_ng_chi02::synapse0x38fe970() {
   return (neuron0x38d5b90()*0.181083);
}

double NNfunction_ng_chi02::synapse0x38fe9b0() {
   return (neuron0x38da660()*-0.626856);
}

double NNfunction_ng_chi02::synapse0x38fe9f0() {
   return (neuron0x38db030()*0.923523);
}

double NNfunction_ng_chi02::synapse0x38fea30() {
   return (neuron0x38dba00()*-1.03352);
}

double NNfunction_ng_chi02::synapse0x38fea70() {
   return (neuron0x38dc3d0()*0.644461);
}

double NNfunction_ng_chi02::synapse0x38fe500() {
   return (neuron0x38de1e0()*-0.284039);
}

double NNfunction_ng_chi02::synapse0x38fe540() {
   return (neuron0x38de4c0()*-2.4008);
}

double NNfunction_ng_chi02::synapse0x38febc0() {
   return (neuron0x38dee90()*-0.758053);
}

double NNfunction_ng_chi02::synapse0x38fec00() {
   return (neuron0x38df860()*-0.470602);
}

double NNfunction_ng_chi02::synapse0x38fec40() {
   return (neuron0x38e0230()*1.81059);
}

double NNfunction_ng_chi02::synapse0x38fec80() {
   return (neuron0x38e0c00()*0.218881);
}

double NNfunction_ng_chi02::synapse0x38fecc0() {
   return (neuron0x38d9750()*2.32847);
}

double NNfunction_ng_chi02::synapse0x38fed00() {
   return (neuron0x38da120()*-1.04688);
}

double NNfunction_ng_chi02::synapse0x38fed40() {
   return (neuron0x38e3990()*0.211109);
}

double NNfunction_ng_chi02::synapse0x38fed80() {
   return (neuron0x38e4360()*-1.05177);
}

double NNfunction_ng_chi02::synapse0x38fedc0() {
   return (neuron0x38e4d30()*-1.24548);
}

double NNfunction_ng_chi02::synapse0x38fee00() {
   return (neuron0x38e5700()*-1.58077);
}

double NNfunction_ng_chi02::synapse0x38fee40() {
   return (neuron0x38e60d0()*-0.813098);
}

double NNfunction_ng_chi02::synapse0x38fee80() {
   return (neuron0x38e6aa0()*-2.43328);
}

double NNfunction_ng_chi02::synapse0x38feec0() {
   return (neuron0x38e7470()*0.203229);
}

double NNfunction_ng_chi02::synapse0x38fef00() {
   return (neuron0x38e7e40()*-0.0162893);
}

double NNfunction_ng_chi02::synapse0x38feab0() {
   return (neuron0x38dded0()*-0.682489);
}

double NNfunction_ng_chi02::synapse0x38feaf0() {
   return (neuron0x38eaa20()*0.386572);
}

double NNfunction_ng_chi02::synapse0x38feb30() {
   return (neuron0x38eb3f0()*1.38603);
}

double NNfunction_ng_chi02::synapse0x38feb70() {
   return (neuron0x38ebdc0()*0.72054);
}

double NNfunction_ng_chi02::synapse0x38ff150() {
   return (neuron0x38ec790()*-0.0239406);
}

double NNfunction_ng_chi02::synapse0x38ff190() {
   return (neuron0x38ed160()*1.4087);
}

double NNfunction_ng_chi02::synapse0x38ff1d0() {
   return (neuron0x38edb30()*1.21614);
}

double NNfunction_ng_chi02::synapse0x38ff210() {
   return (neuron0x38ee500()*0.0878378);
}

double NNfunction_ng_chi02::synapse0x38ff250() {
   return (neuron0x38eeed0()*-0.323981);
}

double NNfunction_ng_chi02::synapse0x38ff290() {
   return (neuron0x38efab0()*-0.155318);
}

double NNfunction_ng_chi02::synapse0x38ff2d0() {
   return (neuron0x38f0480()*2.25728);
}

double NNfunction_ng_chi02::synapse0x38ff310() {
   return (neuron0x38e1300()*-1.71653);
}

double NNfunction_ng_chi02::synapse0x38ff350() {
   return (neuron0x38e1cd0()*0.32236);
}

double NNfunction_ng_chi02::synapse0x38ff390() {
   return (neuron0x38e26a0()*-0.217799);
}

double NNfunction_ng_chi02::synapse0x38ff3d0() {
   return (neuron0x38f4ce0()*0.0282174);
}

double NNfunction_ng_chi02::synapse0x38ff410() {
   return (neuron0x38f5590()*0.284684);
}

double NNfunction_ng_chi02::synapse0x38ff450() {
   return (neuron0x38f5f60()*0.151897);
}

double NNfunction_ng_chi02::synapse0x38ff490() {
   return (neuron0x38f6930()*1.0545);
}

double NNfunction_ng_chi02::synapse0x38ff810() {
   return (neuron0x38d17a0()*1.36165);
}

double NNfunction_ng_chi02::synapse0x38ff850() {
   return (neuron0x38d20f0()*-0.427504);
}

double NNfunction_ng_chi02::synapse0x38ff890() {
   return (neuron0x38d2bd0()*-1.53713);
}

double NNfunction_ng_chi02::synapse0x38ff8d0() {
   return (neuron0x38d2670()*1.32365);
}

double NNfunction_ng_chi02::synapse0x38ff910() {
   return (neuron0x38d39b0()*-2.25068);
}

double NNfunction_ng_chi02::synapse0x38ff950() {
   return (neuron0x38d5490()*-0.10414);
}

double NNfunction_ng_chi02::synapse0x38ff990() {
   return (neuron0x38d6260()*0.70669);
}

double NNfunction_ng_chi02::synapse0x38ff9d0() {
   return (neuron0x38d6c30()*0.682568);
}

double NNfunction_ng_chi02::synapse0x38ffa10() {
   return (neuron0x38d7600()*0.656246);
}

double NNfunction_ng_chi02::synapse0x38ffa50() {
   return (neuron0x38d80e0()*-2.44168);
}

double NNfunction_ng_chi02::synapse0x38ffa90() {
   return (neuron0x38d8ab0()*1.94357);
}

double NNfunction_ng_chi02::synapse0x38ffad0() {
   return (neuron0x38d5b90()*1.61148);
}

double NNfunction_ng_chi02::synapse0x38ffb10() {
   return (neuron0x38da660()*-0.904558);
}

double NNfunction_ng_chi02::synapse0x38ffb50() {
   return (neuron0x38db030()*-0.11203);
}

double NNfunction_ng_chi02::synapse0x38ffb90() {
   return (neuron0x38dba00()*-0.736906);
}

double NNfunction_ng_chi02::synapse0x38ffbd0() {
   return (neuron0x38dc3d0()*1.62682);
}

double NNfunction_ng_chi02::synapse0x38ff660() {
   return (neuron0x38de1e0()*-0.649801);
}

double NNfunction_ng_chi02::synapse0x38ff6a0() {
   return (neuron0x38de4c0()*-0.041107);
}

double NNfunction_ng_chi02::synapse0x38ffd20() {
   return (neuron0x38dee90()*-2.12872);
}

double NNfunction_ng_chi02::synapse0x38ffd60() {
   return (neuron0x38df860()*0.861979);
}

double NNfunction_ng_chi02::synapse0x38ffda0() {
   return (neuron0x38e0230()*0.395852);
}

double NNfunction_ng_chi02::synapse0x38ffde0() {
   return (neuron0x38e0c00()*2.30517);
}

double NNfunction_ng_chi02::synapse0x38ffe20() {
   return (neuron0x38d9750()*6.42866);
}

double NNfunction_ng_chi02::synapse0x38ffe60() {
   return (neuron0x38da120()*-0.131754);
}

double NNfunction_ng_chi02::synapse0x38ffea0() {
   return (neuron0x38e3990()*-0.140974);
}

double NNfunction_ng_chi02::synapse0x38ffee0() {
   return (neuron0x38e4360()*2.5655);
}

double NNfunction_ng_chi02::synapse0x38fff20() {
   return (neuron0x38e4d30()*0.58407);
}

double NNfunction_ng_chi02::synapse0x38fff60() {
   return (neuron0x38e5700()*1.40845);
}

double NNfunction_ng_chi02::synapse0x38fffa0() {
   return (neuron0x38e60d0()*0.323881);
}

double NNfunction_ng_chi02::synapse0x38fffe0() {
   return (neuron0x38e6aa0()*-5.88749);
}

double NNfunction_ng_chi02::synapse0x3900020() {
   return (neuron0x38e7470()*2.07775);
}

double NNfunction_ng_chi02::synapse0x3900060() {
   return (neuron0x38e7e40()*0.574178);
}

double NNfunction_ng_chi02::synapse0x38ffc10() {
   return (neuron0x38dded0()*-0.0657189);
}

double NNfunction_ng_chi02::synapse0x38ffc50() {
   return (neuron0x38eaa20()*3.04922);
}

double NNfunction_ng_chi02::synapse0x38ffc90() {
   return (neuron0x38eb3f0()*-0.0233949);
}

double NNfunction_ng_chi02::synapse0x38ffcd0() {
   return (neuron0x38ebdc0()*0.371866);
}

double NNfunction_ng_chi02::synapse0x39002b0() {
   return (neuron0x38ec790()*-2.7527);
}

double NNfunction_ng_chi02::synapse0x39002f0() {
   return (neuron0x38ed160()*-0.162835);
}

double NNfunction_ng_chi02::synapse0x3900330() {
   return (neuron0x38edb30()*-1.99105);
}

double NNfunction_ng_chi02::synapse0x3900370() {
   return (neuron0x38ee500()*1.58248);
}

double NNfunction_ng_chi02::synapse0x39003b0() {
   return (neuron0x38eeed0()*-0.174537);
}

double NNfunction_ng_chi02::synapse0x39003f0() {
   return (neuron0x38efab0()*0.134451);
}

double NNfunction_ng_chi02::synapse0x3900430() {
   return (neuron0x38f0480()*0.192118);
}

double NNfunction_ng_chi02::synapse0x3900470() {
   return (neuron0x38e1300()*-0.208005);
}

double NNfunction_ng_chi02::synapse0x39004b0() {
   return (neuron0x38e1cd0()*2.2939);
}

double NNfunction_ng_chi02::synapse0x39004f0() {
   return (neuron0x38e26a0()*1.82516);
}

double NNfunction_ng_chi02::synapse0x3900530() {
   return (neuron0x38f4ce0()*-1.2252);
}

double NNfunction_ng_chi02::synapse0x3900570() {
   return (neuron0x38f5590()*-3.99126);
}

double NNfunction_ng_chi02::synapse0x39005b0() {
   return (neuron0x38f5f60()*-4.19326);
}

double NNfunction_ng_chi02::synapse0x39005f0() {
   return (neuron0x38f6930()*0.35393);
}

double NNfunction_ng_chi02::synapse0x3900970() {
   return (neuron0x38d17a0()*-0.487543);
}

double NNfunction_ng_chi02::synapse0x39009b0() {
   return (neuron0x38d20f0()*-0.204808);
}

double NNfunction_ng_chi02::synapse0x39009f0() {
   return (neuron0x38d2bd0()*0.0316473);
}

double NNfunction_ng_chi02::synapse0x3900a30() {
   return (neuron0x38d2670()*0.125958);
}

double NNfunction_ng_chi02::synapse0x3900a70() {
   return (neuron0x38d39b0()*0.552085);
}

double NNfunction_ng_chi02::synapse0x3900ab0() {
   return (neuron0x38d5490()*1.225);
}

double NNfunction_ng_chi02::synapse0x3900af0() {
   return (neuron0x38d6260()*-0.310855);
}

double NNfunction_ng_chi02::synapse0x3900b30() {
   return (neuron0x38d6c30()*-0.230192);
}

double NNfunction_ng_chi02::synapse0x3900b70() {
   return (neuron0x38d7600()*-0.315914);
}

double NNfunction_ng_chi02::synapse0x3900bb0() {
   return (neuron0x38d80e0()*-0.410012);
}

double NNfunction_ng_chi02::synapse0x3900bf0() {
   return (neuron0x38d8ab0()*0.170649);
}

double NNfunction_ng_chi02::synapse0x3900c30() {
   return (neuron0x38d5b90()*-0.28089);
}

double NNfunction_ng_chi02::synapse0x3900c70() {
   return (neuron0x38da660()*0.282404);
}

double NNfunction_ng_chi02::synapse0x3900cb0() {
   return (neuron0x38db030()*-0.148674);
}

double NNfunction_ng_chi02::synapse0x3900cf0() {
   return (neuron0x38dba00()*-0.0399165);
}

double NNfunction_ng_chi02::synapse0x3900d30() {
   return (neuron0x38dc3d0()*-0.462762);
}

double NNfunction_ng_chi02::synapse0x39007c0() {
   return (neuron0x38de1e0()*0.186222);
}

double NNfunction_ng_chi02::synapse0x3900800() {
   return (neuron0x38de4c0()*-1.58168);
}

double NNfunction_ng_chi02::synapse0x3900e80() {
   return (neuron0x38dee90()*0.72105);
}

double NNfunction_ng_chi02::synapse0x3900ec0() {
   return (neuron0x38df860()*0.248314);
}

double NNfunction_ng_chi02::synapse0x3900f00() {
   return (neuron0x38e0230()*-0.677053);
}

double NNfunction_ng_chi02::synapse0x3900f40() {
   return (neuron0x38e0c00()*-0.0560721);
}

double NNfunction_ng_chi02::synapse0x3900f80() {
   return (neuron0x38d9750()*-0.86269);
}

double NNfunction_ng_chi02::synapse0x3900fc0() {
   return (neuron0x38da120()*0.21066);
}

double NNfunction_ng_chi02::synapse0x3901000() {
   return (neuron0x38e3990()*-0.264437);
}

double NNfunction_ng_chi02::synapse0x3901040() {
   return (neuron0x38e4360()*0.850235);
}

double NNfunction_ng_chi02::synapse0x3901080() {
   return (neuron0x38e4d30()*-0.0055083);
}

double NNfunction_ng_chi02::synapse0x39010c0() {
   return (neuron0x38e5700()*0.968622);
}

double NNfunction_ng_chi02::synapse0x3901100() {
   return (neuron0x38e60d0()*0.19473);
}

double NNfunction_ng_chi02::synapse0x3901140() {
   return (neuron0x38e6aa0()*0.89404);
}

double NNfunction_ng_chi02::synapse0x3901180() {
   return (neuron0x38e7470()*0.176354);
}

double NNfunction_ng_chi02::synapse0x39011c0() {
   return (neuron0x38e7e40()*-0.227137);
}

double NNfunction_ng_chi02::synapse0x3900d70() {
   return (neuron0x38dded0()*0.162953);
}

double NNfunction_ng_chi02::synapse0x3900db0() {
   return (neuron0x38eaa20()*-0.464175);
}

double NNfunction_ng_chi02::synapse0x3900df0() {
   return (neuron0x38eb3f0()*0.0133049);
}

double NNfunction_ng_chi02::synapse0x3900e30() {
   return (neuron0x38ebdc0()*-0.143191);
}

double NNfunction_ng_chi02::synapse0x3901410() {
   return (neuron0x38ec790()*0.00768526);
}

double NNfunction_ng_chi02::synapse0x3901450() {
   return (neuron0x38ed160()*-0.425756);
}

double NNfunction_ng_chi02::synapse0x3901490() {
   return (neuron0x38edb30()*-0.706934);
}

double NNfunction_ng_chi02::synapse0x39014d0() {
   return (neuron0x38ee500()*0.0106532);
}

double NNfunction_ng_chi02::synapse0x3901510() {
   return (neuron0x38eeed0()*0.209249);
}

double NNfunction_ng_chi02::synapse0x3901550() {
   return (neuron0x38efab0()*-0.0217117);
}

double NNfunction_ng_chi02::synapse0x3901590() {
   return (neuron0x38f0480()*0.132203);
}

double NNfunction_ng_chi02::synapse0x39015d0() {
   return (neuron0x38e1300()*-0.443193);
}

double NNfunction_ng_chi02::synapse0x3901610() {
   return (neuron0x38e1cd0()*0.2364);
}

double NNfunction_ng_chi02::synapse0x3901650() {
   return (neuron0x38e26a0()*-0.128598);
}

double NNfunction_ng_chi02::synapse0x3901690() {
   return (neuron0x38f4ce0()*-1.27865);
}

double NNfunction_ng_chi02::synapse0x39016d0() {
   return (neuron0x38f5590()*-0.00255751);
}

double NNfunction_ng_chi02::synapse0x3901710() {
   return (neuron0x38f5f60()*0.171181);
}

double NNfunction_ng_chi02::synapse0x3901750() {
   return (neuron0x38f6930()*-0.350328);
}

double NNfunction_ng_chi02::synapse0x39019b0() {
   return (neuron0x38fdb30()*-5.23211);
}

double NNfunction_ng_chi02::synapse0x39019f0() {
   return (neuron0x38fded0()*-1.64576);
}

double NNfunction_ng_chi02::synapse0x3901a30() {
   return (neuron0x38fe370()*5.52013);
}

double NNfunction_ng_chi02::synapse0x3901a70() {
   return (neuron0x38ff4d0()*-3.65756);
}

double NNfunction_ng_chi02::synapse0x3901ab0() {
   return (neuron0x3900630()*-12.8483);
}

