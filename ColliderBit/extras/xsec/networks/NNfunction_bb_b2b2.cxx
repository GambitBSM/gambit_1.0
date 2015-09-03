#include "NNfunction_bb_b2b2.h"
#include <cmath>

double NNfunction_bb_b2b2::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5754)/15.3543;
   input1 = (in1 - 34.5079)/923.536;
   input2 = (in2 - 495.744)/550.178;
   input3 = (in3 - 164.009)/738.152;
   input4 = (in4 - 845.963)/793.703;
   input5 = (in5 - 771.145)/797.064;
   input6 = (in6 - 778.332)/799.796;
   input7 = (in7 - 777.863)/785.95;
   input8 = (in8 - 779.713)/824.337;
   input9 = (in9 - 771.631)/812.755;
   input10 = (in10 - 791.077)/819.597;
   input11 = (in11 - 737.476)/720.293;
   input12 = (in12 - 739.347)/721.559;
   input13 = (in13 - 451.153)/297.422;
   input14 = (in14 - 727.279)/673.058;
   input15 = (in15 - 728.328)/673.206;
   input16 = (in16 - 523.025)/462.728;
   input17 = (in17 - 754.166)/742.873;
   input18 = (in18 - 754.441)/747.518;
   input19 = (in19 - 481.686)/325.375;
   input20 = (in20 - -144.917)/456.898;
   input21 = (in21 - -191.746)/1014.44;
   input22 = (in22 - -4.6164)/1030.1;
   input23 = (in23 - -69.1353)/523.123;
   switch(index) {
     case 0:
         return neuron0x34cb5a0();
     default:
         return 0.;
   }
}

double NNfunction_bb_b2b2::Value(int index, double* input) {
   input0 = (input[0] - 23.5754)/15.3543;
   input1 = (input[1] - 34.5079)/923.536;
   input2 = (input[2] - 495.744)/550.178;
   input3 = (input[3] - 164.009)/738.152;
   input4 = (input[4] - 845.963)/793.703;
   input5 = (input[5] - 771.145)/797.064;
   input6 = (input[6] - 778.332)/799.796;
   input7 = (input[7] - 777.863)/785.95;
   input8 = (input[8] - 779.713)/824.337;
   input9 = (input[9] - 771.631)/812.755;
   input10 = (input[10] - 791.077)/819.597;
   input11 = (input[11] - 737.476)/720.293;
   input12 = (input[12] - 739.347)/721.559;
   input13 = (input[13] - 451.153)/297.422;
   input14 = (input[14] - 727.279)/673.058;
   input15 = (input[15] - 728.328)/673.206;
   input16 = (input[16] - 523.025)/462.728;
   input17 = (input[17] - 754.166)/742.873;
   input18 = (input[18] - 754.441)/747.518;
   input19 = (input[19] - 481.686)/325.375;
   input20 = (input[20] - -144.917)/456.898;
   input21 = (input[21] - -191.746)/1014.44;
   input22 = (input[22] - -4.6164)/1030.1;
   input23 = (input[23] - -69.1353)/523.123;
   switch(index) {
     case 0:
         return neuron0x34cb5a0();
     default:
         return 0.;
   }
}

double NNfunction_bb_b2b2::neuron0x3497690() {
   return input0;
}

double NNfunction_bb_b2b2::neuron0x34979d0() {
   return input1;
}

double NNfunction_bb_b2b2::neuron0x3497d10() {
   return input2;
}

double NNfunction_bb_b2b2::neuron0x3498050() {
   return input3;
}

double NNfunction_bb_b2b2::neuron0x3498390() {
   return input4;
}

double NNfunction_bb_b2b2::neuron0x34986d0() {
   return input5;
}

double NNfunction_bb_b2b2::neuron0x3498a10() {
   return input6;
}

double NNfunction_bb_b2b2::neuron0x3498d50() {
   return input7;
}

double NNfunction_bb_b2b2::neuron0x3499090() {
   return input8;
}

double NNfunction_bb_b2b2::neuron0x34993d0() {
   return input9;
}

double NNfunction_bb_b2b2::neuron0x3499710() {
   return input10;
}

double NNfunction_bb_b2b2::neuron0x3499a50() {
   return input11;
}

double NNfunction_bb_b2b2::neuron0x3499d90() {
   return input12;
}

double NNfunction_bb_b2b2::neuron0x349a0d0() {
   return input13;
}

double NNfunction_bb_b2b2::neuron0x349a410() {
   return input14;
}

double NNfunction_bb_b2b2::neuron0x349a750() {
   return input15;
}

double NNfunction_bb_b2b2::neuron0x349aa90() {
   return input16;
}

double NNfunction_bb_b2b2::neuron0x349aff0() {
   return input17;
}

double NNfunction_bb_b2b2::neuron0x349b210() {
   return input18;
}

double NNfunction_bb_b2b2::neuron0x349b550() {
   return input19;
}

double NNfunction_bb_b2b2::neuron0x349b890() {
   return input20;
}

double NNfunction_bb_b2b2::neuron0x349bbd0() {
   return input21;
}

double NNfunction_bb_b2b2::neuron0x349bf10() {
   return input22;
}

double NNfunction_bb_b2b2::neuron0x349c250() {
   return input23;
}

double NNfunction_bb_b2b2::input0x349c6c0() {
   double input = 1.09069;
   input += synapse0x3497550();
   input += synapse0x3497590();
   input += synapse0x349c970();
   input += synapse0x349c9b0();
   input += synapse0x349c9f0();
   input += synapse0x349ca30();
   input += synapse0x349ca70();
   input += synapse0x349cab0();
   input += synapse0x349caf0();
   input += synapse0x349cb30();
   input += synapse0x349cb70();
   input += synapse0x349cbb0();
   input += synapse0x349cbf0();
   input += synapse0x349cc30();
   input += synapse0x349cc70();
   input += synapse0x349ccb0();
   input += synapse0x34974c0();
   input += synapse0x3497500();
   input += synapse0x3252a00();
   input += synapse0x3252a40();
   input += synapse0x349cf10();
   input += synapse0x349cf50();
   input += synapse0x349cf90();
   input += synapse0x349cfd0();
   return input;
}

double NNfunction_bb_b2b2::neuron0x349c6c0() {
   double input = input0x349c6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x349d010() {
   double input = 1.04938;
   input += synapse0x349d350();
   input += synapse0x349d390();
   input += synapse0x349d3d0();
   input += synapse0x349d410();
   input += synapse0x349d450();
   input += synapse0x349d490();
   input += synapse0x349d4d0();
   input += synapse0x349d510();
   input += synapse0x349d550();
   input += synapse0x349ce00();
   input += synapse0x349ce40();
   input += synapse0x349ce80();
   input += synapse0x349cec0();
   input += synapse0x349d7a0();
   input += synapse0x349d7e0();
   input += synapse0x349d820();
   input += synapse0x349d1a0();
   input += synapse0x349d1e0();
   input += synapse0x349d970();
   input += synapse0x349d9b0();
   input += synapse0x349d9f0();
   input += synapse0x349da30();
   input += synapse0x349da70();
   input += synapse0x349dab0();
   return input;
}

double NNfunction_bb_b2b2::neuron0x349d010() {
   double input = input0x349d010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x349daf0() {
   double input = -1.68729;
   input += synapse0x349de30();
   input += synapse0x349de70();
   input += synapse0x349deb0();
   input += synapse0x349def0();
   input += synapse0x349df30();
   input += synapse0x349df70();
   input += synapse0x349dfb0();
   input += synapse0x349dff0();
   input += synapse0x349e030();
   input += synapse0x349e070();
   input += synapse0x349e0b0();
   input += synapse0x349e0f0();
   input += synapse0x349e130();
   input += synapse0x349e170();
   input += synapse0x349e1b0();
   input += synapse0x349e1f0();
   input += synapse0x349dc80();
   input += synapse0x2631aa0();
   input += synapse0x349dcc0();
   input += synapse0x3252f10();
   input += synapse0x32607e0();
   input += synapse0x3260820();
   input += synapse0x3486720();
   input += synapse0x3486760();
   return input;
}

double NNfunction_bb_b2b2::neuron0x349daf0() {
   double input = input0x349daf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x349d590() {
   double input = -0.38077;
   input += synapse0x34867a0();
   input += synapse0x349d720();
   input += synapse0x349d760();
   input += synapse0x349e340();
   input += synapse0x349e380();
   input += synapse0x349e3c0();
   input += synapse0x349e400();
   input += synapse0x349e440();
   input += synapse0x349e480();
   input += synapse0x349e4c0();
   input += synapse0x349e500();
   input += synapse0x349e540();
   input += synapse0x349e580();
   input += synapse0x349e5c0();
   input += synapse0x349e600();
   input += synapse0x349e640();
   input += synapse0x34975d0();
   input += synapse0x3497610();
   input += synapse0x3497650();
   input += synapse0x349e790();
   input += synapse0x349e7d0();
   input += synapse0x349e810();
   input += synapse0x349e850();
   input += synapse0x349e890();
   return input;
}

double NNfunction_bb_b2b2::neuron0x349d590() {
   double input = input0x349d590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x349e8d0() {
   double input = 6.87238;
   input += synapse0x349ec10();
   input += synapse0x349ec50();
   input += synapse0x349ec90();
   input += synapse0x349ecd0();
   input += synapse0x349ed10();
   input += synapse0x349ed50();
   input += synapse0x349ed90();
   input += synapse0x349edd0();
   input += synapse0x349ee10();
   input += synapse0x349ee50();
   input += synapse0x349ee90();
   input += synapse0x349eed0();
   input += synapse0x349ef10();
   input += synapse0x349ef50();
   input += synapse0x349ef90();
   input += synapse0x349efd0();
   input += synapse0x349ea60();
   input += synapse0x349eaa0();
   input += synapse0x349f120();
   input += synapse0x349f160();
   input += synapse0x349f1a0();
   input += synapse0x349f1e0();
   input += synapse0x349f220();
   input += synapse0x349f260();
   return input;
}

double NNfunction_bb_b2b2::neuron0x349e8d0() {
   double input = input0x349e8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x349f2a0() {
   double input = -0.259017;
   input += synapse0x349f5e0();
   input += synapse0x349f620();
   input += synapse0x349f660();
   input += synapse0x349f6a0();
   input += synapse0x349f6e0();
   input += synapse0x349f720();
   input += synapse0x349f760();
   input += synapse0x349f7a0();
   input += synapse0x349f7e0();
   input += synapse0x3260b30();
   input += synapse0x3260b70();
   input += synapse0x3260bb0();
   input += synapse0x3260bf0();
   input += synapse0x3260c30();
   input += synapse0x3260c70();
   input += synapse0x3260cb0();
   input += synapse0x349f430();
   input += synapse0x349f470();
   input += synapse0x3260e00();
   input += synapse0x3260e40();
   input += synapse0x3260e80();
   input += synapse0x3260ec0();
   input += synapse0x3260f00();
   input += synapse0x34a0030();
   return input;
}

double NNfunction_bb_b2b2::neuron0x349f2a0() {
   double input = input0x349f2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34a0070() {
   double input = 0.491238;
   input += synapse0x34a03b0();
   input += synapse0x34a03f0();
   input += synapse0x34a0430();
   input += synapse0x34a0470();
   input += synapse0x34a04b0();
   input += synapse0x34a04f0();
   input += synapse0x34a0530();
   input += synapse0x34a0570();
   input += synapse0x34a05b0();
   input += synapse0x34a05f0();
   input += synapse0x34a0630();
   input += synapse0x34a0670();
   input += synapse0x34a06b0();
   input += synapse0x34a06f0();
   input += synapse0x34a0730();
   input += synapse0x34a0770();
   input += synapse0x34a0200();
   input += synapse0x34a0240();
   input += synapse0x34a08c0();
   input += synapse0x34a0900();
   input += synapse0x34a0940();
   input += synapse0x34a0980();
   input += synapse0x34a09c0();
   input += synapse0x34a0a00();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34a0070() {
   double input = input0x34a0070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34a0a40() {
   double input = 0.407318;
   input += synapse0x34a0d80();
   input += synapse0x34a0dc0();
   input += synapse0x34a0e00();
   input += synapse0x34a0e40();
   input += synapse0x34a0e80();
   input += synapse0x34a0ec0();
   input += synapse0x34a0f00();
   input += synapse0x34a0f40();
   input += synapse0x34a0f80();
   input += synapse0x34a0fc0();
   input += synapse0x34a1000();
   input += synapse0x34a1040();
   input += synapse0x34a1080();
   input += synapse0x34a10c0();
   input += synapse0x34a1100();
   input += synapse0x34a1140();
   input += synapse0x34a0bd0();
   input += synapse0x34a0c10();
   input += synapse0x34a1290();
   input += synapse0x34a12d0();
   input += synapse0x34a1310();
   input += synapse0x34a1350();
   input += synapse0x34a1390();
   input += synapse0x34a13d0();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34a0a40() {
   double input = input0x34a0a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34a1410() {
   double input = 0.662709;
   input += synapse0x349aee0();
   input += synapse0x349af20();
   input += synapse0x349af60();
   input += synapse0x349afa0();
   input += synapse0x34a1960();
   input += synapse0x34a19a0();
   input += synapse0x34a19e0();
   input += synapse0x34a1a20();
   input += synapse0x34a1a60();
   input += synapse0x34a1aa0();
   input += synapse0x34a1ae0();
   input += synapse0x34a1b20();
   input += synapse0x34a1b60();
   input += synapse0x34a1ba0();
   input += synapse0x34a1be0();
   input += synapse0x34a1c20();
   input += synapse0x34a15a0();
   input += synapse0x34a15e0();
   input += synapse0x34a1d70();
   input += synapse0x34a1db0();
   input += synapse0x34a1df0();
   input += synapse0x34a1e30();
   input += synapse0x34a1e70();
   input += synapse0x34a1eb0();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34a1410() {
   double input = input0x34a1410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34a1ef0() {
   double input = 1.53964;
   input += synapse0x34a2230();
   input += synapse0x34a2270();
   input += synapse0x34a22b0();
   input += synapse0x34a22f0();
   input += synapse0x34a2330();
   input += synapse0x34a2370();
   input += synapse0x34a23b0();
   input += synapse0x34a23f0();
   input += synapse0x34a2430();
   input += synapse0x34a2470();
   input += synapse0x34a24b0();
   input += synapse0x34a24f0();
   input += synapse0x34a2530();
   input += synapse0x34a2570();
   input += synapse0x34a25b0();
   input += synapse0x34a25f0();
   input += synapse0x34a2080();
   input += synapse0x34a20c0();
   input += synapse0x34a2740();
   input += synapse0x34a2780();
   input += synapse0x34a27c0();
   input += synapse0x34a2800();
   input += synapse0x34a2840();
   input += synapse0x34a2880();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34a1ef0() {
   double input = input0x34a1ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34a28c0() {
   double input = 0.577743;
   input += synapse0x34a2c00();
   input += synapse0x34a2c40();
   input += synapse0x34a2c80();
   input += synapse0x34a2cc0();
   input += synapse0x34a2d00();
   input += synapse0x34a2d40();
   input += synapse0x34a2d80();
   input += synapse0x34a2dc0();
   input += synapse0x34a2e00();
   input += synapse0x34a2e40();
   input += synapse0x34a2e80();
   input += synapse0x34a2ec0();
   input += synapse0x34a2f00();
   input += synapse0x34a2f40();
   input += synapse0x34a2f80();
   input += synapse0x34a2fc0();
   input += synapse0x34a2a50();
   input += synapse0x34a2a90();
   input += synapse0x349f820();
   input += synapse0x349f860();
   input += synapse0x349f8a0();
   input += synapse0x349f8e0();
   input += synapse0x349f920();
   input += synapse0x349f960();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34a28c0() {
   double input = input0x34a28c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x349f9a0() {
   double input = -0.0780451;
   input += synapse0x349fce0();
   input += synapse0x349fd20();
   input += synapse0x349fd60();
   input += synapse0x349fda0();
   input += synapse0x349fde0();
   input += synapse0x349fe20();
   input += synapse0x349fe60();
   input += synapse0x349fea0();
   input += synapse0x349fee0();
   input += synapse0x349ff20();
   input += synapse0x349ff60();
   input += synapse0x349ffa0();
   input += synapse0x349ffe0();
   input += synapse0x34a4120();
   input += synapse0x34a4160();
   input += synapse0x34a41a0();
   input += synapse0x349fb30();
   input += synapse0x349fb70();
   input += synapse0x34a42f0();
   input += synapse0x34a4330();
   input += synapse0x34a4370();
   input += synapse0x34a43b0();
   input += synapse0x34a43f0();
   input += synapse0x34a4430();
   return input;
}

double NNfunction_bb_b2b2::neuron0x349f9a0() {
   double input = input0x349f9a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34a4470() {
   double input = 1.90317;
   input += synapse0x34a47b0();
   input += synapse0x34a47f0();
   input += synapse0x34a4830();
   input += synapse0x34a4870();
   input += synapse0x34a48b0();
   input += synapse0x34a48f0();
   input += synapse0x34a4930();
   input += synapse0x34a4970();
   input += synapse0x34a49b0();
   input += synapse0x34a49f0();
   input += synapse0x34a4a30();
   input += synapse0x34a4a70();
   input += synapse0x34a4ab0();
   input += synapse0x34a4af0();
   input += synapse0x34a4b30();
   input += synapse0x34a4b70();
   input += synapse0x34a4600();
   input += synapse0x34a4640();
   input += synapse0x34a4cc0();
   input += synapse0x34a4d00();
   input += synapse0x34a4d40();
   input += synapse0x34a4d80();
   input += synapse0x34a4dc0();
   input += synapse0x34a4e00();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34a4470() {
   double input = input0x34a4470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34a4e40() {
   double input = -1.19322;
   input += synapse0x34a5180();
   input += synapse0x34a51c0();
   input += synapse0x34a5200();
   input += synapse0x34a5240();
   input += synapse0x34a5280();
   input += synapse0x34a52c0();
   input += synapse0x34a5300();
   input += synapse0x34a5340();
   input += synapse0x34a5380();
   input += synapse0x34a53c0();
   input += synapse0x34a5400();
   input += synapse0x34a5440();
   input += synapse0x34a5480();
   input += synapse0x34a54c0();
   input += synapse0x34a5500();
   input += synapse0x34a5540();
   input += synapse0x34a4fd0();
   input += synapse0x34a5010();
   input += synapse0x34a5690();
   input += synapse0x34a56d0();
   input += synapse0x34a5710();
   input += synapse0x34a5750();
   input += synapse0x34a5790();
   input += synapse0x34a57d0();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34a4e40() {
   double input = input0x34a4e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34a5810() {
   double input = -0.849193;
   input += synapse0x34a5b50();
   input += synapse0x34a5b90();
   input += synapse0x34a5bd0();
   input += synapse0x34a5c10();
   input += synapse0x34a5c50();
   input += synapse0x34a5c90();
   input += synapse0x34a5cd0();
   input += synapse0x34a5d10();
   input += synapse0x34a5d50();
   input += synapse0x34a5d90();
   input += synapse0x34a5dd0();
   input += synapse0x34a5e10();
   input += synapse0x34a5e50();
   input += synapse0x34a5e90();
   input += synapse0x34a5ed0();
   input += synapse0x34a5f10();
   input += synapse0x34a59a0();
   input += synapse0x34a59e0();
   input += synapse0x34a6060();
   input += synapse0x34a60a0();
   input += synapse0x34a60e0();
   input += synapse0x34a6120();
   input += synapse0x34a6160();
   input += synapse0x34a61a0();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34a5810() {
   double input = input0x34a5810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34a61e0() {
   double input = 1.99216;
   input += synapse0x34a6520();
   input += synapse0x34978b0();
   input += synapse0x34978f0();
   input += synapse0x3497bf0();
   input += synapse0x3497c30();
   input += synapse0x3497f30();
   input += synapse0x3497f70();
   input += synapse0x3498270();
   input += synapse0x34982b0();
   input += synapse0x34985b0();
   input += synapse0x34985f0();
   input += synapse0x34988f0();
   input += synapse0x3498930();
   input += synapse0x3498c30();
   input += synapse0x3498c70();
   input += synapse0x3498f70();
   input += synapse0x3498fb0();
   input += synapse0x34992b0();
   input += synapse0x34992f0();
   input += synapse0x34995f0();
   input += synapse0x3499630();
   input += synapse0x3499930();
   input += synapse0x3499970();
   input += synapse0x3499c70();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34a61e0() {
   double input = input0x34a61e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34a7ff0() {
   double input = 0.73975;
   input += synapse0x3499cb0();
   input += synapse0x349a970();
   input += synapse0x349a9b0();
   input += synapse0x34a6370();
   input += synapse0x34a63b0();
   input += synapse0x349acb0();
   input += synapse0x349acf0();
   input += synapse0x32528e0();
   input += synapse0x3252920();
   input += synapse0x349b430();
   input += synapse0x349b470();
   input += synapse0x349b770();
   input += synapse0x349b7b0();
   input += synapse0x349bab0();
   input += synapse0x349baf0();
   input += synapse0x349bdf0();
   input += synapse0x349be30();
   input += synapse0x349c130();
   input += synapse0x349c170();
   input += synapse0x349c470();
   input += synapse0x349c4b0();
   input += synapse0x3499fb0();
   input += synapse0x3499ff0();
   input += synapse0x34a8290();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34a7ff0() {
   double input = input0x34a7ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34a82d0() {
   double input = 0.573744;
   input += synapse0x34a8610();
   input += synapse0x34a8650();
   input += synapse0x34a8690();
   input += synapse0x34a86d0();
   input += synapse0x34a8710();
   input += synapse0x34a8750();
   input += synapse0x34a8790();
   input += synapse0x34a87d0();
   input += synapse0x34a8810();
   input += synapse0x34a8850();
   input += synapse0x34a8890();
   input += synapse0x34a88d0();
   input += synapse0x34a8910();
   input += synapse0x34a8950();
   input += synapse0x34a8990();
   input += synapse0x34a89d0();
   input += synapse0x34a8460();
   input += synapse0x34a84a0();
   input += synapse0x34a8b20();
   input += synapse0x34a8b60();
   input += synapse0x34a8ba0();
   input += synapse0x34a8be0();
   input += synapse0x34a8c20();
   input += synapse0x34a8c60();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34a82d0() {
   double input = input0x34a82d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34a8ca0() {
   double input = -1.18848;
   input += synapse0x34a8fe0();
   input += synapse0x34a9020();
   input += synapse0x34a9060();
   input += synapse0x34a90a0();
   input += synapse0x34a90e0();
   input += synapse0x34a9120();
   input += synapse0x34a9160();
   input += synapse0x34a91a0();
   input += synapse0x34a91e0();
   input += synapse0x34a9220();
   input += synapse0x34a9260();
   input += synapse0x34a92a0();
   input += synapse0x34a92e0();
   input += synapse0x34a9320();
   input += synapse0x34a9360();
   input += synapse0x34a93a0();
   input += synapse0x34a8e30();
   input += synapse0x34a8e70();
   input += synapse0x34a94f0();
   input += synapse0x34a9530();
   input += synapse0x34a9570();
   input += synapse0x34a95b0();
   input += synapse0x34a95f0();
   input += synapse0x34a9630();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34a8ca0() {
   double input = input0x34a8ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34a9670() {
   double input = 0.470412;
   input += synapse0x34a99b0();
   input += synapse0x34a99f0();
   input += synapse0x34a9a30();
   input += synapse0x34a9a70();
   input += synapse0x34a9ab0();
   input += synapse0x34a9af0();
   input += synapse0x34a9b30();
   input += synapse0x34a9b70();
   input += synapse0x34a9bb0();
   input += synapse0x34a9bf0();
   input += synapse0x34a9c30();
   input += synapse0x34a9c70();
   input += synapse0x34a9cb0();
   input += synapse0x34a9cf0();
   input += synapse0x34a9d30();
   input += synapse0x34a9d70();
   input += synapse0x34a9800();
   input += synapse0x34a9840();
   input += synapse0x34a9ec0();
   input += synapse0x34a9f00();
   input += synapse0x34a9f40();
   input += synapse0x34a9f80();
   input += synapse0x34a9fc0();
   input += synapse0x34aa000();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34a9670() {
   double input = input0x34a9670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34aa040() {
   double input = 0.282716;
   input += synapse0x34aa380();
   input += synapse0x34aa3c0();
   input += synapse0x34aa400();
   input += synapse0x34aa440();
   input += synapse0x34aa480();
   input += synapse0x34aa4c0();
   input += synapse0x34aa500();
   input += synapse0x34aa540();
   input += synapse0x34aa580();
   input += synapse0x34aa5c0();
   input += synapse0x34aa600();
   input += synapse0x34aa640();
   input += synapse0x34aa680();
   input += synapse0x34aa6c0();
   input += synapse0x34aa700();
   input += synapse0x34aa740();
   input += synapse0x34aa1d0();
   input += synapse0x34aa210();
   input += synapse0x34aa890();
   input += synapse0x34aa8d0();
   input += synapse0x34aa910();
   input += synapse0x34aa950();
   input += synapse0x34aa990();
   input += synapse0x34aa9d0();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34aa040() {
   double input = input0x34aa040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34aaa10() {
   double input = -0.0775435;
   input += synapse0x34aad50();
   input += synapse0x34aad90();
   input += synapse0x34aadd0();
   input += synapse0x34aae10();
   input += synapse0x34aae50();
   input += synapse0x34aae90();
   input += synapse0x34aaed0();
   input += synapse0x34aaf10();
   input += synapse0x34aaf50();
   input += synapse0x34a3110();
   input += synapse0x34a3150();
   input += synapse0x34a3190();
   input += synapse0x34a31d0();
   input += synapse0x34a3210();
   input += synapse0x34a3250();
   input += synapse0x34a3290();
   input += synapse0x34aaba0();
   input += synapse0x34aabe0();
   input += synapse0x34a33e0();
   input += synapse0x34a3420();
   input += synapse0x34a3460();
   input += synapse0x34a34a0();
   input += synapse0x34a34e0();
   input += synapse0x34a3520();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34aaa10() {
   double input = input0x34aaa10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34a3560() {
   double input = -6.05748;
   input += synapse0x34a38a0();
   input += synapse0x34a38e0();
   input += synapse0x34a3920();
   input += synapse0x34a3960();
   input += synapse0x34a39a0();
   input += synapse0x34a39e0();
   input += synapse0x34a3a20();
   input += synapse0x34a3a60();
   input += synapse0x34a3aa0();
   input += synapse0x34a3ae0();
   input += synapse0x34a3b20();
   input += synapse0x34a3b60();
   input += synapse0x34a3ba0();
   input += synapse0x34a3be0();
   input += synapse0x34a3c20();
   input += synapse0x34a3c60();
   input += synapse0x34a36f0();
   input += synapse0x34a3730();
   input += synapse0x34a3db0();
   input += synapse0x34a3df0();
   input += synapse0x34a3e30();
   input += synapse0x34a3e70();
   input += synapse0x34a3eb0();
   input += synapse0x34a3ef0();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34a3560() {
   double input = input0x34a3560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34a3f30() {
   double input = 1.16652;
   input += synapse0x34a40c0();
   input += synapse0x34ad150();
   input += synapse0x34ad190();
   input += synapse0x34ad1d0();
   input += synapse0x34ad210();
   input += synapse0x34ad250();
   input += synapse0x34ad290();
   input += synapse0x34ad2d0();
   input += synapse0x34ad310();
   input += synapse0x34ad350();
   input += synapse0x34ad390();
   input += synapse0x34ad3d0();
   input += synapse0x34ad410();
   input += synapse0x34ad450();
   input += synapse0x34ad490();
   input += synapse0x34ad4d0();
   input += synapse0x34acfa0();
   input += synapse0x34acfe0();
   input += synapse0x34ad620();
   input += synapse0x34ad660();
   input += synapse0x34ad6a0();
   input += synapse0x34ad6e0();
   input += synapse0x34ad720();
   input += synapse0x34ad760();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34a3f30() {
   double input = input0x34a3f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34ad7a0() {
   double input = -0.535876;
   input += synapse0x34adae0();
   input += synapse0x34adb20();
   input += synapse0x34adb60();
   input += synapse0x34adba0();
   input += synapse0x34adbe0();
   input += synapse0x34adc20();
   input += synapse0x34adc60();
   input += synapse0x34adca0();
   input += synapse0x34adce0();
   input += synapse0x34add20();
   input += synapse0x34add60();
   input += synapse0x34adda0();
   input += synapse0x34adde0();
   input += synapse0x34ade20();
   input += synapse0x34ade60();
   input += synapse0x34adea0();
   input += synapse0x34ad930();
   input += synapse0x34ad970();
   input += synapse0x34adff0();
   input += synapse0x34ae030();
   input += synapse0x34ae070();
   input += synapse0x34ae0b0();
   input += synapse0x34ae0f0();
   input += synapse0x34ae130();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34ad7a0() {
   double input = input0x34ad7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34ae170() {
   double input = -0.897141;
   input += synapse0x34ae4b0();
   input += synapse0x34ae4f0();
   input += synapse0x34ae530();
   input += synapse0x34ae570();
   input += synapse0x34ae5b0();
   input += synapse0x34ae5f0();
   input += synapse0x34ae630();
   input += synapse0x34ae670();
   input += synapse0x34ae6b0();
   input += synapse0x34ae6f0();
   input += synapse0x34ae730();
   input += synapse0x34ae770();
   input += synapse0x34ae7b0();
   input += synapse0x34ae7f0();
   input += synapse0x34ae830();
   input += synapse0x34ae870();
   input += synapse0x34ae300();
   input += synapse0x34ae340();
   input += synapse0x34ae9c0();
   input += synapse0x34aea00();
   input += synapse0x34aea40();
   input += synapse0x34aea80();
   input += synapse0x34aeac0();
   input += synapse0x34aeb00();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34ae170() {
   double input = input0x34ae170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34aeb40() {
   double input = -2.167;
   input += synapse0x34aee80();
   input += synapse0x34aeec0();
   input += synapse0x34aef00();
   input += synapse0x34aef40();
   input += synapse0x34aef80();
   input += synapse0x34aefc0();
   input += synapse0x34af000();
   input += synapse0x34af040();
   input += synapse0x34af080();
   input += synapse0x34af0c0();
   input += synapse0x34af100();
   input += synapse0x34af140();
   input += synapse0x34af180();
   input += synapse0x34af1c0();
   input += synapse0x34af200();
   input += synapse0x34af240();
   input += synapse0x34aecd0();
   input += synapse0x34aed10();
   input += synapse0x34af390();
   input += synapse0x34af3d0();
   input += synapse0x34af410();
   input += synapse0x34af450();
   input += synapse0x34af490();
   input += synapse0x34af4d0();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34aeb40() {
   double input = input0x34aeb40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34af510() {
   double input = 1.91887;
   input += synapse0x34af850();
   input += synapse0x34af890();
   input += synapse0x34af8d0();
   input += synapse0x34af910();
   input += synapse0x34af950();
   input += synapse0x34af990();
   input += synapse0x34af9d0();
   input += synapse0x34afa10();
   input += synapse0x34afa50();
   input += synapse0x34afa90();
   input += synapse0x34afad0();
   input += synapse0x34afb10();
   input += synapse0x34afb50();
   input += synapse0x34afb90();
   input += synapse0x34afbd0();
   input += synapse0x34afc10();
   input += synapse0x34af6a0();
   input += synapse0x34af6e0();
   input += synapse0x34afd60();
   input += synapse0x34afda0();
   input += synapse0x34afde0();
   input += synapse0x34afe20();
   input += synapse0x34afe60();
   input += synapse0x34afea0();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34af510() {
   double input = input0x34af510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34afee0() {
   double input = -0.562116;
   input += synapse0x34b0220();
   input += synapse0x34b0260();
   input += synapse0x34b02a0();
   input += synapse0x34b02e0();
   input += synapse0x34b0320();
   input += synapse0x34b0360();
   input += synapse0x34b03a0();
   input += synapse0x34b03e0();
   input += synapse0x34b0420();
   input += synapse0x34b0460();
   input += synapse0x34b04a0();
   input += synapse0x34b04e0();
   input += synapse0x34b0520();
   input += synapse0x34b0560();
   input += synapse0x34b05a0();
   input += synapse0x34b05e0();
   input += synapse0x34b0070();
   input += synapse0x34b00b0();
   input += synapse0x34b0730();
   input += synapse0x34b0770();
   input += synapse0x34b07b0();
   input += synapse0x34b07f0();
   input += synapse0x34b0830();
   input += synapse0x34b0870();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34afee0() {
   double input = input0x34afee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34b08b0() {
   double input = 1.84619;
   input += synapse0x34b0bf0();
   input += synapse0x34b0c30();
   input += synapse0x34b0c70();
   input += synapse0x34b0cb0();
   input += synapse0x34b0cf0();
   input += synapse0x34b0d30();
   input += synapse0x34b0d70();
   input += synapse0x34b0db0();
   input += synapse0x34b0df0();
   input += synapse0x34b0e30();
   input += synapse0x34b0e70();
   input += synapse0x34b0eb0();
   input += synapse0x34b0ef0();
   input += synapse0x34b0f30();
   input += synapse0x34b0f70();
   input += synapse0x34b0fb0();
   input += synapse0x34b0a40();
   input += synapse0x34b0a80();
   input += synapse0x34b1100();
   input += synapse0x34b1140();
   input += synapse0x34b1180();
   input += synapse0x34b11c0();
   input += synapse0x34b1200();
   input += synapse0x34b1240();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34b08b0() {
   double input = input0x34b08b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34b1280() {
   double input = 1.59569;
   input += synapse0x34b15c0();
   input += synapse0x34b1600();
   input += synapse0x34b1640();
   input += synapse0x34b1680();
   input += synapse0x34b16c0();
   input += synapse0x34b1700();
   input += synapse0x34b1740();
   input += synapse0x34b1780();
   input += synapse0x34b17c0();
   input += synapse0x34b1800();
   input += synapse0x34b1840();
   input += synapse0x34b1880();
   input += synapse0x34b18c0();
   input += synapse0x34b1900();
   input += synapse0x34b1940();
   input += synapse0x34b1980();
   input += synapse0x34b1410();
   input += synapse0x34b1450();
   input += synapse0x34b1ad0();
   input += synapse0x34b1b10();
   input += synapse0x34b1b50();
   input += synapse0x34b1b90();
   input += synapse0x34b1bd0();
   input += synapse0x34b1c10();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34b1280() {
   double input = input0x34b1280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34b1c50() {
   double input = -1.55286;
   input += synapse0x34b1f90();
   input += synapse0x34a6560();
   input += synapse0x34a65a0();
   input += synapse0x34a65e0();
   input += synapse0x34a6830();
   input += synapse0x34a6870();
   input += synapse0x34a68b0();
   input += synapse0x34a6b00();
   input += synapse0x34a6b40();
   input += synapse0x34a6d90();
   input += synapse0x34a6dd0();
   input += synapse0x34a6e10();
   input += synapse0x34a7060();
   input += synapse0x34a70a0();
   input += synapse0x34a72f0();
   input += synapse0x34a7330();
   input += synapse0x34b1de0();
   input += synapse0x34b1e20();
   input += synapse0x34a7480();
   input += synapse0x34a7990();
   input += synapse0x34a79d0();
   input += synapse0x34a7a10();
   input += synapse0x34a7c60();
   input += synapse0x34a7ca0();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34b1c50() {
   double input = input0x34b1c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34a7ce0() {
   double input = -0.86391;
   input += synapse0x34a7550();
   input += synapse0x34a7590();
   input += synapse0x34a75d0();
   input += synapse0x34a7610();
   input += synapse0x34a7f90();
   input += synapse0x34b42e0();
   input += synapse0x34b4320();
   input += synapse0x34b4360();
   input += synapse0x34b43a0();
   input += synapse0x34b43e0();
   input += synapse0x34b4420();
   input += synapse0x34b4460();
   input += synapse0x34b44a0();
   input += synapse0x34b44e0();
   input += synapse0x34b4520();
   input += synapse0x34b4560();
   input += synapse0x34a7e70();
   input += synapse0x34a7eb0();
   input += synapse0x34b46b0();
   input += synapse0x34b46f0();
   input += synapse0x34b4730();
   input += synapse0x34b4770();
   input += synapse0x34b47b0();
   input += synapse0x34b47f0();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34a7ce0() {
   double input = input0x34a7ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34b4830() {
   double input = -1.38633;
   input += synapse0x34b4b70();
   input += synapse0x34b4bb0();
   input += synapse0x34b4bf0();
   input += synapse0x34b4c30();
   input += synapse0x34b4c70();
   input += synapse0x34b4cb0();
   input += synapse0x34b4cf0();
   input += synapse0x34b4d30();
   input += synapse0x34b4d70();
   input += synapse0x34b4db0();
   input += synapse0x34b4df0();
   input += synapse0x34b4e30();
   input += synapse0x34b4e70();
   input += synapse0x34b4eb0();
   input += synapse0x34b4ef0();
   input += synapse0x34b4f30();
   input += synapse0x34b49c0();
   input += synapse0x34b4a00();
   input += synapse0x34b5080();
   input += synapse0x34b50c0();
   input += synapse0x34b5100();
   input += synapse0x34b5140();
   input += synapse0x34b5180();
   input += synapse0x34b51c0();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34b4830() {
   double input = input0x34b4830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34b5200() {
   double input = -0.783962;
   input += synapse0x34b5540();
   input += synapse0x34b5580();
   input += synapse0x34b55c0();
   input += synapse0x34b5600();
   input += synapse0x34b5640();
   input += synapse0x34b5680();
   input += synapse0x34b56c0();
   input += synapse0x34b5700();
   input += synapse0x34b5740();
   input += synapse0x34b5780();
   input += synapse0x34b57c0();
   input += synapse0x34b5800();
   input += synapse0x34b5840();
   input += synapse0x34b5880();
   input += synapse0x34b58c0();
   input += synapse0x34b5900();
   input += synapse0x34b5390();
   input += synapse0x34b53d0();
   input += synapse0x34b5a50();
   input += synapse0x34b5a90();
   input += synapse0x34b5ad0();
   input += synapse0x34b5b10();
   input += synapse0x34b5b50();
   input += synapse0x34b5b90();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34b5200() {
   double input = input0x34b5200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34b5bd0() {
   double input = -2.21472;
   input += synapse0x34b5f10();
   input += synapse0x34b5f50();
   input += synapse0x34b5f90();
   input += synapse0x34b5fd0();
   input += synapse0x34b6010();
   input += synapse0x34b6050();
   input += synapse0x34b6090();
   input += synapse0x34b60d0();
   input += synapse0x34b6110();
   input += synapse0x34b6150();
   input += synapse0x34b6190();
   input += synapse0x34b61d0();
   input += synapse0x34b6210();
   input += synapse0x34b6250();
   input += synapse0x34b6290();
   input += synapse0x34b62d0();
   input += synapse0x34b5d60();
   input += synapse0x34b5da0();
   input += synapse0x34b6420();
   input += synapse0x34b6460();
   input += synapse0x34b64a0();
   input += synapse0x34b64e0();
   input += synapse0x34b6520();
   input += synapse0x34b6560();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34b5bd0() {
   double input = input0x34b5bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34b65a0() {
   double input = -0.434962;
   input += synapse0x34b68e0();
   input += synapse0x34b6920();
   input += synapse0x34b6960();
   input += synapse0x34b69a0();
   input += synapse0x34b69e0();
   input += synapse0x34b6a20();
   input += synapse0x34b6a60();
   input += synapse0x34b6aa0();
   input += synapse0x34b6ae0();
   input += synapse0x34b6b20();
   input += synapse0x34b6b60();
   input += synapse0x34b6ba0();
   input += synapse0x34b6be0();
   input += synapse0x34b6c20();
   input += synapse0x34b6c60();
   input += synapse0x34b6ca0();
   input += synapse0x34b6730();
   input += synapse0x34b6770();
   input += synapse0x34b6df0();
   input += synapse0x34b6e30();
   input += synapse0x34b6e70();
   input += synapse0x34b6eb0();
   input += synapse0x34b6ef0();
   input += synapse0x34b6f30();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34b65a0() {
   double input = input0x34b65a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34b6f70() {
   double input = 0.647777;
   input += synapse0x34b72b0();
   input += synapse0x34b72f0();
   input += synapse0x34b7330();
   input += synapse0x34b7370();
   input += synapse0x34b73b0();
   input += synapse0x34b73f0();
   input += synapse0x34b7430();
   input += synapse0x34b7470();
   input += synapse0x34b74b0();
   input += synapse0x34b74f0();
   input += synapse0x34b7530();
   input += synapse0x34b7570();
   input += synapse0x34b75b0();
   input += synapse0x34b75f0();
   input += synapse0x34b7630();
   input += synapse0x34b7670();
   input += synapse0x34b7100();
   input += synapse0x34b7140();
   input += synapse0x34b77c0();
   input += synapse0x34b7800();
   input += synapse0x34b7840();
   input += synapse0x34b7880();
   input += synapse0x34b78c0();
   input += synapse0x34b7900();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34b6f70() {
   double input = input0x34b6f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34b7940() {
   double input = 0.986947;
   input += synapse0x34b7c80();
   input += synapse0x34b7cc0();
   input += synapse0x34b7d00();
   input += synapse0x34b7d40();
   input += synapse0x34b7d80();
   input += synapse0x34b7dc0();
   input += synapse0x34b7e00();
   input += synapse0x34b7e40();
   input += synapse0x34b7e80();
   input += synapse0x34b7ec0();
   input += synapse0x34b7f00();
   input += synapse0x34b7f40();
   input += synapse0x34b7f80();
   input += synapse0x34b7fc0();
   input += synapse0x34b8000();
   input += synapse0x34b8040();
   input += synapse0x34b7ad0();
   input += synapse0x34b7b10();
   input += synapse0x34b8190();
   input += synapse0x34b81d0();
   input += synapse0x34b8210();
   input += synapse0x34b8250();
   input += synapse0x34b8290();
   input += synapse0x34b82d0();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34b7940() {
   double input = input0x34b7940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34b8310() {
   double input = 0.531072;
   input += synapse0x34b8650();
   input += synapse0x34b8690();
   input += synapse0x34b86d0();
   input += synapse0x34b8710();
   input += synapse0x34b8750();
   input += synapse0x34b8790();
   input += synapse0x34b87d0();
   input += synapse0x34b8810();
   input += synapse0x34b8850();
   input += synapse0x34b8890();
   input += synapse0x34b88d0();
   input += synapse0x34b8910();
   input += synapse0x34b8950();
   input += synapse0x34b8990();
   input += synapse0x34b89d0();
   input += synapse0x34b8a10();
   input += synapse0x34b84a0();
   input += synapse0x34b84e0();
   input += synapse0x34b8b60();
   input += synapse0x34b8ba0();
   input += synapse0x34b8be0();
   input += synapse0x34b8c20();
   input += synapse0x34b8c60();
   input += synapse0x34b8ca0();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34b8310() {
   double input = input0x34b8310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34b8ce0() {
   double input = -0.15624;
   input += synapse0x34a1750();
   input += synapse0x34a1790();
   input += synapse0x34a17d0();
   input += synapse0x34a1810();
   input += synapse0x34a1850();
   input += synapse0x34a1890();
   input += synapse0x34a18d0();
   input += synapse0x34a1910();
   input += synapse0x34b9430();
   input += synapse0x34b9470();
   input += synapse0x34b94b0();
   input += synapse0x34b94f0();
   input += synapse0x34b9530();
   input += synapse0x34b9570();
   input += synapse0x34b95b0();
   input += synapse0x34b95f0();
   input += synapse0x34b8e70();
   input += synapse0x34b8eb0();
   input += synapse0x34b9740();
   input += synapse0x34b9780();
   input += synapse0x34b97c0();
   input += synapse0x34b9800();
   input += synapse0x34b9840();
   input += synapse0x34b9880();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34b8ce0() {
   double input = input0x34b8ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34b98c0() {
   double input = -1.60646;
   input += synapse0x34b9c00();
   input += synapse0x34b9c40();
   input += synapse0x34b9c80();
   input += synapse0x34b9cc0();
   input += synapse0x34b9d00();
   input += synapse0x34b9d40();
   input += synapse0x34b9d80();
   input += synapse0x34b9dc0();
   input += synapse0x34b9e00();
   input += synapse0x34b9e40();
   input += synapse0x34b9e80();
   input += synapse0x34b9ec0();
   input += synapse0x34b9f00();
   input += synapse0x34b9f40();
   input += synapse0x34b9f80();
   input += synapse0x34b9fc0();
   input += synapse0x34b9a50();
   input += synapse0x34b9a90();
   input += synapse0x34ba110();
   input += synapse0x34ba150();
   input += synapse0x34ba190();
   input += synapse0x34ba1d0();
   input += synapse0x34ba210();
   input += synapse0x34ba250();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34b98c0() {
   double input = input0x34b98c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34ba290() {
   double input = 0.21138;
   input += synapse0x34ba5d0();
   input += synapse0x34ba610();
   input += synapse0x34ba650();
   input += synapse0x34ba690();
   input += synapse0x34ba6d0();
   input += synapse0x34ba710();
   input += synapse0x34ba750();
   input += synapse0x34ba790();
   input += synapse0x34ba7d0();
   input += synapse0x34ba810();
   input += synapse0x34ba850();
   input += synapse0x34ba890();
   input += synapse0x34ba8d0();
   input += synapse0x34ba910();
   input += synapse0x34ba950();
   input += synapse0x34ba990();
   input += synapse0x34ba420();
   input += synapse0x34ba460();
   input += synapse0x34aaf90();
   input += synapse0x34aafd0();
   input += synapse0x34ab010();
   input += synapse0x34ab050();
   input += synapse0x34ab090();
   input += synapse0x34ab0d0();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34ba290() {
   double input = input0x34ba290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34ab110() {
   double input = 1.06583;
   input += synapse0x34ab450();
   input += synapse0x34ab490();
   input += synapse0x34ab4d0();
   input += synapse0x34ab510();
   input += synapse0x34ab550();
   input += synapse0x34ab590();
   input += synapse0x34ab5d0();
   input += synapse0x34ab610();
   input += synapse0x34ab650();
   input += synapse0x34ab690();
   input += synapse0x34ab6d0();
   input += synapse0x34ab710();
   input += synapse0x34ab750();
   input += synapse0x34ab790();
   input += synapse0x34ab7d0();
   input += synapse0x34ab810();
   input += synapse0x34ab2a0();
   input += synapse0x34ab2e0();
   input += synapse0x34ab960();
   input += synapse0x34ab9a0();
   input += synapse0x34ab9e0();
   input += synapse0x34aba20();
   input += synapse0x34aba60();
   input += synapse0x34abaa0();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34ab110() {
   double input = input0x34ab110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34abae0() {
   double input = 1.38967;
   input += synapse0x34abe20();
   input += synapse0x34abe60();
   input += synapse0x34abea0();
   input += synapse0x34abee0();
   input += synapse0x34abf20();
   input += synapse0x34abf60();
   input += synapse0x34abfa0();
   input += synapse0x34abfe0();
   input += synapse0x34ac020();
   input += synapse0x34ac060();
   input += synapse0x34ac0a0();
   input += synapse0x34ac0e0();
   input += synapse0x34ac120();
   input += synapse0x34ac160();
   input += synapse0x34ac1a0();
   input += synapse0x34ac1e0();
   input += synapse0x34abc70();
   input += synapse0x34abcb0();
   input += synapse0x34ac330();
   input += synapse0x34ac370();
   input += synapse0x34ac3b0();
   input += synapse0x34ac3f0();
   input += synapse0x34ac430();
   input += synapse0x34ac470();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34abae0() {
   double input = input0x34abae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34ac4b0() {
   double input = 0.325701;
   input += synapse0x34ac7f0();
   input += synapse0x34ac830();
   input += synapse0x34ac870();
   input += synapse0x34ac8b0();
   input += synapse0x34ac8f0();
   input += synapse0x34ac930();
   input += synapse0x34ac970();
   input += synapse0x34ac9b0();
   input += synapse0x34ac9f0();
   input += synapse0x34aca30();
   input += synapse0x34aca70();
   input += synapse0x34acab0();
   input += synapse0x34acaf0();
   input += synapse0x34acb30();
   input += synapse0x34acb70();
   input += synapse0x34acbb0();
   input += synapse0x34ac640();
   input += synapse0x34ac680();
   input += synapse0x34acd00();
   input += synapse0x34acd40();
   input += synapse0x34acd80();
   input += synapse0x34acdc0();
   input += synapse0x34ace00();
   input += synapse0x34ace40();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34ac4b0() {
   double input = input0x34ac4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34beaf0() {
   double input = 0.71816;
   input += synapse0x34bed10();
   input += synapse0x34bed50();
   input += synapse0x34bed90();
   input += synapse0x34bedd0();
   input += synapse0x34bee10();
   input += synapse0x34bee50();
   input += synapse0x34bee90();
   input += synapse0x34beed0();
   input += synapse0x34bef10();
   input += synapse0x34bef50();
   input += synapse0x34bef90();
   input += synapse0x34befd0();
   input += synapse0x34bf010();
   input += synapse0x34bf050();
   input += synapse0x34bf090();
   input += synapse0x34bf0d0();
   input += synapse0x34ace80();
   input += synapse0x34acec0();
   input += synapse0x34bf220();
   input += synapse0x34bf260();
   input += synapse0x34bf2a0();
   input += synapse0x34bf2e0();
   input += synapse0x34bf320();
   input += synapse0x34bf360();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34beaf0() {
   double input = input0x34beaf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34bf3a0() {
   double input = 0.417631;
   input += synapse0x34bf6e0();
   input += synapse0x34bf720();
   input += synapse0x34bf760();
   input += synapse0x34bf7a0();
   input += synapse0x34bf7e0();
   input += synapse0x34bf820();
   input += synapse0x34bf860();
   input += synapse0x34bf8a0();
   input += synapse0x34bf8e0();
   input += synapse0x34bf920();
   input += synapse0x34bf960();
   input += synapse0x34bf9a0();
   input += synapse0x34bf9e0();
   input += synapse0x34bfa20();
   input += synapse0x34bfa60();
   input += synapse0x34bfaa0();
   input += synapse0x34bf530();
   input += synapse0x34bf570();
   input += synapse0x34bfbf0();
   input += synapse0x34bfc30();
   input += synapse0x34bfc70();
   input += synapse0x34bfcb0();
   input += synapse0x34bfcf0();
   input += synapse0x34bfd30();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34bf3a0() {
   double input = input0x34bf3a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34bfd70() {
   double input = 1.03067;
   input += synapse0x34c00b0();
   input += synapse0x34c00f0();
   input += synapse0x34c0130();
   input += synapse0x34c0170();
   input += synapse0x34c01b0();
   input += synapse0x34c01f0();
   input += synapse0x34c0230();
   input += synapse0x34c0270();
   input += synapse0x34c02b0();
   input += synapse0x34c02f0();
   input += synapse0x34c0330();
   input += synapse0x34c0370();
   input += synapse0x34c03b0();
   input += synapse0x34c03f0();
   input += synapse0x34c0430();
   input += synapse0x34c0470();
   input += synapse0x34bff00();
   input += synapse0x34bff40();
   input += synapse0x34c05c0();
   input += synapse0x34c0600();
   input += synapse0x34c0640();
   input += synapse0x34c0680();
   input += synapse0x34c06c0();
   input += synapse0x34c0700();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34bfd70() {
   double input = input0x34bfd70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34c0740() {
   double input = -3.69993;
   input += synapse0x34c0a80();
   input += synapse0x34c0ac0();
   input += synapse0x34c0b00();
   input += synapse0x34c0b40();
   input += synapse0x34c0b80();
   input += synapse0x34c0bc0();
   input += synapse0x34c0c00();
   input += synapse0x34c0c40();
   input += synapse0x34c0c80();
   input += synapse0x34c0cc0();
   input += synapse0x34c0d00();
   input += synapse0x34c0d40();
   input += synapse0x34c0d80();
   input += synapse0x34c0dc0();
   input += synapse0x34c0e00();
   input += synapse0x34c0e40();
   input += synapse0x34c08d0();
   input += synapse0x34c0910();
   input += synapse0x34c0f90();
   input += synapse0x34c0fd0();
   input += synapse0x34c1010();
   input += synapse0x34c1050();
   input += synapse0x34c1090();
   input += synapse0x34c10d0();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34c0740() {
   double input = input0x34c0740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34c7940() {
   double input = 0.965631;
   input += synapse0x3260fd0();
   input += synapse0x3261010();
   input += synapse0x349eb80();
   input += synapse0x349ebc0();
   input += synapse0x349f550();
   input += synapse0x349f590();
   input += synapse0x34a0320();
   input += synapse0x34a0360();
   input += synapse0x34a0cf0();
   input += synapse0x34a0d30();
   input += synapse0x34a16c0();
   input += synapse0x34a1700();
   input += synapse0x34a21a0();
   input += synapse0x34a21e0();
   input += synapse0x34a2b70();
   input += synapse0x34a2bb0();
   input += synapse0x349fc50();
   input += synapse0x349fc90();
   input += synapse0x34a4720();
   input += synapse0x34a4760();
   input += synapse0x34a50f0();
   input += synapse0x34a5130();
   input += synapse0x34a5ac0();
   input += synapse0x34a5b00();
   input += synapse0x34a6490();
   input += synapse0x34a64d0();
   input += synapse0x349a630();
   input += synapse0x349a670();
   input += synapse0x34a8580();
   input += synapse0x34a85c0();
   input += synapse0x34a8f50();
   input += synapse0x34a8f90();
   input += synapse0x34a9920();
   input += synapse0x34a9960();
   input += synapse0x34aa2f0();
   input += synapse0x34aa330();
   input += synapse0x34aacc0();
   input += synapse0x34aad00();
   input += synapse0x34a3810();
   input += synapse0x34a3850();
   input += synapse0x34ad0c0();
   input += synapse0x34ad100();
   input += synapse0x34ada50();
   input += synapse0x34ada90();
   input += synapse0x34ae420();
   input += synapse0x34ae460();
   input += synapse0x34aedf0();
   input += synapse0x34aee30();
   input += synapse0x34af7c0();
   input += synapse0x34af800();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34c7940() {
   double input = input0x34c7940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34c7ce0() {
   double input = -1.30185;
   input += synapse0x34b1f00();
   input += synapse0x34b1f40();
   input += synapse0x34a74c0();
   input += synapse0x34a7500();
   input += synapse0x34b4ae0();
   input += synapse0x34b4b20();
   input += synapse0x34b54b0();
   input += synapse0x34b54f0();
   input += synapse0x34b5e80();
   input += synapse0x34b5ec0();
   input += synapse0x34b6850();
   input += synapse0x34b6890();
   input += synapse0x34b7220();
   input += synapse0x34b7260();
   input += synapse0x34b7bf0();
   input += synapse0x34b7c30();
   input += synapse0x34b85c0();
   input += synapse0x34b8600();
   input += synapse0x34b8f90();
   input += synapse0x34b8fd0();
   input += synapse0x34b9b70();
   input += synapse0x34b9bb0();
   input += synapse0x34ba540();
   input += synapse0x34ba580();
   input += synapse0x34ab3c0();
   input += synapse0x34ab400();
   input += synapse0x34abd90();
   input += synapse0x34abdd0();
   input += synapse0x34ac760();
   input += synapse0x34ac7a0();
   input += synapse0x34bec80();
   input += synapse0x34becc0();
   input += synapse0x34bf650();
   input += synapse0x34bf690();
   input += synapse0x34c0020();
   input += synapse0x34c0060();
   input += synapse0x34c09f0();
   input += synapse0x34c0a30();
   input += synapse0x349c8e0();
   input += synapse0x349c920();
   input += synapse0x34b0190();
   input += synapse0x34b01d0();
   input += synapse0x34c1110();
   input += synapse0x34c1150();
   input += synapse0x34c1190();
   input += synapse0x34c11d0();
   input += synapse0x34c8080();
   input += synapse0x34c80c0();
   input += synapse0x34c8100();
   input += synapse0x34c8140();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34c7ce0() {
   double input = input0x34c7ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34c8180() {
   double input = -0.256816;
   input += synapse0x34c84c0();
   input += synapse0x34c8500();
   input += synapse0x34c8540();
   input += synapse0x34c8580();
   input += synapse0x34c85c0();
   input += synapse0x34c8600();
   input += synapse0x34c8640();
   input += synapse0x34c8680();
   input += synapse0x34c86c0();
   input += synapse0x34c8700();
   input += synapse0x34c8740();
   input += synapse0x34c8780();
   input += synapse0x34c87c0();
   input += synapse0x34c8800();
   input += synapse0x34c8840();
   input += synapse0x34c8880();
   input += synapse0x34c8310();
   input += synapse0x34c8350();
   input += synapse0x34c89d0();
   input += synapse0x34c8a10();
   input += synapse0x34c8a50();
   input += synapse0x34c8a90();
   input += synapse0x34c8ad0();
   input += synapse0x34c8b10();
   input += synapse0x34c8b50();
   input += synapse0x34c8b90();
   input += synapse0x34c8bd0();
   input += synapse0x34c8c10();
   input += synapse0x34c8c50();
   input += synapse0x34c8c90();
   input += synapse0x34c8cd0();
   input += synapse0x34c8d10();
   input += synapse0x34c88c0();
   input += synapse0x34c8900();
   input += synapse0x34c8940();
   input += synapse0x34c8980();
   input += synapse0x34c8f60();
   input += synapse0x34c8fa0();
   input += synapse0x34c8fe0();
   input += synapse0x34c9020();
   input += synapse0x34c9060();
   input += synapse0x34c90a0();
   input += synapse0x34c90e0();
   input += synapse0x34c9120();
   input += synapse0x34c9160();
   input += synapse0x34c91a0();
   input += synapse0x34c91e0();
   input += synapse0x34c9220();
   input += synapse0x34c9260();
   input += synapse0x34c92a0();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34c8180() {
   double input = input0x34c8180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34c92e0() {
   double input = 2.35809;
   input += synapse0x34c9620();
   input += synapse0x34c9660();
   input += synapse0x34c96a0();
   input += synapse0x34c96e0();
   input += synapse0x34c9720();
   input += synapse0x34c9760();
   input += synapse0x34c97a0();
   input += synapse0x34c97e0();
   input += synapse0x34c9820();
   input += synapse0x34c9860();
   input += synapse0x34c98a0();
   input += synapse0x34c98e0();
   input += synapse0x34c9920();
   input += synapse0x34c9960();
   input += synapse0x34c99a0();
   input += synapse0x34c99e0();
   input += synapse0x34c9470();
   input += synapse0x34c94b0();
   input += synapse0x34c9b30();
   input += synapse0x34c9b70();
   input += synapse0x34c9bb0();
   input += synapse0x34c9bf0();
   input += synapse0x34c9c30();
   input += synapse0x34c9c70();
   input += synapse0x34c9cb0();
   input += synapse0x34c9cf0();
   input += synapse0x34c9d30();
   input += synapse0x34c9d70();
   input += synapse0x34c9db0();
   input += synapse0x34c9df0();
   input += synapse0x34c9e30();
   input += synapse0x34c9e70();
   input += synapse0x34c9a20();
   input += synapse0x34c9a60();
   input += synapse0x34c9aa0();
   input += synapse0x34c9ae0();
   input += synapse0x34ca0c0();
   input += synapse0x34ca100();
   input += synapse0x34ca140();
   input += synapse0x34ca180();
   input += synapse0x34ca1c0();
   input += synapse0x34ca200();
   input += synapse0x34ca240();
   input += synapse0x34ca280();
   input += synapse0x34ca2c0();
   input += synapse0x34ca300();
   input += synapse0x34ca340();
   input += synapse0x34ca380();
   input += synapse0x34ca3c0();
   input += synapse0x34ca400();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34c92e0() {
   double input = input0x34c92e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34ca440() {
   double input = -0.726389;
   input += synapse0x34ca780();
   input += synapse0x34ca7c0();
   input += synapse0x34ca800();
   input += synapse0x34ca840();
   input += synapse0x34ca880();
   input += synapse0x34ca8c0();
   input += synapse0x34ca900();
   input += synapse0x34ca940();
   input += synapse0x34ca980();
   input += synapse0x34ca9c0();
   input += synapse0x34caa00();
   input += synapse0x34caa40();
   input += synapse0x34caa80();
   input += synapse0x34caac0();
   input += synapse0x34cab00();
   input += synapse0x34cab40();
   input += synapse0x34ca5d0();
   input += synapse0x34ca610();
   input += synapse0x34cac90();
   input += synapse0x34cacd0();
   input += synapse0x34cad10();
   input += synapse0x34cad50();
   input += synapse0x34cad90();
   input += synapse0x34cadd0();
   input += synapse0x34cae10();
   input += synapse0x34cae50();
   input += synapse0x34cae90();
   input += synapse0x34caed0();
   input += synapse0x34caf10();
   input += synapse0x34caf50();
   input += synapse0x34caf90();
   input += synapse0x34cafd0();
   input += synapse0x34cab80();
   input += synapse0x34cabc0();
   input += synapse0x34cac00();
   input += synapse0x34cac40();
   input += synapse0x34cb220();
   input += synapse0x34cb260();
   input += synapse0x34cb2a0();
   input += synapse0x34cb2e0();
   input += synapse0x34cb320();
   input += synapse0x34cb360();
   input += synapse0x34cb3a0();
   input += synapse0x34cb3e0();
   input += synapse0x34cb420();
   input += synapse0x34cb460();
   input += synapse0x34cb4a0();
   input += synapse0x34cb4e0();
   input += synapse0x34cb520();
   input += synapse0x34cb560();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34ca440() {
   double input = input0x34ca440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b2b2::input0x34cb5a0() {
   double input = 8.03415;
   input += synapse0x34cb7c0();
   input += synapse0x34cb800();
   input += synapse0x34cb840();
   input += synapse0x34cb880();
   input += synapse0x34cb8c0();
   return input;
}

double NNfunction_bb_b2b2::neuron0x34cb5a0() {
   double input = input0x34cb5a0();
   return (input * 1)+0;
}

double NNfunction_bb_b2b2::synapse0x3497550() {
   return (neuron0x3497690()*-0.126125);
}

double NNfunction_bb_b2b2::synapse0x3497590() {
   return (neuron0x34979d0()*-0.00346694);
}

double NNfunction_bb_b2b2::synapse0x349c970() {
   return (neuron0x3497d10()*0.0697277);
}

double NNfunction_bb_b2b2::synapse0x349c9b0() {
   return (neuron0x3498050()*0.00451609);
}

double NNfunction_bb_b2b2::synapse0x349c9f0() {
   return (neuron0x3498390()*0.0103037);
}

double NNfunction_bb_b2b2::synapse0x349ca30() {
   return (neuron0x34986d0()*0.010696);
}

double NNfunction_bb_b2b2::synapse0x349ca70() {
   return (neuron0x3498a10()*-0.034182);
}

double NNfunction_bb_b2b2::synapse0x349cab0() {
   return (neuron0x3498d50()*-0.00663551);
}

double NNfunction_bb_b2b2::synapse0x349caf0() {
   return (neuron0x3499090()*0.00637399);
}

double NNfunction_bb_b2b2::synapse0x349cb30() {
   return (neuron0x34993d0()*0.00159847);
}

double NNfunction_bb_b2b2::synapse0x349cb70() {
   return (neuron0x3499710()*-0.00551314);
}

double NNfunction_bb_b2b2::synapse0x349cbb0() {
   return (neuron0x3499a50()*-0.012273);
}

double NNfunction_bb_b2b2::synapse0x349cbf0() {
   return (neuron0x3499d90()*0.0103588);
}

double NNfunction_bb_b2b2::synapse0x349cc30() {
   return (neuron0x349a0d0()*-3.98563);
}

double NNfunction_bb_b2b2::synapse0x349cc70() {
   return (neuron0x349a410()*-0.00579764);
}

double NNfunction_bb_b2b2::synapse0x349ccb0() {
   return (neuron0x349a750()*0.0140421);
}

double NNfunction_bb_b2b2::synapse0x34974c0() {
   return (neuron0x349aa90()*-0.0578397);
}

double NNfunction_bb_b2b2::synapse0x3497500() {
   return (neuron0x349aff0()*-0.0105595);
}

double NNfunction_bb_b2b2::synapse0x3252a00() {
   return (neuron0x349b210()*-0.00176963);
}

double NNfunction_bb_b2b2::synapse0x3252a40() {
   return (neuron0x349b550()*4.95468);
}

double NNfunction_bb_b2b2::synapse0x349cf10() {
   return (neuron0x349b890()*-0.000220317);
}

double NNfunction_bb_b2b2::synapse0x349cf50() {
   return (neuron0x349bbd0()*-0.0223101);
}

double NNfunction_bb_b2b2::synapse0x349cf90() {
   return (neuron0x349bf10()*0.00236915);
}

double NNfunction_bb_b2b2::synapse0x349cfd0() {
   return (neuron0x349c250()*0.173284);
}

double NNfunction_bb_b2b2::synapse0x349d350() {
   return (neuron0x3497690()*-0.767463);
}

double NNfunction_bb_b2b2::synapse0x349d390() {
   return (neuron0x34979d0()*0.00119279);
}

double NNfunction_bb_b2b2::synapse0x349d3d0() {
   return (neuron0x3497d10()*0.0113162);
}

double NNfunction_bb_b2b2::synapse0x349d410() {
   return (neuron0x3498050()*-0.0635234);
}

double NNfunction_bb_b2b2::synapse0x349d450() {
   return (neuron0x3498390()*0.664935);
}

double NNfunction_bb_b2b2::synapse0x349d490() {
   return (neuron0x34986d0()*-0.00940577);
}

double NNfunction_bb_b2b2::synapse0x349d4d0() {
   return (neuron0x3498a10()*-0.0100697);
}

double NNfunction_bb_b2b2::synapse0x349d510() {
   return (neuron0x3498d50()*0.00693657);
}

double NNfunction_bb_b2b2::synapse0x349d550() {
   return (neuron0x3499090()*0.0547649);
}

double NNfunction_bb_b2b2::synapse0x349ce00() {
   return (neuron0x34993d0()*-0.0221644);
}

double NNfunction_bb_b2b2::synapse0x349ce40() {
   return (neuron0x3499710()*-0.0172561);
}

double NNfunction_bb_b2b2::synapse0x349ce80() {
   return (neuron0x3499a50()*-0.059385);
}

double NNfunction_bb_b2b2::synapse0x349cec0() {
   return (neuron0x3499d90()*0.00625747);
}

double NNfunction_bb_b2b2::synapse0x349d7a0() {
   return (neuron0x349a0d0()*0.246905);
}

double NNfunction_bb_b2b2::synapse0x349d7e0() {
   return (neuron0x349a410()*0.00878055);
}

double NNfunction_bb_b2b2::synapse0x349d820() {
   return (neuron0x349a750()*0.000640203);
}

double NNfunction_bb_b2b2::synapse0x349d1a0() {
   return (neuron0x349aa90()*-0.0173414);
}

double NNfunction_bb_b2b2::synapse0x349d1e0() {
   return (neuron0x349aff0()*0.0235507);
}

double NNfunction_bb_b2b2::synapse0x349d970() {
   return (neuron0x349b210()*-0.0267593);
}

double NNfunction_bb_b2b2::synapse0x349d9b0() {
   return (neuron0x349b550()*-0.046256);
}

double NNfunction_bb_b2b2::synapse0x349d9f0() {
   return (neuron0x349b890()*0.00681063);
}

double NNfunction_bb_b2b2::synapse0x349da30() {
   return (neuron0x349bbd0()*-0.970453);
}

double NNfunction_bb_b2b2::synapse0x349da70() {
   return (neuron0x349bf10()*-0.00814099);
}

double NNfunction_bb_b2b2::synapse0x349dab0() {
   return (neuron0x349c250()*-0.128839);
}

double NNfunction_bb_b2b2::synapse0x349de30() {
   return (neuron0x3497690()*-0.0543199);
}

double NNfunction_bb_b2b2::synapse0x349de70() {
   return (neuron0x34979d0()*-0.00724923);
}

double NNfunction_bb_b2b2::synapse0x349deb0() {
   return (neuron0x3497d10()*-0.0740977);
}

double NNfunction_bb_b2b2::synapse0x349def0() {
   return (neuron0x3498050()*0.0847262);
}

double NNfunction_bb_b2b2::synapse0x349df30() {
   return (neuron0x3498390()*-0.079718);
}

double NNfunction_bb_b2b2::synapse0x349df70() {
   return (neuron0x34986d0()*0.00933164);
}

double NNfunction_bb_b2b2::synapse0x349dfb0() {
   return (neuron0x3498a10()*-0.024887);
}

double NNfunction_bb_b2b2::synapse0x349dff0() {
   return (neuron0x3498d50()*-0.00250615);
}

double NNfunction_bb_b2b2::synapse0x349e030() {
   return (neuron0x3499090()*-0.0171123);
}

double NNfunction_bb_b2b2::synapse0x349e070() {
   return (neuron0x34993d0()*-0.0311061);
}

double NNfunction_bb_b2b2::synapse0x349e0b0() {
   return (neuron0x3499710()*0.0132409);
}

double NNfunction_bb_b2b2::synapse0x349e0f0() {
   return (neuron0x3499a50()*0.0481512);
}

double NNfunction_bb_b2b2::synapse0x349e130() {
   return (neuron0x3499d90()*0.0466028);
}

double NNfunction_bb_b2b2::synapse0x349e170() {
   return (neuron0x349a0d0()*-0.509754);
}

double NNfunction_bb_b2b2::synapse0x349e1b0() {
   return (neuron0x349a410()*0.0144995);
}

double NNfunction_bb_b2b2::synapse0x349e1f0() {
   return (neuron0x349a750()*0.00413885);
}

double NNfunction_bb_b2b2::synapse0x349dc80() {
   return (neuron0x349aa90()*0.406477);
}

double NNfunction_bb_b2b2::synapse0x2631aa0() {
   return (neuron0x349aff0()*0.0327062);
}

double NNfunction_bb_b2b2::synapse0x349dcc0() {
   return (neuron0x349b210()*0.0243325);
}

double NNfunction_bb_b2b2::synapse0x3252f10() {
   return (neuron0x349b550()*0.549076);
}

double NNfunction_bb_b2b2::synapse0x32607e0() {
   return (neuron0x349b890()*-0.0202762);
}

double NNfunction_bb_b2b2::synapse0x3260820() {
   return (neuron0x349bbd0()*0.0313404);
}

double NNfunction_bb_b2b2::synapse0x3486720() {
   return (neuron0x349bf10()*-0.00792296);
}

double NNfunction_bb_b2b2::synapse0x3486760() {
   return (neuron0x349c250()*-0.0369445);
}

double NNfunction_bb_b2b2::synapse0x34867a0() {
   return (neuron0x3497690()*-0.0302062);
}

double NNfunction_bb_b2b2::synapse0x349d720() {
   return (neuron0x34979d0()*-0.00720463);
}

double NNfunction_bb_b2b2::synapse0x349d760() {
   return (neuron0x3497d10()*0.964236);
}

double NNfunction_bb_b2b2::synapse0x349e340() {
   return (neuron0x3498050()*-0.00875403);
}

double NNfunction_bb_b2b2::synapse0x349e380() {
   return (neuron0x3498390()*-0.0431313);
}

double NNfunction_bb_b2b2::synapse0x349e3c0() {
   return (neuron0x34986d0()*-0.0178008);
}

double NNfunction_bb_b2b2::synapse0x349e400() {
   return (neuron0x3498a10()*-0.0017739);
}

double NNfunction_bb_b2b2::synapse0x349e440() {
   return (neuron0x3498d50()*-0.0162455);
}

double NNfunction_bb_b2b2::synapse0x349e480() {
   return (neuron0x3499090()*0.0154079);
}

double NNfunction_bb_b2b2::synapse0x349e4c0() {
   return (neuron0x34993d0()*-0.0164146);
}

double NNfunction_bb_b2b2::synapse0x349e500() {
   return (neuron0x3499710()*0.0176442);
}

double NNfunction_bb_b2b2::synapse0x349e540() {
   return (neuron0x3499a50()*-0.0335117);
}

double NNfunction_bb_b2b2::synapse0x349e580() {
   return (neuron0x3499d90()*-0.0400207);
}

double NNfunction_bb_b2b2::synapse0x349e5c0() {
   return (neuron0x349a0d0()*-0.155772);
}

double NNfunction_bb_b2b2::synapse0x349e600() {
   return (neuron0x349a410()*0.0079953);
}

double NNfunction_bb_b2b2::synapse0x349e640() {
   return (neuron0x349a750()*0.00732335);
}

double NNfunction_bb_b2b2::synapse0x34975d0() {
   return (neuron0x349aa90()*-0.0305058);
}

double NNfunction_bb_b2b2::synapse0x3497610() {
   return (neuron0x349aff0()*-0.0132203);
}

double NNfunction_bb_b2b2::synapse0x3497650() {
   return (neuron0x349b210()*-0.0169682);
}

double NNfunction_bb_b2b2::synapse0x349e790() {
   return (neuron0x349b550()*-0.078794);
}

double NNfunction_bb_b2b2::synapse0x349e7d0() {
   return (neuron0x349b890()*-0.0117894);
}

double NNfunction_bb_b2b2::synapse0x349e810() {
   return (neuron0x349bbd0()*-0.00799794);
}

double NNfunction_bb_b2b2::synapse0x349e850() {
   return (neuron0x349bf10()*-0.0114327);
}

double NNfunction_bb_b2b2::synapse0x349e890() {
   return (neuron0x349c250()*0.0282048);
}

double NNfunction_bb_b2b2::synapse0x349ec10() {
   return (neuron0x3497690()*0.0712574);
}

double NNfunction_bb_b2b2::synapse0x349ec50() {
   return (neuron0x34979d0()*-0.0100199);
}

double NNfunction_bb_b2b2::synapse0x349ec90() {
   return (neuron0x3497d10()*0.0177888);
}

double NNfunction_bb_b2b2::synapse0x349ecd0() {
   return (neuron0x3498050()*2.16579);
}

double NNfunction_bb_b2b2::synapse0x349ed10() {
   return (neuron0x3498390()*0.0563914);
}

double NNfunction_bb_b2b2::synapse0x349ed50() {
   return (neuron0x34986d0()*0.00632761);
}

double NNfunction_bb_b2b2::synapse0x349ed90() {
   return (neuron0x3498a10()*-0.00679724);
}

double NNfunction_bb_b2b2::synapse0x349edd0() {
   return (neuron0x3498d50()*-0.00412392);
}

double NNfunction_bb_b2b2::synapse0x349ee10() {
   return (neuron0x3499090()*-0.0358835);
}

double NNfunction_bb_b2b2::synapse0x349ee50() {
   return (neuron0x34993d0()*0.0179796);
}

double NNfunction_bb_b2b2::synapse0x349ee90() {
   return (neuron0x3499710()*0.000993233);
}

double NNfunction_bb_b2b2::synapse0x349eed0() {
   return (neuron0x3499a50()*0.0264818);
}

double NNfunction_bb_b2b2::synapse0x349ef10() {
   return (neuron0x3499d90()*0.0172998);
}

double NNfunction_bb_b2b2::synapse0x349ef50() {
   return (neuron0x349a0d0()*-0.080028);
}

double NNfunction_bb_b2b2::synapse0x349ef90() {
   return (neuron0x349a410()*0.0153034);
}

double NNfunction_bb_b2b2::synapse0x349efd0() {
   return (neuron0x349a750()*-0.0311463);
}

double NNfunction_bb_b2b2::synapse0x349ea60() {
   return (neuron0x349aa90()*0.095653);
}

double NNfunction_bb_b2b2::synapse0x349eaa0() {
   return (neuron0x349aff0()*0.000426513);
}

double NNfunction_bb_b2b2::synapse0x349f120() {
   return (neuron0x349b210()*-0.000802106);
}

double NNfunction_bb_b2b2::synapse0x349f160() {
   return (neuron0x349b550()*0.533476);
}

double NNfunction_bb_b2b2::synapse0x349f1a0() {
   return (neuron0x349b890()*-0.033555);
}

double NNfunction_bb_b2b2::synapse0x349f1e0() {
   return (neuron0x349bbd0()*0.00238872);
}

double NNfunction_bb_b2b2::synapse0x349f220() {
   return (neuron0x349bf10()*0.00141663);
}

double NNfunction_bb_b2b2::synapse0x349f260() {
   return (neuron0x349c250()*0.080172);
}

double NNfunction_bb_b2b2::synapse0x349f5e0() {
   return (neuron0x3497690()*0.286082);
}

double NNfunction_bb_b2b2::synapse0x349f620() {
   return (neuron0x34979d0()*-0.0266036);
}

double NNfunction_bb_b2b2::synapse0x349f660() {
   return (neuron0x3497d10()*-0.0375239);
}

double NNfunction_bb_b2b2::synapse0x349f6a0() {
   return (neuron0x3498050()*0.0125517);
}

double NNfunction_bb_b2b2::synapse0x349f6e0() {
   return (neuron0x3498390()*-0.000287118);
}

double NNfunction_bb_b2b2::synapse0x349f720() {
   return (neuron0x34986d0()*-0.0170944);
}

double NNfunction_bb_b2b2::synapse0x349f760() {
   return (neuron0x3498a10()*-0.00297746);
}

double NNfunction_bb_b2b2::synapse0x349f7a0() {
   return (neuron0x3498d50()*-0.00703988);
}

double NNfunction_bb_b2b2::synapse0x349f7e0() {
   return (neuron0x3499090()*-0.00571553);
}

double NNfunction_bb_b2b2::synapse0x3260b30() {
   return (neuron0x34993d0()*0.0117007);
}

double NNfunction_bb_b2b2::synapse0x3260b70() {
   return (neuron0x3499710()*0.00467585);
}

double NNfunction_bb_b2b2::synapse0x3260bb0() {
   return (neuron0x3499a50()*-0.00165191);
}

double NNfunction_bb_b2b2::synapse0x3260bf0() {
   return (neuron0x3499d90()*-0.00237167);
}

double NNfunction_bb_b2b2::synapse0x3260c30() {
   return (neuron0x349a0d0()*-0.0959612);
}

double NNfunction_bb_b2b2::synapse0x3260c70() {
   return (neuron0x349a410()*-0.00751027);
}

double NNfunction_bb_b2b2::synapse0x3260cb0() {
   return (neuron0x349a750()*0.0189611);
}

double NNfunction_bb_b2b2::synapse0x349f430() {
   return (neuron0x349aa90()*-0.00480726);
}

double NNfunction_bb_b2b2::synapse0x349f470() {
   return (neuron0x349aff0()*0.00158073);
}

double NNfunction_bb_b2b2::synapse0x3260e00() {
   return (neuron0x349b210()*0.00229741);
}

double NNfunction_bb_b2b2::synapse0x3260e40() {
   return (neuron0x349b550()*-0.113216);
}

double NNfunction_bb_b2b2::synapse0x3260e80() {
   return (neuron0x349b890()*-0.0355904);
}

double NNfunction_bb_b2b2::synapse0x3260ec0() {
   return (neuron0x349bbd0()*-0.076814);
}

double NNfunction_bb_b2b2::synapse0x3260f00() {
   return (neuron0x349bf10()*-0.00719264);
}

double NNfunction_bb_b2b2::synapse0x34a0030() {
   return (neuron0x349c250()*3.37468);
}

double NNfunction_bb_b2b2::synapse0x34a03b0() {
   return (neuron0x3497690()*-0.0311045);
}

double NNfunction_bb_b2b2::synapse0x34a03f0() {
   return (neuron0x34979d0()*0.0290295);
}

double NNfunction_bb_b2b2::synapse0x34a0430() {
   return (neuron0x3497d10()*-0.170962);
}

double NNfunction_bb_b2b2::synapse0x34a0470() {
   return (neuron0x3498050()*0.161112);
}

double NNfunction_bb_b2b2::synapse0x34a04b0() {
   return (neuron0x3498390()*-0.241023);
}

double NNfunction_bb_b2b2::synapse0x34a04f0() {
   return (neuron0x34986d0()*0.0613175);
}

double NNfunction_bb_b2b2::synapse0x34a0530() {
   return (neuron0x3498a10()*0.0594027);
}

double NNfunction_bb_b2b2::synapse0x34a0570() {
   return (neuron0x3498d50()*0.021397);
}

double NNfunction_bb_b2b2::synapse0x34a05b0() {
   return (neuron0x3499090()*0.0115161);
}

double NNfunction_bb_b2b2::synapse0x34a05f0() {
   return (neuron0x34993d0()*0.175612);
}

double NNfunction_bb_b2b2::synapse0x34a0630() {
   return (neuron0x3499710()*-0.0860246);
}

double NNfunction_bb_b2b2::synapse0x34a0670() {
   return (neuron0x3499a50()*-0.0986456);
}

double NNfunction_bb_b2b2::synapse0x34a06b0() {
   return (neuron0x3499d90()*-0.052648);
}

double NNfunction_bb_b2b2::synapse0x34a06f0() {
   return (neuron0x349a0d0()*1.25022);
}

double NNfunction_bb_b2b2::synapse0x34a0730() {
   return (neuron0x349a410()*-0.0808489);
}

double NNfunction_bb_b2b2::synapse0x34a0770() {
   return (neuron0x349a750()*-0.132233);
}

double NNfunction_bb_b2b2::synapse0x34a0200() {
   return (neuron0x349aa90()*-0.047521);
}

double NNfunction_bb_b2b2::synapse0x34a0240() {
   return (neuron0x349aff0()*0.00648933);
}

double NNfunction_bb_b2b2::synapse0x34a08c0() {
   return (neuron0x349b210()*-0.0165895);
}

double NNfunction_bb_b2b2::synapse0x34a0900() {
   return (neuron0x349b550()*0.36598);
}

double NNfunction_bb_b2b2::synapse0x34a0940() {
   return (neuron0x349b890()*0.0756472);
}

double NNfunction_bb_b2b2::synapse0x34a0980() {
   return (neuron0x349bbd0()*-0.253105);
}

double NNfunction_bb_b2b2::synapse0x34a09c0() {
   return (neuron0x349bf10()*0.0410374);
}

double NNfunction_bb_b2b2::synapse0x34a0a00() {
   return (neuron0x349c250()*1.07468);
}

double NNfunction_bb_b2b2::synapse0x34a0d80() {
   return (neuron0x3497690()*0.502036);
}

double NNfunction_bb_b2b2::synapse0x34a0dc0() {
   return (neuron0x34979d0()*0.00696311);
}

double NNfunction_bb_b2b2::synapse0x34a0e00() {
   return (neuron0x3497d10()*0.0155035);
}

double NNfunction_bb_b2b2::synapse0x34a0e40() {
   return (neuron0x3498050()*-0.0365717);
}

double NNfunction_bb_b2b2::synapse0x34a0e80() {
   return (neuron0x3498390()*0.528368);
}

double NNfunction_bb_b2b2::synapse0x34a0ec0() {
   return (neuron0x34986d0()*0.0146839);
}

double NNfunction_bb_b2b2::synapse0x34a0f00() {
   return (neuron0x3498a10()*0.00812114);
}

double NNfunction_bb_b2b2::synapse0x34a0f40() {
   return (neuron0x3498d50()*0.0257015);
}

double NNfunction_bb_b2b2::synapse0x34a0f80() {
   return (neuron0x3499090()*-0.0159532);
}

double NNfunction_bb_b2b2::synapse0x34a0fc0() {
   return (neuron0x34993d0()*0.00907583);
}

double NNfunction_bb_b2b2::synapse0x34a1000() {
   return (neuron0x3499710()*0.0286243);
}

double NNfunction_bb_b2b2::synapse0x34a1040() {
   return (neuron0x3499a50()*-0.0162837);
}

double NNfunction_bb_b2b2::synapse0x34a1080() {
   return (neuron0x3499d90()*-0.00222257);
}

double NNfunction_bb_b2b2::synapse0x34a10c0() {
   return (neuron0x349a0d0()*-0.163902);
}

double NNfunction_bb_b2b2::synapse0x34a1100() {
   return (neuron0x349a410()*0.00511141);
}

double NNfunction_bb_b2b2::synapse0x34a1140() {
   return (neuron0x349a750()*0.0111237);
}

double NNfunction_bb_b2b2::synapse0x34a0bd0() {
   return (neuron0x349aa90()*-0.0147014);
}

double NNfunction_bb_b2b2::synapse0x34a0c10() {
   return (neuron0x349aff0()*-0.00367783);
}

double NNfunction_bb_b2b2::synapse0x34a1290() {
   return (neuron0x349b210()*-0.00860839);
}

double NNfunction_bb_b2b2::synapse0x34a12d0() {
   return (neuron0x349b550()*0.238904);
}

double NNfunction_bb_b2b2::synapse0x34a1310() {
   return (neuron0x349b890()*-0.0157481);
}

double NNfunction_bb_b2b2::synapse0x34a1350() {
   return (neuron0x349bbd0()*0.0976448);
}

double NNfunction_bb_b2b2::synapse0x34a1390() {
   return (neuron0x349bf10()*-0.0173009);
}

double NNfunction_bb_b2b2::synapse0x34a13d0() {
   return (neuron0x349c250()*0.0957612);
}

double NNfunction_bb_b2b2::synapse0x349aee0() {
   return (neuron0x3497690()*-0.00741678);
}

double NNfunction_bb_b2b2::synapse0x349af20() {
   return (neuron0x34979d0()*-0.292227);
}

double NNfunction_bb_b2b2::synapse0x349af60() {
   return (neuron0x3497d10()*-0.776316);
}

double NNfunction_bb_b2b2::synapse0x349afa0() {
   return (neuron0x3498050()*0.104969);
}

double NNfunction_bb_b2b2::synapse0x34a1960() {
   return (neuron0x3498390()*0.256033);
}

double NNfunction_bb_b2b2::synapse0x34a19a0() {
   return (neuron0x34986d0()*0.0218494);
}

double NNfunction_bb_b2b2::synapse0x34a19e0() {
   return (neuron0x3498a10()*0.143206);
}

double NNfunction_bb_b2b2::synapse0x34a1a20() {
   return (neuron0x3498d50()*0.123508);
}

double NNfunction_bb_b2b2::synapse0x34a1a60() {
   return (neuron0x3499090()*0.326594);
}

double NNfunction_bb_b2b2::synapse0x34a1aa0() {
   return (neuron0x34993d0()*0.00444605);
}

double NNfunction_bb_b2b2::synapse0x34a1ae0() {
   return (neuron0x3499710()*-0.0609346);
}

double NNfunction_bb_b2b2::synapse0x34a1b20() {
   return (neuron0x3499a50()*0.57056);
}

double NNfunction_bb_b2b2::synapse0x34a1b60() {
   return (neuron0x3499d90()*0.292878);
}

double NNfunction_bb_b2b2::synapse0x34a1ba0() {
   return (neuron0x349a0d0()*0.75858);
}

double NNfunction_bb_b2b2::synapse0x34a1be0() {
   return (neuron0x349a410()*-0.0058984);
}

double NNfunction_bb_b2b2::synapse0x34a1c20() {
   return (neuron0x349a750()*0.0495991);
}

double NNfunction_bb_b2b2::synapse0x34a15a0() {
   return (neuron0x349aa90()*-0.893583);
}

double NNfunction_bb_b2b2::synapse0x34a15e0() {
   return (neuron0x349aff0()*-0.241072);
}

double NNfunction_bb_b2b2::synapse0x34a1d70() {
   return (neuron0x349b210()*-0.0827133);
}

double NNfunction_bb_b2b2::synapse0x34a1db0() {
   return (neuron0x349b550()*-0.396284);
}

double NNfunction_bb_b2b2::synapse0x34a1df0() {
   return (neuron0x349b890()*-0.130966);
}

double NNfunction_bb_b2b2::synapse0x34a1e30() {
   return (neuron0x349bbd0()*0.170518);
}

double NNfunction_bb_b2b2::synapse0x34a1e70() {
   return (neuron0x349bf10()*-0.0400297);
}

double NNfunction_bb_b2b2::synapse0x34a1eb0() {
   return (neuron0x349c250()*0.0213176);
}

double NNfunction_bb_b2b2::synapse0x34a2230() {
   return (neuron0x3497690()*0.0619709);
}

double NNfunction_bb_b2b2::synapse0x34a2270() {
   return (neuron0x34979d0()*-0.0126196);
}

double NNfunction_bb_b2b2::synapse0x34a22b0() {
   return (neuron0x3497d10()*-0.107469);
}

double NNfunction_bb_b2b2::synapse0x34a22f0() {
   return (neuron0x3498050()*0.0277492);
}

double NNfunction_bb_b2b2::synapse0x34a2330() {
   return (neuron0x3498390()*0.0397848);
}

double NNfunction_bb_b2b2::synapse0x34a2370() {
   return (neuron0x34986d0()*-0.0390107);
}

double NNfunction_bb_b2b2::synapse0x34a23b0() {
   return (neuron0x3498a10()*-0.0683778);
}

double NNfunction_bb_b2b2::synapse0x34a23f0() {
   return (neuron0x3498d50()*0.0174747);
}

double NNfunction_bb_b2b2::synapse0x34a2430() {
   return (neuron0x3499090()*0.0391242);
}

double NNfunction_bb_b2b2::synapse0x34a2470() {
   return (neuron0x34993d0()*-0.00942121);
}

double NNfunction_bb_b2b2::synapse0x34a24b0() {
   return (neuron0x3499710()*0.0136704);
}

double NNfunction_bb_b2b2::synapse0x34a24f0() {
   return (neuron0x3499a50()*0.0524738);
}

double NNfunction_bb_b2b2::synapse0x34a2530() {
   return (neuron0x3499d90()*0.0364075);
}

double NNfunction_bb_b2b2::synapse0x34a2570() {
   return (neuron0x349a0d0()*-1.42248);
}

double NNfunction_bb_b2b2::synapse0x34a25b0() {
   return (neuron0x349a410()*0.00321696);
}

double NNfunction_bb_b2b2::synapse0x34a25f0() {
   return (neuron0x349a750()*-0.00160112);
}

double NNfunction_bb_b2b2::synapse0x34a2080() {
   return (neuron0x349aa90()*-0.700147);
}

double NNfunction_bb_b2b2::synapse0x34a20c0() {
   return (neuron0x349aff0()*0.0468717);
}

double NNfunction_bb_b2b2::synapse0x34a2740() {
   return (neuron0x349b210()*0.0273683);
}

double NNfunction_bb_b2b2::synapse0x34a2780() {
   return (neuron0x349b550()*2.10158);
}

double NNfunction_bb_b2b2::synapse0x34a27c0() {
   return (neuron0x349b890()*0.00856314);
}

double NNfunction_bb_b2b2::synapse0x34a2800() {
   return (neuron0x349bbd0()*0.0102407);
}

double NNfunction_bb_b2b2::synapse0x34a2840() {
   return (neuron0x349bf10()*0.0019335);
}

double NNfunction_bb_b2b2::synapse0x34a2880() {
   return (neuron0x349c250()*-0.0472639);
}

double NNfunction_bb_b2b2::synapse0x34a2c00() {
   return (neuron0x3497690()*-0.386286);
}

double NNfunction_bb_b2b2::synapse0x34a2c40() {
   return (neuron0x34979d0()*0.231592);
}

double NNfunction_bb_b2b2::synapse0x34a2c80() {
   return (neuron0x3497d10()*-0.26589);
}

double NNfunction_bb_b2b2::synapse0x34a2cc0() {
   return (neuron0x3498050()*-0.0609386);
}

double NNfunction_bb_b2b2::synapse0x34a2d00() {
   return (neuron0x3498390()*-0.670688);
}

double NNfunction_bb_b2b2::synapse0x34a2d40() {
   return (neuron0x34986d0()*0.405737);
}

double NNfunction_bb_b2b2::synapse0x34a2d80() {
   return (neuron0x3498a10()*-0.502506);
}

double NNfunction_bb_b2b2::synapse0x34a2dc0() {
   return (neuron0x3498d50()*-0.429284);
}

double NNfunction_bb_b2b2::synapse0x34a2e00() {
   return (neuron0x3499090()*-0.808528);
}

double NNfunction_bb_b2b2::synapse0x34a2e40() {
   return (neuron0x34993d0()*0.446578);
}

double NNfunction_bb_b2b2::synapse0x34a2e80() {
   return (neuron0x3499710()*-0.188411);
}

double NNfunction_bb_b2b2::synapse0x34a2ec0() {
   return (neuron0x3499a50()*1.34723);
}

double NNfunction_bb_b2b2::synapse0x34a2f00() {
   return (neuron0x3499d90()*-0.363774);
}

double NNfunction_bb_b2b2::synapse0x34a2f40() {
   return (neuron0x349a0d0()*0.364831);
}

double NNfunction_bb_b2b2::synapse0x34a2f80() {
   return (neuron0x349a410()*0.545354);
}

double NNfunction_bb_b2b2::synapse0x34a2fc0() {
   return (neuron0x349a750()*0.117219);
}

double NNfunction_bb_b2b2::synapse0x34a2a50() {
   return (neuron0x349aa90()*-0.934689);
}

double NNfunction_bb_b2b2::synapse0x34a2a90() {
   return (neuron0x349aff0()*0.251836);
}

double NNfunction_bb_b2b2::synapse0x349f820() {
   return (neuron0x349b210()*-0.270978);
}

double NNfunction_bb_b2b2::synapse0x349f860() {
   return (neuron0x349b550()*0.435755);
}

double NNfunction_bb_b2b2::synapse0x349f8a0() {
   return (neuron0x349b890()*-0.384912);
}

double NNfunction_bb_b2b2::synapse0x349f8e0() {
   return (neuron0x349bbd0()*-0.461161);
}

double NNfunction_bb_b2b2::synapse0x349f920() {
   return (neuron0x349bf10()*-0.987663);
}

double NNfunction_bb_b2b2::synapse0x349f960() {
   return (neuron0x349c250()*-0.108278);
}

double NNfunction_bb_b2b2::synapse0x349fce0() {
   return (neuron0x3497690()*0.252865);
}

double NNfunction_bb_b2b2::synapse0x349fd20() {
   return (neuron0x34979d0()*0.0277951);
}

double NNfunction_bb_b2b2::synapse0x349fd60() {
   return (neuron0x3497d10()*-0.152861);
}

double NNfunction_bb_b2b2::synapse0x349fda0() {
   return (neuron0x3498050()*-0.197464);
}

double NNfunction_bb_b2b2::synapse0x349fde0() {
   return (neuron0x3498390()*-0.131264);
}

double NNfunction_bb_b2b2::synapse0x349fe20() {
   return (neuron0x34986d0()*-0.0531696);
}

double NNfunction_bb_b2b2::synapse0x349fe60() {
   return (neuron0x3498a10()*0.0814223);
}

double NNfunction_bb_b2b2::synapse0x349fea0() {
   return (neuron0x3498d50()*0.0803806);
}

double NNfunction_bb_b2b2::synapse0x349fee0() {
   return (neuron0x3499090()*-0.208164);
}

double NNfunction_bb_b2b2::synapse0x349ff20() {
   return (neuron0x34993d0()*0.157558);
}

double NNfunction_bb_b2b2::synapse0x349ff60() {
   return (neuron0x3499710()*-0.0201794);
}

double NNfunction_bb_b2b2::synapse0x349ffa0() {
   return (neuron0x3499a50()*-0.172863);
}

double NNfunction_bb_b2b2::synapse0x349ffe0() {
   return (neuron0x3499d90()*-0.213509);
}

double NNfunction_bb_b2b2::synapse0x34a4120() {
   return (neuron0x349a0d0()*-0.150634);
}

double NNfunction_bb_b2b2::synapse0x34a4160() {
   return (neuron0x349a410()*-0.165859);
}

double NNfunction_bb_b2b2::synapse0x34a41a0() {
   return (neuron0x349a750()*-0.386934);
}

double NNfunction_bb_b2b2::synapse0x349fb30() {
   return (neuron0x349aa90()*-0.0730886);
}

double NNfunction_bb_b2b2::synapse0x349fb70() {
   return (neuron0x349aff0()*-0.103352);
}

double NNfunction_bb_b2b2::synapse0x34a42f0() {
   return (neuron0x349b210()*-0.223316);
}

double NNfunction_bb_b2b2::synapse0x34a4330() {
   return (neuron0x349b550()*-0.317843);
}

double NNfunction_bb_b2b2::synapse0x34a4370() {
   return (neuron0x349b890()*-0.114394);
}

double NNfunction_bb_b2b2::synapse0x34a43b0() {
   return (neuron0x349bbd0()*0.11159);
}

double NNfunction_bb_b2b2::synapse0x34a43f0() {
   return (neuron0x349bf10()*-0.171342);
}

double NNfunction_bb_b2b2::synapse0x34a4430() {
   return (neuron0x349c250()*0.190764);
}

double NNfunction_bb_b2b2::synapse0x34a47b0() {
   return (neuron0x3497690()*0.25364);
}

double NNfunction_bb_b2b2::synapse0x34a47f0() {
   return (neuron0x34979d0()*-0.0300668);
}

double NNfunction_bb_b2b2::synapse0x34a4830() {
   return (neuron0x3497d10()*-0.0508905);
}

double NNfunction_bb_b2b2::synapse0x34a4870() {
   return (neuron0x3498050()*-0.0020289);
}

double NNfunction_bb_b2b2::synapse0x34a48b0() {
   return (neuron0x3498390()*-0.0277285);
}

double NNfunction_bb_b2b2::synapse0x34a48f0() {
   return (neuron0x34986d0()*-0.0414344);
}

double NNfunction_bb_b2b2::synapse0x34a4930() {
   return (neuron0x3498a10()*0.315103);
}

double NNfunction_bb_b2b2::synapse0x34a4970() {
   return (neuron0x3498d50()*-0.145343);
}

double NNfunction_bb_b2b2::synapse0x34a49b0() {
   return (neuron0x3499090()*0.0232347);
}

double NNfunction_bb_b2b2::synapse0x34a49f0() {
   return (neuron0x34993d0()*-0.0166368);
}

double NNfunction_bb_b2b2::synapse0x34a4a30() {
   return (neuron0x3499710()*-0.020503);
}

double NNfunction_bb_b2b2::synapse0x34a4a70() {
   return (neuron0x3499a50()*-0.00343083);
}

double NNfunction_bb_b2b2::synapse0x34a4ab0() {
   return (neuron0x3499d90()*0.00098146);
}

double NNfunction_bb_b2b2::synapse0x34a4af0() {
   return (neuron0x349a0d0()*-0.187173);
}

double NNfunction_bb_b2b2::synapse0x34a4b30() {
   return (neuron0x349a410()*-0.2451);
}

double NNfunction_bb_b2b2::synapse0x34a4b70() {
   return (neuron0x349a750()*-0.0620474);
}

double NNfunction_bb_b2b2::synapse0x34a4600() {
   return (neuron0x349aa90()*-0.0463064);
}

double NNfunction_bb_b2b2::synapse0x34a4640() {
   return (neuron0x349aff0()*0.00254719);
}

double NNfunction_bb_b2b2::synapse0x34a4cc0() {
   return (neuron0x349b210()*-0.00619451);
}

double NNfunction_bb_b2b2::synapse0x34a4d00() {
   return (neuron0x349b550()*0.423009);
}

double NNfunction_bb_b2b2::synapse0x34a4d40() {
   return (neuron0x349b890()*-0.102968);
}

double NNfunction_bb_b2b2::synapse0x34a4d80() {
   return (neuron0x349bbd0()*0.00893105);
}

double NNfunction_bb_b2b2::synapse0x34a4dc0() {
   return (neuron0x349bf10()*-0.020932);
}

double NNfunction_bb_b2b2::synapse0x34a4e00() {
   return (neuron0x349c250()*0.222375);
}

double NNfunction_bb_b2b2::synapse0x34a5180() {
   return (neuron0x3497690()*0.488877);
}

double NNfunction_bb_b2b2::synapse0x34a51c0() {
   return (neuron0x34979d0()*0.0190746);
}

double NNfunction_bb_b2b2::synapse0x34a5200() {
   return (neuron0x3497d10()*-0.0048642);
}

double NNfunction_bb_b2b2::synapse0x34a5240() {
   return (neuron0x3498050()*-0.0127969);
}

double NNfunction_bb_b2b2::synapse0x34a5280() {
   return (neuron0x3498390()*-0.875298);
}

double NNfunction_bb_b2b2::synapse0x34a52c0() {
   return (neuron0x34986d0()*0.0145323);
}

double NNfunction_bb_b2b2::synapse0x34a5300() {
   return (neuron0x3498a10()*0.0170988);
}

double NNfunction_bb_b2b2::synapse0x34a5340() {
   return (neuron0x3498d50()*-0.0163957);
}

double NNfunction_bb_b2b2::synapse0x34a5380() {
   return (neuron0x3499090()*-0.00349462);
}

double NNfunction_bb_b2b2::synapse0x34a53c0() {
   return (neuron0x34993d0()*0.0430482);
}

double NNfunction_bb_b2b2::synapse0x34a5400() {
   return (neuron0x3499710()*-0.0224074);
}

double NNfunction_bb_b2b2::synapse0x34a5440() {
   return (neuron0x3499a50()*0.00225304);
}

double NNfunction_bb_b2b2::synapse0x34a5480() {
   return (neuron0x3499d90()*0.0145045);
}

double NNfunction_bb_b2b2::synapse0x34a54c0() {
   return (neuron0x349a0d0()*-0.249348);
}

double NNfunction_bb_b2b2::synapse0x34a5500() {
   return (neuron0x349a410()*-0.0231863);
}

double NNfunction_bb_b2b2::synapse0x34a5540() {
   return (neuron0x349a750()*0.00773385);
}

double NNfunction_bb_b2b2::synapse0x34a4fd0() {
   return (neuron0x349aa90()*0.0283098);
}

double NNfunction_bb_b2b2::synapse0x34a5010() {
   return (neuron0x349aff0()*-0.0301793);
}

double NNfunction_bb_b2b2::synapse0x34a5690() {
   return (neuron0x349b210()*-0.0137351);
}

double NNfunction_bb_b2b2::synapse0x34a56d0() {
   return (neuron0x349b550()*0.066985);
}

double NNfunction_bb_b2b2::synapse0x34a5710() {
   return (neuron0x349b890()*0.00283582);
}

double NNfunction_bb_b2b2::synapse0x34a5750() {
   return (neuron0x349bbd0()*-0.806967);
}

double NNfunction_bb_b2b2::synapse0x34a5790() {
   return (neuron0x349bf10()*0.00191542);
}

double NNfunction_bb_b2b2::synapse0x34a57d0() {
   return (neuron0x349c250()*-0.120182);
}

double NNfunction_bb_b2b2::synapse0x34a5b50() {
   return (neuron0x3497690()*0.0300645);
}

double NNfunction_bb_b2b2::synapse0x34a5b90() {
   return (neuron0x34979d0()*-0.0160707);
}

double NNfunction_bb_b2b2::synapse0x34a5bd0() {
   return (neuron0x3497d10()*0.0051922);
}

double NNfunction_bb_b2b2::synapse0x34a5c10() {
   return (neuron0x3498050()*-4.43533);
}

double NNfunction_bb_b2b2::synapse0x34a5c50() {
   return (neuron0x3498390()*0.000594566);
}

double NNfunction_bb_b2b2::synapse0x34a5c90() {
   return (neuron0x34986d0()*-0.00459756);
}

double NNfunction_bb_b2b2::synapse0x34a5cd0() {
   return (neuron0x3498a10()*0.00838116);
}

double NNfunction_bb_b2b2::synapse0x34a5d10() {
   return (neuron0x3498d50()*-0.00605676);
}

double NNfunction_bb_b2b2::synapse0x34a5d50() {
   return (neuron0x3499090()*0.00346124);
}

double NNfunction_bb_b2b2::synapse0x34a5d90() {
   return (neuron0x34993d0()*-0.001964);
}

double NNfunction_bb_b2b2::synapse0x34a5dd0() {
   return (neuron0x3499710()*-0.0102674);
}

double NNfunction_bb_b2b2::synapse0x34a5e10() {
   return (neuron0x3499a50()*0.0141092);
}

double NNfunction_bb_b2b2::synapse0x34a5e50() {
   return (neuron0x3499d90()*0.0314663);
}

double NNfunction_bb_b2b2::synapse0x34a5e90() {
   return (neuron0x349a0d0()*0.359166);
}

double NNfunction_bb_b2b2::synapse0x34a5ed0() {
   return (neuron0x349a410()*0.0358928);
}

double NNfunction_bb_b2b2::synapse0x34a5f10() {
   return (neuron0x349a750()*-0.000320638);
}

double NNfunction_bb_b2b2::synapse0x34a59a0() {
   return (neuron0x349aa90()*0.0247844);
}

double NNfunction_bb_b2b2::synapse0x34a59e0() {
   return (neuron0x349aff0()*-0.0136803);
}

double NNfunction_bb_b2b2::synapse0x34a6060() {
   return (neuron0x349b210()*0.0024314);
}

double NNfunction_bb_b2b2::synapse0x34a60a0() {
   return (neuron0x349b550()*0.456842);
}

double NNfunction_bb_b2b2::synapse0x34a60e0() {
   return (neuron0x349b890()*0.0376007);
}

double NNfunction_bb_b2b2::synapse0x34a6120() {
   return (neuron0x349bbd0()*-0.0459747);
}

double NNfunction_bb_b2b2::synapse0x34a6160() {
   return (neuron0x349bf10()*0.000488276);
}

double NNfunction_bb_b2b2::synapse0x34a61a0() {
   return (neuron0x349c250()*0.104009);
}

double NNfunction_bb_b2b2::synapse0x34a6520() {
   return (neuron0x3497690()*-1.07075);
}

double NNfunction_bb_b2b2::synapse0x34978b0() {
   return (neuron0x34979d0()*0.0158722);
}

double NNfunction_bb_b2b2::synapse0x34978f0() {
   return (neuron0x3497d10()*0.104365);
}

double NNfunction_bb_b2b2::synapse0x3497bf0() {
   return (neuron0x3498050()*0.0123227);
}

double NNfunction_bb_b2b2::synapse0x3497c30() {
   return (neuron0x3498390()*-1.14589);
}

double NNfunction_bb_b2b2::synapse0x3497f30() {
   return (neuron0x34986d0()*-0.0312955);
}

double NNfunction_bb_b2b2::synapse0x3497f70() {
   return (neuron0x3498a10()*0.0129556);
}

double NNfunction_bb_b2b2::synapse0x3498270() {
   return (neuron0x3498d50()*-0.112478);
}

double NNfunction_bb_b2b2::synapse0x34982b0() {
   return (neuron0x3499090()*0.0491341);
}

double NNfunction_bb_b2b2::synapse0x34985b0() {
   return (neuron0x34993d0()*0.03114);
}

double NNfunction_bb_b2b2::synapse0x34985f0() {
   return (neuron0x3499710()*-0.0207736);
}

double NNfunction_bb_b2b2::synapse0x34988f0() {
   return (neuron0x3499a50()*0.101672);
}

double NNfunction_bb_b2b2::synapse0x3498930() {
   return (neuron0x3499d90()*0.0500396);
}

double NNfunction_bb_b2b2::synapse0x3498c30() {
   return (neuron0x349a0d0()*-0.0424239);
}

double NNfunction_bb_b2b2::synapse0x3498c70() {
   return (neuron0x349a410()*-0.0681595);
}

double NNfunction_bb_b2b2::synapse0x3498f70() {
   return (neuron0x349a750()*-0.0650531);
}

double NNfunction_bb_b2b2::synapse0x3498fb0() {
   return (neuron0x349aa90()*0.0205553);
}

double NNfunction_bb_b2b2::synapse0x34992b0() {
   return (neuron0x349aff0()*-0.028409);
}

double NNfunction_bb_b2b2::synapse0x34992f0() {
   return (neuron0x349b210()*0.0271631);
}

double NNfunction_bb_b2b2::synapse0x34995f0() {
   return (neuron0x349b550()*-0.123212);
}

double NNfunction_bb_b2b2::synapse0x3499630() {
   return (neuron0x349b890()*0.0226844);
}

double NNfunction_bb_b2b2::synapse0x3499930() {
   return (neuron0x349bbd0()*1.20043);
}

double NNfunction_bb_b2b2::synapse0x3499970() {
   return (neuron0x349bf10()*0.0398016);
}

double NNfunction_bb_b2b2::synapse0x3499c70() {
   return (neuron0x349c250()*-0.211529);
}

double NNfunction_bb_b2b2::synapse0x3499cb0() {
   return (neuron0x3497690()*-0.637155);
}

double NNfunction_bb_b2b2::synapse0x349a970() {
   return (neuron0x34979d0()*0.00419537);
}

double NNfunction_bb_b2b2::synapse0x349a9b0() {
   return (neuron0x3497d10()*-0.00183945);
}

double NNfunction_bb_b2b2::synapse0x34a6370() {
   return (neuron0x3498050()*0.00271324);
}

double NNfunction_bb_b2b2::synapse0x34a63b0() {
   return (neuron0x3498390()*0.677826);
}

double NNfunction_bb_b2b2::synapse0x349acb0() {
   return (neuron0x34986d0()*-0.00796119);
}

double NNfunction_bb_b2b2::synapse0x349acf0() {
   return (neuron0x3498a10()*0.00922804);
}

double NNfunction_bb_b2b2::synapse0x32528e0() {
   return (neuron0x3498d50()*0.0349047);
}

double NNfunction_bb_b2b2::synapse0x3252920() {
   return (neuron0x3499090()*0.00996404);
}

double NNfunction_bb_b2b2::synapse0x349b430() {
   return (neuron0x34993d0()*-0.0120235);
}

double NNfunction_bb_b2b2::synapse0x349b470() {
   return (neuron0x3499710()*0.00877722);
}

double NNfunction_bb_b2b2::synapse0x349b770() {
   return (neuron0x3499a50()*-0.0316415);
}

double NNfunction_bb_b2b2::synapse0x349b7b0() {
   return (neuron0x3499d90()*-0.000292063);
}

double NNfunction_bb_b2b2::synapse0x349bab0() {
   return (neuron0x349a0d0()*0.198943);
}

double NNfunction_bb_b2b2::synapse0x349baf0() {
   return (neuron0x349a410()*0.0140141);
}

double NNfunction_bb_b2b2::synapse0x349bdf0() {
   return (neuron0x349a750()*-0.00964634);
}

double NNfunction_bb_b2b2::synapse0x349be30() {
   return (neuron0x349aa90()*0.00140012);
}

double NNfunction_bb_b2b2::synapse0x349c130() {
   return (neuron0x349aff0()*0.0215593);
}

double NNfunction_bb_b2b2::synapse0x349c170() {
   return (neuron0x349b210()*-0.00854327);
}

double NNfunction_bb_b2b2::synapse0x349c470() {
   return (neuron0x349b550()*-0.0864574);
}

double NNfunction_bb_b2b2::synapse0x349c4b0() {
   return (neuron0x349b890()*-0.00193363);
}

double NNfunction_bb_b2b2::synapse0x3499fb0() {
   return (neuron0x349bbd0()*-0.00224901);
}

double NNfunction_bb_b2b2::synapse0x3499ff0() {
   return (neuron0x349bf10()*-0.00507862);
}

double NNfunction_bb_b2b2::synapse0x34a8290() {
   return (neuron0x349c250()*0.00659288);
}

double NNfunction_bb_b2b2::synapse0x34a8610() {
   return (neuron0x3497690()*0.656529);
}

double NNfunction_bb_b2b2::synapse0x34a8650() {
   return (neuron0x34979d0()*0.0914147);
}

double NNfunction_bb_b2b2::synapse0x34a8690() {
   return (neuron0x3497d10()*-0.0876131);
}

double NNfunction_bb_b2b2::synapse0x34a86d0() {
   return (neuron0x3498050()*-0.0488788);
}

double NNfunction_bb_b2b2::synapse0x34a8710() {
   return (neuron0x3498390()*-0.236988);
}

double NNfunction_bb_b2b2::synapse0x34a8750() {
   return (neuron0x34986d0()*0.0425444);
}

double NNfunction_bb_b2b2::synapse0x34a8790() {
   return (neuron0x3498a10()*0.313137);
}

double NNfunction_bb_b2b2::synapse0x34a87d0() {
   return (neuron0x3498d50()*-0.0614607);
}

double NNfunction_bb_b2b2::synapse0x34a8810() {
   return (neuron0x3499090()*0.0304207);
}

double NNfunction_bb_b2b2::synapse0x34a8850() {
   return (neuron0x34993d0()*0.0576517);
}

double NNfunction_bb_b2b2::synapse0x34a8890() {
   return (neuron0x3499710()*0.0286447);
}

double NNfunction_bb_b2b2::synapse0x34a88d0() {
   return (neuron0x3499a50()*0.00964953);
}

double NNfunction_bb_b2b2::synapse0x34a8910() {
   return (neuron0x3499d90()*-0.00535703);
}

double NNfunction_bb_b2b2::synapse0x34a8950() {
   return (neuron0x349a0d0()*-0.518847);
}

double NNfunction_bb_b2b2::synapse0x34a8990() {
   return (neuron0x349a410()*0.543346);
}

double NNfunction_bb_b2b2::synapse0x34a89d0() {
   return (neuron0x349a750()*0.0214092);
}

double NNfunction_bb_b2b2::synapse0x34a8460() {
   return (neuron0x349aa90()*-0.0412965);
}

double NNfunction_bb_b2b2::synapse0x34a84a0() {
   return (neuron0x349aff0()*-0.0435989);
}

double NNfunction_bb_b2b2::synapse0x34a8b20() {
   return (neuron0x349b210()*-0.0369089);
}

double NNfunction_bb_b2b2::synapse0x34a8b60() {
   return (neuron0x349b550()*0.163286);
}

double NNfunction_bb_b2b2::synapse0x34a8ba0() {
   return (neuron0x349b890()*-0.00296684);
}

double NNfunction_bb_b2b2::synapse0x34a8be0() {
   return (neuron0x349bbd0()*-0.157147);
}

double NNfunction_bb_b2b2::synapse0x34a8c20() {
   return (neuron0x349bf10()*0.0305474);
}

double NNfunction_bb_b2b2::synapse0x34a8c60() {
   return (neuron0x349c250()*0.0684888);
}

double NNfunction_bb_b2b2::synapse0x34a8fe0() {
   return (neuron0x3497690()*0.0683544);
}

double NNfunction_bb_b2b2::synapse0x34a9020() {
   return (neuron0x34979d0()*0.000963188);
}

double NNfunction_bb_b2b2::synapse0x34a9060() {
   return (neuron0x3497d10()*0.0306051);
}

double NNfunction_bb_b2b2::synapse0x34a90a0() {
   return (neuron0x3498050()*-0.00225064);
}

double NNfunction_bb_b2b2::synapse0x34a90e0() {
   return (neuron0x3498390()*0.0698163);
}

double NNfunction_bb_b2b2::synapse0x34a9120() {
   return (neuron0x34986d0()*-0.0128061);
}

double NNfunction_bb_b2b2::synapse0x34a9160() {
   return (neuron0x3498a10()*-0.01181);
}

double NNfunction_bb_b2b2::synapse0x34a91a0() {
   return (neuron0x3498d50()*-0.00574858);
}

double NNfunction_bb_b2b2::synapse0x34a91e0() {
   return (neuron0x3499090()*0.037376);
}

double NNfunction_bb_b2b2::synapse0x34a9220() {
   return (neuron0x34993d0()*-0.0228946);
}

double NNfunction_bb_b2b2::synapse0x34a9260() {
   return (neuron0x3499710()*0.0177598);
}

double NNfunction_bb_b2b2::synapse0x34a92a0() {
   return (neuron0x3499a50()*0.0091771);
}

double NNfunction_bb_b2b2::synapse0x34a92e0() {
   return (neuron0x3499d90()*-0.00750325);
}

double NNfunction_bb_b2b2::synapse0x34a9320() {
   return (neuron0x349a0d0()*-1.2705);
}

double NNfunction_bb_b2b2::synapse0x34a9360() {
   return (neuron0x349a410()*0.0252463);
}

double NNfunction_bb_b2b2::synapse0x34a93a0() {
   return (neuron0x349a750()*-0.00717209);
}

double NNfunction_bb_b2b2::synapse0x34a8e30() {
   return (neuron0x349aa90()*-0.094479);
}

double NNfunction_bb_b2b2::synapse0x34a8e70() {
   return (neuron0x349aff0()*0.00223477);
}

double NNfunction_bb_b2b2::synapse0x34a94f0() {
   return (neuron0x349b210()*-0.000358132);
}

double NNfunction_bb_b2b2::synapse0x34a9530() {
   return (neuron0x349b550()*2.5648);
}

double NNfunction_bb_b2b2::synapse0x34a9570() {
   return (neuron0x349b890()*-0.0159582);
}

double NNfunction_bb_b2b2::synapse0x34a95b0() {
   return (neuron0x349bbd0()*-0.0320526);
}

double NNfunction_bb_b2b2::synapse0x34a95f0() {
   return (neuron0x349bf10()*-0.0105616);
}

double NNfunction_bb_b2b2::synapse0x34a9630() {
   return (neuron0x349c250()*-0.0700643);
}

double NNfunction_bb_b2b2::synapse0x34a99b0() {
   return (neuron0x3497690()*0.161421);
}

double NNfunction_bb_b2b2::synapse0x34a99f0() {
   return (neuron0x34979d0()*0.028322);
}

double NNfunction_bb_b2b2::synapse0x34a9a30() {
   return (neuron0x3497d10()*-0.14395);
}

double NNfunction_bb_b2b2::synapse0x34a9a70() {
   return (neuron0x3498050()*-0.0178268);
}

double NNfunction_bb_b2b2::synapse0x34a9ab0() {
   return (neuron0x3498390()*-0.00754816);
}

double NNfunction_bb_b2b2::synapse0x34a9af0() {
   return (neuron0x34986d0()*-0.104801);
}

double NNfunction_bb_b2b2::synapse0x34a9b30() {
   return (neuron0x3498a10()*0.0158469);
}

double NNfunction_bb_b2b2::synapse0x34a9b70() {
   return (neuron0x3498d50()*0.0151721);
}

double NNfunction_bb_b2b2::synapse0x34a9bb0() {
   return (neuron0x3499090()*0.257774);
}

double NNfunction_bb_b2b2::synapse0x34a9bf0() {
   return (neuron0x34993d0()*-0.054961);
}

double NNfunction_bb_b2b2::synapse0x34a9c30() {
   return (neuron0x3499710()*0.217711);
}

double NNfunction_bb_b2b2::synapse0x34a9c70() {
   return (neuron0x3499a50()*-0.115211);
}

double NNfunction_bb_b2b2::synapse0x34a9cb0() {
   return (neuron0x3499d90()*0.00917909);
}

double NNfunction_bb_b2b2::synapse0x34a9cf0() {
   return (neuron0x349a0d0()*0.245341);
}

double NNfunction_bb_b2b2::synapse0x34a9d30() {
   return (neuron0x349a410()*0.220713);
}

double NNfunction_bb_b2b2::synapse0x34a9d70() {
   return (neuron0x349a750()*-0.107798);
}

double NNfunction_bb_b2b2::synapse0x34a9800() {
   return (neuron0x349aa90()*0.0935324);
}

double NNfunction_bb_b2b2::synapse0x34a9840() {
   return (neuron0x349aff0()*0.104381);
}

double NNfunction_bb_b2b2::synapse0x34a9ec0() {
   return (neuron0x349b210()*-0.0407657);
}

double NNfunction_bb_b2b2::synapse0x34a9f00() {
   return (neuron0x349b550()*0.638606);
}

double NNfunction_bb_b2b2::synapse0x34a9f40() {
   return (neuron0x349b890()*-0.261578);
}

double NNfunction_bb_b2b2::synapse0x34a9f80() {
   return (neuron0x349bbd0()*0.540107);
}

double NNfunction_bb_b2b2::synapse0x34a9fc0() {
   return (neuron0x349bf10()*-0.00772501);
}

double NNfunction_bb_b2b2::synapse0x34aa000() {
   return (neuron0x349c250()*-0.280583);
}

double NNfunction_bb_b2b2::synapse0x34aa380() {
   return (neuron0x3497690()*-0.137714);
}

double NNfunction_bb_b2b2::synapse0x34aa3c0() {
   return (neuron0x34979d0()*-0.0108535);
}

double NNfunction_bb_b2b2::synapse0x34aa400() {
   return (neuron0x3497d10()*0.0447182);
}

double NNfunction_bb_b2b2::synapse0x34aa440() {
   return (neuron0x3498050()*-0.151411);
}

double NNfunction_bb_b2b2::synapse0x34aa480() {
   return (neuron0x3498390()*-0.0992266);
}

double NNfunction_bb_b2b2::synapse0x34aa4c0() {
   return (neuron0x34986d0()*-0.0322776);
}

double NNfunction_bb_b2b2::synapse0x34aa500() {
   return (neuron0x3498a10()*0.00440562);
}

double NNfunction_bb_b2b2::synapse0x34aa540() {
   return (neuron0x3498d50()*-0.0384584);
}

double NNfunction_bb_b2b2::synapse0x34aa580() {
   return (neuron0x3499090()*0.259451);
}

double NNfunction_bb_b2b2::synapse0x34aa5c0() {
   return (neuron0x34993d0()*0.0441473);
}

double NNfunction_bb_b2b2::synapse0x34aa600() {
   return (neuron0x3499710()*-0.032283);
}

double NNfunction_bb_b2b2::synapse0x34aa640() {
   return (neuron0x3499a50()*0.0444895);
}

double NNfunction_bb_b2b2::synapse0x34aa680() {
   return (neuron0x3499d90()*0.00336205);
}

double NNfunction_bb_b2b2::synapse0x34aa6c0() {
   return (neuron0x349a0d0()*-0.177366);
}

double NNfunction_bb_b2b2::synapse0x34aa700() {
   return (neuron0x349a410()*0.0474929);
}

double NNfunction_bb_b2b2::synapse0x34aa740() {
   return (neuron0x349a750()*0.0187173);
}

double NNfunction_bb_b2b2::synapse0x34aa1d0() {
   return (neuron0x349aa90()*0.0490372);
}

double NNfunction_bb_b2b2::synapse0x34aa210() {
   return (neuron0x349aff0()*-0.00784576);
}

double NNfunction_bb_b2b2::synapse0x34aa890() {
   return (neuron0x349b210()*0.00394022);
}

double NNfunction_bb_b2b2::synapse0x34aa8d0() {
   return (neuron0x349b550()*-0.307058);
}

double NNfunction_bb_b2b2::synapse0x34aa910() {
   return (neuron0x349b890()*-0.00853451);
}

double NNfunction_bb_b2b2::synapse0x34aa950() {
   return (neuron0x349bbd0()*0.0773);
}

double NNfunction_bb_b2b2::synapse0x34aa990() {
   return (neuron0x349bf10()*0.00535889);
}

double NNfunction_bb_b2b2::synapse0x34aa9d0() {
   return (neuron0x349c250()*-0.0364441);
}

double NNfunction_bb_b2b2::synapse0x34aad50() {
   return (neuron0x3497690()*-0.42962);
}

double NNfunction_bb_b2b2::synapse0x34aad90() {
   return (neuron0x34979d0()*-0.0296409);
}

double NNfunction_bb_b2b2::synapse0x34aadd0() {
   return (neuron0x3497d10()*-0.497866);
}

double NNfunction_bb_b2b2::synapse0x34aae10() {
   return (neuron0x3498050()*0.238428);
}

double NNfunction_bb_b2b2::synapse0x34aae50() {
   return (neuron0x3498390()*1.1804);
}

double NNfunction_bb_b2b2::synapse0x34aae90() {
   return (neuron0x34986d0()*-0.203821);
}

double NNfunction_bb_b2b2::synapse0x34aaed0() {
   return (neuron0x3498a10()*-0.361604);
}

double NNfunction_bb_b2b2::synapse0x34aaf10() {
   return (neuron0x3498d50()*-0.380102);
}

double NNfunction_bb_b2b2::synapse0x34aaf50() {
   return (neuron0x3499090()*-0.165905);
}

double NNfunction_bb_b2b2::synapse0x34a3110() {
   return (neuron0x34993d0()*-0.0496829);
}

double NNfunction_bb_b2b2::synapse0x34a3150() {
   return (neuron0x3499710()*-0.206439);
}

double NNfunction_bb_b2b2::synapse0x34a3190() {
   return (neuron0x3499a50()*0.281515);
}

double NNfunction_bb_b2b2::synapse0x34a31d0() {
   return (neuron0x3499d90()*0.0119006);
}

double NNfunction_bb_b2b2::synapse0x34a3210() {
   return (neuron0x349a0d0()*-0.380845);
}

double NNfunction_bb_b2b2::synapse0x34a3250() {
   return (neuron0x349a410()*0.0430941);
}

double NNfunction_bb_b2b2::synapse0x34a3290() {
   return (neuron0x349a750()*-0.126246);
}

double NNfunction_bb_b2b2::synapse0x34aaba0() {
   return (neuron0x349aa90()*-0.220519);
}

double NNfunction_bb_b2b2::synapse0x34aabe0() {
   return (neuron0x349aff0()*0.190375);
}

double NNfunction_bb_b2b2::synapse0x34a33e0() {
   return (neuron0x349b210()*0.244655);
}

double NNfunction_bb_b2b2::synapse0x34a3420() {
   return (neuron0x349b550()*0.904256);
}

double NNfunction_bb_b2b2::synapse0x34a3460() {
   return (neuron0x349b890()*-0.651007);
}

double NNfunction_bb_b2b2::synapse0x34a34a0() {
   return (neuron0x349bbd0()*-0.440603);
}

double NNfunction_bb_b2b2::synapse0x34a34e0() {
   return (neuron0x349bf10()*-0.16928);
}

double NNfunction_bb_b2b2::synapse0x34a3520() {
   return (neuron0x349c250()*1.155);
}

double NNfunction_bb_b2b2::synapse0x34a38a0() {
   return (neuron0x3497690()*-0.0441924);
}

double NNfunction_bb_b2b2::synapse0x34a38e0() {
   return (neuron0x34979d0()*-0.0106047);
}

double NNfunction_bb_b2b2::synapse0x34a3920() {
   return (neuron0x3497d10()*-0.0205351);
}

double NNfunction_bb_b2b2::synapse0x34a3960() {
   return (neuron0x3498050()*2.63937);
}

double NNfunction_bb_b2b2::synapse0x34a39a0() {
   return (neuron0x3498390()*-0.0624765);
}

double NNfunction_bb_b2b2::synapse0x34a39e0() {
   return (neuron0x34986d0()*0.00672914);
}

double NNfunction_bb_b2b2::synapse0x34a3a20() {
   return (neuron0x3498a10()*-0.0126693);
}

double NNfunction_bb_b2b2::synapse0x34a3a60() {
   return (neuron0x3498d50()*-0.00266171);
}

double NNfunction_bb_b2b2::synapse0x34a3aa0() {
   return (neuron0x3499090()*-0.0133395);
}

double NNfunction_bb_b2b2::synapse0x34a3ae0() {
   return (neuron0x34993d0()*-0.00758199);
}

double NNfunction_bb_b2b2::synapse0x34a3b20() {
   return (neuron0x3499710()*-0.00914309);
}

double NNfunction_bb_b2b2::synapse0x34a3b60() {
   return (neuron0x3499a50()*-0.0135156);
}

double NNfunction_bb_b2b2::synapse0x34a3ba0() {
   return (neuron0x3499d90()*-0.0109942);
}

double NNfunction_bb_b2b2::synapse0x34a3be0() {
   return (neuron0x349a0d0()*-0.00688071);
}

double NNfunction_bb_b2b2::synapse0x34a3c20() {
   return (neuron0x349a410()*0.0112523);
}

double NNfunction_bb_b2b2::synapse0x34a3c60() {
   return (neuron0x349a750()*-0.0153944);
}

double NNfunction_bb_b2b2::synapse0x34a36f0() {
   return (neuron0x349aa90()*-0.00793635);
}

double NNfunction_bb_b2b2::synapse0x34a3730() {
   return (neuron0x349aff0()*0.00238602);
}

double NNfunction_bb_b2b2::synapse0x34a3db0() {
   return (neuron0x349b210()*-0.00766768);
}

double NNfunction_bb_b2b2::synapse0x34a3df0() {
   return (neuron0x349b550()*-0.21772);
}

double NNfunction_bb_b2b2::synapse0x34a3e30() {
   return (neuron0x349b890()*0.00232387);
}

double NNfunction_bb_b2b2::synapse0x34a3e70() {
   return (neuron0x349bbd0()*-0.0118994);
}

double NNfunction_bb_b2b2::synapse0x34a3eb0() {
   return (neuron0x349bf10()*0.000562907);
}

double NNfunction_bb_b2b2::synapse0x34a3ef0() {
   return (neuron0x349c250()*0.00839611);
}

double NNfunction_bb_b2b2::synapse0x34a40c0() {
   return (neuron0x3497690()*0.0249281);
}

double NNfunction_bb_b2b2::synapse0x34ad150() {
   return (neuron0x34979d0()*0.00894116);
}

double NNfunction_bb_b2b2::synapse0x34ad190() {
   return (neuron0x3497d10()*-0.0122291);
}

double NNfunction_bb_b2b2::synapse0x34ad1d0() {
   return (neuron0x3498050()*2.89064);
}

double NNfunction_bb_b2b2::synapse0x34ad210() {
   return (neuron0x3498390()*0.0263301);
}

double NNfunction_bb_b2b2::synapse0x34ad250() {
   return (neuron0x34986d0()*0.000191504);
}

double NNfunction_bb_b2b2::synapse0x34ad290() {
   return (neuron0x3498a10()*-0.000876969);
}

double NNfunction_bb_b2b2::synapse0x34ad2d0() {
   return (neuron0x3498d50()*0.00424363);
}

double NNfunction_bb_b2b2::synapse0x34ad310() {
   return (neuron0x3499090()*-0.00152098);
}

double NNfunction_bb_b2b2::synapse0x34ad350() {
   return (neuron0x34993d0()*0.00672904);
}

double NNfunction_bb_b2b2::synapse0x34ad390() {
   return (neuron0x3499710()*0.0101895);
}

double NNfunction_bb_b2b2::synapse0x34ad3d0() {
   return (neuron0x3499a50()*-0.0024159);
}

double NNfunction_bb_b2b2::synapse0x34ad410() {
   return (neuron0x3499d90()*0.00162305);
}

double NNfunction_bb_b2b2::synapse0x34ad450() {
   return (neuron0x349a0d0()*0.280661);
}

double NNfunction_bb_b2b2::synapse0x34ad490() {
   return (neuron0x349a410()*-0.00756921);
}

double NNfunction_bb_b2b2::synapse0x34ad4d0() {
   return (neuron0x349a750()*0.00743395);
}

double NNfunction_bb_b2b2::synapse0x34acfa0() {
   return (neuron0x349aa90()*0.0219446);
}

double NNfunction_bb_b2b2::synapse0x34acfe0() {
   return (neuron0x349aff0()*0.0016626);
}

double NNfunction_bb_b2b2::synapse0x34ad620() {
   return (neuron0x349b210()*-0.00237459);
}

double NNfunction_bb_b2b2::synapse0x34ad660() {
   return (neuron0x349b550()*0.270433);
}

double NNfunction_bb_b2b2::synapse0x34ad6a0() {
   return (neuron0x349b890()*-0.038558);
}

double NNfunction_bb_b2b2::synapse0x34ad6e0() {
   return (neuron0x349bbd0()*0.0261502);
}

double NNfunction_bb_b2b2::synapse0x34ad720() {
   return (neuron0x349bf10()*-0.00388054);
}

double NNfunction_bb_b2b2::synapse0x34ad760() {
   return (neuron0x349c250()*-0.0890684);
}

double NNfunction_bb_b2b2::synapse0x34adae0() {
   return (neuron0x3497690()*0.0726535);
}

double NNfunction_bb_b2b2::synapse0x34adb20() {
   return (neuron0x34979d0()*-0.0477811);
}

double NNfunction_bb_b2b2::synapse0x34adb60() {
   return (neuron0x3497d10()*0.0347435);
}

double NNfunction_bb_b2b2::synapse0x34adba0() {
   return (neuron0x3498050()*-0.180285);
}

double NNfunction_bb_b2b2::synapse0x34adbe0() {
   return (neuron0x3498390()*0.0937582);
}

double NNfunction_bb_b2b2::synapse0x34adc20() {
   return (neuron0x34986d0()*0.0182913);
}

double NNfunction_bb_b2b2::synapse0x34adc60() {
   return (neuron0x3498a10()*-0.0488866);
}

double NNfunction_bb_b2b2::synapse0x34adca0() {
   return (neuron0x3498d50()*0.0828239);
}

double NNfunction_bb_b2b2::synapse0x34adce0() {
   return (neuron0x3499090()*0.0127891);
}

double NNfunction_bb_b2b2::synapse0x34add20() {
   return (neuron0x34993d0()*0.0319093);
}

double NNfunction_bb_b2b2::synapse0x34add60() {
   return (neuron0x3499710()*-0.118656);
}

double NNfunction_bb_b2b2::synapse0x34adda0() {
   return (neuron0x3499a50()*0.0385354);
}

double NNfunction_bb_b2b2::synapse0x34adde0() {
   return (neuron0x3499d90()*0.0615053);
}

double NNfunction_bb_b2b2::synapse0x34ade20() {
   return (neuron0x349a0d0()*-0.255241);
}

double NNfunction_bb_b2b2::synapse0x34ade60() {
   return (neuron0x349a410()*0.203181);
}

double NNfunction_bb_b2b2::synapse0x34adea0() {
   return (neuron0x349a750()*-0.814961);
}

double NNfunction_bb_b2b2::synapse0x34ad930() {
   return (neuron0x349aa90()*0.111221);
}

double NNfunction_bb_b2b2::synapse0x34ad970() {
   return (neuron0x349aff0()*-0.00983453);
}

double NNfunction_bb_b2b2::synapse0x34adff0() {
   return (neuron0x349b210()*0.000969577);
}

double NNfunction_bb_b2b2::synapse0x34ae030() {
   return (neuron0x349b550()*0.376172);
}

double NNfunction_bb_b2b2::synapse0x34ae070() {
   return (neuron0x349b890()*0.0105422);
}

double NNfunction_bb_b2b2::synapse0x34ae0b0() {
   return (neuron0x349bbd0()*-0.0742202);
}

double NNfunction_bb_b2b2::synapse0x34ae0f0() {
   return (neuron0x349bf10()*0.0192593);
}

double NNfunction_bb_b2b2::synapse0x34ae130() {
   return (neuron0x349c250()*0.099847);
}

double NNfunction_bb_b2b2::synapse0x34ae4b0() {
   return (neuron0x3497690()*-0.385722);
}

double NNfunction_bb_b2b2::synapse0x34ae4f0() {
   return (neuron0x34979d0()*-0.022145);
}

double NNfunction_bb_b2b2::synapse0x34ae530() {
   return (neuron0x3497d10()*-0.0291984);
}

double NNfunction_bb_b2b2::synapse0x34ae570() {
   return (neuron0x3498050()*0.0102811);
}

double NNfunction_bb_b2b2::synapse0x34ae5b0() {
   return (neuron0x3498390()*0.00363046);
}

double NNfunction_bb_b2b2::synapse0x34ae5f0() {
   return (neuron0x34986d0()*-0.00783235);
}

double NNfunction_bb_b2b2::synapse0x34ae630() {
   return (neuron0x3498a10()*0.00392557);
}

double NNfunction_bb_b2b2::synapse0x34ae670() {
   return (neuron0x3498d50()*-0.000101781);
}

double NNfunction_bb_b2b2::synapse0x34ae6b0() {
   return (neuron0x3499090()*-0.014458);
}

double NNfunction_bb_b2b2::synapse0x34ae6f0() {
   return (neuron0x34993d0()*0.0139186);
}

double NNfunction_bb_b2b2::synapse0x34ae730() {
   return (neuron0x3499710()*-0.00128347);
}

double NNfunction_bb_b2b2::synapse0x34ae770() {
   return (neuron0x3499a50()*0.000576539);
}

double NNfunction_bb_b2b2::synapse0x34ae7b0() {
   return (neuron0x3499d90()*0.0176909);
}

double NNfunction_bb_b2b2::synapse0x34ae7f0() {
   return (neuron0x349a0d0()*-0.344556);
}

double NNfunction_bb_b2b2::synapse0x34ae830() {
   return (neuron0x349a410()*-0.00486372);
}

double NNfunction_bb_b2b2::synapse0x34ae870() {
   return (neuron0x349a750()*0.00491197);
}

double NNfunction_bb_b2b2::synapse0x34ae300() {
   return (neuron0x349aa90()*0.00224519);
}

double NNfunction_bb_b2b2::synapse0x34ae340() {
   return (neuron0x349aff0()*-0.00417429);
}

double NNfunction_bb_b2b2::synapse0x34ae9c0() {
   return (neuron0x349b210()*0.00310448);
}

double NNfunction_bb_b2b2::synapse0x34aea00() {
   return (neuron0x349b550()*0.350342);
}

double NNfunction_bb_b2b2::synapse0x34aea40() {
   return (neuron0x349b890()*-0.0367466);
}

double NNfunction_bb_b2b2::synapse0x34aea80() {
   return (neuron0x349bbd0()*-0.0854341);
}

double NNfunction_bb_b2b2::synapse0x34aeac0() {
   return (neuron0x349bf10()*-0.0168849);
}

double NNfunction_bb_b2b2::synapse0x34aeb00() {
   return (neuron0x349c250()*3.2497);
}

double NNfunction_bb_b2b2::synapse0x34aee80() {
   return (neuron0x3497690()*-0.0296775);
}

double NNfunction_bb_b2b2::synapse0x34aeec0() {
   return (neuron0x34979d0()*-0.00446043);
}

double NNfunction_bb_b2b2::synapse0x34aef00() {
   return (neuron0x3497d10()*-0.00490594);
}

double NNfunction_bb_b2b2::synapse0x34aef40() {
   return (neuron0x3498050()*-2.43578);
}

double NNfunction_bb_b2b2::synapse0x34aef80() {
   return (neuron0x3498390()*-0.0158885);
}

double NNfunction_bb_b2b2::synapse0x34aefc0() {
   return (neuron0x34986d0()*-0.00197797);
}

double NNfunction_bb_b2b2::synapse0x34af000() {
   return (neuron0x3498a10()*-0.0107941);
}

double NNfunction_bb_b2b2::synapse0x34af040() {
   return (neuron0x3498d50()*0.00190727);
}

double NNfunction_bb_b2b2::synapse0x34af080() {
   return (neuron0x3499090()*-0.0122376);
}

double NNfunction_bb_b2b2::synapse0x34af0c0() {
   return (neuron0x34993d0()*0.000864273);
}

double NNfunction_bb_b2b2::synapse0x34af100() {
   return (neuron0x3499710()*-0.00225605);
}

double NNfunction_bb_b2b2::synapse0x34af140() {
   return (neuron0x3499a50()*-0.0077428);
}

double NNfunction_bb_b2b2::synapse0x34af180() {
   return (neuron0x3499d90()*-0.011219);
}

double NNfunction_bb_b2b2::synapse0x34af1c0() {
   return (neuron0x349a0d0()*0.0392828);
}

double NNfunction_bb_b2b2::synapse0x34af200() {
   return (neuron0x349a410()*-0.00581904);
}

double NNfunction_bb_b2b2::synapse0x34af240() {
   return (neuron0x349a750()*-0.0132957);
}

double NNfunction_bb_b2b2::synapse0x34aecd0() {
   return (neuron0x349aa90()*0.0149234);
}

double NNfunction_bb_b2b2::synapse0x34aed10() {
   return (neuron0x349aff0()*-0.00257571);
}

double NNfunction_bb_b2b2::synapse0x34af390() {
   return (neuron0x349b210()*-0.0041009);
}

double NNfunction_bb_b2b2::synapse0x34af3d0() {
   return (neuron0x349b550()*-0.114763);
}

double NNfunction_bb_b2b2::synapse0x34af410() {
   return (neuron0x349b890()*0.00818504);
}

double NNfunction_bb_b2b2::synapse0x34af450() {
   return (neuron0x349bbd0()*0.0114531);
}

double NNfunction_bb_b2b2::synapse0x34af490() {
   return (neuron0x349bf10()*0.00328126);
}

double NNfunction_bb_b2b2::synapse0x34af4d0() {
   return (neuron0x349c250()*0.0919327);
}

double NNfunction_bb_b2b2::synapse0x34af850() {
   return (neuron0x3497690()*0.0727092);
}

double NNfunction_bb_b2b2::synapse0x34af890() {
   return (neuron0x34979d0()*0.0205792);
}

double NNfunction_bb_b2b2::synapse0x34af8d0() {
   return (neuron0x3497d10()*0.00740611);
}

double NNfunction_bb_b2b2::synapse0x34af910() {
   return (neuron0x3498050()*0.0445262);
}

double NNfunction_bb_b2b2::synapse0x34af950() {
   return (neuron0x3498390()*0.691442);
}

double NNfunction_bb_b2b2::synapse0x34af990() {
   return (neuron0x34986d0()*0.00185249);
}

double NNfunction_bb_b2b2::synapse0x34af9d0() {
   return (neuron0x3498a10()*-0.0358466);
}

double NNfunction_bb_b2b2::synapse0x34afa10() {
   return (neuron0x3498d50()*-0.00653702);
}

double NNfunction_bb_b2b2::synapse0x34afa50() {
   return (neuron0x3499090()*-0.00454789);
}

double NNfunction_bb_b2b2::synapse0x34afa90() {
   return (neuron0x34993d0()*-0.0160798);
}

double NNfunction_bb_b2b2::synapse0x34afad0() {
   return (neuron0x3499710()*0.0121876);
}

double NNfunction_bb_b2b2::synapse0x34afb10() {
   return (neuron0x3499a50()*0.000648693);
}

double NNfunction_bb_b2b2::synapse0x34afb50() {
   return (neuron0x3499d90()*-0.0157946);
}

double NNfunction_bb_b2b2::synapse0x34afb90() {
   return (neuron0x349a0d0()*0.117487);
}

double NNfunction_bb_b2b2::synapse0x34afbd0() {
   return (neuron0x349a410()*0.018081);
}

double NNfunction_bb_b2b2::synapse0x34afc10() {
   return (neuron0x349a750()*-0.0256351);
}

double NNfunction_bb_b2b2::synapse0x34af6a0() {
   return (neuron0x349aa90()*-0.00297234);
}

double NNfunction_bb_b2b2::synapse0x34af6e0() {
   return (neuron0x349aff0()*0.00603963);
}

double NNfunction_bb_b2b2::synapse0x34afd60() {
   return (neuron0x349b210()*0.0169929);
}

double NNfunction_bb_b2b2::synapse0x34afda0() {
   return (neuron0x349b550()*0.00142814);
}

double NNfunction_bb_b2b2::synapse0x34afde0() {
   return (neuron0x349b890()*-0.00316449);
}

double NNfunction_bb_b2b2::synapse0x34afe20() {
   return (neuron0x349bbd0()*0.946316);
}

double NNfunction_bb_b2b2::synapse0x34afe60() {
   return (neuron0x349bf10()*-0.00674615);
}

double NNfunction_bb_b2b2::synapse0x34afea0() {
   return (neuron0x349c250()*0.226809);
}

double NNfunction_bb_b2b2::synapse0x34b0220() {
   return (neuron0x3497690()*0.0324838);
}

double NNfunction_bb_b2b2::synapse0x34b0260() {
   return (neuron0x34979d0()*0.0399184);
}

double NNfunction_bb_b2b2::synapse0x34b02a0() {
   return (neuron0x3497d10()*0.00126474);
}

double NNfunction_bb_b2b2::synapse0x34b02e0() {
   return (neuron0x3498050()*0.0438685);
}

double NNfunction_bb_b2b2::synapse0x34b0320() {
   return (neuron0x3498390()*0.0149644);
}

double NNfunction_bb_b2b2::synapse0x34b0360() {
   return (neuron0x34986d0()*0.011171);
}

double NNfunction_bb_b2b2::synapse0x34b03a0() {
   return (neuron0x3498a10()*-0.012983);
}

double NNfunction_bb_b2b2::synapse0x34b03e0() {
   return (neuron0x3498d50()*0.0236761);
}

double NNfunction_bb_b2b2::synapse0x34b0420() {
   return (neuron0x3499090()*0.0108249);
}

double NNfunction_bb_b2b2::synapse0x34b0460() {
   return (neuron0x34993d0()*-0.0138471);
}

double NNfunction_bb_b2b2::synapse0x34b04a0() {
   return (neuron0x3499710()*0.0154779);
}

double NNfunction_bb_b2b2::synapse0x34b04e0() {
   return (neuron0x3499a50()*-0.0190809);
}

double NNfunction_bb_b2b2::synapse0x34b0520() {
   return (neuron0x3499d90()*0.0147702);
}

double NNfunction_bb_b2b2::synapse0x34b0560() {
   return (neuron0x349a0d0()*-0.219613);
}

double NNfunction_bb_b2b2::synapse0x34b05a0() {
   return (neuron0x349a410()*0.017201);
}

double NNfunction_bb_b2b2::synapse0x34b05e0() {
   return (neuron0x349a750()*-0.0263112);
}

double NNfunction_bb_b2b2::synapse0x34b0070() {
   return (neuron0x349aa90()*0.317709);
}

double NNfunction_bb_b2b2::synapse0x34b00b0() {
   return (neuron0x349aff0()*0.0077491);
}

double NNfunction_bb_b2b2::synapse0x34b0730() {
   return (neuron0x349b210()*-0.0113);
}

double NNfunction_bb_b2b2::synapse0x34b0770() {
   return (neuron0x349b550()*0.235893);
}

double NNfunction_bb_b2b2::synapse0x34b07b0() {
   return (neuron0x349b890()*-0.552896);
}

double NNfunction_bb_b2b2::synapse0x34b07f0() {
   return (neuron0x349bbd0()*0.0154662);
}

double NNfunction_bb_b2b2::synapse0x34b0830() {
   return (neuron0x349bf10()*-0.0219793);
}

double NNfunction_bb_b2b2::synapse0x34b0870() {
   return (neuron0x349c250()*0.0179601);
}

double NNfunction_bb_b2b2::synapse0x34b0bf0() {
   return (neuron0x3497690()*-0.124006);
}

double NNfunction_bb_b2b2::synapse0x34b0c30() {
   return (neuron0x34979d0()*0.0158236);
}

double NNfunction_bb_b2b2::synapse0x34b0c70() {
   return (neuron0x3497d10()*-0.305078);
}

double NNfunction_bb_b2b2::synapse0x34b0cb0() {
   return (neuron0x3498050()*-0.073378);
}

double NNfunction_bb_b2b2::synapse0x34b0cf0() {
   return (neuron0x3498390()*-0.0685458);
}

double NNfunction_bb_b2b2::synapse0x34b0d30() {
   return (neuron0x34986d0()*-0.0246416);
}

double NNfunction_bb_b2b2::synapse0x34b0d70() {
   return (neuron0x3498a10()*0.0200623);
}

double NNfunction_bb_b2b2::synapse0x34b0db0() {
   return (neuron0x3498d50()*-0.0141192);
}

double NNfunction_bb_b2b2::synapse0x34b0df0() {
   return (neuron0x3499090()*-0.0308198);
}

double NNfunction_bb_b2b2::synapse0x34b0e30() {
   return (neuron0x34993d0()*-0.0193885);
}

double NNfunction_bb_b2b2::synapse0x34b0e70() {
   return (neuron0x3499710()*-0.00332486);
}

double NNfunction_bb_b2b2::synapse0x34b0eb0() {
   return (neuron0x3499a50()*0.0107801);
}

double NNfunction_bb_b2b2::synapse0x34b0ef0() {
   return (neuron0x3499d90()*0.00761424);
}

double NNfunction_bb_b2b2::synapse0x34b0f30() {
   return (neuron0x349a0d0()*2.21239);
}

double NNfunction_bb_b2b2::synapse0x34b0f70() {
   return (neuron0x349a410()*0.0128266);
}

double NNfunction_bb_b2b2::synapse0x34b0fb0() {
   return (neuron0x349a750()*0.0476634);
}

double NNfunction_bb_b2b2::synapse0x34b0a40() {
   return (neuron0x349aa90()*0.098635);
}

double NNfunction_bb_b2b2::synapse0x34b0a80() {
   return (neuron0x349aff0()*-0.00273286);
}

double NNfunction_bb_b2b2::synapse0x34b1100() {
   return (neuron0x349b210()*-0.00494812);
}

double NNfunction_bb_b2b2::synapse0x34b1140() {
   return (neuron0x349b550()*-2.43065);
}

double NNfunction_bb_b2b2::synapse0x34b1180() {
   return (neuron0x349b890()*-0.0149364);
}

double NNfunction_bb_b2b2::synapse0x34b11c0() {
   return (neuron0x349bbd0()*-0.0105334);
}

double NNfunction_bb_b2b2::synapse0x34b1200() {
   return (neuron0x349bf10()*0.0118255);
}

double NNfunction_bb_b2b2::synapse0x34b1240() {
   return (neuron0x349c250()*0.0989025);
}

double NNfunction_bb_b2b2::synapse0x34b15c0() {
   return (neuron0x3497690()*0.0787829);
}

double NNfunction_bb_b2b2::synapse0x34b1600() {
   return (neuron0x34979d0()*-0.00897894);
}

double NNfunction_bb_b2b2::synapse0x34b1640() {
   return (neuron0x3497d10()*-0.492395);
}

double NNfunction_bb_b2b2::synapse0x34b1680() {
   return (neuron0x3498050()*-0.00942183);
}

double NNfunction_bb_b2b2::synapse0x34b16c0() {
   return (neuron0x3498390()*0.043504);
}

double NNfunction_bb_b2b2::synapse0x34b1700() {
   return (neuron0x34986d0()*0.0156724);
}

double NNfunction_bb_b2b2::synapse0x34b1740() {
   return (neuron0x3498a10()*-0.0305519);
}

double NNfunction_bb_b2b2::synapse0x34b1780() {
   return (neuron0x3498d50()*-0.00472132);
}

double NNfunction_bb_b2b2::synapse0x34b17c0() {
   return (neuron0x3499090()*0.00997576);
}

double NNfunction_bb_b2b2::synapse0x34b1800() {
   return (neuron0x34993d0()*0.000636388);
}

double NNfunction_bb_b2b2::synapse0x34b1840() {
   return (neuron0x3499710()*0.0453651);
}

double NNfunction_bb_b2b2::synapse0x34b1880() {
   return (neuron0x3499a50()*0.0387881);
}

double NNfunction_bb_b2b2::synapse0x34b18c0() {
   return (neuron0x3499d90()*0.0381677);
}

double NNfunction_bb_b2b2::synapse0x34b1900() {
   return (neuron0x349a0d0()*-1.37423);
}

double NNfunction_bb_b2b2::synapse0x34b1940() {
   return (neuron0x349a410()*0.0220012);
}

double NNfunction_bb_b2b2::synapse0x34b1980() {
   return (neuron0x349a750()*-0.000427976);
}

double NNfunction_bb_b2b2::synapse0x34b1410() {
   return (neuron0x349aa90()*-0.132343);
}

double NNfunction_bb_b2b2::synapse0x34b1450() {
   return (neuron0x349aff0()*0.0213533);
}

double NNfunction_bb_b2b2::synapse0x34b1ad0() {
   return (neuron0x349b210()*0.017475);
}

double NNfunction_bb_b2b2::synapse0x34b1b10() {
   return (neuron0x349b550()*2.0844);
}

double NNfunction_bb_b2b2::synapse0x34b1b50() {
   return (neuron0x349b890()*0.00755829);
}

double NNfunction_bb_b2b2::synapse0x34b1b90() {
   return (neuron0x349bbd0()*0.0248012);
}

double NNfunction_bb_b2b2::synapse0x34b1bd0() {
   return (neuron0x349bf10()*0.0222632);
}

double NNfunction_bb_b2b2::synapse0x34b1c10() {
   return (neuron0x349c250()*-0.0921032);
}

double NNfunction_bb_b2b2::synapse0x34b1f90() {
   return (neuron0x3497690()*0.00925819);
}

double NNfunction_bb_b2b2::synapse0x34a6560() {
   return (neuron0x34979d0()*0.00471824);
}

double NNfunction_bb_b2b2::synapse0x34a65a0() {
   return (neuron0x3497d10()*0.0363213);
}

double NNfunction_bb_b2b2::synapse0x34a65e0() {
   return (neuron0x3498050()*-0.0663618);
}

double NNfunction_bb_b2b2::synapse0x34a6830() {
   return (neuron0x3498390()*-0.0127164);
}

double NNfunction_bb_b2b2::synapse0x34a6870() {
   return (neuron0x34986d0()*-0.00356198);
}

double NNfunction_bb_b2b2::synapse0x34a68b0() {
   return (neuron0x3498a10()*0.0010395);
}

double NNfunction_bb_b2b2::synapse0x34a6b00() {
   return (neuron0x3498d50()*-0.00859994);
}

double NNfunction_bb_b2b2::synapse0x34a6b40() {
   return (neuron0x3499090()*-0.0134043);
}

double NNfunction_bb_b2b2::synapse0x34a6d90() {
   return (neuron0x34993d0()*-0.000657406);
}

double NNfunction_bb_b2b2::synapse0x34a6dd0() {
   return (neuron0x3499710()*-0.013661);
}

double NNfunction_bb_b2b2::synapse0x34a6e10() {
   return (neuron0x3499a50()*0.0183555);
}

double NNfunction_bb_b2b2::synapse0x34a7060() {
   return (neuron0x3499d90()*0.0136062);
}

double NNfunction_bb_b2b2::synapse0x34a70a0() {
   return (neuron0x349a0d0()*-1.12666);
}

double NNfunction_bb_b2b2::synapse0x34a72f0() {
   return (neuron0x349a410()*0.0133212);
}

double NNfunction_bb_b2b2::synapse0x34a7330() {
   return (neuron0x349a750()*0.00704787);
}

double NNfunction_bb_b2b2::synapse0x34b1de0() {
   return (neuron0x349aa90()*-0.0159994);
}

double NNfunction_bb_b2b2::synapse0x34b1e20() {
   return (neuron0x349aff0()*0.0062394);
}

double NNfunction_bb_b2b2::synapse0x34a7480() {
   return (neuron0x349b210()*0.0109531);
}

double NNfunction_bb_b2b2::synapse0x34a7990() {
   return (neuron0x349b550()*-0.683101);
}

double NNfunction_bb_b2b2::synapse0x34a79d0() {
   return (neuron0x349b890()*-0.00872382);
}

double NNfunction_bb_b2b2::synapse0x34a7a10() {
   return (neuron0x349bbd0()*-0.0244722);
}

double NNfunction_bb_b2b2::synapse0x34a7c60() {
   return (neuron0x349bf10()*-0.0013418);
}

double NNfunction_bb_b2b2::synapse0x34a7ca0() {
   return (neuron0x349c250()*0.096261);
}

double NNfunction_bb_b2b2::synapse0x34a7550() {
   return (neuron0x3497690()*-0.11996);
}

double NNfunction_bb_b2b2::synapse0x34a7590() {
   return (neuron0x34979d0()*0.191469);
}

double NNfunction_bb_b2b2::synapse0x34a75d0() {
   return (neuron0x3497d10()*0.246712);
}

double NNfunction_bb_b2b2::synapse0x34a7610() {
   return (neuron0x3498050()*0.237295);
}

double NNfunction_bb_b2b2::synapse0x34a7f90() {
   return (neuron0x3498390()*-0.261383);
}

double NNfunction_bb_b2b2::synapse0x34b42e0() {
   return (neuron0x34986d0()*0.136856);
}

double NNfunction_bb_b2b2::synapse0x34b4320() {
   return (neuron0x3498a10()*0.32076);
}

double NNfunction_bb_b2b2::synapse0x34b4360() {
   return (neuron0x3498d50()*0.230907);
}

double NNfunction_bb_b2b2::synapse0x34b43a0() {
   return (neuron0x3499090()*-0.0479443);
}

double NNfunction_bb_b2b2::synapse0x34b43e0() {
   return (neuron0x34993d0()*0.091806);
}

double NNfunction_bb_b2b2::synapse0x34b4420() {
   return (neuron0x3499710()*-0.0360467);
}

double NNfunction_bb_b2b2::synapse0x34b4460() {
   return (neuron0x3499a50()*-0.0573866);
}

double NNfunction_bb_b2b2::synapse0x34b44a0() {
   return (neuron0x3499d90()*0.0191019);
}

double NNfunction_bb_b2b2::synapse0x34b44e0() {
   return (neuron0x349a0d0()*0.366451);
}

double NNfunction_bb_b2b2::synapse0x34b4520() {
   return (neuron0x349a410()*-0.236774);
}

double NNfunction_bb_b2b2::synapse0x34b4560() {
   return (neuron0x349a750()*-0.0829242);
}

double NNfunction_bb_b2b2::synapse0x34a7e70() {
   return (neuron0x349aa90()*-0.145247);
}

double NNfunction_bb_b2b2::synapse0x34a7eb0() {
   return (neuron0x349aff0()*0.00120347);
}

double NNfunction_bb_b2b2::synapse0x34b46b0() {
   return (neuron0x349b210()*0.0115407);
}

double NNfunction_bb_b2b2::synapse0x34b46f0() {
   return (neuron0x349b550()*0.267059);
}

double NNfunction_bb_b2b2::synapse0x34b4730() {
   return (neuron0x349b890()*0.241049);
}

double NNfunction_bb_b2b2::synapse0x34b4770() {
   return (neuron0x349bbd0()*-0.211971);
}

double NNfunction_bb_b2b2::synapse0x34b47b0() {
   return (neuron0x349bf10()*0.029306);
}

double NNfunction_bb_b2b2::synapse0x34b47f0() {
   return (neuron0x349c250()*-0.120642);
}

double NNfunction_bb_b2b2::synapse0x34b4b70() {
   return (neuron0x3497690()*-0.583388);
}

double NNfunction_bb_b2b2::synapse0x34b4bb0() {
   return (neuron0x34979d0()*-0.056773);
}

double NNfunction_bb_b2b2::synapse0x34b4bf0() {
   return (neuron0x3497d10()*-0.0211591);
}

double NNfunction_bb_b2b2::synapse0x34b4c30() {
   return (neuron0x3498050()*-0.044353);
}

double NNfunction_bb_b2b2::synapse0x34b4c70() {
   return (neuron0x3498390()*0.190805);
}

double NNfunction_bb_b2b2::synapse0x34b4cb0() {
   return (neuron0x34986d0()*-0.0322932);
}

double NNfunction_bb_b2b2::synapse0x34b4cf0() {
   return (neuron0x3498a10()*0.154036);
}

double NNfunction_bb_b2b2::synapse0x34b4d30() {
   return (neuron0x3498d50()*0.0190263);
}

double NNfunction_bb_b2b2::synapse0x34b4d70() {
   return (neuron0x3499090()*0.0290893);
}

double NNfunction_bb_b2b2::synapse0x34b4db0() {
   return (neuron0x34993d0()*-0.0392569);
}

double NNfunction_bb_b2b2::synapse0x34b4df0() {
   return (neuron0x3499710()*0.00206091);
}

double NNfunction_bb_b2b2::synapse0x34b4e30() {
   return (neuron0x3499a50()*0.0127547);
}

double NNfunction_bb_b2b2::synapse0x34b4e70() {
   return (neuron0x3499d90()*-0.00101127);
}

double NNfunction_bb_b2b2::synapse0x34b4eb0() {
   return (neuron0x349a0d0()*-0.00749719);
}

double NNfunction_bb_b2b2::synapse0x34b4ef0() {
   return (neuron0x349a410()*0.109954);
}

double NNfunction_bb_b2b2::synapse0x34b4f30() {
   return (neuron0x349a750()*0.0475624);
}

double NNfunction_bb_b2b2::synapse0x34b49c0() {
   return (neuron0x349aa90()*-0.0736802);
}

double NNfunction_bb_b2b2::synapse0x34b4a00() {
   return (neuron0x349aff0()*0.0309383);
}

double NNfunction_bb_b2b2::synapse0x34b5080() {
   return (neuron0x349b210()*0.00891217);
}

double NNfunction_bb_b2b2::synapse0x34b50c0() {
   return (neuron0x349b550()*-0.174643);
}

double NNfunction_bb_b2b2::synapse0x34b5100() {
   return (neuron0x349b890()*-0.0381169);
}

double NNfunction_bb_b2b2::synapse0x34b5140() {
   return (neuron0x349bbd0()*0.264377);
}

double NNfunction_bb_b2b2::synapse0x34b5180() {
   return (neuron0x349bf10()*0.0137285);
}

double NNfunction_bb_b2b2::synapse0x34b51c0() {
   return (neuron0x349c250()*-0.0959113);
}

double NNfunction_bb_b2b2::synapse0x34b5540() {
   return (neuron0x3497690()*-0.0126182);
}

double NNfunction_bb_b2b2::synapse0x34b5580() {
   return (neuron0x34979d0()*-0.00154761);
}

double NNfunction_bb_b2b2::synapse0x34b55c0() {
   return (neuron0x3497d10()*0.0951526);
}

double NNfunction_bb_b2b2::synapse0x34b5600() {
   return (neuron0x3498050()*0.0320359);
}

double NNfunction_bb_b2b2::synapse0x34b5640() {
   return (neuron0x3498390()*0.0516701);
}

double NNfunction_bb_b2b2::synapse0x34b5680() {
   return (neuron0x34986d0()*0.0135634);
}

double NNfunction_bb_b2b2::synapse0x34b56c0() {
   return (neuron0x3498a10()*-0.0195592);
}

double NNfunction_bb_b2b2::synapse0x34b5700() {
   return (neuron0x3498d50()*0.00338317);
}

double NNfunction_bb_b2b2::synapse0x34b5740() {
   return (neuron0x3499090()*0.018006);
}

double NNfunction_bb_b2b2::synapse0x34b5780() {
   return (neuron0x34993d0()*0.00295809);
}

double NNfunction_bb_b2b2::synapse0x34b57c0() {
   return (neuron0x3499710()*7.50163e-06);
}

double NNfunction_bb_b2b2::synapse0x34b5800() {
   return (neuron0x3499a50()*-0.00652425);
}

double NNfunction_bb_b2b2::synapse0x34b5840() {
   return (neuron0x3499d90()*0.0123117);
}

double NNfunction_bb_b2b2::synapse0x34b5880() {
   return (neuron0x349a0d0()*-4.21653);
}

double NNfunction_bb_b2b2::synapse0x34b58c0() {
   return (neuron0x349a410()*0.00173164);
}

double NNfunction_bb_b2b2::synapse0x34b5900() {
   return (neuron0x349a750()*0.0111252);
}

double NNfunction_bb_b2b2::synapse0x34b5390() {
   return (neuron0x349aa90()*-0.0422756);
}

double NNfunction_bb_b2b2::synapse0x34b53d0() {
   return (neuron0x349aff0()*-0.00801446);
}

double NNfunction_bb_b2b2::synapse0x34b5a50() {
   return (neuron0x349b210()*0.00485038);
}

double NNfunction_bb_b2b2::synapse0x34b5a90() {
   return (neuron0x349b550()*3.92221);
}

double NNfunction_bb_b2b2::synapse0x34b5ad0() {
   return (neuron0x349b890()*-0.00593396);
}

double NNfunction_bb_b2b2::synapse0x34b5b10() {
   return (neuron0x349bbd0()*-0.0221154);
}

double NNfunction_bb_b2b2::synapse0x34b5b50() {
   return (neuron0x349bf10()*0.0010255);
}

double NNfunction_bb_b2b2::synapse0x34b5b90() {
   return (neuron0x349c250()*0.088009);
}

double NNfunction_bb_b2b2::synapse0x34b5f10() {
   return (neuron0x3497690()*0.0143343);
}

double NNfunction_bb_b2b2::synapse0x34b5f50() {
   return (neuron0x34979d0()*-0.000652405);
}

double NNfunction_bb_b2b2::synapse0x34b5f90() {
   return (neuron0x3497d10()*0.022966);
}

double NNfunction_bb_b2b2::synapse0x34b5fd0() {
   return (neuron0x3498050()*0.00487217);
}

double NNfunction_bb_b2b2::synapse0x34b6010() {
   return (neuron0x3498390()*0.00907552);
}

double NNfunction_bb_b2b2::synapse0x34b6050() {
   return (neuron0x34986d0()*-0.00287574);
}

double NNfunction_bb_b2b2::synapse0x34b6090() {
   return (neuron0x3498a10()*0.001086);
}

double NNfunction_bb_b2b2::synapse0x34b60d0() {
   return (neuron0x3498d50()*-0.00108194);
}

double NNfunction_bb_b2b2::synapse0x34b6110() {
   return (neuron0x3499090()*0.0152415);
}

double NNfunction_bb_b2b2::synapse0x34b6150() {
   return (neuron0x34993d0()*0.0118642);
}

double NNfunction_bb_b2b2::synapse0x34b6190() {
   return (neuron0x3499710()*-0.00316107);
}

double NNfunction_bb_b2b2::synapse0x34b61d0() {
   return (neuron0x3499a50()*0.00165025);
}

double NNfunction_bb_b2b2::synapse0x34b6210() {
   return (neuron0x3499d90()*-0.00153068);
}

double NNfunction_bb_b2b2::synapse0x34b6250() {
   return (neuron0x349a0d0()*-0.71206);
}

double NNfunction_bb_b2b2::synapse0x34b6290() {
   return (neuron0x349a410()*0.00108174);
}

double NNfunction_bb_b2b2::synapse0x34b62d0() {
   return (neuron0x349a750()*-0.00451174);
}

double NNfunction_bb_b2b2::synapse0x34b5d60() {
   return (neuron0x349aa90()*-0.0442119);
}

double NNfunction_bb_b2b2::synapse0x34b5da0() {
   return (neuron0x349aff0()*-0.00218567);
}

double NNfunction_bb_b2b2::synapse0x34b6420() {
   return (neuron0x349b210()*-0.000113786);
}

double NNfunction_bb_b2b2::synapse0x34b6460() {
   return (neuron0x349b550()*1.1944);
}

double NNfunction_bb_b2b2::synapse0x34b64a0() {
   return (neuron0x349b890()*0.003341);
}

double NNfunction_bb_b2b2::synapse0x34b64e0() {
   return (neuron0x349bbd0()*-0.00255551);
}

double NNfunction_bb_b2b2::synapse0x34b6520() {
   return (neuron0x349bf10()*-0.000542979);
}

double NNfunction_bb_b2b2::synapse0x34b6560() {
   return (neuron0x349c250()*-0.020775);
}

double NNfunction_bb_b2b2::synapse0x34b68e0() {
   return (neuron0x3497690()*0.10851);
}

double NNfunction_bb_b2b2::synapse0x34b6920() {
   return (neuron0x34979d0()*0.00943984);
}

double NNfunction_bb_b2b2::synapse0x34b6960() {
   return (neuron0x3497d10()*-0.0411333);
}

double NNfunction_bb_b2b2::synapse0x34b69a0() {
   return (neuron0x3498050()*0.0227234);
}

double NNfunction_bb_b2b2::synapse0x34b69e0() {
   return (neuron0x3498390()*0.154337);
}

double NNfunction_bb_b2b2::synapse0x34b6a20() {
   return (neuron0x34986d0()*0.00806921);
}

double NNfunction_bb_b2b2::synapse0x34b6a60() {
   return (neuron0x3498a10()*-0.00277515);
}

double NNfunction_bb_b2b2::synapse0x34b6aa0() {
   return (neuron0x3498d50()*0.017471);
}

double NNfunction_bb_b2b2::synapse0x34b6ae0() {
   return (neuron0x3499090()*-0.0314645);
}

double NNfunction_bb_b2b2::synapse0x34b6b20() {
   return (neuron0x34993d0()*0.248641);
}

double NNfunction_bb_b2b2::synapse0x34b6b60() {
   return (neuron0x3499710()*-0.0899526);
}

double NNfunction_bb_b2b2::synapse0x34b6ba0() {
   return (neuron0x3499a50()*0.0895086);
}

double NNfunction_bb_b2b2::synapse0x34b6be0() {
   return (neuron0x3499d90()*0.0347503);
}

double NNfunction_bb_b2b2::synapse0x34b6c20() {
   return (neuron0x349a0d0()*0.649847);
}

double NNfunction_bb_b2b2::synapse0x34b6c60() {
   return (neuron0x349a410()*0.0203875);
}

double NNfunction_bb_b2b2::synapse0x34b6ca0() {
   return (neuron0x349a750()*-0.0192553);
}

double NNfunction_bb_b2b2::synapse0x34b6730() {
   return (neuron0x349aa90()*0.0890233);
}

double NNfunction_bb_b2b2::synapse0x34b6770() {
   return (neuron0x349aff0()*-0.00536082);
}

double NNfunction_bb_b2b2::synapse0x34b6df0() {
   return (neuron0x349b210()*0.0393099);
}

double NNfunction_bb_b2b2::synapse0x34b6e30() {
   return (neuron0x349b550()*0.747926);
}

double NNfunction_bb_b2b2::synapse0x34b6e70() {
   return (neuron0x349b890()*0.0199008);
}

double NNfunction_bb_b2b2::synapse0x34b6eb0() {
   return (neuron0x349bbd0()*-0.0261525);
}

double NNfunction_bb_b2b2::synapse0x34b6ef0() {
   return (neuron0x349bf10()*0.00894615);
}

double NNfunction_bb_b2b2::synapse0x34b6f30() {
   return (neuron0x349c250()*-0.0247043);
}

double NNfunction_bb_b2b2::synapse0x34b72b0() {
   return (neuron0x3497690()*0.582474);
}

double NNfunction_bb_b2b2::synapse0x34b72f0() {
   return (neuron0x34979d0()*-0.177789);
}

double NNfunction_bb_b2b2::synapse0x34b7330() {
   return (neuron0x3497d10()*0.0420746);
}

double NNfunction_bb_b2b2::synapse0x34b7370() {
   return (neuron0x3498050()*-0.0396507);
}

double NNfunction_bb_b2b2::synapse0x34b73b0() {
   return (neuron0x3498390()*0.0129278);
}

double NNfunction_bb_b2b2::synapse0x34b73f0() {
   return (neuron0x34986d0()*0.0113655);
}

double NNfunction_bb_b2b2::synapse0x34b7430() {
   return (neuron0x3498a10()*0.0777995);
}

double NNfunction_bb_b2b2::synapse0x34b7470() {
   return (neuron0x3498d50()*0.498617);
}

double NNfunction_bb_b2b2::synapse0x34b74b0() {
   return (neuron0x3499090()*-0.0208026);
}

double NNfunction_bb_b2b2::synapse0x34b74f0() {
   return (neuron0x34993d0()*0.0640878);
}

double NNfunction_bb_b2b2::synapse0x34b7530() {
   return (neuron0x3499710()*0.0472419);
}

double NNfunction_bb_b2b2::synapse0x34b7570() {
   return (neuron0x3499a50()*-0.0363564);
}

double NNfunction_bb_b2b2::synapse0x34b75b0() {
   return (neuron0x3499d90()*-0.0345305);
}

double NNfunction_bb_b2b2::synapse0x34b75f0() {
   return (neuron0x349a0d0()*-0.587984);
}

double NNfunction_bb_b2b2::synapse0x34b7630() {
   return (neuron0x349a410()*-0.0836808);
}

double NNfunction_bb_b2b2::synapse0x34b7670() {
   return (neuron0x349a750()*0.0413801);
}

double NNfunction_bb_b2b2::synapse0x34b7100() {
   return (neuron0x349aa90()*0.142447);
}

double NNfunction_bb_b2b2::synapse0x34b7140() {
   return (neuron0x349aff0()*0.0267358);
}

double NNfunction_bb_b2b2::synapse0x34b77c0() {
   return (neuron0x349b210()*-0.00174725);
}

double NNfunction_bb_b2b2::synapse0x34b7800() {
   return (neuron0x349b550()*0.233346);
}

double NNfunction_bb_b2b2::synapse0x34b7840() {
   return (neuron0x349b890()*-0.0711465);
}

double NNfunction_bb_b2b2::synapse0x34b7880() {
   return (neuron0x349bbd0()*0.45301);
}

double NNfunction_bb_b2b2::synapse0x34b78c0() {
   return (neuron0x349bf10()*0.0525855);
}

double NNfunction_bb_b2b2::synapse0x34b7900() {
   return (neuron0x349c250()*0.0304761);
}

double NNfunction_bb_b2b2::synapse0x34b7c80() {
   return (neuron0x3497690()*0.334724);
}

double NNfunction_bb_b2b2::synapse0x34b7cc0() {
   return (neuron0x34979d0()*-0.00450915);
}

double NNfunction_bb_b2b2::synapse0x34b7d00() {
   return (neuron0x3497d10()*0.0017101);
}

double NNfunction_bb_b2b2::synapse0x34b7d40() {
   return (neuron0x3498050()*-0.065961);
}

double NNfunction_bb_b2b2::synapse0x34b7d80() {
   return (neuron0x3498390()*0.22428);
}

double NNfunction_bb_b2b2::synapse0x34b7dc0() {
   return (neuron0x34986d0()*0.00208648);
}

double NNfunction_bb_b2b2::synapse0x34b7e00() {
   return (neuron0x3498a10()*-0.00504072);
}

double NNfunction_bb_b2b2::synapse0x34b7e40() {
   return (neuron0x3498d50()*0.000504018);
}

double NNfunction_bb_b2b2::synapse0x34b7e80() {
   return (neuron0x3499090()*0.0107057);
}

double NNfunction_bb_b2b2::synapse0x34b7ec0() {
   return (neuron0x34993d0()*-0.00510694);
}

double NNfunction_bb_b2b2::synapse0x34b7f00() {
   return (neuron0x3499710()*-0.00193598);
}

double NNfunction_bb_b2b2::synapse0x34b7f40() {
   return (neuron0x3499a50()*-0.00942376);
}

double NNfunction_bb_b2b2::synapse0x34b7f80() {
   return (neuron0x3499d90()*0.00136819);
}

double NNfunction_bb_b2b2::synapse0x34b7fc0() {
   return (neuron0x349a0d0()*-0.21594);
}

double NNfunction_bb_b2b2::synapse0x34b8000() {
   return (neuron0x349a410()*-5.00211e-05);
}

double NNfunction_bb_b2b2::synapse0x34b8040() {
   return (neuron0x349a750()*-0.0244068);
}

double NNfunction_bb_b2b2::synapse0x34b7ad0() {
   return (neuron0x349aa90()*0.0662767);
}

double NNfunction_bb_b2b2::synapse0x34b7b10() {
   return (neuron0x349aff0()*0.00780647);
}

double NNfunction_bb_b2b2::synapse0x34b8190() {
   return (neuron0x349b210()*0.00208722);
}

double NNfunction_bb_b2b2::synapse0x34b81d0() {
   return (neuron0x349b550()*0.278373);
}

double NNfunction_bb_b2b2::synapse0x34b8210() {
   return (neuron0x349b890()*-0.0160992);
}

double NNfunction_bb_b2b2::synapse0x34b8250() {
   return (neuron0x349bbd0()*-0.108513);
}

double NNfunction_bb_b2b2::synapse0x34b8290() {
   return (neuron0x349bf10()*-0.00335539);
}

double NNfunction_bb_b2b2::synapse0x34b82d0() {
   return (neuron0x349c250()*1.04981);
}

double NNfunction_bb_b2b2::synapse0x34b8650() {
   return (neuron0x3497690()*-0.0656262);
}

double NNfunction_bb_b2b2::synapse0x34b8690() {
   return (neuron0x34979d0()*-0.00786488);
}

double NNfunction_bb_b2b2::synapse0x34b86d0() {
   return (neuron0x3497d10()*0.0496452);
}

double NNfunction_bb_b2b2::synapse0x34b8710() {
   return (neuron0x3498050()*1.27494);
}

double NNfunction_bb_b2b2::synapse0x34b8750() {
   return (neuron0x3498390()*-0.0616454);
}

double NNfunction_bb_b2b2::synapse0x34b8790() {
   return (neuron0x34986d0()*-0.00482857);
}

double NNfunction_bb_b2b2::synapse0x34b87d0() {
   return (neuron0x3498a10()*0.0373764);
}

double NNfunction_bb_b2b2::synapse0x34b8810() {
   return (neuron0x3498d50()*0.00503453);
}

double NNfunction_bb_b2b2::synapse0x34b8850() {
   return (neuron0x3499090()*0.0226845);
}

double NNfunction_bb_b2b2::synapse0x34b8890() {
   return (neuron0x34993d0()*-0.00871899);
}

double NNfunction_bb_b2b2::synapse0x34b88d0() {
   return (neuron0x3499710()*-0.00882883);
}

double NNfunction_bb_b2b2::synapse0x34b8910() {
   return (neuron0x3499a50()*0.113666);
}

double NNfunction_bb_b2b2::synapse0x34b8950() {
   return (neuron0x3499d90()*0.132818);
}

double NNfunction_bb_b2b2::synapse0x34b8990() {
   return (neuron0x349a0d0()*0.150675);
}

double NNfunction_bb_b2b2::synapse0x34b89d0() {
   return (neuron0x349a410()*0.0643175);
}

double NNfunction_bb_b2b2::synapse0x34b8a10() {
   return (neuron0x349a750()*0.0921648);
}

double NNfunction_bb_b2b2::synapse0x34b84a0() {
   return (neuron0x349aa90()*0.0114846);
}

double NNfunction_bb_b2b2::synapse0x34b84e0() {
   return (neuron0x349aff0()*0.0755819);
}

double NNfunction_bb_b2b2::synapse0x34b8b60() {
   return (neuron0x349b210()*0.0659887);
}

double NNfunction_bb_b2b2::synapse0x34b8ba0() {
   return (neuron0x349b550()*0.223605);
}

double NNfunction_bb_b2b2::synapse0x34b8be0() {
   return (neuron0x349b890()*0.0474825);
}

double NNfunction_bb_b2b2::synapse0x34b8c20() {
   return (neuron0x349bbd0()*0.0314234);
}

double NNfunction_bb_b2b2::synapse0x34b8c60() {
   return (neuron0x349bf10()*0.0125453);
}

double NNfunction_bb_b2b2::synapse0x34b8ca0() {
   return (neuron0x349c250()*-0.0453939);
}

double NNfunction_bb_b2b2::synapse0x34a1750() {
   return (neuron0x3497690()*-0.0734575);
}

double NNfunction_bb_b2b2::synapse0x34a1790() {
   return (neuron0x34979d0()*0.00695802);
}

double NNfunction_bb_b2b2::synapse0x34a17d0() {
   return (neuron0x3497d10()*0.116035);
}

double NNfunction_bb_b2b2::synapse0x34a1810() {
   return (neuron0x3498050()*-0.0658351);
}

double NNfunction_bb_b2b2::synapse0x34a1850() {
   return (neuron0x3498390()*-0.173676);
}

double NNfunction_bb_b2b2::synapse0x34a1890() {
   return (neuron0x34986d0()*-0.00518915);
}

double NNfunction_bb_b2b2::synapse0x34a18d0() {
   return (neuron0x3498a10()*-0.00718009);
}

double NNfunction_bb_b2b2::synapse0x34a1910() {
   return (neuron0x3498d50()*-0.00226888);
}

double NNfunction_bb_b2b2::synapse0x34b9430() {
   return (neuron0x3499090()*-0.0125027);
}

double NNfunction_bb_b2b2::synapse0x34b9470() {
   return (neuron0x34993d0()*-0.00475801);
}

double NNfunction_bb_b2b2::synapse0x34b94b0() {
   return (neuron0x3499710()*-0.00245717);
}

double NNfunction_bb_b2b2::synapse0x34b94f0() {
   return (neuron0x3499a50()*0.0254901);
}

double NNfunction_bb_b2b2::synapse0x34b9530() {
   return (neuron0x3499d90()*0.0211414);
}

double NNfunction_bb_b2b2::synapse0x34b9570() {
   return (neuron0x349a0d0()*-0.340824);
}

double NNfunction_bb_b2b2::synapse0x34b95b0() {
   return (neuron0x349a410()*-0.00673571);
}

double NNfunction_bb_b2b2::synapse0x34b95f0() {
   return (neuron0x349a750()*0.0263545);
}

double NNfunction_bb_b2b2::synapse0x34b8e70() {
   return (neuron0x349aa90()*-0.0688443);
}

double NNfunction_bb_b2b2::synapse0x34b8eb0() {
   return (neuron0x349aff0()*-0.00404808);
}

double NNfunction_bb_b2b2::synapse0x34b9740() {
   return (neuron0x349b210()*0.00995975);
}

double NNfunction_bb_b2b2::synapse0x34b9780() {
   return (neuron0x349b550()*0.715356);
}

double NNfunction_bb_b2b2::synapse0x34b97c0() {
   return (neuron0x349b890()*0.00814829);
}

double NNfunction_bb_b2b2::synapse0x34b9800() {
   return (neuron0x349bbd0()*0.0373053);
}

double NNfunction_bb_b2b2::synapse0x34b9840() {
   return (neuron0x349bf10()*-0.0111246);
}

double NNfunction_bb_b2b2::synapse0x34b9880() {
   return (neuron0x349c250()*-0.284138);
}

double NNfunction_bb_b2b2::synapse0x34b9c00() {
   return (neuron0x3497690()*0.0038432);
}

double NNfunction_bb_b2b2::synapse0x34b9c40() {
   return (neuron0x34979d0()*0.00102509);
}

double NNfunction_bb_b2b2::synapse0x34b9c80() {
   return (neuron0x3497d10()*-0.0140028);
}

double NNfunction_bb_b2b2::synapse0x34b9cc0() {
   return (neuron0x3498050()*0.0356444);
}

double NNfunction_bb_b2b2::synapse0x34b9d00() {
   return (neuron0x3498390()*0.0270743);
}

double NNfunction_bb_b2b2::synapse0x34b9d40() {
   return (neuron0x34986d0()*-0.000410414);
}

double NNfunction_bb_b2b2::synapse0x34b9d80() {
   return (neuron0x3498a10()*-0.0055241);
}

double NNfunction_bb_b2b2::synapse0x34b9dc0() {
   return (neuron0x3498d50()*-0.00431595);
}

double NNfunction_bb_b2b2::synapse0x34b9e00() {
   return (neuron0x3499090()*0.0151932);
}

double NNfunction_bb_b2b2::synapse0x34b9e40() {
   return (neuron0x34993d0()*-0.0038078);
}

double NNfunction_bb_b2b2::synapse0x34b9e80() {
   return (neuron0x3499710()*0.00121529);
}

double NNfunction_bb_b2b2::synapse0x34b9ec0() {
   return (neuron0x3499a50()*0.00145814);
}

double NNfunction_bb_b2b2::synapse0x34b9f00() {
   return (neuron0x3499d90()*-0.000565805);
}

double NNfunction_bb_b2b2::synapse0x34b9f40() {
   return (neuron0x349a0d0()*0.762743);
}

double NNfunction_bb_b2b2::synapse0x34b9f80() {
   return (neuron0x349a410()*0.00215385);
}

double NNfunction_bb_b2b2::synapse0x34b9fc0() {
   return (neuron0x349a750()*0.00327863);
}

double NNfunction_bb_b2b2::synapse0x34b9a50() {
   return (neuron0x349aa90()*0.0064863);
}

double NNfunction_bb_b2b2::synapse0x34b9a90() {
   return (neuron0x349aff0()*-0.0019546);
}

double NNfunction_bb_b2b2::synapse0x34ba110() {
   return (neuron0x349b210()*-0.00109383);
}

double NNfunction_bb_b2b2::synapse0x34ba150() {
   return (neuron0x349b550()*-0.0968677);
}

double NNfunction_bb_b2b2::synapse0x34ba190() {
   return (neuron0x349b890()*-0.00246664);
}

double NNfunction_bb_b2b2::synapse0x34ba1d0() {
   return (neuron0x349bbd0()*-0.000173917);
}

double NNfunction_bb_b2b2::synapse0x34ba210() {
   return (neuron0x349bf10()*-0.00179593);
}

double NNfunction_bb_b2b2::synapse0x34ba250() {
   return (neuron0x349c250()*-0.00958264);
}

double NNfunction_bb_b2b2::synapse0x34ba5d0() {
   return (neuron0x3497690()*-0.322972);
}

double NNfunction_bb_b2b2::synapse0x34ba610() {
   return (neuron0x34979d0()*-0.0154326);
}

double NNfunction_bb_b2b2::synapse0x34ba650() {
   return (neuron0x3497d10()*-0.780347);
}

double NNfunction_bb_b2b2::synapse0x34ba690() {
   return (neuron0x3498050()*0.105282);
}

double NNfunction_bb_b2b2::synapse0x34ba6d0() {
   return (neuron0x3498390()*-0.0553729);
}

double NNfunction_bb_b2b2::synapse0x34ba710() {
   return (neuron0x34986d0()*-0.193318);
}

double NNfunction_bb_b2b2::synapse0x34ba750() {
   return (neuron0x3498a10()*-0.0717129);
}

double NNfunction_bb_b2b2::synapse0x34ba790() {
   return (neuron0x3498d50()*-0.0101502);
}

double NNfunction_bb_b2b2::synapse0x34ba7d0() {
   return (neuron0x3499090()*-0.0821186);
}

double NNfunction_bb_b2b2::synapse0x34ba810() {
   return (neuron0x34993d0()*0.315454);
}

double NNfunction_bb_b2b2::synapse0x34ba850() {
   return (neuron0x3499710()*-0.0502122);
}

double NNfunction_bb_b2b2::synapse0x34ba890() {
   return (neuron0x3499a50()*-0.16315);
}

double NNfunction_bb_b2b2::synapse0x34ba8d0() {
   return (neuron0x3499d90()*-0.0149523);
}

double NNfunction_bb_b2b2::synapse0x34ba910() {
   return (neuron0x349a0d0()*-0.284377);
}

double NNfunction_bb_b2b2::synapse0x34ba950() {
   return (neuron0x349a410()*-0.0228493);
}

double NNfunction_bb_b2b2::synapse0x34ba990() {
   return (neuron0x349a750()*-0.120096);
}

double NNfunction_bb_b2b2::synapse0x34ba420() {
   return (neuron0x349aa90()*1.09884);
}

double NNfunction_bb_b2b2::synapse0x34ba460() {
   return (neuron0x349aff0()*0.0325455);
}

double NNfunction_bb_b2b2::synapse0x34aaf90() {
   return (neuron0x349b210()*-0.114588);
}

double NNfunction_bb_b2b2::synapse0x34aafd0() {
   return (neuron0x349b550()*-0.0477639);
}

double NNfunction_bb_b2b2::synapse0x34ab010() {
   return (neuron0x349b890()*-0.0283457);
}

double NNfunction_bb_b2b2::synapse0x34ab050() {
   return (neuron0x349bbd0()*-0.221588);
}

double NNfunction_bb_b2b2::synapse0x34ab090() {
   return (neuron0x349bf10()*-0.192631);
}

double NNfunction_bb_b2b2::synapse0x34ab0d0() {
   return (neuron0x349c250()*0.339225);
}

double NNfunction_bb_b2b2::synapse0x34ab450() {
   return (neuron0x3497690()*0.0318715);
}

double NNfunction_bb_b2b2::synapse0x34ab490() {
   return (neuron0x34979d0()*0.0489246);
}

double NNfunction_bb_b2b2::synapse0x34ab4d0() {
   return (neuron0x3497d10()*0.0495919);
}

double NNfunction_bb_b2b2::synapse0x34ab510() {
   return (neuron0x3498050()*0.0579184);
}

double NNfunction_bb_b2b2::synapse0x34ab550() {
   return (neuron0x3498390()*-0.00973751);
}

double NNfunction_bb_b2b2::synapse0x34ab590() {
   return (neuron0x34986d0()*0.00623254);
}

double NNfunction_bb_b2b2::synapse0x34ab5d0() {
   return (neuron0x3498a10()*-0.0185376);
}

double NNfunction_bb_b2b2::synapse0x34ab610() {
   return (neuron0x3498d50()*0.0306926);
}

double NNfunction_bb_b2b2::synapse0x34ab650() {
   return (neuron0x3499090()*-0.0252251);
}

double NNfunction_bb_b2b2::synapse0x34ab690() {
   return (neuron0x34993d0()*0.00524296);
}

double NNfunction_bb_b2b2::synapse0x34ab6d0() {
   return (neuron0x3499710()*-0.00372717);
}

double NNfunction_bb_b2b2::synapse0x34ab710() {
   return (neuron0x3499a50()*0.00684127);
}

double NNfunction_bb_b2b2::synapse0x34ab750() {
   return (neuron0x3499d90()*0.0304329);
}

double NNfunction_bb_b2b2::synapse0x34ab790() {
   return (neuron0x349a0d0()*0.154965);
}

double NNfunction_bb_b2b2::synapse0x34ab7d0() {
   return (neuron0x349a410()*0.00338795);
}

double NNfunction_bb_b2b2::synapse0x34ab810() {
   return (neuron0x349a750()*0.0123101);
}

double NNfunction_bb_b2b2::synapse0x34ab2a0() {
   return (neuron0x349aa90()*-0.468811);
}

double NNfunction_bb_b2b2::synapse0x34ab2e0() {
   return (neuron0x349aff0()*-0.00498088);
}

double NNfunction_bb_b2b2::synapse0x34ab960() {
   return (neuron0x349b210()*0.0333298);
}

double NNfunction_bb_b2b2::synapse0x34ab9a0() {
   return (neuron0x349b550()*-0.152663);
}

double NNfunction_bb_b2b2::synapse0x34ab9e0() {
   return (neuron0x349b890()*-0.633274);
}

double NNfunction_bb_b2b2::synapse0x34aba20() {
   return (neuron0x349bbd0()*-0.032299);
}

double NNfunction_bb_b2b2::synapse0x34aba60() {
   return (neuron0x349bf10()*0.00860475);
}

double NNfunction_bb_b2b2::synapse0x34abaa0() {
   return (neuron0x349c250()*0.039817);
}

double NNfunction_bb_b2b2::synapse0x34abe20() {
   return (neuron0x3497690()*-0.0294015);
}

double NNfunction_bb_b2b2::synapse0x34abe60() {
   return (neuron0x34979d0()*0.0253864);
}

double NNfunction_bb_b2b2::synapse0x34abea0() {
   return (neuron0x3497d10()*-0.810228);
}

double NNfunction_bb_b2b2::synapse0x34abee0() {
   return (neuron0x3498050()*-0.02865);
}

double NNfunction_bb_b2b2::synapse0x34abf20() {
   return (neuron0x3498390()*-0.0573605);
}

double NNfunction_bb_b2b2::synapse0x34abf60() {
   return (neuron0x34986d0()*-0.0179649);
}

double NNfunction_bb_b2b2::synapse0x34abfa0() {
   return (neuron0x3498a10()*0.00566974);
}

double NNfunction_bb_b2b2::synapse0x34abfe0() {
   return (neuron0x3498d50()*0.0215964);
}

double NNfunction_bb_b2b2::synapse0x34ac020() {
   return (neuron0x3499090()*-0.0375213);
}

double NNfunction_bb_b2b2::synapse0x34ac060() {
   return (neuron0x34993d0()*-0.00858629);
}

double NNfunction_bb_b2b2::synapse0x34ac0a0() {
   return (neuron0x3499710()*-0.00850707);
}

double NNfunction_bb_b2b2::synapse0x34ac0e0() {
   return (neuron0x3499a50()*-0.0130029);
}

double NNfunction_bb_b2b2::synapse0x34ac120() {
   return (neuron0x3499d90()*0.0130051);
}

double NNfunction_bb_b2b2::synapse0x34ac160() {
   return (neuron0x349a0d0()*1.6124);
}

double NNfunction_bb_b2b2::synapse0x34ac1a0() {
   return (neuron0x349a410()*-0.0050448);
}

double NNfunction_bb_b2b2::synapse0x34ac1e0() {
   return (neuron0x349a750()*0.00586745);
}

double NNfunction_bb_b2b2::synapse0x34abc70() {
   return (neuron0x349aa90()*0.0945791);
}

double NNfunction_bb_b2b2::synapse0x34abcb0() {
   return (neuron0x349aff0()*0.00179718);
}

double NNfunction_bb_b2b2::synapse0x34ac330() {
   return (neuron0x349b210()*0.00590377);
}

double NNfunction_bb_b2b2::synapse0x34ac370() {
   return (neuron0x349b550()*-1.50146);
}

double NNfunction_bb_b2b2::synapse0x34ac3b0() {
   return (neuron0x349b890()*-0.0179104);
}

double NNfunction_bb_b2b2::synapse0x34ac3f0() {
   return (neuron0x349bbd0()*-0.0154618);
}

double NNfunction_bb_b2b2::synapse0x34ac430() {
   return (neuron0x349bf10()*-0.00151947);
}

double NNfunction_bb_b2b2::synapse0x34ac470() {
   return (neuron0x349c250()*-0.0462061);
}

double NNfunction_bb_b2b2::synapse0x34ac7f0() {
   return (neuron0x3497690()*0.089085);
}

double NNfunction_bb_b2b2::synapse0x34ac830() {
   return (neuron0x34979d0()*-0.209502);
}

double NNfunction_bb_b2b2::synapse0x34ac870() {
   return (neuron0x3497d10()*1.2161);
}

double NNfunction_bb_b2b2::synapse0x34ac8b0() {
   return (neuron0x3498050()*-0.781606);
}

double NNfunction_bb_b2b2::synapse0x34ac8f0() {
   return (neuron0x3498390()*0.091631);
}

double NNfunction_bb_b2b2::synapse0x34ac930() {
   return (neuron0x34986d0()*-0.366884);
}

double NNfunction_bb_b2b2::synapse0x34ac970() {
   return (neuron0x3498a10()*-0.158272);
}

double NNfunction_bb_b2b2::synapse0x34ac9b0() {
   return (neuron0x3498d50()*-0.314461);
}

double NNfunction_bb_b2b2::synapse0x34ac9f0() {
   return (neuron0x3499090()*0.216145);
}

double NNfunction_bb_b2b2::synapse0x34aca30() {
   return (neuron0x34993d0()*-0.480074);
}

double NNfunction_bb_b2b2::synapse0x34aca70() {
   return (neuron0x3499710()*-0.337158);
}

double NNfunction_bb_b2b2::synapse0x34acab0() {
   return (neuron0x3499a50()*-0.763079);
}

double NNfunction_bb_b2b2::synapse0x34acaf0() {
   return (neuron0x3499d90()*-0.663883);
}

double NNfunction_bb_b2b2::synapse0x34acb30() {
   return (neuron0x349a0d0()*0.0373428);
}

double NNfunction_bb_b2b2::synapse0x34acb70() {
   return (neuron0x349a410()*0.177752);
}

double NNfunction_bb_b2b2::synapse0x34acbb0() {
   return (neuron0x349a750()*0.160191);
}

double NNfunction_bb_b2b2::synapse0x34ac640() {
   return (neuron0x349aa90()*0.587455);
}

double NNfunction_bb_b2b2::synapse0x34ac680() {
   return (neuron0x349aff0()*-0.200486);
}

double NNfunction_bb_b2b2::synapse0x34acd00() {
   return (neuron0x349b210()*0.129386);
}

double NNfunction_bb_b2b2::synapse0x34acd40() {
   return (neuron0x349b550()*-0.481693);
}

double NNfunction_bb_b2b2::synapse0x34acd80() {
   return (neuron0x349b890()*0.441983);
}

double NNfunction_bb_b2b2::synapse0x34acdc0() {
   return (neuron0x349bbd0()*0.380441);
}

double NNfunction_bb_b2b2::synapse0x34ace00() {
   return (neuron0x349bf10()*0.130715);
}

double NNfunction_bb_b2b2::synapse0x34ace40() {
   return (neuron0x349c250()*-0.824887);
}

double NNfunction_bb_b2b2::synapse0x34bed10() {
   return (neuron0x3497690()*0.0765358);
}

double NNfunction_bb_b2b2::synapse0x34bed50() {
   return (neuron0x34979d0()*-0.00089984);
}

double NNfunction_bb_b2b2::synapse0x34bed90() {
   return (neuron0x3497d10()*-0.103616);
}

double NNfunction_bb_b2b2::synapse0x34bedd0() {
   return (neuron0x3498050()*-0.0642606);
}

double NNfunction_bb_b2b2::synapse0x34bee10() {
   return (neuron0x3498390()*0.189875);
}

double NNfunction_bb_b2b2::synapse0x34bee50() {
   return (neuron0x34986d0()*-0.0122173);
}

double NNfunction_bb_b2b2::synapse0x34bee90() {
   return (neuron0x3498a10()*-0.0285091);
}

double NNfunction_bb_b2b2::synapse0x34beed0() {
   return (neuron0x3498d50()*-0.0476979);
}

double NNfunction_bb_b2b2::synapse0x34bef10() {
   return (neuron0x3499090()*0.0608479);
}

double NNfunction_bb_b2b2::synapse0x34bef50() {
   return (neuron0x34993d0()*-0.177697);
}

double NNfunction_bb_b2b2::synapse0x34bef90() {
   return (neuron0x3499710()*0.0432954);
}

double NNfunction_bb_b2b2::synapse0x34befd0() {
   return (neuron0x3499a50()*0.0308291);
}

double NNfunction_bb_b2b2::synapse0x34bf010() {
   return (neuron0x3499d90()*0.0220445);
}

double NNfunction_bb_b2b2::synapse0x34bf050() {
   return (neuron0x349a0d0()*1.48451);
}

double NNfunction_bb_b2b2::synapse0x34bf090() {
   return (neuron0x349a410()*0.0429466);
}

double NNfunction_bb_b2b2::synapse0x34bf0d0() {
   return (neuron0x349a750()*0.0232305);
}

double NNfunction_bb_b2b2::synapse0x34ace80() {
   return (neuron0x349aa90()*0.102112);
}

double NNfunction_bb_b2b2::synapse0x34acec0() {
   return (neuron0x349aff0()*-0.00275271);
}

double NNfunction_bb_b2b2::synapse0x34bf220() {
   return (neuron0x349b210()*0.00308237);
}

double NNfunction_bb_b2b2::synapse0x34bf260() {
   return (neuron0x349b550()*0.264306);
}

double NNfunction_bb_b2b2::synapse0x34bf2a0() {
   return (neuron0x349b890()*-0.0508671);
}

double NNfunction_bb_b2b2::synapse0x34bf2e0() {
   return (neuron0x349bbd0()*-0.108221);
}

double NNfunction_bb_b2b2::synapse0x34bf320() {
   return (neuron0x349bf10()*-0.0251631);
}

double NNfunction_bb_b2b2::synapse0x34bf360() {
   return (neuron0x349c250()*0.299451);
}

double NNfunction_bb_b2b2::synapse0x34bf6e0() {
   return (neuron0x3497690()*-0.0787449);
}

double NNfunction_bb_b2b2::synapse0x34bf720() {
   return (neuron0x34979d0()*-0.00222726);
}

double NNfunction_bb_b2b2::synapse0x34bf760() {
   return (neuron0x3497d10()*-0.150895);
}

double NNfunction_bb_b2b2::synapse0x34bf7a0() {
   return (neuron0x3498050()*0.0771344);
}

double NNfunction_bb_b2b2::synapse0x34bf7e0() {
   return (neuron0x3498390()*0.0688899);
}

double NNfunction_bb_b2b2::synapse0x34bf820() {
   return (neuron0x34986d0()*0.00767185);
}

double NNfunction_bb_b2b2::synapse0x34bf860() {
   return (neuron0x3498a10()*0.0177845);
}

double NNfunction_bb_b2b2::synapse0x34bf8a0() {
   return (neuron0x3498d50()*0.0395787);
}

double NNfunction_bb_b2b2::synapse0x34bf8e0() {
   return (neuron0x3499090()*0.0859657);
}

double NNfunction_bb_b2b2::synapse0x34bf920() {
   return (neuron0x34993d0()*-0.403389);
}

double NNfunction_bb_b2b2::synapse0x34bf960() {
   return (neuron0x3499710()*-1.13944);
}

double NNfunction_bb_b2b2::synapse0x34bf9a0() {
   return (neuron0x3499a50()*0.0151708);
}

double NNfunction_bb_b2b2::synapse0x34bf9e0() {
   return (neuron0x3499d90()*0.0387214);
}

double NNfunction_bb_b2b2::synapse0x34bfa20() {
   return (neuron0x349a0d0()*0.542389);
}

double NNfunction_bb_b2b2::synapse0x34bfa60() {
   return (neuron0x349a410()*-0.0854849);
}

double NNfunction_bb_b2b2::synapse0x34bfaa0() {
   return (neuron0x349a750()*-0.170256);
}

double NNfunction_bb_b2b2::synapse0x34bf530() {
   return (neuron0x349aa90()*0.174282);
}

double NNfunction_bb_b2b2::synapse0x34bf570() {
   return (neuron0x349aff0()*0.0185295);
}

double NNfunction_bb_b2b2::synapse0x34bfbf0() {
   return (neuron0x349b210()*0.0227912);
}

double NNfunction_bb_b2b2::synapse0x34bfc30() {
   return (neuron0x349b550()*0.324859);
}

double NNfunction_bb_b2b2::synapse0x34bfc70() {
   return (neuron0x349b890()*0.0313977);
}

double NNfunction_bb_b2b2::synapse0x34bfcb0() {
   return (neuron0x349bbd0()*0.364537);
}

double NNfunction_bb_b2b2::synapse0x34bfcf0() {
   return (neuron0x349bf10()*-0.0873549);
}

double NNfunction_bb_b2b2::synapse0x34bfd30() {
   return (neuron0x349c250()*-0.529761);
}

double NNfunction_bb_b2b2::synapse0x34c00b0() {
   return (neuron0x3497690()*0.102744);
}

double NNfunction_bb_b2b2::synapse0x34c00f0() {
   return (neuron0x34979d0()*-0.147267);
}

double NNfunction_bb_b2b2::synapse0x34c0130() {
   return (neuron0x3497d10()*0.0930046);
}

double NNfunction_bb_b2b2::synapse0x34c0170() {
   return (neuron0x3498050()*-0.369868);
}

double NNfunction_bb_b2b2::synapse0x34c01b0() {
   return (neuron0x3498390()*-0.761068);
}

double NNfunction_bb_b2b2::synapse0x34c01f0() {
   return (neuron0x34986d0()*-0.148501);
}

double NNfunction_bb_b2b2::synapse0x34c0230() {
   return (neuron0x3498a10()*-0.10502);
}

double NNfunction_bb_b2b2::synapse0x34c0270() {
   return (neuron0x3498d50()*0.323226);
}

double NNfunction_bb_b2b2::synapse0x34c02b0() {
   return (neuron0x3499090()*-0.295082);
}

double NNfunction_bb_b2b2::synapse0x34c02f0() {
   return (neuron0x34993d0()*-0.532933);
}

double NNfunction_bb_b2b2::synapse0x34c0330() {
   return (neuron0x3499710()*-0.674304);
}

double NNfunction_bb_b2b2::synapse0x34c0370() {
   return (neuron0x3499a50()*-0.725259);
}

double NNfunction_bb_b2b2::synapse0x34c03b0() {
   return (neuron0x3499d90()*0.0246794);
}

double NNfunction_bb_b2b2::synapse0x34c03f0() {
   return (neuron0x349a0d0()*0.345484);
}

double NNfunction_bb_b2b2::synapse0x34c0430() {
   return (neuron0x349a410()*0.375165);
}

double NNfunction_bb_b2b2::synapse0x34c0470() {
   return (neuron0x349a750()*0.263417);
}

double NNfunction_bb_b2b2::synapse0x34bff00() {
   return (neuron0x349aa90()*0.0729896);
}

double NNfunction_bb_b2b2::synapse0x34bff40() {
   return (neuron0x349aff0()*0.0671383);
}

double NNfunction_bb_b2b2::synapse0x34c05c0() {
   return (neuron0x349b210()*0.716406);
}

double NNfunction_bb_b2b2::synapse0x34c0600() {
   return (neuron0x349b550()*0.0171639);
}

double NNfunction_bb_b2b2::synapse0x34c0640() {
   return (neuron0x349b890()*-0.429778);
}

double NNfunction_bb_b2b2::synapse0x34c0680() {
   return (neuron0x349bbd0()*0.435621);
}

double NNfunction_bb_b2b2::synapse0x34c06c0() {
   return (neuron0x349bf10()*0.034871);
}

double NNfunction_bb_b2b2::synapse0x34c0700() {
   return (neuron0x349c250()*-0.446983);
}

double NNfunction_bb_b2b2::synapse0x34c0a80() {
   return (neuron0x3497690()*0.252078);
}

double NNfunction_bb_b2b2::synapse0x34c0ac0() {
   return (neuron0x34979d0()*-0.0126303);
}

double NNfunction_bb_b2b2::synapse0x34c0b00() {
   return (neuron0x3497d10()*-0.127864);
}

double NNfunction_bb_b2b2::synapse0x34c0b40() {
   return (neuron0x3498050()*0.094588);
}

double NNfunction_bb_b2b2::synapse0x34c0b80() {
   return (neuron0x3498390()*0.302218);
}

double NNfunction_bb_b2b2::synapse0x34c0bc0() {
   return (neuron0x34986d0()*-0.00881608);
}

double NNfunction_bb_b2b2::synapse0x34c0c00() {
   return (neuron0x3498a10()*-0.00510798);
}

double NNfunction_bb_b2b2::synapse0x34c0c40() {
   return (neuron0x3498d50()*0.0339187);
}

double NNfunction_bb_b2b2::synapse0x34c0c80() {
   return (neuron0x3499090()*0.0243269);
}

double NNfunction_bb_b2b2::synapse0x34c0cc0() {
   return (neuron0x34993d0()*0.0288334);
}

double NNfunction_bb_b2b2::synapse0x34c0d00() {
   return (neuron0x3499710()*0.00618822);
}

double NNfunction_bb_b2b2::synapse0x34c0d40() {
   return (neuron0x3499a50()*-0.0223547);
}

double NNfunction_bb_b2b2::synapse0x34c0d80() {
   return (neuron0x3499d90()*-0.0186052);
}

double NNfunction_bb_b2b2::synapse0x34c0dc0() {
   return (neuron0x349a0d0()*-0.303925);
}

double NNfunction_bb_b2b2::synapse0x34c0e00() {
   return (neuron0x349a410()*0.0319144);
}

double NNfunction_bb_b2b2::synapse0x34c0e40() {
   return (neuron0x349a750()*-0.0375442);
}

double NNfunction_bb_b2b2::synapse0x34c08d0() {
   return (neuron0x349aa90()*0.124429);
}

double NNfunction_bb_b2b2::synapse0x34c0910() {
   return (neuron0x349aff0()*-0.00036984);
}

double NNfunction_bb_b2b2::synapse0x34c0f90() {
   return (neuron0x349b210()*-0.0179508);
}

double NNfunction_bb_b2b2::synapse0x34c0fd0() {
   return (neuron0x349b550()*-1.4232);
}

double NNfunction_bb_b2b2::synapse0x34c1010() {
   return (neuron0x349b890()*-0.020959);
}

double NNfunction_bb_b2b2::synapse0x34c1050() {
   return (neuron0x349bbd0()*-0.00405546);
}

double NNfunction_bb_b2b2::synapse0x34c1090() {
   return (neuron0x349bf10()*-0.00119599);
}

double NNfunction_bb_b2b2::synapse0x34c10d0() {
   return (neuron0x349c250()*-0.0297304);
}

double NNfunction_bb_b2b2::synapse0x3260fd0() {
   return (neuron0x349c6c0()*-1.03285);
}

double NNfunction_bb_b2b2::synapse0x3261010() {
   return (neuron0x349d010()*0.312689);
}

double NNfunction_bb_b2b2::synapse0x349eb80() {
   return (neuron0x349daf0()*2.50312);
}

double NNfunction_bb_b2b2::synapse0x349ebc0() {
   return (neuron0x349d590()*0.636937);
}

double NNfunction_bb_b2b2::synapse0x349f550() {
   return (neuron0x349e8d0()*0.0475595);
}

double NNfunction_bb_b2b2::synapse0x349f590() {
   return (neuron0x349f2a0()*0.202602);
}

double NNfunction_bb_b2b2::synapse0x34a0320() {
   return (neuron0x34a0070()*0.16774);
}

double NNfunction_bb_b2b2::synapse0x34a0360() {
   return (neuron0x34a0a40()*0.966412);
}

double NNfunction_bb_b2b2::synapse0x34a0cf0() {
   return (neuron0x34a1410()*-0.076087);
}

double NNfunction_bb_b2b2::synapse0x34a0d30() {
   return (neuron0x34a1ef0()*0.0873847);
}

double NNfunction_bb_b2b2::synapse0x34a16c0() {
   return (neuron0x34a28c0()*-0.0220654);
}

double NNfunction_bb_b2b2::synapse0x34a1700() {
   return (neuron0x349f9a0()*0.328762);
}

double NNfunction_bb_b2b2::synapse0x34a21a0() {
   return (neuron0x34a4470()*-0.28467);
}

double NNfunction_bb_b2b2::synapse0x34a21e0() {
   return (neuron0x34a4e40()*-0.861468);
}

double NNfunction_bb_b2b2::synapse0x34a2b70() {
   return (neuron0x34a5810()*0.322225);
}

double NNfunction_bb_b2b2::synapse0x34a2bb0() {
   return (neuron0x34a61e0()*-0.0560448);
}

double NNfunction_bb_b2b2::synapse0x349fc50() {
   return (neuron0x34a7ff0()*-1.47735);
}

double NNfunction_bb_b2b2::synapse0x349fc90() {
   return (neuron0x34a82d0()*-0.168174);
}

double NNfunction_bb_b2b2::synapse0x34a4720() {
   return (neuron0x34a8ca0()*1.62546);
}

double NNfunction_bb_b2b2::synapse0x34a4760() {
   return (neuron0x34a9670()*-0.0786821);
}

double NNfunction_bb_b2b2::synapse0x34a50f0() {
   return (neuron0x34aa040()*0.544016);
}

double NNfunction_bb_b2b2::synapse0x34a5130() {
   return (neuron0x34aaa10()*-0.149469);
}

double NNfunction_bb_b2b2::synapse0x34a5ac0() {
   return (neuron0x34a3560()*-0.440521);
}

double NNfunction_bb_b2b2::synapse0x34a5b00() {
   return (neuron0x34a3f30()*0.846404);
}

double NNfunction_bb_b2b2::synapse0x34a6490() {
   return (neuron0x34ad7a0()*0.0164161);
}

double NNfunction_bb_b2b2::synapse0x34a64d0() {
   return (neuron0x34ae170()*0.0696539);
}

double NNfunction_bb_b2b2::synapse0x349a630() {
   return (neuron0x34aeb40()*1.01928);
}

double NNfunction_bb_b2b2::synapse0x349a670() {
   return (neuron0x34af510()*-0.726867);
}

double NNfunction_bb_b2b2::synapse0x34a8580() {
   return (neuron0x34afee0()*-1.3409);
}

double NNfunction_bb_b2b2::synapse0x34a85c0() {
   return (neuron0x34b08b0()*-0.337488);
}

double NNfunction_bb_b2b2::synapse0x34a8f50() {
   return (neuron0x34b1280()*-0.409888);
}

double NNfunction_bb_b2b2::synapse0x34a8f90() {
   return (neuron0x34b1c50()*-1.60443);
}

double NNfunction_bb_b2b2::synapse0x34a9920() {
   return (neuron0x34a7ce0()*0.145897);
}

double NNfunction_bb_b2b2::synapse0x34a9960() {
   return (neuron0x34b4830()*0.397733);
}

double NNfunction_bb_b2b2::synapse0x34aa2f0() {
   return (neuron0x34b5200()*3.9268);
}

double NNfunction_bb_b2b2::synapse0x34aa330() {
   return (neuron0x34b5bd0()*2.19522);
}

double NNfunction_bb_b2b2::synapse0x34aacc0() {
   return (neuron0x34b65a0()*0.636356);
}

double NNfunction_bb_b2b2::synapse0x34aad00() {
   return (neuron0x34b6f70()*-0.243051);
}

double NNfunction_bb_b2b2::synapse0x34a3810() {
   return (neuron0x34b7940()*-1.2871);
}

double NNfunction_bb_b2b2::synapse0x34a3850() {
   return (neuron0x34b8310()*0.415684);
}

double NNfunction_bb_b2b2::synapse0x34ad0c0() {
   return (neuron0x34b8ce0()*-2.05856);
}

double NNfunction_bb_b2b2::synapse0x34ad100() {
   return (neuron0x34b98c0()*0.878255);
}

double NNfunction_bb_b2b2::synapse0x34ada50() {
   return (neuron0x34ba290()*0.0479641);
}

double NNfunction_bb_b2b2::synapse0x34ada90() {
   return (neuron0x34ab110()*1.13864);
}

double NNfunction_bb_b2b2::synapse0x34ae420() {
   return (neuron0x34abae0()*0.535331);
}

double NNfunction_bb_b2b2::synapse0x34ae460() {
   return (neuron0x34ac4b0()*-0.0683812);
}

double NNfunction_bb_b2b2::synapse0x34aedf0() {
   return (neuron0x34beaf0()*0.906525);
}

double NNfunction_bb_b2b2::synapse0x34aee30() {
   return (neuron0x34bf3a0()*-0.0385985);
}

double NNfunction_bb_b2b2::synapse0x34af7c0() {
   return (neuron0x34bfd70()*0.0815108);
}

double NNfunction_bb_b2b2::synapse0x34af800() {
   return (neuron0x34c0740()*0.233202);
}

double NNfunction_bb_b2b2::synapse0x34b1f00() {
   return (neuron0x349c6c0()*-0.781389);
}

double NNfunction_bb_b2b2::synapse0x34b1f40() {
   return (neuron0x349d010()*-0.39325);
}

double NNfunction_bb_b2b2::synapse0x34a74c0() {
   return (neuron0x349daf0()*0.189512);
}

double NNfunction_bb_b2b2::synapse0x34a7500() {
   return (neuron0x349d590()*0.335638);
}

double NNfunction_bb_b2b2::synapse0x34b4ae0() {
   return (neuron0x349e8d0()*1.31131);
}

double NNfunction_bb_b2b2::synapse0x34b4b20() {
   return (neuron0x349f2a0()*-0.327288);
}

double NNfunction_bb_b2b2::synapse0x34b54b0() {
   return (neuron0x34a0070()*-0.144579);
}

double NNfunction_bb_b2b2::synapse0x34b54f0() {
   return (neuron0x34a0a40()*-0.852301);
}

double NNfunction_bb_b2b2::synapse0x34b5e80() {
   return (neuron0x34a1410()*-0.00185143);
}

double NNfunction_bb_b2b2::synapse0x34b5ec0() {
   return (neuron0x34a1ef0()*0.332091);
}

double NNfunction_bb_b2b2::synapse0x34b6850() {
   return (neuron0x34a28c0()*-0.0202976);
}

double NNfunction_bb_b2b2::synapse0x34b6890() {
   return (neuron0x349f9a0()*0.0319582);
}

double NNfunction_bb_b2b2::synapse0x34b7220() {
   return (neuron0x34a4470()*0.193167);
}

double NNfunction_bb_b2b2::synapse0x34b7260() {
   return (neuron0x34a4e40()*1.03954);
}

double NNfunction_bb_b2b2::synapse0x34b7bf0() {
   return (neuron0x34a5810()*0.250646);
}

double NNfunction_bb_b2b2::synapse0x34b7c30() {
   return (neuron0x34a61e0()*0.174971);
}

double NNfunction_bb_b2b2::synapse0x34b85c0() {
   return (neuron0x34a7ff0()*1.20733);
}

double NNfunction_bb_b2b2::synapse0x34b8600() {
   return (neuron0x34a82d0()*0.204246);
}

double NNfunction_bb_b2b2::synapse0x34b8f90() {
   return (neuron0x34a8ca0()*1.16127);
}

double NNfunction_bb_b2b2::synapse0x34b8fd0() {
   return (neuron0x34a9670()*-0.160524);
}

double NNfunction_bb_b2b2::synapse0x34b9b70() {
   return (neuron0x34aa040()*-0.32216);
}

double NNfunction_bb_b2b2::synapse0x34b9bb0() {
   return (neuron0x34aaa10()*-0.00045488);
}

double NNfunction_bb_b2b2::synapse0x34ba540() {
   return (neuron0x34a3560()*-0.995603);
}

double NNfunction_bb_b2b2::synapse0x34ba580() {
   return (neuron0x34a3f30()*0.559357);
}

double NNfunction_bb_b2b2::synapse0x34ab3c0() {
   return (neuron0x34ad7a0()*-0.144219);
}

double NNfunction_bb_b2b2::synapse0x34ab400() {
   return (neuron0x34ae170()*0.317963);
}

double NNfunction_bb_b2b2::synapse0x34abd90() {
   return (neuron0x34aeb40()*1.04948);
}

double NNfunction_bb_b2b2::synapse0x34abdd0() {
   return (neuron0x34af510()*0.975809);
}

double NNfunction_bb_b2b2::synapse0x34ac760() {
   return (neuron0x34afee0()*-0.0559706);
}

double NNfunction_bb_b2b2::synapse0x34ac7a0() {
   return (neuron0x34b08b0()*-0.246902);
}

double NNfunction_bb_b2b2::synapse0x34bec80() {
   return (neuron0x34b1280()*-0.376097);
}

double NNfunction_bb_b2b2::synapse0x34becc0() {
   return (neuron0x34b1c50()*-0.77384);
}

double NNfunction_bb_b2b2::synapse0x34bf650() {
   return (neuron0x34a7ce0()*-0.127819);
}

double NNfunction_bb_b2b2::synapse0x34bf690() {
   return (neuron0x34b4830()*-0.580165);
}

double NNfunction_bb_b2b2::synapse0x34c0020() {
   return (neuron0x34b5200()*-0.0924287);
}

double NNfunction_bb_b2b2::synapse0x34c0060() {
   return (neuron0x34b5bd0()*2.65751);
}

double NNfunction_bb_b2b2::synapse0x34c09f0() {
   return (neuron0x34b65a0()*-0.112741);
}

double NNfunction_bb_b2b2::synapse0x34c0a30() {
   return (neuron0x34b6f70()*0.091301);
}

double NNfunction_bb_b2b2::synapse0x349c8e0() {
   return (neuron0x34b7940()*-0.450932);
}

double NNfunction_bb_b2b2::synapse0x349c920() {
   return (neuron0x34b8310()*0.431794);
}

double NNfunction_bb_b2b2::synapse0x34b0190() {
   return (neuron0x34b8ce0()*-1.82441);
}

double NNfunction_bb_b2b2::synapse0x34b01d0() {
   return (neuron0x34b98c0()*2.74897);
}

double NNfunction_bb_b2b2::synapse0x34c1110() {
   return (neuron0x34ba290()*0.0412103);
}

double NNfunction_bb_b2b2::synapse0x34c1150() {
   return (neuron0x34ab110()*0.0518323);
}

double NNfunction_bb_b2b2::synapse0x34c1190() {
   return (neuron0x34abae0()*0.154584);
}

double NNfunction_bb_b2b2::synapse0x34c11d0() {
   return (neuron0x34ac4b0()*-0.0267204);
}

double NNfunction_bb_b2b2::synapse0x34c8080() {
   return (neuron0x34beaf0()*-0.190122);
}

double NNfunction_bb_b2b2::synapse0x34c80c0() {
   return (neuron0x34bf3a0()*0.0256856);
}

double NNfunction_bb_b2b2::synapse0x34c8100() {
   return (neuron0x34bfd70()*-0.00438139);
}

double NNfunction_bb_b2b2::synapse0x34c8140() {
   return (neuron0x34c0740()*0.975915);
}

double NNfunction_bb_b2b2::synapse0x34c84c0() {
   return (neuron0x349c6c0()*-0.665119);
}

double NNfunction_bb_b2b2::synapse0x34c8500() {
   return (neuron0x349d010()*-0.00596183);
}

double NNfunction_bb_b2b2::synapse0x34c8540() {
   return (neuron0x349daf0()*-0.292846);
}

double NNfunction_bb_b2b2::synapse0x34c8580() {
   return (neuron0x349d590()*-0.255813);
}

double NNfunction_bb_b2b2::synapse0x34c85c0() {
   return (neuron0x349e8d0()*-0.751603);
}

double NNfunction_bb_b2b2::synapse0x34c8600() {
   return (neuron0x349f2a0()*0.983868);
}

double NNfunction_bb_b2b2::synapse0x34c8640() {
   return (neuron0x34a0070()*-0.0330658);
}

double NNfunction_bb_b2b2::synapse0x34c8680() {
   return (neuron0x34a0a40()*-0.636978);
}

double NNfunction_bb_b2b2::synapse0x34c86c0() {
   return (neuron0x34a1410()*0.0918568);
}

double NNfunction_bb_b2b2::synapse0x34c8700() {
   return (neuron0x34a1ef0()*-0.240652);
}

double NNfunction_bb_b2b2::synapse0x34c8740() {
   return (neuron0x34a28c0()*0.0636798);
}

double NNfunction_bb_b2b2::synapse0x34c8780() {
   return (neuron0x349f9a0()*-0.107893);
}

double NNfunction_bb_b2b2::synapse0x34c87c0() {
   return (neuron0x34a4470()*0.0906334);
}

double NNfunction_bb_b2b2::synapse0x34c8800() {
   return (neuron0x34a4e40()*-0.0330722);
}

double NNfunction_bb_b2b2::synapse0x34c8840() {
   return (neuron0x34a5810()*-0.0764911);
}

double NNfunction_bb_b2b2::synapse0x34c8880() {
   return (neuron0x34a61e0()*0.0146905);
}

double NNfunction_bb_b2b2::synapse0x34c8310() {
   return (neuron0x34a7ff0()*0.594429);
}

double NNfunction_bb_b2b2::synapse0x34c8350() {
   return (neuron0x34a82d0()*-0.00128199);
}

double NNfunction_bb_b2b2::synapse0x34c89d0() {
   return (neuron0x34a8ca0()*-0.506563);
}

double NNfunction_bb_b2b2::synapse0x34c8a10() {
   return (neuron0x34a9670()*0.149153);
}

double NNfunction_bb_b2b2::synapse0x34c8a50() {
   return (neuron0x34aa040()*-0.170488);
}

double NNfunction_bb_b2b2::synapse0x34c8a90() {
   return (neuron0x34aaa10()*0.056409);
}

double NNfunction_bb_b2b2::synapse0x34c8ad0() {
   return (neuron0x34a3560()*0.0866892);
}

double NNfunction_bb_b2b2::synapse0x34c8b10() {
   return (neuron0x34a3f30()*-0.639696);
}

double NNfunction_bb_b2b2::synapse0x34c8b50() {
   return (neuron0x34ad7a0()*0.0352721);
}

double NNfunction_bb_b2b2::synapse0x34c8b90() {
   return (neuron0x34ae170()*-1.12255);
}

double NNfunction_bb_b2b2::synapse0x34c8bd0() {
   return (neuron0x34aeb40()*-0.715784);
}

double NNfunction_bb_b2b2::synapse0x34c8c10() {
   return (neuron0x34af510()*-0.0704348);
}

double NNfunction_bb_b2b2::synapse0x34c8c50() {
   return (neuron0x34afee0()*0.131893);
}

double NNfunction_bb_b2b2::synapse0x34c8c90() {
   return (neuron0x34b08b0()*-0.449611);
}

double NNfunction_bb_b2b2::synapse0x34c8cd0() {
   return (neuron0x34b1280()*0.258044);
}

double NNfunction_bb_b2b2::synapse0x34c8d10() {
   return (neuron0x34b1c50()*-0.742144);
}

double NNfunction_bb_b2b2::synapse0x34c88c0() {
   return (neuron0x34a7ce0()*0.0751557);
}

double NNfunction_bb_b2b2::synapse0x34c8900() {
   return (neuron0x34b4830()*-0.256338);
}

double NNfunction_bb_b2b2::synapse0x34c8940() {
   return (neuron0x34b5200()*1.31988);
}

double NNfunction_bb_b2b2::synapse0x34c8980() {
   return (neuron0x34b5bd0()*1.74812);
}

double NNfunction_bb_b2b2::synapse0x34c8f60() {
   return (neuron0x34b65a0()*0.171582);
}

double NNfunction_bb_b2b2::synapse0x34c8fa0() {
   return (neuron0x34b6f70()*-0.0530787);
}

double NNfunction_bb_b2b2::synapse0x34c8fe0() {
   return (neuron0x34b7940()*1.00751);
}

double NNfunction_bb_b2b2::synapse0x34c9020() {
   return (neuron0x34b8310()*-0.0696178);
}

double NNfunction_bb_b2b2::synapse0x34c9060() {
   return (neuron0x34b8ce0()*0.154081);
}

double NNfunction_bb_b2b2::synapse0x34c90a0() {
   return (neuron0x34b98c0()*2.01476);
}

double NNfunction_bb_b2b2::synapse0x34c90e0() {
   return (neuron0x34ba290()*-0.0988633);
}

double NNfunction_bb_b2b2::synapse0x34c9120() {
   return (neuron0x34ab110()*-0.00870652);
}

double NNfunction_bb_b2b2::synapse0x34c9160() {
   return (neuron0x34abae0()*-0.132829);
}

double NNfunction_bb_b2b2::synapse0x34c91a0() {
   return (neuron0x34ac4b0()*0.0498997);
}

double NNfunction_bb_b2b2::synapse0x34c91e0() {
   return (neuron0x34beaf0()*0.24553);
}

double NNfunction_bb_b2b2::synapse0x34c9220() {
   return (neuron0x34bf3a0()*0.0184057);
}

double NNfunction_bb_b2b2::synapse0x34c9260() {
   return (neuron0x34bfd70()*0.0415987);
}

double NNfunction_bb_b2b2::synapse0x34c92a0() {
   return (neuron0x34c0740()*0.694694);
}

double NNfunction_bb_b2b2::synapse0x34c9620() {
   return (neuron0x349c6c0()*3.97406);
}

double NNfunction_bb_b2b2::synapse0x34c9660() {
   return (neuron0x349d010()*1.34215);
}

double NNfunction_bb_b2b2::synapse0x34c96a0() {
   return (neuron0x349daf0()*-1.24198);
}

double NNfunction_bb_b2b2::synapse0x34c96e0() {
   return (neuron0x349d590()*-1.51387);
}

double NNfunction_bb_b2b2::synapse0x34c9720() {
   return (neuron0x349e8d0()*-4.42908);
}

double NNfunction_bb_b2b2::synapse0x34c9760() {
   return (neuron0x349f2a0()*3.95705);
}

double NNfunction_bb_b2b2::synapse0x34c97a0() {
   return (neuron0x34a0070()*-1.61586);
}

double NNfunction_bb_b2b2::synapse0x34c97e0() {
   return (neuron0x34a0a40()*2.80443);
}

double NNfunction_bb_b2b2::synapse0x34c9820() {
   return (neuron0x34a1410()*-0.315135);
}

double NNfunction_bb_b2b2::synapse0x34c9860() {
   return (neuron0x34a1ef0()*-1.38553);
}

double NNfunction_bb_b2b2::synapse0x34c98a0() {
   return (neuron0x34a28c0()*-0.123182);
}

double NNfunction_bb_b2b2::synapse0x34c98e0() {
   return (neuron0x349f9a0()*1.0114);
}

double NNfunction_bb_b2b2::synapse0x34c9920() {
   return (neuron0x34a4470()*-2.11135);
}

double NNfunction_bb_b2b2::synapse0x34c9960() {
   return (neuron0x34a4e40()*-3.36907);
}

double NNfunction_bb_b2b2::synapse0x34c99a0() {
   return (neuron0x34a5810()*-3.07018);
}

double NNfunction_bb_b2b2::synapse0x34c99e0() {
   return (neuron0x34a61e0()*-0.499405);
}

double NNfunction_bb_b2b2::synapse0x34c9470() {
   return (neuron0x34a7ff0()*-3.86522);
}

double NNfunction_bb_b2b2::synapse0x34c94b0() {
   return (neuron0x34a82d0()*-1.00119);
}

double NNfunction_bb_b2b2::synapse0x34c9b30() {
   return (neuron0x34a8ca0()*-0.995511);
}

double NNfunction_bb_b2b2::synapse0x34c9b70() {
   return (neuron0x34a9670()*-1.23793);
}

double NNfunction_bb_b2b2::synapse0x34c9bb0() {
   return (neuron0x34aa040()*3.53171);
}

double NNfunction_bb_b2b2::synapse0x34c9bf0() {
   return (neuron0x34aaa10()*-0.250374);
}

double NNfunction_bb_b2b2::synapse0x34c9c30() {
   return (neuron0x34a3560()*4.00251);
}

double NNfunction_bb_b2b2::synapse0x34c9c70() {
   return (neuron0x34a3f30()*-5.1411);
}

double NNfunction_bb_b2b2::synapse0x34c9cb0() {
   return (neuron0x34ad7a0()*0.658213);
}

double NNfunction_bb_b2b2::synapse0x34c9cf0() {
   return (neuron0x34ae170()*-4.18946);
}

double NNfunction_bb_b2b2::synapse0x34c9d30() {
   return (neuron0x34aeb40()*-2.11746);
}

double NNfunction_bb_b2b2::synapse0x34c9d70() {
   return (neuron0x34af510()*-2.9184);
}

double NNfunction_bb_b2b2::synapse0x34c9db0() {
   return (neuron0x34afee0()*1.1167);
}

double NNfunction_bb_b2b2::synapse0x34c9df0() {
   return (neuron0x34b08b0()*3.8922);
}

double NNfunction_bb_b2b2::synapse0x34c9e30() {
   return (neuron0x34b1280()*2.63667);
}

double NNfunction_bb_b2b2::synapse0x34c9e70() {
   return (neuron0x34b1c50()*3.50737);
}

double NNfunction_bb_b2b2::synapse0x34c9a20() {
   return (neuron0x34a7ce0()*1.20475);
}

double NNfunction_bb_b2b2::synapse0x34c9a60() {
   return (neuron0x34b4830()*3.47234);
}

double NNfunction_bb_b2b2::synapse0x34c9aa0() {
   return (neuron0x34b5200()*-4.69756);
}

double NNfunction_bb_b2b2::synapse0x34c9ae0() {
   return (neuron0x34b5bd0()*-0.672776);
}

double NNfunction_bb_b2b2::synapse0x34ca0c0() {
   return (neuron0x34b65a0()*-2.13461);
}

double NNfunction_bb_b2b2::synapse0x34ca100() {
   return (neuron0x34b6f70()*-0.962456);
}

double NNfunction_bb_b2b2::synapse0x34ca140() {
   return (neuron0x34b7940()*2.29232);
}

double NNfunction_bb_b2b2::synapse0x34ca180() {
   return (neuron0x34b8310()*2.00783);
}

double NNfunction_bb_b2b2::synapse0x34ca1c0() {
   return (neuron0x34b8ce0()*2.70546);
}

double NNfunction_bb_b2b2::synapse0x34ca200() {
   return (neuron0x34b98c0()*-0.116228);
}

double NNfunction_bb_b2b2::synapse0x34ca240() {
   return (neuron0x34ba290()*0.346229);
}

double NNfunction_bb_b2b2::synapse0x34ca280() {
   return (neuron0x34ab110()*0.108853);
}

double NNfunction_bb_b2b2::synapse0x34ca2c0() {
   return (neuron0x34abae0()*-2.32013);
}

double NNfunction_bb_b2b2::synapse0x34ca300() {
   return (neuron0x34ac4b0()*-0.235468);
}

double NNfunction_bb_b2b2::synapse0x34ca340() {
   return (neuron0x34beaf0()*-1.92843);
}

double NNfunction_bb_b2b2::synapse0x34ca380() {
   return (neuron0x34bf3a0()*-0.377913);
}

double NNfunction_bb_b2b2::synapse0x34ca3c0() {
   return (neuron0x34bfd70()*0.211619);
}

double NNfunction_bb_b2b2::synapse0x34ca400() {
   return (neuron0x34c0740()*-3.45565);
}

double NNfunction_bb_b2b2::synapse0x34ca780() {
   return (neuron0x349c6c0()*0.957628);
}

double NNfunction_bb_b2b2::synapse0x34ca7c0() {
   return (neuron0x349d010()*0.15493);
}

double NNfunction_bb_b2b2::synapse0x34ca800() {
   return (neuron0x349daf0()*0.378451);
}

double NNfunction_bb_b2b2::synapse0x34ca840() {
   return (neuron0x349d590()*0.153227);
}

double NNfunction_bb_b2b2::synapse0x34ca880() {
   return (neuron0x349e8d0()*-0.534139);
}

double NNfunction_bb_b2b2::synapse0x34ca8c0() {
   return (neuron0x349f2a0()*-0.717372);
}

double NNfunction_bb_b2b2::synapse0x34ca900() {
   return (neuron0x34a0070()*0.179713);
}

double NNfunction_bb_b2b2::synapse0x34ca940() {
   return (neuron0x34a0a40()*0.464131);
}

double NNfunction_bb_b2b2::synapse0x34ca980() {
   return (neuron0x34a1410()*-0.0578289);
}

double NNfunction_bb_b2b2::synapse0x34ca9c0() {
   return (neuron0x34a1ef0()*0.0173407);
}

double NNfunction_bb_b2b2::synapse0x34caa00() {
   return (neuron0x34a28c0()*-0.0314523);
}

double NNfunction_bb_b2b2::synapse0x34caa40() {
   return (neuron0x349f9a0()*0.0199217);
}

double NNfunction_bb_b2b2::synapse0x34caa80() {
   return (neuron0x34a4470()*-0.00429798);
}

double NNfunction_bb_b2b2::synapse0x34caac0() {
   return (neuron0x34a4e40()*-0.43058);
}

double NNfunction_bb_b2b2::synapse0x34cab00() {
   return (neuron0x34a5810()*-0.0730374);
}

double NNfunction_bb_b2b2::synapse0x34cab40() {
   return (neuron0x34a61e0()*-0.0982156);
}

double NNfunction_bb_b2b2::synapse0x34ca5d0() {
   return (neuron0x34a7ff0()*-0.957699);
}

double NNfunction_bb_b2b2::synapse0x34ca610() {
   return (neuron0x34a82d0()*-0.0616196);
}

double NNfunction_bb_b2b2::synapse0x34cac90() {
   return (neuron0x34a8ca0()*-0.967976);
}

double NNfunction_bb_b2b2::synapse0x34cacd0() {
   return (neuron0x34a9670()*0.0687704);
}

double NNfunction_bb_b2b2::synapse0x34cad10() {
   return (neuron0x34aa040()*-0.292558);
}

double NNfunction_bb_b2b2::synapse0x34cad50() {
   return (neuron0x34aaa10()*-0.0416947);
}

double NNfunction_bb_b2b2::synapse0x34cad90() {
   return (neuron0x34a3560()*0.333679);
}

double NNfunction_bb_b2b2::synapse0x34cadd0() {
   return (neuron0x34a3f30()*0.272395);
}

double NNfunction_bb_b2b2::synapse0x34cae10() {
   return (neuron0x34ad7a0()*0.0360395);
}

double NNfunction_bb_b2b2::synapse0x34cae50() {
   return (neuron0x34ae170()*0.843969);
}

double NNfunction_bb_b2b2::synapse0x34cae90() {
   return (neuron0x34aeb40()*0.393311);
}

double NNfunction_bb_b2b2::synapse0x34caed0() {
   return (neuron0x34af510()*-0.341417);
}

double NNfunction_bb_b2b2::synapse0x34caf10() {
   return (neuron0x34afee0()*-0.0307004);
}

double NNfunction_bb_b2b2::synapse0x34caf50() {
   return (neuron0x34b08b0()*-0.0790121);
}

double NNfunction_bb_b2b2::synapse0x34caf90() {
   return (neuron0x34b1280()*0.0322343);
}

double NNfunction_bb_b2b2::synapse0x34cafd0() {
   return (neuron0x34b1c50()*-0.775482);
}

double NNfunction_bb_b2b2::synapse0x34cab80() {
   return (neuron0x34a7ce0()*-0.0129407);
}

double NNfunction_bb_b2b2::synapse0x34cabc0() {
   return (neuron0x34b4830()*0.452279);
}

double NNfunction_bb_b2b2::synapse0x34cac00() {
   return (neuron0x34b5200()*-0.739509);
}

double NNfunction_bb_b2b2::synapse0x34cac40() {
   return (neuron0x34b5bd0()*1.56842);
}

double NNfunction_bb_b2b2::synapse0x34cb220() {
   return (neuron0x34b65a0()*0.0907535);
}

double NNfunction_bb_b2b2::synapse0x34cb260() {
   return (neuron0x34b6f70()*0.0941895);
}

double NNfunction_bb_b2b2::synapse0x34cb2a0() {
   return (neuron0x34b7940()*-0.505078);
}

double NNfunction_bb_b2b2::synapse0x34cb2e0() {
   return (neuron0x34b8310()*-0.0420066);
}

double NNfunction_bb_b2b2::synapse0x34cb320() {
   return (neuron0x34b8ce0()*0.768729);
}

double NNfunction_bb_b2b2::synapse0x34cb360() {
   return (neuron0x34b98c0()*2.7726);
}

double NNfunction_bb_b2b2::synapse0x34cb3a0() {
   return (neuron0x34ba290()*0.0421123);
}

double NNfunction_bb_b2b2::synapse0x34cb3e0() {
   return (neuron0x34ab110()*-0.0746551);
}

double NNfunction_bb_b2b2::synapse0x34cb420() {
   return (neuron0x34abae0()*0.324407);
}

double NNfunction_bb_b2b2::synapse0x34cb460() {
   return (neuron0x34ac4b0()*0.00841843);
}

double NNfunction_bb_b2b2::synapse0x34cb4a0() {
   return (neuron0x34beaf0()*0.211149);
}

double NNfunction_bb_b2b2::synapse0x34cb4e0() {
   return (neuron0x34bf3a0()*-0.0184533);
}

double NNfunction_bb_b2b2::synapse0x34cb520() {
   return (neuron0x34bfd70()*-0.0461253);
}

double NNfunction_bb_b2b2::synapse0x34cb560() {
   return (neuron0x34c0740()*-1.17317);
}

double NNfunction_bb_b2b2::synapse0x34cb7c0() {
   return (neuron0x34c7940()*-3.17861);
}

double NNfunction_bb_b2b2::synapse0x34cb800() {
   return (neuron0x34c7ce0()*-6.31877);
}

double NNfunction_bb_b2b2::synapse0x34cb840() {
   return (neuron0x34c8180()*-2.7628);
}

double NNfunction_bb_b2b2::synapse0x34cb880() {
   return (neuron0x34c92e0()*12.1357);
}

double NNfunction_bb_b2b2::synapse0x34cb8c0() {
   return (neuron0x34ca440()*-3.28449);
}

