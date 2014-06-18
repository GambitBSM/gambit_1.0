#include "NNfunction-ss_sLuL.h"
#include <cmath>

double NNfunction-ss_sLuL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.8239)/15.0405;
   input1 = (in1 - 64.2281)/702.334;
   input2 = (in2 - 368.267)/448.809;
   input3 = (in3 - 332.046)/607.905;
   input4 = (in4 - 747.407)/651.01;
   input5 = (in5 - 653.286)/630.744;
   input6 = (in6 - 657.161)/631.69;
   input7 = (in7 - 652.208)/630.968;
   input8 = (in8 - 653.631)/667.057;
   input9 = (in9 - 642.473)/650.918;
   input10 = (in10 - 645.93)/675.712;
   input11 = (in11 - 610.575)/360.96;
   input12 = (in12 - 609.872)/360.611;
   input13 = (in13 - 570.889)/361.547;
   input14 = (in14 - 713.963)/524.82;
   input15 = (in15 - 714.561)/526.8;
   input16 = (in16 - 503.74)/370.572;
   input17 = (in17 - 738.921)/589.486;
   input18 = (in18 - 733.173)/587.442;
   input19 = (in19 - 729.708)/575.783;
   input20 = (in20 - -252.544)/422.202;
   input21 = (in21 - -326.65)/895.457;
   input22 = (in22 - -1.95447)/884.608;
   input23 = (in23 - 12.7657)/509.259;
   switch(index) {
     case 0:
         return neuron0x34c8130();
     default:
         return 0.;
   }
}

double NNfunction-ss_sLuL::Value(int index, double* input) {
   input0 = (input[0] - 22.8239)/15.0405;
   input1 = (input[1] - 64.2281)/702.334;
   input2 = (input[2] - 368.267)/448.809;
   input3 = (input[3] - 332.046)/607.905;
   input4 = (input[4] - 747.407)/651.01;
   input5 = (input[5] - 653.286)/630.744;
   input6 = (input[6] - 657.161)/631.69;
   input7 = (input[7] - 652.208)/630.968;
   input8 = (input[8] - 653.631)/667.057;
   input9 = (input[9] - 642.473)/650.918;
   input10 = (input[10] - 645.93)/675.712;
   input11 = (input[11] - 610.575)/360.96;
   input12 = (input[12] - 609.872)/360.611;
   input13 = (input[13] - 570.889)/361.547;
   input14 = (input[14] - 713.963)/524.82;
   input15 = (input[15] - 714.561)/526.8;
   input16 = (input[16] - 503.74)/370.572;
   input17 = (input[17] - 738.921)/589.486;
   input18 = (input[18] - 733.173)/587.442;
   input19 = (input[19] - 729.708)/575.783;
   input20 = (input[20] - -252.544)/422.202;
   input21 = (input[21] - -326.65)/895.457;
   input22 = (input[22] - -1.95447)/884.608;
   input23 = (input[23] - 12.7657)/509.259;
   switch(index) {
     case 0:
         return neuron0x34c8130();
     default:
         return 0.;
   }
}

double NNfunction-ss_sLuL::neuron0x3493210() {
   return input0;
}

double NNfunction-ss_sLuL::neuron0x34934c0() {
   return input1;
}

double NNfunction-ss_sLuL::neuron0x3493800() {
   return input2;
}

double NNfunction-ss_sLuL::neuron0x3493b40() {
   return input3;
}

double NNfunction-ss_sLuL::neuron0x3493e80() {
   return input4;
}

double NNfunction-ss_sLuL::neuron0x34941c0() {
   return input5;
}

double NNfunction-ss_sLuL::neuron0x3494500() {
   return input6;
}

double NNfunction-ss_sLuL::neuron0x3494840() {
   return input7;
}

double NNfunction-ss_sLuL::neuron0x3494b80() {
   return input8;
}

double NNfunction-ss_sLuL::neuron0x3494ec0() {
   return input9;
}

double NNfunction-ss_sLuL::neuron0x3495200() {
   return input10;
}

double NNfunction-ss_sLuL::neuron0x3495540() {
   return input11;
}

double NNfunction-ss_sLuL::neuron0x3495880() {
   return input12;
}

double NNfunction-ss_sLuL::neuron0x3495bc0() {
   return input13;
}

double NNfunction-ss_sLuL::neuron0x3495f00() {
   return input14;
}

double NNfunction-ss_sLuL::neuron0x3496240() {
   return input15;
}

double NNfunction-ss_sLuL::neuron0x3496580() {
   return input16;
}

double NNfunction-ss_sLuL::neuron0x3496ae0() {
   return input17;
}

double NNfunction-ss_sLuL::neuron0x3496e20() {
   return input18;
}

double NNfunction-ss_sLuL::neuron0x3497160() {
   return input19;
}

double NNfunction-ss_sLuL::neuron0x34974a0() {
   return input20;
}

double NNfunction-ss_sLuL::neuron0x34977e0() {
   return input21;
}

double NNfunction-ss_sLuL::neuron0x3497b20() {
   return input22;
}

double NNfunction-ss_sLuL::neuron0x3497e60() {
   return input23;
}

double NNfunction-ss_sLuL::input0x34982d0() {
   double input = 0.472028;
   input += synapse0x3498610();
   input += synapse0x3498650();
   input += synapse0x3498690();
   input += synapse0x34986d0();
   input += synapse0x3498710();
   input += synapse0x3498750();
   input += synapse0x3498790();
   input += synapse0x34987d0();
   input += synapse0x3498810();
   input += synapse0x3498850();
   input += synapse0x3498890();
   input += synapse0x34988d0();
   input += synapse0x3498910();
   input += synapse0x3498950();
   input += synapse0x3498990();
   input += synapse0x34989d0();
   input += synapse0x3498460();
   input += synapse0x34984a0();
   input += synapse0x324f380();
   input += synapse0x324f3c0();
   input += synapse0x3498a10();
   input += synapse0x3498a50();
   input += synapse0x3498a90();
   input += synapse0x3498ad0();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34982d0() {
   double input = input0x34982d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x3498b10() {
   double input = -1.31272;
   input += synapse0x3498e50();
   input += synapse0x3498e90();
   input += synapse0x3498ed0();
   input += synapse0x3498f10();
   input += synapse0x3498f50();
   input += synapse0x3498f90();
   input += synapse0x3498fd0();
   input += synapse0x3499010();
   input += synapse0x3499050();
   input += synapse0x324f1d0();
   input += synapse0x324f210();
   input += synapse0x324f250();
   input += synapse0x324f290();
   input += synapse0x34992a0();
   input += synapse0x34992e0();
   input += synapse0x3499320();
   input += synapse0x3498ca0();
   input += synapse0x3498ce0();
   input += synapse0x3499470();
   input += synapse0x34994b0();
   input += synapse0x34994f0();
   input += synapse0x3499530();
   input += synapse0x3499570();
   input += synapse0x34995b0();
   return input;
}

double NNfunction-ss_sLuL::neuron0x3498b10() {
   double input = input0x3498b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34995f0() {
   double input = -1.22494;
   input += synapse0x3499930();
   input += synapse0x3499970();
   input += synapse0x34999b0();
   input += synapse0x34999f0();
   input += synapse0x3499a30();
   input += synapse0x3499a70();
   input += synapse0x3499ab0();
   input += synapse0x3499af0();
   input += synapse0x3499b30();
   input += synapse0x3499b70();
   input += synapse0x3499bb0();
   input += synapse0x3499bf0();
   input += synapse0x3499c30();
   input += synapse0x3499c70();
   input += synapse0x3499cb0();
   input += synapse0x3499cf0();
   input += synapse0x3499780();
   input += synapse0x34997c0();
   input += synapse0x325d280();
   input += synapse0x325d2c0();
   input += synapse0x349bbe0();
   input += synapse0x349bc20();
   input += synapse0x3492f10();
   input += synapse0x3492f50();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34995f0() {
   double input = input0x34995f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x325d9e0() {
   double input = -0.82969;
   input += synapse0x325db70();
   input += synapse0x34991b0();
   input += synapse0x34991f0();
   input += synapse0x3499230();
   input += synapse0x3493020();
   input += synapse0x3499e40();
   input += synapse0x3499e80();
   input += synapse0x3499ec0();
   input += synapse0x3499f00();
   input += synapse0x3499f40();
   input += synapse0x3499f80();
   input += synapse0x3499fc0();
   input += synapse0x349a000();
   input += synapse0x349a040();
   input += synapse0x349a080();
   input += synapse0x349a0c0();
   input += synapse0x3492f90();
   input += synapse0x3492fd0();
   input += synapse0x349a210();
   input += synapse0x349a250();
   input += synapse0x349a290();
   input += synapse0x349a2d0();
   input += synapse0x349a310();
   input += synapse0x349a350();
   return input;
}

double NNfunction-ss_sLuL::neuron0x325d9e0() {
   double input = input0x325d9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x349a390() {
   double input = -0.57077;
   input += synapse0x349a6d0();
   input += synapse0x349a710();
   input += synapse0x349a750();
   input += synapse0x349a790();
   input += synapse0x349a7d0();
   input += synapse0x349a810();
   input += synapse0x349a850();
   input += synapse0x349a890();
   input += synapse0x349a8d0();
   input += synapse0x349a910();
   input += synapse0x349a950();
   input += synapse0x349a990();
   input += synapse0x349a9d0();
   input += synapse0x349aa10();
   input += synapse0x349aa50();
   input += synapse0x349aa90();
   input += synapse0x349abe0();
   input += synapse0x349a520();
   input += synapse0x349a560();
   input += synapse0x349bcf0();
   input += synapse0x349bd30();
   input += synapse0x349bd70();
   input += synapse0x349bdb0();
   input += synapse0x349bdf0();
   return input;
}

double NNfunction-ss_sLuL::neuron0x349a390() {
   double input = input0x349a390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x349be30() {
   double input = 0.969304;
   input += synapse0x349c170();
   input += synapse0x349c1b0();
   input += synapse0x349c1f0();
   input += synapse0x349c230();
   input += synapse0x349c270();
   input += synapse0x349c2b0();
   input += synapse0x349c2f0();
   input += synapse0x349c330();
   input += synapse0x349c370();
   input += synapse0x325d5d0();
   input += synapse0x325d610();
   input += synapse0x325d650();
   input += synapse0x325d690();
   input += synapse0x325d6d0();
   input += synapse0x325d710();
   input += synapse0x325d750();
   input += synapse0x349bfc0();
   input += synapse0x349c000();
   input += synapse0x325d8a0();
   input += synapse0x325d8e0();
   input += synapse0x325d920();
   input += synapse0x325d960();
   input += synapse0x325d9a0();
   input += synapse0x349cbc0();
   return input;
}

double NNfunction-ss_sLuL::neuron0x349be30() {
   double input = input0x349be30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x349cc00() {
   double input = 0.0303781;
   input += synapse0x349cf40();
   input += synapse0x349cf80();
   input += synapse0x349cfc0();
   input += synapse0x349d000();
   input += synapse0x349d040();
   input += synapse0x349d080();
   input += synapse0x349d0c0();
   input += synapse0x349d100();
   input += synapse0x349d140();
   input += synapse0x349d180();
   input += synapse0x349d1c0();
   input += synapse0x349d200();
   input += synapse0x349d240();
   input += synapse0x349d280();
   input += synapse0x349d2c0();
   input += synapse0x349d300();
   input += synapse0x349cd90();
   input += synapse0x349cdd0();
   input += synapse0x349d450();
   input += synapse0x349d490();
   input += synapse0x349d4d0();
   input += synapse0x349d510();
   input += synapse0x349d550();
   input += synapse0x349d590();
   return input;
}

double NNfunction-ss_sLuL::neuron0x349cc00() {
   double input = input0x349cc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x349d5d0() {
   double input = 1.59642;
   input += synapse0x349d910();
   input += synapse0x349d950();
   input += synapse0x349d990();
   input += synapse0x349d9d0();
   input += synapse0x349da10();
   input += synapse0x349da50();
   input += synapse0x349da90();
   input += synapse0x349dad0();
   input += synapse0x349db10();
   input += synapse0x349db50();
   input += synapse0x349db90();
   input += synapse0x349dbd0();
   input += synapse0x349dc10();
   input += synapse0x349dc50();
   input += synapse0x349dc90();
   input += synapse0x349dcd0();
   input += synapse0x349d760();
   input += synapse0x349d7a0();
   input += synapse0x349de20();
   input += synapse0x349de60();
   input += synapse0x349dea0();
   input += synapse0x349dee0();
   input += synapse0x349df20();
   input += synapse0x349df60();
   return input;
}

double NNfunction-ss_sLuL::neuron0x349d5d0() {
   double input = input0x349d5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x349dfa0() {
   double input = -1.68884;
   input += synapse0x34969d0();
   input += synapse0x3496a10();
   input += synapse0x3496a50();
   input += synapse0x3496a90();
   input += synapse0x349e4f0();
   input += synapse0x349e530();
   input += synapse0x349e570();
   input += synapse0x349e5b0();
   input += synapse0x349e5f0();
   input += synapse0x349e630();
   input += synapse0x349e670();
   input += synapse0x349e6b0();
   input += synapse0x349e6f0();
   input += synapse0x349e730();
   input += synapse0x349e770();
   input += synapse0x349e7b0();
   input += synapse0x349e130();
   input += synapse0x349e170();
   input += synapse0x349e900();
   input += synapse0x349e940();
   input += synapse0x349e980();
   input += synapse0x349e9c0();
   input += synapse0x349ea00();
   input += synapse0x349ea40();
   return input;
}

double NNfunction-ss_sLuL::neuron0x349dfa0() {
   double input = input0x349dfa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x349ea80() {
   double input = -3.01996;
   input += synapse0x349edc0();
   input += synapse0x349ee00();
   input += synapse0x349ee40();
   input += synapse0x349ee80();
   input += synapse0x349eec0();
   input += synapse0x349ef00();
   input += synapse0x349ef40();
   input += synapse0x349ef80();
   input += synapse0x349efc0();
   input += synapse0x349f000();
   input += synapse0x349f040();
   input += synapse0x349f080();
   input += synapse0x349f0c0();
   input += synapse0x349f100();
   input += synapse0x349f140();
   input += synapse0x349f180();
   input += synapse0x349ec10();
   input += synapse0x349ec50();
   input += synapse0x349f2d0();
   input += synapse0x349f310();
   input += synapse0x349f350();
   input += synapse0x349f390();
   input += synapse0x349f3d0();
   input += synapse0x349f410();
   return input;
}

double NNfunction-ss_sLuL::neuron0x349ea80() {
   double input = input0x349ea80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x349f450() {
   double input = -0.3031;
   input += synapse0x349f790();
   input += synapse0x349f7d0();
   input += synapse0x349f810();
   input += synapse0x349f850();
   input += synapse0x349f890();
   input += synapse0x349f8d0();
   input += synapse0x349f910();
   input += synapse0x349f950();
   input += synapse0x349f990();
   input += synapse0x349f9d0();
   input += synapse0x349fa10();
   input += synapse0x349fa50();
   input += synapse0x349fa90();
   input += synapse0x349fad0();
   input += synapse0x349fb10();
   input += synapse0x349fb50();
   input += synapse0x349f5e0();
   input += synapse0x349f620();
   input += synapse0x349c3b0();
   input += synapse0x349c3f0();
   input += synapse0x349c430();
   input += synapse0x349c470();
   input += synapse0x349c4b0();
   input += synapse0x349c4f0();
   return input;
}

double NNfunction-ss_sLuL::neuron0x349f450() {
   double input = input0x349f450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x349c530() {
   double input = 0.699368;
   input += synapse0x349c870();
   input += synapse0x349c8b0();
   input += synapse0x349c8f0();
   input += synapse0x349c930();
   input += synapse0x349c970();
   input += synapse0x349c9b0();
   input += synapse0x349c9f0();
   input += synapse0x349ca30();
   input += synapse0x349ca70();
   input += synapse0x349cab0();
   input += synapse0x349caf0();
   input += synapse0x349cb30();
   input += synapse0x349cb70();
   input += synapse0x34a0cb0();
   input += synapse0x34a0cf0();
   input += synapse0x34a0d30();
   input += synapse0x349c6c0();
   input += synapse0x349c700();
   input += synapse0x34a0e80();
   input += synapse0x34a0ec0();
   input += synapse0x34a0f00();
   input += synapse0x34a0f40();
   input += synapse0x34a0f80();
   input += synapse0x34a0fc0();
   return input;
}

double NNfunction-ss_sLuL::neuron0x349c530() {
   double input = input0x349c530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34a1000() {
   double input = 0.144638;
   input += synapse0x34a1340();
   input += synapse0x34a1380();
   input += synapse0x34a13c0();
   input += synapse0x34a1400();
   input += synapse0x34a1440();
   input += synapse0x34a1480();
   input += synapse0x34a14c0();
   input += synapse0x34a1500();
   input += synapse0x34a1540();
   input += synapse0x34a1580();
   input += synapse0x34a15c0();
   input += synapse0x34a1600();
   input += synapse0x34a1640();
   input += synapse0x34a1680();
   input += synapse0x34a16c0();
   input += synapse0x34a1700();
   input += synapse0x34a1190();
   input += synapse0x34a11d0();
   input += synapse0x34a1850();
   input += synapse0x34a1890();
   input += synapse0x34a18d0();
   input += synapse0x34a1910();
   input += synapse0x34a1950();
   input += synapse0x34a1990();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34a1000() {
   double input = input0x34a1000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34a19d0() {
   double input = 0.894855;
   input += synapse0x34a1d10();
   input += synapse0x34a1d50();
   input += synapse0x34a1d90();
   input += synapse0x34a1dd0();
   input += synapse0x34a1e10();
   input += synapse0x34a1e50();
   input += synapse0x34a1e90();
   input += synapse0x34a1ed0();
   input += synapse0x34a1f10();
   input += synapse0x34a1f50();
   input += synapse0x34a1f90();
   input += synapse0x34a1fd0();
   input += synapse0x34a2010();
   input += synapse0x34a2050();
   input += synapse0x34a2090();
   input += synapse0x34a20d0();
   input += synapse0x34a1b60();
   input += synapse0x34a1ba0();
   input += synapse0x34a2220();
   input += synapse0x34a2260();
   input += synapse0x34a22a0();
   input += synapse0x34a22e0();
   input += synapse0x34a2320();
   input += synapse0x34a2360();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34a19d0() {
   double input = input0x34a19d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34a23a0() {
   double input = -0.111485;
   input += synapse0x34a26e0();
   input += synapse0x34a2720();
   input += synapse0x34a2760();
   input += synapse0x34a27a0();
   input += synapse0x34a27e0();
   input += synapse0x34a2820();
   input += synapse0x34a2860();
   input += synapse0x34a28a0();
   input += synapse0x34a28e0();
   input += synapse0x34a2920();
   input += synapse0x34a2960();
   input += synapse0x34a29a0();
   input += synapse0x34a29e0();
   input += synapse0x34a2a20();
   input += synapse0x34a2a60();
   input += synapse0x34a2aa0();
   input += synapse0x34a2530();
   input += synapse0x34a2570();
   input += synapse0x34a2bf0();
   input += synapse0x34a2c30();
   input += synapse0x34a2c70();
   input += synapse0x34a2cb0();
   input += synapse0x34a2cf0();
   input += synapse0x34a2d30();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34a23a0() {
   double input = input0x34a23a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34a2d70() {
   double input = 0.396807;
   input += synapse0x34a30b0();
   input += synapse0x34933a0();
   input += synapse0x34933e0();
   input += synapse0x34936e0();
   input += synapse0x3493720();
   input += synapse0x3493a20();
   input += synapse0x3493a60();
   input += synapse0x3493d60();
   input += synapse0x3493da0();
   input += synapse0x34940a0();
   input += synapse0x34940e0();
   input += synapse0x34943e0();
   input += synapse0x3494420();
   input += synapse0x3494720();
   input += synapse0x3494760();
   input += synapse0x3494a60();
   input += synapse0x3494aa0();
   input += synapse0x3494da0();
   input += synapse0x3494de0();
   input += synapse0x34950e0();
   input += synapse0x3495120();
   input += synapse0x3495420();
   input += synapse0x3495460();
   input += synapse0x3495760();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34a2d70() {
   double input = input0x34a2d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34a4b80() {
   double input = -1.10314;
   input += synapse0x34957a0();
   input += synapse0x3496460();
   input += synapse0x34964a0();
   input += synapse0x34a2f00();
   input += synapse0x34a2f40();
   input += synapse0x34967a0();
   input += synapse0x34967e0();
   input += synapse0x3496d00();
   input += synapse0x3496d40();
   input += synapse0x3497040();
   input += synapse0x3497080();
   input += synapse0x3497380();
   input += synapse0x34973c0();
   input += synapse0x34976c0();
   input += synapse0x3497700();
   input += synapse0x3497a00();
   input += synapse0x3497a40();
   input += synapse0x3497d40();
   input += synapse0x3497d80();
   input += synapse0x3498080();
   input += synapse0x34980c0();
   input += synapse0x3495aa0();
   input += synapse0x3495ae0();
   input += synapse0x34a4e20();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34a4b80() {
   double input = input0x34a4b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34a4e60() {
   double input = -0.513903;
   input += synapse0x34a51a0();
   input += synapse0x34a51e0();
   input += synapse0x34a5220();
   input += synapse0x34a5260();
   input += synapse0x34a52a0();
   input += synapse0x34a52e0();
   input += synapse0x34a5320();
   input += synapse0x34a5360();
   input += synapse0x34a53a0();
   input += synapse0x34a53e0();
   input += synapse0x34a5420();
   input += synapse0x34a5460();
   input += synapse0x34a54a0();
   input += synapse0x34a54e0();
   input += synapse0x34a5520();
   input += synapse0x34a5560();
   input += synapse0x34a4ff0();
   input += synapse0x34a5030();
   input += synapse0x34a56b0();
   input += synapse0x34a56f0();
   input += synapse0x34a5730();
   input += synapse0x34a5770();
   input += synapse0x34a57b0();
   input += synapse0x34a57f0();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34a4e60() {
   double input = input0x34a4e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34a5830() {
   double input = 1.85784;
   input += synapse0x34a5b70();
   input += synapse0x34a5bb0();
   input += synapse0x34a5bf0();
   input += synapse0x34a5c30();
   input += synapse0x34a5c70();
   input += synapse0x34a5cb0();
   input += synapse0x34a5cf0();
   input += synapse0x34a5d30();
   input += synapse0x34a5d70();
   input += synapse0x34a5db0();
   input += synapse0x34a5df0();
   input += synapse0x34a5e30();
   input += synapse0x34a5e70();
   input += synapse0x34a5eb0();
   input += synapse0x34a5ef0();
   input += synapse0x34a5f30();
   input += synapse0x34a59c0();
   input += synapse0x34a5a00();
   input += synapse0x34a6080();
   input += synapse0x34a60c0();
   input += synapse0x34a6100();
   input += synapse0x34a6140();
   input += synapse0x34a6180();
   input += synapse0x34a61c0();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34a5830() {
   double input = input0x34a5830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34a6200() {
   double input = 1.84769;
   input += synapse0x34a6540();
   input += synapse0x34a6580();
   input += synapse0x34a65c0();
   input += synapse0x34a6600();
   input += synapse0x34a6640();
   input += synapse0x34a6680();
   input += synapse0x34a66c0();
   input += synapse0x34a6700();
   input += synapse0x34a6740();
   input += synapse0x34a6780();
   input += synapse0x34a67c0();
   input += synapse0x34a6800();
   input += synapse0x34a6840();
   input += synapse0x34a6880();
   input += synapse0x34a68c0();
   input += synapse0x34a6900();
   input += synapse0x34a6390();
   input += synapse0x34a63d0();
   input += synapse0x34a6a50();
   input += synapse0x34a6a90();
   input += synapse0x34a6ad0();
   input += synapse0x34a6b10();
   input += synapse0x34a6b50();
   input += synapse0x34a6b90();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34a6200() {
   double input = input0x34a6200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34a6bd0() {
   double input = 1.53712;
   input += synapse0x34a6f10();
   input += synapse0x34a6f50();
   input += synapse0x34a6f90();
   input += synapse0x34a6fd0();
   input += synapse0x34a7010();
   input += synapse0x34a7050();
   input += synapse0x34a7090();
   input += synapse0x34a70d0();
   input += synapse0x34a7110();
   input += synapse0x34a7150();
   input += synapse0x34a7190();
   input += synapse0x34a71d0();
   input += synapse0x34a7210();
   input += synapse0x34a7250();
   input += synapse0x34a7290();
   input += synapse0x34a72d0();
   input += synapse0x34a6d60();
   input += synapse0x34a6da0();
   input += synapse0x34a7420();
   input += synapse0x34a7460();
   input += synapse0x34a74a0();
   input += synapse0x34a74e0();
   input += synapse0x34a7520();
   input += synapse0x34a7560();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34a6bd0() {
   double input = input0x34a6bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34a75a0() {
   double input = -0.372587;
   input += synapse0x34a78e0();
   input += synapse0x34a7920();
   input += synapse0x34a7960();
   input += synapse0x34a79a0();
   input += synapse0x34a79e0();
   input += synapse0x34a7a20();
   input += synapse0x34a7a60();
   input += synapse0x34a7aa0();
   input += synapse0x34a7ae0();
   input += synapse0x349fca0();
   input += synapse0x349fce0();
   input += synapse0x349fd20();
   input += synapse0x349fd60();
   input += synapse0x349fda0();
   input += synapse0x349fde0();
   input += synapse0x349fe20();
   input += synapse0x34a7730();
   input += synapse0x34a7770();
   input += synapse0x349ff70();
   input += synapse0x349ffb0();
   input += synapse0x349fff0();
   input += synapse0x34a0030();
   input += synapse0x34a0070();
   input += synapse0x34a00b0();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34a75a0() {
   double input = input0x34a75a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34a00f0() {
   double input = -1.21022;
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
   input += synapse0x34a07b0();
   input += synapse0x34a07f0();
   input += synapse0x34a0280();
   input += synapse0x34a02c0();
   input += synapse0x34a0940();
   input += synapse0x34a0980();
   input += synapse0x34a09c0();
   input += synapse0x34a0a00();
   input += synapse0x34a0a40();
   input += synapse0x34a0a80();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34a00f0() {
   double input = input0x34a00f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34a0ac0() {
   double input = -1.93187;
   input += synapse0x34a0c50();
   input += synapse0x34a9ce0();
   input += synapse0x34a9d20();
   input += synapse0x34a9d60();
   input += synapse0x34a9da0();
   input += synapse0x34a9de0();
   input += synapse0x34a9e20();
   input += synapse0x34a9e60();
   input += synapse0x34a9ea0();
   input += synapse0x34a9ee0();
   input += synapse0x34a9f20();
   input += synapse0x34a9f60();
   input += synapse0x34a9fa0();
   input += synapse0x34a9fe0();
   input += synapse0x34aa020();
   input += synapse0x34aa060();
   input += synapse0x34a9b30();
   input += synapse0x34a9b70();
   input += synapse0x34aa1b0();
   input += synapse0x34aa1f0();
   input += synapse0x34aa230();
   input += synapse0x34aa270();
   input += synapse0x34aa2b0();
   input += synapse0x34aa2f0();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34a0ac0() {
   double input = input0x34a0ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34aa330() {
   double input = 0.704204;
   input += synapse0x34aa670();
   input += synapse0x34aa6b0();
   input += synapse0x34aa6f0();
   input += synapse0x34aa730();
   input += synapse0x34aa770();
   input += synapse0x34aa7b0();
   input += synapse0x34aa7f0();
   input += synapse0x34aa830();
   input += synapse0x34aa870();
   input += synapse0x34aa8b0();
   input += synapse0x34aa8f0();
   input += synapse0x34aa930();
   input += synapse0x34aa970();
   input += synapse0x34aa9b0();
   input += synapse0x34aa9f0();
   input += synapse0x34aaa30();
   input += synapse0x34aa4c0();
   input += synapse0x34aa500();
   input += synapse0x34aab80();
   input += synapse0x34aabc0();
   input += synapse0x34aac00();
   input += synapse0x34aac40();
   input += synapse0x34aac80();
   input += synapse0x34aacc0();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34aa330() {
   double input = input0x34aa330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34aad00() {
   double input = 3.69242;
   input += synapse0x34ab040();
   input += synapse0x34ab080();
   input += synapse0x34ab0c0();
   input += synapse0x34ab100();
   input += synapse0x34ab140();
   input += synapse0x34ab180();
   input += synapse0x34ab1c0();
   input += synapse0x34ab200();
   input += synapse0x34ab240();
   input += synapse0x34ab280();
   input += synapse0x34ab2c0();
   input += synapse0x34ab300();
   input += synapse0x34ab340();
   input += synapse0x34ab380();
   input += synapse0x34ab3c0();
   input += synapse0x34ab400();
   input += synapse0x34aae90();
   input += synapse0x34aaed0();
   input += synapse0x34ab550();
   input += synapse0x34ab590();
   input += synapse0x34ab5d0();
   input += synapse0x34ab610();
   input += synapse0x34ab650();
   input += synapse0x34ab690();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34aad00() {
   double input = input0x34aad00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34ab6d0() {
   double input = -0.945326;
   input += synapse0x34aba10();
   input += synapse0x34aba50();
   input += synapse0x34aba90();
   input += synapse0x34abad0();
   input += synapse0x34abb10();
   input += synapse0x34abb50();
   input += synapse0x34abb90();
   input += synapse0x34abbd0();
   input += synapse0x34abc10();
   input += synapse0x34abc50();
   input += synapse0x34abc90();
   input += synapse0x34abcd0();
   input += synapse0x34abd10();
   input += synapse0x34abd50();
   input += synapse0x34abd90();
   input += synapse0x34abdd0();
   input += synapse0x34ab860();
   input += synapse0x34ab8a0();
   input += synapse0x34abf20();
   input += synapse0x34abf60();
   input += synapse0x34abfa0();
   input += synapse0x34abfe0();
   input += synapse0x34ac020();
   input += synapse0x34ac060();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34ab6d0() {
   double input = input0x34ab6d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34ac0a0() {
   double input = -0.440555;
   input += synapse0x34ac3e0();
   input += synapse0x34ac420();
   input += synapse0x34ac460();
   input += synapse0x34ac4a0();
   input += synapse0x34ac4e0();
   input += synapse0x34ac520();
   input += synapse0x34ac560();
   input += synapse0x34ac5a0();
   input += synapse0x34ac5e0();
   input += synapse0x34ac620();
   input += synapse0x34ac660();
   input += synapse0x34ac6a0();
   input += synapse0x34ac6e0();
   input += synapse0x34ac720();
   input += synapse0x34ac760();
   input += synapse0x34ac7a0();
   input += synapse0x34ac230();
   input += synapse0x34ac270();
   input += synapse0x34ac8f0();
   input += synapse0x34ac930();
   input += synapse0x34ac970();
   input += synapse0x34ac9b0();
   input += synapse0x34ac9f0();
   input += synapse0x34aca30();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34ac0a0() {
   double input = input0x34ac0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34aca70() {
   double input = 0.852901;
   input += synapse0x34acdb0();
   input += synapse0x34acdf0();
   input += synapse0x34ace30();
   input += synapse0x34ace70();
   input += synapse0x34aceb0();
   input += synapse0x34acef0();
   input += synapse0x34acf30();
   input += synapse0x34acf70();
   input += synapse0x34acfb0();
   input += synapse0x34acff0();
   input += synapse0x34ad030();
   input += synapse0x34ad070();
   input += synapse0x34ad0b0();
   input += synapse0x34ad0f0();
   input += synapse0x34ad130();
   input += synapse0x34ad170();
   input += synapse0x34acc00();
   input += synapse0x34acc40();
   input += synapse0x34ad2c0();
   input += synapse0x34ad300();
   input += synapse0x34ad340();
   input += synapse0x34ad380();
   input += synapse0x34ad3c0();
   input += synapse0x34ad400();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34aca70() {
   double input = input0x34aca70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34ad440() {
   double input = -0.617155;
   input += synapse0x34ad780();
   input += synapse0x34ad7c0();
   input += synapse0x34ad800();
   input += synapse0x34ad840();
   input += synapse0x34ad880();
   input += synapse0x34ad8c0();
   input += synapse0x34ad900();
   input += synapse0x34ad940();
   input += synapse0x34ad980();
   input += synapse0x34ad9c0();
   input += synapse0x34ada00();
   input += synapse0x34ada40();
   input += synapse0x34ada80();
   input += synapse0x34adac0();
   input += synapse0x34adb00();
   input += synapse0x34adb40();
   input += synapse0x34ad5d0();
   input += synapse0x34ad610();
   input += synapse0x34adc90();
   input += synapse0x34adcd0();
   input += synapse0x34add10();
   input += synapse0x34add50();
   input += synapse0x34add90();
   input += synapse0x34addd0();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34ad440() {
   double input = input0x34ad440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34ade10() {
   double input = -0.434722;
   input += synapse0x34ae150();
   input += synapse0x34ae190();
   input += synapse0x34ae1d0();
   input += synapse0x34ae210();
   input += synapse0x34ae250();
   input += synapse0x34ae290();
   input += synapse0x34ae2d0();
   input += synapse0x34ae310();
   input += synapse0x34ae350();
   input += synapse0x34ae390();
   input += synapse0x34ae3d0();
   input += synapse0x34ae410();
   input += synapse0x34ae450();
   input += synapse0x34ae490();
   input += synapse0x34ae4d0();
   input += synapse0x34ae510();
   input += synapse0x34adfa0();
   input += synapse0x34adfe0();
   input += synapse0x34ae660();
   input += synapse0x34ae6a0();
   input += synapse0x34ae6e0();
   input += synapse0x34ae720();
   input += synapse0x34ae760();
   input += synapse0x34ae7a0();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34ade10() {
   double input = input0x34ade10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34ae7e0() {
   double input = 1.62269;
   input += synapse0x34aeb20();
   input += synapse0x34a30f0();
   input += synapse0x34a3130();
   input += synapse0x34a3170();
   input += synapse0x34a33c0();
   input += synapse0x34a3400();
   input += synapse0x34a3440();
   input += synapse0x34a3690();
   input += synapse0x34a36d0();
   input += synapse0x34a3920();
   input += synapse0x34a3960();
   input += synapse0x34a39a0();
   input += synapse0x34a3bf0();
   input += synapse0x34a3c30();
   input += synapse0x34a3e80();
   input += synapse0x34a3ec0();
   input += synapse0x34ae970();
   input += synapse0x34ae9b0();
   input += synapse0x34a4010();
   input += synapse0x34a4520();
   input += synapse0x34a4560();
   input += synapse0x34a45a0();
   input += synapse0x34a47f0();
   input += synapse0x34a4830();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34ae7e0() {
   double input = input0x34ae7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34a4870() {
   double input = 0.570305;
   input += synapse0x34a40e0();
   input += synapse0x34a4120();
   input += synapse0x34a4160();
   input += synapse0x34a41a0();
   input += synapse0x34a4b20();
   input += synapse0x34b0e70();
   input += synapse0x34b0eb0();
   input += synapse0x34b0ef0();
   input += synapse0x34b0f30();
   input += synapse0x34b0f70();
   input += synapse0x34b0fb0();
   input += synapse0x34b0ff0();
   input += synapse0x34b1030();
   input += synapse0x34b1070();
   input += synapse0x34b10b0();
   input += synapse0x34b10f0();
   input += synapse0x34a4a00();
   input += synapse0x34a4a40();
   input += synapse0x34b1240();
   input += synapse0x34b1280();
   input += synapse0x34b12c0();
   input += synapse0x34b1300();
   input += synapse0x34b1340();
   input += synapse0x34b1380();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34a4870() {
   double input = input0x34a4870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34b13c0() {
   double input = 0.201872;
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
   input += synapse0x34b19c0();
   input += synapse0x34b1a00();
   input += synapse0x34b1a40();
   input += synapse0x34b1a80();
   input += synapse0x34b1ac0();
   input += synapse0x34b1550();
   input += synapse0x34b1590();
   input += synapse0x34b1c10();
   input += synapse0x34b1c50();
   input += synapse0x34b1c90();
   input += synapse0x34b1cd0();
   input += synapse0x34b1d10();
   input += synapse0x34b1d50();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34b13c0() {
   double input = input0x34b13c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34b1d90() {
   double input = -0.765135;
   input += synapse0x34b20d0();
   input += synapse0x34b2110();
   input += synapse0x34b2150();
   input += synapse0x34b2190();
   input += synapse0x34b21d0();
   input += synapse0x34b2210();
   input += synapse0x34b2250();
   input += synapse0x34b2290();
   input += synapse0x34b22d0();
   input += synapse0x34b2310();
   input += synapse0x34b2350();
   input += synapse0x34b2390();
   input += synapse0x34b23d0();
   input += synapse0x34b2410();
   input += synapse0x34b2450();
   input += synapse0x34b2490();
   input += synapse0x34b1f20();
   input += synapse0x34b1f60();
   input += synapse0x34b25e0();
   input += synapse0x34b2620();
   input += synapse0x34b2660();
   input += synapse0x34b26a0();
   input += synapse0x34b26e0();
   input += synapse0x34b2720();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34b1d90() {
   double input = input0x34b1d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34b2760() {
   double input = 0.0973942;
   input += synapse0x34b2aa0();
   input += synapse0x34b2ae0();
   input += synapse0x34b2b20();
   input += synapse0x34b2b60();
   input += synapse0x34b2ba0();
   input += synapse0x34b2be0();
   input += synapse0x34b2c20();
   input += synapse0x34b2c60();
   input += synapse0x34b2ca0();
   input += synapse0x34b2ce0();
   input += synapse0x34b2d20();
   input += synapse0x34b2d60();
   input += synapse0x34b2da0();
   input += synapse0x34b2de0();
   input += synapse0x34b2e20();
   input += synapse0x34b2e60();
   input += synapse0x34b28f0();
   input += synapse0x34b2930();
   input += synapse0x34b2fb0();
   input += synapse0x34b2ff0();
   input += synapse0x34b3030();
   input += synapse0x34b3070();
   input += synapse0x34b30b0();
   input += synapse0x34b30f0();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34b2760() {
   double input = input0x34b2760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34b3130() {
   double input = -1.35659;
   input += synapse0x34b3470();
   input += synapse0x34b34b0();
   input += synapse0x34b34f0();
   input += synapse0x34b3530();
   input += synapse0x34b3570();
   input += synapse0x34b35b0();
   input += synapse0x34b35f0();
   input += synapse0x34b3630();
   input += synapse0x34b3670();
   input += synapse0x34b36b0();
   input += synapse0x34b36f0();
   input += synapse0x34b3730();
   input += synapse0x34b3770();
   input += synapse0x34b37b0();
   input += synapse0x34b37f0();
   input += synapse0x34b3830();
   input += synapse0x34b32c0();
   input += synapse0x34b3300();
   input += synapse0x34b3980();
   input += synapse0x34b39c0();
   input += synapse0x34b3a00();
   input += synapse0x34b3a40();
   input += synapse0x34b3a80();
   input += synapse0x34b3ac0();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34b3130() {
   double input = input0x34b3130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34b3b00() {
   double input = -0.361534;
   input += synapse0x34b3e40();
   input += synapse0x34b3e80();
   input += synapse0x34b3ec0();
   input += synapse0x34b3f00();
   input += synapse0x34b3f40();
   input += synapse0x34b3f80();
   input += synapse0x34b3fc0();
   input += synapse0x34b4000();
   input += synapse0x34b4040();
   input += synapse0x34b4080();
   input += synapse0x34b40c0();
   input += synapse0x34b4100();
   input += synapse0x34b4140();
   input += synapse0x34b4180();
   input += synapse0x34b41c0();
   input += synapse0x34b4200();
   input += synapse0x34b3c90();
   input += synapse0x34b3cd0();
   input += synapse0x34b4350();
   input += synapse0x34b4390();
   input += synapse0x34b43d0();
   input += synapse0x34b4410();
   input += synapse0x34b4450();
   input += synapse0x34b4490();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34b3b00() {
   double input = input0x34b3b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34b44d0() {
   double input = 1.09362;
   input += synapse0x34b4810();
   input += synapse0x34b4850();
   input += synapse0x34b4890();
   input += synapse0x34b48d0();
   input += synapse0x34b4910();
   input += synapse0x34b4950();
   input += synapse0x34b4990();
   input += synapse0x34b49d0();
   input += synapse0x34b4a10();
   input += synapse0x34b4a50();
   input += synapse0x34b4a90();
   input += synapse0x34b4ad0();
   input += synapse0x34b4b10();
   input += synapse0x34b4b50();
   input += synapse0x34b4b90();
   input += synapse0x34b4bd0();
   input += synapse0x34b4660();
   input += synapse0x34b46a0();
   input += synapse0x34b4d20();
   input += synapse0x34b4d60();
   input += synapse0x34b4da0();
   input += synapse0x34b4de0();
   input += synapse0x34b4e20();
   input += synapse0x34b4e60();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34b44d0() {
   double input = input0x34b44d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34b4ea0() {
   double input = 0.326102;
   input += synapse0x34b51e0();
   input += synapse0x34b5220();
   input += synapse0x34b5260();
   input += synapse0x34b52a0();
   input += synapse0x34b52e0();
   input += synapse0x34b5320();
   input += synapse0x34b5360();
   input += synapse0x34b53a0();
   input += synapse0x34b53e0();
   input += synapse0x34b5420();
   input += synapse0x34b5460();
   input += synapse0x34b54a0();
   input += synapse0x34b54e0();
   input += synapse0x34b5520();
   input += synapse0x34b5560();
   input += synapse0x34b55a0();
   input += synapse0x34b5030();
   input += synapse0x34b5070();
   input += synapse0x34b56f0();
   input += synapse0x34b5730();
   input += synapse0x34b5770();
   input += synapse0x34b57b0();
   input += synapse0x34b57f0();
   input += synapse0x34b5830();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34b4ea0() {
   double input = input0x34b4ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34b5870() {
   double input = 0.200144;
   input += synapse0x349e2e0();
   input += synapse0x349e320();
   input += synapse0x349e360();
   input += synapse0x349e3a0();
   input += synapse0x349e3e0();
   input += synapse0x349e420();
   input += synapse0x349e460();
   input += synapse0x349e4a0();
   input += synapse0x34b5fc0();
   input += synapse0x34b6000();
   input += synapse0x34b6040();
   input += synapse0x34b6080();
   input += synapse0x34b60c0();
   input += synapse0x34b6100();
   input += synapse0x34b6140();
   input += synapse0x34b6180();
   input += synapse0x34b5a00();
   input += synapse0x34b5a40();
   input += synapse0x34b62d0();
   input += synapse0x34b6310();
   input += synapse0x34b6350();
   input += synapse0x34b6390();
   input += synapse0x34b63d0();
   input += synapse0x34b6410();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34b5870() {
   double input = input0x34b5870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34b6450() {
   double input = 2.83662;
   input += synapse0x34b6790();
   input += synapse0x34b67d0();
   input += synapse0x34b6810();
   input += synapse0x34b6850();
   input += synapse0x34b6890();
   input += synapse0x34b68d0();
   input += synapse0x34b6910();
   input += synapse0x34b6950();
   input += synapse0x34b6990();
   input += synapse0x34b69d0();
   input += synapse0x34b6a10();
   input += synapse0x34b6a50();
   input += synapse0x34b6a90();
   input += synapse0x34b6ad0();
   input += synapse0x34b6b10();
   input += synapse0x34b6b50();
   input += synapse0x34b65e0();
   input += synapse0x34b6620();
   input += synapse0x34b6ca0();
   input += synapse0x34b6ce0();
   input += synapse0x34b6d20();
   input += synapse0x34b6d60();
   input += synapse0x34b6da0();
   input += synapse0x34b6de0();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34b6450() {
   double input = input0x34b6450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34b6e20() {
   double input = -1.2027;
   input += synapse0x34b7160();
   input += synapse0x34b71a0();
   input += synapse0x34b71e0();
   input += synapse0x34b7220();
   input += synapse0x34b7260();
   input += synapse0x34b72a0();
   input += synapse0x34b72e0();
   input += synapse0x34b7320();
   input += synapse0x34b7360();
   input += synapse0x34b73a0();
   input += synapse0x34b73e0();
   input += synapse0x34b7420();
   input += synapse0x34b7460();
   input += synapse0x34b74a0();
   input += synapse0x34b74e0();
   input += synapse0x34b7520();
   input += synapse0x34b6fb0();
   input += synapse0x34b6ff0();
   input += synapse0x34a7b20();
   input += synapse0x34a7b60();
   input += synapse0x34a7ba0();
   input += synapse0x34a7be0();
   input += synapse0x34a7c20();
   input += synapse0x34a7c60();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34b6e20() {
   double input = input0x34b6e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34a7ca0() {
   double input = -1.48468;
   input += synapse0x34a7fe0();
   input += synapse0x34a8020();
   input += synapse0x34a8060();
   input += synapse0x34a80a0();
   input += synapse0x34a80e0();
   input += synapse0x34a8120();
   input += synapse0x34a8160();
   input += synapse0x34a81a0();
   input += synapse0x34a81e0();
   input += synapse0x34a8220();
   input += synapse0x34a8260();
   input += synapse0x34a82a0();
   input += synapse0x34a82e0();
   input += synapse0x34a8320();
   input += synapse0x34a8360();
   input += synapse0x34a83a0();
   input += synapse0x34a7e30();
   input += synapse0x34a7e70();
   input += synapse0x34a84f0();
   input += synapse0x34a8530();
   input += synapse0x34a8570();
   input += synapse0x34a85b0();
   input += synapse0x34a85f0();
   input += synapse0x34a8630();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34a7ca0() {
   double input = input0x34a7ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34a8670() {
   double input = -1.03101;
   input += synapse0x34a89b0();
   input += synapse0x34a89f0();
   input += synapse0x34a8a30();
   input += synapse0x34a8a70();
   input += synapse0x34a8ab0();
   input += synapse0x34a8af0();
   input += synapse0x34a8b30();
   input += synapse0x34a8b70();
   input += synapse0x34a8bb0();
   input += synapse0x34a8bf0();
   input += synapse0x34a8c30();
   input += synapse0x34a8c70();
   input += synapse0x34a8cb0();
   input += synapse0x34a8cf0();
   input += synapse0x34a8d30();
   input += synapse0x34a8d70();
   input += synapse0x34a8800();
   input += synapse0x34a8840();
   input += synapse0x34a8ec0();
   input += synapse0x34a8f00();
   input += synapse0x34a8f40();
   input += synapse0x34a8f80();
   input += synapse0x34a8fc0();
   input += synapse0x34a9000();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34a8670() {
   double input = input0x34a8670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34a9040() {
   double input = -1.46389;
   input += synapse0x34a9380();
   input += synapse0x34a93c0();
   input += synapse0x34a9400();
   input += synapse0x34a9440();
   input += synapse0x34a9480();
   input += synapse0x34a94c0();
   input += synapse0x34a9500();
   input += synapse0x34a9540();
   input += synapse0x34a9580();
   input += synapse0x34a95c0();
   input += synapse0x34a9600();
   input += synapse0x34a9640();
   input += synapse0x34a9680();
   input += synapse0x34a96c0();
   input += synapse0x34a9700();
   input += synapse0x34a9740();
   input += synapse0x34a91d0();
   input += synapse0x34a9210();
   input += synapse0x34a9890();
   input += synapse0x34a98d0();
   input += synapse0x34a9910();
   input += synapse0x34a9950();
   input += synapse0x34a9990();
   input += synapse0x34a99d0();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34a9040() {
   double input = input0x34a9040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34bb680() {
   double input = -0.673678;
   input += synapse0x34bb8a0();
   input += synapse0x34bb8e0();
   input += synapse0x34bb920();
   input += synapse0x34bb960();
   input += synapse0x34bb9a0();
   input += synapse0x34bb9e0();
   input += synapse0x34bba20();
   input += synapse0x34bba60();
   input += synapse0x34bbaa0();
   input += synapse0x34bbae0();
   input += synapse0x34bbb20();
   input += synapse0x34bbb60();
   input += synapse0x34bbba0();
   input += synapse0x34bbbe0();
   input += synapse0x34bbc20();
   input += synapse0x34bbc60();
   input += synapse0x34a9a10();
   input += synapse0x34a9a50();
   input += synapse0x34bbdb0();
   input += synapse0x34bbdf0();
   input += synapse0x34bbe30();
   input += synapse0x34bbe70();
   input += synapse0x34bbeb0();
   input += synapse0x34bbef0();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34bb680() {
   double input = input0x34bb680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34bbf30() {
   double input = 2.97774;
   input += synapse0x34bc270();
   input += synapse0x34bc2b0();
   input += synapse0x34bc2f0();
   input += synapse0x34bc330();
   input += synapse0x34bc370();
   input += synapse0x34bc3b0();
   input += synapse0x34bc3f0();
   input += synapse0x34bc430();
   input += synapse0x34bc470();
   input += synapse0x34bc4b0();
   input += synapse0x34bc4f0();
   input += synapse0x34bc530();
   input += synapse0x34bc570();
   input += synapse0x34bc5b0();
   input += synapse0x34bc5f0();
   input += synapse0x34bc630();
   input += synapse0x34bc0c0();
   input += synapse0x34bc100();
   input += synapse0x34bc780();
   input += synapse0x34bc7c0();
   input += synapse0x34bc800();
   input += synapse0x34bc840();
   input += synapse0x34bc880();
   input += synapse0x34bc8c0();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34bbf30() {
   double input = input0x34bbf30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34bc900() {
   double input = -1.169;
   input += synapse0x34bcc40();
   input += synapse0x34bcc80();
   input += synapse0x34bccc0();
   input += synapse0x34bcd00();
   input += synapse0x34bcd40();
   input += synapse0x34bcd80();
   input += synapse0x34bcdc0();
   input += synapse0x34bce00();
   input += synapse0x34bce40();
   input += synapse0x34bce80();
   input += synapse0x34bcec0();
   input += synapse0x34bcf00();
   input += synapse0x34bcf40();
   input += synapse0x34bcf80();
   input += synapse0x34bcfc0();
   input += synapse0x34bd000();
   input += synapse0x34bca90();
   input += synapse0x34bcad0();
   input += synapse0x34bd150();
   input += synapse0x34bd190();
   input += synapse0x34bd1d0();
   input += synapse0x34bd210();
   input += synapse0x34bd250();
   input += synapse0x34bd290();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34bc900() {
   double input = input0x34bc900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34bd2d0() {
   double input = -2.63545;
   input += synapse0x34bd610();
   input += synapse0x34bd650();
   input += synapse0x34bd690();
   input += synapse0x34bd6d0();
   input += synapse0x34bd710();
   input += synapse0x34bd750();
   input += synapse0x34bd790();
   input += synapse0x34bd7d0();
   input += synapse0x34bd810();
   input += synapse0x34bd850();
   input += synapse0x34bd890();
   input += synapse0x34bd8d0();
   input += synapse0x34bd910();
   input += synapse0x34bd950();
   input += synapse0x34bd990();
   input += synapse0x34bd9d0();
   input += synapse0x34bd460();
   input += synapse0x34bd4a0();
   input += synapse0x34bdb20();
   input += synapse0x34bdb60();
   input += synapse0x34bdba0();
   input += synapse0x34bdbe0();
   input += synapse0x34bdc20();
   input += synapse0x34bdc60();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34bd2d0() {
   double input = input0x34bd2d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34c44d0() {
   double input = -0.419571;
   input += synapse0x3499120();
   input += synapse0x3499160();
   input += synapse0x349a640();
   input += synapse0x349a680();
   input += synapse0x349c0e0();
   input += synapse0x349c120();
   input += synapse0x349ceb0();
   input += synapse0x349cef0();
   input += synapse0x349d880();
   input += synapse0x349d8c0();
   input += synapse0x349e250();
   input += synapse0x349e290();
   input += synapse0x349ed30();
   input += synapse0x349ed70();
   input += synapse0x349f700();
   input += synapse0x349f740();
   input += synapse0x349c7e0();
   input += synapse0x349c820();
   input += synapse0x34a12b0();
   input += synapse0x34a12f0();
   input += synapse0x34a1c80();
   input += synapse0x34a1cc0();
   input += synapse0x34a2650();
   input += synapse0x34a2690();
   input += synapse0x34a3020();
   input += synapse0x34a3060();
   input += synapse0x3496120();
   input += synapse0x3496160();
   input += synapse0x34a5110();
   input += synapse0x34a5150();
   input += synapse0x34a5ae0();
   input += synapse0x34a5b20();
   input += synapse0x34a64b0();
   input += synapse0x34a64f0();
   input += synapse0x34a6e80();
   input += synapse0x34a6ec0();
   input += synapse0x34a7850();
   input += synapse0x34a7890();
   input += synapse0x34a03a0();
   input += synapse0x34a03e0();
   input += synapse0x34a9c50();
   input += synapse0x34a9c90();
   input += synapse0x34aa5e0();
   input += synapse0x34aa620();
   input += synapse0x34aafb0();
   input += synapse0x34aaff0();
   input += synapse0x34ab980();
   input += synapse0x34ab9c0();
   input += synapse0x34ac350();
   input += synapse0x34ac390();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34c44d0() {
   double input = input0x34c44d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34c4870() {
   double input = -0.572469;
   input += synapse0x34aea90();
   input += synapse0x34aead0();
   input += synapse0x34a4050();
   input += synapse0x34a4090();
   input += synapse0x34b1670();
   input += synapse0x34b16b0();
   input += synapse0x34b2040();
   input += synapse0x34b2080();
   input += synapse0x34b2a10();
   input += synapse0x34b2a50();
   input += synapse0x34b33e0();
   input += synapse0x34b3420();
   input += synapse0x34b3db0();
   input += synapse0x34b3df0();
   input += synapse0x34b4780();
   input += synapse0x34b47c0();
   input += synapse0x34b5150();
   input += synapse0x34b5190();
   input += synapse0x34b5b20();
   input += synapse0x34b5b60();
   input += synapse0x34b6700();
   input += synapse0x34b6740();
   input += synapse0x34b70d0();
   input += synapse0x34b7110();
   input += synapse0x34a7f50();
   input += synapse0x34a7f90();
   input += synapse0x34a8920();
   input += synapse0x34a8960();
   input += synapse0x34a92f0();
   input += synapse0x34a9330();
   input += synapse0x34bb810();
   input += synapse0x34bb850();
   input += synapse0x34bc1e0();
   input += synapse0x34bc220();
   input += synapse0x34bcbb0();
   input += synapse0x34bcbf0();
   input += synapse0x34bd580();
   input += synapse0x34bd5c0();
   input += synapse0x3498580();
   input += synapse0x34985c0();
   input += synapse0x34acd20();
   input += synapse0x34acd60();
   input += synapse0x34bdca0();
   input += synapse0x34bdce0();
   input += synapse0x34bdd20();
   input += synapse0x34bdd60();
   input += synapse0x34c4c10();
   input += synapse0x34c4c50();
   input += synapse0x34c4c90();
   input += synapse0x34c4cd0();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34c4870() {
   double input = input0x34c4870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34c4d10() {
   double input = -0.0585498;
   input += synapse0x34c5050();
   input += synapse0x34c5090();
   input += synapse0x34c50d0();
   input += synapse0x34c5110();
   input += synapse0x34c5150();
   input += synapse0x34c5190();
   input += synapse0x34c51d0();
   input += synapse0x34c5210();
   input += synapse0x34c5250();
   input += synapse0x34c5290();
   input += synapse0x34c52d0();
   input += synapse0x34c5310();
   input += synapse0x34c5350();
   input += synapse0x34c5390();
   input += synapse0x34c53d0();
   input += synapse0x34c5410();
   input += synapse0x34c4ea0();
   input += synapse0x34c4ee0();
   input += synapse0x34c5560();
   input += synapse0x34c55a0();
   input += synapse0x34c55e0();
   input += synapse0x34c5620();
   input += synapse0x34c5660();
   input += synapse0x34c56a0();
   input += synapse0x34c56e0();
   input += synapse0x34c5720();
   input += synapse0x34c5760();
   input += synapse0x34c57a0();
   input += synapse0x34c57e0();
   input += synapse0x34c5820();
   input += synapse0x34c5860();
   input += synapse0x34c58a0();
   input += synapse0x34c5450();
   input += synapse0x34c5490();
   input += synapse0x34c54d0();
   input += synapse0x34c5510();
   input += synapse0x34c5af0();
   input += synapse0x34c5b30();
   input += synapse0x34c5b70();
   input += synapse0x34c5bb0();
   input += synapse0x34c5bf0();
   input += synapse0x34c5c30();
   input += synapse0x34c5c70();
   input += synapse0x34c5cb0();
   input += synapse0x34c5cf0();
   input += synapse0x34c5d30();
   input += synapse0x34c5d70();
   input += synapse0x34c5db0();
   input += synapse0x34c5df0();
   input += synapse0x34c5e30();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34c4d10() {
   double input = input0x34c4d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34c5e70() {
   double input = 0.270127;
   input += synapse0x34c61b0();
   input += synapse0x34c61f0();
   input += synapse0x34c6230();
   input += synapse0x34c6270();
   input += synapse0x34c62b0();
   input += synapse0x34c62f0();
   input += synapse0x34c6330();
   input += synapse0x34c6370();
   input += synapse0x34c63b0();
   input += synapse0x34c63f0();
   input += synapse0x34c6430();
   input += synapse0x34c6470();
   input += synapse0x34c64b0();
   input += synapse0x34c64f0();
   input += synapse0x34c6530();
   input += synapse0x34c6570();
   input += synapse0x34c6000();
   input += synapse0x34c6040();
   input += synapse0x34c66c0();
   input += synapse0x34c6700();
   input += synapse0x34c6740();
   input += synapse0x34c6780();
   input += synapse0x34c67c0();
   input += synapse0x34c6800();
   input += synapse0x34c6840();
   input += synapse0x34c6880();
   input += synapse0x34c68c0();
   input += synapse0x34c6900();
   input += synapse0x34c6940();
   input += synapse0x34c6980();
   input += synapse0x34c69c0();
   input += synapse0x34c6a00();
   input += synapse0x34c65b0();
   input += synapse0x34c65f0();
   input += synapse0x34c6630();
   input += synapse0x34c6670();
   input += synapse0x34c6c50();
   input += synapse0x34c6c90();
   input += synapse0x34c6cd0();
   input += synapse0x34c6d10();
   input += synapse0x34c6d50();
   input += synapse0x34c6d90();
   input += synapse0x34c6dd0();
   input += synapse0x34c6e10();
   input += synapse0x34c6e50();
   input += synapse0x34c6e90();
   input += synapse0x34c6ed0();
   input += synapse0x34c6f10();
   input += synapse0x34c6f50();
   input += synapse0x34c6f90();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34c5e70() {
   double input = input0x34c5e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34c6fd0() {
   double input = 0.0228761;
   input += synapse0x34c7310();
   input += synapse0x34c7350();
   input += synapse0x34c7390();
   input += synapse0x34c73d0();
   input += synapse0x34c7410();
   input += synapse0x34c7450();
   input += synapse0x34c7490();
   input += synapse0x34c74d0();
   input += synapse0x34c7510();
   input += synapse0x34c7550();
   input += synapse0x34c7590();
   input += synapse0x34c75d0();
   input += synapse0x34c7610();
   input += synapse0x34c7650();
   input += synapse0x34c7690();
   input += synapse0x34c76d0();
   input += synapse0x34c7160();
   input += synapse0x34c71a0();
   input += synapse0x34c7820();
   input += synapse0x34c7860();
   input += synapse0x34c78a0();
   input += synapse0x34c78e0();
   input += synapse0x34c7920();
   input += synapse0x34c7960();
   input += synapse0x34c79a0();
   input += synapse0x34c79e0();
   input += synapse0x34c7a20();
   input += synapse0x34c7a60();
   input += synapse0x34c7aa0();
   input += synapse0x34c7ae0();
   input += synapse0x34c7b20();
   input += synapse0x34c7b60();
   input += synapse0x34c7710();
   input += synapse0x34c7750();
   input += synapse0x34c7790();
   input += synapse0x34c77d0();
   input += synapse0x34c7db0();
   input += synapse0x34c7df0();
   input += synapse0x34c7e30();
   input += synapse0x34c7e70();
   input += synapse0x34c7eb0();
   input += synapse0x34c7ef0();
   input += synapse0x34c7f30();
   input += synapse0x34c7f70();
   input += synapse0x34c7fb0();
   input += synapse0x34c7ff0();
   input += synapse0x34c8030();
   input += synapse0x34c8070();
   input += synapse0x34c80b0();
   input += synapse0x34c80f0();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34c6fd0() {
   double input = input0x34c6fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLuL::input0x34c8130() {
   double input = 1.73066;
   input += synapse0x34c8350();
   input += synapse0x34c8390();
   input += synapse0x34c83d0();
   input += synapse0x34c8410();
   input += synapse0x34c8450();
   return input;
}

double NNfunction-ss_sLuL::neuron0x34c8130() {
   double input = input0x34c8130();
   return (input * 1)+0;
}

double NNfunction-ss_sLuL::synapse0x3498610() {
   return (neuron0x3493210()*0.0683869);
}

double NNfunction-ss_sLuL::synapse0x3498650() {
   return (neuron0x34934c0()*0.47261);
}

double NNfunction-ss_sLuL::synapse0x3498690() {
   return (neuron0x3493800()*0.948071);
}

double NNfunction-ss_sLuL::synapse0x34986d0() {
   return (neuron0x3493b40()*0.0825155);
}

double NNfunction-ss_sLuL::synapse0x3498710() {
   return (neuron0x3493e80()*0.0765859);
}

double NNfunction-ss_sLuL::synapse0x3498750() {
   return (neuron0x34941c0()*0.211814);
}

double NNfunction-ss_sLuL::synapse0x3498790() {
   return (neuron0x3494500()*-0.447338);
}

double NNfunction-ss_sLuL::synapse0x34987d0() {
   return (neuron0x3494840()*0.209792);
}

double NNfunction-ss_sLuL::synapse0x3498810() {
   return (neuron0x3494b80()*-0.12623);
}

double NNfunction-ss_sLuL::synapse0x3498850() {
   return (neuron0x3494ec0()*0.284559);
}

double NNfunction-ss_sLuL::synapse0x3498890() {
   return (neuron0x3495200()*-0.00406293);
}

double NNfunction-ss_sLuL::synapse0x34988d0() {
   return (neuron0x3495540()*-0.318007);
}

double NNfunction-ss_sLuL::synapse0x3498910() {
   return (neuron0x3495880()*0.248364);
}

double NNfunction-ss_sLuL::synapse0x3498950() {
   return (neuron0x3495bc0()*-0.767324);
}

double NNfunction-ss_sLuL::synapse0x3498990() {
   return (neuron0x3495f00()*0.225466);
}

double NNfunction-ss_sLuL::synapse0x34989d0() {
   return (neuron0x3496240()*-0.18085);
}

double NNfunction-ss_sLuL::synapse0x3498460() {
   return (neuron0x3496580()*-0.103979);
}

double NNfunction-ss_sLuL::synapse0x34984a0() {
   return (neuron0x3496ae0()*0.323187);
}

double NNfunction-ss_sLuL::synapse0x324f380() {
   return (neuron0x3496e20()*0.0693366);
}

double NNfunction-ss_sLuL::synapse0x324f3c0() {
   return (neuron0x3497160()*0.0240976);
}

double NNfunction-ss_sLuL::synapse0x3498a10() {
   return (neuron0x34974a0()*0.970762);
}

double NNfunction-ss_sLuL::synapse0x3498a50() {
   return (neuron0x34977e0()*0.178859);
}

double NNfunction-ss_sLuL::synapse0x3498a90() {
   return (neuron0x3497b20()*-0.0301466);
}

double NNfunction-ss_sLuL::synapse0x3498ad0() {
   return (neuron0x3497e60()*-0.057121);
}

double NNfunction-ss_sLuL::synapse0x3498e50() {
   return (neuron0x3493210()*-0.352485);
}

double NNfunction-ss_sLuL::synapse0x3498e90() {
   return (neuron0x34934c0()*-0.0967377);
}

double NNfunction-ss_sLuL::synapse0x3498ed0() {
   return (neuron0x3493800()*0.288743);
}

double NNfunction-ss_sLuL::synapse0x3498f10() {
   return (neuron0x3493b40()*0.149499);
}

double NNfunction-ss_sLuL::synapse0x3498f50() {
   return (neuron0x3493e80()*0.0963856);
}

double NNfunction-ss_sLuL::synapse0x3498f90() {
   return (neuron0x34941c0()*0.368645);
}

double NNfunction-ss_sLuL::synapse0x3498fd0() {
   return (neuron0x3494500()*0.0800996);
}

double NNfunction-ss_sLuL::synapse0x3499010() {
   return (neuron0x3494840()*0.375978);
}

double NNfunction-ss_sLuL::synapse0x3499050() {
   return (neuron0x3494b80()*0.0457325);
}

double NNfunction-ss_sLuL::synapse0x324f1d0() {
   return (neuron0x3494ec0()*-0.126279);
}

double NNfunction-ss_sLuL::synapse0x324f210() {
   return (neuron0x3495200()*0.570384);
}

double NNfunction-ss_sLuL::synapse0x324f250() {
   return (neuron0x3495540()*-0.847014);
}

double NNfunction-ss_sLuL::synapse0x324f290() {
   return (neuron0x3495880()*0.0711612);
}

double NNfunction-ss_sLuL::synapse0x34992a0() {
   return (neuron0x3495bc0()*0.0712644);
}

double NNfunction-ss_sLuL::synapse0x34992e0() {
   return (neuron0x3495f00()*0.111842);
}

double NNfunction-ss_sLuL::synapse0x3499320() {
   return (neuron0x3496240()*-0.136482);
}

double NNfunction-ss_sLuL::synapse0x3498ca0() {
   return (neuron0x3496580()*-0.109225);
}

double NNfunction-ss_sLuL::synapse0x3498ce0() {
   return (neuron0x3496ae0()*-0.00372004);
}

double NNfunction-ss_sLuL::synapse0x3499470() {
   return (neuron0x3496e20()*-0.114282);
}

double NNfunction-ss_sLuL::synapse0x34994b0() {
   return (neuron0x3497160()*-0.188311);
}

double NNfunction-ss_sLuL::synapse0x34994f0() {
   return (neuron0x34974a0()*0.248013);
}

double NNfunction-ss_sLuL::synapse0x3499530() {
   return (neuron0x34977e0()*-0.251201);
}

double NNfunction-ss_sLuL::synapse0x3499570() {
   return (neuron0x3497b20()*-0.326711);
}

double NNfunction-ss_sLuL::synapse0x34995b0() {
   return (neuron0x3497e60()*0.133167);
}

double NNfunction-ss_sLuL::synapse0x3499930() {
   return (neuron0x3493210()*0.576429);
}

double NNfunction-ss_sLuL::synapse0x3499970() {
   return (neuron0x34934c0()*0.740813);
}

double NNfunction-ss_sLuL::synapse0x34999b0() {
   return (neuron0x3493800()*-0.114769);
}

double NNfunction-ss_sLuL::synapse0x34999f0() {
   return (neuron0x3493b40()*-0.571088);
}

double NNfunction-ss_sLuL::synapse0x3499a30() {
   return (neuron0x3493e80()*0.292094);
}

double NNfunction-ss_sLuL::synapse0x3499a70() {
   return (neuron0x34941c0()*0.559917);
}

double NNfunction-ss_sLuL::synapse0x3499ab0() {
   return (neuron0x3494500()*0.290693);
}

double NNfunction-ss_sLuL::synapse0x3499af0() {
   return (neuron0x3494840()*1.29806);
}

double NNfunction-ss_sLuL::synapse0x3499b30() {
   return (neuron0x3494b80()*-0.791384);
}

double NNfunction-ss_sLuL::synapse0x3499b70() {
   return (neuron0x3494ec0()*-0.100087);
}

double NNfunction-ss_sLuL::synapse0x3499bb0() {
   return (neuron0x3495200()*0.185343);
}

double NNfunction-ss_sLuL::synapse0x3499bf0() {
   return (neuron0x3495540()*-0.47915);
}

double NNfunction-ss_sLuL::synapse0x3499c30() {
   return (neuron0x3495880()*0.881015);
}

double NNfunction-ss_sLuL::synapse0x3499c70() {
   return (neuron0x3495bc0()*0.241161);
}

double NNfunction-ss_sLuL::synapse0x3499cb0() {
   return (neuron0x3495f00()*-0.362279);
}

double NNfunction-ss_sLuL::synapse0x3499cf0() {
   return (neuron0x3496240()*-0.273239);
}

double NNfunction-ss_sLuL::synapse0x3499780() {
   return (neuron0x3496580()*-0.742649);
}

double NNfunction-ss_sLuL::synapse0x34997c0() {
   return (neuron0x3496ae0()*-0.317134);
}

double NNfunction-ss_sLuL::synapse0x325d280() {
   return (neuron0x3496e20()*0.119174);
}

double NNfunction-ss_sLuL::synapse0x325d2c0() {
   return (neuron0x3497160()*-0.768068);
}

double NNfunction-ss_sLuL::synapse0x349bbe0() {
   return (neuron0x34974a0()*0.193385);
}

double NNfunction-ss_sLuL::synapse0x349bc20() {
   return (neuron0x34977e0()*-0.453068);
}

double NNfunction-ss_sLuL::synapse0x3492f10() {
   return (neuron0x3497b20()*0.149681);
}

double NNfunction-ss_sLuL::synapse0x3492f50() {
   return (neuron0x3497e60()*-0.271897);
}

double NNfunction-ss_sLuL::synapse0x325db70() {
   return (neuron0x3493210()*0.330334);
}

double NNfunction-ss_sLuL::synapse0x34991b0() {
   return (neuron0x34934c0()*-0.722801);
}

double NNfunction-ss_sLuL::synapse0x34991f0() {
   return (neuron0x3493800()*-0.443539);
}

double NNfunction-ss_sLuL::synapse0x3499230() {
   return (neuron0x3493b40()*-0.52984);
}

double NNfunction-ss_sLuL::synapse0x3493020() {
   return (neuron0x3493e80()*0.363362);
}

double NNfunction-ss_sLuL::synapse0x3499e40() {
   return (neuron0x34941c0()*-0.409251);
}

double NNfunction-ss_sLuL::synapse0x3499e80() {
   return (neuron0x3494500()*0.418843);
}

double NNfunction-ss_sLuL::synapse0x3499ec0() {
   return (neuron0x3494840()*0.600539);
}

double NNfunction-ss_sLuL::synapse0x3499f00() {
   return (neuron0x3494b80()*-0.297119);
}

double NNfunction-ss_sLuL::synapse0x3499f40() {
   return (neuron0x3494ec0()*0.568413);
}

double NNfunction-ss_sLuL::synapse0x3499f80() {
   return (neuron0x3495200()*-0.608264);
}

double NNfunction-ss_sLuL::synapse0x3499fc0() {
   return (neuron0x3495540()*-0.959354);
}

double NNfunction-ss_sLuL::synapse0x349a000() {
   return (neuron0x3495880()*-0.470655);
}

double NNfunction-ss_sLuL::synapse0x349a040() {
   return (neuron0x3495bc0()*0.375248);
}

double NNfunction-ss_sLuL::synapse0x349a080() {
   return (neuron0x3495f00()*-0.70825);
}

double NNfunction-ss_sLuL::synapse0x349a0c0() {
   return (neuron0x3496240()*-0.897781);
}

double NNfunction-ss_sLuL::synapse0x3492f90() {
   return (neuron0x3496580()*0.587906);
}

double NNfunction-ss_sLuL::synapse0x3492fd0() {
   return (neuron0x3496ae0()*-0.0511788);
}

double NNfunction-ss_sLuL::synapse0x349a210() {
   return (neuron0x3496e20()*-0.394415);
}

double NNfunction-ss_sLuL::synapse0x349a250() {
   return (neuron0x3497160()*-0.253721);
}

double NNfunction-ss_sLuL::synapse0x349a290() {
   return (neuron0x34974a0()*0.182245);
}

double NNfunction-ss_sLuL::synapse0x349a2d0() {
   return (neuron0x34977e0()*0.0904097);
}

double NNfunction-ss_sLuL::synapse0x349a310() {
   return (neuron0x3497b20()*-0.342709);
}

double NNfunction-ss_sLuL::synapse0x349a350() {
   return (neuron0x3497e60()*0.0107413);
}

double NNfunction-ss_sLuL::synapse0x349a6d0() {
   return (neuron0x3493210()*0.147039);
}

double NNfunction-ss_sLuL::synapse0x349a710() {
   return (neuron0x34934c0()*-0.641465);
}

double NNfunction-ss_sLuL::synapse0x349a750() {
   return (neuron0x3493800()*0.649172);
}

double NNfunction-ss_sLuL::synapse0x349a790() {
   return (neuron0x3493b40()*-0.995162);
}

double NNfunction-ss_sLuL::synapse0x349a7d0() {
   return (neuron0x3493e80()*0.841674);
}

double NNfunction-ss_sLuL::synapse0x349a810() {
   return (neuron0x34941c0()*0.280133);
}

double NNfunction-ss_sLuL::synapse0x349a850() {
   return (neuron0x3494500()*0.293776);
}

double NNfunction-ss_sLuL::synapse0x349a890() {
   return (neuron0x3494840()*-1.28219);
}

double NNfunction-ss_sLuL::synapse0x349a8d0() {
   return (neuron0x3494b80()*0.976458);
}

double NNfunction-ss_sLuL::synapse0x349a910() {
   return (neuron0x3494ec0()*0.473803);
}

double NNfunction-ss_sLuL::synapse0x349a950() {
   return (neuron0x3495200()*0.739228);
}

double NNfunction-ss_sLuL::synapse0x349a990() {
   return (neuron0x3495540()*-0.234637);
}

double NNfunction-ss_sLuL::synapse0x349a9d0() {
   return (neuron0x3495880()*-0.176591);
}

double NNfunction-ss_sLuL::synapse0x349aa10() {
   return (neuron0x3495bc0()*-0.299741);
}

double NNfunction-ss_sLuL::synapse0x349aa50() {
   return (neuron0x3495f00()*-0.591974);
}

double NNfunction-ss_sLuL::synapse0x349aa90() {
   return (neuron0x3496240()*-0.354749);
}

double NNfunction-ss_sLuL::synapse0x349abe0() {
   return (neuron0x3496580()*0.354803);
}

double NNfunction-ss_sLuL::synapse0x349a520() {
   return (neuron0x3496ae0()*-0.486655);
}

double NNfunction-ss_sLuL::synapse0x349a560() {
   return (neuron0x3496e20()*0.065048);
}

double NNfunction-ss_sLuL::synapse0x349bcf0() {
   return (neuron0x3497160()*-0.268207);
}

double NNfunction-ss_sLuL::synapse0x349bd30() {
   return (neuron0x34974a0()*0.129844);
}

double NNfunction-ss_sLuL::synapse0x349bd70() {
   return (neuron0x34977e0()*-0.451629);
}

double NNfunction-ss_sLuL::synapse0x349bdb0() {
   return (neuron0x3497b20()*0.319633);
}

double NNfunction-ss_sLuL::synapse0x349bdf0() {
   return (neuron0x3497e60()*0.360512);
}

double NNfunction-ss_sLuL::synapse0x349c170() {
   return (neuron0x3493210()*-0.114086);
}

double NNfunction-ss_sLuL::synapse0x349c1b0() {
   return (neuron0x34934c0()*-0.11735);
}

double NNfunction-ss_sLuL::synapse0x349c1f0() {
   return (neuron0x3493800()*-0.45019);
}

double NNfunction-ss_sLuL::synapse0x349c230() {
   return (neuron0x3493b40()*0.24159);
}

double NNfunction-ss_sLuL::synapse0x349c270() {
   return (neuron0x3493e80()*0.0574724);
}

double NNfunction-ss_sLuL::synapse0x349c2b0() {
   return (neuron0x34941c0()*-0.0615669);
}

double NNfunction-ss_sLuL::synapse0x349c2f0() {
   return (neuron0x3494500()*-0.0911868);
}

double NNfunction-ss_sLuL::synapse0x349c330() {
   return (neuron0x3494840()*-0.154261);
}

double NNfunction-ss_sLuL::synapse0x349c370() {
   return (neuron0x3494b80()*0.0246157);
}

double NNfunction-ss_sLuL::synapse0x325d5d0() {
   return (neuron0x3494ec0()*0.0964185);
}

double NNfunction-ss_sLuL::synapse0x325d610() {
   return (neuron0x3495200()*-0.00600296);
}

double NNfunction-ss_sLuL::synapse0x325d650() {
   return (neuron0x3495540()*-0.0534895);
}

double NNfunction-ss_sLuL::synapse0x325d690() {
   return (neuron0x3495880()*-0.249715);
}

double NNfunction-ss_sLuL::synapse0x325d6d0() {
   return (neuron0x3495bc0()*-0.154747);
}

double NNfunction-ss_sLuL::synapse0x325d710() {
   return (neuron0x3495f00()*0.0342191);
}

double NNfunction-ss_sLuL::synapse0x325d750() {
   return (neuron0x3496240()*0.0247992);
}

double NNfunction-ss_sLuL::synapse0x349bfc0() {
   return (neuron0x3496580()*-0.0811826);
}

double NNfunction-ss_sLuL::synapse0x349c000() {
   return (neuron0x3496ae0()*0.0747744);
}

double NNfunction-ss_sLuL::synapse0x325d8a0() {
   return (neuron0x3496e20()*0.0817876);
}

double NNfunction-ss_sLuL::synapse0x325d8e0() {
   return (neuron0x3497160()*0.0102551);
}

double NNfunction-ss_sLuL::synapse0x325d920() {
   return (neuron0x34974a0()*0.132337);
}

double NNfunction-ss_sLuL::synapse0x325d960() {
   return (neuron0x34977e0()*0.0919692);
}

double NNfunction-ss_sLuL::synapse0x325d9a0() {
   return (neuron0x3497b20()*0.0217505);
}

double NNfunction-ss_sLuL::synapse0x349cbc0() {
   return (neuron0x3497e60()*-0.00836732);
}

double NNfunction-ss_sLuL::synapse0x349cf40() {
   return (neuron0x3493210()*0.597294);
}

double NNfunction-ss_sLuL::synapse0x349cf80() {
   return (neuron0x34934c0()*0.2335);
}

double NNfunction-ss_sLuL::synapse0x349cfc0() {
   return (neuron0x3493800()*0.348978);
}

double NNfunction-ss_sLuL::synapse0x349d000() {
   return (neuron0x3493b40()*-0.451284);
}

double NNfunction-ss_sLuL::synapse0x349d040() {
   return (neuron0x3493e80()*0.0726322);
}

double NNfunction-ss_sLuL::synapse0x349d080() {
   return (neuron0x34941c0()*0.24147);
}

double NNfunction-ss_sLuL::synapse0x349d0c0() {
   return (neuron0x3494500()*0.29133);
}

double NNfunction-ss_sLuL::synapse0x349d100() {
   return (neuron0x3494840()*0.0945202);
}

double NNfunction-ss_sLuL::synapse0x349d140() {
   return (neuron0x3494b80()*0.219575);
}

double NNfunction-ss_sLuL::synapse0x349d180() {
   return (neuron0x3494ec0()*-0.0358696);
}

double NNfunction-ss_sLuL::synapse0x349d1c0() {
   return (neuron0x3495200()*0.0981776);
}

double NNfunction-ss_sLuL::synapse0x349d200() {
   return (neuron0x3495540()*-0.463785);
}

double NNfunction-ss_sLuL::synapse0x349d240() {
   return (neuron0x3495880()*-0.459512);
}

double NNfunction-ss_sLuL::synapse0x349d280() {
   return (neuron0x3495bc0()*-0.0560788);
}

double NNfunction-ss_sLuL::synapse0x349d2c0() {
   return (neuron0x3495f00()*-0.0499951);
}

double NNfunction-ss_sLuL::synapse0x349d300() {
   return (neuron0x3496240()*0.186223);
}

double NNfunction-ss_sLuL::synapse0x349cd90() {
   return (neuron0x3496580()*-0.33818);
}

double NNfunction-ss_sLuL::synapse0x349cdd0() {
   return (neuron0x3496ae0()*0.0298627);
}

double NNfunction-ss_sLuL::synapse0x349d450() {
   return (neuron0x3496e20()*-0.360279);
}

double NNfunction-ss_sLuL::synapse0x349d490() {
   return (neuron0x3497160()*-0.0247647);
}

double NNfunction-ss_sLuL::synapse0x349d4d0() {
   return (neuron0x34974a0()*-0.0277028);
}

double NNfunction-ss_sLuL::synapse0x349d510() {
   return (neuron0x34977e0()*-0.171129);
}

double NNfunction-ss_sLuL::synapse0x349d550() {
   return (neuron0x3497b20()*-0.0383782);
}

double NNfunction-ss_sLuL::synapse0x349d590() {
   return (neuron0x3497e60()*-0.120238);
}

double NNfunction-ss_sLuL::synapse0x349d910() {
   return (neuron0x3493210()*0.120471);
}

double NNfunction-ss_sLuL::synapse0x349d950() {
   return (neuron0x34934c0()*-0.299649);
}

double NNfunction-ss_sLuL::synapse0x349d990() {
   return (neuron0x3493800()*-0.06677);
}

double NNfunction-ss_sLuL::synapse0x349d9d0() {
   return (neuron0x3493b40()*0.794318);
}

double NNfunction-ss_sLuL::synapse0x349da10() {
   return (neuron0x3493e80()*0.257173);
}

double NNfunction-ss_sLuL::synapse0x349da50() {
   return (neuron0x34941c0()*0.719196);
}

double NNfunction-ss_sLuL::synapse0x349da90() {
   return (neuron0x3494500()*0.375459);
}

double NNfunction-ss_sLuL::synapse0x349dad0() {
   return (neuron0x3494840()*-0.0384858);
}

double NNfunction-ss_sLuL::synapse0x349db10() {
   return (neuron0x3494b80()*-1.08421);
}

double NNfunction-ss_sLuL::synapse0x349db50() {
   return (neuron0x3494ec0()*-0.787373);
}

double NNfunction-ss_sLuL::synapse0x349db90() {
   return (neuron0x3495200()*-0.231927);
}

double NNfunction-ss_sLuL::synapse0x349dbd0() {
   return (neuron0x3495540()*-0.446018);
}

double NNfunction-ss_sLuL::synapse0x349dc10() {
   return (neuron0x3495880()*-0.238838);
}

double NNfunction-ss_sLuL::synapse0x349dc50() {
   return (neuron0x3495bc0()*-0.756903);
}

double NNfunction-ss_sLuL::synapse0x349dc90() {
   return (neuron0x3495f00()*0.566333);
}

double NNfunction-ss_sLuL::synapse0x349dcd0() {
   return (neuron0x3496240()*0.183712);
}

double NNfunction-ss_sLuL::synapse0x349d760() {
   return (neuron0x3496580()*0.588035);
}

double NNfunction-ss_sLuL::synapse0x349d7a0() {
   return (neuron0x3496ae0()*0.17619);
}

double NNfunction-ss_sLuL::synapse0x349de20() {
   return (neuron0x3496e20()*-0.396438);
}

double NNfunction-ss_sLuL::synapse0x349de60() {
   return (neuron0x3497160()*0.913615);
}

double NNfunction-ss_sLuL::synapse0x349dea0() {
   return (neuron0x34974a0()*0.755731);
}

double NNfunction-ss_sLuL::synapse0x349dee0() {
   return (neuron0x34977e0()*0.0426264);
}

double NNfunction-ss_sLuL::synapse0x349df20() {
   return (neuron0x3497b20()*-0.0742323);
}

double NNfunction-ss_sLuL::synapse0x349df60() {
   return (neuron0x3497e60()*0.0261731);
}

double NNfunction-ss_sLuL::synapse0x34969d0() {
   return (neuron0x3493210()*-0.0131491);
}

double NNfunction-ss_sLuL::synapse0x3496a10() {
   return (neuron0x34934c0()*0.0140064);
}

double NNfunction-ss_sLuL::synapse0x3496a50() {
   return (neuron0x3493800()*-0.0567458);
}

double NNfunction-ss_sLuL::synapse0x3496a90() {
   return (neuron0x3493b40()*0.0279216);
}

double NNfunction-ss_sLuL::synapse0x349e4f0() {
   return (neuron0x3493e80()*-0.0204887);
}

double NNfunction-ss_sLuL::synapse0x349e530() {
   return (neuron0x34941c0()*0.0100091);
}

double NNfunction-ss_sLuL::synapse0x349e570() {
   return (neuron0x3494500()*-0.0105061);
}

double NNfunction-ss_sLuL::synapse0x349e5b0() {
   return (neuron0x3494840()*-0.00430953);
}

double NNfunction-ss_sLuL::synapse0x349e5f0() {
   return (neuron0x3494b80()*-0.0170806);
}

double NNfunction-ss_sLuL::synapse0x349e630() {
   return (neuron0x3494ec0()*-0.00190697);
}

double NNfunction-ss_sLuL::synapse0x349e670() {
   return (neuron0x3495200()*-0.020803);
}

double NNfunction-ss_sLuL::synapse0x349e6b0() {
   return (neuron0x3495540()*0.565152);
}

double NNfunction-ss_sLuL::synapse0x349e6f0() {
   return (neuron0x3495880()*-0.674217);
}

double NNfunction-ss_sLuL::synapse0x349e730() {
   return (neuron0x3495bc0()*-0.000129117);
}

double NNfunction-ss_sLuL::synapse0x349e770() {
   return (neuron0x3495f00()*0.00213299);
}

double NNfunction-ss_sLuL::synapse0x349e7b0() {
   return (neuron0x3496240()*0.0231822);
}

double NNfunction-ss_sLuL::synapse0x349e130() {
   return (neuron0x3496580()*0.00323195);
}

double NNfunction-ss_sLuL::synapse0x349e170() {
   return (neuron0x3496ae0()*0.024021);
}

double NNfunction-ss_sLuL::synapse0x349e900() {
   return (neuron0x3496e20()*0.0123486);
}

double NNfunction-ss_sLuL::synapse0x349e940() {
   return (neuron0x3497160()*-0.0119924);
}

double NNfunction-ss_sLuL::synapse0x349e980() {
   return (neuron0x34974a0()*-0.0270122);
}

double NNfunction-ss_sLuL::synapse0x349e9c0() {
   return (neuron0x34977e0()*0.0127026);
}

double NNfunction-ss_sLuL::synapse0x349ea00() {
   return (neuron0x3497b20()*0.0251016);
}

double NNfunction-ss_sLuL::synapse0x349ea40() {
   return (neuron0x3497e60()*0.0116797);
}

double NNfunction-ss_sLuL::synapse0x349edc0() {
   return (neuron0x3493210()*-0.014553);
}

double NNfunction-ss_sLuL::synapse0x349ee00() {
   return (neuron0x34934c0()*0.0227527);
}

double NNfunction-ss_sLuL::synapse0x349ee40() {
   return (neuron0x3493800()*-0.0087208);
}

double NNfunction-ss_sLuL::synapse0x349ee80() {
   return (neuron0x3493b40()*-4.41175);
}

double NNfunction-ss_sLuL::synapse0x349eec0() {
   return (neuron0x3493e80()*0.0221651);
}

double NNfunction-ss_sLuL::synapse0x349ef00() {
   return (neuron0x34941c0()*0.00691586);
}

double NNfunction-ss_sLuL::synapse0x349ef40() {
   return (neuron0x3494500()*0.0156307);
}

double NNfunction-ss_sLuL::synapse0x349ef80() {
   return (neuron0x3494840()*0.00419412);
}

double NNfunction-ss_sLuL::synapse0x349efc0() {
   return (neuron0x3494b80()*0.00655416);
}

double NNfunction-ss_sLuL::synapse0x349f000() {
   return (neuron0x3494ec0()*-0.0153823);
}

double NNfunction-ss_sLuL::synapse0x349f040() {
   return (neuron0x3495200()*-0.00380854);
}

double NNfunction-ss_sLuL::synapse0x349f080() {
   return (neuron0x3495540()*0.367538);
}

double NNfunction-ss_sLuL::synapse0x349f0c0() {
   return (neuron0x3495880()*0.317043);
}

double NNfunction-ss_sLuL::synapse0x349f100() {
   return (neuron0x3495bc0()*0.0086267);
}

double NNfunction-ss_sLuL::synapse0x349f140() {
   return (neuron0x3495f00()*0.0124429);
}

double NNfunction-ss_sLuL::synapse0x349f180() {
   return (neuron0x3496240()*-0.00642687);
}

double NNfunction-ss_sLuL::synapse0x349ec10() {
   return (neuron0x3496580()*-0.0187288);
}

double NNfunction-ss_sLuL::synapse0x349ec50() {
   return (neuron0x3496ae0()*0.0117633);
}

double NNfunction-ss_sLuL::synapse0x349f2d0() {
   return (neuron0x3496e20()*-0.0210587);
}

double NNfunction-ss_sLuL::synapse0x349f310() {
   return (neuron0x3497160()*-0.00312581);
}

double NNfunction-ss_sLuL::synapse0x349f350() {
   return (neuron0x34974a0()*0.0431858);
}

double NNfunction-ss_sLuL::synapse0x349f390() {
   return (neuron0x34977e0()*0.0185321);
}

double NNfunction-ss_sLuL::synapse0x349f3d0() {
   return (neuron0x3497b20()*-0.00331616);
}

double NNfunction-ss_sLuL::synapse0x349f410() {
   return (neuron0x3497e60()*-0.00168046);
}

double NNfunction-ss_sLuL::synapse0x349f790() {
   return (neuron0x3493210()*0.298508);
}

double NNfunction-ss_sLuL::synapse0x349f7d0() {
   return (neuron0x34934c0()*0.631003);
}

double NNfunction-ss_sLuL::synapse0x349f810() {
   return (neuron0x3493800()*0.920983);
}

double NNfunction-ss_sLuL::synapse0x349f850() {
   return (neuron0x3493b40()*1.00991);
}

double NNfunction-ss_sLuL::synapse0x349f890() {
   return (neuron0x3493e80()*-0.208217);
}

double NNfunction-ss_sLuL::synapse0x349f8d0() {
   return (neuron0x34941c0()*-0.39788);
}

double NNfunction-ss_sLuL::synapse0x349f910() {
   return (neuron0x3494500()*0.32805);
}

double NNfunction-ss_sLuL::synapse0x349f950() {
   return (neuron0x3494840()*0.121221);
}

double NNfunction-ss_sLuL::synapse0x349f990() {
   return (neuron0x3494b80()*0.466685);
}

double NNfunction-ss_sLuL::synapse0x349f9d0() {
   return (neuron0x3494ec0()*1.28822);
}

double NNfunction-ss_sLuL::synapse0x349fa10() {
   return (neuron0x3495200()*-0.0604932);
}

double NNfunction-ss_sLuL::synapse0x349fa50() {
   return (neuron0x3495540()*-0.50656);
}

double NNfunction-ss_sLuL::synapse0x349fa90() {
   return (neuron0x3495880()*0.00794326);
}

double NNfunction-ss_sLuL::synapse0x349fad0() {
   return (neuron0x3495bc0()*0.427011);
}

double NNfunction-ss_sLuL::synapse0x349fb10() {
   return (neuron0x3495f00()*-1.22331);
}

double NNfunction-ss_sLuL::synapse0x349fb50() {
   return (neuron0x3496240()*1.89768);
}

double NNfunction-ss_sLuL::synapse0x349f5e0() {
   return (neuron0x3496580()*0.0781311);
}

double NNfunction-ss_sLuL::synapse0x349f620() {
   return (neuron0x3496ae0()*-0.151455);
}

double NNfunction-ss_sLuL::synapse0x349c3b0() {
   return (neuron0x3496e20()*-0.626405);
}

double NNfunction-ss_sLuL::synapse0x349c3f0() {
   return (neuron0x3497160()*-0.187111);
}

double NNfunction-ss_sLuL::synapse0x349c430() {
   return (neuron0x34974a0()*0.512378);
}

double NNfunction-ss_sLuL::synapse0x349c470() {
   return (neuron0x34977e0()*0.334461);
}

double NNfunction-ss_sLuL::synapse0x349c4b0() {
   return (neuron0x3497b20()*-0.465179);
}

double NNfunction-ss_sLuL::synapse0x349c4f0() {
   return (neuron0x3497e60()*-0.287169);
}

double NNfunction-ss_sLuL::synapse0x349c870() {
   return (neuron0x3493210()*-0.302394);
}

double NNfunction-ss_sLuL::synapse0x349c8b0() {
   return (neuron0x34934c0()*0.020736);
}

double NNfunction-ss_sLuL::synapse0x349c8f0() {
   return (neuron0x3493800()*0.269323);
}

double NNfunction-ss_sLuL::synapse0x349c930() {
   return (neuron0x3493b40()*0.33969);
}

double NNfunction-ss_sLuL::synapse0x349c970() {
   return (neuron0x3493e80()*-0.0131834);
}

double NNfunction-ss_sLuL::synapse0x349c9b0() {
   return (neuron0x34941c0()*-0.0208524);
}

double NNfunction-ss_sLuL::synapse0x349c9f0() {
   return (neuron0x3494500()*-0.0884882);
}

double NNfunction-ss_sLuL::synapse0x349ca30() {
   return (neuron0x3494840()*-0.127245);
}

double NNfunction-ss_sLuL::synapse0x349ca70() {
   return (neuron0x3494b80()*0.0297141);
}

double NNfunction-ss_sLuL::synapse0x349cab0() {
   return (neuron0x3494ec0()*-0.23768);
}

double NNfunction-ss_sLuL::synapse0x349caf0() {
   return (neuron0x3495200()*-0.117873);
}

double NNfunction-ss_sLuL::synapse0x349cb30() {
   return (neuron0x3495540()*1.49151);
}

double NNfunction-ss_sLuL::synapse0x349cb70() {
   return (neuron0x3495880()*-0.575905);
}

double NNfunction-ss_sLuL::synapse0x34a0cb0() {
   return (neuron0x3495bc0()*-0.117627);
}

double NNfunction-ss_sLuL::synapse0x34a0cf0() {
   return (neuron0x3495f00()*0.0658319);
}

double NNfunction-ss_sLuL::synapse0x34a0d30() {
   return (neuron0x3496240()*-0.171189);
}

double NNfunction-ss_sLuL::synapse0x349c6c0() {
   return (neuron0x3496580()*-0.505797);
}

double NNfunction-ss_sLuL::synapse0x349c700() {
   return (neuron0x3496ae0()*0.040819);
}

double NNfunction-ss_sLuL::synapse0x34a0e80() {
   return (neuron0x3496e20()*0.180999);
}

double NNfunction-ss_sLuL::synapse0x34a0ec0() {
   return (neuron0x3497160()*-0.216802);
}

double NNfunction-ss_sLuL::synapse0x34a0f00() {
   return (neuron0x34974a0()*-0.129477);
}

double NNfunction-ss_sLuL::synapse0x34a0f40() {
   return (neuron0x34977e0()*-0.266609);
}

double NNfunction-ss_sLuL::synapse0x34a0f80() {
   return (neuron0x3497b20()*-0.171459);
}

double NNfunction-ss_sLuL::synapse0x34a0fc0() {
   return (neuron0x3497e60()*-0.0236996);
}

double NNfunction-ss_sLuL::synapse0x34a1340() {
   return (neuron0x3493210()*-0.0102677);
}

double NNfunction-ss_sLuL::synapse0x34a1380() {
   return (neuron0x34934c0()*-0.013484);
}

double NNfunction-ss_sLuL::synapse0x34a13c0() {
   return (neuron0x3493800()*-0.000510065);
}

double NNfunction-ss_sLuL::synapse0x34a1400() {
   return (neuron0x3493b40()*-2.44709);
}

double NNfunction-ss_sLuL::synapse0x34a1440() {
   return (neuron0x3493e80()*-0.0132783);
}

double NNfunction-ss_sLuL::synapse0x34a1480() {
   return (neuron0x34941c0()*-0.00852031);
}

double NNfunction-ss_sLuL::synapse0x34a14c0() {
   return (neuron0x3494500()*-0.0264399);
}

double NNfunction-ss_sLuL::synapse0x34a1500() {
   return (neuron0x3494840()*-0.00333928);
}

double NNfunction-ss_sLuL::synapse0x34a1540() {
   return (neuron0x3494b80()*-0.00987487);
}

double NNfunction-ss_sLuL::synapse0x34a1580() {
   return (neuron0x3494ec0()*-0.00510456);
}

double NNfunction-ss_sLuL::synapse0x34a15c0() {
   return (neuron0x3495200()*-0.0112555);
}

double NNfunction-ss_sLuL::synapse0x34a1600() {
   return (neuron0x3495540()*-0.0819405);
}

double NNfunction-ss_sLuL::synapse0x34a1640() {
   return (neuron0x3495880()*-0.0795012);
}

double NNfunction-ss_sLuL::synapse0x34a1680() {
   return (neuron0x3495bc0()*-0.0100666);
}

double NNfunction-ss_sLuL::synapse0x34a16c0() {
   return (neuron0x3495f00()*0.0123063);
}

double NNfunction-ss_sLuL::synapse0x34a1700() {
   return (neuron0x3496240()*0.0111146);
}

double NNfunction-ss_sLuL::synapse0x34a1190() {
   return (neuron0x3496580()*0.00889493);
}

double NNfunction-ss_sLuL::synapse0x34a11d0() {
   return (neuron0x3496ae0()*0.00129452);
}

double NNfunction-ss_sLuL::synapse0x34a1850() {
   return (neuron0x3496e20()*-0.00192044);
}

double NNfunction-ss_sLuL::synapse0x34a1890() {
   return (neuron0x3497160()*-0.00993723);
}

double NNfunction-ss_sLuL::synapse0x34a18d0() {
   return (neuron0x34974a0()*0.000781092);
}

double NNfunction-ss_sLuL::synapse0x34a1910() {
   return (neuron0x34977e0()*0.00331448);
}

double NNfunction-ss_sLuL::synapse0x34a1950() {
   return (neuron0x3497b20()*0.0079004);
}

double NNfunction-ss_sLuL::synapse0x34a1990() {
   return (neuron0x3497e60()*-0.0120488);
}

double NNfunction-ss_sLuL::synapse0x34a1d10() {
   return (neuron0x3493210()*-0.0813995);
}

double NNfunction-ss_sLuL::synapse0x34a1d50() {
   return (neuron0x34934c0()*0.0671724);
}

double NNfunction-ss_sLuL::synapse0x34a1d90() {
   return (neuron0x3493800()*-1.13141);
}

double NNfunction-ss_sLuL::synapse0x34a1dd0() {
   return (neuron0x3493b40()*-0.110204);
}

double NNfunction-ss_sLuL::synapse0x34a1e10() {
   return (neuron0x3493e80()*0.0375723);
}

double NNfunction-ss_sLuL::synapse0x34a1e50() {
   return (neuron0x34941c0()*0.0323931);
}

double NNfunction-ss_sLuL::synapse0x34a1e90() {
   return (neuron0x3494500()*-0.0157891);
}

double NNfunction-ss_sLuL::synapse0x34a1ed0() {
   return (neuron0x3494840()*0.0126816);
}

double NNfunction-ss_sLuL::synapse0x34a1f10() {
   return (neuron0x3494b80()*-0.0173134);
}

double NNfunction-ss_sLuL::synapse0x34a1f50() {
   return (neuron0x3494ec0()*0.0181094);
}

double NNfunction-ss_sLuL::synapse0x34a1f90() {
   return (neuron0x3495200()*-0.0702826);
}

double NNfunction-ss_sLuL::synapse0x34a1fd0() {
   return (neuron0x3495540()*0.303526);
}

double NNfunction-ss_sLuL::synapse0x34a2010() {
   return (neuron0x3495880()*0.142504);
}

double NNfunction-ss_sLuL::synapse0x34a2050() {
   return (neuron0x3495bc0()*-0.0750574);
}

double NNfunction-ss_sLuL::synapse0x34a2090() {
   return (neuron0x3495f00()*0.0264483);
}

double NNfunction-ss_sLuL::synapse0x34a20d0() {
   return (neuron0x3496240()*-0.00427793);
}

double NNfunction-ss_sLuL::synapse0x34a1b60() {
   return (neuron0x3496580()*-0.0614009);
}

double NNfunction-ss_sLuL::synapse0x34a1ba0() {
   return (neuron0x3496ae0()*0.0191409);
}

double NNfunction-ss_sLuL::synapse0x34a2220() {
   return (neuron0x3496e20()*0.0269341);
}

double NNfunction-ss_sLuL::synapse0x34a2260() {
   return (neuron0x3497160()*0.0712062);
}

double NNfunction-ss_sLuL::synapse0x34a22a0() {
   return (neuron0x34974a0()*-0.00229332);
}

double NNfunction-ss_sLuL::synapse0x34a22e0() {
   return (neuron0x34977e0()*0.0624791);
}

double NNfunction-ss_sLuL::synapse0x34a2320() {
   return (neuron0x3497b20()*0.0815616);
}

double NNfunction-ss_sLuL::synapse0x34a2360() {
   return (neuron0x3497e60()*0.0232038);
}

double NNfunction-ss_sLuL::synapse0x34a26e0() {
   return (neuron0x3493210()*-0.388236);
}

double NNfunction-ss_sLuL::synapse0x34a2720() {
   return (neuron0x34934c0()*0.19319);
}

double NNfunction-ss_sLuL::synapse0x34a2760() {
   return (neuron0x3493800()*-0.17319);
}

double NNfunction-ss_sLuL::synapse0x34a27a0() {
   return (neuron0x3493b40()*-0.0514187);
}

double NNfunction-ss_sLuL::synapse0x34a27e0() {
   return (neuron0x3493e80()*-0.132917);
}

double NNfunction-ss_sLuL::synapse0x34a2820() {
   return (neuron0x34941c0()*-0.149557);
}

double NNfunction-ss_sLuL::synapse0x34a2860() {
   return (neuron0x3494500()*-0.154634);
}

double NNfunction-ss_sLuL::synapse0x34a28a0() {
   return (neuron0x3494840()*-0.324132);
}

double NNfunction-ss_sLuL::synapse0x34a28e0() {
   return (neuron0x3494b80()*0.0667831);
}

double NNfunction-ss_sLuL::synapse0x34a2920() {
   return (neuron0x3494ec0()*-0.0577876);
}

double NNfunction-ss_sLuL::synapse0x34a2960() {
   return (neuron0x3495200()*0.150919);
}

double NNfunction-ss_sLuL::synapse0x34a29a0() {
   return (neuron0x3495540()*0.0192974);
}

double NNfunction-ss_sLuL::synapse0x34a29e0() {
   return (neuron0x3495880()*-0.994475);
}

double NNfunction-ss_sLuL::synapse0x34a2a20() {
   return (neuron0x3495bc0()*0.567779);
}

double NNfunction-ss_sLuL::synapse0x34a2a60() {
   return (neuron0x3495f00()*-0.147663);
}

double NNfunction-ss_sLuL::synapse0x34a2aa0() {
   return (neuron0x3496240()*-0.538625);
}

double NNfunction-ss_sLuL::synapse0x34a2530() {
   return (neuron0x3496580()*0.107602);
}

double NNfunction-ss_sLuL::synapse0x34a2570() {
   return (neuron0x3496ae0()*-0.554424);
}

double NNfunction-ss_sLuL::synapse0x34a2bf0() {
   return (neuron0x3496e20()*-0.191174);
}

double NNfunction-ss_sLuL::synapse0x34a2c30() {
   return (neuron0x3497160()*-0.280248);
}

double NNfunction-ss_sLuL::synapse0x34a2c70() {
   return (neuron0x34974a0()*-0.229947);
}

double NNfunction-ss_sLuL::synapse0x34a2cb0() {
   return (neuron0x34977e0()*-0.0505083);
}

double NNfunction-ss_sLuL::synapse0x34a2cf0() {
   return (neuron0x3497b20()*-0.0758354);
}

double NNfunction-ss_sLuL::synapse0x34a2d30() {
   return (neuron0x3497e60()*0.079866);
}

double NNfunction-ss_sLuL::synapse0x34a30b0() {
   return (neuron0x3493210()*0.340024);
}

double NNfunction-ss_sLuL::synapse0x34933a0() {
   return (neuron0x34934c0()*0.581201);
}

double NNfunction-ss_sLuL::synapse0x34933e0() {
   return (neuron0x3493800()*-1.51816);
}

double NNfunction-ss_sLuL::synapse0x34936e0() {
   return (neuron0x3493b40()*0.307374);
}

double NNfunction-ss_sLuL::synapse0x3493720() {
   return (neuron0x3493e80()*-0.480036);
}

double NNfunction-ss_sLuL::synapse0x3493a20() {
   return (neuron0x34941c0()*-0.352505);
}

double NNfunction-ss_sLuL::synapse0x3493a60() {
   return (neuron0x3494500()*-0.166857);
}

double NNfunction-ss_sLuL::synapse0x3493d60() {
   return (neuron0x3494840()*-0.50538);
}

double NNfunction-ss_sLuL::synapse0x3493da0() {
   return (neuron0x3494b80()*-0.175425);
}

double NNfunction-ss_sLuL::synapse0x34940a0() {
   return (neuron0x3494ec0()*-0.207733);
}

double NNfunction-ss_sLuL::synapse0x34940e0() {
   return (neuron0x3495200()*0.138032);
}

double NNfunction-ss_sLuL::synapse0x34943e0() {
   return (neuron0x3495540()*0.740341);
}

double NNfunction-ss_sLuL::synapse0x3494420() {
   return (neuron0x3495880()*-0.629361);
}

double NNfunction-ss_sLuL::synapse0x3494720() {
   return (neuron0x3495bc0()*0.497146);
}

double NNfunction-ss_sLuL::synapse0x3494760() {
   return (neuron0x3495f00()*0.039332);
}

double NNfunction-ss_sLuL::synapse0x3494a60() {
   return (neuron0x3496240()*-0.125127);
}

double NNfunction-ss_sLuL::synapse0x3494aa0() {
   return (neuron0x3496580()*0.396061);
}

double NNfunction-ss_sLuL::synapse0x3494da0() {
   return (neuron0x3496ae0()*0.0812611);
}

double NNfunction-ss_sLuL::synapse0x3494de0() {
   return (neuron0x3496e20()*0.203867);
}

double NNfunction-ss_sLuL::synapse0x34950e0() {
   return (neuron0x3497160()*-0.609525);
}

double NNfunction-ss_sLuL::synapse0x3495120() {
   return (neuron0x34974a0()*-0.235213);
}

double NNfunction-ss_sLuL::synapse0x3495420() {
   return (neuron0x34977e0()*0.252285);
}

double NNfunction-ss_sLuL::synapse0x3495460() {
   return (neuron0x3497b20()*0.129382);
}

double NNfunction-ss_sLuL::synapse0x3495760() {
   return (neuron0x3497e60()*0.416413);
}

double NNfunction-ss_sLuL::synapse0x34957a0() {
   return (neuron0x3493210()*-0.017987);
}

double NNfunction-ss_sLuL::synapse0x3496460() {
   return (neuron0x34934c0()*-0.437939);
}

double NNfunction-ss_sLuL::synapse0x34964a0() {
   return (neuron0x3493800()*-0.628164);
}

double NNfunction-ss_sLuL::synapse0x34a2f00() {
   return (neuron0x3493b40()*-1.23615);
}

double NNfunction-ss_sLuL::synapse0x34a2f40() {
   return (neuron0x3493e80()*0.235607);
}

double NNfunction-ss_sLuL::synapse0x34967a0() {
   return (neuron0x34941c0()*0.287072);
}

double NNfunction-ss_sLuL::synapse0x34967e0() {
   return (neuron0x3494500()*-0.16749);
}

double NNfunction-ss_sLuL::synapse0x3496d00() {
   return (neuron0x3494840()*-0.0892383);
}

double NNfunction-ss_sLuL::synapse0x3496d40() {
   return (neuron0x3494b80()*-0.665351);
}

double NNfunction-ss_sLuL::synapse0x3497040() {
   return (neuron0x3494ec0()*-0.697921);
}

double NNfunction-ss_sLuL::synapse0x3497080() {
   return (neuron0x3495200()*0.460449);
}

double NNfunction-ss_sLuL::synapse0x3497380() {
   return (neuron0x3495540()*0.610877);
}

double NNfunction-ss_sLuL::synapse0x34973c0() {
   return (neuron0x3495880()*0.326113);
}

double NNfunction-ss_sLuL::synapse0x34976c0() {
   return (neuron0x3495bc0()*-0.711151);
}

double NNfunction-ss_sLuL::synapse0x3497700() {
   return (neuron0x3495f00()*0.734784);
}

double NNfunction-ss_sLuL::synapse0x3497a00() {
   return (neuron0x3496240()*-0.618469);
}

double NNfunction-ss_sLuL::synapse0x3497a40() {
   return (neuron0x3496580()*0.75927);
}

double NNfunction-ss_sLuL::synapse0x3497d40() {
   return (neuron0x3496ae0()*0.23499);
}

double NNfunction-ss_sLuL::synapse0x3497d80() {
   return (neuron0x3496e20()*0.219779);
}

double NNfunction-ss_sLuL::synapse0x3498080() {
   return (neuron0x3497160()*0.362546);
}

double NNfunction-ss_sLuL::synapse0x34980c0() {
   return (neuron0x34974a0()*-0.229716);
}

double NNfunction-ss_sLuL::synapse0x3495aa0() {
   return (neuron0x34977e0()*0.142429);
}

double NNfunction-ss_sLuL::synapse0x3495ae0() {
   return (neuron0x3497b20()*0.133504);
}

double NNfunction-ss_sLuL::synapse0x34a4e20() {
   return (neuron0x3497e60()*-0.000150729);
}

double NNfunction-ss_sLuL::synapse0x34a51a0() {
   return (neuron0x3493210()*-0.0405092);
}

double NNfunction-ss_sLuL::synapse0x34a51e0() {
   return (neuron0x34934c0()*-0.0939441);
}

double NNfunction-ss_sLuL::synapse0x34a5220() {
   return (neuron0x3493800()*0.0103373);
}

double NNfunction-ss_sLuL::synapse0x34a5260() {
   return (neuron0x3493b40()*1.43733);
}

double NNfunction-ss_sLuL::synapse0x34a52a0() {
   return (neuron0x3493e80()*-0.0886896);
}

double NNfunction-ss_sLuL::synapse0x34a52e0() {
   return (neuron0x34941c0()*-0.00130621);
}

double NNfunction-ss_sLuL::synapse0x34a5320() {
   return (neuron0x3494500()*-0.040954);
}

double NNfunction-ss_sLuL::synapse0x34a5360() {
   return (neuron0x3494840()*-0.20161);
}

double NNfunction-ss_sLuL::synapse0x34a53a0() {
   return (neuron0x3494b80()*0.0295776);
}

double NNfunction-ss_sLuL::synapse0x34a53e0() {
   return (neuron0x3494ec0()*0.00133695);
}

double NNfunction-ss_sLuL::synapse0x34a5420() {
   return (neuron0x3495200()*-0.143389);
}

double NNfunction-ss_sLuL::synapse0x34a5460() {
   return (neuron0x3495540()*0.820303);
}

double NNfunction-ss_sLuL::synapse0x34a54a0() {
   return (neuron0x3495880()*0.660408);
}

double NNfunction-ss_sLuL::synapse0x34a54e0() {
   return (neuron0x3495bc0()*-0.286038);
}

double NNfunction-ss_sLuL::synapse0x34a5520() {
   return (neuron0x3495f00()*-0.167379);
}

double NNfunction-ss_sLuL::synapse0x34a5560() {
   return (neuron0x3496240()*0.0363862);
}

double NNfunction-ss_sLuL::synapse0x34a4ff0() {
   return (neuron0x3496580()*-0.113647);
}

double NNfunction-ss_sLuL::synapse0x34a5030() {
   return (neuron0x3496ae0()*0.0302097);
}

double NNfunction-ss_sLuL::synapse0x34a56b0() {
   return (neuron0x3496e20()*0.125743);
}

double NNfunction-ss_sLuL::synapse0x34a56f0() {
   return (neuron0x3497160()*-0.0486689);
}

double NNfunction-ss_sLuL::synapse0x34a5730() {
   return (neuron0x34974a0()*-0.394046);
}

double NNfunction-ss_sLuL::synapse0x34a5770() {
   return (neuron0x34977e0()*-0.00421386);
}

double NNfunction-ss_sLuL::synapse0x34a57b0() {
   return (neuron0x3497b20()*0.190209);
}

double NNfunction-ss_sLuL::synapse0x34a57f0() {
   return (neuron0x3497e60()*0.0654159);
}

double NNfunction-ss_sLuL::synapse0x34a5b70() {
   return (neuron0x3493210()*-0.0177618);
}

double NNfunction-ss_sLuL::synapse0x34a5bb0() {
   return (neuron0x34934c0()*-0.00595128);
}

double NNfunction-ss_sLuL::synapse0x34a5bf0() {
   return (neuron0x3493800()*-0.083271);
}

double NNfunction-ss_sLuL::synapse0x34a5c30() {
   return (neuron0x3493b40()*0.050937);
}

double NNfunction-ss_sLuL::synapse0x34a5c70() {
   return (neuron0x3493e80()*-0.0448105);
}

double NNfunction-ss_sLuL::synapse0x34a5cb0() {
   return (neuron0x34941c0()*-0.0139796);
}

double NNfunction-ss_sLuL::synapse0x34a5cf0() {
   return (neuron0x3494500()*-0.00154208);
}

double NNfunction-ss_sLuL::synapse0x34a5d30() {
   return (neuron0x3494840()*0.00531563);
}

double NNfunction-ss_sLuL::synapse0x34a5d70() {
   return (neuron0x3494b80()*-0.0114561);
}

double NNfunction-ss_sLuL::synapse0x34a5db0() {
   return (neuron0x3494ec0()*0.0307262);
}

double NNfunction-ss_sLuL::synapse0x34a5df0() {
   return (neuron0x3495200()*-0.054441);
}

double NNfunction-ss_sLuL::synapse0x34a5e30() {
   return (neuron0x3495540()*2.05834);
}

double NNfunction-ss_sLuL::synapse0x34a5e70() {
   return (neuron0x3495880()*-0.140803);
}

double NNfunction-ss_sLuL::synapse0x34a5eb0() {
   return (neuron0x3495bc0()*-0.0473321);
}

double NNfunction-ss_sLuL::synapse0x34a5ef0() {
   return (neuron0x3495f00()*0.00974541);
}

double NNfunction-ss_sLuL::synapse0x34a5f30() {
   return (neuron0x3496240()*0.0784757);
}

double NNfunction-ss_sLuL::synapse0x34a59c0() {
   return (neuron0x3496580()*-0.0311005);
}

double NNfunction-ss_sLuL::synapse0x34a5a00() {
   return (neuron0x3496ae0()*0.0402659);
}

double NNfunction-ss_sLuL::synapse0x34a6080() {
   return (neuron0x3496e20()*0.0436397);
}

double NNfunction-ss_sLuL::synapse0x34a60c0() {
   return (neuron0x3497160()*-0.0286814);
}

double NNfunction-ss_sLuL::synapse0x34a6100() {
   return (neuron0x34974a0()*-0.00372331);
}

double NNfunction-ss_sLuL::synapse0x34a6140() {
   return (neuron0x34977e0()*0.0333429);
}

double NNfunction-ss_sLuL::synapse0x34a6180() {
   return (neuron0x3497b20()*0.0654694);
}

double NNfunction-ss_sLuL::synapse0x34a61c0() {
   return (neuron0x3497e60()*0.060243);
}

double NNfunction-ss_sLuL::synapse0x34a6540() {
   return (neuron0x3493210()*0.0314948);
}

double NNfunction-ss_sLuL::synapse0x34a6580() {
   return (neuron0x34934c0()*-0.0427952);
}

double NNfunction-ss_sLuL::synapse0x34a65c0() {
   return (neuron0x3493800()*0.0642904);
}

double NNfunction-ss_sLuL::synapse0x34a6600() {
   return (neuron0x3493b40()*0.11185);
}

double NNfunction-ss_sLuL::synapse0x34a6640() {
   return (neuron0x3493e80()*0.0309066);
}

double NNfunction-ss_sLuL::synapse0x34a6680() {
   return (neuron0x34941c0()*0.0242733);
}

double NNfunction-ss_sLuL::synapse0x34a66c0() {
   return (neuron0x3494500()*-0.0191909);
}

double NNfunction-ss_sLuL::synapse0x34a6700() {
   return (neuron0x3494840()*0.0237619);
}

double NNfunction-ss_sLuL::synapse0x34a6740() {
   return (neuron0x3494b80()*0.0748979);
}

double NNfunction-ss_sLuL::synapse0x34a6780() {
   return (neuron0x3494ec0()*0.0855799);
}

double NNfunction-ss_sLuL::synapse0x34a67c0() {
   return (neuron0x3495200()*0.0230619);
}

double NNfunction-ss_sLuL::synapse0x34a6800() {
   return (neuron0x3495540()*1.49466);
}

double NNfunction-ss_sLuL::synapse0x34a6840() {
   return (neuron0x3495880()*-0.845799);
}

double NNfunction-ss_sLuL::synapse0x34a6880() {
   return (neuron0x3495bc0()*-0.065226);
}

double NNfunction-ss_sLuL::synapse0x34a68c0() {
   return (neuron0x3495f00()*-0.0354027);
}

double NNfunction-ss_sLuL::synapse0x34a6900() {
   return (neuron0x3496240()*-0.0825836);
}

double NNfunction-ss_sLuL::synapse0x34a6390() {
   return (neuron0x3496580()*0.025228);
}

double NNfunction-ss_sLuL::synapse0x34a63d0() {
   return (neuron0x3496ae0()*-0.035753);
}

double NNfunction-ss_sLuL::synapse0x34a6a50() {
   return (neuron0x3496e20()*-0.0228735);
}

double NNfunction-ss_sLuL::synapse0x34a6a90() {
   return (neuron0x3497160()*-0.0399996);
}

double NNfunction-ss_sLuL::synapse0x34a6ad0() {
   return (neuron0x34974a0()*0.109922);
}

double NNfunction-ss_sLuL::synapse0x34a6b10() {
   return (neuron0x34977e0()*-0.0027319);
}

double NNfunction-ss_sLuL::synapse0x34a6b50() {
   return (neuron0x3497b20()*-0.0357532);
}

double NNfunction-ss_sLuL::synapse0x34a6b90() {
   return (neuron0x3497e60()*-0.0493576);
}

double NNfunction-ss_sLuL::synapse0x34a6f10() {
   return (neuron0x3493210()*0.00360508);
}

double NNfunction-ss_sLuL::synapse0x34a6f50() {
   return (neuron0x34934c0()*0.0109837);
}

double NNfunction-ss_sLuL::synapse0x34a6f90() {
   return (neuron0x3493800()*0.0208614);
}

double NNfunction-ss_sLuL::synapse0x34a6fd0() {
   return (neuron0x3493b40()*0.0155686);
}

double NNfunction-ss_sLuL::synapse0x34a7010() {
   return (neuron0x3493e80()*0.00947573);
}

double NNfunction-ss_sLuL::synapse0x34a7050() {
   return (neuron0x34941c0()*-0.0317066);
}

double NNfunction-ss_sLuL::synapse0x34a7090() {
   return (neuron0x3494500()*0.0293266);
}

double NNfunction-ss_sLuL::synapse0x34a70d0() {
   return (neuron0x3494840()*-0.00757806);
}

double NNfunction-ss_sLuL::synapse0x34a7110() {
   return (neuron0x3494b80()*0.0121456);
}

double NNfunction-ss_sLuL::synapse0x34a7150() {
   return (neuron0x3494ec0()*-0.00543219);
}

double NNfunction-ss_sLuL::synapse0x34a7190() {
   return (neuron0x3495200()*0.00166438);
}

double NNfunction-ss_sLuL::synapse0x34a71d0() {
   return (neuron0x3495540()*-0.0239745);
}

double NNfunction-ss_sLuL::synapse0x34a7210() {
   return (neuron0x3495880()*-0.742603);
}

double NNfunction-ss_sLuL::synapse0x34a7250() {
   return (neuron0x3495bc0()*-0.0204336);
}

double NNfunction-ss_sLuL::synapse0x34a7290() {
   return (neuron0x3495f00()*-0.0195694);
}

double NNfunction-ss_sLuL::synapse0x34a72d0() {
   return (neuron0x3496240()*-0.00836379);
}

double NNfunction-ss_sLuL::synapse0x34a6d60() {
   return (neuron0x3496580()*-0.0232331);
}

double NNfunction-ss_sLuL::synapse0x34a6da0() {
   return (neuron0x3496ae0()*-0.00919297);
}

double NNfunction-ss_sLuL::synapse0x34a7420() {
   return (neuron0x3496e20()*0.0178704);
}

double NNfunction-ss_sLuL::synapse0x34a7460() {
   return (neuron0x3497160()*0.000565891);
}

double NNfunction-ss_sLuL::synapse0x34a74a0() {
   return (neuron0x34974a0()*0.0218074);
}

double NNfunction-ss_sLuL::synapse0x34a74e0() {
   return (neuron0x34977e0()*0.0106713);
}

double NNfunction-ss_sLuL::synapse0x34a7520() {
   return (neuron0x3497b20()*0.00240526);
}

double NNfunction-ss_sLuL::synapse0x34a7560() {
   return (neuron0x3497e60()*0.0256631);
}

double NNfunction-ss_sLuL::synapse0x34a78e0() {
   return (neuron0x3493210()*-0.345137);
}

double NNfunction-ss_sLuL::synapse0x34a7920() {
   return (neuron0x34934c0()*0.0772766);
}

double NNfunction-ss_sLuL::synapse0x34a7960() {
   return (neuron0x3493800()*-0.415806);
}

double NNfunction-ss_sLuL::synapse0x34a79a0() {
   return (neuron0x3493b40()*-0.772579);
}

double NNfunction-ss_sLuL::synapse0x34a79e0() {
   return (neuron0x3493e80()*-0.372469);
}

double NNfunction-ss_sLuL::synapse0x34a7a20() {
   return (neuron0x34941c0()*0.359888);
}

double NNfunction-ss_sLuL::synapse0x34a7a60() {
   return (neuron0x3494500()*-0.898756);
}

double NNfunction-ss_sLuL::synapse0x34a7aa0() {
   return (neuron0x3494840()*0.044905);
}

double NNfunction-ss_sLuL::synapse0x34a7ae0() {
   return (neuron0x3494b80()*0.573708);
}

double NNfunction-ss_sLuL::synapse0x349fca0() {
   return (neuron0x3494ec0()*1.17546);
}

double NNfunction-ss_sLuL::synapse0x349fce0() {
   return (neuron0x3495200()*0.697928);
}

double NNfunction-ss_sLuL::synapse0x349fd20() {
   return (neuron0x3495540()*-0.0322577);
}

double NNfunction-ss_sLuL::synapse0x349fd60() {
   return (neuron0x3495880()*0.664937);
}

double NNfunction-ss_sLuL::synapse0x349fda0() {
   return (neuron0x3495bc0()*-0.566629);
}

double NNfunction-ss_sLuL::synapse0x349fde0() {
   return (neuron0x3495f00()*-1.33446);
}

double NNfunction-ss_sLuL::synapse0x349fe20() {
   return (neuron0x3496240()*0.00046691);
}

double NNfunction-ss_sLuL::synapse0x34a7730() {
   return (neuron0x3496580()*0.339488);
}

double NNfunction-ss_sLuL::synapse0x34a7770() {
   return (neuron0x3496ae0()*-0.0908805);
}

double NNfunction-ss_sLuL::synapse0x349ff70() {
   return (neuron0x3496e20()*-0.177094);
}

double NNfunction-ss_sLuL::synapse0x349ffb0() {
   return (neuron0x3497160()*0.807434);
}

double NNfunction-ss_sLuL::synapse0x349fff0() {
   return (neuron0x34974a0()*0.314216);
}

double NNfunction-ss_sLuL::synapse0x34a0030() {
   return (neuron0x34977e0()*0.527786);
}

double NNfunction-ss_sLuL::synapse0x34a0070() {
   return (neuron0x3497b20()*-0.663374);
}

double NNfunction-ss_sLuL::synapse0x34a00b0() {
   return (neuron0x3497e60()*0.0755705);
}

double NNfunction-ss_sLuL::synapse0x34a0430() {
   return (neuron0x3493210()*0.190156);
}

double NNfunction-ss_sLuL::synapse0x34a0470() {
   return (neuron0x34934c0()*0.132097);
}

double NNfunction-ss_sLuL::synapse0x34a04b0() {
   return (neuron0x3493800()*0.0117611);
}

double NNfunction-ss_sLuL::synapse0x34a04f0() {
   return (neuron0x3493b40()*0.409317);
}

double NNfunction-ss_sLuL::synapse0x34a0530() {
   return (neuron0x3493e80()*0.0735843);
}

double NNfunction-ss_sLuL::synapse0x34a0570() {
   return (neuron0x34941c0()*-0.129188);
}

double NNfunction-ss_sLuL::synapse0x34a05b0() {
   return (neuron0x3494500()*0.988028);
}

double NNfunction-ss_sLuL::synapse0x34a05f0() {
   return (neuron0x3494840()*-0.191988);
}

double NNfunction-ss_sLuL::synapse0x34a0630() {
   return (neuron0x3494b80()*0.204097);
}

double NNfunction-ss_sLuL::synapse0x34a0670() {
   return (neuron0x3494ec0()*-0.0506017);
}

double NNfunction-ss_sLuL::synapse0x34a06b0() {
   return (neuron0x3495200()*-0.0690801);
}

double NNfunction-ss_sLuL::synapse0x34a06f0() {
   return (neuron0x3495540()*0.220487);
}

double NNfunction-ss_sLuL::synapse0x34a0730() {
   return (neuron0x3495880()*-0.593238);
}

double NNfunction-ss_sLuL::synapse0x34a0770() {
   return (neuron0x3495bc0()*0.110291);
}

double NNfunction-ss_sLuL::synapse0x34a07b0() {
   return (neuron0x3495f00()*-0.997615);
}

double NNfunction-ss_sLuL::synapse0x34a07f0() {
   return (neuron0x3496240()*-1.5952);
}

double NNfunction-ss_sLuL::synapse0x34a0280() {
   return (neuron0x3496580()*0.126577);
}

double NNfunction-ss_sLuL::synapse0x34a02c0() {
   return (neuron0x3496ae0()*0.301158);
}

double NNfunction-ss_sLuL::synapse0x34a0940() {
   return (neuron0x3496e20()*1.14804);
}

double NNfunction-ss_sLuL::synapse0x34a0980() {
   return (neuron0x3497160()*0.035708);
}

double NNfunction-ss_sLuL::synapse0x34a09c0() {
   return (neuron0x34974a0()*-0.976595);
}

double NNfunction-ss_sLuL::synapse0x34a0a00() {
   return (neuron0x34977e0()*0.945782);
}

double NNfunction-ss_sLuL::synapse0x34a0a40() {
   return (neuron0x3497b20()*-0.183324);
}

double NNfunction-ss_sLuL::synapse0x34a0a80() {
   return (neuron0x3497e60()*-0.0780862);
}

double NNfunction-ss_sLuL::synapse0x34a0c50() {
   return (neuron0x3493210()*-0.0847887);
}

double NNfunction-ss_sLuL::synapse0x34a9ce0() {
   return (neuron0x34934c0()*-0.136479);
}

double NNfunction-ss_sLuL::synapse0x34a9d20() {
   return (neuron0x3493800()*0.0213635);
}

double NNfunction-ss_sLuL::synapse0x34a9d60() {
   return (neuron0x3493b40()*-1.64586);
}

double NNfunction-ss_sLuL::synapse0x34a9da0() {
   return (neuron0x3493e80()*-0.418653);
}

double NNfunction-ss_sLuL::synapse0x34a9de0() {
   return (neuron0x34941c0()*0.232634);
}

double NNfunction-ss_sLuL::synapse0x34a9e20() {
   return (neuron0x3494500()*-0.661251);
}

double NNfunction-ss_sLuL::synapse0x34a9e60() {
   return (neuron0x3494840()*0.320752);
}

double NNfunction-ss_sLuL::synapse0x34a9ea0() {
   return (neuron0x3494b80()*-0.144327);
}

double NNfunction-ss_sLuL::synapse0x34a9ee0() {
   return (neuron0x3494ec0()*-0.163655);
}

double NNfunction-ss_sLuL::synapse0x34a9f20() {
   return (neuron0x3495200()*-0.317169);
}

double NNfunction-ss_sLuL::synapse0x34a9f60() {
   return (neuron0x3495540()*1.76777);
}

double NNfunction-ss_sLuL::synapse0x34a9fa0() {
   return (neuron0x3495880()*-0.872165);
}

double NNfunction-ss_sLuL::synapse0x34a9fe0() {
   return (neuron0x3495bc0()*-0.158877);
}

double NNfunction-ss_sLuL::synapse0x34aa020() {
   return (neuron0x3495f00()*0.10057);
}

double NNfunction-ss_sLuL::synapse0x34aa060() {
   return (neuron0x3496240()*-0.245449);
}

double NNfunction-ss_sLuL::synapse0x34a9b30() {
   return (neuron0x3496580()*-0.240707);
}

double NNfunction-ss_sLuL::synapse0x34a9b70() {
   return (neuron0x3496ae0()*0.199892);
}

double NNfunction-ss_sLuL::synapse0x34aa1b0() {
   return (neuron0x3496e20()*-0.149068);
}

double NNfunction-ss_sLuL::synapse0x34aa1f0() {
   return (neuron0x3497160()*-0.237682);
}

double NNfunction-ss_sLuL::synapse0x34aa230() {
   return (neuron0x34974a0()*0.136665);
}

double NNfunction-ss_sLuL::synapse0x34aa270() {
   return (neuron0x34977e0()*0.0230672);
}

double NNfunction-ss_sLuL::synapse0x34aa2b0() {
   return (neuron0x3497b20()*-0.0405439);
}

double NNfunction-ss_sLuL::synapse0x34aa2f0() {
   return (neuron0x3497e60()*-0.0978287);
}

double NNfunction-ss_sLuL::synapse0x34aa670() {
   return (neuron0x3493210()*-0.0487173);
}

double NNfunction-ss_sLuL::synapse0x34aa6b0() {
   return (neuron0x34934c0()*-0.0342001);
}

double NNfunction-ss_sLuL::synapse0x34aa6f0() {
   return (neuron0x3493800()*-0.406923);
}

double NNfunction-ss_sLuL::synapse0x34aa730() {
   return (neuron0x3493b40()*0.876939);
}

double NNfunction-ss_sLuL::synapse0x34aa770() {
   return (neuron0x3493e80()*-0.182066);
}

double NNfunction-ss_sLuL::synapse0x34aa7b0() {
   return (neuron0x34941c0()*0.0281237);
}

double NNfunction-ss_sLuL::synapse0x34aa7f0() {
   return (neuron0x3494500()*-0.298189);
}

double NNfunction-ss_sLuL::synapse0x34aa830() {
   return (neuron0x3494840()*-0.00379479);
}

double NNfunction-ss_sLuL::synapse0x34aa870() {
   return (neuron0x3494b80()*0.151505);
}

double NNfunction-ss_sLuL::synapse0x34aa8b0() {
   return (neuron0x3494ec0()*0.300597);
}

double NNfunction-ss_sLuL::synapse0x34aa8f0() {
   return (neuron0x3495200()*-0.00147105);
}

double NNfunction-ss_sLuL::synapse0x34aa930() {
   return (neuron0x3495540()*-2.06735);
}

double NNfunction-ss_sLuL::synapse0x34aa970() {
   return (neuron0x3495880()*-0.110708);
}

double NNfunction-ss_sLuL::synapse0x34aa9b0() {
   return (neuron0x3495bc0()*-0.2214);
}

double NNfunction-ss_sLuL::synapse0x34aa9f0() {
   return (neuron0x3495f00()*0.103497);
}

double NNfunction-ss_sLuL::synapse0x34aaa30() {
   return (neuron0x3496240()*-0.126131);
}

double NNfunction-ss_sLuL::synapse0x34aa4c0() {
   return (neuron0x3496580()*-0.0346169);
}

double NNfunction-ss_sLuL::synapse0x34aa500() {
   return (neuron0x3496ae0()*-0.150281);
}

double NNfunction-ss_sLuL::synapse0x34aab80() {
   return (neuron0x3496e20()*0.187827);
}

double NNfunction-ss_sLuL::synapse0x34aabc0() {
   return (neuron0x3497160()*-0.109546);
}

double NNfunction-ss_sLuL::synapse0x34aac00() {
   return (neuron0x34974a0()*0.592335);
}

double NNfunction-ss_sLuL::synapse0x34aac40() {
   return (neuron0x34977e0()*-0.156994);
}

double NNfunction-ss_sLuL::synapse0x34aac80() {
   return (neuron0x3497b20()*0.0304461);
}

double NNfunction-ss_sLuL::synapse0x34aacc0() {
   return (neuron0x3497e60()*-0.0389429);
}

double NNfunction-ss_sLuL::synapse0x34ab040() {
   return (neuron0x3493210()*-0.0750599);
}

double NNfunction-ss_sLuL::synapse0x34ab080() {
   return (neuron0x34934c0()*-0.0613155);
}

double NNfunction-ss_sLuL::synapse0x34ab0c0() {
   return (neuron0x3493800()*0.0575933);
}

double NNfunction-ss_sLuL::synapse0x34ab100() {
   return (neuron0x3493b40()*-2.64592);
}

double NNfunction-ss_sLuL::synapse0x34ab140() {
   return (neuron0x3493e80()*-0.0656209);
}

double NNfunction-ss_sLuL::synapse0x34ab180() {
   return (neuron0x34941c0()*-0.0353028);
}

double NNfunction-ss_sLuL::synapse0x34ab1c0() {
   return (neuron0x3494500()*-0.0816554);
}

double NNfunction-ss_sLuL::synapse0x34ab200() {
   return (neuron0x3494840()*-0.0144538);
}

double NNfunction-ss_sLuL::synapse0x34ab240() {
   return (neuron0x3494b80()*-0.0701054);
}

double NNfunction-ss_sLuL::synapse0x34ab280() {
   return (neuron0x3494ec0()*0.0349259);
}

double NNfunction-ss_sLuL::synapse0x34ab2c0() {
   return (neuron0x3495200()*-0.0735141);
}

double NNfunction-ss_sLuL::synapse0x34ab300() {
   return (neuron0x3495540()*-0.373269);
}

double NNfunction-ss_sLuL::synapse0x34ab340() {
   return (neuron0x3495880()*-0.335487);
}

double NNfunction-ss_sLuL::synapse0x34ab380() {
   return (neuron0x3495bc0()*-0.0147992);
}

double NNfunction-ss_sLuL::synapse0x34ab3c0() {
   return (neuron0x3495f00()*0.0104238);
}

double NNfunction-ss_sLuL::synapse0x34ab400() {
   return (neuron0x3496240()*0.0797104);
}

double NNfunction-ss_sLuL::synapse0x34aae90() {
   return (neuron0x3496580()*0.0559105);
}

double NNfunction-ss_sLuL::synapse0x34aaed0() {
   return (neuron0x3496ae0()*0.0420708);
}

double NNfunction-ss_sLuL::synapse0x34ab550() {
   return (neuron0x3496e20()*-0.0523455);
}

double NNfunction-ss_sLuL::synapse0x34ab590() {
   return (neuron0x3497160()*-0.0399871);
}

double NNfunction-ss_sLuL::synapse0x34ab5d0() {
   return (neuron0x34974a0()*-0.0133736);
}

double NNfunction-ss_sLuL::synapse0x34ab610() {
   return (neuron0x34977e0()*0.0102379);
}

double NNfunction-ss_sLuL::synapse0x34ab650() {
   return (neuron0x3497b20()*0.0536255);
}

double NNfunction-ss_sLuL::synapse0x34ab690() {
   return (neuron0x3497e60()*-0.0593938);
}

double NNfunction-ss_sLuL::synapse0x34aba10() {
   return (neuron0x3493210()*0.0196862);
}

double NNfunction-ss_sLuL::synapse0x34aba50() {
   return (neuron0x34934c0()*0.00278965);
}

double NNfunction-ss_sLuL::synapse0x34aba90() {
   return (neuron0x3493800()*0.571759);
}

double NNfunction-ss_sLuL::synapse0x34abad0() {
   return (neuron0x3493b40()*0.191518);
}

double NNfunction-ss_sLuL::synapse0x34abb10() {
   return (neuron0x3493e80()*0.275295);
}

double NNfunction-ss_sLuL::synapse0x34abb50() {
   return (neuron0x34941c0()*0.549555);
}

double NNfunction-ss_sLuL::synapse0x34abb90() {
   return (neuron0x3494500()*-0.523415);
}

double NNfunction-ss_sLuL::synapse0x34abbd0() {
   return (neuron0x3494840()*-0.483075);
}

double NNfunction-ss_sLuL::synapse0x34abc10() {
   return (neuron0x3494b80()*-0.0362299);
}

double NNfunction-ss_sLuL::synapse0x34abc50() {
   return (neuron0x3494ec0()*-0.140792);
}

double NNfunction-ss_sLuL::synapse0x34abc90() {
   return (neuron0x3495200()*-0.193879);
}

double NNfunction-ss_sLuL::synapse0x34abcd0() {
   return (neuron0x3495540()*0.894369);
}

double NNfunction-ss_sLuL::synapse0x34abd10() {
   return (neuron0x3495880()*-0.634453);
}

double NNfunction-ss_sLuL::synapse0x34abd50() {
   return (neuron0x3495bc0()*-0.410564);
}

double NNfunction-ss_sLuL::synapse0x34abd90() {
   return (neuron0x3495f00()*0.670294);
}

double NNfunction-ss_sLuL::synapse0x34abdd0() {
   return (neuron0x3496240()*-0.743321);
}

double NNfunction-ss_sLuL::synapse0x34ab860() {
   return (neuron0x3496580()*0.0630669);
}

double NNfunction-ss_sLuL::synapse0x34ab8a0() {
   return (neuron0x3496ae0()*-0.409511);
}

double NNfunction-ss_sLuL::synapse0x34abf20() {
   return (neuron0x3496e20()*0.105929);
}

double NNfunction-ss_sLuL::synapse0x34abf60() {
   return (neuron0x3497160()*0.429222);
}

double NNfunction-ss_sLuL::synapse0x34abfa0() {
   return (neuron0x34974a0()*0.164011);
}

double NNfunction-ss_sLuL::synapse0x34abfe0() {
   return (neuron0x34977e0()*0.129507);
}

double NNfunction-ss_sLuL::synapse0x34ac020() {
   return (neuron0x3497b20()*-0.631768);
}

double NNfunction-ss_sLuL::synapse0x34ac060() {
   return (neuron0x3497e60()*0.324164);
}

double NNfunction-ss_sLuL::synapse0x34ac3e0() {
   return (neuron0x3493210()*0.847642);
}

double NNfunction-ss_sLuL::synapse0x34ac420() {
   return (neuron0x34934c0()*-0.326861);
}

double NNfunction-ss_sLuL::synapse0x34ac460() {
   return (neuron0x3493800()*-0.00455711);
}

double NNfunction-ss_sLuL::synapse0x34ac4a0() {
   return (neuron0x3493b40()*0.298959);
}

double NNfunction-ss_sLuL::synapse0x34ac4e0() {
   return (neuron0x3493e80()*0.0224378);
}

double NNfunction-ss_sLuL::synapse0x34ac520() {
   return (neuron0x34941c0()*0.0876102);
}

double NNfunction-ss_sLuL::synapse0x34ac560() {
   return (neuron0x3494500()*0.442763);
}

double NNfunction-ss_sLuL::synapse0x34ac5a0() {
   return (neuron0x3494840()*-0.0595211);
}

double NNfunction-ss_sLuL::synapse0x34ac5e0() {
   return (neuron0x3494b80()*-0.106175);
}

double NNfunction-ss_sLuL::synapse0x34ac620() {
   return (neuron0x3494ec0()*0.0617406);
}

double NNfunction-ss_sLuL::synapse0x34ac660() {
   return (neuron0x3495200()*0.186721);
}

double NNfunction-ss_sLuL::synapse0x34ac6a0() {
   return (neuron0x3495540()*0.745893);
}

double NNfunction-ss_sLuL::synapse0x34ac6e0() {
   return (neuron0x3495880()*0.208531);
}

double NNfunction-ss_sLuL::synapse0x34ac720() {
   return (neuron0x3495bc0()*-0.224274);
}

double NNfunction-ss_sLuL::synapse0x34ac760() {
   return (neuron0x3495f00()*-0.281964);
}

double NNfunction-ss_sLuL::synapse0x34ac7a0() {
   return (neuron0x3496240()*-0.0299438);
}

double NNfunction-ss_sLuL::synapse0x34ac230() {
   return (neuron0x3496580()*-0.285477);
}

double NNfunction-ss_sLuL::synapse0x34ac270() {
   return (neuron0x3496ae0()*-0.0354965);
}

double NNfunction-ss_sLuL::synapse0x34ac8f0() {
   return (neuron0x3496e20()*0.0495318);
}

double NNfunction-ss_sLuL::synapse0x34ac930() {
   return (neuron0x3497160()*0.528769);
}

double NNfunction-ss_sLuL::synapse0x34ac970() {
   return (neuron0x34974a0()*-0.14768);
}

double NNfunction-ss_sLuL::synapse0x34ac9b0() {
   return (neuron0x34977e0()*0.0939831);
}

double NNfunction-ss_sLuL::synapse0x34ac9f0() {
   return (neuron0x3497b20()*-0.47326);
}

double NNfunction-ss_sLuL::synapse0x34aca30() {
   return (neuron0x3497e60()*0.239206);
}

double NNfunction-ss_sLuL::synapse0x34acdb0() {
   return (neuron0x3493210()*0.365326);
}

double NNfunction-ss_sLuL::synapse0x34acdf0() {
   return (neuron0x34934c0()*-0.570806);
}

double NNfunction-ss_sLuL::synapse0x34ace30() {
   return (neuron0x3493800()*0.647946);
}

double NNfunction-ss_sLuL::synapse0x34ace70() {
   return (neuron0x3493b40()*-0.0150554);
}

double NNfunction-ss_sLuL::synapse0x34aceb0() {
   return (neuron0x3493e80()*0.739215);
}

double NNfunction-ss_sLuL::synapse0x34acef0() {
   return (neuron0x34941c0()*-0.384301);
}

double NNfunction-ss_sLuL::synapse0x34acf30() {
   return (neuron0x3494500()*-0.878955);
}

double NNfunction-ss_sLuL::synapse0x34acf70() {
   return (neuron0x3494840()*0.035096);
}

double NNfunction-ss_sLuL::synapse0x34acfb0() {
   return (neuron0x3494b80()*-0.881601);
}

double NNfunction-ss_sLuL::synapse0x34acff0() {
   return (neuron0x3494ec0()*0.766436);
}

double NNfunction-ss_sLuL::synapse0x34ad030() {
   return (neuron0x3495200()*-1.14883);
}

double NNfunction-ss_sLuL::synapse0x34ad070() {
   return (neuron0x3495540()*0.893981);
}

double NNfunction-ss_sLuL::synapse0x34ad0b0() {
   return (neuron0x3495880()*0.028243);
}

double NNfunction-ss_sLuL::synapse0x34ad0f0() {
   return (neuron0x3495bc0()*1.03799);
}

double NNfunction-ss_sLuL::synapse0x34ad130() {
   return (neuron0x3495f00()*-0.414575);
}

double NNfunction-ss_sLuL::synapse0x34ad170() {
   return (neuron0x3496240()*-0.701632);
}

double NNfunction-ss_sLuL::synapse0x34acc00() {
   return (neuron0x3496580()*0.00992155);
}

double NNfunction-ss_sLuL::synapse0x34acc40() {
   return (neuron0x3496ae0()*-0.0301725);
}

double NNfunction-ss_sLuL::synapse0x34ad2c0() {
   return (neuron0x3496e20()*0.431522);
}

double NNfunction-ss_sLuL::synapse0x34ad300() {
   return (neuron0x3497160()*1.31627);
}

double NNfunction-ss_sLuL::synapse0x34ad340() {
   return (neuron0x34974a0()*0.228576);
}

double NNfunction-ss_sLuL::synapse0x34ad380() {
   return (neuron0x34977e0()*-0.0879747);
}

double NNfunction-ss_sLuL::synapse0x34ad3c0() {
   return (neuron0x3497b20()*0.280507);
}

double NNfunction-ss_sLuL::synapse0x34ad400() {
   return (neuron0x3497e60()*-0.016951);
}

double NNfunction-ss_sLuL::synapse0x34ad780() {
   return (neuron0x3493210()*0.0185782);
}

double NNfunction-ss_sLuL::synapse0x34ad7c0() {
   return (neuron0x34934c0()*-0.0569081);
}

double NNfunction-ss_sLuL::synapse0x34ad800() {
   return (neuron0x3493800()*0.465231);
}

double NNfunction-ss_sLuL::synapse0x34ad840() {
   return (neuron0x3493b40()*-1.00309);
}

double NNfunction-ss_sLuL::synapse0x34ad880() {
   return (neuron0x3493e80()*0.396204);
}

double NNfunction-ss_sLuL::synapse0x34ad8c0() {
   return (neuron0x34941c0()*-0.254209);
}

double NNfunction-ss_sLuL::synapse0x34ad900() {
   return (neuron0x3494500()*-0.544348);
}

double NNfunction-ss_sLuL::synapse0x34ad940() {
   return (neuron0x3494840()*-0.0795484);
}

double NNfunction-ss_sLuL::synapse0x34ad980() {
   return (neuron0x3494b80()*0.286141);
}

double NNfunction-ss_sLuL::synapse0x34ad9c0() {
   return (neuron0x3494ec0()*-0.401237);
}

double NNfunction-ss_sLuL::synapse0x34ada00() {
   return (neuron0x3495200()*-0.118797);
}

double NNfunction-ss_sLuL::synapse0x34ada40() {
   return (neuron0x3495540()*-0.767321);
}

double NNfunction-ss_sLuL::synapse0x34ada80() {
   return (neuron0x3495880()*-0.982137);
}

double NNfunction-ss_sLuL::synapse0x34adac0() {
   return (neuron0x3495bc0()*-0.365159);
}

double NNfunction-ss_sLuL::synapse0x34adb00() {
   return (neuron0x3495f00()*1.41663);
}

double NNfunction-ss_sLuL::synapse0x34adb40() {
   return (neuron0x3496240()*0.804333);
}

double NNfunction-ss_sLuL::synapse0x34ad5d0() {
   return (neuron0x3496580()*0.761733);
}

double NNfunction-ss_sLuL::synapse0x34ad610() {
   return (neuron0x3496ae0()*-0.56121);
}

double NNfunction-ss_sLuL::synapse0x34adc90() {
   return (neuron0x3496e20()*0.510535);
}

double NNfunction-ss_sLuL::synapse0x34adcd0() {
   return (neuron0x3497160()*1.07627);
}

double NNfunction-ss_sLuL::synapse0x34add10() {
   return (neuron0x34974a0()*-0.70341);
}

double NNfunction-ss_sLuL::synapse0x34add50() {
   return (neuron0x34977e0()*0.269691);
}

double NNfunction-ss_sLuL::synapse0x34add90() {
   return (neuron0x3497b20()*0.114618);
}

double NNfunction-ss_sLuL::synapse0x34addd0() {
   return (neuron0x3497e60()*-0.261826);
}

double NNfunction-ss_sLuL::synapse0x34ae150() {
   return (neuron0x3493210()*-0.0571208);
}

double NNfunction-ss_sLuL::synapse0x34ae190() {
   return (neuron0x34934c0()*-0.283854);
}

double NNfunction-ss_sLuL::synapse0x34ae1d0() {
   return (neuron0x3493800()*0.324605);
}

double NNfunction-ss_sLuL::synapse0x34ae210() {
   return (neuron0x3493b40()*-0.598662);
}

double NNfunction-ss_sLuL::synapse0x34ae250() {
   return (neuron0x3493e80()*0.490991);
}

double NNfunction-ss_sLuL::synapse0x34ae290() {
   return (neuron0x34941c0()*-0.298129);
}

double NNfunction-ss_sLuL::synapse0x34ae2d0() {
   return (neuron0x3494500()*-0.0656288);
}

double NNfunction-ss_sLuL::synapse0x34ae310() {
   return (neuron0x3494840()*0.0676848);
}

double NNfunction-ss_sLuL::synapse0x34ae350() {
   return (neuron0x3494b80()*-0.107288);
}

double NNfunction-ss_sLuL::synapse0x34ae390() {
   return (neuron0x3494ec0()*-0.508166);
}

double NNfunction-ss_sLuL::synapse0x34ae3d0() {
   return (neuron0x3495200()*0.535649);
}

double NNfunction-ss_sLuL::synapse0x34ae410() {
   return (neuron0x3495540()*-1.44265);
}

double NNfunction-ss_sLuL::synapse0x34ae450() {
   return (neuron0x3495880()*-0.0566929);
}

double NNfunction-ss_sLuL::synapse0x34ae490() {
   return (neuron0x3495bc0()*0.846061);
}

double NNfunction-ss_sLuL::synapse0x34ae4d0() {
   return (neuron0x3495f00()*0.185277);
}

double NNfunction-ss_sLuL::synapse0x34ae510() {
   return (neuron0x3496240()*-0.23806);
}

double NNfunction-ss_sLuL::synapse0x34adfa0() {
   return (neuron0x3496580()*0.238583);
}

double NNfunction-ss_sLuL::synapse0x34adfe0() {
   return (neuron0x3496ae0()*-0.0963931);
}

double NNfunction-ss_sLuL::synapse0x34ae660() {
   return (neuron0x3496e20()*0.00930157);
}

double NNfunction-ss_sLuL::synapse0x34ae6a0() {
   return (neuron0x3497160()*0.216027);
}

double NNfunction-ss_sLuL::synapse0x34ae6e0() {
   return (neuron0x34974a0()*-0.03361);
}

double NNfunction-ss_sLuL::synapse0x34ae720() {
   return (neuron0x34977e0()*0.0161777);
}

double NNfunction-ss_sLuL::synapse0x34ae760() {
   return (neuron0x3497b20()*-0.220248);
}

double NNfunction-ss_sLuL::synapse0x34ae7a0() {
   return (neuron0x3497e60()*-0.151545);
}

double NNfunction-ss_sLuL::synapse0x34aeb20() {
   return (neuron0x3493210()*0.157505);
}

double NNfunction-ss_sLuL::synapse0x34a30f0() {
   return (neuron0x34934c0()*0.371613);
}

double NNfunction-ss_sLuL::synapse0x34a3130() {
   return (neuron0x3493800()*-0.236822);
}

double NNfunction-ss_sLuL::synapse0x34a3170() {
   return (neuron0x3493b40()*-0.172986);
}

double NNfunction-ss_sLuL::synapse0x34a33c0() {
   return (neuron0x3493e80()*0.602726);
}

double NNfunction-ss_sLuL::synapse0x34a3400() {
   return (neuron0x34941c0()*0.283073);
}

double NNfunction-ss_sLuL::synapse0x34a3440() {
   return (neuron0x3494500()*0.594949);
}

double NNfunction-ss_sLuL::synapse0x34a3690() {
   return (neuron0x3494840()*-0.14591);
}

double NNfunction-ss_sLuL::synapse0x34a36d0() {
   return (neuron0x3494b80()*-0.247598);
}

double NNfunction-ss_sLuL::synapse0x34a3920() {
   return (neuron0x3494ec0()*0.0411648);
}

double NNfunction-ss_sLuL::synapse0x34a3960() {
   return (neuron0x3495200()*-0.436041);
}

double NNfunction-ss_sLuL::synapse0x34a39a0() {
   return (neuron0x3495540()*1.25351);
}

double NNfunction-ss_sLuL::synapse0x34a3bf0() {
   return (neuron0x3495880()*-1.95555);
}

double NNfunction-ss_sLuL::synapse0x34a3c30() {
   return (neuron0x3495bc0()*-0.642413);
}

double NNfunction-ss_sLuL::synapse0x34a3e80() {
   return (neuron0x3495f00()*-0.487559);
}

double NNfunction-ss_sLuL::synapse0x34a3ec0() {
   return (neuron0x3496240()*0.150952);
}

double NNfunction-ss_sLuL::synapse0x34ae970() {
   return (neuron0x3496580()*-0.0965451);
}

double NNfunction-ss_sLuL::synapse0x34ae9b0() {
   return (neuron0x3496ae0()*-0.394573);
}

double NNfunction-ss_sLuL::synapse0x34a4010() {
   return (neuron0x3496e20()*0.533141);
}

double NNfunction-ss_sLuL::synapse0x34a4520() {
   return (neuron0x3497160()*-0.277589);
}

double NNfunction-ss_sLuL::synapse0x34a4560() {
   return (neuron0x34974a0()*-1.02816);
}

double NNfunction-ss_sLuL::synapse0x34a45a0() {
   return (neuron0x34977e0()*0.363794);
}

double NNfunction-ss_sLuL::synapse0x34a47f0() {
   return (neuron0x3497b20()*0.767912);
}

double NNfunction-ss_sLuL::synapse0x34a4830() {
   return (neuron0x3497e60()*-0.215126);
}

double NNfunction-ss_sLuL::synapse0x34a40e0() {
   return (neuron0x3493210()*0.844624);
}

double NNfunction-ss_sLuL::synapse0x34a4120() {
   return (neuron0x34934c0()*-0.417456);
}

double NNfunction-ss_sLuL::synapse0x34a4160() {
   return (neuron0x3493800()*-0.142571);
}

double NNfunction-ss_sLuL::synapse0x34a41a0() {
   return (neuron0x3493b40()*0.670471);
}

double NNfunction-ss_sLuL::synapse0x34a4b20() {
   return (neuron0x3493e80()*0.571976);
}

double NNfunction-ss_sLuL::synapse0x34b0e70() {
   return (neuron0x34941c0()*0.242618);
}

double NNfunction-ss_sLuL::synapse0x34b0eb0() {
   return (neuron0x3494500()*0.166402);
}

double NNfunction-ss_sLuL::synapse0x34b0ef0() {
   return (neuron0x3494840()*0.0259315);
}

double NNfunction-ss_sLuL::synapse0x34b0f30() {
   return (neuron0x3494b80()*0.123034);
}

double NNfunction-ss_sLuL::synapse0x34b0f70() {
   return (neuron0x3494ec0()*0.257048);
}

double NNfunction-ss_sLuL::synapse0x34b0fb0() {
   return (neuron0x3495200()*-0.0694969);
}

double NNfunction-ss_sLuL::synapse0x34b0ff0() {
   return (neuron0x3495540()*0.522334);
}

double NNfunction-ss_sLuL::synapse0x34b1030() {
   return (neuron0x3495880()*-0.85882);
}

double NNfunction-ss_sLuL::synapse0x34b1070() {
   return (neuron0x3495bc0()*-0.0557762);
}

double NNfunction-ss_sLuL::synapse0x34b10b0() {
   return (neuron0x3495f00()*-0.0828954);
}

double NNfunction-ss_sLuL::synapse0x34b10f0() {
   return (neuron0x3496240()*-0.0290354);
}

double NNfunction-ss_sLuL::synapse0x34a4a00() {
   return (neuron0x3496580()*0.172977);
}

double NNfunction-ss_sLuL::synapse0x34a4a40() {
   return (neuron0x3496ae0()*0.621719);
}

double NNfunction-ss_sLuL::synapse0x34b1240() {
   return (neuron0x3496e20()*0.635273);
}

double NNfunction-ss_sLuL::synapse0x34b1280() {
   return (neuron0x3497160()*-0.0205608);
}

double NNfunction-ss_sLuL::synapse0x34b12c0() {
   return (neuron0x34974a0()*0.442109);
}

double NNfunction-ss_sLuL::synapse0x34b1300() {
   return (neuron0x34977e0()*-0.0478767);
}

double NNfunction-ss_sLuL::synapse0x34b1340() {
   return (neuron0x3497b20()*-0.307774);
}

double NNfunction-ss_sLuL::synapse0x34b1380() {
   return (neuron0x3497e60()*-0.467643);
}

double NNfunction-ss_sLuL::synapse0x34b1700() {
   return (neuron0x3493210()*-0.650985);
}

double NNfunction-ss_sLuL::synapse0x34b1740() {
   return (neuron0x34934c0()*-0.109618);
}

double NNfunction-ss_sLuL::synapse0x34b1780() {
   return (neuron0x3493800()*-0.444429);
}

double NNfunction-ss_sLuL::synapse0x34b17c0() {
   return (neuron0x3493b40()*0.0378035);
}

double NNfunction-ss_sLuL::synapse0x34b1800() {
   return (neuron0x3493e80()*0.482879);
}

double NNfunction-ss_sLuL::synapse0x34b1840() {
   return (neuron0x34941c0()*0.737182);
}

double NNfunction-ss_sLuL::synapse0x34b1880() {
   return (neuron0x3494500()*-0.427918);
}

double NNfunction-ss_sLuL::synapse0x34b18c0() {
   return (neuron0x3494840()*-0.000300039);
}

double NNfunction-ss_sLuL::synapse0x34b1900() {
   return (neuron0x3494b80()*0.998374);
}

double NNfunction-ss_sLuL::synapse0x34b1940() {
   return (neuron0x3494ec0()*-0.279244);
}

double NNfunction-ss_sLuL::synapse0x34b1980() {
   return (neuron0x3495200()*0.500625);
}

double NNfunction-ss_sLuL::synapse0x34b19c0() {
   return (neuron0x3495540()*-0.236453);
}

double NNfunction-ss_sLuL::synapse0x34b1a00() {
   return (neuron0x3495880()*0.0450365);
}

double NNfunction-ss_sLuL::synapse0x34b1a40() {
   return (neuron0x3495bc0()*-0.335985);
}

double NNfunction-ss_sLuL::synapse0x34b1a80() {
   return (neuron0x3495f00()*0.180078);
}

double NNfunction-ss_sLuL::synapse0x34b1ac0() {
   return (neuron0x3496240()*-0.245871);
}

double NNfunction-ss_sLuL::synapse0x34b1550() {
   return (neuron0x3496580()*0.299671);
}

double NNfunction-ss_sLuL::synapse0x34b1590() {
   return (neuron0x3496ae0()*-0.397305);
}

double NNfunction-ss_sLuL::synapse0x34b1c10() {
   return (neuron0x3496e20()*-0.388997);
}

double NNfunction-ss_sLuL::synapse0x34b1c50() {
   return (neuron0x3497160()*-0.128543);
}

double NNfunction-ss_sLuL::synapse0x34b1c90() {
   return (neuron0x34974a0()*-0.678778);
}

double NNfunction-ss_sLuL::synapse0x34b1cd0() {
   return (neuron0x34977e0()*-0.0625418);
}

double NNfunction-ss_sLuL::synapse0x34b1d10() {
   return (neuron0x3497b20()*0.103345);
}

double NNfunction-ss_sLuL::synapse0x34b1d50() {
   return (neuron0x3497e60()*0.0588467);
}

double NNfunction-ss_sLuL::synapse0x34b20d0() {
   return (neuron0x3493210()*0.0563977);
}

double NNfunction-ss_sLuL::synapse0x34b2110() {
   return (neuron0x34934c0()*-0.116582);
}

double NNfunction-ss_sLuL::synapse0x34b2150() {
   return (neuron0x3493800()*0.0550123);
}

double NNfunction-ss_sLuL::synapse0x34b2190() {
   return (neuron0x3493b40()*0.124701);
}

double NNfunction-ss_sLuL::synapse0x34b21d0() {
   return (neuron0x3493e80()*0.050855);
}

double NNfunction-ss_sLuL::synapse0x34b2210() {
   return (neuron0x34941c0()*-0.0293808);
}

double NNfunction-ss_sLuL::synapse0x34b2250() {
   return (neuron0x3494500()*-0.035445);
}

double NNfunction-ss_sLuL::synapse0x34b2290() {
   return (neuron0x3494840()*-0.0656433);
}

double NNfunction-ss_sLuL::synapse0x34b22d0() {
   return (neuron0x3494b80()*0.0017001);
}

double NNfunction-ss_sLuL::synapse0x34b2310() {
   return (neuron0x3494ec0()*-0.00423191);
}

double NNfunction-ss_sLuL::synapse0x34b2350() {
   return (neuron0x3495200()*0.0194258);
}

double NNfunction-ss_sLuL::synapse0x34b2390() {
   return (neuron0x3495540()*0.446971);
}

double NNfunction-ss_sLuL::synapse0x34b23d0() {
   return (neuron0x3495880()*0.249714);
}

double NNfunction-ss_sLuL::synapse0x34b2410() {
   return (neuron0x3495bc0()*-0.0343367);
}

double NNfunction-ss_sLuL::synapse0x34b2450() {
   return (neuron0x3495f00()*-0.436434);
}

double NNfunction-ss_sLuL::synapse0x34b2490() {
   return (neuron0x3496240()*-0.341772);
}

double NNfunction-ss_sLuL::synapse0x34b1f20() {
   return (neuron0x3496580()*-0.0750329);
}

double NNfunction-ss_sLuL::synapse0x34b1f60() {
   return (neuron0x3496ae0()*-0.304198);
}

double NNfunction-ss_sLuL::synapse0x34b25e0() {
   return (neuron0x3496e20()*-0.229151);
}

double NNfunction-ss_sLuL::synapse0x34b2620() {
   return (neuron0x3497160()*0.0275422);
}

double NNfunction-ss_sLuL::synapse0x34b2660() {
   return (neuron0x34974a0()*-0.0552279);
}

double NNfunction-ss_sLuL::synapse0x34b26a0() {
   return (neuron0x34977e0()*0.0364396);
}

double NNfunction-ss_sLuL::synapse0x34b26e0() {
   return (neuron0x3497b20()*0.0100644);
}

double NNfunction-ss_sLuL::synapse0x34b2720() {
   return (neuron0x3497e60()*0.0122408);
}

double NNfunction-ss_sLuL::synapse0x34b2aa0() {
   return (neuron0x3493210()*-0.331861);
}

double NNfunction-ss_sLuL::synapse0x34b2ae0() {
   return (neuron0x34934c0()*0.612092);
}

double NNfunction-ss_sLuL::synapse0x34b2b20() {
   return (neuron0x3493800()*-0.282679);
}

double NNfunction-ss_sLuL::synapse0x34b2b60() {
   return (neuron0x3493b40()*-0.0934592);
}

double NNfunction-ss_sLuL::synapse0x34b2ba0() {
   return (neuron0x3493e80()*-0.257645);
}

double NNfunction-ss_sLuL::synapse0x34b2be0() {
   return (neuron0x34941c0()*0.151007);
}

double NNfunction-ss_sLuL::synapse0x34b2c20() {
   return (neuron0x3494500()*0.0051956);
}

double NNfunction-ss_sLuL::synapse0x34b2c60() {
   return (neuron0x3494840()*0.683955);
}

double NNfunction-ss_sLuL::synapse0x34b2ca0() {
   return (neuron0x3494b80()*-0.520208);
}

double NNfunction-ss_sLuL::synapse0x34b2ce0() {
   return (neuron0x3494ec0()*0.0993572);
}

double NNfunction-ss_sLuL::synapse0x34b2d20() {
   return (neuron0x3495200()*-0.636002);
}

double NNfunction-ss_sLuL::synapse0x34b2d60() {
   return (neuron0x3495540()*-0.672607);
}

double NNfunction-ss_sLuL::synapse0x34b2da0() {
   return (neuron0x3495880()*0.0410578);
}

double NNfunction-ss_sLuL::synapse0x34b2de0() {
   return (neuron0x3495bc0()*-0.0168979);
}

double NNfunction-ss_sLuL::synapse0x34b2e20() {
   return (neuron0x3495f00()*-0.140675);
}

double NNfunction-ss_sLuL::synapse0x34b2e60() {
   return (neuron0x3496240()*-0.461461);
}

double NNfunction-ss_sLuL::synapse0x34b28f0() {
   return (neuron0x3496580()*0.192872);
}

double NNfunction-ss_sLuL::synapse0x34b2930() {
   return (neuron0x3496ae0()*0.364529);
}

double NNfunction-ss_sLuL::synapse0x34b2fb0() {
   return (neuron0x3496e20()*0.451097);
}

double NNfunction-ss_sLuL::synapse0x34b2ff0() {
   return (neuron0x3497160()*0.0278804);
}

double NNfunction-ss_sLuL::synapse0x34b3030() {
   return (neuron0x34974a0()*-0.882576);
}

double NNfunction-ss_sLuL::synapse0x34b3070() {
   return (neuron0x34977e0()*-0.0888993);
}

double NNfunction-ss_sLuL::synapse0x34b30b0() {
   return (neuron0x3497b20()*0.490688);
}

double NNfunction-ss_sLuL::synapse0x34b30f0() {
   return (neuron0x3497e60()*0.285982);
}

double NNfunction-ss_sLuL::synapse0x34b3470() {
   return (neuron0x3493210()*-0.0116423);
}

double NNfunction-ss_sLuL::synapse0x34b34b0() {
   return (neuron0x34934c0()*0.0204889);
}

double NNfunction-ss_sLuL::synapse0x34b34f0() {
   return (neuron0x3493800()*-0.0260726);
}

double NNfunction-ss_sLuL::synapse0x34b3530() {
   return (neuron0x3493b40()*-0.0531759);
}

double NNfunction-ss_sLuL::synapse0x34b3570() {
   return (neuron0x3493e80()*-0.0304884);
}

double NNfunction-ss_sLuL::synapse0x34b35b0() {
   return (neuron0x34941c0()*-0.0184351);
}

double NNfunction-ss_sLuL::synapse0x34b35f0() {
   return (neuron0x3494500()*0.0407355);
}

double NNfunction-ss_sLuL::synapse0x34b3630() {
   return (neuron0x3494840()*-0.00919132);
}

double NNfunction-ss_sLuL::synapse0x34b3670() {
   return (neuron0x3494b80()*-0.0260053);
}

double NNfunction-ss_sLuL::synapse0x34b36b0() {
   return (neuron0x3494ec0()*-0.0387444);
}

double NNfunction-ss_sLuL::synapse0x34b36f0() {
   return (neuron0x3495200()*0.0112702);
}

double NNfunction-ss_sLuL::synapse0x34b3730() {
   return (neuron0x3495540()*0.107);
}

double NNfunction-ss_sLuL::synapse0x34b3770() {
   return (neuron0x3495880()*-1.82846);
}

double NNfunction-ss_sLuL::synapse0x34b37b0() {
   return (neuron0x3495bc0()*-0.0124904);
}

double NNfunction-ss_sLuL::synapse0x34b37f0() {
   return (neuron0x3495f00()*-0.00626079);
}

double NNfunction-ss_sLuL::synapse0x34b3830() {
   return (neuron0x3496240()*0.0170249);
}

double NNfunction-ss_sLuL::synapse0x34b32c0() {
   return (neuron0x3496580()*0.0218384);
}

double NNfunction-ss_sLuL::synapse0x34b3300() {
   return (neuron0x3496ae0()*0.0167272);
}

double NNfunction-ss_sLuL::synapse0x34b3980() {
   return (neuron0x3496e20()*0.0251353);
}

double NNfunction-ss_sLuL::synapse0x34b39c0() {
   return (neuron0x3497160()*0.0253982);
}

double NNfunction-ss_sLuL::synapse0x34b3a00() {
   return (neuron0x34974a0()*-0.034177);
}

double NNfunction-ss_sLuL::synapse0x34b3a40() {
   return (neuron0x34977e0()*-0.00974592);
}

double NNfunction-ss_sLuL::synapse0x34b3a80() {
   return (neuron0x3497b20()*0.0319287);
}

double NNfunction-ss_sLuL::synapse0x34b3ac0() {
   return (neuron0x3497e60()*0.0248826);
}

double NNfunction-ss_sLuL::synapse0x34b3e40() {
   return (neuron0x3493210()*0.196352);
}

double NNfunction-ss_sLuL::synapse0x34b3e80() {
   return (neuron0x34934c0()*-0.302611);
}

double NNfunction-ss_sLuL::synapse0x34b3ec0() {
   return (neuron0x3493800()*-0.366215);
}

double NNfunction-ss_sLuL::synapse0x34b3f00() {
   return (neuron0x3493b40()*0.0486465);
}

double NNfunction-ss_sLuL::synapse0x34b3f40() {
   return (neuron0x3493e80()*-0.70031);
}

double NNfunction-ss_sLuL::synapse0x34b3f80() {
   return (neuron0x34941c0()*0.405108);
}

double NNfunction-ss_sLuL::synapse0x34b3fc0() {
   return (neuron0x3494500()*-0.516211);
}

double NNfunction-ss_sLuL::synapse0x34b4000() {
   return (neuron0x3494840()*0.565368);
}

double NNfunction-ss_sLuL::synapse0x34b4040() {
   return (neuron0x3494b80()*0.31971);
}

double NNfunction-ss_sLuL::synapse0x34b4080() {
   return (neuron0x3494ec0()*0.457095);
}

double NNfunction-ss_sLuL::synapse0x34b40c0() {
   return (neuron0x3495200()*0.713431);
}

double NNfunction-ss_sLuL::synapse0x34b4100() {
   return (neuron0x3495540()*-0.0743723);
}

double NNfunction-ss_sLuL::synapse0x34b4140() {
   return (neuron0x3495880()*0.0314215);
}

double NNfunction-ss_sLuL::synapse0x34b4180() {
   return (neuron0x3495bc0()*0.392194);
}

double NNfunction-ss_sLuL::synapse0x34b41c0() {
   return (neuron0x3495f00()*-0.442148);
}

double NNfunction-ss_sLuL::synapse0x34b4200() {
   return (neuron0x3496240()*-0.15362);
}

double NNfunction-ss_sLuL::synapse0x34b3c90() {
   return (neuron0x3496580()*0.341777);
}

double NNfunction-ss_sLuL::synapse0x34b3cd0() {
   return (neuron0x3496ae0()*0.259926);
}

double NNfunction-ss_sLuL::synapse0x34b4350() {
   return (neuron0x3496e20()*0.06916);
}

double NNfunction-ss_sLuL::synapse0x34b4390() {
   return (neuron0x3497160()*-0.0981486);
}

double NNfunction-ss_sLuL::synapse0x34b43d0() {
   return (neuron0x34974a0()*0.46525);
}

double NNfunction-ss_sLuL::synapse0x34b4410() {
   return (neuron0x34977e0()*0.229328);
}

double NNfunction-ss_sLuL::synapse0x34b4450() {
   return (neuron0x3497b20()*-0.872991);
}

double NNfunction-ss_sLuL::synapse0x34b4490() {
   return (neuron0x3497e60()*-0.00500112);
}

double NNfunction-ss_sLuL::synapse0x34b4810() {
   return (neuron0x3493210()*-0.0477098);
}

double NNfunction-ss_sLuL::synapse0x34b4850() {
   return (neuron0x34934c0()*0.099681);
}

double NNfunction-ss_sLuL::synapse0x34b4890() {
   return (neuron0x3493800()*0.0812477);
}

double NNfunction-ss_sLuL::synapse0x34b48d0() {
   return (neuron0x3493b40()*-1.27931);
}

double NNfunction-ss_sLuL::synapse0x34b4910() {
   return (neuron0x3493e80()*-0.89845);
}

double NNfunction-ss_sLuL::synapse0x34b4950() {
   return (neuron0x34941c0()*0.203969);
}

double NNfunction-ss_sLuL::synapse0x34b4990() {
   return (neuron0x3494500()*-0.154316);
}

double NNfunction-ss_sLuL::synapse0x34b49d0() {
   return (neuron0x3494840()*-0.183762);
}

double NNfunction-ss_sLuL::synapse0x34b4a10() {
   return (neuron0x3494b80()*0.166256);
}

double NNfunction-ss_sLuL::synapse0x34b4a50() {
   return (neuron0x3494ec0()*0.0947189);
}

double NNfunction-ss_sLuL::synapse0x34b4a90() {
   return (neuron0x3495200()*0.337023);
}

double NNfunction-ss_sLuL::synapse0x34b4ad0() {
   return (neuron0x3495540()*-0.390157);
}

double NNfunction-ss_sLuL::synapse0x34b4b10() {
   return (neuron0x3495880()*-0.667479);
}

double NNfunction-ss_sLuL::synapse0x34b4b50() {
   return (neuron0x3495bc0()*0.0048784);
}

double NNfunction-ss_sLuL::synapse0x34b4b90() {
   return (neuron0x3495f00()*-0.0493947);
}

double NNfunction-ss_sLuL::synapse0x34b4bd0() {
   return (neuron0x3496240()*0.0541002);
}

double NNfunction-ss_sLuL::synapse0x34b4660() {
   return (neuron0x3496580()*-0.254707);
}

double NNfunction-ss_sLuL::synapse0x34b46a0() {
   return (neuron0x3496ae0()*-0.585557);
}

double NNfunction-ss_sLuL::synapse0x34b4d20() {
   return (neuron0x3496e20()*-0.223757);
}

double NNfunction-ss_sLuL::synapse0x34b4d60() {
   return (neuron0x3497160()*-0.362772);
}

double NNfunction-ss_sLuL::synapse0x34b4da0() {
   return (neuron0x34974a0()*-0.130197);
}

double NNfunction-ss_sLuL::synapse0x34b4de0() {
   return (neuron0x34977e0()*-0.357851);
}

double NNfunction-ss_sLuL::synapse0x34b4e20() {
   return (neuron0x3497b20()*0.483031);
}

double NNfunction-ss_sLuL::synapse0x34b4e60() {
   return (neuron0x3497e60()*-0.0469174);
}

double NNfunction-ss_sLuL::synapse0x34b51e0() {
   return (neuron0x3493210()*0.405058);
}

double NNfunction-ss_sLuL::synapse0x34b5220() {
   return (neuron0x34934c0()*-0.637923);
}

double NNfunction-ss_sLuL::synapse0x34b5260() {
   return (neuron0x3493800()*-0.227592);
}

double NNfunction-ss_sLuL::synapse0x34b52a0() {
   return (neuron0x3493b40()*-1.60502);
}

double NNfunction-ss_sLuL::synapse0x34b52e0() {
   return (neuron0x3493e80()*0.0574074);
}

double NNfunction-ss_sLuL::synapse0x34b5320() {
   return (neuron0x34941c0()*0.467834);
}

double NNfunction-ss_sLuL::synapse0x34b5360() {
   return (neuron0x3494500()*0.106065);
}

double NNfunction-ss_sLuL::synapse0x34b53a0() {
   return (neuron0x3494840()*-0.235969);
}

double NNfunction-ss_sLuL::synapse0x34b53e0() {
   return (neuron0x3494b80()*0.0384726);
}

double NNfunction-ss_sLuL::synapse0x34b5420() {
   return (neuron0x3494ec0()*-0.157388);
}

double NNfunction-ss_sLuL::synapse0x34b5460() {
   return (neuron0x3495200()*-0.273095);
}

double NNfunction-ss_sLuL::synapse0x34b54a0() {
   return (neuron0x3495540()*-0.279314);
}

double NNfunction-ss_sLuL::synapse0x34b54e0() {
   return (neuron0x3495880()*-0.435099);
}

double NNfunction-ss_sLuL::synapse0x34b5520() {
   return (neuron0x3495bc0()*0.453093);
}

double NNfunction-ss_sLuL::synapse0x34b5560() {
   return (neuron0x3495f00()*0.756269);
}

double NNfunction-ss_sLuL::synapse0x34b55a0() {
   return (neuron0x3496240()*0.937284);
}

double NNfunction-ss_sLuL::synapse0x34b5030() {
   return (neuron0x3496580()*0.0964156);
}

double NNfunction-ss_sLuL::synapse0x34b5070() {
   return (neuron0x3496ae0()*0.91907);
}

double NNfunction-ss_sLuL::synapse0x34b56f0() {
   return (neuron0x3496e20()*-1.14202);
}

double NNfunction-ss_sLuL::synapse0x34b5730() {
   return (neuron0x3497160()*0.396949);
}

double NNfunction-ss_sLuL::synapse0x34b5770() {
   return (neuron0x34974a0()*0.503943);
}

double NNfunction-ss_sLuL::synapse0x34b57b0() {
   return (neuron0x34977e0()*-0.85052);
}

double NNfunction-ss_sLuL::synapse0x34b57f0() {
   return (neuron0x3497b20()*0.274078);
}

double NNfunction-ss_sLuL::synapse0x34b5830() {
   return (neuron0x3497e60()*-0.0774085);
}

double NNfunction-ss_sLuL::synapse0x349e2e0() {
   return (neuron0x3493210()*0.0933579);
}

double NNfunction-ss_sLuL::synapse0x349e320() {
   return (neuron0x34934c0()*0.223001);
}

double NNfunction-ss_sLuL::synapse0x349e360() {
   return (neuron0x3493800()*-1.03783);
}

double NNfunction-ss_sLuL::synapse0x349e3a0() {
   return (neuron0x3493b40()*0.134146);
}

double NNfunction-ss_sLuL::synapse0x349e3e0() {
   return (neuron0x3493e80()*-0.254027);
}

double NNfunction-ss_sLuL::synapse0x349e420() {
   return (neuron0x34941c0()*-0.668262);
}

double NNfunction-ss_sLuL::synapse0x349e460() {
   return (neuron0x3494500()*0.100711);
}

double NNfunction-ss_sLuL::synapse0x349e4a0() {
   return (neuron0x3494840()*-0.432136);
}

double NNfunction-ss_sLuL::synapse0x34b5fc0() {
   return (neuron0x3494b80()*0.504707);
}

double NNfunction-ss_sLuL::synapse0x34b6000() {
   return (neuron0x3494ec0()*0.704082);
}

double NNfunction-ss_sLuL::synapse0x34b6040() {
   return (neuron0x3495200()*-0.422069);
}

double NNfunction-ss_sLuL::synapse0x34b6080() {
   return (neuron0x3495540()*0.376018);
}

double NNfunction-ss_sLuL::synapse0x34b60c0() {
   return (neuron0x3495880()*0.911887);
}

double NNfunction-ss_sLuL::synapse0x34b6100() {
   return (neuron0x3495bc0()*1.19291);
}

double NNfunction-ss_sLuL::synapse0x34b6140() {
   return (neuron0x3495f00()*0.358553);
}

double NNfunction-ss_sLuL::synapse0x34b6180() {
   return (neuron0x3496240()*-0.800201);
}

double NNfunction-ss_sLuL::synapse0x34b5a00() {
   return (neuron0x3496580()*0.302672);
}

double NNfunction-ss_sLuL::synapse0x34b5a40() {
   return (neuron0x3496ae0()*-0.276804);
}

double NNfunction-ss_sLuL::synapse0x34b62d0() {
   return (neuron0x3496e20()*0.27192);
}

double NNfunction-ss_sLuL::synapse0x34b6310() {
   return (neuron0x3497160()*-0.784218);
}

double NNfunction-ss_sLuL::synapse0x34b6350() {
   return (neuron0x34974a0()*-0.658699);
}

double NNfunction-ss_sLuL::synapse0x34b6390() {
   return (neuron0x34977e0()*-0.0476814);
}

double NNfunction-ss_sLuL::synapse0x34b63d0() {
   return (neuron0x3497b20()*0.451066);
}

double NNfunction-ss_sLuL::synapse0x34b6410() {
   return (neuron0x3497e60()*0.11381);
}

double NNfunction-ss_sLuL::synapse0x34b6790() {
   return (neuron0x3493210()*-0.016274);
}

double NNfunction-ss_sLuL::synapse0x34b67d0() {
   return (neuron0x34934c0()*0.00808527);
}

double NNfunction-ss_sLuL::synapse0x34b6810() {
   return (neuron0x3493800()*-0.00539792);
}

double NNfunction-ss_sLuL::synapse0x34b6850() {
   return (neuron0x3493b40()*7.40361);
}

double NNfunction-ss_sLuL::synapse0x34b6890() {
   return (neuron0x3493e80()*-0.0114207);
}

double NNfunction-ss_sLuL::synapse0x34b68d0() {
   return (neuron0x34941c0()*0.000374725);
}

double NNfunction-ss_sLuL::synapse0x34b6910() {
   return (neuron0x3494500()*0.00868335);
}

double NNfunction-ss_sLuL::synapse0x34b6950() {
   return (neuron0x3494840()*-0.00021074);
}

double NNfunction-ss_sLuL::synapse0x34b6990() {
   return (neuron0x3494b80()*0.00863576);
}

double NNfunction-ss_sLuL::synapse0x34b69d0() {
   return (neuron0x3494ec0()*0.00792445);
}

double NNfunction-ss_sLuL::synapse0x34b6a10() {
   return (neuron0x3495200()*-0.0254668);
}

double NNfunction-ss_sLuL::synapse0x34b6a50() {
   return (neuron0x3495540()*0.14446);
}

double NNfunction-ss_sLuL::synapse0x34b6a90() {
   return (neuron0x3495880()*0.13034);
}

double NNfunction-ss_sLuL::synapse0x34b6ad0() {
   return (neuron0x3495bc0()*0.00717915);
}

double NNfunction-ss_sLuL::synapse0x34b6b10() {
   return (neuron0x3495f00()*0.0204715);
}

double NNfunction-ss_sLuL::synapse0x34b6b50() {
   return (neuron0x3496240()*0.0194671);
}

double NNfunction-ss_sLuL::synapse0x34b65e0() {
   return (neuron0x3496580()*-0.0392051);
}

double NNfunction-ss_sLuL::synapse0x34b6620() {
   return (neuron0x3496ae0()*-0.0254444);
}

double NNfunction-ss_sLuL::synapse0x34b6ca0() {
   return (neuron0x3496e20()*-0.0124162);
}

double NNfunction-ss_sLuL::synapse0x34b6ce0() {
   return (neuron0x3497160()*0.0188566);
}

double NNfunction-ss_sLuL::synapse0x34b6d20() {
   return (neuron0x34974a0()*0.0454618);
}

double NNfunction-ss_sLuL::synapse0x34b6d60() {
   return (neuron0x34977e0()*0.0127756);
}

double NNfunction-ss_sLuL::synapse0x34b6da0() {
   return (neuron0x3497b20()*0.00675377);
}

double NNfunction-ss_sLuL::synapse0x34b6de0() {
   return (neuron0x3497e60()*0.0310665);
}

double NNfunction-ss_sLuL::synapse0x34b7160() {
   return (neuron0x3493210()*0.0245598);
}

double NNfunction-ss_sLuL::synapse0x34b71a0() {
   return (neuron0x34934c0()*-0.0571576);
}

double NNfunction-ss_sLuL::synapse0x34b71e0() {
   return (neuron0x3493800()*0.163721);
}

double NNfunction-ss_sLuL::synapse0x34b7220() {
   return (neuron0x3493b40()*0.103967);
}

double NNfunction-ss_sLuL::synapse0x34b7260() {
   return (neuron0x3493e80()*-0.00205359);
}

double NNfunction-ss_sLuL::synapse0x34b72a0() {
   return (neuron0x34941c0()*0.00427772);
}

double NNfunction-ss_sLuL::synapse0x34b72e0() {
   return (neuron0x3494500()*0.0020356);
}

double NNfunction-ss_sLuL::synapse0x34b7320() {
   return (neuron0x3494840()*-0.0760888);
}

double NNfunction-ss_sLuL::synapse0x34b7360() {
   return (neuron0x3494b80()*-0.0484981);
}

double NNfunction-ss_sLuL::synapse0x34b73a0() {
   return (neuron0x3494ec0()*-0.0245707);
}

double NNfunction-ss_sLuL::synapse0x34b73e0() {
   return (neuron0x3495200()*-0.0157444);
}

double NNfunction-ss_sLuL::synapse0x34b7420() {
   return (neuron0x3495540()*0.313513);
}

double NNfunction-ss_sLuL::synapse0x34b7460() {
   return (neuron0x3495880()*0.276218);
}

double NNfunction-ss_sLuL::synapse0x34b74a0() {
   return (neuron0x3495bc0()*-0.157791);
}

double NNfunction-ss_sLuL::synapse0x34b74e0() {
   return (neuron0x3495f00()*0.0458721);
}

double NNfunction-ss_sLuL::synapse0x34b7520() {
   return (neuron0x3496240()*0.166337);
}

double NNfunction-ss_sLuL::synapse0x34b6fb0() {
   return (neuron0x3496580()*-0.117824);
}

double NNfunction-ss_sLuL::synapse0x34b6ff0() {
   return (neuron0x3496ae0()*0.0814801);
}

double NNfunction-ss_sLuL::synapse0x34a7b20() {
   return (neuron0x3496e20()*0.13859);
}

double NNfunction-ss_sLuL::synapse0x34a7b60() {
   return (neuron0x3497160()*0.00038425);
}

double NNfunction-ss_sLuL::synapse0x34a7ba0() {
   return (neuron0x34974a0()*-0.258043);
}

double NNfunction-ss_sLuL::synapse0x34a7be0() {
   return (neuron0x34977e0()*0.0135893);
}

double NNfunction-ss_sLuL::synapse0x34a7c20() {
   return (neuron0x3497b20()*0.0734857);
}

double NNfunction-ss_sLuL::synapse0x34a7c60() {
   return (neuron0x3497e60()*0.0874264);
}

double NNfunction-ss_sLuL::synapse0x34a7fe0() {
   return (neuron0x3493210()*-0.0179688);
}

double NNfunction-ss_sLuL::synapse0x34a8020() {
   return (neuron0x34934c0()*-0.0247436);
}

double NNfunction-ss_sLuL::synapse0x34a8060() {
   return (neuron0x3493800()*0.0127001);
}

double NNfunction-ss_sLuL::synapse0x34a80a0() {
   return (neuron0x3493b40()*-0.596302);
}

double NNfunction-ss_sLuL::synapse0x34a80e0() {
   return (neuron0x3493e80()*0.0208465);
}

double NNfunction-ss_sLuL::synapse0x34a8120() {
   return (neuron0x34941c0()*-0.0404182);
}

double NNfunction-ss_sLuL::synapse0x34a8160() {
   return (neuron0x3494500()*0.0133775);
}

double NNfunction-ss_sLuL::synapse0x34a81a0() {
   return (neuron0x3494840()*-0.00436798);
}

double NNfunction-ss_sLuL::synapse0x34a81e0() {
   return (neuron0x3494b80()*-0.0220783);
}

double NNfunction-ss_sLuL::synapse0x34a8220() {
   return (neuron0x3494ec0()*-0.0251097);
}

double NNfunction-ss_sLuL::synapse0x34a8260() {
   return (neuron0x3495200()*0.00242403);
}

double NNfunction-ss_sLuL::synapse0x34a82a0() {
   return (neuron0x3495540()*0.295413);
}

double NNfunction-ss_sLuL::synapse0x34a82e0() {
   return (neuron0x3495880()*0.352573);
}

double NNfunction-ss_sLuL::synapse0x34a8320() {
   return (neuron0x3495bc0()*-0.0109788);
}

double NNfunction-ss_sLuL::synapse0x34a8360() {
   return (neuron0x3495f00()*-0.0115395);
}

double NNfunction-ss_sLuL::synapse0x34a83a0() {
   return (neuron0x3496240()*1.93321e-05);
}

double NNfunction-ss_sLuL::synapse0x34a7e30() {
   return (neuron0x3496580()*-0.0528274);
}

double NNfunction-ss_sLuL::synapse0x34a7e70() {
   return (neuron0x3496ae0()*-0.0306617);
}

double NNfunction-ss_sLuL::synapse0x34a84f0() {
   return (neuron0x3496e20()*-0.0286471);
}

double NNfunction-ss_sLuL::synapse0x34a8530() {
   return (neuron0x3497160()*0.0191977);
}

double NNfunction-ss_sLuL::synapse0x34a8570() {
   return (neuron0x34974a0()*0.0103554);
}

double NNfunction-ss_sLuL::synapse0x34a85b0() {
   return (neuron0x34977e0()*0.00649274);
}

double NNfunction-ss_sLuL::synapse0x34a85f0() {
   return (neuron0x3497b20()*0.0369317);
}

double NNfunction-ss_sLuL::synapse0x34a8630() {
   return (neuron0x3497e60()*0.00553278);
}

double NNfunction-ss_sLuL::synapse0x34a89b0() {
   return (neuron0x3493210()*0.207241);
}

double NNfunction-ss_sLuL::synapse0x34a89f0() {
   return (neuron0x34934c0()*-0.63417);
}

double NNfunction-ss_sLuL::synapse0x34a8a30() {
   return (neuron0x3493800()*-0.633616);
}

double NNfunction-ss_sLuL::synapse0x34a8a70() {
   return (neuron0x3493b40()*-0.364995);
}

double NNfunction-ss_sLuL::synapse0x34a8ab0() {
   return (neuron0x3493e80()*0.325345);
}

double NNfunction-ss_sLuL::synapse0x34a8af0() {
   return (neuron0x34941c0()*0.271636);
}

double NNfunction-ss_sLuL::synapse0x34a8b30() {
   return (neuron0x3494500()*0.203356);
}

double NNfunction-ss_sLuL::synapse0x34a8b70() {
   return (neuron0x3494840()*0.0149614);
}

double NNfunction-ss_sLuL::synapse0x34a8bb0() {
   return (neuron0x3494b80()*-0.118225);
}

double NNfunction-ss_sLuL::synapse0x34a8bf0() {
   return (neuron0x3494ec0()*0.00033318);
}

double NNfunction-ss_sLuL::synapse0x34a8c30() {
   return (neuron0x3495200()*-0.305714);
}

double NNfunction-ss_sLuL::synapse0x34a8c70() {
   return (neuron0x3495540()*0.274866);
}

double NNfunction-ss_sLuL::synapse0x34a8cb0() {
   return (neuron0x3495880()*0.578336);
}

double NNfunction-ss_sLuL::synapse0x34a8cf0() {
   return (neuron0x3495bc0()*0.66697);
}

double NNfunction-ss_sLuL::synapse0x34a8d30() {
   return (neuron0x3495f00()*0.718712);
}

double NNfunction-ss_sLuL::synapse0x34a8d70() {
   return (neuron0x3496240()*-0.879776);
}

double NNfunction-ss_sLuL::synapse0x34a8800() {
   return (neuron0x3496580()*-0.499204);
}

double NNfunction-ss_sLuL::synapse0x34a8840() {
   return (neuron0x3496ae0()*-0.630825);
}

double NNfunction-ss_sLuL::synapse0x34a8ec0() {
   return (neuron0x3496e20()*-0.211089);
}

double NNfunction-ss_sLuL::synapse0x34a8f00() {
   return (neuron0x3497160()*-0.960985);
}

double NNfunction-ss_sLuL::synapse0x34a8f40() {
   return (neuron0x34974a0()*0.0118864);
}

double NNfunction-ss_sLuL::synapse0x34a8f80() {
   return (neuron0x34977e0()*-0.43246);
}

double NNfunction-ss_sLuL::synapse0x34a8fc0() {
   return (neuron0x3497b20()*0.26433);
}

double NNfunction-ss_sLuL::synapse0x34a9000() {
   return (neuron0x3497e60()*0.564332);
}

double NNfunction-ss_sLuL::synapse0x34a9380() {
   return (neuron0x3493210()*0.0416164);
}

double NNfunction-ss_sLuL::synapse0x34a93c0() {
   return (neuron0x34934c0()*0.00456755);
}

double NNfunction-ss_sLuL::synapse0x34a9400() {
   return (neuron0x3493800()*0.00572604);
}

double NNfunction-ss_sLuL::synapse0x34a9440() {
   return (neuron0x3493b40()*-1.04324);
}

double NNfunction-ss_sLuL::synapse0x34a9480() {
   return (neuron0x3493e80()*-0.00807804);
}

double NNfunction-ss_sLuL::synapse0x34a94c0() {
   return (neuron0x34941c0()*0.0170277);
}

double NNfunction-ss_sLuL::synapse0x34a9500() {
   return (neuron0x3494500()*0.0168208);
}

double NNfunction-ss_sLuL::synapse0x34a9540() {
   return (neuron0x3494840()*-0.0119686);
}

double NNfunction-ss_sLuL::synapse0x34a9580() {
   return (neuron0x3494b80()*0.0380587);
}

double NNfunction-ss_sLuL::synapse0x34a95c0() {
   return (neuron0x3494ec0()*0.0386194);
}

double NNfunction-ss_sLuL::synapse0x34a9600() {
   return (neuron0x3495200()*0.0289373);
}

double NNfunction-ss_sLuL::synapse0x34a9640() {
   return (neuron0x3495540()*0.119386);
}

double NNfunction-ss_sLuL::synapse0x34a9680() {
   return (neuron0x3495880()*0.199671);
}

double NNfunction-ss_sLuL::synapse0x34a96c0() {
   return (neuron0x3495bc0()*0.00727337);
}

double NNfunction-ss_sLuL::synapse0x34a9700() {
   return (neuron0x3495f00()*-0.00610383);
}

double NNfunction-ss_sLuL::synapse0x34a9740() {
   return (neuron0x3496240()*-0.016171);
}

double NNfunction-ss_sLuL::synapse0x34a91d0() {
   return (neuron0x3496580()*0.0393147);
}

double NNfunction-ss_sLuL::synapse0x34a9210() {
   return (neuron0x3496ae0()*-0.00298219);
}

double NNfunction-ss_sLuL::synapse0x34a9890() {
   return (neuron0x3496e20()*0.0384672);
}

double NNfunction-ss_sLuL::synapse0x34a98d0() {
   return (neuron0x3497160()*0.0101641);
}

double NNfunction-ss_sLuL::synapse0x34a9910() {
   return (neuron0x34974a0()*-0.0360223);
}

double NNfunction-ss_sLuL::synapse0x34a9950() {
   return (neuron0x34977e0()*-0.0268517);
}

double NNfunction-ss_sLuL::synapse0x34a9990() {
   return (neuron0x3497b20()*-0.016058);
}

double NNfunction-ss_sLuL::synapse0x34a99d0() {
   return (neuron0x3497e60()*0.00342621);
}

double NNfunction-ss_sLuL::synapse0x34bb8a0() {
   return (neuron0x3493210()*-0.281382);
}

double NNfunction-ss_sLuL::synapse0x34bb8e0() {
   return (neuron0x34934c0()*0.356091);
}

double NNfunction-ss_sLuL::synapse0x34bb920() {
   return (neuron0x3493800()*-0.262259);
}

double NNfunction-ss_sLuL::synapse0x34bb960() {
   return (neuron0x3493b40()*-0.192522);
}

double NNfunction-ss_sLuL::synapse0x34bb9a0() {
   return (neuron0x3493e80()*-0.423792);
}

double NNfunction-ss_sLuL::synapse0x34bb9e0() {
   return (neuron0x34941c0()*-0.275188);
}

double NNfunction-ss_sLuL::synapse0x34bba20() {
   return (neuron0x3494500()*-0.0720173);
}

double NNfunction-ss_sLuL::synapse0x34bba60() {
   return (neuron0x3494840()*-0.468064);
}

double NNfunction-ss_sLuL::synapse0x34bbaa0() {
   return (neuron0x3494b80()*-0.538171);
}

double NNfunction-ss_sLuL::synapse0x34bbae0() {
   return (neuron0x3494ec0()*-0.290108);
}

double NNfunction-ss_sLuL::synapse0x34bbb20() {
   return (neuron0x3495200()*0.264138);
}

double NNfunction-ss_sLuL::synapse0x34bbb60() {
   return (neuron0x3495540()*-0.278767);
}

double NNfunction-ss_sLuL::synapse0x34bbba0() {
   return (neuron0x3495880()*0.86319);
}

double NNfunction-ss_sLuL::synapse0x34bbbe0() {
   return (neuron0x3495bc0()*0.213622);
}

double NNfunction-ss_sLuL::synapse0x34bbc20() {
   return (neuron0x3495f00()*0.29187);
}

double NNfunction-ss_sLuL::synapse0x34bbc60() {
   return (neuron0x3496240()*-0.0095632);
}

double NNfunction-ss_sLuL::synapse0x34a9a10() {
   return (neuron0x3496580()*-0.110634);
}

double NNfunction-ss_sLuL::synapse0x34a9a50() {
   return (neuron0x3496ae0()*-0.687594);
}

double NNfunction-ss_sLuL::synapse0x34bbdb0() {
   return (neuron0x3496e20()*-0.492496);
}

double NNfunction-ss_sLuL::synapse0x34bbdf0() {
   return (neuron0x3497160()*-0.127847);
}

double NNfunction-ss_sLuL::synapse0x34bbe30() {
   return (neuron0x34974a0()*-0.314703);
}

double NNfunction-ss_sLuL::synapse0x34bbe70() {
   return (neuron0x34977e0()*-0.0193595);
}

double NNfunction-ss_sLuL::synapse0x34bbeb0() {
   return (neuron0x3497b20()*-0.0231441);
}

double NNfunction-ss_sLuL::synapse0x34bbef0() {
   return (neuron0x3497e60()*0.453427);
}

double NNfunction-ss_sLuL::synapse0x34bc270() {
   return (neuron0x3493210()*-2.26934e-05);
}

double NNfunction-ss_sLuL::synapse0x34bc2b0() {
   return (neuron0x34934c0()*0.0840897);
}

double NNfunction-ss_sLuL::synapse0x34bc2f0() {
   return (neuron0x3493800()*-0.0739543);
}

double NNfunction-ss_sLuL::synapse0x34bc330() {
   return (neuron0x3493b40()*1.30674);
}

double NNfunction-ss_sLuL::synapse0x34bc370() {
   return (neuron0x3493e80()*0.00609432);
}

double NNfunction-ss_sLuL::synapse0x34bc3b0() {
   return (neuron0x34941c0()*0.0235092);
}

double NNfunction-ss_sLuL::synapse0x34bc3f0() {
   return (neuron0x3494500()*-0.00172588);
}

double NNfunction-ss_sLuL::synapse0x34bc430() {
   return (neuron0x3494840()*0.0336847);
}

double NNfunction-ss_sLuL::synapse0x34bc470() {
   return (neuron0x3494b80()*0.0070091);
}

double NNfunction-ss_sLuL::synapse0x34bc4b0() {
   return (neuron0x3494ec0()*-0.0470745);
}

double NNfunction-ss_sLuL::synapse0x34bc4f0() {
   return (neuron0x3495200()*-0.0550632);
}

double NNfunction-ss_sLuL::synapse0x34bc530() {
   return (neuron0x3495540()*-0.110718);
}

double NNfunction-ss_sLuL::synapse0x34bc570() {
   return (neuron0x3495880()*-0.861873);
}

double NNfunction-ss_sLuL::synapse0x34bc5b0() {
   return (neuron0x3495bc0()*-0.0315358);
}

double NNfunction-ss_sLuL::synapse0x34bc5f0() {
   return (neuron0x3495f00()*-0.037756);
}

double NNfunction-ss_sLuL::synapse0x34bc630() {
   return (neuron0x3496240()*-0.0236813);
}

double NNfunction-ss_sLuL::synapse0x34bc0c0() {
   return (neuron0x3496580()*0.0125043);
}

double NNfunction-ss_sLuL::synapse0x34bc100() {
   return (neuron0x3496ae0()*0.00892337);
}

double NNfunction-ss_sLuL::synapse0x34bc780() {
   return (neuron0x3496e20()*0.0211655);
}

double NNfunction-ss_sLuL::synapse0x34bc7c0() {
   return (neuron0x3497160()*-0.0647361);
}

double NNfunction-ss_sLuL::synapse0x34bc800() {
   return (neuron0x34974a0()*-0.0276471);
}

double NNfunction-ss_sLuL::synapse0x34bc840() {
   return (neuron0x34977e0()*0.0376643);
}

double NNfunction-ss_sLuL::synapse0x34bc880() {
   return (neuron0x3497b20()*-0.0346894);
}

double NNfunction-ss_sLuL::synapse0x34bc8c0() {
   return (neuron0x3497e60()*0.0373791);
}

double NNfunction-ss_sLuL::synapse0x34bcc40() {
   return (neuron0x3493210()*0.0111814);
}

double NNfunction-ss_sLuL::synapse0x34bcc80() {
   return (neuron0x34934c0()*0.0388687);
}

double NNfunction-ss_sLuL::synapse0x34bccc0() {
   return (neuron0x3493800()*0.248714);
}

double NNfunction-ss_sLuL::synapse0x34bcd00() {
   return (neuron0x3493b40()*2.76741);
}

double NNfunction-ss_sLuL::synapse0x34bcd40() {
   return (neuron0x3493e80()*0.0616574);
}

double NNfunction-ss_sLuL::synapse0x34bcd80() {
   return (neuron0x34941c0()*0.139914);
}

double NNfunction-ss_sLuL::synapse0x34bcdc0() {
   return (neuron0x3494500()*0.18682);
}

double NNfunction-ss_sLuL::synapse0x34bce00() {
   return (neuron0x3494840()*-0.0186542);
}

double NNfunction-ss_sLuL::synapse0x34bce40() {
   return (neuron0x3494b80()*0.13448);
}

double NNfunction-ss_sLuL::synapse0x34bce80() {
   return (neuron0x3494ec0()*0.084452);
}

double NNfunction-ss_sLuL::synapse0x34bcec0() {
   return (neuron0x3495200()*0.0710113);
}

double NNfunction-ss_sLuL::synapse0x34bcf00() {
   return (neuron0x3495540()*-0.831098);
}

double NNfunction-ss_sLuL::synapse0x34bcf40() {
   return (neuron0x3495880()*-0.308676);
}

double NNfunction-ss_sLuL::synapse0x34bcf80() {
   return (neuron0x3495bc0()*0.0922119);
}

double NNfunction-ss_sLuL::synapse0x34bcfc0() {
   return (neuron0x3495f00()*0.000558934);
}

double NNfunction-ss_sLuL::synapse0x34bd000() {
   return (neuron0x3496240()*-0.00924136);
}

double NNfunction-ss_sLuL::synapse0x34bca90() {
   return (neuron0x3496580()*-0.069638);
}

double NNfunction-ss_sLuL::synapse0x34bcad0() {
   return (neuron0x3496ae0()*0.111214);
}

double NNfunction-ss_sLuL::synapse0x34bd150() {
   return (neuron0x3496e20()*0.107217);
}

double NNfunction-ss_sLuL::synapse0x34bd190() {
   return (neuron0x3497160()*0.051348);
}

double NNfunction-ss_sLuL::synapse0x34bd1d0() {
   return (neuron0x34974a0()*0.0598509);
}

double NNfunction-ss_sLuL::synapse0x34bd210() {
   return (neuron0x34977e0()*0.00727459);
}

double NNfunction-ss_sLuL::synapse0x34bd250() {
   return (neuron0x3497b20()*-0.0709592);
}

double NNfunction-ss_sLuL::synapse0x34bd290() {
   return (neuron0x3497e60()*0.0220662);
}

double NNfunction-ss_sLuL::synapse0x34bd610() {
   return (neuron0x3493210()*0.000683055);
}

double NNfunction-ss_sLuL::synapse0x34bd650() {
   return (neuron0x34934c0()*-0.0346127);
}

double NNfunction-ss_sLuL::synapse0x34bd690() {
   return (neuron0x3493800()*0.144343);
}

double NNfunction-ss_sLuL::synapse0x34bd6d0() {
   return (neuron0x3493b40()*-0.444822);
}

double NNfunction-ss_sLuL::synapse0x34bd710() {
   return (neuron0x3493e80()*-0.000912904);
}

double NNfunction-ss_sLuL::synapse0x34bd750() {
   return (neuron0x34941c0()*0.0415165);
}

double NNfunction-ss_sLuL::synapse0x34bd790() {
   return (neuron0x3494500()*0.00155132);
}

double NNfunction-ss_sLuL::synapse0x34bd7d0() {
   return (neuron0x3494840()*-0.0114631);
}

double NNfunction-ss_sLuL::synapse0x34bd810() {
   return (neuron0x3494b80()*0.0584059);
}

double NNfunction-ss_sLuL::synapse0x34bd850() {
   return (neuron0x3494ec0()*0.19403);
}

double NNfunction-ss_sLuL::synapse0x34bd890() {
   return (neuron0x3495200()*-0.0855879);
}

double NNfunction-ss_sLuL::synapse0x34bd8d0() {
   return (neuron0x3495540()*-0.931424);
}

double NNfunction-ss_sLuL::synapse0x34bd910() {
   return (neuron0x3495880()*-1.41847);
}

double NNfunction-ss_sLuL::synapse0x34bd950() {
   return (neuron0x3495bc0()*-0.0269338);
}

double NNfunction-ss_sLuL::synapse0x34bd990() {
   return (neuron0x3495f00()*-0.0414308);
}

double NNfunction-ss_sLuL::synapse0x34bd9d0() {
   return (neuron0x3496240()*-0.0497039);
}

double NNfunction-ss_sLuL::synapse0x34bd460() {
   return (neuron0x3496580()*-0.0723288);
}

double NNfunction-ss_sLuL::synapse0x34bd4a0() {
   return (neuron0x3496ae0()*0.0299594);
}

double NNfunction-ss_sLuL::synapse0x34bdb20() {
   return (neuron0x3496e20()*0.0502885);
}

double NNfunction-ss_sLuL::synapse0x34bdb60() {
   return (neuron0x3497160()*-0.00205439);
}

double NNfunction-ss_sLuL::synapse0x34bdba0() {
   return (neuron0x34974a0()*0.059067);
}

double NNfunction-ss_sLuL::synapse0x34bdbe0() {
   return (neuron0x34977e0()*0.0778733);
}

double NNfunction-ss_sLuL::synapse0x34bdc20() {
   return (neuron0x3497b20()*0.0365794);
}

double NNfunction-ss_sLuL::synapse0x34bdc60() {
   return (neuron0x3497e60()*0.0495506);
}

double NNfunction-ss_sLuL::synapse0x3499120() {
   return (neuron0x34982d0()*-0.0213438);
}

double NNfunction-ss_sLuL::synapse0x3499160() {
   return (neuron0x3498b10()*-0.0358116);
}

double NNfunction-ss_sLuL::synapse0x349a640() {
   return (neuron0x34995f0()*-0.0338413);
}

double NNfunction-ss_sLuL::synapse0x349a680() {
   return (neuron0x325d9e0()*-0.0238079);
}

double NNfunction-ss_sLuL::synapse0x349c0e0() {
   return (neuron0x349a390()*-0.0150054);
}

double NNfunction-ss_sLuL::synapse0x349c120() {
   return (neuron0x349be30()*-0.321554);
}

double NNfunction-ss_sLuL::synapse0x349ceb0() {
   return (neuron0x349cc00()*-0.0583677);
}

double NNfunction-ss_sLuL::synapse0x349cef0() {
   return (neuron0x349d5d0()*0.00534784);
}

double NNfunction-ss_sLuL::synapse0x349d880() {
   return (neuron0x349dfa0()*-1.4661);
}

double NNfunction-ss_sLuL::synapse0x349d8c0() {
   return (neuron0x349ea80()*-0.912119);
}

double NNfunction-ss_sLuL::synapse0x349e250() {
   return (neuron0x349f450()*-0.0315268);
}

double NNfunction-ss_sLuL::synapse0x349e290() {
   return (neuron0x349c530()*0.0228599);
}

double NNfunction-ss_sLuL::synapse0x349ed30() {
   return (neuron0x34a1000()*1.54618);
}

double NNfunction-ss_sLuL::synapse0x349ed70() {
   return (neuron0x34a19d0()*0.178128);
}

double NNfunction-ss_sLuL::synapse0x349f700() {
   return (neuron0x34a23a0()*0.0668219);
}

double NNfunction-ss_sLuL::synapse0x349f740() {
   return (neuron0x34a2d70()*0.0082417);
}

double NNfunction-ss_sLuL::synapse0x349c7e0() {
   return (neuron0x34a4b80()*-0.00811281);
}

double NNfunction-ss_sLuL::synapse0x349c820() {
   return (neuron0x34a4e60()*-0.269832);
}

double NNfunction-ss_sLuL::synapse0x34a12b0() {
   return (neuron0x34a5830()*-0.170525);
}

double NNfunction-ss_sLuL::synapse0x34a12f0() {
   return (neuron0x34a6200()*0.465972);
}

double NNfunction-ss_sLuL::synapse0x34a1c80() {
   return (neuron0x34a6bd0()*1.2451);
}

double NNfunction-ss_sLuL::synapse0x34a1cc0() {
   return (neuron0x34a75a0()*0.00223476);
}

double NNfunction-ss_sLuL::synapse0x34a2650() {
   return (neuron0x34a00f0()*-0.0319471);
}

double NNfunction-ss_sLuL::synapse0x34a2690() {
   return (neuron0x34a0ac0()*-0.0681839);
}

double NNfunction-ss_sLuL::synapse0x34a3020() {
   return (neuron0x34aa330()*0.0669254);
}

double NNfunction-ss_sLuL::synapse0x34a3060() {
   return (neuron0x34aad00()*0.299494);
}

double NNfunction-ss_sLuL::synapse0x3496120() {
   return (neuron0x34ab6d0()*-0.0547535);
}

double NNfunction-ss_sLuL::synapse0x3496160() {
   return (neuron0x34ac0a0()*0.0556196);
}

double NNfunction-ss_sLuL::synapse0x34a5110() {
   return (neuron0x34aca70()*-0.000578496);
}

double NNfunction-ss_sLuL::synapse0x34a5150() {
   return (neuron0x34ad440()*-0.0167719);
}

double NNfunction-ss_sLuL::synapse0x34a5ae0() {
   return (neuron0x34ade10()*-0.0829296);
}

double NNfunction-ss_sLuL::synapse0x34a5b20() {
   return (neuron0x34ae7e0()*0.0220502);
}

double NNfunction-ss_sLuL::synapse0x34a64b0() {
   return (neuron0x34a4870()*0.0415456);
}

double NNfunction-ss_sLuL::synapse0x34a64f0() {
   return (neuron0x34b13c0()*0.03854);
}

double NNfunction-ss_sLuL::synapse0x34a6e80() {
   return (neuron0x34b1d90()*0.268072);
}

double NNfunction-ss_sLuL::synapse0x34a6ec0() {
   return (neuron0x34b2760()*0.0249932);
}

double NNfunction-ss_sLuL::synapse0x34a7850() {
   return (neuron0x34b3130()*0.171424);
}

double NNfunction-ss_sLuL::synapse0x34a7890() {
   return (neuron0x34b3b00()*0.0149146);
}

double NNfunction-ss_sLuL::synapse0x34a03a0() {
   return (neuron0x34b44d0()*-0.0280146);
}

double NNfunction-ss_sLuL::synapse0x34a03e0() {
   return (neuron0x34b4ea0()*0.00885115);
}

double NNfunction-ss_sLuL::synapse0x34a9c50() {
   return (neuron0x34b5870()*0.0143152);
}

double NNfunction-ss_sLuL::synapse0x34a9c90() {
   return (neuron0x34b6450()*-0.693351);
}

double NNfunction-ss_sLuL::synapse0x34aa5e0() {
   return (neuron0x34b6e20()*0.544844);
}

double NNfunction-ss_sLuL::synapse0x34aa620() {
   return (neuron0x34a7ca0()*-1.67789);
}

double NNfunction-ss_sLuL::synapse0x34aafb0() {
   return (neuron0x34a8670()*0.00708168);
}

double NNfunction-ss_sLuL::synapse0x34aaff0() {
   return (neuron0x34a9040()*-1.52447);
}

double NNfunction-ss_sLuL::synapse0x34ab980() {
   return (neuron0x34bb680()*0.0453243);
}

double NNfunction-ss_sLuL::synapse0x34ab9c0() {
   return (neuron0x34bbf30()*-0.423832);
}

double NNfunction-ss_sLuL::synapse0x34ac350() {
   return (neuron0x34bc900()*0.132135);
}

double NNfunction-ss_sLuL::synapse0x34ac390() {
   return (neuron0x34bd2d0()*-0.0203794);
}

double NNfunction-ss_sLuL::synapse0x34aea90() {
   return (neuron0x34982d0()*-0.145205);
}

double NNfunction-ss_sLuL::synapse0x34aead0() {
   return (neuron0x3498b10()*0.145722);
}

double NNfunction-ss_sLuL::synapse0x34a4050() {
   return (neuron0x34995f0()*-0.333877);
}

double NNfunction-ss_sLuL::synapse0x34a4090() {
   return (neuron0x325d9e0()*-0.542831);
}

double NNfunction-ss_sLuL::synapse0x34b1670() {
   return (neuron0x349a390()*-0.257716);
}

double NNfunction-ss_sLuL::synapse0x34b16b0() {
   return (neuron0x349be30()*0.144416);
}

double NNfunction-ss_sLuL::synapse0x34b2040() {
   return (neuron0x349cc00()*-1.04409);
}

double NNfunction-ss_sLuL::synapse0x34b2080() {
   return (neuron0x349d5d0()*-0.645093);
}

double NNfunction-ss_sLuL::synapse0x34b2a10() {
   return (neuron0x349dfa0()*0.527897);
}

double NNfunction-ss_sLuL::synapse0x34b2a50() {
   return (neuron0x349ea80()*-0.0595591);
}

double NNfunction-ss_sLuL::synapse0x34b33e0() {
   return (neuron0x349f450()*0.0871351);
}

double NNfunction-ss_sLuL::synapse0x34b3420() {
   return (neuron0x349c530()*0.43579);
}

double NNfunction-ss_sLuL::synapse0x34b3db0() {
   return (neuron0x34a1000()*-0.463265);
}

double NNfunction-ss_sLuL::synapse0x34b3df0() {
   return (neuron0x34a19d0()*-0.569483);
}

double NNfunction-ss_sLuL::synapse0x34b4780() {
   return (neuron0x34a23a0()*-0.0196458);
}

double NNfunction-ss_sLuL::synapse0x34b47c0() {
   return (neuron0x34a2d70()*-0.986976);
}

double NNfunction-ss_sLuL::synapse0x34b5150() {
   return (neuron0x34a4b80()*0.579065);
}

double NNfunction-ss_sLuL::synapse0x34b5190() {
   return (neuron0x34a4e60()*0.563344);
}

double NNfunction-ss_sLuL::synapse0x34b5b20() {
   return (neuron0x34a5830()*-0.211859);
}

double NNfunction-ss_sLuL::synapse0x34b5b60() {
   return (neuron0x34a6200()*-1.0794);
}

double NNfunction-ss_sLuL::synapse0x34b6700() {
   return (neuron0x34a6bd0()*0.13585);
}

double NNfunction-ss_sLuL::synapse0x34b6740() {
   return (neuron0x34a75a0()*-0.304345);
}

double NNfunction-ss_sLuL::synapse0x34b70d0() {
   return (neuron0x34a00f0()*0.359053);
}

double NNfunction-ss_sLuL::synapse0x34b7110() {
   return (neuron0x34a0ac0()*0.835464);
}

double NNfunction-ss_sLuL::synapse0x34a7f50() {
   return (neuron0x34aa330()*-1.00745);
}

double NNfunction-ss_sLuL::synapse0x34a7f90() {
   return (neuron0x34aad00()*-1.60999);
}

double NNfunction-ss_sLuL::synapse0x34a8920() {
   return (neuron0x34ab6d0()*0.70041);
}

double NNfunction-ss_sLuL::synapse0x34a8960() {
   return (neuron0x34ac0a0()*-0.456921);
}

double NNfunction-ss_sLuL::synapse0x34a92f0() {
   return (neuron0x34aca70()*-0.184412);
}

double NNfunction-ss_sLuL::synapse0x34a9330() {
   return (neuron0x34ad440()*-0.309849);
}

double NNfunction-ss_sLuL::synapse0x34bb810() {
   return (neuron0x34ade10()*-0.102261);
}

double NNfunction-ss_sLuL::synapse0x34bb850() {
   return (neuron0x34ae7e0()*-0.224784);
}

double NNfunction-ss_sLuL::synapse0x34bc1e0() {
   return (neuron0x34a4870()*-0.542606);
}

double NNfunction-ss_sLuL::synapse0x34bc220() {
   return (neuron0x34b13c0()*-0.267181);
}

double NNfunction-ss_sLuL::synapse0x34bcbb0() {
   return (neuron0x34b1d90()*0.383986);
}

double NNfunction-ss_sLuL::synapse0x34bcbf0() {
   return (neuron0x34b2760()*0.134162);
}

double NNfunction-ss_sLuL::synapse0x34bd580() {
   return (neuron0x34b3130()*-0.0407922);
}

double NNfunction-ss_sLuL::synapse0x34bd5c0() {
   return (neuron0x34b3b00()*-0.230055);
}

double NNfunction-ss_sLuL::synapse0x3498580() {
   return (neuron0x34b44d0()*-1.01817);
}

double NNfunction-ss_sLuL::synapse0x34985c0() {
   return (neuron0x34b4ea0()*-0.380745);
}

double NNfunction-ss_sLuL::synapse0x34acd20() {
   return (neuron0x34b5870()*-0.0405207);
}

double NNfunction-ss_sLuL::synapse0x34acd60() {
   return (neuron0x34b6450()*0.361815);
}

double NNfunction-ss_sLuL::synapse0x34bdca0() {
   return (neuron0x34b6e20()*0.374923);
}

double NNfunction-ss_sLuL::synapse0x34bdce0() {
   return (neuron0x34a7ca0()*-0.739406);
}

double NNfunction-ss_sLuL::synapse0x34bdd20() {
   return (neuron0x34a8670()*-0.341454);
}

double NNfunction-ss_sLuL::synapse0x34bdd60() {
   return (neuron0x34a9040()*-0.239634);
}

double NNfunction-ss_sLuL::synapse0x34c4c10() {
   return (neuron0x34bb680()*-0.0243604);
}

double NNfunction-ss_sLuL::synapse0x34c4c50() {
   return (neuron0x34bbf30()*-0.321243);
}

double NNfunction-ss_sLuL::synapse0x34c4c90() {
   return (neuron0x34bc900()*0.240518);
}

double NNfunction-ss_sLuL::synapse0x34c4cd0() {
   return (neuron0x34bd2d0()*-0.266386);
}

double NNfunction-ss_sLuL::synapse0x34c5050() {
   return (neuron0x34982d0()*0.137882);
}

double NNfunction-ss_sLuL::synapse0x34c5090() {
   return (neuron0x3498b10()*-0.0639632);
}

double NNfunction-ss_sLuL::synapse0x34c50d0() {
   return (neuron0x34995f0()*-0.854203);
}

double NNfunction-ss_sLuL::synapse0x34c5110() {
   return (neuron0x325d9e0()*-0.664287);
}

double NNfunction-ss_sLuL::synapse0x34c5150() {
   return (neuron0x349a390()*-0.553755);
}

double NNfunction-ss_sLuL::synapse0x34c5190() {
   return (neuron0x349be30()*1.21589);
}

double NNfunction-ss_sLuL::synapse0x34c51d0() {
   return (neuron0x349cc00()*0.0922597);
}

double NNfunction-ss_sLuL::synapse0x34c5210() {
   return (neuron0x349d5d0()*0.704412);
}

double NNfunction-ss_sLuL::synapse0x34c5250() {
   return (neuron0x349dfa0()*0.65154);
}

double NNfunction-ss_sLuL::synapse0x34c5290() {
   return (neuron0x349ea80()*7.13632);
}

double NNfunction-ss_sLuL::synapse0x34c52d0() {
   return (neuron0x349f450()*-1.00312);
}

double NNfunction-ss_sLuL::synapse0x34c5310() {
   return (neuron0x349c530()*-0.904631);
}

double NNfunction-ss_sLuL::synapse0x34c5350() {
   return (neuron0x34a1000()*-0.399464);
}

double NNfunction-ss_sLuL::synapse0x34c5390() {
   return (neuron0x34a19d0()*-2.61389);
}

double NNfunction-ss_sLuL::synapse0x34c53d0() {
   return (neuron0x34a23a0()*1.82097);
}

double NNfunction-ss_sLuL::synapse0x34c5410() {
   return (neuron0x34a2d70()*-1.06344);
}

double NNfunction-ss_sLuL::synapse0x34c4ea0() {
   return (neuron0x34a4b80()*-0.998906);
}

double NNfunction-ss_sLuL::synapse0x34c4ee0() {
   return (neuron0x34a4e60()*0.124682);
}

double NNfunction-ss_sLuL::synapse0x34c5560() {
   return (neuron0x34a5830()*2.352);
}

double NNfunction-ss_sLuL::synapse0x34c55a0() {
   return (neuron0x34a6200()*0.184071);
}

double NNfunction-ss_sLuL::synapse0x34c55e0() {
   return (neuron0x34a6bd0()*-0.770518);
}

double NNfunction-ss_sLuL::synapse0x34c5620() {
   return (neuron0x34a75a0()*-0.706979);
}

double NNfunction-ss_sLuL::synapse0x34c5660() {
   return (neuron0x34a00f0()*-1.01926);
}

double NNfunction-ss_sLuL::synapse0x34c56a0() {
   return (neuron0x34a0ac0()*-0.942093);
}

double NNfunction-ss_sLuL::synapse0x34c56e0() {
   return (neuron0x34aa330()*1.52019);
}

double NNfunction-ss_sLuL::synapse0x34c5720() {
   return (neuron0x34aad00()*0.310163);
}

double NNfunction-ss_sLuL::synapse0x34c5760() {
   return (neuron0x34ab6d0()*-1.0701);
}

double NNfunction-ss_sLuL::synapse0x34c57a0() {
   return (neuron0x34ac0a0()*1.36704);
}

double NNfunction-ss_sLuL::synapse0x34c57e0() {
   return (neuron0x34aca70()*0.299665);
}

double NNfunction-ss_sLuL::synapse0x34c5820() {
   return (neuron0x34ad440()*-0.58715);
}

double NNfunction-ss_sLuL::synapse0x34c5860() {
   return (neuron0x34ade10()*-0.341715);
}

double NNfunction-ss_sLuL::synapse0x34c58a0() {
   return (neuron0x34ae7e0()*0.776686);
}

double NNfunction-ss_sLuL::synapse0x34c5450() {
   return (neuron0x34a4870()*1.62024);
}

double NNfunction-ss_sLuL::synapse0x34c5490() {
   return (neuron0x34b13c0()*1.03596);
}

double NNfunction-ss_sLuL::synapse0x34c54d0() {
   return (neuron0x34b1d90()*-0.120236);
}

double NNfunction-ss_sLuL::synapse0x34c5510() {
   return (neuron0x34b2760()*0.979107);
}

double NNfunction-ss_sLuL::synapse0x34c5af0() {
   return (neuron0x34b3130()*-2.21991);
}

double NNfunction-ss_sLuL::synapse0x34c5b30() {
   return (neuron0x34b3b00()*0.96604);
}

double NNfunction-ss_sLuL::synapse0x34c5b70() {
   return (neuron0x34b44d0()*-0.892238);
}

double NNfunction-ss_sLuL::synapse0x34c5bb0() {
   return (neuron0x34b4ea0()*-0.55064);
}

double NNfunction-ss_sLuL::synapse0x34c5bf0() {
   return (neuron0x34b5870()*0.851994);
}

double NNfunction-ss_sLuL::synapse0x34c5c30() {
   return (neuron0x34b6450()*3.18615);
}

double NNfunction-ss_sLuL::synapse0x34c5c70() {
   return (neuron0x34b6e20()*0.280919);
}

double NNfunction-ss_sLuL::synapse0x34c5cb0() {
   return (neuron0x34a7ca0()*-1.10538);
}

double NNfunction-ss_sLuL::synapse0x34c5cf0() {
   return (neuron0x34a8670()*-0.667997);
}

double NNfunction-ss_sLuL::synapse0x34c5d30() {
   return (neuron0x34a9040()*-1.41006);
}

double NNfunction-ss_sLuL::synapse0x34c5d70() {
   return (neuron0x34bb680()*1.16309);
}

double NNfunction-ss_sLuL::synapse0x34c5db0() {
   return (neuron0x34bbf30()*3.18727);
}

double NNfunction-ss_sLuL::synapse0x34c5df0() {
   return (neuron0x34bc900()*-1.1483);
}

double NNfunction-ss_sLuL::synapse0x34c5e30() {
   return (neuron0x34bd2d0()*-2.37254);
}

double NNfunction-ss_sLuL::synapse0x34c61b0() {
   return (neuron0x34982d0()*-0.882714);
}

double NNfunction-ss_sLuL::synapse0x34c61f0() {
   return (neuron0x3498b10()*2.62382);
}

double NNfunction-ss_sLuL::synapse0x34c6230() {
   return (neuron0x34995f0()*-1.43208);
}

double NNfunction-ss_sLuL::synapse0x34c6270() {
   return (neuron0x325d9e0()*-1.24382);
}

double NNfunction-ss_sLuL::synapse0x34c62b0() {
   return (neuron0x349a390()*-1.40758);
}

double NNfunction-ss_sLuL::synapse0x34c62f0() {
   return (neuron0x349be30()*-1.15636);
}

double NNfunction-ss_sLuL::synapse0x34c6330() {
   return (neuron0x349cc00()*1.17837);
}

double NNfunction-ss_sLuL::synapse0x34c6370() {
   return (neuron0x349d5d0()*1.50856);
}

double NNfunction-ss_sLuL::synapse0x34c63b0() {
   return (neuron0x349dfa0()*-1.72604);
}

double NNfunction-ss_sLuL::synapse0x34c63f0() {
   return (neuron0x349ea80()*-3.8858);
}

double NNfunction-ss_sLuL::synapse0x34c6430() {
   return (neuron0x349f450()*-1.41024);
}

double NNfunction-ss_sLuL::synapse0x34c6470() {
   return (neuron0x349c530()*-0.711245);
}

double NNfunction-ss_sLuL::synapse0x34c64b0() {
   return (neuron0x34a1000()*2.42566);
}

double NNfunction-ss_sLuL::synapse0x34c64f0() {
   return (neuron0x34a19d0()*-0.378763);
}

double NNfunction-ss_sLuL::synapse0x34c6530() {
   return (neuron0x34a23a0()*0.374225);
}

double NNfunction-ss_sLuL::synapse0x34c6570() {
   return (neuron0x34a2d70()*0.336383);
}

double NNfunction-ss_sLuL::synapse0x34c6000() {
   return (neuron0x34a4b80()*-1.45151);
}

double NNfunction-ss_sLuL::synapse0x34c6040() {
   return (neuron0x34a4e60()*1.62303);
}

double NNfunction-ss_sLuL::synapse0x34c66c0() {
   return (neuron0x34a5830()*-0.776887);
}

double NNfunction-ss_sLuL::synapse0x34c6700() {
   return (neuron0x34a6200()*0.46494);
}

double NNfunction-ss_sLuL::synapse0x34c6740() {
   return (neuron0x34a6bd0()*0.941489);
}

double NNfunction-ss_sLuL::synapse0x34c6780() {
   return (neuron0x34a75a0()*-0.94018);
}

double NNfunction-ss_sLuL::synapse0x34c67c0() {
   return (neuron0x34a00f0()*-1.26769);
}

double NNfunction-ss_sLuL::synapse0x34c6800() {
   return (neuron0x34a0ac0()*-2.47211);
}

double NNfunction-ss_sLuL::synapse0x34c6840() {
   return (neuron0x34aa330()*1.59738);
}

double NNfunction-ss_sLuL::synapse0x34c6880() {
   return (neuron0x34aad00()*-2.8536);
}

double NNfunction-ss_sLuL::synapse0x34c68c0() {
   return (neuron0x34ab6d0()*-0.618606);
}

double NNfunction-ss_sLuL::synapse0x34c6900() {
   return (neuron0x34ac0a0()*0.490149);
}

double NNfunction-ss_sLuL::synapse0x34c6940() {
   return (neuron0x34aca70()*1.19651);
}

double NNfunction-ss_sLuL::synapse0x34c6980() {
   return (neuron0x34ad440()*-1.34982);
}

double NNfunction-ss_sLuL::synapse0x34c69c0() {
   return (neuron0x34ade10()*-1.3501);
}

double NNfunction-ss_sLuL::synapse0x34c6a00() {
   return (neuron0x34ae7e0()*1.21729);
}

double NNfunction-ss_sLuL::synapse0x34c65b0() {
   return (neuron0x34a4870()*0.508961);
}

double NNfunction-ss_sLuL::synapse0x34c65f0() {
   return (neuron0x34b13c0()*0.531923);
}

double NNfunction-ss_sLuL::synapse0x34c6630() {
   return (neuron0x34b1d90()*0.556647);
}

double NNfunction-ss_sLuL::synapse0x34c6670() {
   return (neuron0x34b2760()*-0.551917);
}

double NNfunction-ss_sLuL::synapse0x34c6c50() {
   return (neuron0x34b3130()*0.486826);
}

double NNfunction-ss_sLuL::synapse0x34c6c90() {
   return (neuron0x34b3b00()*0.65702);
}

double NNfunction-ss_sLuL::synapse0x34c6cd0() {
   return (neuron0x34b44d0()*-1.30878);
}

double NNfunction-ss_sLuL::synapse0x34c6d10() {
   return (neuron0x34b4ea0()*-1.33915);
}

double NNfunction-ss_sLuL::synapse0x34c6d50() {
   return (neuron0x34b5870()*1.19396);
}

double NNfunction-ss_sLuL::synapse0x34c6d90() {
   return (neuron0x34b6450()*-0.190341);
}

double NNfunction-ss_sLuL::synapse0x34c6dd0() {
   return (neuron0x34b6e20()*0.202244);
}

double NNfunction-ss_sLuL::synapse0x34c6e10() {
   return (neuron0x34a7ca0()*-0.780577);
}

double NNfunction-ss_sLuL::synapse0x34c6e50() {
   return (neuron0x34a8670()*-1.18798);
}

double NNfunction-ss_sLuL::synapse0x34c6e90() {
   return (neuron0x34a9040()*-0.405452);
}

double NNfunction-ss_sLuL::synapse0x34c6ed0() {
   return (neuron0x34bb680()*0.0483222);
}

double NNfunction-ss_sLuL::synapse0x34c6f10() {
   return (neuron0x34bbf30()*0.473363);
}

double NNfunction-ss_sLuL::synapse0x34c6f50() {
   return (neuron0x34bc900()*-5.01281);
}

double NNfunction-ss_sLuL::synapse0x34c6f90() {
   return (neuron0x34bd2d0()*2.07212);
}

double NNfunction-ss_sLuL::synapse0x34c7310() {
   return (neuron0x34982d0()*-0.0699707);
}

double NNfunction-ss_sLuL::synapse0x34c7350() {
   return (neuron0x3498b10()*-0.116319);
}

double NNfunction-ss_sLuL::synapse0x34c7390() {
   return (neuron0x34995f0()*-0.159474);
}

double NNfunction-ss_sLuL::synapse0x34c73d0() {
   return (neuron0x325d9e0()*-0.151917);
}

double NNfunction-ss_sLuL::synapse0x34c7410() {
   return (neuron0x349a390()*-0.124257);
}

double NNfunction-ss_sLuL::synapse0x34c7450() {
   return (neuron0x349be30()*-0.89597);
}

double NNfunction-ss_sLuL::synapse0x34c7490() {
   return (neuron0x349cc00()*-0.413059);
}

double NNfunction-ss_sLuL::synapse0x34c74d0() {
   return (neuron0x349d5d0()*0.0836201);
}

double NNfunction-ss_sLuL::synapse0x34c7510() {
   return (neuron0x349dfa0()*-0.277918);
}

double NNfunction-ss_sLuL::synapse0x34c7550() {
   return (neuron0x349ea80()*-1.23173);
}

double NNfunction-ss_sLuL::synapse0x34c7590() {
   return (neuron0x349f450()*-0.16933);
}

double NNfunction-ss_sLuL::synapse0x34c75d0() {
   return (neuron0x349c530()*0.268913);
}

double NNfunction-ss_sLuL::synapse0x34c7610() {
   return (neuron0x34a1000()*1.1474);
}

double NNfunction-ss_sLuL::synapse0x34c7650() {
   return (neuron0x34a19d0()*-0.0719243);
}

double NNfunction-ss_sLuL::synapse0x34c7690() {
   return (neuron0x34a23a0()*0.0891046);
}

double NNfunction-ss_sLuL::synapse0x34c76d0() {
   return (neuron0x34a2d70()*0.116977);
}

double NNfunction-ss_sLuL::synapse0x34c7160() {
   return (neuron0x34a4b80()*-0.0709582);
}

double NNfunction-ss_sLuL::synapse0x34c71a0() {
   return (neuron0x34a4e60()*-0.802018);
}

double NNfunction-ss_sLuL::synapse0x34c7820() {
   return (neuron0x34a5830()*0.565557);
}

double NNfunction-ss_sLuL::synapse0x34c7860() {
   return (neuron0x34a6200()*1.23374);
}

double NNfunction-ss_sLuL::synapse0x34c78a0() {
   return (neuron0x34a6bd0()*-0.595949);
}

double NNfunction-ss_sLuL::synapse0x34c78e0() {
   return (neuron0x34a75a0()*0.0495556);
}

double NNfunction-ss_sLuL::synapse0x34c7920() {
   return (neuron0x34a00f0()*-0.135481);
}

double NNfunction-ss_sLuL::synapse0x34c7960() {
   return (neuron0x34a0ac0()*-0.378434);
}

double NNfunction-ss_sLuL::synapse0x34c79a0() {
   return (neuron0x34aa330()*0.184815);
}

double NNfunction-ss_sLuL::synapse0x34c79e0() {
   return (neuron0x34aad00()*-0.590863);
}

double NNfunction-ss_sLuL::synapse0x34c7a20() {
   return (neuron0x34ab6d0()*-0.230799);
}

double NNfunction-ss_sLuL::synapse0x34c7a60() {
   return (neuron0x34ac0a0()*0.283408);
}

double NNfunction-ss_sLuL::synapse0x34c7aa0() {
   return (neuron0x34aca70()*0.0375578);
}

double NNfunction-ss_sLuL::synapse0x34c7ae0() {
   return (neuron0x34ad440()*-0.151474);
}

double NNfunction-ss_sLuL::synapse0x34c7b20() {
   return (neuron0x34ade10()*-0.379782);
}

double NNfunction-ss_sLuL::synapse0x34c7b60() {
   return (neuron0x34ae7e0()*0.0998553);
}

double NNfunction-ss_sLuL::synapse0x34c7710() {
   return (neuron0x34a4870()*0.12507);
}

double NNfunction-ss_sLuL::synapse0x34c7750() {
   return (neuron0x34b13c0()*0.149404);
}

double NNfunction-ss_sLuL::synapse0x34c7790() {
   return (neuron0x34b1d90()*0.363675);
}

double NNfunction-ss_sLuL::synapse0x34c77d0() {
   return (neuron0x34b2760()*-0.016522);
}

double NNfunction-ss_sLuL::synapse0x34c7db0() {
   return (neuron0x34b3130()*-1.24563);
}

double NNfunction-ss_sLuL::synapse0x34c7df0() {
   return (neuron0x34b3b00()*0.0539465);
}

double NNfunction-ss_sLuL::synapse0x34c7e30() {
   return (neuron0x34b44d0()*-0.134517);
}

double NNfunction-ss_sLuL::synapse0x34c7e70() {
   return (neuron0x34b4ea0()*-0.0037891);
}

double NNfunction-ss_sLuL::synapse0x34c7eb0() {
   return (neuron0x34b5870()*0.0583583);
}

double NNfunction-ss_sLuL::synapse0x34c7ef0() {
   return (neuron0x34b6450()*-1.05836);
}

double NNfunction-ss_sLuL::synapse0x34c7f30() {
   return (neuron0x34b6e20()*1.00361);
}

double NNfunction-ss_sLuL::synapse0x34c7f70() {
   return (neuron0x34a7ca0()*-0.562302);
}

double NNfunction-ss_sLuL::synapse0x34c7fb0() {
   return (neuron0x34a8670()*0.0391653);
}

double NNfunction-ss_sLuL::synapse0x34c7ff0() {
   return (neuron0x34a9040()*-0.839792);
}

double NNfunction-ss_sLuL::synapse0x34c8030() {
   return (neuron0x34bb680()*0.0718596);
}

double NNfunction-ss_sLuL::synapse0x34c8070() {
   return (neuron0x34bbf30()*0.32379);
}

double NNfunction-ss_sLuL::synapse0x34c80b0() {
   return (neuron0x34bc900()*-0.220016);
}

double NNfunction-ss_sLuL::synapse0x34c80f0() {
   return (neuron0x34bd2d0()*-0.750734);
}

double NNfunction-ss_sLuL::synapse0x34c8350() {
   return (neuron0x34c44d0()*8.00163);
}

double NNfunction-ss_sLuL::synapse0x34c8390() {
   return (neuron0x34c4870()*-1.80317);
}

double NNfunction-ss_sLuL::synapse0x34c83d0() {
   return (neuron0x34c4d10()*-7.39936);
}

double NNfunction-ss_sLuL::synapse0x34c8410() {
   return (neuron0x34c5e70()*5.85695);
}

double NNfunction-ss_sLuL::synapse0x34c8450() {
   return (neuron0x34c6fd0()*-3.90954);
}

