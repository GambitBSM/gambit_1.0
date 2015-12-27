#include "NNfunction_nn_chi2_charge1p.h"
#include <cmath>

double NNfunction_nn_chi2_charge1p::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.6669)/15.1711;
   input1 = (in1 - 115.728)/740.038;
   input2 = (in2 - 482.07)/455.441;
   input3 = (in3 - 589.074)/894.231;
   input4 = (in4 - 1285.97)/971.135;
   input5 = (in5 - 1254.66)/1044.8;
   input6 = (in6 - 1257.29)/1043.88;
   input7 = (in7 - 1225.48)/1002.44;
   input8 = (in8 - 1241.19)/1052.36;
   input9 = (in9 - 1234.77)/1048.7;
   input10 = (in10 - 1176.24)/979.895;
   input11 = (in11 - 1349.86)/1092.28;
   input12 = (in12 - 1357.38)/1090.86;
   input13 = (in13 - 1057.08)/837.742;
   input14 = (in14 - 1351.04)/1070.71;
   input15 = (in15 - 1349.21)/1071.47;
   input16 = (in16 - 886.444)/668.528;
   input17 = (in17 - 1357.84)/1088.49;
   input18 = (in18 - 1355.98)/1089.48;
   input19 = (in19 - 1304.56)/1006.76;
   input20 = (in20 - -461.165)/712.569;
   input21 = (in21 - -628.377)/1332.5;
   input22 = (in22 - -97.6789)/1224.25;
   input23 = (in23 - 152.248)/672.612;
   switch(index) {
     case 0:
         return neuron0x3c5ace0();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi2_charge1p::Value(int index, double* input) {
   input0 = (input[0] - 23.6669)/15.1711;
   input1 = (input[1] - 115.728)/740.038;
   input2 = (input[2] - 482.07)/455.441;
   input3 = (input[3] - 589.074)/894.231;
   input4 = (input[4] - 1285.97)/971.135;
   input5 = (input[5] - 1254.66)/1044.8;
   input6 = (input[6] - 1257.29)/1043.88;
   input7 = (input[7] - 1225.48)/1002.44;
   input8 = (input[8] - 1241.19)/1052.36;
   input9 = (input[9] - 1234.77)/1048.7;
   input10 = (input[10] - 1176.24)/979.895;
   input11 = (input[11] - 1349.86)/1092.28;
   input12 = (input[12] - 1357.38)/1090.86;
   input13 = (input[13] - 1057.08)/837.742;
   input14 = (input[14] - 1351.04)/1070.71;
   input15 = (input[15] - 1349.21)/1071.47;
   input16 = (input[16] - 886.444)/668.528;
   input17 = (input[17] - 1357.84)/1088.49;
   input18 = (input[18] - 1355.98)/1089.48;
   input19 = (input[19] - 1304.56)/1006.76;
   input20 = (input[20] - -461.165)/712.569;
   input21 = (input[21] - -628.377)/1332.5;
   input22 = (input[22] - -97.6789)/1224.25;
   input23 = (input[23] - 152.248)/672.612;
   switch(index) {
     case 0:
         return neuron0x3c5ace0();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi2_charge1p::neuron0x3c25d50() {
   return input0;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c26000() {
   return input1;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c26340() {
   return input2;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c26680() {
   return input3;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c269c0() {
   return input4;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c26d00() {
   return input5;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c27040() {
   return input6;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c27380() {
   return input7;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c276c0() {
   return input8;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c27a00() {
   return input9;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c27d40() {
   return input10;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c28080() {
   return input11;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c283c0() {
   return input12;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c28700() {
   return input13;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c28a40() {
   return input14;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c28d80() {
   return input15;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c290c0() {
   return input16;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c29620() {
   return input17;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c29840() {
   return input18;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c29b80() {
   return input19;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c29ec0() {
   return input20;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c2a200() {
   return input21;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c2a540() {
   return input22;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c2a880() {
   return input23;
}

double NNfunction_nn_chi2_charge1p::input0x3c2acf0() {
   double input = 0.0947997;
   input += synapse0x3c2b030();
   input += synapse0x3c2b070();
   input += synapse0x3c2b0b0();
   input += synapse0x3c2b0f0();
   input += synapse0x3c2b130();
   input += synapse0x3c2b170();
   input += synapse0x3c2b1b0();
   input += synapse0x3c2b1f0();
   input += synapse0x3c2b230();
   input += synapse0x3c2b270();
   input += synapse0x3c2b2b0();
   input += synapse0x3c2b2f0();
   input += synapse0x3c2b330();
   input += synapse0x3c2b370();
   input += synapse0x3c2b3b0();
   input += synapse0x3c2b3f0();
   input += synapse0x3c2ae80();
   input += synapse0x3c2aec0();
   input += synapse0x26d9090();
   input += synapse0x26d90d0();
   input += synapse0x3c2b540();
   input += synapse0x3c2b580();
   input += synapse0x3c2b5c0();
   input += synapse0x3c2b600();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c2acf0() {
   double input = input0x3c2acf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c2b640() {
   double input = -1.66786;
   input += synapse0x3c2b980();
   input += synapse0x3c2b9c0();
   input += synapse0x3c2ba00();
   input += synapse0x3c2ba40();
   input += synapse0x3c2ba80();
   input += synapse0x3c2bac0();
   input += synapse0x3c2bb00();
   input += synapse0x3c2bb40();
   input += synapse0x3c2bb80();
   input += synapse0x3c2b430();
   input += synapse0x3c2b470();
   input += synapse0x3c2b4b0();
   input += synapse0x3c2b4f0();
   input += synapse0x3c2bdd0();
   input += synapse0x3c2be10();
   input += synapse0x3c2be50();
   input += synapse0x3c2b7d0();
   input += synapse0x3c2b810();
   input += synapse0x3c2bfa0();
   input += synapse0x3c2bfe0();
   input += synapse0x3c2c020();
   input += synapse0x3c2c060();
   input += synapse0x3c2c0a0();
   input += synapse0x3c2c0e0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c2b640() {
   double input = input0x3c2b640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c2c120() {
   double input = -7.72384;
   input += synapse0x3c2c460();
   input += synapse0x3c2c4a0();
   input += synapse0x3c2c4e0();
   input += synapse0x3c2c520();
   input += synapse0x3c2c560();
   input += synapse0x3c2c5a0();
   input += synapse0x3c2c5e0();
   input += synapse0x3c2c620();
   input += synapse0x3c2c660();
   input += synapse0x3c2c6a0();
   input += synapse0x3c2c6e0();
   input += synapse0x3c2c720();
   input += synapse0x3c2c760();
   input += synapse0x3c2c7a0();
   input += synapse0x3c2c7e0();
   input += synapse0x3c2c820();
   input += synapse0x3c2c2b0();
   input += synapse0x3c2c2f0();
   input += synapse0x2261f10();
   input += synapse0x39efe00();
   input += synapse0x39efe40();
   input += synapse0x3c2e760();
   input += synapse0x3c2e7a0();
   input += synapse0x3c25a90();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c2c120() {
   double input = input0x3c2c120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c2bbc0() {
   double input = -0.772505;
   input += synapse0x3c25b60();
   input += synapse0x39f0680();
   input += synapse0x3c2bd50();
   input += synapse0x3c2bd90();
   input += synapse0x3c2c970();
   input += synapse0x3c2c9b0();
   input += synapse0x3c2c9f0();
   input += synapse0x3c2ca30();
   input += synapse0x3c2ca70();
   input += synapse0x3c2cab0();
   input += synapse0x3c2caf0();
   input += synapse0x3c2cb30();
   input += synapse0x3c2cb70();
   input += synapse0x3c2cbb0();
   input += synapse0x3c2cbf0();
   input += synapse0x3c2cc30();
   input += synapse0x3c25ad0();
   input += synapse0x3c25b10();
   input += synapse0x3c2cd80();
   input += synapse0x3c2cdc0();
   input += synapse0x3c2ce00();
   input += synapse0x3c2ce40();
   input += synapse0x3c2ce80();
   input += synapse0x3c2cec0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c2bbc0() {
   double input = input0x3c2bbc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c2cf00() {
   double input = 1.08303;
   input += synapse0x3c2d240();
   input += synapse0x3c2d280();
   input += synapse0x3c2d2c0();
   input += synapse0x3c2d300();
   input += synapse0x3c2d340();
   input += synapse0x3c2d380();
   input += synapse0x3c2d3c0();
   input += synapse0x3c2d400();
   input += synapse0x3c2d440();
   input += synapse0x3c2d480();
   input += synapse0x3c2d4c0();
   input += synapse0x3c2d500();
   input += synapse0x3c2d540();
   input += synapse0x3c2d580();
   input += synapse0x3c2d5c0();
   input += synapse0x3c2d600();
   input += synapse0x3c2d750();
   input += synapse0x3c2d090();
   input += synapse0x3c2d0d0();
   input += synapse0x3c2e8a0();
   input += synapse0x3c2e8e0();
   input += synapse0x3c2e920();
   input += synapse0x3c2e960();
   input += synapse0x3c2e9a0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c2cf00() {
   double input = input0x3c2cf00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c2e9e0() {
   double input = 0.928807;
   input += synapse0x3c2ed20();
   input += synapse0x3c2ed60();
   input += synapse0x3c2eda0();
   input += synapse0x3c2ede0();
   input += synapse0x3c2ee20();
   input += synapse0x3c2ee60();
   input += synapse0x3c2eea0();
   input += synapse0x3c2eee0();
   input += synapse0x3c2ef20();
   input += synapse0x39f0150();
   input += synapse0x39f0190();
   input += synapse0x39f01d0();
   input += synapse0x39f0210();
   input += synapse0x39f0250();
   input += synapse0x39f0290();
   input += synapse0x39f02d0();
   input += synapse0x3c2eb70();
   input += synapse0x3c2ebb0();
   input += synapse0x39f0420();
   input += synapse0x39f0460();
   input += synapse0x39f04a0();
   input += synapse0x39f04e0();
   input += synapse0x39f0520();
   input += synapse0x3c2f770();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c2e9e0() {
   double input = input0x3c2e9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c2f7b0() {
   double input = -1.57398;
   input += synapse0x3c2faf0();
   input += synapse0x3c2fb30();
   input += synapse0x3c2fb70();
   input += synapse0x3c2fbb0();
   input += synapse0x3c2fbf0();
   input += synapse0x3c2fc30();
   input += synapse0x3c2fc70();
   input += synapse0x3c2fcb0();
   input += synapse0x3c2fcf0();
   input += synapse0x3c2fd30();
   input += synapse0x3c2fd70();
   input += synapse0x3c2fdb0();
   input += synapse0x3c2fdf0();
   input += synapse0x3c2fe30();
   input += synapse0x3c2fe70();
   input += synapse0x3c2feb0();
   input += synapse0x3c2f940();
   input += synapse0x3c2f980();
   input += synapse0x3c30000();
   input += synapse0x3c30040();
   input += synapse0x3c30080();
   input += synapse0x3c300c0();
   input += synapse0x3c30100();
   input += synapse0x3c30140();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c2f7b0() {
   double input = input0x3c2f7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c30180() {
   double input = -5.24751;
   input += synapse0x3c304c0();
   input += synapse0x3c30500();
   input += synapse0x3c30540();
   input += synapse0x3c30580();
   input += synapse0x3c305c0();
   input += synapse0x3c30600();
   input += synapse0x3c30640();
   input += synapse0x3c30680();
   input += synapse0x3c306c0();
   input += synapse0x3c30700();
   input += synapse0x3c30740();
   input += synapse0x3c30780();
   input += synapse0x3c307c0();
   input += synapse0x3c30800();
   input += synapse0x3c30840();
   input += synapse0x3c30880();
   input += synapse0x3c30310();
   input += synapse0x3c30350();
   input += synapse0x3c309d0();
   input += synapse0x3c30a10();
   input += synapse0x3c30a50();
   input += synapse0x3c30a90();
   input += synapse0x3c30ad0();
   input += synapse0x3c30b10();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c30180() {
   double input = input0x3c30180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c30b50() {
   double input = -0.506015;
   input += synapse0x3c29510();
   input += synapse0x3c29550();
   input += synapse0x3c29590();
   input += synapse0x3c295d0();
   input += synapse0x3c310a0();
   input += synapse0x3c310e0();
   input += synapse0x3c31120();
   input += synapse0x3c31160();
   input += synapse0x3c311a0();
   input += synapse0x3c311e0();
   input += synapse0x3c31220();
   input += synapse0x3c31260();
   input += synapse0x3c312a0();
   input += synapse0x3c312e0();
   input += synapse0x3c31320();
   input += synapse0x3c31360();
   input += synapse0x3c30ce0();
   input += synapse0x3c30d20();
   input += synapse0x3c314b0();
   input += synapse0x3c314f0();
   input += synapse0x3c31530();
   input += synapse0x3c31570();
   input += synapse0x3c315b0();
   input += synapse0x3c315f0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c30b50() {
   double input = input0x3c30b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c31630() {
   double input = -0.494738;
   input += synapse0x3c31970();
   input += synapse0x3c319b0();
   input += synapse0x3c319f0();
   input += synapse0x3c31a30();
   input += synapse0x3c31a70();
   input += synapse0x3c31ab0();
   input += synapse0x3c31af0();
   input += synapse0x3c31b30();
   input += synapse0x3c31b70();
   input += synapse0x3c31bb0();
   input += synapse0x3c31bf0();
   input += synapse0x3c31c30();
   input += synapse0x3c31c70();
   input += synapse0x3c31cb0();
   input += synapse0x3c31cf0();
   input += synapse0x3c31d30();
   input += synapse0x3c317c0();
   input += synapse0x3c31800();
   input += synapse0x3c31e80();
   input += synapse0x3c31ec0();
   input += synapse0x3c31f00();
   input += synapse0x3c31f40();
   input += synapse0x3c31f80();
   input += synapse0x3c31fc0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c31630() {
   double input = input0x3c31630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c32000() {
   double input = 5.44416;
   input += synapse0x3c32340();
   input += synapse0x3c32380();
   input += synapse0x3c323c0();
   input += synapse0x3c32400();
   input += synapse0x3c32440();
   input += synapse0x3c32480();
   input += synapse0x3c324c0();
   input += synapse0x3c32500();
   input += synapse0x3c32540();
   input += synapse0x3c32580();
   input += synapse0x3c325c0();
   input += synapse0x3c32600();
   input += synapse0x3c32640();
   input += synapse0x3c32680();
   input += synapse0x3c326c0();
   input += synapse0x3c32700();
   input += synapse0x3c32190();
   input += synapse0x3c321d0();
   input += synapse0x3c2ef60();
   input += synapse0x3c2efa0();
   input += synapse0x3c2efe0();
   input += synapse0x3c2f020();
   input += synapse0x3c2f060();
   input += synapse0x3c2f0a0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c32000() {
   double input = input0x3c32000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c2f0e0() {
   double input = 0.756032;
   input += synapse0x3c2f420();
   input += synapse0x3c2f460();
   input += synapse0x3c2f4a0();
   input += synapse0x3c2f4e0();
   input += synapse0x3c2f520();
   input += synapse0x3c2f560();
   input += synapse0x3c2f5a0();
   input += synapse0x3c2f5e0();
   input += synapse0x3c2f620();
   input += synapse0x3c2f660();
   input += synapse0x3c2f6a0();
   input += synapse0x3c2f6e0();
   input += synapse0x3c2f720();
   input += synapse0x3c33860();
   input += synapse0x3c338a0();
   input += synapse0x3c338e0();
   input += synapse0x3c2f270();
   input += synapse0x3c2f2b0();
   input += synapse0x3c33a30();
   input += synapse0x3c33a70();
   input += synapse0x3c33ab0();
   input += synapse0x3c33af0();
   input += synapse0x3c33b30();
   input += synapse0x3c33b70();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c2f0e0() {
   double input = input0x3c2f0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c33bb0() {
   double input = 1.61867;
   input += synapse0x3c33ef0();
   input += synapse0x3c33f30();
   input += synapse0x3c33f70();
   input += synapse0x3c33fb0();
   input += synapse0x3c33ff0();
   input += synapse0x3c34030();
   input += synapse0x3c34070();
   input += synapse0x3c340b0();
   input += synapse0x3c340f0();
   input += synapse0x3c34130();
   input += synapse0x3c34170();
   input += synapse0x3c341b0();
   input += synapse0x3c341f0();
   input += synapse0x3c34230();
   input += synapse0x3c34270();
   input += synapse0x3c342b0();
   input += synapse0x3c33d40();
   input += synapse0x3c33d80();
   input += synapse0x3c34400();
   input += synapse0x3c34440();
   input += synapse0x3c34480();
   input += synapse0x3c344c0();
   input += synapse0x3c34500();
   input += synapse0x3c34540();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c33bb0() {
   double input = input0x3c33bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c34580() {
   double input = 0.898693;
   input += synapse0x3c348c0();
   input += synapse0x3c34900();
   input += synapse0x3c34940();
   input += synapse0x3c34980();
   input += synapse0x3c349c0();
   input += synapse0x3c34a00();
   input += synapse0x3c34a40();
   input += synapse0x3c34a80();
   input += synapse0x3c34ac0();
   input += synapse0x3c34b00();
   input += synapse0x3c34b40();
   input += synapse0x3c34b80();
   input += synapse0x3c34bc0();
   input += synapse0x3c34c00();
   input += synapse0x3c34c40();
   input += synapse0x3c34c80();
   input += synapse0x3c34710();
   input += synapse0x3c34750();
   input += synapse0x3c34dd0();
   input += synapse0x3c34e10();
   input += synapse0x3c34e50();
   input += synapse0x3c34e90();
   input += synapse0x3c34ed0();
   input += synapse0x3c34f10();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c34580() {
   double input = input0x3c34580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c34f50() {
   double input = 1.81332;
   input += synapse0x3c35290();
   input += synapse0x3c352d0();
   input += synapse0x3c35310();
   input += synapse0x3c35350();
   input += synapse0x3c35390();
   input += synapse0x3c353d0();
   input += synapse0x3c35410();
   input += synapse0x3c35450();
   input += synapse0x3c35490();
   input += synapse0x3c354d0();
   input += synapse0x3c35510();
   input += synapse0x3c35550();
   input += synapse0x3c35590();
   input += synapse0x3c355d0();
   input += synapse0x3c35610();
   input += synapse0x3c35650();
   input += synapse0x3c350e0();
   input += synapse0x3c35120();
   input += synapse0x3c357a0();
   input += synapse0x3c357e0();
   input += synapse0x3c35820();
   input += synapse0x3c35860();
   input += synapse0x3c358a0();
   input += synapse0x3c358e0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c34f50() {
   double input = input0x3c34f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c35920() {
   double input = -5.05228;
   input += synapse0x3c35c60();
   input += synapse0x3c25ee0();
   input += synapse0x3c25f20();
   input += synapse0x3c26220();
   input += synapse0x3c26260();
   input += synapse0x3c26560();
   input += synapse0x3c265a0();
   input += synapse0x3c268a0();
   input += synapse0x3c268e0();
   input += synapse0x3c26be0();
   input += synapse0x3c26c20();
   input += synapse0x3c26f20();
   input += synapse0x3c26f60();
   input += synapse0x3c27260();
   input += synapse0x3c272a0();
   input += synapse0x3c275a0();
   input += synapse0x3c275e0();
   input += synapse0x3c278e0();
   input += synapse0x3c27920();
   input += synapse0x3c27c20();
   input += synapse0x3c27c60();
   input += synapse0x3c27f60();
   input += synapse0x3c27fa0();
   input += synapse0x3c282a0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c35920() {
   double input = input0x3c35920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c37730() {
   double input = -4.01115;
   input += synapse0x3c282e0();
   input += synapse0x3c28fa0();
   input += synapse0x3c28fe0();
   input += synapse0x3c35ab0();
   input += synapse0x3c35af0();
   input += synapse0x3c292e0();
   input += synapse0x3c29320();
   input += synapse0x26d62a0();
   input += synapse0x26d62e0();
   input += synapse0x3c29a60();
   input += synapse0x3c29aa0();
   input += synapse0x3c29da0();
   input += synapse0x3c29de0();
   input += synapse0x3c2a0e0();
   input += synapse0x3c2a120();
   input += synapse0x3c2a420();
   input += synapse0x3c2a460();
   input += synapse0x3c2a760();
   input += synapse0x3c2a7a0();
   input += synapse0x3c2aaa0();
   input += synapse0x3c2aae0();
   input += synapse0x3c285e0();
   input += synapse0x3c28620();
   input += synapse0x3c379d0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c37730() {
   double input = input0x3c37730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c37a10() {
   double input = -1.707;
   input += synapse0x3c37d50();
   input += synapse0x3c37d90();
   input += synapse0x3c37dd0();
   input += synapse0x3c37e10();
   input += synapse0x3c37e50();
   input += synapse0x3c37e90();
   input += synapse0x3c37ed0();
   input += synapse0x3c37f10();
   input += synapse0x3c37f50();
   input += synapse0x3c37f90();
   input += synapse0x3c37fd0();
   input += synapse0x3c38010();
   input += synapse0x3c38050();
   input += synapse0x3c38090();
   input += synapse0x3c380d0();
   input += synapse0x3c38110();
   input += synapse0x3c37ba0();
   input += synapse0x3c37be0();
   input += synapse0x3c38260();
   input += synapse0x3c382a0();
   input += synapse0x3c382e0();
   input += synapse0x3c38320();
   input += synapse0x3c38360();
   input += synapse0x3c383a0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c37a10() {
   double input = input0x3c37a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c383e0() {
   double input = -2.06062;
   input += synapse0x3c38720();
   input += synapse0x3c38760();
   input += synapse0x3c387a0();
   input += synapse0x3c387e0();
   input += synapse0x3c38820();
   input += synapse0x3c38860();
   input += synapse0x3c388a0();
   input += synapse0x3c388e0();
   input += synapse0x3c38920();
   input += synapse0x3c38960();
   input += synapse0x3c389a0();
   input += synapse0x3c389e0();
   input += synapse0x3c38a20();
   input += synapse0x3c38a60();
   input += synapse0x3c38aa0();
   input += synapse0x3c38ae0();
   input += synapse0x3c38570();
   input += synapse0x3c385b0();
   input += synapse0x3c38c30();
   input += synapse0x3c38c70();
   input += synapse0x3c38cb0();
   input += synapse0x3c38cf0();
   input += synapse0x3c38d30();
   input += synapse0x3c38d70();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c383e0() {
   double input = input0x3c383e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c38db0() {
   double input = 1.93725;
   input += synapse0x3c390f0();
   input += synapse0x3c39130();
   input += synapse0x3c39170();
   input += synapse0x3c391b0();
   input += synapse0x3c391f0();
   input += synapse0x3c39230();
   input += synapse0x3c39270();
   input += synapse0x3c392b0();
   input += synapse0x3c392f0();
   input += synapse0x3c39330();
   input += synapse0x3c39370();
   input += synapse0x3c393b0();
   input += synapse0x3c393f0();
   input += synapse0x3c39430();
   input += synapse0x3c39470();
   input += synapse0x3c394b0();
   input += synapse0x3c38f40();
   input += synapse0x3c38f80();
   input += synapse0x3c39600();
   input += synapse0x3c39640();
   input += synapse0x3c39680();
   input += synapse0x3c396c0();
   input += synapse0x3c39700();
   input += synapse0x3c39740();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c38db0() {
   double input = input0x3c38db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c39780() {
   double input = 1.17849;
   input += synapse0x3c39ac0();
   input += synapse0x3c39b00();
   input += synapse0x3c39b40();
   input += synapse0x3c39b80();
   input += synapse0x3c39bc0();
   input += synapse0x3c39c00();
   input += synapse0x3c39c40();
   input += synapse0x3c39c80();
   input += synapse0x3c39cc0();
   input += synapse0x3c39d00();
   input += synapse0x3c39d40();
   input += synapse0x3c39d80();
   input += synapse0x3c39dc0();
   input += synapse0x3c39e00();
   input += synapse0x3c39e40();
   input += synapse0x3c39e80();
   input += synapse0x3c39910();
   input += synapse0x3c39950();
   input += synapse0x3c39fd0();
   input += synapse0x3c3a010();
   input += synapse0x3c3a050();
   input += synapse0x3c3a090();
   input += synapse0x3c3a0d0();
   input += synapse0x3c3a110();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c39780() {
   double input = input0x3c39780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c3a150() {
   double input = 0.624419;
   input += synapse0x3c3a490();
   input += synapse0x3c3a4d0();
   input += synapse0x3c3a510();
   input += synapse0x3c3a550();
   input += synapse0x3c3a590();
   input += synapse0x3c3a5d0();
   input += synapse0x3c3a610();
   input += synapse0x3c3a650();
   input += synapse0x3c3a690();
   input += synapse0x3c32850();
   input += synapse0x3c32890();
   input += synapse0x3c328d0();
   input += synapse0x3c32910();
   input += synapse0x3c32950();
   input += synapse0x3c32990();
   input += synapse0x3c329d0();
   input += synapse0x3c3a2e0();
   input += synapse0x3c3a320();
   input += synapse0x3c32b20();
   input += synapse0x3c32b60();
   input += synapse0x3c32ba0();
   input += synapse0x3c32be0();
   input += synapse0x3c32c20();
   input += synapse0x3c32c60();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c3a150() {
   double input = input0x3c3a150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c32ca0() {
   double input = 1.92362;
   input += synapse0x3c32fe0();
   input += synapse0x3c33020();
   input += synapse0x3c33060();
   input += synapse0x3c330a0();
   input += synapse0x3c330e0();
   input += synapse0x3c33120();
   input += synapse0x3c33160();
   input += synapse0x3c331a0();
   input += synapse0x3c331e0();
   input += synapse0x3c33220();
   input += synapse0x3c33260();
   input += synapse0x3c332a0();
   input += synapse0x3c332e0();
   input += synapse0x3c33320();
   input += synapse0x3c33360();
   input += synapse0x3c333a0();
   input += synapse0x3c32e30();
   input += synapse0x3c32e70();
   input += synapse0x3c334f0();
   input += synapse0x3c33530();
   input += synapse0x3c33570();
   input += synapse0x3c335b0();
   input += synapse0x3c335f0();
   input += synapse0x3c33630();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c32ca0() {
   double input = input0x3c32ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c33670() {
   double input = -0.503846;
   input += synapse0x3c33800();
   input += synapse0x3c3c890();
   input += synapse0x3c3c8d0();
   input += synapse0x3c3c910();
   input += synapse0x3c3c950();
   input += synapse0x3c3c990();
   input += synapse0x3c3c9d0();
   input += synapse0x3c3ca10();
   input += synapse0x3c3ca50();
   input += synapse0x3c3ca90();
   input += synapse0x3c3cad0();
   input += synapse0x3c3cb10();
   input += synapse0x3c3cb50();
   input += synapse0x3c3cb90();
   input += synapse0x3c3cbd0();
   input += synapse0x3c3cc10();
   input += synapse0x3c3c6e0();
   input += synapse0x3c3c720();
   input += synapse0x3c3cd60();
   input += synapse0x3c3cda0();
   input += synapse0x3c3cde0();
   input += synapse0x3c3ce20();
   input += synapse0x3c3ce60();
   input += synapse0x3c3cea0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c33670() {
   double input = input0x3c33670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c3cee0() {
   double input = 0.465565;
   input += synapse0x3c3d220();
   input += synapse0x3c3d260();
   input += synapse0x3c3d2a0();
   input += synapse0x3c3d2e0();
   input += synapse0x3c3d320();
   input += synapse0x3c3d360();
   input += synapse0x3c3d3a0();
   input += synapse0x3c3d3e0();
   input += synapse0x3c3d420();
   input += synapse0x3c3d460();
   input += synapse0x3c3d4a0();
   input += synapse0x3c3d4e0();
   input += synapse0x3c3d520();
   input += synapse0x3c3d560();
   input += synapse0x3c3d5a0();
   input += synapse0x3c3d5e0();
   input += synapse0x3c3d070();
   input += synapse0x3c3d0b0();
   input += synapse0x3c3d730();
   input += synapse0x3c3d770();
   input += synapse0x3c3d7b0();
   input += synapse0x3c3d7f0();
   input += synapse0x3c3d830();
   input += synapse0x3c3d870();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c3cee0() {
   double input = input0x3c3cee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c3d8b0() {
   double input = -0.950902;
   input += synapse0x3c3dbf0();
   input += synapse0x3c3dc30();
   input += synapse0x3c3dc70();
   input += synapse0x3c3dcb0();
   input += synapse0x3c3dcf0();
   input += synapse0x3c3dd30();
   input += synapse0x3c3dd70();
   input += synapse0x3c3ddb0();
   input += synapse0x3c3ddf0();
   input += synapse0x3c3de30();
   input += synapse0x3c3de70();
   input += synapse0x3c3deb0();
   input += synapse0x3c3def0();
   input += synapse0x3c3df30();
   input += synapse0x3c3df70();
   input += synapse0x3c3dfb0();
   input += synapse0x3c3da40();
   input += synapse0x3c3da80();
   input += synapse0x3c3e100();
   input += synapse0x3c3e140();
   input += synapse0x3c3e180();
   input += synapse0x3c3e1c0();
   input += synapse0x3c3e200();
   input += synapse0x3c3e240();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c3d8b0() {
   double input = input0x3c3d8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c3e280() {
   double input = -1.9919;
   input += synapse0x3c3e5c0();
   input += synapse0x3c3e600();
   input += synapse0x3c3e640();
   input += synapse0x3c3e680();
   input += synapse0x3c3e6c0();
   input += synapse0x3c3e700();
   input += synapse0x3c3e740();
   input += synapse0x3c3e780();
   input += synapse0x3c3e7c0();
   input += synapse0x3c3e800();
   input += synapse0x3c3e840();
   input += synapse0x3c3e880();
   input += synapse0x3c3e8c0();
   input += synapse0x3c3e900();
   input += synapse0x3c3e940();
   input += synapse0x3c3e980();
   input += synapse0x3c3e410();
   input += synapse0x3c3e450();
   input += synapse0x3c3ead0();
   input += synapse0x3c3eb10();
   input += synapse0x3c3eb50();
   input += synapse0x3c3eb90();
   input += synapse0x3c3ebd0();
   input += synapse0x3c3ec10();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c3e280() {
   double input = input0x3c3e280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c3ec50() {
   double input = -0.0750135;
   input += synapse0x3c3ef90();
   input += synapse0x3c3efd0();
   input += synapse0x3c3f010();
   input += synapse0x3c3f050();
   input += synapse0x3c3f090();
   input += synapse0x3c3f0d0();
   input += synapse0x3c3f110();
   input += synapse0x3c3f150();
   input += synapse0x3c3f190();
   input += synapse0x3c3f1d0();
   input += synapse0x3c3f210();
   input += synapse0x3c3f250();
   input += synapse0x3c3f290();
   input += synapse0x3c3f2d0();
   input += synapse0x3c3f310();
   input += synapse0x3c3f350();
   input += synapse0x3c3ede0();
   input += synapse0x3c3ee20();
   input += synapse0x3c3f4a0();
   input += synapse0x3c3f4e0();
   input += synapse0x3c3f520();
   input += synapse0x3c3f560();
   input += synapse0x3c3f5a0();
   input += synapse0x3c3f5e0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c3ec50() {
   double input = input0x3c3ec50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c3f620() {
   double input = 1.13164;
   input += synapse0x3c3f960();
   input += synapse0x3c3f9a0();
   input += synapse0x3c3f9e0();
   input += synapse0x3c3fa20();
   input += synapse0x3c3fa60();
   input += synapse0x3c3faa0();
   input += synapse0x3c3fae0();
   input += synapse0x3c3fb20();
   input += synapse0x3c3fb60();
   input += synapse0x3c3fba0();
   input += synapse0x3c3fbe0();
   input += synapse0x3c3fc20();
   input += synapse0x3c3fc60();
   input += synapse0x3c3fca0();
   input += synapse0x3c3fce0();
   input += synapse0x3c3fd20();
   input += synapse0x3c3f7b0();
   input += synapse0x3c3f7f0();
   input += synapse0x3c3fe70();
   input += synapse0x3c3feb0();
   input += synapse0x3c3fef0();
   input += synapse0x3c3ff30();
   input += synapse0x3c3ff70();
   input += synapse0x3c3ffb0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c3f620() {
   double input = input0x3c3f620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c3fff0() {
   double input = 1.4045;
   input += synapse0x3c40330();
   input += synapse0x3c40370();
   input += synapse0x3c403b0();
   input += synapse0x3c403f0();
   input += synapse0x3c40430();
   input += synapse0x3c40470();
   input += synapse0x3c404b0();
   input += synapse0x3c404f0();
   input += synapse0x3c40530();
   input += synapse0x3c40570();
   input += synapse0x3c405b0();
   input += synapse0x3c405f0();
   input += synapse0x3c40630();
   input += synapse0x3c40670();
   input += synapse0x3c406b0();
   input += synapse0x3c406f0();
   input += synapse0x3c40180();
   input += synapse0x3c401c0();
   input += synapse0x3c40840();
   input += synapse0x3c40880();
   input += synapse0x3c408c0();
   input += synapse0x3c40900();
   input += synapse0x3c40940();
   input += synapse0x3c40980();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c3fff0() {
   double input = input0x3c3fff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c409c0() {
   double input = 4.07372;
   input += synapse0x3c40d00();
   input += synapse0x3c40d40();
   input += synapse0x3c40d80();
   input += synapse0x3c40dc0();
   input += synapse0x3c40e00();
   input += synapse0x3c40e40();
   input += synapse0x3c40e80();
   input += synapse0x3c40ec0();
   input += synapse0x3c40f00();
   input += synapse0x3c40f40();
   input += synapse0x3c40f80();
   input += synapse0x3c40fc0();
   input += synapse0x3c41000();
   input += synapse0x3c41040();
   input += synapse0x3c41080();
   input += synapse0x3c410c0();
   input += synapse0x3c40b50();
   input += synapse0x3c40b90();
   input += synapse0x3c41210();
   input += synapse0x3c41250();
   input += synapse0x3c41290();
   input += synapse0x3c412d0();
   input += synapse0x3c41310();
   input += synapse0x3c41350();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c409c0() {
   double input = input0x3c409c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c41390() {
   double input = -2.98323;
   input += synapse0x3c416d0();
   input += synapse0x3c35ca0();
   input += synapse0x3c35ce0();
   input += synapse0x3c35d20();
   input += synapse0x3c35f70();
   input += synapse0x3c35fb0();
   input += synapse0x3c35ff0();
   input += synapse0x3c36240();
   input += synapse0x3c36280();
   input += synapse0x3c364d0();
   input += synapse0x3c36510();
   input += synapse0x3c36550();
   input += synapse0x3c367a0();
   input += synapse0x3c367e0();
   input += synapse0x3c36a30();
   input += synapse0x3c36a70();
   input += synapse0x3c41520();
   input += synapse0x3c41560();
   input += synapse0x3c36bc0();
   input += synapse0x3c370d0();
   input += synapse0x3c37110();
   input += synapse0x3c37150();
   input += synapse0x3c373a0();
   input += synapse0x3c373e0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c41390() {
   double input = input0x3c41390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c37420() {
   double input = 0.350424;
   input += synapse0x3c36c90();
   input += synapse0x3c36cd0();
   input += synapse0x3c36d10();
   input += synapse0x3c36d50();
   input += synapse0x3c376d0();
   input += synapse0x3c43a20();
   input += synapse0x3c43a60();
   input += synapse0x3c43aa0();
   input += synapse0x3c43ae0();
   input += synapse0x3c43b20();
   input += synapse0x3c43b60();
   input += synapse0x3c43ba0();
   input += synapse0x3c43be0();
   input += synapse0x3c43c20();
   input += synapse0x3c43c60();
   input += synapse0x3c43ca0();
   input += synapse0x3c375b0();
   input += synapse0x3c375f0();
   input += synapse0x3c43df0();
   input += synapse0x3c43e30();
   input += synapse0x3c43e70();
   input += synapse0x3c43eb0();
   input += synapse0x3c43ef0();
   input += synapse0x3c43f30();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c37420() {
   double input = input0x3c37420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c43f70() {
   double input = 1.18488;
   input += synapse0x3c442b0();
   input += synapse0x3c442f0();
   input += synapse0x3c44330();
   input += synapse0x3c44370();
   input += synapse0x3c443b0();
   input += synapse0x3c443f0();
   input += synapse0x3c44430();
   input += synapse0x3c44470();
   input += synapse0x3c444b0();
   input += synapse0x3c444f0();
   input += synapse0x3c44530();
   input += synapse0x3c44570();
   input += synapse0x3c445b0();
   input += synapse0x3c445f0();
   input += synapse0x3c44630();
   input += synapse0x3c44670();
   input += synapse0x3c44100();
   input += synapse0x3c44140();
   input += synapse0x3c447c0();
   input += synapse0x3c44800();
   input += synapse0x3c44840();
   input += synapse0x3c44880();
   input += synapse0x3c448c0();
   input += synapse0x3c44900();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c43f70() {
   double input = input0x3c43f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c44940() {
   double input = -0.70028;
   input += synapse0x3c44c80();
   input += synapse0x3c44cc0();
   input += synapse0x3c44d00();
   input += synapse0x3c44d40();
   input += synapse0x3c44d80();
   input += synapse0x3c44dc0();
   input += synapse0x3c44e00();
   input += synapse0x3c44e40();
   input += synapse0x3c44e80();
   input += synapse0x3c44ec0();
   input += synapse0x3c44f00();
   input += synapse0x3c44f40();
   input += synapse0x3c44f80();
   input += synapse0x3c44fc0();
   input += synapse0x3c45000();
   input += synapse0x3c45040();
   input += synapse0x3c44ad0();
   input += synapse0x3c44b10();
   input += synapse0x3c45190();
   input += synapse0x3c451d0();
   input += synapse0x3c45210();
   input += synapse0x3c45250();
   input += synapse0x3c45290();
   input += synapse0x3c452d0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c44940() {
   double input = input0x3c44940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c45310() {
   double input = 1.80599;
   input += synapse0x3c45650();
   input += synapse0x3c45690();
   input += synapse0x3c456d0();
   input += synapse0x3c45710();
   input += synapse0x3c45750();
   input += synapse0x3c45790();
   input += synapse0x3c457d0();
   input += synapse0x3c45810();
   input += synapse0x3c45850();
   input += synapse0x3c45890();
   input += synapse0x3c458d0();
   input += synapse0x3c45910();
   input += synapse0x3c45950();
   input += synapse0x3c45990();
   input += synapse0x3c459d0();
   input += synapse0x3c45a10();
   input += synapse0x3c454a0();
   input += synapse0x3c454e0();
   input += synapse0x3c45b60();
   input += synapse0x3c45ba0();
   input += synapse0x3c45be0();
   input += synapse0x3c45c20();
   input += synapse0x3c45c60();
   input += synapse0x3c45ca0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c45310() {
   double input = input0x3c45310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c45ce0() {
   double input = 0.249242;
   input += synapse0x3c46020();
   input += synapse0x3c46060();
   input += synapse0x3c460a0();
   input += synapse0x3c460e0();
   input += synapse0x3c46120();
   input += synapse0x3c46160();
   input += synapse0x3c461a0();
   input += synapse0x3c461e0();
   input += synapse0x3c46220();
   input += synapse0x3c46260();
   input += synapse0x3c462a0();
   input += synapse0x3c462e0();
   input += synapse0x3c46320();
   input += synapse0x3c46360();
   input += synapse0x3c463a0();
   input += synapse0x3c463e0();
   input += synapse0x3c45e70();
   input += synapse0x3c45eb0();
   input += synapse0x3c46530();
   input += synapse0x3c46570();
   input += synapse0x3c465b0();
   input += synapse0x3c465f0();
   input += synapse0x3c46630();
   input += synapse0x3c46670();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c45ce0() {
   double input = input0x3c45ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c466b0() {
   double input = 4.31768;
   input += synapse0x3c469f0();
   input += synapse0x3c46a30();
   input += synapse0x3c46a70();
   input += synapse0x3c46ab0();
   input += synapse0x3c46af0();
   input += synapse0x3c46b30();
   input += synapse0x3c46b70();
   input += synapse0x3c46bb0();
   input += synapse0x3c46bf0();
   input += synapse0x3c46c30();
   input += synapse0x3c46c70();
   input += synapse0x3c46cb0();
   input += synapse0x3c46cf0();
   input += synapse0x3c46d30();
   input += synapse0x3c46d70();
   input += synapse0x3c46db0();
   input += synapse0x3c46840();
   input += synapse0x3c46880();
   input += synapse0x3c46f00();
   input += synapse0x3c46f40();
   input += synapse0x3c46f80();
   input += synapse0x3c46fc0();
   input += synapse0x3c47000();
   input += synapse0x3c47040();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c466b0() {
   double input = input0x3c466b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c47080() {
   double input = -3.16034;
   input += synapse0x3c473c0();
   input += synapse0x3c47400();
   input += synapse0x3c47440();
   input += synapse0x3c47480();
   input += synapse0x3c474c0();
   input += synapse0x3c47500();
   input += synapse0x3c47540();
   input += synapse0x3c47580();
   input += synapse0x3c475c0();
   input += synapse0x3c47600();
   input += synapse0x3c47640();
   input += synapse0x3c47680();
   input += synapse0x3c476c0();
   input += synapse0x3c47700();
   input += synapse0x3c47740();
   input += synapse0x3c47780();
   input += synapse0x3c47210();
   input += synapse0x3c47250();
   input += synapse0x3c478d0();
   input += synapse0x3c47910();
   input += synapse0x3c47950();
   input += synapse0x3c47990();
   input += synapse0x3c479d0();
   input += synapse0x3c47a10();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c47080() {
   double input = input0x3c47080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c47a50() {
   double input = 1.13692;
   input += synapse0x3c47d90();
   input += synapse0x3c47dd0();
   input += synapse0x3c47e10();
   input += synapse0x3c47e50();
   input += synapse0x3c47e90();
   input += synapse0x3c47ed0();
   input += synapse0x3c47f10();
   input += synapse0x3c47f50();
   input += synapse0x3c47f90();
   input += synapse0x3c47fd0();
   input += synapse0x3c48010();
   input += synapse0x3c48050();
   input += synapse0x3c48090();
   input += synapse0x3c480d0();
   input += synapse0x3c48110();
   input += synapse0x3c48150();
   input += synapse0x3c47be0();
   input += synapse0x3c47c20();
   input += synapse0x3c482a0();
   input += synapse0x3c482e0();
   input += synapse0x3c48320();
   input += synapse0x3c48360();
   input += synapse0x3c483a0();
   input += synapse0x3c483e0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c47a50() {
   double input = input0x3c47a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c48420() {
   double input = -0.610744;
   input += synapse0x3c30e90();
   input += synapse0x3c30ed0();
   input += synapse0x3c30f10();
   input += synapse0x3c30f50();
   input += synapse0x3c30f90();
   input += synapse0x3c30fd0();
   input += synapse0x3c31010();
   input += synapse0x3c31050();
   input += synapse0x3c48b70();
   input += synapse0x3c48bb0();
   input += synapse0x3c48bf0();
   input += synapse0x3c48c30();
   input += synapse0x3c48c70();
   input += synapse0x3c48cb0();
   input += synapse0x3c48cf0();
   input += synapse0x3c48d30();
   input += synapse0x3c485b0();
   input += synapse0x3c485f0();
   input += synapse0x3c48e80();
   input += synapse0x3c48ec0();
   input += synapse0x3c48f00();
   input += synapse0x3c48f40();
   input += synapse0x3c48f80();
   input += synapse0x3c48fc0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c48420() {
   double input = input0x3c48420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c49000() {
   double input = 0.729427;
   input += synapse0x3c49340();
   input += synapse0x3c49380();
   input += synapse0x3c493c0();
   input += synapse0x3c49400();
   input += synapse0x3c49440();
   input += synapse0x3c49480();
   input += synapse0x3c494c0();
   input += synapse0x3c49500();
   input += synapse0x3c49540();
   input += synapse0x3c49580();
   input += synapse0x3c495c0();
   input += synapse0x3c49600();
   input += synapse0x3c49640();
   input += synapse0x3c49680();
   input += synapse0x3c496c0();
   input += synapse0x3c49700();
   input += synapse0x3c49190();
   input += synapse0x3c491d0();
   input += synapse0x3c49850();
   input += synapse0x3c49890();
   input += synapse0x3c498d0();
   input += synapse0x3c49910();
   input += synapse0x3c49950();
   input += synapse0x3c49990();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c49000() {
   double input = input0x3c49000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c499d0() {
   double input = 2.76652;
   input += synapse0x3c49d10();
   input += synapse0x3c49d50();
   input += synapse0x3c49d90();
   input += synapse0x3c49dd0();
   input += synapse0x3c49e10();
   input += synapse0x3c49e50();
   input += synapse0x3c49e90();
   input += synapse0x3c49ed0();
   input += synapse0x3c49f10();
   input += synapse0x3c49f50();
   input += synapse0x3c49f90();
   input += synapse0x3c49fd0();
   input += synapse0x3c4a010();
   input += synapse0x3c4a050();
   input += synapse0x3c4a090();
   input += synapse0x3c4a0d0();
   input += synapse0x3c49b60();
   input += synapse0x3c49ba0();
   input += synapse0x3c3a6d0();
   input += synapse0x3c3a710();
   input += synapse0x3c3a750();
   input += synapse0x3c3a790();
   input += synapse0x3c3a7d0();
   input += synapse0x3c3a810();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c499d0() {
   double input = input0x3c499d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c3a850() {
   double input = -0.222069;
   input += synapse0x3c3ab90();
   input += synapse0x3c3abd0();
   input += synapse0x3c3ac10();
   input += synapse0x3c3ac50();
   input += synapse0x3c3ac90();
   input += synapse0x3c3acd0();
   input += synapse0x3c3ad10();
   input += synapse0x3c3ad50();
   input += synapse0x3c3ad90();
   input += synapse0x3c3add0();
   input += synapse0x3c3ae10();
   input += synapse0x3c3ae50();
   input += synapse0x3c3ae90();
   input += synapse0x3c3aed0();
   input += synapse0x3c3af10();
   input += synapse0x3c3af50();
   input += synapse0x3c3a9e0();
   input += synapse0x3c3aa20();
   input += synapse0x3c3b0a0();
   input += synapse0x3c3b0e0();
   input += synapse0x3c3b120();
   input += synapse0x3c3b160();
   input += synapse0x3c3b1a0();
   input += synapse0x3c3b1e0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c3a850() {
   double input = input0x3c3a850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c3b220() {
   double input = -1.74408;
   input += synapse0x3c3b560();
   input += synapse0x3c3b5a0();
   input += synapse0x3c3b5e0();
   input += synapse0x3c3b620();
   input += synapse0x3c3b660();
   input += synapse0x3c3b6a0();
   input += synapse0x3c3b6e0();
   input += synapse0x3c3b720();
   input += synapse0x3c3b760();
   input += synapse0x3c3b7a0();
   input += synapse0x3c3b7e0();
   input += synapse0x3c3b820();
   input += synapse0x3c3b860();
   input += synapse0x3c3b8a0();
   input += synapse0x3c3b8e0();
   input += synapse0x3c3b920();
   input += synapse0x3c3b3b0();
   input += synapse0x3c3b3f0();
   input += synapse0x3c3ba70();
   input += synapse0x3c3bab0();
   input += synapse0x3c3baf0();
   input += synapse0x3c3bb30();
   input += synapse0x3c3bb70();
   input += synapse0x3c3bbb0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c3b220() {
   double input = input0x3c3b220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c3bbf0() {
   double input = -5.8118;
   input += synapse0x3c3bf30();
   input += synapse0x3c3bf70();
   input += synapse0x3c3bfb0();
   input += synapse0x3c3bff0();
   input += synapse0x3c3c030();
   input += synapse0x3c3c070();
   input += synapse0x3c3c0b0();
   input += synapse0x3c3c0f0();
   input += synapse0x3c3c130();
   input += synapse0x3c3c170();
   input += synapse0x3c3c1b0();
   input += synapse0x3c3c1f0();
   input += synapse0x3c3c230();
   input += synapse0x3c3c270();
   input += synapse0x3c3c2b0();
   input += synapse0x3c3c2f0();
   input += synapse0x3c3bd80();
   input += synapse0x3c3bdc0();
   input += synapse0x3c3c440();
   input += synapse0x3c3c480();
   input += synapse0x3c3c4c0();
   input += synapse0x3c3c500();
   input += synapse0x3c3c540();
   input += synapse0x3c3c580();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c3bbf0() {
   double input = input0x3c3bbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c4e230() {
   double input = 0.358991;
   input += synapse0x3c4e450();
   input += synapse0x3c4e490();
   input += synapse0x3c4e4d0();
   input += synapse0x3c4e510();
   input += synapse0x3c4e550();
   input += synapse0x3c4e590();
   input += synapse0x3c4e5d0();
   input += synapse0x3c4e610();
   input += synapse0x3c4e650();
   input += synapse0x3c4e690();
   input += synapse0x3c4e6d0();
   input += synapse0x3c4e710();
   input += synapse0x3c4e750();
   input += synapse0x3c4e790();
   input += synapse0x3c4e7d0();
   input += synapse0x3c4e810();
   input += synapse0x3c3c5c0();
   input += synapse0x3c3c600();
   input += synapse0x3c4e960();
   input += synapse0x3c4e9a0();
   input += synapse0x3c4e9e0();
   input += synapse0x3c4ea20();
   input += synapse0x3c4ea60();
   input += synapse0x3c4eaa0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c4e230() {
   double input = input0x3c4e230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c4eae0() {
   double input = 0.811745;
   input += synapse0x3c4ee20();
   input += synapse0x3c4ee60();
   input += synapse0x3c4eea0();
   input += synapse0x3c4eee0();
   input += synapse0x3c4ef20();
   input += synapse0x3c4ef60();
   input += synapse0x3c4efa0();
   input += synapse0x3c4efe0();
   input += synapse0x3c4f020();
   input += synapse0x3c4f060();
   input += synapse0x3c4f0a0();
   input += synapse0x3c4f0e0();
   input += synapse0x3c4f120();
   input += synapse0x3c4f160();
   input += synapse0x3c4f1a0();
   input += synapse0x3c4f1e0();
   input += synapse0x3c4ec70();
   input += synapse0x3c4ecb0();
   input += synapse0x3c4f330();
   input += synapse0x3c4f370();
   input += synapse0x3c4f3b0();
   input += synapse0x3c4f3f0();
   input += synapse0x3c4f430();
   input += synapse0x3c4f470();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c4eae0() {
   double input = input0x3c4eae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c4f4b0() {
   double input = -1.53723;
   input += synapse0x3c4f7f0();
   input += synapse0x3c4f830();
   input += synapse0x3c4f870();
   input += synapse0x3c4f8b0();
   input += synapse0x3c4f8f0();
   input += synapse0x3c4f930();
   input += synapse0x3c4f970();
   input += synapse0x3c4f9b0();
   input += synapse0x3c4f9f0();
   input += synapse0x3c4fa30();
   input += synapse0x3c4fa70();
   input += synapse0x3c4fab0();
   input += synapse0x3c4faf0();
   input += synapse0x3c4fb30();
   input += synapse0x3c4fb70();
   input += synapse0x3c4fbb0();
   input += synapse0x3c4f640();
   input += synapse0x3c4f680();
   input += synapse0x3c4fd00();
   input += synapse0x3c4fd40();
   input += synapse0x3c4fd80();
   input += synapse0x3c4fdc0();
   input += synapse0x3c4fe00();
   input += synapse0x3c4fe40();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c4f4b0() {
   double input = input0x3c4f4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c4fe80() {
   double input = -0.150555;
   input += synapse0x3c501c0();
   input += synapse0x3c50200();
   input += synapse0x3c50240();
   input += synapse0x3c50280();
   input += synapse0x3c502c0();
   input += synapse0x3c50300();
   input += synapse0x3c50340();
   input += synapse0x3c50380();
   input += synapse0x3c503c0();
   input += synapse0x3c50400();
   input += synapse0x3c50440();
   input += synapse0x3c50480();
   input += synapse0x3c504c0();
   input += synapse0x3c50500();
   input += synapse0x3c50540();
   input += synapse0x3c50580();
   input += synapse0x3c50010();
   input += synapse0x3c50050();
   input += synapse0x3c506d0();
   input += synapse0x3c50710();
   input += synapse0x3c50750();
   input += synapse0x3c50790();
   input += synapse0x3c507d0();
   input += synapse0x3c50810();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c4fe80() {
   double input = input0x3c4fe80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c57080() {
   double input = -0.655449;
   input += synapse0x39f05f0();
   input += synapse0x39f0630();
   input += synapse0x3c2d1b0();
   input += synapse0x3c2d1f0();
   input += synapse0x3c2ec90();
   input += synapse0x3c2ecd0();
   input += synapse0x3c2fa60();
   input += synapse0x3c2faa0();
   input += synapse0x3c30430();
   input += synapse0x3c30470();
   input += synapse0x3c30e00();
   input += synapse0x3c30e40();
   input += synapse0x3c318e0();
   input += synapse0x3c31920();
   input += synapse0x3c322b0();
   input += synapse0x3c322f0();
   input += synapse0x3c2f390();
   input += synapse0x3c2f3d0();
   input += synapse0x3c33e60();
   input += synapse0x3c33ea0();
   input += synapse0x3c34830();
   input += synapse0x3c34870();
   input += synapse0x3c35200();
   input += synapse0x3c35240();
   input += synapse0x3c35bd0();
   input += synapse0x3c35c10();
   input += synapse0x3c28c60();
   input += synapse0x3c28ca0();
   input += synapse0x3c37cc0();
   input += synapse0x3c37d00();
   input += synapse0x3c38690();
   input += synapse0x3c386d0();
   input += synapse0x3c39060();
   input += synapse0x3c390a0();
   input += synapse0x3c39a30();
   input += synapse0x3c39a70();
   input += synapse0x3c3a400();
   input += synapse0x3c3a440();
   input += synapse0x3c32f50();
   input += synapse0x3c32f90();
   input += synapse0x3c3c800();
   input += synapse0x3c3c840();
   input += synapse0x3c3d190();
   input += synapse0x3c3d1d0();
   input += synapse0x3c3db60();
   input += synapse0x3c3dba0();
   input += synapse0x3c3e530();
   input += synapse0x3c3e570();
   input += synapse0x3c3ef00();
   input += synapse0x3c3ef40();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c57080() {
   double input = input0x3c57080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c57420() {
   double input = 1.29134;
   input += synapse0x3c41640();
   input += synapse0x3c41680();
   input += synapse0x3c36c00();
   input += synapse0x3c36c40();
   input += synapse0x3c44220();
   input += synapse0x3c44260();
   input += synapse0x3c44bf0();
   input += synapse0x3c44c30();
   input += synapse0x3c455c0();
   input += synapse0x3c45600();
   input += synapse0x3c45f90();
   input += synapse0x3c45fd0();
   input += synapse0x3c46960();
   input += synapse0x3c469a0();
   input += synapse0x3c47330();
   input += synapse0x3c47370();
   input += synapse0x3c47d00();
   input += synapse0x3c47d40();
   input += synapse0x3c486d0();
   input += synapse0x3c48710();
   input += synapse0x3c492b0();
   input += synapse0x3c492f0();
   input += synapse0x3c49c80();
   input += synapse0x3c49cc0();
   input += synapse0x3c3ab00();
   input += synapse0x3c3ab40();
   input += synapse0x3c3b4d0();
   input += synapse0x3c3b510();
   input += synapse0x3c3bea0();
   input += synapse0x3c3bee0();
   input += synapse0x3c4e3c0();
   input += synapse0x3c4e400();
   input += synapse0x3c4ed90();
   input += synapse0x3c4edd0();
   input += synapse0x3c4f760();
   input += synapse0x3c4f7a0();
   input += synapse0x3c50130();
   input += synapse0x3c50170();
   input += synapse0x3c2afa0();
   input += synapse0x3c2afe0();
   input += synapse0x3c3f8d0();
   input += synapse0x3c3f910();
   input += synapse0x3c50850();
   input += synapse0x3c50890();
   input += synapse0x3c508d0();
   input += synapse0x3c50910();
   input += synapse0x3c577c0();
   input += synapse0x3c57800();
   input += synapse0x3c57840();
   input += synapse0x3c57880();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c57420() {
   double input = input0x3c57420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c578c0() {
   double input = -1.26013;
   input += synapse0x3c57c00();
   input += synapse0x3c57c40();
   input += synapse0x3c57c80();
   input += synapse0x3c57cc0();
   input += synapse0x3c57d00();
   input += synapse0x3c57d40();
   input += synapse0x3c57d80();
   input += synapse0x3c57dc0();
   input += synapse0x3c57e00();
   input += synapse0x3c57e40();
   input += synapse0x3c57e80();
   input += synapse0x3c57ec0();
   input += synapse0x3c57f00();
   input += synapse0x3c57f40();
   input += synapse0x3c57f80();
   input += synapse0x3c57fc0();
   input += synapse0x3c57a50();
   input += synapse0x3c57a90();
   input += synapse0x3c58110();
   input += synapse0x3c58150();
   input += synapse0x3c58190();
   input += synapse0x3c581d0();
   input += synapse0x3c58210();
   input += synapse0x3c58250();
   input += synapse0x3c58290();
   input += synapse0x3c582d0();
   input += synapse0x3c58310();
   input += synapse0x3c58350();
   input += synapse0x3c58390();
   input += synapse0x3c583d0();
   input += synapse0x3c58410();
   input += synapse0x3c58450();
   input += synapse0x3c58000();
   input += synapse0x3c58040();
   input += synapse0x3c58080();
   input += synapse0x3c580c0();
   input += synapse0x3c586a0();
   input += synapse0x3c586e0();
   input += synapse0x3c58720();
   input += synapse0x3c58760();
   input += synapse0x3c587a0();
   input += synapse0x3c587e0();
   input += synapse0x3c58820();
   input += synapse0x3c58860();
   input += synapse0x3c588a0();
   input += synapse0x3c588e0();
   input += synapse0x3c58920();
   input += synapse0x3c58960();
   input += synapse0x3c589a0();
   input += synapse0x3c589e0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c578c0() {
   double input = input0x3c578c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c58a20() {
   double input = -5.93591;
   input += synapse0x3c58d60();
   input += synapse0x3c58da0();
   input += synapse0x3c58de0();
   input += synapse0x3c58e20();
   input += synapse0x3c58e60();
   input += synapse0x3c58ea0();
   input += synapse0x3c58ee0();
   input += synapse0x3c58f20();
   input += synapse0x3c58f60();
   input += synapse0x3c58fa0();
   input += synapse0x3c58fe0();
   input += synapse0x3c59020();
   input += synapse0x3c59060();
   input += synapse0x3c590a0();
   input += synapse0x3c590e0();
   input += synapse0x3c59120();
   input += synapse0x3c58bb0();
   input += synapse0x3c58bf0();
   input += synapse0x3c59270();
   input += synapse0x3c592b0();
   input += synapse0x3c592f0();
   input += synapse0x3c59330();
   input += synapse0x3c59370();
   input += synapse0x3c593b0();
   input += synapse0x3c593f0();
   input += synapse0x3c59430();
   input += synapse0x3c59470();
   input += synapse0x3c594b0();
   input += synapse0x3c594f0();
   input += synapse0x3c59530();
   input += synapse0x3c59570();
   input += synapse0x3c595b0();
   input += synapse0x3c59160();
   input += synapse0x3c591a0();
   input += synapse0x3c591e0();
   input += synapse0x3c59220();
   input += synapse0x3c59800();
   input += synapse0x3c59840();
   input += synapse0x3c59880();
   input += synapse0x3c598c0();
   input += synapse0x3c59900();
   input += synapse0x3c59940();
   input += synapse0x3c59980();
   input += synapse0x3c599c0();
   input += synapse0x3c59a00();
   input += synapse0x3c59a40();
   input += synapse0x3c59a80();
   input += synapse0x3c59ac0();
   input += synapse0x3c59b00();
   input += synapse0x3c59b40();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c58a20() {
   double input = input0x3c58a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c59b80() {
   double input = -2.44575;
   input += synapse0x3c59ec0();
   input += synapse0x3c59f00();
   input += synapse0x3c59f40();
   input += synapse0x3c59f80();
   input += synapse0x3c59fc0();
   input += synapse0x3c5a000();
   input += synapse0x3c5a040();
   input += synapse0x3c5a080();
   input += synapse0x3c5a0c0();
   input += synapse0x3c5a100();
   input += synapse0x3c5a140();
   input += synapse0x3c5a180();
   input += synapse0x3c5a1c0();
   input += synapse0x3c5a200();
   input += synapse0x3c5a240();
   input += synapse0x3c5a280();
   input += synapse0x3c59d10();
   input += synapse0x3c59d50();
   input += synapse0x3c5a3d0();
   input += synapse0x3c5a410();
   input += synapse0x3c5a450();
   input += synapse0x3c5a490();
   input += synapse0x3c5a4d0();
   input += synapse0x3c5a510();
   input += synapse0x3c5a550();
   input += synapse0x3c5a590();
   input += synapse0x3c5a5d0();
   input += synapse0x3c5a610();
   input += synapse0x3c5a650();
   input += synapse0x3c5a690();
   input += synapse0x3c5a6d0();
   input += synapse0x3c5a710();
   input += synapse0x3c5a2c0();
   input += synapse0x3c5a300();
   input += synapse0x3c5a340();
   input += synapse0x3c5a380();
   input += synapse0x3c5a960();
   input += synapse0x3c5a9a0();
   input += synapse0x3c5a9e0();
   input += synapse0x3c5aa20();
   input += synapse0x3c5aa60();
   input += synapse0x3c5aaa0();
   input += synapse0x3c5aae0();
   input += synapse0x3c5ab20();
   input += synapse0x3c5ab60();
   input += synapse0x3c5aba0();
   input += synapse0x3c5abe0();
   input += synapse0x3c5ac20();
   input += synapse0x3c5ac60();
   input += synapse0x3c5aca0();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c59b80() {
   double input = input0x3c59b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1p::input0x3c5ace0() {
   double input = -3.54287;
   input += synapse0x3c5af00();
   input += synapse0x3c5af40();
   input += synapse0x3c5af80();
   input += synapse0x3c5afc0();
   input += synapse0x3c5b000();
   return input;
}

double NNfunction_nn_chi2_charge1p::neuron0x3c5ace0() {
   double input = input0x3c5ace0();
   return (input * 1)+0;
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b030() {
   return (neuron0x3c25d50()*1.01839);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b070() {
   return (neuron0x3c26000()*-0.593588);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b0b0() {
   return (neuron0x3c26340()*0.168917);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b0f0() {
   return (neuron0x3c26680()*1.03113);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b130() {
   return (neuron0x3c269c0()*-0.232072);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b170() {
   return (neuron0x3c26d00()*0.28231);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b1b0() {
   return (neuron0x3c27040()*0.950235);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b1f0() {
   return (neuron0x3c27380()*0.455398);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b230() {
   return (neuron0x3c276c0()*0.0271811);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b270() {
   return (neuron0x3c27a00()*-0.408604);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b2b0() {
   return (neuron0x3c27d40()*-0.807416);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b2f0() {
   return (neuron0x3c28080()*0.758765);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b330() {
   return (neuron0x3c283c0()*-0.368069);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b370() {
   return (neuron0x3c28700()*0.177467);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b3b0() {
   return (neuron0x3c28a40()*-0.10849);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b3f0() {
   return (neuron0x3c28d80()*0.0431963);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2ae80() {
   return (neuron0x3c290c0()*0.296897);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2aec0() {
   return (neuron0x3c29620()*-0.138365);
}

double NNfunction_nn_chi2_charge1p::synapse0x26d9090() {
   return (neuron0x3c29840()*-0.865468);
}

double NNfunction_nn_chi2_charge1p::synapse0x26d90d0() {
   return (neuron0x3c29b80()*0.0579201);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b540() {
   return (neuron0x3c29ec0()*0.184767);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b580() {
   return (neuron0x3c2a200()*-0.248685);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b5c0() {
   return (neuron0x3c2a540()*-0.337906);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b600() {
   return (neuron0x3c2a880()*1.56999);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b980() {
   return (neuron0x3c25d50()*-0.421083);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b9c0() {
   return (neuron0x3c26000()*0.444863);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2ba00() {
   return (neuron0x3c26340()*0.367217);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2ba40() {
   return (neuron0x3c26680()*-1.21986);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2ba80() {
   return (neuron0x3c269c0()*-0.0453513);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2bac0() {
   return (neuron0x3c26d00()*-0.485603);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2bb00() {
   return (neuron0x3c27040()*-0.105763);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2bb40() {
   return (neuron0x3c27380()*-0.425641);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2bb80() {
   return (neuron0x3c276c0()*0.119118);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b430() {
   return (neuron0x3c27a00()*0.432836);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b470() {
   return (neuron0x3c27d40()*0.412312);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b4b0() {
   return (neuron0x3c28080()*0.606079);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b4f0() {
   return (neuron0x3c283c0()*-0.283171);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2bdd0() {
   return (neuron0x3c28700()*-0.0956378);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2be10() {
   return (neuron0x3c28a40()*-0.0608936);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2be50() {
   return (neuron0x3c28d80()*-0.294936);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b7d0() {
   return (neuron0x3c290c0()*0.214731);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2b810() {
   return (neuron0x3c29620()*-0.337253);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2bfa0() {
   return (neuron0x3c29840()*-0.106692);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2bfe0() {
   return (neuron0x3c29b80()*0.0895318);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c020() {
   return (neuron0x3c29ec0()*0.654884);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c060() {
   return (neuron0x3c2a200()*0.0492384);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c0a0() {
   return (neuron0x3c2a540()*0.0818384);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c0e0() {
   return (neuron0x3c2a880()*-1.05153);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c460() {
   return (neuron0x3c25d50()*0.00360328);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c4a0() {
   return (neuron0x3c26000()*0.108143);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c4e0() {
   return (neuron0x3c26340()*-8.43952);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c520() {
   return (neuron0x3c26680()*0.0491054);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c560() {
   return (neuron0x3c269c0()*0.0196912);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c5a0() {
   return (neuron0x3c26d00()*0.0181881);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c5e0() {
   return (neuron0x3c27040()*0.0552307);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c620() {
   return (neuron0x3c27380()*-0.0475114);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c660() {
   return (neuron0x3c276c0()*-0.0190111);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c6a0() {
   return (neuron0x3c27a00()*-0.00884742);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c6e0() {
   return (neuron0x3c27d40()*0.0608579);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c720() {
   return (neuron0x3c28080()*0.119727);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c760() {
   return (neuron0x3c283c0()*-0.0562303);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c7a0() {
   return (neuron0x3c28700()*-0.0268465);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c7e0() {
   return (neuron0x3c28a40()*0.0137195);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c820() {
   return (neuron0x3c28d80()*-0.00575452);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c2b0() {
   return (neuron0x3c290c0()*0.0490664);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c2f0() {
   return (neuron0x3c29620()*0.00506339);
}

double NNfunction_nn_chi2_charge1p::synapse0x2261f10() {
   return (neuron0x3c29840()*0.03589);
}

double NNfunction_nn_chi2_charge1p::synapse0x39efe00() {
   return (neuron0x3c29b80()*0.00642421);
}

double NNfunction_nn_chi2_charge1p::synapse0x39efe40() {
   return (neuron0x3c29ec0()*-0.00690717);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2e760() {
   return (neuron0x3c2a200()*0.0118588);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2e7a0() {
   return (neuron0x3c2a540()*0.0235847);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c25a90() {
   return (neuron0x3c2a880()*0.0317986);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c25b60() {
   return (neuron0x3c25d50()*-0.0510944);
}

double NNfunction_nn_chi2_charge1p::synapse0x39f0680() {
   return (neuron0x3c26000()*0.0133795);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2bd50() {
   return (neuron0x3c26340()*-0.295985);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2bd90() {
   return (neuron0x3c26680()*-0.0154236);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c970() {
   return (neuron0x3c269c0()*0.00556407);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c9b0() {
   return (neuron0x3c26d00()*0.01004);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2c9f0() {
   return (neuron0x3c27040()*0.00258589);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2ca30() {
   return (neuron0x3c27380()*-0.00227525);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2ca70() {
   return (neuron0x3c276c0()*0.0108554);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2cab0() {
   return (neuron0x3c27a00()*0.0150016);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2caf0() {
   return (neuron0x3c27d40()*0.0086802);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2cb30() {
   return (neuron0x3c28080()*-0.0569128);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2cb70() {
   return (neuron0x3c283c0()*-0.0228214);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2cbb0() {
   return (neuron0x3c28700()*-0.0188441);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2cbf0() {
   return (neuron0x3c28a40()*-0.00742951);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2cc30() {
   return (neuron0x3c28d80()*0.00121486);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c25ad0() {
   return (neuron0x3c290c0()*-0.0124106);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c25b10() {
   return (neuron0x3c29620()*-0.00729112);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2cd80() {
   return (neuron0x3c29840()*-0.0109925);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2cdc0() {
   return (neuron0x3c29b80()*0.00721173);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2ce00() {
   return (neuron0x3c29ec0()*0.00495668);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2ce40() {
   return (neuron0x3c2a200()*0.00371138);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2ce80() {
   return (neuron0x3c2a540()*0.0013209);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2cec0() {
   return (neuron0x3c2a880()*-2.50898);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2d240() {
   return (neuron0x3c25d50()*0.262731);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2d280() {
   return (neuron0x3c26000()*-3.34301);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2d2c0() {
   return (neuron0x3c26340()*0.145805);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2d300() {
   return (neuron0x3c26680()*-0.179843);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2d340() {
   return (neuron0x3c269c0()*0.115551);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2d380() {
   return (neuron0x3c26d00()*0.0921028);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2d3c0() {
   return (neuron0x3c27040()*0.0143493);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2d400() {
   return (neuron0x3c27380()*-0.116883);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2d440() {
   return (neuron0x3c276c0()*0.133077);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2d480() {
   return (neuron0x3c27a00()*0.152495);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2d4c0() {
   return (neuron0x3c27d40()*0.0200553);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2d500() {
   return (neuron0x3c28080()*-0.167708);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2d540() {
   return (neuron0x3c283c0()*0.0195515);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2d580() {
   return (neuron0x3c28700()*-0.142202);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2d5c0() {
   return (neuron0x3c28a40()*0.00797628);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2d600() {
   return (neuron0x3c28d80()*0.0308942);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2d750() {
   return (neuron0x3c290c0()*-0.117749);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2d090() {
   return (neuron0x3c29620()*-0.180559);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2d0d0() {
   return (neuron0x3c29840()*-0.0944048);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2e8a0() {
   return (neuron0x3c29b80()*0.205441);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2e8e0() {
   return (neuron0x3c29ec0()*0.251704);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2e920() {
   return (neuron0x3c2a200()*-0.21203);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2e960() {
   return (neuron0x3c2a540()*-0.0259322);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2e9a0() {
   return (neuron0x3c2a880()*1.90401);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2ed20() {
   return (neuron0x3c25d50()*0.0995442);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2ed60() {
   return (neuron0x3c26000()*-0.964317);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2eda0() {
   return (neuron0x3c26340()*2.27421);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2ede0() {
   return (neuron0x3c26680()*0.463552);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2ee20() {
   return (neuron0x3c269c0()*-0.0361307);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2ee60() {
   return (neuron0x3c26d00()*-0.203358);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2eea0() {
   return (neuron0x3c27040()*0.0205895);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2eee0() {
   return (neuron0x3c27380()*0.0175617);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2ef20() {
   return (neuron0x3c276c0()*0.220699);
}

double NNfunction_nn_chi2_charge1p::synapse0x39f0150() {
   return (neuron0x3c27a00()*0.0296749);
}

double NNfunction_nn_chi2_charge1p::synapse0x39f0190() {
   return (neuron0x3c27d40()*0.321671);
}

double NNfunction_nn_chi2_charge1p::synapse0x39f01d0() {
   return (neuron0x3c28080()*-1.18222);
}

double NNfunction_nn_chi2_charge1p::synapse0x39f0210() {
   return (neuron0x3c283c0()*-0.0715992);
}

double NNfunction_nn_chi2_charge1p::synapse0x39f0250() {
   return (neuron0x3c28700()*-0.446012);
}

double NNfunction_nn_chi2_charge1p::synapse0x39f0290() {
   return (neuron0x3c28a40()*0.251146);
}

double NNfunction_nn_chi2_charge1p::synapse0x39f02d0() {
   return (neuron0x3c28d80()*-0.370398);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2eb70() {
   return (neuron0x3c290c0()*-0.149432);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2ebb0() {
   return (neuron0x3c29620()*-0.664509);
}

double NNfunction_nn_chi2_charge1p::synapse0x39f0420() {
   return (neuron0x3c29840()*0.615126);
}

double NNfunction_nn_chi2_charge1p::synapse0x39f0460() {
   return (neuron0x3c29b80()*0.401835);
}

double NNfunction_nn_chi2_charge1p::synapse0x39f04a0() {
   return (neuron0x3c29ec0()*-0.121255);
}

double NNfunction_nn_chi2_charge1p::synapse0x39f04e0() {
   return (neuron0x3c2a200()*-0.146803);
}

double NNfunction_nn_chi2_charge1p::synapse0x39f0520() {
   return (neuron0x3c2a540()*0.205508);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f770() {
   return (neuron0x3c2a880()*-0.259941);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2faf0() {
   return (neuron0x3c25d50()*1.21614);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2fb30() {
   return (neuron0x3c26000()*-0.00477326);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2fb70() {
   return (neuron0x3c26340()*0.352121);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2fbb0() {
   return (neuron0x3c26680()*-0.0193967);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2fbf0() {
   return (neuron0x3c269c0()*-0.0388814);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2fc30() {
   return (neuron0x3c26d00()*0.0190783);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2fc70() {
   return (neuron0x3c27040()*-0.0608526);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2fcb0() {
   return (neuron0x3c27380()*0.00481541);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2fcf0() {
   return (neuron0x3c276c0()*0.0154253);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2fd30() {
   return (neuron0x3c27a00()*-0.0559223);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2fd70() {
   return (neuron0x3c27d40()*0.0133392);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2fdb0() {
   return (neuron0x3c28080()*0.0903056);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2fdf0() {
   return (neuron0x3c283c0()*0.0672758);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2fe30() {
   return (neuron0x3c28700()*0.08956);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2fe70() {
   return (neuron0x3c28a40()*-0.0154713);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2feb0() {
   return (neuron0x3c28d80()*-0.0202762);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f940() {
   return (neuron0x3c290c0()*0.0390005);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f980() {
   return (neuron0x3c29620()*-0.108084);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30000() {
   return (neuron0x3c29840()*-0.0175029);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30040() {
   return (neuron0x3c29b80()*0.00466911);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30080() {
   return (neuron0x3c29ec0()*-0.0751151);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c300c0() {
   return (neuron0x3c2a200()*0.0303656);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30100() {
   return (neuron0x3c2a540()*0.0834082);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30140() {
   return (neuron0x3c2a880()*-0.799368);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c304c0() {
   return (neuron0x3c25d50()*-0.103673);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30500() {
   return (neuron0x3c26000()*0.00958172);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30540() {
   return (neuron0x3c26340()*-1.79376);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30580() {
   return (neuron0x3c26680()*0.0127068);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c305c0() {
   return (neuron0x3c269c0()*-0.0012759);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30600() {
   return (neuron0x3c26d00()*0.03532);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30640() {
   return (neuron0x3c27040()*0.0302767);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30680() {
   return (neuron0x3c27380()*0.0274681);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c306c0() {
   return (neuron0x3c276c0()*-0.0161469);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30700() {
   return (neuron0x3c27a00()*-0.00510389);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30740() {
   return (neuron0x3c27d40()*0.0395189);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30780() {
   return (neuron0x3c28080()*-1.91989);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c307c0() {
   return (neuron0x3c283c0()*0.027899);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30800() {
   return (neuron0x3c28700()*0.0528634);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30840() {
   return (neuron0x3c28a40()*0.0162109);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30880() {
   return (neuron0x3c28d80()*0.000179117);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30310() {
   return (neuron0x3c290c0()*-0.00528072);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30350() {
   return (neuron0x3c29620()*-0.0251282);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c309d0() {
   return (neuron0x3c29840()*-0.00668595);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30a10() {
   return (neuron0x3c29b80()*-0.000565827);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30a50() {
   return (neuron0x3c29ec0()*-0.0350369);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30a90() {
   return (neuron0x3c2a200()*-0.00120066);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30ad0() {
   return (neuron0x3c2a540()*-0.0072402);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30b10() {
   return (neuron0x3c2a880()*-3.61636);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c29510() {
   return (neuron0x3c25d50()*0.471749);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c29550() {
   return (neuron0x3c26000()*-1.42703);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c29590() {
   return (neuron0x3c26340()*-2.33677);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c295d0() {
   return (neuron0x3c26680()*1.3199);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c310a0() {
   return (neuron0x3c269c0()*0.491087);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c310e0() {
   return (neuron0x3c26d00()*0.19344);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31120() {
   return (neuron0x3c27040()*0.198038);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31160() {
   return (neuron0x3c27380()*0.804985);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c311a0() {
   return (neuron0x3c276c0()*-0.0160796);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c311e0() {
   return (neuron0x3c27a00()*-0.0522768);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31220() {
   return (neuron0x3c27d40()*-1.73932);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31260() {
   return (neuron0x3c28080()*0.522717);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c312a0() {
   return (neuron0x3c283c0()*0.20314);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c312e0() {
   return (neuron0x3c28700()*0.397591);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31320() {
   return (neuron0x3c28a40()*-0.22163);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31360() {
   return (neuron0x3c28d80()*-0.115724);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30ce0() {
   return (neuron0x3c290c0()*0.1416);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30d20() {
   return (neuron0x3c29620()*-0.391972);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c314b0() {
   return (neuron0x3c29840()*-0.288);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c314f0() {
   return (neuron0x3c29b80()*-0.59326);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31530() {
   return (neuron0x3c29ec0()*0.62359);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31570() {
   return (neuron0x3c2a200()*-0.492058);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c315b0() {
   return (neuron0x3c2a540()*0.253822);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c315f0() {
   return (neuron0x3c2a880()*0.827725);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31970() {
   return (neuron0x3c25d50()*0.00396422);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c319b0() {
   return (neuron0x3c26000()*0.014513);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c319f0() {
   return (neuron0x3c26340()*-0.54437);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31a30() {
   return (neuron0x3c26680()*-0.0378898);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31a70() {
   return (neuron0x3c269c0()*0.00963628);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31ab0() {
   return (neuron0x3c26d00()*0.012802);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31af0() {
   return (neuron0x3c27040()*0.0307555);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31b30() {
   return (neuron0x3c27380()*-0.00218454);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31b70() {
   return (neuron0x3c276c0()*0.0160336);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31bb0() {
   return (neuron0x3c27a00()*-0.0129402);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31bf0() {
   return (neuron0x3c27d40()*0.0171653);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31c30() {
   return (neuron0x3c28080()*-0.139467);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31c70() {
   return (neuron0x3c283c0()*-0.0869406);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31cb0() {
   return (neuron0x3c28700()*0.00758952);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31cf0() {
   return (neuron0x3c28a40()*-0.00536884);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31d30() {
   return (neuron0x3c28d80()*0.049161);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c317c0() {
   return (neuron0x3c290c0()*0.0246169);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31800() {
   return (neuron0x3c29620()*-0.0295098);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31e80() {
   return (neuron0x3c29840()*-0.00414516);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31ec0() {
   return (neuron0x3c29b80()*0.0170509);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31f00() {
   return (neuron0x3c29ec0()*0.0537061);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31f40() {
   return (neuron0x3c2a200()*-0.0253774);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31f80() {
   return (neuron0x3c2a540()*-0.0099319);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31fc0() {
   return (neuron0x3c2a880()*6.04529);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32340() {
   return (neuron0x3c25d50()*0.0725932);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32380() {
   return (neuron0x3c26000()*0.00676364);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c323c0() {
   return (neuron0x3c26340()*2.5172);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32400() {
   return (neuron0x3c26680()*-0.0106816);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32440() {
   return (neuron0x3c269c0()*-0.0208083);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32480() {
   return (neuron0x3c26d00()*0.0208471);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c324c0() {
   return (neuron0x3c27040()*-0.0328066);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32500() {
   return (neuron0x3c27380()*-0.049825);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32540() {
   return (neuron0x3c276c0()*0.0355562);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32580() {
   return (neuron0x3c27a00()*-0.0146508);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c325c0() {
   return (neuron0x3c27d40()*0.00980651);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32600() {
   return (neuron0x3c28080()*0.318386);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32640() {
   return (neuron0x3c283c0()*0.0368649);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32680() {
   return (neuron0x3c28700()*0.013966);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c326c0() {
   return (neuron0x3c28a40()*-0.0412558);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32700() {
   return (neuron0x3c28d80()*-0.0246062);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32190() {
   return (neuron0x3c290c0()*-0.0350478);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c321d0() {
   return (neuron0x3c29620()*-0.00112737);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2ef60() {
   return (neuron0x3c29840()*0.0389316);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2efa0() {
   return (neuron0x3c29b80()*0.0153);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2efe0() {
   return (neuron0x3c29ec0()*0.0237199);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f020() {
   return (neuron0x3c2a200()*0.0141305);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f060() {
   return (neuron0x3c2a540()*-0.0100591);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f0a0() {
   return (neuron0x3c2a880()*8.7893);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f420() {
   return (neuron0x3c25d50()*-0.0505144);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f460() {
   return (neuron0x3c26000()*-3.37986);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f4a0() {
   return (neuron0x3c26340()*2.22352);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f4e0() {
   return (neuron0x3c26680()*0.0590227);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f520() {
   return (neuron0x3c269c0()*0.0209323);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f560() {
   return (neuron0x3c26d00()*0.068957);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f5a0() {
   return (neuron0x3c27040()*-0.0397465);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f5e0() {
   return (neuron0x3c27380()*-0.0334724);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f620() {
   return (neuron0x3c276c0()*0.0842945);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f660() {
   return (neuron0x3c27a00()*0.0779142);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f6a0() {
   return (neuron0x3c27d40()*-0.0141085);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f6e0() {
   return (neuron0x3c28080()*-0.131063);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f720() {
   return (neuron0x3c283c0()*-0.0569796);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33860() {
   return (neuron0x3c28700()*0.0692567);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c338a0() {
   return (neuron0x3c28a40()*-0.0648474);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c338e0() {
   return (neuron0x3c28d80()*0.0848665);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f270() {
   return (neuron0x3c290c0()*0.0100887);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f2b0() {
   return (neuron0x3c29620()*0.0843498);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33a30() {
   return (neuron0x3c29840()*-0.00932117);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33a70() {
   return (neuron0x3c29b80()*0.0489101);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33ab0() {
   return (neuron0x3c29ec0()*-0.0328602);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33af0() {
   return (neuron0x3c2a200()*-0.0233454);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33b30() {
   return (neuron0x3c2a540()*-0.00695887);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33b70() {
   return (neuron0x3c2a880()*0.745357);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33ef0() {
   return (neuron0x3c25d50()*-0.00775424);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33f30() {
   return (neuron0x3c26000()*-3.47297);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33f70() {
   return (neuron0x3c26340()*-1.87245);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33fb0() {
   return (neuron0x3c26680()*-0.00872579);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33ff0() {
   return (neuron0x3c269c0()*0.0333449);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34030() {
   return (neuron0x3c26d00()*-0.110828);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34070() {
   return (neuron0x3c27040()*-0.0376877);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c340b0() {
   return (neuron0x3c27380()*-0.0997689);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c340f0() {
   return (neuron0x3c276c0()*-0.134782);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34130() {
   return (neuron0x3c27a00()*0.0218956);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34170() {
   return (neuron0x3c27d40()*-0.141309);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c341b0() {
   return (neuron0x3c28080()*0.849384);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c341f0() {
   return (neuron0x3c283c0()*0.0781971);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34230() {
   return (neuron0x3c28700()*0.0487334);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34270() {
   return (neuron0x3c28a40()*-0.0209149);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c342b0() {
   return (neuron0x3c28d80()*0.0688097);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33d40() {
   return (neuron0x3c290c0()*-0.065342);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33d80() {
   return (neuron0x3c29620()*0.121084);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34400() {
   return (neuron0x3c29840()*-0.163901);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34440() {
   return (neuron0x3c29b80()*0.110011);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34480() {
   return (neuron0x3c29ec0()*-0.0502017);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c344c0() {
   return (neuron0x3c2a200()*0.0494926);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34500() {
   return (neuron0x3c2a540()*-0.0460841);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34540() {
   return (neuron0x3c2a880()*-0.0638791);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c348c0() {
   return (neuron0x3c25d50()*-0.0306671);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34900() {
   return (neuron0x3c26000()*4.61771);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34940() {
   return (neuron0x3c26340()*0.0326508);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34980() {
   return (neuron0x3c26680()*0.0605044);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c349c0() {
   return (neuron0x3c269c0()*-0.0526412);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34a00() {
   return (neuron0x3c26d00()*-0.0125096);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34a40() {
   return (neuron0x3c27040()*0.0422433);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34a80() {
   return (neuron0x3c27380()*0.0161052);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34ac0() {
   return (neuron0x3c276c0()*0.00762905);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34b00() {
   return (neuron0x3c27a00()*0.0317612);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34b40() {
   return (neuron0x3c27d40()*-0.0266779);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34b80() {
   return (neuron0x3c28080()*-0.0740492);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34bc0() {
   return (neuron0x3c283c0()*-0.0618431);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34c00() {
   return (neuron0x3c28700()*0.0754246);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34c40() {
   return (neuron0x3c28a40()*0.0514287);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34c80() {
   return (neuron0x3c28d80()*0.0218558);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34710() {
   return (neuron0x3c290c0()*-0.0772625);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34750() {
   return (neuron0x3c29620()*-0.0730265);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34dd0() {
   return (neuron0x3c29840()*0.0264265);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34e10() {
   return (neuron0x3c29b80()*-0.00523802);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34e50() {
   return (neuron0x3c29ec0()*-0.0208762);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34e90() {
   return (neuron0x3c2a200()*-0.011114);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34ed0() {
   return (neuron0x3c2a540()*-0.002166);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34f10() {
   return (neuron0x3c2a880()*4.29378);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35290() {
   return (neuron0x3c25d50()*0.573049);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c352d0() {
   return (neuron0x3c26000()*-0.197215);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35310() {
   return (neuron0x3c26340()*1.87188);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35350() {
   return (neuron0x3c26680()*-0.280951);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35390() {
   return (neuron0x3c269c0()*0.457277);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c353d0() {
   return (neuron0x3c26d00()*-0.269661);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35410() {
   return (neuron0x3c27040()*-0.28152);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35450() {
   return (neuron0x3c27380()*0.230115);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35490() {
   return (neuron0x3c276c0()*-0.193004);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c354d0() {
   return (neuron0x3c27a00()*-0.247294);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35510() {
   return (neuron0x3c27d40()*-0.359715);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35550() {
   return (neuron0x3c28080()*0.341537);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35590() {
   return (neuron0x3c283c0()*0.501271);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c355d0() {
   return (neuron0x3c28700()*0.560999);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35610() {
   return (neuron0x3c28a40()*-0.220367);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35650() {
   return (neuron0x3c28d80()*-0.31359);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c350e0() {
   return (neuron0x3c290c0()*-0.527414);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35120() {
   return (neuron0x3c29620()*0.106357);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c357a0() {
   return (neuron0x3c29840()*-0.391581);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c357e0() {
   return (neuron0x3c29b80()*-0.25846);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35820() {
   return (neuron0x3c29ec0()*-0.162391);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35860() {
   return (neuron0x3c2a200()*0.043619);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c358a0() {
   return (neuron0x3c2a540()*-0.0748201);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c358e0() {
   return (neuron0x3c2a880()*-0.563195);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35c60() {
   return (neuron0x3c25d50()*0.362216);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c25ee0() {
   return (neuron0x3c26000()*-6.11557);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c25f20() {
   return (neuron0x3c26340()*-1.33645);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c26220() {
   return (neuron0x3c26680()*-3.07685);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c26260() {
   return (neuron0x3c269c0()*0.349178);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c26560() {
   return (neuron0x3c26d00()*-1.30039);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c265a0() {
   return (neuron0x3c27040()*-0.170797);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c268a0() {
   return (neuron0x3c27380()*0.982154);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c268e0() {
   return (neuron0x3c276c0()*-0.0385081);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c26be0() {
   return (neuron0x3c27a00()*1.0491);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c26c20() {
   return (neuron0x3c27d40()*1.61916);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c26f20() {
   return (neuron0x3c28080()*-0.763568);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c26f60() {
   return (neuron0x3c283c0()*0.521381);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c27260() {
   return (neuron0x3c28700()*-0.586629);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c272a0() {
   return (neuron0x3c28a40()*0.887841);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c275a0() {
   return (neuron0x3c28d80()*-1.12014);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c275e0() {
   return (neuron0x3c290c0()*-1.2754);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c278e0() {
   return (neuron0x3c29620()*0.580647);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c27920() {
   return (neuron0x3c29840()*-2.14848);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c27c20() {
   return (neuron0x3c29b80()*0.579161);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c27c60() {
   return (neuron0x3c29ec0()*1.33199);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c27f60() {
   return (neuron0x3c2a200()*0.200442);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c27fa0() {
   return (neuron0x3c2a540()*-0.967307);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c282a0() {
   return (neuron0x3c2a880()*-0.339588);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c282e0() {
   return (neuron0x3c25d50()*0.301988);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c28fa0() {
   return (neuron0x3c26000()*-4.21146);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c28fe0() {
   return (neuron0x3c26340()*-0.541268);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35ab0() {
   return (neuron0x3c26680()*-2.92435);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35af0() {
   return (neuron0x3c269c0()*0.0837542);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c292e0() {
   return (neuron0x3c26d00()*-1.30787);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c29320() {
   return (neuron0x3c27040()*0.235637);
}

double NNfunction_nn_chi2_charge1p::synapse0x26d62a0() {
   return (neuron0x3c27380()*0.946289);
}

double NNfunction_nn_chi2_charge1p::synapse0x26d62e0() {
   return (neuron0x3c276c0()*-0.387648);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c29a60() {
   return (neuron0x3c27a00()*1.03583);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c29aa0() {
   return (neuron0x3c27d40()*1.654);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c29da0() {
   return (neuron0x3c28080()*-1.2174);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c29de0() {
   return (neuron0x3c283c0()*0.223032);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2a0e0() {
   return (neuron0x3c28700()*-0.395208);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2a120() {
   return (neuron0x3c28a40()*0.967257);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2a420() {
   return (neuron0x3c28d80()*-0.590582);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2a460() {
   return (neuron0x3c290c0()*-1.01087);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2a760() {
   return (neuron0x3c29620()*0.624479);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2a7a0() {
   return (neuron0x3c29840()*-2.14583);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2aaa0() {
   return (neuron0x3c29b80()*0.623325);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2aae0() {
   return (neuron0x3c29ec0()*1.34183);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c285e0() {
   return (neuron0x3c2a200()*0.180052);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c28620() {
   return (neuron0x3c2a540()*-0.901322);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c379d0() {
   return (neuron0x3c2a880()*-0.144974);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c37d50() {
   return (neuron0x3c25d50()*-0.237737);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c37d90() {
   return (neuron0x3c26000()*-0.0517465);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c37dd0() {
   return (neuron0x3c26340()*0.0682974);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c37e10() {
   return (neuron0x3c26680()*-0.406268);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c37e50() {
   return (neuron0x3c269c0()*0.286011);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c37e90() {
   return (neuron0x3c26d00()*1.07667);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c37ed0() {
   return (neuron0x3c27040()*-0.0908312);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c37f10() {
   return (neuron0x3c27380()*0.882328);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c37f50() {
   return (neuron0x3c276c0()*-0.960988);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c37f90() {
   return (neuron0x3c27a00()*-1.34245);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c37fd0() {
   return (neuron0x3c27d40()*-0.494297);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38010() {
   return (neuron0x3c28080()*0.497372);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38050() {
   return (neuron0x3c283c0()*0.025335);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38090() {
   return (neuron0x3c28700()*0.934862);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c380d0() {
   return (neuron0x3c28a40()*-0.557286);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38110() {
   return (neuron0x3c28d80()*-1.05927);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c37ba0() {
   return (neuron0x3c290c0()*1.19629);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c37be0() {
   return (neuron0x3c29620()*0.598434);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38260() {
   return (neuron0x3c29840()*-0.66982);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c382a0() {
   return (neuron0x3c29b80()*0.520275);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c382e0() {
   return (neuron0x3c29ec0()*-0.0894231);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38320() {
   return (neuron0x3c2a200()*0.118805);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38360() {
   return (neuron0x3c2a540()*-0.895572);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c383a0() {
   return (neuron0x3c2a880()*-1.55299);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38720() {
   return (neuron0x3c25d50()*0.792744);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38760() {
   return (neuron0x3c26000()*-0.595343);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c387a0() {
   return (neuron0x3c26340()*0.0523122);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c387e0() {
   return (neuron0x3c26680()*0.327804);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38820() {
   return (neuron0x3c269c0()*0.598626);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38860() {
   return (neuron0x3c26d00()*-0.59946);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c388a0() {
   return (neuron0x3c27040()*0.944175);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c388e0() {
   return (neuron0x3c27380()*0.460464);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38920() {
   return (neuron0x3c276c0()*-0.303857);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38960() {
   return (neuron0x3c27a00()*-0.366559);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c389a0() {
   return (neuron0x3c27d40()*-0.273211);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c389e0() {
   return (neuron0x3c28080()*1.69103);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38a20() {
   return (neuron0x3c283c0()*-0.913865);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38a60() {
   return (neuron0x3c28700()*-0.472506);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38aa0() {
   return (neuron0x3c28a40()*-0.87603);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38ae0() {
   return (neuron0x3c28d80()*0.895632);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38570() {
   return (neuron0x3c290c0()*0.484101);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c385b0() {
   return (neuron0x3c29620()*-1.11038);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38c30() {
   return (neuron0x3c29840()*-1.04999);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38c70() {
   return (neuron0x3c29b80()*-0.393622);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38cb0() {
   return (neuron0x3c29ec0()*0.892641);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38cf0() {
   return (neuron0x3c2a200()*-0.282913);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38d30() {
   return (neuron0x3c2a540()*0.201478);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38d70() {
   return (neuron0x3c2a880()*0.904021);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c390f0() {
   return (neuron0x3c25d50()*-0.0167141);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39130() {
   return (neuron0x3c26000()*7.0627);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39170() {
   return (neuron0x3c26340()*-1.31388);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c391b0() {
   return (neuron0x3c26680()*-0.102621);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c391f0() {
   return (neuron0x3c269c0()*0.0723838);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39230() {
   return (neuron0x3c26d00()*-0.0675658);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39270() {
   return (neuron0x3c27040()*-0.0327157);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c392b0() {
   return (neuron0x3c27380()*-0.0180855);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c392f0() {
   return (neuron0x3c276c0()*0.0121262);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39330() {
   return (neuron0x3c27a00()*-0.0513266);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39370() {
   return (neuron0x3c27d40()*-0.0705835);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c393b0() {
   return (neuron0x3c28080()*0.0226341);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c393f0() {
   return (neuron0x3c283c0()*-0.0444339);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39430() {
   return (neuron0x3c28700()*-0.030561);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39470() {
   return (neuron0x3c28a40()*0.018704);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c394b0() {
   return (neuron0x3c28d80()*0.0256362);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38f40() {
   return (neuron0x3c290c0()*0.0634626);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38f80() {
   return (neuron0x3c29620()*0.13159);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39600() {
   return (neuron0x3c29840()*-0.134683);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39640() {
   return (neuron0x3c29b80()*0.0539944);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39680() {
   return (neuron0x3c29ec0()*0.042528);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c396c0() {
   return (neuron0x3c2a200()*-0.00300115);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39700() {
   return (neuron0x3c2a540()*-0.0164775);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39740() {
   return (neuron0x3c2a880()*-0.0265867);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39ac0() {
   return (neuron0x3c25d50()*0.291702);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39b00() {
   return (neuron0x3c26000()*0.637724);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39b40() {
   return (neuron0x3c26340()*-0.57738);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39b80() {
   return (neuron0x3c26680()*-0.235763);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39bc0() {
   return (neuron0x3c269c0()*0.0859257);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39c00() {
   return (neuron0x3c26d00()*-0.116313);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39c40() {
   return (neuron0x3c27040()*-0.308279);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39c80() {
   return (neuron0x3c27380()*-0.439311);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39cc0() {
   return (neuron0x3c276c0()*0.154923);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39d00() {
   return (neuron0x3c27a00()*0.729502);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39d40() {
   return (neuron0x3c27d40()*0.247219);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39d80() {
   return (neuron0x3c28080()*-0.0716667);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39dc0() {
   return (neuron0x3c283c0()*0.273596);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39e00() {
   return (neuron0x3c28700()*-0.55709);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39e40() {
   return (neuron0x3c28a40()*0.113448);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39e80() {
   return (neuron0x3c28d80()*0.531773);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39910() {
   return (neuron0x3c290c0()*-0.544097);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39950() {
   return (neuron0x3c29620()*-1.02872);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39fd0() {
   return (neuron0x3c29840()*0.597724);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a010() {
   return (neuron0x3c29b80()*0.13629);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a050() {
   return (neuron0x3c29ec0()*0.236401);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a090() {
   return (neuron0x3c2a200()*-0.292422);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a0d0() {
   return (neuron0x3c2a540()*0.499143);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a110() {
   return (neuron0x3c2a880()*1.38209);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a490() {
   return (neuron0x3c25d50()*-0.0293884);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a4d0() {
   return (neuron0x3c26000()*-0.0372588);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a510() {
   return (neuron0x3c26340()*0.633598);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a550() {
   return (neuron0x3c26680()*-0.0338073);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a590() {
   return (neuron0x3c269c0()*0.00793682);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a5d0() {
   return (neuron0x3c26d00()*-0.0324501);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a610() {
   return (neuron0x3c27040()*-0.00389495);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a650() {
   return (neuron0x3c27380()*-0.0151251);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a690() {
   return (neuron0x3c276c0()*-0.00314483);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32850() {
   return (neuron0x3c27a00()*-0.00926613);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32890() {
   return (neuron0x3c27d40()*-0.00223263);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c328d0() {
   return (neuron0x3c28080()*0.975494);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32910() {
   return (neuron0x3c283c0()*-0.0886997);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32950() {
   return (neuron0x3c28700()*-0.0235169);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32990() {
   return (neuron0x3c28a40()*-0.00589163);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c329d0() {
   return (neuron0x3c28d80()*0.00237774);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a2e0() {
   return (neuron0x3c290c0()*0.00709398);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a320() {
   return (neuron0x3c29620()*-0.0430148);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32b20() {
   return (neuron0x3c29840()*0.000956133);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32b60() {
   return (neuron0x3c29b80()*-0.00891346);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32ba0() {
   return (neuron0x3c29ec0()*0.0559413);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32be0() {
   return (neuron0x3c2a200()*-0.0143012);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32c20() {
   return (neuron0x3c2a540()*-0.00629299);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32c60() {
   return (neuron0x3c2a880()*-2.8553);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32fe0() {
   return (neuron0x3c25d50()*0.020973);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33020() {
   return (neuron0x3c26000()*-2.77387);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33060() {
   return (neuron0x3c26340()*1.86501);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c330a0() {
   return (neuron0x3c26680()*0.0510137);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c330e0() {
   return (neuron0x3c269c0()*-0.0328238);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33120() {
   return (neuron0x3c26d00()*0.0390991);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33160() {
   return (neuron0x3c27040()*0.0292621);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c331a0() {
   return (neuron0x3c27380()*0.00883346);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c331e0() {
   return (neuron0x3c276c0()*0.0273377);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33220() {
   return (neuron0x3c27a00()*0.0488646);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33260() {
   return (neuron0x3c27d40()*0.0568139);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c332a0() {
   return (neuron0x3c28080()*-0.141638);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c332e0() {
   return (neuron0x3c283c0()*-0.0271263);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33320() {
   return (neuron0x3c28700()*-0.0130316);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33360() {
   return (neuron0x3c28a40()*-0.0255502);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c333a0() {
   return (neuron0x3c28d80()*0.0722063);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32e30() {
   return (neuron0x3c290c0()*0.0291638);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32e70() {
   return (neuron0x3c29620()*0.038148);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c334f0() {
   return (neuron0x3c29840()*0.0218266);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33530() {
   return (neuron0x3c29b80()*0.097238);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33570() {
   return (neuron0x3c29ec0()*0.0236726);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c335b0() {
   return (neuron0x3c2a200()*-0.0647293);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c335f0() {
   return (neuron0x3c2a540()*0.0399645);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33630() {
   return (neuron0x3c2a880()*3.3647);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33800() {
   return (neuron0x3c25d50()*-0.034674);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c890() {
   return (neuron0x3c26000()*0.0507589);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c8d0() {
   return (neuron0x3c26340()*-1.0846);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c910() {
   return (neuron0x3c26680()*0.038066);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c950() {
   return (neuron0x3c269c0()*-0.00172901);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c990() {
   return (neuron0x3c26d00()*0.0546292);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c9d0() {
   return (neuron0x3c27040()*0.0357681);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ca10() {
   return (neuron0x3c27380()*0.0235312);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ca50() {
   return (neuron0x3c276c0()*0.010525);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ca90() {
   return (neuron0x3c27a00()*0.0151292);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3cad0() {
   return (neuron0x3c27d40()*0.0362949);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3cb10() {
   return (neuron0x3c28080()*-1.66518);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3cb50() {
   return (neuron0x3c283c0()*0.0923637);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3cb90() {
   return (neuron0x3c28700()*0.0527816);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3cbd0() {
   return (neuron0x3c28a40()*0.0219363);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3cc10() {
   return (neuron0x3c28d80()*0.034957);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c6e0() {
   return (neuron0x3c290c0()*0.0159069);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c720() {
   return (neuron0x3c29620()*0.0416194);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3cd60() {
   return (neuron0x3c29840()*0.0108473);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3cda0() {
   return (neuron0x3c29b80()*0.00132802);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3cde0() {
   return (neuron0x3c29ec0()*-0.0422892);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ce20() {
   return (neuron0x3c2a200()*0.0202824);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ce60() {
   return (neuron0x3c2a540()*-0.00162435);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3cea0() {
   return (neuron0x3c2a880()*3.94145);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d220() {
   return (neuron0x3c25d50()*-0.0333055);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d260() {
   return (neuron0x3c26000()*-3.13881);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d2a0() {
   return (neuron0x3c26340()*2.03333);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d2e0() {
   return (neuron0x3c26680()*0.0278269);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d320() {
   return (neuron0x3c269c0()*0.0173974);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d360() {
   return (neuron0x3c26d00()*0.0461471);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d3a0() {
   return (neuron0x3c27040()*-0.0313256);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d3e0() {
   return (neuron0x3c27380()*-0.0261331);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d420() {
   return (neuron0x3c276c0()*0.0943586);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d460() {
   return (neuron0x3c27a00()*0.0573659);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d4a0() {
   return (neuron0x3c27d40()*-0.012924);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d4e0() {
   return (neuron0x3c28080()*-0.161338);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d520() {
   return (neuron0x3c283c0()*-0.0509574);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d560() {
   return (neuron0x3c28700()*0.0585759);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d5a0() {
   return (neuron0x3c28a40()*-0.0301633);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d5e0() {
   return (neuron0x3c28d80()*0.0593635);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d070() {
   return (neuron0x3c290c0()*0.0151663);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d0b0() {
   return (neuron0x3c29620()*0.0671701);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d730() {
   return (neuron0x3c29840()*0.00714231);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d770() {
   return (neuron0x3c29b80()*0.0366066);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d7b0() {
   return (neuron0x3c29ec0()*-0.0250917);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d7f0() {
   return (neuron0x3c2a200()*-0.0263529);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d830() {
   return (neuron0x3c2a540()*0.0235377);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d870() {
   return (neuron0x3c2a880()*-0.0890466);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3dbf0() {
   return (neuron0x3c25d50()*-0.0714823);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3dc30() {
   return (neuron0x3c26000()*3.75697);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3dc70() {
   return (neuron0x3c26340()*-1.25135);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3dcb0() {
   return (neuron0x3c26680()*0.838546);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3dcf0() {
   return (neuron0x3c269c0()*0.0512912);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3dd30() {
   return (neuron0x3c26d00()*0.357707);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3dd70() {
   return (neuron0x3c27040()*0.223678);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ddb0() {
   return (neuron0x3c27380()*-0.420131);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ddf0() {
   return (neuron0x3c276c0()*-0.354388);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3de30() {
   return (neuron0x3c27a00()*-0.444042);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3de70() {
   return (neuron0x3c27d40()*0.314758);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3deb0() {
   return (neuron0x3c28080()*-0.747223);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3def0() {
   return (neuron0x3c283c0()*0.0331812);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3df30() {
   return (neuron0x3c28700()*0.32273);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3df70() {
   return (neuron0x3c28a40()*-0.480282);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3dfb0() {
   return (neuron0x3c28d80()*1.14154);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3da40() {
   return (neuron0x3c290c0()*0.338666);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3da80() {
   return (neuron0x3c29620()*-0.836845);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e100() {
   return (neuron0x3c29840()*0.855751);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e140() {
   return (neuron0x3c29b80()*-0.434787);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e180() {
   return (neuron0x3c29ec0()*-0.37556);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e1c0() {
   return (neuron0x3c2a200()*0.0147335);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e200() {
   return (neuron0x3c2a540()*0.445202);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e240() {
   return (neuron0x3c2a880()*-0.771278);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e5c0() {
   return (neuron0x3c25d50()*-0.0132081);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e600() {
   return (neuron0x3c26000()*-0.0159112);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e640() {
   return (neuron0x3c26340()*-4.44703);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e680() {
   return (neuron0x3c26680()*0.0275942);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e6c0() {
   return (neuron0x3c269c0()*0.0680926);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e700() {
   return (neuron0x3c26d00()*-0.0678379);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e740() {
   return (neuron0x3c27040()*0.0763452);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e780() {
   return (neuron0x3c27380()*0.0303193);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e7c0() {
   return (neuron0x3c276c0()*-0.0272653);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e800() {
   return (neuron0x3c27a00()*-0.0854313);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e840() {
   return (neuron0x3c27d40()*-0.0755577);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e880() {
   return (neuron0x3c28080()*-0.222518);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e8c0() {
   return (neuron0x3c283c0()*-0.048656);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e900() {
   return (neuron0x3c28700()*-0.0210112);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e940() {
   return (neuron0x3c28a40()*0.0641993);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e980() {
   return (neuron0x3c28d80()*0.0244912);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e410() {
   return (neuron0x3c290c0()*0.0940822);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e450() {
   return (neuron0x3c29620()*0.155404);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ead0() {
   return (neuron0x3c29840()*-0.0756243);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3eb10() {
   return (neuron0x3c29b80()*0.00372503);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3eb50() {
   return (neuron0x3c29ec0()*0.0280545);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3eb90() {
   return (neuron0x3c2a200()*0.0387384);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ebd0() {
   return (neuron0x3c2a540()*-0.0139171);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ec10() {
   return (neuron0x3c2a880()*0.0156965);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ef90() {
   return (neuron0x3c25d50()*0.0135506);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3efd0() {
   return (neuron0x3c26000()*0.00966004);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f010() {
   return (neuron0x3c26340()*-0.194662);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f050() {
   return (neuron0x3c26680()*-0.000889793);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f090() {
   return (neuron0x3c269c0()*-0.000390342);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f0d0() {
   return (neuron0x3c26d00()*0.012705);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f110() {
   return (neuron0x3c27040()*-0.00106575);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f150() {
   return (neuron0x3c27380()*-0.000779216);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f190() {
   return (neuron0x3c276c0()*0.00966283);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f1d0() {
   return (neuron0x3c27a00()*0.0133503);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f210() {
   return (neuron0x3c27d40()*0.00698155);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f250() {
   return (neuron0x3c28080()*-0.00286748);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f290() {
   return (neuron0x3c283c0()*-0.00862892);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f2d0() {
   return (neuron0x3c28700()*-0.0104963);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f310() {
   return (neuron0x3c28a40()*-0.00568044);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f350() {
   return (neuron0x3c28d80()*-0.00291846);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ede0() {
   return (neuron0x3c290c0()*-0.0118303);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ee20() {
   return (neuron0x3c29620()*-0.00508955);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f4a0() {
   return (neuron0x3c29840()*-0.00523622);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f4e0() {
   return (neuron0x3c29b80()*0.00610283);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f520() {
   return (neuron0x3c29ec0()*-0.0063156);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f560() {
   return (neuron0x3c2a200()*0.00336698);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f5a0() {
   return (neuron0x3c2a540()*0.00309962);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f5e0() {
   return (neuron0x3c2a880()*0.0427807);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f960() {
   return (neuron0x3c25d50()*0.558831);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f9a0() {
   return (neuron0x3c26000()*2.56276);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f9e0() {
   return (neuron0x3c26340()*-0.644509);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3fa20() {
   return (neuron0x3c26680()*0.565238);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3fa60() {
   return (neuron0x3c269c0()*0.67931);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3faa0() {
   return (neuron0x3c26d00()*0.636557);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3fae0() {
   return (neuron0x3c27040()*0.0842148);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3fb20() {
   return (neuron0x3c27380()*1.27544);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3fb60() {
   return (neuron0x3c276c0()*-1.25922);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3fba0() {
   return (neuron0x3c27a00()*-0.889233);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3fbe0() {
   return (neuron0x3c27d40()*-1.75417);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3fc20() {
   return (neuron0x3c28080()*0.366801);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3fc60() {
   return (neuron0x3c283c0()*0.21806);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3fca0() {
   return (neuron0x3c28700()*0.985253);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3fce0() {
   return (neuron0x3c28a40()*-0.864787);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3fd20() {
   return (neuron0x3c28d80()*-0.600262);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f7b0() {
   return (neuron0x3c290c0()*0.439486);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f7f0() {
   return (neuron0x3c29620()*1.02587);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3fe70() {
   return (neuron0x3c29840()*-1.06914);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3feb0() {
   return (neuron0x3c29b80()*-0.0390604);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3fef0() {
   return (neuron0x3c29ec0()*0.585455);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ff30() {
   return (neuron0x3c2a200()*-0.493201);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ff70() {
   return (neuron0x3c2a540()*-0.326667);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ffb0() {
   return (neuron0x3c2a880()*-0.642197);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40330() {
   return (neuron0x3c25d50()*0.431248);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40370() {
   return (neuron0x3c26000()*0.120587);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c403b0() {
   return (neuron0x3c26340()*0.299533);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c403f0() {
   return (neuron0x3c26680()*0.367807);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40430() {
   return (neuron0x3c269c0()*-0.0378697);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40470() {
   return (neuron0x3c26d00()*0.311426);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c404b0() {
   return (neuron0x3c27040()*-0.426595);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c404f0() {
   return (neuron0x3c27380()*-0.43705);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40530() {
   return (neuron0x3c276c0()*0.79552);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40570() {
   return (neuron0x3c27a00()*0.527085);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c405b0() {
   return (neuron0x3c27d40()*-0.759035);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c405f0() {
   return (neuron0x3c28080()*1.53878);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40630() {
   return (neuron0x3c283c0()*-0.211842);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40670() {
   return (neuron0x3c28700()*0.192017);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c406b0() {
   return (neuron0x3c28a40()*-1.49797);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c406f0() {
   return (neuron0x3c28d80()*-0.876494);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40180() {
   return (neuron0x3c290c0()*0.418899);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c401c0() {
   return (neuron0x3c29620()*-0.111072);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40840() {
   return (neuron0x3c29840()*0.782553);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40880() {
   return (neuron0x3c29b80()*0.779439);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c408c0() {
   return (neuron0x3c29ec0()*-0.533314);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40900() {
   return (neuron0x3c2a200()*-0.210753);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40940() {
   return (neuron0x3c2a540()*-0.447038);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40980() {
   return (neuron0x3c2a880()*0.427);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40d00() {
   return (neuron0x3c25d50()*0.00322919);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40d40() {
   return (neuron0x3c26000()*-0.00309877);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40d80() {
   return (neuron0x3c26340()*-0.121011);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40dc0() {
   return (neuron0x3c26680()*-0.00417785);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40e00() {
   return (neuron0x3c269c0()*0.00150624);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40e40() {
   return (neuron0x3c26d00()*0.000944897);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40e80() {
   return (neuron0x3c27040()*0.0022991);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40ec0() {
   return (neuron0x3c27380()*0.00239083);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40f00() {
   return (neuron0x3c276c0()*0.000225859);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40f40() {
   return (neuron0x3c27a00()*-0.0015777);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40f80() {
   return (neuron0x3c27d40()*0.0065513);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40fc0() {
   return (neuron0x3c28080()*-0.0564426);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c41000() {
   return (neuron0x3c283c0()*-0.00704518);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c41040() {
   return (neuron0x3c28700()*-0.0164465);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c41080() {
   return (neuron0x3c28a40()*0.00669181);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c410c0() {
   return (neuron0x3c28d80()*0.00124436);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40b50() {
   return (neuron0x3c290c0()*-0.011873);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c40b90() {
   return (neuron0x3c29620()*-0.0101797);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c41210() {
   return (neuron0x3c29840()*-0.00986088);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c41250() {
   return (neuron0x3c29b80()*0.00939279);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c41290() {
   return (neuron0x3c29ec0()*0.001469);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c412d0() {
   return (neuron0x3c2a200()*0.00124871);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c41310() {
   return (neuron0x3c2a540()*-0.000925526);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c41350() {
   return (neuron0x3c2a880()*16.4054);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c416d0() {
   return (neuron0x3c25d50()*-0.054115);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35ca0() {
   return (neuron0x3c26000()*-0.000101685);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35ce0() {
   return (neuron0x3c26340()*-0.144907);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35d20() {
   return (neuron0x3c26680()*0.00287626);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35f70() {
   return (neuron0x3c269c0()*0.00283294);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35fb0() {
   return (neuron0x3c26d00()*0.011797);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35ff0() {
   return (neuron0x3c27040()*0.0193701);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c36240() {
   return (neuron0x3c27380()*0.00678651);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c36280() {
   return (neuron0x3c276c0()*0.0028034);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c364d0() {
   return (neuron0x3c27a00()*0.00484916);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c36510() {
   return (neuron0x3c27d40()*0.00947395);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c36550() {
   return (neuron0x3c28080()*-0.0659176);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c367a0() {
   return (neuron0x3c283c0()*0.0030529);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c367e0() {
   return (neuron0x3c28700()*0.00810231);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c36a30() {
   return (neuron0x3c28a40()*0.0034757);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c36a70() {
   return (neuron0x3c28d80()*0.0133615);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c41520() {
   return (neuron0x3c290c0()*0.00179642);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c41560() {
   return (neuron0x3c29620()*0.00412973);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c36bc0() {
   return (neuron0x3c29840()*0.00389322);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c370d0() {
   return (neuron0x3c29b80()*0.00508764);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c37110() {
   return (neuron0x3c29ec0()*-0.00672243);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c37150() {
   return (neuron0x3c2a200()*0.00361199);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c373a0() {
   return (neuron0x3c2a540()*-0.00317962);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c373e0() {
   return (neuron0x3c2a880()*-19.3114);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c36c90() {
   return (neuron0x3c25d50()*0.881465);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c36cd0() {
   return (neuron0x3c26000()*-0.388862);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c36d10() {
   return (neuron0x3c26340()*0.036683);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c36d50() {
   return (neuron0x3c26680()*0.982207);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c376d0() {
   return (neuron0x3c269c0()*-0.172463);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c43a20() {
   return (neuron0x3c26d00()*0.419643);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c43a60() {
   return (neuron0x3c27040()*0.429973);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c43aa0() {
   return (neuron0x3c27380()*0.283798);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c43ae0() {
   return (neuron0x3c276c0()*-0.317057);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c43b20() {
   return (neuron0x3c27a00()*-0.389148);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c43b60() {
   return (neuron0x3c27d40()*-0.190209);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c43ba0() {
   return (neuron0x3c28080()*0.0156907);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c43be0() {
   return (neuron0x3c283c0()*-0.360061);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c43c20() {
   return (neuron0x3c28700()*0.327673);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c43c60() {
   return (neuron0x3c28a40()*-0.0335287);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c43ca0() {
   return (neuron0x3c28d80()*0.0774355);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c375b0() {
   return (neuron0x3c290c0()*0.185319);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c375f0() {
   return (neuron0x3c29620()*0.251677);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c43df0() {
   return (neuron0x3c29840()*-0.577418);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c43e30() {
   return (neuron0x3c29b80()*0.0669428);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c43e70() {
   return (neuron0x3c29ec0()*0.169396);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c43eb0() {
   return (neuron0x3c2a200()*0.169502);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c43ef0() {
   return (neuron0x3c2a540()*-0.428208);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c43f30() {
   return (neuron0x3c2a880()*1.64674);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c442b0() {
   return (neuron0x3c25d50()*0.198985);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c442f0() {
   return (neuron0x3c26000()*0.537302);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44330() {
   return (neuron0x3c26340()*-0.783999);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44370() {
   return (neuron0x3c26680()*1.40448);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c443b0() {
   return (neuron0x3c269c0()*-0.126466);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c443f0() {
   return (neuron0x3c26d00()*0.351688);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44430() {
   return (neuron0x3c27040()*0.219227);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44470() {
   return (neuron0x3c27380()*-0.276573);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c444b0() {
   return (neuron0x3c276c0()*0.443285);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c444f0() {
   return (neuron0x3c27a00()*-0.153938);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44530() {
   return (neuron0x3c27d40()*-0.0240723);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44570() {
   return (neuron0x3c28080()*-1.66175);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c445b0() {
   return (neuron0x3c283c0()*0.681235);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c445f0() {
   return (neuron0x3c28700()*-0.280693);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44630() {
   return (neuron0x3c28a40()*-0.503598);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44670() {
   return (neuron0x3c28d80()*0.44801);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44100() {
   return (neuron0x3c290c0()*-0.371641);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44140() {
   return (neuron0x3c29620()*0.614069);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c447c0() {
   return (neuron0x3c29840()*0.908386);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44800() {
   return (neuron0x3c29b80()*0.0668791);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44840() {
   return (neuron0x3c29ec0()*-1.53269);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44880() {
   return (neuron0x3c2a200()*0.0620423);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c448c0() {
   return (neuron0x3c2a540()*0.508741);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44900() {
   return (neuron0x3c2a880()*1.01256);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44c80() {
   return (neuron0x3c25d50()*0.290789);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44cc0() {
   return (neuron0x3c26000()*-1.16855);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44d00() {
   return (neuron0x3c26340()*-0.625697);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44d40() {
   return (neuron0x3c26680()*-0.116412);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44d80() {
   return (neuron0x3c269c0()*-0.223051);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44dc0() {
   return (neuron0x3c26d00()*0.123926);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44e00() {
   return (neuron0x3c27040()*-0.491181);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44e40() {
   return (neuron0x3c27380()*0.23618);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44e80() {
   return (neuron0x3c276c0()*0.184241);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44ec0() {
   return (neuron0x3c27a00()*0.0278089);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44f00() {
   return (neuron0x3c27d40()*0.75943);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44f40() {
   return (neuron0x3c28080()*0.129442);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44f80() {
   return (neuron0x3c283c0()*-0.569625);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44fc0() {
   return (neuron0x3c28700()*-0.424088);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45000() {
   return (neuron0x3c28a40()*1.38893);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45040() {
   return (neuron0x3c28d80()*-0.102478);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44ad0() {
   return (neuron0x3c290c0()*-0.179166);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44b10() {
   return (neuron0x3c29620()*-0.368866);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45190() {
   return (neuron0x3c29840()*0.0578242);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c451d0() {
   return (neuron0x3c29b80()*-0.307668);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45210() {
   return (neuron0x3c29ec0()*0.0111589);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45250() {
   return (neuron0x3c2a200()*-0.228158);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45290() {
   return (neuron0x3c2a540()*0.206326);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c452d0() {
   return (neuron0x3c2a880()*-1.37992);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45650() {
   return (neuron0x3c25d50()*0.416533);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45690() {
   return (neuron0x3c26000()*0.15398);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c456d0() {
   return (neuron0x3c26340()*-0.957966);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45710() {
   return (neuron0x3c26680()*1.42935);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45750() {
   return (neuron0x3c269c0()*0.511423);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45790() {
   return (neuron0x3c26d00()*-1.04413);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c457d0() {
   return (neuron0x3c27040()*-1.04621);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45810() {
   return (neuron0x3c27380()*0.531944);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45850() {
   return (neuron0x3c276c0()*-0.0575843);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45890() {
   return (neuron0x3c27a00()*-0.747332);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c458d0() {
   return (neuron0x3c27d40()*-0.255589);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45910() {
   return (neuron0x3c28080()*-0.490204);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45950() {
   return (neuron0x3c283c0()*1.50849);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45990() {
   return (neuron0x3c28700()*0.373077);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c459d0() {
   return (neuron0x3c28a40()*0.913124);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45a10() {
   return (neuron0x3c28d80()*0.781508);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c454a0() {
   return (neuron0x3c290c0()*-0.919285);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c454e0() {
   return (neuron0x3c29620()*0.709908);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45b60() {
   return (neuron0x3c29840()*-0.923827);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45ba0() {
   return (neuron0x3c29b80()*1.28168);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45be0() {
   return (neuron0x3c29ec0()*-0.34519);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45c20() {
   return (neuron0x3c2a200()*-1.11635);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45c60() {
   return (neuron0x3c2a540()*0.561764);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45ca0() {
   return (neuron0x3c2a880()*0.184825);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46020() {
   return (neuron0x3c25d50()*-0.168758);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46060() {
   return (neuron0x3c26000()*-0.977882);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c460a0() {
   return (neuron0x3c26340()*-0.337305);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c460e0() {
   return (neuron0x3c26680()*-0.776559);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46120() {
   return (neuron0x3c269c0()*-1.00306);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46160() {
   return (neuron0x3c26d00()*-1.0211);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c461a0() {
   return (neuron0x3c27040()*-0.534916);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c461e0() {
   return (neuron0x3c27380()*-1.01516);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46220() {
   return (neuron0x3c276c0()*0.804968);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46260() {
   return (neuron0x3c27a00()*-0.889096);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c462a0() {
   return (neuron0x3c27d40()*1.25234);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c462e0() {
   return (neuron0x3c28080()*-1.04105);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46320() {
   return (neuron0x3c283c0()*0.305554);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46360() {
   return (neuron0x3c28700()*0.797698);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c463a0() {
   return (neuron0x3c28a40()*-0.389333);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c463e0() {
   return (neuron0x3c28d80()*-1.02054);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45e70() {
   return (neuron0x3c290c0()*-0.265595);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45eb0() {
   return (neuron0x3c29620()*0.710069);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46530() {
   return (neuron0x3c29840()*1.09965);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46570() {
   return (neuron0x3c29b80()*1.59231);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c465b0() {
   return (neuron0x3c29ec0()*-1.60126);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c465f0() {
   return (neuron0x3c2a200()*0.678306);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46630() {
   return (neuron0x3c2a540()*0.0159194);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46670() {
   return (neuron0x3c2a880()*-0.716006);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c469f0() {
   return (neuron0x3c25d50()*0.0228673);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46a30() {
   return (neuron0x3c26000()*-0.0650826);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46a70() {
   return (neuron0x3c26340()*0.459225);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46ab0() {
   return (neuron0x3c26680()*-0.00348443);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46af0() {
   return (neuron0x3c269c0()*-0.0233705);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46b30() {
   return (neuron0x3c26d00()*0.0123508);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46b70() {
   return (neuron0x3c27040()*-0.0561161);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46bb0() {
   return (neuron0x3c27380()*-0.0183577);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46bf0() {
   return (neuron0x3c276c0()*-0.0405204);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46c30() {
   return (neuron0x3c27a00()*0.0180199);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46c70() {
   return (neuron0x3c27d40()*0.0170032);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46cb0() {
   return (neuron0x3c28080()*3.36591);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46cf0() {
   return (neuron0x3c283c0()*-0.0985563);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46d30() {
   return (neuron0x3c28700()*-0.0670789);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46d70() {
   return (neuron0x3c28a40()*0.0267146);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46db0() {
   return (neuron0x3c28d80()*0.0015122);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46840() {
   return (neuron0x3c290c0()*-0.0300046);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46880() {
   return (neuron0x3c29620()*-0.0258107);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46f00() {
   return (neuron0x3c29840()*-0.0392551);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46f40() {
   return (neuron0x3c29b80()*-0.0739713);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46f80() {
   return (neuron0x3c29ec0()*0.0204336);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46fc0() {
   return (neuron0x3c2a200()*0.0158503);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47000() {
   return (neuron0x3c2a540()*0.0317185);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47040() {
   return (neuron0x3c2a880()*0.138904);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c473c0() {
   return (neuron0x3c25d50()*-0.0479668);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47400() {
   return (neuron0x3c26000()*3.68743);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47440() {
   return (neuron0x3c26340()*-2.62733);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47480() {
   return (neuron0x3c26680()*-0.110303);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c474c0() {
   return (neuron0x3c269c0()*0.0797356);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47500() {
   return (neuron0x3c26d00()*-0.0846675);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47540() {
   return (neuron0x3c27040()*-0.0494241);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47580() {
   return (neuron0x3c27380()*-0.00977542);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c475c0() {
   return (neuron0x3c276c0()*-0.0159469);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47600() {
   return (neuron0x3c27a00()*-0.109559);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47640() {
   return (neuron0x3c27d40()*-0.0687447);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47680() {
   return (neuron0x3c28080()*0.0754928);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c476c0() {
   return (neuron0x3c283c0()*0.0328706);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47700() {
   return (neuron0x3c28700()*0.00952387);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47740() {
   return (neuron0x3c28a40()*0.0931381);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47780() {
   return (neuron0x3c28d80()*-0.113349);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47210() {
   return (neuron0x3c290c0()*-0.0277795);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47250() {
   return (neuron0x3c29620()*-0.079967);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c478d0() {
   return (neuron0x3c29840()*0.00618816);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47910() {
   return (neuron0x3c29b80()*-0.158762);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47950() {
   return (neuron0x3c29ec0()*-0.0541025);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47990() {
   return (neuron0x3c2a200()*0.0736246);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c479d0() {
   return (neuron0x3c2a540()*-0.00811668);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47a10() {
   return (neuron0x3c2a880()*-6.06985);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47d90() {
   return (neuron0x3c25d50()*0.501812);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47dd0() {
   return (neuron0x3c26000()*0.242452);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47e10() {
   return (neuron0x3c26340()*-0.193263);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47e50() {
   return (neuron0x3c26680()*1.70315);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47e90() {
   return (neuron0x3c269c0()*-0.379883);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47ed0() {
   return (neuron0x3c26d00()*-0.91105);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47f10() {
   return (neuron0x3c27040()*-1.10467);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47f50() {
   return (neuron0x3c27380()*1.13667);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47f90() {
   return (neuron0x3c276c0()*-0.919097);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47fd0() {
   return (neuron0x3c27a00()*-0.790746);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48010() {
   return (neuron0x3c27d40()*1.52453);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48050() {
   return (neuron0x3c28080()*1.71599);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48090() {
   return (neuron0x3c283c0()*-0.872161);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c480d0() {
   return (neuron0x3c28700()*1.55234);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48110() {
   return (neuron0x3c28a40()*0.277963);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48150() {
   return (neuron0x3c28d80()*-0.470146);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47be0() {
   return (neuron0x3c290c0()*0.297683);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47c20() {
   return (neuron0x3c29620()*0.322023);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c482a0() {
   return (neuron0x3c29840()*-0.419375);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c482e0() {
   return (neuron0x3c29b80()*0.397427);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48320() {
   return (neuron0x3c29ec0()*0.0866052);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48360() {
   return (neuron0x3c2a200()*-0.408215);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c483a0() {
   return (neuron0x3c2a540()*-1.09887);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c483e0() {
   return (neuron0x3c2a880()*0.398388);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30e90() {
   return (neuron0x3c25d50()*0.0552047);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30ed0() {
   return (neuron0x3c26000()*12.363);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30f10() {
   return (neuron0x3c26340()*-3.078);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30f50() {
   return (neuron0x3c26680()*-0.0152079);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30f90() {
   return (neuron0x3c269c0()*0.0232214);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30fd0() {
   return (neuron0x3c26d00()*-0.0236313);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31010() {
   return (neuron0x3c27040()*0.0381418);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31050() {
   return (neuron0x3c27380()*0.00481586);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48b70() {
   return (neuron0x3c276c0()*-0.0119112);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48bb0() {
   return (neuron0x3c27a00()*-0.00504803);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48bf0() {
   return (neuron0x3c27d40()*0.0191755);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48c30() {
   return (neuron0x3c28080()*-0.066576);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48c70() {
   return (neuron0x3c283c0()*-0.0186522);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48cb0() {
   return (neuron0x3c28700()*-0.0346322);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48cf0() {
   return (neuron0x3c28a40()*0.00377291);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48d30() {
   return (neuron0x3c28d80()*-0.0160302);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c485b0() {
   return (neuron0x3c290c0()*0.0514468);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c485f0() {
   return (neuron0x3c29620()*0.0282253);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48e80() {
   return (neuron0x3c29840()*0.0753772);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48ec0() {
   return (neuron0x3c29b80()*-0.0168469);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48f00() {
   return (neuron0x3c29ec0()*-0.0349231);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48f40() {
   return (neuron0x3c2a200()*0.0116302);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48f80() {
   return (neuron0x3c2a540()*-0.00609847);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48fc0() {
   return (neuron0x3c2a880()*-0.0525195);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49340() {
   return (neuron0x3c25d50()*-0.2146);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49380() {
   return (neuron0x3c26000()*0.948267);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c493c0() {
   return (neuron0x3c26340()*1.33377);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49400() {
   return (neuron0x3c26680()*-0.446846);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49440() {
   return (neuron0x3c269c0()*0.0115095);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49480() {
   return (neuron0x3c26d00()*-0.281161);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c494c0() {
   return (neuron0x3c27040()*-0.0840627);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49500() {
   return (neuron0x3c27380()*0.119583);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49540() {
   return (neuron0x3c276c0()*0.139061);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49580() {
   return (neuron0x3c27a00()*-0.311838);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c495c0() {
   return (neuron0x3c27d40()*-0.435585);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49600() {
   return (neuron0x3c28080()*0.336391);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49640() {
   return (neuron0x3c283c0()*0.354344);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49680() {
   return (neuron0x3c28700()*0.150272);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c496c0() {
   return (neuron0x3c28a40()*-0.212068);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49700() {
   return (neuron0x3c28d80()*-0.124187);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49190() {
   return (neuron0x3c290c0()*-0.138574);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c491d0() {
   return (neuron0x3c29620()*0.236366);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49850() {
   return (neuron0x3c29840()*-0.161912);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49890() {
   return (neuron0x3c29b80()*0.0778968);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c498d0() {
   return (neuron0x3c29ec0()*0.0625622);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49910() {
   return (neuron0x3c2a200()*-0.05297);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49950() {
   return (neuron0x3c2a540()*0.0541319);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49990() {
   return (neuron0x3c2a880()*2.29166);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49d10() {
   return (neuron0x3c25d50()*-0.460292);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49d50() {
   return (neuron0x3c26000()*-2.56254);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49d90() {
   return (neuron0x3c26340()*-0.491204);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49dd0() {
   return (neuron0x3c26680()*-0.356945);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49e10() {
   return (neuron0x3c269c0()*-0.0608525);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49e50() {
   return (neuron0x3c26d00()*-0.499816);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49e90() {
   return (neuron0x3c27040()*0.445046);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49ed0() {
   return (neuron0x3c27380()*0.332306);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49f10() {
   return (neuron0x3c276c0()*-0.426533);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49f50() {
   return (neuron0x3c27a00()*0.784241);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49f90() {
   return (neuron0x3c27d40()*0.125775);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49fd0() {
   return (neuron0x3c28080()*-1.08327);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4a010() {
   return (neuron0x3c283c0()*-0.517226);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4a050() {
   return (neuron0x3c28700()*-0.800482);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4a090() {
   return (neuron0x3c28a40()*0.816124);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4a0d0() {
   return (neuron0x3c28d80()*-0.054174);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49b60() {
   return (neuron0x3c290c0()*0.721799);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49ba0() {
   return (neuron0x3c29620()*1.07194);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a6d0() {
   return (neuron0x3c29840()*-0.168606);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a710() {
   return (neuron0x3c29b80()*0.368544);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a750() {
   return (neuron0x3c29ec0()*0.225753);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a790() {
   return (neuron0x3c2a200()*0.775475);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a7d0() {
   return (neuron0x3c2a540()*-0.47558);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a810() {
   return (neuron0x3c2a880()*0.711164);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ab90() {
   return (neuron0x3c25d50()*-0.302007);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3abd0() {
   return (neuron0x3c26000()*-1.00509);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ac10() {
   return (neuron0x3c26340()*1.0535);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ac50() {
   return (neuron0x3c26680()*0.22333);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ac90() {
   return (neuron0x3c269c0()*0.0213504);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3acd0() {
   return (neuron0x3c26d00()*-0.17924);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ad10() {
   return (neuron0x3c27040()*0.539463);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ad50() {
   return (neuron0x3c27380()*0.0573008);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ad90() {
   return (neuron0x3c276c0()*-0.236965);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3add0() {
   return (neuron0x3c27a00()*-0.280358);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ae10() {
   return (neuron0x3c27d40()*0.407983);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ae50() {
   return (neuron0x3c28080()*-1.61558);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ae90() {
   return (neuron0x3c283c0()*0.0160057);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3aed0() {
   return (neuron0x3c28700()*-0.525429);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3af10() {
   return (neuron0x3c28a40()*0.942729);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3af50() {
   return (neuron0x3c28d80()*-0.0684725);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a9e0() {
   return (neuron0x3c290c0()*0.050761);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3aa20() {
   return (neuron0x3c29620()*-0.860414);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b0a0() {
   return (neuron0x3c29840()*0.640924);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b0e0() {
   return (neuron0x3c29b80()*0.335031);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b120() {
   return (neuron0x3c29ec0()*0.302184);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b160() {
   return (neuron0x3c2a200()*-0.00902639);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b1a0() {
   return (neuron0x3c2a540()*-0.0937289);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b1e0() {
   return (neuron0x3c2a880()*-0.333726);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b560() {
   return (neuron0x3c25d50()*0.0306063);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b5a0() {
   return (neuron0x3c26000()*-4.19531);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b5e0() {
   return (neuron0x3c26340()*0.237914);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b620() {
   return (neuron0x3c26680()*-0.0938905);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b660() {
   return (neuron0x3c269c0()*0.0801116);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b6a0() {
   return (neuron0x3c26d00()*0.0214794);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b6e0() {
   return (neuron0x3c27040()*-0.0457741);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b720() {
   return (neuron0x3c27380()*-0.0295426);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b760() {
   return (neuron0x3c276c0()*-0.00866672);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b7a0() {
   return (neuron0x3c27a00()*0.0183523);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b7e0() {
   return (neuron0x3c27d40()*-0.0261952);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b820() {
   return (neuron0x3c28080()*0.113053);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b860() {
   return (neuron0x3c283c0()*0.073276);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b8a0() {
   return (neuron0x3c28700()*-0.0786929);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b8e0() {
   return (neuron0x3c28a40()*-0.0645192);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b920() {
   return (neuron0x3c28d80()*-0.0535038);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b3b0() {
   return (neuron0x3c290c0()*0.0772483);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b3f0() {
   return (neuron0x3c29620()*0.047962);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ba70() {
   return (neuron0x3c29840()*0.0234003);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3bab0() {
   return (neuron0x3c29b80()*0.022462);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3baf0() {
   return (neuron0x3c29ec0()*0.019274);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3bb30() {
   return (neuron0x3c2a200()*-0.00428211);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3bb70() {
   return (neuron0x3c2a540()*0.00432785);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3bbb0() {
   return (neuron0x3c2a880()*-3.92079);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3bf30() {
   return (neuron0x3c25d50()*-0.00606296);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3bf70() {
   return (neuron0x3c26000()*-15.2268);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3bfb0() {
   return (neuron0x3c26340()*-4.38868);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3bff0() {
   return (neuron0x3c26680()*0.0377091);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c030() {
   return (neuron0x3c269c0()*0.00792726);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c070() {
   return (neuron0x3c26d00()*0.0544049);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c0b0() {
   return (neuron0x3c27040()*0.0066912);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c0f0() {
   return (neuron0x3c27380()*-0.0224835);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c130() {
   return (neuron0x3c276c0()*0.0507444);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c170() {
   return (neuron0x3c27a00()*-0.00838543);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c1b0() {
   return (neuron0x3c27d40()*0.000367535);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c1f0() {
   return (neuron0x3c28080()*0.0885131);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c230() {
   return (neuron0x3c283c0()*0.028594);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c270() {
   return (neuron0x3c28700()*0.078187);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c2b0() {
   return (neuron0x3c28a40()*0.0384726);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c2f0() {
   return (neuron0x3c28d80()*0.00433428);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3bd80() {
   return (neuron0x3c290c0()*-0.0496933);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3bdc0() {
   return (neuron0x3c29620()*-0.0436154);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c440() {
   return (neuron0x3c29840()*-0.0380592);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c480() {
   return (neuron0x3c29b80()*0.0316059);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c4c0() {
   return (neuron0x3c29ec0()*0.0201743);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c500() {
   return (neuron0x3c2a200()*0.0180668);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c540() {
   return (neuron0x3c2a540()*0.0135498);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c580() {
   return (neuron0x3c2a880()*0.0748336);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4e450() {
   return (neuron0x3c25d50()*0.0152608);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4e490() {
   return (neuron0x3c26000()*8.39885);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4e4d0() {
   return (neuron0x3c26340()*0.744664);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4e510() {
   return (neuron0x3c26680()*0.0305336);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4e550() {
   return (neuron0x3c269c0()*-0.0247394);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4e590() {
   return (neuron0x3c26d00()*0.0572559);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4e5d0() {
   return (neuron0x3c27040()*0.00485341);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4e610() {
   return (neuron0x3c27380()*0.00538644);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4e650() {
   return (neuron0x3c276c0()*-0.00479031);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4e690() {
   return (neuron0x3c27a00()*0.0480045);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4e6d0() {
   return (neuron0x3c27d40()*0.0326038);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4e710() {
   return (neuron0x3c28080()*-0.045684);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4e750() {
   return (neuron0x3c283c0()*-0.00574066);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4e790() {
   return (neuron0x3c28700()*-0.035648);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4e7d0() {
   return (neuron0x3c28a40()*0.0044519);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4e810() {
   return (neuron0x3c28d80()*0.0192517);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c5c0() {
   return (neuron0x3c290c0()*0.0111356);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c600() {
   return (neuron0x3c29620()*-0.037127);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4e960() {
   return (neuron0x3c29840()*0.0542102);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4e9a0() {
   return (neuron0x3c29b80()*-0.0121269);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4e9e0() {
   return (neuron0x3c29ec0()*-0.0328209);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4ea20() {
   return (neuron0x3c2a200()*0.00556201);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4ea60() {
   return (neuron0x3c2a540()*-0.0169292);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4eaa0() {
   return (neuron0x3c2a880()*-0.00646865);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4ee20() {
   return (neuron0x3c25d50()*-0.0313352);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4ee60() {
   return (neuron0x3c26000()*-0.016981);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4eea0() {
   return (neuron0x3c26340()*-0.488484);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4eee0() {
   return (neuron0x3c26680()*-0.0688227);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4ef20() {
   return (neuron0x3c269c0()*-0.00772624);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4ef60() {
   return (neuron0x3c26d00()*-0.028054);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4efa0() {
   return (neuron0x3c27040()*0.0413884);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4efe0() {
   return (neuron0x3c27380()*0.0424306);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f020() {
   return (neuron0x3c276c0()*-0.0685342);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f060() {
   return (neuron0x3c27a00()*-0.118178);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f0a0() {
   return (neuron0x3c27d40()*-0.0385921);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f0e0() {
   return (neuron0x3c28080()*-1.4229);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f120() {
   return (neuron0x3c283c0()*0.0126173);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f160() {
   return (neuron0x3c28700()*-0.0080861);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f1a0() {
   return (neuron0x3c28a40()*0.0206977);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f1e0() {
   return (neuron0x3c28d80()*0.0820966);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4ec70() {
   return (neuron0x3c290c0()*0.0688642);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4ecb0() {
   return (neuron0x3c29620()*-0.0104147);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f330() {
   return (neuron0x3c29840()*-0.0585093);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f370() {
   return (neuron0x3c29b80()*-0.0521165);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f3b0() {
   return (neuron0x3c29ec0()*0.0795252);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f3f0() {
   return (neuron0x3c2a200()*-0.032823);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f430() {
   return (neuron0x3c2a540()*0.0163851);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f470() {
   return (neuron0x3c2a880()*1.66156);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f7f0() {
   return (neuron0x3c25d50()*0.211107);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f830() {
   return (neuron0x3c26000()*-0.0264074);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f870() {
   return (neuron0x3c26340()*-0.178532);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f8b0() {
   return (neuron0x3c26680()*0.0357596);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f8f0() {
   return (neuron0x3c269c0()*-0.0523577);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f930() {
   return (neuron0x3c26d00()*0.232439);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f970() {
   return (neuron0x3c27040()*-0.0446547);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f9b0() {
   return (neuron0x3c27380()*0.132901);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f9f0() {
   return (neuron0x3c276c0()*0.0710427);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4fa30() {
   return (neuron0x3c27a00()*-0.0579394);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4fa70() {
   return (neuron0x3c27d40()*-0.019222);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4fab0() {
   return (neuron0x3c28080()*1.43668);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4faf0() {
   return (neuron0x3c283c0()*0.325209);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4fb30() {
   return (neuron0x3c28700()*0.104842);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4fb70() {
   return (neuron0x3c28a40()*0.0982269);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4fbb0() {
   return (neuron0x3c28d80()*-0.114125);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f640() {
   return (neuron0x3c290c0()*-0.056785);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f680() {
   return (neuron0x3c29620()*0.134422);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4fd00() {
   return (neuron0x3c29840()*0.0447041);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4fd40() {
   return (neuron0x3c29b80()*0.0658617);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4fd80() {
   return (neuron0x3c29ec0()*-0.113502);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4fdc0() {
   return (neuron0x3c2a200()*-0.0164395);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4fe00() {
   return (neuron0x3c2a540()*0.12576);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4fe40() {
   return (neuron0x3c2a880()*1.55982);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c501c0() {
   return (neuron0x3c25d50()*0.243814);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50200() {
   return (neuron0x3c26000()*-1.29337);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50240() {
   return (neuron0x3c26340()*0.774787);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50280() {
   return (neuron0x3c26680()*-1.77274);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c502c0() {
   return (neuron0x3c269c0()*-1.15949);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50300() {
   return (neuron0x3c26d00()*-2.02277);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50340() {
   return (neuron0x3c27040()*-1.50248);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50380() {
   return (neuron0x3c27380()*-0.303207);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c503c0() {
   return (neuron0x3c276c0()*1.81472);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50400() {
   return (neuron0x3c27a00()*-0.486551);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50440() {
   return (neuron0x3c27d40()*-1.15307);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50480() {
   return (neuron0x3c28080()*0.906222);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c504c0() {
   return (neuron0x3c283c0()*1.38047);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50500() {
   return (neuron0x3c28700()*0.98131);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50540() {
   return (neuron0x3c28a40()*-0.00206811);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50580() {
   return (neuron0x3c28d80()*-1.53311);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50010() {
   return (neuron0x3c290c0()*-0.285935);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50050() {
   return (neuron0x3c29620()*-0.942722);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c506d0() {
   return (neuron0x3c29840()*1.06102);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50710() {
   return (neuron0x3c29b80()*2.60585);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50750() {
   return (neuron0x3c29ec0()*-0.0550186);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50790() {
   return (neuron0x3c2a200()*-0.608923);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c507d0() {
   return (neuron0x3c2a540()*0.678258);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50810() {
   return (neuron0x3c2a880()*1.63339);
}

double NNfunction_nn_chi2_charge1p::synapse0x39f05f0() {
   return (neuron0x3c2acf0()*-0.0167539);
}

double NNfunction_nn_chi2_charge1p::synapse0x39f0630() {
   return (neuron0x3c2b640()*-0.0145652);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2d1b0() {
   return (neuron0x3c2c120()*-0.0269614);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2d1f0() {
   return (neuron0x3c2bbc0()*-0.12623);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2ec90() {
   return (neuron0x3c2cf00()*-0.0493902);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2ecd0() {
   return (neuron0x3c2e9e0()*-0.0768108);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2fa60() {
   return (neuron0x3c2f7b0()*0.0412372);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2faa0() {
   return (neuron0x3c30180()*0.298378);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30430() {
   return (neuron0x3c30b50()*0.0167831);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30470() {
   return (neuron0x3c31630()*-0.95444);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30e00() {
   return (neuron0x3c32000()*0.835502);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c30e40() {
   return (neuron0x3c2f0e0()*0.594238);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c318e0() {
   return (neuron0x3c33bb0()*-0.063939);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c31920() {
   return (neuron0x3c34580()*0.449314);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c322b0() {
   return (neuron0x3c34f50()*-0.0393018);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c322f0() {
   return (neuron0x3c35920()*-0.0211348);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f390() {
   return (neuron0x3c37730()*0.00539116);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2f3d0() {
   return (neuron0x3c37a10()*0.0108669);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33e60() {
   return (neuron0x3c383e0()*0.0041218);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c33ea0() {
   return (neuron0x3c38db0()*0.0154114);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34830() {
   return (neuron0x3c39780()*-0.00537791);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c34870() {
   return (neuron0x3c3a150()*1.7794);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35200() {
   return (neuron0x3c32ca0()*1.18273);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35240() {
   return (neuron0x3c33670()*0.934425);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35bd0() {
   return (neuron0x3c3cee0()*-1.10629);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c35c10() {
   return (neuron0x3c3d8b0()*-0.0394478);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c28c60() {
   return (neuron0x3c3e280()*0.0792097);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c28ca0() {
   return (neuron0x3c3ec50()*2.36391);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c37cc0() {
   return (neuron0x3c3f620()*-0.0101017);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c37d00() {
   return (neuron0x3c3fff0()*0.0087968);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c38690() {
   return (neuron0x3c409c0()*-3.01761);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c386d0() {
   return (neuron0x3c41390()*0.190965);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39060() {
   return (neuron0x3c37420()*0.00208297);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c390a0() {
   return (neuron0x3c43f70()*-0.00520914);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39a30() {
   return (neuron0x3c44940()*0.0108283);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c39a70() {
   return (neuron0x3c45310()*0.0288044);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a400() {
   return (neuron0x3c45ce0()*0.00978732);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3a440() {
   return (neuron0x3c466b0()*-0.0903436);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32f50() {
   return (neuron0x3c47080()*0.744422);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c32f90() {
   return (neuron0x3c47a50()*-0.0104352);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c800() {
   return (neuron0x3c48420()*-0.127946);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3c840() {
   return (neuron0x3c49000()*0.0355408);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d190() {
   return (neuron0x3c499d0()*-0.0106066);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3d1d0() {
   return (neuron0x3c3a850()*0.0158967);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3db60() {
   return (neuron0x3c3b220()*0.307524);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3dba0() {
   return (neuron0x3c3bbf0()*0.0484745);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e530() {
   return (neuron0x3c4e230()*-0.186055);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3e570() {
   return (neuron0x3c4eae0()*0.266446);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ef00() {
   return (neuron0x3c4f4b0()*-0.12993);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ef40() {
   return (neuron0x3c4fe80()*-0.0086953);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c41640() {
   return (neuron0x3c2acf0()*0.137393);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c41680() {
   return (neuron0x3c2b640()*0.0951286);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c36c00() {
   return (neuron0x3c2c120()*-0.179062);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c36c40() {
   return (neuron0x3c2bbc0()*-1.22645);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44220() {
   return (neuron0x3c2cf00()*0.0910008);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44260() {
   return (neuron0x3c2e9e0()*0.467109);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44bf0() {
   return (neuron0x3c2f7b0()*0.0606133);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c44c30() {
   return (neuron0x3c30180()*-0.550536);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c455c0() {
   return (neuron0x3c30b50()*-0.110398);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45600() {
   return (neuron0x3c31630()*0.705058);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45f90() {
   return (neuron0x3c32000()*0.825805);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c45fd0() {
   return (neuron0x3c2f0e0()*0.760426);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c46960() {
   return (neuron0x3c33bb0()*-0.464344);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c469a0() {
   return (neuron0x3c34580()*1.50594);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47330() {
   return (neuron0x3c34f50()*0.331982);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47370() {
   return (neuron0x3c35920()*-0.0296113);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47d00() {
   return (neuron0x3c37730()*0.101706);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c47d40() {
   return (neuron0x3c37a10()*0.253356);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c486d0() {
   return (neuron0x3c383e0()*-0.21617);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c48710() {
   return (neuron0x3c38db0()*-0.340708);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c492b0() {
   return (neuron0x3c39780()*0.155542);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c492f0() {
   return (neuron0x3c3a150()*-0.0747252);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49c80() {
   return (neuron0x3c32ca0()*1.61867);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c49cc0() {
   return (neuron0x3c33670()*0.190354);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ab00() {
   return (neuron0x3c3cee0()*1.45898);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3ab40() {
   return (neuron0x3c3d8b0()*0.0775684);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b4d0() {
   return (neuron0x3c3e280()*0.923436);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3b510() {
   return (neuron0x3c3ec50()*-0.0217279);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3bea0() {
   return (neuron0x3c3f620()*-0.0702441);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3bee0() {
   return (neuron0x3c3fff0()*-0.293453);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4e3c0() {
   return (neuron0x3c409c0()*0.662603);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4e400() {
   return (neuron0x3c41390()*0.37718);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4ed90() {
   return (neuron0x3c37420()*-0.00236725);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4edd0() {
   return (neuron0x3c43f70()*0.166916);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f760() {
   return (neuron0x3c44940()*-0.571169);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c4f7a0() {
   return (neuron0x3c45310()*-0.0806039);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50130() {
   return (neuron0x3c45ce0()*-0.0357043);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50170() {
   return (neuron0x3c466b0()*0.713885);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2afa0() {
   return (neuron0x3c47080()*-0.520658);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c2afe0() {
   return (neuron0x3c47a50()*-0.000545996);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f8d0() {
   return (neuron0x3c48420()*0.0126169);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c3f910() {
   return (neuron0x3c49000()*1.28912);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50850() {
   return (neuron0x3c499d0()*0.0558784);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50890() {
   return (neuron0x3c3a850()*-0.0164014);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c508d0() {
   return (neuron0x3c3b220()*-0.51);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c50910() {
   return (neuron0x3c3bbf0()*-0.328714);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c577c0() {
   return (neuron0x3c4e230()*0.9558);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c57800() {
   return (neuron0x3c4eae0()*-0.153628);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c57840() {
   return (neuron0x3c4f4b0()*0.581212);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c57880() {
   return (neuron0x3c4fe80()*0.0173397);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c57c00() {
   return (neuron0x3c2acf0()*-0.22069);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c57c40() {
   return (neuron0x3c2b640()*0.0686533);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c57c80() {
   return (neuron0x3c2c120()*-1.81283);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c57cc0() {
   return (neuron0x3c2bbc0()*1.76023);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c57d00() {
   return (neuron0x3c2cf00()*0.61721);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c57d40() {
   return (neuron0x3c2e9e0()*-0.4474);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c57d80() {
   return (neuron0x3c2f7b0()*-0.364034);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c57dc0() {
   return (neuron0x3c30180()*0.907507);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c57e00() {
   return (neuron0x3c30b50()*0.221063);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c57e40() {
   return (neuron0x3c31630()*4.23357);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c57e80() {
   return (neuron0x3c32000()*-7.19452);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c57ec0() {
   return (neuron0x3c2f0e0()*-0.871475);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c57f00() {
   return (neuron0x3c33bb0()*-1.23535);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c57f40() {
   return (neuron0x3c34580()*-3.38621);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c57f80() {
   return (neuron0x3c34f50()*-0.19946);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c57fc0() {
   return (neuron0x3c35920()*-0.0377751);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c57a50() {
   return (neuron0x3c37730()*-0.10231);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c57a90() {
   return (neuron0x3c37a10()*-0.000339679);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58110() {
   return (neuron0x3c383e0()*0.232622);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58150() {
   return (neuron0x3c38db0()*0.355338);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58190() {
   return (neuron0x3c39780()*0.299615);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c581d0() {
   return (neuron0x3c3a150()*-0.0310551);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58210() {
   return (neuron0x3c32ca0()*2.15938);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58250() {
   return (neuron0x3c33670()*2.26385);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58290() {
   return (neuron0x3c3cee0()*-1.90681);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c582d0() {
   return (neuron0x3c3d8b0()*-0.286757);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58310() {
   return (neuron0x3c3e280()*1.56128);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58350() {
   return (neuron0x3c3ec50()*-1.35833);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58390() {
   return (neuron0x3c3f620()*-0.09833);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c583d0() {
   return (neuron0x3c3fff0()*0.218182);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58410() {
   return (neuron0x3c409c0()*-3.20716);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58450() {
   return (neuron0x3c41390()*-5.90778);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58000() {
   return (neuron0x3c37420()*0.232705);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58040() {
   return (neuron0x3c43f70()*-0.0555955);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58080() {
   return (neuron0x3c44940()*0.0257387);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c580c0() {
   return (neuron0x3c45310()*0.0754709);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c586a0() {
   return (neuron0x3c45ce0()*0.211152);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c586e0() {
   return (neuron0x3c466b0()*3.22358);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58720() {
   return (neuron0x3c47080()*1.0902);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58760() {
   return (neuron0x3c47a50()*0.0135495);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c587a0() {
   return (neuron0x3c48420()*4.22163);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c587e0() {
   return (neuron0x3c49000()*-0.169061);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58820() {
   return (neuron0x3c499d0()*-0.000360026);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58860() {
   return (neuron0x3c3a850()*-0.080282);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c588a0() {
   return (neuron0x3c3b220()*-2.3729);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c588e0() {
   return (neuron0x3c3bbf0()*4.81876);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58920() {
   return (neuron0x3c4e230()*-0.769137);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58960() {
   return (neuron0x3c4eae0()*-1.05878);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c589a0() {
   return (neuron0x3c4f4b0()*1.06883);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c589e0() {
   return (neuron0x3c4fe80()*-0.0447587);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58d60() {
   return (neuron0x3c2acf0()*0.00364823);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58da0() {
   return (neuron0x3c2b640()*-0.0160808);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58de0() {
   return (neuron0x3c2c120()*0.0944826);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58e20() {
   return (neuron0x3c2bbc0()*2.89598);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58e60() {
   return (neuron0x3c2cf00()*0.0389192);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58ea0() {
   return (neuron0x3c2e9e0()*-0.0102224);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58ee0() {
   return (neuron0x3c2f7b0()*0.193866);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58f20() {
   return (neuron0x3c30180()*0.545711);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58f60() {
   return (neuron0x3c30b50()*-0.00327889);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58fa0() {
   return (neuron0x3c31630()*-0.408721);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58fe0() {
   return (neuron0x3c32000()*0.0819417);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59020() {
   return (neuron0x3c2f0e0()*0.860518);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59060() {
   return (neuron0x3c33bb0()*0.00408987);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c590a0() {
   return (neuron0x3c34580()*-0.0684548);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c590e0() {
   return (neuron0x3c34f50()*-0.0515812);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59120() {
   return (neuron0x3c35920()*0.00610629);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58bb0() {
   return (neuron0x3c37730()*-0.00731634);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c58bf0() {
   return (neuron0x3c37a10()*-0.00294353);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59270() {
   return (neuron0x3c383e0()*-0.008317);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c592b0() {
   return (neuron0x3c38db0()*-0.0169498);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c592f0() {
   return (neuron0x3c39780()*-0.0100317);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59330() {
   return (neuron0x3c3a150()*-0.813831);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59370() {
   return (neuron0x3c32ca0()*0.616182);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c593b0() {
   return (neuron0x3c33670()*-0.71855);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c593f0() {
   return (neuron0x3c3cee0()*-0.920157);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59430() {
   return (neuron0x3c3d8b0()*-0.00577962);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59470() {
   return (neuron0x3c3e280()*-0.0230561);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c594b0() {
   return (neuron0x3c3ec50()*-4.05695);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c594f0() {
   return (neuron0x3c3f620()*0.00199075);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59530() {
   return (neuron0x3c3fff0()*0.00187451);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59570() {
   return (neuron0x3c409c0()*-1.03272);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c595b0() {
   return (neuron0x3c41390()*6.58058);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59160() {
   return (neuron0x3c37420()*-0.00830439);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c591a0() {
   return (neuron0x3c43f70()*0.000660933);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c591e0() {
   return (neuron0x3c44940()*-0.00049512);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59220() {
   return (neuron0x3c45310()*-0.00189799);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59800() {
   return (neuron0x3c45ce0()*-0.00791478);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59840() {
   return (neuron0x3c466b0()*-0.0313319);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59880() {
   return (neuron0x3c47080()*0.552392);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c598c0() {
   return (neuron0x3c47a50()*0.00528152);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59900() {
   return (neuron0x3c48420()*0.0106105);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59940() {
   return (neuron0x3c49000()*-0.0263381);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59980() {
   return (neuron0x3c499d0()*-0.00910919);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c599c0() {
   return (neuron0x3c3a850()*-0.00629849);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59a00() {
   return (neuron0x3c3b220()*-0.121478);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59a40() {
   return (neuron0x3c3bbf0()*-0.0026418);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59a80() {
   return (neuron0x3c4e230()*3.21038e-05);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59ac0() {
   return (neuron0x3c4eae0()*-0.158844);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59b00() {
   return (neuron0x3c4f4b0()*0.0722116);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59b40() {
   return (neuron0x3c4fe80()*0.00168022);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59ec0() {
   return (neuron0x3c2acf0()*1.01945);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59f00() {
   return (neuron0x3c2b640()*-1.4752);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59f40() {
   return (neuron0x3c2c120()*-7.14209);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59f80() {
   return (neuron0x3c2bbc0()*-0.262011);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59fc0() {
   return (neuron0x3c2cf00()*2.32541);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a000() {
   return (neuron0x3c2e9e0()*1.58094);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a040() {
   return (neuron0x3c2f7b0()*-0.18992);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a080() {
   return (neuron0x3c30180()*0.650041);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a0c0() {
   return (neuron0x3c30b50()*-0.785767);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a100() {
   return (neuron0x3c31630()*3.07732);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a140() {
   return (neuron0x3c32000()*-2.94183);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a180() {
   return (neuron0x3c2f0e0()*-1.51922);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a1c0() {
   return (neuron0x3c33bb0()*2.91899);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a200() {
   return (neuron0x3c34580()*-1.03002);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a240() {
   return (neuron0x3c34f50()*-1.30372);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a280() {
   return (neuron0x3c35920()*1.34349);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59d10() {
   return (neuron0x3c37730()*-1.5435);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c59d50() {
   return (neuron0x3c37a10()*-0.509279);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a3d0() {
   return (neuron0x3c383e0()*-0.540368);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a410() {
   return (neuron0x3c38db0()*7.05633);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a450() {
   return (neuron0x3c39780()*-0.831403);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a490() {
   return (neuron0x3c3a150()*-3.2733);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a4d0() {
   return (neuron0x3c32ca0()*-1.96487);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a510() {
   return (neuron0x3c33670()*-0.433674);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a550() {
   return (neuron0x3c3cee0()*-2.3897);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a590() {
   return (neuron0x3c3d8b0()*0.775098);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a5d0() {
   return (neuron0x3c3e280()*-4.54751);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a610() {
   return (neuron0x3c3ec50()*0.858518);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a650() {
   return (neuron0x3c3f620()*0.553208);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a690() {
   return (neuron0x3c3fff0()*-0.856003);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a6d0() {
   return (neuron0x3c409c0()*-2.99516);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a710() {
   return (neuron0x3c41390()*-4.3638);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a2c0() {
   return (neuron0x3c37420()*-1.55762);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a300() {
   return (neuron0x3c43f70()*-0.811268);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a340() {
   return (neuron0x3c44940()*-1.07464);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a380() {
   return (neuron0x3c45310()*-0.536813);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a960() {
   return (neuron0x3c45ce0()*-0.393362);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a9a0() {
   return (neuron0x3c466b0()*2.30384);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5a9e0() {
   return (neuron0x3c47080()*0.755033);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5aa20() {
   return (neuron0x3c47a50()*0.467935);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5aa60() {
   return (neuron0x3c48420()*11.391);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5aaa0() {
   return (neuron0x3c49000()*-1.52595);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5aae0() {
   return (neuron0x3c499d0()*0.671741);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5ab20() {
   return (neuron0x3c3a850()*-1.4843);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5ab60() {
   return (neuron0x3c3b220()*-0.390537);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5aba0() {
   return (neuron0x3c3bbf0()*8.14562);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5abe0() {
   return (neuron0x3c4e230()*-10.7763);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5ac20() {
   return (neuron0x3c4eae0()*-1.17193);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5ac60() {
   return (neuron0x3c4f4b0()*0.765566);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5aca0() {
   return (neuron0x3c4fe80()*0.424038);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5af00() {
   return (neuron0x3c57080()*12.6981);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5af40() {
   return (neuron0x3c57420()*-4.56772);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5af80() {
   return (neuron0x3c578c0()*-5.38405);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5afc0() {
   return (neuron0x3c58a20()*-9.62522);
}

double NNfunction_nn_chi2_charge1p::synapse0x3c5b000() {
   return (neuron0x3c59b80()*9.97222);
}

