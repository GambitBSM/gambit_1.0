#include "NNfunction_ss_uLsR.h"
#include <cmath>

double NNfunction_ss_uLsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5334)/15.3064;
   input1 = (in1 - 1.25699)/1141.22;
   input2 = (in2 - 666.121)/626.61;
   input3 = (in3 - -53.3301)/801.567;
   input4 = (in4 - 1045.04)/944.169;
   input5 = (in5 - 874.96)/929.212;
   input6 = (in6 - 900.495)/939.7;
   input7 = (in7 - 906.234)/917.944;
   input8 = (in8 - 926.305)/978.009;
   input9 = (in9 - 900.184)/956.379;
   input10 = (in10 - 989.389)/962.146;
   input11 = (in11 - 420.179)/438.503;
   input12 = (in12 - 723.95)/869.096;
   input13 = (in13 - 504.203)/520.437;
   input14 = (in14 - 704.833)/799.788;
   input15 = (in15 - 703.74)/799.285;
   input16 = (in16 - 532.865)/553.783;
   input17 = (in17 - 767.131)/904.803;
   input18 = (in18 - 430.203)/457.682;
   input19 = (in19 - 807.91)/884.141;
   input20 = (in20 - -4.59546)/485.551;
   input21 = (in21 - 0.824442)/1158.99;
   input22 = (in22 - 8.10201)/1202.26;
   input23 = (in23 - -196.249)/593.601;
   switch(index) {
     case 0:
         return neuron0x1ae24a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_uLsR::Value(int index, double* input) {
   input0 = (input[0] - 23.5334)/15.3064;
   input1 = (input[1] - 1.25699)/1141.22;
   input2 = (input[2] - 666.121)/626.61;
   input3 = (input[3] - -53.3301)/801.567;
   input4 = (input[4] - 1045.04)/944.169;
   input5 = (input[5] - 874.96)/929.212;
   input6 = (input[6] - 900.495)/939.7;
   input7 = (input[7] - 906.234)/917.944;
   input8 = (input[8] - 926.305)/978.009;
   input9 = (input[9] - 900.184)/956.379;
   input10 = (input[10] - 989.389)/962.146;
   input11 = (input[11] - 420.179)/438.503;
   input12 = (input[12] - 723.95)/869.096;
   input13 = (input[13] - 504.203)/520.437;
   input14 = (input[14] - 704.833)/799.788;
   input15 = (input[15] - 703.74)/799.285;
   input16 = (input[16] - 532.865)/553.783;
   input17 = (input[17] - 767.131)/904.803;
   input18 = (input[18] - 430.203)/457.682;
   input19 = (input[19] - 807.91)/884.141;
   input20 = (input[20] - -4.59546)/485.551;
   input21 = (input[21] - 0.824442)/1158.99;
   input22 = (input[22] - 8.10201)/1202.26;
   input23 = (input[23] - -196.249)/593.601;
   switch(index) {
     case 0:
         return neuron0x1ae24a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_uLsR::neuron0x1aae560() {
   return input0;
}

double NNfunction_ss_uLsR::neuron0x1aae8a0() {
   return input1;
}

double NNfunction_ss_uLsR::neuron0x1aaebe0() {
   return input2;
}

double NNfunction_ss_uLsR::neuron0x1aaef20() {
   return input3;
}

double NNfunction_ss_uLsR::neuron0x1aaf260() {
   return input4;
}

double NNfunction_ss_uLsR::neuron0x1aaf5a0() {
   return input5;
}

double NNfunction_ss_uLsR::neuron0x1aaf8e0() {
   return input6;
}

double NNfunction_ss_uLsR::neuron0x1aafc20() {
   return input7;
}

double NNfunction_ss_uLsR::neuron0x1aaff60() {
   return input8;
}

double NNfunction_ss_uLsR::neuron0x1ab02a0() {
   return input9;
}

double NNfunction_ss_uLsR::neuron0x1ab05e0() {
   return input10;
}

double NNfunction_ss_uLsR::neuron0x1ab0920() {
   return input11;
}

double NNfunction_ss_uLsR::neuron0x1ab0c60() {
   return input12;
}

double NNfunction_ss_uLsR::neuron0x1ab0fa0() {
   return input13;
}

double NNfunction_ss_uLsR::neuron0x1ab12e0() {
   return input14;
}

double NNfunction_ss_uLsR::neuron0x1ab1620() {
   return input15;
}

double NNfunction_ss_uLsR::neuron0x1ab1960() {
   return input16;
}

double NNfunction_ss_uLsR::neuron0x1ab1ec0() {
   return input17;
}

double NNfunction_ss_uLsR::neuron0x1ab20e0() {
   return input18;
}

double NNfunction_ss_uLsR::neuron0x1ab2420() {
   return input19;
}

double NNfunction_ss_uLsR::neuron0x1ab2760() {
   return input20;
}

double NNfunction_ss_uLsR::neuron0x1ab2aa0() {
   return input21;
}

double NNfunction_ss_uLsR::neuron0x1ab2de0() {
   return input22;
}

double NNfunction_ss_uLsR::neuron0x1ab3120() {
   return input23;
}

double NNfunction_ss_uLsR::input0x1ab35c0() {
   double input = -0.500896;
   input += synapse0x186e3d0();
   input += synapse0x1aae420();
   input += synapse0x1aae460();
   input += synapse0x1ab3870();
   input += synapse0x1ab38b0();
   input += synapse0x1ab38f0();
   input += synapse0x1ab3930();
   input += synapse0x1ab3970();
   input += synapse0x1ab39b0();
   input += synapse0x1ab39f0();
   input += synapse0x1ab3a30();
   input += synapse0x1ab3a70();
   input += synapse0x1ab3ab0();
   input += synapse0x1ab3af0();
   input += synapse0x1ab3b30();
   input += synapse0x1ab3b70();
   input += synapse0x1aae390();
   input += synapse0x1aae3d0();
   input += synapse0x185fc70();
   input += synapse0x185fcb0();
   input += synapse0x1ab3dd0();
   input += synapse0x1ab3e10();
   input += synapse0x1ab3e50();
   input += synapse0x1ab3e90();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ab35c0() {
   double input = input0x1ab35c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ab3ed0() {
   double input = 0.427181;
   input += synapse0x1ab4210();
   input += synapse0x1ab4250();
   input += synapse0x1ab4290();
   input += synapse0x1ab42d0();
   input += synapse0x1ab4310();
   input += synapse0x1ab4350();
   input += synapse0x1ab4390();
   input += synapse0x1ab43d0();
   input += synapse0x1ab4410();
   input += synapse0x1ab3cc0();
   input += synapse0x1ab3d00();
   input += synapse0x1ab3d40();
   input += synapse0x1ab3d80();
   input += synapse0x1ab4660();
   input += synapse0x1ab46a0();
   input += synapse0x1ab46e0();
   input += synapse0x1ab4060();
   input += synapse0x1ab40a0();
   input += synapse0x1ab4830();
   input += synapse0x1ab4870();
   input += synapse0x1ab48b0();
   input += synapse0x1ab48f0();
   input += synapse0x1ab4930();
   input += synapse0x1ab4970();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ab3ed0() {
   double input = input0x1ab3ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ab49b0() {
   double input = 0.711725;
   input += synapse0x1ab4cf0();
   input += synapse0x1ab4d30();
   input += synapse0x1ab4d70();
   input += synapse0x1ab4db0();
   input += synapse0x1ab4df0();
   input += synapse0x1ab4e30();
   input += synapse0x1ab4e70();
   input += synapse0x1ab4eb0();
   input += synapse0x1ab4ef0();
   input += synapse0x1ab4f30();
   input += synapse0x1ab4f70();
   input += synapse0x1ab4fb0();
   input += synapse0x1ab4ff0();
   input += synapse0x1ab5030();
   input += synapse0x1ab5070();
   input += synapse0x1ab50b0();
   input += synapse0x1ab4b40();
   input += synapse0x1ab4b80();
   input += synapse0x186dac0();
   input += synapse0x186db00();
   input += synapse0x1a9d5f0();
   input += synapse0x1a9d630();
   input += synapse0x1a9d670();
   input += synapse0x1aae4a0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ab49b0() {
   double input = input0x1ab49b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x186e240() {
   double input = -6.87449;
   input += synapse0x1ab4600();
   input += synapse0x1aae4e0();
   input += synapse0x1aae520();
   input += synapse0x1ab5200();
   input += synapse0x1ab5240();
   input += synapse0x1ab5280();
   input += synapse0x1ab52c0();
   input += synapse0x1ab5300();
   input += synapse0x1ab5340();
   input += synapse0x1ab5380();
   input += synapse0x1ab53c0();
   input += synapse0x1ab5400();
   input += synapse0x1ab5440();
   input += synapse0x1ab5480();
   input += synapse0x1ab54c0();
   input += synapse0x1ab5500();
   input += synapse0x1ab4450();
   input += synapse0x1ab4490();
   input += synapse0x1ab5650();
   input += synapse0x1ab5690();
   input += synapse0x1ab56d0();
   input += synapse0x1ab5710();
   input += synapse0x1ab5750();
   input += synapse0x1ab5790();
   return input;
}

double NNfunction_ss_uLsR::neuron0x186e240() {
   double input = input0x186e240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ab57d0() {
   double input = 0.474572;
   input += synapse0x1ab5b10();
   input += synapse0x1ab5b50();
   input += synapse0x1ab5b90();
   input += synapse0x1ab5bd0();
   input += synapse0x1ab5c10();
   input += synapse0x1ab5c50();
   input += synapse0x1ab5c90();
   input += synapse0x1ab5cd0();
   input += synapse0x1ab5d10();
   input += synapse0x1ab5d50();
   input += synapse0x1ab5d90();
   input += synapse0x1ab5dd0();
   input += synapse0x1ab5e10();
   input += synapse0x1ab5e50();
   input += synapse0x1ab5e90();
   input += synapse0x1ab5ed0();
   input += synapse0x1ab5960();
   input += synapse0x1ab59a0();
   input += synapse0x1ab6020();
   input += synapse0x1ab6060();
   input += synapse0x1ab60a0();
   input += synapse0x1ab60e0();
   input += synapse0x1ab6120();
   input += synapse0x1ab6160();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ab57d0() {
   double input = input0x1ab57d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ab61a0() {
   double input = -0.337521;
   input += synapse0x1ab64e0();
   input += synapse0x1ab6520();
   input += synapse0x1ab6560();
   input += synapse0x1ab65a0();
   input += synapse0x1ab65e0();
   input += synapse0x1ab6620();
   input += synapse0x1ab6660();
   input += synapse0x1ab66a0();
   input += synapse0x1ab66e0();
   input += synapse0x186de30();
   input += synapse0x186de70();
   input += synapse0x186deb0();
   input += synapse0x186def0();
   input += synapse0x186df30();
   input += synapse0x186df70();
   input += synapse0x186dfb0();
   input += synapse0x1ab6330();
   input += synapse0x1ab6370();
   input += synapse0x186e100();
   input += synapse0x186e140();
   input += synapse0x186e180();
   input += synapse0x186e1c0();
   input += synapse0x186e200();
   input += synapse0x1ab6f30();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ab61a0() {
   double input = input0x1ab61a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ab6f70() {
   double input = 0.336035;
   input += synapse0x1ab72b0();
   input += synapse0x1ab72f0();
   input += synapse0x1ab7330();
   input += synapse0x1ab7370();
   input += synapse0x1ab73b0();
   input += synapse0x1ab73f0();
   input += synapse0x1ab7430();
   input += synapse0x1ab7470();
   input += synapse0x1ab74b0();
   input += synapse0x1ab74f0();
   input += synapse0x1ab7530();
   input += synapse0x1ab7570();
   input += synapse0x1ab75b0();
   input += synapse0x1ab75f0();
   input += synapse0x1ab7630();
   input += synapse0x1ab7670();
   input += synapse0x1ab7100();
   input += synapse0x1ab7140();
   input += synapse0x1ab77c0();
   input += synapse0x1ab7800();
   input += synapse0x1ab7840();
   input += synapse0x1ab7880();
   input += synapse0x1ab78c0();
   input += synapse0x1ab7900();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ab6f70() {
   double input = input0x1ab6f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ab7940() {
   double input = 0.194114;
   input += synapse0x1ab7c80();
   input += synapse0x1ab7cc0();
   input += synapse0x1ab7d00();
   input += synapse0x1ab7d40();
   input += synapse0x1ab7d80();
   input += synapse0x1ab7dc0();
   input += synapse0x1ab7e00();
   input += synapse0x1ab7e40();
   input += synapse0x1ab7e80();
   input += synapse0x1ab7ec0();
   input += synapse0x1ab7f00();
   input += synapse0x1ab7f40();
   input += synapse0x1ab7f80();
   input += synapse0x1ab7fc0();
   input += synapse0x1ab8000();
   input += synapse0x1ab8040();
   input += synapse0x1ab7ad0();
   input += synapse0x1ab7b10();
   input += synapse0x1ab8190();
   input += synapse0x1ab81d0();
   input += synapse0x1ab8210();
   input += synapse0x1ab8250();
   input += synapse0x1ab8290();
   input += synapse0x1ab82d0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ab7940() {
   double input = input0x1ab7940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ab8310() {
   double input = -2.3918;
   input += synapse0x1ab1db0();
   input += synapse0x1ab1df0();
   input += synapse0x1ab1e30();
   input += synapse0x1ab1e70();
   input += synapse0x1ab8860();
   input += synapse0x1ab88a0();
   input += synapse0x1ab88e0();
   input += synapse0x1ab8920();
   input += synapse0x1ab8960();
   input += synapse0x1ab89a0();
   input += synapse0x1ab89e0();
   input += synapse0x1ab8a20();
   input += synapse0x1ab8a60();
   input += synapse0x1ab8aa0();
   input += synapse0x1ab8ae0();
   input += synapse0x1ab8b20();
   input += synapse0x1ab84a0();
   input += synapse0x1ab84e0();
   input += synapse0x1ab8c70();
   input += synapse0x1ab8cb0();
   input += synapse0x1ab8cf0();
   input += synapse0x1ab8d30();
   input += synapse0x1ab8d70();
   input += synapse0x1ab8db0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ab8310() {
   double input = input0x1ab8310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ab8df0() {
   double input = 0.346776;
   input += synapse0x1ab9130();
   input += synapse0x1ab9170();
   input += synapse0x1ab91b0();
   input += synapse0x1ab91f0();
   input += synapse0x1ab9230();
   input += synapse0x1ab9270();
   input += synapse0x1ab92b0();
   input += synapse0x1ab92f0();
   input += synapse0x1ab9330();
   input += synapse0x1ab9370();
   input += synapse0x1ab93b0();
   input += synapse0x1ab93f0();
   input += synapse0x1ab9430();
   input += synapse0x1ab9470();
   input += synapse0x1ab94b0();
   input += synapse0x1ab94f0();
   input += synapse0x1ab8f80();
   input += synapse0x1ab8fc0();
   input += synapse0x1ab9640();
   input += synapse0x1ab9680();
   input += synapse0x1ab96c0();
   input += synapse0x1ab9700();
   input += synapse0x1ab9740();
   input += synapse0x1ab9780();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ab8df0() {
   double input = input0x1ab8df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ab97c0() {
   double input = 0.487501;
   input += synapse0x1ab9b00();
   input += synapse0x1ab9b40();
   input += synapse0x1ab9b80();
   input += synapse0x1ab9bc0();
   input += synapse0x1ab9c00();
   input += synapse0x1ab9c40();
   input += synapse0x1ab9c80();
   input += synapse0x1ab9cc0();
   input += synapse0x1ab9d00();
   input += synapse0x1ab9d40();
   input += synapse0x1ab9d80();
   input += synapse0x1ab9dc0();
   input += synapse0x1ab9e00();
   input += synapse0x1ab9e40();
   input += synapse0x1ab9e80();
   input += synapse0x1ab9ec0();
   input += synapse0x1ab9950();
   input += synapse0x1ab9990();
   input += synapse0x1ab6720();
   input += synapse0x1ab6760();
   input += synapse0x1ab67a0();
   input += synapse0x1ab67e0();
   input += synapse0x1ab6820();
   input += synapse0x1ab6860();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ab97c0() {
   double input = input0x1ab97c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ab68a0() {
   double input = 0.0919103;
   input += synapse0x1ab6be0();
   input += synapse0x1ab6c20();
   input += synapse0x1ab6c60();
   input += synapse0x1ab6ca0();
   input += synapse0x1ab6ce0();
   input += synapse0x1ab6d20();
   input += synapse0x1ab6d60();
   input += synapse0x1ab6da0();
   input += synapse0x1ab6de0();
   input += synapse0x1ab6e20();
   input += synapse0x1ab6e60();
   input += synapse0x1ab6ea0();
   input += synapse0x1ab6ee0();
   input += synapse0x1abb020();
   input += synapse0x1abb060();
   input += synapse0x1abb0a0();
   input += synapse0x1ab6a30();
   input += synapse0x1ab6a70();
   input += synapse0x1abb1f0();
   input += synapse0x1abb230();
   input += synapse0x1abb270();
   input += synapse0x1abb2b0();
   input += synapse0x1abb2f0();
   input += synapse0x1abb330();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ab68a0() {
   double input = input0x1ab68a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1abb370() {
   double input = -0.705519;
   input += synapse0x1abb6b0();
   input += synapse0x1abb6f0();
   input += synapse0x1abb730();
   input += synapse0x1abb770();
   input += synapse0x1abb7b0();
   input += synapse0x1abb7f0();
   input += synapse0x1abb830();
   input += synapse0x1abb870();
   input += synapse0x1abb8b0();
   input += synapse0x1abb8f0();
   input += synapse0x1abb930();
   input += synapse0x1abb970();
   input += synapse0x1abb9b0();
   input += synapse0x1abb9f0();
   input += synapse0x1abba30();
   input += synapse0x1abba70();
   input += synapse0x1abb500();
   input += synapse0x1abb540();
   input += synapse0x1abbbc0();
   input += synapse0x1abbc00();
   input += synapse0x1abbc40();
   input += synapse0x1abbc80();
   input += synapse0x1abbcc0();
   input += synapse0x1abbd00();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1abb370() {
   double input = input0x1abb370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1abbd40() {
   double input = 0.303956;
   input += synapse0x1abc080();
   input += synapse0x1abc0c0();
   input += synapse0x1abc100();
   input += synapse0x1abc140();
   input += synapse0x1abc180();
   input += synapse0x1abc1c0();
   input += synapse0x1abc200();
   input += synapse0x1abc240();
   input += synapse0x1abc280();
   input += synapse0x1abc2c0();
   input += synapse0x1abc300();
   input += synapse0x1abc340();
   input += synapse0x1abc380();
   input += synapse0x1abc3c0();
   input += synapse0x1abc400();
   input += synapse0x1abc440();
   input += synapse0x1abbed0();
   input += synapse0x1abbf10();
   input += synapse0x1abc590();
   input += synapse0x1abc5d0();
   input += synapse0x1abc610();
   input += synapse0x1abc650();
   input += synapse0x1abc690();
   input += synapse0x1abc6d0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1abbd40() {
   double input = input0x1abbd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1abc710() {
   double input = 0.973776;
   input += synapse0x1abca50();
   input += synapse0x1abca90();
   input += synapse0x1abcad0();
   input += synapse0x1abcb10();
   input += synapse0x1abcb50();
   input += synapse0x1abcb90();
   input += synapse0x1abcbd0();
   input += synapse0x1abcc10();
   input += synapse0x1abcc50();
   input += synapse0x1abcc90();
   input += synapse0x1abccd0();
   input += synapse0x1abcd10();
   input += synapse0x1abcd50();
   input += synapse0x1abcd90();
   input += synapse0x1abcdd0();
   input += synapse0x1abce10();
   input += synapse0x1abc8a0();
   input += synapse0x1abc8e0();
   input += synapse0x1abcf60();
   input += synapse0x1abcfa0();
   input += synapse0x1abcfe0();
   input += synapse0x1abd020();
   input += synapse0x1abd060();
   input += synapse0x1abd0a0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1abc710() {
   double input = input0x1abc710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1abd0e0() {
   double input = -0.364529;
   input += synapse0x1abd420();
   input += synapse0x1aae780();
   input += synapse0x1aae7c0();
   input += synapse0x1aaeac0();
   input += synapse0x1aaeb00();
   input += synapse0x1aaee00();
   input += synapse0x1aaee40();
   input += synapse0x1aaf140();
   input += synapse0x1aaf180();
   input += synapse0x1aaf480();
   input += synapse0x1aaf4c0();
   input += synapse0x1aaf7c0();
   input += synapse0x1aaf800();
   input += synapse0x1aafb00();
   input += synapse0x1aafb40();
   input += synapse0x1aafe40();
   input += synapse0x1aafe80();
   input += synapse0x1ab0180();
   input += synapse0x1ab01c0();
   input += synapse0x1ab04c0();
   input += synapse0x1ab0500();
   input += synapse0x1ab0800();
   input += synapse0x1ab0840();
   input += synapse0x1ab0b40();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1abd0e0() {
   double input = input0x1abd0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1abeef0() {
   double input = -3.66662;
   input += synapse0x1ab0b80();
   input += synapse0x1ab1840();
   input += synapse0x1ab1880();
   input += synapse0x1abd270();
   input += synapse0x1abd2b0();
   input += synapse0x1ab1b80();
   input += synapse0x1ab1bc0();
   input += synapse0x185fb50();
   input += synapse0x185fb90();
   input += synapse0x1ab2300();
   input += synapse0x1ab2340();
   input += synapse0x1ab2640();
   input += synapse0x1ab2680();
   input += synapse0x1ab2980();
   input += synapse0x1ab29c0();
   input += synapse0x1ab2cc0();
   input += synapse0x1ab2d00();
   input += synapse0x1ab3000();
   input += synapse0x1ab3040();
   input += synapse0x1ab3340();
   input += synapse0x1ab3380();
   input += synapse0x1ab0e80();
   input += synapse0x1ab0ec0();
   input += synapse0x1abf190();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1abeef0() {
   double input = input0x1abeef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1abf1d0() {
   double input = -1.61532;
   input += synapse0x1abf510();
   input += synapse0x1abf550();
   input += synapse0x1abf590();
   input += synapse0x1abf5d0();
   input += synapse0x1abf610();
   input += synapse0x1abf650();
   input += synapse0x1abf690();
   input += synapse0x1abf6d0();
   input += synapse0x1abf710();
   input += synapse0x1abf750();
   input += synapse0x1abf790();
   input += synapse0x1abf7d0();
   input += synapse0x1abf810();
   input += synapse0x1abf850();
   input += synapse0x1abf890();
   input += synapse0x1abf8d0();
   input += synapse0x1abf360();
   input += synapse0x1abf3a0();
   input += synapse0x1abfa20();
   input += synapse0x1abfa60();
   input += synapse0x1abfaa0();
   input += synapse0x1abfae0();
   input += synapse0x1abfb20();
   input += synapse0x1abfb60();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1abf1d0() {
   double input = input0x1abf1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1abfba0() {
   double input = -0.139745;
   input += synapse0x1abfee0();
   input += synapse0x1abff20();
   input += synapse0x1abff60();
   input += synapse0x1abffa0();
   input += synapse0x1abffe0();
   input += synapse0x1ac0020();
   input += synapse0x1ac0060();
   input += synapse0x1ac00a0();
   input += synapse0x1ac00e0();
   input += synapse0x1ac0120();
   input += synapse0x1ac0160();
   input += synapse0x1ac01a0();
   input += synapse0x1ac01e0();
   input += synapse0x1ac0220();
   input += synapse0x1ac0260();
   input += synapse0x1ac02a0();
   input += synapse0x1abfd30();
   input += synapse0x1abfd70();
   input += synapse0x1ac03f0();
   input += synapse0x1ac0430();
   input += synapse0x1ac0470();
   input += synapse0x1ac04b0();
   input += synapse0x1ac04f0();
   input += synapse0x1ac0530();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1abfba0() {
   double input = input0x1abfba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ac0570() {
   double input = -0.0871993;
   input += synapse0x1ac08b0();
   input += synapse0x1ac08f0();
   input += synapse0x1ac0930();
   input += synapse0x1ac0970();
   input += synapse0x1ac09b0();
   input += synapse0x1ac09f0();
   input += synapse0x1ac0a30();
   input += synapse0x1ac0a70();
   input += synapse0x1ac0ab0();
   input += synapse0x1ac0af0();
   input += synapse0x1ac0b30();
   input += synapse0x1ac0b70();
   input += synapse0x1ac0bb0();
   input += synapse0x1ac0bf0();
   input += synapse0x1ac0c30();
   input += synapse0x1ac0c70();
   input += synapse0x1ac0700();
   input += synapse0x1ac0740();
   input += synapse0x1ac0dc0();
   input += synapse0x1ac0e00();
   input += synapse0x1ac0e40();
   input += synapse0x1ac0e80();
   input += synapse0x1ac0ec0();
   input += synapse0x1ac0f00();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ac0570() {
   double input = input0x1ac0570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ac0f40() {
   double input = 0.0616062;
   input += synapse0x1ac1280();
   input += synapse0x1ac12c0();
   input += synapse0x1ac1300();
   input += synapse0x1ac1340();
   input += synapse0x1ac1380();
   input += synapse0x1ac13c0();
   input += synapse0x1ac1400();
   input += synapse0x1ac1440();
   input += synapse0x1ac1480();
   input += synapse0x1ac14c0();
   input += synapse0x1ac1500();
   input += synapse0x1ac1540();
   input += synapse0x1ac1580();
   input += synapse0x1ac15c0();
   input += synapse0x1ac1600();
   input += synapse0x1ac1640();
   input += synapse0x1ac10d0();
   input += synapse0x1ac1110();
   input += synapse0x1ac1790();
   input += synapse0x1ac17d0();
   input += synapse0x1ac1810();
   input += synapse0x1ac1850();
   input += synapse0x1ac1890();
   input += synapse0x1ac18d0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ac0f40() {
   double input = input0x1ac0f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ac1910() {
   double input = -2.07664;
   input += synapse0x1ac1c50();
   input += synapse0x1ac1c90();
   input += synapse0x1ac1cd0();
   input += synapse0x1ac1d10();
   input += synapse0x1ac1d50();
   input += synapse0x1ac1d90();
   input += synapse0x1ac1dd0();
   input += synapse0x1ac1e10();
   input += synapse0x1ac1e50();
   input += synapse0x1aba010();
   input += synapse0x1aba050();
   input += synapse0x1aba090();
   input += synapse0x1aba0d0();
   input += synapse0x1aba110();
   input += synapse0x1aba150();
   input += synapse0x1aba190();
   input += synapse0x1ac1aa0();
   input += synapse0x1ac1ae0();
   input += synapse0x1aba2e0();
   input += synapse0x1aba320();
   input += synapse0x1aba360();
   input += synapse0x1aba3a0();
   input += synapse0x1aba3e0();
   input += synapse0x1aba420();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ac1910() {
   double input = input0x1ac1910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aba460() {
   double input = -0.0479036;
   input += synapse0x1aba7a0();
   input += synapse0x1aba7e0();
   input += synapse0x1aba820();
   input += synapse0x1aba860();
   input += synapse0x1aba8a0();
   input += synapse0x1aba8e0();
   input += synapse0x1aba920();
   input += synapse0x1aba960();
   input += synapse0x1aba9a0();
   input += synapse0x1aba9e0();
   input += synapse0x1abaa20();
   input += synapse0x1abaa60();
   input += synapse0x1abaaa0();
   input += synapse0x1abaae0();
   input += synapse0x1abab20();
   input += synapse0x1abab60();
   input += synapse0x1aba5f0();
   input += synapse0x1aba630();
   input += synapse0x1abacb0();
   input += synapse0x1abacf0();
   input += synapse0x1abad30();
   input += synapse0x1abad70();
   input += synapse0x1abadb0();
   input += synapse0x1abadf0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aba460() {
   double input = input0x1aba460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1abae30() {
   double input = 0.127382;
   input += synapse0x1abafc0();
   input += synapse0x1ac4050();
   input += synapse0x1ac4090();
   input += synapse0x1ac40d0();
   input += synapse0x1ac4110();
   input += synapse0x1ac4150();
   input += synapse0x1ac4190();
   input += synapse0x1ac41d0();
   input += synapse0x1ac4210();
   input += synapse0x1ac4250();
   input += synapse0x1ac4290();
   input += synapse0x1ac42d0();
   input += synapse0x1ac4310();
   input += synapse0x1ac4350();
   input += synapse0x1ac4390();
   input += synapse0x1ac43d0();
   input += synapse0x1ac3ea0();
   input += synapse0x1ac3ee0();
   input += synapse0x1ac4520();
   input += synapse0x1ac4560();
   input += synapse0x1ac45a0();
   input += synapse0x1ac45e0();
   input += synapse0x1ac4620();
   input += synapse0x1ac4660();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1abae30() {
   double input = input0x1abae30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ac46a0() {
   double input = 0.154238;
   input += synapse0x1ac49e0();
   input += synapse0x1ac4a20();
   input += synapse0x1ac4a60();
   input += synapse0x1ac4aa0();
   input += synapse0x1ac4ae0();
   input += synapse0x1ac4b20();
   input += synapse0x1ac4b60();
   input += synapse0x1ac4ba0();
   input += synapse0x1ac4be0();
   input += synapse0x1ac4c20();
   input += synapse0x1ac4c60();
   input += synapse0x1ac4ca0();
   input += synapse0x1ac4ce0();
   input += synapse0x1ac4d20();
   input += synapse0x1ac4d60();
   input += synapse0x1ac4da0();
   input += synapse0x1ac4830();
   input += synapse0x1ac4870();
   input += synapse0x1ac4ef0();
   input += synapse0x1ac4f30();
   input += synapse0x1ac4f70();
   input += synapse0x1ac4fb0();
   input += synapse0x1ac4ff0();
   input += synapse0x1ac5030();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ac46a0() {
   double input = input0x1ac46a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ac5070() {
   double input = 0.0393743;
   input += synapse0x1ac53b0();
   input += synapse0x1ac53f0();
   input += synapse0x1ac5430();
   input += synapse0x1ac5470();
   input += synapse0x1ac54b0();
   input += synapse0x1ac54f0();
   input += synapse0x1ac5530();
   input += synapse0x1ac5570();
   input += synapse0x1ac55b0();
   input += synapse0x1ac55f0();
   input += synapse0x1ac5630();
   input += synapse0x1ac5670();
   input += synapse0x1ac56b0();
   input += synapse0x1ac56f0();
   input += synapse0x1ac5730();
   input += synapse0x1ac5770();
   input += synapse0x1ac5200();
   input += synapse0x1ac5240();
   input += synapse0x1ac58c0();
   input += synapse0x1ac5900();
   input += synapse0x1ac5940();
   input += synapse0x1ac5980();
   input += synapse0x1ac59c0();
   input += synapse0x1ac5a00();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ac5070() {
   double input = input0x1ac5070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ac5a40() {
   double input = 0.0491682;
   input += synapse0x1ac5d80();
   input += synapse0x1ac5dc0();
   input += synapse0x1ac5e00();
   input += synapse0x1ac5e40();
   input += synapse0x1ac5e80();
   input += synapse0x1ac5ec0();
   input += synapse0x1ac5f00();
   input += synapse0x1ac5f40();
   input += synapse0x1ac5f80();
   input += synapse0x1ac5fc0();
   input += synapse0x1ac6000();
   input += synapse0x1ac6040();
   input += synapse0x1ac6080();
   input += synapse0x1ac60c0();
   input += synapse0x1ac6100();
   input += synapse0x1ac6140();
   input += synapse0x1ac5bd0();
   input += synapse0x1ac5c10();
   input += synapse0x1ac6290();
   input += synapse0x1ac62d0();
   input += synapse0x1ac6310();
   input += synapse0x1ac6350();
   input += synapse0x1ac6390();
   input += synapse0x1ac63d0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ac5a40() {
   double input = input0x1ac5a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ac6410() {
   double input = 0.365365;
   input += synapse0x1ac6750();
   input += synapse0x1ac6790();
   input += synapse0x1ac67d0();
   input += synapse0x1ac6810();
   input += synapse0x1ac6850();
   input += synapse0x1ac6890();
   input += synapse0x1ac68d0();
   input += synapse0x1ac6910();
   input += synapse0x1ac6950();
   input += synapse0x1ac6990();
   input += synapse0x1ac69d0();
   input += synapse0x1ac6a10();
   input += synapse0x1ac6a50();
   input += synapse0x1ac6a90();
   input += synapse0x1ac6ad0();
   input += synapse0x1ac6b10();
   input += synapse0x1ac65a0();
   input += synapse0x1ac65e0();
   input += synapse0x1ac6c60();
   input += synapse0x1ac6ca0();
   input += synapse0x1ac6ce0();
   input += synapse0x1ac6d20();
   input += synapse0x1ac6d60();
   input += synapse0x1ac6da0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ac6410() {
   double input = input0x1ac6410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ac6de0() {
   double input = 0.93065;
   input += synapse0x1ac7120();
   input += synapse0x1ac7160();
   input += synapse0x1ac71a0();
   input += synapse0x1ac71e0();
   input += synapse0x1ac7220();
   input += synapse0x1ac7260();
   input += synapse0x1ac72a0();
   input += synapse0x1ac72e0();
   input += synapse0x1ac7320();
   input += synapse0x1ac7360();
   input += synapse0x1ac73a0();
   input += synapse0x1ac73e0();
   input += synapse0x1ac7420();
   input += synapse0x1ac7460();
   input += synapse0x1ac74a0();
   input += synapse0x1ac74e0();
   input += synapse0x1ac6f70();
   input += synapse0x1ac6fb0();
   input += synapse0x1ac7630();
   input += synapse0x1ac7670();
   input += synapse0x1ac76b0();
   input += synapse0x1ac76f0();
   input += synapse0x1ac7730();
   input += synapse0x1ac7770();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ac6de0() {
   double input = input0x1ac6de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ac77b0() {
   double input = -0.418341;
   input += synapse0x1ac7af0();
   input += synapse0x1ac7b30();
   input += synapse0x1ac7b70();
   input += synapse0x1ac7bb0();
   input += synapse0x1ac7bf0();
   input += synapse0x1ac7c30();
   input += synapse0x1ac7c70();
   input += synapse0x1ac7cb0();
   input += synapse0x1ac7cf0();
   input += synapse0x1ac7d30();
   input += synapse0x1ac7d70();
   input += synapse0x1ac7db0();
   input += synapse0x1ac7df0();
   input += synapse0x1ac7e30();
   input += synapse0x1ac7e70();
   input += synapse0x1ac7eb0();
   input += synapse0x1ac7940();
   input += synapse0x1ac7980();
   input += synapse0x1ac8000();
   input += synapse0x1ac8040();
   input += synapse0x1ac8080();
   input += synapse0x1ac80c0();
   input += synapse0x1ac8100();
   input += synapse0x1ac8140();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ac77b0() {
   double input = input0x1ac77b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ac8180() {
   double input = 4.93528;
   input += synapse0x1ac84c0();
   input += synapse0x1ac8500();
   input += synapse0x1ac8540();
   input += synapse0x1ac8580();
   input += synapse0x1ac85c0();
   input += synapse0x1ac8600();
   input += synapse0x1ac8640();
   input += synapse0x1ac8680();
   input += synapse0x1ac86c0();
   input += synapse0x1ac8700();
   input += synapse0x1ac8740();
   input += synapse0x1ac8780();
   input += synapse0x1ac87c0();
   input += synapse0x1ac8800();
   input += synapse0x1ac8840();
   input += synapse0x1ac8880();
   input += synapse0x1ac8310();
   input += synapse0x1ac8350();
   input += synapse0x1ac89d0();
   input += synapse0x1ac8a10();
   input += synapse0x1ac8a50();
   input += synapse0x1ac8a90();
   input += synapse0x1ac8ad0();
   input += synapse0x1ac8b10();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ac8180() {
   double input = input0x1ac8180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ac8b50() {
   double input = 0.856328;
   input += synapse0x1ac8e90();
   input += synapse0x1abd460();
   input += synapse0x1abd4a0();
   input += synapse0x1abd4e0();
   input += synapse0x1abd730();
   input += synapse0x1abd770();
   input += synapse0x1abd7b0();
   input += synapse0x1abda00();
   input += synapse0x1abda40();
   input += synapse0x1abdc90();
   input += synapse0x1abdcd0();
   input += synapse0x1abdd10();
   input += synapse0x1abdf60();
   input += synapse0x1abdfa0();
   input += synapse0x1abe1f0();
   input += synapse0x1abe230();
   input += synapse0x1ac8ce0();
   input += synapse0x1ac8d20();
   input += synapse0x1abe380();
   input += synapse0x1abe890();
   input += synapse0x1abe8d0();
   input += synapse0x1abe910();
   input += synapse0x1abeb60();
   input += synapse0x1abeba0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ac8b50() {
   double input = input0x1ac8b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1abebe0() {
   double input = 1.0768;
   input += synapse0x1abe450();
   input += synapse0x1abe490();
   input += synapse0x1abe4d0();
   input += synapse0x1abe510();
   input += synapse0x1abee90();
   input += synapse0x1acb1e0();
   input += synapse0x1acb220();
   input += synapse0x1acb260();
   input += synapse0x1acb2a0();
   input += synapse0x1acb2e0();
   input += synapse0x1acb320();
   input += synapse0x1acb360();
   input += synapse0x1acb3a0();
   input += synapse0x1acb3e0();
   input += synapse0x1acb420();
   input += synapse0x1acb460();
   input += synapse0x1abed70();
   input += synapse0x1abedb0();
   input += synapse0x1acb5b0();
   input += synapse0x1acb5f0();
   input += synapse0x1acb630();
   input += synapse0x1acb670();
   input += synapse0x1acb6b0();
   input += synapse0x1acb6f0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1abebe0() {
   double input = input0x1abebe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1acb730() {
   double input = 0.30284;
   input += synapse0x1acba70();
   input += synapse0x1acbab0();
   input += synapse0x1acbaf0();
   input += synapse0x1acbb30();
   input += synapse0x1acbb70();
   input += synapse0x1acbbb0();
   input += synapse0x1acbbf0();
   input += synapse0x1acbc30();
   input += synapse0x1acbc70();
   input += synapse0x1acbcb0();
   input += synapse0x1acbcf0();
   input += synapse0x1acbd30();
   input += synapse0x1acbd70();
   input += synapse0x1acbdb0();
   input += synapse0x1acbdf0();
   input += synapse0x1acbe30();
   input += synapse0x1acb8c0();
   input += synapse0x1acb900();
   input += synapse0x1acbf80();
   input += synapse0x1acbfc0();
   input += synapse0x1acc000();
   input += synapse0x1acc040();
   input += synapse0x1acc080();
   input += synapse0x1acc0c0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1acb730() {
   double input = input0x1acb730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1acc100() {
   double input = -0.000514595;
   input += synapse0x1acc440();
   input += synapse0x1acc480();
   input += synapse0x1acc4c0();
   input += synapse0x1acc500();
   input += synapse0x1acc540();
   input += synapse0x1acc580();
   input += synapse0x1acc5c0();
   input += synapse0x1acc600();
   input += synapse0x1acc640();
   input += synapse0x1acc680();
   input += synapse0x1acc6c0();
   input += synapse0x1acc700();
   input += synapse0x1acc740();
   input += synapse0x1acc780();
   input += synapse0x1acc7c0();
   input += synapse0x1acc800();
   input += synapse0x1acc290();
   input += synapse0x1acc2d0();
   input += synapse0x1acc950();
   input += synapse0x1acc990();
   input += synapse0x1acc9d0();
   input += synapse0x1acca10();
   input += synapse0x1acca50();
   input += synapse0x1acca90();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1acc100() {
   double input = input0x1acc100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1accad0() {
   double input = 0.519149;
   input += synapse0x1acce10();
   input += synapse0x1acce50();
   input += synapse0x1acce90();
   input += synapse0x1acced0();
   input += synapse0x1accf10();
   input += synapse0x1accf50();
   input += synapse0x1accf90();
   input += synapse0x1accfd0();
   input += synapse0x1acd010();
   input += synapse0x1acd050();
   input += synapse0x1acd090();
   input += synapse0x1acd0d0();
   input += synapse0x1acd110();
   input += synapse0x1acd150();
   input += synapse0x1acd190();
   input += synapse0x1acd1d0();
   input += synapse0x1accc60();
   input += synapse0x1accca0();
   input += synapse0x1acd320();
   input += synapse0x1acd360();
   input += synapse0x1acd3a0();
   input += synapse0x1acd3e0();
   input += synapse0x1acd420();
   input += synapse0x1acd460();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1accad0() {
   double input = input0x1accad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1acd4a0() {
   double input = 1.46589;
   input += synapse0x1acd7e0();
   input += synapse0x1acd820();
   input += synapse0x1acd860();
   input += synapse0x1acd8a0();
   input += synapse0x1acd8e0();
   input += synapse0x1acd920();
   input += synapse0x1acd960();
   input += synapse0x1acd9a0();
   input += synapse0x1acd9e0();
   input += synapse0x1acda20();
   input += synapse0x1acda60();
   input += synapse0x1acdaa0();
   input += synapse0x1acdae0();
   input += synapse0x1acdb20();
   input += synapse0x1acdb60();
   input += synapse0x1acdba0();
   input += synapse0x1acd630();
   input += synapse0x1acd670();
   input += synapse0x1acdcf0();
   input += synapse0x1acdd30();
   input += synapse0x1acdd70();
   input += synapse0x1acddb0();
   input += synapse0x1acddf0();
   input += synapse0x1acde30();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1acd4a0() {
   double input = input0x1acd4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1acde70() {
   double input = 0.234417;
   input += synapse0x1ace1b0();
   input += synapse0x1ace1f0();
   input += synapse0x1ace230();
   input += synapse0x1ace270();
   input += synapse0x1ace2b0();
   input += synapse0x1ace2f0();
   input += synapse0x1ace330();
   input += synapse0x1ace370();
   input += synapse0x1ace3b0();
   input += synapse0x1ace3f0();
   input += synapse0x1ace430();
   input += synapse0x1ace470();
   input += synapse0x1ace4b0();
   input += synapse0x1ace4f0();
   input += synapse0x1ace530();
   input += synapse0x1ace570();
   input += synapse0x1ace000();
   input += synapse0x1ace040();
   input += synapse0x1ace6c0();
   input += synapse0x1ace700();
   input += synapse0x1ace740();
   input += synapse0x1ace780();
   input += synapse0x1ace7c0();
   input += synapse0x1ace800();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1acde70() {
   double input = input0x1acde70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ace840() {
   double input = 0.566258;
   input += synapse0x1aceb80();
   input += synapse0x1acebc0();
   input += synapse0x1acec00();
   input += synapse0x1acec40();
   input += synapse0x1acec80();
   input += synapse0x1acecc0();
   input += synapse0x1aced00();
   input += synapse0x1aced40();
   input += synapse0x1aced80();
   input += synapse0x1acedc0();
   input += synapse0x1acee00();
   input += synapse0x1acee40();
   input += synapse0x1acee80();
   input += synapse0x1aceec0();
   input += synapse0x1acef00();
   input += synapse0x1acef40();
   input += synapse0x1ace9d0();
   input += synapse0x1acea10();
   input += synapse0x1acf090();
   input += synapse0x1acf0d0();
   input += synapse0x1acf110();
   input += synapse0x1acf150();
   input += synapse0x1acf190();
   input += synapse0x1acf1d0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ace840() {
   double input = input0x1ace840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1acf210() {
   double input = 2.82519;
   input += synapse0x1acf550();
   input += synapse0x1acf590();
   input += synapse0x1acf5d0();
   input += synapse0x1acf610();
   input += synapse0x1acf650();
   input += synapse0x1acf690();
   input += synapse0x1acf6d0();
   input += synapse0x1acf710();
   input += synapse0x1acf750();
   input += synapse0x1acf790();
   input += synapse0x1acf7d0();
   input += synapse0x1acf810();
   input += synapse0x1acf850();
   input += synapse0x1acf890();
   input += synapse0x1acf8d0();
   input += synapse0x1acf910();
   input += synapse0x1acf3a0();
   input += synapse0x1acf3e0();
   input += synapse0x1acfa60();
   input += synapse0x1acfaa0();
   input += synapse0x1acfae0();
   input += synapse0x1acfb20();
   input += synapse0x1acfb60();
   input += synapse0x1acfba0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1acf210() {
   double input = input0x1acf210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1acfbe0() {
   double input = 0.322991;
   input += synapse0x1ab8650();
   input += synapse0x1ab8690();
   input += synapse0x1ab86d0();
   input += synapse0x1ab8710();
   input += synapse0x1ab8750();
   input += synapse0x1ab8790();
   input += synapse0x1ab87d0();
   input += synapse0x1ab8810();
   input += synapse0x1ad0330();
   input += synapse0x1ad0370();
   input += synapse0x1ad03b0();
   input += synapse0x1ad03f0();
   input += synapse0x1ad0430();
   input += synapse0x1ad0470();
   input += synapse0x1ad04b0();
   input += synapse0x1ad04f0();
   input += synapse0x1acfd70();
   input += synapse0x1acfdb0();
   input += synapse0x1ad0640();
   input += synapse0x1ad0680();
   input += synapse0x1ad06c0();
   input += synapse0x1ad0700();
   input += synapse0x1ad0740();
   input += synapse0x1ad0780();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1acfbe0() {
   double input = input0x1acfbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ad07c0() {
   double input = 0.00471535;
   input += synapse0x1ad0b00();
   input += synapse0x1ad0b40();
   input += synapse0x1ad0b80();
   input += synapse0x1ad0bc0();
   input += synapse0x1ad0c00();
   input += synapse0x1ad0c40();
   input += synapse0x1ad0c80();
   input += synapse0x1ad0cc0();
   input += synapse0x1ad0d00();
   input += synapse0x1ad0d40();
   input += synapse0x1ad0d80();
   input += synapse0x1ad0dc0();
   input += synapse0x1ad0e00();
   input += synapse0x1ad0e40();
   input += synapse0x1ad0e80();
   input += synapse0x1ad0ec0();
   input += synapse0x1ad0950();
   input += synapse0x1ad0990();
   input += synapse0x1ad1010();
   input += synapse0x1ad1050();
   input += synapse0x1ad1090();
   input += synapse0x1ad10d0();
   input += synapse0x1ad1110();
   input += synapse0x1ad1150();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ad07c0() {
   double input = input0x1ad07c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ad1190() {
   double input = 0.785229;
   input += synapse0x1ad14d0();
   input += synapse0x1ad1510();
   input += synapse0x1ad1550();
   input += synapse0x1ad1590();
   input += synapse0x1ad15d0();
   input += synapse0x1ad1610();
   input += synapse0x1ad1650();
   input += synapse0x1ad1690();
   input += synapse0x1ad16d0();
   input += synapse0x1ad1710();
   input += synapse0x1ad1750();
   input += synapse0x1ad1790();
   input += synapse0x1ad17d0();
   input += synapse0x1ad1810();
   input += synapse0x1ad1850();
   input += synapse0x1ad1890();
   input += synapse0x1ad1320();
   input += synapse0x1ad1360();
   input += synapse0x1ac1e90();
   input += synapse0x1ac1ed0();
   input += synapse0x1ac1f10();
   input += synapse0x1ac1f50();
   input += synapse0x1ac1f90();
   input += synapse0x1ac1fd0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ad1190() {
   double input = input0x1ad1190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ac2010() {
   double input = 0.426925;
   input += synapse0x1ac2350();
   input += synapse0x1ac2390();
   input += synapse0x1ac23d0();
   input += synapse0x1ac2410();
   input += synapse0x1ac2450();
   input += synapse0x1ac2490();
   input += synapse0x1ac24d0();
   input += synapse0x1ac2510();
   input += synapse0x1ac2550();
   input += synapse0x1ac2590();
   input += synapse0x1ac25d0();
   input += synapse0x1ac2610();
   input += synapse0x1ac2650();
   input += synapse0x1ac2690();
   input += synapse0x1ac26d0();
   input += synapse0x1ac2710();
   input += synapse0x1ac21a0();
   input += synapse0x1ac21e0();
   input += synapse0x1ac2860();
   input += synapse0x1ac28a0();
   input += synapse0x1ac28e0();
   input += synapse0x1ac2920();
   input += synapse0x1ac2960();
   input += synapse0x1ac29a0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ac2010() {
   double input = input0x1ac2010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ac29e0() {
   double input = 0.0878277;
   input += synapse0x1ac2d20();
   input += synapse0x1ac2d60();
   input += synapse0x1ac2da0();
   input += synapse0x1ac2de0();
   input += synapse0x1ac2e20();
   input += synapse0x1ac2e60();
   input += synapse0x1ac2ea0();
   input += synapse0x1ac2ee0();
   input += synapse0x1ac2f20();
   input += synapse0x1ac2f60();
   input += synapse0x1ac2fa0();
   input += synapse0x1ac2fe0();
   input += synapse0x1ac3020();
   input += synapse0x1ac3060();
   input += synapse0x1ac30a0();
   input += synapse0x1ac30e0();
   input += synapse0x1ac2b70();
   input += synapse0x1ac2bb0();
   input += synapse0x1ac3230();
   input += synapse0x1ac3270();
   input += synapse0x1ac32b0();
   input += synapse0x1ac32f0();
   input += synapse0x1ac3330();
   input += synapse0x1ac3370();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ac29e0() {
   double input = input0x1ac29e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ac33b0() {
   double input = 1.02207;
   input += synapse0x1ac36f0();
   input += synapse0x1ac3730();
   input += synapse0x1ac3770();
   input += synapse0x1ac37b0();
   input += synapse0x1ac37f0();
   input += synapse0x1ac3830();
   input += synapse0x1ac3870();
   input += synapse0x1ac38b0();
   input += synapse0x1ac38f0();
   input += synapse0x1ac3930();
   input += synapse0x1ac3970();
   input += synapse0x1ac39b0();
   input += synapse0x1ac39f0();
   input += synapse0x1ac3a30();
   input += synapse0x1ac3a70();
   input += synapse0x1ac3ab0();
   input += synapse0x1ac3540();
   input += synapse0x1ac3580();
   input += synapse0x1ac3c00();
   input += synapse0x1ac3c40();
   input += synapse0x1ac3c80();
   input += synapse0x1ac3cc0();
   input += synapse0x1ac3d00();
   input += synapse0x1ac3d40();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ac33b0() {
   double input = input0x1ac33b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ad59f0() {
   double input = 3.15428;
   input += synapse0x1ad5c10();
   input += synapse0x1ad5c50();
   input += synapse0x1ad5c90();
   input += synapse0x1ad5cd0();
   input += synapse0x1ad5d10();
   input += synapse0x1ad5d50();
   input += synapse0x1ad5d90();
   input += synapse0x1ad5dd0();
   input += synapse0x1ad5e10();
   input += synapse0x1ad5e50();
   input += synapse0x1ad5e90();
   input += synapse0x1ad5ed0();
   input += synapse0x1ad5f10();
   input += synapse0x1ad5f50();
   input += synapse0x1ad5f90();
   input += synapse0x1ad5fd0();
   input += synapse0x1ac3d80();
   input += synapse0x1ac3dc0();
   input += synapse0x1ad6120();
   input += synapse0x1ad6160();
   input += synapse0x1ad61a0();
   input += synapse0x1ad61e0();
   input += synapse0x1ad6220();
   input += synapse0x1ad6260();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ad59f0() {
   double input = input0x1ad59f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ad62a0() {
   double input = -0.189759;
   input += synapse0x1ad65e0();
   input += synapse0x1ad6620();
   input += synapse0x1ad6660();
   input += synapse0x1ad66a0();
   input += synapse0x1ad66e0();
   input += synapse0x1ad6720();
   input += synapse0x1ad6760();
   input += synapse0x1ad67a0();
   input += synapse0x1ad67e0();
   input += synapse0x1ad6820();
   input += synapse0x1ad6860();
   input += synapse0x1ad68a0();
   input += synapse0x1ad68e0();
   input += synapse0x1ad6920();
   input += synapse0x1ad6960();
   input += synapse0x1ad69a0();
   input += synapse0x1ad6430();
   input += synapse0x1ad6470();
   input += synapse0x1ad6af0();
   input += synapse0x1ad6b30();
   input += synapse0x1ad6b70();
   input += synapse0x1ad6bb0();
   input += synapse0x1ad6bf0();
   input += synapse0x1ad6c30();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ad62a0() {
   double input = input0x1ad62a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ad6c70() {
   double input = -1.02823;
   input += synapse0x1ad6fb0();
   input += synapse0x1ad6ff0();
   input += synapse0x1ad7030();
   input += synapse0x1ad7070();
   input += synapse0x1ad70b0();
   input += synapse0x1ad70f0();
   input += synapse0x1ad7130();
   input += synapse0x1ad7170();
   input += synapse0x1ad71b0();
   input += synapse0x1ad71f0();
   input += synapse0x1ad7230();
   input += synapse0x1ad7270();
   input += synapse0x1ad72b0();
   input += synapse0x1ad72f0();
   input += synapse0x1ad7330();
   input += synapse0x1ad7370();
   input += synapse0x1ad6e00();
   input += synapse0x1ad6e40();
   input += synapse0x1ad74c0();
   input += synapse0x1ad7500();
   input += synapse0x1ad7540();
   input += synapse0x1ad7580();
   input += synapse0x1ad75c0();
   input += synapse0x1ad7600();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ad6c70() {
   double input = input0x1ad6c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ad7640() {
   double input = 1.30183;
   input += synapse0x1ad7980();
   input += synapse0x1ad79c0();
   input += synapse0x1ad7a00();
   input += synapse0x1ad7a40();
   input += synapse0x1ad7a80();
   input += synapse0x1ad7ac0();
   input += synapse0x1ad7b00();
   input += synapse0x1ad7b40();
   input += synapse0x1ad7b80();
   input += synapse0x1ad7bc0();
   input += synapse0x1ad7c00();
   input += synapse0x1ad7c40();
   input += synapse0x1ad7c80();
   input += synapse0x1ad7cc0();
   input += synapse0x1ad7d00();
   input += synapse0x1ad7d40();
   input += synapse0x1ad77d0();
   input += synapse0x1ad7810();
   input += synapse0x1ad7e90();
   input += synapse0x1ad7ed0();
   input += synapse0x1ad7f10();
   input += synapse0x1ad7f50();
   input += synapse0x1ad7f90();
   input += synapse0x1ad7fd0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ad7640() {
   double input = input0x1ad7640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ade840() {
   double input = -0.20321;
   input += synapse0x1ab4570();
   input += synapse0x1ab45b0();
   input += synapse0x1ab5a80();
   input += synapse0x1ab5ac0();
   input += synapse0x1ab6450();
   input += synapse0x1ab6490();
   input += synapse0x1ab7220();
   input += synapse0x1ab7260();
   input += synapse0x1ab7bf0();
   input += synapse0x1ab7c30();
   input += synapse0x1ab85c0();
   input += synapse0x1ab8600();
   input += synapse0x1ab90a0();
   input += synapse0x1ab90e0();
   input += synapse0x1ab9a70();
   input += synapse0x1ab9ab0();
   input += synapse0x1ab6b50();
   input += synapse0x1ab6b90();
   input += synapse0x1abb620();
   input += synapse0x1abb660();
   input += synapse0x1abbff0();
   input += synapse0x1abc030();
   input += synapse0x1abc9c0();
   input += synapse0x1abca00();
   input += synapse0x1abd390();
   input += synapse0x1abd3d0();
   input += synapse0x1ab1500();
   input += synapse0x1ab1540();
   input += synapse0x1abf480();
   input += synapse0x1abf4c0();
   input += synapse0x1abfe50();
   input += synapse0x1abfe90();
   input += synapse0x1ac0820();
   input += synapse0x1ac0860();
   input += synapse0x1ac11f0();
   input += synapse0x1ac1230();
   input += synapse0x1ac1bc0();
   input += synapse0x1ac1c00();
   input += synapse0x1aba710();
   input += synapse0x1aba750();
   input += synapse0x1ac3fc0();
   input += synapse0x1ac4000();
   input += synapse0x1ac4950();
   input += synapse0x1ac4990();
   input += synapse0x1ac5320();
   input += synapse0x1ac5360();
   input += synapse0x1ac5cf0();
   input += synapse0x1ac5d30();
   input += synapse0x1ac66c0();
   input += synapse0x1ac6700();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ade840() {
   double input = input0x1ade840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1adebe0() {
   double input = 0.814165;
   input += synapse0x1ac8e00();
   input += synapse0x1ac8e40();
   input += synapse0x1abe3c0();
   input += synapse0x1abe400();
   input += synapse0x1acb9e0();
   input += synapse0x1acba20();
   input += synapse0x1acc3b0();
   input += synapse0x1acc3f0();
   input += synapse0x1accd80();
   input += synapse0x1accdc0();
   input += synapse0x1acd750();
   input += synapse0x1acd790();
   input += synapse0x1ace120();
   input += synapse0x1ace160();
   input += synapse0x1aceaf0();
   input += synapse0x1aceb30();
   input += synapse0x1acf4c0();
   input += synapse0x1acf500();
   input += synapse0x1acfe90();
   input += synapse0x1acfed0();
   input += synapse0x1ad0a70();
   input += synapse0x1ad0ab0();
   input += synapse0x1ad1440();
   input += synapse0x1ad1480();
   input += synapse0x1ac22c0();
   input += synapse0x1ac2300();
   input += synapse0x1ac2c90();
   input += synapse0x1ac2cd0();
   input += synapse0x1ac3660();
   input += synapse0x1ac36a0();
   input += synapse0x1ad5b80();
   input += synapse0x1ad5bc0();
   input += synapse0x1ad6550();
   input += synapse0x1ad6590();
   input += synapse0x1ad6f20();
   input += synapse0x1ad6f60();
   input += synapse0x1ad78f0();
   input += synapse0x1ad7930();
   input += synapse0x1ab37e0();
   input += synapse0x1ab3820();
   input += synapse0x1ac7090();
   input += synapse0x1ac70d0();
   input += synapse0x1ad8010();
   input += synapse0x1ad8050();
   input += synapse0x1ad8090();
   input += synapse0x1ad80d0();
   input += synapse0x1adef80();
   input += synapse0x1adefc0();
   input += synapse0x1adf000();
   input += synapse0x1adf040();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1adebe0() {
   double input = input0x1adebe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1adf080() {
   double input = -0.595396;
   input += synapse0x1adf3c0();
   input += synapse0x1adf400();
   input += synapse0x1adf440();
   input += synapse0x1adf480();
   input += synapse0x1adf4c0();
   input += synapse0x1adf500();
   input += synapse0x1adf540();
   input += synapse0x1adf580();
   input += synapse0x1adf5c0();
   input += synapse0x1adf600();
   input += synapse0x1adf640();
   input += synapse0x1adf680();
   input += synapse0x1adf6c0();
   input += synapse0x1adf700();
   input += synapse0x1adf740();
   input += synapse0x1adf780();
   input += synapse0x1adf210();
   input += synapse0x1adf250();
   input += synapse0x1adf8d0();
   input += synapse0x1adf910();
   input += synapse0x1adf950();
   input += synapse0x1adf990();
   input += synapse0x1adf9d0();
   input += synapse0x1adfa10();
   input += synapse0x1adfa50();
   input += synapse0x1adfa90();
   input += synapse0x1adfad0();
   input += synapse0x1adfb10();
   input += synapse0x1adfb50();
   input += synapse0x1adfb90();
   input += synapse0x1adfbd0();
   input += synapse0x1adfc10();
   input += synapse0x1adf7c0();
   input += synapse0x1adf800();
   input += synapse0x1adf840();
   input += synapse0x1adf880();
   input += synapse0x1adfe60();
   input += synapse0x1adfea0();
   input += synapse0x1adfee0();
   input += synapse0x1adff20();
   input += synapse0x1adff60();
   input += synapse0x1adffa0();
   input += synapse0x1adffe0();
   input += synapse0x1ae0020();
   input += synapse0x1ae0060();
   input += synapse0x1ae00a0();
   input += synapse0x1ae00e0();
   input += synapse0x1ae0120();
   input += synapse0x1ae0160();
   input += synapse0x1ae01a0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1adf080() {
   double input = input0x1adf080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ae01e0() {
   double input = 0.700087;
   input += synapse0x1ae0520();
   input += synapse0x1ae0560();
   input += synapse0x1ae05a0();
   input += synapse0x1ae05e0();
   input += synapse0x1ae0620();
   input += synapse0x1ae0660();
   input += synapse0x1ae06a0();
   input += synapse0x1ae06e0();
   input += synapse0x1ae0720();
   input += synapse0x1ae0760();
   input += synapse0x1ae07a0();
   input += synapse0x1ae07e0();
   input += synapse0x1ae0820();
   input += synapse0x1ae0860();
   input += synapse0x1ae08a0();
   input += synapse0x1ae08e0();
   input += synapse0x1ae0370();
   input += synapse0x1ae03b0();
   input += synapse0x1ae0a30();
   input += synapse0x1ae0a70();
   input += synapse0x1ae0ab0();
   input += synapse0x1ae0af0();
   input += synapse0x1ae0b30();
   input += synapse0x1ae0b70();
   input += synapse0x1ae0bb0();
   input += synapse0x1ae0bf0();
   input += synapse0x1ae0c30();
   input += synapse0x1ae0c70();
   input += synapse0x1ae0cb0();
   input += synapse0x1ae0cf0();
   input += synapse0x1ae0d30();
   input += synapse0x1ae0d70();
   input += synapse0x1ae0920();
   input += synapse0x1ae0960();
   input += synapse0x1ae09a0();
   input += synapse0x1ae09e0();
   input += synapse0x1ae0fc0();
   input += synapse0x1ae1000();
   input += synapse0x1ae1040();
   input += synapse0x1ae1080();
   input += synapse0x1ae10c0();
   input += synapse0x1ae1100();
   input += synapse0x1ae1140();
   input += synapse0x1ae1180();
   input += synapse0x1ae11c0();
   input += synapse0x1ae1200();
   input += synapse0x1ae1240();
   input += synapse0x1ae1280();
   input += synapse0x1ae12c0();
   input += synapse0x1ae1300();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ae01e0() {
   double input = input0x1ae01e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ae1340() {
   double input = -0.00214458;
   input += synapse0x1ae1680();
   input += synapse0x1ae16c0();
   input += synapse0x1ae1700();
   input += synapse0x1ae1740();
   input += synapse0x1ae1780();
   input += synapse0x1ae17c0();
   input += synapse0x1ae1800();
   input += synapse0x1ae1840();
   input += synapse0x1ae1880();
   input += synapse0x1ae18c0();
   input += synapse0x1ae1900();
   input += synapse0x1ae1940();
   input += synapse0x1ae1980();
   input += synapse0x1ae19c0();
   input += synapse0x1ae1a00();
   input += synapse0x1ae1a40();
   input += synapse0x1ae14d0();
   input += synapse0x1ae1510();
   input += synapse0x1ae1b90();
   input += synapse0x1ae1bd0();
   input += synapse0x1ae1c10();
   input += synapse0x1ae1c50();
   input += synapse0x1ae1c90();
   input += synapse0x1ae1cd0();
   input += synapse0x1ae1d10();
   input += synapse0x1ae1d50();
   input += synapse0x1ae1d90();
   input += synapse0x1ae1dd0();
   input += synapse0x1ae1e10();
   input += synapse0x1ae1e50();
   input += synapse0x1ae1e90();
   input += synapse0x1ae1ed0();
   input += synapse0x1ae1a80();
   input += synapse0x1ae1ac0();
   input += synapse0x1ae1b00();
   input += synapse0x1ae1b40();
   input += synapse0x1ae2120();
   input += synapse0x1ae2160();
   input += synapse0x1ae21a0();
   input += synapse0x1ae21e0();
   input += synapse0x1ae2220();
   input += synapse0x1ae2260();
   input += synapse0x1ae22a0();
   input += synapse0x1ae22e0();
   input += synapse0x1ae2320();
   input += synapse0x1ae2360();
   input += synapse0x1ae23a0();
   input += synapse0x1ae23e0();
   input += synapse0x1ae2420();
   input += synapse0x1ae2460();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ae1340() {
   double input = input0x1ae1340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ae24a0() {
   double input = 4.19916;
   input += synapse0x1ab3580();
   input += synapse0x1ae26c0();
   input += synapse0x1ae2700();
   input += synapse0x1ae2740();
   input += synapse0x1ae2780();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ae24a0() {
   double input = input0x1ae24a0();
   return (input * 1)+0;
}

double NNfunction_ss_uLsR::synapse0x186e3d0() {
   return (neuron0x1aae560()*0.019657);
}

double NNfunction_ss_uLsR::synapse0x1aae420() {
   return (neuron0x1aae8a0()*-0.225553);
}

double NNfunction_ss_uLsR::synapse0x1aae460() {
   return (neuron0x1aaebe0()*-0.354833);
}

double NNfunction_ss_uLsR::synapse0x1ab3870() {
   return (neuron0x1aaef20()*-0.0937225);
}

double NNfunction_ss_uLsR::synapse0x1ab38b0() {
   return (neuron0x1aaf260()*-0.0564168);
}

double NNfunction_ss_uLsR::synapse0x1ab38f0() {
   return (neuron0x1aaf5a0()*0.0826126);
}

double NNfunction_ss_uLsR::synapse0x1ab3930() {
   return (neuron0x1aaf8e0()*0.431174);
}

double NNfunction_ss_uLsR::synapse0x1ab3970() {
   return (neuron0x1aafc20()*-0.0557334);
}

double NNfunction_ss_uLsR::synapse0x1ab39b0() {
   return (neuron0x1aaff60()*-0.319953);
}

double NNfunction_ss_uLsR::synapse0x1ab39f0() {
   return (neuron0x1ab02a0()*1.13846);
}

double NNfunction_ss_uLsR::synapse0x1ab3a30() {
   return (neuron0x1ab05e0()*0.270619);
}

double NNfunction_ss_uLsR::synapse0x1ab3a70() {
   return (neuron0x1ab0920()*0.099482);
}

double NNfunction_ss_uLsR::synapse0x1ab3ab0() {
   return (neuron0x1ab0c60()*-0.0869887);
}

double NNfunction_ss_uLsR::synapse0x1ab3af0() {
   return (neuron0x1ab0fa0()*0.358368);
}

double NNfunction_ss_uLsR::synapse0x1ab3b30() {
   return (neuron0x1ab12e0()*-0.184433);
}

double NNfunction_ss_uLsR::synapse0x1ab3b70() {
   return (neuron0x1ab1620()*0.51668);
}

double NNfunction_ss_uLsR::synapse0x1aae390() {
   return (neuron0x1ab1960()*0.462588);
}

double NNfunction_ss_uLsR::synapse0x1aae3d0() {
   return (neuron0x1ab1ec0()*0.0821936);
}

double NNfunction_ss_uLsR::synapse0x185fc70() {
   return (neuron0x1ab20e0()*0.0894358);
}

double NNfunction_ss_uLsR::synapse0x185fcb0() {
   return (neuron0x1ab2420()*0.0364013);
}

double NNfunction_ss_uLsR::synapse0x1ab3dd0() {
   return (neuron0x1ab2760()*-0.917796);
}

double NNfunction_ss_uLsR::synapse0x1ab3e10() {
   return (neuron0x1ab2aa0()*0.161192);
}

double NNfunction_ss_uLsR::synapse0x1ab3e50() {
   return (neuron0x1ab2de0()*-0.169487);
}

double NNfunction_ss_uLsR::synapse0x1ab3e90() {
   return (neuron0x1ab3120()*0.499527);
}

double NNfunction_ss_uLsR::synapse0x1ab4210() {
   return (neuron0x1aae560()*-0.334242);
}

double NNfunction_ss_uLsR::synapse0x1ab4250() {
   return (neuron0x1aae8a0()*-0.0697279);
}

double NNfunction_ss_uLsR::synapse0x1ab4290() {
   return (neuron0x1aaebe0()*-0.0901088);
}

double NNfunction_ss_uLsR::synapse0x1ab42d0() {
   return (neuron0x1aaef20()*-0.0406254);
}

double NNfunction_ss_uLsR::synapse0x1ab4310() {
   return (neuron0x1aaf260()*-0.0102891);
}

double NNfunction_ss_uLsR::synapse0x1ab4350() {
   return (neuron0x1aaf5a0()*-0.00384659);
}

double NNfunction_ss_uLsR::synapse0x1ab4390() {
   return (neuron0x1aaf8e0()*0.0683549);
}

double NNfunction_ss_uLsR::synapse0x1ab43d0() {
   return (neuron0x1aafc20()*0.0128956);
}

double NNfunction_ss_uLsR::synapse0x1ab4410() {
   return (neuron0x1aaff60()*-0.118901);
}

double NNfunction_ss_uLsR::synapse0x1ab3cc0() {
   return (neuron0x1ab02a0()*-0.124585);
}

double NNfunction_ss_uLsR::synapse0x1ab3d00() {
   return (neuron0x1ab05e0()*0.0691123);
}

double NNfunction_ss_uLsR::synapse0x1ab3d40() {
   return (neuron0x1ab0920()*0.427198);
}

double NNfunction_ss_uLsR::synapse0x1ab3d80() {
   return (neuron0x1ab0c60()*-0.382027);
}

double NNfunction_ss_uLsR::synapse0x1ab4660() {
   return (neuron0x1ab0fa0()*-0.55555);
}

double NNfunction_ss_uLsR::synapse0x1ab46a0() {
   return (neuron0x1ab12e0()*0.227284);
}

double NNfunction_ss_uLsR::synapse0x1ab46e0() {
   return (neuron0x1ab1620()*0.157664);
}

double NNfunction_ss_uLsR::synapse0x1ab4060() {
   return (neuron0x1ab1960()*-0.153711);
}

double NNfunction_ss_uLsR::synapse0x1ab40a0() {
   return (neuron0x1ab1ec0()*0.125895);
}

double NNfunction_ss_uLsR::synapse0x1ab4830() {
   return (neuron0x1ab20e0()*0.0859256);
}

double NNfunction_ss_uLsR::synapse0x1ab4870() {
   return (neuron0x1ab2420()*0.443403);
}

double NNfunction_ss_uLsR::synapse0x1ab48b0() {
   return (neuron0x1ab2760()*0.268231);
}

double NNfunction_ss_uLsR::synapse0x1ab48f0() {
   return (neuron0x1ab2aa0()*-0.142084);
}

double NNfunction_ss_uLsR::synapse0x1ab4930() {
   return (neuron0x1ab2de0()*-0.138502);
}

double NNfunction_ss_uLsR::synapse0x1ab4970() {
   return (neuron0x1ab3120()*-0.166317);
}

double NNfunction_ss_uLsR::synapse0x1ab4cf0() {
   return (neuron0x1aae560()*0.134363);
}

double NNfunction_ss_uLsR::synapse0x1ab4d30() {
   return (neuron0x1aae8a0()*0.192967);
}

double NNfunction_ss_uLsR::synapse0x1ab4d70() {
   return (neuron0x1aaebe0()*-0.226841);
}

double NNfunction_ss_uLsR::synapse0x1ab4db0() {
   return (neuron0x1aaef20()*0.0992369);
}

double NNfunction_ss_uLsR::synapse0x1ab4df0() {
   return (neuron0x1aaf260()*-0.171345);
}

double NNfunction_ss_uLsR::synapse0x1ab4e30() {
   return (neuron0x1aaf5a0()*-0.122696);
}

double NNfunction_ss_uLsR::synapse0x1ab4e70() {
   return (neuron0x1aaf8e0()*-0.137111);
}

double NNfunction_ss_uLsR::synapse0x1ab4eb0() {
   return (neuron0x1aafc20()*0.0598969);
}

double NNfunction_ss_uLsR::synapse0x1ab4ef0() {
   return (neuron0x1aaff60()*0.127337);
}

double NNfunction_ss_uLsR::synapse0x1ab4f30() {
   return (neuron0x1ab02a0()*-0.118408);
}

double NNfunction_ss_uLsR::synapse0x1ab4f70() {
   return (neuron0x1ab05e0()*-0.00130933);
}

double NNfunction_ss_uLsR::synapse0x1ab4fb0() {
   return (neuron0x1ab0920()*-0.223611);
}

double NNfunction_ss_uLsR::synapse0x1ab4ff0() {
   return (neuron0x1ab0c60()*-0.505571);
}

double NNfunction_ss_uLsR::synapse0x1ab5030() {
   return (neuron0x1ab0fa0()*0.29105);
}

double NNfunction_ss_uLsR::synapse0x1ab5070() {
   return (neuron0x1ab12e0()*-0.246743);
}

double NNfunction_ss_uLsR::synapse0x1ab50b0() {
   return (neuron0x1ab1620()*-0.174897);
}

double NNfunction_ss_uLsR::synapse0x1ab4b40() {
   return (neuron0x1ab1960()*0.291424);
}

double NNfunction_ss_uLsR::synapse0x1ab4b80() {
   return (neuron0x1ab1ec0()*-0.682937);
}

double NNfunction_ss_uLsR::synapse0x186dac0() {
   return (neuron0x1ab20e0()*-0.329322);
}

double NNfunction_ss_uLsR::synapse0x186db00() {
   return (neuron0x1ab2420()*0.116694);
}

double NNfunction_ss_uLsR::synapse0x1a9d5f0() {
   return (neuron0x1ab2760()*-0.0806932);
}

double NNfunction_ss_uLsR::synapse0x1a9d630() {
   return (neuron0x1ab2aa0()*-0.182727);
}

double NNfunction_ss_uLsR::synapse0x1a9d670() {
   return (neuron0x1ab2de0()*0.0220222);
}

double NNfunction_ss_uLsR::synapse0x1aae4a0() {
   return (neuron0x1ab3120()*0.0323303);
}

double NNfunction_ss_uLsR::synapse0x1ab4600() {
   return (neuron0x1aae560()*0.0090221);
}

double NNfunction_ss_uLsR::synapse0x1aae4e0() {
   return (neuron0x1aae8a0()*0.000566893);
}

double NNfunction_ss_uLsR::synapse0x1aae520() {
   return (neuron0x1aaebe0()*-0.00619098);
}

double NNfunction_ss_uLsR::synapse0x1ab5200() {
   return (neuron0x1aaef20()*2.5494);
}

double NNfunction_ss_uLsR::synapse0x1ab5240() {
   return (neuron0x1aaf260()*-0.0137861);
}

double NNfunction_ss_uLsR::synapse0x1ab5280() {
   return (neuron0x1aaf5a0()*0.0166089);
}

double NNfunction_ss_uLsR::synapse0x1ab52c0() {
   return (neuron0x1aaf8e0()*0.013807);
}

double NNfunction_ss_uLsR::synapse0x1ab5300() {
   return (neuron0x1aafc20()*0.00284053);
}

double NNfunction_ss_uLsR::synapse0x1ab5340() {
   return (neuron0x1aaff60()*0.0456828);
}

double NNfunction_ss_uLsR::synapse0x1ab5380() {
   return (neuron0x1ab02a0()*-0.00107238);
}

double NNfunction_ss_uLsR::synapse0x1ab53c0() {
   return (neuron0x1ab05e0()*0.0211087);
}

double NNfunction_ss_uLsR::synapse0x1ab5400() {
   return (neuron0x1ab0920()*-0.214087);
}

double NNfunction_ss_uLsR::synapse0x1ab5440() {
   return (neuron0x1ab0c60()*0.00867788);
}

double NNfunction_ss_uLsR::synapse0x1ab5480() {
   return (neuron0x1ab0fa0()*-0.0258668);
}

double NNfunction_ss_uLsR::synapse0x1ab54c0() {
   return (neuron0x1ab12e0()*-0.0456779);
}

double NNfunction_ss_uLsR::synapse0x1ab5500() {
   return (neuron0x1ab1620()*-0.0441076);
}

double NNfunction_ss_uLsR::synapse0x1ab4450() {
   return (neuron0x1ab1960()*-0.0527243);
}

double NNfunction_ss_uLsR::synapse0x1ab4490() {
   return (neuron0x1ab1ec0()*-0.0744311);
}

double NNfunction_ss_uLsR::synapse0x1ab5650() {
   return (neuron0x1ab20e0()*-0.184468);
}

double NNfunction_ss_uLsR::synapse0x1ab5690() {
   return (neuron0x1ab2420()*-0.0033212);
}

double NNfunction_ss_uLsR::synapse0x1ab56d0() {
   return (neuron0x1ab2760()*0.0192483);
}

double NNfunction_ss_uLsR::synapse0x1ab5710() {
   return (neuron0x1ab2aa0()*0.00278484);
}

double NNfunction_ss_uLsR::synapse0x1ab5750() {
   return (neuron0x1ab2de0()*0.0122695);
}

double NNfunction_ss_uLsR::synapse0x1ab5790() {
   return (neuron0x1ab3120()*-0.0311708);
}

double NNfunction_ss_uLsR::synapse0x1ab5b10() {
   return (neuron0x1aae560()*-0.0887458);
}

double NNfunction_ss_uLsR::synapse0x1ab5b50() {
   return (neuron0x1aae8a0()*-0.111925);
}

double NNfunction_ss_uLsR::synapse0x1ab5b90() {
   return (neuron0x1aaebe0()*0.135614);
}

double NNfunction_ss_uLsR::synapse0x1ab5bd0() {
   return (neuron0x1aaef20()*-0.920423);
}

double NNfunction_ss_uLsR::synapse0x1ab5c10() {
   return (neuron0x1aaf260()*-0.0333477);
}

double NNfunction_ss_uLsR::synapse0x1ab5c50() {
   return (neuron0x1aaf5a0()*0.0168909);
}

double NNfunction_ss_uLsR::synapse0x1ab5c90() {
   return (neuron0x1aaf8e0()*-0.199675);
}

double NNfunction_ss_uLsR::synapse0x1ab5cd0() {
   return (neuron0x1aafc20()*-0.0223899);
}

double NNfunction_ss_uLsR::synapse0x1ab5d10() {
   return (neuron0x1aaff60()*0.421539);
}

double NNfunction_ss_uLsR::synapse0x1ab5d50() {
   return (neuron0x1ab02a0()*-0.171182);
}

double NNfunction_ss_uLsR::synapse0x1ab5d90() {
   return (neuron0x1ab05e0()*-0.0601227);
}

double NNfunction_ss_uLsR::synapse0x1ab5dd0() {
   return (neuron0x1ab0920()*-0.73977);
}

double NNfunction_ss_uLsR::synapse0x1ab5e10() {
   return (neuron0x1ab0c60()*-0.366569);
}

double NNfunction_ss_uLsR::synapse0x1ab5e50() {
   return (neuron0x1ab0fa0()*-0.106266);
}

double NNfunction_ss_uLsR::synapse0x1ab5e90() {
   return (neuron0x1ab12e0()*0.117347);
}

double NNfunction_ss_uLsR::synapse0x1ab5ed0() {
   return (neuron0x1ab1620()*0.0160684);
}

double NNfunction_ss_uLsR::synapse0x1ab5960() {
   return (neuron0x1ab1960()*0.0805131);
}

double NNfunction_ss_uLsR::synapse0x1ab59a0() {
   return (neuron0x1ab1ec0()*-0.33419);
}

double NNfunction_ss_uLsR::synapse0x1ab6020() {
   return (neuron0x1ab20e0()*-0.593039);
}

double NNfunction_ss_uLsR::synapse0x1ab6060() {
   return (neuron0x1ab2420()*-0.339498);
}

double NNfunction_ss_uLsR::synapse0x1ab60a0() {
   return (neuron0x1ab2760()*0.067793);
}

double NNfunction_ss_uLsR::synapse0x1ab60e0() {
   return (neuron0x1ab2aa0()*-0.078549);
}

double NNfunction_ss_uLsR::synapse0x1ab6120() {
   return (neuron0x1ab2de0()*0.298969);
}

double NNfunction_ss_uLsR::synapse0x1ab6160() {
   return (neuron0x1ab3120()*0.342115);
}

double NNfunction_ss_uLsR::synapse0x1ab64e0() {
   return (neuron0x1aae560()*0.128253);
}

double NNfunction_ss_uLsR::synapse0x1ab6520() {
   return (neuron0x1aae8a0()*0.215465);
}

double NNfunction_ss_uLsR::synapse0x1ab6560() {
   return (neuron0x1aaebe0()*0.069181);
}

double NNfunction_ss_uLsR::synapse0x1ab65a0() {
   return (neuron0x1aaef20()*-0.361);
}

double NNfunction_ss_uLsR::synapse0x1ab65e0() {
   return (neuron0x1aaf260()*0.0799392);
}

double NNfunction_ss_uLsR::synapse0x1ab6620() {
   return (neuron0x1aaf5a0()*0.305371);
}

double NNfunction_ss_uLsR::synapse0x1ab6660() {
   return (neuron0x1aaf8e0()*0.620358);
}

double NNfunction_ss_uLsR::synapse0x1ab66a0() {
   return (neuron0x1aafc20()*-0.440631);
}

double NNfunction_ss_uLsR::synapse0x1ab66e0() {
   return (neuron0x1aaff60()*0.171635);
}

double NNfunction_ss_uLsR::synapse0x186de30() {
   return (neuron0x1ab02a0()*0.460219);
}

double NNfunction_ss_uLsR::synapse0x186de70() {
   return (neuron0x1ab05e0()*0.310166);
}

double NNfunction_ss_uLsR::synapse0x186deb0() {
   return (neuron0x1ab0920()*-0.34024);
}

double NNfunction_ss_uLsR::synapse0x186def0() {
   return (neuron0x1ab0c60()*0.330994);
}

double NNfunction_ss_uLsR::synapse0x186df30() {
   return (neuron0x1ab0fa0()*0.279745);
}

double NNfunction_ss_uLsR::synapse0x186df70() {
   return (neuron0x1ab12e0()*0.0735974);
}

double NNfunction_ss_uLsR::synapse0x186dfb0() {
   return (neuron0x1ab1620()*-0.209644);
}

double NNfunction_ss_uLsR::synapse0x1ab6330() {
   return (neuron0x1ab1960()*0.0465428);
}

double NNfunction_ss_uLsR::synapse0x1ab6370() {
   return (neuron0x1ab1ec0()*0.0205371);
}

double NNfunction_ss_uLsR::synapse0x186e100() {
   return (neuron0x1ab20e0()*-0.758458);
}

double NNfunction_ss_uLsR::synapse0x186e140() {
   return (neuron0x1ab2420()*0.493985);
}

double NNfunction_ss_uLsR::synapse0x186e180() {
   return (neuron0x1ab2760()*-0.121521);
}

double NNfunction_ss_uLsR::synapse0x186e1c0() {
   return (neuron0x1ab2aa0()*-0.565274);
}

double NNfunction_ss_uLsR::synapse0x186e200() {
   return (neuron0x1ab2de0()*-0.371644);
}

double NNfunction_ss_uLsR::synapse0x1ab6f30() {
   return (neuron0x1ab3120()*-0.355581);
}

double NNfunction_ss_uLsR::synapse0x1ab72b0() {
   return (neuron0x1aae560()*-0.249554);
}

double NNfunction_ss_uLsR::synapse0x1ab72f0() {
   return (neuron0x1aae8a0()*0.230897);
}

double NNfunction_ss_uLsR::synapse0x1ab7330() {
   return (neuron0x1aaebe0()*-0.638766);
}

double NNfunction_ss_uLsR::synapse0x1ab7370() {
   return (neuron0x1aaef20()*0.341527);
}

double NNfunction_ss_uLsR::synapse0x1ab73b0() {
   return (neuron0x1aaf260()*-0.086318);
}

double NNfunction_ss_uLsR::synapse0x1ab73f0() {
   return (neuron0x1aaf5a0()*-0.0193999);
}

double NNfunction_ss_uLsR::synapse0x1ab7430() {
   return (neuron0x1aaf8e0()*-0.236699);
}

double NNfunction_ss_uLsR::synapse0x1ab7470() {
   return (neuron0x1aafc20()*0.411442);
}

double NNfunction_ss_uLsR::synapse0x1ab74b0() {
   return (neuron0x1aaff60()*0.109902);
}

double NNfunction_ss_uLsR::synapse0x1ab74f0() {
   return (neuron0x1ab02a0()*-0.042104);
}

double NNfunction_ss_uLsR::synapse0x1ab7530() {
   return (neuron0x1ab05e0()*-0.0674967);
}

double NNfunction_ss_uLsR::synapse0x1ab7570() {
   return (neuron0x1ab0920()*0.671153);
}

double NNfunction_ss_uLsR::synapse0x1ab75b0() {
   return (neuron0x1ab0c60()*-0.462617);
}

double NNfunction_ss_uLsR::synapse0x1ab75f0() {
   return (neuron0x1ab0fa0()*-0.748311);
}

double NNfunction_ss_uLsR::synapse0x1ab7630() {
   return (neuron0x1ab12e0()*0.231058);
}

double NNfunction_ss_uLsR::synapse0x1ab7670() {
   return (neuron0x1ab1620()*0.0123055);
}

double NNfunction_ss_uLsR::synapse0x1ab7100() {
   return (neuron0x1ab1960()*0.173906);
}

double NNfunction_ss_uLsR::synapse0x1ab7140() {
   return (neuron0x1ab1ec0()*0.258285);
}

double NNfunction_ss_uLsR::synapse0x1ab77c0() {
   return (neuron0x1ab20e0()*-0.310089);
}

double NNfunction_ss_uLsR::synapse0x1ab7800() {
   return (neuron0x1ab2420()*0.541337);
}

double NNfunction_ss_uLsR::synapse0x1ab7840() {
   return (neuron0x1ab2760()*-0.221918);
}

double NNfunction_ss_uLsR::synapse0x1ab7880() {
   return (neuron0x1ab2aa0()*-0.0216624);
}

double NNfunction_ss_uLsR::synapse0x1ab78c0() {
   return (neuron0x1ab2de0()*-0.270353);
}

double NNfunction_ss_uLsR::synapse0x1ab7900() {
   return (neuron0x1ab3120()*-0.0537202);
}

double NNfunction_ss_uLsR::synapse0x1ab7c80() {
   return (neuron0x1aae560()*0.0107819);
}

double NNfunction_ss_uLsR::synapse0x1ab7cc0() {
   return (neuron0x1aae8a0()*-0.268377);
}

double NNfunction_ss_uLsR::synapse0x1ab7d00() {
   return (neuron0x1aaebe0()*-0.0794253);
}

double NNfunction_ss_uLsR::synapse0x1ab7d40() {
   return (neuron0x1aaef20()*-0.418515);
}

double NNfunction_ss_uLsR::synapse0x1ab7d80() {
   return (neuron0x1aaf260()*-0.208296);
}

double NNfunction_ss_uLsR::synapse0x1ab7dc0() {
   return (neuron0x1aaf5a0()*0.130289);
}

double NNfunction_ss_uLsR::synapse0x1ab7e00() {
   return (neuron0x1aaf8e0()*-0.0922582);
}

double NNfunction_ss_uLsR::synapse0x1ab7e40() {
   return (neuron0x1aafc20()*0.227406);
}

double NNfunction_ss_uLsR::synapse0x1ab7e80() {
   return (neuron0x1aaff60()*0.0942869);
}

double NNfunction_ss_uLsR::synapse0x1ab7ec0() {
   return (neuron0x1ab02a0()*-0.142138);
}

double NNfunction_ss_uLsR::synapse0x1ab7f00() {
   return (neuron0x1ab05e0()*-0.993657);
}

double NNfunction_ss_uLsR::synapse0x1ab7f40() {
   return (neuron0x1ab0920()*-0.00156908);
}

double NNfunction_ss_uLsR::synapse0x1ab7f80() {
   return (neuron0x1ab0c60()*0.0759286);
}

double NNfunction_ss_uLsR::synapse0x1ab7fc0() {
   return (neuron0x1ab0fa0()*-0.0097764);
}

double NNfunction_ss_uLsR::synapse0x1ab8000() {
   return (neuron0x1ab12e0()*-0.0337246);
}

double NNfunction_ss_uLsR::synapse0x1ab8040() {
   return (neuron0x1ab1620()*0.0204323);
}

double NNfunction_ss_uLsR::synapse0x1ab7ad0() {
   return (neuron0x1ab1960()*-0.20064);
}

double NNfunction_ss_uLsR::synapse0x1ab7b10() {
   return (neuron0x1ab1ec0()*0.322552);
}

double NNfunction_ss_uLsR::synapse0x1ab8190() {
   return (neuron0x1ab20e0()*0.333671);
}

double NNfunction_ss_uLsR::synapse0x1ab81d0() {
   return (neuron0x1ab2420()*0.189259);
}

double NNfunction_ss_uLsR::synapse0x1ab8210() {
   return (neuron0x1ab2760()*-0.0322543);
}

double NNfunction_ss_uLsR::synapse0x1ab8250() {
   return (neuron0x1ab2aa0()*-0.491502);
}

double NNfunction_ss_uLsR::synapse0x1ab8290() {
   return (neuron0x1ab2de0()*0.152792);
}

double NNfunction_ss_uLsR::synapse0x1ab82d0() {
   return (neuron0x1ab3120()*-0.342424);
}

double NNfunction_ss_uLsR::synapse0x1ab1db0() {
   return (neuron0x1aae560()*0.0251988);
}

double NNfunction_ss_uLsR::synapse0x1ab1df0() {
   return (neuron0x1aae8a0()*0.0411183);
}

double NNfunction_ss_uLsR::synapse0x1ab1e30() {
   return (neuron0x1aaebe0()*0.0156519);
}

double NNfunction_ss_uLsR::synapse0x1ab1e70() {
   return (neuron0x1aaef20()*1.10778);
}

double NNfunction_ss_uLsR::synapse0x1ab8860() {
   return (neuron0x1aaf260()*-0.0178903);
}

double NNfunction_ss_uLsR::synapse0x1ab88a0() {
   return (neuron0x1aaf5a0()*0.0144926);
}

double NNfunction_ss_uLsR::synapse0x1ab88e0() {
   return (neuron0x1aaf8e0()*-0.0894191);
}

double NNfunction_ss_uLsR::synapse0x1ab8920() {
   return (neuron0x1aafc20()*0.0326668);
}

double NNfunction_ss_uLsR::synapse0x1ab8960() {
   return (neuron0x1aaff60()*-0.0652369);
}

double NNfunction_ss_uLsR::synapse0x1ab89a0() {
   return (neuron0x1ab02a0()*0.0217462);
}

double NNfunction_ss_uLsR::synapse0x1ab89e0() {
   return (neuron0x1ab05e0()*-0.0386977);
}

double NNfunction_ss_uLsR::synapse0x1ab8a20() {
   return (neuron0x1ab0920()*-0.475614);
}

double NNfunction_ss_uLsR::synapse0x1ab8a60() {
   return (neuron0x1ab0c60()*0.0367793);
}

double NNfunction_ss_uLsR::synapse0x1ab8aa0() {
   return (neuron0x1ab0fa0()*0.0256728);
}

double NNfunction_ss_uLsR::synapse0x1ab8ae0() {
   return (neuron0x1ab12e0()*0.0341661);
}

double NNfunction_ss_uLsR::synapse0x1ab8b20() {
   return (neuron0x1ab1620()*-0.0185105);
}

double NNfunction_ss_uLsR::synapse0x1ab84a0() {
   return (neuron0x1ab1960()*-0.0157589);
}

double NNfunction_ss_uLsR::synapse0x1ab84e0() {
   return (neuron0x1ab1ec0()*0.043103);
}

double NNfunction_ss_uLsR::synapse0x1ab8c70() {
   return (neuron0x1ab20e0()*0.574841);
}

double NNfunction_ss_uLsR::synapse0x1ab8cb0() {
   return (neuron0x1ab2420()*0.00344287);
}

double NNfunction_ss_uLsR::synapse0x1ab8cf0() {
   return (neuron0x1ab2760()*-0.0112385);
}

double NNfunction_ss_uLsR::synapse0x1ab8d30() {
   return (neuron0x1ab2aa0()*0.073085);
}

double NNfunction_ss_uLsR::synapse0x1ab8d70() {
   return (neuron0x1ab2de0()*-0.0156403);
}

double NNfunction_ss_uLsR::synapse0x1ab8db0() {
   return (neuron0x1ab3120()*-0.00559272);
}

double NNfunction_ss_uLsR::synapse0x1ab9130() {
   return (neuron0x1aae560()*0.13426);
}

double NNfunction_ss_uLsR::synapse0x1ab9170() {
   return (neuron0x1aae8a0()*0.048974);
}

double NNfunction_ss_uLsR::synapse0x1ab91b0() {
   return (neuron0x1aaebe0()*-0.561053);
}

double NNfunction_ss_uLsR::synapse0x1ab91f0() {
   return (neuron0x1aaef20()*0.507454);
}

double NNfunction_ss_uLsR::synapse0x1ab9230() {
   return (neuron0x1aaf260()*-0.0659869);
}

double NNfunction_ss_uLsR::synapse0x1ab9270() {
   return (neuron0x1aaf5a0()*0.230933);
}

double NNfunction_ss_uLsR::synapse0x1ab92b0() {
   return (neuron0x1aaf8e0()*-0.254469);
}

double NNfunction_ss_uLsR::synapse0x1ab92f0() {
   return (neuron0x1aafc20()*-0.314659);
}

double NNfunction_ss_uLsR::synapse0x1ab9330() {
   return (neuron0x1aaff60()*-0.209249);
}

double NNfunction_ss_uLsR::synapse0x1ab9370() {
   return (neuron0x1ab02a0()*-0.128126);
}

double NNfunction_ss_uLsR::synapse0x1ab93b0() {
   return (neuron0x1ab05e0()*0.152972);
}

double NNfunction_ss_uLsR::synapse0x1ab93f0() {
   return (neuron0x1ab0920()*-0.299771);
}

double NNfunction_ss_uLsR::synapse0x1ab9430() {
   return (neuron0x1ab0c60()*0.130509);
}

double NNfunction_ss_uLsR::synapse0x1ab9470() {
   return (neuron0x1ab0fa0()*0.156195);
}

double NNfunction_ss_uLsR::synapse0x1ab94b0() {
   return (neuron0x1ab12e0()*-0.208166);
}

double NNfunction_ss_uLsR::synapse0x1ab94f0() {
   return (neuron0x1ab1620()*0.315543);
}

double NNfunction_ss_uLsR::synapse0x1ab8f80() {
   return (neuron0x1ab1960()*0.469821);
}

double NNfunction_ss_uLsR::synapse0x1ab8fc0() {
   return (neuron0x1ab1ec0()*-0.148282);
}

double NNfunction_ss_uLsR::synapse0x1ab9640() {
   return (neuron0x1ab20e0()*-0.137033);
}

double NNfunction_ss_uLsR::synapse0x1ab9680() {
   return (neuron0x1ab2420()*0.0372527);
}

double NNfunction_ss_uLsR::synapse0x1ab96c0() {
   return (neuron0x1ab2760()*-0.388456);
}

double NNfunction_ss_uLsR::synapse0x1ab9700() {
   return (neuron0x1ab2aa0()*0.359412);
}

double NNfunction_ss_uLsR::synapse0x1ab9740() {
   return (neuron0x1ab2de0()*0.257616);
}

double NNfunction_ss_uLsR::synapse0x1ab9780() {
   return (neuron0x1ab3120()*-0.143701);
}

double NNfunction_ss_uLsR::synapse0x1ab9b00() {
   return (neuron0x1aae560()*-0.258761);
}

double NNfunction_ss_uLsR::synapse0x1ab9b40() {
   return (neuron0x1aae8a0()*0.243703);
}

double NNfunction_ss_uLsR::synapse0x1ab9b80() {
   return (neuron0x1aaebe0()*-0.777455);
}

double NNfunction_ss_uLsR::synapse0x1ab9bc0() {
   return (neuron0x1aaef20()*-0.491964);
}

double NNfunction_ss_uLsR::synapse0x1ab9c00() {
   return (neuron0x1aaf260()*-0.333386);
}

double NNfunction_ss_uLsR::synapse0x1ab9c40() {
   return (neuron0x1aaf5a0()*-0.239313);
}

double NNfunction_ss_uLsR::synapse0x1ab9c80() {
   return (neuron0x1aaf8e0()*0.117468);
}

double NNfunction_ss_uLsR::synapse0x1ab9cc0() {
   return (neuron0x1aafc20()*-0.140203);
}

double NNfunction_ss_uLsR::synapse0x1ab9d00() {
   return (neuron0x1aaff60()*-0.257919);
}

double NNfunction_ss_uLsR::synapse0x1ab9d40() {
   return (neuron0x1ab02a0()*-0.103227);
}

double NNfunction_ss_uLsR::synapse0x1ab9d80() {
   return (neuron0x1ab05e0()*0.090362);
}

double NNfunction_ss_uLsR::synapse0x1ab9dc0() {
   return (neuron0x1ab0920()*-0.849825);
}

double NNfunction_ss_uLsR::synapse0x1ab9e00() {
   return (neuron0x1ab0c60()*-0.254098);
}

double NNfunction_ss_uLsR::synapse0x1ab9e40() {
   return (neuron0x1ab0fa0()*0.0996467);
}

double NNfunction_ss_uLsR::synapse0x1ab9e80() {
   return (neuron0x1ab12e0()*0.111111);
}

double NNfunction_ss_uLsR::synapse0x1ab9ec0() {
   return (neuron0x1ab1620()*-0.233093);
}

double NNfunction_ss_uLsR::synapse0x1ab9950() {
   return (neuron0x1ab1960()*0.117391);
}

double NNfunction_ss_uLsR::synapse0x1ab9990() {
   return (neuron0x1ab1ec0()*0.121705);
}

double NNfunction_ss_uLsR::synapse0x1ab6720() {
   return (neuron0x1ab20e0()*-0.365472);
}

double NNfunction_ss_uLsR::synapse0x1ab6760() {
   return (neuron0x1ab2420()*0.094519);
}

double NNfunction_ss_uLsR::synapse0x1ab67a0() {
   return (neuron0x1ab2760()*-0.0281144);
}

double NNfunction_ss_uLsR::synapse0x1ab67e0() {
   return (neuron0x1ab2aa0()*-0.0284332);
}

double NNfunction_ss_uLsR::synapse0x1ab6820() {
   return (neuron0x1ab2de0()*-0.137392);
}

double NNfunction_ss_uLsR::synapse0x1ab6860() {
   return (neuron0x1ab3120()*-0.116045);
}

double NNfunction_ss_uLsR::synapse0x1ab6be0() {
   return (neuron0x1aae560()*-0.272018);
}

double NNfunction_ss_uLsR::synapse0x1ab6c20() {
   return (neuron0x1aae8a0()*-0.193883);
}

double NNfunction_ss_uLsR::synapse0x1ab6c60() {
   return (neuron0x1aaebe0()*0.146791);
}

double NNfunction_ss_uLsR::synapse0x1ab6ca0() {
   return (neuron0x1aaef20()*-0.0895544);
}

double NNfunction_ss_uLsR::synapse0x1ab6ce0() {
   return (neuron0x1aaf260()*0.16341);
}

double NNfunction_ss_uLsR::synapse0x1ab6d20() {
   return (neuron0x1aaf5a0()*-0.525082);
}

double NNfunction_ss_uLsR::synapse0x1ab6d60() {
   return (neuron0x1aaf8e0()*0.0471644);
}

double NNfunction_ss_uLsR::synapse0x1ab6da0() {
   return (neuron0x1aafc20()*-0.432796);
}

double NNfunction_ss_uLsR::synapse0x1ab6de0() {
   return (neuron0x1aaff60()*-0.427924);
}

double NNfunction_ss_uLsR::synapse0x1ab6e20() {
   return (neuron0x1ab02a0()*0.116042);
}

double NNfunction_ss_uLsR::synapse0x1ab6e60() {
   return (neuron0x1ab05e0()*0.0446126);
}

double NNfunction_ss_uLsR::synapse0x1ab6ea0() {
   return (neuron0x1ab0920()*-1.25764);
}

double NNfunction_ss_uLsR::synapse0x1ab6ee0() {
   return (neuron0x1ab0c60()*0.290292);
}

double NNfunction_ss_uLsR::synapse0x1abb020() {
   return (neuron0x1ab0fa0()*0.644683);
}

double NNfunction_ss_uLsR::synapse0x1abb060() {
   return (neuron0x1ab12e0()*-0.366987);
}

double NNfunction_ss_uLsR::synapse0x1abb0a0() {
   return (neuron0x1ab1620()*-0.101946);
}

double NNfunction_ss_uLsR::synapse0x1ab6a30() {
   return (neuron0x1ab1960()*-0.182703);
}

double NNfunction_ss_uLsR::synapse0x1ab6a70() {
   return (neuron0x1ab1ec0()*-0.147166);
}

double NNfunction_ss_uLsR::synapse0x1abb1f0() {
   return (neuron0x1ab20e0()*-0.0122512);
}

double NNfunction_ss_uLsR::synapse0x1abb230() {
   return (neuron0x1ab2420()*-0.180777);
}

double NNfunction_ss_uLsR::synapse0x1abb270() {
   return (neuron0x1ab2760()*-0.0124686);
}

double NNfunction_ss_uLsR::synapse0x1abb2b0() {
   return (neuron0x1ab2aa0()*0.030039);
}

double NNfunction_ss_uLsR::synapse0x1abb2f0() {
   return (neuron0x1ab2de0()*-0.197061);
}

double NNfunction_ss_uLsR::synapse0x1abb330() {
   return (neuron0x1ab3120()*-0.466632);
}

double NNfunction_ss_uLsR::synapse0x1abb6b0() {
   return (neuron0x1aae560()*0.0295413);
}

double NNfunction_ss_uLsR::synapse0x1abb6f0() {
   return (neuron0x1aae8a0()*-0.0110412);
}

double NNfunction_ss_uLsR::synapse0x1abb730() {
   return (neuron0x1aaebe0()*-0.0614402);
}

double NNfunction_ss_uLsR::synapse0x1abb770() {
   return (neuron0x1aaef20()*0.00107945);
}

double NNfunction_ss_uLsR::synapse0x1abb7b0() {
   return (neuron0x1aaf260()*0.0141478);
}

double NNfunction_ss_uLsR::synapse0x1abb7f0() {
   return (neuron0x1aaf5a0()*-0.0163669);
}

double NNfunction_ss_uLsR::synapse0x1abb830() {
   return (neuron0x1aaf8e0()*0.0331935);
}

double NNfunction_ss_uLsR::synapse0x1abb870() {
   return (neuron0x1aafc20()*-0.0406361);
}

double NNfunction_ss_uLsR::synapse0x1abb8b0() {
   return (neuron0x1aaff60()*0.066731);
}

double NNfunction_ss_uLsR::synapse0x1abb8f0() {
   return (neuron0x1ab02a0()*0.00299402);
}

double NNfunction_ss_uLsR::synapse0x1abb930() {
   return (neuron0x1ab05e0()*0.0213784);
}

double NNfunction_ss_uLsR::synapse0x1abb970() {
   return (neuron0x1ab0920()*0.733276);
}

double NNfunction_ss_uLsR::synapse0x1abb9b0() {
   return (neuron0x1ab0c60()*-0.0686573);
}

double NNfunction_ss_uLsR::synapse0x1abb9f0() {
   return (neuron0x1ab0fa0()*0.00125631);
}

double NNfunction_ss_uLsR::synapse0x1abba30() {
   return (neuron0x1ab12e0()*0.0252725);
}

double NNfunction_ss_uLsR::synapse0x1abba70() {
   return (neuron0x1ab1620()*2.26875e-05);
}

double NNfunction_ss_uLsR::synapse0x1abb500() {
   return (neuron0x1ab1960()*-0.00511242);
}

double NNfunction_ss_uLsR::synapse0x1abb540() {
   return (neuron0x1ab1ec0()*-0.0349471);
}

double NNfunction_ss_uLsR::synapse0x1abbbc0() {
   return (neuron0x1ab20e0()*0.517397);
}

double NNfunction_ss_uLsR::synapse0x1abbc00() {
   return (neuron0x1ab2420()*-0.00625503);
}

double NNfunction_ss_uLsR::synapse0x1abbc40() {
   return (neuron0x1ab2760()*0.00844782);
}

double NNfunction_ss_uLsR::synapse0x1abbc80() {
   return (neuron0x1ab2aa0()*-0.0440547);
}

double NNfunction_ss_uLsR::synapse0x1abbcc0() {
   return (neuron0x1ab2de0()*-0.0240956);
}

double NNfunction_ss_uLsR::synapse0x1abbd00() {
   return (neuron0x1ab3120()*0.0349494);
}

double NNfunction_ss_uLsR::synapse0x1abc080() {
   return (neuron0x1aae560()*-0.0894808);
}

double NNfunction_ss_uLsR::synapse0x1abc0c0() {
   return (neuron0x1aae8a0()*0.494929);
}

double NNfunction_ss_uLsR::synapse0x1abc100() {
   return (neuron0x1aaebe0()*0.152231);
}

double NNfunction_ss_uLsR::synapse0x1abc140() {
   return (neuron0x1aaef20()*-0.169136);
}

double NNfunction_ss_uLsR::synapse0x1abc180() {
   return (neuron0x1aaf260()*-0.243681);
}

double NNfunction_ss_uLsR::synapse0x1abc1c0() {
   return (neuron0x1aaf5a0()*0.178086);
}

double NNfunction_ss_uLsR::synapse0x1abc200() {
   return (neuron0x1aaf8e0()*0.389888);
}

double NNfunction_ss_uLsR::synapse0x1abc240() {
   return (neuron0x1aafc20()*-0.233762);
}

double NNfunction_ss_uLsR::synapse0x1abc280() {
   return (neuron0x1aaff60()*-0.0622416);
}

double NNfunction_ss_uLsR::synapse0x1abc2c0() {
   return (neuron0x1ab02a0()*-0.168548);
}

double NNfunction_ss_uLsR::synapse0x1abc300() {
   return (neuron0x1ab05e0()*0.155098);
}

double NNfunction_ss_uLsR::synapse0x1abc340() {
   return (neuron0x1ab0920()*-0.464806);
}

double NNfunction_ss_uLsR::synapse0x1abc380() {
   return (neuron0x1ab0c60()*0.550258);
}

double NNfunction_ss_uLsR::synapse0x1abc3c0() {
   return (neuron0x1ab0fa0()*-0.069436);
}

double NNfunction_ss_uLsR::synapse0x1abc400() {
   return (neuron0x1ab12e0()*-0.359349);
}

double NNfunction_ss_uLsR::synapse0x1abc440() {
   return (neuron0x1ab1620()*-0.23042);
}

double NNfunction_ss_uLsR::synapse0x1abbed0() {
   return (neuron0x1ab1960()*-0.155223);
}

double NNfunction_ss_uLsR::synapse0x1abbf10() {
   return (neuron0x1ab1ec0()*0.175284);
}

double NNfunction_ss_uLsR::synapse0x1abc590() {
   return (neuron0x1ab20e0()*0.86141);
}

double NNfunction_ss_uLsR::synapse0x1abc5d0() {
   return (neuron0x1ab2420()*-0.0275386);
}

double NNfunction_ss_uLsR::synapse0x1abc610() {
   return (neuron0x1ab2760()*0.431319);
}

double NNfunction_ss_uLsR::synapse0x1abc650() {
   return (neuron0x1ab2aa0()*-0.0981423);
}

double NNfunction_ss_uLsR::synapse0x1abc690() {
   return (neuron0x1ab2de0()*0.535575);
}

double NNfunction_ss_uLsR::synapse0x1abc6d0() {
   return (neuron0x1ab3120()*0.433293);
}

double NNfunction_ss_uLsR::synapse0x1abca50() {
   return (neuron0x1aae560()*0.433868);
}

double NNfunction_ss_uLsR::synapse0x1abca90() {
   return (neuron0x1aae8a0()*-0.152733);
}

double NNfunction_ss_uLsR::synapse0x1abcad0() {
   return (neuron0x1aaebe0()*-0.724963);
}

double NNfunction_ss_uLsR::synapse0x1abcb10() {
   return (neuron0x1aaef20()*-0.133914);
}

double NNfunction_ss_uLsR::synapse0x1abcb50() {
   return (neuron0x1aaf260()*0.0456473);
}

double NNfunction_ss_uLsR::synapse0x1abcb90() {
   return (neuron0x1aaf5a0()*-0.163069);
}

double NNfunction_ss_uLsR::synapse0x1abcbd0() {
   return (neuron0x1aaf8e0()*0.263735);
}

double NNfunction_ss_uLsR::synapse0x1abcc10() {
   return (neuron0x1aafc20()*0.0611624);
}

double NNfunction_ss_uLsR::synapse0x1abcc50() {
   return (neuron0x1aaff60()*-0.127105);
}

double NNfunction_ss_uLsR::synapse0x1abcc90() {
   return (neuron0x1ab02a0()*0.238092);
}

double NNfunction_ss_uLsR::synapse0x1abccd0() {
   return (neuron0x1ab05e0()*0.0477551);
}

double NNfunction_ss_uLsR::synapse0x1abcd10() {
   return (neuron0x1ab0920()*-0.0506046);
}

double NNfunction_ss_uLsR::synapse0x1abcd50() {
   return (neuron0x1ab0c60()*0.0799939);
}

double NNfunction_ss_uLsR::synapse0x1abcd90() {
   return (neuron0x1ab0fa0()*-0.141193);
}

double NNfunction_ss_uLsR::synapse0x1abcdd0() {
   return (neuron0x1ab12e0()*0.902155);
}

double NNfunction_ss_uLsR::synapse0x1abce10() {
   return (neuron0x1ab1620()*0.280901);
}

double NNfunction_ss_uLsR::synapse0x1abc8a0() {
   return (neuron0x1ab1960()*0.0299833);
}

double NNfunction_ss_uLsR::synapse0x1abc8e0() {
   return (neuron0x1ab1ec0()*0.173046);
}

double NNfunction_ss_uLsR::synapse0x1abcf60() {
   return (neuron0x1ab20e0()*-0.172232);
}

double NNfunction_ss_uLsR::synapse0x1abcfa0() {
   return (neuron0x1ab2420()*-0.510656);
}

double NNfunction_ss_uLsR::synapse0x1abcfe0() {
   return (neuron0x1ab2760()*0.296946);
}

double NNfunction_ss_uLsR::synapse0x1abd020() {
   return (neuron0x1ab2aa0()*-0.0458849);
}

double NNfunction_ss_uLsR::synapse0x1abd060() {
   return (neuron0x1ab2de0()*-0.477722);
}

double NNfunction_ss_uLsR::synapse0x1abd0a0() {
   return (neuron0x1ab3120()*-0.124115);
}

double NNfunction_ss_uLsR::synapse0x1abd420() {
   return (neuron0x1aae560()*-0.00463564);
}

double NNfunction_ss_uLsR::synapse0x1aae780() {
   return (neuron0x1aae8a0()*0.0180042);
}

double NNfunction_ss_uLsR::synapse0x1aae7c0() {
   return (neuron0x1aaebe0()*0.00788189);
}

double NNfunction_ss_uLsR::synapse0x1aaeac0() {
   return (neuron0x1aaef20()*-6.81301);
}

double NNfunction_ss_uLsR::synapse0x1aaeb00() {
   return (neuron0x1aaf260()*-0.00128612);
}

double NNfunction_ss_uLsR::synapse0x1aaee00() {
   return (neuron0x1aaf5a0()*0.0086985);
}

double NNfunction_ss_uLsR::synapse0x1aaee40() {
   return (neuron0x1aaf8e0()*0.00513249);
}

double NNfunction_ss_uLsR::synapse0x1aaf140() {
   return (neuron0x1aafc20()*0.00231856);
}

double NNfunction_ss_uLsR::synapse0x1aaf180() {
   return (neuron0x1aaff60()*0.0215866);
}

double NNfunction_ss_uLsR::synapse0x1aaf480() {
   return (neuron0x1ab02a0()*-0.00887734);
}

double NNfunction_ss_uLsR::synapse0x1aaf4c0() {
   return (neuron0x1ab05e0()*0.0234237);
}

double NNfunction_ss_uLsR::synapse0x1aaf7c0() {
   return (neuron0x1ab0920()*0.137587);
}

double NNfunction_ss_uLsR::synapse0x1aaf800() {
   return (neuron0x1ab0c60()*0.0798246);
}

double NNfunction_ss_uLsR::synapse0x1aafb00() {
   return (neuron0x1ab0fa0()*0.00763452);
}

double NNfunction_ss_uLsR::synapse0x1aafb40() {
   return (neuron0x1ab12e0()*-0.0276945);
}

double NNfunction_ss_uLsR::synapse0x1aafe40() {
   return (neuron0x1ab1620()*-0.00730425);
}

double NNfunction_ss_uLsR::synapse0x1aafe80() {
   return (neuron0x1ab1960()*-0.00839);
}

double NNfunction_ss_uLsR::synapse0x1ab0180() {
   return (neuron0x1ab1ec0()*0.0103966);
}

double NNfunction_ss_uLsR::synapse0x1ab01c0() {
   return (neuron0x1ab20e0()*0.0893687);
}

double NNfunction_ss_uLsR::synapse0x1ab04c0() {
   return (neuron0x1ab2420()*-0.00583823);
}

double NNfunction_ss_uLsR::synapse0x1ab0500() {
   return (neuron0x1ab2760()*0.00703509);
}

double NNfunction_ss_uLsR::synapse0x1ab0800() {
   return (neuron0x1ab2aa0()*0.0107625);
}

double NNfunction_ss_uLsR::synapse0x1ab0840() {
   return (neuron0x1ab2de0()*0.0221998);
}

double NNfunction_ss_uLsR::synapse0x1ab0b40() {
   return (neuron0x1ab3120()*-0.0122225);
}

double NNfunction_ss_uLsR::synapse0x1ab0b80() {
   return (neuron0x1aae560()*-0.0493312);
}

double NNfunction_ss_uLsR::synapse0x1ab1840() {
   return (neuron0x1aae8a0()*-0.0181847);
}

double NNfunction_ss_uLsR::synapse0x1ab1880() {
   return (neuron0x1aaebe0()*0.0296208);
}

double NNfunction_ss_uLsR::synapse0x1abd270() {
   return (neuron0x1aaef20()*-1.94701);
}

double NNfunction_ss_uLsR::synapse0x1abd2b0() {
   return (neuron0x1aaf260()*0.0287923);
}

double NNfunction_ss_uLsR::synapse0x1ab1b80() {
   return (neuron0x1aaf5a0()*-0.00307986);
}

double NNfunction_ss_uLsR::synapse0x1ab1bc0() {
   return (neuron0x1aaf8e0()*0.0512482);
}

double NNfunction_ss_uLsR::synapse0x185fb50() {
   return (neuron0x1aafc20()*-0.0228047);
}

double NNfunction_ss_uLsR::synapse0x185fb90() {
   return (neuron0x1aaff60()*-0.00871495);
}

double NNfunction_ss_uLsR::synapse0x1ab2300() {
   return (neuron0x1ab02a0()*-0.024353);
}

double NNfunction_ss_uLsR::synapse0x1ab2340() {
   return (neuron0x1ab05e0()*0.0272075);
}

double NNfunction_ss_uLsR::synapse0x1ab2640() {
   return (neuron0x1ab0920()*0.0564606);
}

double NNfunction_ss_uLsR::synapse0x1ab2680() {
   return (neuron0x1ab0c60()*-0.0464176);
}

double NNfunction_ss_uLsR::synapse0x1ab2980() {
   return (neuron0x1ab0fa0()*-0.0091803);
}

double NNfunction_ss_uLsR::synapse0x1ab29c0() {
   return (neuron0x1ab12e0()*0.00191638);
}

double NNfunction_ss_uLsR::synapse0x1ab2cc0() {
   return (neuron0x1ab1620()*-0.00721228);
}

double NNfunction_ss_uLsR::synapse0x1ab2d00() {
   return (neuron0x1ab1960()*-0.0125269);
}

double NNfunction_ss_uLsR::synapse0x1ab3000() {
   return (neuron0x1ab1ec0()*-0.0527587);
}

double NNfunction_ss_uLsR::synapse0x1ab3040() {
   return (neuron0x1ab20e0()*0.0123618);
}

double NNfunction_ss_uLsR::synapse0x1ab3340() {
   return (neuron0x1ab2420()*0.000215102);
}

double NNfunction_ss_uLsR::synapse0x1ab3380() {
   return (neuron0x1ab2760()*0.0101244);
}

double NNfunction_ss_uLsR::synapse0x1ab0e80() {
   return (neuron0x1ab2aa0()*-0.0164091);
}

double NNfunction_ss_uLsR::synapse0x1ab0ec0() {
   return (neuron0x1ab2de0()*0.0176623);
}

double NNfunction_ss_uLsR::synapse0x1abf190() {
   return (neuron0x1ab3120()*0.0690182);
}

double NNfunction_ss_uLsR::synapse0x1abf510() {
   return (neuron0x1aae560()*-0.0130239);
}

double NNfunction_ss_uLsR::synapse0x1abf550() {
   return (neuron0x1aae8a0()*0.0023831);
}

double NNfunction_ss_uLsR::synapse0x1abf590() {
   return (neuron0x1aaebe0()*0.0420213);
}

double NNfunction_ss_uLsR::synapse0x1abf5d0() {
   return (neuron0x1aaef20()*-1.49883);
}

double NNfunction_ss_uLsR::synapse0x1abf610() {
   return (neuron0x1aaf260()*0.0208556);
}

double NNfunction_ss_uLsR::synapse0x1abf650() {
   return (neuron0x1aaf5a0()*6.01953e-05);
}

double NNfunction_ss_uLsR::synapse0x1abf690() {
   return (neuron0x1aaf8e0()*0.037693);
}

double NNfunction_ss_uLsR::synapse0x1abf6d0() {
   return (neuron0x1aafc20()*-0.0181901);
}

double NNfunction_ss_uLsR::synapse0x1abf710() {
   return (neuron0x1aaff60()*0.00930973);
}

double NNfunction_ss_uLsR::synapse0x1abf750() {
   return (neuron0x1ab02a0()*-0.00816168);
}

double NNfunction_ss_uLsR::synapse0x1abf790() {
   return (neuron0x1ab05e0()*0.012692);
}

double NNfunction_ss_uLsR::synapse0x1abf7d0() {
   return (neuron0x1ab0920()*-0.879515);
}

double NNfunction_ss_uLsR::synapse0x1abf810() {
   return (neuron0x1ab0c60()*0.0206205);
}

double NNfunction_ss_uLsR::synapse0x1abf850() {
   return (neuron0x1ab0fa0()*-0.00100037);
}

double NNfunction_ss_uLsR::synapse0x1abf890() {
   return (neuron0x1ab12e0()*-0.0620726);
}

double NNfunction_ss_uLsR::synapse0x1abf8d0() {
   return (neuron0x1ab1620()*-0.015219);
}

double NNfunction_ss_uLsR::synapse0x1abf360() {
   return (neuron0x1ab1960()*-0.0103122);
}

double NNfunction_ss_uLsR::synapse0x1abf3a0() {
   return (neuron0x1ab1ec0()*0.0219284);
}

double NNfunction_ss_uLsR::synapse0x1abfa20() {
   return (neuron0x1ab20e0()*-0.21673);
}

double NNfunction_ss_uLsR::synapse0x1abfa60() {
   return (neuron0x1ab2420()*0.0365852);
}

double NNfunction_ss_uLsR::synapse0x1abfaa0() {
   return (neuron0x1ab2760()*-0.0091349);
}

double NNfunction_ss_uLsR::synapse0x1abfae0() {
   return (neuron0x1ab2aa0()*-0.0312084);
}

double NNfunction_ss_uLsR::synapse0x1abfb20() {
   return (neuron0x1ab2de0()*-0.00113661);
}

double NNfunction_ss_uLsR::synapse0x1abfb60() {
   return (neuron0x1ab3120()*-0.0106646);
}

double NNfunction_ss_uLsR::synapse0x1abfee0() {
   return (neuron0x1aae560()*0.308936);
}

double NNfunction_ss_uLsR::synapse0x1abff20() {
   return (neuron0x1aae8a0()*-0.434917);
}

double NNfunction_ss_uLsR::synapse0x1abff60() {
   return (neuron0x1aaebe0()*-0.245876);
}

double NNfunction_ss_uLsR::synapse0x1abffa0() {
   return (neuron0x1aaef20()*0.104816);
}

double NNfunction_ss_uLsR::synapse0x1abffe0() {
   return (neuron0x1aaf260()*0.449192);
}

double NNfunction_ss_uLsR::synapse0x1ac0020() {
   return (neuron0x1aaf5a0()*0.148383);
}

double NNfunction_ss_uLsR::synapse0x1ac0060() {
   return (neuron0x1aaf8e0()*0.0797057);
}

double NNfunction_ss_uLsR::synapse0x1ac00a0() {
   return (neuron0x1aafc20()*-0.537087);
}

double NNfunction_ss_uLsR::synapse0x1ac00e0() {
   return (neuron0x1aaff60()*-0.360727);
}

double NNfunction_ss_uLsR::synapse0x1ac0120() {
   return (neuron0x1ab02a0()*0.235758);
}

double NNfunction_ss_uLsR::synapse0x1ac0160() {
   return (neuron0x1ab05e0()*0.314286);
}

double NNfunction_ss_uLsR::synapse0x1ac01a0() {
   return (neuron0x1ab0920()*0.384114);
}

double NNfunction_ss_uLsR::synapse0x1ac01e0() {
   return (neuron0x1ab0c60()*0.265478);
}

double NNfunction_ss_uLsR::synapse0x1ac0220() {
   return (neuron0x1ab0fa0()*0.95907);
}

double NNfunction_ss_uLsR::synapse0x1ac0260() {
   return (neuron0x1ab12e0()*-0.00372301);
}

double NNfunction_ss_uLsR::synapse0x1ac02a0() {
   return (neuron0x1ab1620()*-0.414605);
}

double NNfunction_ss_uLsR::synapse0x1abfd30() {
   return (neuron0x1ab1960()*-0.370368);
}

double NNfunction_ss_uLsR::synapse0x1abfd70() {
   return (neuron0x1ab1ec0()*0.253005);
}

double NNfunction_ss_uLsR::synapse0x1ac03f0() {
   return (neuron0x1ab20e0()*-0.31783);
}

double NNfunction_ss_uLsR::synapse0x1ac0430() {
   return (neuron0x1ab2420()*0.10238);
}

double NNfunction_ss_uLsR::synapse0x1ac0470() {
   return (neuron0x1ab2760()*-0.126358);
}

double NNfunction_ss_uLsR::synapse0x1ac04b0() {
   return (neuron0x1ab2aa0()*0.272855);
}

double NNfunction_ss_uLsR::synapse0x1ac04f0() {
   return (neuron0x1ab2de0()*-0.0841613);
}

double NNfunction_ss_uLsR::synapse0x1ac0530() {
   return (neuron0x1ab3120()*-0.224538);
}

double NNfunction_ss_uLsR::synapse0x1ac08b0() {
   return (neuron0x1aae560()*-0.0350313);
}

double NNfunction_ss_uLsR::synapse0x1ac08f0() {
   return (neuron0x1aae8a0()*0.00581292);
}

double NNfunction_ss_uLsR::synapse0x1ac0930() {
   return (neuron0x1aaebe0()*-0.00386054);
}

double NNfunction_ss_uLsR::synapse0x1ac0970() {
   return (neuron0x1aaef20()*-2.79091);
}

double NNfunction_ss_uLsR::synapse0x1ac09b0() {
   return (neuron0x1aaf260()*-0.0182985);
}

double NNfunction_ss_uLsR::synapse0x1ac09f0() {
   return (neuron0x1aaf5a0()*0.0293716);
}

double NNfunction_ss_uLsR::synapse0x1ac0a30() {
   return (neuron0x1aaf8e0()*0.0196779);
}

double NNfunction_ss_uLsR::synapse0x1ac0a70() {
   return (neuron0x1aafc20()*-0.0264093);
}

double NNfunction_ss_uLsR::synapse0x1ac0ab0() {
   return (neuron0x1aaff60()*6.56542e-05);
}

double NNfunction_ss_uLsR::synapse0x1ac0af0() {
   return (neuron0x1ab02a0()*0.0283294);
}

double NNfunction_ss_uLsR::synapse0x1ac0b30() {
   return (neuron0x1ab05e0()*-0.00711793);
}

double NNfunction_ss_uLsR::synapse0x1ac0b70() {
   return (neuron0x1ab0920()*-0.0529357);
}

double NNfunction_ss_uLsR::synapse0x1ac0bb0() {
   return (neuron0x1ab0c60()*-0.00915556);
}

double NNfunction_ss_uLsR::synapse0x1ac0bf0() {
   return (neuron0x1ab0fa0()*0.0195687);
}

double NNfunction_ss_uLsR::synapse0x1ac0c30() {
   return (neuron0x1ab12e0()*-0.0222089);
}

double NNfunction_ss_uLsR::synapse0x1ac0c70() {
   return (neuron0x1ab1620()*-0.0163709);
}

double NNfunction_ss_uLsR::synapse0x1ac0700() {
   return (neuron0x1ab1960()*0.0097253);
}

double NNfunction_ss_uLsR::synapse0x1ac0740() {
   return (neuron0x1ab1ec0()*-0.019566);
}

double NNfunction_ss_uLsR::synapse0x1ac0dc0() {
   return (neuron0x1ab20e0()*-0.828667);
}

double NNfunction_ss_uLsR::synapse0x1ac0e00() {
   return (neuron0x1ab2420()*0.0224588);
}

double NNfunction_ss_uLsR::synapse0x1ac0e40() {
   return (neuron0x1ab2760()*-0.00129735);
}

double NNfunction_ss_uLsR::synapse0x1ac0e80() {
   return (neuron0x1ab2aa0()*-0.0103716);
}

double NNfunction_ss_uLsR::synapse0x1ac0ec0() {
   return (neuron0x1ab2de0()*-0.0370164);
}

double NNfunction_ss_uLsR::synapse0x1ac0f00() {
   return (neuron0x1ab3120()*0.00767581);
}

double NNfunction_ss_uLsR::synapse0x1ac1280() {
   return (neuron0x1aae560()*-0.118153);
}

double NNfunction_ss_uLsR::synapse0x1ac12c0() {
   return (neuron0x1aae8a0()*-0.204285);
}

double NNfunction_ss_uLsR::synapse0x1ac1300() {
   return (neuron0x1aaebe0()*1.45258);
}

double NNfunction_ss_uLsR::synapse0x1ac1340() {
   return (neuron0x1aaef20()*0.0219043);
}

double NNfunction_ss_uLsR::synapse0x1ac1380() {
   return (neuron0x1aaf260()*-0.036802);
}

double NNfunction_ss_uLsR::synapse0x1ac13c0() {
   return (neuron0x1aaf5a0()*-0.197325);
}

double NNfunction_ss_uLsR::synapse0x1ac1400() {
   return (neuron0x1aaf8e0()*0.150447);
}

double NNfunction_ss_uLsR::synapse0x1ac1440() {
   return (neuron0x1aafc20()*-0.0855337);
}

double NNfunction_ss_uLsR::synapse0x1ac1480() {
   return (neuron0x1aaff60()*-0.0199781);
}

double NNfunction_ss_uLsR::synapse0x1ac14c0() {
   return (neuron0x1ab02a0()*0.144992);
}

double NNfunction_ss_uLsR::synapse0x1ac1500() {
   return (neuron0x1ab05e0()*-0.0464039);
}

double NNfunction_ss_uLsR::synapse0x1ac1540() {
   return (neuron0x1ab0920()*-0.474141);
}

double NNfunction_ss_uLsR::synapse0x1ac1580() {
   return (neuron0x1ab0c60()*-0.124122);
}

double NNfunction_ss_uLsR::synapse0x1ac15c0() {
   return (neuron0x1ab0fa0()*0.0153254);
}

double NNfunction_ss_uLsR::synapse0x1ac1600() {
   return (neuron0x1ab12e0()*0.188841);
}

double NNfunction_ss_uLsR::synapse0x1ac1640() {
   return (neuron0x1ab1620()*-0.0782786);
}

double NNfunction_ss_uLsR::synapse0x1ac10d0() {
   return (neuron0x1ab1960()*0.0781656);
}

double NNfunction_ss_uLsR::synapse0x1ac1110() {
   return (neuron0x1ab1ec0()*-0.0555247);
}

double NNfunction_ss_uLsR::synapse0x1ac1790() {
   return (neuron0x1ab20e0()*-0.150639);
}

double NNfunction_ss_uLsR::synapse0x1ac17d0() {
   return (neuron0x1ab2420()*0.101658);
}

double NNfunction_ss_uLsR::synapse0x1ac1810() {
   return (neuron0x1ab2760()*-0.0184996);
}

double NNfunction_ss_uLsR::synapse0x1ac1850() {
   return (neuron0x1ab2aa0()*-0.0832793);
}

double NNfunction_ss_uLsR::synapse0x1ac1890() {
   return (neuron0x1ab2de0()*-0.129675);
}

double NNfunction_ss_uLsR::synapse0x1ac18d0() {
   return (neuron0x1ab3120()*-0.0717173);
}

double NNfunction_ss_uLsR::synapse0x1ac1c50() {
   return (neuron0x1aae560()*-0.00103084);
}

double NNfunction_ss_uLsR::synapse0x1ac1c90() {
   return (neuron0x1aae8a0()*0.00273253);
}

double NNfunction_ss_uLsR::synapse0x1ac1cd0() {
   return (neuron0x1aaebe0()*0.0342886);
}

double NNfunction_ss_uLsR::synapse0x1ac1d10() {
   return (neuron0x1aaef20()*-3.50794);
}

double NNfunction_ss_uLsR::synapse0x1ac1d50() {
   return (neuron0x1aaf260()*0.0122754);
}

double NNfunction_ss_uLsR::synapse0x1ac1d90() {
   return (neuron0x1aaf5a0()*0.0108125);
}

double NNfunction_ss_uLsR::synapse0x1ac1dd0() {
   return (neuron0x1aaf8e0()*0.019933);
}

double NNfunction_ss_uLsR::synapse0x1ac1e10() {
   return (neuron0x1aafc20()*-0.00678571);
}

double NNfunction_ss_uLsR::synapse0x1ac1e50() {
   return (neuron0x1aaff60()*0.0409314);
}

double NNfunction_ss_uLsR::synapse0x1aba010() {
   return (neuron0x1ab02a0()*-0.00733832);
}

double NNfunction_ss_uLsR::synapse0x1aba050() {
   return (neuron0x1ab05e0()*0.0126442);
}

double NNfunction_ss_uLsR::synapse0x1aba090() {
   return (neuron0x1ab0920()*0.0543812);
}

double NNfunction_ss_uLsR::synapse0x1aba0d0() {
   return (neuron0x1ab0c60()*-0.0325683);
}

double NNfunction_ss_uLsR::synapse0x1aba110() {
   return (neuron0x1ab0fa0()*-0.0109005);
}

double NNfunction_ss_uLsR::synapse0x1aba150() {
   return (neuron0x1ab12e0()*4.22865e-05);
}

double NNfunction_ss_uLsR::synapse0x1aba190() {
   return (neuron0x1ab1620()*-0.00422109);
}

double NNfunction_ss_uLsR::synapse0x1ac1aa0() {
   return (neuron0x1ab1960()*-0.0418956);
}

double NNfunction_ss_uLsR::synapse0x1ac1ae0() {
   return (neuron0x1ab1ec0()*-0.0566109);
}

double NNfunction_ss_uLsR::synapse0x1aba2e0() {
   return (neuron0x1ab20e0()*-0.132507);
}

double NNfunction_ss_uLsR::synapse0x1aba320() {
   return (neuron0x1ab2420()*0.000188514);
}

double NNfunction_ss_uLsR::synapse0x1aba360() {
   return (neuron0x1ab2760()*0.0118979);
}

double NNfunction_ss_uLsR::synapse0x1aba3a0() {
   return (neuron0x1ab2aa0()*0.0308761);
}

double NNfunction_ss_uLsR::synapse0x1aba3e0() {
   return (neuron0x1ab2de0()*0.00917445);
}

double NNfunction_ss_uLsR::synapse0x1aba420() {
   return (neuron0x1ab3120()*0.0152536);
}

double NNfunction_ss_uLsR::synapse0x1aba7a0() {
   return (neuron0x1aae560()*-0.0926587);
}

double NNfunction_ss_uLsR::synapse0x1aba7e0() {
   return (neuron0x1aae8a0()*-0.000544811);
}

double NNfunction_ss_uLsR::synapse0x1aba820() {
   return (neuron0x1aaebe0()*-0.025394);
}

double NNfunction_ss_uLsR::synapse0x1aba860() {
   return (neuron0x1aaef20()*0.253558);
}

double NNfunction_ss_uLsR::synapse0x1aba8a0() {
   return (neuron0x1aaf260()*0.0413594);
}

double NNfunction_ss_uLsR::synapse0x1aba8e0() {
   return (neuron0x1aaf5a0()*0.038889);
}

double NNfunction_ss_uLsR::synapse0x1aba920() {
   return (neuron0x1aaf8e0()*0.0597135);
}

double NNfunction_ss_uLsR::synapse0x1aba960() {
   return (neuron0x1aafc20()*0.0275602);
}

double NNfunction_ss_uLsR::synapse0x1aba9a0() {
   return (neuron0x1aaff60()*-0.296115);
}

double NNfunction_ss_uLsR::synapse0x1aba9e0() {
   return (neuron0x1ab02a0()*-0.00821806);
}

double NNfunction_ss_uLsR::synapse0x1abaa20() {
   return (neuron0x1ab05e0()*-0.0325226);
}

double NNfunction_ss_uLsR::synapse0x1abaa60() {
   return (neuron0x1ab0920()*0.566369);
}

double NNfunction_ss_uLsR::synapse0x1abaaa0() {
   return (neuron0x1ab0c60()*0.140317);
}

double NNfunction_ss_uLsR::synapse0x1abaae0() {
   return (neuron0x1ab0fa0()*0.0807199);
}

double NNfunction_ss_uLsR::synapse0x1abab20() {
   return (neuron0x1ab12e0()*0.0185117);
}

double NNfunction_ss_uLsR::synapse0x1abab60() {
   return (neuron0x1ab1620()*-0.0571576);
}

double NNfunction_ss_uLsR::synapse0x1aba5f0() {
   return (neuron0x1ab1960()*-0.00128414);
}

double NNfunction_ss_uLsR::synapse0x1aba630() {
   return (neuron0x1ab1ec0()*0.172806);
}

double NNfunction_ss_uLsR::synapse0x1abacb0() {
   return (neuron0x1ab20e0()*0.650516);
}

double NNfunction_ss_uLsR::synapse0x1abacf0() {
   return (neuron0x1ab2420()*0.0324297);
}

double NNfunction_ss_uLsR::synapse0x1abad30() {
   return (neuron0x1ab2760()*0.016748);
}

double NNfunction_ss_uLsR::synapse0x1abad70() {
   return (neuron0x1ab2aa0()*0.0450534);
}

double NNfunction_ss_uLsR::synapse0x1abadb0() {
   return (neuron0x1ab2de0()*-0.0377098);
}

double NNfunction_ss_uLsR::synapse0x1abadf0() {
   return (neuron0x1ab3120()*-0.0536809);
}

double NNfunction_ss_uLsR::synapse0x1abafc0() {
   return (neuron0x1aae560()*0.0833292);
}

double NNfunction_ss_uLsR::synapse0x1ac4050() {
   return (neuron0x1aae8a0()*0.153715);
}

double NNfunction_ss_uLsR::synapse0x1ac4090() {
   return (neuron0x1aaebe0()*0.0584158);
}

double NNfunction_ss_uLsR::synapse0x1ac40d0() {
   return (neuron0x1aaef20()*-0.91169);
}

double NNfunction_ss_uLsR::synapse0x1ac4110() {
   return (neuron0x1aaf260()*0.421611);
}

double NNfunction_ss_uLsR::synapse0x1ac4150() {
   return (neuron0x1aaf5a0()*0.0475722);
}

double NNfunction_ss_uLsR::synapse0x1ac4190() {
   return (neuron0x1aaf8e0()*-0.20933);
}

double NNfunction_ss_uLsR::synapse0x1ac41d0() {
   return (neuron0x1aafc20()*0.553542);
}

double NNfunction_ss_uLsR::synapse0x1ac4210() {
   return (neuron0x1aaff60()*0.196833);
}

double NNfunction_ss_uLsR::synapse0x1ac4250() {
   return (neuron0x1ab02a0()*-0.113024);
}

double NNfunction_ss_uLsR::synapse0x1ac4290() {
   return (neuron0x1ab05e0()*-0.0345218);
}

double NNfunction_ss_uLsR::synapse0x1ac42d0() {
   return (neuron0x1ab0920()*0.348783);
}

double NNfunction_ss_uLsR::synapse0x1ac4310() {
   return (neuron0x1ab0c60()*0.160233);
}

double NNfunction_ss_uLsR::synapse0x1ac4350() {
   return (neuron0x1ab0fa0()*-0.111276);
}

double NNfunction_ss_uLsR::synapse0x1ac4390() {
   return (neuron0x1ab12e0()*-0.150435);
}

double NNfunction_ss_uLsR::synapse0x1ac43d0() {
   return (neuron0x1ab1620()*-0.330849);
}

double NNfunction_ss_uLsR::synapse0x1ac3ea0() {
   return (neuron0x1ab1960()*-0.0890212);
}

double NNfunction_ss_uLsR::synapse0x1ac3ee0() {
   return (neuron0x1ab1ec0()*0.166442);
}

double NNfunction_ss_uLsR::synapse0x1ac4520() {
   return (neuron0x1ab20e0()*0.184773);
}

double NNfunction_ss_uLsR::synapse0x1ac4560() {
   return (neuron0x1ab2420()*0.0583229);
}

double NNfunction_ss_uLsR::synapse0x1ac45a0() {
   return (neuron0x1ab2760()*0.0739829);
}

double NNfunction_ss_uLsR::synapse0x1ac45e0() {
   return (neuron0x1ab2aa0()*0.687255);
}

double NNfunction_ss_uLsR::synapse0x1ac4620() {
   return (neuron0x1ab2de0()*0.121275);
}

double NNfunction_ss_uLsR::synapse0x1ac4660() {
   return (neuron0x1ab3120()*0.0804955);
}

double NNfunction_ss_uLsR::synapse0x1ac49e0() {
   return (neuron0x1aae560()*-0.320919);
}

double NNfunction_ss_uLsR::synapse0x1ac4a20() {
   return (neuron0x1aae8a0()*-0.578539);
}

double NNfunction_ss_uLsR::synapse0x1ac4a60() {
   return (neuron0x1aaebe0()*0.24646);
}

double NNfunction_ss_uLsR::synapse0x1ac4aa0() {
   return (neuron0x1aaef20()*-0.89424);
}

double NNfunction_ss_uLsR::synapse0x1ac4ae0() {
   return (neuron0x1aaf260()*-0.100842);
}

double NNfunction_ss_uLsR::synapse0x1ac4b20() {
   return (neuron0x1aaf5a0()*0.00408953);
}

double NNfunction_ss_uLsR::synapse0x1ac4b60() {
   return (neuron0x1aaf8e0()*-0.0902165);
}

double NNfunction_ss_uLsR::synapse0x1ac4ba0() {
   return (neuron0x1aafc20()*0.0164588);
}

double NNfunction_ss_uLsR::synapse0x1ac4be0() {
   return (neuron0x1aaff60()*-0.0126348);
}

double NNfunction_ss_uLsR::synapse0x1ac4c20() {
   return (neuron0x1ab02a0()*0.409081);
}

double NNfunction_ss_uLsR::synapse0x1ac4c60() {
   return (neuron0x1ab05e0()*0.0291774);
}

double NNfunction_ss_uLsR::synapse0x1ac4ca0() {
   return (neuron0x1ab0920()*0.223499);
}

double NNfunction_ss_uLsR::synapse0x1ac4ce0() {
   return (neuron0x1ab0c60()*-0.303742);
}

double NNfunction_ss_uLsR::synapse0x1ac4d20() {
   return (neuron0x1ab0fa0()*0.0408582);
}

double NNfunction_ss_uLsR::synapse0x1ac4d60() {
   return (neuron0x1ab12e0()*0.11279);
}

double NNfunction_ss_uLsR::synapse0x1ac4da0() {
   return (neuron0x1ab1620()*-0.488773);
}

double NNfunction_ss_uLsR::synapse0x1ac4830() {
   return (neuron0x1ab1960()*0.226455);
}

double NNfunction_ss_uLsR::synapse0x1ac4870() {
   return (neuron0x1ab1ec0()*-0.292214);
}

double NNfunction_ss_uLsR::synapse0x1ac4ef0() {
   return (neuron0x1ab20e0()*0.145958);
}

double NNfunction_ss_uLsR::synapse0x1ac4f30() {
   return (neuron0x1ab2420()*-0.175167);
}

double NNfunction_ss_uLsR::synapse0x1ac4f70() {
   return (neuron0x1ab2760()*0.013497);
}

double NNfunction_ss_uLsR::synapse0x1ac4fb0() {
   return (neuron0x1ab2aa0()*-0.5688);
}

double NNfunction_ss_uLsR::synapse0x1ac4ff0() {
   return (neuron0x1ab2de0()*0.33486);
}

double NNfunction_ss_uLsR::synapse0x1ac5030() {
   return (neuron0x1ab3120()*-0.127127);
}

double NNfunction_ss_uLsR::synapse0x1ac53b0() {
   return (neuron0x1aae560()*0.27618);
}

double NNfunction_ss_uLsR::synapse0x1ac53f0() {
   return (neuron0x1aae8a0()*0.00838677);
}

double NNfunction_ss_uLsR::synapse0x1ac5430() {
   return (neuron0x1aaebe0()*0.252515);
}

double NNfunction_ss_uLsR::synapse0x1ac5470() {
   return (neuron0x1aaef20()*0.0440714);
}

double NNfunction_ss_uLsR::synapse0x1ac54b0() {
   return (neuron0x1aaf260()*0.235288);
}

double NNfunction_ss_uLsR::synapse0x1ac54f0() {
   return (neuron0x1aaf5a0()*0.492902);
}

double NNfunction_ss_uLsR::synapse0x1ac5530() {
   return (neuron0x1aaf8e0()*-0.105339);
}

double NNfunction_ss_uLsR::synapse0x1ac5570() {
   return (neuron0x1aafc20()*0.40063);
}

double NNfunction_ss_uLsR::synapse0x1ac55b0() {
   return (neuron0x1aaff60()*-0.0738176);
}

double NNfunction_ss_uLsR::synapse0x1ac55f0() {
   return (neuron0x1ab02a0()*0.179105);
}

double NNfunction_ss_uLsR::synapse0x1ac5630() {
   return (neuron0x1ab05e0()*0.182716);
}

double NNfunction_ss_uLsR::synapse0x1ac5670() {
   return (neuron0x1ab0920()*0.557137);
}

double NNfunction_ss_uLsR::synapse0x1ac56b0() {
   return (neuron0x1ab0c60()*-0.726809);
}

double NNfunction_ss_uLsR::synapse0x1ac56f0() {
   return (neuron0x1ab0fa0()*-0.243315);
}

double NNfunction_ss_uLsR::synapse0x1ac5730() {
   return (neuron0x1ab12e0()*-0.602358);
}

double NNfunction_ss_uLsR::synapse0x1ac5770() {
   return (neuron0x1ab1620()*0.282464);
}

double NNfunction_ss_uLsR::synapse0x1ac5200() {
   return (neuron0x1ab1960()*-0.275618);
}

double NNfunction_ss_uLsR::synapse0x1ac5240() {
   return (neuron0x1ab1ec0()*0.574001);
}

double NNfunction_ss_uLsR::synapse0x1ac58c0() {
   return (neuron0x1ab20e0()*-0.272565);
}

double NNfunction_ss_uLsR::synapse0x1ac5900() {
   return (neuron0x1ab2420()*-0.496722);
}

double NNfunction_ss_uLsR::synapse0x1ac5940() {
   return (neuron0x1ab2760()*-0.115616);
}

double NNfunction_ss_uLsR::synapse0x1ac5980() {
   return (neuron0x1ab2aa0()*-0.286415);
}

double NNfunction_ss_uLsR::synapse0x1ac59c0() {
   return (neuron0x1ab2de0()*0.312655);
}

double NNfunction_ss_uLsR::synapse0x1ac5a00() {
   return (neuron0x1ab3120()*0.503247);
}

double NNfunction_ss_uLsR::synapse0x1ac5d80() {
   return (neuron0x1aae560()*-0.0369008);
}

double NNfunction_ss_uLsR::synapse0x1ac5dc0() {
   return (neuron0x1aae8a0()*-0.149809);
}

double NNfunction_ss_uLsR::synapse0x1ac5e00() {
   return (neuron0x1aaebe0()*-0.446008);
}

double NNfunction_ss_uLsR::synapse0x1ac5e40() {
   return (neuron0x1aaef20()*-0.306571);
}

double NNfunction_ss_uLsR::synapse0x1ac5e80() {
   return (neuron0x1aaf260()*-0.430699);
}

double NNfunction_ss_uLsR::synapse0x1ac5ec0() {
   return (neuron0x1aaf5a0()*-0.0416007);
}

double NNfunction_ss_uLsR::synapse0x1ac5f00() {
   return (neuron0x1aaf8e0()*-0.686079);
}

double NNfunction_ss_uLsR::synapse0x1ac5f40() {
   return (neuron0x1aafc20()*-0.519836);
}

double NNfunction_ss_uLsR::synapse0x1ac5f80() {
   return (neuron0x1aaff60()*0.114725);
}

double NNfunction_ss_uLsR::synapse0x1ac5fc0() {
   return (neuron0x1ab02a0()*0.285772);
}

double NNfunction_ss_uLsR::synapse0x1ac6000() {
   return (neuron0x1ab05e0()*-0.0766902);
}

double NNfunction_ss_uLsR::synapse0x1ac6040() {
   return (neuron0x1ab0920()*0.283022);
}

double NNfunction_ss_uLsR::synapse0x1ac6080() {
   return (neuron0x1ab0c60()*-0.0381267);
}

double NNfunction_ss_uLsR::synapse0x1ac60c0() {
   return (neuron0x1ab0fa0()*-0.438233);
}

double NNfunction_ss_uLsR::synapse0x1ac6100() {
   return (neuron0x1ab12e0()*-0.595);
}

double NNfunction_ss_uLsR::synapse0x1ac6140() {
   return (neuron0x1ab1620()*-0.462703);
}

double NNfunction_ss_uLsR::synapse0x1ac5bd0() {
   return (neuron0x1ab1960()*0.0487086);
}

double NNfunction_ss_uLsR::synapse0x1ac5c10() {
   return (neuron0x1ab1ec0()*-0.0441443);
}

double NNfunction_ss_uLsR::synapse0x1ac6290() {
   return (neuron0x1ab20e0()*-0.10472);
}

double NNfunction_ss_uLsR::synapse0x1ac62d0() {
   return (neuron0x1ab2420()*0.373144);
}

double NNfunction_ss_uLsR::synapse0x1ac6310() {
   return (neuron0x1ab2760()*0.14786);
}

double NNfunction_ss_uLsR::synapse0x1ac6350() {
   return (neuron0x1ab2aa0()*0.150477);
}

double NNfunction_ss_uLsR::synapse0x1ac6390() {
   return (neuron0x1ab2de0()*0.0977601);
}

double NNfunction_ss_uLsR::synapse0x1ac63d0() {
   return (neuron0x1ab3120()*-0.0971848);
}

double NNfunction_ss_uLsR::synapse0x1ac6750() {
   return (neuron0x1aae560()*0.49346);
}

double NNfunction_ss_uLsR::synapse0x1ac6790() {
   return (neuron0x1aae8a0()*-0.275094);
}

double NNfunction_ss_uLsR::synapse0x1ac67d0() {
   return (neuron0x1aaebe0()*-0.0642989);
}

double NNfunction_ss_uLsR::synapse0x1ac6810() {
   return (neuron0x1aaef20()*0.349707);
}

double NNfunction_ss_uLsR::synapse0x1ac6850() {
   return (neuron0x1aaf260()*0.321942);
}

double NNfunction_ss_uLsR::synapse0x1ac6890() {
   return (neuron0x1aaf5a0()*0.186539);
}

double NNfunction_ss_uLsR::synapse0x1ac68d0() {
   return (neuron0x1aaf8e0()*0.303408);
}

double NNfunction_ss_uLsR::synapse0x1ac6910() {
   return (neuron0x1aafc20()*0.0202519);
}

double NNfunction_ss_uLsR::synapse0x1ac6950() {
   return (neuron0x1aaff60()*0.279238);
}

double NNfunction_ss_uLsR::synapse0x1ac6990() {
   return (neuron0x1ab02a0()*0.0704799);
}

double NNfunction_ss_uLsR::synapse0x1ac69d0() {
   return (neuron0x1ab05e0()*0.25816);
}

double NNfunction_ss_uLsR::synapse0x1ac6a10() {
   return (neuron0x1ab0920()*0.552784);
}

double NNfunction_ss_uLsR::synapse0x1ac6a50() {
   return (neuron0x1ab0c60()*-0.386886);
}

double NNfunction_ss_uLsR::synapse0x1ac6a90() {
   return (neuron0x1ab0fa0()*-0.780397);
}

double NNfunction_ss_uLsR::synapse0x1ac6ad0() {
   return (neuron0x1ab12e0()*0.245083);
}

double NNfunction_ss_uLsR::synapse0x1ac6b10() {
   return (neuron0x1ab1620()*0.27022);
}

double NNfunction_ss_uLsR::synapse0x1ac65a0() {
   return (neuron0x1ab1960()*-0.189789);
}

double NNfunction_ss_uLsR::synapse0x1ac65e0() {
   return (neuron0x1ab1ec0()*-0.183807);
}

double NNfunction_ss_uLsR::synapse0x1ac6c60() {
   return (neuron0x1ab20e0()*0.722544);
}

double NNfunction_ss_uLsR::synapse0x1ac6ca0() {
   return (neuron0x1ab2420()*0.226528);
}

double NNfunction_ss_uLsR::synapse0x1ac6ce0() {
   return (neuron0x1ab2760()*0.0656971);
}

double NNfunction_ss_uLsR::synapse0x1ac6d20() {
   return (neuron0x1ab2aa0()*-0.0410365);
}

double NNfunction_ss_uLsR::synapse0x1ac6d60() {
   return (neuron0x1ab2de0()*-0.375339);
}

double NNfunction_ss_uLsR::synapse0x1ac6da0() {
   return (neuron0x1ab3120()*-0.143476);
}

double NNfunction_ss_uLsR::synapse0x1ac7120() {
   return (neuron0x1aae560()*0.0444065);
}

double NNfunction_ss_uLsR::synapse0x1ac7160() {
   return (neuron0x1aae8a0()*-0.193674);
}

double NNfunction_ss_uLsR::synapse0x1ac71a0() {
   return (neuron0x1aaebe0()*-0.305904);
}

double NNfunction_ss_uLsR::synapse0x1ac71e0() {
   return (neuron0x1aaef20()*0.207634);
}

double NNfunction_ss_uLsR::synapse0x1ac7220() {
   return (neuron0x1aaf260()*-0.266547);
}

double NNfunction_ss_uLsR::synapse0x1ac7260() {
   return (neuron0x1aaf5a0()*0.320013);
}

double NNfunction_ss_uLsR::synapse0x1ac72a0() {
   return (neuron0x1aaf8e0()*-0.340556);
}

double NNfunction_ss_uLsR::synapse0x1ac72e0() {
   return (neuron0x1aafc20()*-0.532832);
}

double NNfunction_ss_uLsR::synapse0x1ac7320() {
   return (neuron0x1aaff60()*-0.439556);
}

double NNfunction_ss_uLsR::synapse0x1ac7360() {
   return (neuron0x1ab02a0()*0.186599);
}

double NNfunction_ss_uLsR::synapse0x1ac73a0() {
   return (neuron0x1ab05e0()*0.0781481);
}

double NNfunction_ss_uLsR::synapse0x1ac73e0() {
   return (neuron0x1ab0920()*-0.57086);
}

double NNfunction_ss_uLsR::synapse0x1ac7420() {
   return (neuron0x1ab0c60()*0.633971);
}

double NNfunction_ss_uLsR::synapse0x1ac7460() {
   return (neuron0x1ab0fa0()*0.060155);
}

double NNfunction_ss_uLsR::synapse0x1ac74a0() {
   return (neuron0x1ab12e0()*-0.182252);
}

double NNfunction_ss_uLsR::synapse0x1ac74e0() {
   return (neuron0x1ab1620()*0.0703842);
}

double NNfunction_ss_uLsR::synapse0x1ac6f70() {
   return (neuron0x1ab1960()*0.219124);
}

double NNfunction_ss_uLsR::synapse0x1ac6fb0() {
   return (neuron0x1ab1ec0()*0.172031);
}

double NNfunction_ss_uLsR::synapse0x1ac7630() {
   return (neuron0x1ab20e0()*-0.374668);
}

double NNfunction_ss_uLsR::synapse0x1ac7670() {
   return (neuron0x1ab2420()*-0.0427757);
}

double NNfunction_ss_uLsR::synapse0x1ac76b0() {
   return (neuron0x1ab2760()*-0.282152);
}

double NNfunction_ss_uLsR::synapse0x1ac76f0() {
   return (neuron0x1ab2aa0()*0.332466);
}

double NNfunction_ss_uLsR::synapse0x1ac7730() {
   return (neuron0x1ab2de0()*0.241083);
}

double NNfunction_ss_uLsR::synapse0x1ac7770() {
   return (neuron0x1ab3120()*0.164697);
}

double NNfunction_ss_uLsR::synapse0x1ac7af0() {
   return (neuron0x1aae560()*-0.0858371);
}

double NNfunction_ss_uLsR::synapse0x1ac7b30() {
   return (neuron0x1aae8a0()*0.379386);
}

double NNfunction_ss_uLsR::synapse0x1ac7b70() {
   return (neuron0x1aaebe0()*0.127947);
}

double NNfunction_ss_uLsR::synapse0x1ac7bb0() {
   return (neuron0x1aaef20()*-0.0950987);
}

double NNfunction_ss_uLsR::synapse0x1ac7bf0() {
   return (neuron0x1aaf260()*-0.144915);
}

double NNfunction_ss_uLsR::synapse0x1ac7c30() {
   return (neuron0x1aaf5a0()*-0.0913288);
}

double NNfunction_ss_uLsR::synapse0x1ac7c70() {
   return (neuron0x1aaf8e0()*0.0084601);
}

double NNfunction_ss_uLsR::synapse0x1ac7cb0() {
   return (neuron0x1aafc20()*-0.181791);
}

double NNfunction_ss_uLsR::synapse0x1ac7cf0() {
   return (neuron0x1aaff60()*-0.045151);
}

double NNfunction_ss_uLsR::synapse0x1ac7d30() {
   return (neuron0x1ab02a0()*-0.135586);
}

double NNfunction_ss_uLsR::synapse0x1ac7d70() {
   return (neuron0x1ab05e0()*-0.139792);
}

double NNfunction_ss_uLsR::synapse0x1ac7db0() {
   return (neuron0x1ab0920()*0.0135278);
}

double NNfunction_ss_uLsR::synapse0x1ac7df0() {
   return (neuron0x1ab0c60()*0.0770026);
}

double NNfunction_ss_uLsR::synapse0x1ac7e30() {
   return (neuron0x1ab0fa0()*0.0725671);
}

double NNfunction_ss_uLsR::synapse0x1ac7e70() {
   return (neuron0x1ab12e0()*-0.223411);
}

double NNfunction_ss_uLsR::synapse0x1ac7eb0() {
   return (neuron0x1ab1620()*-0.612575);
}

double NNfunction_ss_uLsR::synapse0x1ac7940() {
   return (neuron0x1ab1960()*-0.137753);
}

double NNfunction_ss_uLsR::synapse0x1ac7980() {
   return (neuron0x1ab1ec0()*-0.0165754);
}

double NNfunction_ss_uLsR::synapse0x1ac8000() {
   return (neuron0x1ab20e0()*0.0796655);
}

double NNfunction_ss_uLsR::synapse0x1ac8040() {
   return (neuron0x1ab2420()*-0.0190817);
}

double NNfunction_ss_uLsR::synapse0x1ac8080() {
   return (neuron0x1ab2760()*0.362618);
}

double NNfunction_ss_uLsR::synapse0x1ac80c0() {
   return (neuron0x1ab2aa0()*-0.13304);
}

double NNfunction_ss_uLsR::synapse0x1ac8100() {
   return (neuron0x1ab2de0()*-0.0701131);
}

double NNfunction_ss_uLsR::synapse0x1ac8140() {
   return (neuron0x1ab3120()*-0.106044);
}

double NNfunction_ss_uLsR::synapse0x1ac84c0() {
   return (neuron0x1aae560()*0.0128831);
}

double NNfunction_ss_uLsR::synapse0x1ac8500() {
   return (neuron0x1aae8a0()*0.0127154);
}

double NNfunction_ss_uLsR::synapse0x1ac8540() {
   return (neuron0x1aaebe0()*-0.0744174);
}

double NNfunction_ss_uLsR::synapse0x1ac8580() {
   return (neuron0x1aaef20()*3.30548);
}

double NNfunction_ss_uLsR::synapse0x1ac85c0() {
   return (neuron0x1aaf260()*-0.0519252);
}

double NNfunction_ss_uLsR::synapse0x1ac8600() {
   return (neuron0x1aaf5a0()*-0.0315783);
}

double NNfunction_ss_uLsR::synapse0x1ac8640() {
   return (neuron0x1aaf8e0()*-0.0622717);
}

double NNfunction_ss_uLsR::synapse0x1ac8680() {
   return (neuron0x1aafc20()*0.0112034);
}

double NNfunction_ss_uLsR::synapse0x1ac86c0() {
   return (neuron0x1aaff60()*-0.00635662);
}

double NNfunction_ss_uLsR::synapse0x1ac8700() {
   return (neuron0x1ab02a0()*0.0256321);
}

double NNfunction_ss_uLsR::synapse0x1ac8740() {
   return (neuron0x1ab05e0()*-0.000602994);
}

double NNfunction_ss_uLsR::synapse0x1ac8780() {
   return (neuron0x1ab0920()*0.103709);
}

double NNfunction_ss_uLsR::synapse0x1ac87c0() {
   return (neuron0x1ab0c60()*0.0852724);
}

double NNfunction_ss_uLsR::synapse0x1ac8800() {
   return (neuron0x1ab0fa0()*0.0192407);
}

double NNfunction_ss_uLsR::synapse0x1ac8840() {
   return (neuron0x1ab12e0()*0.00536968);
}

double NNfunction_ss_uLsR::synapse0x1ac8880() {
   return (neuron0x1ab1620()*-0.00782044);
}

double NNfunction_ss_uLsR::synapse0x1ac8310() {
   return (neuron0x1ab1960()*0.0554551);
}

double NNfunction_ss_uLsR::synapse0x1ac8350() {
   return (neuron0x1ab1ec0()*0.0666245);
}

double NNfunction_ss_uLsR::synapse0x1ac89d0() {
   return (neuron0x1ab20e0()*0.318669);
}

double NNfunction_ss_uLsR::synapse0x1ac8a10() {
   return (neuron0x1ab2420()*0.00344735);
}

double NNfunction_ss_uLsR::synapse0x1ac8a50() {
   return (neuron0x1ab2760()*-0.0286903);
}

double NNfunction_ss_uLsR::synapse0x1ac8a90() {
   return (neuron0x1ab2aa0()*-0.0343794);
}

double NNfunction_ss_uLsR::synapse0x1ac8ad0() {
   return (neuron0x1ab2de0()*-0.0154773);
}

double NNfunction_ss_uLsR::synapse0x1ac8b10() {
   return (neuron0x1ab3120()*-0.0480691);
}

double NNfunction_ss_uLsR::synapse0x1ac8e90() {
   return (neuron0x1aae560()*0.148233);
}

double NNfunction_ss_uLsR::synapse0x1abd460() {
   return (neuron0x1aae8a0()*0.483889);
}

double NNfunction_ss_uLsR::synapse0x1abd4a0() {
   return (neuron0x1aaebe0()*0.974811);
}

double NNfunction_ss_uLsR::synapse0x1abd4e0() {
   return (neuron0x1aaef20()*0.154632);
}

double NNfunction_ss_uLsR::synapse0x1abd730() {
   return (neuron0x1aaf260()*-0.0811374);
}

double NNfunction_ss_uLsR::synapse0x1abd770() {
   return (neuron0x1aaf5a0()*0.0547832);
}

double NNfunction_ss_uLsR::synapse0x1abd7b0() {
   return (neuron0x1aaf8e0()*-0.352949);
}

double NNfunction_ss_uLsR::synapse0x1abda00() {
   return (neuron0x1aafc20()*0.413082);
}

double NNfunction_ss_uLsR::synapse0x1abda40() {
   return (neuron0x1aaff60()*-0.0294762);
}

double NNfunction_ss_uLsR::synapse0x1abdc90() {
   return (neuron0x1ab02a0()*-0.0365006);
}

double NNfunction_ss_uLsR::synapse0x1abdcd0() {
   return (neuron0x1ab05e0()*0.161412);
}

double NNfunction_ss_uLsR::synapse0x1abdd10() {
   return (neuron0x1ab0920()*0.145289);
}

double NNfunction_ss_uLsR::synapse0x1abdf60() {
   return (neuron0x1ab0c60()*0.274445);
}

double NNfunction_ss_uLsR::synapse0x1abdfa0() {
   return (neuron0x1ab0fa0()*-0.491657);
}

double NNfunction_ss_uLsR::synapse0x1abe1f0() {
   return (neuron0x1ab12e0()*-0.021693);
}

double NNfunction_ss_uLsR::synapse0x1abe230() {
   return (neuron0x1ab1620()*0.188405);
}

double NNfunction_ss_uLsR::synapse0x1ac8ce0() {
   return (neuron0x1ab1960()*0.460031);
}

double NNfunction_ss_uLsR::synapse0x1ac8d20() {
   return (neuron0x1ab1ec0()*0.157884);
}

double NNfunction_ss_uLsR::synapse0x1abe380() {
   return (neuron0x1ab20e0()*-0.176378);
}

double NNfunction_ss_uLsR::synapse0x1abe890() {
   return (neuron0x1ab2420()*-0.272642);
}

double NNfunction_ss_uLsR::synapse0x1abe8d0() {
   return (neuron0x1ab2760()*-0.198089);
}

double NNfunction_ss_uLsR::synapse0x1abe910() {
   return (neuron0x1ab2aa0()*-0.172559);
}

double NNfunction_ss_uLsR::synapse0x1abeb60() {
   return (neuron0x1ab2de0()*-0.107302);
}

double NNfunction_ss_uLsR::synapse0x1abeba0() {
   return (neuron0x1ab3120()*0.198437);
}

double NNfunction_ss_uLsR::synapse0x1abe450() {
   return (neuron0x1aae560()*0.00856489);
}

double NNfunction_ss_uLsR::synapse0x1abe490() {
   return (neuron0x1aae8a0()*-0.00766832);
}

double NNfunction_ss_uLsR::synapse0x1abe4d0() {
   return (neuron0x1aaebe0()*-0.0147374);
}

double NNfunction_ss_uLsR::synapse0x1abe510() {
   return (neuron0x1aaef20()*-6.25079);
}

double NNfunction_ss_uLsR::synapse0x1abee90() {
   return (neuron0x1aaf260()*0.00730668);
}

double NNfunction_ss_uLsR::synapse0x1acb1e0() {
   return (neuron0x1aaf5a0()*-0.00103803);
}

double NNfunction_ss_uLsR::synapse0x1acb220() {
   return (neuron0x1aaf8e0()*-0.0148147);
}

double NNfunction_ss_uLsR::synapse0x1acb260() {
   return (neuron0x1aafc20()*-0.00545596);
}

double NNfunction_ss_uLsR::synapse0x1acb2a0() {
   return (neuron0x1aaff60()*-0.0613884);
}

double NNfunction_ss_uLsR::synapse0x1acb2e0() {
   return (neuron0x1ab02a0()*-0.0198156);
}

double NNfunction_ss_uLsR::synapse0x1acb320() {
   return (neuron0x1ab05e0()*-0.0278017);
}

double NNfunction_ss_uLsR::synapse0x1acb360() {
   return (neuron0x1ab0920()*-0.216543);
}

double NNfunction_ss_uLsR::synapse0x1acb3a0() {
   return (neuron0x1ab0c60()*-0.0583977);
}

double NNfunction_ss_uLsR::synapse0x1acb3e0() {
   return (neuron0x1ab0fa0()*0.00661718);
}

double NNfunction_ss_uLsR::synapse0x1acb420() {
   return (neuron0x1ab12e0()*0.0214945);
}

double NNfunction_ss_uLsR::synapse0x1acb460() {
   return (neuron0x1ab1620()*0.000980611);
}

double NNfunction_ss_uLsR::synapse0x1abed70() {
   return (neuron0x1ab1960()*0.034505);
}

double NNfunction_ss_uLsR::synapse0x1abedb0() {
   return (neuron0x1ab1ec0()*0.0402944);
}

double NNfunction_ss_uLsR::synapse0x1acb5b0() {
   return (neuron0x1ab20e0()*-0.0950159);
}

double NNfunction_ss_uLsR::synapse0x1acb5f0() {
   return (neuron0x1ab2420()*-0.0131434);
}

double NNfunction_ss_uLsR::synapse0x1acb630() {
   return (neuron0x1ab2760()*0.00672769);
}

double NNfunction_ss_uLsR::synapse0x1acb670() {
   return (neuron0x1ab2aa0()*-0.00718984);
}

double NNfunction_ss_uLsR::synapse0x1acb6b0() {
   return (neuron0x1ab2de0()*-0.00551013);
}

double NNfunction_ss_uLsR::synapse0x1acb6f0() {
   return (neuron0x1ab3120()*-0.0170596);
}

double NNfunction_ss_uLsR::synapse0x1acba70() {
   return (neuron0x1aae560()*-0.105452);
}

double NNfunction_ss_uLsR::synapse0x1acbab0() {
   return (neuron0x1aae8a0()*-0.078536);
}

double NNfunction_ss_uLsR::synapse0x1acbaf0() {
   return (neuron0x1aaebe0()*0.203003);
}

double NNfunction_ss_uLsR::synapse0x1acbb30() {
   return (neuron0x1aaef20()*0.178884);
}

double NNfunction_ss_uLsR::synapse0x1acbb70() {
   return (neuron0x1aaf260()*0.186945);
}

double NNfunction_ss_uLsR::synapse0x1acbbb0() {
   return (neuron0x1aaf5a0()*-0.117545);
}

double NNfunction_ss_uLsR::synapse0x1acbbf0() {
   return (neuron0x1aaf8e0()*0.532207);
}

double NNfunction_ss_uLsR::synapse0x1acbc30() {
   return (neuron0x1aafc20()*0.0990958);
}

double NNfunction_ss_uLsR::synapse0x1acbc70() {
   return (neuron0x1aaff60()*-0.146124);
}

double NNfunction_ss_uLsR::synapse0x1acbcb0() {
   return (neuron0x1ab02a0()*0.0745316);
}

double NNfunction_ss_uLsR::synapse0x1acbcf0() {
   return (neuron0x1ab05e0()*-0.576691);
}

double NNfunction_ss_uLsR::synapse0x1acbd30() {
   return (neuron0x1ab0920()*-0.238403);
}

double NNfunction_ss_uLsR::synapse0x1acbd70() {
   return (neuron0x1ab0c60()*-0.606227);
}

double NNfunction_ss_uLsR::synapse0x1acbdb0() {
   return (neuron0x1ab0fa0()*0.104366);
}

double NNfunction_ss_uLsR::synapse0x1acbdf0() {
   return (neuron0x1ab12e0()*0.0285342);
}

double NNfunction_ss_uLsR::synapse0x1acbe30() {
   return (neuron0x1ab1620()*-0.0730164);
}

double NNfunction_ss_uLsR::synapse0x1acb8c0() {
   return (neuron0x1ab1960()*-0.227507);
}

double NNfunction_ss_uLsR::synapse0x1acb900() {
   return (neuron0x1ab1ec0()*0.242861);
}

double NNfunction_ss_uLsR::synapse0x1acbf80() {
   return (neuron0x1ab20e0()*0.0245988);
}

double NNfunction_ss_uLsR::synapse0x1acbfc0() {
   return (neuron0x1ab2420()*-0.11978);
}

double NNfunction_ss_uLsR::synapse0x1acc000() {
   return (neuron0x1ab2760()*0.137117);
}

double NNfunction_ss_uLsR::synapse0x1acc040() {
   return (neuron0x1ab2aa0()*0.33217);
}

double NNfunction_ss_uLsR::synapse0x1acc080() {
   return (neuron0x1ab2de0()*-0.0107505);
}

double NNfunction_ss_uLsR::synapse0x1acc0c0() {
   return (neuron0x1ab3120()*0.243846);
}

double NNfunction_ss_uLsR::synapse0x1acc440() {
   return (neuron0x1aae560()*0.0831287);
}

double NNfunction_ss_uLsR::synapse0x1acc480() {
   return (neuron0x1aae8a0()*0.115621);
}

double NNfunction_ss_uLsR::synapse0x1acc4c0() {
   return (neuron0x1aaebe0()*0.106375);
}

double NNfunction_ss_uLsR::synapse0x1acc500() {
   return (neuron0x1aaef20()*0.324638);
}

double NNfunction_ss_uLsR::synapse0x1acc540() {
   return (neuron0x1aaf260()*-0.262029);
}

double NNfunction_ss_uLsR::synapse0x1acc580() {
   return (neuron0x1aaf5a0()*-0.0816746);
}

double NNfunction_ss_uLsR::synapse0x1acc5c0() {
   return (neuron0x1aaf8e0()*-0.281185);
}

double NNfunction_ss_uLsR::synapse0x1acc600() {
   return (neuron0x1aafc20()*0.493337);
}

double NNfunction_ss_uLsR::synapse0x1acc640() {
   return (neuron0x1aaff60()*0.367947);
}

double NNfunction_ss_uLsR::synapse0x1acc680() {
   return (neuron0x1ab02a0()*-0.0214718);
}

double NNfunction_ss_uLsR::synapse0x1acc6c0() {
   return (neuron0x1ab05e0()*-0.524447);
}

double NNfunction_ss_uLsR::synapse0x1acc700() {
   return (neuron0x1ab0920()*-0.602779);
}

double NNfunction_ss_uLsR::synapse0x1acc740() {
   return (neuron0x1ab0c60()*0.45012);
}

double NNfunction_ss_uLsR::synapse0x1acc780() {
   return (neuron0x1ab0fa0()*-0.314067);
}

double NNfunction_ss_uLsR::synapse0x1acc7c0() {
   return (neuron0x1ab12e0()*-0.247021);
}

double NNfunction_ss_uLsR::synapse0x1acc800() {
   return (neuron0x1ab1620()*-0.207096);
}

double NNfunction_ss_uLsR::synapse0x1acc290() {
   return (neuron0x1ab1960()*-0.465638);
}

double NNfunction_ss_uLsR::synapse0x1acc2d0() {
   return (neuron0x1ab1ec0()*-0.000162067);
}

double NNfunction_ss_uLsR::synapse0x1acc950() {
   return (neuron0x1ab20e0()*-0.708894);
}

double NNfunction_ss_uLsR::synapse0x1acc990() {
   return (neuron0x1ab2420()*0.14008);
}

double NNfunction_ss_uLsR::synapse0x1acc9d0() {
   return (neuron0x1ab2760()*-0.0801823);
}

double NNfunction_ss_uLsR::synapse0x1acca10() {
   return (neuron0x1ab2aa0()*0.00723794);
}

double NNfunction_ss_uLsR::synapse0x1acca50() {
   return (neuron0x1ab2de0()*-0.0804099);
}

double NNfunction_ss_uLsR::synapse0x1acca90() {
   return (neuron0x1ab3120()*0.111699);
}

double NNfunction_ss_uLsR::synapse0x1acce10() {
   return (neuron0x1aae560()*0.0420475);
}

double NNfunction_ss_uLsR::synapse0x1acce50() {
   return (neuron0x1aae8a0()*0.230714);
}

double NNfunction_ss_uLsR::synapse0x1acce90() {
   return (neuron0x1aaebe0()*-0.16319);
}

double NNfunction_ss_uLsR::synapse0x1acced0() {
   return (neuron0x1aaef20()*-0.503745);
}

double NNfunction_ss_uLsR::synapse0x1accf10() {
   return (neuron0x1aaf260()*-0.17175);
}

double NNfunction_ss_uLsR::synapse0x1accf50() {
   return (neuron0x1aaf5a0()*0.179806);
}

double NNfunction_ss_uLsR::synapse0x1accf90() {
   return (neuron0x1aaf8e0()*-0.194177);
}

double NNfunction_ss_uLsR::synapse0x1accfd0() {
   return (neuron0x1aafc20()*-0.210114);
}

double NNfunction_ss_uLsR::synapse0x1acd010() {
   return (neuron0x1aaff60()*0.253955);
}

double NNfunction_ss_uLsR::synapse0x1acd050() {
   return (neuron0x1ab02a0()*-0.0449632);
}

double NNfunction_ss_uLsR::synapse0x1acd090() {
   return (neuron0x1ab05e0()*-0.236185);
}

double NNfunction_ss_uLsR::synapse0x1acd0d0() {
   return (neuron0x1ab0920()*-0.652323);
}

double NNfunction_ss_uLsR::synapse0x1acd110() {
   return (neuron0x1ab0c60()*-0.422044);
}

double NNfunction_ss_uLsR::synapse0x1acd150() {
   return (neuron0x1ab0fa0()*-0.0277136);
}

double NNfunction_ss_uLsR::synapse0x1acd190() {
   return (neuron0x1ab12e0()*0.00810657);
}

double NNfunction_ss_uLsR::synapse0x1acd1d0() {
   return (neuron0x1ab1620()*0.45561);
}

double NNfunction_ss_uLsR::synapse0x1accc60() {
   return (neuron0x1ab1960()*-0.059957);
}

double NNfunction_ss_uLsR::synapse0x1accca0() {
   return (neuron0x1ab1ec0()*0.0681284);
}

double NNfunction_ss_uLsR::synapse0x1acd320() {
   return (neuron0x1ab20e0()*0.674868);
}

double NNfunction_ss_uLsR::synapse0x1acd360() {
   return (neuron0x1ab2420()*0.192871);
}

double NNfunction_ss_uLsR::synapse0x1acd3a0() {
   return (neuron0x1ab2760()*0.103118);
}

double NNfunction_ss_uLsR::synapse0x1acd3e0() {
   return (neuron0x1ab2aa0()*0.0766703);
}

double NNfunction_ss_uLsR::synapse0x1acd420() {
   return (neuron0x1ab2de0()*-0.0390119);
}

double NNfunction_ss_uLsR::synapse0x1acd460() {
   return (neuron0x1ab3120()*0.190511);
}

double NNfunction_ss_uLsR::synapse0x1acd7e0() {
   return (neuron0x1aae560()*-0.111879);
}

double NNfunction_ss_uLsR::synapse0x1acd820() {
   return (neuron0x1aae8a0()*0.314467);
}

double NNfunction_ss_uLsR::synapse0x1acd860() {
   return (neuron0x1aaebe0()*0.112839);
}

double NNfunction_ss_uLsR::synapse0x1acd8a0() {
   return (neuron0x1aaef20()*0.263895);
}

double NNfunction_ss_uLsR::synapse0x1acd8e0() {
   return (neuron0x1aaf260()*0.072573);
}

double NNfunction_ss_uLsR::synapse0x1acd920() {
   return (neuron0x1aaf5a0()*0.275694);
}

double NNfunction_ss_uLsR::synapse0x1acd960() {
   return (neuron0x1aaf8e0()*-0.279107);
}

double NNfunction_ss_uLsR::synapse0x1acd9a0() {
   return (neuron0x1aafc20()*-0.176832);
}

double NNfunction_ss_uLsR::synapse0x1acd9e0() {
   return (neuron0x1aaff60()*-0.0796236);
}

double NNfunction_ss_uLsR::synapse0x1acda20() {
   return (neuron0x1ab02a0()*0.0777255);
}

double NNfunction_ss_uLsR::synapse0x1acda60() {
   return (neuron0x1ab05e0()*-0.0266458);
}

double NNfunction_ss_uLsR::synapse0x1acdaa0() {
   return (neuron0x1ab0920()*0.0116646);
}

double NNfunction_ss_uLsR::synapse0x1acdae0() {
   return (neuron0x1ab0c60()*0.00512159);
}

double NNfunction_ss_uLsR::synapse0x1acdb20() {
   return (neuron0x1ab0fa0()*0.24984);
}

double NNfunction_ss_uLsR::synapse0x1acdb60() {
   return (neuron0x1ab12e0()*0.143039);
}

double NNfunction_ss_uLsR::synapse0x1acdba0() {
   return (neuron0x1ab1620()*0.0486985);
}

double NNfunction_ss_uLsR::synapse0x1acd630() {
   return (neuron0x1ab1960()*0.0877675);
}

double NNfunction_ss_uLsR::synapse0x1acd670() {
   return (neuron0x1ab1ec0()*0.16011);
}

double NNfunction_ss_uLsR::synapse0x1acdcf0() {
   return (neuron0x1ab20e0()*0.989389);
}

double NNfunction_ss_uLsR::synapse0x1acdd30() {
   return (neuron0x1ab2420()*0.198351);
}

double NNfunction_ss_uLsR::synapse0x1acdd70() {
   return (neuron0x1ab2760()*0.0580587);
}

double NNfunction_ss_uLsR::synapse0x1acddb0() {
   return (neuron0x1ab2aa0()*0.237472);
}

double NNfunction_ss_uLsR::synapse0x1acddf0() {
   return (neuron0x1ab2de0()*0.0741053);
}

double NNfunction_ss_uLsR::synapse0x1acde30() {
   return (neuron0x1ab3120()*0.290709);
}

double NNfunction_ss_uLsR::synapse0x1ace1b0() {
   return (neuron0x1aae560()*0.0719965);
}

double NNfunction_ss_uLsR::synapse0x1ace1f0() {
   return (neuron0x1aae8a0()*0.364546);
}

double NNfunction_ss_uLsR::synapse0x1ace230() {
   return (neuron0x1aaebe0()*-0.171415);
}

double NNfunction_ss_uLsR::synapse0x1ace270() {
   return (neuron0x1aaef20()*-0.258447);
}

double NNfunction_ss_uLsR::synapse0x1ace2b0() {
   return (neuron0x1aaf260()*-0.0380222);
}

double NNfunction_ss_uLsR::synapse0x1ace2f0() {
   return (neuron0x1aaf5a0()*-0.00575098);
}

double NNfunction_ss_uLsR::synapse0x1ace330() {
   return (neuron0x1aaf8e0()*0.171349);
}

double NNfunction_ss_uLsR::synapse0x1ace370() {
   return (neuron0x1aafc20()*0.067751);
}

double NNfunction_ss_uLsR::synapse0x1ace3b0() {
   return (neuron0x1aaff60()*0.16267);
}

double NNfunction_ss_uLsR::synapse0x1ace3f0() {
   return (neuron0x1ab02a0()*0.17153);
}

double NNfunction_ss_uLsR::synapse0x1ace430() {
   return (neuron0x1ab05e0()*0.143984);
}

double NNfunction_ss_uLsR::synapse0x1ace470() {
   return (neuron0x1ab0920()*0.00441071);
}

double NNfunction_ss_uLsR::synapse0x1ace4b0() {
   return (neuron0x1ab0c60()*0.0214516);
}

double NNfunction_ss_uLsR::synapse0x1ace4f0() {
   return (neuron0x1ab0fa0()*-0.30563);
}

double NNfunction_ss_uLsR::synapse0x1ace530() {
   return (neuron0x1ab12e0()*-0.336535);
}

double NNfunction_ss_uLsR::synapse0x1ace570() {
   return (neuron0x1ab1620()*0.0583461);
}

double NNfunction_ss_uLsR::synapse0x1ace000() {
   return (neuron0x1ab1960()*-0.339797);
}

double NNfunction_ss_uLsR::synapse0x1ace040() {
   return (neuron0x1ab1ec0()*0.0219635);
}

double NNfunction_ss_uLsR::synapse0x1ace6c0() {
   return (neuron0x1ab20e0()*-0.240792);
}

double NNfunction_ss_uLsR::synapse0x1ace700() {
   return (neuron0x1ab2420()*-0.246871);
}

double NNfunction_ss_uLsR::synapse0x1ace740() {
   return (neuron0x1ab2760()*-0.470189);
}

double NNfunction_ss_uLsR::synapse0x1ace780() {
   return (neuron0x1ab2aa0()*-0.0361528);
}

double NNfunction_ss_uLsR::synapse0x1ace7c0() {
   return (neuron0x1ab2de0()*0.0664994);
}

double NNfunction_ss_uLsR::synapse0x1ace800() {
   return (neuron0x1ab3120()*0.500564);
}

double NNfunction_ss_uLsR::synapse0x1aceb80() {
   return (neuron0x1aae560()*-0.0410298);
}

double NNfunction_ss_uLsR::synapse0x1acebc0() {
   return (neuron0x1aae8a0()*-0.0216972);
}

double NNfunction_ss_uLsR::synapse0x1acec00() {
   return (neuron0x1aaebe0()*-0.0313295);
}

double NNfunction_ss_uLsR::synapse0x1acec40() {
   return (neuron0x1aaef20()*0.16952);
}

double NNfunction_ss_uLsR::synapse0x1acec80() {
   return (neuron0x1aaf260()*0.00968137);
}

double NNfunction_ss_uLsR::synapse0x1acecc0() {
   return (neuron0x1aaf5a0()*0.00609322);
}

double NNfunction_ss_uLsR::synapse0x1aced00() {
   return (neuron0x1aaf8e0()*0.0303892);
}

double NNfunction_ss_uLsR::synapse0x1aced40() {
   return (neuron0x1aafc20()*-0.00216444);
}

double NNfunction_ss_uLsR::synapse0x1aced80() {
   return (neuron0x1aaff60()*-0.0072919);
}

double NNfunction_ss_uLsR::synapse0x1acedc0() {
   return (neuron0x1ab02a0()*-0.0252264);
}

double NNfunction_ss_uLsR::synapse0x1acee00() {
   return (neuron0x1ab05e0()*0.0463272);
}

double NNfunction_ss_uLsR::synapse0x1acee40() {
   return (neuron0x1ab0920()*2.08489);
}

double NNfunction_ss_uLsR::synapse0x1acee80() {
   return (neuron0x1ab0c60()*-6.47549e-05);
}

double NNfunction_ss_uLsR::synapse0x1aceec0() {
   return (neuron0x1ab0fa0()*-0.00417243);
}

double NNfunction_ss_uLsR::synapse0x1acef00() {
   return (neuron0x1ab12e0()*-0.0054223);
}

double NNfunction_ss_uLsR::synapse0x1acef40() {
   return (neuron0x1ab1620()*0.0442678);
}

double NNfunction_ss_uLsR::synapse0x1ace9d0() {
   return (neuron0x1ab1960()*-0.00148195);
}

double NNfunction_ss_uLsR::synapse0x1acea10() {
   return (neuron0x1ab1ec0()*0.00260315);
}

double NNfunction_ss_uLsR::synapse0x1acf090() {
   return (neuron0x1ab20e0()*-0.166356);
}

double NNfunction_ss_uLsR::synapse0x1acf0d0() {
   return (neuron0x1ab2420()*-0.0345082);
}

double NNfunction_ss_uLsR::synapse0x1acf110() {
   return (neuron0x1ab2760()*0.00377252);
}

double NNfunction_ss_uLsR::synapse0x1acf150() {
   return (neuron0x1ab2aa0()*-0.00477659);
}

double NNfunction_ss_uLsR::synapse0x1acf190() {
   return (neuron0x1ab2de0()*0.0550638);
}

double NNfunction_ss_uLsR::synapse0x1acf1d0() {
   return (neuron0x1ab3120()*0.0069636);
}

double NNfunction_ss_uLsR::synapse0x1acf550() {
   return (neuron0x1aae560()*-0.0165194);
}

double NNfunction_ss_uLsR::synapse0x1acf590() {
   return (neuron0x1aae8a0()*-0.0260528);
}

double NNfunction_ss_uLsR::synapse0x1acf5d0() {
   return (neuron0x1aaebe0()*-0.11404);
}

double NNfunction_ss_uLsR::synapse0x1acf610() {
   return (neuron0x1aaef20()*1.00392);
}

double NNfunction_ss_uLsR::synapse0x1acf650() {
   return (neuron0x1aaf260()*-0.0113744);
}

double NNfunction_ss_uLsR::synapse0x1acf690() {
   return (neuron0x1aaf5a0()*-0.0445714);
}

double NNfunction_ss_uLsR::synapse0x1acf6d0() {
   return (neuron0x1aaf8e0()*-0.0207009);
}

double NNfunction_ss_uLsR::synapse0x1acf710() {
   return (neuron0x1aafc20()*-0.00257089);
}

double NNfunction_ss_uLsR::synapse0x1acf750() {
   return (neuron0x1aaff60()*-0.0356422);
}

double NNfunction_ss_uLsR::synapse0x1acf790() {
   return (neuron0x1ab02a0()*0.0248891);
}

double NNfunction_ss_uLsR::synapse0x1acf7d0() {
   return (neuron0x1ab05e0()*-0.00626681);
}

double NNfunction_ss_uLsR::synapse0x1acf810() {
   return (neuron0x1ab0920()*0.368323);
}

double NNfunction_ss_uLsR::synapse0x1acf850() {
   return (neuron0x1ab0c60()*0.00787861);
}

double NNfunction_ss_uLsR::synapse0x1acf890() {
   return (neuron0x1ab0fa0()*0.038435);
}

double NNfunction_ss_uLsR::synapse0x1acf8d0() {
   return (neuron0x1ab12e0()*0.0144935);
}

double NNfunction_ss_uLsR::synapse0x1acf910() {
   return (neuron0x1ab1620()*-0.0364655);
}

double NNfunction_ss_uLsR::synapse0x1acf3a0() {
   return (neuron0x1ab1960()*0.0823901);
}

double NNfunction_ss_uLsR::synapse0x1acf3e0() {
   return (neuron0x1ab1ec0()*-0.00399533);
}

double NNfunction_ss_uLsR::synapse0x1acfa60() {
   return (neuron0x1ab20e0()*0.29706);
}

double NNfunction_ss_uLsR::synapse0x1acfaa0() {
   return (neuron0x1ab2420()*-0.0266826);
}

double NNfunction_ss_uLsR::synapse0x1acfae0() {
   return (neuron0x1ab2760()*0.00917815);
}

double NNfunction_ss_uLsR::synapse0x1acfb20() {
   return (neuron0x1ab2aa0()*-0.0462605);
}

double NNfunction_ss_uLsR::synapse0x1acfb60() {
   return (neuron0x1ab2de0()*-0.0134727);
}

double NNfunction_ss_uLsR::synapse0x1acfba0() {
   return (neuron0x1ab3120()*0.0384965);
}

double NNfunction_ss_uLsR::synapse0x1ab8650() {
   return (neuron0x1aae560()*0.586176);
}

double NNfunction_ss_uLsR::synapse0x1ab8690() {
   return (neuron0x1aae8a0()*-0.316488);
}

double NNfunction_ss_uLsR::synapse0x1ab86d0() {
   return (neuron0x1aaebe0()*-0.31983);
}

double NNfunction_ss_uLsR::synapse0x1ab8710() {
   return (neuron0x1aaef20()*-0.00284566);
}

double NNfunction_ss_uLsR::synapse0x1ab8750() {
   return (neuron0x1aaf260()*0.211198);
}

double NNfunction_ss_uLsR::synapse0x1ab8790() {
   return (neuron0x1aaf5a0()*-0.16561);
}

double NNfunction_ss_uLsR::synapse0x1ab87d0() {
   return (neuron0x1aaf8e0()*-0.0249852);
}

double NNfunction_ss_uLsR::synapse0x1ab8810() {
   return (neuron0x1aafc20()*-0.138579);
}

double NNfunction_ss_uLsR::synapse0x1ad0330() {
   return (neuron0x1aaff60()*-0.0840268);
}

double NNfunction_ss_uLsR::synapse0x1ad0370() {
   return (neuron0x1ab02a0()*-0.188321);
}

double NNfunction_ss_uLsR::synapse0x1ad03b0() {
   return (neuron0x1ab05e0()*-0.167019);
}

double NNfunction_ss_uLsR::synapse0x1ad03f0() {
   return (neuron0x1ab0920()*0.204633);
}

double NNfunction_ss_uLsR::synapse0x1ad0430() {
   return (neuron0x1ab0c60()*0.0216993);
}

double NNfunction_ss_uLsR::synapse0x1ad0470() {
   return (neuron0x1ab0fa0()*0.254044);
}

double NNfunction_ss_uLsR::synapse0x1ad04b0() {
   return (neuron0x1ab12e0()*0.27039);
}

double NNfunction_ss_uLsR::synapse0x1ad04f0() {
   return (neuron0x1ab1620()*-0.272078);
}

double NNfunction_ss_uLsR::synapse0x1acfd70() {
   return (neuron0x1ab1960()*0.200027);
}

double NNfunction_ss_uLsR::synapse0x1acfdb0() {
   return (neuron0x1ab1ec0()*0.219874);
}

double NNfunction_ss_uLsR::synapse0x1ad0640() {
   return (neuron0x1ab20e0()*-0.121887);
}

double NNfunction_ss_uLsR::synapse0x1ad0680() {
   return (neuron0x1ab2420()*-0.417601);
}

double NNfunction_ss_uLsR::synapse0x1ad06c0() {
   return (neuron0x1ab2760()*0.16275);
}

double NNfunction_ss_uLsR::synapse0x1ad0700() {
   return (neuron0x1ab2aa0()*0.515913);
}

double NNfunction_ss_uLsR::synapse0x1ad0740() {
   return (neuron0x1ab2de0()*-0.680901);
}

double NNfunction_ss_uLsR::synapse0x1ad0780() {
   return (neuron0x1ab3120()*0.226563);
}

double NNfunction_ss_uLsR::synapse0x1ad0b00() {
   return (neuron0x1aae560()*-0.0101133);
}

double NNfunction_ss_uLsR::synapse0x1ad0b40() {
   return (neuron0x1aae8a0()*-0.00991425);
}

double NNfunction_ss_uLsR::synapse0x1ad0b80() {
   return (neuron0x1aaebe0()*-0.00282927);
}

double NNfunction_ss_uLsR::synapse0x1ad0bc0() {
   return (neuron0x1aaef20()*0.130352);
}

double NNfunction_ss_uLsR::synapse0x1ad0c00() {
   return (neuron0x1aaf260()*-0.012143);
}

double NNfunction_ss_uLsR::synapse0x1ad0c40() {
   return (neuron0x1aaf5a0()*-0.0171375);
}

double NNfunction_ss_uLsR::synapse0x1ad0c80() {
   return (neuron0x1aaf8e0()*0.0180577);
}

double NNfunction_ss_uLsR::synapse0x1ad0cc0() {
   return (neuron0x1aafc20()*-0.00772874);
}

double NNfunction_ss_uLsR::synapse0x1ad0d00() {
   return (neuron0x1aaff60()*-0.00997797);
}

double NNfunction_ss_uLsR::synapse0x1ad0d40() {
   return (neuron0x1ab02a0()*0.00871955);
}

double NNfunction_ss_uLsR::synapse0x1ad0d80() {
   return (neuron0x1ab05e0()*-0.0200337);
}

double NNfunction_ss_uLsR::synapse0x1ad0dc0() {
   return (neuron0x1ab0920()*0.397455);
}

double NNfunction_ss_uLsR::synapse0x1ad0e00() {
   return (neuron0x1ab0c60()*-0.00432779);
}

double NNfunction_ss_uLsR::synapse0x1ad0e40() {
   return (neuron0x1ab0fa0()*0.0302056);
}

double NNfunction_ss_uLsR::synapse0x1ad0e80() {
   return (neuron0x1ab12e0()*-0.0443165);
}

double NNfunction_ss_uLsR::synapse0x1ad0ec0() {
   return (neuron0x1ab1620()*0.0047821);
}

double NNfunction_ss_uLsR::synapse0x1ad0950() {
   return (neuron0x1ab1960()*0.0106674);
}

double NNfunction_ss_uLsR::synapse0x1ad0990() {
   return (neuron0x1ab1ec0()*0.0154968);
}

double NNfunction_ss_uLsR::synapse0x1ad1010() {
   return (neuron0x1ab20e0()*-1.034);
}

double NNfunction_ss_uLsR::synapse0x1ad1050() {
   return (neuron0x1ab2420()*-0.0159859);
}

double NNfunction_ss_uLsR::synapse0x1ad1090() {
   return (neuron0x1ab2760()*0.00522755);
}

double NNfunction_ss_uLsR::synapse0x1ad10d0() {
   return (neuron0x1ab2aa0()*0.00504656);
}

double NNfunction_ss_uLsR::synapse0x1ad1110() {
   return (neuron0x1ab2de0()*0.0147996);
}

double NNfunction_ss_uLsR::synapse0x1ad1150() {
   return (neuron0x1ab3120()*-0.00341624);
}

double NNfunction_ss_uLsR::synapse0x1ad14d0() {
   return (neuron0x1aae560()*-0.169648);
}

double NNfunction_ss_uLsR::synapse0x1ad1510() {
   return (neuron0x1aae8a0()*0.198256);
}

double NNfunction_ss_uLsR::synapse0x1ad1550() {
   return (neuron0x1aaebe0()*0.0706234);
}

double NNfunction_ss_uLsR::synapse0x1ad1590() {
   return (neuron0x1aaef20()*-0.591839);
}

double NNfunction_ss_uLsR::synapse0x1ad15d0() {
   return (neuron0x1aaf260()*0.0914987);
}

double NNfunction_ss_uLsR::synapse0x1ad1610() {
   return (neuron0x1aaf5a0()*0.176051);
}

double NNfunction_ss_uLsR::synapse0x1ad1650() {
   return (neuron0x1aaf8e0()*-0.359986);
}

double NNfunction_ss_uLsR::synapse0x1ad1690() {
   return (neuron0x1aafc20()*0.0310521);
}

double NNfunction_ss_uLsR::synapse0x1ad16d0() {
   return (neuron0x1aaff60()*-0.103962);
}

double NNfunction_ss_uLsR::synapse0x1ad1710() {
   return (neuron0x1ab02a0()*0.026271);
}

double NNfunction_ss_uLsR::synapse0x1ad1750() {
   return (neuron0x1ab05e0()*-0.0866836);
}

double NNfunction_ss_uLsR::synapse0x1ad1790() {
   return (neuron0x1ab0920()*0.0818847);
}

double NNfunction_ss_uLsR::synapse0x1ad17d0() {
   return (neuron0x1ab0c60()*0.0192734);
}

double NNfunction_ss_uLsR::synapse0x1ad1810() {
   return (neuron0x1ab0fa0()*0.194705);
}

double NNfunction_ss_uLsR::synapse0x1ad1850() {
   return (neuron0x1ab12e0()*0.101132);
}

double NNfunction_ss_uLsR::synapse0x1ad1890() {
   return (neuron0x1ab1620()*0.0404676);
}

double NNfunction_ss_uLsR::synapse0x1ad1320() {
   return (neuron0x1ab1960()*-0.0417165);
}

double NNfunction_ss_uLsR::synapse0x1ad1360() {
   return (neuron0x1ab1ec0()*0.00917013);
}

double NNfunction_ss_uLsR::synapse0x1ac1e90() {
   return (neuron0x1ab20e0()*1.32005);
}

double NNfunction_ss_uLsR::synapse0x1ac1ed0() {
   return (neuron0x1ab2420()*0.128358);
}

double NNfunction_ss_uLsR::synapse0x1ac1f10() {
   return (neuron0x1ab2760()*0.022884);
}

double NNfunction_ss_uLsR::synapse0x1ac1f50() {
   return (neuron0x1ab2aa0()*0.255717);
}

double NNfunction_ss_uLsR::synapse0x1ac1f90() {
   return (neuron0x1ab2de0()*0.0359822);
}

double NNfunction_ss_uLsR::synapse0x1ac1fd0() {
   return (neuron0x1ab3120()*0.393358);
}

double NNfunction_ss_uLsR::synapse0x1ac2350() {
   return (neuron0x1aae560()*0.0398649);
}

double NNfunction_ss_uLsR::synapse0x1ac2390() {
   return (neuron0x1aae8a0()*-0.0771751);
}

double NNfunction_ss_uLsR::synapse0x1ac23d0() {
   return (neuron0x1aaebe0()*-0.1604);
}

double NNfunction_ss_uLsR::synapse0x1ac2410() {
   return (neuron0x1aaef20()*2.20087);
}

double NNfunction_ss_uLsR::synapse0x1ac2450() {
   return (neuron0x1aaf260()*-0.130371);
}

double NNfunction_ss_uLsR::synapse0x1ac2490() {
   return (neuron0x1aaf5a0()*0.202725);
}

double NNfunction_ss_uLsR::synapse0x1ac24d0() {
   return (neuron0x1aaf8e0()*-0.235775);
}

double NNfunction_ss_uLsR::synapse0x1ac2510() {
   return (neuron0x1aafc20()*-0.198162);
}

double NNfunction_ss_uLsR::synapse0x1ac2550() {
   return (neuron0x1aaff60()*-0.13559);
}

double NNfunction_ss_uLsR::synapse0x1ac2590() {
   return (neuron0x1ab02a0()*0.0439934);
}

double NNfunction_ss_uLsR::synapse0x1ac25d0() {
   return (neuron0x1ab05e0()*-0.116081);
}

double NNfunction_ss_uLsR::synapse0x1ac2610() {
   return (neuron0x1ab0920()*-0.845904);
}

double NNfunction_ss_uLsR::synapse0x1ac2650() {
   return (neuron0x1ab0c60()*0.189099);
}

double NNfunction_ss_uLsR::synapse0x1ac2690() {
   return (neuron0x1ab0fa0()*0.227292);
}

double NNfunction_ss_uLsR::synapse0x1ac26d0() {
   return (neuron0x1ab12e0()*-0.113385);
}

double NNfunction_ss_uLsR::synapse0x1ac2710() {
   return (neuron0x1ab1620()*0.0428232);
}

double NNfunction_ss_uLsR::synapse0x1ac21a0() {
   return (neuron0x1ab1960()*0.140575);
}

double NNfunction_ss_uLsR::synapse0x1ac21e0() {
   return (neuron0x1ab1ec0()*0.159307);
}

double NNfunction_ss_uLsR::synapse0x1ac2860() {
   return (neuron0x1ab20e0()*-0.745012);
}

double NNfunction_ss_uLsR::synapse0x1ac28a0() {
   return (neuron0x1ab2420()*-0.0357234);
}

double NNfunction_ss_uLsR::synapse0x1ac28e0() {
   return (neuron0x1ab2760()*0.0195984);
}

double NNfunction_ss_uLsR::synapse0x1ac2920() {
   return (neuron0x1ab2aa0()*0.108362);
}

double NNfunction_ss_uLsR::synapse0x1ac2960() {
   return (neuron0x1ab2de0()*0.114446);
}

double NNfunction_ss_uLsR::synapse0x1ac29a0() {
   return (neuron0x1ab3120()*-0.155734);
}

double NNfunction_ss_uLsR::synapse0x1ac2d20() {
   return (neuron0x1aae560()*-0.483998);
}

double NNfunction_ss_uLsR::synapse0x1ac2d60() {
   return (neuron0x1aae8a0()*0.129213);
}

double NNfunction_ss_uLsR::synapse0x1ac2da0() {
   return (neuron0x1aaebe0()*0.00515051);
}

double NNfunction_ss_uLsR::synapse0x1ac2de0() {
   return (neuron0x1aaef20()*-0.352977);
}

double NNfunction_ss_uLsR::synapse0x1ac2e20() {
   return (neuron0x1aaf260()*-0.336641);
}

double NNfunction_ss_uLsR::synapse0x1ac2e60() {
   return (neuron0x1aaf5a0()*-0.469929);
}

double NNfunction_ss_uLsR::synapse0x1ac2ea0() {
   return (neuron0x1aaf8e0()*-0.498598);
}

double NNfunction_ss_uLsR::synapse0x1ac2ee0() {
   return (neuron0x1aafc20()*0.851527);
}

double NNfunction_ss_uLsR::synapse0x1ac2f20() {
   return (neuron0x1aaff60()*0.0942904);
}

double NNfunction_ss_uLsR::synapse0x1ac2f60() {
   return (neuron0x1ab02a0()*-0.215102);
}

double NNfunction_ss_uLsR::synapse0x1ac2fa0() {
   return (neuron0x1ab05e0()*-0.424781);
}

double NNfunction_ss_uLsR::synapse0x1ac2fe0() {
   return (neuron0x1ab0920()*0.0466243);
}

double NNfunction_ss_uLsR::synapse0x1ac3020() {
   return (neuron0x1ab0c60()*0.119582);
}

double NNfunction_ss_uLsR::synapse0x1ac3060() {
   return (neuron0x1ab0fa0()*0.333133);
}

double NNfunction_ss_uLsR::synapse0x1ac30a0() {
   return (neuron0x1ab12e0()*0.19426);
}

double NNfunction_ss_uLsR::synapse0x1ac30e0() {
   return (neuron0x1ab1620()*-0.369773);
}

double NNfunction_ss_uLsR::synapse0x1ac2b70() {
   return (neuron0x1ab1960()*0.298806);
}

double NNfunction_ss_uLsR::synapse0x1ac2bb0() {
   return (neuron0x1ab1ec0()*0.0172738);
}

double NNfunction_ss_uLsR::synapse0x1ac3230() {
   return (neuron0x1ab20e0()*-0.694732);
}

double NNfunction_ss_uLsR::synapse0x1ac3270() {
   return (neuron0x1ab2420()*-0.305619);
}

double NNfunction_ss_uLsR::synapse0x1ac32b0() {
   return (neuron0x1ab2760()*0.143492);
}

double NNfunction_ss_uLsR::synapse0x1ac32f0() {
   return (neuron0x1ab2aa0()*0.161469);
}

double NNfunction_ss_uLsR::synapse0x1ac3330() {
   return (neuron0x1ab2de0()*-0.181229);
}

double NNfunction_ss_uLsR::synapse0x1ac3370() {
   return (neuron0x1ab3120()*-0.248372);
}

double NNfunction_ss_uLsR::synapse0x1ac36f0() {
   return (neuron0x1aae560()*0.0190711);
}

double NNfunction_ss_uLsR::synapse0x1ac3730() {
   return (neuron0x1aae8a0()*-0.00141521);
}

double NNfunction_ss_uLsR::synapse0x1ac3770() {
   return (neuron0x1aaebe0()*-0.0238669);
}

double NNfunction_ss_uLsR::synapse0x1ac37b0() {
   return (neuron0x1aaef20()*-0.112714);
}

double NNfunction_ss_uLsR::synapse0x1ac37f0() {
   return (neuron0x1aaf260()*0.0139835);
}

double NNfunction_ss_uLsR::synapse0x1ac3830() {
   return (neuron0x1aaf5a0()*0.023828);
}

double NNfunction_ss_uLsR::synapse0x1ac3870() {
   return (neuron0x1aaf8e0()*-0.00134682);
}

double NNfunction_ss_uLsR::synapse0x1ac38b0() {
   return (neuron0x1aafc20()*-0.00765774);
}

double NNfunction_ss_uLsR::synapse0x1ac38f0() {
   return (neuron0x1aaff60()*0.0165617);
}

double NNfunction_ss_uLsR::synapse0x1ac3930() {
   return (neuron0x1ab02a0()*-0.00493445);
}

double NNfunction_ss_uLsR::synapse0x1ac3970() {
   return (neuron0x1ab05e0()*-0.00384449);
}

double NNfunction_ss_uLsR::synapse0x1ac39b0() {
   return (neuron0x1ab0920()*-0.800779);
}

double NNfunction_ss_uLsR::synapse0x1ac39f0() {
   return (neuron0x1ab0c60()*-0.026518);
}

double NNfunction_ss_uLsR::synapse0x1ac3a30() {
   return (neuron0x1ab0fa0()*-0.0207061);
}

double NNfunction_ss_uLsR::synapse0x1ac3a70() {
   return (neuron0x1ab12e0()*0.026557);
}

double NNfunction_ss_uLsR::synapse0x1ac3ab0() {
   return (neuron0x1ab1620()*0.0124684);
}

double NNfunction_ss_uLsR::synapse0x1ac3540() {
   return (neuron0x1ab1960()*0.00397252);
}

double NNfunction_ss_uLsR::synapse0x1ac3580() {
   return (neuron0x1ab1ec0()*-0.0134532);
}

double NNfunction_ss_uLsR::synapse0x1ac3c00() {
   return (neuron0x1ab20e0()*0.620671);
}

double NNfunction_ss_uLsR::synapse0x1ac3c40() {
   return (neuron0x1ab2420()*0.0123879);
}

double NNfunction_ss_uLsR::synapse0x1ac3c80() {
   return (neuron0x1ab2760()*0.00747959);
}

double NNfunction_ss_uLsR::synapse0x1ac3cc0() {
   return (neuron0x1ab2aa0()*-0.020454);
}

double NNfunction_ss_uLsR::synapse0x1ac3d00() {
   return (neuron0x1ab2de0()*-0.0195557);
}

double NNfunction_ss_uLsR::synapse0x1ac3d40() {
   return (neuron0x1ab3120()*-0.00362523);
}

double NNfunction_ss_uLsR::synapse0x1ad5c10() {
   return (neuron0x1aae560()*-0.0404097);
}

double NNfunction_ss_uLsR::synapse0x1ad5c50() {
   return (neuron0x1aae8a0()*0.0177096);
}

double NNfunction_ss_uLsR::synapse0x1ad5c90() {
   return (neuron0x1aaebe0()*0.0551246);
}

double NNfunction_ss_uLsR::synapse0x1ad5cd0() {
   return (neuron0x1aaef20()*-1.48687);
}

double NNfunction_ss_uLsR::synapse0x1ad5d10() {
   return (neuron0x1aaf260()*-0.00274003);
}

double NNfunction_ss_uLsR::synapse0x1ad5d50() {
   return (neuron0x1aaf5a0()*-0.020412);
}

double NNfunction_ss_uLsR::synapse0x1ad5d90() {
   return (neuron0x1aaf8e0()*-0.0186851);
}

double NNfunction_ss_uLsR::synapse0x1ad5dd0() {
   return (neuron0x1aafc20()*0.0211609);
}

double NNfunction_ss_uLsR::synapse0x1ad5e10() {
   return (neuron0x1aaff60()*-0.0642398);
}

double NNfunction_ss_uLsR::synapse0x1ad5e50() {
   return (neuron0x1ab02a0()*-0.0292827);
}

double NNfunction_ss_uLsR::synapse0x1ad5e90() {
   return (neuron0x1ab05e0()*0.000950849);
}

double NNfunction_ss_uLsR::synapse0x1ad5ed0() {
   return (neuron0x1ab0920()*0.507664);
}

double NNfunction_ss_uLsR::synapse0x1ad5f10() {
   return (neuron0x1ab0c60()*-0.0217318);
}

double NNfunction_ss_uLsR::synapse0x1ad5f50() {
   return (neuron0x1ab0fa0()*-0.0190734);
}

double NNfunction_ss_uLsR::synapse0x1ad5f90() {
   return (neuron0x1ab12e0()*0.0870858);
}

double NNfunction_ss_uLsR::synapse0x1ad5fd0() {
   return (neuron0x1ab1620()*0.0401852);
}

double NNfunction_ss_uLsR::synapse0x1ac3d80() {
   return (neuron0x1ab1960()*-0.000703882);
}

double NNfunction_ss_uLsR::synapse0x1ac3dc0() {
   return (neuron0x1ab1ec0()*0.0448577);
}

double NNfunction_ss_uLsR::synapse0x1ad6120() {
   return (neuron0x1ab20e0()*0.590771);
}

double NNfunction_ss_uLsR::synapse0x1ad6160() {
   return (neuron0x1ab2420()*-0.00540993);
}

double NNfunction_ss_uLsR::synapse0x1ad61a0() {
   return (neuron0x1ab2760()*-0.0374897);
}

double NNfunction_ss_uLsR::synapse0x1ad61e0() {
   return (neuron0x1ab2aa0()*0.00488019);
}

double NNfunction_ss_uLsR::synapse0x1ad6220() {
   return (neuron0x1ab2de0()*-0.00161009);
}

double NNfunction_ss_uLsR::synapse0x1ad6260() {
   return (neuron0x1ab3120()*0.046239);
}

double NNfunction_ss_uLsR::synapse0x1ad65e0() {
   return (neuron0x1aae560()*-0.371293);
}

double NNfunction_ss_uLsR::synapse0x1ad6620() {
   return (neuron0x1aae8a0()*0.26012);
}

double NNfunction_ss_uLsR::synapse0x1ad6660() {
   return (neuron0x1aaebe0()*-0.29865);
}

double NNfunction_ss_uLsR::synapse0x1ad66a0() {
   return (neuron0x1aaef20()*0.272393);
}

double NNfunction_ss_uLsR::synapse0x1ad66e0() {
   return (neuron0x1aaf260()*-0.358639);
}

double NNfunction_ss_uLsR::synapse0x1ad6720() {
   return (neuron0x1aaf5a0()*0.081543);
}

double NNfunction_ss_uLsR::synapse0x1ad6760() {
   return (neuron0x1aaf8e0()*0.00345325);
}

double NNfunction_ss_uLsR::synapse0x1ad67a0() {
   return (neuron0x1aafc20()*-0.342769);
}

double NNfunction_ss_uLsR::synapse0x1ad67e0() {
   return (neuron0x1aaff60()*0.0850956);
}

double NNfunction_ss_uLsR::synapse0x1ad6820() {
   return (neuron0x1ab02a0()*-0.395402);
}

double NNfunction_ss_uLsR::synapse0x1ad6860() {
   return (neuron0x1ab05e0()*-0.25778);
}

double NNfunction_ss_uLsR::synapse0x1ad68a0() {
   return (neuron0x1ab0920()*0.252314);
}

double NNfunction_ss_uLsR::synapse0x1ad68e0() {
   return (neuron0x1ab0c60()*0.457669);
}

double NNfunction_ss_uLsR::synapse0x1ad6920() {
   return (neuron0x1ab0fa0()*0.316179);
}

double NNfunction_ss_uLsR::synapse0x1ad6960() {
   return (neuron0x1ab12e0()*-0.12942);
}

double NNfunction_ss_uLsR::synapse0x1ad69a0() {
   return (neuron0x1ab1620()*-0.551447);
}

double NNfunction_ss_uLsR::synapse0x1ad6430() {
   return (neuron0x1ab1960()*0.0416417);
}

double NNfunction_ss_uLsR::synapse0x1ad6470() {
   return (neuron0x1ab1ec0()*-0.461748);
}

double NNfunction_ss_uLsR::synapse0x1ad6af0() {
   return (neuron0x1ab20e0()*0.641214);
}

double NNfunction_ss_uLsR::synapse0x1ad6b30() {
   return (neuron0x1ab2420()*-0.321804);
}

double NNfunction_ss_uLsR::synapse0x1ad6b70() {
   return (neuron0x1ab2760()*0.114947);
}

double NNfunction_ss_uLsR::synapse0x1ad6bb0() {
   return (neuron0x1ab2aa0()*-0.374734);
}

double NNfunction_ss_uLsR::synapse0x1ad6bf0() {
   return (neuron0x1ab2de0()*0.17809);
}

double NNfunction_ss_uLsR::synapse0x1ad6c30() {
   return (neuron0x1ab3120()*0.503456);
}

double NNfunction_ss_uLsR::synapse0x1ad6fb0() {
   return (neuron0x1aae560()*0.249504);
}

double NNfunction_ss_uLsR::synapse0x1ad6ff0() {
   return (neuron0x1aae8a0()*0.012372);
}

double NNfunction_ss_uLsR::synapse0x1ad7030() {
   return (neuron0x1aaebe0()*0.0760155);
}

double NNfunction_ss_uLsR::synapse0x1ad7070() {
   return (neuron0x1aaef20()*0.0177827);
}

double NNfunction_ss_uLsR::synapse0x1ad70b0() {
   return (neuron0x1aaf260()*0.498554);
}

double NNfunction_ss_uLsR::synapse0x1ad70f0() {
   return (neuron0x1aaf5a0()*0.0854829);
}

double NNfunction_ss_uLsR::synapse0x1ad7130() {
   return (neuron0x1aaf8e0()*-0.228565);
}

double NNfunction_ss_uLsR::synapse0x1ad7170() {
   return (neuron0x1aafc20()*0.477626);
}

double NNfunction_ss_uLsR::synapse0x1ad71b0() {
   return (neuron0x1aaff60()*0.101869);
}

double NNfunction_ss_uLsR::synapse0x1ad71f0() {
   return (neuron0x1ab02a0()*-0.0801634);
}

double NNfunction_ss_uLsR::synapse0x1ad7230() {
   return (neuron0x1ab05e0()*0.24124);
}

double NNfunction_ss_uLsR::synapse0x1ad7270() {
   return (neuron0x1ab0920()*-0.833945);
}

double NNfunction_ss_uLsR::synapse0x1ad72b0() {
   return (neuron0x1ab0c60()*0.101022);
}

double NNfunction_ss_uLsR::synapse0x1ad72f0() {
   return (neuron0x1ab0fa0()*0.0135777);
}

double NNfunction_ss_uLsR::synapse0x1ad7330() {
   return (neuron0x1ab12e0()*-0.107821);
}

double NNfunction_ss_uLsR::synapse0x1ad7370() {
   return (neuron0x1ab1620()*-0.622768);
}

double NNfunction_ss_uLsR::synapse0x1ad6e00() {
   return (neuron0x1ab1960()*0.0764239);
}

double NNfunction_ss_uLsR::synapse0x1ad6e40() {
   return (neuron0x1ab1ec0()*-0.442856);
}

double NNfunction_ss_uLsR::synapse0x1ad74c0() {
   return (neuron0x1ab20e0()*-0.0779549);
}

double NNfunction_ss_uLsR::synapse0x1ad7500() {
   return (neuron0x1ab2420()*0.396355);
}

double NNfunction_ss_uLsR::synapse0x1ad7540() {
   return (neuron0x1ab2760()*0.296472);
}

double NNfunction_ss_uLsR::synapse0x1ad7580() {
   return (neuron0x1ab2aa0()*-0.0166475);
}

double NNfunction_ss_uLsR::synapse0x1ad75c0() {
   return (neuron0x1ab2de0()*-0.14845);
}

double NNfunction_ss_uLsR::synapse0x1ad7600() {
   return (neuron0x1ab3120()*0.104948);
}

double NNfunction_ss_uLsR::synapse0x1ad7980() {
   return (neuron0x1aae560()*-0.0472177);
}

double NNfunction_ss_uLsR::synapse0x1ad79c0() {
   return (neuron0x1aae8a0()*-0.110449);
}

double NNfunction_ss_uLsR::synapse0x1ad7a00() {
   return (neuron0x1aaebe0()*-0.0156482);
}

double NNfunction_ss_uLsR::synapse0x1ad7a40() {
   return (neuron0x1aaef20()*-0.0575252);
}

double NNfunction_ss_uLsR::synapse0x1ad7a80() {
   return (neuron0x1aaf260()*0.138213);
}

double NNfunction_ss_uLsR::synapse0x1ad7ac0() {
   return (neuron0x1aaf5a0()*-0.0538334);
}

double NNfunction_ss_uLsR::synapse0x1ad7b00() {
   return (neuron0x1aaf8e0()*0.189746);
}

double NNfunction_ss_uLsR::synapse0x1ad7b40() {
   return (neuron0x1aafc20()*-0.0265515);
}

double NNfunction_ss_uLsR::synapse0x1ad7b80() {
   return (neuron0x1aaff60()*0.121121);
}

double NNfunction_ss_uLsR::synapse0x1ad7bc0() {
   return (neuron0x1ab02a0()*0.149173);
}

double NNfunction_ss_uLsR::synapse0x1ad7c00() {
   return (neuron0x1ab05e0()*0.0392716);
}

double NNfunction_ss_uLsR::synapse0x1ad7c40() {
   return (neuron0x1ab0920()*0.0235282);
}

double NNfunction_ss_uLsR::synapse0x1ad7c80() {
   return (neuron0x1ab0c60()*-0.127248);
}

double NNfunction_ss_uLsR::synapse0x1ad7cc0() {
   return (neuron0x1ab0fa0()*0.240879);
}

double NNfunction_ss_uLsR::synapse0x1ad7d00() {
   return (neuron0x1ab12e0()*-0.324197);
}

double NNfunction_ss_uLsR::synapse0x1ad7d40() {
   return (neuron0x1ab1620()*-0.0882256);
}

double NNfunction_ss_uLsR::synapse0x1ad77d0() {
   return (neuron0x1ab1960()*0.411749);
}

double NNfunction_ss_uLsR::synapse0x1ad7810() {
   return (neuron0x1ab1ec0()*0.038343);
}

double NNfunction_ss_uLsR::synapse0x1ad7e90() {
   return (neuron0x1ab20e0()*-0.277984);
}

double NNfunction_ss_uLsR::synapse0x1ad7ed0() {
   return (neuron0x1ab2420()*0.0448082);
}

double NNfunction_ss_uLsR::synapse0x1ad7f10() {
   return (neuron0x1ab2760()*0.182368);
}

double NNfunction_ss_uLsR::synapse0x1ad7f50() {
   return (neuron0x1ab2aa0()*0.0870816);
}

double NNfunction_ss_uLsR::synapse0x1ad7f90() {
   return (neuron0x1ab2de0()*-0.021916);
}

double NNfunction_ss_uLsR::synapse0x1ad7fd0() {
   return (neuron0x1ab3120()*-0.190169);
}

double NNfunction_ss_uLsR::synapse0x1ab4570() {
   return (neuron0x1ab35c0()*-0.327225);
}

double NNfunction_ss_uLsR::synapse0x1ab45b0() {
   return (neuron0x1ab3ed0()*0.732626);
}

double NNfunction_ss_uLsR::synapse0x1ab5a80() {
   return (neuron0x1ab49b0()*0.645482);
}

double NNfunction_ss_uLsR::synapse0x1ab5ac0() {
   return (neuron0x186e240()*-3.5871);
}

double NNfunction_ss_uLsR::synapse0x1ab6450() {
   return (neuron0x1ab57d0()*0.361297);
}

double NNfunction_ss_uLsR::synapse0x1ab6490() {
   return (neuron0x1ab61a0()*-0.327276);
}

double NNfunction_ss_uLsR::synapse0x1ab7220() {
   return (neuron0x1ab6f70()*-0.398309);
}

double NNfunction_ss_uLsR::synapse0x1ab7260() {
   return (neuron0x1ab7940()*-0.104418);
}

double NNfunction_ss_uLsR::synapse0x1ab7bf0() {
   return (neuron0x1ab8310()*1.99964);
}

double NNfunction_ss_uLsR::synapse0x1ab7c30() {
   return (neuron0x1ab8df0()*-0.646194);
}

double NNfunction_ss_uLsR::synapse0x1ab85c0() {
   return (neuron0x1ab97c0()*0.328397);
}

double NNfunction_ss_uLsR::synapse0x1ab8600() {
   return (neuron0x1ab68a0()*-0.282243);
}

double NNfunction_ss_uLsR::synapse0x1ab90a0() {
   return (neuron0x1abb370()*1.18147);
}

double NNfunction_ss_uLsR::synapse0x1ab90e0() {
   return (neuron0x1abbd40()*-0.415725);
}

double NNfunction_ss_uLsR::synapse0x1ab9a70() {
   return (neuron0x1abc710()*0.279847);
}

double NNfunction_ss_uLsR::synapse0x1ab9ab0() {
   return (neuron0x1abd0e0()*0.501879);
}

double NNfunction_ss_uLsR::synapse0x1ab6b50() {
   return (neuron0x1abeef0()*-3.3655);
}

double NNfunction_ss_uLsR::synapse0x1ab6b90() {
   return (neuron0x1abf1d0()*2.26691);
}

double NNfunction_ss_uLsR::synapse0x1abb620() {
   return (neuron0x1abfba0()*0.317816);
}

double NNfunction_ss_uLsR::synapse0x1abb660() {
   return (neuron0x1ac0570()*-0.0592857);
}

double NNfunction_ss_uLsR::synapse0x1abbff0() {
   return (neuron0x1ac0f40()*0.348886);
}

double NNfunction_ss_uLsR::synapse0x1abc030() {
   return (neuron0x1ac1910()*0.990278);
}

double NNfunction_ss_uLsR::synapse0x1abc9c0() {
   return (neuron0x1aba460()*0.902279);
}

double NNfunction_ss_uLsR::synapse0x1abca00() {
   return (neuron0x1abae30()*0.483941);
}

double NNfunction_ss_uLsR::synapse0x1abd390() {
   return (neuron0x1ac46a0()*-0.178459);
}

double NNfunction_ss_uLsR::synapse0x1abd3d0() {
   return (neuron0x1ac5070()*-0.222619);
}

double NNfunction_ss_uLsR::synapse0x1ab1500() {
   return (neuron0x1ac5a40()*-0.288013);
}

double NNfunction_ss_uLsR::synapse0x1ab1540() {
   return (neuron0x1ac6410()*-0.0807794);
}

double NNfunction_ss_uLsR::synapse0x1abf480() {
   return (neuron0x1ac6de0()*0.538423);
}

double NNfunction_ss_uLsR::synapse0x1abf4c0() {
   return (neuron0x1ac77b0()*-0.573493);
}

double NNfunction_ss_uLsR::synapse0x1abfe50() {
   return (neuron0x1ac8180()*-3.75397);
}

double NNfunction_ss_uLsR::synapse0x1abfe90() {
   return (neuron0x1ac8b50()*0.160291);
}

double NNfunction_ss_uLsR::synapse0x1ac0820() {
   return (neuron0x1abebe0()*-0.680638);
}

double NNfunction_ss_uLsR::synapse0x1ac0860() {
   return (neuron0x1acb730()*-0.288296);
}

double NNfunction_ss_uLsR::synapse0x1ac11f0() {
   return (neuron0x1acc100()*0.359025);
}

double NNfunction_ss_uLsR::synapse0x1ac1230() {
   return (neuron0x1accad0()*-0.108583);
}

double NNfunction_ss_uLsR::synapse0x1ac1bc0() {
   return (neuron0x1acd4a0()*0.970397);
}

double NNfunction_ss_uLsR::synapse0x1ac1c00() {
   return (neuron0x1acde70()*0.597121);
}

double NNfunction_ss_uLsR::synapse0x1aba710() {
   return (neuron0x1ace840()*-0.237882);
}

double NNfunction_ss_uLsR::synapse0x1aba750() {
   return (neuron0x1acf210()*2.68717);
}

double NNfunction_ss_uLsR::synapse0x1ac3fc0() {
   return (neuron0x1acfbe0()*-0.397607);
}

double NNfunction_ss_uLsR::synapse0x1ac4000() {
   return (neuron0x1ad07c0()*-0.977501);
}

double NNfunction_ss_uLsR::synapse0x1ac4950() {
   return (neuron0x1ad1190()*-0.92498);
}

double NNfunction_ss_uLsR::synapse0x1ac4990() {
   return (neuron0x1ac2010()*0.44646);
}

double NNfunction_ss_uLsR::synapse0x1ac5320() {
   return (neuron0x1ac29e0()*-0.305499);
}

double NNfunction_ss_uLsR::synapse0x1ac5360() {
   return (neuron0x1ac33b0()*-1.3126);
}

double NNfunction_ss_uLsR::synapse0x1ac5cf0() {
   return (neuron0x1ad59f0()*-2.42923);
}

double NNfunction_ss_uLsR::synapse0x1ac5d30() {
   return (neuron0x1ad62a0()*0.405532);
}

double NNfunction_ss_uLsR::synapse0x1ac66c0() {
   return (neuron0x1ad6c70()*-0.281376);
}

double NNfunction_ss_uLsR::synapse0x1ac6700() {
   return (neuron0x1ad7640()*1.03961);
}

double NNfunction_ss_uLsR::synapse0x1ac8e00() {
   return (neuron0x1ab35c0()*-0.160518);
}

double NNfunction_ss_uLsR::synapse0x1ac8e40() {
   return (neuron0x1ab3ed0()*0.345556);
}

double NNfunction_ss_uLsR::synapse0x1abe3c0() {
   return (neuron0x1ab49b0()*0.931629);
}

double NNfunction_ss_uLsR::synapse0x1abe400() {
   return (neuron0x186e240()*0.89878);
}

double NNfunction_ss_uLsR::synapse0x1acb9e0() {
   return (neuron0x1ab57d0()*-0.700635);
}

double NNfunction_ss_uLsR::synapse0x1acba20() {
   return (neuron0x1ab61a0()*-0.320174);
}

double NNfunction_ss_uLsR::synapse0x1acc3b0() {
   return (neuron0x1ab6f70()*-0.171318);
}

double NNfunction_ss_uLsR::synapse0x1acc3f0() {
   return (neuron0x1ab7940()*1.00942);
}

double NNfunction_ss_uLsR::synapse0x1accd80() {
   return (neuron0x1ab8310()*-0.333431);
}

double NNfunction_ss_uLsR::synapse0x1accdc0() {
   return (neuron0x1ab8df0()*0.397449);
}

double NNfunction_ss_uLsR::synapse0x1acd750() {
   return (neuron0x1ab97c0()*1.47952);
}

double NNfunction_ss_uLsR::synapse0x1acd790() {
   return (neuron0x1ab68a0()*0.380159);
}

double NNfunction_ss_uLsR::synapse0x1ace120() {
   return (neuron0x1abb370()*0.414456);
}

double NNfunction_ss_uLsR::synapse0x1ace160() {
   return (neuron0x1abbd40()*0.0366387);
}

double NNfunction_ss_uLsR::synapse0x1aceaf0() {
   return (neuron0x1abc710()*0.777924);
}

double NNfunction_ss_uLsR::synapse0x1aceb30() {
   return (neuron0x1abd0e0()*5.51557);
}

double NNfunction_ss_uLsR::synapse0x1acf4c0() {
   return (neuron0x1abeef0()*0.182928);
}

double NNfunction_ss_uLsR::synapse0x1acf500() {
   return (neuron0x1abf1d0()*-0.793324);
}

double NNfunction_ss_uLsR::synapse0x1acfe90() {
   return (neuron0x1abfba0()*0.746109);
}

double NNfunction_ss_uLsR::synapse0x1acfed0() {
   return (neuron0x1ac0570()*-2.11333);
}

double NNfunction_ss_uLsR::synapse0x1ad0a70() {
   return (neuron0x1ac0f40()*1.40103);
}

double NNfunction_ss_uLsR::synapse0x1ad0ab0() {
   return (neuron0x1ac1910()*2.19494);
}

double NNfunction_ss_uLsR::synapse0x1ad1440() {
   return (neuron0x1aba460()*0.14019);
}

double NNfunction_ss_uLsR::synapse0x1ad1480() {
   return (neuron0x1abae30()*0.937115);
}

double NNfunction_ss_uLsR::synapse0x1ac22c0() {
   return (neuron0x1ac46a0()*0.520155);
}

double NNfunction_ss_uLsR::synapse0x1ac2300() {
   return (neuron0x1ac5070()*0.332001);
}

double NNfunction_ss_uLsR::synapse0x1ac2c90() {
   return (neuron0x1ac5a40()*0.0727061);
}

double NNfunction_ss_uLsR::synapse0x1ac2cd0() {
   return (neuron0x1ac6410()*0.979323);
}

double NNfunction_ss_uLsR::synapse0x1ac3660() {
   return (neuron0x1ac6de0()*0.469768);
}

double NNfunction_ss_uLsR::synapse0x1ac36a0() {
   return (neuron0x1ac77b0()*-0.246704);
}

double NNfunction_ss_uLsR::synapse0x1ad5b80() {
   return (neuron0x1ac8180()*-2.08221);
}

double NNfunction_ss_uLsR::synapse0x1ad5bc0() {
   return (neuron0x1ac8b50()*0.694973);
}

double NNfunction_ss_uLsR::synapse0x1ad6550() {
   return (neuron0x1abebe0()*-5.11881);
}

double NNfunction_ss_uLsR::synapse0x1ad6590() {
   return (neuron0x1acb730()*-0.0833119);
}

double NNfunction_ss_uLsR::synapse0x1ad6f20() {
   return (neuron0x1acc100()*-0.497029);
}

double NNfunction_ss_uLsR::synapse0x1ad6f60() {
   return (neuron0x1accad0()*0.892466);
}

double NNfunction_ss_uLsR::synapse0x1ad78f0() {
   return (neuron0x1acd4a0()*0.778352);
}

double NNfunction_ss_uLsR::synapse0x1ad7930() {
   return (neuron0x1acde70()*0.359513);
}

double NNfunction_ss_uLsR::synapse0x1ab37e0() {
   return (neuron0x1ace840()*1.8043);
}

double NNfunction_ss_uLsR::synapse0x1ab3820() {
   return (neuron0x1acf210()*0.73261);
}

double NNfunction_ss_uLsR::synapse0x1ac7090() {
   return (neuron0x1acfbe0()*0.03551);
}

double NNfunction_ss_uLsR::synapse0x1ac70d0() {
   return (neuron0x1ad07c0()*-0.95732);
}

double NNfunction_ss_uLsR::synapse0x1ad8010() {
   return (neuron0x1ad1190()*0.204595);
}

double NNfunction_ss_uLsR::synapse0x1ad8050() {
   return (neuron0x1ac2010()*-1.09279);
}

double NNfunction_ss_uLsR::synapse0x1ad8090() {
   return (neuron0x1ac29e0()*0.314102);
}

double NNfunction_ss_uLsR::synapse0x1ad80d0() {
   return (neuron0x1ac33b0()*-0.100066);
}

double NNfunction_ss_uLsR::synapse0x1adef80() {
   return (neuron0x1ad59f0()*-1.82826);
}

double NNfunction_ss_uLsR::synapse0x1adefc0() {
   return (neuron0x1ad62a0()*0.810956);
}

double NNfunction_ss_uLsR::synapse0x1adf000() {
   return (neuron0x1ad6c70()*-0.362512);
}

double NNfunction_ss_uLsR::synapse0x1adf040() {
   return (neuron0x1ad7640()*0.691382);
}

double NNfunction_ss_uLsR::synapse0x1adf3c0() {
   return (neuron0x1ab35c0()*-0.208604);
}

double NNfunction_ss_uLsR::synapse0x1adf400() {
   return (neuron0x1ab3ed0()*-0.25301);
}

double NNfunction_ss_uLsR::synapse0x1adf440() {
   return (neuron0x1ab49b0()*-0.170003);
}

double NNfunction_ss_uLsR::synapse0x1adf480() {
   return (neuron0x186e240()*-0.133702);
}

double NNfunction_ss_uLsR::synapse0x1adf4c0() {
   return (neuron0x1ab57d0()*-0.0338609);
}

double NNfunction_ss_uLsR::synapse0x1adf500() {
   return (neuron0x1ab61a0()*0.00147789);
}

double NNfunction_ss_uLsR::synapse0x1adf540() {
   return (neuron0x1ab6f70()*0.00970638);
}

double NNfunction_ss_uLsR::synapse0x1adf580() {
   return (neuron0x1ab7940()*-0.56239);
}

double NNfunction_ss_uLsR::synapse0x1adf5c0() {
   return (neuron0x1ab8310()*-0.122257);
}

double NNfunction_ss_uLsR::synapse0x1adf600() {
   return (neuron0x1ab8df0()*-0.474851);
}

double NNfunction_ss_uLsR::synapse0x1adf640() {
   return (neuron0x1ab97c0()*-0.579969);
}

double NNfunction_ss_uLsR::synapse0x1adf680() {
   return (neuron0x1ab68a0()*-0.415718);
}

double NNfunction_ss_uLsR::synapse0x1adf6c0() {
   return (neuron0x1abb370()*-0.0570037);
}

double NNfunction_ss_uLsR::synapse0x1adf700() {
   return (neuron0x1abbd40()*0.148388);
}

double NNfunction_ss_uLsR::synapse0x1adf740() {
   return (neuron0x1abc710()*-0.248822);
}

double NNfunction_ss_uLsR::synapse0x1adf780() {
   return (neuron0x1abd0e0()*-0.476147);
}

double NNfunction_ss_uLsR::synapse0x1adf210() {
   return (neuron0x1abeef0()*-0.389828);
}

double NNfunction_ss_uLsR::synapse0x1adf250() {
   return (neuron0x1abf1d0()*-0.129406);
}

double NNfunction_ss_uLsR::synapse0x1adf8d0() {
   return (neuron0x1abfba0()*-0.311983);
}

double NNfunction_ss_uLsR::synapse0x1adf910() {
   return (neuron0x1ac0570()*-0.021836);
}

double NNfunction_ss_uLsR::synapse0x1adf950() {
   return (neuron0x1ac0f40()*-0.61216);
}

double NNfunction_ss_uLsR::synapse0x1adf990() {
   return (neuron0x1ac1910()*-0.647381);
}

double NNfunction_ss_uLsR::synapse0x1adf9d0() {
   return (neuron0x1aba460()*0.184055);
}

double NNfunction_ss_uLsR::synapse0x1adfa10() {
   return (neuron0x1abae30()*0.225652);
}

double NNfunction_ss_uLsR::synapse0x1adfa50() {
   return (neuron0x1ac46a0()*-0.275321);
}

double NNfunction_ss_uLsR::synapse0x1adfa90() {
   return (neuron0x1ac5070()*-0.34575);
}

double NNfunction_ss_uLsR::synapse0x1adfad0() {
   return (neuron0x1ac5a40()*-0.379017);
}

double NNfunction_ss_uLsR::synapse0x1adfb10() {
   return (neuron0x1ac6410()*-0.436057);
}

double NNfunction_ss_uLsR::synapse0x1adfb50() {
   return (neuron0x1ac6de0()*-0.4824);
}

double NNfunction_ss_uLsR::synapse0x1adfb90() {
   return (neuron0x1ac77b0()*-0.425324);
}

double NNfunction_ss_uLsR::synapse0x1adfbd0() {
   return (neuron0x1ac8180()*-0.00926011);
}

double NNfunction_ss_uLsR::synapse0x1adfc10() {
   return (neuron0x1ac8b50()*-0.528081);
}

double NNfunction_ss_uLsR::synapse0x1adf7c0() {
   return (neuron0x1abebe0()*-0.117297);
}

double NNfunction_ss_uLsR::synapse0x1adf800() {
   return (neuron0x1acb730()*-0.327445);
}

double NNfunction_ss_uLsR::synapse0x1adf840() {
   return (neuron0x1acc100()*-0.367795);
}

double NNfunction_ss_uLsR::synapse0x1adf880() {
   return (neuron0x1accad0()*-0.051068);
}

double NNfunction_ss_uLsR::synapse0x1adfe60() {
   return (neuron0x1acd4a0()*-0.366482);
}

double NNfunction_ss_uLsR::synapse0x1adfea0() {
   return (neuron0x1acde70()*-0.221393);
}

double NNfunction_ss_uLsR::synapse0x1adfee0() {
   return (neuron0x1ace840()*-0.519799);
}

double NNfunction_ss_uLsR::synapse0x1adff20() {
   return (neuron0x1acf210()*-0.643297);
}

double NNfunction_ss_uLsR::synapse0x1adff60() {
   return (neuron0x1acfbe0()*0.0567567);
}

double NNfunction_ss_uLsR::synapse0x1adffa0() {
   return (neuron0x1ad07c0()*0.0945749);
}

double NNfunction_ss_uLsR::synapse0x1adffe0() {
   return (neuron0x1ad1190()*-0.385834);
}

double NNfunction_ss_uLsR::synapse0x1ae0020() {
   return (neuron0x1ac2010()*0.369868);
}

double NNfunction_ss_uLsR::synapse0x1ae0060() {
   return (neuron0x1ac29e0()*-0.475582);
}

double NNfunction_ss_uLsR::synapse0x1ae00a0() {
   return (neuron0x1ac33b0()*-0.166769);
}

double NNfunction_ss_uLsR::synapse0x1ae00e0() {
   return (neuron0x1ad59f0()*0.364659);
}

double NNfunction_ss_uLsR::synapse0x1ae0120() {
   return (neuron0x1ad62a0()*0.241249);
}

double NNfunction_ss_uLsR::synapse0x1ae0160() {
   return (neuron0x1ad6c70()*0.0790968);
}

double NNfunction_ss_uLsR::synapse0x1ae01a0() {
   return (neuron0x1ad7640()*-0.0539049);
}

double NNfunction_ss_uLsR::synapse0x1ae0520() {
   return (neuron0x1ab35c0()*-0.367606);
}

double NNfunction_ss_uLsR::synapse0x1ae0560() {
   return (neuron0x1ab3ed0()*0.250071);
}

double NNfunction_ss_uLsR::synapse0x1ae05a0() {
   return (neuron0x1ab49b0()*0.636762);
}

double NNfunction_ss_uLsR::synapse0x1ae05e0() {
   return (neuron0x186e240()*0.202127);
}

double NNfunction_ss_uLsR::synapse0x1ae0620() {
   return (neuron0x1ab57d0()*0.571505);
}

double NNfunction_ss_uLsR::synapse0x1ae0660() {
   return (neuron0x1ab61a0()*-0.0238796);
}

double NNfunction_ss_uLsR::synapse0x1ae06a0() {
   return (neuron0x1ab6f70()*-0.0520157);
}

double NNfunction_ss_uLsR::synapse0x1ae06e0() {
   return (neuron0x1ab7940()*-0.22787);
}

double NNfunction_ss_uLsR::synapse0x1ae0720() {
   return (neuron0x1ab8310()*0.393757);
}

double NNfunction_ss_uLsR::synapse0x1ae0760() {
   return (neuron0x1ab8df0()*-0.485008);
}

double NNfunction_ss_uLsR::synapse0x1ae07a0() {
   return (neuron0x1ab97c0()*0.391235);
}

double NNfunction_ss_uLsR::synapse0x1ae07e0() {
   return (neuron0x1ab68a0()*-0.0554729);
}

double NNfunction_ss_uLsR::synapse0x1ae0820() {
   return (neuron0x1abb370()*-0.866828);
}

double NNfunction_ss_uLsR::synapse0x1ae0860() {
   return (neuron0x1abbd40()*-0.218856);
}

double NNfunction_ss_uLsR::synapse0x1ae08a0() {
   return (neuron0x1abc710()*0.235873);
}

double NNfunction_ss_uLsR::synapse0x1ae08e0() {
   return (neuron0x1abd0e0()*-0.0398192);
}

double NNfunction_ss_uLsR::synapse0x1ae0370() {
   return (neuron0x1abeef0()*0.357226);
}

double NNfunction_ss_uLsR::synapse0x1ae03b0() {
   return (neuron0x1abf1d0()*0.850801);
}

double NNfunction_ss_uLsR::synapse0x1ae0a30() {
   return (neuron0x1abfba0()*0.21244);
}

double NNfunction_ss_uLsR::synapse0x1ae0a70() {
   return (neuron0x1ac0570()*0.717817);
}

double NNfunction_ss_uLsR::synapse0x1ae0ab0() {
   return (neuron0x1ac0f40()*0.327746);
}

double NNfunction_ss_uLsR::synapse0x1ae0af0() {
   return (neuron0x1ac1910()*-0.453624);
}

double NNfunction_ss_uLsR::synapse0x1ae0b30() {
   return (neuron0x1aba460()*-0.41549);
}

double NNfunction_ss_uLsR::synapse0x1ae0b70() {
   return (neuron0x1abae30()*0.213639);
}

double NNfunction_ss_uLsR::synapse0x1ae0bb0() {
   return (neuron0x1ac46a0()*-0.225943);
}

double NNfunction_ss_uLsR::synapse0x1ae0bf0() {
   return (neuron0x1ac5070()*-0.126976);
}

double NNfunction_ss_uLsR::synapse0x1ae0c30() {
   return (neuron0x1ac5a40()*-0.260408);
}

double NNfunction_ss_uLsR::synapse0x1ae0c70() {
   return (neuron0x1ac6410()*0.0718092);
}

double NNfunction_ss_uLsR::synapse0x1ae0cb0() {
   return (neuron0x1ac6de0()*0.469495);
}

double NNfunction_ss_uLsR::synapse0x1ae0cf0() {
   return (neuron0x1ac77b0()*-0.35645);
}

double NNfunction_ss_uLsR::synapse0x1ae0d30() {
   return (neuron0x1ac8180()*0.0204941);
}

double NNfunction_ss_uLsR::synapse0x1ae0d70() {
   return (neuron0x1ac8b50()*0.142006);
}

double NNfunction_ss_uLsR::synapse0x1ae0920() {
   return (neuron0x1abebe0()*-0.0241642);
}

double NNfunction_ss_uLsR::synapse0x1ae0960() {
   return (neuron0x1acb730()*0.0795524);
}

double NNfunction_ss_uLsR::synapse0x1ae09a0() {
   return (neuron0x1acc100()*0.449262);
}

double NNfunction_ss_uLsR::synapse0x1ae09e0() {
   return (neuron0x1accad0()*-0.203561);
}

double NNfunction_ss_uLsR::synapse0x1ae0fc0() {
   return (neuron0x1acd4a0()*0.0161007);
}

double NNfunction_ss_uLsR::synapse0x1ae1000() {
   return (neuron0x1acde70()*0.395006);
}

double NNfunction_ss_uLsR::synapse0x1ae1040() {
   return (neuron0x1ace840()*0.0223834);
}

double NNfunction_ss_uLsR::synapse0x1ae1080() {
   return (neuron0x1acf210()*0.00241199);
}

double NNfunction_ss_uLsR::synapse0x1ae10c0() {
   return (neuron0x1acfbe0()*-0.326495);
}

double NNfunction_ss_uLsR::synapse0x1ae1100() {
   return (neuron0x1ad07c0()*0.374051);
}

double NNfunction_ss_uLsR::synapse0x1ae1140() {
   return (neuron0x1ad1190()*-0.00496613);
}

double NNfunction_ss_uLsR::synapse0x1ae1180() {
   return (neuron0x1ac2010()*0.940274);
}

double NNfunction_ss_uLsR::synapse0x1ae11c0() {
   return (neuron0x1ac29e0()*-0.256802);
}

double NNfunction_ss_uLsR::synapse0x1ae1200() {
   return (neuron0x1ac33b0()*0.633365);
}

double NNfunction_ss_uLsR::synapse0x1ae1240() {
   return (neuron0x1ad59f0()*0.154839);
}

double NNfunction_ss_uLsR::synapse0x1ae1280() {
   return (neuron0x1ad62a0()*-0.0578477);
}

double NNfunction_ss_uLsR::synapse0x1ae12c0() {
   return (neuron0x1ad6c70()*-0.103739);
}

double NNfunction_ss_uLsR::synapse0x1ae1300() {
   return (neuron0x1ad7640()*0.474514);
}

double NNfunction_ss_uLsR::synapse0x1ae1680() {
   return (neuron0x1ab35c0()*0.189964);
}

double NNfunction_ss_uLsR::synapse0x1ae16c0() {
   return (neuron0x1ab3ed0()*-0.441979);
}

double NNfunction_ss_uLsR::synapse0x1ae1700() {
   return (neuron0x1ab49b0()*-0.379325);
}

double NNfunction_ss_uLsR::synapse0x1ae1740() {
   return (neuron0x186e240()*-4.67041);
}

double NNfunction_ss_uLsR::synapse0x1ae1780() {
   return (neuron0x1ab57d0()*-0.0337022);
}

double NNfunction_ss_uLsR::synapse0x1ae17c0() {
   return (neuron0x1ab61a0()*0.249954);
}

double NNfunction_ss_uLsR::synapse0x1ae1800() {
   return (neuron0x1ab6f70()*0.286384);
}

double NNfunction_ss_uLsR::synapse0x1ae1840() {
   return (neuron0x1ab7940()*0.0714609);
}

double NNfunction_ss_uLsR::synapse0x1ae1880() {
   return (neuron0x1ab8310()*-0.290445);
}

double NNfunction_ss_uLsR::synapse0x1ae18c0() {
   return (neuron0x1ab8df0()*0.419019);
}

double NNfunction_ss_uLsR::synapse0x1ae1900() {
   return (neuron0x1ab97c0()*-0.259146);
}

double NNfunction_ss_uLsR::synapse0x1ae1940() {
   return (neuron0x1ab68a0()*0.195493);
}

double NNfunction_ss_uLsR::synapse0x1ae1980() {
   return (neuron0x1abb370()*0.487756);
}

double NNfunction_ss_uLsR::synapse0x1ae19c0() {
   return (neuron0x1abbd40()*0.294984);
}

double NNfunction_ss_uLsR::synapse0x1ae1a00() {
   return (neuron0x1abc710()*-0.151954);
}

double NNfunction_ss_uLsR::synapse0x1ae1a40() {
   return (neuron0x1abd0e0()*0.728219);
}

double NNfunction_ss_uLsR::synapse0x1ae14d0() {
   return (neuron0x1abeef0()*-2.25019);
}

double NNfunction_ss_uLsR::synapse0x1ae1510() {
   return (neuron0x1abf1d0()*-0.125031);
}

double NNfunction_ss_uLsR::synapse0x1ae1b90() {
   return (neuron0x1abfba0()*-0.2423);
}

double NNfunction_ss_uLsR::synapse0x1ae1bd0() {
   return (neuron0x1ac0570()*-0.598906);
}

double NNfunction_ss_uLsR::synapse0x1ae1c10() {
   return (neuron0x1ac0f40()*-0.115795);
}

double NNfunction_ss_uLsR::synapse0x1ae1c50() {
   return (neuron0x1ac1910()*1.14397);
}

double NNfunction_ss_uLsR::synapse0x1ae1c90() {
   return (neuron0x1aba460()*-0.0629777);
}

double NNfunction_ss_uLsR::synapse0x1ae1cd0() {
   return (neuron0x1abae30()*-0.37352);
}

double NNfunction_ss_uLsR::synapse0x1ae1d10() {
   return (neuron0x1ac46a0()*0.0163253);
}

double NNfunction_ss_uLsR::synapse0x1ae1d50() {
   return (neuron0x1ac5070()*0.114213);
}

double NNfunction_ss_uLsR::synapse0x1ae1d90() {
   return (neuron0x1ac5a40()*0.154645);
}

double NNfunction_ss_uLsR::synapse0x1ae1dd0() {
   return (neuron0x1ac6410()*-0.00351235);
}

double NNfunction_ss_uLsR::synapse0x1ae1e10() {
   return (neuron0x1ac6de0()*-0.348754);
}

double NNfunction_ss_uLsR::synapse0x1ae1e50() {
   return (neuron0x1ac77b0()*0.258032);
}

double NNfunction_ss_uLsR::synapse0x1ae1e90() {
   return (neuron0x1ac8180()*1.40623);
}

double NNfunction_ss_uLsR::synapse0x1ae1ed0() {
   return (neuron0x1ac8b50()*-0.0670894);
}

double NNfunction_ss_uLsR::synapse0x1ae1a80() {
   return (neuron0x1abebe0()*-0.476543);
}

double NNfunction_ss_uLsR::synapse0x1ae1ac0() {
   return (neuron0x1acb730()*0.183055);
}

double NNfunction_ss_uLsR::synapse0x1ae1b00() {
   return (neuron0x1acc100()*-0.133458);
}

double NNfunction_ss_uLsR::synapse0x1ae1b40() {
   return (neuron0x1accad0()*0.10364);
}

double NNfunction_ss_uLsR::synapse0x1ae2120() {
   return (neuron0x1acd4a0()*-0.692725);
}

double NNfunction_ss_uLsR::synapse0x1ae2160() {
   return (neuron0x1acde70()*-0.369942);
}

double NNfunction_ss_uLsR::synapse0x1ae21a0() {
   return (neuron0x1ace840()*0.850183);
}

double NNfunction_ss_uLsR::synapse0x1ae21e0() {
   return (neuron0x1acf210()*1.48223);
}

double NNfunction_ss_uLsR::synapse0x1ae2220() {
   return (neuron0x1acfbe0()*0.23019);
}

double NNfunction_ss_uLsR::synapse0x1ae2260() {
   return (neuron0x1ad07c0()*-1.38029);
}

double NNfunction_ss_uLsR::synapse0x1ae22a0() {
   return (neuron0x1ad1190()*0.642427);
}

double NNfunction_ss_uLsR::synapse0x1ae22e0() {
   return (neuron0x1ac2010()*-0.0382891);
}

double NNfunction_ss_uLsR::synapse0x1ae2320() {
   return (neuron0x1ac29e0()*0.17761);
}

double NNfunction_ss_uLsR::synapse0x1ae2360() {
   return (neuron0x1ac33b0()*-1.1722);
}

double NNfunction_ss_uLsR::synapse0x1ae23a0() {
   return (neuron0x1ad59f0()*-0.398365);
}

double NNfunction_ss_uLsR::synapse0x1ae23e0() {
   return (neuron0x1ad62a0()*-0.351286);
}

double NNfunction_ss_uLsR::synapse0x1ae2420() {
   return (neuron0x1ad6c70()*0.156978);
}

double NNfunction_ss_uLsR::synapse0x1ae2460() {
   return (neuron0x1ad7640()*-0.624831);
}

double NNfunction_ss_uLsR::synapse0x1ab3580() {
   return (neuron0x1ade840()*-9.74355);
}

double NNfunction_ss_uLsR::synapse0x1ae26c0() {
   return (neuron0x1adebe0()*-5.2307);
}

double NNfunction_ss_uLsR::synapse0x1ae2700() {
   return (neuron0x1adf080()*0.0164364);
}

double NNfunction_ss_uLsR::synapse0x1ae2740() {
   return (neuron0x1ae01e0()*4.96744);
}

double NNfunction_ss_uLsR::synapse0x1ae2780() {
   return (neuron0x1ae1340()*-6.58064);
}

