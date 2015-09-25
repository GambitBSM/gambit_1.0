#include "NNfunction_ns_chi04_sR.h"
#include <cmath>

double NNfunction_ns_chi04_sR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.2823)/14.963;
   input1 = (in1 - 15.2505)/482.586;
   input2 = (in2 - 155.992)/161.033;
   input3 = (in3 - 35.6556)/781.971;
   input4 = (in4 - 910.731)/881.002;
   input5 = (in5 - 834.725)/912.307;
   input6 = (in6 - 836.196)/914.352;
   input7 = (in7 - 834.373)/886.406;
   input8 = (in8 - 819.857)/935.245;
   input9 = (in9 - 803.351)/929.279;
   input10 = (in10 - 831.121)/911.253;
   input11 = (in11 - 652.615)/802.866;
   input12 = (in12 - 656.135)/807.843;
   input13 = (in13 - 462.451)/472.647;
   input14 = (in14 - 640.65)/740.468;
   input15 = (in15 - 635.904)/736.563;
   input16 = (in16 - 473.376)/515.997;
   input17 = (in17 - 686.026)/837.269;
   input18 = (in18 - 180.47)/135.992;
   input19 = (in19 - 698.037)/812.897;
   input20 = (in20 - -28.0702)/447.708;
   input21 = (in21 - -40.5118)/1073;
   input22 = (in22 - -20.2718)/1078.52;
   input23 = (in23 - -15.1127)/195.599;
   switch(index) {
     case 0:
         return neuron0x28d1650();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi04_sR::Value(int index, double* input) {
   input0 = (input[0] - 23.2823)/14.963;
   input1 = (input[1] - 15.2505)/482.586;
   input2 = (input[2] - 155.992)/161.033;
   input3 = (input[3] - 35.6556)/781.971;
   input4 = (input[4] - 910.731)/881.002;
   input5 = (input[5] - 834.725)/912.307;
   input6 = (input[6] - 836.196)/914.352;
   input7 = (input[7] - 834.373)/886.406;
   input8 = (input[8] - 819.857)/935.245;
   input9 = (input[9] - 803.351)/929.279;
   input10 = (input[10] - 831.121)/911.253;
   input11 = (input[11] - 652.615)/802.866;
   input12 = (input[12] - 656.135)/807.843;
   input13 = (input[13] - 462.451)/472.647;
   input14 = (input[14] - 640.65)/740.468;
   input15 = (input[15] - 635.904)/736.563;
   input16 = (input[16] - 473.376)/515.997;
   input17 = (input[17] - 686.026)/837.269;
   input18 = (input[18] - 180.47)/135.992;
   input19 = (input[19] - 698.037)/812.897;
   input20 = (input[20] - -28.0702)/447.708;
   input21 = (input[21] - -40.5118)/1073;
   input22 = (input[22] - -20.2718)/1078.52;
   input23 = (input[23] - -15.1127)/195.599;
   switch(index) {
     case 0:
         return neuron0x28d1650();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi04_sR::neuron0x289d740() {
   return input0;
}

double NNfunction_ns_chi04_sR::neuron0x289da80() {
   return input1;
}

double NNfunction_ns_chi04_sR::neuron0x289ddc0() {
   return input2;
}

double NNfunction_ns_chi04_sR::neuron0x289e100() {
   return input3;
}

double NNfunction_ns_chi04_sR::neuron0x289e440() {
   return input4;
}

double NNfunction_ns_chi04_sR::neuron0x289e780() {
   return input5;
}

double NNfunction_ns_chi04_sR::neuron0x289eac0() {
   return input6;
}

double NNfunction_ns_chi04_sR::neuron0x289ee00() {
   return input7;
}

double NNfunction_ns_chi04_sR::neuron0x289f140() {
   return input8;
}

double NNfunction_ns_chi04_sR::neuron0x289f480() {
   return input9;
}

double NNfunction_ns_chi04_sR::neuron0x289f7c0() {
   return input10;
}

double NNfunction_ns_chi04_sR::neuron0x289fb00() {
   return input11;
}

double NNfunction_ns_chi04_sR::neuron0x289fe40() {
   return input12;
}

double NNfunction_ns_chi04_sR::neuron0x28a0180() {
   return input13;
}

double NNfunction_ns_chi04_sR::neuron0x28a04c0() {
   return input14;
}

double NNfunction_ns_chi04_sR::neuron0x28a0800() {
   return input15;
}

double NNfunction_ns_chi04_sR::neuron0x28a0b40() {
   return input16;
}

double NNfunction_ns_chi04_sR::neuron0x28a10a0() {
   return input17;
}

double NNfunction_ns_chi04_sR::neuron0x28a12c0() {
   return input18;
}

double NNfunction_ns_chi04_sR::neuron0x28a1600() {
   return input19;
}

double NNfunction_ns_chi04_sR::neuron0x28a1940() {
   return input20;
}

double NNfunction_ns_chi04_sR::neuron0x28a1c80() {
   return input21;
}

double NNfunction_ns_chi04_sR::neuron0x28a1fc0() {
   return input22;
}

double NNfunction_ns_chi04_sR::neuron0x28a2300() {
   return input23;
}

double NNfunction_ns_chi04_sR::input0x28a2770() {
   double input = -0.587777;
   input += synapse0x289d600();
   input += synapse0x289d640();
   input += synapse0x28a2a20();
   input += synapse0x28a2a60();
   input += synapse0x28a2aa0();
   input += synapse0x28a2ae0();
   input += synapse0x28a2b20();
   input += synapse0x28a2b60();
   input += synapse0x28a2ba0();
   input += synapse0x28a2be0();
   input += synapse0x28a2c20();
   input += synapse0x28a2c60();
   input += synapse0x28a2ca0();
   input += synapse0x28a2ce0();
   input += synapse0x28a2d20();
   input += synapse0x28a2d60();
   input += synapse0x289d570();
   input += synapse0x289d5b0();
   input += synapse0x26588e0();
   input += synapse0x2658920();
   input += synapse0x28a2fc0();
   input += synapse0x28a3000();
   input += synapse0x28a3040();
   input += synapse0x28a3080();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28a2770() {
   double input = input0x28a2770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28a30c0() {
   double input = 0.586656;
   input += synapse0x28a3400();
   input += synapse0x28a3440();
   input += synapse0x28a3480();
   input += synapse0x28a34c0();
   input += synapse0x28a3500();
   input += synapse0x28a3540();
   input += synapse0x28a3580();
   input += synapse0x28a35c0();
   input += synapse0x28a3600();
   input += synapse0x28a2eb0();
   input += synapse0x28a2ef0();
   input += synapse0x28a2f30();
   input += synapse0x28a2f70();
   input += synapse0x28a3850();
   input += synapse0x28a3890();
   input += synapse0x28a38d0();
   input += synapse0x28a3250();
   input += synapse0x28a3290();
   input += synapse0x28a3a20();
   input += synapse0x28a3a60();
   input += synapse0x28a3aa0();
   input += synapse0x28a3ae0();
   input += synapse0x28a3b20();
   input += synapse0x28a3b60();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28a30c0() {
   double input = input0x28a30c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28a3ba0() {
   double input = -0.943693;
   input += synapse0x28a3ee0();
   input += synapse0x28a3f20();
   input += synapse0x28a3f60();
   input += synapse0x28a3fa0();
   input += synapse0x28a3fe0();
   input += synapse0x28a4020();
   input += synapse0x28a4060();
   input += synapse0x28a40a0();
   input += synapse0x28a40e0();
   input += synapse0x28a4120();
   input += synapse0x28a4160();
   input += synapse0x28a41a0();
   input += synapse0x28a41e0();
   input += synapse0x28a4220();
   input += synapse0x28a4260();
   input += synapse0x28a42a0();
   input += synapse0x28a3d30();
   input += synapse0x28a3d70();
   input += synapse0x2658fd0();
   input += synapse0x26668a0();
   input += synapse0x26668e0();
   input += synapse0x288c7d0();
   input += synapse0x288c810();
   input += synapse0x288c850();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28a3ba0() {
   double input = input0x28a3ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28a3640() {
   double input = 1.87625;
   input += synapse0x2667120();
   input += synapse0x28a37d0();
   input += synapse0x28a3810();
   input += synapse0x28a43f0();
   input += synapse0x28a4430();
   input += synapse0x28a4470();
   input += synapse0x28a44b0();
   input += synapse0x28a44f0();
   input += synapse0x28a4530();
   input += synapse0x28a4570();
   input += synapse0x28a45b0();
   input += synapse0x28a45f0();
   input += synapse0x28a4630();
   input += synapse0x28a4670();
   input += synapse0x28a46b0();
   input += synapse0x28a46f0();
   input += synapse0x289d680();
   input += synapse0x289d6c0();
   input += synapse0x289d700();
   input += synapse0x28a4840();
   input += synapse0x28a4880();
   input += synapse0x28a48c0();
   input += synapse0x28a4900();
   input += synapse0x28a4940();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28a3640() {
   double input = input0x28a3640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28a4980() {
   double input = 1.24466;
   input += synapse0x28a4cc0();
   input += synapse0x28a4d00();
   input += synapse0x28a4d40();
   input += synapse0x28a4d80();
   input += synapse0x28a4dc0();
   input += synapse0x28a4e00();
   input += synapse0x28a4e40();
   input += synapse0x28a4e80();
   input += synapse0x28a4ec0();
   input += synapse0x28a4f00();
   input += synapse0x28a4f40();
   input += synapse0x28a4f80();
   input += synapse0x28a4fc0();
   input += synapse0x28a5000();
   input += synapse0x28a5040();
   input += synapse0x28a5080();
   input += synapse0x28a4b10();
   input += synapse0x28a4b50();
   input += synapse0x28a51d0();
   input += synapse0x28a5210();
   input += synapse0x28a5250();
   input += synapse0x28a5290();
   input += synapse0x28a52d0();
   input += synapse0x28a5310();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28a4980() {
   double input = input0x28a4980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28a5350() {
   double input = -1.26547;
   input += synapse0x28a5690();
   input += synapse0x28a56d0();
   input += synapse0x28a5710();
   input += synapse0x28a5750();
   input += synapse0x28a5790();
   input += synapse0x28a57d0();
   input += synapse0x28a5810();
   input += synapse0x28a5850();
   input += synapse0x28a5890();
   input += synapse0x2666bf0();
   input += synapse0x2666c30();
   input += synapse0x2666c70();
   input += synapse0x2666cb0();
   input += synapse0x2666cf0();
   input += synapse0x2666d30();
   input += synapse0x2666d70();
   input += synapse0x28a54e0();
   input += synapse0x28a5520();
   input += synapse0x2666ec0();
   input += synapse0x2666f00();
   input += synapse0x2666f40();
   input += synapse0x2666f80();
   input += synapse0x2666fc0();
   input += synapse0x28a60e0();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28a5350() {
   double input = input0x28a5350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28a6120() {
   double input = 0.719834;
   input += synapse0x28a6460();
   input += synapse0x28a64a0();
   input += synapse0x28a64e0();
   input += synapse0x28a6520();
   input += synapse0x28a6560();
   input += synapse0x28a65a0();
   input += synapse0x28a65e0();
   input += synapse0x28a6620();
   input += synapse0x28a6660();
   input += synapse0x28a66a0();
   input += synapse0x28a66e0();
   input += synapse0x28a6720();
   input += synapse0x28a6760();
   input += synapse0x28a67a0();
   input += synapse0x28a67e0();
   input += synapse0x28a6820();
   input += synapse0x28a62b0();
   input += synapse0x28a62f0();
   input += synapse0x28a6970();
   input += synapse0x28a69b0();
   input += synapse0x28a69f0();
   input += synapse0x28a6a30();
   input += synapse0x28a6a70();
   input += synapse0x28a6ab0();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28a6120() {
   double input = input0x28a6120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28a6af0() {
   double input = -2.11052;
   input += synapse0x28a6e30();
   input += synapse0x28a6e70();
   input += synapse0x28a6eb0();
   input += synapse0x28a6ef0();
   input += synapse0x28a6f30();
   input += synapse0x28a6f70();
   input += synapse0x28a6fb0();
   input += synapse0x28a6ff0();
   input += synapse0x28a7030();
   input += synapse0x28a7070();
   input += synapse0x28a70b0();
   input += synapse0x28a70f0();
   input += synapse0x28a7130();
   input += synapse0x28a7170();
   input += synapse0x28a71b0();
   input += synapse0x28a71f0();
   input += synapse0x28a6c80();
   input += synapse0x28a6cc0();
   input += synapse0x28a7340();
   input += synapse0x28a7380();
   input += synapse0x28a73c0();
   input += synapse0x28a7400();
   input += synapse0x28a7440();
   input += synapse0x28a7480();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28a6af0() {
   double input = input0x28a6af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28a74c0() {
   double input = -0.586269;
   input += synapse0x28a0f90();
   input += synapse0x28a0fd0();
   input += synapse0x28a1010();
   input += synapse0x28a1050();
   input += synapse0x28a7a10();
   input += synapse0x28a7a50();
   input += synapse0x28a7a90();
   input += synapse0x28a7ad0();
   input += synapse0x28a7b10();
   input += synapse0x28a7b50();
   input += synapse0x28a7b90();
   input += synapse0x28a7bd0();
   input += synapse0x28a7c10();
   input += synapse0x28a7c50();
   input += synapse0x28a7c90();
   input += synapse0x28a7cd0();
   input += synapse0x28a7650();
   input += synapse0x28a7690();
   input += synapse0x28a7e20();
   input += synapse0x28a7e60();
   input += synapse0x28a7ea0();
   input += synapse0x28a7ee0();
   input += synapse0x28a7f20();
   input += synapse0x28a7f60();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28a74c0() {
   double input = input0x28a74c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28a7fa0() {
   double input = 1.74502;
   input += synapse0x28a82e0();
   input += synapse0x28a8320();
   input += synapse0x28a8360();
   input += synapse0x28a83a0();
   input += synapse0x28a83e0();
   input += synapse0x28a8420();
   input += synapse0x28a8460();
   input += synapse0x28a84a0();
   input += synapse0x28a84e0();
   input += synapse0x28a8520();
   input += synapse0x28a8560();
   input += synapse0x28a85a0();
   input += synapse0x28a85e0();
   input += synapse0x28a8620();
   input += synapse0x28a8660();
   input += synapse0x28a86a0();
   input += synapse0x28a8130();
   input += synapse0x28a8170();
   input += synapse0x28a87f0();
   input += synapse0x28a8830();
   input += synapse0x28a8870();
   input += synapse0x28a88b0();
   input += synapse0x28a88f0();
   input += synapse0x28a8930();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28a7fa0() {
   double input = input0x28a7fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28a8970() {
   double input = 0.743718;
   input += synapse0x28a8cb0();
   input += synapse0x28a8cf0();
   input += synapse0x28a8d30();
   input += synapse0x28a8d70();
   input += synapse0x28a8db0();
   input += synapse0x28a8df0();
   input += synapse0x28a8e30();
   input += synapse0x28a8e70();
   input += synapse0x28a8eb0();
   input += synapse0x28a8ef0();
   input += synapse0x28a8f30();
   input += synapse0x28a8f70();
   input += synapse0x28a8fb0();
   input += synapse0x28a8ff0();
   input += synapse0x28a9030();
   input += synapse0x28a9070();
   input += synapse0x28a8b00();
   input += synapse0x28a8b40();
   input += synapse0x28a58d0();
   input += synapse0x28a5910();
   input += synapse0x28a5950();
   input += synapse0x28a5990();
   input += synapse0x28a59d0();
   input += synapse0x28a5a10();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28a8970() {
   double input = input0x28a8970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28a5a50() {
   double input = -1.14648;
   input += synapse0x28a5d90();
   input += synapse0x28a5dd0();
   input += synapse0x28a5e10();
   input += synapse0x28a5e50();
   input += synapse0x28a5e90();
   input += synapse0x28a5ed0();
   input += synapse0x28a5f10();
   input += synapse0x28a5f50();
   input += synapse0x28a5f90();
   input += synapse0x28a5fd0();
   input += synapse0x28a6010();
   input += synapse0x28a6050();
   input += synapse0x28a6090();
   input += synapse0x28aa1d0();
   input += synapse0x28aa210();
   input += synapse0x28aa250();
   input += synapse0x28a5be0();
   input += synapse0x28a5c20();
   input += synapse0x28aa3a0();
   input += synapse0x28aa3e0();
   input += synapse0x28aa420();
   input += synapse0x28aa460();
   input += synapse0x28aa4a0();
   input += synapse0x28aa4e0();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28a5a50() {
   double input = input0x28a5a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28aa520() {
   double input = 1.79944;
   input += synapse0x28aa860();
   input += synapse0x28aa8a0();
   input += synapse0x28aa8e0();
   input += synapse0x28aa920();
   input += synapse0x28aa960();
   input += synapse0x28aa9a0();
   input += synapse0x28aa9e0();
   input += synapse0x28aaa20();
   input += synapse0x28aaa60();
   input += synapse0x28aaaa0();
   input += synapse0x28aaae0();
   input += synapse0x28aab20();
   input += synapse0x28aab60();
   input += synapse0x28aaba0();
   input += synapse0x28aabe0();
   input += synapse0x28aac20();
   input += synapse0x28aa6b0();
   input += synapse0x28aa6f0();
   input += synapse0x28aad70();
   input += synapse0x28aadb0();
   input += synapse0x28aadf0();
   input += synapse0x28aae30();
   input += synapse0x28aae70();
   input += synapse0x28aaeb0();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28aa520() {
   double input = input0x28aa520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28aaef0() {
   double input = 0.165167;
   input += synapse0x28ab230();
   input += synapse0x28ab270();
   input += synapse0x28ab2b0();
   input += synapse0x28ab2f0();
   input += synapse0x28ab330();
   input += synapse0x28ab370();
   input += synapse0x28ab3b0();
   input += synapse0x28ab3f0();
   input += synapse0x28ab430();
   input += synapse0x28ab470();
   input += synapse0x28ab4b0();
   input += synapse0x28ab4f0();
   input += synapse0x28ab530();
   input += synapse0x28ab570();
   input += synapse0x28ab5b0();
   input += synapse0x28ab5f0();
   input += synapse0x28ab080();
   input += synapse0x28ab0c0();
   input += synapse0x28ab740();
   input += synapse0x28ab780();
   input += synapse0x28ab7c0();
   input += synapse0x28ab800();
   input += synapse0x28ab840();
   input += synapse0x28ab880();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28aaef0() {
   double input = input0x28aaef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28ab8c0() {
   double input = 0.698867;
   input += synapse0x28abc00();
   input += synapse0x28abc40();
   input += synapse0x28abc80();
   input += synapse0x28abcc0();
   input += synapse0x28abd00();
   input += synapse0x28abd40();
   input += synapse0x28abd80();
   input += synapse0x28abdc0();
   input += synapse0x28abe00();
   input += synapse0x28abe40();
   input += synapse0x28abe80();
   input += synapse0x28abec0();
   input += synapse0x28abf00();
   input += synapse0x28abf40();
   input += synapse0x28abf80();
   input += synapse0x28abfc0();
   input += synapse0x28aba50();
   input += synapse0x28aba90();
   input += synapse0x28ac110();
   input += synapse0x28ac150();
   input += synapse0x28ac190();
   input += synapse0x28ac1d0();
   input += synapse0x28ac210();
   input += synapse0x28ac250();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28ab8c0() {
   double input = input0x28ab8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28ac290() {
   double input = 0.308995;
   input += synapse0x28ac5d0();
   input += synapse0x289d960();
   input += synapse0x289d9a0();
   input += synapse0x289dca0();
   input += synapse0x289dce0();
   input += synapse0x289dfe0();
   input += synapse0x289e020();
   input += synapse0x289e320();
   input += synapse0x289e360();
   input += synapse0x289e660();
   input += synapse0x289e6a0();
   input += synapse0x289e9a0();
   input += synapse0x289e9e0();
   input += synapse0x289ece0();
   input += synapse0x289ed20();
   input += synapse0x289f020();
   input += synapse0x289f060();
   input += synapse0x289f360();
   input += synapse0x289f3a0();
   input += synapse0x289f6a0();
   input += synapse0x289f6e0();
   input += synapse0x289f9e0();
   input += synapse0x289fa20();
   input += synapse0x289fd20();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28ac290() {
   double input = input0x28ac290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28ae0a0() {
   double input = 1.55996;
   input += synapse0x289fd60();
   input += synapse0x28a0a20();
   input += synapse0x28a0a60();
   input += synapse0x28ac420();
   input += synapse0x28ac460();
   input += synapse0x28a0d60();
   input += synapse0x28a0da0();
   input += synapse0x26587c0();
   input += synapse0x2658800();
   input += synapse0x28a14e0();
   input += synapse0x28a1520();
   input += synapse0x28a1820();
   input += synapse0x28a1860();
   input += synapse0x28a1b60();
   input += synapse0x28a1ba0();
   input += synapse0x28a1ea0();
   input += synapse0x28a1ee0();
   input += synapse0x28a21e0();
   input += synapse0x28a2220();
   input += synapse0x28a2520();
   input += synapse0x28a2560();
   input += synapse0x28a0060();
   input += synapse0x28a00a0();
   input += synapse0x28ae340();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28ae0a0() {
   double input = input0x28ae0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28ae380() {
   double input = -0.251105;
   input += synapse0x28ae6c0();
   input += synapse0x28ae700();
   input += synapse0x28ae740();
   input += synapse0x28ae780();
   input += synapse0x28ae7c0();
   input += synapse0x28ae800();
   input += synapse0x28ae840();
   input += synapse0x28ae880();
   input += synapse0x28ae8c0();
   input += synapse0x28ae900();
   input += synapse0x28ae940();
   input += synapse0x28ae980();
   input += synapse0x28ae9c0();
   input += synapse0x28aea00();
   input += synapse0x28aea40();
   input += synapse0x28aea80();
   input += synapse0x28ae510();
   input += synapse0x28ae550();
   input += synapse0x28aebd0();
   input += synapse0x28aec10();
   input += synapse0x28aec50();
   input += synapse0x28aec90();
   input += synapse0x28aecd0();
   input += synapse0x28aed10();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28ae380() {
   double input = input0x28ae380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28aed50() {
   double input = -1.03483;
   input += synapse0x28af090();
   input += synapse0x28af0d0();
   input += synapse0x28af110();
   input += synapse0x28af150();
   input += synapse0x28af190();
   input += synapse0x28af1d0();
   input += synapse0x28af210();
   input += synapse0x28af250();
   input += synapse0x28af290();
   input += synapse0x28af2d0();
   input += synapse0x28af310();
   input += synapse0x28af350();
   input += synapse0x28af390();
   input += synapse0x28af3d0();
   input += synapse0x28af410();
   input += synapse0x28af450();
   input += synapse0x28aeee0();
   input += synapse0x28aef20();
   input += synapse0x28af5a0();
   input += synapse0x28af5e0();
   input += synapse0x28af620();
   input += synapse0x28af660();
   input += synapse0x28af6a0();
   input += synapse0x28af6e0();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28aed50() {
   double input = input0x28aed50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28af720() {
   double input = 0.0570852;
   input += synapse0x28afa60();
   input += synapse0x28afaa0();
   input += synapse0x28afae0();
   input += synapse0x28afb20();
   input += synapse0x28afb60();
   input += synapse0x28afba0();
   input += synapse0x28afbe0();
   input += synapse0x28afc20();
   input += synapse0x28afc60();
   input += synapse0x28afca0();
   input += synapse0x28afce0();
   input += synapse0x28afd20();
   input += synapse0x28afd60();
   input += synapse0x28afda0();
   input += synapse0x28afde0();
   input += synapse0x28afe20();
   input += synapse0x28af8b0();
   input += synapse0x28af8f0();
   input += synapse0x28aff70();
   input += synapse0x28affb0();
   input += synapse0x28afff0();
   input += synapse0x28b0030();
   input += synapse0x28b0070();
   input += synapse0x28b00b0();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28af720() {
   double input = input0x28af720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28b00f0() {
   double input = -0.14955;
   input += synapse0x28b0430();
   input += synapse0x28b0470();
   input += synapse0x28b04b0();
   input += synapse0x28b04f0();
   input += synapse0x28b0530();
   input += synapse0x28b0570();
   input += synapse0x28b05b0();
   input += synapse0x28b05f0();
   input += synapse0x28b0630();
   input += synapse0x28b0670();
   input += synapse0x28b06b0();
   input += synapse0x28b06f0();
   input += synapse0x28b0730();
   input += synapse0x28b0770();
   input += synapse0x28b07b0();
   input += synapse0x28b07f0();
   input += synapse0x28b0280();
   input += synapse0x28b02c0();
   input += synapse0x28b0940();
   input += synapse0x28b0980();
   input += synapse0x28b09c0();
   input += synapse0x28b0a00();
   input += synapse0x28b0a40();
   input += synapse0x28b0a80();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28b00f0() {
   double input = input0x28b00f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28b0ac0() {
   double input = 2.01892;
   input += synapse0x28b0e00();
   input += synapse0x28b0e40();
   input += synapse0x28b0e80();
   input += synapse0x28b0ec0();
   input += synapse0x28b0f00();
   input += synapse0x28b0f40();
   input += synapse0x28b0f80();
   input += synapse0x28b0fc0();
   input += synapse0x28b1000();
   input += synapse0x28a91c0();
   input += synapse0x28a9200();
   input += synapse0x28a9240();
   input += synapse0x28a9280();
   input += synapse0x28a92c0();
   input += synapse0x28a9300();
   input += synapse0x28a9340();
   input += synapse0x28b0c50();
   input += synapse0x28b0c90();
   input += synapse0x28a9490();
   input += synapse0x28a94d0();
   input += synapse0x28a9510();
   input += synapse0x28a9550();
   input += synapse0x28a9590();
   input += synapse0x28a95d0();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28b0ac0() {
   double input = input0x28b0ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28a9610() {
   double input = 2.11952;
   input += synapse0x28a9950();
   input += synapse0x28a9990();
   input += synapse0x28a99d0();
   input += synapse0x28a9a10();
   input += synapse0x28a9a50();
   input += synapse0x28a9a90();
   input += synapse0x28a9ad0();
   input += synapse0x28a9b10();
   input += synapse0x28a9b50();
   input += synapse0x28a9b90();
   input += synapse0x28a9bd0();
   input += synapse0x28a9c10();
   input += synapse0x28a9c50();
   input += synapse0x28a9c90();
   input += synapse0x28a9cd0();
   input += synapse0x28a9d10();
   input += synapse0x28a97a0();
   input += synapse0x28a97e0();
   input += synapse0x28a9e60();
   input += synapse0x28a9ea0();
   input += synapse0x28a9ee0();
   input += synapse0x28a9f20();
   input += synapse0x28a9f60();
   input += synapse0x28a9fa0();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28a9610() {
   double input = input0x28a9610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28a9fe0() {
   double input = 0.424797;
   input += synapse0x28aa170();
   input += synapse0x28b3200();
   input += synapse0x28b3240();
   input += synapse0x28b3280();
   input += synapse0x28b32c0();
   input += synapse0x28b3300();
   input += synapse0x28b3340();
   input += synapse0x28b3380();
   input += synapse0x28b33c0();
   input += synapse0x28b3400();
   input += synapse0x28b3440();
   input += synapse0x28b3480();
   input += synapse0x28b34c0();
   input += synapse0x28b3500();
   input += synapse0x28b3540();
   input += synapse0x28b3580();
   input += synapse0x28b3050();
   input += synapse0x28b3090();
   input += synapse0x28b36d0();
   input += synapse0x28b3710();
   input += synapse0x28b3750();
   input += synapse0x28b3790();
   input += synapse0x28b37d0();
   input += synapse0x28b3810();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28a9fe0() {
   double input = input0x28a9fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28b3850() {
   double input = -1.55782;
   input += synapse0x28b3b90();
   input += synapse0x28b3bd0();
   input += synapse0x28b3c10();
   input += synapse0x28b3c50();
   input += synapse0x28b3c90();
   input += synapse0x28b3cd0();
   input += synapse0x28b3d10();
   input += synapse0x28b3d50();
   input += synapse0x28b3d90();
   input += synapse0x28b3dd0();
   input += synapse0x28b3e10();
   input += synapse0x28b3e50();
   input += synapse0x28b3e90();
   input += synapse0x28b3ed0();
   input += synapse0x28b3f10();
   input += synapse0x28b3f50();
   input += synapse0x28b39e0();
   input += synapse0x28b3a20();
   input += synapse0x28b40a0();
   input += synapse0x28b40e0();
   input += synapse0x28b4120();
   input += synapse0x28b4160();
   input += synapse0x28b41a0();
   input += synapse0x28b41e0();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28b3850() {
   double input = input0x28b3850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28b4220() {
   double input = -0.89213;
   input += synapse0x28b4560();
   input += synapse0x28b45a0();
   input += synapse0x28b45e0();
   input += synapse0x28b4620();
   input += synapse0x28b4660();
   input += synapse0x28b46a0();
   input += synapse0x28b46e0();
   input += synapse0x28b4720();
   input += synapse0x28b4760();
   input += synapse0x28b47a0();
   input += synapse0x28b47e0();
   input += synapse0x28b4820();
   input += synapse0x28b4860();
   input += synapse0x28b48a0();
   input += synapse0x28b48e0();
   input += synapse0x28b4920();
   input += synapse0x28b43b0();
   input += synapse0x28b43f0();
   input += synapse0x28b4a70();
   input += synapse0x28b4ab0();
   input += synapse0x28b4af0();
   input += synapse0x28b4b30();
   input += synapse0x28b4b70();
   input += synapse0x28b4bb0();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28b4220() {
   double input = input0x28b4220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28b4bf0() {
   double input = 0.404608;
   input += synapse0x28b4f30();
   input += synapse0x28b4f70();
   input += synapse0x28b4fb0();
   input += synapse0x28b4ff0();
   input += synapse0x28b5030();
   input += synapse0x28b5070();
   input += synapse0x28b50b0();
   input += synapse0x28b50f0();
   input += synapse0x28b5130();
   input += synapse0x28b5170();
   input += synapse0x28b51b0();
   input += synapse0x28b51f0();
   input += synapse0x28b5230();
   input += synapse0x28b5270();
   input += synapse0x28b52b0();
   input += synapse0x28b52f0();
   input += synapse0x28b4d80();
   input += synapse0x28b4dc0();
   input += synapse0x28b5440();
   input += synapse0x28b5480();
   input += synapse0x28b54c0();
   input += synapse0x28b5500();
   input += synapse0x28b5540();
   input += synapse0x28b5580();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28b4bf0() {
   double input = input0x28b4bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28b55c0() {
   double input = -0.52521;
   input += synapse0x28b5900();
   input += synapse0x28b5940();
   input += synapse0x28b5980();
   input += synapse0x28b59c0();
   input += synapse0x28b5a00();
   input += synapse0x28b5a40();
   input += synapse0x28b5a80();
   input += synapse0x28b5ac0();
   input += synapse0x28b5b00();
   input += synapse0x28b5b40();
   input += synapse0x28b5b80();
   input += synapse0x28b5bc0();
   input += synapse0x28b5c00();
   input += synapse0x28b5c40();
   input += synapse0x28b5c80();
   input += synapse0x28b5cc0();
   input += synapse0x28b5750();
   input += synapse0x28b5790();
   input += synapse0x28b5e10();
   input += synapse0x28b5e50();
   input += synapse0x28b5e90();
   input += synapse0x28b5ed0();
   input += synapse0x28b5f10();
   input += synapse0x28b5f50();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28b55c0() {
   double input = input0x28b55c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28b5f90() {
   double input = -0.490832;
   input += synapse0x28b62d0();
   input += synapse0x28b6310();
   input += synapse0x28b6350();
   input += synapse0x28b6390();
   input += synapse0x28b63d0();
   input += synapse0x28b6410();
   input += synapse0x28b6450();
   input += synapse0x28b6490();
   input += synapse0x28b64d0();
   input += synapse0x28b6510();
   input += synapse0x28b6550();
   input += synapse0x28b6590();
   input += synapse0x28b65d0();
   input += synapse0x28b6610();
   input += synapse0x28b6650();
   input += synapse0x28b6690();
   input += synapse0x28b6120();
   input += synapse0x28b6160();
   input += synapse0x28b67e0();
   input += synapse0x28b6820();
   input += synapse0x28b6860();
   input += synapse0x28b68a0();
   input += synapse0x28b68e0();
   input += synapse0x28b6920();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28b5f90() {
   double input = input0x28b5f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28b6960() {
   double input = 0.212179;
   input += synapse0x28b6ca0();
   input += synapse0x28b6ce0();
   input += synapse0x28b6d20();
   input += synapse0x28b6d60();
   input += synapse0x28b6da0();
   input += synapse0x28b6de0();
   input += synapse0x28b6e20();
   input += synapse0x28b6e60();
   input += synapse0x28b6ea0();
   input += synapse0x28b6ee0();
   input += synapse0x28b6f20();
   input += synapse0x28b6f60();
   input += synapse0x28b6fa0();
   input += synapse0x28b6fe0();
   input += synapse0x28b7020();
   input += synapse0x28b7060();
   input += synapse0x28b6af0();
   input += synapse0x28b6b30();
   input += synapse0x28b71b0();
   input += synapse0x28b71f0();
   input += synapse0x28b7230();
   input += synapse0x28b7270();
   input += synapse0x28b72b0();
   input += synapse0x28b72f0();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28b6960() {
   double input = input0x28b6960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28b7330() {
   double input = -2.89477;
   input += synapse0x28b7670();
   input += synapse0x28b76b0();
   input += synapse0x28b76f0();
   input += synapse0x28b7730();
   input += synapse0x28b7770();
   input += synapse0x28b77b0();
   input += synapse0x28b77f0();
   input += synapse0x28b7830();
   input += synapse0x28b7870();
   input += synapse0x28b78b0();
   input += synapse0x28b78f0();
   input += synapse0x28b7930();
   input += synapse0x28b7970();
   input += synapse0x28b79b0();
   input += synapse0x28b79f0();
   input += synapse0x28b7a30();
   input += synapse0x28b74c0();
   input += synapse0x28b7500();
   input += synapse0x28b7b80();
   input += synapse0x28b7bc0();
   input += synapse0x28b7c00();
   input += synapse0x28b7c40();
   input += synapse0x28b7c80();
   input += synapse0x28b7cc0();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28b7330() {
   double input = input0x28b7330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28b7d00() {
   double input = -2.38154;
   input += synapse0x28b8040();
   input += synapse0x28ac610();
   input += synapse0x28ac650();
   input += synapse0x28ac690();
   input += synapse0x28ac8e0();
   input += synapse0x28ac920();
   input += synapse0x28ac960();
   input += synapse0x28acbb0();
   input += synapse0x28acbf0();
   input += synapse0x28ace40();
   input += synapse0x28ace80();
   input += synapse0x28acec0();
   input += synapse0x28ad110();
   input += synapse0x28ad150();
   input += synapse0x28ad3a0();
   input += synapse0x28ad3e0();
   input += synapse0x28b7e90();
   input += synapse0x28b7ed0();
   input += synapse0x28ad530();
   input += synapse0x28ada40();
   input += synapse0x28ada80();
   input += synapse0x28adac0();
   input += synapse0x28add10();
   input += synapse0x28add50();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28b7d00() {
   double input = input0x28b7d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28add90() {
   double input = -0.845795;
   input += synapse0x28ad600();
   input += synapse0x28ad640();
   input += synapse0x28ad680();
   input += synapse0x28ad6c0();
   input += synapse0x28ae040();
   input += synapse0x28ba390();
   input += synapse0x28ba3d0();
   input += synapse0x28ba410();
   input += synapse0x28ba450();
   input += synapse0x28ba490();
   input += synapse0x28ba4d0();
   input += synapse0x28ba510();
   input += synapse0x28ba550();
   input += synapse0x28ba590();
   input += synapse0x28ba5d0();
   input += synapse0x28ba610();
   input += synapse0x28adf20();
   input += synapse0x28adf60();
   input += synapse0x28ba760();
   input += synapse0x28ba7a0();
   input += synapse0x28ba7e0();
   input += synapse0x28ba820();
   input += synapse0x28ba860();
   input += synapse0x28ba8a0();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28add90() {
   double input = input0x28add90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28ba8e0() {
   double input = 6.58663;
   input += synapse0x28bac20();
   input += synapse0x28bac60();
   input += synapse0x28baca0();
   input += synapse0x28bace0();
   input += synapse0x28bad20();
   input += synapse0x28bad60();
   input += synapse0x28bada0();
   input += synapse0x28bade0();
   input += synapse0x28bae20();
   input += synapse0x28bae60();
   input += synapse0x28baea0();
   input += synapse0x28baee0();
   input += synapse0x28baf20();
   input += synapse0x28baf60();
   input += synapse0x28bafa0();
   input += synapse0x28bafe0();
   input += synapse0x28baa70();
   input += synapse0x28baab0();
   input += synapse0x28bb130();
   input += synapse0x28bb170();
   input += synapse0x28bb1b0();
   input += synapse0x28bb1f0();
   input += synapse0x28bb230();
   input += synapse0x28bb270();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28ba8e0() {
   double input = input0x28ba8e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28bb2b0() {
   double input = -2.57165;
   input += synapse0x28bb5f0();
   input += synapse0x28bb630();
   input += synapse0x28bb670();
   input += synapse0x28bb6b0();
   input += synapse0x28bb6f0();
   input += synapse0x28bb730();
   input += synapse0x28bb770();
   input += synapse0x28bb7b0();
   input += synapse0x28bb7f0();
   input += synapse0x28bb830();
   input += synapse0x28bb870();
   input += synapse0x28bb8b0();
   input += synapse0x28bb8f0();
   input += synapse0x28bb930();
   input += synapse0x28bb970();
   input += synapse0x28bb9b0();
   input += synapse0x28bb440();
   input += synapse0x28bb480();
   input += synapse0x28bbb00();
   input += synapse0x28bbb40();
   input += synapse0x28bbb80();
   input += synapse0x28bbbc0();
   input += synapse0x28bbc00();
   input += synapse0x28bbc40();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28bb2b0() {
   double input = input0x28bb2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28bbc80() {
   double input = 1.104;
   input += synapse0x28bbfc0();
   input += synapse0x28bc000();
   input += synapse0x28bc040();
   input += synapse0x28bc080();
   input += synapse0x28bc0c0();
   input += synapse0x28bc100();
   input += synapse0x28bc140();
   input += synapse0x28bc180();
   input += synapse0x28bc1c0();
   input += synapse0x28bc200();
   input += synapse0x28bc240();
   input += synapse0x28bc280();
   input += synapse0x28bc2c0();
   input += synapse0x28bc300();
   input += synapse0x28bc340();
   input += synapse0x28bc380();
   input += synapse0x28bbe10();
   input += synapse0x28bbe50();
   input += synapse0x28bc4d0();
   input += synapse0x28bc510();
   input += synapse0x28bc550();
   input += synapse0x28bc590();
   input += synapse0x28bc5d0();
   input += synapse0x28bc610();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28bbc80() {
   double input = input0x28bbc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28bc650() {
   double input = -0.675516;
   input += synapse0x28bc990();
   input += synapse0x28bc9d0();
   input += synapse0x28bca10();
   input += synapse0x28bca50();
   input += synapse0x28bca90();
   input += synapse0x28bcad0();
   input += synapse0x28bcb10();
   input += synapse0x28bcb50();
   input += synapse0x28bcb90();
   input += synapse0x28bcbd0();
   input += synapse0x28bcc10();
   input += synapse0x28bcc50();
   input += synapse0x28bcc90();
   input += synapse0x28bccd0();
   input += synapse0x28bcd10();
   input += synapse0x28bcd50();
   input += synapse0x28bc7e0();
   input += synapse0x28bc820();
   input += synapse0x28bcea0();
   input += synapse0x28bcee0();
   input += synapse0x28bcf20();
   input += synapse0x28bcf60();
   input += synapse0x28bcfa0();
   input += synapse0x28bcfe0();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28bc650() {
   double input = input0x28bc650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28bd020() {
   double input = 5.62464;
   input += synapse0x28bd360();
   input += synapse0x28bd3a0();
   input += synapse0x28bd3e0();
   input += synapse0x28bd420();
   input += synapse0x28bd460();
   input += synapse0x28bd4a0();
   input += synapse0x28bd4e0();
   input += synapse0x28bd520();
   input += synapse0x28bd560();
   input += synapse0x28bd5a0();
   input += synapse0x28bd5e0();
   input += synapse0x28bd620();
   input += synapse0x28bd660();
   input += synapse0x28bd6a0();
   input += synapse0x28bd6e0();
   input += synapse0x28bd720();
   input += synapse0x28bd1b0();
   input += synapse0x28bd1f0();
   input += synapse0x28bd870();
   input += synapse0x28bd8b0();
   input += synapse0x28bd8f0();
   input += synapse0x28bd930();
   input += synapse0x28bd970();
   input += synapse0x28bd9b0();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28bd020() {
   double input = input0x28bd020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28bd9f0() {
   double input = -1.87553;
   input += synapse0x28bdd30();
   input += synapse0x28bdd70();
   input += synapse0x28bddb0();
   input += synapse0x28bddf0();
   input += synapse0x28bde30();
   input += synapse0x28bde70();
   input += synapse0x28bdeb0();
   input += synapse0x28bdef0();
   input += synapse0x28bdf30();
   input += synapse0x28bdf70();
   input += synapse0x28bdfb0();
   input += synapse0x28bdff0();
   input += synapse0x28be030();
   input += synapse0x28be070();
   input += synapse0x28be0b0();
   input += synapse0x28be0f0();
   input += synapse0x28bdb80();
   input += synapse0x28bdbc0();
   input += synapse0x28be240();
   input += synapse0x28be280();
   input += synapse0x28be2c0();
   input += synapse0x28be300();
   input += synapse0x28be340();
   input += synapse0x28be380();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28bd9f0() {
   double input = input0x28bd9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28be3c0() {
   double input = -1.62015;
   input += synapse0x28be700();
   input += synapse0x28be740();
   input += synapse0x28be780();
   input += synapse0x28be7c0();
   input += synapse0x28be800();
   input += synapse0x28be840();
   input += synapse0x28be880();
   input += synapse0x28be8c0();
   input += synapse0x28be900();
   input += synapse0x28be940();
   input += synapse0x28be980();
   input += synapse0x28be9c0();
   input += synapse0x28bea00();
   input += synapse0x28bea40();
   input += synapse0x28bea80();
   input += synapse0x28beac0();
   input += synapse0x28be550();
   input += synapse0x28be590();
   input += synapse0x28bec10();
   input += synapse0x28bec50();
   input += synapse0x28bec90();
   input += synapse0x28becd0();
   input += synapse0x28bed10();
   input += synapse0x28bed50();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28be3c0() {
   double input = input0x28be3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28bed90() {
   double input = -1.52188;
   input += synapse0x28a7800();
   input += synapse0x28a7840();
   input += synapse0x28a7880();
   input += synapse0x28a78c0();
   input += synapse0x28a7900();
   input += synapse0x28a7940();
   input += synapse0x28a7980();
   input += synapse0x28a79c0();
   input += synapse0x28bf4e0();
   input += synapse0x28bf520();
   input += synapse0x28bf560();
   input += synapse0x28bf5a0();
   input += synapse0x28bf5e0();
   input += synapse0x28bf620();
   input += synapse0x28bf660();
   input += synapse0x28bf6a0();
   input += synapse0x28bef20();
   input += synapse0x28bef60();
   input += synapse0x28bf7f0();
   input += synapse0x28bf830();
   input += synapse0x28bf870();
   input += synapse0x28bf8b0();
   input += synapse0x28bf8f0();
   input += synapse0x28bf930();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28bed90() {
   double input = input0x28bed90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28bf970() {
   double input = -0.297535;
   input += synapse0x28bfcb0();
   input += synapse0x28bfcf0();
   input += synapse0x28bfd30();
   input += synapse0x28bfd70();
   input += synapse0x28bfdb0();
   input += synapse0x28bfdf0();
   input += synapse0x28bfe30();
   input += synapse0x28bfe70();
   input += synapse0x28bfeb0();
   input += synapse0x28bfef0();
   input += synapse0x28bff30();
   input += synapse0x28bff70();
   input += synapse0x28bffb0();
   input += synapse0x28bfff0();
   input += synapse0x28c0030();
   input += synapse0x28c0070();
   input += synapse0x28bfb00();
   input += synapse0x28bfb40();
   input += synapse0x28c01c0();
   input += synapse0x28c0200();
   input += synapse0x28c0240();
   input += synapse0x28c0280();
   input += synapse0x28c02c0();
   input += synapse0x28c0300();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28bf970() {
   double input = input0x28bf970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28c0340() {
   double input = -0.187205;
   input += synapse0x28c0680();
   input += synapse0x28c06c0();
   input += synapse0x28c0700();
   input += synapse0x28c0740();
   input += synapse0x28c0780();
   input += synapse0x28c07c0();
   input += synapse0x28c0800();
   input += synapse0x28c0840();
   input += synapse0x28c0880();
   input += synapse0x28c08c0();
   input += synapse0x28c0900();
   input += synapse0x28c0940();
   input += synapse0x28c0980();
   input += synapse0x28c09c0();
   input += synapse0x28c0a00();
   input += synapse0x28c0a40();
   input += synapse0x28c04d0();
   input += synapse0x28c0510();
   input += synapse0x28b1040();
   input += synapse0x28b1080();
   input += synapse0x28b10c0();
   input += synapse0x28b1100();
   input += synapse0x28b1140();
   input += synapse0x28b1180();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28c0340() {
   double input = input0x28c0340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28b11c0() {
   double input = 1.1205;
   input += synapse0x28b1500();
   input += synapse0x28b1540();
   input += synapse0x28b1580();
   input += synapse0x28b15c0();
   input += synapse0x28b1600();
   input += synapse0x28b1640();
   input += synapse0x28b1680();
   input += synapse0x28b16c0();
   input += synapse0x28b1700();
   input += synapse0x28b1740();
   input += synapse0x28b1780();
   input += synapse0x28b17c0();
   input += synapse0x28b1800();
   input += synapse0x28b1840();
   input += synapse0x28b1880();
   input += synapse0x28b18c0();
   input += synapse0x28b1350();
   input += synapse0x28b1390();
   input += synapse0x28b1a10();
   input += synapse0x28b1a50();
   input += synapse0x28b1a90();
   input += synapse0x28b1ad0();
   input += synapse0x28b1b10();
   input += synapse0x28b1b50();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28b11c0() {
   double input = input0x28b11c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28b1b90() {
   double input = 7.20355;
   input += synapse0x28b1ed0();
   input += synapse0x28b1f10();
   input += synapse0x28b1f50();
   input += synapse0x28b1f90();
   input += synapse0x28b1fd0();
   input += synapse0x28b2010();
   input += synapse0x28b2050();
   input += synapse0x28b2090();
   input += synapse0x28b20d0();
   input += synapse0x28b2110();
   input += synapse0x28b2150();
   input += synapse0x28b2190();
   input += synapse0x28b21d0();
   input += synapse0x28b2210();
   input += synapse0x28b2250();
   input += synapse0x28b2290();
   input += synapse0x28b1d20();
   input += synapse0x28b1d60();
   input += synapse0x28b23e0();
   input += synapse0x28b2420();
   input += synapse0x28b2460();
   input += synapse0x28b24a0();
   input += synapse0x28b24e0();
   input += synapse0x28b2520();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28b1b90() {
   double input = input0x28b1b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28b2560() {
   double input = 0.437429;
   input += synapse0x28b28a0();
   input += synapse0x28b28e0();
   input += synapse0x28b2920();
   input += synapse0x28b2960();
   input += synapse0x28b29a0();
   input += synapse0x28b29e0();
   input += synapse0x28b2a20();
   input += synapse0x28b2a60();
   input += synapse0x28b2aa0();
   input += synapse0x28b2ae0();
   input += synapse0x28b2b20();
   input += synapse0x28b2b60();
   input += synapse0x28b2ba0();
   input += synapse0x28b2be0();
   input += synapse0x28b2c20();
   input += synapse0x28b2c60();
   input += synapse0x28b26f0();
   input += synapse0x28b2730();
   input += synapse0x28b2db0();
   input += synapse0x28b2df0();
   input += synapse0x28b2e30();
   input += synapse0x28b2e70();
   input += synapse0x28b2eb0();
   input += synapse0x28b2ef0();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28b2560() {
   double input = input0x28b2560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28c4ba0() {
   double input = 0.131606;
   input += synapse0x28c4dc0();
   input += synapse0x28c4e00();
   input += synapse0x28c4e40();
   input += synapse0x28c4e80();
   input += synapse0x28c4ec0();
   input += synapse0x28c4f00();
   input += synapse0x28c4f40();
   input += synapse0x28c4f80();
   input += synapse0x28c4fc0();
   input += synapse0x28c5000();
   input += synapse0x28c5040();
   input += synapse0x28c5080();
   input += synapse0x28c50c0();
   input += synapse0x28c5100();
   input += synapse0x28c5140();
   input += synapse0x28c5180();
   input += synapse0x28b2f30();
   input += synapse0x28b2f70();
   input += synapse0x28c52d0();
   input += synapse0x28c5310();
   input += synapse0x28c5350();
   input += synapse0x28c5390();
   input += synapse0x28c53d0();
   input += synapse0x28c5410();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28c4ba0() {
   double input = input0x28c4ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28c5450() {
   double input = -1.03052;
   input += synapse0x28c5790();
   input += synapse0x28c57d0();
   input += synapse0x28c5810();
   input += synapse0x28c5850();
   input += synapse0x28c5890();
   input += synapse0x28c58d0();
   input += synapse0x28c5910();
   input += synapse0x28c5950();
   input += synapse0x28c5990();
   input += synapse0x28c59d0();
   input += synapse0x28c5a10();
   input += synapse0x28c5a50();
   input += synapse0x28c5a90();
   input += synapse0x28c5ad0();
   input += synapse0x28c5b10();
   input += synapse0x28c5b50();
   input += synapse0x28c55e0();
   input += synapse0x28c5620();
   input += synapse0x28c5ca0();
   input += synapse0x28c5ce0();
   input += synapse0x28c5d20();
   input += synapse0x28c5d60();
   input += synapse0x28c5da0();
   input += synapse0x28c5de0();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28c5450() {
   double input = input0x28c5450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28c5e20() {
   double input = -1.68861;
   input += synapse0x28c6160();
   input += synapse0x28c61a0();
   input += synapse0x28c61e0();
   input += synapse0x28c6220();
   input += synapse0x28c6260();
   input += synapse0x28c62a0();
   input += synapse0x28c62e0();
   input += synapse0x28c6320();
   input += synapse0x28c6360();
   input += synapse0x28c63a0();
   input += synapse0x28c63e0();
   input += synapse0x28c6420();
   input += synapse0x28c6460();
   input += synapse0x28c64a0();
   input += synapse0x28c64e0();
   input += synapse0x28c6520();
   input += synapse0x28c5fb0();
   input += synapse0x28c5ff0();
   input += synapse0x28c6670();
   input += synapse0x28c66b0();
   input += synapse0x28c66f0();
   input += synapse0x28c6730();
   input += synapse0x28c6770();
   input += synapse0x28c67b0();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28c5e20() {
   double input = input0x28c5e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28c67f0() {
   double input = -3.32966;
   input += synapse0x28c6b30();
   input += synapse0x28c6b70();
   input += synapse0x28c6bb0();
   input += synapse0x28c6bf0();
   input += synapse0x28c6c30();
   input += synapse0x28c6c70();
   input += synapse0x28c6cb0();
   input += synapse0x28c6cf0();
   input += synapse0x28c6d30();
   input += synapse0x28c6d70();
   input += synapse0x28c6db0();
   input += synapse0x28c6df0();
   input += synapse0x28c6e30();
   input += synapse0x28c6e70();
   input += synapse0x28c6eb0();
   input += synapse0x28c6ef0();
   input += synapse0x28c6980();
   input += synapse0x28c69c0();
   input += synapse0x28c7040();
   input += synapse0x28c7080();
   input += synapse0x28c70c0();
   input += synapse0x28c7100();
   input += synapse0x28c7140();
   input += synapse0x28c7180();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28c67f0() {
   double input = input0x28c67f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28cd9f0() {
   double input = 0.682958;
   input += synapse0x2667090();
   input += synapse0x26670d0();
   input += synapse0x28a4c30();
   input += synapse0x28a4c70();
   input += synapse0x28a5600();
   input += synapse0x28a5640();
   input += synapse0x28a63d0();
   input += synapse0x28a6410();
   input += synapse0x28a6da0();
   input += synapse0x28a6de0();
   input += synapse0x28a7770();
   input += synapse0x28a77b0();
   input += synapse0x28a8250();
   input += synapse0x28a8290();
   input += synapse0x28a8c20();
   input += synapse0x28a8c60();
   input += synapse0x28a5d00();
   input += synapse0x28a5d40();
   input += synapse0x28aa7d0();
   input += synapse0x28aa810();
   input += synapse0x28ab1a0();
   input += synapse0x28ab1e0();
   input += synapse0x28abb70();
   input += synapse0x28abbb0();
   input += synapse0x28ac540();
   input += synapse0x28ac580();
   input += synapse0x28a06e0();
   input += synapse0x28a0720();
   input += synapse0x28ae630();
   input += synapse0x28ae670();
   input += synapse0x28af000();
   input += synapse0x28af040();
   input += synapse0x28af9d0();
   input += synapse0x28afa10();
   input += synapse0x28b03a0();
   input += synapse0x28b03e0();
   input += synapse0x28b0d70();
   input += synapse0x28b0db0();
   input += synapse0x28a98c0();
   input += synapse0x28a9900();
   input += synapse0x28b3170();
   input += synapse0x28b31b0();
   input += synapse0x28b3b00();
   input += synapse0x28b3b40();
   input += synapse0x28b44d0();
   input += synapse0x28b4510();
   input += synapse0x28b4ea0();
   input += synapse0x28b4ee0();
   input += synapse0x28b5870();
   input += synapse0x28b58b0();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28cd9f0() {
   double input = input0x28cd9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28cdd90() {
   double input = 0.697208;
   input += synapse0x28b7fb0();
   input += synapse0x28b7ff0();
   input += synapse0x28ad570();
   input += synapse0x28ad5b0();
   input += synapse0x28bab90();
   input += synapse0x28babd0();
   input += synapse0x28bb560();
   input += synapse0x28bb5a0();
   input += synapse0x28bbf30();
   input += synapse0x28bbf70();
   input += synapse0x28bc900();
   input += synapse0x28bc940();
   input += synapse0x28bd2d0();
   input += synapse0x28bd310();
   input += synapse0x28bdca0();
   input += synapse0x28bdce0();
   input += synapse0x28be670();
   input += synapse0x28be6b0();
   input += synapse0x28bf040();
   input += synapse0x28bf080();
   input += synapse0x28bfc20();
   input += synapse0x28bfc60();
   input += synapse0x28c05f0();
   input += synapse0x28c0630();
   input += synapse0x28b1470();
   input += synapse0x28b14b0();
   input += synapse0x28b1e40();
   input += synapse0x28b1e80();
   input += synapse0x28b2810();
   input += synapse0x28b2850();
   input += synapse0x28c4d30();
   input += synapse0x28c4d70();
   input += synapse0x28c5700();
   input += synapse0x28c5740();
   input += synapse0x28c60d0();
   input += synapse0x28c6110();
   input += synapse0x28c6aa0();
   input += synapse0x28c6ae0();
   input += synapse0x28a2990();
   input += synapse0x28a29d0();
   input += synapse0x28b6240();
   input += synapse0x28b6280();
   input += synapse0x28c71c0();
   input += synapse0x28c7200();
   input += synapse0x28c7240();
   input += synapse0x28c7280();
   input += synapse0x28ce130();
   input += synapse0x28ce170();
   input += synapse0x28ce1b0();
   input += synapse0x28ce1f0();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28cdd90() {
   double input = input0x28cdd90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28ce230() {
   double input = 1.13785;
   input += synapse0x28ce570();
   input += synapse0x28ce5b0();
   input += synapse0x28ce5f0();
   input += synapse0x28ce630();
   input += synapse0x28ce670();
   input += synapse0x28ce6b0();
   input += synapse0x28ce6f0();
   input += synapse0x28ce730();
   input += synapse0x28ce770();
   input += synapse0x28ce7b0();
   input += synapse0x28ce7f0();
   input += synapse0x28ce830();
   input += synapse0x28ce870();
   input += synapse0x28ce8b0();
   input += synapse0x28ce8f0();
   input += synapse0x28ce930();
   input += synapse0x28ce3c0();
   input += synapse0x28ce400();
   input += synapse0x28cea80();
   input += synapse0x28ceac0();
   input += synapse0x28ceb00();
   input += synapse0x28ceb40();
   input += synapse0x28ceb80();
   input += synapse0x28cebc0();
   input += synapse0x28cec00();
   input += synapse0x28cec40();
   input += synapse0x28cec80();
   input += synapse0x28cecc0();
   input += synapse0x28ced00();
   input += synapse0x28ced40();
   input += synapse0x28ced80();
   input += synapse0x28cedc0();
   input += synapse0x28ce970();
   input += synapse0x28ce9b0();
   input += synapse0x28ce9f0();
   input += synapse0x28cea30();
   input += synapse0x28cf010();
   input += synapse0x28cf050();
   input += synapse0x28cf090();
   input += synapse0x28cf0d0();
   input += synapse0x28cf110();
   input += synapse0x28cf150();
   input += synapse0x28cf190();
   input += synapse0x28cf1d0();
   input += synapse0x28cf210();
   input += synapse0x28cf250();
   input += synapse0x28cf290();
   input += synapse0x28cf2d0();
   input += synapse0x28cf310();
   input += synapse0x28cf350();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28ce230() {
   double input = input0x28ce230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28cf390() {
   double input = 2.1577;
   input += synapse0x28cf6d0();
   input += synapse0x28cf710();
   input += synapse0x28cf750();
   input += synapse0x28cf790();
   input += synapse0x28cf7d0();
   input += synapse0x28cf810();
   input += synapse0x28cf850();
   input += synapse0x28cf890();
   input += synapse0x28cf8d0();
   input += synapse0x28cf910();
   input += synapse0x28cf950();
   input += synapse0x28cf990();
   input += synapse0x28cf9d0();
   input += synapse0x28cfa10();
   input += synapse0x28cfa50();
   input += synapse0x28cfa90();
   input += synapse0x28cf520();
   input += synapse0x28cf560();
   input += synapse0x28cfbe0();
   input += synapse0x28cfc20();
   input += synapse0x28cfc60();
   input += synapse0x28cfca0();
   input += synapse0x28cfce0();
   input += synapse0x28cfd20();
   input += synapse0x28cfd60();
   input += synapse0x28cfda0();
   input += synapse0x28cfde0();
   input += synapse0x28cfe20();
   input += synapse0x28cfe60();
   input += synapse0x28cfea0();
   input += synapse0x28cfee0();
   input += synapse0x28cff20();
   input += synapse0x28cfad0();
   input += synapse0x28cfb10();
   input += synapse0x28cfb50();
   input += synapse0x28cfb90();
   input += synapse0x28d0170();
   input += synapse0x28d01b0();
   input += synapse0x28d01f0();
   input += synapse0x28d0230();
   input += synapse0x28d0270();
   input += synapse0x28d02b0();
   input += synapse0x28d02f0();
   input += synapse0x28d0330();
   input += synapse0x28d0370();
   input += synapse0x28d03b0();
   input += synapse0x28d03f0();
   input += synapse0x28d0430();
   input += synapse0x28d0470();
   input += synapse0x28d04b0();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28cf390() {
   double input = input0x28cf390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28d04f0() {
   double input = 1.18669;
   input += synapse0x28d0830();
   input += synapse0x28d0870();
   input += synapse0x28d08b0();
   input += synapse0x28d08f0();
   input += synapse0x28d0930();
   input += synapse0x28d0970();
   input += synapse0x28d09b0();
   input += synapse0x28d09f0();
   input += synapse0x28d0a30();
   input += synapse0x28d0a70();
   input += synapse0x28d0ab0();
   input += synapse0x28d0af0();
   input += synapse0x28d0b30();
   input += synapse0x28d0b70();
   input += synapse0x28d0bb0();
   input += synapse0x28d0bf0();
   input += synapse0x28d0680();
   input += synapse0x28d06c0();
   input += synapse0x28d0d40();
   input += synapse0x28d0d80();
   input += synapse0x28d0dc0();
   input += synapse0x28d0e00();
   input += synapse0x28d0e40();
   input += synapse0x28d0e80();
   input += synapse0x28d0ec0();
   input += synapse0x28d0f00();
   input += synapse0x28d0f40();
   input += synapse0x28d0f80();
   input += synapse0x28d0fc0();
   input += synapse0x28d1000();
   input += synapse0x28d1040();
   input += synapse0x28d1080();
   input += synapse0x28d0c30();
   input += synapse0x28d0c70();
   input += synapse0x28d0cb0();
   input += synapse0x28d0cf0();
   input += synapse0x28d12d0();
   input += synapse0x28d1310();
   input += synapse0x28d1350();
   input += synapse0x28d1390();
   input += synapse0x28d13d0();
   input += synapse0x28d1410();
   input += synapse0x28d1450();
   input += synapse0x28d1490();
   input += synapse0x28d14d0();
   input += synapse0x28d1510();
   input += synapse0x28d1550();
   input += synapse0x28d1590();
   input += synapse0x28d15d0();
   input += synapse0x28d1610();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28d04f0() {
   double input = input0x28d04f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sR::input0x28d1650() {
   double input = 2.58635;
   input += synapse0x28d1870();
   input += synapse0x28d18b0();
   input += synapse0x28d18f0();
   input += synapse0x28d1930();
   input += synapse0x28d1970();
   return input;
}

double NNfunction_ns_chi04_sR::neuron0x28d1650() {
   double input = input0x28d1650();
   return (input * 1)+0;
}

double NNfunction_ns_chi04_sR::synapse0x289d600() {
   return (neuron0x289d740()*0.454475);
}

double NNfunction_ns_chi04_sR::synapse0x289d640() {
   return (neuron0x289da80()*2.20529);
}

double NNfunction_ns_chi04_sR::synapse0x28a2a20() {
   return (neuron0x289ddc0()*-0.329382);
}

double NNfunction_ns_chi04_sR::synapse0x28a2a60() {
   return (neuron0x289e100()*0.0563666);
}

double NNfunction_ns_chi04_sR::synapse0x28a2aa0() {
   return (neuron0x289e440()*-0.503458);
}

double NNfunction_ns_chi04_sR::synapse0x28a2ae0() {
   return (neuron0x289e780()*0.116405);
}

double NNfunction_ns_chi04_sR::synapse0x28a2b20() {
   return (neuron0x289eac0()*-0.384017);
}

double NNfunction_ns_chi04_sR::synapse0x28a2b60() {
   return (neuron0x289ee00()*0.555774);
}

double NNfunction_ns_chi04_sR::synapse0x28a2ba0() {
   return (neuron0x289f140()*-0.498667);
}

double NNfunction_ns_chi04_sR::synapse0x28a2be0() {
   return (neuron0x289f480()*-0.000677192);
}

double NNfunction_ns_chi04_sR::synapse0x28a2c20() {
   return (neuron0x289f7c0()*-0.281773);
}

double NNfunction_ns_chi04_sR::synapse0x28a2c60() {
   return (neuron0x289fb00()*-0.208314);
}

double NNfunction_ns_chi04_sR::synapse0x28a2ca0() {
   return (neuron0x289fe40()*-0.123128);
}

double NNfunction_ns_chi04_sR::synapse0x28a2ce0() {
   return (neuron0x28a0180()*-0.177542);
}

double NNfunction_ns_chi04_sR::synapse0x28a2d20() {
   return (neuron0x28a04c0()*0.170282);
}

double NNfunction_ns_chi04_sR::synapse0x28a2d60() {
   return (neuron0x28a0800()*-0.234738);
}

double NNfunction_ns_chi04_sR::synapse0x289d570() {
   return (neuron0x28a0b40()*0.173126);
}

double NNfunction_ns_chi04_sR::synapse0x289d5b0() {
   return (neuron0x28a10a0()*-0.0386872);
}

double NNfunction_ns_chi04_sR::synapse0x26588e0() {
   return (neuron0x28a12c0()*-0.0981811);
}

double NNfunction_ns_chi04_sR::synapse0x2658920() {
   return (neuron0x28a1600()*-0.0814694);
}

double NNfunction_ns_chi04_sR::synapse0x28a2fc0() {
   return (neuron0x28a1940()*-0.322257);
}

double NNfunction_ns_chi04_sR::synapse0x28a3000() {
   return (neuron0x28a1c80()*0.361815);
}

double NNfunction_ns_chi04_sR::synapse0x28a3040() {
   return (neuron0x28a1fc0()*0.0275166);
}

double NNfunction_ns_chi04_sR::synapse0x28a3080() {
   return (neuron0x28a2300()*-0.401797);
}

double NNfunction_ns_chi04_sR::synapse0x28a3400() {
   return (neuron0x289d740()*-0.0183015);
}

double NNfunction_ns_chi04_sR::synapse0x28a3440() {
   return (neuron0x289da80()*-2.6736);
}

double NNfunction_ns_chi04_sR::synapse0x28a3480() {
   return (neuron0x289ddc0()*-1.11509);
}

double NNfunction_ns_chi04_sR::synapse0x28a34c0() {
   return (neuron0x289e100()*-0.0849675);
}

double NNfunction_ns_chi04_sR::synapse0x28a3500() {
   return (neuron0x289e440()*0.42303);
}

double NNfunction_ns_chi04_sR::synapse0x28a3540() {
   return (neuron0x289e780()*-0.290364);
}

double NNfunction_ns_chi04_sR::synapse0x28a3580() {
   return (neuron0x289eac0()*0.17045);
}

double NNfunction_ns_chi04_sR::synapse0x28a35c0() {
   return (neuron0x289ee00()*0.228846);
}

double NNfunction_ns_chi04_sR::synapse0x28a3600() {
   return (neuron0x289f140()*-0.260338);
}

double NNfunction_ns_chi04_sR::synapse0x28a2eb0() {
   return (neuron0x289f480()*-0.11594);
}

double NNfunction_ns_chi04_sR::synapse0x28a2ef0() {
   return (neuron0x289f7c0()*-0.230308);
}

double NNfunction_ns_chi04_sR::synapse0x28a2f30() {
   return (neuron0x289fb00()*-0.0232517);
}

double NNfunction_ns_chi04_sR::synapse0x28a2f70() {
   return (neuron0x289fe40()*-0.214657);
}

double NNfunction_ns_chi04_sR::synapse0x28a3850() {
   return (neuron0x28a0180()*0.0547763);
}

double NNfunction_ns_chi04_sR::synapse0x28a3890() {
   return (neuron0x28a04c0()*-0.141666);
}

double NNfunction_ns_chi04_sR::synapse0x28a38d0() {
   return (neuron0x28a0800()*-0.134232);
}

double NNfunction_ns_chi04_sR::synapse0x28a3250() {
   return (neuron0x28a0b40()*-0.0415489);
}

double NNfunction_ns_chi04_sR::synapse0x28a3290() {
   return (neuron0x28a10a0()*0.198984);
}

double NNfunction_ns_chi04_sR::synapse0x28a3a20() {
   return (neuron0x28a12c0()*0.273066);
}

double NNfunction_ns_chi04_sR::synapse0x28a3a60() {
   return (neuron0x28a1600()*0.325067);
}

double NNfunction_ns_chi04_sR::synapse0x28a3aa0() {
   return (neuron0x28a1940()*0.0972207);
}

double NNfunction_ns_chi04_sR::synapse0x28a3ae0() {
   return (neuron0x28a1c80()*0.0125581);
}

double NNfunction_ns_chi04_sR::synapse0x28a3b20() {
   return (neuron0x28a1fc0()*0.0430443);
}

double NNfunction_ns_chi04_sR::synapse0x28a3b60() {
   return (neuron0x28a2300()*-0.965642);
}

double NNfunction_ns_chi04_sR::synapse0x28a3ee0() {
   return (neuron0x289d740()*-0.101047);
}

double NNfunction_ns_chi04_sR::synapse0x28a3f20() {
   return (neuron0x289da80()*-0.400708);
}

double NNfunction_ns_chi04_sR::synapse0x28a3f60() {
   return (neuron0x289ddc0()*0.975516);
}

double NNfunction_ns_chi04_sR::synapse0x28a3fa0() {
   return (neuron0x289e100()*-0.531334);
}

double NNfunction_ns_chi04_sR::synapse0x28a3fe0() {
   return (neuron0x289e440()*-1.77732);
}

double NNfunction_ns_chi04_sR::synapse0x28a4020() {
   return (neuron0x289e780()*-1.03175);
}

double NNfunction_ns_chi04_sR::synapse0x28a4060() {
   return (neuron0x289eac0()*1.41474);
}

double NNfunction_ns_chi04_sR::synapse0x28a40a0() {
   return (neuron0x289ee00()*-0.501306);
}

double NNfunction_ns_chi04_sR::synapse0x28a40e0() {
   return (neuron0x289f140()*0.351102);
}

double NNfunction_ns_chi04_sR::synapse0x28a4120() {
   return (neuron0x289f480()*0.506723);
}

double NNfunction_ns_chi04_sR::synapse0x28a4160() {
   return (neuron0x289f7c0()*1.74259);
}

double NNfunction_ns_chi04_sR::synapse0x28a41a0() {
   return (neuron0x289fb00()*-1.55323);
}

double NNfunction_ns_chi04_sR::synapse0x28a41e0() {
   return (neuron0x289fe40()*-0.400726);
}

double NNfunction_ns_chi04_sR::synapse0x28a4220() {
   return (neuron0x28a0180()*-1.35971);
}

double NNfunction_ns_chi04_sR::synapse0x28a4260() {
   return (neuron0x28a04c0()*0.318441);
}

double NNfunction_ns_chi04_sR::synapse0x28a42a0() {
   return (neuron0x28a0800()*-0.713001);
}

double NNfunction_ns_chi04_sR::synapse0x28a3d30() {
   return (neuron0x28a0b40()*-1.25258);
}

double NNfunction_ns_chi04_sR::synapse0x28a3d70() {
   return (neuron0x28a10a0()*-1.82551);
}

double NNfunction_ns_chi04_sR::synapse0x2658fd0() {
   return (neuron0x28a12c0()*-0.38174);
}

double NNfunction_ns_chi04_sR::synapse0x26668a0() {
   return (neuron0x28a1600()*-1.94492);
}

double NNfunction_ns_chi04_sR::synapse0x26668e0() {
   return (neuron0x28a1940()*-1.72807);
}

double NNfunction_ns_chi04_sR::synapse0x288c7d0() {
   return (neuron0x28a1c80()*0.536288);
}

double NNfunction_ns_chi04_sR::synapse0x288c810() {
   return (neuron0x28a1fc0()*-0.750132);
}

double NNfunction_ns_chi04_sR::synapse0x288c850() {
   return (neuron0x28a2300()*-0.316121);
}

double NNfunction_ns_chi04_sR::synapse0x2667120() {
   return (neuron0x289d740()*0.018965);
}

double NNfunction_ns_chi04_sR::synapse0x28a37d0() {
   return (neuron0x289da80()*1.78733);
}

double NNfunction_ns_chi04_sR::synapse0x28a3810() {
   return (neuron0x289ddc0()*1.11117);
}

double NNfunction_ns_chi04_sR::synapse0x28a43f0() {
   return (neuron0x289e100()*-0.0884043);
}

double NNfunction_ns_chi04_sR::synapse0x28a4430() {
   return (neuron0x289e440()*-0.161399);
}

double NNfunction_ns_chi04_sR::synapse0x28a4470() {
   return (neuron0x289e780()*0.0100964);
}

double NNfunction_ns_chi04_sR::synapse0x28a44b0() {
   return (neuron0x289eac0()*-0.126314);
}

double NNfunction_ns_chi04_sR::synapse0x28a44f0() {
   return (neuron0x289ee00()*0.118093);
}

double NNfunction_ns_chi04_sR::synapse0x28a4530() {
   return (neuron0x289f140()*-0.016376);
}

double NNfunction_ns_chi04_sR::synapse0x28a4570() {
   return (neuron0x289f480()*-0.100593);
}

double NNfunction_ns_chi04_sR::synapse0x28a45b0() {
   return (neuron0x289f7c0()*0.0570744);
}

double NNfunction_ns_chi04_sR::synapse0x28a45f0() {
   return (neuron0x289fb00()*0.052586);
}

double NNfunction_ns_chi04_sR::synapse0x28a4630() {
   return (neuron0x289fe40()*0.0988876);
}

double NNfunction_ns_chi04_sR::synapse0x28a4670() {
   return (neuron0x28a0180()*-0.016271);
}

double NNfunction_ns_chi04_sR::synapse0x28a46b0() {
   return (neuron0x28a04c0()*0.0806447);
}

double NNfunction_ns_chi04_sR::synapse0x28a46f0() {
   return (neuron0x28a0800()*-0.0346869);
}

double NNfunction_ns_chi04_sR::synapse0x289d680() {
   return (neuron0x28a0b40()*-0.0258608);
}

double NNfunction_ns_chi04_sR::synapse0x289d6c0() {
   return (neuron0x28a10a0()*0.0190951);
}

double NNfunction_ns_chi04_sR::synapse0x289d700() {
   return (neuron0x28a12c0()*-0.410309);
}

double NNfunction_ns_chi04_sR::synapse0x28a4840() {
   return (neuron0x28a1600()*-0.00269714);
}

double NNfunction_ns_chi04_sR::synapse0x28a4880() {
   return (neuron0x28a1940()*-0.0519862);
}

double NNfunction_ns_chi04_sR::synapse0x28a48c0() {
   return (neuron0x28a1c80()*0.0183893);
}

double NNfunction_ns_chi04_sR::synapse0x28a4900() {
   return (neuron0x28a1fc0()*0.0370252);
}

double NNfunction_ns_chi04_sR::synapse0x28a4940() {
   return (neuron0x28a2300()*1.66664);
}

double NNfunction_ns_chi04_sR::synapse0x28a4cc0() {
   return (neuron0x289d740()*0.316839);
}

double NNfunction_ns_chi04_sR::synapse0x28a4d00() {
   return (neuron0x289da80()*-2.24288);
}

double NNfunction_ns_chi04_sR::synapse0x28a4d40() {
   return (neuron0x289ddc0()*-1.15217);
}

double NNfunction_ns_chi04_sR::synapse0x28a4d80() {
   return (neuron0x289e100()*-1.18595);
}

double NNfunction_ns_chi04_sR::synapse0x28a4dc0() {
   return (neuron0x289e440()*1.95109);
}

double NNfunction_ns_chi04_sR::synapse0x28a4e00() {
   return (neuron0x289e780()*-0.720942);
}

double NNfunction_ns_chi04_sR::synapse0x28a4e40() {
   return (neuron0x289eac0()*2.10773);
}

double NNfunction_ns_chi04_sR::synapse0x28a4e80() {
   return (neuron0x289ee00()*1.76485);
}

double NNfunction_ns_chi04_sR::synapse0x28a4ec0() {
   return (neuron0x289f140()*-0.809334);
}

double NNfunction_ns_chi04_sR::synapse0x28a4f00() {
   return (neuron0x289f480()*0.609919);
}

double NNfunction_ns_chi04_sR::synapse0x28a4f40() {
   return (neuron0x289f7c0()*-1.11373);
}

double NNfunction_ns_chi04_sR::synapse0x28a4f80() {
   return (neuron0x289fb00()*0.51014);
}

double NNfunction_ns_chi04_sR::synapse0x28a4fc0() {
   return (neuron0x289fe40()*-1.64259);
}

double NNfunction_ns_chi04_sR::synapse0x28a5000() {
   return (neuron0x28a0180()*1.11623);
}

double NNfunction_ns_chi04_sR::synapse0x28a5040() {
   return (neuron0x28a04c0()*-1.02489);
}

double NNfunction_ns_chi04_sR::synapse0x28a5080() {
   return (neuron0x28a0800()*-0.879002);
}

double NNfunction_ns_chi04_sR::synapse0x28a4b10() {
   return (neuron0x28a0b40()*1.1632);
}

double NNfunction_ns_chi04_sR::synapse0x28a4b50() {
   return (neuron0x28a10a0()*1.13673);
}

double NNfunction_ns_chi04_sR::synapse0x28a51d0() {
   return (neuron0x28a12c0()*-0.303872);
}

double NNfunction_ns_chi04_sR::synapse0x28a5210() {
   return (neuron0x28a1600()*0.869607);
}

double NNfunction_ns_chi04_sR::synapse0x28a5250() {
   return (neuron0x28a1940()*1.32197);
}

double NNfunction_ns_chi04_sR::synapse0x28a5290() {
   return (neuron0x28a1c80()*-0.517664);
}

double NNfunction_ns_chi04_sR::synapse0x28a52d0() {
   return (neuron0x28a1fc0()*0.0529344);
}

double NNfunction_ns_chi04_sR::synapse0x28a5310() {
   return (neuron0x28a2300()*-0.231777);
}

double NNfunction_ns_chi04_sR::synapse0x28a5690() {
   return (neuron0x289d740()*1.52483);
}

double NNfunction_ns_chi04_sR::synapse0x28a56d0() {
   return (neuron0x289da80()*-1.41485);
}

double NNfunction_ns_chi04_sR::synapse0x28a5710() {
   return (neuron0x289ddc0()*0.772626);
}

double NNfunction_ns_chi04_sR::synapse0x28a5750() {
   return (neuron0x289e100()*-0.640621);
}

double NNfunction_ns_chi04_sR::synapse0x28a5790() {
   return (neuron0x289e440()*-0.138321);
}

double NNfunction_ns_chi04_sR::synapse0x28a57d0() {
   return (neuron0x289e780()*0.069406);
}

double NNfunction_ns_chi04_sR::synapse0x28a5810() {
   return (neuron0x289eac0()*1.19217);
}

double NNfunction_ns_chi04_sR::synapse0x28a5850() {
   return (neuron0x289ee00()*-1.03772);
}

double NNfunction_ns_chi04_sR::synapse0x28a5890() {
   return (neuron0x289f140()*-1.44534);
}

double NNfunction_ns_chi04_sR::synapse0x2666bf0() {
   return (neuron0x289f480()*-0.186488);
}

double NNfunction_ns_chi04_sR::synapse0x2666c30() {
   return (neuron0x289f7c0()*-0.42681);
}

double NNfunction_ns_chi04_sR::synapse0x2666c70() {
   return (neuron0x289fb00()*1.23191);
}

double NNfunction_ns_chi04_sR::synapse0x2666cb0() {
   return (neuron0x289fe40()*-0.159099);
}

double NNfunction_ns_chi04_sR::synapse0x2666cf0() {
   return (neuron0x28a0180()*0.577592);
}

double NNfunction_ns_chi04_sR::synapse0x2666d30() {
   return (neuron0x28a04c0()*-0.123189);
}

double NNfunction_ns_chi04_sR::synapse0x2666d70() {
   return (neuron0x28a0800()*1.53207);
}

double NNfunction_ns_chi04_sR::synapse0x28a54e0() {
   return (neuron0x28a0b40()*0.461485);
}

double NNfunction_ns_chi04_sR::synapse0x28a5520() {
   return (neuron0x28a10a0()*-1.50196);
}

double NNfunction_ns_chi04_sR::synapse0x2666ec0() {
   return (neuron0x28a12c0()*-1.15094);
}

double NNfunction_ns_chi04_sR::synapse0x2666f00() {
   return (neuron0x28a1600()*-0.4134);
}

double NNfunction_ns_chi04_sR::synapse0x2666f40() {
   return (neuron0x28a1940()*0.356854);
}

double NNfunction_ns_chi04_sR::synapse0x2666f80() {
   return (neuron0x28a1c80()*-0.513139);
}

double NNfunction_ns_chi04_sR::synapse0x2666fc0() {
   return (neuron0x28a1fc0()*-1.05834);
}

double NNfunction_ns_chi04_sR::synapse0x28a60e0() {
   return (neuron0x28a2300()*-0.204483);
}

double NNfunction_ns_chi04_sR::synapse0x28a6460() {
   return (neuron0x289d740()*0.0448508);
}

double NNfunction_ns_chi04_sR::synapse0x28a64a0() {
   return (neuron0x289da80()*-0.705193);
}

double NNfunction_ns_chi04_sR::synapse0x28a64e0() {
   return (neuron0x289ddc0()*-0.00741043);
}

double NNfunction_ns_chi04_sR::synapse0x28a6520() {
   return (neuron0x289e100()*-0.371632);
}

double NNfunction_ns_chi04_sR::synapse0x28a6560() {
   return (neuron0x289e440()*-0.503141);
}

double NNfunction_ns_chi04_sR::synapse0x28a65a0() {
   return (neuron0x289e780()*0.779326);
}

double NNfunction_ns_chi04_sR::synapse0x28a65e0() {
   return (neuron0x289eac0()*0.724247);
}

double NNfunction_ns_chi04_sR::synapse0x28a6620() {
   return (neuron0x289ee00()*-0.797198);
}

double NNfunction_ns_chi04_sR::synapse0x28a6660() {
   return (neuron0x289f140()*0.188677);
}

double NNfunction_ns_chi04_sR::synapse0x28a66a0() {
   return (neuron0x289f480()*-0.367854);
}

double NNfunction_ns_chi04_sR::synapse0x28a66e0() {
   return (neuron0x289f7c0()*-0.00791514);
}

double NNfunction_ns_chi04_sR::synapse0x28a6720() {
   return (neuron0x289fb00()*-0.3719);
}

double NNfunction_ns_chi04_sR::synapse0x28a6760() {
   return (neuron0x289fe40()*-1.72375);
}

double NNfunction_ns_chi04_sR::synapse0x28a67a0() {
   return (neuron0x28a0180()*-0.154948);
}

double NNfunction_ns_chi04_sR::synapse0x28a67e0() {
   return (neuron0x28a04c0()*0.349886);
}

double NNfunction_ns_chi04_sR::synapse0x28a6820() {
   return (neuron0x28a0800()*0.0541438);
}

double NNfunction_ns_chi04_sR::synapse0x28a62b0() {
   return (neuron0x28a0b40()*-0.404696);
}

double NNfunction_ns_chi04_sR::synapse0x28a62f0() {
   return (neuron0x28a10a0()*-0.36838);
}

double NNfunction_ns_chi04_sR::synapse0x28a6970() {
   return (neuron0x28a12c0()*0.180469);
}

double NNfunction_ns_chi04_sR::synapse0x28a69b0() {
   return (neuron0x28a1600()*-0.982144);
}

double NNfunction_ns_chi04_sR::synapse0x28a69f0() {
   return (neuron0x28a1940()*0.101012);
}

double NNfunction_ns_chi04_sR::synapse0x28a6a30() {
   return (neuron0x28a1c80()*-0.561036);
}

double NNfunction_ns_chi04_sR::synapse0x28a6a70() {
   return (neuron0x28a1fc0()*0.463115);
}

double NNfunction_ns_chi04_sR::synapse0x28a6ab0() {
   return (neuron0x28a2300()*-1.4655);
}

double NNfunction_ns_chi04_sR::synapse0x28a6e30() {
   return (neuron0x289d740()*0.176464);
}

double NNfunction_ns_chi04_sR::synapse0x28a6e70() {
   return (neuron0x289da80()*2.10638);
}

double NNfunction_ns_chi04_sR::synapse0x28a6eb0() {
   return (neuron0x289ddc0()*2.53515);
}

double NNfunction_ns_chi04_sR::synapse0x28a6ef0() {
   return (neuron0x289e100()*-0.0148916);
}

double NNfunction_ns_chi04_sR::synapse0x28a6f30() {
   return (neuron0x289e440()*0.541546);
}

double NNfunction_ns_chi04_sR::synapse0x28a6f70() {
   return (neuron0x289e780()*0.150357);
}

double NNfunction_ns_chi04_sR::synapse0x28a6fb0() {
   return (neuron0x289eac0()*0.460913);
}

double NNfunction_ns_chi04_sR::synapse0x28a6ff0() {
   return (neuron0x289ee00()*-0.906195);
}

double NNfunction_ns_chi04_sR::synapse0x28a7030() {
   return (neuron0x289f140()*-0.35201);
}

double NNfunction_ns_chi04_sR::synapse0x28a7070() {
   return (neuron0x289f480()*0.359735);
}

double NNfunction_ns_chi04_sR::synapse0x28a70b0() {
   return (neuron0x289f7c0()*0.00804704);
}

double NNfunction_ns_chi04_sR::synapse0x28a70f0() {
   return (neuron0x289fb00()*0.587646);
}

double NNfunction_ns_chi04_sR::synapse0x28a7130() {
   return (neuron0x289fe40()*-0.746913);
}

double NNfunction_ns_chi04_sR::synapse0x28a7170() {
   return (neuron0x28a0180()*0.378754);
}

double NNfunction_ns_chi04_sR::synapse0x28a71b0() {
   return (neuron0x28a04c0()*-0.405727);
}

double NNfunction_ns_chi04_sR::synapse0x28a71f0() {
   return (neuron0x28a0800()*0.319457);
}

double NNfunction_ns_chi04_sR::synapse0x28a6c80() {
   return (neuron0x28a0b40()*0.446085);
}

double NNfunction_ns_chi04_sR::synapse0x28a6cc0() {
   return (neuron0x28a10a0()*1.2949);
}

double NNfunction_ns_chi04_sR::synapse0x28a7340() {
   return (neuron0x28a12c0()*-0.198179);
}

double NNfunction_ns_chi04_sR::synapse0x28a7380() {
   return (neuron0x28a1600()*-0.233526);
}

double NNfunction_ns_chi04_sR::synapse0x28a73c0() {
   return (neuron0x28a1940()*-0.262496);
}

double NNfunction_ns_chi04_sR::synapse0x28a7400() {
   return (neuron0x28a1c80()*1.23207);
}

double NNfunction_ns_chi04_sR::synapse0x28a7440() {
   return (neuron0x28a1fc0()*-0.652193);
}

double NNfunction_ns_chi04_sR::synapse0x28a7480() {
   return (neuron0x28a2300()*0.175188);
}

double NNfunction_ns_chi04_sR::synapse0x28a0f90() {
   return (neuron0x289d740()*-0.316382);
}

double NNfunction_ns_chi04_sR::synapse0x28a0fd0() {
   return (neuron0x289da80()*-1.31303);
}

double NNfunction_ns_chi04_sR::synapse0x28a1010() {
   return (neuron0x289ddc0()*1.07986);
}

double NNfunction_ns_chi04_sR::synapse0x28a1050() {
   return (neuron0x289e100()*-0.027668);
}

double NNfunction_ns_chi04_sR::synapse0x28a7a10() {
   return (neuron0x289e440()*1.47768);
}

double NNfunction_ns_chi04_sR::synapse0x28a7a50() {
   return (neuron0x289e780()*-0.390956);
}

double NNfunction_ns_chi04_sR::synapse0x28a7a90() {
   return (neuron0x289eac0()*-0.0360267);
}

double NNfunction_ns_chi04_sR::synapse0x28a7ad0() {
   return (neuron0x289ee00()*1.97677);
}

double NNfunction_ns_chi04_sR::synapse0x28a7b10() {
   return (neuron0x289f140()*0.888829);
}

double NNfunction_ns_chi04_sR::synapse0x28a7b50() {
   return (neuron0x289f480()*-0.377989);
}

double NNfunction_ns_chi04_sR::synapse0x28a7b90() {
   return (neuron0x289f7c0()*-0.736472);
}

double NNfunction_ns_chi04_sR::synapse0x28a7bd0() {
   return (neuron0x289fb00()*0.0248228);
}

double NNfunction_ns_chi04_sR::synapse0x28a7c10() {
   return (neuron0x289fe40()*-0.346102);
}

double NNfunction_ns_chi04_sR::synapse0x28a7c50() {
   return (neuron0x28a0180()*-2.77918);
}

double NNfunction_ns_chi04_sR::synapse0x28a7c90() {
   return (neuron0x28a04c0()*0.575968);
}

double NNfunction_ns_chi04_sR::synapse0x28a7cd0() {
   return (neuron0x28a0800()*1.10669);
}

double NNfunction_ns_chi04_sR::synapse0x28a7650() {
   return (neuron0x28a0b40()*-1.00338);
}

double NNfunction_ns_chi04_sR::synapse0x28a7690() {
   return (neuron0x28a10a0()*-0.1972);
}

double NNfunction_ns_chi04_sR::synapse0x28a7e20() {
   return (neuron0x28a12c0()*-0.175052);
}

double NNfunction_ns_chi04_sR::synapse0x28a7e60() {
   return (neuron0x28a1600()*-1.42614);
}

double NNfunction_ns_chi04_sR::synapse0x28a7ea0() {
   return (neuron0x28a1940()*-0.102966);
}

double NNfunction_ns_chi04_sR::synapse0x28a7ee0() {
   return (neuron0x28a1c80()*-0.661613);
}

double NNfunction_ns_chi04_sR::synapse0x28a7f20() {
   return (neuron0x28a1fc0()*-0.584171);
}

double NNfunction_ns_chi04_sR::synapse0x28a7f60() {
   return (neuron0x28a2300()*-1.74487);
}

double NNfunction_ns_chi04_sR::synapse0x28a82e0() {
   return (neuron0x289d740()*-0.744547);
}

double NNfunction_ns_chi04_sR::synapse0x28a8320() {
   return (neuron0x289da80()*-0.355062);
}

double NNfunction_ns_chi04_sR::synapse0x28a8360() {
   return (neuron0x289ddc0()*1.02739);
}

double NNfunction_ns_chi04_sR::synapse0x28a83a0() {
   return (neuron0x289e100()*-0.669114);
}

double NNfunction_ns_chi04_sR::synapse0x28a83e0() {
   return (neuron0x289e440()*-0.0713126);
}

double NNfunction_ns_chi04_sR::synapse0x28a8420() {
   return (neuron0x289e780()*0.568128);
}

double NNfunction_ns_chi04_sR::synapse0x28a8460() {
   return (neuron0x289eac0()*-0.698569);
}

double NNfunction_ns_chi04_sR::synapse0x28a84a0() {
   return (neuron0x289ee00()*0.673514);
}

double NNfunction_ns_chi04_sR::synapse0x28a84e0() {
   return (neuron0x289f140()*0.195185);
}

double NNfunction_ns_chi04_sR::synapse0x28a8520() {
   return (neuron0x289f480()*-0.339033);
}

double NNfunction_ns_chi04_sR::synapse0x28a8560() {
   return (neuron0x289f7c0()*-0.841793);
}

double NNfunction_ns_chi04_sR::synapse0x28a85a0() {
   return (neuron0x289fb00()*0.247751);
}

double NNfunction_ns_chi04_sR::synapse0x28a85e0() {
   return (neuron0x289fe40()*-0.756356);
}

double NNfunction_ns_chi04_sR::synapse0x28a8620() {
   return (neuron0x28a0180()*0.855778);
}

double NNfunction_ns_chi04_sR::synapse0x28a8660() {
   return (neuron0x28a04c0()*-0.973343);
}

double NNfunction_ns_chi04_sR::synapse0x28a86a0() {
   return (neuron0x28a0800()*-0.743529);
}

double NNfunction_ns_chi04_sR::synapse0x28a8130() {
   return (neuron0x28a0b40()*0.194279);
}

double NNfunction_ns_chi04_sR::synapse0x28a8170() {
   return (neuron0x28a10a0()*0.427357);
}

double NNfunction_ns_chi04_sR::synapse0x28a87f0() {
   return (neuron0x28a12c0()*0.770963);
}

double NNfunction_ns_chi04_sR::synapse0x28a8830() {
   return (neuron0x28a1600()*-0.220671);
}

double NNfunction_ns_chi04_sR::synapse0x28a8870() {
   return (neuron0x28a1940()*-0.240877);
}

double NNfunction_ns_chi04_sR::synapse0x28a88b0() {
   return (neuron0x28a1c80()*0.317039);
}

double NNfunction_ns_chi04_sR::synapse0x28a88f0() {
   return (neuron0x28a1fc0()*-1.22773);
}

double NNfunction_ns_chi04_sR::synapse0x28a8930() {
   return (neuron0x28a2300()*-0.807895);
}

double NNfunction_ns_chi04_sR::synapse0x28a8cb0() {
   return (neuron0x289d740()*-0.00441983);
}

double NNfunction_ns_chi04_sR::synapse0x28a8cf0() {
   return (neuron0x289da80()*-0.0118872);
}

double NNfunction_ns_chi04_sR::synapse0x28a8d30() {
   return (neuron0x289ddc0()*0.0169711);
}

double NNfunction_ns_chi04_sR::synapse0x28a8d70() {
   return (neuron0x289e100()*3.3575);
}

double NNfunction_ns_chi04_sR::synapse0x28a8db0() {
   return (neuron0x289e440()*-0.0157129);
}

double NNfunction_ns_chi04_sR::synapse0x28a8df0() {
   return (neuron0x289e780()*-0.00151324);
}

double NNfunction_ns_chi04_sR::synapse0x28a8e30() {
   return (neuron0x289eac0()*0.0153107);
}

double NNfunction_ns_chi04_sR::synapse0x28a8e70() {
   return (neuron0x289ee00()*-0.0266253);
}

double NNfunction_ns_chi04_sR::synapse0x28a8eb0() {
   return (neuron0x289f140()*-0.0169282);
}

double NNfunction_ns_chi04_sR::synapse0x28a8ef0() {
   return (neuron0x289f480()*-0.00531159);
}

double NNfunction_ns_chi04_sR::synapse0x28a8f30() {
   return (neuron0x289f7c0()*0.000869693);
}

double NNfunction_ns_chi04_sR::synapse0x28a8f70() {
   return (neuron0x289fb00()*0.0129078);
}

double NNfunction_ns_chi04_sR::synapse0x28a8fb0() {
   return (neuron0x289fe40()*-5.86715e-05);
}

double NNfunction_ns_chi04_sR::synapse0x28a8ff0() {
   return (neuron0x28a0180()*0.0220061);
}

double NNfunction_ns_chi04_sR::synapse0x28a9030() {
   return (neuron0x28a04c0()*0.00772301);
}

double NNfunction_ns_chi04_sR::synapse0x28a9070() {
   return (neuron0x28a0800()*-0.00427274);
}

double NNfunction_ns_chi04_sR::synapse0x28a8b00() {
   return (neuron0x28a0b40()*-0.0320284);
}

double NNfunction_ns_chi04_sR::synapse0x28a8b40() {
   return (neuron0x28a10a0()*-0.0141981);
}

double NNfunction_ns_chi04_sR::synapse0x28a58d0() {
   return (neuron0x28a12c0()*-0.0799729);
}

double NNfunction_ns_chi04_sR::synapse0x28a5910() {
   return (neuron0x28a1600()*0.00264059);
}

double NNfunction_ns_chi04_sR::synapse0x28a5950() {
   return (neuron0x28a1940()*-0.0109895);
}

double NNfunction_ns_chi04_sR::synapse0x28a5990() {
   return (neuron0x28a1c80()*0.00090578);
}

double NNfunction_ns_chi04_sR::synapse0x28a59d0() {
   return (neuron0x28a1fc0()*0.000795191);
}

double NNfunction_ns_chi04_sR::synapse0x28a5a10() {
   return (neuron0x28a2300()*-0.0119647);
}

double NNfunction_ns_chi04_sR::synapse0x28a5d90() {
   return (neuron0x289d740()*-0.131913);
}

double NNfunction_ns_chi04_sR::synapse0x28a5dd0() {
   return (neuron0x289da80()*0.469794);
}

double NNfunction_ns_chi04_sR::synapse0x28a5e10() {
   return (neuron0x289ddc0()*-0.370529);
}

double NNfunction_ns_chi04_sR::synapse0x28a5e50() {
   return (neuron0x289e100()*-0.464658);
}

double NNfunction_ns_chi04_sR::synapse0x28a5e90() {
   return (neuron0x289e440()*0.00684333);
}

double NNfunction_ns_chi04_sR::synapse0x28a5ed0() {
   return (neuron0x289e780()*-1.04864);
}

double NNfunction_ns_chi04_sR::synapse0x28a5f10() {
   return (neuron0x289eac0()*-0.96275);
}

double NNfunction_ns_chi04_sR::synapse0x28a5f50() {
   return (neuron0x289ee00()*0.0440848);
}

double NNfunction_ns_chi04_sR::synapse0x28a5f90() {
   return (neuron0x289f140()*-0.134366);
}

double NNfunction_ns_chi04_sR::synapse0x28a5fd0() {
   return (neuron0x289f480()*0.456392);
}

double NNfunction_ns_chi04_sR::synapse0x28a6010() {
   return (neuron0x289f7c0()*-0.136436);
}

double NNfunction_ns_chi04_sR::synapse0x28a6050() {
   return (neuron0x289fb00()*-0.134031);
}

double NNfunction_ns_chi04_sR::synapse0x28a6090() {
   return (neuron0x289fe40()*-0.115196);
}

double NNfunction_ns_chi04_sR::synapse0x28aa1d0() {
   return (neuron0x28a0180()*0.0239325);
}

double NNfunction_ns_chi04_sR::synapse0x28aa210() {
   return (neuron0x28a04c0()*0.969546);
}

double NNfunction_ns_chi04_sR::synapse0x28aa250() {
   return (neuron0x28a0800()*0.177146);
}

double NNfunction_ns_chi04_sR::synapse0x28a5be0() {
   return (neuron0x28a0b40()*-1.19981);
}

double NNfunction_ns_chi04_sR::synapse0x28a5c20() {
   return (neuron0x28a10a0()*-0.388047);
}

double NNfunction_ns_chi04_sR::synapse0x28aa3a0() {
   return (neuron0x28a12c0()*-1.38025);
}

double NNfunction_ns_chi04_sR::synapse0x28aa3e0() {
   return (neuron0x28a1600()*0.790997);
}

double NNfunction_ns_chi04_sR::synapse0x28aa420() {
   return (neuron0x28a1940()*0.785586);
}

double NNfunction_ns_chi04_sR::synapse0x28aa460() {
   return (neuron0x28a1c80()*-0.400354);
}

double NNfunction_ns_chi04_sR::synapse0x28aa4a0() {
   return (neuron0x28a1fc0()*-0.233306);
}

double NNfunction_ns_chi04_sR::synapse0x28aa4e0() {
   return (neuron0x28a2300()*-1.07067);
}

double NNfunction_ns_chi04_sR::synapse0x28aa860() {
   return (neuron0x289d740()*0.204445);
}

double NNfunction_ns_chi04_sR::synapse0x28aa8a0() {
   return (neuron0x289da80()*-1.18777);
}

double NNfunction_ns_chi04_sR::synapse0x28aa8e0() {
   return (neuron0x289ddc0()*3.33411);
}

double NNfunction_ns_chi04_sR::synapse0x28aa920() {
   return (neuron0x289e100()*0.881481);
}

double NNfunction_ns_chi04_sR::synapse0x28aa960() {
   return (neuron0x289e440()*0.000290256);
}

double NNfunction_ns_chi04_sR::synapse0x28aa9a0() {
   return (neuron0x289e780()*-0.535594);
}

double NNfunction_ns_chi04_sR::synapse0x28aa9e0() {
   return (neuron0x289eac0()*0.322398);
}

double NNfunction_ns_chi04_sR::synapse0x28aaa20() {
   return (neuron0x289ee00()*1.02438);
}

double NNfunction_ns_chi04_sR::synapse0x28aaa60() {
   return (neuron0x289f140()*0.248695);
}

double NNfunction_ns_chi04_sR::synapse0x28aaaa0() {
   return (neuron0x289f480()*0.521467);
}

double NNfunction_ns_chi04_sR::synapse0x28aaae0() {
   return (neuron0x289f7c0()*-0.143062);
}

double NNfunction_ns_chi04_sR::synapse0x28aab20() {
   return (neuron0x289fb00()*0.94501);
}

double NNfunction_ns_chi04_sR::synapse0x28aab60() {
   return (neuron0x289fe40()*0.504037);
}

double NNfunction_ns_chi04_sR::synapse0x28aaba0() {
   return (neuron0x28a0180()*0.779811);
}

double NNfunction_ns_chi04_sR::synapse0x28aabe0() {
   return (neuron0x28a04c0()*0.555518);
}

double NNfunction_ns_chi04_sR::synapse0x28aac20() {
   return (neuron0x28a0800()*0.0553386);
}

double NNfunction_ns_chi04_sR::synapse0x28aa6b0() {
   return (neuron0x28a0b40()*-0.323826);
}

double NNfunction_ns_chi04_sR::synapse0x28aa6f0() {
   return (neuron0x28a10a0()*-0.688888);
}

double NNfunction_ns_chi04_sR::synapse0x28aad70() {
   return (neuron0x28a12c0()*-0.724439);
}

double NNfunction_ns_chi04_sR::synapse0x28aadb0() {
   return (neuron0x28a1600()*-1.79648);
}

double NNfunction_ns_chi04_sR::synapse0x28aadf0() {
   return (neuron0x28a1940()*-1.03656);
}

double NNfunction_ns_chi04_sR::synapse0x28aae30() {
   return (neuron0x28a1c80()*-1.04207);
}

double NNfunction_ns_chi04_sR::synapse0x28aae70() {
   return (neuron0x28a1fc0()*0.19588);
}

double NNfunction_ns_chi04_sR::synapse0x28aaeb0() {
   return (neuron0x28a2300()*0.710155);
}

double NNfunction_ns_chi04_sR::synapse0x28ab230() {
   return (neuron0x289d740()*0.570417);
}

double NNfunction_ns_chi04_sR::synapse0x28ab270() {
   return (neuron0x289da80()*1.25124);
}

double NNfunction_ns_chi04_sR::synapse0x28ab2b0() {
   return (neuron0x289ddc0()*2.15734);
}

double NNfunction_ns_chi04_sR::synapse0x28ab2f0() {
   return (neuron0x289e100()*-1.30079);
}

double NNfunction_ns_chi04_sR::synapse0x28ab330() {
   return (neuron0x289e440()*-1.39219);
}

double NNfunction_ns_chi04_sR::synapse0x28ab370() {
   return (neuron0x289e780()*-0.835324);
}

double NNfunction_ns_chi04_sR::synapse0x28ab3b0() {
   return (neuron0x289eac0()*-0.57231);
}

double NNfunction_ns_chi04_sR::synapse0x28ab3f0() {
   return (neuron0x289ee00()*-0.965643);
}

double NNfunction_ns_chi04_sR::synapse0x28ab430() {
   return (neuron0x289f140()*0.762573);
}

double NNfunction_ns_chi04_sR::synapse0x28ab470() {
   return (neuron0x289f480()*0.305461);
}

double NNfunction_ns_chi04_sR::synapse0x28ab4b0() {
   return (neuron0x289f7c0()*1.04032);
}

double NNfunction_ns_chi04_sR::synapse0x28ab4f0() {
   return (neuron0x289fb00()*-0.943385);
}

double NNfunction_ns_chi04_sR::synapse0x28ab530() {
   return (neuron0x289fe40()*-1.26198);
}

double NNfunction_ns_chi04_sR::synapse0x28ab570() {
   return (neuron0x28a0180()*-0.342383);
}

double NNfunction_ns_chi04_sR::synapse0x28ab5b0() {
   return (neuron0x28a04c0()*-1.57889);
}

double NNfunction_ns_chi04_sR::synapse0x28ab5f0() {
   return (neuron0x28a0800()*-1.18194);
}

double NNfunction_ns_chi04_sR::synapse0x28ab080() {
   return (neuron0x28a0b40()*0.622125);
}

double NNfunction_ns_chi04_sR::synapse0x28ab0c0() {
   return (neuron0x28a10a0()*-0.544635);
}

double NNfunction_ns_chi04_sR::synapse0x28ab740() {
   return (neuron0x28a12c0()*0.00343942);
}

double NNfunction_ns_chi04_sR::synapse0x28ab780() {
   return (neuron0x28a1600()*-0.238112);
}

double NNfunction_ns_chi04_sR::synapse0x28ab7c0() {
   return (neuron0x28a1940()*1.98732);
}

double NNfunction_ns_chi04_sR::synapse0x28ab800() {
   return (neuron0x28a1c80()*0.370638);
}

double NNfunction_ns_chi04_sR::synapse0x28ab840() {
   return (neuron0x28a1fc0()*-0.226989);
}

double NNfunction_ns_chi04_sR::synapse0x28ab880() {
   return (neuron0x28a2300()*-0.871814);
}

double NNfunction_ns_chi04_sR::synapse0x28abc00() {
   return (neuron0x289d740()*0.725833);
}

double NNfunction_ns_chi04_sR::synapse0x28abc40() {
   return (neuron0x289da80()*1.42862);
}

double NNfunction_ns_chi04_sR::synapse0x28abc80() {
   return (neuron0x289ddc0()*-1.25184);
}

double NNfunction_ns_chi04_sR::synapse0x28abcc0() {
   return (neuron0x289e100()*-0.121086);
}

double NNfunction_ns_chi04_sR::synapse0x28abd00() {
   return (neuron0x289e440()*0.0785891);
}

double NNfunction_ns_chi04_sR::synapse0x28abd40() {
   return (neuron0x289e780()*1.28167);
}

double NNfunction_ns_chi04_sR::synapse0x28abd80() {
   return (neuron0x289eac0()*-0.151903);
}

double NNfunction_ns_chi04_sR::synapse0x28abdc0() {
   return (neuron0x289ee00()*-0.486795);
}

double NNfunction_ns_chi04_sR::synapse0x28abe00() {
   return (neuron0x289f140()*1.99616);
}

double NNfunction_ns_chi04_sR::synapse0x28abe40() {
   return (neuron0x289f480()*1.39308);
}

double NNfunction_ns_chi04_sR::synapse0x28abe80() {
   return (neuron0x289f7c0()*0.937977);
}

double NNfunction_ns_chi04_sR::synapse0x28abec0() {
   return (neuron0x289fb00()*-2.37891);
}

double NNfunction_ns_chi04_sR::synapse0x28abf00() {
   return (neuron0x289fe40()*0.958796);
}

double NNfunction_ns_chi04_sR::synapse0x28abf40() {
   return (neuron0x28a0180()*0.656397);
}

double NNfunction_ns_chi04_sR::synapse0x28abf80() {
   return (neuron0x28a04c0()*0.336585);
}

double NNfunction_ns_chi04_sR::synapse0x28abfc0() {
   return (neuron0x28a0800()*0.560173);
}

double NNfunction_ns_chi04_sR::synapse0x28aba50() {
   return (neuron0x28a0b40()*-1.30242);
}

double NNfunction_ns_chi04_sR::synapse0x28aba90() {
   return (neuron0x28a10a0()*0.957941);
}

double NNfunction_ns_chi04_sR::synapse0x28ac110() {
   return (neuron0x28a12c0()*-2.26996);
}

double NNfunction_ns_chi04_sR::synapse0x28ac150() {
   return (neuron0x28a1600()*1.30765);
}

double NNfunction_ns_chi04_sR::synapse0x28ac190() {
   return (neuron0x28a1940()*0.745889);
}

double NNfunction_ns_chi04_sR::synapse0x28ac1d0() {
   return (neuron0x28a1c80()*1.2691);
}

double NNfunction_ns_chi04_sR::synapse0x28ac210() {
   return (neuron0x28a1fc0()*-0.351908);
}

double NNfunction_ns_chi04_sR::synapse0x28ac250() {
   return (neuron0x28a2300()*-2.61216);
}

double NNfunction_ns_chi04_sR::synapse0x28ac5d0() {
   return (neuron0x289d740()*1.25857);
}

double NNfunction_ns_chi04_sR::synapse0x289d960() {
   return (neuron0x289da80()*0.760763);
}

double NNfunction_ns_chi04_sR::synapse0x289d9a0() {
   return (neuron0x289ddc0()*1.99798);
}

double NNfunction_ns_chi04_sR::synapse0x289dca0() {
   return (neuron0x289e100()*0.460662);
}

double NNfunction_ns_chi04_sR::synapse0x289dce0() {
   return (neuron0x289e440()*0.63423);
}

double NNfunction_ns_chi04_sR::synapse0x289dfe0() {
   return (neuron0x289e780()*-0.607767);
}

double NNfunction_ns_chi04_sR::synapse0x289e020() {
   return (neuron0x289eac0()*-0.483739);
}

double NNfunction_ns_chi04_sR::synapse0x289e320() {
   return (neuron0x289ee00()*0.406553);
}

double NNfunction_ns_chi04_sR::synapse0x289e360() {
   return (neuron0x289f140()*-1.28449);
}

double NNfunction_ns_chi04_sR::synapse0x289e660() {
   return (neuron0x289f480()*0.394176);
}

double NNfunction_ns_chi04_sR::synapse0x289e6a0() {
   return (neuron0x289f7c0()*-0.401089);
}

double NNfunction_ns_chi04_sR::synapse0x289e9a0() {
   return (neuron0x289fb00()*-0.311595);
}

double NNfunction_ns_chi04_sR::synapse0x289e9e0() {
   return (neuron0x289fe40()*1.00476);
}

double NNfunction_ns_chi04_sR::synapse0x289ece0() {
   return (neuron0x28a0180()*-1.03799);
}

double NNfunction_ns_chi04_sR::synapse0x289ed20() {
   return (neuron0x28a04c0()*-0.189713);
}

double NNfunction_ns_chi04_sR::synapse0x289f020() {
   return (neuron0x28a0800()*-0.238023);
}

double NNfunction_ns_chi04_sR::synapse0x289f060() {
   return (neuron0x28a0b40()*-0.896925);
}

double NNfunction_ns_chi04_sR::synapse0x289f360() {
   return (neuron0x28a10a0()*-0.441833);
}

double NNfunction_ns_chi04_sR::synapse0x289f3a0() {
   return (neuron0x28a12c0()*0.330935);
}

double NNfunction_ns_chi04_sR::synapse0x289f6a0() {
   return (neuron0x28a1600()*0.879843);
}

double NNfunction_ns_chi04_sR::synapse0x289f6e0() {
   return (neuron0x28a1940()*0.320203);
}

double NNfunction_ns_chi04_sR::synapse0x289f9e0() {
   return (neuron0x28a1c80()*-0.0421285);
}

double NNfunction_ns_chi04_sR::synapse0x289fa20() {
   return (neuron0x28a1fc0()*1.95038);
}

double NNfunction_ns_chi04_sR::synapse0x289fd20() {
   return (neuron0x28a2300()*-1.4734);
}

double NNfunction_ns_chi04_sR::synapse0x289fd60() {
   return (neuron0x289d740()*0.0969683);
}

double NNfunction_ns_chi04_sR::synapse0x28a0a20() {
   return (neuron0x289da80()*-1.46046);
}

double NNfunction_ns_chi04_sR::synapse0x28a0a60() {
   return (neuron0x289ddc0()*0.028151);
}

double NNfunction_ns_chi04_sR::synapse0x28ac420() {
   return (neuron0x289e100()*1.35597);
}

double NNfunction_ns_chi04_sR::synapse0x28ac460() {
   return (neuron0x289e440()*0.945346);
}

double NNfunction_ns_chi04_sR::synapse0x28a0d60() {
   return (neuron0x289e780()*-0.464471);
}

double NNfunction_ns_chi04_sR::synapse0x28a0da0() {
   return (neuron0x289eac0()*-0.156221);
}

double NNfunction_ns_chi04_sR::synapse0x26587c0() {
   return (neuron0x289ee00()*0.392495);
}

double NNfunction_ns_chi04_sR::synapse0x2658800() {
   return (neuron0x289f140()*0.0291292);
}

double NNfunction_ns_chi04_sR::synapse0x28a14e0() {
   return (neuron0x289f480()*-0.737827);
}

double NNfunction_ns_chi04_sR::synapse0x28a1520() {
   return (neuron0x289f7c0()*0.594453);
}

double NNfunction_ns_chi04_sR::synapse0x28a1820() {
   return (neuron0x289fb00()*0.0528145);
}

double NNfunction_ns_chi04_sR::synapse0x28a1860() {
   return (neuron0x289fe40()*-1.71366);
}

double NNfunction_ns_chi04_sR::synapse0x28a1b60() {
   return (neuron0x28a0180()*2.23194);
}

double NNfunction_ns_chi04_sR::synapse0x28a1ba0() {
   return (neuron0x28a04c0()*0.909159);
}

double NNfunction_ns_chi04_sR::synapse0x28a1ea0() {
   return (neuron0x28a0800()*1.63615);
}

double NNfunction_ns_chi04_sR::synapse0x28a1ee0() {
   return (neuron0x28a0b40()*1.10881);
}

double NNfunction_ns_chi04_sR::synapse0x28a21e0() {
   return (neuron0x28a10a0()*1.33355);
}

double NNfunction_ns_chi04_sR::synapse0x28a2220() {
   return (neuron0x28a12c0()*-1.07071);
}

double NNfunction_ns_chi04_sR::synapse0x28a2520() {
   return (neuron0x28a1600()*1.16373);
}

double NNfunction_ns_chi04_sR::synapse0x28a2560() {
   return (neuron0x28a1940()*0.930058);
}

double NNfunction_ns_chi04_sR::synapse0x28a0060() {
   return (neuron0x28a1c80()*1.26471);
}

double NNfunction_ns_chi04_sR::synapse0x28a00a0() {
   return (neuron0x28a1fc0()*-1.22338);
}

double NNfunction_ns_chi04_sR::synapse0x28ae340() {
   return (neuron0x28a2300()*0.67981);
}

double NNfunction_ns_chi04_sR::synapse0x28ae6c0() {
   return (neuron0x289d740()*0.545966);
}

double NNfunction_ns_chi04_sR::synapse0x28ae700() {
   return (neuron0x289da80()*-1.22302);
}

double NNfunction_ns_chi04_sR::synapse0x28ae740() {
   return (neuron0x289ddc0()*-1.82459);
}

double NNfunction_ns_chi04_sR::synapse0x28ae780() {
   return (neuron0x289e100()*0.444294);
}

double NNfunction_ns_chi04_sR::synapse0x28ae7c0() {
   return (neuron0x289e440()*-2.11079);
}

double NNfunction_ns_chi04_sR::synapse0x28ae800() {
   return (neuron0x289e780()*0.898808);
}

double NNfunction_ns_chi04_sR::synapse0x28ae840() {
   return (neuron0x289eac0()*-2.61778);
}

double NNfunction_ns_chi04_sR::synapse0x28ae880() {
   return (neuron0x289ee00()*-0.757296);
}

double NNfunction_ns_chi04_sR::synapse0x28ae8c0() {
   return (neuron0x289f140()*-0.453168);
}

double NNfunction_ns_chi04_sR::synapse0x28ae900() {
   return (neuron0x289f480()*-1.32644);
}

double NNfunction_ns_chi04_sR::synapse0x28ae940() {
   return (neuron0x289f7c0()*0.0918413);
}

double NNfunction_ns_chi04_sR::synapse0x28ae980() {
   return (neuron0x289fb00()*-1.391);
}

double NNfunction_ns_chi04_sR::synapse0x28ae9c0() {
   return (neuron0x289fe40()*-0.246518);
}

double NNfunction_ns_chi04_sR::synapse0x28aea00() {
   return (neuron0x28a0180()*1.43458);
}

double NNfunction_ns_chi04_sR::synapse0x28aea40() {
   return (neuron0x28a04c0()*2.19747);
}

double NNfunction_ns_chi04_sR::synapse0x28aea80() {
   return (neuron0x28a0800()*1.74084);
}

double NNfunction_ns_chi04_sR::synapse0x28ae510() {
   return (neuron0x28a0b40()*1.14736);
}

double NNfunction_ns_chi04_sR::synapse0x28ae550() {
   return (neuron0x28a10a0()*-1.02573);
}

double NNfunction_ns_chi04_sR::synapse0x28aebd0() {
   return (neuron0x28a12c0()*0.956566);
}

double NNfunction_ns_chi04_sR::synapse0x28aec10() {
   return (neuron0x28a1600()*0.0561829);
}

double NNfunction_ns_chi04_sR::synapse0x28aec50() {
   return (neuron0x28a1940()*0.950297);
}

double NNfunction_ns_chi04_sR::synapse0x28aec90() {
   return (neuron0x28a1c80()*-0.428211);
}

double NNfunction_ns_chi04_sR::synapse0x28aecd0() {
   return (neuron0x28a1fc0()*2.15179);
}

double NNfunction_ns_chi04_sR::synapse0x28aed10() {
   return (neuron0x28a2300()*-0.138494);
}

double NNfunction_ns_chi04_sR::synapse0x28af090() {
   return (neuron0x289d740()*-0.0307642);
}

double NNfunction_ns_chi04_sR::synapse0x28af0d0() {
   return (neuron0x289da80()*-0.0867354);
}

double NNfunction_ns_chi04_sR::synapse0x28af110() {
   return (neuron0x289ddc0()*-0.500553);
}

double NNfunction_ns_chi04_sR::synapse0x28af150() {
   return (neuron0x289e100()*0.931936);
}

double NNfunction_ns_chi04_sR::synapse0x28af190() {
   return (neuron0x289e440()*-1.51786);
}

double NNfunction_ns_chi04_sR::synapse0x28af1d0() {
   return (neuron0x289e780()*0.195987);
}

double NNfunction_ns_chi04_sR::synapse0x28af210() {
   return (neuron0x289eac0()*-0.737662);
}

double NNfunction_ns_chi04_sR::synapse0x28af250() {
   return (neuron0x289ee00()*0.576791);
}

double NNfunction_ns_chi04_sR::synapse0x28af290() {
   return (neuron0x289f140()*-0.109776);
}

double NNfunction_ns_chi04_sR::synapse0x28af2d0() {
   return (neuron0x289f480()*0.471273);
}

double NNfunction_ns_chi04_sR::synapse0x28af310() {
   return (neuron0x289f7c0()*1.56832);
}

double NNfunction_ns_chi04_sR::synapse0x28af350() {
   return (neuron0x289fb00()*-2.1623);
}

double NNfunction_ns_chi04_sR::synapse0x28af390() {
   return (neuron0x289fe40()*-1.03257);
}

double NNfunction_ns_chi04_sR::synapse0x28af3d0() {
   return (neuron0x28a0180()*-0.63083);
}

double NNfunction_ns_chi04_sR::synapse0x28af410() {
   return (neuron0x28a04c0()*-0.178686);
}

double NNfunction_ns_chi04_sR::synapse0x28af450() {
   return (neuron0x28a0800()*0.139883);
}

double NNfunction_ns_chi04_sR::synapse0x28aeee0() {
   return (neuron0x28a0b40()*0.955165);
}

double NNfunction_ns_chi04_sR::synapse0x28aef20() {
   return (neuron0x28a10a0()*-0.761606);
}

double NNfunction_ns_chi04_sR::synapse0x28af5a0() {
   return (neuron0x28a12c0()*-0.39685);
}

double NNfunction_ns_chi04_sR::synapse0x28af5e0() {
   return (neuron0x28a1600()*-1.61042);
}

double NNfunction_ns_chi04_sR::synapse0x28af620() {
   return (neuron0x28a1940()*-0.428669);
}

double NNfunction_ns_chi04_sR::synapse0x28af660() {
   return (neuron0x28a1c80()*1.42706);
}

double NNfunction_ns_chi04_sR::synapse0x28af6a0() {
   return (neuron0x28a1fc0()*-0.504604);
}

double NNfunction_ns_chi04_sR::synapse0x28af6e0() {
   return (neuron0x28a2300()*0.133144);
}

double NNfunction_ns_chi04_sR::synapse0x28afa60() {
   return (neuron0x289d740()*2.44621);
}

double NNfunction_ns_chi04_sR::synapse0x28afaa0() {
   return (neuron0x289da80()*1.38877);
}

double NNfunction_ns_chi04_sR::synapse0x28afae0() {
   return (neuron0x289ddc0()*1.59197);
}

double NNfunction_ns_chi04_sR::synapse0x28afb20() {
   return (neuron0x289e100()*0.426564);
}

double NNfunction_ns_chi04_sR::synapse0x28afb60() {
   return (neuron0x289e440()*-0.301587);
}

double NNfunction_ns_chi04_sR::synapse0x28afba0() {
   return (neuron0x289e780()*-1.44479);
}

double NNfunction_ns_chi04_sR::synapse0x28afbe0() {
   return (neuron0x289eac0()*-0.905687);
}

double NNfunction_ns_chi04_sR::synapse0x28afc20() {
   return (neuron0x289ee00()*-0.0162732);
}

double NNfunction_ns_chi04_sR::synapse0x28afc60() {
   return (neuron0x289f140()*-0.919175);
}

double NNfunction_ns_chi04_sR::synapse0x28afca0() {
   return (neuron0x289f480()*0.472079);
}

double NNfunction_ns_chi04_sR::synapse0x28afce0() {
   return (neuron0x289f7c0()*0.890032);
}

double NNfunction_ns_chi04_sR::synapse0x28afd20() {
   return (neuron0x289fb00()*-1.21038);
}

double NNfunction_ns_chi04_sR::synapse0x28afd60() {
   return (neuron0x289fe40()*0.640317);
}

double NNfunction_ns_chi04_sR::synapse0x28afda0() {
   return (neuron0x28a0180()*-0.494291);
}

double NNfunction_ns_chi04_sR::synapse0x28afde0() {
   return (neuron0x28a04c0()*-0.223704);
}

double NNfunction_ns_chi04_sR::synapse0x28afe20() {
   return (neuron0x28a0800()*1.44806);
}

double NNfunction_ns_chi04_sR::synapse0x28af8b0() {
   return (neuron0x28a0b40()*-1.8386);
}

double NNfunction_ns_chi04_sR::synapse0x28af8f0() {
   return (neuron0x28a10a0()*1.41306);
}

double NNfunction_ns_chi04_sR::synapse0x28aff70() {
   return (neuron0x28a12c0()*0.578639);
}

double NNfunction_ns_chi04_sR::synapse0x28affb0() {
   return (neuron0x28a1600()*-2.24757);
}

double NNfunction_ns_chi04_sR::synapse0x28afff0() {
   return (neuron0x28a1940()*-1.35984);
}

double NNfunction_ns_chi04_sR::synapse0x28b0030() {
   return (neuron0x28a1c80()*-2.03865);
}

double NNfunction_ns_chi04_sR::synapse0x28b0070() {
   return (neuron0x28a1fc0()*-0.466309);
}

double NNfunction_ns_chi04_sR::synapse0x28b00b0() {
   return (neuron0x28a2300()*-1.75677);
}

double NNfunction_ns_chi04_sR::synapse0x28b0430() {
   return (neuron0x289d740()*0.789515);
}

double NNfunction_ns_chi04_sR::synapse0x28b0470() {
   return (neuron0x289da80()*1.38228);
}

double NNfunction_ns_chi04_sR::synapse0x28b04b0() {
   return (neuron0x289ddc0()*1.09458);
}

double NNfunction_ns_chi04_sR::synapse0x28b04f0() {
   return (neuron0x289e100()*-0.212065);
}

double NNfunction_ns_chi04_sR::synapse0x28b0530() {
   return (neuron0x289e440()*0.546128);
}

double NNfunction_ns_chi04_sR::synapse0x28b0570() {
   return (neuron0x289e780()*1.131);
}

double NNfunction_ns_chi04_sR::synapse0x28b05b0() {
   return (neuron0x289eac0()*-0.475885);
}

double NNfunction_ns_chi04_sR::synapse0x28b05f0() {
   return (neuron0x289ee00()*-1.23142);
}

double NNfunction_ns_chi04_sR::synapse0x28b0630() {
   return (neuron0x289f140()*0.273237);
}

double NNfunction_ns_chi04_sR::synapse0x28b0670() {
   return (neuron0x289f480()*-0.73281);
}

double NNfunction_ns_chi04_sR::synapse0x28b06b0() {
   return (neuron0x289f7c0()*-0.582063);
}

double NNfunction_ns_chi04_sR::synapse0x28b06f0() {
   return (neuron0x289fb00()*1.06912);
}

double NNfunction_ns_chi04_sR::synapse0x28b0730() {
   return (neuron0x289fe40()*1.48599);
}

double NNfunction_ns_chi04_sR::synapse0x28b0770() {
   return (neuron0x28a0180()*-1.11361);
}

double NNfunction_ns_chi04_sR::synapse0x28b07b0() {
   return (neuron0x28a04c0()*-0.241096);
}

double NNfunction_ns_chi04_sR::synapse0x28b07f0() {
   return (neuron0x28a0800()*-0.0595817);
}

double NNfunction_ns_chi04_sR::synapse0x28b0280() {
   return (neuron0x28a0b40()*2.02857);
}

double NNfunction_ns_chi04_sR::synapse0x28b02c0() {
   return (neuron0x28a10a0()*2.12107);
}

double NNfunction_ns_chi04_sR::synapse0x28b0940() {
   return (neuron0x28a12c0()*-0.336934);
}

double NNfunction_ns_chi04_sR::synapse0x28b0980() {
   return (neuron0x28a1600()*-0.211723);
}

double NNfunction_ns_chi04_sR::synapse0x28b09c0() {
   return (neuron0x28a1940()*-0.589306);
}

double NNfunction_ns_chi04_sR::synapse0x28b0a00() {
   return (neuron0x28a1c80()*0.828026);
}

double NNfunction_ns_chi04_sR::synapse0x28b0a40() {
   return (neuron0x28a1fc0()*-0.624775);
}

double NNfunction_ns_chi04_sR::synapse0x28b0a80() {
   return (neuron0x28a2300()*-0.427576);
}

double NNfunction_ns_chi04_sR::synapse0x28b0e00() {
   return (neuron0x289d740()*0.488865);
}

double NNfunction_ns_chi04_sR::synapse0x28b0e40() {
   return (neuron0x289da80()*-2.54167);
}

double NNfunction_ns_chi04_sR::synapse0x28b0e80() {
   return (neuron0x289ddc0()*4.01962);
}

double NNfunction_ns_chi04_sR::synapse0x28b0ec0() {
   return (neuron0x289e100()*-1.23636);
}

double NNfunction_ns_chi04_sR::synapse0x28b0f00() {
   return (neuron0x289e440()*-0.138661);
}

double NNfunction_ns_chi04_sR::synapse0x28b0f40() {
   return (neuron0x289e780()*-0.476547);
}

double NNfunction_ns_chi04_sR::synapse0x28b0f80() {
   return (neuron0x289eac0()*0.420058);
}

double NNfunction_ns_chi04_sR::synapse0x28b0fc0() {
   return (neuron0x289ee00()*-0.528335);
}

double NNfunction_ns_chi04_sR::synapse0x28b1000() {
   return (neuron0x289f140()*-0.702554);
}

double NNfunction_ns_chi04_sR::synapse0x28a91c0() {
   return (neuron0x289f480()*0.746138);
}

double NNfunction_ns_chi04_sR::synapse0x28a9200() {
   return (neuron0x289f7c0()*-0.467115);
}

double NNfunction_ns_chi04_sR::synapse0x28a9240() {
   return (neuron0x289fb00()*-0.665524);
}

double NNfunction_ns_chi04_sR::synapse0x28a9280() {
   return (neuron0x289fe40()*-1.30146);
}

double NNfunction_ns_chi04_sR::synapse0x28a92c0() {
   return (neuron0x28a0180()*0.737318);
}

double NNfunction_ns_chi04_sR::synapse0x28a9300() {
   return (neuron0x28a04c0()*0.555129);
}

double NNfunction_ns_chi04_sR::synapse0x28a9340() {
   return (neuron0x28a0800()*0.855299);
}

double NNfunction_ns_chi04_sR::synapse0x28b0c50() {
   return (neuron0x28a0b40()*0.772173);
}

double NNfunction_ns_chi04_sR::synapse0x28b0c90() {
   return (neuron0x28a10a0()*-0.655556);
}

double NNfunction_ns_chi04_sR::synapse0x28a9490() {
   return (neuron0x28a12c0()*-0.889215);
}

double NNfunction_ns_chi04_sR::synapse0x28a94d0() {
   return (neuron0x28a1600()*-0.0842659);
}

double NNfunction_ns_chi04_sR::synapse0x28a9510() {
   return (neuron0x28a1940()*-0.180932);
}

double NNfunction_ns_chi04_sR::synapse0x28a9550() {
   return (neuron0x28a1c80()*0.210839);
}

double NNfunction_ns_chi04_sR::synapse0x28a9590() {
   return (neuron0x28a1fc0()*0.570638);
}

double NNfunction_ns_chi04_sR::synapse0x28a95d0() {
   return (neuron0x28a2300()*3.66873);
}

double NNfunction_ns_chi04_sR::synapse0x28a9950() {
   return (neuron0x289d740()*-0.00411691);
}

double NNfunction_ns_chi04_sR::synapse0x28a9990() {
   return (neuron0x289da80()*-1.46105);
}

double NNfunction_ns_chi04_sR::synapse0x28a99d0() {
   return (neuron0x289ddc0()*0.161689);
}

double NNfunction_ns_chi04_sR::synapse0x28a9a10() {
   return (neuron0x289e100()*-0.0942107);
}

double NNfunction_ns_chi04_sR::synapse0x28a9a50() {
   return (neuron0x289e440()*-0.00261348);
}

double NNfunction_ns_chi04_sR::synapse0x28a9a90() {
   return (neuron0x289e780()*-0.0212692);
}

double NNfunction_ns_chi04_sR::synapse0x28a9ad0() {
   return (neuron0x289eac0()*-0.0122675);
}

double NNfunction_ns_chi04_sR::synapse0x28a9b10() {
   return (neuron0x289ee00()*0.0145789);
}

double NNfunction_ns_chi04_sR::synapse0x28a9b50() {
   return (neuron0x289f140()*-0.063869);
}

double NNfunction_ns_chi04_sR::synapse0x28a9b90() {
   return (neuron0x289f480()*-0.0401794);
}

double NNfunction_ns_chi04_sR::synapse0x28a9bd0() {
   return (neuron0x289f7c0()*0.0119958);
}

double NNfunction_ns_chi04_sR::synapse0x28a9c10() {
   return (neuron0x289fb00()*-0.00604007);
}

double NNfunction_ns_chi04_sR::synapse0x28a9c50() {
   return (neuron0x289fe40()*-0.00537144);
}

double NNfunction_ns_chi04_sR::synapse0x28a9c90() {
   return (neuron0x28a0180()*0.0254947);
}

double NNfunction_ns_chi04_sR::synapse0x28a9cd0() {
   return (neuron0x28a04c0()*0.00965483);
}

double NNfunction_ns_chi04_sR::synapse0x28a9d10() {
   return (neuron0x28a0800()*0.0152827);
}

double NNfunction_ns_chi04_sR::synapse0x28a97a0() {
   return (neuron0x28a0b40()*0.00805638);
}

double NNfunction_ns_chi04_sR::synapse0x28a97e0() {
   return (neuron0x28a10a0()*-0.00238933);
}

double NNfunction_ns_chi04_sR::synapse0x28a9e60() {
   return (neuron0x28a12c0()*-0.34148);
}

double NNfunction_ns_chi04_sR::synapse0x28a9ea0() {
   return (neuron0x28a1600()*0.00377108);
}

double NNfunction_ns_chi04_sR::synapse0x28a9ee0() {
   return (neuron0x28a1940()*-0.0102753);
}

double NNfunction_ns_chi04_sR::synapse0x28a9f20() {
   return (neuron0x28a1c80()*-0.00484827);
}

double NNfunction_ns_chi04_sR::synapse0x28a9f60() {
   return (neuron0x28a1fc0()*0.00727279);
}

double NNfunction_ns_chi04_sR::synapse0x28a9fa0() {
   return (neuron0x28a2300()*0.0361944);
}

double NNfunction_ns_chi04_sR::synapse0x28aa170() {
   return (neuron0x289d740()*0.0644018);
}

double NNfunction_ns_chi04_sR::synapse0x28b3200() {
   return (neuron0x289da80()*-0.444014);
}

double NNfunction_ns_chi04_sR::synapse0x28b3240() {
   return (neuron0x289ddc0()*1.91502);
}

double NNfunction_ns_chi04_sR::synapse0x28b3280() {
   return (neuron0x289e100()*0.32658);
}

double NNfunction_ns_chi04_sR::synapse0x28b32c0() {
   return (neuron0x289e440()*0.00222771);
}

double NNfunction_ns_chi04_sR::synapse0x28b3300() {
   return (neuron0x289e780()*-0.087599);
}

double NNfunction_ns_chi04_sR::synapse0x28b3340() {
   return (neuron0x289eac0()*0.226176);
}

double NNfunction_ns_chi04_sR::synapse0x28b3380() {
   return (neuron0x289ee00()*-0.252504);
}

double NNfunction_ns_chi04_sR::synapse0x28b33c0() {
   return (neuron0x289f140()*0.0949527);
}

double NNfunction_ns_chi04_sR::synapse0x28b3400() {
   return (neuron0x289f480()*-0.0049907);
}

double NNfunction_ns_chi04_sR::synapse0x28b3440() {
   return (neuron0x289f7c0()*0.488954);
}

double NNfunction_ns_chi04_sR::synapse0x28b3480() {
   return (neuron0x289fb00()*-0.164198);
}

double NNfunction_ns_chi04_sR::synapse0x28b34c0() {
   return (neuron0x289fe40()*-0.0270567);
}

double NNfunction_ns_chi04_sR::synapse0x28b3500() {
   return (neuron0x28a0180()*-0.0551631);
}

double NNfunction_ns_chi04_sR::synapse0x28b3540() {
   return (neuron0x28a04c0()*-0.196451);
}

double NNfunction_ns_chi04_sR::synapse0x28b3580() {
   return (neuron0x28a0800()*-0.0447188);
}

double NNfunction_ns_chi04_sR::synapse0x28b3050() {
   return (neuron0x28a0b40()*0.194519);
}

double NNfunction_ns_chi04_sR::synapse0x28b3090() {
   return (neuron0x28a10a0()*0.143993);
}

double NNfunction_ns_chi04_sR::synapse0x28b36d0() {
   return (neuron0x28a12c0()*-0.0551686);
}

double NNfunction_ns_chi04_sR::synapse0x28b3710() {
   return (neuron0x28a1600()*0.200399);
}

double NNfunction_ns_chi04_sR::synapse0x28b3750() {
   return (neuron0x28a1940()*0.0843947);
}

double NNfunction_ns_chi04_sR::synapse0x28b3790() {
   return (neuron0x28a1c80()*0.00365717);
}

double NNfunction_ns_chi04_sR::synapse0x28b37d0() {
   return (neuron0x28a1fc0()*-0.0505283);
}

double NNfunction_ns_chi04_sR::synapse0x28b3810() {
   return (neuron0x28a2300()*-3.17596);
}

double NNfunction_ns_chi04_sR::synapse0x28b3b90() {
   return (neuron0x289d740()*-0.530696);
}

double NNfunction_ns_chi04_sR::synapse0x28b3bd0() {
   return (neuron0x289da80()*1.27042);
}

double NNfunction_ns_chi04_sR::synapse0x28b3c10() {
   return (neuron0x289ddc0()*1.32809);
}

double NNfunction_ns_chi04_sR::synapse0x28b3c50() {
   return (neuron0x289e100()*-2.7172);
}

double NNfunction_ns_chi04_sR::synapse0x28b3c90() {
   return (neuron0x289e440()*-0.775873);
}

double NNfunction_ns_chi04_sR::synapse0x28b3cd0() {
   return (neuron0x289e780()*-1.27622);
}

double NNfunction_ns_chi04_sR::synapse0x28b3d10() {
   return (neuron0x289eac0()*0.209499);
}

double NNfunction_ns_chi04_sR::synapse0x28b3d50() {
   return (neuron0x289ee00()*0.765738);
}

double NNfunction_ns_chi04_sR::synapse0x28b3d90() {
   return (neuron0x289f140()*0.69578);
}

double NNfunction_ns_chi04_sR::synapse0x28b3dd0() {
   return (neuron0x289f480()*-0.271829);
}

double NNfunction_ns_chi04_sR::synapse0x28b3e10() {
   return (neuron0x289f7c0()*0.33181);
}

double NNfunction_ns_chi04_sR::synapse0x28b3e50() {
   return (neuron0x289fb00()*0.660787);
}

double NNfunction_ns_chi04_sR::synapse0x28b3e90() {
   return (neuron0x289fe40()*0.75331);
}

double NNfunction_ns_chi04_sR::synapse0x28b3ed0() {
   return (neuron0x28a0180()*-0.685808);
}

double NNfunction_ns_chi04_sR::synapse0x28b3f10() {
   return (neuron0x28a04c0()*0.505386);
}

double NNfunction_ns_chi04_sR::synapse0x28b3f50() {
   return (neuron0x28a0800()*-0.346507);
}

double NNfunction_ns_chi04_sR::synapse0x28b39e0() {
   return (neuron0x28a0b40()*-0.0943984);
}

double NNfunction_ns_chi04_sR::synapse0x28b3a20() {
   return (neuron0x28a10a0()*-0.164238);
}

double NNfunction_ns_chi04_sR::synapse0x28b40a0() {
   return (neuron0x28a12c0()*-0.620932);
}

double NNfunction_ns_chi04_sR::synapse0x28b40e0() {
   return (neuron0x28a1600()*-1.03256);
}

double NNfunction_ns_chi04_sR::synapse0x28b4120() {
   return (neuron0x28a1940()*-0.189608);
}

double NNfunction_ns_chi04_sR::synapse0x28b4160() {
   return (neuron0x28a1c80()*-0.638027);
}

double NNfunction_ns_chi04_sR::synapse0x28b41a0() {
   return (neuron0x28a1fc0()*-1.50593);
}

double NNfunction_ns_chi04_sR::synapse0x28b41e0() {
   return (neuron0x28a2300()*1.10625);
}

double NNfunction_ns_chi04_sR::synapse0x28b4560() {
   return (neuron0x289d740()*-0.395552);
}

double NNfunction_ns_chi04_sR::synapse0x28b45a0() {
   return (neuron0x289da80()*-2.41358);
}

double NNfunction_ns_chi04_sR::synapse0x28b45e0() {
   return (neuron0x289ddc0()*2.78545);
}

double NNfunction_ns_chi04_sR::synapse0x28b4620() {
   return (neuron0x289e100()*-0.770035);
}

double NNfunction_ns_chi04_sR::synapse0x28b4660() {
   return (neuron0x289e440()*-0.463386);
}

double NNfunction_ns_chi04_sR::synapse0x28b46a0() {
   return (neuron0x289e780()*0.100645);
}

double NNfunction_ns_chi04_sR::synapse0x28b46e0() {
   return (neuron0x289eac0()*0.800019);
}

double NNfunction_ns_chi04_sR::synapse0x28b4720() {
   return (neuron0x289ee00()*-0.172059);
}

double NNfunction_ns_chi04_sR::synapse0x28b4760() {
   return (neuron0x289f140()*0.0985113);
}

double NNfunction_ns_chi04_sR::synapse0x28b47a0() {
   return (neuron0x289f480()*-1.00689);
}

double NNfunction_ns_chi04_sR::synapse0x28b47e0() {
   return (neuron0x289f7c0()*0.641664);
}

double NNfunction_ns_chi04_sR::synapse0x28b4820() {
   return (neuron0x289fb00()*0.244973);
}

double NNfunction_ns_chi04_sR::synapse0x28b4860() {
   return (neuron0x289fe40()*0.644428);
}

double NNfunction_ns_chi04_sR::synapse0x28b48a0() {
   return (neuron0x28a0180()*1.65766);
}

double NNfunction_ns_chi04_sR::synapse0x28b48e0() {
   return (neuron0x28a04c0()*-1.94869);
}

double NNfunction_ns_chi04_sR::synapse0x28b4920() {
   return (neuron0x28a0800()*0.304965);
}

double NNfunction_ns_chi04_sR::synapse0x28b43b0() {
   return (neuron0x28a0b40()*0.736236);
}

double NNfunction_ns_chi04_sR::synapse0x28b43f0() {
   return (neuron0x28a10a0()*-0.569937);
}

double NNfunction_ns_chi04_sR::synapse0x28b4a70() {
   return (neuron0x28a12c0()*-2.66329);
}

double NNfunction_ns_chi04_sR::synapse0x28b4ab0() {
   return (neuron0x28a1600()*-0.267853);
}

double NNfunction_ns_chi04_sR::synapse0x28b4af0() {
   return (neuron0x28a1940()*-0.933131);
}

double NNfunction_ns_chi04_sR::synapse0x28b4b30() {
   return (neuron0x28a1c80()*1.945);
}

double NNfunction_ns_chi04_sR::synapse0x28b4b70() {
   return (neuron0x28a1fc0()*-0.827573);
}

double NNfunction_ns_chi04_sR::synapse0x28b4bb0() {
   return (neuron0x28a2300()*0.465278);
}

double NNfunction_ns_chi04_sR::synapse0x28b4f30() {
   return (neuron0x289d740()*-0.0251799);
}

double NNfunction_ns_chi04_sR::synapse0x28b4f70() {
   return (neuron0x289da80()*-1.19757);
}

double NNfunction_ns_chi04_sR::synapse0x28b4fb0() {
   return (neuron0x289ddc0()*-0.743706);
}

double NNfunction_ns_chi04_sR::synapse0x28b4ff0() {
   return (neuron0x289e100()*0.147978);
}

double NNfunction_ns_chi04_sR::synapse0x28b5030() {
   return (neuron0x289e440()*-0.127249);
}

double NNfunction_ns_chi04_sR::synapse0x28b5070() {
   return (neuron0x289e780()*-0.0299456);
}

double NNfunction_ns_chi04_sR::synapse0x28b50b0() {
   return (neuron0x289eac0()*-0.00350449);
}

double NNfunction_ns_chi04_sR::synapse0x28b50f0() {
   return (neuron0x289ee00()*0.0797409);
}

double NNfunction_ns_chi04_sR::synapse0x28b5130() {
   return (neuron0x289f140()*0.091066);
}

double NNfunction_ns_chi04_sR::synapse0x28b5170() {
   return (neuron0x289f480()*0.0628215);
}

double NNfunction_ns_chi04_sR::synapse0x28b51b0() {
   return (neuron0x289f7c0()*-0.0378991);
}

double NNfunction_ns_chi04_sR::synapse0x28b51f0() {
   return (neuron0x289fb00()*0.00448975);
}

double NNfunction_ns_chi04_sR::synapse0x28b5230() {
   return (neuron0x289fe40()*0.0485663);
}

double NNfunction_ns_chi04_sR::synapse0x28b5270() {
   return (neuron0x28a0180()*-0.00222703);
}

double NNfunction_ns_chi04_sR::synapse0x28b52b0() {
   return (neuron0x28a04c0()*0.0896797);
}

double NNfunction_ns_chi04_sR::synapse0x28b52f0() {
   return (neuron0x28a0800()*-0.0949092);
}

double NNfunction_ns_chi04_sR::synapse0x28b4d80() {
   return (neuron0x28a0b40()*0.0655247);
}

double NNfunction_ns_chi04_sR::synapse0x28b4dc0() {
   return (neuron0x28a10a0()*0.0658616);
}

double NNfunction_ns_chi04_sR::synapse0x28b5440() {
   return (neuron0x28a12c0()*-0.138192);
}

double NNfunction_ns_chi04_sR::synapse0x28b5480() {
   return (neuron0x28a1600()*0.13577);
}

double NNfunction_ns_chi04_sR::synapse0x28b54c0() {
   return (neuron0x28a1940()*0.0818194);
}

double NNfunction_ns_chi04_sR::synapse0x28b5500() {
   return (neuron0x28a1c80()*0.132555);
}

double NNfunction_ns_chi04_sR::synapse0x28b5540() {
   return (neuron0x28a1fc0()*-0.135387);
}

double NNfunction_ns_chi04_sR::synapse0x28b5580() {
   return (neuron0x28a2300()*3.04296);
}

double NNfunction_ns_chi04_sR::synapse0x28b5900() {
   return (neuron0x289d740()*0.156353);
}

double NNfunction_ns_chi04_sR::synapse0x28b5940() {
   return (neuron0x289da80()*0.340238);
}

double NNfunction_ns_chi04_sR::synapse0x28b5980() {
   return (neuron0x289ddc0()*0.0504864);
}

double NNfunction_ns_chi04_sR::synapse0x28b59c0() {
   return (neuron0x289e100()*-0.745135);
}

double NNfunction_ns_chi04_sR::synapse0x28b5a00() {
   return (neuron0x289e440()*0.857778);
}

double NNfunction_ns_chi04_sR::synapse0x28b5a40() {
   return (neuron0x289e780()*-1.59732);
}

double NNfunction_ns_chi04_sR::synapse0x28b5a80() {
   return (neuron0x289eac0()*-1.70872);
}

double NNfunction_ns_chi04_sR::synapse0x28b5ac0() {
   return (neuron0x289ee00()*-0.249276);
}

double NNfunction_ns_chi04_sR::synapse0x28b5b00() {
   return (neuron0x289f140()*0.614451);
}

double NNfunction_ns_chi04_sR::synapse0x28b5b40() {
   return (neuron0x289f480()*-0.0451761);
}

double NNfunction_ns_chi04_sR::synapse0x28b5b80() {
   return (neuron0x289f7c0()*0.486953);
}

double NNfunction_ns_chi04_sR::synapse0x28b5bc0() {
   return (neuron0x289fb00()*0.414673);
}

double NNfunction_ns_chi04_sR::synapse0x28b5c00() {
   return (neuron0x289fe40()*1.5611);
}

double NNfunction_ns_chi04_sR::synapse0x28b5c40() {
   return (neuron0x28a0180()*-0.525447);
}

double NNfunction_ns_chi04_sR::synapse0x28b5c80() {
   return (neuron0x28a04c0()*0.399663);
}

double NNfunction_ns_chi04_sR::synapse0x28b5cc0() {
   return (neuron0x28a0800()*-1.09933);
}

double NNfunction_ns_chi04_sR::synapse0x28b5750() {
   return (neuron0x28a0b40()*1.80907);
}

double NNfunction_ns_chi04_sR::synapse0x28b5790() {
   return (neuron0x28a10a0()*0.169965);
}

double NNfunction_ns_chi04_sR::synapse0x28b5e10() {
   return (neuron0x28a12c0()*-1.55812);
}

double NNfunction_ns_chi04_sR::synapse0x28b5e50() {
   return (neuron0x28a1600()*-0.938494);
}

double NNfunction_ns_chi04_sR::synapse0x28b5e90() {
   return (neuron0x28a1940()*0.133545);
}

double NNfunction_ns_chi04_sR::synapse0x28b5ed0() {
   return (neuron0x28a1c80()*-0.309746);
}

double NNfunction_ns_chi04_sR::synapse0x28b5f10() {
   return (neuron0x28a1fc0()*-2.67702);
}

double NNfunction_ns_chi04_sR::synapse0x28b5f50() {
   return (neuron0x28a2300()*0.412747);
}

double NNfunction_ns_chi04_sR::synapse0x28b62d0() {
   return (neuron0x289d740()*-0.0705);
}

double NNfunction_ns_chi04_sR::synapse0x28b6310() {
   return (neuron0x289da80()*2.46324);
}

double NNfunction_ns_chi04_sR::synapse0x28b6350() {
   return (neuron0x289ddc0()*-0.0670364);
}

double NNfunction_ns_chi04_sR::synapse0x28b6390() {
   return (neuron0x289e100()*0.420252);
}

double NNfunction_ns_chi04_sR::synapse0x28b63d0() {
   return (neuron0x289e440()*0.571121);
}

double NNfunction_ns_chi04_sR::synapse0x28b6410() {
   return (neuron0x289e780()*1.21221);
}

double NNfunction_ns_chi04_sR::synapse0x28b6450() {
   return (neuron0x289eac0()*-1.42859);
}

double NNfunction_ns_chi04_sR::synapse0x28b6490() {
   return (neuron0x289ee00()*0.95401);
}

double NNfunction_ns_chi04_sR::synapse0x28b64d0() {
   return (neuron0x289f140()*-0.140771);
}

double NNfunction_ns_chi04_sR::synapse0x28b6510() {
   return (neuron0x289f480()*0.755086);
}

double NNfunction_ns_chi04_sR::synapse0x28b6550() {
   return (neuron0x289f7c0()*-0.88334);
}

double NNfunction_ns_chi04_sR::synapse0x28b6590() {
   return (neuron0x289fb00()*-0.667638);
}

double NNfunction_ns_chi04_sR::synapse0x28b65d0() {
   return (neuron0x289fe40()*-0.377275);
}

double NNfunction_ns_chi04_sR::synapse0x28b6610() {
   return (neuron0x28a0180()*0.013309);
}

double NNfunction_ns_chi04_sR::synapse0x28b6650() {
   return (neuron0x28a04c0()*0.724124);
}

double NNfunction_ns_chi04_sR::synapse0x28b6690() {
   return (neuron0x28a0800()*-0.90548);
}

double NNfunction_ns_chi04_sR::synapse0x28b6120() {
   return (neuron0x28a0b40()*-0.506064);
}

double NNfunction_ns_chi04_sR::synapse0x28b6160() {
   return (neuron0x28a10a0()*1.30321);
}

double NNfunction_ns_chi04_sR::synapse0x28b67e0() {
   return (neuron0x28a12c0()*-0.954142);
}

double NNfunction_ns_chi04_sR::synapse0x28b6820() {
   return (neuron0x28a1600()*-0.0877436);
}

double NNfunction_ns_chi04_sR::synapse0x28b6860() {
   return (neuron0x28a1940()*-0.025924);
}

double NNfunction_ns_chi04_sR::synapse0x28b68a0() {
   return (neuron0x28a1c80()*0.680916);
}

double NNfunction_ns_chi04_sR::synapse0x28b68e0() {
   return (neuron0x28a1fc0()*0.450423);
}

double NNfunction_ns_chi04_sR::synapse0x28b6920() {
   return (neuron0x28a2300()*-0.504727);
}

double NNfunction_ns_chi04_sR::synapse0x28b6ca0() {
   return (neuron0x289d740()*0.3882);
}

double NNfunction_ns_chi04_sR::synapse0x28b6ce0() {
   return (neuron0x289da80()*-0.0849489);
}

double NNfunction_ns_chi04_sR::synapse0x28b6d20() {
   return (neuron0x289ddc0()*-1.59478);
}

double NNfunction_ns_chi04_sR::synapse0x28b6d60() {
   return (neuron0x289e100()*0.167812);
}

double NNfunction_ns_chi04_sR::synapse0x28b6da0() {
   return (neuron0x289e440()*2.28717);
}

double NNfunction_ns_chi04_sR::synapse0x28b6de0() {
   return (neuron0x289e780()*1.01193);
}

double NNfunction_ns_chi04_sR::synapse0x28b6e20() {
   return (neuron0x289eac0()*-1.80531);
}

double NNfunction_ns_chi04_sR::synapse0x28b6e60() {
   return (neuron0x289ee00()*0.919139);
}

double NNfunction_ns_chi04_sR::synapse0x28b6ea0() {
   return (neuron0x289f140()*-0.952824);
}

double NNfunction_ns_chi04_sR::synapse0x28b6ee0() {
   return (neuron0x289f480()*0.00622323);
}

double NNfunction_ns_chi04_sR::synapse0x28b6f20() {
   return (neuron0x289f7c0()*-2.34615);
}

double NNfunction_ns_chi04_sR::synapse0x28b6f60() {
   return (neuron0x289fb00()*1.22433);
}

double NNfunction_ns_chi04_sR::synapse0x28b6fa0() {
   return (neuron0x289fe40()*0.473845);
}

double NNfunction_ns_chi04_sR::synapse0x28b6fe0() {
   return (neuron0x28a0180()*0.326634);
}

double NNfunction_ns_chi04_sR::synapse0x28b7020() {
   return (neuron0x28a04c0()*-1.13248);
}

double NNfunction_ns_chi04_sR::synapse0x28b7060() {
   return (neuron0x28a0800()*1.1571);
}

double NNfunction_ns_chi04_sR::synapse0x28b6af0() {
   return (neuron0x28a0b40()*2.08165);
}

double NNfunction_ns_chi04_sR::synapse0x28b6b30() {
   return (neuron0x28a10a0()*1.94924);
}

double NNfunction_ns_chi04_sR::synapse0x28b71b0() {
   return (neuron0x28a12c0()*-0.151959);
}

double NNfunction_ns_chi04_sR::synapse0x28b71f0() {
   return (neuron0x28a1600()*1.73698);
}

double NNfunction_ns_chi04_sR::synapse0x28b7230() {
   return (neuron0x28a1940()*1.56596);
}

double NNfunction_ns_chi04_sR::synapse0x28b7270() {
   return (neuron0x28a1c80()*-0.179026);
}

double NNfunction_ns_chi04_sR::synapse0x28b72b0() {
   return (neuron0x28a1fc0()*0.873572);
}

double NNfunction_ns_chi04_sR::synapse0x28b72f0() {
   return (neuron0x28a2300()*-0.619352);
}

double NNfunction_ns_chi04_sR::synapse0x28b7670() {
   return (neuron0x289d740()*0.0567507);
}

double NNfunction_ns_chi04_sR::synapse0x28b76b0() {
   return (neuron0x289da80()*5.76001);
}

double NNfunction_ns_chi04_sR::synapse0x28b76f0() {
   return (neuron0x289ddc0()*-1.51849);
}

double NNfunction_ns_chi04_sR::synapse0x28b7730() {
   return (neuron0x289e100()*0.0493163);
}

double NNfunction_ns_chi04_sR::synapse0x28b7770() {
   return (neuron0x289e440()*-0.0112101);
}

double NNfunction_ns_chi04_sR::synapse0x28b77b0() {
   return (neuron0x289e780()*-0.0173279);
}

double NNfunction_ns_chi04_sR::synapse0x28b77f0() {
   return (neuron0x289eac0()*-0.0245471);
}

double NNfunction_ns_chi04_sR::synapse0x28b7830() {
   return (neuron0x289ee00()*0.0329528);
}

double NNfunction_ns_chi04_sR::synapse0x28b7870() {
   return (neuron0x289f140()*-0.0110703);
}

double NNfunction_ns_chi04_sR::synapse0x28b78b0() {
   return (neuron0x289f480()*-0.00931447);
}

double NNfunction_ns_chi04_sR::synapse0x28b78f0() {
   return (neuron0x289f7c0()*0.00754178);
}

double NNfunction_ns_chi04_sR::synapse0x28b7930() {
   return (neuron0x289fb00()*0.000278571);
}

double NNfunction_ns_chi04_sR::synapse0x28b7970() {
   return (neuron0x289fe40()*-0.00662833);
}

double NNfunction_ns_chi04_sR::synapse0x28b79b0() {
   return (neuron0x28a0180()*-0.100963);
}

double NNfunction_ns_chi04_sR::synapse0x28b79f0() {
   return (neuron0x28a04c0()*0.0719371);
}

double NNfunction_ns_chi04_sR::synapse0x28b7a30() {
   return (neuron0x28a0800()*0.0340348);
}

double NNfunction_ns_chi04_sR::synapse0x28b74c0() {
   return (neuron0x28a0b40()*-0.028021);
}

double NNfunction_ns_chi04_sR::synapse0x28b7500() {
   return (neuron0x28a10a0()*0.00616285);
}

double NNfunction_ns_chi04_sR::synapse0x28b7b80() {
   return (neuron0x28a12c0()*0.136602);
}

double NNfunction_ns_chi04_sR::synapse0x28b7bc0() {
   return (neuron0x28a1600()*-0.0253232);
}

double NNfunction_ns_chi04_sR::synapse0x28b7c00() {
   return (neuron0x28a1940()*-0.0786731);
}

double NNfunction_ns_chi04_sR::synapse0x28b7c40() {
   return (neuron0x28a1c80()*0.0423424);
}

double NNfunction_ns_chi04_sR::synapse0x28b7c80() {
   return (neuron0x28a1fc0()*-0.00538483);
}

double NNfunction_ns_chi04_sR::synapse0x28b7cc0() {
   return (neuron0x28a2300()*0.573096);
}

double NNfunction_ns_chi04_sR::synapse0x28b8040() {
   return (neuron0x289d740()*0.000827268);
}

double NNfunction_ns_chi04_sR::synapse0x28ac610() {
   return (neuron0x289da80()*-1.67019);
}

double NNfunction_ns_chi04_sR::synapse0x28ac650() {
   return (neuron0x289ddc0()*-0.167601);
}

double NNfunction_ns_chi04_sR::synapse0x28ac690() {
   return (neuron0x289e100()*0.0953272);
}

double NNfunction_ns_chi04_sR::synapse0x28ac8e0() {
   return (neuron0x289e440()*0.00244058);
}

double NNfunction_ns_chi04_sR::synapse0x28ac920() {
   return (neuron0x289e780()*0.0232955);
}

double NNfunction_ns_chi04_sR::synapse0x28ac960() {
   return (neuron0x289eac0()*0.00893841);
}

double NNfunction_ns_chi04_sR::synapse0x28acbb0() {
   return (neuron0x289ee00()*-0.0105604);
}

double NNfunction_ns_chi04_sR::synapse0x28acbf0() {
   return (neuron0x289f140()*0.0584167);
}

double NNfunction_ns_chi04_sR::synapse0x28ace40() {
   return (neuron0x289f480()*0.0335109);
}

double NNfunction_ns_chi04_sR::synapse0x28ace80() {
   return (neuron0x289f7c0()*-0.0141292);
}

double NNfunction_ns_chi04_sR::synapse0x28acec0() {
   return (neuron0x289fb00()*0.00177504);
}

double NNfunction_ns_chi04_sR::synapse0x28ad110() {
   return (neuron0x289fe40()*-0.00185196);
}

double NNfunction_ns_chi04_sR::synapse0x28ad150() {
   return (neuron0x28a0180()*-0.0327362);
}

double NNfunction_ns_chi04_sR::synapse0x28ad3a0() {
   return (neuron0x28a04c0()*-0.00784336);
}

double NNfunction_ns_chi04_sR::synapse0x28ad3e0() {
   return (neuron0x28a0800()*-0.0121263);
}

double NNfunction_ns_chi04_sR::synapse0x28b7e90() {
   return (neuron0x28a0b40()*-0.00769791);
}

double NNfunction_ns_chi04_sR::synapse0x28b7ed0() {
   return (neuron0x28a10a0()*-0.00178008);
}

double NNfunction_ns_chi04_sR::synapse0x28ad530() {
   return (neuron0x28a12c0()*0.302825);
}

double NNfunction_ns_chi04_sR::synapse0x28ada40() {
   return (neuron0x28a1600()*-0.00549828);
}

double NNfunction_ns_chi04_sR::synapse0x28ada80() {
   return (neuron0x28a1940()*0.00811858);
}

double NNfunction_ns_chi04_sR::synapse0x28adac0() {
   return (neuron0x28a1c80()*0.00631883);
}

double NNfunction_ns_chi04_sR::synapse0x28add10() {
   return (neuron0x28a1fc0()*-0.0101113);
}

double NNfunction_ns_chi04_sR::synapse0x28add50() {
   return (neuron0x28a2300()*-0.0697049);
}

double NNfunction_ns_chi04_sR::synapse0x28ad600() {
   return (neuron0x289d740()*-1.28849);
}

double NNfunction_ns_chi04_sR::synapse0x28ad640() {
   return (neuron0x289da80()*-0.436008);
}

double NNfunction_ns_chi04_sR::synapse0x28ad680() {
   return (neuron0x289ddc0()*2.41495);
}

double NNfunction_ns_chi04_sR::synapse0x28ad6c0() {
   return (neuron0x289e100()*-1.07744);
}

double NNfunction_ns_chi04_sR::synapse0x28ae040() {
   return (neuron0x289e440()*0.158928);
}

double NNfunction_ns_chi04_sR::synapse0x28ba390() {
   return (neuron0x289e780()*-0.481185);
}

double NNfunction_ns_chi04_sR::synapse0x28ba3d0() {
   return (neuron0x289eac0()*-0.977859);
}

double NNfunction_ns_chi04_sR::synapse0x28ba410() {
   return (neuron0x289ee00()*-0.0849598);
}

double NNfunction_ns_chi04_sR::synapse0x28ba450() {
   return (neuron0x289f140()*0.240037);
}

double NNfunction_ns_chi04_sR::synapse0x28ba490() {
   return (neuron0x289f480()*0.0984818);
}

double NNfunction_ns_chi04_sR::synapse0x28ba4d0() {
   return (neuron0x289f7c0()*1.08104);
}

double NNfunction_ns_chi04_sR::synapse0x28ba510() {
   return (neuron0x289fb00()*0.473582);
}

double NNfunction_ns_chi04_sR::synapse0x28ba550() {
   return (neuron0x289fe40()*-0.136881);
}

double NNfunction_ns_chi04_sR::synapse0x28ba590() {
   return (neuron0x28a0180()*1.72966);
}

double NNfunction_ns_chi04_sR::synapse0x28ba5d0() {
   return (neuron0x28a04c0()*1.44781);
}

double NNfunction_ns_chi04_sR::synapse0x28ba610() {
   return (neuron0x28a0800()*1.1425);
}

double NNfunction_ns_chi04_sR::synapse0x28adf20() {
   return (neuron0x28a0b40()*-0.890247);
}

double NNfunction_ns_chi04_sR::synapse0x28adf60() {
   return (neuron0x28a10a0()*1.85522);
}

double NNfunction_ns_chi04_sR::synapse0x28ba760() {
   return (neuron0x28a12c0()*3.85927);
}

double NNfunction_ns_chi04_sR::synapse0x28ba7a0() {
   return (neuron0x28a1600()*-0.614928);
}

double NNfunction_ns_chi04_sR::synapse0x28ba7e0() {
   return (neuron0x28a1940()*-0.175102);
}

double NNfunction_ns_chi04_sR::synapse0x28ba820() {
   return (neuron0x28a1c80()*-0.168325);
}

double NNfunction_ns_chi04_sR::synapse0x28ba860() {
   return (neuron0x28a1fc0()*0.0513751);
}

double NNfunction_ns_chi04_sR::synapse0x28ba8a0() {
   return (neuron0x28a2300()*-0.639317);
}

double NNfunction_ns_chi04_sR::synapse0x28bac20() {
   return (neuron0x289d740()*0.0756931);
}

double NNfunction_ns_chi04_sR::synapse0x28bac60() {
   return (neuron0x289da80()*15.7004);
}

double NNfunction_ns_chi04_sR::synapse0x28baca0() {
   return (neuron0x289ddc0()*2.22061);
}

double NNfunction_ns_chi04_sR::synapse0x28bace0() {
   return (neuron0x289e100()*-0.0689236);
}

double NNfunction_ns_chi04_sR::synapse0x28bad20() {
   return (neuron0x289e440()*-0.101086);
}

double NNfunction_ns_chi04_sR::synapse0x28bad60() {
   return (neuron0x289e780()*0.0325605);
}

double NNfunction_ns_chi04_sR::synapse0x28bada0() {
   return (neuron0x289eac0()*-0.163214);
}

double NNfunction_ns_chi04_sR::synapse0x28bade0() {
   return (neuron0x289ee00()*0.0456881);
}

double NNfunction_ns_chi04_sR::synapse0x28bae20() {
   return (neuron0x289f140()*0.107999);
}

double NNfunction_ns_chi04_sR::synapse0x28bae60() {
   return (neuron0x289f480()*0.117516);
}

double NNfunction_ns_chi04_sR::synapse0x28baea0() {
   return (neuron0x289f7c0()*-0.0986935);
}

double NNfunction_ns_chi04_sR::synapse0x28baee0() {
   return (neuron0x289fb00()*0.127204);
}

double NNfunction_ns_chi04_sR::synapse0x28baf20() {
   return (neuron0x289fe40()*0.0528923);
}

double NNfunction_ns_chi04_sR::synapse0x28baf60() {
   return (neuron0x28a0180()*-0.0974028);
}

double NNfunction_ns_chi04_sR::synapse0x28bafa0() {
   return (neuron0x28a04c0()*0.0858641);
}

double NNfunction_ns_chi04_sR::synapse0x28bafe0() {
   return (neuron0x28a0800()*-0.152457);
}

double NNfunction_ns_chi04_sR::synapse0x28baa70() {
   return (neuron0x28a0b40()*0.0136338);
}

double NNfunction_ns_chi04_sR::synapse0x28baab0() {
   return (neuron0x28a10a0()*-0.0180308);
}

double NNfunction_ns_chi04_sR::synapse0x28bb130() {
   return (neuron0x28a12c0()*-0.505116);
}

double NNfunction_ns_chi04_sR::synapse0x28bb170() {
   return (neuron0x28a1600()*0.0354935);
}

double NNfunction_ns_chi04_sR::synapse0x28bb1b0() {
   return (neuron0x28a1940()*-0.043268);
}

double NNfunction_ns_chi04_sR::synapse0x28bb1f0() {
   return (neuron0x28a1c80()*-0.0335387);
}

double NNfunction_ns_chi04_sR::synapse0x28bb230() {
   return (neuron0x28a1fc0()*-0.0688535);
}

double NNfunction_ns_chi04_sR::synapse0x28bb270() {
   return (neuron0x28a2300()*0.56228);
}

double NNfunction_ns_chi04_sR::synapse0x28bb5f0() {
   return (neuron0x289d740()*0.166104);
}

double NNfunction_ns_chi04_sR::synapse0x28bb630() {
   return (neuron0x289da80()*-0.0604771);
}

double NNfunction_ns_chi04_sR::synapse0x28bb670() {
   return (neuron0x289ddc0()*2.64203);
}

double NNfunction_ns_chi04_sR::synapse0x28bb6b0() {
   return (neuron0x289e100()*0.750028);
}

double NNfunction_ns_chi04_sR::synapse0x28bb6f0() {
   return (neuron0x289e440()*1.07668);
}

double NNfunction_ns_chi04_sR::synapse0x28bb730() {
   return (neuron0x289e780()*2.19797);
}

double NNfunction_ns_chi04_sR::synapse0x28bb770() {
   return (neuron0x289eac0()*0.458411);
}

double NNfunction_ns_chi04_sR::synapse0x28bb7b0() {
   return (neuron0x289ee00()*0.864887);
}

double NNfunction_ns_chi04_sR::synapse0x28bb7f0() {
   return (neuron0x289f140()*-0.0185135);
}

double NNfunction_ns_chi04_sR::synapse0x28bb830() {
   return (neuron0x289f480()*0.567688);
}

double NNfunction_ns_chi04_sR::synapse0x28bb870() {
   return (neuron0x289f7c0()*0.161962);
}

double NNfunction_ns_chi04_sR::synapse0x28bb8b0() {
   return (neuron0x289fb00()*1.22962);
}

double NNfunction_ns_chi04_sR::synapse0x28bb8f0() {
   return (neuron0x289fe40()*0.146582);
}

double NNfunction_ns_chi04_sR::synapse0x28bb930() {
   return (neuron0x28a0180()*0.684387);
}

double NNfunction_ns_chi04_sR::synapse0x28bb970() {
   return (neuron0x28a04c0()*-0.50623);
}

double NNfunction_ns_chi04_sR::synapse0x28bb9b0() {
   return (neuron0x28a0800()*0.527844);
}

double NNfunction_ns_chi04_sR::synapse0x28bb440() {
   return (neuron0x28a0b40()*-2.04306);
}

double NNfunction_ns_chi04_sR::synapse0x28bb480() {
   return (neuron0x28a10a0()*-1.1937);
}

double NNfunction_ns_chi04_sR::synapse0x28bbb00() {
   return (neuron0x28a12c0()*-1.14075);
}

double NNfunction_ns_chi04_sR::synapse0x28bbb40() {
   return (neuron0x28a1600()*-0.851748);
}

double NNfunction_ns_chi04_sR::synapse0x28bbb80() {
   return (neuron0x28a1940()*0.422991);
}

double NNfunction_ns_chi04_sR::synapse0x28bbbc0() {
   return (neuron0x28a1c80()*0.763564);
}

double NNfunction_ns_chi04_sR::synapse0x28bbc00() {
   return (neuron0x28a1fc0()*-1.55109);
}

double NNfunction_ns_chi04_sR::synapse0x28bbc40() {
   return (neuron0x28a2300()*-1.54058);
}

double NNfunction_ns_chi04_sR::synapse0x28bbfc0() {
   return (neuron0x289d740()*-0.644884);
}

double NNfunction_ns_chi04_sR::synapse0x28bc000() {
   return (neuron0x289da80()*-0.286348);
}

double NNfunction_ns_chi04_sR::synapse0x28bc040() {
   return (neuron0x289ddc0()*-1.65467);
}

double NNfunction_ns_chi04_sR::synapse0x28bc080() {
   return (neuron0x289e100()*0.815825);
}

double NNfunction_ns_chi04_sR::synapse0x28bc0c0() {
   return (neuron0x289e440()*0.649151);
}

double NNfunction_ns_chi04_sR::synapse0x28bc100() {
   return (neuron0x289e780()*1.68227);
}

double NNfunction_ns_chi04_sR::synapse0x28bc140() {
   return (neuron0x289eac0()*1.88336);
}

double NNfunction_ns_chi04_sR::synapse0x28bc180() {
   return (neuron0x289ee00()*-0.433315);
}

double NNfunction_ns_chi04_sR::synapse0x28bc1c0() {
   return (neuron0x289f140()*-0.327423);
}

double NNfunction_ns_chi04_sR::synapse0x28bc200() {
   return (neuron0x289f480()*-0.377569);
}

double NNfunction_ns_chi04_sR::synapse0x28bc240() {
   return (neuron0x289f7c0()*0.403332);
}

double NNfunction_ns_chi04_sR::synapse0x28bc280() {
   return (neuron0x289fb00()*-0.715541);
}

double NNfunction_ns_chi04_sR::synapse0x28bc2c0() {
   return (neuron0x289fe40()*-0.258332);
}

double NNfunction_ns_chi04_sR::synapse0x28bc300() {
   return (neuron0x28a0180()*-0.328595);
}

double NNfunction_ns_chi04_sR::synapse0x28bc340() {
   return (neuron0x28a04c0()*-1.97357);
}

double NNfunction_ns_chi04_sR::synapse0x28bc380() {
   return (neuron0x28a0800()*-0.669441);
}

double NNfunction_ns_chi04_sR::synapse0x28bbe10() {
   return (neuron0x28a0b40()*0.891061);
}

double NNfunction_ns_chi04_sR::synapse0x28bbe50() {
   return (neuron0x28a10a0()*-0.605252);
}

double NNfunction_ns_chi04_sR::synapse0x28bc4d0() {
   return (neuron0x28a12c0()*3.23754);
}

double NNfunction_ns_chi04_sR::synapse0x28bc510() {
   return (neuron0x28a1600()*-1.13735);
}

double NNfunction_ns_chi04_sR::synapse0x28bc550() {
   return (neuron0x28a1940()*-0.502431);
}

double NNfunction_ns_chi04_sR::synapse0x28bc590() {
   return (neuron0x28a1c80()*-0.182584);
}

double NNfunction_ns_chi04_sR::synapse0x28bc5d0() {
   return (neuron0x28a1fc0()*0.226911);
}

double NNfunction_ns_chi04_sR::synapse0x28bc610() {
   return (neuron0x28a2300()*-0.419713);
}

double NNfunction_ns_chi04_sR::synapse0x28bc990() {
   return (neuron0x289d740()*-0.870833);
}

double NNfunction_ns_chi04_sR::synapse0x28bc9d0() {
   return (neuron0x289da80()*1.88863);
}

double NNfunction_ns_chi04_sR::synapse0x28bca10() {
   return (neuron0x289ddc0()*0.527734);
}

double NNfunction_ns_chi04_sR::synapse0x28bca50() {
   return (neuron0x289e100()*0.185701);
}

double NNfunction_ns_chi04_sR::synapse0x28bca90() {
   return (neuron0x289e440()*1.37158);
}

double NNfunction_ns_chi04_sR::synapse0x28bcad0() {
   return (neuron0x289e780()*1.70077);
}

double NNfunction_ns_chi04_sR::synapse0x28bcb10() {
   return (neuron0x289eac0()*1.10747);
}

double NNfunction_ns_chi04_sR::synapse0x28bcb50() {
   return (neuron0x289ee00()*1.14398);
}

double NNfunction_ns_chi04_sR::synapse0x28bcb90() {
   return (neuron0x289f140()*-1.0851);
}

double NNfunction_ns_chi04_sR::synapse0x28bcbd0() {
   return (neuron0x289f480()*-0.829368);
}

double NNfunction_ns_chi04_sR::synapse0x28bcc10() {
   return (neuron0x289f7c0()*0.18335);
}

double NNfunction_ns_chi04_sR::synapse0x28bcc50() {
   return (neuron0x289fb00()*2.23662);
}

double NNfunction_ns_chi04_sR::synapse0x28bcc90() {
   return (neuron0x289fe40()*0.482315);
}

double NNfunction_ns_chi04_sR::synapse0x28bccd0() {
   return (neuron0x28a0180()*1.03753);
}

double NNfunction_ns_chi04_sR::synapse0x28bcd10() {
   return (neuron0x28a04c0()*-0.0124005);
}

double NNfunction_ns_chi04_sR::synapse0x28bcd50() {
   return (neuron0x28a0800()*-0.407724);
}

double NNfunction_ns_chi04_sR::synapse0x28bc7e0() {
   return (neuron0x28a0b40()*-1.91456);
}

double NNfunction_ns_chi04_sR::synapse0x28bc820() {
   return (neuron0x28a10a0()*1.25931);
}

double NNfunction_ns_chi04_sR::synapse0x28bcea0() {
   return (neuron0x28a12c0()*-0.765047);
}

double NNfunction_ns_chi04_sR::synapse0x28bcee0() {
   return (neuron0x28a1600()*0.425186);
}

double NNfunction_ns_chi04_sR::synapse0x28bcf20() {
   return (neuron0x28a1940()*-2.40983);
}

double NNfunction_ns_chi04_sR::synapse0x28bcf60() {
   return (neuron0x28a1c80()*0.106547);
}

double NNfunction_ns_chi04_sR::synapse0x28bcfa0() {
   return (neuron0x28a1fc0()*0.626041);
}

double NNfunction_ns_chi04_sR::synapse0x28bcfe0() {
   return (neuron0x28a2300()*0.456308);
}

double NNfunction_ns_chi04_sR::synapse0x28bd360() {
   return (neuron0x289d740()*0.064872);
}

double NNfunction_ns_chi04_sR::synapse0x28bd3a0() {
   return (neuron0x289da80()*4.64864);
}

double NNfunction_ns_chi04_sR::synapse0x28bd3e0() {
   return (neuron0x289ddc0()*2.15842);
}

double NNfunction_ns_chi04_sR::synapse0x28bd420() {
   return (neuron0x289e100()*-0.0433965);
}

double NNfunction_ns_chi04_sR::synapse0x28bd460() {
   return (neuron0x289e440()*-0.00507685);
}

double NNfunction_ns_chi04_sR::synapse0x28bd4a0() {
   return (neuron0x289e780()*-0.0717225);
}

double NNfunction_ns_chi04_sR::synapse0x28bd4e0() {
   return (neuron0x289eac0()*-0.176292);
}

double NNfunction_ns_chi04_sR::synapse0x28bd520() {
   return (neuron0x289ee00()*-0.111117);
}

double NNfunction_ns_chi04_sR::synapse0x28bd560() {
   return (neuron0x289f140()*0.114368);
}

double NNfunction_ns_chi04_sR::synapse0x28bd5a0() {
   return (neuron0x289f480()*0.0236814);
}

double NNfunction_ns_chi04_sR::synapse0x28bd5e0() {
   return (neuron0x289f7c0()*-0.0714312);
}

double NNfunction_ns_chi04_sR::synapse0x28bd620() {
   return (neuron0x289fb00()*-0.0453123);
}

double NNfunction_ns_chi04_sR::synapse0x28bd660() {
   return (neuron0x289fe40()*0.0619614);
}

double NNfunction_ns_chi04_sR::synapse0x28bd6a0() {
   return (neuron0x28a0180()*0.1068);
}

double NNfunction_ns_chi04_sR::synapse0x28bd6e0() {
   return (neuron0x28a04c0()*-0.0392491);
}

double NNfunction_ns_chi04_sR::synapse0x28bd720() {
   return (neuron0x28a0800()*0.0167203);
}

double NNfunction_ns_chi04_sR::synapse0x28bd1b0() {
   return (neuron0x28a0b40()*-0.0792313);
}

double NNfunction_ns_chi04_sR::synapse0x28bd1f0() {
   return (neuron0x28a10a0()*-0.030842);
}

double NNfunction_ns_chi04_sR::synapse0x28bd870() {
   return (neuron0x28a12c0()*-0.393132);
}

double NNfunction_ns_chi04_sR::synapse0x28bd8b0() {
   return (neuron0x28a1600()*-0.00118243);
}

double NNfunction_ns_chi04_sR::synapse0x28bd8f0() {
   return (neuron0x28a1940()*0.0627277);
}

double NNfunction_ns_chi04_sR::synapse0x28bd930() {
   return (neuron0x28a1c80()*0.100145);
}

double NNfunction_ns_chi04_sR::synapse0x28bd970() {
   return (neuron0x28a1fc0()*-0.0398177);
}

double NNfunction_ns_chi04_sR::synapse0x28bd9b0() {
   return (neuron0x28a2300()*-2.73541);
}

double NNfunction_ns_chi04_sR::synapse0x28bdd30() {
   return (neuron0x289d740()*0.402968);
}

double NNfunction_ns_chi04_sR::synapse0x28bdd70() {
   return (neuron0x289da80()*1.88881);
}

double NNfunction_ns_chi04_sR::synapse0x28bddb0() {
   return (neuron0x289ddc0()*-0.334522);
}

double NNfunction_ns_chi04_sR::synapse0x28bddf0() {
   return (neuron0x289e100()*-0.691879);
}

double NNfunction_ns_chi04_sR::synapse0x28bde30() {
   return (neuron0x289e440()*-1.15385);
}

double NNfunction_ns_chi04_sR::synapse0x28bde70() {
   return (neuron0x289e780()*0.0640579);
}

double NNfunction_ns_chi04_sR::synapse0x28bdeb0() {
   return (neuron0x289eac0()*-0.22055);
}

double NNfunction_ns_chi04_sR::synapse0x28bdef0() {
   return (neuron0x289ee00()*-0.503213);
}

double NNfunction_ns_chi04_sR::synapse0x28bdf30() {
   return (neuron0x289f140()*0.160802);
}

double NNfunction_ns_chi04_sR::synapse0x28bdf70() {
   return (neuron0x289f480()*0.566268);
}

double NNfunction_ns_chi04_sR::synapse0x28bdfb0() {
   return (neuron0x289f7c0()*0.108878);
}

double NNfunction_ns_chi04_sR::synapse0x28bdff0() {
   return (neuron0x289fb00()*0.357465);
}

double NNfunction_ns_chi04_sR::synapse0x28be030() {
   return (neuron0x289fe40()*1.47433);
}

double NNfunction_ns_chi04_sR::synapse0x28be070() {
   return (neuron0x28a0180()*-0.78044);
}

double NNfunction_ns_chi04_sR::synapse0x28be0b0() {
   return (neuron0x28a04c0()*-0.99408);
}

double NNfunction_ns_chi04_sR::synapse0x28be0f0() {
   return (neuron0x28a0800()*-0.980756);
}

double NNfunction_ns_chi04_sR::synapse0x28bdb80() {
   return (neuron0x28a0b40()*-0.909613);
}

double NNfunction_ns_chi04_sR::synapse0x28bdbc0() {
   return (neuron0x28a10a0()*-0.539529);
}

double NNfunction_ns_chi04_sR::synapse0x28be240() {
   return (neuron0x28a12c0()*1.48387);
}

double NNfunction_ns_chi04_sR::synapse0x28be280() {
   return (neuron0x28a1600()*-1.92482);
}

double NNfunction_ns_chi04_sR::synapse0x28be2c0() {
   return (neuron0x28a1940()*-0.943273);
}

double NNfunction_ns_chi04_sR::synapse0x28be300() {
   return (neuron0x28a1c80()*-1.84838);
}

double NNfunction_ns_chi04_sR::synapse0x28be340() {
   return (neuron0x28a1fc0()*0.460801);
}

double NNfunction_ns_chi04_sR::synapse0x28be380() {
   return (neuron0x28a2300()*-2.43427);
}

double NNfunction_ns_chi04_sR::synapse0x28be700() {
   return (neuron0x289d740()*0.0237111);
}

double NNfunction_ns_chi04_sR::synapse0x28be740() {
   return (neuron0x289da80()*2.01428);
}

double NNfunction_ns_chi04_sR::synapse0x28be780() {
   return (neuron0x289ddc0()*-1.32175);
}

double NNfunction_ns_chi04_sR::synapse0x28be7c0() {
   return (neuron0x289e100()*0.0121913);
}

double NNfunction_ns_chi04_sR::synapse0x28be800() {
   return (neuron0x289e440()*-0.0159486);
}

double NNfunction_ns_chi04_sR::synapse0x28be840() {
   return (neuron0x289e780()*-0.0725096);
}

double NNfunction_ns_chi04_sR::synapse0x28be880() {
   return (neuron0x289eac0()*-0.0162367);
}

double NNfunction_ns_chi04_sR::synapse0x28be8c0() {
   return (neuron0x289ee00()*0.0379828);
}

double NNfunction_ns_chi04_sR::synapse0x28be900() {
   return (neuron0x289f140()*0.000641232);
}

double NNfunction_ns_chi04_sR::synapse0x28be940() {
   return (neuron0x289f480()*0.0426247);
}

double NNfunction_ns_chi04_sR::synapse0x28be980() {
   return (neuron0x289f7c0()*-0.102585);
}

double NNfunction_ns_chi04_sR::synapse0x28be9c0() {
   return (neuron0x289fb00()*-0.00256153);
}

double NNfunction_ns_chi04_sR::synapse0x28bea00() {
   return (neuron0x289fe40()*-0.00282252);
}

double NNfunction_ns_chi04_sR::synapse0x28bea40() {
   return (neuron0x28a0180()*-0.062728);
}

double NNfunction_ns_chi04_sR::synapse0x28bea80() {
   return (neuron0x28a04c0()*0.0128123);
}

double NNfunction_ns_chi04_sR::synapse0x28beac0() {
   return (neuron0x28a0800()*-0.0152998);
}

double NNfunction_ns_chi04_sR::synapse0x28be550() {
   return (neuron0x28a0b40()*0.0135033);
}

double NNfunction_ns_chi04_sR::synapse0x28be590() {
   return (neuron0x28a10a0()*-0.000946912);
}

double NNfunction_ns_chi04_sR::synapse0x28bec10() {
   return (neuron0x28a12c0()*0.188096);
}

double NNfunction_ns_chi04_sR::synapse0x28bec50() {
   return (neuron0x28a1600()*-0.00394704);
}

double NNfunction_ns_chi04_sR::synapse0x28bec90() {
   return (neuron0x28a1940()*-0.0599125);
}

double NNfunction_ns_chi04_sR::synapse0x28becd0() {
   return (neuron0x28a1c80()*0.0640344);
}

double NNfunction_ns_chi04_sR::synapse0x28bed10() {
   return (neuron0x28a1fc0()*-0.0096266);
}

double NNfunction_ns_chi04_sR::synapse0x28bed50() {
   return (neuron0x28a2300()*1.17859);
}

double NNfunction_ns_chi04_sR::synapse0x28a7800() {
   return (neuron0x289d740()*-0.245547);
}

double NNfunction_ns_chi04_sR::synapse0x28a7840() {
   return (neuron0x289da80()*0.0716894);
}

double NNfunction_ns_chi04_sR::synapse0x28a7880() {
   return (neuron0x289ddc0()*0.879602);
}

double NNfunction_ns_chi04_sR::synapse0x28a78c0() {
   return (neuron0x289e100()*0.294057);
}

double NNfunction_ns_chi04_sR::synapse0x28a7900() {
   return (neuron0x289e440()*-0.405275);
}

double NNfunction_ns_chi04_sR::synapse0x28a7940() {
   return (neuron0x289e780()*-0.906048);
}

double NNfunction_ns_chi04_sR::synapse0x28a7980() {
   return (neuron0x289eac0()*-0.793899);
}

double NNfunction_ns_chi04_sR::synapse0x28a79c0() {
   return (neuron0x289ee00()*-0.548404);
}

double NNfunction_ns_chi04_sR::synapse0x28bf4e0() {
   return (neuron0x289f140()*0.577165);
}

double NNfunction_ns_chi04_sR::synapse0x28bf520() {
   return (neuron0x289f480()*0.717286);
}

double NNfunction_ns_chi04_sR::synapse0x28bf560() {
   return (neuron0x289f7c0()*1.69961);
}

double NNfunction_ns_chi04_sR::synapse0x28bf5a0() {
   return (neuron0x289fb00()*0.226113);
}

double NNfunction_ns_chi04_sR::synapse0x28bf5e0() {
   return (neuron0x289fe40()*1.94962);
}

double NNfunction_ns_chi04_sR::synapse0x28bf620() {
   return (neuron0x28a0180()*-1.16582);
}

double NNfunction_ns_chi04_sR::synapse0x28bf660() {
   return (neuron0x28a04c0()*0.164436);
}

double NNfunction_ns_chi04_sR::synapse0x28bf6a0() {
   return (neuron0x28a0800()*0.980519);
}

double NNfunction_ns_chi04_sR::synapse0x28bef20() {
   return (neuron0x28a0b40()*0.546378);
}

double NNfunction_ns_chi04_sR::synapse0x28bef60() {
   return (neuron0x28a10a0()*-0.25719);
}

double NNfunction_ns_chi04_sR::synapse0x28bf7f0() {
   return (neuron0x28a12c0()*-0.356864);
}

double NNfunction_ns_chi04_sR::synapse0x28bf830() {
   return (neuron0x28a1600()*0.891934);
}

double NNfunction_ns_chi04_sR::synapse0x28bf870() {
   return (neuron0x28a1940()*-0.161394);
}

double NNfunction_ns_chi04_sR::synapse0x28bf8b0() {
   return (neuron0x28a1c80()*-0.0779236);
}

double NNfunction_ns_chi04_sR::synapse0x28bf8f0() {
   return (neuron0x28a1fc0()*0.229598);
}

double NNfunction_ns_chi04_sR::synapse0x28bf930() {
   return (neuron0x28a2300()*1.65765);
}

double NNfunction_ns_chi04_sR::synapse0x28bfcb0() {
   return (neuron0x289d740()*-0.00422526);
}

double NNfunction_ns_chi04_sR::synapse0x28bfcf0() {
   return (neuron0x289da80()*-0.011023);
}

double NNfunction_ns_chi04_sR::synapse0x28bfd30() {
   return (neuron0x289ddc0()*0.00506158);
}

double NNfunction_ns_chi04_sR::synapse0x28bfd70() {
   return (neuron0x289e100()*4.07464);
}

double NNfunction_ns_chi04_sR::synapse0x28bfdb0() {
   return (neuron0x289e440()*0.00673325);
}

double NNfunction_ns_chi04_sR::synapse0x28bfdf0() {
   return (neuron0x289e780()*-0.0196553);
}

double NNfunction_ns_chi04_sR::synapse0x28bfe30() {
   return (neuron0x289eac0()*-0.00609207);
}

double NNfunction_ns_chi04_sR::synapse0x28bfe70() {
   return (neuron0x289ee00()*-0.0210679);
}

double NNfunction_ns_chi04_sR::synapse0x28bfeb0() {
   return (neuron0x289f140()*-0.00774221);
}

double NNfunction_ns_chi04_sR::synapse0x28bfef0() {
   return (neuron0x289f480()*-0.00151939);
}

double NNfunction_ns_chi04_sR::synapse0x28bff30() {
   return (neuron0x289f7c0()*0.00359954);
}

double NNfunction_ns_chi04_sR::synapse0x28bff70() {
   return (neuron0x289fb00()*0.0318179);
}

double NNfunction_ns_chi04_sR::synapse0x28bffb0() {
   return (neuron0x289fe40()*-0.0326911);
}

double NNfunction_ns_chi04_sR::synapse0x28bfff0() {
   return (neuron0x28a0180()*0.0720782);
}

double NNfunction_ns_chi04_sR::synapse0x28c0030() {
   return (neuron0x28a04c0()*0.00616117);
}

double NNfunction_ns_chi04_sR::synapse0x28c0070() {
   return (neuron0x28a0800()*-0.0285421);
}

double NNfunction_ns_chi04_sR::synapse0x28bfb00() {
   return (neuron0x28a0b40()*0.00681597);
}

double NNfunction_ns_chi04_sR::synapse0x28bfb40() {
   return (neuron0x28a10a0()*-0.0469979);
}

double NNfunction_ns_chi04_sR::synapse0x28c01c0() {
   return (neuron0x28a12c0()*0.263867);
}

double NNfunction_ns_chi04_sR::synapse0x28c0200() {
   return (neuron0x28a1600()*-0.0137587);
}

double NNfunction_ns_chi04_sR::synapse0x28c0240() {
   return (neuron0x28a1940()*-0.0382739);
}

double NNfunction_ns_chi04_sR::synapse0x28c0280() {
   return (neuron0x28a1c80()*-0.00334831);
}

double NNfunction_ns_chi04_sR::synapse0x28c02c0() {
   return (neuron0x28a1fc0()*0.00333685);
}

double NNfunction_ns_chi04_sR::synapse0x28c0300() {
   return (neuron0x28a2300()*-0.0366093);
}

double NNfunction_ns_chi04_sR::synapse0x28c0680() {
   return (neuron0x289d740()*-0.00101716);
}

double NNfunction_ns_chi04_sR::synapse0x28c06c0() {
   return (neuron0x289da80()*-0.0219792);
}

double NNfunction_ns_chi04_sR::synapse0x28c0700() {
   return (neuron0x289ddc0()*-0.288747);
}

double NNfunction_ns_chi04_sR::synapse0x28c0740() {
   return (neuron0x289e100()*-0.296336);
}

double NNfunction_ns_chi04_sR::synapse0x28c0780() {
   return (neuron0x289e440()*0.0289247);
}

double NNfunction_ns_chi04_sR::synapse0x28c07c0() {
   return (neuron0x289e780()*0.0625989);
}

double NNfunction_ns_chi04_sR::synapse0x28c0800() {
   return (neuron0x289eac0()*0.0336148);
}

double NNfunction_ns_chi04_sR::synapse0x28c0840() {
   return (neuron0x289ee00()*-0.00551056);
}

double NNfunction_ns_chi04_sR::synapse0x28c0880() {
   return (neuron0x289f140()*0.103712);
}

double NNfunction_ns_chi04_sR::synapse0x28c08c0() {
   return (neuron0x289f480()*0.0618449);
}

double NNfunction_ns_chi04_sR::synapse0x28c0900() {
   return (neuron0x289f7c0()*-0.0155034);
}

double NNfunction_ns_chi04_sR::synapse0x28c0940() {
   return (neuron0x289fb00()*0.0127848);
}

double NNfunction_ns_chi04_sR::synapse0x28c0980() {
   return (neuron0x289fe40()*0.00244925);
}

double NNfunction_ns_chi04_sR::synapse0x28c09c0() {
   return (neuron0x28a0180()*-0.0610234);
}

double NNfunction_ns_chi04_sR::synapse0x28c0a00() {
   return (neuron0x28a04c0()*0.00194301);
}

double NNfunction_ns_chi04_sR::synapse0x28c0a40() {
   return (neuron0x28a0800()*0.0126052);
}

double NNfunction_ns_chi04_sR::synapse0x28c04d0() {
   return (neuron0x28a0b40()*-0.0151752);
}

double NNfunction_ns_chi04_sR::synapse0x28c0510() {
   return (neuron0x28a10a0()*-0.00305414);
}

double NNfunction_ns_chi04_sR::synapse0x28b1040() {
   return (neuron0x28a12c0()*-0.303045);
}

double NNfunction_ns_chi04_sR::synapse0x28b1080() {
   return (neuron0x28a1600()*-0.035012);
}

double NNfunction_ns_chi04_sR::synapse0x28b10c0() {
   return (neuron0x28a1940()*0.0138916);
}

double NNfunction_ns_chi04_sR::synapse0x28b1100() {
   return (neuron0x28a1c80()*0.0134274);
}

double NNfunction_ns_chi04_sR::synapse0x28b1140() {
   return (neuron0x28a1fc0()*-0.0161619);
}

double NNfunction_ns_chi04_sR::synapse0x28b1180() {
   return (neuron0x28a2300()*-0.073715);
}

double NNfunction_ns_chi04_sR::synapse0x28b1500() {
   return (neuron0x289d740()*0.642046);
}

double NNfunction_ns_chi04_sR::synapse0x28b1540() {
   return (neuron0x289da80()*-0.310274);
}

double NNfunction_ns_chi04_sR::synapse0x28b1580() {
   return (neuron0x289ddc0()*-2.29861);
}

double NNfunction_ns_chi04_sR::synapse0x28b15c0() {
   return (neuron0x289e100()*-0.824464);
}

double NNfunction_ns_chi04_sR::synapse0x28b1600() {
   return (neuron0x289e440()*0.47737);
}

double NNfunction_ns_chi04_sR::synapse0x28b1640() {
   return (neuron0x289e780()*-0.661195);
}

double NNfunction_ns_chi04_sR::synapse0x28b1680() {
   return (neuron0x289eac0()*0.0164657);
}

double NNfunction_ns_chi04_sR::synapse0x28b16c0() {
   return (neuron0x289ee00()*-0.94491);
}

double NNfunction_ns_chi04_sR::synapse0x28b1700() {
   return (neuron0x289f140()*-0.405748);
}

double NNfunction_ns_chi04_sR::synapse0x28b1740() {
   return (neuron0x289f480()*1.30754);
}

double NNfunction_ns_chi04_sR::synapse0x28b1780() {
   return (neuron0x289f7c0()*-0.200339);
}

double NNfunction_ns_chi04_sR::synapse0x28b17c0() {
   return (neuron0x289fb00()*-0.426653);
}

double NNfunction_ns_chi04_sR::synapse0x28b1800() {
   return (neuron0x289fe40()*-1.18552);
}

double NNfunction_ns_chi04_sR::synapse0x28b1840() {
   return (neuron0x28a0180()*-1.96157);
}

double NNfunction_ns_chi04_sR::synapse0x28b1880() {
   return (neuron0x28a04c0()*-0.585197);
}

double NNfunction_ns_chi04_sR::synapse0x28b18c0() {
   return (neuron0x28a0800()*1.03508);
}

double NNfunction_ns_chi04_sR::synapse0x28b1350() {
   return (neuron0x28a0b40()*2.86024);
}

double NNfunction_ns_chi04_sR::synapse0x28b1390() {
   return (neuron0x28a10a0()*-0.21512);
}

double NNfunction_ns_chi04_sR::synapse0x28b1a10() {
   return (neuron0x28a12c0()*1.35274);
}

double NNfunction_ns_chi04_sR::synapse0x28b1a50() {
   return (neuron0x28a1600()*0.269862);
}

double NNfunction_ns_chi04_sR::synapse0x28b1a90() {
   return (neuron0x28a1940()*-0.260489);
}

double NNfunction_ns_chi04_sR::synapse0x28b1ad0() {
   return (neuron0x28a1c80()*0.404391);
}

double NNfunction_ns_chi04_sR::synapse0x28b1b10() {
   return (neuron0x28a1fc0()*0.614958);
}

double NNfunction_ns_chi04_sR::synapse0x28b1b50() {
   return (neuron0x28a2300()*1.21584);
}

double NNfunction_ns_chi04_sR::synapse0x28b1ed0() {
   return (neuron0x289d740()*-0.0457172);
}

double NNfunction_ns_chi04_sR::synapse0x28b1f10() {
   return (neuron0x289da80()*-0.0347163);
}

double NNfunction_ns_chi04_sR::synapse0x28b1f50() {
   return (neuron0x289ddc0()*0.0432719);
}

double NNfunction_ns_chi04_sR::synapse0x28b1f90() {
   return (neuron0x289e100()*-2.88856);
}

double NNfunction_ns_chi04_sR::synapse0x28b1fd0() {
   return (neuron0x289e440()*-0.00672554);
}

double NNfunction_ns_chi04_sR::synapse0x28b2010() {
   return (neuron0x289e780()*0.000249698);
}

double NNfunction_ns_chi04_sR::synapse0x28b2050() {
   return (neuron0x289eac0()*-0.0280515);
}

double NNfunction_ns_chi04_sR::synapse0x28b2090() {
   return (neuron0x289ee00()*0.004725);
}

double NNfunction_ns_chi04_sR::synapse0x28b20d0() {
   return (neuron0x289f140()*-0.0535505);
}

double NNfunction_ns_chi04_sR::synapse0x28b2110() {
   return (neuron0x289f480()*-0.0232165);
}

double NNfunction_ns_chi04_sR::synapse0x28b2150() {
   return (neuron0x289f7c0()*0.00712812);
}

double NNfunction_ns_chi04_sR::synapse0x28b2190() {
   return (neuron0x289fb00()*-0.000170669);
}

double NNfunction_ns_chi04_sR::synapse0x28b21d0() {
   return (neuron0x289fe40()*-0.00386403);
}

double NNfunction_ns_chi04_sR::synapse0x28b2210() {
   return (neuron0x28a0180()*0.0519156);
}

double NNfunction_ns_chi04_sR::synapse0x28b2250() {
   return (neuron0x28a04c0()*0.0067234);
}

double NNfunction_ns_chi04_sR::synapse0x28b2290() {
   return (neuron0x28a0800()*-0.00113482);
}

double NNfunction_ns_chi04_sR::synapse0x28b1d20() {
   return (neuron0x28a0b40()*0.0396436);
}

double NNfunction_ns_chi04_sR::synapse0x28b1d60() {
   return (neuron0x28a10a0()*0.0553107);
}

double NNfunction_ns_chi04_sR::synapse0x28b23e0() {
   return (neuron0x28a12c0()*0.364544);
}

double NNfunction_ns_chi04_sR::synapse0x28b2420() {
   return (neuron0x28a1600()*-0.00803502);
}

double NNfunction_ns_chi04_sR::synapse0x28b2460() {
   return (neuron0x28a1940()*-0.0121365);
}

double NNfunction_ns_chi04_sR::synapse0x28b24a0() {
   return (neuron0x28a1c80()*-0.0199653);
}

double NNfunction_ns_chi04_sR::synapse0x28b24e0() {
   return (neuron0x28a1fc0()*0.0359523);
}

double NNfunction_ns_chi04_sR::synapse0x28b2520() {
   return (neuron0x28a2300()*-0.0444917);
}

double NNfunction_ns_chi04_sR::synapse0x28b28a0() {
   return (neuron0x289d740()*0.74018);
}

double NNfunction_ns_chi04_sR::synapse0x28b28e0() {
   return (neuron0x289da80()*1.20928);
}

double NNfunction_ns_chi04_sR::synapse0x28b2920() {
   return (neuron0x289ddc0()*1.99759);
}

double NNfunction_ns_chi04_sR::synapse0x28b2960() {
   return (neuron0x289e100()*0.244486);
}

double NNfunction_ns_chi04_sR::synapse0x28b29a0() {
   return (neuron0x289e440()*-0.792339);
}

double NNfunction_ns_chi04_sR::synapse0x28b29e0() {
   return (neuron0x289e780()*2.22097);
}

double NNfunction_ns_chi04_sR::synapse0x28b2a20() {
   return (neuron0x289eac0()*0.0483382);
}

double NNfunction_ns_chi04_sR::synapse0x28b2a60() {
   return (neuron0x289ee00()*1.03716);
}

double NNfunction_ns_chi04_sR::synapse0x28b2aa0() {
   return (neuron0x289f140()*0.590745);
}

double NNfunction_ns_chi04_sR::synapse0x28b2ae0() {
   return (neuron0x289f480()*0.295726);
}

double NNfunction_ns_chi04_sR::synapse0x28b2b20() {
   return (neuron0x289f7c0()*-0.395626);
}

double NNfunction_ns_chi04_sR::synapse0x28b2b60() {
   return (neuron0x289fb00()*-1.69581);
}

double NNfunction_ns_chi04_sR::synapse0x28b2ba0() {
   return (neuron0x289fe40()*-1.17754);
}

double NNfunction_ns_chi04_sR::synapse0x28b2be0() {
   return (neuron0x28a0180()*0.566225);
}

double NNfunction_ns_chi04_sR::synapse0x28b2c20() {
   return (neuron0x28a04c0()*-0.225498);
}

double NNfunction_ns_chi04_sR::synapse0x28b2c60() {
   return (neuron0x28a0800()*0.00656219);
}

double NNfunction_ns_chi04_sR::synapse0x28b26f0() {
   return (neuron0x28a0b40()*-0.0554091);
}

double NNfunction_ns_chi04_sR::synapse0x28b2730() {
   return (neuron0x28a10a0()*0.889531);
}

double NNfunction_ns_chi04_sR::synapse0x28b2db0() {
   return (neuron0x28a12c0()*-0.0116902);
}

double NNfunction_ns_chi04_sR::synapse0x28b2df0() {
   return (neuron0x28a1600()*-0.314024);
}

double NNfunction_ns_chi04_sR::synapse0x28b2e30() {
   return (neuron0x28a1940()*0.696404);
}

double NNfunction_ns_chi04_sR::synapse0x28b2e70() {
   return (neuron0x28a1c80()*0.123341);
}

double NNfunction_ns_chi04_sR::synapse0x28b2eb0() {
   return (neuron0x28a1fc0()*-0.0729735);
}

double NNfunction_ns_chi04_sR::synapse0x28b2ef0() {
   return (neuron0x28a2300()*1.25741);
}

double NNfunction_ns_chi04_sR::synapse0x28c4dc0() {
   return (neuron0x289d740()*0.00723039);
}

double NNfunction_ns_chi04_sR::synapse0x28c4e00() {
   return (neuron0x289da80()*-5.49697);
}

double NNfunction_ns_chi04_sR::synapse0x28c4e40() {
   return (neuron0x289ddc0()*2.21419);
}

double NNfunction_ns_chi04_sR::synapse0x28c4e80() {
   return (neuron0x289e100()*0.0238185);
}

double NNfunction_ns_chi04_sR::synapse0x28c4ec0() {
   return (neuron0x289e440()*0.049317);
}

double NNfunction_ns_chi04_sR::synapse0x28c4f00() {
   return (neuron0x289e780()*0.0506054);
}

double NNfunction_ns_chi04_sR::synapse0x28c4f40() {
   return (neuron0x289eac0()*0.044568);
}

double NNfunction_ns_chi04_sR::synapse0x28c4f80() {
   return (neuron0x289ee00()*-0.00315536);
}

double NNfunction_ns_chi04_sR::synapse0x28c4fc0() {
   return (neuron0x289f140()*0.0210974);
}

double NNfunction_ns_chi04_sR::synapse0x28c5000() {
   return (neuron0x289f480()*0.0366106);
}

double NNfunction_ns_chi04_sR::synapse0x28c5040() {
   return (neuron0x289f7c0()*-0.0334582);
}

double NNfunction_ns_chi04_sR::synapse0x28c5080() {
   return (neuron0x289fb00()*0.0499865);
}

double NNfunction_ns_chi04_sR::synapse0x28c50c0() {
   return (neuron0x289fe40()*0.0432425);
}

double NNfunction_ns_chi04_sR::synapse0x28c5100() {
   return (neuron0x28a0180()*0.0204947);
}

double NNfunction_ns_chi04_sR::synapse0x28c5140() {
   return (neuron0x28a04c0()*-0.00284491);
}

double NNfunction_ns_chi04_sR::synapse0x28c5180() {
   return (neuron0x28a0800()*-0.0611599);
}

double NNfunction_ns_chi04_sR::synapse0x28b2f30() {
   return (neuron0x28a0b40()*-0.00208025);
}

double NNfunction_ns_chi04_sR::synapse0x28b2f70() {
   return (neuron0x28a10a0()*-0.0544119);
}

double NNfunction_ns_chi04_sR::synapse0x28c52d0() {
   return (neuron0x28a12c0()*0.0465663);
}

double NNfunction_ns_chi04_sR::synapse0x28c5310() {
   return (neuron0x28a1600()*0.0107995);
}

double NNfunction_ns_chi04_sR::synapse0x28c5350() {
   return (neuron0x28a1940()*0.0372377);
}

double NNfunction_ns_chi04_sR::synapse0x28c5390() {
   return (neuron0x28a1c80()*0.0952817);
}

double NNfunction_ns_chi04_sR::synapse0x28c53d0() {
   return (neuron0x28a1fc0()*0.00191013);
}

double NNfunction_ns_chi04_sR::synapse0x28c5410() {
   return (neuron0x28a2300()*-0.13784);
}

double NNfunction_ns_chi04_sR::synapse0x28c5790() {
   return (neuron0x289d740()*-0.113892);
}

double NNfunction_ns_chi04_sR::synapse0x28c57d0() {
   return (neuron0x289da80()*-1.27885);
}

double NNfunction_ns_chi04_sR::synapse0x28c5810() {
   return (neuron0x289ddc0()*-1.81667);
}

double NNfunction_ns_chi04_sR::synapse0x28c5850() {
   return (neuron0x289e100()*0.576004);
}

double NNfunction_ns_chi04_sR::synapse0x28c5890() {
   return (neuron0x289e440()*-1.48063);
}

double NNfunction_ns_chi04_sR::synapse0x28c58d0() {
   return (neuron0x289e780()*0.0787629);
}

double NNfunction_ns_chi04_sR::synapse0x28c5910() {
   return (neuron0x289eac0()*-1.31989);
}

double NNfunction_ns_chi04_sR::synapse0x28c5950() {
   return (neuron0x289ee00()*-0.0539786);
}

double NNfunction_ns_chi04_sR::synapse0x28c5990() {
   return (neuron0x289f140()*-0.734577);
}

double NNfunction_ns_chi04_sR::synapse0x28c59d0() {
   return (neuron0x289f480()*-0.855896);
}

double NNfunction_ns_chi04_sR::synapse0x28c5a10() {
   return (neuron0x289f7c0()*0.079487);
}

double NNfunction_ns_chi04_sR::synapse0x28c5a50() {
   return (neuron0x289fb00()*-1.28371);
}

double NNfunction_ns_chi04_sR::synapse0x28c5a90() {
   return (neuron0x289fe40()*0.806724);
}

double NNfunction_ns_chi04_sR::synapse0x28c5ad0() {
   return (neuron0x28a0180()*1.07912);
}

double NNfunction_ns_chi04_sR::synapse0x28c5b10() {
   return (neuron0x28a04c0()*0.357864);
}

double NNfunction_ns_chi04_sR::synapse0x28c5b50() {
   return (neuron0x28a0800()*0.43549);
}

double NNfunction_ns_chi04_sR::synapse0x28c55e0() {
   return (neuron0x28a0b40()*-0.759884);
}

double NNfunction_ns_chi04_sR::synapse0x28c5620() {
   return (neuron0x28a10a0()*-0.0586066);
}

double NNfunction_ns_chi04_sR::synapse0x28c5ca0() {
   return (neuron0x28a12c0()*-1.48834);
}

double NNfunction_ns_chi04_sR::synapse0x28c5ce0() {
   return (neuron0x28a1600()*-0.300921);
}

double NNfunction_ns_chi04_sR::synapse0x28c5d20() {
   return (neuron0x28a1940()*-0.567667);
}

double NNfunction_ns_chi04_sR::synapse0x28c5d60() {
   return (neuron0x28a1c80()*-0.404058);
}

double NNfunction_ns_chi04_sR::synapse0x28c5da0() {
   return (neuron0x28a1fc0()*0.346223);
}

double NNfunction_ns_chi04_sR::synapse0x28c5de0() {
   return (neuron0x28a2300()*-0.0346488);
}

double NNfunction_ns_chi04_sR::synapse0x28c6160() {
   return (neuron0x289d740()*-0.0984563);
}

double NNfunction_ns_chi04_sR::synapse0x28c61a0() {
   return (neuron0x289da80()*5.53431);
}

double NNfunction_ns_chi04_sR::synapse0x28c61e0() {
   return (neuron0x289ddc0()*-0.555111);
}

double NNfunction_ns_chi04_sR::synapse0x28c6220() {
   return (neuron0x289e100()*-0.00914624);
}

double NNfunction_ns_chi04_sR::synapse0x28c6260() {
   return (neuron0x289e440()*0.111945);
}

double NNfunction_ns_chi04_sR::synapse0x28c62a0() {
   return (neuron0x289e780()*-0.0638149);
}

double NNfunction_ns_chi04_sR::synapse0x28c62e0() {
   return (neuron0x289eac0()*0.116974);
}

double NNfunction_ns_chi04_sR::synapse0x28c6320() {
   return (neuron0x289ee00()*-0.158577);
}

double NNfunction_ns_chi04_sR::synapse0x28c6360() {
   return (neuron0x289f140()*0.0327736);
}

double NNfunction_ns_chi04_sR::synapse0x28c63a0() {
   return (neuron0x289f480()*-0.0266657);
}

double NNfunction_ns_chi04_sR::synapse0x28c63e0() {
   return (neuron0x289f7c0()*0.0385876);
}

double NNfunction_ns_chi04_sR::synapse0x28c6420() {
   return (neuron0x289fb00()*-0.0708551);
}

double NNfunction_ns_chi04_sR::synapse0x28c6460() {
   return (neuron0x289fe40()*-0.0782312);
}

double NNfunction_ns_chi04_sR::synapse0x28c64a0() {
   return (neuron0x28a0180()*0.0137864);
}

double NNfunction_ns_chi04_sR::synapse0x28c64e0() {
   return (neuron0x28a04c0()*-0.267777);
}

double NNfunction_ns_chi04_sR::synapse0x28c6520() {
   return (neuron0x28a0800()*0.0661258);
}

double NNfunction_ns_chi04_sR::synapse0x28c5fb0() {
   return (neuron0x28a0b40()*0.0763495);
}

double NNfunction_ns_chi04_sR::synapse0x28c5ff0() {
   return (neuron0x28a10a0()*-0.0537323);
}

double NNfunction_ns_chi04_sR::synapse0x28c6670() {
   return (neuron0x28a12c0()*0.00588577);
}

double NNfunction_ns_chi04_sR::synapse0x28c66b0() {
   return (neuron0x28a1600()*0.0283488);
}

double NNfunction_ns_chi04_sR::synapse0x28c66f0() {
   return (neuron0x28a1940()*0.0912087);
}

double NNfunction_ns_chi04_sR::synapse0x28c6730() {
   return (neuron0x28a1c80()*-0.153266);
}

double NNfunction_ns_chi04_sR::synapse0x28c6770() {
   return (neuron0x28a1fc0()*0.153504);
}

double NNfunction_ns_chi04_sR::synapse0x28c67b0() {
   return (neuron0x28a2300()*-3.10284);
}

double NNfunction_ns_chi04_sR::synapse0x28c6b30() {
   return (neuron0x289d740()*0.0239355);
}

double NNfunction_ns_chi04_sR::synapse0x28c6b70() {
   return (neuron0x289da80()*0.161247);
}

double NNfunction_ns_chi04_sR::synapse0x28c6bb0() {
   return (neuron0x289ddc0()*-0.160323);
}

double NNfunction_ns_chi04_sR::synapse0x28c6bf0() {
   return (neuron0x289e100()*0.340691);
}

double NNfunction_ns_chi04_sR::synapse0x28c6c30() {
   return (neuron0x289e440()*0.0634337);
}

double NNfunction_ns_chi04_sR::synapse0x28c6c70() {
   return (neuron0x289e780()*-0.0125215);
}

double NNfunction_ns_chi04_sR::synapse0x28c6cb0() {
   return (neuron0x289eac0()*0.00093616);
}

double NNfunction_ns_chi04_sR::synapse0x28c6cf0() {
   return (neuron0x289ee00()*-0.0323711);
}

double NNfunction_ns_chi04_sR::synapse0x28c6d30() {
   return (neuron0x289f140()*0.123294);
}

double NNfunction_ns_chi04_sR::synapse0x28c6d70() {
   return (neuron0x289f480()*0.0735635);
}

double NNfunction_ns_chi04_sR::synapse0x28c6db0() {
   return (neuron0x289f7c0()*0.0478811);
}

double NNfunction_ns_chi04_sR::synapse0x28c6df0() {
   return (neuron0x289fb00()*-0.11731);
}

double NNfunction_ns_chi04_sR::synapse0x28c6e30() {
   return (neuron0x289fe40()*0.0199613);
}

double NNfunction_ns_chi04_sR::synapse0x28c6e70() {
   return (neuron0x28a0180()*-0.140045);
}

double NNfunction_ns_chi04_sR::synapse0x28c6eb0() {
   return (neuron0x28a04c0()*-0.0112444);
}

double NNfunction_ns_chi04_sR::synapse0x28c6ef0() {
   return (neuron0x28a0800()*-0.0148762);
}

double NNfunction_ns_chi04_sR::synapse0x28c6980() {
   return (neuron0x28a0b40()*-0.0580968);
}

double NNfunction_ns_chi04_sR::synapse0x28c69c0() {
   return (neuron0x28a10a0()*-0.0270004);
}

double NNfunction_ns_chi04_sR::synapse0x28c7040() {
   return (neuron0x28a12c0()*-2.3647);
}

double NNfunction_ns_chi04_sR::synapse0x28c7080() {
   return (neuron0x28a1600()*-0.0566375);
}

double NNfunction_ns_chi04_sR::synapse0x28c70c0() {
   return (neuron0x28a1940()*0.0674354);
}

double NNfunction_ns_chi04_sR::synapse0x28c7100() {
   return (neuron0x28a1c80()*-0.000800896);
}

double NNfunction_ns_chi04_sR::synapse0x28c7140() {
   return (neuron0x28a1fc0()*-0.019746);
}

double NNfunction_ns_chi04_sR::synapse0x28c7180() {
   return (neuron0x28a2300()*0.0394997);
}

double NNfunction_ns_chi04_sR::synapse0x2667090() {
   return (neuron0x28a2770()*2.09407);
}

double NNfunction_ns_chi04_sR::synapse0x26670d0() {
   return (neuron0x28a30c0()*1.13581);
}

double NNfunction_ns_chi04_sR::synapse0x28a4c30() {
   return (neuron0x28a3ba0()*-1.43151);
}

double NNfunction_ns_chi04_sR::synapse0x28a4c70() {
   return (neuron0x28a3640()*-4.14827);
}

double NNfunction_ns_chi04_sR::synapse0x28a5600() {
   return (neuron0x28a4980()*-0.123898);
}

double NNfunction_ns_chi04_sR::synapse0x28a5640() {
   return (neuron0x28a5350()*-0.362327);
}

double NNfunction_ns_chi04_sR::synapse0x28a63d0() {
   return (neuron0x28a6120()*0.00434844);
}

double NNfunction_ns_chi04_sR::synapse0x28a6410() {
   return (neuron0x28a6af0()*-0.382818);
}

double NNfunction_ns_chi04_sR::synapse0x28a6da0() {
   return (neuron0x28a74c0()*0.146865);
}

double NNfunction_ns_chi04_sR::synapse0x28a6de0() {
   return (neuron0x28a7fa0()*-0.624495);
}

double NNfunction_ns_chi04_sR::synapse0x28a7770() {
   return (neuron0x28a8970()*-0.0340443);
}

double NNfunction_ns_chi04_sR::synapse0x28a77b0() {
   return (neuron0x28a5a50()*0.675877);
}

double NNfunction_ns_chi04_sR::synapse0x28a8250() {
   return (neuron0x28aa520()*0.518642);
}

double NNfunction_ns_chi04_sR::synapse0x28a8290() {
   return (neuron0x28aaef0()*0.319833);
}

double NNfunction_ns_chi04_sR::synapse0x28a8c20() {
   return (neuron0x28ab8c0()*0.841052);
}

double NNfunction_ns_chi04_sR::synapse0x28a8c60() {
   return (neuron0x28ac290()*-0.387436);
}

double NNfunction_ns_chi04_sR::synapse0x28a5d00() {
   return (neuron0x28ae0a0()*-0.100306);
}

double NNfunction_ns_chi04_sR::synapse0x28a5d40() {
   return (neuron0x28ae380()*-0.21528);
}

double NNfunction_ns_chi04_sR::synapse0x28aa7d0() {
   return (neuron0x28aed50()*0.594739);
}

double NNfunction_ns_chi04_sR::synapse0x28aa810() {
   return (neuron0x28af720()*-0.284128);
}

double NNfunction_ns_chi04_sR::synapse0x28ab1a0() {
   return (neuron0x28b00f0()*1.12842);
}

double NNfunction_ns_chi04_sR::synapse0x28ab1e0() {
   return (neuron0x28b0ac0()*-0.369079);
}

double NNfunction_ns_chi04_sR::synapse0x28abb70() {
   return (neuron0x28a9610()*4.18427);
}

double NNfunction_ns_chi04_sR::synapse0x28abbb0() {
   return (neuron0x28a9fe0()*-2.13327);
}

double NNfunction_ns_chi04_sR::synapse0x28ac540() {
   return (neuron0x28b3850()*0.342918);
}

double NNfunction_ns_chi04_sR::synapse0x28ac580() {
   return (neuron0x28b4220()*0.135623);
}

double NNfunction_ns_chi04_sR::synapse0x28a06e0() {
   return (neuron0x28b4bf0()*0.797621);
}

double NNfunction_ns_chi04_sR::synapse0x28a0720() {
   return (neuron0x28b55c0()*-0.669289);
}

double NNfunction_ns_chi04_sR::synapse0x28ae630() {
   return (neuron0x28b5f90()*-0.427661);
}

double NNfunction_ns_chi04_sR::synapse0x28ae670() {
   return (neuron0x28b6960()*-1.07497);
}

double NNfunction_ns_chi04_sR::synapse0x28af000() {
   return (neuron0x28b7330()*-4.04237);
}

double NNfunction_ns_chi04_sR::synapse0x28af040() {
   return (neuron0x28b7d00()*-6.11822);
}

double NNfunction_ns_chi04_sR::synapse0x28af9d0() {
   return (neuron0x28add90()*0.331427);
}

double NNfunction_ns_chi04_sR::synapse0x28afa10() {
   return (neuron0x28ba8e0()*-3.8275);
}

double NNfunction_ns_chi04_sR::synapse0x28b03a0() {
   return (neuron0x28bb2b0()*0.473945);
}

double NNfunction_ns_chi04_sR::synapse0x28b03e0() {
   return (neuron0x28bbc80()*-0.0983568);
}

double NNfunction_ns_chi04_sR::synapse0x28b0d70() {
   return (neuron0x28bc650()*-0.0800782);
}

double NNfunction_ns_chi04_sR::synapse0x28b0db0() {
   return (neuron0x28bd020()*1.46503);
}

double NNfunction_ns_chi04_sR::synapse0x28a98c0() {
   return (neuron0x28bd9f0()*0.190328);
}

double NNfunction_ns_chi04_sR::synapse0x28a9900() {
   return (neuron0x28be3c0()*-3.66408);
}

double NNfunction_ns_chi04_sR::synapse0x28b3170() {
   return (neuron0x28bed90()*0.0578506);
}

double NNfunction_ns_chi04_sR::synapse0x28b31b0() {
   return (neuron0x28bf970()*0.0390813);
}

double NNfunction_ns_chi04_sR::synapse0x28b3b00() {
   return (neuron0x28c0340()*-1.43115);
}

double NNfunction_ns_chi04_sR::synapse0x28b3b40() {
   return (neuron0x28b11c0()*0.135472);
}

double NNfunction_ns_chi04_sR::synapse0x28b44d0() {
   return (neuron0x28b1b90()*0.582628);
}

double NNfunction_ns_chi04_sR::synapse0x28b4510() {
   return (neuron0x28b2560()*-0.488769);
}

double NNfunction_ns_chi04_sR::synapse0x28b4ea0() {
   return (neuron0x28c4ba0()*-6.01697);
}

double NNfunction_ns_chi04_sR::synapse0x28b4ee0() {
   return (neuron0x28c5450()*-0.252736);
}

double NNfunction_ns_chi04_sR::synapse0x28b5870() {
   return (neuron0x28c5e20()*3.04458);
}

double NNfunction_ns_chi04_sR::synapse0x28b58b0() {
   return (neuron0x28c67f0()*0.0070663);
}

double NNfunction_ns_chi04_sR::synapse0x28b7fb0() {
   return (neuron0x28a2770()*2.41231);
}

double NNfunction_ns_chi04_sR::synapse0x28b7ff0() {
   return (neuron0x28a30c0()*-2.80901);
}

double NNfunction_ns_chi04_sR::synapse0x28ad570() {
   return (neuron0x28a3ba0()*2.62794);
}

double NNfunction_ns_chi04_sR::synapse0x28ad5b0() {
   return (neuron0x28a3640()*-3.44954);
}

double NNfunction_ns_chi04_sR::synapse0x28bab90() {
   return (neuron0x28a4980()*1.56751);
}

double NNfunction_ns_chi04_sR::synapse0x28babd0() {
   return (neuron0x28a5350()*-1.85256);
}

double NNfunction_ns_chi04_sR::synapse0x28bb560() {
   return (neuron0x28a6120()*2.55918);
}

double NNfunction_ns_chi04_sR::synapse0x28bb5a0() {
   return (neuron0x28a6af0()*1.93239);
}

double NNfunction_ns_chi04_sR::synapse0x28bbf30() {
   return (neuron0x28a74c0()*0.541085);
}

double NNfunction_ns_chi04_sR::synapse0x28bbf70() {
   return (neuron0x28a7fa0()*2.03804);
}

double NNfunction_ns_chi04_sR::synapse0x28bc900() {
   return (neuron0x28a8970()*-4.80141);
}

double NNfunction_ns_chi04_sR::synapse0x28bc940() {
   return (neuron0x28a5a50()*-2.05811);
}

double NNfunction_ns_chi04_sR::synapse0x28bd2d0() {
   return (neuron0x28aa520()*-1.04131);
}

double NNfunction_ns_chi04_sR::synapse0x28bd310() {
   return (neuron0x28aaef0()*-1.88515);
}

double NNfunction_ns_chi04_sR::synapse0x28bdca0() {
   return (neuron0x28ab8c0()*-0.326106);
}

double NNfunction_ns_chi04_sR::synapse0x28bdce0() {
   return (neuron0x28ac290()*2.35823);
}

double NNfunction_ns_chi04_sR::synapse0x28be670() {
   return (neuron0x28ae0a0()*1.90776);
}

double NNfunction_ns_chi04_sR::synapse0x28be6b0() {
   return (neuron0x28ae380()*-1.02642);
}

double NNfunction_ns_chi04_sR::synapse0x28bf040() {
   return (neuron0x28aed50()*-1.83356);
}

double NNfunction_ns_chi04_sR::synapse0x28bf080() {
   return (neuron0x28af720()*-1.86546);
}

double NNfunction_ns_chi04_sR::synapse0x28bfc20() {
   return (neuron0x28b00f0()*-0.70133);
}

double NNfunction_ns_chi04_sR::synapse0x28bfc60() {
   return (neuron0x28b0ac0()*1.92082);
}

double NNfunction_ns_chi04_sR::synapse0x28c05f0() {
   return (neuron0x28a9610()*-2.06541);
}

double NNfunction_ns_chi04_sR::synapse0x28c0630() {
   return (neuron0x28a9fe0()*1.71079);
}

double NNfunction_ns_chi04_sR::synapse0x28b1470() {
   return (neuron0x28b3850()*-1.49453);
}

double NNfunction_ns_chi04_sR::synapse0x28b14b0() {
   return (neuron0x28b4220()*-1.209);
}

double NNfunction_ns_chi04_sR::synapse0x28b1e40() {
   return (neuron0x28b4bf0()*2.82573);
}

double NNfunction_ns_chi04_sR::synapse0x28b1e80() {
   return (neuron0x28b55c0()*1.5782);
}

double NNfunction_ns_chi04_sR::synapse0x28b2810() {
   return (neuron0x28b5f90()*-2.77461);
}

double NNfunction_ns_chi04_sR::synapse0x28b2850() {
   return (neuron0x28b6960()*1.58618);
}

double NNfunction_ns_chi04_sR::synapse0x28c4d30() {
   return (neuron0x28b7330()*3.17626);
}

double NNfunction_ns_chi04_sR::synapse0x28c4d70() {
   return (neuron0x28b7d00()*5.68089);
}

double NNfunction_ns_chi04_sR::synapse0x28c5700() {
   return (neuron0x28add90()*1.2466);
}

double NNfunction_ns_chi04_sR::synapse0x28c5740() {
   return (neuron0x28ba8e0()*0.600133);
}

double NNfunction_ns_chi04_sR::synapse0x28c60d0() {
   return (neuron0x28bb2b0()*1.6236);
}

double NNfunction_ns_chi04_sR::synapse0x28c6110() {
   return (neuron0x28bbc80()*-1.11035);
}

double NNfunction_ns_chi04_sR::synapse0x28c6aa0() {
   return (neuron0x28bc650()*-1.97565);
}

double NNfunction_ns_chi04_sR::synapse0x28c6ae0() {
   return (neuron0x28bd020()*-2.53133);
}

double NNfunction_ns_chi04_sR::synapse0x28a2990() {
   return (neuron0x28bd9f0()*2.41788);
}

double NNfunction_ns_chi04_sR::synapse0x28a29d0() {
   return (neuron0x28be3c0()*3.10697);
}

double NNfunction_ns_chi04_sR::synapse0x28b6240() {
   return (neuron0x28bed90()*2.11091);
}

double NNfunction_ns_chi04_sR::synapse0x28b6280() {
   return (neuron0x28bf970()*3.46441);
}

double NNfunction_ns_chi04_sR::synapse0x28c71c0() {
   return (neuron0x28c0340()*-4.90757);
}

double NNfunction_ns_chi04_sR::synapse0x28c7200() {
   return (neuron0x28b11c0()*-1.42868);
}

double NNfunction_ns_chi04_sR::synapse0x28c7240() {
   return (neuron0x28b1b90()*5.35727);
}

double NNfunction_ns_chi04_sR::synapse0x28c7280() {
   return (neuron0x28b2560()*0.670309);
}

double NNfunction_ns_chi04_sR::synapse0x28ce130() {
   return (neuron0x28c4ba0()*1.26621);
}

double NNfunction_ns_chi04_sR::synapse0x28ce170() {
   return (neuron0x28c5450()*2.14458);
}

double NNfunction_ns_chi04_sR::synapse0x28ce1b0() {
   return (neuron0x28c5e20()*1.23629);
}

double NNfunction_ns_chi04_sR::synapse0x28ce1f0() {
   return (neuron0x28c67f0()*1.00481);
}

double NNfunction_ns_chi04_sR::synapse0x28ce570() {
   return (neuron0x28a2770()*-0.0251522);
}

double NNfunction_ns_chi04_sR::synapse0x28ce5b0() {
   return (neuron0x28a30c0()*-0.0397022);
}

double NNfunction_ns_chi04_sR::synapse0x28ce5f0() {
   return (neuron0x28a3ba0()*0.0126428);
}

double NNfunction_ns_chi04_sR::synapse0x28ce630() {
   return (neuron0x28a3640()*0.0533384);
}

double NNfunction_ns_chi04_sR::synapse0x28ce670() {
   return (neuron0x28a4980()*-0.00368801);
}

double NNfunction_ns_chi04_sR::synapse0x28ce6b0() {
   return (neuron0x28a5350()*0.0247879);
}

double NNfunction_ns_chi04_sR::synapse0x28ce6f0() {
   return (neuron0x28a6120()*0.00372262);
}

double NNfunction_ns_chi04_sR::synapse0x28ce730() {
   return (neuron0x28a6af0()*0.00728557);
}

double NNfunction_ns_chi04_sR::synapse0x28ce770() {
   return (neuron0x28a74c0()*0.0117081);
}

double NNfunction_ns_chi04_sR::synapse0x28ce7b0() {
   return (neuron0x28a7fa0()*0.00928031);
}

double NNfunction_ns_chi04_sR::synapse0x28ce7f0() {
   return (neuron0x28a8970()*-1.54544);
}

double NNfunction_ns_chi04_sR::synapse0x28ce830() {
   return (neuron0x28a5a50()*0.00533316);
}

double NNfunction_ns_chi04_sR::synapse0x28ce870() {
   return (neuron0x28aa520()*0.0150059);
}

double NNfunction_ns_chi04_sR::synapse0x28ce8b0() {
   return (neuron0x28aaef0()*0.00488421);
}

double NNfunction_ns_chi04_sR::synapse0x28ce8f0() {
   return (neuron0x28ab8c0()*0.000724051);
}

double NNfunction_ns_chi04_sR::synapse0x28ce930() {
   return (neuron0x28ac290()*-0.00630322);
}

double NNfunction_ns_chi04_sR::synapse0x28ce3c0() {
   return (neuron0x28ae0a0()*0.000581302);
}

double NNfunction_ns_chi04_sR::synapse0x28ce400() {
   return (neuron0x28ae380()*-0.000627537);
}

double NNfunction_ns_chi04_sR::synapse0x28cea80() {
   return (neuron0x28aed50()*0.00951671);
}

double NNfunction_ns_chi04_sR::synapse0x28ceac0() {
   return (neuron0x28af720()*0.0084477);
}

double NNfunction_ns_chi04_sR::synapse0x28ceb00() {
   return (neuron0x28b00f0()*-0.00785491);
}

double NNfunction_ns_chi04_sR::synapse0x28ceb40() {
   return (neuron0x28b0ac0()*-0.000363619);
}

double NNfunction_ns_chi04_sR::synapse0x28ceb80() {
   return (neuron0x28a9610()*-2.63272);
}

double NNfunction_ns_chi04_sR::synapse0x28cebc0() {
   return (neuron0x28a9fe0()*0.0186151);
}

double NNfunction_ns_chi04_sR::synapse0x28cec00() {
   return (neuron0x28b3850()*0.0123855);
}

double NNfunction_ns_chi04_sR::synapse0x28cec40() {
   return (neuron0x28b4220()*-0.00562587);
}

double NNfunction_ns_chi04_sR::synapse0x28cec80() {
   return (neuron0x28b4bf0()*0.0359313);
}

double NNfunction_ns_chi04_sR::synapse0x28cecc0() {
   return (neuron0x28b55c0()*-0.0140321);
}

double NNfunction_ns_chi04_sR::synapse0x28ced00() {
   return (neuron0x28b5f90()*0.0135836);
}

double NNfunction_ns_chi04_sR::synapse0x28ced40() {
   return (neuron0x28b6960()*0.0144725);
}

double NNfunction_ns_chi04_sR::synapse0x28ced80() {
   return (neuron0x28b7330()*0.508342);
}

double NNfunction_ns_chi04_sR::synapse0x28cedc0() {
   return (neuron0x28b7d00()*2.59006);
}

double NNfunction_ns_chi04_sR::synapse0x28ce970() {
   return (neuron0x28add90()*-0.00255997);
}

double NNfunction_ns_chi04_sR::synapse0x28ce9b0() {
   return (neuron0x28ba8e0()*-0.164025);
}

double NNfunction_ns_chi04_sR::synapse0x28ce9f0() {
   return (neuron0x28bb2b0()*0.0063522);
}

double NNfunction_ns_chi04_sR::synapse0x28cea30() {
   return (neuron0x28bbc80()*0.02019);
}

double NNfunction_ns_chi04_sR::synapse0x28cf010() {
   return (neuron0x28bc650()*0.0127563);
}

double NNfunction_ns_chi04_sR::synapse0x28cf050() {
   return (neuron0x28bd020()*-0.0103025);
}

double NNfunction_ns_chi04_sR::synapse0x28cf090() {
   return (neuron0x28bd9f0()*-0.0160365);
}

double NNfunction_ns_chi04_sR::synapse0x28cf0d0() {
   return (neuron0x28be3c0()*-0.0589939);
}

double NNfunction_ns_chi04_sR::synapse0x28cf110() {
   return (neuron0x28bed90()*0.0108143);
}

double NNfunction_ns_chi04_sR::synapse0x28cf150() {
   return (neuron0x28bf970()*1.11959);
}

double NNfunction_ns_chi04_sR::synapse0x28cf190() {
   return (neuron0x28c0340()*-1.50533);
}

double NNfunction_ns_chi04_sR::synapse0x28cf1d0() {
   return (neuron0x28b11c0()*0.0112108);
}

double NNfunction_ns_chi04_sR::synapse0x28cf210() {
   return (neuron0x28b1b90()*1.86238);
}

double NNfunction_ns_chi04_sR::synapse0x28cf250() {
   return (neuron0x28b2560()*0.010567);
}

double NNfunction_ns_chi04_sR::synapse0x28cf290() {
   return (neuron0x28c4ba0()*0.383624);
}

double NNfunction_ns_chi04_sR::synapse0x28cf2d0() {
   return (neuron0x28c5450()*0.0033288);
}

double NNfunction_ns_chi04_sR::synapse0x28cf310() {
   return (neuron0x28c5e20()*0.119925);
}

double NNfunction_ns_chi04_sR::synapse0x28cf350() {
   return (neuron0x28c67f0()*0.41985);
}

double NNfunction_ns_chi04_sR::synapse0x28cf6d0() {
   return (neuron0x28a2770()*1.2337);
}

double NNfunction_ns_chi04_sR::synapse0x28cf710() {
   return (neuron0x28a30c0()*1.09165);
}

double NNfunction_ns_chi04_sR::synapse0x28cf750() {
   return (neuron0x28a3ba0()*-0.0935877);
}

double NNfunction_ns_chi04_sR::synapse0x28cf790() {
   return (neuron0x28a3640()*0.899755);
}

double NNfunction_ns_chi04_sR::synapse0x28cf7d0() {
   return (neuron0x28a4980()*0.22816);
}

double NNfunction_ns_chi04_sR::synapse0x28cf810() {
   return (neuron0x28a5350()*-0.357981);
}

double NNfunction_ns_chi04_sR::synapse0x28cf850() {
   return (neuron0x28a6120()*0.304406);
}

double NNfunction_ns_chi04_sR::synapse0x28cf890() {
   return (neuron0x28a6af0()*0.181381);
}

double NNfunction_ns_chi04_sR::synapse0x28cf8d0() {
   return (neuron0x28a74c0()*-0.245564);
}

double NNfunction_ns_chi04_sR::synapse0x28cf910() {
   return (neuron0x28a7fa0()*0.0366582);
}

double NNfunction_ns_chi04_sR::synapse0x28cf950() {
   return (neuron0x28a8970()*-0.373024);
}

double NNfunction_ns_chi04_sR::synapse0x28cf990() {
   return (neuron0x28a5a50()*0.544394);
}

double NNfunction_ns_chi04_sR::synapse0x28cf9d0() {
   return (neuron0x28aa520()*0.411355);
}

double NNfunction_ns_chi04_sR::synapse0x28cfa10() {
   return (neuron0x28aaef0()*-0.136278);
}

double NNfunction_ns_chi04_sR::synapse0x28cfa50() {
   return (neuron0x28ab8c0()*0.385374);
}

double NNfunction_ns_chi04_sR::synapse0x28cfa90() {
   return (neuron0x28ac290()*0.112037);
}

double NNfunction_ns_chi04_sR::synapse0x28cf520() {
   return (neuron0x28ae0a0()*0.162424);
}

double NNfunction_ns_chi04_sR::synapse0x28cf560() {
   return (neuron0x28ae380()*-0.0800987);
}

double NNfunction_ns_chi04_sR::synapse0x28cfbe0() {
   return (neuron0x28aed50()*0.0676424);
}

double NNfunction_ns_chi04_sR::synapse0x28cfc20() {
   return (neuron0x28af720()*-0.260294);
}

double NNfunction_ns_chi04_sR::synapse0x28cfc60() {
   return (neuron0x28b00f0()*0.418261);
}

double NNfunction_ns_chi04_sR::synapse0x28cfca0() {
   return (neuron0x28b0ac0()*0.312575);
}

double NNfunction_ns_chi04_sR::synapse0x28cfce0() {
   return (neuron0x28a9610()*-4.85527);
}

double NNfunction_ns_chi04_sR::synapse0x28cfd20() {
   return (neuron0x28a9fe0()*-1.3854);
}

double NNfunction_ns_chi04_sR::synapse0x28cfd60() {
   return (neuron0x28b3850()*0.0150055);
}

double NNfunction_ns_chi04_sR::synapse0x28cfda0() {
   return (neuron0x28b4220()*0.0360586);
}

double NNfunction_ns_chi04_sR::synapse0x28cfde0() {
   return (neuron0x28b4bf0()*3.95907);
}

double NNfunction_ns_chi04_sR::synapse0x28cfe20() {
   return (neuron0x28b55c0()*0.0793139);
}

double NNfunction_ns_chi04_sR::synapse0x28cfe60() {
   return (neuron0x28b5f90()*-0.537148);
}

double NNfunction_ns_chi04_sR::synapse0x28cfea0() {
   return (neuron0x28b6960()*-0.18009);
}

double NNfunction_ns_chi04_sR::synapse0x28cfee0() {
   return (neuron0x28b7330()*5.58735);
}

double NNfunction_ns_chi04_sR::synapse0x28cff20() {
   return (neuron0x28b7d00()*9.20441);
}

double NNfunction_ns_chi04_sR::synapse0x28cfad0() {
   return (neuron0x28add90()*0.187653);
}

double NNfunction_ns_chi04_sR::synapse0x28cfb10() {
   return (neuron0x28ba8e0()*-9.42153);
}

double NNfunction_ns_chi04_sR::synapse0x28cfb50() {
   return (neuron0x28bb2b0()*0.457986);
}

double NNfunction_ns_chi04_sR::synapse0x28cfb90() {
   return (neuron0x28bbc80()*0.35038);
}

double NNfunction_ns_chi04_sR::synapse0x28d0170() {
   return (neuron0x28bc650()*-0.0921266);
}

double NNfunction_ns_chi04_sR::synapse0x28d01b0() {
   return (neuron0x28bd020()*4.55667);
}

double NNfunction_ns_chi04_sR::synapse0x28d01f0() {
   return (neuron0x28bd9f0()*0.165901);
}

double NNfunction_ns_chi04_sR::synapse0x28d0230() {
   return (neuron0x28be3c0()*-5.94154);
}

double NNfunction_ns_chi04_sR::synapse0x28d0270() {
   return (neuron0x28bed90()*-0.00818172);
}

double NNfunction_ns_chi04_sR::synapse0x28d02b0() {
   return (neuron0x28bf970()*0.234829);
}

double NNfunction_ns_chi04_sR::synapse0x28d02f0() {
   return (neuron0x28c0340()*0.956395);
}

double NNfunction_ns_chi04_sR::synapse0x28d0330() {
   return (neuron0x28b11c0()*0.0866197);
}

double NNfunction_ns_chi04_sR::synapse0x28d0370() {
   return (neuron0x28b1b90()*0.962803);
}

double NNfunction_ns_chi04_sR::synapse0x28d03b0() {
   return (neuron0x28b2560()*-0.333938);
}

double NNfunction_ns_chi04_sR::synapse0x28d03f0() {
   return (neuron0x28c4ba0()*-4.55505);
}

double NNfunction_ns_chi04_sR::synapse0x28d0430() {
   return (neuron0x28c5450()*0.354341);
}

double NNfunction_ns_chi04_sR::synapse0x28d0470() {
   return (neuron0x28c5e20()*3.9727);
}

double NNfunction_ns_chi04_sR::synapse0x28d04b0() {
   return (neuron0x28c67f0()*0.495748);
}

double NNfunction_ns_chi04_sR::synapse0x28d0830() {
   return (neuron0x28a2770()*0.938856);
}

double NNfunction_ns_chi04_sR::synapse0x28d0870() {
   return (neuron0x28a30c0()*0.106891);
}

double NNfunction_ns_chi04_sR::synapse0x28d08b0() {
   return (neuron0x28a3ba0()*0.507452);
}

double NNfunction_ns_chi04_sR::synapse0x28d08f0() {
   return (neuron0x28a3640()*0.364322);
}

double NNfunction_ns_chi04_sR::synapse0x28d0930() {
   return (neuron0x28a4980()*0.964708);
}

double NNfunction_ns_chi04_sR::synapse0x28d0970() {
   return (neuron0x28a5350()*-0.438948);
}

double NNfunction_ns_chi04_sR::synapse0x28d09b0() {
   return (neuron0x28a6120()*0.761799);
}

double NNfunction_ns_chi04_sR::synapse0x28d09f0() {
   return (neuron0x28a6af0()*-0.291259);
}

double NNfunction_ns_chi04_sR::synapse0x28d0a30() {
   return (neuron0x28a74c0()*0.969718);
}

double NNfunction_ns_chi04_sR::synapse0x28d0a70() {
   return (neuron0x28a7fa0()*1.04326);
}

double NNfunction_ns_chi04_sR::synapse0x28d0ab0() {
   return (neuron0x28a8970()*-0.221323);
}

double NNfunction_ns_chi04_sR::synapse0x28d0af0() {
   return (neuron0x28a5a50()*0.517581);
}

double NNfunction_ns_chi04_sR::synapse0x28d0b30() {
   return (neuron0x28aa520()*-0.460838);
}

double NNfunction_ns_chi04_sR::synapse0x28d0b70() {
   return (neuron0x28aaef0()*0.759586);
}

double NNfunction_ns_chi04_sR::synapse0x28d0bb0() {
   return (neuron0x28ab8c0()*0.346647);
}

double NNfunction_ns_chi04_sR::synapse0x28d0bf0() {
   return (neuron0x28ac290()*0.50919);
}

double NNfunction_ns_chi04_sR::synapse0x28d0680() {
   return (neuron0x28ae0a0()*0.0437999);
}

double NNfunction_ns_chi04_sR::synapse0x28d06c0() {
   return (neuron0x28ae380()*-0.123863);
}

double NNfunction_ns_chi04_sR::synapse0x28d0d40() {
   return (neuron0x28aed50()*0.233667);
}

double NNfunction_ns_chi04_sR::synapse0x28d0d80() {
   return (neuron0x28af720()*0.0610456);
}

double NNfunction_ns_chi04_sR::synapse0x28d0dc0() {
   return (neuron0x28b00f0()*0.375891);
}

double NNfunction_ns_chi04_sR::synapse0x28d0e00() {
   return (neuron0x28b0ac0()*-0.403007);
}

double NNfunction_ns_chi04_sR::synapse0x28d0e40() {
   return (neuron0x28a9610()*0.207051);
}

double NNfunction_ns_chi04_sR::synapse0x28d0e80() {
   return (neuron0x28a9fe0()*0.379686);
}

double NNfunction_ns_chi04_sR::synapse0x28d0ec0() {
   return (neuron0x28b3850()*0.13325);
}

double NNfunction_ns_chi04_sR::synapse0x28d0f00() {
   return (neuron0x28b4220()*0.32093);
}

double NNfunction_ns_chi04_sR::synapse0x28d0f40() {
   return (neuron0x28b4bf0()*-0.0958551);
}

double NNfunction_ns_chi04_sR::synapse0x28d0f80() {
   return (neuron0x28b55c0()*-0.806775);
}

double NNfunction_ns_chi04_sR::synapse0x28d0fc0() {
   return (neuron0x28b5f90()*0.676998);
}

double NNfunction_ns_chi04_sR::synapse0x28d1000() {
   return (neuron0x28b6960()*0.0422278);
}

double NNfunction_ns_chi04_sR::synapse0x28d1040() {
   return (neuron0x28b7330()*0.0685148);
}

double NNfunction_ns_chi04_sR::synapse0x28d1080() {
   return (neuron0x28b7d00()*0.138271);
}

double NNfunction_ns_chi04_sR::synapse0x28d0c30() {
   return (neuron0x28add90()*-0.694526);
}

double NNfunction_ns_chi04_sR::synapse0x28d0c70() {
   return (neuron0x28ba8e0()*0.358775);
}

double NNfunction_ns_chi04_sR::synapse0x28d0cb0() {
   return (neuron0x28bb2b0()*0.624016);
}

double NNfunction_ns_chi04_sR::synapse0x28d0cf0() {
   return (neuron0x28bbc80()*0.267824);
}

double NNfunction_ns_chi04_sR::synapse0x28d12d0() {
   return (neuron0x28bc650()*0.125995);
}

double NNfunction_ns_chi04_sR::synapse0x28d1310() {
   return (neuron0x28bd020()*0.361544);
}

double NNfunction_ns_chi04_sR::synapse0x28d1350() {
   return (neuron0x28bd9f0()*0.385889);
}

double NNfunction_ns_chi04_sR::synapse0x28d1390() {
   return (neuron0x28be3c0()*0.0963285);
}

double NNfunction_ns_chi04_sR::synapse0x28d13d0() {
   return (neuron0x28bed90()*-0.148865);
}

double NNfunction_ns_chi04_sR::synapse0x28d1410() {
   return (neuron0x28bf970()*0.437609);
}

double NNfunction_ns_chi04_sR::synapse0x28d1450() {
   return (neuron0x28c0340()*0.639897);
}

double NNfunction_ns_chi04_sR::synapse0x28d1490() {
   return (neuron0x28b11c0()*0.657201);
}

double NNfunction_ns_chi04_sR::synapse0x28d14d0() {
   return (neuron0x28b1b90()*0.692748);
}

double NNfunction_ns_chi04_sR::synapse0x28d1510() {
   return (neuron0x28b2560()*-0.365195);
}

double NNfunction_ns_chi04_sR::synapse0x28d1550() {
   return (neuron0x28c4ba0()*0.056195);
}

double NNfunction_ns_chi04_sR::synapse0x28d1590() {
   return (neuron0x28c5450()*0.695611);
}

double NNfunction_ns_chi04_sR::synapse0x28d15d0() {
   return (neuron0x28c5e20()*0.439154);
}

double NNfunction_ns_chi04_sR::synapse0x28d1610() {
   return (neuron0x28c67f0()*-0.0744309);
}

double NNfunction_ns_chi04_sR::synapse0x28d1870() {
   return (neuron0x28cd9f0()*-3.2534);
}

double NNfunction_ns_chi04_sR::synapse0x28d18b0() {
   return (neuron0x28cdd90()*-6.10707);
}

double NNfunction_ns_chi04_sR::synapse0x28d18f0() {
   return (neuron0x28ce230()*-7.90125);
}

double NNfunction_ns_chi04_sR::synapse0x28d1930() {
   return (neuron0x28cf390()*2.78078);
}

double NNfunction_ns_chi04_sR::synapse0x28d1970() {
   return (neuron0x28d04f0()*3.51845);
}

