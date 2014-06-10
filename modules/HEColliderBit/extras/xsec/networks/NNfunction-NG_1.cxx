#include "NNfunction-NG_1.h"
#include <cmath>

double NNfunction-NG_1::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.323)/15.2488;
   input1 = (in1 - -7.54686)/1093.31;
   input2 = (in2 - 591.712)/595.139;
   input3 = (in3 - -42.5959)/769.845;
   input4 = (in4 - 1072.38)/961.699;
   input5 = (in5 - 907.128)/957.011;
   input6 = (in6 - 914.717)/955.884;
   input7 = (in7 - 939.145)/939.227;
   input8 = (in8 - 927.525)/973.792;
   input9 = (in9 - 915.567)/960.78;
   input10 = (in10 - 986.917)/951.99;
   input11 = (in11 - 640.127)/790.987;
   input12 = (in12 - 716.691)/859.75;
   input13 = (in13 - 502.878)/514.771;
   input14 = (in14 - 709.686)/808.092;
   input15 = (in15 - 729.999)/822.029;
   input16 = (in16 - 545.895)/572.946;
   input17 = (in17 - 753.106)/895.066;
   input18 = (in18 - 752.541)/896.441;
   input19 = (in19 - 804.526)/873.635;
   input20 = (in20 - -4.53534)/490.069;
   input21 = (in21 - 0.880447)/1146.57;
   input22 = (in22 - 1.77134)/1205.99;
   input23 = (in23 - -207.9)/636.901;
   switch(index) {
     case 0:
         return neuron0x20d19b0();
     default:
         return 0.;
   }
}

double NNfunction-NG_1::Value(int index, double* input) {
   input0 = (input[0] - 23.323)/15.2488;
   input1 = (input[1] - -7.54686)/1093.31;
   input2 = (input[2] - 591.712)/595.139;
   input3 = (input[3] - -42.5959)/769.845;
   input4 = (input[4] - 1072.38)/961.699;
   input5 = (input[5] - 907.128)/957.011;
   input6 = (input[6] - 914.717)/955.884;
   input7 = (input[7] - 939.145)/939.227;
   input8 = (input[8] - 927.525)/973.792;
   input9 = (input[9] - 915.567)/960.78;
   input10 = (input[10] - 986.917)/951.99;
   input11 = (input[11] - 640.127)/790.987;
   input12 = (input[12] - 716.691)/859.75;
   input13 = (input[13] - 502.878)/514.771;
   input14 = (input[14] - 709.686)/808.092;
   input15 = (input[15] - 729.999)/822.029;
   input16 = (input[16] - 545.895)/572.946;
   input17 = (input[17] - 753.106)/895.066;
   input18 = (input[18] - 752.541)/896.441;
   input19 = (input[19] - 804.526)/873.635;
   input20 = (input[20] - -4.53534)/490.069;
   input21 = (input[21] - 0.880447)/1146.57;
   input22 = (input[22] - 1.77134)/1205.99;
   input23 = (input[23] - -207.9)/636.901;
   switch(index) {
     case 0:
         return neuron0x20d19b0();
     default:
         return 0.;
   }
}

double NNfunction-NG_1::neuron0x209daa0() {
   return input0;
}

double NNfunction-NG_1::neuron0x209dde0() {
   return input1;
}

double NNfunction-NG_1::neuron0x209e120() {
   return input2;
}

double NNfunction-NG_1::neuron0x209e460() {
   return input3;
}

double NNfunction-NG_1::neuron0x209e7a0() {
   return input4;
}

double NNfunction-NG_1::neuron0x209eae0() {
   return input5;
}

double NNfunction-NG_1::neuron0x209ee20() {
   return input6;
}

double NNfunction-NG_1::neuron0x209f160() {
   return input7;
}

double NNfunction-NG_1::neuron0x209f4a0() {
   return input8;
}

double NNfunction-NG_1::neuron0x209f7e0() {
   return input9;
}

double NNfunction-NG_1::neuron0x209fb20() {
   return input10;
}

double NNfunction-NG_1::neuron0x209fe60() {
   return input11;
}

double NNfunction-NG_1::neuron0x20a01a0() {
   return input12;
}

double NNfunction-NG_1::neuron0x20a04e0() {
   return input13;
}

double NNfunction-NG_1::neuron0x20a0820() {
   return input14;
}

double NNfunction-NG_1::neuron0x20a0b60() {
   return input15;
}

double NNfunction-NG_1::neuron0x20a0ea0() {
   return input16;
}

double NNfunction-NG_1::neuron0x20a1400() {
   return input17;
}

double NNfunction-NG_1::neuron0x20a1620() {
   return input18;
}

double NNfunction-NG_1::neuron0x20a1960() {
   return input19;
}

double NNfunction-NG_1::neuron0x20a1ca0() {
   return input20;
}

double NNfunction-NG_1::neuron0x20a1fe0() {
   return input21;
}

double NNfunction-NG_1::neuron0x20a2320() {
   return input22;
}

double NNfunction-NG_1::neuron0x20a2660() {
   return input23;
}

double NNfunction-NG_1::input0x20a2ad0() {
   double input = -0.43805;
   input += synapse0x209d960();
   input += synapse0x209d9a0();
   input += synapse0x20a2d80();
   input += synapse0x20a2dc0();
   input += synapse0x20a2e00();
   input += synapse0x20a2e40();
   input += synapse0x20a2e80();
   input += synapse0x20a2ec0();
   input += synapse0x20a2f00();
   input += synapse0x20a2f40();
   input += synapse0x20a2f80();
   input += synapse0x20a2fc0();
   input += synapse0x20a3000();
   input += synapse0x20a3040();
   input += synapse0x20a3080();
   input += synapse0x20a30c0();
   input += synapse0x209d8d0();
   input += synapse0x209d910();
   input += synapse0x1e4f440();
   input += synapse0x1e4f480();
   input += synapse0x20a3320();
   input += synapse0x20a3360();
   input += synapse0x20a33a0();
   input += synapse0x20a33e0();
   return input;
}

double NNfunction-NG_1::neuron0x20a2ad0() {
   double input = input0x20a2ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20a3420() {
   double input = -3.37948;
   input += synapse0x20a3760();
   input += synapse0x20a37a0();
   input += synapse0x20a37e0();
   input += synapse0x20a3820();
   input += synapse0x20a3860();
   input += synapse0x20a38a0();
   input += synapse0x20a38e0();
   input += synapse0x20a3920();
   input += synapse0x20a3960();
   input += synapse0x20a3210();
   input += synapse0x20a3250();
   input += synapse0x20a3290();
   input += synapse0x20a32d0();
   input += synapse0x20a3bb0();
   input += synapse0x20a3bf0();
   input += synapse0x20a3c30();
   input += synapse0x20a35b0();
   input += synapse0x20a35f0();
   input += synapse0x20a3d80();
   input += synapse0x20a3dc0();
   input += synapse0x20a3e00();
   input += synapse0x20a3e40();
   input += synapse0x20a3e80();
   input += synapse0x20a3ec0();
   return input;
}

double NNfunction-NG_1::neuron0x20a3420() {
   double input = input0x20a3420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20a3f00() {
   double input = 1.03458;
   input += synapse0x20a4240();
   input += synapse0x20a4280();
   input += synapse0x20a42c0();
   input += synapse0x20a4300();
   input += synapse0x20a4340();
   input += synapse0x20a4380();
   input += synapse0x20a43c0();
   input += synapse0x20a4400();
   input += synapse0x20a4440();
   input += synapse0x20a4480();
   input += synapse0x20a44c0();
   input += synapse0x20a4500();
   input += synapse0x20a4540();
   input += synapse0x20a4580();
   input += synapse0x20a45c0();
   input += synapse0x20a4600();
   input += synapse0x20a4090();
   input += synapse0x20a40d0();
   input += synapse0x1e4f810();
   input += synapse0x1e5d050();
   input += synapse0x1e5d090();
   input += synapse0x208cb30();
   input += synapse0x208cb70();
   input += synapse0x208cbb0();
   return input;
}

double NNfunction-NG_1::neuron0x20a3f00() {
   double input = input0x20a3f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20a39a0() {
   double input = 2.02661;
   input += synapse0x1e5d8f0();
   input += synapse0x20a3b30();
   input += synapse0x20a3b70();
   input += synapse0x20a4750();
   input += synapse0x20a4790();
   input += synapse0x20a47d0();
   input += synapse0x20a4810();
   input += synapse0x20a4850();
   input += synapse0x20a4890();
   input += synapse0x20a48d0();
   input += synapse0x20a4910();
   input += synapse0x20a4950();
   input += synapse0x20a4990();
   input += synapse0x20a49d0();
   input += synapse0x20a4a10();
   input += synapse0x20a4a50();
   input += synapse0x209d9e0();
   input += synapse0x209da20();
   input += synapse0x209da60();
   input += synapse0x20a4ba0();
   input += synapse0x20a4be0();
   input += synapse0x20a4c20();
   input += synapse0x20a4c60();
   input += synapse0x20a4ca0();
   return input;
}

double NNfunction-NG_1::neuron0x20a39a0() {
   double input = input0x20a39a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20a4ce0() {
   double input = -0.792574;
   input += synapse0x20a5020();
   input += synapse0x20a5060();
   input += synapse0x20a50a0();
   input += synapse0x20a50e0();
   input += synapse0x20a5120();
   input += synapse0x20a5160();
   input += synapse0x20a51a0();
   input += synapse0x20a51e0();
   input += synapse0x20a5220();
   input += synapse0x20a5260();
   input += synapse0x20a52a0();
   input += synapse0x20a52e0();
   input += synapse0x20a5320();
   input += synapse0x20a5360();
   input += synapse0x20a53a0();
   input += synapse0x20a53e0();
   input += synapse0x20a4e70();
   input += synapse0x20a4eb0();
   input += synapse0x20a5530();
   input += synapse0x20a5570();
   input += synapse0x20a55b0();
   input += synapse0x20a55f0();
   input += synapse0x20a5630();
   input += synapse0x20a5670();
   return input;
}

double NNfunction-NG_1::neuron0x20a4ce0() {
   double input = input0x20a4ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20a56b0() {
   double input = 1.06799;
   input += synapse0x20a59f0();
   input += synapse0x20a5a30();
   input += synapse0x20a5a70();
   input += synapse0x20a5ab0();
   input += synapse0x20a5af0();
   input += synapse0x20a5b30();
   input += synapse0x20a5b70();
   input += synapse0x20a5bb0();
   input += synapse0x20a5bf0();
   input += synapse0x1e5d3c0();
   input += synapse0x1e5d400();
   input += synapse0x1e5d440();
   input += synapse0x1e5d480();
   input += synapse0x1e5d4c0();
   input += synapse0x1e5d500();
   input += synapse0x1e5d540();
   input += synapse0x20a5840();
   input += synapse0x20a5880();
   input += synapse0x1e5d690();
   input += synapse0x1e5d6d0();
   input += synapse0x1e5d710();
   input += synapse0x1e5d750();
   input += synapse0x1e5d790();
   input += synapse0x20a6440();
   return input;
}

double NNfunction-NG_1::neuron0x20a56b0() {
   double input = input0x20a56b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20a6480() {
   double input = -1.25549;
   input += synapse0x20a67c0();
   input += synapse0x20a6800();
   input += synapse0x20a6840();
   input += synapse0x20a6880();
   input += synapse0x20a68c0();
   input += synapse0x20a6900();
   input += synapse0x20a6940();
   input += synapse0x20a6980();
   input += synapse0x20a69c0();
   input += synapse0x20a6a00();
   input += synapse0x20a6a40();
   input += synapse0x20a6a80();
   input += synapse0x20a6ac0();
   input += synapse0x20a6b00();
   input += synapse0x20a6b40();
   input += synapse0x20a6b80();
   input += synapse0x20a6610();
   input += synapse0x20a6650();
   input += synapse0x20a6cd0();
   input += synapse0x20a6d10();
   input += synapse0x20a6d50();
   input += synapse0x20a6d90();
   input += synapse0x20a6dd0();
   input += synapse0x20a6e10();
   return input;
}

double NNfunction-NG_1::neuron0x20a6480() {
   double input = input0x20a6480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20a6e50() {
   double input = 0.515208;
   input += synapse0x20a7190();
   input += synapse0x20a71d0();
   input += synapse0x20a7210();
   input += synapse0x20a7250();
   input += synapse0x20a7290();
   input += synapse0x20a72d0();
   input += synapse0x20a7310();
   input += synapse0x20a7350();
   input += synapse0x20a7390();
   input += synapse0x20a73d0();
   input += synapse0x20a7410();
   input += synapse0x20a7450();
   input += synapse0x20a7490();
   input += synapse0x20a74d0();
   input += synapse0x20a7510();
   input += synapse0x20a7550();
   input += synapse0x20a6fe0();
   input += synapse0x20a7020();
   input += synapse0x20a76a0();
   input += synapse0x20a76e0();
   input += synapse0x20a7720();
   input += synapse0x20a7760();
   input += synapse0x20a77a0();
   input += synapse0x20a77e0();
   return input;
}

double NNfunction-NG_1::neuron0x20a6e50() {
   double input = input0x20a6e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20a7820() {
   double input = -1.12787;
   input += synapse0x20a12f0();
   input += synapse0x20a1330();
   input += synapse0x20a1370();
   input += synapse0x20a13b0();
   input += synapse0x20a7d70();
   input += synapse0x20a7db0();
   input += synapse0x20a7df0();
   input += synapse0x20a7e30();
   input += synapse0x20a7e70();
   input += synapse0x20a7eb0();
   input += synapse0x20a7ef0();
   input += synapse0x20a7f30();
   input += synapse0x20a7f70();
   input += synapse0x20a7fb0();
   input += synapse0x20a7ff0();
   input += synapse0x20a8030();
   input += synapse0x20a79b0();
   input += synapse0x20a79f0();
   input += synapse0x20a8180();
   input += synapse0x20a81c0();
   input += synapse0x20a8200();
   input += synapse0x20a8240();
   input += synapse0x20a8280();
   input += synapse0x20a82c0();
   return input;
}

double NNfunction-NG_1::neuron0x20a7820() {
   double input = input0x20a7820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20a8300() {
   double input = -1.46432;
   input += synapse0x20a8640();
   input += synapse0x20a8680();
   input += synapse0x20a86c0();
   input += synapse0x20a8700();
   input += synapse0x20a8740();
   input += synapse0x20a8780();
   input += synapse0x20a87c0();
   input += synapse0x20a8800();
   input += synapse0x20a8840();
   input += synapse0x20a8880();
   input += synapse0x20a88c0();
   input += synapse0x20a8900();
   input += synapse0x20a8940();
   input += synapse0x20a8980();
   input += synapse0x20a89c0();
   input += synapse0x20a8a00();
   input += synapse0x20a8490();
   input += synapse0x20a84d0();
   input += synapse0x20a8b50();
   input += synapse0x20a8b90();
   input += synapse0x20a8bd0();
   input += synapse0x20a8c10();
   input += synapse0x20a8c50();
   input += synapse0x20a8c90();
   return input;
}

double NNfunction-NG_1::neuron0x20a8300() {
   double input = input0x20a8300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20a8cd0() {
   double input = -0.341371;
   input += synapse0x20a9010();
   input += synapse0x20a9050();
   input += synapse0x20a9090();
   input += synapse0x20a90d0();
   input += synapse0x20a9110();
   input += synapse0x20a9150();
   input += synapse0x20a9190();
   input += synapse0x20a91d0();
   input += synapse0x20a9210();
   input += synapse0x20a9250();
   input += synapse0x20a9290();
   input += synapse0x20a92d0();
   input += synapse0x20a9310();
   input += synapse0x20a9350();
   input += synapse0x20a9390();
   input += synapse0x20a93d0();
   input += synapse0x20a8e60();
   input += synapse0x20a8ea0();
   input += synapse0x20a5c30();
   input += synapse0x20a5c70();
   input += synapse0x20a5cb0();
   input += synapse0x20a5cf0();
   input += synapse0x20a5d30();
   input += synapse0x20a5d70();
   return input;
}

double NNfunction-NG_1::neuron0x20a8cd0() {
   double input = input0x20a8cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20a5db0() {
   double input = 0.875375;
   input += synapse0x20a60f0();
   input += synapse0x20a6130();
   input += synapse0x20a6170();
   input += synapse0x20a61b0();
   input += synapse0x20a61f0();
   input += synapse0x20a6230();
   input += synapse0x20a6270();
   input += synapse0x20a62b0();
   input += synapse0x20a62f0();
   input += synapse0x20a6330();
   input += synapse0x20a6370();
   input += synapse0x20a63b0();
   input += synapse0x20a63f0();
   input += synapse0x20aa530();
   input += synapse0x20aa570();
   input += synapse0x20aa5b0();
   input += synapse0x20a5f40();
   input += synapse0x20a5f80();
   input += synapse0x20aa700();
   input += synapse0x20aa740();
   input += synapse0x20aa780();
   input += synapse0x20aa7c0();
   input += synapse0x20aa800();
   input += synapse0x20aa840();
   return input;
}

double NNfunction-NG_1::neuron0x20a5db0() {
   double input = input0x20a5db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20aa880() {
   double input = -1.37821;
   input += synapse0x20aabc0();
   input += synapse0x20aac00();
   input += synapse0x20aac40();
   input += synapse0x20aac80();
   input += synapse0x20aacc0();
   input += synapse0x20aad00();
   input += synapse0x20aad40();
   input += synapse0x20aad80();
   input += synapse0x20aadc0();
   input += synapse0x20aae00();
   input += synapse0x20aae40();
   input += synapse0x20aae80();
   input += synapse0x20aaec0();
   input += synapse0x20aaf00();
   input += synapse0x20aaf40();
   input += synapse0x20aaf80();
   input += synapse0x20aaa10();
   input += synapse0x20aaa50();
   input += synapse0x20ab0d0();
   input += synapse0x20ab110();
   input += synapse0x20ab150();
   input += synapse0x20ab190();
   input += synapse0x20ab1d0();
   input += synapse0x20ab210();
   return input;
}

double NNfunction-NG_1::neuron0x20aa880() {
   double input = input0x20aa880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20ab250() {
   double input = 0.955909;
   input += synapse0x20ab590();
   input += synapse0x20ab5d0();
   input += synapse0x20ab610();
   input += synapse0x20ab650();
   input += synapse0x20ab690();
   input += synapse0x20ab6d0();
   input += synapse0x20ab710();
   input += synapse0x20ab750();
   input += synapse0x20ab790();
   input += synapse0x20ab7d0();
   input += synapse0x20ab810();
   input += synapse0x20ab850();
   input += synapse0x20ab890();
   input += synapse0x20ab8d0();
   input += synapse0x20ab910();
   input += synapse0x20ab950();
   input += synapse0x20ab3e0();
   input += synapse0x20ab420();
   input += synapse0x20abaa0();
   input += synapse0x20abae0();
   input += synapse0x20abb20();
   input += synapse0x20abb60();
   input += synapse0x20abba0();
   input += synapse0x20abbe0();
   return input;
}

double NNfunction-NG_1::neuron0x20ab250() {
   double input = input0x20ab250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20abc20() {
   double input = -1.50121;
   input += synapse0x20abf60();
   input += synapse0x20abfa0();
   input += synapse0x20abfe0();
   input += synapse0x20ac020();
   input += synapse0x20ac060();
   input += synapse0x20ac0a0();
   input += synapse0x20ac0e0();
   input += synapse0x20ac120();
   input += synapse0x20ac160();
   input += synapse0x20ac1a0();
   input += synapse0x20ac1e0();
   input += synapse0x20ac220();
   input += synapse0x20ac260();
   input += synapse0x20ac2a0();
   input += synapse0x20ac2e0();
   input += synapse0x20ac320();
   input += synapse0x20abdb0();
   input += synapse0x20abdf0();
   input += synapse0x20ac470();
   input += synapse0x20ac4b0();
   input += synapse0x20ac4f0();
   input += synapse0x20ac530();
   input += synapse0x20ac570();
   input += synapse0x20ac5b0();
   return input;
}

double NNfunction-NG_1::neuron0x20abc20() {
   double input = input0x20abc20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20ac5f0() {
   double input = 0.783005;
   input += synapse0x20ac930();
   input += synapse0x209dcc0();
   input += synapse0x209dd00();
   input += synapse0x209e000();
   input += synapse0x209e040();
   input += synapse0x209e340();
   input += synapse0x209e380();
   input += synapse0x209e680();
   input += synapse0x209e6c0();
   input += synapse0x209e9c0();
   input += synapse0x209ea00();
   input += synapse0x209ed00();
   input += synapse0x209ed40();
   input += synapse0x209f040();
   input += synapse0x209f080();
   input += synapse0x209f380();
   input += synapse0x209f3c0();
   input += synapse0x209f6c0();
   input += synapse0x209f700();
   input += synapse0x209fa00();
   input += synapse0x209fa40();
   input += synapse0x209fd40();
   input += synapse0x209fd80();
   input += synapse0x20a0080();
   return input;
}

double NNfunction-NG_1::neuron0x20ac5f0() {
   double input = input0x20ac5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20ae400() {
   double input = -4.30435;
   input += synapse0x20a00c0();
   input += synapse0x20a0d80();
   input += synapse0x20a0dc0();
   input += synapse0x20ac780();
   input += synapse0x20ac7c0();
   input += synapse0x20a10c0();
   input += synapse0x20a1100();
   input += synapse0x1e4f320();
   input += synapse0x1e4f360();
   input += synapse0x20a1840();
   input += synapse0x20a1880();
   input += synapse0x20a1b80();
   input += synapse0x20a1bc0();
   input += synapse0x20a1ec0();
   input += synapse0x20a1f00();
   input += synapse0x20a2200();
   input += synapse0x20a2240();
   input += synapse0x20a2540();
   input += synapse0x20a2580();
   input += synapse0x20a2880();
   input += synapse0x20a28c0();
   input += synapse0x20a03c0();
   input += synapse0x20a0400();
   input += synapse0x20ae6a0();
   return input;
}

double NNfunction-NG_1::neuron0x20ae400() {
   double input = input0x20ae400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20ae6e0() {
   double input = -0.245572;
   input += synapse0x20aea20();
   input += synapse0x20aea60();
   input += synapse0x20aeaa0();
   input += synapse0x20aeae0();
   input += synapse0x20aeb20();
   input += synapse0x20aeb60();
   input += synapse0x20aeba0();
   input += synapse0x20aebe0();
   input += synapse0x20aec20();
   input += synapse0x20aec60();
   input += synapse0x20aeca0();
   input += synapse0x20aece0();
   input += synapse0x20aed20();
   input += synapse0x20aed60();
   input += synapse0x20aeda0();
   input += synapse0x20aede0();
   input += synapse0x20ae870();
   input += synapse0x20ae8b0();
   input += synapse0x20aef30();
   input += synapse0x20aef70();
   input += synapse0x20aefb0();
   input += synapse0x20aeff0();
   input += synapse0x20af030();
   input += synapse0x20af070();
   return input;
}

double NNfunction-NG_1::neuron0x20ae6e0() {
   double input = input0x20ae6e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20af0b0() {
   double input = 0.158419;
   input += synapse0x20af3f0();
   input += synapse0x20af430();
   input += synapse0x20af470();
   input += synapse0x20af4b0();
   input += synapse0x20af4f0();
   input += synapse0x20af530();
   input += synapse0x20af570();
   input += synapse0x20af5b0();
   input += synapse0x20af5f0();
   input += synapse0x20af630();
   input += synapse0x20af670();
   input += synapse0x20af6b0();
   input += synapse0x20af6f0();
   input += synapse0x20af730();
   input += synapse0x20af770();
   input += synapse0x20af7b0();
   input += synapse0x20af240();
   input += synapse0x20af280();
   input += synapse0x20af900();
   input += synapse0x20af940();
   input += synapse0x20af980();
   input += synapse0x20af9c0();
   input += synapse0x20afa00();
   input += synapse0x20afa40();
   return input;
}

double NNfunction-NG_1::neuron0x20af0b0() {
   double input = input0x20af0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20afa80() {
   double input = -1.53584;
   input += synapse0x20afdc0();
   input += synapse0x20afe00();
   input += synapse0x20afe40();
   input += synapse0x20afe80();
   input += synapse0x20afec0();
   input += synapse0x20aff00();
   input += synapse0x20aff40();
   input += synapse0x20aff80();
   input += synapse0x20affc0();
   input += synapse0x20b0000();
   input += synapse0x20b0040();
   input += synapse0x20b0080();
   input += synapse0x20b00c0();
   input += synapse0x20b0100();
   input += synapse0x20b0140();
   input += synapse0x20b0180();
   input += synapse0x20afc10();
   input += synapse0x20afc50();
   input += synapse0x20b02d0();
   input += synapse0x20b0310();
   input += synapse0x20b0350();
   input += synapse0x20b0390();
   input += synapse0x20b03d0();
   input += synapse0x20b0410();
   return input;
}

double NNfunction-NG_1::neuron0x20afa80() {
   double input = input0x20afa80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20b0450() {
   double input = -0.213474;
   input += synapse0x20b0790();
   input += synapse0x20b07d0();
   input += synapse0x20b0810();
   input += synapse0x20b0850();
   input += synapse0x20b0890();
   input += synapse0x20b08d0();
   input += synapse0x20b0910();
   input += synapse0x20b0950();
   input += synapse0x20b0990();
   input += synapse0x20b09d0();
   input += synapse0x20b0a10();
   input += synapse0x20b0a50();
   input += synapse0x20b0a90();
   input += synapse0x20b0ad0();
   input += synapse0x20b0b10();
   input += synapse0x20b0b50();
   input += synapse0x20b05e0();
   input += synapse0x20b0620();
   input += synapse0x20b0ca0();
   input += synapse0x20b0ce0();
   input += synapse0x20b0d20();
   input += synapse0x20b0d60();
   input += synapse0x20b0da0();
   input += synapse0x20b0de0();
   return input;
}

double NNfunction-NG_1::neuron0x20b0450() {
   double input = input0x20b0450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20b0e20() {
   double input = -2.91839;
   input += synapse0x20b1160();
   input += synapse0x20b11a0();
   input += synapse0x20b11e0();
   input += synapse0x20b1220();
   input += synapse0x20b1260();
   input += synapse0x20b12a0();
   input += synapse0x20b12e0();
   input += synapse0x20b1320();
   input += synapse0x20b1360();
   input += synapse0x20a9520();
   input += synapse0x20a9560();
   input += synapse0x20a95a0();
   input += synapse0x20a95e0();
   input += synapse0x20a9620();
   input += synapse0x20a9660();
   input += synapse0x20a96a0();
   input += synapse0x20b0fb0();
   input += synapse0x20b0ff0();
   input += synapse0x20a97f0();
   input += synapse0x20a9830();
   input += synapse0x20a9870();
   input += synapse0x20a98b0();
   input += synapse0x20a98f0();
   input += synapse0x20a9930();
   return input;
}

double NNfunction-NG_1::neuron0x20b0e20() {
   double input = input0x20b0e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20a9970() {
   double input = -1.85774;
   input += synapse0x20a9cb0();
   input += synapse0x20a9cf0();
   input += synapse0x20a9d30();
   input += synapse0x20a9d70();
   input += synapse0x20a9db0();
   input += synapse0x20a9df0();
   input += synapse0x20a9e30();
   input += synapse0x20a9e70();
   input += synapse0x20a9eb0();
   input += synapse0x20a9ef0();
   input += synapse0x20a9f30();
   input += synapse0x20a9f70();
   input += synapse0x20a9fb0();
   input += synapse0x20a9ff0();
   input += synapse0x20aa030();
   input += synapse0x20aa070();
   input += synapse0x20a9b00();
   input += synapse0x20a9b40();
   input += synapse0x20aa1c0();
   input += synapse0x20aa200();
   input += synapse0x20aa240();
   input += synapse0x20aa280();
   input += synapse0x20aa2c0();
   input += synapse0x20aa300();
   return input;
}

double NNfunction-NG_1::neuron0x20a9970() {
   double input = input0x20a9970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20aa340() {
   double input = -0.584674;
   input += synapse0x20aa4d0();
   input += synapse0x20b3560();
   input += synapse0x20b35a0();
   input += synapse0x20b35e0();
   input += synapse0x20b3620();
   input += synapse0x20b3660();
   input += synapse0x20b36a0();
   input += synapse0x20b36e0();
   input += synapse0x20b3720();
   input += synapse0x20b3760();
   input += synapse0x20b37a0();
   input += synapse0x20b37e0();
   input += synapse0x20b3820();
   input += synapse0x20b3860();
   input += synapse0x20b38a0();
   input += synapse0x20b38e0();
   input += synapse0x20b33b0();
   input += synapse0x20b33f0();
   input += synapse0x20b3a30();
   input += synapse0x20b3a70();
   input += synapse0x20b3ab0();
   input += synapse0x20b3af0();
   input += synapse0x20b3b30();
   input += synapse0x20b3b70();
   return input;
}

double NNfunction-NG_1::neuron0x20aa340() {
   double input = input0x20aa340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20b3bb0() {
   double input = 2.10748;
   input += synapse0x20b3ef0();
   input += synapse0x20b3f30();
   input += synapse0x20b3f70();
   input += synapse0x20b3fb0();
   input += synapse0x20b3ff0();
   input += synapse0x20b4030();
   input += synapse0x20b4070();
   input += synapse0x20b40b0();
   input += synapse0x20b40f0();
   input += synapse0x20b4130();
   input += synapse0x20b4170();
   input += synapse0x20b41b0();
   input += synapse0x20b41f0();
   input += synapse0x20b4230();
   input += synapse0x20b4270();
   input += synapse0x20b42b0();
   input += synapse0x20b3d40();
   input += synapse0x20b3d80();
   input += synapse0x20b4400();
   input += synapse0x20b4440();
   input += synapse0x20b4480();
   input += synapse0x20b44c0();
   input += synapse0x20b4500();
   input += synapse0x20b4540();
   return input;
}

double NNfunction-NG_1::neuron0x20b3bb0() {
   double input = input0x20b3bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20b4580() {
   double input = -9.55559;
   input += synapse0x20b48c0();
   input += synapse0x20b4900();
   input += synapse0x20b4940();
   input += synapse0x20b4980();
   input += synapse0x20b49c0();
   input += synapse0x20b4a00();
   input += synapse0x20b4a40();
   input += synapse0x20b4a80();
   input += synapse0x20b4ac0();
   input += synapse0x20b4b00();
   input += synapse0x20b4b40();
   input += synapse0x20b4b80();
   input += synapse0x20b4bc0();
   input += synapse0x20b4c00();
   input += synapse0x20b4c40();
   input += synapse0x20b4c80();
   input += synapse0x20b4710();
   input += synapse0x20b4750();
   input += synapse0x20b4dd0();
   input += synapse0x20b4e10();
   input += synapse0x20b4e50();
   input += synapse0x20b4e90();
   input += synapse0x20b4ed0();
   input += synapse0x20b4f10();
   return input;
}

double NNfunction-NG_1::neuron0x20b4580() {
   double input = input0x20b4580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20b4f50() {
   double input = -2.85371;
   input += synapse0x20b5290();
   input += synapse0x20b52d0();
   input += synapse0x20b5310();
   input += synapse0x20b5350();
   input += synapse0x20b5390();
   input += synapse0x20b53d0();
   input += synapse0x20b5410();
   input += synapse0x20b5450();
   input += synapse0x20b5490();
   input += synapse0x20b54d0();
   input += synapse0x20b5510();
   input += synapse0x20b5550();
   input += synapse0x20b5590();
   input += synapse0x20b55d0();
   input += synapse0x20b5610();
   input += synapse0x20b5650();
   input += synapse0x20b50e0();
   input += synapse0x20b5120();
   input += synapse0x20b57a0();
   input += synapse0x20b57e0();
   input += synapse0x20b5820();
   input += synapse0x20b5860();
   input += synapse0x20b58a0();
   input += synapse0x20b58e0();
   return input;
}

double NNfunction-NG_1::neuron0x20b4f50() {
   double input = input0x20b4f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20b5920() {
   double input = -1.35439;
   input += synapse0x20b5c60();
   input += synapse0x20b5ca0();
   input += synapse0x20b5ce0();
   input += synapse0x20b5d20();
   input += synapse0x20b5d60();
   input += synapse0x20b5da0();
   input += synapse0x20b5de0();
   input += synapse0x20b5e20();
   input += synapse0x20b5e60();
   input += synapse0x20b5ea0();
   input += synapse0x20b5ee0();
   input += synapse0x20b5f20();
   input += synapse0x20b5f60();
   input += synapse0x20b5fa0();
   input += synapse0x20b5fe0();
   input += synapse0x20b6020();
   input += synapse0x20b5ab0();
   input += synapse0x20b5af0();
   input += synapse0x20b6170();
   input += synapse0x20b61b0();
   input += synapse0x20b61f0();
   input += synapse0x20b6230();
   input += synapse0x20b6270();
   input += synapse0x20b62b0();
   return input;
}

double NNfunction-NG_1::neuron0x20b5920() {
   double input = input0x20b5920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20b62f0() {
   double input = 1.1328;
   input += synapse0x20b6630();
   input += synapse0x20b6670();
   input += synapse0x20b66b0();
   input += synapse0x20b66f0();
   input += synapse0x20b6730();
   input += synapse0x20b6770();
   input += synapse0x20b67b0();
   input += synapse0x20b67f0();
   input += synapse0x20b6830();
   input += synapse0x20b6870();
   input += synapse0x20b68b0();
   input += synapse0x20b68f0();
   input += synapse0x20b6930();
   input += synapse0x20b6970();
   input += synapse0x20b69b0();
   input += synapse0x20b69f0();
   input += synapse0x20b6480();
   input += synapse0x20b64c0();
   input += synapse0x20b6b40();
   input += synapse0x20b6b80();
   input += synapse0x20b6bc0();
   input += synapse0x20b6c00();
   input += synapse0x20b6c40();
   input += synapse0x20b6c80();
   return input;
}

double NNfunction-NG_1::neuron0x20b62f0() {
   double input = input0x20b62f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20b6cc0() {
   double input = -0.604144;
   input += synapse0x20b7000();
   input += synapse0x20b7040();
   input += synapse0x20b7080();
   input += synapse0x20b70c0();
   input += synapse0x20b7100();
   input += synapse0x20b7140();
   input += synapse0x20b7180();
   input += synapse0x20b71c0();
   input += synapse0x20b7200();
   input += synapse0x20b7240();
   input += synapse0x20b7280();
   input += synapse0x20b72c0();
   input += synapse0x20b7300();
   input += synapse0x20b7340();
   input += synapse0x20b7380();
   input += synapse0x20b73c0();
   input += synapse0x20b6e50();
   input += synapse0x20b6e90();
   input += synapse0x20b7510();
   input += synapse0x20b7550();
   input += synapse0x20b7590();
   input += synapse0x20b75d0();
   input += synapse0x20b7610();
   input += synapse0x20b7650();
   return input;
}

double NNfunction-NG_1::neuron0x20b6cc0() {
   double input = input0x20b6cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20b7690() {
   double input = -0.849341;
   input += synapse0x20b79d0();
   input += synapse0x20b7a10();
   input += synapse0x20b7a50();
   input += synapse0x20b7a90();
   input += synapse0x20b7ad0();
   input += synapse0x20b7b10();
   input += synapse0x20b7b50();
   input += synapse0x20b7b90();
   input += synapse0x20b7bd0();
   input += synapse0x20b7c10();
   input += synapse0x20b7c50();
   input += synapse0x20b7c90();
   input += synapse0x20b7cd0();
   input += synapse0x20b7d10();
   input += synapse0x20b7d50();
   input += synapse0x20b7d90();
   input += synapse0x20b7820();
   input += synapse0x20b7860();
   input += synapse0x20b7ee0();
   input += synapse0x20b7f20();
   input += synapse0x20b7f60();
   input += synapse0x20b7fa0();
   input += synapse0x20b7fe0();
   input += synapse0x20b8020();
   return input;
}

double NNfunction-NG_1::neuron0x20b7690() {
   double input = input0x20b7690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20b8060() {
   double input = 0.391282;
   input += synapse0x20b83a0();
   input += synapse0x20ac970();
   input += synapse0x20ac9b0();
   input += synapse0x20ac9f0();
   input += synapse0x20acc40();
   input += synapse0x20acc80();
   input += synapse0x20accc0();
   input += synapse0x20acf10();
   input += synapse0x20acf50();
   input += synapse0x20ad1a0();
   input += synapse0x20ad1e0();
   input += synapse0x20ad220();
   input += synapse0x20ad470();
   input += synapse0x20ad4b0();
   input += synapse0x20ad700();
   input += synapse0x20ad740();
   input += synapse0x20b81f0();
   input += synapse0x20b8230();
   input += synapse0x20ad890();
   input += synapse0x20adda0();
   input += synapse0x20adde0();
   input += synapse0x20ade20();
   input += synapse0x20ae070();
   input += synapse0x20ae0b0();
   return input;
}

double NNfunction-NG_1::neuron0x20b8060() {
   double input = input0x20b8060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20ae0f0() {
   double input = 2.34467;
   input += synapse0x20ad960();
   input += synapse0x20ad9a0();
   input += synapse0x20ad9e0();
   input += synapse0x20ada20();
   input += synapse0x20ae3a0();
   input += synapse0x20ba6f0();
   input += synapse0x20ba730();
   input += synapse0x20ba770();
   input += synapse0x20ba7b0();
   input += synapse0x20ba7f0();
   input += synapse0x20ba830();
   input += synapse0x20ba870();
   input += synapse0x20ba8b0();
   input += synapse0x20ba8f0();
   input += synapse0x20ba930();
   input += synapse0x20ba970();
   input += synapse0x20ae280();
   input += synapse0x20ae2c0();
   input += synapse0x20baac0();
   input += synapse0x20bab00();
   input += synapse0x20bab40();
   input += synapse0x20bab80();
   input += synapse0x20babc0();
   input += synapse0x20bac00();
   return input;
}

double NNfunction-NG_1::neuron0x20ae0f0() {
   double input = input0x20ae0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20bac40() {
   double input = -1.3445;
   input += synapse0x20baf80();
   input += synapse0x20bafc0();
   input += synapse0x20bb000();
   input += synapse0x20bb040();
   input += synapse0x20bb080();
   input += synapse0x20bb0c0();
   input += synapse0x20bb100();
   input += synapse0x20bb140();
   input += synapse0x20bb180();
   input += synapse0x20bb1c0();
   input += synapse0x20bb200();
   input += synapse0x20bb240();
   input += synapse0x20bb280();
   input += synapse0x20bb2c0();
   input += synapse0x20bb300();
   input += synapse0x20bb340();
   input += synapse0x20badd0();
   input += synapse0x20bae10();
   input += synapse0x20bb490();
   input += synapse0x20bb4d0();
   input += synapse0x20bb510();
   input += synapse0x20bb550();
   input += synapse0x20bb590();
   input += synapse0x20bb5d0();
   return input;
}

double NNfunction-NG_1::neuron0x20bac40() {
   double input = input0x20bac40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20bb610() {
   double input = 1.69317;
   input += synapse0x20bb950();
   input += synapse0x20bb990();
   input += synapse0x20bb9d0();
   input += synapse0x20bba10();
   input += synapse0x20bba50();
   input += synapse0x20bba90();
   input += synapse0x20bbad0();
   input += synapse0x20bbb10();
   input += synapse0x20bbb50();
   input += synapse0x20bbb90();
   input += synapse0x20bbbd0();
   input += synapse0x20bbc10();
   input += synapse0x20bbc50();
   input += synapse0x20bbc90();
   input += synapse0x20bbcd0();
   input += synapse0x20bbd10();
   input += synapse0x20bb7a0();
   input += synapse0x20bb7e0();
   input += synapse0x20bbe60();
   input += synapse0x20bbea0();
   input += synapse0x20bbee0();
   input += synapse0x20bbf20();
   input += synapse0x20bbf60();
   input += synapse0x20bbfa0();
   return input;
}

double NNfunction-NG_1::neuron0x20bb610() {
   double input = input0x20bb610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20bbfe0() {
   double input = -1.62785;
   input += synapse0x20bc320();
   input += synapse0x20bc360();
   input += synapse0x20bc3a0();
   input += synapse0x20bc3e0();
   input += synapse0x20bc420();
   input += synapse0x20bc460();
   input += synapse0x20bc4a0();
   input += synapse0x20bc4e0();
   input += synapse0x20bc520();
   input += synapse0x20bc560();
   input += synapse0x20bc5a0();
   input += synapse0x20bc5e0();
   input += synapse0x20bc620();
   input += synapse0x20bc660();
   input += synapse0x20bc6a0();
   input += synapse0x20bc6e0();
   input += synapse0x20bc170();
   input += synapse0x20bc1b0();
   input += synapse0x20bc830();
   input += synapse0x20bc870();
   input += synapse0x20bc8b0();
   input += synapse0x20bc8f0();
   input += synapse0x20bc930();
   input += synapse0x20bc970();
   return input;
}

double NNfunction-NG_1::neuron0x20bbfe0() {
   double input = input0x20bbfe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20bc9b0() {
   double input = -0.86726;
   input += synapse0x20bccf0();
   input += synapse0x20bcd30();
   input += synapse0x20bcd70();
   input += synapse0x20bcdb0();
   input += synapse0x20bcdf0();
   input += synapse0x20bce30();
   input += synapse0x20bce70();
   input += synapse0x20bceb0();
   input += synapse0x20bcef0();
   input += synapse0x20bcf30();
   input += synapse0x20bcf70();
   input += synapse0x20bcfb0();
   input += synapse0x20bcff0();
   input += synapse0x20bd030();
   input += synapse0x20bd070();
   input += synapse0x20bd0b0();
   input += synapse0x20bcb40();
   input += synapse0x20bcb80();
   input += synapse0x20bd200();
   input += synapse0x20bd240();
   input += synapse0x20bd280();
   input += synapse0x20bd2c0();
   input += synapse0x20bd300();
   input += synapse0x20bd340();
   return input;
}

double NNfunction-NG_1::neuron0x20bc9b0() {
   double input = input0x20bc9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20bd380() {
   double input = 0.958327;
   input += synapse0x20bd6c0();
   input += synapse0x20bd700();
   input += synapse0x20bd740();
   input += synapse0x20bd780();
   input += synapse0x20bd7c0();
   input += synapse0x20bd800();
   input += synapse0x20bd840();
   input += synapse0x20bd880();
   input += synapse0x20bd8c0();
   input += synapse0x20bd900();
   input += synapse0x20bd940();
   input += synapse0x20bd980();
   input += synapse0x20bd9c0();
   input += synapse0x20bda00();
   input += synapse0x20bda40();
   input += synapse0x20bda80();
   input += synapse0x20bd510();
   input += synapse0x20bd550();
   input += synapse0x20bdbd0();
   input += synapse0x20bdc10();
   input += synapse0x20bdc50();
   input += synapse0x20bdc90();
   input += synapse0x20bdcd0();
   input += synapse0x20bdd10();
   return input;
}

double NNfunction-NG_1::neuron0x20bd380() {
   double input = input0x20bd380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20bdd50() {
   double input = -0.929167;
   input += synapse0x20be090();
   input += synapse0x20be0d0();
   input += synapse0x20be110();
   input += synapse0x20be150();
   input += synapse0x20be190();
   input += synapse0x20be1d0();
   input += synapse0x20be210();
   input += synapse0x20be250();
   input += synapse0x20be290();
   input += synapse0x20be2d0();
   input += synapse0x20be310();
   input += synapse0x20be350();
   input += synapse0x20be390();
   input += synapse0x20be3d0();
   input += synapse0x20be410();
   input += synapse0x20be450();
   input += synapse0x20bdee0();
   input += synapse0x20bdf20();
   input += synapse0x20be5a0();
   input += synapse0x20be5e0();
   input += synapse0x20be620();
   input += synapse0x20be660();
   input += synapse0x20be6a0();
   input += synapse0x20be6e0();
   return input;
}

double NNfunction-NG_1::neuron0x20bdd50() {
   double input = input0x20bdd50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20be720() {
   double input = -1.21393;
   input += synapse0x20bea60();
   input += synapse0x20beaa0();
   input += synapse0x20beae0();
   input += synapse0x20beb20();
   input += synapse0x20beb60();
   input += synapse0x20beba0();
   input += synapse0x20bebe0();
   input += synapse0x20bec20();
   input += synapse0x20bec60();
   input += synapse0x20beca0();
   input += synapse0x20bece0();
   input += synapse0x20bed20();
   input += synapse0x20bed60();
   input += synapse0x20beda0();
   input += synapse0x20bede0();
   input += synapse0x20bee20();
   input += synapse0x20be8b0();
   input += synapse0x20be8f0();
   input += synapse0x20bef70();
   input += synapse0x20befb0();
   input += synapse0x20beff0();
   input += synapse0x20bf030();
   input += synapse0x20bf070();
   input += synapse0x20bf0b0();
   return input;
}

double NNfunction-NG_1::neuron0x20be720() {
   double input = input0x20be720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20bf0f0() {
   double input = 0.952403;
   input += synapse0x20a7b60();
   input += synapse0x20a7ba0();
   input += synapse0x20a7be0();
   input += synapse0x20a7c20();
   input += synapse0x20a7c60();
   input += synapse0x20a7ca0();
   input += synapse0x20a7ce0();
   input += synapse0x20a7d20();
   input += synapse0x20bf840();
   input += synapse0x20bf880();
   input += synapse0x20bf8c0();
   input += synapse0x20bf900();
   input += synapse0x20bf940();
   input += synapse0x20bf980();
   input += synapse0x20bf9c0();
   input += synapse0x20bfa00();
   input += synapse0x20bf280();
   input += synapse0x20bf2c0();
   input += synapse0x20bfb50();
   input += synapse0x20bfb90();
   input += synapse0x20bfbd0();
   input += synapse0x20bfc10();
   input += synapse0x20bfc50();
   input += synapse0x20bfc90();
   return input;
}

double NNfunction-NG_1::neuron0x20bf0f0() {
   double input = input0x20bf0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20bfcd0() {
   double input = -2.44664;
   input += synapse0x20c0010();
   input += synapse0x20c0050();
   input += synapse0x20c0090();
   input += synapse0x20c00d0();
   input += synapse0x20c0110();
   input += synapse0x20c0150();
   input += synapse0x20c0190();
   input += synapse0x20c01d0();
   input += synapse0x20c0210();
   input += synapse0x20c0250();
   input += synapse0x20c0290();
   input += synapse0x20c02d0();
   input += synapse0x20c0310();
   input += synapse0x20c0350();
   input += synapse0x20c0390();
   input += synapse0x20c03d0();
   input += synapse0x20bfe60();
   input += synapse0x20bfea0();
   input += synapse0x20c0520();
   input += synapse0x20c0560();
   input += synapse0x20c05a0();
   input += synapse0x20c05e0();
   input += synapse0x20c0620();
   input += synapse0x20c0660();
   return input;
}

double NNfunction-NG_1::neuron0x20bfcd0() {
   double input = input0x20bfcd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20c06a0() {
   double input = -2.70547;
   input += synapse0x20c09e0();
   input += synapse0x20c0a20();
   input += synapse0x20c0a60();
   input += synapse0x20c0aa0();
   input += synapse0x20c0ae0();
   input += synapse0x20c0b20();
   input += synapse0x20c0b60();
   input += synapse0x20c0ba0();
   input += synapse0x20c0be0();
   input += synapse0x20c0c20();
   input += synapse0x20c0c60();
   input += synapse0x20c0ca0();
   input += synapse0x20c0ce0();
   input += synapse0x20c0d20();
   input += synapse0x20c0d60();
   input += synapse0x20c0da0();
   input += synapse0x20c0830();
   input += synapse0x20c0870();
   input += synapse0x20b13a0();
   input += synapse0x20b13e0();
   input += synapse0x20b1420();
   input += synapse0x20b1460();
   input += synapse0x20b14a0();
   input += synapse0x20b14e0();
   return input;
}

double NNfunction-NG_1::neuron0x20c06a0() {
   double input = input0x20c06a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20b1520() {
   double input = 2.95504;
   input += synapse0x20b1860();
   input += synapse0x20b18a0();
   input += synapse0x20b18e0();
   input += synapse0x20b1920();
   input += synapse0x20b1960();
   input += synapse0x20b19a0();
   input += synapse0x20b19e0();
   input += synapse0x20b1a20();
   input += synapse0x20b1a60();
   input += synapse0x20b1aa0();
   input += synapse0x20b1ae0();
   input += synapse0x20b1b20();
   input += synapse0x20b1b60();
   input += synapse0x20b1ba0();
   input += synapse0x20b1be0();
   input += synapse0x20b1c20();
   input += synapse0x20b16b0();
   input += synapse0x20b16f0();
   input += synapse0x20b1d70();
   input += synapse0x20b1db0();
   input += synapse0x20b1df0();
   input += synapse0x20b1e30();
   input += synapse0x20b1e70();
   input += synapse0x20b1eb0();
   return input;
}

double NNfunction-NG_1::neuron0x20b1520() {
   double input = input0x20b1520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20b1ef0() {
   double input = 1.71292;
   input += synapse0x20b2230();
   input += synapse0x20b2270();
   input += synapse0x20b22b0();
   input += synapse0x20b22f0();
   input += synapse0x20b2330();
   input += synapse0x20b2370();
   input += synapse0x20b23b0();
   input += synapse0x20b23f0();
   input += synapse0x20b2430();
   input += synapse0x20b2470();
   input += synapse0x20b24b0();
   input += synapse0x20b24f0();
   input += synapse0x20b2530();
   input += synapse0x20b2570();
   input += synapse0x20b25b0();
   input += synapse0x20b25f0();
   input += synapse0x20b2080();
   input += synapse0x20b20c0();
   input += synapse0x20b2740();
   input += synapse0x20b2780();
   input += synapse0x20b27c0();
   input += synapse0x20b2800();
   input += synapse0x20b2840();
   input += synapse0x20b2880();
   return input;
}

double NNfunction-NG_1::neuron0x20b1ef0() {
   double input = input0x20b1ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20b28c0() {
   double input = -2.93434;
   input += synapse0x20b2c00();
   input += synapse0x20b2c40();
   input += synapse0x20b2c80();
   input += synapse0x20b2cc0();
   input += synapse0x20b2d00();
   input += synapse0x20b2d40();
   input += synapse0x20b2d80();
   input += synapse0x20b2dc0();
   input += synapse0x20b2e00();
   input += synapse0x20b2e40();
   input += synapse0x20b2e80();
   input += synapse0x20b2ec0();
   input += synapse0x20b2f00();
   input += synapse0x20b2f40();
   input += synapse0x20b2f80();
   input += synapse0x20b2fc0();
   input += synapse0x20b2a50();
   input += synapse0x20b2a90();
   input += synapse0x20b3110();
   input += synapse0x20b3150();
   input += synapse0x20b3190();
   input += synapse0x20b31d0();
   input += synapse0x20b3210();
   input += synapse0x20b3250();
   return input;
}

double NNfunction-NG_1::neuron0x20b28c0() {
   double input = input0x20b28c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20c4f00() {
   double input = -3.41224;
   input += synapse0x20c5120();
   input += synapse0x20c5160();
   input += synapse0x20c51a0();
   input += synapse0x20c51e0();
   input += synapse0x20c5220();
   input += synapse0x20c5260();
   input += synapse0x20c52a0();
   input += synapse0x20c52e0();
   input += synapse0x20c5320();
   input += synapse0x20c5360();
   input += synapse0x20c53a0();
   input += synapse0x20c53e0();
   input += synapse0x20c5420();
   input += synapse0x20c5460();
   input += synapse0x20c54a0();
   input += synapse0x20c54e0();
   input += synapse0x20b3290();
   input += synapse0x20b32d0();
   input += synapse0x20c5630();
   input += synapse0x20c5670();
   input += synapse0x20c56b0();
   input += synapse0x20c56f0();
   input += synapse0x20c5730();
   input += synapse0x20c5770();
   return input;
}

double NNfunction-NG_1::neuron0x20c4f00() {
   double input = input0x20c4f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20c57b0() {
   double input = 0.493479;
   input += synapse0x20c5af0();
   input += synapse0x20c5b30();
   input += synapse0x20c5b70();
   input += synapse0x20c5bb0();
   input += synapse0x20c5bf0();
   input += synapse0x20c5c30();
   input += synapse0x20c5c70();
   input += synapse0x20c5cb0();
   input += synapse0x20c5cf0();
   input += synapse0x20c5d30();
   input += synapse0x20c5d70();
   input += synapse0x20c5db0();
   input += synapse0x20c5df0();
   input += synapse0x20c5e30();
   input += synapse0x20c5e70();
   input += synapse0x20c5eb0();
   input += synapse0x20c5940();
   input += synapse0x20c5980();
   input += synapse0x20c6000();
   input += synapse0x20c6040();
   input += synapse0x20c6080();
   input += synapse0x20c60c0();
   input += synapse0x20c6100();
   input += synapse0x20c6140();
   return input;
}

double NNfunction-NG_1::neuron0x20c57b0() {
   double input = input0x20c57b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20c6180() {
   double input = 7.63938;
   input += synapse0x20c64c0();
   input += synapse0x20c6500();
   input += synapse0x20c6540();
   input += synapse0x20c6580();
   input += synapse0x20c65c0();
   input += synapse0x20c6600();
   input += synapse0x20c6640();
   input += synapse0x20c6680();
   input += synapse0x20c66c0();
   input += synapse0x20c6700();
   input += synapse0x20c6740();
   input += synapse0x20c6780();
   input += synapse0x20c67c0();
   input += synapse0x20c6800();
   input += synapse0x20c6840();
   input += synapse0x20c6880();
   input += synapse0x20c6310();
   input += synapse0x20c6350();
   input += synapse0x20c69d0();
   input += synapse0x20c6a10();
   input += synapse0x20c6a50();
   input += synapse0x20c6a90();
   input += synapse0x20c6ad0();
   input += synapse0x20c6b10();
   return input;
}

double NNfunction-NG_1::neuron0x20c6180() {
   double input = input0x20c6180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20c6b50() {
   double input = 1.51864;
   input += synapse0x20c6e90();
   input += synapse0x20c6ed0();
   input += synapse0x20c6f10();
   input += synapse0x20c6f50();
   input += synapse0x20c6f90();
   input += synapse0x20c6fd0();
   input += synapse0x20c7010();
   input += synapse0x20c7050();
   input += synapse0x20c7090();
   input += synapse0x20c70d0();
   input += synapse0x20c7110();
   input += synapse0x20c7150();
   input += synapse0x20c7190();
   input += synapse0x20c71d0();
   input += synapse0x20c7210();
   input += synapse0x20c7250();
   input += synapse0x20c6ce0();
   input += synapse0x20c6d20();
   input += synapse0x20c73a0();
   input += synapse0x20c73e0();
   input += synapse0x20c7420();
   input += synapse0x20c7460();
   input += synapse0x20c74a0();
   input += synapse0x20c74e0();
   return input;
}

double NNfunction-NG_1::neuron0x20c6b50() {
   double input = input0x20c6b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20cdd50() {
   double input = 1.23865;
   input += synapse0x1e5d860();
   input += synapse0x1e5d8a0();
   input += synapse0x20a4f90();
   input += synapse0x20a4fd0();
   input += synapse0x20a5960();
   input += synapse0x20a59a0();
   input += synapse0x20a6730();
   input += synapse0x20a6770();
   input += synapse0x20a7100();
   input += synapse0x20a7140();
   input += synapse0x20a7ad0();
   input += synapse0x20a7b10();
   input += synapse0x20a85b0();
   input += synapse0x20a85f0();
   input += synapse0x20a8f80();
   input += synapse0x20a8fc0();
   input += synapse0x20a6060();
   input += synapse0x20a60a0();
   input += synapse0x20aab30();
   input += synapse0x20aab70();
   input += synapse0x20ab500();
   input += synapse0x20ab540();
   input += synapse0x20abed0();
   input += synapse0x20abf10();
   input += synapse0x20ac8a0();
   input += synapse0x20ac8e0();
   input += synapse0x20a0a40();
   input += synapse0x20a0a80();
   input += synapse0x20ae990();
   input += synapse0x20ae9d0();
   input += synapse0x20af360();
   input += synapse0x20af3a0();
   input += synapse0x20afd30();
   input += synapse0x20afd70();
   input += synapse0x20b0700();
   input += synapse0x20b0740();
   input += synapse0x20b10d0();
   input += synapse0x20b1110();
   input += synapse0x20a9c20();
   input += synapse0x20a9c60();
   input += synapse0x20b34d0();
   input += synapse0x20b3510();
   input += synapse0x20b3e60();
   input += synapse0x20b3ea0();
   input += synapse0x20b4830();
   input += synapse0x20b4870();
   input += synapse0x20b5200();
   input += synapse0x20b5240();
   input += synapse0x20b5bd0();
   input += synapse0x20b5c10();
   return input;
}

double NNfunction-NG_1::neuron0x20cdd50() {
   double input = input0x20cdd50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20ce0f0() {
   double input = -0.639485;
   input += synapse0x20b8310();
   input += synapse0x20b8350();
   input += synapse0x20ad8d0();
   input += synapse0x20ad910();
   input += synapse0x20baef0();
   input += synapse0x20baf30();
   input += synapse0x20bb8c0();
   input += synapse0x20bb900();
   input += synapse0x20bc290();
   input += synapse0x20bc2d0();
   input += synapse0x20bcc60();
   input += synapse0x20bcca0();
   input += synapse0x20bd630();
   input += synapse0x20bd670();
   input += synapse0x20be000();
   input += synapse0x20be040();
   input += synapse0x20be9d0();
   input += synapse0x20bea10();
   input += synapse0x20bf3a0();
   input += synapse0x20bf3e0();
   input += synapse0x20bff80();
   input += synapse0x20bffc0();
   input += synapse0x20c0950();
   input += synapse0x20c0990();
   input += synapse0x20b17d0();
   input += synapse0x20b1810();
   input += synapse0x20b21a0();
   input += synapse0x20b21e0();
   input += synapse0x20b2b70();
   input += synapse0x20b2bb0();
   input += synapse0x20c5090();
   input += synapse0x20c50d0();
   input += synapse0x20c5a60();
   input += synapse0x20c5aa0();
   input += synapse0x20c6430();
   input += synapse0x20c6470();
   input += synapse0x20c6e00();
   input += synapse0x20c6e40();
   input += synapse0x20a2cf0();
   input += synapse0x20a2d30();
   input += synapse0x20b65a0();
   input += synapse0x20b65e0();
   input += synapse0x20c7520();
   input += synapse0x20c7560();
   input += synapse0x20c75a0();
   input += synapse0x20c75e0();
   input += synapse0x20ce490();
   input += synapse0x20ce4d0();
   input += synapse0x20ce510();
   input += synapse0x20ce550();
   return input;
}

double NNfunction-NG_1::neuron0x20ce0f0() {
   double input = input0x20ce0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20ce590() {
   double input = -0.124207;
   input += synapse0x20ce8d0();
   input += synapse0x20ce910();
   input += synapse0x20ce950();
   input += synapse0x20ce990();
   input += synapse0x20ce9d0();
   input += synapse0x20cea10();
   input += synapse0x20cea50();
   input += synapse0x20cea90();
   input += synapse0x20cead0();
   input += synapse0x20ceb10();
   input += synapse0x20ceb50();
   input += synapse0x20ceb90();
   input += synapse0x20cebd0();
   input += synapse0x20cec10();
   input += synapse0x20cec50();
   input += synapse0x20cec90();
   input += synapse0x20ce720();
   input += synapse0x20ce760();
   input += synapse0x20cede0();
   input += synapse0x20cee20();
   input += synapse0x20cee60();
   input += synapse0x20ceea0();
   input += synapse0x20ceee0();
   input += synapse0x20cef20();
   input += synapse0x20cef60();
   input += synapse0x20cefa0();
   input += synapse0x20cefe0();
   input += synapse0x20cf020();
   input += synapse0x20cf060();
   input += synapse0x20cf0a0();
   input += synapse0x20cf0e0();
   input += synapse0x20cf120();
   input += synapse0x20cecd0();
   input += synapse0x20ced10();
   input += synapse0x20ced50();
   input += synapse0x20ced90();
   input += synapse0x20cf370();
   input += synapse0x20cf3b0();
   input += synapse0x20cf3f0();
   input += synapse0x20cf430();
   input += synapse0x20cf470();
   input += synapse0x20cf4b0();
   input += synapse0x20cf4f0();
   input += synapse0x20cf530();
   input += synapse0x20cf570();
   input += synapse0x20cf5b0();
   input += synapse0x20cf5f0();
   input += synapse0x20cf630();
   input += synapse0x20cf670();
   input += synapse0x20cf6b0();
   return input;
}

double NNfunction-NG_1::neuron0x20ce590() {
   double input = input0x20ce590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20cf6f0() {
   double input = -0.132342;
   input += synapse0x20cfa30();
   input += synapse0x20cfa70();
   input += synapse0x20cfab0();
   input += synapse0x20cfaf0();
   input += synapse0x20cfb30();
   input += synapse0x20cfb70();
   input += synapse0x20cfbb0();
   input += synapse0x20cfbf0();
   input += synapse0x20cfc30();
   input += synapse0x20cfc70();
   input += synapse0x20cfcb0();
   input += synapse0x20cfcf0();
   input += synapse0x20cfd30();
   input += synapse0x20cfd70();
   input += synapse0x20cfdb0();
   input += synapse0x20cfdf0();
   input += synapse0x20cf880();
   input += synapse0x20cf8c0();
   input += synapse0x20cff40();
   input += synapse0x20cff80();
   input += synapse0x20cffc0();
   input += synapse0x20d0000();
   input += synapse0x20d0040();
   input += synapse0x20d0080();
   input += synapse0x20d00c0();
   input += synapse0x20d0100();
   input += synapse0x20d0140();
   input += synapse0x20d0180();
   input += synapse0x20d01c0();
   input += synapse0x20d0200();
   input += synapse0x20d0240();
   input += synapse0x20d0280();
   input += synapse0x20cfe30();
   input += synapse0x20cfe70();
   input += synapse0x20cfeb0();
   input += synapse0x20cfef0();
   input += synapse0x20d04d0();
   input += synapse0x20d0510();
   input += synapse0x20d0550();
   input += synapse0x20d0590();
   input += synapse0x20d05d0();
   input += synapse0x20d0610();
   input += synapse0x20d0650();
   input += synapse0x20d0690();
   input += synapse0x20d06d0();
   input += synapse0x20d0710();
   input += synapse0x20d0750();
   input += synapse0x20d0790();
   input += synapse0x20d07d0();
   input += synapse0x20d0810();
   return input;
}

double NNfunction-NG_1::neuron0x20cf6f0() {
   double input = input0x20cf6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20d0850() {
   double input = 0.287724;
   input += synapse0x20d0b90();
   input += synapse0x20d0bd0();
   input += synapse0x20d0c10();
   input += synapse0x20d0c50();
   input += synapse0x20d0c90();
   input += synapse0x20d0cd0();
   input += synapse0x20d0d10();
   input += synapse0x20d0d50();
   input += synapse0x20d0d90();
   input += synapse0x20d0dd0();
   input += synapse0x20d0e10();
   input += synapse0x20d0e50();
   input += synapse0x20d0e90();
   input += synapse0x20d0ed0();
   input += synapse0x20d0f10();
   input += synapse0x20d0f50();
   input += synapse0x20d09e0();
   input += synapse0x20d0a20();
   input += synapse0x20d10a0();
   input += synapse0x20d10e0();
   input += synapse0x20d1120();
   input += synapse0x20d1160();
   input += synapse0x20d11a0();
   input += synapse0x20d11e0();
   input += synapse0x20d1220();
   input += synapse0x20d1260();
   input += synapse0x20d12a0();
   input += synapse0x20d12e0();
   input += synapse0x20d1320();
   input += synapse0x20d1360();
   input += synapse0x20d13a0();
   input += synapse0x20d13e0();
   input += synapse0x20d0f90();
   input += synapse0x20d0fd0();
   input += synapse0x20d1010();
   input += synapse0x20d1050();
   input += synapse0x20d1630();
   input += synapse0x20d1670();
   input += synapse0x20d16b0();
   input += synapse0x20d16f0();
   input += synapse0x20d1730();
   input += synapse0x20d1770();
   input += synapse0x20d17b0();
   input += synapse0x20d17f0();
   input += synapse0x20d1830();
   input += synapse0x20d1870();
   input += synapse0x20d18b0();
   input += synapse0x20d18f0();
   input += synapse0x20d1930();
   input += synapse0x20d1970();
   return input;
}

double NNfunction-NG_1::neuron0x20d0850() {
   double input = input0x20d0850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NG_1::input0x20d19b0() {
   double input = -1.89855;
   input += synapse0x20d1bd0();
   input += synapse0x20d1c10();
   input += synapse0x20d1c50();
   input += synapse0x20d1c90();
   input += synapse0x20d1cd0();
   return input;
}

double NNfunction-NG_1::neuron0x20d19b0() {
   double input = input0x20d19b0();
   return (input * 1)+0;
}

double NNfunction-NG_1::synapse0x209d960() {
   return (neuron0x209daa0()*0.00212087);
}

double NNfunction-NG_1::synapse0x209d9a0() {
   return (neuron0x209dde0()*-0.0257203);
}

double NNfunction-NG_1::synapse0x20a2d80() {
   return (neuron0x209e120()*0.0740957);
}

double NNfunction-NG_1::synapse0x20a2dc0() {
   return (neuron0x209e460()*-2.69208);
}

double NNfunction-NG_1::synapse0x20a2e00() {
   return (neuron0x209e7a0()*0.004411);
}

double NNfunction-NG_1::synapse0x20a2e40() {
   return (neuron0x209eae0()*-0.00871395);
}

double NNfunction-NG_1::synapse0x20a2e80() {
   return (neuron0x209ee20()*-0.00301311);
}

double NNfunction-NG_1::synapse0x20a2ec0() {
   return (neuron0x209f160()*0.000710898);
}

double NNfunction-NG_1::synapse0x20a2f00() {
   return (neuron0x209f4a0()*-0.00843197);
}

double NNfunction-NG_1::synapse0x20a2f40() {
   return (neuron0x209f7e0()*-0.0093021);
}

double NNfunction-NG_1::synapse0x20a2f80() {
   return (neuron0x209fb20()*-0.0108239);
}

double NNfunction-NG_1::synapse0x20a2fc0() {
   return (neuron0x209fe60()*-0.0434596);
}

double NNfunction-NG_1::synapse0x20a3000() {
   return (neuron0x20a01a0()*-0.0177245);
}

double NNfunction-NG_1::synapse0x20a3040() {
   return (neuron0x20a04e0()*-0.00689835);
}

double NNfunction-NG_1::synapse0x20a3080() {
   return (neuron0x20a0820()*-0.0715843);
}

double NNfunction-NG_1::synapse0x20a30c0() {
   return (neuron0x20a0b60()*-0.0248243);
}

double NNfunction-NG_1::synapse0x209d8d0() {
   return (neuron0x20a0ea0()*-0.0191181);
}

double NNfunction-NG_1::synapse0x209d910() {
   return (neuron0x20a1400()*-0.0054578);
}

double NNfunction-NG_1::synapse0x1e4f440() {
   return (neuron0x20a1620()*-0.0115188);
}

double NNfunction-NG_1::synapse0x1e4f480() {
   return (neuron0x20a1960()*0.00402196);
}

double NNfunction-NG_1::synapse0x20a3320() {
   return (neuron0x20a1ca0()*0.00911039);
}

double NNfunction-NG_1::synapse0x20a3360() {
   return (neuron0x20a1fe0()*0.000243962);
}

double NNfunction-NG_1::synapse0x20a33a0() {
   return (neuron0x20a2320()*0.00342963);
}

double NNfunction-NG_1::synapse0x20a33e0() {
   return (neuron0x20a2660()*0.00263147);
}

double NNfunction-NG_1::synapse0x20a3760() {
   return (neuron0x209daa0()*0.0588808);
}

double NNfunction-NG_1::synapse0x20a37a0() {
   return (neuron0x209dde0()*-12.0004);
}

double NNfunction-NG_1::synapse0x20a37e0() {
   return (neuron0x209e120()*-3.07459);
}

double NNfunction-NG_1::synapse0x20a3820() {
   return (neuron0x209e460()*-0.00380408);
}

double NNfunction-NG_1::synapse0x20a3860() {
   return (neuron0x209e7a0()*-0.0250158);
}

double NNfunction-NG_1::synapse0x20a38a0() {
   return (neuron0x209eae0()*-0.00787282);
}

double NNfunction-NG_1::synapse0x20a38e0() {
   return (neuron0x209ee20()*0.00142945);
}

double NNfunction-NG_1::synapse0x20a3920() {
   return (neuron0x209f160()*0.0044051);
}

double NNfunction-NG_1::synapse0x20a3960() {
   return (neuron0x209f4a0()*0.0162528);
}

double NNfunction-NG_1::synapse0x20a3210() {
   return (neuron0x209f7e0()*-0.00036746);
}

double NNfunction-NG_1::synapse0x20a3250() {
   return (neuron0x209fb20()*0.0271163);
}

double NNfunction-NG_1::synapse0x20a3290() {
   return (neuron0x209fe60()*-0.0820849);
}

double NNfunction-NG_1::synapse0x20a32d0() {
   return (neuron0x20a01a0()*-0.0175619);
}

double NNfunction-NG_1::synapse0x20a3bb0() {
   return (neuron0x20a04e0()*-0.0364575);
}

double NNfunction-NG_1::synapse0x20a3bf0() {
   return (neuron0x20a0820()*-0.0300287);
}

double NNfunction-NG_1::synapse0x20a3c30() {
   return (neuron0x20a0b60()*-0.0352273);
}

double NNfunction-NG_1::synapse0x20a35b0() {
   return (neuron0x20a0ea0()*0.0100871);
}

double NNfunction-NG_1::synapse0x20a35f0() {
   return (neuron0x20a1400()*0.0115719);
}

double NNfunction-NG_1::synapse0x20a3d80() {
   return (neuron0x20a1620()*0.00385314);
}

double NNfunction-NG_1::synapse0x20a3dc0() {
   return (neuron0x20a1960()*0.0438157);
}

double NNfunction-NG_1::synapse0x20a3e00() {
   return (neuron0x20a1ca0()*-0.0406801);
}

double NNfunction-NG_1::synapse0x20a3e40() {
   return (neuron0x20a1fe0()*0.0352476);
}

double NNfunction-NG_1::synapse0x20a3e80() {
   return (neuron0x20a2320()*0.0374216);
}

double NNfunction-NG_1::synapse0x20a3ec0() {
   return (neuron0x20a2660()*0.0143841);
}

double NNfunction-NG_1::synapse0x20a4240() {
   return (neuron0x209daa0()*0.030528);
}

double NNfunction-NG_1::synapse0x20a4280() {
   return (neuron0x209dde0()*0.0243892);
}

double NNfunction-NG_1::synapse0x20a42c0() {
   return (neuron0x209e120()*1.31367);
}

double NNfunction-NG_1::synapse0x20a4300() {
   return (neuron0x209e460()*-0.00840839);
}

double NNfunction-NG_1::synapse0x20a4340() {
   return (neuron0x209e7a0()*0.0199309);
}

double NNfunction-NG_1::synapse0x20a4380() {
   return (neuron0x209eae0()*-0.0271861);
}

double NNfunction-NG_1::synapse0x20a43c0() {
   return (neuron0x209ee20()*-0.025714);
}

double NNfunction-NG_1::synapse0x20a4400() {
   return (neuron0x209f160()*0.0540333);
}

double NNfunction-NG_1::synapse0x20a4440() {
   return (neuron0x209f4a0()*0.0341305);
}

double NNfunction-NG_1::synapse0x20a4480() {
   return (neuron0x209f7e0()*-0.00797333);
}

double NNfunction-NG_1::synapse0x20a44c0() {
   return (neuron0x209fb20()*0.00530617);
}

double NNfunction-NG_1::synapse0x20a4500() {
   return (neuron0x209fe60()*-1.1076);
}

double NNfunction-NG_1::synapse0x20a4540() {
   return (neuron0x20a01a0()*1.62082);
}

double NNfunction-NG_1::synapse0x20a4580() {
   return (neuron0x20a04e0()*0.00194448);
}

double NNfunction-NG_1::synapse0x20a45c0() {
   return (neuron0x20a0820()*0.206981);
}

double NNfunction-NG_1::synapse0x20a4600() {
   return (neuron0x20a0b60()*-0.0177492);
}

double NNfunction-NG_1::synapse0x20a4090() {
   return (neuron0x20a0ea0()*0.0389135);
}

double NNfunction-NG_1::synapse0x20a40d0() {
   return (neuron0x20a1400()*0.0335078);
}

double NNfunction-NG_1::synapse0x1e4f810() {
   return (neuron0x20a1620()*-0.0303732);
}

double NNfunction-NG_1::synapse0x1e5d050() {
   return (neuron0x20a1960()*0.0448285);
}

double NNfunction-NG_1::synapse0x1e5d090() {
   return (neuron0x20a1ca0()*-0.0568552);
}

double NNfunction-NG_1::synapse0x208cb30() {
   return (neuron0x20a1fe0()*-0.0165758);
}

double NNfunction-NG_1::synapse0x208cb70() {
   return (neuron0x20a2320()*0.0176242);
}

double NNfunction-NG_1::synapse0x208cbb0() {
   return (neuron0x20a2660()*-0.0185494);
}

double NNfunction-NG_1::synapse0x1e5d8f0() {
   return (neuron0x209daa0()*0.0498362);
}

double NNfunction-NG_1::synapse0x20a3b30() {
   return (neuron0x209dde0()*0.432662);
}

double NNfunction-NG_1::synapse0x20a3b70() {
   return (neuron0x209e120()*0.245665);
}

double NNfunction-NG_1::synapse0x20a4750() {
   return (neuron0x209e460()*0.101402);
}

double NNfunction-NG_1::synapse0x20a4790() {
   return (neuron0x209e7a0()*0.0397077);
}

double NNfunction-NG_1::synapse0x20a47d0() {
   return (neuron0x209eae0()*0.0158907);
}

double NNfunction-NG_1::synapse0x20a4810() {
   return (neuron0x209ee20()*0.0109019);
}

double NNfunction-NG_1::synapse0x20a4850() {
   return (neuron0x209f160()*-0.114261);
}

double NNfunction-NG_1::synapse0x20a4890() {
   return (neuron0x209f4a0()*0.102028);
}

double NNfunction-NG_1::synapse0x20a48d0() {
   return (neuron0x209f7e0()*0.023311);
}

double NNfunction-NG_1::synapse0x20a4910() {
   return (neuron0x209fb20()*0.0556715);
}

double NNfunction-NG_1::synapse0x20a4950() {
   return (neuron0x209fe60()*1.81947);
}

double NNfunction-NG_1::synapse0x20a4990() {
   return (neuron0x20a01a0()*-0.398756);
}

double NNfunction-NG_1::synapse0x20a49d0() {
   return (neuron0x20a04e0()*0.0301021);
}

double NNfunction-NG_1::synapse0x20a4a10() {
   return (neuron0x20a0820()*0.944663);
}

double NNfunction-NG_1::synapse0x20a4a50() {
   return (neuron0x20a0b60()*0.0772503);
}

double NNfunction-NG_1::synapse0x209d9e0() {
   return (neuron0x20a0ea0()*0.071173);
}

double NNfunction-NG_1::synapse0x209da20() {
   return (neuron0x20a1400()*0.447057);
}

double NNfunction-NG_1::synapse0x209da60() {
   return (neuron0x20a1620()*0.0269891);
}

double NNfunction-NG_1::synapse0x20a4ba0() {
   return (neuron0x20a1960()*-0.0144123);
}

double NNfunction-NG_1::synapse0x20a4be0() {
   return (neuron0x20a1ca0()*0.0122084);
}

double NNfunction-NG_1::synapse0x20a4c20() {
   return (neuron0x20a1fe0()*-0.0277864);
}

double NNfunction-NG_1::synapse0x20a4c60() {
   return (neuron0x20a2320()*0.0506522);
}

double NNfunction-NG_1::synapse0x20a4ca0() {
   return (neuron0x20a2660()*0.0436026);
}

double NNfunction-NG_1::synapse0x20a5020() {
   return (neuron0x209daa0()*0.013677);
}

double NNfunction-NG_1::synapse0x20a5060() {
   return (neuron0x209dde0()*0.0079044);
}

double NNfunction-NG_1::synapse0x20a50a0() {
   return (neuron0x209e120()*0.0135001);
}

double NNfunction-NG_1::synapse0x20a50e0() {
   return (neuron0x209e460()*16.2351);
}

double NNfunction-NG_1::synapse0x20a5120() {
   return (neuron0x209e7a0()*-0.00471945);
}

double NNfunction-NG_1::synapse0x20a5160() {
   return (neuron0x209eae0()*0.0114711);
}

double NNfunction-NG_1::synapse0x20a51a0() {
   return (neuron0x209ee20()*-0.00288488);
}

double NNfunction-NG_1::synapse0x20a51e0() {
   return (neuron0x209f160()*-0.00784778);
}

double NNfunction-NG_1::synapse0x20a5220() {
   return (neuron0x209f4a0()*-0.0253935);
}

double NNfunction-NG_1::synapse0x20a5260() {
   return (neuron0x209f7e0()*0.0182063);
}

double NNfunction-NG_1::synapse0x20a52a0() {
   return (neuron0x209fb20()*-0.0281771);
}

double NNfunction-NG_1::synapse0x20a52e0() {
   return (neuron0x209fe60()*0.101582);
}

double NNfunction-NG_1::synapse0x20a5320() {
   return (neuron0x20a01a0()*0.0107272);
}

double NNfunction-NG_1::synapse0x20a5360() {
   return (neuron0x20a04e0()*-0.0343774);
}

double NNfunction-NG_1::synapse0x20a53a0() {
   return (neuron0x20a0820()*0.0639703);
}

double NNfunction-NG_1::synapse0x20a53e0() {
   return (neuron0x20a0b60()*0.03516);
}

double NNfunction-NG_1::synapse0x20a4e70() {
   return (neuron0x20a0ea0()*0.0368285);
}

double NNfunction-NG_1::synapse0x20a4eb0() {
   return (neuron0x20a1400()*0.000539217);
}

double NNfunction-NG_1::synapse0x20a5530() {
   return (neuron0x20a1620()*0.00939285);
}

double NNfunction-NG_1::synapse0x20a5570() {
   return (neuron0x20a1960()*-0.0209414);
}

double NNfunction-NG_1::synapse0x20a55b0() {
   return (neuron0x20a1ca0()*-0.0247057);
}

double NNfunction-NG_1::synapse0x20a55f0() {
   return (neuron0x20a1fe0()*-0.0206207);
}

double NNfunction-NG_1::synapse0x20a5630() {
   return (neuron0x20a2320()*0.0227204);
}

double NNfunction-NG_1::synapse0x20a5670() {
   return (neuron0x20a2660()*0.0644197);
}

double NNfunction-NG_1::synapse0x20a59f0() {
   return (neuron0x209daa0()*-0.100428);
}

double NNfunction-NG_1::synapse0x20a5a30() {
   return (neuron0x209dde0()*-0.0375814);
}

double NNfunction-NG_1::synapse0x20a5a70() {
   return (neuron0x209e120()*-0.0834312);
}

double NNfunction-NG_1::synapse0x20a5ab0() {
   return (neuron0x209e460()*0.0116911);
}

double NNfunction-NG_1::synapse0x20a5af0() {
   return (neuron0x209e7a0()*0.00614491);
}

double NNfunction-NG_1::synapse0x20a5b30() {
   return (neuron0x209eae0()*0.00913344);
}

double NNfunction-NG_1::synapse0x20a5b70() {
   return (neuron0x209ee20()*0.0409914);
}

double NNfunction-NG_1::synapse0x20a5bb0() {
   return (neuron0x209f160()*0.0387936);
}

double NNfunction-NG_1::synapse0x20a5bf0() {
   return (neuron0x209f4a0()*0.0216457);
}

double NNfunction-NG_1::synapse0x1e5d3c0() {
   return (neuron0x209f7e0()*-0.050274);
}

double NNfunction-NG_1::synapse0x1e5d400() {
   return (neuron0x209fb20()*-0.0315781);
}

double NNfunction-NG_1::synapse0x1e5d440() {
   return (neuron0x209fe60()*-0.545239);
}

double NNfunction-NG_1::synapse0x1e5d480() {
   return (neuron0x20a01a0()*-0.0853035);
}

double NNfunction-NG_1::synapse0x1e5d4c0() {
   return (neuron0x20a04e0()*-0.0372783);
}

double NNfunction-NG_1::synapse0x1e5d500() {
   return (neuron0x20a0820()*0.168355);
}

double NNfunction-NG_1::synapse0x1e5d540() {
   return (neuron0x20a0b60()*0.0153337);
}

double NNfunction-NG_1::synapse0x20a5840() {
   return (neuron0x20a0ea0()*-0.0359252);
}

double NNfunction-NG_1::synapse0x20a5880() {
   return (neuron0x20a1400()*0.0452526);
}

double NNfunction-NG_1::synapse0x1e5d690() {
   return (neuron0x20a1620()*-0.0780102);
}

double NNfunction-NG_1::synapse0x1e5d6d0() {
   return (neuron0x20a1960()*-0.00509572);
}

double NNfunction-NG_1::synapse0x1e5d710() {
   return (neuron0x20a1ca0()*-0.0316397);
}

double NNfunction-NG_1::synapse0x1e5d750() {
   return (neuron0x20a1fe0()*0.00227429);
}

double NNfunction-NG_1::synapse0x1e5d790() {
   return (neuron0x20a2320()*-0.0442175);
}

double NNfunction-NG_1::synapse0x20a6440() {
   return (neuron0x20a2660()*-2.52839);
}

double NNfunction-NG_1::synapse0x20a67c0() {
   return (neuron0x209daa0()*-0.0103498);
}

double NNfunction-NG_1::synapse0x20a6800() {
   return (neuron0x209dde0()*0.0300178);
}

double NNfunction-NG_1::synapse0x20a6840() {
   return (neuron0x209e120()*-1.97211);
}

double NNfunction-NG_1::synapse0x20a6880() {
   return (neuron0x209e460()*2.04368);
}

double NNfunction-NG_1::synapse0x20a68c0() {
   return (neuron0x209e7a0()*0.0303529);
}

double NNfunction-NG_1::synapse0x20a6900() {
   return (neuron0x209eae0()*0.0294361);
}

double NNfunction-NG_1::synapse0x20a6940() {
   return (neuron0x209ee20()*0.00776291);
}

double NNfunction-NG_1::synapse0x20a6980() {
   return (neuron0x209f160()*0.0226509);
}

double NNfunction-NG_1::synapse0x20a69c0() {
   return (neuron0x209f4a0()*-0.0284912);
}

double NNfunction-NG_1::synapse0x20a6a00() {
   return (neuron0x209f7e0()*0.084112);
}

double NNfunction-NG_1::synapse0x20a6a40() {
   return (neuron0x209fb20()*-0.0828566);
}

double NNfunction-NG_1::synapse0x20a6a80() {
   return (neuron0x209fe60()*0.309949);
}

double NNfunction-NG_1::synapse0x20a6ac0() {
   return (neuron0x20a01a0()*-0.00597557);
}

double NNfunction-NG_1::synapse0x20a6b00() {
   return (neuron0x20a04e0()*0.0163141);
}

double NNfunction-NG_1::synapse0x20a6b40() {
   return (neuron0x20a0820()*-0.103008);
}

double NNfunction-NG_1::synapse0x20a6b80() {
   return (neuron0x20a0b60()*0.115313);
}

double NNfunction-NG_1::synapse0x20a6610() {
   return (neuron0x20a0ea0()*0.0661827);
}

double NNfunction-NG_1::synapse0x20a6650() {
   return (neuron0x20a1400()*0.0274534);
}

double NNfunction-NG_1::synapse0x20a6cd0() {
   return (neuron0x20a1620()*-0.0504843);
}

double NNfunction-NG_1::synapse0x20a6d10() {
   return (neuron0x20a1960()*-0.0832193);
}

double NNfunction-NG_1::synapse0x20a6d50() {
   return (neuron0x20a1ca0()*-3.74955e-05);
}

double NNfunction-NG_1::synapse0x20a6d90() {
   return (neuron0x20a1fe0()*-0.0435582);
}

double NNfunction-NG_1::synapse0x20a6dd0() {
   return (neuron0x20a2320()*-0.0181614);
}

double NNfunction-NG_1::synapse0x20a6e10() {
   return (neuron0x20a2660()*0.068247);
}

double NNfunction-NG_1::synapse0x20a7190() {
   return (neuron0x209daa0()*-0.101026);
}

double NNfunction-NG_1::synapse0x20a71d0() {
   return (neuron0x209dde0()*0.0125965);
}

double NNfunction-NG_1::synapse0x20a7210() {
   return (neuron0x209e120()*-0.00606087);
}

double NNfunction-NG_1::synapse0x20a7250() {
   return (neuron0x209e460()*-1.81914);
}

double NNfunction-NG_1::synapse0x20a7290() {
   return (neuron0x209e7a0()*0.0123959);
}

double NNfunction-NG_1::synapse0x20a72d0() {
   return (neuron0x209eae0()*0.0234006);
}

double NNfunction-NG_1::synapse0x20a7310() {
   return (neuron0x209ee20()*0.0878291);
}

double NNfunction-NG_1::synapse0x20a7350() {
   return (neuron0x209f160()*0.000711605);
}

double NNfunction-NG_1::synapse0x20a7390() {
   return (neuron0x209f4a0()*0.0277831);
}

double NNfunction-NG_1::synapse0x20a73d0() {
   return (neuron0x209f7e0()*0.0598606);
}

double NNfunction-NG_1::synapse0x20a7410() {
   return (neuron0x209fb20()*-0.00984964);
}

double NNfunction-NG_1::synapse0x20a7450() {
   return (neuron0x209fe60()*-0.0312232);
}

double NNfunction-NG_1::synapse0x20a7490() {
   return (neuron0x20a01a0()*0.169522);
}

double NNfunction-NG_1::synapse0x20a74d0() {
   return (neuron0x20a04e0()*0.0292312);
}

double NNfunction-NG_1::synapse0x20a7510() {
   return (neuron0x20a0820()*0.243265);
}

double NNfunction-NG_1::synapse0x20a7550() {
   return (neuron0x20a0b60()*0.0283317);
}

double NNfunction-NG_1::synapse0x20a6fe0() {
   return (neuron0x20a0ea0()*-0.00185673);
}

double NNfunction-NG_1::synapse0x20a7020() {
   return (neuron0x20a1400()*-0.00634469);
}

double NNfunction-NG_1::synapse0x20a76a0() {
   return (neuron0x20a1620()*0.0568183);
}

double NNfunction-NG_1::synapse0x20a76e0() {
   return (neuron0x20a1960()*-0.0289846);
}

double NNfunction-NG_1::synapse0x20a7720() {
   return (neuron0x20a1ca0()*0.0152217);
}

double NNfunction-NG_1::synapse0x20a7760() {
   return (neuron0x20a1fe0()*0.0132338);
}

double NNfunction-NG_1::synapse0x20a77a0() {
   return (neuron0x20a2320()*-0.0424114);
}

double NNfunction-NG_1::synapse0x20a77e0() {
   return (neuron0x20a2660()*0.0586139);
}

double NNfunction-NG_1::synapse0x20a12f0() {
   return (neuron0x209daa0()*0.0063801);
}

double NNfunction-NG_1::synapse0x20a1330() {
   return (neuron0x209dde0()*16.7534);
}

double NNfunction-NG_1::synapse0x20a1370() {
   return (neuron0x209e120()*-0.366307);
}

double NNfunction-NG_1::synapse0x20a13b0() {
   return (neuron0x209e460()*0.0460222);
}

double NNfunction-NG_1::synapse0x20a7d70() {
   return (neuron0x209e7a0()*-0.0153015);
}

double NNfunction-NG_1::synapse0x20a7db0() {
   return (neuron0x209eae0()*-0.00298343);
}

double NNfunction-NG_1::synapse0x20a7df0() {
   return (neuron0x209ee20()*-0.00642937);
}

double NNfunction-NG_1::synapse0x20a7e30() {
   return (neuron0x209f160()*0.00925139);
}

double NNfunction-NG_1::synapse0x20a7e70() {
   return (neuron0x209f4a0()*-0.00875695);
}

double NNfunction-NG_1::synapse0x20a7eb0() {
   return (neuron0x209f7e0()*0.00288465);
}

double NNfunction-NG_1::synapse0x20a7ef0() {
   return (neuron0x209fb20()*-0.0131011);
}

double NNfunction-NG_1::synapse0x20a7f30() {
   return (neuron0x209fe60()*-0.251786);
}

double NNfunction-NG_1::synapse0x20a7f70() {
   return (neuron0x20a01a0()*-0.0326981);
}

double NNfunction-NG_1::synapse0x20a7fb0() {
   return (neuron0x20a04e0()*-0.0317185);
}

double NNfunction-NG_1::synapse0x20a7ff0() {
   return (neuron0x20a0820()*0.127383);
}

double NNfunction-NG_1::synapse0x20a8030() {
   return (neuron0x20a0b60()*-0.000722553);
}

double NNfunction-NG_1::synapse0x20a79b0() {
   return (neuron0x20a0ea0()*-0.0430632);
}

double NNfunction-NG_1::synapse0x20a79f0() {
   return (neuron0x20a1400()*0.0391277);
}

double NNfunction-NG_1::synapse0x20a8180() {
   return (neuron0x20a1620()*0.00154212);
}

double NNfunction-NG_1::synapse0x20a81c0() {
   return (neuron0x20a1960()*-0.0111316);
}

double NNfunction-NG_1::synapse0x20a8200() {
   return (neuron0x20a1ca0()*0.0033976);
}

double NNfunction-NG_1::synapse0x20a8240() {
   return (neuron0x20a1fe0()*0.00683272);
}

double NNfunction-NG_1::synapse0x20a8280() {
   return (neuron0x20a2320()*-0.00204484);
}

double NNfunction-NG_1::synapse0x20a82c0() {
   return (neuron0x20a2660()*0.0567399);
}

double NNfunction-NG_1::synapse0x20a8640() {
   return (neuron0x209daa0()*0.0485706);
}

double NNfunction-NG_1::synapse0x20a8680() {
   return (neuron0x209dde0()*-0.0904795);
}

double NNfunction-NG_1::synapse0x20a86c0() {
   return (neuron0x209e120()*2.64737);
}

double NNfunction-NG_1::synapse0x20a8700() {
   return (neuron0x209e460()*-1.28605);
}

double NNfunction-NG_1::synapse0x20a8740() {
   return (neuron0x209e7a0()*-0.046701);
}

double NNfunction-NG_1::synapse0x20a8780() {
   return (neuron0x209eae0()*0.0628392);
}

double NNfunction-NG_1::synapse0x20a87c0() {
   return (neuron0x209ee20()*0.0304862);
}

double NNfunction-NG_1::synapse0x20a8800() {
   return (neuron0x209f160()*-0.0629748);
}

double NNfunction-NG_1::synapse0x20a8840() {
   return (neuron0x209f4a0()*0.020519);
}

double NNfunction-NG_1::synapse0x20a8880() {
   return (neuron0x209f7e0()*-0.0114646);
}

double NNfunction-NG_1::synapse0x20a88c0() {
   return (neuron0x209fb20()*0.0238529);
}

double NNfunction-NG_1::synapse0x20a8900() {
   return (neuron0x209fe60()*0.997495);
}

double NNfunction-NG_1::synapse0x20a8940() {
   return (neuron0x20a01a0()*0.513042);
}

double NNfunction-NG_1::synapse0x20a8980() {
   return (neuron0x20a04e0()*-0.0524514);
}

double NNfunction-NG_1::synapse0x20a89c0() {
   return (neuron0x20a0820()*0.107245);
}

double NNfunction-NG_1::synapse0x20a8a00() {
   return (neuron0x20a0b60()*-0.047667);
}

double NNfunction-NG_1::synapse0x20a8490() {
   return (neuron0x20a0ea0()*0.0424075);
}

double NNfunction-NG_1::synapse0x20a84d0() {
   return (neuron0x20a1400()*-0.140196);
}

double NNfunction-NG_1::synapse0x20a8b50() {
   return (neuron0x20a1620()*-0.0185133);
}

double NNfunction-NG_1::synapse0x20a8b90() {
   return (neuron0x20a1960()*0.0303617);
}

double NNfunction-NG_1::synapse0x20a8bd0() {
   return (neuron0x20a1ca0()*-0.0789986);
}

double NNfunction-NG_1::synapse0x20a8c10() {
   return (neuron0x20a1fe0()*0.0451981);
}

double NNfunction-NG_1::synapse0x20a8c50() {
   return (neuron0x20a2320()*-0.0447319);
}

double NNfunction-NG_1::synapse0x20a8c90() {
   return (neuron0x20a2660()*0.206625);
}

double NNfunction-NG_1::synapse0x20a9010() {
   return (neuron0x209daa0()*0.0124853);
}

double NNfunction-NG_1::synapse0x20a9050() {
   return (neuron0x209dde0()*0.172387);
}

double NNfunction-NG_1::synapse0x20a9090() {
   return (neuron0x209e120()*-0.0196768);
}

double NNfunction-NG_1::synapse0x20a90d0() {
   return (neuron0x209e460()*-0.036734);
}

double NNfunction-NG_1::synapse0x20a9110() {
   return (neuron0x209e7a0()*-0.0566007);
}

double NNfunction-NG_1::synapse0x20a9150() {
   return (neuron0x209eae0()*-0.0815078);
}

double NNfunction-NG_1::synapse0x20a9190() {
   return (neuron0x209ee20()*-0.0237549);
}

double NNfunction-NG_1::synapse0x20a91d0() {
   return (neuron0x209f160()*0.00244669);
}

double NNfunction-NG_1::synapse0x20a9210() {
   return (neuron0x209f4a0()*0.0616405);
}

double NNfunction-NG_1::synapse0x20a9250() {
   return (neuron0x209f7e0()*0.0581543);
}

double NNfunction-NG_1::synapse0x20a9290() {
   return (neuron0x209fb20()*0.0072487);
}

double NNfunction-NG_1::synapse0x20a92d0() {
   return (neuron0x209fe60()*-0.505042);
}

double NNfunction-NG_1::synapse0x20a9310() {
   return (neuron0x20a01a0()*-0.0643848);
}

double NNfunction-NG_1::synapse0x20a9350() {
   return (neuron0x20a04e0()*0.0337487);
}

double NNfunction-NG_1::synapse0x20a9390() {
   return (neuron0x20a0820()*-0.532098);
}

double NNfunction-NG_1::synapse0x20a93d0() {
   return (neuron0x20a0b60()*-0.0277396);
}

double NNfunction-NG_1::synapse0x20a8e60() {
   return (neuron0x20a0ea0()*0.0156023);
}

double NNfunction-NG_1::synapse0x20a8ea0() {
   return (neuron0x20a1400()*1.61606);
}

double NNfunction-NG_1::synapse0x20a5c30() {
   return (neuron0x20a1620()*-0.0609846);
}

double NNfunction-NG_1::synapse0x20a5c70() {
   return (neuron0x20a1960()*0.00452201);
}

double NNfunction-NG_1::synapse0x20a5cb0() {
   return (neuron0x20a1ca0()*-0.00600721);
}

double NNfunction-NG_1::synapse0x20a5cf0() {
   return (neuron0x20a1fe0()*0.0242695);
}

double NNfunction-NG_1::synapse0x20a5d30() {
   return (neuron0x20a2320()*0.0123816);
}

double NNfunction-NG_1::synapse0x20a5d70() {
   return (neuron0x20a2660()*0.012196);
}

double NNfunction-NG_1::synapse0x20a60f0() {
   return (neuron0x209daa0()*-0.0840376);
}

double NNfunction-NG_1::synapse0x20a6130() {
   return (neuron0x209dde0()*0.0272029);
}

double NNfunction-NG_1::synapse0x20a6170() {
   return (neuron0x209e120()*-0.0240459);
}

double NNfunction-NG_1::synapse0x20a61b0() {
   return (neuron0x209e460()*-0.0121764);
}

double NNfunction-NG_1::synapse0x20a61f0() {
   return (neuron0x209e7a0()*0.0221575);
}

double NNfunction-NG_1::synapse0x20a6230() {
   return (neuron0x209eae0()*2.05054e-05);
}

double NNfunction-NG_1::synapse0x20a6270() {
   return (neuron0x209ee20()*0.00935245);
}

double NNfunction-NG_1::synapse0x20a62b0() {
   return (neuron0x209f160()*-0.00491603);
}

double NNfunction-NG_1::synapse0x20a62f0() {
   return (neuron0x209f4a0()*-0.0127644);
}

double NNfunction-NG_1::synapse0x20a6330() {
   return (neuron0x209f7e0()*0.00379452);
}

double NNfunction-NG_1::synapse0x20a6370() {
   return (neuron0x209fb20()*0.000991592);
}

double NNfunction-NG_1::synapse0x20a63b0() {
   return (neuron0x209fe60()*0.0837895);
}

double NNfunction-NG_1::synapse0x20a63f0() {
   return (neuron0x20a01a0()*0.0357872);
}

double NNfunction-NG_1::synapse0x20aa530() {
   return (neuron0x20a04e0()*-0.0058317);
}

double NNfunction-NG_1::synapse0x20aa570() {
   return (neuron0x20a0820()*-0.102795);
}

double NNfunction-NG_1::synapse0x20aa5b0() {
   return (neuron0x20a0b60()*-0.0424945);
}

double NNfunction-NG_1::synapse0x20a5f40() {
   return (neuron0x20a0ea0()*-0.00861997);
}

double NNfunction-NG_1::synapse0x20a5f80() {
   return (neuron0x20a1400()*-0.0441223);
}

double NNfunction-NG_1::synapse0x20aa700() {
   return (neuron0x20a1620()*0.0181948);
}

double NNfunction-NG_1::synapse0x20aa740() {
   return (neuron0x20a1960()*0.00699797);
}

double NNfunction-NG_1::synapse0x20aa780() {
   return (neuron0x20a1ca0()*0.00154448);
}

double NNfunction-NG_1::synapse0x20aa7c0() {
   return (neuron0x20a1fe0()*0.0289294);
}

double NNfunction-NG_1::synapse0x20aa800() {
   return (neuron0x20a2320()*0.00482033);
}

double NNfunction-NG_1::synapse0x20aa840() {
   return (neuron0x20a2660()*-8.65513);
}

double NNfunction-NG_1::synapse0x20aabc0() {
   return (neuron0x209daa0()*-0.00612171);
}

double NNfunction-NG_1::synapse0x20aac00() {
   return (neuron0x209dde0()*-0.0995893);
}

double NNfunction-NG_1::synapse0x20aac40() {
   return (neuron0x209e120()*-2.67346);
}

double NNfunction-NG_1::synapse0x20aac80() {
   return (neuron0x209e460()*-0.060931);
}

double NNfunction-NG_1::synapse0x20aacc0() {
   return (neuron0x209e7a0()*0.0487337);
}

double NNfunction-NG_1::synapse0x20aad00() {
   return (neuron0x209eae0()*0.0160774);
}

double NNfunction-NG_1::synapse0x20aad40() {
   return (neuron0x209ee20()*-0.0285235);
}

double NNfunction-NG_1::synapse0x20aad80() {
   return (neuron0x209f160()*-0.00590374);
}

double NNfunction-NG_1::synapse0x20aadc0() {
   return (neuron0x209f4a0()*-0.0265692);
}

double NNfunction-NG_1::synapse0x20aae00() {
   return (neuron0x209f7e0()*0.0476635);
}

double NNfunction-NG_1::synapse0x20aae40() {
   return (neuron0x209fb20()*0.0389885);
}

double NNfunction-NG_1::synapse0x20aae80() {
   return (neuron0x209fe60()*0.567949);
}

double NNfunction-NG_1::synapse0x20aaec0() {
   return (neuron0x20a01a0()*-0.0817981);
}

double NNfunction-NG_1::synapse0x20aaf00() {
   return (neuron0x20a04e0()*0.0151079);
}

double NNfunction-NG_1::synapse0x20aaf40() {
   return (neuron0x20a0820()*-0.115553);
}

double NNfunction-NG_1::synapse0x20aaf80() {
   return (neuron0x20a0b60()*-0.00175972);
}

double NNfunction-NG_1::synapse0x20aaa10() {
   return (neuron0x20a0ea0()*0.0861318);
}

double NNfunction-NG_1::synapse0x20aaa50() {
   return (neuron0x20a1400()*0.0243345);
}

double NNfunction-NG_1::synapse0x20ab0d0() {
   return (neuron0x20a1620()*0.0596473);
}

double NNfunction-NG_1::synapse0x20ab110() {
   return (neuron0x20a1960()*-0.0372565);
}

double NNfunction-NG_1::synapse0x20ab150() {
   return (neuron0x20a1ca0()*0.00675698);
}

double NNfunction-NG_1::synapse0x20ab190() {
   return (neuron0x20a1fe0()*0.0173692);
}

double NNfunction-NG_1::synapse0x20ab1d0() {
   return (neuron0x20a2320()*0.00867572);
}

double NNfunction-NG_1::synapse0x20ab210() {
   return (neuron0x20a2660()*-4.45445);
}

double NNfunction-NG_1::synapse0x20ab590() {
   return (neuron0x209daa0()*0.00853425);
}

double NNfunction-NG_1::synapse0x20ab5d0() {
   return (neuron0x209dde0()*0.233435);
}

double NNfunction-NG_1::synapse0x20ab610() {
   return (neuron0x209e120()*0.0506834);
}

double NNfunction-NG_1::synapse0x20ab650() {
   return (neuron0x209e460()*-0.0148906);
}

double NNfunction-NG_1::synapse0x20ab690() {
   return (neuron0x209e7a0()*-0.0407485);
}

double NNfunction-NG_1::synapse0x20ab6d0() {
   return (neuron0x209eae0()*-0.0125712);
}

double NNfunction-NG_1::synapse0x20ab710() {
   return (neuron0x209ee20()*-0.0177146);
}

double NNfunction-NG_1::synapse0x20ab750() {
   return (neuron0x209f160()*-0.000502544);
}

double NNfunction-NG_1::synapse0x20ab790() {
   return (neuron0x209f4a0()*0.0405117);
}

double NNfunction-NG_1::synapse0x20ab7d0() {
   return (neuron0x209f7e0()*0.0155142);
}

double NNfunction-NG_1::synapse0x20ab810() {
   return (neuron0x209fb20()*0.0457527);
}

double NNfunction-NG_1::synapse0x20ab850() {
   return (neuron0x209fe60()*0.548975);
}

double NNfunction-NG_1::synapse0x20ab890() {
   return (neuron0x20a01a0()*0.0516647);
}

double NNfunction-NG_1::synapse0x20ab8d0() {
   return (neuron0x20a04e0()*0.0654184);
}

double NNfunction-NG_1::synapse0x20ab910() {
   return (neuron0x20a0820()*-0.576759);
}

double NNfunction-NG_1::synapse0x20ab950() {
   return (neuron0x20a0b60()*0.0459853);
}

double NNfunction-NG_1::synapse0x20ab3e0() {
   return (neuron0x20a0ea0()*-0.00583661);
}

double NNfunction-NG_1::synapse0x20ab420() {
   return (neuron0x20a1400()*0.907684);
}

double NNfunction-NG_1::synapse0x20abaa0() {
   return (neuron0x20a1620()*-0.00295244);
}

double NNfunction-NG_1::synapse0x20abae0() {
   return (neuron0x20a1960()*-0.0504018);
}

double NNfunction-NG_1::synapse0x20abb20() {
   return (neuron0x20a1ca0()*-0.0321687);
}

double NNfunction-NG_1::synapse0x20abb60() {
   return (neuron0x20a1fe0()*0.00286198);
}

double NNfunction-NG_1::synapse0x20abba0() {
   return (neuron0x20a2320()*-0.00284311);
}

double NNfunction-NG_1::synapse0x20abbe0() {
   return (neuron0x20a2660()*-0.0534189);
}

double NNfunction-NG_1::synapse0x20abf60() {
   return (neuron0x209daa0()*0.0522853);
}

double NNfunction-NG_1::synapse0x20abfa0() {
   return (neuron0x209dde0()*-0.0201252);
}

double NNfunction-NG_1::synapse0x20abfe0() {
   return (neuron0x209e120()*-2.29306);
}

double NNfunction-NG_1::synapse0x20ac020() {
   return (neuron0x209e460()*-0.133543);
}

double NNfunction-NG_1::synapse0x20ac060() {
   return (neuron0x209e7a0()*-0.00879541);
}

double NNfunction-NG_1::synapse0x20ac0a0() {
   return (neuron0x209eae0()*-0.0201109);
}

double NNfunction-NG_1::synapse0x20ac0e0() {
   return (neuron0x209ee20()*0.0433195);
}

double NNfunction-NG_1::synapse0x20ac120() {
   return (neuron0x209f160()*0.0342971);
}

double NNfunction-NG_1::synapse0x20ac160() {
   return (neuron0x209f4a0()*0.0346362);
}

double NNfunction-NG_1::synapse0x20ac1a0() {
   return (neuron0x209f7e0()*0.00322704);
}

double NNfunction-NG_1::synapse0x20ac1e0() {
   return (neuron0x209fb20()*-0.0704351);
}

double NNfunction-NG_1::synapse0x20ac220() {
   return (neuron0x209fe60()*-0.57214);
}

double NNfunction-NG_1::synapse0x20ac260() {
   return (neuron0x20a01a0()*-0.121932);
}

double NNfunction-NG_1::synapse0x20ac2a0() {
   return (neuron0x20a04e0()*-0.0299472);
}

double NNfunction-NG_1::synapse0x20ac2e0() {
   return (neuron0x20a0820()*1.26169);
}

double NNfunction-NG_1::synapse0x20ac320() {
   return (neuron0x20a0b60()*0.0306313);
}

double NNfunction-NG_1::synapse0x20abdb0() {
   return (neuron0x20a0ea0()*0.0387022);
}

double NNfunction-NG_1::synapse0x20abdf0() {
   return (neuron0x20a1400()*-0.1248);
}

double NNfunction-NG_1::synapse0x20ac470() {
   return (neuron0x20a1620()*-0.0786376);
}

double NNfunction-NG_1::synapse0x20ac4b0() {
   return (neuron0x20a1960()*0.0546459);
}

double NNfunction-NG_1::synapse0x20ac4f0() {
   return (neuron0x20a1ca0()*-0.0357124);
}

double NNfunction-NG_1::synapse0x20ac530() {
   return (neuron0x20a1fe0()*0.0382211);
}

double NNfunction-NG_1::synapse0x20ac570() {
   return (neuron0x20a2320()*-0.0079096);
}

double NNfunction-NG_1::synapse0x20ac5b0() {
   return (neuron0x20a2660()*-0.364628);
}

double NNfunction-NG_1::synapse0x20ac930() {
   return (neuron0x209daa0()*0.345604);
}

double NNfunction-NG_1::synapse0x209dcc0() {
   return (neuron0x209dde0()*-0.321491);
}

double NNfunction-NG_1::synapse0x209dd00() {
   return (neuron0x209e120()*1.00774);
}

double NNfunction-NG_1::synapse0x209e000() {
   return (neuron0x209e460()*-0.300374);
}

double NNfunction-NG_1::synapse0x209e040() {
   return (neuron0x209e7a0()*0.0845793);
}

double NNfunction-NG_1::synapse0x209e340() {
   return (neuron0x209eae0()*-0.0635963);
}

double NNfunction-NG_1::synapse0x209e380() {
   return (neuron0x209ee20()*0.096893);
}

double NNfunction-NG_1::synapse0x209e680() {
   return (neuron0x209f160()*0.0848073);
}

double NNfunction-NG_1::synapse0x209e6c0() {
   return (neuron0x209f4a0()*-0.155799);
}

double NNfunction-NG_1::synapse0x209e9c0() {
   return (neuron0x209f7e0()*0.0681732);
}

double NNfunction-NG_1::synapse0x209ea00() {
   return (neuron0x209fb20()*-0.0398109);
}

double NNfunction-NG_1::synapse0x209ed00() {
   return (neuron0x209fe60()*1.06771);
}

double NNfunction-NG_1::synapse0x209ed40() {
   return (neuron0x20a01a0()*0.0268396);
}

double NNfunction-NG_1::synapse0x209f040() {
   return (neuron0x20a04e0()*-0.0682017);
}

double NNfunction-NG_1::synapse0x209f080() {
   return (neuron0x20a0820()*0.00204755);
}

double NNfunction-NG_1::synapse0x209f380() {
   return (neuron0x20a0b60()*-0.122802);
}

double NNfunction-NG_1::synapse0x209f3c0() {
   return (neuron0x20a0ea0()*0.018893);
}

double NNfunction-NG_1::synapse0x209f6c0() {
   return (neuron0x20a1400()*-0.0531491);
}

double NNfunction-NG_1::synapse0x209f700() {
   return (neuron0x20a1620()*-0.0316394);
}

double NNfunction-NG_1::synapse0x209fa00() {
   return (neuron0x20a1960()*0.105295);
}

double NNfunction-NG_1::synapse0x209fa40() {
   return (neuron0x20a1ca0()*-0.00189175);
}

double NNfunction-NG_1::synapse0x209fd40() {
   return (neuron0x20a1fe0()*0.0672195);
}

double NNfunction-NG_1::synapse0x209fd80() {
   return (neuron0x20a2320()*0.0562133);
}

double NNfunction-NG_1::synapse0x20a0080() {
   return (neuron0x20a2660()*0.0298172);
}

double NNfunction-NG_1::synapse0x20a00c0() {
   return (neuron0x209daa0()*0.003241);
}

double NNfunction-NG_1::synapse0x20a0d80() {
   return (neuron0x209dde0()*-0.0385046);
}

double NNfunction-NG_1::synapse0x20a0dc0() {
   return (neuron0x209e120()*-0.903063);
}

double NNfunction-NG_1::synapse0x20ac780() {
   return (neuron0x209e460()*-2.55276);
}

double NNfunction-NG_1::synapse0x20ac7c0() {
   return (neuron0x209e7a0()*-0.0428826);
}

double NNfunction-NG_1::synapse0x20a10c0() {
   return (neuron0x209eae0()*-0.0200045);
}

double NNfunction-NG_1::synapse0x20a1100() {
   return (neuron0x209ee20()*-0.0229692);
}

double NNfunction-NG_1::synapse0x1e4f320() {
   return (neuron0x209f160()*-0.073207);
}

double NNfunction-NG_1::synapse0x1e4f360() {
   return (neuron0x209f4a0()*0.0309596);
}

double NNfunction-NG_1::synapse0x20a1840() {
   return (neuron0x209f7e0()*-0.00714857);
}

double NNfunction-NG_1::synapse0x20a1880() {
   return (neuron0x209fb20()*-0.0736498);
}

double NNfunction-NG_1::synapse0x20a1b80() {
   return (neuron0x209fe60()*0.673979);
}

double NNfunction-NG_1::synapse0x20a1bc0() {
   return (neuron0x20a01a0()*-2.87145);
}

double NNfunction-NG_1::synapse0x20a1ec0() {
   return (neuron0x20a04e0()*0.00170043);
}

double NNfunction-NG_1::synapse0x20a1f00() {
   return (neuron0x20a0820()*0.0819941);
}

double NNfunction-NG_1::synapse0x20a2200() {
   return (neuron0x20a0b60()*-0.0188459);
}

double NNfunction-NG_1::synapse0x20a2240() {
   return (neuron0x20a0ea0()*-0.0371273);
}

double NNfunction-NG_1::synapse0x20a2540() {
   return (neuron0x20a1400()*0.019204);
}

double NNfunction-NG_1::synapse0x20a2580() {
   return (neuron0x20a1620()*-0.0359579);
}

double NNfunction-NG_1::synapse0x20a2880() {
   return (neuron0x20a1960()*0.00642754);
}

double NNfunction-NG_1::synapse0x20a28c0() {
   return (neuron0x20a1ca0()*0.0198859);
}

double NNfunction-NG_1::synapse0x20a03c0() {
   return (neuron0x20a1fe0()*0.0114824);
}

double NNfunction-NG_1::synapse0x20a0400() {
   return (neuron0x20a2320()*-0.0114093);
}

double NNfunction-NG_1::synapse0x20ae6a0() {
   return (neuron0x20a2660()*0.134426);
}

double NNfunction-NG_1::synapse0x20aea20() {
   return (neuron0x209daa0()*0.0603725);
}

double NNfunction-NG_1::synapse0x20aea60() {
   return (neuron0x209dde0()*-5.43895);
}

double NNfunction-NG_1::synapse0x20aeaa0() {
   return (neuron0x209e120()*-0.369264);
}

double NNfunction-NG_1::synapse0x20aeae0() {
   return (neuron0x209e460()*-0.00741919);
}

double NNfunction-NG_1::synapse0x20aeb20() {
   return (neuron0x209e7a0()*0.0492424);
}

double NNfunction-NG_1::synapse0x20aeb60() {
   return (neuron0x209eae0()*0.0484728);
}

double NNfunction-NG_1::synapse0x20aeba0() {
   return (neuron0x209ee20()*0.0315257);
}

double NNfunction-NG_1::synapse0x20aebe0() {
   return (neuron0x209f160()*-0.0180892);
}

double NNfunction-NG_1::synapse0x20aec20() {
   return (neuron0x209f4a0()*-0.0364731);
}

double NNfunction-NG_1::synapse0x20aec60() {
   return (neuron0x209f7e0()*-0.00337579);
}

double NNfunction-NG_1::synapse0x20aeca0() {
   return (neuron0x209fb20()*-0.0140932);
}

double NNfunction-NG_1::synapse0x20aece0() {
   return (neuron0x209fe60()*-0.846202);
}

double NNfunction-NG_1::synapse0x20aed20() {
   return (neuron0x20a01a0()*-0.0809689);
}

double NNfunction-NG_1::synapse0x20aed60() {
   return (neuron0x20a04e0()*0.0302961);
}

double NNfunction-NG_1::synapse0x20aeda0() {
   return (neuron0x20a0820()*0.362172);
}

double NNfunction-NG_1::synapse0x20aede0() {
   return (neuron0x20a0b60()*0.020492);
}

double NNfunction-NG_1::synapse0x20ae870() {
   return (neuron0x20a0ea0()*0.0145525);
}

double NNfunction-NG_1::synapse0x20ae8b0() {
   return (neuron0x20a1400()*0.195376);
}

double NNfunction-NG_1::synapse0x20aef30() {
   return (neuron0x20a1620()*0.0174663);
}

double NNfunction-NG_1::synapse0x20aef70() {
   return (neuron0x20a1960()*-0.0490873);
}

double NNfunction-NG_1::synapse0x20aefb0() {
   return (neuron0x20a1ca0()*0.0335029);
}

double NNfunction-NG_1::synapse0x20aeff0() {
   return (neuron0x20a1fe0()*-0.00107837);
}

double NNfunction-NG_1::synapse0x20af030() {
   return (neuron0x20a2320()*-0.0236964);
}

double NNfunction-NG_1::synapse0x20af070() {
   return (neuron0x20a2660()*0.273078);
}

double NNfunction-NG_1::synapse0x20af3f0() {
   return (neuron0x209daa0()*-0.0705526);
}

double NNfunction-NG_1::synapse0x20af430() {
   return (neuron0x209dde0()*-0.0264371);
}

double NNfunction-NG_1::synapse0x20af470() {
   return (neuron0x209e120()*2.33136);
}

double NNfunction-NG_1::synapse0x20af4b0() {
   return (neuron0x209e460()*0.0027039);
}

double NNfunction-NG_1::synapse0x20af4f0() {
   return (neuron0x209e7a0()*-0.010329);
}

double NNfunction-NG_1::synapse0x20af530() {
   return (neuron0x209eae0()*-0.00261336);
}

double NNfunction-NG_1::synapse0x20af570() {
   return (neuron0x209ee20()*-0.00209152);
}

double NNfunction-NG_1::synapse0x20af5b0() {
   return (neuron0x209f160()*0.00241195);
}

double NNfunction-NG_1::synapse0x20af5f0() {
   return (neuron0x209f4a0()*-0.0308891);
}

double NNfunction-NG_1::synapse0x20af630() {
   return (neuron0x209f7e0()*0.0190113);
}

double NNfunction-NG_1::synapse0x20af670() {
   return (neuron0x209fb20()*-0.021739);
}

double NNfunction-NG_1::synapse0x20af6b0() {
   return (neuron0x209fe60()*0.0641342);
}

double NNfunction-NG_1::synapse0x20af6f0() {
   return (neuron0x20a01a0()*0.155516);
}

double NNfunction-NG_1::synapse0x20af730() {
   return (neuron0x20a04e0()*0.0319735);
}

double NNfunction-NG_1::synapse0x20af770() {
   return (neuron0x20a0820()*-0.308404);
}

double NNfunction-NG_1::synapse0x20af7b0() {
   return (neuron0x20a0b60()*0.00196402);
}

double NNfunction-NG_1::synapse0x20af240() {
   return (neuron0x20a0ea0()*-0.0282239);
}

double NNfunction-NG_1::synapse0x20af280() {
   return (neuron0x20a1400()*-0.00140505);
}

double NNfunction-NG_1::synapse0x20af900() {
   return (neuron0x20a1620()*0.0284239);
}

double NNfunction-NG_1::synapse0x20af940() {
   return (neuron0x20a1960()*-0.0147195);
}

double NNfunction-NG_1::synapse0x20af980() {
   return (neuron0x20a1ca0()*0.00454426);
}

double NNfunction-NG_1::synapse0x20af9c0() {
   return (neuron0x20a1fe0()*0.000361534);
}

double NNfunction-NG_1::synapse0x20afa00() {
   return (neuron0x20a2320()*-0.0062675);
}

double NNfunction-NG_1::synapse0x20afa40() {
   return (neuron0x20a2660()*0.0756205);
}

double NNfunction-NG_1::synapse0x20afdc0() {
   return (neuron0x209daa0()*-0.0226783);
}

double NNfunction-NG_1::synapse0x20afe00() {
   return (neuron0x209dde0()*5.63915);
}

double NNfunction-NG_1::synapse0x20afe40() {
   return (neuron0x209e120()*-1.08559);
}

double NNfunction-NG_1::synapse0x20afe80() {
   return (neuron0x209e460()*0.0540275);
}

double NNfunction-NG_1::synapse0x20afec0() {
   return (neuron0x209e7a0()*0.00897116);
}

double NNfunction-NG_1::synapse0x20aff00() {
   return (neuron0x209eae0()*-0.00218732);
}

double NNfunction-NG_1::synapse0x20aff40() {
   return (neuron0x209ee20()*0.00915017);
}

double NNfunction-NG_1::synapse0x20aff80() {
   return (neuron0x209f160()*0.00911174);
}

double NNfunction-NG_1::synapse0x20affc0() {
   return (neuron0x209f4a0()*0.00507886);
}

double NNfunction-NG_1::synapse0x20b0000() {
   return (neuron0x209f7e0()*0.00972963);
}

double NNfunction-NG_1::synapse0x20b0040() {
   return (neuron0x209fb20()*0.0154281);
}

double NNfunction-NG_1::synapse0x20b0080() {
   return (neuron0x209fe60()*-0.222598);
}

double NNfunction-NG_1::synapse0x20b00c0() {
   return (neuron0x20a01a0()*0.0234993);
}

double NNfunction-NG_1::synapse0x20b0100() {
   return (neuron0x20a04e0()*0.0147069);
}

double NNfunction-NG_1::synapse0x20b0140() {
   return (neuron0x20a0820()*-0.00240822);
}

double NNfunction-NG_1::synapse0x20b0180() {
   return (neuron0x20a0b60()*-0.00184986);
}

double NNfunction-NG_1::synapse0x20afc10() {
   return (neuron0x20a0ea0()*-0.00661219);
}

double NNfunction-NG_1::synapse0x20afc50() {
   return (neuron0x20a1400()*0.0245405);
}

double NNfunction-NG_1::synapse0x20b02d0() {
   return (neuron0x20a1620()*0.00914681);
}

double NNfunction-NG_1::synapse0x20b0310() {
   return (neuron0x20a1960()*2.55975e-06);
}

double NNfunction-NG_1::synapse0x20b0350() {
   return (neuron0x20a1ca0()*0.0213652);
}

double NNfunction-NG_1::synapse0x20b0390() {
   return (neuron0x20a1fe0()*-0.0102878);
}

double NNfunction-NG_1::synapse0x20b03d0() {
   return (neuron0x20a2320()*0.0129989);
}

double NNfunction-NG_1::synapse0x20b0410() {
   return (neuron0x20a2660()*-0.11032);
}

double NNfunction-NG_1::synapse0x20b0790() {
   return (neuron0x209daa0()*0.10429);
}

double NNfunction-NG_1::synapse0x20b07d0() {
   return (neuron0x209dde0()*-4.79056);
}

double NNfunction-NG_1::synapse0x20b0810() {
   return (neuron0x209e120()*-2.00947);
}

double NNfunction-NG_1::synapse0x20b0850() {
   return (neuron0x209e460()*0.0478832);
}

double NNfunction-NG_1::synapse0x20b0890() {
   return (neuron0x209e7a0()*-0.01595);
}

double NNfunction-NG_1::synapse0x20b08d0() {
   return (neuron0x209eae0()*0.0261033);
}

double NNfunction-NG_1::synapse0x20b0910() {
   return (neuron0x209ee20()*-0.0289568);
}

double NNfunction-NG_1::synapse0x20b0950() {
   return (neuron0x209f160()*-0.0329674);
}

double NNfunction-NG_1::synapse0x20b0990() {
   return (neuron0x209f4a0()*0.0207698);
}

double NNfunction-NG_1::synapse0x20b09d0() {
   return (neuron0x209f7e0()*-0.0262367);
}

double NNfunction-NG_1::synapse0x20b0a10() {
   return (neuron0x209fb20()*-0.00498863);
}

double NNfunction-NG_1::synapse0x20b0a50() {
   return (neuron0x209fe60()*-0.366122);
}

double NNfunction-NG_1::synapse0x20b0a90() {
   return (neuron0x20a01a0()*-0.0468705);
}

double NNfunction-NG_1::synapse0x20b0ad0() {
   return (neuron0x20a04e0()*-0.0656408);
}

double NNfunction-NG_1::synapse0x20b0b10() {
   return (neuron0x20a0820()*0.264725);
}

double NNfunction-NG_1::synapse0x20b0b50() {
   return (neuron0x20a0b60()*0.0104777);
}

double NNfunction-NG_1::synapse0x20b05e0() {
   return (neuron0x20a0ea0()*0.0393306);
}

double NNfunction-NG_1::synapse0x20b0620() {
   return (neuron0x20a1400()*0.0630056);
}

double NNfunction-NG_1::synapse0x20b0ca0() {
   return (neuron0x20a1620()*-0.0400563);
}

double NNfunction-NG_1::synapse0x20b0ce0() {
   return (neuron0x20a1960()*-0.016575);
}

double NNfunction-NG_1::synapse0x20b0d20() {
   return (neuron0x20a1ca0()*-0.0276144);
}

double NNfunction-NG_1::synapse0x20b0d60() {
   return (neuron0x20a1fe0()*-0.0162201);
}

double NNfunction-NG_1::synapse0x20b0da0() {
   return (neuron0x20a2320()*-0.0172442);
}

double NNfunction-NG_1::synapse0x20b0de0() {
   return (neuron0x20a2660()*0.46743);
}

double NNfunction-NG_1::synapse0x20b1160() {
   return (neuron0x209daa0()*0.15616);
}

double NNfunction-NG_1::synapse0x20b11a0() {
   return (neuron0x209dde0()*0.0482494);
}

double NNfunction-NG_1::synapse0x20b11e0() {
   return (neuron0x209e120()*-1.32317);
}

double NNfunction-NG_1::synapse0x20b1220() {
   return (neuron0x209e460()*0.0235939);
}

double NNfunction-NG_1::synapse0x20b1260() {
   return (neuron0x209e7a0()*-0.00956354);
}

double NNfunction-NG_1::synapse0x20b12a0() {
   return (neuron0x209eae0()*-0.00897702);
}

double NNfunction-NG_1::synapse0x20b12e0() {
   return (neuron0x209ee20()*0.0270611);
}

double NNfunction-NG_1::synapse0x20b1320() {
   return (neuron0x209f160()*0.0158127);
}

double NNfunction-NG_1::synapse0x20b1360() {
   return (neuron0x209f4a0()*0.0132648);
}

double NNfunction-NG_1::synapse0x20a9520() {
   return (neuron0x209f7e0()*0.00196126);
}

double NNfunction-NG_1::synapse0x20a9560() {
   return (neuron0x209fb20()*-0.00488365);
}

double NNfunction-NG_1::synapse0x20a95a0() {
   return (neuron0x209fe60()*-0.225545);
}

double NNfunction-NG_1::synapse0x20a95e0() {
   return (neuron0x20a01a0()*-0.0137698);
}

double NNfunction-NG_1::synapse0x20a9620() {
   return (neuron0x20a04e0()*-0.0183806);
}

double NNfunction-NG_1::synapse0x20a9660() {
   return (neuron0x20a0820()*0.115173);
}

double NNfunction-NG_1::synapse0x20a96a0() {
   return (neuron0x20a0b60()*0.0379969);
}

double NNfunction-NG_1::synapse0x20b0fb0() {
   return (neuron0x20a0ea0()*-0.00757464);
}

double NNfunction-NG_1::synapse0x20b0ff0() {
   return (neuron0x20a1400()*0.0169561);
}

double NNfunction-NG_1::synapse0x20a97f0() {
   return (neuron0x20a1620()*-0.0263715);
}

double NNfunction-NG_1::synapse0x20a9830() {
   return (neuron0x20a1960()*0.0244249);
}

double NNfunction-NG_1::synapse0x20a9870() {
   return (neuron0x20a1ca0()*-0.0113732);
}

double NNfunction-NG_1::synapse0x20a98b0() {
   return (neuron0x20a1fe0()*-0.0463452);
}

double NNfunction-NG_1::synapse0x20a98f0() {
   return (neuron0x20a2320()*0.0117488);
}

double NNfunction-NG_1::synapse0x20a9930() {
   return (neuron0x20a2660()*7.42588);
}

double NNfunction-NG_1::synapse0x20a9cb0() {
   return (neuron0x209daa0()*-1.19351);
}

double NNfunction-NG_1::synapse0x20a9cf0() {
   return (neuron0x209dde0()*0.0623824);
}

double NNfunction-NG_1::synapse0x20a9d30() {
   return (neuron0x209e120()*0.522303);
}

double NNfunction-NG_1::synapse0x20a9d70() {
   return (neuron0x209e460()*0.00279487);
}

double NNfunction-NG_1::synapse0x20a9db0() {
   return (neuron0x209e7a0()*0.115947);
}

double NNfunction-NG_1::synapse0x20a9df0() {
   return (neuron0x209eae0()*0.0125245);
}

double NNfunction-NG_1::synapse0x20a9e30() {
   return (neuron0x209ee20()*-0.0171481);
}

double NNfunction-NG_1::synapse0x20a9e70() {
   return (neuron0x209f160()*-0.039439);
}

double NNfunction-NG_1::synapse0x20a9eb0() {
   return (neuron0x209f4a0()*0.0500453);
}

double NNfunction-NG_1::synapse0x20a9ef0() {
   return (neuron0x209f7e0()*0.00970307);
}

double NNfunction-NG_1::synapse0x20a9f30() {
   return (neuron0x209fb20()*-0.0203628);
}

double NNfunction-NG_1::synapse0x20a9f70() {
   return (neuron0x209fe60()*-0.338872);
}

double NNfunction-NG_1::synapse0x20a9fb0() {
   return (neuron0x20a01a0()*0.0502173);
}

double NNfunction-NG_1::synapse0x20a9ff0() {
   return (neuron0x20a04e0()*-0.0742511);
}

double NNfunction-NG_1::synapse0x20aa030() {
   return (neuron0x20a0820()*0.0216358);
}

double NNfunction-NG_1::synapse0x20aa070() {
   return (neuron0x20a0b60()*-0.0021185);
}

double NNfunction-NG_1::synapse0x20a9b00() {
   return (neuron0x20a0ea0()*-0.0307812);
}

double NNfunction-NG_1::synapse0x20a9b40() {
   return (neuron0x20a1400()*-0.0236369);
}

double NNfunction-NG_1::synapse0x20aa1c0() {
   return (neuron0x20a1620()*0.0964348);
}

double NNfunction-NG_1::synapse0x20aa200() {
   return (neuron0x20a1960()*-0.0370026);
}

double NNfunction-NG_1::synapse0x20aa240() {
   return (neuron0x20a1ca0()*-0.0460243);
}

double NNfunction-NG_1::synapse0x20aa280() {
   return (neuron0x20a1fe0()*-0.0377572);
}

double NNfunction-NG_1::synapse0x20aa2c0() {
   return (neuron0x20a2320()*-0.0073871);
}

double NNfunction-NG_1::synapse0x20aa300() {
   return (neuron0x20a2660()*1.00887);
}

double NNfunction-NG_1::synapse0x20aa4d0() {
   return (neuron0x209daa0()*0.00265564);
}

double NNfunction-NG_1::synapse0x20b3560() {
   return (neuron0x209dde0()*0.0378836);
}

double NNfunction-NG_1::synapse0x20b35a0() {
   return (neuron0x209e120()*0.885276);
}

double NNfunction-NG_1::synapse0x20b35e0() {
   return (neuron0x209e460()*-0.0879792);
}

double NNfunction-NG_1::synapse0x20b3620() {
   return (neuron0x209e7a0()*0.0451372);
}

double NNfunction-NG_1::synapse0x20b3660() {
   return (neuron0x209eae0()*0.0407336);
}

double NNfunction-NG_1::synapse0x20b36a0() {
   return (neuron0x209ee20()*-0.0274502);
}

double NNfunction-NG_1::synapse0x20b36e0() {
   return (neuron0x209f160()*0.0190098);
}

double NNfunction-NG_1::synapse0x20b3720() {
   return (neuron0x209f4a0()*-0.00888174);
}

double NNfunction-NG_1::synapse0x20b3760() {
   return (neuron0x209f7e0()*-0.0175314);
}

double NNfunction-NG_1::synapse0x20b37a0() {
   return (neuron0x209fb20()*-0.0346775);
}

double NNfunction-NG_1::synapse0x20b37e0() {
   return (neuron0x209fe60()*-1.05241);
}

double NNfunction-NG_1::synapse0x20b3820() {
   return (neuron0x20a01a0()*0.0341624);
}

double NNfunction-NG_1::synapse0x20b3860() {
   return (neuron0x20a04e0()*0.0500133);
}

double NNfunction-NG_1::synapse0x20b38a0() {
   return (neuron0x20a0820()*0.267815);
}

double NNfunction-NG_1::synapse0x20b38e0() {
   return (neuron0x20a0b60()*-0.0090766);
}

double NNfunction-NG_1::synapse0x20b33b0() {
   return (neuron0x20a0ea0()*-0.0348309);
}

double NNfunction-NG_1::synapse0x20b33f0() {
   return (neuron0x20a1400()*0.176198);
}

double NNfunction-NG_1::synapse0x20b3a30() {
   return (neuron0x20a1620()*-0.0164723);
}

double NNfunction-NG_1::synapse0x20b3a70() {
   return (neuron0x20a1960()*-0.00280733);
}

double NNfunction-NG_1::synapse0x20b3ab0() {
   return (neuron0x20a1ca0()*-0.0307459);
}

double NNfunction-NG_1::synapse0x20b3af0() {
   return (neuron0x20a1fe0()*0.0237426);
}

double NNfunction-NG_1::synapse0x20b3b30() {
   return (neuron0x20a2320()*0.0257881);
}

double NNfunction-NG_1::synapse0x20b3b70() {
   return (neuron0x20a2660()*0.165318);
}

double NNfunction-NG_1::synapse0x20b3ef0() {
   return (neuron0x209daa0()*0.0112472);
}

double NNfunction-NG_1::synapse0x20b3f30() {
   return (neuron0x209dde0()*-0.0181157);
}

double NNfunction-NG_1::synapse0x20b3f70() {
   return (neuron0x209e120()*1.67495);
}

double NNfunction-NG_1::synapse0x20b3fb0() {
   return (neuron0x209e460()*-0.184033);
}

double NNfunction-NG_1::synapse0x20b3ff0() {
   return (neuron0x209e7a0()*-0.00521372);
}

double NNfunction-NG_1::synapse0x20b4030() {
   return (neuron0x209eae0()*-0.00471561);
}

double NNfunction-NG_1::synapse0x20b4070() {
   return (neuron0x209ee20()*-0.0312541);
}

double NNfunction-NG_1::synapse0x20b40b0() {
   return (neuron0x209f160()*-0.0112998);
}

double NNfunction-NG_1::synapse0x20b40f0() {
   return (neuron0x209f4a0()*0.0221418);
}

double NNfunction-NG_1::synapse0x20b4130() {
   return (neuron0x209f7e0()*-0.00361081);
}

double NNfunction-NG_1::synapse0x20b4170() {
   return (neuron0x209fb20()*-0.00364586);
}

double NNfunction-NG_1::synapse0x20b41b0() {
   return (neuron0x209fe60()*-0.136037);
}

double NNfunction-NG_1::synapse0x20b41f0() {
   return (neuron0x20a01a0()*0.910228);
}

double NNfunction-NG_1::synapse0x20b4230() {
   return (neuron0x20a04e0()*-0.017078);
}

double NNfunction-NG_1::synapse0x20b4270() {
   return (neuron0x20a0820()*0.105378);
}

double NNfunction-NG_1::synapse0x20b42b0() {
   return (neuron0x20a0b60()*-0.010457);
}

double NNfunction-NG_1::synapse0x20b3d40() {
   return (neuron0x20a0ea0()*0.00921188);
}

double NNfunction-NG_1::synapse0x20b3d80() {
   return (neuron0x20a1400()*0.0303804);
}

double NNfunction-NG_1::synapse0x20b4400() {
   return (neuron0x20a1620()*0.0011189);
}

double NNfunction-NG_1::synapse0x20b4440() {
   return (neuron0x20a1960()*0.014231);
}

double NNfunction-NG_1::synapse0x20b4480() {
   return (neuron0x20a1ca0()*-0.0351572);
}

double NNfunction-NG_1::synapse0x20b44c0() {
   return (neuron0x20a1fe0()*-0.00552794);
}

double NNfunction-NG_1::synapse0x20b4500() {
   return (neuron0x20a2320()*-0.008662);
}

double NNfunction-NG_1::synapse0x20b4540() {
   return (neuron0x20a2660()*0.056132);
}

double NNfunction-NG_1::synapse0x20b48c0() {
   return (neuron0x209daa0()*0.0250451);
}

double NNfunction-NG_1::synapse0x20b4900() {
   return (neuron0x209dde0()*-0.0205997);
}

double NNfunction-NG_1::synapse0x20b4940() {
   return (neuron0x209e120()*-0.151661);
}

double NNfunction-NG_1::synapse0x20b4980() {
   return (neuron0x209e460()*0.0199448);
}

double NNfunction-NG_1::synapse0x20b49c0() {
   return (neuron0x209e7a0()*0.0133809);
}

double NNfunction-NG_1::synapse0x20b4a00() {
   return (neuron0x209eae0()*0.00344468);
}

double NNfunction-NG_1::synapse0x20b4a40() {
   return (neuron0x209ee20()*0.0142547);
}

double NNfunction-NG_1::synapse0x20b4a80() {
   return (neuron0x209f160()*0.0128924);
}

double NNfunction-NG_1::synapse0x20b4ac0() {
   return (neuron0x209f4a0()*0.000976886);
}

double NNfunction-NG_1::synapse0x20b4b00() {
   return (neuron0x209f7e0()*-0.00299458);
}

double NNfunction-NG_1::synapse0x20b4b40() {
   return (neuron0x209fb20()*0.000394577);
}

double NNfunction-NG_1::synapse0x20b4b80() {
   return (neuron0x209fe60()*-0.0255766);
}

double NNfunction-NG_1::synapse0x20b4bc0() {
   return (neuron0x20a01a0()*0.000300908);
}

double NNfunction-NG_1::synapse0x20b4c00() {
   return (neuron0x20a04e0()*-0.00148574);
}

double NNfunction-NG_1::synapse0x20b4c40() {
   return (neuron0x20a0820()*0.0193152);
}

double NNfunction-NG_1::synapse0x20b4c80() {
   return (neuron0x20a0b60()*0.0133971);
}

double NNfunction-NG_1::synapse0x20b4710() {
   return (neuron0x20a0ea0()*-0.00235413);
}

double NNfunction-NG_1::synapse0x20b4750() {
   return (neuron0x20a1400()*0.00921604);
}

double NNfunction-NG_1::synapse0x20b4dd0() {
   return (neuron0x20a1620()*-0.00422246);
}

double NNfunction-NG_1::synapse0x20b4e10() {
   return (neuron0x20a1960()*-0.00172248);
}

double NNfunction-NG_1::synapse0x20b4e50() {
   return (neuron0x20a1ca0()*-0.00194753);
}

double NNfunction-NG_1::synapse0x20b4e90() {
   return (neuron0x20a1fe0()*-0.0155138);
}

double NNfunction-NG_1::synapse0x20b4ed0() {
   return (neuron0x20a2320()*0.00511154);
}

double NNfunction-NG_1::synapse0x20b4f10() {
   return (neuron0x20a2660()*26.8788);
}

double NNfunction-NG_1::synapse0x20b5290() {
   return (neuron0x209daa0()*0.0144322);
}

double NNfunction-NG_1::synapse0x20b52d0() {
   return (neuron0x209dde0()*-0.0966191);
}

double NNfunction-NG_1::synapse0x20b5310() {
   return (neuron0x209e120()*-0.288237);
}

double NNfunction-NG_1::synapse0x20b5350() {
   return (neuron0x209e460()*-3.344);
}

double NNfunction-NG_1::synapse0x20b5390() {
   return (neuron0x209e7a0()*0.0200316);
}

double NNfunction-NG_1::synapse0x20b53d0() {
   return (neuron0x209eae0()*0.0103699);
}

double NNfunction-NG_1::synapse0x20b5410() {
   return (neuron0x209ee20()*0.0336676);
}

double NNfunction-NG_1::synapse0x20b5450() {
   return (neuron0x209f160()*0.0214174);
}

double NNfunction-NG_1::synapse0x20b5490() {
   return (neuron0x209f4a0()*-0.0293349);
}

double NNfunction-NG_1::synapse0x20b54d0() {
   return (neuron0x209f7e0()*-0.0758857);
}

double NNfunction-NG_1::synapse0x20b5510() {
   return (neuron0x209fb20()*-0.0142966);
}

double NNfunction-NG_1::synapse0x20b5550() {
   return (neuron0x209fe60()*-4.17328);
}

double NNfunction-NG_1::synapse0x20b5590() {
   return (neuron0x20a01a0()*0.37731);
}

double NNfunction-NG_1::synapse0x20b55d0() {
   return (neuron0x20a04e0()*0.0185842);
}

double NNfunction-NG_1::synapse0x20b5610() {
   return (neuron0x20a0820()*0.0603946);
}

double NNfunction-NG_1::synapse0x20b5650() {
   return (neuron0x20a0b60()*0.0544889);
}

double NNfunction-NG_1::synapse0x20b50e0() {
   return (neuron0x20a0ea0()*0.0100726);
}

double NNfunction-NG_1::synapse0x20b5120() {
   return (neuron0x20a1400()*0.0492392);
}

double NNfunction-NG_1::synapse0x20b57a0() {
   return (neuron0x20a1620()*-0.00102647);
}

double NNfunction-NG_1::synapse0x20b57e0() {
   return (neuron0x20a1960()*0.0411628);
}

double NNfunction-NG_1::synapse0x20b5820() {
   return (neuron0x20a1ca0()*-0.0299276);
}

double NNfunction-NG_1::synapse0x20b5860() {
   return (neuron0x20a1fe0()*0.00280128);
}

double NNfunction-NG_1::synapse0x20b58a0() {
   return (neuron0x20a2320()*0.0076198);
}

double NNfunction-NG_1::synapse0x20b58e0() {
   return (neuron0x20a2660()*-0.088285);
}

double NNfunction-NG_1::synapse0x20b5c60() {
   return (neuron0x209daa0()*0.0606581);
}

double NNfunction-NG_1::synapse0x20b5ca0() {
   return (neuron0x209dde0()*-0.0518875);
}

double NNfunction-NG_1::synapse0x20b5ce0() {
   return (neuron0x209e120()*-0.274249);
}

double NNfunction-NG_1::synapse0x20b5d20() {
   return (neuron0x209e460()*-1.98601);
}

double NNfunction-NG_1::synapse0x20b5d60() {
   return (neuron0x209e7a0()*-0.0045604);
}

double NNfunction-NG_1::synapse0x20b5da0() {
   return (neuron0x209eae0()*-0.0771558);
}

double NNfunction-NG_1::synapse0x20b5de0() {
   return (neuron0x209ee20()*-0.0371508);
}

double NNfunction-NG_1::synapse0x20b5e20() {
   return (neuron0x209f160()*-0.0147306);
}

double NNfunction-NG_1::synapse0x20b5e60() {
   return (neuron0x209f4a0()*-0.0262559);
}

double NNfunction-NG_1::synapse0x20b5ea0() {
   return (neuron0x209f7e0()*0.0187597);
}

double NNfunction-NG_1::synapse0x20b5ee0() {
   return (neuron0x209fb20()*-0.0572887);
}

double NNfunction-NG_1::synapse0x20b5f20() {
   return (neuron0x209fe60()*-0.0282297);
}

double NNfunction-NG_1::synapse0x20b5f60() {
   return (neuron0x20a01a0()*-0.0280556);
}

double NNfunction-NG_1::synapse0x20b5fa0() {
   return (neuron0x20a04e0()*-0.0727806);
}

double NNfunction-NG_1::synapse0x20b5fe0() {
   return (neuron0x20a0820()*0.114072);
}

double NNfunction-NG_1::synapse0x20b6020() {
   return (neuron0x20a0b60()*-0.148499);
}

double NNfunction-NG_1::synapse0x20b5ab0() {
   return (neuron0x20a0ea0()*-0.0860564);
}

double NNfunction-NG_1::synapse0x20b5af0() {
   return (neuron0x20a1400()*0.133718);
}

double NNfunction-NG_1::synapse0x20b6170() {
   return (neuron0x20a1620()*0.151698);
}

double NNfunction-NG_1::synapse0x20b61b0() {
   return (neuron0x20a1960()*0.0497772);
}

double NNfunction-NG_1::synapse0x20b61f0() {
   return (neuron0x20a1ca0()*0.0772675);
}

double NNfunction-NG_1::synapse0x20b6230() {
   return (neuron0x20a1fe0()*0.0140348);
}

double NNfunction-NG_1::synapse0x20b6270() {
   return (neuron0x20a2320()*0.0433125);
}

double NNfunction-NG_1::synapse0x20b62b0() {
   return (neuron0x20a2660()*-0.00873468);
}

double NNfunction-NG_1::synapse0x20b6630() {
   return (neuron0x209daa0()*-0.0349879);
}

double NNfunction-NG_1::synapse0x20b6670() {
   return (neuron0x209dde0()*0.0283511);
}

double NNfunction-NG_1::synapse0x20b66b0() {
   return (neuron0x209e120()*0.344723);
}

double NNfunction-NG_1::synapse0x20b66f0() {
   return (neuron0x209e460()*-3.26581);
}

double NNfunction-NG_1::synapse0x20b6730() {
   return (neuron0x209e7a0()*0.124775);
}

double NNfunction-NG_1::synapse0x20b6770() {
   return (neuron0x209eae0()*-0.0247462);
}

double NNfunction-NG_1::synapse0x20b67b0() {
   return (neuron0x209ee20()*-0.0854744);
}

double NNfunction-NG_1::synapse0x20b67f0() {
   return (neuron0x209f160()*0.0139404);
}

double NNfunction-NG_1::synapse0x20b6830() {
   return (neuron0x209f4a0()*-0.0673568);
}

double NNfunction-NG_1::synapse0x20b6870() {
   return (neuron0x209f7e0()*-0.00450351);
}

double NNfunction-NG_1::synapse0x20b68b0() {
   return (neuron0x209fb20()*0.175679);
}

double NNfunction-NG_1::synapse0x20b68f0() {
   return (neuron0x209fe60()*0.0110612);
}

double NNfunction-NG_1::synapse0x20b6930() {
   return (neuron0x20a01a0()*-0.421588);
}

double NNfunction-NG_1::synapse0x20b6970() {
   return (neuron0x20a04e0()*0.109131);
}

double NNfunction-NG_1::synapse0x20b69b0() {
   return (neuron0x20a0820()*-0.185859);
}

double NNfunction-NG_1::synapse0x20b69f0() {
   return (neuron0x20a0b60()*0.109766);
}

double NNfunction-NG_1::synapse0x20b6480() {
   return (neuron0x20a0ea0()*0.100108);
}

double NNfunction-NG_1::synapse0x20b64c0() {
   return (neuron0x20a1400()*0.130756);
}

double NNfunction-NG_1::synapse0x20b6b40() {
   return (neuron0x20a1620()*0.0800894);
}

double NNfunction-NG_1::synapse0x20b6b80() {
   return (neuron0x20a1960()*0.071117);
}

double NNfunction-NG_1::synapse0x20b6bc0() {
   return (neuron0x20a1ca0()*-0.0874079);
}

double NNfunction-NG_1::synapse0x20b6c00() {
   return (neuron0x20a1fe0()*0.146797);
}

double NNfunction-NG_1::synapse0x20b6c40() {
   return (neuron0x20a2320()*0.0296353);
}

double NNfunction-NG_1::synapse0x20b6c80() {
   return (neuron0x20a2660()*-1.23873);
}

double NNfunction-NG_1::synapse0x20b7000() {
   return (neuron0x209daa0()*0.0191399);
}

double NNfunction-NG_1::synapse0x20b7040() {
   return (neuron0x209dde0()*-0.698);
}

double NNfunction-NG_1::synapse0x20b7080() {
   return (neuron0x209e120()*0.0219135);
}

double NNfunction-NG_1::synapse0x20b70c0() {
   return (neuron0x209e460()*-0.0208038);
}

double NNfunction-NG_1::synapse0x20b7100() {
   return (neuron0x209e7a0()*0.0474815);
}

double NNfunction-NG_1::synapse0x20b7140() {
   return (neuron0x209eae0()*0.062925);
}

double NNfunction-NG_1::synapse0x20b7180() {
   return (neuron0x209ee20()*-0.00794274);
}

double NNfunction-NG_1::synapse0x20b71c0() {
   return (neuron0x209f160()*0.0648146);
}

double NNfunction-NG_1::synapse0x20b7200() {
   return (neuron0x209f4a0()*-0.0997454);
}

double NNfunction-NG_1::synapse0x20b7240() {
   return (neuron0x209f7e0()*-0.0186416);
}

double NNfunction-NG_1::synapse0x20b7280() {
   return (neuron0x209fb20()*0.0016307);
}

double NNfunction-NG_1::synapse0x20b72c0() {
   return (neuron0x209fe60()*0.457878);
}

double NNfunction-NG_1::synapse0x20b7300() {
   return (neuron0x20a01a0()*0.208584);
}

double NNfunction-NG_1::synapse0x20b7340() {
   return (neuron0x20a04e0()*0.0327546);
}

double NNfunction-NG_1::synapse0x20b7380() {
   return (neuron0x20a0820()*-0.724627);
}

double NNfunction-NG_1::synapse0x20b73c0() {
   return (neuron0x20a0b60()*-0.00665387);
}

double NNfunction-NG_1::synapse0x20b6e50() {
   return (neuron0x20a0ea0()*-0.0356547);
}

double NNfunction-NG_1::synapse0x20b6e90() {
   return (neuron0x20a1400()*-1.281);
}

double NNfunction-NG_1::synapse0x20b7510() {
   return (neuron0x20a1620()*0.0287263);
}

double NNfunction-NG_1::synapse0x20b7550() {
   return (neuron0x20a1960()*-0.0297714);
}

double NNfunction-NG_1::synapse0x20b7590() {
   return (neuron0x20a1ca0()*-0.0274791);
}

double NNfunction-NG_1::synapse0x20b75d0() {
   return (neuron0x20a1fe0()*0.0108256);
}

double NNfunction-NG_1::synapse0x20b7610() {
   return (neuron0x20a2320()*-0.0262317);
}

double NNfunction-NG_1::synapse0x20b7650() {
   return (neuron0x20a2660()*-0.00873979);
}

double NNfunction-NG_1::synapse0x20b79d0() {
   return (neuron0x209daa0()*-0.206097);
}

double NNfunction-NG_1::synapse0x20b7a10() {
   return (neuron0x209dde0()*-0.659014);
}

double NNfunction-NG_1::synapse0x20b7a50() {
   return (neuron0x209e120()*0.000709989);
}

double NNfunction-NG_1::synapse0x20b7a90() {
   return (neuron0x209e460()*-0.684252);
}

double NNfunction-NG_1::synapse0x20b7ad0() {
   return (neuron0x209e7a0()*-0.0292273);
}

double NNfunction-NG_1::synapse0x20b7b10() {
   return (neuron0x209eae0()*-0.0717419);
}

double NNfunction-NG_1::synapse0x20b7b50() {
   return (neuron0x209ee20()*0.019836);
}

double NNfunction-NG_1::synapse0x20b7b90() {
   return (neuron0x209f160()*-0.0945166);
}

double NNfunction-NG_1::synapse0x20b7bd0() {
   return (neuron0x209f4a0()*0.127314);
}

double NNfunction-NG_1::synapse0x20b7c10() {
   return (neuron0x209f7e0()*0.03901);
}

double NNfunction-NG_1::synapse0x20b7c50() {
   return (neuron0x209fb20()*0.0234945);
}

double NNfunction-NG_1::synapse0x20b7c90() {
   return (neuron0x209fe60()*-0.350672);
}

double NNfunction-NG_1::synapse0x20b7cd0() {
   return (neuron0x20a01a0()*-0.126241);
}

double NNfunction-NG_1::synapse0x20b7d10() {
   return (neuron0x20a04e0()*0.178545);
}

double NNfunction-NG_1::synapse0x20b7d50() {
   return (neuron0x20a0820()*-0.0423364);
}

double NNfunction-NG_1::synapse0x20b7d90() {
   return (neuron0x20a0b60()*0.613024);
}

double NNfunction-NG_1::synapse0x20b7820() {
   return (neuron0x20a0ea0()*-0.0395452);
}

double NNfunction-NG_1::synapse0x20b7860() {
   return (neuron0x20a1400()*0.106587);
}

double NNfunction-NG_1::synapse0x20b7ee0() {
   return (neuron0x20a1620()*-0.525749);
}

double NNfunction-NG_1::synapse0x20b7f20() {
   return (neuron0x20a1960()*0.0690017);
}

double NNfunction-NG_1::synapse0x20b7f60() {
   return (neuron0x20a1ca0()*-0.0742198);
}

double NNfunction-NG_1::synapse0x20b7fa0() {
   return (neuron0x20a1fe0()*0.0524553);
}

double NNfunction-NG_1::synapse0x20b7fe0() {
   return (neuron0x20a2320()*-0.0266975);
}

double NNfunction-NG_1::synapse0x20b8020() {
   return (neuron0x20a2660()*-0.705569);
}

double NNfunction-NG_1::synapse0x20b83a0() {
   return (neuron0x209daa0()*0.0329605);
}

double NNfunction-NG_1::synapse0x20ac970() {
   return (neuron0x209dde0()*-0.00510366);
}

double NNfunction-NG_1::synapse0x20ac9b0() {
   return (neuron0x209e120()*1.55569);
}

double NNfunction-NG_1::synapse0x20ac9f0() {
   return (neuron0x209e460()*2.11936);
}

double NNfunction-NG_1::synapse0x20acc40() {
   return (neuron0x209e7a0()*0.0177397);
}

double NNfunction-NG_1::synapse0x20acc80() {
   return (neuron0x209eae0()*-0.00428072);
}

double NNfunction-NG_1::synapse0x20accc0() {
   return (neuron0x209ee20()*0.0421369);
}

double NNfunction-NG_1::synapse0x20acf10() {
   return (neuron0x209f160()*0.0024492);
}

double NNfunction-NG_1::synapse0x20acf50() {
   return (neuron0x209f4a0()*-0.0124523);
}

double NNfunction-NG_1::synapse0x20ad1a0() {
   return (neuron0x209f7e0()*-0.046792);
}

double NNfunction-NG_1::synapse0x20ad1e0() {
   return (neuron0x209fb20()*0.0366285);
}

double NNfunction-NG_1::synapse0x20ad220() {
   return (neuron0x209fe60()*-0.271456);
}

double NNfunction-NG_1::synapse0x20ad470() {
   return (neuron0x20a01a0()*0.13793);
}

double NNfunction-NG_1::synapse0x20ad4b0() {
   return (neuron0x20a04e0()*0.00826176);
}

double NNfunction-NG_1::synapse0x20ad700() {
   return (neuron0x20a0820()*-0.137973);
}

double NNfunction-NG_1::synapse0x20ad740() {
   return (neuron0x20a0b60()*-0.0262834);
}

double NNfunction-NG_1::synapse0x20b81f0() {
   return (neuron0x20a0ea0()*0.0455523);
}

double NNfunction-NG_1::synapse0x20b8230() {
   return (neuron0x20a1400()*-0.00871093);
}

double NNfunction-NG_1::synapse0x20ad890() {
   return (neuron0x20a1620()*-0.0178639);
}

double NNfunction-NG_1::synapse0x20adda0() {
   return (neuron0x20a1960()*0.0365092);
}

double NNfunction-NG_1::synapse0x20adde0() {
   return (neuron0x20a1ca0()*-0.00661187);
}

double NNfunction-NG_1::synapse0x20ade20() {
   return (neuron0x20a1fe0()*0.0063686);
}

double NNfunction-NG_1::synapse0x20ae070() {
   return (neuron0x20a2320()*0.00304347);
}

double NNfunction-NG_1::synapse0x20ae0b0() {
   return (neuron0x20a2660()*0.0209057);
}

double NNfunction-NG_1::synapse0x20ad960() {
   return (neuron0x209daa0()*-0.00848809);
}

double NNfunction-NG_1::synapse0x20ad9a0() {
   return (neuron0x209dde0()*0.0859432);
}

double NNfunction-NG_1::synapse0x20ad9e0() {
   return (neuron0x209e120()*1.76279);
}

double NNfunction-NG_1::synapse0x20ada20() {
   return (neuron0x209e460()*0.0124711);
}

double NNfunction-NG_1::synapse0x20ae3a0() {
   return (neuron0x209e7a0()*0.0387994);
}

double NNfunction-NG_1::synapse0x20ba6f0() {
   return (neuron0x209eae0()*-0.0219428);
}

double NNfunction-NG_1::synapse0x20ba730() {
   return (neuron0x209ee20()*0.0145182);
}

double NNfunction-NG_1::synapse0x20ba770() {
   return (neuron0x209f160()*0.0252726);
}

double NNfunction-NG_1::synapse0x20ba7b0() {
   return (neuron0x209f4a0()*-0.00219131);
}

double NNfunction-NG_1::synapse0x20ba7f0() {
   return (neuron0x209f7e0()*0.00963741);
}

double NNfunction-NG_1::synapse0x20ba830() {
   return (neuron0x209fb20()*0.014757);
}

double NNfunction-NG_1::synapse0x20ba870() {
   return (neuron0x209fe60()*-0.113401);
}

double NNfunction-NG_1::synapse0x20ba8b0() {
   return (neuron0x20a01a0()*0.0837326);
}

double NNfunction-NG_1::synapse0x20ba8f0() {
   return (neuron0x20a04e0()*-0.0160419);
}

double NNfunction-NG_1::synapse0x20ba930() {
   return (neuron0x20a0820()*0.0869125);
}

double NNfunction-NG_1::synapse0x20ba970() {
   return (neuron0x20a0b60()*-0.000596743);
}

double NNfunction-NG_1::synapse0x20ae280() {
   return (neuron0x20a0ea0()*0.0301479);
}

double NNfunction-NG_1::synapse0x20ae2c0() {
   return (neuron0x20a1400()*0.0260481);
}

double NNfunction-NG_1::synapse0x20baac0() {
   return (neuron0x20a1620()*-0.0148592);
}

double NNfunction-NG_1::synapse0x20bab00() {
   return (neuron0x20a1960()*-0.00197729);
}

double NNfunction-NG_1::synapse0x20bab40() {
   return (neuron0x20a1ca0()*-0.00669299);
}

double NNfunction-NG_1::synapse0x20bab80() {
   return (neuron0x20a1fe0()*-0.020749);
}

double NNfunction-NG_1::synapse0x20babc0() {
   return (neuron0x20a2320()*0.005121);
}

double NNfunction-NG_1::synapse0x20bac00() {
   return (neuron0x20a2660()*-3.60331);
}

double NNfunction-NG_1::synapse0x20baf80() {
   return (neuron0x209daa0()*-0.0376919);
}

double NNfunction-NG_1::synapse0x20bafc0() {
   return (neuron0x209dde0()*7.3605);
}

double NNfunction-NG_1::synapse0x20bb000() {
   return (neuron0x209e120()*-1.74895);
}

double NNfunction-NG_1::synapse0x20bb040() {
   return (neuron0x209e460()*-0.00182957);
}

double NNfunction-NG_1::synapse0x20bb080() {
   return (neuron0x209e7a0()*0.00537167);
}

double NNfunction-NG_1::synapse0x20bb0c0() {
   return (neuron0x209eae0()*0.0145327);
}

double NNfunction-NG_1::synapse0x20bb100() {
   return (neuron0x209ee20()*0.00357022);
}

double NNfunction-NG_1::synapse0x20bb140() {
   return (neuron0x209f160()*0.000562581);
}

double NNfunction-NG_1::synapse0x20bb180() {
   return (neuron0x209f4a0()*0.0156488);
}

double NNfunction-NG_1::synapse0x20bb1c0() {
   return (neuron0x209f7e0()*0.0189134);
}

double NNfunction-NG_1::synapse0x20bb200() {
   return (neuron0x209fb20()*0.00734496);
}

double NNfunction-NG_1::synapse0x20bb240() {
   return (neuron0x209fe60()*0.0586494);
}

double NNfunction-NG_1::synapse0x20bb280() {
   return (neuron0x20a01a0()*0.0282052);
}

double NNfunction-NG_1::synapse0x20bb2c0() {
   return (neuron0x20a04e0()*0.00291574);
}

double NNfunction-NG_1::synapse0x20bb300() {
   return (neuron0x20a0820()*-0.0919982);
}

double NNfunction-NG_1::synapse0x20bb340() {
   return (neuron0x20a0b60()*-0.0045079);
}

double NNfunction-NG_1::synapse0x20badd0() {
   return (neuron0x20a0ea0()*0.017428);
}

double NNfunction-NG_1::synapse0x20bae10() {
   return (neuron0x20a1400()*-0.0555027);
}

double NNfunction-NG_1::synapse0x20bb490() {
   return (neuron0x20a1620()*-0.00537666);
}

double NNfunction-NG_1::synapse0x20bb4d0() {
   return (neuron0x20a1960()*-0.0136324);
}

double NNfunction-NG_1::synapse0x20bb510() {
   return (neuron0x20a1ca0()*0.0128297);
}

double NNfunction-NG_1::synapse0x20bb550() {
   return (neuron0x20a1fe0()*0.00669715);
}

double NNfunction-NG_1::synapse0x20bb590() {
   return (neuron0x20a2320()*0.00864993);
}

double NNfunction-NG_1::synapse0x20bb5d0() {
   return (neuron0x20a2660()*-0.0751092);
}

double NNfunction-NG_1::synapse0x20bb950() {
   return (neuron0x209daa0()*0.0272955);
}

double NNfunction-NG_1::synapse0x20bb990() {
   return (neuron0x209dde0()*-0.0517671);
}

double NNfunction-NG_1::synapse0x20bb9d0() {
   return (neuron0x209e120()*0.371734);
}

double NNfunction-NG_1::synapse0x20bba10() {
   return (neuron0x209e460()*-0.00550929);
}

double NNfunction-NG_1::synapse0x20bba50() {
   return (neuron0x209e7a0()*-0.00899126);
}

double NNfunction-NG_1::synapse0x20bba90() {
   return (neuron0x209eae0()*-0.00959208);
}

double NNfunction-NG_1::synapse0x20bbad0() {
   return (neuron0x209ee20()*0.00348315);
}

double NNfunction-NG_1::synapse0x20bbb10() {
   return (neuron0x209f160()*0.00539292);
}

double NNfunction-NG_1::synapse0x20bbb50() {
   return (neuron0x209f4a0()*0.00439172);
}

double NNfunction-NG_1::synapse0x20bbb90() {
   return (neuron0x209f7e0()*0.00944709);
}

double NNfunction-NG_1::synapse0x20bbbd0() {
   return (neuron0x209fb20()*0.00626857);
}

double NNfunction-NG_1::synapse0x20bbc10() {
   return (neuron0x209fe60()*0.796463);
}

double NNfunction-NG_1::synapse0x20bbc50() {
   return (neuron0x20a01a0()*-0.150745);
}

double NNfunction-NG_1::synapse0x20bbc90() {
   return (neuron0x20a04e0()*-0.0205044);
}

double NNfunction-NG_1::synapse0x20bbcd0() {
   return (neuron0x20a0820()*-0.0519034);
}

double NNfunction-NG_1::synapse0x20bbd10() {
   return (neuron0x20a0b60()*-0.00137238);
}

double NNfunction-NG_1::synapse0x20bb7a0() {
   return (neuron0x20a0ea0()*0.018522);
}

double NNfunction-NG_1::synapse0x20bb7e0() {
   return (neuron0x20a1400()*-0.0740548);
}

double NNfunction-NG_1::synapse0x20bbe60() {
   return (neuron0x20a1620()*0.00947553);
}

double NNfunction-NG_1::synapse0x20bbea0() {
   return (neuron0x20a1960()*0.00133706);
}

double NNfunction-NG_1::synapse0x20bbee0() {
   return (neuron0x20a1ca0()*0.00442875);
}

double NNfunction-NG_1::synapse0x20bbf20() {
   return (neuron0x20a1fe0()*-0.0123599);
}

double NNfunction-NG_1::synapse0x20bbf60() {
   return (neuron0x20a2320()*0.00540556);
}

double NNfunction-NG_1::synapse0x20bbfa0() {
   return (neuron0x20a2660()*0.0298829);
}

double NNfunction-NG_1::synapse0x20bc320() {
   return (neuron0x209daa0()*0.0200042);
}

double NNfunction-NG_1::synapse0x20bc360() {
   return (neuron0x209dde0()*4.34028);
}

double NNfunction-NG_1::synapse0x20bc3a0() {
   return (neuron0x209e120()*0.343535);
}

double NNfunction-NG_1::synapse0x20bc3e0() {
   return (neuron0x209e460()*0.311022);
}

double NNfunction-NG_1::synapse0x20bc420() {
   return (neuron0x209e7a0()*0.0633397);
}

double NNfunction-NG_1::synapse0x20bc460() {
   return (neuron0x209eae0()*-0.0398334);
}

double NNfunction-NG_1::synapse0x20bc4a0() {
   return (neuron0x209ee20()*0.0199554);
}

double NNfunction-NG_1::synapse0x20bc4e0() {
   return (neuron0x209f160()*-0.0244748);
}

double NNfunction-NG_1::synapse0x20bc520() {
   return (neuron0x209f4a0()*0.0443842);
}

double NNfunction-NG_1::synapse0x20bc560() {
   return (neuron0x209f7e0()*-0.0254129);
}

double NNfunction-NG_1::synapse0x20bc5a0() {
   return (neuron0x209fb20()*0.0346104);
}

double NNfunction-NG_1::synapse0x20bc5e0() {
   return (neuron0x209fe60()*0.146681);
}

double NNfunction-NG_1::synapse0x20bc620() {
   return (neuron0x20a01a0()*0.137637);
}

double NNfunction-NG_1::synapse0x20bc660() {
   return (neuron0x20a04e0()*0.0130659);
}

double NNfunction-NG_1::synapse0x20bc6a0() {
   return (neuron0x20a0820()*-3.04514);
}

double NNfunction-NG_1::synapse0x20bc6e0() {
   return (neuron0x20a0b60()*-0.0171627);
}

double NNfunction-NG_1::synapse0x20bc170() {
   return (neuron0x20a0ea0()*-0.0252337);
}

double NNfunction-NG_1::synapse0x20bc1b0() {
   return (neuron0x20a1400()*0.310834);
}

double NNfunction-NG_1::synapse0x20bc830() {
   return (neuron0x20a1620()*0.0584451);
}

double NNfunction-NG_1::synapse0x20bc870() {
   return (neuron0x20a1960()*-0.0698918);
}

double NNfunction-NG_1::synapse0x20bc8b0() {
   return (neuron0x20a1ca0()*0.0708393);
}

double NNfunction-NG_1::synapse0x20bc8f0() {
   return (neuron0x20a1fe0()*-0.0620277);
}

double NNfunction-NG_1::synapse0x20bc930() {
   return (neuron0x20a2320()*-0.0205161);
}

double NNfunction-NG_1::synapse0x20bc970() {
   return (neuron0x20a2660()*-0.184212);
}

double NNfunction-NG_1::synapse0x20bccf0() {
   return (neuron0x209daa0()*0.00134251);
}

double NNfunction-NG_1::synapse0x20bcd30() {
   return (neuron0x209dde0()*0.0368034);
}

double NNfunction-NG_1::synapse0x20bcd70() {
   return (neuron0x209e120()*-0.0882961);
}

double NNfunction-NG_1::synapse0x20bcdb0() {
   return (neuron0x209e460()*1.67026);
}

double NNfunction-NG_1::synapse0x20bcdf0() {
   return (neuron0x209e7a0()*0.00528506);
}

double NNfunction-NG_1::synapse0x20bce30() {
   return (neuron0x209eae0()*-0.00347446);
}

double NNfunction-NG_1::synapse0x20bce70() {
   return (neuron0x209ee20()*0.0228092);
}

double NNfunction-NG_1::synapse0x20bceb0() {
   return (neuron0x209f160()*-0.00385942);
}

double NNfunction-NG_1::synapse0x20bcef0() {
   return (neuron0x209f4a0()*0.00132335);
}

double NNfunction-NG_1::synapse0x20bcf30() {
   return (neuron0x209f7e0()*0.0210981);
}

double NNfunction-NG_1::synapse0x20bcf70() {
   return (neuron0x209fb20()*-0.00376691);
}

double NNfunction-NG_1::synapse0x20bcfb0() {
   return (neuron0x209fe60()*0.0751907);
}

double NNfunction-NG_1::synapse0x20bcff0() {
   return (neuron0x20a01a0()*0.0807921);
}

double NNfunction-NG_1::synapse0x20bd030() {
   return (neuron0x20a04e0()*0.00894668);
}

double NNfunction-NG_1::synapse0x20bd070() {
   return (neuron0x20a0820()*0.0719685);
}

double NNfunction-NG_1::synapse0x20bd0b0() {
   return (neuron0x20a0b60()*0.0141948);
}

double NNfunction-NG_1::synapse0x20bcb40() {
   return (neuron0x20a0ea0()*0.0129122);
}

double NNfunction-NG_1::synapse0x20bcb80() {
   return (neuron0x20a1400()*0.0345201);
}

double NNfunction-NG_1::synapse0x20bd200() {
   return (neuron0x20a1620()*0.0202521);
}

double NNfunction-NG_1::synapse0x20bd240() {
   return (neuron0x20a1960()*-0.00235873);
}

double NNfunction-NG_1::synapse0x20bd280() {
   return (neuron0x20a1ca0()*0.0177565);
}

double NNfunction-NG_1::synapse0x20bd2c0() {
   return (neuron0x20a1fe0()*0.00536187);
}

double NNfunction-NG_1::synapse0x20bd300() {
   return (neuron0x20a2320()*-0.00499414);
}

double NNfunction-NG_1::synapse0x20bd340() {
   return (neuron0x20a2660()*-0.00219229);
}

double NNfunction-NG_1::synapse0x20bd6c0() {
   return (neuron0x209daa0()*-0.0356113);
}

double NNfunction-NG_1::synapse0x20bd700() {
   return (neuron0x209dde0()*13.1677);
}

double NNfunction-NG_1::synapse0x20bd740() {
   return (neuron0x209e120()*0.567348);
}

double NNfunction-NG_1::synapse0x20bd780() {
   return (neuron0x209e460()*0.0170874);
}

double NNfunction-NG_1::synapse0x20bd7c0() {
   return (neuron0x209e7a0()*-0.0185205);
}

double NNfunction-NG_1::synapse0x20bd800() {
   return (neuron0x209eae0()*0.00868364);
}

double NNfunction-NG_1::synapse0x20bd840() {
   return (neuron0x209ee20()*-0.0181181);
}

double NNfunction-NG_1::synapse0x20bd880() {
   return (neuron0x209f160()*0.0203254);
}

double NNfunction-NG_1::synapse0x20bd8c0() {
   return (neuron0x209f4a0()*0.00810289);
}

double NNfunction-NG_1::synapse0x20bd900() {
   return (neuron0x209f7e0()*-0.0142677);
}

double NNfunction-NG_1::synapse0x20bd940() {
   return (neuron0x209fb20()*0.00649412);
}

double NNfunction-NG_1::synapse0x20bd980() {
   return (neuron0x209fe60()*0.152588);
}

double NNfunction-NG_1::synapse0x20bd9c0() {
   return (neuron0x20a01a0()*-0.026216);
}

double NNfunction-NG_1::synapse0x20bda00() {
   return (neuron0x20a04e0()*-0.0255443);
}

double NNfunction-NG_1::synapse0x20bda40() {
   return (neuron0x20a0820()*-0.130869);
}

double NNfunction-NG_1::synapse0x20bda80() {
   return (neuron0x20a0b60()*-0.0127645);
}

double NNfunction-NG_1::synapse0x20bd510() {
   return (neuron0x20a0ea0()*0.0166906);
}

double NNfunction-NG_1::synapse0x20bd550() {
   return (neuron0x20a1400()*-0.0619183);
}

double NNfunction-NG_1::synapse0x20bdbd0() {
   return (neuron0x20a1620()*-0.0204794);
}

double NNfunction-NG_1::synapse0x20bdc10() {
   return (neuron0x20a1960()*0.0159399);
}

double NNfunction-NG_1::synapse0x20bdc50() {
   return (neuron0x20a1ca0()*-0.0406575);
}

double NNfunction-NG_1::synapse0x20bdc90() {
   return (neuron0x20a1fe0()*0.0289347);
}

double NNfunction-NG_1::synapse0x20bdcd0() {
   return (neuron0x20a2320()*0.0235978);
}

double NNfunction-NG_1::synapse0x20bdd10() {
   return (neuron0x20a2660()*-0.0465758);
}

double NNfunction-NG_1::synapse0x20be090() {
   return (neuron0x209daa0()*-0.0279957);
}

double NNfunction-NG_1::synapse0x20be0d0() {
   return (neuron0x209dde0()*0.0724906);
}

double NNfunction-NG_1::synapse0x20be110() {
   return (neuron0x209e120()*-0.36607);
}

double NNfunction-NG_1::synapse0x20be150() {
   return (neuron0x209e460()*-5.77751);
}

double NNfunction-NG_1::synapse0x20be190() {
   return (neuron0x209e7a0()*-0.0139787);
}

double NNfunction-NG_1::synapse0x20be1d0() {
   return (neuron0x209eae0()*0.0639482);
}

double NNfunction-NG_1::synapse0x20be210() {
   return (neuron0x209ee20()*-0.0598234);
}

double NNfunction-NG_1::synapse0x20be250() {
   return (neuron0x209f160()*0.0137735);
}

double NNfunction-NG_1::synapse0x20be290() {
   return (neuron0x209f4a0()*0.0524304);
}

double NNfunction-NG_1::synapse0x20be2d0() {
   return (neuron0x209f7e0()*-0.0214452);
}

double NNfunction-NG_1::synapse0x20be310() {
   return (neuron0x209fb20()*0.0304416);
}

double NNfunction-NG_1::synapse0x20be350() {
   return (neuron0x209fe60()*0.0452708);
}

double NNfunction-NG_1::synapse0x20be390() {
   return (neuron0x20a01a0()*0.0693351);
}

double NNfunction-NG_1::synapse0x20be3d0() {
   return (neuron0x20a04e0()*0.0128526);
}

double NNfunction-NG_1::synapse0x20be410() {
   return (neuron0x20a0820()*0.19499);
}

double NNfunction-NG_1::synapse0x20be450() {
   return (neuron0x20a0b60()*0.0954371);
}

double NNfunction-NG_1::synapse0x20bdee0() {
   return (neuron0x20a0ea0()*0.0205262);
}

double NNfunction-NG_1::synapse0x20bdf20() {
   return (neuron0x20a1400()*-0.0872663);
}

double NNfunction-NG_1::synapse0x20be5a0() {
   return (neuron0x20a1620()*-0.0631788);
}

double NNfunction-NG_1::synapse0x20be5e0() {
   return (neuron0x20a1960()*-0.0273535);
}

double NNfunction-NG_1::synapse0x20be620() {
   return (neuron0x20a1ca0()*-0.0816405);
}

double NNfunction-NG_1::synapse0x20be660() {
   return (neuron0x20a1fe0()*-0.00026468);
}

double NNfunction-NG_1::synapse0x20be6a0() {
   return (neuron0x20a2320()*-0.0250098);
}

double NNfunction-NG_1::synapse0x20be6e0() {
   return (neuron0x20a2660()*0.00588862);
}

double NNfunction-NG_1::synapse0x20bea60() {
   return (neuron0x209daa0()*0.00274577);
}

double NNfunction-NG_1::synapse0x20beaa0() {
   return (neuron0x209dde0()*-0.202829);
}

double NNfunction-NG_1::synapse0x20beae0() {
   return (neuron0x209e120()*-0.285762);
}

double NNfunction-NG_1::synapse0x20beb20() {
   return (neuron0x209e460()*-0.0558947);
}

double NNfunction-NG_1::synapse0x20beb60() {
   return (neuron0x209e7a0()*0.0341173);
}

double NNfunction-NG_1::synapse0x20beba0() {
   return (neuron0x209eae0()*0.0354768);
}

double NNfunction-NG_1::synapse0x20bebe0() {
   return (neuron0x209ee20()*0.0360668);
}

double NNfunction-NG_1::synapse0x20bec20() {
   return (neuron0x209f160()*0.0593241);
}

double NNfunction-NG_1::synapse0x20bec60() {
   return (neuron0x209f4a0()*-0.0914921);
}

double NNfunction-NG_1::synapse0x20beca0() {
   return (neuron0x209f7e0()*-0.0214783);
}

double NNfunction-NG_1::synapse0x20bece0() {
   return (neuron0x209fb20()*-0.0131877);
}

double NNfunction-NG_1::synapse0x20bed20() {
   return (neuron0x209fe60()*-1.04932);
}

double NNfunction-NG_1::synapse0x20bed60() {
   return (neuron0x20a01a0()*-0.291743);
}

double NNfunction-NG_1::synapse0x20beda0() {
   return (neuron0x20a04e0()*-0.0103748);
}

double NNfunction-NG_1::synapse0x20bede0() {
   return (neuron0x20a0820()*-0.198692);
}

double NNfunction-NG_1::synapse0x20bee20() {
   return (neuron0x20a0b60()*-0.0463264);
}

double NNfunction-NG_1::synapse0x20be8b0() {
   return (neuron0x20a0ea0()*-0.0436887);
}

double NNfunction-NG_1::synapse0x20be8f0() {
   return (neuron0x20a1400()*0.374109);
}

double NNfunction-NG_1::synapse0x20bef70() {
   return (neuron0x20a1620()*0.0697408);
}

double NNfunction-NG_1::synapse0x20befb0() {
   return (neuron0x20a1960()*-0.042606);
}

double NNfunction-NG_1::synapse0x20beff0() {
   return (neuron0x20a1ca0()*0.0182063);
}

double NNfunction-NG_1::synapse0x20bf030() {
   return (neuron0x20a1fe0()*-0.0104694);
}

double NNfunction-NG_1::synapse0x20bf070() {
   return (neuron0x20a2320()*-0.028076);
}

double NNfunction-NG_1::synapse0x20bf0b0() {
   return (neuron0x20a2660()*0.0980273);
}

double NNfunction-NG_1::synapse0x20a7b60() {
   return (neuron0x209daa0()*-0.0828768);
}

double NNfunction-NG_1::synapse0x20a7ba0() {
   return (neuron0x209dde0()*-0.00150139);
}

double NNfunction-NG_1::synapse0x20a7be0() {
   return (neuron0x209e120()*-2.23499);
}

double NNfunction-NG_1::synapse0x20a7c20() {
   return (neuron0x209e460()*-0.00605067);
}

double NNfunction-NG_1::synapse0x20a7c60() {
   return (neuron0x209e7a0()*-0.00744054);
}

double NNfunction-NG_1::synapse0x20a7ca0() {
   return (neuron0x209eae0()*0.000879445);
}

double NNfunction-NG_1::synapse0x20a7ce0() {
   return (neuron0x209ee20()*0.00364788);
}

double NNfunction-NG_1::synapse0x20a7d20() {
   return (neuron0x209f160()*0.0120855);
}

double NNfunction-NG_1::synapse0x20bf840() {
   return (neuron0x209f4a0()*0.00206224);
}

double NNfunction-NG_1::synapse0x20bf880() {
   return (neuron0x209f7e0()*0.0423618);
}

double NNfunction-NG_1::synapse0x20bf8c0() {
   return (neuron0x209fb20()*0.0273047);
}

double NNfunction-NG_1::synapse0x20bf900() {
   return (neuron0x209fe60()*-0.0195573);
}

double NNfunction-NG_1::synapse0x20bf940() {
   return (neuron0x20a01a0()*0.0208271);
}

double NNfunction-NG_1::synapse0x20bf980() {
   return (neuron0x20a04e0()*-0.0291253);
}

double NNfunction-NG_1::synapse0x20bf9c0() {
   return (neuron0x20a0820()*-0.0845687);
}

double NNfunction-NG_1::synapse0x20bfa00() {
   return (neuron0x20a0b60()*-0.0325364);
}

double NNfunction-NG_1::synapse0x20bf280() {
   return (neuron0x20a0ea0()*0.0238203);
}

double NNfunction-NG_1::synapse0x20bf2c0() {
   return (neuron0x20a1400()*0.05751);
}

double NNfunction-NG_1::synapse0x20bfb50() {
   return (neuron0x20a1620()*-0.0265314);
}

double NNfunction-NG_1::synapse0x20bfb90() {
   return (neuron0x20a1960()*-0.0172993);
}

double NNfunction-NG_1::synapse0x20bfbd0() {
   return (neuron0x20a1ca0()*0.00182031);
}

double NNfunction-NG_1::synapse0x20bfc10() {
   return (neuron0x20a1fe0()*0.00547656);
}

double NNfunction-NG_1::synapse0x20bfc50() {
   return (neuron0x20a2320()*0.0192074);
}

double NNfunction-NG_1::synapse0x20bfc90() {
   return (neuron0x20a2660()*-5.37596);
}

double NNfunction-NG_1::synapse0x20c0010() {
   return (neuron0x209daa0()*0.00241702);
}

double NNfunction-NG_1::synapse0x20c0050() {
   return (neuron0x209dde0()*0.0396903);
}

double NNfunction-NG_1::synapse0x20c0090() {
   return (neuron0x209e120()*0.158062);
}

double NNfunction-NG_1::synapse0x20c00d0() {
   return (neuron0x209e460()*0.707288);
}

double NNfunction-NG_1::synapse0x20c0110() {
   return (neuron0x209e7a0()*-0.000806488);
}

double NNfunction-NG_1::synapse0x20c0150() {
   return (neuron0x209eae0()*0.0127546);
}

double NNfunction-NG_1::synapse0x20c0190() {
   return (neuron0x209ee20()*0.00166878);
}

double NNfunction-NG_1::synapse0x20c01d0() {
   return (neuron0x209f160()*0.00869082);
}

double NNfunction-NG_1::synapse0x20c0210() {
   return (neuron0x209f4a0()*-0.00463121);
}

double NNfunction-NG_1::synapse0x20c0250() {
   return (neuron0x209f7e0()*-0.0167962);
}

double NNfunction-NG_1::synapse0x20c0290() {
   return (neuron0x209fb20()*0.0108247);
}

double NNfunction-NG_1::synapse0x20c02d0() {
   return (neuron0x209fe60()*0.0615145);
}

double NNfunction-NG_1::synapse0x20c0310() {
   return (neuron0x20a01a0()*0.0437807);
}

double NNfunction-NG_1::synapse0x20c0350() {
   return (neuron0x20a04e0()*0.0169382);
}

double NNfunction-NG_1::synapse0x20c0390() {
   return (neuron0x20a0820()*0.0104976);
}

double NNfunction-NG_1::synapse0x20c03d0() {
   return (neuron0x20a0b60()*0.0133399);
}

double NNfunction-NG_1::synapse0x20bfe60() {
   return (neuron0x20a0ea0()*-0.00240524);
}

double NNfunction-NG_1::synapse0x20bfea0() {
   return (neuron0x20a1400()*0.0167797);
}

double NNfunction-NG_1::synapse0x20c0520() {
   return (neuron0x20a1620()*-0.00607293);
}

double NNfunction-NG_1::synapse0x20c0560() {
   return (neuron0x20a1960()*0.00730098);
}

double NNfunction-NG_1::synapse0x20c05a0() {
   return (neuron0x20a1ca0()*0.00926529);
}

double NNfunction-NG_1::synapse0x20c05e0() {
   return (neuron0x20a1fe0()*0.0115324);
}

double NNfunction-NG_1::synapse0x20c0620() {
   return (neuron0x20a2320()*0.00424142);
}

double NNfunction-NG_1::synapse0x20c0660() {
   return (neuron0x20a2660()*-0.0669205);
}

double NNfunction-NG_1::synapse0x20c09e0() {
   return (neuron0x209daa0()*0.0271641);
}

double NNfunction-NG_1::synapse0x20c0a20() {
   return (neuron0x209dde0()*1.77506);
}

double NNfunction-NG_1::synapse0x20c0a60() {
   return (neuron0x209e120()*0.106548);
}

double NNfunction-NG_1::synapse0x20c0aa0() {
   return (neuron0x209e460()*0.127737);
}

double NNfunction-NG_1::synapse0x20c0ae0() {
   return (neuron0x209e7a0()*-0.0547157);
}

double NNfunction-NG_1::synapse0x20c0b20() {
   return (neuron0x209eae0()*-0.0107426);
}

double NNfunction-NG_1::synapse0x20c0b60() {
   return (neuron0x209ee20()*0.0149382);
}

double NNfunction-NG_1::synapse0x20c0ba0() {
   return (neuron0x209f160()*0.0381667);
}

double NNfunction-NG_1::synapse0x20c0be0() {
   return (neuron0x209f4a0()*0.10144);
}

double NNfunction-NG_1::synapse0x20c0c20() {
   return (neuron0x209f7e0()*-0.0213847);
}

double NNfunction-NG_1::synapse0x20c0c60() {
   return (neuron0x209fb20()*0.0493606);
}

double NNfunction-NG_1::synapse0x20c0ca0() {
   return (neuron0x209fe60()*-0.273491);
}

double NNfunction-NG_1::synapse0x20c0ce0() {
   return (neuron0x20a01a0()*-0.142951);
}

double NNfunction-NG_1::synapse0x20c0d20() {
   return (neuron0x20a04e0()*0.116031);
}

double NNfunction-NG_1::synapse0x20c0d60() {
   return (neuron0x20a0820()*1.15348);
}

double NNfunction-NG_1::synapse0x20c0da0() {
   return (neuron0x20a0b60()*0.0383216);
}

double NNfunction-NG_1::synapse0x20c0830() {
   return (neuron0x20a0ea0()*0.0241064);
}

double NNfunction-NG_1::synapse0x20c0870() {
   return (neuron0x20a1400()*-1.39108);
}

double NNfunction-NG_1::synapse0x20b13a0() {
   return (neuron0x20a1620()*-0.0446349);
}

double NNfunction-NG_1::synapse0x20b13e0() {
   return (neuron0x20a1960()*-0.130482);
}

double NNfunction-NG_1::synapse0x20b1420() {
   return (neuron0x20a1ca0()*0.0821819);
}

double NNfunction-NG_1::synapse0x20b1460() {
   return (neuron0x20a1fe0()*-0.056271);
}

double NNfunction-NG_1::synapse0x20b14a0() {
   return (neuron0x20a2320()*0.0758728);
}

double NNfunction-NG_1::synapse0x20b14e0() {
   return (neuron0x20a2660()*-0.0103661);
}

double NNfunction-NG_1::synapse0x20b1860() {
   return (neuron0x209daa0()*0.0178002);
}

double NNfunction-NG_1::synapse0x20b18a0() {
   return (neuron0x209dde0()*-0.081213);
}

double NNfunction-NG_1::synapse0x20b18e0() {
   return (neuron0x209e120()*0.03384);
}

double NNfunction-NG_1::synapse0x20b1920() {
   return (neuron0x209e460()*1.89444);
}

double NNfunction-NG_1::synapse0x20b1960() {
   return (neuron0x209e7a0()*-0.00531201);
}

double NNfunction-NG_1::synapse0x20b19a0() {
   return (neuron0x209eae0()*-0.0072312);
}

double NNfunction-NG_1::synapse0x20b19e0() {
   return (neuron0x209ee20()*-0.0121326);
}

double NNfunction-NG_1::synapse0x20b1a20() {
   return (neuron0x209f160()*-0.00990874);
}

double NNfunction-NG_1::synapse0x20b1a60() {
   return (neuron0x209f4a0()*0.0155529);
}

double NNfunction-NG_1::synapse0x20b1aa0() {
   return (neuron0x209f7e0()*0.00985649);
}

double NNfunction-NG_1::synapse0x20b1ae0() {
   return (neuron0x209fb20()*-0.0128575);
}

double NNfunction-NG_1::synapse0x20b1b20() {
   return (neuron0x209fe60()*-0.0285436);
}

double NNfunction-NG_1::synapse0x20b1b60() {
   return (neuron0x20a01a0()*-0.0381567);
}

double NNfunction-NG_1::synapse0x20b1ba0() {
   return (neuron0x20a04e0()*-0.0303156);
}

double NNfunction-NG_1::synapse0x20b1be0() {
   return (neuron0x20a0820()*-0.0812675);
}

double NNfunction-NG_1::synapse0x20b1c20() {
   return (neuron0x20a0b60()*-0.0320361);
}

double NNfunction-NG_1::synapse0x20b16b0() {
   return (neuron0x20a0ea0()*0.00742935);
}

double NNfunction-NG_1::synapse0x20b16f0() {
   return (neuron0x20a1400()*-0.0531476);
}

double NNfunction-NG_1::synapse0x20b1d70() {
   return (neuron0x20a1620()*0.00481977);
}

double NNfunction-NG_1::synapse0x20b1db0() {
   return (neuron0x20a1960()*-0.0108165);
}

double NNfunction-NG_1::synapse0x20b1df0() {
   return (neuron0x20a1ca0()*-0.00774688);
}

double NNfunction-NG_1::synapse0x20b1e30() {
   return (neuron0x20a1fe0()*-0.00969262);
}

double NNfunction-NG_1::synapse0x20b1e70() {
   return (neuron0x20a2320()*-0.00329533);
}

double NNfunction-NG_1::synapse0x20b1eb0() {
   return (neuron0x20a2660()*0.0926388);
}

double NNfunction-NG_1::synapse0x20b2230() {
   return (neuron0x209daa0()*-0.0614539);
}

double NNfunction-NG_1::synapse0x20b2270() {
   return (neuron0x209dde0()*-0.00225891);
}

double NNfunction-NG_1::synapse0x20b22b0() {
   return (neuron0x209e120()*-0.0648984);
}

double NNfunction-NG_1::synapse0x20b22f0() {
   return (neuron0x209e460()*0.0333313);
}

double NNfunction-NG_1::synapse0x20b2330() {
   return (neuron0x209e7a0()*0.00632425);
}

double NNfunction-NG_1::synapse0x20b2370() {
   return (neuron0x209eae0()*-8.59138e-05);
}

double NNfunction-NG_1::synapse0x20b23b0() {
   return (neuron0x209ee20()*0.0176303);
}

double NNfunction-NG_1::synapse0x20b23f0() {
   return (neuron0x209f160()*0.0135098);
}

double NNfunction-NG_1::synapse0x20b2430() {
   return (neuron0x209f4a0()*-0.00616957);
}

double NNfunction-NG_1::synapse0x20b2470() {
   return (neuron0x209f7e0()*-0.00397456);
}

double NNfunction-NG_1::synapse0x20b24b0() {
   return (neuron0x209fb20()*-0.00925021);
}

double NNfunction-NG_1::synapse0x20b24f0() {
   return (neuron0x209fe60()*0.0630763);
}

double NNfunction-NG_1::synapse0x20b2530() {
   return (neuron0x20a01a0()*0.00464937);
}

double NNfunction-NG_1::synapse0x20b2570() {
   return (neuron0x20a04e0()*-0.00670239);
}

double NNfunction-NG_1::synapse0x20b25b0() {
   return (neuron0x20a0820()*-0.0941647);
}

double NNfunction-NG_1::synapse0x20b25f0() {
   return (neuron0x20a0b60()*-0.0280225);
}

double NNfunction-NG_1::synapse0x20b2080() {
   return (neuron0x20a0ea0()*0.00121382);
}

double NNfunction-NG_1::synapse0x20b20c0() {
   return (neuron0x20a1400()*-0.0188905);
}

double NNfunction-NG_1::synapse0x20b2740() {
   return (neuron0x20a1620()*-0.00993911);
}

double NNfunction-NG_1::synapse0x20b2780() {
   return (neuron0x20a1960()*0.0123499);
}

double NNfunction-NG_1::synapse0x20b27c0() {
   return (neuron0x20a1ca0()*-0.0177875);
}

double NNfunction-NG_1::synapse0x20b2800() {
   return (neuron0x20a1fe0()*0.0111515);
}

double NNfunction-NG_1::synapse0x20b2840() {
   return (neuron0x20a2320()*0.00482366);
}

double NNfunction-NG_1::synapse0x20b2880() {
   return (neuron0x20a2660()*-7.22797);
}

double NNfunction-NG_1::synapse0x20b2c00() {
   return (neuron0x209daa0()*-0.00535158);
}

double NNfunction-NG_1::synapse0x20b2c40() {
   return (neuron0x209dde0()*-0.0224336);
}

double NNfunction-NG_1::synapse0x20b2c80() {
   return (neuron0x209e120()*-0.0948194);
}

double NNfunction-NG_1::synapse0x20b2cc0() {
   return (neuron0x209e460()*2.20573);
}

double NNfunction-NG_1::synapse0x20b2d00() {
   return (neuron0x209e7a0()*-0.0409946);
}

double NNfunction-NG_1::synapse0x20b2d40() {
   return (neuron0x209eae0()*0.023281);
}

double NNfunction-NG_1::synapse0x20b2d80() {
   return (neuron0x209ee20()*-0.0467629);
}

double NNfunction-NG_1::synapse0x20b2dc0() {
   return (neuron0x209f160()*-0.0146283);
}

double NNfunction-NG_1::synapse0x20b2e00() {
   return (neuron0x209f4a0()*0.042705);
}

double NNfunction-NG_1::synapse0x20b2e40() {
   return (neuron0x209f7e0()*-0.0437551);
}

double NNfunction-NG_1::synapse0x20b2e80() {
   return (neuron0x209fb20()*-0.0676352);
}

double NNfunction-NG_1::synapse0x20b2ec0() {
   return (neuron0x209fe60()*-3.81984);
}

double NNfunction-NG_1::synapse0x20b2f00() {
   return (neuron0x20a01a0()*0.294585);
}

double NNfunction-NG_1::synapse0x20b2f40() {
   return (neuron0x20a04e0()*-0.121997);
}

double NNfunction-NG_1::synapse0x20b2f80() {
   return (neuron0x20a0820()*0.0801758);
}

double NNfunction-NG_1::synapse0x20b2fc0() {
   return (neuron0x20a0b60()*-0.0594285);
}

double NNfunction-NG_1::synapse0x20b2a50() {
   return (neuron0x20a0ea0()*-0.0603686);
}

double NNfunction-NG_1::synapse0x20b2a90() {
   return (neuron0x20a1400()*0.0133853);
}

double NNfunction-NG_1::synapse0x20b3110() {
   return (neuron0x20a1620()*0.00483466);
}

double NNfunction-NG_1::synapse0x20b3150() {
   return (neuron0x20a1960()*-0.0436502);
}

double NNfunction-NG_1::synapse0x20b3190() {
   return (neuron0x20a1ca0()*0.0746477);
}

double NNfunction-NG_1::synapse0x20b31d0() {
   return (neuron0x20a1fe0()*-0.0641818);
}

double NNfunction-NG_1::synapse0x20b3210() {
   return (neuron0x20a2320()*0.0152121);
}

double NNfunction-NG_1::synapse0x20b3250() {
   return (neuron0x20a2660()*0.780739);
}

double NNfunction-NG_1::synapse0x20c5120() {
   return (neuron0x209daa0()*-0.0322278);
}

double NNfunction-NG_1::synapse0x20c5160() {
   return (neuron0x209dde0()*0.00281111);
}

double NNfunction-NG_1::synapse0x20c51a0() {
   return (neuron0x209e120()*0.180963);
}

double NNfunction-NG_1::synapse0x20c51e0() {
   return (neuron0x209e460()*0.107999);
}

double NNfunction-NG_1::synapse0x20c5220() {
   return (neuron0x209e7a0()*-0.0406598);
}

double NNfunction-NG_1::synapse0x20c5260() {
   return (neuron0x209eae0()*-0.0164552);
}

double NNfunction-NG_1::synapse0x20c52a0() {
   return (neuron0x209ee20()*-0.0778981);
}

double NNfunction-NG_1::synapse0x20c52e0() {
   return (neuron0x209f160()*-0.0372836);
}

double NNfunction-NG_1::synapse0x20c5320() {
   return (neuron0x209f4a0()*0.0345973);
}

double NNfunction-NG_1::synapse0x20c5360() {
   return (neuron0x209f7e0()*-0.00141154);
}

double NNfunction-NG_1::synapse0x20c53a0() {
   return (neuron0x209fb20()*0.0408502);
}

double NNfunction-NG_1::synapse0x20c53e0() {
   return (neuron0x209fe60()*0.191167);
}

double NNfunction-NG_1::synapse0x20c5420() {
   return (neuron0x20a01a0()*0.150781);
}

double NNfunction-NG_1::synapse0x20c5460() {
   return (neuron0x20a04e0()*0.0178125);
}

double NNfunction-NG_1::synapse0x20c54a0() {
   return (neuron0x20a0820()*-3.08786);
}

double NNfunction-NG_1::synapse0x20c54e0() {
   return (neuron0x20a0b60()*-0.0467054);
}

double NNfunction-NG_1::synapse0x20b3290() {
   return (neuron0x20a0ea0()*-0.0184244);
}

double NNfunction-NG_1::synapse0x20b32d0() {
   return (neuron0x20a1400()*0.20486);
}

double NNfunction-NG_1::synapse0x20c5630() {
   return (neuron0x20a1620()*0.0171159);
}

double NNfunction-NG_1::synapse0x20c5670() {
   return (neuron0x20a1960()*0.0359534);
}

double NNfunction-NG_1::synapse0x20c56b0() {
   return (neuron0x20a1ca0()*0.0150174);
}

double NNfunction-NG_1::synapse0x20c56f0() {
   return (neuron0x20a1fe0()*0.0274527);
}

double NNfunction-NG_1::synapse0x20c5730() {
   return (neuron0x20a2320()*0.0358309);
}

double NNfunction-NG_1::synapse0x20c5770() {
   return (neuron0x20a2660()*0.0704227);
}

double NNfunction-NG_1::synapse0x20c5af0() {
   return (neuron0x209daa0()*0.127735);
}

double NNfunction-NG_1::synapse0x20c5b30() {
   return (neuron0x209dde0()*0.644657);
}

double NNfunction-NG_1::synapse0x20c5b70() {
   return (neuron0x209e120()*-1.31326);
}

double NNfunction-NG_1::synapse0x20c5bb0() {
   return (neuron0x209e460()*0.129975);
}

double NNfunction-NG_1::synapse0x20c5bf0() {
   return (neuron0x209e7a0()*-0.0551321);
}

double NNfunction-NG_1::synapse0x20c5c30() {
   return (neuron0x209eae0()*0.0585878);
}

double NNfunction-NG_1::synapse0x20c5c70() {
   return (neuron0x209ee20()*0.0614187);
}

double NNfunction-NG_1::synapse0x20c5cb0() {
   return (neuron0x209f160()*-0.010493);
}

double NNfunction-NG_1::synapse0x20c5cf0() {
   return (neuron0x209f4a0()*-0.0481414);
}

double NNfunction-NG_1::synapse0x20c5d30() {
   return (neuron0x209f7e0()*0.00537414);
}

double NNfunction-NG_1::synapse0x20c5d70() {
   return (neuron0x209fb20()*-0.0443162);
}

double NNfunction-NG_1::synapse0x20c5db0() {
   return (neuron0x209fe60()*0.113288);
}

double NNfunction-NG_1::synapse0x20c5df0() {
   return (neuron0x20a01a0()*-0.0632694);
}

double NNfunction-NG_1::synapse0x20c5e30() {
   return (neuron0x20a04e0()*-0.135466);
}

double NNfunction-NG_1::synapse0x20c5e70() {
   return (neuron0x20a0820()*0.0574091);
}

double NNfunction-NG_1::synapse0x20c5eb0() {
   return (neuron0x20a0b60()*-0.0237125);
}

double NNfunction-NG_1::synapse0x20c5940() {
   return (neuron0x20a0ea0()*-0.0131675);
}

double NNfunction-NG_1::synapse0x20c5980() {
   return (neuron0x20a1400()*-0.0735711);
}

double NNfunction-NG_1::synapse0x20c6000() {
   return (neuron0x20a1620()*-0.0122249);
}

double NNfunction-NG_1::synapse0x20c6040() {
   return (neuron0x20a1960()*-0.0353707);
}

double NNfunction-NG_1::synapse0x20c6080() {
   return (neuron0x20a1ca0()*-0.0592223);
}

double NNfunction-NG_1::synapse0x20c60c0() {
   return (neuron0x20a1fe0()*-0.00482815);
}

double NNfunction-NG_1::synapse0x20c6100() {
   return (neuron0x20a2320()*0.0859812);
}

double NNfunction-NG_1::synapse0x20c6140() {
   return (neuron0x20a2660()*2.40063);
}

double NNfunction-NG_1::synapse0x20c64c0() {
   return (neuron0x209daa0()*-0.0343416);
}

double NNfunction-NG_1::synapse0x20c6500() {
   return (neuron0x209dde0()*0.0196335);
}

double NNfunction-NG_1::synapse0x20c6540() {
   return (neuron0x209e120()*0.136251);
}

double NNfunction-NG_1::synapse0x20c6580() {
   return (neuron0x209e460()*-0.0148465);
}

double NNfunction-NG_1::synapse0x20c65c0() {
   return (neuron0x209e7a0()*0.00395975);
}

double NNfunction-NG_1::synapse0x20c6600() {
   return (neuron0x209eae0()*-0.00215457);
}

double NNfunction-NG_1::synapse0x20c6640() {
   return (neuron0x209ee20()*0.00163689);
}

double NNfunction-NG_1::synapse0x20c6680() {
   return (neuron0x209f160()*-0.00230339);
}

double NNfunction-NG_1::synapse0x20c66c0() {
   return (neuron0x209f4a0()*-0.00404905);
}

double NNfunction-NG_1::synapse0x20c6700() {
   return (neuron0x209f7e0()*0.000105897);
}

double NNfunction-NG_1::synapse0x20c6740() {
   return (neuron0x209fb20()*-0.00460748);
}

double NNfunction-NG_1::synapse0x20c6780() {
   return (neuron0x209fe60()*0.0244635);
}

double NNfunction-NG_1::synapse0x20c67c0() {
   return (neuron0x20a01a0()*0.00785422);
}

double NNfunction-NG_1::synapse0x20c6800() {
   return (neuron0x20a04e0()*-0.00348514);
}

double NNfunction-NG_1::synapse0x20c6840() {
   return (neuron0x20a0820()*-0.0047909);
}

double NNfunction-NG_1::synapse0x20c6880() {
   return (neuron0x20a0b60()*-0.0130106);
}

double NNfunction-NG_1::synapse0x20c6310() {
   return (neuron0x20a0ea0()*0.00410972);
}

double NNfunction-NG_1::synapse0x20c6350() {
   return (neuron0x20a1400()*-0.00991579);
}

double NNfunction-NG_1::synapse0x20c69d0() {
   return (neuron0x20a1620()*0.00351157);
}

double NNfunction-NG_1::synapse0x20c6a10() {
   return (neuron0x20a1960()*0.00665768);
}

double NNfunction-NG_1::synapse0x20c6a50() {
   return (neuron0x20a1ca0()*-0.00356803);
}

double NNfunction-NG_1::synapse0x20c6a90() {
   return (neuron0x20a1fe0()*0.0144878);
}

double NNfunction-NG_1::synapse0x20c6ad0() {
   return (neuron0x20a2320()*-0.00106759);
}

double NNfunction-NG_1::synapse0x20c6b10() {
   return (neuron0x20a2660()*-21.1776);
}

double NNfunction-NG_1::synapse0x20c6e90() {
   return (neuron0x209daa0()*0.0517791);
}

double NNfunction-NG_1::synapse0x20c6ed0() {
   return (neuron0x209dde0()*2.51555);
}

double NNfunction-NG_1::synapse0x20c6f10() {
   return (neuron0x209e120()*0.453498);
}

double NNfunction-NG_1::synapse0x20c6f50() {
   return (neuron0x209e460()*0.199461);
}

double NNfunction-NG_1::synapse0x20c6f90() {
   return (neuron0x209e7a0()*0.00462711);
}

double NNfunction-NG_1::synapse0x20c6fd0() {
   return (neuron0x209eae0()*0.0685144);
}

double NNfunction-NG_1::synapse0x20c7010() {
   return (neuron0x209ee20()*0.00756875);
}

double NNfunction-NG_1::synapse0x20c7050() {
   return (neuron0x209f160()*-0.0322817);
}

double NNfunction-NG_1::synapse0x20c7090() {
   return (neuron0x209f4a0()*-0.0284876);
}

double NNfunction-NG_1::synapse0x20c70d0() {
   return (neuron0x209f7e0()*-0.0150394);
}

double NNfunction-NG_1::synapse0x20c7110() {
   return (neuron0x209fb20()*-0.00870514);
}

double NNfunction-NG_1::synapse0x20c7150() {
   return (neuron0x209fe60()*-0.711942);
}

double NNfunction-NG_1::synapse0x20c7190() {
   return (neuron0x20a01a0()*0.0513365);
}

double NNfunction-NG_1::synapse0x20c71d0() {
   return (neuron0x20a04e0()*0.0182006);
}

double NNfunction-NG_1::synapse0x20c7210() {
   return (neuron0x20a0820()*-0.230316);
}

double NNfunction-NG_1::synapse0x20c7250() {
   return (neuron0x20a0b60()*0.00799501);
}

double NNfunction-NG_1::synapse0x20c6ce0() {
   return (neuron0x20a0ea0()*-0.0851266);
}

double NNfunction-NG_1::synapse0x20c6d20() {
   return (neuron0x20a1400()*-0.164599);
}

double NNfunction-NG_1::synapse0x20c73a0() {
   return (neuron0x20a1620()*-0.0454303);
}

double NNfunction-NG_1::synapse0x20c73e0() {
   return (neuron0x20a1960()*-0.0442831);
}

double NNfunction-NG_1::synapse0x20c7420() {
   return (neuron0x20a1ca0()*0.0935655);
}

double NNfunction-NG_1::synapse0x20c7460() {
   return (neuron0x20a1fe0()*-0.0218334);
}

double NNfunction-NG_1::synapse0x20c74a0() {
   return (neuron0x20a2320()*0.00104927);
}

double NNfunction-NG_1::synapse0x20c74e0() {
   return (neuron0x20a2660()*0.191302);
}

double NNfunction-NG_1::synapse0x1e5d860() {
   return (neuron0x20a2ad0()*-0.164169);
}

double NNfunction-NG_1::synapse0x1e5d8a0() {
   return (neuron0x20a3420()*-3.91426);
}

double NNfunction-NG_1::synapse0x20a4f90() {
   return (neuron0x20a3f00()*-1.2454);
}

double NNfunction-NG_1::synapse0x20a4fd0() {
   return (neuron0x20a39a0()*1.08297);
}

double NNfunction-NG_1::synapse0x20a5960() {
   return (neuron0x20a4ce0()*0.33304);
}

double NNfunction-NG_1::synapse0x20a59a0() {
   return (neuron0x20a56b0()*0.0472337);
}

double NNfunction-NG_1::synapse0x20a6730() {
   return (neuron0x20a6480()*-0.87858);
}

double NNfunction-NG_1::synapse0x20a6770() {
   return (neuron0x20a6e50()*0.00695101);
}

double NNfunction-NG_1::synapse0x20a7100() {
   return (neuron0x20a7820()*-4.35615);
}

double NNfunction-NG_1::synapse0x20a7140() {
   return (neuron0x20a8300()*0.546288);
}

double NNfunction-NG_1::synapse0x20a7ad0() {
   return (neuron0x20a8cd0()*1.6488);
}

double NNfunction-NG_1::synapse0x20a7b10() {
   return (neuron0x20a5db0()*1.30665);
}

double NNfunction-NG_1::synapse0x20a85b0() {
   return (neuron0x20aa880()*0.719583);
}

double NNfunction-NG_1::synapse0x20a85f0() {
   return (neuron0x20ab250()*-1.63613);
}

double NNfunction-NG_1::synapse0x20a8f80() {
   return (neuron0x20abc20()*0.729883);
}

double NNfunction-NG_1::synapse0x20a8fc0() {
   return (neuron0x20ac5f0()*-0.150828);
}

double NNfunction-NG_1::synapse0x20a6060() {
   return (neuron0x20ae400()*-0.260262);
}

double NNfunction-NG_1::synapse0x20a60a0() {
   return (neuron0x20ae6e0()*-1.11542);
}

double NNfunction-NG_1::synapse0x20aab30() {
   return (neuron0x20af0b0()*1.88255);
}

double NNfunction-NG_1::synapse0x20aab70() {
   return (neuron0x20afa80()*-2.19125);
}

double NNfunction-NG_1::synapse0x20ab500() {
   return (neuron0x20b0450()*-1.19345);
}

double NNfunction-NG_1::synapse0x20ab540() {
   return (neuron0x20b0e20()*1.95133);
}

double NNfunction-NG_1::synapse0x20abed0() {
   return (neuron0x20a9970()*0.150418);
}

double NNfunction-NG_1::synapse0x20abf10() {
   return (neuron0x20aa340()*-0.00362366);
}

double NNfunction-NG_1::synapse0x20ac8a0() {
   return (neuron0x20b3bb0()*2.75328);
}

double NNfunction-NG_1::synapse0x20ac8e0() {
   return (neuron0x20b4580()*-1.36899);
}

double NNfunction-NG_1::synapse0x20a0a40() {
   return (neuron0x20b4f50()*-0.486178);
}

double NNfunction-NG_1::synapse0x20a0a80() {
   return (neuron0x20b5920()*0.315349);
}

double NNfunction-NG_1::synapse0x20ae990() {
   return (neuron0x20b62f0()*-0.684011);
}

double NNfunction-NG_1::synapse0x20ae9d0() {
   return (neuron0x20b6cc0()*1.73458);
}

double NNfunction-NG_1::synapse0x20af360() {
   return (neuron0x20b7690()*0.27426);
}

double NNfunction-NG_1::synapse0x20af3a0() {
   return (neuron0x20b8060()*0.838152);
}

double NNfunction-NG_1::synapse0x20afd30() {
   return (neuron0x20ae0f0()*-0.105698);
}

double NNfunction-NG_1::synapse0x20afd70() {
   return (neuron0x20bac40()*-4.02195);
}

double NNfunction-NG_1::synapse0x20b0700() {
   return (neuron0x20bb610()*1.50168);
}

double NNfunction-NG_1::synapse0x20b0740() {
   return (neuron0x20bbfe0()*0.625991);
}

double NNfunction-NG_1::synapse0x20b10d0() {
   return (neuron0x20bc9b0()*0.278213);
}

double NNfunction-NG_1::synapse0x20b1110() {
   return (neuron0x20bd380()*3.44703);
}

double NNfunction-NG_1::synapse0x20a9c20() {
   return (neuron0x20bdd50()*0.948632);
}

double NNfunction-NG_1::synapse0x20a9c60() {
   return (neuron0x20be720()*1.33047);
}

double NNfunction-NG_1::synapse0x20b34d0() {
   return (neuron0x20bf0f0()*0.678715);
}

double NNfunction-NG_1::synapse0x20b3510() {
   return (neuron0x20bfcd0()*0.666257);
}

double NNfunction-NG_1::synapse0x20b3e60() {
   return (neuron0x20c06a0()*0.744749);
}

double NNfunction-NG_1::synapse0x20b3ea0() {
   return (neuron0x20b1520()*0.142131);
}

double NNfunction-NG_1::synapse0x20b4830() {
   return (neuron0x20b1ef0()*-1.60825);
}

double NNfunction-NG_1::synapse0x20b4870() {
   return (neuron0x20b28c0()*-0.517749);
}

double NNfunction-NG_1::synapse0x20b5200() {
   return (neuron0x20c4f00()*1.62033);
}

double NNfunction-NG_1::synapse0x20b5240() {
   return (neuron0x20c57b0()*0.059861);
}

double NNfunction-NG_1::synapse0x20b5bd0() {
   return (neuron0x20c6180()*-0.240311);
}

double NNfunction-NG_1::synapse0x20b5c10() {
   return (neuron0x20c6b50()*0.943515);
}

double NNfunction-NG_1::synapse0x20b8310() {
   return (neuron0x20a2ad0()*-0.994442);
}

double NNfunction-NG_1::synapse0x20b8350() {
   return (neuron0x20a3420()*-3.90582);
}

double NNfunction-NG_1::synapse0x20ad8d0() {
   return (neuron0x20a3f00()*0.318361);
}

double NNfunction-NG_1::synapse0x20ad910() {
   return (neuron0x20a39a0()*-0.328182);
}

double NNfunction-NG_1::synapse0x20baef0() {
   return (neuron0x20a4ce0()*-0.00292178);
}

double NNfunction-NG_1::synapse0x20baf30() {
   return (neuron0x20a56b0()*-0.179515);
}

double NNfunction-NG_1::synapse0x20bb8c0() {
   return (neuron0x20a6480()*-0.113084);
}

double NNfunction-NG_1::synapse0x20bb900() {
   return (neuron0x20a6e50()*-1.43541);
}

double NNfunction-NG_1::synapse0x20bc290() {
   return (neuron0x20a7820()*-2.9101);
}

double NNfunction-NG_1::synapse0x20bc2d0() {
   return (neuron0x20a8300()*0.0716537);
}

double NNfunction-NG_1::synapse0x20bcc60() {
   return (neuron0x20a8cd0()*0.151514);
}

double NNfunction-NG_1::synapse0x20bcca0() {
   return (neuron0x20a5db0()*3.29818);
}

double NNfunction-NG_1::synapse0x20bd630() {
   return (neuron0x20aa880()*2.55736);
}

double NNfunction-NG_1::synapse0x20bd670() {
   return (neuron0x20ab250()*-0.39007);
}

double NNfunction-NG_1::synapse0x20be000() {
   return (neuron0x20abc20()*1.333);
}

double NNfunction-NG_1::synapse0x20be040() {
   return (neuron0x20ac5f0()*-1.14387);
}

double NNfunction-NG_1::synapse0x20be9d0() {
   return (neuron0x20ae400()*-0.0710917);
}

double NNfunction-NG_1::synapse0x20bea10() {
   return (neuron0x20ae6e0()*1.77228);
}

double NNfunction-NG_1::synapse0x20bf3a0() {
   return (neuron0x20af0b0()*0.899341);
}

double NNfunction-NG_1::synapse0x20bf3e0() {
   return (neuron0x20afa80()*0.311166);
}

double NNfunction-NG_1::synapse0x20bff80() {
   return (neuron0x20b0450()*-2.75905);
}

double NNfunction-NG_1::synapse0x20bffc0() {
   return (neuron0x20b0e20()*6.52192);
}

double NNfunction-NG_1::synapse0x20c0950() {
   return (neuron0x20a9970()*-0.373739);
}

double NNfunction-NG_1::synapse0x20c0990() {
   return (neuron0x20aa340()*-1.14939);
}

double NNfunction-NG_1::synapse0x20b17d0() {
   return (neuron0x20b3bb0()*0.191787);
}

double NNfunction-NG_1::synapse0x20b1810() {
   return (neuron0x20b4580()*-8.27855);
}

double NNfunction-NG_1::synapse0x20b21a0() {
   return (neuron0x20b4f50()*-0.627609);
}

double NNfunction-NG_1::synapse0x20b21e0() {
   return (neuron0x20b5920()*0.724781);
}

double NNfunction-NG_1::synapse0x20b2b70() {
   return (neuron0x20b62f0()*-1.11002);
}

double NNfunction-NG_1::synapse0x20b2bb0() {
   return (neuron0x20b6cc0()*0.0158063);
}

double NNfunction-NG_1::synapse0x20c5090() {
   return (neuron0x20b7690()*0.131363);
}

double NNfunction-NG_1::synapse0x20c50d0() {
   return (neuron0x20b8060()*0.156671);
}

double NNfunction-NG_1::synapse0x20c5a60() {
   return (neuron0x20ae0f0()*-2.67815);
}

double NNfunction-NG_1::synapse0x20c5aa0() {
   return (neuron0x20bac40()*-7.00059);
}

double NNfunction-NG_1::synapse0x20c6430() {
   return (neuron0x20bb610()*-2.6313);
}

double NNfunction-NG_1::synapse0x20c6470() {
   return (neuron0x20bbfe0()*0.14479);
}

double NNfunction-NG_1::synapse0x20c6e00() {
   return (neuron0x20bc9b0()*-0.975026);
}

double NNfunction-NG_1::synapse0x20c6e40() {
   return (neuron0x20bd380()*4.74533);
}

double NNfunction-NG_1::synapse0x20a2cf0() {
   return (neuron0x20bdd50()*1.45207);
}

double NNfunction-NG_1::synapse0x20a2d30() {
   return (neuron0x20be720()*0.622099);
}

double NNfunction-NG_1::synapse0x20b65a0() {
   return (neuron0x20bf0f0()*3.11749);
}

double NNfunction-NG_1::synapse0x20b65e0() {
   return (neuron0x20bfcd0()*-0.858116);
}

double NNfunction-NG_1::synapse0x20c7520() {
   return (neuron0x20c06a0()*-0.0793479);
}

double NNfunction-NG_1::synapse0x20c7560() {
   return (neuron0x20b1520()*-0.16929);
}

double NNfunction-NG_1::synapse0x20c75a0() {
   return (neuron0x20b1ef0()*0.491396);
}

double NNfunction-NG_1::synapse0x20c75e0() {
   return (neuron0x20b28c0()*-0.96988);
}

double NNfunction-NG_1::synapse0x20ce490() {
   return (neuron0x20c4f00()*-0.70379);
}

double NNfunction-NG_1::synapse0x20ce4d0() {
   return (neuron0x20c57b0()*-0.184338);
}

double NNfunction-NG_1::synapse0x20ce510() {
   return (neuron0x20c6180()*4.21244);
}

double NNfunction-NG_1::synapse0x20ce550() {
   return (neuron0x20c6b50()*0.117664);
}

double NNfunction-NG_1::synapse0x20ce8d0() {
   return (neuron0x20a2ad0()*0.511181);
}

double NNfunction-NG_1::synapse0x20ce910() {
   return (neuron0x20a3420()*2.56188);
}

double NNfunction-NG_1::synapse0x20ce950() {
   return (neuron0x20a3f00()*-0.543623);
}

double NNfunction-NG_1::synapse0x20ce990() {
   return (neuron0x20a39a0()*0.385246);
}

double NNfunction-NG_1::synapse0x20ce9d0() {
   return (neuron0x20a4ce0()*-0.0543204);
}

double NNfunction-NG_1::synapse0x20cea10() {
   return (neuron0x20a56b0()*1.70108);
}

double NNfunction-NG_1::synapse0x20cea50() {
   return (neuron0x20a6480()*0.032761);
}

double NNfunction-NG_1::synapse0x20cea90() {
   return (neuron0x20a6e50()*0.98363);
}

double NNfunction-NG_1::synapse0x20cead0() {
   return (neuron0x20a7820()*3.31657);
}

double NNfunction-NG_1::synapse0x20ceb10() {
   return (neuron0x20a8300()*-0.0685032);
}

double NNfunction-NG_1::synapse0x20ceb50() {
   return (neuron0x20a8cd0()*-0.277714);
}

double NNfunction-NG_1::synapse0x20ceb90() {
   return (neuron0x20a5db0()*0.143757);
}

double NNfunction-NG_1::synapse0x20cebd0() {
   return (neuron0x20aa880()*-0.184661);
}

double NNfunction-NG_1::synapse0x20cec10() {
   return (neuron0x20ab250()*0.323615);
}

double NNfunction-NG_1::synapse0x20cec50() {
   return (neuron0x20abc20()*-1.46806);
}

double NNfunction-NG_1::synapse0x20cec90() {
   return (neuron0x20ac5f0()*0.818316);
}

double NNfunction-NG_1::synapse0x20ce720() {
   return (neuron0x20ae400()*0.0870718);
}

double NNfunction-NG_1::synapse0x20ce760() {
   return (neuron0x20ae6e0()*-1.90567);
}

double NNfunction-NG_1::synapse0x20cede0() {
   return (neuron0x20af0b0()*-0.339497);
}

double NNfunction-NG_1::synapse0x20cee20() {
   return (neuron0x20afa80()*-0.395386);
}

double NNfunction-NG_1::synapse0x20cee60() {
   return (neuron0x20b0450()*2.28053);
}

double NNfunction-NG_1::synapse0x20ceea0() {
   return (neuron0x20b0e20()*-2.46174);
}

double NNfunction-NG_1::synapse0x20ceee0() {
   return (neuron0x20a9970()*-0.600666);
}

double NNfunction-NG_1::synapse0x20cef20() {
   return (neuron0x20aa340()*0.622469);
}

double NNfunction-NG_1::synapse0x20cef60() {
   return (neuron0x20b3bb0()*0.47512);
}

double NNfunction-NG_1::synapse0x20cefa0() {
   return (neuron0x20b4580()*-3.70653);
}

double NNfunction-NG_1::synapse0x20cefe0() {
   return (neuron0x20b4f50()*0.728609);
}

double NNfunction-NG_1::synapse0x20cf020() {
   return (neuron0x20b5920()*-0.406912);
}

double NNfunction-NG_1::synapse0x20cf060() {
   return (neuron0x20b62f0()*0.69236);
}

double NNfunction-NG_1::synapse0x20cf0a0() {
   return (neuron0x20b6cc0()*-0.266518);
}

double NNfunction-NG_1::synapse0x20cf0e0() {
   return (neuron0x20b7690()*-0.141908);
}

double NNfunction-NG_1::synapse0x20cf120() {
   return (neuron0x20b8060()*0.0164792);
}

double NNfunction-NG_1::synapse0x20cecd0() {
   return (neuron0x20ae0f0()*3.06642);
}

double NNfunction-NG_1::synapse0x20ced10() {
   return (neuron0x20bac40()*5.65578);
}

double NNfunction-NG_1::synapse0x20ced50() {
   return (neuron0x20bb610()*2.18684);
}

double NNfunction-NG_1::synapse0x20ced90() {
   return (neuron0x20bbfe0()*-0.202062);
}

double NNfunction-NG_1::synapse0x20cf370() {
   return (neuron0x20bc9b0()*0.0591207);
}

double NNfunction-NG_1::synapse0x20cf3b0() {
   return (neuron0x20bd380()*-5.63922);
}

double NNfunction-NG_1::synapse0x20cf3f0() {
   return (neuron0x20bdd50()*-1.2961);
}

double NNfunction-NG_1::synapse0x20cf430() {
   return (neuron0x20be720()*-0.631666);
}

double NNfunction-NG_1::synapse0x20cf470() {
   return (neuron0x20bf0f0()*-3.5404);
}

double NNfunction-NG_1::synapse0x20cf4b0() {
   return (neuron0x20bfcd0()*0.637584);
}

double NNfunction-NG_1::synapse0x20cf4f0() {
   return (neuron0x20c06a0()*-0.0504001);
}

double NNfunction-NG_1::synapse0x20cf530() {
   return (neuron0x20b1520()*0.434324);
}

double NNfunction-NG_1::synapse0x20cf570() {
   return (neuron0x20b1ef0()*1.00903);
}

double NNfunction-NG_1::synapse0x20cf5b0() {
   return (neuron0x20b28c0()*0.939459);
}

double NNfunction-NG_1::synapse0x20cf5f0() {
   return (neuron0x20c4f00()*0.538684);
}

double NNfunction-NG_1::synapse0x20cf630() {
   return (neuron0x20c57b0()*-0.455343);
}

double NNfunction-NG_1::synapse0x20cf670() {
   return (neuron0x20c6180()*0.49216);
}

double NNfunction-NG_1::synapse0x20cf6b0() {
   return (neuron0x20c6b50()*-0.109323);
}

double NNfunction-NG_1::synapse0x20cfa30() {
   return (neuron0x20a2ad0()*-1.36467);
}

double NNfunction-NG_1::synapse0x20cfa70() {
   return (neuron0x20a3420()*-0.0682494);
}

double NNfunction-NG_1::synapse0x20cfab0() {
   return (neuron0x20a3f00()*-0.0361917);
}

double NNfunction-NG_1::synapse0x20cfaf0() {
   return (neuron0x20a39a0()*0.213496);
}

double NNfunction-NG_1::synapse0x20cfb30() {
   return (neuron0x20a4ce0()*1.71182);
}

double NNfunction-NG_1::synapse0x20cfb70() {
   return (neuron0x20a56b0()*0.248444);
}

double NNfunction-NG_1::synapse0x20cfbb0() {
   return (neuron0x20a6480()*-0.166806);
}

double NNfunction-NG_1::synapse0x20cfbf0() {
   return (neuron0x20a6e50()*0.135319);
}

double NNfunction-NG_1::synapse0x20cfc30() {
   return (neuron0x20a7820()*-0.315842);
}

double NNfunction-NG_1::synapse0x20cfc70() {
   return (neuron0x20a8300()*-0.0300414);
}

double NNfunction-NG_1::synapse0x20cfcb0() {
   return (neuron0x20a8cd0()*0.348398);
}

double NNfunction-NG_1::synapse0x20cfcf0() {
   return (neuron0x20a5db0()*0.433973);
}

double NNfunction-NG_1::synapse0x20cfd30() {
   return (neuron0x20aa880()*-0.0246866);
}

double NNfunction-NG_1::synapse0x20cfd70() {
   return (neuron0x20ab250()*-0.368942);
}

double NNfunction-NG_1::synapse0x20cfdb0() {
   return (neuron0x20abc20()*-0.128145);
}

double NNfunction-NG_1::synapse0x20cfdf0() {
   return (neuron0x20ac5f0()*0.136346);
}

double NNfunction-NG_1::synapse0x20cf880() {
   return (neuron0x20ae400()*0.026127);
}

double NNfunction-NG_1::synapse0x20cf8c0() {
   return (neuron0x20ae6e0()*-0.455194);
}

double NNfunction-NG_1::synapse0x20cff40() {
   return (neuron0x20af0b0()*-0.188042);
}

double NNfunction-NG_1::synapse0x20cff80() {
   return (neuron0x20afa80()*-0.907956);
}

double NNfunction-NG_1::synapse0x20cffc0() {
   return (neuron0x20b0450()*-0.0596399);
}

double NNfunction-NG_1::synapse0x20d0000() {
   return (neuron0x20b0e20()*-0.129215);
}

double NNfunction-NG_1::synapse0x20d0040() {
   return (neuron0x20a9970()*-0.0211903);
}

double NNfunction-NG_1::synapse0x20d0080() {
   return (neuron0x20aa340()*-0.195471);
}

double NNfunction-NG_1::synapse0x20d00c0() {
   return (neuron0x20b3bb0()*0.0350751);
}

double NNfunction-NG_1::synapse0x20d0100() {
   return (neuron0x20b4580()*1.11364);
}

double NNfunction-NG_1::synapse0x20d0140() {
   return (neuron0x20b4f50()*0.0965908);
}

double NNfunction-NG_1::synapse0x20d0180() {
   return (neuron0x20b5920()*-0.0550833);
}

double NNfunction-NG_1::synapse0x20d01c0() {
   return (neuron0x20b62f0()*-0.0251512);
}

double NNfunction-NG_1::synapse0x20d0200() {
   return (neuron0x20b6cc0()*0.351927);
}

double NNfunction-NG_1::synapse0x20d0240() {
   return (neuron0x20b7690()*0.0478254);
}

double NNfunction-NG_1::synapse0x20d0280() {
   return (neuron0x20b8060()*-0.0482663);
}

double NNfunction-NG_1::synapse0x20cfe30() {
   return (neuron0x20ae0f0()*0.0812221);
}

double NNfunction-NG_1::synapse0x20cfe70() {
   return (neuron0x20bac40()*0.520713);
}

double NNfunction-NG_1::synapse0x20cfeb0() {
   return (neuron0x20bb610()*-0.994829);
}

double NNfunction-NG_1::synapse0x20cfef0() {
   return (neuron0x20bbfe0()*0.145732);
}

double NNfunction-NG_1::synapse0x20d04d0() {
   return (neuron0x20bc9b0()*-1.01805);
}

double NNfunction-NG_1::synapse0x20d0510() {
   return (neuron0x20bd380()*-0.123657);
}

double NNfunction-NG_1::synapse0x20d0550() {
   return (neuron0x20bdd50()*-0.279087);
}

double NNfunction-NG_1::synapse0x20d0590() {
   return (neuron0x20be720()*0.243088);
}

double NNfunction-NG_1::synapse0x20d05d0() {
   return (neuron0x20bf0f0()*-0.117);
}

double NNfunction-NG_1::synapse0x20d0610() {
   return (neuron0x20bfcd0()*-1.12);
}

double NNfunction-NG_1::synapse0x20d0650() {
   return (neuron0x20c06a0()*0.188083);
}

double NNfunction-NG_1::synapse0x20d0690() {
   return (neuron0x20b1520()*0.859586);
}

double NNfunction-NG_1::synapse0x20d06d0() {
   return (neuron0x20b1ef0()*-1.08857);
}

double NNfunction-NG_1::synapse0x20d0710() {
   return (neuron0x20b28c0()*0.101879);
}

double NNfunction-NG_1::synapse0x20d0750() {
   return (neuron0x20c4f00()*0.345848);
}

double NNfunction-NG_1::synapse0x20d0790() {
   return (neuron0x20c57b0()*0.100153);
}

double NNfunction-NG_1::synapse0x20d07d0() {
   return (neuron0x20c6180()*1.52839);
}

double NNfunction-NG_1::synapse0x20d0810() {
   return (neuron0x20c6b50()*0.199189);
}

double NNfunction-NG_1::synapse0x20d0b90() {
   return (neuron0x20a2ad0()*-0.767632);
}

double NNfunction-NG_1::synapse0x20d0bd0() {
   return (neuron0x20a3420()*-0.00746559);
}

double NNfunction-NG_1::synapse0x20d0c10() {
   return (neuron0x20a3f00()*0.0341112);
}

double NNfunction-NG_1::synapse0x20d0c50() {
   return (neuron0x20a39a0()*-0.344937);
}

double NNfunction-NG_1::synapse0x20d0c90() {
   return (neuron0x20a4ce0()*2.29568);
}

double NNfunction-NG_1::synapse0x20d0cd0() {
   return (neuron0x20a56b0()*-0.209235);
}

double NNfunction-NG_1::synapse0x20d0d10() {
   return (neuron0x20a6480()*-0.772861);
}

double NNfunction-NG_1::synapse0x20d0d50() {
   return (neuron0x20a6e50()*-1.33195);
}

double NNfunction-NG_1::synapse0x20d0d90() {
   return (neuron0x20a7820()*0.503213);
}

double NNfunction-NG_1::synapse0x20d0dd0() {
   return (neuron0x20a8300()*-0.0203494);
}

double NNfunction-NG_1::synapse0x20d0e10() {
   return (neuron0x20a8cd0()*-0.43101);
}

double NNfunction-NG_1::synapse0x20d0e50() {
   return (neuron0x20a5db0()*-0.491245);
}

double NNfunction-NG_1::synapse0x20d0e90() {
   return (neuron0x20aa880()*0.0610197);
}

double NNfunction-NG_1::synapse0x20d0ed0() {
   return (neuron0x20ab250()*0.434301);
}

double NNfunction-NG_1::synapse0x20d0f10() {
   return (neuron0x20abc20()*0.0432604);
}

double NNfunction-NG_1::synapse0x20d0f50() {
   return (neuron0x20ac5f0()*-0.0512232);
}

double NNfunction-NG_1::synapse0x20d09e0() {
   return (neuron0x20ae400()*-1.81392);
}

double NNfunction-NG_1::synapse0x20d0a20() {
   return (neuron0x20ae6e0()*0.440863);
}

double NNfunction-NG_1::synapse0x20d10a0() {
   return (neuron0x20af0b0()*0.371125);
}

double NNfunction-NG_1::synapse0x20d10e0() {
   return (neuron0x20afa80()*0.851232);
}

double NNfunction-NG_1::synapse0x20d1120() {
   return (neuron0x20b0450()*0.0141998);
}

double NNfunction-NG_1::synapse0x20d1160() {
   return (neuron0x20b0e20()*0.258849);
}

double NNfunction-NG_1::synapse0x20d11a0() {
   return (neuron0x20a9970()*0.187489);
}

double NNfunction-NG_1::synapse0x20d11e0() {
   return (neuron0x20aa340()*0.400543);
}

double NNfunction-NG_1::synapse0x20d1220() {
   return (neuron0x20b3bb0()*-0.0743333);
}

double NNfunction-NG_1::synapse0x20d1260() {
   return (neuron0x20b4580()*-2.23107);
}

double NNfunction-NG_1::synapse0x20d12a0() {
   return (neuron0x20b4f50()*-0.451035);
}

double NNfunction-NG_1::synapse0x20d12e0() {
   return (neuron0x20b5920()*-1.98891);
}

double NNfunction-NG_1::synapse0x20d1320() {
   return (neuron0x20b62f0()*-0.305449);
}

double NNfunction-NG_1::synapse0x20d1360() {
   return (neuron0x20b6cc0()*-0.425857);
}

double NNfunction-NG_1::synapse0x20d13a0() {
   return (neuron0x20b7690()*-0.144486);
}

double NNfunction-NG_1::synapse0x20d13e0() {
   return (neuron0x20b8060()*-1.31688);
}

double NNfunction-NG_1::synapse0x20d0f90() {
   return (neuron0x20ae0f0()*-0.0893122);
}

double NNfunction-NG_1::synapse0x20d0fd0() {
   return (neuron0x20bac40()*-0.446674);
}

double NNfunction-NG_1::synapse0x20d1010() {
   return (neuron0x20bb610()*0.026164);
}

double NNfunction-NG_1::synapse0x20d1050() {
   return (neuron0x20bbfe0()*-0.145982);
}

double NNfunction-NG_1::synapse0x20d1630() {
   return (neuron0x20bc9b0()*2.06248);
}

double NNfunction-NG_1::synapse0x20d1670() {
   return (neuron0x20bd380()*-0.247615);
}

double NNfunction-NG_1::synapse0x20d16b0() {
   return (neuron0x20bdd50()*-1.73636);
}

double NNfunction-NG_1::synapse0x20d16f0() {
   return (neuron0x20be720()*-0.215407);
}

double NNfunction-NG_1::synapse0x20d1730() {
   return (neuron0x20bf0f0()*0.151804);
}

double NNfunction-NG_1::synapse0x20d1770() {
   return (neuron0x20bfcd0()*1.21688);
}

double NNfunction-NG_1::synapse0x20d17b0() {
   return (neuron0x20c06a0()*-0.195849);
}

double NNfunction-NG_1::synapse0x20d17f0() {
   return (neuron0x20b1520()*2.59199);
}

double NNfunction-NG_1::synapse0x20d1830() {
   return (neuron0x20b1ef0()*1.57127);
}

double NNfunction-NG_1::synapse0x20d1870() {
   return (neuron0x20b28c0()*-0.369098);
}

double NNfunction-NG_1::synapse0x20d18b0() {
   return (neuron0x20c4f00()*-0.698453);
}

double NNfunction-NG_1::synapse0x20d18f0() {
   return (neuron0x20c57b0()*-0.104262);
}

double NNfunction-NG_1::synapse0x20d1930() {
   return (neuron0x20c6180()*-2.89493);
}

double NNfunction-NG_1::synapse0x20d1970() {
   return (neuron0x20c6b50()*-0.268389);
}

double NNfunction-NG_1::synapse0x20d1bd0() {
   return (neuron0x20cdd50()*-4.49836);
}

double NNfunction-NG_1::synapse0x20d1c10() {
   return (neuron0x20ce0f0()*2.21178);
}

double NNfunction-NG_1::synapse0x20d1c50() {
   return (neuron0x20ce590()*-2.2137);
}

double NNfunction-NG_1::synapse0x20d1c90() {
   return (neuron0x20cf6f0()*14.7097);
}

double NNfunction-NG_1::synapse0x20d1cd0() {
   return (neuron0x20d0850()*-8.41522);
}

