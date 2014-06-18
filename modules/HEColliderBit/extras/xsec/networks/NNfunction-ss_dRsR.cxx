#include "NNfunction-ss_dRsR.h"
#include <cmath>

double NNfunction-ss_dRsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.775)/15.0279;
   input1 = (in1 - 58.8026)/710.298;
   input2 = (in2 - 366.503)/460.346;
   input3 = (in3 - 306.302)/596.889;
   input4 = (in4 - 721.436)/657.789;
   input5 = (in5 - 624.62)/628.823;
   input6 = (in6 - 631.35)/634.095;
   input7 = (in7 - 624.957)/630.227;
   input8 = (in8 - 625.045)/671.522;
   input9 = (in9 - 618.573)/659.706;
   input10 = (in10 - 620.527)/678.782;
   input11 = (in11 - 694.963)/564.401;
   input12 = (in12 - 698.744)/572.523;
   input13 = (in13 - 541.873)/353.829;
   input14 = (in14 - 678.543)/520.795;
   input15 = (in15 - 679.766)/521.841;
   input16 = (in16 - 483.546)/371.543;
   input17 = (in17 - 549.459)/318.405;
   input18 = (in18 - 548.131)/319.018;
   input19 = (in19 - 700.635)/580.754;
   input20 = (in20 - -236.467)/405.839;
   input21 = (in21 - -303.36)/876.064;
   input22 = (in22 - -3.5284)/872.532;
   input23 = (in23 - 1.86599)/501.171;
   switch(index) {
     case 0:
         return neuron0x24c6ed0();
     default:
         return 0.;
   }
}

double NNfunction-ss_dRsR::Value(int index, double* input) {
   input0 = (input[0] - 22.775)/15.0279;
   input1 = (input[1] - 58.8026)/710.298;
   input2 = (input[2] - 366.503)/460.346;
   input3 = (input[3] - 306.302)/596.889;
   input4 = (input[4] - 721.436)/657.789;
   input5 = (input[5] - 624.62)/628.823;
   input6 = (input[6] - 631.35)/634.095;
   input7 = (input[7] - 624.957)/630.227;
   input8 = (input[8] - 625.045)/671.522;
   input9 = (input[9] - 618.573)/659.706;
   input10 = (input[10] - 620.527)/678.782;
   input11 = (input[11] - 694.963)/564.401;
   input12 = (input[12] - 698.744)/572.523;
   input13 = (input[13] - 541.873)/353.829;
   input14 = (input[14] - 678.543)/520.795;
   input15 = (input[15] - 679.766)/521.841;
   input16 = (input[16] - 483.546)/371.543;
   input17 = (input[17] - 549.459)/318.405;
   input18 = (input[18] - 548.131)/319.018;
   input19 = (input[19] - 700.635)/580.754;
   input20 = (input[20] - -236.467)/405.839;
   input21 = (input[21] - -303.36)/876.064;
   input22 = (input[22] - -3.5284)/872.532;
   input23 = (input[23] - 1.86599)/501.171;
   switch(index) {
     case 0:
         return neuron0x24c6ed0();
     default:
         return 0.;
   }
}

double NNfunction-ss_dRsR::neuron0x2492fc0() {
   return input0;
}

double NNfunction-ss_dRsR::neuron0x2493300() {
   return input1;
}

double NNfunction-ss_dRsR::neuron0x2493640() {
   return input2;
}

double NNfunction-ss_dRsR::neuron0x2493980() {
   return input3;
}

double NNfunction-ss_dRsR::neuron0x2493cc0() {
   return input4;
}

double NNfunction-ss_dRsR::neuron0x2494000() {
   return input5;
}

double NNfunction-ss_dRsR::neuron0x2494340() {
   return input6;
}

double NNfunction-ss_dRsR::neuron0x2494680() {
   return input7;
}

double NNfunction-ss_dRsR::neuron0x24949c0() {
   return input8;
}

double NNfunction-ss_dRsR::neuron0x2494d00() {
   return input9;
}

double NNfunction-ss_dRsR::neuron0x2495040() {
   return input10;
}

double NNfunction-ss_dRsR::neuron0x2495380() {
   return input11;
}

double NNfunction-ss_dRsR::neuron0x24956c0() {
   return input12;
}

double NNfunction-ss_dRsR::neuron0x2495a00() {
   return input13;
}

double NNfunction-ss_dRsR::neuron0x2495d40() {
   return input14;
}

double NNfunction-ss_dRsR::neuron0x2496080() {
   return input15;
}

double NNfunction-ss_dRsR::neuron0x24963c0() {
   return input16;
}

double NNfunction-ss_dRsR::neuron0x2496920() {
   return input17;
}

double NNfunction-ss_dRsR::neuron0x2496b40() {
   return input18;
}

double NNfunction-ss_dRsR::neuron0x2496e80() {
   return input19;
}

double NNfunction-ss_dRsR::neuron0x24971c0() {
   return input20;
}

double NNfunction-ss_dRsR::neuron0x2497500() {
   return input21;
}

double NNfunction-ss_dRsR::neuron0x2497840() {
   return input22;
}

double NNfunction-ss_dRsR::neuron0x2497b80() {
   return input23;
}

double NNfunction-ss_dRsR::input0x2497ff0() {
   double input = 0.956674;
   input += synapse0x2492e80();
   input += synapse0x2492ec0();
   input += synapse0x24982a0();
   input += synapse0x24982e0();
   input += synapse0x2498320();
   input += synapse0x2498360();
   input += synapse0x24983a0();
   input += synapse0x24983e0();
   input += synapse0x2498420();
   input += synapse0x2498460();
   input += synapse0x24984a0();
   input += synapse0x24984e0();
   input += synapse0x2498520();
   input += synapse0x2498560();
   input += synapse0x24985a0();
   input += synapse0x24985e0();
   input += synapse0x2492df0();
   input += synapse0x2492e30();
   input += synapse0x224e1b0();
   input += synapse0x224e1f0();
   input += synapse0x2498840();
   input += synapse0x2498880();
   input += synapse0x24988c0();
   input += synapse0x2498900();
   return input;
}

double NNfunction-ss_dRsR::neuron0x2497ff0() {
   double input = input0x2497ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x2498940() {
   double input = -1.58622;
   input += synapse0x2498c80();
   input += synapse0x2498cc0();
   input += synapse0x2498d00();
   input += synapse0x2498d40();
   input += synapse0x2498d80();
   input += synapse0x2498dc0();
   input += synapse0x2498e00();
   input += synapse0x2498e40();
   input += synapse0x2498e80();
   input += synapse0x2498730();
   input += synapse0x2498770();
   input += synapse0x24987b0();
   input += synapse0x24987f0();
   input += synapse0x24990d0();
   input += synapse0x2499110();
   input += synapse0x2499150();
   input += synapse0x2498ad0();
   input += synapse0x2498b10();
   input += synapse0x24992a0();
   input += synapse0x24992e0();
   input += synapse0x2499320();
   input += synapse0x2499360();
   input += synapse0x24993a0();
   input += synapse0x24993e0();
   return input;
}

double NNfunction-ss_dRsR::neuron0x2498940() {
   double input = input0x2498940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x2499420() {
   double input = -1.39941;
   input += synapse0x2499760();
   input += synapse0x24997a0();
   input += synapse0x24997e0();
   input += synapse0x2499820();
   input += synapse0x2499860();
   input += synapse0x24998a0();
   input += synapse0x24998e0();
   input += synapse0x2499920();
   input += synapse0x2499960();
   input += synapse0x24999a0();
   input += synapse0x24999e0();
   input += synapse0x2499a20();
   input += synapse0x2499a60();
   input += synapse0x2499aa0();
   input += synapse0x2499ae0();
   input += synapse0x2499b20();
   input += synapse0x24995b0();
   input += synapse0x24995f0();
   input += synapse0x224d300();
   input += synapse0x225c090();
   input += synapse0x225c0d0();
   input += synapse0x2482050();
   input += synapse0x2482090();
   input += synapse0x24820d0();
   return input;
}

double NNfunction-ss_dRsR::neuron0x2499420() {
   double input = input0x2499420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x2498ec0() {
   double input = -3.99195;
   input += synapse0x225c910();
   input += synapse0x2499050();
   input += synapse0x2499090();
   input += synapse0x2499c70();
   input += synapse0x2499cb0();
   input += synapse0x2499cf0();
   input += synapse0x2499d30();
   input += synapse0x2499d70();
   input += synapse0x2499db0();
   input += synapse0x2499df0();
   input += synapse0x2499e30();
   input += synapse0x2499e70();
   input += synapse0x2499eb0();
   input += synapse0x2499ef0();
   input += synapse0x2499f30();
   input += synapse0x2499f70();
   input += synapse0x2492f00();
   input += synapse0x2492f40();
   input += synapse0x2492f80();
   input += synapse0x249a0c0();
   input += synapse0x249a100();
   input += synapse0x249a140();
   input += synapse0x249a180();
   input += synapse0x249a1c0();
   return input;
}

double NNfunction-ss_dRsR::neuron0x2498ec0() {
   double input = input0x2498ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x249a200() {
   double input = -1.23743;
   input += synapse0x249a540();
   input += synapse0x249a580();
   input += synapse0x249a5c0();
   input += synapse0x249a600();
   input += synapse0x249a640();
   input += synapse0x249a680();
   input += synapse0x249a6c0();
   input += synapse0x249a700();
   input += synapse0x249a740();
   input += synapse0x249a780();
   input += synapse0x249a7c0();
   input += synapse0x249a800();
   input += synapse0x249a840();
   input += synapse0x249a880();
   input += synapse0x249a8c0();
   input += synapse0x249a900();
   input += synapse0x249a390();
   input += synapse0x249a3d0();
   input += synapse0x249aa50();
   input += synapse0x249aa90();
   input += synapse0x249aad0();
   input += synapse0x249ab10();
   input += synapse0x249ab50();
   input += synapse0x249ab90();
   return input;
}

double NNfunction-ss_dRsR::neuron0x249a200() {
   double input = input0x249a200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x249abd0() {
   double input = -0.231544;
   input += synapse0x249af10();
   input += synapse0x249af50();
   input += synapse0x249af90();
   input += synapse0x249afd0();
   input += synapse0x249b010();
   input += synapse0x249b050();
   input += synapse0x249b090();
   input += synapse0x249b0d0();
   input += synapse0x249b110();
   input += synapse0x225c3e0();
   input += synapse0x225c420();
   input += synapse0x225c460();
   input += synapse0x225c4a0();
   input += synapse0x225c4e0();
   input += synapse0x225c520();
   input += synapse0x225c560();
   input += synapse0x249ad60();
   input += synapse0x249ada0();
   input += synapse0x225c6b0();
   input += synapse0x225c6f0();
   input += synapse0x225c730();
   input += synapse0x225c770();
   input += synapse0x225c7b0();
   input += synapse0x249b960();
   return input;
}

double NNfunction-ss_dRsR::neuron0x249abd0() {
   double input = input0x249abd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x249b9a0() {
   double input = -0.738509;
   input += synapse0x249bce0();
   input += synapse0x249bd20();
   input += synapse0x249bd60();
   input += synapse0x249bda0();
   input += synapse0x249bde0();
   input += synapse0x249be20();
   input += synapse0x249be60();
   input += synapse0x249bea0();
   input += synapse0x249bee0();
   input += synapse0x249bf20();
   input += synapse0x249bf60();
   input += synapse0x249bfa0();
   input += synapse0x249bfe0();
   input += synapse0x249c020();
   input += synapse0x249c060();
   input += synapse0x249c0a0();
   input += synapse0x249bb30();
   input += synapse0x249bb70();
   input += synapse0x249c1f0();
   input += synapse0x249c230();
   input += synapse0x249c270();
   input += synapse0x249c2b0();
   input += synapse0x249c2f0();
   input += synapse0x249c330();
   return input;
}

double NNfunction-ss_dRsR::neuron0x249b9a0() {
   double input = input0x249b9a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x249c370() {
   double input = -0.864241;
   input += synapse0x249c6b0();
   input += synapse0x249c6f0();
   input += synapse0x249c730();
   input += synapse0x249c770();
   input += synapse0x249c7b0();
   input += synapse0x249c7f0();
   input += synapse0x249c830();
   input += synapse0x249c870();
   input += synapse0x249c8b0();
   input += synapse0x249c8f0();
   input += synapse0x249c930();
   input += synapse0x249c970();
   input += synapse0x249c9b0();
   input += synapse0x249c9f0();
   input += synapse0x249ca30();
   input += synapse0x249ca70();
   input += synapse0x249c500();
   input += synapse0x249c540();
   input += synapse0x249cbc0();
   input += synapse0x249cc00();
   input += synapse0x249cc40();
   input += synapse0x249cc80();
   input += synapse0x249ccc0();
   input += synapse0x249cd00();
   return input;
}

double NNfunction-ss_dRsR::neuron0x249c370() {
   double input = input0x249c370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x249cd40() {
   double input = 0.184947;
   input += synapse0x2496810();
   input += synapse0x2496850();
   input += synapse0x2496890();
   input += synapse0x24968d0();
   input += synapse0x249d290();
   input += synapse0x249d2d0();
   input += synapse0x249d310();
   input += synapse0x249d350();
   input += synapse0x249d390();
   input += synapse0x249d3d0();
   input += synapse0x249d410();
   input += synapse0x249d450();
   input += synapse0x249d490();
   input += synapse0x249d4d0();
   input += synapse0x249d510();
   input += synapse0x249d550();
   input += synapse0x249ced0();
   input += synapse0x249cf10();
   input += synapse0x249d6a0();
   input += synapse0x249d6e0();
   input += synapse0x249d720();
   input += synapse0x249d760();
   input += synapse0x249d7a0();
   input += synapse0x249d7e0();
   return input;
}

double NNfunction-ss_dRsR::neuron0x249cd40() {
   double input = input0x249cd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x249d820() {
   double input = 0.859543;
   input += synapse0x249db60();
   input += synapse0x249dba0();
   input += synapse0x249dbe0();
   input += synapse0x249dc20();
   input += synapse0x249dc60();
   input += synapse0x249dca0();
   input += synapse0x249dce0();
   input += synapse0x249dd20();
   input += synapse0x249dd60();
   input += synapse0x249dda0();
   input += synapse0x249dde0();
   input += synapse0x249de20();
   input += synapse0x249de60();
   input += synapse0x249dea0();
   input += synapse0x249dee0();
   input += synapse0x249df20();
   input += synapse0x249d9b0();
   input += synapse0x249d9f0();
   input += synapse0x249e070();
   input += synapse0x249e0b0();
   input += synapse0x249e0f0();
   input += synapse0x249e130();
   input += synapse0x249e170();
   input += synapse0x249e1b0();
   return input;
}

double NNfunction-ss_dRsR::neuron0x249d820() {
   double input = input0x249d820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x249e1f0() {
   double input = -1.12918;
   input += synapse0x249e530();
   input += synapse0x249e570();
   input += synapse0x249e5b0();
   input += synapse0x249e5f0();
   input += synapse0x249e630();
   input += synapse0x249e670();
   input += synapse0x249e6b0();
   input += synapse0x249e6f0();
   input += synapse0x249e730();
   input += synapse0x249e770();
   input += synapse0x249e7b0();
   input += synapse0x249e7f0();
   input += synapse0x249e830();
   input += synapse0x249e870();
   input += synapse0x249e8b0();
   input += synapse0x249e8f0();
   input += synapse0x249e380();
   input += synapse0x249e3c0();
   input += synapse0x249b150();
   input += synapse0x249b190();
   input += synapse0x249b1d0();
   input += synapse0x249b210();
   input += synapse0x249b250();
   input += synapse0x249b290();
   return input;
}

double NNfunction-ss_dRsR::neuron0x249e1f0() {
   double input = input0x249e1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x249b2d0() {
   double input = 1.22834;
   input += synapse0x249b610();
   input += synapse0x249b650();
   input += synapse0x249b690();
   input += synapse0x249b6d0();
   input += synapse0x249b710();
   input += synapse0x249b750();
   input += synapse0x249b790();
   input += synapse0x249b7d0();
   input += synapse0x249b810();
   input += synapse0x249b850();
   input += synapse0x249b890();
   input += synapse0x249b8d0();
   input += synapse0x249b910();
   input += synapse0x249fa50();
   input += synapse0x249fa90();
   input += synapse0x249fad0();
   input += synapse0x249b460();
   input += synapse0x249b4a0();
   input += synapse0x249fc20();
   input += synapse0x249fc60();
   input += synapse0x249fca0();
   input += synapse0x249fce0();
   input += synapse0x249fd20();
   input += synapse0x249fd60();
   return input;
}

double NNfunction-ss_dRsR::neuron0x249b2d0() {
   double input = input0x249b2d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x249fda0() {
   double input = -3.24871;
   input += synapse0x24a00e0();
   input += synapse0x24a0120();
   input += synapse0x24a0160();
   input += synapse0x24a01a0();
   input += synapse0x24a01e0();
   input += synapse0x24a0220();
   input += synapse0x24a0260();
   input += synapse0x24a02a0();
   input += synapse0x24a02e0();
   input += synapse0x24a0320();
   input += synapse0x24a0360();
   input += synapse0x24a03a0();
   input += synapse0x24a03e0();
   input += synapse0x24a0420();
   input += synapse0x24a0460();
   input += synapse0x24a04a0();
   input += synapse0x249ff30();
   input += synapse0x249ff70();
   input += synapse0x24a05f0();
   input += synapse0x24a0630();
   input += synapse0x24a0670();
   input += synapse0x24a06b0();
   input += synapse0x24a06f0();
   input += synapse0x24a0730();
   return input;
}

double NNfunction-ss_dRsR::neuron0x249fda0() {
   double input = input0x249fda0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24a0770() {
   double input = 1.87458;
   input += synapse0x24a0ab0();
   input += synapse0x24a0af0();
   input += synapse0x24a0b30();
   input += synapse0x24a0b70();
   input += synapse0x24a0bb0();
   input += synapse0x24a0bf0();
   input += synapse0x24a0c30();
   input += synapse0x24a0c70();
   input += synapse0x24a0cb0();
   input += synapse0x24a0cf0();
   input += synapse0x24a0d30();
   input += synapse0x24a0d70();
   input += synapse0x24a0db0();
   input += synapse0x24a0df0();
   input += synapse0x24a0e30();
   input += synapse0x24a0e70();
   input += synapse0x24a0900();
   input += synapse0x24a0940();
   input += synapse0x24a0fc0();
   input += synapse0x24a1000();
   input += synapse0x24a1040();
   input += synapse0x24a1080();
   input += synapse0x24a10c0();
   input += synapse0x24a1100();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24a0770() {
   double input = input0x24a0770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24a1140() {
   double input = -0.705072;
   input += synapse0x24a1480();
   input += synapse0x24a14c0();
   input += synapse0x24a1500();
   input += synapse0x24a1540();
   input += synapse0x24a1580();
   input += synapse0x24a15c0();
   input += synapse0x24a1600();
   input += synapse0x24a1640();
   input += synapse0x24a1680();
   input += synapse0x24a16c0();
   input += synapse0x24a1700();
   input += synapse0x24a1740();
   input += synapse0x24a1780();
   input += synapse0x24a17c0();
   input += synapse0x24a1800();
   input += synapse0x24a1840();
   input += synapse0x24a12d0();
   input += synapse0x24a1310();
   input += synapse0x24a1990();
   input += synapse0x24a19d0();
   input += synapse0x24a1a10();
   input += synapse0x24a1a50();
   input += synapse0x24a1a90();
   input += synapse0x24a1ad0();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24a1140() {
   double input = input0x24a1140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24a1b10() {
   double input = 0.198833;
   input += synapse0x24a1e50();
   input += synapse0x24931e0();
   input += synapse0x2493220();
   input += synapse0x2493520();
   input += synapse0x2493560();
   input += synapse0x2493860();
   input += synapse0x24938a0();
   input += synapse0x2493ba0();
   input += synapse0x2493be0();
   input += synapse0x2493ee0();
   input += synapse0x2493f20();
   input += synapse0x2494220();
   input += synapse0x2494260();
   input += synapse0x2494560();
   input += synapse0x24945a0();
   input += synapse0x24948a0();
   input += synapse0x24948e0();
   input += synapse0x2494be0();
   input += synapse0x2494c20();
   input += synapse0x2494f20();
   input += synapse0x2494f60();
   input += synapse0x2495260();
   input += synapse0x24952a0();
   input += synapse0x24955a0();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24a1b10() {
   double input = input0x24a1b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24a3920() {
   double input = -0.25307;
   input += synapse0x24955e0();
   input += synapse0x24962a0();
   input += synapse0x24962e0();
   input += synapse0x24a1ca0();
   input += synapse0x24a1ce0();
   input += synapse0x24965e0();
   input += synapse0x2496620();
   input += synapse0x224e090();
   input += synapse0x224e0d0();
   input += synapse0x2496d60();
   input += synapse0x2496da0();
   input += synapse0x24970a0();
   input += synapse0x24970e0();
   input += synapse0x24973e0();
   input += synapse0x2497420();
   input += synapse0x2497720();
   input += synapse0x2497760();
   input += synapse0x2497a60();
   input += synapse0x2497aa0();
   input += synapse0x2497da0();
   input += synapse0x2497de0();
   input += synapse0x24958e0();
   input += synapse0x2495920();
   input += synapse0x24a3bc0();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24a3920() {
   double input = input0x24a3920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24a3c00() {
   double input = -0.835236;
   input += synapse0x24a3f40();
   input += synapse0x24a3f80();
   input += synapse0x24a3fc0();
   input += synapse0x24a4000();
   input += synapse0x24a4040();
   input += synapse0x24a4080();
   input += synapse0x24a40c0();
   input += synapse0x24a4100();
   input += synapse0x24a4140();
   input += synapse0x24a4180();
   input += synapse0x24a41c0();
   input += synapse0x24a4200();
   input += synapse0x24a4240();
   input += synapse0x24a4280();
   input += synapse0x24a42c0();
   input += synapse0x24a4300();
   input += synapse0x24a3d90();
   input += synapse0x24a3dd0();
   input += synapse0x24a4450();
   input += synapse0x24a4490();
   input += synapse0x24a44d0();
   input += synapse0x24a4510();
   input += synapse0x24a4550();
   input += synapse0x24a4590();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24a3c00() {
   double input = input0x24a3c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24a45d0() {
   double input = 0.40116;
   input += synapse0x24a4910();
   input += synapse0x24a4950();
   input += synapse0x24a4990();
   input += synapse0x24a49d0();
   input += synapse0x24a4a10();
   input += synapse0x24a4a50();
   input += synapse0x24a4a90();
   input += synapse0x24a4ad0();
   input += synapse0x24a4b10();
   input += synapse0x24a4b50();
   input += synapse0x24a4b90();
   input += synapse0x24a4bd0();
   input += synapse0x24a4c10();
   input += synapse0x24a4c50();
   input += synapse0x24a4c90();
   input += synapse0x24a4cd0();
   input += synapse0x24a4760();
   input += synapse0x24a47a0();
   input += synapse0x24a4e20();
   input += synapse0x24a4e60();
   input += synapse0x24a4ea0();
   input += synapse0x24a4ee0();
   input += synapse0x24a4f20();
   input += synapse0x24a4f60();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24a45d0() {
   double input = input0x24a45d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24a4fa0() {
   double input = -0.845642;
   input += synapse0x24a52e0();
   input += synapse0x24a5320();
   input += synapse0x24a5360();
   input += synapse0x24a53a0();
   input += synapse0x24a53e0();
   input += synapse0x24a5420();
   input += synapse0x24a5460();
   input += synapse0x24a54a0();
   input += synapse0x24a54e0();
   input += synapse0x24a5520();
   input += synapse0x24a5560();
   input += synapse0x24a55a0();
   input += synapse0x24a55e0();
   input += synapse0x24a5620();
   input += synapse0x24a5660();
   input += synapse0x24a56a0();
   input += synapse0x24a5130();
   input += synapse0x24a5170();
   input += synapse0x24a57f0();
   input += synapse0x24a5830();
   input += synapse0x24a5870();
   input += synapse0x24a58b0();
   input += synapse0x24a58f0();
   input += synapse0x24a5930();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24a4fa0() {
   double input = input0x24a4fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24a5970() {
   double input = 1.02505;
   input += synapse0x24a5cb0();
   input += synapse0x24a5cf0();
   input += synapse0x24a5d30();
   input += synapse0x24a5d70();
   input += synapse0x24a5db0();
   input += synapse0x24a5df0();
   input += synapse0x24a5e30();
   input += synapse0x24a5e70();
   input += synapse0x24a5eb0();
   input += synapse0x24a5ef0();
   input += synapse0x24a5f30();
   input += synapse0x24a5f70();
   input += synapse0x24a5fb0();
   input += synapse0x24a5ff0();
   input += synapse0x24a6030();
   input += synapse0x24a6070();
   input += synapse0x24a5b00();
   input += synapse0x24a5b40();
   input += synapse0x24a61c0();
   input += synapse0x24a6200();
   input += synapse0x24a6240();
   input += synapse0x24a6280();
   input += synapse0x24a62c0();
   input += synapse0x24a6300();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24a5970() {
   double input = input0x24a5970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24a6340() {
   double input = 0.528292;
   input += synapse0x24a6680();
   input += synapse0x24a66c0();
   input += synapse0x24a6700();
   input += synapse0x24a6740();
   input += synapse0x24a6780();
   input += synapse0x24a67c0();
   input += synapse0x24a6800();
   input += synapse0x24a6840();
   input += synapse0x24a6880();
   input += synapse0x249ea40();
   input += synapse0x249ea80();
   input += synapse0x249eac0();
   input += synapse0x249eb00();
   input += synapse0x249eb40();
   input += synapse0x249eb80();
   input += synapse0x249ebc0();
   input += synapse0x24a64d0();
   input += synapse0x24a6510();
   input += synapse0x249ed10();
   input += synapse0x249ed50();
   input += synapse0x249ed90();
   input += synapse0x249edd0();
   input += synapse0x249ee10();
   input += synapse0x249ee50();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24a6340() {
   double input = input0x24a6340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x249ee90() {
   double input = -0.508508;
   input += synapse0x249f1d0();
   input += synapse0x249f210();
   input += synapse0x249f250();
   input += synapse0x249f290();
   input += synapse0x249f2d0();
   input += synapse0x249f310();
   input += synapse0x249f350();
   input += synapse0x249f390();
   input += synapse0x249f3d0();
   input += synapse0x249f410();
   input += synapse0x249f450();
   input += synapse0x249f490();
   input += synapse0x249f4d0();
   input += synapse0x249f510();
   input += synapse0x249f550();
   input += synapse0x249f590();
   input += synapse0x249f020();
   input += synapse0x249f060();
   input += synapse0x249f6e0();
   input += synapse0x249f720();
   input += synapse0x249f760();
   input += synapse0x249f7a0();
   input += synapse0x249f7e0();
   input += synapse0x249f820();
   return input;
}

double NNfunction-ss_dRsR::neuron0x249ee90() {
   double input = input0x249ee90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x249f860() {
   double input = 1.83504;
   input += synapse0x249f9f0();
   input += synapse0x24a8a80();
   input += synapse0x24a8ac0();
   input += synapse0x24a8b00();
   input += synapse0x24a8b40();
   input += synapse0x24a8b80();
   input += synapse0x24a8bc0();
   input += synapse0x24a8c00();
   input += synapse0x24a8c40();
   input += synapse0x24a8c80();
   input += synapse0x24a8cc0();
   input += synapse0x24a8d00();
   input += synapse0x24a8d40();
   input += synapse0x24a8d80();
   input += synapse0x24a8dc0();
   input += synapse0x24a8e00();
   input += synapse0x24a88d0();
   input += synapse0x24a8910();
   input += synapse0x24a8f50();
   input += synapse0x24a8f90();
   input += synapse0x24a8fd0();
   input += synapse0x24a9010();
   input += synapse0x24a9050();
   input += synapse0x24a9090();
   return input;
}

double NNfunction-ss_dRsR::neuron0x249f860() {
   double input = input0x249f860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24a90d0() {
   double input = -0.551198;
   input += synapse0x24a9410();
   input += synapse0x24a9450();
   input += synapse0x24a9490();
   input += synapse0x24a94d0();
   input += synapse0x24a9510();
   input += synapse0x24a9550();
   input += synapse0x24a9590();
   input += synapse0x24a95d0();
   input += synapse0x24a9610();
   input += synapse0x24a9650();
   input += synapse0x24a9690();
   input += synapse0x24a96d0();
   input += synapse0x24a9710();
   input += synapse0x24a9750();
   input += synapse0x24a9790();
   input += synapse0x24a97d0();
   input += synapse0x24a9260();
   input += synapse0x24a92a0();
   input += synapse0x24a9920();
   input += synapse0x24a9960();
   input += synapse0x24a99a0();
   input += synapse0x24a99e0();
   input += synapse0x24a9a20();
   input += synapse0x24a9a60();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24a90d0() {
   double input = input0x24a90d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24a9aa0() {
   double input = 1.61849;
   input += synapse0x24a9de0();
   input += synapse0x24a9e20();
   input += synapse0x24a9e60();
   input += synapse0x24a9ea0();
   input += synapse0x24a9ee0();
   input += synapse0x24a9f20();
   input += synapse0x24a9f60();
   input += synapse0x24a9fa0();
   input += synapse0x24a9fe0();
   input += synapse0x24aa020();
   input += synapse0x24aa060();
   input += synapse0x24aa0a0();
   input += synapse0x24aa0e0();
   input += synapse0x24aa120();
   input += synapse0x24aa160();
   input += synapse0x24aa1a0();
   input += synapse0x24a9c30();
   input += synapse0x24a9c70();
   input += synapse0x24aa2f0();
   input += synapse0x24aa330();
   input += synapse0x24aa370();
   input += synapse0x24aa3b0();
   input += synapse0x24aa3f0();
   input += synapse0x24aa430();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24a9aa0() {
   double input = input0x24a9aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24aa470() {
   double input = -1.88016;
   input += synapse0x24aa7b0();
   input += synapse0x24aa7f0();
   input += synapse0x24aa830();
   input += synapse0x24aa870();
   input += synapse0x24aa8b0();
   input += synapse0x24aa8f0();
   input += synapse0x24aa930();
   input += synapse0x24aa970();
   input += synapse0x24aa9b0();
   input += synapse0x24aa9f0();
   input += synapse0x24aaa30();
   input += synapse0x24aaa70();
   input += synapse0x24aaab0();
   input += synapse0x24aaaf0();
   input += synapse0x24aab30();
   input += synapse0x24aab70();
   input += synapse0x24aa600();
   input += synapse0x24aa640();
   input += synapse0x24aacc0();
   input += synapse0x24aad00();
   input += synapse0x24aad40();
   input += synapse0x24aad80();
   input += synapse0x24aadc0();
   input += synapse0x24aae00();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24aa470() {
   double input = input0x24aa470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24aae40() {
   double input = -1.39942;
   input += synapse0x24ab180();
   input += synapse0x24ab1c0();
   input += synapse0x24ab200();
   input += synapse0x24ab240();
   input += synapse0x24ab280();
   input += synapse0x24ab2c0();
   input += synapse0x24ab300();
   input += synapse0x24ab340();
   input += synapse0x24ab380();
   input += synapse0x24ab3c0();
   input += synapse0x24ab400();
   input += synapse0x24ab440();
   input += synapse0x24ab480();
   input += synapse0x24ab4c0();
   input += synapse0x24ab500();
   input += synapse0x24ab540();
   input += synapse0x24aafd0();
   input += synapse0x24ab010();
   input += synapse0x24ab690();
   input += synapse0x24ab6d0();
   input += synapse0x24ab710();
   input += synapse0x24ab750();
   input += synapse0x24ab790();
   input += synapse0x24ab7d0();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24aae40() {
   double input = input0x24aae40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24ab810() {
   double input = -2.48377;
   input += synapse0x24abb50();
   input += synapse0x24abb90();
   input += synapse0x24abbd0();
   input += synapse0x24abc10();
   input += synapse0x24abc50();
   input += synapse0x24abc90();
   input += synapse0x24abcd0();
   input += synapse0x24abd10();
   input += synapse0x24abd50();
   input += synapse0x24abd90();
   input += synapse0x24abdd0();
   input += synapse0x24abe10();
   input += synapse0x24abe50();
   input += synapse0x24abe90();
   input += synapse0x24abed0();
   input += synapse0x24abf10();
   input += synapse0x24ab9a0();
   input += synapse0x24ab9e0();
   input += synapse0x24ac060();
   input += synapse0x24ac0a0();
   input += synapse0x24ac0e0();
   input += synapse0x24ac120();
   input += synapse0x24ac160();
   input += synapse0x24ac1a0();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24ab810() {
   double input = input0x24ab810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24ac1e0() {
   double input = 0.237304;
   input += synapse0x24ac520();
   input += synapse0x24ac560();
   input += synapse0x24ac5a0();
   input += synapse0x24ac5e0();
   input += synapse0x24ac620();
   input += synapse0x24ac660();
   input += synapse0x24ac6a0();
   input += synapse0x24ac6e0();
   input += synapse0x24ac720();
   input += synapse0x24ac760();
   input += synapse0x24ac7a0();
   input += synapse0x24ac7e0();
   input += synapse0x24ac820();
   input += synapse0x24ac860();
   input += synapse0x24ac8a0();
   input += synapse0x24ac8e0();
   input += synapse0x24ac370();
   input += synapse0x24ac3b0();
   input += synapse0x24aca30();
   input += synapse0x24aca70();
   input += synapse0x24acab0();
   input += synapse0x24acaf0();
   input += synapse0x24acb30();
   input += synapse0x24acb70();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24ac1e0() {
   double input = input0x24ac1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24acbb0() {
   double input = -1.22006;
   input += synapse0x24acef0();
   input += synapse0x24acf30();
   input += synapse0x24acf70();
   input += synapse0x24acfb0();
   input += synapse0x24acff0();
   input += synapse0x24ad030();
   input += synapse0x24ad070();
   input += synapse0x24ad0b0();
   input += synapse0x24ad0f0();
   input += synapse0x24ad130();
   input += synapse0x24ad170();
   input += synapse0x24ad1b0();
   input += synapse0x24ad1f0();
   input += synapse0x24ad230();
   input += synapse0x24ad270();
   input += synapse0x24ad2b0();
   input += synapse0x24acd40();
   input += synapse0x24acd80();
   input += synapse0x24ad400();
   input += synapse0x24ad440();
   input += synapse0x24ad480();
   input += synapse0x24ad4c0();
   input += synapse0x24ad500();
   input += synapse0x24ad540();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24acbb0() {
   double input = input0x24acbb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24ad580() {
   double input = 1.82451;
   input += synapse0x24ad8c0();
   input += synapse0x24a1e90();
   input += synapse0x24a1ed0();
   input += synapse0x24a1f10();
   input += synapse0x24a2160();
   input += synapse0x24a21a0();
   input += synapse0x24a21e0();
   input += synapse0x24a2430();
   input += synapse0x24a2470();
   input += synapse0x24a26c0();
   input += synapse0x24a2700();
   input += synapse0x24a2740();
   input += synapse0x24a2990();
   input += synapse0x24a29d0();
   input += synapse0x24a2c20();
   input += synapse0x24a2c60();
   input += synapse0x24ad710();
   input += synapse0x24ad750();
   input += synapse0x24a2db0();
   input += synapse0x24a32c0();
   input += synapse0x24a3300();
   input += synapse0x24a3340();
   input += synapse0x24a3590();
   input += synapse0x24a35d0();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24ad580() {
   double input = input0x24ad580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24a3610() {
   double input = -0.401416;
   input += synapse0x24a2e80();
   input += synapse0x24a2ec0();
   input += synapse0x24a2f00();
   input += synapse0x24a2f40();
   input += synapse0x24a38c0();
   input += synapse0x24afc10();
   input += synapse0x24afc50();
   input += synapse0x24afc90();
   input += synapse0x24afcd0();
   input += synapse0x24afd10();
   input += synapse0x24afd50();
   input += synapse0x24afd90();
   input += synapse0x24afdd0();
   input += synapse0x24afe10();
   input += synapse0x24afe50();
   input += synapse0x24afe90();
   input += synapse0x24a37a0();
   input += synapse0x24a37e0();
   input += synapse0x24affe0();
   input += synapse0x24b0020();
   input += synapse0x24b0060();
   input += synapse0x24b00a0();
   input += synapse0x24b00e0();
   input += synapse0x24b0120();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24a3610() {
   double input = input0x24a3610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24b0160() {
   double input = 0.195942;
   input += synapse0x24b04a0();
   input += synapse0x24b04e0();
   input += synapse0x24b0520();
   input += synapse0x24b0560();
   input += synapse0x24b05a0();
   input += synapse0x24b05e0();
   input += synapse0x24b0620();
   input += synapse0x24b0660();
   input += synapse0x24b06a0();
   input += synapse0x24b06e0();
   input += synapse0x24b0720();
   input += synapse0x24b0760();
   input += synapse0x24b07a0();
   input += synapse0x24b07e0();
   input += synapse0x24b0820();
   input += synapse0x24b0860();
   input += synapse0x24b02f0();
   input += synapse0x24b0330();
   input += synapse0x24b09b0();
   input += synapse0x24b09f0();
   input += synapse0x24b0a30();
   input += synapse0x24b0a70();
   input += synapse0x24b0ab0();
   input += synapse0x24b0af0();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24b0160() {
   double input = input0x24b0160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24b0b30() {
   double input = 0.812578;
   input += synapse0x24b0e70();
   input += synapse0x24b0eb0();
   input += synapse0x24b0ef0();
   input += synapse0x24b0f30();
   input += synapse0x24b0f70();
   input += synapse0x24b0fb0();
   input += synapse0x24b0ff0();
   input += synapse0x24b1030();
   input += synapse0x24b1070();
   input += synapse0x24b10b0();
   input += synapse0x24b10f0();
   input += synapse0x24b1130();
   input += synapse0x24b1170();
   input += synapse0x24b11b0();
   input += synapse0x24b11f0();
   input += synapse0x24b1230();
   input += synapse0x24b0cc0();
   input += synapse0x24b0d00();
   input += synapse0x24b1380();
   input += synapse0x24b13c0();
   input += synapse0x24b1400();
   input += synapse0x24b1440();
   input += synapse0x24b1480();
   input += synapse0x24b14c0();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24b0b30() {
   double input = input0x24b0b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24b1500() {
   double input = 1.39752;
   input += synapse0x24b1840();
   input += synapse0x24b1880();
   input += synapse0x24b18c0();
   input += synapse0x24b1900();
   input += synapse0x24b1940();
   input += synapse0x24b1980();
   input += synapse0x24b19c0();
   input += synapse0x24b1a00();
   input += synapse0x24b1a40();
   input += synapse0x24b1a80();
   input += synapse0x24b1ac0();
   input += synapse0x24b1b00();
   input += synapse0x24b1b40();
   input += synapse0x24b1b80();
   input += synapse0x24b1bc0();
   input += synapse0x24b1c00();
   input += synapse0x24b1690();
   input += synapse0x24b16d0();
   input += synapse0x24b1d50();
   input += synapse0x24b1d90();
   input += synapse0x24b1dd0();
   input += synapse0x24b1e10();
   input += synapse0x24b1e50();
   input += synapse0x24b1e90();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24b1500() {
   double input = input0x24b1500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24b1ed0() {
   double input = 0.459983;
   input += synapse0x24b2210();
   input += synapse0x24b2250();
   input += synapse0x24b2290();
   input += synapse0x24b22d0();
   input += synapse0x24b2310();
   input += synapse0x24b2350();
   input += synapse0x24b2390();
   input += synapse0x24b23d0();
   input += synapse0x24b2410();
   input += synapse0x24b2450();
   input += synapse0x24b2490();
   input += synapse0x24b24d0();
   input += synapse0x24b2510();
   input += synapse0x24b2550();
   input += synapse0x24b2590();
   input += synapse0x24b25d0();
   input += synapse0x24b2060();
   input += synapse0x24b20a0();
   input += synapse0x24b2720();
   input += synapse0x24b2760();
   input += synapse0x24b27a0();
   input += synapse0x24b27e0();
   input += synapse0x24b2820();
   input += synapse0x24b2860();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24b1ed0() {
   double input = input0x24b1ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24b28a0() {
   double input = 0.236555;
   input += synapse0x24b2be0();
   input += synapse0x24b2c20();
   input += synapse0x24b2c60();
   input += synapse0x24b2ca0();
   input += synapse0x24b2ce0();
   input += synapse0x24b2d20();
   input += synapse0x24b2d60();
   input += synapse0x24b2da0();
   input += synapse0x24b2de0();
   input += synapse0x24b2e20();
   input += synapse0x24b2e60();
   input += synapse0x24b2ea0();
   input += synapse0x24b2ee0();
   input += synapse0x24b2f20();
   input += synapse0x24b2f60();
   input += synapse0x24b2fa0();
   input += synapse0x24b2a30();
   input += synapse0x24b2a70();
   input += synapse0x24b30f0();
   input += synapse0x24b3130();
   input += synapse0x24b3170();
   input += synapse0x24b31b0();
   input += synapse0x24b31f0();
   input += synapse0x24b3230();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24b28a0() {
   double input = input0x24b28a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24b3270() {
   double input = 1.5194;
   input += synapse0x24b35b0();
   input += synapse0x24b35f0();
   input += synapse0x24b3630();
   input += synapse0x24b3670();
   input += synapse0x24b36b0();
   input += synapse0x24b36f0();
   input += synapse0x24b3730();
   input += synapse0x24b3770();
   input += synapse0x24b37b0();
   input += synapse0x24b37f0();
   input += synapse0x24b3830();
   input += synapse0x24b3870();
   input += synapse0x24b38b0();
   input += synapse0x24b38f0();
   input += synapse0x24b3930();
   input += synapse0x24b3970();
   input += synapse0x24b3400();
   input += synapse0x24b3440();
   input += synapse0x24b3ac0();
   input += synapse0x24b3b00();
   input += synapse0x24b3b40();
   input += synapse0x24b3b80();
   input += synapse0x24b3bc0();
   input += synapse0x24b3c00();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24b3270() {
   double input = input0x24b3270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24b3c40() {
   double input = -0.0217544;
   input += synapse0x24b3f80();
   input += synapse0x24b3fc0();
   input += synapse0x24b4000();
   input += synapse0x24b4040();
   input += synapse0x24b4080();
   input += synapse0x24b40c0();
   input += synapse0x24b4100();
   input += synapse0x24b4140();
   input += synapse0x24b4180();
   input += synapse0x24b41c0();
   input += synapse0x24b4200();
   input += synapse0x24b4240();
   input += synapse0x24b4280();
   input += synapse0x24b42c0();
   input += synapse0x24b4300();
   input += synapse0x24b4340();
   input += synapse0x24b3dd0();
   input += synapse0x24b3e10();
   input += synapse0x24b4490();
   input += synapse0x24b44d0();
   input += synapse0x24b4510();
   input += synapse0x24b4550();
   input += synapse0x24b4590();
   input += synapse0x24b45d0();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24b3c40() {
   double input = input0x24b3c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24b4610() {
   double input = -0.256365;
   input += synapse0x249d080();
   input += synapse0x249d0c0();
   input += synapse0x249d100();
   input += synapse0x249d140();
   input += synapse0x249d180();
   input += synapse0x249d1c0();
   input += synapse0x249d200();
   input += synapse0x249d240();
   input += synapse0x24b4d60();
   input += synapse0x24b4da0();
   input += synapse0x24b4de0();
   input += synapse0x24b4e20();
   input += synapse0x24b4e60();
   input += synapse0x24b4ea0();
   input += synapse0x24b4ee0();
   input += synapse0x24b4f20();
   input += synapse0x24b47a0();
   input += synapse0x24b47e0();
   input += synapse0x24b5070();
   input += synapse0x24b50b0();
   input += synapse0x24b50f0();
   input += synapse0x24b5130();
   input += synapse0x24b5170();
   input += synapse0x24b51b0();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24b4610() {
   double input = input0x24b4610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24b51f0() {
   double input = 2.76033;
   input += synapse0x24b5530();
   input += synapse0x24b5570();
   input += synapse0x24b55b0();
   input += synapse0x24b55f0();
   input += synapse0x24b5630();
   input += synapse0x24b5670();
   input += synapse0x24b56b0();
   input += synapse0x24b56f0();
   input += synapse0x24b5730();
   input += synapse0x24b5770();
   input += synapse0x24b57b0();
   input += synapse0x24b57f0();
   input += synapse0x24b5830();
   input += synapse0x24b5870();
   input += synapse0x24b58b0();
   input += synapse0x24b58f0();
   input += synapse0x24b5380();
   input += synapse0x24b53c0();
   input += synapse0x24b5a40();
   input += synapse0x24b5a80();
   input += synapse0x24b5ac0();
   input += synapse0x24b5b00();
   input += synapse0x24b5b40();
   input += synapse0x24b5b80();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24b51f0() {
   double input = input0x24b51f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24b5bc0() {
   double input = 3.30644;
   input += synapse0x24b5f00();
   input += synapse0x24b5f40();
   input += synapse0x24b5f80();
   input += synapse0x24b5fc0();
   input += synapse0x24b6000();
   input += synapse0x24b6040();
   input += synapse0x24b6080();
   input += synapse0x24b60c0();
   input += synapse0x24b6100();
   input += synapse0x24b6140();
   input += synapse0x24b6180();
   input += synapse0x24b61c0();
   input += synapse0x24b6200();
   input += synapse0x24b6240();
   input += synapse0x24b6280();
   input += synapse0x24b62c0();
   input += synapse0x24b5d50();
   input += synapse0x24b5d90();
   input += synapse0x24a68c0();
   input += synapse0x24a6900();
   input += synapse0x24a6940();
   input += synapse0x24a6980();
   input += synapse0x24a69c0();
   input += synapse0x24a6a00();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24b5bc0() {
   double input = input0x24b5bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24a6a40() {
   double input = -1.73578;
   input += synapse0x24a6d80();
   input += synapse0x24a6dc0();
   input += synapse0x24a6e00();
   input += synapse0x24a6e40();
   input += synapse0x24a6e80();
   input += synapse0x24a6ec0();
   input += synapse0x24a6f00();
   input += synapse0x24a6f40();
   input += synapse0x24a6f80();
   input += synapse0x24a6fc0();
   input += synapse0x24a7000();
   input += synapse0x24a7040();
   input += synapse0x24a7080();
   input += synapse0x24a70c0();
   input += synapse0x24a7100();
   input += synapse0x24a7140();
   input += synapse0x24a6bd0();
   input += synapse0x24a6c10();
   input += synapse0x24a7290();
   input += synapse0x24a72d0();
   input += synapse0x24a7310();
   input += synapse0x24a7350();
   input += synapse0x24a7390();
   input += synapse0x24a73d0();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24a6a40() {
   double input = input0x24a6a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24a7410() {
   double input = -3.24411;
   input += synapse0x24a7750();
   input += synapse0x24a7790();
   input += synapse0x24a77d0();
   input += synapse0x24a7810();
   input += synapse0x24a7850();
   input += synapse0x24a7890();
   input += synapse0x24a78d0();
   input += synapse0x24a7910();
   input += synapse0x24a7950();
   input += synapse0x24a7990();
   input += synapse0x24a79d0();
   input += synapse0x24a7a10();
   input += synapse0x24a7a50();
   input += synapse0x24a7a90();
   input += synapse0x24a7ad0();
   input += synapse0x24a7b10();
   input += synapse0x24a75a0();
   input += synapse0x24a75e0();
   input += synapse0x24a7c60();
   input += synapse0x24a7ca0();
   input += synapse0x24a7ce0();
   input += synapse0x24a7d20();
   input += synapse0x24a7d60();
   input += synapse0x24a7da0();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24a7410() {
   double input = input0x24a7410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24a7de0() {
   double input = -0.682418;
   input += synapse0x24a8120();
   input += synapse0x24a8160();
   input += synapse0x24a81a0();
   input += synapse0x24a81e0();
   input += synapse0x24a8220();
   input += synapse0x24a8260();
   input += synapse0x24a82a0();
   input += synapse0x24a82e0();
   input += synapse0x24a8320();
   input += synapse0x24a8360();
   input += synapse0x24a83a0();
   input += synapse0x24a83e0();
   input += synapse0x24a8420();
   input += synapse0x24a8460();
   input += synapse0x24a84a0();
   input += synapse0x24a84e0();
   input += synapse0x24a7f70();
   input += synapse0x24a7fb0();
   input += synapse0x24a8630();
   input += synapse0x24a8670();
   input += synapse0x24a86b0();
   input += synapse0x24a86f0();
   input += synapse0x24a8730();
   input += synapse0x24a8770();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24a7de0() {
   double input = input0x24a7de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24ba420() {
   double input = 1.32829;
   input += synapse0x24ba640();
   input += synapse0x24ba680();
   input += synapse0x24ba6c0();
   input += synapse0x24ba700();
   input += synapse0x24ba740();
   input += synapse0x24ba780();
   input += synapse0x24ba7c0();
   input += synapse0x24ba800();
   input += synapse0x24ba840();
   input += synapse0x24ba880();
   input += synapse0x24ba8c0();
   input += synapse0x24ba900();
   input += synapse0x24ba940();
   input += synapse0x24ba980();
   input += synapse0x24ba9c0();
   input += synapse0x24baa00();
   input += synapse0x24a87b0();
   input += synapse0x24a87f0();
   input += synapse0x24bab50();
   input += synapse0x24bab90();
   input += synapse0x24babd0();
   input += synapse0x24bac10();
   input += synapse0x24bac50();
   input += synapse0x24bac90();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24ba420() {
   double input = input0x24ba420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24bacd0() {
   double input = 0.570699;
   input += synapse0x24bb010();
   input += synapse0x24bb050();
   input += synapse0x24bb090();
   input += synapse0x24bb0d0();
   input += synapse0x24bb110();
   input += synapse0x24bb150();
   input += synapse0x24bb190();
   input += synapse0x24bb1d0();
   input += synapse0x24bb210();
   input += synapse0x24bb250();
   input += synapse0x24bb290();
   input += synapse0x24bb2d0();
   input += synapse0x24bb310();
   input += synapse0x24bb350();
   input += synapse0x24bb390();
   input += synapse0x24bb3d0();
   input += synapse0x24bae60();
   input += synapse0x24baea0();
   input += synapse0x24bb520();
   input += synapse0x24bb560();
   input += synapse0x24bb5a0();
   input += synapse0x24bb5e0();
   input += synapse0x24bb620();
   input += synapse0x24bb660();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24bacd0() {
   double input = input0x24bacd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24bb6a0() {
   double input = 0.0809495;
   input += synapse0x24bb9e0();
   input += synapse0x24bba20();
   input += synapse0x24bba60();
   input += synapse0x24bbaa0();
   input += synapse0x24bbae0();
   input += synapse0x24bbb20();
   input += synapse0x24bbb60();
   input += synapse0x24bbba0();
   input += synapse0x24bbbe0();
   input += synapse0x24bbc20();
   input += synapse0x24bbc60();
   input += synapse0x24bbca0();
   input += synapse0x24bbce0();
   input += synapse0x24bbd20();
   input += synapse0x24bbd60();
   input += synapse0x24bbda0();
   input += synapse0x24bb830();
   input += synapse0x24bb870();
   input += synapse0x24bbef0();
   input += synapse0x24bbf30();
   input += synapse0x24bbf70();
   input += synapse0x24bbfb0();
   input += synapse0x24bbff0();
   input += synapse0x24bc030();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24bb6a0() {
   double input = input0x24bb6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24bc070() {
   double input = 0.282185;
   input += synapse0x24bc3b0();
   input += synapse0x24bc3f0();
   input += synapse0x24bc430();
   input += synapse0x24bc470();
   input += synapse0x24bc4b0();
   input += synapse0x24bc4f0();
   input += synapse0x24bc530();
   input += synapse0x24bc570();
   input += synapse0x24bc5b0();
   input += synapse0x24bc5f0();
   input += synapse0x24bc630();
   input += synapse0x24bc670();
   input += synapse0x24bc6b0();
   input += synapse0x24bc6f0();
   input += synapse0x24bc730();
   input += synapse0x24bc770();
   input += synapse0x24bc200();
   input += synapse0x24bc240();
   input += synapse0x24bc8c0();
   input += synapse0x24bc900();
   input += synapse0x24bc940();
   input += synapse0x24bc980();
   input += synapse0x24bc9c0();
   input += synapse0x24bca00();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24bc070() {
   double input = input0x24bc070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24c3270() {
   double input = -0.657468;
   input += synapse0x225c880();
   input += synapse0x225c8c0();
   input += synapse0x249a4b0();
   input += synapse0x249a4f0();
   input += synapse0x249ae80();
   input += synapse0x249aec0();
   input += synapse0x249bc50();
   input += synapse0x249bc90();
   input += synapse0x249c620();
   input += synapse0x249c660();
   input += synapse0x249cff0();
   input += synapse0x249d030();
   input += synapse0x249dad0();
   input += synapse0x249db10();
   input += synapse0x249e4a0();
   input += synapse0x249e4e0();
   input += synapse0x249b580();
   input += synapse0x249b5c0();
   input += synapse0x24a0050();
   input += synapse0x24a0090();
   input += synapse0x24a0a20();
   input += synapse0x24a0a60();
   input += synapse0x24a13f0();
   input += synapse0x24a1430();
   input += synapse0x24a1dc0();
   input += synapse0x24a1e00();
   input += synapse0x2495f60();
   input += synapse0x2495fa0();
   input += synapse0x24a3eb0();
   input += synapse0x24a3ef0();
   input += synapse0x24a4880();
   input += synapse0x24a48c0();
   input += synapse0x24a5250();
   input += synapse0x24a5290();
   input += synapse0x24a5c20();
   input += synapse0x24a5c60();
   input += synapse0x24a65f0();
   input += synapse0x24a6630();
   input += synapse0x249f140();
   input += synapse0x249f180();
   input += synapse0x24a89f0();
   input += synapse0x24a8a30();
   input += synapse0x24a9380();
   input += synapse0x24a93c0();
   input += synapse0x24a9d50();
   input += synapse0x24a9d90();
   input += synapse0x24aa720();
   input += synapse0x24aa760();
   input += synapse0x24ab0f0();
   input += synapse0x24ab130();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24c3270() {
   double input = input0x24c3270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24c3610() {
   double input = 0.582723;
   input += synapse0x24ad830();
   input += synapse0x24ad870();
   input += synapse0x24a2df0();
   input += synapse0x24a2e30();
   input += synapse0x24b0410();
   input += synapse0x24b0450();
   input += synapse0x24b0de0();
   input += synapse0x24b0e20();
   input += synapse0x24b17b0();
   input += synapse0x24b17f0();
   input += synapse0x24b2180();
   input += synapse0x24b21c0();
   input += synapse0x24b2b50();
   input += synapse0x24b2b90();
   input += synapse0x24b3520();
   input += synapse0x24b3560();
   input += synapse0x24b3ef0();
   input += synapse0x24b3f30();
   input += synapse0x24b48c0();
   input += synapse0x24b4900();
   input += synapse0x24b54a0();
   input += synapse0x24b54e0();
   input += synapse0x24b5e70();
   input += synapse0x24b5eb0();
   input += synapse0x24a6cf0();
   input += synapse0x24a6d30();
   input += synapse0x24a76c0();
   input += synapse0x24a7700();
   input += synapse0x24a8090();
   input += synapse0x24a80d0();
   input += synapse0x24ba5b0();
   input += synapse0x24ba5f0();
   input += synapse0x24baf80();
   input += synapse0x24bafc0();
   input += synapse0x24bb950();
   input += synapse0x24bb990();
   input += synapse0x24bc320();
   input += synapse0x24bc360();
   input += synapse0x2498210();
   input += synapse0x2498250();
   input += synapse0x24abac0();
   input += synapse0x24abb00();
   input += synapse0x24bca40();
   input += synapse0x24bca80();
   input += synapse0x24bcac0();
   input += synapse0x24bcb00();
   input += synapse0x24c39b0();
   input += synapse0x24c39f0();
   input += synapse0x24c3a30();
   input += synapse0x24c3a70();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24c3610() {
   double input = input0x24c3610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24c3ab0() {
   double input = -0.446911;
   input += synapse0x24c3df0();
   input += synapse0x24c3e30();
   input += synapse0x24c3e70();
   input += synapse0x24c3eb0();
   input += synapse0x24c3ef0();
   input += synapse0x24c3f30();
   input += synapse0x24c3f70();
   input += synapse0x24c3fb0();
   input += synapse0x24c3ff0();
   input += synapse0x24c4030();
   input += synapse0x24c4070();
   input += synapse0x24c40b0();
   input += synapse0x24c40f0();
   input += synapse0x24c4130();
   input += synapse0x24c4170();
   input += synapse0x24c41b0();
   input += synapse0x24c3c40();
   input += synapse0x24c3c80();
   input += synapse0x24c4300();
   input += synapse0x24c4340();
   input += synapse0x24c4380();
   input += synapse0x24c43c0();
   input += synapse0x24c4400();
   input += synapse0x24c4440();
   input += synapse0x24c4480();
   input += synapse0x24c44c0();
   input += synapse0x24c4500();
   input += synapse0x24c4540();
   input += synapse0x24c4580();
   input += synapse0x24c45c0();
   input += synapse0x24c4600();
   input += synapse0x24c4640();
   input += synapse0x24c41f0();
   input += synapse0x24c4230();
   input += synapse0x24c4270();
   input += synapse0x24c42b0();
   input += synapse0x24c4890();
   input += synapse0x24c48d0();
   input += synapse0x24c4910();
   input += synapse0x24c4950();
   input += synapse0x24c4990();
   input += synapse0x24c49d0();
   input += synapse0x24c4a10();
   input += synapse0x24c4a50();
   input += synapse0x24c4a90();
   input += synapse0x24c4ad0();
   input += synapse0x24c4b10();
   input += synapse0x24c4b50();
   input += synapse0x24c4b90();
   input += synapse0x24c4bd0();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24c3ab0() {
   double input = input0x24c3ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24c4c10() {
   double input = 0.57931;
   input += synapse0x24c4f50();
   input += synapse0x24c4f90();
   input += synapse0x24c4fd0();
   input += synapse0x24c5010();
   input += synapse0x24c5050();
   input += synapse0x24c5090();
   input += synapse0x24c50d0();
   input += synapse0x24c5110();
   input += synapse0x24c5150();
   input += synapse0x24c5190();
   input += synapse0x24c51d0();
   input += synapse0x24c5210();
   input += synapse0x24c5250();
   input += synapse0x24c5290();
   input += synapse0x24c52d0();
   input += synapse0x24c5310();
   input += synapse0x24c4da0();
   input += synapse0x24c4de0();
   input += synapse0x24c5460();
   input += synapse0x24c54a0();
   input += synapse0x24c54e0();
   input += synapse0x24c5520();
   input += synapse0x24c5560();
   input += synapse0x24c55a0();
   input += synapse0x24c55e0();
   input += synapse0x24c5620();
   input += synapse0x24c5660();
   input += synapse0x24c56a0();
   input += synapse0x24c56e0();
   input += synapse0x24c5720();
   input += synapse0x24c5760();
   input += synapse0x24c57a0();
   input += synapse0x24c5350();
   input += synapse0x24c5390();
   input += synapse0x24c53d0();
   input += synapse0x24c5410();
   input += synapse0x24c59f0();
   input += synapse0x24c5a30();
   input += synapse0x24c5a70();
   input += synapse0x24c5ab0();
   input += synapse0x24c5af0();
   input += synapse0x24c5b30();
   input += synapse0x24c5b70();
   input += synapse0x24c5bb0();
   input += synapse0x24c5bf0();
   input += synapse0x24c5c30();
   input += synapse0x24c5c70();
   input += synapse0x24c5cb0();
   input += synapse0x24c5cf0();
   input += synapse0x24c5d30();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24c4c10() {
   double input = input0x24c4c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24c5d70() {
   double input = -1.73528;
   input += synapse0x24c60b0();
   input += synapse0x24c60f0();
   input += synapse0x24c6130();
   input += synapse0x24c6170();
   input += synapse0x24c61b0();
   input += synapse0x24c61f0();
   input += synapse0x24c6230();
   input += synapse0x24c6270();
   input += synapse0x24c62b0();
   input += synapse0x24c62f0();
   input += synapse0x24c6330();
   input += synapse0x24c6370();
   input += synapse0x24c63b0();
   input += synapse0x24c63f0();
   input += synapse0x24c6430();
   input += synapse0x24c6470();
   input += synapse0x24c5f00();
   input += synapse0x24c5f40();
   input += synapse0x24c65c0();
   input += synapse0x24c6600();
   input += synapse0x24c6640();
   input += synapse0x24c6680();
   input += synapse0x24c66c0();
   input += synapse0x24c6700();
   input += synapse0x24c6740();
   input += synapse0x24c6780();
   input += synapse0x24c67c0();
   input += synapse0x24c6800();
   input += synapse0x24c6840();
   input += synapse0x24c6880();
   input += synapse0x24c68c0();
   input += synapse0x24c6900();
   input += synapse0x24c64b0();
   input += synapse0x24c64f0();
   input += synapse0x24c6530();
   input += synapse0x24c6570();
   input += synapse0x24c6b50();
   input += synapse0x24c6b90();
   input += synapse0x24c6bd0();
   input += synapse0x24c6c10();
   input += synapse0x24c6c50();
   input += synapse0x24c6c90();
   input += synapse0x24c6cd0();
   input += synapse0x24c6d10();
   input += synapse0x24c6d50();
   input += synapse0x24c6d90();
   input += synapse0x24c6dd0();
   input += synapse0x24c6e10();
   input += synapse0x24c6e50();
   input += synapse0x24c6e90();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24c5d70() {
   double input = input0x24c5d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRsR::input0x24c6ed0() {
   double input = 3.56886;
   input += synapse0x24c70f0();
   input += synapse0x24c7130();
   input += synapse0x24c7170();
   input += synapse0x24c71b0();
   input += synapse0x24c71f0();
   return input;
}

double NNfunction-ss_dRsR::neuron0x24c6ed0() {
   double input = input0x24c6ed0();
   return (input * 1)+0;
}

double NNfunction-ss_dRsR::synapse0x2492e80() {
   return (neuron0x2492fc0()*-0.468941);
}

double NNfunction-ss_dRsR::synapse0x2492ec0() {
   return (neuron0x2493300()*-0.312497);
}

double NNfunction-ss_dRsR::synapse0x24982a0() {
   return (neuron0x2493640()*0.231267);
}

double NNfunction-ss_dRsR::synapse0x24982e0() {
   return (neuron0x2493980()*0.568546);
}

double NNfunction-ss_dRsR::synapse0x2498320() {
   return (neuron0x2493cc0()*0.0128517);
}

double NNfunction-ss_dRsR::synapse0x2498360() {
   return (neuron0x2494000()*0.829787);
}

double NNfunction-ss_dRsR::synapse0x24983a0() {
   return (neuron0x2494340()*0.143217);
}

double NNfunction-ss_dRsR::synapse0x24983e0() {
   return (neuron0x2494680()*-0.130485);
}

double NNfunction-ss_dRsR::synapse0x2498420() {
   return (neuron0x24949c0()*0.960711);
}

double NNfunction-ss_dRsR::synapse0x2498460() {
   return (neuron0x2494d00()*-0.320421);
}

double NNfunction-ss_dRsR::synapse0x24984a0() {
   return (neuron0x2495040()*0.503883);
}

double NNfunction-ss_dRsR::synapse0x24984e0() {
   return (neuron0x2495380()*0.323957);
}

double NNfunction-ss_dRsR::synapse0x2498520() {
   return (neuron0x24956c0()*-0.694068);
}

double NNfunction-ss_dRsR::synapse0x2498560() {
   return (neuron0x2495a00()*-0.0811894);
}

double NNfunction-ss_dRsR::synapse0x24985a0() {
   return (neuron0x2495d40()*-0.392151);
}

double NNfunction-ss_dRsR::synapse0x24985e0() {
   return (neuron0x2496080()*-0.301238);
}

double NNfunction-ss_dRsR::synapse0x2492df0() {
   return (neuron0x24963c0()*-0.583994);
}

double NNfunction-ss_dRsR::synapse0x2492e30() {
   return (neuron0x2496920()*0.403207);
}

double NNfunction-ss_dRsR::synapse0x224e1b0() {
   return (neuron0x2496b40()*0.236818);
}

double NNfunction-ss_dRsR::synapse0x224e1f0() {
   return (neuron0x2496e80()*-0.637281);
}

double NNfunction-ss_dRsR::synapse0x2498840() {
   return (neuron0x24971c0()*-0.489228);
}

double NNfunction-ss_dRsR::synapse0x2498880() {
   return (neuron0x2497500()*0.659918);
}

double NNfunction-ss_dRsR::synapse0x24988c0() {
   return (neuron0x2497840()*-0.539893);
}

double NNfunction-ss_dRsR::synapse0x2498900() {
   return (neuron0x2497b80()*-0.182297);
}

double NNfunction-ss_dRsR::synapse0x2498c80() {
   return (neuron0x2492fc0()*0.0152333);
}

double NNfunction-ss_dRsR::synapse0x2498cc0() {
   return (neuron0x2493300()*0.0109029);
}

double NNfunction-ss_dRsR::synapse0x2498d00() {
   return (neuron0x2493640()*-0.00603853);
}

double NNfunction-ss_dRsR::synapse0x2498d40() {
   return (neuron0x2493980()*0.119594);
}

double NNfunction-ss_dRsR::synapse0x2498d80() {
   return (neuron0x2493cc0()*-0.00421894);
}

double NNfunction-ss_dRsR::synapse0x2498dc0() {
   return (neuron0x2494000()*0.002029);
}

double NNfunction-ss_dRsR::synapse0x2498e00() {
   return (neuron0x2494340()*-0.000824617);
}

double NNfunction-ss_dRsR::synapse0x2498e40() {
   return (neuron0x2494680()*0.00783685);
}

double NNfunction-ss_dRsR::synapse0x2498e80() {
   return (neuron0x24949c0()*-0.00491747);
}

double NNfunction-ss_dRsR::synapse0x2498730() {
   return (neuron0x2494d00()*-0.0041501);
}

double NNfunction-ss_dRsR::synapse0x2498770() {
   return (neuron0x2495040()*0.01724);
}

double NNfunction-ss_dRsR::synapse0x24987b0() {
   return (neuron0x2495380()*-0.00884752);
}

double NNfunction-ss_dRsR::synapse0x24987f0() {
   return (neuron0x24956c0()*-0.0194267);
}

double NNfunction-ss_dRsR::synapse0x24990d0() {
   return (neuron0x2495a00()*0.000994826);
}

double NNfunction-ss_dRsR::synapse0x2499110() {
   return (neuron0x2495d40()*-0.000621726);
}

double NNfunction-ss_dRsR::synapse0x2499150() {
   return (neuron0x2496080()*-0.00640036);
}

double NNfunction-ss_dRsR::synapse0x2498ad0() {
   return (neuron0x24963c0()*0.0198694);
}

double NNfunction-ss_dRsR::synapse0x2498b10() {
   return (neuron0x2496920()*0.875839);
}

double NNfunction-ss_dRsR::synapse0x24992a0() {
   return (neuron0x2496b40()*-0.0289819);
}

double NNfunction-ss_dRsR::synapse0x24992e0() {
   return (neuron0x2496e80()*-0.0193464);
}

double NNfunction-ss_dRsR::synapse0x2499320() {
   return (neuron0x24971c0()*0.0129211);
}

double NNfunction-ss_dRsR::synapse0x2499360() {
   return (neuron0x2497500()*-0.0180958);
}

double NNfunction-ss_dRsR::synapse0x24993a0() {
   return (neuron0x2497840()*0.00405544);
}

double NNfunction-ss_dRsR::synapse0x24993e0() {
   return (neuron0x2497b80()*-0.0076719);
}

double NNfunction-ss_dRsR::synapse0x2499760() {
   return (neuron0x2492fc0()*0.329951);
}

double NNfunction-ss_dRsR::synapse0x24997a0() {
   return (neuron0x2493300()*-0.831852);
}

double NNfunction-ss_dRsR::synapse0x24997e0() {
   return (neuron0x2493640()*0.512351);
}

double NNfunction-ss_dRsR::synapse0x2499820() {
   return (neuron0x2493980()*-0.415679);
}

double NNfunction-ss_dRsR::synapse0x2499860() {
   return (neuron0x2493cc0()*0.506108);
}

double NNfunction-ss_dRsR::synapse0x24998a0() {
   return (neuron0x2494000()*-0.280511);
}

double NNfunction-ss_dRsR::synapse0x24998e0() {
   return (neuron0x2494340()*0.446696);
}

double NNfunction-ss_dRsR::synapse0x2499920() {
   return (neuron0x2494680()*0.150942);
}

double NNfunction-ss_dRsR::synapse0x2499960() {
   return (neuron0x24949c0()*-0.287566);
}

double NNfunction-ss_dRsR::synapse0x24999a0() {
   return (neuron0x2494d00()*0.00981891);
}

double NNfunction-ss_dRsR::synapse0x24999e0() {
   return (neuron0x2495040()*-0.0758553);
}

double NNfunction-ss_dRsR::synapse0x2499a20() {
   return (neuron0x2495380()*0.502553);
}

double NNfunction-ss_dRsR::synapse0x2499a60() {
   return (neuron0x24956c0()*-0.124352);
}

double NNfunction-ss_dRsR::synapse0x2499aa0() {
   return (neuron0x2495a00()*0.226696);
}

double NNfunction-ss_dRsR::synapse0x2499ae0() {
   return (neuron0x2495d40()*-0.277935);
}

double NNfunction-ss_dRsR::synapse0x2499b20() {
   return (neuron0x2496080()*0.355957);
}

double NNfunction-ss_dRsR::synapse0x24995b0() {
   return (neuron0x24963c0()*-0.244795);
}

double NNfunction-ss_dRsR::synapse0x24995f0() {
   return (neuron0x2496920()*0.632731);
}

double NNfunction-ss_dRsR::synapse0x224d300() {
   return (neuron0x2496b40()*-0.0774171);
}

double NNfunction-ss_dRsR::synapse0x225c090() {
   return (neuron0x2496e80()*-0.0959681);
}

double NNfunction-ss_dRsR::synapse0x225c0d0() {
   return (neuron0x24971c0()*-0.217471);
}

double NNfunction-ss_dRsR::synapse0x2482050() {
   return (neuron0x2497500()*-0.324139);
}

double NNfunction-ss_dRsR::synapse0x2482090() {
   return (neuron0x2497840()*-0.101871);
}

double NNfunction-ss_dRsR::synapse0x24820d0() {
   return (neuron0x2497b80()*-0.11763);
}

double NNfunction-ss_dRsR::synapse0x225c910() {
   return (neuron0x2492fc0()*-0.0116061);
}

double NNfunction-ss_dRsR::synapse0x2499050() {
   return (neuron0x2493300()*-0.0173668);
}

double NNfunction-ss_dRsR::synapse0x2499090() {
   return (neuron0x2493640()*0.00801212);
}

double NNfunction-ss_dRsR::synapse0x2499c70() {
   return (neuron0x2493980()*-1.70078);
}

double NNfunction-ss_dRsR::synapse0x2499cb0() {
   return (neuron0x2493cc0()*-0.00462485);
}

double NNfunction-ss_dRsR::synapse0x2499cf0() {
   return (neuron0x2494000()*0.00650301);
}

double NNfunction-ss_dRsR::synapse0x2499d30() {
   return (neuron0x2494340()*-0.00632318);
}

double NNfunction-ss_dRsR::synapse0x2499d70() {
   return (neuron0x2494680()*-0.00395529);
}

double NNfunction-ss_dRsR::synapse0x2499db0() {
   return (neuron0x24949c0()*0.0449328);
}

double NNfunction-ss_dRsR::synapse0x2499df0() {
   return (neuron0x2494d00()*0.0382214);
}

double NNfunction-ss_dRsR::synapse0x2499e30() {
   return (neuron0x2495040()*0.024025);
}

double NNfunction-ss_dRsR::synapse0x2499e70() {
   return (neuron0x2495380()*-0.0349283);
}

double NNfunction-ss_dRsR::synapse0x2499eb0() {
   return (neuron0x24956c0()*-0.00709394);
}

double NNfunction-ss_dRsR::synapse0x2499ef0() {
   return (neuron0x2495a00()*0.0225459);
}

double NNfunction-ss_dRsR::synapse0x2499f30() {
   return (neuron0x2495d40()*-0.0419342);
}

double NNfunction-ss_dRsR::synapse0x2499f70() {
   return (neuron0x2496080()*-0.0415681);
}

double NNfunction-ss_dRsR::synapse0x2492f00() {
   return (neuron0x24963c0()*0.02272);
}

double NNfunction-ss_dRsR::synapse0x2492f40() {
   return (neuron0x2496920()*0.262053);
}

double NNfunction-ss_dRsR::synapse0x2492f80() {
   return (neuron0x2496b40()*0.180177);
}

double NNfunction-ss_dRsR::synapse0x249a0c0() {
   return (neuron0x2496e80()*0.0172424);
}

double NNfunction-ss_dRsR::synapse0x249a100() {
   return (neuron0x24971c0()*-0.0211902);
}

double NNfunction-ss_dRsR::synapse0x249a140() {
   return (neuron0x2497500()*0.0306399);
}

double NNfunction-ss_dRsR::synapse0x249a180() {
   return (neuron0x2497840()*0.0112867);
}

double NNfunction-ss_dRsR::synapse0x249a1c0() {
   return (neuron0x2497b80()*-0.000419148);
}

double NNfunction-ss_dRsR::synapse0x249a540() {
   return (neuron0x2492fc0()*-0.693081);
}

double NNfunction-ss_dRsR::synapse0x249a580() {
   return (neuron0x2493300()*-0.17856);
}

double NNfunction-ss_dRsR::synapse0x249a5c0() {
   return (neuron0x2493640()*-0.368586);
}

double NNfunction-ss_dRsR::synapse0x249a600() {
   return (neuron0x2493980()*-0.298601);
}

double NNfunction-ss_dRsR::synapse0x249a640() {
   return (neuron0x2493cc0()*0.700024);
}

double NNfunction-ss_dRsR::synapse0x249a680() {
   return (neuron0x2494000()*0.23333);
}

double NNfunction-ss_dRsR::synapse0x249a6c0() {
   return (neuron0x2494340()*-0.351418);
}

double NNfunction-ss_dRsR::synapse0x249a700() {
   return (neuron0x2494680()*0.353796);
}

double NNfunction-ss_dRsR::synapse0x249a740() {
   return (neuron0x24949c0()*-0.713957);
}

double NNfunction-ss_dRsR::synapse0x249a780() {
   return (neuron0x2494d00()*1.16726);
}

double NNfunction-ss_dRsR::synapse0x249a7c0() {
   return (neuron0x2495040()*-0.146604);
}

double NNfunction-ss_dRsR::synapse0x249a800() {
   return (neuron0x2495380()*0.456701);
}

double NNfunction-ss_dRsR::synapse0x249a840() {
   return (neuron0x24956c0()*0.724346);
}

double NNfunction-ss_dRsR::synapse0x249a880() {
   return (neuron0x2495a00()*-1.57239);
}

double NNfunction-ss_dRsR::synapse0x249a8c0() {
   return (neuron0x2495d40()*0.196997);
}

double NNfunction-ss_dRsR::synapse0x249a900() {
   return (neuron0x2496080()*-0.322916);
}

double NNfunction-ss_dRsR::synapse0x249a390() {
   return (neuron0x24963c0()*-0.842087);
}

double NNfunction-ss_dRsR::synapse0x249a3d0() {
   return (neuron0x2496920()*0.22966);
}

double NNfunction-ss_dRsR::synapse0x249aa50() {
   return (neuron0x2496b40()*0.400183);
}

double NNfunction-ss_dRsR::synapse0x249aa90() {
   return (neuron0x2496e80()*-0.2726);
}

double NNfunction-ss_dRsR::synapse0x249aad0() {
   return (neuron0x24971c0()*-1.07006);
}

double NNfunction-ss_dRsR::synapse0x249ab10() {
   return (neuron0x2497500()*0.0363636);
}

double NNfunction-ss_dRsR::synapse0x249ab50() {
   return (neuron0x2497840()*0.598067);
}

double NNfunction-ss_dRsR::synapse0x249ab90() {
   return (neuron0x2497b80()*0.331396);
}

double NNfunction-ss_dRsR::synapse0x249af10() {
   return (neuron0x2492fc0()*0.016562);
}

double NNfunction-ss_dRsR::synapse0x249af50() {
   return (neuron0x2493300()*1.2426);
}

double NNfunction-ss_dRsR::synapse0x249af90() {
   return (neuron0x2493640()*-0.136346);
}

double NNfunction-ss_dRsR::synapse0x249afd0() {
   return (neuron0x2493980()*-0.292689);
}

double NNfunction-ss_dRsR::synapse0x249b010() {
   return (neuron0x2493cc0()*-0.0319475);
}

double NNfunction-ss_dRsR::synapse0x249b050() {
   return (neuron0x2494000()*-0.374536);
}

double NNfunction-ss_dRsR::synapse0x249b090() {
   return (neuron0x2494340()*-0.170364);
}

double NNfunction-ss_dRsR::synapse0x249b0d0() {
   return (neuron0x2494680()*-0.408427);
}

double NNfunction-ss_dRsR::synapse0x249b110() {
   return (neuron0x24949c0()*0.696432);
}

double NNfunction-ss_dRsR::synapse0x225c3e0() {
   return (neuron0x2494d00()*0.31442);
}

double NNfunction-ss_dRsR::synapse0x225c420() {
   return (neuron0x2495040()*0.616327);
}

double NNfunction-ss_dRsR::synapse0x225c460() {
   return (neuron0x2495380()*0.419394);
}

double NNfunction-ss_dRsR::synapse0x225c4a0() {
   return (neuron0x24956c0()*-0.802152);
}

double NNfunction-ss_dRsR::synapse0x225c4e0() {
   return (neuron0x2495a00()*-0.366567);
}

double NNfunction-ss_dRsR::synapse0x225c520() {
   return (neuron0x2495d40()*0.52971);
}

double NNfunction-ss_dRsR::synapse0x225c560() {
   return (neuron0x2496080()*0.15441);
}

double NNfunction-ss_dRsR::synapse0x249ad60() {
   return (neuron0x24963c0()*0.789649);
}

double NNfunction-ss_dRsR::synapse0x249ada0() {
   return (neuron0x2496920()*0.840522);
}

double NNfunction-ss_dRsR::synapse0x225c6b0() {
   return (neuron0x2496b40()*-0.907036);
}

double NNfunction-ss_dRsR::synapse0x225c6f0() {
   return (neuron0x2496e80()*-0.576539);
}

double NNfunction-ss_dRsR::synapse0x225c730() {
   return (neuron0x24971c0()*0.295431);
}

double NNfunction-ss_dRsR::synapse0x225c770() {
   return (neuron0x2497500()*-0.0221687);
}

double NNfunction-ss_dRsR::synapse0x225c7b0() {
   return (neuron0x2497840()*-0.139631);
}

double NNfunction-ss_dRsR::synapse0x249b960() {
   return (neuron0x2497b80()*0.775414);
}

double NNfunction-ss_dRsR::synapse0x249bce0() {
   return (neuron0x2492fc0()*-0.307345);
}

double NNfunction-ss_dRsR::synapse0x249bd20() {
   return (neuron0x2493300()*0.68047);
}

double NNfunction-ss_dRsR::synapse0x249bd60() {
   return (neuron0x2493640()*-0.680286);
}

double NNfunction-ss_dRsR::synapse0x249bda0() {
   return (neuron0x2493980()*-0.718836);
}

double NNfunction-ss_dRsR::synapse0x249bde0() {
   return (neuron0x2493cc0()*-0.622661);
}

double NNfunction-ss_dRsR::synapse0x249be20() {
   return (neuron0x2494000()*0.150987);
}

double NNfunction-ss_dRsR::synapse0x249be60() {
   return (neuron0x2494340()*-0.36669);
}

double NNfunction-ss_dRsR::synapse0x249bea0() {
   return (neuron0x2494680()*0.319487);
}

double NNfunction-ss_dRsR::synapse0x249bee0() {
   return (neuron0x24949c0()*0.207917);
}

double NNfunction-ss_dRsR::synapse0x249bf20() {
   return (neuron0x2494d00()*-0.687137);
}

double NNfunction-ss_dRsR::synapse0x249bf60() {
   return (neuron0x2495040()*-0.00247304);
}

double NNfunction-ss_dRsR::synapse0x249bfa0() {
   return (neuron0x2495380()*0.102537);
}

double NNfunction-ss_dRsR::synapse0x249bfe0() {
   return (neuron0x24956c0()*0.66589);
}

double NNfunction-ss_dRsR::synapse0x249c020() {
   return (neuron0x2495a00()*-0.578261);
}

double NNfunction-ss_dRsR::synapse0x249c060() {
   return (neuron0x2495d40()*0.428957);
}

double NNfunction-ss_dRsR::synapse0x249c0a0() {
   return (neuron0x2496080()*0.367589);
}

double NNfunction-ss_dRsR::synapse0x249bb30() {
   return (neuron0x24963c0()*0.387654);
}

double NNfunction-ss_dRsR::synapse0x249bb70() {
   return (neuron0x2496920()*-0.320112);
}

double NNfunction-ss_dRsR::synapse0x249c1f0() {
   return (neuron0x2496b40()*-1.18121);
}

double NNfunction-ss_dRsR::synapse0x249c230() {
   return (neuron0x2496e80()*0.586279);
}

double NNfunction-ss_dRsR::synapse0x249c270() {
   return (neuron0x24971c0()*-0.629385);
}

double NNfunction-ss_dRsR::synapse0x249c2b0() {
   return (neuron0x2497500()*0.94881);
}

double NNfunction-ss_dRsR::synapse0x249c2f0() {
   return (neuron0x2497840()*-0.569225);
}

double NNfunction-ss_dRsR::synapse0x249c330() {
   return (neuron0x2497b80()*-0.149451);
}

double NNfunction-ss_dRsR::synapse0x249c6b0() {
   return (neuron0x2492fc0()*0.0207589);
}

double NNfunction-ss_dRsR::synapse0x249c6f0() {
   return (neuron0x2493300()*-0.572661);
}

double NNfunction-ss_dRsR::synapse0x249c730() {
   return (neuron0x2493640()*1.24039);
}

double NNfunction-ss_dRsR::synapse0x249c770() {
   return (neuron0x2493980()*0.192973);
}

double NNfunction-ss_dRsR::synapse0x249c7b0() {
   return (neuron0x2493cc0()*-0.458866);
}

double NNfunction-ss_dRsR::synapse0x249c7f0() {
   return (neuron0x2494000()*-0.235472);
}

double NNfunction-ss_dRsR::synapse0x249c830() {
   return (neuron0x2494340()*-0.0841143);
}

double NNfunction-ss_dRsR::synapse0x249c870() {
   return (neuron0x2494680()*-0.0164272);
}

double NNfunction-ss_dRsR::synapse0x249c8b0() {
   return (neuron0x24949c0()*0.529422);
}

double NNfunction-ss_dRsR::synapse0x249c8f0() {
   return (neuron0x2494d00()*-0.71475);
}

double NNfunction-ss_dRsR::synapse0x249c930() {
   return (neuron0x2495040()*0.759083);
}

double NNfunction-ss_dRsR::synapse0x249c970() {
   return (neuron0x2495380()*-0.439836);
}

double NNfunction-ss_dRsR::synapse0x249c9b0() {
   return (neuron0x24956c0()*0.343691);
}

double NNfunction-ss_dRsR::synapse0x249c9f0() {
   return (neuron0x2495a00()*1.34068);
}

double NNfunction-ss_dRsR::synapse0x249ca30() {
   return (neuron0x2495d40()*0.574252);
}

double NNfunction-ss_dRsR::synapse0x249ca70() {
   return (neuron0x2496080()*0.561802);
}

double NNfunction-ss_dRsR::synapse0x249c500() {
   return (neuron0x24963c0()*-0.417878);
}

double NNfunction-ss_dRsR::synapse0x249c540() {
   return (neuron0x2496920()*-1.30776);
}

double NNfunction-ss_dRsR::synapse0x249cbc0() {
   return (neuron0x2496b40()*0.890212);
}

double NNfunction-ss_dRsR::synapse0x249cc00() {
   return (neuron0x2496e80()*0.699738);
}

double NNfunction-ss_dRsR::synapse0x249cc40() {
   return (neuron0x24971c0()*-0.264283);
}

double NNfunction-ss_dRsR::synapse0x249cc80() {
   return (neuron0x2497500()*0.0865383);
}

double NNfunction-ss_dRsR::synapse0x249ccc0() {
   return (neuron0x2497840()*-0.0536195);
}

double NNfunction-ss_dRsR::synapse0x249cd00() {
   return (neuron0x2497b80()*-0.0148115);
}

double NNfunction-ss_dRsR::synapse0x2496810() {
   return (neuron0x2492fc0()*0.0789759);
}

double NNfunction-ss_dRsR::synapse0x2496850() {
   return (neuron0x2493300()*-0.183634);
}

double NNfunction-ss_dRsR::synapse0x2496890() {
   return (neuron0x2493640()*-0.236469);
}

double NNfunction-ss_dRsR::synapse0x24968d0() {
   return (neuron0x2493980()*1.8557);
}

double NNfunction-ss_dRsR::synapse0x249d290() {
   return (neuron0x2493cc0()*-0.496324);
}

double NNfunction-ss_dRsR::synapse0x249d2d0() {
   return (neuron0x2494000()*0.0523226);
}

double NNfunction-ss_dRsR::synapse0x249d310() {
   return (neuron0x2494340()*-0.440623);
}

double NNfunction-ss_dRsR::synapse0x249d350() {
   return (neuron0x2494680()*-0.148874);
}

double NNfunction-ss_dRsR::synapse0x249d390() {
   return (neuron0x24949c0()*-0.140936);
}

double NNfunction-ss_dRsR::synapse0x249d3d0() {
   return (neuron0x2494d00()*-0.230553);
}

double NNfunction-ss_dRsR::synapse0x249d410() {
   return (neuron0x2495040()*-0.267943);
}

double NNfunction-ss_dRsR::synapse0x249d450() {
   return (neuron0x2495380()*0.156841);
}

double NNfunction-ss_dRsR::synapse0x249d490() {
   return (neuron0x24956c0()*-0.131047);
}

double NNfunction-ss_dRsR::synapse0x249d4d0() {
   return (neuron0x2495a00()*-0.0291828);
}

double NNfunction-ss_dRsR::synapse0x249d510() {
   return (neuron0x2495d40()*0.187829);
}

double NNfunction-ss_dRsR::synapse0x249d550() {
   return (neuron0x2496080()*-0.105534);
}

double NNfunction-ss_dRsR::synapse0x249ced0() {
   return (neuron0x24963c0()*-0.0668472);
}

double NNfunction-ss_dRsR::synapse0x249cf10() {
   return (neuron0x2496920()*0.268211);
}

double NNfunction-ss_dRsR::synapse0x249d6a0() {
   return (neuron0x2496b40()*-0.08331);
}

double NNfunction-ss_dRsR::synapse0x249d6e0() {
   return (neuron0x2496e80()*0.0377309);
}

double NNfunction-ss_dRsR::synapse0x249d720() {
   return (neuron0x24971c0()*-0.247658);
}

double NNfunction-ss_dRsR::synapse0x249d760() {
   return (neuron0x2497500()*-0.0390383);
}

double NNfunction-ss_dRsR::synapse0x249d7a0() {
   return (neuron0x2497840()*-0.105178);
}

double NNfunction-ss_dRsR::synapse0x249d7e0() {
   return (neuron0x2497b80()*0.105701);
}

double NNfunction-ss_dRsR::synapse0x249db60() {
   return (neuron0x2492fc0()*-0.0453678);
}

double NNfunction-ss_dRsR::synapse0x249dba0() {
   return (neuron0x2493300()*0.0185902);
}

double NNfunction-ss_dRsR::synapse0x249dbe0() {
   return (neuron0x2493640()*-0.00638911);
}

double NNfunction-ss_dRsR::synapse0x249dc20() {
   return (neuron0x2493980()*0.142705);
}

double NNfunction-ss_dRsR::synapse0x249dc60() {
   return (neuron0x2493cc0()*-0.020767);
}

double NNfunction-ss_dRsR::synapse0x249dca0() {
   return (neuron0x2494000()*0.00421842);
}

double NNfunction-ss_dRsR::synapse0x249dce0() {
   return (neuron0x2494340()*-0.00726899);
}

double NNfunction-ss_dRsR::synapse0x249dd20() {
   return (neuron0x2494680()*-0.00640516);
}

double NNfunction-ss_dRsR::synapse0x249dd60() {
   return (neuron0x24949c0()*0.0142599);
}

double NNfunction-ss_dRsR::synapse0x249dda0() {
   return (neuron0x2494d00()*-0.00965915);
}

double NNfunction-ss_dRsR::synapse0x249dde0() {
   return (neuron0x2495040()*0.00706005);
}

double NNfunction-ss_dRsR::synapse0x249de20() {
   return (neuron0x2495380()*-0.0102966);
}

double NNfunction-ss_dRsR::synapse0x249de60() {
   return (neuron0x24956c0()*-0.0124484);
}

double NNfunction-ss_dRsR::synapse0x249dea0() {
   return (neuron0x2495a00()*0.0166206);
}

double NNfunction-ss_dRsR::synapse0x249dee0() {
   return (neuron0x2495d40()*0.000553803);
}

double NNfunction-ss_dRsR::synapse0x249df20() {
   return (neuron0x2496080()*-0.0096245);
}

double NNfunction-ss_dRsR::synapse0x249d9b0() {
   return (neuron0x24963c0()*0.00187864);
}

double NNfunction-ss_dRsR::synapse0x249d9f0() {
   return (neuron0x2496920()*1.77496);
}

double NNfunction-ss_dRsR::synapse0x249e070() {
   return (neuron0x2496b40()*-0.0596904);
}

double NNfunction-ss_dRsR::synapse0x249e0b0() {
   return (neuron0x2496e80()*0.0197729);
}

double NNfunction-ss_dRsR::synapse0x249e0f0() {
   return (neuron0x24971c0()*0.0182115);
}

double NNfunction-ss_dRsR::synapse0x249e130() {
   return (neuron0x2497500()*0.00494622);
}

double NNfunction-ss_dRsR::synapse0x249e170() {
   return (neuron0x2497840()*0.00801945);
}

double NNfunction-ss_dRsR::synapse0x249e1b0() {
   return (neuron0x2497b80()*0.0256966);
}

double NNfunction-ss_dRsR::synapse0x249e530() {
   return (neuron0x2492fc0()*0.0108492);
}

double NNfunction-ss_dRsR::synapse0x249e570() {
   return (neuron0x2493300()*-0.0207205);
}

double NNfunction-ss_dRsR::synapse0x249e5b0() {
   return (neuron0x2493640()*0.138845);
}

double NNfunction-ss_dRsR::synapse0x249e5f0() {
   return (neuron0x2493980()*-5.42443);
}

double NNfunction-ss_dRsR::synapse0x249e630() {
   return (neuron0x2493cc0()*0.0672513);
}

double NNfunction-ss_dRsR::synapse0x249e670() {
   return (neuron0x2494000()*0.0553132);
}

double NNfunction-ss_dRsR::synapse0x249e6b0() {
   return (neuron0x2494340()*0.0521509);
}

double NNfunction-ss_dRsR::synapse0x249e6f0() {
   return (neuron0x2494680()*0.0317947);
}

double NNfunction-ss_dRsR::synapse0x249e730() {
   return (neuron0x24949c0()*0.052568);
}

double NNfunction-ss_dRsR::synapse0x249e770() {
   return (neuron0x2494d00()*0.0256272);
}

double NNfunction-ss_dRsR::synapse0x249e7b0() {
   return (neuron0x2495040()*0.0865282);
}

double NNfunction-ss_dRsR::synapse0x249e7f0() {
   return (neuron0x2495380()*-0.0237306);
}

double NNfunction-ss_dRsR::synapse0x249e830() {
   return (neuron0x24956c0()*-0.0770191);
}

double NNfunction-ss_dRsR::synapse0x249e870() {
   return (neuron0x2495a00()*-0.0820378);
}

double NNfunction-ss_dRsR::synapse0x249e8b0() {
   return (neuron0x2495d40()*-0.0319609);
}

double NNfunction-ss_dRsR::synapse0x249e8f0() {
   return (neuron0x2496080()*-0.0146656);
}

double NNfunction-ss_dRsR::synapse0x249e380() {
   return (neuron0x24963c0()*0.0187035);
}

double NNfunction-ss_dRsR::synapse0x249e3c0() {
   return (neuron0x2496920()*-0.329449);
}

double NNfunction-ss_dRsR::synapse0x249b150() {
   return (neuron0x2496b40()*1.53467);
}

double NNfunction-ss_dRsR::synapse0x249b190() {
   return (neuron0x2496e80()*-0.0593624);
}

double NNfunction-ss_dRsR::synapse0x249b1d0() {
   return (neuron0x24971c0()*0.00514227);
}

double NNfunction-ss_dRsR::synapse0x249b210() {
   return (neuron0x2497500()*-0.0604308);
}

double NNfunction-ss_dRsR::synapse0x249b250() {
   return (neuron0x2497840()*-0.000993661);
}

double NNfunction-ss_dRsR::synapse0x249b290() {
   return (neuron0x2497b80()*-0.0621376);
}

double NNfunction-ss_dRsR::synapse0x249b610() {
   return (neuron0x2492fc0()*-0.328043);
}

double NNfunction-ss_dRsR::synapse0x249b650() {
   return (neuron0x2493300()*0.154167);
}

double NNfunction-ss_dRsR::synapse0x249b690() {
   return (neuron0x2493640()*-0.723148);
}

double NNfunction-ss_dRsR::synapse0x249b6d0() {
   return (neuron0x2493980()*0.109286);
}

double NNfunction-ss_dRsR::synapse0x249b710() {
   return (neuron0x2493cc0()*-0.400865);
}

double NNfunction-ss_dRsR::synapse0x249b750() {
   return (neuron0x2494000()*-0.470029);
}

double NNfunction-ss_dRsR::synapse0x249b790() {
   return (neuron0x2494340()*0.0708879);
}

double NNfunction-ss_dRsR::synapse0x249b7d0() {
   return (neuron0x2494680()*-0.124036);
}

double NNfunction-ss_dRsR::synapse0x249b810() {
   return (neuron0x24949c0()*-0.724615);
}

double NNfunction-ss_dRsR::synapse0x249b850() {
   return (neuron0x2494d00()*0.725025);
}

double NNfunction-ss_dRsR::synapse0x249b890() {
   return (neuron0x2495040()*-0.883862);
}

double NNfunction-ss_dRsR::synapse0x249b8d0() {
   return (neuron0x2495380()*-0.891756);
}

double NNfunction-ss_dRsR::synapse0x249b910() {
   return (neuron0x24956c0()*0.394763);
}

double NNfunction-ss_dRsR::synapse0x249fa50() {
   return (neuron0x2495a00()*0.575061);
}

double NNfunction-ss_dRsR::synapse0x249fa90() {
   return (neuron0x2495d40()*-0.582902);
}

double NNfunction-ss_dRsR::synapse0x249fad0() {
   return (neuron0x2496080()*0.00783466);
}

double NNfunction-ss_dRsR::synapse0x249b460() {
   return (neuron0x24963c0()*0.551071);
}

double NNfunction-ss_dRsR::synapse0x249b4a0() {
   return (neuron0x2496920()*0.634537);
}

double NNfunction-ss_dRsR::synapse0x249fc20() {
   return (neuron0x2496b40()*-0.654629);
}

double NNfunction-ss_dRsR::synapse0x249fc60() {
   return (neuron0x2496e80()*1.38621);
}

double NNfunction-ss_dRsR::synapse0x249fca0() {
   return (neuron0x24971c0()*0.25192);
}

double NNfunction-ss_dRsR::synapse0x249fce0() {
   return (neuron0x2497500()*-0.976416);
}

double NNfunction-ss_dRsR::synapse0x249fd20() {
   return (neuron0x2497840()*0.989046);
}

double NNfunction-ss_dRsR::synapse0x249fd60() {
   return (neuron0x2497b80()*0.0452555);
}

double NNfunction-ss_dRsR::synapse0x24a00e0() {
   return (neuron0x2492fc0()*0.00221701);
}

double NNfunction-ss_dRsR::synapse0x24a0120() {
   return (neuron0x2493300()*-0.0018843);
}

double NNfunction-ss_dRsR::synapse0x24a0160() {
   return (neuron0x2493640()*0.0124534);
}

double NNfunction-ss_dRsR::synapse0x24a01a0() {
   return (neuron0x2493980()*-2.98545);
}

double NNfunction-ss_dRsR::synapse0x24a01e0() {
   return (neuron0x2493cc0()*-0.00108029);
}

double NNfunction-ss_dRsR::synapse0x24a0220() {
   return (neuron0x2494000()*-0.00515127);
}

double NNfunction-ss_dRsR::synapse0x24a0260() {
   return (neuron0x2494340()*-0.000128669);
}

double NNfunction-ss_dRsR::synapse0x24a02a0() {
   return (neuron0x2494680()*0.000104136);
}

double NNfunction-ss_dRsR::synapse0x24a02e0() {
   return (neuron0x24949c0()*0.0120625);
}

double NNfunction-ss_dRsR::synapse0x24a0320() {
   return (neuron0x2494d00()*0.0158813);
}

double NNfunction-ss_dRsR::synapse0x24a0360() {
   return (neuron0x2495040()*0.00755416);
}

double NNfunction-ss_dRsR::synapse0x24a03a0() {
   return (neuron0x2495380()*-0.0211521);
}

double NNfunction-ss_dRsR::synapse0x24a03e0() {
   return (neuron0x24956c0()*-0.0180077);
}

double NNfunction-ss_dRsR::synapse0x24a0420() {
   return (neuron0x2495a00()*0.0115005);
}

double NNfunction-ss_dRsR::synapse0x24a0460() {
   return (neuron0x2495d40()*-0.00413474);
}

double NNfunction-ss_dRsR::synapse0x24a04a0() {
   return (neuron0x2496080()*-0.0117465);
}

double NNfunction-ss_dRsR::synapse0x249ff30() {
   return (neuron0x24963c0()*0.00925593);
}

double NNfunction-ss_dRsR::synapse0x249ff70() {
   return (neuron0x2496920()*0.243609);
}

double NNfunction-ss_dRsR::synapse0x24a05f0() {
   return (neuron0x2496b40()*0.210354);
}

double NNfunction-ss_dRsR::synapse0x24a0630() {
   return (neuron0x2496e80()*0.00395636);
}

double NNfunction-ss_dRsR::synapse0x24a0670() {
   return (neuron0x24971c0()*-0.00826155);
}

double NNfunction-ss_dRsR::synapse0x24a06b0() {
   return (neuron0x2497500()*0.00014366);
}

double NNfunction-ss_dRsR::synapse0x24a06f0() {
   return (neuron0x2497840()*-0.00410521);
}

double NNfunction-ss_dRsR::synapse0x24a0730() {
   return (neuron0x2497b80()*0.00394152);
}

double NNfunction-ss_dRsR::synapse0x24a0ab0() {
   return (neuron0x2492fc0()*-0.058683);
}

double NNfunction-ss_dRsR::synapse0x24a0af0() {
   return (neuron0x2493300()*0.0317264);
}

double NNfunction-ss_dRsR::synapse0x24a0b30() {
   return (neuron0x2493640()*0.143319);
}

double NNfunction-ss_dRsR::synapse0x24a0b70() {
   return (neuron0x2493980()*0.949237);
}

double NNfunction-ss_dRsR::synapse0x24a0bb0() {
   return (neuron0x2493cc0()*0.48966);
}

double NNfunction-ss_dRsR::synapse0x24a0bf0() {
   return (neuron0x2494000()*0.343765);
}

double NNfunction-ss_dRsR::synapse0x24a0c30() {
   return (neuron0x2494340()*0.1871);
}

double NNfunction-ss_dRsR::synapse0x24a0c70() {
   return (neuron0x2494680()*0.0849924);
}

double NNfunction-ss_dRsR::synapse0x24a0cb0() {
   return (neuron0x24949c0()*-0.318384);
}

double NNfunction-ss_dRsR::synapse0x24a0cf0() {
   return (neuron0x2494d00()*-0.295907);
}

double NNfunction-ss_dRsR::synapse0x24a0d30() {
   return (neuron0x2495040()*0.135416);
}

double NNfunction-ss_dRsR::synapse0x24a0d70() {
   return (neuron0x2495380()*-0.281961);
}

double NNfunction-ss_dRsR::synapse0x24a0db0() {
   return (neuron0x24956c0()*0.0932752);
}

double NNfunction-ss_dRsR::synapse0x24a0df0() {
   return (neuron0x2495a00()*-0.198923);
}

double NNfunction-ss_dRsR::synapse0x24a0e30() {
   return (neuron0x2495d40()*0.142502);
}

double NNfunction-ss_dRsR::synapse0x24a0e70() {
   return (neuron0x2496080()*0.91754);
}

double NNfunction-ss_dRsR::synapse0x24a0900() {
   return (neuron0x24963c0()*-0.0852304);
}

double NNfunction-ss_dRsR::synapse0x24a0940() {
   return (neuron0x2496920()*0.189853);
}

double NNfunction-ss_dRsR::synapse0x24a0fc0() {
   return (neuron0x2496b40()*-0.0571319);
}

double NNfunction-ss_dRsR::synapse0x24a1000() {
   return (neuron0x2496e80()*0.222139);
}

double NNfunction-ss_dRsR::synapse0x24a1040() {
   return (neuron0x24971c0()*-0.141173);
}

double NNfunction-ss_dRsR::synapse0x24a1080() {
   return (neuron0x2497500()*-0.145555);
}

double NNfunction-ss_dRsR::synapse0x24a10c0() {
   return (neuron0x2497840()*0.0508213);
}

double NNfunction-ss_dRsR::synapse0x24a1100() {
   return (neuron0x2497b80()*0.144423);
}

double NNfunction-ss_dRsR::synapse0x24a1480() {
   return (neuron0x2492fc0()*-0.156191);
}

double NNfunction-ss_dRsR::synapse0x24a14c0() {
   return (neuron0x2493300()*-1.79433);
}

double NNfunction-ss_dRsR::synapse0x24a1500() {
   return (neuron0x2493640()*0.197363);
}

double NNfunction-ss_dRsR::synapse0x24a1540() {
   return (neuron0x2493980()*0.474588);
}

double NNfunction-ss_dRsR::synapse0x24a1580() {
   return (neuron0x2493cc0()*0.970593);
}

double NNfunction-ss_dRsR::synapse0x24a15c0() {
   return (neuron0x2494000()*-0.212617);
}

double NNfunction-ss_dRsR::synapse0x24a1600() {
   return (neuron0x2494340()*0.875383);
}

double NNfunction-ss_dRsR::synapse0x24a1640() {
   return (neuron0x2494680()*0.349374);
}

double NNfunction-ss_dRsR::synapse0x24a1680() {
   return (neuron0x24949c0()*0.380454);
}

double NNfunction-ss_dRsR::synapse0x24a16c0() {
   return (neuron0x2494d00()*0.100956);
}

double NNfunction-ss_dRsR::synapse0x24a1700() {
   return (neuron0x2495040()*0.551279);
}

double NNfunction-ss_dRsR::synapse0x24a1740() {
   return (neuron0x2495380()*0.626968);
}

double NNfunction-ss_dRsR::synapse0x24a1780() {
   return (neuron0x24956c0()*0.218448);
}

double NNfunction-ss_dRsR::synapse0x24a17c0() {
   return (neuron0x2495a00()*-0.757159);
}

double NNfunction-ss_dRsR::synapse0x24a1800() {
   return (neuron0x2495d40()*0.84577);
}

double NNfunction-ss_dRsR::synapse0x24a1840() {
   return (neuron0x2496080()*-0.67014);
}

double NNfunction-ss_dRsR::synapse0x24a12d0() {
   return (neuron0x24963c0()*0.635268);
}

double NNfunction-ss_dRsR::synapse0x24a1310() {
   return (neuron0x2496920()*-2.19337);
}

double NNfunction-ss_dRsR::synapse0x24a1990() {
   return (neuron0x2496b40()*-0.00346683);
}

double NNfunction-ss_dRsR::synapse0x24a19d0() {
   return (neuron0x2496e80()*-0.0101426);
}

double NNfunction-ss_dRsR::synapse0x24a1a10() {
   return (neuron0x24971c0()*-0.47227);
}

double NNfunction-ss_dRsR::synapse0x24a1a50() {
   return (neuron0x2497500()*-0.543039);
}

double NNfunction-ss_dRsR::synapse0x24a1a90() {
   return (neuron0x2497840()*0.889678);
}

double NNfunction-ss_dRsR::synapse0x24a1ad0() {
   return (neuron0x2497b80()*-0.443879);
}

double NNfunction-ss_dRsR::synapse0x24a1e50() {
   return (neuron0x2492fc0()*0.411198);
}

double NNfunction-ss_dRsR::synapse0x24931e0() {
   return (neuron0x2493300()*0.39586);
}

double NNfunction-ss_dRsR::synapse0x2493220() {
   return (neuron0x2493640()*0.48777);
}

double NNfunction-ss_dRsR::synapse0x2493520() {
   return (neuron0x2493980()*0.391211);
}

double NNfunction-ss_dRsR::synapse0x2493560() {
   return (neuron0x2493cc0()*0.326597);
}

double NNfunction-ss_dRsR::synapse0x2493860() {
   return (neuron0x2494000()*0.157008);
}

double NNfunction-ss_dRsR::synapse0x24938a0() {
   return (neuron0x2494340()*-0.135104);
}

double NNfunction-ss_dRsR::synapse0x2493ba0() {
   return (neuron0x2494680()*0.0874737);
}

double NNfunction-ss_dRsR::synapse0x2493be0() {
   return (neuron0x24949c0()*-0.118013);
}

double NNfunction-ss_dRsR::synapse0x2493ee0() {
   return (neuron0x2494d00()*-0.525774);
}

double NNfunction-ss_dRsR::synapse0x2493f20() {
   return (neuron0x2495040()*1.22231);
}

double NNfunction-ss_dRsR::synapse0x2494220() {
   return (neuron0x2495380()*-0.194081);
}

double NNfunction-ss_dRsR::synapse0x2494260() {
   return (neuron0x24956c0()*0.884909);
}

double NNfunction-ss_dRsR::synapse0x2494560() {
   return (neuron0x2495a00()*0.57301);
}

double NNfunction-ss_dRsR::synapse0x24945a0() {
   return (neuron0x2495d40()*0.171468);
}

double NNfunction-ss_dRsR::synapse0x24948a0() {
   return (neuron0x2496080()*0.488887);
}

double NNfunction-ss_dRsR::synapse0x24948e0() {
   return (neuron0x24963c0()*0.441751);
}

double NNfunction-ss_dRsR::synapse0x2494be0() {
   return (neuron0x2496920()*0.134078);
}

double NNfunction-ss_dRsR::synapse0x2494c20() {
   return (neuron0x2496b40()*-0.377527);
}

double NNfunction-ss_dRsR::synapse0x2494f20() {
   return (neuron0x2496e80()*0.253496);
}

double NNfunction-ss_dRsR::synapse0x2494f60() {
   return (neuron0x24971c0()*0.285697);
}

double NNfunction-ss_dRsR::synapse0x2495260() {
   return (neuron0x2497500()*-0.296508);
}

double NNfunction-ss_dRsR::synapse0x24952a0() {
   return (neuron0x2497840()*-0.50532);
}

double NNfunction-ss_dRsR::synapse0x24955a0() {
   return (neuron0x2497b80()*-0.285377);
}

double NNfunction-ss_dRsR::synapse0x24955e0() {
   return (neuron0x2492fc0()*0.160255);
}

double NNfunction-ss_dRsR::synapse0x24962a0() {
   return (neuron0x2493300()*0.455688);
}

double NNfunction-ss_dRsR::synapse0x24962e0() {
   return (neuron0x2493640()*0.336453);
}

double NNfunction-ss_dRsR::synapse0x24a1ca0() {
   return (neuron0x2493980()*-0.46777);
}

double NNfunction-ss_dRsR::synapse0x24a1ce0() {
   return (neuron0x2493cc0()*0.0997936);
}

double NNfunction-ss_dRsR::synapse0x24965e0() {
   return (neuron0x2494000()*-0.224449);
}

double NNfunction-ss_dRsR::synapse0x2496620() {
   return (neuron0x2494340()*0.103021);
}

double NNfunction-ss_dRsR::synapse0x224e090() {
   return (neuron0x2494680()*0.767103);
}

double NNfunction-ss_dRsR::synapse0x224e0d0() {
   return (neuron0x24949c0()*0.25738);
}

double NNfunction-ss_dRsR::synapse0x2496d60() {
   return (neuron0x2494d00()*0.281967);
}

double NNfunction-ss_dRsR::synapse0x2496da0() {
   return (neuron0x2495040()*0.521362);
}

double NNfunction-ss_dRsR::synapse0x24970a0() {
   return (neuron0x2495380()*-0.132545);
}

double NNfunction-ss_dRsR::synapse0x24970e0() {
   return (neuron0x24956c0()*-0.123551);
}

double NNfunction-ss_dRsR::synapse0x24973e0() {
   return (neuron0x2495a00()*0.445538);
}

double NNfunction-ss_dRsR::synapse0x2497420() {
   return (neuron0x2495d40()*-0.637169);
}

double NNfunction-ss_dRsR::synapse0x2497720() {
   return (neuron0x2496080()*-0.335288);
}

double NNfunction-ss_dRsR::synapse0x2497760() {
   return (neuron0x24963c0()*0.790283);
}

double NNfunction-ss_dRsR::synapse0x2497a60() {
   return (neuron0x2496920()*0.629984);
}

double NNfunction-ss_dRsR::synapse0x2497aa0() {
   return (neuron0x2496b40()*-0.64358);
}

double NNfunction-ss_dRsR::synapse0x2497da0() {
   return (neuron0x2496e80()*-0.139466);
}

double NNfunction-ss_dRsR::synapse0x2497de0() {
   return (neuron0x24971c0()*-0.0588873);
}

double NNfunction-ss_dRsR::synapse0x24958e0() {
   return (neuron0x2497500()*-0.329823);
}

double NNfunction-ss_dRsR::synapse0x2495920() {
   return (neuron0x2497840()*0.157821);
}

double NNfunction-ss_dRsR::synapse0x24a3bc0() {
   return (neuron0x2497b80()*-0.302378);
}

double NNfunction-ss_dRsR::synapse0x24a3f40() {
   return (neuron0x2492fc0()*0.212763);
}

double NNfunction-ss_dRsR::synapse0x24a3f80() {
   return (neuron0x2493300()*-0.891831);
}

double NNfunction-ss_dRsR::synapse0x24a3fc0() {
   return (neuron0x2493640()*1.06757);
}

double NNfunction-ss_dRsR::synapse0x24a4000() {
   return (neuron0x2493980()*0.812412);
}

double NNfunction-ss_dRsR::synapse0x24a4040() {
   return (neuron0x2493cc0()*-0.264117);
}

double NNfunction-ss_dRsR::synapse0x24a4080() {
   return (neuron0x2494000()*1.23485);
}

double NNfunction-ss_dRsR::synapse0x24a40c0() {
   return (neuron0x2494340()*0.884179);
}

double NNfunction-ss_dRsR::synapse0x24a4100() {
   return (neuron0x2494680()*-0.795194);
}

double NNfunction-ss_dRsR::synapse0x24a4140() {
   return (neuron0x24949c0()*-1.31195);
}

double NNfunction-ss_dRsR::synapse0x24a4180() {
   return (neuron0x2494d00()*-0.24102);
}

double NNfunction-ss_dRsR::synapse0x24a41c0() {
   return (neuron0x2495040()*0.895525);
}

double NNfunction-ss_dRsR::synapse0x24a4200() {
   return (neuron0x2495380()*0.882719);
}

double NNfunction-ss_dRsR::synapse0x24a4240() {
   return (neuron0x24956c0()*-0.381151);
}

double NNfunction-ss_dRsR::synapse0x24a4280() {
   return (neuron0x2495a00()*0.560477);
}

double NNfunction-ss_dRsR::synapse0x24a42c0() {
   return (neuron0x2495d40()*-1.40945);
}

double NNfunction-ss_dRsR::synapse0x24a4300() {
   return (neuron0x2496080()*1.10373);
}

double NNfunction-ss_dRsR::synapse0x24a3d90() {
   return (neuron0x24963c0()*0.405132);
}

double NNfunction-ss_dRsR::synapse0x24a3dd0() {
   return (neuron0x2496920()*-0.295816);
}

double NNfunction-ss_dRsR::synapse0x24a4450() {
   return (neuron0x2496b40()*-0.754345);
}

double NNfunction-ss_dRsR::synapse0x24a4490() {
   return (neuron0x2496e80()*-0.0507131);
}

double NNfunction-ss_dRsR::synapse0x24a44d0() {
   return (neuron0x24971c0()*0.987056);
}

double NNfunction-ss_dRsR::synapse0x24a4510() {
   return (neuron0x2497500()*-0.142382);
}

double NNfunction-ss_dRsR::synapse0x24a4550() {
   return (neuron0x2497840()*-0.652206);
}

double NNfunction-ss_dRsR::synapse0x24a4590() {
   return (neuron0x2497b80()*0.304103);
}

double NNfunction-ss_dRsR::synapse0x24a4910() {
   return (neuron0x2492fc0()*0.0163081);
}

double NNfunction-ss_dRsR::synapse0x24a4950() {
   return (neuron0x2493300()*0.0826495);
}

double NNfunction-ss_dRsR::synapse0x24a4990() {
   return (neuron0x2493640()*0.790365);
}

double NNfunction-ss_dRsR::synapse0x24a49d0() {
   return (neuron0x2493980()*-1.90341);
}

double NNfunction-ss_dRsR::synapse0x24a4a10() {
   return (neuron0x2493cc0()*0.0904984);
}

double NNfunction-ss_dRsR::synapse0x24a4a50() {
   return (neuron0x2494000()*0.474751);
}

double NNfunction-ss_dRsR::synapse0x24a4a90() {
   return (neuron0x2494340()*0.0974895);
}

double NNfunction-ss_dRsR::synapse0x24a4ad0() {
   return (neuron0x2494680()*0.373946);
}

double NNfunction-ss_dRsR::synapse0x24a4b10() {
   return (neuron0x24949c0()*-0.0158079);
}

double NNfunction-ss_dRsR::synapse0x24a4b50() {
   return (neuron0x2494d00()*0.0839989);
}

double NNfunction-ss_dRsR::synapse0x24a4b90() {
   return (neuron0x2495040()*0.022488);
}

double NNfunction-ss_dRsR::synapse0x24a4bd0() {
   return (neuron0x2495380()*0.0643084);
}

double NNfunction-ss_dRsR::synapse0x24a4c10() {
   return (neuron0x24956c0()*0.015076);
}

double NNfunction-ss_dRsR::synapse0x24a4c50() {
   return (neuron0x2495a00()*-0.0223466);
}

double NNfunction-ss_dRsR::synapse0x24a4c90() {
   return (neuron0x2495d40()*0.159593);
}

double NNfunction-ss_dRsR::synapse0x24a4cd0() {
   return (neuron0x2496080()*0.116017);
}

double NNfunction-ss_dRsR::synapse0x24a4760() {
   return (neuron0x24963c0()*-0.197703);
}

double NNfunction-ss_dRsR::synapse0x24a47a0() {
   return (neuron0x2496920()*-1.75711);
}

double NNfunction-ss_dRsR::synapse0x24a4e20() {
   return (neuron0x2496b40()*-0.958721);
}

double NNfunction-ss_dRsR::synapse0x24a4e60() {
   return (neuron0x2496e80()*0.235081);
}

double NNfunction-ss_dRsR::synapse0x24a4ea0() {
   return (neuron0x24971c0()*0.0890017);
}

double NNfunction-ss_dRsR::synapse0x24a4ee0() {
   return (neuron0x2497500()*0.00924124);
}

double NNfunction-ss_dRsR::synapse0x24a4f20() {
   return (neuron0x2497840()*-0.0275638);
}

double NNfunction-ss_dRsR::synapse0x24a4f60() {
   return (neuron0x2497b80()*-0.11787);
}

double NNfunction-ss_dRsR::synapse0x24a52e0() {
   return (neuron0x2492fc0()*-0.0138369);
}

double NNfunction-ss_dRsR::synapse0x24a5320() {
   return (neuron0x2493300()*-0.0238562);
}

double NNfunction-ss_dRsR::synapse0x24a5360() {
   return (neuron0x2493640()*0.0962595);
}

double NNfunction-ss_dRsR::synapse0x24a53a0() {
   return (neuron0x2493980()*-5.1543);
}

double NNfunction-ss_dRsR::synapse0x24a53e0() {
   return (neuron0x2493cc0()*0.111001);
}

double NNfunction-ss_dRsR::synapse0x24a5420() {
   return (neuron0x2494000()*0.0124314);
}

double NNfunction-ss_dRsR::synapse0x24a5460() {
   return (neuron0x2494340()*0.0335342);
}

double NNfunction-ss_dRsR::synapse0x24a54a0() {
   return (neuron0x2494680()*0.0184654);
}

double NNfunction-ss_dRsR::synapse0x24a54e0() {
   return (neuron0x24949c0()*0.0446966);
}

double NNfunction-ss_dRsR::synapse0x24a5520() {
   return (neuron0x2494d00()*0.0358443);
}

double NNfunction-ss_dRsR::synapse0x24a5560() {
   return (neuron0x2495040()*0.0120195);
}

double NNfunction-ss_dRsR::synapse0x24a55a0() {
   return (neuron0x2495380()*-0.073504);
}

double NNfunction-ss_dRsR::synapse0x24a55e0() {
   return (neuron0x24956c0()*-0.0872512);
}

double NNfunction-ss_dRsR::synapse0x24a5620() {
   return (neuron0x2495a00()*-0.0891105);
}

double NNfunction-ss_dRsR::synapse0x24a5660() {
   return (neuron0x2495d40()*-0.000104213);
}

double NNfunction-ss_dRsR::synapse0x24a56a0() {
   return (neuron0x2496080()*-0.0276748);
}

double NNfunction-ss_dRsR::synapse0x24a5130() {
   return (neuron0x24963c0()*0.0346163);
}

double NNfunction-ss_dRsR::synapse0x24a5170() {
   return (neuron0x2496920()*1.47974);
}

double NNfunction-ss_dRsR::synapse0x24a57f0() {
   return (neuron0x2496b40()*-0.420975);
}

double NNfunction-ss_dRsR::synapse0x24a5830() {
   return (neuron0x2496e80()*-0.0225212);
}

double NNfunction-ss_dRsR::synapse0x24a5870() {
   return (neuron0x24971c0()*0.0221904);
}

double NNfunction-ss_dRsR::synapse0x24a58b0() {
   return (neuron0x2497500()*-0.0124451);
}

double NNfunction-ss_dRsR::synapse0x24a58f0() {
   return (neuron0x2497840()*-0.0333662);
}

double NNfunction-ss_dRsR::synapse0x24a5930() {
   return (neuron0x2497b80()*-0.0110161);
}

double NNfunction-ss_dRsR::synapse0x24a5cb0() {
   return (neuron0x2492fc0()*0.059161);
}

double NNfunction-ss_dRsR::synapse0x24a5cf0() {
   return (neuron0x2493300()*-1.21677);
}

double NNfunction-ss_dRsR::synapse0x24a5d30() {
   return (neuron0x2493640()*-0.519559);
}

double NNfunction-ss_dRsR::synapse0x24a5d70() {
   return (neuron0x2493980()*-0.433583);
}

double NNfunction-ss_dRsR::synapse0x24a5db0() {
   return (neuron0x2493cc0()*-0.906808);
}

double NNfunction-ss_dRsR::synapse0x24a5df0() {
   return (neuron0x2494000()*0.098811);
}

double NNfunction-ss_dRsR::synapse0x24a5e30() {
   return (neuron0x2494340()*-0.203463);
}

double NNfunction-ss_dRsR::synapse0x24a5e70() {
   return (neuron0x2494680()*-0.109056);
}

double NNfunction-ss_dRsR::synapse0x24a5eb0() {
   return (neuron0x24949c0()*0.761232);
}

double NNfunction-ss_dRsR::synapse0x24a5ef0() {
   return (neuron0x2494d00()*0.687895);
}

double NNfunction-ss_dRsR::synapse0x24a5f30() {
   return (neuron0x2495040()*0.416895);
}

double NNfunction-ss_dRsR::synapse0x24a5f70() {
   return (neuron0x2495380()*1.60011);
}

double NNfunction-ss_dRsR::synapse0x24a5fb0() {
   return (neuron0x24956c0()*-0.271081);
}

double NNfunction-ss_dRsR::synapse0x24a5ff0() {
   return (neuron0x2495a00()*0.683747);
}

double NNfunction-ss_dRsR::synapse0x24a6030() {
   return (neuron0x2495d40()*-0.340733);
}

double NNfunction-ss_dRsR::synapse0x24a6070() {
   return (neuron0x2496080()*0.112232);
}

double NNfunction-ss_dRsR::synapse0x24a5b00() {
   return (neuron0x24963c0()*-0.514405);
}

double NNfunction-ss_dRsR::synapse0x24a5b40() {
   return (neuron0x2496920()*0.883383);
}

double NNfunction-ss_dRsR::synapse0x24a61c0() {
   return (neuron0x2496b40()*0.292381);
}

double NNfunction-ss_dRsR::synapse0x24a6200() {
   return (neuron0x2496e80()*0.426733);
}

double NNfunction-ss_dRsR::synapse0x24a6240() {
   return (neuron0x24971c0()*-0.655386);
}

double NNfunction-ss_dRsR::synapse0x24a6280() {
   return (neuron0x2497500()*-0.5545);
}

double NNfunction-ss_dRsR::synapse0x24a62c0() {
   return (neuron0x2497840()*0.697286);
}

double NNfunction-ss_dRsR::synapse0x24a6300() {
   return (neuron0x2497b80()*-0.257966);
}

double NNfunction-ss_dRsR::synapse0x24a6680() {
   return (neuron0x2492fc0()*-0.866402);
}

double NNfunction-ss_dRsR::synapse0x24a66c0() {
   return (neuron0x2493300()*0.451656);
}

double NNfunction-ss_dRsR::synapse0x24a6700() {
   return (neuron0x2493640()*0.321545);
}

double NNfunction-ss_dRsR::synapse0x24a6740() {
   return (neuron0x2493980()*-0.111622);
}

double NNfunction-ss_dRsR::synapse0x24a6780() {
   return (neuron0x2493cc0()*-0.375854);
}

double NNfunction-ss_dRsR::synapse0x24a67c0() {
   return (neuron0x2494000()*-0.562813);
}

double NNfunction-ss_dRsR::synapse0x24a6800() {
   return (neuron0x2494340()*-0.207862);
}

double NNfunction-ss_dRsR::synapse0x24a6840() {
   return (neuron0x2494680()*-0.421076);
}

double NNfunction-ss_dRsR::synapse0x24a6880() {
   return (neuron0x24949c0()*0.00888471);
}

double NNfunction-ss_dRsR::synapse0x249ea40() {
   return (neuron0x2494d00()*0.659294);
}

double NNfunction-ss_dRsR::synapse0x249ea80() {
   return (neuron0x2495040()*0.399761);
}

double NNfunction-ss_dRsR::synapse0x249eac0() {
   return (neuron0x2495380()*-0.397498);
}

double NNfunction-ss_dRsR::synapse0x249eb00() {
   return (neuron0x24956c0()*-0.163986);
}

double NNfunction-ss_dRsR::synapse0x249eb40() {
   return (neuron0x2495a00()*0.633464);
}

double NNfunction-ss_dRsR::synapse0x249eb80() {
   return (neuron0x2495d40()*-0.191735);
}

double NNfunction-ss_dRsR::synapse0x249ebc0() {
   return (neuron0x2496080()*0.0302404);
}

double NNfunction-ss_dRsR::synapse0x24a64d0() {
   return (neuron0x24963c0()*-0.501108);
}

double NNfunction-ss_dRsR::synapse0x24a6510() {
   return (neuron0x2496920()*0.801963);
}

double NNfunction-ss_dRsR::synapse0x249ed10() {
   return (neuron0x2496b40()*0.0822892);
}

double NNfunction-ss_dRsR::synapse0x249ed50() {
   return (neuron0x2496e80()*-0.227869);
}

double NNfunction-ss_dRsR::synapse0x249ed90() {
   return (neuron0x24971c0()*0.0941379);
}

double NNfunction-ss_dRsR::synapse0x249edd0() {
   return (neuron0x2497500()*-1.00495);
}

double NNfunction-ss_dRsR::synapse0x249ee10() {
   return (neuron0x2497840()*0.00943932);
}

double NNfunction-ss_dRsR::synapse0x249ee50() {
   return (neuron0x2497b80()*-0.239625);
}

double NNfunction-ss_dRsR::synapse0x249f1d0() {
   return (neuron0x2492fc0()*0.269474);
}

double NNfunction-ss_dRsR::synapse0x249f210() {
   return (neuron0x2493300()*-0.247036);
}

double NNfunction-ss_dRsR::synapse0x249f250() {
   return (neuron0x2493640()*1.3883);
}

double NNfunction-ss_dRsR::synapse0x249f290() {
   return (neuron0x2493980()*-0.395071);
}

double NNfunction-ss_dRsR::synapse0x249f2d0() {
   return (neuron0x2493cc0()*-0.973306);
}

double NNfunction-ss_dRsR::synapse0x249f310() {
   return (neuron0x2494000()*0.573625);
}

double NNfunction-ss_dRsR::synapse0x249f350() {
   return (neuron0x2494340()*0.979473);
}

double NNfunction-ss_dRsR::synapse0x249f390() {
   return (neuron0x2494680()*0.531648);
}

double NNfunction-ss_dRsR::synapse0x249f3d0() {
   return (neuron0x24949c0()*0.574174);
}

double NNfunction-ss_dRsR::synapse0x249f410() {
   return (neuron0x2494d00()*0.620501);
}

double NNfunction-ss_dRsR::synapse0x249f450() {
   return (neuron0x2495040()*0.912349);
}

double NNfunction-ss_dRsR::synapse0x249f490() {
   return (neuron0x2495380()*0.922773);
}

double NNfunction-ss_dRsR::synapse0x249f4d0() {
   return (neuron0x24956c0()*-2.32942);
}

double NNfunction-ss_dRsR::synapse0x249f510() {
   return (neuron0x2495a00()*0.0201232);
}

double NNfunction-ss_dRsR::synapse0x249f550() {
   return (neuron0x2495d40()*-0.655035);
}

double NNfunction-ss_dRsR::synapse0x249f590() {
   return (neuron0x2496080()*-0.0685151);
}

double NNfunction-ss_dRsR::synapse0x249f020() {
   return (neuron0x24963c0()*-0.578267);
}

double NNfunction-ss_dRsR::synapse0x249f060() {
   return (neuron0x2496920()*0.406502);
}

double NNfunction-ss_dRsR::synapse0x249f6e0() {
   return (neuron0x2496b40()*-0.851287);
}

double NNfunction-ss_dRsR::synapse0x249f720() {
   return (neuron0x2496e80()*-0.0109679);
}

double NNfunction-ss_dRsR::synapse0x249f760() {
   return (neuron0x24971c0()*-0.700846);
}

double NNfunction-ss_dRsR::synapse0x249f7a0() {
   return (neuron0x2497500()*0.627259);
}

double NNfunction-ss_dRsR::synapse0x249f7e0() {
   return (neuron0x2497840()*-0.127518);
}

double NNfunction-ss_dRsR::synapse0x249f820() {
   return (neuron0x2497b80()*-0.0947036);
}

double NNfunction-ss_dRsR::synapse0x249f9f0() {
   return (neuron0x2492fc0()*-0.0102393);
}

double NNfunction-ss_dRsR::synapse0x24a8a80() {
   return (neuron0x2493300()*-0.00186583);
}

double NNfunction-ss_dRsR::synapse0x24a8ac0() {
   return (neuron0x2493640()*-0.0344);
}

double NNfunction-ss_dRsR::synapse0x24a8b00() {
   return (neuron0x2493980()*0.101035);
}

double NNfunction-ss_dRsR::synapse0x24a8b40() {
   return (neuron0x2493cc0()*-0.00480092);
}

double NNfunction-ss_dRsR::synapse0x24a8b80() {
   return (neuron0x2494000()*-0.0155122);
}

double NNfunction-ss_dRsR::synapse0x24a8bc0() {
   return (neuron0x2494340()*0.0195535);
}

double NNfunction-ss_dRsR::synapse0x24a8c00() {
   return (neuron0x2494680()*-0.0129443);
}

double NNfunction-ss_dRsR::synapse0x24a8c40() {
   return (neuron0x24949c0()*0.00829758);
}

double NNfunction-ss_dRsR::synapse0x24a8c80() {
   return (neuron0x2494d00()*0.0602468);
}

double NNfunction-ss_dRsR::synapse0x24a8cc0() {
   return (neuron0x2495040()*0.0970692);
}

double NNfunction-ss_dRsR::synapse0x24a8d00() {
   return (neuron0x2495380()*0.0439901);
}

double NNfunction-ss_dRsR::synapse0x24a8d40() {
   return (neuron0x24956c0()*0.0633404);
}

double NNfunction-ss_dRsR::synapse0x24a8d80() {
   return (neuron0x2495a00()*-0.040002);
}

double NNfunction-ss_dRsR::synapse0x24a8dc0() {
   return (neuron0x2495d40()*0.041814);
}

double NNfunction-ss_dRsR::synapse0x24a8e00() {
   return (neuron0x2496080()*0.0381772);
}

double NNfunction-ss_dRsR::synapse0x24a88d0() {
   return (neuron0x24963c0()*0.00309724);
}

double NNfunction-ss_dRsR::synapse0x24a8910() {
   return (neuron0x2496920()*-0.234544);
}

double NNfunction-ss_dRsR::synapse0x24a8f50() {
   return (neuron0x2496b40()*-0.699615);
}

double NNfunction-ss_dRsR::synapse0x24a8f90() {
   return (neuron0x2496e80()*-0.0367697);
}

double NNfunction-ss_dRsR::synapse0x24a8fd0() {
   return (neuron0x24971c0()*-0.0128882);
}

double NNfunction-ss_dRsR::synapse0x24a9010() {
   return (neuron0x2497500()*-0.0184376);
}

double NNfunction-ss_dRsR::synapse0x24a9050() {
   return (neuron0x2497840()*-0.0149974);
}

double NNfunction-ss_dRsR::synapse0x24a9090() {
   return (neuron0x2497b80()*0.00777209);
}

double NNfunction-ss_dRsR::synapse0x24a9410() {
   return (neuron0x2492fc0()*0.328769);
}

double NNfunction-ss_dRsR::synapse0x24a9450() {
   return (neuron0x2493300()*-0.51449);
}

double NNfunction-ss_dRsR::synapse0x24a9490() {
   return (neuron0x2493640()*1.1146);
}

double NNfunction-ss_dRsR::synapse0x24a94d0() {
   return (neuron0x2493980()*-0.798568);
}

double NNfunction-ss_dRsR::synapse0x24a9510() {
   return (neuron0x2493cc0()*-0.203606);
}

double NNfunction-ss_dRsR::synapse0x24a9550() {
   return (neuron0x2494000()*0.00303767);
}

double NNfunction-ss_dRsR::synapse0x24a9590() {
   return (neuron0x2494340()*-0.250633);
}

double NNfunction-ss_dRsR::synapse0x24a95d0() {
   return (neuron0x2494680()*0.437516);
}

double NNfunction-ss_dRsR::synapse0x24a9610() {
   return (neuron0x24949c0()*0.700725);
}

double NNfunction-ss_dRsR::synapse0x24a9650() {
   return (neuron0x2494d00()*0.442207);
}

double NNfunction-ss_dRsR::synapse0x24a9690() {
   return (neuron0x2495040()*0.337127);
}

double NNfunction-ss_dRsR::synapse0x24a96d0() {
   return (neuron0x2495380()*0.529295);
}

double NNfunction-ss_dRsR::synapse0x24a9710() {
   return (neuron0x24956c0()*0.366621);
}

double NNfunction-ss_dRsR::synapse0x24a9750() {
   return (neuron0x2495a00()*-0.385642);
}

double NNfunction-ss_dRsR::synapse0x24a9790() {
   return (neuron0x2495d40()*1.53713);
}

double NNfunction-ss_dRsR::synapse0x24a97d0() {
   return (neuron0x2496080()*-0.80952);
}

double NNfunction-ss_dRsR::synapse0x24a9260() {
   return (neuron0x24963c0()*0.147594);
}

double NNfunction-ss_dRsR::synapse0x24a92a0() {
   return (neuron0x2496920()*0.411098);
}

double NNfunction-ss_dRsR::synapse0x24a9920() {
   return (neuron0x2496b40()*-0.543672);
}

double NNfunction-ss_dRsR::synapse0x24a9960() {
   return (neuron0x2496e80()*-0.598284);
}

double NNfunction-ss_dRsR::synapse0x24a99a0() {
   return (neuron0x24971c0()*-0.476403);
}

double NNfunction-ss_dRsR::synapse0x24a99e0() {
   return (neuron0x2497500()*0.231008);
}

double NNfunction-ss_dRsR::synapse0x24a9a20() {
   return (neuron0x2497840()*-0.0459858);
}

double NNfunction-ss_dRsR::synapse0x24a9a60() {
   return (neuron0x2497b80()*0.539231);
}

double NNfunction-ss_dRsR::synapse0x24a9de0() {
   return (neuron0x2492fc0()*-0.0189263);
}

double NNfunction-ss_dRsR::synapse0x24a9e20() {
   return (neuron0x2493300()*0.058943);
}

double NNfunction-ss_dRsR::synapse0x24a9e60() {
   return (neuron0x2493640()*-0.0108938);
}

double NNfunction-ss_dRsR::synapse0x24a9ea0() {
   return (neuron0x2493980()*0.221572);
}

double NNfunction-ss_dRsR::synapse0x24a9ee0() {
   return (neuron0x2493cc0()*-0.0267546);
}

double NNfunction-ss_dRsR::synapse0x24a9f20() {
   return (neuron0x2494000()*-0.0593702);
}

double NNfunction-ss_dRsR::synapse0x24a9f60() {
   return (neuron0x2494340()*0.0459506);
}

double NNfunction-ss_dRsR::synapse0x24a9fa0() {
   return (neuron0x2494680()*-0.00632224);
}

double NNfunction-ss_dRsR::synapse0x24a9fe0() {
   return (neuron0x24949c0()*-0.0102387);
}

double NNfunction-ss_dRsR::synapse0x24aa020() {
   return (neuron0x2494d00()*0.00451185);
}

double NNfunction-ss_dRsR::synapse0x24aa060() {
   return (neuron0x2495040()*0.0491448);
}

double NNfunction-ss_dRsR::synapse0x24aa0a0() {
   return (neuron0x2495380()*0.473958);
}

double NNfunction-ss_dRsR::synapse0x24aa0e0() {
   return (neuron0x24956c0()*0.429031);
}

double NNfunction-ss_dRsR::synapse0x24aa120() {
   return (neuron0x2495a00()*-0.0564222);
}

double NNfunction-ss_dRsR::synapse0x24aa160() {
   return (neuron0x2495d40()*0.329996);
}

double NNfunction-ss_dRsR::synapse0x24aa1a0() {
   return (neuron0x2496080()*0.276451);
}

double NNfunction-ss_dRsR::synapse0x24a9c30() {
   return (neuron0x24963c0()*-0.0539044);
}

double NNfunction-ss_dRsR::synapse0x24a9c70() {
   return (neuron0x2496920()*0.075926);
}

double NNfunction-ss_dRsR::synapse0x24aa2f0() {
   return (neuron0x2496b40()*-0.237685);
}

double NNfunction-ss_dRsR::synapse0x24aa330() {
   return (neuron0x2496e80()*-0.0337315);
}

double NNfunction-ss_dRsR::synapse0x24aa370() {
   return (neuron0x24971c0()*-0.0210138);
}

double NNfunction-ss_dRsR::synapse0x24aa3b0() {
   return (neuron0x2497500()*-0.024566);
}

double NNfunction-ss_dRsR::synapse0x24aa3f0() {
   return (neuron0x2497840()*-0.0199356);
}

double NNfunction-ss_dRsR::synapse0x24aa430() {
   return (neuron0x2497b80()*0.0245283);
}

double NNfunction-ss_dRsR::synapse0x24aa7b0() {
   return (neuron0x2492fc0()*0.0185936);
}

double NNfunction-ss_dRsR::synapse0x24aa7f0() {
   return (neuron0x2493300()*0.00163276);
}

double NNfunction-ss_dRsR::synapse0x24aa830() {
   return (neuron0x2493640()*-0.0102917);
}

double NNfunction-ss_dRsR::synapse0x24aa870() {
   return (neuron0x2493980()*0.107543);
}

double NNfunction-ss_dRsR::synapse0x24aa8b0() {
   return (neuron0x2493cc0()*-0.00119799);
}

double NNfunction-ss_dRsR::synapse0x24aa8f0() {
   return (neuron0x2494000()*0.00490509);
}

double NNfunction-ss_dRsR::synapse0x24aa930() {
   return (neuron0x2494340()*-0.00223381);
}

double NNfunction-ss_dRsR::synapse0x24aa970() {
   return (neuron0x2494680()*-0.0118496);
}

double NNfunction-ss_dRsR::synapse0x24aa9b0() {
   return (neuron0x24949c0()*-0.0137907);
}

double NNfunction-ss_dRsR::synapse0x24aa9f0() {
   return (neuron0x2494d00()*0.01725);
}

double NNfunction-ss_dRsR::synapse0x24aaa30() {
   return (neuron0x2495040()*0.0522286);
}

double NNfunction-ss_dRsR::synapse0x24aaa70() {
   return (neuron0x2495380()*-0.0411014);
}

double NNfunction-ss_dRsR::synapse0x24aaab0() {
   return (neuron0x24956c0()*-0.0267838);
}

double NNfunction-ss_dRsR::synapse0x24aaaf0() {
   return (neuron0x2495a00()*-0.0218139);
}

double NNfunction-ss_dRsR::synapse0x24aab30() {
   return (neuron0x2495d40()*-0.0126498);
}

double NNfunction-ss_dRsR::synapse0x24aab70() {
   return (neuron0x2496080()*-0.0193351);
}

double NNfunction-ss_dRsR::synapse0x24aa600() {
   return (neuron0x24963c0()*0.00682099);
}

double NNfunction-ss_dRsR::synapse0x24aa640() {
   return (neuron0x2496920()*-0.425883);
}

double NNfunction-ss_dRsR::synapse0x24aacc0() {
   return (neuron0x2496b40()*0.668649);
}

double NNfunction-ss_dRsR::synapse0x24aad00() {
   return (neuron0x2496e80()*-0.0312489);
}

double NNfunction-ss_dRsR::synapse0x24aad40() {
   return (neuron0x24971c0()*0.00233035);
}

double NNfunction-ss_dRsR::synapse0x24aad80() {
   return (neuron0x2497500()*-0.0306383);
}

double NNfunction-ss_dRsR::synapse0x24aadc0() {
   return (neuron0x2497840()*-0.0133338);
}

double NNfunction-ss_dRsR::synapse0x24aae00() {
   return (neuron0x2497b80()*-0.0257149);
}

double NNfunction-ss_dRsR::synapse0x24ab180() {
   return (neuron0x2492fc0()*-0.0649301);
}

double NNfunction-ss_dRsR::synapse0x24ab1c0() {
   return (neuron0x2493300()*-0.0319077);
}

double NNfunction-ss_dRsR::synapse0x24ab200() {
   return (neuron0x2493640()*0.0881667);
}

double NNfunction-ss_dRsR::synapse0x24ab240() {
   return (neuron0x2493980()*-0.0218741);
}

double NNfunction-ss_dRsR::synapse0x24ab280() {
   return (neuron0x2493cc0()*0.0693363);
}

double NNfunction-ss_dRsR::synapse0x24ab2c0() {
   return (neuron0x2494000()*0.0529208);
}

double NNfunction-ss_dRsR::synapse0x24ab300() {
   return (neuron0x2494340()*0.0968863);
}

double NNfunction-ss_dRsR::synapse0x24ab340() {
   return (neuron0x2494680()*0.111155);
}

double NNfunction-ss_dRsR::synapse0x24ab380() {
   return (neuron0x24949c0()*0.0891359);
}

double NNfunction-ss_dRsR::synapse0x24ab3c0() {
   return (neuron0x2494d00()*0.282683);
}

double NNfunction-ss_dRsR::synapse0x24ab400() {
   return (neuron0x2495040()*0.164873);
}

double NNfunction-ss_dRsR::synapse0x24ab440() {
   return (neuron0x2495380()*-0.0363465);
}

double NNfunction-ss_dRsR::synapse0x24ab480() {
   return (neuron0x24956c0()*-0.00847361);
}

double NNfunction-ss_dRsR::synapse0x24ab4c0() {
   return (neuron0x2495a00()*-0.0831187);
}

double NNfunction-ss_dRsR::synapse0x24ab500() {
   return (neuron0x2495d40()*0.0248389);
}

double NNfunction-ss_dRsR::synapse0x24ab540() {
   return (neuron0x2496080()*0.0462146);
}

double NNfunction-ss_dRsR::synapse0x24aafd0() {
   return (neuron0x24963c0()*0.0226934);
}

double NNfunction-ss_dRsR::synapse0x24ab010() {
   return (neuron0x2496920()*-0.244824);
}

double NNfunction-ss_dRsR::synapse0x24ab690() {
   return (neuron0x2496b40()*-1.11664);
}

double NNfunction-ss_dRsR::synapse0x24ab6d0() {
   return (neuron0x2496e80()*-0.0732965);
}

double NNfunction-ss_dRsR::synapse0x24ab710() {
   return (neuron0x24971c0()*-0.019138);
}

double NNfunction-ss_dRsR::synapse0x24ab750() {
   return (neuron0x2497500()*-0.0270426);
}

double NNfunction-ss_dRsR::synapse0x24ab790() {
   return (neuron0x2497840()*0.067358);
}

double NNfunction-ss_dRsR::synapse0x24ab7d0() {
   return (neuron0x2497b80()*0.00159586);
}

double NNfunction-ss_dRsR::synapse0x24abb50() {
   return (neuron0x2492fc0()*0.311589);
}

double NNfunction-ss_dRsR::synapse0x24abb90() {
   return (neuron0x2493300()*0.734191);
}

double NNfunction-ss_dRsR::synapse0x24abbd0() {
   return (neuron0x2493640()*0.270134);
}

double NNfunction-ss_dRsR::synapse0x24abc10() {
   return (neuron0x2493980()*1.05099);
}

double NNfunction-ss_dRsR::synapse0x24abc50() {
   return (neuron0x2493cc0()*-0.366849);
}

double NNfunction-ss_dRsR::synapse0x24abc90() {
   return (neuron0x2494000()*-0.047652);
}

double NNfunction-ss_dRsR::synapse0x24abcd0() {
   return (neuron0x2494340()*0.197891);
}

double NNfunction-ss_dRsR::synapse0x24abd10() {
   return (neuron0x2494680()*0.198751);
}

double NNfunction-ss_dRsR::synapse0x24abd50() {
   return (neuron0x24949c0()*-0.0719964);
}

double NNfunction-ss_dRsR::synapse0x24abd90() {
   return (neuron0x2494d00()*-0.687361);
}

double NNfunction-ss_dRsR::synapse0x24abdd0() {
   return (neuron0x2495040()*0.259243);
}

double NNfunction-ss_dRsR::synapse0x24abe10() {
   return (neuron0x2495380()*-0.199239);
}

double NNfunction-ss_dRsR::synapse0x24abe50() {
   return (neuron0x24956c0()*-0.46086);
}

double NNfunction-ss_dRsR::synapse0x24abe90() {
   return (neuron0x2495a00()*-0.207757);
}

double NNfunction-ss_dRsR::synapse0x24abed0() {
   return (neuron0x2495d40()*-0.276847);
}

double NNfunction-ss_dRsR::synapse0x24abf10() {
   return (neuron0x2496080()*-0.44507);
}

double NNfunction-ss_dRsR::synapse0x24ab9a0() {
   return (neuron0x24963c0()*-0.0500105);
}

double NNfunction-ss_dRsR::synapse0x24ab9e0() {
   return (neuron0x2496920()*1.45173);
}

double NNfunction-ss_dRsR::synapse0x24ac060() {
   return (neuron0x2496b40()*0.626359);
}

double NNfunction-ss_dRsR::synapse0x24ac0a0() {
   return (neuron0x2496e80()*-0.0112631);
}

double NNfunction-ss_dRsR::synapse0x24ac0e0() {
   return (neuron0x24971c0()*0.573148);
}

double NNfunction-ss_dRsR::synapse0x24ac120() {
   return (neuron0x2497500()*-0.679898);
}

double NNfunction-ss_dRsR::synapse0x24ac160() {
   return (neuron0x2497840()*0.16477);
}

double NNfunction-ss_dRsR::synapse0x24ac1a0() {
   return (neuron0x2497b80()*-0.213647);
}

double NNfunction-ss_dRsR::synapse0x24ac520() {
   return (neuron0x2492fc0()*-0.0160639);
}

double NNfunction-ss_dRsR::synapse0x24ac560() {
   return (neuron0x2493300()*-0.010782);
}

double NNfunction-ss_dRsR::synapse0x24ac5a0() {
   return (neuron0x2493640()*-0.0430862);
}

double NNfunction-ss_dRsR::synapse0x24ac5e0() {
   return (neuron0x2493980()*1.81635);
}

double NNfunction-ss_dRsR::synapse0x24ac620() {
   return (neuron0x2493cc0()*0.000267131);
}

double NNfunction-ss_dRsR::synapse0x24ac660() {
   return (neuron0x2494000()*-0.0191474);
}

double NNfunction-ss_dRsR::synapse0x24ac6a0() {
   return (neuron0x2494340()*-0.00300647);
}

double NNfunction-ss_dRsR::synapse0x24ac6e0() {
   return (neuron0x2494680()*-0.0158862);
}

double NNfunction-ss_dRsR::synapse0x24ac720() {
   return (neuron0x24949c0()*0.0129409);
}

double NNfunction-ss_dRsR::synapse0x24ac760() {
   return (neuron0x2494d00()*0.00326049);
}

double NNfunction-ss_dRsR::synapse0x24ac7a0() {
   return (neuron0x2495040()*0.00251206);
}

double NNfunction-ss_dRsR::synapse0x24ac7e0() {
   return (neuron0x2495380()*-0.0101547);
}

double NNfunction-ss_dRsR::synapse0x24ac820() {
   return (neuron0x24956c0()*-0.013703);
}

double NNfunction-ss_dRsR::synapse0x24ac860() {
   return (neuron0x2495a00()*0.00529357);
}

double NNfunction-ss_dRsR::synapse0x24ac8a0() {
   return (neuron0x2495d40()*-0.0101712);
}

double NNfunction-ss_dRsR::synapse0x24ac8e0() {
   return (neuron0x2496080()*-0.0190454);
}

double NNfunction-ss_dRsR::synapse0x24ac370() {
   return (neuron0x24963c0()*0.00951417);
}

double NNfunction-ss_dRsR::synapse0x24ac3b0() {
   return (neuron0x2496920()*0.23709);
}

double NNfunction-ss_dRsR::synapse0x24aca30() {
   return (neuron0x2496b40()*0.197574);
}

double NNfunction-ss_dRsR::synapse0x24aca70() {
   return (neuron0x2496e80()*-0.00167637);
}

double NNfunction-ss_dRsR::synapse0x24acab0() {
   return (neuron0x24971c0()*-0.00518541);
}

double NNfunction-ss_dRsR::synapse0x24acaf0() {
   return (neuron0x2497500()*0.00878141);
}

double NNfunction-ss_dRsR::synapse0x24acb30() {
   return (neuron0x2497840()*0.000397406);
}

double NNfunction-ss_dRsR::synapse0x24acb70() {
   return (neuron0x2497b80()*0.00790665);
}

double NNfunction-ss_dRsR::synapse0x24acef0() {
   return (neuron0x2492fc0()*0.552482);
}

double NNfunction-ss_dRsR::synapse0x24acf30() {
   return (neuron0x2493300()*-0.429831);
}

double NNfunction-ss_dRsR::synapse0x24acf70() {
   return (neuron0x2493640()*1.32291);
}

double NNfunction-ss_dRsR::synapse0x24acfb0() {
   return (neuron0x2493980()*0.158896);
}

double NNfunction-ss_dRsR::synapse0x24acff0() {
   return (neuron0x2493cc0()*-0.0662985);
}

double NNfunction-ss_dRsR::synapse0x24ad030() {
   return (neuron0x2494000()*0.0212852);
}

double NNfunction-ss_dRsR::synapse0x24ad070() {
   return (neuron0x2494340()*0.112313);
}

double NNfunction-ss_dRsR::synapse0x24ad0b0() {
   return (neuron0x2494680()*0.273664);
}

double NNfunction-ss_dRsR::synapse0x24ad0f0() {
   return (neuron0x24949c0()*0.914359);
}

double NNfunction-ss_dRsR::synapse0x24ad130() {
   return (neuron0x2494d00()*0.504337);
}

double NNfunction-ss_dRsR::synapse0x24ad170() {
   return (neuron0x2495040()*0.716458);
}

double NNfunction-ss_dRsR::synapse0x24ad1b0() {
   return (neuron0x2495380()*0.252077);
}

double NNfunction-ss_dRsR::synapse0x24ad1f0() {
   return (neuron0x24956c0()*0.0853335);
}

double NNfunction-ss_dRsR::synapse0x24ad230() {
   return (neuron0x2495a00()*0.0236525);
}

double NNfunction-ss_dRsR::synapse0x24ad270() {
   return (neuron0x2495d40()*0.282949);
}

double NNfunction-ss_dRsR::synapse0x24ad2b0() {
   return (neuron0x2496080()*-0.0489978);
}

double NNfunction-ss_dRsR::synapse0x24acd40() {
   return (neuron0x24963c0()*-0.0463006);
}

double NNfunction-ss_dRsR::synapse0x24acd80() {
   return (neuron0x2496920()*0.4843);
}

double NNfunction-ss_dRsR::synapse0x24ad400() {
   return (neuron0x2496b40()*-0.372495);
}

double NNfunction-ss_dRsR::synapse0x24ad440() {
   return (neuron0x2496e80()*0.0669441);
}

double NNfunction-ss_dRsR::synapse0x24ad480() {
   return (neuron0x24971c0()*-0.15516);
}

double NNfunction-ss_dRsR::synapse0x24ad4c0() {
   return (neuron0x2497500()*-0.169363);
}

double NNfunction-ss_dRsR::synapse0x24ad500() {
   return (neuron0x2497840()*-0.00554122);
}

double NNfunction-ss_dRsR::synapse0x24ad540() {
   return (neuron0x2497b80()*0.128701);
}

double NNfunction-ss_dRsR::synapse0x24ad8c0() {
   return (neuron0x2492fc0()*-0.237605);
}

double NNfunction-ss_dRsR::synapse0x24a1e90() {
   return (neuron0x2493300()*-0.953653);
}

double NNfunction-ss_dRsR::synapse0x24a1ed0() {
   return (neuron0x2493640()*-0.0189466);
}

double NNfunction-ss_dRsR::synapse0x24a1f10() {
   return (neuron0x2493980()*1.04967);
}

double NNfunction-ss_dRsR::synapse0x24a2160() {
   return (neuron0x2493cc0()*0.0393872);
}

double NNfunction-ss_dRsR::synapse0x24a21a0() {
   return (neuron0x2494000()*-0.270938);
}

double NNfunction-ss_dRsR::synapse0x24a21e0() {
   return (neuron0x2494340()*0.30099);
}

double NNfunction-ss_dRsR::synapse0x24a2430() {
   return (neuron0x2494680()*0.216656);
}

double NNfunction-ss_dRsR::synapse0x24a2470() {
   return (neuron0x24949c0()*0.154754);
}

double NNfunction-ss_dRsR::synapse0x24a26c0() {
   return (neuron0x2494d00()*0.108774);
}

double NNfunction-ss_dRsR::synapse0x24a2700() {
   return (neuron0x2495040()*0.394037);
}

double NNfunction-ss_dRsR::synapse0x24a2740() {
   return (neuron0x2495380()*-0.048157);
}

double NNfunction-ss_dRsR::synapse0x24a2990() {
   return (neuron0x24956c0()*-0.294009);
}

double NNfunction-ss_dRsR::synapse0x24a29d0() {
   return (neuron0x2495a00()*-0.200802);
}

double NNfunction-ss_dRsR::synapse0x24a2c20() {
   return (neuron0x2495d40()*-0.0809956);
}

double NNfunction-ss_dRsR::synapse0x24a2c60() {
   return (neuron0x2496080()*-0.240671);
}

double NNfunction-ss_dRsR::synapse0x24ad710() {
   return (neuron0x24963c0()*0.618147);
}

double NNfunction-ss_dRsR::synapse0x24ad750() {
   return (neuron0x2496920()*-0.769185);
}

double NNfunction-ss_dRsR::synapse0x24a2db0() {
   return (neuron0x2496b40()*0.0769404);
}

double NNfunction-ss_dRsR::synapse0x24a32c0() {
   return (neuron0x2496e80()*-0.407508);
}

double NNfunction-ss_dRsR::synapse0x24a3300() {
   return (neuron0x24971c0()*0.31595);
}

double NNfunction-ss_dRsR::synapse0x24a3340() {
   return (neuron0x2497500()*-0.415273);
}

double NNfunction-ss_dRsR::synapse0x24a3590() {
   return (neuron0x2497840()*0.0585743);
}

double NNfunction-ss_dRsR::synapse0x24a35d0() {
   return (neuron0x2497b80()*-0.0979761);
}

double NNfunction-ss_dRsR::synapse0x24a2e80() {
   return (neuron0x2492fc0()*1.0214);
}

double NNfunction-ss_dRsR::synapse0x24a2ec0() {
   return (neuron0x2493300()*-0.333273);
}

double NNfunction-ss_dRsR::synapse0x24a2f00() {
   return (neuron0x2493640()*-0.555403);
}

double NNfunction-ss_dRsR::synapse0x24a2f40() {
   return (neuron0x2493980()*0.193377);
}

double NNfunction-ss_dRsR::synapse0x24a38c0() {
   return (neuron0x2493cc0()*-0.253569);
}

double NNfunction-ss_dRsR::synapse0x24afc10() {
   return (neuron0x2494000()*-0.111363);
}

double NNfunction-ss_dRsR::synapse0x24afc50() {
   return (neuron0x2494340()*0.722947);
}

double NNfunction-ss_dRsR::synapse0x24afc90() {
   return (neuron0x2494680()*0.569138);
}

double NNfunction-ss_dRsR::synapse0x24afcd0() {
   return (neuron0x24949c0()*0.00667882);
}

double NNfunction-ss_dRsR::synapse0x24afd10() {
   return (neuron0x2494d00()*0.314357);
}

double NNfunction-ss_dRsR::synapse0x24afd50() {
   return (neuron0x2495040()*-0.966181);
}

double NNfunction-ss_dRsR::synapse0x24afd90() {
   return (neuron0x2495380()*0.729938);
}

double NNfunction-ss_dRsR::synapse0x24afdd0() {
   return (neuron0x24956c0()*0.820811);
}

double NNfunction-ss_dRsR::synapse0x24afe10() {
   return (neuron0x2495a00()*-1.02796);
}

double NNfunction-ss_dRsR::synapse0x24afe50() {
   return (neuron0x2495d40()*-0.222726);
}

double NNfunction-ss_dRsR::synapse0x24afe90() {
   return (neuron0x2496080()*-0.434489);
}

double NNfunction-ss_dRsR::synapse0x24a37a0() {
   return (neuron0x24963c0()*-0.196284);
}

double NNfunction-ss_dRsR::synapse0x24a37e0() {
   return (neuron0x2496920()*-0.809005);
}

double NNfunction-ss_dRsR::synapse0x24affe0() {
   return (neuron0x2496b40()*0.139638);
}

double NNfunction-ss_dRsR::synapse0x24b0020() {
   return (neuron0x2496e80()*-0.413189);
}

double NNfunction-ss_dRsR::synapse0x24b0060() {
   return (neuron0x24971c0()*-0.191257);
}

double NNfunction-ss_dRsR::synapse0x24b00a0() {
   return (neuron0x2497500()*0.284848);
}

double NNfunction-ss_dRsR::synapse0x24b00e0() {
   return (neuron0x2497840()*0.608273);
}

double NNfunction-ss_dRsR::synapse0x24b0120() {
   return (neuron0x2497b80()*0.346499);
}

double NNfunction-ss_dRsR::synapse0x24b04a0() {
   return (neuron0x2492fc0()*0.0078926);
}

double NNfunction-ss_dRsR::synapse0x24b04e0() {
   return (neuron0x2493300()*0.0110209);
}

double NNfunction-ss_dRsR::synapse0x24b0520() {
   return (neuron0x2493640()*0.00625448);
}

double NNfunction-ss_dRsR::synapse0x24b0560() {
   return (neuron0x2493980()*0.0725878);
}

double NNfunction-ss_dRsR::synapse0x24b05a0() {
   return (neuron0x2493cc0()*0.0268786);
}

double NNfunction-ss_dRsR::synapse0x24b05e0() {
   return (neuron0x2494000()*0.0270781);
}

double NNfunction-ss_dRsR::synapse0x24b0620() {
   return (neuron0x2494340()*0.0234756);
}

double NNfunction-ss_dRsR::synapse0x24b0660() {
   return (neuron0x2494680()*0.0302121);
}

double NNfunction-ss_dRsR::synapse0x24b06a0() {
   return (neuron0x24949c0()*-0.0111387);
}

double NNfunction-ss_dRsR::synapse0x24b06e0() {
   return (neuron0x2494d00()*0.0583256);
}

double NNfunction-ss_dRsR::synapse0x24b0720() {
   return (neuron0x2495040()*-0.021228);
}

double NNfunction-ss_dRsR::synapse0x24b0760() {
   return (neuron0x2495380()*0.00612976);
}

double NNfunction-ss_dRsR::synapse0x24b07a0() {
   return (neuron0x24956c0()*-0.047088);
}

double NNfunction-ss_dRsR::synapse0x24b07e0() {
   return (neuron0x2495a00()*-0.0222072);
}

double NNfunction-ss_dRsR::synapse0x24b0820() {
   return (neuron0x2495d40()*0.0188006);
}

double NNfunction-ss_dRsR::synapse0x24b0860() {
   return (neuron0x2496080()*0.00779671);
}

double NNfunction-ss_dRsR::synapse0x24b02f0() {
   return (neuron0x24963c0()*-0.00711858);
}

double NNfunction-ss_dRsR::synapse0x24b0330() {
   return (neuron0x2496920()*-0.228838);
}

double NNfunction-ss_dRsR::synapse0x24b09b0() {
   return (neuron0x2496b40()*1.67528);
}

double NNfunction-ss_dRsR::synapse0x24b09f0() {
   return (neuron0x2496e80()*0.00303353);
}

double NNfunction-ss_dRsR::synapse0x24b0a30() {
   return (neuron0x24971c0()*0.0379291);
}

double NNfunction-ss_dRsR::synapse0x24b0a70() {
   return (neuron0x2497500()*0.0150465);
}

double NNfunction-ss_dRsR::synapse0x24b0ab0() {
   return (neuron0x2497840()*0.00568784);
}

double NNfunction-ss_dRsR::synapse0x24b0af0() {
   return (neuron0x2497b80()*0.00382915);
}

double NNfunction-ss_dRsR::synapse0x24b0e70() {
   return (neuron0x2492fc0()*-0.156496);
}

double NNfunction-ss_dRsR::synapse0x24b0eb0() {
   return (neuron0x2493300()*0.175216);
}

double NNfunction-ss_dRsR::synapse0x24b0ef0() {
   return (neuron0x2493640()*-0.144755);
}

double NNfunction-ss_dRsR::synapse0x24b0f30() {
   return (neuron0x2493980()*-0.260305);
}

double NNfunction-ss_dRsR::synapse0x24b0f70() {
   return (neuron0x2493cc0()*0.381153);
}

double NNfunction-ss_dRsR::synapse0x24b0fb0() {
   return (neuron0x2494000()*0.0998457);
}

double NNfunction-ss_dRsR::synapse0x24b0ff0() {
   return (neuron0x2494340()*0.0362182);
}

double NNfunction-ss_dRsR::synapse0x24b1030() {
   return (neuron0x2494680()*0.076776);
}

double NNfunction-ss_dRsR::synapse0x24b1070() {
   return (neuron0x24949c0()*0.664929);
}

double NNfunction-ss_dRsR::synapse0x24b10b0() {
   return (neuron0x2494d00()*-0.135578);
}

double NNfunction-ss_dRsR::synapse0x24b10f0() {
   return (neuron0x2495040()*-0.0451735);
}

double NNfunction-ss_dRsR::synapse0x24b1130() {
   return (neuron0x2495380()*-0.0433546);
}

double NNfunction-ss_dRsR::synapse0x24b1170() {
   return (neuron0x24956c0()*-0.722985);
}

double NNfunction-ss_dRsR::synapse0x24b11b0() {
   return (neuron0x2495a00()*0.356583);
}

double NNfunction-ss_dRsR::synapse0x24b11f0() {
   return (neuron0x2495d40()*0.139415);
}

double NNfunction-ss_dRsR::synapse0x24b1230() {
   return (neuron0x2496080()*-0.144125);
}

double NNfunction-ss_dRsR::synapse0x24b0cc0() {
   return (neuron0x24963c0()*0.189981);
}

double NNfunction-ss_dRsR::synapse0x24b0d00() {
   return (neuron0x2496920()*-1.15066);
}

double NNfunction-ss_dRsR::synapse0x24b1380() {
   return (neuron0x2496b40()*1.33122);
}

double NNfunction-ss_dRsR::synapse0x24b13c0() {
   return (neuron0x2496e80()*0.486357);
}

double NNfunction-ss_dRsR::synapse0x24b1400() {
   return (neuron0x24971c0()*0.21697);
}

double NNfunction-ss_dRsR::synapse0x24b1440() {
   return (neuron0x2497500()*0.272213);
}

double NNfunction-ss_dRsR::synapse0x24b1480() {
   return (neuron0x2497840()*-0.0495641);
}

double NNfunction-ss_dRsR::synapse0x24b14c0() {
   return (neuron0x2497b80()*-0.217853);
}

double NNfunction-ss_dRsR::synapse0x24b1840() {
   return (neuron0x2492fc0()*-0.469585);
}

double NNfunction-ss_dRsR::synapse0x24b1880() {
   return (neuron0x2493300()*-0.274398);
}

double NNfunction-ss_dRsR::synapse0x24b18c0() {
   return (neuron0x2493640()*0.207121);
}

double NNfunction-ss_dRsR::synapse0x24b1900() {
   return (neuron0x2493980()*-0.759821);
}

double NNfunction-ss_dRsR::synapse0x24b1940() {
   return (neuron0x2493cc0()*0.695682);
}

double NNfunction-ss_dRsR::synapse0x24b1980() {
   return (neuron0x2494000()*-0.18629);
}

double NNfunction-ss_dRsR::synapse0x24b19c0() {
   return (neuron0x2494340()*-0.300968);
}

double NNfunction-ss_dRsR::synapse0x24b1a00() {
   return (neuron0x2494680()*-0.438578);
}

double NNfunction-ss_dRsR::synapse0x24b1a40() {
   return (neuron0x24949c0()*-0.103915);
}

double NNfunction-ss_dRsR::synapse0x24b1a80() {
   return (neuron0x2494d00()*0.377153);
}

double NNfunction-ss_dRsR::synapse0x24b1ac0() {
   return (neuron0x2495040()*0.324593);
}

double NNfunction-ss_dRsR::synapse0x24b1b00() {
   return (neuron0x2495380()*-0.155869);
}

double NNfunction-ss_dRsR::synapse0x24b1b40() {
   return (neuron0x24956c0()*0.358305);
}

double NNfunction-ss_dRsR::synapse0x24b1b80() {
   return (neuron0x2495a00()*0.09912);
}

double NNfunction-ss_dRsR::synapse0x24b1bc0() {
   return (neuron0x2495d40()*0.112778);
}

double NNfunction-ss_dRsR::synapse0x24b1c00() {
   return (neuron0x2496080()*0.182637);
}

double NNfunction-ss_dRsR::synapse0x24b1690() {
   return (neuron0x24963c0()*-0.552353);
}

double NNfunction-ss_dRsR::synapse0x24b16d0() {
   return (neuron0x2496920()*-0.252384);
}

double NNfunction-ss_dRsR::synapse0x24b1d50() {
   return (neuron0x2496b40()*0.556398);
}

double NNfunction-ss_dRsR::synapse0x24b1d90() {
   return (neuron0x2496e80()*-0.359822);
}

double NNfunction-ss_dRsR::synapse0x24b1dd0() {
   return (neuron0x24971c0()*-0.583814);
}

double NNfunction-ss_dRsR::synapse0x24b1e10() {
   return (neuron0x2497500()*0.49505);
}

double NNfunction-ss_dRsR::synapse0x24b1e50() {
   return (neuron0x2497840()*0.476893);
}

double NNfunction-ss_dRsR::synapse0x24b1e90() {
   return (neuron0x2497b80()*-0.317671);
}

double NNfunction-ss_dRsR::synapse0x24b2210() {
   return (neuron0x2492fc0()*-0.141022);
}

double NNfunction-ss_dRsR::synapse0x24b2250() {
   return (neuron0x2493300()*-0.509192);
}

double NNfunction-ss_dRsR::synapse0x24b2290() {
   return (neuron0x2493640()*-0.586031);
}

double NNfunction-ss_dRsR::synapse0x24b22d0() {
   return (neuron0x2493980()*1.25994);
}

double NNfunction-ss_dRsR::synapse0x24b2310() {
   return (neuron0x2493cc0()*-0.277315);
}

double NNfunction-ss_dRsR::synapse0x24b2350() {
   return (neuron0x2494000()*-0.617087);
}

double NNfunction-ss_dRsR::synapse0x24b2390() {
   return (neuron0x2494340()*0.527598);
}

double NNfunction-ss_dRsR::synapse0x24b23d0() {
   return (neuron0x2494680()*-0.483542);
}

double NNfunction-ss_dRsR::synapse0x24b2410() {
   return (neuron0x24949c0()*-0.614555);
}

double NNfunction-ss_dRsR::synapse0x24b2450() {
   return (neuron0x2494d00()*-0.279399);
}

double NNfunction-ss_dRsR::synapse0x24b2490() {
   return (neuron0x2495040()*-0.277568);
}

double NNfunction-ss_dRsR::synapse0x24b24d0() {
   return (neuron0x2495380()*-0.409241);
}

double NNfunction-ss_dRsR::synapse0x24b2510() {
   return (neuron0x24956c0()*-1.04795);
}

double NNfunction-ss_dRsR::synapse0x24b2550() {
   return (neuron0x2495a00()*-0.0639932);
}

double NNfunction-ss_dRsR::synapse0x24b2590() {
   return (neuron0x2495d40()*-0.533316);
}

double NNfunction-ss_dRsR::synapse0x24b25d0() {
   return (neuron0x2496080()*-1.01617);
}

double NNfunction-ss_dRsR::synapse0x24b2060() {
   return (neuron0x24963c0()*-0.650704);
}

double NNfunction-ss_dRsR::synapse0x24b20a0() {
   return (neuron0x2496920()*0.219061);
}

double NNfunction-ss_dRsR::synapse0x24b2720() {
   return (neuron0x2496b40()*0.849425);
}

double NNfunction-ss_dRsR::synapse0x24b2760() {
   return (neuron0x2496e80()*-0.463969);
}

double NNfunction-ss_dRsR::synapse0x24b27a0() {
   return (neuron0x24971c0()*-0.605983);
}

double NNfunction-ss_dRsR::synapse0x24b27e0() {
   return (neuron0x2497500()*0.0684952);
}

double NNfunction-ss_dRsR::synapse0x24b2820() {
   return (neuron0x2497840()*-0.221959);
}

double NNfunction-ss_dRsR::synapse0x24b2860() {
   return (neuron0x2497b80()*-0.806506);
}

double NNfunction-ss_dRsR::synapse0x24b2be0() {
   return (neuron0x2492fc0()*-0.206316);
}

double NNfunction-ss_dRsR::synapse0x24b2c20() {
   return (neuron0x2493300()*-0.504418);
}

double NNfunction-ss_dRsR::synapse0x24b2c60() {
   return (neuron0x2493640()*-0.556285);
}

double NNfunction-ss_dRsR::synapse0x24b2ca0() {
   return (neuron0x2493980()*0.36543);
}

double NNfunction-ss_dRsR::synapse0x24b2ce0() {
   return (neuron0x2493cc0()*0.104198);
}

double NNfunction-ss_dRsR::synapse0x24b2d20() {
   return (neuron0x2494000()*-0.249103);
}

double NNfunction-ss_dRsR::synapse0x24b2d60() {
   return (neuron0x2494340()*0.170202);
}

double NNfunction-ss_dRsR::synapse0x24b2da0() {
   return (neuron0x2494680()*0.040492);
}

double NNfunction-ss_dRsR::synapse0x24b2de0() {
   return (neuron0x24949c0()*-0.421801);
}

double NNfunction-ss_dRsR::synapse0x24b2e20() {
   return (neuron0x2494d00()*0.463672);
}

double NNfunction-ss_dRsR::synapse0x24b2e60() {
   return (neuron0x2495040()*0.426469);
}

double NNfunction-ss_dRsR::synapse0x24b2ea0() {
   return (neuron0x2495380()*-0.360496);
}

double NNfunction-ss_dRsR::synapse0x24b2ee0() {
   return (neuron0x24956c0()*0.570467);
}

double NNfunction-ss_dRsR::synapse0x24b2f20() {
   return (neuron0x2495a00()*-1.07937);
}

double NNfunction-ss_dRsR::synapse0x24b2f60() {
   return (neuron0x2495d40()*-0.156304);
}

double NNfunction-ss_dRsR::synapse0x24b2fa0() {
   return (neuron0x2496080()*-1.18398);
}

double NNfunction-ss_dRsR::synapse0x24b2a30() {
   return (neuron0x24963c0()*-0.411378);
}

double NNfunction-ss_dRsR::synapse0x24b2a70() {
   return (neuron0x2496920()*-0.76628);
}

double NNfunction-ss_dRsR::synapse0x24b30f0() {
   return (neuron0x2496b40()*0.495449);
}

double NNfunction-ss_dRsR::synapse0x24b3130() {
   return (neuron0x2496e80()*-0.104832);
}

double NNfunction-ss_dRsR::synapse0x24b3170() {
   return (neuron0x24971c0()*-0.351075);
}

double NNfunction-ss_dRsR::synapse0x24b31b0() {
   return (neuron0x2497500()*0.147157);
}

double NNfunction-ss_dRsR::synapse0x24b31f0() {
   return (neuron0x2497840()*0.687874);
}

double NNfunction-ss_dRsR::synapse0x24b3230() {
   return (neuron0x2497b80()*0.425581);
}

double NNfunction-ss_dRsR::synapse0x24b35b0() {
   return (neuron0x2492fc0()*0.523613);
}

double NNfunction-ss_dRsR::synapse0x24b35f0() {
   return (neuron0x2493300()*-0.0745043);
}

double NNfunction-ss_dRsR::synapse0x24b3630() {
   return (neuron0x2493640()*0.674636);
}

double NNfunction-ss_dRsR::synapse0x24b3670() {
   return (neuron0x2493980()*0.606126);
}

double NNfunction-ss_dRsR::synapse0x24b36b0() {
   return (neuron0x2493cc0()*0.541014);
}

double NNfunction-ss_dRsR::synapse0x24b36f0() {
   return (neuron0x2494000()*-1.06627);
}

double NNfunction-ss_dRsR::synapse0x24b3730() {
   return (neuron0x2494340()*0.0339847);
}

double NNfunction-ss_dRsR::synapse0x24b3770() {
   return (neuron0x2494680()*-0.937069);
}

double NNfunction-ss_dRsR::synapse0x24b37b0() {
   return (neuron0x24949c0()*0.892853);
}

double NNfunction-ss_dRsR::synapse0x24b37f0() {
   return (neuron0x2494d00()*0.00380812);
}

double NNfunction-ss_dRsR::synapse0x24b3830() {
   return (neuron0x2495040()*0.320029);
}

double NNfunction-ss_dRsR::synapse0x24b3870() {
   return (neuron0x2495380()*-0.38973);
}

double NNfunction-ss_dRsR::synapse0x24b38b0() {
   return (neuron0x24956c0()*-0.102136);
}

double NNfunction-ss_dRsR::synapse0x24b38f0() {
   return (neuron0x2495a00()*0.710291);
}

double NNfunction-ss_dRsR::synapse0x24b3930() {
   return (neuron0x2495d40()*0.0794128);
}

double NNfunction-ss_dRsR::synapse0x24b3970() {
   return (neuron0x2496080()*-0.480716);
}

double NNfunction-ss_dRsR::synapse0x24b3400() {
   return (neuron0x24963c0()*-0.388153);
}

double NNfunction-ss_dRsR::synapse0x24b3440() {
   return (neuron0x2496920()*0.858302);
}

double NNfunction-ss_dRsR::synapse0x24b3ac0() {
   return (neuron0x2496b40()*-1.45276);
}

double NNfunction-ss_dRsR::synapse0x24b3b00() {
   return (neuron0x2496e80()*0.235652);
}

double NNfunction-ss_dRsR::synapse0x24b3b40() {
   return (neuron0x24971c0()*-1.35751);
}

double NNfunction-ss_dRsR::synapse0x24b3b80() {
   return (neuron0x2497500()*0.179214);
}

double NNfunction-ss_dRsR::synapse0x24b3bc0() {
   return (neuron0x2497840()*0.50823);
}

double NNfunction-ss_dRsR::synapse0x24b3c00() {
   return (neuron0x2497b80()*-0.453643);
}

double NNfunction-ss_dRsR::synapse0x24b3f80() {
   return (neuron0x2492fc0()*0.00141241);
}

double NNfunction-ss_dRsR::synapse0x24b3fc0() {
   return (neuron0x2493300()*-0.167403);
}

double NNfunction-ss_dRsR::synapse0x24b4000() {
   return (neuron0x2493640()*0.350818);
}

double NNfunction-ss_dRsR::synapse0x24b4040() {
   return (neuron0x2493980()*0.892659);
}

double NNfunction-ss_dRsR::synapse0x24b4080() {
   return (neuron0x2493cc0()*-0.302528);
}

double NNfunction-ss_dRsR::synapse0x24b40c0() {
   return (neuron0x2494000()*-0.380459);
}

double NNfunction-ss_dRsR::synapse0x24b4100() {
   return (neuron0x2494340()*0.153088);
}

double NNfunction-ss_dRsR::synapse0x24b4140() {
   return (neuron0x2494680()*-0.00586987);
}

double NNfunction-ss_dRsR::synapse0x24b4180() {
   return (neuron0x24949c0()*0.533186);
}

double NNfunction-ss_dRsR::synapse0x24b41c0() {
   return (neuron0x2494d00()*-0.97869);
}

double NNfunction-ss_dRsR::synapse0x24b4200() {
   return (neuron0x2495040()*-0.417638);
}

double NNfunction-ss_dRsR::synapse0x24b4240() {
   return (neuron0x2495380()*0.680821);
}

double NNfunction-ss_dRsR::synapse0x24b4280() {
   return (neuron0x24956c0()*0.543398);
}

double NNfunction-ss_dRsR::synapse0x24b42c0() {
   return (neuron0x2495a00()*0.788541);
}

double NNfunction-ss_dRsR::synapse0x24b4300() {
   return (neuron0x2495d40()*0.0331159);
}

double NNfunction-ss_dRsR::synapse0x24b4340() {
   return (neuron0x2496080()*1.19626);
}

double NNfunction-ss_dRsR::synapse0x24b3dd0() {
   return (neuron0x24963c0()*-0.13827);
}

double NNfunction-ss_dRsR::synapse0x24b3e10() {
   return (neuron0x2496920()*-0.0828365);
}

double NNfunction-ss_dRsR::synapse0x24b4490() {
   return (neuron0x2496b40()*0.843951);
}

double NNfunction-ss_dRsR::synapse0x24b44d0() {
   return (neuron0x2496e80()*0.362508);
}

double NNfunction-ss_dRsR::synapse0x24b4510() {
   return (neuron0x24971c0()*-0.197072);
}

double NNfunction-ss_dRsR::synapse0x24b4550() {
   return (neuron0x2497500()*0.0612736);
}

double NNfunction-ss_dRsR::synapse0x24b4590() {
   return (neuron0x2497840()*0.0445428);
}

double NNfunction-ss_dRsR::synapse0x24b45d0() {
   return (neuron0x2497b80()*0.11619);
}

double NNfunction-ss_dRsR::synapse0x249d080() {
   return (neuron0x2492fc0()*-0.202318);
}

double NNfunction-ss_dRsR::synapse0x249d0c0() {
   return (neuron0x2493300()*-0.311348);
}

double NNfunction-ss_dRsR::synapse0x249d100() {
   return (neuron0x2493640()*-0.107132);
}

double NNfunction-ss_dRsR::synapse0x249d140() {
   return (neuron0x2493980()*-0.587524);
}

double NNfunction-ss_dRsR::synapse0x249d180() {
   return (neuron0x2493cc0()*0.0714912);
}

double NNfunction-ss_dRsR::synapse0x249d1c0() {
   return (neuron0x2494000()*0.0940803);
}

double NNfunction-ss_dRsR::synapse0x249d200() {
   return (neuron0x2494340()*-0.026989);
}

double NNfunction-ss_dRsR::synapse0x249d240() {
   return (neuron0x2494680()*-0.0132131);
}

double NNfunction-ss_dRsR::synapse0x24b4d60() {
   return (neuron0x24949c0()*-0.0639164);
}

double NNfunction-ss_dRsR::synapse0x24b4da0() {
   return (neuron0x2494d00()*-0.013916);
}

double NNfunction-ss_dRsR::synapse0x24b4de0() {
   return (neuron0x2495040()*-0.0258998);
}

double NNfunction-ss_dRsR::synapse0x24b4e20() {
   return (neuron0x2495380()*0.655537);
}

double NNfunction-ss_dRsR::synapse0x24b4e60() {
   return (neuron0x24956c0()*1.12649);
}

double NNfunction-ss_dRsR::synapse0x24b4ea0() {
   return (neuron0x2495a00()*0.0200554);
}

double NNfunction-ss_dRsR::synapse0x24b4ee0() {
   return (neuron0x2495d40()*-0.201624);
}

double NNfunction-ss_dRsR::synapse0x24b4f20() {
   return (neuron0x2496080()*0.188436);
}

double NNfunction-ss_dRsR::synapse0x24b47a0() {
   return (neuron0x24963c0()*-0.0796814);
}

double NNfunction-ss_dRsR::synapse0x24b47e0() {
   return (neuron0x2496920()*-0.751701);
}

double NNfunction-ss_dRsR::synapse0x24b5070() {
   return (neuron0x2496b40()*-0.350412);
}

double NNfunction-ss_dRsR::synapse0x24b50b0() {
   return (neuron0x2496e80()*0.0110603);
}

double NNfunction-ss_dRsR::synapse0x24b50f0() {
   return (neuron0x24971c0()*0.00361927);
}

double NNfunction-ss_dRsR::synapse0x24b5130() {
   return (neuron0x2497500()*0.0270427);
}

double NNfunction-ss_dRsR::synapse0x24b5170() {
   return (neuron0x2497840()*0.00854297);
}

double NNfunction-ss_dRsR::synapse0x24b51b0() {
   return (neuron0x2497b80()*-0.138311);
}

double NNfunction-ss_dRsR::synapse0x24b5530() {
   return (neuron0x2492fc0()*-0.0712891);
}

double NNfunction-ss_dRsR::synapse0x24b5570() {
   return (neuron0x2493300()*0.00387046);
}

double NNfunction-ss_dRsR::synapse0x24b55b0() {
   return (neuron0x2493640()*-0.133698);
}

double NNfunction-ss_dRsR::synapse0x24b55f0() {
   return (neuron0x2493980()*-2.10007);
}

double NNfunction-ss_dRsR::synapse0x24b5630() {
   return (neuron0x2493cc0()*0.0360464);
}

double NNfunction-ss_dRsR::synapse0x24b5670() {
   return (neuron0x2494000()*-0.0166417);
}

double NNfunction-ss_dRsR::synapse0x24b56b0() {
   return (neuron0x2494340()*0.0228071);
}

double NNfunction-ss_dRsR::synapse0x24b56f0() {
   return (neuron0x2494680()*-0.0249928);
}

double NNfunction-ss_dRsR::synapse0x24b5730() {
   return (neuron0x24949c0()*-0.0770246);
}

double NNfunction-ss_dRsR::synapse0x24b5770() {
   return (neuron0x2494d00()*-0.102117);
}

double NNfunction-ss_dRsR::synapse0x24b57b0() {
   return (neuron0x2495040()*0.000169767);
}

double NNfunction-ss_dRsR::synapse0x24b57f0() {
   return (neuron0x2495380()*-0.0475003);
}

double NNfunction-ss_dRsR::synapse0x24b5830() {
   return (neuron0x24956c0()*-0.0444123);
}

double NNfunction-ss_dRsR::synapse0x24b5870() {
   return (neuron0x2495a00()*0.0339909);
}

double NNfunction-ss_dRsR::synapse0x24b58b0() {
   return (neuron0x2495d40()*-0.0347082);
}

double NNfunction-ss_dRsR::synapse0x24b58f0() {
   return (neuron0x2496080()*-0.0706888);
}

double NNfunction-ss_dRsR::synapse0x24b5380() {
   return (neuron0x24963c0()*0.0604032);
}

double NNfunction-ss_dRsR::synapse0x24b53c0() {
   return (neuron0x2496920()*-0.614525);
}

double NNfunction-ss_dRsR::synapse0x24b5a40() {
   return (neuron0x2496b40()*-0.484919);
}

double NNfunction-ss_dRsR::synapse0x24b5a80() {
   return (neuron0x2496e80()*-0.0886839);
}

double NNfunction-ss_dRsR::synapse0x24b5ac0() {
   return (neuron0x24971c0()*0.0896035);
}

double NNfunction-ss_dRsR::synapse0x24b5b00() {
   return (neuron0x2497500()*0.0575416);
}

double NNfunction-ss_dRsR::synapse0x24b5b40() {
   return (neuron0x2497840()*-0.0269635);
}

double NNfunction-ss_dRsR::synapse0x24b5b80() {
   return (neuron0x2497b80()*-0.0340564);
}

double NNfunction-ss_dRsR::synapse0x24b5f00() {
   return (neuron0x2492fc0()*-0.0140458);
}

double NNfunction-ss_dRsR::synapse0x24b5f40() {
   return (neuron0x2493300()*0.00918583);
}

double NNfunction-ss_dRsR::synapse0x24b5f80() {
   return (neuron0x2493640()*-0.141153);
}

double NNfunction-ss_dRsR::synapse0x24b5fc0() {
   return (neuron0x2493980()*8.22177);
}

double NNfunction-ss_dRsR::synapse0x24b6000() {
   return (neuron0x2493cc0()*-0.0689124);
}

double NNfunction-ss_dRsR::synapse0x24b6040() {
   return (neuron0x2494000()*-0.0526926);
}

double NNfunction-ss_dRsR::synapse0x24b6080() {
   return (neuron0x2494340()*-0.0329125);
}

double NNfunction-ss_dRsR::synapse0x24b60c0() {
   return (neuron0x2494680()*-0.0462089);
}

double NNfunction-ss_dRsR::synapse0x24b6100() {
   return (neuron0x24949c0()*-0.0252893);
}

double NNfunction-ss_dRsR::synapse0x24b6140() {
   return (neuron0x2494d00()*-0.0121708);
}

double NNfunction-ss_dRsR::synapse0x24b6180() {
   return (neuron0x2495040()*-0.0420117);
}

double NNfunction-ss_dRsR::synapse0x24b61c0() {
   return (neuron0x2495380()*0.0215344);
}

double NNfunction-ss_dRsR::synapse0x24b6200() {
   return (neuron0x24956c0()*0.0451076);
}

double NNfunction-ss_dRsR::synapse0x24b6240() {
   return (neuron0x2495a00()*-0.0034883);
}

double NNfunction-ss_dRsR::synapse0x24b6280() {
   return (neuron0x2495d40()*-0.00192247);
}

double NNfunction-ss_dRsR::synapse0x24b62c0() {
   return (neuron0x2496080()*0.0185511);
}

double NNfunction-ss_dRsR::synapse0x24b5d50() {
   return (neuron0x24963c0()*-0.0390623);
}

double NNfunction-ss_dRsR::synapse0x24b5d90() {
   return (neuron0x2496920()*0.0496909);
}

double NNfunction-ss_dRsR::synapse0x24a68c0() {
   return (neuron0x2496b40()*0.106424);
}

double NNfunction-ss_dRsR::synapse0x24a6900() {
   return (neuron0x2496e80()*0.00564676);
}

double NNfunction-ss_dRsR::synapse0x24a6940() {
   return (neuron0x24971c0()*-0.0246513);
}

double NNfunction-ss_dRsR::synapse0x24a6980() {
   return (neuron0x2497500()*-0.00982254);
}

double NNfunction-ss_dRsR::synapse0x24a69c0() {
   return (neuron0x2497840()*-0.00107411);
}

double NNfunction-ss_dRsR::synapse0x24a6a00() {
   return (neuron0x2497b80()*0.0912858);
}

double NNfunction-ss_dRsR::synapse0x24a6d80() {
   return (neuron0x2492fc0()*-0.120436);
}

double NNfunction-ss_dRsR::synapse0x24a6dc0() {
   return (neuron0x2493300()*-0.234467);
}

double NNfunction-ss_dRsR::synapse0x24a6e00() {
   return (neuron0x2493640()*0.124313);
}

double NNfunction-ss_dRsR::synapse0x24a6e40() {
   return (neuron0x2493980()*-1.02733);
}

double NNfunction-ss_dRsR::synapse0x24a6e80() {
   return (neuron0x2493cc0()*-0.33986);
}

double NNfunction-ss_dRsR::synapse0x24a6ec0() {
   return (neuron0x2494000()*0.383141);
}

double NNfunction-ss_dRsR::synapse0x24a6f00() {
   return (neuron0x2494340()*-0.0509026);
}

double NNfunction-ss_dRsR::synapse0x24a6f40() {
   return (neuron0x2494680()*-0.00441112);
}

double NNfunction-ss_dRsR::synapse0x24a6f80() {
   return (neuron0x24949c0()*0.455274);
}

double NNfunction-ss_dRsR::synapse0x24a6fc0() {
   return (neuron0x2494d00()*-0.450625);
}

double NNfunction-ss_dRsR::synapse0x24a7000() {
   return (neuron0x2495040()*0.0375027);
}

double NNfunction-ss_dRsR::synapse0x24a7040() {
   return (neuron0x2495380()*0.162819);
}

double NNfunction-ss_dRsR::synapse0x24a7080() {
   return (neuron0x24956c0()*0.247997);
}

double NNfunction-ss_dRsR::synapse0x24a70c0() {
   return (neuron0x2495a00()*0.260411);
}

double NNfunction-ss_dRsR::synapse0x24a7100() {
   return (neuron0x2495d40()*-0.159433);
}

double NNfunction-ss_dRsR::synapse0x24a7140() {
   return (neuron0x2496080()*0.113516);
}

double NNfunction-ss_dRsR::synapse0x24a6bd0() {
   return (neuron0x24963c0()*0.18347);
}

double NNfunction-ss_dRsR::synapse0x24a6c10() {
   return (neuron0x2496920()*0.835897);
}

double NNfunction-ss_dRsR::synapse0x24a7290() {
   return (neuron0x2496b40()*0.12097);
}

double NNfunction-ss_dRsR::synapse0x24a72d0() {
   return (neuron0x2496e80()*0.31375);
}

double NNfunction-ss_dRsR::synapse0x24a7310() {
   return (neuron0x24971c0()*-0.385097);
}

double NNfunction-ss_dRsR::synapse0x24a7350() {
   return (neuron0x2497500()*0.058231);
}

double NNfunction-ss_dRsR::synapse0x24a7390() {
   return (neuron0x2497840()*0.385219);
}

double NNfunction-ss_dRsR::synapse0x24a73d0() {
   return (neuron0x2497b80()*-0.00930319);
}

double NNfunction-ss_dRsR::synapse0x24a7750() {
   return (neuron0x2492fc0()*-0.00354448);
}

double NNfunction-ss_dRsR::synapse0x24a7790() {
   return (neuron0x2493300()*0.0018388);
}

double NNfunction-ss_dRsR::synapse0x24a77d0() {
   return (neuron0x2493640()*-0.126985);
}

double NNfunction-ss_dRsR::synapse0x24a7810() {
   return (neuron0x2493980()*-7.12847);
}

double NNfunction-ss_dRsR::synapse0x24a7850() {
   return (neuron0x2493cc0()*-0.0165693);
}

double NNfunction-ss_dRsR::synapse0x24a7890() {
   return (neuron0x2494000()*-0.0115617);
}

double NNfunction-ss_dRsR::synapse0x24a78d0() {
   return (neuron0x2494340()*-0.015547);
}

double NNfunction-ss_dRsR::synapse0x24a7910() {
   return (neuron0x2494680()*-0.037106);
}

double NNfunction-ss_dRsR::synapse0x24a7950() {
   return (neuron0x24949c0()*-0.0566576);
}

double NNfunction-ss_dRsR::synapse0x24a7990() {
   return (neuron0x2494d00()*-0.00159117);
}

double NNfunction-ss_dRsR::synapse0x24a79d0() {
   return (neuron0x2495040()*-0.0254795);
}

double NNfunction-ss_dRsR::synapse0x24a7a10() {
   return (neuron0x2495380()*-0.032783);
}

double NNfunction-ss_dRsR::synapse0x24a7a50() {
   return (neuron0x24956c0()*-0.0306835);
}

double NNfunction-ss_dRsR::synapse0x24a7a90() {
   return (neuron0x2495a00()*-0.02035);
}

double NNfunction-ss_dRsR::synapse0x24a7ad0() {
   return (neuron0x2495d40()*-0.0108571);
}

double NNfunction-ss_dRsR::synapse0x24a7b10() {
   return (neuron0x2496080()*-0.0098695);
}

double NNfunction-ss_dRsR::synapse0x24a75a0() {
   return (neuron0x24963c0()*-0.0584847);
}

double NNfunction-ss_dRsR::synapse0x24a75e0() {
   return (neuron0x2496920()*0.624319);
}

double NNfunction-ss_dRsR::synapse0x24a7c60() {
   return (neuron0x2496b40()*0.474802);
}

double NNfunction-ss_dRsR::synapse0x24a7ca0() {
   return (neuron0x2496e80()*-0.0126464);
}

double NNfunction-ss_dRsR::synapse0x24a7ce0() {
   return (neuron0x24971c0()*0.0024961);
}

double NNfunction-ss_dRsR::synapse0x24a7d20() {
   return (neuron0x2497500()*0.0224676);
}

double NNfunction-ss_dRsR::synapse0x24a7d60() {
   return (neuron0x2497840()*0.014184);
}

double NNfunction-ss_dRsR::synapse0x24a7da0() {
   return (neuron0x2497b80()*0.0334217);
}

double NNfunction-ss_dRsR::synapse0x24a8120() {
   return (neuron0x2492fc0()*0.168419);
}

double NNfunction-ss_dRsR::synapse0x24a8160() {
   return (neuron0x2493300()*-0.390058);
}

double NNfunction-ss_dRsR::synapse0x24a81a0() {
   return (neuron0x2493640()*-0.549429);
}

double NNfunction-ss_dRsR::synapse0x24a81e0() {
   return (neuron0x2493980()*-0.601127);
}

double NNfunction-ss_dRsR::synapse0x24a8220() {
   return (neuron0x2493cc0()*0.537744);
}

double NNfunction-ss_dRsR::synapse0x24a8260() {
   return (neuron0x2494000()*0.11413);
}

double NNfunction-ss_dRsR::synapse0x24a82a0() {
   return (neuron0x2494340()*-0.370561);
}

double NNfunction-ss_dRsR::synapse0x24a82e0() {
   return (neuron0x2494680()*-0.330792);
}

double NNfunction-ss_dRsR::synapse0x24a8320() {
   return (neuron0x24949c0()*0.416783);
}

double NNfunction-ss_dRsR::synapse0x24a8360() {
   return (neuron0x2494d00()*-0.139499);
}

double NNfunction-ss_dRsR::synapse0x24a83a0() {
   return (neuron0x2495040()*-0.232264);
}

double NNfunction-ss_dRsR::synapse0x24a83e0() {
   return (neuron0x2495380()*-0.603407);
}

double NNfunction-ss_dRsR::synapse0x24a8420() {
   return (neuron0x24956c0()*0.134846);
}

double NNfunction-ss_dRsR::synapse0x24a8460() {
   return (neuron0x2495a00()*-0.411357);
}

double NNfunction-ss_dRsR::synapse0x24a84a0() {
   return (neuron0x2495d40()*1.02315);
}

double NNfunction-ss_dRsR::synapse0x24a84e0() {
   return (neuron0x2496080()*1.45811);
}

double NNfunction-ss_dRsR::synapse0x24a7f70() {
   return (neuron0x24963c0()*-0.209895);
}

double NNfunction-ss_dRsR::synapse0x24a7fb0() {
   return (neuron0x2496920()*-0.665861);
}

double NNfunction-ss_dRsR::synapse0x24a8630() {
   return (neuron0x2496b40()*-0.327151);
}

double NNfunction-ss_dRsR::synapse0x24a8670() {
   return (neuron0x2496e80()*0.743131);
}

double NNfunction-ss_dRsR::synapse0x24a86b0() {
   return (neuron0x24971c0()*1.09648);
}

double NNfunction-ss_dRsR::synapse0x24a86f0() {
   return (neuron0x2497500()*-0.300801);
}

double NNfunction-ss_dRsR::synapse0x24a8730() {
   return (neuron0x2497840()*0.40746);
}

double NNfunction-ss_dRsR::synapse0x24a8770() {
   return (neuron0x2497b80()*-0.123916);
}

double NNfunction-ss_dRsR::synapse0x24ba640() {
   return (neuron0x2492fc0()*-0.555769);
}

double NNfunction-ss_dRsR::synapse0x24ba680() {
   return (neuron0x2493300()*0.390949);
}

double NNfunction-ss_dRsR::synapse0x24ba6c0() {
   return (neuron0x2493640()*1.12183);
}

double NNfunction-ss_dRsR::synapse0x24ba700() {
   return (neuron0x2493980()*0.641997);
}

double NNfunction-ss_dRsR::synapse0x24ba740() {
   return (neuron0x2493cc0()*-0.60913);
}

double NNfunction-ss_dRsR::synapse0x24ba780() {
   return (neuron0x2494000()*-0.424242);
}

double NNfunction-ss_dRsR::synapse0x24ba7c0() {
   return (neuron0x2494340()*-0.27744);
}

double NNfunction-ss_dRsR::synapse0x24ba800() {
   return (neuron0x2494680()*0.0714956);
}

double NNfunction-ss_dRsR::synapse0x24ba840() {
   return (neuron0x24949c0()*-0.276621);
}

double NNfunction-ss_dRsR::synapse0x24ba880() {
   return (neuron0x2494d00()*0.280292);
}

double NNfunction-ss_dRsR::synapse0x24ba8c0() {
   return (neuron0x2495040()*0.629439);
}

double NNfunction-ss_dRsR::synapse0x24ba900() {
   return (neuron0x2495380()*0.0867079);
}

double NNfunction-ss_dRsR::synapse0x24ba940() {
   return (neuron0x24956c0()*0.249371);
}

double NNfunction-ss_dRsR::synapse0x24ba980() {
   return (neuron0x2495a00()*0.489057);
}

double NNfunction-ss_dRsR::synapse0x24ba9c0() {
   return (neuron0x2495d40()*-0.308579);
}

double NNfunction-ss_dRsR::synapse0x24baa00() {
   return (neuron0x2496080()*-0.08379);
}

double NNfunction-ss_dRsR::synapse0x24a87b0() {
   return (neuron0x24963c0()*-0.229563);
}

double NNfunction-ss_dRsR::synapse0x24a87f0() {
   return (neuron0x2496920()*-1.04413);
}

double NNfunction-ss_dRsR::synapse0x24bab50() {
   return (neuron0x2496b40()*0.854422);
}

double NNfunction-ss_dRsR::synapse0x24bab90() {
   return (neuron0x2496e80()*-1.03867);
}

double NNfunction-ss_dRsR::synapse0x24babd0() {
   return (neuron0x24971c0()*-0.461301);
}

double NNfunction-ss_dRsR::synapse0x24bac10() {
   return (neuron0x2497500()*0.693317);
}

double NNfunction-ss_dRsR::synapse0x24bac50() {
   return (neuron0x2497840()*-0.16883);
}

double NNfunction-ss_dRsR::synapse0x24bac90() {
   return (neuron0x2497b80()*0.0415341);
}

double NNfunction-ss_dRsR::synapse0x24bb010() {
   return (neuron0x2492fc0()*-0.312012);
}

double NNfunction-ss_dRsR::synapse0x24bb050() {
   return (neuron0x2493300()*1.31861);
}

double NNfunction-ss_dRsR::synapse0x24bb090() {
   return (neuron0x2493640()*0.733277);
}

double NNfunction-ss_dRsR::synapse0x24bb0d0() {
   return (neuron0x2493980()*0.00508405);
}

double NNfunction-ss_dRsR::synapse0x24bb110() {
   return (neuron0x2493cc0()*0.683203);
}

double NNfunction-ss_dRsR::synapse0x24bb150() {
   return (neuron0x2494000()*0.672089);
}

double NNfunction-ss_dRsR::synapse0x24bb190() {
   return (neuron0x2494340()*1.50618);
}

double NNfunction-ss_dRsR::synapse0x24bb1d0() {
   return (neuron0x2494680()*0.0728159);
}

double NNfunction-ss_dRsR::synapse0x24bb210() {
   return (neuron0x24949c0()*0.82075);
}

double NNfunction-ss_dRsR::synapse0x24bb250() {
   return (neuron0x2494d00()*1.04425);
}

double NNfunction-ss_dRsR::synapse0x24bb290() {
   return (neuron0x2495040()*1.14834);
}

double NNfunction-ss_dRsR::synapse0x24bb2d0() {
   return (neuron0x2495380()*-0.913511);
}

double NNfunction-ss_dRsR::synapse0x24bb310() {
   return (neuron0x24956c0()*-0.379352);
}

double NNfunction-ss_dRsR::synapse0x24bb350() {
   return (neuron0x2495a00()*-0.128515);
}

double NNfunction-ss_dRsR::synapse0x24bb390() {
   return (neuron0x2495d40()*-1.03519);
}

double NNfunction-ss_dRsR::synapse0x24bb3d0() {
   return (neuron0x2496080()*0.48969);
}

double NNfunction-ss_dRsR::synapse0x24bae60() {
   return (neuron0x24963c0()*0.234929);
}

double NNfunction-ss_dRsR::synapse0x24baea0() {
   return (neuron0x2496920()*-1.7046);
}

double NNfunction-ss_dRsR::synapse0x24bb520() {
   return (neuron0x2496b40()*-0.852463);
}

double NNfunction-ss_dRsR::synapse0x24bb560() {
   return (neuron0x2496e80()*-0.167362);
}

double NNfunction-ss_dRsR::synapse0x24bb5a0() {
   return (neuron0x24971c0()*0.523973);
}

double NNfunction-ss_dRsR::synapse0x24bb5e0() {
   return (neuron0x2497500()*0.162046);
}

double NNfunction-ss_dRsR::synapse0x24bb620() {
   return (neuron0x2497840()*-0.367179);
}

double NNfunction-ss_dRsR::synapse0x24bb660() {
   return (neuron0x2497b80()*0.158205);
}

double NNfunction-ss_dRsR::synapse0x24bb9e0() {
   return (neuron0x2492fc0()*0.0728422);
}

double NNfunction-ss_dRsR::synapse0x24bba20() {
   return (neuron0x2493300()*0.588003);
}

double NNfunction-ss_dRsR::synapse0x24bba60() {
   return (neuron0x2493640()*-0.55347);
}

double NNfunction-ss_dRsR::synapse0x24bbaa0() {
   return (neuron0x2493980()*0.139076);
}

double NNfunction-ss_dRsR::synapse0x24bbae0() {
   return (neuron0x2493cc0()*-0.287539);
}

double NNfunction-ss_dRsR::synapse0x24bbb20() {
   return (neuron0x2494000()*0.887111);
}

double NNfunction-ss_dRsR::synapse0x24bbb60() {
   return (neuron0x2494340()*-0.537845);
}

double NNfunction-ss_dRsR::synapse0x24bbba0() {
   return (neuron0x2494680()*-0.485823);
}

double NNfunction-ss_dRsR::synapse0x24bbbe0() {
   return (neuron0x24949c0()*-1.17733);
}

double NNfunction-ss_dRsR::synapse0x24bbc20() {
   return (neuron0x2494d00()*0.493771);
}

double NNfunction-ss_dRsR::synapse0x24bbc60() {
   return (neuron0x2495040()*-0.498583);
}

double NNfunction-ss_dRsR::synapse0x24bbca0() {
   return (neuron0x2495380()*1.04577);
}

double NNfunction-ss_dRsR::synapse0x24bbce0() {
   return (neuron0x24956c0()*0.250174);
}

double NNfunction-ss_dRsR::synapse0x24bbd20() {
   return (neuron0x2495a00()*-0.252451);
}

double NNfunction-ss_dRsR::synapse0x24bbd60() {
   return (neuron0x2495d40()*0.398886);
}

double NNfunction-ss_dRsR::synapse0x24bbda0() {
   return (neuron0x2496080()*0.390594);
}

double NNfunction-ss_dRsR::synapse0x24bb830() {
   return (neuron0x24963c0()*-0.103526);
}

double NNfunction-ss_dRsR::synapse0x24bb870() {
   return (neuron0x2496920()*1.30319);
}

double NNfunction-ss_dRsR::synapse0x24bbef0() {
   return (neuron0x2496b40()*-1.01215);
}

double NNfunction-ss_dRsR::synapse0x24bbf30() {
   return (neuron0x2496e80()*0.774385);
}

double NNfunction-ss_dRsR::synapse0x24bbf70() {
   return (neuron0x24971c0()*-0.0602771);
}

double NNfunction-ss_dRsR::synapse0x24bbfb0() {
   return (neuron0x2497500()*-0.190247);
}

double NNfunction-ss_dRsR::synapse0x24bbff0() {
   return (neuron0x2497840()*0.602883);
}

double NNfunction-ss_dRsR::synapse0x24bc030() {
   return (neuron0x2497b80()*-0.493359);
}

double NNfunction-ss_dRsR::synapse0x24bc3b0() {
   return (neuron0x2492fc0()*-0.0514188);
}

double NNfunction-ss_dRsR::synapse0x24bc3f0() {
   return (neuron0x2493300()*-0.0226754);
}

double NNfunction-ss_dRsR::synapse0x24bc430() {
   return (neuron0x2493640()*-0.125383);
}

double NNfunction-ss_dRsR::synapse0x24bc470() {
   return (neuron0x2493980()*-2.61975);
}

double NNfunction-ss_dRsR::synapse0x24bc4b0() {
   return (neuron0x2493cc0()*0.0127642);
}

double NNfunction-ss_dRsR::synapse0x24bc4f0() {
   return (neuron0x2494000()*-0.0493388);
}

double NNfunction-ss_dRsR::synapse0x24bc530() {
   return (neuron0x2494340()*0.000646683);
}

double NNfunction-ss_dRsR::synapse0x24bc570() {
   return (neuron0x2494680()*-0.0437268);
}

double NNfunction-ss_dRsR::synapse0x24bc5b0() {
   return (neuron0x24949c0()*-0.00493496);
}

double NNfunction-ss_dRsR::synapse0x24bc5f0() {
   return (neuron0x2494d00()*-0.0393627);
}

double NNfunction-ss_dRsR::synapse0x24bc630() {
   return (neuron0x2495040()*-0.0436343);
}

double NNfunction-ss_dRsR::synapse0x24bc670() {
   return (neuron0x2495380()*0.0174011);
}

double NNfunction-ss_dRsR::synapse0x24bc6b0() {
   return (neuron0x24956c0()*-0.0330432);
}

double NNfunction-ss_dRsR::synapse0x24bc6f0() {
   return (neuron0x2495a00()*-0.0833903);
}

double NNfunction-ss_dRsR::synapse0x24bc730() {
   return (neuron0x2495d40()*0.00485765);
}

double NNfunction-ss_dRsR::synapse0x24bc770() {
   return (neuron0x2496080()*-0.00151237);
}

double NNfunction-ss_dRsR::synapse0x24bc200() {
   return (neuron0x24963c0()*-0.0489729);
}

double NNfunction-ss_dRsR::synapse0x24bc240() {
   return (neuron0x2496920()*0.323774);
}

double NNfunction-ss_dRsR::synapse0x24bc8c0() {
   return (neuron0x2496b40()*0.21424);
}

double NNfunction-ss_dRsR::synapse0x24bc900() {
   return (neuron0x2496e80()*-0.0191545);
}

double NNfunction-ss_dRsR::synapse0x24bc940() {
   return (neuron0x24971c0()*0.0151271);
}

double NNfunction-ss_dRsR::synapse0x24bc980() {
   return (neuron0x2497500()*-0.0192017);
}

double NNfunction-ss_dRsR::synapse0x24bc9c0() {
   return (neuron0x2497840()*0.014633);
}

double NNfunction-ss_dRsR::synapse0x24bca00() {
   return (neuron0x2497b80()*0.0376471);
}

double NNfunction-ss_dRsR::synapse0x225c880() {
   return (neuron0x2497ff0()*1.68101);
}

double NNfunction-ss_dRsR::synapse0x225c8c0() {
   return (neuron0x2498940()*0.550978);
}

double NNfunction-ss_dRsR::synapse0x249a4b0() {
   return (neuron0x2499420()*-2.78302);
}

double NNfunction-ss_dRsR::synapse0x249a4f0() {
   return (neuron0x2498ec0()*-3.8048);
}

double NNfunction-ss_dRsR::synapse0x249ae80() {
   return (neuron0x249a200()*-1.87624);
}

double NNfunction-ss_dRsR::synapse0x249aec0() {
   return (neuron0x249abd0()*-1.55627);
}

double NNfunction-ss_dRsR::synapse0x249bc50() {
   return (neuron0x249b9a0()*-1.16156);
}

double NNfunction-ss_dRsR::synapse0x249bc90() {
   return (neuron0x249c370()*-1.54797);
}

double NNfunction-ss_dRsR::synapse0x249c620() {
   return (neuron0x249cd40()*-3.31653);
}

double NNfunction-ss_dRsR::synapse0x249c660() {
   return (neuron0x249d820()*0.543139);
}

double NNfunction-ss_dRsR::synapse0x249cff0() {
   return (neuron0x249e1f0()*1.82714);
}

double NNfunction-ss_dRsR::synapse0x249d030() {
   return (neuron0x249b2d0()*1.07804);
}

double NNfunction-ss_dRsR::synapse0x249dad0() {
   return (neuron0x249fda0()*3.60766);
}

double NNfunction-ss_dRsR::synapse0x249db10() {
   return (neuron0x24a0770()*2.84952);
}

double NNfunction-ss_dRsR::synapse0x249e4a0() {
   return (neuron0x24a1140()*-1.08279);
}

double NNfunction-ss_dRsR::synapse0x249e4e0() {
   return (neuron0x24a1b10()*-0.891135);
}

double NNfunction-ss_dRsR::synapse0x249b580() {
   return (neuron0x24a3920()*0.46436);
}

double NNfunction-ss_dRsR::synapse0x249b5c0() {
   return (neuron0x24a3c00()*-0.725172);
}

double NNfunction-ss_dRsR::synapse0x24a0050() {
   return (neuron0x24a45d0()*-0.221052);
}

double NNfunction-ss_dRsR::synapse0x24a0090() {
   return (neuron0x24a4fa0()*0.75329);
}

double NNfunction-ss_dRsR::synapse0x24a0a20() {
   return (neuron0x24a5970()*1.51355);
}

double NNfunction-ss_dRsR::synapse0x24a0a60() {
   return (neuron0x24a6340()*-1.60419);
}

double NNfunction-ss_dRsR::synapse0x24a13f0() {
   return (neuron0x249ee90()*-1.36735);
}

double NNfunction-ss_dRsR::synapse0x24a1430() {
   return (neuron0x249f860()*0.52637);
}

double NNfunction-ss_dRsR::synapse0x24a1dc0() {
   return (neuron0x24a90d0()*0.302302);
}

double NNfunction-ss_dRsR::synapse0x24a1e00() {
   return (neuron0x24a9aa0()*2.01022);
}

double NNfunction-ss_dRsR::synapse0x2495f60() {
   return (neuron0x24aa470()*-0.15401);
}

double NNfunction-ss_dRsR::synapse0x2495fa0() {
   return (neuron0x24aae40()*-1.9689);
}

double NNfunction-ss_dRsR::synapse0x24a3eb0() {
   return (neuron0x24ab810()*-2.54729);
}

double NNfunction-ss_dRsR::synapse0x24a3ef0() {
   return (neuron0x24ac1e0()*0.173463);
}

double NNfunction-ss_dRsR::synapse0x24a4880() {
   return (neuron0x24acbb0()*1.39794);
}

double NNfunction-ss_dRsR::synapse0x24a48c0() {
   return (neuron0x24ad580()*2.13389);
}

double NNfunction-ss_dRsR::synapse0x24a5250() {
   return (neuron0x24a3610()*-1.69863);
}

double NNfunction-ss_dRsR::synapse0x24a5290() {
   return (neuron0x24b0160()*0.788308);
}

double NNfunction-ss_dRsR::synapse0x24a5c20() {
   return (neuron0x24b0b30()*-0.5199);
}

double NNfunction-ss_dRsR::synapse0x24a5c60() {
   return (neuron0x24b1500()*-1.68393);
}

double NNfunction-ss_dRsR::synapse0x24a65f0() {
   return (neuron0x24b1ed0()*-1.21526);
}

double NNfunction-ss_dRsR::synapse0x24a6630() {
   return (neuron0x24b28a0()*0.846051);
}

double NNfunction-ss_dRsR::synapse0x249f140() {
   return (neuron0x24b3270()*1.58304);
}

double NNfunction-ss_dRsR::synapse0x249f180() {
   return (neuron0x24b3c40()*1.38674);
}

double NNfunction-ss_dRsR::synapse0x24a89f0() {
   return (neuron0x24b4610()*-0.930523);
}

double NNfunction-ss_dRsR::synapse0x24a8a30() {
   return (neuron0x24b51f0()*2.4198);
}

double NNfunction-ss_dRsR::synapse0x24a9380() {
   return (neuron0x24b5bc0()*5.8869);
}

double NNfunction-ss_dRsR::synapse0x24a93c0() {
   return (neuron0x24a6a40()*-2.92883);
}

double NNfunction-ss_dRsR::synapse0x24a9d50() {
   return (neuron0x24a7410()*2.96014);
}

double NNfunction-ss_dRsR::synapse0x24a9d90() {
   return (neuron0x24a7de0()*-1.33041);
}

double NNfunction-ss_dRsR::synapse0x24aa720() {
   return (neuron0x24ba420()*0.829476);
}

double NNfunction-ss_dRsR::synapse0x24aa760() {
   return (neuron0x24bacd0()*-1.24544);
}

double NNfunction-ss_dRsR::synapse0x24ab0f0() {
   return (neuron0x24bb6a0()*1.17645);
}

double NNfunction-ss_dRsR::synapse0x24ab130() {
   return (neuron0x24bc070()*1.63933);
}

double NNfunction-ss_dRsR::synapse0x24ad830() {
   return (neuron0x2497ff0()*0.283861);
}

double NNfunction-ss_dRsR::synapse0x24ad870() {
   return (neuron0x2498940()*0.564982);
}

double NNfunction-ss_dRsR::synapse0x24a2df0() {
   return (neuron0x2499420()*0.266835);
}

double NNfunction-ss_dRsR::synapse0x24a2e30() {
   return (neuron0x2498ec0()*0.201349);
}

double NNfunction-ss_dRsR::synapse0x24b0410() {
   return (neuron0x249a200()*0.613214);
}

double NNfunction-ss_dRsR::synapse0x24b0450() {
   return (neuron0x249abd0()*0.51236);
}

double NNfunction-ss_dRsR::synapse0x24b0de0() {
   return (neuron0x249b9a0()*0.358401);
}

double NNfunction-ss_dRsR::synapse0x24b0e20() {
   return (neuron0x249c370()*0.438259);
}

double NNfunction-ss_dRsR::synapse0x24b17b0() {
   return (neuron0x249cd40()*-0.495482);
}

double NNfunction-ss_dRsR::synapse0x24b17f0() {
   return (neuron0x249d820()*0.148232);
}

double NNfunction-ss_dRsR::synapse0x24b2180() {
   return (neuron0x249e1f0()*0.34316);
}

double NNfunction-ss_dRsR::synapse0x24b21c0() {
   return (neuron0x249b2d0()*0.521582);
}

double NNfunction-ss_dRsR::synapse0x24b2b50() {
   return (neuron0x249fda0()*0.105438);
}

double NNfunction-ss_dRsR::synapse0x24b2b90() {
   return (neuron0x24a0770()*0.378436);
}

double NNfunction-ss_dRsR::synapse0x24b3520() {
   return (neuron0x24a1140()*0.267386);
}

double NNfunction-ss_dRsR::synapse0x24b3560() {
   return (neuron0x24a1b10()*0.422039);
}

double NNfunction-ss_dRsR::synapse0x24b3ef0() {
   return (neuron0x24a3920()*0.0666888);
}

double NNfunction-ss_dRsR::synapse0x24b3f30() {
   return (neuron0x24a3c00()*0.00630233);
}

double NNfunction-ss_dRsR::synapse0x24b48c0() {
   return (neuron0x24a45d0()*0.679035);
}

double NNfunction-ss_dRsR::synapse0x24b4900() {
   return (neuron0x24a4fa0()*0.277752);
}

double NNfunction-ss_dRsR::synapse0x24b54a0() {
   return (neuron0x24a5970()*0.175495);
}

double NNfunction-ss_dRsR::synapse0x24b54e0() {
   return (neuron0x24a6340()*0.00461716);
}

double NNfunction-ss_dRsR::synapse0x24b5e70() {
   return (neuron0x249ee90()*0.689793);
}

double NNfunction-ss_dRsR::synapse0x24b5eb0() {
   return (neuron0x249f860()*0.412965);
}

double NNfunction-ss_dRsR::synapse0x24a6cf0() {
   return (neuron0x24a90d0()*0.391142);
}

double NNfunction-ss_dRsR::synapse0x24a6d30() {
   return (neuron0x24a9aa0()*0.346495);
}

double NNfunction-ss_dRsR::synapse0x24a76c0() {
   return (neuron0x24aa470()*0.154912);
}

double NNfunction-ss_dRsR::synapse0x24a7700() {
   return (neuron0x24aae40()*-0.186732);
}

double NNfunction-ss_dRsR::synapse0x24a8090() {
   return (neuron0x24ab810()*0.287087);
}

double NNfunction-ss_dRsR::synapse0x24a80d0() {
   return (neuron0x24ac1e0()*-0.0227734);
}

double NNfunction-ss_dRsR::synapse0x24ba5b0() {
   return (neuron0x24acbb0()*0.621424);
}

double NNfunction-ss_dRsR::synapse0x24ba5f0() {
   return (neuron0x24ad580()*-0.226773);
}

double NNfunction-ss_dRsR::synapse0x24baf80() {
   return (neuron0x24a3610()*0.404827);
}

double NNfunction-ss_dRsR::synapse0x24bafc0() {
   return (neuron0x24b0160()*0.164216);
}

double NNfunction-ss_dRsR::synapse0x24bb950() {
   return (neuron0x24b0b30()*-0.0646169);
}

double NNfunction-ss_dRsR::synapse0x24bb990() {
   return (neuron0x24b1500()*-0.223866);
}

double NNfunction-ss_dRsR::synapse0x24bc320() {
   return (neuron0x24b1ed0()*-0.00133739);
}

double NNfunction-ss_dRsR::synapse0x24bc360() {
   return (neuron0x24b28a0()*-0.297941);
}

double NNfunction-ss_dRsR::synapse0x2498210() {
   return (neuron0x24b3270()*0.2533);
}

double NNfunction-ss_dRsR::synapse0x2498250() {
   return (neuron0x24b3c40()*-0.187221);
}

double NNfunction-ss_dRsR::synapse0x24abac0() {
   return (neuron0x24b4610()*0.42468);
}

double NNfunction-ss_dRsR::synapse0x24abb00() {
   return (neuron0x24b51f0()*0.647983);
}

double NNfunction-ss_dRsR::synapse0x24bca40() {
   return (neuron0x24b5bc0()*0.573071);
}

double NNfunction-ss_dRsR::synapse0x24bca80() {
   return (neuron0x24a6a40()*0.651086);
}

double NNfunction-ss_dRsR::synapse0x24bcac0() {
   return (neuron0x24a7410()*0.0598026);
}

double NNfunction-ss_dRsR::synapse0x24bcb00() {
   return (neuron0x24a7de0()*0.176563);
}

double NNfunction-ss_dRsR::synapse0x24c39b0() {
   return (neuron0x24ba420()*0.326386);
}

double NNfunction-ss_dRsR::synapse0x24c39f0() {
   return (neuron0x24bacd0()*-0.0567606);
}

double NNfunction-ss_dRsR::synapse0x24c3a30() {
   return (neuron0x24bb6a0()*0.4131);
}

double NNfunction-ss_dRsR::synapse0x24c3a70() {
   return (neuron0x24bc070()*-0.218002);
}

double NNfunction-ss_dRsR::synapse0x24c3df0() {
   return (neuron0x2497ff0()*0.910106);
}

double NNfunction-ss_dRsR::synapse0x24c3e30() {
   return (neuron0x2498940()*-1.83478);
}

double NNfunction-ss_dRsR::synapse0x24c3e70() {
   return (neuron0x2499420()*-0.778561);
}

double NNfunction-ss_dRsR::synapse0x24c3eb0() {
   return (neuron0x2498ec0()*0.232846);
}

double NNfunction-ss_dRsR::synapse0x24c3ef0() {
   return (neuron0x249a200()*-0.288928);
}

double NNfunction-ss_dRsR::synapse0x24c3f30() {
   return (neuron0x249abd0()*-0.619043);
}

double NNfunction-ss_dRsR::synapse0x24c3f70() {
   return (neuron0x249b9a0()*-1.58275);
}

double NNfunction-ss_dRsR::synapse0x24c3fb0() {
   return (neuron0x249c370()*-1.67524);
}

double NNfunction-ss_dRsR::synapse0x24c3ff0() {
   return (neuron0x249cd40()*0.838727);
}

double NNfunction-ss_dRsR::synapse0x24c4030() {
   return (neuron0x249d820()*-1.52713);
}

double NNfunction-ss_dRsR::synapse0x24c4070() {
   return (neuron0x249e1f0()*-1.3955);
}

double NNfunction-ss_dRsR::synapse0x24c40b0() {
   return (neuron0x249b2d0()*0.369705);
}

double NNfunction-ss_dRsR::synapse0x24c40f0() {
   return (neuron0x249fda0()*0.263204);
}

double NNfunction-ss_dRsR::synapse0x24c4130() {
   return (neuron0x24a0770()*1.38913);
}

double NNfunction-ss_dRsR::synapse0x24c4170() {
   return (neuron0x24a1140()*-0.923596);
}

double NNfunction-ss_dRsR::synapse0x24c41b0() {
   return (neuron0x24a1b10()*1.69547);
}

double NNfunction-ss_dRsR::synapse0x24c3c40() {
   return (neuron0x24a3920()*-1.92666);
}

double NNfunction-ss_dRsR::synapse0x24c3c80() {
   return (neuron0x24a3c00()*-1.58771);
}

double NNfunction-ss_dRsR::synapse0x24c4300() {
   return (neuron0x24a45d0()*-0.904529);
}

double NNfunction-ss_dRsR::synapse0x24c4340() {
   return (neuron0x24a4fa0()*-0.133186);
}

double NNfunction-ss_dRsR::synapse0x24c4380() {
   return (neuron0x24a5970()*0.392243);
}

double NNfunction-ss_dRsR::synapse0x24c43c0() {
   return (neuron0x24a6340()*-1.15632);
}

double NNfunction-ss_dRsR::synapse0x24c4400() {
   return (neuron0x249ee90()*-1.14388);
}

double NNfunction-ss_dRsR::synapse0x24c4440() {
   return (neuron0x249f860()*-0.318607);
}

double NNfunction-ss_dRsR::synapse0x24c4480() {
   return (neuron0x24a90d0()*-1.82213);
}

double NNfunction-ss_dRsR::synapse0x24c44c0() {
   return (neuron0x24a9aa0()*0.261214);
}

double NNfunction-ss_dRsR::synapse0x24c4500() {
   return (neuron0x24aa470()*-2.24942);
}

double NNfunction-ss_dRsR::synapse0x24c4540() {
   return (neuron0x24aae40()*2.58471);
}

double NNfunction-ss_dRsR::synapse0x24c4580() {
   return (neuron0x24ab810()*-0.36539);
}

double NNfunction-ss_dRsR::synapse0x24c45c0() {
   return (neuron0x24ac1e0()*-2.2192);
}

double NNfunction-ss_dRsR::synapse0x24c4600() {
   return (neuron0x24acbb0()*2.32927);
}

double NNfunction-ss_dRsR::synapse0x24c4640() {
   return (neuron0x24ad580()*1.1404);
}

double NNfunction-ss_dRsR::synapse0x24c41f0() {
   return (neuron0x24a3610()*-0.488459);
}

double NNfunction-ss_dRsR::synapse0x24c4230() {
   return (neuron0x24b0160()*-1.5212);
}

double NNfunction-ss_dRsR::synapse0x24c4270() {
   return (neuron0x24b0b30()*1.07819);
}

double NNfunction-ss_dRsR::synapse0x24c42b0() {
   return (neuron0x24b1500()*-1.58407);
}

double NNfunction-ss_dRsR::synapse0x24c4890() {
   return (neuron0x24b1ed0()*0.222765);
}

double NNfunction-ss_dRsR::synapse0x24c48d0() {
   return (neuron0x24b28a0()*1.31769);
}

double NNfunction-ss_dRsR::synapse0x24c4910() {
   return (neuron0x24b3270()*-0.0665119);
}

double NNfunction-ss_dRsR::synapse0x24c4950() {
   return (neuron0x24b3c40()*2.07247);
}

double NNfunction-ss_dRsR::synapse0x24c4990() {
   return (neuron0x24b4610()*-0.966817);
}

double NNfunction-ss_dRsR::synapse0x24c49d0() {
   return (neuron0x24b51f0()*-2.85606);
}

double NNfunction-ss_dRsR::synapse0x24c4a10() {
   return (neuron0x24b5bc0()*-1.79909);
}

double NNfunction-ss_dRsR::synapse0x24c4a50() {
   return (neuron0x24a6a40()*-1.34931);
}

double NNfunction-ss_dRsR::synapse0x24c4a90() {
   return (neuron0x24a7410()*-2.68258);
}

double NNfunction-ss_dRsR::synapse0x24c4ad0() {
   return (neuron0x24a7de0()*-0.960374);
}

double NNfunction-ss_dRsR::synapse0x24c4b10() {
   return (neuron0x24ba420()*2.13357);
}

double NNfunction-ss_dRsR::synapse0x24c4b50() {
   return (neuron0x24bacd0()*-0.86176);
}

double NNfunction-ss_dRsR::synapse0x24c4b90() {
   return (neuron0x24bb6a0()*1.36933);
}

double NNfunction-ss_dRsR::synapse0x24c4bd0() {
   return (neuron0x24bc070()*4.45337);
}

double NNfunction-ss_dRsR::synapse0x24c4f50() {
   return (neuron0x2497ff0()*0.0161317);
}

double NNfunction-ss_dRsR::synapse0x24c4f90() {
   return (neuron0x2498940()*-0.455999);
}

double NNfunction-ss_dRsR::synapse0x24c4fd0() {
   return (neuron0x2499420()*0.00462048);
}

double NNfunction-ss_dRsR::synapse0x24c5010() {
   return (neuron0x2498ec0()*-0.403381);
}

double NNfunction-ss_dRsR::synapse0x24c5050() {
   return (neuron0x249a200()*-0.0278974);
}

double NNfunction-ss_dRsR::synapse0x24c5090() {
   return (neuron0x249abd0()*-0.0209585);
}

double NNfunction-ss_dRsR::synapse0x24c50d0() {
   return (neuron0x249b9a0()*0.0266163);
}

double NNfunction-ss_dRsR::synapse0x24c5110() {
   return (neuron0x249c370()*0.0624268);
}

double NNfunction-ss_dRsR::synapse0x24c5150() {
   return (neuron0x249cd40()*-0.110229);
}

double NNfunction-ss_dRsR::synapse0x24c5190() {
   return (neuron0x249d820()*-1.00862);
}

double NNfunction-ss_dRsR::synapse0x24c51d0() {
   return (neuron0x249e1f0()*-1.0421);
}

double NNfunction-ss_dRsR::synapse0x24c5210() {
   return (neuron0x249b2d0()*0.0609513);
}

double NNfunction-ss_dRsR::synapse0x24c5250() {
   return (neuron0x249fda0()*-2.802);
}

double NNfunction-ss_dRsR::synapse0x24c5290() {
   return (neuron0x24a0770()*0.0478683);
}

double NNfunction-ss_dRsR::synapse0x24c52d0() {
   return (neuron0x24a1140()*-0.0301081);
}

double NNfunction-ss_dRsR::synapse0x24c5310() {
   return (neuron0x24a1b10()*-0.0306398);
}

double NNfunction-ss_dRsR::synapse0x24c4da0() {
   return (neuron0x24a3920()*-0.0314426);
}

double NNfunction-ss_dRsR::synapse0x24c4de0() {
   return (neuron0x24a3c00()*0.0216121);
}

double NNfunction-ss_dRsR::synapse0x24c5460() {
   return (neuron0x24a45d0()*-0.786302);
}

double NNfunction-ss_dRsR::synapse0x24c54a0() {
   return (neuron0x24a4fa0()*-1.2256);
}

double NNfunction-ss_dRsR::synapse0x24c54e0() {
   return (neuron0x24a5970()*0.00256802);
}

double NNfunction-ss_dRsR::synapse0x24c5520() {
   return (neuron0x24a6340()*-0.0263427);
}

double NNfunction-ss_dRsR::synapse0x24c5560() {
   return (neuron0x249ee90()*-0.00557584);
}

double NNfunction-ss_dRsR::synapse0x24c55a0() {
   return (neuron0x249f860()*0.329258);
}

double NNfunction-ss_dRsR::synapse0x24c55e0() {
   return (neuron0x24a90d0()*0.0352692);
}

double NNfunction-ss_dRsR::synapse0x24c5620() {
   return (neuron0x24a9aa0()*-0.344936);
}

double NNfunction-ss_dRsR::synapse0x24c5660() {
   return (neuron0x24aa470()*-0.066931);
}

double NNfunction-ss_dRsR::synapse0x24c56a0() {
   return (neuron0x24aae40()*0.455802);
}

double NNfunction-ss_dRsR::synapse0x24c56e0() {
   return (neuron0x24ab810()*-0.10075);
}

double NNfunction-ss_dRsR::synapse0x24c5720() {
   return (neuron0x24ac1e0()*-2.314);
}

double NNfunction-ss_dRsR::synapse0x24c5760() {
   return (neuron0x24acbb0()*0.0193316);
}

double NNfunction-ss_dRsR::synapse0x24c57a0() {
   return (neuron0x24ad580()*-0.0462141);
}

double NNfunction-ss_dRsR::synapse0x24c5350() {
   return (neuron0x24a3610()*-0.0402055);
}

double NNfunction-ss_dRsR::synapse0x24c5390() {
   return (neuron0x24b0160()*-1.01572);
}

double NNfunction-ss_dRsR::synapse0x24c53d0() {
   return (neuron0x24b0b30()*0.0404056);
}

double NNfunction-ss_dRsR::synapse0x24c5410() {
   return (neuron0x24b1500()*-0.0177256);
}

double NNfunction-ss_dRsR::synapse0x24c59f0() {
   return (neuron0x24b1ed0()*-0.0594174);
}

double NNfunction-ss_dRsR::synapse0x24c5a30() {
   return (neuron0x24b28a0()*-0.0244613);
}

double NNfunction-ss_dRsR::synapse0x24c5a70() {
   return (neuron0x24b3270()*-0.00181759);
}

double NNfunction-ss_dRsR::synapse0x24c5ab0() {
   return (neuron0x24b3c40()*-0.103527);
}

double NNfunction-ss_dRsR::synapse0x24c5af0() {
   return (neuron0x24b4610()*-0.0904073);
}

double NNfunction-ss_dRsR::synapse0x24c5b30() {
   return (neuron0x24b51f0()*1.16405);
}

double NNfunction-ss_dRsR::synapse0x24c5b70() {
   return (neuron0x24b5bc0()*-2.05858);
}

double NNfunction-ss_dRsR::synapse0x24c5bb0() {
   return (neuron0x24a6a40()*-0.0979273);
}

double NNfunction-ss_dRsR::synapse0x24c5bf0() {
   return (neuron0x24a7410()*-1.1417);
}

double NNfunction-ss_dRsR::synapse0x24c5c30() {
   return (neuron0x24a7de0()*-0.100725);
}

double NNfunction-ss_dRsR::synapse0x24c5c70() {
   return (neuron0x24ba420()*-0.0392819);
}

double NNfunction-ss_dRsR::synapse0x24c5cb0() {
   return (neuron0x24bacd0()*-0.00827442);
}

double NNfunction-ss_dRsR::synapse0x24c5cf0() {
   return (neuron0x24bb6a0()*-0.0239499);
}

double NNfunction-ss_dRsR::synapse0x24c5d30() {
   return (neuron0x24bc070()*2.25714);
}

double NNfunction-ss_dRsR::synapse0x24c60b0() {
   return (neuron0x2497ff0()*-0.0125644);
}

double NNfunction-ss_dRsR::synapse0x24c60f0() {
   return (neuron0x2498940()*1.4015);
}

double NNfunction-ss_dRsR::synapse0x24c6130() {
   return (neuron0x2499420()*0.0444253);
}

double NNfunction-ss_dRsR::synapse0x24c6170() {
   return (neuron0x2498ec0()*1.11862);
}

double NNfunction-ss_dRsR::synapse0x24c61b0() {
   return (neuron0x249a200()*0.0192015);
}

double NNfunction-ss_dRsR::synapse0x24c61f0() {
   return (neuron0x249abd0()*0.0185387);
}

double NNfunction-ss_dRsR::synapse0x24c6230() {
   return (neuron0x249b9a0()*0.0106387);
}

double NNfunction-ss_dRsR::synapse0x24c6270() {
   return (neuron0x249c370()*0.0216639);
}

double NNfunction-ss_dRsR::synapse0x24c62b0() {
   return (neuron0x249cd40()*0.0323362);
}

double NNfunction-ss_dRsR::synapse0x24c62f0() {
   return (neuron0x249d820()*0.471991);
}

double NNfunction-ss_dRsR::synapse0x24c6330() {
   return (neuron0x249e1f0()*0.082376);
}

double NNfunction-ss_dRsR::synapse0x24c6370() {
   return (neuron0x249b2d0()*0.00302391);
}

double NNfunction-ss_dRsR::synapse0x24c63b0() {
   return (neuron0x249fda0()*1.04923);
}

double NNfunction-ss_dRsR::synapse0x24c63f0() {
   return (neuron0x24a0770()*0.00636729);
}

double NNfunction-ss_dRsR::synapse0x24c6430() {
   return (neuron0x24a1140()*0.00508628);
}

double NNfunction-ss_dRsR::synapse0x24c6470() {
   return (neuron0x24a1b10()*0.0120978);
}

double NNfunction-ss_dRsR::synapse0x24c5f00() {
   return (neuron0x24a3920()*-0.0171936);
}

double NNfunction-ss_dRsR::synapse0x24c5f40() {
   return (neuron0x24a3c00()*-0.00669099);
}

double NNfunction-ss_dRsR::synapse0x24c65c0() {
   return (neuron0x24a45d0()*-0.0868597);
}

double NNfunction-ss_dRsR::synapse0x24c6600() {
   return (neuron0x24a4fa0()*0.114472);
}

double NNfunction-ss_dRsR::synapse0x24c6640() {
   return (neuron0x24a5970()*-0.0076356);
}

double NNfunction-ss_dRsR::synapse0x24c6680() {
   return (neuron0x24a6340()*-0.000217734);
}

double NNfunction-ss_dRsR::synapse0x24c66c0() {
   return (neuron0x249ee90()*0.0198904);
}

double NNfunction-ss_dRsR::synapse0x24c6700() {
   return (neuron0x249f860()*-1.15697);
}

double NNfunction-ss_dRsR::synapse0x24c6740() {
   return (neuron0x24a90d0()*-0.00993788);
}

double NNfunction-ss_dRsR::synapse0x24c6780() {
   return (neuron0x24a9aa0()*0.515896);
}

double NNfunction-ss_dRsR::synapse0x24c67c0() {
   return (neuron0x24aa470()*1.2284);
}

double NNfunction-ss_dRsR::synapse0x24c6800() {
   return (neuron0x24aae40()*-0.0985163);
}

double NNfunction-ss_dRsR::synapse0x24c6840() {
   return (neuron0x24ab810()*-0.00632483);
}

double NNfunction-ss_dRsR::synapse0x24c6880() {
   return (neuron0x24ac1e0()*1.68874);
}

double NNfunction-ss_dRsR::synapse0x24c68c0() {
   return (neuron0x24acbb0()*0.00855882);
}

double NNfunction-ss_dRsR::synapse0x24c6900() {
   return (neuron0x24ad580()*-0.0168397);
}

double NNfunction-ss_dRsR::synapse0x24c64b0() {
   return (neuron0x24a3610()*0.0173103);
}

double NNfunction-ss_dRsR::synapse0x24c64f0() {
   return (neuron0x24b0160()*0.357607);
}

double NNfunction-ss_dRsR::synapse0x24c6530() {
   return (neuron0x24b0b30()*-0.0152787);
}

double NNfunction-ss_dRsR::synapse0x24c6570() {
   return (neuron0x24b1500()*0.0280715);
}

double NNfunction-ss_dRsR::synapse0x24c6b50() {
   return (neuron0x24b1ed0()*-0.0102015);
}

double NNfunction-ss_dRsR::synapse0x24c6b90() {
   return (neuron0x24b28a0()*-0.0147201);
}

double NNfunction-ss_dRsR::synapse0x24c6bd0() {
   return (neuron0x24b3270()*-0.030464);
}

double NNfunction-ss_dRsR::synapse0x24c6c10() {
   return (neuron0x24b3c40()*-0.0190866);
}

double NNfunction-ss_dRsR::synapse0x24c6c50() {
   return (neuron0x24b4610()*0.0898209);
}

double NNfunction-ss_dRsR::synapse0x24c6c90() {
   return (neuron0x24b51f0()*-0.292142);
}

double NNfunction-ss_dRsR::synapse0x24c6cd0() {
   return (neuron0x24b5bc0()*0.175565);
}

double NNfunction-ss_dRsR::synapse0x24c6d10() {
   return (neuron0x24a6a40()*0.00427588);
}

double NNfunction-ss_dRsR::synapse0x24c6d50() {
   return (neuron0x24a7410()*0.358029);
}

double NNfunction-ss_dRsR::synapse0x24c6d90() {
   return (neuron0x24a7de0()*0.00290832);
}

double NNfunction-ss_dRsR::synapse0x24c6dd0() {
   return (neuron0x24ba420()*0.000151733);
}

double NNfunction-ss_dRsR::synapse0x24c6e10() {
   return (neuron0x24bacd0()*0.0214019);
}

double NNfunction-ss_dRsR::synapse0x24c6e50() {
   return (neuron0x24bb6a0()*-0.00498354);
}

double NNfunction-ss_dRsR::synapse0x24c6e90() {
   return (neuron0x24bc070()*-0.115679);
}

double NNfunction-ss_dRsR::synapse0x24c70f0() {
   return (neuron0x24c3270()*-7.39959);
}

double NNfunction-ss_dRsR::synapse0x24c7130() {
   return (neuron0x24c3610()*3.29812);
}

double NNfunction-ss_dRsR::synapse0x24c7170() {
   return (neuron0x24c3ab0()*7.62682);
}

double NNfunction-ss_dRsR::synapse0x24c71b0() {
   return (neuron0x24c4c10()*6.11949);
}

double NNfunction-ss_dRsR::synapse0x24c71f0() {
   return (neuron0x24c5d70()*-5.10128);
}

