#include "NNfunction_ss_dLuR.h"
#include <cmath>

double NNfunction_ss_dLuR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4778)/15.3189;
   input1 = (in1 - -6.50687)/1159.01;
   input2 = (in2 - 657.732)/624.123;
   input3 = (in3 - -54.3486)/818.664;
   input4 = (in4 - 1073.71)/962.061;
   input5 = (in5 - 901.734)/953.102;
   input6 = (in6 - 913.711)/956.049;
   input7 = (in7 - 929.014)/938.521;
   input8 = (in8 - 916.422)/963.995;
   input9 = (in9 - 894.382)/945.383;
   input10 = (in10 - 986.268)/950.764;
   input11 = (in11 - 542.865)/613.128;
   input12 = (in12 - 720.768)/866.008;
   input13 = (in13 - 507.584)/523.416;
   input14 = (in14 - 588.909)/639.917;
   input15 = (in15 - 733.434)/828.497;
   input16 = (in16 - 540.975)/568.182;
   input17 = (in17 - 756.59)/891.147;
   input18 = (in18 - 747.105)/892.906;
   input19 = (in19 - 801.799)/875.691;
   input20 = (in20 - -3.82832)/489.98;
   input21 = (in21 - 4.664)/1161.05;
   input22 = (in22 - 5.12346)/1204.32;
   input23 = (in23 - -193.46)/604.15;
   switch(index) {
     case 0:
         return neuron0x152a560();
     default:
         return 0.;
   }
}

double NNfunction_ss_dLuR::Value(int index, double* input) {
   input0 = (input[0] - 23.4778)/15.3189;
   input1 = (input[1] - -6.50687)/1159.01;
   input2 = (input[2] - 657.732)/624.123;
   input3 = (input[3] - -54.3486)/818.664;
   input4 = (input[4] - 1073.71)/962.061;
   input5 = (input[5] - 901.734)/953.102;
   input6 = (input[6] - 913.711)/956.049;
   input7 = (input[7] - 929.014)/938.521;
   input8 = (input[8] - 916.422)/963.995;
   input9 = (input[9] - 894.382)/945.383;
   input10 = (input[10] - 986.268)/950.764;
   input11 = (input[11] - 542.865)/613.128;
   input12 = (input[12] - 720.768)/866.008;
   input13 = (input[13] - 507.584)/523.416;
   input14 = (input[14] - 588.909)/639.917;
   input15 = (input[15] - 733.434)/828.497;
   input16 = (input[16] - 540.975)/568.182;
   input17 = (input[17] - 756.59)/891.147;
   input18 = (input[18] - 747.105)/892.906;
   input19 = (input[19] - 801.799)/875.691;
   input20 = (input[20] - -3.82832)/489.98;
   input21 = (input[21] - 4.664)/1161.05;
   input22 = (input[22] - 5.12346)/1204.32;
   input23 = (input[23] - -193.46)/604.15;
   switch(index) {
     case 0:
         return neuron0x152a560();
     default:
         return 0.;
   }
}

double NNfunction_ss_dLuR::neuron0x14f6620() {
   return input0;
}

double NNfunction_ss_dLuR::neuron0x14f6960() {
   return input1;
}

double NNfunction_ss_dLuR::neuron0x14f6ca0() {
   return input2;
}

double NNfunction_ss_dLuR::neuron0x14f6fe0() {
   return input3;
}

double NNfunction_ss_dLuR::neuron0x14f7320() {
   return input4;
}

double NNfunction_ss_dLuR::neuron0x14f7660() {
   return input5;
}

double NNfunction_ss_dLuR::neuron0x14f79a0() {
   return input6;
}

double NNfunction_ss_dLuR::neuron0x14f7ce0() {
   return input7;
}

double NNfunction_ss_dLuR::neuron0x14f8020() {
   return input8;
}

double NNfunction_ss_dLuR::neuron0x14f8360() {
   return input9;
}

double NNfunction_ss_dLuR::neuron0x14f86a0() {
   return input10;
}

double NNfunction_ss_dLuR::neuron0x14f89e0() {
   return input11;
}

double NNfunction_ss_dLuR::neuron0x14f8d20() {
   return input12;
}

double NNfunction_ss_dLuR::neuron0x14f9060() {
   return input13;
}

double NNfunction_ss_dLuR::neuron0x14f93a0() {
   return input14;
}

double NNfunction_ss_dLuR::neuron0x14f96e0() {
   return input15;
}

double NNfunction_ss_dLuR::neuron0x14f9a20() {
   return input16;
}

double NNfunction_ss_dLuR::neuron0x14f9f80() {
   return input17;
}

double NNfunction_ss_dLuR::neuron0x14fa1a0() {
   return input18;
}

double NNfunction_ss_dLuR::neuron0x14fa4e0() {
   return input19;
}

double NNfunction_ss_dLuR::neuron0x14fa820() {
   return input20;
}

double NNfunction_ss_dLuR::neuron0x14fab60() {
   return input21;
}

double NNfunction_ss_dLuR::neuron0x14faea0() {
   return input22;
}

double NNfunction_ss_dLuR::neuron0x14fb1e0() {
   return input23;
}

double NNfunction_ss_dLuR::input0x14fb680() {
   double input = 1.17165;
   input += synapse0x12b6490();
   input += synapse0x14f64e0();
   input += synapse0x14f6520();
   input += synapse0x14fb930();
   input += synapse0x14fb970();
   input += synapse0x14fb9b0();
   input += synapse0x14fb9f0();
   input += synapse0x14fba30();
   input += synapse0x14fba70();
   input += synapse0x14fbab0();
   input += synapse0x14fbaf0();
   input += synapse0x14fbb30();
   input += synapse0x14fbb70();
   input += synapse0x14fbbb0();
   input += synapse0x14fbbf0();
   input += synapse0x14fbc30();
   input += synapse0x14f6450();
   input += synapse0x14f6490();
   input += synapse0x12a7d30();
   input += synapse0x12a7d70();
   input += synapse0x14fbe90();
   input += synapse0x14fbed0();
   input += synapse0x14fbf10();
   input += synapse0x14fbf50();
   return input;
}

double NNfunction_ss_dLuR::neuron0x14fb680() {
   double input = input0x14fb680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x14fbf90() {
   double input = 0.700318;
   input += synapse0x14fc2d0();
   input += synapse0x14fc310();
   input += synapse0x14fc350();
   input += synapse0x14fc390();
   input += synapse0x14fc3d0();
   input += synapse0x14fc410();
   input += synapse0x14fc450();
   input += synapse0x14fc490();
   input += synapse0x14fc4d0();
   input += synapse0x14fbd80();
   input += synapse0x14fbdc0();
   input += synapse0x14fbe00();
   input += synapse0x14fbe40();
   input += synapse0x14fc720();
   input += synapse0x14fc760();
   input += synapse0x14fc7a0();
   input += synapse0x14fc120();
   input += synapse0x14fc160();
   input += synapse0x14fc8f0();
   input += synapse0x14fc930();
   input += synapse0x14fc970();
   input += synapse0x14fc9b0();
   input += synapse0x14fc9f0();
   input += synapse0x14fca30();
   return input;
}

double NNfunction_ss_dLuR::neuron0x14fbf90() {
   double input = input0x14fbf90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x14fca70() {
   double input = -0.343198;
   input += synapse0x14fcdb0();
   input += synapse0x14fcdf0();
   input += synapse0x14fce30();
   input += synapse0x14fce70();
   input += synapse0x14fceb0();
   input += synapse0x14fcef0();
   input += synapse0x14fcf30();
   input += synapse0x14fcf70();
   input += synapse0x14fcfb0();
   input += synapse0x14fcff0();
   input += synapse0x14fd030();
   input += synapse0x14fd070();
   input += synapse0x14fd0b0();
   input += synapse0x14fd0f0();
   input += synapse0x14fd130();
   input += synapse0x14fd170();
   input += synapse0x14fcc00();
   input += synapse0x14fcc40();
   input += synapse0x12b5b80();
   input += synapse0x12b5bc0();
   input += synapse0x14e56b0();
   input += synapse0x14e56f0();
   input += synapse0x14e5730();
   input += synapse0x14f6560();
   return input;
}

double NNfunction_ss_dLuR::neuron0x14fca70() {
   double input = input0x14fca70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x12b6300() {
   double input = -1.34269;
   input += synapse0x14fc6c0();
   input += synapse0x14f65a0();
   input += synapse0x14f65e0();
   input += synapse0x14fd2c0();
   input += synapse0x14fd300();
   input += synapse0x14fd340();
   input += synapse0x14fd380();
   input += synapse0x14fd3c0();
   input += synapse0x14fd400();
   input += synapse0x14fd440();
   input += synapse0x14fd480();
   input += synapse0x14fd4c0();
   input += synapse0x14fd500();
   input += synapse0x14fd540();
   input += synapse0x14fd580();
   input += synapse0x14fd5c0();
   input += synapse0x14fc510();
   input += synapse0x14fc550();
   input += synapse0x14fd710();
   input += synapse0x14fd750();
   input += synapse0x14fd790();
   input += synapse0x14fd7d0();
   input += synapse0x14fd810();
   input += synapse0x14fd850();
   return input;
}

double NNfunction_ss_dLuR::neuron0x12b6300() {
   double input = input0x12b6300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x14fd890() {
   double input = 0.589314;
   input += synapse0x14fdbd0();
   input += synapse0x14fdc10();
   input += synapse0x14fdc50();
   input += synapse0x14fdc90();
   input += synapse0x14fdcd0();
   input += synapse0x14fdd10();
   input += synapse0x14fdd50();
   input += synapse0x14fdd90();
   input += synapse0x14fddd0();
   input += synapse0x14fde10();
   input += synapse0x14fde50();
   input += synapse0x14fde90();
   input += synapse0x14fded0();
   input += synapse0x14fdf10();
   input += synapse0x14fdf50();
   input += synapse0x14fdf90();
   input += synapse0x14fda20();
   input += synapse0x14fda60();
   input += synapse0x14fe0e0();
   input += synapse0x14fe120();
   input += synapse0x14fe160();
   input += synapse0x14fe1a0();
   input += synapse0x14fe1e0();
   input += synapse0x14fe220();
   return input;
}

double NNfunction_ss_dLuR::neuron0x14fd890() {
   double input = input0x14fd890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x14fe260() {
   double input = 1.15571;
   input += synapse0x14fe5a0();
   input += synapse0x14fe5e0();
   input += synapse0x14fe620();
   input += synapse0x14fe660();
   input += synapse0x14fe6a0();
   input += synapse0x14fe6e0();
   input += synapse0x14fe720();
   input += synapse0x14fe760();
   input += synapse0x14fe7a0();
   input += synapse0x12b5ef0();
   input += synapse0x12b5f30();
   input += synapse0x12b5f70();
   input += synapse0x12b5fb0();
   input += synapse0x12b5ff0();
   input += synapse0x12b6030();
   input += synapse0x12b6070();
   input += synapse0x14fe3f0();
   input += synapse0x14fe430();
   input += synapse0x12b61c0();
   input += synapse0x12b6200();
   input += synapse0x12b6240();
   input += synapse0x12b6280();
   input += synapse0x12b62c0();
   input += synapse0x14feff0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x14fe260() {
   double input = input0x14fe260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x14ff030() {
   double input = 0.41606;
   input += synapse0x14ff370();
   input += synapse0x14ff3b0();
   input += synapse0x14ff3f0();
   input += synapse0x14ff430();
   input += synapse0x14ff470();
   input += synapse0x14ff4b0();
   input += synapse0x14ff4f0();
   input += synapse0x14ff530();
   input += synapse0x14ff570();
   input += synapse0x14ff5b0();
   input += synapse0x14ff5f0();
   input += synapse0x14ff630();
   input += synapse0x14ff670();
   input += synapse0x14ff6b0();
   input += synapse0x14ff6f0();
   input += synapse0x14ff730();
   input += synapse0x14ff1c0();
   input += synapse0x14ff200();
   input += synapse0x14ff880();
   input += synapse0x14ff8c0();
   input += synapse0x14ff900();
   input += synapse0x14ff940();
   input += synapse0x14ff980();
   input += synapse0x14ff9c0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x14ff030() {
   double input = input0x14ff030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x14ffa00() {
   double input = 0.994594;
   input += synapse0x14ffd40();
   input += synapse0x14ffd80();
   input += synapse0x14ffdc0();
   input += synapse0x14ffe00();
   input += synapse0x14ffe40();
   input += synapse0x14ffe80();
   input += synapse0x14ffec0();
   input += synapse0x14fff00();
   input += synapse0x14fff40();
   input += synapse0x14fff80();
   input += synapse0x14fffc0();
   input += synapse0x1500000();
   input += synapse0x1500040();
   input += synapse0x1500080();
   input += synapse0x15000c0();
   input += synapse0x1500100();
   input += synapse0x14ffb90();
   input += synapse0x14ffbd0();
   input += synapse0x1500250();
   input += synapse0x1500290();
   input += synapse0x15002d0();
   input += synapse0x1500310();
   input += synapse0x1500350();
   input += synapse0x1500390();
   return input;
}

double NNfunction_ss_dLuR::neuron0x14ffa00() {
   double input = input0x14ffa00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x15003d0() {
   double input = -2.758;
   input += synapse0x14f9e70();
   input += synapse0x14f9eb0();
   input += synapse0x14f9ef0();
   input += synapse0x14f9f30();
   input += synapse0x1500920();
   input += synapse0x1500960();
   input += synapse0x15009a0();
   input += synapse0x15009e0();
   input += synapse0x1500a20();
   input += synapse0x1500a60();
   input += synapse0x1500aa0();
   input += synapse0x1500ae0();
   input += synapse0x1500b20();
   input += synapse0x1500b60();
   input += synapse0x1500ba0();
   input += synapse0x1500be0();
   input += synapse0x1500560();
   input += synapse0x15005a0();
   input += synapse0x1500d30();
   input += synapse0x1500d70();
   input += synapse0x1500db0();
   input += synapse0x1500df0();
   input += synapse0x1500e30();
   input += synapse0x1500e70();
   return input;
}

double NNfunction_ss_dLuR::neuron0x15003d0() {
   double input = input0x15003d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1500eb0() {
   double input = 0.776302;
   input += synapse0x15011f0();
   input += synapse0x1501230();
   input += synapse0x1501270();
   input += synapse0x15012b0();
   input += synapse0x15012f0();
   input += synapse0x1501330();
   input += synapse0x1501370();
   input += synapse0x15013b0();
   input += synapse0x15013f0();
   input += synapse0x1501430();
   input += synapse0x1501470();
   input += synapse0x15014b0();
   input += synapse0x15014f0();
   input += synapse0x1501530();
   input += synapse0x1501570();
   input += synapse0x15015b0();
   input += synapse0x1501040();
   input += synapse0x1501080();
   input += synapse0x1501700();
   input += synapse0x1501740();
   input += synapse0x1501780();
   input += synapse0x15017c0();
   input += synapse0x1501800();
   input += synapse0x1501840();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1500eb0() {
   double input = input0x1500eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1501880() {
   double input = -1.1541;
   input += synapse0x1501bc0();
   input += synapse0x1501c00();
   input += synapse0x1501c40();
   input += synapse0x1501c80();
   input += synapse0x1501cc0();
   input += synapse0x1501d00();
   input += synapse0x1501d40();
   input += synapse0x1501d80();
   input += synapse0x1501dc0();
   input += synapse0x1501e00();
   input += synapse0x1501e40();
   input += synapse0x1501e80();
   input += synapse0x1501ec0();
   input += synapse0x1501f00();
   input += synapse0x1501f40();
   input += synapse0x1501f80();
   input += synapse0x1501a10();
   input += synapse0x1501a50();
   input += synapse0x14fe7e0();
   input += synapse0x14fe820();
   input += synapse0x14fe860();
   input += synapse0x14fe8a0();
   input += synapse0x14fe8e0();
   input += synapse0x14fe920();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1501880() {
   double input = input0x1501880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x14fe960() {
   double input = -2.95534;
   input += synapse0x14feca0();
   input += synapse0x14fece0();
   input += synapse0x14fed20();
   input += synapse0x14fed60();
   input += synapse0x14feda0();
   input += synapse0x14fede0();
   input += synapse0x14fee20();
   input += synapse0x14fee60();
   input += synapse0x14feea0();
   input += synapse0x14feee0();
   input += synapse0x14fef20();
   input += synapse0x14fef60();
   input += synapse0x14fefa0();
   input += synapse0x15030e0();
   input += synapse0x1503120();
   input += synapse0x1503160();
   input += synapse0x14feaf0();
   input += synapse0x14feb30();
   input += synapse0x15032b0();
   input += synapse0x15032f0();
   input += synapse0x1503330();
   input += synapse0x1503370();
   input += synapse0x15033b0();
   input += synapse0x15033f0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x14fe960() {
   double input = input0x14fe960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1503430() {
   double input = 1.09123;
   input += synapse0x1503770();
   input += synapse0x15037b0();
   input += synapse0x15037f0();
   input += synapse0x1503830();
   input += synapse0x1503870();
   input += synapse0x15038b0();
   input += synapse0x15038f0();
   input += synapse0x1503930();
   input += synapse0x1503970();
   input += synapse0x15039b0();
   input += synapse0x15039f0();
   input += synapse0x1503a30();
   input += synapse0x1503a70();
   input += synapse0x1503ab0();
   input += synapse0x1503af0();
   input += synapse0x1503b30();
   input += synapse0x15035c0();
   input += synapse0x1503600();
   input += synapse0x1503c80();
   input += synapse0x1503cc0();
   input += synapse0x1503d00();
   input += synapse0x1503d40();
   input += synapse0x1503d80();
   input += synapse0x1503dc0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1503430() {
   double input = input0x1503430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1503e00() {
   double input = 0.891257;
   input += synapse0x1504140();
   input += synapse0x1504180();
   input += synapse0x15041c0();
   input += synapse0x1504200();
   input += synapse0x1504240();
   input += synapse0x1504280();
   input += synapse0x15042c0();
   input += synapse0x1504300();
   input += synapse0x1504340();
   input += synapse0x1504380();
   input += synapse0x15043c0();
   input += synapse0x1504400();
   input += synapse0x1504440();
   input += synapse0x1504480();
   input += synapse0x15044c0();
   input += synapse0x1504500();
   input += synapse0x1503f90();
   input += synapse0x1503fd0();
   input += synapse0x1504650();
   input += synapse0x1504690();
   input += synapse0x15046d0();
   input += synapse0x1504710();
   input += synapse0x1504750();
   input += synapse0x1504790();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1503e00() {
   double input = input0x1503e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x15047d0() {
   double input = -1.02412;
   input += synapse0x1504b10();
   input += synapse0x1504b50();
   input += synapse0x1504b90();
   input += synapse0x1504bd0();
   input += synapse0x1504c10();
   input += synapse0x1504c50();
   input += synapse0x1504c90();
   input += synapse0x1504cd0();
   input += synapse0x1504d10();
   input += synapse0x1504d50();
   input += synapse0x1504d90();
   input += synapse0x1504dd0();
   input += synapse0x1504e10();
   input += synapse0x1504e50();
   input += synapse0x1504e90();
   input += synapse0x1504ed0();
   input += synapse0x1504960();
   input += synapse0x15049a0();
   input += synapse0x1505020();
   input += synapse0x1505060();
   input += synapse0x15050a0();
   input += synapse0x15050e0();
   input += synapse0x1505120();
   input += synapse0x1505160();
   return input;
}

double NNfunction_ss_dLuR::neuron0x15047d0() {
   double input = input0x15047d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x15051a0() {
   double input = -1.48541;
   input += synapse0x15054e0();
   input += synapse0x14f6840();
   input += synapse0x14f6880();
   input += synapse0x14f6b80();
   input += synapse0x14f6bc0();
   input += synapse0x14f6ec0();
   input += synapse0x14f6f00();
   input += synapse0x14f7200();
   input += synapse0x14f7240();
   input += synapse0x14f7540();
   input += synapse0x14f7580();
   input += synapse0x14f7880();
   input += synapse0x14f78c0();
   input += synapse0x14f7bc0();
   input += synapse0x14f7c00();
   input += synapse0x14f7f00();
   input += synapse0x14f7f40();
   input += synapse0x14f8240();
   input += synapse0x14f8280();
   input += synapse0x14f8580();
   input += synapse0x14f85c0();
   input += synapse0x14f88c0();
   input += synapse0x14f8900();
   input += synapse0x14f8c00();
   return input;
}

double NNfunction_ss_dLuR::neuron0x15051a0() {
   double input = input0x15051a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1506fb0() {
   double input = -0.516308;
   input += synapse0x14f8c40();
   input += synapse0x14f9900();
   input += synapse0x14f9940();
   input += synapse0x1505330();
   input += synapse0x1505370();
   input += synapse0x14f9c40();
   input += synapse0x14f9c80();
   input += synapse0x12a7c10();
   input += synapse0x12a7c50();
   input += synapse0x14fa3c0();
   input += synapse0x14fa400();
   input += synapse0x14fa700();
   input += synapse0x14fa740();
   input += synapse0x14faa40();
   input += synapse0x14faa80();
   input += synapse0x14fad80();
   input += synapse0x14fadc0();
   input += synapse0x14fb0c0();
   input += synapse0x14fb100();
   input += synapse0x14fb400();
   input += synapse0x14fb440();
   input += synapse0x14f8f40();
   input += synapse0x14f8f80();
   input += synapse0x1507250();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1506fb0() {
   double input = input0x1506fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1507290() {
   double input = 3.46816;
   input += synapse0x15075d0();
   input += synapse0x1507610();
   input += synapse0x1507650();
   input += synapse0x1507690();
   input += synapse0x15076d0();
   input += synapse0x1507710();
   input += synapse0x1507750();
   input += synapse0x1507790();
   input += synapse0x15077d0();
   input += synapse0x1507810();
   input += synapse0x1507850();
   input += synapse0x1507890();
   input += synapse0x15078d0();
   input += synapse0x1507910();
   input += synapse0x1507950();
   input += synapse0x1507990();
   input += synapse0x1507420();
   input += synapse0x1507460();
   input += synapse0x1507ae0();
   input += synapse0x1507b20();
   input += synapse0x1507b60();
   input += synapse0x1507ba0();
   input += synapse0x1507be0();
   input += synapse0x1507c20();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1507290() {
   double input = input0x1507290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1507c60() {
   double input = -1.45672;
   input += synapse0x1507fa0();
   input += synapse0x1507fe0();
   input += synapse0x1508020();
   input += synapse0x1508060();
   input += synapse0x15080a0();
   input += synapse0x15080e0();
   input += synapse0x1508120();
   input += synapse0x1508160();
   input += synapse0x15081a0();
   input += synapse0x15081e0();
   input += synapse0x1508220();
   input += synapse0x1508260();
   input += synapse0x15082a0();
   input += synapse0x15082e0();
   input += synapse0x1508320();
   input += synapse0x1508360();
   input += synapse0x1507df0();
   input += synapse0x1507e30();
   input += synapse0x15084b0();
   input += synapse0x15084f0();
   input += synapse0x1508530();
   input += synapse0x1508570();
   input += synapse0x15085b0();
   input += synapse0x15085f0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1507c60() {
   double input = input0x1507c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1508630() {
   double input = 2.02089;
   input += synapse0x1508970();
   input += synapse0x15089b0();
   input += synapse0x15089f0();
   input += synapse0x1508a30();
   input += synapse0x1508a70();
   input += synapse0x1508ab0();
   input += synapse0x1508af0();
   input += synapse0x1508b30();
   input += synapse0x1508b70();
   input += synapse0x1508bb0();
   input += synapse0x1508bf0();
   input += synapse0x1508c30();
   input += synapse0x1508c70();
   input += synapse0x1508cb0();
   input += synapse0x1508cf0();
   input += synapse0x1508d30();
   input += synapse0x15087c0();
   input += synapse0x1508800();
   input += synapse0x1508e80();
   input += synapse0x1508ec0();
   input += synapse0x1508f00();
   input += synapse0x1508f40();
   input += synapse0x1508f80();
   input += synapse0x1508fc0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1508630() {
   double input = input0x1508630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1509000() {
   double input = 4.7395;
   input += synapse0x1509340();
   input += synapse0x1509380();
   input += synapse0x15093c0();
   input += synapse0x1509400();
   input += synapse0x1509440();
   input += synapse0x1509480();
   input += synapse0x15094c0();
   input += synapse0x1509500();
   input += synapse0x1509540();
   input += synapse0x1509580();
   input += synapse0x15095c0();
   input += synapse0x1509600();
   input += synapse0x1509640();
   input += synapse0x1509680();
   input += synapse0x15096c0();
   input += synapse0x1509700();
   input += synapse0x1509190();
   input += synapse0x15091d0();
   input += synapse0x1509850();
   input += synapse0x1509890();
   input += synapse0x15098d0();
   input += synapse0x1509910();
   input += synapse0x1509950();
   input += synapse0x1509990();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1509000() {
   double input = input0x1509000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x15099d0() {
   double input = 0.236426;
   input += synapse0x1509d10();
   input += synapse0x1509d50();
   input += synapse0x1509d90();
   input += synapse0x1509dd0();
   input += synapse0x1509e10();
   input += synapse0x1509e50();
   input += synapse0x1509e90();
   input += synapse0x1509ed0();
   input += synapse0x1509f10();
   input += synapse0x15020d0();
   input += synapse0x1502110();
   input += synapse0x1502150();
   input += synapse0x1502190();
   input += synapse0x15021d0();
   input += synapse0x1502210();
   input += synapse0x1502250();
   input += synapse0x1509b60();
   input += synapse0x1509ba0();
   input += synapse0x15023a0();
   input += synapse0x15023e0();
   input += synapse0x1502420();
   input += synapse0x1502460();
   input += synapse0x15024a0();
   input += synapse0x15024e0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x15099d0() {
   double input = input0x15099d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1502520() {
   double input = 0.689147;
   input += synapse0x1502860();
   input += synapse0x15028a0();
   input += synapse0x15028e0();
   input += synapse0x1502920();
   input += synapse0x1502960();
   input += synapse0x15029a0();
   input += synapse0x15029e0();
   input += synapse0x1502a20();
   input += synapse0x1502a60();
   input += synapse0x1502aa0();
   input += synapse0x1502ae0();
   input += synapse0x1502b20();
   input += synapse0x1502b60();
   input += synapse0x1502ba0();
   input += synapse0x1502be0();
   input += synapse0x1502c20();
   input += synapse0x15026b0();
   input += synapse0x15026f0();
   input += synapse0x1502d70();
   input += synapse0x1502db0();
   input += synapse0x1502df0();
   input += synapse0x1502e30();
   input += synapse0x1502e70();
   input += synapse0x1502eb0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1502520() {
   double input = input0x1502520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1502ef0() {
   double input = 0.0373877;
   input += synapse0x1503080();
   input += synapse0x150c110();
   input += synapse0x150c150();
   input += synapse0x150c190();
   input += synapse0x150c1d0();
   input += synapse0x150c210();
   input += synapse0x150c250();
   input += synapse0x150c290();
   input += synapse0x150c2d0();
   input += synapse0x150c310();
   input += synapse0x150c350();
   input += synapse0x150c390();
   input += synapse0x150c3d0();
   input += synapse0x150c410();
   input += synapse0x150c450();
   input += synapse0x150c490();
   input += synapse0x150bf60();
   input += synapse0x150bfa0();
   input += synapse0x150c5e0();
   input += synapse0x150c620();
   input += synapse0x150c660();
   input += synapse0x150c6a0();
   input += synapse0x150c6e0();
   input += synapse0x150c720();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1502ef0() {
   double input = input0x1502ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x150c760() {
   double input = -0.559927;
   input += synapse0x150caa0();
   input += synapse0x150cae0();
   input += synapse0x150cb20();
   input += synapse0x150cb60();
   input += synapse0x150cba0();
   input += synapse0x150cbe0();
   input += synapse0x150cc20();
   input += synapse0x150cc60();
   input += synapse0x150cca0();
   input += synapse0x150cce0();
   input += synapse0x150cd20();
   input += synapse0x150cd60();
   input += synapse0x150cda0();
   input += synapse0x150cde0();
   input += synapse0x150ce20();
   input += synapse0x150ce60();
   input += synapse0x150c8f0();
   input += synapse0x150c930();
   input += synapse0x150cfb0();
   input += synapse0x150cff0();
   input += synapse0x150d030();
   input += synapse0x150d070();
   input += synapse0x150d0b0();
   input += synapse0x150d0f0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x150c760() {
   double input = input0x150c760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x150d130() {
   double input = 0.45675;
   input += synapse0x150d470();
   input += synapse0x150d4b0();
   input += synapse0x150d4f0();
   input += synapse0x150d530();
   input += synapse0x150d570();
   input += synapse0x150d5b0();
   input += synapse0x150d5f0();
   input += synapse0x150d630();
   input += synapse0x150d670();
   input += synapse0x150d6b0();
   input += synapse0x150d6f0();
   input += synapse0x150d730();
   input += synapse0x150d770();
   input += synapse0x150d7b0();
   input += synapse0x150d7f0();
   input += synapse0x150d830();
   input += synapse0x150d2c0();
   input += synapse0x150d300();
   input += synapse0x150d980();
   input += synapse0x150d9c0();
   input += synapse0x150da00();
   input += synapse0x150da40();
   input += synapse0x150da80();
   input += synapse0x150dac0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x150d130() {
   double input = input0x150d130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x150db00() {
   double input = -0.427898;
   input += synapse0x150de40();
   input += synapse0x150de80();
   input += synapse0x150dec0();
   input += synapse0x150df00();
   input += synapse0x150df40();
   input += synapse0x150df80();
   input += synapse0x150dfc0();
   input += synapse0x150e000();
   input += synapse0x150e040();
   input += synapse0x150e080();
   input += synapse0x150e0c0();
   input += synapse0x150e100();
   input += synapse0x150e140();
   input += synapse0x150e180();
   input += synapse0x150e1c0();
   input += synapse0x150e200();
   input += synapse0x150dc90();
   input += synapse0x150dcd0();
   input += synapse0x150e350();
   input += synapse0x150e390();
   input += synapse0x150e3d0();
   input += synapse0x150e410();
   input += synapse0x150e450();
   input += synapse0x150e490();
   return input;
}

double NNfunction_ss_dLuR::neuron0x150db00() {
   double input = input0x150db00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x150e4d0() {
   double input = 1.29414;
   input += synapse0x150e810();
   input += synapse0x150e850();
   input += synapse0x150e890();
   input += synapse0x150e8d0();
   input += synapse0x150e910();
   input += synapse0x150e950();
   input += synapse0x150e990();
   input += synapse0x150e9d0();
   input += synapse0x150ea10();
   input += synapse0x150ea50();
   input += synapse0x150ea90();
   input += synapse0x150ead0();
   input += synapse0x150eb10();
   input += synapse0x150eb50();
   input += synapse0x150eb90();
   input += synapse0x150ebd0();
   input += synapse0x150e660();
   input += synapse0x150e6a0();
   input += synapse0x150ed20();
   input += synapse0x150ed60();
   input += synapse0x150eda0();
   input += synapse0x150ede0();
   input += synapse0x150ee20();
   input += synapse0x150ee60();
   return input;
}

double NNfunction_ss_dLuR::neuron0x150e4d0() {
   double input = input0x150e4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x150eea0() {
   double input = 0.320198;
   input += synapse0x150f1e0();
   input += synapse0x150f220();
   input += synapse0x150f260();
   input += synapse0x150f2a0();
   input += synapse0x150f2e0();
   input += synapse0x150f320();
   input += synapse0x150f360();
   input += synapse0x150f3a0();
   input += synapse0x150f3e0();
   input += synapse0x150f420();
   input += synapse0x150f460();
   input += synapse0x150f4a0();
   input += synapse0x150f4e0();
   input += synapse0x150f520();
   input += synapse0x150f560();
   input += synapse0x150f5a0();
   input += synapse0x150f030();
   input += synapse0x150f070();
   input += synapse0x150f6f0();
   input += synapse0x150f730();
   input += synapse0x150f770();
   input += synapse0x150f7b0();
   input += synapse0x150f7f0();
   input += synapse0x150f830();
   return input;
}

double NNfunction_ss_dLuR::neuron0x150eea0() {
   double input = input0x150eea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x150f870() {
   double input = -2.63336;
   input += synapse0x150fbb0();
   input += synapse0x150fbf0();
   input += synapse0x150fc30();
   input += synapse0x150fc70();
   input += synapse0x150fcb0();
   input += synapse0x150fcf0();
   input += synapse0x150fd30();
   input += synapse0x150fd70();
   input += synapse0x150fdb0();
   input += synapse0x150fdf0();
   input += synapse0x150fe30();
   input += synapse0x150fe70();
   input += synapse0x150feb0();
   input += synapse0x150fef0();
   input += synapse0x150ff30();
   input += synapse0x150ff70();
   input += synapse0x150fa00();
   input += synapse0x150fa40();
   input += synapse0x15100c0();
   input += synapse0x1510100();
   input += synapse0x1510140();
   input += synapse0x1510180();
   input += synapse0x15101c0();
   input += synapse0x1510200();
   return input;
}

double NNfunction_ss_dLuR::neuron0x150f870() {
   double input = input0x150f870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1510240() {
   double input = 0.766003;
   input += synapse0x1510580();
   input += synapse0x15105c0();
   input += synapse0x1510600();
   input += synapse0x1510640();
   input += synapse0x1510680();
   input += synapse0x15106c0();
   input += synapse0x1510700();
   input += synapse0x1510740();
   input += synapse0x1510780();
   input += synapse0x15107c0();
   input += synapse0x1510800();
   input += synapse0x1510840();
   input += synapse0x1510880();
   input += synapse0x15108c0();
   input += synapse0x1510900();
   input += synapse0x1510940();
   input += synapse0x15103d0();
   input += synapse0x1510410();
   input += synapse0x1510a90();
   input += synapse0x1510ad0();
   input += synapse0x1510b10();
   input += synapse0x1510b50();
   input += synapse0x1510b90();
   input += synapse0x1510bd0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1510240() {
   double input = input0x1510240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1510c10() {
   double input = -1.70077;
   input += synapse0x1510f50();
   input += synapse0x1505520();
   input += synapse0x1505560();
   input += synapse0x15055a0();
   input += synapse0x15057f0();
   input += synapse0x1505830();
   input += synapse0x1505870();
   input += synapse0x1505ac0();
   input += synapse0x1505b00();
   input += synapse0x1505d50();
   input += synapse0x1505d90();
   input += synapse0x1505dd0();
   input += synapse0x1506020();
   input += synapse0x1506060();
   input += synapse0x15062b0();
   input += synapse0x15062f0();
   input += synapse0x1510da0();
   input += synapse0x1510de0();
   input += synapse0x1506440();
   input += synapse0x1506950();
   input += synapse0x1506990();
   input += synapse0x15069d0();
   input += synapse0x1506c20();
   input += synapse0x1506c60();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1510c10() {
   double input = input0x1510c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1506ca0() {
   double input = 0.969602;
   input += synapse0x1506510();
   input += synapse0x1506550();
   input += synapse0x1506590();
   input += synapse0x15065d0();
   input += synapse0x1506f50();
   input += synapse0x15132a0();
   input += synapse0x15132e0();
   input += synapse0x1513320();
   input += synapse0x1513360();
   input += synapse0x15133a0();
   input += synapse0x15133e0();
   input += synapse0x1513420();
   input += synapse0x1513460();
   input += synapse0x15134a0();
   input += synapse0x15134e0();
   input += synapse0x1513520();
   input += synapse0x1506e30();
   input += synapse0x1506e70();
   input += synapse0x1513670();
   input += synapse0x15136b0();
   input += synapse0x15136f0();
   input += synapse0x1513730();
   input += synapse0x1513770();
   input += synapse0x15137b0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1506ca0() {
   double input = input0x1506ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x15137f0() {
   double input = 0.246471;
   input += synapse0x1513b30();
   input += synapse0x1513b70();
   input += synapse0x1513bb0();
   input += synapse0x1513bf0();
   input += synapse0x1513c30();
   input += synapse0x1513c70();
   input += synapse0x1513cb0();
   input += synapse0x1513cf0();
   input += synapse0x1513d30();
   input += synapse0x1513d70();
   input += synapse0x1513db0();
   input += synapse0x1513df0();
   input += synapse0x1513e30();
   input += synapse0x1513e70();
   input += synapse0x1513eb0();
   input += synapse0x1513ef0();
   input += synapse0x1513980();
   input += synapse0x15139c0();
   input += synapse0x1514040();
   input += synapse0x1514080();
   input += synapse0x15140c0();
   input += synapse0x1514100();
   input += synapse0x1514140();
   input += synapse0x1514180();
   return input;
}

double NNfunction_ss_dLuR::neuron0x15137f0() {
   double input = input0x15137f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x15141c0() {
   double input = 1.95413;
   input += synapse0x1514500();
   input += synapse0x1514540();
   input += synapse0x1514580();
   input += synapse0x15145c0();
   input += synapse0x1514600();
   input += synapse0x1514640();
   input += synapse0x1514680();
   input += synapse0x15146c0();
   input += synapse0x1514700();
   input += synapse0x1514740();
   input += synapse0x1514780();
   input += synapse0x15147c0();
   input += synapse0x1514800();
   input += synapse0x1514840();
   input += synapse0x1514880();
   input += synapse0x15148c0();
   input += synapse0x1514350();
   input += synapse0x1514390();
   input += synapse0x1514a10();
   input += synapse0x1514a50();
   input += synapse0x1514a90();
   input += synapse0x1514ad0();
   input += synapse0x1514b10();
   input += synapse0x1514b50();
   return input;
}

double NNfunction_ss_dLuR::neuron0x15141c0() {
   double input = input0x15141c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1514b90() {
   double input = 1.34955;
   input += synapse0x1514ed0();
   input += synapse0x1514f10();
   input += synapse0x1514f50();
   input += synapse0x1514f90();
   input += synapse0x1514fd0();
   input += synapse0x1515010();
   input += synapse0x1515050();
   input += synapse0x1515090();
   input += synapse0x15150d0();
   input += synapse0x1515110();
   input += synapse0x1515150();
   input += synapse0x1515190();
   input += synapse0x15151d0();
   input += synapse0x1515210();
   input += synapse0x1515250();
   input += synapse0x1515290();
   input += synapse0x1514d20();
   input += synapse0x1514d60();
   input += synapse0x15153e0();
   input += synapse0x1515420();
   input += synapse0x1515460();
   input += synapse0x15154a0();
   input += synapse0x15154e0();
   input += synapse0x1515520();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1514b90() {
   double input = input0x1514b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1515560() {
   double input = -0.0663646;
   input += synapse0x15158a0();
   input += synapse0x15158e0();
   input += synapse0x1515920();
   input += synapse0x1515960();
   input += synapse0x15159a0();
   input += synapse0x15159e0();
   input += synapse0x1515a20();
   input += synapse0x1515a60();
   input += synapse0x1515aa0();
   input += synapse0x1515ae0();
   input += synapse0x1515b20();
   input += synapse0x1515b60();
   input += synapse0x1515ba0();
   input += synapse0x1515be0();
   input += synapse0x1515c20();
   input += synapse0x1515c60();
   input += synapse0x15156f0();
   input += synapse0x1515730();
   input += synapse0x1515db0();
   input += synapse0x1515df0();
   input += synapse0x1515e30();
   input += synapse0x1515e70();
   input += synapse0x1515eb0();
   input += synapse0x1515ef0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1515560() {
   double input = input0x1515560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1515f30() {
   double input = -1.21949;
   input += synapse0x1516270();
   input += synapse0x15162b0();
   input += synapse0x15162f0();
   input += synapse0x1516330();
   input += synapse0x1516370();
   input += synapse0x15163b0();
   input += synapse0x15163f0();
   input += synapse0x1516430();
   input += synapse0x1516470();
   input += synapse0x15164b0();
   input += synapse0x15164f0();
   input += synapse0x1516530();
   input += synapse0x1516570();
   input += synapse0x15165b0();
   input += synapse0x15165f0();
   input += synapse0x1516630();
   input += synapse0x15160c0();
   input += synapse0x1516100();
   input += synapse0x1516780();
   input += synapse0x15167c0();
   input += synapse0x1516800();
   input += synapse0x1516840();
   input += synapse0x1516880();
   input += synapse0x15168c0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1515f30() {
   double input = input0x1515f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1516900() {
   double input = -0.979064;
   input += synapse0x1516c40();
   input += synapse0x1516c80();
   input += synapse0x1516cc0();
   input += synapse0x1516d00();
   input += synapse0x1516d40();
   input += synapse0x1516d80();
   input += synapse0x1516dc0();
   input += synapse0x1516e00();
   input += synapse0x1516e40();
   input += synapse0x1516e80();
   input += synapse0x1516ec0();
   input += synapse0x1516f00();
   input += synapse0x1516f40();
   input += synapse0x1516f80();
   input += synapse0x1516fc0();
   input += synapse0x1517000();
   input += synapse0x1516a90();
   input += synapse0x1516ad0();
   input += synapse0x1517150();
   input += synapse0x1517190();
   input += synapse0x15171d0();
   input += synapse0x1517210();
   input += synapse0x1517250();
   input += synapse0x1517290();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1516900() {
   double input = input0x1516900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x15172d0() {
   double input = -1.01298;
   input += synapse0x1517610();
   input += synapse0x1517650();
   input += synapse0x1517690();
   input += synapse0x15176d0();
   input += synapse0x1517710();
   input += synapse0x1517750();
   input += synapse0x1517790();
   input += synapse0x15177d0();
   input += synapse0x1517810();
   input += synapse0x1517850();
   input += synapse0x1517890();
   input += synapse0x15178d0();
   input += synapse0x1517910();
   input += synapse0x1517950();
   input += synapse0x1517990();
   input += synapse0x15179d0();
   input += synapse0x1517460();
   input += synapse0x15174a0();
   input += synapse0x1517b20();
   input += synapse0x1517b60();
   input += synapse0x1517ba0();
   input += synapse0x1517be0();
   input += synapse0x1517c20();
   input += synapse0x1517c60();
   return input;
}

double NNfunction_ss_dLuR::neuron0x15172d0() {
   double input = input0x15172d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1517ca0() {
   double input = 0.510368;
   input += synapse0x1500710();
   input += synapse0x1500750();
   input += synapse0x1500790();
   input += synapse0x15007d0();
   input += synapse0x1500810();
   input += synapse0x1500850();
   input += synapse0x1500890();
   input += synapse0x15008d0();
   input += synapse0x15183f0();
   input += synapse0x1518430();
   input += synapse0x1518470();
   input += synapse0x15184b0();
   input += synapse0x15184f0();
   input += synapse0x1518530();
   input += synapse0x1518570();
   input += synapse0x15185b0();
   input += synapse0x1517e30();
   input += synapse0x1517e70();
   input += synapse0x1518700();
   input += synapse0x1518740();
   input += synapse0x1518780();
   input += synapse0x15187c0();
   input += synapse0x1518800();
   input += synapse0x1518840();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1517ca0() {
   double input = input0x1517ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1518880() {
   double input = 0.369843;
   input += synapse0x1518bc0();
   input += synapse0x1518c00();
   input += synapse0x1518c40();
   input += synapse0x1518c80();
   input += synapse0x1518cc0();
   input += synapse0x1518d00();
   input += synapse0x1518d40();
   input += synapse0x1518d80();
   input += synapse0x1518dc0();
   input += synapse0x1518e00();
   input += synapse0x1518e40();
   input += synapse0x1518e80();
   input += synapse0x1518ec0();
   input += synapse0x1518f00();
   input += synapse0x1518f40();
   input += synapse0x1518f80();
   input += synapse0x1518a10();
   input += synapse0x1518a50();
   input += synapse0x15190d0();
   input += synapse0x1519110();
   input += synapse0x1519150();
   input += synapse0x1519190();
   input += synapse0x15191d0();
   input += synapse0x1519210();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1518880() {
   double input = input0x1518880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1519250() {
   double input = 1.35564;
   input += synapse0x1519590();
   input += synapse0x15195d0();
   input += synapse0x1519610();
   input += synapse0x1519650();
   input += synapse0x1519690();
   input += synapse0x15196d0();
   input += synapse0x1519710();
   input += synapse0x1519750();
   input += synapse0x1519790();
   input += synapse0x15197d0();
   input += synapse0x1519810();
   input += synapse0x1519850();
   input += synapse0x1519890();
   input += synapse0x15198d0();
   input += synapse0x1519910();
   input += synapse0x1519950();
   input += synapse0x15193e0();
   input += synapse0x1519420();
   input += synapse0x1509f50();
   input += synapse0x1509f90();
   input += synapse0x1509fd0();
   input += synapse0x150a010();
   input += synapse0x150a050();
   input += synapse0x150a090();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1519250() {
   double input = input0x1519250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x150a0d0() {
   double input = 2.5903;
   input += synapse0x150a410();
   input += synapse0x150a450();
   input += synapse0x150a490();
   input += synapse0x150a4d0();
   input += synapse0x150a510();
   input += synapse0x150a550();
   input += synapse0x150a590();
   input += synapse0x150a5d0();
   input += synapse0x150a610();
   input += synapse0x150a650();
   input += synapse0x150a690();
   input += synapse0x150a6d0();
   input += synapse0x150a710();
   input += synapse0x150a750();
   input += synapse0x150a790();
   input += synapse0x150a7d0();
   input += synapse0x150a260();
   input += synapse0x150a2a0();
   input += synapse0x150a920();
   input += synapse0x150a960();
   input += synapse0x150a9a0();
   input += synapse0x150a9e0();
   input += synapse0x150aa20();
   input += synapse0x150aa60();
   return input;
}

double NNfunction_ss_dLuR::neuron0x150a0d0() {
   double input = input0x150a0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x150aaa0() {
   double input = 0.793527;
   input += synapse0x150ade0();
   input += synapse0x150ae20();
   input += synapse0x150ae60();
   input += synapse0x150aea0();
   input += synapse0x150aee0();
   input += synapse0x150af20();
   input += synapse0x150af60();
   input += synapse0x150afa0();
   input += synapse0x150afe0();
   input += synapse0x150b020();
   input += synapse0x150b060();
   input += synapse0x150b0a0();
   input += synapse0x150b0e0();
   input += synapse0x150b120();
   input += synapse0x150b160();
   input += synapse0x150b1a0();
   input += synapse0x150ac30();
   input += synapse0x150ac70();
   input += synapse0x150b2f0();
   input += synapse0x150b330();
   input += synapse0x150b370();
   input += synapse0x150b3b0();
   input += synapse0x150b3f0();
   input += synapse0x150b430();
   return input;
}

double NNfunction_ss_dLuR::neuron0x150aaa0() {
   double input = input0x150aaa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x150b470() {
   double input = 0.471326;
   input += synapse0x150b7b0();
   input += synapse0x150b7f0();
   input += synapse0x150b830();
   input += synapse0x150b870();
   input += synapse0x150b8b0();
   input += synapse0x150b8f0();
   input += synapse0x150b930();
   input += synapse0x150b970();
   input += synapse0x150b9b0();
   input += synapse0x150b9f0();
   input += synapse0x150ba30();
   input += synapse0x150ba70();
   input += synapse0x150bab0();
   input += synapse0x150baf0();
   input += synapse0x150bb30();
   input += synapse0x150bb70();
   input += synapse0x150b600();
   input += synapse0x150b640();
   input += synapse0x150bcc0();
   input += synapse0x150bd00();
   input += synapse0x150bd40();
   input += synapse0x150bd80();
   input += synapse0x150bdc0();
   input += synapse0x150be00();
   return input;
}

double NNfunction_ss_dLuR::neuron0x150b470() {
   double input = input0x150b470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x151dab0() {
   double input = 0.67538;
   input += synapse0x151dcd0();
   input += synapse0x151dd10();
   input += synapse0x151dd50();
   input += synapse0x151dd90();
   input += synapse0x151ddd0();
   input += synapse0x151de10();
   input += synapse0x151de50();
   input += synapse0x151de90();
   input += synapse0x151ded0();
   input += synapse0x151df10();
   input += synapse0x151df50();
   input += synapse0x151df90();
   input += synapse0x151dfd0();
   input += synapse0x151e010();
   input += synapse0x151e050();
   input += synapse0x151e090();
   input += synapse0x150be40();
   input += synapse0x150be80();
   input += synapse0x151e1e0();
   input += synapse0x151e220();
   input += synapse0x151e260();
   input += synapse0x151e2a0();
   input += synapse0x151e2e0();
   input += synapse0x151e320();
   return input;
}

double NNfunction_ss_dLuR::neuron0x151dab0() {
   double input = input0x151dab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x151e360() {
   double input = 1.27835;
   input += synapse0x151e6a0();
   input += synapse0x151e6e0();
   input += synapse0x151e720();
   input += synapse0x151e760();
   input += synapse0x151e7a0();
   input += synapse0x151e7e0();
   input += synapse0x151e820();
   input += synapse0x151e860();
   input += synapse0x151e8a0();
   input += synapse0x151e8e0();
   input += synapse0x151e920();
   input += synapse0x151e960();
   input += synapse0x151e9a0();
   input += synapse0x151e9e0();
   input += synapse0x151ea20();
   input += synapse0x151ea60();
   input += synapse0x151e4f0();
   input += synapse0x151e530();
   input += synapse0x151ebb0();
   input += synapse0x151ebf0();
   input += synapse0x151ec30();
   input += synapse0x151ec70();
   input += synapse0x151ecb0();
   input += synapse0x151ecf0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x151e360() {
   double input = input0x151e360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x151ed30() {
   double input = 0.283854;
   input += synapse0x151f070();
   input += synapse0x151f0b0();
   input += synapse0x151f0f0();
   input += synapse0x151f130();
   input += synapse0x151f170();
   input += synapse0x151f1b0();
   input += synapse0x151f1f0();
   input += synapse0x151f230();
   input += synapse0x151f270();
   input += synapse0x151f2b0();
   input += synapse0x151f2f0();
   input += synapse0x151f330();
   input += synapse0x151f370();
   input += synapse0x151f3b0();
   input += synapse0x151f3f0();
   input += synapse0x151f430();
   input += synapse0x151eec0();
   input += synapse0x151ef00();
   input += synapse0x151f580();
   input += synapse0x151f5c0();
   input += synapse0x151f600();
   input += synapse0x151f640();
   input += synapse0x151f680();
   input += synapse0x151f6c0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x151ed30() {
   double input = input0x151ed30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x151f700() {
   double input = 0.673609;
   input += synapse0x151fa40();
   input += synapse0x151fa80();
   input += synapse0x151fac0();
   input += synapse0x151fb00();
   input += synapse0x151fb40();
   input += synapse0x151fb80();
   input += synapse0x151fbc0();
   input += synapse0x151fc00();
   input += synapse0x151fc40();
   input += synapse0x151fc80();
   input += synapse0x151fcc0();
   input += synapse0x151fd00();
   input += synapse0x151fd40();
   input += synapse0x151fd80();
   input += synapse0x151fdc0();
   input += synapse0x151fe00();
   input += synapse0x151f890();
   input += synapse0x151f8d0();
   input += synapse0x151ff50();
   input += synapse0x151ff90();
   input += synapse0x151ffd0();
   input += synapse0x1520010();
   input += synapse0x1520050();
   input += synapse0x1520090();
   return input;
}

double NNfunction_ss_dLuR::neuron0x151f700() {
   double input = input0x151f700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1526900() {
   double input = -0.665084;
   input += synapse0x14fc630();
   input += synapse0x14fc670();
   input += synapse0x14fdb40();
   input += synapse0x14fdb80();
   input += synapse0x14fe510();
   input += synapse0x14fe550();
   input += synapse0x14ff2e0();
   input += synapse0x14ff320();
   input += synapse0x14ffcb0();
   input += synapse0x14ffcf0();
   input += synapse0x1500680();
   input += synapse0x15006c0();
   input += synapse0x1501160();
   input += synapse0x15011a0();
   input += synapse0x1501b30();
   input += synapse0x1501b70();
   input += synapse0x14fec10();
   input += synapse0x14fec50();
   input += synapse0x15036e0();
   input += synapse0x1503720();
   input += synapse0x15040b0();
   input += synapse0x15040f0();
   input += synapse0x1504a80();
   input += synapse0x1504ac0();
   input += synapse0x1505450();
   input += synapse0x1505490();
   input += synapse0x14f95c0();
   input += synapse0x14f9600();
   input += synapse0x1507540();
   input += synapse0x1507580();
   input += synapse0x1507f10();
   input += synapse0x1507f50();
   input += synapse0x15088e0();
   input += synapse0x1508920();
   input += synapse0x15092b0();
   input += synapse0x15092f0();
   input += synapse0x1509c80();
   input += synapse0x1509cc0();
   input += synapse0x15027d0();
   input += synapse0x1502810();
   input += synapse0x150c080();
   input += synapse0x150c0c0();
   input += synapse0x150ca10();
   input += synapse0x150ca50();
   input += synapse0x150d3e0();
   input += synapse0x150d420();
   input += synapse0x150ddb0();
   input += synapse0x150ddf0();
   input += synapse0x150e780();
   input += synapse0x150e7c0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1526900() {
   double input = input0x1526900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1526ca0() {
   double input = 1.64839;
   input += synapse0x1510ec0();
   input += synapse0x1510f00();
   input += synapse0x1506480();
   input += synapse0x15064c0();
   input += synapse0x1513aa0();
   input += synapse0x1513ae0();
   input += synapse0x1514470();
   input += synapse0x15144b0();
   input += synapse0x1514e40();
   input += synapse0x1514e80();
   input += synapse0x1515810();
   input += synapse0x1515850();
   input += synapse0x15161e0();
   input += synapse0x1516220();
   input += synapse0x1516bb0();
   input += synapse0x1516bf0();
   input += synapse0x1517580();
   input += synapse0x15175c0();
   input += synapse0x1517f50();
   input += synapse0x1517f90();
   input += synapse0x1518b30();
   input += synapse0x1518b70();
   input += synapse0x1519500();
   input += synapse0x1519540();
   input += synapse0x150a380();
   input += synapse0x150a3c0();
   input += synapse0x150ad50();
   input += synapse0x150ad90();
   input += synapse0x150b720();
   input += synapse0x150b760();
   input += synapse0x151dc40();
   input += synapse0x151dc80();
   input += synapse0x151e610();
   input += synapse0x151e650();
   input += synapse0x151efe0();
   input += synapse0x151f020();
   input += synapse0x151f9b0();
   input += synapse0x151f9f0();
   input += synapse0x14fb8a0();
   input += synapse0x14fb8e0();
   input += synapse0x150f150();
   input += synapse0x150f190();
   input += synapse0x15200d0();
   input += synapse0x1520110();
   input += synapse0x1520150();
   input += synapse0x1520190();
   input += synapse0x1527040();
   input += synapse0x1527080();
   input += synapse0x15270c0();
   input += synapse0x1527100();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1526ca0() {
   double input = input0x1526ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1527140() {
   double input = 0.407557;
   input += synapse0x1527480();
   input += synapse0x15274c0();
   input += synapse0x1527500();
   input += synapse0x1527540();
   input += synapse0x1527580();
   input += synapse0x15275c0();
   input += synapse0x1527600();
   input += synapse0x1527640();
   input += synapse0x1527680();
   input += synapse0x15276c0();
   input += synapse0x1527700();
   input += synapse0x1527740();
   input += synapse0x1527780();
   input += synapse0x15277c0();
   input += synapse0x1527800();
   input += synapse0x1527840();
   input += synapse0x15272d0();
   input += synapse0x1527310();
   input += synapse0x1527990();
   input += synapse0x15279d0();
   input += synapse0x1527a10();
   input += synapse0x1527a50();
   input += synapse0x1527a90();
   input += synapse0x1527ad0();
   input += synapse0x1527b10();
   input += synapse0x1527b50();
   input += synapse0x1527b90();
   input += synapse0x1527bd0();
   input += synapse0x1527c10();
   input += synapse0x1527c50();
   input += synapse0x1527c90();
   input += synapse0x1527cd0();
   input += synapse0x1527880();
   input += synapse0x15278c0();
   input += synapse0x1527900();
   input += synapse0x1527940();
   input += synapse0x1527f20();
   input += synapse0x1527f60();
   input += synapse0x1527fa0();
   input += synapse0x1527fe0();
   input += synapse0x1528020();
   input += synapse0x1528060();
   input += synapse0x15280a0();
   input += synapse0x15280e0();
   input += synapse0x1528120();
   input += synapse0x1528160();
   input += synapse0x15281a0();
   input += synapse0x15281e0();
   input += synapse0x1528220();
   input += synapse0x1528260();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1527140() {
   double input = input0x1527140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x15282a0() {
   double input = 0.551613;
   input += synapse0x15285e0();
   input += synapse0x1528620();
   input += synapse0x1528660();
   input += synapse0x15286a0();
   input += synapse0x15286e0();
   input += synapse0x1528720();
   input += synapse0x1528760();
   input += synapse0x15287a0();
   input += synapse0x15287e0();
   input += synapse0x1528820();
   input += synapse0x1528860();
   input += synapse0x15288a0();
   input += synapse0x15288e0();
   input += synapse0x1528920();
   input += synapse0x1528960();
   input += synapse0x15289a0();
   input += synapse0x1528430();
   input += synapse0x1528470();
   input += synapse0x1528af0();
   input += synapse0x1528b30();
   input += synapse0x1528b70();
   input += synapse0x1528bb0();
   input += synapse0x1528bf0();
   input += synapse0x1528c30();
   input += synapse0x1528c70();
   input += synapse0x1528cb0();
   input += synapse0x1528cf0();
   input += synapse0x1528d30();
   input += synapse0x1528d70();
   input += synapse0x1528db0();
   input += synapse0x1528df0();
   input += synapse0x1528e30();
   input += synapse0x15289e0();
   input += synapse0x1528a20();
   input += synapse0x1528a60();
   input += synapse0x1528aa0();
   input += synapse0x1529080();
   input += synapse0x15290c0();
   input += synapse0x1529100();
   input += synapse0x1529140();
   input += synapse0x1529180();
   input += synapse0x15291c0();
   input += synapse0x1529200();
   input += synapse0x1529240();
   input += synapse0x1529280();
   input += synapse0x15292c0();
   input += synapse0x1529300();
   input += synapse0x1529340();
   input += synapse0x1529380();
   input += synapse0x15293c0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x15282a0() {
   double input = input0x15282a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x1529400() {
   double input = 0.63382;
   input += synapse0x1529740();
   input += synapse0x1529780();
   input += synapse0x15297c0();
   input += synapse0x1529800();
   input += synapse0x1529840();
   input += synapse0x1529880();
   input += synapse0x15298c0();
   input += synapse0x1529900();
   input += synapse0x1529940();
   input += synapse0x1529980();
   input += synapse0x15299c0();
   input += synapse0x1529a00();
   input += synapse0x1529a40();
   input += synapse0x1529a80();
   input += synapse0x1529ac0();
   input += synapse0x1529b00();
   input += synapse0x1529590();
   input += synapse0x15295d0();
   input += synapse0x1529c50();
   input += synapse0x1529c90();
   input += synapse0x1529cd0();
   input += synapse0x1529d10();
   input += synapse0x1529d50();
   input += synapse0x1529d90();
   input += synapse0x1529dd0();
   input += synapse0x1529e10();
   input += synapse0x1529e50();
   input += synapse0x1529e90();
   input += synapse0x1529ed0();
   input += synapse0x1529f10();
   input += synapse0x1529f50();
   input += synapse0x1529f90();
   input += synapse0x1529b40();
   input += synapse0x1529b80();
   input += synapse0x1529bc0();
   input += synapse0x1529c00();
   input += synapse0x152a1e0();
   input += synapse0x152a220();
   input += synapse0x152a260();
   input += synapse0x152a2a0();
   input += synapse0x152a2e0();
   input += synapse0x152a320();
   input += synapse0x152a360();
   input += synapse0x152a3a0();
   input += synapse0x152a3e0();
   input += synapse0x152a420();
   input += synapse0x152a460();
   input += synapse0x152a4a0();
   input += synapse0x152a4e0();
   input += synapse0x152a520();
   return input;
}

double NNfunction_ss_dLuR::neuron0x1529400() {
   double input = input0x1529400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x152a560() {
   double input = 7.79278;
   input += synapse0x14fb640();
   input += synapse0x152a780();
   input += synapse0x152a7c0();
   input += synapse0x152a800();
   input += synapse0x152a840();
   return input;
}

double NNfunction_ss_dLuR::neuron0x152a560() {
   double input = input0x152a560();
   return (input * 1)+0;
}

double NNfunction_ss_dLuR::synapse0x12b6490() {
   return (neuron0x14f6620()*-0.207017);
}

double NNfunction_ss_dLuR::synapse0x14f64e0() {
   return (neuron0x14f6960()*0.507637);
}

double NNfunction_ss_dLuR::synapse0x14f6520() {
   return (neuron0x14f6ca0()*0.217689);
}

double NNfunction_ss_dLuR::synapse0x14fb930() {
   return (neuron0x14f6fe0()*0.616693);
}

double NNfunction_ss_dLuR::synapse0x14fb970() {
   return (neuron0x14f7320()*-0.771549);
}

double NNfunction_ss_dLuR::synapse0x14fb9b0() {
   return (neuron0x14f7660()*0.128046);
}

double NNfunction_ss_dLuR::synapse0x14fb9f0() {
   return (neuron0x14f79a0()*-0.83295);
}

double NNfunction_ss_dLuR::synapse0x14fba30() {
   return (neuron0x14f7ce0()*-0.0235689);
}

double NNfunction_ss_dLuR::synapse0x14fba70() {
   return (neuron0x14f8020()*0.42148);
}

double NNfunction_ss_dLuR::synapse0x14fbab0() {
   return (neuron0x14f8360()*0.850797);
}

double NNfunction_ss_dLuR::synapse0x14fbaf0() {
   return (neuron0x14f86a0()*0.237297);
}

double NNfunction_ss_dLuR::synapse0x14fbb30() {
   return (neuron0x14f89e0()*-0.705);
}

double NNfunction_ss_dLuR::synapse0x14fbb70() {
   return (neuron0x14f8d20()*1.31262);
}

double NNfunction_ss_dLuR::synapse0x14fbbb0() {
   return (neuron0x14f9060()*0.129772);
}

double NNfunction_ss_dLuR::synapse0x14fbbf0() {
   return (neuron0x14f93a0()*-0.491261);
}

double NNfunction_ss_dLuR::synapse0x14fbc30() {
   return (neuron0x14f96e0()*-0.0355737);
}

double NNfunction_ss_dLuR::synapse0x14f6450() {
   return (neuron0x14f9a20()*0.249848);
}

double NNfunction_ss_dLuR::synapse0x14f6490() {
   return (neuron0x14f9f80()*-0.0162527);
}

double NNfunction_ss_dLuR::synapse0x12a7d30() {
   return (neuron0x14fa1a0()*0.732434);
}

double NNfunction_ss_dLuR::synapse0x12a7d70() {
   return (neuron0x14fa4e0()*0.521192);
}

double NNfunction_ss_dLuR::synapse0x14fbe90() {
   return (neuron0x14fa820()*0.209578);
}

double NNfunction_ss_dLuR::synapse0x14fbed0() {
   return (neuron0x14fab60()*0.357992);
}

double NNfunction_ss_dLuR::synapse0x14fbf10() {
   return (neuron0x14faea0()*0.150819);
}

double NNfunction_ss_dLuR::synapse0x14fbf50() {
   return (neuron0x14fb1e0()*-0.0929843);
}

double NNfunction_ss_dLuR::synapse0x14fc2d0() {
   return (neuron0x14f6620()*0.573354);
}

double NNfunction_ss_dLuR::synapse0x14fc310() {
   return (neuron0x14f6960()*0.192124);
}

double NNfunction_ss_dLuR::synapse0x14fc350() {
   return (neuron0x14f6ca0()*-0.837965);
}

double NNfunction_ss_dLuR::synapse0x14fc390() {
   return (neuron0x14f6fe0()*-0.144366);
}

double NNfunction_ss_dLuR::synapse0x14fc3d0() {
   return (neuron0x14f7320()*-0.161755);
}

double NNfunction_ss_dLuR::synapse0x14fc410() {
   return (neuron0x14f7660()*-0.500451);
}

double NNfunction_ss_dLuR::synapse0x14fc450() {
   return (neuron0x14f79a0()*-0.0915809);
}

double NNfunction_ss_dLuR::synapse0x14fc490() {
   return (neuron0x14f7ce0()*0.0501637);
}

double NNfunction_ss_dLuR::synapse0x14fc4d0() {
   return (neuron0x14f8020()*-0.0712685);
}

double NNfunction_ss_dLuR::synapse0x14fbd80() {
   return (neuron0x14f8360()*1.23621);
}

double NNfunction_ss_dLuR::synapse0x14fbdc0() {
   return (neuron0x14f86a0()*-0.464295);
}

double NNfunction_ss_dLuR::synapse0x14fbe00() {
   return (neuron0x14f89e0()*-0.830611);
}

double NNfunction_ss_dLuR::synapse0x14fbe40() {
   return (neuron0x14f8d20()*0.545128);
}

double NNfunction_ss_dLuR::synapse0x14fc720() {
   return (neuron0x14f9060()*-0.458194);
}

double NNfunction_ss_dLuR::synapse0x14fc760() {
   return (neuron0x14f93a0()*-0.0670142);
}

double NNfunction_ss_dLuR::synapse0x14fc7a0() {
   return (neuron0x14f96e0()*-0.364878);
}

double NNfunction_ss_dLuR::synapse0x14fc120() {
   return (neuron0x14f9a20()*1.17234);
}

double NNfunction_ss_dLuR::synapse0x14fc160() {
   return (neuron0x14f9f80()*0.469146);
}

double NNfunction_ss_dLuR::synapse0x14fc8f0() {
   return (neuron0x14fa1a0()*-0.641176);
}

double NNfunction_ss_dLuR::synapse0x14fc930() {
   return (neuron0x14fa4e0()*-0.645412);
}

double NNfunction_ss_dLuR::synapse0x14fc970() {
   return (neuron0x14fa820()*0.110238);
}

double NNfunction_ss_dLuR::synapse0x14fc9b0() {
   return (neuron0x14fab60()*-0.341744);
}

double NNfunction_ss_dLuR::synapse0x14fc9f0() {
   return (neuron0x14faea0()*-0.9151);
}

double NNfunction_ss_dLuR::synapse0x14fca30() {
   return (neuron0x14fb1e0()*0.676503);
}

double NNfunction_ss_dLuR::synapse0x14fcdb0() {
   return (neuron0x14f6620()*0.0379394);
}

double NNfunction_ss_dLuR::synapse0x14fcdf0() {
   return (neuron0x14f6960()*-0.420013);
}

double NNfunction_ss_dLuR::synapse0x14fce30() {
   return (neuron0x14f6ca0()*0.0918513);
}

double NNfunction_ss_dLuR::synapse0x14fce70() {
   return (neuron0x14f6fe0()*0.57099);
}

double NNfunction_ss_dLuR::synapse0x14fceb0() {
   return (neuron0x14f7320()*0.499346);
}

double NNfunction_ss_dLuR::synapse0x14fcef0() {
   return (neuron0x14f7660()*0.257291);
}

double NNfunction_ss_dLuR::synapse0x14fcf30() {
   return (neuron0x14f79a0()*0.563883);
}

double NNfunction_ss_dLuR::synapse0x14fcf70() {
   return (neuron0x14f7ce0()*0.0835226);
}

double NNfunction_ss_dLuR::synapse0x14fcfb0() {
   return (neuron0x14f8020()*0.363995);
}

double NNfunction_ss_dLuR::synapse0x14fcff0() {
   return (neuron0x14f8360()*-0.534862);
}

double NNfunction_ss_dLuR::synapse0x14fd030() {
   return (neuron0x14f86a0()*-0.0803558);
}

double NNfunction_ss_dLuR::synapse0x14fd070() {
   return (neuron0x14f89e0()*-0.277831);
}

double NNfunction_ss_dLuR::synapse0x14fd0b0() {
   return (neuron0x14f8d20()*0.427356);
}

double NNfunction_ss_dLuR::synapse0x14fd0f0() {
   return (neuron0x14f9060()*0.303584);
}

double NNfunction_ss_dLuR::synapse0x14fd130() {
   return (neuron0x14f93a0()*-0.108078);
}

double NNfunction_ss_dLuR::synapse0x14fd170() {
   return (neuron0x14f96e0()*-0.116762);
}

double NNfunction_ss_dLuR::synapse0x14fcc00() {
   return (neuron0x14f9a20()*-0.424646);
}

double NNfunction_ss_dLuR::synapse0x14fcc40() {
   return (neuron0x14f9f80()*0.252788);
}

double NNfunction_ss_dLuR::synapse0x12b5b80() {
   return (neuron0x14fa1a0()*-0.104573);
}

double NNfunction_ss_dLuR::synapse0x12b5bc0() {
   return (neuron0x14fa4e0()*-0.207592);
}

double NNfunction_ss_dLuR::synapse0x14e56b0() {
   return (neuron0x14fa820()*0.262398);
}

double NNfunction_ss_dLuR::synapse0x14e56f0() {
   return (neuron0x14fab60()*-0.32539);
}

double NNfunction_ss_dLuR::synapse0x14e5730() {
   return (neuron0x14faea0()*0.200596);
}

double NNfunction_ss_dLuR::synapse0x14f6560() {
   return (neuron0x14fb1e0()*0.0538385);
}

double NNfunction_ss_dLuR::synapse0x14fc6c0() {
   return (neuron0x14f6620()*0.218031);
}

double NNfunction_ss_dLuR::synapse0x14f65a0() {
   return (neuron0x14f6960()*-0.0901027);
}

double NNfunction_ss_dLuR::synapse0x14f65e0() {
   return (neuron0x14f6ca0()*0.144469);
}

double NNfunction_ss_dLuR::synapse0x14fd2c0() {
   return (neuron0x14f6fe0()*0.12666);
}

double NNfunction_ss_dLuR::synapse0x14fd300() {
   return (neuron0x14f7320()*-0.137172);
}

double NNfunction_ss_dLuR::synapse0x14fd340() {
   return (neuron0x14f7660()*0.443545);
}

double NNfunction_ss_dLuR::synapse0x14fd380() {
   return (neuron0x14f79a0()*0.413226);
}

double NNfunction_ss_dLuR::synapse0x14fd3c0() {
   return (neuron0x14f7ce0()*0.461861);
}

double NNfunction_ss_dLuR::synapse0x14fd400() {
   return (neuron0x14f8020()*0.0135884);
}

double NNfunction_ss_dLuR::synapse0x14fd440() {
   return (neuron0x14f8360()*-0.14603);
}

double NNfunction_ss_dLuR::synapse0x14fd480() {
   return (neuron0x14f86a0()*0.159827);
}

double NNfunction_ss_dLuR::synapse0x14fd4c0() {
   return (neuron0x14f89e0()*-0.548553);
}

double NNfunction_ss_dLuR::synapse0x14fd500() {
   return (neuron0x14f8d20()*1.12471);
}

double NNfunction_ss_dLuR::synapse0x14fd540() {
   return (neuron0x14f9060()*0.320636);
}

double NNfunction_ss_dLuR::synapse0x14fd580() {
   return (neuron0x14f93a0()*-1.2955);
}

double NNfunction_ss_dLuR::synapse0x14fd5c0() {
   return (neuron0x14f96e0()*0.253369);
}

double NNfunction_ss_dLuR::synapse0x14fc510() {
   return (neuron0x14f9a20()*-0.318577);
}

double NNfunction_ss_dLuR::synapse0x14fc550() {
   return (neuron0x14f9f80()*0.122814);
}

double NNfunction_ss_dLuR::synapse0x14fd710() {
   return (neuron0x14fa1a0()*0.259981);
}

double NNfunction_ss_dLuR::synapse0x14fd750() {
   return (neuron0x14fa4e0()*-0.3108);
}

double NNfunction_ss_dLuR::synapse0x14fd790() {
   return (neuron0x14fa820()*-1.11885);
}

double NNfunction_ss_dLuR::synapse0x14fd7d0() {
   return (neuron0x14fab60()*0.0428673);
}

double NNfunction_ss_dLuR::synapse0x14fd810() {
   return (neuron0x14faea0()*-0.312185);
}

double NNfunction_ss_dLuR::synapse0x14fd850() {
   return (neuron0x14fb1e0()*-0.054294);
}

double NNfunction_ss_dLuR::synapse0x14fdbd0() {
   return (neuron0x14f6620()*-0.00518717);
}

double NNfunction_ss_dLuR::synapse0x14fdc10() {
   return (neuron0x14f6960()*-0.15694);
}

double NNfunction_ss_dLuR::synapse0x14fdc50() {
   return (neuron0x14f6ca0()*-0.164684);
}

double NNfunction_ss_dLuR::synapse0x14fdc90() {
   return (neuron0x14f6fe0()*-0.0453202);
}

double NNfunction_ss_dLuR::synapse0x14fdcd0() {
   return (neuron0x14f7320()*-0.00265335);
}

double NNfunction_ss_dLuR::synapse0x14fdd10() {
   return (neuron0x14f7660()*-0.000400348);
}

double NNfunction_ss_dLuR::synapse0x14fdd50() {
   return (neuron0x14f79a0()*0.047203);
}

double NNfunction_ss_dLuR::synapse0x14fdd90() {
   return (neuron0x14f7ce0()*-0.0162742);
}

double NNfunction_ss_dLuR::synapse0x14fddd0() {
   return (neuron0x14f8020()*0.0157631);
}

double NNfunction_ss_dLuR::synapse0x14fde10() {
   return (neuron0x14f8360()*-0.0289958);
}

double NNfunction_ss_dLuR::synapse0x14fde50() {
   return (neuron0x14f86a0()*0.0258839);
}

double NNfunction_ss_dLuR::synapse0x14fde90() {
   return (neuron0x14f89e0()*-0.568031);
}

double NNfunction_ss_dLuR::synapse0x14fded0() {
   return (neuron0x14f8d20()*-0.040363);
}

double NNfunction_ss_dLuR::synapse0x14fdf10() {
   return (neuron0x14f9060()*0.0565975);
}

double NNfunction_ss_dLuR::synapse0x14fdf50() {
   return (neuron0x14f93a0()*-1.18348);
}

double NNfunction_ss_dLuR::synapse0x14fdf90() {
   return (neuron0x14f96e0()*-0.0612299);
}

double NNfunction_ss_dLuR::synapse0x14fda20() {
   return (neuron0x14f9a20()*0.00252473);
}

double NNfunction_ss_dLuR::synapse0x14fda60() {
   return (neuron0x14f9f80()*0.111594);
}

double NNfunction_ss_dLuR::synapse0x14fe0e0() {
   return (neuron0x14fa1a0()*0.00817859);
}

double NNfunction_ss_dLuR::synapse0x14fe120() {
   return (neuron0x14fa4e0()*-0.0163292);
}

double NNfunction_ss_dLuR::synapse0x14fe160() {
   return (neuron0x14fa820()*0.088518);
}

double NNfunction_ss_dLuR::synapse0x14fe1a0() {
   return (neuron0x14fab60()*0.0523966);
}

double NNfunction_ss_dLuR::synapse0x14fe1e0() {
   return (neuron0x14faea0()*0.0233976);
}

double NNfunction_ss_dLuR::synapse0x14fe220() {
   return (neuron0x14fb1e0()*0.0176368);
}

double NNfunction_ss_dLuR::synapse0x14fe5a0() {
   return (neuron0x14f6620()*-1.16277);
}

double NNfunction_ss_dLuR::synapse0x14fe5e0() {
   return (neuron0x14f6960()*-0.329001);
}

double NNfunction_ss_dLuR::synapse0x14fe620() {
   return (neuron0x14f6ca0()*-0.605151);
}

double NNfunction_ss_dLuR::synapse0x14fe660() {
   return (neuron0x14f6fe0()*-0.982411);
}

double NNfunction_ss_dLuR::synapse0x14fe6a0() {
   return (neuron0x14f7320()*0.0354356);
}

double NNfunction_ss_dLuR::synapse0x14fe6e0() {
   return (neuron0x14f7660()*0.594157);
}

double NNfunction_ss_dLuR::synapse0x14fe720() {
   return (neuron0x14f79a0()*0.542656);
}

double NNfunction_ss_dLuR::synapse0x14fe760() {
   return (neuron0x14f7ce0()*1.10618);
}

double NNfunction_ss_dLuR::synapse0x14fe7a0() {
   return (neuron0x14f8020()*-0.168097);
}

double NNfunction_ss_dLuR::synapse0x12b5ef0() {
   return (neuron0x14f8360()*-1.13032);
}

double NNfunction_ss_dLuR::synapse0x12b5f30() {
   return (neuron0x14f86a0()*0.477792);
}

double NNfunction_ss_dLuR::synapse0x12b5f70() {
   return (neuron0x14f89e0()*0.188411);
}

double NNfunction_ss_dLuR::synapse0x12b5fb0() {
   return (neuron0x14f8d20()*-0.0679669);
}

double NNfunction_ss_dLuR::synapse0x12b5ff0() {
   return (neuron0x14f9060()*0.225081);
}

double NNfunction_ss_dLuR::synapse0x12b6030() {
   return (neuron0x14f93a0()*-0.0855679);
}

double NNfunction_ss_dLuR::synapse0x12b6070() {
   return (neuron0x14f96e0()*0.068231);
}

double NNfunction_ss_dLuR::synapse0x14fe3f0() {
   return (neuron0x14f9a20()*-0.254923);
}

double NNfunction_ss_dLuR::synapse0x14fe430() {
   return (neuron0x14f9f80()*0.269992);
}

double NNfunction_ss_dLuR::synapse0x12b61c0() {
   return (neuron0x14fa1a0()*-1.27108);
}

double NNfunction_ss_dLuR::synapse0x12b6200() {
   return (neuron0x14fa4e0()*1.23934);
}

double NNfunction_ss_dLuR::synapse0x12b6240() {
   return (neuron0x14fa820()*0.684042);
}

double NNfunction_ss_dLuR::synapse0x12b6280() {
   return (neuron0x14fab60()*-0.0832395);
}

double NNfunction_ss_dLuR::synapse0x12b62c0() {
   return (neuron0x14faea0()*-0.102071);
}

double NNfunction_ss_dLuR::synapse0x14feff0() {
   return (neuron0x14fb1e0()*0.218489);
}

double NNfunction_ss_dLuR::synapse0x14ff370() {
   return (neuron0x14f6620()*-0.50855);
}

double NNfunction_ss_dLuR::synapse0x14ff3b0() {
   return (neuron0x14f6960()*-0.146321);
}

double NNfunction_ss_dLuR::synapse0x14ff3f0() {
   return (neuron0x14f6ca0()*-0.345606);
}

double NNfunction_ss_dLuR::synapse0x14ff430() {
   return (neuron0x14f6fe0()*0.631011);
}

double NNfunction_ss_dLuR::synapse0x14ff470() {
   return (neuron0x14f7320()*-0.664891);
}

double NNfunction_ss_dLuR::synapse0x14ff4b0() {
   return (neuron0x14f7660()*0.0146466);
}

double NNfunction_ss_dLuR::synapse0x14ff4f0() {
   return (neuron0x14f79a0()*0.478715);
}

double NNfunction_ss_dLuR::synapse0x14ff530() {
   return (neuron0x14f7ce0()*-1.81676);
}

double NNfunction_ss_dLuR::synapse0x14ff570() {
   return (neuron0x14f8020()*0.543871);
}

double NNfunction_ss_dLuR::synapse0x14ff5b0() {
   return (neuron0x14f8360()*0.0256716);
}

double NNfunction_ss_dLuR::synapse0x14ff5f0() {
   return (neuron0x14f86a0()*-0.0715122);
}

double NNfunction_ss_dLuR::synapse0x14ff630() {
   return (neuron0x14f89e0()*-1.15533);
}

double NNfunction_ss_dLuR::synapse0x14ff670() {
   return (neuron0x14f8d20()*0.383323);
}

double NNfunction_ss_dLuR::synapse0x14ff6b0() {
   return (neuron0x14f9060()*-0.330145);
}

double NNfunction_ss_dLuR::synapse0x14ff6f0() {
   return (neuron0x14f93a0()*0.497408);
}

double NNfunction_ss_dLuR::synapse0x14ff730() {
   return (neuron0x14f96e0()*0.675383);
}

double NNfunction_ss_dLuR::synapse0x14ff1c0() {
   return (neuron0x14f9a20()*-0.20868);
}

double NNfunction_ss_dLuR::synapse0x14ff200() {
   return (neuron0x14f9f80()*-0.406417);
}

double NNfunction_ss_dLuR::synapse0x14ff880() {
   return (neuron0x14fa1a0()*-0.200559);
}

double NNfunction_ss_dLuR::synapse0x14ff8c0() {
   return (neuron0x14fa4e0()*0.647435);
}

double NNfunction_ss_dLuR::synapse0x14ff900() {
   return (neuron0x14fa820()*-0.447616);
}

double NNfunction_ss_dLuR::synapse0x14ff940() {
   return (neuron0x14fab60()*-0.883734);
}

double NNfunction_ss_dLuR::synapse0x14ff980() {
   return (neuron0x14faea0()*0.148899);
}

double NNfunction_ss_dLuR::synapse0x14ff9c0() {
   return (neuron0x14fb1e0()*-0.22802);
}

double NNfunction_ss_dLuR::synapse0x14ffd40() {
   return (neuron0x14f6620()*0.229753);
}

double NNfunction_ss_dLuR::synapse0x14ffd80() {
   return (neuron0x14f6960()*1.19618);
}

double NNfunction_ss_dLuR::synapse0x14ffdc0() {
   return (neuron0x14f6ca0()*0.274119);
}

double NNfunction_ss_dLuR::synapse0x14ffe00() {
   return (neuron0x14f6fe0()*0.593853);
}

double NNfunction_ss_dLuR::synapse0x14ffe40() {
   return (neuron0x14f7320()*0.237764);
}

double NNfunction_ss_dLuR::synapse0x14ffe80() {
   return (neuron0x14f7660()*-0.120827);
}

double NNfunction_ss_dLuR::synapse0x14ffec0() {
   return (neuron0x14f79a0()*0.167631);
}

double NNfunction_ss_dLuR::synapse0x14fff00() {
   return (neuron0x14f7ce0()*0.41487);
}

double NNfunction_ss_dLuR::synapse0x14fff40() {
   return (neuron0x14f8020()*0.541135);
}

double NNfunction_ss_dLuR::synapse0x14fff80() {
   return (neuron0x14f8360()*-0.11407);
}

double NNfunction_ss_dLuR::synapse0x14fffc0() {
   return (neuron0x14f86a0()*0.509285);
}

double NNfunction_ss_dLuR::synapse0x1500000() {
   return (neuron0x14f89e0()*-1.04523);
}

double NNfunction_ss_dLuR::synapse0x1500040() {
   return (neuron0x14f8d20()*-0.0823704);
}

double NNfunction_ss_dLuR::synapse0x1500080() {
   return (neuron0x14f9060()*-0.636864);
}

double NNfunction_ss_dLuR::synapse0x15000c0() {
   return (neuron0x14f93a0()*0.5624);
}

double NNfunction_ss_dLuR::synapse0x1500100() {
   return (neuron0x14f96e0()*-0.0597817);
}

double NNfunction_ss_dLuR::synapse0x14ffb90() {
   return (neuron0x14f9a20()*-0.1361);
}

double NNfunction_ss_dLuR::synapse0x14ffbd0() {
   return (neuron0x14f9f80()*-0.00884714);
}

double NNfunction_ss_dLuR::synapse0x1500250() {
   return (neuron0x14fa1a0()*-0.176196);
}

double NNfunction_ss_dLuR::synapse0x1500290() {
   return (neuron0x14fa4e0()*-0.415208);
}

double NNfunction_ss_dLuR::synapse0x15002d0() {
   return (neuron0x14fa820()*-0.058503);
}

double NNfunction_ss_dLuR::synapse0x1500310() {
   return (neuron0x14fab60()*0.336588);
}

double NNfunction_ss_dLuR::synapse0x1500350() {
   return (neuron0x14faea0()*0.138856);
}

double NNfunction_ss_dLuR::synapse0x1500390() {
   return (neuron0x14fb1e0()*-0.271111);
}

double NNfunction_ss_dLuR::synapse0x14f9e70() {
   return (neuron0x14f6620()*-0.0306872);
}

double NNfunction_ss_dLuR::synapse0x14f9eb0() {
   return (neuron0x14f6960()*0.0867361);
}

double NNfunction_ss_dLuR::synapse0x14f9ef0() {
   return (neuron0x14f6ca0()*-0.117521);
}

double NNfunction_ss_dLuR::synapse0x14f9f30() {
   return (neuron0x14f6fe0()*1.67176);
}

double NNfunction_ss_dLuR::synapse0x1500920() {
   return (neuron0x14f7320()*0.00282945);
}

double NNfunction_ss_dLuR::synapse0x1500960() {
   return (neuron0x14f7660()*0.0357457);
}

double NNfunction_ss_dLuR::synapse0x15009a0() {
   return (neuron0x14f79a0()*0.0252486);
}

double NNfunction_ss_dLuR::synapse0x15009e0() {
   return (neuron0x14f7ce0()*-0.0204183);
}

double NNfunction_ss_dLuR::synapse0x1500a20() {
   return (neuron0x14f8020()*0.0503081);
}

double NNfunction_ss_dLuR::synapse0x1500a60() {
   return (neuron0x14f8360()*-0.0599475);
}

double NNfunction_ss_dLuR::synapse0x1500aa0() {
   return (neuron0x14f86a0()*0.0120046);
}

double NNfunction_ss_dLuR::synapse0x1500ae0() {
   return (neuron0x14f89e0()*1.26862);
}

double NNfunction_ss_dLuR::synapse0x1500b20() {
   return (neuron0x14f8d20()*-0.0861513);
}

double NNfunction_ss_dLuR::synapse0x1500b60() {
   return (neuron0x14f9060()*0.0367122);
}

double NNfunction_ss_dLuR::synapse0x1500ba0() {
   return (neuron0x14f93a0()*0.30808);
}

double NNfunction_ss_dLuR::synapse0x1500be0() {
   return (neuron0x14f96e0()*0.0162799);
}

double NNfunction_ss_dLuR::synapse0x1500560() {
   return (neuron0x14f9a20()*0.0537722);
}

double NNfunction_ss_dLuR::synapse0x15005a0() {
   return (neuron0x14f9f80()*0.0214573);
}

double NNfunction_ss_dLuR::synapse0x1500d30() {
   return (neuron0x14fa1a0()*0.0526029);
}

double NNfunction_ss_dLuR::synapse0x1500d70() {
   return (neuron0x14fa4e0()*0.0386216);
}

double NNfunction_ss_dLuR::synapse0x1500db0() {
   return (neuron0x14fa820()*0.0885218);
}

double NNfunction_ss_dLuR::synapse0x1500df0() {
   return (neuron0x14fab60()*-0.0218268);
}

double NNfunction_ss_dLuR::synapse0x1500e30() {
   return (neuron0x14faea0()*-0.00159219);
}

double NNfunction_ss_dLuR::synapse0x1500e70() {
   return (neuron0x14fb1e0()*-0.0714555);
}

double NNfunction_ss_dLuR::synapse0x15011f0() {
   return (neuron0x14f6620()*0.924115);
}

double NNfunction_ss_dLuR::synapse0x1501230() {
   return (neuron0x14f6960()*-0.769409);
}

double NNfunction_ss_dLuR::synapse0x1501270() {
   return (neuron0x14f6ca0()*0.934461);
}

double NNfunction_ss_dLuR::synapse0x15012b0() {
   return (neuron0x14f6fe0()*0.786038);
}

double NNfunction_ss_dLuR::synapse0x15012f0() {
   return (neuron0x14f7320()*-0.277668);
}

double NNfunction_ss_dLuR::synapse0x1501330() {
   return (neuron0x14f7660()*0.23533);
}

double NNfunction_ss_dLuR::synapse0x1501370() {
   return (neuron0x14f79a0()*-0.341362);
}

double NNfunction_ss_dLuR::synapse0x15013b0() {
   return (neuron0x14f7ce0()*-0.803894);
}

double NNfunction_ss_dLuR::synapse0x15013f0() {
   return (neuron0x14f8020()*-0.0734237);
}

double NNfunction_ss_dLuR::synapse0x1501430() {
   return (neuron0x14f8360()*0.211341);
}

double NNfunction_ss_dLuR::synapse0x1501470() {
   return (neuron0x14f86a0()*0.839764);
}

double NNfunction_ss_dLuR::synapse0x15014b0() {
   return (neuron0x14f89e0()*0.458424);
}

double NNfunction_ss_dLuR::synapse0x15014f0() {
   return (neuron0x14f8d20()*-0.134345);
}

double NNfunction_ss_dLuR::synapse0x1501530() {
   return (neuron0x14f9060()*-0.428186);
}

double NNfunction_ss_dLuR::synapse0x1501570() {
   return (neuron0x14f93a0()*-0.093429);
}

double NNfunction_ss_dLuR::synapse0x15015b0() {
   return (neuron0x14f96e0()*1.53751);
}

double NNfunction_ss_dLuR::synapse0x1501040() {
   return (neuron0x14f9a20()*0.0593405);
}

double NNfunction_ss_dLuR::synapse0x1501080() {
   return (neuron0x14f9f80()*1.11779);
}

double NNfunction_ss_dLuR::synapse0x1501700() {
   return (neuron0x14fa1a0()*0.501641);
}

double NNfunction_ss_dLuR::synapse0x1501740() {
   return (neuron0x14fa4e0()*-0.969137);
}

double NNfunction_ss_dLuR::synapse0x1501780() {
   return (neuron0x14fa820()*0.789161);
}

double NNfunction_ss_dLuR::synapse0x15017c0() {
   return (neuron0x14fab60()*1.05602);
}

double NNfunction_ss_dLuR::synapse0x1501800() {
   return (neuron0x14faea0()*-0.228743);
}

double NNfunction_ss_dLuR::synapse0x1501840() {
   return (neuron0x14fb1e0()*-0.7201);
}

double NNfunction_ss_dLuR::synapse0x1501bc0() {
   return (neuron0x14f6620()*-0.00720768);
}

double NNfunction_ss_dLuR::synapse0x1501c00() {
   return (neuron0x14f6960()*-0.000985118);
}

double NNfunction_ss_dLuR::synapse0x1501c40() {
   return (neuron0x14f6ca0()*-0.0644449);
}

double NNfunction_ss_dLuR::synapse0x1501c80() {
   return (neuron0x14f6fe0()*0.106947);
}

double NNfunction_ss_dLuR::synapse0x1501cc0() {
   return (neuron0x14f7320()*-0.0286614);
}

double NNfunction_ss_dLuR::synapse0x1501d00() {
   return (neuron0x14f7660()*0.0253652);
}

double NNfunction_ss_dLuR::synapse0x1501d40() {
   return (neuron0x14f79a0()*0.0314688);
}

double NNfunction_ss_dLuR::synapse0x1501d80() {
   return (neuron0x14f7ce0()*0.00139459);
}

double NNfunction_ss_dLuR::synapse0x1501dc0() {
   return (neuron0x14f8020()*0.0539476);
}

double NNfunction_ss_dLuR::synapse0x1501e00() {
   return (neuron0x14f8360()*0.00666875);
}

double NNfunction_ss_dLuR::synapse0x1501e40() {
   return (neuron0x14f86a0()*0.0371912);
}

double NNfunction_ss_dLuR::synapse0x1501e80() {
   return (neuron0x14f89e0()*-2.84997);
}

double NNfunction_ss_dLuR::synapse0x1501ec0() {
   return (neuron0x14f8d20()*0.0177279);
}

double NNfunction_ss_dLuR::synapse0x1501f00() {
   return (neuron0x14f9060()*0.0360092);
}

double NNfunction_ss_dLuR::synapse0x1501f40() {
   return (neuron0x14f93a0()*-0.0654646);
}

double NNfunction_ss_dLuR::synapse0x1501f80() {
   return (neuron0x14f96e0()*-0.00791807);
}

double NNfunction_ss_dLuR::synapse0x1501a10() {
   return (neuron0x14f9a20()*0.00874214);
}

double NNfunction_ss_dLuR::synapse0x1501a50() {
   return (neuron0x14f9f80()*-0.00988561);
}

double NNfunction_ss_dLuR::synapse0x14fe7e0() {
   return (neuron0x14fa1a0()*0.00864238);
}

double NNfunction_ss_dLuR::synapse0x14fe820() {
   return (neuron0x14fa4e0()*0.0343313);
}

double NNfunction_ss_dLuR::synapse0x14fe860() {
   return (neuron0x14fa820()*0.0441207);
}

double NNfunction_ss_dLuR::synapse0x14fe8a0() {
   return (neuron0x14fab60()*0.0229613);
}

double NNfunction_ss_dLuR::synapse0x14fe8e0() {
   return (neuron0x14faea0()*0.0290676);
}

double NNfunction_ss_dLuR::synapse0x14fe920() {
   return (neuron0x14fb1e0()*-0.111295);
}

double NNfunction_ss_dLuR::synapse0x14feca0() {
   return (neuron0x14f6620()*-0.00736938);
}

double NNfunction_ss_dLuR::synapse0x14fece0() {
   return (neuron0x14f6960()*0.03913);
}

double NNfunction_ss_dLuR::synapse0x14fed20() {
   return (neuron0x14f6ca0()*-0.00588732);
}

double NNfunction_ss_dLuR::synapse0x14fed60() {
   return (neuron0x14f6fe0()*1.95159);
}

double NNfunction_ss_dLuR::synapse0x14feda0() {
   return (neuron0x14f7320()*-0.0222045);
}

double NNfunction_ss_dLuR::synapse0x14fede0() {
   return (neuron0x14f7660()*0.0266254);
}

double NNfunction_ss_dLuR::synapse0x14fee20() {
   return (neuron0x14f79a0()*0.0171003);
}

double NNfunction_ss_dLuR::synapse0x14fee60() {
   return (neuron0x14f7ce0()*-0.0389373);
}

double NNfunction_ss_dLuR::synapse0x14feea0() {
   return (neuron0x14f8020()*0.0189468);
}

double NNfunction_ss_dLuR::synapse0x14feee0() {
   return (neuron0x14f8360()*-0.015029);
}

double NNfunction_ss_dLuR::synapse0x14fef20() {
   return (neuron0x14f86a0()*0.0121296);
}

double NNfunction_ss_dLuR::synapse0x14fef60() {
   return (neuron0x14f89e0()*0.467077);
}

double NNfunction_ss_dLuR::synapse0x14fefa0() {
   return (neuron0x14f8d20()*-0.0488887);
}

double NNfunction_ss_dLuR::synapse0x15030e0() {
   return (neuron0x14f9060()*0.0266309);
}

double NNfunction_ss_dLuR::synapse0x1503120() {
   return (neuron0x14f93a0()*0.349325);
}

double NNfunction_ss_dLuR::synapse0x1503160() {
   return (neuron0x14f96e0()*0.00078594);
}

double NNfunction_ss_dLuR::synapse0x14feaf0() {
   return (neuron0x14f9a20()*0.0274044);
}

double NNfunction_ss_dLuR::synapse0x14feb30() {
   return (neuron0x14f9f80()*-0.0243336);
}

double NNfunction_ss_dLuR::synapse0x15032b0() {
   return (neuron0x14fa1a0()*0.000634106);
}

double NNfunction_ss_dLuR::synapse0x15032f0() {
   return (neuron0x14fa4e0()*0.0213237);
}

double NNfunction_ss_dLuR::synapse0x1503330() {
   return (neuron0x14fa820()*0.0291556);
}

double NNfunction_ss_dLuR::synapse0x1503370() {
   return (neuron0x14fab60()*-0.00307402);
}

double NNfunction_ss_dLuR::synapse0x15033b0() {
   return (neuron0x14faea0()*-0.0102317);
}

double NNfunction_ss_dLuR::synapse0x15033f0() {
   return (neuron0x14fb1e0()*-0.037632);
}

double NNfunction_ss_dLuR::synapse0x1503770() {
   return (neuron0x14f6620()*0.686797);
}

double NNfunction_ss_dLuR::synapse0x15037b0() {
   return (neuron0x14f6960()*0.179665);
}

double NNfunction_ss_dLuR::synapse0x15037f0() {
   return (neuron0x14f6ca0()*-0.794019);
}

double NNfunction_ss_dLuR::synapse0x1503830() {
   return (neuron0x14f6fe0()*0.153024);
}

double NNfunction_ss_dLuR::synapse0x1503870() {
   return (neuron0x14f7320()*-0.338775);
}

double NNfunction_ss_dLuR::synapse0x15038b0() {
   return (neuron0x14f7660()*-0.355258);
}

double NNfunction_ss_dLuR::synapse0x15038f0() {
   return (neuron0x14f79a0()*-0.107807);
}

double NNfunction_ss_dLuR::synapse0x1503930() {
   return (neuron0x14f7ce0()*-0.182971);
}

double NNfunction_ss_dLuR::synapse0x1503970() {
   return (neuron0x14f8020()*-0.22603);
}

double NNfunction_ss_dLuR::synapse0x15039b0() {
   return (neuron0x14f8360()*0.140959);
}

double NNfunction_ss_dLuR::synapse0x15039f0() {
   return (neuron0x14f86a0()*-0.633088);
}

double NNfunction_ss_dLuR::synapse0x1503a30() {
   return (neuron0x14f89e0()*1.021);
}

double NNfunction_ss_dLuR::synapse0x1503a70() {
   return (neuron0x14f8d20()*0.0207209);
}

double NNfunction_ss_dLuR::synapse0x1503ab0() {
   return (neuron0x14f9060()*-0.373462);
}

double NNfunction_ss_dLuR::synapse0x1503af0() {
   return (neuron0x14f93a0()*-0.452072);
}

double NNfunction_ss_dLuR::synapse0x1503b30() {
   return (neuron0x14f96e0()*-0.0879934);
}

double NNfunction_ss_dLuR::synapse0x15035c0() {
   return (neuron0x14f9a20()*0.087357);
}

double NNfunction_ss_dLuR::synapse0x1503600() {
   return (neuron0x14f9f80()*1.51719);
}

double NNfunction_ss_dLuR::synapse0x1503c80() {
   return (neuron0x14fa1a0()*1.49661);
}

double NNfunction_ss_dLuR::synapse0x1503cc0() {
   return (neuron0x14fa4e0()*-0.379863);
}

double NNfunction_ss_dLuR::synapse0x1503d00() {
   return (neuron0x14fa820()*-0.435884);
}

double NNfunction_ss_dLuR::synapse0x1503d40() {
   return (neuron0x14fab60()*-0.222397);
}

double NNfunction_ss_dLuR::synapse0x1503d80() {
   return (neuron0x14faea0()*0.344874);
}

double NNfunction_ss_dLuR::synapse0x1503dc0() {
   return (neuron0x14fb1e0()*-0.00582081);
}

double NNfunction_ss_dLuR::synapse0x1504140() {
   return (neuron0x14f6620()*-0.332458);
}

double NNfunction_ss_dLuR::synapse0x1504180() {
   return (neuron0x14f6960()*0.206856);
}

double NNfunction_ss_dLuR::synapse0x15041c0() {
   return (neuron0x14f6ca0()*-0.480464);
}

double NNfunction_ss_dLuR::synapse0x1504200() {
   return (neuron0x14f6fe0()*-0.993773);
}

double NNfunction_ss_dLuR::synapse0x1504240() {
   return (neuron0x14f7320()*-0.299125);
}

double NNfunction_ss_dLuR::synapse0x1504280() {
   return (neuron0x14f7660()*-0.0138243);
}

double NNfunction_ss_dLuR::synapse0x15042c0() {
   return (neuron0x14f79a0()*-1.06407);
}

double NNfunction_ss_dLuR::synapse0x1504300() {
   return (neuron0x14f7ce0()*0.337273);
}

double NNfunction_ss_dLuR::synapse0x1504340() {
   return (neuron0x14f8020()*0.0564706);
}

double NNfunction_ss_dLuR::synapse0x1504380() {
   return (neuron0x14f8360()*0.210674);
}

double NNfunction_ss_dLuR::synapse0x15043c0() {
   return (neuron0x14f86a0()*-0.0992597);
}

double NNfunction_ss_dLuR::synapse0x1504400() {
   return (neuron0x14f89e0()*-0.27011);
}

double NNfunction_ss_dLuR::synapse0x1504440() {
   return (neuron0x14f8d20()*0.155286);
}

double NNfunction_ss_dLuR::synapse0x1504480() {
   return (neuron0x14f9060()*-0.108825);
}

double NNfunction_ss_dLuR::synapse0x15044c0() {
   return (neuron0x14f93a0()*-0.427749);
}

double NNfunction_ss_dLuR::synapse0x1504500() {
   return (neuron0x14f96e0()*0.621159);
}

double NNfunction_ss_dLuR::synapse0x1503f90() {
   return (neuron0x14f9a20()*0.342995);
}

double NNfunction_ss_dLuR::synapse0x1503fd0() {
   return (neuron0x14f9f80()*0.498976);
}

double NNfunction_ss_dLuR::synapse0x1504650() {
   return (neuron0x14fa1a0()*0.0810017);
}

double NNfunction_ss_dLuR::synapse0x1504690() {
   return (neuron0x14fa4e0()*0.00303753);
}

double NNfunction_ss_dLuR::synapse0x15046d0() {
   return (neuron0x14fa820()*0.129975);
}

double NNfunction_ss_dLuR::synapse0x1504710() {
   return (neuron0x14fab60()*0.190378);
}

double NNfunction_ss_dLuR::synapse0x1504750() {
   return (neuron0x14faea0()*-0.139443);
}

double NNfunction_ss_dLuR::synapse0x1504790() {
   return (neuron0x14fb1e0()*0.00693434);
}

double NNfunction_ss_dLuR::synapse0x1504b10() {
   return (neuron0x14f6620()*0.826219);
}

double NNfunction_ss_dLuR::synapse0x1504b50() {
   return (neuron0x14f6960()*0.244604);
}

double NNfunction_ss_dLuR::synapse0x1504b90() {
   return (neuron0x14f6ca0()*0.031689);
}

double NNfunction_ss_dLuR::synapse0x1504bd0() {
   return (neuron0x14f6fe0()*-0.655214);
}

double NNfunction_ss_dLuR::synapse0x1504c10() {
   return (neuron0x14f7320()*0.44473);
}

double NNfunction_ss_dLuR::synapse0x1504c50() {
   return (neuron0x14f7660()*-0.495048);
}

double NNfunction_ss_dLuR::synapse0x1504c90() {
   return (neuron0x14f79a0()*-0.607757);
}

double NNfunction_ss_dLuR::synapse0x1504cd0() {
   return (neuron0x14f7ce0()*0.27432);
}

double NNfunction_ss_dLuR::synapse0x1504d10() {
   return (neuron0x14f8020()*1.09853);
}

double NNfunction_ss_dLuR::synapse0x1504d50() {
   return (neuron0x14f8360()*0.157089);
}

double NNfunction_ss_dLuR::synapse0x1504d90() {
   return (neuron0x14f86a0()*0.870207);
}

double NNfunction_ss_dLuR::synapse0x1504dd0() {
   return (neuron0x14f89e0()*0.414848);
}

double NNfunction_ss_dLuR::synapse0x1504e10() {
   return (neuron0x14f8d20()*-0.00317045);
}

double NNfunction_ss_dLuR::synapse0x1504e50() {
   return (neuron0x14f9060()*0.441925);
}

double NNfunction_ss_dLuR::synapse0x1504e90() {
   return (neuron0x14f93a0()*-0.281446);
}

double NNfunction_ss_dLuR::synapse0x1504ed0() {
   return (neuron0x14f96e0()*0.967832);
}

double NNfunction_ss_dLuR::synapse0x1504960() {
   return (neuron0x14f9a20()*-0.824149);
}

double NNfunction_ss_dLuR::synapse0x15049a0() {
   return (neuron0x14f9f80()*0.31212);
}

double NNfunction_ss_dLuR::synapse0x1505020() {
   return (neuron0x14fa1a0()*-0.596123);
}

double NNfunction_ss_dLuR::synapse0x1505060() {
   return (neuron0x14fa4e0()*-0.179984);
}

double NNfunction_ss_dLuR::synapse0x15050a0() {
   return (neuron0x14fa820()*-0.45575);
}

double NNfunction_ss_dLuR::synapse0x15050e0() {
   return (neuron0x14fab60()*-0.548145);
}

double NNfunction_ss_dLuR::synapse0x1505120() {
   return (neuron0x14faea0()*0.403815);
}

double NNfunction_ss_dLuR::synapse0x1505160() {
   return (neuron0x14fb1e0()*-0.10366);
}

double NNfunction_ss_dLuR::synapse0x15054e0() {
   return (neuron0x14f6620()*-0.304871);
}

double NNfunction_ss_dLuR::synapse0x14f6840() {
   return (neuron0x14f6960()*1.1108);
}

double NNfunction_ss_dLuR::synapse0x14f6880() {
   return (neuron0x14f6ca0()*0.519282);
}

double NNfunction_ss_dLuR::synapse0x14f6b80() {
   return (neuron0x14f6fe0()*-0.0626253);
}

double NNfunction_ss_dLuR::synapse0x14f6bc0() {
   return (neuron0x14f7320()*-0.14034);
}

double NNfunction_ss_dLuR::synapse0x14f6ec0() {
   return (neuron0x14f7660()*-0.155841);
}

double NNfunction_ss_dLuR::synapse0x14f6f00() {
   return (neuron0x14f79a0()*-0.408753);
}

double NNfunction_ss_dLuR::synapse0x14f7200() {
   return (neuron0x14f7ce0()*-0.0426167);
}

double NNfunction_ss_dLuR::synapse0x14f7240() {
   return (neuron0x14f8020()*0.0925141);
}

double NNfunction_ss_dLuR::synapse0x14f7540() {
   return (neuron0x14f8360()*-0.226669);
}

double NNfunction_ss_dLuR::synapse0x14f7580() {
   return (neuron0x14f86a0()*-0.471962);
}

double NNfunction_ss_dLuR::synapse0x14f7880() {
   return (neuron0x14f89e0()*-0.358787);
}

double NNfunction_ss_dLuR::synapse0x14f78c0() {
   return (neuron0x14f8d20()*-0.660486);
}

double NNfunction_ss_dLuR::synapse0x14f7bc0() {
   return (neuron0x14f9060()*-0.204936);
}

double NNfunction_ss_dLuR::synapse0x14f7c00() {
   return (neuron0x14f93a0()*-1.26262);
}

double NNfunction_ss_dLuR::synapse0x14f7f00() {
   return (neuron0x14f96e0()*-0.448069);
}

double NNfunction_ss_dLuR::synapse0x14f7f40() {
   return (neuron0x14f9a20()*-0.948961);
}

double NNfunction_ss_dLuR::synapse0x14f8240() {
   return (neuron0x14f9f80()*0.78944);
}

double NNfunction_ss_dLuR::synapse0x14f8280() {
   return (neuron0x14fa1a0()*-0.693901);
}

double NNfunction_ss_dLuR::synapse0x14f8580() {
   return (neuron0x14fa4e0()*1.03122);
}

double NNfunction_ss_dLuR::synapse0x14f85c0() {
   return (neuron0x14fa820()*0.354125);
}

double NNfunction_ss_dLuR::synapse0x14f88c0() {
   return (neuron0x14fab60()*0.0742502);
}

double NNfunction_ss_dLuR::synapse0x14f8900() {
   return (neuron0x14faea0()*-0.313522);
}

double NNfunction_ss_dLuR::synapse0x14f8c00() {
   return (neuron0x14fb1e0()*-0.354477);
}

double NNfunction_ss_dLuR::synapse0x14f8c40() {
   return (neuron0x14f6620()*-0.0547284);
}

double NNfunction_ss_dLuR::synapse0x14f9900() {
   return (neuron0x14f6960()*0.284407);
}

double NNfunction_ss_dLuR::synapse0x14f9940() {
   return (neuron0x14f6ca0()*-1.81692);
}

double NNfunction_ss_dLuR::synapse0x1505330() {
   return (neuron0x14f6fe0()*-0.151359);
}

double NNfunction_ss_dLuR::synapse0x1505370() {
   return (neuron0x14f7320()*-0.123279);
}

double NNfunction_ss_dLuR::synapse0x14f9c40() {
   return (neuron0x14f7660()*-0.0854006);
}

double NNfunction_ss_dLuR::synapse0x14f9c80() {
   return (neuron0x14f79a0()*0.0278921);
}

double NNfunction_ss_dLuR::synapse0x12a7c10() {
   return (neuron0x14f7ce0()*-0.151835);
}

double NNfunction_ss_dLuR::synapse0x12a7c50() {
   return (neuron0x14f8020()*-0.145979);
}

double NNfunction_ss_dLuR::synapse0x14fa3c0() {
   return (neuron0x14f8360()*0.0143354);
}

double NNfunction_ss_dLuR::synapse0x14fa400() {
   return (neuron0x14f86a0()*0.0587696);
}

double NNfunction_ss_dLuR::synapse0x14fa700() {
   return (neuron0x14f89e0()*0.428764);
}

double NNfunction_ss_dLuR::synapse0x14fa740() {
   return (neuron0x14f8d20()*0.0110478);
}

double NNfunction_ss_dLuR::synapse0x14faa40() {
   return (neuron0x14f9060()*-0.0926762);
}

double NNfunction_ss_dLuR::synapse0x14faa80() {
   return (neuron0x14f93a0()*-0.242238);
}

double NNfunction_ss_dLuR::synapse0x14fad80() {
   return (neuron0x14f96e0()*-0.10665);
}

double NNfunction_ss_dLuR::synapse0x14fadc0() {
   return (neuron0x14f9a20()*-0.106796);
}

double NNfunction_ss_dLuR::synapse0x14fb0c0() {
   return (neuron0x14f9f80()*-0.126267);
}

double NNfunction_ss_dLuR::synapse0x14fb100() {
   return (neuron0x14fa1a0()*0.089564);
}

double NNfunction_ss_dLuR::synapse0x14fb400() {
   return (neuron0x14fa4e0()*-0.0780203);
}

double NNfunction_ss_dLuR::synapse0x14fb440() {
   return (neuron0x14fa820()*-0.0905674);
}

double NNfunction_ss_dLuR::synapse0x14f8f40() {
   return (neuron0x14fab60()*0.0205155);
}

double NNfunction_ss_dLuR::synapse0x14f8f80() {
   return (neuron0x14faea0()*-0.0629113);
}

double NNfunction_ss_dLuR::synapse0x1507250() {
   return (neuron0x14fb1e0()*-0.103367);
}

double NNfunction_ss_dLuR::synapse0x15075d0() {
   return (neuron0x14f6620()*-0.0359934);
}

double NNfunction_ss_dLuR::synapse0x1507610() {
   return (neuron0x14f6960()*0.0944274);
}

double NNfunction_ss_dLuR::synapse0x1507650() {
   return (neuron0x14f6ca0()*-0.0815887);
}

double NNfunction_ss_dLuR::synapse0x1507690() {
   return (neuron0x14f6fe0()*-1.93634);
}

double NNfunction_ss_dLuR::synapse0x15076d0() {
   return (neuron0x14f7320()*0.0705431);
}

double NNfunction_ss_dLuR::synapse0x1507710() {
   return (neuron0x14f7660()*-0.00446445);
}

double NNfunction_ss_dLuR::synapse0x1507750() {
   return (neuron0x14f79a0()*0.0148969);
}

double NNfunction_ss_dLuR::synapse0x1507790() {
   return (neuron0x14f7ce0()*0.0553799);
}

double NNfunction_ss_dLuR::synapse0x15077d0() {
   return (neuron0x14f8020()*-0.0330226);
}

double NNfunction_ss_dLuR::synapse0x1507810() {
   return (neuron0x14f8360()*-0.0965991);
}

double NNfunction_ss_dLuR::synapse0x1507850() {
   return (neuron0x14f86a0()*-0.020108);
}

double NNfunction_ss_dLuR::synapse0x1507890() {
   return (neuron0x14f89e0()*-0.254643);
}

double NNfunction_ss_dLuR::synapse0x15078d0() {
   return (neuron0x14f8d20()*0.156382);
}

double NNfunction_ss_dLuR::synapse0x1507910() {
   return (neuron0x14f9060()*-0.0574648);
}

double NNfunction_ss_dLuR::synapse0x1507950() {
   return (neuron0x14f93a0()*-0.582255);
}

double NNfunction_ss_dLuR::synapse0x1507990() {
   return (neuron0x14f96e0()*0.0721282);
}

double NNfunction_ss_dLuR::synapse0x1507420() {
   return (neuron0x14f9a20()*-0.0325176);
}

double NNfunction_ss_dLuR::synapse0x1507460() {
   return (neuron0x14f9f80()*0.212647);
}

double NNfunction_ss_dLuR::synapse0x1507ae0() {
   return (neuron0x14fa1a0()*0.124405);
}

double NNfunction_ss_dLuR::synapse0x1507b20() {
   return (neuron0x14fa4e0()*-0.0671121);
}

double NNfunction_ss_dLuR::synapse0x1507b60() {
   return (neuron0x14fa820()*-0.0518574);
}

double NNfunction_ss_dLuR::synapse0x1507ba0() {
   return (neuron0x14fab60()*-0.0477385);
}

double NNfunction_ss_dLuR::synapse0x1507be0() {
   return (neuron0x14faea0()*0.0387028);
}

double NNfunction_ss_dLuR::synapse0x1507c20() {
   return (neuron0x14fb1e0()*-0.0203858);
}

double NNfunction_ss_dLuR::synapse0x1507fa0() {
   return (neuron0x14f6620()*-0.0143868);
}

double NNfunction_ss_dLuR::synapse0x1507fe0() {
   return (neuron0x14f6960()*-0.00842601);
}

double NNfunction_ss_dLuR::synapse0x1508020() {
   return (neuron0x14f6ca0()*-0.0359822);
}

double NNfunction_ss_dLuR::synapse0x1508060() {
   return (neuron0x14f6fe0()*-0.936921);
}

double NNfunction_ss_dLuR::synapse0x15080a0() {
   return (neuron0x14f7320()*0.0177389);
}

double NNfunction_ss_dLuR::synapse0x15080e0() {
   return (neuron0x14f7660()*-0.0150746);
}

double NNfunction_ss_dLuR::synapse0x1508120() {
   return (neuron0x14f79a0()*0.0041454);
}

double NNfunction_ss_dLuR::synapse0x1508160() {
   return (neuron0x14f7ce0()*-0.00528792);
}

double NNfunction_ss_dLuR::synapse0x15081a0() {
   return (neuron0x14f8020()*-0.00855263);
}

double NNfunction_ss_dLuR::synapse0x15081e0() {
   return (neuron0x14f8360()*-0.0220865);
}

double NNfunction_ss_dLuR::synapse0x1508220() {
   return (neuron0x14f86a0()*0.000821411);
}

double NNfunction_ss_dLuR::synapse0x1508260() {
   return (neuron0x14f89e0()*0.390028);
}

double NNfunction_ss_dLuR::synapse0x15082a0() {
   return (neuron0x14f8d20()*-0.00842594);
}

double NNfunction_ss_dLuR::synapse0x15082e0() {
   return (neuron0x14f9060()*-0.00508602);
}

double NNfunction_ss_dLuR::synapse0x1508320() {
   return (neuron0x14f93a0()*0.362319);
}

double NNfunction_ss_dLuR::synapse0x1508360() {
   return (neuron0x14f96e0()*-0.00180422);
}

double NNfunction_ss_dLuR::synapse0x1507df0() {
   return (neuron0x14f9a20()*0.00871288);
}

double NNfunction_ss_dLuR::synapse0x1507e30() {
   return (neuron0x14f9f80()*0.0114444);
}

double NNfunction_ss_dLuR::synapse0x15084b0() {
   return (neuron0x14fa1a0()*0.00938988);
}

double NNfunction_ss_dLuR::synapse0x15084f0() {
   return (neuron0x14fa4e0()*-0.00683235);
}

double NNfunction_ss_dLuR::synapse0x1508530() {
   return (neuron0x14fa820()*-0.0128043);
}

double NNfunction_ss_dLuR::synapse0x1508570() {
   return (neuron0x14fab60()*-0.0103025);
}

double NNfunction_ss_dLuR::synapse0x15085b0() {
   return (neuron0x14faea0()*-0.0019079);
}

double NNfunction_ss_dLuR::synapse0x15085f0() {
   return (neuron0x14fb1e0()*0.0142138);
}

double NNfunction_ss_dLuR::synapse0x1508970() {
   return (neuron0x14f6620()*0.265654);
}

double NNfunction_ss_dLuR::synapse0x15089b0() {
   return (neuron0x14f6960()*-0.633918);
}

double NNfunction_ss_dLuR::synapse0x15089f0() {
   return (neuron0x14f6ca0()*-0.0652466);
}

double NNfunction_ss_dLuR::synapse0x1508a30() {
   return (neuron0x14f6fe0()*1.49078);
}

double NNfunction_ss_dLuR::synapse0x1508a70() {
   return (neuron0x14f7320()*-0.11546);
}

double NNfunction_ss_dLuR::synapse0x1508ab0() {
   return (neuron0x14f7660()*0.35471);
}

double NNfunction_ss_dLuR::synapse0x1508af0() {
   return (neuron0x14f79a0()*-0.187261);
}

double NNfunction_ss_dLuR::synapse0x1508b30() {
   return (neuron0x14f7ce0()*-0.401112);
}

double NNfunction_ss_dLuR::synapse0x1508b70() {
   return (neuron0x14f8020()*-0.0710233);
}

double NNfunction_ss_dLuR::synapse0x1508bb0() {
   return (neuron0x14f8360()*0.396558);
}

double NNfunction_ss_dLuR::synapse0x1508bf0() {
   return (neuron0x14f86a0()*-0.10354);
}

double NNfunction_ss_dLuR::synapse0x1508c30() {
   return (neuron0x14f89e0()*-1.37487);
}

double NNfunction_ss_dLuR::synapse0x1508c70() {
   return (neuron0x14f8d20()*-0.325559);
}

double NNfunction_ss_dLuR::synapse0x1508cb0() {
   return (neuron0x14f9060()*0.234466);
}

double NNfunction_ss_dLuR::synapse0x1508cf0() {
   return (neuron0x14f93a0()*-0.260703);
}

double NNfunction_ss_dLuR::synapse0x1508d30() {
   return (neuron0x14f96e0()*-0.220195);
}

double NNfunction_ss_dLuR::synapse0x15087c0() {
   return (neuron0x14f9a20()*-0.173338);
}

double NNfunction_ss_dLuR::synapse0x1508800() {
   return (neuron0x14f9f80()*-0.630137);
}

double NNfunction_ss_dLuR::synapse0x1508e80() {
   return (neuron0x14fa1a0()*-0.250687);
}

double NNfunction_ss_dLuR::synapse0x1508ec0() {
   return (neuron0x14fa4e0()*-0.356286);
}

double NNfunction_ss_dLuR::synapse0x1508f00() {
   return (neuron0x14fa820()*0.380017);
}

double NNfunction_ss_dLuR::synapse0x1508f40() {
   return (neuron0x14fab60()*0.156993);
}

double NNfunction_ss_dLuR::synapse0x1508f80() {
   return (neuron0x14faea0()*0.075327);
}

double NNfunction_ss_dLuR::synapse0x1508fc0() {
   return (neuron0x14fb1e0()*0.197755);
}

double NNfunction_ss_dLuR::synapse0x1509340() {
   return (neuron0x14f6620()*-0.0491011);
}

double NNfunction_ss_dLuR::synapse0x1509380() {
   return (neuron0x14f6960()*-0.117149);
}

double NNfunction_ss_dLuR::synapse0x15093c0() {
   return (neuron0x14f6ca0()*-0.353933);
}

double NNfunction_ss_dLuR::synapse0x1509400() {
   return (neuron0x14f6fe0()*2.74157);
}

double NNfunction_ss_dLuR::synapse0x1509440() {
   return (neuron0x14f7320()*0.126883);
}

double NNfunction_ss_dLuR::synapse0x1509480() {
   return (neuron0x14f7660()*-0.194817);
}

double NNfunction_ss_dLuR::synapse0x15094c0() {
   return (neuron0x14f79a0()*0.00854325);
}

double NNfunction_ss_dLuR::synapse0x1509500() {
   return (neuron0x14f7ce0()*0.228406);
}

double NNfunction_ss_dLuR::synapse0x1509540() {
   return (neuron0x14f8020()*-0.0402334);
}

double NNfunction_ss_dLuR::synapse0x1509580() {
   return (neuron0x14f8360()*-0.0771159);
}

double NNfunction_ss_dLuR::synapse0x15095c0() {
   return (neuron0x14f86a0()*0.157315);
}

double NNfunction_ss_dLuR::synapse0x1509600() {
   return (neuron0x14f89e0()*-0.438057);
}

double NNfunction_ss_dLuR::synapse0x1509640() {
   return (neuron0x14f8d20()*-0.17257);
}

double NNfunction_ss_dLuR::synapse0x1509680() {
   return (neuron0x14f9060()*-0.15521);
}

double NNfunction_ss_dLuR::synapse0x15096c0() {
   return (neuron0x14f93a0()*-0.320245);
}

double NNfunction_ss_dLuR::synapse0x1509700() {
   return (neuron0x14f96e0()*-0.116705);
}

double NNfunction_ss_dLuR::synapse0x1509190() {
   return (neuron0x14f9a20()*-0.0128616);
}

double NNfunction_ss_dLuR::synapse0x15091d0() {
   return (neuron0x14f9f80()*-0.206915);
}

double NNfunction_ss_dLuR::synapse0x1509850() {
   return (neuron0x14fa1a0()*-0.0500844);
}

double NNfunction_ss_dLuR::synapse0x1509890() {
   return (neuron0x14fa4e0()*-0.0541709);
}

double NNfunction_ss_dLuR::synapse0x15098d0() {
   return (neuron0x14fa820()*-0.0162673);
}

double NNfunction_ss_dLuR::synapse0x1509910() {
   return (neuron0x14fab60()*0.0157641);
}

double NNfunction_ss_dLuR::synapse0x1509950() {
   return (neuron0x14faea0()*-0.0733081);
}

double NNfunction_ss_dLuR::synapse0x1509990() {
   return (neuron0x14fb1e0()*0.113934);
}

double NNfunction_ss_dLuR::synapse0x1509d10() {
   return (neuron0x14f6620()*-0.950334);
}

double NNfunction_ss_dLuR::synapse0x1509d50() {
   return (neuron0x14f6960()*0.021447);
}

double NNfunction_ss_dLuR::synapse0x1509d90() {
   return (neuron0x14f6ca0()*-0.440085);
}

double NNfunction_ss_dLuR::synapse0x1509dd0() {
   return (neuron0x14f6fe0()*0.625923);
}

double NNfunction_ss_dLuR::synapse0x1509e10() {
   return (neuron0x14f7320()*-0.739813);
}

double NNfunction_ss_dLuR::synapse0x1509e50() {
   return (neuron0x14f7660()*0.462989);
}

double NNfunction_ss_dLuR::synapse0x1509e90() {
   return (neuron0x14f79a0()*-0.0225401);
}

double NNfunction_ss_dLuR::synapse0x1509ed0() {
   return (neuron0x14f7ce0()*0.466884);
}

double NNfunction_ss_dLuR::synapse0x1509f10() {
   return (neuron0x14f8020()*-0.361412);
}

double NNfunction_ss_dLuR::synapse0x15020d0() {
   return (neuron0x14f8360()*0.400694);
}

double NNfunction_ss_dLuR::synapse0x1502110() {
   return (neuron0x14f86a0()*0.103434);
}

double NNfunction_ss_dLuR::synapse0x1502150() {
   return (neuron0x14f89e0()*0.0507519);
}

double NNfunction_ss_dLuR::synapse0x1502190() {
   return (neuron0x14f8d20()*-0.221534);
}

double NNfunction_ss_dLuR::synapse0x15021d0() {
   return (neuron0x14f9060()*0.299875);
}

double NNfunction_ss_dLuR::synapse0x1502210() {
   return (neuron0x14f93a0()*-1.09345);
}

double NNfunction_ss_dLuR::synapse0x1502250() {
   return (neuron0x14f96e0()*0.723383);
}

double NNfunction_ss_dLuR::synapse0x1509b60() {
   return (neuron0x14f9a20()*0.0870129);
}

double NNfunction_ss_dLuR::synapse0x1509ba0() {
   return (neuron0x14f9f80()*-0.149885);
}

double NNfunction_ss_dLuR::synapse0x15023a0() {
   return (neuron0x14fa1a0()*-0.63166);
}

double NNfunction_ss_dLuR::synapse0x15023e0() {
   return (neuron0x14fa4e0()*-0.504685);
}

double NNfunction_ss_dLuR::synapse0x1502420() {
   return (neuron0x14fa820()*-0.04438);
}

double NNfunction_ss_dLuR::synapse0x1502460() {
   return (neuron0x14fab60()*0.729452);
}

double NNfunction_ss_dLuR::synapse0x15024a0() {
   return (neuron0x14faea0()*-0.323094);
}

double NNfunction_ss_dLuR::synapse0x15024e0() {
   return (neuron0x14fb1e0()*0.285408);
}

double NNfunction_ss_dLuR::synapse0x1502860() {
   return (neuron0x14f6620()*-0.328433);
}

double NNfunction_ss_dLuR::synapse0x15028a0() {
   return (neuron0x14f6960()*-0.567069);
}

double NNfunction_ss_dLuR::synapse0x15028e0() {
   return (neuron0x14f6ca0()*-0.0929736);
}

double NNfunction_ss_dLuR::synapse0x1502920() {
   return (neuron0x14f6fe0()*0.26746);
}

double NNfunction_ss_dLuR::synapse0x1502960() {
   return (neuron0x14f7320()*0.288963);
}

double NNfunction_ss_dLuR::synapse0x15029a0() {
   return (neuron0x14f7660()*0.421111);
}

double NNfunction_ss_dLuR::synapse0x15029e0() {
   return (neuron0x14f79a0()*-0.375645);
}

double NNfunction_ss_dLuR::synapse0x1502a20() {
   return (neuron0x14f7ce0()*-0.735172);
}

double NNfunction_ss_dLuR::synapse0x1502a60() {
   return (neuron0x14f8020()*-0.318278);
}

double NNfunction_ss_dLuR::synapse0x1502aa0() {
   return (neuron0x14f8360()*-0.236911);
}

double NNfunction_ss_dLuR::synapse0x1502ae0() {
   return (neuron0x14f86a0()*0.200048);
}

double NNfunction_ss_dLuR::synapse0x1502b20() {
   return (neuron0x14f89e0()*0.190844);
}

double NNfunction_ss_dLuR::synapse0x1502b60() {
   return (neuron0x14f8d20()*-0.300367);
}

double NNfunction_ss_dLuR::synapse0x1502ba0() {
   return (neuron0x14f9060()*0.910363);
}

double NNfunction_ss_dLuR::synapse0x1502be0() {
   return (neuron0x14f93a0()*0.408005);
}

double NNfunction_ss_dLuR::synapse0x1502c20() {
   return (neuron0x14f96e0()*1.48335);
}

double NNfunction_ss_dLuR::synapse0x15026b0() {
   return (neuron0x14f9a20()*-0.113978);
}

double NNfunction_ss_dLuR::synapse0x15026f0() {
   return (neuron0x14f9f80()*0.354377);
}

double NNfunction_ss_dLuR::synapse0x1502d70() {
   return (neuron0x14fa1a0()*-1.0298);
}

double NNfunction_ss_dLuR::synapse0x1502db0() {
   return (neuron0x14fa4e0()*0.477473);
}

double NNfunction_ss_dLuR::synapse0x1502df0() {
   return (neuron0x14fa820()*-0.0738703);
}

double NNfunction_ss_dLuR::synapse0x1502e30() {
   return (neuron0x14fab60()*0.193546);
}

double NNfunction_ss_dLuR::synapse0x1502e70() {
   return (neuron0x14faea0()*0.653923);
}

double NNfunction_ss_dLuR::synapse0x1502eb0() {
   return (neuron0x14fb1e0()*0.32038);
}

double NNfunction_ss_dLuR::synapse0x1503080() {
   return (neuron0x14f6620()*0.358876);
}

double NNfunction_ss_dLuR::synapse0x150c110() {
   return (neuron0x14f6960()*-0.0130809);
}

double NNfunction_ss_dLuR::synapse0x150c150() {
   return (neuron0x14f6ca0()*-0.142604);
}

double NNfunction_ss_dLuR::synapse0x150c190() {
   return (neuron0x14f6fe0()*-0.392382);
}

double NNfunction_ss_dLuR::synapse0x150c1d0() {
   return (neuron0x14f7320()*-1.04001);
}

double NNfunction_ss_dLuR::synapse0x150c210() {
   return (neuron0x14f7660()*-0.25375);
}

double NNfunction_ss_dLuR::synapse0x150c250() {
   return (neuron0x14f79a0()*0.0429352);
}

double NNfunction_ss_dLuR::synapse0x150c290() {
   return (neuron0x14f7ce0()*-0.637677);
}

double NNfunction_ss_dLuR::synapse0x150c2d0() {
   return (neuron0x14f8020()*-0.668096);
}

double NNfunction_ss_dLuR::synapse0x150c310() {
   return (neuron0x14f8360()*-0.477259);
}

double NNfunction_ss_dLuR::synapse0x150c350() {
   return (neuron0x14f86a0()*-0.278668);
}

double NNfunction_ss_dLuR::synapse0x150c390() {
   return (neuron0x14f89e0()*-0.718729);
}

double NNfunction_ss_dLuR::synapse0x150c3d0() {
   return (neuron0x14f8d20()*-0.827549);
}

double NNfunction_ss_dLuR::synapse0x150c410() {
   return (neuron0x14f9060()*0.990802);
}

double NNfunction_ss_dLuR::synapse0x150c450() {
   return (neuron0x14f93a0()*-0.758297);
}

double NNfunction_ss_dLuR::synapse0x150c490() {
   return (neuron0x14f96e0()*0.364684);
}

double NNfunction_ss_dLuR::synapse0x150bf60() {
   return (neuron0x14f9a20()*1.39258);
}

double NNfunction_ss_dLuR::synapse0x150bfa0() {
   return (neuron0x14f9f80()*0.626391);
}

double NNfunction_ss_dLuR::synapse0x150c5e0() {
   return (neuron0x14fa1a0()*-0.985472);
}

double NNfunction_ss_dLuR::synapse0x150c620() {
   return (neuron0x14fa4e0()*-0.211832);
}

double NNfunction_ss_dLuR::synapse0x150c660() {
   return (neuron0x14fa820()*-0.20958);
}

double NNfunction_ss_dLuR::synapse0x150c6a0() {
   return (neuron0x14fab60()*0.145109);
}

double NNfunction_ss_dLuR::synapse0x150c6e0() {
   return (neuron0x14faea0()*-0.09681);
}

double NNfunction_ss_dLuR::synapse0x150c720() {
   return (neuron0x14fb1e0()*-0.352387);
}

double NNfunction_ss_dLuR::synapse0x150caa0() {
   return (neuron0x14f6620()*0.689837);
}

double NNfunction_ss_dLuR::synapse0x150cae0() {
   return (neuron0x14f6960()*-0.0174747);
}

double NNfunction_ss_dLuR::synapse0x150cb20() {
   return (neuron0x14f6ca0()*0.144885);
}

double NNfunction_ss_dLuR::synapse0x150cb60() {
   return (neuron0x14f6fe0()*-0.0753546);
}

double NNfunction_ss_dLuR::synapse0x150cba0() {
   return (neuron0x14f7320()*0.117878);
}

double NNfunction_ss_dLuR::synapse0x150cbe0() {
   return (neuron0x14f7660()*0.260337);
}

double NNfunction_ss_dLuR::synapse0x150cc20() {
   return (neuron0x14f79a0()*0.693432);
}

double NNfunction_ss_dLuR::synapse0x150cc60() {
   return (neuron0x14f7ce0()*0.253684);
}

double NNfunction_ss_dLuR::synapse0x150cca0() {
   return (neuron0x14f8020()*-0.535048);
}

double NNfunction_ss_dLuR::synapse0x150cce0() {
   return (neuron0x14f8360()*-1.72363);
}

double NNfunction_ss_dLuR::synapse0x150cd20() {
   return (neuron0x14f86a0()*0.650312);
}

double NNfunction_ss_dLuR::synapse0x150cd60() {
   return (neuron0x14f89e0()*-0.796867);
}

double NNfunction_ss_dLuR::synapse0x150cda0() {
   return (neuron0x14f8d20()*-0.897896);
}

double NNfunction_ss_dLuR::synapse0x150cde0() {
   return (neuron0x14f9060()*0.753964);
}

double NNfunction_ss_dLuR::synapse0x150ce20() {
   return (neuron0x14f93a0()*0.809618);
}

double NNfunction_ss_dLuR::synapse0x150ce60() {
   return (neuron0x14f96e0()*0.201843);
}

double NNfunction_ss_dLuR::synapse0x150c8f0() {
   return (neuron0x14f9a20()*0.012224);
}

double NNfunction_ss_dLuR::synapse0x150c930() {
   return (neuron0x14f9f80()*0.620368);
}

double NNfunction_ss_dLuR::synapse0x150cfb0() {
   return (neuron0x14fa1a0()*0.111966);
}

double NNfunction_ss_dLuR::synapse0x150cff0() {
   return (neuron0x14fa4e0()*-0.476328);
}

double NNfunction_ss_dLuR::synapse0x150d030() {
   return (neuron0x14fa820()*0.808663);
}

double NNfunction_ss_dLuR::synapse0x150d070() {
   return (neuron0x14fab60()*-0.654625);
}

double NNfunction_ss_dLuR::synapse0x150d0b0() {
   return (neuron0x14faea0()*-0.774075);
}

double NNfunction_ss_dLuR::synapse0x150d0f0() {
   return (neuron0x14fb1e0()*0.451007);
}

double NNfunction_ss_dLuR::synapse0x150d470() {
   return (neuron0x14f6620()*0.0613455);
}

double NNfunction_ss_dLuR::synapse0x150d4b0() {
   return (neuron0x14f6960()*0.10073);
}

double NNfunction_ss_dLuR::synapse0x150d4f0() {
   return (neuron0x14f6ca0()*-0.0288131);
}

double NNfunction_ss_dLuR::synapse0x150d530() {
   return (neuron0x14f6fe0()*4.63649);
}

double NNfunction_ss_dLuR::synapse0x150d570() {
   return (neuron0x14f7320()*-0.0114462);
}

double NNfunction_ss_dLuR::synapse0x150d5b0() {
   return (neuron0x14f7660()*0.0277494);
}

double NNfunction_ss_dLuR::synapse0x150d5f0() {
   return (neuron0x14f79a0()*0.00094159);
}

double NNfunction_ss_dLuR::synapse0x150d630() {
   return (neuron0x14f7ce0()*0.011798);
}

double NNfunction_ss_dLuR::synapse0x150d670() {
   return (neuron0x14f8020()*-0.00456754);
}

double NNfunction_ss_dLuR::synapse0x150d6b0() {
   return (neuron0x14f8360()*0.0150998);
}

double NNfunction_ss_dLuR::synapse0x150d6f0() {
   return (neuron0x14f86a0()*0.0107624);
}

double NNfunction_ss_dLuR::synapse0x150d730() {
   return (neuron0x14f89e0()*-0.051172);
}

double NNfunction_ss_dLuR::synapse0x150d770() {
   return (neuron0x14f8d20()*0.0771955);
}

double NNfunction_ss_dLuR::synapse0x150d7b0() {
   return (neuron0x14f9060()*-0.0445336);
}

double NNfunction_ss_dLuR::synapse0x150d7f0() {
   return (neuron0x14f93a0()*1.78317);
}

double NNfunction_ss_dLuR::synapse0x150d830() {
   return (neuron0x14f96e0()*-0.0518454);
}

double NNfunction_ss_dLuR::synapse0x150d2c0() {
   return (neuron0x14f9a20()*-0.0122127);
}

double NNfunction_ss_dLuR::synapse0x150d300() {
   return (neuron0x14f9f80()*0.0334328);
}

double NNfunction_ss_dLuR::synapse0x150d980() {
   return (neuron0x14fa1a0()*0.032608);
}

double NNfunction_ss_dLuR::synapse0x150d9c0() {
   return (neuron0x14fa4e0()*-0.0907113);
}

double NNfunction_ss_dLuR::synapse0x150da00() {
   return (neuron0x14fa820()*-0.0222068);
}

double NNfunction_ss_dLuR::synapse0x150da40() {
   return (neuron0x14fab60()*-0.0119669);
}

double NNfunction_ss_dLuR::synapse0x150da80() {
   return (neuron0x14faea0()*0.0255919);
}

double NNfunction_ss_dLuR::synapse0x150dac0() {
   return (neuron0x14fb1e0()*-0.0751649);
}

double NNfunction_ss_dLuR::synapse0x150de40() {
   return (neuron0x14f6620()*0.16387);
}

double NNfunction_ss_dLuR::synapse0x150de80() {
   return (neuron0x14f6960()*-0.187857);
}

double NNfunction_ss_dLuR::synapse0x150dec0() {
   return (neuron0x14f6ca0()*0.0456473);
}

double NNfunction_ss_dLuR::synapse0x150df00() {
   return (neuron0x14f6fe0()*0.187935);
}

double NNfunction_ss_dLuR::synapse0x150df40() {
   return (neuron0x14f7320()*-0.362799);
}

double NNfunction_ss_dLuR::synapse0x150df80() {
   return (neuron0x14f7660()*-0.281551);
}

double NNfunction_ss_dLuR::synapse0x150dfc0() {
   return (neuron0x14f79a0()*0.0198989);
}

double NNfunction_ss_dLuR::synapse0x150e000() {
   return (neuron0x14f7ce0()*-0.079069);
}

double NNfunction_ss_dLuR::synapse0x150e040() {
   return (neuron0x14f8020()*-0.145102);
}

double NNfunction_ss_dLuR::synapse0x150e080() {
   return (neuron0x14f8360()*-0.740949);
}

double NNfunction_ss_dLuR::synapse0x150e0c0() {
   return (neuron0x14f86a0()*1.00591);
}

double NNfunction_ss_dLuR::synapse0x150e100() {
   return (neuron0x14f89e0()*-0.14121);
}

double NNfunction_ss_dLuR::synapse0x150e140() {
   return (neuron0x14f8d20()*-0.185655);
}

double NNfunction_ss_dLuR::synapse0x150e180() {
   return (neuron0x14f9060()*0.50048);
}

double NNfunction_ss_dLuR::synapse0x150e1c0() {
   return (neuron0x14f93a0()*1.16649);
}

double NNfunction_ss_dLuR::synapse0x150e200() {
   return (neuron0x14f96e0()*-0.413015);
}

double NNfunction_ss_dLuR::synapse0x150dc90() {
   return (neuron0x14f9a20()*0.888468);
}

double NNfunction_ss_dLuR::synapse0x150dcd0() {
   return (neuron0x14f9f80()*-0.334038);
}

double NNfunction_ss_dLuR::synapse0x150e350() {
   return (neuron0x14fa1a0()*0.207717);
}

double NNfunction_ss_dLuR::synapse0x150e390() {
   return (neuron0x14fa4e0()*0.229682);
}

double NNfunction_ss_dLuR::synapse0x150e3d0() {
   return (neuron0x14fa820()*0.597474);
}

double NNfunction_ss_dLuR::synapse0x150e410() {
   return (neuron0x14fab60()*-1.36733);
}

double NNfunction_ss_dLuR::synapse0x150e450() {
   return (neuron0x14faea0()*0.0760057);
}

double NNfunction_ss_dLuR::synapse0x150e490() {
   return (neuron0x14fb1e0()*0.117817);
}

double NNfunction_ss_dLuR::synapse0x150e810() {
   return (neuron0x14f6620()*-0.017518);
}

double NNfunction_ss_dLuR::synapse0x150e850() {
   return (neuron0x14f6960()*-0.155463);
}

double NNfunction_ss_dLuR::synapse0x150e890() {
   return (neuron0x14f6ca0()*-0.0793044);
}

double NNfunction_ss_dLuR::synapse0x150e8d0() {
   return (neuron0x14f6fe0()*-0.280379);
}

double NNfunction_ss_dLuR::synapse0x150e910() {
   return (neuron0x14f7320()*0.045215);
}

double NNfunction_ss_dLuR::synapse0x150e950() {
   return (neuron0x14f7660()*-0.0405773);
}

double NNfunction_ss_dLuR::synapse0x150e990() {
   return (neuron0x14f79a0()*-0.048293);
}

double NNfunction_ss_dLuR::synapse0x150e9d0() {
   return (neuron0x14f7ce0()*0.0666476);
}

double NNfunction_ss_dLuR::synapse0x150ea10() {
   return (neuron0x14f8020()*0.000847252);
}

double NNfunction_ss_dLuR::synapse0x150ea50() {
   return (neuron0x14f8360()*0.0258331);
}

double NNfunction_ss_dLuR::synapse0x150ea90() {
   return (neuron0x14f86a0()*-0.0495843);
}

double NNfunction_ss_dLuR::synapse0x150ead0() {
   return (neuron0x14f89e0()*0.103183);
}

double NNfunction_ss_dLuR::synapse0x150eb10() {
   return (neuron0x14f8d20()*0.179713);
}

double NNfunction_ss_dLuR::synapse0x150eb50() {
   return (neuron0x14f9060()*-0.0388026);
}

double NNfunction_ss_dLuR::synapse0x150eb90() {
   return (neuron0x14f93a0()*0.161235);
}

double NNfunction_ss_dLuR::synapse0x150ebd0() {
   return (neuron0x14f96e0()*0.0640017);
}

double NNfunction_ss_dLuR::synapse0x150e660() {
   return (neuron0x14f9a20()*-0.0433245);
}

double NNfunction_ss_dLuR::synapse0x150e6a0() {
   return (neuron0x14f9f80()*0.129838);
}

double NNfunction_ss_dLuR::synapse0x150ed20() {
   return (neuron0x14fa1a0()*0.05604);
}

double NNfunction_ss_dLuR::synapse0x150ed60() {
   return (neuron0x14fa4e0()*-0.00983172);
}

double NNfunction_ss_dLuR::synapse0x150eda0() {
   return (neuron0x14fa820()*-0.0184023);
}

double NNfunction_ss_dLuR::synapse0x150ede0() {
   return (neuron0x14fab60()*-0.000182417);
}

double NNfunction_ss_dLuR::synapse0x150ee20() {
   return (neuron0x14faea0()*-0.0257508);
}

double NNfunction_ss_dLuR::synapse0x150ee60() {
   return (neuron0x14fb1e0()*0.0619859);
}

double NNfunction_ss_dLuR::synapse0x150f1e0() {
   return (neuron0x14f6620()*-0.660178);
}

double NNfunction_ss_dLuR::synapse0x150f220() {
   return (neuron0x14f6960()*0.448704);
}

double NNfunction_ss_dLuR::synapse0x150f260() {
   return (neuron0x14f6ca0()*-1.09083);
}

double NNfunction_ss_dLuR::synapse0x150f2a0() {
   return (neuron0x14f6fe0()*0.337556);
}

double NNfunction_ss_dLuR::synapse0x150f2e0() {
   return (neuron0x14f7320()*0.204415);
}

double NNfunction_ss_dLuR::synapse0x150f320() {
   return (neuron0x14f7660()*-0.126156);
}

double NNfunction_ss_dLuR::synapse0x150f360() {
   return (neuron0x14f79a0()*0.720378);
}

double NNfunction_ss_dLuR::synapse0x150f3a0() {
   return (neuron0x14f7ce0()*0.387229);
}

double NNfunction_ss_dLuR::synapse0x150f3e0() {
   return (neuron0x14f8020()*-0.00777096);
}

double NNfunction_ss_dLuR::synapse0x150f420() {
   return (neuron0x14f8360()*-1.27334);
}

double NNfunction_ss_dLuR::synapse0x150f460() {
   return (neuron0x14f86a0()*-0.173053);
}

double NNfunction_ss_dLuR::synapse0x150f4a0() {
   return (neuron0x14f89e0()*-0.427557);
}

double NNfunction_ss_dLuR::synapse0x150f4e0() {
   return (neuron0x14f8d20()*0.478134);
}

double NNfunction_ss_dLuR::synapse0x150f520() {
   return (neuron0x14f9060()*0.252445);
}

double NNfunction_ss_dLuR::synapse0x150f560() {
   return (neuron0x14f93a0()*-0.555738);
}

double NNfunction_ss_dLuR::synapse0x150f5a0() {
   return (neuron0x14f96e0()*0.874262);
}

double NNfunction_ss_dLuR::synapse0x150f030() {
   return (neuron0x14f9a20()*-0.275517);
}

double NNfunction_ss_dLuR::synapse0x150f070() {
   return (neuron0x14f9f80()*0.21483);
}

double NNfunction_ss_dLuR::synapse0x150f6f0() {
   return (neuron0x14fa1a0()*-0.24881);
}

double NNfunction_ss_dLuR::synapse0x150f730() {
   return (neuron0x14fa4e0()*-0.360054);
}

double NNfunction_ss_dLuR::synapse0x150f770() {
   return (neuron0x14fa820()*0.274257);
}

double NNfunction_ss_dLuR::synapse0x150f7b0() {
   return (neuron0x14fab60()*-0.451065);
}

double NNfunction_ss_dLuR::synapse0x150f7f0() {
   return (neuron0x14faea0()*-0.038728);
}

double NNfunction_ss_dLuR::synapse0x150f830() {
   return (neuron0x14fb1e0()*-1.39491);
}

double NNfunction_ss_dLuR::synapse0x150fbb0() {
   return (neuron0x14f6620()*-0.0494046);
}

double NNfunction_ss_dLuR::synapse0x150fbf0() {
   return (neuron0x14f6960()*-0.228771);
}

double NNfunction_ss_dLuR::synapse0x150fc30() {
   return (neuron0x14f6ca0()*-0.192924);
}

double NNfunction_ss_dLuR::synapse0x150fc70() {
   return (neuron0x14f6fe0()*-1.57004);
}

double NNfunction_ss_dLuR::synapse0x150fcb0() {
   return (neuron0x14f7320()*0.121473);
}

double NNfunction_ss_dLuR::synapse0x150fcf0() {
   return (neuron0x14f7660()*-0.114701);
}

double NNfunction_ss_dLuR::synapse0x150fd30() {
   return (neuron0x14f79a0()*-0.0073522);
}

double NNfunction_ss_dLuR::synapse0x150fd70() {
   return (neuron0x14f7ce0()*0.0269136);
}

double NNfunction_ss_dLuR::synapse0x150fdb0() {
   return (neuron0x14f8020()*-0.0243952);
}

double NNfunction_ss_dLuR::synapse0x150fdf0() {
   return (neuron0x14f8360()*-0.00603204);
}

double NNfunction_ss_dLuR::synapse0x150fe30() {
   return (neuron0x14f86a0()*0.0394076);
}

double NNfunction_ss_dLuR::synapse0x150fe70() {
   return (neuron0x14f89e0()*0.215628);
}

double NNfunction_ss_dLuR::synapse0x150feb0() {
   return (neuron0x14f8d20()*-0.493513);
}

double NNfunction_ss_dLuR::synapse0x150fef0() {
   return (neuron0x14f9060()*0.0311783);
}

double NNfunction_ss_dLuR::synapse0x150ff30() {
   return (neuron0x14f93a0()*0.875914);
}

double NNfunction_ss_dLuR::synapse0x150ff70() {
   return (neuron0x14f96e0()*-0.338882);
}

double NNfunction_ss_dLuR::synapse0x150fa00() {
   return (neuron0x14f9a20()*0.0524329);
}

double NNfunction_ss_dLuR::synapse0x150fa40() {
   return (neuron0x14f9f80()*-0.267718);
}

double NNfunction_ss_dLuR::synapse0x15100c0() {
   return (neuron0x14fa1a0()*-0.178404);
}

double NNfunction_ss_dLuR::synapse0x1510100() {
   return (neuron0x14fa4e0()*-0.0918389);
}

double NNfunction_ss_dLuR::synapse0x1510140() {
   return (neuron0x14fa820()*0.0151234);
}

double NNfunction_ss_dLuR::synapse0x1510180() {
   return (neuron0x14fab60()*0.0611492);
}

double NNfunction_ss_dLuR::synapse0x15101c0() {
   return (neuron0x14faea0()*0.138172);
}

double NNfunction_ss_dLuR::synapse0x1510200() {
   return (neuron0x14fb1e0()*0.139345);
}

double NNfunction_ss_dLuR::synapse0x1510580() {
   return (neuron0x14f6620()*-0.00678317);
}

double NNfunction_ss_dLuR::synapse0x15105c0() {
   return (neuron0x14f6960()*-0.028925);
}

double NNfunction_ss_dLuR::synapse0x1510600() {
   return (neuron0x14f6ca0()*-0.00055556);
}

double NNfunction_ss_dLuR::synapse0x1510640() {
   return (neuron0x14f6fe0()*0.437378);
}

double NNfunction_ss_dLuR::synapse0x1510680() {
   return (neuron0x14f7320()*0.026076);
}

double NNfunction_ss_dLuR::synapse0x15106c0() {
   return (neuron0x14f7660()*-0.0390402);
}

double NNfunction_ss_dLuR::synapse0x1510700() {
   return (neuron0x14f79a0()*-0.0605712);
}

double NNfunction_ss_dLuR::synapse0x1510740() {
   return (neuron0x14f7ce0()*0.0139695);
}

double NNfunction_ss_dLuR::synapse0x1510780() {
   return (neuron0x14f8020()*0.0024876);
}

double NNfunction_ss_dLuR::synapse0x15107c0() {
   return (neuron0x14f8360()*0.0218709);
}

double NNfunction_ss_dLuR::synapse0x1510800() {
   return (neuron0x14f86a0()*-0.0378926);
}

double NNfunction_ss_dLuR::synapse0x1510840() {
   return (neuron0x14f89e0()*0.0937648);
}

double NNfunction_ss_dLuR::synapse0x1510880() {
   return (neuron0x14f8d20()*0.0245608);
}

double NNfunction_ss_dLuR::synapse0x15108c0() {
   return (neuron0x14f9060()*-0.0319534);
}

double NNfunction_ss_dLuR::synapse0x1510900() {
   return (neuron0x14f93a0()*-0.626701);
}

double NNfunction_ss_dLuR::synapse0x1510940() {
   return (neuron0x14f96e0()*0.00466095);
}

double NNfunction_ss_dLuR::synapse0x15103d0() {
   return (neuron0x14f9a20()*0.0120919);
}

double NNfunction_ss_dLuR::synapse0x1510410() {
   return (neuron0x14f9f80()*0.0165426);
}

double NNfunction_ss_dLuR::synapse0x1510a90() {
   return (neuron0x14fa1a0()*0.020892);
}

double NNfunction_ss_dLuR::synapse0x1510ad0() {
   return (neuron0x14fa4e0()*0.00195483);
}

double NNfunction_ss_dLuR::synapse0x1510b10() {
   return (neuron0x14fa820()*-0.0139883);
}

double NNfunction_ss_dLuR::synapse0x1510b50() {
   return (neuron0x14fab60()*-0.00853682);
}

double NNfunction_ss_dLuR::synapse0x1510b90() {
   return (neuron0x14faea0()*-0.0445355);
}

double NNfunction_ss_dLuR::synapse0x1510bd0() {
   return (neuron0x14fb1e0()*0.0446523);
}

double NNfunction_ss_dLuR::synapse0x1510f50() {
   return (neuron0x14f6620()*-0.00560326);
}

double NNfunction_ss_dLuR::synapse0x1505520() {
   return (neuron0x14f6960()*0.00743063);
}

double NNfunction_ss_dLuR::synapse0x1505560() {
   return (neuron0x14f6ca0()*0.00133368);
}

double NNfunction_ss_dLuR::synapse0x15055a0() {
   return (neuron0x14f6fe0()*-3.95573);
}

double NNfunction_ss_dLuR::synapse0x15057f0() {
   return (neuron0x14f7320()*-0.00147786);
}

double NNfunction_ss_dLuR::synapse0x1505830() {
   return (neuron0x14f7660()*-0.00481094);
}

double NNfunction_ss_dLuR::synapse0x1505870() {
   return (neuron0x14f79a0()*-0.00313607);
}

double NNfunction_ss_dLuR::synapse0x1505ac0() {
   return (neuron0x14f7ce0()*0.000720898);
}

double NNfunction_ss_dLuR::synapse0x1505b00() {
   return (neuron0x14f8020()*-0.00183267);
}

double NNfunction_ss_dLuR::synapse0x1505d50() {
   return (neuron0x14f8360()*0.00186868);
}

double NNfunction_ss_dLuR::synapse0x1505d90() {
   return (neuron0x14f86a0()*-0.00357586);
}

double NNfunction_ss_dLuR::synapse0x1505dd0() {
   return (neuron0x14f89e0()*-0.039742);
}

double NNfunction_ss_dLuR::synapse0x1506020() {
   return (neuron0x14f8d20()*-0.00510077);
}

double NNfunction_ss_dLuR::synapse0x1506060() {
   return (neuron0x14f9060()*0.0040787);
}

double NNfunction_ss_dLuR::synapse0x15062b0() {
   return (neuron0x14f93a0()*0.051032);
}

double NNfunction_ss_dLuR::synapse0x15062f0() {
   return (neuron0x14f96e0()*-0.000485803);
}

double NNfunction_ss_dLuR::synapse0x1510da0() {
   return (neuron0x14f9a20()*0.0120325);
}

double NNfunction_ss_dLuR::synapse0x1510de0() {
   return (neuron0x14f9f80()*-0.00742263);
}

double NNfunction_ss_dLuR::synapse0x1506440() {
   return (neuron0x14fa1a0()*-0.00154242);
}

double NNfunction_ss_dLuR::synapse0x1506950() {
   return (neuron0x14fa4e0()*-0.00553213);
}

double NNfunction_ss_dLuR::synapse0x1506990() {
   return (neuron0x14fa820()*0.00717684);
}

double NNfunction_ss_dLuR::synapse0x15069d0() {
   return (neuron0x14fab60()*0.00503806);
}

double NNfunction_ss_dLuR::synapse0x1506c20() {
   return (neuron0x14faea0()*-0.000341262);
}

double NNfunction_ss_dLuR::synapse0x1506c60() {
   return (neuron0x14fb1e0()*-0.00469286);
}

double NNfunction_ss_dLuR::synapse0x1506510() {
   return (neuron0x14f6620()*0.80767);
}

double NNfunction_ss_dLuR::synapse0x1506550() {
   return (neuron0x14f6960()*0.635946);
}

double NNfunction_ss_dLuR::synapse0x1506590() {
   return (neuron0x14f6ca0()*0.0476744);
}

double NNfunction_ss_dLuR::synapse0x15065d0() {
   return (neuron0x14f6fe0()*0.375365);
}

double NNfunction_ss_dLuR::synapse0x1506f50() {
   return (neuron0x14f7320()*0.271668);
}

double NNfunction_ss_dLuR::synapse0x15132a0() {
   return (neuron0x14f7660()*-0.357489);
}

double NNfunction_ss_dLuR::synapse0x15132e0() {
   return (neuron0x14f79a0()*0.740746);
}

double NNfunction_ss_dLuR::synapse0x1513320() {
   return (neuron0x14f7ce0()*0.345185);
}

double NNfunction_ss_dLuR::synapse0x1513360() {
   return (neuron0x14f8020()*0.718462);
}

double NNfunction_ss_dLuR::synapse0x15133a0() {
   return (neuron0x14f8360()*-0.405652);
}

double NNfunction_ss_dLuR::synapse0x15133e0() {
   return (neuron0x14f86a0()*-0.305165);
}

double NNfunction_ss_dLuR::synapse0x1513420() {
   return (neuron0x14f89e0()*0.624423);
}

double NNfunction_ss_dLuR::synapse0x1513460() {
   return (neuron0x14f8d20()*-0.52348);
}

double NNfunction_ss_dLuR::synapse0x15134a0() {
   return (neuron0x14f9060()*0.601651);
}

double NNfunction_ss_dLuR::synapse0x15134e0() {
   return (neuron0x14f93a0()*-0.573981);
}

double NNfunction_ss_dLuR::synapse0x1513520() {
   return (neuron0x14f96e0()*-0.637138);
}

double NNfunction_ss_dLuR::synapse0x1506e30() {
   return (neuron0x14f9a20()*1.57436);
}

double NNfunction_ss_dLuR::synapse0x1506e70() {
   return (neuron0x14f9f80()*-0.940716);
}

double NNfunction_ss_dLuR::synapse0x1513670() {
   return (neuron0x14fa1a0()*-1.1553);
}

double NNfunction_ss_dLuR::synapse0x15136b0() {
   return (neuron0x14fa4e0()*0.21222);
}

double NNfunction_ss_dLuR::synapse0x15136f0() {
   return (neuron0x14fa820()*-0.30145);
}

double NNfunction_ss_dLuR::synapse0x1513730() {
   return (neuron0x14fab60()*-0.338353);
}

double NNfunction_ss_dLuR::synapse0x1513770() {
   return (neuron0x14faea0()*0.199242);
}

double NNfunction_ss_dLuR::synapse0x15137b0() {
   return (neuron0x14fb1e0()*0.545809);
}

double NNfunction_ss_dLuR::synapse0x1513b30() {
   return (neuron0x14f6620()*0.546345);
}

double NNfunction_ss_dLuR::synapse0x1513b70() {
   return (neuron0x14f6960()*0.910819);
}

double NNfunction_ss_dLuR::synapse0x1513bb0() {
   return (neuron0x14f6ca0()*-0.0921598);
}

double NNfunction_ss_dLuR::synapse0x1513bf0() {
   return (neuron0x14f6fe0()*-0.492039);
}

double NNfunction_ss_dLuR::synapse0x1513c30() {
   return (neuron0x14f7320()*0.57552);
}

double NNfunction_ss_dLuR::synapse0x1513c70() {
   return (neuron0x14f7660()*-0.0175223);
}

double NNfunction_ss_dLuR::synapse0x1513cb0() {
   return (neuron0x14f79a0()*-0.493313);
}

double NNfunction_ss_dLuR::synapse0x1513cf0() {
   return (neuron0x14f7ce0()*-0.0156852);
}

double NNfunction_ss_dLuR::synapse0x1513d30() {
   return (neuron0x14f8020()*0.209801);
}

double NNfunction_ss_dLuR::synapse0x1513d70() {
   return (neuron0x14f8360()*0.72372);
}

double NNfunction_ss_dLuR::synapse0x1513db0() {
   return (neuron0x14f86a0()*1.40992);
}

double NNfunction_ss_dLuR::synapse0x1513df0() {
   return (neuron0x14f89e0()*0.387901);
}

double NNfunction_ss_dLuR::synapse0x1513e30() {
   return (neuron0x14f8d20()*0.47145);
}

double NNfunction_ss_dLuR::synapse0x1513e70() {
   return (neuron0x14f9060()*0.0346523);
}

double NNfunction_ss_dLuR::synapse0x1513eb0() {
   return (neuron0x14f93a0()*0.315671);
}

double NNfunction_ss_dLuR::synapse0x1513ef0() {
   return (neuron0x14f96e0()*-0.377178);
}

double NNfunction_ss_dLuR::synapse0x1513980() {
   return (neuron0x14f9a20()*-0.65993);
}

double NNfunction_ss_dLuR::synapse0x15139c0() {
   return (neuron0x14f9f80()*1.04343);
}

double NNfunction_ss_dLuR::synapse0x1514040() {
   return (neuron0x14fa1a0()*0.523028);
}

double NNfunction_ss_dLuR::synapse0x1514080() {
   return (neuron0x14fa4e0()*0.78236);
}

double NNfunction_ss_dLuR::synapse0x15140c0() {
   return (neuron0x14fa820()*-0.767488);
}

double NNfunction_ss_dLuR::synapse0x1514100() {
   return (neuron0x14fab60()*0.40056);
}

double NNfunction_ss_dLuR::synapse0x1514140() {
   return (neuron0x14faea0()*0.36378);
}

double NNfunction_ss_dLuR::synapse0x1514180() {
   return (neuron0x14fb1e0()*-0.669678);
}

double NNfunction_ss_dLuR::synapse0x1514500() {
   return (neuron0x14f6620()*-0.0025224);
}

double NNfunction_ss_dLuR::synapse0x1514540() {
   return (neuron0x14f6960()*-0.0122973);
}

double NNfunction_ss_dLuR::synapse0x1514580() {
   return (neuron0x14f6ca0()*0.0191679);
}

double NNfunction_ss_dLuR::synapse0x15145c0() {
   return (neuron0x14f6fe0()*0.0434284);
}

double NNfunction_ss_dLuR::synapse0x1514600() {
   return (neuron0x14f7320()*-0.00248978);
}

double NNfunction_ss_dLuR::synapse0x1514640() {
   return (neuron0x14f7660()*-0.0191443);
}

double NNfunction_ss_dLuR::synapse0x1514680() {
   return (neuron0x14f79a0()*-0.039496);
}

double NNfunction_ss_dLuR::synapse0x15146c0() {
   return (neuron0x14f7ce0()*-0.00306408);
}

double NNfunction_ss_dLuR::synapse0x1514700() {
   return (neuron0x14f8020()*0.0134879);
}

double NNfunction_ss_dLuR::synapse0x1514740() {
   return (neuron0x14f8360()*0.0341931);
}

double NNfunction_ss_dLuR::synapse0x1514780() {
   return (neuron0x14f86a0()*0.00449935);
}

double NNfunction_ss_dLuR::synapse0x15147c0() {
   return (neuron0x14f89e0()*0.0804191);
}

double NNfunction_ss_dLuR::synapse0x1514800() {
   return (neuron0x14f8d20()*0.0360105);
}

double NNfunction_ss_dLuR::synapse0x1514840() {
   return (neuron0x14f9060()*0.00135656);
}

double NNfunction_ss_dLuR::synapse0x1514880() {
   return (neuron0x14f93a0()*1.75612);
}

double NNfunction_ss_dLuR::synapse0x15148c0() {
   return (neuron0x14f96e0()*0.0321906);
}

double NNfunction_ss_dLuR::synapse0x1514350() {
   return (neuron0x14f9a20()*0.0188482);
}

double NNfunction_ss_dLuR::synapse0x1514390() {
   return (neuron0x14f9f80()*0.00719559);
}

double NNfunction_ss_dLuR::synapse0x1514a10() {
   return (neuron0x14fa1a0()*0.022137);
}

double NNfunction_ss_dLuR::synapse0x1514a50() {
   return (neuron0x14fa4e0()*0.00806752);
}

double NNfunction_ss_dLuR::synapse0x1514a90() {
   return (neuron0x14fa820()*-0.0272845);
}

double NNfunction_ss_dLuR::synapse0x1514ad0() {
   return (neuron0x14fab60()*-0.00246259);
}

double NNfunction_ss_dLuR::synapse0x1514b10() {
   return (neuron0x14faea0()*-0.00813028);
}

double NNfunction_ss_dLuR::synapse0x1514b50() {
   return (neuron0x14fb1e0()*0.0124539);
}

double NNfunction_ss_dLuR::synapse0x1514ed0() {
   return (neuron0x14f6620()*0.0820512);
}

double NNfunction_ss_dLuR::synapse0x1514f10() {
   return (neuron0x14f6960()*-0.445844);
}

double NNfunction_ss_dLuR::synapse0x1514f50() {
   return (neuron0x14f6ca0()*-0.313882);
}

double NNfunction_ss_dLuR::synapse0x1514f90() {
   return (neuron0x14f6fe0()*-1.24568);
}

double NNfunction_ss_dLuR::synapse0x1514fd0() {
   return (neuron0x14f7320()*-0.413792);
}

double NNfunction_ss_dLuR::synapse0x1515010() {
   return (neuron0x14f7660()*0.973887);
}

double NNfunction_ss_dLuR::synapse0x1515050() {
   return (neuron0x14f79a0()*0.433912);
}

double NNfunction_ss_dLuR::synapse0x1515090() {
   return (neuron0x14f7ce0()*-0.33955);
}

double NNfunction_ss_dLuR::synapse0x15150d0() {
   return (neuron0x14f8020()*0.540281);
}

double NNfunction_ss_dLuR::synapse0x1515110() {
   return (neuron0x14f8360()*-0.153732);
}

double NNfunction_ss_dLuR::synapse0x1515150() {
   return (neuron0x14f86a0()*-0.260024);
}

double NNfunction_ss_dLuR::synapse0x1515190() {
   return (neuron0x14f89e0()*0.197455);
}

double NNfunction_ss_dLuR::synapse0x15151d0() {
   return (neuron0x14f8d20()*-0.279051);
}

double NNfunction_ss_dLuR::synapse0x1515210() {
   return (neuron0x14f9060()*-0.237104);
}

double NNfunction_ss_dLuR::synapse0x1515250() {
   return (neuron0x14f93a0()*0.495061);
}

double NNfunction_ss_dLuR::synapse0x1515290() {
   return (neuron0x14f96e0()*-0.667897);
}

double NNfunction_ss_dLuR::synapse0x1514d20() {
   return (neuron0x14f9a20()*-0.459251);
}

double NNfunction_ss_dLuR::synapse0x1514d60() {
   return (neuron0x14f9f80()*0.823547);
}

double NNfunction_ss_dLuR::synapse0x15153e0() {
   return (neuron0x14fa1a0()*0.266897);
}

double NNfunction_ss_dLuR::synapse0x1515420() {
   return (neuron0x14fa4e0()*0.114089);
}

double NNfunction_ss_dLuR::synapse0x1515460() {
   return (neuron0x14fa820()*-0.127907);
}

double NNfunction_ss_dLuR::synapse0x15154a0() {
   return (neuron0x14fab60()*0.0427162);
}

double NNfunction_ss_dLuR::synapse0x15154e0() {
   return (neuron0x14faea0()*-0.435221);
}

double NNfunction_ss_dLuR::synapse0x1515520() {
   return (neuron0x14fb1e0()*0.38719);
}

double NNfunction_ss_dLuR::synapse0x15158a0() {
   return (neuron0x14f6620()*0.548549);
}

double NNfunction_ss_dLuR::synapse0x15158e0() {
   return (neuron0x14f6960()*-0.402764);
}

double NNfunction_ss_dLuR::synapse0x1515920() {
   return (neuron0x14f6ca0()*-0.621453);
}

double NNfunction_ss_dLuR::synapse0x1515960() {
   return (neuron0x14f6fe0()*1.04492);
}

double NNfunction_ss_dLuR::synapse0x15159a0() {
   return (neuron0x14f7320()*0.279574);
}

double NNfunction_ss_dLuR::synapse0x15159e0() {
   return (neuron0x14f7660()*0.963809);
}

double NNfunction_ss_dLuR::synapse0x1515a20() {
   return (neuron0x14f79a0()*-1.06643);
}

double NNfunction_ss_dLuR::synapse0x1515a60() {
   return (neuron0x14f7ce0()*0.727301);
}

double NNfunction_ss_dLuR::synapse0x1515aa0() {
   return (neuron0x14f8020()*-0.492673);
}

double NNfunction_ss_dLuR::synapse0x1515ae0() {
   return (neuron0x14f8360()*0.243206);
}

double NNfunction_ss_dLuR::synapse0x1515b20() {
   return (neuron0x14f86a0()*-0.0991522);
}

double NNfunction_ss_dLuR::synapse0x1515b60() {
   return (neuron0x14f89e0()*1.08559);
}

double NNfunction_ss_dLuR::synapse0x1515ba0() {
   return (neuron0x14f8d20()*0.262806);
}

double NNfunction_ss_dLuR::synapse0x1515be0() {
   return (neuron0x14f9060()*0.392297);
}

double NNfunction_ss_dLuR::synapse0x1515c20() {
   return (neuron0x14f93a0()*-0.633316);
}

double NNfunction_ss_dLuR::synapse0x1515c60() {
   return (neuron0x14f96e0()*0.336227);
}

double NNfunction_ss_dLuR::synapse0x15156f0() {
   return (neuron0x14f9a20()*0.867661);
}

double NNfunction_ss_dLuR::synapse0x1515730() {
   return (neuron0x14f9f80()*0.923935);
}

double NNfunction_ss_dLuR::synapse0x1515db0() {
   return (neuron0x14fa1a0()*0.396834);
}

double NNfunction_ss_dLuR::synapse0x1515df0() {
   return (neuron0x14fa4e0()*0.0061231);
}

double NNfunction_ss_dLuR::synapse0x1515e30() {
   return (neuron0x14fa820()*0.0399856);
}

double NNfunction_ss_dLuR::synapse0x1515e70() {
   return (neuron0x14fab60()*-0.372017);
}

double NNfunction_ss_dLuR::synapse0x1515eb0() {
   return (neuron0x14faea0()*0.701076);
}

double NNfunction_ss_dLuR::synapse0x1515ef0() {
   return (neuron0x14fb1e0()*-0.17);
}

double NNfunction_ss_dLuR::synapse0x1516270() {
   return (neuron0x14f6620()*0.422418);
}

double NNfunction_ss_dLuR::synapse0x15162b0() {
   return (neuron0x14f6960()*-0.245532);
}

double NNfunction_ss_dLuR::synapse0x15162f0() {
   return (neuron0x14f6ca0()*0.213115);
}

double NNfunction_ss_dLuR::synapse0x1516330() {
   return (neuron0x14f6fe0()*0.901526);
}

double NNfunction_ss_dLuR::synapse0x1516370() {
   return (neuron0x14f7320()*-0.0316937);
}

double NNfunction_ss_dLuR::synapse0x15163b0() {
   return (neuron0x14f7660()*0.334732);
}

double NNfunction_ss_dLuR::synapse0x15163f0() {
   return (neuron0x14f79a0()*-0.0318661);
}

double NNfunction_ss_dLuR::synapse0x1516430() {
   return (neuron0x14f7ce0()*0.455117);
}

double NNfunction_ss_dLuR::synapse0x1516470() {
   return (neuron0x14f8020()*-0.530838);
}

double NNfunction_ss_dLuR::synapse0x15164b0() {
   return (neuron0x14f8360()*-0.434955);
}

double NNfunction_ss_dLuR::synapse0x15164f0() {
   return (neuron0x14f86a0()*0.105732);
}

double NNfunction_ss_dLuR::synapse0x1516530() {
   return (neuron0x14f89e0()*0.861626);
}

double NNfunction_ss_dLuR::synapse0x1516570() {
   return (neuron0x14f8d20()*-0.3293);
}

double NNfunction_ss_dLuR::synapse0x15165b0() {
   return (neuron0x14f9060()*0.200091);
}

double NNfunction_ss_dLuR::synapse0x15165f0() {
   return (neuron0x14f93a0()*0.417229);
}

double NNfunction_ss_dLuR::synapse0x1516630() {
   return (neuron0x14f96e0()*0.663438);
}

double NNfunction_ss_dLuR::synapse0x15160c0() {
   return (neuron0x14f9a20()*0.613507);
}

double NNfunction_ss_dLuR::synapse0x1516100() {
   return (neuron0x14f9f80()*0.627534);
}

double NNfunction_ss_dLuR::synapse0x1516780() {
   return (neuron0x14fa1a0()*-0.106501);
}

double NNfunction_ss_dLuR::synapse0x15167c0() {
   return (neuron0x14fa4e0()*-0.100293);
}

double NNfunction_ss_dLuR::synapse0x1516800() {
   return (neuron0x14fa820()*-0.0555343);
}

double NNfunction_ss_dLuR::synapse0x1516840() {
   return (neuron0x14fab60()*0.843989);
}

double NNfunction_ss_dLuR::synapse0x1516880() {
   return (neuron0x14faea0()*-0.749093);
}

double NNfunction_ss_dLuR::synapse0x15168c0() {
   return (neuron0x14fb1e0()*-0.0913657);
}

double NNfunction_ss_dLuR::synapse0x1516c40() {
   return (neuron0x14f6620()*0.0138107);
}

double NNfunction_ss_dLuR::synapse0x1516c80() {
   return (neuron0x14f6960()*-0.0075286);
}

double NNfunction_ss_dLuR::synapse0x1516cc0() {
   return (neuron0x14f6ca0()*0.00061947);
}

double NNfunction_ss_dLuR::synapse0x1516d00() {
   return (neuron0x14f6fe0()*-8.84708);
}

double NNfunction_ss_dLuR::synapse0x1516d40() {
   return (neuron0x14f7320()*0.0260871);
}

double NNfunction_ss_dLuR::synapse0x1516d80() {
   return (neuron0x14f7660()*0.0140652);
}

double NNfunction_ss_dLuR::synapse0x1516dc0() {
   return (neuron0x14f79a0()*0.00100758);
}

double NNfunction_ss_dLuR::synapse0x1516e00() {
   return (neuron0x14f7ce0()*0.0110883);
}

double NNfunction_ss_dLuR::synapse0x1516e40() {
   return (neuron0x14f8020()*0.00444351);
}

double NNfunction_ss_dLuR::synapse0x1516e80() {
   return (neuron0x14f8360()*-0.00190028);
}

double NNfunction_ss_dLuR::synapse0x1516ec0() {
   return (neuron0x14f86a0()*-0.00443075);
}

double NNfunction_ss_dLuR::synapse0x1516f00() {
   return (neuron0x14f89e0()*0.127582);
}

double NNfunction_ss_dLuR::synapse0x1516f40() {
   return (neuron0x14f8d20()*0.0218999);
}

double NNfunction_ss_dLuR::synapse0x1516f80() {
   return (neuron0x14f9060()*-0.0157596);
}

double NNfunction_ss_dLuR::synapse0x1516fc0() {
   return (neuron0x14f93a0()*0.0846154);
}

double NNfunction_ss_dLuR::synapse0x1517000() {
   return (neuron0x14f96e0()*-0.00365416);
}

double NNfunction_ss_dLuR::synapse0x1516a90() {
   return (neuron0x14f9a20()*-0.00356086);
}

double NNfunction_ss_dLuR::synapse0x1516ad0() {
   return (neuron0x14f9f80()*0.00774825);
}

double NNfunction_ss_dLuR::synapse0x1517150() {
   return (neuron0x14fa1a0()*0.0146162);
}

double NNfunction_ss_dLuR::synapse0x1517190() {
   return (neuron0x14fa4e0()*-0.010666);
}

double NNfunction_ss_dLuR::synapse0x15171d0() {
   return (neuron0x14fa820()*-0.00104551);
}

double NNfunction_ss_dLuR::synapse0x1517210() {
   return (neuron0x14fab60()*-0.00127485);
}

double NNfunction_ss_dLuR::synapse0x1517250() {
   return (neuron0x14faea0()*0.018328);
}

double NNfunction_ss_dLuR::synapse0x1517290() {
   return (neuron0x14fb1e0()*-0.00219067);
}

double NNfunction_ss_dLuR::synapse0x1517610() {
   return (neuron0x14f6620()*-0.251503);
}

double NNfunction_ss_dLuR::synapse0x1517650() {
   return (neuron0x14f6960()*0.0514323);
}

double NNfunction_ss_dLuR::synapse0x1517690() {
   return (neuron0x14f6ca0()*-1.21647);
}

double NNfunction_ss_dLuR::synapse0x15176d0() {
   return (neuron0x14f6fe0()*0.705055);
}

double NNfunction_ss_dLuR::synapse0x1517710() {
   return (neuron0x14f7320()*-0.372569);
}

double NNfunction_ss_dLuR::synapse0x1517750() {
   return (neuron0x14f7660()*-0.0665697);
}

double NNfunction_ss_dLuR::synapse0x1517790() {
   return (neuron0x14f79a0()*0.861552);
}

double NNfunction_ss_dLuR::synapse0x15177d0() {
   return (neuron0x14f7ce0()*0.142974);
}

double NNfunction_ss_dLuR::synapse0x1517810() {
   return (neuron0x14f8020()*0.16925);
}

double NNfunction_ss_dLuR::synapse0x1517850() {
   return (neuron0x14f8360()*0.177406);
}

double NNfunction_ss_dLuR::synapse0x1517890() {
   return (neuron0x14f86a0()*-0.938217);
}

double NNfunction_ss_dLuR::synapse0x15178d0() {
   return (neuron0x14f89e0()*-0.0957777);
}

double NNfunction_ss_dLuR::synapse0x1517910() {
   return (neuron0x14f8d20()*0.143112);
}

double NNfunction_ss_dLuR::synapse0x1517950() {
   return (neuron0x14f9060()*-0.968246);
}

double NNfunction_ss_dLuR::synapse0x1517990() {
   return (neuron0x14f93a0()*-0.454274);
}

double NNfunction_ss_dLuR::synapse0x15179d0() {
   return (neuron0x14f96e0()*-0.468717);
}

double NNfunction_ss_dLuR::synapse0x1517460() {
   return (neuron0x14f9a20()*0.962803);
}

double NNfunction_ss_dLuR::synapse0x15174a0() {
   return (neuron0x14f9f80()*0.724437);
}

double NNfunction_ss_dLuR::synapse0x1517b20() {
   return (neuron0x14fa1a0()*0.0815468);
}

double NNfunction_ss_dLuR::synapse0x1517b60() {
   return (neuron0x14fa4e0()*-0.620414);
}

double NNfunction_ss_dLuR::synapse0x1517ba0() {
   return (neuron0x14fa820()*0.311838);
}

double NNfunction_ss_dLuR::synapse0x1517be0() {
   return (neuron0x14fab60()*-0.250587);
}

double NNfunction_ss_dLuR::synapse0x1517c20() {
   return (neuron0x14faea0()*0.774633);
}

double NNfunction_ss_dLuR::synapse0x1517c60() {
   return (neuron0x14fb1e0()*-0.0518599);
}

double NNfunction_ss_dLuR::synapse0x1500710() {
   return (neuron0x14f6620()*-0.00393393);
}

double NNfunction_ss_dLuR::synapse0x1500750() {
   return (neuron0x14f6960()*-0.0179986);
}

double NNfunction_ss_dLuR::synapse0x1500790() {
   return (neuron0x14f6ca0()*0.00831379);
}

double NNfunction_ss_dLuR::synapse0x15007d0() {
   return (neuron0x14f6fe0()*-0.123858);
}

double NNfunction_ss_dLuR::synapse0x1500810() {
   return (neuron0x14f7320()*-0.000593533);
}

double NNfunction_ss_dLuR::synapse0x1500850() {
   return (neuron0x14f7660()*0.00719873);
}

double NNfunction_ss_dLuR::synapse0x1500890() {
   return (neuron0x14f79a0()*0.00475717);
}

double NNfunction_ss_dLuR::synapse0x15008d0() {
   return (neuron0x14f7ce0()*0.000609795);
}

double NNfunction_ss_dLuR::synapse0x15183f0() {
   return (neuron0x14f8020()*0.00238166);
}

double NNfunction_ss_dLuR::synapse0x1518430() {
   return (neuron0x14f8360()*-0.00753084);
}

double NNfunction_ss_dLuR::synapse0x1518470() {
   return (neuron0x14f86a0()*0.00199359);
}

double NNfunction_ss_dLuR::synapse0x15184b0() {
   return (neuron0x14f89e0()*-0.899219);
}

double NNfunction_ss_dLuR::synapse0x15184f0() {
   return (neuron0x14f8d20()*0.00534891);
}

double NNfunction_ss_dLuR::synapse0x1518530() {
   return (neuron0x14f9060()*-0.00773505);
}

double NNfunction_ss_dLuR::synapse0x1518570() {
   return (neuron0x14f93a0()*-0.195726);
}

double NNfunction_ss_dLuR::synapse0x15185b0() {
   return (neuron0x14f96e0()*0.0151359);
}

double NNfunction_ss_dLuR::synapse0x1517e30() {
   return (neuron0x14f9a20()*-0.0102996);
}

double NNfunction_ss_dLuR::synapse0x1517e70() {
   return (neuron0x14f9f80()*0.0127277);
}

double NNfunction_ss_dLuR::synapse0x1518700() {
   return (neuron0x14fa1a0()*-0.00944538);
}

double NNfunction_ss_dLuR::synapse0x1518740() {
   return (neuron0x14fa4e0()*-0.00404497);
}

double NNfunction_ss_dLuR::synapse0x1518780() {
   return (neuron0x14fa820()*-0.0122781);
}

double NNfunction_ss_dLuR::synapse0x15187c0() {
   return (neuron0x14fab60()*-0.00661337);
}

double NNfunction_ss_dLuR::synapse0x1518800() {
   return (neuron0x14faea0()*0.00499851);
}

double NNfunction_ss_dLuR::synapse0x1518840() {
   return (neuron0x14fb1e0()*0.00141838);
}

double NNfunction_ss_dLuR::synapse0x1518bc0() {
   return (neuron0x14f6620()*-0.732696);
}

double NNfunction_ss_dLuR::synapse0x1518c00() {
   return (neuron0x14f6960()*0.649767);
}

double NNfunction_ss_dLuR::synapse0x1518c40() {
   return (neuron0x14f6ca0()*-0.905886);
}

double NNfunction_ss_dLuR::synapse0x1518c80() {
   return (neuron0x14f6fe0()*0.643894);
}

double NNfunction_ss_dLuR::synapse0x1518cc0() {
   return (neuron0x14f7320()*-0.424168);
}

double NNfunction_ss_dLuR::synapse0x1518d00() {
   return (neuron0x14f7660()*-0.316034);
}

double NNfunction_ss_dLuR::synapse0x1518d40() {
   return (neuron0x14f79a0()*0.660604);
}

double NNfunction_ss_dLuR::synapse0x1518d80() {
   return (neuron0x14f7ce0()*0.0798529);
}

double NNfunction_ss_dLuR::synapse0x1518dc0() {
   return (neuron0x14f8020()*0.256765);
}

double NNfunction_ss_dLuR::synapse0x1518e00() {
   return (neuron0x14f8360()*-0.990609);
}

double NNfunction_ss_dLuR::synapse0x1518e40() {
   return (neuron0x14f86a0()*-0.69116);
}

double NNfunction_ss_dLuR::synapse0x1518e80() {
   return (neuron0x14f89e0()*0.718047);
}

double NNfunction_ss_dLuR::synapse0x1518ec0() {
   return (neuron0x14f8d20()*1.00955);
}

double NNfunction_ss_dLuR::synapse0x1518f00() {
   return (neuron0x14f9060()*0.756396);
}

double NNfunction_ss_dLuR::synapse0x1518f40() {
   return (neuron0x14f93a0()*-0.130574);
}

double NNfunction_ss_dLuR::synapse0x1518f80() {
   return (neuron0x14f96e0()*-0.475629);
}

double NNfunction_ss_dLuR::synapse0x1518a10() {
   return (neuron0x14f9a20()*-0.183821);
}

double NNfunction_ss_dLuR::synapse0x1518a50() {
   return (neuron0x14f9f80()*0.0999203);
}

double NNfunction_ss_dLuR::synapse0x15190d0() {
   return (neuron0x14fa1a0()*0.0705446);
}

double NNfunction_ss_dLuR::synapse0x1519110() {
   return (neuron0x14fa4e0()*-0.260928);
}

double NNfunction_ss_dLuR::synapse0x1519150() {
   return (neuron0x14fa820()*0.454728);
}

double NNfunction_ss_dLuR::synapse0x1519190() {
   return (neuron0x14fab60()*-0.132148);
}

double NNfunction_ss_dLuR::synapse0x15191d0() {
   return (neuron0x14faea0()*0.103228);
}

double NNfunction_ss_dLuR::synapse0x1519210() {
   return (neuron0x14fb1e0()*-0.3167);
}

double NNfunction_ss_dLuR::synapse0x1519590() {
   return (neuron0x14f6620()*0.365816);
}

double NNfunction_ss_dLuR::synapse0x15195d0() {
   return (neuron0x14f6960()*0.0854143);
}

double NNfunction_ss_dLuR::synapse0x1519610() {
   return (neuron0x14f6ca0()*0.366875);
}

double NNfunction_ss_dLuR::synapse0x1519650() {
   return (neuron0x14f6fe0()*-1.12172);
}

double NNfunction_ss_dLuR::synapse0x1519690() {
   return (neuron0x14f7320()*-0.14513);
}

double NNfunction_ss_dLuR::synapse0x15196d0() {
   return (neuron0x14f7660()*-0.110108);
}

double NNfunction_ss_dLuR::synapse0x1519710() {
   return (neuron0x14f79a0()*-0.288943);
}

double NNfunction_ss_dLuR::synapse0x1519750() {
   return (neuron0x14f7ce0()*-0.765156);
}

double NNfunction_ss_dLuR::synapse0x1519790() {
   return (neuron0x14f8020()*-0.228541);
}

double NNfunction_ss_dLuR::synapse0x15197d0() {
   return (neuron0x14f8360()*0.0157083);
}

double NNfunction_ss_dLuR::synapse0x1519810() {
   return (neuron0x14f86a0()*0.150675);
}

double NNfunction_ss_dLuR::synapse0x1519850() {
   return (neuron0x14f89e0()*0.263754);
}

double NNfunction_ss_dLuR::synapse0x1519890() {
   return (neuron0x14f8d20()*-0.214064);
}

double NNfunction_ss_dLuR::synapse0x15198d0() {
   return (neuron0x14f9060()*0.198419);
}

double NNfunction_ss_dLuR::synapse0x1519910() {
   return (neuron0x14f93a0()*-0.0899784);
}

double NNfunction_ss_dLuR::synapse0x1519950() {
   return (neuron0x14f96e0()*0.10037);
}

double NNfunction_ss_dLuR::synapse0x15193e0() {
   return (neuron0x14f9a20()*0.525542);
}

double NNfunction_ss_dLuR::synapse0x1519420() {
   return (neuron0x14f9f80()*-0.00496097);
}

double NNfunction_ss_dLuR::synapse0x1509f50() {
   return (neuron0x14fa1a0()*-0.365917);
}

double NNfunction_ss_dLuR::synapse0x1509f90() {
   return (neuron0x14fa4e0()*-0.111398);
}

double NNfunction_ss_dLuR::synapse0x1509fd0() {
   return (neuron0x14fa820()*-0.141345);
}

double NNfunction_ss_dLuR::synapse0x150a010() {
   return (neuron0x14fab60()*0.0821099);
}

double NNfunction_ss_dLuR::synapse0x150a050() {
   return (neuron0x14faea0()*0.110525);
}

double NNfunction_ss_dLuR::synapse0x150a090() {
   return (neuron0x14fb1e0()*-0.218463);
}

double NNfunction_ss_dLuR::synapse0x150a410() {
   return (neuron0x14f6620()*-0.005091);
}

double NNfunction_ss_dLuR::synapse0x150a450() {
   return (neuron0x14f6960()*0.0069377);
}

double NNfunction_ss_dLuR::synapse0x150a490() {
   return (neuron0x14f6ca0()*0.0225207);
}

double NNfunction_ss_dLuR::synapse0x150a4d0() {
   return (neuron0x14f6fe0()*0.0248715);
}

double NNfunction_ss_dLuR::synapse0x150a510() {
   return (neuron0x14f7320()*0.00102904);
}

double NNfunction_ss_dLuR::synapse0x150a550() {
   return (neuron0x14f7660()*0.00938732);
}

double NNfunction_ss_dLuR::synapse0x150a590() {
   return (neuron0x14f79a0()*0.0124789);
}

double NNfunction_ss_dLuR::synapse0x150a5d0() {
   return (neuron0x14f7ce0()*-0.00770332);
}

double NNfunction_ss_dLuR::synapse0x150a610() {
   return (neuron0x14f8020()*-0.000744045);
}

double NNfunction_ss_dLuR::synapse0x150a650() {
   return (neuron0x14f8360()*-0.0133758);
}

double NNfunction_ss_dLuR::synapse0x150a690() {
   return (neuron0x14f86a0()*-0.00619081);
}

double NNfunction_ss_dLuR::synapse0x150a6d0() {
   return (neuron0x14f89e0()*1.73187);
}

double NNfunction_ss_dLuR::synapse0x150a710() {
   return (neuron0x14f8d20()*0.00529101);
}

double NNfunction_ss_dLuR::synapse0x150a750() {
   return (neuron0x14f9060()*0.000195836);
}

double NNfunction_ss_dLuR::synapse0x150a790() {
   return (neuron0x14f93a0()*-0.0152319);
}

double NNfunction_ss_dLuR::synapse0x150a7d0() {
   return (neuron0x14f96e0()*0.0103106);
}

double NNfunction_ss_dLuR::synapse0x150a260() {
   return (neuron0x14f9a20()*-0.00040499);
}

double NNfunction_ss_dLuR::synapse0x150a2a0() {
   return (neuron0x14f9f80()*0.0262857);
}

double NNfunction_ss_dLuR::synapse0x150a920() {
   return (neuron0x14fa1a0()*0.0124067);
}

double NNfunction_ss_dLuR::synapse0x150a960() {
   return (neuron0x14fa4e0()*-0.00504613);
}

double NNfunction_ss_dLuR::synapse0x150a9a0() {
   return (neuron0x14fa820()*0.00641026);
}

double NNfunction_ss_dLuR::synapse0x150a9e0() {
   return (neuron0x14fab60()*-0.0062819);
}

double NNfunction_ss_dLuR::synapse0x150aa20() {
   return (neuron0x14faea0()*-0.000507127);
}

double NNfunction_ss_dLuR::synapse0x150aa60() {
   return (neuron0x14fb1e0()*0.0100844);
}

double NNfunction_ss_dLuR::synapse0x150ade0() {
   return (neuron0x14f6620()*-1.05582);
}

double NNfunction_ss_dLuR::synapse0x150ae20() {
   return (neuron0x14f6960()*-0.74402);
}

double NNfunction_ss_dLuR::synapse0x150ae60() {
   return (neuron0x14f6ca0()*-0.366553);
}

double NNfunction_ss_dLuR::synapse0x150aea0() {
   return (neuron0x14f6fe0()*-0.0687737);
}

double NNfunction_ss_dLuR::synapse0x150aee0() {
   return (neuron0x14f7320()*-0.372586);
}

double NNfunction_ss_dLuR::synapse0x150af20() {
   return (neuron0x14f7660()*1.05587);
}

double NNfunction_ss_dLuR::synapse0x150af60() {
   return (neuron0x14f79a0()*0.353282);
}

double NNfunction_ss_dLuR::synapse0x150afa0() {
   return (neuron0x14f7ce0()*-0.817035);
}

double NNfunction_ss_dLuR::synapse0x150afe0() {
   return (neuron0x14f8020()*-1.29896);
}

double NNfunction_ss_dLuR::synapse0x150b020() {
   return (neuron0x14f8360()*0.0659882);
}

double NNfunction_ss_dLuR::synapse0x150b060() {
   return (neuron0x14f86a0()*-0.912106);
}

double NNfunction_ss_dLuR::synapse0x150b0a0() {
   return (neuron0x14f89e0()*-0.554473);
}

double NNfunction_ss_dLuR::synapse0x150b0e0() {
   return (neuron0x14f8d20()*-0.124291);
}

double NNfunction_ss_dLuR::synapse0x150b120() {
   return (neuron0x14f9060()*-0.468067);
}

double NNfunction_ss_dLuR::synapse0x150b160() {
   return (neuron0x14f93a0()*-0.262346);
}

double NNfunction_ss_dLuR::synapse0x150b1a0() {
   return (neuron0x14f96e0()*-0.804768);
}

double NNfunction_ss_dLuR::synapse0x150ac30() {
   return (neuron0x14f9a20()*1.37346);
}

double NNfunction_ss_dLuR::synapse0x150ac70() {
   return (neuron0x14f9f80()*-0.334675);
}

double NNfunction_ss_dLuR::synapse0x150b2f0() {
   return (neuron0x14fa1a0()*0.436683);
}

double NNfunction_ss_dLuR::synapse0x150b330() {
   return (neuron0x14fa4e0()*-0.0623879);
}

double NNfunction_ss_dLuR::synapse0x150b370() {
   return (neuron0x14fa820()*0.525601);
}

double NNfunction_ss_dLuR::synapse0x150b3b0() {
   return (neuron0x14fab60()*1.11397);
}

double NNfunction_ss_dLuR::synapse0x150b3f0() {
   return (neuron0x14faea0()*-0.420146);
}

double NNfunction_ss_dLuR::synapse0x150b430() {
   return (neuron0x14fb1e0()*0.746198);
}

double NNfunction_ss_dLuR::synapse0x150b7b0() {
   return (neuron0x14f6620()*0.743088);
}

double NNfunction_ss_dLuR::synapse0x150b7f0() {
   return (neuron0x14f6960()*0.120945);
}

double NNfunction_ss_dLuR::synapse0x150b830() {
   return (neuron0x14f6ca0()*0.155635);
}

double NNfunction_ss_dLuR::synapse0x150b870() {
   return (neuron0x14f6fe0()*0.250711);
}

double NNfunction_ss_dLuR::synapse0x150b8b0() {
   return (neuron0x14f7320()*-0.611633);
}

double NNfunction_ss_dLuR::synapse0x150b8f0() {
   return (neuron0x14f7660()*-0.391776);
}

double NNfunction_ss_dLuR::synapse0x150b930() {
   return (neuron0x14f79a0()*0.0121061);
}

double NNfunction_ss_dLuR::synapse0x150b970() {
   return (neuron0x14f7ce0()*-0.171917);
}

double NNfunction_ss_dLuR::synapse0x150b9b0() {
   return (neuron0x14f8020()*0.150248);
}

double NNfunction_ss_dLuR::synapse0x150b9f0() {
   return (neuron0x14f8360()*0.529993);
}

double NNfunction_ss_dLuR::synapse0x150ba30() {
   return (neuron0x14f86a0()*-0.26766);
}

double NNfunction_ss_dLuR::synapse0x150ba70() {
   return (neuron0x14f89e0()*-0.360841);
}

double NNfunction_ss_dLuR::synapse0x150bab0() {
   return (neuron0x14f8d20()*-0.147535);
}

double NNfunction_ss_dLuR::synapse0x150baf0() {
   return (neuron0x14f9060()*-0.143063);
}

double NNfunction_ss_dLuR::synapse0x150bb30() {
   return (neuron0x14f93a0()*-0.172935);
}

double NNfunction_ss_dLuR::synapse0x150bb70() {
   return (neuron0x14f96e0()*-0.416992);
}

double NNfunction_ss_dLuR::synapse0x150b600() {
   return (neuron0x14f9a20()*0.806152);
}

double NNfunction_ss_dLuR::synapse0x150b640() {
   return (neuron0x14f9f80()*-0.0326703);
}

double NNfunction_ss_dLuR::synapse0x150bcc0() {
   return (neuron0x14fa1a0()*-1.18059);
}

double NNfunction_ss_dLuR::synapse0x150bd00() {
   return (neuron0x14fa4e0()*-0.225786);
}

double NNfunction_ss_dLuR::synapse0x150bd40() {
   return (neuron0x14fa820()*0.0939431);
}

double NNfunction_ss_dLuR::synapse0x150bd80() {
   return (neuron0x14fab60()*0.721454);
}

double NNfunction_ss_dLuR::synapse0x150bdc0() {
   return (neuron0x14faea0()*-0.406736);
}

double NNfunction_ss_dLuR::synapse0x150be00() {
   return (neuron0x14fb1e0()*0.455079);
}

double NNfunction_ss_dLuR::synapse0x151dcd0() {
   return (neuron0x14f6620()*-0.0991088);
}

double NNfunction_ss_dLuR::synapse0x151dd10() {
   return (neuron0x14f6960()*-0.87372);
}

double NNfunction_ss_dLuR::synapse0x151dd50() {
   return (neuron0x14f6ca0()*-0.164973);
}

double NNfunction_ss_dLuR::synapse0x151dd90() {
   return (neuron0x14f6fe0()*0.790045);
}

double NNfunction_ss_dLuR::synapse0x151ddd0() {
   return (neuron0x14f7320()*-0.345499);
}

double NNfunction_ss_dLuR::synapse0x151de10() {
   return (neuron0x14f7660()*0.165684);
}

double NNfunction_ss_dLuR::synapse0x151de50() {
   return (neuron0x14f79a0()*-1.24149);
}

double NNfunction_ss_dLuR::synapse0x151de90() {
   return (neuron0x14f7ce0()*0.103199);
}

double NNfunction_ss_dLuR::synapse0x151ded0() {
   return (neuron0x14f8020()*0.432202);
}

double NNfunction_ss_dLuR::synapse0x151df10() {
   return (neuron0x14f8360()*0.715937);
}

double NNfunction_ss_dLuR::synapse0x151df50() {
   return (neuron0x14f86a0()*0.431719);
}

double NNfunction_ss_dLuR::synapse0x151df90() {
   return (neuron0x14f89e0()*1.05485);
}

double NNfunction_ss_dLuR::synapse0x151dfd0() {
   return (neuron0x14f8d20()*-0.584441);
}

double NNfunction_ss_dLuR::synapse0x151e010() {
   return (neuron0x14f9060()*-0.0873996);
}

double NNfunction_ss_dLuR::synapse0x151e050() {
   return (neuron0x14f93a0()*-0.0457682);
}

double NNfunction_ss_dLuR::synapse0x151e090() {
   return (neuron0x14f96e0()*-0.823559);
}

double NNfunction_ss_dLuR::synapse0x150be40() {
   return (neuron0x14f9a20()*0.474207);
}

double NNfunction_ss_dLuR::synapse0x150be80() {
   return (neuron0x14f9f80()*-0.851924);
}

double NNfunction_ss_dLuR::synapse0x151e1e0() {
   return (neuron0x14fa1a0()*-0.1665);
}

double NNfunction_ss_dLuR::synapse0x151e220() {
   return (neuron0x14fa4e0()*0.117822);
}

double NNfunction_ss_dLuR::synapse0x151e260() {
   return (neuron0x14fa820()*-0.293319);
}

double NNfunction_ss_dLuR::synapse0x151e2a0() {
   return (neuron0x14fab60()*0.180089);
}

double NNfunction_ss_dLuR::synapse0x151e2e0() {
   return (neuron0x14faea0()*-0.0383003);
}

double NNfunction_ss_dLuR::synapse0x151e320() {
   return (neuron0x14fb1e0()*-0.492499);
}

double NNfunction_ss_dLuR::synapse0x151e6a0() {
   return (neuron0x14f6620()*0.257263);
}

double NNfunction_ss_dLuR::synapse0x151e6e0() {
   return (neuron0x14f6960()*0.561059);
}

double NNfunction_ss_dLuR::synapse0x151e720() {
   return (neuron0x14f6ca0()*0.198759);
}

double NNfunction_ss_dLuR::synapse0x151e760() {
   return (neuron0x14f6fe0()*-0.798404);
}

double NNfunction_ss_dLuR::synapse0x151e7a0() {
   return (neuron0x14f7320()*-0.211501);
}

double NNfunction_ss_dLuR::synapse0x151e7e0() {
   return (neuron0x14f7660()*0.299468);
}

double NNfunction_ss_dLuR::synapse0x151e820() {
   return (neuron0x14f79a0()*0.680306);
}

double NNfunction_ss_dLuR::synapse0x151e860() {
   return (neuron0x14f7ce0()*0.743038);
}

double NNfunction_ss_dLuR::synapse0x151e8a0() {
   return (neuron0x14f8020()*-0.440071);
}

double NNfunction_ss_dLuR::synapse0x151e8e0() {
   return (neuron0x14f8360()*0.36069);
}

double NNfunction_ss_dLuR::synapse0x151e920() {
   return (neuron0x14f86a0()*0.131132);
}

double NNfunction_ss_dLuR::synapse0x151e960() {
   return (neuron0x14f89e0()*-0.453565);
}

double NNfunction_ss_dLuR::synapse0x151e9a0() {
   return (neuron0x14f8d20()*0.0964506);
}

double NNfunction_ss_dLuR::synapse0x151e9e0() {
   return (neuron0x14f9060()*0.799093);
}

double NNfunction_ss_dLuR::synapse0x151ea20() {
   return (neuron0x14f93a0()*0.370194);
}

double NNfunction_ss_dLuR::synapse0x151ea60() {
   return (neuron0x14f96e0()*-0.249611);
}

double NNfunction_ss_dLuR::synapse0x151e4f0() {
   return (neuron0x14f9a20()*0.502605);
}

double NNfunction_ss_dLuR::synapse0x151e530() {
   return (neuron0x14f9f80()*-0.00488482);
}

double NNfunction_ss_dLuR::synapse0x151ebb0() {
   return (neuron0x14fa1a0()*0.585634);
}

double NNfunction_ss_dLuR::synapse0x151ebf0() {
   return (neuron0x14fa4e0()*0.000241645);
}

double NNfunction_ss_dLuR::synapse0x151ec30() {
   return (neuron0x14fa820()*-0.273734);
}

double NNfunction_ss_dLuR::synapse0x151ec70() {
   return (neuron0x14fab60()*-0.302169);
}

double NNfunction_ss_dLuR::synapse0x151ecb0() {
   return (neuron0x14faea0()*0.479461);
}

double NNfunction_ss_dLuR::synapse0x151ecf0() {
   return (neuron0x14fb1e0()*-0.348616);
}

double NNfunction_ss_dLuR::synapse0x151f070() {
   return (neuron0x14f6620()*0.00209271);
}

double NNfunction_ss_dLuR::synapse0x151f0b0() {
   return (neuron0x14f6960()*0.00347459);
}

double NNfunction_ss_dLuR::synapse0x151f0f0() {
   return (neuron0x14f6ca0()*0.00435693);
}

double NNfunction_ss_dLuR::synapse0x151f130() {
   return (neuron0x14f6fe0()*3.04739);
}

double NNfunction_ss_dLuR::synapse0x151f170() {
   return (neuron0x14f7320()*-0.00930246);
}

double NNfunction_ss_dLuR::synapse0x151f1b0() {
   return (neuron0x14f7660()*0.00580211);
}

double NNfunction_ss_dLuR::synapse0x151f1f0() {
   return (neuron0x14f79a0()*0.00595544);
}

double NNfunction_ss_dLuR::synapse0x151f230() {
   return (neuron0x14f7ce0()*-0.0100471);
}

double NNfunction_ss_dLuR::synapse0x151f270() {
   return (neuron0x14f8020()*0.00338269);
}

double NNfunction_ss_dLuR::synapse0x151f2b0() {
   return (neuron0x14f8360()*-0.00093564);
}

double NNfunction_ss_dLuR::synapse0x151f2f0() {
   return (neuron0x14f86a0()*-0.000141823);
}

double NNfunction_ss_dLuR::synapse0x151f330() {
   return (neuron0x14f89e0()*0.411847);
}

double NNfunction_ss_dLuR::synapse0x151f370() {
   return (neuron0x14f8d20()*0.0124611);
}

double NNfunction_ss_dLuR::synapse0x151f3b0() {
   return (neuron0x14f9060()*0.00555035);
}

double NNfunction_ss_dLuR::synapse0x151f3f0() {
   return (neuron0x14f93a0()*0.230821);
}

double NNfunction_ss_dLuR::synapse0x151f430() {
   return (neuron0x14f96e0()*0.0174064);
}

double NNfunction_ss_dLuR::synapse0x151eec0() {
   return (neuron0x14f9a20()*-0.00156662);
}

double NNfunction_ss_dLuR::synapse0x151ef00() {
   return (neuron0x14f9f80()*0.0012426);
}

double NNfunction_ss_dLuR::synapse0x151f580() {
   return (neuron0x14fa1a0()*-7.29133e-05);
}

double NNfunction_ss_dLuR::synapse0x151f5c0() {
   return (neuron0x14fa4e0()*0.00900209);
}

double NNfunction_ss_dLuR::synapse0x151f600() {
   return (neuron0x14fa820()*0.0015042);
}

double NNfunction_ss_dLuR::synapse0x151f640() {
   return (neuron0x14fab60()*-0.00225754);
}

double NNfunction_ss_dLuR::synapse0x151f680() {
   return (neuron0x14faea0()*-0.00602277);
}

double NNfunction_ss_dLuR::synapse0x151f6c0() {
   return (neuron0x14fb1e0()*-0.00262218);
}

double NNfunction_ss_dLuR::synapse0x151fa40() {
   return (neuron0x14f6620()*-0.00538346);
}

double NNfunction_ss_dLuR::synapse0x151fa80() {
   return (neuron0x14f6960()*0.0110357);
}

double NNfunction_ss_dLuR::synapse0x151fac0() {
   return (neuron0x14f6ca0()*-0.0199193);
}

double NNfunction_ss_dLuR::synapse0x151fb00() {
   return (neuron0x14f6fe0()*0.0677153);
}

double NNfunction_ss_dLuR::synapse0x151fb40() {
   return (neuron0x14f7320()*0.00326125);
}

double NNfunction_ss_dLuR::synapse0x151fb80() {
   return (neuron0x14f7660()*-0.00664277);
}

double NNfunction_ss_dLuR::synapse0x151fbc0() {
   return (neuron0x14f79a0()*-0.0248442);
}

double NNfunction_ss_dLuR::synapse0x151fc00() {
   return (neuron0x14f7ce0()*0.0072044);
}

double NNfunction_ss_dLuR::synapse0x151fc40() {
   return (neuron0x14f8020()*0.00972323);
}

double NNfunction_ss_dLuR::synapse0x151fc80() {
   return (neuron0x14f8360()*0.0222985);
}

double NNfunction_ss_dLuR::synapse0x151fcc0() {
   return (neuron0x14f86a0()*0.00504946);
}

double NNfunction_ss_dLuR::synapse0x151fd00() {
   return (neuron0x14f89e0()*0.149642);
}

double NNfunction_ss_dLuR::synapse0x151fd40() {
   return (neuron0x14f8d20()*0.0131759);
}

double NNfunction_ss_dLuR::synapse0x151fd80() {
   return (neuron0x14f9060()*0.0132479);
}

double NNfunction_ss_dLuR::synapse0x151fdc0() {
   return (neuron0x14f93a0()*1.7162);
}

double NNfunction_ss_dLuR::synapse0x151fe00() {
   return (neuron0x14f96e0()*0.0368687);
}

double NNfunction_ss_dLuR::synapse0x151f890() {
   return (neuron0x14f9a20()*0.0314903);
}

double NNfunction_ss_dLuR::synapse0x151f8d0() {
   return (neuron0x14f9f80()*-0.0313053);
}

double NNfunction_ss_dLuR::synapse0x151ff50() {
   return (neuron0x14fa1a0()*0.00226034);
}

double NNfunction_ss_dLuR::synapse0x151ff90() {
   return (neuron0x14fa4e0()*0.0102697);
}

double NNfunction_ss_dLuR::synapse0x151ffd0() {
   return (neuron0x14fa820()*-0.0143659);
}

double NNfunction_ss_dLuR::synapse0x1520010() {
   return (neuron0x14fab60()*0.000687714);
}

double NNfunction_ss_dLuR::synapse0x1520050() {
   return (neuron0x14faea0()*-0.00538606);
}

double NNfunction_ss_dLuR::synapse0x1520090() {
   return (neuron0x14fb1e0()*0.00224036);
}

double NNfunction_ss_dLuR::synapse0x14fc630() {
   return (neuron0x14fb680()*0.00145838);
}

double NNfunction_ss_dLuR::synapse0x14fc670() {
   return (neuron0x14fbf90()*-0.0152288);
}

double NNfunction_ss_dLuR::synapse0x14fdb40() {
   return (neuron0x14fca70()*-0.0207951);
}

double NNfunction_ss_dLuR::synapse0x14fdb80() {
   return (neuron0x12b6300()*0.0408008);
}

double NNfunction_ss_dLuR::synapse0x14fe510() {
   return (neuron0x14fd890()*0.749209);
}

double NNfunction_ss_dLuR::synapse0x14fe550() {
   return (neuron0x14fe260()*0.00805555);
}

double NNfunction_ss_dLuR::synapse0x14ff2e0() {
   return (neuron0x14ff030()*0.0163541);
}

double NNfunction_ss_dLuR::synapse0x14ff320() {
   return (neuron0x14ffa00()*0.0138078);
}

double NNfunction_ss_dLuR::synapse0x14ffcb0() {
   return (neuron0x15003d0()*-1.25209);
}

double NNfunction_ss_dLuR::synapse0x14ffcf0() {
   return (neuron0x1500eb0()*0.00499326);
}

double NNfunction_ss_dLuR::synapse0x1500680() {
   return (neuron0x1501880()*-0.592413);
}

double NNfunction_ss_dLuR::synapse0x15006c0() {
   return (neuron0x14fe960()*3.01428);
}

double NNfunction_ss_dLuR::synapse0x1501160() {
   return (neuron0x1503430()*0.00486942);
}

double NNfunction_ss_dLuR::synapse0x15011a0() {
   return (neuron0x1503e00()*0.0145932);
}

double NNfunction_ss_dLuR::synapse0x1501b30() {
   return (neuron0x15047d0()*0.00662954);
}

double NNfunction_ss_dLuR::synapse0x1501b70() {
   return (neuron0x15051a0()*0.0208895);
}

double NNfunction_ss_dLuR::synapse0x14fec10() {
   return (neuron0x1506fb0()*-0.105432);
}

double NNfunction_ss_dLuR::synapse0x14fec50() {
   return (neuron0x1507290()*1.15034);
}

double NNfunction_ss_dLuR::synapse0x15036e0() {
   return (neuron0x1507c60()*1.53648);
}

double NNfunction_ss_dLuR::synapse0x1503720() {
   return (neuron0x1508630()*-0.016257);
}

double NNfunction_ss_dLuR::synapse0x15040b0() {
   return (neuron0x1509000()*-0.169732);
}

double NNfunction_ss_dLuR::synapse0x15040f0() {
   return (neuron0x15099d0()*-0.00547531);
}

double NNfunction_ss_dLuR::synapse0x1504a80() {
   return (neuron0x1502520()*-0.0193614);
}

double NNfunction_ss_dLuR::synapse0x1504ac0() {
   return (neuron0x1502ef0()*-0.019598);
}

double NNfunction_ss_dLuR::synapse0x1505450() {
   return (neuron0x150c760()*-0.0151504);
}

double NNfunction_ss_dLuR::synapse0x1505490() {
   return (neuron0x150d130()*0.231168);
}

double NNfunction_ss_dLuR::synapse0x14f95c0() {
   return (neuron0x150db00()*0.00961286);
}

double NNfunction_ss_dLuR::synapse0x14f9600() {
   return (neuron0x150e4d0()*0.279661);
}

double NNfunction_ss_dLuR::synapse0x1507540() {
   return (neuron0x150eea0()*0.00317457);
}

double NNfunction_ss_dLuR::synapse0x1507580() {
   return (neuron0x150f870()*-0.324929);
}

double NNfunction_ss_dLuR::synapse0x1507f10() {
   return (neuron0x1510240()*-0.502546);
}

double NNfunction_ss_dLuR::synapse0x1507f50() {
   return (neuron0x1510c10()*1.38566);
}

double NNfunction_ss_dLuR::synapse0x15088e0() {
   return (neuron0x1506ca0()*-0.0186875);
}

double NNfunction_ss_dLuR::synapse0x1508920() {
   return (neuron0x15137f0()*-0.0239368);
}

double NNfunction_ss_dLuR::synapse0x15092b0() {
   return (neuron0x15141c0()*-0.835379);
}

double NNfunction_ss_dLuR::synapse0x15092f0() {
   return (neuron0x1514b90()*0.00133826);
}

double NNfunction_ss_dLuR::synapse0x1509c80() {
   return (neuron0x1515560()*-0.00424468);
}

double NNfunction_ss_dLuR::synapse0x1509cc0() {
   return (neuron0x1515f30()*-0.0209176);
}

double NNfunction_ss_dLuR::synapse0x15027d0() {
   return (neuron0x1516900()*1.07081);
}

double NNfunction_ss_dLuR::synapse0x1502810() {
   return (neuron0x15172d0()*-0.00195182);
}

double NNfunction_ss_dLuR::synapse0x150c080() {
   return (neuron0x1517ca0()*-1.4158);
}

double NNfunction_ss_dLuR::synapse0x150c0c0() {
   return (neuron0x1518880()*-0.00775968);
}

double NNfunction_ss_dLuR::synapse0x150ca10() {
   return (neuron0x1519250()*0.0589519);
}

double NNfunction_ss_dLuR::synapse0x150ca50() {
   return (neuron0x150a0d0()*-1.34086);
}

double NNfunction_ss_dLuR::synapse0x150d3e0() {
   return (neuron0x150aaa0()*-0.00599283);
}

double NNfunction_ss_dLuR::synapse0x150d420() {
   return (neuron0x150b470()*-0.00255329);
}

double NNfunction_ss_dLuR::synapse0x150ddb0() {
   return (neuron0x151dab0()*-0.0121084);
}

double NNfunction_ss_dLuR::synapse0x150ddf0() {
   return (neuron0x151e360()*0.0208592);
}

double NNfunction_ss_dLuR::synapse0x150e780() {
   return (neuron0x151ed30()*2.1563);
}

double NNfunction_ss_dLuR::synapse0x150e7c0() {
   return (neuron0x151f700()*1.51919);
}

double NNfunction_ss_dLuR::synapse0x1510ec0() {
   return (neuron0x14fb680()*-1.57376);
}

double NNfunction_ss_dLuR::synapse0x1510f00() {
   return (neuron0x14fbf90()*-1.62517);
}

double NNfunction_ss_dLuR::synapse0x1506480() {
   return (neuron0x14fca70()*0.791725);
}

double NNfunction_ss_dLuR::synapse0x15064c0() {
   return (neuron0x12b6300()*1.99574);
}

double NNfunction_ss_dLuR::synapse0x1513aa0() {
   return (neuron0x14fd890()*0.708781);
}

double NNfunction_ss_dLuR::synapse0x1513ae0() {
   return (neuron0x14fe260()*-0.965648);
}

double NNfunction_ss_dLuR::synapse0x1514470() {
   return (neuron0x14ff030()*-1.07793);
}

double NNfunction_ss_dLuR::synapse0x15144b0() {
   return (neuron0x14ffa00()*-1.59694);
}

double NNfunction_ss_dLuR::synapse0x1514e40() {
   return (neuron0x15003d0()*0.0432578);
}

double NNfunction_ss_dLuR::synapse0x1514e80() {
   return (neuron0x1500eb0()*0.598682);
}

double NNfunction_ss_dLuR::synapse0x1515810() {
   return (neuron0x1501880()*2.78697);
}

double NNfunction_ss_dLuR::synapse0x1515850() {
   return (neuron0x14fe960()*-2.50849);
}

double NNfunction_ss_dLuR::synapse0x15161e0() {
   return (neuron0x1503430()*-1.16966);
}

double NNfunction_ss_dLuR::synapse0x1516220() {
   return (neuron0x1503e00()*2.57093);
}

double NNfunction_ss_dLuR::synapse0x1516bb0() {
   return (neuron0x15047d0()*2.19792);
}

double NNfunction_ss_dLuR::synapse0x1516bf0() {
   return (neuron0x15051a0()*1.78811);
}

double NNfunction_ss_dLuR::synapse0x1517580() {
   return (neuron0x1506fb0()*2.12875);
}

double NNfunction_ss_dLuR::synapse0x15175c0() {
   return (neuron0x1507290()*1.94685);
}

double NNfunction_ss_dLuR::synapse0x1517f50() {
   return (neuron0x1507c60()*0.135391);
}

double NNfunction_ss_dLuR::synapse0x1517f90() {
   return (neuron0x1508630()*-2.3146);
}

double NNfunction_ss_dLuR::synapse0x1518b30() {
   return (neuron0x1509000()*-4.00418);
}

double NNfunction_ss_dLuR::synapse0x1518b70() {
   return (neuron0x15099d0()*-0.376547);
}

double NNfunction_ss_dLuR::synapse0x1519500() {
   return (neuron0x1502520()*-1.10593);
}

double NNfunction_ss_dLuR::synapse0x1519540() {
   return (neuron0x1502ef0()*-1.8007);
}

double NNfunction_ss_dLuR::synapse0x150a380() {
   return (neuron0x150c760()*-1.50799);
}

double NNfunction_ss_dLuR::synapse0x150a3c0() {
   return (neuron0x150d130()*-5.13293);
}

double NNfunction_ss_dLuR::synapse0x150ad50() {
   return (neuron0x150db00()*1.79931);
}

double NNfunction_ss_dLuR::synapse0x150ad90() {
   return (neuron0x150e4d0()*-0.292162);
}

double NNfunction_ss_dLuR::synapse0x150b720() {
   return (neuron0x150eea0()*0.644299);
}

double NNfunction_ss_dLuR::synapse0x150b760() {
   return (neuron0x150f870()*3.37723);
}

double NNfunction_ss_dLuR::synapse0x151dc40() {
   return (neuron0x1510240()*-0.865795);
}

double NNfunction_ss_dLuR::synapse0x151dc80() {
   return (neuron0x1510c10()*-4.15852);
}

double NNfunction_ss_dLuR::synapse0x151e610() {
   return (neuron0x1506ca0()*-0.758164);
}

double NNfunction_ss_dLuR::synapse0x151e650() {
   return (neuron0x15137f0()*-1.47969);
}

double NNfunction_ss_dLuR::synapse0x151efe0() {
   return (neuron0x15141c0()*-0.697443);
}

double NNfunction_ss_dLuR::synapse0x151f020() {
   return (neuron0x1514b90()*0.740842);
}

double NNfunction_ss_dLuR::synapse0x151f9b0() {
   return (neuron0x1515560()*-0.439977);
}

double NNfunction_ss_dLuR::synapse0x151f9f0() {
   return (neuron0x1515f30()*-1.54364);
}

double NNfunction_ss_dLuR::synapse0x14fb8a0() {
   return (neuron0x1516900()*-8.13626);
}

double NNfunction_ss_dLuR::synapse0x14fb8e0() {
   return (neuron0x15172d0()*0.493724);
}

double NNfunction_ss_dLuR::synapse0x150f150() {
   return (neuron0x1517ca0()*0.981328);
}

double NNfunction_ss_dLuR::synapse0x150f190() {
   return (neuron0x1518880()*-1.48651);
}

double NNfunction_ss_dLuR::synapse0x15200d0() {
   return (neuron0x1519250()*2.955);
}

double NNfunction_ss_dLuR::synapse0x1520110() {
   return (neuron0x150a0d0()*1.58156);
}

double NNfunction_ss_dLuR::synapse0x1520150() {
   return (neuron0x150aaa0()*1.47078);
}

double NNfunction_ss_dLuR::synapse0x1520190() {
   return (neuron0x150b470()*2.26485);
}

double NNfunction_ss_dLuR::synapse0x1527040() {
   return (neuron0x151dab0()*-1.50268);
}

double NNfunction_ss_dLuR::synapse0x1527080() {
   return (neuron0x151e360()*1.57469);
}

double NNfunction_ss_dLuR::synapse0x15270c0() {
   return (neuron0x151ed30()*-3.43516);
}

double NNfunction_ss_dLuR::synapse0x1527100() {
   return (neuron0x151f700()*-1.28431);
}

double NNfunction_ss_dLuR::synapse0x1527480() {
   return (neuron0x14fb680()*0.0176743);
}

double NNfunction_ss_dLuR::synapse0x15274c0() {
   return (neuron0x14fbf90()*0.00415993);
}

double NNfunction_ss_dLuR::synapse0x1527500() {
   return (neuron0x14fca70()*0.0427709);
}

double NNfunction_ss_dLuR::synapse0x1527540() {
   return (neuron0x12b6300()*-0.0438407);
}

double NNfunction_ss_dLuR::synapse0x1527580() {
   return (neuron0x14fd890()*-0.964382);
}

double NNfunction_ss_dLuR::synapse0x15275c0() {
   return (neuron0x14fe260()*-0.0338219);
}

double NNfunction_ss_dLuR::synapse0x1527600() {
   return (neuron0x14ff030()*-0.0235416);
}

double NNfunction_ss_dLuR::synapse0x1527640() {
   return (neuron0x14ffa00()*-0.017471);
}

double NNfunction_ss_dLuR::synapse0x1527680() {
   return (neuron0x15003d0()*0.385634);
}

double NNfunction_ss_dLuR::synapse0x15276c0() {
   return (neuron0x1500eb0()*0.00448583);
}

double NNfunction_ss_dLuR::synapse0x1527700() {
   return (neuron0x1501880()*0.291086);
}

double NNfunction_ss_dLuR::synapse0x1527740() {
   return (neuron0x14fe960()*0.0698433);
}

double NNfunction_ss_dLuR::synapse0x1527780() {
   return (neuron0x1503430()*-0.00293224);
}

double NNfunction_ss_dLuR::synapse0x15277c0() {
   return (neuron0x1503e00()*0.0171442);
}

double NNfunction_ss_dLuR::synapse0x1527800() {
   return (neuron0x15047d0()*0.0127157);
}

double NNfunction_ss_dLuR::synapse0x1527840() {
   return (neuron0x15051a0()*-0.00791625);
}

double NNfunction_ss_dLuR::synapse0x15272d0() {
   return (neuron0x1506fb0()*-0.00525623);
}

double NNfunction_ss_dLuR::synapse0x1527310() {
   return (neuron0x1507290()*-0.790095);
}

double NNfunction_ss_dLuR::synapse0x1527990() {
   return (neuron0x1507c60()*1.66837);
}

double NNfunction_ss_dLuR::synapse0x15279d0() {
   return (neuron0x1508630()*-0.0148381);
}

double NNfunction_ss_dLuR::synapse0x1527a10() {
   return (neuron0x1509000()*-0.0633999);
}

double NNfunction_ss_dLuR::synapse0x1527a50() {
   return (neuron0x15099d0()*0.00147457);
}

double NNfunction_ss_dLuR::synapse0x1527a90() {
   return (neuron0x1502520()*0.0162121);
}

double NNfunction_ss_dLuR::synapse0x1527ad0() {
   return (neuron0x1502ef0()*-0.00359232);
}

double NNfunction_ss_dLuR::synapse0x1527b10() {
   return (neuron0x150c760()*0.00944359);
}

double NNfunction_ss_dLuR::synapse0x1527b50() {
   return (neuron0x150d130()*0.148532);
}

double NNfunction_ss_dLuR::synapse0x1527b90() {
   return (neuron0x150db00()*0.0103727);
}

double NNfunction_ss_dLuR::synapse0x1527bd0() {
   return (neuron0x150e4d0()*1.46804);
}

double NNfunction_ss_dLuR::synapse0x1527c10() {
   return (neuron0x150eea0()*-0.0153956);
}

double NNfunction_ss_dLuR::synapse0x1527c50() {
   return (neuron0x150f870()*0.183404);
}

double NNfunction_ss_dLuR::synapse0x1527c90() {
   return (neuron0x1510240()*-1.01302);
}

double NNfunction_ss_dLuR::synapse0x1527cd0() {
   return (neuron0x1510c10()*2.04607);
}

double NNfunction_ss_dLuR::synapse0x1527880() {
   return (neuron0x1506ca0()*0.0094328);
}

double NNfunction_ss_dLuR::synapse0x15278c0() {
   return (neuron0x15137f0()*0.0311729);
}

double NNfunction_ss_dLuR::synapse0x1527900() {
   return (neuron0x15141c0()*-1.86822);
}

double NNfunction_ss_dLuR::synapse0x1527940() {
   return (neuron0x1514b90()*0.00829775);
}

double NNfunction_ss_dLuR::synapse0x1527f20() {
   return (neuron0x1515560()*0.0113351);
}

double NNfunction_ss_dLuR::synapse0x1527f60() {
   return (neuron0x1515f30()*0.0214663);
}

double NNfunction_ss_dLuR::synapse0x1527fa0() {
   return (neuron0x1516900()*-0.513604);
}

double NNfunction_ss_dLuR::synapse0x1527fe0() {
   return (neuron0x15172d0()*0.0112025);
}

double NNfunction_ss_dLuR::synapse0x1528020() {
   return (neuron0x1517ca0()*-1.45936);
}

double NNfunction_ss_dLuR::synapse0x1528060() {
   return (neuron0x1518880()*0.00468873);
}

double NNfunction_ss_dLuR::synapse0x15280a0() {
   return (neuron0x1519250()*-0.0531462);
}

double NNfunction_ss_dLuR::synapse0x15280e0() {
   return (neuron0x150a0d0()*-1.2722);
}

double NNfunction_ss_dLuR::synapse0x1528120() {
   return (neuron0x150aaa0()*0.0150674);
}

double NNfunction_ss_dLuR::synapse0x1528160() {
   return (neuron0x150b470()*0.0278106);
}

double NNfunction_ss_dLuR::synapse0x15281a0() {
   return (neuron0x151dab0()*0.002094);
}

double NNfunction_ss_dLuR::synapse0x15281e0() {
   return (neuron0x151e360()*-0.00604216);
}

double NNfunction_ss_dLuR::synapse0x1528220() {
   return (neuron0x151ed30()*2.23583);
}

double NNfunction_ss_dLuR::synapse0x1528260() {
   return (neuron0x151f700()*0.176193);
}

double NNfunction_ss_dLuR::synapse0x15285e0() {
   return (neuron0x14fb680()*0.125021);
}

double NNfunction_ss_dLuR::synapse0x1528620() {
   return (neuron0x14fbf90()*0.670944);
}

double NNfunction_ss_dLuR::synapse0x1528660() {
   return (neuron0x14fca70()*0.276211);
}

double NNfunction_ss_dLuR::synapse0x15286a0() {
   return (neuron0x12b6300()*0.122357);
}

double NNfunction_ss_dLuR::synapse0x15286e0() {
   return (neuron0x14fd890()*0.802294);
}

double NNfunction_ss_dLuR::synapse0x1528720() {
   return (neuron0x14fe260()*0.725973);
}

double NNfunction_ss_dLuR::synapse0x1528760() {
   return (neuron0x14ff030()*0.196735);
}

double NNfunction_ss_dLuR::synapse0x15287a0() {
   return (neuron0x14ffa00()*0.482101);
}

double NNfunction_ss_dLuR::synapse0x15287e0() {
   return (neuron0x15003d0()*0.180185);
}

double NNfunction_ss_dLuR::synapse0x1528820() {
   return (neuron0x1500eb0()*0.456152);
}

double NNfunction_ss_dLuR::synapse0x1528860() {
   return (neuron0x1501880()*0.209351);
}

double NNfunction_ss_dLuR::synapse0x15288a0() {
   return (neuron0x14fe960()*0.331405);
}

double NNfunction_ss_dLuR::synapse0x15288e0() {
   return (neuron0x1503430()*0.0807664);
}

double NNfunction_ss_dLuR::synapse0x1528920() {
   return (neuron0x1503e00()*0.126861);
}

double NNfunction_ss_dLuR::synapse0x1528960() {
   return (neuron0x15047d0()*0.462481);
}

double NNfunction_ss_dLuR::synapse0x15289a0() {
   return (neuron0x15051a0()*0.744806);
}

double NNfunction_ss_dLuR::synapse0x1528430() {
   return (neuron0x1506fb0()*-0.23124);
}

double NNfunction_ss_dLuR::synapse0x1528470() {
   return (neuron0x1507290()*0.169556);
}

double NNfunction_ss_dLuR::synapse0x1528af0() {
   return (neuron0x1507c60()*0.197431);
}

double NNfunction_ss_dLuR::synapse0x1528b30() {
   return (neuron0x1508630()*0.52664);
}

double NNfunction_ss_dLuR::synapse0x1528b70() {
   return (neuron0x1509000()*-1.01714);
}

double NNfunction_ss_dLuR::synapse0x1528bb0() {
   return (neuron0x15099d0()*-0.0529351);
}

double NNfunction_ss_dLuR::synapse0x1528bf0() {
   return (neuron0x1502520()*0.0869602);
}

double NNfunction_ss_dLuR::synapse0x1528c30() {
   return (neuron0x1502ef0()*0.45645);
}

double NNfunction_ss_dLuR::synapse0x1528c70() {
   return (neuron0x150c760()*0.680341);
}

double NNfunction_ss_dLuR::synapse0x1528cb0() {
   return (neuron0x150d130()*0.776412);
}

double NNfunction_ss_dLuR::synapse0x1528cf0() {
   return (neuron0x150db00()*0.51281);
}

double NNfunction_ss_dLuR::synapse0x1528d30() {
   return (neuron0x150e4d0()*-0.122286);
}

double NNfunction_ss_dLuR::synapse0x1528d70() {
   return (neuron0x150eea0()*0.537769);
}

double NNfunction_ss_dLuR::synapse0x1528db0() {
   return (neuron0x150f870()*0.790299);
}

double NNfunction_ss_dLuR::synapse0x1528df0() {
   return (neuron0x1510240()*0.832381);
}

double NNfunction_ss_dLuR::synapse0x1528e30() {
   return (neuron0x1510c10()*1.49212);
}

double NNfunction_ss_dLuR::synapse0x15289e0() {
   return (neuron0x1506ca0()*0.281259);
}

double NNfunction_ss_dLuR::synapse0x1528a20() {
   return (neuron0x15137f0()*0.284837);
}

double NNfunction_ss_dLuR::synapse0x1528a60() {
   return (neuron0x15141c0()*0.238871);
}

double NNfunction_ss_dLuR::synapse0x1528aa0() {
   return (neuron0x1514b90()*0.373907);
}

double NNfunction_ss_dLuR::synapse0x1529080() {
   return (neuron0x1515560()*0.0226312);
}

double NNfunction_ss_dLuR::synapse0x15290c0() {
   return (neuron0x1515f30()*0.437693);
}

double NNfunction_ss_dLuR::synapse0x1529100() {
   return (neuron0x1516900()*0.907161);
}

double NNfunction_ss_dLuR::synapse0x1529140() {
   return (neuron0x15172d0()*0.488131);
}

double NNfunction_ss_dLuR::synapse0x1529180() {
   return (neuron0x1517ca0()*0.111624);
}

double NNfunction_ss_dLuR::synapse0x15291c0() {
   return (neuron0x1518880()*0.155312);
}

double NNfunction_ss_dLuR::synapse0x1529200() {
   return (neuron0x1519250()*0.364128);
}

double NNfunction_ss_dLuR::synapse0x1529240() {
   return (neuron0x150a0d0()*0.164244);
}

double NNfunction_ss_dLuR::synapse0x1529280() {
   return (neuron0x150aaa0()*0.232466);
}

double NNfunction_ss_dLuR::synapse0x15292c0() {
   return (neuron0x150b470()*0.599591);
}

double NNfunction_ss_dLuR::synapse0x1529300() {
   return (neuron0x151dab0()*0.797097);
}

double NNfunction_ss_dLuR::synapse0x1529340() {
   return (neuron0x151e360()*0.416254);
}

double NNfunction_ss_dLuR::synapse0x1529380() {
   return (neuron0x151ed30()*1.03344);
}

double NNfunction_ss_dLuR::synapse0x15293c0() {
   return (neuron0x151f700()*0.161428);
}

double NNfunction_ss_dLuR::synapse0x1529740() {
   return (neuron0x14fb680()*0.272255);
}

double NNfunction_ss_dLuR::synapse0x1529780() {
   return (neuron0x14fbf90()*1.17122);
}

double NNfunction_ss_dLuR::synapse0x15297c0() {
   return (neuron0x14fca70()*-2.48214);
}

double NNfunction_ss_dLuR::synapse0x1529800() {
   return (neuron0x12b6300()*-1.31784);
}

double NNfunction_ss_dLuR::synapse0x1529840() {
   return (neuron0x14fd890()*-1.60241);
}

double NNfunction_ss_dLuR::synapse0x1529880() {
   return (neuron0x14fe260()*2.27442);
}

double NNfunction_ss_dLuR::synapse0x15298c0() {
   return (neuron0x14ff030()*-2.14564);
}

double NNfunction_ss_dLuR::synapse0x1529900() {
   return (neuron0x14ffa00()*-0.315388);
}

double NNfunction_ss_dLuR::synapse0x1529940() {
   return (neuron0x15003d0()*-3.89561);
}

double NNfunction_ss_dLuR::synapse0x1529980() {
   return (neuron0x1500eb0()*1.71199);
}

double NNfunction_ss_dLuR::synapse0x15299c0() {
   return (neuron0x1501880()*-2.31042);
}

double NNfunction_ss_dLuR::synapse0x1529a00() {
   return (neuron0x14fe960()*-1.4296);
}

double NNfunction_ss_dLuR::synapse0x1529a40() {
   return (neuron0x1503430()*2.06273);
}

double NNfunction_ss_dLuR::synapse0x1529a80() {
   return (neuron0x1503e00()*1.26271);
}

double NNfunction_ss_dLuR::synapse0x1529ac0() {
   return (neuron0x15047d0()*1.20413);
}

double NNfunction_ss_dLuR::synapse0x1529b00() {
   return (neuron0x15051a0()*-1.93902);
}

double NNfunction_ss_dLuR::synapse0x1529590() {
   return (neuron0x1506fb0()*-1.17427);
}

double NNfunction_ss_dLuR::synapse0x15295d0() {
   return (neuron0x1507290()*3.70022);
}

double NNfunction_ss_dLuR::synapse0x1529c50() {
   return (neuron0x1507c60()*1.29121);
}

double NNfunction_ss_dLuR::synapse0x1529c90() {
   return (neuron0x1508630()*-0.167067);
}

double NNfunction_ss_dLuR::synapse0x1529cd0() {
   return (neuron0x1509000()*-0.0689457);
}

double NNfunction_ss_dLuR::synapse0x1529d10() {
   return (neuron0x15099d0()*-1.363);
}

double NNfunction_ss_dLuR::synapse0x1529d50() {
   return (neuron0x1502520()*1.35606);
}

double NNfunction_ss_dLuR::synapse0x1529d90() {
   return (neuron0x1502ef0()*-0.106885);
}

double NNfunction_ss_dLuR::synapse0x1529dd0() {
   return (neuron0x150c760()*-1.00462);
}

double NNfunction_ss_dLuR::synapse0x1529e10() {
   return (neuron0x150d130()*1.7165);
}

double NNfunction_ss_dLuR::synapse0x1529e50() {
   return (neuron0x150db00()*-0.245936);
}

double NNfunction_ss_dLuR::synapse0x1529e90() {
   return (neuron0x150e4d0()*1.57804);
}

double NNfunction_ss_dLuR::synapse0x1529ed0() {
   return (neuron0x150eea0()*1.99205);
}

double NNfunction_ss_dLuR::synapse0x1529f10() {
   return (neuron0x150f870()*-0.237391);
}

double NNfunction_ss_dLuR::synapse0x1529f50() {
   return (neuron0x1510240()*-1.13304);
}

double NNfunction_ss_dLuR::synapse0x1529f90() {
   return (neuron0x1510c10()*2.13289);
}

double NNfunction_ss_dLuR::synapse0x1529b40() {
   return (neuron0x1506ca0()*1.95271);
}

double NNfunction_ss_dLuR::synapse0x1529b80() {
   return (neuron0x15137f0()*-0.464858);
}

double NNfunction_ss_dLuR::synapse0x1529bc0() {
   return (neuron0x15141c0()*-0.306611);
}

double NNfunction_ss_dLuR::synapse0x1529c00() {
   return (neuron0x1514b90()*2.46345);
}

double NNfunction_ss_dLuR::synapse0x152a1e0() {
   return (neuron0x1515560()*-2.95918);
}

double NNfunction_ss_dLuR::synapse0x152a220() {
   return (neuron0x1515f30()*-2.02814);
}

double NNfunction_ss_dLuR::synapse0x152a260() {
   return (neuron0x1516900()*-0.756631);
}

double NNfunction_ss_dLuR::synapse0x152a2a0() {
   return (neuron0x15172d0()*-2.21647);
}

double NNfunction_ss_dLuR::synapse0x152a2e0() {
   return (neuron0x1517ca0()*-1.36002);
}

double NNfunction_ss_dLuR::synapse0x152a320() {
   return (neuron0x1518880()*0.647704);
}

double NNfunction_ss_dLuR::synapse0x152a360() {
   return (neuron0x1519250()*2.43143);
}

double NNfunction_ss_dLuR::synapse0x152a3a0() {
   return (neuron0x150a0d0()*0.148648);
}

double NNfunction_ss_dLuR::synapse0x152a3e0() {
   return (neuron0x150aaa0()*1.60438);
}

double NNfunction_ss_dLuR::synapse0x152a420() {
   return (neuron0x150b470()*-1.11161);
}

double NNfunction_ss_dLuR::synapse0x152a460() {
   return (neuron0x151dab0()*0.557303);
}

double NNfunction_ss_dLuR::synapse0x152a4a0() {
   return (neuron0x151e360()*2.30997);
}

double NNfunction_ss_dLuR::synapse0x152a4e0() {
   return (neuron0x151ed30()*3.5232);
}

double NNfunction_ss_dLuR::synapse0x152a520() {
   return (neuron0x151f700()*1.31487);
}

double NNfunction_ss_dLuR::synapse0x14fb640() {
   return (neuron0x1526900()*-7.01297);
}

double NNfunction_ss_dLuR::synapse0x152a780() {
   return (neuron0x1526ca0()*10.0354);
}

double NNfunction_ss_dLuR::synapse0x152a7c0() {
   return (neuron0x1527140()*-4.68788);
}

double NNfunction_ss_dLuR::synapse0x152a800() {
   return (neuron0x15282a0()*2.63904);
}

double NNfunction_ss_dLuR::synapse0x152a840() {
   return (neuron0x1529400()*-5.39702);
}

