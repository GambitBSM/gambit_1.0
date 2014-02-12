#include "NNfunction_ss_cLuR.h"
#include <cmath>

double NNfunction_ss_cLuR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4361)/15.3002;
   input1 = (in1 - -3.27233)/1157.57;
   input2 = (in2 - 653.224)/620.357;
   input3 = (in3 - -52.1036)/796.439;
   input4 = (in4 - 1058.46)/956.472;
   input5 = (in5 - 897.309)/952.815;
   input6 = (in6 - 905.52)/954.104;
   input7 = (in7 - 925.497)/939.288;
   input8 = (in8 - 906.378)/956.302;
   input9 = (in9 - 886.06)/943.571;
   input10 = (in10 - 976.944)/939.679;
   input11 = (in11 - 699.691)/844.479;
   input12 = (in12 - 384.768)/393.581;
   input13 = (in13 - 500.038)/512.299;
   input14 = (in14 - 417.882)/417.864;
   input15 = (in15 - 718.537)/818.72;
   input16 = (in16 - 535.161)/564.556;
   input17 = (in17 - 748.111)/882.629;
   input18 = (in18 - 739.706)/890.597;
   input19 = (in19 - 788.749)/862.437;
   input20 = (in20 - -6.32169)/484.82;
   input21 = (in21 - -0.383564)/1158.26;
   input22 = (in22 - 2.78338)/1199.38;
   input23 = (in23 - -197.109)/605.199;
   switch(index) {
     case 0:
         return neuron0x30584a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLuR::Value(int index, double* input) {
   input0 = (input[0] - 23.4361)/15.3002;
   input1 = (input[1] - -3.27233)/1157.57;
   input2 = (input[2] - 653.224)/620.357;
   input3 = (input[3] - -52.1036)/796.439;
   input4 = (input[4] - 1058.46)/956.472;
   input5 = (input[5] - 897.309)/952.815;
   input6 = (input[6] - 905.52)/954.104;
   input7 = (input[7] - 925.497)/939.288;
   input8 = (input[8] - 906.378)/956.302;
   input9 = (input[9] - 886.06)/943.571;
   input10 = (input[10] - 976.944)/939.679;
   input11 = (input[11] - 699.691)/844.479;
   input12 = (input[12] - 384.768)/393.581;
   input13 = (input[13] - 500.038)/512.299;
   input14 = (input[14] - 417.882)/417.864;
   input15 = (input[15] - 718.537)/818.72;
   input16 = (input[16] - 535.161)/564.556;
   input17 = (input[17] - 748.111)/882.629;
   input18 = (input[18] - 739.706)/890.597;
   input19 = (input[19] - 788.749)/862.437;
   input20 = (input[20] - -6.32169)/484.82;
   input21 = (input[21] - -0.383564)/1158.26;
   input22 = (input[22] - 2.78338)/1199.38;
   input23 = (input[23] - -197.109)/605.199;
   switch(index) {
     case 0:
         return neuron0x30584a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLuR::neuron0x3024560() {
   return input0;
}

double NNfunction_ss_cLuR::neuron0x30248a0() {
   return input1;
}

double NNfunction_ss_cLuR::neuron0x3024be0() {
   return input2;
}

double NNfunction_ss_cLuR::neuron0x3024f20() {
   return input3;
}

double NNfunction_ss_cLuR::neuron0x3025260() {
   return input4;
}

double NNfunction_ss_cLuR::neuron0x30255a0() {
   return input5;
}

double NNfunction_ss_cLuR::neuron0x30258e0() {
   return input6;
}

double NNfunction_ss_cLuR::neuron0x3025c20() {
   return input7;
}

double NNfunction_ss_cLuR::neuron0x3025f60() {
   return input8;
}

double NNfunction_ss_cLuR::neuron0x30262a0() {
   return input9;
}

double NNfunction_ss_cLuR::neuron0x30265e0() {
   return input10;
}

double NNfunction_ss_cLuR::neuron0x3026920() {
   return input11;
}

double NNfunction_ss_cLuR::neuron0x3026c60() {
   return input12;
}

double NNfunction_ss_cLuR::neuron0x3026fa0() {
   return input13;
}

double NNfunction_ss_cLuR::neuron0x30272e0() {
   return input14;
}

double NNfunction_ss_cLuR::neuron0x3027620() {
   return input15;
}

double NNfunction_ss_cLuR::neuron0x3027960() {
   return input16;
}

double NNfunction_ss_cLuR::neuron0x3027ec0() {
   return input17;
}

double NNfunction_ss_cLuR::neuron0x30280e0() {
   return input18;
}

double NNfunction_ss_cLuR::neuron0x3028420() {
   return input19;
}

double NNfunction_ss_cLuR::neuron0x3028760() {
   return input20;
}

double NNfunction_ss_cLuR::neuron0x3028aa0() {
   return input21;
}

double NNfunction_ss_cLuR::neuron0x3028de0() {
   return input22;
}

double NNfunction_ss_cLuR::neuron0x3029120() {
   return input23;
}

double NNfunction_ss_cLuR::input0x30295c0() {
   double input = -0.427621;
   input += synapse0x2de43d0();
   input += synapse0x3024420();
   input += synapse0x3024460();
   input += synapse0x3029870();
   input += synapse0x30298b0();
   input += synapse0x30298f0();
   input += synapse0x3029930();
   input += synapse0x3029970();
   input += synapse0x30299b0();
   input += synapse0x30299f0();
   input += synapse0x3029a30();
   input += synapse0x3029a70();
   input += synapse0x3029ab0();
   input += synapse0x3029af0();
   input += synapse0x3029b30();
   input += synapse0x3029b70();
   input += synapse0x3024390();
   input += synapse0x30243d0();
   input += synapse0x2dd5c70();
   input += synapse0x2dd5cb0();
   input += synapse0x3029dd0();
   input += synapse0x3029e10();
   input += synapse0x3029e50();
   input += synapse0x3029e90();
   return input;
}

double NNfunction_ss_cLuR::neuron0x30295c0() {
   double input = input0x30295c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3029ed0() {
   double input = 0.892515;
   input += synapse0x302a210();
   input += synapse0x302a250();
   input += synapse0x302a290();
   input += synapse0x302a2d0();
   input += synapse0x302a310();
   input += synapse0x302a350();
   input += synapse0x302a390();
   input += synapse0x302a3d0();
   input += synapse0x302a410();
   input += synapse0x3029cc0();
   input += synapse0x3029d00();
   input += synapse0x3029d40();
   input += synapse0x3029d80();
   input += synapse0x302a660();
   input += synapse0x302a6a0();
   input += synapse0x302a6e0();
   input += synapse0x302a060();
   input += synapse0x302a0a0();
   input += synapse0x302a830();
   input += synapse0x302a870();
   input += synapse0x302a8b0();
   input += synapse0x302a8f0();
   input += synapse0x302a930();
   input += synapse0x302a970();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3029ed0() {
   double input = input0x3029ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x302a9b0() {
   double input = 2.5626;
   input += synapse0x302acf0();
   input += synapse0x302ad30();
   input += synapse0x302ad70();
   input += synapse0x302adb0();
   input += synapse0x302adf0();
   input += synapse0x302ae30();
   input += synapse0x302ae70();
   input += synapse0x302aeb0();
   input += synapse0x302aef0();
   input += synapse0x302af30();
   input += synapse0x302af70();
   input += synapse0x302afb0();
   input += synapse0x302aff0();
   input += synapse0x302b030();
   input += synapse0x302b070();
   input += synapse0x302b0b0();
   input += synapse0x302ab40();
   input += synapse0x302ab80();
   input += synapse0x2de3ac0();
   input += synapse0x2de3b00();
   input += synapse0x30135f0();
   input += synapse0x3013630();
   input += synapse0x3013670();
   input += synapse0x30244a0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x302a9b0() {
   double input = input0x302a9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x2de4240() {
   double input = -0.481093;
   input += synapse0x302a600();
   input += synapse0x30244e0();
   input += synapse0x3024520();
   input += synapse0x302b200();
   input += synapse0x302b240();
   input += synapse0x302b280();
   input += synapse0x302b2c0();
   input += synapse0x302b300();
   input += synapse0x302b340();
   input += synapse0x302b380();
   input += synapse0x302b3c0();
   input += synapse0x302b400();
   input += synapse0x302b440();
   input += synapse0x302b480();
   input += synapse0x302b4c0();
   input += synapse0x302b500();
   input += synapse0x302a450();
   input += synapse0x302a490();
   input += synapse0x302b650();
   input += synapse0x302b690();
   input += synapse0x302b6d0();
   input += synapse0x302b710();
   input += synapse0x302b750();
   input += synapse0x302b790();
   return input;
}

double NNfunction_ss_cLuR::neuron0x2de4240() {
   double input = input0x2de4240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x302b7d0() {
   double input = 2.33513;
   input += synapse0x302bb10();
   input += synapse0x302bb50();
   input += synapse0x302bb90();
   input += synapse0x302bbd0();
   input += synapse0x302bc10();
   input += synapse0x302bc50();
   input += synapse0x302bc90();
   input += synapse0x302bcd0();
   input += synapse0x302bd10();
   input += synapse0x302bd50();
   input += synapse0x302bd90();
   input += synapse0x302bdd0();
   input += synapse0x302be10();
   input += synapse0x302be50();
   input += synapse0x302be90();
   input += synapse0x302bed0();
   input += synapse0x302b960();
   input += synapse0x302b9a0();
   input += synapse0x302c020();
   input += synapse0x302c060();
   input += synapse0x302c0a0();
   input += synapse0x302c0e0();
   input += synapse0x302c120();
   input += synapse0x302c160();
   return input;
}

double NNfunction_ss_cLuR::neuron0x302b7d0() {
   double input = input0x302b7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x302c1a0() {
   double input = 0.554727;
   input += synapse0x302c4e0();
   input += synapse0x302c520();
   input += synapse0x302c560();
   input += synapse0x302c5a0();
   input += synapse0x302c5e0();
   input += synapse0x302c620();
   input += synapse0x302c660();
   input += synapse0x302c6a0();
   input += synapse0x302c6e0();
   input += synapse0x2de3e30();
   input += synapse0x2de3e70();
   input += synapse0x2de3eb0();
   input += synapse0x2de3ef0();
   input += synapse0x2de3f30();
   input += synapse0x2de3f70();
   input += synapse0x2de3fb0();
   input += synapse0x302c330();
   input += synapse0x302c370();
   input += synapse0x2de4100();
   input += synapse0x2de4140();
   input += synapse0x2de4180();
   input += synapse0x2de41c0();
   input += synapse0x2de4200();
   input += synapse0x302cf30();
   return input;
}

double NNfunction_ss_cLuR::neuron0x302c1a0() {
   double input = input0x302c1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x302cf70() {
   double input = 0.419691;
   input += synapse0x302d2b0();
   input += synapse0x302d2f0();
   input += synapse0x302d330();
   input += synapse0x302d370();
   input += synapse0x302d3b0();
   input += synapse0x302d3f0();
   input += synapse0x302d430();
   input += synapse0x302d470();
   input += synapse0x302d4b0();
   input += synapse0x302d4f0();
   input += synapse0x302d530();
   input += synapse0x302d570();
   input += synapse0x302d5b0();
   input += synapse0x302d5f0();
   input += synapse0x302d630();
   input += synapse0x302d670();
   input += synapse0x302d100();
   input += synapse0x302d140();
   input += synapse0x302d7c0();
   input += synapse0x302d800();
   input += synapse0x302d840();
   input += synapse0x302d880();
   input += synapse0x302d8c0();
   input += synapse0x302d900();
   return input;
}

double NNfunction_ss_cLuR::neuron0x302cf70() {
   double input = input0x302cf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x302d940() {
   double input = 0.744826;
   input += synapse0x302dc80();
   input += synapse0x302dcc0();
   input += synapse0x302dd00();
   input += synapse0x302dd40();
   input += synapse0x302dd80();
   input += synapse0x302ddc0();
   input += synapse0x302de00();
   input += synapse0x302de40();
   input += synapse0x302de80();
   input += synapse0x302dec0();
   input += synapse0x302df00();
   input += synapse0x302df40();
   input += synapse0x302df80();
   input += synapse0x302dfc0();
   input += synapse0x302e000();
   input += synapse0x302e040();
   input += synapse0x302dad0();
   input += synapse0x302db10();
   input += synapse0x302e190();
   input += synapse0x302e1d0();
   input += synapse0x302e210();
   input += synapse0x302e250();
   input += synapse0x302e290();
   input += synapse0x302e2d0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x302d940() {
   double input = input0x302d940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x302e310() {
   double input = 0.996079;
   input += synapse0x3027db0();
   input += synapse0x3027df0();
   input += synapse0x3027e30();
   input += synapse0x3027e70();
   input += synapse0x302e860();
   input += synapse0x302e8a0();
   input += synapse0x302e8e0();
   input += synapse0x302e920();
   input += synapse0x302e960();
   input += synapse0x302e9a0();
   input += synapse0x302e9e0();
   input += synapse0x302ea20();
   input += synapse0x302ea60();
   input += synapse0x302eaa0();
   input += synapse0x302eae0();
   input += synapse0x302eb20();
   input += synapse0x302e4a0();
   input += synapse0x302e4e0();
   input += synapse0x302ec70();
   input += synapse0x302ecb0();
   input += synapse0x302ecf0();
   input += synapse0x302ed30();
   input += synapse0x302ed70();
   input += synapse0x302edb0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x302e310() {
   double input = input0x302e310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x302edf0() {
   double input = -0.650552;
   input += synapse0x302f130();
   input += synapse0x302f170();
   input += synapse0x302f1b0();
   input += synapse0x302f1f0();
   input += synapse0x302f230();
   input += synapse0x302f270();
   input += synapse0x302f2b0();
   input += synapse0x302f2f0();
   input += synapse0x302f330();
   input += synapse0x302f370();
   input += synapse0x302f3b0();
   input += synapse0x302f3f0();
   input += synapse0x302f430();
   input += synapse0x302f470();
   input += synapse0x302f4b0();
   input += synapse0x302f4f0();
   input += synapse0x302ef80();
   input += synapse0x302efc0();
   input += synapse0x302f640();
   input += synapse0x302f680();
   input += synapse0x302f6c0();
   input += synapse0x302f700();
   input += synapse0x302f740();
   input += synapse0x302f780();
   return input;
}

double NNfunction_ss_cLuR::neuron0x302edf0() {
   double input = input0x302edf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x302f7c0() {
   double input = 0.0652536;
   input += synapse0x302fb00();
   input += synapse0x302fb40();
   input += synapse0x302fb80();
   input += synapse0x302fbc0();
   input += synapse0x302fc00();
   input += synapse0x302fc40();
   input += synapse0x302fc80();
   input += synapse0x302fcc0();
   input += synapse0x302fd00();
   input += synapse0x302fd40();
   input += synapse0x302fd80();
   input += synapse0x302fdc0();
   input += synapse0x302fe00();
   input += synapse0x302fe40();
   input += synapse0x302fe80();
   input += synapse0x302fec0();
   input += synapse0x302f950();
   input += synapse0x302f990();
   input += synapse0x302c720();
   input += synapse0x302c760();
   input += synapse0x302c7a0();
   input += synapse0x302c7e0();
   input += synapse0x302c820();
   input += synapse0x302c860();
   return input;
}

double NNfunction_ss_cLuR::neuron0x302f7c0() {
   double input = input0x302f7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x302c8a0() {
   double input = -1.85911;
   input += synapse0x302cbe0();
   input += synapse0x302cc20();
   input += synapse0x302cc60();
   input += synapse0x302cca0();
   input += synapse0x302cce0();
   input += synapse0x302cd20();
   input += synapse0x302cd60();
   input += synapse0x302cda0();
   input += synapse0x302cde0();
   input += synapse0x302ce20();
   input += synapse0x302ce60();
   input += synapse0x302cea0();
   input += synapse0x302cee0();
   input += synapse0x3031020();
   input += synapse0x3031060();
   input += synapse0x30310a0();
   input += synapse0x302ca30();
   input += synapse0x302ca70();
   input += synapse0x30311f0();
   input += synapse0x3031230();
   input += synapse0x3031270();
   input += synapse0x30312b0();
   input += synapse0x30312f0();
   input += synapse0x3031330();
   return input;
}

double NNfunction_ss_cLuR::neuron0x302c8a0() {
   double input = input0x302c8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3031370() {
   double input = -0.495765;
   input += synapse0x30316b0();
   input += synapse0x30316f0();
   input += synapse0x3031730();
   input += synapse0x3031770();
   input += synapse0x30317b0();
   input += synapse0x30317f0();
   input += synapse0x3031830();
   input += synapse0x3031870();
   input += synapse0x30318b0();
   input += synapse0x30318f0();
   input += synapse0x3031930();
   input += synapse0x3031970();
   input += synapse0x30319b0();
   input += synapse0x30319f0();
   input += synapse0x3031a30();
   input += synapse0x3031a70();
   input += synapse0x3031500();
   input += synapse0x3031540();
   input += synapse0x3031bc0();
   input += synapse0x3031c00();
   input += synapse0x3031c40();
   input += synapse0x3031c80();
   input += synapse0x3031cc0();
   input += synapse0x3031d00();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3031370() {
   double input = input0x3031370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3031d40() {
   double input = 0.104845;
   input += synapse0x3032080();
   input += synapse0x30320c0();
   input += synapse0x3032100();
   input += synapse0x3032140();
   input += synapse0x3032180();
   input += synapse0x30321c0();
   input += synapse0x3032200();
   input += synapse0x3032240();
   input += synapse0x3032280();
   input += synapse0x30322c0();
   input += synapse0x3032300();
   input += synapse0x3032340();
   input += synapse0x3032380();
   input += synapse0x30323c0();
   input += synapse0x3032400();
   input += synapse0x3032440();
   input += synapse0x3031ed0();
   input += synapse0x3031f10();
   input += synapse0x3032590();
   input += synapse0x30325d0();
   input += synapse0x3032610();
   input += synapse0x3032650();
   input += synapse0x3032690();
   input += synapse0x30326d0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3031d40() {
   double input = input0x3031d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3032710() {
   double input = 0.338688;
   input += synapse0x3032a50();
   input += synapse0x3032a90();
   input += synapse0x3032ad0();
   input += synapse0x3032b10();
   input += synapse0x3032b50();
   input += synapse0x3032b90();
   input += synapse0x3032bd0();
   input += synapse0x3032c10();
   input += synapse0x3032c50();
   input += synapse0x3032c90();
   input += synapse0x3032cd0();
   input += synapse0x3032d10();
   input += synapse0x3032d50();
   input += synapse0x3032d90();
   input += synapse0x3032dd0();
   input += synapse0x3032e10();
   input += synapse0x30328a0();
   input += synapse0x30328e0();
   input += synapse0x3032f60();
   input += synapse0x3032fa0();
   input += synapse0x3032fe0();
   input += synapse0x3033020();
   input += synapse0x3033060();
   input += synapse0x30330a0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3032710() {
   double input = input0x3032710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x30330e0() {
   double input = -5.0889;
   input += synapse0x3033420();
   input += synapse0x3024780();
   input += synapse0x30247c0();
   input += synapse0x3024ac0();
   input += synapse0x3024b00();
   input += synapse0x3024e00();
   input += synapse0x3024e40();
   input += synapse0x3025140();
   input += synapse0x3025180();
   input += synapse0x3025480();
   input += synapse0x30254c0();
   input += synapse0x30257c0();
   input += synapse0x3025800();
   input += synapse0x3025b00();
   input += synapse0x3025b40();
   input += synapse0x3025e40();
   input += synapse0x3025e80();
   input += synapse0x3026180();
   input += synapse0x30261c0();
   input += synapse0x30264c0();
   input += synapse0x3026500();
   input += synapse0x3026800();
   input += synapse0x3026840();
   input += synapse0x3026b40();
   return input;
}

double NNfunction_ss_cLuR::neuron0x30330e0() {
   double input = input0x30330e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3034ef0() {
   double input = -0.152387;
   input += synapse0x3026b80();
   input += synapse0x3027840();
   input += synapse0x3027880();
   input += synapse0x3033270();
   input += synapse0x30332b0();
   input += synapse0x3027b80();
   input += synapse0x3027bc0();
   input += synapse0x2dd5b50();
   input += synapse0x2dd5b90();
   input += synapse0x3028300();
   input += synapse0x3028340();
   input += synapse0x3028640();
   input += synapse0x3028680();
   input += synapse0x3028980();
   input += synapse0x30289c0();
   input += synapse0x3028cc0();
   input += synapse0x3028d00();
   input += synapse0x3029000();
   input += synapse0x3029040();
   input += synapse0x3029340();
   input += synapse0x3029380();
   input += synapse0x3026e80();
   input += synapse0x3026ec0();
   input += synapse0x3035190();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3034ef0() {
   double input = input0x3034ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x30351d0() {
   double input = -0.0987654;
   input += synapse0x3035510();
   input += synapse0x3035550();
   input += synapse0x3035590();
   input += synapse0x30355d0();
   input += synapse0x3035610();
   input += synapse0x3035650();
   input += synapse0x3035690();
   input += synapse0x30356d0();
   input += synapse0x3035710();
   input += synapse0x3035750();
   input += synapse0x3035790();
   input += synapse0x30357d0();
   input += synapse0x3035810();
   input += synapse0x3035850();
   input += synapse0x3035890();
   input += synapse0x30358d0();
   input += synapse0x3035360();
   input += synapse0x30353a0();
   input += synapse0x3035a20();
   input += synapse0x3035a60();
   input += synapse0x3035aa0();
   input += synapse0x3035ae0();
   input += synapse0x3035b20();
   input += synapse0x3035b60();
   return input;
}

double NNfunction_ss_cLuR::neuron0x30351d0() {
   double input = input0x30351d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3035ba0() {
   double input = -0.246815;
   input += synapse0x3035ee0();
   input += synapse0x3035f20();
   input += synapse0x3035f60();
   input += synapse0x3035fa0();
   input += synapse0x3035fe0();
   input += synapse0x3036020();
   input += synapse0x3036060();
   input += synapse0x30360a0();
   input += synapse0x30360e0();
   input += synapse0x3036120();
   input += synapse0x3036160();
   input += synapse0x30361a0();
   input += synapse0x30361e0();
   input += synapse0x3036220();
   input += synapse0x3036260();
   input += synapse0x30362a0();
   input += synapse0x3035d30();
   input += synapse0x3035d70();
   input += synapse0x30363f0();
   input += synapse0x3036430();
   input += synapse0x3036470();
   input += synapse0x30364b0();
   input += synapse0x30364f0();
   input += synapse0x3036530();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3035ba0() {
   double input = input0x3035ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3036570() {
   double input = 4.81309;
   input += synapse0x30368b0();
   input += synapse0x30368f0();
   input += synapse0x3036930();
   input += synapse0x3036970();
   input += synapse0x30369b0();
   input += synapse0x30369f0();
   input += synapse0x3036a30();
   input += synapse0x3036a70();
   input += synapse0x3036ab0();
   input += synapse0x3036af0();
   input += synapse0x3036b30();
   input += synapse0x3036b70();
   input += synapse0x3036bb0();
   input += synapse0x3036bf0();
   input += synapse0x3036c30();
   input += synapse0x3036c70();
   input += synapse0x3036700();
   input += synapse0x3036740();
   input += synapse0x3036dc0();
   input += synapse0x3036e00();
   input += synapse0x3036e40();
   input += synapse0x3036e80();
   input += synapse0x3036ec0();
   input += synapse0x3036f00();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3036570() {
   double input = input0x3036570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3036f40() {
   double input = 0.0971044;
   input += synapse0x3037280();
   input += synapse0x30372c0();
   input += synapse0x3037300();
   input += synapse0x3037340();
   input += synapse0x3037380();
   input += synapse0x30373c0();
   input += synapse0x3037400();
   input += synapse0x3037440();
   input += synapse0x3037480();
   input += synapse0x30374c0();
   input += synapse0x3037500();
   input += synapse0x3037540();
   input += synapse0x3037580();
   input += synapse0x30375c0();
   input += synapse0x3037600();
   input += synapse0x3037640();
   input += synapse0x30370d0();
   input += synapse0x3037110();
   input += synapse0x3037790();
   input += synapse0x30377d0();
   input += synapse0x3037810();
   input += synapse0x3037850();
   input += synapse0x3037890();
   input += synapse0x30378d0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3036f40() {
   double input = input0x3036f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3037910() {
   double input = -0.62374;
   input += synapse0x3037c50();
   input += synapse0x3037c90();
   input += synapse0x3037cd0();
   input += synapse0x3037d10();
   input += synapse0x3037d50();
   input += synapse0x3037d90();
   input += synapse0x3037dd0();
   input += synapse0x3037e10();
   input += synapse0x3037e50();
   input += synapse0x3030010();
   input += synapse0x3030050();
   input += synapse0x3030090();
   input += synapse0x30300d0();
   input += synapse0x3030110();
   input += synapse0x3030150();
   input += synapse0x3030190();
   input += synapse0x3037aa0();
   input += synapse0x3037ae0();
   input += synapse0x30302e0();
   input += synapse0x3030320();
   input += synapse0x3030360();
   input += synapse0x30303a0();
   input += synapse0x30303e0();
   input += synapse0x3030420();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3037910() {
   double input = input0x3037910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3030460() {
   double input = 0.498029;
   input += synapse0x30307a0();
   input += synapse0x30307e0();
   input += synapse0x3030820();
   input += synapse0x3030860();
   input += synapse0x30308a0();
   input += synapse0x30308e0();
   input += synapse0x3030920();
   input += synapse0x3030960();
   input += synapse0x30309a0();
   input += synapse0x30309e0();
   input += synapse0x3030a20();
   input += synapse0x3030a60();
   input += synapse0x3030aa0();
   input += synapse0x3030ae0();
   input += synapse0x3030b20();
   input += synapse0x3030b60();
   input += synapse0x30305f0();
   input += synapse0x3030630();
   input += synapse0x3030cb0();
   input += synapse0x3030cf0();
   input += synapse0x3030d30();
   input += synapse0x3030d70();
   input += synapse0x3030db0();
   input += synapse0x3030df0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3030460() {
   double input = input0x3030460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3030e30() {
   double input = 1.56103;
   input += synapse0x3030fc0();
   input += synapse0x303a050();
   input += synapse0x303a090();
   input += synapse0x303a0d0();
   input += synapse0x303a110();
   input += synapse0x303a150();
   input += synapse0x303a190();
   input += synapse0x303a1d0();
   input += synapse0x303a210();
   input += synapse0x303a250();
   input += synapse0x303a290();
   input += synapse0x303a2d0();
   input += synapse0x303a310();
   input += synapse0x303a350();
   input += synapse0x303a390();
   input += synapse0x303a3d0();
   input += synapse0x3039ea0();
   input += synapse0x3039ee0();
   input += synapse0x303a520();
   input += synapse0x303a560();
   input += synapse0x303a5a0();
   input += synapse0x303a5e0();
   input += synapse0x303a620();
   input += synapse0x303a660();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3030e30() {
   double input = input0x3030e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x303a6a0() {
   double input = -0.95331;
   input += synapse0x303a9e0();
   input += synapse0x303aa20();
   input += synapse0x303aa60();
   input += synapse0x303aaa0();
   input += synapse0x303aae0();
   input += synapse0x303ab20();
   input += synapse0x303ab60();
   input += synapse0x303aba0();
   input += synapse0x303abe0();
   input += synapse0x303ac20();
   input += synapse0x303ac60();
   input += synapse0x303aca0();
   input += synapse0x303ace0();
   input += synapse0x303ad20();
   input += synapse0x303ad60();
   input += synapse0x303ada0();
   input += synapse0x303a830();
   input += synapse0x303a870();
   input += synapse0x303aef0();
   input += synapse0x303af30();
   input += synapse0x303af70();
   input += synapse0x303afb0();
   input += synapse0x303aff0();
   input += synapse0x303b030();
   return input;
}

double NNfunction_ss_cLuR::neuron0x303a6a0() {
   double input = input0x303a6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x303b070() {
   double input = 0.127489;
   input += synapse0x303b3b0();
   input += synapse0x303b3f0();
   input += synapse0x303b430();
   input += synapse0x303b470();
   input += synapse0x303b4b0();
   input += synapse0x303b4f0();
   input += synapse0x303b530();
   input += synapse0x303b570();
   input += synapse0x303b5b0();
   input += synapse0x303b5f0();
   input += synapse0x303b630();
   input += synapse0x303b670();
   input += synapse0x303b6b0();
   input += synapse0x303b6f0();
   input += synapse0x303b730();
   input += synapse0x303b770();
   input += synapse0x303b200();
   input += synapse0x303b240();
   input += synapse0x303b8c0();
   input += synapse0x303b900();
   input += synapse0x303b940();
   input += synapse0x303b980();
   input += synapse0x303b9c0();
   input += synapse0x303ba00();
   return input;
}

double NNfunction_ss_cLuR::neuron0x303b070() {
   double input = input0x303b070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x303ba40() {
   double input = 0.315392;
   input += synapse0x303bd80();
   input += synapse0x303bdc0();
   input += synapse0x303be00();
   input += synapse0x303be40();
   input += synapse0x303be80();
   input += synapse0x303bec0();
   input += synapse0x303bf00();
   input += synapse0x303bf40();
   input += synapse0x303bf80();
   input += synapse0x303bfc0();
   input += synapse0x303c000();
   input += synapse0x303c040();
   input += synapse0x303c080();
   input += synapse0x303c0c0();
   input += synapse0x303c100();
   input += synapse0x303c140();
   input += synapse0x303bbd0();
   input += synapse0x303bc10();
   input += synapse0x303c290();
   input += synapse0x303c2d0();
   input += synapse0x303c310();
   input += synapse0x303c350();
   input += synapse0x303c390();
   input += synapse0x303c3d0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x303ba40() {
   double input = input0x303ba40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x303c410() {
   double input = 0.832624;
   input += synapse0x303c750();
   input += synapse0x303c790();
   input += synapse0x303c7d0();
   input += synapse0x303c810();
   input += synapse0x303c850();
   input += synapse0x303c890();
   input += synapse0x303c8d0();
   input += synapse0x303c910();
   input += synapse0x303c950();
   input += synapse0x303c990();
   input += synapse0x303c9d0();
   input += synapse0x303ca10();
   input += synapse0x303ca50();
   input += synapse0x303ca90();
   input += synapse0x303cad0();
   input += synapse0x303cb10();
   input += synapse0x303c5a0();
   input += synapse0x303c5e0();
   input += synapse0x303cc60();
   input += synapse0x303cca0();
   input += synapse0x303cce0();
   input += synapse0x303cd20();
   input += synapse0x303cd60();
   input += synapse0x303cda0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x303c410() {
   double input = input0x303c410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x303cde0() {
   double input = -0.17722;
   input += synapse0x303d120();
   input += synapse0x303d160();
   input += synapse0x303d1a0();
   input += synapse0x303d1e0();
   input += synapse0x303d220();
   input += synapse0x303d260();
   input += synapse0x303d2a0();
   input += synapse0x303d2e0();
   input += synapse0x303d320();
   input += synapse0x303d360();
   input += synapse0x303d3a0();
   input += synapse0x303d3e0();
   input += synapse0x303d420();
   input += synapse0x303d460();
   input += synapse0x303d4a0();
   input += synapse0x303d4e0();
   input += synapse0x303cf70();
   input += synapse0x303cfb0();
   input += synapse0x303d630();
   input += synapse0x303d670();
   input += synapse0x303d6b0();
   input += synapse0x303d6f0();
   input += synapse0x303d730();
   input += synapse0x303d770();
   return input;
}

double NNfunction_ss_cLuR::neuron0x303cde0() {
   double input = input0x303cde0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x303d7b0() {
   double input = 0.650483;
   input += synapse0x303daf0();
   input += synapse0x303db30();
   input += synapse0x303db70();
   input += synapse0x303dbb0();
   input += synapse0x303dbf0();
   input += synapse0x303dc30();
   input += synapse0x303dc70();
   input += synapse0x303dcb0();
   input += synapse0x303dcf0();
   input += synapse0x303dd30();
   input += synapse0x303dd70();
   input += synapse0x303ddb0();
   input += synapse0x303ddf0();
   input += synapse0x303de30();
   input += synapse0x303de70();
   input += synapse0x303deb0();
   input += synapse0x303d940();
   input += synapse0x303d980();
   input += synapse0x303e000();
   input += synapse0x303e040();
   input += synapse0x303e080();
   input += synapse0x303e0c0();
   input += synapse0x303e100();
   input += synapse0x303e140();
   return input;
}

double NNfunction_ss_cLuR::neuron0x303d7b0() {
   double input = input0x303d7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x303e180() {
   double input = -1.02917;
   input += synapse0x303e4c0();
   input += synapse0x303e500();
   input += synapse0x303e540();
   input += synapse0x303e580();
   input += synapse0x303e5c0();
   input += synapse0x303e600();
   input += synapse0x303e640();
   input += synapse0x303e680();
   input += synapse0x303e6c0();
   input += synapse0x303e700();
   input += synapse0x303e740();
   input += synapse0x303e780();
   input += synapse0x303e7c0();
   input += synapse0x303e800();
   input += synapse0x303e840();
   input += synapse0x303e880();
   input += synapse0x303e310();
   input += synapse0x303e350();
   input += synapse0x303e9d0();
   input += synapse0x303ea10();
   input += synapse0x303ea50();
   input += synapse0x303ea90();
   input += synapse0x303ead0();
   input += synapse0x303eb10();
   return input;
}

double NNfunction_ss_cLuR::neuron0x303e180() {
   double input = input0x303e180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x303eb50() {
   double input = 0.861589;
   input += synapse0x303ee90();
   input += synapse0x3033460();
   input += synapse0x30334a0();
   input += synapse0x30334e0();
   input += synapse0x3033730();
   input += synapse0x3033770();
   input += synapse0x30337b0();
   input += synapse0x3033a00();
   input += synapse0x3033a40();
   input += synapse0x3033c90();
   input += synapse0x3033cd0();
   input += synapse0x3033d10();
   input += synapse0x3033f60();
   input += synapse0x3033fa0();
   input += synapse0x30341f0();
   input += synapse0x3034230();
   input += synapse0x303ece0();
   input += synapse0x303ed20();
   input += synapse0x3034380();
   input += synapse0x3034890();
   input += synapse0x30348d0();
   input += synapse0x3034910();
   input += synapse0x3034b60();
   input += synapse0x3034ba0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x303eb50() {
   double input = input0x303eb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3034be0() {
   double input = 1.0776;
   input += synapse0x3034450();
   input += synapse0x3034490();
   input += synapse0x30344d0();
   input += synapse0x3034510();
   input += synapse0x3034e90();
   input += synapse0x30411e0();
   input += synapse0x3041220();
   input += synapse0x3041260();
   input += synapse0x30412a0();
   input += synapse0x30412e0();
   input += synapse0x3041320();
   input += synapse0x3041360();
   input += synapse0x30413a0();
   input += synapse0x30413e0();
   input += synapse0x3041420();
   input += synapse0x3041460();
   input += synapse0x3034d70();
   input += synapse0x3034db0();
   input += synapse0x30415b0();
   input += synapse0x30415f0();
   input += synapse0x3041630();
   input += synapse0x3041670();
   input += synapse0x30416b0();
   input += synapse0x30416f0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3034be0() {
   double input = input0x3034be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3041730() {
   double input = 1.23584;
   input += synapse0x3041a70();
   input += synapse0x3041ab0();
   input += synapse0x3041af0();
   input += synapse0x3041b30();
   input += synapse0x3041b70();
   input += synapse0x3041bb0();
   input += synapse0x3041bf0();
   input += synapse0x3041c30();
   input += synapse0x3041c70();
   input += synapse0x3041cb0();
   input += synapse0x3041cf0();
   input += synapse0x3041d30();
   input += synapse0x3041d70();
   input += synapse0x3041db0();
   input += synapse0x3041df0();
   input += synapse0x3041e30();
   input += synapse0x30418c0();
   input += synapse0x3041900();
   input += synapse0x3041f80();
   input += synapse0x3041fc0();
   input += synapse0x3042000();
   input += synapse0x3042040();
   input += synapse0x3042080();
   input += synapse0x30420c0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3041730() {
   double input = input0x3041730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3042100() {
   double input = 1.62337;
   input += synapse0x3042440();
   input += synapse0x3042480();
   input += synapse0x30424c0();
   input += synapse0x3042500();
   input += synapse0x3042540();
   input += synapse0x3042580();
   input += synapse0x30425c0();
   input += synapse0x3042600();
   input += synapse0x3042640();
   input += synapse0x3042680();
   input += synapse0x30426c0();
   input += synapse0x3042700();
   input += synapse0x3042740();
   input += synapse0x3042780();
   input += synapse0x30427c0();
   input += synapse0x3042800();
   input += synapse0x3042290();
   input += synapse0x30422d0();
   input += synapse0x3042950();
   input += synapse0x3042990();
   input += synapse0x30429d0();
   input += synapse0x3042a10();
   input += synapse0x3042a50();
   input += synapse0x3042a90();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3042100() {
   double input = input0x3042100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3042ad0() {
   double input = -1.45639;
   input += synapse0x3042e10();
   input += synapse0x3042e50();
   input += synapse0x3042e90();
   input += synapse0x3042ed0();
   input += synapse0x3042f10();
   input += synapse0x3042f50();
   input += synapse0x3042f90();
   input += synapse0x3042fd0();
   input += synapse0x3043010();
   input += synapse0x3043050();
   input += synapse0x3043090();
   input += synapse0x30430d0();
   input += synapse0x3043110();
   input += synapse0x3043150();
   input += synapse0x3043190();
   input += synapse0x30431d0();
   input += synapse0x3042c60();
   input += synapse0x3042ca0();
   input += synapse0x3043320();
   input += synapse0x3043360();
   input += synapse0x30433a0();
   input += synapse0x30433e0();
   input += synapse0x3043420();
   input += synapse0x3043460();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3042ad0() {
   double input = input0x3042ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x30434a0() {
   double input = -0.610632;
   input += synapse0x30437e0();
   input += synapse0x3043820();
   input += synapse0x3043860();
   input += synapse0x30438a0();
   input += synapse0x30438e0();
   input += synapse0x3043920();
   input += synapse0x3043960();
   input += synapse0x30439a0();
   input += synapse0x30439e0();
   input += synapse0x3043a20();
   input += synapse0x3043a60();
   input += synapse0x3043aa0();
   input += synapse0x3043ae0();
   input += synapse0x3043b20();
   input += synapse0x3043b60();
   input += synapse0x3043ba0();
   input += synapse0x3043630();
   input += synapse0x3043670();
   input += synapse0x3043cf0();
   input += synapse0x3043d30();
   input += synapse0x3043d70();
   input += synapse0x3043db0();
   input += synapse0x3043df0();
   input += synapse0x3043e30();
   return input;
}

double NNfunction_ss_cLuR::neuron0x30434a0() {
   double input = input0x30434a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3043e70() {
   double input = 1.05979;
   input += synapse0x30441b0();
   input += synapse0x30441f0();
   input += synapse0x3044230();
   input += synapse0x3044270();
   input += synapse0x30442b0();
   input += synapse0x30442f0();
   input += synapse0x3044330();
   input += synapse0x3044370();
   input += synapse0x30443b0();
   input += synapse0x30443f0();
   input += synapse0x3044430();
   input += synapse0x3044470();
   input += synapse0x30444b0();
   input += synapse0x30444f0();
   input += synapse0x3044530();
   input += synapse0x3044570();
   input += synapse0x3044000();
   input += synapse0x3044040();
   input += synapse0x30446c0();
   input += synapse0x3044700();
   input += synapse0x3044740();
   input += synapse0x3044780();
   input += synapse0x30447c0();
   input += synapse0x3044800();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3043e70() {
   double input = input0x3043e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3044840() {
   double input = -1.58927;
   input += synapse0x3044b80();
   input += synapse0x3044bc0();
   input += synapse0x3044c00();
   input += synapse0x3044c40();
   input += synapse0x3044c80();
   input += synapse0x3044cc0();
   input += synapse0x3044d00();
   input += synapse0x3044d40();
   input += synapse0x3044d80();
   input += synapse0x3044dc0();
   input += synapse0x3044e00();
   input += synapse0x3044e40();
   input += synapse0x3044e80();
   input += synapse0x3044ec0();
   input += synapse0x3044f00();
   input += synapse0x3044f40();
   input += synapse0x30449d0();
   input += synapse0x3044a10();
   input += synapse0x3045090();
   input += synapse0x30450d0();
   input += synapse0x3045110();
   input += synapse0x3045150();
   input += synapse0x3045190();
   input += synapse0x30451d0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3044840() {
   double input = input0x3044840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3045210() {
   double input = -1.34025;
   input += synapse0x3045550();
   input += synapse0x3045590();
   input += synapse0x30455d0();
   input += synapse0x3045610();
   input += synapse0x3045650();
   input += synapse0x3045690();
   input += synapse0x30456d0();
   input += synapse0x3045710();
   input += synapse0x3045750();
   input += synapse0x3045790();
   input += synapse0x30457d0();
   input += synapse0x3045810();
   input += synapse0x3045850();
   input += synapse0x3045890();
   input += synapse0x30458d0();
   input += synapse0x3045910();
   input += synapse0x30453a0();
   input += synapse0x30453e0();
   input += synapse0x3045a60();
   input += synapse0x3045aa0();
   input += synapse0x3045ae0();
   input += synapse0x3045b20();
   input += synapse0x3045b60();
   input += synapse0x3045ba0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3045210() {
   double input = input0x3045210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3045be0() {
   double input = -1.1022;
   input += synapse0x302e650();
   input += synapse0x302e690();
   input += synapse0x302e6d0();
   input += synapse0x302e710();
   input += synapse0x302e750();
   input += synapse0x302e790();
   input += synapse0x302e7d0();
   input += synapse0x302e810();
   input += synapse0x3046330();
   input += synapse0x3046370();
   input += synapse0x30463b0();
   input += synapse0x30463f0();
   input += synapse0x3046430();
   input += synapse0x3046470();
   input += synapse0x30464b0();
   input += synapse0x30464f0();
   input += synapse0x3045d70();
   input += synapse0x3045db0();
   input += synapse0x3046640();
   input += synapse0x3046680();
   input += synapse0x30466c0();
   input += synapse0x3046700();
   input += synapse0x3046740();
   input += synapse0x3046780();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3045be0() {
   double input = input0x3045be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x30467c0() {
   double input = 0.398641;
   input += synapse0x3046b00();
   input += synapse0x3046b40();
   input += synapse0x3046b80();
   input += synapse0x3046bc0();
   input += synapse0x3046c00();
   input += synapse0x3046c40();
   input += synapse0x3046c80();
   input += synapse0x3046cc0();
   input += synapse0x3046d00();
   input += synapse0x3046d40();
   input += synapse0x3046d80();
   input += synapse0x3046dc0();
   input += synapse0x3046e00();
   input += synapse0x3046e40();
   input += synapse0x3046e80();
   input += synapse0x3046ec0();
   input += synapse0x3046950();
   input += synapse0x3046990();
   input += synapse0x3047010();
   input += synapse0x3047050();
   input += synapse0x3047090();
   input += synapse0x30470d0();
   input += synapse0x3047110();
   input += synapse0x3047150();
   return input;
}

double NNfunction_ss_cLuR::neuron0x30467c0() {
   double input = input0x30467c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3047190() {
   double input = 1.06448;
   input += synapse0x30474d0();
   input += synapse0x3047510();
   input += synapse0x3047550();
   input += synapse0x3047590();
   input += synapse0x30475d0();
   input += synapse0x3047610();
   input += synapse0x3047650();
   input += synapse0x3047690();
   input += synapse0x30476d0();
   input += synapse0x3047710();
   input += synapse0x3047750();
   input += synapse0x3047790();
   input += synapse0x30477d0();
   input += synapse0x3047810();
   input += synapse0x3047850();
   input += synapse0x3047890();
   input += synapse0x3047320();
   input += synapse0x3047360();
   input += synapse0x3037e90();
   input += synapse0x3037ed0();
   input += synapse0x3037f10();
   input += synapse0x3037f50();
   input += synapse0x3037f90();
   input += synapse0x3037fd0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3047190() {
   double input = input0x3047190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3038010() {
   double input = 3.29186;
   input += synapse0x3038350();
   input += synapse0x3038390();
   input += synapse0x30383d0();
   input += synapse0x3038410();
   input += synapse0x3038450();
   input += synapse0x3038490();
   input += synapse0x30384d0();
   input += synapse0x3038510();
   input += synapse0x3038550();
   input += synapse0x3038590();
   input += synapse0x30385d0();
   input += synapse0x3038610();
   input += synapse0x3038650();
   input += synapse0x3038690();
   input += synapse0x30386d0();
   input += synapse0x3038710();
   input += synapse0x30381a0();
   input += synapse0x30381e0();
   input += synapse0x3038860();
   input += synapse0x30388a0();
   input += synapse0x30388e0();
   input += synapse0x3038920();
   input += synapse0x3038960();
   input += synapse0x30389a0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3038010() {
   double input = input0x3038010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x30389e0() {
   double input = -0.827806;
   input += synapse0x3038d20();
   input += synapse0x3038d60();
   input += synapse0x3038da0();
   input += synapse0x3038de0();
   input += synapse0x3038e20();
   input += synapse0x3038e60();
   input += synapse0x3038ea0();
   input += synapse0x3038ee0();
   input += synapse0x3038f20();
   input += synapse0x3038f60();
   input += synapse0x3038fa0();
   input += synapse0x3038fe0();
   input += synapse0x3039020();
   input += synapse0x3039060();
   input += synapse0x30390a0();
   input += synapse0x30390e0();
   input += synapse0x3038b70();
   input += synapse0x3038bb0();
   input += synapse0x3039230();
   input += synapse0x3039270();
   input += synapse0x30392b0();
   input += synapse0x30392f0();
   input += synapse0x3039330();
   input += synapse0x3039370();
   return input;
}

double NNfunction_ss_cLuR::neuron0x30389e0() {
   double input = input0x30389e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x30393b0() {
   double input = -0.633151;
   input += synapse0x30396f0();
   input += synapse0x3039730();
   input += synapse0x3039770();
   input += synapse0x30397b0();
   input += synapse0x30397f0();
   input += synapse0x3039830();
   input += synapse0x3039870();
   input += synapse0x30398b0();
   input += synapse0x30398f0();
   input += synapse0x3039930();
   input += synapse0x3039970();
   input += synapse0x30399b0();
   input += synapse0x30399f0();
   input += synapse0x3039a30();
   input += synapse0x3039a70();
   input += synapse0x3039ab0();
   input += synapse0x3039540();
   input += synapse0x3039580();
   input += synapse0x3039c00();
   input += synapse0x3039c40();
   input += synapse0x3039c80();
   input += synapse0x3039cc0();
   input += synapse0x3039d00();
   input += synapse0x3039d40();
   return input;
}

double NNfunction_ss_cLuR::neuron0x30393b0() {
   double input = input0x30393b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x304b9f0() {
   double input = -0.340026;
   input += synapse0x304bc10();
   input += synapse0x304bc50();
   input += synapse0x304bc90();
   input += synapse0x304bcd0();
   input += synapse0x304bd10();
   input += synapse0x304bd50();
   input += synapse0x304bd90();
   input += synapse0x304bdd0();
   input += synapse0x304be10();
   input += synapse0x304be50();
   input += synapse0x304be90();
   input += synapse0x304bed0();
   input += synapse0x304bf10();
   input += synapse0x304bf50();
   input += synapse0x304bf90();
   input += synapse0x304bfd0();
   input += synapse0x3039d80();
   input += synapse0x3039dc0();
   input += synapse0x304c120();
   input += synapse0x304c160();
   input += synapse0x304c1a0();
   input += synapse0x304c1e0();
   input += synapse0x304c220();
   input += synapse0x304c260();
   return input;
}

double NNfunction_ss_cLuR::neuron0x304b9f0() {
   double input = input0x304b9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x304c2a0() {
   double input = 0.608747;
   input += synapse0x304c5e0();
   input += synapse0x304c620();
   input += synapse0x304c660();
   input += synapse0x304c6a0();
   input += synapse0x304c6e0();
   input += synapse0x304c720();
   input += synapse0x304c760();
   input += synapse0x304c7a0();
   input += synapse0x304c7e0();
   input += synapse0x304c820();
   input += synapse0x304c860();
   input += synapse0x304c8a0();
   input += synapse0x304c8e0();
   input += synapse0x304c920();
   input += synapse0x304c960();
   input += synapse0x304c9a0();
   input += synapse0x304c430();
   input += synapse0x304c470();
   input += synapse0x304caf0();
   input += synapse0x304cb30();
   input += synapse0x304cb70();
   input += synapse0x304cbb0();
   input += synapse0x304cbf0();
   input += synapse0x304cc30();
   return input;
}

double NNfunction_ss_cLuR::neuron0x304c2a0() {
   double input = input0x304c2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x304cc70() {
   double input = 0.816076;
   input += synapse0x304cfb0();
   input += synapse0x304cff0();
   input += synapse0x304d030();
   input += synapse0x304d070();
   input += synapse0x304d0b0();
   input += synapse0x304d0f0();
   input += synapse0x304d130();
   input += synapse0x304d170();
   input += synapse0x304d1b0();
   input += synapse0x304d1f0();
   input += synapse0x304d230();
   input += synapse0x304d270();
   input += synapse0x304d2b0();
   input += synapse0x304d2f0();
   input += synapse0x304d330();
   input += synapse0x304d370();
   input += synapse0x304ce00();
   input += synapse0x304ce40();
   input += synapse0x304d4c0();
   input += synapse0x304d500();
   input += synapse0x304d540();
   input += synapse0x304d580();
   input += synapse0x304d5c0();
   input += synapse0x304d600();
   return input;
}

double NNfunction_ss_cLuR::neuron0x304cc70() {
   double input = input0x304cc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x304d640() {
   double input = 1.22146;
   input += synapse0x304d980();
   input += synapse0x304d9c0();
   input += synapse0x304da00();
   input += synapse0x304da40();
   input += synapse0x304da80();
   input += synapse0x304dac0();
   input += synapse0x304db00();
   input += synapse0x304db40();
   input += synapse0x304db80();
   input += synapse0x304dbc0();
   input += synapse0x304dc00();
   input += synapse0x304dc40();
   input += synapse0x304dc80();
   input += synapse0x304dcc0();
   input += synapse0x304dd00();
   input += synapse0x304dd40();
   input += synapse0x304d7d0();
   input += synapse0x304d810();
   input += synapse0x304de90();
   input += synapse0x304ded0();
   input += synapse0x304df10();
   input += synapse0x304df50();
   input += synapse0x304df90();
   input += synapse0x304dfd0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x304d640() {
   double input = input0x304d640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3054840() {
   double input = 0.101077;
   input += synapse0x302a570();
   input += synapse0x302a5b0();
   input += synapse0x302ba80();
   input += synapse0x302bac0();
   input += synapse0x302c450();
   input += synapse0x302c490();
   input += synapse0x302d220();
   input += synapse0x302d260();
   input += synapse0x302dbf0();
   input += synapse0x302dc30();
   input += synapse0x302e5c0();
   input += synapse0x302e600();
   input += synapse0x302f0a0();
   input += synapse0x302f0e0();
   input += synapse0x302fa70();
   input += synapse0x302fab0();
   input += synapse0x302cb50();
   input += synapse0x302cb90();
   input += synapse0x3031620();
   input += synapse0x3031660();
   input += synapse0x3031ff0();
   input += synapse0x3032030();
   input += synapse0x30329c0();
   input += synapse0x3032a00();
   input += synapse0x3033390();
   input += synapse0x30333d0();
   input += synapse0x3027500();
   input += synapse0x3027540();
   input += synapse0x3035480();
   input += synapse0x30354c0();
   input += synapse0x3035e50();
   input += synapse0x3035e90();
   input += synapse0x3036820();
   input += synapse0x3036860();
   input += synapse0x30371f0();
   input += synapse0x3037230();
   input += synapse0x3037bc0();
   input += synapse0x3037c00();
   input += synapse0x3030710();
   input += synapse0x3030750();
   input += synapse0x3039fc0();
   input += synapse0x303a000();
   input += synapse0x303a950();
   input += synapse0x303a990();
   input += synapse0x303b320();
   input += synapse0x303b360();
   input += synapse0x303bcf0();
   input += synapse0x303bd30();
   input += synapse0x303c6c0();
   input += synapse0x303c700();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3054840() {
   double input = input0x3054840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3054be0() {
   double input = -1.85336;
   input += synapse0x303ee00();
   input += synapse0x303ee40();
   input += synapse0x30343c0();
   input += synapse0x3034400();
   input += synapse0x30419e0();
   input += synapse0x3041a20();
   input += synapse0x30423b0();
   input += synapse0x30423f0();
   input += synapse0x3042d80();
   input += synapse0x3042dc0();
   input += synapse0x3043750();
   input += synapse0x3043790();
   input += synapse0x3044120();
   input += synapse0x3044160();
   input += synapse0x3044af0();
   input += synapse0x3044b30();
   input += synapse0x30454c0();
   input += synapse0x3045500();
   input += synapse0x3045e90();
   input += synapse0x3045ed0();
   input += synapse0x3046a70();
   input += synapse0x3046ab0();
   input += synapse0x3047440();
   input += synapse0x3047480();
   input += synapse0x30382c0();
   input += synapse0x3038300();
   input += synapse0x3038c90();
   input += synapse0x3038cd0();
   input += synapse0x3039660();
   input += synapse0x30396a0();
   input += synapse0x304bb80();
   input += synapse0x304bbc0();
   input += synapse0x304c550();
   input += synapse0x304c590();
   input += synapse0x304cf20();
   input += synapse0x304cf60();
   input += synapse0x304d8f0();
   input += synapse0x304d930();
   input += synapse0x30297e0();
   input += synapse0x3029820();
   input += synapse0x303d090();
   input += synapse0x303d0d0();
   input += synapse0x304e010();
   input += synapse0x304e050();
   input += synapse0x304e090();
   input += synapse0x304e0d0();
   input += synapse0x3054f80();
   input += synapse0x3054fc0();
   input += synapse0x3055000();
   input += synapse0x3055040();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3054be0() {
   double input = input0x3054be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3055080() {
   double input = 0.220743;
   input += synapse0x30553c0();
   input += synapse0x3055400();
   input += synapse0x3055440();
   input += synapse0x3055480();
   input += synapse0x30554c0();
   input += synapse0x3055500();
   input += synapse0x3055540();
   input += synapse0x3055580();
   input += synapse0x30555c0();
   input += synapse0x3055600();
   input += synapse0x3055640();
   input += synapse0x3055680();
   input += synapse0x30556c0();
   input += synapse0x3055700();
   input += synapse0x3055740();
   input += synapse0x3055780();
   input += synapse0x3055210();
   input += synapse0x3055250();
   input += synapse0x30558d0();
   input += synapse0x3055910();
   input += synapse0x3055950();
   input += synapse0x3055990();
   input += synapse0x30559d0();
   input += synapse0x3055a10();
   input += synapse0x3055a50();
   input += synapse0x3055a90();
   input += synapse0x3055ad0();
   input += synapse0x3055b10();
   input += synapse0x3055b50();
   input += synapse0x3055b90();
   input += synapse0x3055bd0();
   input += synapse0x3055c10();
   input += synapse0x30557c0();
   input += synapse0x3055800();
   input += synapse0x3055840();
   input += synapse0x3055880();
   input += synapse0x3055e60();
   input += synapse0x3055ea0();
   input += synapse0x3055ee0();
   input += synapse0x3055f20();
   input += synapse0x3055f60();
   input += synapse0x3055fa0();
   input += synapse0x3055fe0();
   input += synapse0x3056020();
   input += synapse0x3056060();
   input += synapse0x30560a0();
   input += synapse0x30560e0();
   input += synapse0x3056120();
   input += synapse0x3056160();
   input += synapse0x30561a0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3055080() {
   double input = input0x3055080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x30561e0() {
   double input = 0.210889;
   input += synapse0x3056520();
   input += synapse0x3056560();
   input += synapse0x30565a0();
   input += synapse0x30565e0();
   input += synapse0x3056620();
   input += synapse0x3056660();
   input += synapse0x30566a0();
   input += synapse0x30566e0();
   input += synapse0x3056720();
   input += synapse0x3056760();
   input += synapse0x30567a0();
   input += synapse0x30567e0();
   input += synapse0x3056820();
   input += synapse0x3056860();
   input += synapse0x30568a0();
   input += synapse0x30568e0();
   input += synapse0x3056370();
   input += synapse0x30563b0();
   input += synapse0x3056a30();
   input += synapse0x3056a70();
   input += synapse0x3056ab0();
   input += synapse0x3056af0();
   input += synapse0x3056b30();
   input += synapse0x3056b70();
   input += synapse0x3056bb0();
   input += synapse0x3056bf0();
   input += synapse0x3056c30();
   input += synapse0x3056c70();
   input += synapse0x3056cb0();
   input += synapse0x3056cf0();
   input += synapse0x3056d30();
   input += synapse0x3056d70();
   input += synapse0x3056920();
   input += synapse0x3056960();
   input += synapse0x30569a0();
   input += synapse0x30569e0();
   input += synapse0x3056fc0();
   input += synapse0x3057000();
   input += synapse0x3057040();
   input += synapse0x3057080();
   input += synapse0x30570c0();
   input += synapse0x3057100();
   input += synapse0x3057140();
   input += synapse0x3057180();
   input += synapse0x30571c0();
   input += synapse0x3057200();
   input += synapse0x3057240();
   input += synapse0x3057280();
   input += synapse0x30572c0();
   input += synapse0x3057300();
   return input;
}

double NNfunction_ss_cLuR::neuron0x30561e0() {
   double input = input0x30561e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x3057340() {
   double input = 0.331667;
   input += synapse0x3057680();
   input += synapse0x30576c0();
   input += synapse0x3057700();
   input += synapse0x3057740();
   input += synapse0x3057780();
   input += synapse0x30577c0();
   input += synapse0x3057800();
   input += synapse0x3057840();
   input += synapse0x3057880();
   input += synapse0x30578c0();
   input += synapse0x3057900();
   input += synapse0x3057940();
   input += synapse0x3057980();
   input += synapse0x30579c0();
   input += synapse0x3057a00();
   input += synapse0x3057a40();
   input += synapse0x30574d0();
   input += synapse0x3057510();
   input += synapse0x3057b90();
   input += synapse0x3057bd0();
   input += synapse0x3057c10();
   input += synapse0x3057c50();
   input += synapse0x3057c90();
   input += synapse0x3057cd0();
   input += synapse0x3057d10();
   input += synapse0x3057d50();
   input += synapse0x3057d90();
   input += synapse0x3057dd0();
   input += synapse0x3057e10();
   input += synapse0x3057e50();
   input += synapse0x3057e90();
   input += synapse0x3057ed0();
   input += synapse0x3057a80();
   input += synapse0x3057ac0();
   input += synapse0x3057b00();
   input += synapse0x3057b40();
   input += synapse0x3058120();
   input += synapse0x3058160();
   input += synapse0x30581a0();
   input += synapse0x30581e0();
   input += synapse0x3058220();
   input += synapse0x3058260();
   input += synapse0x30582a0();
   input += synapse0x30582e0();
   input += synapse0x3058320();
   input += synapse0x3058360();
   input += synapse0x30583a0();
   input += synapse0x30583e0();
   input += synapse0x3058420();
   input += synapse0x3058460();
   return input;
}

double NNfunction_ss_cLuR::neuron0x3057340() {
   double input = input0x3057340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x30584a0() {
   double input = 9.57655;
   input += synapse0x3029580();
   input += synapse0x30586c0();
   input += synapse0x3058700();
   input += synapse0x3058740();
   input += synapse0x3058780();
   return input;
}

double NNfunction_ss_cLuR::neuron0x30584a0() {
   double input = input0x30584a0();
   return (input * 1)+0;
}

double NNfunction_ss_cLuR::synapse0x2de43d0() {
   return (neuron0x3024560()*-0.200481);
}

double NNfunction_ss_cLuR::synapse0x3024420() {
   return (neuron0x30248a0()*0.109178);
}

double NNfunction_ss_cLuR::synapse0x3024460() {
   return (neuron0x3024be0()*-1.31146);
}

double NNfunction_ss_cLuR::synapse0x3029870() {
   return (neuron0x3024f20()*-0.861884);
}

double NNfunction_ss_cLuR::synapse0x30298b0() {
   return (neuron0x3025260()*-2.33065);
}

double NNfunction_ss_cLuR::synapse0x30298f0() {
   return (neuron0x30255a0()*-1.15912);
}

double NNfunction_ss_cLuR::synapse0x3029930() {
   return (neuron0x30258e0()*0.0229605);
}

double NNfunction_ss_cLuR::synapse0x3029970() {
   return (neuron0x3025c20()*0.498497);
}

double NNfunction_ss_cLuR::synapse0x30299b0() {
   return (neuron0x3025f60()*0.0895469);
}

double NNfunction_ss_cLuR::synapse0x30299f0() {
   return (neuron0x30262a0()*0.574273);
}

double NNfunction_ss_cLuR::synapse0x3029a30() {
   return (neuron0x30265e0()*-0.277522);
}

double NNfunction_ss_cLuR::synapse0x3029a70() {
   return (neuron0x3026920()*0.0144411);
}

double NNfunction_ss_cLuR::synapse0x3029ab0() {
   return (neuron0x3026c60()*1.14279);
}

double NNfunction_ss_cLuR::synapse0x3029af0() {
   return (neuron0x3026fa0()*-1.17644);
}

double NNfunction_ss_cLuR::synapse0x3029b30() {
   return (neuron0x30272e0()*0.164538);
}

double NNfunction_ss_cLuR::synapse0x3029b70() {
   return (neuron0x3027620()*0.91356);
}

double NNfunction_ss_cLuR::synapse0x3024390() {
   return (neuron0x3027960()*0.257229);
}

double NNfunction_ss_cLuR::synapse0x30243d0() {
   return (neuron0x3027ec0()*0.185558);
}

double NNfunction_ss_cLuR::synapse0x2dd5c70() {
   return (neuron0x30280e0()*-0.338553);
}

double NNfunction_ss_cLuR::synapse0x2dd5cb0() {
   return (neuron0x3028420()*1.6263);
}

double NNfunction_ss_cLuR::synapse0x3029dd0() {
   return (neuron0x3028760()*-0.134741);
}

double NNfunction_ss_cLuR::synapse0x3029e10() {
   return (neuron0x3028aa0()*-0.286535);
}

double NNfunction_ss_cLuR::synapse0x3029e50() {
   return (neuron0x3028de0()*0.269743);
}

double NNfunction_ss_cLuR::synapse0x3029e90() {
   return (neuron0x3029120()*0.973135);
}

double NNfunction_ss_cLuR::synapse0x302a210() {
   return (neuron0x3024560()*0.381653);
}

double NNfunction_ss_cLuR::synapse0x302a250() {
   return (neuron0x30248a0()*-0.574151);
}

double NNfunction_ss_cLuR::synapse0x302a290() {
   return (neuron0x3024be0()*-0.494086);
}

double NNfunction_ss_cLuR::synapse0x302a2d0() {
   return (neuron0x3024f20()*0.921795);
}

double NNfunction_ss_cLuR::synapse0x302a310() {
   return (neuron0x3025260()*0.458289);
}

double NNfunction_ss_cLuR::synapse0x302a350() {
   return (neuron0x30255a0()*0.577015);
}

double NNfunction_ss_cLuR::synapse0x302a390() {
   return (neuron0x30258e0()*0.073737);
}

double NNfunction_ss_cLuR::synapse0x302a3d0() {
   return (neuron0x3025c20()*-0.696104);
}

double NNfunction_ss_cLuR::synapse0x302a410() {
   return (neuron0x3025f60()*-0.304763);
}

double NNfunction_ss_cLuR::synapse0x3029cc0() {
   return (neuron0x30262a0()*-0.0347923);
}

double NNfunction_ss_cLuR::synapse0x3029d00() {
   return (neuron0x30265e0()*0.0954757);
}

double NNfunction_ss_cLuR::synapse0x3029d40() {
   return (neuron0x3026920()*-0.244874);
}

double NNfunction_ss_cLuR::synapse0x3029d80() {
   return (neuron0x3026c60()*-0.0461784);
}

double NNfunction_ss_cLuR::synapse0x302a660() {
   return (neuron0x3026fa0()*-0.182414);
}

double NNfunction_ss_cLuR::synapse0x302a6a0() {
   return (neuron0x30272e0()*-0.0332855);
}

double NNfunction_ss_cLuR::synapse0x302a6e0() {
   return (neuron0x3027620()*0.379834);
}

double NNfunction_ss_cLuR::synapse0x302a060() {
   return (neuron0x3027960()*-0.619373);
}

double NNfunction_ss_cLuR::synapse0x302a0a0() {
   return (neuron0x3027ec0()*0.19871);
}

double NNfunction_ss_cLuR::synapse0x302a830() {
   return (neuron0x30280e0()*-0.706785);
}

double NNfunction_ss_cLuR::synapse0x302a870() {
   return (neuron0x3028420()*0.283646);
}

double NNfunction_ss_cLuR::synapse0x302a8b0() {
   return (neuron0x3028760()*0.663931);
}

double NNfunction_ss_cLuR::synapse0x302a8f0() {
   return (neuron0x3028aa0()*0.00205624);
}

double NNfunction_ss_cLuR::synapse0x302a930() {
   return (neuron0x3028de0()*0.446418);
}

double NNfunction_ss_cLuR::synapse0x302a970() {
   return (neuron0x3029120()*-0.164324);
}

double NNfunction_ss_cLuR::synapse0x302acf0() {
   return (neuron0x3024560()*0.0312353);
}

double NNfunction_ss_cLuR::synapse0x302ad30() {
   return (neuron0x30248a0()*0.0617332);
}

double NNfunction_ss_cLuR::synapse0x302ad70() {
   return (neuron0x3024be0()*0.0154665);
}

double NNfunction_ss_cLuR::synapse0x302adb0() {
   return (neuron0x3024f20()*-1.70889);
}

double NNfunction_ss_cLuR::synapse0x302adf0() {
   return (neuron0x3025260()*-0.269376);
}

double NNfunction_ss_cLuR::synapse0x302ae30() {
   return (neuron0x30255a0()*-0.350958);
}

double NNfunction_ss_cLuR::synapse0x302ae70() {
   return (neuron0x30258e0()*-0.0208902);
}

double NNfunction_ss_cLuR::synapse0x302aeb0() {
   return (neuron0x3025c20()*-0.254405);
}

double NNfunction_ss_cLuR::synapse0x302aef0() {
   return (neuron0x3025f60()*-1.16542);
}

double NNfunction_ss_cLuR::synapse0x302af30() {
   return (neuron0x30262a0()*-0.109375);
}

double NNfunction_ss_cLuR::synapse0x302af70() {
   return (neuron0x30265e0()*-0.104854);
}

double NNfunction_ss_cLuR::synapse0x302afb0() {
   return (neuron0x3026920()*-0.288194);
}

double NNfunction_ss_cLuR::synapse0x302aff0() {
   return (neuron0x3026c60()*-0.16228);
}

double NNfunction_ss_cLuR::synapse0x302b030() {
   return (neuron0x3026fa0()*0.226734);
}

double NNfunction_ss_cLuR::synapse0x302b070() {
   return (neuron0x30272e0()*-0.889494);
}

double NNfunction_ss_cLuR::synapse0x302b0b0() {
   return (neuron0x3027620()*0.0013581);
}

double NNfunction_ss_cLuR::synapse0x302ab40() {
   return (neuron0x3027960()*0.262218);
}

double NNfunction_ss_cLuR::synapse0x302ab80() {
   return (neuron0x3027ec0()*-0.491089);
}

double NNfunction_ss_cLuR::synapse0x2de3ac0() {
   return (neuron0x30280e0()*-0.644329);
}

double NNfunction_ss_cLuR::synapse0x2de3b00() {
   return (neuron0x3028420()*0.115471);
}

double NNfunction_ss_cLuR::synapse0x30135f0() {
   return (neuron0x3028760()*-0.18549);
}

double NNfunction_ss_cLuR::synapse0x3013630() {
   return (neuron0x3028aa0()*0.0155295);
}

double NNfunction_ss_cLuR::synapse0x3013670() {
   return (neuron0x3028de0()*-0.135682);
}

double NNfunction_ss_cLuR::synapse0x30244a0() {
   return (neuron0x3029120()*0.268635);
}

double NNfunction_ss_cLuR::synapse0x302a600() {
   return (neuron0x3024560()*0.737635);
}

double NNfunction_ss_cLuR::synapse0x30244e0() {
   return (neuron0x30248a0()*-1.2791);
}

double NNfunction_ss_cLuR::synapse0x3024520() {
   return (neuron0x3024be0()*-0.0188505);
}

double NNfunction_ss_cLuR::synapse0x302b200() {
   return (neuron0x3024f20()*0.229111);
}

double NNfunction_ss_cLuR::synapse0x302b240() {
   return (neuron0x3025260()*-0.146333);
}

double NNfunction_ss_cLuR::synapse0x302b280() {
   return (neuron0x30255a0()*1.45428);
}

double NNfunction_ss_cLuR::synapse0x302b2c0() {
   return (neuron0x30258e0()*0.665026);
}

double NNfunction_ss_cLuR::synapse0x302b300() {
   return (neuron0x3025c20()*-0.474892);
}

double NNfunction_ss_cLuR::synapse0x302b340() {
   return (neuron0x3025f60()*0.337861);
}

double NNfunction_ss_cLuR::synapse0x302b380() {
   return (neuron0x30262a0()*-0.21753);
}

double NNfunction_ss_cLuR::synapse0x302b3c0() {
   return (neuron0x30265e0()*1.07222);
}

double NNfunction_ss_cLuR::synapse0x302b400() {
   return (neuron0x3026920()*-1.03322);
}

double NNfunction_ss_cLuR::synapse0x302b440() {
   return (neuron0x3026c60()*0.889486);
}

double NNfunction_ss_cLuR::synapse0x302b480() {
   return (neuron0x3026fa0()*1.0378);
}

double NNfunction_ss_cLuR::synapse0x302b4c0() {
   return (neuron0x30272e0()*1.58661);
}

double NNfunction_ss_cLuR::synapse0x302b500() {
   return (neuron0x3027620()*0.196616);
}

double NNfunction_ss_cLuR::synapse0x302a450() {
   return (neuron0x3027960()*0.4399);
}

double NNfunction_ss_cLuR::synapse0x302a490() {
   return (neuron0x3027ec0()*0.399586);
}

double NNfunction_ss_cLuR::synapse0x302b650() {
   return (neuron0x30280e0()*-0.322741);
}

double NNfunction_ss_cLuR::synapse0x302b690() {
   return (neuron0x3028420()*1.52725);
}

double NNfunction_ss_cLuR::synapse0x302b6d0() {
   return (neuron0x3028760()*0.750053);
}

double NNfunction_ss_cLuR::synapse0x302b710() {
   return (neuron0x3028aa0()*-0.566532);
}

double NNfunction_ss_cLuR::synapse0x302b750() {
   return (neuron0x3028de0()*0.397583);
}

double NNfunction_ss_cLuR::synapse0x302b790() {
   return (neuron0x3029120()*1.18463);
}

double NNfunction_ss_cLuR::synapse0x302bb10() {
   return (neuron0x3024560()*0.0408311);
}

double NNfunction_ss_cLuR::synapse0x302bb50() {
   return (neuron0x30248a0()*-0.0165005);
}

double NNfunction_ss_cLuR::synapse0x302bb90() {
   return (neuron0x3024be0()*-0.0519135);
}

double NNfunction_ss_cLuR::synapse0x302bbd0() {
   return (neuron0x3024f20()*1.51243);
}

double NNfunction_ss_cLuR::synapse0x302bc10() {
   return (neuron0x3025260()*-0.0368704);
}

double NNfunction_ss_cLuR::synapse0x302bc50() {
   return (neuron0x30255a0()*0.0118279);
}

double NNfunction_ss_cLuR::synapse0x302bc90() {
   return (neuron0x30258e0()*-0.0020964);
}

double NNfunction_ss_cLuR::synapse0x302bcd0() {
   return (neuron0x3025c20()*0.0027009);
}

double NNfunction_ss_cLuR::synapse0x302bd10() {
   return (neuron0x3025f60()*0.0237693);
}

double NNfunction_ss_cLuR::synapse0x302bd50() {
   return (neuron0x30262a0()*0.0152504);
}

double NNfunction_ss_cLuR::synapse0x302bd90() {
   return (neuron0x30265e0()*-0.00026467);
}

double NNfunction_ss_cLuR::synapse0x302bdd0() {
   return (neuron0x3026920()*-0.0300096);
}

double NNfunction_ss_cLuR::synapse0x302be10() {
   return (neuron0x3026c60()*0.241239);
}

double NNfunction_ss_cLuR::synapse0x302be50() {
   return (neuron0x3026fa0()*-0.0159686);
}

double NNfunction_ss_cLuR::synapse0x302be90() {
   return (neuron0x30272e0()*-0.241987);
}

double NNfunction_ss_cLuR::synapse0x302bed0() {
   return (neuron0x3027620()*0.00467261);
}

double NNfunction_ss_cLuR::synapse0x302b960() {
   return (neuron0x3027960()*-0.00982313);
}

double NNfunction_ss_cLuR::synapse0x302b9a0() {
   return (neuron0x3027ec0()*0.0177823);
}

double NNfunction_ss_cLuR::synapse0x302c020() {
   return (neuron0x30280e0()*0.000418138);
}

double NNfunction_ss_cLuR::synapse0x302c060() {
   return (neuron0x3028420()*0.00908661);
}

double NNfunction_ss_cLuR::synapse0x302c0a0() {
   return (neuron0x3028760()*0.013209);
}

double NNfunction_ss_cLuR::synapse0x302c0e0() {
   return (neuron0x3028aa0()*-0.00298808);
}

double NNfunction_ss_cLuR::synapse0x302c120() {
   return (neuron0x3028de0()*-0.00853605);
}

double NNfunction_ss_cLuR::synapse0x302c160() {
   return (neuron0x3029120()*-0.00851159);
}

double NNfunction_ss_cLuR::synapse0x302c4e0() {
   return (neuron0x3024560()*0.0135622);
}

double NNfunction_ss_cLuR::synapse0x302c520() {
   return (neuron0x30248a0()*-0.42244);
}

double NNfunction_ss_cLuR::synapse0x302c560() {
   return (neuron0x3024be0()*0.381537);
}

double NNfunction_ss_cLuR::synapse0x302c5a0() {
   return (neuron0x3024f20()*-1.45264);
}

double NNfunction_ss_cLuR::synapse0x302c5e0() {
   return (neuron0x3025260()*0.0480146);
}

double NNfunction_ss_cLuR::synapse0x302c620() {
   return (neuron0x30255a0()*0.0293533);
}

double NNfunction_ss_cLuR::synapse0x302c660() {
   return (neuron0x30258e0()*-0.104466);
}

double NNfunction_ss_cLuR::synapse0x302c6a0() {
   return (neuron0x3025c20()*0.00993904);
}

double NNfunction_ss_cLuR::synapse0x302c6e0() {
   return (neuron0x3025f60()*-0.136009);
}

double NNfunction_ss_cLuR::synapse0x2de3e30() {
   return (neuron0x30262a0()*-0.0128828);
}

double NNfunction_ss_cLuR::synapse0x2de3e70() {
   return (neuron0x30265e0()*-0.0919625);
}

double NNfunction_ss_cLuR::synapse0x2de3eb0() {
   return (neuron0x3026920()*-0.347767);
}

double NNfunction_ss_cLuR::synapse0x2de3ef0() {
   return (neuron0x3026c60()*-0.0856952);
}

double NNfunction_ss_cLuR::synapse0x2de3f30() {
   return (neuron0x3026fa0()*0.047685);
}

double NNfunction_ss_cLuR::synapse0x2de3f70() {
   return (neuron0x30272e0()*0.194271);
}

double NNfunction_ss_cLuR::synapse0x2de3fb0() {
   return (neuron0x3027620()*-0.126152);
}

double NNfunction_ss_cLuR::synapse0x302c330() {
   return (neuron0x3027960()*-0.0418163);
}

double NNfunction_ss_cLuR::synapse0x302c370() {
   return (neuron0x3027ec0()*-0.0259286);
}

double NNfunction_ss_cLuR::synapse0x2de4100() {
   return (neuron0x30280e0()*-0.182386);
}

double NNfunction_ss_cLuR::synapse0x2de4140() {
   return (neuron0x3028420()*-0.115231);
}

double NNfunction_ss_cLuR::synapse0x2de4180() {
   return (neuron0x3028760()*0.104632);
}

double NNfunction_ss_cLuR::synapse0x2de41c0() {
   return (neuron0x3028aa0()*0.00041374);
}

double NNfunction_ss_cLuR::synapse0x2de4200() {
   return (neuron0x3028de0()*0.032593);
}

double NNfunction_ss_cLuR::synapse0x302cf30() {
   return (neuron0x3029120()*-0.0674853);
}

double NNfunction_ss_cLuR::synapse0x302d2b0() {
   return (neuron0x3024560()*-0.0185115);
}

double NNfunction_ss_cLuR::synapse0x302d2f0() {
   return (neuron0x30248a0()*-0.0440425);
}

double NNfunction_ss_cLuR::synapse0x302d330() {
   return (neuron0x3024be0()*-0.0797197);
}

double NNfunction_ss_cLuR::synapse0x302d370() {
   return (neuron0x3024f20()*-9.40047);
}

double NNfunction_ss_cLuR::synapse0x302d3b0() {
   return (neuron0x3025260()*0.0328362);
}

double NNfunction_ss_cLuR::synapse0x302d3f0() {
   return (neuron0x30255a0()*0.00484054);
}

double NNfunction_ss_cLuR::synapse0x302d430() {
   return (neuron0x30258e0()*0.00619975);
}

double NNfunction_ss_cLuR::synapse0x302d470() {
   return (neuron0x3025c20()*-0.0177619);
}

double NNfunction_ss_cLuR::synapse0x302d4b0() {
   return (neuron0x3025f60()*-0.0515773);
}

double NNfunction_ss_cLuR::synapse0x302d4f0() {
   return (neuron0x30262a0()*0.039309);
}

double NNfunction_ss_cLuR::synapse0x302d530() {
   return (neuron0x30265e0()*0.0178248);
}

double NNfunction_ss_cLuR::synapse0x302d570() {
   return (neuron0x3026920()*-0.00707381);
}

double NNfunction_ss_cLuR::synapse0x302d5b0() {
   return (neuron0x3026c60()*0.808073);
}

double NNfunction_ss_cLuR::synapse0x302d5f0() {
   return (neuron0x3026fa0()*0.0264878);
}

double NNfunction_ss_cLuR::synapse0x302d630() {
   return (neuron0x30272e0()*0.878105);
}

double NNfunction_ss_cLuR::synapse0x302d670() {
   return (neuron0x3027620()*-0.0173011);
}

double NNfunction_ss_cLuR::synapse0x302d100() {
   return (neuron0x3027960()*-0.0170921);
}

double NNfunction_ss_cLuR::synapse0x302d140() {
   return (neuron0x3027ec0()*0.0231387);
}

double NNfunction_ss_cLuR::synapse0x302d7c0() {
   return (neuron0x30280e0()*0.00495944);
}

double NNfunction_ss_cLuR::synapse0x302d800() {
   return (neuron0x3028420()*-0.0125862);
}

double NNfunction_ss_cLuR::synapse0x302d840() {
   return (neuron0x3028760()*0.00298151);
}

double NNfunction_ss_cLuR::synapse0x302d880() {
   return (neuron0x3028aa0()*-0.0301054);
}

double NNfunction_ss_cLuR::synapse0x302d8c0() {
   return (neuron0x3028de0()*0.0435247);
}

double NNfunction_ss_cLuR::synapse0x302d900() {
   return (neuron0x3029120()*-0.0266629);
}

double NNfunction_ss_cLuR::synapse0x302dc80() {
   return (neuron0x3024560()*-0.0665543);
}

double NNfunction_ss_cLuR::synapse0x302dcc0() {
   return (neuron0x30248a0()*-0.196208);
}

double NNfunction_ss_cLuR::synapse0x302dd00() {
   return (neuron0x3024be0()*-0.0150073);
}

double NNfunction_ss_cLuR::synapse0x302dd40() {
   return (neuron0x3024f20()*0.25956);
}

double NNfunction_ss_cLuR::synapse0x302dd80() {
   return (neuron0x3025260()*0.551383);
}

double NNfunction_ss_cLuR::synapse0x302ddc0() {
   return (neuron0x30255a0()*0.213678);
}

double NNfunction_ss_cLuR::synapse0x302de00() {
   return (neuron0x30258e0()*0.576337);
}

double NNfunction_ss_cLuR::synapse0x302de40() {
   return (neuron0x3025c20()*-0.0186222);
}

double NNfunction_ss_cLuR::synapse0x302de80() {
   return (neuron0x3025f60()*-0.172863);
}

double NNfunction_ss_cLuR::synapse0x302dec0() {
   return (neuron0x30262a0()*-0.181262);
}

double NNfunction_ss_cLuR::synapse0x302df00() {
   return (neuron0x30265e0()*-0.111406);
}

double NNfunction_ss_cLuR::synapse0x302df40() {
   return (neuron0x3026920()*0.236931);
}

double NNfunction_ss_cLuR::synapse0x302df80() {
   return (neuron0x3026c60()*-2.95288);
}

double NNfunction_ss_cLuR::synapse0x302dfc0() {
   return (neuron0x3026fa0()*0.0548909);
}

double NNfunction_ss_cLuR::synapse0x302e000() {
   return (neuron0x30272e0()*-0.150947);
}

double NNfunction_ss_cLuR::synapse0x302e040() {
   return (neuron0x3027620()*-0.376178);
}

double NNfunction_ss_cLuR::synapse0x302dad0() {
   return (neuron0x3027960()*0.145802);
}

double NNfunction_ss_cLuR::synapse0x302db10() {
   return (neuron0x3027ec0()*0.130061);
}

double NNfunction_ss_cLuR::synapse0x302e190() {
   return (neuron0x30280e0()*0.0134686);
}

double NNfunction_ss_cLuR::synapse0x302e1d0() {
   return (neuron0x3028420()*-0.126979);
}

double NNfunction_ss_cLuR::synapse0x302e210() {
   return (neuron0x3028760()*0.195355);
}

double NNfunction_ss_cLuR::synapse0x302e250() {
   return (neuron0x3028aa0()*0.375576);
}

double NNfunction_ss_cLuR::synapse0x302e290() {
   return (neuron0x3028de0()*-0.171142);
}

double NNfunction_ss_cLuR::synapse0x302e2d0() {
   return (neuron0x3029120()*-0.169117);
}

double NNfunction_ss_cLuR::synapse0x3027db0() {
   return (neuron0x3024560()*-0.237941);
}

double NNfunction_ss_cLuR::synapse0x3027df0() {
   return (neuron0x30248a0()*-0.70989);
}

double NNfunction_ss_cLuR::synapse0x3027e30() {
   return (neuron0x3024be0()*-1.76389);
}

double NNfunction_ss_cLuR::synapse0x3027e70() {
   return (neuron0x3024f20()*2.11784);
}

double NNfunction_ss_cLuR::synapse0x302e860() {
   return (neuron0x3025260()*0.244061);
}

double NNfunction_ss_cLuR::synapse0x302e8a0() {
   return (neuron0x30255a0()*0.00897903);
}

double NNfunction_ss_cLuR::synapse0x302e8e0() {
   return (neuron0x30258e0()*-0.469978);
}

double NNfunction_ss_cLuR::synapse0x302e920() {
   return (neuron0x3025c20()*-0.241733);
}

double NNfunction_ss_cLuR::synapse0x302e960() {
   return (neuron0x3025f60()*-0.24491);
}

double NNfunction_ss_cLuR::synapse0x302e9a0() {
   return (neuron0x30262a0()*0.253515);
}

double NNfunction_ss_cLuR::synapse0x302e9e0() {
   return (neuron0x30265e0()*0.0329576);
}

double NNfunction_ss_cLuR::synapse0x302ea20() {
   return (neuron0x3026920()*-0.118561);
}

double NNfunction_ss_cLuR::synapse0x302ea60() {
   return (neuron0x3026c60()*0.237037);
}

double NNfunction_ss_cLuR::synapse0x302eaa0() {
   return (neuron0x3026fa0()*-0.716138);
}

double NNfunction_ss_cLuR::synapse0x302eae0() {
   return (neuron0x30272e0()*-0.0715399);
}

double NNfunction_ss_cLuR::synapse0x302eb20() {
   return (neuron0x3027620()*0.45014);
}

double NNfunction_ss_cLuR::synapse0x302e4a0() {
   return (neuron0x3027960()*-1.12457);
}

double NNfunction_ss_cLuR::synapse0x302e4e0() {
   return (neuron0x3027ec0()*-0.249338);
}

double NNfunction_ss_cLuR::synapse0x302ec70() {
   return (neuron0x30280e0()*0.652579);
}

double NNfunction_ss_cLuR::synapse0x302ecb0() {
   return (neuron0x3028420()*-0.570961);
}

double NNfunction_ss_cLuR::synapse0x302ecf0() {
   return (neuron0x3028760()*0.0470916);
}

double NNfunction_ss_cLuR::synapse0x302ed30() {
   return (neuron0x3028aa0()*-0.519172);
}

double NNfunction_ss_cLuR::synapse0x302ed70() {
   return (neuron0x3028de0()*0.225474);
}

double NNfunction_ss_cLuR::synapse0x302edb0() {
   return (neuron0x3029120()*-0.167046);
}

double NNfunction_ss_cLuR::synapse0x302f130() {
   return (neuron0x3024560()*0.0221076);
}

double NNfunction_ss_cLuR::synapse0x302f170() {
   return (neuron0x30248a0()*0.0230814);
}

double NNfunction_ss_cLuR::synapse0x302f1b0() {
   return (neuron0x3024be0()*-0.000748622);
}

double NNfunction_ss_cLuR::synapse0x302f1f0() {
   return (neuron0x3024f20()*-1.72882);
}

double NNfunction_ss_cLuR::synapse0x302f230() {
   return (neuron0x3025260()*0.00113427);
}

double NNfunction_ss_cLuR::synapse0x302f270() {
   return (neuron0x30255a0()*-0.0433204);
}

double NNfunction_ss_cLuR::synapse0x302f2b0() {
   return (neuron0x30258e0()*-0.0355575);
}

double NNfunction_ss_cLuR::synapse0x302f2f0() {
   return (neuron0x3025c20()*0.0170085);
}

double NNfunction_ss_cLuR::synapse0x302f330() {
   return (neuron0x3025f60()*0.0222452);
}

double NNfunction_ss_cLuR::synapse0x302f370() {
   return (neuron0x30262a0()*-0.0015566);
}

double NNfunction_ss_cLuR::synapse0x302f3b0() {
   return (neuron0x30265e0()*0.00906378);
}

double NNfunction_ss_cLuR::synapse0x302f3f0() {
   return (neuron0x3026920()*-0.0347479);
}

double NNfunction_ss_cLuR::synapse0x302f430() {
   return (neuron0x3026c60()*-2.42166);
}

double NNfunction_ss_cLuR::synapse0x302f470() {
   return (neuron0x3026fa0()*-0.0316416);
}

double NNfunction_ss_cLuR::synapse0x302f4b0() {
   return (neuron0x30272e0()*0.0889749);
}

double NNfunction_ss_cLuR::synapse0x302f4f0() {
   return (neuron0x3027620()*-0.010858);
}

double NNfunction_ss_cLuR::synapse0x302ef80() {
   return (neuron0x3027960()*-0.0596377);
}

double NNfunction_ss_cLuR::synapse0x302efc0() {
   return (neuron0x3027ec0()*-0.0285821);
}

double NNfunction_ss_cLuR::synapse0x302f640() {
   return (neuron0x30280e0()*-0.0432122);
}

double NNfunction_ss_cLuR::synapse0x302f680() {
   return (neuron0x3028420()*-0.0527141);
}

double NNfunction_ss_cLuR::synapse0x302f6c0() {
   return (neuron0x3028760()*0.0201668);
}

double NNfunction_ss_cLuR::synapse0x302f700() {
   return (neuron0x3028aa0()*-0.0502065);
}

double NNfunction_ss_cLuR::synapse0x302f740() {
   return (neuron0x3028de0()*0.0312736);
}

double NNfunction_ss_cLuR::synapse0x302f780() {
   return (neuron0x3029120()*0.0101175);
}

double NNfunction_ss_cLuR::synapse0x302fb00() {
   return (neuron0x3024560()*0.0909806);
}

double NNfunction_ss_cLuR::synapse0x302fb40() {
   return (neuron0x30248a0()*0.263523);
}

double NNfunction_ss_cLuR::synapse0x302fb80() {
   return (neuron0x3024be0()*0.212715);
}

double NNfunction_ss_cLuR::synapse0x302fbc0() {
   return (neuron0x3024f20()*0.0915235);
}

double NNfunction_ss_cLuR::synapse0x302fc00() {
   return (neuron0x3025260()*-0.640478);
}

double NNfunction_ss_cLuR::synapse0x302fc40() {
   return (neuron0x30255a0()*0.0745953);
}

double NNfunction_ss_cLuR::synapse0x302fc80() {
   return (neuron0x30258e0()*0.913174);
}

double NNfunction_ss_cLuR::synapse0x302fcc0() {
   return (neuron0x3025c20()*-0.634126);
}

double NNfunction_ss_cLuR::synapse0x302fd00() {
   return (neuron0x3025f60()*0.206622);
}

double NNfunction_ss_cLuR::synapse0x302fd40() {
   return (neuron0x30262a0()*-0.142063);
}

double NNfunction_ss_cLuR::synapse0x302fd80() {
   return (neuron0x30265e0()*-0.417059);
}

double NNfunction_ss_cLuR::synapse0x302fdc0() {
   return (neuron0x3026920()*-0.189225);
}

double NNfunction_ss_cLuR::synapse0x302fe00() {
   return (neuron0x3026c60()*-0.534244);
}

double NNfunction_ss_cLuR::synapse0x302fe40() {
   return (neuron0x3026fa0()*-0.134096);
}

double NNfunction_ss_cLuR::synapse0x302fe80() {
   return (neuron0x30272e0()*-2.63295);
}

double NNfunction_ss_cLuR::synapse0x302fec0() {
   return (neuron0x3027620()*-0.207957);
}

double NNfunction_ss_cLuR::synapse0x302f950() {
   return (neuron0x3027960()*-0.516904);
}

double NNfunction_ss_cLuR::synapse0x302f990() {
   return (neuron0x3027ec0()*-0.0135593);
}

double NNfunction_ss_cLuR::synapse0x302c720() {
   return (neuron0x30280e0()*0.13187);
}

double NNfunction_ss_cLuR::synapse0x302c760() {
   return (neuron0x3028420()*0.583416);
}

double NNfunction_ss_cLuR::synapse0x302c7a0() {
   return (neuron0x3028760()*-0.00135499);
}

double NNfunction_ss_cLuR::synapse0x302c7e0() {
   return (neuron0x3028aa0()*-0.117243);
}

double NNfunction_ss_cLuR::synapse0x302c820() {
   return (neuron0x3028de0()*0.10077);
}

double NNfunction_ss_cLuR::synapse0x302c860() {
   return (neuron0x3029120()*0.447956);
}

double NNfunction_ss_cLuR::synapse0x302cbe0() {
   return (neuron0x3024560()*0.0438314);
}

double NNfunction_ss_cLuR::synapse0x302cc20() {
   return (neuron0x30248a0()*-0.0674384);
}

double NNfunction_ss_cLuR::synapse0x302cc60() {
   return (neuron0x3024be0()*0.00495295);
}

double NNfunction_ss_cLuR::synapse0x302cca0() {
   return (neuron0x3024f20()*-0.944387);
}

double NNfunction_ss_cLuR::synapse0x302cce0() {
   return (neuron0x3025260()*0.00298771);
}

double NNfunction_ss_cLuR::synapse0x302cd20() {
   return (neuron0x30255a0()*-0.107998);
}

double NNfunction_ss_cLuR::synapse0x302cd60() {
   return (neuron0x30258e0()*-0.0234827);
}

double NNfunction_ss_cLuR::synapse0x302cda0() {
   return (neuron0x3025c20()*0.125844);
}

double NNfunction_ss_cLuR::synapse0x302cde0() {
   return (neuron0x3025f60()*-0.0315876);
}

double NNfunction_ss_cLuR::synapse0x302ce20() {
   return (neuron0x30262a0()*-0.0406049);
}

double NNfunction_ss_cLuR::synapse0x302ce60() {
   return (neuron0x30265e0()*-0.0239464);
}

double NNfunction_ss_cLuR::synapse0x302cea0() {
   return (neuron0x3026920()*-0.157353);
}

double NNfunction_ss_cLuR::synapse0x302cee0() {
   return (neuron0x3026c60()*1.06439);
}

double NNfunction_ss_cLuR::synapse0x3031020() {
   return (neuron0x3026fa0()*0.000662472);
}

double NNfunction_ss_cLuR::synapse0x3031060() {
   return (neuron0x30272e0()*1.34931);
}

double NNfunction_ss_cLuR::synapse0x30310a0() {
   return (neuron0x3027620()*-0.0628202);
}

double NNfunction_ss_cLuR::synapse0x302ca30() {
   return (neuron0x3027960()*0.0302772);
}

double NNfunction_ss_cLuR::synapse0x302ca70() {
   return (neuron0x3027ec0()*-0.101117);
}

double NNfunction_ss_cLuR::synapse0x30311f0() {
   return (neuron0x30280e0()*-0.0841728);
}

double NNfunction_ss_cLuR::synapse0x3031230() {
   return (neuron0x3028420()*-0.0933782);
}

double NNfunction_ss_cLuR::synapse0x3031270() {
   return (neuron0x3028760()*0.0226472);
}

double NNfunction_ss_cLuR::synapse0x30312b0() {
   return (neuron0x3028aa0()*-0.0156914);
}

double NNfunction_ss_cLuR::synapse0x30312f0() {
   return (neuron0x3028de0()*-0.0257057);
}

double NNfunction_ss_cLuR::synapse0x3031330() {
   return (neuron0x3029120()*-0.0314046);
}

double NNfunction_ss_cLuR::synapse0x30316b0() {
   return (neuron0x3024560()*0.00779743);
}

double NNfunction_ss_cLuR::synapse0x30316f0() {
   return (neuron0x30248a0()*-0.00684309);
}

double NNfunction_ss_cLuR::synapse0x3031730() {
   return (neuron0x3024be0()*-0.0343467);
}

double NNfunction_ss_cLuR::synapse0x3031770() {
   return (neuron0x3024f20()*0.00415531);
}

double NNfunction_ss_cLuR::synapse0x30317b0() {
   return (neuron0x3025260()*-0.0101957);
}

double NNfunction_ss_cLuR::synapse0x30317f0() {
   return (neuron0x30255a0()*-0.00143612);
}

double NNfunction_ss_cLuR::synapse0x3031830() {
   return (neuron0x30258e0()*0.00768447);
}

double NNfunction_ss_cLuR::synapse0x3031870() {
   return (neuron0x3025c20()*-0.000626272);
}

double NNfunction_ss_cLuR::synapse0x30318b0() {
   return (neuron0x3025f60()*0.00895401);
}

double NNfunction_ss_cLuR::synapse0x30318f0() {
   return (neuron0x30262a0()*0.0094938);
}

double NNfunction_ss_cLuR::synapse0x3031930() {
   return (neuron0x30265e0()*0.00301392);
}

double NNfunction_ss_cLuR::synapse0x3031970() {
   return (neuron0x3026920()*0.0151707);
}

double NNfunction_ss_cLuR::synapse0x30319b0() {
   return (neuron0x3026c60()*-0.0577583);
}

double NNfunction_ss_cLuR::synapse0x30319f0() {
   return (neuron0x3026fa0()*-0.00119302);
}

double NNfunction_ss_cLuR::synapse0x3031a30() {
   return (neuron0x30272e0()*0.708577);
}

double NNfunction_ss_cLuR::synapse0x3031a70() {
   return (neuron0x3027620()*0.0209156);
}

double NNfunction_ss_cLuR::synapse0x3031500() {
   return (neuron0x3027960()*0.00431291);
}

double NNfunction_ss_cLuR::synapse0x3031540() {
   return (neuron0x3027ec0()*0.0213065);
}

double NNfunction_ss_cLuR::synapse0x3031bc0() {
   return (neuron0x30280e0()*0.0179873);
}

double NNfunction_ss_cLuR::synapse0x3031c00() {
   return (neuron0x3028420()*0.0142931);
}

double NNfunction_ss_cLuR::synapse0x3031c40() {
   return (neuron0x3028760()*-0.00696243);
}

double NNfunction_ss_cLuR::synapse0x3031c80() {
   return (neuron0x3028aa0()*-0.00201522);
}

double NNfunction_ss_cLuR::synapse0x3031cc0() {
   return (neuron0x3028de0()*-0.00436747);
}

double NNfunction_ss_cLuR::synapse0x3031d00() {
   return (neuron0x3029120()*-0.00454759);
}

double NNfunction_ss_cLuR::synapse0x3032080() {
   return (neuron0x3024560()*0.168087);
}

double NNfunction_ss_cLuR::synapse0x30320c0() {
   return (neuron0x30248a0()*-0.213421);
}

double NNfunction_ss_cLuR::synapse0x3032100() {
   return (neuron0x3024be0()*-0.515923);
}

double NNfunction_ss_cLuR::synapse0x3032140() {
   return (neuron0x3024f20()*0.415783);
}

double NNfunction_ss_cLuR::synapse0x3032180() {
   return (neuron0x3025260()*-0.146895);
}

double NNfunction_ss_cLuR::synapse0x30321c0() {
   return (neuron0x30255a0()*-0.483863);
}

double NNfunction_ss_cLuR::synapse0x3032200() {
   return (neuron0x30258e0()*-0.994082);
}

double NNfunction_ss_cLuR::synapse0x3032240() {
   return (neuron0x3025c20()*0.0905776);
}

double NNfunction_ss_cLuR::synapse0x3032280() {
   return (neuron0x3025f60()*0.540516);
}

double NNfunction_ss_cLuR::synapse0x30322c0() {
   return (neuron0x30262a0()*0.181919);
}

double NNfunction_ss_cLuR::synapse0x3032300() {
   return (neuron0x30265e0()*0.138114);
}

double NNfunction_ss_cLuR::synapse0x3032340() {
   return (neuron0x3026920()*0.287753);
}

double NNfunction_ss_cLuR::synapse0x3032380() {
   return (neuron0x3026c60()*-0.522492);
}

double NNfunction_ss_cLuR::synapse0x30323c0() {
   return (neuron0x3026fa0()*-0.676744);
}

double NNfunction_ss_cLuR::synapse0x3032400() {
   return (neuron0x30272e0()*-0.382886);
}

double NNfunction_ss_cLuR::synapse0x3032440() {
   return (neuron0x3027620()*0.270323);
}

double NNfunction_ss_cLuR::synapse0x3031ed0() {
   return (neuron0x3027960()*0.623366);
}

double NNfunction_ss_cLuR::synapse0x3031f10() {
   return (neuron0x3027ec0()*0.260785);
}

double NNfunction_ss_cLuR::synapse0x3032590() {
   return (neuron0x30280e0()*-0.658798);
}

double NNfunction_ss_cLuR::synapse0x30325d0() {
   return (neuron0x3028420()*0.274355);
}

double NNfunction_ss_cLuR::synapse0x3032610() {
   return (neuron0x3028760()*0.414083);
}

double NNfunction_ss_cLuR::synapse0x3032650() {
   return (neuron0x3028aa0()*0.115477);
}

double NNfunction_ss_cLuR::synapse0x3032690() {
   return (neuron0x3028de0()*-0.872734);
}

double NNfunction_ss_cLuR::synapse0x30326d0() {
   return (neuron0x3029120()*-0.110619);
}

double NNfunction_ss_cLuR::synapse0x3032a50() {
   return (neuron0x3024560()*1.02666);
}

double NNfunction_ss_cLuR::synapse0x3032a90() {
   return (neuron0x30248a0()*0.0222365);
}

double NNfunction_ss_cLuR::synapse0x3032ad0() {
   return (neuron0x3024be0()*0.726162);
}

double NNfunction_ss_cLuR::synapse0x3032b10() {
   return (neuron0x3024f20()*0.700504);
}

double NNfunction_ss_cLuR::synapse0x3032b50() {
   return (neuron0x3025260()*-0.939964);
}

double NNfunction_ss_cLuR::synapse0x3032b90() {
   return (neuron0x30255a0()*0.415422);
}

double NNfunction_ss_cLuR::synapse0x3032bd0() {
   return (neuron0x30258e0()*-0.214831);
}

double NNfunction_ss_cLuR::synapse0x3032c10() {
   return (neuron0x3025c20()*0.228072);
}

double NNfunction_ss_cLuR::synapse0x3032c50() {
   return (neuron0x3025f60()*-0.929015);
}

double NNfunction_ss_cLuR::synapse0x3032c90() {
   return (neuron0x30262a0()*-1.35435);
}

double NNfunction_ss_cLuR::synapse0x3032cd0() {
   return (neuron0x30265e0()*0.581791);
}

double NNfunction_ss_cLuR::synapse0x3032d10() {
   return (neuron0x3026920()*-0.0443175);
}

double NNfunction_ss_cLuR::synapse0x3032d50() {
   return (neuron0x3026c60()*-0.512741);
}

double NNfunction_ss_cLuR::synapse0x3032d90() {
   return (neuron0x3026fa0()*0.625978);
}

double NNfunction_ss_cLuR::synapse0x3032dd0() {
   return (neuron0x30272e0()*-0.42701);
}

double NNfunction_ss_cLuR::synapse0x3032e10() {
   return (neuron0x3027620()*0.716963);
}

double NNfunction_ss_cLuR::synapse0x30328a0() {
   return (neuron0x3027960()*0.528489);
}

double NNfunction_ss_cLuR::synapse0x30328e0() {
   return (neuron0x3027ec0()*0.458629);
}

double NNfunction_ss_cLuR::synapse0x3032f60() {
   return (neuron0x30280e0()*-0.979797);
}

double NNfunction_ss_cLuR::synapse0x3032fa0() {
   return (neuron0x3028420()*-0.896134);
}

double NNfunction_ss_cLuR::synapse0x3032fe0() {
   return (neuron0x3028760()*0.179254);
}

double NNfunction_ss_cLuR::synapse0x3033020() {
   return (neuron0x3028aa0()*0.566709);
}

double NNfunction_ss_cLuR::synapse0x3033060() {
   return (neuron0x3028de0()*0.426704);
}

double NNfunction_ss_cLuR::synapse0x30330a0() {
   return (neuron0x3029120()*1.49076);
}

double NNfunction_ss_cLuR::synapse0x3033420() {
   return (neuron0x3024560()*0.178182);
}

double NNfunction_ss_cLuR::synapse0x3024780() {
   return (neuron0x30248a0()*0.414159);
}

double NNfunction_ss_cLuR::synapse0x30247c0() {
   return (neuron0x3024be0()*-0.133969);
}

double NNfunction_ss_cLuR::synapse0x3024ac0() {
   return (neuron0x3024f20()*-2.87373);
}

double NNfunction_ss_cLuR::synapse0x3024b00() {
   return (neuron0x3025260()*0.0936639);
}

double NNfunction_ss_cLuR::synapse0x3024e00() {
   return (neuron0x30255a0()*0.250556);
}

double NNfunction_ss_cLuR::synapse0x3024e40() {
   return (neuron0x30258e0()*0.023155);
}

double NNfunction_ss_cLuR::synapse0x3025140() {
   return (neuron0x3025c20()*-0.0698285);
}

double NNfunction_ss_cLuR::synapse0x3025180() {
   return (neuron0x3025f60()*0.0998891);
}

double NNfunction_ss_cLuR::synapse0x3025480() {
   return (neuron0x30262a0()*0.01956);
}

double NNfunction_ss_cLuR::synapse0x30254c0() {
   return (neuron0x30265e0()*0.00132609);
}

double NNfunction_ss_cLuR::synapse0x30257c0() {
   return (neuron0x3026920()*-0.0270258);
}

double NNfunction_ss_cLuR::synapse0x3025800() {
   return (neuron0x3026c60()*0.54647);
}

double NNfunction_ss_cLuR::synapse0x3025b00() {
   return (neuron0x3026fa0()*-0.0786907);
}

double NNfunction_ss_cLuR::synapse0x3025b40() {
   return (neuron0x30272e0()*0.235017);
}

double NNfunction_ss_cLuR::synapse0x3025e40() {
   return (neuron0x3027620()*0.0643005);
}

double NNfunction_ss_cLuR::synapse0x3025e80() {
   return (neuron0x3027960()*-0.0751415);
}

double NNfunction_ss_cLuR::synapse0x3026180() {
   return (neuron0x3027ec0()*0.315703);
}

double NNfunction_ss_cLuR::synapse0x30261c0() {
   return (neuron0x30280e0()*-0.0181313);
}

double NNfunction_ss_cLuR::synapse0x30264c0() {
   return (neuron0x3028420()*0.058862);
}

double NNfunction_ss_cLuR::synapse0x3026500() {
   return (neuron0x3028760()*0.155145);
}

double NNfunction_ss_cLuR::synapse0x3026800() {
   return (neuron0x3028aa0()*-0.176876);
}

double NNfunction_ss_cLuR::synapse0x3026840() {
   return (neuron0x3028de0()*0.158145);
}

double NNfunction_ss_cLuR::synapse0x3026b40() {
   return (neuron0x3029120()*-0.0710665);
}

double NNfunction_ss_cLuR::synapse0x3026b80() {
   return (neuron0x3024560()*-0.131418);
}

double NNfunction_ss_cLuR::synapse0x3027840() {
   return (neuron0x30248a0()*-0.930227);
}

double NNfunction_ss_cLuR::synapse0x3027880() {
   return (neuron0x3024be0()*0.0257097);
}

double NNfunction_ss_cLuR::synapse0x3033270() {
   return (neuron0x3024f20()*-0.886513);
}

double NNfunction_ss_cLuR::synapse0x30332b0() {
   return (neuron0x3025260()*-0.815759);
}

double NNfunction_ss_cLuR::synapse0x3027b80() {
   return (neuron0x30255a0()*0.132085);
}

double NNfunction_ss_cLuR::synapse0x3027bc0() {
   return (neuron0x30258e0()*0.0525212);
}

double NNfunction_ss_cLuR::synapse0x2dd5b50() {
   return (neuron0x3025c20()*-0.874089);
}

double NNfunction_ss_cLuR::synapse0x2dd5b90() {
   return (neuron0x3025f60()*0.866371);
}

double NNfunction_ss_cLuR::synapse0x3028300() {
   return (neuron0x30262a0()*0.0400862);
}

double NNfunction_ss_cLuR::synapse0x3028340() {
   return (neuron0x30265e0()*-0.952508);
}

double NNfunction_ss_cLuR::synapse0x3028640() {
   return (neuron0x3026920()*0.170907);
}

double NNfunction_ss_cLuR::synapse0x3028680() {
   return (neuron0x3026c60()*0.576906);
}

double NNfunction_ss_cLuR::synapse0x3028980() {
   return (neuron0x3026fa0()*0.595827);
}

double NNfunction_ss_cLuR::synapse0x30289c0() {
   return (neuron0x30272e0()*0.658622);
}

double NNfunction_ss_cLuR::synapse0x3028cc0() {
   return (neuron0x3027620()*-0.293704);
}

double NNfunction_ss_cLuR::synapse0x3028d00() {
   return (neuron0x3027960()*0.26297);
}

double NNfunction_ss_cLuR::synapse0x3029000() {
   return (neuron0x3027ec0()*0.302199);
}

double NNfunction_ss_cLuR::synapse0x3029040() {
   return (neuron0x30280e0()*-0.654093);
}

double NNfunction_ss_cLuR::synapse0x3029340() {
   return (neuron0x3028420()*0.130476);
}

double NNfunction_ss_cLuR::synapse0x3029380() {
   return (neuron0x3028760()*-0.346759);
}

double NNfunction_ss_cLuR::synapse0x3026e80() {
   return (neuron0x3028aa0()*-0.520647);
}

double NNfunction_ss_cLuR::synapse0x3026ec0() {
   return (neuron0x3028de0()*-0.298099);
}

double NNfunction_ss_cLuR::synapse0x3035190() {
   return (neuron0x3029120()*-0.545622);
}

double NNfunction_ss_cLuR::synapse0x3035510() {
   return (neuron0x3024560()*2.11428);
}

double NNfunction_ss_cLuR::synapse0x3035550() {
   return (neuron0x30248a0()*-0.156815);
}

double NNfunction_ss_cLuR::synapse0x3035590() {
   return (neuron0x3024be0()*0.588858);
}

double NNfunction_ss_cLuR::synapse0x30355d0() {
   return (neuron0x3024f20()*0.770728);
}

double NNfunction_ss_cLuR::synapse0x3035610() {
   return (neuron0x3025260()*-0.202778);
}

double NNfunction_ss_cLuR::synapse0x3035650() {
   return (neuron0x30255a0()*0.177969);
}

double NNfunction_ss_cLuR::synapse0x3035690() {
   return (neuron0x30258e0()*-0.138715);
}

double NNfunction_ss_cLuR::synapse0x30356d0() {
   return (neuron0x3025c20()*0.474435);
}

double NNfunction_ss_cLuR::synapse0x3035710() {
   return (neuron0x3025f60()*0.0841054);
}

double NNfunction_ss_cLuR::synapse0x3035750() {
   return (neuron0x30262a0()*-1.63726);
}

double NNfunction_ss_cLuR::synapse0x3035790() {
   return (neuron0x30265e0()*-0.596061);
}

double NNfunction_ss_cLuR::synapse0x30357d0() {
   return (neuron0x3026920()*0.763525);
}

double NNfunction_ss_cLuR::synapse0x3035810() {
   return (neuron0x3026c60()*0.296897);
}

double NNfunction_ss_cLuR::synapse0x3035850() {
   return (neuron0x3026fa0()*1.08223);
}

double NNfunction_ss_cLuR::synapse0x3035890() {
   return (neuron0x30272e0()*-0.324392);
}

double NNfunction_ss_cLuR::synapse0x30358d0() {
   return (neuron0x3027620()*0.0761822);
}

double NNfunction_ss_cLuR::synapse0x3035360() {
   return (neuron0x3027960()*-0.195585);
}

double NNfunction_ss_cLuR::synapse0x30353a0() {
   return (neuron0x3027ec0()*0.194196);
}

double NNfunction_ss_cLuR::synapse0x3035a20() {
   return (neuron0x30280e0()*-0.663988);
}

double NNfunction_ss_cLuR::synapse0x3035a60() {
   return (neuron0x3028420()*-0.46686);
}

double NNfunction_ss_cLuR::synapse0x3035aa0() {
   return (neuron0x3028760()*-1.13555);
}

double NNfunction_ss_cLuR::synapse0x3035ae0() {
   return (neuron0x3028aa0()*0.368246);
}

double NNfunction_ss_cLuR::synapse0x3035b20() {
   return (neuron0x3028de0()*0.30915);
}

double NNfunction_ss_cLuR::synapse0x3035b60() {
   return (neuron0x3029120()*1.27328);
}

double NNfunction_ss_cLuR::synapse0x3035ee0() {
   return (neuron0x3024560()*0.31228);
}

double NNfunction_ss_cLuR::synapse0x3035f20() {
   return (neuron0x30248a0()*0.975228);
}

double NNfunction_ss_cLuR::synapse0x3035f60() {
   return (neuron0x3024be0()*0.901189);
}

double NNfunction_ss_cLuR::synapse0x3035fa0() {
   return (neuron0x3024f20()*-0.323238);
}

double NNfunction_ss_cLuR::synapse0x3035fe0() {
   return (neuron0x3025260()*0.224123);
}

double NNfunction_ss_cLuR::synapse0x3036020() {
   return (neuron0x30255a0()*0.25673);
}

double NNfunction_ss_cLuR::synapse0x3036060() {
   return (neuron0x30258e0()*0.913426);
}

double NNfunction_ss_cLuR::synapse0x30360a0() {
   return (neuron0x3025c20()*1.06596);
}

double NNfunction_ss_cLuR::synapse0x30360e0() {
   return (neuron0x3025f60()*-0.00733497);
}

double NNfunction_ss_cLuR::synapse0x3036120() {
   return (neuron0x30262a0()*1.37777);
}

double NNfunction_ss_cLuR::synapse0x3036160() {
   return (neuron0x30265e0()*0.615012);
}

double NNfunction_ss_cLuR::synapse0x30361a0() {
   return (neuron0x3026920()*-0.820723);
}

double NNfunction_ss_cLuR::synapse0x30361e0() {
   return (neuron0x3026c60()*-1.00417);
}

double NNfunction_ss_cLuR::synapse0x3036220() {
   return (neuron0x3026fa0()*-0.548154);
}

double NNfunction_ss_cLuR::synapse0x3036260() {
   return (neuron0x30272e0()*0.0255465);
}

double NNfunction_ss_cLuR::synapse0x30362a0() {
   return (neuron0x3027620()*-1.14033);
}

double NNfunction_ss_cLuR::synapse0x3035d30() {
   return (neuron0x3027960()*0.392547);
}

double NNfunction_ss_cLuR::synapse0x3035d70() {
   return (neuron0x3027ec0()*-0.152552);
}

double NNfunction_ss_cLuR::synapse0x30363f0() {
   return (neuron0x30280e0()*-0.947713);
}

double NNfunction_ss_cLuR::synapse0x3036430() {
   return (neuron0x3028420()*0.735098);
}

double NNfunction_ss_cLuR::synapse0x3036470() {
   return (neuron0x3028760()*0.342149);
}

double NNfunction_ss_cLuR::synapse0x30364b0() {
   return (neuron0x3028aa0()*-0.524383);
}

double NNfunction_ss_cLuR::synapse0x30364f0() {
   return (neuron0x3028de0()*0.269699);
}

double NNfunction_ss_cLuR::synapse0x3036530() {
   return (neuron0x3029120()*0.791205);
}

double NNfunction_ss_cLuR::synapse0x30368b0() {
   return (neuron0x3024560()*-0.0121094);
}

double NNfunction_ss_cLuR::synapse0x30368f0() {
   return (neuron0x30248a0()*-0.0420689);
}

double NNfunction_ss_cLuR::synapse0x3036930() {
   return (neuron0x3024be0()*0.0393778);
}

double NNfunction_ss_cLuR::synapse0x3036970() {
   return (neuron0x3024f20()*-2.72315);
}

double NNfunction_ss_cLuR::synapse0x30369b0() {
   return (neuron0x3025260()*-0.0556007);
}

double NNfunction_ss_cLuR::synapse0x30369f0() {
   return (neuron0x30255a0()*-0.0106383);
}

double NNfunction_ss_cLuR::synapse0x3036a30() {
   return (neuron0x30258e0()*0.00837295);
}

double NNfunction_ss_cLuR::synapse0x3036a70() {
   return (neuron0x3025c20()*0.020178);
}

double NNfunction_ss_cLuR::synapse0x3036ab0() {
   return (neuron0x3025f60()*0.0188364);
}

double NNfunction_ss_cLuR::synapse0x3036af0() {
   return (neuron0x30262a0()*0.0264315);
}

double NNfunction_ss_cLuR::synapse0x3036b30() {
   return (neuron0x30265e0()*-0.000396473);
}

double NNfunction_ss_cLuR::synapse0x3036b70() {
   return (neuron0x3026920()*-0.0109816);
}

double NNfunction_ss_cLuR::synapse0x3036bb0() {
   return (neuron0x3026c60()*-0.6691);
}

double NNfunction_ss_cLuR::synapse0x3036bf0() {
   return (neuron0x3026fa0()*-0.00502254);
}

double NNfunction_ss_cLuR::synapse0x3036c30() {
   return (neuron0x30272e0()*-0.977506);
}

double NNfunction_ss_cLuR::synapse0x3036c70() {
   return (neuron0x3027620()*0.0175381);
}

double NNfunction_ss_cLuR::synapse0x3036700() {
   return (neuron0x3027960()*-0.00887176);
}

double NNfunction_ss_cLuR::synapse0x3036740() {
   return (neuron0x3027ec0()*-0.00577101);
}

double NNfunction_ss_cLuR::synapse0x3036dc0() {
   return (neuron0x30280e0()*0.0104463);
}

double NNfunction_ss_cLuR::synapse0x3036e00() {
   return (neuron0x3028420()*-0.0409797);
}

double NNfunction_ss_cLuR::synapse0x3036e40() {
   return (neuron0x3028760()*-0.0235633);
}

double NNfunction_ss_cLuR::synapse0x3036e80() {
   return (neuron0x3028aa0()*-0.0155746);
}

double NNfunction_ss_cLuR::synapse0x3036ec0() {
   return (neuron0x3028de0()*0.00283486);
}

double NNfunction_ss_cLuR::synapse0x3036f00() {
   return (neuron0x3029120()*0.0218642);
}

double NNfunction_ss_cLuR::synapse0x3037280() {
   return (neuron0x3024560()*0.353034);
}

double NNfunction_ss_cLuR::synapse0x30372c0() {
   return (neuron0x30248a0()*-0.527209);
}

double NNfunction_ss_cLuR::synapse0x3037300() {
   return (neuron0x3024be0()*1.69237);
}

double NNfunction_ss_cLuR::synapse0x3037340() {
   return (neuron0x3024f20()*-0.304671);
}

double NNfunction_ss_cLuR::synapse0x3037380() {
   return (neuron0x3025260()*-0.0567203);
}

double NNfunction_ss_cLuR::synapse0x30373c0() {
   return (neuron0x30255a0()*0.711247);
}

double NNfunction_ss_cLuR::synapse0x3037400() {
   return (neuron0x30258e0()*-0.473735);
}

double NNfunction_ss_cLuR::synapse0x3037440() {
   return (neuron0x3025c20()*-0.294367);
}

double NNfunction_ss_cLuR::synapse0x3037480() {
   return (neuron0x3025f60()*-0.506982);
}

double NNfunction_ss_cLuR::synapse0x30374c0() {
   return (neuron0x30262a0()*0.676149);
}

double NNfunction_ss_cLuR::synapse0x3037500() {
   return (neuron0x30265e0()*0.248791);
}

double NNfunction_ss_cLuR::synapse0x3037540() {
   return (neuron0x3026920()*-0.802928);
}

double NNfunction_ss_cLuR::synapse0x3037580() {
   return (neuron0x3026c60()*-0.00231233);
}

double NNfunction_ss_cLuR::synapse0x30375c0() {
   return (neuron0x3026fa0()*0.290688);
}

double NNfunction_ss_cLuR::synapse0x3037600() {
   return (neuron0x30272e0()*-0.403716);
}

double NNfunction_ss_cLuR::synapse0x3037640() {
   return (neuron0x3027620()*-0.294499);
}

double NNfunction_ss_cLuR::synapse0x30370d0() {
   return (neuron0x3027960()*0.360875);
}

double NNfunction_ss_cLuR::synapse0x3037110() {
   return (neuron0x3027ec0()*-0.200883);
}

double NNfunction_ss_cLuR::synapse0x3037790() {
   return (neuron0x30280e0()*0.655193);
}

double NNfunction_ss_cLuR::synapse0x30377d0() {
   return (neuron0x3028420()*-0.354209);
}

double NNfunction_ss_cLuR::synapse0x3037810() {
   return (neuron0x3028760()*0.121289);
}

double NNfunction_ss_cLuR::synapse0x3037850() {
   return (neuron0x3028aa0()*0.0670019);
}

double NNfunction_ss_cLuR::synapse0x3037890() {
   return (neuron0x3028de0()*0.469631);
}

double NNfunction_ss_cLuR::synapse0x30378d0() {
   return (neuron0x3029120()*1.56825);
}

double NNfunction_ss_cLuR::synapse0x3037c50() {
   return (neuron0x3024560()*0.387391);
}

double NNfunction_ss_cLuR::synapse0x3037c90() {
   return (neuron0x30248a0()*-0.301481);
}

double NNfunction_ss_cLuR::synapse0x3037cd0() {
   return (neuron0x3024be0()*0.347906);
}

double NNfunction_ss_cLuR::synapse0x3037d10() {
   return (neuron0x3024f20()*0.597022);
}

double NNfunction_ss_cLuR::synapse0x3037d50() {
   return (neuron0x3025260()*0.4682);
}

double NNfunction_ss_cLuR::synapse0x3037d90() {
   return (neuron0x30255a0()*0.0536638);
}

double NNfunction_ss_cLuR::synapse0x3037dd0() {
   return (neuron0x30258e0()*-0.113707);
}

double NNfunction_ss_cLuR::synapse0x3037e10() {
   return (neuron0x3025c20()*-0.422903);
}

double NNfunction_ss_cLuR::synapse0x3037e50() {
   return (neuron0x3025f60()*-0.420097);
}

double NNfunction_ss_cLuR::synapse0x3030010() {
   return (neuron0x30262a0()*0.0203488);
}

double NNfunction_ss_cLuR::synapse0x3030050() {
   return (neuron0x30265e0()*-0.640577);
}

double NNfunction_ss_cLuR::synapse0x3030090() {
   return (neuron0x3026920()*-1.62141);
}

double NNfunction_ss_cLuR::synapse0x30300d0() {
   return (neuron0x3026c60()*0.0518837);
}

double NNfunction_ss_cLuR::synapse0x3030110() {
   return (neuron0x3026fa0()*0.376409);
}

double NNfunction_ss_cLuR::synapse0x3030150() {
   return (neuron0x30272e0()*0.548979);
}

double NNfunction_ss_cLuR::synapse0x3030190() {
   return (neuron0x3027620()*0.490376);
}

double NNfunction_ss_cLuR::synapse0x3037aa0() {
   return (neuron0x3027960()*-0.220303);
}

double NNfunction_ss_cLuR::synapse0x3037ae0() {
   return (neuron0x3027ec0()*0.260599);
}

double NNfunction_ss_cLuR::synapse0x30302e0() {
   return (neuron0x30280e0()*0.103777);
}

double NNfunction_ss_cLuR::synapse0x3030320() {
   return (neuron0x3028420()*0.34689);
}

double NNfunction_ss_cLuR::synapse0x3030360() {
   return (neuron0x3028760()*-0.37726);
}

double NNfunction_ss_cLuR::synapse0x30303a0() {
   return (neuron0x3028aa0()*-0.250436);
}

double NNfunction_ss_cLuR::synapse0x30303e0() {
   return (neuron0x3028de0()*0.246993);
}

double NNfunction_ss_cLuR::synapse0x3030420() {
   return (neuron0x3029120()*0.257645);
}

double NNfunction_ss_cLuR::synapse0x30307a0() {
   return (neuron0x3024560()*-0.185368);
}

double NNfunction_ss_cLuR::synapse0x30307e0() {
   return (neuron0x30248a0()*-0.311033);
}

double NNfunction_ss_cLuR::synapse0x3030820() {
   return (neuron0x3024be0()*-1.85046);
}

double NNfunction_ss_cLuR::synapse0x3030860() {
   return (neuron0x3024f20()*-2.55507);
}

double NNfunction_ss_cLuR::synapse0x30308a0() {
   return (neuron0x3025260()*-0.11222);
}

double NNfunction_ss_cLuR::synapse0x30308e0() {
   return (neuron0x30255a0()*0.148218);
}

double NNfunction_ss_cLuR::synapse0x3030920() {
   return (neuron0x30258e0()*0.0283381);
}

double NNfunction_ss_cLuR::synapse0x3030960() {
   return (neuron0x3025c20()*-0.0257703);
}

double NNfunction_ss_cLuR::synapse0x30309a0() {
   return (neuron0x3025f60()*-0.136792);
}

double NNfunction_ss_cLuR::synapse0x30309e0() {
   return (neuron0x30262a0()*0.275254);
}

double NNfunction_ss_cLuR::synapse0x3030a20() {
   return (neuron0x30265e0()*0.115806);
}

double NNfunction_ss_cLuR::synapse0x3030a60() {
   return (neuron0x3026920()*0.210244);
}

double NNfunction_ss_cLuR::synapse0x3030aa0() {
   return (neuron0x3026c60()*0.0199619);
}

double NNfunction_ss_cLuR::synapse0x3030ae0() {
   return (neuron0x3026fa0()*-0.0202868);
}

double NNfunction_ss_cLuR::synapse0x3030b20() {
   return (neuron0x30272e0()*-0.061419);
}

double NNfunction_ss_cLuR::synapse0x3030b60() {
   return (neuron0x3027620()*-0.214849);
}

double NNfunction_ss_cLuR::synapse0x30305f0() {
   return (neuron0x3027960()*-0.276918);
}

double NNfunction_ss_cLuR::synapse0x3030630() {
   return (neuron0x3027ec0()*0.123599);
}

double NNfunction_ss_cLuR::synapse0x3030cb0() {
   return (neuron0x30280e0()*-0.000942454);
}

double NNfunction_ss_cLuR::synapse0x3030cf0() {
   return (neuron0x3028420()*0.437028);
}

double NNfunction_ss_cLuR::synapse0x3030d30() {
   return (neuron0x3028760()*0.298708);
}

double NNfunction_ss_cLuR::synapse0x3030d70() {
   return (neuron0x3028aa0()*0.0527361);
}

double NNfunction_ss_cLuR::synapse0x3030db0() {
   return (neuron0x3028de0()*-0.0561558);
}

double NNfunction_ss_cLuR::synapse0x3030df0() {
   return (neuron0x3029120()*-0.090486);
}

double NNfunction_ss_cLuR::synapse0x3030fc0() {
   return (neuron0x3024560()*-0.357682);
}

double NNfunction_ss_cLuR::synapse0x303a050() {
   return (neuron0x30248a0()*0.247453);
}

double NNfunction_ss_cLuR::synapse0x303a090() {
   return (neuron0x3024be0()*-0.281838);
}

double NNfunction_ss_cLuR::synapse0x303a0d0() {
   return (neuron0x3024f20()*-0.212937);
}

double NNfunction_ss_cLuR::synapse0x303a110() {
   return (neuron0x3025260()*0.949718);
}

double NNfunction_ss_cLuR::synapse0x303a150() {
   return (neuron0x30255a0()*0.150303);
}

double NNfunction_ss_cLuR::synapse0x303a190() {
   return (neuron0x30258e0()*-0.0218336);
}

double NNfunction_ss_cLuR::synapse0x303a1d0() {
   return (neuron0x3025c20()*0.0442506);
}

double NNfunction_ss_cLuR::synapse0x303a210() {
   return (neuron0x3025f60()*0.622022);
}

double NNfunction_ss_cLuR::synapse0x303a250() {
   return (neuron0x30262a0()*0.62765);
}

double NNfunction_ss_cLuR::synapse0x303a290() {
   return (neuron0x30265e0()*-0.262812);
}

double NNfunction_ss_cLuR::synapse0x303a2d0() {
   return (neuron0x3026920()*-0.0136961);
}

double NNfunction_ss_cLuR::synapse0x303a310() {
   return (neuron0x3026c60()*-0.577426);
}

double NNfunction_ss_cLuR::synapse0x303a350() {
   return (neuron0x3026fa0()*-0.0356216);
}

double NNfunction_ss_cLuR::synapse0x303a390() {
   return (neuron0x30272e0()*0.0179031);
}

double NNfunction_ss_cLuR::synapse0x303a3d0() {
   return (neuron0x3027620()*0.338251);
}

double NNfunction_ss_cLuR::synapse0x3039ea0() {
   return (neuron0x3027960()*-0.274025);
}

double NNfunction_ss_cLuR::synapse0x3039ee0() {
   return (neuron0x3027ec0()*0.845627);
}

double NNfunction_ss_cLuR::synapse0x303a520() {
   return (neuron0x30280e0()*-0.807063);
}

double NNfunction_ss_cLuR::synapse0x303a560() {
   return (neuron0x3028420()*-0.329022);
}

double NNfunction_ss_cLuR::synapse0x303a5a0() {
   return (neuron0x3028760()*0.80739);
}

double NNfunction_ss_cLuR::synapse0x303a5e0() {
   return (neuron0x3028aa0()*-0.35157);
}

double NNfunction_ss_cLuR::synapse0x303a620() {
   return (neuron0x3028de0()*-0.497944);
}

double NNfunction_ss_cLuR::synapse0x303a660() {
   return (neuron0x3029120()*-0.86764);
}

double NNfunction_ss_cLuR::synapse0x303a9e0() {
   return (neuron0x3024560()*-0.908464);
}

double NNfunction_ss_cLuR::synapse0x303aa20() {
   return (neuron0x30248a0()*0.752359);
}

double NNfunction_ss_cLuR::synapse0x303aa60() {
   return (neuron0x3024be0()*1.05572);
}

double NNfunction_ss_cLuR::synapse0x303aaa0() {
   return (neuron0x3024f20()*-0.406948);
}

double NNfunction_ss_cLuR::synapse0x303aae0() {
   return (neuron0x3025260()*-0.443543);
}

double NNfunction_ss_cLuR::synapse0x303ab20() {
   return (neuron0x30255a0()*0.142618);
}

double NNfunction_ss_cLuR::synapse0x303ab60() {
   return (neuron0x30258e0()*-0.0556401);
}

double NNfunction_ss_cLuR::synapse0x303aba0() {
   return (neuron0x3025c20()*0.0914754);
}

double NNfunction_ss_cLuR::synapse0x303abe0() {
   return (neuron0x3025f60()*0.189328);
}

double NNfunction_ss_cLuR::synapse0x303ac20() {
   return (neuron0x30262a0()*0.908461);
}

double NNfunction_ss_cLuR::synapse0x303ac60() {
   return (neuron0x30265e0()*0.470278);
}

double NNfunction_ss_cLuR::synapse0x303aca0() {
   return (neuron0x3026920()*-0.509125);
}

double NNfunction_ss_cLuR::synapse0x303ace0() {
   return (neuron0x3026c60()*0.314578);
}

double NNfunction_ss_cLuR::synapse0x303ad20() {
   return (neuron0x3026fa0()*0.164401);
}

double NNfunction_ss_cLuR::synapse0x303ad60() {
   return (neuron0x30272e0()*0.107088);
}

double NNfunction_ss_cLuR::synapse0x303ada0() {
   return (neuron0x3027620()*0.473588);
}

double NNfunction_ss_cLuR::synapse0x303a830() {
   return (neuron0x3027960()*0.083492);
}

double NNfunction_ss_cLuR::synapse0x303a870() {
   return (neuron0x3027ec0()*0.713347);
}

double NNfunction_ss_cLuR::synapse0x303aef0() {
   return (neuron0x30280e0()*-0.320382);
}

double NNfunction_ss_cLuR::synapse0x303af30() {
   return (neuron0x3028420()*1.10373);
}

double NNfunction_ss_cLuR::synapse0x303af70() {
   return (neuron0x3028760()*0.346389);
}

double NNfunction_ss_cLuR::synapse0x303afb0() {
   return (neuron0x3028aa0()*0.089772);
}

double NNfunction_ss_cLuR::synapse0x303aff0() {
   return (neuron0x3028de0()*-0.0223915);
}

double NNfunction_ss_cLuR::synapse0x303b030() {
   return (neuron0x3029120()*0.214132);
}

double NNfunction_ss_cLuR::synapse0x303b3b0() {
   return (neuron0x3024560()*-0.337695);
}

double NNfunction_ss_cLuR::synapse0x303b3f0() {
   return (neuron0x30248a0()*0.33691);
}

double NNfunction_ss_cLuR::synapse0x303b430() {
   return (neuron0x3024be0()*0.0604427);
}

double NNfunction_ss_cLuR::synapse0x303b470() {
   return (neuron0x3024f20()*-0.133943);
}

double NNfunction_ss_cLuR::synapse0x303b4b0() {
   return (neuron0x3025260()*-1.25623);
}

double NNfunction_ss_cLuR::synapse0x303b4f0() {
   return (neuron0x30255a0()*-0.359909);
}

double NNfunction_ss_cLuR::synapse0x303b530() {
   return (neuron0x30258e0()*-0.01007);
}

double NNfunction_ss_cLuR::synapse0x303b570() {
   return (neuron0x3025c20()*0.493647);
}

double NNfunction_ss_cLuR::synapse0x303b5b0() {
   return (neuron0x3025f60()*-0.0734248);
}

double NNfunction_ss_cLuR::synapse0x303b5f0() {
   return (neuron0x30262a0()*-0.0711851);
}

double NNfunction_ss_cLuR::synapse0x303b630() {
   return (neuron0x30265e0()*0.00307563);
}

double NNfunction_ss_cLuR::synapse0x303b670() {
   return (neuron0x3026920()*-0.063601);
}

double NNfunction_ss_cLuR::synapse0x303b6b0() {
   return (neuron0x3026c60()*1.80248);
}

double NNfunction_ss_cLuR::synapse0x303b6f0() {
   return (neuron0x3026fa0()*0.420524);
}

double NNfunction_ss_cLuR::synapse0x303b730() {
   return (neuron0x30272e0()*1.36706);
}

double NNfunction_ss_cLuR::synapse0x303b770() {
   return (neuron0x3027620()*0.048782);
}

double NNfunction_ss_cLuR::synapse0x303b200() {
   return (neuron0x3027960()*0.337805);
}

double NNfunction_ss_cLuR::synapse0x303b240() {
   return (neuron0x3027ec0()*-0.0746566);
}

double NNfunction_ss_cLuR::synapse0x303b8c0() {
   return (neuron0x30280e0()*0.524999);
}

double NNfunction_ss_cLuR::synapse0x303b900() {
   return (neuron0x3028420()*0.438369);
}

double NNfunction_ss_cLuR::synapse0x303b940() {
   return (neuron0x3028760()*0.202908);
}

double NNfunction_ss_cLuR::synapse0x303b980() {
   return (neuron0x3028aa0()*0.434388);
}

double NNfunction_ss_cLuR::synapse0x303b9c0() {
   return (neuron0x3028de0()*-0.166198);
}

double NNfunction_ss_cLuR::synapse0x303ba00() {
   return (neuron0x3029120()*0.564195);
}

double NNfunction_ss_cLuR::synapse0x303bd80() {
   return (neuron0x3024560()*0.559859);
}

double NNfunction_ss_cLuR::synapse0x303bdc0() {
   return (neuron0x30248a0()*-0.337624);
}

double NNfunction_ss_cLuR::synapse0x303be00() {
   return (neuron0x3024be0()*0.387603);
}

double NNfunction_ss_cLuR::synapse0x303be40() {
   return (neuron0x3024f20()*-1.12955);
}

double NNfunction_ss_cLuR::synapse0x303be80() {
   return (neuron0x3025260()*0.168714);
}

double NNfunction_ss_cLuR::synapse0x303bec0() {
   return (neuron0x30255a0()*0.141422);
}

double NNfunction_ss_cLuR::synapse0x303bf00() {
   return (neuron0x30258e0()*0.253283);
}

double NNfunction_ss_cLuR::synapse0x303bf40() {
   return (neuron0x3025c20()*0.494851);
}

double NNfunction_ss_cLuR::synapse0x303bf80() {
   return (neuron0x3025f60()*0.246803);
}

double NNfunction_ss_cLuR::synapse0x303bfc0() {
   return (neuron0x30262a0()*-0.177384);
}

double NNfunction_ss_cLuR::synapse0x303c000() {
   return (neuron0x30265e0()*-0.33394);
}

double NNfunction_ss_cLuR::synapse0x303c040() {
   return (neuron0x3026920()*0.374143);
}

double NNfunction_ss_cLuR::synapse0x303c080() {
   return (neuron0x3026c60()*-0.237735);
}

double NNfunction_ss_cLuR::synapse0x303c0c0() {
   return (neuron0x3026fa0()*-0.0416605);
}

double NNfunction_ss_cLuR::synapse0x303c100() {
   return (neuron0x30272e0()*-0.266746);
}

double NNfunction_ss_cLuR::synapse0x303c140() {
   return (neuron0x3027620()*-0.0723906);
}

double NNfunction_ss_cLuR::synapse0x303bbd0() {
   return (neuron0x3027960()*-0.000125077);
}

double NNfunction_ss_cLuR::synapse0x303bc10() {
   return (neuron0x3027ec0()*0.385275);
}

double NNfunction_ss_cLuR::synapse0x303c290() {
   return (neuron0x30280e0()*0.0531049);
}

double NNfunction_ss_cLuR::synapse0x303c2d0() {
   return (neuron0x3028420()*0.557955);
}

double NNfunction_ss_cLuR::synapse0x303c310() {
   return (neuron0x3028760()*0.0127919);
}

double NNfunction_ss_cLuR::synapse0x303c350() {
   return (neuron0x3028aa0()*0.0245258);
}

double NNfunction_ss_cLuR::synapse0x303c390() {
   return (neuron0x3028de0()*-0.32692);
}

double NNfunction_ss_cLuR::synapse0x303c3d0() {
   return (neuron0x3029120()*-0.000895541);
}

double NNfunction_ss_cLuR::synapse0x303c750() {
   return (neuron0x3024560()*-0.191782);
}

double NNfunction_ss_cLuR::synapse0x303c790() {
   return (neuron0x30248a0()*0.221402);
}

double NNfunction_ss_cLuR::synapse0x303c7d0() {
   return (neuron0x3024be0()*0.801095);
}

double NNfunction_ss_cLuR::synapse0x303c810() {
   return (neuron0x3024f20()*0.186643);
}

double NNfunction_ss_cLuR::synapse0x303c850() {
   return (neuron0x3025260()*-0.762789);
}

double NNfunction_ss_cLuR::synapse0x303c890() {
   return (neuron0x30255a0()*-0.632469);
}

double NNfunction_ss_cLuR::synapse0x303c8d0() {
   return (neuron0x30258e0()*0.373809);
}

double NNfunction_ss_cLuR::synapse0x303c910() {
   return (neuron0x3025c20()*0.50109);
}

double NNfunction_ss_cLuR::synapse0x303c950() {
   return (neuron0x3025f60()*0.823901);
}

double NNfunction_ss_cLuR::synapse0x303c990() {
   return (neuron0x30262a0()*-0.555155);
}

double NNfunction_ss_cLuR::synapse0x303c9d0() {
   return (neuron0x30265e0()*0.575611);
}

double NNfunction_ss_cLuR::synapse0x303ca10() {
   return (neuron0x3026920()*0.945882);
}

double NNfunction_ss_cLuR::synapse0x303ca50() {
   return (neuron0x3026c60()*1.04883);
}

double NNfunction_ss_cLuR::synapse0x303ca90() {
   return (neuron0x3026fa0()*0.786687);
}

double NNfunction_ss_cLuR::synapse0x303cad0() {
   return (neuron0x30272e0()*-0.73546);
}

double NNfunction_ss_cLuR::synapse0x303cb10() {
   return (neuron0x3027620()*-0.0277867);
}

double NNfunction_ss_cLuR::synapse0x303c5a0() {
   return (neuron0x3027960()*-0.157501);
}

double NNfunction_ss_cLuR::synapse0x303c5e0() {
   return (neuron0x3027ec0()*-0.36029);
}

double NNfunction_ss_cLuR::synapse0x303cc60() {
   return (neuron0x30280e0()*0.666303);
}

double NNfunction_ss_cLuR::synapse0x303cca0() {
   return (neuron0x3028420()*-0.0631771);
}

double NNfunction_ss_cLuR::synapse0x303cce0() {
   return (neuron0x3028760()*-0.482059);
}

double NNfunction_ss_cLuR::synapse0x303cd20() {
   return (neuron0x3028aa0()*-0.387084);
}

double NNfunction_ss_cLuR::synapse0x303cd60() {
   return (neuron0x3028de0()*-0.357839);
}

double NNfunction_ss_cLuR::synapse0x303cda0() {
   return (neuron0x3029120()*0.507302);
}

double NNfunction_ss_cLuR::synapse0x303d120() {
   return (neuron0x3024560()*0.236693);
}

double NNfunction_ss_cLuR::synapse0x303d160() {
   return (neuron0x30248a0()*0.504999);
}

double NNfunction_ss_cLuR::synapse0x303d1a0() {
   return (neuron0x3024be0()*0.417982);
}

double NNfunction_ss_cLuR::synapse0x303d1e0() {
   return (neuron0x3024f20()*-0.472813);
}

double NNfunction_ss_cLuR::synapse0x303d220() {
   return (neuron0x3025260()*-0.527654);
}

double NNfunction_ss_cLuR::synapse0x303d260() {
   return (neuron0x30255a0()*0.110416);
}

double NNfunction_ss_cLuR::synapse0x303d2a0() {
   return (neuron0x30258e0()*-0.4751);
}

double NNfunction_ss_cLuR::synapse0x303d2e0() {
   return (neuron0x3025c20()*0.39892);
}

double NNfunction_ss_cLuR::synapse0x303d320() {
   return (neuron0x3025f60()*-1.24243);
}

double NNfunction_ss_cLuR::synapse0x303d360() {
   return (neuron0x30262a0()*-1.06517);
}

double NNfunction_ss_cLuR::synapse0x303d3a0() {
   return (neuron0x30265e0()*-0.383695);
}

double NNfunction_ss_cLuR::synapse0x303d3e0() {
   return (neuron0x3026920()*-0.193904);
}

double NNfunction_ss_cLuR::synapse0x303d420() {
   return (neuron0x3026c60()*0.159057);
}

double NNfunction_ss_cLuR::synapse0x303d460() {
   return (neuron0x3026fa0()*-0.246475);
}

double NNfunction_ss_cLuR::synapse0x303d4a0() {
   return (neuron0x30272e0()*1.58091);
}

double NNfunction_ss_cLuR::synapse0x303d4e0() {
   return (neuron0x3027620()*0.119171);
}

double NNfunction_ss_cLuR::synapse0x303cf70() {
   return (neuron0x3027960()*0.167493);
}

double NNfunction_ss_cLuR::synapse0x303cfb0() {
   return (neuron0x3027ec0()*-0.655108);
}

double NNfunction_ss_cLuR::synapse0x303d630() {
   return (neuron0x30280e0()*0.594423);
}

double NNfunction_ss_cLuR::synapse0x303d670() {
   return (neuron0x3028420()*0.609695);
}

double NNfunction_ss_cLuR::synapse0x303d6b0() {
   return (neuron0x3028760()*-0.554512);
}

double NNfunction_ss_cLuR::synapse0x303d6f0() {
   return (neuron0x3028aa0()*0.70036);
}

double NNfunction_ss_cLuR::synapse0x303d730() {
   return (neuron0x3028de0()*0.341153);
}

double NNfunction_ss_cLuR::synapse0x303d770() {
   return (neuron0x3029120()*0.013392);
}

double NNfunction_ss_cLuR::synapse0x303daf0() {
   return (neuron0x3024560()*0.453065);
}

double NNfunction_ss_cLuR::synapse0x303db30() {
   return (neuron0x30248a0()*-0.564915);
}

double NNfunction_ss_cLuR::synapse0x303db70() {
   return (neuron0x3024be0()*0.0909097);
}

double NNfunction_ss_cLuR::synapse0x303dbb0() {
   return (neuron0x3024f20()*0.645353);
}

double NNfunction_ss_cLuR::synapse0x303dbf0() {
   return (neuron0x3025260()*-0.541407);
}

double NNfunction_ss_cLuR::synapse0x303dc30() {
   return (neuron0x30255a0()*0.108064);
}

double NNfunction_ss_cLuR::synapse0x303dc70() {
   return (neuron0x30258e0()*0.0881986);
}

double NNfunction_ss_cLuR::synapse0x303dcb0() {
   return (neuron0x3025c20()*-0.378108);
}

double NNfunction_ss_cLuR::synapse0x303dcf0() {
   return (neuron0x3025f60()*0.522393);
}

double NNfunction_ss_cLuR::synapse0x303dd30() {
   return (neuron0x30262a0()*0.897152);
}

double NNfunction_ss_cLuR::synapse0x303dd70() {
   return (neuron0x30265e0()*0.554063);
}

double NNfunction_ss_cLuR::synapse0x303ddb0() {
   return (neuron0x3026920()*-0.434364);
}

double NNfunction_ss_cLuR::synapse0x303ddf0() {
   return (neuron0x3026c60()*-0.399955);
}

double NNfunction_ss_cLuR::synapse0x303de30() {
   return (neuron0x3026fa0()*-0.585768);
}

double NNfunction_ss_cLuR::synapse0x303de70() {
   return (neuron0x30272e0()*-0.448727);
}

double NNfunction_ss_cLuR::synapse0x303deb0() {
   return (neuron0x3027620()*-0.0157039);
}

double NNfunction_ss_cLuR::synapse0x303d940() {
   return (neuron0x3027960()*-0.751375);
}

double NNfunction_ss_cLuR::synapse0x303d980() {
   return (neuron0x3027ec0()*0.71277);
}

double NNfunction_ss_cLuR::synapse0x303e000() {
   return (neuron0x30280e0()*-0.288706);
}

double NNfunction_ss_cLuR::synapse0x303e040() {
   return (neuron0x3028420()*1.15998);
}

double NNfunction_ss_cLuR::synapse0x303e080() {
   return (neuron0x3028760()*-0.617629);
}

double NNfunction_ss_cLuR::synapse0x303e0c0() {
   return (neuron0x3028aa0()*-0.507586);
}

double NNfunction_ss_cLuR::synapse0x303e100() {
   return (neuron0x3028de0()*0.105231);
}

double NNfunction_ss_cLuR::synapse0x303e140() {
   return (neuron0x3029120()*0.373574);
}

double NNfunction_ss_cLuR::synapse0x303e4c0() {
   return (neuron0x3024560()*-0.010995);
}

double NNfunction_ss_cLuR::synapse0x303e500() {
   return (neuron0x30248a0()*-0.0535639);
}

double NNfunction_ss_cLuR::synapse0x303e540() {
   return (neuron0x3024be0()*-0.0644025);
}

double NNfunction_ss_cLuR::synapse0x303e580() {
   return (neuron0x3024f20()*-5.65674);
}

double NNfunction_ss_cLuR::synapse0x303e5c0() {
   return (neuron0x3025260()*-0.0306454);
}

double NNfunction_ss_cLuR::synapse0x303e600() {
   return (neuron0x30255a0()*-0.0480896);
}

double NNfunction_ss_cLuR::synapse0x303e640() {
   return (neuron0x30258e0()*0.01716);
}

double NNfunction_ss_cLuR::synapse0x303e680() {
   return (neuron0x3025c20()*-0.0167729);
}

double NNfunction_ss_cLuR::synapse0x303e6c0() {
   return (neuron0x3025f60()*0.0207366);
}

double NNfunction_ss_cLuR::synapse0x303e700() {
   return (neuron0x30262a0()*-0.0147044);
}

double NNfunction_ss_cLuR::synapse0x303e740() {
   return (neuron0x30265e0()*0.0145078);
}

double NNfunction_ss_cLuR::synapse0x303e780() {
   return (neuron0x3026920()*-0.0148468);
}

double NNfunction_ss_cLuR::synapse0x303e7c0() {
   return (neuron0x3026c60()*-1.18437);
}

double NNfunction_ss_cLuR::synapse0x303e800() {
   return (neuron0x3026fa0()*-0.0273234);
}

double NNfunction_ss_cLuR::synapse0x303e840() {
   return (neuron0x30272e0()*-1.75479);
}

double NNfunction_ss_cLuR::synapse0x303e880() {
   return (neuron0x3027620()*0.07347);
}

double NNfunction_ss_cLuR::synapse0x303e310() {
   return (neuron0x3027960()*-0.00710309);
}

double NNfunction_ss_cLuR::synapse0x303e350() {
   return (neuron0x3027ec0()*0.0578067);
}

double NNfunction_ss_cLuR::synapse0x303e9d0() {
   return (neuron0x30280e0()*0.0979755);
}

double NNfunction_ss_cLuR::synapse0x303ea10() {
   return (neuron0x3028420()*-0.0417625);
}

double NNfunction_ss_cLuR::synapse0x303ea50() {
   return (neuron0x3028760()*-0.0562466);
}

double NNfunction_ss_cLuR::synapse0x303ea90() {
   return (neuron0x3028aa0()*-0.0323745);
}

double NNfunction_ss_cLuR::synapse0x303ead0() {
   return (neuron0x3028de0()*0.00811718);
}

double NNfunction_ss_cLuR::synapse0x303eb10() {
   return (neuron0x3029120()*-0.0152093);
}

double NNfunction_ss_cLuR::synapse0x303ee90() {
   return (neuron0x3024560()*0.0598801);
}

double NNfunction_ss_cLuR::synapse0x3033460() {
   return (neuron0x30248a0()*0.111993);
}

double NNfunction_ss_cLuR::synapse0x30334a0() {
   return (neuron0x3024be0()*-0.592468);
}

double NNfunction_ss_cLuR::synapse0x30334e0() {
   return (neuron0x3024f20()*-1.58191);
}

double NNfunction_ss_cLuR::synapse0x3033730() {
   return (neuron0x3025260()*0.0172164);
}

double NNfunction_ss_cLuR::synapse0x3033770() {
   return (neuron0x30255a0()*-0.053751);
}

double NNfunction_ss_cLuR::synapse0x30337b0() {
   return (neuron0x30258e0()*-0.0455762);
}

double NNfunction_ss_cLuR::synapse0x3033a00() {
   return (neuron0x3025c20()*0.0206632);
}

double NNfunction_ss_cLuR::synapse0x3033a40() {
   return (neuron0x3025f60()*0.0496514);
}

double NNfunction_ss_cLuR::synapse0x3033c90() {
   return (neuron0x30262a0()*-0.038419);
}

double NNfunction_ss_cLuR::synapse0x3033cd0() {
   return (neuron0x30265e0()*-0.0243813);
}

double NNfunction_ss_cLuR::synapse0x3033d10() {
   return (neuron0x3026920()*0.0793281);
}

double NNfunction_ss_cLuR::synapse0x3033f60() {
   return (neuron0x3026c60()*-0.0537773);
}

double NNfunction_ss_cLuR::synapse0x3033fa0() {
   return (neuron0x3026fa0()*-0.086116);
}

double NNfunction_ss_cLuR::synapse0x30341f0() {
   return (neuron0x30272e0()*0.0540032);
}

double NNfunction_ss_cLuR::synapse0x3034230() {
   return (neuron0x3027620()*0.0522142);
}

double NNfunction_ss_cLuR::synapse0x303ece0() {
   return (neuron0x3027960()*-0.0293782);
}

double NNfunction_ss_cLuR::synapse0x303ed20() {
   return (neuron0x3027ec0()*-0.0185092);
}

double NNfunction_ss_cLuR::synapse0x3034380() {
   return (neuron0x30280e0()*0.0532932);
}

double NNfunction_ss_cLuR::synapse0x3034890() {
   return (neuron0x3028420()*-0.141376);
}

double NNfunction_ss_cLuR::synapse0x30348d0() {
   return (neuron0x3028760()*0.0306023);
}

double NNfunction_ss_cLuR::synapse0x3034910() {
   return (neuron0x3028aa0()*-0.0211779);
}

double NNfunction_ss_cLuR::synapse0x3034b60() {
   return (neuron0x3028de0()*0.0181513);
}

double NNfunction_ss_cLuR::synapse0x3034ba0() {
   return (neuron0x3029120()*0.0162841);
}

double NNfunction_ss_cLuR::synapse0x3034450() {
   return (neuron0x3024560()*0.00501269);
}

double NNfunction_ss_cLuR::synapse0x3034490() {
   return (neuron0x30248a0()*0.00947078);
}

double NNfunction_ss_cLuR::synapse0x30344d0() {
   return (neuron0x3024be0()*-0.00632626);
}

double NNfunction_ss_cLuR::synapse0x3034510() {
   return (neuron0x3024f20()*0.0547752);
}

double NNfunction_ss_cLuR::synapse0x3034e90() {
   return (neuron0x3025260()*-0.00809879);
}

double NNfunction_ss_cLuR::synapse0x30411e0() {
   return (neuron0x30255a0()*-0.0115305);
}

double NNfunction_ss_cLuR::synapse0x3041220() {
   return (neuron0x30258e0()*-0.0144152);
}

double NNfunction_ss_cLuR::synapse0x3041260() {
   return (neuron0x3025c20()*0.00111929);
}

double NNfunction_ss_cLuR::synapse0x30412a0() {
   return (neuron0x3025f60()*0.00287316);
}

double NNfunction_ss_cLuR::synapse0x30412e0() {
   return (neuron0x30262a0()*0.00939245);
}

double NNfunction_ss_cLuR::synapse0x3041320() {
   return (neuron0x30265e0()*0.00419879);
}

double NNfunction_ss_cLuR::synapse0x3041360() {
   return (neuron0x3026920()*-0.00815446);
}

double NNfunction_ss_cLuR::synapse0x30413a0() {
   return (neuron0x3026c60()*-0.506584);
}

double NNfunction_ss_cLuR::synapse0x30413e0() {
   return (neuron0x3026fa0()*-0.00272878);
}

double NNfunction_ss_cLuR::synapse0x3041420() {
   return (neuron0x30272e0()*0.382735);
}

double NNfunction_ss_cLuR::synapse0x3041460() {
   return (neuron0x3027620()*-0.00293191);
}

double NNfunction_ss_cLuR::synapse0x3034d70() {
   return (neuron0x3027960()*-0.00577729);
}

double NNfunction_ss_cLuR::synapse0x3034db0() {
   return (neuron0x3027ec0()*0.0143145);
}

double NNfunction_ss_cLuR::synapse0x30415b0() {
   return (neuron0x30280e0()*0.00624098);
}

double NNfunction_ss_cLuR::synapse0x30415f0() {
   return (neuron0x3028420()*0.00326917);
}

double NNfunction_ss_cLuR::synapse0x3041630() {
   return (neuron0x3028760()*-0.0060866);
}

double NNfunction_ss_cLuR::synapse0x3041670() {
   return (neuron0x3028aa0()*-0.00216795);
}

double NNfunction_ss_cLuR::synapse0x30416b0() {
   return (neuron0x3028de0()*0.0009151);
}

double NNfunction_ss_cLuR::synapse0x30416f0() {
   return (neuron0x3029120()*-0.00183754);
}

double NNfunction_ss_cLuR::synapse0x3041a70() {
   return (neuron0x3024560()*0.0965166);
}

double NNfunction_ss_cLuR::synapse0x3041ab0() {
   return (neuron0x30248a0()*0.120056);
}

double NNfunction_ss_cLuR::synapse0x3041af0() {
   return (neuron0x3024be0()*0.0297434);
}

double NNfunction_ss_cLuR::synapse0x3041b30() {
   return (neuron0x3024f20()*0.148744);
}

double NNfunction_ss_cLuR::synapse0x3041b70() {
   return (neuron0x3025260()*0.138162);
}

double NNfunction_ss_cLuR::synapse0x3041bb0() {
   return (neuron0x30255a0()*-0.0481384);
}

double NNfunction_ss_cLuR::synapse0x3041bf0() {
   return (neuron0x30258e0()*-0.132096);
}

double NNfunction_ss_cLuR::synapse0x3041c30() {
   return (neuron0x3025c20()*0.232096);
}

double NNfunction_ss_cLuR::synapse0x3041c70() {
   return (neuron0x3025f60()*-0.0732141);
}

double NNfunction_ss_cLuR::synapse0x3041cb0() {
   return (neuron0x30262a0()*-0.0509903);
}

double NNfunction_ss_cLuR::synapse0x3041cf0() {
   return (neuron0x30265e0()*-0.0997632);
}

double NNfunction_ss_cLuR::synapse0x3041d30() {
   return (neuron0x3026920()*-0.000799528);
}

double NNfunction_ss_cLuR::synapse0x3041d70() {
   return (neuron0x3026c60()*1.07269);
}

double NNfunction_ss_cLuR::synapse0x3041db0() {
   return (neuron0x3026fa0()*-0.083343);
}

double NNfunction_ss_cLuR::synapse0x3041df0() {
   return (neuron0x30272e0()*2.22981);
}

double NNfunction_ss_cLuR::synapse0x3041e30() {
   return (neuron0x3027620()*-0.203972);
}

double NNfunction_ss_cLuR::synapse0x30418c0() {
   return (neuron0x3027960()*-0.147758);
}

double NNfunction_ss_cLuR::synapse0x3041900() {
   return (neuron0x3027ec0()*-0.0793957);
}

double NNfunction_ss_cLuR::synapse0x3041f80() {
   return (neuron0x30280e0()*-0.0916603);
}

double NNfunction_ss_cLuR::synapse0x3041fc0() {
   return (neuron0x3028420()*0.0674824);
}

double NNfunction_ss_cLuR::synapse0x3042000() {
   return (neuron0x3028760()*0.213729);
}

double NNfunction_ss_cLuR::synapse0x3042040() {
   return (neuron0x3028aa0()*0.0191693);
}

double NNfunction_ss_cLuR::synapse0x3042080() {
   return (neuron0x3028de0()*-0.0150418);
}

double NNfunction_ss_cLuR::synapse0x30420c0() {
   return (neuron0x3029120()*0.00493755);
}

double NNfunction_ss_cLuR::synapse0x3042440() {
   return (neuron0x3024560()*-1.03949);
}

double NNfunction_ss_cLuR::synapse0x3042480() {
   return (neuron0x30248a0()*0.189258);
}

double NNfunction_ss_cLuR::synapse0x30424c0() {
   return (neuron0x3024be0()*0.346598);
}

double NNfunction_ss_cLuR::synapse0x3042500() {
   return (neuron0x3024f20()*-0.846706);
}

double NNfunction_ss_cLuR::synapse0x3042540() {
   return (neuron0x3025260()*0.176363);
}

double NNfunction_ss_cLuR::synapse0x3042580() {
   return (neuron0x30255a0()*-0.350562);
}

double NNfunction_ss_cLuR::synapse0x30425c0() {
   return (neuron0x30258e0()*-0.499723);
}

double NNfunction_ss_cLuR::synapse0x3042600() {
   return (neuron0x3025c20()*-0.293062);
}

double NNfunction_ss_cLuR::synapse0x3042640() {
   return (neuron0x3025f60()*0.162045);
}

double NNfunction_ss_cLuR::synapse0x3042680() {
   return (neuron0x30262a0()*1.38383);
}

double NNfunction_ss_cLuR::synapse0x30426c0() {
   return (neuron0x30265e0()*0.201696);
}

double NNfunction_ss_cLuR::synapse0x3042700() {
   return (neuron0x3026920()*0.0232731);
}

double NNfunction_ss_cLuR::synapse0x3042740() {
   return (neuron0x3026c60()*0.192878);
}

double NNfunction_ss_cLuR::synapse0x3042780() {
   return (neuron0x3026fa0()*-0.180968);
}

double NNfunction_ss_cLuR::synapse0x30427c0() {
   return (neuron0x30272e0()*-0.51905);
}

double NNfunction_ss_cLuR::synapse0x3042800() {
   return (neuron0x3027620()*-0.426965);
}

double NNfunction_ss_cLuR::synapse0x3042290() {
   return (neuron0x3027960()*0.103103);
}

double NNfunction_ss_cLuR::synapse0x30422d0() {
   return (neuron0x3027ec0()*-0.142943);
}

double NNfunction_ss_cLuR::synapse0x3042950() {
   return (neuron0x30280e0()*0.801811);
}

double NNfunction_ss_cLuR::synapse0x3042990() {
   return (neuron0x3028420()*-0.209438);
}

double NNfunction_ss_cLuR::synapse0x30429d0() {
   return (neuron0x3028760()*0.240569);
}

double NNfunction_ss_cLuR::synapse0x3042a10() {
   return (neuron0x3028aa0()*-0.0964979);
}

double NNfunction_ss_cLuR::synapse0x3042a50() {
   return (neuron0x3028de0()*0.426626);
}

double NNfunction_ss_cLuR::synapse0x3042a90() {
   return (neuron0x3029120()*-0.136144);
}

double NNfunction_ss_cLuR::synapse0x3042e10() {
   return (neuron0x3024560()*0.113953);
}

double NNfunction_ss_cLuR::synapse0x3042e50() {
   return (neuron0x30248a0()*0.769314);
}

double NNfunction_ss_cLuR::synapse0x3042e90() {
   return (neuron0x3024be0()*0.142684);
}

double NNfunction_ss_cLuR::synapse0x3042ed0() {
   return (neuron0x3024f20()*0.124843);
}

double NNfunction_ss_cLuR::synapse0x3042f10() {
   return (neuron0x3025260()*-0.192672);
}

double NNfunction_ss_cLuR::synapse0x3042f50() {
   return (neuron0x30255a0()*0.0999144);
}

double NNfunction_ss_cLuR::synapse0x3042f90() {
   return (neuron0x30258e0()*0.574683);
}

double NNfunction_ss_cLuR::synapse0x3042fd0() {
   return (neuron0x3025c20()*0.0763949);
}

double NNfunction_ss_cLuR::synapse0x3043010() {
   return (neuron0x3025f60()*-0.474813);
}

double NNfunction_ss_cLuR::synapse0x3043050() {
   return (neuron0x30262a0()*0.979716);
}

double NNfunction_ss_cLuR::synapse0x3043090() {
   return (neuron0x30265e0()*0.125757);
}

double NNfunction_ss_cLuR::synapse0x30430d0() {
   return (neuron0x3026920()*0.780575);
}

double NNfunction_ss_cLuR::synapse0x3043110() {
   return (neuron0x3026c60()*-0.0558668);
}

double NNfunction_ss_cLuR::synapse0x3043150() {
   return (neuron0x3026fa0()*-1.44942);
}

double NNfunction_ss_cLuR::synapse0x3043190() {
   return (neuron0x30272e0()*-0.0887391);
}

double NNfunction_ss_cLuR::synapse0x30431d0() {
   return (neuron0x3027620()*0.423641);
}

double NNfunction_ss_cLuR::synapse0x3042c60() {
   return (neuron0x3027960()*-0.993116);
}

double NNfunction_ss_cLuR::synapse0x3042ca0() {
   return (neuron0x3027ec0()*-1.02206);
}

double NNfunction_ss_cLuR::synapse0x3043320() {
   return (neuron0x30280e0()*-0.228693);
}

double NNfunction_ss_cLuR::synapse0x3043360() {
   return (neuron0x3028420()*0.209533);
}

double NNfunction_ss_cLuR::synapse0x30433a0() {
   return (neuron0x3028760()*0.0156428);
}

double NNfunction_ss_cLuR::synapse0x30433e0() {
   return (neuron0x3028aa0()*-0.506212);
}

double NNfunction_ss_cLuR::synapse0x3043420() {
   return (neuron0x3028de0()*-0.590757);
}

double NNfunction_ss_cLuR::synapse0x3043460() {
   return (neuron0x3029120()*-0.360606);
}

double NNfunction_ss_cLuR::synapse0x30437e0() {
   return (neuron0x3024560()*0.233377);
}

double NNfunction_ss_cLuR::synapse0x3043820() {
   return (neuron0x30248a0()*-0.527228);
}

double NNfunction_ss_cLuR::synapse0x3043860() {
   return (neuron0x3024be0()*0.16045);
}

double NNfunction_ss_cLuR::synapse0x30438a0() {
   return (neuron0x3024f20()*0.851434);
}

double NNfunction_ss_cLuR::synapse0x30438e0() {
   return (neuron0x3025260()*0.278123);
}

double NNfunction_ss_cLuR::synapse0x3043920() {
   return (neuron0x30255a0()*-0.803683);
}

double NNfunction_ss_cLuR::synapse0x3043960() {
   return (neuron0x30258e0()*-0.346948);
}

double NNfunction_ss_cLuR::synapse0x30439a0() {
   return (neuron0x3025c20()*-0.337627);
}

double NNfunction_ss_cLuR::synapse0x30439e0() {
   return (neuron0x3025f60()*-0.0272);
}

double NNfunction_ss_cLuR::synapse0x3043a20() {
   return (neuron0x30262a0()*-0.0342745);
}

double NNfunction_ss_cLuR::synapse0x3043a60() {
   return (neuron0x30265e0()*0.0740539);
}

double NNfunction_ss_cLuR::synapse0x3043aa0() {
   return (neuron0x3026920()*0.184097);
}

double NNfunction_ss_cLuR::synapse0x3043ae0() {
   return (neuron0x3026c60()*-0.204506);
}

double NNfunction_ss_cLuR::synapse0x3043b20() {
   return (neuron0x3026fa0()*0.00487799);
}

double NNfunction_ss_cLuR::synapse0x3043b60() {
   return (neuron0x30272e0()*0.107377);
}

double NNfunction_ss_cLuR::synapse0x3043ba0() {
   return (neuron0x3027620()*-0.706174);
}

double NNfunction_ss_cLuR::synapse0x3043630() {
   return (neuron0x3027960()*-0.114788);
}

double NNfunction_ss_cLuR::synapse0x3043670() {
   return (neuron0x3027ec0()*-0.205181);
}

double NNfunction_ss_cLuR::synapse0x3043cf0() {
   return (neuron0x30280e0()*0.068097);
}

double NNfunction_ss_cLuR::synapse0x3043d30() {
   return (neuron0x3028420()*0.402446);
}

double NNfunction_ss_cLuR::synapse0x3043d70() {
   return (neuron0x3028760()*-0.00936045);
}

double NNfunction_ss_cLuR::synapse0x3043db0() {
   return (neuron0x3028aa0()*0.0384763);
}

double NNfunction_ss_cLuR::synapse0x3043df0() {
   return (neuron0x3028de0()*0.0623513);
}

double NNfunction_ss_cLuR::synapse0x3043e30() {
   return (neuron0x3029120()*-0.129995);
}

double NNfunction_ss_cLuR::synapse0x30441b0() {
   return (neuron0x3024560()*0.00690982);
}

double NNfunction_ss_cLuR::synapse0x30441f0() {
   return (neuron0x30248a0()*0.0160091);
}

double NNfunction_ss_cLuR::synapse0x3044230() {
   return (neuron0x3024be0()*0.0258161);
}

double NNfunction_ss_cLuR::synapse0x3044270() {
   return (neuron0x3024f20()*-3.20828);
}

double NNfunction_ss_cLuR::synapse0x30442b0() {
   return (neuron0x3025260()*-0.00882745);
}

double NNfunction_ss_cLuR::synapse0x30442f0() {
   return (neuron0x30255a0()*0.00129507);
}

double NNfunction_ss_cLuR::synapse0x3044330() {
   return (neuron0x30258e0()*-0.00585562);
}

double NNfunction_ss_cLuR::synapse0x3044370() {
   return (neuron0x3025c20()*-0.00428777);
}

double NNfunction_ss_cLuR::synapse0x30443b0() {
   return (neuron0x3025f60()*0.0170348);
}

double NNfunction_ss_cLuR::synapse0x30443f0() {
   return (neuron0x30262a0()*0.000330156);
}

double NNfunction_ss_cLuR::synapse0x3044430() {
   return (neuron0x30265e0()*0.016036);
}

double NNfunction_ss_cLuR::synapse0x3044470() {
   return (neuron0x3026920()*0.0122106);
}

double NNfunction_ss_cLuR::synapse0x30444b0() {
   return (neuron0x3026c60()*-0.331193);
}

double NNfunction_ss_cLuR::synapse0x30444f0() {
   return (neuron0x3026fa0()*-0.0121557);
}

double NNfunction_ss_cLuR::synapse0x3044530() {
   return (neuron0x30272e0()*-0.513508);
}

double NNfunction_ss_cLuR::synapse0x3044570() {
   return (neuron0x3027620()*0.0183997);
}

double NNfunction_ss_cLuR::synapse0x3044000() {
   return (neuron0x3027960()*-0.0020816);
}

double NNfunction_ss_cLuR::synapse0x3044040() {
   return (neuron0x3027ec0()*0.0113043);
}

double NNfunction_ss_cLuR::synapse0x30446c0() {
   return (neuron0x30280e0()*0.0120214);
}

double NNfunction_ss_cLuR::synapse0x3044700() {
   return (neuron0x3028420()*-0.000200754);
}

double NNfunction_ss_cLuR::synapse0x3044740() {
   return (neuron0x3028760()*0.00318824);
}

double NNfunction_ss_cLuR::synapse0x3044780() {
   return (neuron0x3028aa0()*-0.00336738);
}

double NNfunction_ss_cLuR::synapse0x30447c0() {
   return (neuron0x3028de0()*-0.0013805);
}

double NNfunction_ss_cLuR::synapse0x3044800() {
   return (neuron0x3029120()*0.00450836);
}

double NNfunction_ss_cLuR::synapse0x3044b80() {
   return (neuron0x3024560()*-0.120203);
}

double NNfunction_ss_cLuR::synapse0x3044bc0() {
   return (neuron0x30248a0()*0.286159);
}

double NNfunction_ss_cLuR::synapse0x3044c00() {
   return (neuron0x3024be0()*-0.704639);
}

double NNfunction_ss_cLuR::synapse0x3044c40() {
   return (neuron0x3024f20()*0.408817);
}

double NNfunction_ss_cLuR::synapse0x3044c80() {
   return (neuron0x3025260()*-0.0689686);
}

double NNfunction_ss_cLuR::synapse0x3044cc0() {
   return (neuron0x30255a0()*0.0754457);
}

double NNfunction_ss_cLuR::synapse0x3044d00() {
   return (neuron0x30258e0()*0.150325);
}

double NNfunction_ss_cLuR::synapse0x3044d40() {
   return (neuron0x3025c20()*0.0465694);
}

double NNfunction_ss_cLuR::synapse0x3044d80() {
   return (neuron0x3025f60()*0.0284758);
}

double NNfunction_ss_cLuR::synapse0x3044dc0() {
   return (neuron0x30262a0()*-0.126851);
}

double NNfunction_ss_cLuR::synapse0x3044e00() {
   return (neuron0x30265e0()*-0.090305);
}

double NNfunction_ss_cLuR::synapse0x3044e40() {
   return (neuron0x3026920()*-1.24068);
}

double NNfunction_ss_cLuR::synapse0x3044e80() {
   return (neuron0x3026c60()*0.470525);
}

double NNfunction_ss_cLuR::synapse0x3044ec0() {
   return (neuron0x3026fa0()*0.152299);
}

double NNfunction_ss_cLuR::synapse0x3044f00() {
   return (neuron0x30272e0()*0.41178);
}

double NNfunction_ss_cLuR::synapse0x3044f40() {
   return (neuron0x3027620()*-0.229314);
}

double NNfunction_ss_cLuR::synapse0x30449d0() {
   return (neuron0x3027960()*0.251671);
}

double NNfunction_ss_cLuR::synapse0x3044a10() {
   return (neuron0x3027ec0()*-0.65884);
}

double NNfunction_ss_cLuR::synapse0x3045090() {
   return (neuron0x30280e0()*-0.887227);
}

double NNfunction_ss_cLuR::synapse0x30450d0() {
   return (neuron0x3028420()*0.256435);
}

double NNfunction_ss_cLuR::synapse0x3045110() {
   return (neuron0x3028760()*0.0555761);
}

double NNfunction_ss_cLuR::synapse0x3045150() {
   return (neuron0x3028aa0()*0.0584596);
}

double NNfunction_ss_cLuR::synapse0x3045190() {
   return (neuron0x3028de0()*0.0475023);
}

double NNfunction_ss_cLuR::synapse0x30451d0() {
   return (neuron0x3029120()*-0.152578);
}

double NNfunction_ss_cLuR::synapse0x3045550() {
   return (neuron0x3024560()*-0.00568569);
}

double NNfunction_ss_cLuR::synapse0x3045590() {
   return (neuron0x30248a0()*0.0104838);
}

double NNfunction_ss_cLuR::synapse0x30455d0() {
   return (neuron0x3024be0()*0.0194548);
}

double NNfunction_ss_cLuR::synapse0x3045610() {
   return (neuron0x3024f20()*-3.63484);
}

double NNfunction_ss_cLuR::synapse0x3045650() {
   return (neuron0x3025260()*-0.00478227);
}

double NNfunction_ss_cLuR::synapse0x3045690() {
   return (neuron0x30255a0()*-0.00589319);
}

double NNfunction_ss_cLuR::synapse0x30456d0() {
   return (neuron0x30258e0()*-0.0125468);
}

double NNfunction_ss_cLuR::synapse0x3045710() {
   return (neuron0x3025c20()*-0.00270947);
}

double NNfunction_ss_cLuR::synapse0x3045750() {
   return (neuron0x3025f60()*-0.0140252);
}

double NNfunction_ss_cLuR::synapse0x3045790() {
   return (neuron0x30262a0()*0.00931624);
}

double NNfunction_ss_cLuR::synapse0x30457d0() {
   return (neuron0x30265e0()*0.0128436);
}

double NNfunction_ss_cLuR::synapse0x3045810() {
   return (neuron0x3026920()*-0.0177564);
}

double NNfunction_ss_cLuR::synapse0x3045850() {
   return (neuron0x3026c60()*0.16285);
}

double NNfunction_ss_cLuR::synapse0x3045890() {
   return (neuron0x3026fa0()*0.00505218);
}

double NNfunction_ss_cLuR::synapse0x30458d0() {
   return (neuron0x30272e0()*0.16428);
}

double NNfunction_ss_cLuR::synapse0x3045910() {
   return (neuron0x3027620()*0.00452698);
}

double NNfunction_ss_cLuR::synapse0x30453a0() {
   return (neuron0x3027960()*-0.00982605);
}

double NNfunction_ss_cLuR::synapse0x30453e0() {
   return (neuron0x3027ec0()*0.00104437);
}

double NNfunction_ss_cLuR::synapse0x3045a60() {
   return (neuron0x30280e0()*0.00122234);
}

double NNfunction_ss_cLuR::synapse0x3045aa0() {
   return (neuron0x3028420()*0.00702223);
}

double NNfunction_ss_cLuR::synapse0x3045ae0() {
   return (neuron0x3028760()*0.00423732);
}

double NNfunction_ss_cLuR::synapse0x3045b20() {
   return (neuron0x3028aa0()*-0.00267001);
}

double NNfunction_ss_cLuR::synapse0x3045b60() {
   return (neuron0x3028de0()*0.0106097);
}

double NNfunction_ss_cLuR::synapse0x3045ba0() {
   return (neuron0x3029120()*-0.00860164);
}

double NNfunction_ss_cLuR::synapse0x302e650() {
   return (neuron0x3024560()*0.0307884);
}

double NNfunction_ss_cLuR::synapse0x302e690() {
   return (neuron0x30248a0()*-0.0605716);
}

double NNfunction_ss_cLuR::synapse0x302e6d0() {
   return (neuron0x3024be0()*-0.0646667);
}

double NNfunction_ss_cLuR::synapse0x302e710() {
   return (neuron0x3024f20()*-1.86497);
}

double NNfunction_ss_cLuR::synapse0x302e750() {
   return (neuron0x3025260()*0.0158501);
}

double NNfunction_ss_cLuR::synapse0x302e790() {
   return (neuron0x30255a0()*0.0447656);
}

double NNfunction_ss_cLuR::synapse0x302e7d0() {
   return (neuron0x30258e0()*-0.0213877);
}

double NNfunction_ss_cLuR::synapse0x302e810() {
   return (neuron0x3025c20()*0.0520742);
}

double NNfunction_ss_cLuR::synapse0x3046330() {
   return (neuron0x3025f60()*0.00931646);
}

double NNfunction_ss_cLuR::synapse0x3046370() {
   return (neuron0x30262a0()*0.012006);
}

double NNfunction_ss_cLuR::synapse0x30463b0() {
   return (neuron0x30265e0()*-0.00116373);
}

double NNfunction_ss_cLuR::synapse0x30463f0() {
   return (neuron0x3026920()*0.0231555);
}

double NNfunction_ss_cLuR::synapse0x3046430() {
   return (neuron0x3026c60()*0.269943);
}

double NNfunction_ss_cLuR::synapse0x3046470() {
   return (neuron0x3026fa0()*-0.0467346);
}

double NNfunction_ss_cLuR::synapse0x30464b0() {
   return (neuron0x30272e0()*-2.8171);
}

double NNfunction_ss_cLuR::synapse0x30464f0() {
   return (neuron0x3027620()*0.0010423);
}

double NNfunction_ss_cLuR::synapse0x3045d70() {
   return (neuron0x3027960()*-0.00359115);
}

double NNfunction_ss_cLuR::synapse0x3045db0() {
   return (neuron0x3027ec0()*-0.0284854);
}

double NNfunction_ss_cLuR::synapse0x3046640() {
   return (neuron0x30280e0()*-0.0425116);
}

double NNfunction_ss_cLuR::synapse0x3046680() {
   return (neuron0x3028420()*-0.0451329);
}

double NNfunction_ss_cLuR::synapse0x30466c0() {
   return (neuron0x3028760()*0.0530518);
}

double NNfunction_ss_cLuR::synapse0x3046700() {
   return (neuron0x3028aa0()*-0.0313266);
}

double NNfunction_ss_cLuR::synapse0x3046740() {
   return (neuron0x3028de0()*0.0240982);
}

double NNfunction_ss_cLuR::synapse0x3046780() {
   return (neuron0x3029120()*-0.013552);
}

double NNfunction_ss_cLuR::synapse0x3046b00() {
   return (neuron0x3024560()*-0.822779);
}

double NNfunction_ss_cLuR::synapse0x3046b40() {
   return (neuron0x30248a0()*-0.043475);
}

double NNfunction_ss_cLuR::synapse0x3046b80() {
   return (neuron0x3024be0()*-1.07507);
}

double NNfunction_ss_cLuR::synapse0x3046bc0() {
   return (neuron0x3024f20()*-1.14496);
}

double NNfunction_ss_cLuR::synapse0x3046c00() {
   return (neuron0x3025260()*-0.251954);
}

double NNfunction_ss_cLuR::synapse0x3046c40() {
   return (neuron0x30255a0()*0.648224);
}

double NNfunction_ss_cLuR::synapse0x3046c80() {
   return (neuron0x30258e0()*1.54128);
}

double NNfunction_ss_cLuR::synapse0x3046cc0() {
   return (neuron0x3025c20()*-0.246163);
}

double NNfunction_ss_cLuR::synapse0x3046d00() {
   return (neuron0x3025f60()*0.24611);
}

double NNfunction_ss_cLuR::synapse0x3046d40() {
   return (neuron0x30262a0()*-0.185242);
}

double NNfunction_ss_cLuR::synapse0x3046d80() {
   return (neuron0x30265e0()*-1.51744);
}

double NNfunction_ss_cLuR::synapse0x3046dc0() {
   return (neuron0x3026920()*0.157446);
}

double NNfunction_ss_cLuR::synapse0x3046e00() {
   return (neuron0x3026c60()*-0.45522);
}

double NNfunction_ss_cLuR::synapse0x3046e40() {
   return (neuron0x3026fa0()*-0.0056505);
}

double NNfunction_ss_cLuR::synapse0x3046e80() {
   return (neuron0x30272e0()*0.360268);
}

double NNfunction_ss_cLuR::synapse0x3046ec0() {
   return (neuron0x3027620()*0.0289999);
}

double NNfunction_ss_cLuR::synapse0x3046950() {
   return (neuron0x3027960()*0.145723);
}

double NNfunction_ss_cLuR::synapse0x3046990() {
   return (neuron0x3027ec0()*1.92722);
}

double NNfunction_ss_cLuR::synapse0x3047010() {
   return (neuron0x30280e0()*0.16218);
}

double NNfunction_ss_cLuR::synapse0x3047050() {
   return (neuron0x3028420()*-0.735386);
}

double NNfunction_ss_cLuR::synapse0x3047090() {
   return (neuron0x3028760()*-0.69711);
}

double NNfunction_ss_cLuR::synapse0x30470d0() {
   return (neuron0x3028aa0()*0.410591);
}

double NNfunction_ss_cLuR::synapse0x3047110() {
   return (neuron0x3028de0()*0.459527);
}

double NNfunction_ss_cLuR::synapse0x3047150() {
   return (neuron0x3029120()*-1.27533);
}

double NNfunction_ss_cLuR::synapse0x30474d0() {
   return (neuron0x3024560()*-0.111264);
}

double NNfunction_ss_cLuR::synapse0x3047510() {
   return (neuron0x30248a0()*0.354938);
}

double NNfunction_ss_cLuR::synapse0x3047550() {
   return (neuron0x3024be0()*0.823054);
}

double NNfunction_ss_cLuR::synapse0x3047590() {
   return (neuron0x3024f20()*1.69367);
}

double NNfunction_ss_cLuR::synapse0x30475d0() {
   return (neuron0x3025260()*-0.293696);
}

double NNfunction_ss_cLuR::synapse0x3047610() {
   return (neuron0x30255a0()*0.490464);
}

double NNfunction_ss_cLuR::synapse0x3047650() {
   return (neuron0x30258e0()*1.10712);
}

double NNfunction_ss_cLuR::synapse0x3047690() {
   return (neuron0x3025c20()*0.261904);
}

double NNfunction_ss_cLuR::synapse0x30476d0() {
   return (neuron0x3025f60()*-0.334176);
}

double NNfunction_ss_cLuR::synapse0x3047710() {
   return (neuron0x30262a0()*-0.332351);
}

double NNfunction_ss_cLuR::synapse0x3047750() {
   return (neuron0x30265e0()*-0.947438);
}

double NNfunction_ss_cLuR::synapse0x3047790() {
   return (neuron0x3026920()*0.243598);
}

double NNfunction_ss_cLuR::synapse0x30477d0() {
   return (neuron0x3026c60()*-0.488601);
}

double NNfunction_ss_cLuR::synapse0x3047810() {
   return (neuron0x3026fa0()*0.416537);
}

double NNfunction_ss_cLuR::synapse0x3047850() {
   return (neuron0x30272e0()*-0.204302);
}

double NNfunction_ss_cLuR::synapse0x3047890() {
   return (neuron0x3027620()*0.00996969);
}

double NNfunction_ss_cLuR::synapse0x3047320() {
   return (neuron0x3027960()*0.00842819);
}

double NNfunction_ss_cLuR::synapse0x3047360() {
   return (neuron0x3027ec0()*0.229759);
}

double NNfunction_ss_cLuR::synapse0x3037e90() {
   return (neuron0x30280e0()*-0.207452);
}

double NNfunction_ss_cLuR::synapse0x3037ed0() {
   return (neuron0x3028420()*0.545058);
}

double NNfunction_ss_cLuR::synapse0x3037f10() {
   return (neuron0x3028760()*0.0249107);
}

double NNfunction_ss_cLuR::synapse0x3037f50() {
   return (neuron0x3028aa0()*-0.169848);
}

double NNfunction_ss_cLuR::synapse0x3037f90() {
   return (neuron0x3028de0()*0.209112);
}

double NNfunction_ss_cLuR::synapse0x3037fd0() {
   return (neuron0x3029120()*-0.219373);
}

double NNfunction_ss_cLuR::synapse0x3038350() {
   return (neuron0x3024560()*0.415013);
}

double NNfunction_ss_cLuR::synapse0x3038390() {
   return (neuron0x30248a0()*1.31325);
}

double NNfunction_ss_cLuR::synapse0x30383d0() {
   return (neuron0x3024be0()*-0.190481);
}

double NNfunction_ss_cLuR::synapse0x3038410() {
   return (neuron0x3024f20()*1.76251);
}

double NNfunction_ss_cLuR::synapse0x3038450() {
   return (neuron0x3025260()*-0.156688);
}

double NNfunction_ss_cLuR::synapse0x3038490() {
   return (neuron0x30255a0()*0.0474875);
}

double NNfunction_ss_cLuR::synapse0x30384d0() {
   return (neuron0x30258e0()*-0.0589005);
}

double NNfunction_ss_cLuR::synapse0x3038510() {
   return (neuron0x3025c20()*-0.0969064);
}

double NNfunction_ss_cLuR::synapse0x3038550() {
   return (neuron0x3025f60()*0.1459);
}

double NNfunction_ss_cLuR::synapse0x3038590() {
   return (neuron0x30262a0()*0.109041);
}

double NNfunction_ss_cLuR::synapse0x30385d0() {
   return (neuron0x30265e0()*-0.301105);
}

double NNfunction_ss_cLuR::synapse0x3038610() {
   return (neuron0x3026920()*-0.360304);
}

double NNfunction_ss_cLuR::synapse0x3038650() {
   return (neuron0x3026c60()*-0.0883368);
}

double NNfunction_ss_cLuR::synapse0x3038690() {
   return (neuron0x3026fa0()*0.0828289);
}

double NNfunction_ss_cLuR::synapse0x30386d0() {
   return (neuron0x30272e0()*0.0853749);
}

double NNfunction_ss_cLuR::synapse0x3038710() {
   return (neuron0x3027620()*-0.113599);
}

double NNfunction_ss_cLuR::synapse0x30381a0() {
   return (neuron0x3027960()*0.165426);
}

double NNfunction_ss_cLuR::synapse0x30381e0() {
   return (neuron0x3027ec0()*0.512686);
}

double NNfunction_ss_cLuR::synapse0x3038860() {
   return (neuron0x30280e0()*0.200538);
}

double NNfunction_ss_cLuR::synapse0x30388a0() {
   return (neuron0x3028420()*0.021768);
}

double NNfunction_ss_cLuR::synapse0x30388e0() {
   return (neuron0x3028760()*-0.10456);
}

double NNfunction_ss_cLuR::synapse0x3038920() {
   return (neuron0x3028aa0()*-0.211878);
}

double NNfunction_ss_cLuR::synapse0x3038960() {
   return (neuron0x3028de0()*-0.173976);
}

double NNfunction_ss_cLuR::synapse0x30389a0() {
   return (neuron0x3029120()*0.128643);
}

double NNfunction_ss_cLuR::synapse0x3038d20() {
   return (neuron0x3024560()*-0.465971);
}

double NNfunction_ss_cLuR::synapse0x3038d60() {
   return (neuron0x30248a0()*1.20522);
}

double NNfunction_ss_cLuR::synapse0x3038da0() {
   return (neuron0x3024be0()*-0.454312);
}

double NNfunction_ss_cLuR::synapse0x3038de0() {
   return (neuron0x3024f20()*0.0832725);
}

double NNfunction_ss_cLuR::synapse0x3038e20() {
   return (neuron0x3025260()*-1.83168);
}

double NNfunction_ss_cLuR::synapse0x3038e60() {
   return (neuron0x30255a0()*-1.18224);
}

double NNfunction_ss_cLuR::synapse0x3038ea0() {
   return (neuron0x30258e0()*0.452319);
}

double NNfunction_ss_cLuR::synapse0x3038ee0() {
   return (neuron0x3025c20()*0.104763);
}

double NNfunction_ss_cLuR::synapse0x3038f20() {
   return (neuron0x3025f60()*0.400571);
}

double NNfunction_ss_cLuR::synapse0x3038f60() {
   return (neuron0x30262a0()*-0.701875);
}

double NNfunction_ss_cLuR::synapse0x3038fa0() {
   return (neuron0x30265e0()*-1.34913);
}

double NNfunction_ss_cLuR::synapse0x3038fe0() {
   return (neuron0x3026920()*0.488128);
}

double NNfunction_ss_cLuR::synapse0x3039020() {
   return (neuron0x3026c60()*0.36868);
}

double NNfunction_ss_cLuR::synapse0x3039060() {
   return (neuron0x3026fa0()*0.370121);
}

double NNfunction_ss_cLuR::synapse0x30390a0() {
   return (neuron0x30272e0()*0.758528);
}

double NNfunction_ss_cLuR::synapse0x30390e0() {
   return (neuron0x3027620()*-0.463568);
}

double NNfunction_ss_cLuR::synapse0x3038b70() {
   return (neuron0x3027960()*-0.685674);
}

double NNfunction_ss_cLuR::synapse0x3038bb0() {
   return (neuron0x3027ec0()*-0.158963);
}

double NNfunction_ss_cLuR::synapse0x3039230() {
   return (neuron0x30280e0()*-0.389602);
}

double NNfunction_ss_cLuR::synapse0x3039270() {
   return (neuron0x3028420()*0.941476);
}

double NNfunction_ss_cLuR::synapse0x30392b0() {
   return (neuron0x3028760()*0.491438);
}

double NNfunction_ss_cLuR::synapse0x30392f0() {
   return (neuron0x3028aa0()*-0.605385);
}

double NNfunction_ss_cLuR::synapse0x3039330() {
   return (neuron0x3028de0()*0.523083);
}

double NNfunction_ss_cLuR::synapse0x3039370() {
   return (neuron0x3029120()*-0.364911);
}

double NNfunction_ss_cLuR::synapse0x30396f0() {
   return (neuron0x3024560()*0.0422527);
}

double NNfunction_ss_cLuR::synapse0x3039730() {
   return (neuron0x30248a0()*-0.336097);
}

double NNfunction_ss_cLuR::synapse0x3039770() {
   return (neuron0x3024be0()*-0.932659);
}

double NNfunction_ss_cLuR::synapse0x30397b0() {
   return (neuron0x3024f20()*2.98588);
}

double NNfunction_ss_cLuR::synapse0x30397f0() {
   return (neuron0x3025260()*0.0627496);
}

double NNfunction_ss_cLuR::synapse0x3039830() {
   return (neuron0x30255a0()*0.0622927);
}

double NNfunction_ss_cLuR::synapse0x3039870() {
   return (neuron0x30258e0()*0.0265544);
}

double NNfunction_ss_cLuR::synapse0x30398b0() {
   return (neuron0x3025c20()*-0.0152145);
}

double NNfunction_ss_cLuR::synapse0x30398f0() {
   return (neuron0x3025f60()*-0.128468);
}

double NNfunction_ss_cLuR::synapse0x3039930() {
   return (neuron0x30262a0()*0.0465972);
}

double NNfunction_ss_cLuR::synapse0x3039970() {
   return (neuron0x30265e0()*0.0140207);
}

double NNfunction_ss_cLuR::synapse0x30399b0() {
   return (neuron0x3026920()*-0.0536875);
}

double NNfunction_ss_cLuR::synapse0x30399f0() {
   return (neuron0x3026c60()*-0.221347);
}

double NNfunction_ss_cLuR::synapse0x3039a30() {
   return (neuron0x3026fa0()*-0.0259904);
}

double NNfunction_ss_cLuR::synapse0x3039a70() {
   return (neuron0x30272e0()*-0.270948);
}

double NNfunction_ss_cLuR::synapse0x3039ab0() {
   return (neuron0x3027620()*0.000860434);
}

double NNfunction_ss_cLuR::synapse0x3039540() {
   return (neuron0x3027960()*-0.102188);
}

double NNfunction_ss_cLuR::synapse0x3039580() {
   return (neuron0x3027ec0()*0.182816);
}

double NNfunction_ss_cLuR::synapse0x3039c00() {
   return (neuron0x30280e0()*0.0731213);
}

double NNfunction_ss_cLuR::synapse0x3039c40() {
   return (neuron0x3028420()*0.0566661);
}

double NNfunction_ss_cLuR::synapse0x3039c80() {
   return (neuron0x3028760()*0.130107);
}

double NNfunction_ss_cLuR::synapse0x3039cc0() {
   return (neuron0x3028aa0()*0.0362645);
}

double NNfunction_ss_cLuR::synapse0x3039d00() {
   return (neuron0x3028de0()*0.0269838);
}

double NNfunction_ss_cLuR::synapse0x3039d40() {
   return (neuron0x3029120()*-0.0679921);
}

double NNfunction_ss_cLuR::synapse0x304bc10() {
   return (neuron0x3024560()*0.754933);
}

double NNfunction_ss_cLuR::synapse0x304bc50() {
   return (neuron0x30248a0()*-0.494235);
}

double NNfunction_ss_cLuR::synapse0x304bc90() {
   return (neuron0x3024be0()*0.179545);
}

double NNfunction_ss_cLuR::synapse0x304bcd0() {
   return (neuron0x3024f20()*0.691605);
}

double NNfunction_ss_cLuR::synapse0x304bd10() {
   return (neuron0x3025260()*-0.2643);
}

double NNfunction_ss_cLuR::synapse0x304bd50() {
   return (neuron0x30255a0()*1.02519);
}

double NNfunction_ss_cLuR::synapse0x304bd90() {
   return (neuron0x30258e0()*-0.392511);
}

double NNfunction_ss_cLuR::synapse0x304bdd0() {
   return (neuron0x3025c20()*1.77513);
}

double NNfunction_ss_cLuR::synapse0x304be10() {
   return (neuron0x3025f60()*-0.739873);
}

double NNfunction_ss_cLuR::synapse0x304be50() {
   return (neuron0x30262a0()*0.906489);
}

double NNfunction_ss_cLuR::synapse0x304be90() {
   return (neuron0x30265e0()*0.436981);
}

double NNfunction_ss_cLuR::synapse0x304bed0() {
   return (neuron0x3026920()*-0.102545);
}

double NNfunction_ss_cLuR::synapse0x304bf10() {
   return (neuron0x3026c60()*-0.0838806);
}

double NNfunction_ss_cLuR::synapse0x304bf50() {
   return (neuron0x3026fa0()*0.830633);
}

double NNfunction_ss_cLuR::synapse0x304bf90() {
   return (neuron0x30272e0()*0.0805999);
}

double NNfunction_ss_cLuR::synapse0x304bfd0() {
   return (neuron0x3027620()*-0.346475);
}

double NNfunction_ss_cLuR::synapse0x3039d80() {
   return (neuron0x3027960()*0.130325);
}

double NNfunction_ss_cLuR::synapse0x3039dc0() {
   return (neuron0x3027ec0()*1.09092);
}

double NNfunction_ss_cLuR::synapse0x304c120() {
   return (neuron0x30280e0()*-0.202337);
}

double NNfunction_ss_cLuR::synapse0x304c160() {
   return (neuron0x3028420()*0.654746);
}

double NNfunction_ss_cLuR::synapse0x304c1a0() {
   return (neuron0x3028760()*0.0232073);
}

double NNfunction_ss_cLuR::synapse0x304c1e0() {
   return (neuron0x3028aa0()*0.320052);
}

double NNfunction_ss_cLuR::synapse0x304c220() {
   return (neuron0x3028de0()*0.13491);
}

double NNfunction_ss_cLuR::synapse0x304c260() {
   return (neuron0x3029120()*0.620131);
}

double NNfunction_ss_cLuR::synapse0x304c5e0() {
   return (neuron0x3024560()*-0.369433);
}

double NNfunction_ss_cLuR::synapse0x304c620() {
   return (neuron0x30248a0()*-0.762507);
}

double NNfunction_ss_cLuR::synapse0x304c660() {
   return (neuron0x3024be0()*-0.301298);
}

double NNfunction_ss_cLuR::synapse0x304c6a0() {
   return (neuron0x3024f20()*0.231086);
}

double NNfunction_ss_cLuR::synapse0x304c6e0() {
   return (neuron0x3025260()*1.24256);
}

double NNfunction_ss_cLuR::synapse0x304c720() {
   return (neuron0x30255a0()*1.90014);
}

double NNfunction_ss_cLuR::synapse0x304c760() {
   return (neuron0x30258e0()*-0.624499);
}

double NNfunction_ss_cLuR::synapse0x304c7a0() {
   return (neuron0x3025c20()*0.803389);
}

double NNfunction_ss_cLuR::synapse0x304c7e0() {
   return (neuron0x3025f60()*-0.404476);
}

double NNfunction_ss_cLuR::synapse0x304c820() {
   return (neuron0x30262a0()*0.605524);
}

double NNfunction_ss_cLuR::synapse0x304c860() {
   return (neuron0x30265e0()*0.858226);
}

double NNfunction_ss_cLuR::synapse0x304c8a0() {
   return (neuron0x3026920()*0.618178);
}

double NNfunction_ss_cLuR::synapse0x304c8e0() {
   return (neuron0x3026c60()*-1.29713);
}

double NNfunction_ss_cLuR::synapse0x304c920() {
   return (neuron0x3026fa0()*-0.606068);
}

double NNfunction_ss_cLuR::synapse0x304c960() {
   return (neuron0x30272e0()*0.224382);
}

double NNfunction_ss_cLuR::synapse0x304c9a0() {
   return (neuron0x3027620()*0.741836);
}

double NNfunction_ss_cLuR::synapse0x304c430() {
   return (neuron0x3027960()*0.673301);
}

double NNfunction_ss_cLuR::synapse0x304c470() {
   return (neuron0x3027ec0()*0.292971);
}

double NNfunction_ss_cLuR::synapse0x304caf0() {
   return (neuron0x30280e0()*0.21753);
}

double NNfunction_ss_cLuR::synapse0x304cb30() {
   return (neuron0x3028420()*-0.0654419);
}

double NNfunction_ss_cLuR::synapse0x304cb70() {
   return (neuron0x3028760()*-0.472763);
}

double NNfunction_ss_cLuR::synapse0x304cbb0() {
   return (neuron0x3028aa0()*0.0935885);
}

double NNfunction_ss_cLuR::synapse0x304cbf0() {
   return (neuron0x3028de0()*-0.0988401);
}

double NNfunction_ss_cLuR::synapse0x304cc30() {
   return (neuron0x3029120()*-0.351101);
}

double NNfunction_ss_cLuR::synapse0x304cfb0() {
   return (neuron0x3024560()*0.489854);
}

double NNfunction_ss_cLuR::synapse0x304cff0() {
   return (neuron0x30248a0()*0.045368);
}

double NNfunction_ss_cLuR::synapse0x304d030() {
   return (neuron0x3024be0()*0.460516);
}

double NNfunction_ss_cLuR::synapse0x304d070() {
   return (neuron0x3024f20()*0.578038);
}

double NNfunction_ss_cLuR::synapse0x304d0b0() {
   return (neuron0x3025260()*-1.55626);
}

double NNfunction_ss_cLuR::synapse0x304d0f0() {
   return (neuron0x30255a0()*0.370902);
}

double NNfunction_ss_cLuR::synapse0x304d130() {
   return (neuron0x30258e0()*0.320976);
}

double NNfunction_ss_cLuR::synapse0x304d170() {
   return (neuron0x3025c20()*-0.507706);
}

double NNfunction_ss_cLuR::synapse0x304d1b0() {
   return (neuron0x3025f60()*-0.728529);
}

double NNfunction_ss_cLuR::synapse0x304d1f0() {
   return (neuron0x30262a0()*-0.635494);
}

double NNfunction_ss_cLuR::synapse0x304d230() {
   return (neuron0x30265e0()*-0.105754);
}

double NNfunction_ss_cLuR::synapse0x304d270() {
   return (neuron0x3026920()*0.615208);
}

double NNfunction_ss_cLuR::synapse0x304d2b0() {
   return (neuron0x3026c60()*-0.110378);
}

double NNfunction_ss_cLuR::synapse0x304d2f0() {
   return (neuron0x3026fa0()*0.372518);
}

double NNfunction_ss_cLuR::synapse0x304d330() {
   return (neuron0x30272e0()*0.732568);
}

double NNfunction_ss_cLuR::synapse0x304d370() {
   return (neuron0x3027620()*0.683526);
}

double NNfunction_ss_cLuR::synapse0x304ce00() {
   return (neuron0x3027960()*-0.46373);
}

double NNfunction_ss_cLuR::synapse0x304ce40() {
   return (neuron0x3027ec0()*1.62896);
}

double NNfunction_ss_cLuR::synapse0x304d4c0() {
   return (neuron0x30280e0()*0.389434);
}

double NNfunction_ss_cLuR::synapse0x304d500() {
   return (neuron0x3028420()*0.205595);
}

double NNfunction_ss_cLuR::synapse0x304d540() {
   return (neuron0x3028760()*1.08946);
}

double NNfunction_ss_cLuR::synapse0x304d580() {
   return (neuron0x3028aa0()*0.741442);
}

double NNfunction_ss_cLuR::synapse0x304d5c0() {
   return (neuron0x3028de0()*0.0319471);
}

double NNfunction_ss_cLuR::synapse0x304d600() {
   return (neuron0x3029120()*0.140657);
}

double NNfunction_ss_cLuR::synapse0x304d980() {
   return (neuron0x3024560()*0.211186);
}

double NNfunction_ss_cLuR::synapse0x304d9c0() {
   return (neuron0x30248a0()*0.0678628);
}

double NNfunction_ss_cLuR::synapse0x304da00() {
   return (neuron0x3024be0()*0.147691);
}

double NNfunction_ss_cLuR::synapse0x304da40() {
   return (neuron0x3024f20()*0.764518);
}

double NNfunction_ss_cLuR::synapse0x304da80() {
   return (neuron0x3025260()*0.0461915);
}

double NNfunction_ss_cLuR::synapse0x304dac0() {
   return (neuron0x30255a0()*-0.356048);
}

double NNfunction_ss_cLuR::synapse0x304db00() {
   return (neuron0x30258e0()*0.0505176);
}

double NNfunction_ss_cLuR::synapse0x304db40() {
   return (neuron0x3025c20()*0.502058);
}

double NNfunction_ss_cLuR::synapse0x304db80() {
   return (neuron0x3025f60()*0.0143319);
}

double NNfunction_ss_cLuR::synapse0x304dbc0() {
   return (neuron0x30262a0()*-0.123083);
}

double NNfunction_ss_cLuR::synapse0x304dc00() {
   return (neuron0x30265e0()*-0.183717);
}

double NNfunction_ss_cLuR::synapse0x304dc40() {
   return (neuron0x3026920()*0.330296);
}

double NNfunction_ss_cLuR::synapse0x304dc80() {
   return (neuron0x3026c60()*0.546008);
}

double NNfunction_ss_cLuR::synapse0x304dcc0() {
   return (neuron0x3026fa0()*-0.0776563);
}

double NNfunction_ss_cLuR::synapse0x304dd00() {
   return (neuron0x30272e0()*-1.31531);
}

double NNfunction_ss_cLuR::synapse0x304dd40() {
   return (neuron0x3027620()*-0.426058);
}

double NNfunction_ss_cLuR::synapse0x304d7d0() {
   return (neuron0x3027960()*-0.196317);
}

double NNfunction_ss_cLuR::synapse0x304d810() {
   return (neuron0x3027ec0()*-0.209229);
}

double NNfunction_ss_cLuR::synapse0x304de90() {
   return (neuron0x30280e0()*0.071586);
}

double NNfunction_ss_cLuR::synapse0x304ded0() {
   return (neuron0x3028420()*-0.441483);
}

double NNfunction_ss_cLuR::synapse0x304df10() {
   return (neuron0x3028760()*-0.386864);
}

double NNfunction_ss_cLuR::synapse0x304df50() {
   return (neuron0x3028aa0()*0.200704);
}

double NNfunction_ss_cLuR::synapse0x304df90() {
   return (neuron0x3028de0()*-0.347525);
}

double NNfunction_ss_cLuR::synapse0x304dfd0() {
   return (neuron0x3029120()*0.0505496);
}

double NNfunction_ss_cLuR::synapse0x302a570() {
   return (neuron0x30295c0()*-1.40714);
}

double NNfunction_ss_cLuR::synapse0x302a5b0() {
   return (neuron0x3029ed0()*2.81447);
}

double NNfunction_ss_cLuR::synapse0x302ba80() {
   return (neuron0x302a9b0()*-0.0681666);
}

double NNfunction_ss_cLuR::synapse0x302bac0() {
   return (neuron0x2de4240()*-1.37534);
}

double NNfunction_ss_cLuR::synapse0x302c450() {
   return (neuron0x302b7d0()*3.21686);
}

double NNfunction_ss_cLuR::synapse0x302c490() {
   return (neuron0x302c1a0()*-1.45152);
}

double NNfunction_ss_cLuR::synapse0x302d220() {
   return (neuron0x302cf70()*5.02692);
}

double NNfunction_ss_cLuR::synapse0x302d260() {
   return (neuron0x302d940()*-2.88588);
}

double NNfunction_ss_cLuR::synapse0x302dbf0() {
   return (neuron0x302e310()*-2.84478);
}

double NNfunction_ss_cLuR::synapse0x302dc30() {
   return (neuron0x302edf0()*1.37133);
}

double NNfunction_ss_cLuR::synapse0x302e5c0() {
   return (neuron0x302f7c0()*-0.482596);
}

double NNfunction_ss_cLuR::synapse0x302e600() {
   return (neuron0x302c8a0()*1.8043);
}

double NNfunction_ss_cLuR::synapse0x302f0a0() {
   return (neuron0x3031370()*1.26917);
}

double NNfunction_ss_cLuR::synapse0x302f0e0() {
   return (neuron0x3031d40()*1.98316);
}

double NNfunction_ss_cLuR::synapse0x302fa70() {
   return (neuron0x3032710()*1.43742);
}

double NNfunction_ss_cLuR::synapse0x302fab0() {
   return (neuron0x30330e0()*-5.75629);
}

double NNfunction_ss_cLuR::synapse0x302cb50() {
   return (neuron0x3034ef0()*-2.31959);
}

double NNfunction_ss_cLuR::synapse0x302cb90() {
   return (neuron0x30351d0()*-2.53051);
}

double NNfunction_ss_cLuR::synapse0x3031620() {
   return (neuron0x3035ba0()*-1.84607);
}

double NNfunction_ss_cLuR::synapse0x3031660() {
   return (neuron0x3036570()*1.24573);
}

double NNfunction_ss_cLuR::synapse0x3031ff0() {
   return (neuron0x3036f40()*1.98994);
}

double NNfunction_ss_cLuR::synapse0x3032030() {
   return (neuron0x3037910()*0.534234);
}

double NNfunction_ss_cLuR::synapse0x30329c0() {
   return (neuron0x3030460()*1.82424);
}

double NNfunction_ss_cLuR::synapse0x3032a00() {
   return (neuron0x3030e30()*-1.50608);
}

double NNfunction_ss_cLuR::synapse0x3033390() {
   return (neuron0x303a6a0()*-2.1613);
}

double NNfunction_ss_cLuR::synapse0x30333d0() {
   return (neuron0x303b070()*1.50693);
}

double NNfunction_ss_cLuR::synapse0x3027500() {
   return (neuron0x303ba40()*-1.25614);
}

double NNfunction_ss_cLuR::synapse0x3027540() {
   return (neuron0x303c410()*1.68938);
}

double NNfunction_ss_cLuR::synapse0x3035480() {
   return (neuron0x303cde0()*-2.18045);
}

double NNfunction_ss_cLuR::synapse0x30354c0() {
   return (neuron0x303d7b0()*1.60336);
}

double NNfunction_ss_cLuR::synapse0x3035e50() {
   return (neuron0x303e180()*-4.81079);
}

double NNfunction_ss_cLuR::synapse0x3035e90() {
   return (neuron0x303eb50()*-0.364494);
}

double NNfunction_ss_cLuR::synapse0x3036820() {
   return (neuron0x3034be0()*-1.13987);
}

double NNfunction_ss_cLuR::synapse0x3036860() {
   return (neuron0x3041730()*2.30959);
}

double NNfunction_ss_cLuR::synapse0x30371f0() {
   return (neuron0x3042100()*-2.05448);
}

double NNfunction_ss_cLuR::synapse0x3037230() {
   return (neuron0x3042ad0()*0.353784);
}

double NNfunction_ss_cLuR::synapse0x3037bc0() {
   return (neuron0x30434a0()*1.85934);
}

double NNfunction_ss_cLuR::synapse0x3037c00() {
   return (neuron0x3043e70()*-0.616004);
}

double NNfunction_ss_cLuR::synapse0x3030710() {
   return (neuron0x3044840()*-1.06772);
}

double NNfunction_ss_cLuR::synapse0x3030750() {
   return (neuron0x3045210()*4.43948);
}

double NNfunction_ss_cLuR::synapse0x3039fc0() {
   return (neuron0x3045be0()*1.02505);
}

double NNfunction_ss_cLuR::synapse0x303a000() {
   return (neuron0x30467c0()*1.74052);
}

double NNfunction_ss_cLuR::synapse0x303a950() {
   return (neuron0x3047190()*2.77014);
}

double NNfunction_ss_cLuR::synapse0x303a990() {
   return (neuron0x3038010()*4.1076);
}

double NNfunction_ss_cLuR::synapse0x303b320() {
   return (neuron0x30389e0()*1.68298);
}

double NNfunction_ss_cLuR::synapse0x303b360() {
   return (neuron0x30393b0()*-0.186021);
}

double NNfunction_ss_cLuR::synapse0x303bcf0() {
   return (neuron0x304b9f0()*0.514185);
}

double NNfunction_ss_cLuR::synapse0x303bd30() {
   return (neuron0x304c2a0()*1.77642);
}

double NNfunction_ss_cLuR::synapse0x303c6c0() {
   return (neuron0x304cc70()*-1.90725);
}

double NNfunction_ss_cLuR::synapse0x303c700() {
   return (neuron0x304d640()*-2.14944);
}

double NNfunction_ss_cLuR::synapse0x303ee00() {
   return (neuron0x30295c0()*0.00374517);
}

double NNfunction_ss_cLuR::synapse0x303ee40() {
   return (neuron0x3029ed0()*0.00106439);
}

double NNfunction_ss_cLuR::synapse0x30343c0() {
   return (neuron0x302a9b0()*0.0276555);
}

double NNfunction_ss_cLuR::synapse0x3034400() {
   return (neuron0x2de4240()*0.0143726);
}

double NNfunction_ss_cLuR::synapse0x30419e0() {
   return (neuron0x302b7d0()*0.427343);
}

double NNfunction_ss_cLuR::synapse0x3041a20() {
   return (neuron0x302c1a0()*0.280024);
}

double NNfunction_ss_cLuR::synapse0x30423b0() {
   return (neuron0x302cf70()*0.291664);
}

double NNfunction_ss_cLuR::synapse0x30423f0() {
   return (neuron0x302d940()*0.0450796);
}

double NNfunction_ss_cLuR::synapse0x3042d80() {
   return (neuron0x302e310()*-0.0121138);
}

double NNfunction_ss_cLuR::synapse0x3042dc0() {
   return (neuron0x302edf0()*-0.233087);
}

double NNfunction_ss_cLuR::synapse0x3043750() {
   return (neuron0x302f7c0()*-0.00263141);
}

double NNfunction_ss_cLuR::synapse0x3043790() {
   return (neuron0x302c8a0()*-0.427254);
}

double NNfunction_ss_cLuR::synapse0x3044120() {
   return (neuron0x3031370()*-1.40716);
}

double NNfunction_ss_cLuR::synapse0x3044160() {
   return (neuron0x3031d40()*-0.00900228);
}

double NNfunction_ss_cLuR::synapse0x3044af0() {
   return (neuron0x3032710()*-0.0152978);
}

double NNfunction_ss_cLuR::synapse0x3044b30() {
   return (neuron0x30330e0()*-0.154334);
}

double NNfunction_ss_cLuR::synapse0x30454c0() {
   return (neuron0x3034ef0()*-0.0137022);
}

double NNfunction_ss_cLuR::synapse0x3045500() {
   return (neuron0x30351d0()*0.00418252);
}

double NNfunction_ss_cLuR::synapse0x3045e90() {
   return (neuron0x3035ba0()*0.00800406);
}

double NNfunction_ss_cLuR::synapse0x3045ed0() {
   return (neuron0x3036570()*0.326736);
}

double NNfunction_ss_cLuR::synapse0x3046a70() {
   return (neuron0x3036f40()*9.21737e-05);
}

double NNfunction_ss_cLuR::synapse0x3046ab0() {
   return (neuron0x3037910()*-0.0241124);
}

double NNfunction_ss_cLuR::synapse0x3047440() {
   return (neuron0x3030460()*0.0436097);
}

double NNfunction_ss_cLuR::synapse0x3047480() {
   return (neuron0x3030e30()*0.0122022);
}

double NNfunction_ss_cLuR::synapse0x30382c0() {
   return (neuron0x303a6a0()*-0.00559077);
}

double NNfunction_ss_cLuR::synapse0x3038300() {
   return (neuron0x303b070()*0.0254892);
}

double NNfunction_ss_cLuR::synapse0x3038c90() {
   return (neuron0x303ba40()*0.0726489);
}

double NNfunction_ss_cLuR::synapse0x3038cd0() {
   return (neuron0x303c410()*0.00209818);
}

double NNfunction_ss_cLuR::synapse0x3039660() {
   return (neuron0x303cde0()*0.0103734);
}

double NNfunction_ss_cLuR::synapse0x30396a0() {
   return (neuron0x303d7b0()*0.00568262);
}

double NNfunction_ss_cLuR::synapse0x304bb80() {
   return (neuron0x303e180()*0.0911831);
}

double NNfunction_ss_cLuR::synapse0x304bbc0() {
   return (neuron0x303eb50()*0.451077);
}

double NNfunction_ss_cLuR::synapse0x304c550() {
   return (neuron0x3034be0()*1.56808);
}

double NNfunction_ss_cLuR::synapse0x304c590() {
   return (neuron0x3041730()*-0.142637);
}

double NNfunction_ss_cLuR::synapse0x304cf20() {
   return (neuron0x3042100()*-0.00509401);
}

double NNfunction_ss_cLuR::synapse0x304cf60() {
   return (neuron0x3042ad0()*0.0162287);
}

double NNfunction_ss_cLuR::synapse0x304d8f0() {
   return (neuron0x30434a0()*0.0139843);
}

double NNfunction_ss_cLuR::synapse0x304d930() {
   return (neuron0x3043e70()*1.37349);
}

double NNfunction_ss_cLuR::synapse0x30297e0() {
   return (neuron0x3044840()*0.03428);
}

double NNfunction_ss_cLuR::synapse0x3029820() {
   return (neuron0x3045210()*-0.906684);
}

double NNfunction_ss_cLuR::synapse0x303d090() {
   return (neuron0x3045be0()*-0.239326);
}

double NNfunction_ss_cLuR::synapse0x303d0d0() {
   return (neuron0x30467c0()*-0.000160053);
}

double NNfunction_ss_cLuR::synapse0x304e010() {
   return (neuron0x3047190()*0.00294122);
}

double NNfunction_ss_cLuR::synapse0x304e050() {
   return (neuron0x3038010()*-0.0212224);
}

double NNfunction_ss_cLuR::synapse0x304e090() {
   return (neuron0x30389e0()*-0.00184237);
}

double NNfunction_ss_cLuR::synapse0x304e0d0() {
   return (neuron0x30393b0()*-0.162033);
}

double NNfunction_ss_cLuR::synapse0x3054f80() {
   return (neuron0x304b9f0()*-0.0138045);
}

double NNfunction_ss_cLuR::synapse0x3054fc0() {
   return (neuron0x304c2a0()*0.00741387);
}

double NNfunction_ss_cLuR::synapse0x3055000() {
   return (neuron0x304cc70()*-0.00736812);
}

double NNfunction_ss_cLuR::synapse0x3055040() {
   return (neuron0x304d640()*-0.0221134);
}

double NNfunction_ss_cLuR::synapse0x30553c0() {
   return (neuron0x30295c0()*0.0144292);
}

double NNfunction_ss_cLuR::synapse0x3055400() {
   return (neuron0x3029ed0()*-0.0230087);
}

double NNfunction_ss_cLuR::synapse0x3055440() {
   return (neuron0x302a9b0()*0.0531038);
}

double NNfunction_ss_cLuR::synapse0x3055480() {
   return (neuron0x2de4240()*0.0276397);
}

double NNfunction_ss_cLuR::synapse0x30554c0() {
   return (neuron0x302b7d0()*-0.586141);
}

double NNfunction_ss_cLuR::synapse0x3055500() {
   return (neuron0x302c1a0()*0.963463);
}

double NNfunction_ss_cLuR::synapse0x3055540() {
   return (neuron0x302cf70()*1.503);
}

double NNfunction_ss_cLuR::synapse0x3055580() {
   return (neuron0x302d940()*0.0287089);
}

double NNfunction_ss_cLuR::synapse0x30555c0() {
   return (neuron0x302e310()*-0.0549545);
}

double NNfunction_ss_cLuR::synapse0x3055600() {
   return (neuron0x302edf0()*-1.11203);
}

double NNfunction_ss_cLuR::synapse0x3055640() {
   return (neuron0x302f7c0()*-0.02168);
}

double NNfunction_ss_cLuR::synapse0x3055680() {
   return (neuron0x302c8a0()*-1.10143);
}

double NNfunction_ss_cLuR::synapse0x30556c0() {
   return (neuron0x3031370()*0.892867);
}

double NNfunction_ss_cLuR::synapse0x3055700() {
   return (neuron0x3031d40()*-0.0574344);
}

double NNfunction_ss_cLuR::synapse0x3055740() {
   return (neuron0x3032710()*-0.0372107);
}

double NNfunction_ss_cLuR::synapse0x3055780() {
   return (neuron0x30330e0()*-0.416826);
}

double NNfunction_ss_cLuR::synapse0x3055210() {
   return (neuron0x3034ef0()*-0.0240945);
}

double NNfunction_ss_cLuR::synapse0x3055250() {
   return (neuron0x30351d0()*0.0233949);
}

double NNfunction_ss_cLuR::synapse0x30558d0() {
   return (neuron0x3035ba0()*0.0239885);
}

double NNfunction_ss_cLuR::synapse0x3055910() {
   return (neuron0x3036570()*-1.10334);
}

double NNfunction_ss_cLuR::synapse0x3055950() {
   return (neuron0x3036f40()*-0.0080682);
}

double NNfunction_ss_cLuR::synapse0x3055990() {
   return (neuron0x3037910()*-0.0973426);
}

double NNfunction_ss_cLuR::synapse0x30559d0() {
   return (neuron0x3030460()*0.155153);
}

double NNfunction_ss_cLuR::synapse0x3055a10() {
   return (neuron0x3030e30()*0.0435984);
}

double NNfunction_ss_cLuR::synapse0x3055a50() {
   return (neuron0x303a6a0()*0.00399507);
}

double NNfunction_ss_cLuR::synapse0x3055a90() {
   return (neuron0x303b070()*0.0326314);
}

double NNfunction_ss_cLuR::synapse0x3055ad0() {
   return (neuron0x303ba40()*0.234191);
}

double NNfunction_ss_cLuR::synapse0x3055b10() {
   return (neuron0x303c410()*-0.00645616);
}

double NNfunction_ss_cLuR::synapse0x3055b50() {
   return (neuron0x303cde0()*0.0305064);
}

double NNfunction_ss_cLuR::synapse0x3055b90() {
   return (neuron0x303d7b0()*0.0165237);
}

double NNfunction_ss_cLuR::synapse0x3055bd0() {
   return (neuron0x303e180()*-0.0170858);
}

double NNfunction_ss_cLuR::synapse0x3055c10() {
   return (neuron0x303eb50()*1.66721);
}

double NNfunction_ss_cLuR::synapse0x30557c0() {
   return (neuron0x3034be0()*-1.46531);
}

double NNfunction_ss_cLuR::synapse0x3055800() {
   return (neuron0x3041730()*-0.201018);
}

double NNfunction_ss_cLuR::synapse0x3055840() {
   return (neuron0x3042100()*-0.0240322);
}

double NNfunction_ss_cLuR::synapse0x3055880() {
   return (neuron0x3042ad0()*0.0271446);
}

double NNfunction_ss_cLuR::synapse0x3055e60() {
   return (neuron0x30434a0()*0.0104184);
}

double NNfunction_ss_cLuR::synapse0x3055ea0() {
   return (neuron0x3043e70()*1.38644);
}

double NNfunction_ss_cLuR::synapse0x3055ee0() {
   return (neuron0x3044840()*-0.0743618);
}

double NNfunction_ss_cLuR::synapse0x3055f20() {
   return (neuron0x3045210()*0.133498);
}

double NNfunction_ss_cLuR::synapse0x3055f60() {
   return (neuron0x3045be0()*-1.01797);
}

double NNfunction_ss_cLuR::synapse0x3055fa0() {
   return (neuron0x30467c0()*-0.000334686);
}

double NNfunction_ss_cLuR::synapse0x3055fe0() {
   return (neuron0x3047190()*-0.0318662);
}

double NNfunction_ss_cLuR::synapse0x3056020() {
   return (neuron0x3038010()*-0.048515);
}

double NNfunction_ss_cLuR::synapse0x3056060() {
   return (neuron0x30389e0()*-0.00600798);
}

double NNfunction_ss_cLuR::synapse0x30560a0() {
   return (neuron0x30393b0()*-0.846863);
}

double NNfunction_ss_cLuR::synapse0x30560e0() {
   return (neuron0x304b9f0()*-0.0274551);
}

double NNfunction_ss_cLuR::synapse0x3056120() {
   return (neuron0x304c2a0()*0.00415644);
}

double NNfunction_ss_cLuR::synapse0x3056160() {
   return (neuron0x304cc70()*0.00932467);
}

double NNfunction_ss_cLuR::synapse0x30561a0() {
   return (neuron0x304d640()*-0.116927);
}

double NNfunction_ss_cLuR::synapse0x3056520() {
   return (neuron0x30295c0()*1.30758);
}

double NNfunction_ss_cLuR::synapse0x3056560() {
   return (neuron0x3029ed0()*-1.93653);
}

double NNfunction_ss_cLuR::synapse0x30565a0() {
   return (neuron0x302a9b0()*3.91059);
}

double NNfunction_ss_cLuR::synapse0x30565e0() {
   return (neuron0x2de4240()*1.64527);
}

double NNfunction_ss_cLuR::synapse0x3056620() {
   return (neuron0x302b7d0()*1.00089);
}

double NNfunction_ss_cLuR::synapse0x3056660() {
   return (neuron0x302c1a0()*0.265209);
}

double NNfunction_ss_cLuR::synapse0x30566a0() {
   return (neuron0x302cf70()*5.77352);
}

double NNfunction_ss_cLuR::synapse0x30566e0() {
   return (neuron0x302d940()*-0.148857);
}

double NNfunction_ss_cLuR::synapse0x3056720() {
   return (neuron0x302e310()*2.11176);
}

double NNfunction_ss_cLuR::synapse0x3056760() {
   return (neuron0x302edf0()*1.00263);
}

double NNfunction_ss_cLuR::synapse0x30567a0() {
   return (neuron0x302f7c0()*-2.54423);
}

double NNfunction_ss_cLuR::synapse0x30567e0() {
   return (neuron0x302c8a0()*0.517022);
}

double NNfunction_ss_cLuR::synapse0x3056820() {
   return (neuron0x3031370()*0.0722188);
}

double NNfunction_ss_cLuR::synapse0x3056860() {
   return (neuron0x3031d40()*-2.77791);
}

double NNfunction_ss_cLuR::synapse0x30568a0() {
   return (neuron0x3032710()*-1.80637);
}

double NNfunction_ss_cLuR::synapse0x30568e0() {
   return (neuron0x30330e0()*-0.284739);
}

double NNfunction_ss_cLuR::synapse0x3056370() {
   return (neuron0x3034ef0()*1.51844);
}

double NNfunction_ss_cLuR::synapse0x30563b0() {
   return (neuron0x30351d0()*1.86744);
}

double NNfunction_ss_cLuR::synapse0x3056a30() {
   return (neuron0x3035ba0()*0.686729);
}

double NNfunction_ss_cLuR::synapse0x3056a70() {
   return (neuron0x3036570()*5.61743);
}

double NNfunction_ss_cLuR::synapse0x3056ab0() {
   return (neuron0x3036f40()*-1.56115);
}

double NNfunction_ss_cLuR::synapse0x3056af0() {
   return (neuron0x3037910()*-2.80745);
}

double NNfunction_ss_cLuR::synapse0x3056b30() {
   return (neuron0x3030460()*-3.5946);
}

double NNfunction_ss_cLuR::synapse0x3056b70() {
   return (neuron0x3030e30()*2.69333);
}

double NNfunction_ss_cLuR::synapse0x3056bb0() {
   return (neuron0x303a6a0()*-0.787488);
}

double NNfunction_ss_cLuR::synapse0x3056bf0() {
   return (neuron0x303b070()*1.70338);
}

double NNfunction_ss_cLuR::synapse0x3056c30() {
   return (neuron0x303ba40()*2.69422);
}

double NNfunction_ss_cLuR::synapse0x3056c70() {
   return (neuron0x303c410()*-1.87288);
}

double NNfunction_ss_cLuR::synapse0x3056cb0() {
   return (neuron0x303cde0()*1.94232);
}

double NNfunction_ss_cLuR::synapse0x3056cf0() {
   return (neuron0x303d7b0()*1.84727);
}

double NNfunction_ss_cLuR::synapse0x3056d30() {
   return (neuron0x303e180()*-3.60704);
}

double NNfunction_ss_cLuR::synapse0x3056d70() {
   return (neuron0x303eb50()*-0.53588);
}

double NNfunction_ss_cLuR::synapse0x3056920() {
   return (neuron0x3034be0()*-0.0641508);
}

double NNfunction_ss_cLuR::synapse0x3056960() {
   return (neuron0x3041730()*1.30041);
}

double NNfunction_ss_cLuR::synapse0x30569a0() {
   return (neuron0x3042100()*2.3609);
}

double NNfunction_ss_cLuR::synapse0x30569e0() {
   return (neuron0x3042ad0()*-2.07469);
}

double NNfunction_ss_cLuR::synapse0x3056fc0() {
   return (neuron0x30434a0()*-2.79869);
}

double NNfunction_ss_cLuR::synapse0x3057000() {
   return (neuron0x3043e70()*-3.6125);
}

double NNfunction_ss_cLuR::synapse0x3057040() {
   return (neuron0x3044840()*-1.62509);
}

double NNfunction_ss_cLuR::synapse0x3057080() {
   return (neuron0x3045210()*0.544535);
}

double NNfunction_ss_cLuR::synapse0x30570c0() {
   return (neuron0x3045be0()*1.41431);
}

double NNfunction_ss_cLuR::synapse0x3057100() {
   return (neuron0x30467c0()*-1.04363);
}

double NNfunction_ss_cLuR::synapse0x3057140() {
   return (neuron0x3047190()*-1.11371);
}

double NNfunction_ss_cLuR::synapse0x3057180() {
   return (neuron0x3038010()*1.34367);
}

double NNfunction_ss_cLuR::synapse0x30571c0() {
   return (neuron0x30389e0()*-2.30648);
}

double NNfunction_ss_cLuR::synapse0x3057200() {
   return (neuron0x30393b0()*3.04552);
}

double NNfunction_ss_cLuR::synapse0x3057240() {
   return (neuron0x304b9f0()*-2.1854);
}

double NNfunction_ss_cLuR::synapse0x3057280() {
   return (neuron0x304c2a0()*-1.65052);
}

double NNfunction_ss_cLuR::synapse0x30572c0() {
   return (neuron0x304cc70()*0.86162);
}

double NNfunction_ss_cLuR::synapse0x3057300() {
   return (neuron0x304d640()*-0.680426);
}

double NNfunction_ss_cLuR::synapse0x3057680() {
   return (neuron0x30295c0()*0.0025068);
}

double NNfunction_ss_cLuR::synapse0x30576c0() {
   return (neuron0x3029ed0()*0.124894);
}

double NNfunction_ss_cLuR::synapse0x3057700() {
   return (neuron0x302a9b0()*-0.171639);
}

double NNfunction_ss_cLuR::synapse0x3057740() {
   return (neuron0x2de4240()*0.0679733);
}

double NNfunction_ss_cLuR::synapse0x3057780() {
   return (neuron0x302b7d0()*2.07105);
}

double NNfunction_ss_cLuR::synapse0x30577c0() {
   return (neuron0x302c1a0()*-0.868644);
}

double NNfunction_ss_cLuR::synapse0x3057800() {
   return (neuron0x302cf70()*-2.31225);
}

double NNfunction_ss_cLuR::synapse0x3057840() {
   return (neuron0x302d940()*0.29752);
}

double NNfunction_ss_cLuR::synapse0x3057880() {
   return (neuron0x302e310()*0.237467);
}

double NNfunction_ss_cLuR::synapse0x30578c0() {
   return (neuron0x302edf0()*-0.292374);
}

double NNfunction_ss_cLuR::synapse0x3057900() {
   return (neuron0x302f7c0()*-0.0700047);
}

double NNfunction_ss_cLuR::synapse0x3057940() {
   return (neuron0x302c8a0()*-0.202652);
}

double NNfunction_ss_cLuR::synapse0x3057980() {
   return (neuron0x3031370()*0.455286);
}

double NNfunction_ss_cLuR::synapse0x30579c0() {
   return (neuron0x3031d40()*0.349255);
}

double NNfunction_ss_cLuR::synapse0x3057a00() {
   return (neuron0x3032710()*0.00544742);
}

double NNfunction_ss_cLuR::synapse0x3057a40() {
   return (neuron0x30330e0()*-1.08216);
}

double NNfunction_ss_cLuR::synapse0x30574d0() {
   return (neuron0x3034ef0()*0.0191762);
}

double NNfunction_ss_cLuR::synapse0x3057510() {
   return (neuron0x30351d0()*-0.0225821);
}

double NNfunction_ss_cLuR::synapse0x3057b90() {
   return (neuron0x3035ba0()*0.00846037);
}

double NNfunction_ss_cLuR::synapse0x3057bd0() {
   return (neuron0x3036570()*-0.344654);
}

double NNfunction_ss_cLuR::synapse0x3057c10() {
   return (neuron0x3036f40()*0.0732508);
}

double NNfunction_ss_cLuR::synapse0x3057c50() {
   return (neuron0x3037910()*0.0453808);
}

double NNfunction_ss_cLuR::synapse0x3057c90() {
   return (neuron0x3030460()*-1.48912);
}

double NNfunction_ss_cLuR::synapse0x3057cd0() {
   return (neuron0x3030e30()*-0.164597);
}

double NNfunction_ss_cLuR::synapse0x3057d10() {
   return (neuron0x303a6a0()*0.257394);
}

double NNfunction_ss_cLuR::synapse0x3057d50() {
   return (neuron0x303b070()*-0.107127);
}

double NNfunction_ss_cLuR::synapse0x3057d90() {
   return (neuron0x303ba40()*-0.712369);
}

double NNfunction_ss_cLuR::synapse0x3057dd0() {
   return (neuron0x303c410()*0.232037);
}

double NNfunction_ss_cLuR::synapse0x3057e10() {
   return (neuron0x303cde0()*-0.0328184);
}

double NNfunction_ss_cLuR::synapse0x3057e50() {
   return (neuron0x303d7b0()*0.00856307);
}

double NNfunction_ss_cLuR::synapse0x3057e90() {
   return (neuron0x303e180()*-4.2674);
}

double NNfunction_ss_cLuR::synapse0x3057ed0() {
   return (neuron0x303eb50()*-1.08386);
}

double NNfunction_ss_cLuR::synapse0x3057a80() {
   return (neuron0x3034be0()*0.529152);
}

double NNfunction_ss_cLuR::synapse0x3057ac0() {
   return (neuron0x3041730()*-0.611014);
}

double NNfunction_ss_cLuR::synapse0x3057b00() {
   return (neuron0x3042100()*0.0478533);
}

double NNfunction_ss_cLuR::synapse0x3057b40() {
   return (neuron0x3042ad0()*0.065991);
}

double NNfunction_ss_cLuR::synapse0x3058120() {
   return (neuron0x30434a0()*0.174937);
}

double NNfunction_ss_cLuR::synapse0x3058160() {
   return (neuron0x3043e70()*-2.18307);
}

double NNfunction_ss_cLuR::synapse0x30581a0() {
   return (neuron0x3044840()*0.120297);
}

double NNfunction_ss_cLuR::synapse0x30581e0() {
   return (neuron0x3045210()*-1.38579);
}

double NNfunction_ss_cLuR::synapse0x3058220() {
   return (neuron0x3045be0()*0.164075);
}

double NNfunction_ss_cLuR::synapse0x3058260() {
   return (neuron0x30467c0()*-0.0677563);
}

double NNfunction_ss_cLuR::synapse0x30582a0() {
   return (neuron0x3047190()*0.345645);
}

double NNfunction_ss_cLuR::synapse0x30582e0() {
   return (neuron0x3038010()*0.441465);
}

double NNfunction_ss_cLuR::synapse0x3058320() {
   return (neuron0x30389e0()*0.179326);
}

double NNfunction_ss_cLuR::synapse0x3058360() {
   return (neuron0x30393b0()*2.62824);
}

double NNfunction_ss_cLuR::synapse0x30583a0() {
   return (neuron0x304b9f0()*0.0995814);
}

double NNfunction_ss_cLuR::synapse0x30583e0() {
   return (neuron0x304c2a0()*0.111353);
}

double NNfunction_ss_cLuR::synapse0x3058420() {
   return (neuron0x304cc70()*-0.00190305);
}

double NNfunction_ss_cLuR::synapse0x3058460() {
   return (neuron0x304d640()*0.586703);
}

double NNfunction_ss_cLuR::synapse0x3029580() {
   return (neuron0x3054840()*-6.83211);
}

double NNfunction_ss_cLuR::synapse0x30586c0() {
   return (neuron0x3054be0()*9.73584);
}

double NNfunction_ss_cLuR::synapse0x3058700() {
   return (neuron0x3055080()*-5.15451);
}

double NNfunction_ss_cLuR::synapse0x3058740() {
   return (neuron0x30561e0()*-6.90375);
}

double NNfunction_ss_cLuR::synapse0x3058780() {
   return (neuron0x3057340()*-1.48702);
}

