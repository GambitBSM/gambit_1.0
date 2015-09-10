#include "NNfunction_ns_chi01_uR.h"
#include <cmath>

double NNfunction_ns_chi01_uR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.2836)/15.19;
   input1 = (in1 - 68.7437)/591.209;
   input2 = (in2 - 497.599)/535.346;
   input3 = (in3 - 289.671)/728.293;
   input4 = (in4 - 892.301)/757.106;
   input5 = (in5 - 789.583)/750.069;
   input6 = (in6 - 789.027)/749.866;
   input7 = (in7 - 780.438)/730.958;
   input8 = (in8 - 772.385)/743.601;
   input9 = (in9 - 764.917)/731.55;
   input10 = (in10 - 774.932)/744.401;
   input11 = (in11 - 793.203)/654.436;
   input12 = (in12 - 796.062)/658.711;
   input13 = (in13 - 611.105)/431.719;
   input14 = (in14 - 575.326)/441.249;
   input15 = (in15 - 817.839)/657.55;
   input16 = (in16 - 562.42)/444.277;
   input17 = (in17 - 802.726)/675.921;
   input18 = (in18 - 805.649)/679.15;
   input19 = (in19 - 801.434)/650.577;
   input20 = (in20 - -224.715)/489.608;
   input21 = (in21 - -294.343)/1022.63;
   input22 = (in22 - -12.0369)/1002.15;
   input23 = (in23 - -20.4439)/544.04;
   switch(index) {
     case 0:
         return neuron0x2469bc0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi01_uR::Value(int index, double* input) {
   input0 = (input[0] - 23.2836)/15.19;
   input1 = (input[1] - 68.7437)/591.209;
   input2 = (input[2] - 497.599)/535.346;
   input3 = (input[3] - 289.671)/728.293;
   input4 = (input[4] - 892.301)/757.106;
   input5 = (input[5] - 789.583)/750.069;
   input6 = (input[6] - 789.027)/749.866;
   input7 = (input[7] - 780.438)/730.958;
   input8 = (input[8] - 772.385)/743.601;
   input9 = (input[9] - 764.917)/731.55;
   input10 = (input[10] - 774.932)/744.401;
   input11 = (input[11] - 793.203)/654.436;
   input12 = (input[12] - 796.062)/658.711;
   input13 = (input[13] - 611.105)/431.719;
   input14 = (input[14] - 575.326)/441.249;
   input15 = (input[15] - 817.839)/657.55;
   input16 = (input[16] - 562.42)/444.277;
   input17 = (input[17] - 802.726)/675.921;
   input18 = (input[18] - 805.649)/679.15;
   input19 = (input[19] - 801.434)/650.577;
   input20 = (input[20] - -224.715)/489.608;
   input21 = (input[21] - -294.343)/1022.63;
   input22 = (input[22] - -12.0369)/1002.15;
   input23 = (input[23] - -20.4439)/544.04;
   switch(index) {
     case 0:
         return neuron0x2469bc0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi01_uR::neuron0x2435d80() {
   return input0;
}

double NNfunction_ns_chi01_uR::neuron0x2436030() {
   return input1;
}

double NNfunction_ns_chi01_uR::neuron0x2436370() {
   return input2;
}

double NNfunction_ns_chi01_uR::neuron0x24366b0() {
   return input3;
}

double NNfunction_ns_chi01_uR::neuron0x24369f0() {
   return input4;
}

double NNfunction_ns_chi01_uR::neuron0x2436d30() {
   return input5;
}

double NNfunction_ns_chi01_uR::neuron0x2437070() {
   return input6;
}

double NNfunction_ns_chi01_uR::neuron0x24373b0() {
   return input7;
}

double NNfunction_ns_chi01_uR::neuron0x24376f0() {
   return input8;
}

double NNfunction_ns_chi01_uR::neuron0x2437a30() {
   return input9;
}

double NNfunction_ns_chi01_uR::neuron0x2437d70() {
   return input10;
}

double NNfunction_ns_chi01_uR::neuron0x24380b0() {
   return input11;
}

double NNfunction_ns_chi01_uR::neuron0x24383f0() {
   return input12;
}

double NNfunction_ns_chi01_uR::neuron0x2438730() {
   return input13;
}

double NNfunction_ns_chi01_uR::neuron0x2438a70() {
   return input14;
}

double NNfunction_ns_chi01_uR::neuron0x2438db0() {
   return input15;
}

double NNfunction_ns_chi01_uR::neuron0x24390f0() {
   return input16;
}

double NNfunction_ns_chi01_uR::neuron0x2439650() {
   return input17;
}

double NNfunction_ns_chi01_uR::neuron0x2439870() {
   return input18;
}

double NNfunction_ns_chi01_uR::neuron0x2439bb0() {
   return input19;
}

double NNfunction_ns_chi01_uR::neuron0x2439ef0() {
   return input20;
}

double NNfunction_ns_chi01_uR::neuron0x243a230() {
   return input21;
}

double NNfunction_ns_chi01_uR::neuron0x243a570() {
   return input22;
}

double NNfunction_ns_chi01_uR::neuron0x243a8b0() {
   return input23;
}

double NNfunction_ns_chi01_uR::input0x243ad20() {
   double input = -1.11002;
   input += synapse0x2435d00();
   input += synapse0x2435d40();
   input += synapse0x243afd0();
   input += synapse0x243b010();
   input += synapse0x243b050();
   input += synapse0x243b090();
   input += synapse0x243b0d0();
   input += synapse0x243b110();
   input += synapse0x243b150();
   input += synapse0x243b190();
   input += synapse0x243b1d0();
   input += synapse0x243b210();
   input += synapse0x243b250();
   input += synapse0x243b290();
   input += synapse0x243b2d0();
   input += synapse0x243b310();
   input += synapse0x2435c70();
   input += synapse0x2435cb0();
   input += synapse0x21f0e20();
   input += synapse0x21f0e60();
   input += synapse0x243b570();
   input += synapse0x243b5b0();
   input += synapse0x243b5f0();
   input += synapse0x243b630();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x243ad20() {
   double input = input0x243ad20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x243b670() {
   double input = 0.86901;
   input += synapse0x243b9b0();
   input += synapse0x243b9f0();
   input += synapse0x243ba30();
   input += synapse0x243ba70();
   input += synapse0x243bab0();
   input += synapse0x243baf0();
   input += synapse0x243bb30();
   input += synapse0x243bb70();
   input += synapse0x243bbb0();
   input += synapse0x243b460();
   input += synapse0x243b4a0();
   input += synapse0x243b4e0();
   input += synapse0x243b520();
   input += synapse0x243be00();
   input += synapse0x243be40();
   input += synapse0x243be80();
   input += synapse0x243b800();
   input += synapse0x243b840();
   input += synapse0x243bfd0();
   input += synapse0x243c010();
   input += synapse0x243c050();
   input += synapse0x243c090();
   input += synapse0x243c0d0();
   input += synapse0x243c110();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x243b670() {
   double input = input0x243b670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x243c150() {
   double input = 4.80299;
   input += synapse0x243c490();
   input += synapse0x243c4d0();
   input += synapse0x243c510();
   input += synapse0x243c550();
   input += synapse0x243c590();
   input += synapse0x243c5d0();
   input += synapse0x243c610();
   input += synapse0x243c650();
   input += synapse0x243c690();
   input += synapse0x243c6d0();
   input += synapse0x243c710();
   input += synapse0x243c750();
   input += synapse0x243c790();
   input += synapse0x243c7d0();
   input += synapse0x243c810();
   input += synapse0x243c850();
   input += synapse0x243c2e0();
   input += synapse0x243c320();
   input += synapse0x2424df0();
   input += synapse0x21fed40();
   input += synapse0x21fed80();
   input += synapse0x231a290();
   input += synapse0x231a2d0();
   input += synapse0x2435ae0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x243c150() {
   double input = input0x243c150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x21ff4a0() {
   double input = 2.73528;
   input += synapse0x21ff630();
   input += synapse0x243bd10();
   input += synapse0x243bd50();
   input += synapse0x243bd90();
   input += synapse0x243c9a0();
   input += synapse0x243c9e0();
   input += synapse0x243ca20();
   input += synapse0x243ca60();
   input += synapse0x243caa0();
   input += synapse0x243cae0();
   input += synapse0x243cb20();
   input += synapse0x243cb60();
   input += synapse0x243cba0();
   input += synapse0x243cbe0();
   input += synapse0x243cc20();
   input += synapse0x243cc60();
   input += synapse0x2435b20();
   input += synapse0x2435b60();
   input += synapse0x2435ba0();
   input += synapse0x243cdb0();
   input += synapse0x243cdf0();
   input += synapse0x243ce30();
   input += synapse0x243ce70();
   input += synapse0x243ceb0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x21ff4a0() {
   double input = input0x21ff4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x243cef0() {
   double input = -0.681253;
   input += synapse0x243d230();
   input += synapse0x243d270();
   input += synapse0x243d2b0();
   input += synapse0x243d2f0();
   input += synapse0x243d330();
   input += synapse0x243d370();
   input += synapse0x243d3b0();
   input += synapse0x243d3f0();
   input += synapse0x243d430();
   input += synapse0x243d470();
   input += synapse0x243d4b0();
   input += synapse0x243d4f0();
   input += synapse0x243d530();
   input += synapse0x243d570();
   input += synapse0x243d5b0();
   input += synapse0x243d5f0();
   input += synapse0x243d080();
   input += synapse0x243d0c0();
   input += synapse0x243d740();
   input += synapse0x243d780();
   input += synapse0x243d7c0();
   input += synapse0x243d800();
   input += synapse0x243d840();
   input += synapse0x243d880();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x243cef0() {
   double input = input0x243cef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x243d8c0() {
   double input = 1.24205;
   input += synapse0x243dc00();
   input += synapse0x243dc40();
   input += synapse0x243dc80();
   input += synapse0x243dcc0();
   input += synapse0x243dd00();
   input += synapse0x243dd40();
   input += synapse0x243dd80();
   input += synapse0x243ddc0();
   input += synapse0x243de00();
   input += synapse0x21ff090();
   input += synapse0x21ff0d0();
   input += synapse0x21ff110();
   input += synapse0x21ff150();
   input += synapse0x21ff190();
   input += synapse0x21ff1d0();
   input += synapse0x21ff210();
   input += synapse0x243da50();
   input += synapse0x243da90();
   input += synapse0x21ff360();
   input += synapse0x21ff3a0();
   input += synapse0x21ff3e0();
   input += synapse0x21ff420();
   input += synapse0x21ff460();
   input += synapse0x243e650();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x243d8c0() {
   double input = input0x243d8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x243e690() {
   double input = -0.472548;
   input += synapse0x243e9d0();
   input += synapse0x243ea10();
   input += synapse0x243ea50();
   input += synapse0x243ea90();
   input += synapse0x243ead0();
   input += synapse0x243eb10();
   input += synapse0x243eb50();
   input += synapse0x243eb90();
   input += synapse0x243ebd0();
   input += synapse0x243ec10();
   input += synapse0x243ec50();
   input += synapse0x243ec90();
   input += synapse0x243ecd0();
   input += synapse0x243ed10();
   input += synapse0x243ed50();
   input += synapse0x243ed90();
   input += synapse0x243e820();
   input += synapse0x243e860();
   input += synapse0x243eee0();
   input += synapse0x243ef20();
   input += synapse0x243ef60();
   input += synapse0x243efa0();
   input += synapse0x243efe0();
   input += synapse0x243f020();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x243e690() {
   double input = input0x243e690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x243f060() {
   double input = 0.0945151;
   input += synapse0x243f3a0();
   input += synapse0x243f3e0();
   input += synapse0x243f420();
   input += synapse0x243f460();
   input += synapse0x243f4a0();
   input += synapse0x243f4e0();
   input += synapse0x243f520();
   input += synapse0x243f560();
   input += synapse0x243f5a0();
   input += synapse0x243f5e0();
   input += synapse0x243f620();
   input += synapse0x243f660();
   input += synapse0x243f6a0();
   input += synapse0x243f6e0();
   input += synapse0x243f720();
   input += synapse0x243f760();
   input += synapse0x243f1f0();
   input += synapse0x243f230();
   input += synapse0x243f8b0();
   input += synapse0x243f8f0();
   input += synapse0x243f930();
   input += synapse0x243f970();
   input += synapse0x243f9b0();
   input += synapse0x243f9f0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x243f060() {
   double input = input0x243f060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x243fa30() {
   double input = 11.5669;
   input += synapse0x2439540();
   input += synapse0x2439580();
   input += synapse0x24395c0();
   input += synapse0x2439600();
   input += synapse0x243ff80();
   input += synapse0x243ffc0();
   input += synapse0x2440000();
   input += synapse0x2440040();
   input += synapse0x2440080();
   input += synapse0x24400c0();
   input += synapse0x2440100();
   input += synapse0x2440140();
   input += synapse0x2440180();
   input += synapse0x24401c0();
   input += synapse0x2440200();
   input += synapse0x2440240();
   input += synapse0x243fbc0();
   input += synapse0x243fc00();
   input += synapse0x2440390();
   input += synapse0x24403d0();
   input += synapse0x2440410();
   input += synapse0x2440450();
   input += synapse0x2440490();
   input += synapse0x24404d0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x243fa30() {
   double input = input0x243fa30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2440510() {
   double input = 2.60496;
   input += synapse0x2440850();
   input += synapse0x2440890();
   input += synapse0x24408d0();
   input += synapse0x2440910();
   input += synapse0x2440950();
   input += synapse0x2440990();
   input += synapse0x24409d0();
   input += synapse0x2440a10();
   input += synapse0x2440a50();
   input += synapse0x2440a90();
   input += synapse0x2440ad0();
   input += synapse0x2440b10();
   input += synapse0x2440b50();
   input += synapse0x2440b90();
   input += synapse0x2440bd0();
   input += synapse0x2440c10();
   input += synapse0x24406a0();
   input += synapse0x24406e0();
   input += synapse0x2440d60();
   input += synapse0x2440da0();
   input += synapse0x2440de0();
   input += synapse0x2440e20();
   input += synapse0x2440e60();
   input += synapse0x2440ea0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2440510() {
   double input = input0x2440510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2440ee0() {
   double input = 4.51768;
   input += synapse0x2441220();
   input += synapse0x2441260();
   input += synapse0x24412a0();
   input += synapse0x24412e0();
   input += synapse0x2441320();
   input += synapse0x2441360();
   input += synapse0x24413a0();
   input += synapse0x24413e0();
   input += synapse0x2441420();
   input += synapse0x2441460();
   input += synapse0x24414a0();
   input += synapse0x24414e0();
   input += synapse0x2441520();
   input += synapse0x2441560();
   input += synapse0x24415a0();
   input += synapse0x24415e0();
   input += synapse0x2441070();
   input += synapse0x24410b0();
   input += synapse0x243de40();
   input += synapse0x243de80();
   input += synapse0x243dec0();
   input += synapse0x243df00();
   input += synapse0x243df40();
   input += synapse0x243df80();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2440ee0() {
   double input = input0x2440ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x243dfc0() {
   double input = -0.658015;
   input += synapse0x243e300();
   input += synapse0x243e340();
   input += synapse0x243e380();
   input += synapse0x243e3c0();
   input += synapse0x243e400();
   input += synapse0x243e440();
   input += synapse0x243e480();
   input += synapse0x243e4c0();
   input += synapse0x243e500();
   input += synapse0x243e540();
   input += synapse0x243e580();
   input += synapse0x243e5c0();
   input += synapse0x243e600();
   input += synapse0x2442740();
   input += synapse0x2442780();
   input += synapse0x24427c0();
   input += synapse0x243e150();
   input += synapse0x243e190();
   input += synapse0x2442910();
   input += synapse0x2442950();
   input += synapse0x2442990();
   input += synapse0x24429d0();
   input += synapse0x2442a10();
   input += synapse0x2442a50();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x243dfc0() {
   double input = input0x243dfc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2442a90() {
   double input = 1.8465;
   input += synapse0x2442dd0();
   input += synapse0x2442e10();
   input += synapse0x2442e50();
   input += synapse0x2442e90();
   input += synapse0x2442ed0();
   input += synapse0x2442f10();
   input += synapse0x2442f50();
   input += synapse0x2442f90();
   input += synapse0x2442fd0();
   input += synapse0x2443010();
   input += synapse0x2443050();
   input += synapse0x2443090();
   input += synapse0x24430d0();
   input += synapse0x2443110();
   input += synapse0x2443150();
   input += synapse0x2443190();
   input += synapse0x2442c20();
   input += synapse0x2442c60();
   input += synapse0x24432e0();
   input += synapse0x2443320();
   input += synapse0x2443360();
   input += synapse0x24433a0();
   input += synapse0x24433e0();
   input += synapse0x2443420();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2442a90() {
   double input = input0x2442a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2443460() {
   double input = 0.626537;
   input += synapse0x24437a0();
   input += synapse0x24437e0();
   input += synapse0x2443820();
   input += synapse0x2443860();
   input += synapse0x24438a0();
   input += synapse0x24438e0();
   input += synapse0x2443920();
   input += synapse0x2443960();
   input += synapse0x24439a0();
   input += synapse0x24439e0();
   input += synapse0x2443a20();
   input += synapse0x2443a60();
   input += synapse0x2443aa0();
   input += synapse0x2443ae0();
   input += synapse0x2443b20();
   input += synapse0x2443b60();
   input += synapse0x24435f0();
   input += synapse0x2443630();
   input += synapse0x2443cb0();
   input += synapse0x2443cf0();
   input += synapse0x2443d30();
   input += synapse0x2443d70();
   input += synapse0x2443db0();
   input += synapse0x2443df0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2443460() {
   double input = input0x2443460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2443e30() {
   double input = 0.594128;
   input += synapse0x2444170();
   input += synapse0x24441b0();
   input += synapse0x24441f0();
   input += synapse0x2444230();
   input += synapse0x2444270();
   input += synapse0x24442b0();
   input += synapse0x24442f0();
   input += synapse0x2444330();
   input += synapse0x2444370();
   input += synapse0x24443b0();
   input += synapse0x24443f0();
   input += synapse0x2444430();
   input += synapse0x2444470();
   input += synapse0x24444b0();
   input += synapse0x24444f0();
   input += synapse0x2444530();
   input += synapse0x2443fc0();
   input += synapse0x2444000();
   input += synapse0x2444680();
   input += synapse0x24446c0();
   input += synapse0x2444700();
   input += synapse0x2444740();
   input += synapse0x2444780();
   input += synapse0x24447c0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2443e30() {
   double input = input0x2443e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2444800() {
   double input = -0.619936;
   input += synapse0x2444b40();
   input += synapse0x2435f10();
   input += synapse0x2435f50();
   input += synapse0x2436250();
   input += synapse0x2436290();
   input += synapse0x2436590();
   input += synapse0x24365d0();
   input += synapse0x24368d0();
   input += synapse0x2436910();
   input += synapse0x2436c10();
   input += synapse0x2436c50();
   input += synapse0x2436f50();
   input += synapse0x2436f90();
   input += synapse0x2437290();
   input += synapse0x24372d0();
   input += synapse0x24375d0();
   input += synapse0x2437610();
   input += synapse0x2437910();
   input += synapse0x2437950();
   input += synapse0x2437c50();
   input += synapse0x2437c90();
   input += synapse0x2437f90();
   input += synapse0x2437fd0();
   input += synapse0x24382d0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2444800() {
   double input = input0x2444800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2446610() {
   double input = -1.5839;
   input += synapse0x2438310();
   input += synapse0x2438fd0();
   input += synapse0x2439010();
   input += synapse0x2444990();
   input += synapse0x24449d0();
   input += synapse0x2439310();
   input += synapse0x2439350();
   input += synapse0x21f0d00();
   input += synapse0x21f0d40();
   input += synapse0x2439a90();
   input += synapse0x2439ad0();
   input += synapse0x2439dd0();
   input += synapse0x2439e10();
   input += synapse0x243a110();
   input += synapse0x243a150();
   input += synapse0x243a450();
   input += synapse0x243a490();
   input += synapse0x243a790();
   input += synapse0x243a7d0();
   input += synapse0x243aad0();
   input += synapse0x243ab10();
   input += synapse0x2438610();
   input += synapse0x2438650();
   input += synapse0x24468b0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2446610() {
   double input = input0x2446610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x24468f0() {
   double input = 0.939593;
   input += synapse0x2446c30();
   input += synapse0x2446c70();
   input += synapse0x2446cb0();
   input += synapse0x2446cf0();
   input += synapse0x2446d30();
   input += synapse0x2446d70();
   input += synapse0x2446db0();
   input += synapse0x2446df0();
   input += synapse0x2446e30();
   input += synapse0x2446e70();
   input += synapse0x2446eb0();
   input += synapse0x2446ef0();
   input += synapse0x2446f30();
   input += synapse0x2446f70();
   input += synapse0x2446fb0();
   input += synapse0x2446ff0();
   input += synapse0x2446a80();
   input += synapse0x2446ac0();
   input += synapse0x2447140();
   input += synapse0x2447180();
   input += synapse0x24471c0();
   input += synapse0x2447200();
   input += synapse0x2447240();
   input += synapse0x2447280();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x24468f0() {
   double input = input0x24468f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x24472c0() {
   double input = -14.6615;
   input += synapse0x2447600();
   input += synapse0x2447640();
   input += synapse0x2447680();
   input += synapse0x24476c0();
   input += synapse0x2447700();
   input += synapse0x2447740();
   input += synapse0x2447780();
   input += synapse0x24477c0();
   input += synapse0x2447800();
   input += synapse0x2447840();
   input += synapse0x2447880();
   input += synapse0x24478c0();
   input += synapse0x2447900();
   input += synapse0x2447940();
   input += synapse0x2447980();
   input += synapse0x24479c0();
   input += synapse0x2447450();
   input += synapse0x2447490();
   input += synapse0x2447b10();
   input += synapse0x2447b50();
   input += synapse0x2447b90();
   input += synapse0x2447bd0();
   input += synapse0x2447c10();
   input += synapse0x2447c50();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x24472c0() {
   double input = input0x24472c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2447c90() {
   double input = 4.66921;
   input += synapse0x2447fd0();
   input += synapse0x2448010();
   input += synapse0x2448050();
   input += synapse0x2448090();
   input += synapse0x24480d0();
   input += synapse0x2448110();
   input += synapse0x2448150();
   input += synapse0x2448190();
   input += synapse0x24481d0();
   input += synapse0x2448210();
   input += synapse0x2448250();
   input += synapse0x2448290();
   input += synapse0x24482d0();
   input += synapse0x2448310();
   input += synapse0x2448350();
   input += synapse0x2448390();
   input += synapse0x2447e20();
   input += synapse0x2447e60();
   input += synapse0x24484e0();
   input += synapse0x2448520();
   input += synapse0x2448560();
   input += synapse0x24485a0();
   input += synapse0x24485e0();
   input += synapse0x2448620();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2447c90() {
   double input = input0x2447c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2448660() {
   double input = 1.11945;
   input += synapse0x24489a0();
   input += synapse0x24489e0();
   input += synapse0x2448a20();
   input += synapse0x2448a60();
   input += synapse0x2448aa0();
   input += synapse0x2448ae0();
   input += synapse0x2448b20();
   input += synapse0x2448b60();
   input += synapse0x2448ba0();
   input += synapse0x2448be0();
   input += synapse0x2448c20();
   input += synapse0x2448c60();
   input += synapse0x2448ca0();
   input += synapse0x2448ce0();
   input += synapse0x2448d20();
   input += synapse0x2448d60();
   input += synapse0x24487f0();
   input += synapse0x2448830();
   input += synapse0x2448eb0();
   input += synapse0x2448ef0();
   input += synapse0x2448f30();
   input += synapse0x2448f70();
   input += synapse0x2448fb0();
   input += synapse0x2448ff0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2448660() {
   double input = input0x2448660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2449030() {
   double input = -1.28048;
   input += synapse0x2449370();
   input += synapse0x24493b0();
   input += synapse0x24493f0();
   input += synapse0x2449430();
   input += synapse0x2449470();
   input += synapse0x24494b0();
   input += synapse0x24494f0();
   input += synapse0x2449530();
   input += synapse0x2449570();
   input += synapse0x2441730();
   input += synapse0x2441770();
   input += synapse0x24417b0();
   input += synapse0x24417f0();
   input += synapse0x2441830();
   input += synapse0x2441870();
   input += synapse0x24418b0();
   input += synapse0x24491c0();
   input += synapse0x2449200();
   input += synapse0x2441a00();
   input += synapse0x2441a40();
   input += synapse0x2441a80();
   input += synapse0x2441ac0();
   input += synapse0x2441b00();
   input += synapse0x2441b40();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2449030() {
   double input = input0x2449030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2441b80() {
   double input = 1.57694;
   input += synapse0x2441ec0();
   input += synapse0x2441f00();
   input += synapse0x2441f40();
   input += synapse0x2441f80();
   input += synapse0x2441fc0();
   input += synapse0x2442000();
   input += synapse0x2442040();
   input += synapse0x2442080();
   input += synapse0x24420c0();
   input += synapse0x2442100();
   input += synapse0x2442140();
   input += synapse0x2442180();
   input += synapse0x24421c0();
   input += synapse0x2442200();
   input += synapse0x2442240();
   input += synapse0x2442280();
   input += synapse0x2441d10();
   input += synapse0x2441d50();
   input += synapse0x24423d0();
   input += synapse0x2442410();
   input += synapse0x2442450();
   input += synapse0x2442490();
   input += synapse0x24424d0();
   input += synapse0x2442510();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2441b80() {
   double input = input0x2441b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2442550() {
   double input = 1.01371;
   input += synapse0x24426e0();
   input += synapse0x244b770();
   input += synapse0x244b7b0();
   input += synapse0x244b7f0();
   input += synapse0x244b830();
   input += synapse0x244b870();
   input += synapse0x244b8b0();
   input += synapse0x244b8f0();
   input += synapse0x244b930();
   input += synapse0x244b970();
   input += synapse0x244b9b0();
   input += synapse0x244b9f0();
   input += synapse0x244ba30();
   input += synapse0x244ba70();
   input += synapse0x244bab0();
   input += synapse0x244baf0();
   input += synapse0x244b5c0();
   input += synapse0x244b600();
   input += synapse0x244bc40();
   input += synapse0x244bc80();
   input += synapse0x244bcc0();
   input += synapse0x244bd00();
   input += synapse0x244bd40();
   input += synapse0x244bd80();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2442550() {
   double input = input0x2442550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x244bdc0() {
   double input = -4.50408;
   input += synapse0x244c100();
   input += synapse0x244c140();
   input += synapse0x244c180();
   input += synapse0x244c1c0();
   input += synapse0x244c200();
   input += synapse0x244c240();
   input += synapse0x244c280();
   input += synapse0x244c2c0();
   input += synapse0x244c300();
   input += synapse0x244c340();
   input += synapse0x244c380();
   input += synapse0x244c3c0();
   input += synapse0x244c400();
   input += synapse0x244c440();
   input += synapse0x244c480();
   input += synapse0x244c4c0();
   input += synapse0x244bf50();
   input += synapse0x244bf90();
   input += synapse0x244c610();
   input += synapse0x244c650();
   input += synapse0x244c690();
   input += synapse0x244c6d0();
   input += synapse0x244c710();
   input += synapse0x244c750();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x244bdc0() {
   double input = input0x244bdc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x244c790() {
   double input = -1.34437;
   input += synapse0x244cad0();
   input += synapse0x244cb10();
   input += synapse0x244cb50();
   input += synapse0x244cb90();
   input += synapse0x244cbd0();
   input += synapse0x244cc10();
   input += synapse0x244cc50();
   input += synapse0x244cc90();
   input += synapse0x244ccd0();
   input += synapse0x244cd10();
   input += synapse0x244cd50();
   input += synapse0x244cd90();
   input += synapse0x244cdd0();
   input += synapse0x244ce10();
   input += synapse0x244ce50();
   input += synapse0x244ce90();
   input += synapse0x244c920();
   input += synapse0x244c960();
   input += synapse0x244cfe0();
   input += synapse0x244d020();
   input += synapse0x244d060();
   input += synapse0x244d0a0();
   input += synapse0x244d0e0();
   input += synapse0x244d120();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x244c790() {
   double input = input0x244c790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x244d160() {
   double input = 0.547092;
   input += synapse0x244d4a0();
   input += synapse0x244d4e0();
   input += synapse0x244d520();
   input += synapse0x244d560();
   input += synapse0x244d5a0();
   input += synapse0x244d5e0();
   input += synapse0x244d620();
   input += synapse0x244d660();
   input += synapse0x244d6a0();
   input += synapse0x244d6e0();
   input += synapse0x244d720();
   input += synapse0x244d760();
   input += synapse0x244d7a0();
   input += synapse0x244d7e0();
   input += synapse0x244d820();
   input += synapse0x244d860();
   input += synapse0x244d2f0();
   input += synapse0x244d330();
   input += synapse0x244d9b0();
   input += synapse0x244d9f0();
   input += synapse0x244da30();
   input += synapse0x244da70();
   input += synapse0x244dab0();
   input += synapse0x244daf0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x244d160() {
   double input = input0x244d160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x244db30() {
   double input = 1.39317;
   input += synapse0x244de70();
   input += synapse0x244deb0();
   input += synapse0x244def0();
   input += synapse0x244df30();
   input += synapse0x244df70();
   input += synapse0x244dfb0();
   input += synapse0x244dff0();
   input += synapse0x244e030();
   input += synapse0x244e070();
   input += synapse0x244e0b0();
   input += synapse0x244e0f0();
   input += synapse0x244e130();
   input += synapse0x244e170();
   input += synapse0x244e1b0();
   input += synapse0x244e1f0();
   input += synapse0x244e230();
   input += synapse0x244dcc0();
   input += synapse0x244dd00();
   input += synapse0x244e380();
   input += synapse0x244e3c0();
   input += synapse0x244e400();
   input += synapse0x244e440();
   input += synapse0x244e480();
   input += synapse0x244e4c0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x244db30() {
   double input = input0x244db30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x244e500() {
   double input = 0.447212;
   input += synapse0x244e840();
   input += synapse0x244e880();
   input += synapse0x244e8c0();
   input += synapse0x244e900();
   input += synapse0x244e940();
   input += synapse0x244e980();
   input += synapse0x244e9c0();
   input += synapse0x244ea00();
   input += synapse0x244ea40();
   input += synapse0x244ea80();
   input += synapse0x244eac0();
   input += synapse0x244eb00();
   input += synapse0x244eb40();
   input += synapse0x244eb80();
   input += synapse0x244ebc0();
   input += synapse0x244ec00();
   input += synapse0x244e690();
   input += synapse0x244e6d0();
   input += synapse0x244ed50();
   input += synapse0x244ed90();
   input += synapse0x244edd0();
   input += synapse0x244ee10();
   input += synapse0x244ee50();
   input += synapse0x244ee90();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x244e500() {
   double input = input0x244e500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x244eed0() {
   double input = 0.0209811;
   input += synapse0x244f210();
   input += synapse0x244f250();
   input += synapse0x244f290();
   input += synapse0x244f2d0();
   input += synapse0x244f310();
   input += synapse0x244f350();
   input += synapse0x244f390();
   input += synapse0x244f3d0();
   input += synapse0x244f410();
   input += synapse0x244f450();
   input += synapse0x244f490();
   input += synapse0x244f4d0();
   input += synapse0x244f510();
   input += synapse0x244f550();
   input += synapse0x244f590();
   input += synapse0x244f5d0();
   input += synapse0x244f060();
   input += synapse0x244f0a0();
   input += synapse0x244f720();
   input += synapse0x244f760();
   input += synapse0x244f7a0();
   input += synapse0x244f7e0();
   input += synapse0x244f820();
   input += synapse0x244f860();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x244eed0() {
   double input = input0x244eed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x244f8a0() {
   double input = -4.23671;
   input += synapse0x244fbe0();
   input += synapse0x244fc20();
   input += synapse0x244fc60();
   input += synapse0x244fca0();
   input += synapse0x244fce0();
   input += synapse0x244fd20();
   input += synapse0x244fd60();
   input += synapse0x244fda0();
   input += synapse0x244fde0();
   input += synapse0x244fe20();
   input += synapse0x244fe60();
   input += synapse0x244fea0();
   input += synapse0x244fee0();
   input += synapse0x244ff20();
   input += synapse0x244ff60();
   input += synapse0x244ffa0();
   input += synapse0x244fa30();
   input += synapse0x244fa70();
   input += synapse0x24500f0();
   input += synapse0x2450130();
   input += synapse0x2450170();
   input += synapse0x24501b0();
   input += synapse0x24501f0();
   input += synapse0x2450230();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x244f8a0() {
   double input = input0x244f8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2450270() {
   double input = -0.432415;
   input += synapse0x24505b0();
   input += synapse0x2444b80();
   input += synapse0x2444bc0();
   input += synapse0x2444c00();
   input += synapse0x2444e50();
   input += synapse0x2444e90();
   input += synapse0x2444ed0();
   input += synapse0x2445120();
   input += synapse0x2445160();
   input += synapse0x24453b0();
   input += synapse0x24453f0();
   input += synapse0x2445430();
   input += synapse0x2445680();
   input += synapse0x24456c0();
   input += synapse0x2445910();
   input += synapse0x2445950();
   input += synapse0x2450400();
   input += synapse0x2450440();
   input += synapse0x2445aa0();
   input += synapse0x2445fb0();
   input += synapse0x2445ff0();
   input += synapse0x2446030();
   input += synapse0x2446280();
   input += synapse0x24462c0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2450270() {
   double input = input0x2450270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2446300() {
   double input = -0.442603;
   input += synapse0x2445b70();
   input += synapse0x2445bb0();
   input += synapse0x2445bf0();
   input += synapse0x2445c30();
   input += synapse0x24465b0();
   input += synapse0x2452900();
   input += synapse0x2452940();
   input += synapse0x2452980();
   input += synapse0x24529c0();
   input += synapse0x2452a00();
   input += synapse0x2452a40();
   input += synapse0x2452a80();
   input += synapse0x2452ac0();
   input += synapse0x2452b00();
   input += synapse0x2452b40();
   input += synapse0x2452b80();
   input += synapse0x2446490();
   input += synapse0x24464d0();
   input += synapse0x2452cd0();
   input += synapse0x2452d10();
   input += synapse0x2452d50();
   input += synapse0x2452d90();
   input += synapse0x2452dd0();
   input += synapse0x2452e10();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2446300() {
   double input = input0x2446300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2452e50() {
   double input = 1.10197;
   input += synapse0x2453190();
   input += synapse0x24531d0();
   input += synapse0x2453210();
   input += synapse0x2453250();
   input += synapse0x2453290();
   input += synapse0x24532d0();
   input += synapse0x2453310();
   input += synapse0x2453350();
   input += synapse0x2453390();
   input += synapse0x24533d0();
   input += synapse0x2453410();
   input += synapse0x2453450();
   input += synapse0x2453490();
   input += synapse0x24534d0();
   input += synapse0x2453510();
   input += synapse0x2453550();
   input += synapse0x2452fe0();
   input += synapse0x2453020();
   input += synapse0x24536a0();
   input += synapse0x24536e0();
   input += synapse0x2453720();
   input += synapse0x2453760();
   input += synapse0x24537a0();
   input += synapse0x24537e0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2452e50() {
   double input = input0x2452e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2453820() {
   double input = 9.89576;
   input += synapse0x2453b60();
   input += synapse0x2453ba0();
   input += synapse0x2453be0();
   input += synapse0x2453c20();
   input += synapse0x2453c60();
   input += synapse0x2453ca0();
   input += synapse0x2453ce0();
   input += synapse0x2453d20();
   input += synapse0x2453d60();
   input += synapse0x2453da0();
   input += synapse0x2453de0();
   input += synapse0x2453e20();
   input += synapse0x2453e60();
   input += synapse0x2453ea0();
   input += synapse0x2453ee0();
   input += synapse0x2453f20();
   input += synapse0x24539b0();
   input += synapse0x24539f0();
   input += synapse0x2454070();
   input += synapse0x24540b0();
   input += synapse0x24540f0();
   input += synapse0x2454130();
   input += synapse0x2454170();
   input += synapse0x24541b0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2453820() {
   double input = input0x2453820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x24541f0() {
   double input = 7.66775;
   input += synapse0x2454530();
   input += synapse0x2454570();
   input += synapse0x24545b0();
   input += synapse0x24545f0();
   input += synapse0x2454630();
   input += synapse0x2454670();
   input += synapse0x24546b0();
   input += synapse0x24546f0();
   input += synapse0x2454730();
   input += synapse0x2454770();
   input += synapse0x24547b0();
   input += synapse0x24547f0();
   input += synapse0x2454830();
   input += synapse0x2454870();
   input += synapse0x24548b0();
   input += synapse0x24548f0();
   input += synapse0x2454380();
   input += synapse0x24543c0();
   input += synapse0x2454a40();
   input += synapse0x2454a80();
   input += synapse0x2454ac0();
   input += synapse0x2454b00();
   input += synapse0x2454b40();
   input += synapse0x2454b80();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x24541f0() {
   double input = input0x24541f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2454bc0() {
   double input = -1.27788;
   input += synapse0x2454f00();
   input += synapse0x2454f40();
   input += synapse0x2454f80();
   input += synapse0x2454fc0();
   input += synapse0x2455000();
   input += synapse0x2455040();
   input += synapse0x2455080();
   input += synapse0x24550c0();
   input += synapse0x2455100();
   input += synapse0x2455140();
   input += synapse0x2455180();
   input += synapse0x24551c0();
   input += synapse0x2455200();
   input += synapse0x2455240();
   input += synapse0x2455280();
   input += synapse0x24552c0();
   input += synapse0x2454d50();
   input += synapse0x2454d90();
   input += synapse0x2455410();
   input += synapse0x2455450();
   input += synapse0x2455490();
   input += synapse0x24554d0();
   input += synapse0x2455510();
   input += synapse0x2455550();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2454bc0() {
   double input = input0x2454bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2455590() {
   double input = -4.19281;
   input += synapse0x24558d0();
   input += synapse0x2455910();
   input += synapse0x2455950();
   input += synapse0x2455990();
   input += synapse0x24559d0();
   input += synapse0x2455a10();
   input += synapse0x2455a50();
   input += synapse0x2455a90();
   input += synapse0x2455ad0();
   input += synapse0x2455b10();
   input += synapse0x2455b50();
   input += synapse0x2455b90();
   input += synapse0x2455bd0();
   input += synapse0x2455c10();
   input += synapse0x2455c50();
   input += synapse0x2455c90();
   input += synapse0x2455720();
   input += synapse0x2455760();
   input += synapse0x2455de0();
   input += synapse0x2455e20();
   input += synapse0x2455e60();
   input += synapse0x2455ea0();
   input += synapse0x2455ee0();
   input += synapse0x2455f20();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2455590() {
   double input = input0x2455590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2455f60() {
   double input = -1.28642;
   input += synapse0x24562a0();
   input += synapse0x24562e0();
   input += synapse0x2456320();
   input += synapse0x2456360();
   input += synapse0x24563a0();
   input += synapse0x24563e0();
   input += synapse0x2456420();
   input += synapse0x2456460();
   input += synapse0x24564a0();
   input += synapse0x24564e0();
   input += synapse0x2456520();
   input += synapse0x2456560();
   input += synapse0x24565a0();
   input += synapse0x24565e0();
   input += synapse0x2456620();
   input += synapse0x2456660();
   input += synapse0x24560f0();
   input += synapse0x2456130();
   input += synapse0x24567b0();
   input += synapse0x24567f0();
   input += synapse0x2456830();
   input += synapse0x2456870();
   input += synapse0x24568b0();
   input += synapse0x24568f0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2455f60() {
   double input = input0x2455f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2456930() {
   double input = 1.24354;
   input += synapse0x2456c70();
   input += synapse0x2456cb0();
   input += synapse0x2456cf0();
   input += synapse0x2456d30();
   input += synapse0x2456d70();
   input += synapse0x2456db0();
   input += synapse0x2456df0();
   input += synapse0x2456e30();
   input += synapse0x2456e70();
   input += synapse0x2456eb0();
   input += synapse0x2456ef0();
   input += synapse0x2456f30();
   input += synapse0x2456f70();
   input += synapse0x2456fb0();
   input += synapse0x2456ff0();
   input += synapse0x2457030();
   input += synapse0x2456ac0();
   input += synapse0x2456b00();
   input += synapse0x2457180();
   input += synapse0x24571c0();
   input += synapse0x2457200();
   input += synapse0x2457240();
   input += synapse0x2457280();
   input += synapse0x24572c0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2456930() {
   double input = input0x2456930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2457300() {
   double input = 1.32153;
   input += synapse0x243fd70();
   input += synapse0x243fdb0();
   input += synapse0x243fdf0();
   input += synapse0x243fe30();
   input += synapse0x243fe70();
   input += synapse0x243feb0();
   input += synapse0x243fef0();
   input += synapse0x243ff30();
   input += synapse0x2457a50();
   input += synapse0x2457a90();
   input += synapse0x2457ad0();
   input += synapse0x2457b10();
   input += synapse0x2457b50();
   input += synapse0x2457b90();
   input += synapse0x2457bd0();
   input += synapse0x2457c10();
   input += synapse0x2457490();
   input += synapse0x24574d0();
   input += synapse0x2457d60();
   input += synapse0x2457da0();
   input += synapse0x2457de0();
   input += synapse0x2457e20();
   input += synapse0x2457e60();
   input += synapse0x2457ea0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2457300() {
   double input = input0x2457300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2457ee0() {
   double input = -1.7022;
   input += synapse0x2458220();
   input += synapse0x2458260();
   input += synapse0x24582a0();
   input += synapse0x24582e0();
   input += synapse0x2458320();
   input += synapse0x2458360();
   input += synapse0x24583a0();
   input += synapse0x24583e0();
   input += synapse0x2458420();
   input += synapse0x2458460();
   input += synapse0x24584a0();
   input += synapse0x24584e0();
   input += synapse0x2458520();
   input += synapse0x2458560();
   input += synapse0x24585a0();
   input += synapse0x24585e0();
   input += synapse0x2458070();
   input += synapse0x24580b0();
   input += synapse0x2458730();
   input += synapse0x2458770();
   input += synapse0x24587b0();
   input += synapse0x24587f0();
   input += synapse0x2458830();
   input += synapse0x2458870();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2457ee0() {
   double input = input0x2457ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x24588b0() {
   double input = -0.301674;
   input += synapse0x2458bf0();
   input += synapse0x2458c30();
   input += synapse0x2458c70();
   input += synapse0x2458cb0();
   input += synapse0x2458cf0();
   input += synapse0x2458d30();
   input += synapse0x2458d70();
   input += synapse0x2458db0();
   input += synapse0x2458df0();
   input += synapse0x2458e30();
   input += synapse0x2458e70();
   input += synapse0x2458eb0();
   input += synapse0x2458ef0();
   input += synapse0x2458f30();
   input += synapse0x2458f70();
   input += synapse0x2458fb0();
   input += synapse0x2458a40();
   input += synapse0x2458a80();
   input += synapse0x24495b0();
   input += synapse0x24495f0();
   input += synapse0x2449630();
   input += synapse0x2449670();
   input += synapse0x24496b0();
   input += synapse0x24496f0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x24588b0() {
   double input = input0x24588b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2449730() {
   double input = 0.0432123;
   input += synapse0x2449a70();
   input += synapse0x2449ab0();
   input += synapse0x2449af0();
   input += synapse0x2449b30();
   input += synapse0x2449b70();
   input += synapse0x2449bb0();
   input += synapse0x2449bf0();
   input += synapse0x2449c30();
   input += synapse0x2449c70();
   input += synapse0x2449cb0();
   input += synapse0x2449cf0();
   input += synapse0x2449d30();
   input += synapse0x2449d70();
   input += synapse0x2449db0();
   input += synapse0x2449df0();
   input += synapse0x2449e30();
   input += synapse0x24498c0();
   input += synapse0x2449900();
   input += synapse0x2449f80();
   input += synapse0x2449fc0();
   input += synapse0x244a000();
   input += synapse0x244a040();
   input += synapse0x244a080();
   input += synapse0x244a0c0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2449730() {
   double input = input0x2449730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x244a100() {
   double input = -1.50673;
   input += synapse0x244a440();
   input += synapse0x244a480();
   input += synapse0x244a4c0();
   input += synapse0x244a500();
   input += synapse0x244a540();
   input += synapse0x244a580();
   input += synapse0x244a5c0();
   input += synapse0x244a600();
   input += synapse0x244a640();
   input += synapse0x244a680();
   input += synapse0x244a6c0();
   input += synapse0x244a700();
   input += synapse0x244a740();
   input += synapse0x244a780();
   input += synapse0x244a7c0();
   input += synapse0x244a800();
   input += synapse0x244a290();
   input += synapse0x244a2d0();
   input += synapse0x244a950();
   input += synapse0x244a990();
   input += synapse0x244a9d0();
   input += synapse0x244aa10();
   input += synapse0x244aa50();
   input += synapse0x244aa90();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x244a100() {
   double input = input0x244a100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x244aad0() {
   double input = 0.0586147;
   input += synapse0x244ae10();
   input += synapse0x244ae50();
   input += synapse0x244ae90();
   input += synapse0x244aed0();
   input += synapse0x244af10();
   input += synapse0x244af50();
   input += synapse0x244af90();
   input += synapse0x244afd0();
   input += synapse0x244b010();
   input += synapse0x244b050();
   input += synapse0x244b090();
   input += synapse0x244b0d0();
   input += synapse0x244b110();
   input += synapse0x244b150();
   input += synapse0x244b190();
   input += synapse0x244b1d0();
   input += synapse0x244ac60();
   input += synapse0x244aca0();
   input += synapse0x244b320();
   input += synapse0x244b360();
   input += synapse0x244b3a0();
   input += synapse0x244b3e0();
   input += synapse0x244b420();
   input += synapse0x244b460();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x244aad0() {
   double input = input0x244aad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x245d110() {
   double input = 0.311523;
   input += synapse0x245d330();
   input += synapse0x245d370();
   input += synapse0x245d3b0();
   input += synapse0x245d3f0();
   input += synapse0x245d430();
   input += synapse0x245d470();
   input += synapse0x245d4b0();
   input += synapse0x245d4f0();
   input += synapse0x245d530();
   input += synapse0x245d570();
   input += synapse0x245d5b0();
   input += synapse0x245d5f0();
   input += synapse0x245d630();
   input += synapse0x245d670();
   input += synapse0x245d6b0();
   input += synapse0x245d6f0();
   input += synapse0x244b4a0();
   input += synapse0x244b4e0();
   input += synapse0x245d840();
   input += synapse0x245d880();
   input += synapse0x245d8c0();
   input += synapse0x245d900();
   input += synapse0x245d940();
   input += synapse0x245d980();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x245d110() {
   double input = input0x245d110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x245d9c0() {
   double input = 1.57679;
   input += synapse0x245dd00();
   input += synapse0x245dd40();
   input += synapse0x245dd80();
   input += synapse0x245ddc0();
   input += synapse0x245de00();
   input += synapse0x245de40();
   input += synapse0x245de80();
   input += synapse0x245dec0();
   input += synapse0x245df00();
   input += synapse0x245df40();
   input += synapse0x245df80();
   input += synapse0x245dfc0();
   input += synapse0x245e000();
   input += synapse0x245e040();
   input += synapse0x245e080();
   input += synapse0x245e0c0();
   input += synapse0x245db50();
   input += synapse0x245db90();
   input += synapse0x245e210();
   input += synapse0x245e250();
   input += synapse0x245e290();
   input += synapse0x245e2d0();
   input += synapse0x245e310();
   input += synapse0x245e350();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x245d9c0() {
   double input = input0x245d9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x245e390() {
   double input = 0.0852193;
   input += synapse0x245e6d0();
   input += synapse0x245e710();
   input += synapse0x245e750();
   input += synapse0x245e790();
   input += synapse0x245e7d0();
   input += synapse0x245e810();
   input += synapse0x245e850();
   input += synapse0x245e890();
   input += synapse0x245e8d0();
   input += synapse0x245e910();
   input += synapse0x245e950();
   input += synapse0x245e990();
   input += synapse0x245e9d0();
   input += synapse0x245ea10();
   input += synapse0x245ea50();
   input += synapse0x245ea90();
   input += synapse0x245e520();
   input += synapse0x245e560();
   input += synapse0x245ebe0();
   input += synapse0x245ec20();
   input += synapse0x245ec60();
   input += synapse0x245eca0();
   input += synapse0x245ece0();
   input += synapse0x245ed20();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x245e390() {
   double input = input0x245e390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x245ed60() {
   double input = -3.1206;
   input += synapse0x245f0a0();
   input += synapse0x245f0e0();
   input += synapse0x245f120();
   input += synapse0x245f160();
   input += synapse0x245f1a0();
   input += synapse0x245f1e0();
   input += synapse0x245f220();
   input += synapse0x245f260();
   input += synapse0x245f2a0();
   input += synapse0x245f2e0();
   input += synapse0x245f320();
   input += synapse0x245f360();
   input += synapse0x245f3a0();
   input += synapse0x245f3e0();
   input += synapse0x245f420();
   input += synapse0x245f460();
   input += synapse0x245eef0();
   input += synapse0x245ef30();
   input += synapse0x245f5b0();
   input += synapse0x245f5f0();
   input += synapse0x245f630();
   input += synapse0x245f670();
   input += synapse0x245f6b0();
   input += synapse0x245f6f0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x245ed60() {
   double input = input0x245ed60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2465f60() {
   double input = -2.15716;
   input += synapse0x243bc80();
   input += synapse0x243bcc0();
   input += synapse0x243d1a0();
   input += synapse0x243d1e0();
   input += synapse0x243db70();
   input += synapse0x243dbb0();
   input += synapse0x243e940();
   input += synapse0x243e980();
   input += synapse0x243f310();
   input += synapse0x243f350();
   input += synapse0x243fce0();
   input += synapse0x243fd20();
   input += synapse0x24407c0();
   input += synapse0x2440800();
   input += synapse0x2441190();
   input += synapse0x24411d0();
   input += synapse0x243e270();
   input += synapse0x243e2b0();
   input += synapse0x2442d40();
   input += synapse0x2442d80();
   input += synapse0x2443710();
   input += synapse0x2443750();
   input += synapse0x24440e0();
   input += synapse0x2444120();
   input += synapse0x2444ab0();
   input += synapse0x2444af0();
   input += synapse0x2438c90();
   input += synapse0x2438cd0();
   input += synapse0x2446ba0();
   input += synapse0x2446be0();
   input += synapse0x2447570();
   input += synapse0x24475b0();
   input += synapse0x2447f40();
   input += synapse0x2447f80();
   input += synapse0x2448910();
   input += synapse0x2448950();
   input += synapse0x24492e0();
   input += synapse0x2449320();
   input += synapse0x2441e30();
   input += synapse0x2441e70();
   input += synapse0x244b6e0();
   input += synapse0x244b720();
   input += synapse0x244c070();
   input += synapse0x244c0b0();
   input += synapse0x244ca40();
   input += synapse0x244ca80();
   input += synapse0x244d410();
   input += synapse0x244d450();
   input += synapse0x244dde0();
   input += synapse0x244de20();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2465f60() {
   double input = input0x2465f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2466300() {
   double input = -0.0559438;
   input += synapse0x2450520();
   input += synapse0x2450560();
   input += synapse0x2445ae0();
   input += synapse0x2445b20();
   input += synapse0x2453100();
   input += synapse0x2453140();
   input += synapse0x2453ad0();
   input += synapse0x2453b10();
   input += synapse0x24544a0();
   input += synapse0x24544e0();
   input += synapse0x2454e70();
   input += synapse0x2454eb0();
   input += synapse0x2455840();
   input += synapse0x2455880();
   input += synapse0x2456210();
   input += synapse0x2456250();
   input += synapse0x2456be0();
   input += synapse0x2456c20();
   input += synapse0x24575b0();
   input += synapse0x24575f0();
   input += synapse0x2458190();
   input += synapse0x24581d0();
   input += synapse0x2458b60();
   input += synapse0x2458ba0();
   input += synapse0x24499e0();
   input += synapse0x2449a20();
   input += synapse0x244a3b0();
   input += synapse0x244a3f0();
   input += synapse0x244ad80();
   input += synapse0x244adc0();
   input += synapse0x245d2a0();
   input += synapse0x245d2e0();
   input += synapse0x245dc70();
   input += synapse0x245dcb0();
   input += synapse0x245e640();
   input += synapse0x245e680();
   input += synapse0x245f010();
   input += synapse0x245f050();
   input += synapse0x243af40();
   input += synapse0x243af80();
   input += synapse0x244e7b0();
   input += synapse0x244e7f0();
   input += synapse0x245f730();
   input += synapse0x245f770();
   input += synapse0x245f7b0();
   input += synapse0x245f7f0();
   input += synapse0x24666a0();
   input += synapse0x24666e0();
   input += synapse0x2466720();
   input += synapse0x2466760();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2466300() {
   double input = input0x2466300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x24667a0() {
   double input = -2.62432;
   input += synapse0x2466ae0();
   input += synapse0x2466b20();
   input += synapse0x2466b60();
   input += synapse0x2466ba0();
   input += synapse0x2466be0();
   input += synapse0x2466c20();
   input += synapse0x2466c60();
   input += synapse0x2466ca0();
   input += synapse0x2466ce0();
   input += synapse0x2466d20();
   input += synapse0x2466d60();
   input += synapse0x2466da0();
   input += synapse0x2466de0();
   input += synapse0x2466e20();
   input += synapse0x2466e60();
   input += synapse0x2466ea0();
   input += synapse0x2466930();
   input += synapse0x2466970();
   input += synapse0x2466ff0();
   input += synapse0x2467030();
   input += synapse0x2467070();
   input += synapse0x24670b0();
   input += synapse0x24670f0();
   input += synapse0x2467130();
   input += synapse0x2467170();
   input += synapse0x24671b0();
   input += synapse0x24671f0();
   input += synapse0x2467230();
   input += synapse0x2467270();
   input += synapse0x24672b0();
   input += synapse0x24672f0();
   input += synapse0x2467330();
   input += synapse0x2466ee0();
   input += synapse0x2466f20();
   input += synapse0x2466f60();
   input += synapse0x2466fa0();
   input += synapse0x2467580();
   input += synapse0x24675c0();
   input += synapse0x2467600();
   input += synapse0x2467640();
   input += synapse0x2467680();
   input += synapse0x24676c0();
   input += synapse0x2467700();
   input += synapse0x2467740();
   input += synapse0x2467780();
   input += synapse0x24677c0();
   input += synapse0x2467800();
   input += synapse0x2467840();
   input += synapse0x2467880();
   input += synapse0x24678c0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x24667a0() {
   double input = input0x24667a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2467900() {
   double input = -1.09386;
   input += synapse0x2467c40();
   input += synapse0x2467c80();
   input += synapse0x2467cc0();
   input += synapse0x2467d00();
   input += synapse0x2467d40();
   input += synapse0x2467d80();
   input += synapse0x2467dc0();
   input += synapse0x2467e00();
   input += synapse0x2467e40();
   input += synapse0x2467e80();
   input += synapse0x2467ec0();
   input += synapse0x2467f00();
   input += synapse0x2467f40();
   input += synapse0x2467f80();
   input += synapse0x2467fc0();
   input += synapse0x2468000();
   input += synapse0x2467a90();
   input += synapse0x2467ad0();
   input += synapse0x2468150();
   input += synapse0x2468190();
   input += synapse0x24681d0();
   input += synapse0x2468210();
   input += synapse0x2468250();
   input += synapse0x2468290();
   input += synapse0x24682d0();
   input += synapse0x2468310();
   input += synapse0x2468350();
   input += synapse0x2468390();
   input += synapse0x24683d0();
   input += synapse0x2468410();
   input += synapse0x2468450();
   input += synapse0x2468490();
   input += synapse0x2468040();
   input += synapse0x2468080();
   input += synapse0x24680c0();
   input += synapse0x2468100();
   input += synapse0x24686e0();
   input += synapse0x2468720();
   input += synapse0x2468760();
   input += synapse0x24687a0();
   input += synapse0x24687e0();
   input += synapse0x2468820();
   input += synapse0x2468860();
   input += synapse0x24688a0();
   input += synapse0x24688e0();
   input += synapse0x2468920();
   input += synapse0x2468960();
   input += synapse0x24689a0();
   input += synapse0x24689e0();
   input += synapse0x2468a20();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2467900() {
   double input = input0x2467900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2468a60() {
   double input = 2.49569;
   input += synapse0x2468da0();
   input += synapse0x2468de0();
   input += synapse0x2468e20();
   input += synapse0x2468e60();
   input += synapse0x2468ea0();
   input += synapse0x2468ee0();
   input += synapse0x2468f20();
   input += synapse0x2468f60();
   input += synapse0x2468fa0();
   input += synapse0x2468fe0();
   input += synapse0x2469020();
   input += synapse0x2469060();
   input += synapse0x24690a0();
   input += synapse0x24690e0();
   input += synapse0x2469120();
   input += synapse0x2469160();
   input += synapse0x2468bf0();
   input += synapse0x2468c30();
   input += synapse0x24692b0();
   input += synapse0x24692f0();
   input += synapse0x2469330();
   input += synapse0x2469370();
   input += synapse0x24693b0();
   input += synapse0x24693f0();
   input += synapse0x2469430();
   input += synapse0x2469470();
   input += synapse0x24694b0();
   input += synapse0x24694f0();
   input += synapse0x2469530();
   input += synapse0x2469570();
   input += synapse0x24695b0();
   input += synapse0x24695f0();
   input += synapse0x24691a0();
   input += synapse0x24691e0();
   input += synapse0x2469220();
   input += synapse0x2469260();
   input += synapse0x2469840();
   input += synapse0x2469880();
   input += synapse0x24698c0();
   input += synapse0x2469900();
   input += synapse0x2469940();
   input += synapse0x2469980();
   input += synapse0x24699c0();
   input += synapse0x2469a00();
   input += synapse0x2469a40();
   input += synapse0x2469a80();
   input += synapse0x2469ac0();
   input += synapse0x2469b00();
   input += synapse0x2469b40();
   input += synapse0x2469b80();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2468a60() {
   double input = input0x2468a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uR::input0x2469bc0() {
   double input = 14.5057;
   input += synapse0x2469de0();
   input += synapse0x2469e20();
   input += synapse0x2469e60();
   input += synapse0x2469ea0();
   input += synapse0x2469ee0();
   return input;
}

double NNfunction_ns_chi01_uR::neuron0x2469bc0() {
   double input = input0x2469bc0();
   return (input * 1)+0;
}

double NNfunction_ns_chi01_uR::synapse0x2435d00() {
   return (neuron0x2435d80()*0.0499128);
}

double NNfunction_ns_chi01_uR::synapse0x2435d40() {
   return (neuron0x2436030()*4.1144);
}

double NNfunction_ns_chi01_uR::synapse0x243afd0() {
   return (neuron0x2436370()*-0.03785);
}

double NNfunction_ns_chi01_uR::synapse0x243b010() {
   return (neuron0x24366b0()*0.0341028);
}

double NNfunction_ns_chi01_uR::synapse0x243b050() {
   return (neuron0x24369f0()*0.01018);
}

double NNfunction_ns_chi01_uR::synapse0x243b090() {
   return (neuron0x2436d30()*-0.0288578);
}

double NNfunction_ns_chi01_uR::synapse0x243b0d0() {
   return (neuron0x2437070()*0.00849624);
}

double NNfunction_ns_chi01_uR::synapse0x243b110() {
   return (neuron0x24373b0()*0.0189549);
}

double NNfunction_ns_chi01_uR::synapse0x243b150() {
   return (neuron0x24376f0()*-0.0109489);
}

double NNfunction_ns_chi01_uR::synapse0x243b190() {
   return (neuron0x2437a30()*-0.00812636);
}

double NNfunction_ns_chi01_uR::synapse0x243b1d0() {
   return (neuron0x2437d70()*-0.0214547);
}

double NNfunction_ns_chi01_uR::synapse0x243b210() {
   return (neuron0x24380b0()*-0.00496865);
}

double NNfunction_ns_chi01_uR::synapse0x243b250() {
   return (neuron0x24383f0()*0.0211145);
}

double NNfunction_ns_chi01_uR::synapse0x243b290() {
   return (neuron0x2438730()*0.0205284);
}

double NNfunction_ns_chi01_uR::synapse0x243b2d0() {
   return (neuron0x2438a70()*0.0926794);
}

double NNfunction_ns_chi01_uR::synapse0x243b310() {
   return (neuron0x2438db0()*-0.00194949);
}

double NNfunction_ns_chi01_uR::synapse0x2435c70() {
   return (neuron0x24390f0()*-0.00115652);
}

double NNfunction_ns_chi01_uR::synapse0x2435cb0() {
   return (neuron0x2439650()*-0.0125475);
}

double NNfunction_ns_chi01_uR::synapse0x21f0e20() {
   return (neuron0x2439870()*-0.0311012);
}

double NNfunction_ns_chi01_uR::synapse0x21f0e60() {
   return (neuron0x2439bb0()*-0.0121099);
}

double NNfunction_ns_chi01_uR::synapse0x243b570() {
   return (neuron0x2439ef0()*-0.012244);
}

double NNfunction_ns_chi01_uR::synapse0x243b5b0() {
   return (neuron0x243a230()*-0.000491908);
}

double NNfunction_ns_chi01_uR::synapse0x243b5f0() {
   return (neuron0x243a570()*0.00722376);
}

double NNfunction_ns_chi01_uR::synapse0x243b630() {
   return (neuron0x243a8b0()*-0.0851605);
}

double NNfunction_ns_chi01_uR::synapse0x243b9b0() {
   return (neuron0x2435d80()*-0.00919007);
}

double NNfunction_ns_chi01_uR::synapse0x243b9f0() {
   return (neuron0x2436030()*0.0403905);
}

double NNfunction_ns_chi01_uR::synapse0x243ba30() {
   return (neuron0x2436370()*-0.423059);
}

double NNfunction_ns_chi01_uR::synapse0x243ba70() {
   return (neuron0x24366b0()*-0.107991);
}

double NNfunction_ns_chi01_uR::synapse0x243bab0() {
   return (neuron0x24369f0()*-0.127936);
}

double NNfunction_ns_chi01_uR::synapse0x243baf0() {
   return (neuron0x2436d30()*-0.144186);
}

double NNfunction_ns_chi01_uR::synapse0x243bb30() {
   return (neuron0x2437070()*-0.216579);
}

double NNfunction_ns_chi01_uR::synapse0x243bb70() {
   return (neuron0x24373b0()*-0.007446);
}

double NNfunction_ns_chi01_uR::synapse0x243bbb0() {
   return (neuron0x24376f0()*-0.857009);
}

double NNfunction_ns_chi01_uR::synapse0x243b460() {
   return (neuron0x2437a30()*-0.487555);
}

double NNfunction_ns_chi01_uR::synapse0x243b4a0() {
   return (neuron0x2437d70()*0.0295549);
}

double NNfunction_ns_chi01_uR::synapse0x243b4e0() {
   return (neuron0x24380b0()*-0.15752);
}

double NNfunction_ns_chi01_uR::synapse0x243b520() {
   return (neuron0x24383f0()*0.206507);
}

double NNfunction_ns_chi01_uR::synapse0x243be00() {
   return (neuron0x2438730()*-0.197625);
}

double NNfunction_ns_chi01_uR::synapse0x243be40() {
   return (neuron0x2438a70()*-2.34686);
}

double NNfunction_ns_chi01_uR::synapse0x243be80() {
   return (neuron0x2438db0()*0.174309);
}

double NNfunction_ns_chi01_uR::synapse0x243b800() {
   return (neuron0x24390f0()*0.0976354);
}

double NNfunction_ns_chi01_uR::synapse0x243b840() {
   return (neuron0x2439650()*-0.170282);
}

double NNfunction_ns_chi01_uR::synapse0x243bfd0() {
   return (neuron0x2439870()*0.239313);
}

double NNfunction_ns_chi01_uR::synapse0x243c010() {
   return (neuron0x2439bb0()*-0.147408);
}

double NNfunction_ns_chi01_uR::synapse0x243c050() {
   return (neuron0x2439ef0()*0.0721096);
}

double NNfunction_ns_chi01_uR::synapse0x243c090() {
   return (neuron0x243a230()*0.0950725);
}

double NNfunction_ns_chi01_uR::synapse0x243c0d0() {
   return (neuron0x243a570()*-0.0944791);
}

double NNfunction_ns_chi01_uR::synapse0x243c110() {
   return (neuron0x243a8b0()*-0.973856);
}

double NNfunction_ns_chi01_uR::synapse0x243c490() {
   return (neuron0x2435d80()*0.00328318);
}

double NNfunction_ns_chi01_uR::synapse0x243c4d0() {
   return (neuron0x2436030()*0.109342);
}

double NNfunction_ns_chi01_uR::synapse0x243c510() {
   return (neuron0x2436370()*-0.0494947);
}

double NNfunction_ns_chi01_uR::synapse0x243c550() {
   return (neuron0x24366b0()*-2.7009);
}

double NNfunction_ns_chi01_uR::synapse0x243c590() {
   return (neuron0x24369f0()*0.0599809);
}

double NNfunction_ns_chi01_uR::synapse0x243c5d0() {
   return (neuron0x2436d30()*-0.00441435);
}

double NNfunction_ns_chi01_uR::synapse0x243c610() {
   return (neuron0x2437070()*0.00330536);
}

double NNfunction_ns_chi01_uR::synapse0x243c650() {
   return (neuron0x24373b0()*0.0100051);
}

double NNfunction_ns_chi01_uR::synapse0x243c690() {
   return (neuron0x24376f0()*0.0328156);
}

double NNfunction_ns_chi01_uR::synapse0x243c6d0() {
   return (neuron0x2437a30()*0.0116746);
}

double NNfunction_ns_chi01_uR::synapse0x243c710() {
   return (neuron0x2437d70()*0.0157997);
}

double NNfunction_ns_chi01_uR::synapse0x243c750() {
   return (neuron0x24380b0()*0.0475125);
}

double NNfunction_ns_chi01_uR::synapse0x243c790() {
   return (neuron0x24383f0()*-0.0286426);
}

double NNfunction_ns_chi01_uR::synapse0x243c7d0() {
   return (neuron0x2438730()*0.0100556);
}

double NNfunction_ns_chi01_uR::synapse0x243c810() {
   return (neuron0x2438a70()*-0.432461);
}

double NNfunction_ns_chi01_uR::synapse0x243c850() {
   return (neuron0x2438db0()*0.074527);
}

double NNfunction_ns_chi01_uR::synapse0x243c2e0() {
   return (neuron0x24390f0()*0.0255443);
}

double NNfunction_ns_chi01_uR::synapse0x243c320() {
   return (neuron0x2439650()*0.00557095);
}

double NNfunction_ns_chi01_uR::synapse0x2424df0() {
   return (neuron0x2439870()*-0.00735967);
}

double NNfunction_ns_chi01_uR::synapse0x21fed40() {
   return (neuron0x2439bb0()*0.0505583);
}

double NNfunction_ns_chi01_uR::synapse0x21fed80() {
   return (neuron0x2439ef0()*0.033817);
}

double NNfunction_ns_chi01_uR::synapse0x231a290() {
   return (neuron0x243a230()*0.0470516);
}

double NNfunction_ns_chi01_uR::synapse0x231a2d0() {
   return (neuron0x243a570()*0.0133728);
}

double NNfunction_ns_chi01_uR::synapse0x2435ae0() {
   return (neuron0x243a8b0()*0.0184125);
}

double NNfunction_ns_chi01_uR::synapse0x21ff630() {
   return (neuron0x2435d80()*0.0475724);
}

double NNfunction_ns_chi01_uR::synapse0x243bd10() {
   return (neuron0x2436030()*0.0890794);
}

double NNfunction_ns_chi01_uR::synapse0x243bd50() {
   return (neuron0x2436370()*-0.0535633);
}

double NNfunction_ns_chi01_uR::synapse0x243bd90() {
   return (neuron0x24366b0()*0.0976838);
}

double NNfunction_ns_chi01_uR::synapse0x243c9a0() {
   return (neuron0x24369f0()*0.044181);
}

double NNfunction_ns_chi01_uR::synapse0x243c9e0() {
   return (neuron0x2436d30()*0.0359694);
}

double NNfunction_ns_chi01_uR::synapse0x243ca20() {
   return (neuron0x2437070()*-0.439803);
}

double NNfunction_ns_chi01_uR::synapse0x243ca60() {
   return (neuron0x24373b0()*-0.204441);
}

double NNfunction_ns_chi01_uR::synapse0x243caa0() {
   return (neuron0x24376f0()*-0.0436101);
}

double NNfunction_ns_chi01_uR::synapse0x243cae0() {
   return (neuron0x2437a30()*-0.105482);
}

double NNfunction_ns_chi01_uR::synapse0x243cb20() {
   return (neuron0x2437d70()*0.0287236);
}

double NNfunction_ns_chi01_uR::synapse0x243cb60() {
   return (neuron0x24380b0()*-0.182841);
}

double NNfunction_ns_chi01_uR::synapse0x243cba0() {
   return (neuron0x24383f0()*0.0112847);
}

double NNfunction_ns_chi01_uR::synapse0x243cbe0() {
   return (neuron0x2438730()*-0.0931577);
}

double NNfunction_ns_chi01_uR::synapse0x243cc20() {
   return (neuron0x2438a70()*4.60704);
}

double NNfunction_ns_chi01_uR::synapse0x243cc60() {
   return (neuron0x2438db0()*-0.21093);
}

double NNfunction_ns_chi01_uR::synapse0x2435b20() {
   return (neuron0x24390f0()*0.00690887);
}

double NNfunction_ns_chi01_uR::synapse0x2435b60() {
   return (neuron0x2439650()*0.0299817);
}

double NNfunction_ns_chi01_uR::synapse0x2435ba0() {
   return (neuron0x2439870()*-0.0420683);
}

double NNfunction_ns_chi01_uR::synapse0x243cdb0() {
   return (neuron0x2439bb0()*0.075396);
}

double NNfunction_ns_chi01_uR::synapse0x243cdf0() {
   return (neuron0x2439ef0()*-0.0524076);
}

double NNfunction_ns_chi01_uR::synapse0x243ce30() {
   return (neuron0x243a230()*-0.0334534);
}

double NNfunction_ns_chi01_uR::synapse0x243ce70() {
   return (neuron0x243a570()*-0.0376735);
}

double NNfunction_ns_chi01_uR::synapse0x243ceb0() {
   return (neuron0x243a8b0()*0.0210156);
}

double NNfunction_ns_chi01_uR::synapse0x243d230() {
   return (neuron0x2435d80()*-0.491001);
}

double NNfunction_ns_chi01_uR::synapse0x243d270() {
   return (neuron0x2436030()*0.436764);
}

double NNfunction_ns_chi01_uR::synapse0x243d2b0() {
   return (neuron0x2436370()*-0.52172);
}

double NNfunction_ns_chi01_uR::synapse0x243d2f0() {
   return (neuron0x24366b0()*-1.01456);
}

double NNfunction_ns_chi01_uR::synapse0x243d330() {
   return (neuron0x24369f0()*0.414892);
}

double NNfunction_ns_chi01_uR::synapse0x243d370() {
   return (neuron0x2436d30()*-0.0225036);
}

double NNfunction_ns_chi01_uR::synapse0x243d3b0() {
   return (neuron0x2437070()*0.761517);
}

double NNfunction_ns_chi01_uR::synapse0x243d3f0() {
   return (neuron0x24373b0()*-0.261304);
}

double NNfunction_ns_chi01_uR::synapse0x243d430() {
   return (neuron0x24376f0()*0.703361);
}

double NNfunction_ns_chi01_uR::synapse0x243d470() {
   return (neuron0x2437a30()*-1.52453);
}

double NNfunction_ns_chi01_uR::synapse0x243d4b0() {
   return (neuron0x2437d70()*0.401237);
}

double NNfunction_ns_chi01_uR::synapse0x243d4f0() {
   return (neuron0x24380b0()*0.496639);
}

double NNfunction_ns_chi01_uR::synapse0x243d530() {
   return (neuron0x24383f0()*-0.12949);
}

double NNfunction_ns_chi01_uR::synapse0x243d570() {
   return (neuron0x2438730()*-1.12539);
}

double NNfunction_ns_chi01_uR::synapse0x243d5b0() {
   return (neuron0x2438a70()*-1.09309);
}

double NNfunction_ns_chi01_uR::synapse0x243d5f0() {
   return (neuron0x2438db0()*-0.458326);
}

double NNfunction_ns_chi01_uR::synapse0x243d080() {
   return (neuron0x24390f0()*0.449698);
}

double NNfunction_ns_chi01_uR::synapse0x243d0c0() {
   return (neuron0x2439650()*-1.52004);
}

double NNfunction_ns_chi01_uR::synapse0x243d740() {
   return (neuron0x2439870()*0.750333);
}

double NNfunction_ns_chi01_uR::synapse0x243d780() {
   return (neuron0x2439bb0()*-0.317887);
}

double NNfunction_ns_chi01_uR::synapse0x243d7c0() {
   return (neuron0x2439ef0()*-1.09131);
}

double NNfunction_ns_chi01_uR::synapse0x243d800() {
   return (neuron0x243a230()*1.44777);
}

double NNfunction_ns_chi01_uR::synapse0x243d840() {
   return (neuron0x243a570()*0.348752);
}

double NNfunction_ns_chi01_uR::synapse0x243d880() {
   return (neuron0x243a8b0()*0.118435);
}

double NNfunction_ns_chi01_uR::synapse0x243dc00() {
   return (neuron0x2435d80()*0.0240004);
}

double NNfunction_ns_chi01_uR::synapse0x243dc40() {
   return (neuron0x2436030()*-1.35588);
}

double NNfunction_ns_chi01_uR::synapse0x243dc80() {
   return (neuron0x2436370()*0.147835);
}

double NNfunction_ns_chi01_uR::synapse0x243dcc0() {
   return (neuron0x24366b0()*0.0720702);
}

double NNfunction_ns_chi01_uR::synapse0x243dd00() {
   return (neuron0x24369f0()*0.0537328);
}

double NNfunction_ns_chi01_uR::synapse0x243dd40() {
   return (neuron0x2436d30()*-0.145213);
}

double NNfunction_ns_chi01_uR::synapse0x243dd80() {
   return (neuron0x2437070()*0.0289252);
}

double NNfunction_ns_chi01_uR::synapse0x243ddc0() {
   return (neuron0x24373b0()*-0.00633284);
}

double NNfunction_ns_chi01_uR::synapse0x243de00() {
   return (neuron0x24376f0()*-0.0304382);
}

double NNfunction_ns_chi01_uR::synapse0x21ff090() {
   return (neuron0x2437a30()*-0.0810453);
}

double NNfunction_ns_chi01_uR::synapse0x21ff0d0() {
   return (neuron0x2437d70()*-0.113974);
}

double NNfunction_ns_chi01_uR::synapse0x21ff110() {
   return (neuron0x24380b0()*-0.0333554);
}

double NNfunction_ns_chi01_uR::synapse0x21ff150() {
   return (neuron0x24383f0()*0.0549963);
}

double NNfunction_ns_chi01_uR::synapse0x21ff190() {
   return (neuron0x2438730()*-0.00642248);
}

double NNfunction_ns_chi01_uR::synapse0x21ff1d0() {
   return (neuron0x2438a70()*0.356366);
}

double NNfunction_ns_chi01_uR::synapse0x21ff210() {
   return (neuron0x2438db0()*0.0323749);
}

double NNfunction_ns_chi01_uR::synapse0x243da50() {
   return (neuron0x24390f0()*-0.0803774);
}

double NNfunction_ns_chi01_uR::synapse0x243da90() {
   return (neuron0x2439650()*-0.0173469);
}

double NNfunction_ns_chi01_uR::synapse0x21ff360() {
   return (neuron0x2439870()*0.0255392);
}

double NNfunction_ns_chi01_uR::synapse0x21ff3a0() {
   return (neuron0x2439bb0()*0.000603944);
}

double NNfunction_ns_chi01_uR::synapse0x21ff3e0() {
   return (neuron0x2439ef0()*-0.0371831);
}

double NNfunction_ns_chi01_uR::synapse0x21ff420() {
   return (neuron0x243a230()*-0.0134662);
}

double NNfunction_ns_chi01_uR::synapse0x21ff460() {
   return (neuron0x243a570()*0.117816);
}

double NNfunction_ns_chi01_uR::synapse0x243e650() {
   return (neuron0x243a8b0()*-0.42686);
}

double NNfunction_ns_chi01_uR::synapse0x243e9d0() {
   return (neuron0x2435d80()*0.179954);
}

double NNfunction_ns_chi01_uR::synapse0x243ea10() {
   return (neuron0x2436030()*0.372162);
}

double NNfunction_ns_chi01_uR::synapse0x243ea50() {
   return (neuron0x2436370()*-0.228988);
}

double NNfunction_ns_chi01_uR::synapse0x243ea90() {
   return (neuron0x24366b0()*0.737527);
}

double NNfunction_ns_chi01_uR::synapse0x243ead0() {
   return (neuron0x24369f0()*-1.06392);
}

double NNfunction_ns_chi01_uR::synapse0x243eb10() {
   return (neuron0x2436d30()*-0.268798);
}

double NNfunction_ns_chi01_uR::synapse0x243eb50() {
   return (neuron0x2437070()*-0.584331);
}

double NNfunction_ns_chi01_uR::synapse0x243eb90() {
   return (neuron0x24373b0()*0.348627);
}

double NNfunction_ns_chi01_uR::synapse0x243ebd0() {
   return (neuron0x24376f0()*-0.432398);
}

double NNfunction_ns_chi01_uR::synapse0x243ec10() {
   return (neuron0x2437a30()*-0.120109);
}

double NNfunction_ns_chi01_uR::synapse0x243ec50() {
   return (neuron0x2437d70()*-0.0576681);
}

double NNfunction_ns_chi01_uR::synapse0x243ec90() {
   return (neuron0x24380b0()*-0.595193);
}

double NNfunction_ns_chi01_uR::synapse0x243ecd0() {
   return (neuron0x24383f0()*-1.09524);
}

double NNfunction_ns_chi01_uR::synapse0x243ed10() {
   return (neuron0x2438730()*-0.603646);
}

double NNfunction_ns_chi01_uR::synapse0x243ed50() {
   return (neuron0x2438a70()*-0.932684);
}

double NNfunction_ns_chi01_uR::synapse0x243ed90() {
   return (neuron0x2438db0()*-0.089494);
}

double NNfunction_ns_chi01_uR::synapse0x243e820() {
   return (neuron0x24390f0()*-1.60963);
}

double NNfunction_ns_chi01_uR::synapse0x243e860() {
   return (neuron0x2439650()*-0.0880923);
}

double NNfunction_ns_chi01_uR::synapse0x243eee0() {
   return (neuron0x2439870()*1.52372);
}

double NNfunction_ns_chi01_uR::synapse0x243ef20() {
   return (neuron0x2439bb0()*0.114624);
}

double NNfunction_ns_chi01_uR::synapse0x243ef60() {
   return (neuron0x2439ef0()*0.133716);
}

double NNfunction_ns_chi01_uR::synapse0x243efa0() {
   return (neuron0x243a230()*-0.178928);
}

double NNfunction_ns_chi01_uR::synapse0x243efe0() {
   return (neuron0x243a570()*0.276098);
}

double NNfunction_ns_chi01_uR::synapse0x243f020() {
   return (neuron0x243a8b0()*0.482595);
}

double NNfunction_ns_chi01_uR::synapse0x243f3a0() {
   return (neuron0x2435d80()*-0.0499301);
}

double NNfunction_ns_chi01_uR::synapse0x243f3e0() {
   return (neuron0x2436030()*-3.52383);
}

double NNfunction_ns_chi01_uR::synapse0x243f420() {
   return (neuron0x2436370()*-0.274335);
}

double NNfunction_ns_chi01_uR::synapse0x243f460() {
   return (neuron0x24366b0()*0.0350399);
}

double NNfunction_ns_chi01_uR::synapse0x243f4a0() {
   return (neuron0x24369f0()*-0.0210173);
}

double NNfunction_ns_chi01_uR::synapse0x243f4e0() {
   return (neuron0x2436d30()*0.0143023);
}

double NNfunction_ns_chi01_uR::synapse0x243f520() {
   return (neuron0x2437070()*-0.0192552);
}

double NNfunction_ns_chi01_uR::synapse0x243f560() {
   return (neuron0x24373b0()*-0.00374969);
}

double NNfunction_ns_chi01_uR::synapse0x243f5a0() {
   return (neuron0x24376f0()*-0.0208994);
}

double NNfunction_ns_chi01_uR::synapse0x243f5e0() {
   return (neuron0x2437a30()*0.019444);
}

double NNfunction_ns_chi01_uR::synapse0x243f620() {
   return (neuron0x2437d70()*-0.0156965);
}

double NNfunction_ns_chi01_uR::synapse0x243f660() {
   return (neuron0x24380b0()*0.0429409);
}

double NNfunction_ns_chi01_uR::synapse0x243f6a0() {
   return (neuron0x24383f0()*0.0245895);
}

double NNfunction_ns_chi01_uR::synapse0x243f6e0() {
   return (neuron0x2438730()*-0.0376357);
}

double NNfunction_ns_chi01_uR::synapse0x243f720() {
   return (neuron0x2438a70()*-0.0854849);
}

double NNfunction_ns_chi01_uR::synapse0x243f760() {
   return (neuron0x2438db0()*-0.0270189);
}

double NNfunction_ns_chi01_uR::synapse0x243f1f0() {
   return (neuron0x24390f0()*0.0176646);
}

double NNfunction_ns_chi01_uR::synapse0x243f230() {
   return (neuron0x2439650()*-0.0236388);
}

double NNfunction_ns_chi01_uR::synapse0x243f8b0() {
   return (neuron0x2439870()*0.0023696);
}

double NNfunction_ns_chi01_uR::synapse0x243f8f0() {
   return (neuron0x2439bb0()*0.0194636);
}

double NNfunction_ns_chi01_uR::synapse0x243f930() {
   return (neuron0x2439ef0()*0.0493612);
}

double NNfunction_ns_chi01_uR::synapse0x243f970() {
   return (neuron0x243a230()*0.000769032);
}

double NNfunction_ns_chi01_uR::synapse0x243f9b0() {
   return (neuron0x243a570()*0.013304);
}

double NNfunction_ns_chi01_uR::synapse0x243f9f0() {
   return (neuron0x243a8b0()*-4.49527);
}

double NNfunction_ns_chi01_uR::synapse0x2439540() {
   return (neuron0x2435d80()*-0.172139);
}

double NNfunction_ns_chi01_uR::synapse0x2439580() {
   return (neuron0x2436030()*-0.0631233);
}

double NNfunction_ns_chi01_uR::synapse0x24395c0() {
   return (neuron0x2436370()*11.7927);
}

double NNfunction_ns_chi01_uR::synapse0x2439600() {
   return (neuron0x24366b0()*0.0200381);
}

double NNfunction_ns_chi01_uR::synapse0x243ff80() {
   return (neuron0x24369f0()*-0.0179847);
}

double NNfunction_ns_chi01_uR::synapse0x243ffc0() {
   return (neuron0x2436d30()*0.00280576);
}

double NNfunction_ns_chi01_uR::synapse0x2440000() {
   return (neuron0x2437070()*-0.00884068);
}

double NNfunction_ns_chi01_uR::synapse0x2440040() {
   return (neuron0x24373b0()*0.0318345);
}

double NNfunction_ns_chi01_uR::synapse0x2440080() {
   return (neuron0x24376f0()*0.00209742);
}

double NNfunction_ns_chi01_uR::synapse0x24400c0() {
   return (neuron0x2437a30()*0.0410529);
}

double NNfunction_ns_chi01_uR::synapse0x2440100() {
   return (neuron0x2437d70()*-0.0330616);
}

double NNfunction_ns_chi01_uR::synapse0x2440140() {
   return (neuron0x24380b0()*0.0138149);
}

double NNfunction_ns_chi01_uR::synapse0x2440180() {
   return (neuron0x24383f0()*-0.0149863);
}

double NNfunction_ns_chi01_uR::synapse0x24401c0() {
   return (neuron0x2438730()*0.0240295);
}

double NNfunction_ns_chi01_uR::synapse0x2440200() {
   return (neuron0x2438a70()*0.599059);
}

double NNfunction_ns_chi01_uR::synapse0x2440240() {
   return (neuron0x2438db0()*-0.0134111);
}

double NNfunction_ns_chi01_uR::synapse0x243fbc0() {
   return (neuron0x24390f0()*-0.000192662);
}

double NNfunction_ns_chi01_uR::synapse0x243fc00() {
   return (neuron0x2439650()*0.0198699);
}

double NNfunction_ns_chi01_uR::synapse0x2440390() {
   return (neuron0x2439870()*-0.0113723);
}

double NNfunction_ns_chi01_uR::synapse0x24403d0() {
   return (neuron0x2439bb0()*0.0321526);
}

double NNfunction_ns_chi01_uR::synapse0x2440410() {
   return (neuron0x2439ef0()*-0.0364593);
}

double NNfunction_ns_chi01_uR::synapse0x2440450() {
   return (neuron0x243a230()*-0.00981731);
}

double NNfunction_ns_chi01_uR::synapse0x2440490() {
   return (neuron0x243a570()*-0.0225081);
}

double NNfunction_ns_chi01_uR::synapse0x24404d0() {
   return (neuron0x243a8b0()*0.0174065);
}

double NNfunction_ns_chi01_uR::synapse0x2440850() {
   return (neuron0x2435d80()*0.00994185);
}

double NNfunction_ns_chi01_uR::synapse0x2440890() {
   return (neuron0x2436030()*0.235869);
}

double NNfunction_ns_chi01_uR::synapse0x24408d0() {
   return (neuron0x2436370()*-0.201628);
}

double NNfunction_ns_chi01_uR::synapse0x2440910() {
   return (neuron0x24366b0()*-1.04895);
}

double NNfunction_ns_chi01_uR::synapse0x2440950() {
   return (neuron0x24369f0()*0.796616);
}

double NNfunction_ns_chi01_uR::synapse0x2440990() {
   return (neuron0x2436d30()*-1.58618);
}

double NNfunction_ns_chi01_uR::synapse0x24409d0() {
   return (neuron0x2437070()*0.430171);
}

double NNfunction_ns_chi01_uR::synapse0x2440a10() {
   return (neuron0x24373b0()*-1.20915);
}

double NNfunction_ns_chi01_uR::synapse0x2440a50() {
   return (neuron0x24376f0()*-0.146309);
}

double NNfunction_ns_chi01_uR::synapse0x2440a90() {
   return (neuron0x2437a30()*0.203755);
}

double NNfunction_ns_chi01_uR::synapse0x2440ad0() {
   return (neuron0x2437d70()*0.337747);
}

double NNfunction_ns_chi01_uR::synapse0x2440b10() {
   return (neuron0x24380b0()*0.413308);
}

double NNfunction_ns_chi01_uR::synapse0x2440b50() {
   return (neuron0x24383f0()*0.0420059);
}

double NNfunction_ns_chi01_uR::synapse0x2440b90() {
   return (neuron0x2438730()*0.335382);
}

double NNfunction_ns_chi01_uR::synapse0x2440bd0() {
   return (neuron0x2438a70()*-1.56219);
}

double NNfunction_ns_chi01_uR::synapse0x2440c10() {
   return (neuron0x2438db0()*0.967096);
}

double NNfunction_ns_chi01_uR::synapse0x24406a0() {
   return (neuron0x24390f0()*0.368685);
}

double NNfunction_ns_chi01_uR::synapse0x24406e0() {
   return (neuron0x2439650()*-0.0892573);
}

double NNfunction_ns_chi01_uR::synapse0x2440d60() {
   return (neuron0x2439870()*-0.0990152);
}

double NNfunction_ns_chi01_uR::synapse0x2440da0() {
   return (neuron0x2439bb0()*-0.275304);
}

double NNfunction_ns_chi01_uR::synapse0x2440de0() {
   return (neuron0x2439ef0()*0.8121);
}

double NNfunction_ns_chi01_uR::synapse0x2440e20() {
   return (neuron0x243a230()*0.945497);
}

double NNfunction_ns_chi01_uR::synapse0x2440e60() {
   return (neuron0x243a570()*-0.0304996);
}

double NNfunction_ns_chi01_uR::synapse0x2440ea0() {
   return (neuron0x243a8b0()*-0.904193);
}

double NNfunction_ns_chi01_uR::synapse0x2441220() {
   return (neuron0x2435d80()*0.0609977);
}

double NNfunction_ns_chi01_uR::synapse0x2441260() {
   return (neuron0x2436030()*-4.16162);
}

double NNfunction_ns_chi01_uR::synapse0x24412a0() {
   return (neuron0x2436370()*5.48385);
}

double NNfunction_ns_chi01_uR::synapse0x24412e0() {
   return (neuron0x24366b0()*-0.0101379);
}

double NNfunction_ns_chi01_uR::synapse0x2441320() {
   return (neuron0x24369f0()*-0.0142357);
}

double NNfunction_ns_chi01_uR::synapse0x2441360() {
   return (neuron0x2436d30()*0.00824812);
}

double NNfunction_ns_chi01_uR::synapse0x24413a0() {
   return (neuron0x2437070()*-0.0117996);
}

double NNfunction_ns_chi01_uR::synapse0x24413e0() {
   return (neuron0x24373b0()*-0.0486268);
}

double NNfunction_ns_chi01_uR::synapse0x2441420() {
   return (neuron0x24376f0()*-0.0873851);
}

double NNfunction_ns_chi01_uR::synapse0x2441460() {
   return (neuron0x2437a30()*0.000919663);
}

double NNfunction_ns_chi01_uR::synapse0x24414a0() {
   return (neuron0x2437d70()*-0.00553769);
}

double NNfunction_ns_chi01_uR::synapse0x24414e0() {
   return (neuron0x24380b0()*-0.00264649);
}

double NNfunction_ns_chi01_uR::synapse0x2441520() {
   return (neuron0x24383f0()*-0.0174129);
}

double NNfunction_ns_chi01_uR::synapse0x2441560() {
   return (neuron0x2438730()*-0.0232793);
}

double NNfunction_ns_chi01_uR::synapse0x24415a0() {
   return (neuron0x2438a70()*0.245257);
}

double NNfunction_ns_chi01_uR::synapse0x24415e0() {
   return (neuron0x2438db0()*0.0612399);
}

double NNfunction_ns_chi01_uR::synapse0x2441070() {
   return (neuron0x24390f0()*0.0178433);
}

double NNfunction_ns_chi01_uR::synapse0x24410b0() {
   return (neuron0x2439650()*0.0178935);
}

double NNfunction_ns_chi01_uR::synapse0x243de40() {
   return (neuron0x2439870()*-0.0266646);
}

double NNfunction_ns_chi01_uR::synapse0x243de80() {
   return (neuron0x2439bb0()*-0.0356464);
}

double NNfunction_ns_chi01_uR::synapse0x243dec0() {
   return (neuron0x2439ef0()*-0.075476);
}

double NNfunction_ns_chi01_uR::synapse0x243df00() {
   return (neuron0x243a230()*0.067417);
}

double NNfunction_ns_chi01_uR::synapse0x243df40() {
   return (neuron0x243a570()*-0.0188357);
}

double NNfunction_ns_chi01_uR::synapse0x243df80() {
   return (neuron0x243a8b0()*0.0782818);
}

double NNfunction_ns_chi01_uR::synapse0x243e300() {
   return (neuron0x2435d80()*0.0717567);
}

double NNfunction_ns_chi01_uR::synapse0x243e340() {
   return (neuron0x2436030()*3.94692);
}

double NNfunction_ns_chi01_uR::synapse0x243e380() {
   return (neuron0x2436370()*0.103975);
}

double NNfunction_ns_chi01_uR::synapse0x243e3c0() {
   return (neuron0x24366b0()*-0.0234758);
}

double NNfunction_ns_chi01_uR::synapse0x243e400() {
   return (neuron0x24369f0()*0.0133889);
}

double NNfunction_ns_chi01_uR::synapse0x243e440() {
   return (neuron0x2436d30()*-0.0179849);
}

double NNfunction_ns_chi01_uR::synapse0x243e480() {
   return (neuron0x2437070()*-0.00236775);
}

double NNfunction_ns_chi01_uR::synapse0x243e4c0() {
   return (neuron0x24373b0()*0.0195312);
}

double NNfunction_ns_chi01_uR::synapse0x243e500() {
   return (neuron0x24376f0()*0.0207103);
}

double NNfunction_ns_chi01_uR::synapse0x243e540() {
   return (neuron0x2437a30()*-0.00846971);
}

double NNfunction_ns_chi01_uR::synapse0x243e580() {
   return (neuron0x2437d70()*0.00877748);
}

double NNfunction_ns_chi01_uR::synapse0x243e5c0() {
   return (neuron0x24380b0()*-0.0311758);
}

double NNfunction_ns_chi01_uR::synapse0x243e600() {
   return (neuron0x24383f0()*0.000612219);
}

double NNfunction_ns_chi01_uR::synapse0x2442740() {
   return (neuron0x2438730()*0.0219655);
}

double NNfunction_ns_chi01_uR::synapse0x2442780() {
   return (neuron0x2438a70()*0.265568);
}

double NNfunction_ns_chi01_uR::synapse0x24427c0() {
   return (neuron0x2438db0()*0.00496731);
}

double NNfunction_ns_chi01_uR::synapse0x243e150() {
   return (neuron0x24390f0()*-0.028025);
}

double NNfunction_ns_chi01_uR::synapse0x243e190() {
   return (neuron0x2439650()*0.0111562);
}

double NNfunction_ns_chi01_uR::synapse0x2442910() {
   return (neuron0x2439870()*0.00240598);
}

double NNfunction_ns_chi01_uR::synapse0x2442950() {
   return (neuron0x2439bb0()*-0.00747269);
}

double NNfunction_ns_chi01_uR::synapse0x2442990() {
   return (neuron0x2439ef0()*-0.0444925);
}

double NNfunction_ns_chi01_uR::synapse0x24429d0() {
   return (neuron0x243a230()*0.0327601);
}

double NNfunction_ns_chi01_uR::synapse0x2442a10() {
   return (neuron0x243a570()*-0.0129308);
}

double NNfunction_ns_chi01_uR::synapse0x2442a50() {
   return (neuron0x243a8b0()*5.05639);
}

double NNfunction_ns_chi01_uR::synapse0x2442dd0() {
   return (neuron0x2435d80()*-0.110522);
}

double NNfunction_ns_chi01_uR::synapse0x2442e10() {
   return (neuron0x2436030()*-5.09507);
}

double NNfunction_ns_chi01_uR::synapse0x2442e50() {
   return (neuron0x2436370()*3.78398);
}

double NNfunction_ns_chi01_uR::synapse0x2442e90() {
   return (neuron0x24366b0()*0.0267628);
}

double NNfunction_ns_chi01_uR::synapse0x2442ed0() {
   return (neuron0x24369f0()*-0.102395);
}

double NNfunction_ns_chi01_uR::synapse0x2442f10() {
   return (neuron0x2436d30()*0.00270335);
}

double NNfunction_ns_chi01_uR::synapse0x2442f50() {
   return (neuron0x2437070()*-0.00348494);
}

double NNfunction_ns_chi01_uR::synapse0x2442f90() {
   return (neuron0x24373b0()*0.00714481);
}

double NNfunction_ns_chi01_uR::synapse0x2442fd0() {
   return (neuron0x24376f0()*0.0258238);
}

double NNfunction_ns_chi01_uR::synapse0x2443010() {
   return (neuron0x2437a30()*0.0630098);
}

double NNfunction_ns_chi01_uR::synapse0x2443050() {
   return (neuron0x2437d70()*-0.0963981);
}

double NNfunction_ns_chi01_uR::synapse0x2443090() {
   return (neuron0x24380b0()*0.0617109);
}

double NNfunction_ns_chi01_uR::synapse0x24430d0() {
   return (neuron0x24383f0()*-0.00685745);
}

double NNfunction_ns_chi01_uR::synapse0x2443110() {
   return (neuron0x2438730()*-0.0278677);
}

double NNfunction_ns_chi01_uR::synapse0x2443150() {
   return (neuron0x2438a70()*0.632965);
}

double NNfunction_ns_chi01_uR::synapse0x2443190() {
   return (neuron0x2438db0()*-0.0928134);
}

double NNfunction_ns_chi01_uR::synapse0x2442c20() {
   return (neuron0x24390f0()*-0.104796);
}

double NNfunction_ns_chi01_uR::synapse0x2442c60() {
   return (neuron0x2439650()*0.158638);
}

double NNfunction_ns_chi01_uR::synapse0x24432e0() {
   return (neuron0x2439870()*-0.0423941);
}

double NNfunction_ns_chi01_uR::synapse0x2443320() {
   return (neuron0x2439bb0()*0.0817748);
}

double NNfunction_ns_chi01_uR::synapse0x2443360() {
   return (neuron0x2439ef0()*-0.00939006);
}

double NNfunction_ns_chi01_uR::synapse0x24433a0() {
   return (neuron0x243a230()*0.0969766);
}

double NNfunction_ns_chi01_uR::synapse0x24433e0() {
   return (neuron0x243a570()*-0.00483502);
}

double NNfunction_ns_chi01_uR::synapse0x2443420() {
   return (neuron0x243a8b0()*-0.439662);
}

double NNfunction_ns_chi01_uR::synapse0x24437a0() {
   return (neuron0x2435d80()*-0.0211676);
}

double NNfunction_ns_chi01_uR::synapse0x24437e0() {
   return (neuron0x2436030()*-2.61563);
}

double NNfunction_ns_chi01_uR::synapse0x2443820() {
   return (neuron0x2436370()*-0.0776254);
}

double NNfunction_ns_chi01_uR::synapse0x2443860() {
   return (neuron0x24366b0()*0.0258861);
}

double NNfunction_ns_chi01_uR::synapse0x24438a0() {
   return (neuron0x24369f0()*0.0118458);
}

double NNfunction_ns_chi01_uR::synapse0x24438e0() {
   return (neuron0x2436d30()*0.00631911);
}

double NNfunction_ns_chi01_uR::synapse0x2443920() {
   return (neuron0x2437070()*0.00487726);
}

double NNfunction_ns_chi01_uR::synapse0x2443960() {
   return (neuron0x24373b0()*0.00757561);
}

double NNfunction_ns_chi01_uR::synapse0x24439a0() {
   return (neuron0x24376f0()*-0.0438229);
}

double NNfunction_ns_chi01_uR::synapse0x24439e0() {
   return (neuron0x2437a30()*-0.0147673);
}

double NNfunction_ns_chi01_uR::synapse0x2443a20() {
   return (neuron0x2437d70()*0.00515697);
}

double NNfunction_ns_chi01_uR::synapse0x2443a60() {
   return (neuron0x24380b0()*0.0282251);
}

double NNfunction_ns_chi01_uR::synapse0x2443aa0() {
   return (neuron0x24383f0()*-0.00893659);
}

double NNfunction_ns_chi01_uR::synapse0x2443ae0() {
   return (neuron0x2438730()*-0.0139961);
}

double NNfunction_ns_chi01_uR::synapse0x2443b20() {
   return (neuron0x2438a70()*-0.156301);
}

double NNfunction_ns_chi01_uR::synapse0x2443b60() {
   return (neuron0x2438db0()*-0.0277588);
}

double NNfunction_ns_chi01_uR::synapse0x24435f0() {
   return (neuron0x24390f0()*0.0131458);
}

double NNfunction_ns_chi01_uR::synapse0x2443630() {
   return (neuron0x2439650()*0.023141);
}

double NNfunction_ns_chi01_uR::synapse0x2443cb0() {
   return (neuron0x2439870()*0.00265864);
}

double NNfunction_ns_chi01_uR::synapse0x2443cf0() {
   return (neuron0x2439bb0()*0.0262266);
}

double NNfunction_ns_chi01_uR::synapse0x2443d30() {
   return (neuron0x2439ef0()*0.0150133);
}

double NNfunction_ns_chi01_uR::synapse0x2443d70() {
   return (neuron0x243a230()*-0.0207454);
}

double NNfunction_ns_chi01_uR::synapse0x2443db0() {
   return (neuron0x243a570()*0.0213351);
}

double NNfunction_ns_chi01_uR::synapse0x2443df0() {
   return (neuron0x243a8b0()*19.8566);
}

double NNfunction_ns_chi01_uR::synapse0x2444170() {
   return (neuron0x2435d80()*0.0095815);
}

double NNfunction_ns_chi01_uR::synapse0x24441b0() {
   return (neuron0x2436030()*0.0458206);
}

double NNfunction_ns_chi01_uR::synapse0x24441f0() {
   return (neuron0x2436370()*-0.0168282);
}

double NNfunction_ns_chi01_uR::synapse0x2444230() {
   return (neuron0x24366b0()*2.962);
}

double NNfunction_ns_chi01_uR::synapse0x2444270() {
   return (neuron0x24369f0()*0.01632);
}

double NNfunction_ns_chi01_uR::synapse0x24442b0() {
   return (neuron0x2436d30()*-0.00352763);
}

double NNfunction_ns_chi01_uR::synapse0x24442f0() {
   return (neuron0x2437070()*-0.0132848);
}

double NNfunction_ns_chi01_uR::synapse0x2444330() {
   return (neuron0x24373b0()*-0.00601621);
}

double NNfunction_ns_chi01_uR::synapse0x2444370() {
   return (neuron0x24376f0()*0.0231778);
}

double NNfunction_ns_chi01_uR::synapse0x24443b0() {
   return (neuron0x2437a30()*-0.00135805);
}

double NNfunction_ns_chi01_uR::synapse0x24443f0() {
   return (neuron0x2437d70()*0.00793401);
}

double NNfunction_ns_chi01_uR::synapse0x2444430() {
   return (neuron0x24380b0()*0.0165357);
}

double NNfunction_ns_chi01_uR::synapse0x2444470() {
   return (neuron0x24383f0()*-0.0208493);
}

double NNfunction_ns_chi01_uR::synapse0x24444b0() {
   return (neuron0x2438730()*0.0203329);
}

double NNfunction_ns_chi01_uR::synapse0x24444f0() {
   return (neuron0x2438a70()*0.309986);
}

double NNfunction_ns_chi01_uR::synapse0x2444530() {
   return (neuron0x2438db0()*0.0103619);
}

double NNfunction_ns_chi01_uR::synapse0x2443fc0() {
   return (neuron0x24390f0()*0.0405439);
}

double NNfunction_ns_chi01_uR::synapse0x2444000() {
   return (neuron0x2439650()*0.00914439);
}

double NNfunction_ns_chi01_uR::synapse0x2444680() {
   return (neuron0x2439870()*-0.015698);
}

double NNfunction_ns_chi01_uR::synapse0x24446c0() {
   return (neuron0x2439bb0()*0.0211393);
}

double NNfunction_ns_chi01_uR::synapse0x2444700() {
   return (neuron0x2439ef0()*0.00361932);
}

double NNfunction_ns_chi01_uR::synapse0x2444740() {
   return (neuron0x243a230()*0.00832633);
}

double NNfunction_ns_chi01_uR::synapse0x2444780() {
   return (neuron0x243a570()*0.00674899);
}

double NNfunction_ns_chi01_uR::synapse0x24447c0() {
   return (neuron0x243a8b0()*0.0323402);
}

double NNfunction_ns_chi01_uR::synapse0x2444b40() {
   return (neuron0x2435d80()*-0.209129);
}

double NNfunction_ns_chi01_uR::synapse0x2435f10() {
   return (neuron0x2436030()*-0.050696);
}

double NNfunction_ns_chi01_uR::synapse0x2435f50() {
   return (neuron0x2436370()*-0.30193);
}

double NNfunction_ns_chi01_uR::synapse0x2436250() {
   return (neuron0x24366b0()*-0.010319);
}

double NNfunction_ns_chi01_uR::synapse0x2436290() {
   return (neuron0x24369f0()*0.0298967);
}

double NNfunction_ns_chi01_uR::synapse0x2436590() {
   return (neuron0x2436d30()*0.0419979);
}

double NNfunction_ns_chi01_uR::synapse0x24365d0() {
   return (neuron0x2437070()*-0.00237357);
}

double NNfunction_ns_chi01_uR::synapse0x24368d0() {
   return (neuron0x24373b0()*0.00913449);
}

double NNfunction_ns_chi01_uR::synapse0x2436910() {
   return (neuron0x24376f0()*-0.0293399);
}

double NNfunction_ns_chi01_uR::synapse0x2436c10() {
   return (neuron0x2437a30()*0.0101501);
}

double NNfunction_ns_chi01_uR::synapse0x2436c50() {
   return (neuron0x2437d70()*-0.00538165);
}

double NNfunction_ns_chi01_uR::synapse0x2436f50() {
   return (neuron0x24380b0()*-0.00850212);
}

double NNfunction_ns_chi01_uR::synapse0x2436f90() {
   return (neuron0x24383f0()*-0.0191847);
}

double NNfunction_ns_chi01_uR::synapse0x2437290() {
   return (neuron0x2438730()*-0.000371729);
}

double NNfunction_ns_chi01_uR::synapse0x24372d0() {
   return (neuron0x2438a70()*0.174065);
}

double NNfunction_ns_chi01_uR::synapse0x24375d0() {
   return (neuron0x2438db0()*0.0297419);
}

double NNfunction_ns_chi01_uR::synapse0x2437610() {
   return (neuron0x24390f0()*0.00702248);
}

double NNfunction_ns_chi01_uR::synapse0x2437910() {
   return (neuron0x2439650()*0.0111799);
}

double NNfunction_ns_chi01_uR::synapse0x2437950() {
   return (neuron0x2439870()*-0.00160042);
}

double NNfunction_ns_chi01_uR::synapse0x2437c50() {
   return (neuron0x2439bb0()*0.012133);
}

double NNfunction_ns_chi01_uR::synapse0x2437c90() {
   return (neuron0x2439ef0()*-0.0236145);
}

double NNfunction_ns_chi01_uR::synapse0x2437f90() {
   return (neuron0x243a230()*0.00715649);
}

double NNfunction_ns_chi01_uR::synapse0x2437fd0() {
   return (neuron0x243a570()*-0.00815052);
}

double NNfunction_ns_chi01_uR::synapse0x24382d0() {
   return (neuron0x243a8b0()*-6.16566);
}

double NNfunction_ns_chi01_uR::synapse0x2438310() {
   return (neuron0x2435d80()*-0.0253132);
}

double NNfunction_ns_chi01_uR::synapse0x2438fd0() {
   return (neuron0x2436030()*0.15013);
}

double NNfunction_ns_chi01_uR::synapse0x2439010() {
   return (neuron0x2436370()*-0.0353013);
}

double NNfunction_ns_chi01_uR::synapse0x2444990() {
   return (neuron0x24366b0()*-0.127759);
}

double NNfunction_ns_chi01_uR::synapse0x24449d0() {
   return (neuron0x24369f0()*0.137521);
}

double NNfunction_ns_chi01_uR::synapse0x2439310() {
   return (neuron0x2436d30()*-0.0546701);
}

double NNfunction_ns_chi01_uR::synapse0x2439350() {
   return (neuron0x2437070()*0.145323);
}

double NNfunction_ns_chi01_uR::synapse0x21f0d00() {
   return (neuron0x24373b0()*-0.0514764);
}

double NNfunction_ns_chi01_uR::synapse0x21f0d40() {
   return (neuron0x24376f0()*-0.023463);
}

double NNfunction_ns_chi01_uR::synapse0x2439a90() {
   return (neuron0x2437a30()*0.262461);
}

double NNfunction_ns_chi01_uR::synapse0x2439ad0() {
   return (neuron0x2437d70()*0.220162);
}

double NNfunction_ns_chi01_uR::synapse0x2439dd0() {
   return (neuron0x24380b0()*0.30187);
}

double NNfunction_ns_chi01_uR::synapse0x2439e10() {
   return (neuron0x24383f0()*0.146667);
}

double NNfunction_ns_chi01_uR::synapse0x243a110() {
   return (neuron0x2438730()*-0.0400142);
}

double NNfunction_ns_chi01_uR::synapse0x243a150() {
   return (neuron0x2438a70()*-0.0753161);
}

double NNfunction_ns_chi01_uR::synapse0x243a450() {
   return (neuron0x2438db0()*0.0779851);
}

double NNfunction_ns_chi01_uR::synapse0x243a490() {
   return (neuron0x24390f0()*-0.10552);
}

double NNfunction_ns_chi01_uR::synapse0x243a790() {
   return (neuron0x2439650()*0.0499386);
}

double NNfunction_ns_chi01_uR::synapse0x243a7d0() {
   return (neuron0x2439870()*0.150332);
}

double NNfunction_ns_chi01_uR::synapse0x243aad0() {
   return (neuron0x2439bb0()*-0.100472);
}

double NNfunction_ns_chi01_uR::synapse0x243ab10() {
   return (neuron0x2439ef0()*0.0654603);
}

double NNfunction_ns_chi01_uR::synapse0x2438610() {
   return (neuron0x243a230()*0.0277645);
}

double NNfunction_ns_chi01_uR::synapse0x2438650() {
   return (neuron0x243a570()*0.00859117);
}

double NNfunction_ns_chi01_uR::synapse0x24468b0() {
   return (neuron0x243a8b0()*-0.0125164);
}

double NNfunction_ns_chi01_uR::synapse0x2446c30() {
   return (neuron0x2435d80()*0.0538156);
}

double NNfunction_ns_chi01_uR::synapse0x2446c70() {
   return (neuron0x2436030()*6.89365);
}

double NNfunction_ns_chi01_uR::synapse0x2446cb0() {
   return (neuron0x2436370()*0.245719);
}

double NNfunction_ns_chi01_uR::synapse0x2446cf0() {
   return (neuron0x24366b0()*-0.0743746);
}

double NNfunction_ns_chi01_uR::synapse0x2446d30() {
   return (neuron0x24369f0()*-0.0442102);
}

double NNfunction_ns_chi01_uR::synapse0x2446d70() {
   return (neuron0x2436d30()*-0.0332655);
}

double NNfunction_ns_chi01_uR::synapse0x2446db0() {
   return (neuron0x2437070()*0.0872776);
}

double NNfunction_ns_chi01_uR::synapse0x2446df0() {
   return (neuron0x24373b0()*0.0765797);
}

double NNfunction_ns_chi01_uR::synapse0x2446e30() {
   return (neuron0x24376f0()*0.0890853);
}

double NNfunction_ns_chi01_uR::synapse0x2446e70() {
   return (neuron0x2437a30()*-0.095775);
}

double NNfunction_ns_chi01_uR::synapse0x2446eb0() {
   return (neuron0x2437d70()*-0.073007);
}

double NNfunction_ns_chi01_uR::synapse0x2446ef0() {
   return (neuron0x24380b0()*-0.0205199);
}

double NNfunction_ns_chi01_uR::synapse0x2446f30() {
   return (neuron0x24383f0()*-0.0263359);
}

double NNfunction_ns_chi01_uR::synapse0x2446f70() {
   return (neuron0x2438730()*0.00370112);
}

double NNfunction_ns_chi01_uR::synapse0x2446fb0() {
   return (neuron0x2438a70()*0.625907);
}

double NNfunction_ns_chi01_uR::synapse0x2446ff0() {
   return (neuron0x2438db0()*-0.0137209);
}

double NNfunction_ns_chi01_uR::synapse0x2446a80() {
   return (neuron0x24390f0()*-0.0356935);
}

double NNfunction_ns_chi01_uR::synapse0x2446ac0() {
   return (neuron0x2439650()*-0.0339661);
}

double NNfunction_ns_chi01_uR::synapse0x2447140() {
   return (neuron0x2439870()*0.0104286);
}

double NNfunction_ns_chi01_uR::synapse0x2447180() {
   return (neuron0x2439bb0()*-0.0656204);
}

double NNfunction_ns_chi01_uR::synapse0x24471c0() {
   return (neuron0x2439ef0()*0.0364874);
}

double NNfunction_ns_chi01_uR::synapse0x2447200() {
   return (neuron0x243a230()*-0.0027157);
}

double NNfunction_ns_chi01_uR::synapse0x2447240() {
   return (neuron0x243a570()*0.0516282);
}

double NNfunction_ns_chi01_uR::synapse0x2447280() {
   return (neuron0x243a8b0()*0.0654039);
}

double NNfunction_ns_chi01_uR::synapse0x2447600() {
   return (neuron0x2435d80()*0.0894873);
}

double NNfunction_ns_chi01_uR::synapse0x2447640() {
   return (neuron0x2436030()*-13.4829);
}

double NNfunction_ns_chi01_uR::synapse0x2447680() {
   return (neuron0x2436370()*-12.5526);
}

double NNfunction_ns_chi01_uR::synapse0x24476c0() {
   return (neuron0x24366b0()*0.0100531);
}

double NNfunction_ns_chi01_uR::synapse0x2447700() {
   return (neuron0x24369f0()*-0.0346256);
}

double NNfunction_ns_chi01_uR::synapse0x2447740() {
   return (neuron0x2436d30()*-0.0159632);
}

double NNfunction_ns_chi01_uR::synapse0x2447780() {
   return (neuron0x2437070()*0.0215081);
}

double NNfunction_ns_chi01_uR::synapse0x24477c0() {
   return (neuron0x24373b0()*-0.0295638);
}

double NNfunction_ns_chi01_uR::synapse0x2447800() {
   return (neuron0x24376f0()*0.0468387);
}

double NNfunction_ns_chi01_uR::synapse0x2447840() {
   return (neuron0x2437a30()*-0.0305203);
}

double NNfunction_ns_chi01_uR::synapse0x2447880() {
   return (neuron0x2437d70()*-0.00674079);
}

double NNfunction_ns_chi01_uR::synapse0x24478c0() {
   return (neuron0x24380b0()*-0.0250469);
}

double NNfunction_ns_chi01_uR::synapse0x2447900() {
   return (neuron0x24383f0()*-0.00113514);
}

double NNfunction_ns_chi01_uR::synapse0x2447940() {
   return (neuron0x2438730()*-0.000624542);
}

double NNfunction_ns_chi01_uR::synapse0x2447980() {
   return (neuron0x2438a70()*-0.531393);
}

double NNfunction_ns_chi01_uR::synapse0x24479c0() {
   return (neuron0x2438db0()*-0.0179543);
}

double NNfunction_ns_chi01_uR::synapse0x2447450() {
   return (neuron0x24390f0()*0.00229041);
}

double NNfunction_ns_chi01_uR::synapse0x2447490() {
   return (neuron0x2439650()*0.0569687);
}

double NNfunction_ns_chi01_uR::synapse0x2447b10() {
   return (neuron0x2439870()*-0.0183884);
}

double NNfunction_ns_chi01_uR::synapse0x2447b50() {
   return (neuron0x2439bb0()*-0.00814723);
}

double NNfunction_ns_chi01_uR::synapse0x2447b90() {
   return (neuron0x2439ef0()*-0.0586102);
}

double NNfunction_ns_chi01_uR::synapse0x2447bd0() {
   return (neuron0x243a230()*-0.0237015);
}

double NNfunction_ns_chi01_uR::synapse0x2447c10() {
   return (neuron0x243a570()*0.0698736);
}

double NNfunction_ns_chi01_uR::synapse0x2447c50() {
   return (neuron0x243a8b0()*0.159398);
}

double NNfunction_ns_chi01_uR::synapse0x2447fd0() {
   return (neuron0x2435d80()*0.108402);
}

double NNfunction_ns_chi01_uR::synapse0x2448010() {
   return (neuron0x2436030()*-4.20901);
}

double NNfunction_ns_chi01_uR::synapse0x2448050() {
   return (neuron0x2436370()*6.49513);
}

double NNfunction_ns_chi01_uR::synapse0x2448090() {
   return (neuron0x24366b0()*0.0685573);
}

double NNfunction_ns_chi01_uR::synapse0x24480d0() {
   return (neuron0x24369f0()*-0.0295017);
}

double NNfunction_ns_chi01_uR::synapse0x2448110() {
   return (neuron0x2436d30()*0.0319239);
}

double NNfunction_ns_chi01_uR::synapse0x2448150() {
   return (neuron0x2437070()*0.0482726);
}

double NNfunction_ns_chi01_uR::synapse0x2448190() {
   return (neuron0x24373b0()*0.011545);
}

double NNfunction_ns_chi01_uR::synapse0x24481d0() {
   return (neuron0x24376f0()*-0.0587593);
}

double NNfunction_ns_chi01_uR::synapse0x2448210() {
   return (neuron0x2437a30()*0.00788638);
}

double NNfunction_ns_chi01_uR::synapse0x2448250() {
   return (neuron0x2437d70()*-0.0863923);
}

double NNfunction_ns_chi01_uR::synapse0x2448290() {
   return (neuron0x24380b0()*0.010206);
}

double NNfunction_ns_chi01_uR::synapse0x24482d0() {
   return (neuron0x24383f0()*-0.0286921);
}

double NNfunction_ns_chi01_uR::synapse0x2448310() {
   return (neuron0x2438730()*-0.0404239);
}

double NNfunction_ns_chi01_uR::synapse0x2448350() {
   return (neuron0x2438a70()*0.789888);
}

double NNfunction_ns_chi01_uR::synapse0x2448390() {
   return (neuron0x2438db0()*0.0451024);
}

double NNfunction_ns_chi01_uR::synapse0x2447e20() {
   return (neuron0x24390f0()*-0.0289388);
}

double NNfunction_ns_chi01_uR::synapse0x2447e60() {
   return (neuron0x2439650()*0.0393046);
}

double NNfunction_ns_chi01_uR::synapse0x24484e0() {
   return (neuron0x2439870()*-0.10453);
}

double NNfunction_ns_chi01_uR::synapse0x2448520() {
   return (neuron0x2439bb0()*0.0774866);
}

double NNfunction_ns_chi01_uR::synapse0x2448560() {
   return (neuron0x2439ef0()*0.0428163);
}

double NNfunction_ns_chi01_uR::synapse0x24485a0() {
   return (neuron0x243a230()*0.0891931);
}

double NNfunction_ns_chi01_uR::synapse0x24485e0() {
   return (neuron0x243a570()*-0.0160143);
}

double NNfunction_ns_chi01_uR::synapse0x2448620() {
   return (neuron0x243a8b0()*5.15541);
}

double NNfunction_ns_chi01_uR::synapse0x24489a0() {
   return (neuron0x2435d80()*-0.309529);
}

double NNfunction_ns_chi01_uR::synapse0x24489e0() {
   return (neuron0x2436030()*0.577831);
}

double NNfunction_ns_chi01_uR::synapse0x2448a20() {
   return (neuron0x2436370()*-0.276582);
}

double NNfunction_ns_chi01_uR::synapse0x2448a60() {
   return (neuron0x24366b0()*0.703158);
}

double NNfunction_ns_chi01_uR::synapse0x2448aa0() {
   return (neuron0x24369f0()*0.0900934);
}

double NNfunction_ns_chi01_uR::synapse0x2448ae0() {
   return (neuron0x2436d30()*-0.211055);
}

double NNfunction_ns_chi01_uR::synapse0x2448b20() {
   return (neuron0x2437070()*-0.1114);
}

double NNfunction_ns_chi01_uR::synapse0x2448b60() {
   return (neuron0x24373b0()*-0.253414);
}

double NNfunction_ns_chi01_uR::synapse0x2448ba0() {
   return (neuron0x24376f0()*0.250346);
}

double NNfunction_ns_chi01_uR::synapse0x2448be0() {
   return (neuron0x2437a30()*-0.249078);
}

double NNfunction_ns_chi01_uR::synapse0x2448c20() {
   return (neuron0x2437d70()*-0.12444);
}

double NNfunction_ns_chi01_uR::synapse0x2448c60() {
   return (neuron0x24380b0()*0.312035);
}

double NNfunction_ns_chi01_uR::synapse0x2448ca0() {
   return (neuron0x24383f0()*0.321333);
}

double NNfunction_ns_chi01_uR::synapse0x2448ce0() {
   return (neuron0x2438730()*0.241503);
}

double NNfunction_ns_chi01_uR::synapse0x2448d20() {
   return (neuron0x2438a70()*0.051277);
}

double NNfunction_ns_chi01_uR::synapse0x2448d60() {
   return (neuron0x2438db0()*0.0945307);
}

double NNfunction_ns_chi01_uR::synapse0x24487f0() {
   return (neuron0x24390f0()*-0.338374);
}

double NNfunction_ns_chi01_uR::synapse0x2448830() {
   return (neuron0x2439650()*0.0190527);
}

double NNfunction_ns_chi01_uR::synapse0x2448eb0() {
   return (neuron0x2439870()*0.083482);
}

double NNfunction_ns_chi01_uR::synapse0x2448ef0() {
   return (neuron0x2439bb0()*-0.0169048);
}

double NNfunction_ns_chi01_uR::synapse0x2448f30() {
   return (neuron0x2439ef0()*0.0771151);
}

double NNfunction_ns_chi01_uR::synapse0x2448f70() {
   return (neuron0x243a230()*-0.00276613);
}

double NNfunction_ns_chi01_uR::synapse0x2448fb0() {
   return (neuron0x243a570()*0.0970969);
}

double NNfunction_ns_chi01_uR::synapse0x2448ff0() {
   return (neuron0x243a8b0()*0.0159197);
}

double NNfunction_ns_chi01_uR::synapse0x2449370() {
   return (neuron0x2435d80()*0.230919);
}

double NNfunction_ns_chi01_uR::synapse0x24493b0() {
   return (neuron0x2436030()*0.133366);
}

double NNfunction_ns_chi01_uR::synapse0x24493f0() {
   return (neuron0x2436370()*0.0470427);
}

double NNfunction_ns_chi01_uR::synapse0x2449430() {
   return (neuron0x24366b0()*-0.121146);
}

double NNfunction_ns_chi01_uR::synapse0x2449470() {
   return (neuron0x24369f0()*0.901764);
}

double NNfunction_ns_chi01_uR::synapse0x24494b0() {
   return (neuron0x2436d30()*0.197365);
}

double NNfunction_ns_chi01_uR::synapse0x24494f0() {
   return (neuron0x2437070()*0.299357);
}

double NNfunction_ns_chi01_uR::synapse0x2449530() {
   return (neuron0x24373b0()*-0.0605939);
}

double NNfunction_ns_chi01_uR::synapse0x2449570() {
   return (neuron0x24376f0()*0.158086);
}

double NNfunction_ns_chi01_uR::synapse0x2441730() {
   return (neuron0x2437a30()*-0.00284665);
}

double NNfunction_ns_chi01_uR::synapse0x2441770() {
   return (neuron0x2437d70()*0.0340507);
}

double NNfunction_ns_chi01_uR::synapse0x24417b0() {
   return (neuron0x24380b0()*0.120959);
}

double NNfunction_ns_chi01_uR::synapse0x24417f0() {
   return (neuron0x24383f0()*0.0827779);
}

double NNfunction_ns_chi01_uR::synapse0x2441830() {
   return (neuron0x2438730()*0.0426479);
}

double NNfunction_ns_chi01_uR::synapse0x2441870() {
   return (neuron0x2438a70()*1.34826);
}

double NNfunction_ns_chi01_uR::synapse0x24418b0() {
   return (neuron0x2438db0()*0.141654);
}

double NNfunction_ns_chi01_uR::synapse0x24491c0() {
   return (neuron0x24390f0()*0.00536381);
}

double NNfunction_ns_chi01_uR::synapse0x2449200() {
   return (neuron0x2439650()*0.128908);
}

double NNfunction_ns_chi01_uR::synapse0x2441a00() {
   return (neuron0x2439870()*-0.11172);
}

double NNfunction_ns_chi01_uR::synapse0x2441a40() {
   return (neuron0x2439bb0()*-0.0599691);
}

double NNfunction_ns_chi01_uR::synapse0x2441a80() {
   return (neuron0x2439ef0()*0.0721733);
}

double NNfunction_ns_chi01_uR::synapse0x2441ac0() {
   return (neuron0x243a230()*-0.0923709);
}

double NNfunction_ns_chi01_uR::synapse0x2441b00() {
   return (neuron0x243a570()*-0.00466987);
}

double NNfunction_ns_chi01_uR::synapse0x2441b40() {
   return (neuron0x243a8b0()*-0.152847);
}

double NNfunction_ns_chi01_uR::synapse0x2441ec0() {
   return (neuron0x2435d80()*-0.118219);
}

double NNfunction_ns_chi01_uR::synapse0x2441f00() {
   return (neuron0x2436030()*-0.00581423);
}

double NNfunction_ns_chi01_uR::synapse0x2441f40() {
   return (neuron0x2436370()*0.213276);
}

double NNfunction_ns_chi01_uR::synapse0x2441f80() {
   return (neuron0x24366b0()*0.0137472);
}

double NNfunction_ns_chi01_uR::synapse0x2441fc0() {
   return (neuron0x24369f0()*-0.0607998);
}

double NNfunction_ns_chi01_uR::synapse0x2442000() {
   return (neuron0x2436d30()*0.0148808);
}

double NNfunction_ns_chi01_uR::synapse0x2442040() {
   return (neuron0x2437070()*0.0299187);
}

double NNfunction_ns_chi01_uR::synapse0x2442080() {
   return (neuron0x24373b0()*0.0193621);
}

double NNfunction_ns_chi01_uR::synapse0x24420c0() {
   return (neuron0x24376f0()*-0.00135206);
}

double NNfunction_ns_chi01_uR::synapse0x2442100() {
   return (neuron0x2437a30()*0.00411059);
}

double NNfunction_ns_chi01_uR::synapse0x2442140() {
   return (neuron0x2437d70()*0.0142653);
}

double NNfunction_ns_chi01_uR::synapse0x2442180() {
   return (neuron0x24380b0()*0.0234247);
}

double NNfunction_ns_chi01_uR::synapse0x24421c0() {
   return (neuron0x24383f0()*0.0293674);
}

double NNfunction_ns_chi01_uR::synapse0x2442200() {
   return (neuron0x2438730()*0.00968279);
}

double NNfunction_ns_chi01_uR::synapse0x2442240() {
   return (neuron0x2438a70()*-0.558165);
}

double NNfunction_ns_chi01_uR::synapse0x2442280() {
   return (neuron0x2438db0()*-0.0332847);
}

double NNfunction_ns_chi01_uR::synapse0x2441d10() {
   return (neuron0x24390f0()*0.0263391);
}

double NNfunction_ns_chi01_uR::synapse0x2441d50() {
   return (neuron0x2439650()*0.0136926);
}

double NNfunction_ns_chi01_uR::synapse0x24423d0() {
   return (neuron0x2439870()*0.0240244);
}

double NNfunction_ns_chi01_uR::synapse0x2442410() {
   return (neuron0x2439bb0()*0.000382601);
}

double NNfunction_ns_chi01_uR::synapse0x2442450() {
   return (neuron0x2439ef0()*0.00935149);
}

double NNfunction_ns_chi01_uR::synapse0x2442490() {
   return (neuron0x243a230()*-0.0269568);
}

double NNfunction_ns_chi01_uR::synapse0x24424d0() {
   return (neuron0x243a570()*0.0277035);
}

double NNfunction_ns_chi01_uR::synapse0x2442510() {
   return (neuron0x243a8b0()*-5.79123);
}

double NNfunction_ns_chi01_uR::synapse0x24426e0() {
   return (neuron0x2435d80()*-0.212769);
}

double NNfunction_ns_chi01_uR::synapse0x244b770() {
   return (neuron0x2436030()*-0.617812);
}

double NNfunction_ns_chi01_uR::synapse0x244b7b0() {
   return (neuron0x2436370()*1.13298);
}

double NNfunction_ns_chi01_uR::synapse0x244b7f0() {
   return (neuron0x24366b0()*0.372345);
}

double NNfunction_ns_chi01_uR::synapse0x244b830() {
   return (neuron0x24369f0()*-0.596605);
}

double NNfunction_ns_chi01_uR::synapse0x244b870() {
   return (neuron0x2436d30()*0.464732);
}

double NNfunction_ns_chi01_uR::synapse0x244b8b0() {
   return (neuron0x2437070()*0.323034);
}

double NNfunction_ns_chi01_uR::synapse0x244b8f0() {
   return (neuron0x24373b0()*-1.3405);
}

double NNfunction_ns_chi01_uR::synapse0x244b930() {
   return (neuron0x24376f0()*-0.69504);
}

double NNfunction_ns_chi01_uR::synapse0x244b970() {
   return (neuron0x2437a30()*0.498199);
}

double NNfunction_ns_chi01_uR::synapse0x244b9b0() {
   return (neuron0x2437d70()*-0.747017);
}

double NNfunction_ns_chi01_uR::synapse0x244b9f0() {
   return (neuron0x24380b0()*0.629707);
}

double NNfunction_ns_chi01_uR::synapse0x244ba30() {
   return (neuron0x24383f0()*1.33572);
}

double NNfunction_ns_chi01_uR::synapse0x244ba70() {
   return (neuron0x2438730()*-0.271635);
}

double NNfunction_ns_chi01_uR::synapse0x244bab0() {
   return (neuron0x2438a70()*-1.23481);
}

double NNfunction_ns_chi01_uR::synapse0x244baf0() {
   return (neuron0x2438db0()*-0.195562);
}

double NNfunction_ns_chi01_uR::synapse0x244b5c0() {
   return (neuron0x24390f0()*-0.107353);
}

double NNfunction_ns_chi01_uR::synapse0x244b600() {
   return (neuron0x2439650()*0.555205);
}

double NNfunction_ns_chi01_uR::synapse0x244bc40() {
   return (neuron0x2439870()*0.589616);
}

double NNfunction_ns_chi01_uR::synapse0x244bc80() {
   return (neuron0x2439bb0()*1.62073);
}

double NNfunction_ns_chi01_uR::synapse0x244bcc0() {
   return (neuron0x2439ef0()*0.143139);
}

double NNfunction_ns_chi01_uR::synapse0x244bd00() {
   return (neuron0x243a230()*-0.101754);
}

double NNfunction_ns_chi01_uR::synapse0x244bd40() {
   return (neuron0x243a570()*1.12862);
}

double NNfunction_ns_chi01_uR::synapse0x244bd80() {
   return (neuron0x243a8b0()*1.65658);
}

double NNfunction_ns_chi01_uR::synapse0x244c100() {
   return (neuron0x2435d80()*0.119552);
}

double NNfunction_ns_chi01_uR::synapse0x244c140() {
   return (neuron0x2436030()*-17.4479);
}

double NNfunction_ns_chi01_uR::synapse0x244c180() {
   return (neuron0x2436370()*-2.27573);
}

double NNfunction_ns_chi01_uR::synapse0x244c1c0() {
   return (neuron0x24366b0()*-0.0580652);
}

double NNfunction_ns_chi01_uR::synapse0x244c200() {
   return (neuron0x24369f0()*-0.0411809);
}

double NNfunction_ns_chi01_uR::synapse0x244c240() {
   return (neuron0x2436d30()*-0.024385);
}

double NNfunction_ns_chi01_uR::synapse0x244c280() {
   return (neuron0x2437070()*0.0275557);
}

double NNfunction_ns_chi01_uR::synapse0x244c2c0() {
   return (neuron0x24373b0()*-0.0098491);
}

double NNfunction_ns_chi01_uR::synapse0x244c300() {
   return (neuron0x24376f0()*0.0294281);
}

double NNfunction_ns_chi01_uR::synapse0x244c340() {
   return (neuron0x2437a30()*-0.0126699);
}

double NNfunction_ns_chi01_uR::synapse0x244c380() {
   return (neuron0x2437d70()*0.016706);
}

double NNfunction_ns_chi01_uR::synapse0x244c3c0() {
   return (neuron0x24380b0()*-0.022194);
}

double NNfunction_ns_chi01_uR::synapse0x244c400() {
   return (neuron0x24383f0()*-0.0185284);
}

double NNfunction_ns_chi01_uR::synapse0x244c440() {
   return (neuron0x2438730()*-0.0112941);
}

double NNfunction_ns_chi01_uR::synapse0x244c480() {
   return (neuron0x2438a70()*-0.271048);
}

double NNfunction_ns_chi01_uR::synapse0x244c4c0() {
   return (neuron0x2438db0()*0.0342655);
}

double NNfunction_ns_chi01_uR::synapse0x244bf50() {
   return (neuron0x24390f0()*0.0141573);
}

double NNfunction_ns_chi01_uR::synapse0x244bf90() {
   return (neuron0x2439650()*-0.0417576);
}

double NNfunction_ns_chi01_uR::synapse0x244c610() {
   return (neuron0x2439870()*-0.00313613);
}

double NNfunction_ns_chi01_uR::synapse0x244c650() {
   return (neuron0x2439bb0()*-0.017485);
}

double NNfunction_ns_chi01_uR::synapse0x244c690() {
   return (neuron0x2439ef0()*0.0645194);
}

double NNfunction_ns_chi01_uR::synapse0x244c6d0() {
   return (neuron0x243a230()*-0.0383169);
}

double NNfunction_ns_chi01_uR::synapse0x244c710() {
   return (neuron0x243a570()*0.0215272);
}

double NNfunction_ns_chi01_uR::synapse0x244c750() {
   return (neuron0x243a8b0()*0.181721);
}

double NNfunction_ns_chi01_uR::synapse0x244cad0() {
   return (neuron0x2435d80()*-0.0495092);
}

double NNfunction_ns_chi01_uR::synapse0x244cb10() {
   return (neuron0x2436030()*1.803);
}

double NNfunction_ns_chi01_uR::synapse0x244cb50() {
   return (neuron0x2436370()*-0.462999);
}

double NNfunction_ns_chi01_uR::synapse0x244cb90() {
   return (neuron0x24366b0()*-0.371642);
}

double NNfunction_ns_chi01_uR::synapse0x244cbd0() {
   return (neuron0x24369f0()*0.0747233);
}

double NNfunction_ns_chi01_uR::synapse0x244cc10() {
   return (neuron0x2436d30()*-0.688602);
}

double NNfunction_ns_chi01_uR::synapse0x244cc50() {
   return (neuron0x2437070()*0.403727);
}

double NNfunction_ns_chi01_uR::synapse0x244cc90() {
   return (neuron0x24373b0()*0.189535);
}

double NNfunction_ns_chi01_uR::synapse0x244ccd0() {
   return (neuron0x24376f0()*-0.289481);
}

double NNfunction_ns_chi01_uR::synapse0x244cd10() {
   return (neuron0x2437a30()*0.879104);
}

double NNfunction_ns_chi01_uR::synapse0x244cd50() {
   return (neuron0x2437d70()*-0.264847);
}

double NNfunction_ns_chi01_uR::synapse0x244cd90() {
   return (neuron0x24380b0()*0.0219019);
}

double NNfunction_ns_chi01_uR::synapse0x244cdd0() {
   return (neuron0x24383f0()*-0.322233);
}

double NNfunction_ns_chi01_uR::synapse0x244ce10() {
   return (neuron0x2438730()*-0.0287563);
}

double NNfunction_ns_chi01_uR::synapse0x244ce50() {
   return (neuron0x2438a70()*-1.86688);
}

double NNfunction_ns_chi01_uR::synapse0x244ce90() {
   return (neuron0x2438db0()*0.0217813);
}

double NNfunction_ns_chi01_uR::synapse0x244c920() {
   return (neuron0x24390f0()*-0.0100794);
}

double NNfunction_ns_chi01_uR::synapse0x244c960() {
   return (neuron0x2439650()*-0.125248);
}

double NNfunction_ns_chi01_uR::synapse0x244cfe0() {
   return (neuron0x2439870()*-0.11566);
}

double NNfunction_ns_chi01_uR::synapse0x244d020() {
   return (neuron0x2439bb0()*0.717151);
}

double NNfunction_ns_chi01_uR::synapse0x244d060() {
   return (neuron0x2439ef0()*-0.253716);
}

double NNfunction_ns_chi01_uR::synapse0x244d0a0() {
   return (neuron0x243a230()*0.191124);
}

double NNfunction_ns_chi01_uR::synapse0x244d0e0() {
   return (neuron0x243a570()*0.395592);
}

double NNfunction_ns_chi01_uR::synapse0x244d120() {
   return (neuron0x243a8b0()*-0.185819);
}

double NNfunction_ns_chi01_uR::synapse0x244d4a0() {
   return (neuron0x2435d80()*-0.147177);
}

double NNfunction_ns_chi01_uR::synapse0x244d4e0() {
   return (neuron0x2436030()*-0.225971);
}

double NNfunction_ns_chi01_uR::synapse0x244d520() {
   return (neuron0x2436370()*-0.19969);
}

double NNfunction_ns_chi01_uR::synapse0x244d560() {
   return (neuron0x24366b0()*-0.214744);
}

double NNfunction_ns_chi01_uR::synapse0x244d5a0() {
   return (neuron0x24369f0()*-0.410855);
}

double NNfunction_ns_chi01_uR::synapse0x244d5e0() {
   return (neuron0x2436d30()*-0.263087);
}

double NNfunction_ns_chi01_uR::synapse0x244d620() {
   return (neuron0x2437070()*0.0175457);
}

double NNfunction_ns_chi01_uR::synapse0x244d660() {
   return (neuron0x24373b0()*-0.0925935);
}

double NNfunction_ns_chi01_uR::synapse0x244d6a0() {
   return (neuron0x24376f0()*0.159327);
}

double NNfunction_ns_chi01_uR::synapse0x244d6e0() {
   return (neuron0x2437a30()*-0.609012);
}

double NNfunction_ns_chi01_uR::synapse0x244d720() {
   return (neuron0x2437d70()*0.0499536);
}

double NNfunction_ns_chi01_uR::synapse0x244d760() {
   return (neuron0x24380b0()*0.403144);
}

double NNfunction_ns_chi01_uR::synapse0x244d7a0() {
   return (neuron0x24383f0()*0.336875);
}

double NNfunction_ns_chi01_uR::synapse0x244d7e0() {
   return (neuron0x2438730()*-0.00934891);
}

double NNfunction_ns_chi01_uR::synapse0x244d820() {
   return (neuron0x2438a70()*0.602834);
}

double NNfunction_ns_chi01_uR::synapse0x244d860() {
   return (neuron0x2438db0()*0.274431);
}

double NNfunction_ns_chi01_uR::synapse0x244d2f0() {
   return (neuron0x24390f0()*0.288728);
}

double NNfunction_ns_chi01_uR::synapse0x244d330() {
   return (neuron0x2439650()*-1.82308);
}

double NNfunction_ns_chi01_uR::synapse0x244d9b0() {
   return (neuron0x2439870()*0.597097);
}

double NNfunction_ns_chi01_uR::synapse0x244d9f0() {
   return (neuron0x2439bb0()*0.497103);
}

double NNfunction_ns_chi01_uR::synapse0x244da30() {
   return (neuron0x2439ef0()*-0.614221);
}

double NNfunction_ns_chi01_uR::synapse0x244da70() {
   return (neuron0x243a230()*0.442643);
}

double NNfunction_ns_chi01_uR::synapse0x244dab0() {
   return (neuron0x243a570()*0.190667);
}

double NNfunction_ns_chi01_uR::synapse0x244daf0() {
   return (neuron0x243a8b0()*0.773696);
}

double NNfunction_ns_chi01_uR::synapse0x244de70() {
   return (neuron0x2435d80()*-0.0360206);
}

double NNfunction_ns_chi01_uR::synapse0x244deb0() {
   return (neuron0x2436030()*-4.05909);
}

double NNfunction_ns_chi01_uR::synapse0x244def0() {
   return (neuron0x2436370()*0.028168);
}

double NNfunction_ns_chi01_uR::synapse0x244df30() {
   return (neuron0x24366b0()*0.00365337);
}

double NNfunction_ns_chi01_uR::synapse0x244df70() {
   return (neuron0x24369f0()*-0.04393);
}

double NNfunction_ns_chi01_uR::synapse0x244dfb0() {
   return (neuron0x2436d30()*-0.0251694);
}

double NNfunction_ns_chi01_uR::synapse0x244dff0() {
   return (neuron0x2437070()*0.0199062);
}

double NNfunction_ns_chi01_uR::synapse0x244e030() {
   return (neuron0x24373b0()*0.0205359);
}

double NNfunction_ns_chi01_uR::synapse0x244e070() {
   return (neuron0x24376f0()*0.00808714);
}

double NNfunction_ns_chi01_uR::synapse0x244e0b0() {
   return (neuron0x2437a30()*0.0122697);
}

double NNfunction_ns_chi01_uR::synapse0x244e0f0() {
   return (neuron0x2437d70()*0.0663299);
}

double NNfunction_ns_chi01_uR::synapse0x244e130() {
   return (neuron0x24380b0()*-0.0110717);
}

double NNfunction_ns_chi01_uR::synapse0x244e170() {
   return (neuron0x24383f0()*0.0444802);
}

double NNfunction_ns_chi01_uR::synapse0x244e1b0() {
   return (neuron0x2438730()*0.00149868);
}

double NNfunction_ns_chi01_uR::synapse0x244e1f0() {
   return (neuron0x2438a70()*-0.227102);
}

double NNfunction_ns_chi01_uR::synapse0x244e230() {
   return (neuron0x2438db0()*0.00471113);
}

double NNfunction_ns_chi01_uR::synapse0x244dcc0() {
   return (neuron0x24390f0()*-0.0205667);
}

double NNfunction_ns_chi01_uR::synapse0x244dd00() {
   return (neuron0x2439650()*-0.0130852);
}

double NNfunction_ns_chi01_uR::synapse0x244e380() {
   return (neuron0x2439870()*-0.00107272);
}

double NNfunction_ns_chi01_uR::synapse0x244e3c0() {
   return (neuron0x2439bb0()*0.000299668);
}

double NNfunction_ns_chi01_uR::synapse0x244e400() {
   return (neuron0x2439ef0()*-0.0521926);
}

double NNfunction_ns_chi01_uR::synapse0x244e440() {
   return (neuron0x243a230()*-0.000352146);
}

double NNfunction_ns_chi01_uR::synapse0x244e480() {
   return (neuron0x243a570()*-0.0175414);
}

double NNfunction_ns_chi01_uR::synapse0x244e4c0() {
   return (neuron0x243a8b0()*-17.217);
}

double NNfunction_ns_chi01_uR::synapse0x244e840() {
   return (neuron0x2435d80()*-0.424985);
}

double NNfunction_ns_chi01_uR::synapse0x244e880() {
   return (neuron0x2436030()*-0.408267);
}

double NNfunction_ns_chi01_uR::synapse0x244e8c0() {
   return (neuron0x2436370()*0.341524);
}

double NNfunction_ns_chi01_uR::synapse0x244e900() {
   return (neuron0x24366b0()*-0.405781);
}

double NNfunction_ns_chi01_uR::synapse0x244e940() {
   return (neuron0x24369f0()*0.600427);
}

double NNfunction_ns_chi01_uR::synapse0x244e980() {
   return (neuron0x2436d30()*-1.42097);
}

double NNfunction_ns_chi01_uR::synapse0x244e9c0() {
   return (neuron0x2437070()*-0.790289);
}

double NNfunction_ns_chi01_uR::synapse0x244ea00() {
   return (neuron0x24373b0()*0.182082);
}

double NNfunction_ns_chi01_uR::synapse0x244ea40() {
   return (neuron0x24376f0()*-0.228548);
}

double NNfunction_ns_chi01_uR::synapse0x244ea80() {
   return (neuron0x2437a30()*0.697405);
}

double NNfunction_ns_chi01_uR::synapse0x244eac0() {
   return (neuron0x2437d70()*0.677917);
}

double NNfunction_ns_chi01_uR::synapse0x244eb00() {
   return (neuron0x24380b0()*-0.106084);
}

double NNfunction_ns_chi01_uR::synapse0x244eb40() {
   return (neuron0x24383f0()*0.370657);
}

double NNfunction_ns_chi01_uR::synapse0x244eb80() {
   return (neuron0x2438730()*-0.034464);
}

double NNfunction_ns_chi01_uR::synapse0x244ebc0() {
   return (neuron0x2438a70()*-3.29554);
}

double NNfunction_ns_chi01_uR::synapse0x244ec00() {
   return (neuron0x2438db0()*-0.0363582);
}

double NNfunction_ns_chi01_uR::synapse0x244e690() {
   return (neuron0x24390f0()*-1.20592);
}

double NNfunction_ns_chi01_uR::synapse0x244e6d0() {
   return (neuron0x2439650()*0.100973);
}

double NNfunction_ns_chi01_uR::synapse0x244ed50() {
   return (neuron0x2439870()*0.575648);
}

double NNfunction_ns_chi01_uR::synapse0x244ed90() {
   return (neuron0x2439bb0()*0.482387);
}

double NNfunction_ns_chi01_uR::synapse0x244edd0() {
   return (neuron0x2439ef0()*-0.658136);
}

double NNfunction_ns_chi01_uR::synapse0x244ee10() {
   return (neuron0x243a230()*0.340848);
}

double NNfunction_ns_chi01_uR::synapse0x244ee50() {
   return (neuron0x243a570()*0.281141);
}

double NNfunction_ns_chi01_uR::synapse0x244ee90() {
   return (neuron0x243a8b0()*-1.21583);
}

double NNfunction_ns_chi01_uR::synapse0x244f210() {
   return (neuron0x2435d80()*0.00362402);
}

double NNfunction_ns_chi01_uR::synapse0x244f250() {
   return (neuron0x2436030()*0.0130392);
}

double NNfunction_ns_chi01_uR::synapse0x244f290() {
   return (neuron0x2436370()*-0.0353713);
}

double NNfunction_ns_chi01_uR::synapse0x244f2d0() {
   return (neuron0x24366b0()*-0.214886);
}

double NNfunction_ns_chi01_uR::synapse0x244f310() {
   return (neuron0x24369f0()*-0.0203023);
}

double NNfunction_ns_chi01_uR::synapse0x244f350() {
   return (neuron0x2436d30()*0.0671823);
}

double NNfunction_ns_chi01_uR::synapse0x244f390() {
   return (neuron0x2437070()*0.133796);
}

double NNfunction_ns_chi01_uR::synapse0x244f3d0() {
   return (neuron0x24373b0()*0.0145058);
}

double NNfunction_ns_chi01_uR::synapse0x244f410() {
   return (neuron0x24376f0()*0.113657);
}

double NNfunction_ns_chi01_uR::synapse0x244f450() {
   return (neuron0x2437a30()*-0.493666);
}

double NNfunction_ns_chi01_uR::synapse0x244f490() {
   return (neuron0x2437d70()*-0.162516);
}

double NNfunction_ns_chi01_uR::synapse0x244f4d0() {
   return (neuron0x24380b0()*0.17398);
}

double NNfunction_ns_chi01_uR::synapse0x244f510() {
   return (neuron0x24383f0()*0.117103);
}

double NNfunction_ns_chi01_uR::synapse0x244f550() {
   return (neuron0x2438730()*-0.0655925);
}

double NNfunction_ns_chi01_uR::synapse0x244f590() {
   return (neuron0x2438a70()*0.83076);
}

double NNfunction_ns_chi01_uR::synapse0x244f5d0() {
   return (neuron0x2438db0()*-0.0123861);
}

double NNfunction_ns_chi01_uR::synapse0x244f060() {
   return (neuron0x24390f0()*-0.048947);
}

double NNfunction_ns_chi01_uR::synapse0x244f0a0() {
   return (neuron0x2439650()*0.249067);
}

double NNfunction_ns_chi01_uR::synapse0x244f720() {
   return (neuron0x2439870()*0.058799);
}

double NNfunction_ns_chi01_uR::synapse0x244f760() {
   return (neuron0x2439bb0()*0.147394);
}

double NNfunction_ns_chi01_uR::synapse0x244f7a0() {
   return (neuron0x2439ef0()*-0.0169995);
}

double NNfunction_ns_chi01_uR::synapse0x244f7e0() {
   return (neuron0x243a230()*-0.0544009);
}

double NNfunction_ns_chi01_uR::synapse0x244f820() {
   return (neuron0x243a570()*-0.0199757);
}

double NNfunction_ns_chi01_uR::synapse0x244f860() {
   return (neuron0x243a8b0()*0.266569);
}

double NNfunction_ns_chi01_uR::synapse0x244fbe0() {
   return (neuron0x2435d80()*0.0228794);
}

double NNfunction_ns_chi01_uR::synapse0x244fc20() {
   return (neuron0x2436030()*-5.62913);
}

double NNfunction_ns_chi01_uR::synapse0x244fc60() {
   return (neuron0x2436370()*-2.15582);
}

double NNfunction_ns_chi01_uR::synapse0x244fca0() {
   return (neuron0x24366b0()*-0.142875);
}

double NNfunction_ns_chi01_uR::synapse0x244fce0() {
   return (neuron0x24369f0()*0.0149405);
}

double NNfunction_ns_chi01_uR::synapse0x244fd20() {
   return (neuron0x2436d30()*-0.0163463);
}

double NNfunction_ns_chi01_uR::synapse0x244fd60() {
   return (neuron0x2437070()*0.173708);
}

double NNfunction_ns_chi01_uR::synapse0x244fda0() {
   return (neuron0x24373b0()*-0.0367275);
}

double NNfunction_ns_chi01_uR::synapse0x244fde0() {
   return (neuron0x24376f0()*0.0938333);
}

double NNfunction_ns_chi01_uR::synapse0x244fe20() {
   return (neuron0x2437a30()*-0.168916);
}

double NNfunction_ns_chi01_uR::synapse0x244fe60() {
   return (neuron0x2437d70()*-0.0417091);
}

double NNfunction_ns_chi01_uR::synapse0x244fea0() {
   return (neuron0x24380b0()*-0.0685122);
}

double NNfunction_ns_chi01_uR::synapse0x244fee0() {
   return (neuron0x24383f0()*0.00739141);
}

double NNfunction_ns_chi01_uR::synapse0x244ff20() {
   return (neuron0x2438730()*-0.0379257);
}

double NNfunction_ns_chi01_uR::synapse0x244ff60() {
   return (neuron0x2438a70()*-0.488552);
}

double NNfunction_ns_chi01_uR::synapse0x244ffa0() {
   return (neuron0x2438db0()*-0.037786);
}

double NNfunction_ns_chi01_uR::synapse0x244fa30() {
   return (neuron0x24390f0()*0.0890327);
}

double NNfunction_ns_chi01_uR::synapse0x244fa70() {
   return (neuron0x2439650()*-0.032211);
}

double NNfunction_ns_chi01_uR::synapse0x24500f0() {
   return (neuron0x2439870()*0.184618);
}

double NNfunction_ns_chi01_uR::synapse0x2450130() {
   return (neuron0x2439bb0()*-0.00614168);
}

double NNfunction_ns_chi01_uR::synapse0x2450170() {
   return (neuron0x2439ef0()*-0.380657);
}

double NNfunction_ns_chi01_uR::synapse0x24501b0() {
   return (neuron0x243a230()*0.0805009);
}

double NNfunction_ns_chi01_uR::synapse0x24501f0() {
   return (neuron0x243a570()*-0.0586582);
}

double NNfunction_ns_chi01_uR::synapse0x2450230() {
   return (neuron0x243a8b0()*-0.233656);
}

double NNfunction_ns_chi01_uR::synapse0x24505b0() {
   return (neuron0x2435d80()*0.192051);
}

double NNfunction_ns_chi01_uR::synapse0x2444b80() {
   return (neuron0x2436030()*0.440269);
}

double NNfunction_ns_chi01_uR::synapse0x2444bc0() {
   return (neuron0x2436370()*-0.186978);
}

double NNfunction_ns_chi01_uR::synapse0x2444c00() {
   return (neuron0x24366b0()*0.598146);
}

double NNfunction_ns_chi01_uR::synapse0x2444e50() {
   return (neuron0x24369f0()*0.0381738);
}

double NNfunction_ns_chi01_uR::synapse0x2444e90() {
   return (neuron0x2436d30()*0.150892);
}

double NNfunction_ns_chi01_uR::synapse0x2444ed0() {
   return (neuron0x2437070()*0.184711);
}

double NNfunction_ns_chi01_uR::synapse0x2445120() {
   return (neuron0x24373b0()*0.171984);
}

double NNfunction_ns_chi01_uR::synapse0x2445160() {
   return (neuron0x24376f0()*-0.00670387);
}

double NNfunction_ns_chi01_uR::synapse0x24453b0() {
   return (neuron0x2437a30()*-0.135);
}

double NNfunction_ns_chi01_uR::synapse0x24453f0() {
   return (neuron0x2437d70()*-0.527777);
}

double NNfunction_ns_chi01_uR::synapse0x2445430() {
   return (neuron0x24380b0()*0.200018);
}

double NNfunction_ns_chi01_uR::synapse0x2445680() {
   return (neuron0x24383f0()*-0.141331);
}

double NNfunction_ns_chi01_uR::synapse0x24456c0() {
   return (neuron0x2438730()*-0.136447);
}

double NNfunction_ns_chi01_uR::synapse0x2445910() {
   return (neuron0x2438a70()*1.51928);
}

double NNfunction_ns_chi01_uR::synapse0x2445950() {
   return (neuron0x2438db0()*-0.262638);
}

double NNfunction_ns_chi01_uR::synapse0x2450400() {
   return (neuron0x24390f0()*0.303504);
}

double NNfunction_ns_chi01_uR::synapse0x2450440() {
   return (neuron0x2439650()*-0.33428);
}

double NNfunction_ns_chi01_uR::synapse0x2445aa0() {
   return (neuron0x2439870()*-0.359092);
}

double NNfunction_ns_chi01_uR::synapse0x2445fb0() {
   return (neuron0x2439bb0()*-0.348328);
}

double NNfunction_ns_chi01_uR::synapse0x2445ff0() {
   return (neuron0x2439ef0()*0.145577);
}

double NNfunction_ns_chi01_uR::synapse0x2446030() {
   return (neuron0x243a230()*-0.102608);
}

double NNfunction_ns_chi01_uR::synapse0x2446280() {
   return (neuron0x243a570()*-0.0830473);
}

double NNfunction_ns_chi01_uR::synapse0x24462c0() {
   return (neuron0x243a8b0()*0.755069);
}

double NNfunction_ns_chi01_uR::synapse0x2445b70() {
   return (neuron0x2435d80()*0.157909);
}

double NNfunction_ns_chi01_uR::synapse0x2445bb0() {
   return (neuron0x2436030()*0.877034);
}

double NNfunction_ns_chi01_uR::synapse0x2445bf0() {
   return (neuron0x2436370()*-2.65624);
}

double NNfunction_ns_chi01_uR::synapse0x2445c30() {
   return (neuron0x24366b0()*0.788712);
}

double NNfunction_ns_chi01_uR::synapse0x24465b0() {
   return (neuron0x24369f0()*-0.231645);
}

double NNfunction_ns_chi01_uR::synapse0x2452900() {
   return (neuron0x2436d30()*-0.608795);
}

double NNfunction_ns_chi01_uR::synapse0x2452940() {
   return (neuron0x2437070()*-0.385549);
}

double NNfunction_ns_chi01_uR::synapse0x2452980() {
   return (neuron0x24373b0()*0.133874);
}

double NNfunction_ns_chi01_uR::synapse0x24529c0() {
   return (neuron0x24376f0()*-0.285961);
}

double NNfunction_ns_chi01_uR::synapse0x2452a00() {
   return (neuron0x2437a30()*0.521865);
}

double NNfunction_ns_chi01_uR::synapse0x2452a40() {
   return (neuron0x2437d70()*-0.71657);
}

double NNfunction_ns_chi01_uR::synapse0x2452a80() {
   return (neuron0x24380b0()*-1.07313);
}

double NNfunction_ns_chi01_uR::synapse0x2452ac0() {
   return (neuron0x24383f0()*-0.598387);
}

double NNfunction_ns_chi01_uR::synapse0x2452b00() {
   return (neuron0x2438730()*-0.621643);
}

double NNfunction_ns_chi01_uR::synapse0x2452b40() {
   return (neuron0x2438a70()*1.29356);
}

double NNfunction_ns_chi01_uR::synapse0x2452b80() {
   return (neuron0x2438db0()*-0.324462);
}

double NNfunction_ns_chi01_uR::synapse0x2446490() {
   return (neuron0x24390f0()*-1.00498);
}

double NNfunction_ns_chi01_uR::synapse0x24464d0() {
   return (neuron0x2439650()*0.767888);
}

double NNfunction_ns_chi01_uR::synapse0x2452cd0() {
   return (neuron0x2439870()*-0.416189);
}

double NNfunction_ns_chi01_uR::synapse0x2452d10() {
   return (neuron0x2439bb0()*-0.0224733);
}

double NNfunction_ns_chi01_uR::synapse0x2452d50() {
   return (neuron0x2439ef0()*-0.708085);
}

double NNfunction_ns_chi01_uR::synapse0x2452d90() {
   return (neuron0x243a230()*0.155163);
}

double NNfunction_ns_chi01_uR::synapse0x2452dd0() {
   return (neuron0x243a570()*-0.337831);
}

double NNfunction_ns_chi01_uR::synapse0x2452e10() {
   return (neuron0x243a8b0()*-0.502509);
}

double NNfunction_ns_chi01_uR::synapse0x2453190() {
   return (neuron0x2435d80()*0.00896034);
}

double NNfunction_ns_chi01_uR::synapse0x24531d0() {
   return (neuron0x2436030()*0.0215142);
}

double NNfunction_ns_chi01_uR::synapse0x2453210() {
   return (neuron0x2436370()*-0.0156697);
}

double NNfunction_ns_chi01_uR::synapse0x2453250() {
   return (neuron0x24366b0()*0.247403);
}

double NNfunction_ns_chi01_uR::synapse0x2453290() {
   return (neuron0x24369f0()*-0.0999198);
}

double NNfunction_ns_chi01_uR::synapse0x24532d0() {
   return (neuron0x2436d30()*-0.21265);
}

double NNfunction_ns_chi01_uR::synapse0x2453310() {
   return (neuron0x2437070()*0.362676);
}

double NNfunction_ns_chi01_uR::synapse0x2453350() {
   return (neuron0x24373b0()*0.213813);
}

double NNfunction_ns_chi01_uR::synapse0x2453390() {
   return (neuron0x24376f0()*0.0840622);
}

double NNfunction_ns_chi01_uR::synapse0x24533d0() {
   return (neuron0x2437a30()*0.00381563);
}

double NNfunction_ns_chi01_uR::synapse0x2453410() {
   return (neuron0x2437d70()*-0.230828);
}

double NNfunction_ns_chi01_uR::synapse0x2453450() {
   return (neuron0x24380b0()*0.128176);
}

double NNfunction_ns_chi01_uR::synapse0x2453490() {
   return (neuron0x24383f0()*0.0426564);
}

double NNfunction_ns_chi01_uR::synapse0x24534d0() {
   return (neuron0x2438730()*-0.100208);
}

double NNfunction_ns_chi01_uR::synapse0x2453510() {
   return (neuron0x2438a70()*2.59427);
}

double NNfunction_ns_chi01_uR::synapse0x2453550() {
   return (neuron0x2438db0()*-0.677858);
}

double NNfunction_ns_chi01_uR::synapse0x2452fe0() {
   return (neuron0x24390f0()*0.00244211);
}

double NNfunction_ns_chi01_uR::synapse0x2453020() {
   return (neuron0x2439650()*-0.0437283);
}

double NNfunction_ns_chi01_uR::synapse0x24536a0() {
   return (neuron0x2439870()*-0.0112186);
}

double NNfunction_ns_chi01_uR::synapse0x24536e0() {
   return (neuron0x2439bb0()*-0.0688655);
}

double NNfunction_ns_chi01_uR::synapse0x2453720() {
   return (neuron0x2439ef0()*-0.0351482);
}

double NNfunction_ns_chi01_uR::synapse0x2453760() {
   return (neuron0x243a230()*0.0617142);
}

double NNfunction_ns_chi01_uR::synapse0x24537a0() {
   return (neuron0x243a570()*-0.023101);
}

double NNfunction_ns_chi01_uR::synapse0x24537e0() {
   return (neuron0x243a8b0()*0.957244);
}

double NNfunction_ns_chi01_uR::synapse0x2453b60() {
   return (neuron0x2435d80()*-0.0800104);
}

double NNfunction_ns_chi01_uR::synapse0x2453ba0() {
   return (neuron0x2436030()*9.88664);
}

double NNfunction_ns_chi01_uR::synapse0x2453be0() {
   return (neuron0x2436370()*9.83647);
}

double NNfunction_ns_chi01_uR::synapse0x2453c20() {
   return (neuron0x24366b0()*0.0406456);
}

double NNfunction_ns_chi01_uR::synapse0x2453c60() {
   return (neuron0x24369f0()*0.0112697);
}

double NNfunction_ns_chi01_uR::synapse0x2453ca0() {
   return (neuron0x2436d30()*0.0577469);
}

double NNfunction_ns_chi01_uR::synapse0x2453ce0() {
   return (neuron0x2437070()*-0.0506752);
}

double NNfunction_ns_chi01_uR::synapse0x2453d20() {
   return (neuron0x24373b0()*0.0368161);
}

double NNfunction_ns_chi01_uR::synapse0x2453d60() {
   return (neuron0x24376f0()*-0.0589366);
}

double NNfunction_ns_chi01_uR::synapse0x2453da0() {
   return (neuron0x2437a30()*0.0836133);
}

double NNfunction_ns_chi01_uR::synapse0x2453de0() {
   return (neuron0x2437d70()*0.0207394);
}

double NNfunction_ns_chi01_uR::synapse0x2453e20() {
   return (neuron0x24380b0()*0.107649);
}

double NNfunction_ns_chi01_uR::synapse0x2453e60() {
   return (neuron0x24383f0()*0.0354232);
}

double NNfunction_ns_chi01_uR::synapse0x2453ea0() {
   return (neuron0x2438730()*-0.00293275);
}

double NNfunction_ns_chi01_uR::synapse0x2453ee0() {
   return (neuron0x2438a70()*0.453713);
}

double NNfunction_ns_chi01_uR::synapse0x2453f20() {
   return (neuron0x2438db0()*-0.000790333);
}

double NNfunction_ns_chi01_uR::synapse0x24539b0() {
   return (neuron0x24390f0()*0.0508939);
}

double NNfunction_ns_chi01_uR::synapse0x24539f0() {
   return (neuron0x2439650()*-0.0108881);
}

double NNfunction_ns_chi01_uR::synapse0x2454070() {
   return (neuron0x2439870()*0.0321938);
}

double NNfunction_ns_chi01_uR::synapse0x24540b0() {
   return (neuron0x2439bb0()*0.0395292);
}

double NNfunction_ns_chi01_uR::synapse0x24540f0() {
   return (neuron0x2439ef0()*0.161461);
}

double NNfunction_ns_chi01_uR::synapse0x2454130() {
   return (neuron0x243a230()*0.01091);
}

double NNfunction_ns_chi01_uR::synapse0x2454170() {
   return (neuron0x243a570()*-0.0431483);
}

double NNfunction_ns_chi01_uR::synapse0x24541b0() {
   return (neuron0x243a8b0()*-0.0598145);
}

double NNfunction_ns_chi01_uR::synapse0x2454530() {
   return (neuron0x2435d80()*-0.0486061);
}

double NNfunction_ns_chi01_uR::synapse0x2454570() {
   return (neuron0x2436030()*0.0456473);
}

double NNfunction_ns_chi01_uR::synapse0x24545b0() {
   return (neuron0x2436370()*0.00399488);
}

double NNfunction_ns_chi01_uR::synapse0x24545f0() {
   return (neuron0x24366b0()*2.65638);
}

double NNfunction_ns_chi01_uR::synapse0x2454630() {
   return (neuron0x24369f0()*0.000237029);
}

double NNfunction_ns_chi01_uR::synapse0x2454670() {
   return (neuron0x2436d30()*0.0085163);
}

double NNfunction_ns_chi01_uR::synapse0x24546b0() {
   return (neuron0x2437070()*0.000304272);
}

double NNfunction_ns_chi01_uR::synapse0x24546f0() {
   return (neuron0x24373b0()*0.048755);
}

double NNfunction_ns_chi01_uR::synapse0x2454730() {
   return (neuron0x24376f0()*0.0232173);
}

double NNfunction_ns_chi01_uR::synapse0x2454770() {
   return (neuron0x2437a30()*0.0086876);
}

double NNfunction_ns_chi01_uR::synapse0x24547b0() {
   return (neuron0x2437d70()*0.0674901);
}

double NNfunction_ns_chi01_uR::synapse0x24547f0() {
   return (neuron0x24380b0()*0.0713966);
}

double NNfunction_ns_chi01_uR::synapse0x2454830() {
   return (neuron0x24383f0()*0.0671106);
}

double NNfunction_ns_chi01_uR::synapse0x2454870() {
   return (neuron0x2438730()*-0.014258);
}

double NNfunction_ns_chi01_uR::synapse0x24548b0() {
   return (neuron0x2438a70()*-0.0129037);
}

double NNfunction_ns_chi01_uR::synapse0x24548f0() {
   return (neuron0x2438db0()*0.00894703);
}

double NNfunction_ns_chi01_uR::synapse0x2454380() {
   return (neuron0x24390f0()*-0.031979);
}

double NNfunction_ns_chi01_uR::synapse0x24543c0() {
   return (neuron0x2439650()*0.0427697);
}

double NNfunction_ns_chi01_uR::synapse0x2454a40() {
   return (neuron0x2439870()*0.0598269);
}

double NNfunction_ns_chi01_uR::synapse0x2454a80() {
   return (neuron0x2439bb0()*0.0544476);
}

double NNfunction_ns_chi01_uR::synapse0x2454ac0() {
   return (neuron0x2439ef0()*-0.00644084);
}

double NNfunction_ns_chi01_uR::synapse0x2454b00() {
   return (neuron0x243a230()*0.0318875);
}

double NNfunction_ns_chi01_uR::synapse0x2454b40() {
   return (neuron0x243a570()*0.0224554);
}

double NNfunction_ns_chi01_uR::synapse0x2454b80() {
   return (neuron0x243a8b0()*0.0665759);
}

double NNfunction_ns_chi01_uR::synapse0x2454f00() {
   return (neuron0x2435d80()*-1.50111);
}

double NNfunction_ns_chi01_uR::synapse0x2454f40() {
   return (neuron0x2436030()*-0.724096);
}

double NNfunction_ns_chi01_uR::synapse0x2454f80() {
   return (neuron0x2436370()*1.78464);
}

double NNfunction_ns_chi01_uR::synapse0x2454fc0() {
   return (neuron0x24366b0()*-0.665719);
}

double NNfunction_ns_chi01_uR::synapse0x2455000() {
   return (neuron0x24369f0()*1.37723);
}

double NNfunction_ns_chi01_uR::synapse0x2455040() {
   return (neuron0x2436d30()*-0.200526);
}

double NNfunction_ns_chi01_uR::synapse0x2455080() {
   return (neuron0x2437070()*-0.10287);
}

double NNfunction_ns_chi01_uR::synapse0x24550c0() {
   return (neuron0x24373b0()*0.267567);
}

double NNfunction_ns_chi01_uR::synapse0x2455100() {
   return (neuron0x24376f0()*0.44646);
}

double NNfunction_ns_chi01_uR::synapse0x2455140() {
   return (neuron0x2437a30()*-0.319896);
}

double NNfunction_ns_chi01_uR::synapse0x2455180() {
   return (neuron0x2437d70()*0.723496);
}

double NNfunction_ns_chi01_uR::synapse0x24551c0() {
   return (neuron0x24380b0()*-0.0653332);
}

double NNfunction_ns_chi01_uR::synapse0x2455200() {
   return (neuron0x24383f0()*-0.424252);
}

double NNfunction_ns_chi01_uR::synapse0x2455240() {
   return (neuron0x2438730()*1.39347);
}

double NNfunction_ns_chi01_uR::synapse0x2455280() {
   return (neuron0x2438a70()*-0.168982);
}

double NNfunction_ns_chi01_uR::synapse0x24552c0() {
   return (neuron0x2438db0()*-0.675147);
}

double NNfunction_ns_chi01_uR::synapse0x2454d50() {
   return (neuron0x24390f0()*-0.0436338);
}

double NNfunction_ns_chi01_uR::synapse0x2454d90() {
   return (neuron0x2439650()*-1.00731);
}

double NNfunction_ns_chi01_uR::synapse0x2455410() {
   return (neuron0x2439870()*-0.657106);
}

double NNfunction_ns_chi01_uR::synapse0x2455450() {
   return (neuron0x2439bb0()*-0.289681);
}

double NNfunction_ns_chi01_uR::synapse0x2455490() {
   return (neuron0x2439ef0()*0.8291);
}

double NNfunction_ns_chi01_uR::synapse0x24554d0() {
   return (neuron0x243a230()*0.867463);
}

double NNfunction_ns_chi01_uR::synapse0x2455510() {
   return (neuron0x243a570()*-0.809411);
}

double NNfunction_ns_chi01_uR::synapse0x2455550() {
   return (neuron0x243a8b0()*-1.80466);
}

double NNfunction_ns_chi01_uR::synapse0x24558d0() {
   return (neuron0x2435d80()*0.0720815);
}

double NNfunction_ns_chi01_uR::synapse0x2455910() {
   return (neuron0x2436030()*-14.3661);
}

double NNfunction_ns_chi01_uR::synapse0x2455950() {
   return (neuron0x2436370()*-1.52696);
}

double NNfunction_ns_chi01_uR::synapse0x2455990() {
   return (neuron0x24366b0()*-0.0525867);
}

double NNfunction_ns_chi01_uR::synapse0x24559d0() {
   return (neuron0x24369f0()*-0.0162729);
}

double NNfunction_ns_chi01_uR::synapse0x2455a10() {
   return (neuron0x2436d30()*-0.0300651);
}

double NNfunction_ns_chi01_uR::synapse0x2455a50() {
   return (neuron0x2437070()*0.0525433);
}

double NNfunction_ns_chi01_uR::synapse0x2455a90() {
   return (neuron0x24373b0()*0.00556574);
}

double NNfunction_ns_chi01_uR::synapse0x2455ad0() {
   return (neuron0x24376f0()*0.0401576);
}

double NNfunction_ns_chi01_uR::synapse0x2455b10() {
   return (neuron0x2437a30()*-0.0402662);
}

double NNfunction_ns_chi01_uR::synapse0x2455b50() {
   return (neuron0x2437d70()*-0.0388974);
}

double NNfunction_ns_chi01_uR::synapse0x2455b90() {
   return (neuron0x24380b0()*-0.00312778);
}

double NNfunction_ns_chi01_uR::synapse0x2455bd0() {
   return (neuron0x24383f0()*0.00697888);
}

double NNfunction_ns_chi01_uR::synapse0x2455c10() {
   return (neuron0x2438730()*-0.001627);
}

double NNfunction_ns_chi01_uR::synapse0x2455c50() {
   return (neuron0x2438a70()*-0.274883);
}

double NNfunction_ns_chi01_uR::synapse0x2455c90() {
   return (neuron0x2438db0()*0.0284774);
}

double NNfunction_ns_chi01_uR::synapse0x2455720() {
   return (neuron0x24390f0()*-0.0366671);
}

double NNfunction_ns_chi01_uR::synapse0x2455760() {
   return (neuron0x2439650()*-0.0481039);
}

double NNfunction_ns_chi01_uR::synapse0x2455de0() {
   return (neuron0x2439870()*-0.0302023);
}

double NNfunction_ns_chi01_uR::synapse0x2455e20() {
   return (neuron0x2439bb0()*-0.00795674);
}

double NNfunction_ns_chi01_uR::synapse0x2455e60() {
   return (neuron0x2439ef0()*0.0906618);
}

double NNfunction_ns_chi01_uR::synapse0x2455ea0() {
   return (neuron0x243a230()*-0.0359102);
}

double NNfunction_ns_chi01_uR::synapse0x2455ee0() {
   return (neuron0x243a570()*0.0231161);
}

double NNfunction_ns_chi01_uR::synapse0x2455f20() {
   return (neuron0x243a8b0()*-0.0412833);
}

double NNfunction_ns_chi01_uR::synapse0x24562a0() {
   return (neuron0x2435d80()*0.219415);
}

double NNfunction_ns_chi01_uR::synapse0x24562e0() {
   return (neuron0x2436030()*0.0874922);
}

double NNfunction_ns_chi01_uR::synapse0x2456320() {
   return (neuron0x2436370()*0.418701);
}

double NNfunction_ns_chi01_uR::synapse0x2456360() {
   return (neuron0x24366b0()*-1.72522);
}

double NNfunction_ns_chi01_uR::synapse0x24563a0() {
   return (neuron0x24369f0()*0.299664);
}

double NNfunction_ns_chi01_uR::synapse0x24563e0() {
   return (neuron0x2436d30()*-0.209801);
}

double NNfunction_ns_chi01_uR::synapse0x2456420() {
   return (neuron0x2437070()*-0.319657);
}

double NNfunction_ns_chi01_uR::synapse0x2456460() {
   return (neuron0x24373b0()*1.65406);
}

double NNfunction_ns_chi01_uR::synapse0x24564a0() {
   return (neuron0x24376f0()*-0.401268);
}

double NNfunction_ns_chi01_uR::synapse0x24564e0() {
   return (neuron0x2437a30()*-2.18564);
}

double NNfunction_ns_chi01_uR::synapse0x2456520() {
   return (neuron0x2437d70()*-1.42698);
}

double NNfunction_ns_chi01_uR::synapse0x2456560() {
   return (neuron0x24380b0()*-0.333562);
}

double NNfunction_ns_chi01_uR::synapse0x24565a0() {
   return (neuron0x24383f0()*-0.212715);
}

double NNfunction_ns_chi01_uR::synapse0x24565e0() {
   return (neuron0x2438730()*-0.669252);
}

double NNfunction_ns_chi01_uR::synapse0x2456620() {
   return (neuron0x2438a70()*0.928856);
}

double NNfunction_ns_chi01_uR::synapse0x2456660() {
   return (neuron0x2438db0()*2.09129);
}

double NNfunction_ns_chi01_uR::synapse0x24560f0() {
   return (neuron0x24390f0()*0.641995);
}

double NNfunction_ns_chi01_uR::synapse0x2456130() {
   return (neuron0x2439650()*-0.288838);
}

double NNfunction_ns_chi01_uR::synapse0x24567b0() {
   return (neuron0x2439870()*0.969635);
}

double NNfunction_ns_chi01_uR::synapse0x24567f0() {
   return (neuron0x2439bb0()*-0.229605);
}

double NNfunction_ns_chi01_uR::synapse0x2456830() {
   return (neuron0x2439ef0()*0.147382);
}

double NNfunction_ns_chi01_uR::synapse0x2456870() {
   return (neuron0x243a230()*-0.41765);
}

double NNfunction_ns_chi01_uR::synapse0x24568b0() {
   return (neuron0x243a570()*-1.26512);
}

double NNfunction_ns_chi01_uR::synapse0x24568f0() {
   return (neuron0x243a8b0()*-0.863693);
}

double NNfunction_ns_chi01_uR::synapse0x2456c70() {
   return (neuron0x2435d80()*-0.0772378);
}

double NNfunction_ns_chi01_uR::synapse0x2456cb0() {
   return (neuron0x2436030()*-0.0270794);
}

double NNfunction_ns_chi01_uR::synapse0x2456cf0() {
   return (neuron0x2436370()*-0.530968);
}

double NNfunction_ns_chi01_uR::synapse0x2456d30() {
   return (neuron0x24366b0()*0.835833);
}

double NNfunction_ns_chi01_uR::synapse0x2456d70() {
   return (neuron0x24369f0()*-0.62897);
}

double NNfunction_ns_chi01_uR::synapse0x2456db0() {
   return (neuron0x2436d30()*-0.0550077);
}

double NNfunction_ns_chi01_uR::synapse0x2456df0() {
   return (neuron0x2437070()*-0.280619);
}

double NNfunction_ns_chi01_uR::synapse0x2456e30() {
   return (neuron0x24373b0()*-0.209753);
}

double NNfunction_ns_chi01_uR::synapse0x2456e70() {
   return (neuron0x24376f0()*-0.347559);
}

double NNfunction_ns_chi01_uR::synapse0x2456eb0() {
   return (neuron0x2437a30()*0.323749);
}

double NNfunction_ns_chi01_uR::synapse0x2456ef0() {
   return (neuron0x2437d70()*-0.12601);
}

double NNfunction_ns_chi01_uR::synapse0x2456f30() {
   return (neuron0x24380b0()*-0.166488);
}

double NNfunction_ns_chi01_uR::synapse0x2456f70() {
   return (neuron0x24383f0()*-1.62927);
}

double NNfunction_ns_chi01_uR::synapse0x2456fb0() {
   return (neuron0x2438730()*-0.187424);
}

double NNfunction_ns_chi01_uR::synapse0x2456ff0() {
   return (neuron0x2438a70()*0.823997);
}

double NNfunction_ns_chi01_uR::synapse0x2457030() {
   return (neuron0x2438db0()*0.0660113);
}

double NNfunction_ns_chi01_uR::synapse0x2456ac0() {
   return (neuron0x24390f0()*-0.178734);
}

double NNfunction_ns_chi01_uR::synapse0x2456b00() {
   return (neuron0x2439650()*0.300911);
}

double NNfunction_ns_chi01_uR::synapse0x2457180() {
   return (neuron0x2439870()*0.435784);
}

double NNfunction_ns_chi01_uR::synapse0x24571c0() {
   return (neuron0x2439bb0()*0.280706);
}

double NNfunction_ns_chi01_uR::synapse0x2457200() {
   return (neuron0x2439ef0()*-0.218948);
}

double NNfunction_ns_chi01_uR::synapse0x2457240() {
   return (neuron0x243a230()*-0.101085);
}

double NNfunction_ns_chi01_uR::synapse0x2457280() {
   return (neuron0x243a570()*0.177052);
}

double NNfunction_ns_chi01_uR::synapse0x24572c0() {
   return (neuron0x243a8b0()*0.551359);
}

double NNfunction_ns_chi01_uR::synapse0x243fd70() {
   return (neuron0x2435d80()*0.0334946);
}

double NNfunction_ns_chi01_uR::synapse0x243fdb0() {
   return (neuron0x2436030()*0.0134341);
}

double NNfunction_ns_chi01_uR::synapse0x243fdf0() {
   return (neuron0x2436370()*-0.0761521);
}

double NNfunction_ns_chi01_uR::synapse0x243fe30() {
   return (neuron0x24366b0()*0.0151866);
}

double NNfunction_ns_chi01_uR::synapse0x243fe70() {
   return (neuron0x24369f0()*0.128644);
}

double NNfunction_ns_chi01_uR::synapse0x243feb0() {
   return (neuron0x2436d30()*0.0519774);
}

double NNfunction_ns_chi01_uR::synapse0x243fef0() {
   return (neuron0x2437070()*-0.160571);
}

double NNfunction_ns_chi01_uR::synapse0x243ff30() {
   return (neuron0x24373b0()*0.330997);
}

double NNfunction_ns_chi01_uR::synapse0x2457a50() {
   return (neuron0x24376f0()*0.0160695);
}

double NNfunction_ns_chi01_uR::synapse0x2457a90() {
   return (neuron0x2437a30()*0.0172785);
}

double NNfunction_ns_chi01_uR::synapse0x2457ad0() {
   return (neuron0x2437d70()*-0.0217605);
}

double NNfunction_ns_chi01_uR::synapse0x2457b10() {
   return (neuron0x24380b0()*0.0484573);
}

double NNfunction_ns_chi01_uR::synapse0x2457b50() {
   return (neuron0x24383f0()*-0.015422);
}

double NNfunction_ns_chi01_uR::synapse0x2457b90() {
   return (neuron0x2438730()*0.0230145);
}

double NNfunction_ns_chi01_uR::synapse0x2457bd0() {
   return (neuron0x2438a70()*-0.867214);
}

double NNfunction_ns_chi01_uR::synapse0x2457c10() {
   return (neuron0x2438db0()*0.018557);
}

double NNfunction_ns_chi01_uR::synapse0x2457490() {
   return (neuron0x24390f0()*0.120268);
}

double NNfunction_ns_chi01_uR::synapse0x24574d0() {
   return (neuron0x2439650()*-0.0277181);
}

double NNfunction_ns_chi01_uR::synapse0x2457d60() {
   return (neuron0x2439870()*-0.00743548);
}

double NNfunction_ns_chi01_uR::synapse0x2457da0() {
   return (neuron0x2439bb0()*-0.026188);
}

double NNfunction_ns_chi01_uR::synapse0x2457de0() {
   return (neuron0x2439ef0()*0.0586672);
}

double NNfunction_ns_chi01_uR::synapse0x2457e20() {
   return (neuron0x243a230()*0.026277);
}

double NNfunction_ns_chi01_uR::synapse0x2457e60() {
   return (neuron0x243a570()*0.00393866);
}

double NNfunction_ns_chi01_uR::synapse0x2457ea0() {
   return (neuron0x243a8b0()*0.0899725);
}

double NNfunction_ns_chi01_uR::synapse0x2458220() {
   return (neuron0x2435d80()*-0.0252794);
}

double NNfunction_ns_chi01_uR::synapse0x2458260() {
   return (neuron0x2436030()*0.0243883);
}

double NNfunction_ns_chi01_uR::synapse0x24582a0() {
   return (neuron0x2436370()*-0.0302074);
}

double NNfunction_ns_chi01_uR::synapse0x24582e0() {
   return (neuron0x24366b0()*-2.84003);
}

double NNfunction_ns_chi01_uR::synapse0x2458320() {
   return (neuron0x24369f0()*0.0134222);
}

double NNfunction_ns_chi01_uR::synapse0x2458360() {
   return (neuron0x2436d30()*0.0136537);
}

double NNfunction_ns_chi01_uR::synapse0x24583a0() {
   return (neuron0x2437070()*0.00434981);
}

double NNfunction_ns_chi01_uR::synapse0x24583e0() {
   return (neuron0x24373b0()*0.00388014);
}

double NNfunction_ns_chi01_uR::synapse0x2458420() {
   return (neuron0x24376f0()*0.0114673);
}

double NNfunction_ns_chi01_uR::synapse0x2458460() {
   return (neuron0x2437a30()*0.0118706);
}

double NNfunction_ns_chi01_uR::synapse0x24584a0() {
   return (neuron0x2437d70()*0.0245706);
}

double NNfunction_ns_chi01_uR::synapse0x24584e0() {
   return (neuron0x24380b0()*0.0163176);
}

double NNfunction_ns_chi01_uR::synapse0x2458520() {
   return (neuron0x24383f0()*0.0247653);
}

double NNfunction_ns_chi01_uR::synapse0x2458560() {
   return (neuron0x2438730()*0.0202329);
}

double NNfunction_ns_chi01_uR::synapse0x24585a0() {
   return (neuron0x2438a70()*0.219342);
}

double NNfunction_ns_chi01_uR::synapse0x24585e0() {
   return (neuron0x2438db0()*-0.036985);
}

double NNfunction_ns_chi01_uR::synapse0x2458070() {
   return (neuron0x24390f0()*0.0112541);
}

double NNfunction_ns_chi01_uR::synapse0x24580b0() {
   return (neuron0x2439650()*0.0265249);
}

double NNfunction_ns_chi01_uR::synapse0x2458730() {
   return (neuron0x2439870()*0.0299777);
}

double NNfunction_ns_chi01_uR::synapse0x2458770() {
   return (neuron0x2439bb0()*0.0138235);
}

double NNfunction_ns_chi01_uR::synapse0x24587b0() {
   return (neuron0x2439ef0()*0.0042203);
}

double NNfunction_ns_chi01_uR::synapse0x24587f0() {
   return (neuron0x243a230()*0.0181227);
}

double NNfunction_ns_chi01_uR::synapse0x2458830() {
   return (neuron0x243a570()*-0.0113481);
}

double NNfunction_ns_chi01_uR::synapse0x2458870() {
   return (neuron0x243a8b0()*-0.0114644);
}

double NNfunction_ns_chi01_uR::synapse0x2458bf0() {
   return (neuron0x2435d80()*-0.0379862);
}

double NNfunction_ns_chi01_uR::synapse0x2458c30() {
   return (neuron0x2436030()*1.0958);
}

double NNfunction_ns_chi01_uR::synapse0x2458c70() {
   return (neuron0x2436370()*-0.0668765);
}

double NNfunction_ns_chi01_uR::synapse0x2458cb0() {
   return (neuron0x24366b0()*-0.0181794);
}

double NNfunction_ns_chi01_uR::synapse0x2458cf0() {
   return (neuron0x24369f0()*-0.0212829);
}

double NNfunction_ns_chi01_uR::synapse0x2458d30() {
   return (neuron0x2436d30()*0.0245891);
}

double NNfunction_ns_chi01_uR::synapse0x2458d70() {
   return (neuron0x2437070()*-0.0134807);
}

double NNfunction_ns_chi01_uR::synapse0x2458db0() {
   return (neuron0x24373b0()*0.0281509);
}

double NNfunction_ns_chi01_uR::synapse0x2458df0() {
   return (neuron0x24376f0()*-0.00962859);
}

double NNfunction_ns_chi01_uR::synapse0x2458e30() {
   return (neuron0x2437a30()*-0.00172893);
}

double NNfunction_ns_chi01_uR::synapse0x2458e70() {
   return (neuron0x2437d70()*0.00144647);
}

double NNfunction_ns_chi01_uR::synapse0x2458eb0() {
   return (neuron0x24380b0()*0.0175798);
}

double NNfunction_ns_chi01_uR::synapse0x2458ef0() {
   return (neuron0x24383f0()*-0.0100688);
}

double NNfunction_ns_chi01_uR::synapse0x2458f30() {
   return (neuron0x2438730()*-0.0195268);
}

double NNfunction_ns_chi01_uR::synapse0x2458f70() {
   return (neuron0x2438a70()*0.371312);
}

double NNfunction_ns_chi01_uR::synapse0x2458fb0() {
   return (neuron0x2438db0()*0.00516708);
}

double NNfunction_ns_chi01_uR::synapse0x2458a40() {
   return (neuron0x24390f0()*0.0166214);
}

double NNfunction_ns_chi01_uR::synapse0x2458a80() {
   return (neuron0x2439650()*-0.00410802);
}

double NNfunction_ns_chi01_uR::synapse0x24495b0() {
   return (neuron0x2439870()*0.00829087);
}

double NNfunction_ns_chi01_uR::synapse0x24495f0() {
   return (neuron0x2439bb0()*-0.0020438);
}

double NNfunction_ns_chi01_uR::synapse0x2449630() {
   return (neuron0x2439ef0()*0.0182763);
}

double NNfunction_ns_chi01_uR::synapse0x2449670() {
   return (neuron0x243a230()*0.00663701);
}

double NNfunction_ns_chi01_uR::synapse0x24496b0() {
   return (neuron0x243a570()*0.00550258);
}

double NNfunction_ns_chi01_uR::synapse0x24496f0() {
   return (neuron0x243a8b0()*-0.0558449);
}

double NNfunction_ns_chi01_uR::synapse0x2449a70() {
   return (neuron0x2435d80()*0.666854);
}

double NNfunction_ns_chi01_uR::synapse0x2449ab0() {
   return (neuron0x2436030()*0.0553672);
}

double NNfunction_ns_chi01_uR::synapse0x2449af0() {
   return (neuron0x2436370()*0.274012);
}

double NNfunction_ns_chi01_uR::synapse0x2449b30() {
   return (neuron0x24366b0()*-0.405738);
}

double NNfunction_ns_chi01_uR::synapse0x2449b70() {
   return (neuron0x24369f0()*0.600995);
}

double NNfunction_ns_chi01_uR::synapse0x2449bb0() {
   return (neuron0x2436d30()*0.4444);
}

double NNfunction_ns_chi01_uR::synapse0x2449bf0() {
   return (neuron0x2437070()*-0.0962541);
}

double NNfunction_ns_chi01_uR::synapse0x2449c30() {
   return (neuron0x24373b0()*0.00795844);
}

double NNfunction_ns_chi01_uR::synapse0x2449c70() {
   return (neuron0x24376f0()*0.43207);
}

double NNfunction_ns_chi01_uR::synapse0x2449cb0() {
   return (neuron0x2437a30()*-0.817564);
}

double NNfunction_ns_chi01_uR::synapse0x2449cf0() {
   return (neuron0x2437d70()*1.5967);
}

double NNfunction_ns_chi01_uR::synapse0x2449d30() {
   return (neuron0x24380b0()*0.695674);
}

double NNfunction_ns_chi01_uR::synapse0x2449d70() {
   return (neuron0x24383f0()*-0.735806);
}

double NNfunction_ns_chi01_uR::synapse0x2449db0() {
   return (neuron0x2438730()*0.536258);
}

double NNfunction_ns_chi01_uR::synapse0x2449df0() {
   return (neuron0x2438a70()*-1.89858);
}

double NNfunction_ns_chi01_uR::synapse0x2449e30() {
   return (neuron0x2438db0()*0.543265);
}

double NNfunction_ns_chi01_uR::synapse0x24498c0() {
   return (neuron0x24390f0()*0.521059);
}

double NNfunction_ns_chi01_uR::synapse0x2449900() {
   return (neuron0x2439650()*-0.400744);
}

double NNfunction_ns_chi01_uR::synapse0x2449f80() {
   return (neuron0x2439870()*-0.512325);
}

double NNfunction_ns_chi01_uR::synapse0x2449fc0() {
   return (neuron0x2439bb0()*-0.294403);
}

double NNfunction_ns_chi01_uR::synapse0x244a000() {
   return (neuron0x2439ef0()*0.268689);
}

double NNfunction_ns_chi01_uR::synapse0x244a040() {
   return (neuron0x243a230()*0.0292023);
}

double NNfunction_ns_chi01_uR::synapse0x244a080() {
   return (neuron0x243a570()*-0.258314);
}

double NNfunction_ns_chi01_uR::synapse0x244a0c0() {
   return (neuron0x243a8b0()*-0.857792);
}

double NNfunction_ns_chi01_uR::synapse0x244a440() {
   return (neuron0x2435d80()*0.0141394);
}

double NNfunction_ns_chi01_uR::synapse0x244a480() {
   return (neuron0x2436030()*-0.0106852);
}

double NNfunction_ns_chi01_uR::synapse0x244a4c0() {
   return (neuron0x2436370()*-0.0701724);
}

double NNfunction_ns_chi01_uR::synapse0x244a500() {
   return (neuron0x24366b0()*0.0122531);
}

double NNfunction_ns_chi01_uR::synapse0x244a540() {
   return (neuron0x24369f0()*0.111954);
}

double NNfunction_ns_chi01_uR::synapse0x244a580() {
   return (neuron0x2436d30()*0.00678625);
}

double NNfunction_ns_chi01_uR::synapse0x244a5c0() {
   return (neuron0x2437070()*-0.090111);
}

double NNfunction_ns_chi01_uR::synapse0x244a600() {
   return (neuron0x24373b0()*-0.100115);
}

double NNfunction_ns_chi01_uR::synapse0x244a640() {
   return (neuron0x24376f0()*-0.00583736);
}

double NNfunction_ns_chi01_uR::synapse0x244a680() {
   return (neuron0x2437a30()*-0.0218161);
}

double NNfunction_ns_chi01_uR::synapse0x244a6c0() {
   return (neuron0x2437d70()*-0.0103939);
}

double NNfunction_ns_chi01_uR::synapse0x244a700() {
   return (neuron0x24380b0()*-0.0288544);
}

double NNfunction_ns_chi01_uR::synapse0x244a740() {
   return (neuron0x24383f0()*0.036867);
}

double NNfunction_ns_chi01_uR::synapse0x244a780() {
   return (neuron0x2438730()*-0.0346813);
}

double NNfunction_ns_chi01_uR::synapse0x244a7c0() {
   return (neuron0x2438a70()*-3.49344);
}

double NNfunction_ns_chi01_uR::synapse0x244a800() {
   return (neuron0x2438db0()*-0.211224);
}

double NNfunction_ns_chi01_uR::synapse0x244a290() {
   return (neuron0x24390f0()*-0.0320779);
}

double NNfunction_ns_chi01_uR::synapse0x244a2d0() {
   return (neuron0x2439650()*0.00926609);
}

double NNfunction_ns_chi01_uR::synapse0x244a950() {
   return (neuron0x2439870()*0.0209929);
}

double NNfunction_ns_chi01_uR::synapse0x244a990() {
   return (neuron0x2439bb0()*0.0249385);
}

double NNfunction_ns_chi01_uR::synapse0x244a9d0() {
   return (neuron0x2439ef0()*0.0116605);
}

double NNfunction_ns_chi01_uR::synapse0x244aa10() {
   return (neuron0x243a230()*0.0194824);
}

double NNfunction_ns_chi01_uR::synapse0x244aa50() {
   return (neuron0x243a570()*-0.0376309);
}

double NNfunction_ns_chi01_uR::synapse0x244aa90() {
   return (neuron0x243a8b0()*0.00962774);
}

double NNfunction_ns_chi01_uR::synapse0x244ae10() {
   return (neuron0x2435d80()*-0.0776149);
}

double NNfunction_ns_chi01_uR::synapse0x244ae50() {
   return (neuron0x2436030()*5.413);
}

double NNfunction_ns_chi01_uR::synapse0x244ae90() {
   return (neuron0x2436370()*-0.122489);
}

double NNfunction_ns_chi01_uR::synapse0x244aed0() {
   return (neuron0x24366b0()*0.00180719);
}

double NNfunction_ns_chi01_uR::synapse0x244af10() {
   return (neuron0x24369f0()*-0.00207897);
}

double NNfunction_ns_chi01_uR::synapse0x244af50() {
   return (neuron0x2436d30()*0.00396582);
}

double NNfunction_ns_chi01_uR::synapse0x244af90() {
   return (neuron0x2437070()*0.0248505);
}

double NNfunction_ns_chi01_uR::synapse0x244afd0() {
   return (neuron0x24373b0()*0.00391424);
}

double NNfunction_ns_chi01_uR::synapse0x244b010() {
   return (neuron0x24376f0()*0.0098927);
}

double NNfunction_ns_chi01_uR::synapse0x244b050() {
   return (neuron0x2437a30()*-0.0139607);
}

double NNfunction_ns_chi01_uR::synapse0x244b090() {
   return (neuron0x2437d70()*-0.0153818);
}

double NNfunction_ns_chi01_uR::synapse0x244b0d0() {
   return (neuron0x24380b0()*-0.00513044);
}

double NNfunction_ns_chi01_uR::synapse0x244b110() {
   return (neuron0x24383f0()*-0.000674169);
}

double NNfunction_ns_chi01_uR::synapse0x244b150() {
   return (neuron0x2438730()*-0.0539818);
}

double NNfunction_ns_chi01_uR::synapse0x244b190() {
   return (neuron0x2438a70()*0.166978);
}

double NNfunction_ns_chi01_uR::synapse0x244b1d0() {
   return (neuron0x2438db0()*0.00865264);
}

double NNfunction_ns_chi01_uR::synapse0x244ac60() {
   return (neuron0x24390f0()*0.0188152);
}

double NNfunction_ns_chi01_uR::synapse0x244aca0() {
   return (neuron0x2439650()*0.0032499);
}

double NNfunction_ns_chi01_uR::synapse0x244b320() {
   return (neuron0x2439870()*0.0206962);
}

double NNfunction_ns_chi01_uR::synapse0x244b360() {
   return (neuron0x2439bb0()*0.0331581);
}

double NNfunction_ns_chi01_uR::synapse0x244b3a0() {
   return (neuron0x2439ef0()*0.00734054);
}

double NNfunction_ns_chi01_uR::synapse0x244b3e0() {
   return (neuron0x243a230()*0.0118496);
}

double NNfunction_ns_chi01_uR::synapse0x244b420() {
   return (neuron0x243a570()*0.00818623);
}

double NNfunction_ns_chi01_uR::synapse0x244b460() {
   return (neuron0x243a8b0()*-6.87764);
}

double NNfunction_ns_chi01_uR::synapse0x245d330() {
   return (neuron0x2435d80()*0.0487479);
}

double NNfunction_ns_chi01_uR::synapse0x245d370() {
   return (neuron0x2436030()*0.265628);
}

double NNfunction_ns_chi01_uR::synapse0x245d3b0() {
   return (neuron0x2436370()*-0.155916);
}

double NNfunction_ns_chi01_uR::synapse0x245d3f0() {
   return (neuron0x24366b0()*0.154136);
}

double NNfunction_ns_chi01_uR::synapse0x245d430() {
   return (neuron0x24369f0()*0.066091);
}

double NNfunction_ns_chi01_uR::synapse0x245d470() {
   return (neuron0x2436d30()*0.0356095);
}

double NNfunction_ns_chi01_uR::synapse0x245d4b0() {
   return (neuron0x2437070()*-0.116994);
}

double NNfunction_ns_chi01_uR::synapse0x245d4f0() {
   return (neuron0x24373b0()*-0.171555);
}

double NNfunction_ns_chi01_uR::synapse0x245d530() {
   return (neuron0x24376f0()*0.0463766);
}

double NNfunction_ns_chi01_uR::synapse0x245d570() {
   return (neuron0x2437a30()*-0.112467);
}

double NNfunction_ns_chi01_uR::synapse0x245d5b0() {
   return (neuron0x2437d70()*0.172803);
}

double NNfunction_ns_chi01_uR::synapse0x245d5f0() {
   return (neuron0x24380b0()*-0.498609);
}

double NNfunction_ns_chi01_uR::synapse0x245d630() {
   return (neuron0x24383f0()*0.0194568);
}

double NNfunction_ns_chi01_uR::synapse0x245d670() {
   return (neuron0x2438730()*0.0289034);
}

double NNfunction_ns_chi01_uR::synapse0x245d6b0() {
   return (neuron0x2438a70()*1.72146);
}

double NNfunction_ns_chi01_uR::synapse0x245d6f0() {
   return (neuron0x2438db0()*0.00352814);
}

double NNfunction_ns_chi01_uR::synapse0x244b4a0() {
   return (neuron0x24390f0()*-0.0110084);
}

double NNfunction_ns_chi01_uR::synapse0x244b4e0() {
   return (neuron0x2439650()*0.0958239);
}

double NNfunction_ns_chi01_uR::synapse0x245d840() {
   return (neuron0x2439870()*-0.0824509);
}

double NNfunction_ns_chi01_uR::synapse0x245d880() {
   return (neuron0x2439bb0()*0.141945);
}

double NNfunction_ns_chi01_uR::synapse0x245d8c0() {
   return (neuron0x2439ef0()*-0.104964);
}

double NNfunction_ns_chi01_uR::synapse0x245d900() {
   return (neuron0x243a230()*-0.00587314);
}

double NNfunction_ns_chi01_uR::synapse0x245d940() {
   return (neuron0x243a570()*-0.0466574);
}

double NNfunction_ns_chi01_uR::synapse0x245d980() {
   return (neuron0x243a8b0()*-0.0634885);
}

double NNfunction_ns_chi01_uR::synapse0x245dd00() {
   return (neuron0x2435d80()*-0.0260344);
}

double NNfunction_ns_chi01_uR::synapse0x245dd40() {
   return (neuron0x2436030()*1.45462);
}

double NNfunction_ns_chi01_uR::synapse0x245dd80() {
   return (neuron0x2436370()*-0.0764338);
}

double NNfunction_ns_chi01_uR::synapse0x245ddc0() {
   return (neuron0x24366b0()*-0.050243);
}

double NNfunction_ns_chi01_uR::synapse0x245de00() {
   return (neuron0x24369f0()*-0.00536309);
}

double NNfunction_ns_chi01_uR::synapse0x245de40() {
   return (neuron0x2436d30()*0.0366501);
}

double NNfunction_ns_chi01_uR::synapse0x245de80() {
   return (neuron0x2437070()*0.0358585);
}

double NNfunction_ns_chi01_uR::synapse0x245dec0() {
   return (neuron0x24373b0()*-0.0317893);
}

double NNfunction_ns_chi01_uR::synapse0x245df00() {
   return (neuron0x24376f0()*-0.00216512);
}

double NNfunction_ns_chi01_uR::synapse0x245df40() {
   return (neuron0x2437a30()*0.0161401);
}

double NNfunction_ns_chi01_uR::synapse0x245df80() {
   return (neuron0x2437d70()*0.049274);
}

double NNfunction_ns_chi01_uR::synapse0x245dfc0() {
   return (neuron0x24380b0()*-0.0114465);
}

double NNfunction_ns_chi01_uR::synapse0x245e000() {
   return (neuron0x24383f0()*0.0126136);
}

double NNfunction_ns_chi01_uR::synapse0x245e040() {
   return (neuron0x2438730()*0.00292495);
}

double NNfunction_ns_chi01_uR::synapse0x245e080() {
   return (neuron0x2438a70()*-0.548624);
}

double NNfunction_ns_chi01_uR::synapse0x245e0c0() {
   return (neuron0x2438db0()*-0.00160882);
}

double NNfunction_ns_chi01_uR::synapse0x245db50() {
   return (neuron0x24390f0()*-0.0316747);
}

double NNfunction_ns_chi01_uR::synapse0x245db90() {
   return (neuron0x2439650()*0.00613557);
}

double NNfunction_ns_chi01_uR::synapse0x245e210() {
   return (neuron0x2439870()*0.0155376);
}

double NNfunction_ns_chi01_uR::synapse0x245e250() {
   return (neuron0x2439bb0()*0.00827817);
}

double NNfunction_ns_chi01_uR::synapse0x245e290() {
   return (neuron0x2439ef0()*-2.49259e-05);
}

double NNfunction_ns_chi01_uR::synapse0x245e2d0() {
   return (neuron0x243a230()*0.00594382);
}

double NNfunction_ns_chi01_uR::synapse0x245e310() {
   return (neuron0x243a570()*0.00394847);
}

double NNfunction_ns_chi01_uR::synapse0x245e350() {
   return (neuron0x243a8b0()*0.063555);
}

double NNfunction_ns_chi01_uR::synapse0x245e6d0() {
   return (neuron0x2435d80()*-0.00482964);
}

double NNfunction_ns_chi01_uR::synapse0x245e710() {
   return (neuron0x2436030()*-2.84833);
}

double NNfunction_ns_chi01_uR::synapse0x245e750() {
   return (neuron0x2436370()*-0.0162201);
}

double NNfunction_ns_chi01_uR::synapse0x245e790() {
   return (neuron0x24366b0()*0.000329546);
}

double NNfunction_ns_chi01_uR::synapse0x245e7d0() {
   return (neuron0x24369f0()*0.0258488);
}

double NNfunction_ns_chi01_uR::synapse0x245e810() {
   return (neuron0x2436d30()*0.00777598);
}

double NNfunction_ns_chi01_uR::synapse0x245e850() {
   return (neuron0x2437070()*-0.0138922);
}

double NNfunction_ns_chi01_uR::synapse0x245e890() {
   return (neuron0x24373b0()*-0.023069);
}

double NNfunction_ns_chi01_uR::synapse0x245e8d0() {
   return (neuron0x24376f0()*-0.0119632);
}

double NNfunction_ns_chi01_uR::synapse0x245e910() {
   return (neuron0x2437a30()*0.0108704);
}

double NNfunction_ns_chi01_uR::synapse0x245e950() {
   return (neuron0x2437d70()*0.0178837);
}

double NNfunction_ns_chi01_uR::synapse0x245e990() {
   return (neuron0x24380b0()*-0.0126439);
}

double NNfunction_ns_chi01_uR::synapse0x245e9d0() {
   return (neuron0x24383f0()*0.00226756);
}

double NNfunction_ns_chi01_uR::synapse0x245ea10() {
   return (neuron0x2438730()*0.00973974);
}

double NNfunction_ns_chi01_uR::synapse0x245ea50() {
   return (neuron0x2438a70()*0.222707);
}

double NNfunction_ns_chi01_uR::synapse0x245ea90() {
   return (neuron0x2438db0()*0.00505387);
}

double NNfunction_ns_chi01_uR::synapse0x245e520() {
   return (neuron0x24390f0()*-0.0137121);
}

double NNfunction_ns_chi01_uR::synapse0x245e560() {
   return (neuron0x2439650()*-0.000340227);
}

double NNfunction_ns_chi01_uR::synapse0x245ebe0() {
   return (neuron0x2439870()*0.0127922);
}

double NNfunction_ns_chi01_uR::synapse0x245ec20() {
   return (neuron0x2439bb0()*0.00812679);
}

double NNfunction_ns_chi01_uR::synapse0x245ec60() {
   return (neuron0x2439ef0()*-0.017201);
}

double NNfunction_ns_chi01_uR::synapse0x245eca0() {
   return (neuron0x243a230()*0.00553789);
}

double NNfunction_ns_chi01_uR::synapse0x245ece0() {
   return (neuron0x243a570()*-0.0166361);
}

double NNfunction_ns_chi01_uR::synapse0x245ed20() {
   return (neuron0x243a8b0()*0.1536);
}

double NNfunction_ns_chi01_uR::synapse0x245f0a0() {
   return (neuron0x2435d80()*0.0591593);
}

double NNfunction_ns_chi01_uR::synapse0x245f0e0() {
   return (neuron0x2436030()*3.43685);
}

double NNfunction_ns_chi01_uR::synapse0x245f120() {
   return (neuron0x2436370()*-3.59176);
}

double NNfunction_ns_chi01_uR::synapse0x245f160() {
   return (neuron0x24366b0()*0.0424975);
}

double NNfunction_ns_chi01_uR::synapse0x245f1a0() {
   return (neuron0x24369f0()*-0.0292103);
}

double NNfunction_ns_chi01_uR::synapse0x245f1e0() {
   return (neuron0x2436d30()*0.0137852);
}

double NNfunction_ns_chi01_uR::synapse0x245f220() {
   return (neuron0x2437070()*0.0151234);
}

double NNfunction_ns_chi01_uR::synapse0x245f260() {
   return (neuron0x24373b0()*0.0519688);
}

double NNfunction_ns_chi01_uR::synapse0x245f2a0() {
   return (neuron0x24376f0()*0.0387536);
}

double NNfunction_ns_chi01_uR::synapse0x245f2e0() {
   return (neuron0x2437a30()*0.0210979);
}

double NNfunction_ns_chi01_uR::synapse0x245f320() {
   return (neuron0x2437d70()*-0.00529506);
}

double NNfunction_ns_chi01_uR::synapse0x245f360() {
   return (neuron0x24380b0()*-0.0541733);
}

double NNfunction_ns_chi01_uR::synapse0x245f3a0() {
   return (neuron0x24383f0()*0.0460309);
}

double NNfunction_ns_chi01_uR::synapse0x245f3e0() {
   return (neuron0x2438730()*-0.0191668);
}

double NNfunction_ns_chi01_uR::synapse0x245f420() {
   return (neuron0x2438a70()*-0.33002);
}

double NNfunction_ns_chi01_uR::synapse0x245f460() {
   return (neuron0x2438db0()*-0.0398636);
}

double NNfunction_ns_chi01_uR::synapse0x245eef0() {
   return (neuron0x24390f0()*-0.00515799);
}

double NNfunction_ns_chi01_uR::synapse0x245ef30() {
   return (neuron0x2439650()*-0.0797802);
}

double NNfunction_ns_chi01_uR::synapse0x245f5b0() {
   return (neuron0x2439870()*0.00766472);
}

double NNfunction_ns_chi01_uR::synapse0x245f5f0() {
   return (neuron0x2439bb0()*0.0531079);
}

double NNfunction_ns_chi01_uR::synapse0x245f630() {
   return (neuron0x2439ef0()*0.141954);
}

double NNfunction_ns_chi01_uR::synapse0x245f670() {
   return (neuron0x243a230()*-0.0514627);
}

double NNfunction_ns_chi01_uR::synapse0x245f6b0() {
   return (neuron0x243a570()*0.030848);
}

double NNfunction_ns_chi01_uR::synapse0x245f6f0() {
   return (neuron0x243a8b0()*3.18563);
}

double NNfunction_ns_chi01_uR::synapse0x243bc80() {
   return (neuron0x243ad20()*2.02737);
}

double NNfunction_ns_chi01_uR::synapse0x243bcc0() {
   return (neuron0x243b670()*1.51982);
}

double NNfunction_ns_chi01_uR::synapse0x243d1a0() {
   return (neuron0x243c150()*5.92708);
}

double NNfunction_ns_chi01_uR::synapse0x243d1e0() {
   return (neuron0x21ff4a0()*3.45489);
}

double NNfunction_ns_chi01_uR::synapse0x243db70() {
   return (neuron0x243cef0()*0.319946);
}

double NNfunction_ns_chi01_uR::synapse0x243dbb0() {
   return (neuron0x243d8c0()*-1.75552);
}

double NNfunction_ns_chi01_uR::synapse0x243e940() {
   return (neuron0x243e690()*0.342652);
}

double NNfunction_ns_chi01_uR::synapse0x243e980() {
   return (neuron0x243f060()*-2.64157);
}

double NNfunction_ns_chi01_uR::synapse0x243f310() {
   return (neuron0x243fa30()*0.0042333);
}

double NNfunction_ns_chi01_uR::synapse0x243f350() {
   return (neuron0x2440510()*-0.573741);
}

double NNfunction_ns_chi01_uR::synapse0x243fce0() {
   return (neuron0x2440ee0()*0.0837409);
}

double NNfunction_ns_chi01_uR::synapse0x243fd20() {
   return (neuron0x243dfc0()*-2.82901);
}

double NNfunction_ns_chi01_uR::synapse0x24407c0() {
   return (neuron0x2442a90()*-0.151099);
}

double NNfunction_ns_chi01_uR::synapse0x2440800() {
   return (neuron0x2443460()*0.0613488);
}

double NNfunction_ns_chi01_uR::synapse0x2441190() {
   return (neuron0x2443e30()*6.70061);
}

double NNfunction_ns_chi01_uR::synapse0x24411d0() {
   return (neuron0x2444800()*1.55512);
}

double NNfunction_ns_chi01_uR::synapse0x243e270() {
   return (neuron0x2446610()*-3.702);
}

double NNfunction_ns_chi01_uR::synapse0x243e2b0() {
   return (neuron0x24468f0()*1.1473);
}

double NNfunction_ns_chi01_uR::synapse0x2442d40() {
   return (neuron0x24472c0()*0.185623);
}

double NNfunction_ns_chi01_uR::synapse0x2442d80() {
   return (neuron0x2447c90()*-0.143315);
}

double NNfunction_ns_chi01_uR::synapse0x2443710() {
   return (neuron0x2448660()*0.606722);
}

double NNfunction_ns_chi01_uR::synapse0x2443750() {
   return (neuron0x2449030()*1.87654);
}

double NNfunction_ns_chi01_uR::synapse0x24440e0() {
   return (neuron0x2441b80()*-1.48654);
}

double NNfunction_ns_chi01_uR::synapse0x2444120() {
   return (neuron0x2442550()*0.245738);
}

double NNfunction_ns_chi01_uR::synapse0x2444ab0() {
   return (neuron0x244bdc0()*-1.80658);
}

double NNfunction_ns_chi01_uR::synapse0x2444af0() {
   return (neuron0x244c790()*0.228695);
}

double NNfunction_ns_chi01_uR::synapse0x2438c90() {
   return (neuron0x244d160()*-0.553607);
}

double NNfunction_ns_chi01_uR::synapse0x2438cd0() {
   return (neuron0x244db30()*-0.11228);
}

double NNfunction_ns_chi01_uR::synapse0x2446ba0() {
   return (neuron0x244e500()*-0.492375);
}

double NNfunction_ns_chi01_uR::synapse0x2446be0() {
   return (neuron0x244eed0()*-2.70691);
}

double NNfunction_ns_chi01_uR::synapse0x2447570() {
   return (neuron0x244f8a0()*-0.134603);
}

double NNfunction_ns_chi01_uR::synapse0x24475b0() {
   return (neuron0x2450270()*-1.62878);
}

double NNfunction_ns_chi01_uR::synapse0x2447f40() {
   return (neuron0x2446300()*0.186674);
}

double NNfunction_ns_chi01_uR::synapse0x2447f80() {
   return (neuron0x2452e50()*1.92308);
}

double NNfunction_ns_chi01_uR::synapse0x2448910() {
   return (neuron0x2453820()*0.287783);
}

double NNfunction_ns_chi01_uR::synapse0x2448950() {
   return (neuron0x24541f0()*6.58287);
}

double NNfunction_ns_chi01_uR::synapse0x24492e0() {
   return (neuron0x2454bc0()*-0.314108);
}

double NNfunction_ns_chi01_uR::synapse0x2449320() {
   return (neuron0x2455590()*2.32252);
}

double NNfunction_ns_chi01_uR::synapse0x2441e30() {
   return (neuron0x2455f60()*0.292392);
}

double NNfunction_ns_chi01_uR::synapse0x2441e70() {
   return (neuron0x2456930()*-0.645018);
}

double NNfunction_ns_chi01_uR::synapse0x244b6e0() {
   return (neuron0x2457300()*-5.16057);
}

double NNfunction_ns_chi01_uR::synapse0x244b720() {
   return (neuron0x2457ee0()*6.71037);
}

double NNfunction_ns_chi01_uR::synapse0x244c070() {
   return (neuron0x24588b0()*-1.71457);
}

double NNfunction_ns_chi01_uR::synapse0x244c0b0() {
   return (neuron0x2449730()*0.603424);
}

double NNfunction_ns_chi01_uR::synapse0x244ca40() {
   return (neuron0x244a100()*-6.45261);
}

double NNfunction_ns_chi01_uR::synapse0x244ca80() {
   return (neuron0x244aad0()*-0.109994);
}

double NNfunction_ns_chi01_uR::synapse0x244d410() {
   return (neuron0x245d110()*-3.33279);
}

double NNfunction_ns_chi01_uR::synapse0x244d450() {
   return (neuron0x245d9c0()*0.29392);
}

double NNfunction_ns_chi01_uR::synapse0x244dde0() {
   return (neuron0x245e390()*3.11599);
}

double NNfunction_ns_chi01_uR::synapse0x244de20() {
   return (neuron0x245ed60()*-0.276749);
}

double NNfunction_ns_chi01_uR::synapse0x2450520() {
   return (neuron0x243ad20()*0.865317);
}

double NNfunction_ns_chi01_uR::synapse0x2450560() {
   return (neuron0x243b670()*-0.0546887);
}

double NNfunction_ns_chi01_uR::synapse0x2445ae0() {
   return (neuron0x243c150()*0.0196112);
}

double NNfunction_ns_chi01_uR::synapse0x2445b20() {
   return (neuron0x21ff4a0()*0.0547301);
}

double NNfunction_ns_chi01_uR::synapse0x2453100() {
   return (neuron0x243cef0()*-0.0267161);
}

double NNfunction_ns_chi01_uR::synapse0x2453140() {
   return (neuron0x243d8c0()*0.272949);
}

double NNfunction_ns_chi01_uR::synapse0x2453ad0() {
   return (neuron0x243e690()*0.00746567);
}

double NNfunction_ns_chi01_uR::synapse0x2453b10() {
   return (neuron0x243f060()*-0.617568);
}

double NNfunction_ns_chi01_uR::synapse0x24544a0() {
   return (neuron0x243fa30()*-0.887453);
}

double NNfunction_ns_chi01_uR::synapse0x24544e0() {
   return (neuron0x2440510()*-0.000431925);
}

double NNfunction_ns_chi01_uR::synapse0x2454e70() {
   return (neuron0x2440ee0()*0.187407);
}

double NNfunction_ns_chi01_uR::synapse0x2454eb0() {
   return (neuron0x243dfc0()*-0.88783);
}

double NNfunction_ns_chi01_uR::synapse0x2455840() {
   return (neuron0x2442a90()*0.139764);
}

double NNfunction_ns_chi01_uR::synapse0x2455880() {
   return (neuron0x2443460()*-0.174954);
}

double NNfunction_ns_chi01_uR::synapse0x2456210() {
   return (neuron0x2443e30()*0.228525);
}

double NNfunction_ns_chi01_uR::synapse0x2456250() {
   return (neuron0x2444800()*0.294738);
}

double NNfunction_ns_chi01_uR::synapse0x2456be0() {
   return (neuron0x2446610()*0.0335172);
}

double NNfunction_ns_chi01_uR::synapse0x2456c20() {
   return (neuron0x24468f0()*0.0915454);
}

double NNfunction_ns_chi01_uR::synapse0x24575b0() {
   return (neuron0x24472c0()*0.236904);
}

double NNfunction_ns_chi01_uR::synapse0x24575f0() {
   return (neuron0x2447c90()*-0.0865851);
}

double NNfunction_ns_chi01_uR::synapse0x2458190() {
   return (neuron0x2448660()*-0.0936934);
}

double NNfunction_ns_chi01_uR::synapse0x24581d0() {
   return (neuron0x2449030()*0.0299272);
}

double NNfunction_ns_chi01_uR::synapse0x2458b60() {
   return (neuron0x2441b80()*-0.489075);
}

double NNfunction_ns_chi01_uR::synapse0x2458ba0() {
   return (neuron0x2442550()*-0.0139326);
}

double NNfunction_ns_chi01_uR::synapse0x24499e0() {
   return (neuron0x244bdc0()*0.0948934);
}

double NNfunction_ns_chi01_uR::synapse0x2449a20() {
   return (neuron0x244c790()*-0.0374654);
}

double NNfunction_ns_chi01_uR::synapse0x244a3b0() {
   return (neuron0x244d160()*0.0223901);
}

double NNfunction_ns_chi01_uR::synapse0x244a3f0() {
   return (neuron0x244db30()*0.0595022);
}

double NNfunction_ns_chi01_uR::synapse0x244ad80() {
   return (neuron0x244e500()*0.00979155);
}

double NNfunction_ns_chi01_uR::synapse0x244adc0() {
   return (neuron0x244eed0()*0.0484778);
}

double NNfunction_ns_chi01_uR::synapse0x245d2a0() {
   return (neuron0x244f8a0()*0.0133473);
}

double NNfunction_ns_chi01_uR::synapse0x245d2e0() {
   return (neuron0x2450270()*0.0113102);
}

double NNfunction_ns_chi01_uR::synapse0x245dc70() {
   return (neuron0x2446300()*-0.00660234);
}

double NNfunction_ns_chi01_uR::synapse0x245dcb0() {
   return (neuron0x2452e50()*0.0434372);
}

double NNfunction_ns_chi01_uR::synapse0x245e640() {
   return (neuron0x2453820()*0.226747);
}

double NNfunction_ns_chi01_uR::synapse0x245e680() {
   return (neuron0x24541f0()*0.0871901);
}

double NNfunction_ns_chi01_uR::synapse0x245f010() {
   return (neuron0x2454bc0()*0.0164873);
}

double NNfunction_ns_chi01_uR::synapse0x245f050() {
   return (neuron0x2455590()*-0.100484);
}

double NNfunction_ns_chi01_uR::synapse0x243af40() {
   return (neuron0x2455f60()*-0.01765);
}

double NNfunction_ns_chi01_uR::synapse0x243af80() {
   return (neuron0x2456930()*-0.00588558);
}

double NNfunction_ns_chi01_uR::synapse0x244e7b0() {
   return (neuron0x2457300()*-0.249702);
}

double NNfunction_ns_chi01_uR::synapse0x244e7f0() {
   return (neuron0x2457ee0()*0.21971);
}

double NNfunction_ns_chi01_uR::synapse0x245f730() {
   return (neuron0x24588b0()*1.20061);
}

double NNfunction_ns_chi01_uR::synapse0x245f770() {
   return (neuron0x2449730()*-0.000241343);
}

double NNfunction_ns_chi01_uR::synapse0x245f7b0() {
   return (neuron0x244a100()*-0.21973);
}

double NNfunction_ns_chi01_uR::synapse0x245f7f0() {
   return (neuron0x244aad0()*0.136382);
}

double NNfunction_ns_chi01_uR::synapse0x24666a0() {
   return (neuron0x245d110()*0.0121404);
}

double NNfunction_ns_chi01_uR::synapse0x24666e0() {
   return (neuron0x245d9c0()*-0.582549);
}

double NNfunction_ns_chi01_uR::synapse0x2466720() {
   return (neuron0x245e390()*1.28242);
}

double NNfunction_ns_chi01_uR::synapse0x2466760() {
   return (neuron0x245ed60()*0.171524);
}

double NNfunction_ns_chi01_uR::synapse0x2466ae0() {
   return (neuron0x243ad20()*-1.05078);
}

double NNfunction_ns_chi01_uR::synapse0x2466b20() {
   return (neuron0x243b670()*0.569845);
}

double NNfunction_ns_chi01_uR::synapse0x2466b60() {
   return (neuron0x243c150()*0.132116);
}

double NNfunction_ns_chi01_uR::synapse0x2466ba0() {
   return (neuron0x21ff4a0()*0.222437);
}

double NNfunction_ns_chi01_uR::synapse0x2466be0() {
   return (neuron0x243cef0()*0.343993);
}

double NNfunction_ns_chi01_uR::synapse0x2466c20() {
   return (neuron0x243d8c0()*-3.23115);
}

double NNfunction_ns_chi01_uR::synapse0x2466c60() {
   return (neuron0x243e690()*0.139935);
}

double NNfunction_ns_chi01_uR::synapse0x2466ca0() {
   return (neuron0x243f060()*3.35603);
}

double NNfunction_ns_chi01_uR::synapse0x2466ce0() {
   return (neuron0x243fa30()*4.8832);
}

double NNfunction_ns_chi01_uR::synapse0x2466d20() {
   return (neuron0x2440510()*-0.108451);
}

double NNfunction_ns_chi01_uR::synapse0x2466d60() {
   return (neuron0x2440ee0()*-3.9172);
}

double NNfunction_ns_chi01_uR::synapse0x2466da0() {
   return (neuron0x243dfc0()*-4.36952);
}

double NNfunction_ns_chi01_uR::synapse0x2466de0() {
   return (neuron0x2442a90()*-2.66591);
}

double NNfunction_ns_chi01_uR::synapse0x2466e20() {
   return (neuron0x2443460()*1.42763);
}

double NNfunction_ns_chi01_uR::synapse0x2466e60() {
   return (neuron0x2443e30()*-0.174731);
}

double NNfunction_ns_chi01_uR::synapse0x2466ea0() {
   return (neuron0x2444800()*-0.820092);
}

double NNfunction_ns_chi01_uR::synapse0x2466930() {
   return (neuron0x2446610()*0.0951597);
}

double NNfunction_ns_chi01_uR::synapse0x2466970() {
   return (neuron0x24468f0()*2.36065);
}

double NNfunction_ns_chi01_uR::synapse0x2466ff0() {
   return (neuron0x24472c0()*17.0604);
}

double NNfunction_ns_chi01_uR::synapse0x2467030() {
   return (neuron0x2447c90()*2.69465);
}

double NNfunction_ns_chi01_uR::synapse0x2467070() {
   return (neuron0x2448660()*0.862785);
}

double NNfunction_ns_chi01_uR::synapse0x24670b0() {
   return (neuron0x2449030()*-0.00896892);
}

double NNfunction_ns_chi01_uR::synapse0x24670f0() {
   return (neuron0x2441b80()*-2.91412);
}

double NNfunction_ns_chi01_uR::synapse0x2467130() {
   return (neuron0x2442550()*0.272741);
}

double NNfunction_ns_chi01_uR::synapse0x2467170() {
   return (neuron0x244bdc0()*-4.43064);
}

double NNfunction_ns_chi01_uR::synapse0x24671b0() {
   return (neuron0x244c790()*0.58188);
}

double NNfunction_ns_chi01_uR::synapse0x24671f0() {
   return (neuron0x244d160()*-0.390011);
}

double NNfunction_ns_chi01_uR::synapse0x2467230() {
   return (neuron0x244db30()*3.3684);
}

double NNfunction_ns_chi01_uR::synapse0x2467270() {
   return (neuron0x244e500()*-0.407334);
}

double NNfunction_ns_chi01_uR::synapse0x24672b0() {
   return (neuron0x244eed0()*-0.944462);
}

double NNfunction_ns_chi01_uR::synapse0x24672f0() {
   return (neuron0x244f8a0()*1.71713);
}

double NNfunction_ns_chi01_uR::synapse0x2467330() {
   return (neuron0x2450270()*-0.802807);
}

double NNfunction_ns_chi01_uR::synapse0x2466ee0() {
   return (neuron0x2446300()*0.414544);
}

double NNfunction_ns_chi01_uR::synapse0x2466f20() {
   return (neuron0x2452e50()*0.332926);
}

double NNfunction_ns_chi01_uR::synapse0x2466f60() {
   return (neuron0x2453820()*2.57941);
}

double NNfunction_ns_chi01_uR::synapse0x2466fa0() {
   return (neuron0x24541f0()*-0.00458415);
}

double NNfunction_ns_chi01_uR::synapse0x2467580() {
   return (neuron0x2454bc0()*-0.295453);
}

double NNfunction_ns_chi01_uR::synapse0x24675c0() {
   return (neuron0x2455590()*4.93873);
}

double NNfunction_ns_chi01_uR::synapse0x2467600() {
   return (neuron0x2455f60()*0.0759814);
}

double NNfunction_ns_chi01_uR::synapse0x2467640() {
   return (neuron0x2456930()*-0.302904);
}

double NNfunction_ns_chi01_uR::synapse0x2467680() {
   return (neuron0x2457300()*0.457153);
}

double NNfunction_ns_chi01_uR::synapse0x24676c0() {
   return (neuron0x2457ee0()*-0.0479688);
}

double NNfunction_ns_chi01_uR::synapse0x2467700() {
   return (neuron0x24588b0()*0.608696);
}

double NNfunction_ns_chi01_uR::synapse0x2467740() {
   return (neuron0x2449730()*0.39583);
}

double NNfunction_ns_chi01_uR::synapse0x2467780() {
   return (neuron0x244a100()*0.101019);
}

double NNfunction_ns_chi01_uR::synapse0x24677c0() {
   return (neuron0x244aad0()*-4.29793);
}

double NNfunction_ns_chi01_uR::synapse0x2467800() {
   return (neuron0x245d110()*0.370007);
}

double NNfunction_ns_chi01_uR::synapse0x2467840() {
   return (neuron0x245d9c0()*-3.59029);
}

double NNfunction_ns_chi01_uR::synapse0x2467880() {
   return (neuron0x245e390()*0.152573);
}

double NNfunction_ns_chi01_uR::synapse0x24678c0() {
   return (neuron0x245ed60()*-1.86951);
}

double NNfunction_ns_chi01_uR::synapse0x2467c40() {
   return (neuron0x243ad20()*-0.012445);
}

double NNfunction_ns_chi01_uR::synapse0x2467c80() {
   return (neuron0x243b670()*-0.00995063);
}

double NNfunction_ns_chi01_uR::synapse0x2467cc0() {
   return (neuron0x243c150()*0.547632);
}

double NNfunction_ns_chi01_uR::synapse0x2467d00() {
   return (neuron0x21ff4a0()*0.56393);
}

double NNfunction_ns_chi01_uR::synapse0x2467d40() {
   return (neuron0x243cef0()*0.0796503);
}

double NNfunction_ns_chi01_uR::synapse0x2467d80() {
   return (neuron0x243d8c0()*-1.6047);
}

double NNfunction_ns_chi01_uR::synapse0x2467dc0() {
   return (neuron0x243e690()*-0.02433);
}

double NNfunction_ns_chi01_uR::synapse0x2467e00() {
   return (neuron0x243f060()*-3.7779);
}

double NNfunction_ns_chi01_uR::synapse0x2467e40() {
   return (neuron0x243fa30()*2.93341);
}

double NNfunction_ns_chi01_uR::synapse0x2467e80() {
   return (neuron0x2440510()*0.0756134);
}

double NNfunction_ns_chi01_uR::synapse0x2467ec0() {
   return (neuron0x2440ee0()*-0.129038);
}

double NNfunction_ns_chi01_uR::synapse0x2467f00() {
   return (neuron0x243dfc0()*2.74288);
}

double NNfunction_ns_chi01_uR::synapse0x2467f40() {
   return (neuron0x2442a90()*0.366039);
}

double NNfunction_ns_chi01_uR::synapse0x2467f80() {
   return (neuron0x2443460()*7.36276);
}

double NNfunction_ns_chi01_uR::synapse0x2467fc0() {
   return (neuron0x2443e30()*0.401164);
}

double NNfunction_ns_chi01_uR::synapse0x2468000() {
   return (neuron0x2444800()*1.78325);
}

double NNfunction_ns_chi01_uR::synapse0x2467a90() {
   return (neuron0x2446610()*-0.21418);
}

double NNfunction_ns_chi01_uR::synapse0x2467ad0() {
   return (neuron0x24468f0()*-1.42308);
}

double NNfunction_ns_chi01_uR::synapse0x2468150() {
   return (neuron0x24472c0()*-2.7541);
}

double NNfunction_ns_chi01_uR::synapse0x2468190() {
   return (neuron0x2447c90()*-0.878437);
}

double NNfunction_ns_chi01_uR::synapse0x24681d0() {
   return (neuron0x2448660()*0.329979);
}

double NNfunction_ns_chi01_uR::synapse0x2468210() {
   return (neuron0x2449030()*0.201909);
}

double NNfunction_ns_chi01_uR::synapse0x2468250() {
   return (neuron0x2441b80()*-2.10242);
}

double NNfunction_ns_chi01_uR::synapse0x2468290() {
   return (neuron0x2442550()*-0.475408);
}

double NNfunction_ns_chi01_uR::synapse0x24682d0() {
   return (neuron0x244bdc0()*-0.579451);
}

double NNfunction_ns_chi01_uR::synapse0x2468310() {
   return (neuron0x244c790()*0.29751);
}

double NNfunction_ns_chi01_uR::synapse0x2468350() {
   return (neuron0x244d160()*0.137245);
}

double NNfunction_ns_chi01_uR::synapse0x2468390() {
   return (neuron0x244db30()*-3.22489);
}

double NNfunction_ns_chi01_uR::synapse0x24683d0() {
   return (neuron0x244e500()*-0.00747662);
}

double NNfunction_ns_chi01_uR::synapse0x2468410() {
   return (neuron0x244eed0()*0.0733585);
}

double NNfunction_ns_chi01_uR::synapse0x2468450() {
   return (neuron0x244f8a0()*-0.36575);
}

double NNfunction_ns_chi01_uR::synapse0x2468490() {
   return (neuron0x2450270()*-0.176863);
}

double NNfunction_ns_chi01_uR::synapse0x2468040() {
   return (neuron0x2446300()*-0.3311);
}

double NNfunction_ns_chi01_uR::synapse0x2468080() {
   return (neuron0x2452e50()*-0.336244);
}

double NNfunction_ns_chi01_uR::synapse0x24680c0() {
   return (neuron0x2453820()*2.58131);
}

double NNfunction_ns_chi01_uR::synapse0x2468100() {
   return (neuron0x24541f0()*-0.0999621);
}

double NNfunction_ns_chi01_uR::synapse0x24686e0() {
   return (neuron0x2454bc0()*-0.070379);
}

double NNfunction_ns_chi01_uR::synapse0x2468720() {
   return (neuron0x2455590()*-2.48765);
}

double NNfunction_ns_chi01_uR::synapse0x2468760() {
   return (neuron0x2455f60()*0.0507741);
}

double NNfunction_ns_chi01_uR::synapse0x24687a0() {
   return (neuron0x2456930()*-0.155004);
}

double NNfunction_ns_chi01_uR::synapse0x24687e0() {
   return (neuron0x2457300()*-1.01939);
}

double NNfunction_ns_chi01_uR::synapse0x2468820() {
   return (neuron0x2457ee0()*0.0725222);
}

double NNfunction_ns_chi01_uR::synapse0x2468860() {
   return (neuron0x24588b0()*0.524614);
}

double NNfunction_ns_chi01_uR::synapse0x24688a0() {
   return (neuron0x2449730()*-0.534926);
}

double NNfunction_ns_chi01_uR::synapse0x24688e0() {
   return (neuron0x244a100()*0.0310158);
}

double NNfunction_ns_chi01_uR::synapse0x2468920() {
   return (neuron0x244aad0()*-0.00976001);
}

double NNfunction_ns_chi01_uR::synapse0x2468960() {
   return (neuron0x245d110()*-0.517584);
}

double NNfunction_ns_chi01_uR::synapse0x24689a0() {
   return (neuron0x245d9c0()*-0.462011);
}

double NNfunction_ns_chi01_uR::synapse0x24689e0() {
   return (neuron0x245e390()*-0.650187);
}

double NNfunction_ns_chi01_uR::synapse0x2468a20() {
   return (neuron0x245ed60()*-0.00431271);
}

double NNfunction_ns_chi01_uR::synapse0x2468da0() {
   return (neuron0x243ad20()*-0.244526);
}

double NNfunction_ns_chi01_uR::synapse0x2468de0() {
   return (neuron0x243b670()*0.247921);
}

double NNfunction_ns_chi01_uR::synapse0x2468e20() {
   return (neuron0x243c150()*0.417044);
}

double NNfunction_ns_chi01_uR::synapse0x2468e60() {
   return (neuron0x21ff4a0()*0.343869);
}

double NNfunction_ns_chi01_uR::synapse0x2468ea0() {
   return (neuron0x243cef0()*0.286749);
}

double NNfunction_ns_chi01_uR::synapse0x2468ee0() {
   return (neuron0x243d8c0()*-2.15593);
}

double NNfunction_ns_chi01_uR::synapse0x2468f20() {
   return (neuron0x243e690()*-0.0521052);
}

double NNfunction_ns_chi01_uR::synapse0x2468f60() {
   return (neuron0x243f060()*-0.766779);
}

double NNfunction_ns_chi01_uR::synapse0x2468fa0() {
   return (neuron0x243fa30()*-10.4202);
}

double NNfunction_ns_chi01_uR::synapse0x2468fe0() {
   return (neuron0x2440510()*-0.0609905);
}

double NNfunction_ns_chi01_uR::synapse0x2469020() {
   return (neuron0x2440ee0()*-6.08598);
}

double NNfunction_ns_chi01_uR::synapse0x2469060() {
   return (neuron0x243dfc0()*2.86831);
}

double NNfunction_ns_chi01_uR::synapse0x24690a0() {
   return (neuron0x2442a90()*-2.28814);
}

double NNfunction_ns_chi01_uR::synapse0x24690e0() {
   return (neuron0x2443460()*2.81517);
}

double NNfunction_ns_chi01_uR::synapse0x2469120() {
   return (neuron0x2443e30()*0.313942);
}

double NNfunction_ns_chi01_uR::synapse0x2469160() {
   return (neuron0x2444800()*-4.59739);
}

double NNfunction_ns_chi01_uR::synapse0x2468bf0() {
   return (neuron0x2446610()*-0.177403);
}

double NNfunction_ns_chi01_uR::synapse0x2468c30() {
   return (neuron0x24468f0()*1.75394);
}

double NNfunction_ns_chi01_uR::synapse0x24692b0() {
   return (neuron0x24472c0()*0.707058);
}

double NNfunction_ns_chi01_uR::synapse0x24692f0() {
   return (neuron0x2447c90()*2.59896);
}

double NNfunction_ns_chi01_uR::synapse0x2469330() {
   return (neuron0x2448660()*1.37807);
}

double NNfunction_ns_chi01_uR::synapse0x2469370() {
   return (neuron0x2449030()*-0.0308329);
}

double NNfunction_ns_chi01_uR::synapse0x24693b0() {
   return (neuron0x2441b80()*2.4964);
}

double NNfunction_ns_chi01_uR::synapse0x24693f0() {
   return (neuron0x2442550()*0.317652);
}

double NNfunction_ns_chi01_uR::synapse0x2469430() {
   return (neuron0x244bdc0()*-9.98743);
}

double NNfunction_ns_chi01_uR::synapse0x2469470() {
   return (neuron0x244c790()*0.588596);
}

double NNfunction_ns_chi01_uR::synapse0x24694b0() {
   return (neuron0x244d160()*-0.342889);
}

double NNfunction_ns_chi01_uR::synapse0x24694f0() {
   return (neuron0x244db30()*4.25769);
}

double NNfunction_ns_chi01_uR::synapse0x2469530() {
   return (neuron0x244e500()*-0.330552);
}

double NNfunction_ns_chi01_uR::synapse0x2469570() {
   return (neuron0x244eed0()*-0.936826);
}

double NNfunction_ns_chi01_uR::synapse0x24695b0() {
   return (neuron0x244f8a0()*-1.80758);
}

double NNfunction_ns_chi01_uR::synapse0x24695f0() {
   return (neuron0x2450270()*0.253318);
}

double NNfunction_ns_chi01_uR::synapse0x24691a0() {
   return (neuron0x2446300()*0.284524);
}

double NNfunction_ns_chi01_uR::synapse0x24691e0() {
   return (neuron0x2452e50()*0.145684);
}

double NNfunction_ns_chi01_uR::synapse0x2469220() {
   return (neuron0x2453820()*-1.58743);
}

double NNfunction_ns_chi01_uR::synapse0x2469260() {
   return (neuron0x24541f0()*0.274054);
}

double NNfunction_ns_chi01_uR::synapse0x2469840() {
   return (neuron0x2454bc0()*-0.00600554);
}

double NNfunction_ns_chi01_uR::synapse0x2469880() {
   return (neuron0x2455590()*-5.66662);
}

double NNfunction_ns_chi01_uR::synapse0x24698c0() {
   return (neuron0x2455f60()*0.288872);
}

double NNfunction_ns_chi01_uR::synapse0x2469900() {
   return (neuron0x2456930()*0.0173152);
}

double NNfunction_ns_chi01_uR::synapse0x2469940() {
   return (neuron0x2457300()*0.911626);
}

double NNfunction_ns_chi01_uR::synapse0x2469980() {
   return (neuron0x2457ee0()*0.775262);
}

double NNfunction_ns_chi01_uR::synapse0x24699c0() {
   return (neuron0x24588b0()*4.58746);
}

double NNfunction_ns_chi01_uR::synapse0x2469a00() {
   return (neuron0x2449730()*-0.0655953);
}

double NNfunction_ns_chi01_uR::synapse0x2469a40() {
   return (neuron0x244a100()*0.266504);
}

double NNfunction_ns_chi01_uR::synapse0x2469a80() {
   return (neuron0x244aad0()*2.32336);
}

double NNfunction_ns_chi01_uR::synapse0x2469ac0() {
   return (neuron0x245d110()*0.678912);
}

double NNfunction_ns_chi01_uR::synapse0x2469b00() {
   return (neuron0x245d9c0()*3.3787);
}

double NNfunction_ns_chi01_uR::synapse0x2469b40() {
   return (neuron0x245e390()*-0.0913583);
}

double NNfunction_ns_chi01_uR::synapse0x2469b80() {
   return (neuron0x245ed60()*-5.28798);
}

double NNfunction_ns_chi01_uR::synapse0x2469de0() {
   return (neuron0x2465f60()*-9.1195);
}

double NNfunction_ns_chi01_uR::synapse0x2469e20() {
   return (neuron0x2466300()*-12.4622);
}

double NNfunction_ns_chi01_uR::synapse0x2469e60() {
   return (neuron0x24667a0()*-3.16128);
}

double NNfunction_ns_chi01_uR::synapse0x2469ea0() {
   return (neuron0x2467900()*-1.20348);
}

double NNfunction_ns_chi01_uR::synapse0x2469ee0() {
   return (neuron0x2468a60()*-2.7832);
}

