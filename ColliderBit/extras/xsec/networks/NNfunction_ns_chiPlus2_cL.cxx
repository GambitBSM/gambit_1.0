#include "NNfunction_ns_chiPlus2_cL.h"
#include <cmath>

double NNfunction_ns_chiPlus2_cL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.7907)/15.1861;
   input1 = (in1 - 13.3602)/1063.07;
   input2 = (in2 - 405.929)/378.947;
   input3 = (in3 - 39.996)/763.237;
   input4 = (in4 - 902.055)/879.974;
   input5 = (in5 - 784.593)/888.488;
   input6 = (in6 - 783.716)/884.507;
   input7 = (in7 - 788.817)/865.563;
   input8 = (in8 - 813.373)/922.735;
   input9 = (in9 - 800.743)/907.852;
   input10 = (in10 - 837.447)/910.401;
   input11 = (in11 - 674.911)/801.972;
   input12 = (in12 - 254.376)/198.774;
   input13 = (in13 - 459.527)/457.653;
   input14 = (in14 - 655.123)/729.028;
   input15 = (in15 - 661.369)/738.359;
   input16 = (in16 - 477.221)/500.287;
   input17 = (in17 - 706.005)/837.456;
   input18 = (in18 - 707.023)/838.67;
   input19 = (in19 - 703.478)/794.756;
   input20 = (in20 - -40.7189)/448.055;
   input21 = (in21 - -57.6612)/1049.04;
   input22 = (in22 - 16.6284)/1091.04;
   input23 = (in23 - -41.2707)/236.131;
   switch(index) {
     case 0:
         return neuron0x3a46720();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiPlus2_cL::Value(int index, double* input) {
   input0 = (input[0] - 23.7907)/15.1861;
   input1 = (input[1] - 13.3602)/1063.07;
   input2 = (input[2] - 405.929)/378.947;
   input3 = (input[3] - 39.996)/763.237;
   input4 = (input[4] - 902.055)/879.974;
   input5 = (input[5] - 784.593)/888.488;
   input6 = (input[6] - 783.716)/884.507;
   input7 = (input[7] - 788.817)/865.563;
   input8 = (input[8] - 813.373)/922.735;
   input9 = (input[9] - 800.743)/907.852;
   input10 = (input[10] - 837.447)/910.401;
   input11 = (input[11] - 674.911)/801.972;
   input12 = (input[12] - 254.376)/198.774;
   input13 = (input[13] - 459.527)/457.653;
   input14 = (input[14] - 655.123)/729.028;
   input15 = (input[15] - 661.369)/738.359;
   input16 = (input[16] - 477.221)/500.287;
   input17 = (input[17] - 706.005)/837.456;
   input18 = (input[18] - 707.023)/838.67;
   input19 = (input[19] - 703.478)/794.756;
   input20 = (input[20] - -40.7189)/448.055;
   input21 = (input[21] - -57.6612)/1049.04;
   input22 = (input[22] - 16.6284)/1091.04;
   input23 = (input[23] - -41.2707)/236.131;
   switch(index) {
     case 0:
         return neuron0x3a46720();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a12810() {
   return input0;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a12b50() {
   return input1;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a12e90() {
   return input2;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a131d0() {
   return input3;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a13510() {
   return input4;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a13850() {
   return input5;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a13b90() {
   return input6;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a13ed0() {
   return input7;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a14210() {
   return input8;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a14550() {
   return input9;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a14890() {
   return input10;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a14bd0() {
   return input11;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a14f10() {
   return input12;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a15250() {
   return input13;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a15590() {
   return input14;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a158d0() {
   return input15;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a15c10() {
   return input16;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a16170() {
   return input17;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a16390() {
   return input18;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a166d0() {
   return input19;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a16a10() {
   return input20;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a16d50() {
   return input21;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a17090() {
   return input22;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a173d0() {
   return input23;
}

double NNfunction_ns_chiPlus2_cL::input0x3a17840() {
   double input = 0.952533;
   input += synapse0x3a126d0();
   input += synapse0x3a12710();
   input += synapse0x3a17af0();
   input += synapse0x3a17b30();
   input += synapse0x3a17b70();
   input += synapse0x3a17bb0();
   input += synapse0x3a17bf0();
   input += synapse0x3a17c30();
   input += synapse0x3a17c70();
   input += synapse0x3a17cb0();
   input += synapse0x3a17cf0();
   input += synapse0x3a17d30();
   input += synapse0x3a17d70();
   input += synapse0x3a17db0();
   input += synapse0x3a17df0();
   input += synapse0x3a17e30();
   input += synapse0x3a12640();
   input += synapse0x3a12680();
   input += synapse0x37cd9b0();
   input += synapse0x37cd9f0();
   input += synapse0x3a18090();
   input += synapse0x3a180d0();
   input += synapse0x3a18110();
   input += synapse0x3a18150();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a17840() {
   double input = input0x3a17840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a18190() {
   double input = -0.216656;
   input += synapse0x3a184d0();
   input += synapse0x3a18510();
   input += synapse0x3a18550();
   input += synapse0x3a18590();
   input += synapse0x3a185d0();
   input += synapse0x3a18610();
   input += synapse0x3a18650();
   input += synapse0x3a18690();
   input += synapse0x3a186d0();
   input += synapse0x3a17f80();
   input += synapse0x3a17fc0();
   input += synapse0x3a18000();
   input += synapse0x3a18040();
   input += synapse0x3a18920();
   input += synapse0x3a18960();
   input += synapse0x3a189a0();
   input += synapse0x3a18320();
   input += synapse0x3a18360();
   input += synapse0x3a18af0();
   input += synapse0x3a18b30();
   input += synapse0x3a18b70();
   input += synapse0x3a18bb0();
   input += synapse0x3a18bf0();
   input += synapse0x3a18c30();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a18190() {
   double input = input0x3a18190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a18c70() {
   double input = 0.743278;
   input += synapse0x3a18fb0();
   input += synapse0x3a18ff0();
   input += synapse0x3a19030();
   input += synapse0x3a19070();
   input += synapse0x3a190b0();
   input += synapse0x3a190f0();
   input += synapse0x3a19130();
   input += synapse0x3a19170();
   input += synapse0x3a191b0();
   input += synapse0x3a191f0();
   input += synapse0x3a19230();
   input += synapse0x3a19270();
   input += synapse0x3a192b0();
   input += synapse0x3a192f0();
   input += synapse0x3a19330();
   input += synapse0x3a19370();
   input += synapse0x3a18e00();
   input += synapse0x3a18e40();
   input += synapse0x37ce0a0();
   input += synapse0x37db970();
   input += synapse0x37db9b0();
   input += synapse0x3a018a0();
   input += synapse0x3a018e0();
   input += synapse0x3a01920();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a18c70() {
   double input = input0x3a18c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a18710() {
   double input = 0.949424;
   input += synapse0x37dc1f0();
   input += synapse0x3a188a0();
   input += synapse0x3a188e0();
   input += synapse0x3a194c0();
   input += synapse0x3a19500();
   input += synapse0x3a19540();
   input += synapse0x3a19580();
   input += synapse0x3a195c0();
   input += synapse0x3a19600();
   input += synapse0x3a19640();
   input += synapse0x3a19680();
   input += synapse0x3a196c0();
   input += synapse0x3a19700();
   input += synapse0x3a19740();
   input += synapse0x3a19780();
   input += synapse0x3a197c0();
   input += synapse0x3a12750();
   input += synapse0x3a12790();
   input += synapse0x3a127d0();
   input += synapse0x3a19910();
   input += synapse0x3a19950();
   input += synapse0x3a19990();
   input += synapse0x3a199d0();
   input += synapse0x3a19a10();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a18710() {
   double input = input0x3a18710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a19a50() {
   double input = -0.778087;
   input += synapse0x3a19d90();
   input += synapse0x3a19dd0();
   input += synapse0x3a19e10();
   input += synapse0x3a19e50();
   input += synapse0x3a19e90();
   input += synapse0x3a19ed0();
   input += synapse0x3a19f10();
   input += synapse0x3a19f50();
   input += synapse0x3a19f90();
   input += synapse0x3a19fd0();
   input += synapse0x3a1a010();
   input += synapse0x3a1a050();
   input += synapse0x3a1a090();
   input += synapse0x3a1a0d0();
   input += synapse0x3a1a110();
   input += synapse0x3a1a150();
   input += synapse0x3a19be0();
   input += synapse0x3a19c20();
   input += synapse0x3a1a2a0();
   input += synapse0x3a1a2e0();
   input += synapse0x3a1a320();
   input += synapse0x3a1a360();
   input += synapse0x3a1a3a0();
   input += synapse0x3a1a3e0();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a19a50() {
   double input = input0x3a19a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a1a420() {
   double input = 7.71816;
   input += synapse0x3a1a760();
   input += synapse0x3a1a7a0();
   input += synapse0x3a1a7e0();
   input += synapse0x3a1a820();
   input += synapse0x3a1a860();
   input += synapse0x3a1a8a0();
   input += synapse0x3a1a8e0();
   input += synapse0x3a1a920();
   input += synapse0x3a1a960();
   input += synapse0x37dbcc0();
   input += synapse0x37dbd00();
   input += synapse0x37dbd40();
   input += synapse0x37dbd80();
   input += synapse0x37dbdc0();
   input += synapse0x37dbe00();
   input += synapse0x37dbe40();
   input += synapse0x3a1a5b0();
   input += synapse0x3a1a5f0();
   input += synapse0x37dbf90();
   input += synapse0x37dbfd0();
   input += synapse0x37dc010();
   input += synapse0x37dc050();
   input += synapse0x37dc090();
   input += synapse0x3a1b1b0();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a1a420() {
   double input = input0x3a1a420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a1b1f0() {
   double input = -1.70163;
   input += synapse0x3a1b530();
   input += synapse0x3a1b570();
   input += synapse0x3a1b5b0();
   input += synapse0x3a1b5f0();
   input += synapse0x3a1b630();
   input += synapse0x3a1b670();
   input += synapse0x3a1b6b0();
   input += synapse0x3a1b6f0();
   input += synapse0x3a1b730();
   input += synapse0x3a1b770();
   input += synapse0x3a1b7b0();
   input += synapse0x3a1b7f0();
   input += synapse0x3a1b830();
   input += synapse0x3a1b870();
   input += synapse0x3a1b8b0();
   input += synapse0x3a1b8f0();
   input += synapse0x3a1b380();
   input += synapse0x3a1b3c0();
   input += synapse0x3a1ba40();
   input += synapse0x3a1ba80();
   input += synapse0x3a1bac0();
   input += synapse0x3a1bb00();
   input += synapse0x3a1bb40();
   input += synapse0x3a1bb80();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a1b1f0() {
   double input = input0x3a1b1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a1bbc0() {
   double input = -0.680544;
   input += synapse0x3a1bf00();
   input += synapse0x3a1bf40();
   input += synapse0x3a1bf80();
   input += synapse0x3a1bfc0();
   input += synapse0x3a1c000();
   input += synapse0x3a1c040();
   input += synapse0x3a1c080();
   input += synapse0x3a1c0c0();
   input += synapse0x3a1c100();
   input += synapse0x3a1c140();
   input += synapse0x3a1c180();
   input += synapse0x3a1c1c0();
   input += synapse0x3a1c200();
   input += synapse0x3a1c240();
   input += synapse0x3a1c280();
   input += synapse0x3a1c2c0();
   input += synapse0x3a1bd50();
   input += synapse0x3a1bd90();
   input += synapse0x3a1c410();
   input += synapse0x3a1c450();
   input += synapse0x3a1c490();
   input += synapse0x3a1c4d0();
   input += synapse0x3a1c510();
   input += synapse0x3a1c550();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a1bbc0() {
   double input = input0x3a1bbc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a1c590() {
   double input = -0.183351;
   input += synapse0x3a16060();
   input += synapse0x3a160a0();
   input += synapse0x3a160e0();
   input += synapse0x3a16120();
   input += synapse0x3a1cae0();
   input += synapse0x3a1cb20();
   input += synapse0x3a1cb60();
   input += synapse0x3a1cba0();
   input += synapse0x3a1cbe0();
   input += synapse0x3a1cc20();
   input += synapse0x3a1cc60();
   input += synapse0x3a1cca0();
   input += synapse0x3a1cce0();
   input += synapse0x3a1cd20();
   input += synapse0x3a1cd60();
   input += synapse0x3a1cda0();
   input += synapse0x3a1c720();
   input += synapse0x3a1c760();
   input += synapse0x3a1cef0();
   input += synapse0x3a1cf30();
   input += synapse0x3a1cf70();
   input += synapse0x3a1cfb0();
   input += synapse0x3a1cff0();
   input += synapse0x3a1d030();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a1c590() {
   double input = input0x3a1c590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a1d070() {
   double input = -0.175248;
   input += synapse0x3a1d3b0();
   input += synapse0x3a1d3f0();
   input += synapse0x3a1d430();
   input += synapse0x3a1d470();
   input += synapse0x3a1d4b0();
   input += synapse0x3a1d4f0();
   input += synapse0x3a1d530();
   input += synapse0x3a1d570();
   input += synapse0x3a1d5b0();
   input += synapse0x3a1d5f0();
   input += synapse0x3a1d630();
   input += synapse0x3a1d670();
   input += synapse0x3a1d6b0();
   input += synapse0x3a1d6f0();
   input += synapse0x3a1d730();
   input += synapse0x3a1d770();
   input += synapse0x3a1d200();
   input += synapse0x3a1d240();
   input += synapse0x3a1d8c0();
   input += synapse0x3a1d900();
   input += synapse0x3a1d940();
   input += synapse0x3a1d980();
   input += synapse0x3a1d9c0();
   input += synapse0x3a1da00();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a1d070() {
   double input = input0x3a1d070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a1da40() {
   double input = -1.21142;
   input += synapse0x3a1dd80();
   input += synapse0x3a1ddc0();
   input += synapse0x3a1de00();
   input += synapse0x3a1de40();
   input += synapse0x3a1de80();
   input += synapse0x3a1dec0();
   input += synapse0x3a1df00();
   input += synapse0x3a1df40();
   input += synapse0x3a1df80();
   input += synapse0x3a1dfc0();
   input += synapse0x3a1e000();
   input += synapse0x3a1e040();
   input += synapse0x3a1e080();
   input += synapse0x3a1e0c0();
   input += synapse0x3a1e100();
   input += synapse0x3a1e140();
   input += synapse0x3a1dbd0();
   input += synapse0x3a1dc10();
   input += synapse0x3a1a9a0();
   input += synapse0x3a1a9e0();
   input += synapse0x3a1aa20();
   input += synapse0x3a1aa60();
   input += synapse0x3a1aaa0();
   input += synapse0x3a1aae0();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a1da40() {
   double input = input0x3a1da40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a1ab20() {
   double input = -0.238793;
   input += synapse0x3a1ae60();
   input += synapse0x3a1aea0();
   input += synapse0x3a1aee0();
   input += synapse0x3a1af20();
   input += synapse0x3a1af60();
   input += synapse0x3a1afa0();
   input += synapse0x3a1afe0();
   input += synapse0x3a1b020();
   input += synapse0x3a1b060();
   input += synapse0x3a1b0a0();
   input += synapse0x3a1b0e0();
   input += synapse0x3a1b120();
   input += synapse0x3a1b160();
   input += synapse0x3a1f2a0();
   input += synapse0x3a1f2e0();
   input += synapse0x3a1f320();
   input += synapse0x3a1acb0();
   input += synapse0x3a1acf0();
   input += synapse0x3a1f470();
   input += synapse0x3a1f4b0();
   input += synapse0x3a1f4f0();
   input += synapse0x3a1f530();
   input += synapse0x3a1f570();
   input += synapse0x3a1f5b0();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a1ab20() {
   double input = input0x3a1ab20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a1f5f0() {
   double input = 0.40787;
   input += synapse0x3a1f930();
   input += synapse0x3a1f970();
   input += synapse0x3a1f9b0();
   input += synapse0x3a1f9f0();
   input += synapse0x3a1fa30();
   input += synapse0x3a1fa70();
   input += synapse0x3a1fab0();
   input += synapse0x3a1faf0();
   input += synapse0x3a1fb30();
   input += synapse0x3a1fb70();
   input += synapse0x3a1fbb0();
   input += synapse0x3a1fbf0();
   input += synapse0x3a1fc30();
   input += synapse0x3a1fc70();
   input += synapse0x3a1fcb0();
   input += synapse0x3a1fcf0();
   input += synapse0x3a1f780();
   input += synapse0x3a1f7c0();
   input += synapse0x3a1fe40();
   input += synapse0x3a1fe80();
   input += synapse0x3a1fec0();
   input += synapse0x3a1ff00();
   input += synapse0x3a1ff40();
   input += synapse0x3a1ff80();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a1f5f0() {
   double input = input0x3a1f5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a1ffc0() {
   double input = 7.98234;
   input += synapse0x3a20300();
   input += synapse0x3a20340();
   input += synapse0x3a20380();
   input += synapse0x3a203c0();
   input += synapse0x3a20400();
   input += synapse0x3a20440();
   input += synapse0x3a20480();
   input += synapse0x3a204c0();
   input += synapse0x3a20500();
   input += synapse0x3a20540();
   input += synapse0x3a20580();
   input += synapse0x3a205c0();
   input += synapse0x3a20600();
   input += synapse0x3a20640();
   input += synapse0x3a20680();
   input += synapse0x3a206c0();
   input += synapse0x3a20150();
   input += synapse0x3a20190();
   input += synapse0x3a20810();
   input += synapse0x3a20850();
   input += synapse0x3a20890();
   input += synapse0x3a208d0();
   input += synapse0x3a20910();
   input += synapse0x3a20950();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a1ffc0() {
   double input = input0x3a1ffc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a20990() {
   double input = -2.4648;
   input += synapse0x3a20cd0();
   input += synapse0x3a20d10();
   input += synapse0x3a20d50();
   input += synapse0x3a20d90();
   input += synapse0x3a20dd0();
   input += synapse0x3a20e10();
   input += synapse0x3a20e50();
   input += synapse0x3a20e90();
   input += synapse0x3a20ed0();
   input += synapse0x3a20f10();
   input += synapse0x3a20f50();
   input += synapse0x3a20f90();
   input += synapse0x3a20fd0();
   input += synapse0x3a21010();
   input += synapse0x3a21050();
   input += synapse0x3a21090();
   input += synapse0x3a20b20();
   input += synapse0x3a20b60();
   input += synapse0x3a211e0();
   input += synapse0x3a21220();
   input += synapse0x3a21260();
   input += synapse0x3a212a0();
   input += synapse0x3a212e0();
   input += synapse0x3a21320();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a20990() {
   double input = input0x3a20990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a21360() {
   double input = -1.28683;
   input += synapse0x3a216a0();
   input += synapse0x3a12a30();
   input += synapse0x3a12a70();
   input += synapse0x3a12d70();
   input += synapse0x3a12db0();
   input += synapse0x3a130b0();
   input += synapse0x3a130f0();
   input += synapse0x3a133f0();
   input += synapse0x3a13430();
   input += synapse0x3a13730();
   input += synapse0x3a13770();
   input += synapse0x3a13a70();
   input += synapse0x3a13ab0();
   input += synapse0x3a13db0();
   input += synapse0x3a13df0();
   input += synapse0x3a140f0();
   input += synapse0x3a14130();
   input += synapse0x3a14430();
   input += synapse0x3a14470();
   input += synapse0x3a14770();
   input += synapse0x3a147b0();
   input += synapse0x3a14ab0();
   input += synapse0x3a14af0();
   input += synapse0x3a14df0();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a21360() {
   double input = input0x3a21360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a23170() {
   double input = -7.57871;
   input += synapse0x3a14e30();
   input += synapse0x3a15af0();
   input += synapse0x3a15b30();
   input += synapse0x3a214f0();
   input += synapse0x3a21530();
   input += synapse0x3a15e30();
   input += synapse0x3a15e70();
   input += synapse0x37cd890();
   input += synapse0x37cd8d0();
   input += synapse0x3a165b0();
   input += synapse0x3a165f0();
   input += synapse0x3a168f0();
   input += synapse0x3a16930();
   input += synapse0x3a16c30();
   input += synapse0x3a16c70();
   input += synapse0x3a16f70();
   input += synapse0x3a16fb0();
   input += synapse0x3a172b0();
   input += synapse0x3a172f0();
   input += synapse0x3a175f0();
   input += synapse0x3a17630();
   input += synapse0x3a15130();
   input += synapse0x3a15170();
   input += synapse0x3a23410();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a23170() {
   double input = input0x3a23170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a23450() {
   double input = -0.327517;
   input += synapse0x3a23790();
   input += synapse0x3a237d0();
   input += synapse0x3a23810();
   input += synapse0x3a23850();
   input += synapse0x3a23890();
   input += synapse0x3a238d0();
   input += synapse0x3a23910();
   input += synapse0x3a23950();
   input += synapse0x3a23990();
   input += synapse0x3a239d0();
   input += synapse0x3a23a10();
   input += synapse0x3a23a50();
   input += synapse0x3a23a90();
   input += synapse0x3a23ad0();
   input += synapse0x3a23b10();
   input += synapse0x3a23b50();
   input += synapse0x3a235e0();
   input += synapse0x3a23620();
   input += synapse0x3a23ca0();
   input += synapse0x3a23ce0();
   input += synapse0x3a23d20();
   input += synapse0x3a23d60();
   input += synapse0x3a23da0();
   input += synapse0x3a23de0();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a23450() {
   double input = input0x3a23450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a23e20() {
   double input = -0.376293;
   input += synapse0x3a24160();
   input += synapse0x3a241a0();
   input += synapse0x3a241e0();
   input += synapse0x3a24220();
   input += synapse0x3a24260();
   input += synapse0x3a242a0();
   input += synapse0x3a242e0();
   input += synapse0x3a24320();
   input += synapse0x3a24360();
   input += synapse0x3a243a0();
   input += synapse0x3a243e0();
   input += synapse0x3a24420();
   input += synapse0x3a24460();
   input += synapse0x3a244a0();
   input += synapse0x3a244e0();
   input += synapse0x3a24520();
   input += synapse0x3a23fb0();
   input += synapse0x3a23ff0();
   input += synapse0x3a24670();
   input += synapse0x3a246b0();
   input += synapse0x3a246f0();
   input += synapse0x3a24730();
   input += synapse0x3a24770();
   input += synapse0x3a247b0();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a23e20() {
   double input = input0x3a23e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a247f0() {
   double input = 2.86936;
   input += synapse0x3a24b30();
   input += synapse0x3a24b70();
   input += synapse0x3a24bb0();
   input += synapse0x3a24bf0();
   input += synapse0x3a24c30();
   input += synapse0x3a24c70();
   input += synapse0x3a24cb0();
   input += synapse0x3a24cf0();
   input += synapse0x3a24d30();
   input += synapse0x3a24d70();
   input += synapse0x3a24db0();
   input += synapse0x3a24df0();
   input += synapse0x3a24e30();
   input += synapse0x3a24e70();
   input += synapse0x3a24eb0();
   input += synapse0x3a24ef0();
   input += synapse0x3a24980();
   input += synapse0x3a249c0();
   input += synapse0x3a25040();
   input += synapse0x3a25080();
   input += synapse0x3a250c0();
   input += synapse0x3a25100();
   input += synapse0x3a25140();
   input += synapse0x3a25180();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a247f0() {
   double input = input0x3a247f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a251c0() {
   double input = 5.59531;
   input += synapse0x3a25500();
   input += synapse0x3a25540();
   input += synapse0x3a25580();
   input += synapse0x3a255c0();
   input += synapse0x3a25600();
   input += synapse0x3a25640();
   input += synapse0x3a25680();
   input += synapse0x3a256c0();
   input += synapse0x3a25700();
   input += synapse0x3a25740();
   input += synapse0x3a25780();
   input += synapse0x3a257c0();
   input += synapse0x3a25800();
   input += synapse0x3a25840();
   input += synapse0x3a25880();
   input += synapse0x3a258c0();
   input += synapse0x3a25350();
   input += synapse0x3a25390();
   input += synapse0x3a25a10();
   input += synapse0x3a25a50();
   input += synapse0x3a25a90();
   input += synapse0x3a25ad0();
   input += synapse0x3a25b10();
   input += synapse0x3a25b50();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a251c0() {
   double input = input0x3a251c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a25b90() {
   double input = -1.22411;
   input += synapse0x3a25ed0();
   input += synapse0x3a25f10();
   input += synapse0x3a25f50();
   input += synapse0x3a25f90();
   input += synapse0x3a25fd0();
   input += synapse0x3a26010();
   input += synapse0x3a26050();
   input += synapse0x3a26090();
   input += synapse0x3a260d0();
   input += synapse0x3a1e290();
   input += synapse0x3a1e2d0();
   input += synapse0x3a1e310();
   input += synapse0x3a1e350();
   input += synapse0x3a1e390();
   input += synapse0x3a1e3d0();
   input += synapse0x3a1e410();
   input += synapse0x3a25d20();
   input += synapse0x3a25d60();
   input += synapse0x3a1e560();
   input += synapse0x3a1e5a0();
   input += synapse0x3a1e5e0();
   input += synapse0x3a1e620();
   input += synapse0x3a1e660();
   input += synapse0x3a1e6a0();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a25b90() {
   double input = input0x3a25b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a1e6e0() {
   double input = -1.17007;
   input += synapse0x3a1ea20();
   input += synapse0x3a1ea60();
   input += synapse0x3a1eaa0();
   input += synapse0x3a1eae0();
   input += synapse0x3a1eb20();
   input += synapse0x3a1eb60();
   input += synapse0x3a1eba0();
   input += synapse0x3a1ebe0();
   input += synapse0x3a1ec20();
   input += synapse0x3a1ec60();
   input += synapse0x3a1eca0();
   input += synapse0x3a1ece0();
   input += synapse0x3a1ed20();
   input += synapse0x3a1ed60();
   input += synapse0x3a1eda0();
   input += synapse0x3a1ede0();
   input += synapse0x3a1e870();
   input += synapse0x3a1e8b0();
   input += synapse0x3a1ef30();
   input += synapse0x3a1ef70();
   input += synapse0x3a1efb0();
   input += synapse0x3a1eff0();
   input += synapse0x3a1f030();
   input += synapse0x3a1f070();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a1e6e0() {
   double input = input0x3a1e6e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a1f0b0() {
   double input = 0.668377;
   input += synapse0x3a1f240();
   input += synapse0x3a282d0();
   input += synapse0x3a28310();
   input += synapse0x3a28350();
   input += synapse0x3a28390();
   input += synapse0x3a283d0();
   input += synapse0x3a28410();
   input += synapse0x3a28450();
   input += synapse0x3a28490();
   input += synapse0x3a284d0();
   input += synapse0x3a28510();
   input += synapse0x3a28550();
   input += synapse0x3a28590();
   input += synapse0x3a285d0();
   input += synapse0x3a28610();
   input += synapse0x3a28650();
   input += synapse0x3a28120();
   input += synapse0x3a28160();
   input += synapse0x3a287a0();
   input += synapse0x3a287e0();
   input += synapse0x3a28820();
   input += synapse0x3a28860();
   input += synapse0x3a288a0();
   input += synapse0x3a288e0();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a1f0b0() {
   double input = input0x3a1f0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a28920() {
   double input = -0.154106;
   input += synapse0x3a28c60();
   input += synapse0x3a28ca0();
   input += synapse0x3a28ce0();
   input += synapse0x3a28d20();
   input += synapse0x3a28d60();
   input += synapse0x3a28da0();
   input += synapse0x3a28de0();
   input += synapse0x3a28e20();
   input += synapse0x3a28e60();
   input += synapse0x3a28ea0();
   input += synapse0x3a28ee0();
   input += synapse0x3a28f20();
   input += synapse0x3a28f60();
   input += synapse0x3a28fa0();
   input += synapse0x3a28fe0();
   input += synapse0x3a29020();
   input += synapse0x3a28ab0();
   input += synapse0x3a28af0();
   input += synapse0x3a29170();
   input += synapse0x3a291b0();
   input += synapse0x3a291f0();
   input += synapse0x3a29230();
   input += synapse0x3a29270();
   input += synapse0x3a292b0();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a28920() {
   double input = input0x3a28920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a292f0() {
   double input = -1.05052;
   input += synapse0x3a29630();
   input += synapse0x3a29670();
   input += synapse0x3a296b0();
   input += synapse0x3a296f0();
   input += synapse0x3a29730();
   input += synapse0x3a29770();
   input += synapse0x3a297b0();
   input += synapse0x3a297f0();
   input += synapse0x3a29830();
   input += synapse0x3a29870();
   input += synapse0x3a298b0();
   input += synapse0x3a298f0();
   input += synapse0x3a29930();
   input += synapse0x3a29970();
   input += synapse0x3a299b0();
   input += synapse0x3a299f0();
   input += synapse0x3a29480();
   input += synapse0x3a294c0();
   input += synapse0x3a29b40();
   input += synapse0x3a29b80();
   input += synapse0x3a29bc0();
   input += synapse0x3a29c00();
   input += synapse0x3a29c40();
   input += synapse0x3a29c80();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a292f0() {
   double input = input0x3a292f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a29cc0() {
   double input = 0.248152;
   input += synapse0x3a2a000();
   input += synapse0x3a2a040();
   input += synapse0x3a2a080();
   input += synapse0x3a2a0c0();
   input += synapse0x3a2a100();
   input += synapse0x3a2a140();
   input += synapse0x3a2a180();
   input += synapse0x3a2a1c0();
   input += synapse0x3a2a200();
   input += synapse0x3a2a240();
   input += synapse0x3a2a280();
   input += synapse0x3a2a2c0();
   input += synapse0x3a2a300();
   input += synapse0x3a2a340();
   input += synapse0x3a2a380();
   input += synapse0x3a2a3c0();
   input += synapse0x3a29e50();
   input += synapse0x3a29e90();
   input += synapse0x3a2a510();
   input += synapse0x3a2a550();
   input += synapse0x3a2a590();
   input += synapse0x3a2a5d0();
   input += synapse0x3a2a610();
   input += synapse0x3a2a650();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a29cc0() {
   double input = input0x3a29cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a2a690() {
   double input = -1.13158;
   input += synapse0x3a2a9d0();
   input += synapse0x3a2aa10();
   input += synapse0x3a2aa50();
   input += synapse0x3a2aa90();
   input += synapse0x3a2aad0();
   input += synapse0x3a2ab10();
   input += synapse0x3a2ab50();
   input += synapse0x3a2ab90();
   input += synapse0x3a2abd0();
   input += synapse0x3a2ac10();
   input += synapse0x3a2ac50();
   input += synapse0x3a2ac90();
   input += synapse0x3a2acd0();
   input += synapse0x3a2ad10();
   input += synapse0x3a2ad50();
   input += synapse0x3a2ad90();
   input += synapse0x3a2a820();
   input += synapse0x3a2a860();
   input += synapse0x3a2aee0();
   input += synapse0x3a2af20();
   input += synapse0x3a2af60();
   input += synapse0x3a2afa0();
   input += synapse0x3a2afe0();
   input += synapse0x3a2b020();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a2a690() {
   double input = input0x3a2a690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a2b060() {
   double input = 2.28482;
   input += synapse0x3a2b3a0();
   input += synapse0x3a2b3e0();
   input += synapse0x3a2b420();
   input += synapse0x3a2b460();
   input += synapse0x3a2b4a0();
   input += synapse0x3a2b4e0();
   input += synapse0x3a2b520();
   input += synapse0x3a2b560();
   input += synapse0x3a2b5a0();
   input += synapse0x3a2b5e0();
   input += synapse0x3a2b620();
   input += synapse0x3a2b660();
   input += synapse0x3a2b6a0();
   input += synapse0x3a2b6e0();
   input += synapse0x3a2b720();
   input += synapse0x3a2b760();
   input += synapse0x3a2b1f0();
   input += synapse0x3a2b230();
   input += synapse0x3a2b8b0();
   input += synapse0x3a2b8f0();
   input += synapse0x3a2b930();
   input += synapse0x3a2b970();
   input += synapse0x3a2b9b0();
   input += synapse0x3a2b9f0();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a2b060() {
   double input = input0x3a2b060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a2ba30() {
   double input = -1.62713;
   input += synapse0x3a2bd70();
   input += synapse0x3a2bdb0();
   input += synapse0x3a2bdf0();
   input += synapse0x3a2be30();
   input += synapse0x3a2be70();
   input += synapse0x3a2beb0();
   input += synapse0x3a2bef0();
   input += synapse0x3a2bf30();
   input += synapse0x3a2bf70();
   input += synapse0x3a2bfb0();
   input += synapse0x3a2bff0();
   input += synapse0x3a2c030();
   input += synapse0x3a2c070();
   input += synapse0x3a2c0b0();
   input += synapse0x3a2c0f0();
   input += synapse0x3a2c130();
   input += synapse0x3a2bbc0();
   input += synapse0x3a2bc00();
   input += synapse0x3a2c280();
   input += synapse0x3a2c2c0();
   input += synapse0x3a2c300();
   input += synapse0x3a2c340();
   input += synapse0x3a2c380();
   input += synapse0x3a2c3c0();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a2ba30() {
   double input = input0x3a2ba30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a2c400() {
   double input = -1.25386;
   input += synapse0x3a2c740();
   input += synapse0x3a2c780();
   input += synapse0x3a2c7c0();
   input += synapse0x3a2c800();
   input += synapse0x3a2c840();
   input += synapse0x3a2c880();
   input += synapse0x3a2c8c0();
   input += synapse0x3a2c900();
   input += synapse0x3a2c940();
   input += synapse0x3a2c980();
   input += synapse0x3a2c9c0();
   input += synapse0x3a2ca00();
   input += synapse0x3a2ca40();
   input += synapse0x3a2ca80();
   input += synapse0x3a2cac0();
   input += synapse0x3a2cb00();
   input += synapse0x3a2c590();
   input += synapse0x3a2c5d0();
   input += synapse0x3a2cc50();
   input += synapse0x3a2cc90();
   input += synapse0x3a2ccd0();
   input += synapse0x3a2cd10();
   input += synapse0x3a2cd50();
   input += synapse0x3a2cd90();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a2c400() {
   double input = input0x3a2c400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a2cdd0() {
   double input = 0.765367;
   input += synapse0x3a2d110();
   input += synapse0x3a216e0();
   input += synapse0x3a21720();
   input += synapse0x3a21760();
   input += synapse0x3a219b0();
   input += synapse0x3a219f0();
   input += synapse0x3a21a30();
   input += synapse0x3a21c80();
   input += synapse0x3a21cc0();
   input += synapse0x3a21f10();
   input += synapse0x3a21f50();
   input += synapse0x3a21f90();
   input += synapse0x3a221e0();
   input += synapse0x3a22220();
   input += synapse0x3a22470();
   input += synapse0x3a224b0();
   input += synapse0x3a2cf60();
   input += synapse0x3a2cfa0();
   input += synapse0x3a22600();
   input += synapse0x3a22b10();
   input += synapse0x3a22b50();
   input += synapse0x3a22b90();
   input += synapse0x3a22de0();
   input += synapse0x3a22e20();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a2cdd0() {
   double input = input0x3a2cdd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a22e60() {
   double input = -1.71558;
   input += synapse0x3a226d0();
   input += synapse0x3a22710();
   input += synapse0x3a22750();
   input += synapse0x3a22790();
   input += synapse0x3a23110();
   input += synapse0x3a2f460();
   input += synapse0x3a2f4a0();
   input += synapse0x3a2f4e0();
   input += synapse0x3a2f520();
   input += synapse0x3a2f560();
   input += synapse0x3a2f5a0();
   input += synapse0x3a2f5e0();
   input += synapse0x3a2f620();
   input += synapse0x3a2f660();
   input += synapse0x3a2f6a0();
   input += synapse0x3a2f6e0();
   input += synapse0x3a22ff0();
   input += synapse0x3a23030();
   input += synapse0x3a2f830();
   input += synapse0x3a2f870();
   input += synapse0x3a2f8b0();
   input += synapse0x3a2f8f0();
   input += synapse0x3a2f930();
   input += synapse0x3a2f970();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a22e60() {
   double input = input0x3a22e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a2f9b0() {
   double input = -0.406749;
   input += synapse0x3a2fcf0();
   input += synapse0x3a2fd30();
   input += synapse0x3a2fd70();
   input += synapse0x3a2fdb0();
   input += synapse0x3a2fdf0();
   input += synapse0x3a2fe30();
   input += synapse0x3a2fe70();
   input += synapse0x3a2feb0();
   input += synapse0x3a2fef0();
   input += synapse0x3a2ff30();
   input += synapse0x3a2ff70();
   input += synapse0x3a2ffb0();
   input += synapse0x3a2fff0();
   input += synapse0x3a30030();
   input += synapse0x3a30070();
   input += synapse0x3a300b0();
   input += synapse0x3a2fb40();
   input += synapse0x3a2fb80();
   input += synapse0x3a30200();
   input += synapse0x3a30240();
   input += synapse0x3a30280();
   input += synapse0x3a302c0();
   input += synapse0x3a30300();
   input += synapse0x3a30340();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a2f9b0() {
   double input = input0x3a2f9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a30380() {
   double input = -0.256997;
   input += synapse0x3a306c0();
   input += synapse0x3a30700();
   input += synapse0x3a30740();
   input += synapse0x3a30780();
   input += synapse0x3a307c0();
   input += synapse0x3a30800();
   input += synapse0x3a30840();
   input += synapse0x3a30880();
   input += synapse0x3a308c0();
   input += synapse0x3a30900();
   input += synapse0x3a30940();
   input += synapse0x3a30980();
   input += synapse0x3a309c0();
   input += synapse0x3a30a00();
   input += synapse0x3a30a40();
   input += synapse0x3a30a80();
   input += synapse0x3a30510();
   input += synapse0x3a30550();
   input += synapse0x3a30bd0();
   input += synapse0x3a30c10();
   input += synapse0x3a30c50();
   input += synapse0x3a30c90();
   input += synapse0x3a30cd0();
   input += synapse0x3a30d10();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a30380() {
   double input = input0x3a30380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a30d50() {
   double input = -0.402448;
   input += synapse0x3a31090();
   input += synapse0x3a310d0();
   input += synapse0x3a31110();
   input += synapse0x3a31150();
   input += synapse0x3a31190();
   input += synapse0x3a311d0();
   input += synapse0x3a31210();
   input += synapse0x3a31250();
   input += synapse0x3a31290();
   input += synapse0x3a312d0();
   input += synapse0x3a31310();
   input += synapse0x3a31350();
   input += synapse0x3a31390();
   input += synapse0x3a313d0();
   input += synapse0x3a31410();
   input += synapse0x3a31450();
   input += synapse0x3a30ee0();
   input += synapse0x3a30f20();
   input += synapse0x3a315a0();
   input += synapse0x3a315e0();
   input += synapse0x3a31620();
   input += synapse0x3a31660();
   input += synapse0x3a316a0();
   input += synapse0x3a316e0();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a30d50() {
   double input = input0x3a30d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a31720() {
   double input = -0.0573054;
   input += synapse0x3a31a60();
   input += synapse0x3a31aa0();
   input += synapse0x3a31ae0();
   input += synapse0x3a31b20();
   input += synapse0x3a31b60();
   input += synapse0x3a31ba0();
   input += synapse0x3a31be0();
   input += synapse0x3a31c20();
   input += synapse0x3a31c60();
   input += synapse0x3a31ca0();
   input += synapse0x3a31ce0();
   input += synapse0x3a31d20();
   input += synapse0x3a31d60();
   input += synapse0x3a31da0();
   input += synapse0x3a31de0();
   input += synapse0x3a31e20();
   input += synapse0x3a318b0();
   input += synapse0x3a318f0();
   input += synapse0x3a31f70();
   input += synapse0x3a31fb0();
   input += synapse0x3a31ff0();
   input += synapse0x3a32030();
   input += synapse0x3a32070();
   input += synapse0x3a320b0();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a31720() {
   double input = input0x3a31720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a320f0() {
   double input = -2.59033;
   input += synapse0x3a32430();
   input += synapse0x3a32470();
   input += synapse0x3a324b0();
   input += synapse0x3a324f0();
   input += synapse0x3a32530();
   input += synapse0x3a32570();
   input += synapse0x3a325b0();
   input += synapse0x3a325f0();
   input += synapse0x3a32630();
   input += synapse0x3a32670();
   input += synapse0x3a326b0();
   input += synapse0x3a326f0();
   input += synapse0x3a32730();
   input += synapse0x3a32770();
   input += synapse0x3a327b0();
   input += synapse0x3a327f0();
   input += synapse0x3a32280();
   input += synapse0x3a322c0();
   input += synapse0x3a32940();
   input += synapse0x3a32980();
   input += synapse0x3a329c0();
   input += synapse0x3a32a00();
   input += synapse0x3a32a40();
   input += synapse0x3a32a80();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a320f0() {
   double input = input0x3a320f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a32ac0() {
   double input = -2.80243;
   input += synapse0x3a32e00();
   input += synapse0x3a32e40();
   input += synapse0x3a32e80();
   input += synapse0x3a32ec0();
   input += synapse0x3a32f00();
   input += synapse0x3a32f40();
   input += synapse0x3a32f80();
   input += synapse0x3a32fc0();
   input += synapse0x3a33000();
   input += synapse0x3a33040();
   input += synapse0x3a33080();
   input += synapse0x3a330c0();
   input += synapse0x3a33100();
   input += synapse0x3a33140();
   input += synapse0x3a33180();
   input += synapse0x3a331c0();
   input += synapse0x3a32c50();
   input += synapse0x3a32c90();
   input += synapse0x3a33310();
   input += synapse0x3a33350();
   input += synapse0x3a33390();
   input += synapse0x3a333d0();
   input += synapse0x3a33410();
   input += synapse0x3a33450();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a32ac0() {
   double input = input0x3a32ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a33490() {
   double input = 1.50124;
   input += synapse0x3a337d0();
   input += synapse0x3a33810();
   input += synapse0x3a33850();
   input += synapse0x3a33890();
   input += synapse0x3a338d0();
   input += synapse0x3a33910();
   input += synapse0x3a33950();
   input += synapse0x3a33990();
   input += synapse0x3a339d0();
   input += synapse0x3a33a10();
   input += synapse0x3a33a50();
   input += synapse0x3a33a90();
   input += synapse0x3a33ad0();
   input += synapse0x3a33b10();
   input += synapse0x3a33b50();
   input += synapse0x3a33b90();
   input += synapse0x3a33620();
   input += synapse0x3a33660();
   input += synapse0x3a33ce0();
   input += synapse0x3a33d20();
   input += synapse0x3a33d60();
   input += synapse0x3a33da0();
   input += synapse0x3a33de0();
   input += synapse0x3a33e20();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a33490() {
   double input = input0x3a33490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a33e60() {
   double input = -0.785236;
   input += synapse0x3a1c8d0();
   input += synapse0x3a1c910();
   input += synapse0x3a1c950();
   input += synapse0x3a1c990();
   input += synapse0x3a1c9d0();
   input += synapse0x3a1ca10();
   input += synapse0x3a1ca50();
   input += synapse0x3a1ca90();
   input += synapse0x3a345b0();
   input += synapse0x3a345f0();
   input += synapse0x3a34630();
   input += synapse0x3a34670();
   input += synapse0x3a346b0();
   input += synapse0x3a346f0();
   input += synapse0x3a34730();
   input += synapse0x3a34770();
   input += synapse0x3a33ff0();
   input += synapse0x3a34030();
   input += synapse0x3a348c0();
   input += synapse0x3a34900();
   input += synapse0x3a34940();
   input += synapse0x3a34980();
   input += synapse0x3a349c0();
   input += synapse0x3a34a00();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a33e60() {
   double input = input0x3a33e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a34a40() {
   double input = -0.618695;
   input += synapse0x3a34d80();
   input += synapse0x3a34dc0();
   input += synapse0x3a34e00();
   input += synapse0x3a34e40();
   input += synapse0x3a34e80();
   input += synapse0x3a34ec0();
   input += synapse0x3a34f00();
   input += synapse0x3a34f40();
   input += synapse0x3a34f80();
   input += synapse0x3a34fc0();
   input += synapse0x3a35000();
   input += synapse0x3a35040();
   input += synapse0x3a35080();
   input += synapse0x3a350c0();
   input += synapse0x3a35100();
   input += synapse0x3a35140();
   input += synapse0x3a34bd0();
   input += synapse0x3a34c10();
   input += synapse0x3a35290();
   input += synapse0x3a352d0();
   input += synapse0x3a35310();
   input += synapse0x3a35350();
   input += synapse0x3a35390();
   input += synapse0x3a353d0();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a34a40() {
   double input = input0x3a34a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a35410() {
   double input = -3.69353;
   input += synapse0x3a35750();
   input += synapse0x3a35790();
   input += synapse0x3a357d0();
   input += synapse0x3a35810();
   input += synapse0x3a35850();
   input += synapse0x3a35890();
   input += synapse0x3a358d0();
   input += synapse0x3a35910();
   input += synapse0x3a35950();
   input += synapse0x3a35990();
   input += synapse0x3a359d0();
   input += synapse0x3a35a10();
   input += synapse0x3a35a50();
   input += synapse0x3a35a90();
   input += synapse0x3a35ad0();
   input += synapse0x3a35b10();
   input += synapse0x3a355a0();
   input += synapse0x3a355e0();
   input += synapse0x3a26110();
   input += synapse0x3a26150();
   input += synapse0x3a26190();
   input += synapse0x3a261d0();
   input += synapse0x3a26210();
   input += synapse0x3a26250();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a35410() {
   double input = input0x3a35410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a26290() {
   double input = 0.819206;
   input += synapse0x3a265d0();
   input += synapse0x3a26610();
   input += synapse0x3a26650();
   input += synapse0x3a26690();
   input += synapse0x3a266d0();
   input += synapse0x3a26710();
   input += synapse0x3a26750();
   input += synapse0x3a26790();
   input += synapse0x3a267d0();
   input += synapse0x3a26810();
   input += synapse0x3a26850();
   input += synapse0x3a26890();
   input += synapse0x3a268d0();
   input += synapse0x3a26910();
   input += synapse0x3a26950();
   input += synapse0x3a26990();
   input += synapse0x3a26420();
   input += synapse0x3a26460();
   input += synapse0x3a26ae0();
   input += synapse0x3a26b20();
   input += synapse0x3a26b60();
   input += synapse0x3a26ba0();
   input += synapse0x3a26be0();
   input += synapse0x3a26c20();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a26290() {
   double input = input0x3a26290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a26c60() {
   double input = -0.641869;
   input += synapse0x3a26fa0();
   input += synapse0x3a26fe0();
   input += synapse0x3a27020();
   input += synapse0x3a27060();
   input += synapse0x3a270a0();
   input += synapse0x3a270e0();
   input += synapse0x3a27120();
   input += synapse0x3a27160();
   input += synapse0x3a271a0();
   input += synapse0x3a271e0();
   input += synapse0x3a27220();
   input += synapse0x3a27260();
   input += synapse0x3a272a0();
   input += synapse0x3a272e0();
   input += synapse0x3a27320();
   input += synapse0x3a27360();
   input += synapse0x3a26df0();
   input += synapse0x3a26e30();
   input += synapse0x3a274b0();
   input += synapse0x3a274f0();
   input += synapse0x3a27530();
   input += synapse0x3a27570();
   input += synapse0x3a275b0();
   input += synapse0x3a275f0();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a26c60() {
   double input = input0x3a26c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a27630() {
   double input = 0.996255;
   input += synapse0x3a27970();
   input += synapse0x3a279b0();
   input += synapse0x3a279f0();
   input += synapse0x3a27a30();
   input += synapse0x3a27a70();
   input += synapse0x3a27ab0();
   input += synapse0x3a27af0();
   input += synapse0x3a27b30();
   input += synapse0x3a27b70();
   input += synapse0x3a27bb0();
   input += synapse0x3a27bf0();
   input += synapse0x3a27c30();
   input += synapse0x3a27c70();
   input += synapse0x3a27cb0();
   input += synapse0x3a27cf0();
   input += synapse0x3a27d30();
   input += synapse0x3a277c0();
   input += synapse0x3a27800();
   input += synapse0x3a27e80();
   input += synapse0x3a27ec0();
   input += synapse0x3a27f00();
   input += synapse0x3a27f40();
   input += synapse0x3a27f80();
   input += synapse0x3a27fc0();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a27630() {
   double input = input0x3a27630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a39c70() {
   double input = 0.675196;
   input += synapse0x3a39e90();
   input += synapse0x3a39ed0();
   input += synapse0x3a39f10();
   input += synapse0x3a39f50();
   input += synapse0x3a39f90();
   input += synapse0x3a39fd0();
   input += synapse0x3a3a010();
   input += synapse0x3a3a050();
   input += synapse0x3a3a090();
   input += synapse0x3a3a0d0();
   input += synapse0x3a3a110();
   input += synapse0x3a3a150();
   input += synapse0x3a3a190();
   input += synapse0x3a3a1d0();
   input += synapse0x3a3a210();
   input += synapse0x3a3a250();
   input += synapse0x3a28000();
   input += synapse0x3a28040();
   input += synapse0x3a3a3a0();
   input += synapse0x3a3a3e0();
   input += synapse0x3a3a420();
   input += synapse0x3a3a460();
   input += synapse0x3a3a4a0();
   input += synapse0x3a3a4e0();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a39c70() {
   double input = input0x3a39c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a3a520() {
   double input = 0.974207;
   input += synapse0x3a3a860();
   input += synapse0x3a3a8a0();
   input += synapse0x3a3a8e0();
   input += synapse0x3a3a920();
   input += synapse0x3a3a960();
   input += synapse0x3a3a9a0();
   input += synapse0x3a3a9e0();
   input += synapse0x3a3aa20();
   input += synapse0x3a3aa60();
   input += synapse0x3a3aaa0();
   input += synapse0x3a3aae0();
   input += synapse0x3a3ab20();
   input += synapse0x3a3ab60();
   input += synapse0x3a3aba0();
   input += synapse0x3a3abe0();
   input += synapse0x3a3ac20();
   input += synapse0x3a3a6b0();
   input += synapse0x3a3a6f0();
   input += synapse0x3a3ad70();
   input += synapse0x3a3adb0();
   input += synapse0x3a3adf0();
   input += synapse0x3a3ae30();
   input += synapse0x3a3ae70();
   input += synapse0x3a3aeb0();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a3a520() {
   double input = input0x3a3a520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a3aef0() {
   double input = -1.04515;
   input += synapse0x3a3b230();
   input += synapse0x3a3b270();
   input += synapse0x3a3b2b0();
   input += synapse0x3a3b2f0();
   input += synapse0x3a3b330();
   input += synapse0x3a3b370();
   input += synapse0x3a3b3b0();
   input += synapse0x3a3b3f0();
   input += synapse0x3a3b430();
   input += synapse0x3a3b470();
   input += synapse0x3a3b4b0();
   input += synapse0x3a3b4f0();
   input += synapse0x3a3b530();
   input += synapse0x3a3b570();
   input += synapse0x3a3b5b0();
   input += synapse0x3a3b5f0();
   input += synapse0x3a3b080();
   input += synapse0x3a3b0c0();
   input += synapse0x3a3b740();
   input += synapse0x3a3b780();
   input += synapse0x3a3b7c0();
   input += synapse0x3a3b800();
   input += synapse0x3a3b840();
   input += synapse0x3a3b880();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a3aef0() {
   double input = input0x3a3aef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a3b8c0() {
   double input = -0.321237;
   input += synapse0x3a3bc00();
   input += synapse0x3a3bc40();
   input += synapse0x3a3bc80();
   input += synapse0x3a3bcc0();
   input += synapse0x3a3bd00();
   input += synapse0x3a3bd40();
   input += synapse0x3a3bd80();
   input += synapse0x3a3bdc0();
   input += synapse0x3a3be00();
   input += synapse0x3a3be40();
   input += synapse0x3a3be80();
   input += synapse0x3a3bec0();
   input += synapse0x3a3bf00();
   input += synapse0x3a3bf40();
   input += synapse0x3a3bf80();
   input += synapse0x3a3bfc0();
   input += synapse0x3a3ba50();
   input += synapse0x3a3ba90();
   input += synapse0x3a3c110();
   input += synapse0x3a3c150();
   input += synapse0x3a3c190();
   input += synapse0x3a3c1d0();
   input += synapse0x3a3c210();
   input += synapse0x3a3c250();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a3b8c0() {
   double input = input0x3a3b8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a42ac0() {
   double input = -0.0156969;
   input += synapse0x37dc160();
   input += synapse0x37dc1a0();
   input += synapse0x3a19d00();
   input += synapse0x3a19d40();
   input += synapse0x3a1a6d0();
   input += synapse0x3a1a710();
   input += synapse0x3a1b4a0();
   input += synapse0x3a1b4e0();
   input += synapse0x3a1be70();
   input += synapse0x3a1beb0();
   input += synapse0x3a1c840();
   input += synapse0x3a1c880();
   input += synapse0x3a1d320();
   input += synapse0x3a1d360();
   input += synapse0x3a1dcf0();
   input += synapse0x3a1dd30();
   input += synapse0x3a1add0();
   input += synapse0x3a1ae10();
   input += synapse0x3a1f8a0();
   input += synapse0x3a1f8e0();
   input += synapse0x3a20270();
   input += synapse0x3a202b0();
   input += synapse0x3a20c40();
   input += synapse0x3a20c80();
   input += synapse0x3a21610();
   input += synapse0x3a21650();
   input += synapse0x3a157b0();
   input += synapse0x3a157f0();
   input += synapse0x3a23700();
   input += synapse0x3a23740();
   input += synapse0x3a240d0();
   input += synapse0x3a24110();
   input += synapse0x3a24aa0();
   input += synapse0x3a24ae0();
   input += synapse0x3a25470();
   input += synapse0x3a254b0();
   input += synapse0x3a25e40();
   input += synapse0x3a25e80();
   input += synapse0x3a1e990();
   input += synapse0x3a1e9d0();
   input += synapse0x3a28240();
   input += synapse0x3a28280();
   input += synapse0x3a28bd0();
   input += synapse0x3a28c10();
   input += synapse0x3a295a0();
   input += synapse0x3a295e0();
   input += synapse0x3a29f70();
   input += synapse0x3a29fb0();
   input += synapse0x3a2a940();
   input += synapse0x3a2a980();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a42ac0() {
   double input = input0x3a42ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a42e60() {
   double input = 0.0117467;
   input += synapse0x3a2d080();
   input += synapse0x3a2d0c0();
   input += synapse0x3a22640();
   input += synapse0x3a22680();
   input += synapse0x3a2fc60();
   input += synapse0x3a2fca0();
   input += synapse0x3a30630();
   input += synapse0x3a30670();
   input += synapse0x3a31000();
   input += synapse0x3a31040();
   input += synapse0x3a319d0();
   input += synapse0x3a31a10();
   input += synapse0x3a323a0();
   input += synapse0x3a323e0();
   input += synapse0x3a32d70();
   input += synapse0x3a32db0();
   input += synapse0x3a33740();
   input += synapse0x3a33780();
   input += synapse0x3a34110();
   input += synapse0x3a34150();
   input += synapse0x3a34cf0();
   input += synapse0x3a34d30();
   input += synapse0x3a356c0();
   input += synapse0x3a35700();
   input += synapse0x3a26540();
   input += synapse0x3a26580();
   input += synapse0x3a26f10();
   input += synapse0x3a26f50();
   input += synapse0x3a278e0();
   input += synapse0x3a27920();
   input += synapse0x3a39e00();
   input += synapse0x3a39e40();
   input += synapse0x3a3a7d0();
   input += synapse0x3a3a810();
   input += synapse0x3a3b1a0();
   input += synapse0x3a3b1e0();
   input += synapse0x3a3bb70();
   input += synapse0x3a3bbb0();
   input += synapse0x3a17a60();
   input += synapse0x3a17aa0();
   input += synapse0x3a2b310();
   input += synapse0x3a2b350();
   input += synapse0x3a3c290();
   input += synapse0x3a3c2d0();
   input += synapse0x3a3c310();
   input += synapse0x3a3c350();
   input += synapse0x3a43200();
   input += synapse0x3a43240();
   input += synapse0x3a43280();
   input += synapse0x3a432c0();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a42e60() {
   double input = input0x3a42e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a43300() {
   double input = -0.414979;
   input += synapse0x3a43640();
   input += synapse0x3a43680();
   input += synapse0x3a436c0();
   input += synapse0x3a43700();
   input += synapse0x3a43740();
   input += synapse0x3a43780();
   input += synapse0x3a437c0();
   input += synapse0x3a43800();
   input += synapse0x3a43840();
   input += synapse0x3a43880();
   input += synapse0x3a438c0();
   input += synapse0x3a43900();
   input += synapse0x3a43940();
   input += synapse0x3a43980();
   input += synapse0x3a439c0();
   input += synapse0x3a43a00();
   input += synapse0x3a43490();
   input += synapse0x3a434d0();
   input += synapse0x3a43b50();
   input += synapse0x3a43b90();
   input += synapse0x3a43bd0();
   input += synapse0x3a43c10();
   input += synapse0x3a43c50();
   input += synapse0x3a43c90();
   input += synapse0x3a43cd0();
   input += synapse0x3a43d10();
   input += synapse0x3a43d50();
   input += synapse0x3a43d90();
   input += synapse0x3a43dd0();
   input += synapse0x3a43e10();
   input += synapse0x3a43e50();
   input += synapse0x3a43e90();
   input += synapse0x3a43a40();
   input += synapse0x3a43a80();
   input += synapse0x3a43ac0();
   input += synapse0x3a43b00();
   input += synapse0x3a440e0();
   input += synapse0x3a44120();
   input += synapse0x3a44160();
   input += synapse0x3a441a0();
   input += synapse0x3a441e0();
   input += synapse0x3a44220();
   input += synapse0x3a44260();
   input += synapse0x3a442a0();
   input += synapse0x3a442e0();
   input += synapse0x3a44320();
   input += synapse0x3a44360();
   input += synapse0x3a443a0();
   input += synapse0x3a443e0();
   input += synapse0x3a44420();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a43300() {
   double input = input0x3a43300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a44460() {
   double input = -0.0989307;
   input += synapse0x3a447a0();
   input += synapse0x3a447e0();
   input += synapse0x3a44820();
   input += synapse0x3a44860();
   input += synapse0x3a448a0();
   input += synapse0x3a448e0();
   input += synapse0x3a44920();
   input += synapse0x3a44960();
   input += synapse0x3a449a0();
   input += synapse0x3a449e0();
   input += synapse0x3a44a20();
   input += synapse0x3a44a60();
   input += synapse0x3a44aa0();
   input += synapse0x3a44ae0();
   input += synapse0x3a44b20();
   input += synapse0x3a44b60();
   input += synapse0x3a445f0();
   input += synapse0x3a44630();
   input += synapse0x3a44cb0();
   input += synapse0x3a44cf0();
   input += synapse0x3a44d30();
   input += synapse0x3a44d70();
   input += synapse0x3a44db0();
   input += synapse0x3a44df0();
   input += synapse0x3a44e30();
   input += synapse0x3a44e70();
   input += synapse0x3a44eb0();
   input += synapse0x3a44ef0();
   input += synapse0x3a44f30();
   input += synapse0x3a44f70();
   input += synapse0x3a44fb0();
   input += synapse0x3a44ff0();
   input += synapse0x3a44ba0();
   input += synapse0x3a44be0();
   input += synapse0x3a44c20();
   input += synapse0x3a44c60();
   input += synapse0x3a45240();
   input += synapse0x3a45280();
   input += synapse0x3a452c0();
   input += synapse0x3a45300();
   input += synapse0x3a45340();
   input += synapse0x3a45380();
   input += synapse0x3a453c0();
   input += synapse0x3a45400();
   input += synapse0x3a45440();
   input += synapse0x3a45480();
   input += synapse0x3a454c0();
   input += synapse0x3a45500();
   input += synapse0x3a45540();
   input += synapse0x3a45580();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a44460() {
   double input = input0x3a44460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a455c0() {
   double input = 0.379936;
   input += synapse0x3a45900();
   input += synapse0x3a45940();
   input += synapse0x3a45980();
   input += synapse0x3a459c0();
   input += synapse0x3a45a00();
   input += synapse0x3a45a40();
   input += synapse0x3a45a80();
   input += synapse0x3a45ac0();
   input += synapse0x3a45b00();
   input += synapse0x3a45b40();
   input += synapse0x3a45b80();
   input += synapse0x3a45bc0();
   input += synapse0x3a45c00();
   input += synapse0x3a45c40();
   input += synapse0x3a45c80();
   input += synapse0x3a45cc0();
   input += synapse0x3a45750();
   input += synapse0x3a45790();
   input += synapse0x3a45e10();
   input += synapse0x3a45e50();
   input += synapse0x3a45e90();
   input += synapse0x3a45ed0();
   input += synapse0x3a45f10();
   input += synapse0x3a45f50();
   input += synapse0x3a45f90();
   input += synapse0x3a45fd0();
   input += synapse0x3a46010();
   input += synapse0x3a46050();
   input += synapse0x3a46090();
   input += synapse0x3a460d0();
   input += synapse0x3a46110();
   input += synapse0x3a46150();
   input += synapse0x3a45d00();
   input += synapse0x3a45d40();
   input += synapse0x3a45d80();
   input += synapse0x3a45dc0();
   input += synapse0x3a463a0();
   input += synapse0x3a463e0();
   input += synapse0x3a46420();
   input += synapse0x3a46460();
   input += synapse0x3a464a0();
   input += synapse0x3a464e0();
   input += synapse0x3a46520();
   input += synapse0x3a46560();
   input += synapse0x3a465a0();
   input += synapse0x3a465e0();
   input += synapse0x3a46620();
   input += synapse0x3a46660();
   input += synapse0x3a466a0();
   input += synapse0x3a466e0();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a455c0() {
   double input = input0x3a455c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::input0x3a46720() {
   double input = 7.01311;
   input += synapse0x3a46940();
   input += synapse0x3a46980();
   input += synapse0x3a469c0();
   input += synapse0x3a46a00();
   input += synapse0x3a46a40();
   return input;
}

double NNfunction_ns_chiPlus2_cL::neuron0x3a46720() {
   double input = input0x3a46720();
   return (input * 1)+0;
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a126d0() {
   return (neuron0x3a12810()*0.0539232);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a12710() {
   return (neuron0x3a12b50()*0.148303);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a17af0() {
   return (neuron0x3a12e90()*0.115124);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a17b30() {
   return (neuron0x3a131d0()*0.462774);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a17b70() {
   return (neuron0x3a13510()*-0.416008);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a17bb0() {
   return (neuron0x3a13850()*-0.753386);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a17bf0() {
   return (neuron0x3a13b90()*0.253726);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a17c30() {
   return (neuron0x3a13ed0()*0.43148);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a17c70() {
   return (neuron0x3a14210()*-0.609972);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a17cb0() {
   return (neuron0x3a14550()*-0.41459);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a17cf0() {
   return (neuron0x3a14890()*-0.53394);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a17d30() {
   return (neuron0x3a14bd0()*0.159648);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a17d70() {
   return (neuron0x3a14f10()*0.261718);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a17db0() {
   return (neuron0x3a15250()*-0.201255);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a17df0() {
   return (neuron0x3a15590()*0.544462);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a17e30() {
   return (neuron0x3a158d0()*-0.0954731);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a12640() {
   return (neuron0x3a15c10()*-0.0852351);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a12680() {
   return (neuron0x3a16170()*0.308179);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37cd9b0() {
   return (neuron0x3a16390()*-0.205155);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37cd9f0() {
   return (neuron0x3a166d0()*-0.23239);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18090() {
   return (neuron0x3a16a10()*-0.708462);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a180d0() {
   return (neuron0x3a16d50()*0.205679);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18110() {
   return (neuron0x3a17090()*0.0447568);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18150() {
   return (neuron0x3a173d0()*0.539165);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a184d0() {
   return (neuron0x3a12810()*-0.00229158);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18510() {
   return (neuron0x3a12b50()*0.00348569);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18550() {
   return (neuron0x3a12e90()*0.0666948);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18590() {
   return (neuron0x3a131d0()*2.16596);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a185d0() {
   return (neuron0x3a13510()*-0.00555594);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18610() {
   return (neuron0x3a13850()*-6.50833e-05);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18650() {
   return (neuron0x3a13b90()*0.00341058);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18690() {
   return (neuron0x3a13ed0()*-0.00441917);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a186d0() {
   return (neuron0x3a14210()*0.00551727);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a17f80() {
   return (neuron0x3a14550()*0.000455171);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a17fc0() {
   return (neuron0x3a14890()*0.00196317);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18000() {
   return (neuron0x3a14bd0()*-0.00236782);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18040() {
   return (neuron0x3a14f10()*0.145662);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18920() {
   return (neuron0x3a15250()*0.00769259);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18960() {
   return (neuron0x3a15590()*0.00163723);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a189a0() {
   return (neuron0x3a158d0()*-0.000754689);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18320() {
   return (neuron0x3a15c10()*0.00852211);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18360() {
   return (neuron0x3a16170()*0.00196843);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18af0() {
   return (neuron0x3a16390()*-0.00261921);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18b30() {
   return (neuron0x3a166d0()*0.000787253);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18b70() {
   return (neuron0x3a16a10()*0.0031652);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18bb0() {
   return (neuron0x3a16d50()*-0.00716416);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18bf0() {
   return (neuron0x3a17090()*-0.00395735);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18c30() {
   return (neuron0x3a173d0()*0.00767265);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18fb0() {
   return (neuron0x3a12810()*-0.111725);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18ff0() {
   return (neuron0x3a12b50()*0.48567);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19030() {
   return (neuron0x3a12e90()*-0.196666);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19070() {
   return (neuron0x3a131d0()*-0.921413);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a190b0() {
   return (neuron0x3a13510()*-0.173979);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a190f0() {
   return (neuron0x3a13850()*0.690635);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19130() {
   return (neuron0x3a13b90()*0.0710656);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19170() {
   return (neuron0x3a13ed0()*0.822408);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a191b0() {
   return (neuron0x3a14210()*0.0275819);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a191f0() {
   return (neuron0x3a14550()*-0.408424);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19230() {
   return (neuron0x3a14890()*0.114871);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19270() {
   return (neuron0x3a14bd0()*-0.263525);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a192b0() {
   return (neuron0x3a14f10()*-0.05923);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a192f0() {
   return (neuron0x3a15250()*0.270856);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19330() {
   return (neuron0x3a15590()*0.0818721);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19370() {
   return (neuron0x3a158d0()*0.0716527);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18e00() {
   return (neuron0x3a15c10()*0.250928);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a18e40() {
   return (neuron0x3a16170()*-0.469914);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37ce0a0() {
   return (neuron0x3a16390()*0.32473);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37db970() {
   return (neuron0x3a166d0()*0.0256101);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37db9b0() {
   return (neuron0x3a16a10()*0.729803);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a018a0() {
   return (neuron0x3a16d50()*0.35335);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a018e0() {
   return (neuron0x3a17090()*0.081053);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a01920() {
   return (neuron0x3a173d0()*-0.385145);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37dc1f0() {
   return (neuron0x3a12810()*0.113547);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a188a0() {
   return (neuron0x3a12b50()*0.172467);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a188e0() {
   return (neuron0x3a12e90()*-0.276333);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a194c0() {
   return (neuron0x3a131d0()*0.0985414);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19500() {
   return (neuron0x3a13510()*0.0210021);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19540() {
   return (neuron0x3a13850()*0.448825);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19580() {
   return (neuron0x3a13b90()*0.415128);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a195c0() {
   return (neuron0x3a13ed0()*-0.617025);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19600() {
   return (neuron0x3a14210()*-0.0219004);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19640() {
   return (neuron0x3a14550()*0.134449);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19680() {
   return (neuron0x3a14890()*0.0803323);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a196c0() {
   return (neuron0x3a14bd0()*0.0871331);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19700() {
   return (neuron0x3a14f10()*-0.677713);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19740() {
   return (neuron0x3a15250()*0.318137);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19780() {
   return (neuron0x3a15590()*-0.637855);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a197c0() {
   return (neuron0x3a158d0()*-0.379342);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a12750() {
   return (neuron0x3a15c10()*0.0938297);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a12790() {
   return (neuron0x3a16170()*-0.109893);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a127d0() {
   return (neuron0x3a16390()*-0.236918);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19910() {
   return (neuron0x3a166d0()*-0.11709);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19950() {
   return (neuron0x3a16a10()*-0.208444);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19990() {
   return (neuron0x3a16d50()*0.310301);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a199d0() {
   return (neuron0x3a17090()*0.0160223);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19a10() {
   return (neuron0x3a173d0()*0.845471);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19d90() {
   return (neuron0x3a12810()*0.0334576);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19dd0() {
   return (neuron0x3a12b50()*-0.000136395);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19e10() {
   return (neuron0x3a12e90()*0.117022);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19e50() {
   return (neuron0x3a131d0()*-0.0497115);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19e90() {
   return (neuron0x3a13510()*0.0122265);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19ed0() {
   return (neuron0x3a13850()*-0.0154035);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19f10() {
   return (neuron0x3a13b90()*0.010623);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19f50() {
   return (neuron0x3a13ed0()*0.0145646);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19f90() {
   return (neuron0x3a14210()*0.00952768);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19fd0() {
   return (neuron0x3a14550()*-0.0331116);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a010() {
   return (neuron0x3a14890()*-0.0027195);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a050() {
   return (neuron0x3a14bd0()*0.0302394);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a090() {
   return (neuron0x3a14f10()*1.36292);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a0d0() {
   return (neuron0x3a15250()*0.0338371);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a110() {
   return (neuron0x3a15590()*0.023494);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a150() {
   return (neuron0x3a158d0()*0.016682);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19be0() {
   return (neuron0x3a15c10()*0.0164761);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19c20() {
   return (neuron0x3a16170()*0.0207263);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a2a0() {
   return (neuron0x3a16390()*-0.0105821);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a2e0() {
   return (neuron0x3a166d0()*0.0329425);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a320() {
   return (neuron0x3a16a10()*0.0219681);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a360() {
   return (neuron0x3a16d50()*-0.00838909);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a3a0() {
   return (neuron0x3a17090()*0.00963673);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a3e0() {
   return (neuron0x3a173d0()*0.0243462);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a760() {
   return (neuron0x3a12810()*-0.149016);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a7a0() {
   return (neuron0x3a12b50()*-0.00200457);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a7e0() {
   return (neuron0x3a12e90()*6.37441);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a820() {
   return (neuron0x3a131d0()*-0.00892981);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a860() {
   return (neuron0x3a13510()*-0.00348982);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a8a0() {
   return (neuron0x3a13850()*0.00807126);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a8e0() {
   return (neuron0x3a13b90()*0.00327756);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a920() {
   return (neuron0x3a13ed0()*-0.00336672);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a960() {
   return (neuron0x3a14210()*0.000588454);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37dbcc0() {
   return (neuron0x3a14550()*-0.00227043);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37dbd00() {
   return (neuron0x3a14890()*0.00167182);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37dbd40() {
   return (neuron0x3a14bd0()*-0.00331792);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37dbd80() {
   return (neuron0x3a14f10()*-0.00022239);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37dbdc0() {
   return (neuron0x3a15250()*0.00328465);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37dbe00() {
   return (neuron0x3a15590()*0.00358899);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37dbe40() {
   return (neuron0x3a158d0()*0.00453998);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a5b0() {
   return (neuron0x3a15c10()*-0.00133732);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a5f0() {
   return (neuron0x3a16170()*0.00121642);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37dbf90() {
   return (neuron0x3a16390()*0.00370619);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37dbfd0() {
   return (neuron0x3a166d0()*-0.000405616);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37dc010() {
   return (neuron0x3a16a10()*-0.000190947);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37dc050() {
   return (neuron0x3a16d50()*-0.00229401);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37dc090() {
   return (neuron0x3a17090()*0.0139848);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b1b0() {
   return (neuron0x3a173d0()*-0.434988);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b530() {
   return (neuron0x3a12810()*-0.00553486);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b570() {
   return (neuron0x3a12b50()*-0.00101841);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b5b0() {
   return (neuron0x3a12e90()*-0.126272);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b5f0() {
   return (neuron0x3a131d0()*-0.00176748);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b630() {
   return (neuron0x3a13510()*-0.00913627);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b670() {
   return (neuron0x3a13850()*0.00653214);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b6b0() {
   return (neuron0x3a13b90()*0.00217995);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b6f0() {
   return (neuron0x3a13ed0()*0.00130325);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b730() {
   return (neuron0x3a14210()*0.0139907);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b770() {
   return (neuron0x3a14550()*-0.0150592);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b7b0() {
   return (neuron0x3a14890()*-0.00322421);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b7f0() {
   return (neuron0x3a14bd0()*-0.00838996);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b830() {
   return (neuron0x3a14f10()*0.618932);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b870() {
   return (neuron0x3a15250()*-0.0291409);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b8b0() {
   return (neuron0x3a15590()*0.00373054);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b8f0() {
   return (neuron0x3a158d0()*0.00371616);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b380() {
   return (neuron0x3a15c10()*-0.0141199);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b3c0() {
   return (neuron0x3a16170()*-0.00521069);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ba40() {
   return (neuron0x3a16390()*0.00686167);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ba80() {
   return (neuron0x3a166d0()*-0.0102309);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1bac0() {
   return (neuron0x3a16a10()*-0.00560391);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1bb00() {
   return (neuron0x3a16d50()*0.00608643);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1bb40() {
   return (neuron0x3a17090()*0.00711049);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1bb80() {
   return (neuron0x3a173d0()*-0.0520593);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1bf00() {
   return (neuron0x3a12810()*-0.00117766);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1bf40() {
   return (neuron0x3a12b50()*0.00380281);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1bf80() {
   return (neuron0x3a12e90()*0.20281);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1bfc0() {
   return (neuron0x3a131d0()*1.00544);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c000() {
   return (neuron0x3a13510()*-0.0115771);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c040() {
   return (neuron0x3a13850()*-0.0062899);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c080() {
   return (neuron0x3a13b90()*-0.00892001);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c0c0() {
   return (neuron0x3a13ed0()*-0.0116136);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c100() {
   return (neuron0x3a14210()*0.0138944);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c140() {
   return (neuron0x3a14550()*0.00938073);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c180() {
   return (neuron0x3a14890()*0.00816039);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c1c0() {
   return (neuron0x3a14bd0()*0.00323498);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c200() {
   return (neuron0x3a14f10()*0.427381);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c240() {
   return (neuron0x3a15250()*0.0115271);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c280() {
   return (neuron0x3a15590()*0.00120209);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c2c0() {
   return (neuron0x3a158d0()*-0.00619593);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1bd50() {
   return (neuron0x3a15c10()*0.019165);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1bd90() {
   return (neuron0x3a16170()*-0.000685984);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c410() {
   return (neuron0x3a16390()*0.00394528);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c450() {
   return (neuron0x3a166d0()*-0.000524063);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c490() {
   return (neuron0x3a16a10()*0.00818772);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c4d0() {
   return (neuron0x3a16d50()*-0.00607936);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c510() {
   return (neuron0x3a17090()*-0.00604362);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c550() {
   return (neuron0x3a173d0()*-0.00929453);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a16060() {
   return (neuron0x3a12810()*-0.403044);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a160a0() {
   return (neuron0x3a12b50()*0.0454467);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a160e0() {
   return (neuron0x3a12e90()*-0.252124);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a16120() {
   return (neuron0x3a131d0()*0.980547);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1cae0() {
   return (neuron0x3a13510()*-0.194102);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1cb20() {
   return (neuron0x3a13850()*0.195909);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1cb60() {
   return (neuron0x3a13b90()*-0.494162);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1cba0() {
   return (neuron0x3a13ed0()*-0.5586);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1cbe0() {
   return (neuron0x3a14210()*-0.0698787);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1cc20() {
   return (neuron0x3a14550()*-0.672151);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1cc60() {
   return (neuron0x3a14890()*0.0227373);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1cca0() {
   return (neuron0x3a14bd0()*0.222472);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1cce0() {
   return (neuron0x3a14f10()*0.948445);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1cd20() {
   return (neuron0x3a15250()*-0.216252);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1cd60() {
   return (neuron0x3a15590()*0.0195361);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1cda0() {
   return (neuron0x3a158d0()*-0.693347);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c720() {
   return (neuron0x3a15c10()*0.0372972);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c760() {
   return (neuron0x3a16170()*0.0945831);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1cef0() {
   return (neuron0x3a16390()*-0.365676);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1cf30() {
   return (neuron0x3a166d0()*-0.00249084);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1cf70() {
   return (neuron0x3a16a10()*0.19795);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1cfb0() {
   return (neuron0x3a16d50()*-0.19593);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1cff0() {
   return (neuron0x3a17090()*-0.039664);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d030() {
   return (neuron0x3a173d0()*0.279131);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d3b0() {
   return (neuron0x3a12810()*-0.292825);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d3f0() {
   return (neuron0x3a12b50()*0.0861389);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d430() {
   return (neuron0x3a12e90()*-1.5557);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d470() {
   return (neuron0x3a131d0()*-0.101373);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d4b0() {
   return (neuron0x3a13510()*0.0309744);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d4f0() {
   return (neuron0x3a13850()*-0.19769);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d530() {
   return (neuron0x3a13b90()*-0.161696);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d570() {
   return (neuron0x3a13ed0()*0.0228453);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d5b0() {
   return (neuron0x3a14210()*0.0676049);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d5f0() {
   return (neuron0x3a14550()*-0.348403);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d630() {
   return (neuron0x3a14890()*0.149746);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d670() {
   return (neuron0x3a14bd0()*0.127149);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d6b0() {
   return (neuron0x3a14f10()*-1.61982);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d6f0() {
   return (neuron0x3a15250()*0.291787);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d730() {
   return (neuron0x3a15590()*0.10702);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d770() {
   return (neuron0x3a158d0()*-0.00408536);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d200() {
   return (neuron0x3a15c10()*0.0436598);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d240() {
   return (neuron0x3a16170()*0.117672);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d8c0() {
   return (neuron0x3a16390()*0.0353013);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d900() {
   return (neuron0x3a166d0()*0.369313);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d940() {
   return (neuron0x3a16a10()*-0.0561292);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d980() {
   return (neuron0x3a16d50()*-0.0982455);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d9c0() {
   return (neuron0x3a17090()*-0.033716);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1da00() {
   return (neuron0x3a173d0()*-0.575389);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1dd80() {
   return (neuron0x3a12810()*-0.343673);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ddc0() {
   return (neuron0x3a12b50()*-0.514482);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1de00() {
   return (neuron0x3a12e90()*-1.0701);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1de40() {
   return (neuron0x3a131d0()*0.0252478);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1de80() {
   return (neuron0x3a13510()*0.251073);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1dec0() {
   return (neuron0x3a13850()*-0.28408);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1df00() {
   return (neuron0x3a13b90()*-0.415921);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1df40() {
   return (neuron0x3a13ed0()*-0.24204);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1df80() {
   return (neuron0x3a14210()*0.706259);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1dfc0() {
   return (neuron0x3a14550()*-0.928397);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e000() {
   return (neuron0x3a14890()*0.189215);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e040() {
   return (neuron0x3a14bd0()*0.16953);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e080() {
   return (neuron0x3a14f10()*1.01997);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e0c0() {
   return (neuron0x3a15250()*0.521323);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e100() {
   return (neuron0x3a15590()*-0.607698);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e140() {
   return (neuron0x3a158d0()*0.769812);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1dbd0() {
   return (neuron0x3a15c10()*-0.253804);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1dc10() {
   return (neuron0x3a16170()*0.236469);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a9a0() {
   return (neuron0x3a16390()*-0.258869);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a9e0() {
   return (neuron0x3a166d0()*1.06358);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1aa20() {
   return (neuron0x3a16a10()*0.149616);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1aa60() {
   return (neuron0x3a16d50()*-0.112039);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1aaa0() {
   return (neuron0x3a17090()*-0.262681);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1aae0() {
   return (neuron0x3a173d0()*0.0597318);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ae60() {
   return (neuron0x3a12810()*-0.355731);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1aea0() {
   return (neuron0x3a12b50()*0.551414);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1aee0() {
   return (neuron0x3a12e90()*1.00983);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1af20() {
   return (neuron0x3a131d0()*0.00489898);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1af60() {
   return (neuron0x3a13510()*-0.110429);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1afa0() {
   return (neuron0x3a13850()*-0.162173);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1afe0() {
   return (neuron0x3a13b90()*0.285267);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b020() {
   return (neuron0x3a13ed0()*0.119891);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b060() {
   return (neuron0x3a14210()*0.457709);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b0a0() {
   return (neuron0x3a14550()*0.281386);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b0e0() {
   return (neuron0x3a14890()*0.0571438);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b120() {
   return (neuron0x3a14bd0()*-0.165933);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b160() {
   return (neuron0x3a14f10()*-0.0716194);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1f2a0() {
   return (neuron0x3a15250()*-0.170185);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1f2e0() {
   return (neuron0x3a15590()*-0.341054);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1f320() {
   return (neuron0x3a158d0()*-0.0345492);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1acb0() {
   return (neuron0x3a15c10()*0.228451);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1acf0() {
   return (neuron0x3a16170()*-0.255354);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1f470() {
   return (neuron0x3a16390()*0.441758);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1f4b0() {
   return (neuron0x3a166d0()*0.00305613);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1f4f0() {
   return (neuron0x3a16a10()*-0.367424);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1f530() {
   return (neuron0x3a16d50()*0.272087);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1f570() {
   return (neuron0x3a17090()*0.00949929);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1f5b0() {
   return (neuron0x3a173d0()*-0.461589);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1f930() {
   return (neuron0x3a12810()*-0.169549);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1f970() {
   return (neuron0x3a12b50()*-0.10503);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1f9b0() {
   return (neuron0x3a12e90()*-0.318263);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1f9f0() {
   return (neuron0x3a131d0()*-0.0576612);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1fa30() {
   return (neuron0x3a13510()*0.0102385);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1fa70() {
   return (neuron0x3a13850()*-0.0465989);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1fab0() {
   return (neuron0x3a13b90()*-0.0337153);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1faf0() {
   return (neuron0x3a13ed0()*-0.0160093);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1fb30() {
   return (neuron0x3a14210()*0.149504);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1fb70() {
   return (neuron0x3a14550()*-0.10235);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1fbb0() {
   return (neuron0x3a14890()*-0.0139339);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1fbf0() {
   return (neuron0x3a14bd0()*0.0279001);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1fc30() {
   return (neuron0x3a14f10()*-0.982839);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1fc70() {
   return (neuron0x3a15250()*-0.0141441);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1fcb0() {
   return (neuron0x3a15590()*0.00825299);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1fcf0() {
   return (neuron0x3a158d0()*0.20191);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1f780() {
   return (neuron0x3a15c10()*-0.0586029);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1f7c0() {
   return (neuron0x3a16170()*-0.0198017);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1fe40() {
   return (neuron0x3a16390()*-0.0457078);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1fe80() {
   return (neuron0x3a166d0()*-0.13199);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1fec0() {
   return (neuron0x3a16a10()*0.0149017);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ff00() {
   return (neuron0x3a16d50()*0.000921033);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ff40() {
   return (neuron0x3a17090()*0.0241691);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ff80() {
   return (neuron0x3a173d0()*0.559291);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20300() {
   return (neuron0x3a12810()*-0.0668689);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20340() {
   return (neuron0x3a12b50()*0.00662268);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20380() {
   return (neuron0x3a12e90()*8.17642);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a203c0() {
   return (neuron0x3a131d0()*-0.0167157);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20400() {
   return (neuron0x3a13510()*-0.00279329);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20440() {
   return (neuron0x3a13850()*0.0129362);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20480() {
   return (neuron0x3a13b90()*-0.00765198);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a204c0() {
   return (neuron0x3a13ed0()*-0.00946083);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20500() {
   return (neuron0x3a14210()*-0.00269341);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20540() {
   return (neuron0x3a14550()*-0.016268);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20580() {
   return (neuron0x3a14890()*0.0220379);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a205c0() {
   return (neuron0x3a14bd0()*0.00626631);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20600() {
   return (neuron0x3a14f10()*0.137573);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20640() {
   return (neuron0x3a15250()*0.0223021);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20680() {
   return (neuron0x3a15590()*0.00106317);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a206c0() {
   return (neuron0x3a158d0()*0.00517864);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20150() {
   return (neuron0x3a15c10()*0.000732332);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20190() {
   return (neuron0x3a16170()*0.0113226);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20810() {
   return (neuron0x3a16390()*0.00556398);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20850() {
   return (neuron0x3a166d0()*-0.00141149);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20890() {
   return (neuron0x3a16a10()*-0.0124337);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a208d0() {
   return (neuron0x3a16d50()*-0.00310207);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20910() {
   return (neuron0x3a17090()*0.0260752);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20950() {
   return (neuron0x3a173d0()*0.291132);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20cd0() {
   return (neuron0x3a12810()*0.305095);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20d10() {
   return (neuron0x3a12b50()*0.0539964);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20d50() {
   return (neuron0x3a12e90()*-2.13937);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20d90() {
   return (neuron0x3a131d0()*0.029387);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20dd0() {
   return (neuron0x3a13510()*-0.0297749);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20e10() {
   return (neuron0x3a13850()*0.0486702);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20e50() {
   return (neuron0x3a13b90()*-0.0354188);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20e90() {
   return (neuron0x3a13ed0()*-0.00735549);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20ed0() {
   return (neuron0x3a14210()*-0.0339833);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20f10() {
   return (neuron0x3a14550()*-0.0497457);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20f50() {
   return (neuron0x3a14890()*-0.0373353);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20f90() {
   return (neuron0x3a14bd0()*-0.0722708);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20fd0() {
   return (neuron0x3a14f10()*-0.10397);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a21010() {
   return (neuron0x3a15250()*-0.0727773);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a21050() {
   return (neuron0x3a15590()*0.0379792);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a21090() {
   return (neuron0x3a158d0()*0.0246184);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20b20() {
   return (neuron0x3a15c10()*-0.046034);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20b60() {
   return (neuron0x3a16170()*0.0391316);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a211e0() {
   return (neuron0x3a16390()*-0.00585281);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a21220() {
   return (neuron0x3a166d0()*0.0754303);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a21260() {
   return (neuron0x3a16a10()*-0.0167819);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a212a0() {
   return (neuron0x3a16d50()*-0.0680349);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a212e0() {
   return (neuron0x3a17090()*-0.028312);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a21320() {
   return (neuron0x3a173d0()*4.17462);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a216a0() {
   return (neuron0x3a12810()*-0.0611355);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a12a30() {
   return (neuron0x3a12b50()*0.01196);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a12a70() {
   return (neuron0x3a12e90()*-1.10232);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a12d70() {
   return (neuron0x3a131d0()*0.0287637);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a12db0() {
   return (neuron0x3a13510()*0.0149841);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a130b0() {
   return (neuron0x3a13850()*0.00637166);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a130f0() {
   return (neuron0x3a13b90()*0.0361694);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a133f0() {
   return (neuron0x3a13ed0()*-0.0253359);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a13430() {
   return (neuron0x3a14210()*-0.148269);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a13730() {
   return (neuron0x3a14550()*0.165937);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a13770() {
   return (neuron0x3a14890()*-0.0483987);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a13a70() {
   return (neuron0x3a14bd0()*0.0835035);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a13ab0() {
   return (neuron0x3a14f10()*0.418987);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a13db0() {
   return (neuron0x3a15250()*0.195235);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a13df0() {
   return (neuron0x3a15590()*0.00404758);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a140f0() {
   return (neuron0x3a158d0()*-0.0201459);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a14130() {
   return (neuron0x3a15c10()*0.0814886);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a14430() {
   return (neuron0x3a16170()*0.0604853);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a14470() {
   return (neuron0x3a16390()*0.0899694);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a14770() {
   return (neuron0x3a166d0()*0.0509523);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a147b0() {
   return (neuron0x3a16a10()*-0.111867);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a14ab0() {
   return (neuron0x3a16d50()*-0.0501711);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a14af0() {
   return (neuron0x3a17090()*-0.0737741);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a14df0() {
   return (neuron0x3a173d0()*-0.326968);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a14e30() {
   return (neuron0x3a12810()*-0.265505);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a15af0() {
   return (neuron0x3a12b50()*-0.0091921);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a15b30() {
   return (neuron0x3a12e90()*-5.7945);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a214f0() {
   return (neuron0x3a131d0()*2.67334e-05);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a21530() {
   return (neuron0x3a13510()*0.000954171);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a15e30() {
   return (neuron0x3a13850()*-0.00838858);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a15e70() {
   return (neuron0x3a13b90()*-0.00565478);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37cd890() {
   return (neuron0x3a13ed0()*0.00192373);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37cd8d0() {
   return (neuron0x3a14210()*-0.00247663);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a165b0() {
   return (neuron0x3a14550()*0.0180008);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a165f0() {
   return (neuron0x3a14890()*-0.0151884);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a168f0() {
   return (neuron0x3a14bd0()*-0.00963282);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a16930() {
   return (neuron0x3a14f10()*-0.0856239);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a16c30() {
   return (neuron0x3a15250()*-0.00722235);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a16c70() {
   return (neuron0x3a15590()*0.00546263);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a16f70() {
   return (neuron0x3a158d0()*0.00656159);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a16fb0() {
   return (neuron0x3a15c10()*0.00692125);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a172b0() {
   return (neuron0x3a16170()*-0.00654305);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a172f0() {
   return (neuron0x3a16390()*-0.0045404);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a175f0() {
   return (neuron0x3a166d0()*-0.0103939);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a17630() {
   return (neuron0x3a16a10()*0.0139511);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a15130() {
   return (neuron0x3a16d50()*0.0119318);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a15170() {
   return (neuron0x3a17090()*-0.00819271);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23410() {
   return (neuron0x3a173d0()*-2.13122);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23790() {
   return (neuron0x3a12810()*0.131385);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a237d0() {
   return (neuron0x3a12b50()*-0.171911);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23810() {
   return (neuron0x3a12e90()*0.87232);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23850() {
   return (neuron0x3a131d0()*0.357171);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23890() {
   return (neuron0x3a13510()*-0.0173459);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a238d0() {
   return (neuron0x3a13850()*-0.235595);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23910() {
   return (neuron0x3a13b90()*-0.0754383);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23950() {
   return (neuron0x3a13ed0()*-0.0559591);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23990() {
   return (neuron0x3a14210()*0.128332);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a239d0() {
   return (neuron0x3a14550()*-0.395793);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23a10() {
   return (neuron0x3a14890()*0.439126);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23a50() {
   return (neuron0x3a14bd0()*0.134288);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23a90() {
   return (neuron0x3a14f10()*-0.240721);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23ad0() {
   return (neuron0x3a15250()*-0.682125);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23b10() {
   return (neuron0x3a15590()*-0.179267);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23b50() {
   return (neuron0x3a158d0()*-0.251212);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a235e0() {
   return (neuron0x3a15c10()*0.156139);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23620() {
   return (neuron0x3a16170()*0.175201);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23ca0() {
   return (neuron0x3a16390()*-0.414834);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23ce0() {
   return (neuron0x3a166d0()*0.00155365);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23d20() {
   return (neuron0x3a16a10()*0.374364);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23d60() {
   return (neuron0x3a16d50()*-0.0118372);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23da0() {
   return (neuron0x3a17090()*0.262921);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23de0() {
   return (neuron0x3a173d0()*0.46181);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24160() {
   return (neuron0x3a12810()*-0.238174);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a241a0() {
   return (neuron0x3a12b50()*0.0410878);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a241e0() {
   return (neuron0x3a12e90()*0.610403);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24220() {
   return (neuron0x3a131d0()*-0.310451);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24260() {
   return (neuron0x3a13510()*-0.139943);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a242a0() {
   return (neuron0x3a13850()*-0.240089);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a242e0() {
   return (neuron0x3a13b90()*-0.0333961);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24320() {
   return (neuron0x3a13ed0()*-0.0151196);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24360() {
   return (neuron0x3a14210()*-0.126528);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a243a0() {
   return (neuron0x3a14550()*-0.396479);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a243e0() {
   return (neuron0x3a14890()*-0.728671);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24420() {
   return (neuron0x3a14bd0()*0.291178);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24460() {
   return (neuron0x3a14f10()*0.750756);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a244a0() {
   return (neuron0x3a15250()*-0.126197);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a244e0() {
   return (neuron0x3a15590()*0.17357);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24520() {
   return (neuron0x3a158d0()*-0.0324603);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23fb0() {
   return (neuron0x3a15c10()*-0.0899365);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23ff0() {
   return (neuron0x3a16170()*0.539554);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24670() {
   return (neuron0x3a16390()*0.276334);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a246b0() {
   return (neuron0x3a166d0()*0.0244531);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a246f0() {
   return (neuron0x3a16a10()*-0.0408761);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24730() {
   return (neuron0x3a16d50()*-0.206087);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24770() {
   return (neuron0x3a17090()*0.0800324);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a247b0() {
   return (neuron0x3a173d0()*-0.345901);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24b30() {
   return (neuron0x3a12810()*0.105221);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24b70() {
   return (neuron0x3a12b50()*0.018929);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24bb0() {
   return (neuron0x3a12e90()*3.4756);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24bf0() {
   return (neuron0x3a131d0()*-0.0236738);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24c30() {
   return (neuron0x3a13510()*-0.00816144);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24c70() {
   return (neuron0x3a13850()*-0.00902192);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24cb0() {
   return (neuron0x3a13b90()*-0.00793699);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24cf0() {
   return (neuron0x3a13ed0()*-0.00023719);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24d30() {
   return (neuron0x3a14210()*-0.0179488);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24d70() {
   return (neuron0x3a14550()*-0.00126888);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24db0() {
   return (neuron0x3a14890()*0.0272206);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24df0() {
   return (neuron0x3a14bd0()*0.0146684);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24e30() {
   return (neuron0x3a14f10()*0.189894);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24e70() {
   return (neuron0x3a15250()*0.025803);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24eb0() {
   return (neuron0x3a15590()*0.0024861);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24ef0() {
   return (neuron0x3a158d0()*0.010218);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24980() {
   return (neuron0x3a15c10()*0.00411804);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a249c0() {
   return (neuron0x3a16170()*0.0213639);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25040() {
   return (neuron0x3a16390()*-0.00335596);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25080() {
   return (neuron0x3a166d0()*0.013053);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a250c0() {
   return (neuron0x3a16a10()*-0.0119109);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25100() {
   return (neuron0x3a16d50()*0.00910964);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25140() {
   return (neuron0x3a17090()*0.0204449);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25180() {
   return (neuron0x3a173d0()*1.398);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25500() {
   return (neuron0x3a12810()*0.208291);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25540() {
   return (neuron0x3a12b50()*0.00681981);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25580() {
   return (neuron0x3a12e90()*4.20533);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a255c0() {
   return (neuron0x3a131d0()*-0.0172165);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25600() {
   return (neuron0x3a13510()*0.0124401);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25640() {
   return (neuron0x3a13850()*0.0260463);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25680() {
   return (neuron0x3a13b90()*0.0202448);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a256c0() {
   return (neuron0x3a13ed0()*0.0145872);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25700() {
   return (neuron0x3a14210()*-0.00523053);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25740() {
   return (neuron0x3a14550()*0.00506367);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25780() {
   return (neuron0x3a14890()*0.0123297);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a257c0() {
   return (neuron0x3a14bd0()*0.0125724);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25800() {
   return (neuron0x3a14f10()*-0.0393799);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25840() {
   return (neuron0x3a15250()*0.0129485);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25880() {
   return (neuron0x3a15590()*-0.0113581);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a258c0() {
   return (neuron0x3a158d0()*0.00612996);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25350() {
   return (neuron0x3a15c10()*0.0090375);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25390() {
   return (neuron0x3a16170()*-0.00811573);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25a10() {
   return (neuron0x3a16390()*-0.00539336);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25a50() {
   return (neuron0x3a166d0()*-0.0156494);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25a90() {
   return (neuron0x3a16a10()*-0.016424);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25ad0() {
   return (neuron0x3a16d50()*0.00413932);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25b10() {
   return (neuron0x3a17090()*0.00714061);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25b50() {
   return (neuron0x3a173d0()*-2.18003);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25ed0() {
   return (neuron0x3a12810()*0.240437);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25f10() {
   return (neuron0x3a12b50()*0.450459);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25f50() {
   return (neuron0x3a12e90()*-1.26858);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25f90() {
   return (neuron0x3a131d0()*0.146249);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25fd0() {
   return (neuron0x3a13510()*0.0375116);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26010() {
   return (neuron0x3a13850()*0.720592);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26050() {
   return (neuron0x3a13b90()*0.393936);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26090() {
   return (neuron0x3a13ed0()*0.581713);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a260d0() {
   return (neuron0x3a14210()*-0.0162082);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e290() {
   return (neuron0x3a14550()*-0.16168);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e2d0() {
   return (neuron0x3a14890()*0.27855);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e310() {
   return (neuron0x3a14bd0()*0.00635676);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e350() {
   return (neuron0x3a14f10()*-0.539149);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e390() {
   return (neuron0x3a15250()*-0.380661);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e3d0() {
   return (neuron0x3a15590()*-0.128148);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e410() {
   return (neuron0x3a158d0()*-0.196782);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25d20() {
   return (neuron0x3a15c10()*-0.0335812);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25d60() {
   return (neuron0x3a16170()*-0.195132);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e560() {
   return (neuron0x3a16390()*0.234573);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e5a0() {
   return (neuron0x3a166d0()*0.249395);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e5e0() {
   return (neuron0x3a16a10()*-0.238546);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e620() {
   return (neuron0x3a16d50()*0.475908);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e660() {
   return (neuron0x3a17090()*-0.473047);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e6a0() {
   return (neuron0x3a173d0()*-0.222873);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ea20() {
   return (neuron0x3a12810()*-0.0117682);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ea60() {
   return (neuron0x3a12b50()*-0.00589355);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1eaa0() {
   return (neuron0x3a12e90()*0.882397);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1eae0() {
   return (neuron0x3a131d0()*0.004036);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1eb20() {
   return (neuron0x3a13510()*0.0100349);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1eb60() {
   return (neuron0x3a13850()*-0.0166533);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1eba0() {
   return (neuron0x3a13b90()*-0.00482308);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ebe0() {
   return (neuron0x3a13ed0()*0.000885613);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ec20() {
   return (neuron0x3a14210()*0.0376932);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ec60() {
   return (neuron0x3a14550()*0.00954342);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1eca0() {
   return (neuron0x3a14890()*0.011873);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ece0() {
   return (neuron0x3a14bd0()*0.02169);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ed20() {
   return (neuron0x3a14f10()*0.438841);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ed60() {
   return (neuron0x3a15250()*0.0250066);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1eda0() {
   return (neuron0x3a15590()*-0.00905333);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ede0() {
   return (neuron0x3a158d0()*-0.00714774);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e870() {
   return (neuron0x3a15c10()*0.0117042);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e8b0() {
   return (neuron0x3a16170()*-0.00355057);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ef30() {
   return (neuron0x3a16390()*0.00265799);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ef70() {
   return (neuron0x3a166d0()*-0.00729088);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1efb0() {
   return (neuron0x3a16a10()*0.00924509);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1eff0() {
   return (neuron0x3a16d50()*0.00261492);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1f030() {
   return (neuron0x3a17090()*-0.0175496);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1f070() {
   return (neuron0x3a173d0()*0.0550735);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1f240() {
   return (neuron0x3a12810()*0.116112);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a282d0() {
   return (neuron0x3a12b50()*0.417184);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28310() {
   return (neuron0x3a12e90()*0.152392);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28350() {
   return (neuron0x3a131d0()*1.04854);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28390() {
   return (neuron0x3a13510()*0.52686);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a283d0() {
   return (neuron0x3a13850()*0.384287);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28410() {
   return (neuron0x3a13b90()*0.0318065);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28450() {
   return (neuron0x3a13ed0()*0.552393);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28490() {
   return (neuron0x3a14210()*-0.0726484);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a284d0() {
   return (neuron0x3a14550()*0.147121);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28510() {
   return (neuron0x3a14890()*-0.0785842);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28550() {
   return (neuron0x3a14bd0()*0.0433715);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28590() {
   return (neuron0x3a14f10()*-0.662344);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a285d0() {
   return (neuron0x3a15250()*0.223507);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28610() {
   return (neuron0x3a15590()*0.51481);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28650() {
   return (neuron0x3a158d0()*0.07195);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28120() {
   return (neuron0x3a15c10()*0.529237);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28160() {
   return (neuron0x3a16170()*-0.234183);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a287a0() {
   return (neuron0x3a16390()*0.0289623);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a287e0() {
   return (neuron0x3a166d0()*-0.258628);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28820() {
   return (neuron0x3a16a10()*0.307548);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28860() {
   return (neuron0x3a16d50()*-0.123187);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a288a0() {
   return (neuron0x3a17090()*-0.0186845);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a288e0() {
   return (neuron0x3a173d0()*0.42375);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28c60() {
   return (neuron0x3a12810()*0.28153);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28ca0() {
   return (neuron0x3a12b50()*-0.339115);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28ce0() {
   return (neuron0x3a12e90()*-0.105206);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28d20() {
   return (neuron0x3a131d0()*-0.164006);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28d60() {
   return (neuron0x3a13510()*-0.388706);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28da0() {
   return (neuron0x3a13850()*0.710205);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28de0() {
   return (neuron0x3a13b90()*0.202196);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28e20() {
   return (neuron0x3a13ed0()*0.324113);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28e60() {
   return (neuron0x3a14210()*0.59131);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28ea0() {
   return (neuron0x3a14550()*0.338028);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28ee0() {
   return (neuron0x3a14890()*0.099594);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28f20() {
   return (neuron0x3a14bd0()*0.13667);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28f60() {
   return (neuron0x3a14f10()*-0.33105);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28fa0() {
   return (neuron0x3a15250()*-0.53639);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28fe0() {
   return (neuron0x3a15590()*0.366963);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29020() {
   return (neuron0x3a158d0()*0.00928541);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28ab0() {
   return (neuron0x3a15c10()*-0.434522);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28af0() {
   return (neuron0x3a16170()*0.508752);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29170() {
   return (neuron0x3a16390()*-0.292953);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a291b0() {
   return (neuron0x3a166d0()*0.106615);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a291f0() {
   return (neuron0x3a16a10()*0.125134);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29230() {
   return (neuron0x3a16d50()*0.210596);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29270() {
   return (neuron0x3a17090()*-0.586126);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a292b0() {
   return (neuron0x3a173d0()*-0.345028);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29630() {
   return (neuron0x3a12810()*0.13888);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29670() {
   return (neuron0x3a12b50()*-0.208529);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a296b0() {
   return (neuron0x3a12e90()*-0.355974);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a296f0() {
   return (neuron0x3a131d0()*0.634045);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29730() {
   return (neuron0x3a13510()*-0.136034);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29770() {
   return (neuron0x3a13850()*0.153313);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a297b0() {
   return (neuron0x3a13b90()*0.358452);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a297f0() {
   return (neuron0x3a13ed0()*0.410378);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29830() {
   return (neuron0x3a14210()*0.174031);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29870() {
   return (neuron0x3a14550()*0.153907);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a298b0() {
   return (neuron0x3a14890()*-0.00888545);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a298f0() {
   return (neuron0x3a14bd0()*-0.213798);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29930() {
   return (neuron0x3a14f10()*0.990781);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29970() {
   return (neuron0x3a15250()*0.322457);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a299b0() {
   return (neuron0x3a15590()*-0.206357);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a299f0() {
   return (neuron0x3a158d0()*0.466346);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29480() {
   return (neuron0x3a15c10()*0.117503);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a294c0() {
   return (neuron0x3a16170()*0.0120245);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29b40() {
   return (neuron0x3a16390()*-0.331957);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29b80() {
   return (neuron0x3a166d0()*-0.122514);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29bc0() {
   return (neuron0x3a16a10()*-0.106002);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29c00() {
   return (neuron0x3a16d50()*0.188973);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29c40() {
   return (neuron0x3a17090()*0.325317);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29c80() {
   return (neuron0x3a173d0()*-0.878268);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a000() {
   return (neuron0x3a12810()*-0.52349);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a040() {
   return (neuron0x3a12b50()*0.263482);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a080() {
   return (neuron0x3a12e90()*0.229921);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a0c0() {
   return (neuron0x3a131d0()*0.320553);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a100() {
   return (neuron0x3a13510()*-0.439219);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a140() {
   return (neuron0x3a13850()*0.301082);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a180() {
   return (neuron0x3a13b90()*0.355858);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a1c0() {
   return (neuron0x3a13ed0()*0.508251);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a200() {
   return (neuron0x3a14210()*0.110008);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a240() {
   return (neuron0x3a14550()*0.132025);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a280() {
   return (neuron0x3a14890()*-0.0909636);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a2c0() {
   return (neuron0x3a14bd0()*-0.374257);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a300() {
   return (neuron0x3a14f10()*-0.656824);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a340() {
   return (neuron0x3a15250()*-0.0592298);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a380() {
   return (neuron0x3a15590()*-0.413563);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a3c0() {
   return (neuron0x3a158d0()*-0.124538);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29e50() {
   return (neuron0x3a15c10()*-0.336959);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29e90() {
   return (neuron0x3a16170()*0.0358089);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a510() {
   return (neuron0x3a16390()*-0.175412);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a550() {
   return (neuron0x3a166d0()*0.0339319);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a590() {
   return (neuron0x3a16a10()*0.0716736);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a5d0() {
   return (neuron0x3a16d50()*-0.0731252);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a610() {
   return (neuron0x3a17090()*-0.0538916);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a650() {
   return (neuron0x3a173d0()*0.690797);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a9d0() {
   return (neuron0x3a12810()*-0.197234);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2aa10() {
   return (neuron0x3a12b50()*-0.0377845);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2aa50() {
   return (neuron0x3a12e90()*-1.18739);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2aa90() {
   return (neuron0x3a131d0()*0.0522371);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2aad0() {
   return (neuron0x3a13510()*-0.0881661);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2ab10() {
   return (neuron0x3a13850()*0.088714);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2ab50() {
   return (neuron0x3a13b90()*-0.0551008);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2ab90() {
   return (neuron0x3a13ed0()*0.0860473);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2abd0() {
   return (neuron0x3a14210()*-0.830679);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2ac10() {
   return (neuron0x3a14550()*-0.138616);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2ac50() {
   return (neuron0x3a14890()*0.162725);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2ac90() {
   return (neuron0x3a14bd0()*-0.167682);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2acd0() {
   return (neuron0x3a14f10()*0.853234);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2ad10() {
   return (neuron0x3a15250()*-0.225829);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2ad50() {
   return (neuron0x3a15590()*0.02842);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2ad90() {
   return (neuron0x3a158d0()*0.0496211);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a820() {
   return (neuron0x3a15c10()*-0.114799);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a860() {
   return (neuron0x3a16170()*-0.0391291);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2aee0() {
   return (neuron0x3a16390()*-0.0782121);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2af20() {
   return (neuron0x3a166d0()*0.111417);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2af60() {
   return (neuron0x3a16a10()*0.289594);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2afa0() {
   return (neuron0x3a16d50()*-0.00869616);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2afe0() {
   return (neuron0x3a17090()*-0.0804182);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b020() {
   return (neuron0x3a173d0()*-0.982319);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b3a0() {
   return (neuron0x3a12810()*-0.118661);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b3e0() {
   return (neuron0x3a12b50()*-0.0262803);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b420() {
   return (neuron0x3a12e90()*-0.696781);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b460() {
   return (neuron0x3a131d0()*-0.0202244);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b4a0() {
   return (neuron0x3a13510()*0.0539251);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b4e0() {
   return (neuron0x3a13850()*0.0324953);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b520() {
   return (neuron0x3a13b90()*0.0503618);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b560() {
   return (neuron0x3a13ed0()*0.0499647);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b5a0() {
   return (neuron0x3a14210()*0.0144214);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b5e0() {
   return (neuron0x3a14550()*0.0394492);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b620() {
   return (neuron0x3a14890()*-0.0289734);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b660() {
   return (neuron0x3a14bd0()*-0.0217719);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b6a0() {
   return (neuron0x3a14f10()*-0.245876);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b6e0() {
   return (neuron0x3a15250()*0.00484755);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b720() {
   return (neuron0x3a15590()*-0.0583794);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b760() {
   return (neuron0x3a158d0()*-0.0267569);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b1f0() {
   return (neuron0x3a15c10()*0.0419212);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b230() {
   return (neuron0x3a16170()*-0.0302654);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b8b0() {
   return (neuron0x3a16390()*0.0198337);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b8f0() {
   return (neuron0x3a166d0()*-0.0545026);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b930() {
   return (neuron0x3a16a10()*0.0442131);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b970() {
   return (neuron0x3a16d50()*0.0380178);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b9b0() {
   return (neuron0x3a17090()*-0.00550551);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b9f0() {
   return (neuron0x3a173d0()*-2.42223);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2bd70() {
   return (neuron0x3a12810()*0.0382627);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2bdb0() {
   return (neuron0x3a12b50()*-0.0128973);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2bdf0() {
   return (neuron0x3a12e90()*0.0507032);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2be30() {
   return (neuron0x3a131d0()*-0.0284605);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2be70() {
   return (neuron0x3a13510()*0.0119021);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2beb0() {
   return (neuron0x3a13850()*0.0287745);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2bef0() {
   return (neuron0x3a13b90()*-0.010587);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2bf30() {
   return (neuron0x3a13ed0()*-0.000592743);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2bf70() {
   return (neuron0x3a14210()*0.0116127);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2bfb0() {
   return (neuron0x3a14550()*0.059103);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2bff0() {
   return (neuron0x3a14890()*0.0419728);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c030() {
   return (neuron0x3a14bd0()*-0.0138927);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c070() {
   return (neuron0x3a14f10()*-3.07103);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c0b0() {
   return (neuron0x3a15250()*0.0237672);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c0f0() {
   return (neuron0x3a15590()*0.00203516);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c130() {
   return (neuron0x3a158d0()*-0.0198255);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2bbc0() {
   return (neuron0x3a15c10()*0.0248827);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2bc00() {
   return (neuron0x3a16170()*0.0300346);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c280() {
   return (neuron0x3a16390()*0.0301436);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c2c0() {
   return (neuron0x3a166d0()*0.0293135);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c300() {
   return (neuron0x3a16a10()*0.0218688);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c340() {
   return (neuron0x3a16d50()*-0.0226913);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c380() {
   return (neuron0x3a17090()*-0.00593497);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c3c0() {
   return (neuron0x3a173d0()*0.06086);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c740() {
   return (neuron0x3a12810()*0.200691);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c780() {
   return (neuron0x3a12b50()*-0.0183346);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c7c0() {
   return (neuron0x3a12e90()*1.7742);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c800() {
   return (neuron0x3a131d0()*-0.643581);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c840() {
   return (neuron0x3a13510()*0.0891728);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c880() {
   return (neuron0x3a13850()*-0.0569126);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c8c0() {
   return (neuron0x3a13b90()*0.245574);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c900() {
   return (neuron0x3a13ed0()*0.278097);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c940() {
   return (neuron0x3a14210()*0.165422);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c980() {
   return (neuron0x3a14550()*0.942274);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c9c0() {
   return (neuron0x3a14890()*0.223701);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2ca00() {
   return (neuron0x3a14bd0()*0.378);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2ca40() {
   return (neuron0x3a14f10()*-0.482676);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2ca80() {
   return (neuron0x3a15250()*-0.0543052);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2cac0() {
   return (neuron0x3a15590()*-0.157776);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2cb00() {
   return (neuron0x3a158d0()*0.366998);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c590() {
   return (neuron0x3a15c10()*0.213846);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2c5d0() {
   return (neuron0x3a16170()*0.316624);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2cc50() {
   return (neuron0x3a16390()*0.434313);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2cc90() {
   return (neuron0x3a166d0()*0.332739);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2ccd0() {
   return (neuron0x3a16a10()*0.0588625);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2cd10() {
   return (neuron0x3a16d50()*0.121291);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2cd50() {
   return (neuron0x3a17090()*-0.533641);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2cd90() {
   return (neuron0x3a173d0()*0.804528);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2d110() {
   return (neuron0x3a12810()*-0.121346);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a216e0() {
   return (neuron0x3a12b50()*-0.377749);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a21720() {
   return (neuron0x3a12e90()*0.916818);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a21760() {
   return (neuron0x3a131d0()*-0.379152);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a219b0() {
   return (neuron0x3a13510()*0.283749);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a219f0() {
   return (neuron0x3a13850()*0.78926);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a21a30() {
   return (neuron0x3a13b90()*-0.108726);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a21c80() {
   return (neuron0x3a13ed0()*-0.128762);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a21cc0() {
   return (neuron0x3a14210()*-0.266011);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a21f10() {
   return (neuron0x3a14550()*-0.478303);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a21f50() {
   return (neuron0x3a14890()*0.021556);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a21f90() {
   return (neuron0x3a14bd0()*-0.0168057);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a221e0() {
   return (neuron0x3a14f10()*-0.161162);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a22220() {
   return (neuron0x3a15250()*0.0166223);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a22470() {
   return (neuron0x3a15590()*0.418142);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a224b0() {
   return (neuron0x3a158d0()*-0.125145);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2cf60() {
   return (neuron0x3a15c10()*-0.400629);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2cfa0() {
   return (neuron0x3a16170()*-0.153608);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a22600() {
   return (neuron0x3a16390()*-0.251541);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a22b10() {
   return (neuron0x3a166d0()*-0.215529);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a22b50() {
   return (neuron0x3a16a10()*-0.387275);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a22b90() {
   return (neuron0x3a16d50()*0.195228);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a22de0() {
   return (neuron0x3a17090()*0.18271);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a22e20() {
   return (neuron0x3a173d0()*0.715895);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a226d0() {
   return (neuron0x3a12810()*-0.40476);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a22710() {
   return (neuron0x3a12b50()*-0.201112);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a22750() {
   return (neuron0x3a12e90()*0.0561879);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a22790() {
   return (neuron0x3a131d0()*0.928564);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23110() {
   return (neuron0x3a13510()*0.0764302);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2f460() {
   return (neuron0x3a13850()*0.313369);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2f4a0() {
   return (neuron0x3a13b90()*0.141783);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2f4e0() {
   return (neuron0x3a13ed0()*0.0444044);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2f520() {
   return (neuron0x3a14210()*0.0538016);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2f560() {
   return (neuron0x3a14550()*-0.0169052);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2f5a0() {
   return (neuron0x3a14890()*-0.0929016);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2f5e0() {
   return (neuron0x3a14bd0()*-0.019691);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2f620() {
   return (neuron0x3a14f10()*0.316069);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2f660() {
   return (neuron0x3a15250()*-0.235032);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2f6a0() {
   return (neuron0x3a15590()*-0.189201);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2f6e0() {
   return (neuron0x3a158d0()*0.082997);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a22ff0() {
   return (neuron0x3a15c10()*-0.51072);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23030() {
   return (neuron0x3a16170()*0.0961257);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2f830() {
   return (neuron0x3a16390()*0.48133);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2f870() {
   return (neuron0x3a166d0()*0.0958753);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2f8b0() {
   return (neuron0x3a16a10()*-0.0572025);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2f8f0() {
   return (neuron0x3a16d50()*0.086686);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2f930() {
   return (neuron0x3a17090()*-0.114239);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2f970() {
   return (neuron0x3a173d0()*0.329857);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2fcf0() {
   return (neuron0x3a12810()*-0.00170106);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2fd30() {
   return (neuron0x3a12b50()*-0.00344117);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2fd70() {
   return (neuron0x3a12e90()*0.0707674);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2fdb0() {
   return (neuron0x3a131d0()*-2.17805);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2fdf0() {
   return (neuron0x3a13510()*0.00303395);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2fe30() {
   return (neuron0x3a13850()*-0.0055751);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2fe70() {
   return (neuron0x3a13b90()*-0.00945852);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2feb0() {
   return (neuron0x3a13ed0()*-0.00355539);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2fef0() {
   return (neuron0x3a14210()*0.00319136);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2ff30() {
   return (neuron0x3a14550()*0.00439758);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2ff70() {
   return (neuron0x3a14890()*0.00291896);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2ffb0() {
   return (neuron0x3a14bd0()*-0.00316024);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2fff0() {
   return (neuron0x3a14f10()*0.176948);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30030() {
   return (neuron0x3a15250()*0.00990983);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30070() {
   return (neuron0x3a15590()*-0.00671933);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a300b0() {
   return (neuron0x3a158d0()*-0.00737655);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2fb40() {
   return (neuron0x3a15c10()*0.0107544);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2fb80() {
   return (neuron0x3a16170()*-0.00306241);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30200() {
   return (neuron0x3a16390()*0.00386527);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30240() {
   return (neuron0x3a166d0()*-4.91072e-05);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30280() {
   return (neuron0x3a16a10()*0.00131889);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a302c0() {
   return (neuron0x3a16d50()*0.00612095);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30300() {
   return (neuron0x3a17090()*0.000360972);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30340() {
   return (neuron0x3a173d0()*-0.010479);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a306c0() {
   return (neuron0x3a12810()*0.0361489);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30700() {
   return (neuron0x3a12b50()*0.249702);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30740() {
   return (neuron0x3a12e90()*0.105404);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30780() {
   return (neuron0x3a131d0()*0.768431);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a307c0() {
   return (neuron0x3a13510()*0.108635);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30800() {
   return (neuron0x3a13850()*0.224511);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30840() {
   return (neuron0x3a13b90()*-0.11581);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30880() {
   return (neuron0x3a13ed0()*-0.483756);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a308c0() {
   return (neuron0x3a14210()*0.282255);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30900() {
   return (neuron0x3a14550()*0.252097);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30940() {
   return (neuron0x3a14890()*-0.101761);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30980() {
   return (neuron0x3a14bd0()*0.279616);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a309c0() {
   return (neuron0x3a14f10()*0.476166);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30a00() {
   return (neuron0x3a15250()*0.390664);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30a40() {
   return (neuron0x3a15590()*0.290175);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30a80() {
   return (neuron0x3a158d0()*-0.116919);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30510() {
   return (neuron0x3a15c10()*-0.0388841);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30550() {
   return (neuron0x3a16170()*-0.200522);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30bd0() {
   return (neuron0x3a16390()*-0.0243987);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30c10() {
   return (neuron0x3a166d0()*0.0610776);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30c50() {
   return (neuron0x3a16a10()*0.179876);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30c90() {
   return (neuron0x3a16d50()*-0.239844);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30cd0() {
   return (neuron0x3a17090()*0.261314);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30d10() {
   return (neuron0x3a173d0()*1.61244);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31090() {
   return (neuron0x3a12810()*-0.0569259);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a310d0() {
   return (neuron0x3a12b50()*-0.069297);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31110() {
   return (neuron0x3a12e90()*-3.81969);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31150() {
   return (neuron0x3a131d0()*0.0166434);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31190() {
   return (neuron0x3a13510()*-0.0251198);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a311d0() {
   return (neuron0x3a13850()*3.86179e-05);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31210() {
   return (neuron0x3a13b90()*0.0626345);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31250() {
   return (neuron0x3a13ed0()*0.0866815);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31290() {
   return (neuron0x3a14210()*0.118298);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a312d0() {
   return (neuron0x3a14550()*0.0124324);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31310() {
   return (neuron0x3a14890()*-0.0258559);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31350() {
   return (neuron0x3a14bd0()*-0.0338777);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31390() {
   return (neuron0x3a14f10()*0.431237);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a313d0() {
   return (neuron0x3a15250()*-0.050698);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31410() {
   return (neuron0x3a15590()*0.038605);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31450() {
   return (neuron0x3a158d0()*-0.0248823);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30ee0() {
   return (neuron0x3a15c10()*-0.0901782);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30f20() {
   return (neuron0x3a16170()*-0.0467459);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a315a0() {
   return (neuron0x3a16390()*0.0795985);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a315e0() {
   return (neuron0x3a166d0()*-0.0476127);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31620() {
   return (neuron0x3a16a10()*-0.136217);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31660() {
   return (neuron0x3a16d50()*-0.0684441);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a316a0() {
   return (neuron0x3a17090()*-0.0289681);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a316e0() {
   return (neuron0x3a173d0()*-0.506764);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31a60() {
   return (neuron0x3a12810()*0.109963);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31aa0() {
   return (neuron0x3a12b50()*-0.0224649);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31ae0() {
   return (neuron0x3a12e90()*0.668266);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31b20() {
   return (neuron0x3a131d0()*0.63813);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31b60() {
   return (neuron0x3a13510()*-0.416521);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31ba0() {
   return (neuron0x3a13850()*-0.298723);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31be0() {
   return (neuron0x3a13b90()*-0.344665);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31c20() {
   return (neuron0x3a13ed0()*-0.563581);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31c60() {
   return (neuron0x3a14210()*-0.519046);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31ca0() {
   return (neuron0x3a14550()*0.370963);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31ce0() {
   return (neuron0x3a14890()*-0.719197);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31d20() {
   return (neuron0x3a14bd0()*0.0578634);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31d60() {
   return (neuron0x3a14f10()*1.303);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31da0() {
   return (neuron0x3a15250()*-0.189149);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31de0() {
   return (neuron0x3a15590()*-0.436413);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31e20() {
   return (neuron0x3a158d0()*-0.0517196);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a318b0() {
   return (neuron0x3a15c10()*0.0305148);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a318f0() {
   return (neuron0x3a16170()*-0.220943);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31f70() {
   return (neuron0x3a16390()*0.203997);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31fb0() {
   return (neuron0x3a166d0()*0.0106429);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31ff0() {
   return (neuron0x3a16a10()*-0.514152);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32030() {
   return (neuron0x3a16d50()*0.133678);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32070() {
   return (neuron0x3a17090()*0.236615);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a320b0() {
   return (neuron0x3a173d0()*0.319239);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32430() {
   return (neuron0x3a12810()*0.0424541);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32470() {
   return (neuron0x3a12b50()*-0.00136538);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a324b0() {
   return (neuron0x3a12e90()*-3.84866);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a324f0() {
   return (neuron0x3a131d0()*0.0408469);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32530() {
   return (neuron0x3a13510()*0.0104022);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32570() {
   return (neuron0x3a13850()*0.0169027);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a325b0() {
   return (neuron0x3a13b90()*0.0263104);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a325f0() {
   return (neuron0x3a13ed0()*0.00916863);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32630() {
   return (neuron0x3a14210()*-0.010438);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32670() {
   return (neuron0x3a14550()*-0.0017915);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a326b0() {
   return (neuron0x3a14890()*-0.0362061);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a326f0() {
   return (neuron0x3a14bd0()*-0.0167559);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32730() {
   return (neuron0x3a14f10()*-0.200226);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32770() {
   return (neuron0x3a15250()*-0.039611);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a327b0() {
   return (neuron0x3a15590()*-0.000609377);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a327f0() {
   return (neuron0x3a158d0()*0.000935036);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32280() {
   return (neuron0x3a15c10()*-0.0210455);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a322c0() {
   return (neuron0x3a16170()*-0.0141112);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32940() {
   return (neuron0x3a16390()*0.0103652);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32980() {
   return (neuron0x3a166d0()*0.00355405);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a329c0() {
   return (neuron0x3a16a10()*0.00114141);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32a00() {
   return (neuron0x3a16d50()*-0.00407913);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32a40() {
   return (neuron0x3a17090()*-0.0315138);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32a80() {
   return (neuron0x3a173d0()*-0.217974);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32e00() {
   return (neuron0x3a12810()*0.415725);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32e40() {
   return (neuron0x3a12b50()*0.0149136);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32e80() {
   return (neuron0x3a12e90()*-2.83626);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32ec0() {
   return (neuron0x3a131d0()*0.0409055);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32f00() {
   return (neuron0x3a13510()*-0.00891086);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32f40() {
   return (neuron0x3a13850()*0.00458396);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32f80() {
   return (neuron0x3a13b90()*0.0332782);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32fc0() {
   return (neuron0x3a13ed0()*0.0188288);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33000() {
   return (neuron0x3a14210()*-0.0137454);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33040() {
   return (neuron0x3a14550()*-0.000857748);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33080() {
   return (neuron0x3a14890()*-0.0352649);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a330c0() {
   return (neuron0x3a14bd0()*-0.0407524);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33100() {
   return (neuron0x3a14f10()*-0.106094);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33140() {
   return (neuron0x3a15250()*-0.0461449);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33180() {
   return (neuron0x3a15590()*-0.0134567);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a331c0() {
   return (neuron0x3a158d0()*-0.00236231);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32c50() {
   return (neuron0x3a15c10()*-0.0199998);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32c90() {
   return (neuron0x3a16170()*-0.0186716);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33310() {
   return (neuron0x3a16390()*-0.00554285);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33350() {
   return (neuron0x3a166d0()*0.0304086);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33390() {
   return (neuron0x3a16a10()*0.00185744);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a333d0() {
   return (neuron0x3a16d50()*-0.00581653);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33410() {
   return (neuron0x3a17090()*-0.0370305);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33450() {
   return (neuron0x3a173d0()*0.35296);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a337d0() {
   return (neuron0x3a12810()*0.18922);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33810() {
   return (neuron0x3a12b50()*0.0797714);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33850() {
   return (neuron0x3a12e90()*-0.478886);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33890() {
   return (neuron0x3a131d0()*-0.393497);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a338d0() {
   return (neuron0x3a13510()*0.0398873);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33910() {
   return (neuron0x3a13850()*0.355823);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33950() {
   return (neuron0x3a13b90()*0.0424358);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33990() {
   return (neuron0x3a13ed0()*-0.0455932);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a339d0() {
   return (neuron0x3a14210()*-0.08127);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33a10() {
   return (neuron0x3a14550()*0.0144736);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33a50() {
   return (neuron0x3a14890()*0.00118697);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33a90() {
   return (neuron0x3a14bd0()*0.524681);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33ad0() {
   return (neuron0x3a14f10()*-0.290863);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33b10() {
   return (neuron0x3a15250()*-0.485942);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33b50() {
   return (neuron0x3a15590()*0.379042);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33b90() {
   return (neuron0x3a158d0()*0.339702);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33620() {
   return (neuron0x3a15c10()*-0.545156);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33660() {
   return (neuron0x3a16170()*0.181077);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33ce0() {
   return (neuron0x3a16390()*0.176737);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33d20() {
   return (neuron0x3a166d0()*0.116205);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33d60() {
   return (neuron0x3a16a10()*-0.0338023);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33da0() {
   return (neuron0x3a16d50()*-0.0336733);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33de0() {
   return (neuron0x3a17090()*-0.0706791);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33e20() {
   return (neuron0x3a173d0()*-0.46808);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c8d0() {
   return (neuron0x3a12810()*-0.135281);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c910() {
   return (neuron0x3a12b50()*-0.0251211);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c950() {
   return (neuron0x3a12e90()*-1.99313);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c990() {
   return (neuron0x3a131d0()*0.0407636);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c9d0() {
   return (neuron0x3a13510()*-8.14489e-05);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ca10() {
   return (neuron0x3a13850()*0.030721);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ca50() {
   return (neuron0x3a13b90()*-0.00100238);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ca90() {
   return (neuron0x3a13ed0()*0.0161786);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a345b0() {
   return (neuron0x3a14210()*-0.0166681);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a345f0() {
   return (neuron0x3a14550()*0.0234205);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34630() {
   return (neuron0x3a14890()*-0.0520074);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34670() {
   return (neuron0x3a14bd0()*0.00593664);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a346b0() {
   return (neuron0x3a14f10()*-0.974351);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a346f0() {
   return (neuron0x3a15250()*-0.0204351);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34730() {
   return (neuron0x3a15590()*-0.00544695);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34770() {
   return (neuron0x3a158d0()*0.03179);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33ff0() {
   return (neuron0x3a15c10()*-0.00973999);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34030() {
   return (neuron0x3a16170()*0.012368);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a348c0() {
   return (neuron0x3a16390()*0.023573);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34900() {
   return (neuron0x3a166d0()*-0.0495096);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34940() {
   return (neuron0x3a16a10()*0.00451094);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34980() {
   return (neuron0x3a16d50()*0.0110111);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a349c0() {
   return (neuron0x3a17090()*-0.0250096);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34a00() {
   return (neuron0x3a173d0()*0.000963851);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34d80() {
   return (neuron0x3a12810()*-0.134721);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34dc0() {
   return (neuron0x3a12b50()*0.0250417);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34e00() {
   return (neuron0x3a12e90()*-1.58608);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34e40() {
   return (neuron0x3a131d0()*0.0149888);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34e80() {
   return (neuron0x3a13510()*-0.00873546);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34ec0() {
   return (neuron0x3a13850()*-0.0743533);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34f00() {
   return (neuron0x3a13b90()*-0.063963);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34f40() {
   return (neuron0x3a13ed0()*0.00364716);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34f80() {
   return (neuron0x3a14210()*0.0164498);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34fc0() {
   return (neuron0x3a14550()*-0.0257781);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35000() {
   return (neuron0x3a14890()*-0.0139481);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35040() {
   return (neuron0x3a14bd0()*0.0183989);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35080() {
   return (neuron0x3a14f10()*0.290529);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a350c0() {
   return (neuron0x3a15250()*-0.0394192);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35100() {
   return (neuron0x3a15590()*0.00123559);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35140() {
   return (neuron0x3a158d0()*-0.0403602);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34bd0() {
   return (neuron0x3a15c10()*-0.00139138);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34c10() {
   return (neuron0x3a16170()*0.044263);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35290() {
   return (neuron0x3a16390()*0.0407981);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a352d0() {
   return (neuron0x3a166d0()*0.0612549);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35310() {
   return (neuron0x3a16a10()*0.0176063);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35350() {
   return (neuron0x3a16d50()*-0.0113236);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35390() {
   return (neuron0x3a17090()*-0.0154706);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a353d0() {
   return (neuron0x3a173d0()*1.98381);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35750() {
   return (neuron0x3a12810()*-1.20006);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35790() {
   return (neuron0x3a12b50()*-0.0465081);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a357d0() {
   return (neuron0x3a12e90()*-2.90384);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35810() {
   return (neuron0x3a131d0()*0.00812531);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35850() {
   return (neuron0x3a13510()*0.00218793);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35890() {
   return (neuron0x3a13850()*-0.0169416);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a358d0() {
   return (neuron0x3a13b90()*-0.0461518);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35910() {
   return (neuron0x3a13ed0()*-0.0363259);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35950() {
   return (neuron0x3a14210()*-0.00129735);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35990() {
   return (neuron0x3a14550()*0.00599481);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a359d0() {
   return (neuron0x3a14890()*-0.00299663);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35a10() {
   return (neuron0x3a14bd0()*0.00712329);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35a50() {
   return (neuron0x3a14f10()*-0.126922);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35a90() {
   return (neuron0x3a15250()*0.0256817);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35ad0() {
   return (neuron0x3a15590()*0.0605178);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35b10() {
   return (neuron0x3a158d0()*0.0145239);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a355a0() {
   return (neuron0x3a15c10()*-0.00405271);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a355e0() {
   return (neuron0x3a16170()*-0.0211679);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26110() {
   return (neuron0x3a16390()*-0.0412833);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26150() {
   return (neuron0x3a166d0()*-0.0491266);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26190() {
   return (neuron0x3a16a10()*0.0260453);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a261d0() {
   return (neuron0x3a16d50()*0.00423159);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26210() {
   return (neuron0x3a17090()*-0.00515088);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26250() {
   return (neuron0x3a173d0()*-1.95882);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a265d0() {
   return (neuron0x3a12810()*0.0131156);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26610() {
   return (neuron0x3a12b50()*0.00604743);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26650() {
   return (neuron0x3a12e90()*-0.202398);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26690() {
   return (neuron0x3a131d0()*0.991495);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a266d0() {
   return (neuron0x3a13510()*0.00121775);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26710() {
   return (neuron0x3a13850()*0.00928506);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26750() {
   return (neuron0x3a13b90()*0.0105538);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26790() {
   return (neuron0x3a13ed0()*0.00727903);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a267d0() {
   return (neuron0x3a14210()*-0.0139862);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26810() {
   return (neuron0x3a14550()*-0.00830004);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26850() {
   return (neuron0x3a14890()*-0.00546705);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26890() {
   return (neuron0x3a14bd0()*-0.000933916);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a268d0() {
   return (neuron0x3a14f10()*-0.469632);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26910() {
   return (neuron0x3a15250()*-0.0170713);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26950() {
   return (neuron0x3a15590()*0.0107438);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26990() {
   return (neuron0x3a158d0()*0.0160344);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26420() {
   return (neuron0x3a15c10()*-0.02507);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26460() {
   return (neuron0x3a16170()*-0.00411086);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26ae0() {
   return (neuron0x3a16390()*-0.0117907);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26b20() {
   return (neuron0x3a166d0()*-0.000189584);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26b60() {
   return (neuron0x3a16a10()*-0.00663838);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26ba0() {
   return (neuron0x3a16d50()*-0.0021659);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26be0() {
   return (neuron0x3a17090()*0.00563352);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26c20() {
   return (neuron0x3a173d0()*0.00728786);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26fa0() {
   return (neuron0x3a12810()*-0.0446572);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26fe0() {
   return (neuron0x3a12b50()*-0.0103588);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27020() {
   return (neuron0x3a12e90()*0.607607);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27060() {
   return (neuron0x3a131d0()*0.018872);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a270a0() {
   return (neuron0x3a13510()*-0.0206837);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a270e0() {
   return (neuron0x3a13850()*-0.00235108);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27120() {
   return (neuron0x3a13b90()*-0.015852);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27160() {
   return (neuron0x3a13ed0()*-0.00773148);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a271a0() {
   return (neuron0x3a14210()*0.00189029);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a271e0() {
   return (neuron0x3a14550()*0.0266233);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27220() {
   return (neuron0x3a14890()*0.0136516);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27260() {
   return (neuron0x3a14bd0()*-0.0250467);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a272a0() {
   return (neuron0x3a14f10()*-0.484576);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a272e0() {
   return (neuron0x3a15250()*0.0064473);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27320() {
   return (neuron0x3a15590()*-0.0257746);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27360() {
   return (neuron0x3a158d0()*-0.0201592);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26df0() {
   return (neuron0x3a15c10()*0.0248835);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26e30() {
   return (neuron0x3a16170()*-0.00225256);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a274b0() {
   return (neuron0x3a16390()*0.0118671);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a274f0() {
   return (neuron0x3a166d0()*-0.023015);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27530() {
   return (neuron0x3a16a10()*0.002077);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27570() {
   return (neuron0x3a16d50()*-0.0025797);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a275b0() {
   return (neuron0x3a17090()*-0.00054645);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a275f0() {
   return (neuron0x3a173d0()*0.0305623);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27970() {
   return (neuron0x3a12810()*-1.04845);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a279b0() {
   return (neuron0x3a12b50()*-0.0425979);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a279f0() {
   return (neuron0x3a12e90()*1.57522);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27a30() {
   return (neuron0x3a131d0()*0.11416);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27a70() {
   return (neuron0x3a13510()*0.0203086);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27ab0() {
   return (neuron0x3a13850()*-0.0016454);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27af0() {
   return (neuron0x3a13b90()*0.00713461);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27b30() {
   return (neuron0x3a13ed0()*-0.0636632);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27b70() {
   return (neuron0x3a14210()*0.0850904);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27bb0() {
   return (neuron0x3a14550()*-0.0109113);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27bf0() {
   return (neuron0x3a14890()*-0.0232153);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27c30() {
   return (neuron0x3a14bd0()*-0.025727);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27c70() {
   return (neuron0x3a14f10()*0.00362674);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27cb0() {
   return (neuron0x3a15250()*0.0320876);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27cf0() {
   return (neuron0x3a15590()*0.0793638);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27d30() {
   return (neuron0x3a158d0()*0.0175441);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a277c0() {
   return (neuron0x3a15c10()*-0.0342349);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27800() {
   return (neuron0x3a16170()*-0.0289335);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27e80() {
   return (neuron0x3a16390()*0.0214136);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27ec0() {
   return (neuron0x3a166d0()*-0.02831);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27f00() {
   return (neuron0x3a16a10()*0.0068442);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27f40() {
   return (neuron0x3a16d50()*0.0375339);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27f80() {
   return (neuron0x3a17090()*-0.0425583);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27fc0() {
   return (neuron0x3a173d0()*0.977752);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a39e90() {
   return (neuron0x3a12810()*0.520388);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a39ed0() {
   return (neuron0x3a12b50()*-0.269554);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a39f10() {
   return (neuron0x3a12e90()*-0.256251);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a39f50() {
   return (neuron0x3a131d0()*-0.0856002);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a39f90() {
   return (neuron0x3a13510()*0.303105);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a39fd0() {
   return (neuron0x3a13850()*0.806792);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a010() {
   return (neuron0x3a13b90()*-0.576178);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a050() {
   return (neuron0x3a13ed0()*-0.0210011);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a090() {
   return (neuron0x3a14210()*0.0426533);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a0d0() {
   return (neuron0x3a14550()*0.185948);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a110() {
   return (neuron0x3a14890()*0.298311);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a150() {
   return (neuron0x3a14bd0()*-0.5514);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a190() {
   return (neuron0x3a14f10()*-0.640096);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a1d0() {
   return (neuron0x3a15250()*0.0972419);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a210() {
   return (neuron0x3a15590()*-0.382675);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a250() {
   return (neuron0x3a158d0()*-0.0523754);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28000() {
   return (neuron0x3a15c10()*0.304222);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28040() {
   return (neuron0x3a16170()*-0.361048);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a3a0() {
   return (neuron0x3a16390()*-0.0630653);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a3e0() {
   return (neuron0x3a166d0()*0.0472684);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a420() {
   return (neuron0x3a16a10()*0.190834);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a460() {
   return (neuron0x3a16d50()*-0.264839);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a4a0() {
   return (neuron0x3a17090()*-0.599044);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a4e0() {
   return (neuron0x3a173d0()*0.167465);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a860() {
   return (neuron0x3a12810()*-0.142521);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a8a0() {
   return (neuron0x3a12b50()*-0.427861);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a8e0() {
   return (neuron0x3a12e90()*-0.663826);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a920() {
   return (neuron0x3a131d0()*0.615723);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a960() {
   return (neuron0x3a13510()*-0.0260513);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a9a0() {
   return (neuron0x3a13850()*-0.12555);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a9e0() {
   return (neuron0x3a13b90()*-0.0105679);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3aa20() {
   return (neuron0x3a13ed0()*-0.189396);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3aa60() {
   return (neuron0x3a14210()*-0.164326);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3aaa0() {
   return (neuron0x3a14550()*-0.443527);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3aae0() {
   return (neuron0x3a14890()*-0.114266);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3ab20() {
   return (neuron0x3a14bd0()*0.0674734);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3ab60() {
   return (neuron0x3a14f10()*-0.960483);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3aba0() {
   return (neuron0x3a15250()*-0.123682);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3abe0() {
   return (neuron0x3a15590()*-0.0574953);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3ac20() {
   return (neuron0x3a158d0()*0.083442);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a6b0() {
   return (neuron0x3a15c10()*0.0402872);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a6f0() {
   return (neuron0x3a16170()*0.0649387);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3ad70() {
   return (neuron0x3a16390()*-0.0160935);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3adb0() {
   return (neuron0x3a166d0()*0.0179812);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3adf0() {
   return (neuron0x3a16a10()*-0.00354275);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3ae30() {
   return (neuron0x3a16d50()*-0.16648);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3ae70() {
   return (neuron0x3a17090()*0.0706174);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3aeb0() {
   return (neuron0x3a173d0()*1.54367);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b230() {
   return (neuron0x3a12810()*1.20074);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b270() {
   return (neuron0x3a12b50()*-0.01296);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b2b0() {
   return (neuron0x3a12e90()*-0.714917);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b2f0() {
   return (neuron0x3a131d0()*-0.0917387);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b330() {
   return (neuron0x3a13510()*0.0106573);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b370() {
   return (neuron0x3a13850()*-0.00455454);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b3b0() {
   return (neuron0x3a13b90()*-0.0470892);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b3f0() {
   return (neuron0x3a13ed0()*-0.0621291);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b430() {
   return (neuron0x3a14210()*-0.0688706);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b470() {
   return (neuron0x3a14550()*0.0671174);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b4b0() {
   return (neuron0x3a14890()*0.110966);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b4f0() {
   return (neuron0x3a14bd0()*-0.0241851);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b530() {
   return (neuron0x3a14f10()*0.33866);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b570() {
   return (neuron0x3a15250()*-0.0905709);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b5b0() {
   return (neuron0x3a15590()*-0.00422615);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b5f0() {
   return (neuron0x3a158d0()*0.00444691);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b080() {
   return (neuron0x3a15c10()*0.0744273);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b0c0() {
   return (neuron0x3a16170()*0.0101644);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b740() {
   return (neuron0x3a16390()*0.0044849);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b780() {
   return (neuron0x3a166d0()*0.0473759);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b7c0() {
   return (neuron0x3a16a10()*-0.0436187);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b800() {
   return (neuron0x3a16d50()*-0.0866564);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b840() {
   return (neuron0x3a17090()*0.0518376);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b880() {
   return (neuron0x3a173d0()*1.16079);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3bc00() {
   return (neuron0x3a12810()*0.0679563);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3bc40() {
   return (neuron0x3a12b50()*-0.0971452);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3bc80() {
   return (neuron0x3a12e90()*0.4109);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3bcc0() {
   return (neuron0x3a131d0()*0.0115687);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3bd00() {
   return (neuron0x3a13510()*-0.010339);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3bd40() {
   return (neuron0x3a13850()*-0.303499);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3bd80() {
   return (neuron0x3a13b90()*0.128644);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3bdc0() {
   return (neuron0x3a13ed0()*0.227049);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3be00() {
   return (neuron0x3a14210()*-0.276797);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3be40() {
   return (neuron0x3a14550()*0.0335351);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3be80() {
   return (neuron0x3a14890()*0.936911);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3bec0() {
   return (neuron0x3a14bd0()*-0.183772);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3bf00() {
   return (neuron0x3a14f10()*0.296721);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3bf40() {
   return (neuron0x3a15250()*0.198252);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3bf80() {
   return (neuron0x3a15590()*-0.317203);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3bfc0() {
   return (neuron0x3a158d0()*-0.077975);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3ba50() {
   return (neuron0x3a15c10()*-0.272104);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3ba90() {
   return (neuron0x3a16170()*-0.278627);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3c110() {
   return (neuron0x3a16390()*0.508182);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3c150() {
   return (neuron0x3a166d0()*0.514898);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3c190() {
   return (neuron0x3a16a10()*-0.182884);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3c1d0() {
   return (neuron0x3a16d50()*-0.172434);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3c210() {
   return (neuron0x3a17090()*-0.295584);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3c250() {
   return (neuron0x3a173d0()*-0.0827126);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37dc160() {
   return (neuron0x3a17840()*0.0803104);
}

double NNfunction_ns_chiPlus2_cL::synapse0x37dc1a0() {
   return (neuron0x3a18190()*0.937397);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19d00() {
   return (neuron0x3a18c70()*0.0369133);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a19d40() {
   return (neuron0x3a18710()*-0.905505);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a6d0() {
   return (neuron0x3a19a50()*0.608595);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1a710() {
   return (neuron0x3a1a420()*-1.96007);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b4a0() {
   return (neuron0x3a1b1f0()*0.434222);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1b4e0() {
   return (neuron0x3a1bbc0()*0.72189);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1be70() {
   return (neuron0x3a1c590()*-0.656651);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1beb0() {
   return (neuron0x3a1d070()*-0.923406);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c840() {
   return (neuron0x3a1da40()*1.40291);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1c880() {
   return (neuron0x3a1ab20()*-0.306418);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d320() {
   return (neuron0x3a1f5f0()*-0.457317);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1d360() {
   return (neuron0x3a1ffc0()*0.143819);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1dcf0() {
   return (neuron0x3a20990()*-0.761209);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1dd30() {
   return (neuron0x3a21360()*-0.414936);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1add0() {
   return (neuron0x3a23170()*1.98232);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1ae10() {
   return (neuron0x3a23450()*-0.28304);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1f8a0() {
   return (neuron0x3a23e20()*0.155312);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1f8e0() {
   return (neuron0x3a247f0()*-0.477647);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20270() {
   return (neuron0x3a251c0()*-0.569135);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a202b0() {
   return (neuron0x3a25b90()*-0.0368229);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20c40() {
   return (neuron0x3a1e6e0()*0.737647);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a20c80() {
   return (neuron0x3a1f0b0()*-0.886539);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a21610() {
   return (neuron0x3a28920()*-0.350427);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a21650() {
   return (neuron0x3a292f0()*0.316365);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a157b0() {
   return (neuron0x3a29cc0()*0.251242);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a157f0() {
   return (neuron0x3a2a690()*0.928365);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23700() {
   return (neuron0x3a2b060()*-1.16791);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a23740() {
   return (neuron0x3a2ba30()*-0.710234);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a240d0() {
   return (neuron0x3a2c400()*0.803665);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24110() {
   return (neuron0x3a2cdd0()*-0.384415);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24aa0() {
   return (neuron0x3a22e60()*-0.317067);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a24ae0() {
   return (neuron0x3a2f9b0()*0.175518);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25470() {
   return (neuron0x3a30380()*0.579586);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a254b0() {
   return (neuron0x3a30d50()*-0.619023);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25e40() {
   return (neuron0x3a31720()*0.350837);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a25e80() {
   return (neuron0x3a320f0()*0.117898);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e990() {
   return (neuron0x3a32ac0()*0.298603);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a1e9d0() {
   return (neuron0x3a33490()*-0.941576);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28240() {
   return (neuron0x3a33e60()*-0.863327);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28280() {
   return (neuron0x3a34a40()*0.0660631);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28bd0() {
   return (neuron0x3a35410()*-0.627344);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a28c10() {
   return (neuron0x3a26290()*0.0233925);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a295a0() {
   return (neuron0x3a26c60()*-0.124902);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a295e0() {
   return (neuron0x3a27630()*-0.0557767);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29f70() {
   return (neuron0x3a39c70()*-0.760359);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a29fb0() {
   return (neuron0x3a3a520()*-1.46227);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a940() {
   return (neuron0x3a3aef0()*0.138849);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2a980() {
   return (neuron0x3a3b8c0()*0.0403094);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2d080() {
   return (neuron0x3a17840()*0.760433);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2d0c0() {
   return (neuron0x3a18190()*3.34394);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a22640() {
   return (neuron0x3a18c70()*0.714237);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a22680() {
   return (neuron0x3a18710()*0.951828);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2fc60() {
   return (neuron0x3a19a50()*1.83705);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2fca0() {
   return (neuron0x3a1a420()*-1.00644);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30630() {
   return (neuron0x3a1b1f0()*0.820622);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a30670() {
   return (neuron0x3a1bbc0()*-0.958709);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31000() {
   return (neuron0x3a1c590()*-0.990259);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31040() {
   return (neuron0x3a1d070()*-1.25132);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a319d0() {
   return (neuron0x3a1da40()*0.379173);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a31a10() {
   return (neuron0x3a1ab20()*0.91887);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a323a0() {
   return (neuron0x3a1f5f0()*0.228429);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a323e0() {
   return (neuron0x3a1ffc0()*-0.202974);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32d70() {
   return (neuron0x3a20990()*-3.00342);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a32db0() {
   return (neuron0x3a21360()*-0.409802);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33740() {
   return (neuron0x3a23170()*-1.81627);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a33780() {
   return (neuron0x3a23450()*0.980305);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34110() {
   return (neuron0x3a23e20()*0.917835);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34150() {
   return (neuron0x3a247f0()*0.660694);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34cf0() {
   return (neuron0x3a251c0()*-0.98153);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a34d30() {
   return (neuron0x3a25b90()*-1.3369);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a356c0() {
   return (neuron0x3a1e6e0()*0.994597);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a35700() {
   return (neuron0x3a1f0b0()*0.845474);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26540() {
   return (neuron0x3a28920()*0.566374);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26580() {
   return (neuron0x3a292f0()*-1.19838);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26f10() {
   return (neuron0x3a29cc0()*1.01689);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a26f50() {
   return (neuron0x3a2a690()*-0.677501);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a278e0() {
   return (neuron0x3a2b060()*0.324282);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a27920() {
   return (neuron0x3a2ba30()*-1.35916);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a39e00() {
   return (neuron0x3a2c400()*0.701033);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a39e40() {
   return (neuron0x3a2cdd0()*1.14778);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a7d0() {
   return (neuron0x3a22e60()*-1.28999);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3a810() {
   return (neuron0x3a2f9b0()*3.28964);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b1a0() {
   return (neuron0x3a30380()*0.530321);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3b1e0() {
   return (neuron0x3a30d50()*-3.19761);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3bb70() {
   return (neuron0x3a31720()*0.187029);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3bbb0() {
   return (neuron0x3a320f0()*-1.20531);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a17a60() {
   return (neuron0x3a32ac0()*0.156446);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a17aa0() {
   return (neuron0x3a33490()*0.734861);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b310() {
   return (neuron0x3a33e60()*-1.44344);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a2b350() {
   return (neuron0x3a34a40()*0.701039);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3c290() {
   return (neuron0x3a35410()*-2.25142);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3c2d0() {
   return (neuron0x3a26290()*2.38853);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3c310() {
   return (neuron0x3a26c60()*1.47516);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a3c350() {
   return (neuron0x3a27630()*1.10964);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43200() {
   return (neuron0x3a39c70()*0.820846);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43240() {
   return (neuron0x3a3a520()*1.22946);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43280() {
   return (neuron0x3a3aef0()*0.417868);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a432c0() {
   return (neuron0x3a3b8c0()*0.904657);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43640() {
   return (neuron0x3a17840()*-0.763919);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43680() {
   return (neuron0x3a18190()*0.193258);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a436c0() {
   return (neuron0x3a18c70()*-0.165927);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43700() {
   return (neuron0x3a18710()*-0.917671);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43740() {
   return (neuron0x3a19a50()*-0.812694);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43780() {
   return (neuron0x3a1a420()*0.424918);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a437c0() {
   return (neuron0x3a1b1f0()*0.0988154);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43800() {
   return (neuron0x3a1bbc0()*-0.934927);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43840() {
   return (neuron0x3a1c590()*0.211728);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43880() {
   return (neuron0x3a1d070()*0.777997);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a438c0() {
   return (neuron0x3a1da40()*-0.430406);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43900() {
   return (neuron0x3a1ab20()*0.804057);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43940() {
   return (neuron0x3a1f5f0()*-1.19406);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43980() {
   return (neuron0x3a1ffc0()*0.607342);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a439c0() {
   return (neuron0x3a20990()*-1.484);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43a00() {
   return (neuron0x3a21360()*0.0262379);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43490() {
   return (neuron0x3a23170()*-1.77306);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a434d0() {
   return (neuron0x3a23450()*-0.597609);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43b50() {
   return (neuron0x3a23e20()*0.217277);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43b90() {
   return (neuron0x3a247f0()*-0.906914);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43bd0() {
   return (neuron0x3a251c0()*-0.146697);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43c10() {
   return (neuron0x3a25b90()*0.671158);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43c50() {
   return (neuron0x3a1e6e0()*-0.818623);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43c90() {
   return (neuron0x3a1f0b0()*-0.686686);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43cd0() {
   return (neuron0x3a28920()*0.55763);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43d10() {
   return (neuron0x3a292f0()*1.08485);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43d50() {
   return (neuron0x3a29cc0()*-1.25092);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43d90() {
   return (neuron0x3a2a690()*0.57148);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43dd0() {
   return (neuron0x3a2b060()*-0.476721);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43e10() {
   return (neuron0x3a2ba30()*0.287259);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43e50() {
   return (neuron0x3a2c400()*-0.772055);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43e90() {
   return (neuron0x3a2cdd0()*-0.96344);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43a40() {
   return (neuron0x3a22e60()*0.0338378);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43a80() {
   return (neuron0x3a2f9b0()*-0.896391);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43ac0() {
   return (neuron0x3a30380()*-1.04932);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a43b00() {
   return (neuron0x3a30d50()*-1.02268);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a440e0() {
   return (neuron0x3a31720()*-0.572585);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44120() {
   return (neuron0x3a320f0()*-1.1385);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44160() {
   return (neuron0x3a32ac0()*-0.604233);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a441a0() {
   return (neuron0x3a33490()*0.229879);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a441e0() {
   return (neuron0x3a33e60()*-0.923527);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44220() {
   return (neuron0x3a34a40()*0.255921);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44260() {
   return (neuron0x3a35410()*1.74271);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a442a0() {
   return (neuron0x3a26290()*-0.468305);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a442e0() {
   return (neuron0x3a26c60()*-0.704853);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44320() {
   return (neuron0x3a27630()*-1.15734);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44360() {
   return (neuron0x3a39c70()*-0.121721);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a443a0() {
   return (neuron0x3a3a520()*-0.685661);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a443e0() {
   return (neuron0x3a3aef0()*-0.447983);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44420() {
   return (neuron0x3a3b8c0()*-0.28187);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a447a0() {
   return (neuron0x3a17840()*0.051714);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a447e0() {
   return (neuron0x3a18190()*-0.85753);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44820() {
   return (neuron0x3a18c70()*0.084554);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44860() {
   return (neuron0x3a18710()*-0.0445019);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a448a0() {
   return (neuron0x3a19a50()*0.302212);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a448e0() {
   return (neuron0x3a1a420()*0.327008);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44920() {
   return (neuron0x3a1b1f0()*0.913709);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44960() {
   return (neuron0x3a1bbc0()*0.688824);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a449a0() {
   return (neuron0x3a1c590()*-0.0604225);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a449e0() {
   return (neuron0x3a1d070()*0.0655209);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44a20() {
   return (neuron0x3a1da40()*0.0342406);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44a60() {
   return (neuron0x3a1ab20()*0.0637842);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44aa0() {
   return (neuron0x3a1f5f0()*-1.06185);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44ae0() {
   return (neuron0x3a1ffc0()*0.324458);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44b20() {
   return (neuron0x3a20990()*0.310308);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44b60() {
   return (neuron0x3a21360()*-0.526679);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a445f0() {
   return (neuron0x3a23170()*-0.604661);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44630() {
   return (neuron0x3a23450()*0.0673902);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44cb0() {
   return (neuron0x3a23e20()*-0.0233685);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44cf0() {
   return (neuron0x3a247f0()*1.44545);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44d30() {
   return (neuron0x3a251c0()*0.951933);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44d70() {
   return (neuron0x3a25b90()*-0.207182);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44db0() {
   return (neuron0x3a1e6e0()*0.36048);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44df0() {
   return (neuron0x3a1f0b0()*-0.0184677);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44e30() {
   return (neuron0x3a28920()*0.0413514);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44e70() {
   return (neuron0x3a292f0()*-0.0341687);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44eb0() {
   return (neuron0x3a29cc0()*-0.0585158);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44ef0() {
   return (neuron0x3a2a690()*-0.326445);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44f30() {
   return (neuron0x3a2b060()*-2.00187);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44f70() {
   return (neuron0x3a2ba30()*0.527255);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44fb0() {
   return (neuron0x3a2c400()*0.0390427);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44ff0() {
   return (neuron0x3a2cdd0()*0.0564066);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44ba0() {
   return (neuron0x3a22e60()*-0.0693015);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44be0() {
   return (neuron0x3a2f9b0()*-0.937772);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44c20() {
   return (neuron0x3a30380()*0.037693);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a44c60() {
   return (neuron0x3a30d50()*-0.946366);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45240() {
   return (neuron0x3a31720()*0.034754);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45280() {
   return (neuron0x3a320f0()*-1.12546);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a452c0() {
   return (neuron0x3a32ac0()*-1.00937);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45300() {
   return (neuron0x3a33490()*-0.0866042);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45340() {
   return (neuron0x3a33e60()*-0.553437);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45380() {
   return (neuron0x3a34a40()*-1.19975);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a453c0() {
   return (neuron0x3a35410()*1.2998);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45400() {
   return (neuron0x3a26290()*-0.903401);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45440() {
   return (neuron0x3a26c60()*0.520247);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45480() {
   return (neuron0x3a27630()*-1.08039);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a454c0() {
   return (neuron0x3a39c70()*0.0438723);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45500() {
   return (neuron0x3a3a520()*0.165074);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45540() {
   return (neuron0x3a3aef0()*-0.547705);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45580() {
   return (neuron0x3a3b8c0()*0.0906737);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45900() {
   return (neuron0x3a17840()*-0.0130277);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45940() {
   return (neuron0x3a18190()*3.46775);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45980() {
   return (neuron0x3a18c70()*-0.0189031);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a459c0() {
   return (neuron0x3a18710()*0.0221902);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45a00() {
   return (neuron0x3a19a50()*0.571653);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45a40() {
   return (neuron0x3a1a420()*-6.44752);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45a80() {
   return (neuron0x3a1b1f0()*1.82175);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45ac0() {
   return (neuron0x3a1bbc0()*-2.1999);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45b00() {
   return (neuron0x3a1c590()*0.0106281);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45b40() {
   return (neuron0x3a1d070()*-0.0135982);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45b80() {
   return (neuron0x3a1da40()*-0.00672021);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45bc0() {
   return (neuron0x3a1ab20()*-0.0285866);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45c00() {
   return (neuron0x3a1f5f0()*0.185511);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45c40() {
   return (neuron0x3a1ffc0()*3.44572);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45c80() {
   return (neuron0x3a20990()*-0.10728);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45cc0() {
   return (neuron0x3a21360()*0.308244);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45750() {
   return (neuron0x3a23170()*7.58077);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45790() {
   return (neuron0x3a23450()*-0.0196376);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45e10() {
   return (neuron0x3a23e20()*0.0135281);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45e50() {
   return (neuron0x3a247f0()*-1.66838);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45e90() {
   return (neuron0x3a251c0()*-1.50026);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45ed0() {
   return (neuron0x3a25b90()*0.0489868);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45f10() {
   return (neuron0x3a1e6e0()*1.11815);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45f50() {
   return (neuron0x3a1f0b0()*0.00870015);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45f90() {
   return (neuron0x3a28920()*-0.0134323);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45fd0() {
   return (neuron0x3a292f0()*0.00433449);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a46010() {
   return (neuron0x3a29cc0()*0.016246);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a46050() {
   return (neuron0x3a2a690()*0.100736);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a46090() {
   return (neuron0x3a2b060()*0.623543);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a460d0() {
   return (neuron0x3a2ba30()*-0.311885);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a46110() {
   return (neuron0x3a2c400()*-0.0109587);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a46150() {
   return (neuron0x3a2cdd0()*-0.00904934);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45d00() {
   return (neuron0x3a22e60()*-0.0142058);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45d40() {
   return (neuron0x3a2f9b0()*3.4143);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45d80() {
   return (neuron0x3a30380()*-0.000681823);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a45dc0() {
   return (neuron0x3a30d50()*0.127448);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a463a0() {
   return (neuron0x3a31720()*-0.000981149);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a463e0() {
   return (neuron0x3a320f0()*-2.38538);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a46420() {
   return (neuron0x3a32ac0()*1.29765);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a46460() {
   return (neuron0x3a33490()*0.0720411);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a464a0() {
   return (neuron0x3a33e60()*-0.33124);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a464e0() {
   return (neuron0x3a34a40()*0.395007);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a46520() {
   return (neuron0x3a35410()*-0.534708);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a46560() {
   return (neuron0x3a26290()*2.21045);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a465a0() {
   return (neuron0x3a26c60()*1.15412);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a465e0() {
   return (neuron0x3a27630()*0.335398);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a46620() {
   return (neuron0x3a39c70()*-0.00101766);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a46660() {
   return (neuron0x3a3a520()*-0.0371728);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a466a0() {
   return (neuron0x3a3aef0()*0.175206);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a466e0() {
   return (neuron0x3a3b8c0()*-0.0321534);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a46940() {
   return (neuron0x3a42ac0()*-0.224716);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a46980() {
   return (neuron0x3a42e60()*-2.70281);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a469c0() {
   return (neuron0x3a43300()*-2.34365);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a46a00() {
   return (neuron0x3a44460()*-3.10289);
}

double NNfunction_ns_chiPlus2_cL::synapse0x3a46a40() {
   return (neuron0x3a455c0()*-10.5946);
}

