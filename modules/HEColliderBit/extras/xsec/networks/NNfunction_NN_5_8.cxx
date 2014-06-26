#include "NNfunction_NN_5_8.h"
#include <cmath>

double NNfunction_NN_5_8::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4257)/15.1856;
   input1 = (in1 - -9.20489)/1192.85;
   input2 = (in2 - 243.557)/207.456;
   input3 = (in3 - -22.5254)/841.913;
   input4 = (in4 - 1067.65)/925.143;
   input5 = (in5 - 918.206)/950.875;
   input6 = (in6 - 926.664)/949.998;
   input7 = (in7 - 942.246)/930.62;
   input8 = (in8 - 934.459)/977.544;
   input9 = (in9 - 918.714)/964.356;
   input10 = (in10 - 972.966)/956.075;
   input11 = (in11 - 646.141)/834.72;
   input12 = (in12 - 732.293)/873.278;
   input13 = (in13 - 502.38)/521.725;
   input14 = (in14 - 704.028)/801.438;
   input15 = (in15 - 706.467)/803.908;
   input16 = (in16 - 524.673)/561.043;
   input17 = (in17 - 762.699)/904.219;
   input18 = (in18 - 764.912)/909.009;
   input19 = (in19 - 774.92)/865.639;
   input20 = (in20 - -6.25008)/487.738;
   input21 = (in21 - -6.4822)/1136.21;
   input22 = (in22 - 1.96708)/1193.78;
   input23 = (in23 - -41.211)/250.505;
   switch(index) {
     case 0:
         return neuron0x33259b0();
     default:
         return 0.;
   }
}

double NNfunction_NN_5_8::Value(int index, double* input) {
   input0 = (input[0] - 23.4257)/15.1856;
   input1 = (input[1] - -9.20489)/1192.85;
   input2 = (input[2] - 243.557)/207.456;
   input3 = (input[3] - -22.5254)/841.913;
   input4 = (input[4] - 1067.65)/925.143;
   input5 = (input[5] - 918.206)/950.875;
   input6 = (input[6] - 926.664)/949.998;
   input7 = (input[7] - 942.246)/930.62;
   input8 = (input[8] - 934.459)/977.544;
   input9 = (input[9] - 918.714)/964.356;
   input10 = (input[10] - 972.966)/956.075;
   input11 = (input[11] - 646.141)/834.72;
   input12 = (input[12] - 732.293)/873.278;
   input13 = (input[13] - 502.38)/521.725;
   input14 = (input[14] - 704.028)/801.438;
   input15 = (input[15] - 706.467)/803.908;
   input16 = (input[16] - 524.673)/561.043;
   input17 = (input[17] - 762.699)/904.219;
   input18 = (input[18] - 764.912)/909.009;
   input19 = (input[19] - 774.92)/865.639;
   input20 = (input[20] - -6.25008)/487.738;
   input21 = (input[21] - -6.4822)/1136.21;
   input22 = (input[22] - 1.96708)/1193.78;
   input23 = (input[23] - -41.211)/250.505;
   switch(index) {
     case 0:
         return neuron0x33259b0();
     default:
         return 0.;
   }
}

double NNfunction_NN_5_8::neuron0x32f1a70() {
   return input0;
}

double NNfunction_NN_5_8::neuron0x32f1db0() {
   return input1;
}

double NNfunction_NN_5_8::neuron0x32f20f0() {
   return input2;
}

double NNfunction_NN_5_8::neuron0x32f2430() {
   return input3;
}

double NNfunction_NN_5_8::neuron0x32f2770() {
   return input4;
}

double NNfunction_NN_5_8::neuron0x32f2ab0() {
   return input5;
}

double NNfunction_NN_5_8::neuron0x32f2df0() {
   return input6;
}

double NNfunction_NN_5_8::neuron0x32f3130() {
   return input7;
}

double NNfunction_NN_5_8::neuron0x32f3470() {
   return input8;
}

double NNfunction_NN_5_8::neuron0x32f37b0() {
   return input9;
}

double NNfunction_NN_5_8::neuron0x32f3af0() {
   return input10;
}

double NNfunction_NN_5_8::neuron0x32f3e30() {
   return input11;
}

double NNfunction_NN_5_8::neuron0x32f4170() {
   return input12;
}

double NNfunction_NN_5_8::neuron0x32f44b0() {
   return input13;
}

double NNfunction_NN_5_8::neuron0x32f47f0() {
   return input14;
}

double NNfunction_NN_5_8::neuron0x32f4b30() {
   return input15;
}

double NNfunction_NN_5_8::neuron0x32f4e70() {
   return input16;
}

double NNfunction_NN_5_8::neuron0x32f53d0() {
   return input17;
}

double NNfunction_NN_5_8::neuron0x32f55f0() {
   return input18;
}

double NNfunction_NN_5_8::neuron0x32f5930() {
   return input19;
}

double NNfunction_NN_5_8::neuron0x32f5c70() {
   return input20;
}

double NNfunction_NN_5_8::neuron0x32f5fb0() {
   return input21;
}

double NNfunction_NN_5_8::neuron0x32f62f0() {
   return input22;
}

double NNfunction_NN_5_8::neuron0x32f6630() {
   return input23;
}

double NNfunction_NN_5_8::input0x32f6ad0() {
   double input = -2.78485;
   input += synapse0x30b18e0();
   input += synapse0x32f1930();
   input += synapse0x32f1970();
   input += synapse0x32f6d80();
   input += synapse0x32f6dc0();
   input += synapse0x32f6e00();
   input += synapse0x32f6e40();
   input += synapse0x32f6e80();
   input += synapse0x32f6ec0();
   input += synapse0x32f6f00();
   input += synapse0x32f6f40();
   input += synapse0x32f6f80();
   input += synapse0x32f6fc0();
   input += synapse0x32f7000();
   input += synapse0x32f7040();
   input += synapse0x32f7080();
   input += synapse0x32f18a0();
   input += synapse0x32f18e0();
   input += synapse0x30a3140();
   input += synapse0x30a3180();
   input += synapse0x32f72e0();
   input += synapse0x32f7320();
   input += synapse0x32f7360();
   input += synapse0x32f73a0();
   return input;
}

double NNfunction_NN_5_8::neuron0x32f6ad0() {
   double input = input0x32f6ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x32f73e0() {
   double input = 1.52541;
   input += synapse0x32f7720();
   input += synapse0x32f7760();
   input += synapse0x32f77a0();
   input += synapse0x32f77e0();
   input += synapse0x32f7820();
   input += synapse0x32f7860();
   input += synapse0x32f78a0();
   input += synapse0x32f78e0();
   input += synapse0x32f7920();
   input += synapse0x32f71d0();
   input += synapse0x32f7210();
   input += synapse0x32f7250();
   input += synapse0x32f7290();
   input += synapse0x32f7b70();
   input += synapse0x32f7bb0();
   input += synapse0x32f7bf0();
   input += synapse0x32f7570();
   input += synapse0x32f75b0();
   input += synapse0x32f7d40();
   input += synapse0x32f7d80();
   input += synapse0x32f7dc0();
   input += synapse0x32f7e00();
   input += synapse0x32f7e40();
   input += synapse0x32f7e80();
   return input;
}

double NNfunction_NN_5_8::neuron0x32f73e0() {
   double input = input0x32f73e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x32f7ec0() {
   double input = -0.213054;
   input += synapse0x32f8200();
   input += synapse0x32f8240();
   input += synapse0x32f8280();
   input += synapse0x32f82c0();
   input += synapse0x32f8300();
   input += synapse0x32f8340();
   input += synapse0x32f8380();
   input += synapse0x32f83c0();
   input += synapse0x32f8400();
   input += synapse0x32f8440();
   input += synapse0x32f8480();
   input += synapse0x32f84c0();
   input += synapse0x32f8500();
   input += synapse0x32f8540();
   input += synapse0x32f8580();
   input += synapse0x32f85c0();
   input += synapse0x32f8050();
   input += synapse0x32f8090();
   input += synapse0x30b0fb0();
   input += synapse0x30b0ff0();
   input += synapse0x32e0b00();
   input += synapse0x32e0b40();
   input += synapse0x32e0b80();
   input += synapse0x32f19b0();
   return input;
}

double NNfunction_NN_5_8::neuron0x32f7ec0() {
   double input = input0x32f7ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x30b1750() {
   double input = -1.42609;
   input += synapse0x32f7b10();
   input += synapse0x32f19f0();
   input += synapse0x32f1a30();
   input += synapse0x32f8710();
   input += synapse0x32f8750();
   input += synapse0x32f8790();
   input += synapse0x32f87d0();
   input += synapse0x32f8810();
   input += synapse0x32f8850();
   input += synapse0x32f8890();
   input += synapse0x32f88d0();
   input += synapse0x32f8910();
   input += synapse0x32f8950();
   input += synapse0x32f8990();
   input += synapse0x32f89d0();
   input += synapse0x32f8a10();
   input += synapse0x32f7960();
   input += synapse0x32f79a0();
   input += synapse0x32f8b60();
   input += synapse0x32f8ba0();
   input += synapse0x32f8be0();
   input += synapse0x32f8c20();
   input += synapse0x32f8c60();
   input += synapse0x32f8ca0();
   return input;
}

double NNfunction_NN_5_8::neuron0x30b1750() {
   double input = input0x30b1750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x32f8ce0() {
   double input = -4.17645;
   input += synapse0x32f9020();
   input += synapse0x32f9060();
   input += synapse0x32f90a0();
   input += synapse0x32f90e0();
   input += synapse0x32f9120();
   input += synapse0x32f9160();
   input += synapse0x32f91a0();
   input += synapse0x32f91e0();
   input += synapse0x32f9220();
   input += synapse0x32f9260();
   input += synapse0x32f92a0();
   input += synapse0x32f92e0();
   input += synapse0x32f9320();
   input += synapse0x32f9360();
   input += synapse0x32f93a0();
   input += synapse0x32f93e0();
   input += synapse0x32f8e70();
   input += synapse0x32f8eb0();
   input += synapse0x32f9530();
   input += synapse0x32f9570();
   input += synapse0x32f95b0();
   input += synapse0x32f95f0();
   input += synapse0x32f9630();
   input += synapse0x32f9670();
   return input;
}

double NNfunction_NN_5_8::neuron0x32f8ce0() {
   double input = input0x32f8ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x32f96b0() {
   double input = -0.753652;
   input += synapse0x32f99f0();
   input += synapse0x32f9a30();
   input += synapse0x32f9a70();
   input += synapse0x32f9ab0();
   input += synapse0x32f9af0();
   input += synapse0x32f9b30();
   input += synapse0x32f9b70();
   input += synapse0x32f9bb0();
   input += synapse0x32f9bf0();
   input += synapse0x30b1340();
   input += synapse0x30b1380();
   input += synapse0x30b13c0();
   input += synapse0x30b1400();
   input += synapse0x30b1440();
   input += synapse0x30b1480();
   input += synapse0x30b14c0();
   input += synapse0x32f9840();
   input += synapse0x32f9880();
   input += synapse0x30b1610();
   input += synapse0x30b1650();
   input += synapse0x30b1690();
   input += synapse0x30b16d0();
   input += synapse0x30b1710();
   input += synapse0x32fa440();
   return input;
}

double NNfunction_NN_5_8::neuron0x32f96b0() {
   double input = input0x32f96b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x32fa480() {
   double input = -1.03135;
   input += synapse0x32fa7c0();
   input += synapse0x32fa800();
   input += synapse0x32fa840();
   input += synapse0x32fa880();
   input += synapse0x32fa8c0();
   input += synapse0x32fa900();
   input += synapse0x32fa940();
   input += synapse0x32fa980();
   input += synapse0x32fa9c0();
   input += synapse0x32faa00();
   input += synapse0x32faa40();
   input += synapse0x32faa80();
   input += synapse0x32faac0();
   input += synapse0x32fab00();
   input += synapse0x32fab40();
   input += synapse0x32fab80();
   input += synapse0x32fa610();
   input += synapse0x32fa650();
   input += synapse0x32facd0();
   input += synapse0x32fad10();
   input += synapse0x32fad50();
   input += synapse0x32fad90();
   input += synapse0x32fadd0();
   input += synapse0x32fae10();
   return input;
}

double NNfunction_NN_5_8::neuron0x32fa480() {
   double input = input0x32fa480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x32fae50() {
   double input = -0.522449;
   input += synapse0x32fb190();
   input += synapse0x32fb1d0();
   input += synapse0x32fb210();
   input += synapse0x32fb250();
   input += synapse0x32fb290();
   input += synapse0x32fb2d0();
   input += synapse0x32fb310();
   input += synapse0x32fb350();
   input += synapse0x32fb390();
   input += synapse0x32fb3d0();
   input += synapse0x32fb410();
   input += synapse0x32fb450();
   input += synapse0x32fb490();
   input += synapse0x32fb4d0();
   input += synapse0x32fb510();
   input += synapse0x32fb550();
   input += synapse0x32fafe0();
   input += synapse0x32fb020();
   input += synapse0x32fb6a0();
   input += synapse0x32fb6e0();
   input += synapse0x32fb720();
   input += synapse0x32fb760();
   input += synapse0x32fb7a0();
   input += synapse0x32fb7e0();
   return input;
}

double NNfunction_NN_5_8::neuron0x32fae50() {
   double input = input0x32fae50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x32fb820() {
   double input = 2.58029;
   input += synapse0x32f52c0();
   input += synapse0x32f5300();
   input += synapse0x32f5340();
   input += synapse0x32f5380();
   input += synapse0x32fbd70();
   input += synapse0x32fbdb0();
   input += synapse0x32fbdf0();
   input += synapse0x32fbe30();
   input += synapse0x32fbe70();
   input += synapse0x32fbeb0();
   input += synapse0x32fbef0();
   input += synapse0x32fbf30();
   input += synapse0x32fbf70();
   input += synapse0x32fbfb0();
   input += synapse0x32fbff0();
   input += synapse0x32fc030();
   input += synapse0x32fb9b0();
   input += synapse0x32fb9f0();
   input += synapse0x32fc180();
   input += synapse0x32fc1c0();
   input += synapse0x32fc200();
   input += synapse0x32fc240();
   input += synapse0x32fc280();
   input += synapse0x32fc2c0();
   return input;
}

double NNfunction_NN_5_8::neuron0x32fb820() {
   double input = input0x32fb820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x32fc300() {
   double input = 0.255114;
   input += synapse0x32fc640();
   input += synapse0x32fc680();
   input += synapse0x32fc6c0();
   input += synapse0x32fc700();
   input += synapse0x32fc740();
   input += synapse0x32fc780();
   input += synapse0x32fc7c0();
   input += synapse0x32fc800();
   input += synapse0x32fc840();
   input += synapse0x32fc880();
   input += synapse0x32fc8c0();
   input += synapse0x32fc900();
   input += synapse0x32fc940();
   input += synapse0x32fc980();
   input += synapse0x32fc9c0();
   input += synapse0x32fca00();
   input += synapse0x32fc490();
   input += synapse0x32fc4d0();
   input += synapse0x32fcb50();
   input += synapse0x32fcb90();
   input += synapse0x32fcbd0();
   input += synapse0x32fcc10();
   input += synapse0x32fcc50();
   input += synapse0x32fcc90();
   return input;
}

double NNfunction_NN_5_8::neuron0x32fc300() {
   double input = input0x32fc300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x32fccd0() {
   double input = 1.22809;
   input += synapse0x32fd010();
   input += synapse0x32fd050();
   input += synapse0x32fd090();
   input += synapse0x32fd0d0();
   input += synapse0x32fd110();
   input += synapse0x32fd150();
   input += synapse0x32fd190();
   input += synapse0x32fd1d0();
   input += synapse0x32fd210();
   input += synapse0x32fd250();
   input += synapse0x32fd290();
   input += synapse0x32fd2d0();
   input += synapse0x32fd310();
   input += synapse0x32fd350();
   input += synapse0x32fd390();
   input += synapse0x32fd3d0();
   input += synapse0x32fce60();
   input += synapse0x32fcea0();
   input += synapse0x32f9c30();
   input += synapse0x32f9c70();
   input += synapse0x32f9cb0();
   input += synapse0x32f9cf0();
   input += synapse0x32f9d30();
   input += synapse0x32f9d70();
   return input;
}

double NNfunction_NN_5_8::neuron0x32fccd0() {
   double input = input0x32fccd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x32f9db0() {
   double input = -1.02122;
   input += synapse0x32fa0f0();
   input += synapse0x32fa130();
   input += synapse0x32fa170();
   input += synapse0x32fa1b0();
   input += synapse0x32fa1f0();
   input += synapse0x32fa230();
   input += synapse0x32fa270();
   input += synapse0x32fa2b0();
   input += synapse0x32fa2f0();
   input += synapse0x32fa330();
   input += synapse0x32fa370();
   input += synapse0x32fa3b0();
   input += synapse0x32fa3f0();
   input += synapse0x32fe530();
   input += synapse0x32fe570();
   input += synapse0x32fe5b0();
   input += synapse0x32f9f40();
   input += synapse0x32f9f80();
   input += synapse0x32fe700();
   input += synapse0x32fe740();
   input += synapse0x32fe780();
   input += synapse0x32fe7c0();
   input += synapse0x32fe800();
   input += synapse0x32fe840();
   return input;
}

double NNfunction_NN_5_8::neuron0x32f9db0() {
   double input = input0x32f9db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x32fe880() {
   double input = -3.87587;
   input += synapse0x32febc0();
   input += synapse0x32fec00();
   input += synapse0x32fec40();
   input += synapse0x32fec80();
   input += synapse0x32fecc0();
   input += synapse0x32fed00();
   input += synapse0x32fed40();
   input += synapse0x32fed80();
   input += synapse0x32fedc0();
   input += synapse0x32fee00();
   input += synapse0x32fee40();
   input += synapse0x32fee80();
   input += synapse0x32feec0();
   input += synapse0x32fef00();
   input += synapse0x32fef40();
   input += synapse0x32fef80();
   input += synapse0x32fea10();
   input += synapse0x32fea50();
   input += synapse0x32ff0d0();
   input += synapse0x32ff110();
   input += synapse0x32ff150();
   input += synapse0x32ff190();
   input += synapse0x32ff1d0();
   input += synapse0x32ff210();
   return input;
}

double NNfunction_NN_5_8::neuron0x32fe880() {
   double input = input0x32fe880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x32ff250() {
   double input = 0.255724;
   input += synapse0x32ff590();
   input += synapse0x32ff5d0();
   input += synapse0x32ff610();
   input += synapse0x32ff650();
   input += synapse0x32ff690();
   input += synapse0x32ff6d0();
   input += synapse0x32ff710();
   input += synapse0x32ff750();
   input += synapse0x32ff790();
   input += synapse0x32ff7d0();
   input += synapse0x32ff810();
   input += synapse0x32ff850();
   input += synapse0x32ff890();
   input += synapse0x32ff8d0();
   input += synapse0x32ff910();
   input += synapse0x32ff950();
   input += synapse0x32ff3e0();
   input += synapse0x32ff420();
   input += synapse0x32ffaa0();
   input += synapse0x32ffae0();
   input += synapse0x32ffb20();
   input += synapse0x32ffb60();
   input += synapse0x32ffba0();
   input += synapse0x32ffbe0();
   return input;
}

double NNfunction_NN_5_8::neuron0x32ff250() {
   double input = input0x32ff250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x32ffc20() {
   double input = -2.22798;
   input += synapse0x32fff60();
   input += synapse0x32fffa0();
   input += synapse0x32fffe0();
   input += synapse0x3300020();
   input += synapse0x3300060();
   input += synapse0x33000a0();
   input += synapse0x33000e0();
   input += synapse0x3300120();
   input += synapse0x3300160();
   input += synapse0x33001a0();
   input += synapse0x33001e0();
   input += synapse0x3300220();
   input += synapse0x3300260();
   input += synapse0x33002a0();
   input += synapse0x33002e0();
   input += synapse0x3300320();
   input += synapse0x32ffdb0();
   input += synapse0x32ffdf0();
   input += synapse0x3300470();
   input += synapse0x33004b0();
   input += synapse0x33004f0();
   input += synapse0x3300530();
   input += synapse0x3300570();
   input += synapse0x33005b0();
   return input;
}

double NNfunction_NN_5_8::neuron0x32ffc20() {
   double input = input0x32ffc20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x33005f0() {
   double input = 0.875423;
   input += synapse0x3300930();
   input += synapse0x32f1c90();
   input += synapse0x32f1cd0();
   input += synapse0x32f1fd0();
   input += synapse0x32f2010();
   input += synapse0x32f2310();
   input += synapse0x32f2350();
   input += synapse0x32f2650();
   input += synapse0x32f2690();
   input += synapse0x32f2990();
   input += synapse0x32f29d0();
   input += synapse0x32f2cd0();
   input += synapse0x32f2d10();
   input += synapse0x32f3010();
   input += synapse0x32f3050();
   input += synapse0x32f3350();
   input += synapse0x32f3390();
   input += synapse0x32f3690();
   input += synapse0x32f36d0();
   input += synapse0x32f39d0();
   input += synapse0x32f3a10();
   input += synapse0x32f3d10();
   input += synapse0x32f3d50();
   input += synapse0x32f4050();
   return input;
}

double NNfunction_NN_5_8::neuron0x33005f0() {
   double input = input0x33005f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x3302400() {
   double input = 0.832206;
   input += synapse0x32f4090();
   input += synapse0x32f4d50();
   input += synapse0x32f4d90();
   input += synapse0x3300780();
   input += synapse0x33007c0();
   input += synapse0x32f5090();
   input += synapse0x32f50d0();
   input += synapse0x30a3020();
   input += synapse0x30a3060();
   input += synapse0x32f5810();
   input += synapse0x32f5850();
   input += synapse0x32f5b50();
   input += synapse0x32f5b90();
   input += synapse0x32f5e90();
   input += synapse0x32f5ed0();
   input += synapse0x32f61d0();
   input += synapse0x32f6210();
   input += synapse0x32f6510();
   input += synapse0x32f6550();
   input += synapse0x32f6850();
   input += synapse0x32f6890();
   input += synapse0x32f4390();
   input += synapse0x32f43d0();
   input += synapse0x33026a0();
   return input;
}

double NNfunction_NN_5_8::neuron0x3302400() {
   double input = input0x3302400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x33026e0() {
   double input = -0.249439;
   input += synapse0x3302a20();
   input += synapse0x3302a60();
   input += synapse0x3302aa0();
   input += synapse0x3302ae0();
   input += synapse0x3302b20();
   input += synapse0x3302b60();
   input += synapse0x3302ba0();
   input += synapse0x3302be0();
   input += synapse0x3302c20();
   input += synapse0x3302c60();
   input += synapse0x3302ca0();
   input += synapse0x3302ce0();
   input += synapse0x3302d20();
   input += synapse0x3302d60();
   input += synapse0x3302da0();
   input += synapse0x3302de0();
   input += synapse0x3302870();
   input += synapse0x33028b0();
   input += synapse0x3302f30();
   input += synapse0x3302f70();
   input += synapse0x3302fb0();
   input += synapse0x3302ff0();
   input += synapse0x3303030();
   input += synapse0x3303070();
   return input;
}

double NNfunction_NN_5_8::neuron0x33026e0() {
   double input = input0x33026e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x33030b0() {
   double input = -3.15506;
   input += synapse0x33033f0();
   input += synapse0x3303430();
   input += synapse0x3303470();
   input += synapse0x33034b0();
   input += synapse0x33034f0();
   input += synapse0x3303530();
   input += synapse0x3303570();
   input += synapse0x33035b0();
   input += synapse0x33035f0();
   input += synapse0x3303630();
   input += synapse0x3303670();
   input += synapse0x33036b0();
   input += synapse0x33036f0();
   input += synapse0x3303730();
   input += synapse0x3303770();
   input += synapse0x33037b0();
   input += synapse0x3303240();
   input += synapse0x3303280();
   input += synapse0x3303900();
   input += synapse0x3303940();
   input += synapse0x3303980();
   input += synapse0x33039c0();
   input += synapse0x3303a00();
   input += synapse0x3303a40();
   return input;
}

double NNfunction_NN_5_8::neuron0x33030b0() {
   double input = input0x33030b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x3303a80() {
   double input = 0.160365;
   input += synapse0x3303dc0();
   input += synapse0x3303e00();
   input += synapse0x3303e40();
   input += synapse0x3303e80();
   input += synapse0x3303ec0();
   input += synapse0x3303f00();
   input += synapse0x3303f40();
   input += synapse0x3303f80();
   input += synapse0x3303fc0();
   input += synapse0x3304000();
   input += synapse0x3304040();
   input += synapse0x3304080();
   input += synapse0x33040c0();
   input += synapse0x3304100();
   input += synapse0x3304140();
   input += synapse0x3304180();
   input += synapse0x3303c10();
   input += synapse0x3303c50();
   input += synapse0x33042d0();
   input += synapse0x3304310();
   input += synapse0x3304350();
   input += synapse0x3304390();
   input += synapse0x33043d0();
   input += synapse0x3304410();
   return input;
}

double NNfunction_NN_5_8::neuron0x3303a80() {
   double input = input0x3303a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x3304450() {
   double input = -0.193888;
   input += synapse0x3304790();
   input += synapse0x33047d0();
   input += synapse0x3304810();
   input += synapse0x3304850();
   input += synapse0x3304890();
   input += synapse0x33048d0();
   input += synapse0x3304910();
   input += synapse0x3304950();
   input += synapse0x3304990();
   input += synapse0x33049d0();
   input += synapse0x3304a10();
   input += synapse0x3304a50();
   input += synapse0x3304a90();
   input += synapse0x3304ad0();
   input += synapse0x3304b10();
   input += synapse0x3304b50();
   input += synapse0x33045e0();
   input += synapse0x3304620();
   input += synapse0x3304ca0();
   input += synapse0x3304ce0();
   input += synapse0x3304d20();
   input += synapse0x3304d60();
   input += synapse0x3304da0();
   input += synapse0x3304de0();
   return input;
}

double NNfunction_NN_5_8::neuron0x3304450() {
   double input = input0x3304450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x3304e20() {
   double input = 0.312444;
   input += synapse0x3305160();
   input += synapse0x33051a0();
   input += synapse0x33051e0();
   input += synapse0x3305220();
   input += synapse0x3305260();
   input += synapse0x33052a0();
   input += synapse0x33052e0();
   input += synapse0x3305320();
   input += synapse0x3305360();
   input += synapse0x32fd520();
   input += synapse0x32fd560();
   input += synapse0x32fd5a0();
   input += synapse0x32fd5e0();
   input += synapse0x32fd620();
   input += synapse0x32fd660();
   input += synapse0x32fd6a0();
   input += synapse0x3304fb0();
   input += synapse0x3304ff0();
   input += synapse0x32fd7f0();
   input += synapse0x32fd830();
   input += synapse0x32fd870();
   input += synapse0x32fd8b0();
   input += synapse0x32fd8f0();
   input += synapse0x32fd930();
   return input;
}

double NNfunction_NN_5_8::neuron0x3304e20() {
   double input = input0x3304e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x32fd970() {
   double input = 3.31138;
   input += synapse0x32fdcb0();
   input += synapse0x32fdcf0();
   input += synapse0x32fdd30();
   input += synapse0x32fdd70();
   input += synapse0x32fddb0();
   input += synapse0x32fddf0();
   input += synapse0x32fde30();
   input += synapse0x32fde70();
   input += synapse0x32fdeb0();
   input += synapse0x32fdef0();
   input += synapse0x32fdf30();
   input += synapse0x32fdf70();
   input += synapse0x32fdfb0();
   input += synapse0x32fdff0();
   input += synapse0x32fe030();
   input += synapse0x32fe070();
   input += synapse0x32fdb00();
   input += synapse0x32fdb40();
   input += synapse0x32fe1c0();
   input += synapse0x32fe200();
   input += synapse0x32fe240();
   input += synapse0x32fe280();
   input += synapse0x32fe2c0();
   input += synapse0x32fe300();
   return input;
}

double NNfunction_NN_5_8::neuron0x32fd970() {
   double input = input0x32fd970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x32fe340() {
   double input = -3.96136;
   input += synapse0x32fe4d0();
   input += synapse0x3307560();
   input += synapse0x33075a0();
   input += synapse0x33075e0();
   input += synapse0x3307620();
   input += synapse0x3307660();
   input += synapse0x33076a0();
   input += synapse0x33076e0();
   input += synapse0x3307720();
   input += synapse0x3307760();
   input += synapse0x33077a0();
   input += synapse0x33077e0();
   input += synapse0x3307820();
   input += synapse0x3307860();
   input += synapse0x33078a0();
   input += synapse0x33078e0();
   input += synapse0x33073b0();
   input += synapse0x33073f0();
   input += synapse0x3307a30();
   input += synapse0x3307a70();
   input += synapse0x3307ab0();
   input += synapse0x3307af0();
   input += synapse0x3307b30();
   input += synapse0x3307b70();
   return input;
}

double NNfunction_NN_5_8::neuron0x32fe340() {
   double input = input0x32fe340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x3307bb0() {
   double input = -0.481206;
   input += synapse0x3307ef0();
   input += synapse0x3307f30();
   input += synapse0x3307f70();
   input += synapse0x3307fb0();
   input += synapse0x3307ff0();
   input += synapse0x3308030();
   input += synapse0x3308070();
   input += synapse0x33080b0();
   input += synapse0x33080f0();
   input += synapse0x3308130();
   input += synapse0x3308170();
   input += synapse0x33081b0();
   input += synapse0x33081f0();
   input += synapse0x3308230();
   input += synapse0x3308270();
   input += synapse0x33082b0();
   input += synapse0x3307d40();
   input += synapse0x3307d80();
   input += synapse0x3308400();
   input += synapse0x3308440();
   input += synapse0x3308480();
   input += synapse0x33084c0();
   input += synapse0x3308500();
   input += synapse0x3308540();
   return input;
}

double NNfunction_NN_5_8::neuron0x3307bb0() {
   double input = input0x3307bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x3308580() {
   double input = -0.295902;
   input += synapse0x33088c0();
   input += synapse0x3308900();
   input += synapse0x3308940();
   input += synapse0x3308980();
   input += synapse0x33089c0();
   input += synapse0x3308a00();
   input += synapse0x3308a40();
   input += synapse0x3308a80();
   input += synapse0x3308ac0();
   input += synapse0x3308b00();
   input += synapse0x3308b40();
   input += synapse0x3308b80();
   input += synapse0x3308bc0();
   input += synapse0x3308c00();
   input += synapse0x3308c40();
   input += synapse0x3308c80();
   input += synapse0x3308710();
   input += synapse0x3308750();
   input += synapse0x3308dd0();
   input += synapse0x3308e10();
   input += synapse0x3308e50();
   input += synapse0x3308e90();
   input += synapse0x3308ed0();
   input += synapse0x3308f10();
   return input;
}

double NNfunction_NN_5_8::neuron0x3308580() {
   double input = input0x3308580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x3308f50() {
   double input = -0.512413;
   input += synapse0x3309290();
   input += synapse0x33092d0();
   input += synapse0x3309310();
   input += synapse0x3309350();
   input += synapse0x3309390();
   input += synapse0x33093d0();
   input += synapse0x3309410();
   input += synapse0x3309450();
   input += synapse0x3309490();
   input += synapse0x33094d0();
   input += synapse0x3309510();
   input += synapse0x3309550();
   input += synapse0x3309590();
   input += synapse0x33095d0();
   input += synapse0x3309610();
   input += synapse0x3309650();
   input += synapse0x33090e0();
   input += synapse0x3309120();
   input += synapse0x33097a0();
   input += synapse0x33097e0();
   input += synapse0x3309820();
   input += synapse0x3309860();
   input += synapse0x33098a0();
   input += synapse0x33098e0();
   return input;
}

double NNfunction_NN_5_8::neuron0x3308f50() {
   double input = input0x3308f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x3309920() {
   double input = 0.676905;
   input += synapse0x3309c60();
   input += synapse0x3309ca0();
   input += synapse0x3309ce0();
   input += synapse0x3309d20();
   input += synapse0x3309d60();
   input += synapse0x3309da0();
   input += synapse0x3309de0();
   input += synapse0x3309e20();
   input += synapse0x3309e60();
   input += synapse0x3309ea0();
   input += synapse0x3309ee0();
   input += synapse0x3309f20();
   input += synapse0x3309f60();
   input += synapse0x3309fa0();
   input += synapse0x3309fe0();
   input += synapse0x330a020();
   input += synapse0x3309ab0();
   input += synapse0x3309af0();
   input += synapse0x330a170();
   input += synapse0x330a1b0();
   input += synapse0x330a1f0();
   input += synapse0x330a230();
   input += synapse0x330a270();
   input += synapse0x330a2b0();
   return input;
}

double NNfunction_NN_5_8::neuron0x3309920() {
   double input = input0x3309920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x330a2f0() {
   double input = -2.2159;
   input += synapse0x330a630();
   input += synapse0x330a670();
   input += synapse0x330a6b0();
   input += synapse0x330a6f0();
   input += synapse0x330a730();
   input += synapse0x330a770();
   input += synapse0x330a7b0();
   input += synapse0x330a7f0();
   input += synapse0x330a830();
   input += synapse0x330a870();
   input += synapse0x330a8b0();
   input += synapse0x330a8f0();
   input += synapse0x330a930();
   input += synapse0x330a970();
   input += synapse0x330a9b0();
   input += synapse0x330a9f0();
   input += synapse0x330a480();
   input += synapse0x330a4c0();
   input += synapse0x330ab40();
   input += synapse0x330ab80();
   input += synapse0x330abc0();
   input += synapse0x330ac00();
   input += synapse0x330ac40();
   input += synapse0x330ac80();
   return input;
}

double NNfunction_NN_5_8::neuron0x330a2f0() {
   double input = input0x330a2f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x330acc0() {
   double input = 0.00289129;
   input += synapse0x330b000();
   input += synapse0x330b040();
   input += synapse0x330b080();
   input += synapse0x330b0c0();
   input += synapse0x330b100();
   input += synapse0x330b140();
   input += synapse0x330b180();
   input += synapse0x330b1c0();
   input += synapse0x330b200();
   input += synapse0x330b240();
   input += synapse0x330b280();
   input += synapse0x330b2c0();
   input += synapse0x330b300();
   input += synapse0x330b340();
   input += synapse0x330b380();
   input += synapse0x330b3c0();
   input += synapse0x330ae50();
   input += synapse0x330ae90();
   input += synapse0x330b510();
   input += synapse0x330b550();
   input += synapse0x330b590();
   input += synapse0x330b5d0();
   input += synapse0x330b610();
   input += synapse0x330b650();
   return input;
}

double NNfunction_NN_5_8::neuron0x330acc0() {
   double input = input0x330acc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x330b690() {
   double input = -0.174904;
   input += synapse0x330b9d0();
   input += synapse0x330ba10();
   input += synapse0x330ba50();
   input += synapse0x330ba90();
   input += synapse0x330bad0();
   input += synapse0x330bb10();
   input += synapse0x330bb50();
   input += synapse0x330bb90();
   input += synapse0x330bbd0();
   input += synapse0x330bc10();
   input += synapse0x330bc50();
   input += synapse0x330bc90();
   input += synapse0x330bcd0();
   input += synapse0x330bd10();
   input += synapse0x330bd50();
   input += synapse0x330bd90();
   input += synapse0x330b820();
   input += synapse0x330b860();
   input += synapse0x330bee0();
   input += synapse0x330bf20();
   input += synapse0x330bf60();
   input += synapse0x330bfa0();
   input += synapse0x330bfe0();
   input += synapse0x330c020();
   return input;
}

double NNfunction_NN_5_8::neuron0x330b690() {
   double input = input0x330b690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x330c060() {
   double input = 0.0555395;
   input += synapse0x330c3a0();
   input += synapse0x3300970();
   input += synapse0x33009b0();
   input += synapse0x33009f0();
   input += synapse0x3300c40();
   input += synapse0x3300c80();
   input += synapse0x3300cc0();
   input += synapse0x3300f10();
   input += synapse0x3300f50();
   input += synapse0x33011a0();
   input += synapse0x33011e0();
   input += synapse0x3301220();
   input += synapse0x3301470();
   input += synapse0x33014b0();
   input += synapse0x3301700();
   input += synapse0x3301740();
   input += synapse0x330c1f0();
   input += synapse0x330c230();
   input += synapse0x3301890();
   input += synapse0x3301da0();
   input += synapse0x3301de0();
   input += synapse0x3301e20();
   input += synapse0x3302070();
   input += synapse0x33020b0();
   return input;
}

double NNfunction_NN_5_8::neuron0x330c060() {
   double input = input0x330c060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x33020f0() {
   double input = -1.13412;
   input += synapse0x3301960();
   input += synapse0x33019a0();
   input += synapse0x33019e0();
   input += synapse0x3301a20();
   input += synapse0x33023a0();
   input += synapse0x330e6f0();
   input += synapse0x330e730();
   input += synapse0x330e770();
   input += synapse0x330e7b0();
   input += synapse0x330e7f0();
   input += synapse0x330e830();
   input += synapse0x330e870();
   input += synapse0x330e8b0();
   input += synapse0x330e8f0();
   input += synapse0x330e930();
   input += synapse0x330e970();
   input += synapse0x3302280();
   input += synapse0x33022c0();
   input += synapse0x330eac0();
   input += synapse0x330eb00();
   input += synapse0x330eb40();
   input += synapse0x330eb80();
   input += synapse0x330ebc0();
   input += synapse0x330ec00();
   return input;
}

double NNfunction_NN_5_8::neuron0x33020f0() {
   double input = input0x33020f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x330ec40() {
   double input = -0.815231;
   input += synapse0x330ef80();
   input += synapse0x330efc0();
   input += synapse0x330f000();
   input += synapse0x330f040();
   input += synapse0x330f080();
   input += synapse0x330f0c0();
   input += synapse0x330f100();
   input += synapse0x330f140();
   input += synapse0x330f180();
   input += synapse0x330f1c0();
   input += synapse0x330f200();
   input += synapse0x330f240();
   input += synapse0x330f280();
   input += synapse0x330f2c0();
   input += synapse0x330f300();
   input += synapse0x330f340();
   input += synapse0x330edd0();
   input += synapse0x330ee10();
   input += synapse0x330f490();
   input += synapse0x330f4d0();
   input += synapse0x330f510();
   input += synapse0x330f550();
   input += synapse0x330f590();
   input += synapse0x330f5d0();
   return input;
}

double NNfunction_NN_5_8::neuron0x330ec40() {
   double input = input0x330ec40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x330f610() {
   double input = -1.06496;
   input += synapse0x330f950();
   input += synapse0x330f990();
   input += synapse0x330f9d0();
   input += synapse0x330fa10();
   input += synapse0x330fa50();
   input += synapse0x330fa90();
   input += synapse0x330fad0();
   input += synapse0x330fb10();
   input += synapse0x330fb50();
   input += synapse0x330fb90();
   input += synapse0x330fbd0();
   input += synapse0x330fc10();
   input += synapse0x330fc50();
   input += synapse0x330fc90();
   input += synapse0x330fcd0();
   input += synapse0x330fd10();
   input += synapse0x330f7a0();
   input += synapse0x330f7e0();
   input += synapse0x330fe60();
   input += synapse0x330fea0();
   input += synapse0x330fee0();
   input += synapse0x330ff20();
   input += synapse0x330ff60();
   input += synapse0x330ffa0();
   return input;
}

double NNfunction_NN_5_8::neuron0x330f610() {
   double input = input0x330f610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x330ffe0() {
   double input = -2.34117;
   input += synapse0x3310320();
   input += synapse0x3310360();
   input += synapse0x33103a0();
   input += synapse0x33103e0();
   input += synapse0x3310420();
   input += synapse0x3310460();
   input += synapse0x33104a0();
   input += synapse0x33104e0();
   input += synapse0x3310520();
   input += synapse0x3310560();
   input += synapse0x33105a0();
   input += synapse0x33105e0();
   input += synapse0x3310620();
   input += synapse0x3310660();
   input += synapse0x33106a0();
   input += synapse0x33106e0();
   input += synapse0x3310170();
   input += synapse0x33101b0();
   input += synapse0x3310830();
   input += synapse0x3310870();
   input += synapse0x33108b0();
   input += synapse0x33108f0();
   input += synapse0x3310930();
   input += synapse0x3310970();
   return input;
}

double NNfunction_NN_5_8::neuron0x330ffe0() {
   double input = input0x330ffe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x33109b0() {
   double input = 2.16952;
   input += synapse0x3310cf0();
   input += synapse0x3310d30();
   input += synapse0x3310d70();
   input += synapse0x3310db0();
   input += synapse0x3310df0();
   input += synapse0x3310e30();
   input += synapse0x3310e70();
   input += synapse0x3310eb0();
   input += synapse0x3310ef0();
   input += synapse0x3310f30();
   input += synapse0x3310f70();
   input += synapse0x3310fb0();
   input += synapse0x3310ff0();
   input += synapse0x3311030();
   input += synapse0x3311070();
   input += synapse0x33110b0();
   input += synapse0x3310b40();
   input += synapse0x3310b80();
   input += synapse0x3311200();
   input += synapse0x3311240();
   input += synapse0x3311280();
   input += synapse0x33112c0();
   input += synapse0x3311300();
   input += synapse0x3311340();
   return input;
}

double NNfunction_NN_5_8::neuron0x33109b0() {
   double input = input0x33109b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x3311380() {
   double input = -0.59946;
   input += synapse0x33116c0();
   input += synapse0x3311700();
   input += synapse0x3311740();
   input += synapse0x3311780();
   input += synapse0x33117c0();
   input += synapse0x3311800();
   input += synapse0x3311840();
   input += synapse0x3311880();
   input += synapse0x33118c0();
   input += synapse0x3311900();
   input += synapse0x3311940();
   input += synapse0x3311980();
   input += synapse0x33119c0();
   input += synapse0x3311a00();
   input += synapse0x3311a40();
   input += synapse0x3311a80();
   input += synapse0x3311510();
   input += synapse0x3311550();
   input += synapse0x3311bd0();
   input += synapse0x3311c10();
   input += synapse0x3311c50();
   input += synapse0x3311c90();
   input += synapse0x3311cd0();
   input += synapse0x3311d10();
   return input;
}

double NNfunction_NN_5_8::neuron0x3311380() {
   double input = input0x3311380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x3311d50() {
   double input = -2.97864;
   input += synapse0x3312090();
   input += synapse0x33120d0();
   input += synapse0x3312110();
   input += synapse0x3312150();
   input += synapse0x3312190();
   input += synapse0x33121d0();
   input += synapse0x3312210();
   input += synapse0x3312250();
   input += synapse0x3312290();
   input += synapse0x33122d0();
   input += synapse0x3312310();
   input += synapse0x3312350();
   input += synapse0x3312390();
   input += synapse0x33123d0();
   input += synapse0x3312410();
   input += synapse0x3312450();
   input += synapse0x3311ee0();
   input += synapse0x3311f20();
   input += synapse0x33125a0();
   input += synapse0x33125e0();
   input += synapse0x3312620();
   input += synapse0x3312660();
   input += synapse0x33126a0();
   input += synapse0x33126e0();
   return input;
}

double NNfunction_NN_5_8::neuron0x3311d50() {
   double input = input0x3311d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x3312720() {
   double input = -0.684583;
   input += synapse0x3312a60();
   input += synapse0x3312aa0();
   input += synapse0x3312ae0();
   input += synapse0x3312b20();
   input += synapse0x3312b60();
   input += synapse0x3312ba0();
   input += synapse0x3312be0();
   input += synapse0x3312c20();
   input += synapse0x3312c60();
   input += synapse0x3312ca0();
   input += synapse0x3312ce0();
   input += synapse0x3312d20();
   input += synapse0x3312d60();
   input += synapse0x3312da0();
   input += synapse0x3312de0();
   input += synapse0x3312e20();
   input += synapse0x33128b0();
   input += synapse0x33128f0();
   input += synapse0x3312f70();
   input += synapse0x3312fb0();
   input += synapse0x3312ff0();
   input += synapse0x3313030();
   input += synapse0x3313070();
   input += synapse0x33130b0();
   return input;
}

double NNfunction_NN_5_8::neuron0x3312720() {
   double input = input0x3312720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x33130f0() {
   double input = -0.93393;
   input += synapse0x32fbb60();
   input += synapse0x32fbba0();
   input += synapse0x32fbbe0();
   input += synapse0x32fbc20();
   input += synapse0x32fbc60();
   input += synapse0x32fbca0();
   input += synapse0x32fbce0();
   input += synapse0x32fbd20();
   input += synapse0x3313840();
   input += synapse0x3313880();
   input += synapse0x33138c0();
   input += synapse0x3313900();
   input += synapse0x3313940();
   input += synapse0x3313980();
   input += synapse0x33139c0();
   input += synapse0x3313a00();
   input += synapse0x3313280();
   input += synapse0x33132c0();
   input += synapse0x3313b50();
   input += synapse0x3313b90();
   input += synapse0x3313bd0();
   input += synapse0x3313c10();
   input += synapse0x3313c50();
   input += synapse0x3313c90();
   return input;
}

double NNfunction_NN_5_8::neuron0x33130f0() {
   double input = input0x33130f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x3313cd0() {
   double input = -0.975797;
   input += synapse0x3314010();
   input += synapse0x3314050();
   input += synapse0x3314090();
   input += synapse0x33140d0();
   input += synapse0x3314110();
   input += synapse0x3314150();
   input += synapse0x3314190();
   input += synapse0x33141d0();
   input += synapse0x3314210();
   input += synapse0x3314250();
   input += synapse0x3314290();
   input += synapse0x33142d0();
   input += synapse0x3314310();
   input += synapse0x3314350();
   input += synapse0x3314390();
   input += synapse0x33143d0();
   input += synapse0x3313e60();
   input += synapse0x3313ea0();
   input += synapse0x3314520();
   input += synapse0x3314560();
   input += synapse0x33145a0();
   input += synapse0x33145e0();
   input += synapse0x3314620();
   input += synapse0x3314660();
   return input;
}

double NNfunction_NN_5_8::neuron0x3313cd0() {
   double input = input0x3313cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x33146a0() {
   double input = -0.226375;
   input += synapse0x33149e0();
   input += synapse0x3314a20();
   input += synapse0x3314a60();
   input += synapse0x3314aa0();
   input += synapse0x3314ae0();
   input += synapse0x3314b20();
   input += synapse0x3314b60();
   input += synapse0x3314ba0();
   input += synapse0x3314be0();
   input += synapse0x3314c20();
   input += synapse0x3314c60();
   input += synapse0x3314ca0();
   input += synapse0x3314ce0();
   input += synapse0x3314d20();
   input += synapse0x3314d60();
   input += synapse0x3314da0();
   input += synapse0x3314830();
   input += synapse0x3314870();
   input += synapse0x33053a0();
   input += synapse0x33053e0();
   input += synapse0x3305420();
   input += synapse0x3305460();
   input += synapse0x33054a0();
   input += synapse0x33054e0();
   return input;
}

double NNfunction_NN_5_8::neuron0x33146a0() {
   double input = input0x33146a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x3305520() {
   double input = 0.291544;
   input += synapse0x3305860();
   input += synapse0x33058a0();
   input += synapse0x33058e0();
   input += synapse0x3305920();
   input += synapse0x3305960();
   input += synapse0x33059a0();
   input += synapse0x33059e0();
   input += synapse0x3305a20();
   input += synapse0x3305a60();
   input += synapse0x3305aa0();
   input += synapse0x3305ae0();
   input += synapse0x3305b20();
   input += synapse0x3305b60();
   input += synapse0x3305ba0();
   input += synapse0x3305be0();
   input += synapse0x3305c20();
   input += synapse0x33056b0();
   input += synapse0x33056f0();
   input += synapse0x3305d70();
   input += synapse0x3305db0();
   input += synapse0x3305df0();
   input += synapse0x3305e30();
   input += synapse0x3305e70();
   input += synapse0x3305eb0();
   return input;
}

double NNfunction_NN_5_8::neuron0x3305520() {
   double input = input0x3305520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x3305ef0() {
   double input = 0.228621;
   input += synapse0x3306230();
   input += synapse0x3306270();
   input += synapse0x33062b0();
   input += synapse0x33062f0();
   input += synapse0x3306330();
   input += synapse0x3306370();
   input += synapse0x33063b0();
   input += synapse0x33063f0();
   input += synapse0x3306430();
   input += synapse0x3306470();
   input += synapse0x33064b0();
   input += synapse0x33064f0();
   input += synapse0x3306530();
   input += synapse0x3306570();
   input += synapse0x33065b0();
   input += synapse0x33065f0();
   input += synapse0x3306080();
   input += synapse0x33060c0();
   input += synapse0x3306740();
   input += synapse0x3306780();
   input += synapse0x33067c0();
   input += synapse0x3306800();
   input += synapse0x3306840();
   input += synapse0x3306880();
   return input;
}

double NNfunction_NN_5_8::neuron0x3305ef0() {
   double input = input0x3305ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x33068c0() {
   double input = 1.37046;
   input += synapse0x3306c00();
   input += synapse0x3306c40();
   input += synapse0x3306c80();
   input += synapse0x3306cc0();
   input += synapse0x3306d00();
   input += synapse0x3306d40();
   input += synapse0x3306d80();
   input += synapse0x3306dc0();
   input += synapse0x3306e00();
   input += synapse0x3306e40();
   input += synapse0x3306e80();
   input += synapse0x3306ec0();
   input += synapse0x3306f00();
   input += synapse0x3306f40();
   input += synapse0x3306f80();
   input += synapse0x3306fc0();
   input += synapse0x3306a50();
   input += synapse0x3306a90();
   input += synapse0x3307110();
   input += synapse0x3307150();
   input += synapse0x3307190();
   input += synapse0x33071d0();
   input += synapse0x3307210();
   input += synapse0x3307250();
   return input;
}

double NNfunction_NN_5_8::neuron0x33068c0() {
   double input = input0x33068c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x3318f00() {
   double input = -1.42971;
   input += synapse0x3319120();
   input += synapse0x3319160();
   input += synapse0x33191a0();
   input += synapse0x33191e0();
   input += synapse0x3319220();
   input += synapse0x3319260();
   input += synapse0x33192a0();
   input += synapse0x33192e0();
   input += synapse0x3319320();
   input += synapse0x3319360();
   input += synapse0x33193a0();
   input += synapse0x33193e0();
   input += synapse0x3319420();
   input += synapse0x3319460();
   input += synapse0x33194a0();
   input += synapse0x33194e0();
   input += synapse0x3307290();
   input += synapse0x33072d0();
   input += synapse0x3319630();
   input += synapse0x3319670();
   input += synapse0x33196b0();
   input += synapse0x33196f0();
   input += synapse0x3319730();
   input += synapse0x3319770();
   return input;
}

double NNfunction_NN_5_8::neuron0x3318f00() {
   double input = input0x3318f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x33197b0() {
   double input = -0.650627;
   input += synapse0x3319af0();
   input += synapse0x3319b30();
   input += synapse0x3319b70();
   input += synapse0x3319bb0();
   input += synapse0x3319bf0();
   input += synapse0x3319c30();
   input += synapse0x3319c70();
   input += synapse0x3319cb0();
   input += synapse0x3319cf0();
   input += synapse0x3319d30();
   input += synapse0x3319d70();
   input += synapse0x3319db0();
   input += synapse0x3319df0();
   input += synapse0x3319e30();
   input += synapse0x3319e70();
   input += synapse0x3319eb0();
   input += synapse0x3319940();
   input += synapse0x3319980();
   input += synapse0x331a000();
   input += synapse0x331a040();
   input += synapse0x331a080();
   input += synapse0x331a0c0();
   input += synapse0x331a100();
   input += synapse0x331a140();
   return input;
}

double NNfunction_NN_5_8::neuron0x33197b0() {
   double input = input0x33197b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x331a180() {
   double input = 0.155892;
   input += synapse0x331a4c0();
   input += synapse0x331a500();
   input += synapse0x331a540();
   input += synapse0x331a580();
   input += synapse0x331a5c0();
   input += synapse0x331a600();
   input += synapse0x331a640();
   input += synapse0x331a680();
   input += synapse0x331a6c0();
   input += synapse0x331a700();
   input += synapse0x331a740();
   input += synapse0x331a780();
   input += synapse0x331a7c0();
   input += synapse0x331a800();
   input += synapse0x331a840();
   input += synapse0x331a880();
   input += synapse0x331a310();
   input += synapse0x331a350();
   input += synapse0x331a9d0();
   input += synapse0x331aa10();
   input += synapse0x331aa50();
   input += synapse0x331aa90();
   input += synapse0x331aad0();
   input += synapse0x331ab10();
   return input;
}

double NNfunction_NN_5_8::neuron0x331a180() {
   double input = input0x331a180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x331ab50() {
   double input = -0.275716;
   input += synapse0x331ae90();
   input += synapse0x331aed0();
   input += synapse0x331af10();
   input += synapse0x331af50();
   input += synapse0x331af90();
   input += synapse0x331afd0();
   input += synapse0x331b010();
   input += synapse0x331b050();
   input += synapse0x331b090();
   input += synapse0x331b0d0();
   input += synapse0x331b110();
   input += synapse0x331b150();
   input += synapse0x331b190();
   input += synapse0x331b1d0();
   input += synapse0x331b210();
   input += synapse0x331b250();
   input += synapse0x331ace0();
   input += synapse0x331ad20();
   input += synapse0x331b3a0();
   input += synapse0x331b3e0();
   input += synapse0x331b420();
   input += synapse0x331b460();
   input += synapse0x331b4a0();
   input += synapse0x331b4e0();
   return input;
}

double NNfunction_NN_5_8::neuron0x331ab50() {
   double input = input0x331ab50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x3321d50() {
   double input = -1.02268;
   input += synapse0x32f7a80();
   input += synapse0x32f7ac0();
   input += synapse0x32f8f90();
   input += synapse0x32f8fd0();
   input += synapse0x32f9960();
   input += synapse0x32f99a0();
   input += synapse0x32fa730();
   input += synapse0x32fa770();
   input += synapse0x32fb100();
   input += synapse0x32fb140();
   input += synapse0x32fbad0();
   input += synapse0x32fbb10();
   input += synapse0x32fc5b0();
   input += synapse0x32fc5f0();
   input += synapse0x32fcf80();
   input += synapse0x32fcfc0();
   input += synapse0x32fa060();
   input += synapse0x32fa0a0();
   input += synapse0x32feb30();
   input += synapse0x32feb70();
   input += synapse0x32ff500();
   input += synapse0x32ff540();
   input += synapse0x32ffed0();
   input += synapse0x32fff10();
   input += synapse0x33008a0();
   input += synapse0x33008e0();
   input += synapse0x32f4a10();
   input += synapse0x32f4a50();
   input += synapse0x3302990();
   input += synapse0x33029d0();
   input += synapse0x3303360();
   input += synapse0x33033a0();
   input += synapse0x3303d30();
   input += synapse0x3303d70();
   input += synapse0x3304700();
   input += synapse0x3304740();
   input += synapse0x33050d0();
   input += synapse0x3305110();
   input += synapse0x32fdc20();
   input += synapse0x32fdc60();
   input += synapse0x33074d0();
   input += synapse0x3307510();
   input += synapse0x3307e60();
   input += synapse0x3307ea0();
   input += synapse0x3308830();
   input += synapse0x3308870();
   input += synapse0x3309200();
   input += synapse0x3309240();
   input += synapse0x3309bd0();
   input += synapse0x3309c10();
   return input;
}

double NNfunction_NN_5_8::neuron0x3321d50() {
   double input = input0x3321d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x33220f0() {
   double input = 1.11092;
   input += synapse0x330c310();
   input += synapse0x330c350();
   input += synapse0x33018d0();
   input += synapse0x3301910();
   input += synapse0x330eef0();
   input += synapse0x330ef30();
   input += synapse0x330f8c0();
   input += synapse0x330f900();
   input += synapse0x3310290();
   input += synapse0x33102d0();
   input += synapse0x3310c60();
   input += synapse0x3310ca0();
   input += synapse0x3311630();
   input += synapse0x3311670();
   input += synapse0x3312000();
   input += synapse0x3312040();
   input += synapse0x33129d0();
   input += synapse0x3312a10();
   input += synapse0x33133a0();
   input += synapse0x33133e0();
   input += synapse0x3313f80();
   input += synapse0x3313fc0();
   input += synapse0x3314950();
   input += synapse0x3314990();
   input += synapse0x33057d0();
   input += synapse0x3305810();
   input += synapse0x33061a0();
   input += synapse0x33061e0();
   input += synapse0x3306b70();
   input += synapse0x3306bb0();
   input += synapse0x3319090();
   input += synapse0x33190d0();
   input += synapse0x3319a60();
   input += synapse0x3319aa0();
   input += synapse0x331a430();
   input += synapse0x331a470();
   input += synapse0x331ae00();
   input += synapse0x331ae40();
   input += synapse0x32f6cf0();
   input += synapse0x32f6d30();
   input += synapse0x330a5a0();
   input += synapse0x330a5e0();
   input += synapse0x331b520();
   input += synapse0x331b560();
   input += synapse0x331b5a0();
   input += synapse0x331b5e0();
   input += synapse0x3322490();
   input += synapse0x33224d0();
   input += synapse0x3322510();
   input += synapse0x3322550();
   return input;
}

double NNfunction_NN_5_8::neuron0x33220f0() {
   double input = input0x33220f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x3322590() {
   double input = 0.805356;
   input += synapse0x33228d0();
   input += synapse0x3322910();
   input += synapse0x3322950();
   input += synapse0x3322990();
   input += synapse0x33229d0();
   input += synapse0x3322a10();
   input += synapse0x3322a50();
   input += synapse0x3322a90();
   input += synapse0x3322ad0();
   input += synapse0x3322b10();
   input += synapse0x3322b50();
   input += synapse0x3322b90();
   input += synapse0x3322bd0();
   input += synapse0x3322c10();
   input += synapse0x3322c50();
   input += synapse0x3322c90();
   input += synapse0x3322720();
   input += synapse0x3322760();
   input += synapse0x3322de0();
   input += synapse0x3322e20();
   input += synapse0x3322e60();
   input += synapse0x3322ea0();
   input += synapse0x3322ee0();
   input += synapse0x3322f20();
   input += synapse0x3322f60();
   input += synapse0x3322fa0();
   input += synapse0x3322fe0();
   input += synapse0x3323020();
   input += synapse0x3323060();
   input += synapse0x33230a0();
   input += synapse0x33230e0();
   input += synapse0x3323120();
   input += synapse0x3322cd0();
   input += synapse0x3322d10();
   input += synapse0x3322d50();
   input += synapse0x3322d90();
   input += synapse0x3323370();
   input += synapse0x33233b0();
   input += synapse0x33233f0();
   input += synapse0x3323430();
   input += synapse0x3323470();
   input += synapse0x33234b0();
   input += synapse0x33234f0();
   input += synapse0x3323530();
   input += synapse0x3323570();
   input += synapse0x33235b0();
   input += synapse0x33235f0();
   input += synapse0x3323630();
   input += synapse0x3323670();
   input += synapse0x33236b0();
   return input;
}

double NNfunction_NN_5_8::neuron0x3322590() {
   double input = input0x3322590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x33236f0() {
   double input = -0.0817489;
   input += synapse0x3323a30();
   input += synapse0x3323a70();
   input += synapse0x3323ab0();
   input += synapse0x3323af0();
   input += synapse0x3323b30();
   input += synapse0x3323b70();
   input += synapse0x3323bb0();
   input += synapse0x3323bf0();
   input += synapse0x3323c30();
   input += synapse0x3323c70();
   input += synapse0x3323cb0();
   input += synapse0x3323cf0();
   input += synapse0x3323d30();
   input += synapse0x3323d70();
   input += synapse0x3323db0();
   input += synapse0x3323df0();
   input += synapse0x3323880();
   input += synapse0x33238c0();
   input += synapse0x3323f40();
   input += synapse0x3323f80();
   input += synapse0x3323fc0();
   input += synapse0x3324000();
   input += synapse0x3324040();
   input += synapse0x3324080();
   input += synapse0x33240c0();
   input += synapse0x3324100();
   input += synapse0x3324140();
   input += synapse0x3324180();
   input += synapse0x33241c0();
   input += synapse0x3324200();
   input += synapse0x3324240();
   input += synapse0x3324280();
   input += synapse0x3323e30();
   input += synapse0x3323e70();
   input += synapse0x3323eb0();
   input += synapse0x3323ef0();
   input += synapse0x33244d0();
   input += synapse0x3324510();
   input += synapse0x3324550();
   input += synapse0x3324590();
   input += synapse0x33245d0();
   input += synapse0x3324610();
   input += synapse0x3324650();
   input += synapse0x3324690();
   input += synapse0x33246d0();
   input += synapse0x3324710();
   input += synapse0x3324750();
   input += synapse0x3324790();
   input += synapse0x33247d0();
   input += synapse0x3324810();
   return input;
}

double NNfunction_NN_5_8::neuron0x33236f0() {
   double input = input0x33236f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x3324850() {
   double input = -0.953638;
   input += synapse0x3324b90();
   input += synapse0x3324bd0();
   input += synapse0x3324c10();
   input += synapse0x3324c50();
   input += synapse0x3324c90();
   input += synapse0x3324cd0();
   input += synapse0x3324d10();
   input += synapse0x3324d50();
   input += synapse0x3324d90();
   input += synapse0x3324dd0();
   input += synapse0x3324e10();
   input += synapse0x3324e50();
   input += synapse0x3324e90();
   input += synapse0x3324ed0();
   input += synapse0x3324f10();
   input += synapse0x3324f50();
   input += synapse0x33249e0();
   input += synapse0x3324a20();
   input += synapse0x33250a0();
   input += synapse0x33250e0();
   input += synapse0x3325120();
   input += synapse0x3325160();
   input += synapse0x33251a0();
   input += synapse0x33251e0();
   input += synapse0x3325220();
   input += synapse0x3325260();
   input += synapse0x33252a0();
   input += synapse0x33252e0();
   input += synapse0x3325320();
   input += synapse0x3325360();
   input += synapse0x33253a0();
   input += synapse0x33253e0();
   input += synapse0x3324f90();
   input += synapse0x3324fd0();
   input += synapse0x3325010();
   input += synapse0x3325050();
   input += synapse0x3325630();
   input += synapse0x3325670();
   input += synapse0x33256b0();
   input += synapse0x33256f0();
   input += synapse0x3325730();
   input += synapse0x3325770();
   input += synapse0x33257b0();
   input += synapse0x33257f0();
   input += synapse0x3325830();
   input += synapse0x3325870();
   input += synapse0x33258b0();
   input += synapse0x33258f0();
   input += synapse0x3325930();
   input += synapse0x3325970();
   return input;
}

double NNfunction_NN_5_8::neuron0x3324850() {
   double input = input0x3324850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_5_8::input0x33259b0() {
   double input = -3.93852;
   input += synapse0x32f6a90();
   input += synapse0x3325bd0();
   input += synapse0x3325c10();
   input += synapse0x3325c50();
   input += synapse0x3325c90();
   return input;
}

double NNfunction_NN_5_8::neuron0x33259b0() {
   double input = input0x33259b0();
   return (input * 1)+0;
}

double NNfunction_NN_5_8::synapse0x30b18e0() {
   return (neuron0x32f1a70()*-0.0216461);
}

double NNfunction_NN_5_8::synapse0x32f1930() {
   return (neuron0x32f1db0()*0.0036192);
}

double NNfunction_NN_5_8::synapse0x32f1970() {
   return (neuron0x32f20f0()*-3.20371);
}

double NNfunction_NN_5_8::synapse0x32f6d80() {
   return (neuron0x32f2430()*0.016688);
}

double NNfunction_NN_5_8::synapse0x32f6dc0() {
   return (neuron0x32f2770()*-0.0248216);
}

double NNfunction_NN_5_8::synapse0x32f6e00() {
   return (neuron0x32f2ab0()*-0.0145318);
}

double NNfunction_NN_5_8::synapse0x32f6e40() {
   return (neuron0x32f2df0()*0.00129542);
}

double NNfunction_NN_5_8::synapse0x32f6e80() {
   return (neuron0x32f3130()*-0.00218895);
}

double NNfunction_NN_5_8::synapse0x32f6ec0() {
   return (neuron0x32f3470()*-0.0102735);
}

double NNfunction_NN_5_8::synapse0x32f6f00() {
   return (neuron0x32f37b0()*0.000637997);
}

double NNfunction_NN_5_8::synapse0x32f6f40() {
   return (neuron0x32f3af0()*0.0113549);
}

double NNfunction_NN_5_8::synapse0x32f6f80() {
   return (neuron0x32f3e30()*0.246781);
}

double NNfunction_NN_5_8::synapse0x32f6fc0() {
   return (neuron0x32f4170()*0.0361083);
}

double NNfunction_NN_5_8::synapse0x32f7000() {
   return (neuron0x32f44b0()*-0.0184937);
}

double NNfunction_NN_5_8::synapse0x32f7040() {
   return (neuron0x32f47f0()*-0.0192652);
}

double NNfunction_NN_5_8::synapse0x32f7080() {
   return (neuron0x32f4b30()*-0.00155298);
}

double NNfunction_NN_5_8::synapse0x32f18a0() {
   return (neuron0x32f4e70()*0.00302547);
}

double NNfunction_NN_5_8::synapse0x32f18e0() {
   return (neuron0x32f53d0()*0.0125552);
}

double NNfunction_NN_5_8::synapse0x30a3140() {
   return (neuron0x32f55f0()*0.0161062);
}

double NNfunction_NN_5_8::synapse0x30a3180() {
   return (neuron0x32f5930()*3.85907e-05);
}

double NNfunction_NN_5_8::synapse0x32f72e0() {
   return (neuron0x32f5c70()*0.0117291);
}

double NNfunction_NN_5_8::synapse0x32f7320() {
   return (neuron0x32f5fb0()*0.0033341);
}

double NNfunction_NN_5_8::synapse0x32f7360() {
   return (neuron0x32f62f0()*-0.000913183);
}

double NNfunction_NN_5_8::synapse0x32f73a0() {
   return (neuron0x32f6630()*4.15945);
}

double NNfunction_NN_5_8::synapse0x32f7720() {
   return (neuron0x32f1a70()*0.201499);
}

double NNfunction_NN_5_8::synapse0x32f7760() {
   return (neuron0x32f1db0()*-0.00219653);
}

double NNfunction_NN_5_8::synapse0x32f77a0() {
   return (neuron0x32f20f0()*-0.216696);
}

double NNfunction_NN_5_8::synapse0x32f77e0() {
   return (neuron0x32f2430()*0.0746573);
}

double NNfunction_NN_5_8::synapse0x32f7820() {
   return (neuron0x32f2770()*-0.00883333);
}

double NNfunction_NN_5_8::synapse0x32f7860() {
   return (neuron0x32f2ab0()*-0.0134024);
}

double NNfunction_NN_5_8::synapse0x32f78a0() {
   return (neuron0x32f2df0()*0.0168022);
}

double NNfunction_NN_5_8::synapse0x32f78e0() {
   return (neuron0x32f3130()*0.0225285);
}

double NNfunction_NN_5_8::synapse0x32f7920() {
   return (neuron0x32f3470()*0.0224387);
}

double NNfunction_NN_5_8::synapse0x32f71d0() {
   return (neuron0x32f37b0()*0.0136329);
}

double NNfunction_NN_5_8::synapse0x32f7210() {
   return (neuron0x32f3af0()*-0.0326541);
}

double NNfunction_NN_5_8::synapse0x32f7250() {
   return (neuron0x32f3e30()*-0.203022);
}

double NNfunction_NN_5_8::synapse0x32f7290() {
   return (neuron0x32f4170()*0.0234856);
}

double NNfunction_NN_5_8::synapse0x32f7b70() {
   return (neuron0x32f44b0()*0.00871864);
}

double NNfunction_NN_5_8::synapse0x32f7bb0() {
   return (neuron0x32f47f0()*0.012793);
}

double NNfunction_NN_5_8::synapse0x32f7bf0() {
   return (neuron0x32f4b30()*-0.00655328);
}

double NNfunction_NN_5_8::synapse0x32f7570() {
   return (neuron0x32f4e70()*-0.00507285);
}

double NNfunction_NN_5_8::synapse0x32f75b0() {
   return (neuron0x32f53d0()*-0.0100793);
}

double NNfunction_NN_5_8::synapse0x32f7d40() {
   return (neuron0x32f55f0()*-0.0125807);
}

double NNfunction_NN_5_8::synapse0x32f7d80() {
   return (neuron0x32f5930()*0.00973572);
}

double NNfunction_NN_5_8::synapse0x32f7dc0() {
   return (neuron0x32f5c70()*-0.030908);
}

double NNfunction_NN_5_8::synapse0x32f7e00() {
   return (neuron0x32f5fb0()*0.00306078);
}

double NNfunction_NN_5_8::synapse0x32f7e40() {
   return (neuron0x32f62f0()*0.0061229);
}

double NNfunction_NN_5_8::synapse0x32f7e80() {
   return (neuron0x32f6630()*-0.798064);
}

double NNfunction_NN_5_8::synapse0x32f8200() {
   return (neuron0x32f1a70()*-0.368481);
}

double NNfunction_NN_5_8::synapse0x32f8240() {
   return (neuron0x32f1db0()*-0.188605);
}

double NNfunction_NN_5_8::synapse0x32f8280() {
   return (neuron0x32f20f0()*0.2159);
}

double NNfunction_NN_5_8::synapse0x32f82c0() {
   return (neuron0x32f2430()*0.494207);
}

double NNfunction_NN_5_8::synapse0x32f8300() {
   return (neuron0x32f2770()*-0.18386);
}

double NNfunction_NN_5_8::synapse0x32f8340() {
   return (neuron0x32f2ab0()*0.114813);
}

double NNfunction_NN_5_8::synapse0x32f8380() {
   return (neuron0x32f2df0()*0.0138904);
}

double NNfunction_NN_5_8::synapse0x32f83c0() {
   return (neuron0x32f3130()*-0.0544028);
}

double NNfunction_NN_5_8::synapse0x32f8400() {
   return (neuron0x32f3470()*0.0911118);
}

double NNfunction_NN_5_8::synapse0x32f8440() {
   return (neuron0x32f37b0()*-0.144033);
}

double NNfunction_NN_5_8::synapse0x32f8480() {
   return (neuron0x32f3af0()*0.247122);
}

double NNfunction_NN_5_8::synapse0x32f84c0() {
   return (neuron0x32f3e30()*-0.075352);
}

double NNfunction_NN_5_8::synapse0x32f8500() {
   return (neuron0x32f4170()*-0.0307042);
}

double NNfunction_NN_5_8::synapse0x32f8540() {
   return (neuron0x32f44b0()*-0.0181883);
}

double NNfunction_NN_5_8::synapse0x32f8580() {
   return (neuron0x32f47f0()*-0.735708);
}

double NNfunction_NN_5_8::synapse0x32f85c0() {
   return (neuron0x32f4b30()*0.0706988);
}

double NNfunction_NN_5_8::synapse0x32f8050() {
   return (neuron0x32f4e70()*0.149427);
}

double NNfunction_NN_5_8::synapse0x32f8090() {
   return (neuron0x32f53d0()*-0.305727);
}

double NNfunction_NN_5_8::synapse0x30b0fb0() {
   return (neuron0x32f55f0()*-0.369695);
}

double NNfunction_NN_5_8::synapse0x30b0ff0() {
   return (neuron0x32f5930()*0.434142);
}

double NNfunction_NN_5_8::synapse0x32e0b00() {
   return (neuron0x32f5c70()*-0.223406);
}

double NNfunction_NN_5_8::synapse0x32e0b40() {
   return (neuron0x32f5fb0()*-0.132261);
}

double NNfunction_NN_5_8::synapse0x32e0b80() {
   return (neuron0x32f62f0()*0.207451);
}

double NNfunction_NN_5_8::synapse0x32f19b0() {
   return (neuron0x32f6630()*-0.576799);
}

double NNfunction_NN_5_8::synapse0x32f7b10() {
   return (neuron0x32f1a70()*0.00733777);
}

double NNfunction_NN_5_8::synapse0x32f19f0() {
   return (neuron0x32f1db0()*0.00403456);
}

double NNfunction_NN_5_8::synapse0x32f1a30() {
   return (neuron0x32f20f0()*-0.214186);
}

double NNfunction_NN_5_8::synapse0x32f8710() {
   return (neuron0x32f2430()*0.109428);
}

double NNfunction_NN_5_8::synapse0x32f8750() {
   return (neuron0x32f2770()*0.0368175);
}

double NNfunction_NN_5_8::synapse0x32f8790() {
   return (neuron0x32f2ab0()*0.0254972);
}

double NNfunction_NN_5_8::synapse0x32f87d0() {
   return (neuron0x32f2df0()*-0.0438556);
}

double NNfunction_NN_5_8::synapse0x32f8810() {
   return (neuron0x32f3130()*0.00132988);
}

double NNfunction_NN_5_8::synapse0x32f8850() {
   return (neuron0x32f3470()*-0.0346064);
}

double NNfunction_NN_5_8::synapse0x32f8890() {
   return (neuron0x32f37b0()*-0.0403787);
}

double NNfunction_NN_5_8::synapse0x32f88d0() {
   return (neuron0x32f3af0()*-0.0273605);
}

double NNfunction_NN_5_8::synapse0x32f8910() {
   return (neuron0x32f3e30()*-1.1662);
}

double NNfunction_NN_5_8::synapse0x32f8950() {
   return (neuron0x32f4170()*0.0587325);
}

double NNfunction_NN_5_8::synapse0x32f8990() {
   return (neuron0x32f44b0()*0.0218629);
}

double NNfunction_NN_5_8::synapse0x32f89d0() {
   return (neuron0x32f47f0()*0.0745445);
}

double NNfunction_NN_5_8::synapse0x32f8a10() {
   return (neuron0x32f4b30()*0.053611);
}

double NNfunction_NN_5_8::synapse0x32f7960() {
   return (neuron0x32f4e70()*-0.0238974);
}

double NNfunction_NN_5_8::synapse0x32f79a0() {
   return (neuron0x32f53d0()*0.0354203);
}

double NNfunction_NN_5_8::synapse0x32f8b60() {
   return (neuron0x32f55f0()*0.0262019);
}

double NNfunction_NN_5_8::synapse0x32f8ba0() {
   return (neuron0x32f5930()*0.0278676);
}

double NNfunction_NN_5_8::synapse0x32f8be0() {
   return (neuron0x32f5c70()*0.000540809);
}

double NNfunction_NN_5_8::synapse0x32f8c20() {
   return (neuron0x32f5fb0()*0.00255995);
}

double NNfunction_NN_5_8::synapse0x32f8c60() {
   return (neuron0x32f62f0()*-0.00240044);
}

double NNfunction_NN_5_8::synapse0x32f8ca0() {
   return (neuron0x32f6630()*-0.546921);
}

double NNfunction_NN_5_8::synapse0x32f9020() {
   return (neuron0x32f1a70()*-0.0481217);
}

double NNfunction_NN_5_8::synapse0x32f9060() {
   return (neuron0x32f1db0()*0.00888919);
}

double NNfunction_NN_5_8::synapse0x32f90a0() {
   return (neuron0x32f20f0()*0.261039);
}

double NNfunction_NN_5_8::synapse0x32f90e0() {
   return (neuron0x32f2430()*0.00697149);
}

double NNfunction_NN_5_8::synapse0x32f9120() {
   return (neuron0x32f2770()*-0.0547137);
}

double NNfunction_NN_5_8::synapse0x32f9160() {
   return (neuron0x32f2ab0()*0.000707093);
}

double NNfunction_NN_5_8::synapse0x32f91a0() {
   return (neuron0x32f2df0()*-0.00117661);
}

double NNfunction_NN_5_8::synapse0x32f91e0() {
   return (neuron0x32f3130()*-0.0199621);
}

double NNfunction_NN_5_8::synapse0x32f9220() {
   return (neuron0x32f3470()*-0.00771033);
}

double NNfunction_NN_5_8::synapse0x32f9260() {
   return (neuron0x32f37b0()*-0.0177247);
}

double NNfunction_NN_5_8::synapse0x32f92a0() {
   return (neuron0x32f3af0()*-0.0292451);
}

double NNfunction_NN_5_8::synapse0x32f92e0() {
   return (neuron0x32f3e30()*0.395187);
}

double NNfunction_NN_5_8::synapse0x32f9320() {
   return (neuron0x32f4170()*-3.78648);
}

double NNfunction_NN_5_8::synapse0x32f9360() {
   return (neuron0x32f44b0()*0.0342231);
}

double NNfunction_NN_5_8::synapse0x32f93a0() {
   return (neuron0x32f47f0()*-0.0112815);
}

double NNfunction_NN_5_8::synapse0x32f93e0() {
   return (neuron0x32f4b30()*0.00285344);
}

double NNfunction_NN_5_8::synapse0x32f8e70() {
   return (neuron0x32f4e70()*-0.00409767);
}

double NNfunction_NN_5_8::synapse0x32f8eb0() {
   return (neuron0x32f53d0()*-0.052837);
}

double NNfunction_NN_5_8::synapse0x32f9530() {
   return (neuron0x32f55f0()*-0.0359255);
}

double NNfunction_NN_5_8::synapse0x32f9570() {
   return (neuron0x32f5930()*0.00423525);
}

double NNfunction_NN_5_8::synapse0x32f95b0() {
   return (neuron0x32f5c70()*0.00238417);
}

double NNfunction_NN_5_8::synapse0x32f95f0() {
   return (neuron0x32f5fb0()*-0.000694993);
}

double NNfunction_NN_5_8::synapse0x32f9630() {
   return (neuron0x32f62f0()*-0.0021752);
}

double NNfunction_NN_5_8::synapse0x32f9670() {
   return (neuron0x32f6630()*-0.426535);
}

double NNfunction_NN_5_8::synapse0x32f99f0() {
   return (neuron0x32f1a70()*-0.0541949);
}

double NNfunction_NN_5_8::synapse0x32f9a30() {
   return (neuron0x32f1db0()*0.0040979);
}

double NNfunction_NN_5_8::synapse0x32f9a70() {
   return (neuron0x32f20f0()*-0.262091);
}

double NNfunction_NN_5_8::synapse0x32f9ab0() {
   return (neuron0x32f2430()*-0.0152194);
}

double NNfunction_NN_5_8::synapse0x32f9af0() {
   return (neuron0x32f2770()*-0.0110959);
}

double NNfunction_NN_5_8::synapse0x32f9b30() {
   return (neuron0x32f2ab0()*0.0108526);
}

double NNfunction_NN_5_8::synapse0x32f9b70() {
   return (neuron0x32f2df0()*0.0022291);
}

double NNfunction_NN_5_8::synapse0x32f9bb0() {
   return (neuron0x32f3130()*0.00800392);
}

double NNfunction_NN_5_8::synapse0x32f9bf0() {
   return (neuron0x32f3470()*-0.0300633);
}

double NNfunction_NN_5_8::synapse0x30b1340() {
   return (neuron0x32f37b0()*-0.00331613);
}

double NNfunction_NN_5_8::synapse0x30b1380() {
   return (neuron0x32f3af0()*0.00146588);
}

double NNfunction_NN_5_8::synapse0x30b13c0() {
   return (neuron0x32f3e30()*-0.112861);
}

double NNfunction_NN_5_8::synapse0x30b1400() {
   return (neuron0x32f4170()*0.0419092);
}

double NNfunction_NN_5_8::synapse0x30b1440() {
   return (neuron0x32f44b0()*-0.0147089);
}

double NNfunction_NN_5_8::synapse0x30b1480() {
   return (neuron0x32f47f0()*-0.00398435);
}

double NNfunction_NN_5_8::synapse0x30b14c0() {
   return (neuron0x32f4b30()*-0.00699223);
}

double NNfunction_NN_5_8::synapse0x32f9840() {
   return (neuron0x32f4e70()*-0.00528696);
}

double NNfunction_NN_5_8::synapse0x32f9880() {
   return (neuron0x32f53d0()*0.00587214);
}

double NNfunction_NN_5_8::synapse0x30b1610() {
   return (neuron0x32f55f0()*0.00689012);
}

double NNfunction_NN_5_8::synapse0x30b1650() {
   return (neuron0x32f5930()*0.00568516);
}

double NNfunction_NN_5_8::synapse0x30b1690() {
   return (neuron0x32f5c70()*0.0280929);
}

double NNfunction_NN_5_8::synapse0x30b16d0() {
   return (neuron0x32f5fb0()*-0.00794203);
}

double NNfunction_NN_5_8::synapse0x30b1710() {
   return (neuron0x32f62f0()*4.07087e-05);
}

double NNfunction_NN_5_8::synapse0x32fa440() {
   return (neuron0x32f6630()*7.00726);
}

double NNfunction_NN_5_8::synapse0x32fa7c0() {
   return (neuron0x32f1a70()*-0.00648356);
}

double NNfunction_NN_5_8::synapse0x32fa800() {
   return (neuron0x32f1db0()*0.0011773);
}

double NNfunction_NN_5_8::synapse0x32fa840() {
   return (neuron0x32f20f0()*0.0362887);
}

double NNfunction_NN_5_8::synapse0x32fa880() {
   return (neuron0x32f2430()*-2.21109);
}

double NNfunction_NN_5_8::synapse0x32fa8c0() {
   return (neuron0x32f2770()*0.00411164);
}

double NNfunction_NN_5_8::synapse0x32fa900() {
   return (neuron0x32f2ab0()*0.00213148);
}

double NNfunction_NN_5_8::synapse0x32fa940() {
   return (neuron0x32f2df0()*0.000331748);
}

double NNfunction_NN_5_8::synapse0x32fa980() {
   return (neuron0x32f3130()*-0.000184158);
}

double NNfunction_NN_5_8::synapse0x32fa9c0() {
   return (neuron0x32f3470()*-0.00318651);
}

double NNfunction_NN_5_8::synapse0x32faa00() {
   return (neuron0x32f37b0()*0.000400757);
}

double NNfunction_NN_5_8::synapse0x32faa40() {
   return (neuron0x32f3af0()*0.0014123);
}

double NNfunction_NN_5_8::synapse0x32faa80() {
   return (neuron0x32f3e30()*-0.365286);
}

double NNfunction_NN_5_8::synapse0x32faac0() {
   return (neuron0x32f4170()*-0.00662628);
}

double NNfunction_NN_5_8::synapse0x32fab00() {
   return (neuron0x32f44b0()*0.0166258);
}

double NNfunction_NN_5_8::synapse0x32fab40() {
   return (neuron0x32f47f0()*-0.00658352);
}

double NNfunction_NN_5_8::synapse0x32fab80() {
   return (neuron0x32f4b30()*-0.00498513);
}

double NNfunction_NN_5_8::synapse0x32fa610() {
   return (neuron0x32f4e70()*0.0256549);
}

double NNfunction_NN_5_8::synapse0x32fa650() {
   return (neuron0x32f53d0()*-0.00168631);
}

double NNfunction_NN_5_8::synapse0x32facd0() {
   return (neuron0x32f55f0()*-0.00599565);
}

double NNfunction_NN_5_8::synapse0x32fad10() {
   return (neuron0x32f5930()*0.00621752);
}

double NNfunction_NN_5_8::synapse0x32fad50() {
   return (neuron0x32f5c70()*-0.00408334);
}

double NNfunction_NN_5_8::synapse0x32fad90() {
   return (neuron0x32f5fb0()*0.00866943);
}

double NNfunction_NN_5_8::synapse0x32fadd0() {
   return (neuron0x32f62f0()*-0.000836205);
}

double NNfunction_NN_5_8::synapse0x32fae10() {
   return (neuron0x32f6630()*-0.0489142);
}

double NNfunction_NN_5_8::synapse0x32fb190() {
   return (neuron0x32f1a70()*0.154772);
}

double NNfunction_NN_5_8::synapse0x32fb1d0() {
   return (neuron0x32f1db0()*0.0755673);
}

double NNfunction_NN_5_8::synapse0x32fb210() {
   return (neuron0x32f20f0()*0.866931);
}

double NNfunction_NN_5_8::synapse0x32fb250() {
   return (neuron0x32f2430()*-0.269541);
}

double NNfunction_NN_5_8::synapse0x32fb290() {
   return (neuron0x32f2770()*-0.050227);
}

double NNfunction_NN_5_8::synapse0x32fb2d0() {
   return (neuron0x32f2ab0()*-0.0304607);
}

double NNfunction_NN_5_8::synapse0x32fb310() {
   return (neuron0x32f2df0()*-0.24285);
}

double NNfunction_NN_5_8::synapse0x32fb350() {
   return (neuron0x32f3130()*0.0651635);
}

double NNfunction_NN_5_8::synapse0x32fb390() {
   return (neuron0x32f3470()*0.00692492);
}

double NNfunction_NN_5_8::synapse0x32fb3d0() {
   return (neuron0x32f37b0()*0.37654);
}

double NNfunction_NN_5_8::synapse0x32fb410() {
   return (neuron0x32f3af0()*-0.0731329);
}

double NNfunction_NN_5_8::synapse0x32fb450() {
   return (neuron0x32f3e30()*0.462734);
}

double NNfunction_NN_5_8::synapse0x32fb490() {
   return (neuron0x32f4170()*0.23522);
}

double NNfunction_NN_5_8::synapse0x32fb4d0() {
   return (neuron0x32f44b0()*0.172361);
}

double NNfunction_NN_5_8::synapse0x32fb510() {
   return (neuron0x32f47f0()*-0.0263097);
}

double NNfunction_NN_5_8::synapse0x32fb550() {
   return (neuron0x32f4b30()*0.0919116);
}

double NNfunction_NN_5_8::synapse0x32fafe0() {
   return (neuron0x32f4e70()*0.233466);
}

double NNfunction_NN_5_8::synapse0x32fb020() {
   return (neuron0x32f53d0()*0.0326627);
}

double NNfunction_NN_5_8::synapse0x32fb6a0() {
   return (neuron0x32f55f0()*0.0784621);
}

double NNfunction_NN_5_8::synapse0x32fb6e0() {
   return (neuron0x32f5930()*0.0541823);
}

double NNfunction_NN_5_8::synapse0x32fb720() {
   return (neuron0x32f5c70()*0.168537);
}

double NNfunction_NN_5_8::synapse0x32fb760() {
   return (neuron0x32f5fb0()*0.0537354);
}

double NNfunction_NN_5_8::synapse0x32fb7a0() {
   return (neuron0x32f62f0()*-0.0766948);
}

double NNfunction_NN_5_8::synapse0x32fb7e0() {
   return (neuron0x32f6630()*-0.281843);
}

double NNfunction_NN_5_8::synapse0x32f52c0() {
   return (neuron0x32f1a70()*0.134477);
}

double NNfunction_NN_5_8::synapse0x32f5300() {
   return (neuron0x32f1db0()*-0.00677748);
}

double NNfunction_NN_5_8::synapse0x32f5340() {
   return (neuron0x32f20f0()*0.0699857);
}

double NNfunction_NN_5_8::synapse0x32f5380() {
   return (neuron0x32f2430()*0.0431428);
}

double NNfunction_NN_5_8::synapse0x32fbd70() {
   return (neuron0x32f2770()*-0.0112819);
}

double NNfunction_NN_5_8::synapse0x32fbdb0() {
   return (neuron0x32f2ab0()*-0.0309675);
}

double NNfunction_NN_5_8::synapse0x32fbdf0() {
   return (neuron0x32f2df0()*0.0269252);
}

double NNfunction_NN_5_8::synapse0x32fbe30() {
   return (neuron0x32f3130()*0.0225516);
}

double NNfunction_NN_5_8::synapse0x32fbe70() {
   return (neuron0x32f3470()*0.0372603);
}

double NNfunction_NN_5_8::synapse0x32fbeb0() {
   return (neuron0x32f37b0()*0.00484124);
}

double NNfunction_NN_5_8::synapse0x32fbef0() {
   return (neuron0x32f3af0()*-0.0389651);
}

double NNfunction_NN_5_8::synapse0x32fbf30() {
   return (neuron0x32f3e30()*-0.420138);
}

double NNfunction_NN_5_8::synapse0x32fbf70() {
   return (neuron0x32f4170()*0.0528708);
}

double NNfunction_NN_5_8::synapse0x32fbfb0() {
   return (neuron0x32f44b0()*-0.00396432);
}

double NNfunction_NN_5_8::synapse0x32fbff0() {
   return (neuron0x32f47f0()*0.0243844);
}

double NNfunction_NN_5_8::synapse0x32fc030() {
   return (neuron0x32f4b30()*0.016891);
}

double NNfunction_NN_5_8::synapse0x32fb9b0() {
   return (neuron0x32f4e70()*-0.0253844);
}

double NNfunction_NN_5_8::synapse0x32fb9f0() {
   return (neuron0x32f53d0()*-0.000280618);
}

double NNfunction_NN_5_8::synapse0x32fc180() {
   return (neuron0x32f55f0()*-0.0139646);
}

double NNfunction_NN_5_8::synapse0x32fc1c0() {
   return (neuron0x32f5930()*-0.00582921);
}

double NNfunction_NN_5_8::synapse0x32fc200() {
   return (neuron0x32f5c70()*-0.0430675);
}

double NNfunction_NN_5_8::synapse0x32fc240() {
   return (neuron0x32f5fb0()*-0.00327373);
}

double NNfunction_NN_5_8::synapse0x32fc280() {
   return (neuron0x32f62f0()*0.00350043);
}

double NNfunction_NN_5_8::synapse0x32fc2c0() {
   return (neuron0x32f6630()*-1.5644);
}

double NNfunction_NN_5_8::synapse0x32fc640() {
   return (neuron0x32f1a70()*-0.658042);
}

double NNfunction_NN_5_8::synapse0x32fc680() {
   return (neuron0x32f1db0()*0.0145388);
}

double NNfunction_NN_5_8::synapse0x32fc6c0() {
   return (neuron0x32f20f0()*0.118851);
}

double NNfunction_NN_5_8::synapse0x32fc700() {
   return (neuron0x32f2430()*-0.0123511);
}

double NNfunction_NN_5_8::synapse0x32fc740() {
   return (neuron0x32f2770()*0.0108613);
}

double NNfunction_NN_5_8::synapse0x32fc780() {
   return (neuron0x32f2ab0()*-0.0348389);
}

double NNfunction_NN_5_8::synapse0x32fc7c0() {
   return (neuron0x32f2df0()*0.00575375);
}

double NNfunction_NN_5_8::synapse0x32fc800() {
   return (neuron0x32f3130()*-0.00687428);
}

double NNfunction_NN_5_8::synapse0x32fc840() {
   return (neuron0x32f3470()*0.0202635);
}

double NNfunction_NN_5_8::synapse0x32fc880() {
   return (neuron0x32f37b0()*-0.0077406);
}

double NNfunction_NN_5_8::synapse0x32fc8c0() {
   return (neuron0x32f3af0()*0.00724434);
}

double NNfunction_NN_5_8::synapse0x32fc900() {
   return (neuron0x32f3e30()*-0.0611223);
}

double NNfunction_NN_5_8::synapse0x32fc940() {
   return (neuron0x32f4170()*0.0198359);
}

double NNfunction_NN_5_8::synapse0x32fc980() {
   return (neuron0x32f44b0()*-0.0108932);
}

double NNfunction_NN_5_8::synapse0x32fc9c0() {
   return (neuron0x32f47f0()*0.0165996);
}

double NNfunction_NN_5_8::synapse0x32fca00() {
   return (neuron0x32f4b30()*-0.0105673);
}

double NNfunction_NN_5_8::synapse0x32fc490() {
   return (neuron0x32f4e70()*0.00879784);
}

double NNfunction_NN_5_8::synapse0x32fc4d0() {
   return (neuron0x32f53d0()*0.0155956);
}

double NNfunction_NN_5_8::synapse0x32fcb50() {
   return (neuron0x32f55f0()*-0.0368143);
}

double NNfunction_NN_5_8::synapse0x32fcb90() {
   return (neuron0x32f5930()*-0.00786806);
}

double NNfunction_NN_5_8::synapse0x32fcbd0() {
   return (neuron0x32f5c70()*-0.0330099);
}

double NNfunction_NN_5_8::synapse0x32fcc10() {
   return (neuron0x32f5fb0()*-0.0100491);
}

double NNfunction_NN_5_8::synapse0x32fcc50() {
   return (neuron0x32f62f0()*-0.00590201);
}

double NNfunction_NN_5_8::synapse0x32fcc90() {
   return (neuron0x32f6630()*0.135234);
}

double NNfunction_NN_5_8::synapse0x32fd010() {
   return (neuron0x32f1a70()*-0.00418757);
}

double NNfunction_NN_5_8::synapse0x32fd050() {
   return (neuron0x32f1db0()*0.00269717);
}

double NNfunction_NN_5_8::synapse0x32fd090() {
   return (neuron0x32f20f0()*0.0177459);
}

double NNfunction_NN_5_8::synapse0x32fd0d0() {
   return (neuron0x32f2430()*-2.29397);
}

double NNfunction_NN_5_8::synapse0x32fd110() {
   return (neuron0x32f2770()*0.0156706);
}

double NNfunction_NN_5_8::synapse0x32fd150() {
   return (neuron0x32f2ab0()*0.00405097);
}

double NNfunction_NN_5_8::synapse0x32fd190() {
   return (neuron0x32f2df0()*0.0101535);
}

double NNfunction_NN_5_8::synapse0x32fd1d0() {
   return (neuron0x32f3130()*0.00650681);
}

double NNfunction_NN_5_8::synapse0x32fd210() {
   return (neuron0x32f3470()*-0.0135215);
}

double NNfunction_NN_5_8::synapse0x32fd250() {
   return (neuron0x32f37b0()*-0.024795);
}

double NNfunction_NN_5_8::synapse0x32fd290() {
   return (neuron0x32f3af0()*-0.0186097);
}

double NNfunction_NN_5_8::synapse0x32fd2d0() {
   return (neuron0x32f3e30()*-2.03561);
}

double NNfunction_NN_5_8::synapse0x32fd310() {
   return (neuron0x32f4170()*-0.0113271);
}

double NNfunction_NN_5_8::synapse0x32fd350() {
   return (neuron0x32f44b0()*-0.0396099);
}

double NNfunction_NN_5_8::synapse0x32fd390() {
   return (neuron0x32f47f0()*0.0294796);
}

double NNfunction_NN_5_8::synapse0x32fd3d0() {
   return (neuron0x32f4b30()*0.00918095);
}

double NNfunction_NN_5_8::synapse0x32fce60() {
   return (neuron0x32f4e70()*-0.0393927);
}

double NNfunction_NN_5_8::synapse0x32fcea0() {
   return (neuron0x32f53d0()*0.00929363);
}

double NNfunction_NN_5_8::synapse0x32f9c30() {
   return (neuron0x32f55f0()*-0.00915702);
}

double NNfunction_NN_5_8::synapse0x32f9c70() {
   return (neuron0x32f5930()*-0.00754818);
}

double NNfunction_NN_5_8::synapse0x32f9cb0() {
   return (neuron0x32f5c70()*0.00704613);
}

double NNfunction_NN_5_8::synapse0x32f9cf0() {
   return (neuron0x32f5fb0()*0.00646463);
}

double NNfunction_NN_5_8::synapse0x32f9d30() {
   return (neuron0x32f62f0()*0.00384456);
}

double NNfunction_NN_5_8::synapse0x32f9d70() {
   return (neuron0x32f6630()*0.0594251);
}

double NNfunction_NN_5_8::synapse0x32fa0f0() {
   return (neuron0x32f1a70()*-0.0130156);
}

double NNfunction_NN_5_8::synapse0x32fa130() {
   return (neuron0x32f1db0()*-0.00661556);
}

double NNfunction_NN_5_8::synapse0x32fa170() {
   return (neuron0x32f20f0()*-0.163694);
}

double NNfunction_NN_5_8::synapse0x32fa1b0() {
   return (neuron0x32f2430()*-0.42031);
}

double NNfunction_NN_5_8::synapse0x32fa1f0() {
   return (neuron0x32f2770()*0.00344325);
}

double NNfunction_NN_5_8::synapse0x32fa230() {
   return (neuron0x32f2ab0()*0.0059358);
}

double NNfunction_NN_5_8::synapse0x32fa270() {
   return (neuron0x32f2df0()*0.026351);
}

double NNfunction_NN_5_8::synapse0x32fa2b0() {
   return (neuron0x32f3130()*0.0428885);
}

double NNfunction_NN_5_8::synapse0x32fa2f0() {
   return (neuron0x32f3470()*-0.00235932);
}

double NNfunction_NN_5_8::synapse0x32fa330() {
   return (neuron0x32f37b0()*0.000288724);
}

double NNfunction_NN_5_8::synapse0x32fa370() {
   return (neuron0x32f3af0()*-0.0134461);
}

double NNfunction_NN_5_8::synapse0x32fa3b0() {
   return (neuron0x32f3e30()*0.105093);
}

double NNfunction_NN_5_8::synapse0x32fa3f0() {
   return (neuron0x32f4170()*0.0420474);
}

double NNfunction_NN_5_8::synapse0x32fe530() {
   return (neuron0x32f44b0()*-0.0710767);
}

double NNfunction_NN_5_8::synapse0x32fe570() {
   return (neuron0x32f47f0()*0.0174252);
}

double NNfunction_NN_5_8::synapse0x32fe5b0() {
   return (neuron0x32f4b30()*0.119541);
}

double NNfunction_NN_5_8::synapse0x32f9f40() {
   return (neuron0x32f4e70()*-0.0842506);
}

double NNfunction_NN_5_8::synapse0x32f9f80() {
   return (neuron0x32f53d0()*0.0487082);
}

double NNfunction_NN_5_8::synapse0x32fe700() {
   return (neuron0x32f55f0()*0.0340686);
}

double NNfunction_NN_5_8::synapse0x32fe740() {
   return (neuron0x32f5930()*0.00652355);
}

double NNfunction_NN_5_8::synapse0x32fe780() {
   return (neuron0x32f5c70()*0.0208823);
}

double NNfunction_NN_5_8::synapse0x32fe7c0() {
   return (neuron0x32f5fb0()*0.0114441);
}

double NNfunction_NN_5_8::synapse0x32fe800() {
   return (neuron0x32f62f0()*-0.00532617);
}

double NNfunction_NN_5_8::synapse0x32fe840() {
   return (neuron0x32f6630()*0.435526);
}

double NNfunction_NN_5_8::synapse0x32febc0() {
   return (neuron0x32f1a70()*-0.00613309);
}

double NNfunction_NN_5_8::synapse0x32fec00() {
   return (neuron0x32f1db0()*0.010568);
}

double NNfunction_NN_5_8::synapse0x32fec40() {
   return (neuron0x32f20f0()*-4.0826);
}

double NNfunction_NN_5_8::synapse0x32fec80() {
   return (neuron0x32f2430()*-0.0106549);
}

double NNfunction_NN_5_8::synapse0x32fecc0() {
   return (neuron0x32f2770()*0.000941902);
}

double NNfunction_NN_5_8::synapse0x32fed00() {
   return (neuron0x32f2ab0()*-0.0292867);
}

double NNfunction_NN_5_8::synapse0x32fed40() {
   return (neuron0x32f2df0()*-0.0100254);
}

double NNfunction_NN_5_8::synapse0x32fed80() {
   return (neuron0x32f3130()*-0.0189037);
}

double NNfunction_NN_5_8::synapse0x32fedc0() {
   return (neuron0x32f3470()*0.0152327);
}

double NNfunction_NN_5_8::synapse0x32fee00() {
   return (neuron0x32f37b0()*0.00375867);
}

double NNfunction_NN_5_8::synapse0x32fee40() {
   return (neuron0x32f3af0()*-0.00898776);
}

double NNfunction_NN_5_8::synapse0x32fee80() {
   return (neuron0x32f3e30()*0.635442);
}

double NNfunction_NN_5_8::synapse0x32feec0() {
   return (neuron0x32f4170()*-0.00761114);
}

double NNfunction_NN_5_8::synapse0x32fef00() {
   return (neuron0x32f44b0()*0.00147764);
}

double NNfunction_NN_5_8::synapse0x32fef40() {
   return (neuron0x32f47f0()*-0.00124917);
}

double NNfunction_NN_5_8::synapse0x32fef80() {
   return (neuron0x32f4b30()*-0.0158695);
}

double NNfunction_NN_5_8::synapse0x32fea10() {
   return (neuron0x32f4e70()*0.010171);
}

double NNfunction_NN_5_8::synapse0x32fea50() {
   return (neuron0x32f53d0()*-0.00374868);
}

double NNfunction_NN_5_8::synapse0x32ff0d0() {
   return (neuron0x32f55f0()*0.00603515);
}

double NNfunction_NN_5_8::synapse0x32ff110() {
   return (neuron0x32f5930()*0.000786471);
}

double NNfunction_NN_5_8::synapse0x32ff150() {
   return (neuron0x32f5c70()*0.00825858);
}

double NNfunction_NN_5_8::synapse0x32ff190() {
   return (neuron0x32f5fb0()*-0.00223127);
}

double NNfunction_NN_5_8::synapse0x32ff1d0() {
   return (neuron0x32f62f0()*0.00731321);
}

double NNfunction_NN_5_8::synapse0x32ff210() {
   return (neuron0x32f6630()*-6.02968);
}

double NNfunction_NN_5_8::synapse0x32ff590() {
   return (neuron0x32f1a70()*0.0229945);
}

double NNfunction_NN_5_8::synapse0x32ff5d0() {
   return (neuron0x32f1db0()*-0.0265126);
}

double NNfunction_NN_5_8::synapse0x32ff610() {
   return (neuron0x32f20f0()*-2.00012);
}

double NNfunction_NN_5_8::synapse0x32ff650() {
   return (neuron0x32f2430()*0.157584);
}

double NNfunction_NN_5_8::synapse0x32ff690() {
   return (neuron0x32f2770()*0.004006);
}

double NNfunction_NN_5_8::synapse0x32ff6d0() {
   return (neuron0x32f2ab0()*0.00125931);
}

double NNfunction_NN_5_8::synapse0x32ff710() {
   return (neuron0x32f2df0()*-0.0117148);
}

double NNfunction_NN_5_8::synapse0x32ff750() {
   return (neuron0x32f3130()*0.00351406);
}

double NNfunction_NN_5_8::synapse0x32ff790() {
   return (neuron0x32f3470()*-0.00461901);
}

double NNfunction_NN_5_8::synapse0x32ff7d0() {
   return (neuron0x32f37b0()*0.00388111);
}

double NNfunction_NN_5_8::synapse0x32ff810() {
   return (neuron0x32f3af0()*0.0237775);
}

double NNfunction_NN_5_8::synapse0x32ff850() {
   return (neuron0x32f3e30()*5.39983);
}

double NNfunction_NN_5_8::synapse0x32ff890() {
   return (neuron0x32f4170()*-0.00108906);
}

double NNfunction_NN_5_8::synapse0x32ff8d0() {
   return (neuron0x32f44b0()*-0.00914708);
}

double NNfunction_NN_5_8::synapse0x32ff910() {
   return (neuron0x32f47f0()*-0.0380614);
}

double NNfunction_NN_5_8::synapse0x32ff950() {
   return (neuron0x32f4b30()*0.00324494);
}

double NNfunction_NN_5_8::synapse0x32ff3e0() {
   return (neuron0x32f4e70()*0.0386863);
}

double NNfunction_NN_5_8::synapse0x32ff420() {
   return (neuron0x32f53d0()*0.0223684);
}

double NNfunction_NN_5_8::synapse0x32ffaa0() {
   return (neuron0x32f55f0()*0.0126043);
}

double NNfunction_NN_5_8::synapse0x32ffae0() {
   return (neuron0x32f5930()*-0.00185967);
}

double NNfunction_NN_5_8::synapse0x32ffb20() {
   return (neuron0x32f5c70()*0.0367149);
}

double NNfunction_NN_5_8::synapse0x32ffb60() {
   return (neuron0x32f5fb0()*0.0153353);
}

double NNfunction_NN_5_8::synapse0x32ffba0() {
   return (neuron0x32f62f0()*0.0170856);
}

double NNfunction_NN_5_8::synapse0x32ffbe0() {
   return (neuron0x32f6630()*1.20095);
}

double NNfunction_NN_5_8::synapse0x32fff60() {
   return (neuron0x32f1a70()*-0.0400787);
}

double NNfunction_NN_5_8::synapse0x32fffa0() {
   return (neuron0x32f1db0()*-0.0232569);
}

double NNfunction_NN_5_8::synapse0x32fffe0() {
   return (neuron0x32f20f0()*-0.391749);
}

double NNfunction_NN_5_8::synapse0x3300020() {
   return (neuron0x32f2430()*-0.832493);
}

double NNfunction_NN_5_8::synapse0x3300060() {
   return (neuron0x32f2770()*-0.115506);
}

double NNfunction_NN_5_8::synapse0x33000a0() {
   return (neuron0x32f2ab0()*0.0158995);
}

double NNfunction_NN_5_8::synapse0x33000e0() {
   return (neuron0x32f2df0()*-0.0184536);
}

double NNfunction_NN_5_8::synapse0x3300120() {
   return (neuron0x32f3130()*-0.00698448);
}

double NNfunction_NN_5_8::synapse0x3300160() {
   return (neuron0x32f3470()*-0.00252328);
}

double NNfunction_NN_5_8::synapse0x33001a0() {
   return (neuron0x32f37b0()*0.0280122);
}

double NNfunction_NN_5_8::synapse0x33001e0() {
   return (neuron0x32f3af0()*-0.0207871);
}

double NNfunction_NN_5_8::synapse0x3300220() {
   return (neuron0x32f3e30()*-2.53788);
}

double NNfunction_NN_5_8::synapse0x3300260() {
   return (neuron0x32f4170()*0.0610069);
}

double NNfunction_NN_5_8::synapse0x33002a0() {
   return (neuron0x32f44b0()*0.0252582);
}

double NNfunction_NN_5_8::synapse0x33002e0() {
   return (neuron0x32f47f0()*-0.0723024);
}

double NNfunction_NN_5_8::synapse0x3300320() {
   return (neuron0x32f4b30()*0.0464157);
}

double NNfunction_NN_5_8::synapse0x32ffdb0() {
   return (neuron0x32f4e70()*0.115961);
}

double NNfunction_NN_5_8::synapse0x32ffdf0() {
   return (neuron0x32f53d0()*-0.0182804);
}

double NNfunction_NN_5_8::synapse0x3300470() {
   return (neuron0x32f55f0()*0.00377421);
}

double NNfunction_NN_5_8::synapse0x33004b0() {
   return (neuron0x32f5930()*0.0106316);
}

double NNfunction_NN_5_8::synapse0x33004f0() {
   return (neuron0x32f5c70()*0.0234734);
}

double NNfunction_NN_5_8::synapse0x3300530() {
   return (neuron0x32f5fb0()*-0.00534784);
}

double NNfunction_NN_5_8::synapse0x3300570() {
   return (neuron0x32f62f0()*-0.0527668);
}

double NNfunction_NN_5_8::synapse0x33005b0() {
   return (neuron0x32f6630()*-0.540851);
}

double NNfunction_NN_5_8::synapse0x3300930() {
   return (neuron0x32f1a70()*0.102714);
}

double NNfunction_NN_5_8::synapse0x32f1c90() {
   return (neuron0x32f1db0()*-0.00798821);
}

double NNfunction_NN_5_8::synapse0x32f1cd0() {
   return (neuron0x32f20f0()*1.74493);
}

double NNfunction_NN_5_8::synapse0x32f1fd0() {
   return (neuron0x32f2430()*0.00126492);
}

double NNfunction_NN_5_8::synapse0x32f2010() {
   return (neuron0x32f2770()*1.01225e-05);
}

double NNfunction_NN_5_8::synapse0x32f2310() {
   return (neuron0x32f2ab0()*0.00609316);
}

double NNfunction_NN_5_8::synapse0x32f2350() {
   return (neuron0x32f2df0()*0.0048069);
}

double NNfunction_NN_5_8::synapse0x32f2650() {
   return (neuron0x32f3130()*-0.0127202);
}

double NNfunction_NN_5_8::synapse0x32f2690() {
   return (neuron0x32f3470()*-0.00261249);
}

double NNfunction_NN_5_8::synapse0x32f2990() {
   return (neuron0x32f37b0()*-0.0163721);
}

double NNfunction_NN_5_8::synapse0x32f29d0() {
   return (neuron0x32f3af0()*-0.00796905);
}

double NNfunction_NN_5_8::synapse0x32f2cd0() {
   return (neuron0x32f3e30()*-0.201524);
}

double NNfunction_NN_5_8::synapse0x32f2d10() {
   return (neuron0x32f4170()*-0.0549369);
}

double NNfunction_NN_5_8::synapse0x32f3010() {
   return (neuron0x32f44b0()*0.0227754);
}

double NNfunction_NN_5_8::synapse0x32f3050() {
   return (neuron0x32f47f0()*-0.0251559);
}

double NNfunction_NN_5_8::synapse0x32f3350() {
   return (neuron0x32f4b30()*-0.0194384);
}

double NNfunction_NN_5_8::synapse0x32f3390() {
   return (neuron0x32f4e70()*0.0158007);
}

double NNfunction_NN_5_8::synapse0x32f3690() {
   return (neuron0x32f53d0()*-0.0609489);
}

double NNfunction_NN_5_8::synapse0x32f36d0() {
   return (neuron0x32f55f0()*-0.019719);
}

double NNfunction_NN_5_8::synapse0x32f39d0() {
   return (neuron0x32f5930()*-0.0199578);
}

double NNfunction_NN_5_8::synapse0x32f3a10() {
   return (neuron0x32f5c70()*-0.030083);
}

double NNfunction_NN_5_8::synapse0x32f3d10() {
   return (neuron0x32f5fb0()*-0.0191394);
}

double NNfunction_NN_5_8::synapse0x32f3d50() {
   return (neuron0x32f62f0()*-0.000814436);
}

double NNfunction_NN_5_8::synapse0x32f4050() {
   return (neuron0x32f6630()*1.69966);
}

double NNfunction_NN_5_8::synapse0x32f4090() {
   return (neuron0x32f1a70()*0.0222155);
}

double NNfunction_NN_5_8::synapse0x32f4d50() {
   return (neuron0x32f1db0()*0.00560633);
}

double NNfunction_NN_5_8::synapse0x32f4d90() {
   return (neuron0x32f20f0()*-0.217053);
}

double NNfunction_NN_5_8::synapse0x3300780() {
   return (neuron0x32f2430()*0.0520556);
}

double NNfunction_NN_5_8::synapse0x33007c0() {
   return (neuron0x32f2770()*0.00879026);
}

double NNfunction_NN_5_8::synapse0x32f5090() {
   return (neuron0x32f2ab0()*-0.00308859);
}

double NNfunction_NN_5_8::synapse0x32f50d0() {
   return (neuron0x32f2df0()*-0.00406746);
}

double NNfunction_NN_5_8::synapse0x30a3020() {
   return (neuron0x32f3130()*-0.0171382);
}

double NNfunction_NN_5_8::synapse0x30a3060() {
   return (neuron0x32f3470()*0.0349971);
}

double NNfunction_NN_5_8::synapse0x32f5810() {
   return (neuron0x32f37b0()*0.0109717);
}

double NNfunction_NN_5_8::synapse0x32f5850() {
   return (neuron0x32f3af0()*0.00303203);
}

double NNfunction_NN_5_8::synapse0x32f5b50() {
   return (neuron0x32f3e30()*0.218088);
}

double NNfunction_NN_5_8::synapse0x32f5b90() {
   return (neuron0x32f4170()*-0.058348);
}

double NNfunction_NN_5_8::synapse0x32f5e90() {
   return (neuron0x32f44b0()*0.0110063);
}

double NNfunction_NN_5_8::synapse0x32f5ed0() {
   return (neuron0x32f47f0()*-0.0216576);
}

double NNfunction_NN_5_8::synapse0x32f61d0() {
   return (neuron0x32f4b30()*0.000389887);
}

double NNfunction_NN_5_8::synapse0x32f6210() {
   return (neuron0x32f4e70()*0.0353891);
}

double NNfunction_NN_5_8::synapse0x32f6510() {
   return (neuron0x32f53d0()*-0.0111698);
}

double NNfunction_NN_5_8::synapse0x32f6550() {
   return (neuron0x32f55f0()*-0.00980132);
}

double NNfunction_NN_5_8::synapse0x32f6850() {
   return (neuron0x32f5930()*-0.00531824);
}

double NNfunction_NN_5_8::synapse0x32f6890() {
   return (neuron0x32f5c70()*-0.0249867);
}

double NNfunction_NN_5_8::synapse0x32f4390() {
   return (neuron0x32f5fb0()*0.0158743);
}

double NNfunction_NN_5_8::synapse0x32f43d0() {
   return (neuron0x32f62f0()*-0.0150899);
}

double NNfunction_NN_5_8::synapse0x33026a0() {
   return (neuron0x32f6630()*-7.57531);
}

double NNfunction_NN_5_8::synapse0x3302a20() {
   return (neuron0x32f1a70()*0.00658033);
}

double NNfunction_NN_5_8::synapse0x3302a60() {
   return (neuron0x32f1db0()*-0.00297925);
}

double NNfunction_NN_5_8::synapse0x3302aa0() {
   return (neuron0x32f20f0()*0.00357145);
}

double NNfunction_NN_5_8::synapse0x3302ae0() {
   return (neuron0x32f2430()*2.24848);
}

double NNfunction_NN_5_8::synapse0x3302b20() {
   return (neuron0x32f2770()*-0.00328683);
}

double NNfunction_NN_5_8::synapse0x3302b60() {
   return (neuron0x32f2ab0()*-0.00334618);
}

double NNfunction_NN_5_8::synapse0x3302ba0() {
   return (neuron0x32f2df0()*0.000282321);
}

double NNfunction_NN_5_8::synapse0x3302be0() {
   return (neuron0x32f3130()*-0.00287357);
}

double NNfunction_NN_5_8::synapse0x3302c20() {
   return (neuron0x32f3470()*0.00615772);
}

double NNfunction_NN_5_8::synapse0x3302c60() {
   return (neuron0x32f37b0()*0.0100912);
}

double NNfunction_NN_5_8::synapse0x3302ca0() {
   return (neuron0x32f3af0()*0.00525628);
}

double NNfunction_NN_5_8::synapse0x3302ce0() {
   return (neuron0x32f3e30()*1.21607);
}

double NNfunction_NN_5_8::synapse0x3302d20() {
   return (neuron0x32f4170()*0.0149031);
}

double NNfunction_NN_5_8::synapse0x3302d60() {
   return (neuron0x32f44b0()*0.0192458);
}

double NNfunction_NN_5_8::synapse0x3302da0() {
   return (neuron0x32f47f0()*-0.00491878);
}

double NNfunction_NN_5_8::synapse0x3302de0() {
   return (neuron0x32f4b30()*-0.00337427);
}

double NNfunction_NN_5_8::synapse0x3302870() {
   return (neuron0x32f4e70()*0.00887483);
}

double NNfunction_NN_5_8::synapse0x33028b0() {
   return (neuron0x32f53d0()*-0.00578069);
}

double NNfunction_NN_5_8::synapse0x3302f30() {
   return (neuron0x32f55f0()*0.00207794);
}

double NNfunction_NN_5_8::synapse0x3302f70() {
   return (neuron0x32f5930()*0.00202084);
}

double NNfunction_NN_5_8::synapse0x3302fb0() {
   return (neuron0x32f5c70()*0.00200374);
}

double NNfunction_NN_5_8::synapse0x3302ff0() {
   return (neuron0x32f5fb0()*-0.00582647);
}

double NNfunction_NN_5_8::synapse0x3303030() {
   return (neuron0x32f62f0()*-0.00245058);
}

double NNfunction_NN_5_8::synapse0x3303070() {
   return (neuron0x32f6630()*0.0223561);
}

double NNfunction_NN_5_8::synapse0x33033f0() {
   return (neuron0x32f1a70()*-1.49549);
}

double NNfunction_NN_5_8::synapse0x3303430() {
   return (neuron0x32f1db0()*-0.0117467);
}

double NNfunction_NN_5_8::synapse0x3303470() {
   return (neuron0x32f20f0()*-0.11401);
}

double NNfunction_NN_5_8::synapse0x33034b0() {
   return (neuron0x32f2430()*-0.0156113);
}

double NNfunction_NN_5_8::synapse0x33034f0() {
   return (neuron0x32f2770()*0.0142235);
}

double NNfunction_NN_5_8::synapse0x3303530() {
   return (neuron0x32f2ab0()*0.00267913);
}

double NNfunction_NN_5_8::synapse0x3303570() {
   return (neuron0x32f2df0()*-0.0164852);
}

double NNfunction_NN_5_8::synapse0x33035b0() {
   return (neuron0x32f3130()*0.0113689);
}

double NNfunction_NN_5_8::synapse0x33035f0() {
   return (neuron0x32f3470()*-0.0255946);
}

double NNfunction_NN_5_8::synapse0x3303630() {
   return (neuron0x32f37b0()*-0.032292);
}

double NNfunction_NN_5_8::synapse0x3303670() {
   return (neuron0x32f3af0()*0.0414347);
}

double NNfunction_NN_5_8::synapse0x33036b0() {
   return (neuron0x32f3e30()*0.182077);
}

double NNfunction_NN_5_8::synapse0x33036f0() {
   return (neuron0x32f4170()*-0.067319);
}

double NNfunction_NN_5_8::synapse0x3303730() {
   return (neuron0x32f44b0()*0.00153155);
}

double NNfunction_NN_5_8::synapse0x3303770() {
   return (neuron0x32f47f0()*-0.059698);
}

double NNfunction_NN_5_8::synapse0x33037b0() {
   return (neuron0x32f4b30()*-0.0320961);
}

double NNfunction_NN_5_8::synapse0x3303240() {
   return (neuron0x32f4e70()*0.022052);
}

double NNfunction_NN_5_8::synapse0x3303280() {
   return (neuron0x32f53d0()*-0.0161988);
}

double NNfunction_NN_5_8::synapse0x3303900() {
   return (neuron0x32f55f0()*-0.0198374);
}

double NNfunction_NN_5_8::synapse0x3303940() {
   return (neuron0x32f5930()*-0.0295953);
}

double NNfunction_NN_5_8::synapse0x3303980() {
   return (neuron0x32f5c70()*0.0116979);
}

double NNfunction_NN_5_8::synapse0x33039c0() {
   return (neuron0x32f5fb0()*0.0103206);
}

double NNfunction_NN_5_8::synapse0x3303a00() {
   return (neuron0x32f62f0()*-0.0397346);
}

double NNfunction_NN_5_8::synapse0x3303a40() {
   return (neuron0x32f6630()*-0.897964);
}

double NNfunction_NN_5_8::synapse0x3303dc0() {
   return (neuron0x32f1a70()*-0.00333289);
}

double NNfunction_NN_5_8::synapse0x3303e00() {
   return (neuron0x32f1db0()*-0.0254583);
}

double NNfunction_NN_5_8::synapse0x3303e40() {
   return (neuron0x32f20f0()*0.225349);
}

double NNfunction_NN_5_8::synapse0x3303e80() {
   return (neuron0x32f2430()*0.187176);
}

double NNfunction_NN_5_8::synapse0x3303ec0() {
   return (neuron0x32f2770()*0.0032263);
}

double NNfunction_NN_5_8::synapse0x3303f00() {
   return (neuron0x32f2ab0()*0.00187953);
}

double NNfunction_NN_5_8::synapse0x3303f40() {
   return (neuron0x32f2df0()*-0.0240761);
}

double NNfunction_NN_5_8::synapse0x3303f80() {
   return (neuron0x32f3130()*-0.00134039);
}

double NNfunction_NN_5_8::synapse0x3303fc0() {
   return (neuron0x32f3470()*-0.00906828);
}

double NNfunction_NN_5_8::synapse0x3304000() {
   return (neuron0x32f37b0()*0.00799662);
}

double NNfunction_NN_5_8::synapse0x3304040() {
   return (neuron0x32f3af0()*0.00112186);
}

double NNfunction_NN_5_8::synapse0x3304080() {
   return (neuron0x32f3e30()*-1.51335);
}

double NNfunction_NN_5_8::synapse0x33040c0() {
   return (neuron0x32f4170()*0.142997);
}

double NNfunction_NN_5_8::synapse0x3304100() {
   return (neuron0x32f44b0()*-0.0244477);
}

double NNfunction_NN_5_8::synapse0x3304140() {
   return (neuron0x32f47f0()*0.0255479);
}

double NNfunction_NN_5_8::synapse0x3304180() {
   return (neuron0x32f4b30()*0.0429222);
}

double NNfunction_NN_5_8::synapse0x3303c10() {
   return (neuron0x32f4e70()*0.0113475);
}

double NNfunction_NN_5_8::synapse0x3303c50() {
   return (neuron0x32f53d0()*0.0378416);
}

double NNfunction_NN_5_8::synapse0x33042d0() {
   return (neuron0x32f55f0()*0.0414257);
}

double NNfunction_NN_5_8::synapse0x3304310() {
   return (neuron0x32f5930()*0.0112831);
}

double NNfunction_NN_5_8::synapse0x3304350() {
   return (neuron0x32f5c70()*0.0296406);
}

double NNfunction_NN_5_8::synapse0x3304390() {
   return (neuron0x32f5fb0()*0.010196);
}

double NNfunction_NN_5_8::synapse0x33043d0() {
   return (neuron0x32f62f0()*-0.00716083);
}

double NNfunction_NN_5_8::synapse0x3304410() {
   return (neuron0x32f6630()*-0.419108);
}

double NNfunction_NN_5_8::synapse0x3304790() {
   return (neuron0x32f1a70()*0.1948);
}

double NNfunction_NN_5_8::synapse0x33047d0() {
   return (neuron0x32f1db0()*-0.113965);
}

double NNfunction_NN_5_8::synapse0x3304810() {
   return (neuron0x32f20f0()*0.00750736);
}

double NNfunction_NN_5_8::synapse0x3304850() {
   return (neuron0x32f2430()*0.207627);
}

double NNfunction_NN_5_8::synapse0x3304890() {
   return (neuron0x32f2770()*-0.23045);
}

double NNfunction_NN_5_8::synapse0x33048d0() {
   return (neuron0x32f2ab0()*0.431548);
}

double NNfunction_NN_5_8::synapse0x3304910() {
   return (neuron0x32f2df0()*-0.344602);
}

double NNfunction_NN_5_8::synapse0x3304950() {
   return (neuron0x32f3130()*-0.209764);
}

double NNfunction_NN_5_8::synapse0x3304990() {
   return (neuron0x32f3470()*-0.68256);
}

double NNfunction_NN_5_8::synapse0x33049d0() {
   return (neuron0x32f37b0()*0.21592);
}

double NNfunction_NN_5_8::synapse0x3304a10() {
   return (neuron0x32f3af0()*0.0581331);
}

double NNfunction_NN_5_8::synapse0x3304a50() {
   return (neuron0x32f3e30()*-0.00178359);
}

double NNfunction_NN_5_8::synapse0x3304a90() {
   return (neuron0x32f4170()*-0.0515827);
}

double NNfunction_NN_5_8::synapse0x3304ad0() {
   return (neuron0x32f44b0()*-0.178927);
}

double NNfunction_NN_5_8::synapse0x3304b10() {
   return (neuron0x32f47f0()*0.12546);
}

double NNfunction_NN_5_8::synapse0x3304b50() {
   return (neuron0x32f4b30()*0.299054);
}

double NNfunction_NN_5_8::synapse0x33045e0() {
   return (neuron0x32f4e70()*-0.0307895);
}

double NNfunction_NN_5_8::synapse0x3304620() {
   return (neuron0x32f53d0()*0.294745);
}

double NNfunction_NN_5_8::synapse0x3304ca0() {
   return (neuron0x32f55f0()*0.295852);
}

double NNfunction_NN_5_8::synapse0x3304ce0() {
   return (neuron0x32f5930()*0.236682);
}

double NNfunction_NN_5_8::synapse0x3304d20() {
   return (neuron0x32f5c70()*0.425692);
}

double NNfunction_NN_5_8::synapse0x3304d60() {
   return (neuron0x32f5fb0()*0.275805);
}

double NNfunction_NN_5_8::synapse0x3304da0() {
   return (neuron0x32f62f0()*0.306297);
}

double NNfunction_NN_5_8::synapse0x3304de0() {
   return (neuron0x32f6630()*0.313649);
}

double NNfunction_NN_5_8::synapse0x3305160() {
   return (neuron0x32f1a70()*-0.298284);
}

double NNfunction_NN_5_8::synapse0x33051a0() {
   return (neuron0x32f1db0()*0.159089);
}

double NNfunction_NN_5_8::synapse0x33051e0() {
   return (neuron0x32f20f0()*0.201876);
}

double NNfunction_NN_5_8::synapse0x3305220() {
   return (neuron0x32f2430()*-0.0427019);
}

double NNfunction_NN_5_8::synapse0x3305260() {
   return (neuron0x32f2770()*0.140867);
}

double NNfunction_NN_5_8::synapse0x33052a0() {
   return (neuron0x32f2ab0()*0.176246);
}

double NNfunction_NN_5_8::synapse0x33052e0() {
   return (neuron0x32f2df0()*-0.325814);
}

double NNfunction_NN_5_8::synapse0x3305320() {
   return (neuron0x32f3130()*-0.235937);
}

double NNfunction_NN_5_8::synapse0x3305360() {
   return (neuron0x32f3470()*0.173354);
}

double NNfunction_NN_5_8::synapse0x32fd520() {
   return (neuron0x32f37b0()*0.510713);
}

double NNfunction_NN_5_8::synapse0x32fd560() {
   return (neuron0x32f3af0()*0.29604);
}

double NNfunction_NN_5_8::synapse0x32fd5a0() {
   return (neuron0x32f3e30()*-0.413951);
}

double NNfunction_NN_5_8::synapse0x32fd5e0() {
   return (neuron0x32f4170()*-0.0828877);
}

double NNfunction_NN_5_8::synapse0x32fd620() {
   return (neuron0x32f44b0()*0.192496);
}

double NNfunction_NN_5_8::synapse0x32fd660() {
   return (neuron0x32f47f0()*0.233271);
}

double NNfunction_NN_5_8::synapse0x32fd6a0() {
   return (neuron0x32f4b30()*0.260385);
}

double NNfunction_NN_5_8::synapse0x3304fb0() {
   return (neuron0x32f4e70()*-0.304501);
}

double NNfunction_NN_5_8::synapse0x3304ff0() {
   return (neuron0x32f53d0()*-0.0952944);
}

double NNfunction_NN_5_8::synapse0x32fd7f0() {
   return (neuron0x32f55f0()*0.17194);
}

double NNfunction_NN_5_8::synapse0x32fd830() {
   return (neuron0x32f5930()*0.135529);
}

double NNfunction_NN_5_8::synapse0x32fd870() {
   return (neuron0x32f5c70()*0.27375);
}

double NNfunction_NN_5_8::synapse0x32fd8b0() {
   return (neuron0x32f5fb0()*-0.164999);
}

double NNfunction_NN_5_8::synapse0x32fd8f0() {
   return (neuron0x32f62f0()*0.0260153);
}

double NNfunction_NN_5_8::synapse0x32fd930() {
   return (neuron0x32f6630()*0.615031);
}

double NNfunction_NN_5_8::synapse0x32fdcb0() {
   return (neuron0x32f1a70()*-0.00646447);
}

double NNfunction_NN_5_8::synapse0x32fdcf0() {
   return (neuron0x32f1db0()*-0.00498629);
}

double NNfunction_NN_5_8::synapse0x32fdd30() {
   return (neuron0x32f20f0()*3.30908);
}

double NNfunction_NN_5_8::synapse0x32fdd70() {
   return (neuron0x32f2430()*0.0216618);
}

double NNfunction_NN_5_8::synapse0x32fddb0() {
   return (neuron0x32f2770()*-0.00813053);
}

double NNfunction_NN_5_8::synapse0x32fddf0() {
   return (neuron0x32f2ab0()*0.00650945);
}

double NNfunction_NN_5_8::synapse0x32fde30() {
   return (neuron0x32f2df0()*0.00403425);
}

double NNfunction_NN_5_8::synapse0x32fde70() {
   return (neuron0x32f3130()*0.00888815);
}

double NNfunction_NN_5_8::synapse0x32fdeb0() {
   return (neuron0x32f3470()*-0.00178559);
}

double NNfunction_NN_5_8::synapse0x32fdef0() {
   return (neuron0x32f37b0()*-0.000634484);
}

double NNfunction_NN_5_8::synapse0x32fdf30() {
   return (neuron0x32f3af0()*0.00427878);
}

double NNfunction_NN_5_8::synapse0x32fdf70() {
   return (neuron0x32f3e30()*0.491585);
}

double NNfunction_NN_5_8::synapse0x32fdfb0() {
   return (neuron0x32f4170()*0.0385704);
}

double NNfunction_NN_5_8::synapse0x32fdff0() {
   return (neuron0x32f44b0()*0.0168864);
}

double NNfunction_NN_5_8::synapse0x32fe030() {
   return (neuron0x32f47f0()*-0.0062178);
}

double NNfunction_NN_5_8::synapse0x32fe070() {
   return (neuron0x32f4b30()*-0.00951462);
}

double NNfunction_NN_5_8::synapse0x32fdb00() {
   return (neuron0x32f4e70()*0.0152509);
}

double NNfunction_NN_5_8::synapse0x32fdb40() {
   return (neuron0x32f53d0()*-0.00294193);
}

double NNfunction_NN_5_8::synapse0x32fe1c0() {
   return (neuron0x32f55f0()*-0.0103551);
}

double NNfunction_NN_5_8::synapse0x32fe200() {
   return (neuron0x32f5930()*0.00420808);
}

double NNfunction_NN_5_8::synapse0x32fe240() {
   return (neuron0x32f5c70()*0.00693169);
}

double NNfunction_NN_5_8::synapse0x32fe280() {
   return (neuron0x32f5fb0()*0.0028139);
}

double NNfunction_NN_5_8::synapse0x32fe2c0() {
   return (neuron0x32f62f0()*0.00149816);
}

double NNfunction_NN_5_8::synapse0x32fe300() {
   return (neuron0x32f6630()*3.3565);
}

double NNfunction_NN_5_8::synapse0x32fe4d0() {
   return (neuron0x32f1a70()*-0.0986208);
}

double NNfunction_NN_5_8::synapse0x3307560() {
   return (neuron0x32f1db0()*-0.00365017);
}

double NNfunction_NN_5_8::synapse0x33075a0() {
   return (neuron0x32f20f0()*0.497683);
}

double NNfunction_NN_5_8::synapse0x33075e0() {
   return (neuron0x32f2430()*0.0621755);
}

double NNfunction_NN_5_8::synapse0x3307620() {
   return (neuron0x32f2770()*0.00816762);
}

double NNfunction_NN_5_8::synapse0x3307660() {
   return (neuron0x32f2ab0()*0.00750771);
}

double NNfunction_NN_5_8::synapse0x33076a0() {
   return (neuron0x32f2df0()*-0.00287427);
}

double NNfunction_NN_5_8::synapse0x33076e0() {
   return (neuron0x32f3130()*0.00177557);
}

double NNfunction_NN_5_8::synapse0x3307720() {
   return (neuron0x32f3470()*-0.014056);
}

double NNfunction_NN_5_8::synapse0x3307760() {
   return (neuron0x32f37b0()*-0.0143136);
}

double NNfunction_NN_5_8::synapse0x33077a0() {
   return (neuron0x32f3af0()*-0.000323482);
}

double NNfunction_NN_5_8::synapse0x33077e0() {
   return (neuron0x32f3e30()*-5.40534);
}

double NNfunction_NN_5_8::synapse0x3307820() {
   return (neuron0x32f4170()*-0.0423058);
}

double NNfunction_NN_5_8::synapse0x3307860() {
   return (neuron0x32f44b0()*0.00367959);
}

double NNfunction_NN_5_8::synapse0x33078a0() {
   return (neuron0x32f47f0()*0.00942156);
}

double NNfunction_NN_5_8::synapse0x33078e0() {
   return (neuron0x32f4b30()*-0.00839067);
}

double NNfunction_NN_5_8::synapse0x33073b0() {
   return (neuron0x32f4e70()*0.00358072);
}

double NNfunction_NN_5_8::synapse0x33073f0() {
   return (neuron0x32f53d0()*-0.0367575);
}

double NNfunction_NN_5_8::synapse0x3307a30() {
   return (neuron0x32f55f0()*-0.0233983);
}

double NNfunction_NN_5_8::synapse0x3307a70() {
   return (neuron0x32f5930()*-0.00417222);
}

double NNfunction_NN_5_8::synapse0x3307ab0() {
   return (neuron0x32f5c70()*0.00587698);
}

double NNfunction_NN_5_8::synapse0x3307af0() {
   return (neuron0x32f5fb0()*0.014171);
}

double NNfunction_NN_5_8::synapse0x3307b30() {
   return (neuron0x32f62f0()*0.0053191);
}

double NNfunction_NN_5_8::synapse0x3307b70() {
   return (neuron0x32f6630()*-2.25533);
}

double NNfunction_NN_5_8::synapse0x3307ef0() {
   return (neuron0x32f1a70()*0.00331132);
}

double NNfunction_NN_5_8::synapse0x3307f30() {
   return (neuron0x32f1db0()*-0.0862997);
}

double NNfunction_NN_5_8::synapse0x3307f70() {
   return (neuron0x32f20f0()*-0.0958135);
}

double NNfunction_NN_5_8::synapse0x3307fb0() {
   return (neuron0x32f2430()*0.267613);
}

double NNfunction_NN_5_8::synapse0x3307ff0() {
   return (neuron0x32f2770()*-0.0321016);
}

double NNfunction_NN_5_8::synapse0x3308030() {
   return (neuron0x32f2ab0()*0.0200073);
}

double NNfunction_NN_5_8::synapse0x3308070() {
   return (neuron0x32f2df0()*-0.0706686);
}

double NNfunction_NN_5_8::synapse0x33080b0() {
   return (neuron0x32f3130()*-0.0128688);
}

double NNfunction_NN_5_8::synapse0x33080f0() {
   return (neuron0x32f3470()*-0.0495064);
}

double NNfunction_NN_5_8::synapse0x3308130() {
   return (neuron0x32f37b0()*0.0567189);
}

double NNfunction_NN_5_8::synapse0x3308170() {
   return (neuron0x32f3af0()*-0.0410933);
}

double NNfunction_NN_5_8::synapse0x33081b0() {
   return (neuron0x32f3e30()*-1.59768);
}

double NNfunction_NN_5_8::synapse0x33081f0() {
   return (neuron0x32f4170()*0.346577);
}

double NNfunction_NN_5_8::synapse0x3308230() {
   return (neuron0x32f44b0()*0.0453299);
}

double NNfunction_NN_5_8::synapse0x3308270() {
   return (neuron0x32f47f0()*-0.0101664);
}

double NNfunction_NN_5_8::synapse0x33082b0() {
   return (neuron0x32f4b30()*0.0625101);
}

double NNfunction_NN_5_8::synapse0x3307d40() {
   return (neuron0x32f4e70()*0.17473);
}

double NNfunction_NN_5_8::synapse0x3307d80() {
   return (neuron0x32f53d0()*0.0623719);
}

double NNfunction_NN_5_8::synapse0x3308400() {
   return (neuron0x32f55f0()*0.139284);
}

double NNfunction_NN_5_8::synapse0x3308440() {
   return (neuron0x32f5930()*0.062858);
}

double NNfunction_NN_5_8::synapse0x3308480() {
   return (neuron0x32f5c70()*0.164058);
}

double NNfunction_NN_5_8::synapse0x33084c0() {
   return (neuron0x32f5fb0()*0.0420461);
}

double NNfunction_NN_5_8::synapse0x3308500() {
   return (neuron0x32f62f0()*-0.0333881);
}

double NNfunction_NN_5_8::synapse0x3308540() {
   return (neuron0x32f6630()*-0.387948);
}

double NNfunction_NN_5_8::synapse0x33088c0() {
   return (neuron0x32f1a70()*0.0793813);
}

double NNfunction_NN_5_8::synapse0x3308900() {
   return (neuron0x32f1db0()*0.0286646);
}

double NNfunction_NN_5_8::synapse0x3308940() {
   return (neuron0x32f20f0()*-0.889237);
}

double NNfunction_NN_5_8::synapse0x3308980() {
   return (neuron0x32f2430()*-0.199742);
}

double NNfunction_NN_5_8::synapse0x33089c0() {
   return (neuron0x32f2770()*-0.0574573);
}

double NNfunction_NN_5_8::synapse0x3308a00() {
   return (neuron0x32f2ab0()*-0.0667862);
}

double NNfunction_NN_5_8::synapse0x3308a40() {
   return (neuron0x32f2df0()*-0.0167259);
}

double NNfunction_NN_5_8::synapse0x3308a80() {
   return (neuron0x32f3130()*-0.0211367);
}

double NNfunction_NN_5_8::synapse0x3308ac0() {
   return (neuron0x32f3470()*0.0130263);
}

double NNfunction_NN_5_8::synapse0x3308b00() {
   return (neuron0x32f37b0()*-0.0690541);
}

double NNfunction_NN_5_8::synapse0x3308b40() {
   return (neuron0x32f3af0()*-0.0591059);
}

double NNfunction_NN_5_8::synapse0x3308b80() {
   return (neuron0x32f3e30()*-0.65078);
}

double NNfunction_NN_5_8::synapse0x3308bc0() {
   return (neuron0x32f4170()*-0.103192);
}

double NNfunction_NN_5_8::synapse0x3308c00() {
   return (neuron0x32f44b0()*0.059584);
}

double NNfunction_NN_5_8::synapse0x3308c40() {
   return (neuron0x32f47f0()*-0.0627513);
}

double NNfunction_NN_5_8::synapse0x3308c80() {
   return (neuron0x32f4b30()*0.0287451);
}

double NNfunction_NN_5_8::synapse0x3308710() {
   return (neuron0x32f4e70()*0.0477044);
}

double NNfunction_NN_5_8::synapse0x3308750() {
   return (neuron0x32f53d0()*-0.05113);
}

double NNfunction_NN_5_8::synapse0x3308dd0() {
   return (neuron0x32f55f0()*0.0600371);
}

double NNfunction_NN_5_8::synapse0x3308e10() {
   return (neuron0x32f5930()*-0.012241);
}

double NNfunction_NN_5_8::synapse0x3308e50() {
   return (neuron0x32f5c70()*-0.129704);
}

double NNfunction_NN_5_8::synapse0x3308e90() {
   return (neuron0x32f5fb0()*-0.0173637);
}

double NNfunction_NN_5_8::synapse0x3308ed0() {
   return (neuron0x32f62f0()*-0.0411828);
}

double NNfunction_NN_5_8::synapse0x3308f10() {
   return (neuron0x32f6630()*0.800547);
}

double NNfunction_NN_5_8::synapse0x3309290() {
   return (neuron0x32f1a70()*-0.27788);
}

double NNfunction_NN_5_8::synapse0x33092d0() {
   return (neuron0x32f1db0()*0.0180555);
}

double NNfunction_NN_5_8::synapse0x3309310() {
   return (neuron0x32f20f0()*-0.910232);
}

double NNfunction_NN_5_8::synapse0x3309350() {
   return (neuron0x32f2430()*0.0387164);
}

double NNfunction_NN_5_8::synapse0x3309390() {
   return (neuron0x32f2770()*-0.0338318);
}

double NNfunction_NN_5_8::synapse0x33093d0() {
   return (neuron0x32f2ab0()*-0.000357853);
}

double NNfunction_NN_5_8::synapse0x3309410() {
   return (neuron0x32f2df0()*-0.0131325);
}

double NNfunction_NN_5_8::synapse0x3309450() {
   return (neuron0x32f3130()*0.0317739);
}

double NNfunction_NN_5_8::synapse0x3309490() {
   return (neuron0x32f3470()*0.0734818);
}

double NNfunction_NN_5_8::synapse0x33094d0() {
   return (neuron0x32f37b0()*0.0594144);
}

double NNfunction_NN_5_8::synapse0x3309510() {
   return (neuron0x32f3af0()*-0.036845);
}

double NNfunction_NN_5_8::synapse0x3309550() {
   return (neuron0x32f3e30()*-0.699371);
}

double NNfunction_NN_5_8::synapse0x3309590() {
   return (neuron0x32f4170()*0.0342682);
}

double NNfunction_NN_5_8::synapse0x33095d0() {
   return (neuron0x32f44b0()*0.0515277);
}

double NNfunction_NN_5_8::synapse0x3309610() {
   return (neuron0x32f47f0()*0.124479);
}

double NNfunction_NN_5_8::synapse0x3309650() {
   return (neuron0x32f4b30()*0.120959);
}

double NNfunction_NN_5_8::synapse0x33090e0() {
   return (neuron0x32f4e70()*-0.10942);
}

double NNfunction_NN_5_8::synapse0x3309120() {
   return (neuron0x32f53d0()*0.00015695);
}

double NNfunction_NN_5_8::synapse0x33097a0() {
   return (neuron0x32f55f0()*0.00502422);
}

double NNfunction_NN_5_8::synapse0x33097e0() {
   return (neuron0x32f5930()*-0.0393452);
}

double NNfunction_NN_5_8::synapse0x3309820() {
   return (neuron0x32f5c70()*-0.0891739);
}

double NNfunction_NN_5_8::synapse0x3309860() {
   return (neuron0x32f5fb0()*-0.0269258);
}

double NNfunction_NN_5_8::synapse0x33098a0() {
   return (neuron0x32f62f0()*-0.0168348);
}

double NNfunction_NN_5_8::synapse0x33098e0() {
   return (neuron0x32f6630()*1.08278);
}

double NNfunction_NN_5_8::synapse0x3309c60() {
   return (neuron0x32f1a70()*-0.321819);
}

double NNfunction_NN_5_8::synapse0x3309ca0() {
   return (neuron0x32f1db0()*0.0133719);
}

double NNfunction_NN_5_8::synapse0x3309ce0() {
   return (neuron0x32f20f0()*-0.337495);
}

double NNfunction_NN_5_8::synapse0x3309d20() {
   return (neuron0x32f2430()*-0.034606);
}

double NNfunction_NN_5_8::synapse0x3309d60() {
   return (neuron0x32f2770()*-0.0084707);
}

double NNfunction_NN_5_8::synapse0x3309da0() {
   return (neuron0x32f2ab0()*0.00972427);
}

double NNfunction_NN_5_8::synapse0x3309de0() {
   return (neuron0x32f2df0()*-0.0155503);
}

double NNfunction_NN_5_8::synapse0x3309e20() {
   return (neuron0x32f3130()*0.0129806);
}

double NNfunction_NN_5_8::synapse0x3309e60() {
   return (neuron0x32f3470()*-0.0447469);
}

double NNfunction_NN_5_8::synapse0x3309ea0() {
   return (neuron0x32f37b0()*-0.00814468);
}

double NNfunction_NN_5_8::synapse0x3309ee0() {
   return (neuron0x32f3af0()*0.0283581);
}

double NNfunction_NN_5_8::synapse0x3309f20() {
   return (neuron0x32f3e30()*-0.02918);
}

double NNfunction_NN_5_8::synapse0x3309f60() {
   return (neuron0x32f4170()*-0.0905102);
}

double NNfunction_NN_5_8::synapse0x3309fa0() {
   return (neuron0x32f44b0()*-0.0133952);
}

double NNfunction_NN_5_8::synapse0x3309fe0() {
   return (neuron0x32f47f0()*-0.0330265);
}

double NNfunction_NN_5_8::synapse0x330a020() {
   return (neuron0x32f4b30()*-0.0144567);
}

double NNfunction_NN_5_8::synapse0x3309ab0() {
   return (neuron0x32f4e70()*0.0426738);
}

double NNfunction_NN_5_8::synapse0x3309af0() {
   return (neuron0x32f53d0()*0.0226063);
}

double NNfunction_NN_5_8::synapse0x330a170() {
   return (neuron0x32f55f0()*0.0036565);
}

double NNfunction_NN_5_8::synapse0x330a1b0() {
   return (neuron0x32f5930()*-0.0147777);
}

double NNfunction_NN_5_8::synapse0x330a1f0() {
   return (neuron0x32f5c70()*0.0592096);
}

double NNfunction_NN_5_8::synapse0x330a230() {
   return (neuron0x32f5fb0()*-0.00665976);
}

double NNfunction_NN_5_8::synapse0x330a270() {
   return (neuron0x32f62f0()*-0.0246617);
}

double NNfunction_NN_5_8::synapse0x330a2b0() {
   return (neuron0x32f6630()*-0.179915);
}

double NNfunction_NN_5_8::synapse0x330a630() {
   return (neuron0x32f1a70()*-0.00717526);
}

double NNfunction_NN_5_8::synapse0x330a670() {
   return (neuron0x32f1db0()*2.6655e-06);
}

double NNfunction_NN_5_8::synapse0x330a6b0() {
   return (neuron0x32f20f0()*0.964066);
}

double NNfunction_NN_5_8::synapse0x330a6f0() {
   return (neuron0x32f2430()*-0.0393142);
}

double NNfunction_NN_5_8::synapse0x330a730() {
   return (neuron0x32f2770()*-0.00629578);
}

double NNfunction_NN_5_8::synapse0x330a770() {
   return (neuron0x32f2ab0()*-0.00203909);
}

double NNfunction_NN_5_8::synapse0x330a7b0() {
   return (neuron0x32f2df0()*0.0117671);
}

double NNfunction_NN_5_8::synapse0x330a7f0() {
   return (neuron0x32f3130()*0.00552953);
}

double NNfunction_NN_5_8::synapse0x330a830() {
   return (neuron0x32f3470()*0.0145665);
}

double NNfunction_NN_5_8::synapse0x330a870() {
   return (neuron0x32f37b0()*0.00518951);
}

double NNfunction_NN_5_8::synapse0x330a8b0() {
   return (neuron0x32f3af0()*-0.0053823);
}

double NNfunction_NN_5_8::synapse0x330a8f0() {
   return (neuron0x32f3e30()*0.238525);
}

double NNfunction_NN_5_8::synapse0x330a930() {
   return (neuron0x32f4170()*0.00584332);
}

double NNfunction_NN_5_8::synapse0x330a970() {
   return (neuron0x32f44b0()*0.0231145);
}

double NNfunction_NN_5_8::synapse0x330a9b0() {
   return (neuron0x32f47f0()*-0.000650756);
}

double NNfunction_NN_5_8::synapse0x330a9f0() {
   return (neuron0x32f4b30()*0.0189461);
}

double NNfunction_NN_5_8::synapse0x330a480() {
   return (neuron0x32f4e70()*0.00647468);
}

double NNfunction_NN_5_8::synapse0x330a4c0() {
   return (neuron0x32f53d0()*-0.00381105);
}

double NNfunction_NN_5_8::synapse0x330ab40() {
   return (neuron0x32f55f0()*0.000918446);
}

double NNfunction_NN_5_8::synapse0x330ab80() {
   return (neuron0x32f5930()*0.00463982);
}

double NNfunction_NN_5_8::synapse0x330abc0() {
   return (neuron0x32f5c70()*-0.00535739);
}

double NNfunction_NN_5_8::synapse0x330ac00() {
   return (neuron0x32f5fb0()*-0.0072708);
}

double NNfunction_NN_5_8::synapse0x330ac40() {
   return (neuron0x32f62f0()*0.00801381);
}

double NNfunction_NN_5_8::synapse0x330ac80() {
   return (neuron0x32f6630()*-0.324555);
}

double NNfunction_NN_5_8::synapse0x330b000() {
   return (neuron0x32f1a70()*-0.209271);
}

double NNfunction_NN_5_8::synapse0x330b040() {
   return (neuron0x32f1db0()*-0.252047);
}

double NNfunction_NN_5_8::synapse0x330b080() {
   return (neuron0x32f20f0()*0.765293);
}

double NNfunction_NN_5_8::synapse0x330b0c0() {
   return (neuron0x32f2430()*0.216426);
}

double NNfunction_NN_5_8::synapse0x330b100() {
   return (neuron0x32f2770()*0.191753);
}

double NNfunction_NN_5_8::synapse0x330b140() {
   return (neuron0x32f2ab0()*0.0370747);
}

double NNfunction_NN_5_8::synapse0x330b180() {
   return (neuron0x32f2df0()*-0.27723);
}

double NNfunction_NN_5_8::synapse0x330b1c0() {
   return (neuron0x32f3130()*0.0864573);
}

double NNfunction_NN_5_8::synapse0x330b200() {
   return (neuron0x32f3470()*-0.0576334);
}

double NNfunction_NN_5_8::synapse0x330b240() {
   return (neuron0x32f37b0()*0.0672277);
}

double NNfunction_NN_5_8::synapse0x330b280() {
   return (neuron0x32f3af0()*-0.268741);
}

double NNfunction_NN_5_8::synapse0x330b2c0() {
   return (neuron0x32f3e30()*0.0599774);
}

double NNfunction_NN_5_8::synapse0x330b300() {
   return (neuron0x32f4170()*0.100175);
}

double NNfunction_NN_5_8::synapse0x330b340() {
   return (neuron0x32f44b0()*0.0128569);
}

double NNfunction_NN_5_8::synapse0x330b380() {
   return (neuron0x32f47f0()*0.538084);
}

double NNfunction_NN_5_8::synapse0x330b3c0() {
   return (neuron0x32f4b30()*-0.328151);
}

double NNfunction_NN_5_8::synapse0x330ae50() {
   return (neuron0x32f4e70()*0.431326);
}

double NNfunction_NN_5_8::synapse0x330ae90() {
   return (neuron0x32f53d0()*0.191818);
}

double NNfunction_NN_5_8::synapse0x330b510() {
   return (neuron0x32f55f0()*-0.139151);
}

double NNfunction_NN_5_8::synapse0x330b550() {
   return (neuron0x32f5930()*-0.258143);
}

double NNfunction_NN_5_8::synapse0x330b590() {
   return (neuron0x32f5c70()*-0.170364);
}

double NNfunction_NN_5_8::synapse0x330b5d0() {
   return (neuron0x32f5fb0()*0.177378);
}

double NNfunction_NN_5_8::synapse0x330b610() {
   return (neuron0x32f62f0()*-0.0541795);
}

double NNfunction_NN_5_8::synapse0x330b650() {
   return (neuron0x32f6630()*0.0920498);
}

double NNfunction_NN_5_8::synapse0x330b9d0() {
   return (neuron0x32f1a70()*0.0289812);
}

double NNfunction_NN_5_8::synapse0x330ba10() {
   return (neuron0x32f1db0()*-0.0153737);
}

double NNfunction_NN_5_8::synapse0x330ba50() {
   return (neuron0x32f20f0()*-2.79398);
}

double NNfunction_NN_5_8::synapse0x330ba90() {
   return (neuron0x32f2430()*0.0113529);
}

double NNfunction_NN_5_8::synapse0x330bad0() {
   return (neuron0x32f2770()*-0.00755989);
}

double NNfunction_NN_5_8::synapse0x330bb10() {
   return (neuron0x32f2ab0()*-0.0127867);
}

double NNfunction_NN_5_8::synapse0x330bb50() {
   return (neuron0x32f2df0()*-0.0163987);
}

double NNfunction_NN_5_8::synapse0x330bb90() {
   return (neuron0x32f3130()*-0.0153369);
}

double NNfunction_NN_5_8::synapse0x330bbd0() {
   return (neuron0x32f3470()*0.0252404);
}

double NNfunction_NN_5_8::synapse0x330bc10() {
   return (neuron0x32f37b0()*0.012052);
}

double NNfunction_NN_5_8::synapse0x330bc50() {
   return (neuron0x32f3af0()*-0.0120398);
}

double NNfunction_NN_5_8::synapse0x330bc90() {
   return (neuron0x32f3e30()*-0.104087);
}

double NNfunction_NN_5_8::synapse0x330bcd0() {
   return (neuron0x32f4170()*0.00691273);
}

double NNfunction_NN_5_8::synapse0x330bd10() {
   return (neuron0x32f44b0()*0.0169192);
}

double NNfunction_NN_5_8::synapse0x330bd50() {
   return (neuron0x32f47f0()*0.00680342);
}

double NNfunction_NN_5_8::synapse0x330bd90() {
   return (neuron0x32f4b30()*0.0034747);
}

double NNfunction_NN_5_8::synapse0x330b820() {
   return (neuron0x32f4e70()*0.000267577);
}

double NNfunction_NN_5_8::synapse0x330b860() {
   return (neuron0x32f53d0()*-0.0254612);
}

double NNfunction_NN_5_8::synapse0x330bee0() {
   return (neuron0x32f55f0()*0.0242334);
}

double NNfunction_NN_5_8::synapse0x330bf20() {
   return (neuron0x32f5930()*0.00805117);
}

double NNfunction_NN_5_8::synapse0x330bf60() {
   return (neuron0x32f5c70()*-0.00802412);
}

double NNfunction_NN_5_8::synapse0x330bfa0() {
   return (neuron0x32f5fb0()*0.0260441);
}

double NNfunction_NN_5_8::synapse0x330bfe0() {
   return (neuron0x32f62f0()*0.00251849);
}

double NNfunction_NN_5_8::synapse0x330c020() {
   return (neuron0x32f6630()*-10.2784);
}

double NNfunction_NN_5_8::synapse0x330c3a0() {
   return (neuron0x32f1a70()*0.0291876);
}

double NNfunction_NN_5_8::synapse0x3300970() {
   return (neuron0x32f1db0()*-0.0832911);
}

double NNfunction_NN_5_8::synapse0x33009b0() {
   return (neuron0x32f20f0()*0.497054);
}

double NNfunction_NN_5_8::synapse0x33009f0() {
   return (neuron0x32f2430()*-0.0306723);
}

double NNfunction_NN_5_8::synapse0x3300c40() {
   return (neuron0x32f2770()*0.00377716);
}

double NNfunction_NN_5_8::synapse0x3300c80() {
   return (neuron0x32f2ab0()*0.075401);
}

double NNfunction_NN_5_8::synapse0x3300cc0() {
   return (neuron0x32f2df0()*-0.00946045);
}

double NNfunction_NN_5_8::synapse0x3300f10() {
   return (neuron0x32f3130()*0.162619);
}

double NNfunction_NN_5_8::synapse0x3300f50() {
   return (neuron0x32f3470()*0.0408808);
}

double NNfunction_NN_5_8::synapse0x33011a0() {
   return (neuron0x32f37b0()*0.0548383);
}

double NNfunction_NN_5_8::synapse0x33011e0() {
   return (neuron0x32f3af0()*-0.052991);
}

double NNfunction_NN_5_8::synapse0x3301220() {
   return (neuron0x32f3e30()*-0.394114);
}

double NNfunction_NN_5_8::synapse0x3301470() {
   return (neuron0x32f4170()*-0.355009);
}

double NNfunction_NN_5_8::synapse0x33014b0() {
   return (neuron0x32f44b0()*0.112609);
}

double NNfunction_NN_5_8::synapse0x3301700() {
   return (neuron0x32f47f0()*-0.237443);
}

double NNfunction_NN_5_8::synapse0x3301740() {
   return (neuron0x32f4b30()*-0.26447);
}

double NNfunction_NN_5_8::synapse0x330c1f0() {
   return (neuron0x32f4e70()*0.139485);
}

double NNfunction_NN_5_8::synapse0x330c230() {
   return (neuron0x32f53d0()*-0.289878);
}

double NNfunction_NN_5_8::synapse0x3301890() {
   return (neuron0x32f55f0()*-0.312309);
}

double NNfunction_NN_5_8::synapse0x3301da0() {
   return (neuron0x32f5930()*0.0339738);
}

double NNfunction_NN_5_8::synapse0x3301de0() {
   return (neuron0x32f5c70()*-0.0243602);
}

double NNfunction_NN_5_8::synapse0x3301e20() {
   return (neuron0x32f5fb0()*0.0322859);
}

double NNfunction_NN_5_8::synapse0x3302070() {
   return (neuron0x32f62f0()*0.0256902);
}

double NNfunction_NN_5_8::synapse0x33020b0() {
   return (neuron0x32f6630()*-1.47393);
}

double NNfunction_NN_5_8::synapse0x3301960() {
   return (neuron0x32f1a70()*-0.0636814);
}

double NNfunction_NN_5_8::synapse0x33019a0() {
   return (neuron0x32f1db0()*-0.0162982);
}

double NNfunction_NN_5_8::synapse0x33019e0() {
   return (neuron0x32f20f0()*-2.40246);
}

double NNfunction_NN_5_8::synapse0x3301a20() {
   return (neuron0x32f2430()*-0.0470109);
}

double NNfunction_NN_5_8::synapse0x33023a0() {
   return (neuron0x32f2770()*0.00889626);
}

double NNfunction_NN_5_8::synapse0x330e6f0() {
   return (neuron0x32f2ab0()*0.0124341);
}

double NNfunction_NN_5_8::synapse0x330e730() {
   return (neuron0x32f2df0()*-0.0276304);
}

double NNfunction_NN_5_8::synapse0x330e770() {
   return (neuron0x32f3130()*-0.00269758);
}

double NNfunction_NN_5_8::synapse0x330e7b0() {
   return (neuron0x32f3470()*-0.0329715);
}

double NNfunction_NN_5_8::synapse0x330e7f0() {
   return (neuron0x32f37b0()*-0.0401261);
}

double NNfunction_NN_5_8::synapse0x330e830() {
   return (neuron0x32f3af0()*0.0111992);
}

double NNfunction_NN_5_8::synapse0x330e870() {
   return (neuron0x32f3e30()*-2.22428);
}

double NNfunction_NN_5_8::synapse0x330e8b0() {
   return (neuron0x32f4170()*-0.0212502);
}

double NNfunction_NN_5_8::synapse0x330e8f0() {
   return (neuron0x32f44b0()*0.0111751);
}

double NNfunction_NN_5_8::synapse0x330e930() {
   return (neuron0x32f47f0()*-0.00762484);
}

double NNfunction_NN_5_8::synapse0x330e970() {
   return (neuron0x32f4b30()*0.0159127);
}

double NNfunction_NN_5_8::synapse0x3302280() {
   return (neuron0x32f4e70()*0.0177882);
}

double NNfunction_NN_5_8::synapse0x33022c0() {
   return (neuron0x32f53d0()*-0.0196764);
}

double NNfunction_NN_5_8::synapse0x330eac0() {
   return (neuron0x32f55f0()*0.0131969);
}

double NNfunction_NN_5_8::synapse0x330eb00() {
   return (neuron0x32f5930()*0.0371123);
}

double NNfunction_NN_5_8::synapse0x330eb40() {
   return (neuron0x32f5c70()*0.0260698);
}

double NNfunction_NN_5_8::synapse0x330eb80() {
   return (neuron0x32f5fb0()*0.0307364);
}

double NNfunction_NN_5_8::synapse0x330ebc0() {
   return (neuron0x32f62f0()*-0.0314303);
}

double NNfunction_NN_5_8::synapse0x330ec00() {
   return (neuron0x32f6630()*0.528122);
}

double NNfunction_NN_5_8::synapse0x330ef80() {
   return (neuron0x32f1a70()*-0.019057);
}

double NNfunction_NN_5_8::synapse0x330efc0() {
   return (neuron0x32f1db0()*-0.000668759);
}

double NNfunction_NN_5_8::synapse0x330f000() {
   return (neuron0x32f20f0()*0.663817);
}

double NNfunction_NN_5_8::synapse0x330f040() {
   return (neuron0x32f2430()*-0.0241619);
}

double NNfunction_NN_5_8::synapse0x330f080() {
   return (neuron0x32f2770()*0.000548842);
}

double NNfunction_NN_5_8::synapse0x330f0c0() {
   return (neuron0x32f2ab0()*-0.0215809);
}

double NNfunction_NN_5_8::synapse0x330f100() {
   return (neuron0x32f2df0()*0.0352401);
}

double NNfunction_NN_5_8::synapse0x330f140() {
   return (neuron0x32f3130()*-0.011044);
}

double NNfunction_NN_5_8::synapse0x330f180() {
   return (neuron0x32f3470()*0.033791);
}

double NNfunction_NN_5_8::synapse0x330f1c0() {
   return (neuron0x32f37b0()*0.00571732);
}

double NNfunction_NN_5_8::synapse0x330f200() {
   return (neuron0x32f3af0()*-0.00955369);
}

double NNfunction_NN_5_8::synapse0x330f240() {
   return (neuron0x32f3e30()*-1.56624);
}

double NNfunction_NN_5_8::synapse0x330f280() {
   return (neuron0x32f4170()*0.0806884);
}

double NNfunction_NN_5_8::synapse0x330f2c0() {
   return (neuron0x32f44b0()*-0.0126353);
}

double NNfunction_NN_5_8::synapse0x330f300() {
   return (neuron0x32f47f0()*0.0141767);
}

double NNfunction_NN_5_8::synapse0x330f340() {
   return (neuron0x32f4b30()*-0.0378008);
}

double NNfunction_NN_5_8::synapse0x330edd0() {
   return (neuron0x32f4e70()*-0.0111323);
}

double NNfunction_NN_5_8::synapse0x330ee10() {
   return (neuron0x32f53d0()*-0.0286995);
}

double NNfunction_NN_5_8::synapse0x330f490() {
   return (neuron0x32f55f0()*-0.0221653);
}

double NNfunction_NN_5_8::synapse0x330f4d0() {
   return (neuron0x32f5930()*-0.0439712);
}

double NNfunction_NN_5_8::synapse0x330f510() {
   return (neuron0x32f5c70()*-0.023271);
}

double NNfunction_NN_5_8::synapse0x330f550() {
   return (neuron0x32f5fb0()*-0.0108798);
}

double NNfunction_NN_5_8::synapse0x330f590() {
   return (neuron0x32f62f0()*0.00358439);
}

double NNfunction_NN_5_8::synapse0x330f5d0() {
   return (neuron0x32f6630()*0.799228);
}

double NNfunction_NN_5_8::synapse0x330f950() {
   return (neuron0x32f1a70()*0.0197402);
}

double NNfunction_NN_5_8::synapse0x330f990() {
   return (neuron0x32f1db0()*0.00214178);
}

double NNfunction_NN_5_8::synapse0x330f9d0() {
   return (neuron0x32f20f0()*0.232211);
}

double NNfunction_NN_5_8::synapse0x330fa10() {
   return (neuron0x32f2430()*0.0468205);
}

double NNfunction_NN_5_8::synapse0x330fa50() {
   return (neuron0x32f2770()*0.00536651);
}

double NNfunction_NN_5_8::synapse0x330fa90() {
   return (neuron0x32f2ab0()*0.0061698);
}

double NNfunction_NN_5_8::synapse0x330fad0() {
   return (neuron0x32f2df0()*-0.00701878);
}

double NNfunction_NN_5_8::synapse0x330fb10() {
   return (neuron0x32f3130()*0.013554);
}

double NNfunction_NN_5_8::synapse0x330fb50() {
   return (neuron0x32f3470()*-0.00310011);
}

double NNfunction_NN_5_8::synapse0x330fb90() {
   return (neuron0x32f37b0()*0.0059753);
}

double NNfunction_NN_5_8::synapse0x330fbd0() {
   return (neuron0x32f3af0()*-0.00318257);
}

double NNfunction_NN_5_8::synapse0x330fc10() {
   return (neuron0x32f3e30()*1.06148);
}

double NNfunction_NN_5_8::synapse0x330fc50() {
   return (neuron0x32f4170()*-0.0234553);
}

double NNfunction_NN_5_8::synapse0x330fc90() {
   return (neuron0x32f44b0()*0.0260594);
}

double NNfunction_NN_5_8::synapse0x330fcd0() {
   return (neuron0x32f47f0()*-0.00247598);
}

double NNfunction_NN_5_8::synapse0x330fd10() {
   return (neuron0x32f4b30()*-0.00967608);
}

double NNfunction_NN_5_8::synapse0x330f7a0() {
   return (neuron0x32f4e70()*0.0429407);
}

double NNfunction_NN_5_8::synapse0x330f7e0() {
   return (neuron0x32f53d0()*0.00368499);
}

double NNfunction_NN_5_8::synapse0x330fe60() {
   return (neuron0x32f55f0()*0.0143111);
}

double NNfunction_NN_5_8::synapse0x330fea0() {
   return (neuron0x32f5930()*-0.00378322);
}

double NNfunction_NN_5_8::synapse0x330fee0() {
   return (neuron0x32f5c70()*0.0131892);
}

double NNfunction_NN_5_8::synapse0x330ff20() {
   return (neuron0x32f5fb0()*-0.0158135);
}

double NNfunction_NN_5_8::synapse0x330ff60() {
   return (neuron0x32f62f0()*-0.0149057);
}

double NNfunction_NN_5_8::synapse0x330ffa0() {
   return (neuron0x32f6630()*0.70207);
}

double NNfunction_NN_5_8::synapse0x3310320() {
   return (neuron0x32f1a70()*-0.015594);
}

double NNfunction_NN_5_8::synapse0x3310360() {
   return (neuron0x32f1db0()*0.00738969);
}

double NNfunction_NN_5_8::synapse0x33103a0() {
   return (neuron0x32f20f0()*0.0284454);
}

double NNfunction_NN_5_8::synapse0x33103e0() {
   return (neuron0x32f2430()*-2.20664);
}

double NNfunction_NN_5_8::synapse0x3310420() {
   return (neuron0x32f2770()*-7.74072e-05);
}

double NNfunction_NN_5_8::synapse0x3310460() {
   return (neuron0x32f2ab0()*-0.0022638);
}

double NNfunction_NN_5_8::synapse0x33104a0() {
   return (neuron0x32f2df0()*-0.0267886);
}

double NNfunction_NN_5_8::synapse0x33104e0() {
   return (neuron0x32f3130()*-0.0180586);
}

double NNfunction_NN_5_8::synapse0x3310520() {
   return (neuron0x32f3470()*-0.000215967);
}

double NNfunction_NN_5_8::synapse0x3310560() {
   return (neuron0x32f37b0()*0.00964647);
}

double NNfunction_NN_5_8::synapse0x33105a0() {
   return (neuron0x32f3af0()*0.0218047);
}

double NNfunction_NN_5_8::synapse0x33105e0() {
   return (neuron0x32f3e30()*0.401735);
}

double NNfunction_NN_5_8::synapse0x3310620() {
   return (neuron0x32f4170()*0.00709923);
}

double NNfunction_NN_5_8::synapse0x3310660() {
   return (neuron0x32f44b0()*0.0716611);
}

double NNfunction_NN_5_8::synapse0x33106a0() {
   return (neuron0x32f47f0()*-0.0178913);
}

double NNfunction_NN_5_8::synapse0x33106e0() {
   return (neuron0x32f4b30()*-0.0341228);
}

double NNfunction_NN_5_8::synapse0x3310170() {
   return (neuron0x32f4e70()*0.0914327);
}

double NNfunction_NN_5_8::synapse0x33101b0() {
   return (neuron0x32f53d0()*-0.0095317);
}

double NNfunction_NN_5_8::synapse0x3310830() {
   return (neuron0x32f55f0()*-0.000283846);
}

double NNfunction_NN_5_8::synapse0x3310870() {
   return (neuron0x32f5930()*0.00415531);
}

double NNfunction_NN_5_8::synapse0x33108b0() {
   return (neuron0x32f5c70()*-0.0125603);
}

double NNfunction_NN_5_8::synapse0x33108f0() {
   return (neuron0x32f5fb0()*0.0124697);
}

double NNfunction_NN_5_8::synapse0x3310930() {
   return (neuron0x32f62f0()*0.0019132);
}

double NNfunction_NN_5_8::synapse0x3310970() {
   return (neuron0x32f6630()*-0.160374);
}

double NNfunction_NN_5_8::synapse0x3310cf0() {
   return (neuron0x32f1a70()*0.066907);
}

double NNfunction_NN_5_8::synapse0x3310d30() {
   return (neuron0x32f1db0()*0.00308217);
}

double NNfunction_NN_5_8::synapse0x3310d70() {
   return (neuron0x32f20f0()*1.29984);
}

double NNfunction_NN_5_8::synapse0x3310db0() {
   return (neuron0x32f2430()*-0.0210063);
}

double NNfunction_NN_5_8::synapse0x3310df0() {
   return (neuron0x32f2770()*0.00821876);
}

double NNfunction_NN_5_8::synapse0x3310e30() {
   return (neuron0x32f2ab0()*-0.00283134);
}

double NNfunction_NN_5_8::synapse0x3310e70() {
   return (neuron0x32f2df0()*0.011041);
}

double NNfunction_NN_5_8::synapse0x3310eb0() {
   return (neuron0x32f3130()*0.00444049);
}

double NNfunction_NN_5_8::synapse0x3310ef0() {
   return (neuron0x32f3470()*0.0052668);
}

double NNfunction_NN_5_8::synapse0x3310f30() {
   return (neuron0x32f37b0()*-0.00357889);
}

double NNfunction_NN_5_8::synapse0x3310f70() {
   return (neuron0x32f3af0()*-0.00422127);
}

double NNfunction_NN_5_8::synapse0x3310fb0() {
   return (neuron0x32f3e30()*1.02958);
}

double NNfunction_NN_5_8::synapse0x3310ff0() {
   return (neuron0x32f4170()*0.0200332);
}

double NNfunction_NN_5_8::synapse0x3311030() {
   return (neuron0x32f44b0()*-0.0129228);
}

double NNfunction_NN_5_8::synapse0x3311070() {
   return (neuron0x32f47f0()*0.00846744);
}

double NNfunction_NN_5_8::synapse0x33110b0() {
   return (neuron0x32f4b30()*-0.00662411);
}

double NNfunction_NN_5_8::synapse0x3310b40() {
   return (neuron0x32f4e70()*-0.0231896);
}

double NNfunction_NN_5_8::synapse0x3310b80() {
   return (neuron0x32f53d0()*0.00330394);
}

double NNfunction_NN_5_8::synapse0x3311200() {
   return (neuron0x32f55f0()*-0.00294053);
}

double NNfunction_NN_5_8::synapse0x3311240() {
   return (neuron0x32f5930()*-0.0114306);
}

double NNfunction_NN_5_8::synapse0x3311280() {
   return (neuron0x32f5c70()*-0.0234476);
}

double NNfunction_NN_5_8::synapse0x33112c0() {
   return (neuron0x32f5fb0()*-0.010067);
}

double NNfunction_NN_5_8::synapse0x3311300() {
   return (neuron0x32f62f0()*0.0033306);
}

double NNfunction_NN_5_8::synapse0x3311340() {
   return (neuron0x32f6630()*0.948531);
}

double NNfunction_NN_5_8::synapse0x33116c0() {
   return (neuron0x32f1a70()*0.147354);
}

double NNfunction_NN_5_8::synapse0x3311700() {
   return (neuron0x32f1db0()*-0.0938632);
}

double NNfunction_NN_5_8::synapse0x3311740() {
   return (neuron0x32f20f0()*-0.84598);
}

double NNfunction_NN_5_8::synapse0x3311780() {
   return (neuron0x32f2430()*-0.440784);
}

double NNfunction_NN_5_8::synapse0x33117c0() {
   return (neuron0x32f2770()*-0.228989);
}

double NNfunction_NN_5_8::synapse0x3311800() {
   return (neuron0x32f2ab0()*0.0344828);
}

double NNfunction_NN_5_8::synapse0x3311840() {
   return (neuron0x32f2df0()*-0.0470513);
}

double NNfunction_NN_5_8::synapse0x3311880() {
   return (neuron0x32f3130()*-0.0888508);
}

double NNfunction_NN_5_8::synapse0x33118c0() {
   return (neuron0x32f3470()*0.101619);
}

double NNfunction_NN_5_8::synapse0x3311900() {
   return (neuron0x32f37b0()*-0.189588);
}

double NNfunction_NN_5_8::synapse0x3311940() {
   return (neuron0x32f3af0()*0.166083);
}

double NNfunction_NN_5_8::synapse0x3311980() {
   return (neuron0x32f3e30()*-0.108322);
}

double NNfunction_NN_5_8::synapse0x33119c0() {
   return (neuron0x32f4170()*0.116702);
}

double NNfunction_NN_5_8::synapse0x3311a00() {
   return (neuron0x32f44b0()*-0.256609);
}

double NNfunction_NN_5_8::synapse0x3311a40() {
   return (neuron0x32f47f0()*0.129959);
}

double NNfunction_NN_5_8::synapse0x3311a80() {
   return (neuron0x32f4b30()*0.0337779);
}

double NNfunction_NN_5_8::synapse0x3311510() {
   return (neuron0x32f4e70()*-0.241627);
}

double NNfunction_NN_5_8::synapse0x3311550() {
   return (neuron0x32f53d0()*0.0593406);
}

double NNfunction_NN_5_8::synapse0x3311bd0() {
   return (neuron0x32f55f0()*0.0067621);
}

double NNfunction_NN_5_8::synapse0x3311c10() {
   return (neuron0x32f5930()*0.229721);
}

double NNfunction_NN_5_8::synapse0x3311c50() {
   return (neuron0x32f5c70()*0.040817);
}

double NNfunction_NN_5_8::synapse0x3311c90() {
   return (neuron0x32f5fb0()*0.120469);
}

double NNfunction_NN_5_8::synapse0x3311cd0() {
   return (neuron0x32f62f0()*-0.0101813);
}

double NNfunction_NN_5_8::synapse0x3311d10() {
   return (neuron0x32f6630()*-0.787112);
}

double NNfunction_NN_5_8::synapse0x3312090() {
   return (neuron0x32f1a70()*0.0202878);
}

double NNfunction_NN_5_8::synapse0x33120d0() {
   return (neuron0x32f1db0()*-0.00324298);
}

double NNfunction_NN_5_8::synapse0x3312110() {
   return (neuron0x32f20f0()*-2.33834);
}

double NNfunction_NN_5_8::synapse0x3312150() {
   return (neuron0x32f2430()*0.010638);
}

double NNfunction_NN_5_8::synapse0x3312190() {
   return (neuron0x32f2770()*-0.0245589);
}

double NNfunction_NN_5_8::synapse0x33121d0() {
   return (neuron0x32f2ab0()*0.020512);
}

double NNfunction_NN_5_8::synapse0x3312210() {
   return (neuron0x32f2df0()*0.00565499);
}

double NNfunction_NN_5_8::synapse0x3312250() {
   return (neuron0x32f3130()*-0.013016);
}

double NNfunction_NN_5_8::synapse0x3312290() {
   return (neuron0x32f3470()*-0.0176982);
}

double NNfunction_NN_5_8::synapse0x33122d0() {
   return (neuron0x32f37b0()*-0.00924256);
}

double NNfunction_NN_5_8::synapse0x3312310() {
   return (neuron0x32f3af0()*0.0113004);
}

double NNfunction_NN_5_8::synapse0x3312350() {
   return (neuron0x32f3e30()*-0.270556);
}

double NNfunction_NN_5_8::synapse0x3312390() {
   return (neuron0x32f4170()*-0.00698168);
}

double NNfunction_NN_5_8::synapse0x33123d0() {
   return (neuron0x32f44b0()*-0.0224591);
}

double NNfunction_NN_5_8::synapse0x3312410() {
   return (neuron0x32f47f0()*-0.00987244);
}

double NNfunction_NN_5_8::synapse0x3312450() {
   return (neuron0x32f4b30()*0.0116214);
}

double NNfunction_NN_5_8::synapse0x3311ee0() {
   return (neuron0x32f4e70()*-0.019713);
}

double NNfunction_NN_5_8::synapse0x3311f20() {
   return (neuron0x32f53d0()*-0.00396157);
}

double NNfunction_NN_5_8::synapse0x33125a0() {
   return (neuron0x32f55f0()*-0.0121671);
}

double NNfunction_NN_5_8::synapse0x33125e0() {
   return (neuron0x32f5930()*0.000980808);
}

double NNfunction_NN_5_8::synapse0x3312620() {
   return (neuron0x32f5c70()*0.0142774);
}

double NNfunction_NN_5_8::synapse0x3312660() {
   return (neuron0x32f5fb0()*-0.00980685);
}

double NNfunction_NN_5_8::synapse0x33126a0() {
   return (neuron0x32f62f0()*0.00832303);
}

double NNfunction_NN_5_8::synapse0x33126e0() {
   return (neuron0x32f6630()*3.62017);
}

double NNfunction_NN_5_8::synapse0x3312a60() {
   return (neuron0x32f1a70()*0.00359877);
}

double NNfunction_NN_5_8::synapse0x3312aa0() {
   return (neuron0x32f1db0()*0.0104864);
}

double NNfunction_NN_5_8::synapse0x3312ae0() {
   return (neuron0x32f20f0()*0.645082);
}

double NNfunction_NN_5_8::synapse0x3312b20() {
   return (neuron0x32f2430()*-0.0088818);
}

double NNfunction_NN_5_8::synapse0x3312b60() {
   return (neuron0x32f2770()*0.0089551);
}

double NNfunction_NN_5_8::synapse0x3312ba0() {
   return (neuron0x32f2ab0()*0.00434735);
}

double NNfunction_NN_5_8::synapse0x3312be0() {
   return (neuron0x32f2df0()*0.0133967);
}

double NNfunction_NN_5_8::synapse0x3312c20() {
   return (neuron0x32f3130()*0.000592241);
}

double NNfunction_NN_5_8::synapse0x3312c60() {
   return (neuron0x32f3470()*0.0152636);
}

double NNfunction_NN_5_8::synapse0x3312ca0() {
   return (neuron0x32f37b0()*0.00743144);
}

double NNfunction_NN_5_8::synapse0x3312ce0() {
   return (neuron0x32f3af0()*0.0036162);
}

double NNfunction_NN_5_8::synapse0x3312d20() {
   return (neuron0x32f3e30()*-4.81271);
}

double NNfunction_NN_5_8::synapse0x3312d60() {
   return (neuron0x32f4170()*0.00535561);
}

double NNfunction_NN_5_8::synapse0x3312da0() {
   return (neuron0x32f44b0()*0.00132729);
}

double NNfunction_NN_5_8::synapse0x3312de0() {
   return (neuron0x32f47f0()*0.014362);
}

double NNfunction_NN_5_8::synapse0x3312e20() {
   return (neuron0x32f4b30()*-0.0103644);
}

double NNfunction_NN_5_8::synapse0x33128b0() {
   return (neuron0x32f4e70()*-0.0224299);
}

double NNfunction_NN_5_8::synapse0x33128f0() {
   return (neuron0x32f53d0()*-0.00357119);
}

double NNfunction_NN_5_8::synapse0x3312f70() {
   return (neuron0x32f55f0()*0.017828);
}

double NNfunction_NN_5_8::synapse0x3312fb0() {
   return (neuron0x32f5930()*-0.00734933);
}

double NNfunction_NN_5_8::synapse0x3312ff0() {
   return (neuron0x32f5c70()*-0.0135036);
}

double NNfunction_NN_5_8::synapse0x3313030() {
   return (neuron0x32f5fb0()*-0.00384618);
}

double NNfunction_NN_5_8::synapse0x3313070() {
   return (neuron0x32f62f0()*-0.00900008);
}

double NNfunction_NN_5_8::synapse0x33130b0() {
   return (neuron0x32f6630()*1.03377);
}

double NNfunction_NN_5_8::synapse0x32fbb60() {
   return (neuron0x32f1a70()*0.0221483);
}

double NNfunction_NN_5_8::synapse0x32fbba0() {
   return (neuron0x32f1db0()*-0.00161554);
}

double NNfunction_NN_5_8::synapse0x32fbbe0() {
   return (neuron0x32f20f0()*-1.77932);
}

double NNfunction_NN_5_8::synapse0x32fbc20() {
   return (neuron0x32f2430()*0.079732);
}

double NNfunction_NN_5_8::synapse0x32fbc60() {
   return (neuron0x32f2770()*0.00718935);
}

double NNfunction_NN_5_8::synapse0x32fbca0() {
   return (neuron0x32f2ab0()*0.00919029);
}

double NNfunction_NN_5_8::synapse0x32fbce0() {
   return (neuron0x32f2df0()*-0.0330433);
}

double NNfunction_NN_5_8::synapse0x32fbd20() {
   return (neuron0x32f3130()*0.00491429);
}

double NNfunction_NN_5_8::synapse0x3313840() {
   return (neuron0x32f3470()*-0.00494584);
}

double NNfunction_NN_5_8::synapse0x3313880() {
   return (neuron0x32f37b0()*0.00531346);
}

double NNfunction_NN_5_8::synapse0x33138c0() {
   return (neuron0x32f3af0()*-0.0180081);
}

double NNfunction_NN_5_8::synapse0x3313900() {
   return (neuron0x32f3e30()*-0.274722);
}

double NNfunction_NN_5_8::synapse0x3313940() {
   return (neuron0x32f4170()*0.00196574);
}

double NNfunction_NN_5_8::synapse0x3313980() {
   return (neuron0x32f44b0()*0.0144712);
}

double NNfunction_NN_5_8::synapse0x33139c0() {
   return (neuron0x32f47f0()*0.00502333);
}

double NNfunction_NN_5_8::synapse0x3313a00() {
   return (neuron0x32f4b30()*-0.0173811);
}

double NNfunction_NN_5_8::synapse0x3313280() {
   return (neuron0x32f4e70()*0.0149826);
}

double NNfunction_NN_5_8::synapse0x33132c0() {
   return (neuron0x32f53d0()*-0.00559394);
}

double NNfunction_NN_5_8::synapse0x3313b50() {
   return (neuron0x32f55f0()*0.00519471);
}

double NNfunction_NN_5_8::synapse0x3313b90() {
   return (neuron0x32f5930()*0.000263177);
}

double NNfunction_NN_5_8::synapse0x3313bd0() {
   return (neuron0x32f5c70()*0.00624413);
}

double NNfunction_NN_5_8::synapse0x3313c10() {
   return (neuron0x32f5fb0()*0.00658318);
}

double NNfunction_NN_5_8::synapse0x3313c50() {
   return (neuron0x32f62f0()*-0.0236439);
}

double NNfunction_NN_5_8::synapse0x3313c90() {
   return (neuron0x32f6630()*1.43367);
}

double NNfunction_NN_5_8::synapse0x3314010() {
   return (neuron0x32f1a70()*-0.00771445);
}

double NNfunction_NN_5_8::synapse0x3314050() {
   return (neuron0x32f1db0()*-0.00601379);
}

double NNfunction_NN_5_8::synapse0x3314090() {
   return (neuron0x32f20f0()*1.39461);
}

double NNfunction_NN_5_8::synapse0x33140d0() {
   return (neuron0x32f2430()*-0.205334);
}

double NNfunction_NN_5_8::synapse0x3314110() {
   return (neuron0x32f2770()*0.0141194);
}

double NNfunction_NN_5_8::synapse0x3314150() {
   return (neuron0x32f2ab0()*0.016629);
}

double NNfunction_NN_5_8::synapse0x3314190() {
   return (neuron0x32f2df0()*0.0126102);
}

double NNfunction_NN_5_8::synapse0x33141d0() {
   return (neuron0x32f3130()*-0.0223471);
}

double NNfunction_NN_5_8::synapse0x3314210() {
   return (neuron0x32f3470()*-0.00891499);
}

double NNfunction_NN_5_8::synapse0x3314250() {
   return (neuron0x32f37b0()*-0.0299543);
}

double NNfunction_NN_5_8::synapse0x3314290() {
   return (neuron0x32f3af0()*-0.00284983);
}

double NNfunction_NN_5_8::synapse0x33142d0() {
   return (neuron0x32f3e30()*0.63574);
}

double NNfunction_NN_5_8::synapse0x3314310() {
   return (neuron0x32f4170()*0.0641435);
}

double NNfunction_NN_5_8::synapse0x3314350() {
   return (neuron0x32f44b0()*-0.0870807);
}

double NNfunction_NN_5_8::synapse0x3314390() {
   return (neuron0x32f47f0()*0.086014);
}

double NNfunction_NN_5_8::synapse0x33143d0() {
   return (neuron0x32f4b30()*0.0617508);
}

double NNfunction_NN_5_8::synapse0x3313e60() {
   return (neuron0x32f4e70()*-0.0472308);
}

double NNfunction_NN_5_8::synapse0x3313ea0() {
   return (neuron0x32f53d0()*0.0298735);
}

double NNfunction_NN_5_8::synapse0x3314520() {
   return (neuron0x32f55f0()*0.0215737);
}

double NNfunction_NN_5_8::synapse0x3314560() {
   return (neuron0x32f5930()*0.00966995);
}

double NNfunction_NN_5_8::synapse0x33145a0() {
   return (neuron0x32f5c70()*-0.041522);
}

double NNfunction_NN_5_8::synapse0x33145e0() {
   return (neuron0x32f5fb0()*0.0177445);
}

double NNfunction_NN_5_8::synapse0x3314620() {
   return (neuron0x32f62f0()*-0.0124779);
}

double NNfunction_NN_5_8::synapse0x3314660() {
   return (neuron0x32f6630()*-0.56947);
}

double NNfunction_NN_5_8::synapse0x33149e0() {
   return (neuron0x32f1a70()*0.200598);
}

double NNfunction_NN_5_8::synapse0x3314a20() {
   return (neuron0x32f1db0()*-0.0218611);
}

double NNfunction_NN_5_8::synapse0x3314a60() {
   return (neuron0x32f20f0()*-1.01659);
}

double NNfunction_NN_5_8::synapse0x3314aa0() {
   return (neuron0x32f2430()*0.0410665);
}

double NNfunction_NN_5_8::synapse0x3314ae0() {
   return (neuron0x32f2770()*-0.00647646);
}

double NNfunction_NN_5_8::synapse0x3314b20() {
   return (neuron0x32f2ab0()*0.0267574);
}

double NNfunction_NN_5_8::synapse0x3314b60() {
   return (neuron0x32f2df0()*0.00400188);
}

double NNfunction_NN_5_8::synapse0x3314ba0() {
   return (neuron0x32f3130()*-0.0267686);
}

double NNfunction_NN_5_8::synapse0x3314be0() {
   return (neuron0x32f3470()*-0.0043383);
}

double NNfunction_NN_5_8::synapse0x3314c20() {
   return (neuron0x32f37b0()*-0.0123247);
}

double NNfunction_NN_5_8::synapse0x3314c60() {
   return (neuron0x32f3af0()*0.00589596);
}

double NNfunction_NN_5_8::synapse0x3314ca0() {
   return (neuron0x32f3e30()*0.166104);
}

double NNfunction_NN_5_8::synapse0x3314ce0() {
   return (neuron0x32f4170()*-0.0417898);
}

double NNfunction_NN_5_8::synapse0x3314d20() {
   return (neuron0x32f44b0()*0.000595424);
}

double NNfunction_NN_5_8::synapse0x3314d60() {
   return (neuron0x32f47f0()*-0.0104628);
}

double NNfunction_NN_5_8::synapse0x3314da0() {
   return (neuron0x32f4b30()*-0.020582);
}

double NNfunction_NN_5_8::synapse0x3314830() {
   return (neuron0x32f4e70()*0.0220934);
}

double NNfunction_NN_5_8::synapse0x3314870() {
   return (neuron0x32f53d0()*-0.0621968);
}

double NNfunction_NN_5_8::synapse0x33053a0() {
   return (neuron0x32f55f0()*-0.0298018);
}

double NNfunction_NN_5_8::synapse0x33053e0() {
   return (neuron0x32f5930()*-0.0245644);
}

double NNfunction_NN_5_8::synapse0x3305420() {
   return (neuron0x32f5c70()*-0.0132557);
}

double NNfunction_NN_5_8::synapse0x3305460() {
   return (neuron0x32f5fb0()*-0.00980761);
}

double NNfunction_NN_5_8::synapse0x33054a0() {
   return (neuron0x32f62f0()*0.00232192);
}

double NNfunction_NN_5_8::synapse0x33054e0() {
   return (neuron0x32f6630()*-1.35953);
}

double NNfunction_NN_5_8::synapse0x3305860() {
   return (neuron0x32f1a70()*0.0664918);
}

double NNfunction_NN_5_8::synapse0x33058a0() {
   return (neuron0x32f1db0()*-0.0103182);
}

double NNfunction_NN_5_8::synapse0x33058e0() {
   return (neuron0x32f20f0()*0.993304);
}

double NNfunction_NN_5_8::synapse0x3305920() {
   return (neuron0x32f2430()*0.205453);
}

double NNfunction_NN_5_8::synapse0x3305960() {
   return (neuron0x32f2770()*-0.0160522);
}

double NNfunction_NN_5_8::synapse0x33059a0() {
   return (neuron0x32f2ab0()*-0.0321962);
}

double NNfunction_NN_5_8::synapse0x33059e0() {
   return (neuron0x32f2df0()*0.00434986);
}

double NNfunction_NN_5_8::synapse0x3305a20() {
   return (neuron0x32f3130()*-0.0265188);
}

double NNfunction_NN_5_8::synapse0x3305a60() {
   return (neuron0x32f3470()*0.0409308);
}

double NNfunction_NN_5_8::synapse0x3305aa0() {
   return (neuron0x32f37b0()*0.0186007);
}

double NNfunction_NN_5_8::synapse0x3305ae0() {
   return (neuron0x32f3af0()*-0.0544287);
}

double NNfunction_NN_5_8::synapse0x3305b20() {
   return (neuron0x32f3e30()*0.405102);
}

double NNfunction_NN_5_8::synapse0x3305b60() {
   return (neuron0x32f4170()*0.0762155);
}

double NNfunction_NN_5_8::synapse0x3305ba0() {
   return (neuron0x32f44b0()*0.0747876);
}

double NNfunction_NN_5_8::synapse0x3305be0() {
   return (neuron0x32f47f0()*0.0176848);
}

double NNfunction_NN_5_8::synapse0x3305c20() {
   return (neuron0x32f4b30()*0.00648027);
}

double NNfunction_NN_5_8::synapse0x33056b0() {
   return (neuron0x32f4e70()*0.0121823);
}

double NNfunction_NN_5_8::synapse0x33056f0() {
   return (neuron0x32f53d0()*-0.048257);
}

double NNfunction_NN_5_8::synapse0x3305d70() {
   return (neuron0x32f55f0()*-0.00164259);
}

double NNfunction_NN_5_8::synapse0x3305db0() {
   return (neuron0x32f5930()*-0.0383506);
}

double NNfunction_NN_5_8::synapse0x3305df0() {
   return (neuron0x32f5c70()*-0.0630605);
}

double NNfunction_NN_5_8::synapse0x3305e30() {
   return (neuron0x32f5fb0()*-0.0244158);
}

double NNfunction_NN_5_8::synapse0x3305e70() {
   return (neuron0x32f62f0()*0.00480542);
}

double NNfunction_NN_5_8::synapse0x3305eb0() {
   return (neuron0x32f6630()*-0.917847);
}

double NNfunction_NN_5_8::synapse0x3306230() {
   return (neuron0x32f1a70()*-0.0971172);
}

double NNfunction_NN_5_8::synapse0x3306270() {
   return (neuron0x32f1db0()*0.0311631);
}

double NNfunction_NN_5_8::synapse0x33062b0() {
   return (neuron0x32f20f0()*0.699099);
}

double NNfunction_NN_5_8::synapse0x33062f0() {
   return (neuron0x32f2430()*-0.174633);
}

double NNfunction_NN_5_8::synapse0x3306330() {
   return (neuron0x32f2770()*-0.0178768);
}

double NNfunction_NN_5_8::synapse0x3306370() {
   return (neuron0x32f2ab0()*-0.0723694);
}

double NNfunction_NN_5_8::synapse0x33063b0() {
   return (neuron0x32f2df0()*0.0290419);
}

double NNfunction_NN_5_8::synapse0x33063f0() {
   return (neuron0x32f3130()*-0.000718745);
}

double NNfunction_NN_5_8::synapse0x3306430() {
   return (neuron0x32f3470()*0.0413546);
}

double NNfunction_NN_5_8::synapse0x3306470() {
   return (neuron0x32f37b0()*-0.0200841);
}

double NNfunction_NN_5_8::synapse0x33064b0() {
   return (neuron0x32f3af0()*-0.00243729);
}

double NNfunction_NN_5_8::synapse0x33064f0() {
   return (neuron0x32f3e30()*0.561445);
}

double NNfunction_NN_5_8::synapse0x3306530() {
   return (neuron0x32f4170()*0.160436);
}

double NNfunction_NN_5_8::synapse0x3306570() {
   return (neuron0x32f44b0()*-0.0766795);
}

double NNfunction_NN_5_8::synapse0x33065b0() {
   return (neuron0x32f47f0()*0.0190504);
}

double NNfunction_NN_5_8::synapse0x33065f0() {
   return (neuron0x32f4b30()*0.0411135);
}

double NNfunction_NN_5_8::synapse0x3306080() {
   return (neuron0x32f4e70()*-0.000731494);
}

double NNfunction_NN_5_8::synapse0x33060c0() {
   return (neuron0x32f53d0()*0.0977425);
}

double NNfunction_NN_5_8::synapse0x3306740() {
   return (neuron0x32f55f0()*0.0537889);
}

double NNfunction_NN_5_8::synapse0x3306780() {
   return (neuron0x32f5930()*-0.0359191);
}

double NNfunction_NN_5_8::synapse0x33067c0() {
   return (neuron0x32f5c70()*-0.050289);
}

double NNfunction_NN_5_8::synapse0x3306800() {
   return (neuron0x32f5fb0()*-0.0225909);
}

double NNfunction_NN_5_8::synapse0x3306840() {
   return (neuron0x32f62f0()*0.0543097);
}

double NNfunction_NN_5_8::synapse0x3306880() {
   return (neuron0x32f6630()*-1.71754);
}

double NNfunction_NN_5_8::synapse0x3306c00() {
   return (neuron0x32f1a70()*-0.023082);
}

double NNfunction_NN_5_8::synapse0x3306c40() {
   return (neuron0x32f1db0()*-0.0131615);
}

double NNfunction_NN_5_8::synapse0x3306c80() {
   return (neuron0x32f20f0()*0.643834);
}

double NNfunction_NN_5_8::synapse0x3306cc0() {
   return (neuron0x32f2430()*0.0758969);
}

double NNfunction_NN_5_8::synapse0x3306d00() {
   return (neuron0x32f2770()*-0.00749507);
}

double NNfunction_NN_5_8::synapse0x3306d40() {
   return (neuron0x32f2ab0()*-0.0115355);
}

double NNfunction_NN_5_8::synapse0x3306d80() {
   return (neuron0x32f2df0()*0.0164566);
}

double NNfunction_NN_5_8::synapse0x3306dc0() {
   return (neuron0x32f3130()*-0.00222949);
}

double NNfunction_NN_5_8::synapse0x3306e00() {
   return (neuron0x32f3470()*-0.00260571);
}

double NNfunction_NN_5_8::synapse0x3306e40() {
   return (neuron0x32f37b0()*-0.00309133);
}

double NNfunction_NN_5_8::synapse0x3306e80() {
   return (neuron0x32f3af0()*0.00248467);
}

double NNfunction_NN_5_8::synapse0x3306ec0() {
   return (neuron0x32f3e30()*-2.09377);
}

double NNfunction_NN_5_8::synapse0x3306f00() {
   return (neuron0x32f4170()*0.0222588);
}

double NNfunction_NN_5_8::synapse0x3306f40() {
   return (neuron0x32f44b0()*-0.0445462);
}

double NNfunction_NN_5_8::synapse0x3306f80() {
   return (neuron0x32f47f0()*0.00256631);
}

double NNfunction_NN_5_8::synapse0x3306fc0() {
   return (neuron0x32f4b30()*-0.00534106);
}

double NNfunction_NN_5_8::synapse0x3306a50() {
   return (neuron0x32f4e70()*-0.0260297);
}

double NNfunction_NN_5_8::synapse0x3306a90() {
   return (neuron0x32f53d0()*-0.0086431);
}

double NNfunction_NN_5_8::synapse0x3307110() {
   return (neuron0x32f55f0()*-0.0361847);
}

double NNfunction_NN_5_8::synapse0x3307150() {
   return (neuron0x32f5930()*-0.00765248);
}

double NNfunction_NN_5_8::synapse0x3307190() {
   return (neuron0x32f5c70()*0.0158999);
}

double NNfunction_NN_5_8::synapse0x33071d0() {
   return (neuron0x32f5fb0()*0.0129686);
}

double NNfunction_NN_5_8::synapse0x3307210() {
   return (neuron0x32f62f0()*0.0162334);
}

double NNfunction_NN_5_8::synapse0x3307250() {
   return (neuron0x32f6630()*0.27289);
}

double NNfunction_NN_5_8::synapse0x3319120() {
   return (neuron0x32f1a70()*-0.00475646);
}

double NNfunction_NN_5_8::synapse0x3319160() {
   return (neuron0x32f1db0()*0.0131663);
}

double NNfunction_NN_5_8::synapse0x33191a0() {
   return (neuron0x32f20f0()*0.466615);
}

double NNfunction_NN_5_8::synapse0x33191e0() {
   return (neuron0x32f2430()*0.0322676);
}

double NNfunction_NN_5_8::synapse0x3319220() {
   return (neuron0x32f2770()*0.00573571);
}

double NNfunction_NN_5_8::synapse0x3319260() {
   return (neuron0x32f2ab0()*0.00139546);
}

double NNfunction_NN_5_8::synapse0x33192a0() {
   return (neuron0x32f2df0()*0.00935849);
}

double NNfunction_NN_5_8::synapse0x33192e0() {
   return (neuron0x32f3130()*0.00710063);
}

double NNfunction_NN_5_8::synapse0x3319320() {
   return (neuron0x32f3470()*0.00971376);
}

double NNfunction_NN_5_8::synapse0x3319360() {
   return (neuron0x32f37b0()*0.00457147);
}

double NNfunction_NN_5_8::synapse0x33193a0() {
   return (neuron0x32f3af0()*-0.0012797);
}

double NNfunction_NN_5_8::synapse0x33193e0() {
   return (neuron0x32f3e30()*1.4161);
}

double NNfunction_NN_5_8::synapse0x3319420() {
   return (neuron0x32f4170()*0.019314);
}

double NNfunction_NN_5_8::synapse0x3319460() {
   return (neuron0x32f44b0()*0.0169822);
}

double NNfunction_NN_5_8::synapse0x33194a0() {
   return (neuron0x32f47f0()*-0.0133821);
}

double NNfunction_NN_5_8::synapse0x33194e0() {
   return (neuron0x32f4b30()*-0.0186127);
}

double NNfunction_NN_5_8::synapse0x3307290() {
   return (neuron0x32f4e70()*0.0106374);
}

double NNfunction_NN_5_8::synapse0x33072d0() {
   return (neuron0x32f53d0()*-0.000871664);
}

double NNfunction_NN_5_8::synapse0x3319630() {
   return (neuron0x32f55f0()*-0.0121554);
}

double NNfunction_NN_5_8::synapse0x3319670() {
   return (neuron0x32f5930()*8.75462e-05);
}

double NNfunction_NN_5_8::synapse0x33196b0() {
   return (neuron0x32f5c70()*-0.00887464);
}

double NNfunction_NN_5_8::synapse0x33196f0() {
   return (neuron0x32f5fb0()*-0.00860798);
}

double NNfunction_NN_5_8::synapse0x3319730() {
   return (neuron0x32f62f0()*0.00307329);
}

double NNfunction_NN_5_8::synapse0x3319770() {
   return (neuron0x32f6630()*-0.0955836);
}

double NNfunction_NN_5_8::synapse0x3319af0() {
   return (neuron0x32f1a70()*0.00344177);
}

double NNfunction_NN_5_8::synapse0x3319b30() {
   return (neuron0x32f1db0()*0.00717772);
}

double NNfunction_NN_5_8::synapse0x3319b70() {
   return (neuron0x32f20f0()*0.331208);
}

double NNfunction_NN_5_8::synapse0x3319bb0() {
   return (neuron0x32f2430()*-0.00205094);
}

double NNfunction_NN_5_8::synapse0x3319bf0() {
   return (neuron0x32f2770()*-0.00117142);
}

double NNfunction_NN_5_8::synapse0x3319c30() {
   return (neuron0x32f2ab0()*0.00290009);
}

double NNfunction_NN_5_8::synapse0x3319c70() {
   return (neuron0x32f2df0()*-6.99829e-05);
}

double NNfunction_NN_5_8::synapse0x3319cb0() {
   return (neuron0x32f3130()*-0.00171561);
}

double NNfunction_NN_5_8::synapse0x3319cf0() {
   return (neuron0x32f3470()*0.00487058);
}

double NNfunction_NN_5_8::synapse0x3319d30() {
   return (neuron0x32f37b0()*0.00476476);
}

double NNfunction_NN_5_8::synapse0x3319d70() {
   return (neuron0x32f3af0()*0.0109195);
}

double NNfunction_NN_5_8::synapse0x3319db0() {
   return (neuron0x32f3e30()*-3.10204);
}

double NNfunction_NN_5_8::synapse0x3319df0() {
   return (neuron0x32f4170()*-0.0362925);
}

double NNfunction_NN_5_8::synapse0x3319e30() {
   return (neuron0x32f44b0()*-0.00687069);
}

double NNfunction_NN_5_8::synapse0x3319e70() {
   return (neuron0x32f47f0()*0.00605603);
}

double NNfunction_NN_5_8::synapse0x3319eb0() {
   return (neuron0x32f4b30()*-0.00623913);
}

double NNfunction_NN_5_8::synapse0x3319940() {
   return (neuron0x32f4e70()*-0.0110526);
}

double NNfunction_NN_5_8::synapse0x3319980() {
   return (neuron0x32f53d0()*-0.0020981);
}

double NNfunction_NN_5_8::synapse0x331a000() {
   return (neuron0x32f55f0()*0.00596834);
}

double NNfunction_NN_5_8::synapse0x331a040() {
   return (neuron0x32f5930()*-0.00369433);
}

double NNfunction_NN_5_8::synapse0x331a080() {
   return (neuron0x32f5c70()*-0.00279377);
}

double NNfunction_NN_5_8::synapse0x331a0c0() {
   return (neuron0x32f5fb0()*-0.000234875);
}

double NNfunction_NN_5_8::synapse0x331a100() {
   return (neuron0x32f62f0()*-0.00961707);
}

double NNfunction_NN_5_8::synapse0x331a140() {
   return (neuron0x32f6630()*0.485594);
}

double NNfunction_NN_5_8::synapse0x331a4c0() {
   return (neuron0x32f1a70()*-0.293038);
}

double NNfunction_NN_5_8::synapse0x331a500() {
   return (neuron0x32f1db0()*-0.0651989);
}

double NNfunction_NN_5_8::synapse0x331a540() {
   return (neuron0x32f20f0()*0.438924);
}

double NNfunction_NN_5_8::synapse0x331a580() {
   return (neuron0x32f2430()*0.422021);
}

double NNfunction_NN_5_8::synapse0x331a5c0() {
   return (neuron0x32f2770()*0.547089);
}

double NNfunction_NN_5_8::synapse0x331a600() {
   return (neuron0x32f2ab0()*-0.380677);
}

double NNfunction_NN_5_8::synapse0x331a640() {
   return (neuron0x32f2df0()*-0.274214);
}

double NNfunction_NN_5_8::synapse0x331a680() {
   return (neuron0x32f3130()*-0.0491604);
}

double NNfunction_NN_5_8::synapse0x331a6c0() {
   return (neuron0x32f3470()*-0.0694311);
}

double NNfunction_NN_5_8::synapse0x331a700() {
   return (neuron0x32f37b0()*-0.371871);
}

double NNfunction_NN_5_8::synapse0x331a740() {
   return (neuron0x32f3af0()*-0.0369124);
}

double NNfunction_NN_5_8::synapse0x331a780() {
   return (neuron0x32f3e30()*-0.0153608);
}

double NNfunction_NN_5_8::synapse0x331a7c0() {
   return (neuron0x32f4170()*0.506814);
}

double NNfunction_NN_5_8::synapse0x331a800() {
   return (neuron0x32f44b0()*0.188265);
}

double NNfunction_NN_5_8::synapse0x331a840() {
   return (neuron0x32f47f0()*-0.0961881);
}

double NNfunction_NN_5_8::synapse0x331a880() {
   return (neuron0x32f4b30()*-0.446984);
}

double NNfunction_NN_5_8::synapse0x331a310() {
   return (neuron0x32f4e70()*0.429572);
}

double NNfunction_NN_5_8::synapse0x331a350() {
   return (neuron0x32f53d0()*0.290886);
}

double NNfunction_NN_5_8::synapse0x331a9d0() {
   return (neuron0x32f55f0()*0.0637044);
}

double NNfunction_NN_5_8::synapse0x331aa10() {
   return (neuron0x32f5930()*-0.0565473);
}

double NNfunction_NN_5_8::synapse0x331aa50() {
   return (neuron0x32f5c70()*0.0887063);
}

double NNfunction_NN_5_8::synapse0x331aa90() {
   return (neuron0x32f5fb0()*0.231823);
}

double NNfunction_NN_5_8::synapse0x331aad0() {
   return (neuron0x32f62f0()*-0.464979);
}

double NNfunction_NN_5_8::synapse0x331ab10() {
   return (neuron0x32f6630()*0.389999);
}

double NNfunction_NN_5_8::synapse0x331ae90() {
   return (neuron0x32f1a70()*-0.43043);
}

double NNfunction_NN_5_8::synapse0x331aed0() {
   return (neuron0x32f1db0()*-0.08113);
}

double NNfunction_NN_5_8::synapse0x331af10() {
   return (neuron0x32f20f0()*0.389169);
}

double NNfunction_NN_5_8::synapse0x331af50() {
   return (neuron0x32f2430()*-0.0507763);
}

double NNfunction_NN_5_8::synapse0x331af90() {
   return (neuron0x32f2770()*0.63337);
}

double NNfunction_NN_5_8::synapse0x331afd0() {
   return (neuron0x32f2ab0()*-0.0234854);
}

double NNfunction_NN_5_8::synapse0x331b010() {
   return (neuron0x32f2df0()*-0.0435092);
}

double NNfunction_NN_5_8::synapse0x331b050() {
   return (neuron0x32f3130()*-0.205684);
}

double NNfunction_NN_5_8::synapse0x331b090() {
   return (neuron0x32f3470()*-0.0521904);
}

double NNfunction_NN_5_8::synapse0x331b0d0() {
   return (neuron0x32f37b0()*0.0622562);
}

double NNfunction_NN_5_8::synapse0x331b110() {
   return (neuron0x32f3af0()*0.00403285);
}

double NNfunction_NN_5_8::synapse0x331b150() {
   return (neuron0x32f3e30()*-0.00223306);
}

double NNfunction_NN_5_8::synapse0x331b190() {
   return (neuron0x32f4170()*-0.0557458);
}

double NNfunction_NN_5_8::synapse0x331b1d0() {
   return (neuron0x32f44b0()*-0.0857629);
}

double NNfunction_NN_5_8::synapse0x331b210() {
   return (neuron0x32f47f0()*0.157295);
}

double NNfunction_NN_5_8::synapse0x331b250() {
   return (neuron0x32f4b30()*0.246423);
}

double NNfunction_NN_5_8::synapse0x331ace0() {
   return (neuron0x32f4e70()*-0.472129);
}

double NNfunction_NN_5_8::synapse0x331ad20() {
   return (neuron0x32f53d0()*0.16802);
}

double NNfunction_NN_5_8::synapse0x331b3a0() {
   return (neuron0x32f55f0()*0.131653);
}

double NNfunction_NN_5_8::synapse0x331b3e0() {
   return (neuron0x32f5930()*0.159321);
}

double NNfunction_NN_5_8::synapse0x331b420() {
   return (neuron0x32f5c70()*0.164145);
}

double NNfunction_NN_5_8::synapse0x331b460() {
   return (neuron0x32f5fb0()*-0.0153104);
}

double NNfunction_NN_5_8::synapse0x331b4a0() {
   return (neuron0x32f62f0()*0.159696);
}

double NNfunction_NN_5_8::synapse0x331b4e0() {
   return (neuron0x32f6630()*-0.518533);
}

double NNfunction_NN_5_8::synapse0x32f7a80() {
   return (neuron0x32f6ad0()*-0.437248);
}

double NNfunction_NN_5_8::synapse0x32f7ac0() {
   return (neuron0x32f73e0()*-0.599614);
}

double NNfunction_NN_5_8::synapse0x32f8f90() {
   return (neuron0x32f7ec0()*0.0417113);
}

double NNfunction_NN_5_8::synapse0x32f8fd0() {
   return (neuron0x30b1750()*-0.248495);
}

double NNfunction_NN_5_8::synapse0x32f9960() {
   return (neuron0x32f8ce0()*0.17786);
}

double NNfunction_NN_5_8::synapse0x32f99a0() {
   return (neuron0x32f96b0()*4.75625);
}

double NNfunction_NN_5_8::synapse0x32fa730() {
   return (neuron0x32fa480()*-2.6217);
}

double NNfunction_NN_5_8::synapse0x32fa770() {
   return (neuron0x32fae50()*0.503173);
}

double NNfunction_NN_5_8::synapse0x32fb100() {
   return (neuron0x32fb820()*-0.886071);
}

double NNfunction_NN_5_8::synapse0x32fb140() {
   return (neuron0x32fc300()*-0.665274);
}

double NNfunction_NN_5_8::synapse0x32fbad0() {
   return (neuron0x32fccd0()*-1.28536);
}

double NNfunction_NN_5_8::synapse0x32fbb10() {
   return (neuron0x32f9db0()*-0.819746);
}

double NNfunction_NN_5_8::synapse0x32fc5b0() {
   return (neuron0x32fe880()*0.606158);
}

double NNfunction_NN_5_8::synapse0x32fc5f0() {
   return (neuron0x32ff250()*0.13009);
}

double NNfunction_NN_5_8::synapse0x32fcf80() {
   return (neuron0x32ffc20()*0.0428168);
}

double NNfunction_NN_5_8::synapse0x32fcfc0() {
   return (neuron0x33005f0()*-1.4394);
}

double NNfunction_NN_5_8::synapse0x32fa060() {
   return (neuron0x3302400()*-0.310542);
}

double NNfunction_NN_5_8::synapse0x32fa0a0() {
   return (neuron0x33026e0()*-2.70515);
}

double NNfunction_NN_5_8::synapse0x32feb30() {
   return (neuron0x33030b0()*0.443881);
}

double NNfunction_NN_5_8::synapse0x32feb70() {
   return (neuron0x3303a80()*-0.35312);
}

double NNfunction_NN_5_8::synapse0x32ff500() {
   return (neuron0x3304450()*-0.296025);
}

double NNfunction_NN_5_8::synapse0x32ff540() {
   return (neuron0x3304e20()*-0.40127);
}

double NNfunction_NN_5_8::synapse0x32ffed0() {
   return (neuron0x32fd970()*-0.367139);
}

double NNfunction_NN_5_8::synapse0x32fff10() {
   return (neuron0x32fe340()*-0.165728);
}

double NNfunction_NN_5_8::synapse0x33008a0() {
   return (neuron0x3307bb0()*-0.502632);
}

double NNfunction_NN_5_8::synapse0x33008e0() {
   return (neuron0x3308580()*-0.349838);
}

double NNfunction_NN_5_8::synapse0x32f4a10() {
   return (neuron0x3308f50()*0.271932);
}

double NNfunction_NN_5_8::synapse0x32f4a50() {
   return (neuron0x3309920()*-0.0939443);
}

double NNfunction_NN_5_8::synapse0x3302990() {
   return (neuron0x330a2f0()*-0.243369);
}

double NNfunction_NN_5_8::synapse0x33029d0() {
   return (neuron0x330acc0()*0.0337204);
}

double NNfunction_NN_5_8::synapse0x3303360() {
   return (neuron0x330b690()*3.94857);
}

double NNfunction_NN_5_8::synapse0x33033a0() {
   return (neuron0x330c060()*-0.378948);
}

double NNfunction_NN_5_8::synapse0x3303d30() {
   return (neuron0x33020f0()*0.643694);
}

double NNfunction_NN_5_8::synapse0x3303d70() {
   return (neuron0x330ec40()*-0.572158);
}

double NNfunction_NN_5_8::synapse0x3304700() {
   return (neuron0x330f610()*0.149216);
}

double NNfunction_NN_5_8::synapse0x3304740() {
   return (neuron0x330ffe0()*1.1304);
}

double NNfunction_NN_5_8::synapse0x33050d0() {
   return (neuron0x33109b0()*-0.92372);
}

double NNfunction_NN_5_8::synapse0x3305110() {
   return (neuron0x3311380()*-0.0186835);
}

double NNfunction_NN_5_8::synapse0x32fdc20() {
   return (neuron0x3311d50()*2.46616);
}

double NNfunction_NN_5_8::synapse0x32fdc60() {
   return (neuron0x3312720()*0.38891);
}

double NNfunction_NN_5_8::synapse0x33074d0() {
   return (neuron0x33130f0()*-0.798763);
}

double NNfunction_NN_5_8::synapse0x3307510() {
   return (neuron0x3313cd0()*0.359456);
}

double NNfunction_NN_5_8::synapse0x3307e60() {
   return (neuron0x33146a0()*0.216063);
}

double NNfunction_NN_5_8::synapse0x3307ea0() {
   return (neuron0x3305520()*0.0457576);
}

double NNfunction_NN_5_8::synapse0x3308830() {
   return (neuron0x3305ef0()*-0.204158);
}

double NNfunction_NN_5_8::synapse0x3308870() {
   return (neuron0x33068c0()*-0.618637);
}

double NNfunction_NN_5_8::synapse0x3309200() {
   return (neuron0x3318f00()*-0.181843);
}

double NNfunction_NN_5_8::synapse0x3309240() {
   return (neuron0x33197b0()*-0.284528);
}

double NNfunction_NN_5_8::synapse0x3309bd0() {
   return (neuron0x331a180()*-0.236749);
}

double NNfunction_NN_5_8::synapse0x3309c10() {
   return (neuron0x331ab50()*0.314538);
}

double NNfunction_NN_5_8::synapse0x330c310() {
   return (neuron0x32f6ad0()*-2.43907);
}

double NNfunction_NN_5_8::synapse0x330c350() {
   return (neuron0x32f73e0()*-0.258915);
}

double NNfunction_NN_5_8::synapse0x33018d0() {
   return (neuron0x32f7ec0()*0.0259345);
}

double NNfunction_NN_5_8::synapse0x3301910() {
   return (neuron0x30b1750()*-0.399301);
}

double NNfunction_NN_5_8::synapse0x330eef0() {
   return (neuron0x32f8ce0()*0.903774);
}

double NNfunction_NN_5_8::synapse0x330ef30() {
   return (neuron0x32f96b0()*-2.49707);
}

double NNfunction_NN_5_8::synapse0x330f8c0() {
   return (neuron0x32fa480()*2.91022);
}

double NNfunction_NN_5_8::synapse0x330f900() {
   return (neuron0x32fae50()*-0.0834545);
}

double NNfunction_NN_5_8::synapse0x3310290() {
   return (neuron0x32fb820()*1.08594);
}

double NNfunction_NN_5_8::synapse0x33102d0() {
   return (neuron0x32fc300()*-0.210638);
}

double NNfunction_NN_5_8::synapse0x3310c60() {
   return (neuron0x32fccd0()*1.87281);
}

double NNfunction_NN_5_8::synapse0x3310ca0() {
   return (neuron0x32f9db0()*0.0470249);
}

double NNfunction_NN_5_8::synapse0x3311630() {
   return (neuron0x32fe880()*-1.49116);
}

double NNfunction_NN_5_8::synapse0x3311670() {
   return (neuron0x32ff250()*-1.43742);
}

double NNfunction_NN_5_8::synapse0x3312000() {
   return (neuron0x32ffc20()*-0.153883);
}

double NNfunction_NN_5_8::synapse0x3312040() {
   return (neuron0x33005f0()*1.07549);
}

double NNfunction_NN_5_8::synapse0x33129d0() {
   return (neuron0x3302400()*-0.306393);
}

double NNfunction_NN_5_8::synapse0x3312a10() {
   return (neuron0x33026e0()*3.36708);
}

double NNfunction_NN_5_8::synapse0x33133a0() {
   return (neuron0x33030b0()*0.033293);
}

double NNfunction_NN_5_8::synapse0x33133e0() {
   return (neuron0x3303a80()*0.395456);
}

double NNfunction_NN_5_8::synapse0x3313f80() {
   return (neuron0x3304450()*0.277841);
}

double NNfunction_NN_5_8::synapse0x3313fc0() {
   return (neuron0x3304e20()*0.362876);
}

double NNfunction_NN_5_8::synapse0x3314950() {
   return (neuron0x32fd970()*-2.29531);
}

double NNfunction_NN_5_8::synapse0x3314990() {
   return (neuron0x32fe340()*-3.25377);
}

double NNfunction_NN_5_8::synapse0x33057d0() {
   return (neuron0x3307bb0()*-0.0783575);
}

double NNfunction_NN_5_8::synapse0x3305810() {
   return (neuron0x3308580()*0.0388422);
}

double NNfunction_NN_5_8::synapse0x33061a0() {
   return (neuron0x3308f50()*0.31859);
}

double NNfunction_NN_5_8::synapse0x33061e0() {
   return (neuron0x3309920()*0.973124);
}

double NNfunction_NN_5_8::synapse0x3306b70() {
   return (neuron0x330a2f0()*0.831496);
}

double NNfunction_NN_5_8::synapse0x3306bb0() {
   return (neuron0x330acc0()*-0.0676711);
}

double NNfunction_NN_5_8::synapse0x3319090() {
   return (neuron0x330b690()*-3.66929);
}

double NNfunction_NN_5_8::synapse0x33190d0() {
   return (neuron0x330c060()*0.725689);
}

double NNfunction_NN_5_8::synapse0x3319a60() {
   return (neuron0x33020f0()*-0.444705);
}

double NNfunction_NN_5_8::synapse0x3319aa0() {
   return (neuron0x330ec40()*0.794539);
}

double NNfunction_NN_5_8::synapse0x331a430() {
   return (neuron0x330f610()*0.519986);
}

double NNfunction_NN_5_8::synapse0x331a470() {
   return (neuron0x330ffe0()*-1.54752);
}

double NNfunction_NN_5_8::synapse0x331ae00() {
   return (neuron0x33109b0()*1.07333);
}

double NNfunction_NN_5_8::synapse0x331ae40() {
   return (neuron0x3311380()*0.314622);
}

double NNfunction_NN_5_8::synapse0x32f6cf0() {
   return (neuron0x3311d50()*-0.847293);
}

double NNfunction_NN_5_8::synapse0x32f6d30() {
   return (neuron0x3312720()*-1.1434);
}

double NNfunction_NN_5_8::synapse0x330a5a0() {
   return (neuron0x33130f0()*0.506114);
}

double NNfunction_NN_5_8::synapse0x330a5e0() {
   return (neuron0x3313cd0()*0.984103);
}

double NNfunction_NN_5_8::synapse0x331b520() {
   return (neuron0x33146a0()*0.151446);
}

double NNfunction_NN_5_8::synapse0x331b560() {
   return (neuron0x3305520()*0.421067);
}

double NNfunction_NN_5_8::synapse0x331b5a0() {
   return (neuron0x3305ef0()*1.49398);
}

double NNfunction_NN_5_8::synapse0x331b5e0() {
   return (neuron0x33068c0()*-0.186774);
}

double NNfunction_NN_5_8::synapse0x3322490() {
   return (neuron0x3318f00()*0.465501);
}

double NNfunction_NN_5_8::synapse0x33224d0() {
   return (neuron0x33197b0()*0.528404);
}

double NNfunction_NN_5_8::synapse0x3322510() {
   return (neuron0x331a180()*0.409415);
}

double NNfunction_NN_5_8::synapse0x3322550() {
   return (neuron0x331ab50()*-0.210688);
}

double NNfunction_NN_5_8::synapse0x33228d0() {
   return (neuron0x32f6ad0()*1.10834);
}

double NNfunction_NN_5_8::synapse0x3322910() {
   return (neuron0x32f73e0()*1.19918);
}

double NNfunction_NN_5_8::synapse0x3322950() {
   return (neuron0x32f7ec0()*0.0382587);
}

double NNfunction_NN_5_8::synapse0x3322990() {
   return (neuron0x30b1750()*1.19591);
}

double NNfunction_NN_5_8::synapse0x33229d0() {
   return (neuron0x32f8ce0()*0.397134);
}

double NNfunction_NN_5_8::synapse0x3322a10() {
   return (neuron0x32f96b0()*1.1306);
}

double NNfunction_NN_5_8::synapse0x3322a50() {
   return (neuron0x32fa480()*-0.636342);
}

double NNfunction_NN_5_8::synapse0x3322a90() {
   return (neuron0x32fae50()*0.0875565);
}

double NNfunction_NN_5_8::synapse0x3322ad0() {
   return (neuron0x32fb820()*-0.244847);
}

double NNfunction_NN_5_8::synapse0x3322b10() {
   return (neuron0x32fc300()*-0.764348);
}

double NNfunction_NN_5_8::synapse0x3322b50() {
   return (neuron0x32fccd0()*-0.196565);
}

double NNfunction_NN_5_8::synapse0x3322b90() {
   return (neuron0x32f9db0()*-0.23239);
}

double NNfunction_NN_5_8::synapse0x3322bd0() {
   return (neuron0x32fe880()*2.73769);
}

double NNfunction_NN_5_8::synapse0x3322c10() {
   return (neuron0x32ff250()*-0.184801);
}

double NNfunction_NN_5_8::synapse0x3322c50() {
   return (neuron0x32ffc20()*0.217604);
}

double NNfunction_NN_5_8::synapse0x3322c90() {
   return (neuron0x33005f0()*-0.876566);
}

double NNfunction_NN_5_8::synapse0x3322720() {
   return (neuron0x3302400()*1.09038);
}

double NNfunction_NN_5_8::synapse0x3322760() {
   return (neuron0x33026e0()*-0.542622);
}

double NNfunction_NN_5_8::synapse0x3322de0() {
   return (neuron0x33030b0()*1.19861);
}

double NNfunction_NN_5_8::synapse0x3322e20() {
   return (neuron0x3303a80()*0.29676);
}

double NNfunction_NN_5_8::synapse0x3322e60() {
   return (neuron0x3304450()*-0.0641279);
}

double NNfunction_NN_5_8::synapse0x3322ea0() {
   return (neuron0x3304e20()*-0.0287413);
}

double NNfunction_NN_5_8::synapse0x3322ee0() {
   return (neuron0x32fd970()*-0.883013);
}

double NNfunction_NN_5_8::synapse0x3322f20() {
   return (neuron0x32fe340()*1.12366);
}

double NNfunction_NN_5_8::synapse0x3322f60() {
   return (neuron0x3307bb0()*-0.0924182);
}

double NNfunction_NN_5_8::synapse0x3322fa0() {
   return (neuron0x3308580()*-0.156212);
}

double NNfunction_NN_5_8::synapse0x3322fe0() {
   return (neuron0x3308f50()*-0.0800215);
}

double NNfunction_NN_5_8::synapse0x3323020() {
   return (neuron0x3309920()*1.87271);
}

double NNfunction_NN_5_8::synapse0x3323060() {
   return (neuron0x330a2f0()*0.315207);
}

double NNfunction_NN_5_8::synapse0x33230a0() {
   return (neuron0x330acc0()*0.0100156);
}

double NNfunction_NN_5_8::synapse0x33230e0() {
   return (neuron0x330b690()*0.942156);
}

double NNfunction_NN_5_8::synapse0x3323120() {
   return (neuron0x330c060()*0.216617);
}

double NNfunction_NN_5_8::synapse0x3322cd0() {
   return (neuron0x33020f0()*-0.31291);
}

double NNfunction_NN_5_8::synapse0x3322d10() {
   return (neuron0x330ec40()*1.06424);
}

double NNfunction_NN_5_8::synapse0x3322d50() {
   return (neuron0x330f610()*-1.85977);
}

double NNfunction_NN_5_8::synapse0x3322d90() {
   return (neuron0x330ffe0()*0.240436);
}

double NNfunction_NN_5_8::synapse0x3323370() {
   return (neuron0x33109b0()*0.854856);
}

double NNfunction_NN_5_8::synapse0x33233b0() {
   return (neuron0x3311380()*0.100737);
}

double NNfunction_NN_5_8::synapse0x33233f0() {
   return (neuron0x3311d50()*-0.619396);
}

double NNfunction_NN_5_8::synapse0x3323430() {
   return (neuron0x3312720()*-1.74042);
}

double NNfunction_NN_5_8::synapse0x3323470() {
   return (neuron0x33130f0()*-1.12709);
}

double NNfunction_NN_5_8::synapse0x33234b0() {
   return (neuron0x3313cd0()*0.916538);
}

double NNfunction_NN_5_8::synapse0x33234f0() {
   return (neuron0x33146a0()*0.24132);
}

double NNfunction_NN_5_8::synapse0x3323530() {
   return (neuron0x3305520()*1.12105);
}

double NNfunction_NN_5_8::synapse0x3323570() {
   return (neuron0x3305ef0()*0.368791);
}

double NNfunction_NN_5_8::synapse0x33235b0() {
   return (neuron0x33068c0()*-1.64823);
}

double NNfunction_NN_5_8::synapse0x33235f0() {
   return (neuron0x3318f00()*0.450854);
}

double NNfunction_NN_5_8::synapse0x3323630() {
   return (neuron0x33197b0()*2.08662);
}

double NNfunction_NN_5_8::synapse0x3323670() {
   return (neuron0x331a180()*-0.00362955);
}

double NNfunction_NN_5_8::synapse0x33236b0() {
   return (neuron0x331ab50()*0.103144);
}

double NNfunction_NN_5_8::synapse0x3323a30() {
   return (neuron0x32f6ad0()*0.286525);
}

double NNfunction_NN_5_8::synapse0x3323a70() {
   return (neuron0x32f73e0()*-1.62535);
}

double NNfunction_NN_5_8::synapse0x3323ab0() {
   return (neuron0x32f7ec0()*-0.0327821);
}

double NNfunction_NN_5_8::synapse0x3323af0() {
   return (neuron0x30b1750()*-0.0299268);
}

double NNfunction_NN_5_8::synapse0x3323b30() {
   return (neuron0x32f8ce0()*-0.283877);
}

double NNfunction_NN_5_8::synapse0x3323b70() {
   return (neuron0x32f96b0()*0.645666);
}

double NNfunction_NN_5_8::synapse0x3323bb0() {
   return (neuron0x32fa480()*1.77082);
}

double NNfunction_NN_5_8::synapse0x3323bf0() {
   return (neuron0x32fae50()*-0.00522725);
}

double NNfunction_NN_5_8::synapse0x3323c30() {
   return (neuron0x32fb820()*1.5984);
}

double NNfunction_NN_5_8::synapse0x3323c70() {
   return (neuron0x32fc300()*-0.700901);
}

double NNfunction_NN_5_8::synapse0x3323cb0() {
   return (neuron0x32fccd0()*0.90223);
}

double NNfunction_NN_5_8::synapse0x3323cf0() {
   return (neuron0x32f9db0()*-0.775951);
}

double NNfunction_NN_5_8::synapse0x3323d30() {
   return (neuron0x32fe880()*-0.49738);
}

double NNfunction_NN_5_8::synapse0x3323d70() {
   return (neuron0x32ff250()*-0.394282);
}

double NNfunction_NN_5_8::synapse0x3323db0() {
   return (neuron0x32ffc20()*-0.116268);
}

double NNfunction_NN_5_8::synapse0x3323df0() {
   return (neuron0x33005f0()*0.467154);
}

double NNfunction_NN_5_8::synapse0x3323880() {
   return (neuron0x3302400()*0.820058);
}

double NNfunction_NN_5_8::synapse0x33238c0() {
   return (neuron0x33026e0()*1.86262);
}

double NNfunction_NN_5_8::synapse0x3323f40() {
   return (neuron0x33030b0()*0.204827);
}

double NNfunction_NN_5_8::synapse0x3323f80() {
   return (neuron0x3303a80()*1.61117);
}

double NNfunction_NN_5_8::synapse0x3323fc0() {
   return (neuron0x3304450()*0.000234982);
}

double NNfunction_NN_5_8::synapse0x3324000() {
   return (neuron0x3304e20()*-0.00278838);
}

double NNfunction_NN_5_8::synapse0x3324040() {
   return (neuron0x32fd970()*-0.876639);
}

double NNfunction_NN_5_8::synapse0x3324080() {
   return (neuron0x32fe340()*-0.441333);
}

double NNfunction_NN_5_8::synapse0x33240c0() {
   return (neuron0x3307bb0()*-0.242285);
}

double NNfunction_NN_5_8::synapse0x3324100() {
   return (neuron0x3308580()*0.325074);
}

double NNfunction_NN_5_8::synapse0x3324140() {
   return (neuron0x3308f50()*0.0876097);
}

double NNfunction_NN_5_8::synapse0x3324180() {
   return (neuron0x3309920()*0.622423);
}

double NNfunction_NN_5_8::synapse0x33241c0() {
   return (neuron0x330a2f0()*2.39923);
}

double NNfunction_NN_5_8::synapse0x3324200() {
   return (neuron0x330acc0()*0.0439743);
}

double NNfunction_NN_5_8::synapse0x3324240() {
   return (neuron0x330b690()*0.259751);
}

double NNfunction_NN_5_8::synapse0x3324280() {
   return (neuron0x330c060()*0.135162);
}

double NNfunction_NN_5_8::synapse0x3323e30() {
   return (neuron0x33020f0()*-0.466468);
}

double NNfunction_NN_5_8::synapse0x3323e70() {
   return (neuron0x330ec40()*0.482565);
}

double NNfunction_NN_5_8::synapse0x3323eb0() {
   return (neuron0x330f610()*-0.842752);
}

double NNfunction_NN_5_8::synapse0x3323ef0() {
   return (neuron0x330ffe0()*-0.720546);
}

double NNfunction_NN_5_8::synapse0x33244d0() {
   return (neuron0x33109b0()*-1.94383);
}

double NNfunction_NN_5_8::synapse0x3324510() {
   return (neuron0x3311380()*0.0371472);
}

double NNfunction_NN_5_8::synapse0x3324550() {
   return (neuron0x3311d50()*-0.599142);
}

double NNfunction_NN_5_8::synapse0x3324590() {
   return (neuron0x3312720()*0.221197);
}

double NNfunction_NN_5_8::synapse0x33245d0() {
   return (neuron0x33130f0()*-1.16314);
}

double NNfunction_NN_5_8::synapse0x3324610() {
   return (neuron0x3313cd0()*0.324149);
}

double NNfunction_NN_5_8::synapse0x3324650() {
   return (neuron0x33146a0()*-0.816145);
}

double NNfunction_NN_5_8::synapse0x3324690() {
   return (neuron0x3305520()*-0.147711);
}

double NNfunction_NN_5_8::synapse0x33246d0() {
   return (neuron0x3305ef0()*-0.273318);
}

double NNfunction_NN_5_8::synapse0x3324710() {
   return (neuron0x33068c0()*-0.312107);
}

double NNfunction_NN_5_8::synapse0x3324750() {
   return (neuron0x3318f00()*1.61692);
}

double NNfunction_NN_5_8::synapse0x3324790() {
   return (neuron0x33197b0()*-1.52577);
}

double NNfunction_NN_5_8::synapse0x33247d0() {
   return (neuron0x331a180()*-0.0212213);
}

double NNfunction_NN_5_8::synapse0x3324810() {
   return (neuron0x331ab50()*0.0198525);
}

double NNfunction_NN_5_8::synapse0x3324b90() {
   return (neuron0x32f6ad0()*-0.0782442);
}

double NNfunction_NN_5_8::synapse0x3324bd0() {
   return (neuron0x32f73e0()*-0.915248);
}

double NNfunction_NN_5_8::synapse0x3324c10() {
   return (neuron0x32f7ec0()*-0.506343);
}

double NNfunction_NN_5_8::synapse0x3324c50() {
   return (neuron0x30b1750()*-0.22894);
}

double NNfunction_NN_5_8::synapse0x3324c90() {
   return (neuron0x32f8ce0()*-0.695411);
}

double NNfunction_NN_5_8::synapse0x3324cd0() {
   return (neuron0x32f96b0()*-0.56865);
}

double NNfunction_NN_5_8::synapse0x3324d10() {
   return (neuron0x32fa480()*-0.244941);
}

double NNfunction_NN_5_8::synapse0x3324d50() {
   return (neuron0x32fae50()*-0.648478);
}

double NNfunction_NN_5_8::synapse0x3324d90() {
   return (neuron0x32fb820()*0.618403);
}

double NNfunction_NN_5_8::synapse0x3324dd0() {
   return (neuron0x32fc300()*-0.666346);
}

double NNfunction_NN_5_8::synapse0x3324e10() {
   return (neuron0x32fccd0()*0.483146);
}

double NNfunction_NN_5_8::synapse0x3324e50() {
   return (neuron0x32f9db0()*0.386436);
}

double NNfunction_NN_5_8::synapse0x3324e90() {
   return (neuron0x32fe880()*-0.362235);
}

double NNfunction_NN_5_8::synapse0x3324ed0() {
   return (neuron0x32ff250()*-1.19801);
}

double NNfunction_NN_5_8::synapse0x3324f10() {
   return (neuron0x32ffc20()*-0.0638227);
}

double NNfunction_NN_5_8::synapse0x3324f50() {
   return (neuron0x33005f0()*-0.59154);
}

double NNfunction_NN_5_8::synapse0x33249e0() {
   return (neuron0x3302400()*-0.156002);
}

double NNfunction_NN_5_8::synapse0x3324a20() {
   return (neuron0x33026e0()*-0.305954);
}

double NNfunction_NN_5_8::synapse0x33250a0() {
   return (neuron0x33030b0()*0.0937152);
}

double NNfunction_NN_5_8::synapse0x33250e0() {
   return (neuron0x3303a80()*-0.0220734);
}

double NNfunction_NN_5_8::synapse0x3325120() {
   return (neuron0x3304450()*-0.0338698);
}

double NNfunction_NN_5_8::synapse0x3325160() {
   return (neuron0x3304e20()*-0.709506);
}

double NNfunction_NN_5_8::synapse0x33251a0() {
   return (neuron0x32fd970()*-0.598059);
}

double NNfunction_NN_5_8::synapse0x33251e0() {
   return (neuron0x32fe340()*-0.689832);
}

double NNfunction_NN_5_8::synapse0x3325220() {
   return (neuron0x3307bb0()*-0.415163);
}

double NNfunction_NN_5_8::synapse0x3325260() {
   return (neuron0x3308580()*-0.428589);
}

double NNfunction_NN_5_8::synapse0x33252a0() {
   return (neuron0x3308f50()*-0.964374);
}

double NNfunction_NN_5_8::synapse0x33252e0() {
   return (neuron0x3309920()*0.397264);
}

double NNfunction_NN_5_8::synapse0x3325320() {
   return (neuron0x330a2f0()*0.464469);
}

double NNfunction_NN_5_8::synapse0x3325360() {
   return (neuron0x330acc0()*-0.631619);
}

double NNfunction_NN_5_8::synapse0x33253a0() {
   return (neuron0x330b690()*-0.354402);
}

double NNfunction_NN_5_8::synapse0x33253e0() {
   return (neuron0x330c060()*-0.385934);
}

double NNfunction_NN_5_8::synapse0x3324f90() {
   return (neuron0x33020f0()*-0.58563);
}

double NNfunction_NN_5_8::synapse0x3324fd0() {
   return (neuron0x330ec40()*-0.408323);
}

double NNfunction_NN_5_8::synapse0x3325010() {
   return (neuron0x330f610()*0.0900792);
}

double NNfunction_NN_5_8::synapse0x3325050() {
   return (neuron0x330ffe0()*0.502383);
}

double NNfunction_NN_5_8::synapse0x3325630() {
   return (neuron0x33109b0()*-0.429205);
}

double NNfunction_NN_5_8::synapse0x3325670() {
   return (neuron0x3311380()*-0.0614542);
}

double NNfunction_NN_5_8::synapse0x33256b0() {
   return (neuron0x3311d50()*-0.322568);
}

double NNfunction_NN_5_8::synapse0x33256f0() {
   return (neuron0x3312720()*-0.591246);
}

double NNfunction_NN_5_8::synapse0x3325730() {
   return (neuron0x33130f0()*-0.398698);
}

double NNfunction_NN_5_8::synapse0x3325770() {
   return (neuron0x3313cd0()*-0.305339);
}

double NNfunction_NN_5_8::synapse0x33257b0() {
   return (neuron0x33146a0()*-0.619929);
}

double NNfunction_NN_5_8::synapse0x33257f0() {
   return (neuron0x3305520()*0.0849134);
}

double NNfunction_NN_5_8::synapse0x3325830() {
   return (neuron0x3305ef0()*-0.0338132);
}

double NNfunction_NN_5_8::synapse0x3325870() {
   return (neuron0x33068c0()*-0.412546);
}

double NNfunction_NN_5_8::synapse0x33258b0() {
   return (neuron0x3318f00()*-0.150665);
}

double NNfunction_NN_5_8::synapse0x33258f0() {
   return (neuron0x33197b0()*-0.147643);
}

double NNfunction_NN_5_8::synapse0x3325930() {
   return (neuron0x331a180()*-0.164476);
}

double NNfunction_NN_5_8::synapse0x3325970() {
   return (neuron0x331ab50()*-0.28892);
}

double NNfunction_NN_5_8::synapse0x32f6a90() {
   return (neuron0x3321d50()*-7.06111);
}

double NNfunction_NN_5_8::synapse0x3325bd0() {
   return (neuron0x33220f0()*-1.41056);
}

double NNfunction_NN_5_8::synapse0x3325c10() {
   return (neuron0x3322590()*6.82546);
}

double NNfunction_NN_5_8::synapse0x3325c50() {
   return (neuron0x33236f0()*-6.23497);
}

double NNfunction_NN_5_8::synapse0x3325c90() {
   return (neuron0x3324850()*0.311837);
}

