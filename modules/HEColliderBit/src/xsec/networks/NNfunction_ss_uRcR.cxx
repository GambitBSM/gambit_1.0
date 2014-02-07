#include "NNfunction_ss_uRcR.h"
#include <cmath>

double NNfunction_ss_uRcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.3953)/15.2884;
   input1 = (in1 - -8.20118)/1162.69;
   input2 = (in2 - 639.54)/618.735;
   input3 = (in3 - -58.1947)/832.979;
   input4 = (in4 - 1089.93)/975.877;
   input5 = (in5 - 909.631)/964.301;
   input6 = (in6 - 928.883)/973.783;
   input7 = (in7 - 935.523)/953.521;
   input8 = (in8 - 888.259)/937.941;
   input9 = (in9 - 875.361)/926.412;
   input10 = (in10 - 968.62)/928.046;
   input11 = (in11 - 691.128)/833.503;
   input12 = (in12 - 693.131)/838.263;
   input13 = (in13 - 498.808)/511.903;
   input14 = (in14 - 447.443)/468.124;
   input15 = (in15 - 451.085)/472.645;
   input16 = (in16 - 537.745)/572.869;
   input17 = (in17 - 725.257)/855.343;
   input18 = (in18 - 716.826)/862.216;
   input19 = (in19 - 772.284)/849.212;
   input20 = (in20 - -7.19216)/488.194;
   input21 = (in21 - 3.7835)/1161.27;
   input22 = (in22 - 3.07375)/1202.49;
   input23 = (in23 - -190.042)/606.8;
   switch(index) {
     case 0:
         return neuron0x25984a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_uRcR::Value(int index, double* input) {
   input0 = (input[0] - 23.3953)/15.2884;
   input1 = (input[1] - -8.20118)/1162.69;
   input2 = (input[2] - 639.54)/618.735;
   input3 = (input[3] - -58.1947)/832.979;
   input4 = (input[4] - 1089.93)/975.877;
   input5 = (input[5] - 909.631)/964.301;
   input6 = (input[6] - 928.883)/973.783;
   input7 = (input[7] - 935.523)/953.521;
   input8 = (input[8] - 888.259)/937.941;
   input9 = (input[9] - 875.361)/926.412;
   input10 = (input[10] - 968.62)/928.046;
   input11 = (input[11] - 691.128)/833.503;
   input12 = (input[12] - 693.131)/838.263;
   input13 = (input[13] - 498.808)/511.903;
   input14 = (input[14] - 447.443)/468.124;
   input15 = (input[15] - 451.085)/472.645;
   input16 = (input[16] - 537.745)/572.869;
   input17 = (input[17] - 725.257)/855.343;
   input18 = (input[18] - 716.826)/862.216;
   input19 = (input[19] - 772.284)/849.212;
   input20 = (input[20] - -7.19216)/488.194;
   input21 = (input[21] - 3.7835)/1161.27;
   input22 = (input[22] - 3.07375)/1202.49;
   input23 = (input[23] - -190.042)/606.8;
   switch(index) {
     case 0:
         return neuron0x25984a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_uRcR::neuron0x2564560() {
   return input0;
}

double NNfunction_ss_uRcR::neuron0x25648a0() {
   return input1;
}

double NNfunction_ss_uRcR::neuron0x2564be0() {
   return input2;
}

double NNfunction_ss_uRcR::neuron0x2564f20() {
   return input3;
}

double NNfunction_ss_uRcR::neuron0x2565260() {
   return input4;
}

double NNfunction_ss_uRcR::neuron0x25655a0() {
   return input5;
}

double NNfunction_ss_uRcR::neuron0x25658e0() {
   return input6;
}

double NNfunction_ss_uRcR::neuron0x2565c20() {
   return input7;
}

double NNfunction_ss_uRcR::neuron0x2565f60() {
   return input8;
}

double NNfunction_ss_uRcR::neuron0x25662a0() {
   return input9;
}

double NNfunction_ss_uRcR::neuron0x25665e0() {
   return input10;
}

double NNfunction_ss_uRcR::neuron0x2566920() {
   return input11;
}

double NNfunction_ss_uRcR::neuron0x2566c60() {
   return input12;
}

double NNfunction_ss_uRcR::neuron0x2566fa0() {
   return input13;
}

double NNfunction_ss_uRcR::neuron0x25672e0() {
   return input14;
}

double NNfunction_ss_uRcR::neuron0x2567620() {
   return input15;
}

double NNfunction_ss_uRcR::neuron0x2567960() {
   return input16;
}

double NNfunction_ss_uRcR::neuron0x2567ec0() {
   return input17;
}

double NNfunction_ss_uRcR::neuron0x25680e0() {
   return input18;
}

double NNfunction_ss_uRcR::neuron0x2568420() {
   return input19;
}

double NNfunction_ss_uRcR::neuron0x2568760() {
   return input20;
}

double NNfunction_ss_uRcR::neuron0x2568aa0() {
   return input21;
}

double NNfunction_ss_uRcR::neuron0x2568de0() {
   return input22;
}

double NNfunction_ss_uRcR::neuron0x2569120() {
   return input23;
}

double NNfunction_ss_uRcR::input0x25695c0() {
   double input = -0.892478;
   input += synapse0x23243d0();
   input += synapse0x2564420();
   input += synapse0x2564460();
   input += synapse0x2569870();
   input += synapse0x25698b0();
   input += synapse0x25698f0();
   input += synapse0x2569930();
   input += synapse0x2569970();
   input += synapse0x25699b0();
   input += synapse0x25699f0();
   input += synapse0x2569a30();
   input += synapse0x2569a70();
   input += synapse0x2569ab0();
   input += synapse0x2569af0();
   input += synapse0x2569b30();
   input += synapse0x2569b70();
   input += synapse0x2564390();
   input += synapse0x25643d0();
   input += synapse0x2315c70();
   input += synapse0x2315cb0();
   input += synapse0x2569dd0();
   input += synapse0x2569e10();
   input += synapse0x2569e50();
   input += synapse0x2569e90();
   return input;
}

double NNfunction_ss_uRcR::neuron0x25695c0() {
   double input = input0x25695c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2569ed0() {
   double input = -0.864745;
   input += synapse0x256a210();
   input += synapse0x256a250();
   input += synapse0x256a290();
   input += synapse0x256a2d0();
   input += synapse0x256a310();
   input += synapse0x256a350();
   input += synapse0x256a390();
   input += synapse0x256a3d0();
   input += synapse0x256a410();
   input += synapse0x2569cc0();
   input += synapse0x2569d00();
   input += synapse0x2569d40();
   input += synapse0x2569d80();
   input += synapse0x256a660();
   input += synapse0x256a6a0();
   input += synapse0x256a6e0();
   input += synapse0x256a060();
   input += synapse0x256a0a0();
   input += synapse0x256a830();
   input += synapse0x256a870();
   input += synapse0x256a8b0();
   input += synapse0x256a8f0();
   input += synapse0x256a930();
   input += synapse0x256a970();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2569ed0() {
   double input = input0x2569ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x256a9b0() {
   double input = 2.44502;
   input += synapse0x256acf0();
   input += synapse0x256ad30();
   input += synapse0x256ad70();
   input += synapse0x256adb0();
   input += synapse0x256adf0();
   input += synapse0x256ae30();
   input += synapse0x256ae70();
   input += synapse0x256aeb0();
   input += synapse0x256aef0();
   input += synapse0x256af30();
   input += synapse0x256af70();
   input += synapse0x256afb0();
   input += synapse0x256aff0();
   input += synapse0x256b030();
   input += synapse0x256b070();
   input += synapse0x256b0b0();
   input += synapse0x256ab40();
   input += synapse0x256ab80();
   input += synapse0x2323ac0();
   input += synapse0x2323b00();
   input += synapse0x25535f0();
   input += synapse0x2553630();
   input += synapse0x2553670();
   input += synapse0x25644a0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x256a9b0() {
   double input = input0x256a9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2324240() {
   double input = -1.47471;
   input += synapse0x256a600();
   input += synapse0x25644e0();
   input += synapse0x2564520();
   input += synapse0x256b200();
   input += synapse0x256b240();
   input += synapse0x256b280();
   input += synapse0x256b2c0();
   input += synapse0x256b300();
   input += synapse0x256b340();
   input += synapse0x256b380();
   input += synapse0x256b3c0();
   input += synapse0x256b400();
   input += synapse0x256b440();
   input += synapse0x256b480();
   input += synapse0x256b4c0();
   input += synapse0x256b500();
   input += synapse0x256a450();
   input += synapse0x256a490();
   input += synapse0x256b650();
   input += synapse0x256b690();
   input += synapse0x256b6d0();
   input += synapse0x256b710();
   input += synapse0x256b750();
   input += synapse0x256b790();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2324240() {
   double input = input0x2324240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x256b7d0() {
   double input = 1.7056;
   input += synapse0x256bb10();
   input += synapse0x256bb50();
   input += synapse0x256bb90();
   input += synapse0x256bbd0();
   input += synapse0x256bc10();
   input += synapse0x256bc50();
   input += synapse0x256bc90();
   input += synapse0x256bcd0();
   input += synapse0x256bd10();
   input += synapse0x256bd50();
   input += synapse0x256bd90();
   input += synapse0x256bdd0();
   input += synapse0x256be10();
   input += synapse0x256be50();
   input += synapse0x256be90();
   input += synapse0x256bed0();
   input += synapse0x256b960();
   input += synapse0x256b9a0();
   input += synapse0x256c020();
   input += synapse0x256c060();
   input += synapse0x256c0a0();
   input += synapse0x256c0e0();
   input += synapse0x256c120();
   input += synapse0x256c160();
   return input;
}

double NNfunction_ss_uRcR::neuron0x256b7d0() {
   double input = input0x256b7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x256c1a0() {
   double input = 0.304419;
   input += synapse0x256c4e0();
   input += synapse0x256c520();
   input += synapse0x256c560();
   input += synapse0x256c5a0();
   input += synapse0x256c5e0();
   input += synapse0x256c620();
   input += synapse0x256c660();
   input += synapse0x256c6a0();
   input += synapse0x256c6e0();
   input += synapse0x2323e30();
   input += synapse0x2323e70();
   input += synapse0x2323eb0();
   input += synapse0x2323ef0();
   input += synapse0x2323f30();
   input += synapse0x2323f70();
   input += synapse0x2323fb0();
   input += synapse0x256c330();
   input += synapse0x256c370();
   input += synapse0x2324100();
   input += synapse0x2324140();
   input += synapse0x2324180();
   input += synapse0x23241c0();
   input += synapse0x2324200();
   input += synapse0x256cf30();
   return input;
}

double NNfunction_ss_uRcR::neuron0x256c1a0() {
   double input = input0x256c1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x256cf70() {
   double input = -1.37126;
   input += synapse0x256d2b0();
   input += synapse0x256d2f0();
   input += synapse0x256d330();
   input += synapse0x256d370();
   input += synapse0x256d3b0();
   input += synapse0x256d3f0();
   input += synapse0x256d430();
   input += synapse0x256d470();
   input += synapse0x256d4b0();
   input += synapse0x256d4f0();
   input += synapse0x256d530();
   input += synapse0x256d570();
   input += synapse0x256d5b0();
   input += synapse0x256d5f0();
   input += synapse0x256d630();
   input += synapse0x256d670();
   input += synapse0x256d100();
   input += synapse0x256d140();
   input += synapse0x256d7c0();
   input += synapse0x256d800();
   input += synapse0x256d840();
   input += synapse0x256d880();
   input += synapse0x256d8c0();
   input += synapse0x256d900();
   return input;
}

double NNfunction_ss_uRcR::neuron0x256cf70() {
   double input = input0x256cf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x256d940() {
   double input = 0.190922;
   input += synapse0x256dc80();
   input += synapse0x256dcc0();
   input += synapse0x256dd00();
   input += synapse0x256dd40();
   input += synapse0x256dd80();
   input += synapse0x256ddc0();
   input += synapse0x256de00();
   input += synapse0x256de40();
   input += synapse0x256de80();
   input += synapse0x256dec0();
   input += synapse0x256df00();
   input += synapse0x256df40();
   input += synapse0x256df80();
   input += synapse0x256dfc0();
   input += synapse0x256e000();
   input += synapse0x256e040();
   input += synapse0x256dad0();
   input += synapse0x256db10();
   input += synapse0x256e190();
   input += synapse0x256e1d0();
   input += synapse0x256e210();
   input += synapse0x256e250();
   input += synapse0x256e290();
   input += synapse0x256e2d0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x256d940() {
   double input = input0x256d940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x256e310() {
   double input = 0.0867295;
   input += synapse0x2567db0();
   input += synapse0x2567df0();
   input += synapse0x2567e30();
   input += synapse0x2567e70();
   input += synapse0x256e860();
   input += synapse0x256e8a0();
   input += synapse0x256e8e0();
   input += synapse0x256e920();
   input += synapse0x256e960();
   input += synapse0x256e9a0();
   input += synapse0x256e9e0();
   input += synapse0x256ea20();
   input += synapse0x256ea60();
   input += synapse0x256eaa0();
   input += synapse0x256eae0();
   input += synapse0x256eb20();
   input += synapse0x256e4a0();
   input += synapse0x256e4e0();
   input += synapse0x256ec70();
   input += synapse0x256ecb0();
   input += synapse0x256ecf0();
   input += synapse0x256ed30();
   input += synapse0x256ed70();
   input += synapse0x256edb0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x256e310() {
   double input = input0x256e310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x256edf0() {
   double input = 0.915514;
   input += synapse0x256f130();
   input += synapse0x256f170();
   input += synapse0x256f1b0();
   input += synapse0x256f1f0();
   input += synapse0x256f230();
   input += synapse0x256f270();
   input += synapse0x256f2b0();
   input += synapse0x256f2f0();
   input += synapse0x256f330();
   input += synapse0x256f370();
   input += synapse0x256f3b0();
   input += synapse0x256f3f0();
   input += synapse0x256f430();
   input += synapse0x256f470();
   input += synapse0x256f4b0();
   input += synapse0x256f4f0();
   input += synapse0x256ef80();
   input += synapse0x256efc0();
   input += synapse0x256f640();
   input += synapse0x256f680();
   input += synapse0x256f6c0();
   input += synapse0x256f700();
   input += synapse0x256f740();
   input += synapse0x256f780();
   return input;
}

double NNfunction_ss_uRcR::neuron0x256edf0() {
   double input = input0x256edf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x256f7c0() {
   double input = -0.98734;
   input += synapse0x256fb00();
   input += synapse0x256fb40();
   input += synapse0x256fb80();
   input += synapse0x256fbc0();
   input += synapse0x256fc00();
   input += synapse0x256fc40();
   input += synapse0x256fc80();
   input += synapse0x256fcc0();
   input += synapse0x256fd00();
   input += synapse0x256fd40();
   input += synapse0x256fd80();
   input += synapse0x256fdc0();
   input += synapse0x256fe00();
   input += synapse0x256fe40();
   input += synapse0x256fe80();
   input += synapse0x256fec0();
   input += synapse0x256f950();
   input += synapse0x256f990();
   input += synapse0x256c720();
   input += synapse0x256c760();
   input += synapse0x256c7a0();
   input += synapse0x256c7e0();
   input += synapse0x256c820();
   input += synapse0x256c860();
   return input;
}

double NNfunction_ss_uRcR::neuron0x256f7c0() {
   double input = input0x256f7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x256c8a0() {
   double input = 0.954897;
   input += synapse0x256cbe0();
   input += synapse0x256cc20();
   input += synapse0x256cc60();
   input += synapse0x256cca0();
   input += synapse0x256cce0();
   input += synapse0x256cd20();
   input += synapse0x256cd60();
   input += synapse0x256cda0();
   input += synapse0x256cde0();
   input += synapse0x256ce20();
   input += synapse0x256ce60();
   input += synapse0x256cea0();
   input += synapse0x256cee0();
   input += synapse0x2571020();
   input += synapse0x2571060();
   input += synapse0x25710a0();
   input += synapse0x256ca30();
   input += synapse0x256ca70();
   input += synapse0x25711f0();
   input += synapse0x2571230();
   input += synapse0x2571270();
   input += synapse0x25712b0();
   input += synapse0x25712f0();
   input += synapse0x2571330();
   return input;
}

double NNfunction_ss_uRcR::neuron0x256c8a0() {
   double input = input0x256c8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2571370() {
   double input = -0.400619;
   input += synapse0x25716b0();
   input += synapse0x25716f0();
   input += synapse0x2571730();
   input += synapse0x2571770();
   input += synapse0x25717b0();
   input += synapse0x25717f0();
   input += synapse0x2571830();
   input += synapse0x2571870();
   input += synapse0x25718b0();
   input += synapse0x25718f0();
   input += synapse0x2571930();
   input += synapse0x2571970();
   input += synapse0x25719b0();
   input += synapse0x25719f0();
   input += synapse0x2571a30();
   input += synapse0x2571a70();
   input += synapse0x2571500();
   input += synapse0x2571540();
   input += synapse0x2571bc0();
   input += synapse0x2571c00();
   input += synapse0x2571c40();
   input += synapse0x2571c80();
   input += synapse0x2571cc0();
   input += synapse0x2571d00();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2571370() {
   double input = input0x2571370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2571d40() {
   double input = 0.872088;
   input += synapse0x2572080();
   input += synapse0x25720c0();
   input += synapse0x2572100();
   input += synapse0x2572140();
   input += synapse0x2572180();
   input += synapse0x25721c0();
   input += synapse0x2572200();
   input += synapse0x2572240();
   input += synapse0x2572280();
   input += synapse0x25722c0();
   input += synapse0x2572300();
   input += synapse0x2572340();
   input += synapse0x2572380();
   input += synapse0x25723c0();
   input += synapse0x2572400();
   input += synapse0x2572440();
   input += synapse0x2571ed0();
   input += synapse0x2571f10();
   input += synapse0x2572590();
   input += synapse0x25725d0();
   input += synapse0x2572610();
   input += synapse0x2572650();
   input += synapse0x2572690();
   input += synapse0x25726d0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2571d40() {
   double input = input0x2571d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2572710() {
   double input = -0.172203;
   input += synapse0x2572a50();
   input += synapse0x2572a90();
   input += synapse0x2572ad0();
   input += synapse0x2572b10();
   input += synapse0x2572b50();
   input += synapse0x2572b90();
   input += synapse0x2572bd0();
   input += synapse0x2572c10();
   input += synapse0x2572c50();
   input += synapse0x2572c90();
   input += synapse0x2572cd0();
   input += synapse0x2572d10();
   input += synapse0x2572d50();
   input += synapse0x2572d90();
   input += synapse0x2572dd0();
   input += synapse0x2572e10();
   input += synapse0x25728a0();
   input += synapse0x25728e0();
   input += synapse0x2572f60();
   input += synapse0x2572fa0();
   input += synapse0x2572fe0();
   input += synapse0x2573020();
   input += synapse0x2573060();
   input += synapse0x25730a0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2572710() {
   double input = input0x2572710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x25730e0() {
   double input = 0.0696237;
   input += synapse0x2573420();
   input += synapse0x2564780();
   input += synapse0x25647c0();
   input += synapse0x2564ac0();
   input += synapse0x2564b00();
   input += synapse0x2564e00();
   input += synapse0x2564e40();
   input += synapse0x2565140();
   input += synapse0x2565180();
   input += synapse0x2565480();
   input += synapse0x25654c0();
   input += synapse0x25657c0();
   input += synapse0x2565800();
   input += synapse0x2565b00();
   input += synapse0x2565b40();
   input += synapse0x2565e40();
   input += synapse0x2565e80();
   input += synapse0x2566180();
   input += synapse0x25661c0();
   input += synapse0x25664c0();
   input += synapse0x2566500();
   input += synapse0x2566800();
   input += synapse0x2566840();
   input += synapse0x2566b40();
   return input;
}

double NNfunction_ss_uRcR::neuron0x25730e0() {
   double input = input0x25730e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2574ef0() {
   double input = 2.34632;
   input += synapse0x2566b80();
   input += synapse0x2567840();
   input += synapse0x2567880();
   input += synapse0x2573270();
   input += synapse0x25732b0();
   input += synapse0x2567b80();
   input += synapse0x2567bc0();
   input += synapse0x2315b50();
   input += synapse0x2315b90();
   input += synapse0x2568300();
   input += synapse0x2568340();
   input += synapse0x2568640();
   input += synapse0x2568680();
   input += synapse0x2568980();
   input += synapse0x25689c0();
   input += synapse0x2568cc0();
   input += synapse0x2568d00();
   input += synapse0x2569000();
   input += synapse0x2569040();
   input += synapse0x2569340();
   input += synapse0x2569380();
   input += synapse0x2566e80();
   input += synapse0x2566ec0();
   input += synapse0x2575190();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2574ef0() {
   double input = input0x2574ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x25751d0() {
   double input = 0.013678;
   input += synapse0x2575510();
   input += synapse0x2575550();
   input += synapse0x2575590();
   input += synapse0x25755d0();
   input += synapse0x2575610();
   input += synapse0x2575650();
   input += synapse0x2575690();
   input += synapse0x25756d0();
   input += synapse0x2575710();
   input += synapse0x2575750();
   input += synapse0x2575790();
   input += synapse0x25757d0();
   input += synapse0x2575810();
   input += synapse0x2575850();
   input += synapse0x2575890();
   input += synapse0x25758d0();
   input += synapse0x2575360();
   input += synapse0x25753a0();
   input += synapse0x2575a20();
   input += synapse0x2575a60();
   input += synapse0x2575aa0();
   input += synapse0x2575ae0();
   input += synapse0x2575b20();
   input += synapse0x2575b60();
   return input;
}

double NNfunction_ss_uRcR::neuron0x25751d0() {
   double input = input0x25751d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2575ba0() {
   double input = 0.0300551;
   input += synapse0x2575ee0();
   input += synapse0x2575f20();
   input += synapse0x2575f60();
   input += synapse0x2575fa0();
   input += synapse0x2575fe0();
   input += synapse0x2576020();
   input += synapse0x2576060();
   input += synapse0x25760a0();
   input += synapse0x25760e0();
   input += synapse0x2576120();
   input += synapse0x2576160();
   input += synapse0x25761a0();
   input += synapse0x25761e0();
   input += synapse0x2576220();
   input += synapse0x2576260();
   input += synapse0x25762a0();
   input += synapse0x2575d30();
   input += synapse0x2575d70();
   input += synapse0x25763f0();
   input += synapse0x2576430();
   input += synapse0x2576470();
   input += synapse0x25764b0();
   input += synapse0x25764f0();
   input += synapse0x2576530();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2575ba0() {
   double input = input0x2575ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2576570() {
   double input = -1.72792;
   input += synapse0x25768b0();
   input += synapse0x25768f0();
   input += synapse0x2576930();
   input += synapse0x2576970();
   input += synapse0x25769b0();
   input += synapse0x25769f0();
   input += synapse0x2576a30();
   input += synapse0x2576a70();
   input += synapse0x2576ab0();
   input += synapse0x2576af0();
   input += synapse0x2576b30();
   input += synapse0x2576b70();
   input += synapse0x2576bb0();
   input += synapse0x2576bf0();
   input += synapse0x2576c30();
   input += synapse0x2576c70();
   input += synapse0x2576700();
   input += synapse0x2576740();
   input += synapse0x2576dc0();
   input += synapse0x2576e00();
   input += synapse0x2576e40();
   input += synapse0x2576e80();
   input += synapse0x2576ec0();
   input += synapse0x2576f00();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2576570() {
   double input = input0x2576570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2576f40() {
   double input = -0.170691;
   input += synapse0x2577280();
   input += synapse0x25772c0();
   input += synapse0x2577300();
   input += synapse0x2577340();
   input += synapse0x2577380();
   input += synapse0x25773c0();
   input += synapse0x2577400();
   input += synapse0x2577440();
   input += synapse0x2577480();
   input += synapse0x25774c0();
   input += synapse0x2577500();
   input += synapse0x2577540();
   input += synapse0x2577580();
   input += synapse0x25775c0();
   input += synapse0x2577600();
   input += synapse0x2577640();
   input += synapse0x25770d0();
   input += synapse0x2577110();
   input += synapse0x2577790();
   input += synapse0x25777d0();
   input += synapse0x2577810();
   input += synapse0x2577850();
   input += synapse0x2577890();
   input += synapse0x25778d0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2576f40() {
   double input = input0x2576f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2577910() {
   double input = 2.26273;
   input += synapse0x2577c50();
   input += synapse0x2577c90();
   input += synapse0x2577cd0();
   input += synapse0x2577d10();
   input += synapse0x2577d50();
   input += synapse0x2577d90();
   input += synapse0x2577dd0();
   input += synapse0x2577e10();
   input += synapse0x2577e50();
   input += synapse0x2570010();
   input += synapse0x2570050();
   input += synapse0x2570090();
   input += synapse0x25700d0();
   input += synapse0x2570110();
   input += synapse0x2570150();
   input += synapse0x2570190();
   input += synapse0x2577aa0();
   input += synapse0x2577ae0();
   input += synapse0x25702e0();
   input += synapse0x2570320();
   input += synapse0x2570360();
   input += synapse0x25703a0();
   input += synapse0x25703e0();
   input += synapse0x2570420();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2577910() {
   double input = input0x2577910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2570460() {
   double input = 1.98522;
   input += synapse0x25707a0();
   input += synapse0x25707e0();
   input += synapse0x2570820();
   input += synapse0x2570860();
   input += synapse0x25708a0();
   input += synapse0x25708e0();
   input += synapse0x2570920();
   input += synapse0x2570960();
   input += synapse0x25709a0();
   input += synapse0x25709e0();
   input += synapse0x2570a20();
   input += synapse0x2570a60();
   input += synapse0x2570aa0();
   input += synapse0x2570ae0();
   input += synapse0x2570b20();
   input += synapse0x2570b60();
   input += synapse0x25705f0();
   input += synapse0x2570630();
   input += synapse0x2570cb0();
   input += synapse0x2570cf0();
   input += synapse0x2570d30();
   input += synapse0x2570d70();
   input += synapse0x2570db0();
   input += synapse0x2570df0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2570460() {
   double input = input0x2570460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2570e30() {
   double input = 0.0535729;
   input += synapse0x2570fc0();
   input += synapse0x257a050();
   input += synapse0x257a090();
   input += synapse0x257a0d0();
   input += synapse0x257a110();
   input += synapse0x257a150();
   input += synapse0x257a190();
   input += synapse0x257a1d0();
   input += synapse0x257a210();
   input += synapse0x257a250();
   input += synapse0x257a290();
   input += synapse0x257a2d0();
   input += synapse0x257a310();
   input += synapse0x257a350();
   input += synapse0x257a390();
   input += synapse0x257a3d0();
   input += synapse0x2579ea0();
   input += synapse0x2579ee0();
   input += synapse0x257a520();
   input += synapse0x257a560();
   input += synapse0x257a5a0();
   input += synapse0x257a5e0();
   input += synapse0x257a620();
   input += synapse0x257a660();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2570e30() {
   double input = input0x2570e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x257a6a0() {
   double input = 2.00596;
   input += synapse0x257a9e0();
   input += synapse0x257aa20();
   input += synapse0x257aa60();
   input += synapse0x257aaa0();
   input += synapse0x257aae0();
   input += synapse0x257ab20();
   input += synapse0x257ab60();
   input += synapse0x257aba0();
   input += synapse0x257abe0();
   input += synapse0x257ac20();
   input += synapse0x257ac60();
   input += synapse0x257aca0();
   input += synapse0x257ace0();
   input += synapse0x257ad20();
   input += synapse0x257ad60();
   input += synapse0x257ada0();
   input += synapse0x257a830();
   input += synapse0x257a870();
   input += synapse0x257aef0();
   input += synapse0x257af30();
   input += synapse0x257af70();
   input += synapse0x257afb0();
   input += synapse0x257aff0();
   input += synapse0x257b030();
   return input;
}

double NNfunction_ss_uRcR::neuron0x257a6a0() {
   double input = input0x257a6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x257b070() {
   double input = 0.797222;
   input += synapse0x257b3b0();
   input += synapse0x257b3f0();
   input += synapse0x257b430();
   input += synapse0x257b470();
   input += synapse0x257b4b0();
   input += synapse0x257b4f0();
   input += synapse0x257b530();
   input += synapse0x257b570();
   input += synapse0x257b5b0();
   input += synapse0x257b5f0();
   input += synapse0x257b630();
   input += synapse0x257b670();
   input += synapse0x257b6b0();
   input += synapse0x257b6f0();
   input += synapse0x257b730();
   input += synapse0x257b770();
   input += synapse0x257b200();
   input += synapse0x257b240();
   input += synapse0x257b8c0();
   input += synapse0x257b900();
   input += synapse0x257b940();
   input += synapse0x257b980();
   input += synapse0x257b9c0();
   input += synapse0x257ba00();
   return input;
}

double NNfunction_ss_uRcR::neuron0x257b070() {
   double input = input0x257b070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x257ba40() {
   double input = 0.67909;
   input += synapse0x257bd80();
   input += synapse0x257bdc0();
   input += synapse0x257be00();
   input += synapse0x257be40();
   input += synapse0x257be80();
   input += synapse0x257bec0();
   input += synapse0x257bf00();
   input += synapse0x257bf40();
   input += synapse0x257bf80();
   input += synapse0x257bfc0();
   input += synapse0x257c000();
   input += synapse0x257c040();
   input += synapse0x257c080();
   input += synapse0x257c0c0();
   input += synapse0x257c100();
   input += synapse0x257c140();
   input += synapse0x257bbd0();
   input += synapse0x257bc10();
   input += synapse0x257c290();
   input += synapse0x257c2d0();
   input += synapse0x257c310();
   input += synapse0x257c350();
   input += synapse0x257c390();
   input += synapse0x257c3d0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x257ba40() {
   double input = input0x257ba40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x257c410() {
   double input = -0.870779;
   input += synapse0x257c750();
   input += synapse0x257c790();
   input += synapse0x257c7d0();
   input += synapse0x257c810();
   input += synapse0x257c850();
   input += synapse0x257c890();
   input += synapse0x257c8d0();
   input += synapse0x257c910();
   input += synapse0x257c950();
   input += synapse0x257c990();
   input += synapse0x257c9d0();
   input += synapse0x257ca10();
   input += synapse0x257ca50();
   input += synapse0x257ca90();
   input += synapse0x257cad0();
   input += synapse0x257cb10();
   input += synapse0x257c5a0();
   input += synapse0x257c5e0();
   input += synapse0x257cc60();
   input += synapse0x257cca0();
   input += synapse0x257cce0();
   input += synapse0x257cd20();
   input += synapse0x257cd60();
   input += synapse0x257cda0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x257c410() {
   double input = input0x257c410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x257cde0() {
   double input = 1.54816;
   input += synapse0x257d120();
   input += synapse0x257d160();
   input += synapse0x257d1a0();
   input += synapse0x257d1e0();
   input += synapse0x257d220();
   input += synapse0x257d260();
   input += synapse0x257d2a0();
   input += synapse0x257d2e0();
   input += synapse0x257d320();
   input += synapse0x257d360();
   input += synapse0x257d3a0();
   input += synapse0x257d3e0();
   input += synapse0x257d420();
   input += synapse0x257d460();
   input += synapse0x257d4a0();
   input += synapse0x257d4e0();
   input += synapse0x257cf70();
   input += synapse0x257cfb0();
   input += synapse0x257d630();
   input += synapse0x257d670();
   input += synapse0x257d6b0();
   input += synapse0x257d6f0();
   input += synapse0x257d730();
   input += synapse0x257d770();
   return input;
}

double NNfunction_ss_uRcR::neuron0x257cde0() {
   double input = input0x257cde0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x257d7b0() {
   double input = 1.89385;
   input += synapse0x257daf0();
   input += synapse0x257db30();
   input += synapse0x257db70();
   input += synapse0x257dbb0();
   input += synapse0x257dbf0();
   input += synapse0x257dc30();
   input += synapse0x257dc70();
   input += synapse0x257dcb0();
   input += synapse0x257dcf0();
   input += synapse0x257dd30();
   input += synapse0x257dd70();
   input += synapse0x257ddb0();
   input += synapse0x257ddf0();
   input += synapse0x257de30();
   input += synapse0x257de70();
   input += synapse0x257deb0();
   input += synapse0x257d940();
   input += synapse0x257d980();
   input += synapse0x257e000();
   input += synapse0x257e040();
   input += synapse0x257e080();
   input += synapse0x257e0c0();
   input += synapse0x257e100();
   input += synapse0x257e140();
   return input;
}

double NNfunction_ss_uRcR::neuron0x257d7b0() {
   double input = input0x257d7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x257e180() {
   double input = 1.73154;
   input += synapse0x257e4c0();
   input += synapse0x257e500();
   input += synapse0x257e540();
   input += synapse0x257e580();
   input += synapse0x257e5c0();
   input += synapse0x257e600();
   input += synapse0x257e640();
   input += synapse0x257e680();
   input += synapse0x257e6c0();
   input += synapse0x257e700();
   input += synapse0x257e740();
   input += synapse0x257e780();
   input += synapse0x257e7c0();
   input += synapse0x257e800();
   input += synapse0x257e840();
   input += synapse0x257e880();
   input += synapse0x257e310();
   input += synapse0x257e350();
   input += synapse0x257e9d0();
   input += synapse0x257ea10();
   input += synapse0x257ea50();
   input += synapse0x257ea90();
   input += synapse0x257ead0();
   input += synapse0x257eb10();
   return input;
}

double NNfunction_ss_uRcR::neuron0x257e180() {
   double input = input0x257e180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x257eb50() {
   double input = 1.49547;
   input += synapse0x257ee90();
   input += synapse0x2573460();
   input += synapse0x25734a0();
   input += synapse0x25734e0();
   input += synapse0x2573730();
   input += synapse0x2573770();
   input += synapse0x25737b0();
   input += synapse0x2573a00();
   input += synapse0x2573a40();
   input += synapse0x2573c90();
   input += synapse0x2573cd0();
   input += synapse0x2573d10();
   input += synapse0x2573f60();
   input += synapse0x2573fa0();
   input += synapse0x25741f0();
   input += synapse0x2574230();
   input += synapse0x257ece0();
   input += synapse0x257ed20();
   input += synapse0x2574380();
   input += synapse0x2574890();
   input += synapse0x25748d0();
   input += synapse0x2574910();
   input += synapse0x2574b60();
   input += synapse0x2574ba0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x257eb50() {
   double input = input0x257eb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2574be0() {
   double input = 1.26712;
   input += synapse0x2574450();
   input += synapse0x2574490();
   input += synapse0x25744d0();
   input += synapse0x2574510();
   input += synapse0x2574e90();
   input += synapse0x25811e0();
   input += synapse0x2581220();
   input += synapse0x2581260();
   input += synapse0x25812a0();
   input += synapse0x25812e0();
   input += synapse0x2581320();
   input += synapse0x2581360();
   input += synapse0x25813a0();
   input += synapse0x25813e0();
   input += synapse0x2581420();
   input += synapse0x2581460();
   input += synapse0x2574d70();
   input += synapse0x2574db0();
   input += synapse0x25815b0();
   input += synapse0x25815f0();
   input += synapse0x2581630();
   input += synapse0x2581670();
   input += synapse0x25816b0();
   input += synapse0x25816f0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2574be0() {
   double input = input0x2574be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2581730() {
   double input = 0.683281;
   input += synapse0x2581a70();
   input += synapse0x2581ab0();
   input += synapse0x2581af0();
   input += synapse0x2581b30();
   input += synapse0x2581b70();
   input += synapse0x2581bb0();
   input += synapse0x2581bf0();
   input += synapse0x2581c30();
   input += synapse0x2581c70();
   input += synapse0x2581cb0();
   input += synapse0x2581cf0();
   input += synapse0x2581d30();
   input += synapse0x2581d70();
   input += synapse0x2581db0();
   input += synapse0x2581df0();
   input += synapse0x2581e30();
   input += synapse0x25818c0();
   input += synapse0x2581900();
   input += synapse0x2581f80();
   input += synapse0x2581fc0();
   input += synapse0x2582000();
   input += synapse0x2582040();
   input += synapse0x2582080();
   input += synapse0x25820c0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2581730() {
   double input = input0x2581730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2582100() {
   double input = -0.261352;
   input += synapse0x2582440();
   input += synapse0x2582480();
   input += synapse0x25824c0();
   input += synapse0x2582500();
   input += synapse0x2582540();
   input += synapse0x2582580();
   input += synapse0x25825c0();
   input += synapse0x2582600();
   input += synapse0x2582640();
   input += synapse0x2582680();
   input += synapse0x25826c0();
   input += synapse0x2582700();
   input += synapse0x2582740();
   input += synapse0x2582780();
   input += synapse0x25827c0();
   input += synapse0x2582800();
   input += synapse0x2582290();
   input += synapse0x25822d0();
   input += synapse0x2582950();
   input += synapse0x2582990();
   input += synapse0x25829d0();
   input += synapse0x2582a10();
   input += synapse0x2582a50();
   input += synapse0x2582a90();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2582100() {
   double input = input0x2582100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2582ad0() {
   double input = -1.15785;
   input += synapse0x2582e10();
   input += synapse0x2582e50();
   input += synapse0x2582e90();
   input += synapse0x2582ed0();
   input += synapse0x2582f10();
   input += synapse0x2582f50();
   input += synapse0x2582f90();
   input += synapse0x2582fd0();
   input += synapse0x2583010();
   input += synapse0x2583050();
   input += synapse0x2583090();
   input += synapse0x25830d0();
   input += synapse0x2583110();
   input += synapse0x2583150();
   input += synapse0x2583190();
   input += synapse0x25831d0();
   input += synapse0x2582c60();
   input += synapse0x2582ca0();
   input += synapse0x2583320();
   input += synapse0x2583360();
   input += synapse0x25833a0();
   input += synapse0x25833e0();
   input += synapse0x2583420();
   input += synapse0x2583460();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2582ad0() {
   double input = input0x2582ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x25834a0() {
   double input = -1.68506;
   input += synapse0x25837e0();
   input += synapse0x2583820();
   input += synapse0x2583860();
   input += synapse0x25838a0();
   input += synapse0x25838e0();
   input += synapse0x2583920();
   input += synapse0x2583960();
   input += synapse0x25839a0();
   input += synapse0x25839e0();
   input += synapse0x2583a20();
   input += synapse0x2583a60();
   input += synapse0x2583aa0();
   input += synapse0x2583ae0();
   input += synapse0x2583b20();
   input += synapse0x2583b60();
   input += synapse0x2583ba0();
   input += synapse0x2583630();
   input += synapse0x2583670();
   input += synapse0x2583cf0();
   input += synapse0x2583d30();
   input += synapse0x2583d70();
   input += synapse0x2583db0();
   input += synapse0x2583df0();
   input += synapse0x2583e30();
   return input;
}

double NNfunction_ss_uRcR::neuron0x25834a0() {
   double input = input0x25834a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2583e70() {
   double input = -1.00475;
   input += synapse0x25841b0();
   input += synapse0x25841f0();
   input += synapse0x2584230();
   input += synapse0x2584270();
   input += synapse0x25842b0();
   input += synapse0x25842f0();
   input += synapse0x2584330();
   input += synapse0x2584370();
   input += synapse0x25843b0();
   input += synapse0x25843f0();
   input += synapse0x2584430();
   input += synapse0x2584470();
   input += synapse0x25844b0();
   input += synapse0x25844f0();
   input += synapse0x2584530();
   input += synapse0x2584570();
   input += synapse0x2584000();
   input += synapse0x2584040();
   input += synapse0x25846c0();
   input += synapse0x2584700();
   input += synapse0x2584740();
   input += synapse0x2584780();
   input += synapse0x25847c0();
   input += synapse0x2584800();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2583e70() {
   double input = input0x2583e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2584840() {
   double input = 0.637694;
   input += synapse0x2584b80();
   input += synapse0x2584bc0();
   input += synapse0x2584c00();
   input += synapse0x2584c40();
   input += synapse0x2584c80();
   input += synapse0x2584cc0();
   input += synapse0x2584d00();
   input += synapse0x2584d40();
   input += synapse0x2584d80();
   input += synapse0x2584dc0();
   input += synapse0x2584e00();
   input += synapse0x2584e40();
   input += synapse0x2584e80();
   input += synapse0x2584ec0();
   input += synapse0x2584f00();
   input += synapse0x2584f40();
   input += synapse0x25849d0();
   input += synapse0x2584a10();
   input += synapse0x2585090();
   input += synapse0x25850d0();
   input += synapse0x2585110();
   input += synapse0x2585150();
   input += synapse0x2585190();
   input += synapse0x25851d0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2584840() {
   double input = input0x2584840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2585210() {
   double input = -1.3917;
   input += synapse0x2585550();
   input += synapse0x2585590();
   input += synapse0x25855d0();
   input += synapse0x2585610();
   input += synapse0x2585650();
   input += synapse0x2585690();
   input += synapse0x25856d0();
   input += synapse0x2585710();
   input += synapse0x2585750();
   input += synapse0x2585790();
   input += synapse0x25857d0();
   input += synapse0x2585810();
   input += synapse0x2585850();
   input += synapse0x2585890();
   input += synapse0x25858d0();
   input += synapse0x2585910();
   input += synapse0x25853a0();
   input += synapse0x25853e0();
   input += synapse0x2585a60();
   input += synapse0x2585aa0();
   input += synapse0x2585ae0();
   input += synapse0x2585b20();
   input += synapse0x2585b60();
   input += synapse0x2585ba0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2585210() {
   double input = input0x2585210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2585be0() {
   double input = -1.93644;
   input += synapse0x256e650();
   input += synapse0x256e690();
   input += synapse0x256e6d0();
   input += synapse0x256e710();
   input += synapse0x256e750();
   input += synapse0x256e790();
   input += synapse0x256e7d0();
   input += synapse0x256e810();
   input += synapse0x2586330();
   input += synapse0x2586370();
   input += synapse0x25863b0();
   input += synapse0x25863f0();
   input += synapse0x2586430();
   input += synapse0x2586470();
   input += synapse0x25864b0();
   input += synapse0x25864f0();
   input += synapse0x2585d70();
   input += synapse0x2585db0();
   input += synapse0x2586640();
   input += synapse0x2586680();
   input += synapse0x25866c0();
   input += synapse0x2586700();
   input += synapse0x2586740();
   input += synapse0x2586780();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2585be0() {
   double input = input0x2585be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x25867c0() {
   double input = 0.627921;
   input += synapse0x2586b00();
   input += synapse0x2586b40();
   input += synapse0x2586b80();
   input += synapse0x2586bc0();
   input += synapse0x2586c00();
   input += synapse0x2586c40();
   input += synapse0x2586c80();
   input += synapse0x2586cc0();
   input += synapse0x2586d00();
   input += synapse0x2586d40();
   input += synapse0x2586d80();
   input += synapse0x2586dc0();
   input += synapse0x2586e00();
   input += synapse0x2586e40();
   input += synapse0x2586e80();
   input += synapse0x2586ec0();
   input += synapse0x2586950();
   input += synapse0x2586990();
   input += synapse0x2587010();
   input += synapse0x2587050();
   input += synapse0x2587090();
   input += synapse0x25870d0();
   input += synapse0x2587110();
   input += synapse0x2587150();
   return input;
}

double NNfunction_ss_uRcR::neuron0x25867c0() {
   double input = input0x25867c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2587190() {
   double input = -0.067426;
   input += synapse0x25874d0();
   input += synapse0x2587510();
   input += synapse0x2587550();
   input += synapse0x2587590();
   input += synapse0x25875d0();
   input += synapse0x2587610();
   input += synapse0x2587650();
   input += synapse0x2587690();
   input += synapse0x25876d0();
   input += synapse0x2587710();
   input += synapse0x2587750();
   input += synapse0x2587790();
   input += synapse0x25877d0();
   input += synapse0x2587810();
   input += synapse0x2587850();
   input += synapse0x2587890();
   input += synapse0x2587320();
   input += synapse0x2587360();
   input += synapse0x2577e90();
   input += synapse0x2577ed0();
   input += synapse0x2577f10();
   input += synapse0x2577f50();
   input += synapse0x2577f90();
   input += synapse0x2577fd0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2587190() {
   double input = input0x2587190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2578010() {
   double input = -0.687553;
   input += synapse0x2578350();
   input += synapse0x2578390();
   input += synapse0x25783d0();
   input += synapse0x2578410();
   input += synapse0x2578450();
   input += synapse0x2578490();
   input += synapse0x25784d0();
   input += synapse0x2578510();
   input += synapse0x2578550();
   input += synapse0x2578590();
   input += synapse0x25785d0();
   input += synapse0x2578610();
   input += synapse0x2578650();
   input += synapse0x2578690();
   input += synapse0x25786d0();
   input += synapse0x2578710();
   input += synapse0x25781a0();
   input += synapse0x25781e0();
   input += synapse0x2578860();
   input += synapse0x25788a0();
   input += synapse0x25788e0();
   input += synapse0x2578920();
   input += synapse0x2578960();
   input += synapse0x25789a0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2578010() {
   double input = input0x2578010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x25789e0() {
   double input = -0.720948;
   input += synapse0x2578d20();
   input += synapse0x2578d60();
   input += synapse0x2578da0();
   input += synapse0x2578de0();
   input += synapse0x2578e20();
   input += synapse0x2578e60();
   input += synapse0x2578ea0();
   input += synapse0x2578ee0();
   input += synapse0x2578f20();
   input += synapse0x2578f60();
   input += synapse0x2578fa0();
   input += synapse0x2578fe0();
   input += synapse0x2579020();
   input += synapse0x2579060();
   input += synapse0x25790a0();
   input += synapse0x25790e0();
   input += synapse0x2578b70();
   input += synapse0x2578bb0();
   input += synapse0x2579230();
   input += synapse0x2579270();
   input += synapse0x25792b0();
   input += synapse0x25792f0();
   input += synapse0x2579330();
   input += synapse0x2579370();
   return input;
}

double NNfunction_ss_uRcR::neuron0x25789e0() {
   double input = input0x25789e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x25793b0() {
   double input = -0.989881;
   input += synapse0x25796f0();
   input += synapse0x2579730();
   input += synapse0x2579770();
   input += synapse0x25797b0();
   input += synapse0x25797f0();
   input += synapse0x2579830();
   input += synapse0x2579870();
   input += synapse0x25798b0();
   input += synapse0x25798f0();
   input += synapse0x2579930();
   input += synapse0x2579970();
   input += synapse0x25799b0();
   input += synapse0x25799f0();
   input += synapse0x2579a30();
   input += synapse0x2579a70();
   input += synapse0x2579ab0();
   input += synapse0x2579540();
   input += synapse0x2579580();
   input += synapse0x2579c00();
   input += synapse0x2579c40();
   input += synapse0x2579c80();
   input += synapse0x2579cc0();
   input += synapse0x2579d00();
   input += synapse0x2579d40();
   return input;
}

double NNfunction_ss_uRcR::neuron0x25793b0() {
   double input = input0x25793b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x258b9f0() {
   double input = 1.7001;
   input += synapse0x258bc10();
   input += synapse0x258bc50();
   input += synapse0x258bc90();
   input += synapse0x258bcd0();
   input += synapse0x258bd10();
   input += synapse0x258bd50();
   input += synapse0x258bd90();
   input += synapse0x258bdd0();
   input += synapse0x258be10();
   input += synapse0x258be50();
   input += synapse0x258be90();
   input += synapse0x258bed0();
   input += synapse0x258bf10();
   input += synapse0x258bf50();
   input += synapse0x258bf90();
   input += synapse0x258bfd0();
   input += synapse0x2579d80();
   input += synapse0x2579dc0();
   input += synapse0x258c120();
   input += synapse0x258c160();
   input += synapse0x258c1a0();
   input += synapse0x258c1e0();
   input += synapse0x258c220();
   input += synapse0x258c260();
   return input;
}

double NNfunction_ss_uRcR::neuron0x258b9f0() {
   double input = input0x258b9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x258c2a0() {
   double input = -2.27719;
   input += synapse0x258c5e0();
   input += synapse0x258c620();
   input += synapse0x258c660();
   input += synapse0x258c6a0();
   input += synapse0x258c6e0();
   input += synapse0x258c720();
   input += synapse0x258c760();
   input += synapse0x258c7a0();
   input += synapse0x258c7e0();
   input += synapse0x258c820();
   input += synapse0x258c860();
   input += synapse0x258c8a0();
   input += synapse0x258c8e0();
   input += synapse0x258c920();
   input += synapse0x258c960();
   input += synapse0x258c9a0();
   input += synapse0x258c430();
   input += synapse0x258c470();
   input += synapse0x258caf0();
   input += synapse0x258cb30();
   input += synapse0x258cb70();
   input += synapse0x258cbb0();
   input += synapse0x258cbf0();
   input += synapse0x258cc30();
   return input;
}

double NNfunction_ss_uRcR::neuron0x258c2a0() {
   double input = input0x258c2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x258cc70() {
   double input = 2.83699;
   input += synapse0x258cfb0();
   input += synapse0x258cff0();
   input += synapse0x258d030();
   input += synapse0x258d070();
   input += synapse0x258d0b0();
   input += synapse0x258d0f0();
   input += synapse0x258d130();
   input += synapse0x258d170();
   input += synapse0x258d1b0();
   input += synapse0x258d1f0();
   input += synapse0x258d230();
   input += synapse0x258d270();
   input += synapse0x258d2b0();
   input += synapse0x258d2f0();
   input += synapse0x258d330();
   input += synapse0x258d370();
   input += synapse0x258ce00();
   input += synapse0x258ce40();
   input += synapse0x258d4c0();
   input += synapse0x258d500();
   input += synapse0x258d540();
   input += synapse0x258d580();
   input += synapse0x258d5c0();
   input += synapse0x258d600();
   return input;
}

double NNfunction_ss_uRcR::neuron0x258cc70() {
   double input = input0x258cc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x258d640() {
   double input = -0.966333;
   input += synapse0x258d980();
   input += synapse0x258d9c0();
   input += synapse0x258da00();
   input += synapse0x258da40();
   input += synapse0x258da80();
   input += synapse0x258dac0();
   input += synapse0x258db00();
   input += synapse0x258db40();
   input += synapse0x258db80();
   input += synapse0x258dbc0();
   input += synapse0x258dc00();
   input += synapse0x258dc40();
   input += synapse0x258dc80();
   input += synapse0x258dcc0();
   input += synapse0x258dd00();
   input += synapse0x258dd40();
   input += synapse0x258d7d0();
   input += synapse0x258d810();
   input += synapse0x258de90();
   input += synapse0x258ded0();
   input += synapse0x258df10();
   input += synapse0x258df50();
   input += synapse0x258df90();
   input += synapse0x258dfd0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x258d640() {
   double input = input0x258d640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2594840() {
   double input = -0.646772;
   input += synapse0x256a570();
   input += synapse0x256a5b0();
   input += synapse0x256ba80();
   input += synapse0x256bac0();
   input += synapse0x256c450();
   input += synapse0x256c490();
   input += synapse0x256d220();
   input += synapse0x256d260();
   input += synapse0x256dbf0();
   input += synapse0x256dc30();
   input += synapse0x256e5c0();
   input += synapse0x256e600();
   input += synapse0x256f0a0();
   input += synapse0x256f0e0();
   input += synapse0x256fa70();
   input += synapse0x256fab0();
   input += synapse0x256cb50();
   input += synapse0x256cb90();
   input += synapse0x2571620();
   input += synapse0x2571660();
   input += synapse0x2571ff0();
   input += synapse0x2572030();
   input += synapse0x25729c0();
   input += synapse0x2572a00();
   input += synapse0x2573390();
   input += synapse0x25733d0();
   input += synapse0x2567500();
   input += synapse0x2567540();
   input += synapse0x2575480();
   input += synapse0x25754c0();
   input += synapse0x2575e50();
   input += synapse0x2575e90();
   input += synapse0x2576820();
   input += synapse0x2576860();
   input += synapse0x25771f0();
   input += synapse0x2577230();
   input += synapse0x2577bc0();
   input += synapse0x2577c00();
   input += synapse0x2570710();
   input += synapse0x2570750();
   input += synapse0x2579fc0();
   input += synapse0x257a000();
   input += synapse0x257a950();
   input += synapse0x257a990();
   input += synapse0x257b320();
   input += synapse0x257b360();
   input += synapse0x257bcf0();
   input += synapse0x257bd30();
   input += synapse0x257c6c0();
   input += synapse0x257c700();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2594840() {
   double input = input0x2594840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2594be0() {
   double input = 0.597169;
   input += synapse0x257ee00();
   input += synapse0x257ee40();
   input += synapse0x25743c0();
   input += synapse0x2574400();
   input += synapse0x25819e0();
   input += synapse0x2581a20();
   input += synapse0x25823b0();
   input += synapse0x25823f0();
   input += synapse0x2582d80();
   input += synapse0x2582dc0();
   input += synapse0x2583750();
   input += synapse0x2583790();
   input += synapse0x2584120();
   input += synapse0x2584160();
   input += synapse0x2584af0();
   input += synapse0x2584b30();
   input += synapse0x25854c0();
   input += synapse0x2585500();
   input += synapse0x2585e90();
   input += synapse0x2585ed0();
   input += synapse0x2586a70();
   input += synapse0x2586ab0();
   input += synapse0x2587440();
   input += synapse0x2587480();
   input += synapse0x25782c0();
   input += synapse0x2578300();
   input += synapse0x2578c90();
   input += synapse0x2578cd0();
   input += synapse0x2579660();
   input += synapse0x25796a0();
   input += synapse0x258bb80();
   input += synapse0x258bbc0();
   input += synapse0x258c550();
   input += synapse0x258c590();
   input += synapse0x258cf20();
   input += synapse0x258cf60();
   input += synapse0x258d8f0();
   input += synapse0x258d930();
   input += synapse0x25697e0();
   input += synapse0x2569820();
   input += synapse0x257d090();
   input += synapse0x257d0d0();
   input += synapse0x258e010();
   input += synapse0x258e050();
   input += synapse0x258e090();
   input += synapse0x258e0d0();
   input += synapse0x2594f80();
   input += synapse0x2594fc0();
   input += synapse0x2595000();
   input += synapse0x2595040();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2594be0() {
   double input = input0x2594be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2595080() {
   double input = 0.993377;
   input += synapse0x25953c0();
   input += synapse0x2595400();
   input += synapse0x2595440();
   input += synapse0x2595480();
   input += synapse0x25954c0();
   input += synapse0x2595500();
   input += synapse0x2595540();
   input += synapse0x2595580();
   input += synapse0x25955c0();
   input += synapse0x2595600();
   input += synapse0x2595640();
   input += synapse0x2595680();
   input += synapse0x25956c0();
   input += synapse0x2595700();
   input += synapse0x2595740();
   input += synapse0x2595780();
   input += synapse0x2595210();
   input += synapse0x2595250();
   input += synapse0x25958d0();
   input += synapse0x2595910();
   input += synapse0x2595950();
   input += synapse0x2595990();
   input += synapse0x25959d0();
   input += synapse0x2595a10();
   input += synapse0x2595a50();
   input += synapse0x2595a90();
   input += synapse0x2595ad0();
   input += synapse0x2595b10();
   input += synapse0x2595b50();
   input += synapse0x2595b90();
   input += synapse0x2595bd0();
   input += synapse0x2595c10();
   input += synapse0x25957c0();
   input += synapse0x2595800();
   input += synapse0x2595840();
   input += synapse0x2595880();
   input += synapse0x2595e60();
   input += synapse0x2595ea0();
   input += synapse0x2595ee0();
   input += synapse0x2595f20();
   input += synapse0x2595f60();
   input += synapse0x2595fa0();
   input += synapse0x2595fe0();
   input += synapse0x2596020();
   input += synapse0x2596060();
   input += synapse0x25960a0();
   input += synapse0x25960e0();
   input += synapse0x2596120();
   input += synapse0x2596160();
   input += synapse0x25961a0();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2595080() {
   double input = input0x2595080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x25961e0() {
   double input = -0.993713;
   input += synapse0x2596520();
   input += synapse0x2596560();
   input += synapse0x25965a0();
   input += synapse0x25965e0();
   input += synapse0x2596620();
   input += synapse0x2596660();
   input += synapse0x25966a0();
   input += synapse0x25966e0();
   input += synapse0x2596720();
   input += synapse0x2596760();
   input += synapse0x25967a0();
   input += synapse0x25967e0();
   input += synapse0x2596820();
   input += synapse0x2596860();
   input += synapse0x25968a0();
   input += synapse0x25968e0();
   input += synapse0x2596370();
   input += synapse0x25963b0();
   input += synapse0x2596a30();
   input += synapse0x2596a70();
   input += synapse0x2596ab0();
   input += synapse0x2596af0();
   input += synapse0x2596b30();
   input += synapse0x2596b70();
   input += synapse0x2596bb0();
   input += synapse0x2596bf0();
   input += synapse0x2596c30();
   input += synapse0x2596c70();
   input += synapse0x2596cb0();
   input += synapse0x2596cf0();
   input += synapse0x2596d30();
   input += synapse0x2596d70();
   input += synapse0x2596920();
   input += synapse0x2596960();
   input += synapse0x25969a0();
   input += synapse0x25969e0();
   input += synapse0x2596fc0();
   input += synapse0x2597000();
   input += synapse0x2597040();
   input += synapse0x2597080();
   input += synapse0x25970c0();
   input += synapse0x2597100();
   input += synapse0x2597140();
   input += synapse0x2597180();
   input += synapse0x25971c0();
   input += synapse0x2597200();
   input += synapse0x2597240();
   input += synapse0x2597280();
   input += synapse0x25972c0();
   input += synapse0x2597300();
   return input;
}

double NNfunction_ss_uRcR::neuron0x25961e0() {
   double input = input0x25961e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x2597340() {
   double input = 0.147629;
   input += synapse0x2597680();
   input += synapse0x25976c0();
   input += synapse0x2597700();
   input += synapse0x2597740();
   input += synapse0x2597780();
   input += synapse0x25977c0();
   input += synapse0x2597800();
   input += synapse0x2597840();
   input += synapse0x2597880();
   input += synapse0x25978c0();
   input += synapse0x2597900();
   input += synapse0x2597940();
   input += synapse0x2597980();
   input += synapse0x25979c0();
   input += synapse0x2597a00();
   input += synapse0x2597a40();
   input += synapse0x25974d0();
   input += synapse0x2597510();
   input += synapse0x2597b90();
   input += synapse0x2597bd0();
   input += synapse0x2597c10();
   input += synapse0x2597c50();
   input += synapse0x2597c90();
   input += synapse0x2597cd0();
   input += synapse0x2597d10();
   input += synapse0x2597d50();
   input += synapse0x2597d90();
   input += synapse0x2597dd0();
   input += synapse0x2597e10();
   input += synapse0x2597e50();
   input += synapse0x2597e90();
   input += synapse0x2597ed0();
   input += synapse0x2597a80();
   input += synapse0x2597ac0();
   input += synapse0x2597b00();
   input += synapse0x2597b40();
   input += synapse0x2598120();
   input += synapse0x2598160();
   input += synapse0x25981a0();
   input += synapse0x25981e0();
   input += synapse0x2598220();
   input += synapse0x2598260();
   input += synapse0x25982a0();
   input += synapse0x25982e0();
   input += synapse0x2598320();
   input += synapse0x2598360();
   input += synapse0x25983a0();
   input += synapse0x25983e0();
   input += synapse0x2598420();
   input += synapse0x2598460();
   return input;
}

double NNfunction_ss_uRcR::neuron0x2597340() {
   double input = input0x2597340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRcR::input0x25984a0() {
   double input = 5.27975;
   input += synapse0x2569580();
   input += synapse0x25986c0();
   input += synapse0x2598700();
   input += synapse0x2598740();
   input += synapse0x2598780();
   return input;
}

double NNfunction_ss_uRcR::neuron0x25984a0() {
   double input = input0x25984a0();
   return (input * 1)+0;
}

double NNfunction_ss_uRcR::synapse0x23243d0() {
   return (neuron0x2564560()*0.206636);
}

double NNfunction_ss_uRcR::synapse0x2564420() {
   return (neuron0x25648a0()*0.0348127);
}

double NNfunction_ss_uRcR::synapse0x2564460() {
   return (neuron0x2564be0()*0.184703);
}

double NNfunction_ss_uRcR::synapse0x2569870() {
   return (neuron0x2564f20()*0.0270458);
}

double NNfunction_ss_uRcR::synapse0x25698b0() {
   return (neuron0x2565260()*0.114088);
}

double NNfunction_ss_uRcR::synapse0x25698f0() {
   return (neuron0x25655a0()*-0.0295487);
}

double NNfunction_ss_uRcR::synapse0x2569930() {
   return (neuron0x25658e0()*0.298773);
}

double NNfunction_ss_uRcR::synapse0x2569970() {
   return (neuron0x2565c20()*-0.0790832);
}

double NNfunction_ss_uRcR::synapse0x25699b0() {
   return (neuron0x2565f60()*0.428988);
}

double NNfunction_ss_uRcR::synapse0x25699f0() {
   return (neuron0x25662a0()*0.317676);
}

double NNfunction_ss_uRcR::synapse0x2569a30() {
   return (neuron0x25665e0()*-0.298854);
}

double NNfunction_ss_uRcR::synapse0x2569a70() {
   return (neuron0x2566920()*-0.0519157);
}

double NNfunction_ss_uRcR::synapse0x2569ab0() {
   return (neuron0x2566c60()*0.256395);
}

double NNfunction_ss_uRcR::synapse0x2569af0() {
   return (neuron0x2566fa0()*-0.320533);
}

double NNfunction_ss_uRcR::synapse0x2569b30() {
   return (neuron0x25672e0()*-0.40452);
}

double NNfunction_ss_uRcR::synapse0x2569b70() {
   return (neuron0x2567620()*0.248853);
}

double NNfunction_ss_uRcR::synapse0x2564390() {
   return (neuron0x2567960()*0.271659);
}

double NNfunction_ss_uRcR::synapse0x25643d0() {
   return (neuron0x2567ec0()*-0.78764);
}

double NNfunction_ss_uRcR::synapse0x2315c70() {
   return (neuron0x25680e0()*0.0404556);
}

double NNfunction_ss_uRcR::synapse0x2315cb0() {
   return (neuron0x2568420()*-0.966917);
}

double NNfunction_ss_uRcR::synapse0x2569dd0() {
   return (neuron0x2568760()*0.199048);
}

double NNfunction_ss_uRcR::synapse0x2569e10() {
   return (neuron0x2568aa0()*-0.135113);
}

double NNfunction_ss_uRcR::synapse0x2569e50() {
   return (neuron0x2568de0()*0.104064);
}

double NNfunction_ss_uRcR::synapse0x2569e90() {
   return (neuron0x2569120()*0.19979);
}

double NNfunction_ss_uRcR::synapse0x256a210() {
   return (neuron0x2564560()*0.144463);
}

double NNfunction_ss_uRcR::synapse0x256a250() {
   return (neuron0x25648a0()*-0.65688);
}

double NNfunction_ss_uRcR::synapse0x256a290() {
   return (neuron0x2564be0()*-0.0609836);
}

double NNfunction_ss_uRcR::synapse0x256a2d0() {
   return (neuron0x2564f20()*-0.144136);
}

double NNfunction_ss_uRcR::synapse0x256a310() {
   return (neuron0x2565260()*-0.133564);
}

double NNfunction_ss_uRcR::synapse0x256a350() {
   return (neuron0x25655a0()*-0.155183);
}

double NNfunction_ss_uRcR::synapse0x256a390() {
   return (neuron0x25658e0()*0.245606);
}

double NNfunction_ss_uRcR::synapse0x256a3d0() {
   return (neuron0x2565c20()*0.165521);
}

double NNfunction_ss_uRcR::synapse0x256a410() {
   return (neuron0x2565f60()*0.270399);
}

double NNfunction_ss_uRcR::synapse0x2569cc0() {
   return (neuron0x25662a0()*-0.354445);
}

double NNfunction_ss_uRcR::synapse0x2569d00() {
   return (neuron0x25665e0()*0.346985);
}

double NNfunction_ss_uRcR::synapse0x2569d40() {
   return (neuron0x2566920()*-0.0458915);
}

double NNfunction_ss_uRcR::synapse0x2569d80() {
   return (neuron0x2566c60()*0.058178);
}

double NNfunction_ss_uRcR::synapse0x256a660() {
   return (neuron0x2566fa0()*-1.06468);
}

double NNfunction_ss_uRcR::synapse0x256a6a0() {
   return (neuron0x25672e0()*-1.05253);
}

double NNfunction_ss_uRcR::synapse0x256a6e0() {
   return (neuron0x2567620()*-0.52807);
}

double NNfunction_ss_uRcR::synapse0x256a060() {
   return (neuron0x2567960()*0.0134307);
}

double NNfunction_ss_uRcR::synapse0x256a0a0() {
   return (neuron0x2567ec0()*0.0741797);
}

double NNfunction_ss_uRcR::synapse0x256a830() {
   return (neuron0x25680e0()*-0.297233);
}

double NNfunction_ss_uRcR::synapse0x256a870() {
   return (neuron0x2568420()*-0.0220478);
}

double NNfunction_ss_uRcR::synapse0x256a8b0() {
   return (neuron0x2568760()*-0.312499);
}

double NNfunction_ss_uRcR::synapse0x256a8f0() {
   return (neuron0x2568aa0()*0.24925);
}

double NNfunction_ss_uRcR::synapse0x256a930() {
   return (neuron0x2568de0()*-0.404851);
}

double NNfunction_ss_uRcR::synapse0x256a970() {
   return (neuron0x2569120()*0.175545);
}

double NNfunction_ss_uRcR::synapse0x256acf0() {
   return (neuron0x2564560()*-0.0064861);
}

double NNfunction_ss_uRcR::synapse0x256ad30() {
   return (neuron0x25648a0()*-0.0260109);
}

double NNfunction_ss_uRcR::synapse0x256ad70() {
   return (neuron0x2564be0()*0.0183237);
}

double NNfunction_ss_uRcR::synapse0x256adb0() {
   return (neuron0x2564f20()*-2.45202);
}

double NNfunction_ss_uRcR::synapse0x256adf0() {
   return (neuron0x2565260()*-0.0553318);
}

double NNfunction_ss_uRcR::synapse0x256ae30() {
   return (neuron0x25655a0()*0.00376594);
}

double NNfunction_ss_uRcR::synapse0x256ae70() {
   return (neuron0x25658e0()*-0.0130787);
}

double NNfunction_ss_uRcR::synapse0x256aeb0() {
   return (neuron0x2565c20()*-0.0184781);
}

double NNfunction_ss_uRcR::synapse0x256aef0() {
   return (neuron0x2565f60()*0.0336676);
}

double NNfunction_ss_uRcR::synapse0x256af30() {
   return (neuron0x25662a0()*-0.0190166);
}

double NNfunction_ss_uRcR::synapse0x256af70() {
   return (neuron0x25665e0()*0.0447001);
}

double NNfunction_ss_uRcR::synapse0x256afb0() {
   return (neuron0x2566920()*0.0526787);
}

double NNfunction_ss_uRcR::synapse0x256aff0() {
   return (neuron0x2566c60()*0.0260451);
}

double NNfunction_ss_uRcR::synapse0x256b030() {
   return (neuron0x2566fa0()*0.015196);
}

double NNfunction_ss_uRcR::synapse0x256b070() {
   return (neuron0x25672e0()*0.266602);
}

double NNfunction_ss_uRcR::synapse0x256b0b0() {
   return (neuron0x2567620()*0.251385);
}

double NNfunction_ss_uRcR::synapse0x256ab40() {
   return (neuron0x2567960()*-0.00141924);
}

double NNfunction_ss_uRcR::synapse0x256ab80() {
   return (neuron0x2567ec0()*0.0174869);
}

double NNfunction_ss_uRcR::synapse0x2323ac0() {
   return (neuron0x25680e0()*0.00474824);
}

double NNfunction_ss_uRcR::synapse0x2323b00() {
   return (neuron0x2568420()*0.0192086);
}

double NNfunction_ss_uRcR::synapse0x25535f0() {
   return (neuron0x2568760()*-0.00268534);
}

double NNfunction_ss_uRcR::synapse0x2553630() {
   return (neuron0x2568aa0()*0.0245857);
}

double NNfunction_ss_uRcR::synapse0x2553670() {
   return (neuron0x2568de0()*-0.00913181);
}

double NNfunction_ss_uRcR::synapse0x25644a0() {
   return (neuron0x2569120()*-0.031298);
}

double NNfunction_ss_uRcR::synapse0x256a600() {
   return (neuron0x2564560()*-0.103981);
}

double NNfunction_ss_uRcR::synapse0x25644e0() {
   return (neuron0x25648a0()*-0.221422);
}

double NNfunction_ss_uRcR::synapse0x2564520() {
   return (neuron0x2564be0()*-0.199968);
}

double NNfunction_ss_uRcR::synapse0x256b200() {
   return (neuron0x2564f20()*1.37651);
}

double NNfunction_ss_uRcR::synapse0x256b240() {
   return (neuron0x2565260()*0.0496997);
}

double NNfunction_ss_uRcR::synapse0x256b280() {
   return (neuron0x25655a0()*-0.0663695);
}

double NNfunction_ss_uRcR::synapse0x256b2c0() {
   return (neuron0x25658e0()*-0.199221);
}

double NNfunction_ss_uRcR::synapse0x256b300() {
   return (neuron0x2565c20()*-0.169153);
}

double NNfunction_ss_uRcR::synapse0x256b340() {
   return (neuron0x2565f60()*0.157824);
}

double NNfunction_ss_uRcR::synapse0x256b380() {
   return (neuron0x25662a0()*-0.00797244);
}

double NNfunction_ss_uRcR::synapse0x256b3c0() {
   return (neuron0x25665e0()*-0.27906);
}

double NNfunction_ss_uRcR::synapse0x256b400() {
   return (neuron0x2566920()*0.00388653);
}

double NNfunction_ss_uRcR::synapse0x256b440() {
   return (neuron0x2566c60()*0.0300812);
}

double NNfunction_ss_uRcR::synapse0x256b480() {
   return (neuron0x2566fa0()*0.151288);
}

double NNfunction_ss_uRcR::synapse0x256b4c0() {
   return (neuron0x25672e0()*0.530926);
}

double NNfunction_ss_uRcR::synapse0x256b500() {
   return (neuron0x2567620()*0.902442);
}

double NNfunction_ss_uRcR::synapse0x256a450() {
   return (neuron0x2567960()*0.0440689);
}

double NNfunction_ss_uRcR::synapse0x256a490() {
   return (neuron0x2567ec0()*0.304426);
}

double NNfunction_ss_uRcR::synapse0x256b650() {
   return (neuron0x25680e0()*0.0472982);
}

double NNfunction_ss_uRcR::synapse0x256b690() {
   return (neuron0x2568420()*-0.0920982);
}

double NNfunction_ss_uRcR::synapse0x256b6d0() {
   return (neuron0x2568760()*0.00494071);
}

double NNfunction_ss_uRcR::synapse0x256b710() {
   return (neuron0x2568aa0()*-0.232486);
}

double NNfunction_ss_uRcR::synapse0x256b750() {
   return (neuron0x2568de0()*-0.131303);
}

double NNfunction_ss_uRcR::synapse0x256b790() {
   return (neuron0x2569120()*-0.090009);
}

double NNfunction_ss_uRcR::synapse0x256bb10() {
   return (neuron0x2564560()*-0.0206007);
}

double NNfunction_ss_uRcR::synapse0x256bb50() {
   return (neuron0x25648a0()*0.586912);
}

double NNfunction_ss_uRcR::synapse0x256bb90() {
   return (neuron0x2564be0()*0.0775931);
}

double NNfunction_ss_uRcR::synapse0x256bbd0() {
   return (neuron0x2564f20()*-0.758525);
}

double NNfunction_ss_uRcR::synapse0x256bc10() {
   return (neuron0x2565260()*-0.161882);
}

double NNfunction_ss_uRcR::synapse0x256bc50() {
   return (neuron0x25655a0()*0.236125);
}

double NNfunction_ss_uRcR::synapse0x256bc90() {
   return (neuron0x25658e0()*0.127594);
}

double NNfunction_ss_uRcR::synapse0x256bcd0() {
   return (neuron0x2565c20()*-0.104422);
}

double NNfunction_ss_uRcR::synapse0x256bd10() {
   return (neuron0x2565f60()*0.282045);
}

double NNfunction_ss_uRcR::synapse0x256bd50() {
   return (neuron0x25662a0()*-0.0448011);
}

double NNfunction_ss_uRcR::synapse0x256bd90() {
   return (neuron0x25665e0()*0.000562537);
}

double NNfunction_ss_uRcR::synapse0x256bdd0() {
   return (neuron0x2566920()*-0.359818);
}

double NNfunction_ss_uRcR::synapse0x256be10() {
   return (neuron0x2566c60()*-0.139465);
}

double NNfunction_ss_uRcR::synapse0x256be50() {
   return (neuron0x2566fa0()*0.201215);
}

double NNfunction_ss_uRcR::synapse0x256be90() {
   return (neuron0x25672e0()*-0.00285677);
}

double NNfunction_ss_uRcR::synapse0x256bed0() {
   return (neuron0x2567620()*-0.188199);
}

double NNfunction_ss_uRcR::synapse0x256b960() {
   return (neuron0x2567960()*0.24839);
}

double NNfunction_ss_uRcR::synapse0x256b9a0() {
   return (neuron0x2567ec0()*0.597457);
}

double NNfunction_ss_uRcR::synapse0x256c020() {
   return (neuron0x25680e0()*0.0231827);
}

double NNfunction_ss_uRcR::synapse0x256c060() {
   return (neuron0x2568420()*-0.498037);
}

double NNfunction_ss_uRcR::synapse0x256c0a0() {
   return (neuron0x2568760()*-0.0234988);
}

double NNfunction_ss_uRcR::synapse0x256c0e0() {
   return (neuron0x2568aa0()*-0.0597547);
}

double NNfunction_ss_uRcR::synapse0x256c120() {
   return (neuron0x2568de0()*-0.0123435);
}

double NNfunction_ss_uRcR::synapse0x256c160() {
   return (neuron0x2569120()*-0.0526331);
}

double NNfunction_ss_uRcR::synapse0x256c4e0() {
   return (neuron0x2564560()*0.313773);
}

double NNfunction_ss_uRcR::synapse0x256c520() {
   return (neuron0x25648a0()*0.46539);
}

double NNfunction_ss_uRcR::synapse0x256c560() {
   return (neuron0x2564be0()*0.509466);
}

double NNfunction_ss_uRcR::synapse0x256c5a0() {
   return (neuron0x2564f20()*0.101063);
}

double NNfunction_ss_uRcR::synapse0x256c5e0() {
   return (neuron0x2565260()*-0.90799);
}

double NNfunction_ss_uRcR::synapse0x256c620() {
   return (neuron0x25655a0()*-0.740467);
}

double NNfunction_ss_uRcR::synapse0x256c660() {
   return (neuron0x25658e0()*0.856865);
}

double NNfunction_ss_uRcR::synapse0x256c6a0() {
   return (neuron0x2565c20()*-0.418716);
}

double NNfunction_ss_uRcR::synapse0x256c6e0() {
   return (neuron0x2565f60()*0.663917);
}

double NNfunction_ss_uRcR::synapse0x2323e30() {
   return (neuron0x25662a0()*-0.358938);
}

double NNfunction_ss_uRcR::synapse0x2323e70() {
   return (neuron0x25665e0()*0.165276);
}

double NNfunction_ss_uRcR::synapse0x2323eb0() {
   return (neuron0x2566920()*-0.270276);
}

double NNfunction_ss_uRcR::synapse0x2323ef0() {
   return (neuron0x2566c60()*0.442276);
}

double NNfunction_ss_uRcR::synapse0x2323f30() {
   return (neuron0x2566fa0()*-0.477829);
}

double NNfunction_ss_uRcR::synapse0x2323f70() {
   return (neuron0x25672e0()*0.333983);
}

double NNfunction_ss_uRcR::synapse0x2323fb0() {
   return (neuron0x2567620()*0.117486);
}

double NNfunction_ss_uRcR::synapse0x256c330() {
   return (neuron0x2567960()*0.130573);
}

double NNfunction_ss_uRcR::synapse0x256c370() {
   return (neuron0x2567ec0()*0.342834);
}

double NNfunction_ss_uRcR::synapse0x2324100() {
   return (neuron0x25680e0()*-0.798091);
}

double NNfunction_ss_uRcR::synapse0x2324140() {
   return (neuron0x2568420()*-0.668808);
}

double NNfunction_ss_uRcR::synapse0x2324180() {
   return (neuron0x2568760()*-0.0902318);
}

double NNfunction_ss_uRcR::synapse0x23241c0() {
   return (neuron0x2568aa0()*0.728325);
}

double NNfunction_ss_uRcR::synapse0x2324200() {
   return (neuron0x2568de0()*0.0126772);
}

double NNfunction_ss_uRcR::synapse0x256cf30() {
   return (neuron0x2569120()*1.11566);
}

double NNfunction_ss_uRcR::synapse0x256d2b0() {
   return (neuron0x2564560()*-0.0413246);
}

double NNfunction_ss_uRcR::synapse0x256d2f0() {
   return (neuron0x25648a0()*-0.03553);
}

double NNfunction_ss_uRcR::synapse0x256d330() {
   return (neuron0x2564be0()*0.0682511);
}

double NNfunction_ss_uRcR::synapse0x256d370() {
   return (neuron0x2564f20()*0.058427);
}

double NNfunction_ss_uRcR::synapse0x256d3b0() {
   return (neuron0x2565260()*-0.866302);
}

double NNfunction_ss_uRcR::synapse0x256d3f0() {
   return (neuron0x25655a0()*-0.0272254);
}

double NNfunction_ss_uRcR::synapse0x256d430() {
   return (neuron0x25658e0()*-0.051829);
}

double NNfunction_ss_uRcR::synapse0x256d470() {
   return (neuron0x2565c20()*-0.348829);
}

double NNfunction_ss_uRcR::synapse0x256d4b0() {
   return (neuron0x2565f60()*-0.133049);
}

double NNfunction_ss_uRcR::synapse0x256d4f0() {
   return (neuron0x25662a0()*-0.103866);
}

double NNfunction_ss_uRcR::synapse0x256d530() {
   return (neuron0x25665e0()*-0.0674191);
}

double NNfunction_ss_uRcR::synapse0x256d570() {
   return (neuron0x2566920()*-0.0343733);
}

double NNfunction_ss_uRcR::synapse0x256d5b0() {
   return (neuron0x2566c60()*-0.074836);
}

double NNfunction_ss_uRcR::synapse0x256d5f0() {
   return (neuron0x2566fa0()*-0.0253179);
}

double NNfunction_ss_uRcR::synapse0x256d630() {
   return (neuron0x25672e0()*0.232046);
}

double NNfunction_ss_uRcR::synapse0x256d670() {
   return (neuron0x2567620()*0.0935476);
}

double NNfunction_ss_uRcR::synapse0x256d100() {
   return (neuron0x2567960()*-0.241796);
}

double NNfunction_ss_uRcR::synapse0x256d140() {
   return (neuron0x2567ec0()*0.0189238);
}

double NNfunction_ss_uRcR::synapse0x256d7c0() {
   return (neuron0x25680e0()*-0.0303266);
}

double NNfunction_ss_uRcR::synapse0x256d800() {
   return (neuron0x2568420()*-0.0660344);
}

double NNfunction_ss_uRcR::synapse0x256d840() {
   return (neuron0x2568760()*0.0357646);
}

double NNfunction_ss_uRcR::synapse0x256d880() {
   return (neuron0x2568aa0()*-0.0386661);
}

double NNfunction_ss_uRcR::synapse0x256d8c0() {
   return (neuron0x2568de0()*-0.0731931);
}

double NNfunction_ss_uRcR::synapse0x256d900() {
   return (neuron0x2569120()*-0.0464073);
}

double NNfunction_ss_uRcR::synapse0x256dc80() {
   return (neuron0x2564560()*-0.0109503);
}

double NNfunction_ss_uRcR::synapse0x256dcc0() {
   return (neuron0x25648a0()*-0.161481);
}

double NNfunction_ss_uRcR::synapse0x256dd00() {
   return (neuron0x2564be0()*-0.202751);
}

double NNfunction_ss_uRcR::synapse0x256dd40() {
   return (neuron0x2564f20()*-0.72225);
}

double NNfunction_ss_uRcR::synapse0x256dd80() {
   return (neuron0x2565260()*0.229576);
}

double NNfunction_ss_uRcR::synapse0x256ddc0() {
   return (neuron0x25655a0()*-0.115318);
}

double NNfunction_ss_uRcR::synapse0x256de00() {
   return (neuron0x25658e0()*0.118975);
}

double NNfunction_ss_uRcR::synapse0x256de40() {
   return (neuron0x2565c20()*0.261399);
}

double NNfunction_ss_uRcR::synapse0x256de80() {
   return (neuron0x2565f60()*0.0453361);
}

double NNfunction_ss_uRcR::synapse0x256dec0() {
   return (neuron0x25662a0()*-0.195267);
}

double NNfunction_ss_uRcR::synapse0x256df00() {
   return (neuron0x25665e0()*-0.24193);
}

double NNfunction_ss_uRcR::synapse0x256df40() {
   return (neuron0x2566920()*0.0268428);
}

double NNfunction_ss_uRcR::synapse0x256df80() {
   return (neuron0x2566c60()*-0.291341);
}

double NNfunction_ss_uRcR::synapse0x256dfc0() {
   return (neuron0x2566fa0()*-0.160657);
}

double NNfunction_ss_uRcR::synapse0x256e000() {
   return (neuron0x25672e0()*0.560656);
}

double NNfunction_ss_uRcR::synapse0x256e040() {
   return (neuron0x2567620()*0.0421304);
}

double NNfunction_ss_uRcR::synapse0x256dad0() {
   return (neuron0x2567960()*-0.640998);
}

double NNfunction_ss_uRcR::synapse0x256db10() {
   return (neuron0x2567ec0()*0.0324647);
}

double NNfunction_ss_uRcR::synapse0x256e190() {
   return (neuron0x25680e0()*-0.108606);
}

double NNfunction_ss_uRcR::synapse0x256e1d0() {
   return (neuron0x2568420()*-0.101953);
}

double NNfunction_ss_uRcR::synapse0x256e210() {
   return (neuron0x2568760()*-0.0325636);
}

double NNfunction_ss_uRcR::synapse0x256e250() {
   return (neuron0x2568aa0()*-0.0211246);
}

double NNfunction_ss_uRcR::synapse0x256e290() {
   return (neuron0x2568de0()*-0.0663005);
}

double NNfunction_ss_uRcR::synapse0x256e2d0() {
   return (neuron0x2569120()*-0.0965535);
}

double NNfunction_ss_uRcR::synapse0x2567db0() {
   return (neuron0x2564560()*-0.0307095);
}

double NNfunction_ss_uRcR::synapse0x2567df0() {
   return (neuron0x25648a0()*0.00500738);
}

double NNfunction_ss_uRcR::synapse0x2567e30() {
   return (neuron0x2564be0()*0.00772231);
}

double NNfunction_ss_uRcR::synapse0x2567e70() {
   return (neuron0x2564f20()*-0.0134299);
}

double NNfunction_ss_uRcR::synapse0x256e860() {
   return (neuron0x2565260()*-0.0514643);
}

double NNfunction_ss_uRcR::synapse0x256e8a0() {
   return (neuron0x25655a0()*-0.0162206);
}

double NNfunction_ss_uRcR::synapse0x256e8e0() {
   return (neuron0x25658e0()*-0.0122318);
}

double NNfunction_ss_uRcR::synapse0x256e920() {
   return (neuron0x2565c20()*-0.0091306);
}

double NNfunction_ss_uRcR::synapse0x256e960() {
   return (neuron0x2565f60()*0.0468736);
}

double NNfunction_ss_uRcR::synapse0x256e9a0() {
   return (neuron0x25662a0()*0.00542034);
}

double NNfunction_ss_uRcR::synapse0x256e9e0() {
   return (neuron0x25665e0()*-0.0252295);
}

double NNfunction_ss_uRcR::synapse0x256ea20() {
   return (neuron0x2566920()*0.0136422);
}

double NNfunction_ss_uRcR::synapse0x256ea60() {
   return (neuron0x2566c60()*0.0180007);
}

double NNfunction_ss_uRcR::synapse0x256eaa0() {
   return (neuron0x2566fa0()*0.0153239);
}

double NNfunction_ss_uRcR::synapse0x256eae0() {
   return (neuron0x25672e0()*-0.271396);
}

double NNfunction_ss_uRcR::synapse0x256eb20() {
   return (neuron0x2567620()*1.8976);
}

double NNfunction_ss_uRcR::synapse0x256e4a0() {
   return (neuron0x2567960()*0.0259298);
}

double NNfunction_ss_uRcR::synapse0x256e4e0() {
   return (neuron0x2567ec0()*-0.00434237);
}

double NNfunction_ss_uRcR::synapse0x256ec70() {
   return (neuron0x25680e0()*-0.00896817);
}

double NNfunction_ss_uRcR::synapse0x256ecb0() {
   return (neuron0x2568420()*0.037396);
}

double NNfunction_ss_uRcR::synapse0x256ecf0() {
   return (neuron0x2568760()*-0.00200796);
}

double NNfunction_ss_uRcR::synapse0x256ed30() {
   return (neuron0x2568aa0()*-0.0247619);
}

double NNfunction_ss_uRcR::synapse0x256ed70() {
   return (neuron0x2568de0()*0.00321405);
}

double NNfunction_ss_uRcR::synapse0x256edb0() {
   return (neuron0x2569120()*-0.00233709);
}

double NNfunction_ss_uRcR::synapse0x256f130() {
   return (neuron0x2564560()*-0.0780019);
}

double NNfunction_ss_uRcR::synapse0x256f170() {
   return (neuron0x25648a0()*0.602025);
}

double NNfunction_ss_uRcR::synapse0x256f1b0() {
   return (neuron0x2564be0()*-0.0799827);
}

double NNfunction_ss_uRcR::synapse0x256f1f0() {
   return (neuron0x2564f20()*0.281981);
}

double NNfunction_ss_uRcR::synapse0x256f230() {
   return (neuron0x2565260()*0.761424);
}

double NNfunction_ss_uRcR::synapse0x256f270() {
   return (neuron0x25655a0()*0.162837);
}

double NNfunction_ss_uRcR::synapse0x256f2b0() {
   return (neuron0x25658e0()*-0.113289);
}

double NNfunction_ss_uRcR::synapse0x256f2f0() {
   return (neuron0x2565c20()*0.303023);
}

double NNfunction_ss_uRcR::synapse0x256f330() {
   return (neuron0x2565f60()*1.12317);
}

double NNfunction_ss_uRcR::synapse0x256f370() {
   return (neuron0x25662a0()*0.00465269);
}

double NNfunction_ss_uRcR::synapse0x256f3b0() {
   return (neuron0x25665e0()*0.160211);
}

double NNfunction_ss_uRcR::synapse0x256f3f0() {
   return (neuron0x2566920()*-0.109043);
}

double NNfunction_ss_uRcR::synapse0x256f430() {
   return (neuron0x2566c60()*0.423157);
}

double NNfunction_ss_uRcR::synapse0x256f470() {
   return (neuron0x2566fa0()*0.144267);
}

double NNfunction_ss_uRcR::synapse0x256f4b0() {
   return (neuron0x25672e0()*-0.529936);
}

double NNfunction_ss_uRcR::synapse0x256f4f0() {
   return (neuron0x2567620()*-0.20474);
}

double NNfunction_ss_uRcR::synapse0x256ef80() {
   return (neuron0x2567960()*0.200856);
}

double NNfunction_ss_uRcR::synapse0x256efc0() {
   return (neuron0x2567ec0()*-0.146573);
}

double NNfunction_ss_uRcR::synapse0x256f640() {
   return (neuron0x25680e0()*0.0337871);
}

double NNfunction_ss_uRcR::synapse0x256f680() {
   return (neuron0x2568420()*0.354673);
}

double NNfunction_ss_uRcR::synapse0x256f6c0() {
   return (neuron0x2568760()*0.0363145);
}

double NNfunction_ss_uRcR::synapse0x256f700() {
   return (neuron0x2568aa0()*0.16417);
}

double NNfunction_ss_uRcR::synapse0x256f740() {
   return (neuron0x2568de0()*0.199444);
}

double NNfunction_ss_uRcR::synapse0x256f780() {
   return (neuron0x2569120()*0.109564);
}

double NNfunction_ss_uRcR::synapse0x256fb00() {
   return (neuron0x2564560()*-0.0357269);
}

double NNfunction_ss_uRcR::synapse0x256fb40() {
   return (neuron0x25648a0()*0.117847);
}

double NNfunction_ss_uRcR::synapse0x256fb80() {
   return (neuron0x2564be0()*0.0775019);
}

double NNfunction_ss_uRcR::synapse0x256fbc0() {
   return (neuron0x2564f20()*-0.0382379);
}

double NNfunction_ss_uRcR::synapse0x256fc00() {
   return (neuron0x2565260()*0.044509);
}

double NNfunction_ss_uRcR::synapse0x256fc40() {
   return (neuron0x25655a0()*-0.102113);
}

double NNfunction_ss_uRcR::synapse0x256fc80() {
   return (neuron0x25658e0()*-0.186237);
}

double NNfunction_ss_uRcR::synapse0x256fcc0() {
   return (neuron0x2565c20()*-0.187298);
}

double NNfunction_ss_uRcR::synapse0x256fd00() {
   return (neuron0x2565f60()*0.0578336);
}

double NNfunction_ss_uRcR::synapse0x256fd40() {
   return (neuron0x25662a0()*-0.0103628);
}

double NNfunction_ss_uRcR::synapse0x256fd80() {
   return (neuron0x25665e0()*-0.189109);
}

double NNfunction_ss_uRcR::synapse0x256fdc0() {
   return (neuron0x2566920()*-0.679429);
}

double NNfunction_ss_uRcR::synapse0x256fe00() {
   return (neuron0x2566c60()*0.00104665);
}

double NNfunction_ss_uRcR::synapse0x256fe40() {
   return (neuron0x2566fa0()*0.178437);
}

double NNfunction_ss_uRcR::synapse0x256fe80() {
   return (neuron0x25672e0()*-0.153621);
}

double NNfunction_ss_uRcR::synapse0x256fec0() {
   return (neuron0x2567620()*0.531223);
}

double NNfunction_ss_uRcR::synapse0x256f950() {
   return (neuron0x2567960()*0.130885);
}

double NNfunction_ss_uRcR::synapse0x256f990() {
   return (neuron0x2567ec0()*-0.423866);
}

double NNfunction_ss_uRcR::synapse0x256c720() {
   return (neuron0x25680e0()*-0.409201);
}

double NNfunction_ss_uRcR::synapse0x256c760() {
   return (neuron0x2568420()*0.233757);
}

double NNfunction_ss_uRcR::synapse0x256c7a0() {
   return (neuron0x2568760()*0.0851664);
}

double NNfunction_ss_uRcR::synapse0x256c7e0() {
   return (neuron0x2568aa0()*-0.030405);
}

double NNfunction_ss_uRcR::synapse0x256c820() {
   return (neuron0x2568de0()*-0.0472449);
}

double NNfunction_ss_uRcR::synapse0x256c860() {
   return (neuron0x2569120()*-0.00636509);
}

double NNfunction_ss_uRcR::synapse0x256cbe0() {
   return (neuron0x2564560()*-0.331079);
}

double NNfunction_ss_uRcR::synapse0x256cc20() {
   return (neuron0x25648a0()*0.193835);
}

double NNfunction_ss_uRcR::synapse0x256cc60() {
   return (neuron0x2564be0()*-0.262618);
}

double NNfunction_ss_uRcR::synapse0x256cca0() {
   return (neuron0x2564f20()*-0.0241911);
}

double NNfunction_ss_uRcR::synapse0x256cce0() {
   return (neuron0x2565260()*0.152287);
}

double NNfunction_ss_uRcR::synapse0x256cd20() {
   return (neuron0x25655a0()*0.453723);
}

double NNfunction_ss_uRcR::synapse0x256cd60() {
   return (neuron0x25658e0()*-0.0117094);
}

double NNfunction_ss_uRcR::synapse0x256cda0() {
   return (neuron0x2565c20()*0.0932487);
}

double NNfunction_ss_uRcR::synapse0x256cde0() {
   return (neuron0x2565f60()*-0.360364);
}

double NNfunction_ss_uRcR::synapse0x256ce20() {
   return (neuron0x25662a0()*-0.022241);
}

double NNfunction_ss_uRcR::synapse0x256ce60() {
   return (neuron0x25665e0()*-0.0298209);
}

double NNfunction_ss_uRcR::synapse0x256cea0() {
   return (neuron0x2566920()*-0.295879);
}

double NNfunction_ss_uRcR::synapse0x256cee0() {
   return (neuron0x2566c60()*0.451725);
}

double NNfunction_ss_uRcR::synapse0x2571020() {
   return (neuron0x2566fa0()*-0.280638);
}

double NNfunction_ss_uRcR::synapse0x2571060() {
   return (neuron0x25672e0()*0.256186);
}

double NNfunction_ss_uRcR::synapse0x25710a0() {
   return (neuron0x2567620()*-0.197337);
}

double NNfunction_ss_uRcR::synapse0x256ca30() {
   return (neuron0x2567960()*0.221529);
}

double NNfunction_ss_uRcR::synapse0x256ca70() {
   return (neuron0x2567ec0()*-0.321221);
}

double NNfunction_ss_uRcR::synapse0x25711f0() {
   return (neuron0x25680e0()*1.01927);
}

double NNfunction_ss_uRcR::synapse0x2571230() {
   return (neuron0x2568420()*0.433289);
}

double NNfunction_ss_uRcR::synapse0x2571270() {
   return (neuron0x2568760()*0.105196);
}

double NNfunction_ss_uRcR::synapse0x25712b0() {
   return (neuron0x2568aa0()*-0.14815);
}

double NNfunction_ss_uRcR::synapse0x25712f0() {
   return (neuron0x2568de0()*-0.393474);
}

double NNfunction_ss_uRcR::synapse0x2571330() {
   return (neuron0x2569120()*-0.262445);
}

double NNfunction_ss_uRcR::synapse0x25716b0() {
   return (neuron0x2564560()*-0.0164317);
}

double NNfunction_ss_uRcR::synapse0x25716f0() {
   return (neuron0x25648a0()*-0.0983768);
}

double NNfunction_ss_uRcR::synapse0x2571730() {
   return (neuron0x2564be0()*-0.0573141);
}

double NNfunction_ss_uRcR::synapse0x2571770() {
   return (neuron0x2564f20()*0.303931);
}

double NNfunction_ss_uRcR::synapse0x25717b0() {
   return (neuron0x2565260()*-0.553379);
}

double NNfunction_ss_uRcR::synapse0x25717f0() {
   return (neuron0x25655a0()*-0.173552);
}

double NNfunction_ss_uRcR::synapse0x2571830() {
   return (neuron0x25658e0()*-0.318261);
}

double NNfunction_ss_uRcR::synapse0x2571870() {
   return (neuron0x2565c20()*-0.0370488);
}

double NNfunction_ss_uRcR::synapse0x25718b0() {
   return (neuron0x2565f60()*0.193605);
}

double NNfunction_ss_uRcR::synapse0x25718f0() {
   return (neuron0x25662a0()*-0.00684247);
}

double NNfunction_ss_uRcR::synapse0x2571930() {
   return (neuron0x25665e0()*0.138753);
}

double NNfunction_ss_uRcR::synapse0x2571970() {
   return (neuron0x2566920()*-0.13982);
}

double NNfunction_ss_uRcR::synapse0x25719b0() {
   return (neuron0x2566c60()*-0.23406);
}

double NNfunction_ss_uRcR::synapse0x25719f0() {
   return (neuron0x2566fa0()*-0.506301);
}

double NNfunction_ss_uRcR::synapse0x2571a30() {
   return (neuron0x25672e0()*-0.402774);
}

double NNfunction_ss_uRcR::synapse0x2571a70() {
   return (neuron0x2567620()*-0.535836);
}

double NNfunction_ss_uRcR::synapse0x2571500() {
   return (neuron0x2567960()*0.398148);
}

double NNfunction_ss_uRcR::synapse0x2571540() {
   return (neuron0x2567ec0()*0.207645);
}

double NNfunction_ss_uRcR::synapse0x2571bc0() {
   return (neuron0x25680e0()*0.116002);
}

double NNfunction_ss_uRcR::synapse0x2571c00() {
   return (neuron0x2568420()*0.281409);
}

double NNfunction_ss_uRcR::synapse0x2571c40() {
   return (neuron0x2568760()*0.131332);
}

double NNfunction_ss_uRcR::synapse0x2571c80() {
   return (neuron0x2568aa0()*0.217216);
}

double NNfunction_ss_uRcR::synapse0x2571cc0() {
   return (neuron0x2568de0()*0.247652);
}

double NNfunction_ss_uRcR::synapse0x2571d00() {
   return (neuron0x2569120()*0.060318);
}

double NNfunction_ss_uRcR::synapse0x2572080() {
   return (neuron0x2564560()*0.00319898);
}

double NNfunction_ss_uRcR::synapse0x25720c0() {
   return (neuron0x25648a0()*-0.148599);
}

double NNfunction_ss_uRcR::synapse0x2572100() {
   return (neuron0x2564be0()*0.0644748);
}

double NNfunction_ss_uRcR::synapse0x2572140() {
   return (neuron0x2564f20()*-0.00891096);
}

double NNfunction_ss_uRcR::synapse0x2572180() {
   return (neuron0x2565260()*-0.131012);
}

double NNfunction_ss_uRcR::synapse0x25721c0() {
   return (neuron0x25655a0()*0.0146631);
}

double NNfunction_ss_uRcR::synapse0x2572200() {
   return (neuron0x25658e0()*-0.137575);
}

double NNfunction_ss_uRcR::synapse0x2572240() {
   return (neuron0x2565c20()*0.0768781);
}

double NNfunction_ss_uRcR::synapse0x2572280() {
   return (neuron0x2565f60()*-0.20821);
}

double NNfunction_ss_uRcR::synapse0x25722c0() {
   return (neuron0x25662a0()*-0.188769);
}

double NNfunction_ss_uRcR::synapse0x2572300() {
   return (neuron0x25665e0()*-0.160215);
}

double NNfunction_ss_uRcR::synapse0x2572340() {
   return (neuron0x2566920()*0.137996);
}

double NNfunction_ss_uRcR::synapse0x2572380() {
   return (neuron0x2566c60()*1.16073);
}

double NNfunction_ss_uRcR::synapse0x25723c0() {
   return (neuron0x2566fa0()*-0.371689);
}

double NNfunction_ss_uRcR::synapse0x2572400() {
   return (neuron0x25672e0()*-0.212117);
}

double NNfunction_ss_uRcR::synapse0x2572440() {
   return (neuron0x2567620()*0.16521);
}

double NNfunction_ss_uRcR::synapse0x2571ed0() {
   return (neuron0x2567960()*-0.426628);
}

double NNfunction_ss_uRcR::synapse0x2571f10() {
   return (neuron0x2567ec0()*0.404683);
}

double NNfunction_ss_uRcR::synapse0x2572590() {
   return (neuron0x25680e0()*-0.125151);
}

double NNfunction_ss_uRcR::synapse0x25725d0() {
   return (neuron0x2568420()*-0.209462);
}

double NNfunction_ss_uRcR::synapse0x2572610() {
   return (neuron0x2568760()*-0.0253544);
}

double NNfunction_ss_uRcR::synapse0x2572650() {
   return (neuron0x2568aa0()*-0.0532482);
}

double NNfunction_ss_uRcR::synapse0x2572690() {
   return (neuron0x2568de0()*-0.0292107);
}

double NNfunction_ss_uRcR::synapse0x25726d0() {
   return (neuron0x2569120()*-0.103493);
}

double NNfunction_ss_uRcR::synapse0x2572a50() {
   return (neuron0x2564560()*-0.0881494);
}

double NNfunction_ss_uRcR::synapse0x2572a90() {
   return (neuron0x25648a0()*0.222149);
}

double NNfunction_ss_uRcR::synapse0x2572ad0() {
   return (neuron0x2564be0()*-0.433043);
}

double NNfunction_ss_uRcR::synapse0x2572b10() {
   return (neuron0x2564f20()*-0.229094);
}

double NNfunction_ss_uRcR::synapse0x2572b50() {
   return (neuron0x2565260()*-0.379614);
}

double NNfunction_ss_uRcR::synapse0x2572b90() {
   return (neuron0x25655a0()*-0.347961);
}

double NNfunction_ss_uRcR::synapse0x2572bd0() {
   return (neuron0x25658e0()*-0.119227);
}

double NNfunction_ss_uRcR::synapse0x2572c10() {
   return (neuron0x2565c20()*0.356304);
}

double NNfunction_ss_uRcR::synapse0x2572c50() {
   return (neuron0x2565f60()*-0.0634376);
}

double NNfunction_ss_uRcR::synapse0x2572c90() {
   return (neuron0x25662a0()*-0.162118);
}

double NNfunction_ss_uRcR::synapse0x2572cd0() {
   return (neuron0x25665e0()*0.245908);
}

double NNfunction_ss_uRcR::synapse0x2572d10() {
   return (neuron0x2566920()*1.16136);
}

double NNfunction_ss_uRcR::synapse0x2572d50() {
   return (neuron0x2566c60()*-0.25862);
}

double NNfunction_ss_uRcR::synapse0x2572d90() {
   return (neuron0x2566fa0()*-0.487699);
}

double NNfunction_ss_uRcR::synapse0x2572dd0() {
   return (neuron0x25672e0()*0.272794);
}

double NNfunction_ss_uRcR::synapse0x2572e10() {
   return (neuron0x2567620()*-0.36532);
}

double NNfunction_ss_uRcR::synapse0x25728a0() {
   return (neuron0x2567960()*0.567723);
}

double NNfunction_ss_uRcR::synapse0x25728e0() {
   return (neuron0x2567ec0()*-0.00617032);
}

double NNfunction_ss_uRcR::synapse0x2572f60() {
   return (neuron0x25680e0()*-0.104329);
}

double NNfunction_ss_uRcR::synapse0x2572fa0() {
   return (neuron0x2568420()*0.104385);
}

double NNfunction_ss_uRcR::synapse0x2572fe0() {
   return (neuron0x2568760()*0.0605043);
}

double NNfunction_ss_uRcR::synapse0x2573020() {
   return (neuron0x2568aa0()*0.528122);
}

double NNfunction_ss_uRcR::synapse0x2573060() {
   return (neuron0x2568de0()*-0.301165);
}

double NNfunction_ss_uRcR::synapse0x25730a0() {
   return (neuron0x2569120()*-0.272851);
}

double NNfunction_ss_uRcR::synapse0x2573420() {
   return (neuron0x2564560()*0.482533);
}

double NNfunction_ss_uRcR::synapse0x2564780() {
   return (neuron0x25648a0()*-0.282988);
}

double NNfunction_ss_uRcR::synapse0x25647c0() {
   return (neuron0x2564be0()*0.0455962);
}

double NNfunction_ss_uRcR::synapse0x2564ac0() {
   return (neuron0x2564f20()*-0.0146059);
}

double NNfunction_ss_uRcR::synapse0x2564b00() {
   return (neuron0x2565260()*0.107349);
}

double NNfunction_ss_uRcR::synapse0x2564e00() {
   return (neuron0x25655a0()*0.107674);
}

double NNfunction_ss_uRcR::synapse0x2564e40() {
   return (neuron0x25658e0()*0.378979);
}

double NNfunction_ss_uRcR::synapse0x2565140() {
   return (neuron0x2565c20()*-0.35573);
}

double NNfunction_ss_uRcR::synapse0x2565180() {
   return (neuron0x2565f60()*0.0659347);
}

double NNfunction_ss_uRcR::synapse0x2565480() {
   return (neuron0x25662a0()*0.352328);
}

double NNfunction_ss_uRcR::synapse0x25654c0() {
   return (neuron0x25665e0()*0.142834);
}

double NNfunction_ss_uRcR::synapse0x25657c0() {
   return (neuron0x2566920()*0.447414);
}

double NNfunction_ss_uRcR::synapse0x2565800() {
   return (neuron0x2566c60()*-0.0219463);
}

double NNfunction_ss_uRcR::synapse0x2565b00() {
   return (neuron0x2566fa0()*0.366458);
}

double NNfunction_ss_uRcR::synapse0x2565b40() {
   return (neuron0x25672e0()*1.01115);
}

double NNfunction_ss_uRcR::synapse0x2565e40() {
   return (neuron0x2567620()*0.816871);
}

double NNfunction_ss_uRcR::synapse0x2565e80() {
   return (neuron0x2567960()*-0.411207);
}

double NNfunction_ss_uRcR::synapse0x2566180() {
   return (neuron0x2567ec0()*0.948267);
}

double NNfunction_ss_uRcR::synapse0x25661c0() {
   return (neuron0x25680e0()*0.712524);
}

double NNfunction_ss_uRcR::synapse0x25664c0() {
   return (neuron0x2568420()*0.115886);
}

double NNfunction_ss_uRcR::synapse0x2566500() {
   return (neuron0x2568760()*-0.289805);
}

double NNfunction_ss_uRcR::synapse0x2566800() {
   return (neuron0x2568aa0()*0.235391);
}

double NNfunction_ss_uRcR::synapse0x2566840() {
   return (neuron0x2568de0()*-0.264415);
}

double NNfunction_ss_uRcR::synapse0x2566b40() {
   return (neuron0x2569120()*0.245116);
}

double NNfunction_ss_uRcR::synapse0x2566b80() {
   return (neuron0x2564560()*0.252973);
}

double NNfunction_ss_uRcR::synapse0x2567840() {
   return (neuron0x25648a0()*0.600193);
}

double NNfunction_ss_uRcR::synapse0x2567880() {
   return (neuron0x2564be0()*0.0591124);
}

double NNfunction_ss_uRcR::synapse0x2573270() {
   return (neuron0x2564f20()*-1.54674);
}

double NNfunction_ss_uRcR::synapse0x25732b0() {
   return (neuron0x2565260()*0.456688);
}

double NNfunction_ss_uRcR::synapse0x2567b80() {
   return (neuron0x25655a0()*-0.252447);
}

double NNfunction_ss_uRcR::synapse0x2567bc0() {
   return (neuron0x25658e0()*-0.289045);
}

double NNfunction_ss_uRcR::synapse0x2315b50() {
   return (neuron0x2565c20()*-0.196117);
}

double NNfunction_ss_uRcR::synapse0x2315b90() {
   return (neuron0x2565f60()*0.0479021);
}

double NNfunction_ss_uRcR::synapse0x2568300() {
   return (neuron0x25662a0()*-0.16741);
}

double NNfunction_ss_uRcR::synapse0x2568340() {
   return (neuron0x25665e0()*-0.484084);
}

double NNfunction_ss_uRcR::synapse0x2568640() {
   return (neuron0x2566920()*-0.0925806);
}

double NNfunction_ss_uRcR::synapse0x2568680() {
   return (neuron0x2566c60()*0.254632);
}

double NNfunction_ss_uRcR::synapse0x2568980() {
   return (neuron0x2566fa0()*-0.263923);
}

double NNfunction_ss_uRcR::synapse0x25689c0() {
   return (neuron0x25672e0()*-0.657948);
}

double NNfunction_ss_uRcR::synapse0x2568cc0() {
   return (neuron0x2567620()*-0.455633);
}

double NNfunction_ss_uRcR::synapse0x2568d00() {
   return (neuron0x2567960()*-0.146433);
}

double NNfunction_ss_uRcR::synapse0x2569000() {
   return (neuron0x2567ec0()*-0.474963);
}

double NNfunction_ss_uRcR::synapse0x2569040() {
   return (neuron0x25680e0()*-0.075934);
}

double NNfunction_ss_uRcR::synapse0x2569340() {
   return (neuron0x2568420()*-0.13808);
}

double NNfunction_ss_uRcR::synapse0x2569380() {
   return (neuron0x2568760()*-0.0680136);
}

double NNfunction_ss_uRcR::synapse0x2566e80() {
   return (neuron0x2568aa0()*-0.287257);
}

double NNfunction_ss_uRcR::synapse0x2566ec0() {
   return (neuron0x2568de0()*-0.164725);
}

double NNfunction_ss_uRcR::synapse0x2575190() {
   return (neuron0x2569120()*0.164935);
}

double NNfunction_ss_uRcR::synapse0x2575510() {
   return (neuron0x2564560()*0.117639);
}

double NNfunction_ss_uRcR::synapse0x2575550() {
   return (neuron0x25648a0()*0.253647);
}

double NNfunction_ss_uRcR::synapse0x2575590() {
   return (neuron0x2564be0()*0.432378);
}

double NNfunction_ss_uRcR::synapse0x25755d0() {
   return (neuron0x2564f20()*-1.18524);
}

double NNfunction_ss_uRcR::synapse0x2575610() {
   return (neuron0x2565260()*-0.0664492);
}

double NNfunction_ss_uRcR::synapse0x2575650() {
   return (neuron0x25655a0()*0.101606);
}

double NNfunction_ss_uRcR::synapse0x2575690() {
   return (neuron0x25658e0()*-0.621169);
}

double NNfunction_ss_uRcR::synapse0x25756d0() {
   return (neuron0x2565c20()*-0.010299);
}

double NNfunction_ss_uRcR::synapse0x2575710() {
   return (neuron0x2565f60()*0.148497);
}

double NNfunction_ss_uRcR::synapse0x2575750() {
   return (neuron0x25662a0()*0.112471);
}

double NNfunction_ss_uRcR::synapse0x2575790() {
   return (neuron0x25665e0()*-0.490124);
}

double NNfunction_ss_uRcR::synapse0x25757d0() {
   return (neuron0x2566920()*0.179021);
}

double NNfunction_ss_uRcR::synapse0x2575810() {
   return (neuron0x2566c60()*0.0466771);
}

double NNfunction_ss_uRcR::synapse0x2575850() {
   return (neuron0x2566fa0()*-0.495775);
}

double NNfunction_ss_uRcR::synapse0x2575890() {
   return (neuron0x25672e0()*1.23549);
}

double NNfunction_ss_uRcR::synapse0x25758d0() {
   return (neuron0x2567620()*0.118177);
}

double NNfunction_ss_uRcR::synapse0x2575360() {
   return (neuron0x2567960()*-0.874223);
}

double NNfunction_ss_uRcR::synapse0x25753a0() {
   return (neuron0x2567ec0()*0.0504333);
}

double NNfunction_ss_uRcR::synapse0x2575a20() {
   return (neuron0x25680e0()*0.180369);
}

double NNfunction_ss_uRcR::synapse0x2575a60() {
   return (neuron0x2568420()*0.147013);
}

double NNfunction_ss_uRcR::synapse0x2575aa0() {
   return (neuron0x2568760()*0.564412);
}

double NNfunction_ss_uRcR::synapse0x2575ae0() {
   return (neuron0x2568aa0()*-0.197409);
}

double NNfunction_ss_uRcR::synapse0x2575b20() {
   return (neuron0x2568de0()*-0.132969);
}

double NNfunction_ss_uRcR::synapse0x2575b60() {
   return (neuron0x2569120()*-0.25458);
}

double NNfunction_ss_uRcR::synapse0x2575ee0() {
   return (neuron0x2564560()*-0.0126947);
}

double NNfunction_ss_uRcR::synapse0x2575f20() {
   return (neuron0x25648a0()*-0.0233223);
}

double NNfunction_ss_uRcR::synapse0x2575f60() {
   return (neuron0x2564be0()*-0.0275834);
}

double NNfunction_ss_uRcR::synapse0x2575fa0() {
   return (neuron0x2564f20()*0.0092494);
}

double NNfunction_ss_uRcR::synapse0x2575fe0() {
   return (neuron0x2565260()*-0.015365);
}

double NNfunction_ss_uRcR::synapse0x2576020() {
   return (neuron0x25655a0()*-0.0524068);
}

double NNfunction_ss_uRcR::synapse0x2576060() {
   return (neuron0x25658e0()*-0.0192788);
}

double NNfunction_ss_uRcR::synapse0x25760a0() {
   return (neuron0x2565c20()*-0.0436493);
}

double NNfunction_ss_uRcR::synapse0x25760e0() {
   return (neuron0x2565f60()*0.0215403);
}

double NNfunction_ss_uRcR::synapse0x2576120() {
   return (neuron0x25662a0()*0.00661374);
}

double NNfunction_ss_uRcR::synapse0x2576160() {
   return (neuron0x25665e0()*-0.00841295);
}

double NNfunction_ss_uRcR::synapse0x25761a0() {
   return (neuron0x2566920()*0.0458925);
}

double NNfunction_ss_uRcR::synapse0x25761e0() {
   return (neuron0x2566c60()*0.00358093);
}

double NNfunction_ss_uRcR::synapse0x2576220() {
   return (neuron0x2566fa0()*0.0193167);
}

double NNfunction_ss_uRcR::synapse0x2576260() {
   return (neuron0x25672e0()*2.27468);
}

double NNfunction_ss_uRcR::synapse0x25762a0() {
   return (neuron0x2567620()*-0.372537);
}

double NNfunction_ss_uRcR::synapse0x2575d30() {
   return (neuron0x2567960()*0.0743155);
}

double NNfunction_ss_uRcR::synapse0x2575d70() {
   return (neuron0x2567ec0()*0.0123609);
}

double NNfunction_ss_uRcR::synapse0x25763f0() {
   return (neuron0x25680e0()*0.0283874);
}

double NNfunction_ss_uRcR::synapse0x2576430() {
   return (neuron0x2568420()*0.0281501);
}

double NNfunction_ss_uRcR::synapse0x2576470() {
   return (neuron0x2568760()*0.0113892);
}

double NNfunction_ss_uRcR::synapse0x25764b0() {
   return (neuron0x2568aa0()*0.0218769);
}

double NNfunction_ss_uRcR::synapse0x25764f0() {
   return (neuron0x2568de0()*0.00941328);
}

double NNfunction_ss_uRcR::synapse0x2576530() {
   return (neuron0x2569120()*-0.0234403);
}

double NNfunction_ss_uRcR::synapse0x25768b0() {
   return (neuron0x2564560()*0.137576);
}

double NNfunction_ss_uRcR::synapse0x25768f0() {
   return (neuron0x25648a0()*0.0719741);
}

double NNfunction_ss_uRcR::synapse0x2576930() {
   return (neuron0x2564be0()*0.311584);
}

double NNfunction_ss_uRcR::synapse0x2576970() {
   return (neuron0x2564f20()*-0.00549744);
}

double NNfunction_ss_uRcR::synapse0x25769b0() {
   return (neuron0x2565260()*-0.495846);
}

double NNfunction_ss_uRcR::synapse0x25769f0() {
   return (neuron0x25655a0()*-0.292002);
}

double NNfunction_ss_uRcR::synapse0x2576a30() {
   return (neuron0x25658e0()*-0.424287);
}

double NNfunction_ss_uRcR::synapse0x2576a70() {
   return (neuron0x2565c20()*-0.301228);
}

double NNfunction_ss_uRcR::synapse0x2576ab0() {
   return (neuron0x2565f60()*0.513497);
}

double NNfunction_ss_uRcR::synapse0x2576af0() {
   return (neuron0x25662a0()*0.0651);
}

double NNfunction_ss_uRcR::synapse0x2576b30() {
   return (neuron0x25665e0()*-0.249697);
}

double NNfunction_ss_uRcR::synapse0x2576b70() {
   return (neuron0x2566920()*-0.00601432);
}

double NNfunction_ss_uRcR::synapse0x2576bb0() {
   return (neuron0x2566c60()*-0.151671);
}

double NNfunction_ss_uRcR::synapse0x2576bf0() {
   return (neuron0x2566fa0()*-0.357103);
}

double NNfunction_ss_uRcR::synapse0x2576c30() {
   return (neuron0x25672e0()*-0.0939644);
}

double NNfunction_ss_uRcR::synapse0x2576c70() {
   return (neuron0x2567620()*0.119269);
}

double NNfunction_ss_uRcR::synapse0x2576700() {
   return (neuron0x2567960()*-0.858719);
}

double NNfunction_ss_uRcR::synapse0x2576740() {
   return (neuron0x2567ec0()*0.510103);
}

double NNfunction_ss_uRcR::synapse0x2576dc0() {
   return (neuron0x25680e0()*0.708947);
}

double NNfunction_ss_uRcR::synapse0x2576e00() {
   return (neuron0x2568420()*-0.0226732);
}

double NNfunction_ss_uRcR::synapse0x2576e40() {
   return (neuron0x2568760()*0.249803);
}

double NNfunction_ss_uRcR::synapse0x2576e80() {
   return (neuron0x2568aa0()*-0.299642);
}

double NNfunction_ss_uRcR::synapse0x2576ec0() {
   return (neuron0x2568de0()*-0.15561);
}

double NNfunction_ss_uRcR::synapse0x2576f00() {
   return (neuron0x2569120()*0.0927104);
}

double NNfunction_ss_uRcR::synapse0x2577280() {
   return (neuron0x2564560()*0.127402);
}

double NNfunction_ss_uRcR::synapse0x25772c0() {
   return (neuron0x25648a0()*0.150972);
}

double NNfunction_ss_uRcR::synapse0x2577300() {
   return (neuron0x2564be0()*0.0933114);
}

double NNfunction_ss_uRcR::synapse0x2577340() {
   return (neuron0x2564f20()*1.36617);
}

double NNfunction_ss_uRcR::synapse0x2577380() {
   return (neuron0x2565260()*0.0263311);
}

double NNfunction_ss_uRcR::synapse0x25773c0() {
   return (neuron0x25655a0()*0.152327);
}

double NNfunction_ss_uRcR::synapse0x2577400() {
   return (neuron0x25658e0()*0.342977);
}

double NNfunction_ss_uRcR::synapse0x2577440() {
   return (neuron0x2565c20()*0.341807);
}

double NNfunction_ss_uRcR::synapse0x2577480() {
   return (neuron0x2565f60()*-0.367358);
}

double NNfunction_ss_uRcR::synapse0x25774c0() {
   return (neuron0x25662a0()*0.190131);
}

double NNfunction_ss_uRcR::synapse0x2577500() {
   return (neuron0x25665e0()*0.0164321);
}

double NNfunction_ss_uRcR::synapse0x2577540() {
   return (neuron0x2566920()*0.200745);
}

double NNfunction_ss_uRcR::synapse0x2577580() {
   return (neuron0x2566c60()*0.0429289);
}

double NNfunction_ss_uRcR::synapse0x25775c0() {
   return (neuron0x2566fa0()*-0.05752);
}

double NNfunction_ss_uRcR::synapse0x2577600() {
   return (neuron0x25672e0()*0.295911);
}

double NNfunction_ss_uRcR::synapse0x2577640() {
   return (neuron0x2567620()*0.297682);
}

double NNfunction_ss_uRcR::synapse0x25770d0() {
   return (neuron0x2567960()*0.155513);
}

double NNfunction_ss_uRcR::synapse0x2577110() {
   return (neuron0x2567ec0()*-0.409389);
}

double NNfunction_ss_uRcR::synapse0x2577790() {
   return (neuron0x25680e0()*-0.297156);
}

double NNfunction_ss_uRcR::synapse0x25777d0() {
   return (neuron0x2568420()*0.10984);
}

double NNfunction_ss_uRcR::synapse0x2577810() {
   return (neuron0x2568760()*-0.139656);
}

double NNfunction_ss_uRcR::synapse0x2577850() {
   return (neuron0x2568aa0()*-0.00278007);
}

double NNfunction_ss_uRcR::synapse0x2577890() {
   return (neuron0x2568de0()*0.00253877);
}

double NNfunction_ss_uRcR::synapse0x25778d0() {
   return (neuron0x2569120()*-0.00760781);
}

double NNfunction_ss_uRcR::synapse0x2577c50() {
   return (neuron0x2564560()*0.0209848);
}

double NNfunction_ss_uRcR::synapse0x2577c90() {
   return (neuron0x25648a0()*0.02638);
}

double NNfunction_ss_uRcR::synapse0x2577cd0() {
   return (neuron0x2564be0()*0.00942346);
}

double NNfunction_ss_uRcR::synapse0x2577d10() {
   return (neuron0x2564f20()*-18.57);
}

double NNfunction_ss_uRcR::synapse0x2577d50() {
   return (neuron0x2565260()*-0.0148756);
}

double NNfunction_ss_uRcR::synapse0x2577d90() {
   return (neuron0x25655a0()*0.0365986);
}

double NNfunction_ss_uRcR::synapse0x2577dd0() {
   return (neuron0x25658e0()*-0.0345366);
}

double NNfunction_ss_uRcR::synapse0x2577e10() {
   return (neuron0x2565c20()*-0.0174583);
}

double NNfunction_ss_uRcR::synapse0x2577e50() {
   return (neuron0x2565f60()*0.0177258);
}

double NNfunction_ss_uRcR::synapse0x2570010() {
   return (neuron0x25662a0()*-0.00137969);
}

double NNfunction_ss_uRcR::synapse0x2570050() {
   return (neuron0x25665e0()*0.0121041);
}

double NNfunction_ss_uRcR::synapse0x2570090() {
   return (neuron0x2566920()*-0.00844636);
}

double NNfunction_ss_uRcR::synapse0x25700d0() {
   return (neuron0x2566c60()*0.0258867);
}

double NNfunction_ss_uRcR::synapse0x2570110() {
   return (neuron0x2566fa0()*-0.0139262);
}

double NNfunction_ss_uRcR::synapse0x2570150() {
   return (neuron0x25672e0()*0.159078);
}

double NNfunction_ss_uRcR::synapse0x2570190() {
   return (neuron0x2567620()*0.305357);
}

double NNfunction_ss_uRcR::synapse0x2577aa0() {
   return (neuron0x2567960()*0.00823685);
}

double NNfunction_ss_uRcR::synapse0x2577ae0() {
   return (neuron0x2567ec0()*-0.0158843);
}

double NNfunction_ss_uRcR::synapse0x25702e0() {
   return (neuron0x25680e0()*0.0335553);
}

double NNfunction_ss_uRcR::synapse0x2570320() {
   return (neuron0x2568420()*-0.00524596);
}

double NNfunction_ss_uRcR::synapse0x2570360() {
   return (neuron0x2568760()*-0.013506);
}

double NNfunction_ss_uRcR::synapse0x25703a0() {
   return (neuron0x2568aa0()*-0.0357417);
}

double NNfunction_ss_uRcR::synapse0x25703e0() {
   return (neuron0x2568de0()*-0.00744226);
}

double NNfunction_ss_uRcR::synapse0x2570420() {
   return (neuron0x2569120()*-0.0154125);
}

double NNfunction_ss_uRcR::synapse0x25707a0() {
   return (neuron0x2564560()*0.00146715);
}

double NNfunction_ss_uRcR::synapse0x25707e0() {
   return (neuron0x25648a0()*0.00629829);
}

double NNfunction_ss_uRcR::synapse0x2570820() {
   return (neuron0x2564be0()*-0.049198);
}

double NNfunction_ss_uRcR::synapse0x2570860() {
   return (neuron0x2564f20()*1.22592);
}

double NNfunction_ss_uRcR::synapse0x25708a0() {
   return (neuron0x2565260()*0.0730903);
}

double NNfunction_ss_uRcR::synapse0x25708e0() {
   return (neuron0x25655a0()*0.0137322);
}

double NNfunction_ss_uRcR::synapse0x2570920() {
   return (neuron0x25658e0()*0.0592541);
}

double NNfunction_ss_uRcR::synapse0x2570960() {
   return (neuron0x2565c20()*0.214933);
}

double NNfunction_ss_uRcR::synapse0x25709a0() {
   return (neuron0x2565f60()*-0.180796);
}

double NNfunction_ss_uRcR::synapse0x25709e0() {
   return (neuron0x25662a0()*0.130418);
}

double NNfunction_ss_uRcR::synapse0x2570a20() {
   return (neuron0x25665e0()*-0.0364491);
}

double NNfunction_ss_uRcR::synapse0x2570a60() {
   return (neuron0x2566920()*-0.31539);
}

double NNfunction_ss_uRcR::synapse0x2570aa0() {
   return (neuron0x2566c60()*-0.197561);
}

double NNfunction_ss_uRcR::synapse0x2570ae0() {
   return (neuron0x2566fa0()*-0.0836324);
}

double NNfunction_ss_uRcR::synapse0x2570b20() {
   return (neuron0x25672e0()*0.0349984);
}

double NNfunction_ss_uRcR::synapse0x2570b60() {
   return (neuron0x2567620()*-0.501598);
}

double NNfunction_ss_uRcR::synapse0x25705f0() {
   return (neuron0x2567960()*-0.0475059);
}

double NNfunction_ss_uRcR::synapse0x2570630() {
   return (neuron0x2567ec0()*0.121899);
}

double NNfunction_ss_uRcR::synapse0x2570cb0() {
   return (neuron0x25680e0()*-0.0957307);
}

double NNfunction_ss_uRcR::synapse0x2570cf0() {
   return (neuron0x2568420()*-0.147116);
}

double NNfunction_ss_uRcR::synapse0x2570d30() {
   return (neuron0x2568760()*0.0328154);
}

double NNfunction_ss_uRcR::synapse0x2570d70() {
   return (neuron0x2568aa0()*-0.0660924);
}

double NNfunction_ss_uRcR::synapse0x2570db0() {
   return (neuron0x2568de0()*0.0660575);
}

double NNfunction_ss_uRcR::synapse0x2570df0() {
   return (neuron0x2569120()*0.0443092);
}

double NNfunction_ss_uRcR::synapse0x2570fc0() {
   return (neuron0x2564560()*-0.0345915);
}

double NNfunction_ss_uRcR::synapse0x257a050() {
   return (neuron0x25648a0()*-0.179564);
}

double NNfunction_ss_uRcR::synapse0x257a090() {
   return (neuron0x2564be0()*0.00160346);
}

double NNfunction_ss_uRcR::synapse0x257a0d0() {
   return (neuron0x2564f20()*-0.298452);
}

double NNfunction_ss_uRcR::synapse0x257a110() {
   return (neuron0x2565260()*0.159547);
}

double NNfunction_ss_uRcR::synapse0x257a150() {
   return (neuron0x25655a0()*-0.0295363);
}

double NNfunction_ss_uRcR::synapse0x257a190() {
   return (neuron0x25658e0()*-0.319056);
}

double NNfunction_ss_uRcR::synapse0x257a1d0() {
   return (neuron0x2565c20()*-0.238937);
}

double NNfunction_ss_uRcR::synapse0x257a210() {
   return (neuron0x2565f60()*0.160366);
}

double NNfunction_ss_uRcR::synapse0x257a250() {
   return (neuron0x25662a0()*0.212226);
}

double NNfunction_ss_uRcR::synapse0x257a290() {
   return (neuron0x25665e0()*-1.50149);
}

double NNfunction_ss_uRcR::synapse0x257a2d0() {
   return (neuron0x2566920()*0.170179);
}

double NNfunction_ss_uRcR::synapse0x257a310() {
   return (neuron0x2566c60()*0.0406704);
}

double NNfunction_ss_uRcR::synapse0x257a350() {
   return (neuron0x2566fa0()*0.0251235);
}

double NNfunction_ss_uRcR::synapse0x257a390() {
   return (neuron0x25672e0()*0.56095);
}

double NNfunction_ss_uRcR::synapse0x257a3d0() {
   return (neuron0x2567620()*-0.201701);
}

double NNfunction_ss_uRcR::synapse0x2579ea0() {
   return (neuron0x2567960()*-0.238256);
}

double NNfunction_ss_uRcR::synapse0x2579ee0() {
   return (neuron0x2567ec0()*0.122669);
}

double NNfunction_ss_uRcR::synapse0x257a520() {
   return (neuron0x25680e0()*-0.0241189);
}

double NNfunction_ss_uRcR::synapse0x257a560() {
   return (neuron0x2568420()*0.0930634);
}

double NNfunction_ss_uRcR::synapse0x257a5a0() {
   return (neuron0x2568760()*0.146464);
}

double NNfunction_ss_uRcR::synapse0x257a5e0() {
   return (neuron0x2568aa0()*-0.0325123);
}

double NNfunction_ss_uRcR::synapse0x257a620() {
   return (neuron0x2568de0()*0.000383736);
}

double NNfunction_ss_uRcR::synapse0x257a660() {
   return (neuron0x2569120()*-0.0994945);
}

double NNfunction_ss_uRcR::synapse0x257a9e0() {
   return (neuron0x2564560()*0.0487741);
}

double NNfunction_ss_uRcR::synapse0x257aa20() {
   return (neuron0x25648a0()*0.379983);
}

double NNfunction_ss_uRcR::synapse0x257aa60() {
   return (neuron0x2564be0()*0.104291);
}

double NNfunction_ss_uRcR::synapse0x257aaa0() {
   return (neuron0x2564f20()*0.970867);
}

double NNfunction_ss_uRcR::synapse0x257aae0() {
   return (neuron0x2565260()*-0.0889282);
}

double NNfunction_ss_uRcR::synapse0x257ab20() {
   return (neuron0x25655a0()*-0.0505162);
}

double NNfunction_ss_uRcR::synapse0x257ab60() {
   return (neuron0x25658e0()*0.0662699);
}

double NNfunction_ss_uRcR::synapse0x257aba0() {
   return (neuron0x2565c20()*-0.220037);
}

double NNfunction_ss_uRcR::synapse0x257abe0() {
   return (neuron0x2565f60()*-0.0360034);
}

double NNfunction_ss_uRcR::synapse0x257ac20() {
   return (neuron0x25662a0()*-0.276802);
}

double NNfunction_ss_uRcR::synapse0x257ac60() {
   return (neuron0x25665e0()*-0.0323708);
}

double NNfunction_ss_uRcR::synapse0x257aca0() {
   return (neuron0x2566920()*0.0696805);
}

double NNfunction_ss_uRcR::synapse0x257ace0() {
   return (neuron0x2566c60()*-0.0297402);
}

double NNfunction_ss_uRcR::synapse0x257ad20() {
   return (neuron0x2566fa0()*0.0789901);
}

double NNfunction_ss_uRcR::synapse0x257ad60() {
   return (neuron0x25672e0()*0.932113);
}

double NNfunction_ss_uRcR::synapse0x257ada0() {
   return (neuron0x2567620()*-0.364453);
}

double NNfunction_ss_uRcR::synapse0x257a830() {
   return (neuron0x2567960()*0.130504);
}

double NNfunction_ss_uRcR::synapse0x257a870() {
   return (neuron0x2567ec0()*-0.353134);
}

double NNfunction_ss_uRcR::synapse0x257aef0() {
   return (neuron0x25680e0()*0.00373093);
}

double NNfunction_ss_uRcR::synapse0x257af30() {
   return (neuron0x2568420()*-0.146056);
}

double NNfunction_ss_uRcR::synapse0x257af70() {
   return (neuron0x2568760()*0.0889078);
}

double NNfunction_ss_uRcR::synapse0x257afb0() {
   return (neuron0x2568aa0()*0.186662);
}

double NNfunction_ss_uRcR::synapse0x257aff0() {
   return (neuron0x2568de0()*-0.0427492);
}

double NNfunction_ss_uRcR::synapse0x257b030() {
   return (neuron0x2569120()*-0.0313441);
}

double NNfunction_ss_uRcR::synapse0x257b3b0() {
   return (neuron0x2564560()*-0.0818949);
}

double NNfunction_ss_uRcR::synapse0x257b3f0() {
   return (neuron0x25648a0()*-0.185652);
}

double NNfunction_ss_uRcR::synapse0x257b430() {
   return (neuron0x2564be0()*-0.0386464);
}

double NNfunction_ss_uRcR::synapse0x257b470() {
   return (neuron0x2564f20()*0.522829);
}

double NNfunction_ss_uRcR::synapse0x257b4b0() {
   return (neuron0x2565260()*-0.159357);
}

double NNfunction_ss_uRcR::synapse0x257b4f0() {
   return (neuron0x25655a0()*1.46926);
}

double NNfunction_ss_uRcR::synapse0x257b530() {
   return (neuron0x25658e0()*-0.116239);
}

double NNfunction_ss_uRcR::synapse0x257b570() {
   return (neuron0x2565c20()*0.439244);
}

double NNfunction_ss_uRcR::synapse0x257b5b0() {
   return (neuron0x2565f60()*0.294723);
}

double NNfunction_ss_uRcR::synapse0x257b5f0() {
   return (neuron0x25662a0()*0.00344396);
}

double NNfunction_ss_uRcR::synapse0x257b630() {
   return (neuron0x25665e0()*0.130765);
}

double NNfunction_ss_uRcR::synapse0x257b670() {
   return (neuron0x2566920()*0.0755512);
}

double NNfunction_ss_uRcR::synapse0x257b6b0() {
   return (neuron0x2566c60()*0.154794);
}

double NNfunction_ss_uRcR::synapse0x257b6f0() {
   return (neuron0x2566fa0()*0.0778858);
}

double NNfunction_ss_uRcR::synapse0x257b730() {
   return (neuron0x25672e0()*0.168792);
}

double NNfunction_ss_uRcR::synapse0x257b770() {
   return (neuron0x2567620()*-0.284841);
}

double NNfunction_ss_uRcR::synapse0x257b200() {
   return (neuron0x2567960()*0.0680628);
}

double NNfunction_ss_uRcR::synapse0x257b240() {
   return (neuron0x2567ec0()*0.249219);
}

double NNfunction_ss_uRcR::synapse0x257b8c0() {
   return (neuron0x25680e0()*0.151397);
}

double NNfunction_ss_uRcR::synapse0x257b900() {
   return (neuron0x2568420()*-0.170855);
}

double NNfunction_ss_uRcR::synapse0x257b940() {
   return (neuron0x2568760()*-0.0957201);
}

double NNfunction_ss_uRcR::synapse0x257b980() {
   return (neuron0x2568aa0()*-0.0163086);
}

double NNfunction_ss_uRcR::synapse0x257b9c0() {
   return (neuron0x2568de0()*-0.0781741);
}

double NNfunction_ss_uRcR::synapse0x257ba00() {
   return (neuron0x2569120()*0.0276137);
}

double NNfunction_ss_uRcR::synapse0x257bd80() {
   return (neuron0x2564560()*0.0746647);
}

double NNfunction_ss_uRcR::synapse0x257bdc0() {
   return (neuron0x25648a0()*-0.424914);
}

double NNfunction_ss_uRcR::synapse0x257be00() {
   return (neuron0x2564be0()*-0.264193);
}

double NNfunction_ss_uRcR::synapse0x257be40() {
   return (neuron0x2564f20()*-0.00735351);
}

double NNfunction_ss_uRcR::synapse0x257be80() {
   return (neuron0x2565260()*0.0951004);
}

double NNfunction_ss_uRcR::synapse0x257bec0() {
   return (neuron0x25655a0()*-0.131185);
}

double NNfunction_ss_uRcR::synapse0x257bf00() {
   return (neuron0x25658e0()*0.0865201);
}

double NNfunction_ss_uRcR::synapse0x257bf40() {
   return (neuron0x2565c20()*-0.53681);
}

double NNfunction_ss_uRcR::synapse0x257bf80() {
   return (neuron0x2565f60()*0.374649);
}

double NNfunction_ss_uRcR::synapse0x257bfc0() {
   return (neuron0x25662a0()*0.0177101);
}

double NNfunction_ss_uRcR::synapse0x257c000() {
   return (neuron0x25665e0()*0.0418286);
}

double NNfunction_ss_uRcR::synapse0x257c040() {
   return (neuron0x2566920()*0.545313);
}

double NNfunction_ss_uRcR::synapse0x257c080() {
   return (neuron0x2566c60()*0.398835);
}

double NNfunction_ss_uRcR::synapse0x257c0c0() {
   return (neuron0x2566fa0()*0.173267);
}

double NNfunction_ss_uRcR::synapse0x257c100() {
   return (neuron0x25672e0()*0.64242);
}

double NNfunction_ss_uRcR::synapse0x257c140() {
   return (neuron0x2567620()*0.822286);
}

double NNfunction_ss_uRcR::synapse0x257bbd0() {
   return (neuron0x2567960()*-0.207458);
}

double NNfunction_ss_uRcR::synapse0x257bc10() {
   return (neuron0x2567ec0()*0.677358);
}

double NNfunction_ss_uRcR::synapse0x257c290() {
   return (neuron0x25680e0()*0.39317);
}

double NNfunction_ss_uRcR::synapse0x257c2d0() {
   return (neuron0x2568420()*0.302418);
}

double NNfunction_ss_uRcR::synapse0x257c310() {
   return (neuron0x2568760()*0.0758023);
}

double NNfunction_ss_uRcR::synapse0x257c350() {
   return (neuron0x2568aa0()*-0.128833);
}

double NNfunction_ss_uRcR::synapse0x257c390() {
   return (neuron0x2568de0()*-0.188177);
}

double NNfunction_ss_uRcR::synapse0x257c3d0() {
   return (neuron0x2569120()*-0.109691);
}

double NNfunction_ss_uRcR::synapse0x257c750() {
   return (neuron0x2564560()*0.00297132);
}

double NNfunction_ss_uRcR::synapse0x257c790() {
   return (neuron0x25648a0()*0.585472);
}

double NNfunction_ss_uRcR::synapse0x257c7d0() {
   return (neuron0x2564be0()*-0.0237351);
}

double NNfunction_ss_uRcR::synapse0x257c810() {
   return (neuron0x2564f20()*-0.0831711);
}

double NNfunction_ss_uRcR::synapse0x257c850() {
   return (neuron0x2565260()*0.0508718);
}

double NNfunction_ss_uRcR::synapse0x257c890() {
   return (neuron0x25655a0()*-0.190853);
}

double NNfunction_ss_uRcR::synapse0x257c8d0() {
   return (neuron0x25658e0()*-0.125452);
}

double NNfunction_ss_uRcR::synapse0x257c910() {
   return (neuron0x2565c20()*0.00532086);
}

double NNfunction_ss_uRcR::synapse0x257c950() {
   return (neuron0x2565f60()*-0.237381);
}

double NNfunction_ss_uRcR::synapse0x257c990() {
   return (neuron0x25662a0()*-0.287575);
}

double NNfunction_ss_uRcR::synapse0x257c9d0() {
   return (neuron0x25665e0()*-0.0800965);
}

double NNfunction_ss_uRcR::synapse0x257ca10() {
   return (neuron0x2566920()*-0.023281);
}

double NNfunction_ss_uRcR::synapse0x257ca50() {
   return (neuron0x2566c60()*-0.168701);
}

double NNfunction_ss_uRcR::synapse0x257ca90() {
   return (neuron0x2566fa0()*-0.0975582);
}

double NNfunction_ss_uRcR::synapse0x257cad0() {
   return (neuron0x25672e0()*0.189287);
}

double NNfunction_ss_uRcR::synapse0x257cb10() {
   return (neuron0x2567620()*0.135698);
}

double NNfunction_ss_uRcR::synapse0x257c5a0() {
   return (neuron0x2567960()*-0.124731);
}

double NNfunction_ss_uRcR::synapse0x257c5e0() {
   return (neuron0x2567ec0()*-0.105717);
}

double NNfunction_ss_uRcR::synapse0x257cc60() {
   return (neuron0x25680e0()*0.00853445);
}

double NNfunction_ss_uRcR::synapse0x257cca0() {
   return (neuron0x2568420()*-0.0321866);
}

double NNfunction_ss_uRcR::synapse0x257cce0() {
   return (neuron0x2568760()*-0.00587469);
}

double NNfunction_ss_uRcR::synapse0x257cd20() {
   return (neuron0x2568aa0()*0.0304561);
}

double NNfunction_ss_uRcR::synapse0x257cd60() {
   return (neuron0x2568de0()*0.0608897);
}

double NNfunction_ss_uRcR::synapse0x257cda0() {
   return (neuron0x2569120()*-0.0699048);
}

double NNfunction_ss_uRcR::synapse0x257d120() {
   return (neuron0x2564560()*-0.141746);
}

double NNfunction_ss_uRcR::synapse0x257d160() {
   return (neuron0x25648a0()*-1.27635);
}

double NNfunction_ss_uRcR::synapse0x257d1a0() {
   return (neuron0x2564be0()*-0.0143031);
}

double NNfunction_ss_uRcR::synapse0x257d1e0() {
   return (neuron0x2564f20()*-1.12877);
}

double NNfunction_ss_uRcR::synapse0x257d220() {
   return (neuron0x2565260()*0.0360251);
}

double NNfunction_ss_uRcR::synapse0x257d260() {
   return (neuron0x25655a0()*0.308345);
}

double NNfunction_ss_uRcR::synapse0x257d2a0() {
   return (neuron0x25658e0()*0.0591567);
}

double NNfunction_ss_uRcR::synapse0x257d2e0() {
   return (neuron0x2565c20()*0.268821);
}

double NNfunction_ss_uRcR::synapse0x257d320() {
   return (neuron0x2565f60()*0.0546785);
}

double NNfunction_ss_uRcR::synapse0x257d360() {
   return (neuron0x25662a0()*0.343477);
}

double NNfunction_ss_uRcR::synapse0x257d3a0() {
   return (neuron0x25665e0()*0.0294625);
}

double NNfunction_ss_uRcR::synapse0x257d3e0() {
   return (neuron0x2566920()*-0.0407856);
}

double NNfunction_ss_uRcR::synapse0x257d420() {
   return (neuron0x2566c60()*0.194318);
}

double NNfunction_ss_uRcR::synapse0x257d460() {
   return (neuron0x2566fa0()*-0.0580298);
}

double NNfunction_ss_uRcR::synapse0x257d4a0() {
   return (neuron0x25672e0()*-0.6224);
}

double NNfunction_ss_uRcR::synapse0x257d4e0() {
   return (neuron0x2567620()*0.0673309);
}

double NNfunction_ss_uRcR::synapse0x257cf70() {
   return (neuron0x2567960()*-0.129058);
}

double NNfunction_ss_uRcR::synapse0x257cfb0() {
   return (neuron0x2567ec0()*0.216363);
}

double NNfunction_ss_uRcR::synapse0x257d630() {
   return (neuron0x25680e0()*0.177295);
}

double NNfunction_ss_uRcR::synapse0x257d670() {
   return (neuron0x2568420()*0.253159);
}

double NNfunction_ss_uRcR::synapse0x257d6b0() {
   return (neuron0x2568760()*-0.0247703);
}

double NNfunction_ss_uRcR::synapse0x257d6f0() {
   return (neuron0x2568aa0()*-0.272275);
}

double NNfunction_ss_uRcR::synapse0x257d730() {
   return (neuron0x2568de0()*-0.157653);
}

double NNfunction_ss_uRcR::synapse0x257d770() {
   return (neuron0x2569120()*0.102721);
}

double NNfunction_ss_uRcR::synapse0x257daf0() {
   return (neuron0x2564560()*0.0200492);
}

double NNfunction_ss_uRcR::synapse0x257db30() {
   return (neuron0x25648a0()*0.393548);
}

double NNfunction_ss_uRcR::synapse0x257db70() {
   return (neuron0x2564be0()*-0.0186955);
}

double NNfunction_ss_uRcR::synapse0x257dbb0() {
   return (neuron0x2564f20()*0.848758);
}

double NNfunction_ss_uRcR::synapse0x257dbf0() {
   return (neuron0x2565260()*-0.0545414);
}

double NNfunction_ss_uRcR::synapse0x257dc30() {
   return (neuron0x25655a0()*0.0872619);
}

double NNfunction_ss_uRcR::synapse0x257dc70() {
   return (neuron0x25658e0()*0.0579844);
}

double NNfunction_ss_uRcR::synapse0x257dcb0() {
   return (neuron0x2565c20()*0.0951517);
}

double NNfunction_ss_uRcR::synapse0x257dcf0() {
   return (neuron0x2565f60()*-0.0363292);
}

double NNfunction_ss_uRcR::synapse0x257dd30() {
   return (neuron0x25662a0()*0.0796019);
}

double NNfunction_ss_uRcR::synapse0x257dd70() {
   return (neuron0x25665e0()*-0.0934062);
}

double NNfunction_ss_uRcR::synapse0x257ddb0() {
   return (neuron0x2566920()*0.208715);
}

double NNfunction_ss_uRcR::synapse0x257ddf0() {
   return (neuron0x2566c60()*0.148524);
}

double NNfunction_ss_uRcR::synapse0x257de30() {
   return (neuron0x2566fa0()*-0.0666924);
}

double NNfunction_ss_uRcR::synapse0x257de70() {
   return (neuron0x25672e0()*-0.806834);
}

double NNfunction_ss_uRcR::synapse0x257deb0() {
   return (neuron0x2567620()*0.289807);
}

double NNfunction_ss_uRcR::synapse0x257d940() {
   return (neuron0x2567960()*0.0580833);
}

double NNfunction_ss_uRcR::synapse0x257d980() {
   return (neuron0x2567ec0()*-0.0585859);
}

double NNfunction_ss_uRcR::synapse0x257e000() {
   return (neuron0x25680e0()*0.0321716);
}

double NNfunction_ss_uRcR::synapse0x257e040() {
   return (neuron0x2568420()*0.0575587);
}

double NNfunction_ss_uRcR::synapse0x257e080() {
   return (neuron0x2568760()*-0.0957622);
}

double NNfunction_ss_uRcR::synapse0x257e0c0() {
   return (neuron0x2568aa0()*-0.0878791);
}

double NNfunction_ss_uRcR::synapse0x257e100() {
   return (neuron0x2568de0()*0.0107724);
}

double NNfunction_ss_uRcR::synapse0x257e140() {
   return (neuron0x2569120()*0.0727285);
}

double NNfunction_ss_uRcR::synapse0x257e4c0() {
   return (neuron0x2564560()*0.0982835);
}

double NNfunction_ss_uRcR::synapse0x257e500() {
   return (neuron0x25648a0()*-0.49855);
}

double NNfunction_ss_uRcR::synapse0x257e540() {
   return (neuron0x2564be0()*0.201517);
}

double NNfunction_ss_uRcR::synapse0x257e580() {
   return (neuron0x2564f20()*-0.896448);
}

double NNfunction_ss_uRcR::synapse0x257e5c0() {
   return (neuron0x2565260()*-0.206284);
}

double NNfunction_ss_uRcR::synapse0x257e600() {
   return (neuron0x25655a0()*-0.0406058);
}

double NNfunction_ss_uRcR::synapse0x257e640() {
   return (neuron0x25658e0()*0.162176);
}

double NNfunction_ss_uRcR::synapse0x257e680() {
   return (neuron0x2565c20()*0.0551237);
}

double NNfunction_ss_uRcR::synapse0x257e6c0() {
   return (neuron0x2565f60()*-0.114892);
}

double NNfunction_ss_uRcR::synapse0x257e700() {
   return (neuron0x25662a0()*-0.166864);
}

double NNfunction_ss_uRcR::synapse0x257e740() {
   return (neuron0x25665e0()*-0.599472);
}

double NNfunction_ss_uRcR::synapse0x257e780() {
   return (neuron0x2566920()*-0.170676);
}

double NNfunction_ss_uRcR::synapse0x257e7c0() {
   return (neuron0x2566c60()*-0.757096);
}

double NNfunction_ss_uRcR::synapse0x257e800() {
   return (neuron0x2566fa0()*0.362931);
}

double NNfunction_ss_uRcR::synapse0x257e840() {
   return (neuron0x25672e0()*0.0494385);
}

double NNfunction_ss_uRcR::synapse0x257e880() {
   return (neuron0x2567620()*0.600877);
}

double NNfunction_ss_uRcR::synapse0x257e310() {
   return (neuron0x2567960()*0.158348);
}

double NNfunction_ss_uRcR::synapse0x257e350() {
   return (neuron0x2567ec0()*0.875124);
}

double NNfunction_ss_uRcR::synapse0x257e9d0() {
   return (neuron0x25680e0()*1.23769);
}

double NNfunction_ss_uRcR::synapse0x257ea10() {
   return (neuron0x2568420()*0.0565886);
}

double NNfunction_ss_uRcR::synapse0x257ea50() {
   return (neuron0x2568760()*0.0869165);
}

double NNfunction_ss_uRcR::synapse0x257ea90() {
   return (neuron0x2568aa0()*0.24064);
}

double NNfunction_ss_uRcR::synapse0x257ead0() {
   return (neuron0x2568de0()*-0.181147);
}

double NNfunction_ss_uRcR::synapse0x257eb10() {
   return (neuron0x2569120()*0.165146);
}

double NNfunction_ss_uRcR::synapse0x257ee90() {
   return (neuron0x2564560()*-0.0180486);
}

double NNfunction_ss_uRcR::synapse0x2573460() {
   return (neuron0x25648a0()*-0.000317125);
}

double NNfunction_ss_uRcR::synapse0x25734a0() {
   return (neuron0x2564be0()*-0.00554936);
}

double NNfunction_ss_uRcR::synapse0x25734e0() {
   return (neuron0x2564f20()*7.90869);
}

double NNfunction_ss_uRcR::synapse0x2573730() {
   return (neuron0x2565260()*0.00678894);
}

double NNfunction_ss_uRcR::synapse0x2573770() {
   return (neuron0x25655a0()*-0.0201789);
}

double NNfunction_ss_uRcR::synapse0x25737b0() {
   return (neuron0x25658e0()*0.0224661);
}

double NNfunction_ss_uRcR::synapse0x2573a00() {
   return (neuron0x2565c20()*0.00580475);
}

double NNfunction_ss_uRcR::synapse0x2573a40() {
   return (neuron0x2565f60()*-0.0168723);
}

double NNfunction_ss_uRcR::synapse0x2573c90() {
   return (neuron0x25662a0()*-0.0127653);
}

double NNfunction_ss_uRcR::synapse0x2573cd0() {
   return (neuron0x25665e0()*-0.00876635);
}

double NNfunction_ss_uRcR::synapse0x2573d10() {
   return (neuron0x2566920()*0.0175384);
}

double NNfunction_ss_uRcR::synapse0x2573f60() {
   return (neuron0x2566c60()*-0.0230649);
}

double NNfunction_ss_uRcR::synapse0x2573fa0() {
   return (neuron0x2566fa0()*0.0133791);
}

double NNfunction_ss_uRcR::synapse0x25741f0() {
   return (neuron0x25672e0()*-0.105925);
}

double NNfunction_ss_uRcR::synapse0x2574230() {
   return (neuron0x2567620()*0.20943);
}

double NNfunction_ss_uRcR::synapse0x257ece0() {
   return (neuron0x2567960()*1.99271e-05);
}

double NNfunction_ss_uRcR::synapse0x257ed20() {
   return (neuron0x2567ec0()*0.00133408);
}

double NNfunction_ss_uRcR::synapse0x2574380() {
   return (neuron0x25680e0()*-0.00150099);
}

double NNfunction_ss_uRcR::synapse0x2574890() {
   return (neuron0x2568420()*0.000950358);
}

double NNfunction_ss_uRcR::synapse0x25748d0() {
   return (neuron0x2568760()*0.00623394);
}

double NNfunction_ss_uRcR::synapse0x2574910() {
   return (neuron0x2568aa0()*0.0118587);
}

double NNfunction_ss_uRcR::synapse0x2574b60() {
   return (neuron0x2568de0()*-0.00355618);
}

double NNfunction_ss_uRcR::synapse0x2574ba0() {
   return (neuron0x2569120()*-0.00509837);
}

double NNfunction_ss_uRcR::synapse0x2574450() {
   return (neuron0x2564560()*0.0202406);
}

double NNfunction_ss_uRcR::synapse0x2574490() {
   return (neuron0x25648a0()*-0.00175664);
}

double NNfunction_ss_uRcR::synapse0x25744d0() {
   return (neuron0x2564be0()*-0.0132166);
}

double NNfunction_ss_uRcR::synapse0x2574510() {
   return (neuron0x2564f20()*-12.6942);
}

double NNfunction_ss_uRcR::synapse0x2574e90() {
   return (neuron0x2565260()*-0.0130939);
}

double NNfunction_ss_uRcR::synapse0x25811e0() {
   return (neuron0x25655a0()*0.0455573);
}

double NNfunction_ss_uRcR::synapse0x2581220() {
   return (neuron0x25658e0()*-0.0218827);
}

double NNfunction_ss_uRcR::synapse0x2581260() {
   return (neuron0x2565c20()*-0.0208368);
}

double NNfunction_ss_uRcR::synapse0x25812a0() {
   return (neuron0x2565f60()*-0.00799925);
}

double NNfunction_ss_uRcR::synapse0x25812e0() {
   return (neuron0x25662a0()*-0.0169858);
}

double NNfunction_ss_uRcR::synapse0x2581320() {
   return (neuron0x25665e0()*-0.00879612);
}

double NNfunction_ss_uRcR::synapse0x2581360() {
   return (neuron0x2566920()*-0.0428955);
}

double NNfunction_ss_uRcR::synapse0x25813a0() {
   return (neuron0x2566c60()*0.0262078);
}

double NNfunction_ss_uRcR::synapse0x25813e0() {
   return (neuron0x2566fa0()*-0.0384813);
}

double NNfunction_ss_uRcR::synapse0x2581420() {
   return (neuron0x25672e0()*-0.619504);
}

double NNfunction_ss_uRcR::synapse0x2581460() {
   return (neuron0x2567620()*0.299608);
}

double NNfunction_ss_uRcR::synapse0x2574d70() {
   return (neuron0x2567960()*0.0325914);
}

double NNfunction_ss_uRcR::synapse0x2574db0() {
   return (neuron0x2567ec0()*-0.0161612);
}

double NNfunction_ss_uRcR::synapse0x25815b0() {
   return (neuron0x25680e0()*-0.000455028);
}

double NNfunction_ss_uRcR::synapse0x25815f0() {
   return (neuron0x2568420()*0.0526305);
}

double NNfunction_ss_uRcR::synapse0x2581630() {
   return (neuron0x2568760()*0.045971);
}

double NNfunction_ss_uRcR::synapse0x2581670() {
   return (neuron0x2568aa0()*-0.0011532);
}

double NNfunction_ss_uRcR::synapse0x25816b0() {
   return (neuron0x2568de0()*-0.00468432);
}

double NNfunction_ss_uRcR::synapse0x25816f0() {
   return (neuron0x2569120()*-0.0322794);
}

double NNfunction_ss_uRcR::synapse0x2581a70() {
   return (neuron0x2564560()*0.217056);
}

double NNfunction_ss_uRcR::synapse0x2581ab0() {
   return (neuron0x25648a0()*0.00600314);
}

double NNfunction_ss_uRcR::synapse0x2581af0() {
   return (neuron0x2564be0()*0.176927);
}

double NNfunction_ss_uRcR::synapse0x2581b30() {
   return (neuron0x2564f20()*-0.858014);
}

double NNfunction_ss_uRcR::synapse0x2581b70() {
   return (neuron0x2565260()*0.253263);
}

double NNfunction_ss_uRcR::synapse0x2581bb0() {
   return (neuron0x25655a0()*-0.202877);
}

double NNfunction_ss_uRcR::synapse0x2581bf0() {
   return (neuron0x25658e0()*0.628013);
}

double NNfunction_ss_uRcR::synapse0x2581c30() {
   return (neuron0x2565c20()*-0.937938);
}

double NNfunction_ss_uRcR::synapse0x2581c70() {
   return (neuron0x2565f60()*0.601388);
}

double NNfunction_ss_uRcR::synapse0x2581cb0() {
   return (neuron0x25662a0()*-0.197442);
}

double NNfunction_ss_uRcR::synapse0x2581cf0() {
   return (neuron0x25665e0()*0.250775);
}

double NNfunction_ss_uRcR::synapse0x2581d30() {
   return (neuron0x2566920()*2.07857);
}

double NNfunction_ss_uRcR::synapse0x2581d70() {
   return (neuron0x2566c60()*-0.566621);
}

double NNfunction_ss_uRcR::synapse0x2581db0() {
   return (neuron0x2566fa0()*-0.824538);
}

double NNfunction_ss_uRcR::synapse0x2581df0() {
   return (neuron0x25672e0()*-0.326659);
}

double NNfunction_ss_uRcR::synapse0x2581e30() {
   return (neuron0x2567620()*-0.292612);
}

double NNfunction_ss_uRcR::synapse0x25818c0() {
   return (neuron0x2567960()*-0.51683);
}

double NNfunction_ss_uRcR::synapse0x2581900() {
   return (neuron0x2567ec0()*0.131748);
}

double NNfunction_ss_uRcR::synapse0x2581f80() {
   return (neuron0x25680e0()*-0.371308);
}

double NNfunction_ss_uRcR::synapse0x2581fc0() {
   return (neuron0x2568420()*0.307464);
}

double NNfunction_ss_uRcR::synapse0x2582000() {
   return (neuron0x2568760()*0.597955);
}

double NNfunction_ss_uRcR::synapse0x2582040() {
   return (neuron0x2568aa0()*-0.152122);
}

double NNfunction_ss_uRcR::synapse0x2582080() {
   return (neuron0x2568de0()*-0.117786);
}

double NNfunction_ss_uRcR::synapse0x25820c0() {
   return (neuron0x2569120()*0.556641);
}

double NNfunction_ss_uRcR::synapse0x2582440() {
   return (neuron0x2564560()*-0.0130532);
}

double NNfunction_ss_uRcR::synapse0x2582480() {
   return (neuron0x25648a0()*-0.0199695);
}

double NNfunction_ss_uRcR::synapse0x25824c0() {
   return (neuron0x2564be0()*-0.0104779);
}

double NNfunction_ss_uRcR::synapse0x2582500() {
   return (neuron0x2564f20()*-1.23202);
}

double NNfunction_ss_uRcR::synapse0x2582540() {
   return (neuron0x2565260()*0.0179203);
}

double NNfunction_ss_uRcR::synapse0x2582580() {
   return (neuron0x25655a0()*0.00929132);
}

double NNfunction_ss_uRcR::synapse0x25825c0() {
   return (neuron0x25658e0()*0.020501);
}

double NNfunction_ss_uRcR::synapse0x2582600() {
   return (neuron0x2565c20()*0.0781129);
}

double NNfunction_ss_uRcR::synapse0x2582640() {
   return (neuron0x2565f60()*0.0387333);
}

double NNfunction_ss_uRcR::synapse0x2582680() {
   return (neuron0x25662a0()*0.00676476);
}

double NNfunction_ss_uRcR::synapse0x25826c0() {
   return (neuron0x25665e0()*-0.0239911);
}

double NNfunction_ss_uRcR::synapse0x2582700() {
   return (neuron0x2566920()*-0.0478885);
}

double NNfunction_ss_uRcR::synapse0x2582740() {
   return (neuron0x2566c60()*-0.0216869);
}

double NNfunction_ss_uRcR::synapse0x2582780() {
   return (neuron0x2566fa0()*0.0337702);
}

double NNfunction_ss_uRcR::synapse0x25827c0() {
   return (neuron0x25672e0()*0.116914);
}

double NNfunction_ss_uRcR::synapse0x2582800() {
   return (neuron0x2567620()*0.417373);
}

double NNfunction_ss_uRcR::synapse0x2582290() {
   return (neuron0x2567960()*0.0178679);
}

double NNfunction_ss_uRcR::synapse0x25822d0() {
   return (neuron0x2567ec0()*-0.0669877);
}

double NNfunction_ss_uRcR::synapse0x2582950() {
   return (neuron0x25680e0()*-0.0293038);
}

double NNfunction_ss_uRcR::synapse0x2582990() {
   return (neuron0x2568420()*0.0104495);
}

double NNfunction_ss_uRcR::synapse0x25829d0() {
   return (neuron0x2568760()*-0.0238116);
}

double NNfunction_ss_uRcR::synapse0x2582a10() {
   return (neuron0x2568aa0()*-0.0616466);
}

double NNfunction_ss_uRcR::synapse0x2582a50() {
   return (neuron0x2568de0()*-0.0459357);
}

double NNfunction_ss_uRcR::synapse0x2582a90() {
   return (neuron0x2569120()*0.0159159);
}

double NNfunction_ss_uRcR::synapse0x2582e10() {
   return (neuron0x2564560()*-0.332211);
}

double NNfunction_ss_uRcR::synapse0x2582e50() {
   return (neuron0x25648a0()*1.20573);
}

double NNfunction_ss_uRcR::synapse0x2582e90() {
   return (neuron0x2564be0()*0.76015);
}

double NNfunction_ss_uRcR::synapse0x2582ed0() {
   return (neuron0x2564f20()*0.641354);
}

double NNfunction_ss_uRcR::synapse0x2582f10() {
   return (neuron0x2565260()*0.0932552);
}

double NNfunction_ss_uRcR::synapse0x2582f50() {
   return (neuron0x25655a0()*0.704471);
}

double NNfunction_ss_uRcR::synapse0x2582f90() {
   return (neuron0x25658e0()*-0.104207);
}

double NNfunction_ss_uRcR::synapse0x2582fd0() {
   return (neuron0x2565c20()*0.443026);
}

double NNfunction_ss_uRcR::synapse0x2583010() {
   return (neuron0x2565f60()*0.438317);
}

double NNfunction_ss_uRcR::synapse0x2583050() {
   return (neuron0x25662a0()*0.258987);
}

double NNfunction_ss_uRcR::synapse0x2583090() {
   return (neuron0x25665e0()*-0.448573);
}

double NNfunction_ss_uRcR::synapse0x25830d0() {
   return (neuron0x2566920()*0.579875);
}

double NNfunction_ss_uRcR::synapse0x2583110() {
   return (neuron0x2566c60()*0.0300339);
}

double NNfunction_ss_uRcR::synapse0x2583150() {
   return (neuron0x2566fa0()*-0.294068);
}

double NNfunction_ss_uRcR::synapse0x2583190() {
   return (neuron0x25672e0()*-0.173966);
}

double NNfunction_ss_uRcR::synapse0x25831d0() {
   return (neuron0x2567620()*0.410649);
}

double NNfunction_ss_uRcR::synapse0x2582c60() {
   return (neuron0x2567960()*-0.335301);
}

double NNfunction_ss_uRcR::synapse0x2582ca0() {
   return (neuron0x2567ec0()*0.0335216);
}

double NNfunction_ss_uRcR::synapse0x2583320() {
   return (neuron0x25680e0()*0.654407);
}

double NNfunction_ss_uRcR::synapse0x2583360() {
   return (neuron0x2568420()*0.309247);
}

double NNfunction_ss_uRcR::synapse0x25833a0() {
   return (neuron0x2568760()*0.185778);
}

double NNfunction_ss_uRcR::synapse0x25833e0() {
   return (neuron0x2568aa0()*0.299372);
}

double NNfunction_ss_uRcR::synapse0x2583420() {
   return (neuron0x2568de0()*0.0947817);
}

double NNfunction_ss_uRcR::synapse0x2583460() {
   return (neuron0x2569120()*0.383827);
}

double NNfunction_ss_uRcR::synapse0x25837e0() {
   return (neuron0x2564560()*0.00384859);
}

double NNfunction_ss_uRcR::synapse0x2583820() {
   return (neuron0x25648a0()*0.00755212);
}

double NNfunction_ss_uRcR::synapse0x2583860() {
   return (neuron0x2564be0()*-0.00819037);
}

double NNfunction_ss_uRcR::synapse0x25838a0() {
   return (neuron0x2564f20()*-0.110164);
}

double NNfunction_ss_uRcR::synapse0x25838e0() {
   return (neuron0x2565260()*-0.00359846);
}

double NNfunction_ss_uRcR::synapse0x2583920() {
   return (neuron0x25655a0()*-0.0178672);
}

double NNfunction_ss_uRcR::synapse0x2583960() {
   return (neuron0x25658e0()*-0.00988632);
}

double NNfunction_ss_uRcR::synapse0x25839a0() {
   return (neuron0x2565c20()*0.0135522);
}

double NNfunction_ss_uRcR::synapse0x25839e0() {
   return (neuron0x2565f60()*-0.030479);
}

double NNfunction_ss_uRcR::synapse0x2583a20() {
   return (neuron0x25662a0()*0.00937758);
}

double NNfunction_ss_uRcR::synapse0x2583a60() {
   return (neuron0x25665e0()*0.0156571);
}

double NNfunction_ss_uRcR::synapse0x2583aa0() {
   return (neuron0x2566920()*0.0187932);
}

double NNfunction_ss_uRcR::synapse0x2583ae0() {
   return (neuron0x2566c60()*-0.00643018);
}

double NNfunction_ss_uRcR::synapse0x2583b20() {
   return (neuron0x2566fa0()*0.00656378);
}

double NNfunction_ss_uRcR::synapse0x2583b60() {
   return (neuron0x25672e0()*0.966264);
}

double NNfunction_ss_uRcR::synapse0x2583ba0() {
   return (neuron0x2567620()*0.156941);
}

double NNfunction_ss_uRcR::synapse0x2583630() {
   return (neuron0x2567960()*0.0163733);
}

double NNfunction_ss_uRcR::synapse0x2583670() {
   return (neuron0x2567ec0()*0.0184068);
}

double NNfunction_ss_uRcR::synapse0x2583cf0() {
   return (neuron0x25680e0()*0.0106498);
}

double NNfunction_ss_uRcR::synapse0x2583d30() {
   return (neuron0x2568420()*-0.00616918);
}

double NNfunction_ss_uRcR::synapse0x2583d70() {
   return (neuron0x2568760()*0.00410513);
}

double NNfunction_ss_uRcR::synapse0x2583db0() {
   return (neuron0x2568aa0()*0.0161635);
}

double NNfunction_ss_uRcR::synapse0x2583df0() {
   return (neuron0x2568de0()*0.01157);
}

double NNfunction_ss_uRcR::synapse0x2583e30() {
   return (neuron0x2569120()*-0.0136042);
}

double NNfunction_ss_uRcR::synapse0x25841b0() {
   return (neuron0x2564560()*0.518349);
}

double NNfunction_ss_uRcR::synapse0x25841f0() {
   return (neuron0x25648a0()*0.236875);
}

double NNfunction_ss_uRcR::synapse0x2584230() {
   return (neuron0x2564be0()*0.176276);
}

double NNfunction_ss_uRcR::synapse0x2584270() {
   return (neuron0x2564f20()*0.495495);
}

double NNfunction_ss_uRcR::synapse0x25842b0() {
   return (neuron0x2565260()*0.748947);
}

double NNfunction_ss_uRcR::synapse0x25842f0() {
   return (neuron0x25655a0()*-0.557871);
}

double NNfunction_ss_uRcR::synapse0x2584330() {
   return (neuron0x25658e0()*0.0723152);
}

double NNfunction_ss_uRcR::synapse0x2584370() {
   return (neuron0x2565c20()*-0.789731);
}

double NNfunction_ss_uRcR::synapse0x25843b0() {
   return (neuron0x2565f60()*0.355728);
}

double NNfunction_ss_uRcR::synapse0x25843f0() {
   return (neuron0x25662a0()*-0.0742559);
}

double NNfunction_ss_uRcR::synapse0x2584430() {
   return (neuron0x25665e0()*-0.150339);
}

double NNfunction_ss_uRcR::synapse0x2584470() {
   return (neuron0x2566920()*0.174893);
}

double NNfunction_ss_uRcR::synapse0x25844b0() {
   return (neuron0x2566c60()*0.248751);
}

double NNfunction_ss_uRcR::synapse0x25844f0() {
   return (neuron0x2566fa0()*0.27198);
}

double NNfunction_ss_uRcR::synapse0x2584530() {
   return (neuron0x25672e0()*-0.852225);
}

double NNfunction_ss_uRcR::synapse0x2584570() {
   return (neuron0x2567620()*-0.935802);
}

double NNfunction_ss_uRcR::synapse0x2584000() {
   return (neuron0x2567960()*-0.823868);
}

double NNfunction_ss_uRcR::synapse0x2584040() {
   return (neuron0x2567ec0()*0.212543);
}

double NNfunction_ss_uRcR::synapse0x25846c0() {
   return (neuron0x25680e0()*0.288295);
}

double NNfunction_ss_uRcR::synapse0x2584700() {
   return (neuron0x2568420()*-0.168916);
}

double NNfunction_ss_uRcR::synapse0x2584740() {
   return (neuron0x2568760()*0.647081);
}

double NNfunction_ss_uRcR::synapse0x2584780() {
   return (neuron0x2568aa0()*0.156593);
}

double NNfunction_ss_uRcR::synapse0x25847c0() {
   return (neuron0x2568de0()*-0.329215);
}

double NNfunction_ss_uRcR::synapse0x2584800() {
   return (neuron0x2569120()*-0.209911);
}

double NNfunction_ss_uRcR::synapse0x2584b80() {
   return (neuron0x2564560()*0.0991184);
}

double NNfunction_ss_uRcR::synapse0x2584bc0() {
   return (neuron0x25648a0()*-0.0370134);
}

double NNfunction_ss_uRcR::synapse0x2584c00() {
   return (neuron0x2564be0()*0.0244021);
}

double NNfunction_ss_uRcR::synapse0x2584c40() {
   return (neuron0x2564f20()*0.0377886);
}

double NNfunction_ss_uRcR::synapse0x2584c80() {
   return (neuron0x2565260()*-0.104968);
}

double NNfunction_ss_uRcR::synapse0x2584cc0() {
   return (neuron0x25655a0()*0.150609);
}

double NNfunction_ss_uRcR::synapse0x2584d00() {
   return (neuron0x25658e0()*1.07161);
}

double NNfunction_ss_uRcR::synapse0x2584d40() {
   return (neuron0x2565c20()*-0.066019);
}

double NNfunction_ss_uRcR::synapse0x2584d80() {
   return (neuron0x2565f60()*0.0128393);
}

double NNfunction_ss_uRcR::synapse0x2584dc0() {
   return (neuron0x25662a0()*0.0605356);
}

double NNfunction_ss_uRcR::synapse0x2584e00() {
   return (neuron0x25665e0()*0.189107);
}

double NNfunction_ss_uRcR::synapse0x2584e40() {
   return (neuron0x2566920()*0.20323);
}

double NNfunction_ss_uRcR::synapse0x2584e80() {
   return (neuron0x2566c60()*0.011727);
}

double NNfunction_ss_uRcR::synapse0x2584ec0() {
   return (neuron0x2566fa0()*-0.0105342);
}

double NNfunction_ss_uRcR::synapse0x2584f00() {
   return (neuron0x25672e0()*0.146366);
}

double NNfunction_ss_uRcR::synapse0x2584f40() {
   return (neuron0x2567620()*-0.186716);
}

double NNfunction_ss_uRcR::synapse0x25849d0() {
   return (neuron0x2567960()*0.103609);
}

double NNfunction_ss_uRcR::synapse0x2584a10() {
   return (neuron0x2567ec0()*0.0654554);
}

double NNfunction_ss_uRcR::synapse0x2585090() {
   return (neuron0x25680e0()*0.158618);
}

double NNfunction_ss_uRcR::synapse0x25850d0() {
   return (neuron0x2568420()*-0.127191);
}

double NNfunction_ss_uRcR::synapse0x2585110() {
   return (neuron0x2568760()*0.0177595);
}

double NNfunction_ss_uRcR::synapse0x2585150() {
   return (neuron0x2568aa0()*-0.0313303);
}

double NNfunction_ss_uRcR::synapse0x2585190() {
   return (neuron0x2568de0()*0.0431728);
}

double NNfunction_ss_uRcR::synapse0x25851d0() {
   return (neuron0x2569120()*0.0372471);
}

double NNfunction_ss_uRcR::synapse0x2585550() {
   return (neuron0x2564560()*-0.257579);
}

double NNfunction_ss_uRcR::synapse0x2585590() {
   return (neuron0x25648a0()*0.168253);
}

double NNfunction_ss_uRcR::synapse0x25855d0() {
   return (neuron0x2564be0()*0.0277237);
}

double NNfunction_ss_uRcR::synapse0x2585610() {
   return (neuron0x2564f20()*-0.224126);
}

double NNfunction_ss_uRcR::synapse0x2585650() {
   return (neuron0x2565260()*0.462944);
}

double NNfunction_ss_uRcR::synapse0x2585690() {
   return (neuron0x25655a0()*0.441898);
}

double NNfunction_ss_uRcR::synapse0x25856d0() {
   return (neuron0x25658e0()*0.241492);
}

double NNfunction_ss_uRcR::synapse0x2585710() {
   return (neuron0x2565c20()*1.02608);
}

double NNfunction_ss_uRcR::synapse0x2585750() {
   return (neuron0x2565f60()*-0.189164);
}

double NNfunction_ss_uRcR::synapse0x2585790() {
   return (neuron0x25662a0()*0.0382641);
}

double NNfunction_ss_uRcR::synapse0x25857d0() {
   return (neuron0x25665e0()*0.179471);
}

double NNfunction_ss_uRcR::synapse0x2585810() {
   return (neuron0x2566920()*-0.195558);
}

double NNfunction_ss_uRcR::synapse0x2585850() {
   return (neuron0x2566c60()*0.108547);
}

double NNfunction_ss_uRcR::synapse0x2585890() {
   return (neuron0x2566fa0()*0.441075);
}

double NNfunction_ss_uRcR::synapse0x25858d0() {
   return (neuron0x25672e0()*0.415069);
}

double NNfunction_ss_uRcR::synapse0x2585910() {
   return (neuron0x2567620()*0.998832);
}

double NNfunction_ss_uRcR::synapse0x25853a0() {
   return (neuron0x2567960()*0.160563);
}

double NNfunction_ss_uRcR::synapse0x25853e0() {
   return (neuron0x2567ec0()*-0.15131);
}

double NNfunction_ss_uRcR::synapse0x2585a60() {
   return (neuron0x25680e0()*0.00106031);
}

double NNfunction_ss_uRcR::synapse0x2585aa0() {
   return (neuron0x2568420()*-0.124647);
}

double NNfunction_ss_uRcR::synapse0x2585ae0() {
   return (neuron0x2568760()*0.0662016);
}

double NNfunction_ss_uRcR::synapse0x2585b20() {
   return (neuron0x2568aa0()*0.329193);
}

double NNfunction_ss_uRcR::synapse0x2585b60() {
   return (neuron0x2568de0()*0.173229);
}

double NNfunction_ss_uRcR::synapse0x2585ba0() {
   return (neuron0x2569120()*-0.160027);
}

double NNfunction_ss_uRcR::synapse0x256e650() {
   return (neuron0x2564560()*0.00475707);
}

double NNfunction_ss_uRcR::synapse0x256e690() {
   return (neuron0x25648a0()*0.0269272);
}

double NNfunction_ss_uRcR::synapse0x256e6d0() {
   return (neuron0x2564be0()*0.00625141);
}

double NNfunction_ss_uRcR::synapse0x256e710() {
   return (neuron0x2564f20()*-0.0839732);
}

double NNfunction_ss_uRcR::synapse0x256e750() {
   return (neuron0x2565260()*-0.0182754);
}

double NNfunction_ss_uRcR::synapse0x256e790() {
   return (neuron0x25655a0()*0.000168083);
}

double NNfunction_ss_uRcR::synapse0x256e7d0() {
   return (neuron0x25658e0()*0.0119244);
}

double NNfunction_ss_uRcR::synapse0x256e810() {
   return (neuron0x2565c20()*0.000415363);
}

double NNfunction_ss_uRcR::synapse0x2586330() {
   return (neuron0x2565f60()*0.00613237);
}

double NNfunction_ss_uRcR::synapse0x2586370() {
   return (neuron0x25662a0()*-0.0207262);
}

double NNfunction_ss_uRcR::synapse0x25863b0() {
   return (neuron0x25665e0()*0.00600831);
}

double NNfunction_ss_uRcR::synapse0x25863f0() {
   return (neuron0x2566920()*0.0190886);
}

double NNfunction_ss_uRcR::synapse0x2586430() {
   return (neuron0x2566c60()*0.0260334);
}

double NNfunction_ss_uRcR::synapse0x2586470() {
   return (neuron0x2566fa0()*0.000119744);
}

double NNfunction_ss_uRcR::synapse0x25864b0() {
   return (neuron0x25672e0()*0.323643);
}

double NNfunction_ss_uRcR::synapse0x25864f0() {
   return (neuron0x2567620()*0.986326);
}

double NNfunction_ss_uRcR::synapse0x2585d70() {
   return (neuron0x2567960()*0.0197114);
}

double NNfunction_ss_uRcR::synapse0x2585db0() {
   return (neuron0x2567ec0()*-0.0191957);
}

double NNfunction_ss_uRcR::synapse0x2586640() {
   return (neuron0x25680e0()*-0.00727615);
}

double NNfunction_ss_uRcR::synapse0x2586680() {
   return (neuron0x2568420()*0.0179112);
}

double NNfunction_ss_uRcR::synapse0x25866c0() {
   return (neuron0x2568760()*-0.000475972);
}

double NNfunction_ss_uRcR::synapse0x2586700() {
   return (neuron0x2568aa0()*0.00784604);
}

double NNfunction_ss_uRcR::synapse0x2586740() {
   return (neuron0x2568de0()*-0.00159017);
}

double NNfunction_ss_uRcR::synapse0x2586780() {
   return (neuron0x2569120()*0.00267306);
}

double NNfunction_ss_uRcR::synapse0x2586b00() {
   return (neuron0x2564560()*0.024946);
}

double NNfunction_ss_uRcR::synapse0x2586b40() {
   return (neuron0x25648a0()*0.0176206);
}

double NNfunction_ss_uRcR::synapse0x2586b80() {
   return (neuron0x2564be0()*0.0114106);
}

double NNfunction_ss_uRcR::synapse0x2586bc0() {
   return (neuron0x2564f20()*-13.4317);
}

double NNfunction_ss_uRcR::synapse0x2586c00() {
   return (neuron0x2565260()*-0.0460061);
}

double NNfunction_ss_uRcR::synapse0x2586c40() {
   return (neuron0x25655a0()*0.028308);
}

double NNfunction_ss_uRcR::synapse0x2586c80() {
   return (neuron0x25658e0()*-0.024291);
}

double NNfunction_ss_uRcR::synapse0x2586cc0() {
   return (neuron0x2565c20()*-0.00733312);
}

double NNfunction_ss_uRcR::synapse0x2586d00() {
   return (neuron0x2565f60()*0.0218975);
}

double NNfunction_ss_uRcR::synapse0x2586d40() {
   return (neuron0x25662a0()*0.0145963);
}

double NNfunction_ss_uRcR::synapse0x2586d80() {
   return (neuron0x25665e0()*0.026011);
}

double NNfunction_ss_uRcR::synapse0x2586dc0() {
   return (neuron0x2566920()*-0.0184693);
}

double NNfunction_ss_uRcR::synapse0x2586e00() {
   return (neuron0x2566c60()*0.0508923);
}

double NNfunction_ss_uRcR::synapse0x2586e40() {
   return (neuron0x2566fa0()*-0.0357736);
}

double NNfunction_ss_uRcR::synapse0x2586e80() {
   return (neuron0x25672e0()*0.161213);
}

double NNfunction_ss_uRcR::synapse0x2586ec0() {
   return (neuron0x2567620()*-0.421094);
}

double NNfunction_ss_uRcR::synapse0x2586950() {
   return (neuron0x2567960()*-0.0194863);
}

double NNfunction_ss_uRcR::synapse0x2586990() {
   return (neuron0x2567ec0()*-0.0145112);
}

double NNfunction_ss_uRcR::synapse0x2587010() {
   return (neuron0x25680e0()*0.017038);
}

double NNfunction_ss_uRcR::synapse0x2587050() {
   return (neuron0x2568420()*0.0197195);
}

double NNfunction_ss_uRcR::synapse0x2587090() {
   return (neuron0x2568760()*-0.0369193);
}

double NNfunction_ss_uRcR::synapse0x25870d0() {
   return (neuron0x2568aa0()*-0.0266044);
}

double NNfunction_ss_uRcR::synapse0x2587110() {
   return (neuron0x2568de0()*0.00219137);
}

double NNfunction_ss_uRcR::synapse0x2587150() {
   return (neuron0x2569120()*-0.0115234);
}

double NNfunction_ss_uRcR::synapse0x25874d0() {
   return (neuron0x2564560()*-0.0163577);
}

double NNfunction_ss_uRcR::synapse0x2587510() {
   return (neuron0x25648a0()*-0.169763);
}

double NNfunction_ss_uRcR::synapse0x2587550() {
   return (neuron0x2564be0()*0.28462);
}

double NNfunction_ss_uRcR::synapse0x2587590() {
   return (neuron0x2564f20()*-0.264844);
}

double NNfunction_ss_uRcR::synapse0x25875d0() {
   return (neuron0x2565260()*0.615616);
}

double NNfunction_ss_uRcR::synapse0x2587610() {
   return (neuron0x25655a0()*-0.208485);
}

double NNfunction_ss_uRcR::synapse0x2587650() {
   return (neuron0x25658e0()*-0.176807);
}

double NNfunction_ss_uRcR::synapse0x2587690() {
   return (neuron0x2565c20()*0.104355);
}

double NNfunction_ss_uRcR::synapse0x25876d0() {
   return (neuron0x2565f60()*0.0951742);
}

double NNfunction_ss_uRcR::synapse0x2587710() {
   return (neuron0x25662a0()*1.73443);
}

double NNfunction_ss_uRcR::synapse0x2587750() {
   return (neuron0x25665e0()*-0.377969);
}

double NNfunction_ss_uRcR::synapse0x2587790() {
   return (neuron0x2566920()*-0.184717);
}

double NNfunction_ss_uRcR::synapse0x25877d0() {
   return (neuron0x2566c60()*-0.16304);
}

double NNfunction_ss_uRcR::synapse0x2587810() {
   return (neuron0x2566fa0()*-0.0829546);
}

double NNfunction_ss_uRcR::synapse0x2587850() {
   return (neuron0x25672e0()*-0.274115);
}

double NNfunction_ss_uRcR::synapse0x2587890() {
   return (neuron0x2567620()*0.0591051);
}

double NNfunction_ss_uRcR::synapse0x2587320() {
   return (neuron0x2567960()*-0.160181);
}

double NNfunction_ss_uRcR::synapse0x2587360() {
   return (neuron0x2567ec0()*-0.393777);
}

double NNfunction_ss_uRcR::synapse0x2577e90() {
   return (neuron0x25680e0()*0.116232);
}

double NNfunction_ss_uRcR::synapse0x2577ed0() {
   return (neuron0x2568420()*-0.220844);
}

double NNfunction_ss_uRcR::synapse0x2577f10() {
   return (neuron0x2568760()*0.150849);
}

double NNfunction_ss_uRcR::synapse0x2577f50() {
   return (neuron0x2568aa0()*-0.148598);
}

double NNfunction_ss_uRcR::synapse0x2577f90() {
   return (neuron0x2568de0()*0.380557);
}

double NNfunction_ss_uRcR::synapse0x2577fd0() {
   return (neuron0x2569120()*-0.264753);
}

double NNfunction_ss_uRcR::synapse0x2578350() {
   return (neuron0x2564560()*0.144865);
}

double NNfunction_ss_uRcR::synapse0x2578390() {
   return (neuron0x25648a0()*0.262368);
}

double NNfunction_ss_uRcR::synapse0x25783d0() {
   return (neuron0x2564be0()*0.0727902);
}

double NNfunction_ss_uRcR::synapse0x2578410() {
   return (neuron0x2564f20()*-1.00873);
}

double NNfunction_ss_uRcR::synapse0x2578450() {
   return (neuron0x2565260()*0.00116037);
}

double NNfunction_ss_uRcR::synapse0x2578490() {
   return (neuron0x25655a0()*0.134069);
}

double NNfunction_ss_uRcR::synapse0x25784d0() {
   return (neuron0x25658e0()*0.155245);
}

double NNfunction_ss_uRcR::synapse0x2578510() {
   return (neuron0x2565c20()*-0.0507314);
}

double NNfunction_ss_uRcR::synapse0x2578550() {
   return (neuron0x2565f60()*-0.226468);
}

double NNfunction_ss_uRcR::synapse0x2578590() {
   return (neuron0x25662a0()*-0.0538843);
}

double NNfunction_ss_uRcR::synapse0x25785d0() {
   return (neuron0x25665e0()*-0.00202916);
}

double NNfunction_ss_uRcR::synapse0x2578610() {
   return (neuron0x2566920()*0.00103119);
}

double NNfunction_ss_uRcR::synapse0x2578650() {
   return (neuron0x2566c60()*0.00159299);
}

double NNfunction_ss_uRcR::synapse0x2578690() {
   return (neuron0x2566fa0()*-0.0430944);
}

double NNfunction_ss_uRcR::synapse0x25786d0() {
   return (neuron0x25672e0()*0.171893);
}

double NNfunction_ss_uRcR::synapse0x2578710() {
   return (neuron0x2567620()*0.118668);
}

double NNfunction_ss_uRcR::synapse0x25781a0() {
   return (neuron0x2567960()*0.0993616);
}

double NNfunction_ss_uRcR::synapse0x25781e0() {
   return (neuron0x2567ec0()*0.069809);
}

double NNfunction_ss_uRcR::synapse0x2578860() {
   return (neuron0x25680e0()*0.0764884);
}

double NNfunction_ss_uRcR::synapse0x25788a0() {
   return (neuron0x2568420()*-0.140789);
}

double NNfunction_ss_uRcR::synapse0x25788e0() {
   return (neuron0x2568760()*0.0533617);
}

double NNfunction_ss_uRcR::synapse0x2578920() {
   return (neuron0x2568aa0()*0.122376);
}

double NNfunction_ss_uRcR::synapse0x2578960() {
   return (neuron0x2568de0()*0.121119);
}

double NNfunction_ss_uRcR::synapse0x25789a0() {
   return (neuron0x2569120()*0.030536);
}

double NNfunction_ss_uRcR::synapse0x2578d20() {
   return (neuron0x2564560()*-0.627805);
}

double NNfunction_ss_uRcR::synapse0x2578d60() {
   return (neuron0x25648a0()*0.302345);
}

double NNfunction_ss_uRcR::synapse0x2578da0() {
   return (neuron0x2564be0()*-0.0645017);
}

double NNfunction_ss_uRcR::synapse0x2578de0() {
   return (neuron0x2564f20()*-0.738056);
}

double NNfunction_ss_uRcR::synapse0x2578e20() {
   return (neuron0x2565260()*-0.291193);
}

double NNfunction_ss_uRcR::synapse0x2578e60() {
   return (neuron0x25655a0()*0.0629868);
}

double NNfunction_ss_uRcR::synapse0x2578ea0() {
   return (neuron0x25658e0()*-0.752997);
}

double NNfunction_ss_uRcR::synapse0x2578ee0() {
   return (neuron0x2565c20()*0.04229);
}

double NNfunction_ss_uRcR::synapse0x2578f20() {
   return (neuron0x2565f60()*0.0682567);
}

double NNfunction_ss_uRcR::synapse0x2578f60() {
   return (neuron0x25662a0()*0.00900588);
}

double NNfunction_ss_uRcR::synapse0x2578fa0() {
   return (neuron0x25665e0()*-0.0445545);
}

double NNfunction_ss_uRcR::synapse0x2578fe0() {
   return (neuron0x2566920()*0.323588);
}

double NNfunction_ss_uRcR::synapse0x2579020() {
   return (neuron0x2566c60()*-0.369577);
}

double NNfunction_ss_uRcR::synapse0x2579060() {
   return (neuron0x2566fa0()*-0.390661);
}

double NNfunction_ss_uRcR::synapse0x25790a0() {
   return (neuron0x25672e0()*0.223271);
}

double NNfunction_ss_uRcR::synapse0x25790e0() {
   return (neuron0x2567620()*0.0849154);
}

double NNfunction_ss_uRcR::synapse0x2578b70() {
   return (neuron0x2567960()*-0.211853);
}

double NNfunction_ss_uRcR::synapse0x2578bb0() {
   return (neuron0x2567ec0()*0.287903);
}

double NNfunction_ss_uRcR::synapse0x2579230() {
   return (neuron0x25680e0()*-1.26903);
}

double NNfunction_ss_uRcR::synapse0x2579270() {
   return (neuron0x2568420()*0.0626716);
}

double NNfunction_ss_uRcR::synapse0x25792b0() {
   return (neuron0x2568760()*0.290502);
}

double NNfunction_ss_uRcR::synapse0x25792f0() {
   return (neuron0x2568aa0()*-0.0829016);
}

double NNfunction_ss_uRcR::synapse0x2579330() {
   return (neuron0x2568de0()*-0.292297);
}

double NNfunction_ss_uRcR::synapse0x2579370() {
   return (neuron0x2569120()*-0.360949);
}

double NNfunction_ss_uRcR::synapse0x25796f0() {
   return (neuron0x2564560()*-0.0192524);
}

double NNfunction_ss_uRcR::synapse0x2579730() {
   return (neuron0x25648a0()*-0.14411);
}

double NNfunction_ss_uRcR::synapse0x2579770() {
   return (neuron0x2564be0()*0.0102781);
}

double NNfunction_ss_uRcR::synapse0x25797b0() {
   return (neuron0x2564f20()*-0.444325);
}

double NNfunction_ss_uRcR::synapse0x25797f0() {
   return (neuron0x2565260()*0.46259);
}

double NNfunction_ss_uRcR::synapse0x2579830() {
   return (neuron0x25655a0()*0.326384);
}

double NNfunction_ss_uRcR::synapse0x2579870() {
   return (neuron0x25658e0()*-0.0818038);
}

double NNfunction_ss_uRcR::synapse0x25798b0() {
   return (neuron0x2565c20()*-0.903068);
}

double NNfunction_ss_uRcR::synapse0x25798f0() {
   return (neuron0x2565f60()*0.163719);
}

double NNfunction_ss_uRcR::synapse0x2579930() {
   return (neuron0x25662a0()*-0.13708);
}

double NNfunction_ss_uRcR::synapse0x2579970() {
   return (neuron0x25665e0()*-0.235247);
}

double NNfunction_ss_uRcR::synapse0x25799b0() {
   return (neuron0x2566920()*-0.1132);
}

double NNfunction_ss_uRcR::synapse0x25799f0() {
   return (neuron0x2566c60()*-0.0342238);
}

double NNfunction_ss_uRcR::synapse0x2579a30() {
   return (neuron0x2566fa0()*0.106539);
}

double NNfunction_ss_uRcR::synapse0x2579a70() {
   return (neuron0x25672e0()*0.269711);
}

double NNfunction_ss_uRcR::synapse0x2579ab0() {
   return (neuron0x2567620()*0.335262);
}

double NNfunction_ss_uRcR::synapse0x2579540() {
   return (neuron0x2567960()*0.224646);
}

double NNfunction_ss_uRcR::synapse0x2579580() {
   return (neuron0x2567ec0()*-0.152277);
}

double NNfunction_ss_uRcR::synapse0x2579c00() {
   return (neuron0x25680e0()*-0.173991);
}

double NNfunction_ss_uRcR::synapse0x2579c40() {
   return (neuron0x2568420()*0.0223762);
}

double NNfunction_ss_uRcR::synapse0x2579c80() {
   return (neuron0x2568760()*0.133909);
}

double NNfunction_ss_uRcR::synapse0x2579cc0() {
   return (neuron0x2568aa0()*0.0770803);
}

double NNfunction_ss_uRcR::synapse0x2579d00() {
   return (neuron0x2568de0()*-0.0301384);
}

double NNfunction_ss_uRcR::synapse0x2579d40() {
   return (neuron0x2569120()*-0.0458984);
}

double NNfunction_ss_uRcR::synapse0x258bc10() {
   return (neuron0x2564560()*-0.0261725);
}

double NNfunction_ss_uRcR::synapse0x258bc50() {
   return (neuron0x25648a0()*-0.132098);
}

double NNfunction_ss_uRcR::synapse0x258bc90() {
   return (neuron0x2564be0()*-0.0330247);
}

double NNfunction_ss_uRcR::synapse0x258bcd0() {
   return (neuron0x2564f20()*1.41518);
}

double NNfunction_ss_uRcR::synapse0x258bd10() {
   return (neuron0x2565260()*-0.0729417);
}

double NNfunction_ss_uRcR::synapse0x258bd50() {
   return (neuron0x25655a0()*-0.0800286);
}

double NNfunction_ss_uRcR::synapse0x258bd90() {
   return (neuron0x25658e0()*-0.0783108);
}

double NNfunction_ss_uRcR::synapse0x258bdd0() {
   return (neuron0x2565c20()*-0.00498149);
}

double NNfunction_ss_uRcR::synapse0x258be10() {
   return (neuron0x2565f60()*0.0792919);
}

double NNfunction_ss_uRcR::synapse0x258be50() {
   return (neuron0x25662a0()*0.0557809);
}

double NNfunction_ss_uRcR::synapse0x258be90() {
   return (neuron0x25665e0()*0.0292421);
}

double NNfunction_ss_uRcR::synapse0x258bed0() {
   return (neuron0x2566920()*0.023795);
}

double NNfunction_ss_uRcR::synapse0x258bf10() {
   return (neuron0x2566c60()*0.0531922);
}

double NNfunction_ss_uRcR::synapse0x258bf50() {
   return (neuron0x2566fa0()*-0.0254013);
}

double NNfunction_ss_uRcR::synapse0x258bf90() {
   return (neuron0x25672e0()*-0.624992);
}

double NNfunction_ss_uRcR::synapse0x258bfd0() {
   return (neuron0x2567620()*-0.612226);
}

double NNfunction_ss_uRcR::synapse0x2579d80() {
   return (neuron0x2567960()*-0.0184493);
}

double NNfunction_ss_uRcR::synapse0x2579dc0() {
   return (neuron0x2567ec0()*0.0145113);
}

double NNfunction_ss_uRcR::synapse0x258c120() {
   return (neuron0x25680e0()*0.0100738);
}

double NNfunction_ss_uRcR::synapse0x258c160() {
   return (neuron0x2568420()*0.0790708);
}

double NNfunction_ss_uRcR::synapse0x258c1a0() {
   return (neuron0x2568760()*-0.0083056);
}

double NNfunction_ss_uRcR::synapse0x258c1e0() {
   return (neuron0x2568aa0()*-0.0495849);
}

double NNfunction_ss_uRcR::synapse0x258c220() {
   return (neuron0x2568de0()*-0.0196972);
}

double NNfunction_ss_uRcR::synapse0x258c260() {
   return (neuron0x2569120()*-0.0268251);
}

double NNfunction_ss_uRcR::synapse0x258c5e0() {
   return (neuron0x2564560()*0.061064);
}

double NNfunction_ss_uRcR::synapse0x258c620() {
   return (neuron0x25648a0()*0.491134);
}

double NNfunction_ss_uRcR::synapse0x258c660() {
   return (neuron0x2564be0()*-0.0696981);
}

double NNfunction_ss_uRcR::synapse0x258c6a0() {
   return (neuron0x2564f20()*-0.0437634);
}

double NNfunction_ss_uRcR::synapse0x258c6e0() {
   return (neuron0x2565260()*-0.101076);
}

double NNfunction_ss_uRcR::synapse0x258c720() {
   return (neuron0x25655a0()*-0.145897);
}

double NNfunction_ss_uRcR::synapse0x258c760() {
   return (neuron0x25658e0()*-2.01907e-05);
}

double NNfunction_ss_uRcR::synapse0x258c7a0() {
   return (neuron0x2565c20()*0.0032153);
}

double NNfunction_ss_uRcR::synapse0x258c7e0() {
   return (neuron0x2565f60()*-0.19744);
}

double NNfunction_ss_uRcR::synapse0x258c820() {
   return (neuron0x25662a0()*0.454074);
}

double NNfunction_ss_uRcR::synapse0x258c860() {
   return (neuron0x25665e0()*0.201444);
}

double NNfunction_ss_uRcR::synapse0x258c8a0() {
   return (neuron0x2566920()*0.058865);
}

double NNfunction_ss_uRcR::synapse0x258c8e0() {
   return (neuron0x2566c60()*0.295674);
}

double NNfunction_ss_uRcR::synapse0x258c920() {
   return (neuron0x2566fa0()*0.00493083);
}

double NNfunction_ss_uRcR::synapse0x258c960() {
   return (neuron0x25672e0()*-0.0250993);
}

double NNfunction_ss_uRcR::synapse0x258c9a0() {
   return (neuron0x2567620()*-0.502219);
}

double NNfunction_ss_uRcR::synapse0x258c430() {
   return (neuron0x2567960()*0.0482201);
}

double NNfunction_ss_uRcR::synapse0x258c470() {
   return (neuron0x2567ec0()*0.136846);
}

double NNfunction_ss_uRcR::synapse0x258caf0() {
   return (neuron0x25680e0()*0.129385);
}

double NNfunction_ss_uRcR::synapse0x258cb30() {
   return (neuron0x2568420()*0.05067);
}

double NNfunction_ss_uRcR::synapse0x258cb70() {
   return (neuron0x2568760()*0.0171806);
}

double NNfunction_ss_uRcR::synapse0x258cbb0() {
   return (neuron0x2568aa0()*0.0504298);
}

double NNfunction_ss_uRcR::synapse0x258cbf0() {
   return (neuron0x2568de0()*0.0226674);
}

double NNfunction_ss_uRcR::synapse0x258cc30() {
   return (neuron0x2569120()*0.0163604);
}

double NNfunction_ss_uRcR::synapse0x258cfb0() {
   return (neuron0x2564560()*-0.0472497);
}

double NNfunction_ss_uRcR::synapse0x258cff0() {
   return (neuron0x25648a0()*-0.206528);
}

double NNfunction_ss_uRcR::synapse0x258d030() {
   return (neuron0x2564be0()*-0.0902262);
}

double NNfunction_ss_uRcR::synapse0x258d070() {
   return (neuron0x2564f20()*1.00746);
}

double NNfunction_ss_uRcR::synapse0x258d0b0() {
   return (neuron0x2565260()*0.045784);
}

double NNfunction_ss_uRcR::synapse0x258d0f0() {
   return (neuron0x25655a0()*-0.0398686);
}

double NNfunction_ss_uRcR::synapse0x258d130() {
   return (neuron0x25658e0()*-0.0160583);
}

double NNfunction_ss_uRcR::synapse0x258d170() {
   return (neuron0x2565c20()*-0.0673429);
}

double NNfunction_ss_uRcR::synapse0x258d1b0() {
   return (neuron0x2565f60()*0.0260872);
}

double NNfunction_ss_uRcR::synapse0x258d1f0() {
   return (neuron0x25662a0()*0.0156197);
}

double NNfunction_ss_uRcR::synapse0x258d230() {
   return (neuron0x25665e0()*-0.0592281);
}

double NNfunction_ss_uRcR::synapse0x258d270() {
   return (neuron0x2566920()*0.0463233);
}

double NNfunction_ss_uRcR::synapse0x258d2b0() {
   return (neuron0x2566c60()*-0.0978434);
}

double NNfunction_ss_uRcR::synapse0x258d2f0() {
   return (neuron0x2566fa0()*0.150286);
}

double NNfunction_ss_uRcR::synapse0x258d330() {
   return (neuron0x25672e0()*0.613379);
}

double NNfunction_ss_uRcR::synapse0x258d370() {
   return (neuron0x2567620()*1.59069);
}

double NNfunction_ss_uRcR::synapse0x258ce00() {
   return (neuron0x2567960()*0.107513);
}

double NNfunction_ss_uRcR::synapse0x258ce40() {
   return (neuron0x2567ec0()*0.115694);
}

double NNfunction_ss_uRcR::synapse0x258d4c0() {
   return (neuron0x25680e0()*-0.012637);
}

double NNfunction_ss_uRcR::synapse0x258d500() {
   return (neuron0x2568420()*-0.106707);
}

double NNfunction_ss_uRcR::synapse0x258d540() {
   return (neuron0x2568760()*-0.0178534);
}

double NNfunction_ss_uRcR::synapse0x258d580() {
   return (neuron0x2568aa0()*-0.0842267);
}

double NNfunction_ss_uRcR::synapse0x258d5c0() {
   return (neuron0x2568de0()*-0.0599764);
}

double NNfunction_ss_uRcR::synapse0x258d600() {
   return (neuron0x2569120()*-0.0765869);
}

double NNfunction_ss_uRcR::synapse0x258d980() {
   return (neuron0x2564560()*0.255238);
}

double NNfunction_ss_uRcR::synapse0x258d9c0() {
   return (neuron0x25648a0()*-1.01101);
}

double NNfunction_ss_uRcR::synapse0x258da00() {
   return (neuron0x2564be0()*0.677339);
}

double NNfunction_ss_uRcR::synapse0x258da40() {
   return (neuron0x2564f20()*0.421632);
}

double NNfunction_ss_uRcR::synapse0x258da80() {
   return (neuron0x2565260()*-0.142276);
}

double NNfunction_ss_uRcR::synapse0x258dac0() {
   return (neuron0x25655a0()*-0.983358);
}

double NNfunction_ss_uRcR::synapse0x258db00() {
   return (neuron0x25658e0()*0.0276356);
}

double NNfunction_ss_uRcR::synapse0x258db40() {
   return (neuron0x2565c20()*0.141658);
}

double NNfunction_ss_uRcR::synapse0x258db80() {
   return (neuron0x2565f60()*0.700277);
}

double NNfunction_ss_uRcR::synapse0x258dbc0() {
   return (neuron0x25662a0()*0.416088);
}

double NNfunction_ss_uRcR::synapse0x258dc00() {
   return (neuron0x25665e0()*0.0584589);
}

double NNfunction_ss_uRcR::synapse0x258dc40() {
   return (neuron0x2566920()*0.0990722);
}

double NNfunction_ss_uRcR::synapse0x258dc80() {
   return (neuron0x2566c60()*-0.730181);
}

double NNfunction_ss_uRcR::synapse0x258dcc0() {
   return (neuron0x2566fa0()*-0.0920117);
}

double NNfunction_ss_uRcR::synapse0x258dd00() {
   return (neuron0x25672e0()*0.719551);
}

double NNfunction_ss_uRcR::synapse0x258dd40() {
   return (neuron0x2567620()*0.452422);
}

double NNfunction_ss_uRcR::synapse0x258d7d0() {
   return (neuron0x2567960()*-0.334637);
}

double NNfunction_ss_uRcR::synapse0x258d810() {
   return (neuron0x2567ec0()*0.505912);
}

double NNfunction_ss_uRcR::synapse0x258de90() {
   return (neuron0x25680e0()*-1.16427);
}

double NNfunction_ss_uRcR::synapse0x258ded0() {
   return (neuron0x2568420()*-0.468396);
}

double NNfunction_ss_uRcR::synapse0x258df10() {
   return (neuron0x2568760()*0.130195);
}

double NNfunction_ss_uRcR::synapse0x258df50() {
   return (neuron0x2568aa0()*-0.521);
}

double NNfunction_ss_uRcR::synapse0x258df90() {
   return (neuron0x2568de0()*0.687983);
}

double NNfunction_ss_uRcR::synapse0x258dfd0() {
   return (neuron0x2569120()*0.439847);
}

double NNfunction_ss_uRcR::synapse0x256a570() {
   return (neuron0x25695c0()*0.0341071);
}

double NNfunction_ss_uRcR::synapse0x256a5b0() {
   return (neuron0x2569ed0()*-0.0312958);
}

double NNfunction_ss_uRcR::synapse0x256ba80() {
   return (neuron0x256a9b0()*-0.0367064);
}

double NNfunction_ss_uRcR::synapse0x256bac0() {
   return (neuron0x2324240()*-0.018703);
}

double NNfunction_ss_uRcR::synapse0x256c450() {
   return (neuron0x256b7d0()*0.000509071);
}

double NNfunction_ss_uRcR::synapse0x256c490() {
   return (neuron0x256c1a0()*0.0259862);
}

double NNfunction_ss_uRcR::synapse0x256d220() {
   return (neuron0x256cf70()*-0.0587924);
}

double NNfunction_ss_uRcR::synapse0x256d260() {
   return (neuron0x256d940()*-0.039396);
}

double NNfunction_ss_uRcR::synapse0x256dbf0() {
   return (neuron0x256e310()*0.111151);
}

double NNfunction_ss_uRcR::synapse0x256dc30() {
   return (neuron0x256edf0()*-0.0194784);
}

double NNfunction_ss_uRcR::synapse0x256e5c0() {
   return (neuron0x256f7c0()*-0.0624271);
}

double NNfunction_ss_uRcR::synapse0x256e600() {
   return (neuron0x256c8a0()*0.0275616);
}

double NNfunction_ss_uRcR::synapse0x256f0a0() {
   return (neuron0x2571370()*0.022922);
}

double NNfunction_ss_uRcR::synapse0x256f0e0() {
   return (neuron0x2571d40()*0.0321569);
}

double NNfunction_ss_uRcR::synapse0x256fa70() {
   return (neuron0x2572710()*-0.0484118);
}

double NNfunction_ss_uRcR::synapse0x256fab0() {
   return (neuron0x25730e0()*-0.0426557);
}

double NNfunction_ss_uRcR::synapse0x256cb50() {
   return (neuron0x2574ef0()*-0.0109623);
}

double NNfunction_ss_uRcR::synapse0x256cb90() {
   return (neuron0x25751d0()*0.0419223);
}

double NNfunction_ss_uRcR::synapse0x2571620() {
   return (neuron0x2575ba0()*-0.0504347);
}

double NNfunction_ss_uRcR::synapse0x2571660() {
   return (neuron0x2576570()*0.0207787);
}

double NNfunction_ss_uRcR::synapse0x2571ff0() {
   return (neuron0x2576f40()*0.0253993);
}

double NNfunction_ss_uRcR::synapse0x2572030() {
   return (neuron0x2577910()*3.07992);
}

double NNfunction_ss_uRcR::synapse0x25729c0() {
   return (neuron0x2570460()*0.0725612);
}

double NNfunction_ss_uRcR::synapse0x2572a00() {
   return (neuron0x2570e30()*0.0307339);
}

double NNfunction_ss_uRcR::synapse0x2573390() {
   return (neuron0x257a6a0()*-0.0790887);
}

double NNfunction_ss_uRcR::synapse0x25733d0() {
   return (neuron0x257b070()*0.0246891);
}

double NNfunction_ss_uRcR::synapse0x2567500() {
   return (neuron0x257ba40()*0.100359);
}

double NNfunction_ss_uRcR::synapse0x2567540() {
   return (neuron0x257c410()*0.0208677);
}

double NNfunction_ss_uRcR::synapse0x2575480() {
   return (neuron0x257cde0()*0.0205715);
}

double NNfunction_ss_uRcR::synapse0x25754c0() {
   return (neuron0x257d7b0()*0.0562862);
}

double NNfunction_ss_uRcR::synapse0x2575e50() {
   return (neuron0x257e180()*0.0250152);
}

double NNfunction_ss_uRcR::synapse0x2575e90() {
   return (neuron0x257eb50()*0.366046);
}

double NNfunction_ss_uRcR::synapse0x2576820() {
   return (neuron0x2574be0()*-1.35564);
}

double NNfunction_ss_uRcR::synapse0x2576860() {
   return (neuron0x2581730()*0.00696396);
}

double NNfunction_ss_uRcR::synapse0x25771f0() {
   return (neuron0x2582100()*-0.466138);
}

double NNfunction_ss_uRcR::synapse0x2577230() {
   return (neuron0x2582ad0()*-0.0251709);
}

double NNfunction_ss_uRcR::synapse0x2577bc0() {
   return (neuron0x25834a0()*1.71386);
}

double NNfunction_ss_uRcR::synapse0x2577c00() {
   return (neuron0x2583e70()*-0.00600138);
}

double NNfunction_ss_uRcR::synapse0x2570710() {
   return (neuron0x2584840()*-0.0185614);
}

double NNfunction_ss_uRcR::synapse0x2570750() {
   return (neuron0x2585210()*-0.00701759);
}

double NNfunction_ss_uRcR::synapse0x2579fc0() {
   return (neuron0x2585be0()*1.78914);
}

double NNfunction_ss_uRcR::synapse0x257a000() {
   return (neuron0x25867c0()*-1.65706);
}

double NNfunction_ss_uRcR::synapse0x257a950() {
   return (neuron0x2587190()*-0.0122142);
}

double NNfunction_ss_uRcR::synapse0x257a990() {
   return (neuron0x2578010()*-0.562988);
}

double NNfunction_ss_uRcR::synapse0x257b320() {
   return (neuron0x25789e0()*-0.032895);
}

double NNfunction_ss_uRcR::synapse0x257b360() {
   return (neuron0x25793b0()*0.00260054);
}

double NNfunction_ss_uRcR::synapse0x257bcf0() {
   return (neuron0x258b9f0()*-0.990085);
}

double NNfunction_ss_uRcR::synapse0x257bd30() {
   return (neuron0x258c2a0()*-0.0906636);
}

double NNfunction_ss_uRcR::synapse0x257c6c0() {
   return (neuron0x258cc70()*0.0742115);
}

double NNfunction_ss_uRcR::synapse0x257c700() {
   return (neuron0x258d640()*-0.00572642);
}

double NNfunction_ss_uRcR::synapse0x257ee00() {
   return (neuron0x25695c0()*0.748037);
}

double NNfunction_ss_uRcR::synapse0x257ee40() {
   return (neuron0x2569ed0()*0.195598);
}

double NNfunction_ss_uRcR::synapse0x25743c0() {
   return (neuron0x256a9b0()*0.778325);
}

double NNfunction_ss_uRcR::synapse0x2574400() {
   return (neuron0x2324240()*0.053466);
}

double NNfunction_ss_uRcR::synapse0x25819e0() {
   return (neuron0x256b7d0()*0.911655);
}

double NNfunction_ss_uRcR::synapse0x2581a20() {
   return (neuron0x256c1a0()*0.181491);
}

double NNfunction_ss_uRcR::synapse0x25823b0() {
   return (neuron0x256cf70()*1.03679);
}

double NNfunction_ss_uRcR::synapse0x25823f0() {
   return (neuron0x256d940()*0.0737103);
}

double NNfunction_ss_uRcR::synapse0x2582d80() {
   return (neuron0x256e310()*0.645446);
}

double NNfunction_ss_uRcR::synapse0x2582dc0() {
   return (neuron0x256edf0()*0.235689);
}

double NNfunction_ss_uRcR::synapse0x2583750() {
   return (neuron0x256f7c0()*-0.0325195);
}

double NNfunction_ss_uRcR::synapse0x2583790() {
   return (neuron0x256c8a0()*0.292534);
}

double NNfunction_ss_uRcR::synapse0x2584120() {
   return (neuron0x2571370()*0.708411);
}

double NNfunction_ss_uRcR::synapse0x2584160() {
   return (neuron0x2571d40()*0.211937);
}

double NNfunction_ss_uRcR::synapse0x2584af0() {
   return (neuron0x2572710()*0.498702);
}

double NNfunction_ss_uRcR::synapse0x2584b30() {
   return (neuron0x25730e0()*1.20142);
}

double NNfunction_ss_uRcR::synapse0x25854c0() {
   return (neuron0x2574ef0()*0.444714);
}

double NNfunction_ss_uRcR::synapse0x2585500() {
   return (neuron0x25751d0()*0.722441);
}

double NNfunction_ss_uRcR::synapse0x2585e90() {
   return (neuron0x2575ba0()*0.550631);
}

double NNfunction_ss_uRcR::synapse0x2585ed0() {
   return (neuron0x2576570()*0.378434);
}

double NNfunction_ss_uRcR::synapse0x2586a70() {
   return (neuron0x2576f40()*0.348932);
}

double NNfunction_ss_uRcR::synapse0x2586ab0() {
   return (neuron0x2577910()*0.314532);
}

double NNfunction_ss_uRcR::synapse0x2587440() {
   return (neuron0x2570460()*0.0534899);
}

double NNfunction_ss_uRcR::synapse0x2587480() {
   return (neuron0x2570e30()*-0.0180175);
}

double NNfunction_ss_uRcR::synapse0x25782c0() {
   return (neuron0x257a6a0()*0.312487);
}

double NNfunction_ss_uRcR::synapse0x2578300() {
   return (neuron0x257b070()*-0.375298);
}

double NNfunction_ss_uRcR::synapse0x2578c90() {
   return (neuron0x257ba40()*0.866326);
}

double NNfunction_ss_uRcR::synapse0x2578cd0() {
   return (neuron0x257c410()*-0.2701);
}

double NNfunction_ss_uRcR::synapse0x2579660() {
   return (neuron0x257cde0()*0.179535);
}

double NNfunction_ss_uRcR::synapse0x25796a0() {
   return (neuron0x257d7b0()*0.846049);
}

double NNfunction_ss_uRcR::synapse0x258bb80() {
   return (neuron0x257e180()*0.430536);
}

double NNfunction_ss_uRcR::synapse0x258bbc0() {
   return (neuron0x257eb50()*0.260715);
}

double NNfunction_ss_uRcR::synapse0x258c550() {
   return (neuron0x2574be0()*0.369703);
}

double NNfunction_ss_uRcR::synapse0x258c590() {
   return (neuron0x2581730()*0.365953);
}

double NNfunction_ss_uRcR::synapse0x258cf20() {
   return (neuron0x2582100()*0.318075);
}

double NNfunction_ss_uRcR::synapse0x258cf60() {
   return (neuron0x2582ad0()*-0.104213);
}

double NNfunction_ss_uRcR::synapse0x258d8f0() {
   return (neuron0x25834a0()*1.18495);
}

double NNfunction_ss_uRcR::synapse0x258d930() {
   return (neuron0x2583e70()*0.0887186);
}

double NNfunction_ss_uRcR::synapse0x25697e0() {
   return (neuron0x2584840()*-0.421514);
}

double NNfunction_ss_uRcR::synapse0x2569820() {
   return (neuron0x2585210()*0.784512);
}

double NNfunction_ss_uRcR::synapse0x257d090() {
   return (neuron0x2585be0()*0.337842);
}

double NNfunction_ss_uRcR::synapse0x257d0d0() {
   return (neuron0x25867c0()*0.342835);
}

double NNfunction_ss_uRcR::synapse0x258e010() {
   return (neuron0x2587190()*0.0516865);
}

double NNfunction_ss_uRcR::synapse0x258e050() {
   return (neuron0x2578010()*0.475032);
}

double NNfunction_ss_uRcR::synapse0x258e090() {
   return (neuron0x25789e0()*0.421451);
}

double NNfunction_ss_uRcR::synapse0x258e0d0() {
   return (neuron0x25793b0()*0.0208884);
}

double NNfunction_ss_uRcR::synapse0x2594f80() {
   return (neuron0x258b9f0()*0.309758);
}

double NNfunction_ss_uRcR::synapse0x2594fc0() {
   return (neuron0x258c2a0()*0.180788);
}

double NNfunction_ss_uRcR::synapse0x2595000() {
   return (neuron0x258cc70()*0.88103);
}

double NNfunction_ss_uRcR::synapse0x2595040() {
   return (neuron0x258d640()*0.496093);
}

double NNfunction_ss_uRcR::synapse0x25953c0() {
   return (neuron0x25695c0()*-0.103586);
}

double NNfunction_ss_uRcR::synapse0x2595400() {
   return (neuron0x2569ed0()*0.0494577);
}

double NNfunction_ss_uRcR::synapse0x2595440() {
   return (neuron0x256a9b0()*-1.93981);
}

double NNfunction_ss_uRcR::synapse0x2595480() {
   return (neuron0x2324240()*-0.424837);
}

double NNfunction_ss_uRcR::synapse0x25954c0() {
   return (neuron0x256b7d0()*0.199614);
}

double NNfunction_ss_uRcR::synapse0x2595500() {
   return (neuron0x256c1a0()*-0.0726337);
}

double NNfunction_ss_uRcR::synapse0x2595540() {
   return (neuron0x256cf70()*0.428191);
}

double NNfunction_ss_uRcR::synapse0x2595580() {
   return (neuron0x256d940()*0.163068);
}

double NNfunction_ss_uRcR::synapse0x25955c0() {
   return (neuron0x256e310()*1.45559);
}

double NNfunction_ss_uRcR::synapse0x2595600() {
   return (neuron0x256edf0()*0.118493);
}

double NNfunction_ss_uRcR::synapse0x2595640() {
   return (neuron0x256f7c0()*-0.324888);
}

double NNfunction_ss_uRcR::synapse0x2595680() {
   return (neuron0x256c8a0()*-0.00750199);
}

double NNfunction_ss_uRcR::synapse0x25956c0() {
   return (neuron0x2571370()*-0.209123);
}

double NNfunction_ss_uRcR::synapse0x2595700() {
   return (neuron0x2571d40()*0.117369);
}

double NNfunction_ss_uRcR::synapse0x2595740() {
   return (neuron0x2572710()*0.106632);
}

double NNfunction_ss_uRcR::synapse0x2595780() {
   return (neuron0x25730e0()*-0.0250767);
}

double NNfunction_ss_uRcR::synapse0x2595210() {
   return (neuron0x2574ef0()*0.00885221);
}

double NNfunction_ss_uRcR::synapse0x2595250() {
   return (neuron0x25751d0()*-0.0722427);
}

double NNfunction_ss_uRcR::synapse0x25958d0() {
   return (neuron0x2575ba0()*1.19664);
}

double NNfunction_ss_uRcR::synapse0x2595910() {
   return (neuron0x2576570()*0.000154539);
}

double NNfunction_ss_uRcR::synapse0x2595950() {
   return (neuron0x2576f40()*-0.076892);
}

double NNfunction_ss_uRcR::synapse0x2595990() {
   return (neuron0x2577910()*2.99973);
}

double NNfunction_ss_uRcR::synapse0x25959d0() {
   return (neuron0x2570460()*0.311396);
}

double NNfunction_ss_uRcR::synapse0x2595a10() {
   return (neuron0x2570e30()*-0.111316);
}

double NNfunction_ss_uRcR::synapse0x2595a50() {
   return (neuron0x257a6a0()*-0.0175465);
}

double NNfunction_ss_uRcR::synapse0x2595a90() {
   return (neuron0x257b070()*-0.177278);
}

double NNfunction_ss_uRcR::synapse0x2595ad0() {
   return (neuron0x257ba40()*-0.0249063);
}

double NNfunction_ss_uRcR::synapse0x2595b10() {
   return (neuron0x257c410()*-0.576079);
}

double NNfunction_ss_uRcR::synapse0x2595b50() {
   return (neuron0x257cde0()*-0.039825);
}

double NNfunction_ss_uRcR::synapse0x2595b90() {
   return (neuron0x257d7b0()*0.185655);
}

double NNfunction_ss_uRcR::synapse0x2595bd0() {
   return (neuron0x257e180()*-0.00654814);
}

double NNfunction_ss_uRcR::synapse0x2595c10() {
   return (neuron0x257eb50()*-0.693584);
}

double NNfunction_ss_uRcR::synapse0x25957c0() {
   return (neuron0x2574be0()*3.39259);
}

double NNfunction_ss_uRcR::synapse0x2595800() {
   return (neuron0x2581730()*0.000196475);
}

double NNfunction_ss_uRcR::synapse0x2595840() {
   return (neuron0x2582100()*1.9685);
}

double NNfunction_ss_uRcR::synapse0x2595880() {
   return (neuron0x2582ad0()*0.0223502);
}

double NNfunction_ss_uRcR::synapse0x2595e60() {
   return (neuron0x25834a0()*2.44631);
}

double NNfunction_ss_uRcR::synapse0x2595ea0() {
   return (neuron0x2583e70()*0.0525622);
}

double NNfunction_ss_uRcR::synapse0x2595ee0() {
   return (neuron0x2584840()*-0.283178);
}

double NNfunction_ss_uRcR::synapse0x2595f20() {
   return (neuron0x2585210()*-0.0122912);
}

double NNfunction_ss_uRcR::synapse0x2595f60() {
   return (neuron0x2585be0()*2.20592);
}

double NNfunction_ss_uRcR::synapse0x2595fa0() {
   return (neuron0x25867c0()*-7.25228);
}

double NNfunction_ss_uRcR::synapse0x2595fe0() {
   return (neuron0x2587190()*0.0760112);
}

double NNfunction_ss_uRcR::synapse0x2596020() {
   return (neuron0x2578010()*1.0446);
}

double NNfunction_ss_uRcR::synapse0x2596060() {
   return (neuron0x25789e0()*-0.00403924);
}

double NNfunction_ss_uRcR::synapse0x25960a0() {
   return (neuron0x25793b0()*0.218037);
}

double NNfunction_ss_uRcR::synapse0x25960e0() {
   return (neuron0x258b9f0()*0.531431);
}

double NNfunction_ss_uRcR::synapse0x2596120() {
   return (neuron0x258c2a0()*-0.328661);
}

double NNfunction_ss_uRcR::synapse0x2596160() {
   return (neuron0x258cc70()*-0.680932);
}

double NNfunction_ss_uRcR::synapse0x25961a0() {
   return (neuron0x258d640()*-0.00207183);
}

double NNfunction_ss_uRcR::synapse0x2596520() {
   return (neuron0x25695c0()*0.623978);
}

double NNfunction_ss_uRcR::synapse0x2596560() {
   return (neuron0x2569ed0()*0.524719);
}

double NNfunction_ss_uRcR::synapse0x25965a0() {
   return (neuron0x256a9b0()*1.76923);
}

double NNfunction_ss_uRcR::synapse0x25965e0() {
   return (neuron0x2324240()*-2.56955);
}

double NNfunction_ss_uRcR::synapse0x2596620() {
   return (neuron0x256b7d0()*-0.431648);
}

double NNfunction_ss_uRcR::synapse0x2596660() {
   return (neuron0x256c1a0()*-0.300561);
}

double NNfunction_ss_uRcR::synapse0x25966a0() {
   return (neuron0x256cf70()*-1.55936);
}

double NNfunction_ss_uRcR::synapse0x25966e0() {
   return (neuron0x256d940()*-1.4999);
}

double NNfunction_ss_uRcR::synapse0x2596720() {
   return (neuron0x256e310()*-0.0202939);
}

double NNfunction_ss_uRcR::synapse0x2596760() {
   return (neuron0x256edf0()*-0.705548);
}

double NNfunction_ss_uRcR::synapse0x25967a0() {
   return (neuron0x256f7c0()*1.26429);
}

double NNfunction_ss_uRcR::synapse0x25967e0() {
   return (neuron0x256c8a0()*-1.13035);
}

double NNfunction_ss_uRcR::synapse0x2596820() {
   return (neuron0x2571370()*-1.42194);
}

double NNfunction_ss_uRcR::synapse0x2596860() {
   return (neuron0x2571d40()*-0.851697);
}

double NNfunction_ss_uRcR::synapse0x25968a0() {
   return (neuron0x2572710()*0.433794);
}

double NNfunction_ss_uRcR::synapse0x25968e0() {
   return (neuron0x25730e0()*-0.804849);
}

double NNfunction_ss_uRcR::synapse0x2596370() {
   return (neuron0x2574ef0()*0.339108);
}

double NNfunction_ss_uRcR::synapse0x25963b0() {
   return (neuron0x25751d0()*-0.746636);
}

double NNfunction_ss_uRcR::synapse0x2596a30() {
   return (neuron0x2575ba0()*-0.497977);
}

double NNfunction_ss_uRcR::synapse0x2596a70() {
   return (neuron0x2576570()*1.04859);
}

double NNfunction_ss_uRcR::synapse0x2596ab0() {
   return (neuron0x2576f40()*-1.88944);
}

double NNfunction_ss_uRcR::synapse0x2596af0() {
   return (neuron0x2577910()*-2.91466);
}

double NNfunction_ss_uRcR::synapse0x2596b30() {
   return (neuron0x2570460()*-2.25744);
}

double NNfunction_ss_uRcR::synapse0x2596b70() {
   return (neuron0x2570e30()*0.9738);
}

double NNfunction_ss_uRcR::synapse0x2596bb0() {
   return (neuron0x257a6a0()*-2.94491);
}

double NNfunction_ss_uRcR::synapse0x2596bf0() {
   return (neuron0x257b070()*0.60925);
}

double NNfunction_ss_uRcR::synapse0x2596c30() {
   return (neuron0x257ba40()*0.947252);
}

double NNfunction_ss_uRcR::synapse0x2596c70() {
   return (neuron0x257c410()*2.60453);
}

double NNfunction_ss_uRcR::synapse0x2596cb0() {
   return (neuron0x257cde0()*1.1209);
}

double NNfunction_ss_uRcR::synapse0x2596cf0() {
   return (neuron0x257d7b0()*-3.65838);
}

double NNfunction_ss_uRcR::synapse0x2596d30() {
   return (neuron0x257e180()*-0.0483053);
}

double NNfunction_ss_uRcR::synapse0x2596d70() {
   return (neuron0x257eb50()*11.2608);
}

double NNfunction_ss_uRcR::synapse0x2596920() {
   return (neuron0x2574be0()*4.62505);
}

double NNfunction_ss_uRcR::synapse0x2596960() {
   return (neuron0x2581730()*-0.199919);
}

double NNfunction_ss_uRcR::synapse0x25969a0() {
   return (neuron0x2582100()*0.561293);
}

double NNfunction_ss_uRcR::synapse0x25969e0() {
   return (neuron0x2582ad0()*-0.0915125);
}

double NNfunction_ss_uRcR::synapse0x2596fc0() {
   return (neuron0x25834a0()*-0.871707);
}

double NNfunction_ss_uRcR::synapse0x2597000() {
   return (neuron0x2583e70()*-0.228055);
}

double NNfunction_ss_uRcR::synapse0x2597040() {
   return (neuron0x2584840()*0.98972);
}

double NNfunction_ss_uRcR::synapse0x2597080() {
   return (neuron0x2585210()*-0.447081);
}

double NNfunction_ss_uRcR::synapse0x25970c0() {
   return (neuron0x2585be0()*-1.77356);
}

double NNfunction_ss_uRcR::synapse0x2597100() {
   return (neuron0x25867c0()*1.57857);
}

double NNfunction_ss_uRcR::synapse0x2597140() {
   return (neuron0x2587190()*-0.0639531);
}

double NNfunction_ss_uRcR::synapse0x2597180() {
   return (neuron0x2578010()*1.56215);
}

double NNfunction_ss_uRcR::synapse0x25971c0() {
   return (neuron0x25789e0()*0.578117);
}

double NNfunction_ss_uRcR::synapse0x2597200() {
   return (neuron0x25793b0()*-1.05196);
}

double NNfunction_ss_uRcR::synapse0x2597240() {
   return (neuron0x258b9f0()*-2.09125);
}

double NNfunction_ss_uRcR::synapse0x2597280() {
   return (neuron0x258c2a0()*0.868888);
}

double NNfunction_ss_uRcR::synapse0x25972c0() {
   return (neuron0x258cc70()*-3.96459);
}

double NNfunction_ss_uRcR::synapse0x2597300() {
   return (neuron0x258d640()*-0.532149);
}

double NNfunction_ss_uRcR::synapse0x2597680() {
   return (neuron0x25695c0()*-1.09074);
}

double NNfunction_ss_uRcR::synapse0x25976c0() {
   return (neuron0x2569ed0()*-2.03872);
}

double NNfunction_ss_uRcR::synapse0x2597700() {
   return (neuron0x256a9b0()*2.40697);
}

double NNfunction_ss_uRcR::synapse0x2597740() {
   return (neuron0x2324240()*-2.39834);
}

double NNfunction_ss_uRcR::synapse0x2597780() {
   return (neuron0x256b7d0()*2.75293);
}

double NNfunction_ss_uRcR::synapse0x25977c0() {
   return (neuron0x256c1a0()*1.4931);
}

double NNfunction_ss_uRcR::synapse0x2597800() {
   return (neuron0x256cf70()*1.34966);
}

double NNfunction_ss_uRcR::synapse0x2597840() {
   return (neuron0x256d940()*1.45054);
}

double NNfunction_ss_uRcR::synapse0x2597880() {
   return (neuron0x256e310()*1.42081);
}

double NNfunction_ss_uRcR::synapse0x25978c0() {
   return (neuron0x256edf0()*1.26781);
}

double NNfunction_ss_uRcR::synapse0x2597900() {
   return (neuron0x256f7c0()*-0.453278);
}

double NNfunction_ss_uRcR::synapse0x2597940() {
   return (neuron0x256c8a0()*0.317244);
}

double NNfunction_ss_uRcR::synapse0x2597980() {
   return (neuron0x2571370()*-0.723021);
}

double NNfunction_ss_uRcR::synapse0x25979c0() {
   return (neuron0x2571d40()*1.18843);
}

double NNfunction_ss_uRcR::synapse0x2597a00() {
   return (neuron0x2572710()*1.19773);
}

double NNfunction_ss_uRcR::synapse0x2597a40() {
   return (neuron0x25730e0()*0.211286);
}

double NNfunction_ss_uRcR::synapse0x25974d0() {
   return (neuron0x2574ef0()*3.2825);
}

double NNfunction_ss_uRcR::synapse0x2597510() {
   return (neuron0x25751d0()*1.73966);
}

double NNfunction_ss_uRcR::synapse0x2597b90() {
   return (neuron0x2575ba0()*1.55712);
}

double NNfunction_ss_uRcR::synapse0x2597bd0() {
   return (neuron0x2576570()*-1.11309);
}

double NNfunction_ss_uRcR::synapse0x2597c10() {
   return (neuron0x2576f40()*-0.776391);
}

double NNfunction_ss_uRcR::synapse0x2597c50() {
   return (neuron0x2577910()*-0.879711);
}

double NNfunction_ss_uRcR::synapse0x2597c90() {
   return (neuron0x2570460()*0.203479);
}

double NNfunction_ss_uRcR::synapse0x2597cd0() {
   return (neuron0x2570e30()*-1.23896);
}

double NNfunction_ss_uRcR::synapse0x2597d10() {
   return (neuron0x257a6a0()*0.518984);
}

double NNfunction_ss_uRcR::synapse0x2597d50() {
   return (neuron0x257b070()*-1.87467);
}

double NNfunction_ss_uRcR::synapse0x2597d90() {
   return (neuron0x257ba40()*-0.0564158);
}

double NNfunction_ss_uRcR::synapse0x2597dd0() {
   return (neuron0x257c410()*-0.900744);
}

double NNfunction_ss_uRcR::synapse0x2597e10() {
   return (neuron0x257cde0()*2.22229);
}

double NNfunction_ss_uRcR::synapse0x2597e50() {
   return (neuron0x257d7b0()*0.210024);
}

double NNfunction_ss_uRcR::synapse0x2597e90() {
   return (neuron0x257e180()*1.95669);
}

double NNfunction_ss_uRcR::synapse0x2597ed0() {
   return (neuron0x257eb50()*1.3883);
}

double NNfunction_ss_uRcR::synapse0x2597a80() {
   return (neuron0x2574be0()*-1.77428);
}

double NNfunction_ss_uRcR::synapse0x2597ac0() {
   return (neuron0x2581730()*1.80574);
}

double NNfunction_ss_uRcR::synapse0x2597b00() {
   return (neuron0x2582100()*1.5256);
}

double NNfunction_ss_uRcR::synapse0x2597b40() {
   return (neuron0x2582ad0()*-1.89659);
}

double NNfunction_ss_uRcR::synapse0x2598120() {
   return (neuron0x25834a0()*1.26992);
}

double NNfunction_ss_uRcR::synapse0x2598160() {
   return (neuron0x2583e70()*-2.64957);
}

double NNfunction_ss_uRcR::synapse0x25981a0() {
   return (neuron0x2584840()*-1.12638);
}

double NNfunction_ss_uRcR::synapse0x25981e0() {
   return (neuron0x2585210()*1.7919);
}

double NNfunction_ss_uRcR::synapse0x2598220() {
   return (neuron0x2585be0()*0.596614);
}

double NNfunction_ss_uRcR::synapse0x2598260() {
   return (neuron0x25867c0()*-5.80809);
}

double NNfunction_ss_uRcR::synapse0x25982a0() {
   return (neuron0x2587190()*1.89181);
}

double NNfunction_ss_uRcR::synapse0x25982e0() {
   return (neuron0x2578010()*1.08998);
}

double NNfunction_ss_uRcR::synapse0x2598320() {
   return (neuron0x25789e0()*-0.508161);
}

double NNfunction_ss_uRcR::synapse0x2598360() {
   return (neuron0x25793b0()*1.57783);
}

double NNfunction_ss_uRcR::synapse0x25983a0() {
   return (neuron0x258b9f0()*-1.63135);
}

double NNfunction_ss_uRcR::synapse0x25983e0() {
   return (neuron0x258c2a0()*-2.80191);
}

double NNfunction_ss_uRcR::synapse0x2598420() {
   return (neuron0x258cc70()*0.299145);
}

double NNfunction_ss_uRcR::synapse0x2598460() {
   return (neuron0x258d640()*-1.26795);
}

double NNfunction_ss_uRcR::synapse0x2569580() {
   return (neuron0x2594840()*-5.23156);
}

double NNfunction_ss_uRcR::synapse0x25986c0() {
   return (neuron0x2594be0()*6.10974);
}

double NNfunction_ss_uRcR::synapse0x2598700() {
   return (neuron0x2595080()*-6.95119);
}

double NNfunction_ss_uRcR::synapse0x2598740() {
   return (neuron0x25961e0()*11.3581);
}

double NNfunction_ss_uRcR::synapse0x2598780() {
   return (neuron0x2597340()*-5.4804);
}

