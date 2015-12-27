#include "NNfunction_ns_chi04_dL.h"
#include <cmath>

double NNfunction_ns_chi04_dL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.7403)/15.0786;
   input1 = (in1 - 28.1218)/396.171;
   input2 = (in2 - 461.653)/496.569;
   input3 = (in3 - 126.121)/715.456;
   input4 = (in4 - 840.524)/818.099;
   input5 = (in5 - 746.732)/817.116;
   input6 = (in6 - 743.824)/813.804;
   input7 = (in7 - 741.301)/795.885;
   input8 = (in8 - 750.918)/835.67;
   input9 = (in9 - 741.303)/822.564;
   input10 = (in10 - 765.225)/828.551;
   input11 = (in11 - 368.624)/281.707;
   input12 = (in12 - 669.824)/709.191;
   input13 = (in13 - 480.987)/414.365;
   input14 = (in14 - 674.07)/671.034;
   input15 = (in15 - 681.037)/678.749;
   input16 = (in16 - 488.704)/464.934;
   input17 = (in17 - 692.143)/736.849;
   input18 = (in18 - 695.231)/745.61;
   input19 = (in19 - 695.46)/710.302;
   input20 = (in20 - -99.844)/429.74;
   input21 = (in21 - -128.287)/976.51;
   input22 = (in22 - 4.82899)/992.889;
   input23 = (in23 - -40.6942)/317.268;
   switch(index) {
     case 0:
         return neuron0x3ab8b30();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi04_dL::Value(int index, double* input) {
   input0 = (input[0] - 23.7403)/15.0786;
   input1 = (input[1] - 28.1218)/396.171;
   input2 = (input[2] - 461.653)/496.569;
   input3 = (input[3] - 126.121)/715.456;
   input4 = (input[4] - 840.524)/818.099;
   input5 = (input[5] - 746.732)/817.116;
   input6 = (input[6] - 743.824)/813.804;
   input7 = (input[7] - 741.301)/795.885;
   input8 = (input[8] - 750.918)/835.67;
   input9 = (input[9] - 741.303)/822.564;
   input10 = (input[10] - 765.225)/828.551;
   input11 = (input[11] - 368.624)/281.707;
   input12 = (input[12] - 669.824)/709.191;
   input13 = (input[13] - 480.987)/414.365;
   input14 = (input[14] - 674.07)/671.034;
   input15 = (input[15] - 681.037)/678.749;
   input16 = (input[16] - 488.704)/464.934;
   input17 = (input[17] - 692.143)/736.849;
   input18 = (input[18] - 695.231)/745.61;
   input19 = (input[19] - 695.46)/710.302;
   input20 = (input[20] - -99.844)/429.74;
   input21 = (input[21] - -128.287)/976.51;
   input22 = (input[22] - 4.82899)/992.889;
   input23 = (input[23] - -40.6942)/317.268;
   switch(index) {
     case 0:
         return neuron0x3ab8b30();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi04_dL::neuron0x3a83ba0() {
   return input0;
}

double NNfunction_ns_chi04_dL::neuron0x3a83e50() {
   return input1;
}

double NNfunction_ns_chi04_dL::neuron0x3a84190() {
   return input2;
}

double NNfunction_ns_chi04_dL::neuron0x3a844d0() {
   return input3;
}

double NNfunction_ns_chi04_dL::neuron0x3a84810() {
   return input4;
}

double NNfunction_ns_chi04_dL::neuron0x3a84b50() {
   return input5;
}

double NNfunction_ns_chi04_dL::neuron0x3a84e90() {
   return input6;
}

double NNfunction_ns_chi04_dL::neuron0x3a851d0() {
   return input7;
}

double NNfunction_ns_chi04_dL::neuron0x3a85510() {
   return input8;
}

double NNfunction_ns_chi04_dL::neuron0x3a85850() {
   return input9;
}

double NNfunction_ns_chi04_dL::neuron0x3a85b90() {
   return input10;
}

double NNfunction_ns_chi04_dL::neuron0x3a85ed0() {
   return input11;
}

double NNfunction_ns_chi04_dL::neuron0x3a86210() {
   return input12;
}

double NNfunction_ns_chi04_dL::neuron0x3a86550() {
   return input13;
}

double NNfunction_ns_chi04_dL::neuron0x3a86890() {
   return input14;
}

double NNfunction_ns_chi04_dL::neuron0x3a86bd0() {
   return input15;
}

double NNfunction_ns_chi04_dL::neuron0x3a86f10() {
   return input16;
}

double NNfunction_ns_chi04_dL::neuron0x3a87470() {
   return input17;
}

double NNfunction_ns_chi04_dL::neuron0x3a877b0() {
   return input18;
}

double NNfunction_ns_chi04_dL::neuron0x3a87af0() {
   return input19;
}

double NNfunction_ns_chi04_dL::neuron0x3a87e30() {
   return input20;
}

double NNfunction_ns_chi04_dL::neuron0x3a88170() {
   return input21;
}

double NNfunction_ns_chi04_dL::neuron0x3a884b0() {
   return input22;
}

double NNfunction_ns_chi04_dL::neuron0x3a887f0() {
   return input23;
}

double NNfunction_ns_chi04_dL::input0x3a88c60() {
   double input = -0.189656;
   input += synapse0x3a88fa0();
   input += synapse0x3a88fe0();
   input += synapse0x3a89020();
   input += synapse0x3a89060();
   input += synapse0x3a890a0();
   input += synapse0x3a890e0();
   input += synapse0x3a89120();
   input += synapse0x3a89160();
   input += synapse0x3a891a0();
   input += synapse0x3a891e0();
   input += synapse0x3a89220();
   input += synapse0x3a89260();
   input += synapse0x3a892a0();
   input += synapse0x3a892e0();
   input += synapse0x3a89320();
   input += synapse0x3a89360();
   input += synapse0x3a88df0();
   input += synapse0x3a88e30();
   input += synapse0x383fd20();
   input += synapse0x383fd60();
   input += synapse0x3a893a0();
   input += synapse0x3a893e0();
   input += synapse0x3a89420();
   input += synapse0x3a89460();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a88c60() {
   double input = input0x3a88c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a894a0() {
   double input = -0.64085;
   input += synapse0x3a897e0();
   input += synapse0x3a89820();
   input += synapse0x3a89860();
   input += synapse0x3a898a0();
   input += synapse0x3a898e0();
   input += synapse0x3a89920();
   input += synapse0x3a89960();
   input += synapse0x3a899a0();
   input += synapse0x3a899e0();
   input += synapse0x383fb70();
   input += synapse0x383fbb0();
   input += synapse0x383fbf0();
   input += synapse0x383fc30();
   input += synapse0x3a89c30();
   input += synapse0x3a89c70();
   input += synapse0x3a89cb0();
   input += synapse0x3a89630();
   input += synapse0x3a89670();
   input += synapse0x3a89e00();
   input += synapse0x3a89e40();
   input += synapse0x3a89e80();
   input += synapse0x3a89ec0();
   input += synapse0x3a89f00();
   input += synapse0x3a89f40();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a894a0() {
   double input = input0x3a894a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a89f80() {
   double input = 11.8027;
   input += synapse0x3a8a2c0();
   input += synapse0x3a8a300();
   input += synapse0x3a8a340();
   input += synapse0x3a8a380();
   input += synapse0x3a8a3c0();
   input += synapse0x3a8a400();
   input += synapse0x3a8a440();
   input += synapse0x3a8a480();
   input += synapse0x3a8a4c0();
   input += synapse0x3a8a500();
   input += synapse0x3a8a540();
   input += synapse0x3a8a580();
   input += synapse0x3a8a5c0();
   input += synapse0x3a8a600();
   input += synapse0x3a8a640();
   input += synapse0x3a8a680();
   input += synapse0x3a8a110();
   input += synapse0x3a8a150();
   input += synapse0x3840410();
   input += synapse0x384dce0();
   input += synapse0x384dd20();
   input += synapse0x3a8c5b0();
   input += synapse0x3a8c5f0();
   input += synapse0x3a838e0();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a89f80() {
   double input = input0x3a89f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a89a20() {
   double input = 0.730734;
   input += synapse0x3a839b0();
   input += synapse0x384e560();
   input += synapse0x3a89bb0();
   input += synapse0x3a89bf0();
   input += synapse0x3a8a7d0();
   input += synapse0x3a8a810();
   input += synapse0x3a8a850();
   input += synapse0x3a8a890();
   input += synapse0x3a8a8d0();
   input += synapse0x3a8a910();
   input += synapse0x3a8a950();
   input += synapse0x3a8a990();
   input += synapse0x3a8a9d0();
   input += synapse0x3a8aa10();
   input += synapse0x3a8aa50();
   input += synapse0x3a8aa90();
   input += synapse0x3a83920();
   input += synapse0x3a83960();
   input += synapse0x3a8abe0();
   input += synapse0x3a8ac20();
   input += synapse0x3a8ac60();
   input += synapse0x3a8aca0();
   input += synapse0x3a8ace0();
   input += synapse0x3a8ad20();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a89a20() {
   double input = input0x3a89a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a8ad60() {
   double input = -0.549791;
   input += synapse0x3a8b0a0();
   input += synapse0x3a8b0e0();
   input += synapse0x3a8b120();
   input += synapse0x3a8b160();
   input += synapse0x3a8b1a0();
   input += synapse0x3a8b1e0();
   input += synapse0x3a8b220();
   input += synapse0x3a8b260();
   input += synapse0x3a8b2a0();
   input += synapse0x3a8b2e0();
   input += synapse0x3a8b320();
   input += synapse0x3a8b360();
   input += synapse0x3a8b3a0();
   input += synapse0x3a8b3e0();
   input += synapse0x3a8b420();
   input += synapse0x3a8b460();
   input += synapse0x3a8b5b0();
   input += synapse0x3a8aef0();
   input += synapse0x3a8af30();
   input += synapse0x3a8c6f0();
   input += synapse0x3a8c730();
   input += synapse0x3a8c770();
   input += synapse0x3a8c7b0();
   input += synapse0x3a8c7f0();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a8ad60() {
   double input = input0x3a8ad60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a8c830() {
   double input = -3.29204;
   input += synapse0x3a8cb70();
   input += synapse0x3a8cbb0();
   input += synapse0x3a8cbf0();
   input += synapse0x3a8cc30();
   input += synapse0x3a8cc70();
   input += synapse0x3a8ccb0();
   input += synapse0x3a8ccf0();
   input += synapse0x3a8cd30();
   input += synapse0x3a8cd70();
   input += synapse0x384e030();
   input += synapse0x384e070();
   input += synapse0x384e0b0();
   input += synapse0x384e0f0();
   input += synapse0x384e130();
   input += synapse0x384e170();
   input += synapse0x384e1b0();
   input += synapse0x3a8c9c0();
   input += synapse0x3a8ca00();
   input += synapse0x384e300();
   input += synapse0x384e340();
   input += synapse0x384e380();
   input += synapse0x384e3c0();
   input += synapse0x384e400();
   input += synapse0x3a8d5c0();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a8c830() {
   double input = input0x3a8c830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a8d600() {
   double input = 0.0817234;
   input += synapse0x3a8d940();
   input += synapse0x3a8d980();
   input += synapse0x3a8d9c0();
   input += synapse0x3a8da00();
   input += synapse0x3a8da40();
   input += synapse0x3a8da80();
   input += synapse0x3a8dac0();
   input += synapse0x3a8db00();
   input += synapse0x3a8db40();
   input += synapse0x3a8db80();
   input += synapse0x3a8dbc0();
   input += synapse0x3a8dc00();
   input += synapse0x3a8dc40();
   input += synapse0x3a8dc80();
   input += synapse0x3a8dcc0();
   input += synapse0x3a8dd00();
   input += synapse0x3a8d790();
   input += synapse0x3a8d7d0();
   input += synapse0x3a8de50();
   input += synapse0x3a8de90();
   input += synapse0x3a8ded0();
   input += synapse0x3a8df10();
   input += synapse0x3a8df50();
   input += synapse0x3a8df90();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a8d600() {
   double input = input0x3a8d600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a8dfd0() {
   double input = -1.00948;
   input += synapse0x3a8e310();
   input += synapse0x3a8e350();
   input += synapse0x3a8e390();
   input += synapse0x3a8e3d0();
   input += synapse0x3a8e410();
   input += synapse0x3a8e450();
   input += synapse0x3a8e490();
   input += synapse0x3a8e4d0();
   input += synapse0x3a8e510();
   input += synapse0x3a8e550();
   input += synapse0x3a8e590();
   input += synapse0x3a8e5d0();
   input += synapse0x3a8e610();
   input += synapse0x3a8e650();
   input += synapse0x3a8e690();
   input += synapse0x3a8e6d0();
   input += synapse0x3a8e160();
   input += synapse0x3a8e1a0();
   input += synapse0x3a8e820();
   input += synapse0x3a8e860();
   input += synapse0x3a8e8a0();
   input += synapse0x3a8e8e0();
   input += synapse0x3a8e920();
   input += synapse0x3a8e960();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a8dfd0() {
   double input = input0x3a8dfd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a8e9a0() {
   double input = 0.199426;
   input += synapse0x3a87360();
   input += synapse0x3a873a0();
   input += synapse0x3a873e0();
   input += synapse0x3a87420();
   input += synapse0x3a8eef0();
   input += synapse0x3a8ef30();
   input += synapse0x3a8ef70();
   input += synapse0x3a8efb0();
   input += synapse0x3a8eff0();
   input += synapse0x3a8f030();
   input += synapse0x3a8f070();
   input += synapse0x3a8f0b0();
   input += synapse0x3a8f0f0();
   input += synapse0x3a8f130();
   input += synapse0x3a8f170();
   input += synapse0x3a8f1b0();
   input += synapse0x3a8eb30();
   input += synapse0x3a8eb70();
   input += synapse0x3a8f300();
   input += synapse0x3a8f340();
   input += synapse0x3a8f380();
   input += synapse0x3a8f3c0();
   input += synapse0x3a8f400();
   input += synapse0x3a8f440();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a8e9a0() {
   double input = input0x3a8e9a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a8f480() {
   double input = -2.71003;
   input += synapse0x3a8f7c0();
   input += synapse0x3a8f800();
   input += synapse0x3a8f840();
   input += synapse0x3a8f880();
   input += synapse0x3a8f8c0();
   input += synapse0x3a8f900();
   input += synapse0x3a8f940();
   input += synapse0x3a8f980();
   input += synapse0x3a8f9c0();
   input += synapse0x3a8fa00();
   input += synapse0x3a8fa40();
   input += synapse0x3a8fa80();
   input += synapse0x3a8fac0();
   input += synapse0x3a8fb00();
   input += synapse0x3a8fb40();
   input += synapse0x3a8fb80();
   input += synapse0x3a8f610();
   input += synapse0x3a8f650();
   input += synapse0x3a8fcd0();
   input += synapse0x3a8fd10();
   input += synapse0x3a8fd50();
   input += synapse0x3a8fd90();
   input += synapse0x3a8fdd0();
   input += synapse0x3a8fe10();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a8f480() {
   double input = input0x3a8f480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a8fe50() {
   double input = -0.67283;
   input += synapse0x3a90190();
   input += synapse0x3a901d0();
   input += synapse0x3a90210();
   input += synapse0x3a90250();
   input += synapse0x3a90290();
   input += synapse0x3a902d0();
   input += synapse0x3a90310();
   input += synapse0x3a90350();
   input += synapse0x3a90390();
   input += synapse0x3a903d0();
   input += synapse0x3a90410();
   input += synapse0x3a90450();
   input += synapse0x3a90490();
   input += synapse0x3a904d0();
   input += synapse0x3a90510();
   input += synapse0x3a90550();
   input += synapse0x3a8ffe0();
   input += synapse0x3a90020();
   input += synapse0x3a8cdb0();
   input += synapse0x3a8cdf0();
   input += synapse0x3a8ce30();
   input += synapse0x3a8ce70();
   input += synapse0x3a8ceb0();
   input += synapse0x3a8cef0();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a8fe50() {
   double input = input0x3a8fe50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a8cf30() {
   double input = 0.863266;
   input += synapse0x3a8d270();
   input += synapse0x3a8d2b0();
   input += synapse0x3a8d2f0();
   input += synapse0x3a8d330();
   input += synapse0x3a8d370();
   input += synapse0x3a8d3b0();
   input += synapse0x3a8d3f0();
   input += synapse0x3a8d430();
   input += synapse0x3a8d470();
   input += synapse0x3a8d4b0();
   input += synapse0x3a8d4f0();
   input += synapse0x3a8d530();
   input += synapse0x3a8d570();
   input += synapse0x3a916b0();
   input += synapse0x3a916f0();
   input += synapse0x3a91730();
   input += synapse0x3a8d0c0();
   input += synapse0x3a8d100();
   input += synapse0x3a91880();
   input += synapse0x3a918c0();
   input += synapse0x3a91900();
   input += synapse0x3a91940();
   input += synapse0x3a91980();
   input += synapse0x3a919c0();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a8cf30() {
   double input = input0x3a8cf30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a91a00() {
   double input = 0.416754;
   input += synapse0x3a91d40();
   input += synapse0x3a91d80();
   input += synapse0x3a91dc0();
   input += synapse0x3a91e00();
   input += synapse0x3a91e40();
   input += synapse0x3a91e80();
   input += synapse0x3a91ec0();
   input += synapse0x3a91f00();
   input += synapse0x3a91f40();
   input += synapse0x3a91f80();
   input += synapse0x3a91fc0();
   input += synapse0x3a92000();
   input += synapse0x3a92040();
   input += synapse0x3a92080();
   input += synapse0x3a920c0();
   input += synapse0x3a92100();
   input += synapse0x3a91b90();
   input += synapse0x3a91bd0();
   input += synapse0x3a92250();
   input += synapse0x3a92290();
   input += synapse0x3a922d0();
   input += synapse0x3a92310();
   input += synapse0x3a92350();
   input += synapse0x3a92390();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a91a00() {
   double input = input0x3a91a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a923d0() {
   double input = 0.107512;
   input += synapse0x3a92710();
   input += synapse0x3a92750();
   input += synapse0x3a92790();
   input += synapse0x3a927d0();
   input += synapse0x3a92810();
   input += synapse0x3a92850();
   input += synapse0x3a92890();
   input += synapse0x3a928d0();
   input += synapse0x3a92910();
   input += synapse0x3a92950();
   input += synapse0x3a92990();
   input += synapse0x3a929d0();
   input += synapse0x3a92a10();
   input += synapse0x3a92a50();
   input += synapse0x3a92a90();
   input += synapse0x3a92ad0();
   input += synapse0x3a92560();
   input += synapse0x3a925a0();
   input += synapse0x3a92c20();
   input += synapse0x3a92c60();
   input += synapse0x3a92ca0();
   input += synapse0x3a92ce0();
   input += synapse0x3a92d20();
   input += synapse0x3a92d60();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a923d0() {
   double input = input0x3a923d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a92da0() {
   double input = 0.334897;
   input += synapse0x3a930e0();
   input += synapse0x3a93120();
   input += synapse0x3a93160();
   input += synapse0x3a931a0();
   input += synapse0x3a931e0();
   input += synapse0x3a93220();
   input += synapse0x3a93260();
   input += synapse0x3a932a0();
   input += synapse0x3a932e0();
   input += synapse0x3a93320();
   input += synapse0x3a93360();
   input += synapse0x3a933a0();
   input += synapse0x3a933e0();
   input += synapse0x3a93420();
   input += synapse0x3a93460();
   input += synapse0x3a934a0();
   input += synapse0x3a92f30();
   input += synapse0x3a92f70();
   input += synapse0x3a935f0();
   input += synapse0x3a93630();
   input += synapse0x3a93670();
   input += synapse0x3a936b0();
   input += synapse0x3a936f0();
   input += synapse0x3a93730();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a92da0() {
   double input = input0x3a92da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a93770() {
   double input = -0.886906;
   input += synapse0x3a93ab0();
   input += synapse0x3a83d30();
   input += synapse0x3a83d70();
   input += synapse0x3a84070();
   input += synapse0x3a840b0();
   input += synapse0x3a843b0();
   input += synapse0x3a843f0();
   input += synapse0x3a846f0();
   input += synapse0x3a84730();
   input += synapse0x3a84a30();
   input += synapse0x3a84a70();
   input += synapse0x3a84d70();
   input += synapse0x3a84db0();
   input += synapse0x3a850b0();
   input += synapse0x3a850f0();
   input += synapse0x3a853f0();
   input += synapse0x3a85430();
   input += synapse0x3a85730();
   input += synapse0x3a85770();
   input += synapse0x3a85a70();
   input += synapse0x3a85ab0();
   input += synapse0x3a85db0();
   input += synapse0x3a85df0();
   input += synapse0x3a860f0();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a93770() {
   double input = input0x3a93770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a95580() {
   double input = 0.967934;
   input += synapse0x3a86130();
   input += synapse0x3a86df0();
   input += synapse0x3a86e30();
   input += synapse0x3a93900();
   input += synapse0x3a93940();
   input += synapse0x3a87130();
   input += synapse0x3a87170();
   input += synapse0x3a87690();
   input += synapse0x3a876d0();
   input += synapse0x3a879d0();
   input += synapse0x3a87a10();
   input += synapse0x3a87d10();
   input += synapse0x3a87d50();
   input += synapse0x3a88050();
   input += synapse0x3a88090();
   input += synapse0x3a88390();
   input += synapse0x3a883d0();
   input += synapse0x3a886d0();
   input += synapse0x3a88710();
   input += synapse0x3a88a10();
   input += synapse0x3a88a50();
   input += synapse0x3a86430();
   input += synapse0x3a86470();
   input += synapse0x3a95820();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a95580() {
   double input = input0x3a95580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a95860() {
   double input = 3.45323;
   input += synapse0x3a95ba0();
   input += synapse0x3a95be0();
   input += synapse0x3a95c20();
   input += synapse0x3a95c60();
   input += synapse0x3a95ca0();
   input += synapse0x3a95ce0();
   input += synapse0x3a95d20();
   input += synapse0x3a95d60();
   input += synapse0x3a95da0();
   input += synapse0x3a95de0();
   input += synapse0x3a95e20();
   input += synapse0x3a95e60();
   input += synapse0x3a95ea0();
   input += synapse0x3a95ee0();
   input += synapse0x3a95f20();
   input += synapse0x3a95f60();
   input += synapse0x3a959f0();
   input += synapse0x3a95a30();
   input += synapse0x3a960b0();
   input += synapse0x3a960f0();
   input += synapse0x3a96130();
   input += synapse0x3a96170();
   input += synapse0x3a961b0();
   input += synapse0x3a961f0();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a95860() {
   double input = input0x3a95860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a96230() {
   double input = 7.916;
   input += synapse0x3a96570();
   input += synapse0x3a965b0();
   input += synapse0x3a965f0();
   input += synapse0x3a96630();
   input += synapse0x3a96670();
   input += synapse0x3a966b0();
   input += synapse0x3a966f0();
   input += synapse0x3a96730();
   input += synapse0x3a96770();
   input += synapse0x3a967b0();
   input += synapse0x3a967f0();
   input += synapse0x3a96830();
   input += synapse0x3a96870();
   input += synapse0x3a968b0();
   input += synapse0x3a968f0();
   input += synapse0x3a96930();
   input += synapse0x3a963c0();
   input += synapse0x3a96400();
   input += synapse0x3a96a80();
   input += synapse0x3a96ac0();
   input += synapse0x3a96b00();
   input += synapse0x3a96b40();
   input += synapse0x3a96b80();
   input += synapse0x3a96bc0();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a96230() {
   double input = input0x3a96230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a96c00() {
   double input = -0.661934;
   input += synapse0x3a96f40();
   input += synapse0x3a96f80();
   input += synapse0x3a96fc0();
   input += synapse0x3a97000();
   input += synapse0x3a97040();
   input += synapse0x3a97080();
   input += synapse0x3a970c0();
   input += synapse0x3a97100();
   input += synapse0x3a97140();
   input += synapse0x3a97180();
   input += synapse0x3a971c0();
   input += synapse0x3a97200();
   input += synapse0x3a97240();
   input += synapse0x3a97280();
   input += synapse0x3a972c0();
   input += synapse0x3a97300();
   input += synapse0x3a96d90();
   input += synapse0x3a96dd0();
   input += synapse0x3a97450();
   input += synapse0x3a97490();
   input += synapse0x3a974d0();
   input += synapse0x3a97510();
   input += synapse0x3a97550();
   input += synapse0x3a97590();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a96c00() {
   double input = input0x3a96c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a975d0() {
   double input = 0.62962;
   input += synapse0x3a97910();
   input += synapse0x3a97950();
   input += synapse0x3a97990();
   input += synapse0x3a979d0();
   input += synapse0x3a97a10();
   input += synapse0x3a97a50();
   input += synapse0x3a97a90();
   input += synapse0x3a97ad0();
   input += synapse0x3a97b10();
   input += synapse0x3a97b50();
   input += synapse0x3a97b90();
   input += synapse0x3a97bd0();
   input += synapse0x3a97c10();
   input += synapse0x3a97c50();
   input += synapse0x3a97c90();
   input += synapse0x3a97cd0();
   input += synapse0x3a97760();
   input += synapse0x3a977a0();
   input += synapse0x3a97e20();
   input += synapse0x3a97e60();
   input += synapse0x3a97ea0();
   input += synapse0x3a97ee0();
   input += synapse0x3a97f20();
   input += synapse0x3a97f60();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a975d0() {
   double input = input0x3a975d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a97fa0() {
   double input = -1.92085;
   input += synapse0x3a982e0();
   input += synapse0x3a98320();
   input += synapse0x3a98360();
   input += synapse0x3a983a0();
   input += synapse0x3a983e0();
   input += synapse0x3a98420();
   input += synapse0x3a98460();
   input += synapse0x3a984a0();
   input += synapse0x3a984e0();
   input += synapse0x3a906a0();
   input += synapse0x3a906e0();
   input += synapse0x3a90720();
   input += synapse0x3a90760();
   input += synapse0x3a907a0();
   input += synapse0x3a907e0();
   input += synapse0x3a90820();
   input += synapse0x3a98130();
   input += synapse0x3a98170();
   input += synapse0x3a90970();
   input += synapse0x3a909b0();
   input += synapse0x3a909f0();
   input += synapse0x3a90a30();
   input += synapse0x3a90a70();
   input += synapse0x3a90ab0();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a97fa0() {
   double input = input0x3a97fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a90af0() {
   double input = -2.366;
   input += synapse0x3a90e30();
   input += synapse0x3a90e70();
   input += synapse0x3a90eb0();
   input += synapse0x3a90ef0();
   input += synapse0x3a90f30();
   input += synapse0x3a90f70();
   input += synapse0x3a90fb0();
   input += synapse0x3a90ff0();
   input += synapse0x3a91030();
   input += synapse0x3a91070();
   input += synapse0x3a910b0();
   input += synapse0x3a910f0();
   input += synapse0x3a91130();
   input += synapse0x3a91170();
   input += synapse0x3a911b0();
   input += synapse0x3a911f0();
   input += synapse0x3a90c80();
   input += synapse0x3a90cc0();
   input += synapse0x3a91340();
   input += synapse0x3a91380();
   input += synapse0x3a913c0();
   input += synapse0x3a91400();
   input += synapse0x3a91440();
   input += synapse0x3a91480();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a90af0() {
   double input = input0x3a90af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a914c0() {
   double input = 0.523176;
   input += synapse0x3a91650();
   input += synapse0x3a9a6e0();
   input += synapse0x3a9a720();
   input += synapse0x3a9a760();
   input += synapse0x3a9a7a0();
   input += synapse0x3a9a7e0();
   input += synapse0x3a9a820();
   input += synapse0x3a9a860();
   input += synapse0x3a9a8a0();
   input += synapse0x3a9a8e0();
   input += synapse0x3a9a920();
   input += synapse0x3a9a960();
   input += synapse0x3a9a9a0();
   input += synapse0x3a9a9e0();
   input += synapse0x3a9aa20();
   input += synapse0x3a9aa60();
   input += synapse0x3a9a530();
   input += synapse0x3a9a570();
   input += synapse0x3a9abb0();
   input += synapse0x3a9abf0();
   input += synapse0x3a9ac30();
   input += synapse0x3a9ac70();
   input += synapse0x3a9acb0();
   input += synapse0x3a9acf0();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a914c0() {
   double input = input0x3a914c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a9ad30() {
   double input = 0.0680617;
   input += synapse0x3a9b070();
   input += synapse0x3a9b0b0();
   input += synapse0x3a9b0f0();
   input += synapse0x3a9b130();
   input += synapse0x3a9b170();
   input += synapse0x3a9b1b0();
   input += synapse0x3a9b1f0();
   input += synapse0x3a9b230();
   input += synapse0x3a9b270();
   input += synapse0x3a9b2b0();
   input += synapse0x3a9b2f0();
   input += synapse0x3a9b330();
   input += synapse0x3a9b370();
   input += synapse0x3a9b3b0();
   input += synapse0x3a9b3f0();
   input += synapse0x3a9b430();
   input += synapse0x3a9aec0();
   input += synapse0x3a9af00();
   input += synapse0x3a9b580();
   input += synapse0x3a9b5c0();
   input += synapse0x3a9b600();
   input += synapse0x3a9b640();
   input += synapse0x3a9b680();
   input += synapse0x3a9b6c0();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a9ad30() {
   double input = input0x3a9ad30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a9b700() {
   double input = 1.05611;
   input += synapse0x3a9ba40();
   input += synapse0x3a9ba80();
   input += synapse0x3a9bac0();
   input += synapse0x3a9bb00();
   input += synapse0x3a9bb40();
   input += synapse0x3a9bb80();
   input += synapse0x3a9bbc0();
   input += synapse0x3a9bc00();
   input += synapse0x3a9bc40();
   input += synapse0x3a9bc80();
   input += synapse0x3a9bcc0();
   input += synapse0x3a9bd00();
   input += synapse0x3a9bd40();
   input += synapse0x3a9bd80();
   input += synapse0x3a9bdc0();
   input += synapse0x3a9be00();
   input += synapse0x3a9b890();
   input += synapse0x3a9b8d0();
   input += synapse0x3a9bf50();
   input += synapse0x3a9bf90();
   input += synapse0x3a9bfd0();
   input += synapse0x3a9c010();
   input += synapse0x3a9c050();
   input += synapse0x3a9c090();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a9b700() {
   double input = input0x3a9b700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a9c0d0() {
   double input = 1.16602;
   input += synapse0x3a9c410();
   input += synapse0x3a9c450();
   input += synapse0x3a9c490();
   input += synapse0x3a9c4d0();
   input += synapse0x3a9c510();
   input += synapse0x3a9c550();
   input += synapse0x3a9c590();
   input += synapse0x3a9c5d0();
   input += synapse0x3a9c610();
   input += synapse0x3a9c650();
   input += synapse0x3a9c690();
   input += synapse0x3a9c6d0();
   input += synapse0x3a9c710();
   input += synapse0x3a9c750();
   input += synapse0x3a9c790();
   input += synapse0x3a9c7d0();
   input += synapse0x3a9c260();
   input += synapse0x3a9c2a0();
   input += synapse0x3a9c920();
   input += synapse0x3a9c960();
   input += synapse0x3a9c9a0();
   input += synapse0x3a9c9e0();
   input += synapse0x3a9ca20();
   input += synapse0x3a9ca60();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a9c0d0() {
   double input = input0x3a9c0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a9caa0() {
   double input = 0.369492;
   input += synapse0x3a9cde0();
   input += synapse0x3a9ce20();
   input += synapse0x3a9ce60();
   input += synapse0x3a9cea0();
   input += synapse0x3a9cee0();
   input += synapse0x3a9cf20();
   input += synapse0x3a9cf60();
   input += synapse0x3a9cfa0();
   input += synapse0x3a9cfe0();
   input += synapse0x3a9d020();
   input += synapse0x3a9d060();
   input += synapse0x3a9d0a0();
   input += synapse0x3a9d0e0();
   input += synapse0x3a9d120();
   input += synapse0x3a9d160();
   input += synapse0x3a9d1a0();
   input += synapse0x3a9cc30();
   input += synapse0x3a9cc70();
   input += synapse0x3a9d2f0();
   input += synapse0x3a9d330();
   input += synapse0x3a9d370();
   input += synapse0x3a9d3b0();
   input += synapse0x3a9d3f0();
   input += synapse0x3a9d430();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a9caa0() {
   double input = input0x3a9caa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a9d470() {
   double input = -0.207517;
   input += synapse0x3a9d7b0();
   input += synapse0x3a9d7f0();
   input += synapse0x3a9d830();
   input += synapse0x3a9d870();
   input += synapse0x3a9d8b0();
   input += synapse0x3a9d8f0();
   input += synapse0x3a9d930();
   input += synapse0x3a9d970();
   input += synapse0x3a9d9b0();
   input += synapse0x3a9d9f0();
   input += synapse0x3a9da30();
   input += synapse0x3a9da70();
   input += synapse0x3a9dab0();
   input += synapse0x3a9daf0();
   input += synapse0x3a9db30();
   input += synapse0x3a9db70();
   input += synapse0x3a9d600();
   input += synapse0x3a9d640();
   input += synapse0x3a9dcc0();
   input += synapse0x3a9dd00();
   input += synapse0x3a9dd40();
   input += synapse0x3a9dd80();
   input += synapse0x3a9ddc0();
   input += synapse0x3a9de00();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a9d470() {
   double input = input0x3a9d470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a9de40() {
   double input = -0.624696;
   input += synapse0x3a9e180();
   input += synapse0x3a9e1c0();
   input += synapse0x3a9e200();
   input += synapse0x3a9e240();
   input += synapse0x3a9e280();
   input += synapse0x3a9e2c0();
   input += synapse0x3a9e300();
   input += synapse0x3a9e340();
   input += synapse0x3a9e380();
   input += synapse0x3a9e3c0();
   input += synapse0x3a9e400();
   input += synapse0x3a9e440();
   input += synapse0x3a9e480();
   input += synapse0x3a9e4c0();
   input += synapse0x3a9e500();
   input += synapse0x3a9e540();
   input += synapse0x3a9dfd0();
   input += synapse0x3a9e010();
   input += synapse0x3a9e690();
   input += synapse0x3a9e6d0();
   input += synapse0x3a9e710();
   input += synapse0x3a9e750();
   input += synapse0x3a9e790();
   input += synapse0x3a9e7d0();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a9de40() {
   double input = input0x3a9de40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a9e810() {
   double input = 0.00482412;
   input += synapse0x3a9eb50();
   input += synapse0x3a9eb90();
   input += synapse0x3a9ebd0();
   input += synapse0x3a9ec10();
   input += synapse0x3a9ec50();
   input += synapse0x3a9ec90();
   input += synapse0x3a9ecd0();
   input += synapse0x3a9ed10();
   input += synapse0x3a9ed50();
   input += synapse0x3a9ed90();
   input += synapse0x3a9edd0();
   input += synapse0x3a9ee10();
   input += synapse0x3a9ee50();
   input += synapse0x3a9ee90();
   input += synapse0x3a9eed0();
   input += synapse0x3a9ef10();
   input += synapse0x3a9e9a0();
   input += synapse0x3a9e9e0();
   input += synapse0x3a9f060();
   input += synapse0x3a9f0a0();
   input += synapse0x3a9f0e0();
   input += synapse0x3a9f120();
   input += synapse0x3a9f160();
   input += synapse0x3a9f1a0();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a9e810() {
   double input = input0x3a9e810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a9f1e0() {
   double input = 1.43167;
   input += synapse0x3a9f520();
   input += synapse0x3a93af0();
   input += synapse0x3a93b30();
   input += synapse0x3a93b70();
   input += synapse0x3a93dc0();
   input += synapse0x3a93e00();
   input += synapse0x3a93e40();
   input += synapse0x3a94090();
   input += synapse0x3a940d0();
   input += synapse0x3a94320();
   input += synapse0x3a94360();
   input += synapse0x3a943a0();
   input += synapse0x3a945f0();
   input += synapse0x3a94630();
   input += synapse0x3a94880();
   input += synapse0x3a948c0();
   input += synapse0x3a9f370();
   input += synapse0x3a9f3b0();
   input += synapse0x3a94a10();
   input += synapse0x3a94f20();
   input += synapse0x3a94f60();
   input += synapse0x3a94fa0();
   input += synapse0x3a951f0();
   input += synapse0x3a95230();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a9f1e0() {
   double input = input0x3a9f1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a95270() {
   double input = -3.61046;
   input += synapse0x3a94ae0();
   input += synapse0x3a94b20();
   input += synapse0x3a94b60();
   input += synapse0x3a94ba0();
   input += synapse0x3a95520();
   input += synapse0x3aa1870();
   input += synapse0x3aa18b0();
   input += synapse0x3aa18f0();
   input += synapse0x3aa1930();
   input += synapse0x3aa1970();
   input += synapse0x3aa19b0();
   input += synapse0x3aa19f0();
   input += synapse0x3aa1a30();
   input += synapse0x3aa1a70();
   input += synapse0x3aa1ab0();
   input += synapse0x3aa1af0();
   input += synapse0x3a95400();
   input += synapse0x3a95440();
   input += synapse0x3aa1c40();
   input += synapse0x3aa1c80();
   input += synapse0x3aa1cc0();
   input += synapse0x3aa1d00();
   input += synapse0x3aa1d40();
   input += synapse0x3aa1d80();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a95270() {
   double input = input0x3a95270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3aa1dc0() {
   double input = 0.211561;
   input += synapse0x3aa2100();
   input += synapse0x3aa2140();
   input += synapse0x3aa2180();
   input += synapse0x3aa21c0();
   input += synapse0x3aa2200();
   input += synapse0x3aa2240();
   input += synapse0x3aa2280();
   input += synapse0x3aa22c0();
   input += synapse0x3aa2300();
   input += synapse0x3aa2340();
   input += synapse0x3aa2380();
   input += synapse0x3aa23c0();
   input += synapse0x3aa2400();
   input += synapse0x3aa2440();
   input += synapse0x3aa2480();
   input += synapse0x3aa24c0();
   input += synapse0x3aa1f50();
   input += synapse0x3aa1f90();
   input += synapse0x3aa2610();
   input += synapse0x3aa2650();
   input += synapse0x3aa2690();
   input += synapse0x3aa26d0();
   input += synapse0x3aa2710();
   input += synapse0x3aa2750();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3aa1dc0() {
   double input = input0x3aa1dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3aa2790() {
   double input = -0.506553;
   input += synapse0x3aa2ad0();
   input += synapse0x3aa2b10();
   input += synapse0x3aa2b50();
   input += synapse0x3aa2b90();
   input += synapse0x3aa2bd0();
   input += synapse0x3aa2c10();
   input += synapse0x3aa2c50();
   input += synapse0x3aa2c90();
   input += synapse0x3aa2cd0();
   input += synapse0x3aa2d10();
   input += synapse0x3aa2d50();
   input += synapse0x3aa2d90();
   input += synapse0x3aa2dd0();
   input += synapse0x3aa2e10();
   input += synapse0x3aa2e50();
   input += synapse0x3aa2e90();
   input += synapse0x3aa2920();
   input += synapse0x3aa2960();
   input += synapse0x3aa2fe0();
   input += synapse0x3aa3020();
   input += synapse0x3aa3060();
   input += synapse0x3aa30a0();
   input += synapse0x3aa30e0();
   input += synapse0x3aa3120();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3aa2790() {
   double input = input0x3aa2790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3aa3160() {
   double input = -1.07059;
   input += synapse0x3aa34a0();
   input += synapse0x3aa34e0();
   input += synapse0x3aa3520();
   input += synapse0x3aa3560();
   input += synapse0x3aa35a0();
   input += synapse0x3aa35e0();
   input += synapse0x3aa3620();
   input += synapse0x3aa3660();
   input += synapse0x3aa36a0();
   input += synapse0x3aa36e0();
   input += synapse0x3aa3720();
   input += synapse0x3aa3760();
   input += synapse0x3aa37a0();
   input += synapse0x3aa37e0();
   input += synapse0x3aa3820();
   input += synapse0x3aa3860();
   input += synapse0x3aa32f0();
   input += synapse0x3aa3330();
   input += synapse0x3aa39b0();
   input += synapse0x3aa39f0();
   input += synapse0x3aa3a30();
   input += synapse0x3aa3a70();
   input += synapse0x3aa3ab0();
   input += synapse0x3aa3af0();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3aa3160() {
   double input = input0x3aa3160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3aa3b30() {
   double input = -1.08304;
   input += synapse0x3aa3e70();
   input += synapse0x3aa3eb0();
   input += synapse0x3aa3ef0();
   input += synapse0x3aa3f30();
   input += synapse0x3aa3f70();
   input += synapse0x3aa3fb0();
   input += synapse0x3aa3ff0();
   input += synapse0x3aa4030();
   input += synapse0x3aa4070();
   input += synapse0x3aa40b0();
   input += synapse0x3aa40f0();
   input += synapse0x3aa4130();
   input += synapse0x3aa4170();
   input += synapse0x3aa41b0();
   input += synapse0x3aa41f0();
   input += synapse0x3aa4230();
   input += synapse0x3aa3cc0();
   input += synapse0x3aa3d00();
   input += synapse0x3aa4380();
   input += synapse0x3aa43c0();
   input += synapse0x3aa4400();
   input += synapse0x3aa4440();
   input += synapse0x3aa4480();
   input += synapse0x3aa44c0();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3aa3b30() {
   double input = input0x3aa3b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3aa4500() {
   double input = 2.17462;
   input += synapse0x3aa4840();
   input += synapse0x3aa4880();
   input += synapse0x3aa48c0();
   input += synapse0x3aa4900();
   input += synapse0x3aa4940();
   input += synapse0x3aa4980();
   input += synapse0x3aa49c0();
   input += synapse0x3aa4a00();
   input += synapse0x3aa4a40();
   input += synapse0x3aa4a80();
   input += synapse0x3aa4ac0();
   input += synapse0x3aa4b00();
   input += synapse0x3aa4b40();
   input += synapse0x3aa4b80();
   input += synapse0x3aa4bc0();
   input += synapse0x3aa4c00();
   input += synapse0x3aa4690();
   input += synapse0x3aa46d0();
   input += synapse0x3aa4d50();
   input += synapse0x3aa4d90();
   input += synapse0x3aa4dd0();
   input += synapse0x3aa4e10();
   input += synapse0x3aa4e50();
   input += synapse0x3aa4e90();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3aa4500() {
   double input = input0x3aa4500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3aa4ed0() {
   double input = -0.402728;
   input += synapse0x3aa5210();
   input += synapse0x3aa5250();
   input += synapse0x3aa5290();
   input += synapse0x3aa52d0();
   input += synapse0x3aa5310();
   input += synapse0x3aa5350();
   input += synapse0x3aa5390();
   input += synapse0x3aa53d0();
   input += synapse0x3aa5410();
   input += synapse0x3aa5450();
   input += synapse0x3aa5490();
   input += synapse0x3aa54d0();
   input += synapse0x3aa5510();
   input += synapse0x3aa5550();
   input += synapse0x3aa5590();
   input += synapse0x3aa55d0();
   input += synapse0x3aa5060();
   input += synapse0x3aa50a0();
   input += synapse0x3aa5720();
   input += synapse0x3aa5760();
   input += synapse0x3aa57a0();
   input += synapse0x3aa57e0();
   input += synapse0x3aa5820();
   input += synapse0x3aa5860();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3aa4ed0() {
   double input = input0x3aa4ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3aa58a0() {
   double input = -2.23033;
   input += synapse0x3aa5be0();
   input += synapse0x3aa5c20();
   input += synapse0x3aa5c60();
   input += synapse0x3aa5ca0();
   input += synapse0x3aa5ce0();
   input += synapse0x3aa5d20();
   input += synapse0x3aa5d60();
   input += synapse0x3aa5da0();
   input += synapse0x3aa5de0();
   input += synapse0x3aa5e20();
   input += synapse0x3aa5e60();
   input += synapse0x3aa5ea0();
   input += synapse0x3aa5ee0();
   input += synapse0x3aa5f20();
   input += synapse0x3aa5f60();
   input += synapse0x3aa5fa0();
   input += synapse0x3aa5a30();
   input += synapse0x3aa5a70();
   input += synapse0x3aa60f0();
   input += synapse0x3aa6130();
   input += synapse0x3aa6170();
   input += synapse0x3aa61b0();
   input += synapse0x3aa61f0();
   input += synapse0x3aa6230();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3aa58a0() {
   double input = input0x3aa58a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3aa6270() {
   double input = -1.23124;
   input += synapse0x3a8ece0();
   input += synapse0x3a8ed20();
   input += synapse0x3a8ed60();
   input += synapse0x3a8eda0();
   input += synapse0x3a8ede0();
   input += synapse0x3a8ee20();
   input += synapse0x3a8ee60();
   input += synapse0x3a8eea0();
   input += synapse0x3aa69c0();
   input += synapse0x3aa6a00();
   input += synapse0x3aa6a40();
   input += synapse0x3aa6a80();
   input += synapse0x3aa6ac0();
   input += synapse0x3aa6b00();
   input += synapse0x3aa6b40();
   input += synapse0x3aa6b80();
   input += synapse0x3aa6400();
   input += synapse0x3aa6440();
   input += synapse0x3aa6cd0();
   input += synapse0x3aa6d10();
   input += synapse0x3aa6d50();
   input += synapse0x3aa6d90();
   input += synapse0x3aa6dd0();
   input += synapse0x3aa6e10();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3aa6270() {
   double input = input0x3aa6270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3aa6e50() {
   double input = 0.683106;
   input += synapse0x3aa7190();
   input += synapse0x3aa71d0();
   input += synapse0x3aa7210();
   input += synapse0x3aa7250();
   input += synapse0x3aa7290();
   input += synapse0x3aa72d0();
   input += synapse0x3aa7310();
   input += synapse0x3aa7350();
   input += synapse0x3aa7390();
   input += synapse0x3aa73d0();
   input += synapse0x3aa7410();
   input += synapse0x3aa7450();
   input += synapse0x3aa7490();
   input += synapse0x3aa74d0();
   input += synapse0x3aa7510();
   input += synapse0x3aa7550();
   input += synapse0x3aa6fe0();
   input += synapse0x3aa7020();
   input += synapse0x3aa76a0();
   input += synapse0x3aa76e0();
   input += synapse0x3aa7720();
   input += synapse0x3aa7760();
   input += synapse0x3aa77a0();
   input += synapse0x3aa77e0();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3aa6e50() {
   double input = input0x3aa6e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3aa7820() {
   double input = -0.0388934;
   input += synapse0x3aa7b60();
   input += synapse0x3aa7ba0();
   input += synapse0x3aa7be0();
   input += synapse0x3aa7c20();
   input += synapse0x3aa7c60();
   input += synapse0x3aa7ca0();
   input += synapse0x3aa7ce0();
   input += synapse0x3aa7d20();
   input += synapse0x3aa7d60();
   input += synapse0x3aa7da0();
   input += synapse0x3aa7de0();
   input += synapse0x3aa7e20();
   input += synapse0x3aa7e60();
   input += synapse0x3aa7ea0();
   input += synapse0x3aa7ee0();
   input += synapse0x3aa7f20();
   input += synapse0x3aa79b0();
   input += synapse0x3aa79f0();
   input += synapse0x3a98520();
   input += synapse0x3a98560();
   input += synapse0x3a985a0();
   input += synapse0x3a985e0();
   input += synapse0x3a98620();
   input += synapse0x3a98660();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3aa7820() {
   double input = input0x3aa7820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a986a0() {
   double input = -0.942513;
   input += synapse0x3a989e0();
   input += synapse0x3a98a20();
   input += synapse0x3a98a60();
   input += synapse0x3a98aa0();
   input += synapse0x3a98ae0();
   input += synapse0x3a98b20();
   input += synapse0x3a98b60();
   input += synapse0x3a98ba0();
   input += synapse0x3a98be0();
   input += synapse0x3a98c20();
   input += synapse0x3a98c60();
   input += synapse0x3a98ca0();
   input += synapse0x3a98ce0();
   input += synapse0x3a98d20();
   input += synapse0x3a98d60();
   input += synapse0x3a98da0();
   input += synapse0x3a98830();
   input += synapse0x3a98870();
   input += synapse0x3a98ef0();
   input += synapse0x3a98f30();
   input += synapse0x3a98f70();
   input += synapse0x3a98fb0();
   input += synapse0x3a98ff0();
   input += synapse0x3a99030();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a986a0() {
   double input = input0x3a986a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a99070() {
   double input = -1.63332;
   input += synapse0x3a993b0();
   input += synapse0x3a993f0();
   input += synapse0x3a99430();
   input += synapse0x3a99470();
   input += synapse0x3a994b0();
   input += synapse0x3a994f0();
   input += synapse0x3a99530();
   input += synapse0x3a99570();
   input += synapse0x3a995b0();
   input += synapse0x3a995f0();
   input += synapse0x3a99630();
   input += synapse0x3a99670();
   input += synapse0x3a996b0();
   input += synapse0x3a996f0();
   input += synapse0x3a99730();
   input += synapse0x3a99770();
   input += synapse0x3a99200();
   input += synapse0x3a99240();
   input += synapse0x3a998c0();
   input += synapse0x3a99900();
   input += synapse0x3a99940();
   input += synapse0x3a99980();
   input += synapse0x3a999c0();
   input += synapse0x3a99a00();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a99070() {
   double input = input0x3a99070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3a99a40() {
   double input = -0.00366534;
   input += synapse0x3a99d80();
   input += synapse0x3a99dc0();
   input += synapse0x3a99e00();
   input += synapse0x3a99e40();
   input += synapse0x3a99e80();
   input += synapse0x3a99ec0();
   input += synapse0x3a99f00();
   input += synapse0x3a99f40();
   input += synapse0x3a99f80();
   input += synapse0x3a99fc0();
   input += synapse0x3a9a000();
   input += synapse0x3a9a040();
   input += synapse0x3a9a080();
   input += synapse0x3a9a0c0();
   input += synapse0x3a9a100();
   input += synapse0x3a9a140();
   input += synapse0x3a99bd0();
   input += synapse0x3a99c10();
   input += synapse0x3a9a290();
   input += synapse0x3a9a2d0();
   input += synapse0x3a9a310();
   input += synapse0x3a9a350();
   input += synapse0x3a9a390();
   input += synapse0x3a9a3d0();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3a99a40() {
   double input = input0x3a99a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3aac080() {
   double input = 1.33871;
   input += synapse0x3aac2a0();
   input += synapse0x3aac2e0();
   input += synapse0x3aac320();
   input += synapse0x3aac360();
   input += synapse0x3aac3a0();
   input += synapse0x3aac3e0();
   input += synapse0x3aac420();
   input += synapse0x3aac460();
   input += synapse0x3aac4a0();
   input += synapse0x3aac4e0();
   input += synapse0x3aac520();
   input += synapse0x3aac560();
   input += synapse0x3aac5a0();
   input += synapse0x3aac5e0();
   input += synapse0x3aac620();
   input += synapse0x3aac660();
   input += synapse0x3a9a410();
   input += synapse0x3a9a450();
   input += synapse0x3aac7b0();
   input += synapse0x3aac7f0();
   input += synapse0x3aac830();
   input += synapse0x3aac870();
   input += synapse0x3aac8b0();
   input += synapse0x3aac8f0();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3aac080() {
   double input = input0x3aac080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3aac930() {
   double input = 0.145775;
   input += synapse0x3aacc70();
   input += synapse0x3aaccb0();
   input += synapse0x3aaccf0();
   input += synapse0x3aacd30();
   input += synapse0x3aacd70();
   input += synapse0x3aacdb0();
   input += synapse0x3aacdf0();
   input += synapse0x3aace30();
   input += synapse0x3aace70();
   input += synapse0x3aaceb0();
   input += synapse0x3aacef0();
   input += synapse0x3aacf30();
   input += synapse0x3aacf70();
   input += synapse0x3aacfb0();
   input += synapse0x3aacff0();
   input += synapse0x3aad030();
   input += synapse0x3aacac0();
   input += synapse0x3aacb00();
   input += synapse0x3aad180();
   input += synapse0x3aad1c0();
   input += synapse0x3aad200();
   input += synapse0x3aad240();
   input += synapse0x3aad280();
   input += synapse0x3aad2c0();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3aac930() {
   double input = input0x3aac930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3aad300() {
   double input = 1.4457;
   input += synapse0x3aad640();
   input += synapse0x3aad680();
   input += synapse0x3aad6c0();
   input += synapse0x3aad700();
   input += synapse0x3aad740();
   input += synapse0x3aad780();
   input += synapse0x3aad7c0();
   input += synapse0x3aad800();
   input += synapse0x3aad840();
   input += synapse0x3aad880();
   input += synapse0x3aad8c0();
   input += synapse0x3aad900();
   input += synapse0x3aad940();
   input += synapse0x3aad980();
   input += synapse0x3aad9c0();
   input += synapse0x3aada00();
   input += synapse0x3aad490();
   input += synapse0x3aad4d0();
   input += synapse0x3aadb50();
   input += synapse0x3aadb90();
   input += synapse0x3aadbd0();
   input += synapse0x3aadc10();
   input += synapse0x3aadc50();
   input += synapse0x3aadc90();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3aad300() {
   double input = input0x3aad300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3aadcd0() {
   double input = -1.85389;
   input += synapse0x3aae010();
   input += synapse0x3aae050();
   input += synapse0x3aae090();
   input += synapse0x3aae0d0();
   input += synapse0x3aae110();
   input += synapse0x3aae150();
   input += synapse0x3aae190();
   input += synapse0x3aae1d0();
   input += synapse0x3aae210();
   input += synapse0x3aae250();
   input += synapse0x3aae290();
   input += synapse0x3aae2d0();
   input += synapse0x3aae310();
   input += synapse0x3aae350();
   input += synapse0x3aae390();
   input += synapse0x3aae3d0();
   input += synapse0x3aade60();
   input += synapse0x3aadea0();
   input += synapse0x3aae520();
   input += synapse0x3aae560();
   input += synapse0x3aae5a0();
   input += synapse0x3aae5e0();
   input += synapse0x3aae620();
   input += synapse0x3aae660();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3aadcd0() {
   double input = input0x3aadcd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3ab4ed0() {
   double input = 0.769463;
   input += synapse0x384e4d0();
   input += synapse0x384e510();
   input += synapse0x3a8b010();
   input += synapse0x3a8b050();
   input += synapse0x3a8cae0();
   input += synapse0x3a8cb20();
   input += synapse0x3a8d8b0();
   input += synapse0x3a8d8f0();
   input += synapse0x3a8e280();
   input += synapse0x3a8e2c0();
   input += synapse0x3a8ec50();
   input += synapse0x3a8ec90();
   input += synapse0x3a8f730();
   input += synapse0x3a8f770();
   input += synapse0x3a90100();
   input += synapse0x3a90140();
   input += synapse0x3a8d1e0();
   input += synapse0x3a8d220();
   input += synapse0x3a91cb0();
   input += synapse0x3a91cf0();
   input += synapse0x3a92680();
   input += synapse0x3a926c0();
   input += synapse0x3a93050();
   input += synapse0x3a93090();
   input += synapse0x3a93a20();
   input += synapse0x3a93a60();
   input += synapse0x3a86ab0();
   input += synapse0x3a86af0();
   input += synapse0x3a95b10();
   input += synapse0x3a95b50();
   input += synapse0x3a964e0();
   input += synapse0x3a96520();
   input += synapse0x3a96eb0();
   input += synapse0x3a96ef0();
   input += synapse0x3a97880();
   input += synapse0x3a978c0();
   input += synapse0x3a98250();
   input += synapse0x3a98290();
   input += synapse0x3a90da0();
   input += synapse0x3a90de0();
   input += synapse0x3a9a650();
   input += synapse0x3a9a690();
   input += synapse0x3a9afe0();
   input += synapse0x3a9b020();
   input += synapse0x3a9b9b0();
   input += synapse0x3a9b9f0();
   input += synapse0x3a9c380();
   input += synapse0x3a9c3c0();
   input += synapse0x3a9cd50();
   input += synapse0x3a9cd90();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3ab4ed0() {
   double input = input0x3ab4ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3ab5270() {
   double input = 1.16858;
   input += synapse0x3a9f490();
   input += synapse0x3a9f4d0();
   input += synapse0x3a94a50();
   input += synapse0x3a94a90();
   input += synapse0x3aa2070();
   input += synapse0x3aa20b0();
   input += synapse0x3aa2a40();
   input += synapse0x3aa2a80();
   input += synapse0x3aa3410();
   input += synapse0x3aa3450();
   input += synapse0x3aa3de0();
   input += synapse0x3aa3e20();
   input += synapse0x3aa47b0();
   input += synapse0x3aa47f0();
   input += synapse0x3aa5180();
   input += synapse0x3aa51c0();
   input += synapse0x3aa5b50();
   input += synapse0x3aa5b90();
   input += synapse0x3aa6520();
   input += synapse0x3aa6560();
   input += synapse0x3aa7100();
   input += synapse0x3aa7140();
   input += synapse0x3aa7ad0();
   input += synapse0x3aa7b10();
   input += synapse0x3a98950();
   input += synapse0x3a98990();
   input += synapse0x3a99320();
   input += synapse0x3a99360();
   input += synapse0x3a99cf0();
   input += synapse0x3a99d30();
   input += synapse0x3aac210();
   input += synapse0x3aac250();
   input += synapse0x3aacbe0();
   input += synapse0x3aacc20();
   input += synapse0x3aad5b0();
   input += synapse0x3aad5f0();
   input += synapse0x3aadf80();
   input += synapse0x3aadfc0();
   input += synapse0x3a88f10();
   input += synapse0x3a88f50();
   input += synapse0x3a9d720();
   input += synapse0x3a9d760();
   input += synapse0x3aae6a0();
   input += synapse0x3aae6e0();
   input += synapse0x3aae720();
   input += synapse0x3aae760();
   input += synapse0x3ab5610();
   input += synapse0x3ab5650();
   input += synapse0x3ab5690();
   input += synapse0x3ab56d0();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3ab5270() {
   double input = input0x3ab5270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3ab5710() {
   double input = 0.606626;
   input += synapse0x3ab5a50();
   input += synapse0x3ab5a90();
   input += synapse0x3ab5ad0();
   input += synapse0x3ab5b10();
   input += synapse0x3ab5b50();
   input += synapse0x3ab5b90();
   input += synapse0x3ab5bd0();
   input += synapse0x3ab5c10();
   input += synapse0x3ab5c50();
   input += synapse0x3ab5c90();
   input += synapse0x3ab5cd0();
   input += synapse0x3ab5d10();
   input += synapse0x3ab5d50();
   input += synapse0x3ab5d90();
   input += synapse0x3ab5dd0();
   input += synapse0x3ab5e10();
   input += synapse0x3ab58a0();
   input += synapse0x3ab58e0();
   input += synapse0x3ab5f60();
   input += synapse0x3ab5fa0();
   input += synapse0x3ab5fe0();
   input += synapse0x3ab6020();
   input += synapse0x3ab6060();
   input += synapse0x3ab60a0();
   input += synapse0x3ab60e0();
   input += synapse0x3ab6120();
   input += synapse0x3ab6160();
   input += synapse0x3ab61a0();
   input += synapse0x3ab61e0();
   input += synapse0x3ab6220();
   input += synapse0x3ab6260();
   input += synapse0x3ab62a0();
   input += synapse0x3ab5e50();
   input += synapse0x3ab5e90();
   input += synapse0x3ab5ed0();
   input += synapse0x3ab5f10();
   input += synapse0x3ab64f0();
   input += synapse0x3ab6530();
   input += synapse0x3ab6570();
   input += synapse0x3ab65b0();
   input += synapse0x3ab65f0();
   input += synapse0x3ab6630();
   input += synapse0x3ab6670();
   input += synapse0x3ab66b0();
   input += synapse0x3ab66f0();
   input += synapse0x3ab6730();
   input += synapse0x3ab6770();
   input += synapse0x3ab67b0();
   input += synapse0x3ab67f0();
   input += synapse0x3ab6830();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3ab5710() {
   double input = input0x3ab5710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3ab6870() {
   double input = -1.4825;
   input += synapse0x3ab6bb0();
   input += synapse0x3ab6bf0();
   input += synapse0x3ab6c30();
   input += synapse0x3ab6c70();
   input += synapse0x3ab6cb0();
   input += synapse0x3ab6cf0();
   input += synapse0x3ab6d30();
   input += synapse0x3ab6d70();
   input += synapse0x3ab6db0();
   input += synapse0x3ab6df0();
   input += synapse0x3ab6e30();
   input += synapse0x3ab6e70();
   input += synapse0x3ab6eb0();
   input += synapse0x3ab6ef0();
   input += synapse0x3ab6f30();
   input += synapse0x3ab6f70();
   input += synapse0x3ab6a00();
   input += synapse0x3ab6a40();
   input += synapse0x3ab70c0();
   input += synapse0x3ab7100();
   input += synapse0x3ab7140();
   input += synapse0x3ab7180();
   input += synapse0x3ab71c0();
   input += synapse0x3ab7200();
   input += synapse0x3ab7240();
   input += synapse0x3ab7280();
   input += synapse0x3ab72c0();
   input += synapse0x3ab7300();
   input += synapse0x3ab7340();
   input += synapse0x3ab7380();
   input += synapse0x3ab73c0();
   input += synapse0x3ab7400();
   input += synapse0x3ab6fb0();
   input += synapse0x3ab6ff0();
   input += synapse0x3ab7030();
   input += synapse0x3ab7070();
   input += synapse0x3ab7650();
   input += synapse0x3ab7690();
   input += synapse0x3ab76d0();
   input += synapse0x3ab7710();
   input += synapse0x3ab7750();
   input += synapse0x3ab7790();
   input += synapse0x3ab77d0();
   input += synapse0x3ab7810();
   input += synapse0x3ab7850();
   input += synapse0x3ab7890();
   input += synapse0x3ab78d0();
   input += synapse0x3ab7910();
   input += synapse0x3ab7950();
   input += synapse0x3ab7990();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3ab6870() {
   double input = input0x3ab6870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3ab79d0() {
   double input = -0.83676;
   input += synapse0x3ab7d10();
   input += synapse0x3ab7d50();
   input += synapse0x3ab7d90();
   input += synapse0x3ab7dd0();
   input += synapse0x3ab7e10();
   input += synapse0x3ab7e50();
   input += synapse0x3ab7e90();
   input += synapse0x3ab7ed0();
   input += synapse0x3ab7f10();
   input += synapse0x3ab7f50();
   input += synapse0x3ab7f90();
   input += synapse0x3ab7fd0();
   input += synapse0x3ab8010();
   input += synapse0x3ab8050();
   input += synapse0x3ab8090();
   input += synapse0x3ab80d0();
   input += synapse0x3ab7b60();
   input += synapse0x3ab7ba0();
   input += synapse0x3ab8220();
   input += synapse0x3ab8260();
   input += synapse0x3ab82a0();
   input += synapse0x3ab82e0();
   input += synapse0x3ab8320();
   input += synapse0x3ab8360();
   input += synapse0x3ab83a0();
   input += synapse0x3ab83e0();
   input += synapse0x3ab8420();
   input += synapse0x3ab8460();
   input += synapse0x3ab84a0();
   input += synapse0x3ab84e0();
   input += synapse0x3ab8520();
   input += synapse0x3ab8560();
   input += synapse0x3ab8110();
   input += synapse0x3ab8150();
   input += synapse0x3ab8190();
   input += synapse0x3ab81d0();
   input += synapse0x3ab87b0();
   input += synapse0x3ab87f0();
   input += synapse0x3ab8830();
   input += synapse0x3ab8870();
   input += synapse0x3ab88b0();
   input += synapse0x3ab88f0();
   input += synapse0x3ab8930();
   input += synapse0x3ab8970();
   input += synapse0x3ab89b0();
   input += synapse0x3ab89f0();
   input += synapse0x3ab8a30();
   input += synapse0x3ab8a70();
   input += synapse0x3ab8ab0();
   input += synapse0x3ab8af0();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3ab79d0() {
   double input = input0x3ab79d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dL::input0x3ab8b30() {
   double input = 4.49787;
   input += synapse0x3ab8d50();
   input += synapse0x3ab8d90();
   input += synapse0x3ab8dd0();
   input += synapse0x3ab8e10();
   input += synapse0x3ab8e50();
   return input;
}

double NNfunction_ns_chi04_dL::neuron0x3ab8b30() {
   double input = input0x3ab8b30();
   return (input * 1)+0;
}

double NNfunction_ns_chi04_dL::synapse0x3a88fa0() {
   return (neuron0x3a83ba0()*0.315757);
}

double NNfunction_ns_chi04_dL::synapse0x3a88fe0() {
   return (neuron0x3a83e50()*-0.785918);
}

double NNfunction_ns_chi04_dL::synapse0x3a89020() {
   return (neuron0x3a84190()*0.523298);
}

double NNfunction_ns_chi04_dL::synapse0x3a89060() {
   return (neuron0x3a844d0()*-0.15936);
}

double NNfunction_ns_chi04_dL::synapse0x3a890a0() {
   return (neuron0x3a84810()*-0.24745);
}

double NNfunction_ns_chi04_dL::synapse0x3a890e0() {
   return (neuron0x3a84b50()*0.442445);
}

double NNfunction_ns_chi04_dL::synapse0x3a89120() {
   return (neuron0x3a84e90()*-0.057794);
}

double NNfunction_ns_chi04_dL::synapse0x3a89160() {
   return (neuron0x3a851d0()*-0.201429);
}

double NNfunction_ns_chi04_dL::synapse0x3a891a0() {
   return (neuron0x3a85510()*-0.130699);
}

double NNfunction_ns_chi04_dL::synapse0x3a891e0() {
   return (neuron0x3a85850()*-0.416572);
}

double NNfunction_ns_chi04_dL::synapse0x3a89220() {
   return (neuron0x3a85b90()*0.189914);
}

double NNfunction_ns_chi04_dL::synapse0x3a89260() {
   return (neuron0x3a85ed0()*0.0128595);
}

double NNfunction_ns_chi04_dL::synapse0x3a892a0() {
   return (neuron0x3a86210()*-0.0406411);
}

double NNfunction_ns_chi04_dL::synapse0x3a892e0() {
   return (neuron0x3a86550()*0.0667064);
}

double NNfunction_ns_chi04_dL::synapse0x3a89320() {
   return (neuron0x3a86890()*1.07338);
}

double NNfunction_ns_chi04_dL::synapse0x3a89360() {
   return (neuron0x3a86bd0()*-0.0650323);
}

double NNfunction_ns_chi04_dL::synapse0x3a88df0() {
   return (neuron0x3a86f10()*0.269195);
}

double NNfunction_ns_chi04_dL::synapse0x3a88e30() {
   return (neuron0x3a87470()*0.0894097);
}

double NNfunction_ns_chi04_dL::synapse0x383fd20() {
   return (neuron0x3a877b0()*0.0284972);
}

double NNfunction_ns_chi04_dL::synapse0x383fd60() {
   return (neuron0x3a87af0()*-0.0417876);
}

double NNfunction_ns_chi04_dL::synapse0x3a893a0() {
   return (neuron0x3a87e30()*0.52673);
}

double NNfunction_ns_chi04_dL::synapse0x3a893e0() {
   return (neuron0x3a88170()*0.312902);
}

double NNfunction_ns_chi04_dL::synapse0x3a89420() {
   return (neuron0x3a884b0()*-0.0352104);
}

double NNfunction_ns_chi04_dL::synapse0x3a89460() {
   return (neuron0x3a887f0()*-0.149491);
}

double NNfunction_ns_chi04_dL::synapse0x3a897e0() {
   return (neuron0x3a83ba0()*-0.0397819);
}

double NNfunction_ns_chi04_dL::synapse0x3a89820() {
   return (neuron0x3a83e50()*-0.996886);
}

double NNfunction_ns_chi04_dL::synapse0x3a89860() {
   return (neuron0x3a84190()*0.113149);
}

double NNfunction_ns_chi04_dL::synapse0x3a898a0() {
   return (neuron0x3a844d0()*0.016842);
}

double NNfunction_ns_chi04_dL::synapse0x3a898e0() {
   return (neuron0x3a84810()*0.0113675);
}

double NNfunction_ns_chi04_dL::synapse0x3a89920() {
   return (neuron0x3a84b50()*-0.00636313);
}

double NNfunction_ns_chi04_dL::synapse0x3a89960() {
   return (neuron0x3a84e90()*-0.0056477);
}

double NNfunction_ns_chi04_dL::synapse0x3a899a0() {
   return (neuron0x3a851d0()*-0.0103859);
}

double NNfunction_ns_chi04_dL::synapse0x3a899e0() {
   return (neuron0x3a85510()*-0.0079062);
}

double NNfunction_ns_chi04_dL::synapse0x383fb70() {
   return (neuron0x3a85850()*0.00347919);
}

double NNfunction_ns_chi04_dL::synapse0x383fbb0() {
   return (neuron0x3a85b90()*0.0038012);
}

double NNfunction_ns_chi04_dL::synapse0x383fbf0() {
   return (neuron0x3a85ed0()*0.0992716);
}

double NNfunction_ns_chi04_dL::synapse0x383fc30() {
   return (neuron0x3a86210()*0.015779);
}

double NNfunction_ns_chi04_dL::synapse0x3a89c30() {
   return (neuron0x3a86550()*0.0205349);
}

double NNfunction_ns_chi04_dL::synapse0x3a89c70() {
   return (neuron0x3a86890()*-0.0057816);
}

double NNfunction_ns_chi04_dL::synapse0x3a89cb0() {
   return (neuron0x3a86bd0()*-0.00657594);
}

double NNfunction_ns_chi04_dL::synapse0x3a89630() {
   return (neuron0x3a86f10()*-0.0117467);
}

double NNfunction_ns_chi04_dL::synapse0x3a89670() {
   return (neuron0x3a87470()*0.0101591);
}

double NNfunction_ns_chi04_dL::synapse0x3a89e00() {
   return (neuron0x3a877b0()*0.00285674);
}

double NNfunction_ns_chi04_dL::synapse0x3a89e40() {
   return (neuron0x3a87af0()*0.00318878);
}

double NNfunction_ns_chi04_dL::synapse0x3a89e80() {
   return (neuron0x3a87e30()*-0.00738336);
}

double NNfunction_ns_chi04_dL::synapse0x3a89ec0() {
   return (neuron0x3a88170()*0.00571042);
}

double NNfunction_ns_chi04_dL::synapse0x3a89f00() {
   return (neuron0x3a884b0()*0.00422962);
}

double NNfunction_ns_chi04_dL::synapse0x3a89f40() {
   return (neuron0x3a887f0()*-0.720372);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a2c0() {
   return (neuron0x3a83ba0()*0.047251);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a300() {
   return (neuron0x3a83e50()*8.6839);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a340() {
   return (neuron0x3a84190()*10.4798);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a380() {
   return (neuron0x3a844d0()*-0.0289346);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a3c0() {
   return (neuron0x3a84810()*0.0891732);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a400() {
   return (neuron0x3a84b50()*0.016647);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a440() {
   return (neuron0x3a84e90()*0.0551941);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a480() {
   return (neuron0x3a851d0()*0.0248012);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a4c0() {
   return (neuron0x3a85510()*-0.0887548);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a500() {
   return (neuron0x3a85850()*0.0101954);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a540() {
   return (neuron0x3a85b90()*-0.0202656);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a580() {
   return (neuron0x3a85ed0()*0.183098);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a5c0() {
   return (neuron0x3a86210()*0.0271318);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a600() {
   return (neuron0x3a86550()*0.0377151);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a640() {
   return (neuron0x3a86890()*-0.0507867);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a680() {
   return (neuron0x3a86bd0()*-0.0227414);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a110() {
   return (neuron0x3a86f10()*-0.0487069);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a150() {
   return (neuron0x3a87470()*0.0181562);
}

double NNfunction_ns_chi04_dL::synapse0x3840410() {
   return (neuron0x3a877b0()*0.0234467);
}

double NNfunction_ns_chi04_dL::synapse0x384dce0() {
   return (neuron0x3a87af0()*-0.0208531);
}

double NNfunction_ns_chi04_dL::synapse0x384dd20() {
   return (neuron0x3a87e30()*-0.00408525);
}

double NNfunction_ns_chi04_dL::synapse0x3a8c5b0() {
   return (neuron0x3a88170()*0.00605474);
}

double NNfunction_ns_chi04_dL::synapse0x3a8c5f0() {
   return (neuron0x3a884b0()*0.0524291);
}

double NNfunction_ns_chi04_dL::synapse0x3a838e0() {
   return (neuron0x3a887f0()*-0.206581);
}

double NNfunction_ns_chi04_dL::synapse0x3a839b0() {
   return (neuron0x3a83ba0()*-0.246481);
}

double NNfunction_ns_chi04_dL::synapse0x384e560() {
   return (neuron0x3a83e50()*-0.0267529);
}

double NNfunction_ns_chi04_dL::synapse0x3a89bb0() {
   return (neuron0x3a84190()*-0.230317);
}

double NNfunction_ns_chi04_dL::synapse0x3a89bf0() {
   return (neuron0x3a844d0()*0.0197366);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a7d0() {
   return (neuron0x3a84810()*0.0178845);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a810() {
   return (neuron0x3a84b50()*-0.0013324);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a850() {
   return (neuron0x3a84e90()*-0.0205645);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a890() {
   return (neuron0x3a851d0()*0.0127884);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a8d0() {
   return (neuron0x3a85510()*0.00547739);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a910() {
   return (neuron0x3a85850()*-0.0139381);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a950() {
   return (neuron0x3a85b90()*-0.0322944);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a990() {
   return (neuron0x3a85ed0()*0.651981);
}

double NNfunction_ns_chi04_dL::synapse0x3a8a9d0() {
   return (neuron0x3a86210()*0.00760775);
}

double NNfunction_ns_chi04_dL::synapse0x3a8aa10() {
   return (neuron0x3a86550()*-0.0262803);
}

double NNfunction_ns_chi04_dL::synapse0x3a8aa50() {
   return (neuron0x3a86890()*0.00102463);
}

double NNfunction_ns_chi04_dL::synapse0x3a8aa90() {
   return (neuron0x3a86bd0()*0.0419669);
}

double NNfunction_ns_chi04_dL::synapse0x3a83920() {
   return (neuron0x3a86f10()*-0.0589126);
}

double NNfunction_ns_chi04_dL::synapse0x3a83960() {
   return (neuron0x3a87470()*0.00398405);
}

double NNfunction_ns_chi04_dL::synapse0x3a8abe0() {
   return (neuron0x3a877b0()*-0.0241594);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ac20() {
   return (neuron0x3a87af0()*0.00572866);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ac60() {
   return (neuron0x3a87e30()*-0.00991384);
}

double NNfunction_ns_chi04_dL::synapse0x3a8aca0() {
   return (neuron0x3a88170()*0.000849539);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ace0() {
   return (neuron0x3a884b0()*0.0127916);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ad20() {
   return (neuron0x3a887f0()*0.0496219);
}

double NNfunction_ns_chi04_dL::synapse0x3a8b0a0() {
   return (neuron0x3a83ba0()*-1.70519);
}

double NNfunction_ns_chi04_dL::synapse0x3a8b0e0() {
   return (neuron0x3a83e50()*-0.0806811);
}

double NNfunction_ns_chi04_dL::synapse0x3a8b120() {
   return (neuron0x3a84190()*0.502575);
}

double NNfunction_ns_chi04_dL::synapse0x3a8b160() {
   return (neuron0x3a844d0()*0.0526187);
}

double NNfunction_ns_chi04_dL::synapse0x3a8b1a0() {
   return (neuron0x3a84810()*0.0615113);
}

double NNfunction_ns_chi04_dL::synapse0x3a8b1e0() {
   return (neuron0x3a84b50()*-0.00689006);
}

double NNfunction_ns_chi04_dL::synapse0x3a8b220() {
   return (neuron0x3a84e90()*-0.261775);
}

double NNfunction_ns_chi04_dL::synapse0x3a8b260() {
   return (neuron0x3a851d0()*0.0295456);
}

double NNfunction_ns_chi04_dL::synapse0x3a8b2a0() {
   return (neuron0x3a85510()*0.011109);
}

double NNfunction_ns_chi04_dL::synapse0x3a8b2e0() {
   return (neuron0x3a85850()*0.0290411);
}

double NNfunction_ns_chi04_dL::synapse0x3a8b320() {
   return (neuron0x3a85b90()*-0.0466241);
}

double NNfunction_ns_chi04_dL::synapse0x3a8b360() {
   return (neuron0x3a85ed0()*-0.211924);
}

double NNfunction_ns_chi04_dL::synapse0x3a8b3a0() {
   return (neuron0x3a86210()*-0.130001);
}

double NNfunction_ns_chi04_dL::synapse0x3a8b3e0() {
   return (neuron0x3a86550()*-0.0374548);
}

double NNfunction_ns_chi04_dL::synapse0x3a8b420() {
   return (neuron0x3a86890()*-0.168916);
}

double NNfunction_ns_chi04_dL::synapse0x3a8b460() {
   return (neuron0x3a86bd0()*-0.0138955);
}

double NNfunction_ns_chi04_dL::synapse0x3a8b5b0() {
   return (neuron0x3a86f10()*-0.144987);
}

double NNfunction_ns_chi04_dL::synapse0x3a8aef0() {
   return (neuron0x3a87470()*0.0450941);
}

double NNfunction_ns_chi04_dL::synapse0x3a8af30() {
   return (neuron0x3a877b0()*-0.163716);
}

double NNfunction_ns_chi04_dL::synapse0x3a8c6f0() {
   return (neuron0x3a87af0()*-0.018574);
}

double NNfunction_ns_chi04_dL::synapse0x3a8c730() {
   return (neuron0x3a87e30()*-0.100199);
}

double NNfunction_ns_chi04_dL::synapse0x3a8c770() {
   return (neuron0x3a88170()*-0.17969);
}

double NNfunction_ns_chi04_dL::synapse0x3a8c7b0() {
   return (neuron0x3a884b0()*0.137616);
}

double NNfunction_ns_chi04_dL::synapse0x3a8c7f0() {
   return (neuron0x3a887f0()*-1.03776);
}

double NNfunction_ns_chi04_dL::synapse0x3a8cb70() {
   return (neuron0x3a83ba0()*-0.0106095);
}

double NNfunction_ns_chi04_dL::synapse0x3a8cbb0() {
   return (neuron0x3a83e50()*3.56129);
}

double NNfunction_ns_chi04_dL::synapse0x3a8cbf0() {
   return (neuron0x3a84190()*-4.24443);
}

double NNfunction_ns_chi04_dL::synapse0x3a8cc30() {
   return (neuron0x3a844d0()*0.0240115);
}

double NNfunction_ns_chi04_dL::synapse0x3a8cc70() {
   return (neuron0x3a84810()*-0.00598153);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ccb0() {
   return (neuron0x3a84b50()*0.0189039);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ccf0() {
   return (neuron0x3a84e90()*-0.00203291);
}

double NNfunction_ns_chi04_dL::synapse0x3a8cd30() {
   return (neuron0x3a851d0()*-0.00885016);
}

double NNfunction_ns_chi04_dL::synapse0x3a8cd70() {
   return (neuron0x3a85510()*0.0221286);
}

double NNfunction_ns_chi04_dL::synapse0x384e030() {
   return (neuron0x3a85850()*-0.0127419);
}

double NNfunction_ns_chi04_dL::synapse0x384e070() {
   return (neuron0x3a85b90()*0.00535907);
}

double NNfunction_ns_chi04_dL::synapse0x384e0b0() {
   return (neuron0x3a85ed0()*-0.371424);
}

double NNfunction_ns_chi04_dL::synapse0x384e0f0() {
   return (neuron0x3a86210()*-0.0244711);
}

double NNfunction_ns_chi04_dL::synapse0x384e130() {
   return (neuron0x3a86550()*-0.0291488);
}

double NNfunction_ns_chi04_dL::synapse0x384e170() {
   return (neuron0x3a86890()*-0.0183415);
}

double NNfunction_ns_chi04_dL::synapse0x384e1b0() {
   return (neuron0x3a86bd0()*0.029293);
}

double NNfunction_ns_chi04_dL::synapse0x3a8c9c0() {
   return (neuron0x3a86f10()*0.0159857);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ca00() {
   return (neuron0x3a87470()*-0.0137604);
}

double NNfunction_ns_chi04_dL::synapse0x384e300() {
   return (neuron0x3a877b0()*-0.0276135);
}

double NNfunction_ns_chi04_dL::synapse0x384e340() {
   return (neuron0x3a87af0()*0.0301654);
}

double NNfunction_ns_chi04_dL::synapse0x384e380() {
   return (neuron0x3a87e30()*-0.0357012);
}

double NNfunction_ns_chi04_dL::synapse0x384e3c0() {
   return (neuron0x3a88170()*0.00931698);
}

double NNfunction_ns_chi04_dL::synapse0x384e400() {
   return (neuron0x3a884b0()*-0.013135);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d5c0() {
   return (neuron0x3a887f0()*0.261118);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d940() {
   return (neuron0x3a83ba0()*-0.0150253);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d980() {
   return (neuron0x3a83e50()*-1.41276);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d9c0() {
   return (neuron0x3a84190()*-0.518972);
}

double NNfunction_ns_chi04_dL::synapse0x3a8da00() {
   return (neuron0x3a844d0()*-0.00698968);
}

double NNfunction_ns_chi04_dL::synapse0x3a8da40() {
   return (neuron0x3a84810()*-0.00577603);
}

double NNfunction_ns_chi04_dL::synapse0x3a8da80() {
   return (neuron0x3a84b50()*-0.0172152);
}

double NNfunction_ns_chi04_dL::synapse0x3a8dac0() {
   return (neuron0x3a84e90()*0.00382707);
}

double NNfunction_ns_chi04_dL::synapse0x3a8db00() {
   return (neuron0x3a851d0()*-0.00770144);
}

double NNfunction_ns_chi04_dL::synapse0x3a8db40() {
   return (neuron0x3a85510()*-0.0336638);
}

double NNfunction_ns_chi04_dL::synapse0x3a8db80() {
   return (neuron0x3a85850()*0.0152415);
}

double NNfunction_ns_chi04_dL::synapse0x3a8dbc0() {
   return (neuron0x3a85b90()*0.0188103);
}

double NNfunction_ns_chi04_dL::synapse0x3a8dc00() {
   return (neuron0x3a85ed0()*0.134472);
}

double NNfunction_ns_chi04_dL::synapse0x3a8dc40() {
   return (neuron0x3a86210()*0.0125574);
}

double NNfunction_ns_chi04_dL::synapse0x3a8dc80() {
   return (neuron0x3a86550()*0.00674267);
}

double NNfunction_ns_chi04_dL::synapse0x3a8dcc0() {
   return (neuron0x3a86890()*0.017087);
}

double NNfunction_ns_chi04_dL::synapse0x3a8dd00() {
   return (neuron0x3a86bd0()*-0.00545811);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d790() {
   return (neuron0x3a86f10()*-0.00322904);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d7d0() {
   return (neuron0x3a87470()*0.0123784);
}

double NNfunction_ns_chi04_dL::synapse0x3a8de50() {
   return (neuron0x3a877b0()*0.0138912);
}

double NNfunction_ns_chi04_dL::synapse0x3a8de90() {
   return (neuron0x3a87af0()*-0.00586184);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ded0() {
   return (neuron0x3a87e30()*0.0111029);
}

double NNfunction_ns_chi04_dL::synapse0x3a8df10() {
   return (neuron0x3a88170()*0.0103639);
}

double NNfunction_ns_chi04_dL::synapse0x3a8df50() {
   return (neuron0x3a884b0()*0.0142915);
}

double NNfunction_ns_chi04_dL::synapse0x3a8df90() {
   return (neuron0x3a887f0()*0.45922);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e310() {
   return (neuron0x3a83ba0()*-0.0137906);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e350() {
   return (neuron0x3a83e50()*0.0364895);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e390() {
   return (neuron0x3a84190()*-0.00856792);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e3d0() {
   return (neuron0x3a844d0()*0.0606099);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e410() {
   return (neuron0x3a84810()*0.00212021);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e450() {
   return (neuron0x3a84b50()*0.00115936);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e490() {
   return (neuron0x3a84e90()*0.00218793);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e4d0() {
   return (neuron0x3a851d0()*0.000755466);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e510() {
   return (neuron0x3a85510()*-0.00534384);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e550() {
   return (neuron0x3a85850()*-0.00407178);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e590() {
   return (neuron0x3a85b90()*0.00300354);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e5d0() {
   return (neuron0x3a85ed0()*0.886114);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e610() {
   return (neuron0x3a86210()*0.0107891);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e650() {
   return (neuron0x3a86550()*0.0129133);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e690() {
   return (neuron0x3a86890()*0.00125213);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e6d0() {
   return (neuron0x3a86bd0()*0.00818323);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e160() {
   return (neuron0x3a86f10()*0.00799605);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e1a0() {
   return (neuron0x3a87470()*-0.00378539);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e820() {
   return (neuron0x3a877b0()*0.00392933);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e860() {
   return (neuron0x3a87af0()*0.00552752);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e8a0() {
   return (neuron0x3a87e30()*0.00162474);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e8e0() {
   return (neuron0x3a88170()*-0.00555942);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e920() {
   return (neuron0x3a884b0()*-0.00361923);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e960() {
   return (neuron0x3a887f0()*0.0364009);
}

double NNfunction_ns_chi04_dL::synapse0x3a87360() {
   return (neuron0x3a83ba0()*-0.0307949);
}

double NNfunction_ns_chi04_dL::synapse0x3a873a0() {
   return (neuron0x3a83e50()*0.252835);
}

double NNfunction_ns_chi04_dL::synapse0x3a873e0() {
   return (neuron0x3a84190()*-0.057087);
}

double NNfunction_ns_chi04_dL::synapse0x3a87420() {
   return (neuron0x3a844d0()*-0.0996973);
}

double NNfunction_ns_chi04_dL::synapse0x3a8eef0() {
   return (neuron0x3a84810()*-0.151013);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ef30() {
   return (neuron0x3a84b50()*-0.268913);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ef70() {
   return (neuron0x3a84e90()*-0.0364511);
}

double NNfunction_ns_chi04_dL::synapse0x3a8efb0() {
   return (neuron0x3a851d0()*0.0972705);
}

double NNfunction_ns_chi04_dL::synapse0x3a8eff0() {
   return (neuron0x3a85510()*-0.0727283);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f030() {
   return (neuron0x3a85850()*0.344236);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f070() {
   return (neuron0x3a85b90()*0.541947);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f0b0() {
   return (neuron0x3a85ed0()*-0.567285);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f0f0() {
   return (neuron0x3a86210()*0.0988002);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f130() {
   return (neuron0x3a86550()*-0.423607);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f170() {
   return (neuron0x3a86890()*-0.118492);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f1b0() {
   return (neuron0x3a86bd0()*-0.232912);
}

double NNfunction_ns_chi04_dL::synapse0x3a8eb30() {
   return (neuron0x3a86f10()*-0.104879);
}

double NNfunction_ns_chi04_dL::synapse0x3a8eb70() {
   return (neuron0x3a87470()*-0.0703842);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f300() {
   return (neuron0x3a877b0()*-0.0444866);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f340() {
   return (neuron0x3a87af0()*0.0552916);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f380() {
   return (neuron0x3a87e30()*-0.93012);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f3c0() {
   return (neuron0x3a88170()*0.165251);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f400() {
   return (neuron0x3a884b0()*-0.193232);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f440() {
   return (neuron0x3a887f0()*0.329587);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f7c0() {
   return (neuron0x3a83ba0()*-0.0192083);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f800() {
   return (neuron0x3a83e50()*-0.22938);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f840() {
   return (neuron0x3a84190()*-3.43123);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f880() {
   return (neuron0x3a844d0()*0.0188203);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f8c0() {
   return (neuron0x3a84810()*-0.0161247);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f900() {
   return (neuron0x3a84b50()*-0.0133348);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f940() {
   return (neuron0x3a84e90()*0.0018167);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f980() {
   return (neuron0x3a851d0()*0.00223398);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f9c0() {
   return (neuron0x3a85510()*0.0057329);
}

double NNfunction_ns_chi04_dL::synapse0x3a8fa00() {
   return (neuron0x3a85850()*0.00487257);
}

double NNfunction_ns_chi04_dL::synapse0x3a8fa40() {
   return (neuron0x3a85b90()*-0.0309118);
}

double NNfunction_ns_chi04_dL::synapse0x3a8fa80() {
   return (neuron0x3a85ed0()*-0.0850221);
}

double NNfunction_ns_chi04_dL::synapse0x3a8fac0() {
   return (neuron0x3a86210()*-0.00597056);
}

double NNfunction_ns_chi04_dL::synapse0x3a8fb00() {
   return (neuron0x3a86550()*0.00945966);
}

double NNfunction_ns_chi04_dL::synapse0x3a8fb40() {
   return (neuron0x3a86890()*-0.0199928);
}

double NNfunction_ns_chi04_dL::synapse0x3a8fb80() {
   return (neuron0x3a86bd0()*0.0186674);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f610() {
   return (neuron0x3a86f10()*-0.00935642);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f650() {
   return (neuron0x3a87470()*0.00319799);
}

double NNfunction_ns_chi04_dL::synapse0x3a8fcd0() {
   return (neuron0x3a877b0()*4.24242e-05);
}

double NNfunction_ns_chi04_dL::synapse0x3a8fd10() {
   return (neuron0x3a87af0()*0.00595326);
}

double NNfunction_ns_chi04_dL::synapse0x3a8fd50() {
   return (neuron0x3a87e30()*0.0222906);
}

double NNfunction_ns_chi04_dL::synapse0x3a8fd90() {
   return (neuron0x3a88170()*0.0409974);
}

double NNfunction_ns_chi04_dL::synapse0x3a8fdd0() {
   return (neuron0x3a884b0()*0.00411907);
}

double NNfunction_ns_chi04_dL::synapse0x3a8fe10() {
   return (neuron0x3a887f0()*-1.91486);
}

double NNfunction_ns_chi04_dL::synapse0x3a90190() {
   return (neuron0x3a83ba0()*0.0600839);
}

double NNfunction_ns_chi04_dL::synapse0x3a901d0() {
   return (neuron0x3a83e50()*-1.0209);
}

double NNfunction_ns_chi04_dL::synapse0x3a90210() {
   return (neuron0x3a84190()*1.49513);
}

double NNfunction_ns_chi04_dL::synapse0x3a90250() {
   return (neuron0x3a844d0()*-0.00921672);
}

double NNfunction_ns_chi04_dL::synapse0x3a90290() {
   return (neuron0x3a84810()*0.0255513);
}

double NNfunction_ns_chi04_dL::synapse0x3a902d0() {
   return (neuron0x3a84b50()*-0.0242218);
}

double NNfunction_ns_chi04_dL::synapse0x3a90310() {
   return (neuron0x3a84e90()*0.0230799);
}

double NNfunction_ns_chi04_dL::synapse0x3a90350() {
   return (neuron0x3a851d0()*0.0135094);
}

double NNfunction_ns_chi04_dL::synapse0x3a90390() {
   return (neuron0x3a85510()*-0.0417107);
}

double NNfunction_ns_chi04_dL::synapse0x3a903d0() {
   return (neuron0x3a85850()*-0.00120807);
}

double NNfunction_ns_chi04_dL::synapse0x3a90410() {
   return (neuron0x3a85b90()*0.0155731);
}

double NNfunction_ns_chi04_dL::synapse0x3a90450() {
   return (neuron0x3a85ed0()*0.224997);
}

double NNfunction_ns_chi04_dL::synapse0x3a90490() {
   return (neuron0x3a86210()*0.0112917);
}

double NNfunction_ns_chi04_dL::synapse0x3a904d0() {
   return (neuron0x3a86550()*0.00332021);
}

double NNfunction_ns_chi04_dL::synapse0x3a90510() {
   return (neuron0x3a86890()*-0.00620019);
}

double NNfunction_ns_chi04_dL::synapse0x3a90550() {
   return (neuron0x3a86bd0()*-0.0181011);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ffe0() {
   return (neuron0x3a86f10()*-0.0215188);
}

double NNfunction_ns_chi04_dL::synapse0x3a90020() {
   return (neuron0x3a87470()*-0.00613753);
}

double NNfunction_ns_chi04_dL::synapse0x3a8cdb0() {
   return (neuron0x3a877b0()*-0.000831198);
}

double NNfunction_ns_chi04_dL::synapse0x3a8cdf0() {
   return (neuron0x3a87af0()*0.00288889);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ce30() {
   return (neuron0x3a87e30()*0.00717455);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ce70() {
   return (neuron0x3a88170()*0.0204228);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ceb0() {
   return (neuron0x3a884b0()*0.00976815);
}

double NNfunction_ns_chi04_dL::synapse0x3a8cef0() {
   return (neuron0x3a887f0()*0.832099);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d270() {
   return (neuron0x3a83ba0()*0.356931);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d2b0() {
   return (neuron0x3a83e50()*0.732099);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d2f0() {
   return (neuron0x3a84190()*-0.866039);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d330() {
   return (neuron0x3a844d0()*0.386705);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d370() {
   return (neuron0x3a84810()*0.222412);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d3b0() {
   return (neuron0x3a84b50()*-0.320415);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d3f0() {
   return (neuron0x3a84e90()*-0.498331);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d430() {
   return (neuron0x3a851d0()*0.384881);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d470() {
   return (neuron0x3a85510()*0.348895);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d4b0() {
   return (neuron0x3a85850()*0.70642);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d4f0() {
   return (neuron0x3a85b90()*-0.389725);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d530() {
   return (neuron0x3a85ed0()*0.631816);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d570() {
   return (neuron0x3a86210()*-0.275103);
}

double NNfunction_ns_chi04_dL::synapse0x3a916b0() {
   return (neuron0x3a86550()*-0.13492);
}

double NNfunction_ns_chi04_dL::synapse0x3a916f0() {
   return (neuron0x3a86890()*-0.926996);
}

double NNfunction_ns_chi04_dL::synapse0x3a91730() {
   return (neuron0x3a86bd0()*0.508755);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d0c0() {
   return (neuron0x3a86f10()*0.55597);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d100() {
   return (neuron0x3a87470()*-0.484016);
}

double NNfunction_ns_chi04_dL::synapse0x3a91880() {
   return (neuron0x3a877b0()*0.232058);
}

double NNfunction_ns_chi04_dL::synapse0x3a918c0() {
   return (neuron0x3a87af0()*-0.0657816);
}

double NNfunction_ns_chi04_dL::synapse0x3a91900() {
   return (neuron0x3a87e30()*-0.788311);
}

double NNfunction_ns_chi04_dL::synapse0x3a91940() {
   return (neuron0x3a88170()*-0.896521);
}

double NNfunction_ns_chi04_dL::synapse0x3a91980() {
   return (neuron0x3a884b0()*-1.11321);
}

double NNfunction_ns_chi04_dL::synapse0x3a919c0() {
   return (neuron0x3a887f0()*-0.0220245);
}

double NNfunction_ns_chi04_dL::synapse0x3a91d40() {
   return (neuron0x3a83ba0()*0.727809);
}

double NNfunction_ns_chi04_dL::synapse0x3a91d80() {
   return (neuron0x3a83e50()*0.971835);
}

double NNfunction_ns_chi04_dL::synapse0x3a91dc0() {
   return (neuron0x3a84190()*-0.0542669);
}

double NNfunction_ns_chi04_dL::synapse0x3a91e00() {
   return (neuron0x3a844d0()*-0.0701667);
}

double NNfunction_ns_chi04_dL::synapse0x3a91e40() {
   return (neuron0x3a84810()*-0.219655);
}

double NNfunction_ns_chi04_dL::synapse0x3a91e80() {
   return (neuron0x3a84b50()*0.0144402);
}

double NNfunction_ns_chi04_dL::synapse0x3a91ec0() {
   return (neuron0x3a84e90()*0.0552912);
}

double NNfunction_ns_chi04_dL::synapse0x3a91f00() {
   return (neuron0x3a851d0()*0.0229911);
}

double NNfunction_ns_chi04_dL::synapse0x3a91f40() {
   return (neuron0x3a85510()*0.00932954);
}

double NNfunction_ns_chi04_dL::synapse0x3a91f80() {
   return (neuron0x3a85850()*0.0429508);
}

double NNfunction_ns_chi04_dL::synapse0x3a91fc0() {
   return (neuron0x3a85b90()*-0.00561455);
}

double NNfunction_ns_chi04_dL::synapse0x3a92000() {
   return (neuron0x3a85ed0()*-0.0409486);
}

double NNfunction_ns_chi04_dL::synapse0x3a92040() {
   return (neuron0x3a86210()*-0.162635);
}

double NNfunction_ns_chi04_dL::synapse0x3a92080() {
   return (neuron0x3a86550()*0.0350032);
}

double NNfunction_ns_chi04_dL::synapse0x3a920c0() {
   return (neuron0x3a86890()*0.0520699);
}

double NNfunction_ns_chi04_dL::synapse0x3a92100() {
   return (neuron0x3a86bd0()*0.025912);
}

double NNfunction_ns_chi04_dL::synapse0x3a91b90() {
   return (neuron0x3a86f10()*0.00225428);
}

double NNfunction_ns_chi04_dL::synapse0x3a91bd0() {
   return (neuron0x3a87470()*0.122697);
}

double NNfunction_ns_chi04_dL::synapse0x3a92250() {
   return (neuron0x3a877b0()*0.145038);
}

double NNfunction_ns_chi04_dL::synapse0x3a92290() {
   return (neuron0x3a87af0()*0.241942);
}

double NNfunction_ns_chi04_dL::synapse0x3a922d0() {
   return (neuron0x3a87e30()*-0.0993092);
}

double NNfunction_ns_chi04_dL::synapse0x3a92310() {
   return (neuron0x3a88170()*0.0608282);
}

double NNfunction_ns_chi04_dL::synapse0x3a92350() {
   return (neuron0x3a884b0()*0.143607);
}

double NNfunction_ns_chi04_dL::synapse0x3a92390() {
   return (neuron0x3a887f0()*-0.882589);
}

double NNfunction_ns_chi04_dL::synapse0x3a92710() {
   return (neuron0x3a83ba0()*0.0767709);
}

double NNfunction_ns_chi04_dL::synapse0x3a92750() {
   return (neuron0x3a83e50()*0.974057);
}

double NNfunction_ns_chi04_dL::synapse0x3a92790() {
   return (neuron0x3a84190()*-0.787117);
}

double NNfunction_ns_chi04_dL::synapse0x3a927d0() {
   return (neuron0x3a844d0()*0.256409);
}

double NNfunction_ns_chi04_dL::synapse0x3a92810() {
   return (neuron0x3a84810()*0.478256);
}

double NNfunction_ns_chi04_dL::synapse0x3a92850() {
   return (neuron0x3a84b50()*-0.535826);
}

double NNfunction_ns_chi04_dL::synapse0x3a92890() {
   return (neuron0x3a84e90()*0.0317488);
}

double NNfunction_ns_chi04_dL::synapse0x3a928d0() {
   return (neuron0x3a851d0()*-0.197151);
}

double NNfunction_ns_chi04_dL::synapse0x3a92910() {
   return (neuron0x3a85510()*-0.731759);
}

double NNfunction_ns_chi04_dL::synapse0x3a92950() {
   return (neuron0x3a85850()*-0.0401724);
}

double NNfunction_ns_chi04_dL::synapse0x3a92990() {
   return (neuron0x3a85b90()*-0.410473);
}

double NNfunction_ns_chi04_dL::synapse0x3a929d0() {
   return (neuron0x3a85ed0()*0.368617);
}

double NNfunction_ns_chi04_dL::synapse0x3a92a10() {
   return (neuron0x3a86210()*0.143859);
}

double NNfunction_ns_chi04_dL::synapse0x3a92a50() {
   return (neuron0x3a86550()*0.486254);
}

double NNfunction_ns_chi04_dL::synapse0x3a92a90() {
   return (neuron0x3a86890()*0.162004);
}

double NNfunction_ns_chi04_dL::synapse0x3a92ad0() {
   return (neuron0x3a86bd0()*-0.497181);
}

double NNfunction_ns_chi04_dL::synapse0x3a92560() {
   return (neuron0x3a86f10()*0.0610585);
}

double NNfunction_ns_chi04_dL::synapse0x3a925a0() {
   return (neuron0x3a87470()*-0.445016);
}

double NNfunction_ns_chi04_dL::synapse0x3a92c20() {
   return (neuron0x3a877b0()*0.278762);
}

double NNfunction_ns_chi04_dL::synapse0x3a92c60() {
   return (neuron0x3a87af0()*0.130526);
}

double NNfunction_ns_chi04_dL::synapse0x3a92ca0() {
   return (neuron0x3a87e30()*1.10003);
}

double NNfunction_ns_chi04_dL::synapse0x3a92ce0() {
   return (neuron0x3a88170()*0.825471);
}

double NNfunction_ns_chi04_dL::synapse0x3a92d20() {
   return (neuron0x3a884b0()*0.408892);
}

double NNfunction_ns_chi04_dL::synapse0x3a92d60() {
   return (neuron0x3a887f0()*-0.14964);
}

double NNfunction_ns_chi04_dL::synapse0x3a930e0() {
   return (neuron0x3a83ba0()*-0.0112888);
}

double NNfunction_ns_chi04_dL::synapse0x3a93120() {
   return (neuron0x3a83e50()*-0.0121263);
}

double NNfunction_ns_chi04_dL::synapse0x3a93160() {
   return (neuron0x3a84190()*-0.0160221);
}

double NNfunction_ns_chi04_dL::synapse0x3a931a0() {
   return (neuron0x3a844d0()*2.03182);
}

double NNfunction_ns_chi04_dL::synapse0x3a931e0() {
   return (neuron0x3a84810()*-0.00107322);
}

double NNfunction_ns_chi04_dL::synapse0x3a93220() {
   return (neuron0x3a84b50()*-0.0020664);
}

double NNfunction_ns_chi04_dL::synapse0x3a93260() {
   return (neuron0x3a84e90()*0.00972878);
}

double NNfunction_ns_chi04_dL::synapse0x3a932a0() {
   return (neuron0x3a851d0()*-0.00413462);
}

double NNfunction_ns_chi04_dL::synapse0x3a932e0() {
   return (neuron0x3a85510()*0.00864973);
}

double NNfunction_ns_chi04_dL::synapse0x3a93320() {
   return (neuron0x3a85850()*-0.000820916);
}

double NNfunction_ns_chi04_dL::synapse0x3a93360() {
   return (neuron0x3a85b90()*0.0114574);
}

double NNfunction_ns_chi04_dL::synapse0x3a933a0() {
   return (neuron0x3a85ed0()*0.333942);
}

double NNfunction_ns_chi04_dL::synapse0x3a933e0() {
   return (neuron0x3a86210()*-0.0180662);
}

double NNfunction_ns_chi04_dL::synapse0x3a93420() {
   return (neuron0x3a86550()*0.0246649);
}

double NNfunction_ns_chi04_dL::synapse0x3a93460() {
   return (neuron0x3a86890()*-0.0232601);
}

double NNfunction_ns_chi04_dL::synapse0x3a934a0() {
   return (neuron0x3a86bd0()*0.0024246);
}

double NNfunction_ns_chi04_dL::synapse0x3a92f30() {
   return (neuron0x3a86f10()*0.00824839);
}

double NNfunction_ns_chi04_dL::synapse0x3a92f70() {
   return (neuron0x3a87470()*-0.00224094);
}

double NNfunction_ns_chi04_dL::synapse0x3a935f0() {
   return (neuron0x3a877b0()*-0.00698886);
}

double NNfunction_ns_chi04_dL::synapse0x3a93630() {
   return (neuron0x3a87af0()*0.00252176);
}

double NNfunction_ns_chi04_dL::synapse0x3a93670() {
   return (neuron0x3a87e30()*-0.00130527);
}

double NNfunction_ns_chi04_dL::synapse0x3a936b0() {
   return (neuron0x3a88170()*0.000985155);
}

double NNfunction_ns_chi04_dL::synapse0x3a936f0() {
   return (neuron0x3a884b0()*0.0127504);
}

double NNfunction_ns_chi04_dL::synapse0x3a93730() {
   return (neuron0x3a887f0()*-0.0017438);
}

double NNfunction_ns_chi04_dL::synapse0x3a93ab0() {
   return (neuron0x3a83ba0()*0.0139231);
}

double NNfunction_ns_chi04_dL::synapse0x3a83d30() {
   return (neuron0x3a83e50()*0.0158321);
}

double NNfunction_ns_chi04_dL::synapse0x3a83d70() {
   return (neuron0x3a84190()*-0.00106978);
}

double NNfunction_ns_chi04_dL::synapse0x3a84070() {
   return (neuron0x3a844d0()*-3.10799);
}

double NNfunction_ns_chi04_dL::synapse0x3a840b0() {
   return (neuron0x3a84810()*0.00400131);
}

double NNfunction_ns_chi04_dL::synapse0x3a843b0() {
   return (neuron0x3a84b50()*-0.0209716);
}

double NNfunction_ns_chi04_dL::synapse0x3a843f0() {
   return (neuron0x3a84e90()*-0.0151351);
}

double NNfunction_ns_chi04_dL::synapse0x3a846f0() {
   return (neuron0x3a851d0()*0.00305448);
}

double NNfunction_ns_chi04_dL::synapse0x3a84730() {
   return (neuron0x3a85510()*-0.00409521);
}

double NNfunction_ns_chi04_dL::synapse0x3a84a30() {
   return (neuron0x3a85850()*0.00241058);
}

double NNfunction_ns_chi04_dL::synapse0x3a84a70() {
   return (neuron0x3a85b90()*-0.00304623);
}

double NNfunction_ns_chi04_dL::synapse0x3a84d70() {
   return (neuron0x3a85ed0()*0.313768);
}

double NNfunction_ns_chi04_dL::synapse0x3a84db0() {
   return (neuron0x3a86210()*0.0282369);
}

double NNfunction_ns_chi04_dL::synapse0x3a850b0() {
   return (neuron0x3a86550()*0.00259182);
}

double NNfunction_ns_chi04_dL::synapse0x3a850f0() {
   return (neuron0x3a86890()*0.0152073);
}

double NNfunction_ns_chi04_dL::synapse0x3a853f0() {
   return (neuron0x3a86bd0()*-0.01361);
}

double NNfunction_ns_chi04_dL::synapse0x3a85430() {
   return (neuron0x3a86f10()*0.0276751);
}

double NNfunction_ns_chi04_dL::synapse0x3a85730() {
   return (neuron0x3a87470()*-0.00053901);
}

double NNfunction_ns_chi04_dL::synapse0x3a85770() {
   return (neuron0x3a877b0()*0.0146463);
}

double NNfunction_ns_chi04_dL::synapse0x3a85a70() {
   return (neuron0x3a87af0()*-0.0119144);
}

double NNfunction_ns_chi04_dL::synapse0x3a85ab0() {
   return (neuron0x3a87e30()*-0.00584319);
}

double NNfunction_ns_chi04_dL::synapse0x3a85db0() {
   return (neuron0x3a88170()*-0.000774464);
}

double NNfunction_ns_chi04_dL::synapse0x3a85df0() {
   return (neuron0x3a884b0()*-0.0195335);
}

double NNfunction_ns_chi04_dL::synapse0x3a860f0() {
   return (neuron0x3a887f0()*-0.0486902);
}

double NNfunction_ns_chi04_dL::synapse0x3a86130() {
   return (neuron0x3a83ba0()*0.0700545);
}

double NNfunction_ns_chi04_dL::synapse0x3a86df0() {
   return (neuron0x3a83e50()*-4.22375);
}

double NNfunction_ns_chi04_dL::synapse0x3a86e30() {
   return (neuron0x3a84190()*1.86859);
}

double NNfunction_ns_chi04_dL::synapse0x3a93900() {
   return (neuron0x3a844d0()*0.018057);
}

double NNfunction_ns_chi04_dL::synapse0x3a93940() {
   return (neuron0x3a84810()*0.0411942);
}

double NNfunction_ns_chi04_dL::synapse0x3a87130() {
   return (neuron0x3a84b50()*0.0434284);
}

double NNfunction_ns_chi04_dL::synapse0x3a87170() {
   return (neuron0x3a84e90()*0.00178947);
}

double NNfunction_ns_chi04_dL::synapse0x3a87690() {
   return (neuron0x3a851d0()*-0.00559588);
}

double NNfunction_ns_chi04_dL::synapse0x3a876d0() {
   return (neuron0x3a85510()*-0.0765829);
}

double NNfunction_ns_chi04_dL::synapse0x3a879d0() {
   return (neuron0x3a85850()*-0.0236055);
}

double NNfunction_ns_chi04_dL::synapse0x3a87a10() {
   return (neuron0x3a85b90()*-0.00755945);
}

double NNfunction_ns_chi04_dL::synapse0x3a87d10() {
   return (neuron0x3a85ed0()*0.00363723);
}

double NNfunction_ns_chi04_dL::synapse0x3a87d50() {
   return (neuron0x3a86210()*-0.010549);
}

double NNfunction_ns_chi04_dL::synapse0x3a88050() {
   return (neuron0x3a86550()*0.0295422);
}

double NNfunction_ns_chi04_dL::synapse0x3a88090() {
   return (neuron0x3a86890()*-0.051004);
}

double NNfunction_ns_chi04_dL::synapse0x3a88390() {
   return (neuron0x3a86bd0()*-0.0501964);
}

double NNfunction_ns_chi04_dL::synapse0x3a883d0() {
   return (neuron0x3a86f10()*-0.0458661);
}

double NNfunction_ns_chi04_dL::synapse0x3a886d0() {
   return (neuron0x3a87470()*-0.0236534);
}

double NNfunction_ns_chi04_dL::synapse0x3a88710() {
   return (neuron0x3a877b0()*-0.043795);
}

double NNfunction_ns_chi04_dL::synapse0x3a88a10() {
   return (neuron0x3a87af0()*-0.000725501);
}

double NNfunction_ns_chi04_dL::synapse0x3a88a50() {
   return (neuron0x3a87e30()*-0.00659328);
}

double NNfunction_ns_chi04_dL::synapse0x3a86430() {
   return (neuron0x3a88170()*-0.00358288);
}

double NNfunction_ns_chi04_dL::synapse0x3a86470() {
   return (neuron0x3a884b0()*-0.0198846);
}

double NNfunction_ns_chi04_dL::synapse0x3a95820() {
   return (neuron0x3a887f0()*-3.12006);
}

double NNfunction_ns_chi04_dL::synapse0x3a95ba0() {
   return (neuron0x3a83ba0()*0.0248675);
}

double NNfunction_ns_chi04_dL::synapse0x3a95be0() {
   return (neuron0x3a83e50()*4.21185);
}

double NNfunction_ns_chi04_dL::synapse0x3a95c20() {
   return (neuron0x3a84190()*3.83294);
}

double NNfunction_ns_chi04_dL::synapse0x3a95c60() {
   return (neuron0x3a844d0()*-0.00926888);
}

double NNfunction_ns_chi04_dL::synapse0x3a95ca0() {
   return (neuron0x3a84810()*-0.00682565);
}

double NNfunction_ns_chi04_dL::synapse0x3a95ce0() {
   return (neuron0x3a84b50()*-0.0169762);
}

double NNfunction_ns_chi04_dL::synapse0x3a95d20() {
   return (neuron0x3a84e90()*0.042966);
}

double NNfunction_ns_chi04_dL::synapse0x3a95d60() {
   return (neuron0x3a851d0()*0.0245946);
}

double NNfunction_ns_chi04_dL::synapse0x3a95da0() {
   return (neuron0x3a85510()*0.03235);
}

double NNfunction_ns_chi04_dL::synapse0x3a95de0() {
   return (neuron0x3a85850()*0.0027296);
}

double NNfunction_ns_chi04_dL::synapse0x3a95e20() {
   return (neuron0x3a85b90()*-0.0121805);
}

double NNfunction_ns_chi04_dL::synapse0x3a95e60() {
   return (neuron0x3a85ed0()*0.130305);
}

double NNfunction_ns_chi04_dL::synapse0x3a95ea0() {
   return (neuron0x3a86210()*0.0236948);
}

double NNfunction_ns_chi04_dL::synapse0x3a95ee0() {
   return (neuron0x3a86550()*-0.00958717);
}

double NNfunction_ns_chi04_dL::synapse0x3a95f20() {
   return (neuron0x3a86890()*-0.0204079);
}

double NNfunction_ns_chi04_dL::synapse0x3a95f60() {
   return (neuron0x3a86bd0()*0.0227264);
}

double NNfunction_ns_chi04_dL::synapse0x3a959f0() {
   return (neuron0x3a86f10()*-0.00507594);
}

double NNfunction_ns_chi04_dL::synapse0x3a95a30() {
   return (neuron0x3a87470()*0.00757874);
}

double NNfunction_ns_chi04_dL::synapse0x3a960b0() {
   return (neuron0x3a877b0()*0.00359165);
}

double NNfunction_ns_chi04_dL::synapse0x3a960f0() {
   return (neuron0x3a87af0()*-0.00294273);
}

double NNfunction_ns_chi04_dL::synapse0x3a96130() {
   return (neuron0x3a87e30()*0.0334503);
}

double NNfunction_ns_chi04_dL::synapse0x3a96170() {
   return (neuron0x3a88170()*-0.00966106);
}

double NNfunction_ns_chi04_dL::synapse0x3a961b0() {
   return (neuron0x3a884b0()*-0.0168769);
}

double NNfunction_ns_chi04_dL::synapse0x3a961f0() {
   return (neuron0x3a887f0()*-1.04331);
}

double NNfunction_ns_chi04_dL::synapse0x3a96570() {
   return (neuron0x3a83ba0()*0.0592976);
}

double NNfunction_ns_chi04_dL::synapse0x3a965b0() {
   return (neuron0x3a83e50()*-6.4462);
}

double NNfunction_ns_chi04_dL::synapse0x3a965f0() {
   return (neuron0x3a84190()*7.84711);
}

double NNfunction_ns_chi04_dL::synapse0x3a96630() {
   return (neuron0x3a844d0()*-0.00872085);
}

double NNfunction_ns_chi04_dL::synapse0x3a96670() {
   return (neuron0x3a84810()*0.0549539);
}

double NNfunction_ns_chi04_dL::synapse0x3a966b0() {
   return (neuron0x3a84b50()*0.0158064);
}

double NNfunction_ns_chi04_dL::synapse0x3a966f0() {
   return (neuron0x3a84e90()*0.0102812);
}

double NNfunction_ns_chi04_dL::synapse0x3a96730() {
   return (neuron0x3a851d0()*0.0319324);
}

double NNfunction_ns_chi04_dL::synapse0x3a96770() {
   return (neuron0x3a85510()*-0.0429605);
}

double NNfunction_ns_chi04_dL::synapse0x3a967b0() {
   return (neuron0x3a85850()*0.00702881);
}

double NNfunction_ns_chi04_dL::synapse0x3a967f0() {
   return (neuron0x3a85b90()*-0.0104541);
}

double NNfunction_ns_chi04_dL::synapse0x3a96830() {
   return (neuron0x3a85ed0()*0.250311);
}

double NNfunction_ns_chi04_dL::synapse0x3a96870() {
   return (neuron0x3a86210()*0.0560791);
}

double NNfunction_ns_chi04_dL::synapse0x3a968b0() {
   return (neuron0x3a86550()*0.0179447);
}

double NNfunction_ns_chi04_dL::synapse0x3a968f0() {
   return (neuron0x3a86890()*0.00976809);
}

double NNfunction_ns_chi04_dL::synapse0x3a96930() {
   return (neuron0x3a86bd0()*-0.0421415);
}

double NNfunction_ns_chi04_dL::synapse0x3a963c0() {
   return (neuron0x3a86f10()*-0.0283325);
}

double NNfunction_ns_chi04_dL::synapse0x3a96400() {
   return (neuron0x3a87470()*0.0137489);
}

double NNfunction_ns_chi04_dL::synapse0x3a96a80() {
   return (neuron0x3a877b0()*0.0402247);
}

double NNfunction_ns_chi04_dL::synapse0x3a96ac0() {
   return (neuron0x3a87af0()*-0.0172153);
}

double NNfunction_ns_chi04_dL::synapse0x3a96b00() {
   return (neuron0x3a87e30()*0.0293584);
}

double NNfunction_ns_chi04_dL::synapse0x3a96b40() {
   return (neuron0x3a88170()*-0.0239726);
}

double NNfunction_ns_chi04_dL::synapse0x3a96b80() {
   return (neuron0x3a884b0()*0.0395243);
}

double NNfunction_ns_chi04_dL::synapse0x3a96bc0() {
   return (neuron0x3a887f0()*-0.219528);
}

double NNfunction_ns_chi04_dL::synapse0x3a96f40() {
   return (neuron0x3a83ba0()*-0.0572971);
}

double NNfunction_ns_chi04_dL::synapse0x3a96f80() {
   return (neuron0x3a83e50()*-0.142968);
}

double NNfunction_ns_chi04_dL::synapse0x3a96fc0() {
   return (neuron0x3a84190()*-2.47115);
}

double NNfunction_ns_chi04_dL::synapse0x3a97000() {
   return (neuron0x3a844d0()*0.0306122);
}

double NNfunction_ns_chi04_dL::synapse0x3a97040() {
   return (neuron0x3a84810()*0.00648388);
}

double NNfunction_ns_chi04_dL::synapse0x3a97080() {
   return (neuron0x3a84b50()*-0.00336874);
}

double NNfunction_ns_chi04_dL::synapse0x3a970c0() {
   return (neuron0x3a84e90()*0.0105761);
}

double NNfunction_ns_chi04_dL::synapse0x3a97100() {
   return (neuron0x3a851d0()*-0.0179684);
}

double NNfunction_ns_chi04_dL::synapse0x3a97140() {
   return (neuron0x3a85510()*-0.0111595);
}

double NNfunction_ns_chi04_dL::synapse0x3a97180() {
   return (neuron0x3a85850()*-0.010264);
}

double NNfunction_ns_chi04_dL::synapse0x3a971c0() {
   return (neuron0x3a85b90()*0.00842227);
}

double NNfunction_ns_chi04_dL::synapse0x3a97200() {
   return (neuron0x3a85ed0()*-0.0317408);
}

double NNfunction_ns_chi04_dL::synapse0x3a97240() {
   return (neuron0x3a86210()*-0.0231414);
}

double NNfunction_ns_chi04_dL::synapse0x3a97280() {
   return (neuron0x3a86550()*-0.025169);
}

double NNfunction_ns_chi04_dL::synapse0x3a972c0() {
   return (neuron0x3a86890()*0.00467777);
}

double NNfunction_ns_chi04_dL::synapse0x3a97300() {
   return (neuron0x3a86bd0()*-0.00752453);
}

double NNfunction_ns_chi04_dL::synapse0x3a96d90() {
   return (neuron0x3a86f10()*0.00184452);
}

double NNfunction_ns_chi04_dL::synapse0x3a96dd0() {
   return (neuron0x3a87470()*-0.0128811);
}

double NNfunction_ns_chi04_dL::synapse0x3a97450() {
   return (neuron0x3a877b0()*0.0149722);
}

double NNfunction_ns_chi04_dL::synapse0x3a97490() {
   return (neuron0x3a87af0()*0.00411562);
}

double NNfunction_ns_chi04_dL::synapse0x3a974d0() {
   return (neuron0x3a87e30()*-0.026921);
}

double NNfunction_ns_chi04_dL::synapse0x3a97510() {
   return (neuron0x3a88170()*-0.00762494);
}

double NNfunction_ns_chi04_dL::synapse0x3a97550() {
   return (neuron0x3a884b0()*-0.0127255);
}

double NNfunction_ns_chi04_dL::synapse0x3a97590() {
   return (neuron0x3a887f0()*-0.0744873);
}

double NNfunction_ns_chi04_dL::synapse0x3a97910() {
   return (neuron0x3a83ba0()*0.0153617);
}

double NNfunction_ns_chi04_dL::synapse0x3a97950() {
   return (neuron0x3a83e50()*0.0184308);
}

double NNfunction_ns_chi04_dL::synapse0x3a97990() {
   return (neuron0x3a84190()*0.0236863);
}

double NNfunction_ns_chi04_dL::synapse0x3a979d0() {
   return (neuron0x3a844d0()*-0.825036);
}

double NNfunction_ns_chi04_dL::synapse0x3a97a10() {
   return (neuron0x3a84810()*0.0015199);
}

double NNfunction_ns_chi04_dL::synapse0x3a97a50() {
   return (neuron0x3a84b50()*0.0136558);
}

double NNfunction_ns_chi04_dL::synapse0x3a97a90() {
   return (neuron0x3a84e90()*-0.00964762);
}

double NNfunction_ns_chi04_dL::synapse0x3a97ad0() {
   return (neuron0x3a851d0()*0.00980191);
}

double NNfunction_ns_chi04_dL::synapse0x3a97b10() {
   return (neuron0x3a85510()*-0.000526646);
}

double NNfunction_ns_chi04_dL::synapse0x3a97b50() {
   return (neuron0x3a85850()*-0.00678365);
}

double NNfunction_ns_chi04_dL::synapse0x3a97b90() {
   return (neuron0x3a85b90()*-0.0059654);
}

double NNfunction_ns_chi04_dL::synapse0x3a97bd0() {
   return (neuron0x3a85ed0()*-0.477438);
}

double NNfunction_ns_chi04_dL::synapse0x3a97c10() {
   return (neuron0x3a86210()*-0.000359897);
}

double NNfunction_ns_chi04_dL::synapse0x3a97c50() {
   return (neuron0x3a86550()*-0.0259156);
}

double NNfunction_ns_chi04_dL::synapse0x3a97c90() {
   return (neuron0x3a86890()*0.0284754);
}

double NNfunction_ns_chi04_dL::synapse0x3a97cd0() {
   return (neuron0x3a86bd0()*0.00813512);
}

double NNfunction_ns_chi04_dL::synapse0x3a97760() {
   return (neuron0x3a86f10()*-0.00835819);
}

double NNfunction_ns_chi04_dL::synapse0x3a977a0() {
   return (neuron0x3a87470()*-0.00358896);
}

double NNfunction_ns_chi04_dL::synapse0x3a97e20() {
   return (neuron0x3a877b0()*-0.00273249);
}

double NNfunction_ns_chi04_dL::synapse0x3a97e60() {
   return (neuron0x3a87af0()*0.000282111);
}

double NNfunction_ns_chi04_dL::synapse0x3a97ea0() {
   return (neuron0x3a87e30()*0.00629836);
}

double NNfunction_ns_chi04_dL::synapse0x3a97ee0() {
   return (neuron0x3a88170()*0.00644469);
}

double NNfunction_ns_chi04_dL::synapse0x3a97f20() {
   return (neuron0x3a884b0()*-0.00506873);
}

double NNfunction_ns_chi04_dL::synapse0x3a97f60() {
   return (neuron0x3a887f0()*0.0280609);
}

double NNfunction_ns_chi04_dL::synapse0x3a982e0() {
   return (neuron0x3a83ba0()*-0.000785317);
}

double NNfunction_ns_chi04_dL::synapse0x3a98320() {
   return (neuron0x3a83e50()*-0.0347018);
}

double NNfunction_ns_chi04_dL::synapse0x3a98360() {
   return (neuron0x3a84190()*-0.0125134);
}

double NNfunction_ns_chi04_dL::synapse0x3a983a0() {
   return (neuron0x3a844d0()*-1.8331);
}

double NNfunction_ns_chi04_dL::synapse0x3a983e0() {
   return (neuron0x3a84810()*-0.00270406);
}

double NNfunction_ns_chi04_dL::synapse0x3a98420() {
   return (neuron0x3a84b50()*0.00335874);
}

double NNfunction_ns_chi04_dL::synapse0x3a98460() {
   return (neuron0x3a84e90()*0.0131685);
}

double NNfunction_ns_chi04_dL::synapse0x3a984a0() {
   return (neuron0x3a851d0()*0.00392646);
}

double NNfunction_ns_chi04_dL::synapse0x3a984e0() {
   return (neuron0x3a85510()*0.00195944);
}

double NNfunction_ns_chi04_dL::synapse0x3a906a0() {
   return (neuron0x3a85850()*0.00585006);
}

double NNfunction_ns_chi04_dL::synapse0x3a906e0() {
   return (neuron0x3a85b90()*0.00661316);
}

double NNfunction_ns_chi04_dL::synapse0x3a90720() {
   return (neuron0x3a85ed0()*-0.030211);
}

double NNfunction_ns_chi04_dL::synapse0x3a90760() {
   return (neuron0x3a86210()*0.00301448);
}

double NNfunction_ns_chi04_dL::synapse0x3a907a0() {
   return (neuron0x3a86550()*-0.0118388);
}

double NNfunction_ns_chi04_dL::synapse0x3a907e0() {
   return (neuron0x3a86890()*0.0133846);
}

double NNfunction_ns_chi04_dL::synapse0x3a90820() {
   return (neuron0x3a86bd0()*0.0155586);
}

double NNfunction_ns_chi04_dL::synapse0x3a98130() {
   return (neuron0x3a86f10()*-0.0206394);
}

double NNfunction_ns_chi04_dL::synapse0x3a98170() {
   return (neuron0x3a87470()*0.00149719);
}

double NNfunction_ns_chi04_dL::synapse0x3a90970() {
   return (neuron0x3a877b0()*-0.00055358);
}

double NNfunction_ns_chi04_dL::synapse0x3a909b0() {
   return (neuron0x3a87af0()*0.00117154);
}

double NNfunction_ns_chi04_dL::synapse0x3a909f0() {
   return (neuron0x3a87e30()*0.00042508);
}

double NNfunction_ns_chi04_dL::synapse0x3a90a30() {
   return (neuron0x3a88170()*-0.00429819);
}

double NNfunction_ns_chi04_dL::synapse0x3a90a70() {
   return (neuron0x3a884b0()*0.00195864);
}

double NNfunction_ns_chi04_dL::synapse0x3a90ab0() {
   return (neuron0x3a887f0()*0.00159782);
}

double NNfunction_ns_chi04_dL::synapse0x3a90e30() {
   return (neuron0x3a83ba0()*-0.0917286);
}

double NNfunction_ns_chi04_dL::synapse0x3a90e70() {
   return (neuron0x3a83e50()*-0.343281);
}

double NNfunction_ns_chi04_dL::synapse0x3a90eb0() {
   return (neuron0x3a84190()*-2.89787);
}

double NNfunction_ns_chi04_dL::synapse0x3a90ef0() {
   return (neuron0x3a844d0()*0.0250076);
}

double NNfunction_ns_chi04_dL::synapse0x3a90f30() {
   return (neuron0x3a84810()*-0.0124876);
}

double NNfunction_ns_chi04_dL::synapse0x3a90f70() {
   return (neuron0x3a84b50()*-0.0222687);
}

double NNfunction_ns_chi04_dL::synapse0x3a90fb0() {
   return (neuron0x3a84e90()*0.0294003);
}

double NNfunction_ns_chi04_dL::synapse0x3a90ff0() {
   return (neuron0x3a851d0()*-0.0232878);
}

double NNfunction_ns_chi04_dL::synapse0x3a91030() {
   return (neuron0x3a85510()*-0.0283002);
}

double NNfunction_ns_chi04_dL::synapse0x3a91070() {
   return (neuron0x3a85850()*0.00534029);
}

double NNfunction_ns_chi04_dL::synapse0x3a910b0() {
   return (neuron0x3a85b90()*-0.0179559);
}

double NNfunction_ns_chi04_dL::synapse0x3a910f0() {
   return (neuron0x3a85ed0()*-0.0759049);
}

double NNfunction_ns_chi04_dL::synapse0x3a91130() {
   return (neuron0x3a86210()*-0.0156812);
}

double NNfunction_ns_chi04_dL::synapse0x3a91170() {
   return (neuron0x3a86550()*0.0150345);
}

double NNfunction_ns_chi04_dL::synapse0x3a911b0() {
   return (neuron0x3a86890()*-0.0030433);
}

double NNfunction_ns_chi04_dL::synapse0x3a911f0() {
   return (neuron0x3a86bd0()*0.00512353);
}

double NNfunction_ns_chi04_dL::synapse0x3a90c80() {
   return (neuron0x3a86f10()*-0.0243944);
}

double NNfunction_ns_chi04_dL::synapse0x3a90cc0() {
   return (neuron0x3a87470()*-0.00869893);
}

double NNfunction_ns_chi04_dL::synapse0x3a91340() {
   return (neuron0x3a877b0()*-0.00648736);
}

double NNfunction_ns_chi04_dL::synapse0x3a91380() {
   return (neuron0x3a87af0()*0.0214231);
}

double NNfunction_ns_chi04_dL::synapse0x3a913c0() {
   return (neuron0x3a87e30()*0.00445566);
}

double NNfunction_ns_chi04_dL::synapse0x3a91400() {
   return (neuron0x3a88170()*0.0421309);
}

double NNfunction_ns_chi04_dL::synapse0x3a91440() {
   return (neuron0x3a884b0()*-0.00670806);
}

double NNfunction_ns_chi04_dL::synapse0x3a91480() {
   return (neuron0x3a887f0()*-2.46273);
}

double NNfunction_ns_chi04_dL::synapse0x3a91650() {
   return (neuron0x3a83ba0()*-0.864294);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a6e0() {
   return (neuron0x3a83e50()*1.02411);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a720() {
   return (neuron0x3a84190()*-0.342801);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a760() {
   return (neuron0x3a844d0()*-0.323047);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a7a0() {
   return (neuron0x3a84810()*-0.204771);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a7e0() {
   return (neuron0x3a84b50()*-0.049747);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a820() {
   return (neuron0x3a84e90()*-0.0990383);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a860() {
   return (neuron0x3a851d0()*0.0670366);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a8a0() {
   return (neuron0x3a85510()*0.0605182);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a8e0() {
   return (neuron0x3a85850()*-0.308779);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a920() {
   return (neuron0x3a85b90()*-0.103547);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a960() {
   return (neuron0x3a85ed0()*-0.686376);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a9a0() {
   return (neuron0x3a86210()*0.178605);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a9e0() {
   return (neuron0x3a86550()*-0.104534);
}

double NNfunction_ns_chi04_dL::synapse0x3a9aa20() {
   return (neuron0x3a86890()*0.130352);
}

double NNfunction_ns_chi04_dL::synapse0x3a9aa60() {
   return (neuron0x3a86bd0()*0.110754);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a530() {
   return (neuron0x3a86f10()*0.479824);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a570() {
   return (neuron0x3a87470()*-0.151713);
}

double NNfunction_ns_chi04_dL::synapse0x3a9abb0() {
   return (neuron0x3a877b0()*0.0606774);
}

double NNfunction_ns_chi04_dL::synapse0x3a9abf0() {
   return (neuron0x3a87af0()*-0.118567);
}

double NNfunction_ns_chi04_dL::synapse0x3a9ac30() {
   return (neuron0x3a87e30()*-0.00970342);
}

double NNfunction_ns_chi04_dL::synapse0x3a9ac70() {
   return (neuron0x3a88170()*0.269758);
}

double NNfunction_ns_chi04_dL::synapse0x3a9acb0() {
   return (neuron0x3a884b0()*0.0370288);
}

double NNfunction_ns_chi04_dL::synapse0x3a9acf0() {
   return (neuron0x3a887f0()*-1.1902);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b070() {
   return (neuron0x3a83ba0()*0.650341);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b0b0() {
   return (neuron0x3a83e50()*0.352359);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b0f0() {
   return (neuron0x3a84190()*0.551123);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b130() {
   return (neuron0x3a844d0()*0.455399);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b170() {
   return (neuron0x3a84810()*0.182405);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b1b0() {
   return (neuron0x3a84b50()*0.189527);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b1f0() {
   return (neuron0x3a84e90()*0.045719);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b230() {
   return (neuron0x3a851d0()*-0.164221);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b270() {
   return (neuron0x3a85510()*0.0751956);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b2b0() {
   return (neuron0x3a85850()*0.254527);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b2f0() {
   return (neuron0x3a85b90()*-0.0129423);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b330() {
   return (neuron0x3a85ed0()*0.727305);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b370() {
   return (neuron0x3a86210()*-0.135691);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b3b0() {
   return (neuron0x3a86550()*0.112643);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b3f0() {
   return (neuron0x3a86890()*-0.310067);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b430() {
   return (neuron0x3a86bd0()*0.0978276);
}

double NNfunction_ns_chi04_dL::synapse0x3a9aec0() {
   return (neuron0x3a86f10()*-0.567595);
}

double NNfunction_ns_chi04_dL::synapse0x3a9af00() {
   return (neuron0x3a87470()*0.107393);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b580() {
   return (neuron0x3a877b0()*0.00172085);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b5c0() {
   return (neuron0x3a87af0()*0.150029);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b600() {
   return (neuron0x3a87e30()*0.0252796);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b640() {
   return (neuron0x3a88170()*-0.147218);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b680() {
   return (neuron0x3a884b0()*0.00523833);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b6c0() {
   return (neuron0x3a887f0()*0.499082);
}

double NNfunction_ns_chi04_dL::synapse0x3a9ba40() {
   return (neuron0x3a83ba0()*0.0341505);
}

double NNfunction_ns_chi04_dL::synapse0x3a9ba80() {
   return (neuron0x3a83e50()*-0.153007);
}

double NNfunction_ns_chi04_dL::synapse0x3a9bac0() {
   return (neuron0x3a84190()*-2.59397);
}

double NNfunction_ns_chi04_dL::synapse0x3a9bb00() {
   return (neuron0x3a844d0()*0.0220265);
}

double NNfunction_ns_chi04_dL::synapse0x3a9bb40() {
   return (neuron0x3a84810()*-0.0559899);
}

double NNfunction_ns_chi04_dL::synapse0x3a9bb80() {
   return (neuron0x3a84b50()*0.011919);
}

double NNfunction_ns_chi04_dL::synapse0x3a9bbc0() {
   return (neuron0x3a84e90()*-0.0400111);
}

double NNfunction_ns_chi04_dL::synapse0x3a9bc00() {
   return (neuron0x3a851d0()*-0.0685109);
}

double NNfunction_ns_chi04_dL::synapse0x3a9bc40() {
   return (neuron0x3a85510()*0.01239);
}

double NNfunction_ns_chi04_dL::synapse0x3a9bc80() {
   return (neuron0x3a85850()*-0.00952438);
}

double NNfunction_ns_chi04_dL::synapse0x3a9bcc0() {
   return (neuron0x3a85b90()*0.0172268);
}

double NNfunction_ns_chi04_dL::synapse0x3a9bd00() {
   return (neuron0x3a85ed0()*-0.875618);
}

double NNfunction_ns_chi04_dL::synapse0x3a9bd40() {
   return (neuron0x3a86210()*-0.0714261);
}

double NNfunction_ns_chi04_dL::synapse0x3a9bd80() {
   return (neuron0x3a86550()*-0.0430513);
}

double NNfunction_ns_chi04_dL::synapse0x3a9bdc0() {
   return (neuron0x3a86890()*0.0446801);
}

double NNfunction_ns_chi04_dL::synapse0x3a9be00() {
   return (neuron0x3a86bd0()*0.015888);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b890() {
   return (neuron0x3a86f10()*0.0908484);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b8d0() {
   return (neuron0x3a87470()*0.0123571);
}

double NNfunction_ns_chi04_dL::synapse0x3a9bf50() {
   return (neuron0x3a877b0()*0.0447517);
}

double NNfunction_ns_chi04_dL::synapse0x3a9bf90() {
   return (neuron0x3a87af0()*-0.000681576);
}

double NNfunction_ns_chi04_dL::synapse0x3a9bfd0() {
   return (neuron0x3a87e30()*0.00556482);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c010() {
   return (neuron0x3a88170()*-0.0761939);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c050() {
   return (neuron0x3a884b0()*0.0216403);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c090() {
   return (neuron0x3a887f0()*-0.641028);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c410() {
   return (neuron0x3a83ba0()*0.0463255);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c450() {
   return (neuron0x3a83e50()*-0.613411);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c490() {
   return (neuron0x3a84190()*0.401424);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c4d0() {
   return (neuron0x3a844d0()*0.090735);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c510() {
   return (neuron0x3a84810()*1.04907);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c550() {
   return (neuron0x3a84b50()*0.520403);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c590() {
   return (neuron0x3a84e90()*-0.868169);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c5d0() {
   return (neuron0x3a851d0()*-0.303298);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c610() {
   return (neuron0x3a85510()*-0.225445);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c650() {
   return (neuron0x3a85850()*-0.570867);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c690() {
   return (neuron0x3a85b90()*-0.0154231);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c6d0() {
   return (neuron0x3a85ed0()*0.42992);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c710() {
   return (neuron0x3a86210()*-0.512272);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c750() {
   return (neuron0x3a86550()*-0.0375644);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c790() {
   return (neuron0x3a86890()*-0.269316);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c7d0() {
   return (neuron0x3a86bd0()*-0.00027413);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c260() {
   return (neuron0x3a86f10()*-0.0398115);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c2a0() {
   return (neuron0x3a87470()*0.166758);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c920() {
   return (neuron0x3a877b0()*0.204741);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c960() {
   return (neuron0x3a87af0()*-0.0368798);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c9a0() {
   return (neuron0x3a87e30()*0.289783);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c9e0() {
   return (neuron0x3a88170()*-0.222055);
}

double NNfunction_ns_chi04_dL::synapse0x3a9ca20() {
   return (neuron0x3a884b0()*-0.212629);
}

double NNfunction_ns_chi04_dL::synapse0x3a9ca60() {
   return (neuron0x3a887f0()*0.416533);
}

double NNfunction_ns_chi04_dL::synapse0x3a9cde0() {
   return (neuron0x3a83ba0()*-0.209288);
}

double NNfunction_ns_chi04_dL::synapse0x3a9ce20() {
   return (neuron0x3a83e50()*-0.138209);
}

double NNfunction_ns_chi04_dL::synapse0x3a9ce60() {
   return (neuron0x3a84190()*-0.610195);
}

double NNfunction_ns_chi04_dL::synapse0x3a9cea0() {
   return (neuron0x3a844d0()*0.202917);
}

double NNfunction_ns_chi04_dL::synapse0x3a9cee0() {
   return (neuron0x3a84810()*0.138776);
}

double NNfunction_ns_chi04_dL::synapse0x3a9cf20() {
   return (neuron0x3a84b50()*0.00122266);
}

double NNfunction_ns_chi04_dL::synapse0x3a9cf60() {
   return (neuron0x3a84e90()*-0.0137172);
}

double NNfunction_ns_chi04_dL::synapse0x3a9cfa0() {
   return (neuron0x3a851d0()*-0.0312769);
}

double NNfunction_ns_chi04_dL::synapse0x3a9cfe0() {
   return (neuron0x3a85510()*0.108205);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d020() {
   return (neuron0x3a85850()*0.00345506);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d060() {
   return (neuron0x3a85b90()*0.162834);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d0a0() {
   return (neuron0x3a85ed0()*-0.145621);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d0e0() {
   return (neuron0x3a86210()*-0.138171);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d120() {
   return (neuron0x3a86550()*-0.278203);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d160() {
   return (neuron0x3a86890()*-0.201087);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d1a0() {
   return (neuron0x3a86bd0()*-0.0321354);
}

double NNfunction_ns_chi04_dL::synapse0x3a9cc30() {
   return (neuron0x3a86f10()*-0.0837134);
}

double NNfunction_ns_chi04_dL::synapse0x3a9cc70() {
   return (neuron0x3a87470()*-0.134497);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d2f0() {
   return (neuron0x3a877b0()*-0.134836);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d330() {
   return (neuron0x3a87af0()*-0.0876028);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d370() {
   return (neuron0x3a87e30()*-0.0756604);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d3b0() {
   return (neuron0x3a88170()*-0.256344);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d3f0() {
   return (neuron0x3a884b0()*-0.0160905);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d430() {
   return (neuron0x3a887f0()*-0.0837766);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d7b0() {
   return (neuron0x3a83ba0()*0.00268689);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d7f0() {
   return (neuron0x3a83e50()*0.165314);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d830() {
   return (neuron0x3a84190()*-0.307014);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d870() {
   return (neuron0x3a844d0()*-0.0199373);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d8b0() {
   return (neuron0x3a84810()*0.0282514);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d8f0() {
   return (neuron0x3a84b50()*-0.117327);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d930() {
   return (neuron0x3a84e90()*-0.115672);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d970() {
   return (neuron0x3a851d0()*0.0547773);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d9b0() {
   return (neuron0x3a85510()*0.158269);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d9f0() {
   return (neuron0x3a85850()*0.0488691);
}

double NNfunction_ns_chi04_dL::synapse0x3a9da30() {
   return (neuron0x3a85b90()*0.0628759);
}

double NNfunction_ns_chi04_dL::synapse0x3a9da70() {
   return (neuron0x3a85ed0()*0.370823);
}

double NNfunction_ns_chi04_dL::synapse0x3a9dab0() {
   return (neuron0x3a86210()*-0.320466);
}

double NNfunction_ns_chi04_dL::synapse0x3a9daf0() {
   return (neuron0x3a86550()*0.0580262);
}

double NNfunction_ns_chi04_dL::synapse0x3a9db30() {
   return (neuron0x3a86890()*0.19465);
}

double NNfunction_ns_chi04_dL::synapse0x3a9db70() {
   return (neuron0x3a86bd0()*-0.840725);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d600() {
   return (neuron0x3a86f10()*0.11747);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d640() {
   return (neuron0x3a87470()*0.34113);
}

double NNfunction_ns_chi04_dL::synapse0x3a9dcc0() {
   return (neuron0x3a877b0()*0.152053);
}

double NNfunction_ns_chi04_dL::synapse0x3a9dd00() {
   return (neuron0x3a87af0()*-0.0176446);
}

double NNfunction_ns_chi04_dL::synapse0x3a9dd40() {
   return (neuron0x3a87e30()*0.0385702);
}

double NNfunction_ns_chi04_dL::synapse0x3a9dd80() {
   return (neuron0x3a88170()*-0.306694);
}

double NNfunction_ns_chi04_dL::synapse0x3a9ddc0() {
   return (neuron0x3a884b0()*-0.0665515);
}

double NNfunction_ns_chi04_dL::synapse0x3a9de00() {
   return (neuron0x3a887f0()*-0.191406);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e180() {
   return (neuron0x3a83ba0()*-0.388505);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e1c0() {
   return (neuron0x3a83e50()*-0.0130839);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e200() {
   return (neuron0x3a84190()*0.340979);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e240() {
   return (neuron0x3a844d0()*0.0231679);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e280() {
   return (neuron0x3a84810()*0.00650823);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e2c0() {
   return (neuron0x3a84b50()*-0.0206922);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e300() {
   return (neuron0x3a84e90()*-0.0278056);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e340() {
   return (neuron0x3a851d0()*0.000735472);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e380() {
   return (neuron0x3a85510()*0.00822642);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e3c0() {
   return (neuron0x3a85850()*0.0174179);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e400() {
   return (neuron0x3a85b90()*-0.0387563);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e440() {
   return (neuron0x3a85ed0()*-0.324628);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e480() {
   return (neuron0x3a86210()*-0.0358043);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e4c0() {
   return (neuron0x3a86550()*0.0242223);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e500() {
   return (neuron0x3a86890()*-0.0173801);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e540() {
   return (neuron0x3a86bd0()*-0.029478);
}

double NNfunction_ns_chi04_dL::synapse0x3a9dfd0() {
   return (neuron0x3a86f10()*-0.0253774);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e010() {
   return (neuron0x3a87470()*0.0316663);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e690() {
   return (neuron0x3a877b0()*-0.02178);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e6d0() {
   return (neuron0x3a87af0()*0.00858858);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e710() {
   return (neuron0x3a87e30()*-0.0122662);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e750() {
   return (neuron0x3a88170()*-0.031912);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e790() {
   return (neuron0x3a884b0()*0.0446745);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e7d0() {
   return (neuron0x3a887f0()*-0.221982);
}

double NNfunction_ns_chi04_dL::synapse0x3a9eb50() {
   return (neuron0x3a83ba0()*-0.0403363);
}

double NNfunction_ns_chi04_dL::synapse0x3a9eb90() {
   return (neuron0x3a83e50()*3.4216);
}

double NNfunction_ns_chi04_dL::synapse0x3a9ebd0() {
   return (neuron0x3a84190()*-2.0098);
}

double NNfunction_ns_chi04_dL::synapse0x3a9ec10() {
   return (neuron0x3a844d0()*0.0412391);
}

double NNfunction_ns_chi04_dL::synapse0x3a9ec50() {
   return (neuron0x3a84810()*0.0225124);
}

double NNfunction_ns_chi04_dL::synapse0x3a9ec90() {
   return (neuron0x3a84b50()*-0.0241962);
}

double NNfunction_ns_chi04_dL::synapse0x3a9ecd0() {
   return (neuron0x3a84e90()*-0.00571833);
}

double NNfunction_ns_chi04_dL::synapse0x3a9ed10() {
   return (neuron0x3a851d0()*-0.0289177);
}

double NNfunction_ns_chi04_dL::synapse0x3a9ed50() {
   return (neuron0x3a85510()*0.00731017);
}

double NNfunction_ns_chi04_dL::synapse0x3a9ed90() {
   return (neuron0x3a85850()*0.00553845);
}

double NNfunction_ns_chi04_dL::synapse0x3a9edd0() {
   return (neuron0x3a85b90()*0.0285037);
}

double NNfunction_ns_chi04_dL::synapse0x3a9ee10() {
   return (neuron0x3a85ed0()*-0.165152);
}

double NNfunction_ns_chi04_dL::synapse0x3a9ee50() {
   return (neuron0x3a86210()*-0.0165671);
}

double NNfunction_ns_chi04_dL::synapse0x3a9ee90() {
   return (neuron0x3a86550()*0.0125676);
}

double NNfunction_ns_chi04_dL::synapse0x3a9eed0() {
   return (neuron0x3a86890()*0.0422912);
}

double NNfunction_ns_chi04_dL::synapse0x3a9ef10() {
   return (neuron0x3a86bd0()*-0.000216955);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e9a0() {
   return (neuron0x3a86f10()*0.0121211);
}

double NNfunction_ns_chi04_dL::synapse0x3a9e9e0() {
   return (neuron0x3a87470()*-0.0023725);
}

double NNfunction_ns_chi04_dL::synapse0x3a9f060() {
   return (neuron0x3a877b0()*-0.0258422);
}

double NNfunction_ns_chi04_dL::synapse0x3a9f0a0() {
   return (neuron0x3a87af0()*-0.0317505);
}

double NNfunction_ns_chi04_dL::synapse0x3a9f0e0() {
   return (neuron0x3a87e30()*-0.0154862);
}

double NNfunction_ns_chi04_dL::synapse0x3a9f120() {
   return (neuron0x3a88170()*-0.02427);
}

double NNfunction_ns_chi04_dL::synapse0x3a9f160() {
   return (neuron0x3a884b0()*-0.0020888);
}

double NNfunction_ns_chi04_dL::synapse0x3a9f1a0() {
   return (neuron0x3a887f0()*-3.50453);
}

double NNfunction_ns_chi04_dL::synapse0x3a9f520() {
   return (neuron0x3a83ba0()*-0.0327964);
}

double NNfunction_ns_chi04_dL::synapse0x3a93af0() {
   return (neuron0x3a83e50()*0.647912);
}

double NNfunction_ns_chi04_dL::synapse0x3a93b30() {
   return (neuron0x3a84190()*-0.459067);
}

double NNfunction_ns_chi04_dL::synapse0x3a93b70() {
   return (neuron0x3a844d0()*0.062908);
}

double NNfunction_ns_chi04_dL::synapse0x3a93dc0() {
   return (neuron0x3a84810()*0.0165509);
}

double NNfunction_ns_chi04_dL::synapse0x3a93e00() {
   return (neuron0x3a84b50()*-0.00422885);
}

double NNfunction_ns_chi04_dL::synapse0x3a93e40() {
   return (neuron0x3a84e90()*-0.0143494);
}

double NNfunction_ns_chi04_dL::synapse0x3a94090() {
   return (neuron0x3a851d0()*-0.00368806);
}

double NNfunction_ns_chi04_dL::synapse0x3a940d0() {
   return (neuron0x3a85510()*-0.0338225);
}

double NNfunction_ns_chi04_dL::synapse0x3a94320() {
   return (neuron0x3a85850()*-0.0192668);
}

double NNfunction_ns_chi04_dL::synapse0x3a94360() {
   return (neuron0x3a85b90()*0.00263824);
}

double NNfunction_ns_chi04_dL::synapse0x3a943a0() {
   return (neuron0x3a85ed0()*-0.333776);
}

double NNfunction_ns_chi04_dL::synapse0x3a945f0() {
   return (neuron0x3a86210()*-0.00452806);
}

double NNfunction_ns_chi04_dL::synapse0x3a94630() {
   return (neuron0x3a86550()*0.0315815);
}

double NNfunction_ns_chi04_dL::synapse0x3a94880() {
   return (neuron0x3a86890()*0.0213454);
}

double NNfunction_ns_chi04_dL::synapse0x3a948c0() {
   return (neuron0x3a86bd0()*-0.00897805);
}

double NNfunction_ns_chi04_dL::synapse0x3a9f370() {
   return (neuron0x3a86f10()*0.0126319);
}

double NNfunction_ns_chi04_dL::synapse0x3a9f3b0() {
   return (neuron0x3a87470()*0.0117978);
}

double NNfunction_ns_chi04_dL::synapse0x3a94a10() {
   return (neuron0x3a877b0()*0.00442188);
}

double NNfunction_ns_chi04_dL::synapse0x3a94f20() {
   return (neuron0x3a87af0()*0.0187034);
}

double NNfunction_ns_chi04_dL::synapse0x3a94f60() {
   return (neuron0x3a87e30()*0.00188208);
}

double NNfunction_ns_chi04_dL::synapse0x3a94fa0() {
   return (neuron0x3a88170()*-0.0104941);
}

double NNfunction_ns_chi04_dL::synapse0x3a951f0() {
   return (neuron0x3a884b0()*0.0224228);
}

double NNfunction_ns_chi04_dL::synapse0x3a95230() {
   return (neuron0x3a887f0()*-0.558074);
}

double NNfunction_ns_chi04_dL::synapse0x3a94ae0() {
   return (neuron0x3a83ba0()*0.205846);
}

double NNfunction_ns_chi04_dL::synapse0x3a94b20() {
   return (neuron0x3a83e50()*0.0200843);
}

double NNfunction_ns_chi04_dL::synapse0x3a94b60() {
   return (neuron0x3a84190()*-1.56492);
}

double NNfunction_ns_chi04_dL::synapse0x3a94ba0() {
   return (neuron0x3a844d0()*0.041245);
}

double NNfunction_ns_chi04_dL::synapse0x3a95520() {
   return (neuron0x3a84810()*0.00780451);
}

double NNfunction_ns_chi04_dL::synapse0x3aa1870() {
   return (neuron0x3a84b50()*-0.0231827);
}

double NNfunction_ns_chi04_dL::synapse0x3aa18b0() {
   return (neuron0x3a84e90()*0.0469055);
}

double NNfunction_ns_chi04_dL::synapse0x3aa18f0() {
   return (neuron0x3a851d0()*-0.0139981);
}

double NNfunction_ns_chi04_dL::synapse0x3aa1930() {
   return (neuron0x3a85510()*0.0997918);
}

double NNfunction_ns_chi04_dL::synapse0x3aa1970() {
   return (neuron0x3a85850()*-0.00449889);
}

double NNfunction_ns_chi04_dL::synapse0x3aa19b0() {
   return (neuron0x3a85b90()*-0.0251882);
}

double NNfunction_ns_chi04_dL::synapse0x3aa19f0() {
   return (neuron0x3a85ed0()*-0.11641);
}

double NNfunction_ns_chi04_dL::synapse0x3aa1a30() {
   return (neuron0x3a86210()*0.0935848);
}

double NNfunction_ns_chi04_dL::synapse0x3aa1a70() {
   return (neuron0x3a86550()*0.0140329);
}

double NNfunction_ns_chi04_dL::synapse0x3aa1ab0() {
   return (neuron0x3a86890()*-0.0422271);
}

double NNfunction_ns_chi04_dL::synapse0x3aa1af0() {
   return (neuron0x3a86bd0()*0.0113186);
}

double NNfunction_ns_chi04_dL::synapse0x3a95400() {
   return (neuron0x3a86f10()*-0.0700853);
}

double NNfunction_ns_chi04_dL::synapse0x3a95440() {
   return (neuron0x3a87470()*0.0373852);
}

double NNfunction_ns_chi04_dL::synapse0x3aa1c40() {
   return (neuron0x3a877b0()*-0.0075957);
}

double NNfunction_ns_chi04_dL::synapse0x3aa1c80() {
   return (neuron0x3a87af0()*-0.0348173);
}

double NNfunction_ns_chi04_dL::synapse0x3aa1cc0() {
   return (neuron0x3a87e30()*0.0858701);
}

double NNfunction_ns_chi04_dL::synapse0x3aa1d00() {
   return (neuron0x3a88170()*0.0577829);
}

double NNfunction_ns_chi04_dL::synapse0x3aa1d40() {
   return (neuron0x3a884b0()*0.018791);
}

double NNfunction_ns_chi04_dL::synapse0x3aa1d80() {
   return (neuron0x3a887f0()*1.66447);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2100() {
   return (neuron0x3a83ba0()*-0.369081);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2140() {
   return (neuron0x3a83e50()*-0.756437);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2180() {
   return (neuron0x3a84190()*1.27487);
}

double NNfunction_ns_chi04_dL::synapse0x3aa21c0() {
   return (neuron0x3a844d0()*0.246755);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2200() {
   return (neuron0x3a84810()*-0.0186128);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2240() {
   return (neuron0x3a84b50()*0.242788);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2280() {
   return (neuron0x3a84e90()*0.350171);
}

double NNfunction_ns_chi04_dL::synapse0x3aa22c0() {
   return (neuron0x3a851d0()*1.00623);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2300() {
   return (neuron0x3a85510()*0.052617);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2340() {
   return (neuron0x3a85850()*-0.372145);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2380() {
   return (neuron0x3a85b90()*0.305083);
}

double NNfunction_ns_chi04_dL::synapse0x3aa23c0() {
   return (neuron0x3a85ed0()*0.357501);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2400() {
   return (neuron0x3a86210()*0.200738);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2440() {
   return (neuron0x3a86550()*0.0167627);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2480() {
   return (neuron0x3a86890()*-0.0630731);
}

double NNfunction_ns_chi04_dL::synapse0x3aa24c0() {
   return (neuron0x3a86bd0()*0.244077);
}

double NNfunction_ns_chi04_dL::synapse0x3aa1f50() {
   return (neuron0x3a86f10()*0.0812081);
}

double NNfunction_ns_chi04_dL::synapse0x3aa1f90() {
   return (neuron0x3a87470()*-0.0481697);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2610() {
   return (neuron0x3a877b0()*0.10808);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2650() {
   return (neuron0x3a87af0()*0.522501);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2690() {
   return (neuron0x3a87e30()*-0.112516);
}

double NNfunction_ns_chi04_dL::synapse0x3aa26d0() {
   return (neuron0x3a88170()*-0.284504);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2710() {
   return (neuron0x3a884b0()*0.282081);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2750() {
   return (neuron0x3a887f0()*-0.302006);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2ad0() {
   return (neuron0x3a83ba0()*-0.0487357);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2b10() {
   return (neuron0x3a83e50()*1.26467);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2b50() {
   return (neuron0x3a84190()*-0.855064);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2b90() {
   return (neuron0x3a844d0()*-0.0393663);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2bd0() {
   return (neuron0x3a84810()*-0.210218);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2c10() {
   return (neuron0x3a84b50()*0.124984);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2c50() {
   return (neuron0x3a84e90()*-0.088216);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2c90() {
   return (neuron0x3a851d0()*-0.0818366);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2cd0() {
   return (neuron0x3a85510()*0.0015686);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2d10() {
   return (neuron0x3a85850()*0.344287);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2d50() {
   return (neuron0x3a85b90()*-0.0453388);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2d90() {
   return (neuron0x3a85ed0()*0.389674);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2dd0() {
   return (neuron0x3a86210()*-0.317084);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2e10() {
   return (neuron0x3a86550()*0.180559);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2e50() {
   return (neuron0x3a86890()*0.267369);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2e90() {
   return (neuron0x3a86bd0()*-0.461844);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2920() {
   return (neuron0x3a86f10()*-0.0751981);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2960() {
   return (neuron0x3a87470()*0.254705);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2fe0() {
   return (neuron0x3a877b0()*0.085675);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3020() {
   return (neuron0x3a87af0()*-0.192088);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3060() {
   return (neuron0x3a87e30()*-0.103446);
}

double NNfunction_ns_chi04_dL::synapse0x3aa30a0() {
   return (neuron0x3a88170()*-0.222709);
}

double NNfunction_ns_chi04_dL::synapse0x3aa30e0() {
   return (neuron0x3a884b0()*0.143637);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3120() {
   return (neuron0x3a887f0()*-0.314987);
}

double NNfunction_ns_chi04_dL::synapse0x3aa34a0() {
   return (neuron0x3a83ba0()*0.00671439);
}

double NNfunction_ns_chi04_dL::synapse0x3aa34e0() {
   return (neuron0x3a83e50()*3.25167);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3520() {
   return (neuron0x3a84190()*-1.54553);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3560() {
   return (neuron0x3a844d0()*0.0155607);
}

double NNfunction_ns_chi04_dL::synapse0x3aa35a0() {
   return (neuron0x3a84810()*0.00161374);
}

double NNfunction_ns_chi04_dL::synapse0x3aa35e0() {
   return (neuron0x3a84b50()*-0.00389744);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3620() {
   return (neuron0x3a84e90()*0.00380466);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3660() {
   return (neuron0x3a851d0()*-0.019407);
}

double NNfunction_ns_chi04_dL::synapse0x3aa36a0() {
   return (neuron0x3a85510()*0.0134699);
}

double NNfunction_ns_chi04_dL::synapse0x3aa36e0() {
   return (neuron0x3a85850()*-0.0088687);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3720() {
   return (neuron0x3a85b90()*0.00735791);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3760() {
   return (neuron0x3a85ed0()*-0.107285);
}

double NNfunction_ns_chi04_dL::synapse0x3aa37a0() {
   return (neuron0x3a86210()*-0.00287563);
}

double NNfunction_ns_chi04_dL::synapse0x3aa37e0() {
   return (neuron0x3a86550()*0.0190341);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3820() {
   return (neuron0x3a86890()*0.0188173);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3860() {
   return (neuron0x3a86bd0()*0.0137527);
}

double NNfunction_ns_chi04_dL::synapse0x3aa32f0() {
   return (neuron0x3a86f10()*0.0280821);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3330() {
   return (neuron0x3a87470()*-0.00504306);
}

double NNfunction_ns_chi04_dL::synapse0x3aa39b0() {
   return (neuron0x3a877b0()*-0.0236814);
}

double NNfunction_ns_chi04_dL::synapse0x3aa39f0() {
   return (neuron0x3a87af0()*-0.0303557);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3a30() {
   return (neuron0x3a87e30()*-0.0222291);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3a70() {
   return (neuron0x3a88170()*-0.00909061);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3ab0() {
   return (neuron0x3a884b0()*-0.0056081);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3af0() {
   return (neuron0x3a887f0()*-3.07984);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3e70() {
   return (neuron0x3a83ba0()*-0.00586833);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3eb0() {
   return (neuron0x3a83e50()*-0.034166);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3ef0() {
   return (neuron0x3a84190()*-0.00750083);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3f30() {
   return (neuron0x3a844d0()*-0.943503);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3f70() {
   return (neuron0x3a84810()*-0.00391885);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3fb0() {
   return (neuron0x3a84b50()*-0.00764444);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3ff0() {
   return (neuron0x3a84e90()*0.0105333);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4030() {
   return (neuron0x3a851d0()*3.64868e-07);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4070() {
   return (neuron0x3a85510()*0.0048701);
}

double NNfunction_ns_chi04_dL::synapse0x3aa40b0() {
   return (neuron0x3a85850()*0.0100391);
}

double NNfunction_ns_chi04_dL::synapse0x3aa40f0() {
   return (neuron0x3a85b90()*0.00832924);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4130() {
   return (neuron0x3a85ed0()*0.220221);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4170() {
   return (neuron0x3a86210()*0.0133729);
}

double NNfunction_ns_chi04_dL::synapse0x3aa41b0() {
   return (neuron0x3a86550()*-0.00160914);
}

double NNfunction_ns_chi04_dL::synapse0x3aa41f0() {
   return (neuron0x3a86890()*0.0104634);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4230() {
   return (neuron0x3a86bd0()*0.0114871);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3cc0() {
   return (neuron0x3a86f10()*-0.0274173);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3d00() {
   return (neuron0x3a87470()*0.0130179);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4380() {
   return (neuron0x3a877b0()*0.0110136);
}

double NNfunction_ns_chi04_dL::synapse0x3aa43c0() {
   return (neuron0x3a87af0()*0.00400622);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4400() {
   return (neuron0x3a87e30()*0.00283542);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4440() {
   return (neuron0x3a88170()*-0.011213);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4480() {
   return (neuron0x3a884b0()*0.00670155);
}

double NNfunction_ns_chi04_dL::synapse0x3aa44c0() {
   return (neuron0x3a887f0()*-0.0230996);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4840() {
   return (neuron0x3a83ba0()*-0.0318691);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4880() {
   return (neuron0x3a83e50()*-3.60735);
}

double NNfunction_ns_chi04_dL::synapse0x3aa48c0() {
   return (neuron0x3a84190()*0.856579);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4900() {
   return (neuron0x3a844d0()*0.00101691);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4940() {
   return (neuron0x3a84810()*0.0161741);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4980() {
   return (neuron0x3a84b50()*-0.010171);
}

double NNfunction_ns_chi04_dL::synapse0x3aa49c0() {
   return (neuron0x3a84e90()*-0.00415776);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4a00() {
   return (neuron0x3a851d0()*-0.0160266);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4a40() {
   return (neuron0x3a85510()*-0.0113329);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4a80() {
   return (neuron0x3a85850()*0.00210907);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4ac0() {
   return (neuron0x3a85b90()*-0.00624139);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4b00() {
   return (neuron0x3a85ed0()*0.00799295);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4b40() {
   return (neuron0x3a86210()*-0.00549193);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4b80() {
   return (neuron0x3a86550()*0.0197371);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4bc0() {
   return (neuron0x3a86890()*-0.0149404);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4c00() {
   return (neuron0x3a86bd0()*0.0105396);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4690() {
   return (neuron0x3a86f10()*-0.0210494);
}

double NNfunction_ns_chi04_dL::synapse0x3aa46d0() {
   return (neuron0x3a87470()*0.0125753);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4d50() {
   return (neuron0x3a877b0()*0.00898581);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4d90() {
   return (neuron0x3a87af0()*0.0129172);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4dd0() {
   return (neuron0x3a87e30()*-0.00140298);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4e10() {
   return (neuron0x3a88170()*0.025895);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4e50() {
   return (neuron0x3a884b0()*0.0202644);
}

double NNfunction_ns_chi04_dL::synapse0x3aa4e90() {
   return (neuron0x3a887f0()*-3.08267);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5210() {
   return (neuron0x3a83ba0()*0.0618303);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5250() {
   return (neuron0x3a83e50()*1.27297);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5290() {
   return (neuron0x3a84190()*2.29676);
}

double NNfunction_ns_chi04_dL::synapse0x3aa52d0() {
   return (neuron0x3a844d0()*-0.0135285);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5310() {
   return (neuron0x3a84810()*-0.00185762);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5350() {
   return (neuron0x3a84b50()*0.000632789);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5390() {
   return (neuron0x3a84e90()*0.00168179);
}

double NNfunction_ns_chi04_dL::synapse0x3aa53d0() {
   return (neuron0x3a851d0()*-0.00749029);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5410() {
   return (neuron0x3a85510()*-0.0213038);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5450() {
   return (neuron0x3a85850()*0.0149629);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5490() {
   return (neuron0x3a85b90()*0.0140683);
}

double NNfunction_ns_chi04_dL::synapse0x3aa54d0() {
   return (neuron0x3a85ed0()*0.300665);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5510() {
   return (neuron0x3a86210()*0.0149949);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5550() {
   return (neuron0x3a86550()*0.0211179);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5590() {
   return (neuron0x3a86890()*0.00265472);
}

double NNfunction_ns_chi04_dL::synapse0x3aa55d0() {
   return (neuron0x3a86bd0()*-0.0108473);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5060() {
   return (neuron0x3a86f10()*-0.0252629);
}

double NNfunction_ns_chi04_dL::synapse0x3aa50a0() {
   return (neuron0x3a87470()*0.00568942);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5720() {
   return (neuron0x3a877b0()*0.00186093);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5760() {
   return (neuron0x3a87af0()*0.00629433);
}

double NNfunction_ns_chi04_dL::synapse0x3aa57a0() {
   return (neuron0x3a87e30()*0.0267451);
}

double NNfunction_ns_chi04_dL::synapse0x3aa57e0() {
   return (neuron0x3a88170()*0.00143098);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5820() {
   return (neuron0x3a884b0()*0.0117019);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5860() {
   return (neuron0x3a887f0()*1.07275);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5be0() {
   return (neuron0x3a83ba0()*-0.00758262);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5c20() {
   return (neuron0x3a83e50()*-0.539869);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5c60() {
   return (neuron0x3a84190()*-0.290968);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5ca0() {
   return (neuron0x3a844d0()*-0.0135693);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5ce0() {
   return (neuron0x3a84810()*0.00428075);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5d20() {
   return (neuron0x3a84b50()*-0.00703554);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5d60() {
   return (neuron0x3a84e90()*0.00368942);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5da0() {
   return (neuron0x3a851d0()*-0.00354871);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5de0() {
   return (neuron0x3a85510()*-0.00922405);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5e20() {
   return (neuron0x3a85850()*4.12182e-05);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5e60() {
   return (neuron0x3a85b90()*0.0025334);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5ea0() {
   return (neuron0x3a85ed0()*0.383187);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5ee0() {
   return (neuron0x3a86210()*0.000277281);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5f20() {
   return (neuron0x3a86550()*0.0259263);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5f60() {
   return (neuron0x3a86890()*-0.0041557);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5fa0() {
   return (neuron0x3a86bd0()*-0.0176964);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5a30() {
   return (neuron0x3a86f10()*0.00725582);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5a70() {
   return (neuron0x3a87470()*0.011795);
}

double NNfunction_ns_chi04_dL::synapse0x3aa60f0() {
   return (neuron0x3a877b0()*0.0032053);
}

double NNfunction_ns_chi04_dL::synapse0x3aa6130() {
   return (neuron0x3a87af0()*-0.00242509);
}

double NNfunction_ns_chi04_dL::synapse0x3aa6170() {
   return (neuron0x3a87e30()*-0.00412475);
}

double NNfunction_ns_chi04_dL::synapse0x3aa61b0() {
   return (neuron0x3a88170()*-0.00143947);
}

double NNfunction_ns_chi04_dL::synapse0x3aa61f0() {
   return (neuron0x3a884b0()*0.00123062);
}

double NNfunction_ns_chi04_dL::synapse0x3aa6230() {
   return (neuron0x3a887f0()*-0.560359);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ece0() {
   return (neuron0x3a83ba0()*0.0242773);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ed20() {
   return (neuron0x3a83e50()*0.518547);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ed60() {
   return (neuron0x3a84190()*1.16497);
}

double NNfunction_ns_chi04_dL::synapse0x3a8eda0() {
   return (neuron0x3a844d0()*-0.0717489);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ede0() {
   return (neuron0x3a84810()*0.0304334);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ee20() {
   return (neuron0x3a84b50()*-0.020793);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ee60() {
   return (neuron0x3a84e90()*0.0392112);
}

double NNfunction_ns_chi04_dL::synapse0x3a8eea0() {
   return (neuron0x3a851d0()*0.0319313);
}

double NNfunction_ns_chi04_dL::synapse0x3aa69c0() {
   return (neuron0x3a85510()*-0.0419914);
}

double NNfunction_ns_chi04_dL::synapse0x3aa6a00() {
   return (neuron0x3a85850()*0.0086565);
}

double NNfunction_ns_chi04_dL::synapse0x3aa6a40() {
   return (neuron0x3a85b90()*0.0328757);
}

double NNfunction_ns_chi04_dL::synapse0x3aa6a80() {
   return (neuron0x3a85ed0()*0.634563);
}

double NNfunction_ns_chi04_dL::synapse0x3aa6ac0() {
   return (neuron0x3a86210()*0.0504344);
}

double NNfunction_ns_chi04_dL::synapse0x3aa6b00() {
   return (neuron0x3a86550()*0.0336208);
}

double NNfunction_ns_chi04_dL::synapse0x3aa6b40() {
   return (neuron0x3a86890()*-0.00534418);
}

double NNfunction_ns_chi04_dL::synapse0x3aa6b80() {
   return (neuron0x3a86bd0()*-0.024882);
}

double NNfunction_ns_chi04_dL::synapse0x3aa6400() {
   return (neuron0x3a86f10()*0.0108599);
}

double NNfunction_ns_chi04_dL::synapse0x3aa6440() {
   return (neuron0x3a87470()*0.0352154);
}

double NNfunction_ns_chi04_dL::synapse0x3aa6cd0() {
   return (neuron0x3a877b0()*-0.000889924);
}

double NNfunction_ns_chi04_dL::synapse0x3aa6d10() {
   return (neuron0x3a87af0()*-0.00897898);
}

double NNfunction_ns_chi04_dL::synapse0x3aa6d50() {
   return (neuron0x3a87e30()*-0.0330436);
}

double NNfunction_ns_chi04_dL::synapse0x3aa6d90() {
   return (neuron0x3a88170()*0.0353728);
}

double NNfunction_ns_chi04_dL::synapse0x3aa6dd0() {
   return (neuron0x3a884b0()*0.016445);
}

double NNfunction_ns_chi04_dL::synapse0x3aa6e10() {
   return (neuron0x3a887f0()*-0.0285386);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7190() {
   return (neuron0x3a83ba0()*-0.348447);
}

double NNfunction_ns_chi04_dL::synapse0x3aa71d0() {
   return (neuron0x3a83e50()*-0.353053);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7210() {
   return (neuron0x3a84190()*1.58202);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7250() {
   return (neuron0x3a844d0()*-0.111829);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7290() {
   return (neuron0x3a84810()*0.186355);
}

double NNfunction_ns_chi04_dL::synapse0x3aa72d0() {
   return (neuron0x3a84b50()*-0.208208);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7310() {
   return (neuron0x3a84e90()*0.284368);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7350() {
   return (neuron0x3a851d0()*-0.0588341);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7390() {
   return (neuron0x3a85510()*-0.209192);
}

double NNfunction_ns_chi04_dL::synapse0x3aa73d0() {
   return (neuron0x3a85850()*0.0683063);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7410() {
   return (neuron0x3a85b90()*-0.069289);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7450() {
   return (neuron0x3a85ed0()*-0.060056);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7490() {
   return (neuron0x3a86210()*0.526694);
}

double NNfunction_ns_chi04_dL::synapse0x3aa74d0() {
   return (neuron0x3a86550()*0.174473);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7510() {
   return (neuron0x3a86890()*-0.160037);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7550() {
   return (neuron0x3a86bd0()*-0.00555633);
}

double NNfunction_ns_chi04_dL::synapse0x3aa6fe0() {
   return (neuron0x3a86f10()*-0.162839);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7020() {
   return (neuron0x3a87470()*0.225217);
}

double NNfunction_ns_chi04_dL::synapse0x3aa76a0() {
   return (neuron0x3a877b0()*0.030566);
}

double NNfunction_ns_chi04_dL::synapse0x3aa76e0() {
   return (neuron0x3a87af0()*-0.34873);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7720() {
   return (neuron0x3a87e30()*0.251261);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7760() {
   return (neuron0x3a88170()*0.0845985);
}

double NNfunction_ns_chi04_dL::synapse0x3aa77a0() {
   return (neuron0x3a884b0()*0.0244966);
}

double NNfunction_ns_chi04_dL::synapse0x3aa77e0() {
   return (neuron0x3a887f0()*-0.432446);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7b60() {
   return (neuron0x3a83ba0()*-0.61153);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7ba0() {
   return (neuron0x3a83e50()*-0.0788656);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7be0() {
   return (neuron0x3a84190()*-0.483221);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7c20() {
   return (neuron0x3a844d0()*0.356901);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7c60() {
   return (neuron0x3a84810()*0.00790658);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7ca0() {
   return (neuron0x3a84b50()*0.251581);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7ce0() {
   return (neuron0x3a84e90()*0.0125023);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7d20() {
   return (neuron0x3a851d0()*-0.189011);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7d60() {
   return (neuron0x3a85510()*0.218434);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7da0() {
   return (neuron0x3a85850()*0.102693);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7de0() {
   return (neuron0x3a85b90()*-0.378522);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7e20() {
   return (neuron0x3a85ed0()*0.185172);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7e60() {
   return (neuron0x3a86210()*-0.505134);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7ea0() {
   return (neuron0x3a86550()*0.0475515);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7ee0() {
   return (neuron0x3a86890()*0.149708);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7f20() {
   return (neuron0x3a86bd0()*-0.284159);
}

double NNfunction_ns_chi04_dL::synapse0x3aa79b0() {
   return (neuron0x3a86f10()*-0.0300375);
}

double NNfunction_ns_chi04_dL::synapse0x3aa79f0() {
   return (neuron0x3a87470()*0.107086);
}

double NNfunction_ns_chi04_dL::synapse0x3a98520() {
   return (neuron0x3a877b0()*0.00704402);
}

double NNfunction_ns_chi04_dL::synapse0x3a98560() {
   return (neuron0x3a87af0()*-0.160572);
}

double NNfunction_ns_chi04_dL::synapse0x3a985a0() {
   return (neuron0x3a87e30()*0.506913);
}

double NNfunction_ns_chi04_dL::synapse0x3a985e0() {
   return (neuron0x3a88170()*0.298901);
}

double NNfunction_ns_chi04_dL::synapse0x3a98620() {
   return (neuron0x3a884b0()*0.118114);
}

double NNfunction_ns_chi04_dL::synapse0x3a98660() {
   return (neuron0x3a887f0()*-0.21078);
}

double NNfunction_ns_chi04_dL::synapse0x3a989e0() {
   return (neuron0x3a83ba0()*-0.0332284);
}

double NNfunction_ns_chi04_dL::synapse0x3a98a20() {
   return (neuron0x3a83e50()*0.0547227);
}

double NNfunction_ns_chi04_dL::synapse0x3a98a60() {
   return (neuron0x3a84190()*0.158785);
}

double NNfunction_ns_chi04_dL::synapse0x3a98aa0() {
   return (neuron0x3a844d0()*-0.64665);
}

double NNfunction_ns_chi04_dL::synapse0x3a98ae0() {
   return (neuron0x3a84810()*-0.00158591);
}

double NNfunction_ns_chi04_dL::synapse0x3a98b20() {
   return (neuron0x3a84b50()*-0.0134528);
}

double NNfunction_ns_chi04_dL::synapse0x3a98b60() {
   return (neuron0x3a84e90()*0.0138421);
}

double NNfunction_ns_chi04_dL::synapse0x3a98ba0() {
   return (neuron0x3a851d0()*-0.0377912);
}

double NNfunction_ns_chi04_dL::synapse0x3a98be0() {
   return (neuron0x3a85510()*-0.0307167);
}

double NNfunction_ns_chi04_dL::synapse0x3a98c20() {
   return (neuron0x3a85850()*0.0456855);
}

double NNfunction_ns_chi04_dL::synapse0x3a98c60() {
   return (neuron0x3a85b90()*0.00496329);
}

double NNfunction_ns_chi04_dL::synapse0x3a98ca0() {
   return (neuron0x3a85ed0()*0.54766);
}

double NNfunction_ns_chi04_dL::synapse0x3a98ce0() {
   return (neuron0x3a86210()*-0.127834);
}

double NNfunction_ns_chi04_dL::synapse0x3a98d20() {
   return (neuron0x3a86550()*0.163387);
}

double NNfunction_ns_chi04_dL::synapse0x3a98d60() {
   return (neuron0x3a86890()*-0.296853);
}

double NNfunction_ns_chi04_dL::synapse0x3a98da0() {
   return (neuron0x3a86bd0()*-0.136165);
}

double NNfunction_ns_chi04_dL::synapse0x3a98830() {
   return (neuron0x3a86f10()*0.247343);
}

double NNfunction_ns_chi04_dL::synapse0x3a98870() {
   return (neuron0x3a87470()*-0.134373);
}

double NNfunction_ns_chi04_dL::synapse0x3a98ef0() {
   return (neuron0x3a877b0()*-0.104962);
}

double NNfunction_ns_chi04_dL::synapse0x3a98f30() {
   return (neuron0x3a87af0()*-0.0689354);
}

double NNfunction_ns_chi04_dL::synapse0x3a98f70() {
   return (neuron0x3a87e30()*-0.0703815);
}

double NNfunction_ns_chi04_dL::synapse0x3a98fb0() {
   return (neuron0x3a88170()*0.090282);
}

double NNfunction_ns_chi04_dL::synapse0x3a98ff0() {
   return (neuron0x3a884b0()*-0.104996);
}

double NNfunction_ns_chi04_dL::synapse0x3a99030() {
   return (neuron0x3a887f0()*0.025891);
}

double NNfunction_ns_chi04_dL::synapse0x3a993b0() {
   return (neuron0x3a83ba0()*-0.0173712);
}

double NNfunction_ns_chi04_dL::synapse0x3a993f0() {
   return (neuron0x3a83e50()*0.854621);
}

double NNfunction_ns_chi04_dL::synapse0x3a99430() {
   return (neuron0x3a84190()*-0.16291);
}

double NNfunction_ns_chi04_dL::synapse0x3a99470() {
   return (neuron0x3a844d0()*-0.0395521);
}

double NNfunction_ns_chi04_dL::synapse0x3a994b0() {
   return (neuron0x3a84810()*0.00553609);
}

double NNfunction_ns_chi04_dL::synapse0x3a994f0() {
   return (neuron0x3a84b50()*-0.00556873);
}

double NNfunction_ns_chi04_dL::synapse0x3a99530() {
   return (neuron0x3a84e90()*0.000245844);
}

double NNfunction_ns_chi04_dL::synapse0x3a99570() {
   return (neuron0x3a851d0()*0.00833259);
}

double NNfunction_ns_chi04_dL::synapse0x3a995b0() {
   return (neuron0x3a85510()*0.030199);
}

double NNfunction_ns_chi04_dL::synapse0x3a995f0() {
   return (neuron0x3a85850()*0.015197);
}

double NNfunction_ns_chi04_dL::synapse0x3a99630() {
   return (neuron0x3a85b90()*-0.00467977);
}

double NNfunction_ns_chi04_dL::synapse0x3a99670() {
   return (neuron0x3a85ed0()*0.262324);
}

double NNfunction_ns_chi04_dL::synapse0x3a996b0() {
   return (neuron0x3a86210()*-0.00535491);
}

double NNfunction_ns_chi04_dL::synapse0x3a996f0() {
   return (neuron0x3a86550()*-0.0128834);
}

double NNfunction_ns_chi04_dL::synapse0x3a99730() {
   return (neuron0x3a86890()*-0.0356986);
}

double NNfunction_ns_chi04_dL::synapse0x3a99770() {
   return (neuron0x3a86bd0()*-0.00681074);
}

double NNfunction_ns_chi04_dL::synapse0x3a99200() {
   return (neuron0x3a86f10()*-0.00875785);
}

double NNfunction_ns_chi04_dL::synapse0x3a99240() {
   return (neuron0x3a87470()*-0.00712);
}

double NNfunction_ns_chi04_dL::synapse0x3a998c0() {
   return (neuron0x3a877b0()*-0.0107457);
}

double NNfunction_ns_chi04_dL::synapse0x3a99900() {
   return (neuron0x3a87af0()*-0.0127705);
}

double NNfunction_ns_chi04_dL::synapse0x3a99940() {
   return (neuron0x3a87e30()*-0.0123518);
}

double NNfunction_ns_chi04_dL::synapse0x3a99980() {
   return (neuron0x3a88170()*0.00228219);
}

double NNfunction_ns_chi04_dL::synapse0x3a999c0() {
   return (neuron0x3a884b0()*-0.0191671);
}

double NNfunction_ns_chi04_dL::synapse0x3a99a00() {
   return (neuron0x3a887f0()*-0.495873);
}

double NNfunction_ns_chi04_dL::synapse0x3a99d80() {
   return (neuron0x3a83ba0()*0.0084651);
}

double NNfunction_ns_chi04_dL::synapse0x3a99dc0() {
   return (neuron0x3a83e50()*0.00282061);
}

double NNfunction_ns_chi04_dL::synapse0x3a99e00() {
   return (neuron0x3a84190()*0.649611);
}

double NNfunction_ns_chi04_dL::synapse0x3a99e40() {
   return (neuron0x3a844d0()*-0.0808532);
}

double NNfunction_ns_chi04_dL::synapse0x3a99e80() {
   return (neuron0x3a84810()*-0.231862);
}

double NNfunction_ns_chi04_dL::synapse0x3a99ec0() {
   return (neuron0x3a84b50()*-0.0923796);
}

double NNfunction_ns_chi04_dL::synapse0x3a99f00() {
   return (neuron0x3a84e90()*-0.112506);
}

double NNfunction_ns_chi04_dL::synapse0x3a99f40() {
   return (neuron0x3a851d0()*-0.118713);
}

double NNfunction_ns_chi04_dL::synapse0x3a99f80() {
   return (neuron0x3a85510()*0.159403);
}

double NNfunction_ns_chi04_dL::synapse0x3a99fc0() {
   return (neuron0x3a85850()*-0.0476092);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a000() {
   return (neuron0x3a85b90()*-0.140912);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a040() {
   return (neuron0x3a85ed0()*0.325125);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a080() {
   return (neuron0x3a86210()*0.0644407);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a0c0() {
   return (neuron0x3a86550()*-0.113199);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a100() {
   return (neuron0x3a86890()*0.0503604);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a140() {
   return (neuron0x3a86bd0()*0.129882);
}

double NNfunction_ns_chi04_dL::synapse0x3a99bd0() {
   return (neuron0x3a86f10()*-0.182033);
}

double NNfunction_ns_chi04_dL::synapse0x3a99c10() {
   return (neuron0x3a87470()*0.0147136);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a290() {
   return (neuron0x3a877b0()*-0.0232613);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a2d0() {
   return (neuron0x3a87af0()*0.113349);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a310() {
   return (neuron0x3a87e30()*0.114391);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a350() {
   return (neuron0x3a88170()*0.0817617);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a390() {
   return (neuron0x3a884b0()*0.118083);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a3d0() {
   return (neuron0x3a887f0()*-0.808887);
}

double NNfunction_ns_chi04_dL::synapse0x3aac2a0() {
   return (neuron0x3a83ba0()*-0.032188);
}

double NNfunction_ns_chi04_dL::synapse0x3aac2e0() {
   return (neuron0x3a83e50()*0.0313709);
}

double NNfunction_ns_chi04_dL::synapse0x3aac320() {
   return (neuron0x3a84190()*-0.0634839);
}

double NNfunction_ns_chi04_dL::synapse0x3aac360() {
   return (neuron0x3a844d0()*0.0257521);
}

double NNfunction_ns_chi04_dL::synapse0x3aac3a0() {
   return (neuron0x3a84810()*0.000366889);
}

double NNfunction_ns_chi04_dL::synapse0x3aac3e0() {
   return (neuron0x3a84b50()*-0.00257669);
}

double NNfunction_ns_chi04_dL::synapse0x3aac420() {
   return (neuron0x3a84e90()*-0.011623);
}

double NNfunction_ns_chi04_dL::synapse0x3aac460() {
   return (neuron0x3a851d0()*0.00136587);
}

double NNfunction_ns_chi04_dL::synapse0x3aac4a0() {
   return (neuron0x3a85510()*-0.00195558);
}

double NNfunction_ns_chi04_dL::synapse0x3aac4e0() {
   return (neuron0x3a85850()*-0.000968925);
}

double NNfunction_ns_chi04_dL::synapse0x3aac520() {
   return (neuron0x3a85b90()*0.00707166);
}

double NNfunction_ns_chi04_dL::synapse0x3aac560() {
   return (neuron0x3a85ed0()*2.53937);
}

double NNfunction_ns_chi04_dL::synapse0x3aac5a0() {
   return (neuron0x3a86210()*0.00436909);
}

double NNfunction_ns_chi04_dL::synapse0x3aac5e0() {
   return (neuron0x3a86550()*0.0154226);
}

double NNfunction_ns_chi04_dL::synapse0x3aac620() {
   return (neuron0x3a86890()*-0.00425346);
}

double NNfunction_ns_chi04_dL::synapse0x3aac660() {
   return (neuron0x3a86bd0()*0.0503546);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a410() {
   return (neuron0x3a86f10()*-0.0164251);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a450() {
   return (neuron0x3a87470()*0.000498421);
}

double NNfunction_ns_chi04_dL::synapse0x3aac7b0() {
   return (neuron0x3a877b0()*-0.0151602);
}

double NNfunction_ns_chi04_dL::synapse0x3aac7f0() {
   return (neuron0x3a87af0()*0.0106038);
}

double NNfunction_ns_chi04_dL::synapse0x3aac830() {
   return (neuron0x3a87e30()*0.00153259);
}

double NNfunction_ns_chi04_dL::synapse0x3aac870() {
   return (neuron0x3a88170()*-0.00881412);
}

double NNfunction_ns_chi04_dL::synapse0x3aac8b0() {
   return (neuron0x3a884b0()*0.00442435);
}

double NNfunction_ns_chi04_dL::synapse0x3aac8f0() {
   return (neuron0x3a887f0()*0.00116574);
}

double NNfunction_ns_chi04_dL::synapse0x3aacc70() {
   return (neuron0x3a83ba0()*0.221047);
}

double NNfunction_ns_chi04_dL::synapse0x3aaccb0() {
   return (neuron0x3a83e50()*-0.181846);
}

double NNfunction_ns_chi04_dL::synapse0x3aaccf0() {
   return (neuron0x3a84190()*0.112308);
}

double NNfunction_ns_chi04_dL::synapse0x3aacd30() {
   return (neuron0x3a844d0()*-0.0241094);
}

double NNfunction_ns_chi04_dL::synapse0x3aacd70() {
   return (neuron0x3a84810()*0.0109361);
}

double NNfunction_ns_chi04_dL::synapse0x3aacdb0() {
   return (neuron0x3a84b50()*-0.0307469);
}

double NNfunction_ns_chi04_dL::synapse0x3aacdf0() {
   return (neuron0x3a84e90()*-0.126017);
}

double NNfunction_ns_chi04_dL::synapse0x3aace30() {
   return (neuron0x3a851d0()*-0.0596318);
}

double NNfunction_ns_chi04_dL::synapse0x3aace70() {
   return (neuron0x3a85510()*-0.157435);
}

double NNfunction_ns_chi04_dL::synapse0x3aaceb0() {
   return (neuron0x3a85850()*-0.177055);
}

double NNfunction_ns_chi04_dL::synapse0x3aacef0() {
   return (neuron0x3a85b90()*-0.286193);
}

double NNfunction_ns_chi04_dL::synapse0x3aacf30() {
   return (neuron0x3a85ed0()*0.189373);
}

double NNfunction_ns_chi04_dL::synapse0x3aacf70() {
   return (neuron0x3a86210()*0.345645);
}

double NNfunction_ns_chi04_dL::synapse0x3aacfb0() {
   return (neuron0x3a86550()*0.178856);
}

double NNfunction_ns_chi04_dL::synapse0x3aacff0() {
   return (neuron0x3a86890()*0.0265595);
}

double NNfunction_ns_chi04_dL::synapse0x3aad030() {
   return (neuron0x3a86bd0()*0.219889);
}

double NNfunction_ns_chi04_dL::synapse0x3aacac0() {
   return (neuron0x3a86f10()*0.0344222);
}

double NNfunction_ns_chi04_dL::synapse0x3aacb00() {
   return (neuron0x3a87470()*-0.133354);
}

double NNfunction_ns_chi04_dL::synapse0x3aad180() {
   return (neuron0x3a877b0()*0.0667066);
}

double NNfunction_ns_chi04_dL::synapse0x3aad1c0() {
   return (neuron0x3a87af0()*0.0184183);
}

double NNfunction_ns_chi04_dL::synapse0x3aad200() {
   return (neuron0x3a87e30()*0.385444);
}

double NNfunction_ns_chi04_dL::synapse0x3aad240() {
   return (neuron0x3a88170()*0.116292);
}

double NNfunction_ns_chi04_dL::synapse0x3aad280() {
   return (neuron0x3a884b0()*0.0221573);
}

double NNfunction_ns_chi04_dL::synapse0x3aad2c0() {
   return (neuron0x3a887f0()*0.255379);
}

double NNfunction_ns_chi04_dL::synapse0x3aad640() {
   return (neuron0x3a83ba0()*0.215141);
}

double NNfunction_ns_chi04_dL::synapse0x3aad680() {
   return (neuron0x3a83e50()*0.377318);
}

double NNfunction_ns_chi04_dL::synapse0x3aad6c0() {
   return (neuron0x3a84190()*2.11458);
}

double NNfunction_ns_chi04_dL::synapse0x3aad700() {
   return (neuron0x3a844d0()*0.00221981);
}

double NNfunction_ns_chi04_dL::synapse0x3aad740() {
   return (neuron0x3a84810()*0.0216936);
}

double NNfunction_ns_chi04_dL::synapse0x3aad780() {
   return (neuron0x3a84b50()*0.0332166);
}

double NNfunction_ns_chi04_dL::synapse0x3aad7c0() {
   return (neuron0x3a84e90()*0.0380143);
}

double NNfunction_ns_chi04_dL::synapse0x3aad800() {
   return (neuron0x3a851d0()*0.0557777);
}

double NNfunction_ns_chi04_dL::synapse0x3aad840() {
   return (neuron0x3a85510()*0.0446262);
}

double NNfunction_ns_chi04_dL::synapse0x3aad880() {
   return (neuron0x3a85850()*-0.00955413);
}

double NNfunction_ns_chi04_dL::synapse0x3aad8c0() {
   return (neuron0x3a85b90()*-0.0306553);
}

double NNfunction_ns_chi04_dL::synapse0x3aad900() {
   return (neuron0x3a85ed0()*-0.306395);
}

double NNfunction_ns_chi04_dL::synapse0x3aad940() {
   return (neuron0x3a86210()*0.0278536);
}

double NNfunction_ns_chi04_dL::synapse0x3aad980() {
   return (neuron0x3a86550()*0.0200447);
}

double NNfunction_ns_chi04_dL::synapse0x3aad9c0() {
   return (neuron0x3a86890()*0.00599022);
}

double NNfunction_ns_chi04_dL::synapse0x3aada00() {
   return (neuron0x3a86bd0()*0.024748);
}

double NNfunction_ns_chi04_dL::synapse0x3aad490() {
   return (neuron0x3a86f10()*0.00874613);
}

double NNfunction_ns_chi04_dL::synapse0x3aad4d0() {
   return (neuron0x3a87470()*-0.0123603);
}

double NNfunction_ns_chi04_dL::synapse0x3aadb50() {
   return (neuron0x3a877b0()*-0.0165136);
}

double NNfunction_ns_chi04_dL::synapse0x3aadb90() {
   return (neuron0x3a87af0()*-0.0159143);
}

double NNfunction_ns_chi04_dL::synapse0x3aadbd0() {
   return (neuron0x3a87e30()*0.00667022);
}

double NNfunction_ns_chi04_dL::synapse0x3aadc10() {
   return (neuron0x3a88170()*0.0168913);
}

double NNfunction_ns_chi04_dL::synapse0x3aadc50() {
   return (neuron0x3a884b0()*-0.0494855);
}

double NNfunction_ns_chi04_dL::synapse0x3aadc90() {
   return (neuron0x3a887f0()*-1.08376);
}

double NNfunction_ns_chi04_dL::synapse0x3aae010() {
   return (neuron0x3a83ba0()*0.0594158);
}

double NNfunction_ns_chi04_dL::synapse0x3aae050() {
   return (neuron0x3a83e50()*0.933581);
}

double NNfunction_ns_chi04_dL::synapse0x3aae090() {
   return (neuron0x3a84190()*1.11392);
}

double NNfunction_ns_chi04_dL::synapse0x3aae0d0() {
   return (neuron0x3a844d0()*-0.0226308);
}

double NNfunction_ns_chi04_dL::synapse0x3aae110() {
   return (neuron0x3a84810()*-0.00413789);
}

double NNfunction_ns_chi04_dL::synapse0x3aae150() {
   return (neuron0x3a84b50()*-0.0183625);
}

double NNfunction_ns_chi04_dL::synapse0x3aae190() {
   return (neuron0x3a84e90()*0.0137253);
}

double NNfunction_ns_chi04_dL::synapse0x3aae1d0() {
   return (neuron0x3a851d0()*-0.00567563);
}

double NNfunction_ns_chi04_dL::synapse0x3aae210() {
   return (neuron0x3a85510()*-0.0296559);
}

double NNfunction_ns_chi04_dL::synapse0x3aae250() {
   return (neuron0x3a85850()*0.00524985);
}

double NNfunction_ns_chi04_dL::synapse0x3aae290() {
   return (neuron0x3a85b90()*0.0215401);
}

double NNfunction_ns_chi04_dL::synapse0x3aae2d0() {
   return (neuron0x3a85ed0()*0.42538);
}

double NNfunction_ns_chi04_dL::synapse0x3aae310() {
   return (neuron0x3a86210()*-0.00246783);
}

double NNfunction_ns_chi04_dL::synapse0x3aae350() {
   return (neuron0x3a86550()*0.0207012);
}

double NNfunction_ns_chi04_dL::synapse0x3aae390() {
   return (neuron0x3a86890()*-0.00900387);
}

double NNfunction_ns_chi04_dL::synapse0x3aae3d0() {
   return (neuron0x3a86bd0()*-0.0267882);
}

double NNfunction_ns_chi04_dL::synapse0x3aade60() {
   return (neuron0x3a86f10()*-0.00953762);
}

double NNfunction_ns_chi04_dL::synapse0x3aadea0() {
   return (neuron0x3a87470()*0.0191878);
}

double NNfunction_ns_chi04_dL::synapse0x3aae520() {
   return (neuron0x3a877b0()*0.0117398);
}

double NNfunction_ns_chi04_dL::synapse0x3aae560() {
   return (neuron0x3a87af0()*0.00373659);
}

double NNfunction_ns_chi04_dL::synapse0x3aae5a0() {
   return (neuron0x3a87e30()*-0.00322882);
}

double NNfunction_ns_chi04_dL::synapse0x3aae5e0() {
   return (neuron0x3a88170()*-0.00351875);
}

double NNfunction_ns_chi04_dL::synapse0x3aae620() {
   return (neuron0x3a884b0()*0.00451873);
}

double NNfunction_ns_chi04_dL::synapse0x3aae660() {
   return (neuron0x3a887f0()*0.742988);
}

double NNfunction_ns_chi04_dL::synapse0x384e4d0() {
   return (neuron0x3a88c60()*0.53775);
}

double NNfunction_ns_chi04_dL::synapse0x384e510() {
   return (neuron0x3a894a0()*2.01411);
}

double NNfunction_ns_chi04_dL::synapse0x3a8b010() {
   return (neuron0x3a89f80()*-7.77208);
}

double NNfunction_ns_chi04_dL::synapse0x3a8b050() {
   return (neuron0x3a89a20()*-0.0679949);
}

double NNfunction_ns_chi04_dL::synapse0x3a8cae0() {
   return (neuron0x3a8ad60()*-0.683306);
}

double NNfunction_ns_chi04_dL::synapse0x3a8cb20() {
   return (neuron0x3a8c830()*1.54133);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d8b0() {
   return (neuron0x3a8d600()*-0.874143);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d8f0() {
   return (neuron0x3a8dfd0()*-0.386737);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e280() {
   return (neuron0x3a8e9a0()*0.057796);
}

double NNfunction_ns_chi04_dL::synapse0x3a8e2c0() {
   return (neuron0x3a8f480()*4.19253);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ec50() {
   return (neuron0x3a8fe50()*2.89497);
}

double NNfunction_ns_chi04_dL::synapse0x3a8ec90() {
   return (neuron0x3a8cf30()*0.512045);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f730() {
   return (neuron0x3a91a00()*-0.718169);
}

double NNfunction_ns_chi04_dL::synapse0x3a8f770() {
   return (neuron0x3a923d0()*0.666223);
}

double NNfunction_ns_chi04_dL::synapse0x3a90100() {
   return (neuron0x3a92da0()*0.50693);
}

double NNfunction_ns_chi04_dL::synapse0x3a90140() {
   return (neuron0x3a93770()*0.377321);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d1e0() {
   return (neuron0x3a95580()*3.52482);
}

double NNfunction_ns_chi04_dL::synapse0x3a8d220() {
   return (neuron0x3a95860()*-0.57906);
}

double NNfunction_ns_chi04_dL::synapse0x3a91cb0() {
   return (neuron0x3a96230()*-4.41804);
}

double NNfunction_ns_chi04_dL::synapse0x3a91cf0() {
   return (neuron0x3a96c00()*1.91879);
}

double NNfunction_ns_chi04_dL::synapse0x3a92680() {
   return (neuron0x3a975d0()*0.564366);
}

double NNfunction_ns_chi04_dL::synapse0x3a926c0() {
   return (neuron0x3a97fa0()*0.201967);
}

double NNfunction_ns_chi04_dL::synapse0x3a93050() {
   return (neuron0x3a90af0()*0.0177876);
}

double NNfunction_ns_chi04_dL::synapse0x3a93090() {
   return (neuron0x3a914c0()*-0.579214);
}

double NNfunction_ns_chi04_dL::synapse0x3a93a20() {
   return (neuron0x3a9ad30()*-0.232211);
}

double NNfunction_ns_chi04_dL::synapse0x3a93a60() {
   return (neuron0x3a9b700()*4.27706);
}

double NNfunction_ns_chi04_dL::synapse0x3a86ab0() {
   return (neuron0x3a9c0d0()*0.456042);
}

double NNfunction_ns_chi04_dL::synapse0x3a86af0() {
   return (neuron0x3a9caa0()*0.078483);
}

double NNfunction_ns_chi04_dL::synapse0x3a95b10() {
   return (neuron0x3a9d470()*-0.554728);
}

double NNfunction_ns_chi04_dL::synapse0x3a95b50() {
   return (neuron0x3a9de40()*1.0395);
}

double NNfunction_ns_chi04_dL::synapse0x3a964e0() {
   return (neuron0x3a9e810()*-2.69879);
}

double NNfunction_ns_chi04_dL::synapse0x3a96520() {
   return (neuron0x3a9f1e0()*-1.38145);
}

double NNfunction_ns_chi04_dL::synapse0x3a96eb0() {
   return (neuron0x3a95270()*1.16172);
}

double NNfunction_ns_chi04_dL::synapse0x3a96ef0() {
   return (neuron0x3aa1dc0()*0.878947);
}

double NNfunction_ns_chi04_dL::synapse0x3a97880() {
   return (neuron0x3aa2790()*1.03048);
}

double NNfunction_ns_chi04_dL::synapse0x3a978c0() {
   return (neuron0x3aa3160()*3.58387);
}

double NNfunction_ns_chi04_dL::synapse0x3a98250() {
   return (neuron0x3aa3b30()*-0.399152);
}

double NNfunction_ns_chi04_dL::synapse0x3a98290() {
   return (neuron0x3aa4500()*-3.89925);
}

double NNfunction_ns_chi04_dL::synapse0x3a90da0() {
   return (neuron0x3aa4ed0()*1.99061);
}

double NNfunction_ns_chi04_dL::synapse0x3a90de0() {
   return (neuron0x3aa58a0()*1.66701);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a650() {
   return (neuron0x3aa6270()*1.56695);
}

double NNfunction_ns_chi04_dL::synapse0x3a9a690() {
   return (neuron0x3aa6e50()*0.763491);
}

double NNfunction_ns_chi04_dL::synapse0x3a9afe0() {
   return (neuron0x3aa7820()*-0.214125);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b020() {
   return (neuron0x3a986a0()*-0.0690165);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b9b0() {
   return (neuron0x3a99070()*2.15947);
}

double NNfunction_ns_chi04_dL::synapse0x3a9b9f0() {
   return (neuron0x3a99a40()*1.51639);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c380() {
   return (neuron0x3aac080()*0.265961);
}

double NNfunction_ns_chi04_dL::synapse0x3a9c3c0() {
   return (neuron0x3aac930()*-1.04188);
}

double NNfunction_ns_chi04_dL::synapse0x3a9cd50() {
   return (neuron0x3aad300()*-0.546049);
}

double NNfunction_ns_chi04_dL::synapse0x3a9cd90() {
   return (neuron0x3aadcd0()*1.8553);
}

double NNfunction_ns_chi04_dL::synapse0x3a9f490() {
   return (neuron0x3a88c60()*0.484055);
}

double NNfunction_ns_chi04_dL::synapse0x3a9f4d0() {
   return (neuron0x3a894a0()*0.379848);
}

double NNfunction_ns_chi04_dL::synapse0x3a94a50() {
   return (neuron0x3a89f80()*-3.11909);
}

double NNfunction_ns_chi04_dL::synapse0x3a94a90() {
   return (neuron0x3a89a20()*-0.177385);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2070() {
   return (neuron0x3a8ad60()*-0.0551667);
}

double NNfunction_ns_chi04_dL::synapse0x3aa20b0() {
   return (neuron0x3a8c830()*-1.18906);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2a40() {
   return (neuron0x3a8d600()*-0.101375);
}

double NNfunction_ns_chi04_dL::synapse0x3aa2a80() {
   return (neuron0x3a8dfd0()*0.884773);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3410() {
   return (neuron0x3a8e9a0()*0.46728);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3450() {
   return (neuron0x3a8f480()*-1.76825);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3de0() {
   return (neuron0x3a8fe50()*-0.359875);
}

double NNfunction_ns_chi04_dL::synapse0x3aa3e20() {
   return (neuron0x3a8cf30()*0.204769);
}

double NNfunction_ns_chi04_dL::synapse0x3aa47b0() {
   return (neuron0x3a91a00()*0.776344);
}

double NNfunction_ns_chi04_dL::synapse0x3aa47f0() {
   return (neuron0x3a923d0()*0.185779);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5180() {
   return (neuron0x3a92da0()*-0.00987595);
}

double NNfunction_ns_chi04_dL::synapse0x3aa51c0() {
   return (neuron0x3a93770()*0.0688063);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5b50() {
   return (neuron0x3a95580()*0.918769);
}

double NNfunction_ns_chi04_dL::synapse0x3aa5b90() {
   return (neuron0x3a95860()*0.877186);
}

double NNfunction_ns_chi04_dL::synapse0x3aa6520() {
   return (neuron0x3a96230()*-2.56379);
}

double NNfunction_ns_chi04_dL::synapse0x3aa6560() {
   return (neuron0x3a96c00()*-1.3708);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7100() {
   return (neuron0x3a975d0()*0.307612);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7140() {
   return (neuron0x3a97fa0()*-0.0735681);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7ad0() {
   return (neuron0x3a90af0()*-1.38536);
}

double NNfunction_ns_chi04_dL::synapse0x3aa7b10() {
   return (neuron0x3a914c0()*0.20189);
}

double NNfunction_ns_chi04_dL::synapse0x3a98950() {
   return (neuron0x3a9ad30()*0.364345);
}

double NNfunction_ns_chi04_dL::synapse0x3a98990() {
   return (neuron0x3a9b700()*0.756708);
}

double NNfunction_ns_chi04_dL::synapse0x3a99320() {
   return (neuron0x3a9c0d0()*0.0430649);
}

double NNfunction_ns_chi04_dL::synapse0x3a99360() {
   return (neuron0x3a9caa0()*1.05733);
}

double NNfunction_ns_chi04_dL::synapse0x3a99cf0() {
   return (neuron0x3a9d470()*0.0374868);
}

double NNfunction_ns_chi04_dL::synapse0x3a99d30() {
   return (neuron0x3a9de40()*1.47122);
}

double NNfunction_ns_chi04_dL::synapse0x3aac210() {
   return (neuron0x3a9e810()*0.57769);
}

double NNfunction_ns_chi04_dL::synapse0x3aac250() {
   return (neuron0x3a9f1e0()*0.30538);
}

double NNfunction_ns_chi04_dL::synapse0x3aacbe0() {
   return (neuron0x3a95270()*-2.09615);
}

double NNfunction_ns_chi04_dL::synapse0x3aacc20() {
   return (neuron0x3aa1dc0()*0.326543);
}

double NNfunction_ns_chi04_dL::synapse0x3aad5b0() {
   return (neuron0x3aa2790()*0.150454);
}

double NNfunction_ns_chi04_dL::synapse0x3aad5f0() {
   return (neuron0x3aa3160()*-0.491473);
}

double NNfunction_ns_chi04_dL::synapse0x3aadf80() {
   return (neuron0x3aa3b30()*-0.218219);
}

double NNfunction_ns_chi04_dL::synapse0x3aadfc0() {
   return (neuron0x3aa4500()*0.932538);
}

double NNfunction_ns_chi04_dL::synapse0x3a88f10() {
   return (neuron0x3aa4ed0()*0.476255);
}

double NNfunction_ns_chi04_dL::synapse0x3a88f50() {
   return (neuron0x3aa58a0()*-0.0186397);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d720() {
   return (neuron0x3aa6270()*0.764314);
}

double NNfunction_ns_chi04_dL::synapse0x3a9d760() {
   return (neuron0x3aa6e50()*0.917516);
}

double NNfunction_ns_chi04_dL::synapse0x3aae6a0() {
   return (neuron0x3aa7820()*0.242771);
}

double NNfunction_ns_chi04_dL::synapse0x3aae6e0() {
   return (neuron0x3a986a0()*0.109147);
}

double NNfunction_ns_chi04_dL::synapse0x3aae720() {
   return (neuron0x3a99070()*1.28101);
}

double NNfunction_ns_chi04_dL::synapse0x3aae760() {
   return (neuron0x3a99a40()*0.651417);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5610() {
   return (neuron0x3aac080()*0.0297973);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5650() {
   return (neuron0x3aac930()*0.319312);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5690() {
   return (neuron0x3aad300()*3.21913);
}

double NNfunction_ns_chi04_dL::synapse0x3ab56d0() {
   return (neuron0x3aadcd0()*-0.117134);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5a50() {
   return (neuron0x3a88c60()*-0.0720133);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5a90() {
   return (neuron0x3a894a0()*0.461625);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5ad0() {
   return (neuron0x3a89f80()*0.994725);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5b10() {
   return (neuron0x3a89a20()*0.483122);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5b50() {
   return (neuron0x3a8ad60()*-0.0300764);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5b90() {
   return (neuron0x3a8c830()*-0.378189);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5bd0() {
   return (neuron0x3a8d600()*0.408936);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5c10() {
   return (neuron0x3a8dfd0()*-0.932834);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5c50() {
   return (neuron0x3a8e9a0()*0.0512101);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5c90() {
   return (neuron0x3a8f480()*0.718941);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5cd0() {
   return (neuron0x3a8fe50()*0.00468956);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5d10() {
   return (neuron0x3a8cf30()*-0.0712276);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5d50() {
   return (neuron0x3a91a00()*0.144007);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5d90() {
   return (neuron0x3a923d0()*-0.121456);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5dd0() {
   return (neuron0x3a92da0()*-0.714334);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5e10() {
   return (neuron0x3a93770()*-0.366747);
}

double NNfunction_ns_chi04_dL::synapse0x3ab58a0() {
   return (neuron0x3a95580()*-0.0806475);
}

double NNfunction_ns_chi04_dL::synapse0x3ab58e0() {
   return (neuron0x3a95860()*-0.581275);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5f60() {
   return (neuron0x3a96230()*-0.521929);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5fa0() {
   return (neuron0x3a96c00()*-0.0510169);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5fe0() {
   return (neuron0x3a975d0()*-0.824747);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6020() {
   return (neuron0x3a97fa0()*-0.726741);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6060() {
   return (neuron0x3a90af0()*-0.339764);
}

double NNfunction_ns_chi04_dL::synapse0x3ab60a0() {
   return (neuron0x3a914c0()*0.107465);
}

double NNfunction_ns_chi04_dL::synapse0x3ab60e0() {
   return (neuron0x3a9ad30()*-0.0386857);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6120() {
   return (neuron0x3a9b700()*-0.372354);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6160() {
   return (neuron0x3a9c0d0()*-0.0898326);
}

double NNfunction_ns_chi04_dL::synapse0x3ab61a0() {
   return (neuron0x3a9caa0()*-0.000657001);
}

double NNfunction_ns_chi04_dL::synapse0x3ab61e0() {
   return (neuron0x3a9d470()*0.0104921);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6220() {
   return (neuron0x3a9de40()*-0.457827);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6260() {
   return (neuron0x3a9e810()*0.426206);
}

double NNfunction_ns_chi04_dL::synapse0x3ab62a0() {
   return (neuron0x3a9f1e0()*1.17916);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5e50() {
   return (neuron0x3a95270()*0.80491);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5e90() {
   return (neuron0x3aa1dc0()*-0.114528);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5ed0() {
   return (neuron0x3aa2790()*-0.241264);
}

double NNfunction_ns_chi04_dL::synapse0x3ab5f10() {
   return (neuron0x3aa3160()*-1.14097);
}

double NNfunction_ns_chi04_dL::synapse0x3ab64f0() {
   return (neuron0x3aa3b30()*1.35738);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6530() {
   return (neuron0x3aa4500()*-0.422641);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6570() {
   return (neuron0x3aa4ed0()*-0.196358);
}

double NNfunction_ns_chi04_dL::synapse0x3ab65b0() {
   return (neuron0x3aa58a0()*0.0587225);
}

double NNfunction_ns_chi04_dL::synapse0x3ab65f0() {
   return (neuron0x3aa6270()*-1.502);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6630() {
   return (neuron0x3aa6e50()*-0.11089);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6670() {
   return (neuron0x3aa7820()*0.114118);
}

double NNfunction_ns_chi04_dL::synapse0x3ab66b0() {
   return (neuron0x3a986a0()*-0.0271982);
}

double NNfunction_ns_chi04_dL::synapse0x3ab66f0() {
   return (neuron0x3a99070()*-0.699487);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6730() {
   return (neuron0x3a99a40()*-0.398087);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6770() {
   return (neuron0x3aac080()*-0.245438);
}

double NNfunction_ns_chi04_dL::synapse0x3ab67b0() {
   return (neuron0x3aac930()*0.171682);
}

double NNfunction_ns_chi04_dL::synapse0x3ab67f0() {
   return (neuron0x3aad300()*-0.423489);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6830() {
   return (neuron0x3aadcd0()*0.716261);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6bb0() {
   return (neuron0x3a88c60()*0.197251);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6bf0() {
   return (neuron0x3a894a0()*3.08862);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6c30() {
   return (neuron0x3a89f80()*0.0229501);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6c70() {
   return (neuron0x3a89a20()*-1.08773);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6cb0() {
   return (neuron0x3a8ad60()*-0.400896);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6cf0() {
   return (neuron0x3a8c830()*-0.193157);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6d30() {
   return (neuron0x3a8d600()*-1.79175);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6d70() {
   return (neuron0x3a8dfd0()*0.210828);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6db0() {
   return (neuron0x3a8e9a0()*0.0351141);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6df0() {
   return (neuron0x3a8f480()*2.05627);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6e30() {
   return (neuron0x3a8fe50()*0.962064);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6e70() {
   return (neuron0x3a8cf30()*0.137138);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6eb0() {
   return (neuron0x3a91a00()*0.0312124);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6ef0() {
   return (neuron0x3a923d0()*0.0947381);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6f30() {
   return (neuron0x3a92da0()*1.75481);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6f70() {
   return (neuron0x3a93770()*0.963157);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6a00() {
   return (neuron0x3a95580()*0.963318);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6a40() {
   return (neuron0x3a95860()*1.49342);
}

double NNfunction_ns_chi04_dL::synapse0x3ab70c0() {
   return (neuron0x3a96230()*0.915562);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7100() {
   return (neuron0x3a96c00()*1.91858);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7140() {
   return (neuron0x3a975d0()*1.98686);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7180() {
   return (neuron0x3a97fa0()*1.31576);
}

double NNfunction_ns_chi04_dL::synapse0x3ab71c0() {
   return (neuron0x3a90af0()*-2.45333);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7200() {
   return (neuron0x3a914c0()*-0.33549);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7240() {
   return (neuron0x3a9ad30()*-0.362828);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7280() {
   return (neuron0x3a9b700()*-0.130137);
}

double NNfunction_ns_chi04_dL::synapse0x3ab72c0() {
   return (neuron0x3a9c0d0()*0.0285166);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7300() {
   return (neuron0x3a9caa0()*0.00340801);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7340() {
   return (neuron0x3a9d470()*-0.27897);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7380() {
   return (neuron0x3a9de40()*1.3628);
}

double NNfunction_ns_chi04_dL::synapse0x3ab73c0() {
   return (neuron0x3a9e810()*-1.37425);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7400() {
   return (neuron0x3a9f1e0()*-0.167031);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6fb0() {
   return (neuron0x3a95270()*-0.524274);
}

double NNfunction_ns_chi04_dL::synapse0x3ab6ff0() {
   return (neuron0x3aa1dc0()*0.0263231);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7030() {
   return (neuron0x3aa2790()*-0.0101732);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7070() {
   return (neuron0x3aa3160()*0.116148);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7650() {
   return (neuron0x3aa3b30()*-2.25024);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7690() {
   return (neuron0x3aa4500()*-1.80969);
}

double NNfunction_ns_chi04_dL::synapse0x3ab76d0() {
   return (neuron0x3aa4ed0()*3.38925);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7710() {
   return (neuron0x3aa58a0()*1.211);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7750() {
   return (neuron0x3aa6270()*-0.182938);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7790() {
   return (neuron0x3aa6e50()*0.225272);
}

double NNfunction_ns_chi04_dL::synapse0x3ab77d0() {
   return (neuron0x3aa7820()*0.00527092);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7810() {
   return (neuron0x3a986a0()*-0.262864);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7850() {
   return (neuron0x3a99070()*0.95352);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7890() {
   return (neuron0x3a99a40()*0.417578);
}

double NNfunction_ns_chi04_dL::synapse0x3ab78d0() {
   return (neuron0x3aac080()*0.986668);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7910() {
   return (neuron0x3aac930()*-0.55216);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7950() {
   return (neuron0x3aad300()*-0.694565);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7990() {
   return (neuron0x3aadcd0()*0.790773);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7d10() {
   return (neuron0x3a88c60()*-0.0443217);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7d50() {
   return (neuron0x3a894a0()*1.07013);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7d90() {
   return (neuron0x3a89f80()*0.520943);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7dd0() {
   return (neuron0x3a89a20()*-0.802947);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7e10() {
   return (neuron0x3a8ad60()*-0.0458787);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7e50() {
   return (neuron0x3a8c830()*-0.812812);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7e90() {
   return (neuron0x3a8d600()*-0.394823);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7ed0() {
   return (neuron0x3a8dfd0()*2.43339);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7f10() {
   return (neuron0x3a8e9a0()*0.0350084);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7f50() {
   return (neuron0x3a8f480()*0.819927);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7f90() {
   return (neuron0x3a8fe50()*0.580013);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7fd0() {
   return (neuron0x3a8cf30()*-0.0555592);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8010() {
   return (neuron0x3a91a00()*0.0829489);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8050() {
   return (neuron0x3a923d0()*-0.090876);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8090() {
   return (neuron0x3a92da0()*1.21877);
}

double NNfunction_ns_chi04_dL::synapse0x3ab80d0() {
   return (neuron0x3a93770()*0.626192);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7b60() {
   return (neuron0x3a95580()*-0.139492);
}

double NNfunction_ns_chi04_dL::synapse0x3ab7ba0() {
   return (neuron0x3a95860()*-0.310309);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8220() {
   return (neuron0x3a96230()*-0.790875);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8260() {
   return (neuron0x3a96c00()*0.442466);
}

double NNfunction_ns_chi04_dL::synapse0x3ab82a0() {
   return (neuron0x3a975d0()*1.69346);
}

double NNfunction_ns_chi04_dL::synapse0x3ab82e0() {
   return (neuron0x3a97fa0()*1.41113);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8320() {
   return (neuron0x3a90af0()*-0.470871);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8360() {
   return (neuron0x3a914c0()*0.123262);
}

double NNfunction_ns_chi04_dL::synapse0x3ab83a0() {
   return (neuron0x3a9ad30()*0.00956243);
}

double NNfunction_ns_chi04_dL::synapse0x3ab83e0() {
   return (neuron0x3a9b700()*-0.0537499);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8420() {
   return (neuron0x3a9c0d0()*-0.0558522);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8460() {
   return (neuron0x3a9caa0()*0.026965);
}

double NNfunction_ns_chi04_dL::synapse0x3ab84a0() {
   return (neuron0x3a9d470()*-0.0272413);
}

double NNfunction_ns_chi04_dL::synapse0x3ab84e0() {
   return (neuron0x3a9de40()*0.733651);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8520() {
   return (neuron0x3a9e810()*0.17791);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8560() {
   return (neuron0x3a9f1e0()*-0.757768);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8110() {
   return (neuron0x3a95270()*0.739715);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8150() {
   return (neuron0x3aa1dc0()*-0.0812722);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8190() {
   return (neuron0x3aa2790()*-0.130117);
}

double NNfunction_ns_chi04_dL::synapse0x3ab81d0() {
   return (neuron0x3aa3160()*-0.491585);
}

double NNfunction_ns_chi04_dL::synapse0x3ab87b0() {
   return (neuron0x3aa3b30()*-2.30482);
}

double NNfunction_ns_chi04_dL::synapse0x3ab87f0() {
   return (neuron0x3aa4500()*0.074072);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8830() {
   return (neuron0x3aa4ed0()*0.236395);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8870() {
   return (neuron0x3aa58a0()*2.11818);
}

double NNfunction_ns_chi04_dL::synapse0x3ab88b0() {
   return (neuron0x3aa6270()*-0.70703);
}

double NNfunction_ns_chi04_dL::synapse0x3ab88f0() {
   return (neuron0x3aa6e50()*-0.0818046);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8930() {
   return (neuron0x3aa7820()*0.0557462);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8970() {
   return (neuron0x3a986a0()*-0.273978);
}

double NNfunction_ns_chi04_dL::synapse0x3ab89b0() {
   return (neuron0x3a99070()*1.13818);
}

double NNfunction_ns_chi04_dL::synapse0x3ab89f0() {
   return (neuron0x3a99a40()*-0.250189);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8a30() {
   return (neuron0x3aac080()*0.329055);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8a70() {
   return (neuron0x3aac930()*0.17036);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8ab0() {
   return (neuron0x3aad300()*-0.300229);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8af0() {
   return (neuron0x3aadcd0()*1.2139);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8d50() {
   return (neuron0x3ab4ed0()*-1.38445);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8d90() {
   return (neuron0x3ab5270()*3.01251);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8dd0() {
   return (neuron0x3ab5710()*5.47882);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8e10() {
   return (neuron0x3ab6870()*-5.76008);
}

double NNfunction_ns_chi04_dL::synapse0x3ab8e50() {
   return (neuron0x3ab79d0()*-7.2799);
}

