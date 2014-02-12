#include "NNfunction_ss_sRsR.h"
#include <cmath>

double NNfunction_ss_sRsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.619)/15.3845;
   input1 = (in1 - 3.31635)/1146.23;
   input2 = (in2 - 667.596)/633.215;
   input3 = (in3 - -58.3601)/830.613;
   input4 = (in4 - 1068.12)/958.905;
   input5 = (in5 - 890.406)/939.434;
   input6 = (in6 - 911.932)/951.677;
   input7 = (in7 - 919.539)/926.414;
   input8 = (in8 - 923.291)/976.449;
   input9 = (in9 - 903.477)/959.989;
   input10 = (in10 - 987.776)/959.773;
   input11 = (in11 - 725.749)/869.411;
   input12 = (in12 - 727.232)/874.932;
   input13 = (in13 - 501.631)/518.332;
   input14 = (in14 - 718.965)/816.434;
   input15 = (in15 - 717.816)/815.713;
   input16 = (in16 - 537.229)/563.076;
   input17 = (in17 - 765.71)/903.284;
   input18 = (in18 - 216.895)/173.733;
   input19 = (in19 - 805.833)/887.837;
   input20 = (in20 - -9.18067)/489.999;
   input21 = (in21 - 4.55429)/1164.55;
   input22 = (in22 - 3.38124)/1194.34;
   input23 = (in23 - -199.181)/600.218;
   switch(index) {
     case 0:
         return neuron0x26c84a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sRsR::Value(int index, double* input) {
   input0 = (input[0] - 23.619)/15.3845;
   input1 = (input[1] - 3.31635)/1146.23;
   input2 = (input[2] - 667.596)/633.215;
   input3 = (input[3] - -58.3601)/830.613;
   input4 = (input[4] - 1068.12)/958.905;
   input5 = (input[5] - 890.406)/939.434;
   input6 = (input[6] - 911.932)/951.677;
   input7 = (input[7] - 919.539)/926.414;
   input8 = (input[8] - 923.291)/976.449;
   input9 = (input[9] - 903.477)/959.989;
   input10 = (input[10] - 987.776)/959.773;
   input11 = (input[11] - 725.749)/869.411;
   input12 = (input[12] - 727.232)/874.932;
   input13 = (input[13] - 501.631)/518.332;
   input14 = (input[14] - 718.965)/816.434;
   input15 = (input[15] - 717.816)/815.713;
   input16 = (input[16] - 537.229)/563.076;
   input17 = (input[17] - 765.71)/903.284;
   input18 = (input[18] - 216.895)/173.733;
   input19 = (input[19] - 805.833)/887.837;
   input20 = (input[20] - -9.18067)/489.999;
   input21 = (input[21] - 4.55429)/1164.55;
   input22 = (input[22] - 3.38124)/1194.34;
   input23 = (input[23] - -199.181)/600.218;
   switch(index) {
     case 0:
         return neuron0x26c84a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sRsR::neuron0x2694560() {
   return input0;
}

double NNfunction_ss_sRsR::neuron0x26948a0() {
   return input1;
}

double NNfunction_ss_sRsR::neuron0x2694be0() {
   return input2;
}

double NNfunction_ss_sRsR::neuron0x2694f20() {
   return input3;
}

double NNfunction_ss_sRsR::neuron0x2695260() {
   return input4;
}

double NNfunction_ss_sRsR::neuron0x26955a0() {
   return input5;
}

double NNfunction_ss_sRsR::neuron0x26958e0() {
   return input6;
}

double NNfunction_ss_sRsR::neuron0x2695c20() {
   return input7;
}

double NNfunction_ss_sRsR::neuron0x2695f60() {
   return input8;
}

double NNfunction_ss_sRsR::neuron0x26962a0() {
   return input9;
}

double NNfunction_ss_sRsR::neuron0x26965e0() {
   return input10;
}

double NNfunction_ss_sRsR::neuron0x2696920() {
   return input11;
}

double NNfunction_ss_sRsR::neuron0x2696c60() {
   return input12;
}

double NNfunction_ss_sRsR::neuron0x2696fa0() {
   return input13;
}

double NNfunction_ss_sRsR::neuron0x26972e0() {
   return input14;
}

double NNfunction_ss_sRsR::neuron0x2697620() {
   return input15;
}

double NNfunction_ss_sRsR::neuron0x2697960() {
   return input16;
}

double NNfunction_ss_sRsR::neuron0x2697ec0() {
   return input17;
}

double NNfunction_ss_sRsR::neuron0x26980e0() {
   return input18;
}

double NNfunction_ss_sRsR::neuron0x2698420() {
   return input19;
}

double NNfunction_ss_sRsR::neuron0x2698760() {
   return input20;
}

double NNfunction_ss_sRsR::neuron0x2698aa0() {
   return input21;
}

double NNfunction_ss_sRsR::neuron0x2698de0() {
   return input22;
}

double NNfunction_ss_sRsR::neuron0x2699120() {
   return input23;
}

double NNfunction_ss_sRsR::input0x26995c0() {
   double input = -4.08898;
   input += synapse0x24543d0();
   input += synapse0x2694420();
   input += synapse0x2694460();
   input += synapse0x2699870();
   input += synapse0x26998b0();
   input += synapse0x26998f0();
   input += synapse0x2699930();
   input += synapse0x2699970();
   input += synapse0x26999b0();
   input += synapse0x26999f0();
   input += synapse0x2699a30();
   input += synapse0x2699a70();
   input += synapse0x2699ab0();
   input += synapse0x2699af0();
   input += synapse0x2699b30();
   input += synapse0x2699b70();
   input += synapse0x2694390();
   input += synapse0x26943d0();
   input += synapse0x2445c70();
   input += synapse0x2445cb0();
   input += synapse0x2699dd0();
   input += synapse0x2699e10();
   input += synapse0x2699e50();
   input += synapse0x2699e90();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26995c0() {
   double input = input0x26995c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x2699ed0() {
   double input = 1.56824;
   input += synapse0x269a210();
   input += synapse0x269a250();
   input += synapse0x269a290();
   input += synapse0x269a2d0();
   input += synapse0x269a310();
   input += synapse0x269a350();
   input += synapse0x269a390();
   input += synapse0x269a3d0();
   input += synapse0x269a410();
   input += synapse0x2699cc0();
   input += synapse0x2699d00();
   input += synapse0x2699d40();
   input += synapse0x2699d80();
   input += synapse0x269a660();
   input += synapse0x269a6a0();
   input += synapse0x269a6e0();
   input += synapse0x269a060();
   input += synapse0x269a0a0();
   input += synapse0x269a830();
   input += synapse0x269a870();
   input += synapse0x269a8b0();
   input += synapse0x269a8f0();
   input += synapse0x269a930();
   input += synapse0x269a970();
   return input;
}

double NNfunction_ss_sRsR::neuron0x2699ed0() {
   double input = input0x2699ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x269a9b0() {
   double input = -1.5516;
   input += synapse0x269acf0();
   input += synapse0x269ad30();
   input += synapse0x269ad70();
   input += synapse0x269adb0();
   input += synapse0x269adf0();
   input += synapse0x269ae30();
   input += synapse0x269ae70();
   input += synapse0x269aeb0();
   input += synapse0x269aef0();
   input += synapse0x269af30();
   input += synapse0x269af70();
   input += synapse0x269afb0();
   input += synapse0x269aff0();
   input += synapse0x269b030();
   input += synapse0x269b070();
   input += synapse0x269b0b0();
   input += synapse0x269ab40();
   input += synapse0x269ab80();
   input += synapse0x2453ac0();
   input += synapse0x2453b00();
   input += synapse0x26835f0();
   input += synapse0x2683630();
   input += synapse0x2683670();
   input += synapse0x26944a0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x269a9b0() {
   double input = input0x269a9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x2454240() {
   double input = -0.58613;
   input += synapse0x269a600();
   input += synapse0x26944e0();
   input += synapse0x2694520();
   input += synapse0x269b200();
   input += synapse0x269b240();
   input += synapse0x269b280();
   input += synapse0x269b2c0();
   input += synapse0x269b300();
   input += synapse0x269b340();
   input += synapse0x269b380();
   input += synapse0x269b3c0();
   input += synapse0x269b400();
   input += synapse0x269b440();
   input += synapse0x269b480();
   input += synapse0x269b4c0();
   input += synapse0x269b500();
   input += synapse0x269a450();
   input += synapse0x269a490();
   input += synapse0x269b650();
   input += synapse0x269b690();
   input += synapse0x269b6d0();
   input += synapse0x269b710();
   input += synapse0x269b750();
   input += synapse0x269b790();
   return input;
}

double NNfunction_ss_sRsR::neuron0x2454240() {
   double input = input0x2454240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x269b7d0() {
   double input = 0.467226;
   input += synapse0x269bb10();
   input += synapse0x269bb50();
   input += synapse0x269bb90();
   input += synapse0x269bbd0();
   input += synapse0x269bc10();
   input += synapse0x269bc50();
   input += synapse0x269bc90();
   input += synapse0x269bcd0();
   input += synapse0x269bd10();
   input += synapse0x269bd50();
   input += synapse0x269bd90();
   input += synapse0x269bdd0();
   input += synapse0x269be10();
   input += synapse0x269be50();
   input += synapse0x269be90();
   input += synapse0x269bed0();
   input += synapse0x269b960();
   input += synapse0x269b9a0();
   input += synapse0x269c020();
   input += synapse0x269c060();
   input += synapse0x269c0a0();
   input += synapse0x269c0e0();
   input += synapse0x269c120();
   input += synapse0x269c160();
   return input;
}

double NNfunction_ss_sRsR::neuron0x269b7d0() {
   double input = input0x269b7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x269c1a0() {
   double input = 3.21473;
   input += synapse0x269c4e0();
   input += synapse0x269c520();
   input += synapse0x269c560();
   input += synapse0x269c5a0();
   input += synapse0x269c5e0();
   input += synapse0x269c620();
   input += synapse0x269c660();
   input += synapse0x269c6a0();
   input += synapse0x269c6e0();
   input += synapse0x2453e30();
   input += synapse0x2453e70();
   input += synapse0x2453eb0();
   input += synapse0x2453ef0();
   input += synapse0x2453f30();
   input += synapse0x2453f70();
   input += synapse0x2453fb0();
   input += synapse0x269c330();
   input += synapse0x269c370();
   input += synapse0x2454100();
   input += synapse0x2454140();
   input += synapse0x2454180();
   input += synapse0x24541c0();
   input += synapse0x2454200();
   input += synapse0x269cf30();
   return input;
}

double NNfunction_ss_sRsR::neuron0x269c1a0() {
   double input = input0x269c1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x269cf70() {
   double input = -1.6186;
   input += synapse0x269d2b0();
   input += synapse0x269d2f0();
   input += synapse0x269d330();
   input += synapse0x269d370();
   input += synapse0x269d3b0();
   input += synapse0x269d3f0();
   input += synapse0x269d430();
   input += synapse0x269d470();
   input += synapse0x269d4b0();
   input += synapse0x269d4f0();
   input += synapse0x269d530();
   input += synapse0x269d570();
   input += synapse0x269d5b0();
   input += synapse0x269d5f0();
   input += synapse0x269d630();
   input += synapse0x269d670();
   input += synapse0x269d100();
   input += synapse0x269d140();
   input += synapse0x269d7c0();
   input += synapse0x269d800();
   input += synapse0x269d840();
   input += synapse0x269d880();
   input += synapse0x269d8c0();
   input += synapse0x269d900();
   return input;
}

double NNfunction_ss_sRsR::neuron0x269cf70() {
   double input = input0x269cf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x269d940() {
   double input = 0.0913209;
   input += synapse0x269dc80();
   input += synapse0x269dcc0();
   input += synapse0x269dd00();
   input += synapse0x269dd40();
   input += synapse0x269dd80();
   input += synapse0x269ddc0();
   input += synapse0x269de00();
   input += synapse0x269de40();
   input += synapse0x269de80();
   input += synapse0x269dec0();
   input += synapse0x269df00();
   input += synapse0x269df40();
   input += synapse0x269df80();
   input += synapse0x269dfc0();
   input += synapse0x269e000();
   input += synapse0x269e040();
   input += synapse0x269dad0();
   input += synapse0x269db10();
   input += synapse0x269e190();
   input += synapse0x269e1d0();
   input += synapse0x269e210();
   input += synapse0x269e250();
   input += synapse0x269e290();
   input += synapse0x269e2d0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x269d940() {
   double input = input0x269d940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x269e310() {
   double input = 0.0153182;
   input += synapse0x2697db0();
   input += synapse0x2697df0();
   input += synapse0x2697e30();
   input += synapse0x2697e70();
   input += synapse0x269e860();
   input += synapse0x269e8a0();
   input += synapse0x269e8e0();
   input += synapse0x269e920();
   input += synapse0x269e960();
   input += synapse0x269e9a0();
   input += synapse0x269e9e0();
   input += synapse0x269ea20();
   input += synapse0x269ea60();
   input += synapse0x269eaa0();
   input += synapse0x269eae0();
   input += synapse0x269eb20();
   input += synapse0x269e4a0();
   input += synapse0x269e4e0();
   input += synapse0x269ec70();
   input += synapse0x269ecb0();
   input += synapse0x269ecf0();
   input += synapse0x269ed30();
   input += synapse0x269ed70();
   input += synapse0x269edb0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x269e310() {
   double input = input0x269e310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x269edf0() {
   double input = 0.311368;
   input += synapse0x269f130();
   input += synapse0x269f170();
   input += synapse0x269f1b0();
   input += synapse0x269f1f0();
   input += synapse0x269f230();
   input += synapse0x269f270();
   input += synapse0x269f2b0();
   input += synapse0x269f2f0();
   input += synapse0x269f330();
   input += synapse0x269f370();
   input += synapse0x269f3b0();
   input += synapse0x269f3f0();
   input += synapse0x269f430();
   input += synapse0x269f470();
   input += synapse0x269f4b0();
   input += synapse0x269f4f0();
   input += synapse0x269ef80();
   input += synapse0x269efc0();
   input += synapse0x269f640();
   input += synapse0x269f680();
   input += synapse0x269f6c0();
   input += synapse0x269f700();
   input += synapse0x269f740();
   input += synapse0x269f780();
   return input;
}

double NNfunction_ss_sRsR::neuron0x269edf0() {
   double input = input0x269edf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x269f7c0() {
   double input = -2.33675;
   input += synapse0x269fb00();
   input += synapse0x269fb40();
   input += synapse0x269fb80();
   input += synapse0x269fbc0();
   input += synapse0x269fc00();
   input += synapse0x269fc40();
   input += synapse0x269fc80();
   input += synapse0x269fcc0();
   input += synapse0x269fd00();
   input += synapse0x269fd40();
   input += synapse0x269fd80();
   input += synapse0x269fdc0();
   input += synapse0x269fe00();
   input += synapse0x269fe40();
   input += synapse0x269fe80();
   input += synapse0x269fec0();
   input += synapse0x269f950();
   input += synapse0x269f990();
   input += synapse0x269c720();
   input += synapse0x269c760();
   input += synapse0x269c7a0();
   input += synapse0x269c7e0();
   input += synapse0x269c820();
   input += synapse0x269c860();
   return input;
}

double NNfunction_ss_sRsR::neuron0x269f7c0() {
   double input = input0x269f7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x269c8a0() {
   double input = -0.226008;
   input += synapse0x269cbe0();
   input += synapse0x269cc20();
   input += synapse0x269cc60();
   input += synapse0x269cca0();
   input += synapse0x269cce0();
   input += synapse0x269cd20();
   input += synapse0x269cd60();
   input += synapse0x269cda0();
   input += synapse0x269cde0();
   input += synapse0x269ce20();
   input += synapse0x269ce60();
   input += synapse0x269cea0();
   input += synapse0x269cee0();
   input += synapse0x26a1020();
   input += synapse0x26a1060();
   input += synapse0x26a10a0();
   input += synapse0x269ca30();
   input += synapse0x269ca70();
   input += synapse0x26a11f0();
   input += synapse0x26a1230();
   input += synapse0x26a1270();
   input += synapse0x26a12b0();
   input += synapse0x26a12f0();
   input += synapse0x26a1330();
   return input;
}

double NNfunction_ss_sRsR::neuron0x269c8a0() {
   double input = input0x269c8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26a1370() {
   double input = -0.569352;
   input += synapse0x26a16b0();
   input += synapse0x26a16f0();
   input += synapse0x26a1730();
   input += synapse0x26a1770();
   input += synapse0x26a17b0();
   input += synapse0x26a17f0();
   input += synapse0x26a1830();
   input += synapse0x26a1870();
   input += synapse0x26a18b0();
   input += synapse0x26a18f0();
   input += synapse0x26a1930();
   input += synapse0x26a1970();
   input += synapse0x26a19b0();
   input += synapse0x26a19f0();
   input += synapse0x26a1a30();
   input += synapse0x26a1a70();
   input += synapse0x26a1500();
   input += synapse0x26a1540();
   input += synapse0x26a1bc0();
   input += synapse0x26a1c00();
   input += synapse0x26a1c40();
   input += synapse0x26a1c80();
   input += synapse0x26a1cc0();
   input += synapse0x26a1d00();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26a1370() {
   double input = input0x26a1370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26a1d40() {
   double input = -3.41059;
   input += synapse0x26a2080();
   input += synapse0x26a20c0();
   input += synapse0x26a2100();
   input += synapse0x26a2140();
   input += synapse0x26a2180();
   input += synapse0x26a21c0();
   input += synapse0x26a2200();
   input += synapse0x26a2240();
   input += synapse0x26a2280();
   input += synapse0x26a22c0();
   input += synapse0x26a2300();
   input += synapse0x26a2340();
   input += synapse0x26a2380();
   input += synapse0x26a23c0();
   input += synapse0x26a2400();
   input += synapse0x26a2440();
   input += synapse0x26a1ed0();
   input += synapse0x26a1f10();
   input += synapse0x26a2590();
   input += synapse0x26a25d0();
   input += synapse0x26a2610();
   input += synapse0x26a2650();
   input += synapse0x26a2690();
   input += synapse0x26a26d0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26a1d40() {
   double input = input0x26a1d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26a2710() {
   double input = 0.521474;
   input += synapse0x26a2a50();
   input += synapse0x26a2a90();
   input += synapse0x26a2ad0();
   input += synapse0x26a2b10();
   input += synapse0x26a2b50();
   input += synapse0x26a2b90();
   input += synapse0x26a2bd0();
   input += synapse0x26a2c10();
   input += synapse0x26a2c50();
   input += synapse0x26a2c90();
   input += synapse0x26a2cd0();
   input += synapse0x26a2d10();
   input += synapse0x26a2d50();
   input += synapse0x26a2d90();
   input += synapse0x26a2dd0();
   input += synapse0x26a2e10();
   input += synapse0x26a28a0();
   input += synapse0x26a28e0();
   input += synapse0x26a2f60();
   input += synapse0x26a2fa0();
   input += synapse0x26a2fe0();
   input += synapse0x26a3020();
   input += synapse0x26a3060();
   input += synapse0x26a30a0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26a2710() {
   double input = input0x26a2710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26a30e0() {
   double input = 0.524114;
   input += synapse0x26a3420();
   input += synapse0x2694780();
   input += synapse0x26947c0();
   input += synapse0x2694ac0();
   input += synapse0x2694b00();
   input += synapse0x2694e00();
   input += synapse0x2694e40();
   input += synapse0x2695140();
   input += synapse0x2695180();
   input += synapse0x2695480();
   input += synapse0x26954c0();
   input += synapse0x26957c0();
   input += synapse0x2695800();
   input += synapse0x2695b00();
   input += synapse0x2695b40();
   input += synapse0x2695e40();
   input += synapse0x2695e80();
   input += synapse0x2696180();
   input += synapse0x26961c0();
   input += synapse0x26964c0();
   input += synapse0x2696500();
   input += synapse0x2696800();
   input += synapse0x2696840();
   input += synapse0x2696b40();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26a30e0() {
   double input = input0x26a30e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26a4ef0() {
   double input = -1.81264;
   input += synapse0x2696b80();
   input += synapse0x2697840();
   input += synapse0x2697880();
   input += synapse0x26a3270();
   input += synapse0x26a32b0();
   input += synapse0x2697b80();
   input += synapse0x2697bc0();
   input += synapse0x2445b50();
   input += synapse0x2445b90();
   input += synapse0x2698300();
   input += synapse0x2698340();
   input += synapse0x2698640();
   input += synapse0x2698680();
   input += synapse0x2698980();
   input += synapse0x26989c0();
   input += synapse0x2698cc0();
   input += synapse0x2698d00();
   input += synapse0x2699000();
   input += synapse0x2699040();
   input += synapse0x2699340();
   input += synapse0x2699380();
   input += synapse0x2696e80();
   input += synapse0x2696ec0();
   input += synapse0x26a5190();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26a4ef0() {
   double input = input0x26a4ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26a51d0() {
   double input = -0.797458;
   input += synapse0x26a5510();
   input += synapse0x26a5550();
   input += synapse0x26a5590();
   input += synapse0x26a55d0();
   input += synapse0x26a5610();
   input += synapse0x26a5650();
   input += synapse0x26a5690();
   input += synapse0x26a56d0();
   input += synapse0x26a5710();
   input += synapse0x26a5750();
   input += synapse0x26a5790();
   input += synapse0x26a57d0();
   input += synapse0x26a5810();
   input += synapse0x26a5850();
   input += synapse0x26a5890();
   input += synapse0x26a58d0();
   input += synapse0x26a5360();
   input += synapse0x26a53a0();
   input += synapse0x26a5a20();
   input += synapse0x26a5a60();
   input += synapse0x26a5aa0();
   input += synapse0x26a5ae0();
   input += synapse0x26a5b20();
   input += synapse0x26a5b60();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26a51d0() {
   double input = input0x26a51d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26a5ba0() {
   double input = -0.983828;
   input += synapse0x26a5ee0();
   input += synapse0x26a5f20();
   input += synapse0x26a5f60();
   input += synapse0x26a5fa0();
   input += synapse0x26a5fe0();
   input += synapse0x26a6020();
   input += synapse0x26a6060();
   input += synapse0x26a60a0();
   input += synapse0x26a60e0();
   input += synapse0x26a6120();
   input += synapse0x26a6160();
   input += synapse0x26a61a0();
   input += synapse0x26a61e0();
   input += synapse0x26a6220();
   input += synapse0x26a6260();
   input += synapse0x26a62a0();
   input += synapse0x26a5d30();
   input += synapse0x26a5d70();
   input += synapse0x26a63f0();
   input += synapse0x26a6430();
   input += synapse0x26a6470();
   input += synapse0x26a64b0();
   input += synapse0x26a64f0();
   input += synapse0x26a6530();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26a5ba0() {
   double input = input0x26a5ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26a6570() {
   double input = 0.167963;
   input += synapse0x26a68b0();
   input += synapse0x26a68f0();
   input += synapse0x26a6930();
   input += synapse0x26a6970();
   input += synapse0x26a69b0();
   input += synapse0x26a69f0();
   input += synapse0x26a6a30();
   input += synapse0x26a6a70();
   input += synapse0x26a6ab0();
   input += synapse0x26a6af0();
   input += synapse0x26a6b30();
   input += synapse0x26a6b70();
   input += synapse0x26a6bb0();
   input += synapse0x26a6bf0();
   input += synapse0x26a6c30();
   input += synapse0x26a6c70();
   input += synapse0x26a6700();
   input += synapse0x26a6740();
   input += synapse0x26a6dc0();
   input += synapse0x26a6e00();
   input += synapse0x26a6e40();
   input += synapse0x26a6e80();
   input += synapse0x26a6ec0();
   input += synapse0x26a6f00();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26a6570() {
   double input = input0x26a6570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26a6f40() {
   double input = 1.52195;
   input += synapse0x26a7280();
   input += synapse0x26a72c0();
   input += synapse0x26a7300();
   input += synapse0x26a7340();
   input += synapse0x26a7380();
   input += synapse0x26a73c0();
   input += synapse0x26a7400();
   input += synapse0x26a7440();
   input += synapse0x26a7480();
   input += synapse0x26a74c0();
   input += synapse0x26a7500();
   input += synapse0x26a7540();
   input += synapse0x26a7580();
   input += synapse0x26a75c0();
   input += synapse0x26a7600();
   input += synapse0x26a7640();
   input += synapse0x26a70d0();
   input += synapse0x26a7110();
   input += synapse0x26a7790();
   input += synapse0x26a77d0();
   input += synapse0x26a7810();
   input += synapse0x26a7850();
   input += synapse0x26a7890();
   input += synapse0x26a78d0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26a6f40() {
   double input = input0x26a6f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26a7910() {
   double input = -0.62177;
   input += synapse0x26a7c50();
   input += synapse0x26a7c90();
   input += synapse0x26a7cd0();
   input += synapse0x26a7d10();
   input += synapse0x26a7d50();
   input += synapse0x26a7d90();
   input += synapse0x26a7dd0();
   input += synapse0x26a7e10();
   input += synapse0x26a7e50();
   input += synapse0x26a0010();
   input += synapse0x26a0050();
   input += synapse0x26a0090();
   input += synapse0x26a00d0();
   input += synapse0x26a0110();
   input += synapse0x26a0150();
   input += synapse0x26a0190();
   input += synapse0x26a7aa0();
   input += synapse0x26a7ae0();
   input += synapse0x26a02e0();
   input += synapse0x26a0320();
   input += synapse0x26a0360();
   input += synapse0x26a03a0();
   input += synapse0x26a03e0();
   input += synapse0x26a0420();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26a7910() {
   double input = input0x26a7910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26a0460() {
   double input = 0.844715;
   input += synapse0x26a07a0();
   input += synapse0x26a07e0();
   input += synapse0x26a0820();
   input += synapse0x26a0860();
   input += synapse0x26a08a0();
   input += synapse0x26a08e0();
   input += synapse0x26a0920();
   input += synapse0x26a0960();
   input += synapse0x26a09a0();
   input += synapse0x26a09e0();
   input += synapse0x26a0a20();
   input += synapse0x26a0a60();
   input += synapse0x26a0aa0();
   input += synapse0x26a0ae0();
   input += synapse0x26a0b20();
   input += synapse0x26a0b60();
   input += synapse0x26a05f0();
   input += synapse0x26a0630();
   input += synapse0x26a0cb0();
   input += synapse0x26a0cf0();
   input += synapse0x26a0d30();
   input += synapse0x26a0d70();
   input += synapse0x26a0db0();
   input += synapse0x26a0df0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26a0460() {
   double input = input0x26a0460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26a0e30() {
   double input = -0.800474;
   input += synapse0x26a0fc0();
   input += synapse0x26aa050();
   input += synapse0x26aa090();
   input += synapse0x26aa0d0();
   input += synapse0x26aa110();
   input += synapse0x26aa150();
   input += synapse0x26aa190();
   input += synapse0x26aa1d0();
   input += synapse0x26aa210();
   input += synapse0x26aa250();
   input += synapse0x26aa290();
   input += synapse0x26aa2d0();
   input += synapse0x26aa310();
   input += synapse0x26aa350();
   input += synapse0x26aa390();
   input += synapse0x26aa3d0();
   input += synapse0x26a9ea0();
   input += synapse0x26a9ee0();
   input += synapse0x26aa520();
   input += synapse0x26aa560();
   input += synapse0x26aa5a0();
   input += synapse0x26aa5e0();
   input += synapse0x26aa620();
   input += synapse0x26aa660();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26a0e30() {
   double input = input0x26a0e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26aa6a0() {
   double input = 0.401453;
   input += synapse0x26aa9e0();
   input += synapse0x26aaa20();
   input += synapse0x26aaa60();
   input += synapse0x26aaaa0();
   input += synapse0x26aaae0();
   input += synapse0x26aab20();
   input += synapse0x26aab60();
   input += synapse0x26aaba0();
   input += synapse0x26aabe0();
   input += synapse0x26aac20();
   input += synapse0x26aac60();
   input += synapse0x26aaca0();
   input += synapse0x26aace0();
   input += synapse0x26aad20();
   input += synapse0x26aad60();
   input += synapse0x26aada0();
   input += synapse0x26aa830();
   input += synapse0x26aa870();
   input += synapse0x26aaef0();
   input += synapse0x26aaf30();
   input += synapse0x26aaf70();
   input += synapse0x26aafb0();
   input += synapse0x26aaff0();
   input += synapse0x26ab030();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26aa6a0() {
   double input = input0x26aa6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26ab070() {
   double input = 1.45837;
   input += synapse0x26ab3b0();
   input += synapse0x26ab3f0();
   input += synapse0x26ab430();
   input += synapse0x26ab470();
   input += synapse0x26ab4b0();
   input += synapse0x26ab4f0();
   input += synapse0x26ab530();
   input += synapse0x26ab570();
   input += synapse0x26ab5b0();
   input += synapse0x26ab5f0();
   input += synapse0x26ab630();
   input += synapse0x26ab670();
   input += synapse0x26ab6b0();
   input += synapse0x26ab6f0();
   input += synapse0x26ab730();
   input += synapse0x26ab770();
   input += synapse0x26ab200();
   input += synapse0x26ab240();
   input += synapse0x26ab8c0();
   input += synapse0x26ab900();
   input += synapse0x26ab940();
   input += synapse0x26ab980();
   input += synapse0x26ab9c0();
   input += synapse0x26aba00();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26ab070() {
   double input = input0x26ab070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26aba40() {
   double input = -1.59392;
   input += synapse0x26abd80();
   input += synapse0x26abdc0();
   input += synapse0x26abe00();
   input += synapse0x26abe40();
   input += synapse0x26abe80();
   input += synapse0x26abec0();
   input += synapse0x26abf00();
   input += synapse0x26abf40();
   input += synapse0x26abf80();
   input += synapse0x26abfc0();
   input += synapse0x26ac000();
   input += synapse0x26ac040();
   input += synapse0x26ac080();
   input += synapse0x26ac0c0();
   input += synapse0x26ac100();
   input += synapse0x26ac140();
   input += synapse0x26abbd0();
   input += synapse0x26abc10();
   input += synapse0x26ac290();
   input += synapse0x26ac2d0();
   input += synapse0x26ac310();
   input += synapse0x26ac350();
   input += synapse0x26ac390();
   input += synapse0x26ac3d0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26aba40() {
   double input = input0x26aba40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26ac410() {
   double input = -0.125443;
   input += synapse0x26ac750();
   input += synapse0x26ac790();
   input += synapse0x26ac7d0();
   input += synapse0x26ac810();
   input += synapse0x26ac850();
   input += synapse0x26ac890();
   input += synapse0x26ac8d0();
   input += synapse0x26ac910();
   input += synapse0x26ac950();
   input += synapse0x26ac990();
   input += synapse0x26ac9d0();
   input += synapse0x26aca10();
   input += synapse0x26aca50();
   input += synapse0x26aca90();
   input += synapse0x26acad0();
   input += synapse0x26acb10();
   input += synapse0x26ac5a0();
   input += synapse0x26ac5e0();
   input += synapse0x26acc60();
   input += synapse0x26acca0();
   input += synapse0x26acce0();
   input += synapse0x26acd20();
   input += synapse0x26acd60();
   input += synapse0x26acda0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26ac410() {
   double input = input0x26ac410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26acde0() {
   double input = 0.0919607;
   input += synapse0x26ad120();
   input += synapse0x26ad160();
   input += synapse0x26ad1a0();
   input += synapse0x26ad1e0();
   input += synapse0x26ad220();
   input += synapse0x26ad260();
   input += synapse0x26ad2a0();
   input += synapse0x26ad2e0();
   input += synapse0x26ad320();
   input += synapse0x26ad360();
   input += synapse0x26ad3a0();
   input += synapse0x26ad3e0();
   input += synapse0x26ad420();
   input += synapse0x26ad460();
   input += synapse0x26ad4a0();
   input += synapse0x26ad4e0();
   input += synapse0x26acf70();
   input += synapse0x26acfb0();
   input += synapse0x26ad630();
   input += synapse0x26ad670();
   input += synapse0x26ad6b0();
   input += synapse0x26ad6f0();
   input += synapse0x26ad730();
   input += synapse0x26ad770();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26acde0() {
   double input = input0x26acde0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26ad7b0() {
   double input = 0.69725;
   input += synapse0x26adaf0();
   input += synapse0x26adb30();
   input += synapse0x26adb70();
   input += synapse0x26adbb0();
   input += synapse0x26adbf0();
   input += synapse0x26adc30();
   input += synapse0x26adc70();
   input += synapse0x26adcb0();
   input += synapse0x26adcf0();
   input += synapse0x26add30();
   input += synapse0x26add70();
   input += synapse0x26addb0();
   input += synapse0x26addf0();
   input += synapse0x26ade30();
   input += synapse0x26ade70();
   input += synapse0x26adeb0();
   input += synapse0x26ad940();
   input += synapse0x26ad980();
   input += synapse0x26ae000();
   input += synapse0x26ae040();
   input += synapse0x26ae080();
   input += synapse0x26ae0c0();
   input += synapse0x26ae100();
   input += synapse0x26ae140();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26ad7b0() {
   double input = input0x26ad7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26ae180() {
   double input = 0.83709;
   input += synapse0x26ae4c0();
   input += synapse0x26ae500();
   input += synapse0x26ae540();
   input += synapse0x26ae580();
   input += synapse0x26ae5c0();
   input += synapse0x26ae600();
   input += synapse0x26ae640();
   input += synapse0x26ae680();
   input += synapse0x26ae6c0();
   input += synapse0x26ae700();
   input += synapse0x26ae740();
   input += synapse0x26ae780();
   input += synapse0x26ae7c0();
   input += synapse0x26ae800();
   input += synapse0x26ae840();
   input += synapse0x26ae880();
   input += synapse0x26ae310();
   input += synapse0x26ae350();
   input += synapse0x26ae9d0();
   input += synapse0x26aea10();
   input += synapse0x26aea50();
   input += synapse0x26aea90();
   input += synapse0x26aead0();
   input += synapse0x26aeb10();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26ae180() {
   double input = input0x26ae180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26aeb50() {
   double input = 0.693973;
   input += synapse0x26aee90();
   input += synapse0x26a3460();
   input += synapse0x26a34a0();
   input += synapse0x26a34e0();
   input += synapse0x26a3730();
   input += synapse0x26a3770();
   input += synapse0x26a37b0();
   input += synapse0x26a3a00();
   input += synapse0x26a3a40();
   input += synapse0x26a3c90();
   input += synapse0x26a3cd0();
   input += synapse0x26a3d10();
   input += synapse0x26a3f60();
   input += synapse0x26a3fa0();
   input += synapse0x26a41f0();
   input += synapse0x26a4230();
   input += synapse0x26aece0();
   input += synapse0x26aed20();
   input += synapse0x26a4380();
   input += synapse0x26a4890();
   input += synapse0x26a48d0();
   input += synapse0x26a4910();
   input += synapse0x26a4b60();
   input += synapse0x26a4ba0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26aeb50() {
   double input = input0x26aeb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26a4be0() {
   double input = 0.0722865;
   input += synapse0x26a4450();
   input += synapse0x26a4490();
   input += synapse0x26a44d0();
   input += synapse0x26a4510();
   input += synapse0x26a4e90();
   input += synapse0x26b11e0();
   input += synapse0x26b1220();
   input += synapse0x26b1260();
   input += synapse0x26b12a0();
   input += synapse0x26b12e0();
   input += synapse0x26b1320();
   input += synapse0x26b1360();
   input += synapse0x26b13a0();
   input += synapse0x26b13e0();
   input += synapse0x26b1420();
   input += synapse0x26b1460();
   input += synapse0x26a4d70();
   input += synapse0x26a4db0();
   input += synapse0x26b15b0();
   input += synapse0x26b15f0();
   input += synapse0x26b1630();
   input += synapse0x26b1670();
   input += synapse0x26b16b0();
   input += synapse0x26b16f0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26a4be0() {
   double input = input0x26a4be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26b1730() {
   double input = 0.415688;
   input += synapse0x26b1a70();
   input += synapse0x26b1ab0();
   input += synapse0x26b1af0();
   input += synapse0x26b1b30();
   input += synapse0x26b1b70();
   input += synapse0x26b1bb0();
   input += synapse0x26b1bf0();
   input += synapse0x26b1c30();
   input += synapse0x26b1c70();
   input += synapse0x26b1cb0();
   input += synapse0x26b1cf0();
   input += synapse0x26b1d30();
   input += synapse0x26b1d70();
   input += synapse0x26b1db0();
   input += synapse0x26b1df0();
   input += synapse0x26b1e30();
   input += synapse0x26b18c0();
   input += synapse0x26b1900();
   input += synapse0x26b1f80();
   input += synapse0x26b1fc0();
   input += synapse0x26b2000();
   input += synapse0x26b2040();
   input += synapse0x26b2080();
   input += synapse0x26b20c0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26b1730() {
   double input = input0x26b1730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26b2100() {
   double input = 0.261702;
   input += synapse0x26b2440();
   input += synapse0x26b2480();
   input += synapse0x26b24c0();
   input += synapse0x26b2500();
   input += synapse0x26b2540();
   input += synapse0x26b2580();
   input += synapse0x26b25c0();
   input += synapse0x26b2600();
   input += synapse0x26b2640();
   input += synapse0x26b2680();
   input += synapse0x26b26c0();
   input += synapse0x26b2700();
   input += synapse0x26b2740();
   input += synapse0x26b2780();
   input += synapse0x26b27c0();
   input += synapse0x26b2800();
   input += synapse0x26b2290();
   input += synapse0x26b22d0();
   input += synapse0x26b2950();
   input += synapse0x26b2990();
   input += synapse0x26b29d0();
   input += synapse0x26b2a10();
   input += synapse0x26b2a50();
   input += synapse0x26b2a90();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26b2100() {
   double input = input0x26b2100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26b2ad0() {
   double input = -0.190801;
   input += synapse0x26b2e10();
   input += synapse0x26b2e50();
   input += synapse0x26b2e90();
   input += synapse0x26b2ed0();
   input += synapse0x26b2f10();
   input += synapse0x26b2f50();
   input += synapse0x26b2f90();
   input += synapse0x26b2fd0();
   input += synapse0x26b3010();
   input += synapse0x26b3050();
   input += synapse0x26b3090();
   input += synapse0x26b30d0();
   input += synapse0x26b3110();
   input += synapse0x26b3150();
   input += synapse0x26b3190();
   input += synapse0x26b31d0();
   input += synapse0x26b2c60();
   input += synapse0x26b2ca0();
   input += synapse0x26b3320();
   input += synapse0x26b3360();
   input += synapse0x26b33a0();
   input += synapse0x26b33e0();
   input += synapse0x26b3420();
   input += synapse0x26b3460();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26b2ad0() {
   double input = input0x26b2ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26b34a0() {
   double input = 1.07931;
   input += synapse0x26b37e0();
   input += synapse0x26b3820();
   input += synapse0x26b3860();
   input += synapse0x26b38a0();
   input += synapse0x26b38e0();
   input += synapse0x26b3920();
   input += synapse0x26b3960();
   input += synapse0x26b39a0();
   input += synapse0x26b39e0();
   input += synapse0x26b3a20();
   input += synapse0x26b3a60();
   input += synapse0x26b3aa0();
   input += synapse0x26b3ae0();
   input += synapse0x26b3b20();
   input += synapse0x26b3b60();
   input += synapse0x26b3ba0();
   input += synapse0x26b3630();
   input += synapse0x26b3670();
   input += synapse0x26b3cf0();
   input += synapse0x26b3d30();
   input += synapse0x26b3d70();
   input += synapse0x26b3db0();
   input += synapse0x26b3df0();
   input += synapse0x26b3e30();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26b34a0() {
   double input = input0x26b34a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26b3e70() {
   double input = -0.655959;
   input += synapse0x26b41b0();
   input += synapse0x26b41f0();
   input += synapse0x26b4230();
   input += synapse0x26b4270();
   input += synapse0x26b42b0();
   input += synapse0x26b42f0();
   input += synapse0x26b4330();
   input += synapse0x26b4370();
   input += synapse0x26b43b0();
   input += synapse0x26b43f0();
   input += synapse0x26b4430();
   input += synapse0x26b4470();
   input += synapse0x26b44b0();
   input += synapse0x26b44f0();
   input += synapse0x26b4530();
   input += synapse0x26b4570();
   input += synapse0x26b4000();
   input += synapse0x26b4040();
   input += synapse0x26b46c0();
   input += synapse0x26b4700();
   input += synapse0x26b4740();
   input += synapse0x26b4780();
   input += synapse0x26b47c0();
   input += synapse0x26b4800();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26b3e70() {
   double input = input0x26b3e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26b4840() {
   double input = 0.695665;
   input += synapse0x26b4b80();
   input += synapse0x26b4bc0();
   input += synapse0x26b4c00();
   input += synapse0x26b4c40();
   input += synapse0x26b4c80();
   input += synapse0x26b4cc0();
   input += synapse0x26b4d00();
   input += synapse0x26b4d40();
   input += synapse0x26b4d80();
   input += synapse0x26b4dc0();
   input += synapse0x26b4e00();
   input += synapse0x26b4e40();
   input += synapse0x26b4e80();
   input += synapse0x26b4ec0();
   input += synapse0x26b4f00();
   input += synapse0x26b4f40();
   input += synapse0x26b49d0();
   input += synapse0x26b4a10();
   input += synapse0x26b5090();
   input += synapse0x26b50d0();
   input += synapse0x26b5110();
   input += synapse0x26b5150();
   input += synapse0x26b5190();
   input += synapse0x26b51d0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26b4840() {
   double input = input0x26b4840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26b5210() {
   double input = 1.80794;
   input += synapse0x26b5550();
   input += synapse0x26b5590();
   input += synapse0x26b55d0();
   input += synapse0x26b5610();
   input += synapse0x26b5650();
   input += synapse0x26b5690();
   input += synapse0x26b56d0();
   input += synapse0x26b5710();
   input += synapse0x26b5750();
   input += synapse0x26b5790();
   input += synapse0x26b57d0();
   input += synapse0x26b5810();
   input += synapse0x26b5850();
   input += synapse0x26b5890();
   input += synapse0x26b58d0();
   input += synapse0x26b5910();
   input += synapse0x26b53a0();
   input += synapse0x26b53e0();
   input += synapse0x26b5a60();
   input += synapse0x26b5aa0();
   input += synapse0x26b5ae0();
   input += synapse0x26b5b20();
   input += synapse0x26b5b60();
   input += synapse0x26b5ba0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26b5210() {
   double input = input0x26b5210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26b5be0() {
   double input = -0.78914;
   input += synapse0x269e650();
   input += synapse0x269e690();
   input += synapse0x269e6d0();
   input += synapse0x269e710();
   input += synapse0x269e750();
   input += synapse0x269e790();
   input += synapse0x269e7d0();
   input += synapse0x269e810();
   input += synapse0x26b6330();
   input += synapse0x26b6370();
   input += synapse0x26b63b0();
   input += synapse0x26b63f0();
   input += synapse0x26b6430();
   input += synapse0x26b6470();
   input += synapse0x26b64b0();
   input += synapse0x26b64f0();
   input += synapse0x26b5d70();
   input += synapse0x26b5db0();
   input += synapse0x26b6640();
   input += synapse0x26b6680();
   input += synapse0x26b66c0();
   input += synapse0x26b6700();
   input += synapse0x26b6740();
   input += synapse0x26b6780();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26b5be0() {
   double input = input0x26b5be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26b67c0() {
   double input = -2.07251;
   input += synapse0x26b6b00();
   input += synapse0x26b6b40();
   input += synapse0x26b6b80();
   input += synapse0x26b6bc0();
   input += synapse0x26b6c00();
   input += synapse0x26b6c40();
   input += synapse0x26b6c80();
   input += synapse0x26b6cc0();
   input += synapse0x26b6d00();
   input += synapse0x26b6d40();
   input += synapse0x26b6d80();
   input += synapse0x26b6dc0();
   input += synapse0x26b6e00();
   input += synapse0x26b6e40();
   input += synapse0x26b6e80();
   input += synapse0x26b6ec0();
   input += synapse0x26b6950();
   input += synapse0x26b6990();
   input += synapse0x26b7010();
   input += synapse0x26b7050();
   input += synapse0x26b7090();
   input += synapse0x26b70d0();
   input += synapse0x26b7110();
   input += synapse0x26b7150();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26b67c0() {
   double input = input0x26b67c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26b7190() {
   double input = -2.86487;
   input += synapse0x26b74d0();
   input += synapse0x26b7510();
   input += synapse0x26b7550();
   input += synapse0x26b7590();
   input += synapse0x26b75d0();
   input += synapse0x26b7610();
   input += synapse0x26b7650();
   input += synapse0x26b7690();
   input += synapse0x26b76d0();
   input += synapse0x26b7710();
   input += synapse0x26b7750();
   input += synapse0x26b7790();
   input += synapse0x26b77d0();
   input += synapse0x26b7810();
   input += synapse0x26b7850();
   input += synapse0x26b7890();
   input += synapse0x26b7320();
   input += synapse0x26b7360();
   input += synapse0x26a7e90();
   input += synapse0x26a7ed0();
   input += synapse0x26a7f10();
   input += synapse0x26a7f50();
   input += synapse0x26a7f90();
   input += synapse0x26a7fd0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26b7190() {
   double input = input0x26b7190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26a8010() {
   double input = 1.77791;
   input += synapse0x26a8350();
   input += synapse0x26a8390();
   input += synapse0x26a83d0();
   input += synapse0x26a8410();
   input += synapse0x26a8450();
   input += synapse0x26a8490();
   input += synapse0x26a84d0();
   input += synapse0x26a8510();
   input += synapse0x26a8550();
   input += synapse0x26a8590();
   input += synapse0x26a85d0();
   input += synapse0x26a8610();
   input += synapse0x26a8650();
   input += synapse0x26a8690();
   input += synapse0x26a86d0();
   input += synapse0x26a8710();
   input += synapse0x26a81a0();
   input += synapse0x26a81e0();
   input += synapse0x26a8860();
   input += synapse0x26a88a0();
   input += synapse0x26a88e0();
   input += synapse0x26a8920();
   input += synapse0x26a8960();
   input += synapse0x26a89a0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26a8010() {
   double input = input0x26a8010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26a89e0() {
   double input = 0.259894;
   input += synapse0x26a8d20();
   input += synapse0x26a8d60();
   input += synapse0x26a8da0();
   input += synapse0x26a8de0();
   input += synapse0x26a8e20();
   input += synapse0x26a8e60();
   input += synapse0x26a8ea0();
   input += synapse0x26a8ee0();
   input += synapse0x26a8f20();
   input += synapse0x26a8f60();
   input += synapse0x26a8fa0();
   input += synapse0x26a8fe0();
   input += synapse0x26a9020();
   input += synapse0x26a9060();
   input += synapse0x26a90a0();
   input += synapse0x26a90e0();
   input += synapse0x26a8b70();
   input += synapse0x26a8bb0();
   input += synapse0x26a9230();
   input += synapse0x26a9270();
   input += synapse0x26a92b0();
   input += synapse0x26a92f0();
   input += synapse0x26a9330();
   input += synapse0x26a9370();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26a89e0() {
   double input = input0x26a89e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26a93b0() {
   double input = -0.373374;
   input += synapse0x26a96f0();
   input += synapse0x26a9730();
   input += synapse0x26a9770();
   input += synapse0x26a97b0();
   input += synapse0x26a97f0();
   input += synapse0x26a9830();
   input += synapse0x26a9870();
   input += synapse0x26a98b0();
   input += synapse0x26a98f0();
   input += synapse0x26a9930();
   input += synapse0x26a9970();
   input += synapse0x26a99b0();
   input += synapse0x26a99f0();
   input += synapse0x26a9a30();
   input += synapse0x26a9a70();
   input += synapse0x26a9ab0();
   input += synapse0x26a9540();
   input += synapse0x26a9580();
   input += synapse0x26a9c00();
   input += synapse0x26a9c40();
   input += synapse0x26a9c80();
   input += synapse0x26a9cc0();
   input += synapse0x26a9d00();
   input += synapse0x26a9d40();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26a93b0() {
   double input = input0x26a93b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26bb9f0() {
   double input = 1.34108;
   input += synapse0x26bbc10();
   input += synapse0x26bbc50();
   input += synapse0x26bbc90();
   input += synapse0x26bbcd0();
   input += synapse0x26bbd10();
   input += synapse0x26bbd50();
   input += synapse0x26bbd90();
   input += synapse0x26bbdd0();
   input += synapse0x26bbe10();
   input += synapse0x26bbe50();
   input += synapse0x26bbe90();
   input += synapse0x26bbed0();
   input += synapse0x26bbf10();
   input += synapse0x26bbf50();
   input += synapse0x26bbf90();
   input += synapse0x26bbfd0();
   input += synapse0x26a9d80();
   input += synapse0x26a9dc0();
   input += synapse0x26bc120();
   input += synapse0x26bc160();
   input += synapse0x26bc1a0();
   input += synapse0x26bc1e0();
   input += synapse0x26bc220();
   input += synapse0x26bc260();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26bb9f0() {
   double input = input0x26bb9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26bc2a0() {
   double input = 0.794073;
   input += synapse0x26bc5e0();
   input += synapse0x26bc620();
   input += synapse0x26bc660();
   input += synapse0x26bc6a0();
   input += synapse0x26bc6e0();
   input += synapse0x26bc720();
   input += synapse0x26bc760();
   input += synapse0x26bc7a0();
   input += synapse0x26bc7e0();
   input += synapse0x26bc820();
   input += synapse0x26bc860();
   input += synapse0x26bc8a0();
   input += synapse0x26bc8e0();
   input += synapse0x26bc920();
   input += synapse0x26bc960();
   input += synapse0x26bc9a0();
   input += synapse0x26bc430();
   input += synapse0x26bc470();
   input += synapse0x26bcaf0();
   input += synapse0x26bcb30();
   input += synapse0x26bcb70();
   input += synapse0x26bcbb0();
   input += synapse0x26bcbf0();
   input += synapse0x26bcc30();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26bc2a0() {
   double input = input0x26bc2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26bcc70() {
   double input = 6.78841;
   input += synapse0x26bcfb0();
   input += synapse0x26bcff0();
   input += synapse0x26bd030();
   input += synapse0x26bd070();
   input += synapse0x26bd0b0();
   input += synapse0x26bd0f0();
   input += synapse0x26bd130();
   input += synapse0x26bd170();
   input += synapse0x26bd1b0();
   input += synapse0x26bd1f0();
   input += synapse0x26bd230();
   input += synapse0x26bd270();
   input += synapse0x26bd2b0();
   input += synapse0x26bd2f0();
   input += synapse0x26bd330();
   input += synapse0x26bd370();
   input += synapse0x26bce00();
   input += synapse0x26bce40();
   input += synapse0x26bd4c0();
   input += synapse0x26bd500();
   input += synapse0x26bd540();
   input += synapse0x26bd580();
   input += synapse0x26bd5c0();
   input += synapse0x26bd600();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26bcc70() {
   double input = input0x26bcc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26bd640() {
   double input = -0.601784;
   input += synapse0x26bd980();
   input += synapse0x26bd9c0();
   input += synapse0x26bda00();
   input += synapse0x26bda40();
   input += synapse0x26bda80();
   input += synapse0x26bdac0();
   input += synapse0x26bdb00();
   input += synapse0x26bdb40();
   input += synapse0x26bdb80();
   input += synapse0x26bdbc0();
   input += synapse0x26bdc00();
   input += synapse0x26bdc40();
   input += synapse0x26bdc80();
   input += synapse0x26bdcc0();
   input += synapse0x26bdd00();
   input += synapse0x26bdd40();
   input += synapse0x26bd7d0();
   input += synapse0x26bd810();
   input += synapse0x26bde90();
   input += synapse0x26bded0();
   input += synapse0x26bdf10();
   input += synapse0x26bdf50();
   input += synapse0x26bdf90();
   input += synapse0x26bdfd0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26bd640() {
   double input = input0x26bd640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26c4840() {
   double input = 0.485232;
   input += synapse0x269a570();
   input += synapse0x269a5b0();
   input += synapse0x269ba80();
   input += synapse0x269bac0();
   input += synapse0x269c450();
   input += synapse0x269c490();
   input += synapse0x269d220();
   input += synapse0x269d260();
   input += synapse0x269dbf0();
   input += synapse0x269dc30();
   input += synapse0x269e5c0();
   input += synapse0x269e600();
   input += synapse0x269f0a0();
   input += synapse0x269f0e0();
   input += synapse0x269fa70();
   input += synapse0x269fab0();
   input += synapse0x269cb50();
   input += synapse0x269cb90();
   input += synapse0x26a1620();
   input += synapse0x26a1660();
   input += synapse0x26a1ff0();
   input += synapse0x26a2030();
   input += synapse0x26a29c0();
   input += synapse0x26a2a00();
   input += synapse0x26a3390();
   input += synapse0x26a33d0();
   input += synapse0x2697500();
   input += synapse0x2697540();
   input += synapse0x26a5480();
   input += synapse0x26a54c0();
   input += synapse0x26a5e50();
   input += synapse0x26a5e90();
   input += synapse0x26a6820();
   input += synapse0x26a6860();
   input += synapse0x26a71f0();
   input += synapse0x26a7230();
   input += synapse0x26a7bc0();
   input += synapse0x26a7c00();
   input += synapse0x26a0710();
   input += synapse0x26a0750();
   input += synapse0x26a9fc0();
   input += synapse0x26aa000();
   input += synapse0x26aa950();
   input += synapse0x26aa990();
   input += synapse0x26ab320();
   input += synapse0x26ab360();
   input += synapse0x26abcf0();
   input += synapse0x26abd30();
   input += synapse0x26ac6c0();
   input += synapse0x26ac700();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26c4840() {
   double input = input0x26c4840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26c4be0() {
   double input = 0.116408;
   input += synapse0x26aee00();
   input += synapse0x26aee40();
   input += synapse0x26a43c0();
   input += synapse0x26a4400();
   input += synapse0x26b19e0();
   input += synapse0x26b1a20();
   input += synapse0x26b23b0();
   input += synapse0x26b23f0();
   input += synapse0x26b2d80();
   input += synapse0x26b2dc0();
   input += synapse0x26b3750();
   input += synapse0x26b3790();
   input += synapse0x26b4120();
   input += synapse0x26b4160();
   input += synapse0x26b4af0();
   input += synapse0x26b4b30();
   input += synapse0x26b54c0();
   input += synapse0x26b5500();
   input += synapse0x26b5e90();
   input += synapse0x26b5ed0();
   input += synapse0x26b6a70();
   input += synapse0x26b6ab0();
   input += synapse0x26b7440();
   input += synapse0x26b7480();
   input += synapse0x26a82c0();
   input += synapse0x26a8300();
   input += synapse0x26a8c90();
   input += synapse0x26a8cd0();
   input += synapse0x26a9660();
   input += synapse0x26a96a0();
   input += synapse0x26bbb80();
   input += synapse0x26bbbc0();
   input += synapse0x26bc550();
   input += synapse0x26bc590();
   input += synapse0x26bcf20();
   input += synapse0x26bcf60();
   input += synapse0x26bd8f0();
   input += synapse0x26bd930();
   input += synapse0x26997e0();
   input += synapse0x2699820();
   input += synapse0x26ad090();
   input += synapse0x26ad0d0();
   input += synapse0x26be010();
   input += synapse0x26be050();
   input += synapse0x26be090();
   input += synapse0x26be0d0();
   input += synapse0x26c4f80();
   input += synapse0x26c4fc0();
   input += synapse0x26c5000();
   input += synapse0x26c5040();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26c4be0() {
   double input = input0x26c4be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26c5080() {
   double input = -0.186028;
   input += synapse0x26c53c0();
   input += synapse0x26c5400();
   input += synapse0x26c5440();
   input += synapse0x26c5480();
   input += synapse0x26c54c0();
   input += synapse0x26c5500();
   input += synapse0x26c5540();
   input += synapse0x26c5580();
   input += synapse0x26c55c0();
   input += synapse0x26c5600();
   input += synapse0x26c5640();
   input += synapse0x26c5680();
   input += synapse0x26c56c0();
   input += synapse0x26c5700();
   input += synapse0x26c5740();
   input += synapse0x26c5780();
   input += synapse0x26c5210();
   input += synapse0x26c5250();
   input += synapse0x26c58d0();
   input += synapse0x26c5910();
   input += synapse0x26c5950();
   input += synapse0x26c5990();
   input += synapse0x26c59d0();
   input += synapse0x26c5a10();
   input += synapse0x26c5a50();
   input += synapse0x26c5a90();
   input += synapse0x26c5ad0();
   input += synapse0x26c5b10();
   input += synapse0x26c5b50();
   input += synapse0x26c5b90();
   input += synapse0x26c5bd0();
   input += synapse0x26c5c10();
   input += synapse0x26c57c0();
   input += synapse0x26c5800();
   input += synapse0x26c5840();
   input += synapse0x26c5880();
   input += synapse0x26c5e60();
   input += synapse0x26c5ea0();
   input += synapse0x26c5ee0();
   input += synapse0x26c5f20();
   input += synapse0x26c5f60();
   input += synapse0x26c5fa0();
   input += synapse0x26c5fe0();
   input += synapse0x26c6020();
   input += synapse0x26c6060();
   input += synapse0x26c60a0();
   input += synapse0x26c60e0();
   input += synapse0x26c6120();
   input += synapse0x26c6160();
   input += synapse0x26c61a0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26c5080() {
   double input = input0x26c5080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26c61e0() {
   double input = -1.05649;
   input += synapse0x26c6520();
   input += synapse0x26c6560();
   input += synapse0x26c65a0();
   input += synapse0x26c65e0();
   input += synapse0x26c6620();
   input += synapse0x26c6660();
   input += synapse0x26c66a0();
   input += synapse0x26c66e0();
   input += synapse0x26c6720();
   input += synapse0x26c6760();
   input += synapse0x26c67a0();
   input += synapse0x26c67e0();
   input += synapse0x26c6820();
   input += synapse0x26c6860();
   input += synapse0x26c68a0();
   input += synapse0x26c68e0();
   input += synapse0x26c6370();
   input += synapse0x26c63b0();
   input += synapse0x26c6a30();
   input += synapse0x26c6a70();
   input += synapse0x26c6ab0();
   input += synapse0x26c6af0();
   input += synapse0x26c6b30();
   input += synapse0x26c6b70();
   input += synapse0x26c6bb0();
   input += synapse0x26c6bf0();
   input += synapse0x26c6c30();
   input += synapse0x26c6c70();
   input += synapse0x26c6cb0();
   input += synapse0x26c6cf0();
   input += synapse0x26c6d30();
   input += synapse0x26c6d70();
   input += synapse0x26c6920();
   input += synapse0x26c6960();
   input += synapse0x26c69a0();
   input += synapse0x26c69e0();
   input += synapse0x26c6fc0();
   input += synapse0x26c7000();
   input += synapse0x26c7040();
   input += synapse0x26c7080();
   input += synapse0x26c70c0();
   input += synapse0x26c7100();
   input += synapse0x26c7140();
   input += synapse0x26c7180();
   input += synapse0x26c71c0();
   input += synapse0x26c7200();
   input += synapse0x26c7240();
   input += synapse0x26c7280();
   input += synapse0x26c72c0();
   input += synapse0x26c7300();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26c61e0() {
   double input = input0x26c61e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26c7340() {
   double input = 0.766847;
   input += synapse0x26c7680();
   input += synapse0x26c76c0();
   input += synapse0x26c7700();
   input += synapse0x26c7740();
   input += synapse0x26c7780();
   input += synapse0x26c77c0();
   input += synapse0x26c7800();
   input += synapse0x26c7840();
   input += synapse0x26c7880();
   input += synapse0x26c78c0();
   input += synapse0x26c7900();
   input += synapse0x26c7940();
   input += synapse0x26c7980();
   input += synapse0x26c79c0();
   input += synapse0x26c7a00();
   input += synapse0x26c7a40();
   input += synapse0x26c74d0();
   input += synapse0x26c7510();
   input += synapse0x26c7b90();
   input += synapse0x26c7bd0();
   input += synapse0x26c7c10();
   input += synapse0x26c7c50();
   input += synapse0x26c7c90();
   input += synapse0x26c7cd0();
   input += synapse0x26c7d10();
   input += synapse0x26c7d50();
   input += synapse0x26c7d90();
   input += synapse0x26c7dd0();
   input += synapse0x26c7e10();
   input += synapse0x26c7e50();
   input += synapse0x26c7e90();
   input += synapse0x26c7ed0();
   input += synapse0x26c7a80();
   input += synapse0x26c7ac0();
   input += synapse0x26c7b00();
   input += synapse0x26c7b40();
   input += synapse0x26c8120();
   input += synapse0x26c8160();
   input += synapse0x26c81a0();
   input += synapse0x26c81e0();
   input += synapse0x26c8220();
   input += synapse0x26c8260();
   input += synapse0x26c82a0();
   input += synapse0x26c82e0();
   input += synapse0x26c8320();
   input += synapse0x26c8360();
   input += synapse0x26c83a0();
   input += synapse0x26c83e0();
   input += synapse0x26c8420();
   input += synapse0x26c8460();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26c7340() {
   double input = input0x26c7340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x26c84a0() {
   double input = 14.8327;
   input += synapse0x2699580();
   input += synapse0x26c86c0();
   input += synapse0x26c8700();
   input += synapse0x26c8740();
   input += synapse0x26c8780();
   return input;
}

double NNfunction_ss_sRsR::neuron0x26c84a0() {
   double input = input0x26c84a0();
   return (input * 1)+0;
}

double NNfunction_ss_sRsR::synapse0x24543d0() {
   return (neuron0x2694560()*0.187921);
}

double NNfunction_ss_sRsR::synapse0x2694420() {
   return (neuron0x26948a0()*-0.679874);
}

double NNfunction_ss_sRsR::synapse0x2694460() {
   return (neuron0x2694be0()*0.0395479);
}

double NNfunction_ss_sRsR::synapse0x2699870() {
   return (neuron0x2694f20()*-2.67387);
}

double NNfunction_ss_sRsR::synapse0x26998b0() {
   return (neuron0x2695260()*0.115693);
}

double NNfunction_ss_sRsR::synapse0x26998f0() {
   return (neuron0x26955a0()*0.213675);
}

double NNfunction_ss_sRsR::synapse0x2699930() {
   return (neuron0x26958e0()*-0.241709);
}

double NNfunction_ss_sRsR::synapse0x2699970() {
   return (neuron0x2695c20()*-0.212572);
}

double NNfunction_ss_sRsR::synapse0x26999b0() {
   return (neuron0x2695f60()*0.00585537);
}

double NNfunction_ss_sRsR::synapse0x26999f0() {
   return (neuron0x26962a0()*-0.1694);
}

double NNfunction_ss_sRsR::synapse0x2699a30() {
   return (neuron0x26965e0()*-0.0307083);
}

double NNfunction_ss_sRsR::synapse0x2699a70() {
   return (neuron0x2696920()*-0.0908091);
}

double NNfunction_ss_sRsR::synapse0x2699ab0() {
   return (neuron0x2696c60()*-0.0116296);
}

double NNfunction_ss_sRsR::synapse0x2699af0() {
   return (neuron0x2696fa0()*0.0520648);
}

double NNfunction_ss_sRsR::synapse0x2699b30() {
   return (neuron0x26972e0()*0.00683356);
}

double NNfunction_ss_sRsR::synapse0x2699b70() {
   return (neuron0x2697620()*-0.131565);
}

double NNfunction_ss_sRsR::synapse0x2694390() {
   return (neuron0x2697960()*-0.0578659);
}

double NNfunction_ss_sRsR::synapse0x26943d0() {
   return (neuron0x2697ec0()*-0.100688);
}

double NNfunction_ss_sRsR::synapse0x2445c70() {
   return (neuron0x26980e0()*0.48379);
}

double NNfunction_ss_sRsR::synapse0x2445cb0() {
   return (neuron0x2698420()*-0.00655411);
}

double NNfunction_ss_sRsR::synapse0x2699dd0() {
   return (neuron0x2698760()*-0.0033994);
}

double NNfunction_ss_sRsR::synapse0x2699e10() {
   return (neuron0x2698aa0()*-0.019661);
}

double NNfunction_ss_sRsR::synapse0x2699e50() {
   return (neuron0x2698de0()*-0.0828767);
}

double NNfunction_ss_sRsR::synapse0x2699e90() {
   return (neuron0x2699120()*-0.0323918);
}

double NNfunction_ss_sRsR::synapse0x269a210() {
   return (neuron0x2694560()*0.0185553);
}

double NNfunction_ss_sRsR::synapse0x269a250() {
   return (neuron0x26948a0()*-0.00840561);
}

double NNfunction_ss_sRsR::synapse0x269a290() {
   return (neuron0x2694be0()*-0.00438249);
}

double NNfunction_ss_sRsR::synapse0x269a2d0() {
   return (neuron0x2694f20()*-0.151461);
}

double NNfunction_ss_sRsR::synapse0x269a310() {
   return (neuron0x2695260()*0.0448719);
}

double NNfunction_ss_sRsR::synapse0x269a350() {
   return (neuron0x26955a0()*-0.00996259);
}

double NNfunction_ss_sRsR::synapse0x269a390() {
   return (neuron0x26958e0()*-0.0211176);
}

double NNfunction_ss_sRsR::synapse0x269a3d0() {
   return (neuron0x2695c20()*-0.0279175);
}

double NNfunction_ss_sRsR::synapse0x269a410() {
   return (neuron0x2695f60()*-0.364807);
}

double NNfunction_ss_sRsR::synapse0x2699cc0() {
   return (neuron0x26962a0()*-0.0602872);
}

double NNfunction_ss_sRsR::synapse0x2699d00() {
   return (neuron0x26965e0()*0.113934);
}

double NNfunction_ss_sRsR::synapse0x2699d40() {
   return (neuron0x2696920()*-0.0311718);
}

double NNfunction_ss_sRsR::synapse0x2699d80() {
   return (neuron0x2696c60()*-0.0146266);
}

double NNfunction_ss_sRsR::synapse0x269a660() {
   return (neuron0x2696fa0()*-0.0154426);
}

double NNfunction_ss_sRsR::synapse0x269a6a0() {
   return (neuron0x26972e0()*-0.00179454);
}

double NNfunction_ss_sRsR::synapse0x269a6e0() {
   return (neuron0x2697620()*0.00494879);
}

double NNfunction_ss_sRsR::synapse0x269a060() {
   return (neuron0x2697960()*-0.00533893);
}

double NNfunction_ss_sRsR::synapse0x269a0a0() {
   return (neuron0x2697ec0()*-0.0190577);
}

double NNfunction_ss_sRsR::synapse0x269a830() {
   return (neuron0x26980e0()*-0.756925);
}

double NNfunction_ss_sRsR::synapse0x269a870() {
   return (neuron0x2698420()*-0.0371544);
}

double NNfunction_ss_sRsR::synapse0x269a8b0() {
   return (neuron0x2698760()*0.021128);
}

double NNfunction_ss_sRsR::synapse0x269a8f0() {
   return (neuron0x2698aa0()*0.00796656);
}

double NNfunction_ss_sRsR::synapse0x269a930() {
   return (neuron0x2698de0()*0.00599285);
}

double NNfunction_ss_sRsR::synapse0x269a970() {
   return (neuron0x2699120()*-0.00339791);
}

double NNfunction_ss_sRsR::synapse0x269acf0() {
   return (neuron0x2694560()*0.321503);
}

double NNfunction_ss_sRsR::synapse0x269ad30() {
   return (neuron0x26948a0()*0.274245);
}

double NNfunction_ss_sRsR::synapse0x269ad70() {
   return (neuron0x2694be0()*-0.173224);
}

double NNfunction_ss_sRsR::synapse0x269adb0() {
   return (neuron0x2694f20()*0.699383);
}

double NNfunction_ss_sRsR::synapse0x269adf0() {
   return (neuron0x2695260()*-0.125607);
}

double NNfunction_ss_sRsR::synapse0x269ae30() {
   return (neuron0x26955a0()*1.0214);
}

double NNfunction_ss_sRsR::synapse0x269ae70() {
   return (neuron0x26958e0()*0.536467);
}

double NNfunction_ss_sRsR::synapse0x269aeb0() {
   return (neuron0x2695c20()*0.586777);
}

double NNfunction_ss_sRsR::synapse0x269aef0() {
   return (neuron0x2695f60()*-0.331708);
}

double NNfunction_ss_sRsR::synapse0x269af30() {
   return (neuron0x26962a0()*0.26417);
}

double NNfunction_ss_sRsR::synapse0x269af70() {
   return (neuron0x26965e0()*0.38938);
}

double NNfunction_ss_sRsR::synapse0x269afb0() {
   return (neuron0x2696920()*0.804183);
}

double NNfunction_ss_sRsR::synapse0x269aff0() {
   return (neuron0x2696c60()*0.619812);
}

double NNfunction_ss_sRsR::synapse0x269b030() {
   return (neuron0x2696fa0()*-0.712762);
}

double NNfunction_ss_sRsR::synapse0x269b070() {
   return (neuron0x26972e0()*0.427911);
}

double NNfunction_ss_sRsR::synapse0x269b0b0() {
   return (neuron0x2697620()*0.300913);
}

double NNfunction_ss_sRsR::synapse0x269ab40() {
   return (neuron0x2697960()*-0.0237031);
}

double NNfunction_ss_sRsR::synapse0x269ab80() {
   return (neuron0x2697ec0()*-0.259628);
}

double NNfunction_ss_sRsR::synapse0x2453ac0() {
   return (neuron0x26980e0()*0.0564593);
}

double NNfunction_ss_sRsR::synapse0x2453b00() {
   return (neuron0x2698420()*0.0959997);
}

double NNfunction_ss_sRsR::synapse0x26835f0() {
   return (neuron0x2698760()*-0.131118);
}

double NNfunction_ss_sRsR::synapse0x2683630() {
   return (neuron0x2698aa0()*0.155179);
}

double NNfunction_ss_sRsR::synapse0x2683670() {
   return (neuron0x2698de0()*-0.00684714);
}

double NNfunction_ss_sRsR::synapse0x26944a0() {
   return (neuron0x2699120()*-0.767122);
}

double NNfunction_ss_sRsR::synapse0x269a600() {
   return (neuron0x2694560()*0.00921128);
}

double NNfunction_ss_sRsR::synapse0x26944e0() {
   return (neuron0x26948a0()*0.316894);
}

double NNfunction_ss_sRsR::synapse0x2694520() {
   return (neuron0x2694be0()*-0.337583);
}

double NNfunction_ss_sRsR::synapse0x269b200() {
   return (neuron0x2694f20()*0.213899);
}

double NNfunction_ss_sRsR::synapse0x269b240() {
   return (neuron0x2695260()*0.350076);
}

double NNfunction_ss_sRsR::synapse0x269b280() {
   return (neuron0x26955a0()*0.743246);
}

double NNfunction_ss_sRsR::synapse0x269b2c0() {
   return (neuron0x26958e0()*0.504745);
}

double NNfunction_ss_sRsR::synapse0x269b300() {
   return (neuron0x2695c20()*0.139156);
}

double NNfunction_ss_sRsR::synapse0x269b340() {
   return (neuron0x2695f60()*0.503205);
}

double NNfunction_ss_sRsR::synapse0x269b380() {
   return (neuron0x26962a0()*-0.70514);
}

double NNfunction_ss_sRsR::synapse0x269b3c0() {
   return (neuron0x26965e0()*0.146889);
}

double NNfunction_ss_sRsR::synapse0x269b400() {
   return (neuron0x2696920()*-0.632026);
}

double NNfunction_ss_sRsR::synapse0x269b440() {
   return (neuron0x2696c60()*0.590928);
}

double NNfunction_ss_sRsR::synapse0x269b480() {
   return (neuron0x2696fa0()*0.427388);
}

double NNfunction_ss_sRsR::synapse0x269b4c0() {
   return (neuron0x26972e0()*-0.0346879);
}

double NNfunction_ss_sRsR::synapse0x269b500() {
   return (neuron0x2697620()*-1.4992);
}

double NNfunction_ss_sRsR::synapse0x269a450() {
   return (neuron0x2697960()*0.242143);
}

double NNfunction_ss_sRsR::synapse0x269a490() {
   return (neuron0x2697ec0()*0.220512);
}

double NNfunction_ss_sRsR::synapse0x269b650() {
   return (neuron0x26980e0()*0.448508);
}

double NNfunction_ss_sRsR::synapse0x269b690() {
   return (neuron0x2698420()*0.171783);
}

double NNfunction_ss_sRsR::synapse0x269b6d0() {
   return (neuron0x2698760()*0.231884);
}

double NNfunction_ss_sRsR::synapse0x269b710() {
   return (neuron0x2698aa0()*-0.0956274);
}

double NNfunction_ss_sRsR::synapse0x269b750() {
   return (neuron0x2698de0()*0.232879);
}

double NNfunction_ss_sRsR::synapse0x269b790() {
   return (neuron0x2699120()*0.597353);
}

double NNfunction_ss_sRsR::synapse0x269bb10() {
   return (neuron0x2694560()*0.396231);
}

double NNfunction_ss_sRsR::synapse0x269bb50() {
   return (neuron0x26948a0()*0.159377);
}

double NNfunction_ss_sRsR::synapse0x269bb90() {
   return (neuron0x2694be0()*0.00691289);
}

double NNfunction_ss_sRsR::synapse0x269bbd0() {
   return (neuron0x2694f20()*-0.855794);
}

double NNfunction_ss_sRsR::synapse0x269bc10() {
   return (neuron0x2695260()*0.221526);
}

double NNfunction_ss_sRsR::synapse0x269bc50() {
   return (neuron0x26955a0()*-0.315395);
}

double NNfunction_ss_sRsR::synapse0x269bc90() {
   return (neuron0x26958e0()*-0.561975);
}

double NNfunction_ss_sRsR::synapse0x269bcd0() {
   return (neuron0x2695c20()*-0.0106418);
}

double NNfunction_ss_sRsR::synapse0x269bd10() {
   return (neuron0x2695f60()*0.0487833);
}

double NNfunction_ss_sRsR::synapse0x269bd50() {
   return (neuron0x26962a0()*0.153357);
}

double NNfunction_ss_sRsR::synapse0x269bd90() {
   return (neuron0x26965e0()*-0.099992);
}

double NNfunction_ss_sRsR::synapse0x269bdd0() {
   return (neuron0x2696920()*0.357959);
}

double NNfunction_ss_sRsR::synapse0x269be10() {
   return (neuron0x2696c60()*-0.605916);
}

double NNfunction_ss_sRsR::synapse0x269be50() {
   return (neuron0x2696fa0()*-0.596189);
}

double NNfunction_ss_sRsR::synapse0x269be90() {
   return (neuron0x26972e0()*0.396102);
}

double NNfunction_ss_sRsR::synapse0x269bed0() {
   return (neuron0x2697620()*0.715616);
}

double NNfunction_ss_sRsR::synapse0x269b960() {
   return (neuron0x2697960()*0.110053);
}

double NNfunction_ss_sRsR::synapse0x269b9a0() {
   return (neuron0x2697ec0()*0.310805);
}

double NNfunction_ss_sRsR::synapse0x269c020() {
   return (neuron0x26980e0()*0.314482);
}

double NNfunction_ss_sRsR::synapse0x269c060() {
   return (neuron0x2698420()*0.192064);
}

double NNfunction_ss_sRsR::synapse0x269c0a0() {
   return (neuron0x2698760()*0.183322);
}

double NNfunction_ss_sRsR::synapse0x269c0e0() {
   return (neuron0x2698aa0()*0.728595);
}

double NNfunction_ss_sRsR::synapse0x269c120() {
   return (neuron0x2698de0()*-0.40776);
}

double NNfunction_ss_sRsR::synapse0x269c160() {
   return (neuron0x2699120()*0.188459);
}

double NNfunction_ss_sRsR::synapse0x269c4e0() {
   return (neuron0x2694560()*-0.00885533);
}

double NNfunction_ss_sRsR::synapse0x269c520() {
   return (neuron0x26948a0()*-0.0260931);
}

double NNfunction_ss_sRsR::synapse0x269c560() {
   return (neuron0x2694be0()*-0.00442028);
}

double NNfunction_ss_sRsR::synapse0x269c5a0() {
   return (neuron0x2694f20()*-2.28613);
}

double NNfunction_ss_sRsR::synapse0x269c5e0() {
   return (neuron0x2695260()*0.0792005);
}

double NNfunction_ss_sRsR::synapse0x269c620() {
   return (neuron0x26955a0()*0.026555);
}

double NNfunction_ss_sRsR::synapse0x269c660() {
   return (neuron0x26958e0()*0.0105509);
}

double NNfunction_ss_sRsR::synapse0x269c6a0() {
   return (neuron0x2695c20()*0.026712);
}

double NNfunction_ss_sRsR::synapse0x269c6e0() {
   return (neuron0x2695f60()*0.0465804);
}

double NNfunction_ss_sRsR::synapse0x2453e30() {
   return (neuron0x26962a0()*-0.00175848);
}

double NNfunction_ss_sRsR::synapse0x2453e70() {
   return (neuron0x26965e0()*-0.0141899);
}

double NNfunction_ss_sRsR::synapse0x2453eb0() {
   return (neuron0x2696920()*0.0604459);
}

double NNfunction_ss_sRsR::synapse0x2453ef0() {
   return (neuron0x2696c60()*0.0416951);
}

double NNfunction_ss_sRsR::synapse0x2453f30() {
   return (neuron0x2696fa0()*-0.0371096);
}

double NNfunction_ss_sRsR::synapse0x2453f70() {
   return (neuron0x26972e0()*0.0938099);
}

double NNfunction_ss_sRsR::synapse0x2453fb0() {
   return (neuron0x2697620()*0.0624973);
}

double NNfunction_ss_sRsR::synapse0x269c330() {
   return (neuron0x2697960()*-0.0359641);
}

double NNfunction_ss_sRsR::synapse0x269c370() {
   return (neuron0x2697ec0()*0.0341269);
}

double NNfunction_ss_sRsR::synapse0x2454100() {
   return (neuron0x26980e0()*-0.322733);
}

double NNfunction_ss_sRsR::synapse0x2454140() {
   return (neuron0x2698420()*0.00706007);
}

double NNfunction_ss_sRsR::synapse0x2454180() {
   return (neuron0x2698760()*-0.0159007);
}

double NNfunction_ss_sRsR::synapse0x24541c0() {
   return (neuron0x2698aa0()*0.00378871);
}

double NNfunction_ss_sRsR::synapse0x2454200() {
   return (neuron0x2698de0()*0.00726678);
}

double NNfunction_ss_sRsR::synapse0x269cf30() {
   return (neuron0x2699120()*0.0155901);
}

double NNfunction_ss_sRsR::synapse0x269d2b0() {
   return (neuron0x2694560()*0.34911);
}

double NNfunction_ss_sRsR::synapse0x269d2f0() {
   return (neuron0x26948a0()*0.354725);
}

double NNfunction_ss_sRsR::synapse0x269d330() {
   return (neuron0x2694be0()*-0.0843187);
}

double NNfunction_ss_sRsR::synapse0x269d370() {
   return (neuron0x2694f20()*0.833267);
}

double NNfunction_ss_sRsR::synapse0x269d3b0() {
   return (neuron0x2695260()*-0.238732);
}

double NNfunction_ss_sRsR::synapse0x269d3f0() {
   return (neuron0x26955a0()*0.602766);
}

double NNfunction_ss_sRsR::synapse0x269d430() {
   return (neuron0x26958e0()*-0.196048);
}

double NNfunction_ss_sRsR::synapse0x269d470() {
   return (neuron0x2695c20()*0.294445);
}

double NNfunction_ss_sRsR::synapse0x269d4b0() {
   return (neuron0x2695f60()*0.220411);
}

double NNfunction_ss_sRsR::synapse0x269d4f0() {
   return (neuron0x26962a0()*0.388619);
}

double NNfunction_ss_sRsR::synapse0x269d530() {
   return (neuron0x26965e0()*0.504898);
}

double NNfunction_ss_sRsR::synapse0x269d570() {
   return (neuron0x2696920()*0.770419);
}

double NNfunction_ss_sRsR::synapse0x269d5b0() {
   return (neuron0x2696c60()*0.860561);
}

double NNfunction_ss_sRsR::synapse0x269d5f0() {
   return (neuron0x2696fa0()*1.27995);
}

double NNfunction_ss_sRsR::synapse0x269d630() {
   return (neuron0x26972e0()*0.233496);
}

double NNfunction_ss_sRsR::synapse0x269d670() {
   return (neuron0x2697620()*-0.298316);
}

double NNfunction_ss_sRsR::synapse0x269d100() {
   return (neuron0x2697960()*0.235407);
}

double NNfunction_ss_sRsR::synapse0x269d140() {
   return (neuron0x2697ec0()*0.00538116);
}

double NNfunction_ss_sRsR::synapse0x269d7c0() {
   return (neuron0x26980e0()*1.37448);
}

double NNfunction_ss_sRsR::synapse0x269d800() {
   return (neuron0x2698420()*0.0471776);
}

double NNfunction_ss_sRsR::synapse0x269d840() {
   return (neuron0x2698760()*0.506344);
}

double NNfunction_ss_sRsR::synapse0x269d880() {
   return (neuron0x2698aa0()*-0.698564);
}

double NNfunction_ss_sRsR::synapse0x269d8c0() {
   return (neuron0x2698de0()*-0.275143);
}

double NNfunction_ss_sRsR::synapse0x269d900() {
   return (neuron0x2699120()*-0.53453);
}

double NNfunction_ss_sRsR::synapse0x269dc80() {
   return (neuron0x2694560()*0.88763);
}

double NNfunction_ss_sRsR::synapse0x269dcc0() {
   return (neuron0x26948a0()*0.0960702);
}

double NNfunction_ss_sRsR::synapse0x269dd00() {
   return (neuron0x2694be0()*0.19394);
}

double NNfunction_ss_sRsR::synapse0x269dd40() {
   return (neuron0x2694f20()*0.804472);
}

double NNfunction_ss_sRsR::synapse0x269dd80() {
   return (neuron0x2695260()*0.0790481);
}

double NNfunction_ss_sRsR::synapse0x269ddc0() {
   return (neuron0x26955a0()*0.10031);
}

double NNfunction_ss_sRsR::synapse0x269de00() {
   return (neuron0x26958e0()*1.12054);
}

double NNfunction_ss_sRsR::synapse0x269de40() {
   return (neuron0x2695c20()*0.166563);
}

double NNfunction_ss_sRsR::synapse0x269de80() {
   return (neuron0x2695f60()*-0.678228);
}

double NNfunction_ss_sRsR::synapse0x269dec0() {
   return (neuron0x26962a0()*-0.578542);
}

double NNfunction_ss_sRsR::synapse0x269df00() {
   return (neuron0x26965e0()*-0.17355);
}

double NNfunction_ss_sRsR::synapse0x269df40() {
   return (neuron0x2696920()*-0.245781);
}

double NNfunction_ss_sRsR::synapse0x269df80() {
   return (neuron0x2696c60()*0.044209);
}

double NNfunction_ss_sRsR::synapse0x269dfc0() {
   return (neuron0x2696fa0()*0.355983);
}

double NNfunction_ss_sRsR::synapse0x269e000() {
   return (neuron0x26972e0()*0.564545);
}

double NNfunction_ss_sRsR::synapse0x269e040() {
   return (neuron0x2697620()*0.763643);
}

double NNfunction_ss_sRsR::synapse0x269dad0() {
   return (neuron0x2697960()*0.20511);
}

double NNfunction_ss_sRsR::synapse0x269db10() {
   return (neuron0x2697ec0()*-0.339403);
}

double NNfunction_ss_sRsR::synapse0x269e190() {
   return (neuron0x26980e0()*-0.388376);
}

double NNfunction_ss_sRsR::synapse0x269e1d0() {
   return (neuron0x2698420()*0.137362);
}

double NNfunction_ss_sRsR::synapse0x269e210() {
   return (neuron0x2698760()*-0.204713);
}

double NNfunction_ss_sRsR::synapse0x269e250() {
   return (neuron0x2698aa0()*0.381812);
}

double NNfunction_ss_sRsR::synapse0x269e290() {
   return (neuron0x2698de0()*-0.238796);
}

double NNfunction_ss_sRsR::synapse0x269e2d0() {
   return (neuron0x2699120()*0.0976128);
}

double NNfunction_ss_sRsR::synapse0x2697db0() {
   return (neuron0x2694560()*0.0147941);
}

double NNfunction_ss_sRsR::synapse0x2697df0() {
   return (neuron0x26948a0()*0.027024);
}

double NNfunction_ss_sRsR::synapse0x2697e30() {
   return (neuron0x2694be0()*0.00708453);
}

double NNfunction_ss_sRsR::synapse0x2697e70() {
   return (neuron0x2694f20()*-6.92264);
}

double NNfunction_ss_sRsR::synapse0x269e860() {
   return (neuron0x2695260()*-0.00896514);
}

double NNfunction_ss_sRsR::synapse0x269e8a0() {
   return (neuron0x26955a0()*-0.0266246);
}

double NNfunction_ss_sRsR::synapse0x269e8e0() {
   return (neuron0x26958e0()*0.0194909);
}

double NNfunction_ss_sRsR::synapse0x269e920() {
   return (neuron0x2695c20()*0.00585562);
}

double NNfunction_ss_sRsR::synapse0x269e960() {
   return (neuron0x2695f60()*0.019003);
}

double NNfunction_ss_sRsR::synapse0x269e9a0() {
   return (neuron0x26962a0()*-0.00731623);
}

double NNfunction_ss_sRsR::synapse0x269e9e0() {
   return (neuron0x26965e0()*0.00864074);
}

double NNfunction_ss_sRsR::synapse0x269ea20() {
   return (neuron0x2696920()*-0.0245556);
}

double NNfunction_ss_sRsR::synapse0x269ea60() {
   return (neuron0x2696c60()*-0.010833);
}

double NNfunction_ss_sRsR::synapse0x269eaa0() {
   return (neuron0x2696fa0()*0.0394769);
}

double NNfunction_ss_sRsR::synapse0x269eae0() {
   return (neuron0x26972e0()*-0.00137252);
}

double NNfunction_ss_sRsR::synapse0x269eb20() {
   return (neuron0x2697620()*-0.00161453);
}

double NNfunction_ss_sRsR::synapse0x269e4a0() {
   return (neuron0x2697960()*0.0730718);
}

double NNfunction_ss_sRsR::synapse0x269e4e0() {
   return (neuron0x2697ec0()*-0.0241933);
}

double NNfunction_ss_sRsR::synapse0x269ec70() {
   return (neuron0x26980e0()*0.728639);
}

double NNfunction_ss_sRsR::synapse0x269ecb0() {
   return (neuron0x2698420()*0.0150143);
}

double NNfunction_ss_sRsR::synapse0x269ecf0() {
   return (neuron0x2698760()*-0.0240649);
}

double NNfunction_ss_sRsR::synapse0x269ed30() {
   return (neuron0x2698aa0()*-0.0125919);
}

double NNfunction_ss_sRsR::synapse0x269ed70() {
   return (neuron0x2698de0()*-0.0187434);
}

double NNfunction_ss_sRsR::synapse0x269edb0() {
   return (neuron0x2699120()*-0.0100959);
}

double NNfunction_ss_sRsR::synapse0x269f130() {
   return (neuron0x2694560()*-0.713883);
}

double NNfunction_ss_sRsR::synapse0x269f170() {
   return (neuron0x26948a0()*0.0662507);
}

double NNfunction_ss_sRsR::synapse0x269f1b0() {
   return (neuron0x2694be0()*0.636501);
}

double NNfunction_ss_sRsR::synapse0x269f1f0() {
   return (neuron0x2694f20()*0.40874);
}

double NNfunction_ss_sRsR::synapse0x269f230() {
   return (neuron0x2695260()*0.66474);
}

double NNfunction_ss_sRsR::synapse0x269f270() {
   return (neuron0x26955a0()*0.109326);
}

double NNfunction_ss_sRsR::synapse0x269f2b0() {
   return (neuron0x26958e0()*0.243347);
}

double NNfunction_ss_sRsR::synapse0x269f2f0() {
   return (neuron0x2695c20()*-0.269534);
}

double NNfunction_ss_sRsR::synapse0x269f330() {
   return (neuron0x2695f60()*0.305006);
}

double NNfunction_ss_sRsR::synapse0x269f370() {
   return (neuron0x26962a0()*0.387515);
}

double NNfunction_ss_sRsR::synapse0x269f3b0() {
   return (neuron0x26965e0()*0.0869345);
}

double NNfunction_ss_sRsR::synapse0x269f3f0() {
   return (neuron0x2696920()*-0.0387736);
}

double NNfunction_ss_sRsR::synapse0x269f430() {
   return (neuron0x2696c60()*0.199491);
}

double NNfunction_ss_sRsR::synapse0x269f470() {
   return (neuron0x2696fa0()*0.745336);
}

double NNfunction_ss_sRsR::synapse0x269f4b0() {
   return (neuron0x26972e0()*0.450322);
}

double NNfunction_ss_sRsR::synapse0x269f4f0() {
   return (neuron0x2697620()*-0.798174);
}

double NNfunction_ss_sRsR::synapse0x269ef80() {
   return (neuron0x2697960()*-0.312483);
}

double NNfunction_ss_sRsR::synapse0x269efc0() {
   return (neuron0x2697ec0()*0.552333);
}

double NNfunction_ss_sRsR::synapse0x269f640() {
   return (neuron0x26980e0()*-0.0412174);
}

double NNfunction_ss_sRsR::synapse0x269f680() {
   return (neuron0x2698420()*-0.3399);
}

double NNfunction_ss_sRsR::synapse0x269f6c0() {
   return (neuron0x2698760()*-0.0691641);
}

double NNfunction_ss_sRsR::synapse0x269f700() {
   return (neuron0x2698aa0()*0.316201);
}

double NNfunction_ss_sRsR::synapse0x269f740() {
   return (neuron0x2698de0()*-0.20881);
}

double NNfunction_ss_sRsR::synapse0x269f780() {
   return (neuron0x2699120()*0.525083);
}

double NNfunction_ss_sRsR::synapse0x269fb00() {
   return (neuron0x2694560()*0.0122792);
}

double NNfunction_ss_sRsR::synapse0x269fb40() {
   return (neuron0x26948a0()*-0.150074);
}

double NNfunction_ss_sRsR::synapse0x269fb80() {
   return (neuron0x2694be0()*-0.147158);
}

double NNfunction_ss_sRsR::synapse0x269fbc0() {
   return (neuron0x2694f20()*0.0645705);
}

double NNfunction_ss_sRsR::synapse0x269fc00() {
   return (neuron0x2695260()*0.212282);
}

double NNfunction_ss_sRsR::synapse0x269fc40() {
   return (neuron0x26955a0()*-0.0260195);
}

double NNfunction_ss_sRsR::synapse0x269fc80() {
   return (neuron0x26958e0()*0.239538);
}

double NNfunction_ss_sRsR::synapse0x269fcc0() {
   return (neuron0x2695c20()*-0.164692);
}

double NNfunction_ss_sRsR::synapse0x269fd00() {
   return (neuron0x2695f60()*0.0857379);
}

double NNfunction_ss_sRsR::synapse0x269fd40() {
   return (neuron0x26962a0()*-0.217781);
}

double NNfunction_ss_sRsR::synapse0x269fd80() {
   return (neuron0x26965e0()*0.107482);
}

double NNfunction_ss_sRsR::synapse0x269fdc0() {
   return (neuron0x2696920()*0.0080588);
}

double NNfunction_ss_sRsR::synapse0x269fe00() {
   return (neuron0x2696c60()*0.181804);
}

double NNfunction_ss_sRsR::synapse0x269fe40() {
   return (neuron0x2696fa0()*-0.217364);
}

double NNfunction_ss_sRsR::synapse0x269fe80() {
   return (neuron0x26972e0()*0.116119);
}

double NNfunction_ss_sRsR::synapse0x269fec0() {
   return (neuron0x2697620()*0.0339557);
}

double NNfunction_ss_sRsR::synapse0x269f950() {
   return (neuron0x2697960()*-0.0178442);
}

double NNfunction_ss_sRsR::synapse0x269f990() {
   return (neuron0x2697ec0()*-0.170821);
}

double NNfunction_ss_sRsR::synapse0x269c720() {
   return (neuron0x26980e0()*-3.26572);
}

double NNfunction_ss_sRsR::synapse0x269c760() {
   return (neuron0x2698420()*-0.0597369);
}

double NNfunction_ss_sRsR::synapse0x269c7a0() {
   return (neuron0x2698760()*0.0368775);
}

double NNfunction_ss_sRsR::synapse0x269c7e0() {
   return (neuron0x2698aa0()*-0.0346624);
}

double NNfunction_ss_sRsR::synapse0x269c820() {
   return (neuron0x2698de0()*0.0790793);
}

double NNfunction_ss_sRsR::synapse0x269c860() {
   return (neuron0x2699120()*-0.203761);
}

double NNfunction_ss_sRsR::synapse0x269cbe0() {
   return (neuron0x2694560()*-0.566714);
}

double NNfunction_ss_sRsR::synapse0x269cc20() {
   return (neuron0x26948a0()*-0.834877);
}

double NNfunction_ss_sRsR::synapse0x269cc60() {
   return (neuron0x2694be0()*0.144295);
}

double NNfunction_ss_sRsR::synapse0x269cca0() {
   return (neuron0x2694f20()*-1.01041);
}

double NNfunction_ss_sRsR::synapse0x269cce0() {
   return (neuron0x2695260()*-0.633983);
}

double NNfunction_ss_sRsR::synapse0x269cd20() {
   return (neuron0x26955a0()*-0.0521375);
}

double NNfunction_ss_sRsR::synapse0x269cd60() {
   return (neuron0x26958e0()*-0.605906);
}

double NNfunction_ss_sRsR::synapse0x269cda0() {
   return (neuron0x2695c20()*-0.0611596);
}

double NNfunction_ss_sRsR::synapse0x269cde0() {
   return (neuron0x2695f60()*-0.211078);
}

double NNfunction_ss_sRsR::synapse0x269ce20() {
   return (neuron0x26962a0()*0.413921);
}

double NNfunction_ss_sRsR::synapse0x269ce60() {
   return (neuron0x26965e0()*0.36431);
}

double NNfunction_ss_sRsR::synapse0x269cea0() {
   return (neuron0x2696920()*0.120316);
}

double NNfunction_ss_sRsR::synapse0x269cee0() {
   return (neuron0x2696c60()*-0.297136);
}

double NNfunction_ss_sRsR::synapse0x26a1020() {
   return (neuron0x2696fa0()*-0.260472);
}

double NNfunction_ss_sRsR::synapse0x26a1060() {
   return (neuron0x26972e0()*-0.278158);
}

double NNfunction_ss_sRsR::synapse0x26a10a0() {
   return (neuron0x2697620()*0.185491);
}

double NNfunction_ss_sRsR::synapse0x269ca30() {
   return (neuron0x2697960()*-0.212256);
}

double NNfunction_ss_sRsR::synapse0x269ca70() {
   return (neuron0x2697ec0()*-0.237205);
}

double NNfunction_ss_sRsR::synapse0x26a11f0() {
   return (neuron0x26980e0()*0.982273);
}

double NNfunction_ss_sRsR::synapse0x26a1230() {
   return (neuron0x2698420()*0.542696);
}

double NNfunction_ss_sRsR::synapse0x26a1270() {
   return (neuron0x2698760()*-0.258396);
}

double NNfunction_ss_sRsR::synapse0x26a12b0() {
   return (neuron0x2698aa0()*0.015628);
}

double NNfunction_ss_sRsR::synapse0x26a12f0() {
   return (neuron0x2698de0()*-0.215295);
}

double NNfunction_ss_sRsR::synapse0x26a1330() {
   return (neuron0x2699120()*1.02931);
}

double NNfunction_ss_sRsR::synapse0x26a16b0() {
   return (neuron0x2694560()*0.00228199);
}

double NNfunction_ss_sRsR::synapse0x26a16f0() {
   return (neuron0x26948a0()*0.0276983);
}

double NNfunction_ss_sRsR::synapse0x26a1730() {
   return (neuron0x2694be0()*-0.00763177);
}

double NNfunction_ss_sRsR::synapse0x26a1770() {
   return (neuron0x2694f20()*-0.0023959);
}

double NNfunction_ss_sRsR::synapse0x26a17b0() {
   return (neuron0x2695260()*0.0323767);
}

double NNfunction_ss_sRsR::synapse0x26a17f0() {
   return (neuron0x26955a0()*0.0186431);
}

double NNfunction_ss_sRsR::synapse0x26a1830() {
   return (neuron0x26958e0()*-0.0292041);
}

double NNfunction_ss_sRsR::synapse0x26a1870() {
   return (neuron0x2695c20()*-0.00844541);
}

double NNfunction_ss_sRsR::synapse0x26a18b0() {
   return (neuron0x2695f60()*0.0777626);
}

double NNfunction_ss_sRsR::synapse0x26a18f0() {
   return (neuron0x26962a0()*0.0352681);
}

double NNfunction_ss_sRsR::synapse0x26a1930() {
   return (neuron0x26965e0()*-0.0668003);
}

double NNfunction_ss_sRsR::synapse0x26a1970() {
   return (neuron0x2696920()*0.0557251);
}

double NNfunction_ss_sRsR::synapse0x26a19b0() {
   return (neuron0x2696c60()*0.00520901);
}

double NNfunction_ss_sRsR::synapse0x26a19f0() {
   return (neuron0x2696fa0()*-0.0408214);
}

double NNfunction_ss_sRsR::synapse0x26a1a30() {
   return (neuron0x26972e0()*0.00793104);
}

double NNfunction_ss_sRsR::synapse0x26a1a70() {
   return (neuron0x2697620()*-0.0216067);
}

double NNfunction_ss_sRsR::synapse0x26a1500() {
   return (neuron0x2697960()*-0.0236376);
}

double NNfunction_ss_sRsR::synapse0x26a1540() {
   return (neuron0x2697ec0()*0.00709652);
}

double NNfunction_ss_sRsR::synapse0x26a1bc0() {
   return (neuron0x26980e0()*-2.45782);
}

double NNfunction_ss_sRsR::synapse0x26a1c00() {
   return (neuron0x2698420()*-0.0029008);
}

double NNfunction_ss_sRsR::synapse0x26a1c40() {
   return (neuron0x2698760()*-0.00382534);
}

double NNfunction_ss_sRsR::synapse0x26a1c80() {
   return (neuron0x2698aa0()*0.0160303);
}

double NNfunction_ss_sRsR::synapse0x26a1cc0() {
   return (neuron0x2698de0()*0.00863634);
}

double NNfunction_ss_sRsR::synapse0x26a1d00() {
   return (neuron0x2699120()*0.0229137);
}

double NNfunction_ss_sRsR::synapse0x26a2080() {
   return (neuron0x2694560()*0.18796);
}

double NNfunction_ss_sRsR::synapse0x26a20c0() {
   return (neuron0x26948a0()*0.613653);
}

double NNfunction_ss_sRsR::synapse0x26a2100() {
   return (neuron0x2694be0()*0.148533);
}

double NNfunction_ss_sRsR::synapse0x26a2140() {
   return (neuron0x2694f20()*-0.923346);
}

double NNfunction_ss_sRsR::synapse0x26a2180() {
   return (neuron0x2695260()*0.502769);
}

double NNfunction_ss_sRsR::synapse0x26a21c0() {
   return (neuron0x26955a0()*-0.010131);
}

double NNfunction_ss_sRsR::synapse0x26a2200() {
   return (neuron0x26958e0()*-0.373973);
}

double NNfunction_ss_sRsR::synapse0x26a2240() {
   return (neuron0x2695c20()*-0.115867);
}

double NNfunction_ss_sRsR::synapse0x26a2280() {
   return (neuron0x2695f60()*0.046055);
}

double NNfunction_ss_sRsR::synapse0x26a22c0() {
   return (neuron0x26962a0()*0.195725);
}

double NNfunction_ss_sRsR::synapse0x26a2300() {
   return (neuron0x26965e0()*-0.0895254);
}

double NNfunction_ss_sRsR::synapse0x26a2340() {
   return (neuron0x2696920()*0.124758);
}

double NNfunction_ss_sRsR::synapse0x26a2380() {
   return (neuron0x2696c60()*0.0542997);
}

double NNfunction_ss_sRsR::synapse0x26a23c0() {
   return (neuron0x2696fa0()*-0.155429);
}

double NNfunction_ss_sRsR::synapse0x26a2400() {
   return (neuron0x26972e0()*0.559632);
}

double NNfunction_ss_sRsR::synapse0x26a2440() {
   return (neuron0x2697620()*0.180377);
}

double NNfunction_ss_sRsR::synapse0x26a1ed0() {
   return (neuron0x2697960()*-0.228669);
}

double NNfunction_ss_sRsR::synapse0x26a1f10() {
   return (neuron0x2697ec0()*0.112297);
}

double NNfunction_ss_sRsR::synapse0x26a2590() {
   return (neuron0x26980e0()*-0.676843);
}

double NNfunction_ss_sRsR::synapse0x26a25d0() {
   return (neuron0x2698420()*0.0382881);
}

double NNfunction_ss_sRsR::synapse0x26a2610() {
   return (neuron0x2698760()*0.151707);
}

double NNfunction_ss_sRsR::synapse0x26a2650() {
   return (neuron0x2698aa0()*0.0283323);
}

double NNfunction_ss_sRsR::synapse0x26a2690() {
   return (neuron0x2698de0()*-0.0374663);
}

double NNfunction_ss_sRsR::synapse0x26a26d0() {
   return (neuron0x2699120()*-0.0534181);
}

double NNfunction_ss_sRsR::synapse0x26a2a50() {
   return (neuron0x2694560()*0.0267642);
}

double NNfunction_ss_sRsR::synapse0x26a2a90() {
   return (neuron0x26948a0()*-0.0437876);
}

double NNfunction_ss_sRsR::synapse0x26a2ad0() {
   return (neuron0x2694be0()*0.21832);
}

double NNfunction_ss_sRsR::synapse0x26a2b10() {
   return (neuron0x2694f20()*1.32963);
}

double NNfunction_ss_sRsR::synapse0x26a2b50() {
   return (neuron0x2695260()*-0.137603);
}

double NNfunction_ss_sRsR::synapse0x26a2b90() {
   return (neuron0x26955a0()*-0.161298);
}

double NNfunction_ss_sRsR::synapse0x26a2bd0() {
   return (neuron0x26958e0()*-0.214282);
}

double NNfunction_ss_sRsR::synapse0x26a2c10() {
   return (neuron0x2695c20()*0.29551);
}

double NNfunction_ss_sRsR::synapse0x26a2c50() {
   return (neuron0x2695f60()*-0.200271);
}

double NNfunction_ss_sRsR::synapse0x26a2c90() {
   return (neuron0x26962a0()*0.204826);
}

double NNfunction_ss_sRsR::synapse0x26a2cd0() {
   return (neuron0x26965e0()*-0.0677831);
}

double NNfunction_ss_sRsR::synapse0x26a2d10() {
   return (neuron0x2696920()*0.242262);
}

double NNfunction_ss_sRsR::synapse0x26a2d50() {
   return (neuron0x2696c60()*-0.420093);
}

double NNfunction_ss_sRsR::synapse0x26a2d90() {
   return (neuron0x2696fa0()*0.082504);
}

double NNfunction_ss_sRsR::synapse0x26a2dd0() {
   return (neuron0x26972e0()*-0.356381);
}

double NNfunction_ss_sRsR::synapse0x26a2e10() {
   return (neuron0x2697620()*0.345954);
}

double NNfunction_ss_sRsR::synapse0x26a28a0() {
   return (neuron0x2697960()*-0.0213898);
}

double NNfunction_ss_sRsR::synapse0x26a28e0() {
   return (neuron0x2697ec0()*0.397425);
}

double NNfunction_ss_sRsR::synapse0x26a2f60() {
   return (neuron0x26980e0()*2.38135);
}

double NNfunction_ss_sRsR::synapse0x26a2fa0() {
   return (neuron0x2698420()*-0.151445);
}

double NNfunction_ss_sRsR::synapse0x26a2fe0() {
   return (neuron0x2698760()*0.107255);
}

double NNfunction_ss_sRsR::synapse0x26a3020() {
   return (neuron0x2698aa0()*0.18828);
}

double NNfunction_ss_sRsR::synapse0x26a3060() {
   return (neuron0x2698de0()*0.0358892);
}

double NNfunction_ss_sRsR::synapse0x26a30a0() {
   return (neuron0x2699120()*0.229181);
}

double NNfunction_ss_sRsR::synapse0x26a3420() {
   return (neuron0x2694560()*0.0177593);
}

double NNfunction_ss_sRsR::synapse0x2694780() {
   return (neuron0x26948a0()*-0.129785);
}

double NNfunction_ss_sRsR::synapse0x26947c0() {
   return (neuron0x2694be0()*0.0576485);
}

double NNfunction_ss_sRsR::synapse0x2694ac0() {
   return (neuron0x2694f20()*-0.0923414);
}

double NNfunction_ss_sRsR::synapse0x2694b00() {
   return (neuron0x2695260()*-0.0707817);
}

double NNfunction_ss_sRsR::synapse0x2694e00() {
   return (neuron0x26955a0()*-0.0365449);
}

double NNfunction_ss_sRsR::synapse0x2694e40() {
   return (neuron0x26958e0()*0.11759);
}

double NNfunction_ss_sRsR::synapse0x2695140() {
   return (neuron0x2695c20()*0.15141);
}

double NNfunction_ss_sRsR::synapse0x2695180() {
   return (neuron0x2695f60()*-0.0565758);
}

double NNfunction_ss_sRsR::synapse0x2695480() {
   return (neuron0x26962a0()*-0.00813871);
}

double NNfunction_ss_sRsR::synapse0x26954c0() {
   return (neuron0x26965e0()*-0.070113);
}

double NNfunction_ss_sRsR::synapse0x26957c0() {
   return (neuron0x2696920()*-0.0667076);
}

double NNfunction_ss_sRsR::synapse0x2695800() {
   return (neuron0x2696c60()*-0.137164);
}

double NNfunction_ss_sRsR::synapse0x2695b00() {
   return (neuron0x2696fa0()*-0.0313456);
}

double NNfunction_ss_sRsR::synapse0x2695b40() {
   return (neuron0x26972e0()*1.21236);
}

double NNfunction_ss_sRsR::synapse0x2695e40() {
   return (neuron0x2697620()*-0.382111);
}

double NNfunction_ss_sRsR::synapse0x2695e80() {
   return (neuron0x2697960()*0.56805);
}

double NNfunction_ss_sRsR::synapse0x2696180() {
   return (neuron0x2697ec0()*-0.0819018);
}

double NNfunction_ss_sRsR::synapse0x26961c0() {
   return (neuron0x26980e0()*-0.420714);
}

double NNfunction_ss_sRsR::synapse0x26964c0() {
   return (neuron0x2698420()*-0.140236);
}

double NNfunction_ss_sRsR::synapse0x2696500() {
   return (neuron0x2698760()*-0.0121341);
}

double NNfunction_ss_sRsR::synapse0x2696800() {
   return (neuron0x2698aa0()*-0.100121);
}

double NNfunction_ss_sRsR::synapse0x2696840() {
   return (neuron0x2698de0()*-0.0433663);
}

double NNfunction_ss_sRsR::synapse0x2696b40() {
   return (neuron0x2699120()*-0.0259996);
}

double NNfunction_ss_sRsR::synapse0x2696b80() {
   return (neuron0x2694560()*0.19763);
}

double NNfunction_ss_sRsR::synapse0x2697840() {
   return (neuron0x26948a0()*-0.188664);
}

double NNfunction_ss_sRsR::synapse0x2697880() {
   return (neuron0x2694be0()*-0.115188);
}

double NNfunction_ss_sRsR::synapse0x26a3270() {
   return (neuron0x2694f20()*1.57774);
}

double NNfunction_ss_sRsR::synapse0x26a32b0() {
   return (neuron0x2695260()*0.622982);
}

double NNfunction_ss_sRsR::synapse0x2697b80() {
   return (neuron0x26955a0()*-0.124544);
}

double NNfunction_ss_sRsR::synapse0x2697bc0() {
   return (neuron0x26958e0()*-0.0459329);
}

double NNfunction_ss_sRsR::synapse0x2445b50() {
   return (neuron0x2695c20()*-0.0862564);
}

double NNfunction_ss_sRsR::synapse0x2445b90() {
   return (neuron0x2695f60()*-0.125427);
}

double NNfunction_ss_sRsR::synapse0x2698300() {
   return (neuron0x26962a0()*-0.193012);
}

double NNfunction_ss_sRsR::synapse0x2698340() {
   return (neuron0x26965e0()*0.160784);
}

double NNfunction_ss_sRsR::synapse0x2698640() {
   return (neuron0x2696920()*0.0786321);
}

double NNfunction_ss_sRsR::synapse0x2698680() {
   return (neuron0x2696c60()*0.17743);
}

double NNfunction_ss_sRsR::synapse0x2698980() {
   return (neuron0x2696fa0()*-0.150712);
}

double NNfunction_ss_sRsR::synapse0x26989c0() {
   return (neuron0x26972e0()*0.0832929);
}

double NNfunction_ss_sRsR::synapse0x2698cc0() {
   return (neuron0x2697620()*-0.0982898);
}

double NNfunction_ss_sRsR::synapse0x2698d00() {
   return (neuron0x2697960()*0.0992584);
}

double NNfunction_ss_sRsR::synapse0x2699000() {
   return (neuron0x2697ec0()*-0.0815216);
}

double NNfunction_ss_sRsR::synapse0x2699040() {
   return (neuron0x26980e0()*0.94787);
}

double NNfunction_ss_sRsR::synapse0x2699340() {
   return (neuron0x2698420()*-0.124374);
}

double NNfunction_ss_sRsR::synapse0x2699380() {
   return (neuron0x2698760()*0.0737505);
}

double NNfunction_ss_sRsR::synapse0x2696e80() {
   return (neuron0x2698aa0()*0.0156172);
}

double NNfunction_ss_sRsR::synapse0x2696ec0() {
   return (neuron0x2698de0()*-0.0137597);
}

double NNfunction_ss_sRsR::synapse0x26a5190() {
   return (neuron0x2699120()*-0.0748228);
}

double NNfunction_ss_sRsR::synapse0x26a5510() {
   return (neuron0x2694560()*-0.11426);
}

double NNfunction_ss_sRsR::synapse0x26a5550() {
   return (neuron0x26948a0()*0.250555);
}

double NNfunction_ss_sRsR::synapse0x26a5590() {
   return (neuron0x2694be0()*-0.0148993);
}

double NNfunction_ss_sRsR::synapse0x26a55d0() {
   return (neuron0x2694f20()*-4.81862);
}

double NNfunction_ss_sRsR::synapse0x26a5610() {
   return (neuron0x2695260()*-0.00105428);
}

double NNfunction_ss_sRsR::synapse0x26a5650() {
   return (neuron0x26955a0()*-0.211179);
}

double NNfunction_ss_sRsR::synapse0x26a5690() {
   return (neuron0x26958e0()*-0.164927);
}

double NNfunction_ss_sRsR::synapse0x26a56d0() {
   return (neuron0x2695c20()*-0.124029);
}

double NNfunction_ss_sRsR::synapse0x26a5710() {
   return (neuron0x2695f60()*-0.0936853);
}

double NNfunction_ss_sRsR::synapse0x26a5750() {
   return (neuron0x26962a0()*0.335038);
}

double NNfunction_ss_sRsR::synapse0x26a5790() {
   return (neuron0x26965e0()*0.097584);
}

double NNfunction_ss_sRsR::synapse0x26a57d0() {
   return (neuron0x2696920()*-0.0474667);
}

double NNfunction_ss_sRsR::synapse0x26a5810() {
   return (neuron0x2696c60()*-0.328535);
}

double NNfunction_ss_sRsR::synapse0x26a5850() {
   return (neuron0x2696fa0()*0.349751);
}

double NNfunction_ss_sRsR::synapse0x26a5890() {
   return (neuron0x26972e0()*-0.311698);
}

double NNfunction_ss_sRsR::synapse0x26a58d0() {
   return (neuron0x2697620()*-0.188709);
}

double NNfunction_ss_sRsR::synapse0x26a5360() {
   return (neuron0x2697960()*0.0782775);
}

double NNfunction_ss_sRsR::synapse0x26a53a0() {
   return (neuron0x2697ec0()*0.14533);
}

double NNfunction_ss_sRsR::synapse0x26a5a20() {
   return (neuron0x26980e0()*0.128961);
}

double NNfunction_ss_sRsR::synapse0x26a5a60() {
   return (neuron0x2698420()*-0.306226);
}

double NNfunction_ss_sRsR::synapse0x26a5aa0() {
   return (neuron0x2698760()*-0.079944);
}

double NNfunction_ss_sRsR::synapse0x26a5ae0() {
   return (neuron0x2698aa0()*0.0896313);
}

double NNfunction_ss_sRsR::synapse0x26a5b20() {
   return (neuron0x2698de0()*0.295168);
}

double NNfunction_ss_sRsR::synapse0x26a5b60() {
   return (neuron0x2699120()*0.0104073);
}

double NNfunction_ss_sRsR::synapse0x26a5ee0() {
   return (neuron0x2694560()*-0.0193511);
}

double NNfunction_ss_sRsR::synapse0x26a5f20() {
   return (neuron0x26948a0()*-0.000145822);
}

double NNfunction_ss_sRsR::synapse0x26a5f60() {
   return (neuron0x2694be0()*-0.0596844);
}

double NNfunction_ss_sRsR::synapse0x26a5fa0() {
   return (neuron0x2694f20()*12.252);
}

double NNfunction_ss_sRsR::synapse0x26a5fe0() {
   return (neuron0x2695260()*-0.00775995);
}

double NNfunction_ss_sRsR::synapse0x26a6020() {
   return (neuron0x26955a0()*-0.0154095);
}

double NNfunction_ss_sRsR::synapse0x26a6060() {
   return (neuron0x26958e0()*-0.0302172);
}

double NNfunction_ss_sRsR::synapse0x26a60a0() {
   return (neuron0x2695c20()*0.00152053);
}

double NNfunction_ss_sRsR::synapse0x26a60e0() {
   return (neuron0x2695f60()*0.0803848);
}

double NNfunction_ss_sRsR::synapse0x26a6120() {
   return (neuron0x26962a0()*0.0711029);
}

double NNfunction_ss_sRsR::synapse0x26a6160() {
   return (neuron0x26965e0()*0.0410448);
}

double NNfunction_ss_sRsR::synapse0x26a61a0() {
   return (neuron0x2696920()*0.0545353);
}

double NNfunction_ss_sRsR::synapse0x26a61e0() {
   return (neuron0x2696c60()*-0.0484604);
}

double NNfunction_ss_sRsR::synapse0x26a6220() {
   return (neuron0x2696fa0()*0.0194471);
}

double NNfunction_ss_sRsR::synapse0x26a6260() {
   return (neuron0x26972e0()*-0.0241141);
}

double NNfunction_ss_sRsR::synapse0x26a62a0() {
   return (neuron0x2697620()*-0.0371101);
}

double NNfunction_ss_sRsR::synapse0x26a5d30() {
   return (neuron0x2697960()*0.0764598);
}

double NNfunction_ss_sRsR::synapse0x26a5d70() {
   return (neuron0x2697ec0()*-0.0100261);
}

double NNfunction_ss_sRsR::synapse0x26a63f0() {
   return (neuron0x26980e0()*0.851375);
}

double NNfunction_ss_sRsR::synapse0x26a6430() {
   return (neuron0x2698420()*-0.00161352);
}

double NNfunction_ss_sRsR::synapse0x26a6470() {
   return (neuron0x2698760()*-0.0565825);
}

double NNfunction_ss_sRsR::synapse0x26a64b0() {
   return (neuron0x2698aa0()*0.0274808);
}

double NNfunction_ss_sRsR::synapse0x26a64f0() {
   return (neuron0x2698de0()*0.0231643);
}

double NNfunction_ss_sRsR::synapse0x26a6530() {
   return (neuron0x2699120()*-0.00239962);
}

double NNfunction_ss_sRsR::synapse0x26a68b0() {
   return (neuron0x2694560()*0.33267);
}

double NNfunction_ss_sRsR::synapse0x26a68f0() {
   return (neuron0x26948a0()*0.00785039);
}

double NNfunction_ss_sRsR::synapse0x26a6930() {
   return (neuron0x2694be0()*-0.056595);
}

double NNfunction_ss_sRsR::synapse0x26a6970() {
   return (neuron0x2694f20()*1.08174);
}

double NNfunction_ss_sRsR::synapse0x26a69b0() {
   return (neuron0x2695260()*0.471774);
}

double NNfunction_ss_sRsR::synapse0x26a69f0() {
   return (neuron0x26955a0()*0.289947);
}

double NNfunction_ss_sRsR::synapse0x26a6a30() {
   return (neuron0x26958e0()*-0.0128596);
}

double NNfunction_ss_sRsR::synapse0x26a6a70() {
   return (neuron0x2695c20()*0.235979);
}

double NNfunction_ss_sRsR::synapse0x26a6ab0() {
   return (neuron0x2695f60()*0.196974);
}

double NNfunction_ss_sRsR::synapse0x26a6af0() {
   return (neuron0x26962a0()*-0.162452);
}

double NNfunction_ss_sRsR::synapse0x26a6b30() {
   return (neuron0x26965e0()*-0.200736);
}

double NNfunction_ss_sRsR::synapse0x26a6b70() {
   return (neuron0x2696920()*0.0305794);
}

double NNfunction_ss_sRsR::synapse0x26a6bb0() {
   return (neuron0x2696c60()*-0.109614);
}

double NNfunction_ss_sRsR::synapse0x26a6bf0() {
   return (neuron0x2696fa0()*-0.130982);
}

double NNfunction_ss_sRsR::synapse0x26a6c30() {
   return (neuron0x26972e0()*-0.154101);
}

double NNfunction_ss_sRsR::synapse0x26a6c70() {
   return (neuron0x2697620()*0.170552);
}

double NNfunction_ss_sRsR::synapse0x26a6700() {
   return (neuron0x2697960()*-0.497087);
}

double NNfunction_ss_sRsR::synapse0x26a6740() {
   return (neuron0x2697ec0()*0.213203);
}

double NNfunction_ss_sRsR::synapse0x26a6dc0() {
   return (neuron0x26980e0()*-1.07372);
}

double NNfunction_ss_sRsR::synapse0x26a6e00() {
   return (neuron0x2698420()*-0.154414);
}

double NNfunction_ss_sRsR::synapse0x26a6e40() {
   return (neuron0x2698760()*0.0174214);
}

double NNfunction_ss_sRsR::synapse0x26a6e80() {
   return (neuron0x2698aa0()*-0.109035);
}

double NNfunction_ss_sRsR::synapse0x26a6ec0() {
   return (neuron0x2698de0()*0.20011);
}

double NNfunction_ss_sRsR::synapse0x26a6f00() {
   return (neuron0x2699120()*-0.348349);
}

double NNfunction_ss_sRsR::synapse0x26a7280() {
   return (neuron0x2694560()*0.340356);
}

double NNfunction_ss_sRsR::synapse0x26a72c0() {
   return (neuron0x26948a0()*0.273619);
}

double NNfunction_ss_sRsR::synapse0x26a7300() {
   return (neuron0x2694be0()*0.579849);
}

double NNfunction_ss_sRsR::synapse0x26a7340() {
   return (neuron0x2694f20()*-0.622771);
}

double NNfunction_ss_sRsR::synapse0x26a7380() {
   return (neuron0x2695260()*0.634403);
}

double NNfunction_ss_sRsR::synapse0x26a73c0() {
   return (neuron0x26955a0()*-0.102742);
}

double NNfunction_ss_sRsR::synapse0x26a7400() {
   return (neuron0x26958e0()*0.0696648);
}

double NNfunction_ss_sRsR::synapse0x26a7440() {
   return (neuron0x2695c20()*0.257094);
}

double NNfunction_ss_sRsR::synapse0x26a7480() {
   return (neuron0x2695f60()*-0.519904);
}

double NNfunction_ss_sRsR::synapse0x26a74c0() {
   return (neuron0x26962a0()*-0.519569);
}

double NNfunction_ss_sRsR::synapse0x26a7500() {
   return (neuron0x26965e0()*0.157786);
}

double NNfunction_ss_sRsR::synapse0x26a7540() {
   return (neuron0x2696920()*-0.0238607);
}

double NNfunction_ss_sRsR::synapse0x26a7580() {
   return (neuron0x2696c60()*-0.372417);
}

double NNfunction_ss_sRsR::synapse0x26a75c0() {
   return (neuron0x2696fa0()*0.102285);
}

double NNfunction_ss_sRsR::synapse0x26a7600() {
   return (neuron0x26972e0()*-0.831655);
}

double NNfunction_ss_sRsR::synapse0x26a7640() {
   return (neuron0x2697620()*-0.759516);
}

double NNfunction_ss_sRsR::synapse0x26a70d0() {
   return (neuron0x2697960()*1.15214);
}

double NNfunction_ss_sRsR::synapse0x26a7110() {
   return (neuron0x2697ec0()*-0.331553);
}

double NNfunction_ss_sRsR::synapse0x26a7790() {
   return (neuron0x26980e0()*-0.236327);
}

double NNfunction_ss_sRsR::synapse0x26a77d0() {
   return (neuron0x2698420()*0.539191);
}

double NNfunction_ss_sRsR::synapse0x26a7810() {
   return (neuron0x2698760()*-0.338642);
}

double NNfunction_ss_sRsR::synapse0x26a7850() {
   return (neuron0x2698aa0()*0.683421);
}

double NNfunction_ss_sRsR::synapse0x26a7890() {
   return (neuron0x2698de0()*-0.443482);
}

double NNfunction_ss_sRsR::synapse0x26a78d0() {
   return (neuron0x2699120()*-0.136795);
}

double NNfunction_ss_sRsR::synapse0x26a7c50() {
   return (neuron0x2694560()*-0.134648);
}

double NNfunction_ss_sRsR::synapse0x26a7c90() {
   return (neuron0x26948a0()*-0.173304);
}

double NNfunction_ss_sRsR::synapse0x26a7cd0() {
   return (neuron0x2694be0()*-0.10227);
}

double NNfunction_ss_sRsR::synapse0x26a7d10() {
   return (neuron0x2694f20()*-0.161455);
}

double NNfunction_ss_sRsR::synapse0x26a7d50() {
   return (neuron0x2695260()*-0.0854923);
}

double NNfunction_ss_sRsR::synapse0x26a7d90() {
   return (neuron0x26955a0()*-0.039362);
}

double NNfunction_ss_sRsR::synapse0x26a7dd0() {
   return (neuron0x26958e0()*0.313203);
}

double NNfunction_ss_sRsR::synapse0x26a7e10() {
   return (neuron0x2695c20()*0.0670293);
}

double NNfunction_ss_sRsR::synapse0x26a7e50() {
   return (neuron0x2695f60()*0.325961);
}

double NNfunction_ss_sRsR::synapse0x26a0010() {
   return (neuron0x26962a0()*-1.67244);
}

double NNfunction_ss_sRsR::synapse0x26a0050() {
   return (neuron0x26965e0()*0.180771);
}

double NNfunction_ss_sRsR::synapse0x26a0090() {
   return (neuron0x2696920()*-0.247205);
}

double NNfunction_ss_sRsR::synapse0x26a00d0() {
   return (neuron0x2696c60()*-0.0898181);
}

double NNfunction_ss_sRsR::synapse0x26a0110() {
   return (neuron0x2696fa0()*0.164496);
}

double NNfunction_ss_sRsR::synapse0x26a0150() {
   return (neuron0x26972e0()*-0.106075);
}

double NNfunction_ss_sRsR::synapse0x26a0190() {
   return (neuron0x2697620()*-0.0438057);
}

double NNfunction_ss_sRsR::synapse0x26a7aa0() {
   return (neuron0x2697960()*0.0925691);
}

double NNfunction_ss_sRsR::synapse0x26a7ae0() {
   return (neuron0x2697ec0()*0.0718177);
}

double NNfunction_ss_sRsR::synapse0x26a02e0() {
   return (neuron0x26980e0()*0.123162);
}

double NNfunction_ss_sRsR::synapse0x26a0320() {
   return (neuron0x2698420()*0.017982);
}

double NNfunction_ss_sRsR::synapse0x26a0360() {
   return (neuron0x2698760()*-0.0830548);
}

double NNfunction_ss_sRsR::synapse0x26a03a0() {
   return (neuron0x2698aa0()*-0.051164);
}

double NNfunction_ss_sRsR::synapse0x26a03e0() {
   return (neuron0x2698de0()*-0.0613948);
}

double NNfunction_ss_sRsR::synapse0x26a0420() {
   return (neuron0x2699120()*0.139867);
}

double NNfunction_ss_sRsR::synapse0x26a07a0() {
   return (neuron0x2694560()*0.956113);
}

double NNfunction_ss_sRsR::synapse0x26a07e0() {
   return (neuron0x26948a0()*0.87303);
}

double NNfunction_ss_sRsR::synapse0x26a0820() {
   return (neuron0x2694be0()*-0.366638);
}

double NNfunction_ss_sRsR::synapse0x26a0860() {
   return (neuron0x2694f20()*-0.0361129);
}

double NNfunction_ss_sRsR::synapse0x26a08a0() {
   return (neuron0x2695260()*0.0317115);
}

double NNfunction_ss_sRsR::synapse0x26a08e0() {
   return (neuron0x26955a0()*0.513284);
}

double NNfunction_ss_sRsR::synapse0x26a0920() {
   return (neuron0x26958e0()*-0.379387);
}

double NNfunction_ss_sRsR::synapse0x26a0960() {
   return (neuron0x2695c20()*-0.0470727);
}

double NNfunction_ss_sRsR::synapse0x26a09a0() {
   return (neuron0x2695f60()*1.21086);
}

double NNfunction_ss_sRsR::synapse0x26a09e0() {
   return (neuron0x26962a0()*-0.681916);
}

double NNfunction_ss_sRsR::synapse0x26a0a20() {
   return (neuron0x26965e0()*0.645635);
}

double NNfunction_ss_sRsR::synapse0x26a0a60() {
   return (neuron0x2696920()*0.218135);
}

double NNfunction_ss_sRsR::synapse0x26a0aa0() {
   return (neuron0x2696c60()*-0.302186);
}

double NNfunction_ss_sRsR::synapse0x26a0ae0() {
   return (neuron0x2696fa0()*-0.989564);
}

double NNfunction_ss_sRsR::synapse0x26a0b20() {
   return (neuron0x26972e0()*0.404444);
}

double NNfunction_ss_sRsR::synapse0x26a0b60() {
   return (neuron0x2697620()*-0.417496);
}

double NNfunction_ss_sRsR::synapse0x26a05f0() {
   return (neuron0x2697960()*-0.841565);
}

double NNfunction_ss_sRsR::synapse0x26a0630() {
   return (neuron0x2697ec0()*0.383765);
}

double NNfunction_ss_sRsR::synapse0x26a0cb0() {
   return (neuron0x26980e0()*-1.20148);
}

double NNfunction_ss_sRsR::synapse0x26a0cf0() {
   return (neuron0x2698420()*0.781906);
}

double NNfunction_ss_sRsR::synapse0x26a0d30() {
   return (neuron0x2698760()*-0.938331);
}

double NNfunction_ss_sRsR::synapse0x26a0d70() {
   return (neuron0x2698aa0()*-0.740199);
}

double NNfunction_ss_sRsR::synapse0x26a0db0() {
   return (neuron0x2698de0()*0.488115);
}

double NNfunction_ss_sRsR::synapse0x26a0df0() {
   return (neuron0x2699120()*0.53323);
}

double NNfunction_ss_sRsR::synapse0x26a0fc0() {
   return (neuron0x2694560()*-0.369532);
}

double NNfunction_ss_sRsR::synapse0x26aa050() {
   return (neuron0x26948a0()*0.784602);
}

double NNfunction_ss_sRsR::synapse0x26aa090() {
   return (neuron0x2694be0()*-0.0472866);
}

double NNfunction_ss_sRsR::synapse0x26aa0d0() {
   return (neuron0x2694f20()*-0.557031);
}

double NNfunction_ss_sRsR::synapse0x26aa110() {
   return (neuron0x2695260()*0.109533);
}

double NNfunction_ss_sRsR::synapse0x26aa150() {
   return (neuron0x26955a0()*0.269749);
}

double NNfunction_ss_sRsR::synapse0x26aa190() {
   return (neuron0x26958e0()*0.946777);
}

double NNfunction_ss_sRsR::synapse0x26aa1d0() {
   return (neuron0x2695c20()*0.46921);
}

double NNfunction_ss_sRsR::synapse0x26aa210() {
   return (neuron0x2695f60()*-0.264755);
}

double NNfunction_ss_sRsR::synapse0x26aa250() {
   return (neuron0x26962a0()*-0.596411);
}

double NNfunction_ss_sRsR::synapse0x26aa290() {
   return (neuron0x26965e0()*-0.569125);
}

double NNfunction_ss_sRsR::synapse0x26aa2d0() {
   return (neuron0x2696920()*-0.671456);
}

double NNfunction_ss_sRsR::synapse0x26aa310() {
   return (neuron0x2696c60()*-0.128038);
}

double NNfunction_ss_sRsR::synapse0x26aa350() {
   return (neuron0x2696fa0()*0.744414);
}

double NNfunction_ss_sRsR::synapse0x26aa390() {
   return (neuron0x26972e0()*-0.521846);
}

double NNfunction_ss_sRsR::synapse0x26aa3d0() {
   return (neuron0x2697620()*-0.0124597);
}

double NNfunction_ss_sRsR::synapse0x26a9ea0() {
   return (neuron0x2697960()*0.633719);
}

double NNfunction_ss_sRsR::synapse0x26a9ee0() {
   return (neuron0x2697ec0()*-0.31739);
}

double NNfunction_ss_sRsR::synapse0x26aa520() {
   return (neuron0x26980e0()*0.910287);
}

double NNfunction_ss_sRsR::synapse0x26aa560() {
   return (neuron0x2698420()*-0.479359);
}

double NNfunction_ss_sRsR::synapse0x26aa5a0() {
   return (neuron0x2698760()*-0.117263);
}

double NNfunction_ss_sRsR::synapse0x26aa5e0() {
   return (neuron0x2698aa0()*-0.888407);
}

double NNfunction_ss_sRsR::synapse0x26aa620() {
   return (neuron0x2698de0()*-0.239458);
}

double NNfunction_ss_sRsR::synapse0x26aa660() {
   return (neuron0x2699120()*-0.0598038);
}

double NNfunction_ss_sRsR::synapse0x26aa9e0() {
   return (neuron0x2694560()*0.0193355);
}

double NNfunction_ss_sRsR::synapse0x26aaa20() {
   return (neuron0x26948a0()*0.676582);
}

double NNfunction_ss_sRsR::synapse0x26aaa60() {
   return (neuron0x2694be0()*-0.277095);
}

double NNfunction_ss_sRsR::synapse0x26aaaa0() {
   return (neuron0x2694f20()*0.743916);
}

double NNfunction_ss_sRsR::synapse0x26aaae0() {
   return (neuron0x2695260()*0.875847);
}

double NNfunction_ss_sRsR::synapse0x26aab20() {
   return (neuron0x26955a0()*0.325614);
}

double NNfunction_ss_sRsR::synapse0x26aab60() {
   return (neuron0x26958e0()*0.0972179);
}

double NNfunction_ss_sRsR::synapse0x26aaba0() {
   return (neuron0x2695c20()*-0.096577);
}

double NNfunction_ss_sRsR::synapse0x26aabe0() {
   return (neuron0x2695f60()*0.0491525);
}

double NNfunction_ss_sRsR::synapse0x26aac20() {
   return (neuron0x26962a0()*-0.0527554);
}

double NNfunction_ss_sRsR::synapse0x26aac60() {
   return (neuron0x26965e0()*0.564467);
}

double NNfunction_ss_sRsR::synapse0x26aaca0() {
   return (neuron0x2696920()*-1.0708);
}

double NNfunction_ss_sRsR::synapse0x26aace0() {
   return (neuron0x2696c60()*-0.156775);
}

double NNfunction_ss_sRsR::synapse0x26aad20() {
   return (neuron0x2696fa0()*-1.48627);
}

double NNfunction_ss_sRsR::synapse0x26aad60() {
   return (neuron0x26972e0()*-0.638622);
}

double NNfunction_ss_sRsR::synapse0x26aada0() {
   return (neuron0x2697620()*0.530309);
}

double NNfunction_ss_sRsR::synapse0x26aa830() {
   return (neuron0x2697960()*-0.344194);
}

double NNfunction_ss_sRsR::synapse0x26aa870() {
   return (neuron0x2697ec0()*0.0642736);
}

double NNfunction_ss_sRsR::synapse0x26aaef0() {
   return (neuron0x26980e0()*-0.110825);
}

double NNfunction_ss_sRsR::synapse0x26aaf30() {
   return (neuron0x2698420()*0.0125206);
}

double NNfunction_ss_sRsR::synapse0x26aaf70() {
   return (neuron0x2698760()*0.397826);
}

double NNfunction_ss_sRsR::synapse0x26aafb0() {
   return (neuron0x2698aa0()*-0.260316);
}

double NNfunction_ss_sRsR::synapse0x26aaff0() {
   return (neuron0x2698de0()*-0.451583);
}

double NNfunction_ss_sRsR::synapse0x26ab030() {
   return (neuron0x2699120()*0.238059);
}

double NNfunction_ss_sRsR::synapse0x26ab3b0() {
   return (neuron0x2694560()*-0.0404423);
}

double NNfunction_ss_sRsR::synapse0x26ab3f0() {
   return (neuron0x26948a0()*-0.0561039);
}

double NNfunction_ss_sRsR::synapse0x26ab430() {
   return (neuron0x2694be0()*-0.018584);
}

double NNfunction_ss_sRsR::synapse0x26ab470() {
   return (neuron0x2694f20()*-0.287592);
}

double NNfunction_ss_sRsR::synapse0x26ab4b0() {
   return (neuron0x2695260()*0.0470846);
}

double NNfunction_ss_sRsR::synapse0x26ab4f0() {
   return (neuron0x26955a0()*0.0323341);
}

double NNfunction_ss_sRsR::synapse0x26ab530() {
   return (neuron0x26958e0()*-0.0381801);
}

double NNfunction_ss_sRsR::synapse0x26ab570() {
   return (neuron0x2695c20()*0.0283041);
}

double NNfunction_ss_sRsR::synapse0x26ab5b0() {
   return (neuron0x2695f60()*0.0511185);
}

double NNfunction_ss_sRsR::synapse0x26ab5f0() {
   return (neuron0x26962a0()*0.0110569);
}

double NNfunction_ss_sRsR::synapse0x26ab630() {
   return (neuron0x26965e0()*0.0174956);
}

double NNfunction_ss_sRsR::synapse0x26ab670() {
   return (neuron0x2696920()*0.114444);
}

double NNfunction_ss_sRsR::synapse0x26ab6b0() {
   return (neuron0x2696c60()*0.100778);
}

double NNfunction_ss_sRsR::synapse0x26ab6f0() {
   return (neuron0x2696fa0()*-0.0678024);
}

double NNfunction_ss_sRsR::synapse0x26ab730() {
   return (neuron0x26972e0()*0.234838);
}

double NNfunction_ss_sRsR::synapse0x26ab770() {
   return (neuron0x2697620()*0.205328);
}

double NNfunction_ss_sRsR::synapse0x26ab200() {
   return (neuron0x2697960()*-0.213904);
}

double NNfunction_ss_sRsR::synapse0x26ab240() {
   return (neuron0x2697ec0()*0.0728503);
}

double NNfunction_ss_sRsR::synapse0x26ab8c0() {
   return (neuron0x26980e0()*-0.336355);
}

double NNfunction_ss_sRsR::synapse0x26ab900() {
   return (neuron0x2698420()*0.0331785);
}

double NNfunction_ss_sRsR::synapse0x26ab940() {
   return (neuron0x2698760()*-0.00643924);
}

double NNfunction_ss_sRsR::synapse0x26ab980() {
   return (neuron0x2698aa0()*-0.0129101);
}

double NNfunction_ss_sRsR::synapse0x26ab9c0() {
   return (neuron0x2698de0()*0.00160879);
}

double NNfunction_ss_sRsR::synapse0x26aba00() {
   return (neuron0x2699120()*0.0169515);
}

double NNfunction_ss_sRsR::synapse0x26abd80() {
   return (neuron0x2694560()*-0.191858);
}

double NNfunction_ss_sRsR::synapse0x26abdc0() {
   return (neuron0x26948a0()*0.11154);
}

double NNfunction_ss_sRsR::synapse0x26abe00() {
   return (neuron0x2694be0()*0.0105911);
}

double NNfunction_ss_sRsR::synapse0x26abe40() {
   return (neuron0x2694f20()*-0.871463);
}

double NNfunction_ss_sRsR::synapse0x26abe80() {
   return (neuron0x2695260()*0.259929);
}

double NNfunction_ss_sRsR::synapse0x26abec0() {
   return (neuron0x26955a0()*0.0754517);
}

double NNfunction_ss_sRsR::synapse0x26abf00() {
   return (neuron0x26958e0()*0.593731);
}

double NNfunction_ss_sRsR::synapse0x26abf40() {
   return (neuron0x2695c20()*-0.51156);
}

double NNfunction_ss_sRsR::synapse0x26abf80() {
   return (neuron0x2695f60()*-0.0233713);
}

double NNfunction_ss_sRsR::synapse0x26abfc0() {
   return (neuron0x26962a0()*-0.189876);
}

double NNfunction_ss_sRsR::synapse0x26ac000() {
   return (neuron0x26965e0()*0.101107);
}

double NNfunction_ss_sRsR::synapse0x26ac040() {
   return (neuron0x2696920()*-0.180326);
}

double NNfunction_ss_sRsR::synapse0x26ac080() {
   return (neuron0x2696c60()*-0.324421);
}

double NNfunction_ss_sRsR::synapse0x26ac0c0() {
   return (neuron0x2696fa0()*-0.0572369);
}

double NNfunction_ss_sRsR::synapse0x26ac100() {
   return (neuron0x26972e0()*0.115271);
}

double NNfunction_ss_sRsR::synapse0x26ac140() {
   return (neuron0x2697620()*0.158835);
}

double NNfunction_ss_sRsR::synapse0x26abbd0() {
   return (neuron0x2697960()*0.056945);
}

double NNfunction_ss_sRsR::synapse0x26abc10() {
   return (neuron0x2697ec0()*-0.17012);
}

double NNfunction_ss_sRsR::synapse0x26ac290() {
   return (neuron0x26980e0()*0.0598616);
}

double NNfunction_ss_sRsR::synapse0x26ac2d0() {
   return (neuron0x2698420()*-0.161039);
}

double NNfunction_ss_sRsR::synapse0x26ac310() {
   return (neuron0x2698760()*-0.162151);
}

double NNfunction_ss_sRsR::synapse0x26ac350() {
   return (neuron0x2698aa0()*0.0737092);
}

double NNfunction_ss_sRsR::synapse0x26ac390() {
   return (neuron0x2698de0()*0.102813);
}

double NNfunction_ss_sRsR::synapse0x26ac3d0() {
   return (neuron0x2699120()*0.0127785);
}

double NNfunction_ss_sRsR::synapse0x26ac750() {
   return (neuron0x2694560()*0.00706129);
}

double NNfunction_ss_sRsR::synapse0x26ac790() {
   return (neuron0x26948a0()*0.225772);
}

double NNfunction_ss_sRsR::synapse0x26ac7d0() {
   return (neuron0x2694be0()*-0.233185);
}

double NNfunction_ss_sRsR::synapse0x26ac810() {
   return (neuron0x2694f20()*0.874684);
}

double NNfunction_ss_sRsR::synapse0x26ac850() {
   return (neuron0x2695260()*-0.309217);
}

double NNfunction_ss_sRsR::synapse0x26ac890() {
   return (neuron0x26955a0()*1.01256);
}

double NNfunction_ss_sRsR::synapse0x26ac8d0() {
   return (neuron0x26958e0()*0.486677);
}

double NNfunction_ss_sRsR::synapse0x26ac910() {
   return (neuron0x2695c20()*-0.248417);
}

double NNfunction_ss_sRsR::synapse0x26ac950() {
   return (neuron0x2695f60()*0.0660725);
}

double NNfunction_ss_sRsR::synapse0x26ac990() {
   return (neuron0x26962a0()*0.226193);
}

double NNfunction_ss_sRsR::synapse0x26ac9d0() {
   return (neuron0x26965e0()*-0.16381);
}

double NNfunction_ss_sRsR::synapse0x26aca10() {
   return (neuron0x2696920()*-0.00826587);
}

double NNfunction_ss_sRsR::synapse0x26aca50() {
   return (neuron0x2696c60()*0.00730258);
}

double NNfunction_ss_sRsR::synapse0x26aca90() {
   return (neuron0x2696fa0()*-0.186737);
}

double NNfunction_ss_sRsR::synapse0x26acad0() {
   return (neuron0x26972e0()*0.200415);
}

double NNfunction_ss_sRsR::synapse0x26acb10() {
   return (neuron0x2697620()*-0.521672);
}

double NNfunction_ss_sRsR::synapse0x26ac5a0() {
   return (neuron0x2697960()*0.596379);
}

double NNfunction_ss_sRsR::synapse0x26ac5e0() {
   return (neuron0x2697ec0()*-0.231802);
}

double NNfunction_ss_sRsR::synapse0x26acc60() {
   return (neuron0x26980e0()*0.63714);
}

double NNfunction_ss_sRsR::synapse0x26acca0() {
   return (neuron0x2698420()*0.570624);
}

double NNfunction_ss_sRsR::synapse0x26acce0() {
   return (neuron0x2698760()*0.234373);
}

double NNfunction_ss_sRsR::synapse0x26acd20() {
   return (neuron0x2698aa0()*-0.0245235);
}

double NNfunction_ss_sRsR::synapse0x26acd60() {
   return (neuron0x2698de0()*-0.602696);
}

double NNfunction_ss_sRsR::synapse0x26acda0() {
   return (neuron0x2699120()*-0.2563);
}

double NNfunction_ss_sRsR::synapse0x26ad120() {
   return (neuron0x2694560()*-0.0305927);
}

double NNfunction_ss_sRsR::synapse0x26ad160() {
   return (neuron0x26948a0()*0.127473);
}

double NNfunction_ss_sRsR::synapse0x26ad1a0() {
   return (neuron0x2694be0()*-0.493919);
}

double NNfunction_ss_sRsR::synapse0x26ad1e0() {
   return (neuron0x2694f20()*0.390201);
}

double NNfunction_ss_sRsR::synapse0x26ad220() {
   return (neuron0x2695260()*0.320229);
}

double NNfunction_ss_sRsR::synapse0x26ad260() {
   return (neuron0x26955a0()*0.0540113);
}

double NNfunction_ss_sRsR::synapse0x26ad2a0() {
   return (neuron0x26958e0()*-0.367765);
}

double NNfunction_ss_sRsR::synapse0x26ad2e0() {
   return (neuron0x2695c20()*0.052303);
}

double NNfunction_ss_sRsR::synapse0x26ad320() {
   return (neuron0x2695f60()*0.848336);
}

double NNfunction_ss_sRsR::synapse0x26ad360() {
   return (neuron0x26962a0()*0.358865);
}

double NNfunction_ss_sRsR::synapse0x26ad3a0() {
   return (neuron0x26965e0()*-0.804638);
}

double NNfunction_ss_sRsR::synapse0x26ad3e0() {
   return (neuron0x2696920()*-0.460945);
}

double NNfunction_ss_sRsR::synapse0x26ad420() {
   return (neuron0x2696c60()*0.436852);
}

double NNfunction_ss_sRsR::synapse0x26ad460() {
   return (neuron0x2696fa0()*0.493288);
}

double NNfunction_ss_sRsR::synapse0x26ad4a0() {
   return (neuron0x26972e0()*-0.056828);
}

double NNfunction_ss_sRsR::synapse0x26ad4e0() {
   return (neuron0x2697620()*-0.00598878);
}

double NNfunction_ss_sRsR::synapse0x26acf70() {
   return (neuron0x2697960()*-0.115362);
}

double NNfunction_ss_sRsR::synapse0x26acfb0() {
   return (neuron0x2697ec0()*0.069294);
}

double NNfunction_ss_sRsR::synapse0x26ad630() {
   return (neuron0x26980e0()*-1.27294);
}

double NNfunction_ss_sRsR::synapse0x26ad670() {
   return (neuron0x2698420()*-0.671825);
}

double NNfunction_ss_sRsR::synapse0x26ad6b0() {
   return (neuron0x2698760()*0.299423);
}

double NNfunction_ss_sRsR::synapse0x26ad6f0() {
   return (neuron0x2698aa0()*-0.321137);
}

double NNfunction_ss_sRsR::synapse0x26ad730() {
   return (neuron0x2698de0()*0.267144);
}

double NNfunction_ss_sRsR::synapse0x26ad770() {
   return (neuron0x2699120()*0.3704);
}

double NNfunction_ss_sRsR::synapse0x26adaf0() {
   return (neuron0x2694560()*0.0636442);
}

double NNfunction_ss_sRsR::synapse0x26adb30() {
   return (neuron0x26948a0()*-0.101051);
}

double NNfunction_ss_sRsR::synapse0x26adb70() {
   return (neuron0x2694be0()*0.0962512);
}

double NNfunction_ss_sRsR::synapse0x26adbb0() {
   return (neuron0x2694f20()*0.940591);
}

double NNfunction_ss_sRsR::synapse0x26adbf0() {
   return (neuron0x2695260()*0.164522);
}

double NNfunction_ss_sRsR::synapse0x26adc30() {
   return (neuron0x26955a0()*-0.047274);
}

double NNfunction_ss_sRsR::synapse0x26adc70() {
   return (neuron0x26958e0()*-0.221566);
}

double NNfunction_ss_sRsR::synapse0x26adcb0() {
   return (neuron0x2695c20()*0.0117614);
}

double NNfunction_ss_sRsR::synapse0x26adcf0() {
   return (neuron0x2695f60()*0.208603);
}

double NNfunction_ss_sRsR::synapse0x26add30() {
   return (neuron0x26962a0()*-0.0378667);
}

double NNfunction_ss_sRsR::synapse0x26add70() {
   return (neuron0x26965e0()*-0.0865235);
}

double NNfunction_ss_sRsR::synapse0x26addb0() {
   return (neuron0x2696920()*0.0487935);
}

double NNfunction_ss_sRsR::synapse0x26addf0() {
   return (neuron0x2696c60()*-0.0282972);
}

double NNfunction_ss_sRsR::synapse0x26ade30() {
   return (neuron0x2696fa0()*0.593784);
}

double NNfunction_ss_sRsR::synapse0x26ade70() {
   return (neuron0x26972e0()*-0.0902458);
}

double NNfunction_ss_sRsR::synapse0x26adeb0() {
   return (neuron0x2697620()*0.259584);
}

double NNfunction_ss_sRsR::synapse0x26ad940() {
   return (neuron0x2697960()*0.116278);
}

double NNfunction_ss_sRsR::synapse0x26ad980() {
   return (neuron0x2697ec0()*1.21978);
}

double NNfunction_ss_sRsR::synapse0x26ae000() {
   return (neuron0x26980e0()*-0.496242);
}

double NNfunction_ss_sRsR::synapse0x26ae040() {
   return (neuron0x2698420()*0.490296);
}

double NNfunction_ss_sRsR::synapse0x26ae080() {
   return (neuron0x2698760()*0.416732);
}

double NNfunction_ss_sRsR::synapse0x26ae0c0() {
   return (neuron0x2698aa0()*-0.170858);
}

double NNfunction_ss_sRsR::synapse0x26ae100() {
   return (neuron0x2698de0()*-0.0219225);
}

double NNfunction_ss_sRsR::synapse0x26ae140() {
   return (neuron0x2699120()*0.158883);
}

double NNfunction_ss_sRsR::synapse0x26ae4c0() {
   return (neuron0x2694560()*-0.0484104);
}

double NNfunction_ss_sRsR::synapse0x26ae500() {
   return (neuron0x26948a0()*-0.0423529);
}

double NNfunction_ss_sRsR::synapse0x26ae540() {
   return (neuron0x2694be0()*0.0227107);
}

double NNfunction_ss_sRsR::synapse0x26ae580() {
   return (neuron0x2694f20()*-10.676);
}

double NNfunction_ss_sRsR::synapse0x26ae5c0() {
   return (neuron0x2695260()*0.0131197);
}

double NNfunction_ss_sRsR::synapse0x26ae600() {
   return (neuron0x26955a0()*0.0276178);
}

double NNfunction_ss_sRsR::synapse0x26ae640() {
   return (neuron0x26958e0()*-0.0353287);
}

double NNfunction_ss_sRsR::synapse0x26ae680() {
   return (neuron0x2695c20()*-0.00891172);
}

double NNfunction_ss_sRsR::synapse0x26ae6c0() {
   return (neuron0x2695f60()*0.0171537);
}

double NNfunction_ss_sRsR::synapse0x26ae700() {
   return (neuron0x26962a0()*-0.00853753);
}

double NNfunction_ss_sRsR::synapse0x26ae740() {
   return (neuron0x26965e0()*0.0224908);
}

double NNfunction_ss_sRsR::synapse0x26ae780() {
   return (neuron0x2696920()*0.02513);
}

double NNfunction_ss_sRsR::synapse0x26ae7c0() {
   return (neuron0x2696c60()*0.0217273);
}

double NNfunction_ss_sRsR::synapse0x26ae800() {
   return (neuron0x2696fa0()*-0.0797062);
}

double NNfunction_ss_sRsR::synapse0x26ae840() {
   return (neuron0x26972e0()*0.00628086);
}

double NNfunction_ss_sRsR::synapse0x26ae880() {
   return (neuron0x2697620()*0.0534996);
}

double NNfunction_ss_sRsR::synapse0x26ae310() {
   return (neuron0x2697960()*-0.111542);
}

double NNfunction_ss_sRsR::synapse0x26ae350() {
   return (neuron0x2697ec0()*0.0782388);
}

double NNfunction_ss_sRsR::synapse0x26ae9d0() {
   return (neuron0x26980e0()*0.359176);
}

double NNfunction_ss_sRsR::synapse0x26aea10() {
   return (neuron0x2698420()*-0.068034);
}

double NNfunction_ss_sRsR::synapse0x26aea50() {
   return (neuron0x2698760()*0.0650287);
}

double NNfunction_ss_sRsR::synapse0x26aea90() {
   return (neuron0x2698aa0()*0.0245603);
}

double NNfunction_ss_sRsR::synapse0x26aead0() {
   return (neuron0x2698de0()*0.00811936);
}

double NNfunction_ss_sRsR::synapse0x26aeb10() {
   return (neuron0x2699120()*0.0270078);
}

double NNfunction_ss_sRsR::synapse0x26aee90() {
   return (neuron0x2694560()*-0.379961);
}

double NNfunction_ss_sRsR::synapse0x26a3460() {
   return (neuron0x26948a0()*-0.186385);
}

double NNfunction_ss_sRsR::synapse0x26a34a0() {
   return (neuron0x2694be0()*-0.160621);
}

double NNfunction_ss_sRsR::synapse0x26a34e0() {
   return (neuron0x2694f20()*0.0739811);
}

double NNfunction_ss_sRsR::synapse0x26a3730() {
   return (neuron0x2695260()*0.624671);
}

double NNfunction_ss_sRsR::synapse0x26a3770() {
   return (neuron0x26955a0()*-0.781609);
}

double NNfunction_ss_sRsR::synapse0x26a37b0() {
   return (neuron0x26958e0()*-0.322862);
}

double NNfunction_ss_sRsR::synapse0x26a3a00() {
   return (neuron0x2695c20()*-0.470492);
}

double NNfunction_ss_sRsR::synapse0x26a3a40() {
   return (neuron0x2695f60()*0.665987);
}

double NNfunction_ss_sRsR::synapse0x26a3c90() {
   return (neuron0x26962a0()*0.318182);
}

double NNfunction_ss_sRsR::synapse0x26a3cd0() {
   return (neuron0x26965e0()*-0.234407);
}

double NNfunction_ss_sRsR::synapse0x26a3d10() {
   return (neuron0x2696920()*0.461522);
}

double NNfunction_ss_sRsR::synapse0x26a3f60() {
   return (neuron0x2696c60()*0.634578);
}

double NNfunction_ss_sRsR::synapse0x26a3fa0() {
   return (neuron0x2696fa0()*0.0814725);
}

double NNfunction_ss_sRsR::synapse0x26a41f0() {
   return (neuron0x26972e0()*0.331875);
}

double NNfunction_ss_sRsR::synapse0x26a4230() {
   return (neuron0x2697620()*0.0439149);
}

double NNfunction_ss_sRsR::synapse0x26aece0() {
   return (neuron0x2697960()*0.92735);
}

double NNfunction_ss_sRsR::synapse0x26aed20() {
   return (neuron0x2697ec0()*0.313931);
}

double NNfunction_ss_sRsR::synapse0x26a4380() {
   return (neuron0x26980e0()*-0.0946964);
}

double NNfunction_ss_sRsR::synapse0x26a4890() {
   return (neuron0x2698420()*-0.19171);
}

double NNfunction_ss_sRsR::synapse0x26a48d0() {
   return (neuron0x2698760()*-0.151728);
}

double NNfunction_ss_sRsR::synapse0x26a4910() {
   return (neuron0x2698aa0()*-0.248046);
}

double NNfunction_ss_sRsR::synapse0x26a4b60() {
   return (neuron0x2698de0()*-0.0519575);
}

double NNfunction_ss_sRsR::synapse0x26a4ba0() {
   return (neuron0x2699120()*0.0541793);
}

double NNfunction_ss_sRsR::synapse0x26a4450() {
   return (neuron0x2694560()*-0.28972);
}

double NNfunction_ss_sRsR::synapse0x26a4490() {
   return (neuron0x26948a0()*0.187061);
}

double NNfunction_ss_sRsR::synapse0x26a44d0() {
   return (neuron0x2694be0()*-0.679085);
}

double NNfunction_ss_sRsR::synapse0x26a4510() {
   return (neuron0x2694f20()*0.880568);
}

double NNfunction_ss_sRsR::synapse0x26a4e90() {
   return (neuron0x2695260()*-0.287745);
}

double NNfunction_ss_sRsR::synapse0x26b11e0() {
   return (neuron0x26955a0()*-0.182705);
}

double NNfunction_ss_sRsR::synapse0x26b1220() {
   return (neuron0x26958e0()*-0.220324);
}

double NNfunction_ss_sRsR::synapse0x26b1260() {
   return (neuron0x2695c20()*0.458113);
}

double NNfunction_ss_sRsR::synapse0x26b12a0() {
   return (neuron0x2695f60()*0.920688);
}

double NNfunction_ss_sRsR::synapse0x26b12e0() {
   return (neuron0x26962a0()*-0.116887);
}

double NNfunction_ss_sRsR::synapse0x26b1320() {
   return (neuron0x26965e0()*-0.464946);
}

double NNfunction_ss_sRsR::synapse0x26b1360() {
   return (neuron0x2696920()*-0.437226);
}

double NNfunction_ss_sRsR::synapse0x26b13a0() {
   return (neuron0x2696c60()*0.976173);
}

double NNfunction_ss_sRsR::synapse0x26b13e0() {
   return (neuron0x2696fa0()*0.427118);
}

double NNfunction_ss_sRsR::synapse0x26b1420() {
   return (neuron0x26972e0()*0.0714174);
}

double NNfunction_ss_sRsR::synapse0x26b1460() {
   return (neuron0x2697620()*0.924951);
}

double NNfunction_ss_sRsR::synapse0x26a4d70() {
   return (neuron0x2697960()*-0.454299);
}

double NNfunction_ss_sRsR::synapse0x26a4db0() {
   return (neuron0x2697ec0()*0.681369);
}

double NNfunction_ss_sRsR::synapse0x26b15b0() {
   return (neuron0x26980e0()*-0.142795);
}

double NNfunction_ss_sRsR::synapse0x26b15f0() {
   return (neuron0x2698420()*0.354461);
}

double NNfunction_ss_sRsR::synapse0x26b1630() {
   return (neuron0x2698760()*1.84872);
}

double NNfunction_ss_sRsR::synapse0x26b1670() {
   return (neuron0x2698aa0()*0.257452);
}

double NNfunction_ss_sRsR::synapse0x26b16b0() {
   return (neuron0x2698de0()*-0.369299);
}

double NNfunction_ss_sRsR::synapse0x26b16f0() {
   return (neuron0x2699120()*-0.0148701);
}

double NNfunction_ss_sRsR::synapse0x26b1a70() {
   return (neuron0x2694560()*0.11063);
}

double NNfunction_ss_sRsR::synapse0x26b1ab0() {
   return (neuron0x26948a0()*0.45747);
}

double NNfunction_ss_sRsR::synapse0x26b1af0() {
   return (neuron0x2694be0()*-0.0178768);
}

double NNfunction_ss_sRsR::synapse0x26b1b30() {
   return (neuron0x2694f20()*0.410213);
}

double NNfunction_ss_sRsR::synapse0x26b1b70() {
   return (neuron0x2695260()*-0.11821);
}

double NNfunction_ss_sRsR::synapse0x26b1bb0() {
   return (neuron0x26955a0()*1.44343);
}

double NNfunction_ss_sRsR::synapse0x26b1bf0() {
   return (neuron0x26958e0()*-0.341807);
}

double NNfunction_ss_sRsR::synapse0x26b1c30() {
   return (neuron0x2695c20()*-0.173078);
}

double NNfunction_ss_sRsR::synapse0x26b1c70() {
   return (neuron0x2695f60()*-0.00270479);
}

double NNfunction_ss_sRsR::synapse0x26b1cb0() {
   return (neuron0x26962a0()*0.40705);
}

double NNfunction_ss_sRsR::synapse0x26b1cf0() {
   return (neuron0x26965e0()*0.23749);
}

double NNfunction_ss_sRsR::synapse0x26b1d30() {
   return (neuron0x2696920()*0.17656);
}

double NNfunction_ss_sRsR::synapse0x26b1d70() {
   return (neuron0x2696c60()*0.172528);
}

double NNfunction_ss_sRsR::synapse0x26b1db0() {
   return (neuron0x2696fa0()*0.0949962);
}

double NNfunction_ss_sRsR::synapse0x26b1df0() {
   return (neuron0x26972e0()*-0.173639);
}

double NNfunction_ss_sRsR::synapse0x26b1e30() {
   return (neuron0x2697620()*-0.108753);
}

double NNfunction_ss_sRsR::synapse0x26b18c0() {
   return (neuron0x2697960()*0.248371);
}

double NNfunction_ss_sRsR::synapse0x26b1900() {
   return (neuron0x2697ec0()*-0.150286);
}

double NNfunction_ss_sRsR::synapse0x26b1f80() {
   return (neuron0x26980e0()*-0.512587);
}

double NNfunction_ss_sRsR::synapse0x26b1fc0() {
   return (neuron0x2698420()*0.0251232);
}

double NNfunction_ss_sRsR::synapse0x26b2000() {
   return (neuron0x2698760()*-0.0120687);
}

double NNfunction_ss_sRsR::synapse0x26b2040() {
   return (neuron0x2698aa0()*0.0104851);
}

double NNfunction_ss_sRsR::synapse0x26b2080() {
   return (neuron0x2698de0()*-0.0493111);
}

double NNfunction_ss_sRsR::synapse0x26b20c0() {
   return (neuron0x2699120()*0.131717);
}

double NNfunction_ss_sRsR::synapse0x26b2440() {
   return (neuron0x2694560()*0.0161323);
}

double NNfunction_ss_sRsR::synapse0x26b2480() {
   return (neuron0x26948a0()*0.0167802);
}

double NNfunction_ss_sRsR::synapse0x26b24c0() {
   return (neuron0x2694be0()*-0.572609);
}

double NNfunction_ss_sRsR::synapse0x26b2500() {
   return (neuron0x2694f20()*0.0183067);
}

double NNfunction_ss_sRsR::synapse0x26b2540() {
   return (neuron0x2695260()*-0.317437);
}

double NNfunction_ss_sRsR::synapse0x26b2580() {
   return (neuron0x26955a0()*-0.363066);
}

double NNfunction_ss_sRsR::synapse0x26b25c0() {
   return (neuron0x26958e0()*0.925354);
}

double NNfunction_ss_sRsR::synapse0x26b2600() {
   return (neuron0x2695c20()*-0.0988528);
}

double NNfunction_ss_sRsR::synapse0x26b2640() {
   return (neuron0x2695f60()*-0.837313);
}

double NNfunction_ss_sRsR::synapse0x26b2680() {
   return (neuron0x26962a0()*-0.189129);
}

double NNfunction_ss_sRsR::synapse0x26b26c0() {
   return (neuron0x26965e0()*1.15976);
}

double NNfunction_ss_sRsR::synapse0x26b2700() {
   return (neuron0x2696920()*0.0676418);
}

double NNfunction_ss_sRsR::synapse0x26b2740() {
   return (neuron0x2696c60()*-0.715416);
}

double NNfunction_ss_sRsR::synapse0x26b2780() {
   return (neuron0x2696fa0()*-0.636626);
}

double NNfunction_ss_sRsR::synapse0x26b27c0() {
   return (neuron0x26972e0()*-0.304058);
}

double NNfunction_ss_sRsR::synapse0x26b2800() {
   return (neuron0x2697620()*-0.320624);
}

double NNfunction_ss_sRsR::synapse0x26b2290() {
   return (neuron0x2697960()*0.138678);
}

double NNfunction_ss_sRsR::synapse0x26b22d0() {
   return (neuron0x2697ec0()*0.910718);
}

double NNfunction_ss_sRsR::synapse0x26b2950() {
   return (neuron0x26980e0()*0.589007);
}

double NNfunction_ss_sRsR::synapse0x26b2990() {
   return (neuron0x2698420()*1.0579);
}

double NNfunction_ss_sRsR::synapse0x26b29d0() {
   return (neuron0x2698760()*0.444164);
}

double NNfunction_ss_sRsR::synapse0x26b2a10() {
   return (neuron0x2698aa0()*-0.628444);
}

double NNfunction_ss_sRsR::synapse0x26b2a50() {
   return (neuron0x2698de0()*-0.333137);
}

double NNfunction_ss_sRsR::synapse0x26b2a90() {
   return (neuron0x2699120()*0.292105);
}

double NNfunction_ss_sRsR::synapse0x26b2e10() {
   return (neuron0x2694560()*-0.546914);
}

double NNfunction_ss_sRsR::synapse0x26b2e50() {
   return (neuron0x26948a0()*0.357196);
}

double NNfunction_ss_sRsR::synapse0x26b2e90() {
   return (neuron0x2694be0()*0.334882);
}

double NNfunction_ss_sRsR::synapse0x26b2ed0() {
   return (neuron0x2694f20()*0.385317);
}

double NNfunction_ss_sRsR::synapse0x26b2f10() {
   return (neuron0x2695260()*0.710544);
}

double NNfunction_ss_sRsR::synapse0x26b2f50() {
   return (neuron0x26955a0()*0.957757);
}

double NNfunction_ss_sRsR::synapse0x26b2f90() {
   return (neuron0x26958e0()*0.201575);
}

double NNfunction_ss_sRsR::synapse0x26b2fd0() {
   return (neuron0x2695c20()*0.366465);
}

double NNfunction_ss_sRsR::synapse0x26b3010() {
   return (neuron0x2695f60()*-0.303471);
}

double NNfunction_ss_sRsR::synapse0x26b3050() {
   return (neuron0x26962a0()*-1.05792);
}

double NNfunction_ss_sRsR::synapse0x26b3090() {
   return (neuron0x26965e0()*0.758181);
}

double NNfunction_ss_sRsR::synapse0x26b30d0() {
   return (neuron0x2696920()*-0.43621);
}

double NNfunction_ss_sRsR::synapse0x26b3110() {
   return (neuron0x2696c60()*0.287223);
}

double NNfunction_ss_sRsR::synapse0x26b3150() {
   return (neuron0x2696fa0()*-0.557846);
}

double NNfunction_ss_sRsR::synapse0x26b3190() {
   return (neuron0x26972e0()*0.0231026);
}

double NNfunction_ss_sRsR::synapse0x26b31d0() {
   return (neuron0x2697620()*0.0577839);
}

double NNfunction_ss_sRsR::synapse0x26b2c60() {
   return (neuron0x2697960()*0.446449);
}

double NNfunction_ss_sRsR::synapse0x26b2ca0() {
   return (neuron0x2697ec0()*0.682308);
}

double NNfunction_ss_sRsR::synapse0x26b3320() {
   return (neuron0x26980e0()*-1.1376);
}

double NNfunction_ss_sRsR::synapse0x26b3360() {
   return (neuron0x2698420()*0.125355);
}

double NNfunction_ss_sRsR::synapse0x26b33a0() {
   return (neuron0x2698760()*-0.484211);
}

double NNfunction_ss_sRsR::synapse0x26b33e0() {
   return (neuron0x2698aa0()*0.822828);
}

double NNfunction_ss_sRsR::synapse0x26b3420() {
   return (neuron0x2698de0()*-0.990904);
}

double NNfunction_ss_sRsR::synapse0x26b3460() {
   return (neuron0x2699120()*-0.469023);
}

double NNfunction_ss_sRsR::synapse0x26b37e0() {
   return (neuron0x2694560()*0.673089);
}

double NNfunction_ss_sRsR::synapse0x26b3820() {
   return (neuron0x26948a0()*-0.0214245);
}

double NNfunction_ss_sRsR::synapse0x26b3860() {
   return (neuron0x2694be0()*-0.255327);
}

double NNfunction_ss_sRsR::synapse0x26b38a0() {
   return (neuron0x2694f20()*-0.904586);
}

double NNfunction_ss_sRsR::synapse0x26b38e0() {
   return (neuron0x2695260()*-0.00253461);
}

double NNfunction_ss_sRsR::synapse0x26b3920() {
   return (neuron0x26955a0()*0.721986);
}

double NNfunction_ss_sRsR::synapse0x26b3960() {
   return (neuron0x26958e0()*-0.24028);
}

double NNfunction_ss_sRsR::synapse0x26b39a0() {
   return (neuron0x2695c20()*-0.651307);
}

double NNfunction_ss_sRsR::synapse0x26b39e0() {
   return (neuron0x2695f60()*-0.739065);
}

double NNfunction_ss_sRsR::synapse0x26b3a20() {
   return (neuron0x26962a0()*-0.0591039);
}

double NNfunction_ss_sRsR::synapse0x26b3a60() {
   return (neuron0x26965e0()*-0.946322);
}

double NNfunction_ss_sRsR::synapse0x26b3aa0() {
   return (neuron0x2696920()*0.365962);
}

double NNfunction_ss_sRsR::synapse0x26b3ae0() {
   return (neuron0x2696c60()*-0.639125);
}

double NNfunction_ss_sRsR::synapse0x26b3b20() {
   return (neuron0x2696fa0()*-0.281423);
}

double NNfunction_ss_sRsR::synapse0x26b3b60() {
   return (neuron0x26972e0()*-0.322865);
}

double NNfunction_ss_sRsR::synapse0x26b3ba0() {
   return (neuron0x2697620()*-0.0436382);
}

double NNfunction_ss_sRsR::synapse0x26b3630() {
   return (neuron0x2697960()*-1.13024);
}

double NNfunction_ss_sRsR::synapse0x26b3670() {
   return (neuron0x2697ec0()*-0.271401);
}

double NNfunction_ss_sRsR::synapse0x26b3cf0() {
   return (neuron0x26980e0()*-0.539109);
}

double NNfunction_ss_sRsR::synapse0x26b3d30() {
   return (neuron0x2698420()*0.0584159);
}

double NNfunction_ss_sRsR::synapse0x26b3d70() {
   return (neuron0x2698760()*-0.640288);
}

double NNfunction_ss_sRsR::synapse0x26b3db0() {
   return (neuron0x2698aa0()*-0.241166);
}

double NNfunction_ss_sRsR::synapse0x26b3df0() {
   return (neuron0x2698de0()*0.416791);
}

double NNfunction_ss_sRsR::synapse0x26b3e30() {
   return (neuron0x2699120()*-0.240431);
}

double NNfunction_ss_sRsR::synapse0x26b41b0() {
   return (neuron0x2694560()*0.435972);
}

double NNfunction_ss_sRsR::synapse0x26b41f0() {
   return (neuron0x26948a0()*0.328977);
}

double NNfunction_ss_sRsR::synapse0x26b4230() {
   return (neuron0x2694be0()*0.260309);
}

double NNfunction_ss_sRsR::synapse0x26b4270() {
   return (neuron0x2694f20()*-0.833431);
}

double NNfunction_ss_sRsR::synapse0x26b42b0() {
   return (neuron0x2695260()*-0.759499);
}

double NNfunction_ss_sRsR::synapse0x26b42f0() {
   return (neuron0x26955a0()*0.0978817);
}

double NNfunction_ss_sRsR::synapse0x26b4330() {
   return (neuron0x26958e0()*0.474266);
}

double NNfunction_ss_sRsR::synapse0x26b4370() {
   return (neuron0x2695c20()*-0.356907);
}

double NNfunction_ss_sRsR::synapse0x26b43b0() {
   return (neuron0x2695f60()*0.378853);
}

double NNfunction_ss_sRsR::synapse0x26b43f0() {
   return (neuron0x26962a0()*0.245699);
}

double NNfunction_ss_sRsR::synapse0x26b4430() {
   return (neuron0x26965e0()*-0.036555);
}

double NNfunction_ss_sRsR::synapse0x26b4470() {
   return (neuron0x2696920()*0.220199);
}

double NNfunction_ss_sRsR::synapse0x26b44b0() {
   return (neuron0x2696c60()*0.32476);
}

double NNfunction_ss_sRsR::synapse0x26b44f0() {
   return (neuron0x2696fa0()*0.328573);
}

double NNfunction_ss_sRsR::synapse0x26b4530() {
   return (neuron0x26972e0()*-0.603605);
}

double NNfunction_ss_sRsR::synapse0x26b4570() {
   return (neuron0x2697620()*-0.746374);
}

double NNfunction_ss_sRsR::synapse0x26b4000() {
   return (neuron0x2697960()*0.210526);
}

double NNfunction_ss_sRsR::synapse0x26b4040() {
   return (neuron0x2697ec0()*0.0651041);
}

double NNfunction_ss_sRsR::synapse0x26b46c0() {
   return (neuron0x26980e0()*0.100599);
}

double NNfunction_ss_sRsR::synapse0x26b4700() {
   return (neuron0x2698420()*-0.221901);
}

double NNfunction_ss_sRsR::synapse0x26b4740() {
   return (neuron0x2698760()*0.396117);
}

double NNfunction_ss_sRsR::synapse0x26b4780() {
   return (neuron0x2698aa0()*0.29749);
}

double NNfunction_ss_sRsR::synapse0x26b47c0() {
   return (neuron0x2698de0()*-0.247866);
}

double NNfunction_ss_sRsR::synapse0x26b4800() {
   return (neuron0x2699120()*-0.380536);
}

double NNfunction_ss_sRsR::synapse0x26b4b80() {
   return (neuron0x2694560()*-0.015989);
}

double NNfunction_ss_sRsR::synapse0x26b4bc0() {
   return (neuron0x26948a0()*0.0977522);
}

double NNfunction_ss_sRsR::synapse0x26b4c00() {
   return (neuron0x2694be0()*-0.142934);
}

double NNfunction_ss_sRsR::synapse0x26b4c40() {
   return (neuron0x2694f20()*-0.200603);
}

double NNfunction_ss_sRsR::synapse0x26b4c80() {
   return (neuron0x2695260()*0.0418103);
}

double NNfunction_ss_sRsR::synapse0x26b4cc0() {
   return (neuron0x26955a0()*0.0173202);
}

double NNfunction_ss_sRsR::synapse0x26b4d00() {
   return (neuron0x26958e0()*-0.00475575);
}

double NNfunction_ss_sRsR::synapse0x26b4d40() {
   return (neuron0x2695c20()*-0.133356);
}

double NNfunction_ss_sRsR::synapse0x26b4d80() {
   return (neuron0x2695f60()*0.411878);
}

double NNfunction_ss_sRsR::synapse0x26b4dc0() {
   return (neuron0x26962a0()*0.154905);
}

double NNfunction_ss_sRsR::synapse0x26b4e00() {
   return (neuron0x26965e0()*1.21335);
}

double NNfunction_ss_sRsR::synapse0x26b4e40() {
   return (neuron0x2696920()*0.0957753);
}

double NNfunction_ss_sRsR::synapse0x26b4e80() {
   return (neuron0x2696c60()*-0.00347299);
}

double NNfunction_ss_sRsR::synapse0x26b4ec0() {
   return (neuron0x2696fa0()*-0.221052);
}

double NNfunction_ss_sRsR::synapse0x26b4f00() {
   return (neuron0x26972e0()*0.0551862);
}

double NNfunction_ss_sRsR::synapse0x26b4f40() {
   return (neuron0x2697620()*0.0798949);
}

double NNfunction_ss_sRsR::synapse0x26b49d0() {
   return (neuron0x2697960()*-0.108258);
}

double NNfunction_ss_sRsR::synapse0x26b4a10() {
   return (neuron0x2697ec0()*-0.0810179);
}

double NNfunction_ss_sRsR::synapse0x26b5090() {
   return (neuron0x26980e0()*-1.088);
}

double NNfunction_ss_sRsR::synapse0x26b50d0() {
   return (neuron0x2698420()*0.0576986);
}

double NNfunction_ss_sRsR::synapse0x26b5110() {
   return (neuron0x2698760()*-0.0251498);
}

double NNfunction_ss_sRsR::synapse0x26b5150() {
   return (neuron0x2698aa0()*0.0268695);
}

double NNfunction_ss_sRsR::synapse0x26b5190() {
   return (neuron0x2698de0()*-0.0308648);
}

double NNfunction_ss_sRsR::synapse0x26b51d0() {
   return (neuron0x2699120()*0.00211461);
}

double NNfunction_ss_sRsR::synapse0x26b5550() {
   return (neuron0x2694560()*-0.0236826);
}

double NNfunction_ss_sRsR::synapse0x26b5590() {
   return (neuron0x26948a0()*0.383899);
}

double NNfunction_ss_sRsR::synapse0x26b55d0() {
   return (neuron0x2694be0()*-0.206647);
}

double NNfunction_ss_sRsR::synapse0x26b5610() {
   return (neuron0x2694f20()*0.785437);
}

double NNfunction_ss_sRsR::synapse0x26b5650() {
   return (neuron0x2695260()*-0.297672);
}

double NNfunction_ss_sRsR::synapse0x26b5690() {
   return (neuron0x26955a0()*-0.371534);
}

double NNfunction_ss_sRsR::synapse0x26b56d0() {
   return (neuron0x26958e0()*-0.485678);
}

double NNfunction_ss_sRsR::synapse0x26b5710() {
   return (neuron0x2695c20()*-0.581667);
}

double NNfunction_ss_sRsR::synapse0x26b5750() {
   return (neuron0x2695f60()*-0.014995);
}

double NNfunction_ss_sRsR::synapse0x26b5790() {
   return (neuron0x26962a0()*0.175578);
}

double NNfunction_ss_sRsR::synapse0x26b57d0() {
   return (neuron0x26965e0()*0.103739);
}

double NNfunction_ss_sRsR::synapse0x26b5810() {
   return (neuron0x2696920()*0.0112341);
}

double NNfunction_ss_sRsR::synapse0x26b5850() {
   return (neuron0x2696c60()*-0.00922125);
}

double NNfunction_ss_sRsR::synapse0x26b5890() {
   return (neuron0x2696fa0()*0.0177628);
}

double NNfunction_ss_sRsR::synapse0x26b58d0() {
   return (neuron0x26972e0()*0.235545);
}

double NNfunction_ss_sRsR::synapse0x26b5910() {
   return (neuron0x2697620()*0.00258601);
}

double NNfunction_ss_sRsR::synapse0x26b53a0() {
   return (neuron0x2697960()*0.00846958);
}

double NNfunction_ss_sRsR::synapse0x26b53e0() {
   return (neuron0x2697ec0()*-0.0142682);
}

double NNfunction_ss_sRsR::synapse0x26b5a60() {
   return (neuron0x26980e0()*-0.177029);
}

double NNfunction_ss_sRsR::synapse0x26b5aa0() {
   return (neuron0x2698420()*0.07882);
}

double NNfunction_ss_sRsR::synapse0x26b5ae0() {
   return (neuron0x2698760()*-0.0880212);
}

double NNfunction_ss_sRsR::synapse0x26b5b20() {
   return (neuron0x2698aa0()*0.0910886);
}

double NNfunction_ss_sRsR::synapse0x26b5b60() {
   return (neuron0x2698de0()*0.0185863);
}

double NNfunction_ss_sRsR::synapse0x26b5ba0() {
   return (neuron0x2699120()*-0.0712155);
}

double NNfunction_ss_sRsR::synapse0x269e650() {
   return (neuron0x2694560()*0.00236624);
}

double NNfunction_ss_sRsR::synapse0x269e690() {
   return (neuron0x26948a0()*0.00408621);
}

double NNfunction_ss_sRsR::synapse0x269e6d0() {
   return (neuron0x2694be0()*0.0193862);
}

double NNfunction_ss_sRsR::synapse0x269e710() {
   return (neuron0x2694f20()*3.81684);
}

double NNfunction_ss_sRsR::synapse0x269e750() {
   return (neuron0x2695260()*-0.0618938);
}

double NNfunction_ss_sRsR::synapse0x269e790() {
   return (neuron0x26955a0()*-0.0119796);
}

double NNfunction_ss_sRsR::synapse0x269e7d0() {
   return (neuron0x26958e0()*-0.000606071);
}

double NNfunction_ss_sRsR::synapse0x269e810() {
   return (neuron0x2695c20()*-0.020793);
}

double NNfunction_ss_sRsR::synapse0x26b6330() {
   return (neuron0x2695f60()*-0.0316861);
}

double NNfunction_ss_sRsR::synapse0x26b6370() {
   return (neuron0x26962a0()*9.52189e-05);
}

double NNfunction_ss_sRsR::synapse0x26b63b0() {
   return (neuron0x26965e0()*0.0134473);
}

double NNfunction_ss_sRsR::synapse0x26b63f0() {
   return (neuron0x2696920()*-0.0577968);
}

double NNfunction_ss_sRsR::synapse0x26b6430() {
   return (neuron0x2696c60()*-0.0385926);
}

double NNfunction_ss_sRsR::synapse0x26b6470() {
   return (neuron0x2696fa0()*0.0446918);
}

double NNfunction_ss_sRsR::synapse0x26b64b0() {
   return (neuron0x26972e0()*-0.047486);
}

double NNfunction_ss_sRsR::synapse0x26b64f0() {
   return (neuron0x2697620()*-0.0192291);
}

double NNfunction_ss_sRsR::synapse0x26b5d70() {
   return (neuron0x2697960()*0.0263984);
}

double NNfunction_ss_sRsR::synapse0x26b5db0() {
   return (neuron0x2697ec0()*-0.0371214);
}

double NNfunction_ss_sRsR::synapse0x26b6640() {
   return (neuron0x26980e0()*0.398459);
}

double NNfunction_ss_sRsR::synapse0x26b6680() {
   return (neuron0x2698420()*-0.015084);
}

double NNfunction_ss_sRsR::synapse0x26b66c0() {
   return (neuron0x2698760()*-0.00168715);
}

double NNfunction_ss_sRsR::synapse0x26b6700() {
   return (neuron0x2698aa0()*0.00971331);
}

double NNfunction_ss_sRsR::synapse0x26b6740() {
   return (neuron0x2698de0()*-0.000723864);
}

double NNfunction_ss_sRsR::synapse0x26b6780() {
   return (neuron0x2699120()*0.00366136);
}

double NNfunction_ss_sRsR::synapse0x26b6b00() {
   return (neuron0x2694560()*-0.0125997);
}

double NNfunction_ss_sRsR::synapse0x26b6b40() {
   return (neuron0x26948a0()*0.0172395);
}

double NNfunction_ss_sRsR::synapse0x26b6b80() {
   return (neuron0x2694be0()*0.0217001);
}

double NNfunction_ss_sRsR::synapse0x26b6bc0() {
   return (neuron0x2694f20()*-3.61843);
}

double NNfunction_ss_sRsR::synapse0x26b6c00() {
   return (neuron0x2695260()*-0.0776271);
}

double NNfunction_ss_sRsR::synapse0x26b6c40() {
   return (neuron0x26955a0()*-0.020023);
}

double NNfunction_ss_sRsR::synapse0x26b6c80() {
   return (neuron0x26958e0()*0.0131402);
}

double NNfunction_ss_sRsR::synapse0x26b6cc0() {
   return (neuron0x2695c20()*-0.0122696);
}

double NNfunction_ss_sRsR::synapse0x26b6d00() {
   return (neuron0x2695f60()*-0.0113827);
}

double NNfunction_ss_sRsR::synapse0x26b6d40() {
   return (neuron0x26962a0()*0.0154628);
}

double NNfunction_ss_sRsR::synapse0x26b6d80() {
   return (neuron0x26965e0()*5.6753e-05);
}

double NNfunction_ss_sRsR::synapse0x26b6dc0() {
   return (neuron0x2696920()*-0.055812);
}

double NNfunction_ss_sRsR::synapse0x26b6e00() {
   return (neuron0x2696c60()*-0.0514276);
}

double NNfunction_ss_sRsR::synapse0x26b6e40() {
   return (neuron0x2696fa0()*0.0321214);
}

double NNfunction_ss_sRsR::synapse0x26b6e80() {
   return (neuron0x26972e0()*-0.0617179);
}

double NNfunction_ss_sRsR::synapse0x26b6ec0() {
   return (neuron0x2697620()*-0.0283284);
}

double NNfunction_ss_sRsR::synapse0x26b6950() {
   return (neuron0x2697960()*-0.00178111);
}

double NNfunction_ss_sRsR::synapse0x26b6990() {
   return (neuron0x2697ec0()*-0.0100287);
}

double NNfunction_ss_sRsR::synapse0x26b7010() {
   return (neuron0x26980e0()*0.209626);
}

double NNfunction_ss_sRsR::synapse0x26b7050() {
   return (neuron0x2698420()*-0.000584247);
}

double NNfunction_ss_sRsR::synapse0x26b7090() {
   return (neuron0x2698760()*0.000754192);
}

double NNfunction_ss_sRsR::synapse0x26b70d0() {
   return (neuron0x2698aa0()*0.00204784);
}

double NNfunction_ss_sRsR::synapse0x26b7110() {
   return (neuron0x2698de0()*0.00357901);
}

double NNfunction_ss_sRsR::synapse0x26b7150() {
   return (neuron0x2699120()*0.000277637);
}

double NNfunction_ss_sRsR::synapse0x26b74d0() {
   return (neuron0x2694560()*-0.117421);
}

double NNfunction_ss_sRsR::synapse0x26b7510() {
   return (neuron0x26948a0()*0.511992);
}

double NNfunction_ss_sRsR::synapse0x26b7550() {
   return (neuron0x2694be0()*-0.13426);
}

double NNfunction_ss_sRsR::synapse0x26b7590() {
   return (neuron0x2694f20()*-2.03061);
}

double NNfunction_ss_sRsR::synapse0x26b75d0() {
   return (neuron0x2695260()*-0.454195);
}

double NNfunction_ss_sRsR::synapse0x26b7610() {
   return (neuron0x26955a0()*-0.301767);
}

double NNfunction_ss_sRsR::synapse0x26b7650() {
   return (neuron0x26958e0()*-0.0352724);
}

double NNfunction_ss_sRsR::synapse0x26b7690() {
   return (neuron0x2695c20()*0.483311);
}

double NNfunction_ss_sRsR::synapse0x26b76d0() {
   return (neuron0x2695f60()*-0.0460624);
}

double NNfunction_ss_sRsR::synapse0x26b7710() {
   return (neuron0x26962a0()*0.066221);
}

double NNfunction_ss_sRsR::synapse0x26b7750() {
   return (neuron0x26965e0()*0.164254);
}

double NNfunction_ss_sRsR::synapse0x26b7790() {
   return (neuron0x2696920()*0.0573146);
}

double NNfunction_ss_sRsR::synapse0x26b77d0() {
   return (neuron0x2696c60()*-0.0676207);
}

double NNfunction_ss_sRsR::synapse0x26b7810() {
   return (neuron0x2696fa0()*-0.155571);
}

double NNfunction_ss_sRsR::synapse0x26b7850() {
   return (neuron0x26972e0()*-0.0264497);
}

double NNfunction_ss_sRsR::synapse0x26b7890() {
   return (neuron0x2697620()*0.180659);
}

double NNfunction_ss_sRsR::synapse0x26b7320() {
   return (neuron0x2697960()*0.207739);
}

double NNfunction_ss_sRsR::synapse0x26b7360() {
   return (neuron0x2697ec0()*-0.105004);
}

double NNfunction_ss_sRsR::synapse0x26a7e90() {
   return (neuron0x26980e0()*0.485834);
}

double NNfunction_ss_sRsR::synapse0x26a7ed0() {
   return (neuron0x2698420()*0.0476452);
}

double NNfunction_ss_sRsR::synapse0x26a7f10() {
   return (neuron0x2698760()*-0.127741);
}

double NNfunction_ss_sRsR::synapse0x26a7f50() {
   return (neuron0x2698aa0()*-0.0165519);
}

double NNfunction_ss_sRsR::synapse0x26a7f90() {
   return (neuron0x2698de0()*0.0950982);
}

double NNfunction_ss_sRsR::synapse0x26a7fd0() {
   return (neuron0x2699120()*-0.00709919);
}

double NNfunction_ss_sRsR::synapse0x26a8350() {
   return (neuron0x2694560()*-0.0314591);
}

double NNfunction_ss_sRsR::synapse0x26a8390() {
   return (neuron0x26948a0()*-0.0147334);
}

double NNfunction_ss_sRsR::synapse0x26a83d0() {
   return (neuron0x2694be0()*-0.00087439);
}

double NNfunction_ss_sRsR::synapse0x26a8410() {
   return (neuron0x2694f20()*0.0838402);
}

double NNfunction_ss_sRsR::synapse0x26a8450() {
   return (neuron0x2695260()*0.00290624);
}

double NNfunction_ss_sRsR::synapse0x26a8490() {
   return (neuron0x26955a0()*-0.0133439);
}

double NNfunction_ss_sRsR::synapse0x26a84d0() {
   return (neuron0x26958e0()*-0.00945385);
}

double NNfunction_ss_sRsR::synapse0x26a8510() {
   return (neuron0x2695c20()*-0.0212687);
}

double NNfunction_ss_sRsR::synapse0x26a8550() {
   return (neuron0x2695f60()*0.203281);
}

double NNfunction_ss_sRsR::synapse0x26a8590() {
   return (neuron0x26962a0()*0.0171295);
}

double NNfunction_ss_sRsR::synapse0x26a85d0() {
   return (neuron0x26965e0()*-0.0621786);
}

double NNfunction_ss_sRsR::synapse0x26a8610() {
   return (neuron0x2696920()*-0.0128401);
}

double NNfunction_ss_sRsR::synapse0x26a8650() {
   return (neuron0x2696c60()*-0.0202754);
}

double NNfunction_ss_sRsR::synapse0x26a8690() {
   return (neuron0x2696fa0()*-0.0313333);
}

double NNfunction_ss_sRsR::synapse0x26a86d0() {
   return (neuron0x26972e0()*0.0395511);
}

double NNfunction_ss_sRsR::synapse0x26a8710() {
   return (neuron0x2697620()*0.0141165);
}

double NNfunction_ss_sRsR::synapse0x26a81a0() {
   return (neuron0x2697960()*-0.0470612);
}

double NNfunction_ss_sRsR::synapse0x26a81e0() {
   return (neuron0x2697ec0()*-0.0189744);
}

double NNfunction_ss_sRsR::synapse0x26a8860() {
   return (neuron0x26980e0()*-1.04969);
}

double NNfunction_ss_sRsR::synapse0x26a88a0() {
   return (neuron0x2698420()*0.00321374);
}

double NNfunction_ss_sRsR::synapse0x26a88e0() {
   return (neuron0x2698760()*-0.0159916);
}

double NNfunction_ss_sRsR::synapse0x26a8920() {
   return (neuron0x2698aa0()*-0.00191605);
}

double NNfunction_ss_sRsR::synapse0x26a8960() {
   return (neuron0x2698de0()*-0.0136271);
}

double NNfunction_ss_sRsR::synapse0x26a89a0() {
   return (neuron0x2699120()*0.0176026);
}

double NNfunction_ss_sRsR::synapse0x26a8d20() {
   return (neuron0x2694560()*0.277526);
}

double NNfunction_ss_sRsR::synapse0x26a8d60() {
   return (neuron0x26948a0()*0.0519942);
}

double NNfunction_ss_sRsR::synapse0x26a8da0() {
   return (neuron0x2694be0()*-0.032988);
}

double NNfunction_ss_sRsR::synapse0x26a8de0() {
   return (neuron0x2694f20()*0.226861);
}

double NNfunction_ss_sRsR::synapse0x26a8e20() {
   return (neuron0x2695260()*0.172563);
}

double NNfunction_ss_sRsR::synapse0x26a8e60() {
   return (neuron0x26955a0()*0.0135125);
}

double NNfunction_ss_sRsR::synapse0x26a8ea0() {
   return (neuron0x26958e0()*0.246111);
}

double NNfunction_ss_sRsR::synapse0x26a8ee0() {
   return (neuron0x2695c20()*-0.0898849);
}

double NNfunction_ss_sRsR::synapse0x26a8f20() {
   return (neuron0x2695f60()*0.181533);
}

double NNfunction_ss_sRsR::synapse0x26a8f60() {
   return (neuron0x26962a0()*-0.143359);
}

double NNfunction_ss_sRsR::synapse0x26a8fa0() {
   return (neuron0x26965e0()*0.0461329);
}

double NNfunction_ss_sRsR::synapse0x26a8fe0() {
   return (neuron0x2696920()*0.000163595);
}

double NNfunction_ss_sRsR::synapse0x26a9020() {
   return (neuron0x2696c60()*0.15252);
}

double NNfunction_ss_sRsR::synapse0x26a9060() {
   return (neuron0x2696fa0()*0.0479209);
}

double NNfunction_ss_sRsR::synapse0x26a90a0() {
   return (neuron0x26972e0()*-0.222364);
}

double NNfunction_ss_sRsR::synapse0x26a90e0() {
   return (neuron0x2697620()*2.00896);
}

double NNfunction_ss_sRsR::synapse0x26a8b70() {
   return (neuron0x2697960()*0.516453);
}

double NNfunction_ss_sRsR::synapse0x26a8bb0() {
   return (neuron0x2697ec0()*0.314677);
}

double NNfunction_ss_sRsR::synapse0x26a9230() {
   return (neuron0x26980e0()*0.107454);
}

double NNfunction_ss_sRsR::synapse0x26a9270() {
   return (neuron0x2698420()*-0.10646);
}

double NNfunction_ss_sRsR::synapse0x26a92b0() {
   return (neuron0x2698760()*0.0925403);
}

double NNfunction_ss_sRsR::synapse0x26a92f0() {
   return (neuron0x2698aa0()*0.158388);
}

double NNfunction_ss_sRsR::synapse0x26a9330() {
   return (neuron0x2698de0()*0.126237);
}

double NNfunction_ss_sRsR::synapse0x26a9370() {
   return (neuron0x2699120()*0.115834);
}

double NNfunction_ss_sRsR::synapse0x26a96f0() {
   return (neuron0x2694560()*-0.016794);
}

double NNfunction_ss_sRsR::synapse0x26a9730() {
   return (neuron0x26948a0()*-0.0101438);
}

double NNfunction_ss_sRsR::synapse0x26a9770() {
   return (neuron0x2694be0()*0.0270673);
}

double NNfunction_ss_sRsR::synapse0x26a97b0() {
   return (neuron0x2694f20()*0.272001);
}

double NNfunction_ss_sRsR::synapse0x26a97f0() {
   return (neuron0x2695260()*-0.235633);
}

double NNfunction_ss_sRsR::synapse0x26a9830() {
   return (neuron0x26955a0()*0.0386497);
}

double NNfunction_ss_sRsR::synapse0x26a9870() {
   return (neuron0x26958e0()*0.0242119);
}

double NNfunction_ss_sRsR::synapse0x26a98b0() {
   return (neuron0x2695c20()*0.0373263);
}

double NNfunction_ss_sRsR::synapse0x26a98f0() {
   return (neuron0x2695f60()*-0.0146437);
}

double NNfunction_ss_sRsR::synapse0x26a9930() {
   return (neuron0x26962a0()*-0.0570304);
}

double NNfunction_ss_sRsR::synapse0x26a9970() {
   return (neuron0x26965e0()*-0.0243609);
}

double NNfunction_ss_sRsR::synapse0x26a99b0() {
   return (neuron0x2696920()*-0.0623409);
}

double NNfunction_ss_sRsR::synapse0x26a99f0() {
   return (neuron0x2696c60()*0.00598056);
}

double NNfunction_ss_sRsR::synapse0x26a9a30() {
   return (neuron0x2696fa0()*0.00486677);
}

double NNfunction_ss_sRsR::synapse0x26a9a70() {
   return (neuron0x26972e0()*0.130128);
}

double NNfunction_ss_sRsR::synapse0x26a9ab0() {
   return (neuron0x2697620()*0.104402);
}

double NNfunction_ss_sRsR::synapse0x26a9540() {
   return (neuron0x2697960()*-0.0613062);
}

double NNfunction_ss_sRsR::synapse0x26a9580() {
   return (neuron0x2697ec0()*-0.0213843);
}

double NNfunction_ss_sRsR::synapse0x26a9c00() {
   return (neuron0x26980e0()*0.564);
}

double NNfunction_ss_sRsR::synapse0x26a9c40() {
   return (neuron0x2698420()*-0.0012437);
}

double NNfunction_ss_sRsR::synapse0x26a9c80() {
   return (neuron0x2698760()*-0.00934433);
}

double NNfunction_ss_sRsR::synapse0x26a9cc0() {
   return (neuron0x2698aa0()*-0.0034704);
}

double NNfunction_ss_sRsR::synapse0x26a9d00() {
   return (neuron0x2698de0()*-0.0218829);
}

double NNfunction_ss_sRsR::synapse0x26a9d40() {
   return (neuron0x2699120()*-0.000992832);
}

double NNfunction_ss_sRsR::synapse0x26bbc10() {
   return (neuron0x2694560()*-0.0483369);
}

double NNfunction_ss_sRsR::synapse0x26bbc50() {
   return (neuron0x26948a0()*0.0650387);
}

double NNfunction_ss_sRsR::synapse0x26bbc90() {
   return (neuron0x2694be0()*-0.11006);
}

double NNfunction_ss_sRsR::synapse0x26bbcd0() {
   return (neuron0x2694f20()*-0.233805);
}

double NNfunction_ss_sRsR::synapse0x26bbd10() {
   return (neuron0x2695260()*-0.379357);
}

double NNfunction_ss_sRsR::synapse0x26bbd50() {
   return (neuron0x26955a0()*-0.0595802);
}

double NNfunction_ss_sRsR::synapse0x26bbd90() {
   return (neuron0x26958e0()*0.840671);
}

double NNfunction_ss_sRsR::synapse0x26bbdd0() {
   return (neuron0x2695c20()*-0.357342);
}

double NNfunction_ss_sRsR::synapse0x26bbe10() {
   return (neuron0x2695f60()*0.0515096);
}

double NNfunction_ss_sRsR::synapse0x26bbe50() {
   return (neuron0x26962a0()*0.282382);
}

double NNfunction_ss_sRsR::synapse0x26bbe90() {
   return (neuron0x26965e0()*0.158429);
}

double NNfunction_ss_sRsR::synapse0x26bbed0() {
   return (neuron0x2696920()*0.73606);
}

double NNfunction_ss_sRsR::synapse0x26bbf10() {
   return (neuron0x2696c60()*0.609569);
}

double NNfunction_ss_sRsR::synapse0x26bbf50() {
   return (neuron0x2696fa0()*-0.601916);
}

double NNfunction_ss_sRsR::synapse0x26bbf90() {
   return (neuron0x26972e0()*0.236891);
}

double NNfunction_ss_sRsR::synapse0x26bbfd0() {
   return (neuron0x2697620()*-0.259809);
}

double NNfunction_ss_sRsR::synapse0x26a9d80() {
   return (neuron0x2697960()*-0.734365);
}

double NNfunction_ss_sRsR::synapse0x26a9dc0() {
   return (neuron0x2697ec0()*0.129792);
}

double NNfunction_ss_sRsR::synapse0x26bc120() {
   return (neuron0x26980e0()*-0.55941);
}

double NNfunction_ss_sRsR::synapse0x26bc160() {
   return (neuron0x2698420()*0.130758);
}

double NNfunction_ss_sRsR::synapse0x26bc1a0() {
   return (neuron0x2698760()*0.21657);
}

double NNfunction_ss_sRsR::synapse0x26bc1e0() {
   return (neuron0x2698aa0()*-0.0328607);
}

double NNfunction_ss_sRsR::synapse0x26bc220() {
   return (neuron0x2698de0()*-0.0159226);
}

double NNfunction_ss_sRsR::synapse0x26bc260() {
   return (neuron0x2699120()*-0.140069);
}

double NNfunction_ss_sRsR::synapse0x26bc5e0() {
   return (neuron0x2694560()*0.172425);
}

double NNfunction_ss_sRsR::synapse0x26bc620() {
   return (neuron0x26948a0()*0.0345396);
}

double NNfunction_ss_sRsR::synapse0x26bc660() {
   return (neuron0x2694be0()*-0.899512);
}

double NNfunction_ss_sRsR::synapse0x26bc6a0() {
   return (neuron0x2694f20()*0.79354);
}

double NNfunction_ss_sRsR::synapse0x26bc6e0() {
   return (neuron0x2695260()*0.102447);
}

double NNfunction_ss_sRsR::synapse0x26bc720() {
   return (neuron0x26955a0()*-0.136025);
}

double NNfunction_ss_sRsR::synapse0x26bc760() {
   return (neuron0x26958e0()*-0.245311);
}

double NNfunction_ss_sRsR::synapse0x26bc7a0() {
   return (neuron0x2695c20()*-0.19935);
}

double NNfunction_ss_sRsR::synapse0x26bc7e0() {
   return (neuron0x2695f60()*-0.682465);
}

double NNfunction_ss_sRsR::synapse0x26bc820() {
   return (neuron0x26962a0()*-0.478651);
}

double NNfunction_ss_sRsR::synapse0x26bc860() {
   return (neuron0x26965e0()*-0.289785);
}

double NNfunction_ss_sRsR::synapse0x26bc8a0() {
   return (neuron0x2696920()*0.375999);
}

double NNfunction_ss_sRsR::synapse0x26bc8e0() {
   return (neuron0x2696c60()*0.644617);
}

double NNfunction_ss_sRsR::synapse0x26bc920() {
   return (neuron0x2696fa0()*0.079968);
}

double NNfunction_ss_sRsR::synapse0x26bc960() {
   return (neuron0x26972e0()*0.287818);
}

double NNfunction_ss_sRsR::synapse0x26bc9a0() {
   return (neuron0x2697620()*0.0215635);
}

double NNfunction_ss_sRsR::synapse0x26bc430() {
   return (neuron0x2697960()*0.837639);
}

double NNfunction_ss_sRsR::synapse0x26bc470() {
   return (neuron0x2697ec0()*-0.0668405);
}

double NNfunction_ss_sRsR::synapse0x26bcaf0() {
   return (neuron0x26980e0()*-0.563595);
}

double NNfunction_ss_sRsR::synapse0x26bcb30() {
   return (neuron0x2698420()*1.34596);
}

double NNfunction_ss_sRsR::synapse0x26bcb70() {
   return (neuron0x2698760()*0.250518);
}

double NNfunction_ss_sRsR::synapse0x26bcbb0() {
   return (neuron0x2698aa0()*-0.121785);
}

double NNfunction_ss_sRsR::synapse0x26bcbf0() {
   return (neuron0x2698de0()*-0.213233);
}

double NNfunction_ss_sRsR::synapse0x26bcc30() {
   return (neuron0x2699120()*-0.397507);
}

double NNfunction_ss_sRsR::synapse0x26bcfb0() {
   return (neuron0x2694560()*-0.00552768);
}

double NNfunction_ss_sRsR::synapse0x26bcff0() {
   return (neuron0x26948a0()*-0.0590731);
}

double NNfunction_ss_sRsR::synapse0x26bd030() {
   return (neuron0x2694be0()*-0.0264994);
}

double NNfunction_ss_sRsR::synapse0x26bd070() {
   return (neuron0x2694f20()*-3.4489);
}

double NNfunction_ss_sRsR::synapse0x26bd0b0() {
   return (neuron0x2695260()*-0.0105837);
}

double NNfunction_ss_sRsR::synapse0x26bd0f0() {
   return (neuron0x26955a0()*-0.00219535);
}

double NNfunction_ss_sRsR::synapse0x26bd130() {
   return (neuron0x26958e0()*-0.0165664);
}

double NNfunction_ss_sRsR::synapse0x26bd170() {
   return (neuron0x2695c20()*0.00136354);
}

double NNfunction_ss_sRsR::synapse0x26bd1b0() {
   return (neuron0x2695f60()*-0.00142435);
}

double NNfunction_ss_sRsR::synapse0x26bd1f0() {
   return (neuron0x26962a0()*-0.0147049);
}

double NNfunction_ss_sRsR::synapse0x26bd230() {
   return (neuron0x26965e0()*0.0476049);
}

double NNfunction_ss_sRsR::synapse0x26bd270() {
   return (neuron0x2696920()*0.045374);
}

double NNfunction_ss_sRsR::synapse0x26bd2b0() {
   return (neuron0x2696c60()*0.0814739);
}

double NNfunction_ss_sRsR::synapse0x26bd2f0() {
   return (neuron0x2696fa0()*-0.0448418);
}

double NNfunction_ss_sRsR::synapse0x26bd330() {
   return (neuron0x26972e0()*0.0475048);
}

double NNfunction_ss_sRsR::synapse0x26bd370() {
   return (neuron0x2697620()*0.0053438);
}

double NNfunction_ss_sRsR::synapse0x26bce00() {
   return (neuron0x2697960()*-0.00774498);
}

double NNfunction_ss_sRsR::synapse0x26bce40() {
   return (neuron0x2697ec0()*-0.0233643);
}

double NNfunction_ss_sRsR::synapse0x26bd4c0() {
   return (neuron0x26980e0()*-0.00964898);
}

double NNfunction_ss_sRsR::synapse0x26bd500() {
   return (neuron0x2698420()*-0.0229038);
}

double NNfunction_ss_sRsR::synapse0x26bd540() {
   return (neuron0x2698760()*-0.0479967);
}

double NNfunction_ss_sRsR::synapse0x26bd580() {
   return (neuron0x2698aa0()*0.0501143);
}

double NNfunction_ss_sRsR::synapse0x26bd5c0() {
   return (neuron0x2698de0()*0.0131642);
}

double NNfunction_ss_sRsR::synapse0x26bd600() {
   return (neuron0x2699120()*-0.000518638);
}

double NNfunction_ss_sRsR::synapse0x26bd980() {
   return (neuron0x2694560()*0.0812565);
}

double NNfunction_ss_sRsR::synapse0x26bd9c0() {
   return (neuron0x26948a0()*0.0472813);
}

double NNfunction_ss_sRsR::synapse0x26bda00() {
   return (neuron0x2694be0()*-0.267469);
}

double NNfunction_ss_sRsR::synapse0x26bda40() {
   return (neuron0x2694f20()*0.170096);
}

double NNfunction_ss_sRsR::synapse0x26bda80() {
   return (neuron0x2695260()*0.331953);
}

double NNfunction_ss_sRsR::synapse0x26bdac0() {
   return (neuron0x26955a0()*-0.184512);
}

double NNfunction_ss_sRsR::synapse0x26bdb00() {
   return (neuron0x26958e0()*-0.184535);
}

double NNfunction_ss_sRsR::synapse0x26bdb40() {
   return (neuron0x2695c20()*0.753687);
}

double NNfunction_ss_sRsR::synapse0x26bdb80() {
   return (neuron0x2695f60()*0.0147631);
}

double NNfunction_ss_sRsR::synapse0x26bdbc0() {
   return (neuron0x26962a0()*0.00927938);
}

double NNfunction_ss_sRsR::synapse0x26bdc00() {
   return (neuron0x26965e0()*-0.124583);
}

double NNfunction_ss_sRsR::synapse0x26bdc40() {
   return (neuron0x2696920()*-1.12998);
}

double NNfunction_ss_sRsR::synapse0x26bdc80() {
   return (neuron0x2696c60()*-0.781725);
}

double NNfunction_ss_sRsR::synapse0x26bdcc0() {
   return (neuron0x2696fa0()*-0.0776163);
}

double NNfunction_ss_sRsR::synapse0x26bdd00() {
   return (neuron0x26972e0()*-0.657691);
}

double NNfunction_ss_sRsR::synapse0x26bdd40() {
   return (neuron0x2697620()*-0.704934);
}

double NNfunction_ss_sRsR::synapse0x26bd7d0() {
   return (neuron0x2697960()*0.091082);
}

double NNfunction_ss_sRsR::synapse0x26bd810() {
   return (neuron0x2697ec0()*-0.627773);
}

double NNfunction_ss_sRsR::synapse0x26bde90() {
   return (neuron0x26980e0()*-0.571581);
}

double NNfunction_ss_sRsR::synapse0x26bded0() {
   return (neuron0x2698420()*0.0401142);
}

double NNfunction_ss_sRsR::synapse0x26bdf10() {
   return (neuron0x2698760()*-0.370988);
}

double NNfunction_ss_sRsR::synapse0x26bdf50() {
   return (neuron0x2698aa0()*0.167524);
}

double NNfunction_ss_sRsR::synapse0x26bdf90() {
   return (neuron0x2698de0()*0.315331);
}

double NNfunction_ss_sRsR::synapse0x26bdfd0() {
   return (neuron0x2699120()*-0.272776);
}

double NNfunction_ss_sRsR::synapse0x269a570() {
   return (neuron0x26995c0()*-5.28156);
}

double NNfunction_ss_sRsR::synapse0x269a5b0() {
   return (neuron0x2699ed0()*-1.71468);
}

double NNfunction_ss_sRsR::synapse0x269ba80() {
   return (neuron0x269a9b0()*-1.11067);
}

double NNfunction_ss_sRsR::synapse0x269bac0() {
   return (neuron0x2454240()*-1.81038);
}

double NNfunction_ss_sRsR::synapse0x269c450() {
   return (neuron0x269b7d0()*-1.91164);
}

double NNfunction_ss_sRsR::synapse0x269c490() {
   return (neuron0x269c1a0()*-3.47887);
}

double NNfunction_ss_sRsR::synapse0x269d220() {
   return (neuron0x269cf70()*1.19141);
}

double NNfunction_ss_sRsR::synapse0x269d260() {
   return (neuron0x269d940()*1.31555);
}

double NNfunction_ss_sRsR::synapse0x269dbf0() {
   return (neuron0x269e310()*3.42706);
}

double NNfunction_ss_sRsR::synapse0x269dc30() {
   return (neuron0x269edf0()*1.63108);
}

double NNfunction_ss_sRsR::synapse0x269e5c0() {
   return (neuron0x269f7c0()*-1.41901);
}

double NNfunction_ss_sRsR::synapse0x269e600() {
   return (neuron0x269c8a0()*-0.734644);
}

double NNfunction_ss_sRsR::synapse0x269f0a0() {
   return (neuron0x26a1370()*-1.68902);
}

double NNfunction_ss_sRsR::synapse0x269f0e0() {
   return (neuron0x26a1d40()*-3.53574);
}

double NNfunction_ss_sRsR::synapse0x269fa70() {
   return (neuron0x26a2710()*0.674457);
}

double NNfunction_ss_sRsR::synapse0x269fab0() {
   return (neuron0x26a30e0()*1.9355);
}

double NNfunction_ss_sRsR::synapse0x269cb50() {
   return (neuron0x26a4ef0()*1.08641);
}

double NNfunction_ss_sRsR::synapse0x269cb90() {
   return (neuron0x26a51d0()*2.46041);
}

double NNfunction_ss_sRsR::synapse0x26a1620() {
   return (neuron0x26a5ba0()*6.21762);
}

double NNfunction_ss_sRsR::synapse0x26a1660() {
   return (neuron0x26a6570()*2.4869);
}

double NNfunction_ss_sRsR::synapse0x26a1ff0() {
   return (neuron0x26a6f40()*0.854415);
}

double NNfunction_ss_sRsR::synapse0x26a2030() {
   return (neuron0x26a7910()*2.35037);
}

double NNfunction_ss_sRsR::synapse0x26a29c0() {
   return (neuron0x26a0460()*0.131716);
}

double NNfunction_ss_sRsR::synapse0x26a2a00() {
   return (neuron0x26a0e30()*-1.59067);
}

double NNfunction_ss_sRsR::synapse0x26a3390() {
   return (neuron0x26aa6a0()*1.19753);
}

double NNfunction_ss_sRsR::synapse0x26a33d0() {
   return (neuron0x26ab070()*-1.88324);
}

double NNfunction_ss_sRsR::synapse0x2697500() {
   return (neuron0x26aba40()*-3.32609);
}

double NNfunction_ss_sRsR::synapse0x2697540() {
   return (neuron0x26ac410()*1.34018);
}

double NNfunction_ss_sRsR::synapse0x26a5480() {
   return (neuron0x26acde0()*-1.711);
}

double NNfunction_ss_sRsR::synapse0x26a54c0() {
   return (neuron0x26ad7b0()*-1.2449);
}

double NNfunction_ss_sRsR::synapse0x26a5e50() {
   return (neuron0x26ae180()*4.3225);
}

double NNfunction_ss_sRsR::synapse0x26a5e90() {
   return (neuron0x26aeb50()*1.40592);
}

double NNfunction_ss_sRsR::synapse0x26a6820() {
   return (neuron0x26a4be0()*1.03121);
}

double NNfunction_ss_sRsR::synapse0x26a6860() {
   return (neuron0x26b1730()*2.34423);
}

double NNfunction_ss_sRsR::synapse0x26a71f0() {
   return (neuron0x26b2100()*0.470732);
}

double NNfunction_ss_sRsR::synapse0x26a7230() {
   return (neuron0x26b2ad0()*-1.43195);
}

double NNfunction_ss_sRsR::synapse0x26a7bc0() {
   return (neuron0x26b34a0()*-0.586112);
}

double NNfunction_ss_sRsR::synapse0x26a7c00() {
   return (neuron0x26b3e70()*-1.5415);
}

double NNfunction_ss_sRsR::synapse0x26a0710() {
   return (neuron0x26b4840()*-2.3313);
}

double NNfunction_ss_sRsR::synapse0x26a0750() {
   return (neuron0x26b5210()*3.4575);
}

double NNfunction_ss_sRsR::synapse0x26a9fc0() {
   return (neuron0x26b5be0()*1.51816);
}

double NNfunction_ss_sRsR::synapse0x26aa000() {
   return (neuron0x26b67c0()*7.35266);
}

double NNfunction_ss_sRsR::synapse0x26aa950() {
   return (neuron0x26b7190()*-4.29133);
}

double NNfunction_ss_sRsR::synapse0x26aa990() {
   return (neuron0x26a8010()*-1.57087);
}

double NNfunction_ss_sRsR::synapse0x26ab320() {
   return (neuron0x26a89e0()*1.24271);
}

double NNfunction_ss_sRsR::synapse0x26ab360() {
   return (neuron0x26a93b0()*0.0957108);
}

double NNfunction_ss_sRsR::synapse0x26abcf0() {
   return (neuron0x26bb9f0()*1.8364);
}

double NNfunction_ss_sRsR::synapse0x26abd30() {
   return (neuron0x26bc2a0()*-0.844429);
}

double NNfunction_ss_sRsR::synapse0x26ac6c0() {
   return (neuron0x26bcc70()*-1.18345);
}

double NNfunction_ss_sRsR::synapse0x26ac700() {
   return (neuron0x26bd640()*1.59179);
}

double NNfunction_ss_sRsR::synapse0x26aee00() {
   return (neuron0x26995c0()*0.175897);
}

double NNfunction_ss_sRsR::synapse0x26aee40() {
   return (neuron0x2699ed0()*-1.13728);
}

double NNfunction_ss_sRsR::synapse0x26a43c0() {
   return (neuron0x269a9b0()*-0.0107225);
}

double NNfunction_ss_sRsR::synapse0x26a4400() {
   return (neuron0x2454240()*0.00752224);
}

double NNfunction_ss_sRsR::synapse0x26b19e0() {
   return (neuron0x269b7d0()*0.0120072);
}

double NNfunction_ss_sRsR::synapse0x26b1a20() {
   return (neuron0x269c1a0()*-0.369193);
}

double NNfunction_ss_sRsR::synapse0x26b23b0() {
   return (neuron0x269cf70()*-0.0378801);
}

double NNfunction_ss_sRsR::synapse0x26b23f0() {
   return (neuron0x269d940()*-0.0122086);
}

double NNfunction_ss_sRsR::synapse0x26b2d80() {
   return (neuron0x269e310()*0.18869);
}

double NNfunction_ss_sRsR::synapse0x26b2dc0() {
   return (neuron0x269edf0()*0.0312426);
}

double NNfunction_ss_sRsR::synapse0x26b3750() {
   return (neuron0x269f7c0()*-0.295996);
}

double NNfunction_ss_sRsR::synapse0x26b3790() {
   return (neuron0x269c8a0()*0.0356193);
}

double NNfunction_ss_sRsR::synapse0x26b4120() {
   return (neuron0x26a1370()*-1.17978);
}

double NNfunction_ss_sRsR::synapse0x26b4160() {
   return (neuron0x26a1d40()*-0.0706507);
}

double NNfunction_ss_sRsR::synapse0x26b4af0() {
   return (neuron0x26a2710()*0.00300836);
}

double NNfunction_ss_sRsR::synapse0x26b4b30() {
   return (neuron0x26a30e0()*-0.0462927);
}

double NNfunction_ss_sRsR::synapse0x26b54c0() {
   return (neuron0x26a4ef0()*0.351559);
}

double NNfunction_ss_sRsR::synapse0x26b5500() {
   return (neuron0x26a51d0()*-0.1222);
}

double NNfunction_ss_sRsR::synapse0x26b5e90() {
   return (neuron0x26a5ba0()*0.65505);
}

double NNfunction_ss_sRsR::synapse0x26b5ed0() {
   return (neuron0x26a6570()*0.0429314);
}

double NNfunction_ss_sRsR::synapse0x26b6a70() {
   return (neuron0x26a6f40()*0.0334995);
}

double NNfunction_ss_sRsR::synapse0x26b6ab0() {
   return (neuron0x26a7910()*-0.0035483);
}

double NNfunction_ss_sRsR::synapse0x26b7440() {
   return (neuron0x26a0460()*0.00316292);
}

double NNfunction_ss_sRsR::synapse0x26b7480() {
   return (neuron0x26a0e30()*0.0184183);
}

double NNfunction_ss_sRsR::synapse0x26a82c0() {
   return (neuron0x26aa6a0()*0.0153533);
}

double NNfunction_ss_sRsR::synapse0x26a8300() {
   return (neuron0x26ab070()*0.236719);
}

double NNfunction_ss_sRsR::synapse0x26a8c90() {
   return (neuron0x26aba40()*0.0854604);
}

double NNfunction_ss_sRsR::synapse0x26a8cd0() {
   return (neuron0x26ac410()*0.0126843);
}

double NNfunction_ss_sRsR::synapse0x26a9660() {
   return (neuron0x26acde0()*0.0245556);
}

double NNfunction_ss_sRsR::synapse0x26a96a0() {
   return (neuron0x26ad7b0()*-0.0182133);
}

double NNfunction_ss_sRsR::synapse0x26bbb80() {
   return (neuron0x26ae180()*0.663663);
}

double NNfunction_ss_sRsR::synapse0x26bbbc0() {
   return (neuron0x26aeb50()*0.0844015);
}

double NNfunction_ss_sRsR::synapse0x26bc550() {
   return (neuron0x26a4be0()*0.00517193);
}

double NNfunction_ss_sRsR::synapse0x26bc590() {
   return (neuron0x26b1730()*-0.0200732);
}

double NNfunction_ss_sRsR::synapse0x26bcf20() {
   return (neuron0x26b2100()*-0.00895252);
}

double NNfunction_ss_sRsR::synapse0x26bcf60() {
   return (neuron0x26b2ad0()*-0.00863058);
}

double NNfunction_ss_sRsR::synapse0x26bd8f0() {
   return (neuron0x26b34a0()*0.0189952);
}

double NNfunction_ss_sRsR::synapse0x26bd930() {
   return (neuron0x26b3e70()*-0.0135246);
}

double NNfunction_ss_sRsR::synapse0x26997e0() {
   return (neuron0x26b4840()*0.0393326);
}

double NNfunction_ss_sRsR::synapse0x2699820() {
   return (neuron0x26b5210()*0.0482087);
}

double NNfunction_ss_sRsR::synapse0x26ad090() {
   return (neuron0x26b5be0()*0.26636);
}

double NNfunction_ss_sRsR::synapse0x26ad0d0() {
   return (neuron0x26b67c0()*0.711221);
}

double NNfunction_ss_sRsR::synapse0x26be010() {
   return (neuron0x26b7190()*0.130182);
}

double NNfunction_ss_sRsR::synapse0x26be050() {
   return (neuron0x26a8010()*-2.11124);
}

double NNfunction_ss_sRsR::synapse0x26be090() {
   return (neuron0x26a89e0()*-0.0351879);
}

double NNfunction_ss_sRsR::synapse0x26be0d0() {
   return (neuron0x26a93b0()*0.519959);
}

double NNfunction_ss_sRsR::synapse0x26c4f80() {
   return (neuron0x26bb9f0()*-0.0160951);
}

double NNfunction_ss_sRsR::synapse0x26c4fc0() {
   return (neuron0x26bc2a0()*-0.0145552);
}

double NNfunction_ss_sRsR::synapse0x26c5000() {
   return (neuron0x26bcc70()*-0.185492);
}

double NNfunction_ss_sRsR::synapse0x26c5040() {
   return (neuron0x26bd640()*-0.0923958);
}

double NNfunction_ss_sRsR::synapse0x26c53c0() {
   return (neuron0x26995c0()*0.635466);
}

double NNfunction_ss_sRsR::synapse0x26c5400() {
   return (neuron0x2699ed0()*-0.102399);
}

double NNfunction_ss_sRsR::synapse0x26c5440() {
   return (neuron0x269a9b0()*0.91558);
}

double NNfunction_ss_sRsR::synapse0x26c5480() {
   return (neuron0x2454240()*-0.917001);
}

double NNfunction_ss_sRsR::synapse0x26c54c0() {
   return (neuron0x269b7d0()*-0.806754);
}

double NNfunction_ss_sRsR::synapse0x26c5500() {
   return (neuron0x269c1a0()*-1.10405);
}

double NNfunction_ss_sRsR::synapse0x26c5540() {
   return (neuron0x269cf70()*-0.571962);
}

double NNfunction_ss_sRsR::synapse0x26c5580() {
   return (neuron0x269d940()*0.93922);
}

double NNfunction_ss_sRsR::synapse0x26c55c0() {
   return (neuron0x269e310()*5.02753);
}

double NNfunction_ss_sRsR::synapse0x26c5600() {
   return (neuron0x269edf0()*-0.00604007);
}

double NNfunction_ss_sRsR::synapse0x26c5640() {
   return (neuron0x269f7c0()*-1.68389);
}

double NNfunction_ss_sRsR::synapse0x26c5680() {
   return (neuron0x269c8a0()*0.540394);
}

double NNfunction_ss_sRsR::synapse0x26c56c0() {
   return (neuron0x26a1370()*0.799188);
}

double NNfunction_ss_sRsR::synapse0x26c5700() {
   return (neuron0x26a1d40()*-0.756608);
}

double NNfunction_ss_sRsR::synapse0x26c5740() {
   return (neuron0x26a2710()*-0.476059);
}

double NNfunction_ss_sRsR::synapse0x26c5780() {
   return (neuron0x26a30e0()*-0.523595);
}

double NNfunction_ss_sRsR::synapse0x26c5210() {
   return (neuron0x26a4ef0()*1.28405);
}

double NNfunction_ss_sRsR::synapse0x26c5250() {
   return (neuron0x26a51d0()*2.18837);
}

double NNfunction_ss_sRsR::synapse0x26c58d0() {
   return (neuron0x26a5ba0()*-6.01881);
}

double NNfunction_ss_sRsR::synapse0x26c5910() {
   return (neuron0x26a6570()*-0.320071);
}

double NNfunction_ss_sRsR::synapse0x26c5950() {
   return (neuron0x26a6f40()*-0.0732663);
}

double NNfunction_ss_sRsR::synapse0x26c5990() {
   return (neuron0x26a7910()*0.408882);
}

double NNfunction_ss_sRsR::synapse0x26c59d0() {
   return (neuron0x26a0460()*0.822414);
}

double NNfunction_ss_sRsR::synapse0x26c5a10() {
   return (neuron0x26a0e30()*-0.0851191);
}

double NNfunction_ss_sRsR::synapse0x26c5a50() {
   return (neuron0x26aa6a0()*-0.226246);
}

double NNfunction_ss_sRsR::synapse0x26c5a90() {
   return (neuron0x26ab070()*0.724528);
}

double NNfunction_ss_sRsR::synapse0x26c5ad0() {
   return (neuron0x26aba40()*-0.5881);
}

double NNfunction_ss_sRsR::synapse0x26c5b10() {
   return (neuron0x26ac410()*0.706647);
}

double NNfunction_ss_sRsR::synapse0x26c5b50() {
   return (neuron0x26acde0()*-0.0902788);
}

double NNfunction_ss_sRsR::synapse0x26c5b90() {
   return (neuron0x26ad7b0()*0.403415);
}

double NNfunction_ss_sRsR::synapse0x26c5bd0() {
   return (neuron0x26ae180()*6.74391);
}

double NNfunction_ss_sRsR::synapse0x26c5c10() {
   return (neuron0x26aeb50()*0.702625);
}

double NNfunction_ss_sRsR::synapse0x26c57c0() {
   return (neuron0x26a4be0()*0.539644);
}

double NNfunction_ss_sRsR::synapse0x26c5800() {
   return (neuron0x26b1730()*0.0672088);
}

double NNfunction_ss_sRsR::synapse0x26c5840() {
   return (neuron0x26b2100()*-0.34213);
}

double NNfunction_ss_sRsR::synapse0x26c5880() {
   return (neuron0x26b2ad0()*-0.0861934);
}

double NNfunction_ss_sRsR::synapse0x26c5e60() {
   return (neuron0x26b34a0()*-0.175593);
}

double NNfunction_ss_sRsR::synapse0x26c5ea0() {
   return (neuron0x26b3e70()*0.515458);
}

double NNfunction_ss_sRsR::synapse0x26c5ee0() {
   return (neuron0x26b4840()*-0.0174557);
}

double NNfunction_ss_sRsR::synapse0x26c5f20() {
   return (neuron0x26b5210()*-0.129168);
}

double NNfunction_ss_sRsR::synapse0x26c5f60() {
   return (neuron0x26b5be0()*-2.18303);
}

double NNfunction_ss_sRsR::synapse0x26c5fa0() {
   return (neuron0x26b67c0()*5.14552);
}

double NNfunction_ss_sRsR::synapse0x26c5fe0() {
   return (neuron0x26b7190()*0.569225);
}

double NNfunction_ss_sRsR::synapse0x26c6020() {
   return (neuron0x26a8010()*-0.342067);
}

double NNfunction_ss_sRsR::synapse0x26c6060() {
   return (neuron0x26a89e0()*-0.431225);
}

double NNfunction_ss_sRsR::synapse0x26c60a0() {
   return (neuron0x26a93b0()*-0.141924);
}

double NNfunction_ss_sRsR::synapse0x26c60e0() {
   return (neuron0x26bb9f0()*-0.343334);
}

double NNfunction_ss_sRsR::synapse0x26c6120() {
   return (neuron0x26bc2a0()*0.2709);
}

double NNfunction_ss_sRsR::synapse0x26c6160() {
   return (neuron0x26bcc70()*-1.73447);
}

double NNfunction_ss_sRsR::synapse0x26c61a0() {
   return (neuron0x26bd640()*0.704559);
}

double NNfunction_ss_sRsR::synapse0x26c6520() {
   return (neuron0x26995c0()*-0.651272);
}

double NNfunction_ss_sRsR::synapse0x26c6560() {
   return (neuron0x2699ed0()*-1.09733);
}

double NNfunction_ss_sRsR::synapse0x26c65a0() {
   return (neuron0x269a9b0()*-1.50716);
}

double NNfunction_ss_sRsR::synapse0x26c65e0() {
   return (neuron0x2454240()*0.535378);
}

double NNfunction_ss_sRsR::synapse0x26c6620() {
   return (neuron0x269b7d0()*0.525518);
}

double NNfunction_ss_sRsR::synapse0x26c6660() {
   return (neuron0x269c1a0()*0.696908);
}

double NNfunction_ss_sRsR::synapse0x26c66a0() {
   return (neuron0x269cf70()*1.55385);
}

double NNfunction_ss_sRsR::synapse0x26c66e0() {
   return (neuron0x269d940()*-0.643304);
}

double NNfunction_ss_sRsR::synapse0x26c6720() {
   return (neuron0x269e310()*-4.2207);
}

double NNfunction_ss_sRsR::synapse0x26c6760() {
   return (neuron0x269edf0()*0.273852);
}

double NNfunction_ss_sRsR::synapse0x26c67a0() {
   return (neuron0x269f7c0()*-2.18377);
}

double NNfunction_ss_sRsR::synapse0x26c67e0() {
   return (neuron0x269c8a0()*-1.78342);
}

double NNfunction_ss_sRsR::synapse0x26c6820() {
   return (neuron0x26a1370()*-1.30147);
}

double NNfunction_ss_sRsR::synapse0x26c6860() {
   return (neuron0x26a1d40()*-1.79052);
}

double NNfunction_ss_sRsR::synapse0x26c68a0() {
   return (neuron0x26a2710()*-2.2332);
}

double NNfunction_ss_sRsR::synapse0x26c68e0() {
   return (neuron0x26a30e0()*1.12007);
}

double NNfunction_ss_sRsR::synapse0x26c6370() {
   return (neuron0x26a4ef0()*-3.17867);
}

double NNfunction_ss_sRsR::synapse0x26c63b0() {
   return (neuron0x26a51d0()*-2.29632);
}

double NNfunction_ss_sRsR::synapse0x26c6a30() {
   return (neuron0x26a5ba0()*5.55743);
}

double NNfunction_ss_sRsR::synapse0x26c6a70() {
   return (neuron0x26a6570()*-0.30869);
}

double NNfunction_ss_sRsR::synapse0x26c6ab0() {
   return (neuron0x26a6f40()*1.40672);
}

double NNfunction_ss_sRsR::synapse0x26c6af0() {
   return (neuron0x26a7910()*0.488916);
}

double NNfunction_ss_sRsR::synapse0x26c6b30() {
   return (neuron0x26a0460()*-1.40505);
}

double NNfunction_ss_sRsR::synapse0x26c6b70() {
   return (neuron0x26a0e30()*-0.88138);
}

double NNfunction_ss_sRsR::synapse0x26c6bb0() {
   return (neuron0x26aa6a0()*0.713498);
}

double NNfunction_ss_sRsR::synapse0x26c6bf0() {
   return (neuron0x26ab070()*0.819726);
}

double NNfunction_ss_sRsR::synapse0x26c6c30() {
   return (neuron0x26aba40()*-0.919098);
}

double NNfunction_ss_sRsR::synapse0x26c6c70() {
   return (neuron0x26ac410()*-0.593026);
}

double NNfunction_ss_sRsR::synapse0x26c6cb0() {
   return (neuron0x26acde0()*-0.397633);
}

double NNfunction_ss_sRsR::synapse0x26c6cf0() {
   return (neuron0x26ad7b0()*-1.35241);
}

double NNfunction_ss_sRsR::synapse0x26c6d30() {
   return (neuron0x26ae180()*-5.89343);
}

double NNfunction_ss_sRsR::synapse0x26c6d70() {
   return (neuron0x26aeb50()*0.212384);
}

double NNfunction_ss_sRsR::synapse0x26c6920() {
   return (neuron0x26a4be0()*0.278259);
}

double NNfunction_ss_sRsR::synapse0x26c6960() {
   return (neuron0x26b1730()*0.670416);
}

double NNfunction_ss_sRsR::synapse0x26c69a0() {
   return (neuron0x26b2100()*1.32961);
}

double NNfunction_ss_sRsR::synapse0x26c69e0() {
   return (neuron0x26b2ad0()*-0.546538);
}

double NNfunction_ss_sRsR::synapse0x26c6fc0() {
   return (neuron0x26b34a0()*1.3023);
}

double NNfunction_ss_sRsR::synapse0x26c7000() {
   return (neuron0x26b3e70()*-2.06154);
}

double NNfunction_ss_sRsR::synapse0x26c7040() {
   return (neuron0x26b4840()*-0.541754);
}

double NNfunction_ss_sRsR::synapse0x26c7080() {
   return (neuron0x26b5210()*0.060649);
}

double NNfunction_ss_sRsR::synapse0x26c70c0() {
   return (neuron0x26b5be0()*2.14358);
}

double NNfunction_ss_sRsR::synapse0x26c7100() {
   return (neuron0x26b67c0()*-0.450765);
}

double NNfunction_ss_sRsR::synapse0x26c7140() {
   return (neuron0x26b7190()*-1.18553);
}

double NNfunction_ss_sRsR::synapse0x26c7180() {
   return (neuron0x26a8010()*-1.26411);
}

double NNfunction_ss_sRsR::synapse0x26c71c0() {
   return (neuron0x26a89e0()*1.55038);
}

double NNfunction_ss_sRsR::synapse0x26c7200() {
   return (neuron0x26a93b0()*-1.53197);
}

double NNfunction_ss_sRsR::synapse0x26c7240() {
   return (neuron0x26bb9f0()*0.879098);
}

double NNfunction_ss_sRsR::synapse0x26c7280() {
   return (neuron0x26bc2a0()*-1.19267);
}

double NNfunction_ss_sRsR::synapse0x26c72c0() {
   return (neuron0x26bcc70()*6.89046);
}

double NNfunction_ss_sRsR::synapse0x26c7300() {
   return (neuron0x26bd640()*-0.084901);
}

double NNfunction_ss_sRsR::synapse0x26c7680() {
   return (neuron0x26995c0()*-0.16552);
}

double NNfunction_ss_sRsR::synapse0x26c76c0() {
   return (neuron0x2699ed0()*-1.39708);
}

double NNfunction_ss_sRsR::synapse0x26c7700() {
   return (neuron0x269a9b0()*0.00247202);
}

double NNfunction_ss_sRsR::synapse0x26c7740() {
   return (neuron0x2454240()*-0.0180172);
}

double NNfunction_ss_sRsR::synapse0x26c7780() {
   return (neuron0x269b7d0()*0.023056);
}

double NNfunction_ss_sRsR::synapse0x26c77c0() {
   return (neuron0x269c1a0()*-3.59698);
}

double NNfunction_ss_sRsR::synapse0x26c7800() {
   return (neuron0x269cf70()*-0.00370091);
}

double NNfunction_ss_sRsR::synapse0x26c7840() {
   return (neuron0x269d940()*-0.0135868);
}

double NNfunction_ss_sRsR::synapse0x26c7880() {
   return (neuron0x269e310()*1.58522);
}

double NNfunction_ss_sRsR::synapse0x26c78c0() {
   return (neuron0x269edf0()*-0.0400801);
}

double NNfunction_ss_sRsR::synapse0x26c7900() {
   return (neuron0x269f7c0()*0.020819);
}

double NNfunction_ss_sRsR::synapse0x26c7940() {
   return (neuron0x269c8a0()*-0.0184061);
}

double NNfunction_ss_sRsR::synapse0x26c7980() {
   return (neuron0x26a1370()*-0.921543);
}

double NNfunction_ss_sRsR::synapse0x26c79c0() {
   return (neuron0x26a1d40()*-0.209307);
}

double NNfunction_ss_sRsR::synapse0x26c7a00() {
   return (neuron0x26a2710()*-0.0222657);
}

double NNfunction_ss_sRsR::synapse0x26c7a40() {
   return (neuron0x26a30e0()*0.30326);
}

double NNfunction_ss_sRsR::synapse0x26c74d0() {
   return (neuron0x26a4ef0()*-0.310576);
}

double NNfunction_ss_sRsR::synapse0x26c7510() {
   return (neuron0x26a51d0()*-0.030387);
}

double NNfunction_ss_sRsR::synapse0x26c7b90() {
   return (neuron0x26a5ba0()*1.11289);
}

double NNfunction_ss_sRsR::synapse0x26c7bd0() {
   return (neuron0x26a6570()*-0.154235);
}

double NNfunction_ss_sRsR::synapse0x26c7c10() {
   return (neuron0x26a6f40()*-0.029446);
}

double NNfunction_ss_sRsR::synapse0x26c7c50() {
   return (neuron0x26a7910()*0.171699);
}

double NNfunction_ss_sRsR::synapse0x26c7c90() {
   return (neuron0x26a0460()*0.0137105);
}

double NNfunction_ss_sRsR::synapse0x26c7cd0() {
   return (neuron0x26a0e30()*-0.000995119);
}

double NNfunction_ss_sRsR::synapse0x26c7d10() {
   return (neuron0x26aa6a0()*0.0167341);
}

double NNfunction_ss_sRsR::synapse0x26c7d50() {
   return (neuron0x26ab070()*2.88074);
}

double NNfunction_ss_sRsR::synapse0x26c7d90() {
   return (neuron0x26aba40()*-0.262524);
}

double NNfunction_ss_sRsR::synapse0x26c7dd0() {
   return (neuron0x26ac410()*-0.0208774);
}

double NNfunction_ss_sRsR::synapse0x26c7e10() {
   return (neuron0x26acde0()*0.0026375);
}

double NNfunction_ss_sRsR::synapse0x26c7e50() {
   return (neuron0x26ad7b0()*-0.12097);
}

double NNfunction_ss_sRsR::synapse0x26c7e90() {
   return (neuron0x26ae180()*0.954659);
}

double NNfunction_ss_sRsR::synapse0x26c7ed0() {
   return (neuron0x26aeb50()*-0.0641454);
}

double NNfunction_ss_sRsR::synapse0x26c7a80() {
   return (neuron0x26a4be0()*-0.0143174);
}

double NNfunction_ss_sRsR::synapse0x26c7ac0() {
   return (neuron0x26b1730()*0.109146);
}

double NNfunction_ss_sRsR::synapse0x26c7b00() {
   return (neuron0x26b2100()*-0.00335686);
}

double NNfunction_ss_sRsR::synapse0x26c7b40() {
   return (neuron0x26b2ad0()*0.0419127);
}

double NNfunction_ss_sRsR::synapse0x26c8120() {
   return (neuron0x26b34a0()*0.00167898);
}

double NNfunction_ss_sRsR::synapse0x26c8160() {
   return (neuron0x26b3e70()*0.0618449);
}

double NNfunction_ss_sRsR::synapse0x26c81a0() {
   return (neuron0x26b4840()*-0.287371);
}

double NNfunction_ss_sRsR::synapse0x26c81e0() {
   return (neuron0x26b5210()*0.267251);
}

double NNfunction_ss_sRsR::synapse0x26c8220() {
   return (neuron0x26b5be0()*2.64963);
}

double NNfunction_ss_sRsR::synapse0x26c8260() {
   return (neuron0x26b67c0()*1.93298);
}

double NNfunction_ss_sRsR::synapse0x26c82a0() {
   return (neuron0x26b7190()*-0.12737);
}

double NNfunction_ss_sRsR::synapse0x26c82e0() {
   return (neuron0x26a8010()*-2.46136);
}

double NNfunction_ss_sRsR::synapse0x26c8320() {
   return (neuron0x26a89e0()*0.166581);
}

double NNfunction_ss_sRsR::synapse0x26c8360() {
   return (neuron0x26a93b0()*-2.45328);
}

double NNfunction_ss_sRsR::synapse0x26c83a0() {
   return (neuron0x26bb9f0()*0.145375);
}

double NNfunction_ss_sRsR::synapse0x26c83e0() {
   return (neuron0x26bc2a0()*-0.0493356);
}

double NNfunction_ss_sRsR::synapse0x26c8420() {
   return (neuron0x26bcc70()*2.86657);
}

double NNfunction_ss_sRsR::synapse0x26c8460() {
   return (neuron0x26bd640()*0.0385098);
}

double NNfunction_ss_sRsR::synapse0x2699580() {
   return (neuron0x26c4840()*-6.40875);
}

double NNfunction_ss_sRsR::synapse0x26c86c0() {
   return (neuron0x26c4be0()*-3.19097);
}

double NNfunction_ss_sRsR::synapse0x26c8700() {
   return (neuron0x26c5080()*-4.60607);
}

double NNfunction_ss_sRsR::synapse0x26c8740() {
   return (neuron0x26c61e0()*-4.65102);
}

double NNfunction_ss_sRsR::synapse0x26c8780() {
   return (neuron0x26c7340()*-5.8046);
}

