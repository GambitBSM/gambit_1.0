#include "NNfunction_ns_chiPlus1_sL.h"
#include <cmath>

double NNfunction_ns_chiPlus1_sL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.4942)/15.0442;
   input1 = (in1 - 32.0437)/948.314;
   input2 = (in2 - 233.599)/248.494;
   input3 = (in3 - 134.365)/702.608;
   input4 = (in4 - 880.656)/839.44;
   input5 = (in5 - 735.336)/802.538;
   input6 = (in6 - 733.383)/797.777;
   input7 = (in7 - 747.591)/791.047;
   input8 = (in8 - 744.533)/837.219;
   input9 = (in9 - 731.855)/822.448;
   input10 = (in10 - 769.069)/842.501;
   input11 = (in11 - 680.449)/714.826;
   input12 = (in12 - 346.564)/257.626;
   input13 = (in13 - 505.684)/428.673;
   input14 = (in14 - 655.453)/644.531;
   input15 = (in15 - 656.951)/648.504;
   input16 = (in16 - 468.471)/444.569;
   input17 = (in17 - 702.125)/749.279;
   input18 = (in18 - 703.534)/747.768;
   input19 = (in19 - 722.007)/735.178;
   input20 = (in20 - -115.158)/431.6;
   input21 = (in21 - -145.785)/985.921;
   input22 = (in22 - 7.43692)/1012.55;
   input23 = (in23 - -76.4835)/597.506;
   switch(index) {
     case 0:
         return neuron0x1fe99d0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiPlus1_sL::Value(int index, double* input) {
   input0 = (input[0] - 22.4942)/15.0442;
   input1 = (input[1] - 32.0437)/948.314;
   input2 = (input[2] - 233.599)/248.494;
   input3 = (input[3] - 134.365)/702.608;
   input4 = (input[4] - 880.656)/839.44;
   input5 = (input[5] - 735.336)/802.538;
   input6 = (input[6] - 733.383)/797.777;
   input7 = (input[7] - 747.591)/791.047;
   input8 = (input[8] - 744.533)/837.219;
   input9 = (input[9] - 731.855)/822.448;
   input10 = (input[10] - 769.069)/842.501;
   input11 = (input[11] - 680.449)/714.826;
   input12 = (input[12] - 346.564)/257.626;
   input13 = (input[13] - 505.684)/428.673;
   input14 = (input[14] - 655.453)/644.531;
   input15 = (input[15] - 656.951)/648.504;
   input16 = (input[16] - 468.471)/444.569;
   input17 = (input[17] - 702.125)/749.279;
   input18 = (input[18] - 703.534)/747.768;
   input19 = (input[19] - 722.007)/735.178;
   input20 = (input[20] - -115.158)/431.6;
   input21 = (input[21] - -145.785)/985.921;
   input22 = (input[22] - 7.43692)/1012.55;
   input23 = (input[23] - -76.4835)/597.506;
   switch(index) {
     case 0:
         return neuron0x1fe99d0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb4a40() {
   return input0;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb4cf0() {
   return input1;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb5030() {
   return input2;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb5370() {
   return input3;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb56b0() {
   return input4;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb59f0() {
   return input5;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb5d30() {
   return input6;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb6070() {
   return input7;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb63b0() {
   return input8;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb66f0() {
   return input9;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb6a30() {
   return input10;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb6d70() {
   return input11;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb70b0() {
   return input12;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb73f0() {
   return input13;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb7730() {
   return input14;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb7a70() {
   return input15;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb7db0() {
   return input16;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb8310() {
   return input17;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb8650() {
   return input18;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb8990() {
   return input19;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb8cd0() {
   return input20;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb9010() {
   return input21;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb9350() {
   return input22;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb9690() {
   return input23;
}

double NNfunction_ns_chiPlus1_sL::input0x1fb9b00() {
   double input = -0.41791;
   input += synapse0x1fb9e40();
   input += synapse0x1fb9e80();
   input += synapse0x1fb9ec0();
   input += synapse0x1fb9f00();
   input += synapse0x1fb9f40();
   input += synapse0x1fb9f80();
   input += synapse0x1fb9fc0();
   input += synapse0x1fba000();
   input += synapse0x1fba040();
   input += synapse0x1fba080();
   input += synapse0x1fba0c0();
   input += synapse0x1fba100();
   input += synapse0x1fba140();
   input += synapse0x1fba180();
   input += synapse0x1fba1c0();
   input += synapse0x1fba200();
   input += synapse0x1fb9c90();
   input += synapse0x1fb9cd0();
   input += synapse0x1d70bc0();
   input += synapse0x1d70c00();
   input += synapse0x1fba240();
   input += synapse0x1fba280();
   input += synapse0x1fba2c0();
   input += synapse0x1fba300();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fb9b00() {
   double input = input0x1fb9b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fba340() {
   double input = 8.50388;
   input += synapse0x1fba680();
   input += synapse0x1fba6c0();
   input += synapse0x1fba700();
   input += synapse0x1fba740();
   input += synapse0x1fba780();
   input += synapse0x1fba7c0();
   input += synapse0x1fba800();
   input += synapse0x1fba840();
   input += synapse0x1fba880();
   input += synapse0x1d70a10();
   input += synapse0x1d70a50();
   input += synapse0x1d70a90();
   input += synapse0x1d70ad0();
   input += synapse0x1fbaad0();
   input += synapse0x1fbab10();
   input += synapse0x1fbab50();
   input += synapse0x1fba4d0();
   input += synapse0x1fba510();
   input += synapse0x1fbaca0();
   input += synapse0x1fbace0();
   input += synapse0x1fbad20();
   input += synapse0x1fbad60();
   input += synapse0x1fbada0();
   input += synapse0x1fbade0();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fba340() {
   double input = input0x1fba340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fbae20() {
   double input = -0.832159;
   input += synapse0x1fbb160();
   input += synapse0x1fbb1a0();
   input += synapse0x1fbb1e0();
   input += synapse0x1fbb220();
   input += synapse0x1fbb260();
   input += synapse0x1fbb2a0();
   input += synapse0x1fbb2e0();
   input += synapse0x1fbb320();
   input += synapse0x1fbb360();
   input += synapse0x1fbb3a0();
   input += synapse0x1fbb3e0();
   input += synapse0x1fbb420();
   input += synapse0x1fbb460();
   input += synapse0x1fbb4a0();
   input += synapse0x1fbb4e0();
   input += synapse0x1fbb520();
   input += synapse0x1fbafb0();
   input += synapse0x1fbaff0();
   input += synapse0x1d712b0();
   input += synapse0x1d7eb80();
   input += synapse0x1d7ebc0();
   input += synapse0x1fbd450();
   input += synapse0x1fbd490();
   input += synapse0x1fb4780();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fbae20() {
   double input = input0x1fbae20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fba8c0() {
   double input = -0.442789;
   input += synapse0x1fb4850();
   input += synapse0x1d7f400();
   input += synapse0x1fbaa50();
   input += synapse0x1fbaa90();
   input += synapse0x1fbb670();
   input += synapse0x1fbb6b0();
   input += synapse0x1fbb6f0();
   input += synapse0x1fbb730();
   input += synapse0x1fbb770();
   input += synapse0x1fbb7b0();
   input += synapse0x1fbb7f0();
   input += synapse0x1fbb830();
   input += synapse0x1fbb870();
   input += synapse0x1fbb8b0();
   input += synapse0x1fbb8f0();
   input += synapse0x1fbb930();
   input += synapse0x1fb47c0();
   input += synapse0x1fb4800();
   input += synapse0x1fbba80();
   input += synapse0x1fbbac0();
   input += synapse0x1fbbb00();
   input += synapse0x1fbbb40();
   input += synapse0x1fbbb80();
   input += synapse0x1fbbbc0();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fba8c0() {
   double input = input0x1fba8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fbbc00() {
   double input = 4.37593;
   input += synapse0x1fbbf40();
   input += synapse0x1fbbf80();
   input += synapse0x1fbbfc0();
   input += synapse0x1fbc000();
   input += synapse0x1fbc040();
   input += synapse0x1fbc080();
   input += synapse0x1fbc0c0();
   input += synapse0x1fbc100();
   input += synapse0x1fbc140();
   input += synapse0x1fbc180();
   input += synapse0x1fbc1c0();
   input += synapse0x1fbc200();
   input += synapse0x1fbc240();
   input += synapse0x1fbc280();
   input += synapse0x1fbc2c0();
   input += synapse0x1fbc300();
   input += synapse0x1fbc450();
   input += synapse0x1fbbd90();
   input += synapse0x1fbbdd0();
   input += synapse0x1fbd590();
   input += synapse0x1fbd5d0();
   input += synapse0x1fbd610();
   input += synapse0x1fbd650();
   input += synapse0x1fbd690();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fbbc00() {
   double input = input0x1fbbc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fbd6d0() {
   double input = -1.10243;
   input += synapse0x1fbda10();
   input += synapse0x1fbda50();
   input += synapse0x1fbda90();
   input += synapse0x1fbdad0();
   input += synapse0x1fbdb10();
   input += synapse0x1fbdb50();
   input += synapse0x1fbdb90();
   input += synapse0x1fbdbd0();
   input += synapse0x1fbdc10();
   input += synapse0x1d7eed0();
   input += synapse0x1d7ef10();
   input += synapse0x1d7ef50();
   input += synapse0x1d7ef90();
   input += synapse0x1d7efd0();
   input += synapse0x1d7f010();
   input += synapse0x1d7f050();
   input += synapse0x1fbd860();
   input += synapse0x1fbd8a0();
   input += synapse0x1d7f1a0();
   input += synapse0x1d7f1e0();
   input += synapse0x1d7f220();
   input += synapse0x1d7f260();
   input += synapse0x1d7f2a0();
   input += synapse0x1fbe460();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fbd6d0() {
   double input = input0x1fbd6d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fbe4a0() {
   double input = -0.661305;
   input += synapse0x1fbe7e0();
   input += synapse0x1fbe820();
   input += synapse0x1fbe860();
   input += synapse0x1fbe8a0();
   input += synapse0x1fbe8e0();
   input += synapse0x1fbe920();
   input += synapse0x1fbe960();
   input += synapse0x1fbe9a0();
   input += synapse0x1fbe9e0();
   input += synapse0x1fbea20();
   input += synapse0x1fbea60();
   input += synapse0x1fbeaa0();
   input += synapse0x1fbeae0();
   input += synapse0x1fbeb20();
   input += synapse0x1fbeb60();
   input += synapse0x1fbeba0();
   input += synapse0x1fbe630();
   input += synapse0x1fbe670();
   input += synapse0x1fbecf0();
   input += synapse0x1fbed30();
   input += synapse0x1fbed70();
   input += synapse0x1fbedb0();
   input += synapse0x1fbedf0();
   input += synapse0x1fbee30();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fbe4a0() {
   double input = input0x1fbe4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fbee70() {
   double input = -4.08553;
   input += synapse0x1fbf1b0();
   input += synapse0x1fbf1f0();
   input += synapse0x1fbf230();
   input += synapse0x1fbf270();
   input += synapse0x1fbf2b0();
   input += synapse0x1fbf2f0();
   input += synapse0x1fbf330();
   input += synapse0x1fbf370();
   input += synapse0x1fbf3b0();
   input += synapse0x1fbf3f0();
   input += synapse0x1fbf430();
   input += synapse0x1fbf470();
   input += synapse0x1fbf4b0();
   input += synapse0x1fbf4f0();
   input += synapse0x1fbf530();
   input += synapse0x1fbf570();
   input += synapse0x1fbf000();
   input += synapse0x1fbf040();
   input += synapse0x1fbf6c0();
   input += synapse0x1fbf700();
   input += synapse0x1fbf740();
   input += synapse0x1fbf780();
   input += synapse0x1fbf7c0();
   input += synapse0x1fbf800();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fbee70() {
   double input = input0x1fbee70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fbf840() {
   double input = 0.0930648;
   input += synapse0x1fb8200();
   input += synapse0x1fb8240();
   input += synapse0x1fb8280();
   input += synapse0x1fb82c0();
   input += synapse0x1fbfd90();
   input += synapse0x1fbfdd0();
   input += synapse0x1fbfe10();
   input += synapse0x1fbfe50();
   input += synapse0x1fbfe90();
   input += synapse0x1fbfed0();
   input += synapse0x1fbff10();
   input += synapse0x1fbff50();
   input += synapse0x1fbff90();
   input += synapse0x1fbffd0();
   input += synapse0x1fc0010();
   input += synapse0x1fc0050();
   input += synapse0x1fbf9d0();
   input += synapse0x1fbfa10();
   input += synapse0x1fc01a0();
   input += synapse0x1fc01e0();
   input += synapse0x1fc0220();
   input += synapse0x1fc0260();
   input += synapse0x1fc02a0();
   input += synapse0x1fc02e0();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fbf840() {
   double input = input0x1fbf840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fc0320() {
   double input = 0.535788;
   input += synapse0x1fc0660();
   input += synapse0x1fc06a0();
   input += synapse0x1fc06e0();
   input += synapse0x1fc0720();
   input += synapse0x1fc0760();
   input += synapse0x1fc07a0();
   input += synapse0x1fc07e0();
   input += synapse0x1fc0820();
   input += synapse0x1fc0860();
   input += synapse0x1fc08a0();
   input += synapse0x1fc08e0();
   input += synapse0x1fc0920();
   input += synapse0x1fc0960();
   input += synapse0x1fc09a0();
   input += synapse0x1fc09e0();
   input += synapse0x1fc0a20();
   input += synapse0x1fc04b0();
   input += synapse0x1fc04f0();
   input += synapse0x1fc0b70();
   input += synapse0x1fc0bb0();
   input += synapse0x1fc0bf0();
   input += synapse0x1fc0c30();
   input += synapse0x1fc0c70();
   input += synapse0x1fc0cb0();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fc0320() {
   double input = input0x1fc0320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fc0cf0() {
   double input = -0.99144;
   input += synapse0x1fc1030();
   input += synapse0x1fc1070();
   input += synapse0x1fc10b0();
   input += synapse0x1fc10f0();
   input += synapse0x1fc1130();
   input += synapse0x1fc1170();
   input += synapse0x1fc11b0();
   input += synapse0x1fc11f0();
   input += synapse0x1fc1230();
   input += synapse0x1fc1270();
   input += synapse0x1fc12b0();
   input += synapse0x1fc12f0();
   input += synapse0x1fc1330();
   input += synapse0x1fc1370();
   input += synapse0x1fc13b0();
   input += synapse0x1fc13f0();
   input += synapse0x1fc0e80();
   input += synapse0x1fc0ec0();
   input += synapse0x1fbdc50();
   input += synapse0x1fbdc90();
   input += synapse0x1fbdcd0();
   input += synapse0x1fbdd10();
   input += synapse0x1fbdd50();
   input += synapse0x1fbdd90();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fc0cf0() {
   double input = input0x1fc0cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fbddd0() {
   double input = 1.17259;
   input += synapse0x1fbe110();
   input += synapse0x1fbe150();
   input += synapse0x1fbe190();
   input += synapse0x1fbe1d0();
   input += synapse0x1fbe210();
   input += synapse0x1fbe250();
   input += synapse0x1fbe290();
   input += synapse0x1fbe2d0();
   input += synapse0x1fbe310();
   input += synapse0x1fbe350();
   input += synapse0x1fbe390();
   input += synapse0x1fbe3d0();
   input += synapse0x1fbe410();
   input += synapse0x1fc2550();
   input += synapse0x1fc2590();
   input += synapse0x1fc25d0();
   input += synapse0x1fbdf60();
   input += synapse0x1fbdfa0();
   input += synapse0x1fc2720();
   input += synapse0x1fc2760();
   input += synapse0x1fc27a0();
   input += synapse0x1fc27e0();
   input += synapse0x1fc2820();
   input += synapse0x1fc2860();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fbddd0() {
   double input = input0x1fbddd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fc28a0() {
   double input = -7.43782;
   input += synapse0x1fc2be0();
   input += synapse0x1fc2c20();
   input += synapse0x1fc2c60();
   input += synapse0x1fc2ca0();
   input += synapse0x1fc2ce0();
   input += synapse0x1fc2d20();
   input += synapse0x1fc2d60();
   input += synapse0x1fc2da0();
   input += synapse0x1fc2de0();
   input += synapse0x1fc2e20();
   input += synapse0x1fc2e60();
   input += synapse0x1fc2ea0();
   input += synapse0x1fc2ee0();
   input += synapse0x1fc2f20();
   input += synapse0x1fc2f60();
   input += synapse0x1fc2fa0();
   input += synapse0x1fc2a30();
   input += synapse0x1fc2a70();
   input += synapse0x1fc30f0();
   input += synapse0x1fc3130();
   input += synapse0x1fc3170();
   input += synapse0x1fc31b0();
   input += synapse0x1fc31f0();
   input += synapse0x1fc3230();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fc28a0() {
   double input = input0x1fc28a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fc3270() {
   double input = 1.06629;
   input += synapse0x1fc35b0();
   input += synapse0x1fc35f0();
   input += synapse0x1fc3630();
   input += synapse0x1fc3670();
   input += synapse0x1fc36b0();
   input += synapse0x1fc36f0();
   input += synapse0x1fc3730();
   input += synapse0x1fc3770();
   input += synapse0x1fc37b0();
   input += synapse0x1fc37f0();
   input += synapse0x1fc3830();
   input += synapse0x1fc3870();
   input += synapse0x1fc38b0();
   input += synapse0x1fc38f0();
   input += synapse0x1fc3930();
   input += synapse0x1fc3970();
   input += synapse0x1fc3400();
   input += synapse0x1fc3440();
   input += synapse0x1fc3ac0();
   input += synapse0x1fc3b00();
   input += synapse0x1fc3b40();
   input += synapse0x1fc3b80();
   input += synapse0x1fc3bc0();
   input += synapse0x1fc3c00();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fc3270() {
   double input = input0x1fc3270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fc3c40() {
   double input = -0.638791;
   input += synapse0x1fc3f80();
   input += synapse0x1fc3fc0();
   input += synapse0x1fc4000();
   input += synapse0x1fc4040();
   input += synapse0x1fc4080();
   input += synapse0x1fc40c0();
   input += synapse0x1fc4100();
   input += synapse0x1fc4140();
   input += synapse0x1fc4180();
   input += synapse0x1fc41c0();
   input += synapse0x1fc4200();
   input += synapse0x1fc4240();
   input += synapse0x1fc4280();
   input += synapse0x1fc42c0();
   input += synapse0x1fc4300();
   input += synapse0x1fc4340();
   input += synapse0x1fc3dd0();
   input += synapse0x1fc3e10();
   input += synapse0x1fc4490();
   input += synapse0x1fc44d0();
   input += synapse0x1fc4510();
   input += synapse0x1fc4550();
   input += synapse0x1fc4590();
   input += synapse0x1fc45d0();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fc3c40() {
   double input = input0x1fc3c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fc4610() {
   double input = -0.720436;
   input += synapse0x1fc4950();
   input += synapse0x1fb4bd0();
   input += synapse0x1fb4c10();
   input += synapse0x1fb4f10();
   input += synapse0x1fb4f50();
   input += synapse0x1fb5250();
   input += synapse0x1fb5290();
   input += synapse0x1fb5590();
   input += synapse0x1fb55d0();
   input += synapse0x1fb58d0();
   input += synapse0x1fb5910();
   input += synapse0x1fb5c10();
   input += synapse0x1fb5c50();
   input += synapse0x1fb5f50();
   input += synapse0x1fb5f90();
   input += synapse0x1fb6290();
   input += synapse0x1fb62d0();
   input += synapse0x1fb65d0();
   input += synapse0x1fb6610();
   input += synapse0x1fb6910();
   input += synapse0x1fb6950();
   input += synapse0x1fb6c50();
   input += synapse0x1fb6c90();
   input += synapse0x1fb6f90();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fc4610() {
   double input = input0x1fc4610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fc6420() {
   double input = -8.45424;
   input += synapse0x1fb6fd0();
   input += synapse0x1fb7c90();
   input += synapse0x1fb7cd0();
   input += synapse0x1fc47a0();
   input += synapse0x1fc47e0();
   input += synapse0x1fb7fd0();
   input += synapse0x1fb8010();
   input += synapse0x1fb8530();
   input += synapse0x1fb8570();
   input += synapse0x1fb8870();
   input += synapse0x1fb88b0();
   input += synapse0x1fb8bb0();
   input += synapse0x1fb8bf0();
   input += synapse0x1fb8ef0();
   input += synapse0x1fb8f30();
   input += synapse0x1fb9230();
   input += synapse0x1fb9270();
   input += synapse0x1fb9570();
   input += synapse0x1fb95b0();
   input += synapse0x1fb98b0();
   input += synapse0x1fb98f0();
   input += synapse0x1fb72d0();
   input += synapse0x1fb7310();
   input += synapse0x1fc66c0();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fc6420() {
   double input = input0x1fc6420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fc6700() {
   double input = -0.20789;
   input += synapse0x1fc6a40();
   input += synapse0x1fc6a80();
   input += synapse0x1fc6ac0();
   input += synapse0x1fc6b00();
   input += synapse0x1fc6b40();
   input += synapse0x1fc6b80();
   input += synapse0x1fc6bc0();
   input += synapse0x1fc6c00();
   input += synapse0x1fc6c40();
   input += synapse0x1fc6c80();
   input += synapse0x1fc6cc0();
   input += synapse0x1fc6d00();
   input += synapse0x1fc6d40();
   input += synapse0x1fc6d80();
   input += synapse0x1fc6dc0();
   input += synapse0x1fc6e00();
   input += synapse0x1fc6890();
   input += synapse0x1fc68d0();
   input += synapse0x1fc6f50();
   input += synapse0x1fc6f90();
   input += synapse0x1fc6fd0();
   input += synapse0x1fc7010();
   input += synapse0x1fc7050();
   input += synapse0x1fc7090();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fc6700() {
   double input = input0x1fc6700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fc70d0() {
   double input = -0.648289;
   input += synapse0x1fc7410();
   input += synapse0x1fc7450();
   input += synapse0x1fc7490();
   input += synapse0x1fc74d0();
   input += synapse0x1fc7510();
   input += synapse0x1fc7550();
   input += synapse0x1fc7590();
   input += synapse0x1fc75d0();
   input += synapse0x1fc7610();
   input += synapse0x1fc7650();
   input += synapse0x1fc7690();
   input += synapse0x1fc76d0();
   input += synapse0x1fc7710();
   input += synapse0x1fc7750();
   input += synapse0x1fc7790();
   input += synapse0x1fc77d0();
   input += synapse0x1fc7260();
   input += synapse0x1fc72a0();
   input += synapse0x1fc7920();
   input += synapse0x1fc7960();
   input += synapse0x1fc79a0();
   input += synapse0x1fc79e0();
   input += synapse0x1fc7a20();
   input += synapse0x1fc7a60();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fc70d0() {
   double input = input0x1fc70d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fc7aa0() {
   double input = -1.75174;
   input += synapse0x1fc7de0();
   input += synapse0x1fc7e20();
   input += synapse0x1fc7e60();
   input += synapse0x1fc7ea0();
   input += synapse0x1fc7ee0();
   input += synapse0x1fc7f20();
   input += synapse0x1fc7f60();
   input += synapse0x1fc7fa0();
   input += synapse0x1fc7fe0();
   input += synapse0x1fc8020();
   input += synapse0x1fc8060();
   input += synapse0x1fc80a0();
   input += synapse0x1fc80e0();
   input += synapse0x1fc8120();
   input += synapse0x1fc8160();
   input += synapse0x1fc81a0();
   input += synapse0x1fc7c30();
   input += synapse0x1fc7c70();
   input += synapse0x1fc82f0();
   input += synapse0x1fc8330();
   input += synapse0x1fc8370();
   input += synapse0x1fc83b0();
   input += synapse0x1fc83f0();
   input += synapse0x1fc8430();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fc7aa0() {
   double input = input0x1fc7aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fc8470() {
   double input = -0.224288;
   input += synapse0x1fc87b0();
   input += synapse0x1fc87f0();
   input += synapse0x1fc8830();
   input += synapse0x1fc8870();
   input += synapse0x1fc88b0();
   input += synapse0x1fc88f0();
   input += synapse0x1fc8930();
   input += synapse0x1fc8970();
   input += synapse0x1fc89b0();
   input += synapse0x1fc89f0();
   input += synapse0x1fc8a30();
   input += synapse0x1fc8a70();
   input += synapse0x1fc8ab0();
   input += synapse0x1fc8af0();
   input += synapse0x1fc8b30();
   input += synapse0x1fc8b70();
   input += synapse0x1fc8600();
   input += synapse0x1fc8640();
   input += synapse0x1fc8cc0();
   input += synapse0x1fc8d00();
   input += synapse0x1fc8d40();
   input += synapse0x1fc8d80();
   input += synapse0x1fc8dc0();
   input += synapse0x1fc8e00();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fc8470() {
   double input = input0x1fc8470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fc8e40() {
   double input = -1.44325;
   input += synapse0x1fc9180();
   input += synapse0x1fc91c0();
   input += synapse0x1fc9200();
   input += synapse0x1fc9240();
   input += synapse0x1fc9280();
   input += synapse0x1fc92c0();
   input += synapse0x1fc9300();
   input += synapse0x1fc9340();
   input += synapse0x1fc9380();
   input += synapse0x1fc1540();
   input += synapse0x1fc1580();
   input += synapse0x1fc15c0();
   input += synapse0x1fc1600();
   input += synapse0x1fc1640();
   input += synapse0x1fc1680();
   input += synapse0x1fc16c0();
   input += synapse0x1fc8fd0();
   input += synapse0x1fc9010();
   input += synapse0x1fc1810();
   input += synapse0x1fc1850();
   input += synapse0x1fc1890();
   input += synapse0x1fc18d0();
   input += synapse0x1fc1910();
   input += synapse0x1fc1950();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fc8e40() {
   double input = input0x1fc8e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fc1990() {
   double input = 2.68114;
   input += synapse0x1fc1cd0();
   input += synapse0x1fc1d10();
   input += synapse0x1fc1d50();
   input += synapse0x1fc1d90();
   input += synapse0x1fc1dd0();
   input += synapse0x1fc1e10();
   input += synapse0x1fc1e50();
   input += synapse0x1fc1e90();
   input += synapse0x1fc1ed0();
   input += synapse0x1fc1f10();
   input += synapse0x1fc1f50();
   input += synapse0x1fc1f90();
   input += synapse0x1fc1fd0();
   input += synapse0x1fc2010();
   input += synapse0x1fc2050();
   input += synapse0x1fc2090();
   input += synapse0x1fc1b20();
   input += synapse0x1fc1b60();
   input += synapse0x1fc21e0();
   input += synapse0x1fc2220();
   input += synapse0x1fc2260();
   input += synapse0x1fc22a0();
   input += synapse0x1fc22e0();
   input += synapse0x1fc2320();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fc1990() {
   double input = input0x1fc1990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fc2360() {
   double input = 0.473914;
   input += synapse0x1fc24f0();
   input += synapse0x1fcb580();
   input += synapse0x1fcb5c0();
   input += synapse0x1fcb600();
   input += synapse0x1fcb640();
   input += synapse0x1fcb680();
   input += synapse0x1fcb6c0();
   input += synapse0x1fcb700();
   input += synapse0x1fcb740();
   input += synapse0x1fcb780();
   input += synapse0x1fcb7c0();
   input += synapse0x1fcb800();
   input += synapse0x1fcb840();
   input += synapse0x1fcb880();
   input += synapse0x1fcb8c0();
   input += synapse0x1fcb900();
   input += synapse0x1fcb3d0();
   input += synapse0x1fcb410();
   input += synapse0x1fcba50();
   input += synapse0x1fcba90();
   input += synapse0x1fcbad0();
   input += synapse0x1fcbb10();
   input += synapse0x1fcbb50();
   input += synapse0x1fcbb90();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fc2360() {
   double input = input0x1fc2360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fcbbd0() {
   double input = 0.0650948;
   input += synapse0x1fcbf10();
   input += synapse0x1fcbf50();
   input += synapse0x1fcbf90();
   input += synapse0x1fcbfd0();
   input += synapse0x1fcc010();
   input += synapse0x1fcc050();
   input += synapse0x1fcc090();
   input += synapse0x1fcc0d0();
   input += synapse0x1fcc110();
   input += synapse0x1fcc150();
   input += synapse0x1fcc190();
   input += synapse0x1fcc1d0();
   input += synapse0x1fcc210();
   input += synapse0x1fcc250();
   input += synapse0x1fcc290();
   input += synapse0x1fcc2d0();
   input += synapse0x1fcbd60();
   input += synapse0x1fcbda0();
   input += synapse0x1fcc420();
   input += synapse0x1fcc460();
   input += synapse0x1fcc4a0();
   input += synapse0x1fcc4e0();
   input += synapse0x1fcc520();
   input += synapse0x1fcc560();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fcbbd0() {
   double input = input0x1fcbbd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fcc5a0() {
   double input = 0.636416;
   input += synapse0x1fcc8e0();
   input += synapse0x1fcc920();
   input += synapse0x1fcc960();
   input += synapse0x1fcc9a0();
   input += synapse0x1fcc9e0();
   input += synapse0x1fcca20();
   input += synapse0x1fcca60();
   input += synapse0x1fccaa0();
   input += synapse0x1fccae0();
   input += synapse0x1fccb20();
   input += synapse0x1fccb60();
   input += synapse0x1fccba0();
   input += synapse0x1fccbe0();
   input += synapse0x1fccc20();
   input += synapse0x1fccc60();
   input += synapse0x1fccca0();
   input += synapse0x1fcc730();
   input += synapse0x1fcc770();
   input += synapse0x1fccdf0();
   input += synapse0x1fcce30();
   input += synapse0x1fcce70();
   input += synapse0x1fcceb0();
   input += synapse0x1fccef0();
   input += synapse0x1fccf30();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fcc5a0() {
   double input = input0x1fcc5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fccf70() {
   double input = -0.412322;
   input += synapse0x1fcd2b0();
   input += synapse0x1fcd2f0();
   input += synapse0x1fcd330();
   input += synapse0x1fcd370();
   input += synapse0x1fcd3b0();
   input += synapse0x1fcd3f0();
   input += synapse0x1fcd430();
   input += synapse0x1fcd470();
   input += synapse0x1fcd4b0();
   input += synapse0x1fcd4f0();
   input += synapse0x1fcd530();
   input += synapse0x1fcd570();
   input += synapse0x1fcd5b0();
   input += synapse0x1fcd5f0();
   input += synapse0x1fcd630();
   input += synapse0x1fcd670();
   input += synapse0x1fcd100();
   input += synapse0x1fcd140();
   input += synapse0x1fcd7c0();
   input += synapse0x1fcd800();
   input += synapse0x1fcd840();
   input += synapse0x1fcd880();
   input += synapse0x1fcd8c0();
   input += synapse0x1fcd900();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fccf70() {
   double input = input0x1fccf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fcd940() {
   double input = 0.419613;
   input += synapse0x1fcdc80();
   input += synapse0x1fcdcc0();
   input += synapse0x1fcdd00();
   input += synapse0x1fcdd40();
   input += synapse0x1fcdd80();
   input += synapse0x1fcddc0();
   input += synapse0x1fcde00();
   input += synapse0x1fcde40();
   input += synapse0x1fcde80();
   input += synapse0x1fcdec0();
   input += synapse0x1fcdf00();
   input += synapse0x1fcdf40();
   input += synapse0x1fcdf80();
   input += synapse0x1fcdfc0();
   input += synapse0x1fce000();
   input += synapse0x1fce040();
   input += synapse0x1fcdad0();
   input += synapse0x1fcdb10();
   input += synapse0x1fce190();
   input += synapse0x1fce1d0();
   input += synapse0x1fce210();
   input += synapse0x1fce250();
   input += synapse0x1fce290();
   input += synapse0x1fce2d0();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fcd940() {
   double input = input0x1fcd940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fce310() {
   double input = 0.262352;
   input += synapse0x1fce650();
   input += synapse0x1fce690();
   input += synapse0x1fce6d0();
   input += synapse0x1fce710();
   input += synapse0x1fce750();
   input += synapse0x1fce790();
   input += synapse0x1fce7d0();
   input += synapse0x1fce810();
   input += synapse0x1fce850();
   input += synapse0x1fce890();
   input += synapse0x1fce8d0();
   input += synapse0x1fce910();
   input += synapse0x1fce950();
   input += synapse0x1fce990();
   input += synapse0x1fce9d0();
   input += synapse0x1fcea10();
   input += synapse0x1fce4a0();
   input += synapse0x1fce4e0();
   input += synapse0x1fceb60();
   input += synapse0x1fceba0();
   input += synapse0x1fcebe0();
   input += synapse0x1fcec20();
   input += synapse0x1fcec60();
   input += synapse0x1fceca0();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fce310() {
   double input = input0x1fce310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fcece0() {
   double input = -0.403679;
   input += synapse0x1fcf020();
   input += synapse0x1fcf060();
   input += synapse0x1fcf0a0();
   input += synapse0x1fcf0e0();
   input += synapse0x1fcf120();
   input += synapse0x1fcf160();
   input += synapse0x1fcf1a0();
   input += synapse0x1fcf1e0();
   input += synapse0x1fcf220();
   input += synapse0x1fcf260();
   input += synapse0x1fcf2a0();
   input += synapse0x1fcf2e0();
   input += synapse0x1fcf320();
   input += synapse0x1fcf360();
   input += synapse0x1fcf3a0();
   input += synapse0x1fcf3e0();
   input += synapse0x1fcee70();
   input += synapse0x1fceeb0();
   input += synapse0x1fcf530();
   input += synapse0x1fcf570();
   input += synapse0x1fcf5b0();
   input += synapse0x1fcf5f0();
   input += synapse0x1fcf630();
   input += synapse0x1fcf670();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fcece0() {
   double input = input0x1fcece0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fcf6b0() {
   double input = 0.332095;
   input += synapse0x1fcf9f0();
   input += synapse0x1fcfa30();
   input += synapse0x1fcfa70();
   input += synapse0x1fcfab0();
   input += synapse0x1fcfaf0();
   input += synapse0x1fcfb30();
   input += synapse0x1fcfb70();
   input += synapse0x1fcfbb0();
   input += synapse0x1fcfbf0();
   input += synapse0x1fcfc30();
   input += synapse0x1fcfc70();
   input += synapse0x1fcfcb0();
   input += synapse0x1fcfcf0();
   input += synapse0x1fcfd30();
   input += synapse0x1fcfd70();
   input += synapse0x1fcfdb0();
   input += synapse0x1fcf840();
   input += synapse0x1fcf880();
   input += synapse0x1fcff00();
   input += synapse0x1fcff40();
   input += synapse0x1fcff80();
   input += synapse0x1fcffc0();
   input += synapse0x1fd0000();
   input += synapse0x1fd0040();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fcf6b0() {
   double input = input0x1fcf6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fd0080() {
   double input = -2.17605;
   input += synapse0x1fd03c0();
   input += synapse0x1fc4990();
   input += synapse0x1fc49d0();
   input += synapse0x1fc4a10();
   input += synapse0x1fc4c60();
   input += synapse0x1fc4ca0();
   input += synapse0x1fc4ce0();
   input += synapse0x1fc4f30();
   input += synapse0x1fc4f70();
   input += synapse0x1fc51c0();
   input += synapse0x1fc5200();
   input += synapse0x1fc5240();
   input += synapse0x1fc5490();
   input += synapse0x1fc54d0();
   input += synapse0x1fc5720();
   input += synapse0x1fc5760();
   input += synapse0x1fd0210();
   input += synapse0x1fd0250();
   input += synapse0x1fc58b0();
   input += synapse0x1fc5dc0();
   input += synapse0x1fc5e00();
   input += synapse0x1fc5e40();
   input += synapse0x1fc6090();
   input += synapse0x1fc60d0();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fd0080() {
   double input = input0x1fd0080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fc6110() {
   double input = 3.34238;
   input += synapse0x1fc5980();
   input += synapse0x1fc59c0();
   input += synapse0x1fc5a00();
   input += synapse0x1fc5a40();
   input += synapse0x1fc63c0();
   input += synapse0x1fd2710();
   input += synapse0x1fd2750();
   input += synapse0x1fd2790();
   input += synapse0x1fd27d0();
   input += synapse0x1fd2810();
   input += synapse0x1fd2850();
   input += synapse0x1fd2890();
   input += synapse0x1fd28d0();
   input += synapse0x1fd2910();
   input += synapse0x1fd2950();
   input += synapse0x1fd2990();
   input += synapse0x1fc62a0();
   input += synapse0x1fc62e0();
   input += synapse0x1fd2ae0();
   input += synapse0x1fd2b20();
   input += synapse0x1fd2b60();
   input += synapse0x1fd2ba0();
   input += synapse0x1fd2be0();
   input += synapse0x1fd2c20();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fc6110() {
   double input = input0x1fc6110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fd2c60() {
   double input = -3.14121;
   input += synapse0x1fd2fa0();
   input += synapse0x1fd2fe0();
   input += synapse0x1fd3020();
   input += synapse0x1fd3060();
   input += synapse0x1fd30a0();
   input += synapse0x1fd30e0();
   input += synapse0x1fd3120();
   input += synapse0x1fd3160();
   input += synapse0x1fd31a0();
   input += synapse0x1fd31e0();
   input += synapse0x1fd3220();
   input += synapse0x1fd3260();
   input += synapse0x1fd32a0();
   input += synapse0x1fd32e0();
   input += synapse0x1fd3320();
   input += synapse0x1fd3360();
   input += synapse0x1fd2df0();
   input += synapse0x1fd2e30();
   input += synapse0x1fd34b0();
   input += synapse0x1fd34f0();
   input += synapse0x1fd3530();
   input += synapse0x1fd3570();
   input += synapse0x1fd35b0();
   input += synapse0x1fd35f0();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fd2c60() {
   double input = input0x1fd2c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fd3630() {
   double input = -0.0607746;
   input += synapse0x1fd3970();
   input += synapse0x1fd39b0();
   input += synapse0x1fd39f0();
   input += synapse0x1fd3a30();
   input += synapse0x1fd3a70();
   input += synapse0x1fd3ab0();
   input += synapse0x1fd3af0();
   input += synapse0x1fd3b30();
   input += synapse0x1fd3b70();
   input += synapse0x1fd3bb0();
   input += synapse0x1fd3bf0();
   input += synapse0x1fd3c30();
   input += synapse0x1fd3c70();
   input += synapse0x1fd3cb0();
   input += synapse0x1fd3cf0();
   input += synapse0x1fd3d30();
   input += synapse0x1fd37c0();
   input += synapse0x1fd3800();
   input += synapse0x1fd3e80();
   input += synapse0x1fd3ec0();
   input += synapse0x1fd3f00();
   input += synapse0x1fd3f40();
   input += synapse0x1fd3f80();
   input += synapse0x1fd3fc0();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fd3630() {
   double input = input0x1fd3630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fd4000() {
   double input = 0.325316;
   input += synapse0x1fd4340();
   input += synapse0x1fd4380();
   input += synapse0x1fd43c0();
   input += synapse0x1fd4400();
   input += synapse0x1fd4440();
   input += synapse0x1fd4480();
   input += synapse0x1fd44c0();
   input += synapse0x1fd4500();
   input += synapse0x1fd4540();
   input += synapse0x1fd4580();
   input += synapse0x1fd45c0();
   input += synapse0x1fd4600();
   input += synapse0x1fd4640();
   input += synapse0x1fd4680();
   input += synapse0x1fd46c0();
   input += synapse0x1fd4700();
   input += synapse0x1fd4190();
   input += synapse0x1fd41d0();
   input += synapse0x1fd4850();
   input += synapse0x1fd4890();
   input += synapse0x1fd48d0();
   input += synapse0x1fd4910();
   input += synapse0x1fd4950();
   input += synapse0x1fd4990();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fd4000() {
   double input = input0x1fd4000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fd49d0() {
   double input = 0.93798;
   input += synapse0x1fd4d10();
   input += synapse0x1fd4d50();
   input += synapse0x1fd4d90();
   input += synapse0x1fd4dd0();
   input += synapse0x1fd4e10();
   input += synapse0x1fd4e50();
   input += synapse0x1fd4e90();
   input += synapse0x1fd4ed0();
   input += synapse0x1fd4f10();
   input += synapse0x1fd4f50();
   input += synapse0x1fd4f90();
   input += synapse0x1fd4fd0();
   input += synapse0x1fd5010();
   input += synapse0x1fd5050();
   input += synapse0x1fd5090();
   input += synapse0x1fd50d0();
   input += synapse0x1fd4b60();
   input += synapse0x1fd4ba0();
   input += synapse0x1fd5220();
   input += synapse0x1fd5260();
   input += synapse0x1fd52a0();
   input += synapse0x1fd52e0();
   input += synapse0x1fd5320();
   input += synapse0x1fd5360();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fd49d0() {
   double input = input0x1fd49d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fd53a0() {
   double input = -1.29905;
   input += synapse0x1fd56e0();
   input += synapse0x1fd5720();
   input += synapse0x1fd5760();
   input += synapse0x1fd57a0();
   input += synapse0x1fd57e0();
   input += synapse0x1fd5820();
   input += synapse0x1fd5860();
   input += synapse0x1fd58a0();
   input += synapse0x1fd58e0();
   input += synapse0x1fd5920();
   input += synapse0x1fd5960();
   input += synapse0x1fd59a0();
   input += synapse0x1fd59e0();
   input += synapse0x1fd5a20();
   input += synapse0x1fd5a60();
   input += synapse0x1fd5aa0();
   input += synapse0x1fd5530();
   input += synapse0x1fd5570();
   input += synapse0x1fd5bf0();
   input += synapse0x1fd5c30();
   input += synapse0x1fd5c70();
   input += synapse0x1fd5cb0();
   input += synapse0x1fd5cf0();
   input += synapse0x1fd5d30();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fd53a0() {
   double input = input0x1fd53a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fd5d70() {
   double input = 0.54295;
   input += synapse0x1fd60b0();
   input += synapse0x1fd60f0();
   input += synapse0x1fd6130();
   input += synapse0x1fd6170();
   input += synapse0x1fd61b0();
   input += synapse0x1fd61f0();
   input += synapse0x1fd6230();
   input += synapse0x1fd6270();
   input += synapse0x1fd62b0();
   input += synapse0x1fd62f0();
   input += synapse0x1fd6330();
   input += synapse0x1fd6370();
   input += synapse0x1fd63b0();
   input += synapse0x1fd63f0();
   input += synapse0x1fd6430();
   input += synapse0x1fd6470();
   input += synapse0x1fd5f00();
   input += synapse0x1fd5f40();
   input += synapse0x1fd65c0();
   input += synapse0x1fd6600();
   input += synapse0x1fd6640();
   input += synapse0x1fd6680();
   input += synapse0x1fd66c0();
   input += synapse0x1fd6700();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fd5d70() {
   double input = input0x1fd5d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fd6740() {
   double input = -1.20171;
   input += synapse0x1fd6a80();
   input += synapse0x1fd6ac0();
   input += synapse0x1fd6b00();
   input += synapse0x1fd6b40();
   input += synapse0x1fd6b80();
   input += synapse0x1fd6bc0();
   input += synapse0x1fd6c00();
   input += synapse0x1fd6c40();
   input += synapse0x1fd6c80();
   input += synapse0x1fd6cc0();
   input += synapse0x1fd6d00();
   input += synapse0x1fd6d40();
   input += synapse0x1fd6d80();
   input += synapse0x1fd6dc0();
   input += synapse0x1fd6e00();
   input += synapse0x1fd6e40();
   input += synapse0x1fd68d0();
   input += synapse0x1fd6910();
   input += synapse0x1fd6f90();
   input += synapse0x1fd6fd0();
   input += synapse0x1fd7010();
   input += synapse0x1fd7050();
   input += synapse0x1fd7090();
   input += synapse0x1fd70d0();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fd6740() {
   double input = input0x1fd6740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fd7110() {
   double input = -0.681252;
   input += synapse0x1fbfb80();
   input += synapse0x1fbfbc0();
   input += synapse0x1fbfc00();
   input += synapse0x1fbfc40();
   input += synapse0x1fbfc80();
   input += synapse0x1fbfcc0();
   input += synapse0x1fbfd00();
   input += synapse0x1fbfd40();
   input += synapse0x1fd7860();
   input += synapse0x1fd78a0();
   input += synapse0x1fd78e0();
   input += synapse0x1fd7920();
   input += synapse0x1fd7960();
   input += synapse0x1fd79a0();
   input += synapse0x1fd79e0();
   input += synapse0x1fd7a20();
   input += synapse0x1fd72a0();
   input += synapse0x1fd72e0();
   input += synapse0x1fd7b70();
   input += synapse0x1fd7bb0();
   input += synapse0x1fd7bf0();
   input += synapse0x1fd7c30();
   input += synapse0x1fd7c70();
   input += synapse0x1fd7cb0();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fd7110() {
   double input = input0x1fd7110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fd7cf0() {
   double input = 0.945179;
   input += synapse0x1fd8030();
   input += synapse0x1fd8070();
   input += synapse0x1fd80b0();
   input += synapse0x1fd80f0();
   input += synapse0x1fd8130();
   input += synapse0x1fd8170();
   input += synapse0x1fd81b0();
   input += synapse0x1fd81f0();
   input += synapse0x1fd8230();
   input += synapse0x1fd8270();
   input += synapse0x1fd82b0();
   input += synapse0x1fd82f0();
   input += synapse0x1fd8330();
   input += synapse0x1fd8370();
   input += synapse0x1fd83b0();
   input += synapse0x1fd83f0();
   input += synapse0x1fd7e80();
   input += synapse0x1fd7ec0();
   input += synapse0x1fd8540();
   input += synapse0x1fd8580();
   input += synapse0x1fd85c0();
   input += synapse0x1fd8600();
   input += synapse0x1fd8640();
   input += synapse0x1fd8680();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fd7cf0() {
   double input = input0x1fd7cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fd86c0() {
   double input = -0.439649;
   input += synapse0x1fd8a00();
   input += synapse0x1fd8a40();
   input += synapse0x1fd8a80();
   input += synapse0x1fd8ac0();
   input += synapse0x1fd8b00();
   input += synapse0x1fd8b40();
   input += synapse0x1fd8b80();
   input += synapse0x1fd8bc0();
   input += synapse0x1fd8c00();
   input += synapse0x1fd8c40();
   input += synapse0x1fd8c80();
   input += synapse0x1fd8cc0();
   input += synapse0x1fd8d00();
   input += synapse0x1fd8d40();
   input += synapse0x1fd8d80();
   input += synapse0x1fd8dc0();
   input += synapse0x1fd8850();
   input += synapse0x1fd8890();
   input += synapse0x1fc93c0();
   input += synapse0x1fc9400();
   input += synapse0x1fc9440();
   input += synapse0x1fc9480();
   input += synapse0x1fc94c0();
   input += synapse0x1fc9500();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fd86c0() {
   double input = input0x1fd86c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fc9540() {
   double input = -1.47367;
   input += synapse0x1fc9880();
   input += synapse0x1fc98c0();
   input += synapse0x1fc9900();
   input += synapse0x1fc9940();
   input += synapse0x1fc9980();
   input += synapse0x1fc99c0();
   input += synapse0x1fc9a00();
   input += synapse0x1fc9a40();
   input += synapse0x1fc9a80();
   input += synapse0x1fc9ac0();
   input += synapse0x1fc9b00();
   input += synapse0x1fc9b40();
   input += synapse0x1fc9b80();
   input += synapse0x1fc9bc0();
   input += synapse0x1fc9c00();
   input += synapse0x1fc9c40();
   input += synapse0x1fc96d0();
   input += synapse0x1fc9710();
   input += synapse0x1fc9d90();
   input += synapse0x1fc9dd0();
   input += synapse0x1fc9e10();
   input += synapse0x1fc9e50();
   input += synapse0x1fc9e90();
   input += synapse0x1fc9ed0();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fc9540() {
   double input = input0x1fc9540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fc9f10() {
   double input = 0.0741845;
   input += synapse0x1fca250();
   input += synapse0x1fca290();
   input += synapse0x1fca2d0();
   input += synapse0x1fca310();
   input += synapse0x1fca350();
   input += synapse0x1fca390();
   input += synapse0x1fca3d0();
   input += synapse0x1fca410();
   input += synapse0x1fca450();
   input += synapse0x1fca490();
   input += synapse0x1fca4d0();
   input += synapse0x1fca510();
   input += synapse0x1fca550();
   input += synapse0x1fca590();
   input += synapse0x1fca5d0();
   input += synapse0x1fca610();
   input += synapse0x1fca0a0();
   input += synapse0x1fca0e0();
   input += synapse0x1fca760();
   input += synapse0x1fca7a0();
   input += synapse0x1fca7e0();
   input += synapse0x1fca820();
   input += synapse0x1fca860();
   input += synapse0x1fca8a0();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fc9f10() {
   double input = input0x1fc9f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fca8e0() {
   double input = -0.325296;
   input += synapse0x1fcac20();
   input += synapse0x1fcac60();
   input += synapse0x1fcaca0();
   input += synapse0x1fcace0();
   input += synapse0x1fcad20();
   input += synapse0x1fcad60();
   input += synapse0x1fcada0();
   input += synapse0x1fcade0();
   input += synapse0x1fcae20();
   input += synapse0x1fcae60();
   input += synapse0x1fcaea0();
   input += synapse0x1fcaee0();
   input += synapse0x1fcaf20();
   input += synapse0x1fcaf60();
   input += synapse0x1fcafa0();
   input += synapse0x1fcafe0();
   input += synapse0x1fcaa70();
   input += synapse0x1fcaab0();
   input += synapse0x1fcb130();
   input += synapse0x1fcb170();
   input += synapse0x1fcb1b0();
   input += synapse0x1fcb1f0();
   input += synapse0x1fcb230();
   input += synapse0x1fcb270();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fca8e0() {
   double input = input0x1fca8e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fdcf20() {
   double input = 2.59402;
   input += synapse0x1fdd140();
   input += synapse0x1fdd180();
   input += synapse0x1fdd1c0();
   input += synapse0x1fdd200();
   input += synapse0x1fdd240();
   input += synapse0x1fdd280();
   input += synapse0x1fdd2c0();
   input += synapse0x1fdd300();
   input += synapse0x1fdd340();
   input += synapse0x1fdd380();
   input += synapse0x1fdd3c0();
   input += synapse0x1fdd400();
   input += synapse0x1fdd440();
   input += synapse0x1fdd480();
   input += synapse0x1fdd4c0();
   input += synapse0x1fdd500();
   input += synapse0x1fcb2b0();
   input += synapse0x1fcb2f0();
   input += synapse0x1fdd650();
   input += synapse0x1fdd690();
   input += synapse0x1fdd6d0();
   input += synapse0x1fdd710();
   input += synapse0x1fdd750();
   input += synapse0x1fdd790();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fdcf20() {
   double input = input0x1fdcf20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fdd7d0() {
   double input = -3.4204;
   input += synapse0x1fddb10();
   input += synapse0x1fddb50();
   input += synapse0x1fddb90();
   input += synapse0x1fddbd0();
   input += synapse0x1fddc10();
   input += synapse0x1fddc50();
   input += synapse0x1fddc90();
   input += synapse0x1fddcd0();
   input += synapse0x1fddd10();
   input += synapse0x1fddd50();
   input += synapse0x1fddd90();
   input += synapse0x1fdddd0();
   input += synapse0x1fdde10();
   input += synapse0x1fdde50();
   input += synapse0x1fdde90();
   input += synapse0x1fdded0();
   input += synapse0x1fdd960();
   input += synapse0x1fdd9a0();
   input += synapse0x1fde020();
   input += synapse0x1fde060();
   input += synapse0x1fde0a0();
   input += synapse0x1fde0e0();
   input += synapse0x1fde120();
   input += synapse0x1fde160();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fdd7d0() {
   double input = input0x1fdd7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fde1a0() {
   double input = -0.00843892;
   input += synapse0x1fde4e0();
   input += synapse0x1fde520();
   input += synapse0x1fde560();
   input += synapse0x1fde5a0();
   input += synapse0x1fde5e0();
   input += synapse0x1fde620();
   input += synapse0x1fde660();
   input += synapse0x1fde6a0();
   input += synapse0x1fde6e0();
   input += synapse0x1fde720();
   input += synapse0x1fde760();
   input += synapse0x1fde7a0();
   input += synapse0x1fde7e0();
   input += synapse0x1fde820();
   input += synapse0x1fde860();
   input += synapse0x1fde8a0();
   input += synapse0x1fde330();
   input += synapse0x1fde370();
   input += synapse0x1fde9f0();
   input += synapse0x1fdea30();
   input += synapse0x1fdea70();
   input += synapse0x1fdeab0();
   input += synapse0x1fdeaf0();
   input += synapse0x1fdeb30();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fde1a0() {
   double input = input0x1fde1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fdeb70() {
   double input = -0.0131601;
   input += synapse0x1fdeeb0();
   input += synapse0x1fdeef0();
   input += synapse0x1fdef30();
   input += synapse0x1fdef70();
   input += synapse0x1fdefb0();
   input += synapse0x1fdeff0();
   input += synapse0x1fdf030();
   input += synapse0x1fdf070();
   input += synapse0x1fdf0b0();
   input += synapse0x1fdf0f0();
   input += synapse0x1fdf130();
   input += synapse0x1fdf170();
   input += synapse0x1fdf1b0();
   input += synapse0x1fdf1f0();
   input += synapse0x1fdf230();
   input += synapse0x1fdf270();
   input += synapse0x1fded00();
   input += synapse0x1fded40();
   input += synapse0x1fdf3c0();
   input += synapse0x1fdf400();
   input += synapse0x1fdf440();
   input += synapse0x1fdf480();
   input += synapse0x1fdf4c0();
   input += synapse0x1fdf500();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fdeb70() {
   double input = input0x1fdeb70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fe5d70() {
   double input = -1.01519;
   input += synapse0x1d7f370();
   input += synapse0x1d7f3b0();
   input += synapse0x1fbbeb0();
   input += synapse0x1fbbef0();
   input += synapse0x1fbd980();
   input += synapse0x1fbd9c0();
   input += synapse0x1fbe750();
   input += synapse0x1fbe790();
   input += synapse0x1fbf120();
   input += synapse0x1fbf160();
   input += synapse0x1fbfaf0();
   input += synapse0x1fbfb30();
   input += synapse0x1fc05d0();
   input += synapse0x1fc0610();
   input += synapse0x1fc0fa0();
   input += synapse0x1fc0fe0();
   input += synapse0x1fbe080();
   input += synapse0x1fbe0c0();
   input += synapse0x1fc2b50();
   input += synapse0x1fc2b90();
   input += synapse0x1fc3520();
   input += synapse0x1fc3560();
   input += synapse0x1fc3ef0();
   input += synapse0x1fc3f30();
   input += synapse0x1fc48c0();
   input += synapse0x1fc4900();
   input += synapse0x1fb7950();
   input += synapse0x1fb7990();
   input += synapse0x1fc69b0();
   input += synapse0x1fc69f0();
   input += synapse0x1fc7380();
   input += synapse0x1fc73c0();
   input += synapse0x1fc7d50();
   input += synapse0x1fc7d90();
   input += synapse0x1fc8720();
   input += synapse0x1fc8760();
   input += synapse0x1fc90f0();
   input += synapse0x1fc9130();
   input += synapse0x1fc1c40();
   input += synapse0x1fc1c80();
   input += synapse0x1fcb4f0();
   input += synapse0x1fcb530();
   input += synapse0x1fcbe80();
   input += synapse0x1fcbec0();
   input += synapse0x1fcc850();
   input += synapse0x1fcc890();
   input += synapse0x1fcd220();
   input += synapse0x1fcd260();
   input += synapse0x1fcdbf0();
   input += synapse0x1fcdc30();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fe5d70() {
   double input = input0x1fe5d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fe6110() {
   double input = -0.437535;
   input += synapse0x1fd0330();
   input += synapse0x1fd0370();
   input += synapse0x1fc58f0();
   input += synapse0x1fc5930();
   input += synapse0x1fd2f10();
   input += synapse0x1fd2f50();
   input += synapse0x1fd38e0();
   input += synapse0x1fd3920();
   input += synapse0x1fd42b0();
   input += synapse0x1fd42f0();
   input += synapse0x1fd4c80();
   input += synapse0x1fd4cc0();
   input += synapse0x1fd5650();
   input += synapse0x1fd5690();
   input += synapse0x1fd6020();
   input += synapse0x1fd6060();
   input += synapse0x1fd69f0();
   input += synapse0x1fd6a30();
   input += synapse0x1fd73c0();
   input += synapse0x1fd7400();
   input += synapse0x1fd7fa0();
   input += synapse0x1fd7fe0();
   input += synapse0x1fd8970();
   input += synapse0x1fd89b0();
   input += synapse0x1fc97f0();
   input += synapse0x1fc9830();
   input += synapse0x1fca1c0();
   input += synapse0x1fca200();
   input += synapse0x1fcab90();
   input += synapse0x1fcabd0();
   input += synapse0x1fdd0b0();
   input += synapse0x1fdd0f0();
   input += synapse0x1fdda80();
   input += synapse0x1fddac0();
   input += synapse0x1fde450();
   input += synapse0x1fde490();
   input += synapse0x1fdee20();
   input += synapse0x1fdee60();
   input += synapse0x1fb9db0();
   input += synapse0x1fb9df0();
   input += synapse0x1fce5c0();
   input += synapse0x1fce600();
   input += synapse0x1fdf540();
   input += synapse0x1fdf580();
   input += synapse0x1fdf5c0();
   input += synapse0x1fdf600();
   input += synapse0x1fe64b0();
   input += synapse0x1fe64f0();
   input += synapse0x1fe6530();
   input += synapse0x1fe6570();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fe6110() {
   double input = input0x1fe6110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fe65b0() {
   double input = -0.314304;
   input += synapse0x1fe68f0();
   input += synapse0x1fe6930();
   input += synapse0x1fe6970();
   input += synapse0x1fe69b0();
   input += synapse0x1fe69f0();
   input += synapse0x1fe6a30();
   input += synapse0x1fe6a70();
   input += synapse0x1fe6ab0();
   input += synapse0x1fe6af0();
   input += synapse0x1fe6b30();
   input += synapse0x1fe6b70();
   input += synapse0x1fe6bb0();
   input += synapse0x1fe6bf0();
   input += synapse0x1fe6c30();
   input += synapse0x1fe6c70();
   input += synapse0x1fe6cb0();
   input += synapse0x1fe6740();
   input += synapse0x1fe6780();
   input += synapse0x1fe6e00();
   input += synapse0x1fe6e40();
   input += synapse0x1fe6e80();
   input += synapse0x1fe6ec0();
   input += synapse0x1fe6f00();
   input += synapse0x1fe6f40();
   input += synapse0x1fe6f80();
   input += synapse0x1fe6fc0();
   input += synapse0x1fe7000();
   input += synapse0x1fe7040();
   input += synapse0x1fe7080();
   input += synapse0x1fe70c0();
   input += synapse0x1fe7100();
   input += synapse0x1fe7140();
   input += synapse0x1fe6cf0();
   input += synapse0x1fe6d30();
   input += synapse0x1fe6d70();
   input += synapse0x1fe6db0();
   input += synapse0x1fe7390();
   input += synapse0x1fe73d0();
   input += synapse0x1fe7410();
   input += synapse0x1fe7450();
   input += synapse0x1fe7490();
   input += synapse0x1fe74d0();
   input += synapse0x1fe7510();
   input += synapse0x1fe7550();
   input += synapse0x1fe7590();
   input += synapse0x1fe75d0();
   input += synapse0x1fe7610();
   input += synapse0x1fe7650();
   input += synapse0x1fe7690();
   input += synapse0x1fe76d0();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fe65b0() {
   double input = input0x1fe65b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fe7710() {
   double input = -1.9778;
   input += synapse0x1fe7a50();
   input += synapse0x1fe7a90();
   input += synapse0x1fe7ad0();
   input += synapse0x1fe7b10();
   input += synapse0x1fe7b50();
   input += synapse0x1fe7b90();
   input += synapse0x1fe7bd0();
   input += synapse0x1fe7c10();
   input += synapse0x1fe7c50();
   input += synapse0x1fe7c90();
   input += synapse0x1fe7cd0();
   input += synapse0x1fe7d10();
   input += synapse0x1fe7d50();
   input += synapse0x1fe7d90();
   input += synapse0x1fe7dd0();
   input += synapse0x1fe7e10();
   input += synapse0x1fe78a0();
   input += synapse0x1fe78e0();
   input += synapse0x1fe7f60();
   input += synapse0x1fe7fa0();
   input += synapse0x1fe7fe0();
   input += synapse0x1fe8020();
   input += synapse0x1fe8060();
   input += synapse0x1fe80a0();
   input += synapse0x1fe80e0();
   input += synapse0x1fe8120();
   input += synapse0x1fe8160();
   input += synapse0x1fe81a0();
   input += synapse0x1fe81e0();
   input += synapse0x1fe8220();
   input += synapse0x1fe8260();
   input += synapse0x1fe82a0();
   input += synapse0x1fe7e50();
   input += synapse0x1fe7e90();
   input += synapse0x1fe7ed0();
   input += synapse0x1fe7f10();
   input += synapse0x1fe84f0();
   input += synapse0x1fe8530();
   input += synapse0x1fe8570();
   input += synapse0x1fe85b0();
   input += synapse0x1fe85f0();
   input += synapse0x1fe8630();
   input += synapse0x1fe8670();
   input += synapse0x1fe86b0();
   input += synapse0x1fe86f0();
   input += synapse0x1fe8730();
   input += synapse0x1fe8770();
   input += synapse0x1fe87b0();
   input += synapse0x1fe87f0();
   input += synapse0x1fe8830();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fe7710() {
   double input = input0x1fe7710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fe8870() {
   double input = -0.848776;
   input += synapse0x1fe8bb0();
   input += synapse0x1fe8bf0();
   input += synapse0x1fe8c30();
   input += synapse0x1fe8c70();
   input += synapse0x1fe8cb0();
   input += synapse0x1fe8cf0();
   input += synapse0x1fe8d30();
   input += synapse0x1fe8d70();
   input += synapse0x1fe8db0();
   input += synapse0x1fe8df0();
   input += synapse0x1fe8e30();
   input += synapse0x1fe8e70();
   input += synapse0x1fe8eb0();
   input += synapse0x1fe8ef0();
   input += synapse0x1fe8f30();
   input += synapse0x1fe8f70();
   input += synapse0x1fe8a00();
   input += synapse0x1fe8a40();
   input += synapse0x1fe90c0();
   input += synapse0x1fe9100();
   input += synapse0x1fe9140();
   input += synapse0x1fe9180();
   input += synapse0x1fe91c0();
   input += synapse0x1fe9200();
   input += synapse0x1fe9240();
   input += synapse0x1fe9280();
   input += synapse0x1fe92c0();
   input += synapse0x1fe9300();
   input += synapse0x1fe9340();
   input += synapse0x1fe9380();
   input += synapse0x1fe93c0();
   input += synapse0x1fe9400();
   input += synapse0x1fe8fb0();
   input += synapse0x1fe8ff0();
   input += synapse0x1fe9030();
   input += synapse0x1fe9070();
   input += synapse0x1fe9650();
   input += synapse0x1fe9690();
   input += synapse0x1fe96d0();
   input += synapse0x1fe9710();
   input += synapse0x1fe9750();
   input += synapse0x1fe9790();
   input += synapse0x1fe97d0();
   input += synapse0x1fe9810();
   input += synapse0x1fe9850();
   input += synapse0x1fe9890();
   input += synapse0x1fe98d0();
   input += synapse0x1fe9910();
   input += synapse0x1fe9950();
   input += synapse0x1fe9990();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fe8870() {
   double input = input0x1fe8870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::input0x1fe99d0() {
   double input = 9.00239;
   input += synapse0x1fe9bf0();
   input += synapse0x1fe9c30();
   input += synapse0x1fe9c70();
   input += synapse0x1fe9cb0();
   input += synapse0x1fe9cf0();
   return input;
}

double NNfunction_ns_chiPlus1_sL::neuron0x1fe99d0() {
   double input = input0x1fe99d0();
   return (input * 1)+0;
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb9e40() {
   return (neuron0x1fb4a40()*0.186167);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb9e80() {
   return (neuron0x1fb4cf0()*-0.614182);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb9ec0() {
   return (neuron0x1fb5030()*-0.593634);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb9f00() {
   return (neuron0x1fb5370()*-0.175705);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb9f40() {
   return (neuron0x1fb56b0()*1.45721);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb9f80() {
   return (neuron0x1fb59f0()*-0.691732);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb9fc0() {
   return (neuron0x1fb5d30()*-0.285768);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba000() {
   return (neuron0x1fb6070()*-0.229585);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba040() {
   return (neuron0x1fb63b0()*0.830162);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba080() {
   return (neuron0x1fb66f0()*-0.344457);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba0c0() {
   return (neuron0x1fb6a30()*0.253813);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba100() {
   return (neuron0x1fb6d70()*0.370133);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba140() {
   return (neuron0x1fb70b0()*-0.701892);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba180() {
   return (neuron0x1fb73f0()*0.369635);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba1c0() {
   return (neuron0x1fb7730()*-0.569069);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba200() {
   return (neuron0x1fb7a70()*-0.0192474);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb9c90() {
   return (neuron0x1fb7db0()*-0.189987);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb9cd0() {
   return (neuron0x1fb8310()*-0.487852);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d70bc0() {
   return (neuron0x1fb8650()*0.530408);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d70c00() {
   return (neuron0x1fb8990()*0.177253);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba240() {
   return (neuron0x1fb8cd0()*0.715287);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba280() {
   return (neuron0x1fb9010()*-0.851489);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba2c0() {
   return (neuron0x1fb9350()*-0.36159);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba300() {
   return (neuron0x1fb9690()*0.169116);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba680() {
   return (neuron0x1fb4a40()*-0.0252617);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba6c0() {
   return (neuron0x1fb4cf0()*0.018762);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba700() {
   return (neuron0x1fb5030()*0.0147909);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba740() {
   return (neuron0x1fb5370()*2.78999);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba780() {
   return (neuron0x1fb56b0()*0.0211748);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba7c0() {
   return (neuron0x1fb59f0()*-0.0205325);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba800() {
   return (neuron0x1fb5d30()*0.00738641);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba840() {
   return (neuron0x1fb6070()*-0.00318916);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba880() {
   return (neuron0x1fb63b0()*0.0196653);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d70a10() {
   return (neuron0x1fb66f0()*-0.0132372);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d70a50() {
   return (neuron0x1fb6a30()*-0.0124565);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d70a90() {
   return (neuron0x1fb6d70()*-0.000480681);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d70ad0() {
   return (neuron0x1fb70b0()*0.508371);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbaad0() {
   return (neuron0x1fb73f0()*-0.00423462);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbab10() {
   return (neuron0x1fb7730()*0.0149973);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbab50() {
   return (neuron0x1fb7a70()*0.00189843);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba4d0() {
   return (neuron0x1fb7db0()*-0.00760332);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fba510() {
   return (neuron0x1fb8310()*0.0149778);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbaca0() {
   return (neuron0x1fb8650()*-0.011215);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbace0() {
   return (neuron0x1fb8990()*-0.00461073);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbad20() {
   return (neuron0x1fb8cd0()*0.014055);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbad60() {
   return (neuron0x1fb9010()*-0.00416901);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbada0() {
   return (neuron0x1fb9350()*0.013976);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbade0() {
   return (neuron0x1fb9690()*0.00516886);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb160() {
   return (neuron0x1fb4a40()*0.0587021);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb1a0() {
   return (neuron0x1fb4cf0()*-0.0758325);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb1e0() {
   return (neuron0x1fb5030()*0.231136);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb220() {
   return (neuron0x1fb5370()*-0.150589);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb260() {
   return (neuron0x1fb56b0()*0.0134929);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb2a0() {
   return (neuron0x1fb59f0()*0.177225);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb2e0() {
   return (neuron0x1fb5d30()*0.235405);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb320() {
   return (neuron0x1fb6070()*-0.182728);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb360() {
   return (neuron0x1fb63b0()*0.0817937);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb3a0() {
   return (neuron0x1fb66f0()*-0.126146);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb3e0() {
   return (neuron0x1fb6a30()*0.0286476);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb420() {
   return (neuron0x1fb6d70()*-0.112954);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb460() {
   return (neuron0x1fb70b0()*0.115362);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb4a0() {
   return (neuron0x1fb73f0()*-0.11798);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb4e0() {
   return (neuron0x1fb7730()*-0.081778);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb520() {
   return (neuron0x1fb7a70()*0.00745314);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbafb0() {
   return (neuron0x1fb7db0()*0.0836644);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbaff0() {
   return (neuron0x1fb8310()*0.0468561);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d712b0() {
   return (neuron0x1fb8650()*-0.0765743);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d7eb80() {
   return (neuron0x1fb8990()*-0.0371641);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d7ebc0() {
   return (neuron0x1fb8cd0()*0.00699066);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbd450() {
   return (neuron0x1fb9010()*0.0495627);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbd490() {
   return (neuron0x1fb9350()*-0.131772);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb4780() {
   return (neuron0x1fb9690()*0.075403);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb4850() {
   return (neuron0x1fb4a40()*-0.00486128);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d7f400() {
   return (neuron0x1fb4cf0()*-0.00137949);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbaa50() {
   return (neuron0x1fb5030()*-0.107837);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbaa90() {
   return (neuron0x1fb5370()*-0.0250118);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb670() {
   return (neuron0x1fb56b0()*0.0233023);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb6b0() {
   return (neuron0x1fb59f0()*-0.000326588);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb6f0() {
   return (neuron0x1fb5d30()*-0.0142724);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb730() {
   return (neuron0x1fb6070()*-0.00697967);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb770() {
   return (neuron0x1fb63b0()*0.0506236);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb7b0() {
   return (neuron0x1fb66f0()*0.00585539);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb7f0() {
   return (neuron0x1fb6a30()*-0.00127248);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb830() {
   return (neuron0x1fb6d70()*-0.0264376);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb870() {
   return (neuron0x1fb70b0()*-2.2715);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb8b0() {
   return (neuron0x1fb73f0()*-0.0220963);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb8f0() {
   return (neuron0x1fb7730()*-0.00463311);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbb930() {
   return (neuron0x1fb7a70()*0.0421791);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb47c0() {
   return (neuron0x1fb7db0()*0.0192852);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb4800() {
   return (neuron0x1fb8310()*0.00806855);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbba80() {
   return (neuron0x1fb8650()*-0.011065);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbbac0() {
   return (neuron0x1fb8990()*-0.0256118);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbbb00() {
   return (neuron0x1fb8cd0()*0.0127499);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbbb40() {
   return (neuron0x1fb9010()*-0.00101521);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbbb80() {
   return (neuron0x1fb9350()*0.00569459);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbbbc0() {
   return (neuron0x1fb9690()*-0.00631446);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbbf40() {
   return (neuron0x1fb4a40()*0.785588);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbbf80() {
   return (neuron0x1fb4cf0()*-0.0296794);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbbfc0() {
   return (neuron0x1fb5030()*3.90527);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbc000() {
   return (neuron0x1fb5370()*0.0530563);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbc040() {
   return (neuron0x1fb56b0()*0.131062);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbc080() {
   return (neuron0x1fb59f0()*-0.0494587);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbc0c0() {
   return (neuron0x1fb5d30()*-0.0421705);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbc100() {
   return (neuron0x1fb6070()*0.0352021);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbc140() {
   return (neuron0x1fb63b0()*-0.0180522);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbc180() {
   return (neuron0x1fb66f0()*0.0450169);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbc1c0() {
   return (neuron0x1fb6a30()*-0.00155647);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbc200() {
   return (neuron0x1fb6d70()*-0.0304753);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbc240() {
   return (neuron0x1fb70b0()*0.309194);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbc280() {
   return (neuron0x1fb73f0()*0.00950042);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbc2c0() {
   return (neuron0x1fb7730()*0.0117361);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbc300() {
   return (neuron0x1fb7a70()*0.0234761);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbc450() {
   return (neuron0x1fb7db0()*-0.156829);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbbd90() {
   return (neuron0x1fb8310()*-0.0564614);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbbdd0() {
   return (neuron0x1fb8650()*-0.0264323);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbd590() {
   return (neuron0x1fb8990()*0.00652806);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbd5d0() {
   return (neuron0x1fb8cd0()*-0.0227559);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbd610() {
   return (neuron0x1fb9010()*-0.0311128);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbd650() {
   return (neuron0x1fb9350()*0.00752512);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbd690() {
   return (neuron0x1fb9690()*-0.0593384);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbda10() {
   return (neuron0x1fb4a40()*0.401677);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbda50() {
   return (neuron0x1fb4cf0()*0.815323);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbda90() {
   return (neuron0x1fb5030()*-0.12279);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbdad0() {
   return (neuron0x1fb5370()*-0.390965);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbdb10() {
   return (neuron0x1fb56b0()*-0.834115);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbdb50() {
   return (neuron0x1fb59f0()*0.41467);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbdb90() {
   return (neuron0x1fb5d30()*0.0804953);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbdbd0() {
   return (neuron0x1fb6070()*0.235639);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbdc10() {
   return (neuron0x1fb63b0()*0.282014);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d7eed0() {
   return (neuron0x1fb66f0()*-0.549266);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d7ef10() {
   return (neuron0x1fb6a30()*0.916301);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d7ef50() {
   return (neuron0x1fb6d70()*-0.648394);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d7ef90() {
   return (neuron0x1fb70b0()*-0.607766);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d7efd0() {
   return (neuron0x1fb73f0()*-0.607073);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d7f010() {
   return (neuron0x1fb7730()*-0.258291);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d7f050() {
   return (neuron0x1fb7a70()*-0.149299);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbd860() {
   return (neuron0x1fb7db0()*0.349893);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbd8a0() {
   return (neuron0x1fb8310()*0.114195);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d7f1a0() {
   return (neuron0x1fb8650()*-0.0371781);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d7f1e0() {
   return (neuron0x1fb8990()*0.807512);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d7f220() {
   return (neuron0x1fb8cd0()*0.468182);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d7f260() {
   return (neuron0x1fb9010()*0.764318);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d7f2a0() {
   return (neuron0x1fb9350()*-0.0810855);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe460() {
   return (neuron0x1fb9690()*-0.162739);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe7e0() {
   return (neuron0x1fb4a40()*0.0734556);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe820() {
   return (neuron0x1fb4cf0()*0.00980681);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe860() {
   return (neuron0x1fb5030()*0.372772);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe8a0() {
   return (neuron0x1fb5370()*-0.112759);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe8e0() {
   return (neuron0x1fb56b0()*-0.104789);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe920() {
   return (neuron0x1fb59f0()*0.169782);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe960() {
   return (neuron0x1fb5d30()*-0.00553672);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe9a0() {
   return (neuron0x1fb6070()*-0.0825264);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe9e0() {
   return (neuron0x1fb63b0()*-0.0355921);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbea20() {
   return (neuron0x1fb66f0()*-0.0348693);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbea60() {
   return (neuron0x1fb6a30()*0.253133);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbeaa0() {
   return (neuron0x1fb6d70()*-0.117128);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbeae0() {
   return (neuron0x1fb70b0()*-0.181509);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbeb20() {
   return (neuron0x1fb73f0()*-0.116114);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbeb60() {
   return (neuron0x1fb7730()*-0.107418);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbeba0() {
   return (neuron0x1fb7a70()*-0.0473098);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe630() {
   return (neuron0x1fb7db0()*0.00258838);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe670() {
   return (neuron0x1fb8310()*-0.0350484);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbecf0() {
   return (neuron0x1fb8650()*-0.0410352);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbed30() {
   return (neuron0x1fb8990()*-0.290482);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbed70() {
   return (neuron0x1fb8cd0()*0.0512853);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbedb0() {
   return (neuron0x1fb9010()*0.0454541);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbedf0() {
   return (neuron0x1fb9350()*0.0494554);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbee30() {
   return (neuron0x1fb9690()*0.232016);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf1b0() {
   return (neuron0x1fb4a40()*-0.0385783);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf1f0() {
   return (neuron0x1fb4cf0()*0.0243507);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf230() {
   return (neuron0x1fb5030()*-2.24928);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf270() {
   return (neuron0x1fb5370()*0.00754664);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf2b0() {
   return (neuron0x1fb56b0()*-0.0231197);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf2f0() {
   return (neuron0x1fb59f0()*0.00116764);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf330() {
   return (neuron0x1fb5d30()*-0.0009548);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf370() {
   return (neuron0x1fb6070()*0.00416613);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf3b0() {
   return (neuron0x1fb63b0()*0.00723388);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf3f0() {
   return (neuron0x1fb66f0()*0.0100728);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf430() {
   return (neuron0x1fb6a30()*0.00681419);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf470() {
   return (neuron0x1fb6d70()*0.00554883);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf4b0() {
   return (neuron0x1fb70b0()*0.129785);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf4f0() {
   return (neuron0x1fb73f0()*-0.0121702);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf530() {
   return (neuron0x1fb7730()*0.00559468);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf570() {
   return (neuron0x1fb7a70()*-0.0220979);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf000() {
   return (neuron0x1fb7db0()*0.0120314);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf040() {
   return (neuron0x1fb8310()*-0.00116699);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf6c0() {
   return (neuron0x1fb8650()*-0.00966892);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf700() {
   return (neuron0x1fb8990()*0.0106948);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf740() {
   return (neuron0x1fb8cd0()*-0.00639463);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf780() {
   return (neuron0x1fb9010()*0.00383059);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf7c0() {
   return (neuron0x1fb9350()*-0.0206084);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf800() {
   return (neuron0x1fb9690()*10.2736);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb8200() {
   return (neuron0x1fb4a40()*0.62477);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb8240() {
   return (neuron0x1fb4cf0()*-0.0611442);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb8280() {
   return (neuron0x1fb5030()*0.364139);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb82c0() {
   return (neuron0x1fb5370()*0.05303);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbfd90() {
   return (neuron0x1fb56b0()*0.108388);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbfdd0() {
   return (neuron0x1fb59f0()*0.00477245);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbfe10() {
   return (neuron0x1fb5d30()*-0.105011);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbfe50() {
   return (neuron0x1fb6070()*-0.0600238);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbfe90() {
   return (neuron0x1fb63b0()*-0.0287921);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbfed0() {
   return (neuron0x1fb66f0()*-0.0530712);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbff10() {
   return (neuron0x1fb6a30()*-0.0694357);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbff50() {
   return (neuron0x1fb6d70()*-0.113664);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbff90() {
   return (neuron0x1fb70b0()*-1.33274);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbffd0() {
   return (neuron0x1fb73f0()*0.0193204);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0010() {
   return (neuron0x1fb7730()*0.0157071);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0050() {
   return (neuron0x1fb7a70()*0.104752);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf9d0() {
   return (neuron0x1fb7db0()*0.184862);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbfa10() {
   return (neuron0x1fb8310()*0.15762);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc01a0() {
   return (neuron0x1fb8650()*0.00387418);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc01e0() {
   return (neuron0x1fb8990()*-0.175197);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0220() {
   return (neuron0x1fb8cd0()*0.0818703);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0260() {
   return (neuron0x1fb9010()*-0.0284064);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc02a0() {
   return (neuron0x1fb9350()*0.0693018);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc02e0() {
   return (neuron0x1fb9690()*0.166236);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0660() {
   return (neuron0x1fb4a40()*0.00326532);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc06a0() {
   return (neuron0x1fb4cf0()*0.391101);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc06e0() {
   return (neuron0x1fb5030()*0.0571209);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0720() {
   return (neuron0x1fb5370()*-0.00448205);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0760() {
   return (neuron0x1fb56b0()*-0.113103);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc07a0() {
   return (neuron0x1fb59f0()*0.16468);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc07e0() {
   return (neuron0x1fb5d30()*-0.000118973);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0820() {
   return (neuron0x1fb6070()*0.22921);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0860() {
   return (neuron0x1fb63b0()*-0.103199);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc08a0() {
   return (neuron0x1fb66f0()*0.0131308);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc08e0() {
   return (neuron0x1fb6a30()*-0.0632607);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0920() {
   return (neuron0x1fb6d70()*-0.0706562);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0960() {
   return (neuron0x1fb70b0()*0.756419);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc09a0() {
   return (neuron0x1fb73f0()*0.209515);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc09e0() {
   return (neuron0x1fb7730()*-0.0592177);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0a20() {
   return (neuron0x1fb7a70()*-0.063397);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc04b0() {
   return (neuron0x1fb7db0()*0.0795072);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc04f0() {
   return (neuron0x1fb8310()*-0.20384);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0b70() {
   return (neuron0x1fb8650()*0.0930382);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0bb0() {
   return (neuron0x1fb8990()*-0.208408);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0bf0() {
   return (neuron0x1fb8cd0()*0.113511);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0c30() {
   return (neuron0x1fb9010()*-0.0172175);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0c70() {
   return (neuron0x1fb9350()*0.0314635);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0cb0() {
   return (neuron0x1fb9690()*0.0489383);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1030() {
   return (neuron0x1fb4a40()*-0.140993);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1070() {
   return (neuron0x1fb4cf0()*-0.0552919);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc10b0() {
   return (neuron0x1fb5030()*0.0662384);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc10f0() {
   return (neuron0x1fb5370()*-0.144147);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1130() {
   return (neuron0x1fb56b0()*0.0495609);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1170() {
   return (neuron0x1fb59f0()*0.0203937);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc11b0() {
   return (neuron0x1fb5d30()*0.0187929);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc11f0() {
   return (neuron0x1fb6070()*0.00898901);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1230() {
   return (neuron0x1fb63b0()*0.26359);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1270() {
   return (neuron0x1fb66f0()*-0.0143523);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc12b0() {
   return (neuron0x1fb6a30()*0.140813);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc12f0() {
   return (neuron0x1fb6d70()*-0.022834);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1330() {
   return (neuron0x1fb70b0()*1.40543);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1370() {
   return (neuron0x1fb73f0()*-0.0840665);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc13b0() {
   return (neuron0x1fb7730()*-0.0493033);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc13f0() {
   return (neuron0x1fb7a70()*-0.0445243);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0e80() {
   return (neuron0x1fb7db0()*-0.0437721);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0ec0() {
   return (neuron0x1fb8310()*-0.0464598);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbdc50() {
   return (neuron0x1fb8650()*-0.0189031);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbdc90() {
   return (neuron0x1fb8990()*-0.0419656);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbdcd0() {
   return (neuron0x1fb8cd0()*0.0131852);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbdd10() {
   return (neuron0x1fb9010()*-0.0309546);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbdd50() {
   return (neuron0x1fb9350()*-0.0452772);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbdd90() {
   return (neuron0x1fb9690()*-0.0627976);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe110() {
   return (neuron0x1fb4a40()*0.230417);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe150() {
   return (neuron0x1fb4cf0()*-0.0915158);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe190() {
   return (neuron0x1fb5030()*1.03544);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe1d0() {
   return (neuron0x1fb5370()*0.400104);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe210() {
   return (neuron0x1fb56b0()*0.611064);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe250() {
   return (neuron0x1fb59f0()*0.274174);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe290() {
   return (neuron0x1fb5d30()*0.714874);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe2d0() {
   return (neuron0x1fb6070()*0.57744);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe310() {
   return (neuron0x1fb63b0()*0.294691);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe350() {
   return (neuron0x1fb66f0()*-0.432376);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe390() {
   return (neuron0x1fb6a30()*0.509496);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe3d0() {
   return (neuron0x1fb6d70()*0.267694);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe410() {
   return (neuron0x1fb70b0()*-0.311133);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2550() {
   return (neuron0x1fb73f0()*0.181803);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2590() {
   return (neuron0x1fb7730()*-0.115595);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc25d0() {
   return (neuron0x1fb7a70()*-0.314581);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbdf60() {
   return (neuron0x1fb7db0()*-0.403922);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbdfa0() {
   return (neuron0x1fb8310()*-0.311572);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2720() {
   return (neuron0x1fb8650()*0.0153797);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2760() {
   return (neuron0x1fb8990()*0.844016);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc27a0() {
   return (neuron0x1fb8cd0()*0.282373);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc27e0() {
   return (neuron0x1fb9010()*-0.293961);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2820() {
   return (neuron0x1fb9350()*-0.00196222);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2860() {
   return (neuron0x1fb9690()*-0.0243446);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2be0() {
   return (neuron0x1fb4a40()*0.0600679);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2c20() {
   return (neuron0x1fb4cf0()*0.0102731);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2c60() {
   return (neuron0x1fb5030()*-0.0196903);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2ca0() {
   return (neuron0x1fb5370()*2.59662);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2ce0() {
   return (neuron0x1fb56b0()*-0.00459557);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2d20() {
   return (neuron0x1fb59f0()*0.00805129);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2d60() {
   return (neuron0x1fb5d30()*0.0304756);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2da0() {
   return (neuron0x1fb6070()*0.00860512);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2de0() {
   return (neuron0x1fb63b0()*0.00206567);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2e20() {
   return (neuron0x1fb66f0()*-0.00419009);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2e60() {
   return (neuron0x1fb6a30()*0.0180226);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2ea0() {
   return (neuron0x1fb6d70()*-0.0221926);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2ee0() {
   return (neuron0x1fb70b0()*-0.622523);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2f20() {
   return (neuron0x1fb73f0()*0.0140557);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2f60() {
   return (neuron0x1fb7730()*0.0148952);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2fa0() {
   return (neuron0x1fb7a70()*0.025034);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2a30() {
   return (neuron0x1fb7db0()*0.0175295);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2a70() {
   return (neuron0x1fb8310()*-0.0154795);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc30f0() {
   return (neuron0x1fb8650()*-0.0436058);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3130() {
   return (neuron0x1fb8990()*-0.00274026);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3170() {
   return (neuron0x1fb8cd0()*-0.0138144);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc31b0() {
   return (neuron0x1fb9010()*0.000595964);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc31f0() {
   return (neuron0x1fb9350()*-0.0305975);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3230() {
   return (neuron0x1fb9690()*-0.0325608);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc35b0() {
   return (neuron0x1fb4a40()*0.0508889);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc35f0() {
   return (neuron0x1fb4cf0()*0.0245941);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3630() {
   return (neuron0x1fb5030()*2.03405);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3670() {
   return (neuron0x1fb5370()*-0.00764151);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc36b0() {
   return (neuron0x1fb56b0()*-0.0212885);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc36f0() {
   return (neuron0x1fb59f0()*-0.0144153);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3730() {
   return (neuron0x1fb5d30()*0.0100072);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3770() {
   return (neuron0x1fb6070()*-0.00712226);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc37b0() {
   return (neuron0x1fb63b0()*-0.0376516);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc37f0() {
   return (neuron0x1fb66f0()*0.0258877);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3830() {
   return (neuron0x1fb6a30()*0.0233976);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3870() {
   return (neuron0x1fb6d70()*-0.00476558);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc38b0() {
   return (neuron0x1fb70b0()*0.500139);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc38f0() {
   return (neuron0x1fb73f0()*-0.0119268);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3930() {
   return (neuron0x1fb7730()*0.0120575);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3970() {
   return (neuron0x1fb7a70()*-0.0214838);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3400() {
   return (neuron0x1fb7db0()*-0.0171073);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3440() {
   return (neuron0x1fb8310()*-0.0152255);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3ac0() {
   return (neuron0x1fb8650()*-0.0192713);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3b00() {
   return (neuron0x1fb8990()*0.0173342);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3b40() {
   return (neuron0x1fb8cd0()*-0.0239194);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3b80() {
   return (neuron0x1fb9010()*0.0190631);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3bc0() {
   return (neuron0x1fb9350()*-0.00784894);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3c00() {
   return (neuron0x1fb9690()*-0.0223694);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3f80() {
   return (neuron0x1fb4a40()*0.1923);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3fc0() {
   return (neuron0x1fb4cf0()*0.368845);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4000() {
   return (neuron0x1fb5030()*-0.163423);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4040() {
   return (neuron0x1fb5370()*-0.19551);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4080() {
   return (neuron0x1fb56b0()*-0.191676);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc40c0() {
   return (neuron0x1fb59f0()*0.469651);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4100() {
   return (neuron0x1fb5d30()*0.326106);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4140() {
   return (neuron0x1fb6070()*-0.305889);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4180() {
   return (neuron0x1fb63b0()*0.0262542);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc41c0() {
   return (neuron0x1fb66f0()*0.0545841);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4200() {
   return (neuron0x1fb6a30()*0.350653);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4240() {
   return (neuron0x1fb6d70()*-0.702402);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4280() {
   return (neuron0x1fb70b0()*0.525645);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc42c0() {
   return (neuron0x1fb73f0()*-1.58459);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4300() {
   return (neuron0x1fb7730()*-0.115456);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4340() {
   return (neuron0x1fb7a70()*0.159363);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3dd0() {
   return (neuron0x1fb7db0()*-0.0569477);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3e10() {
   return (neuron0x1fb8310()*0.146194);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4490() {
   return (neuron0x1fb8650()*0.173791);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc44d0() {
   return (neuron0x1fb8990()*0.991993);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4510() {
   return (neuron0x1fb8cd0()*0.695513);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4550() {
   return (neuron0x1fb9010()*0.79452);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4590() {
   return (neuron0x1fb9350()*-0.136741);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc45d0() {
   return (neuron0x1fb9690()*-0.272997);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4950() {
   return (neuron0x1fb4a40()*-0.127814);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb4bd0() {
   return (neuron0x1fb4cf0()*0.466392);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb4c10() {
   return (neuron0x1fb5030()*0.369509);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb4f10() {
   return (neuron0x1fb5370()*0.905335);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb4f50() {
   return (neuron0x1fb56b0()*0.975811);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb5250() {
   return (neuron0x1fb59f0()*-0.0516998);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb5290() {
   return (neuron0x1fb5d30()*-0.443543);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb5590() {
   return (neuron0x1fb6070()*-0.352345);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb55d0() {
   return (neuron0x1fb63b0()*-0.220167);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb58d0() {
   return (neuron0x1fb66f0()*-0.519989);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb5910() {
   return (neuron0x1fb6a30()*-0.458017);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb5c10() {
   return (neuron0x1fb6d70()*-0.712837);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb5c50() {
   return (neuron0x1fb70b0()*0.868417);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb5f50() {
   return (neuron0x1fb73f0()*0.104205);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb5f90() {
   return (neuron0x1fb7730()*-0.132685);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb6290() {
   return (neuron0x1fb7a70()*0.535331);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb62d0() {
   return (neuron0x1fb7db0()*0.382389);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb65d0() {
   return (neuron0x1fb8310()*0.0104461);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb6610() {
   return (neuron0x1fb8650()*-0.56862);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb6910() {
   return (neuron0x1fb8990()*0.114758);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb6950() {
   return (neuron0x1fb8cd0()*-0.331556);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb6c50() {
   return (neuron0x1fb9010()*-0.180587);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb6c90() {
   return (neuron0x1fb9350()*0.27391);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb6f90() {
   return (neuron0x1fb9690()*-0.160349);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb6fd0() {
   return (neuron0x1fb4a40()*-5.59788);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb7c90() {
   return (neuron0x1fb4cf0()*0.043697);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb7cd0() {
   return (neuron0x1fb5030()*-0.116853);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc47a0() {
   return (neuron0x1fb5370()*0.0531672);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc47e0() {
   return (neuron0x1fb56b0()*-0.0752396);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb7fd0() {
   return (neuron0x1fb59f0()*-0.0109569);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb8010() {
   return (neuron0x1fb5d30()*0.0400863);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb8530() {
   return (neuron0x1fb6070()*0.0021704);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb8570() {
   return (neuron0x1fb63b0()*-0.0129446);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb8870() {
   return (neuron0x1fb66f0()*0.0073575);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb88b0() {
   return (neuron0x1fb6a30()*-0.00513565);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb8bb0() {
   return (neuron0x1fb6d70()*0.019184);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb8bf0() {
   return (neuron0x1fb70b0()*-0.448103);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb8ef0() {
   return (neuron0x1fb73f0()*0.00475833);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb8f30() {
   return (neuron0x1fb7730()*-9.13117e-05);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb9230() {
   return (neuron0x1fb7a70()*-0.0183267);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb9270() {
   return (neuron0x1fb7db0()*-0.0346279);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb9570() {
   return (neuron0x1fb8310()*0.0220564);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb95b0() {
   return (neuron0x1fb8650()*0.0314222);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb98b0() {
   return (neuron0x1fb8990()*0.028);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb98f0() {
   return (neuron0x1fb8cd0()*-0.0699965);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb72d0() {
   return (neuron0x1fb9010()*0.00506335);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb7310() {
   return (neuron0x1fb9350()*0.00380879);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc66c0() {
   return (neuron0x1fb9690()*-0.0246703);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc6a40() {
   return (neuron0x1fb4a40()*0.189522);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc6a80() {
   return (neuron0x1fb4cf0()*0.160916);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc6ac0() {
   return (neuron0x1fb5030()*-0.674179);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc6b00() {
   return (neuron0x1fb5370()*0.196925);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc6b40() {
   return (neuron0x1fb56b0()*-0.194864);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc6b80() {
   return (neuron0x1fb59f0()*0.130383);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc6bc0() {
   return (neuron0x1fb5d30()*-0.108214);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc6c00() {
   return (neuron0x1fb6070()*-0.0809381);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc6c40() {
   return (neuron0x1fb63b0()*-0.0596472);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc6c80() {
   return (neuron0x1fb66f0()*-0.188772);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc6cc0() {
   return (neuron0x1fb6a30()*0.255714);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc6d00() {
   return (neuron0x1fb6d70()*0.0854092);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc6d40() {
   return (neuron0x1fb70b0()*-0.64293);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc6d80() {
   return (neuron0x1fb73f0()*0.291244);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc6dc0() {
   return (neuron0x1fb7730()*-0.139923);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc6e00() {
   return (neuron0x1fb7a70()*0.056345);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc6890() {
   return (neuron0x1fb7db0()*0.136017);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc68d0() {
   return (neuron0x1fb8310()*0.347801);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc6f50() {
   return (neuron0x1fb8650()*0.116298);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc6f90() {
   return (neuron0x1fb8990()*0.0304887);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc6fd0() {
   return (neuron0x1fb8cd0()*0.0564587);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7010() {
   return (neuron0x1fb9010()*0.152299);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7050() {
   return (neuron0x1fb9350()*0.058183);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7090() {
   return (neuron0x1fb9690()*-0.306897);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7410() {
   return (neuron0x1fb4a40()*-0.000325882);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7450() {
   return (neuron0x1fb4cf0()*-0.00631894);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7490() {
   return (neuron0x1fb5030()*0.604382);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc74d0() {
   return (neuron0x1fb5370()*-0.109629);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7510() {
   return (neuron0x1fb56b0()*-0.00268257);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7550() {
   return (neuron0x1fb59f0()*0.00695022);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7590() {
   return (neuron0x1fb5d30()*0.022046);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc75d0() {
   return (neuron0x1fb6070()*0.0132608);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7610() {
   return (neuron0x1fb63b0()*-0.0568314);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7650() {
   return (neuron0x1fb66f0()*0.0290867);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7690() {
   return (neuron0x1fb6a30()*0.0232698);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc76d0() {
   return (neuron0x1fb6d70()*0.0203781);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7710() {
   return (neuron0x1fb70b0()*0.46185);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7750() {
   return (neuron0x1fb73f0()*0.0099992);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7790() {
   return (neuron0x1fb7730()*0.0206236);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc77d0() {
   return (neuron0x1fb7a70()*0.000851909);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7260() {
   return (neuron0x1fb7db0()*-0.0169493);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc72a0() {
   return (neuron0x1fb8310()*-0.0190405);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7920() {
   return (neuron0x1fb8650()*-0.00888204);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7960() {
   return (neuron0x1fb8990()*0.00917014);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc79a0() {
   return (neuron0x1fb8cd0()*0.000578383);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc79e0() {
   return (neuron0x1fb9010()*-0.000786276);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7a20() {
   return (neuron0x1fb9350()*-0.00478452);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7a60() {
   return (neuron0x1fb9690()*-0.0115971);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7de0() {
   return (neuron0x1fb4a40()*0.104281);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7e20() {
   return (neuron0x1fb4cf0()*0.0160998);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7e60() {
   return (neuron0x1fb5030()*0.201372);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7ea0() {
   return (neuron0x1fb5370()*-0.0176181);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7ee0() {
   return (neuron0x1fb56b0()*0.0298571);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7f20() {
   return (neuron0x1fb59f0()*-0.048034);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7f60() {
   return (neuron0x1fb5d30()*0.0647643);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7fa0() {
   return (neuron0x1fb6070()*0.0623757);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7fe0() {
   return (neuron0x1fb63b0()*0.00204235);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8020() {
   return (neuron0x1fb66f0()*-0.115185);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8060() {
   return (neuron0x1fb6a30()*-0.00120435);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc80a0() {
   return (neuron0x1fb6d70()*0.128305);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc80e0() {
   return (neuron0x1fb70b0()*0.113028);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8120() {
   return (neuron0x1fb73f0()*-0.225185);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8160() {
   return (neuron0x1fb7730()*0.15293);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc81a0() {
   return (neuron0x1fb7a70()*0.166267);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7c30() {
   return (neuron0x1fb7db0()*-0.356867);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7c70() {
   return (neuron0x1fb8310()*0.0409573);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc82f0() {
   return (neuron0x1fb8650()*0.0841508);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8330() {
   return (neuron0x1fb8990()*0.157656);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8370() {
   return (neuron0x1fb8cd0()*0.025638);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc83b0() {
   return (neuron0x1fb9010()*0.000645758);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc83f0() {
   return (neuron0x1fb9350()*-0.0140963);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8430() {
   return (neuron0x1fb9690()*-0.00644876);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc87b0() {
   return (neuron0x1fb4a40()*-0.702663);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc87f0() {
   return (neuron0x1fb4cf0()*-0.070058);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8830() {
   return (neuron0x1fb5030()*0.480788);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8870() {
   return (neuron0x1fb5370()*0.143588);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc88b0() {
   return (neuron0x1fb56b0()*0.346826);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc88f0() {
   return (neuron0x1fb59f0()*-0.182537);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8930() {
   return (neuron0x1fb5d30()*0.261414);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8970() {
   return (neuron0x1fb6070()*0.0879092);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc89b0() {
   return (neuron0x1fb63b0()*0.056294);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc89f0() {
   return (neuron0x1fb66f0()*0.302139);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8a30() {
   return (neuron0x1fb6a30()*-0.169069);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8a70() {
   return (neuron0x1fb6d70()*-0.235667);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8ab0() {
   return (neuron0x1fb70b0()*-0.149439);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8af0() {
   return (neuron0x1fb73f0()*-0.0611007);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8b30() {
   return (neuron0x1fb7730()*0.122455);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8b70() {
   return (neuron0x1fb7a70()*-0.15491);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8600() {
   return (neuron0x1fb7db0()*0.0346707);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8640() {
   return (neuron0x1fb8310()*-0.176518);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8cc0() {
   return (neuron0x1fb8650()*-0.246912);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8d00() {
   return (neuron0x1fb8990()*-0.227394);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8d40() {
   return (neuron0x1fb8cd0()*-0.0882996);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8d80() {
   return (neuron0x1fb9010()*-0.0991125);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8dc0() {
   return (neuron0x1fb9350()*-0.0950804);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8e00() {
   return (neuron0x1fb9690()*0.223304);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9180() {
   return (neuron0x1fb4a40()*-1.19655);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc91c0() {
   return (neuron0x1fb4cf0()*0.00278031);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9200() {
   return (neuron0x1fb5030()*0.867712);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9240() {
   return (neuron0x1fb5370()*-0.0279767);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9280() {
   return (neuron0x1fb56b0()*-0.0287749);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc92c0() {
   return (neuron0x1fb59f0()*0.026876);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9300() {
   return (neuron0x1fb5d30()*-0.0237048);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9340() {
   return (neuron0x1fb6070()*0.00551245);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9380() {
   return (neuron0x1fb63b0()*-0.00512712);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1540() {
   return (neuron0x1fb66f0()*0.00415868);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1580() {
   return (neuron0x1fb6a30()*0.0138909);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc15c0() {
   return (neuron0x1fb6d70()*0.0561843);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1600() {
   return (neuron0x1fb70b0()*0.397018);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1640() {
   return (neuron0x1fb73f0()*0.0604708);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1680() {
   return (neuron0x1fb7730()*-0.0444028);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc16c0() {
   return (neuron0x1fb7a70()*-0.00469974);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8fd0() {
   return (neuron0x1fb7db0()*0.0737465);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9010() {
   return (neuron0x1fb8310()*0.00201537);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1810() {
   return (neuron0x1fb8650()*0.00300486);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1850() {
   return (neuron0x1fb8990()*-0.0120582);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1890() {
   return (neuron0x1fb8cd0()*0.0156093);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc18d0() {
   return (neuron0x1fb9010()*-0.0265173);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1910() {
   return (neuron0x1fb9350()*-0.013403);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1950() {
   return (neuron0x1fb9690()*8.27367);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1cd0() {
   return (neuron0x1fb4a40()*1.88601);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1d10() {
   return (neuron0x1fb4cf0()*0.026809);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1d50() {
   return (neuron0x1fb5030()*-0.507766);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1d90() {
   return (neuron0x1fb5370()*0.150602);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1dd0() {
   return (neuron0x1fb56b0()*0.0428162);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1e10() {
   return (neuron0x1fb59f0()*0.0200209);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1e50() {
   return (neuron0x1fb5d30()*0.0281699);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1e90() {
   return (neuron0x1fb6070()*0.0218281);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1ed0() {
   return (neuron0x1fb63b0()*-0.00775772);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1f10() {
   return (neuron0x1fb66f0()*0.0170214);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1f50() {
   return (neuron0x1fb6a30()*0.0258279);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1f90() {
   return (neuron0x1fb6d70()*0.0512088);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1fd0() {
   return (neuron0x1fb70b0()*-1.30502);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2010() {
   return (neuron0x1fb73f0()*-0.0107718);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2050() {
   return (neuron0x1fb7730()*-0.00771815);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2090() {
   return (neuron0x1fb7a70()*-0.0327335);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1b20() {
   return (neuron0x1fb7db0()*0.031787);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1b60() {
   return (neuron0x1fb8310()*0.0334415);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc21e0() {
   return (neuron0x1fb8650()*0.0916687);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2220() {
   return (neuron0x1fb8990()*0.105154);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2260() {
   return (neuron0x1fb8cd0()*-0.0455297);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc22a0() {
   return (neuron0x1fb9010()*0.0224743);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc22e0() {
   return (neuron0x1fb9350()*-0.0257693);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2320() {
   return (neuron0x1fb9690()*0.038285);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc24f0() {
   return (neuron0x1fb4a40()*-0.0700574);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb580() {
   return (neuron0x1fb4cf0()*-0.0316304);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb5c0() {
   return (neuron0x1fb5030()*0.10586);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb600() {
   return (neuron0x1fb5370()*-0.0344608);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb640() {
   return (neuron0x1fb56b0()*0.0574859);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb680() {
   return (neuron0x1fb59f0()*0.0466456);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb6c0() {
   return (neuron0x1fb5d30()*-0.00747146);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb700() {
   return (neuron0x1fb6070()*0.041465);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb740() {
   return (neuron0x1fb63b0()*-0.159183);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb780() {
   return (neuron0x1fb66f0()*0.145108);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb7c0() {
   return (neuron0x1fb6a30()*0.124862);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb800() {
   return (neuron0x1fb6d70()*0.00858266);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb840() {
   return (neuron0x1fb70b0()*-0.740637);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb880() {
   return (neuron0x1fb73f0()*0.0439025);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb8c0() {
   return (neuron0x1fb7730()*0.000377642);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb900() {
   return (neuron0x1fb7a70()*0.00481132);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb3d0() {
   return (neuron0x1fb7db0()*-0.0125704);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb410() {
   return (neuron0x1fb8310()*-0.0707746);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcba50() {
   return (neuron0x1fb8650()*-0.0475536);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcba90() {
   return (neuron0x1fb8990()*-0.0211432);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcbad0() {
   return (neuron0x1fb8cd0()*0.000626256);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcbb10() {
   return (neuron0x1fb9010()*-0.0403579);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcbb50() {
   return (neuron0x1fb9350()*-0.0291525);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcbb90() {
   return (neuron0x1fb9690()*-0.0704282);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcbf10() {
   return (neuron0x1fb4a40()*-0.00371365);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcbf50() {
   return (neuron0x1fb4cf0()*-0.0308769);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcbf90() {
   return (neuron0x1fb5030()*-0.0345422);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcbfd0() {
   return (neuron0x1fb5370()*5.64407);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc010() {
   return (neuron0x1fb56b0()*-0.0111282);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc050() {
   return (neuron0x1fb59f0()*-0.00959751);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc090() {
   return (neuron0x1fb5d30()*-0.0167046);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc0d0() {
   return (neuron0x1fb6070()*-0.00400239);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc110() {
   return (neuron0x1fb63b0()*0.0258739);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc150() {
   return (neuron0x1fb66f0()*0.0357633);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc190() {
   return (neuron0x1fb6a30()*-0.00742245);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc1d0() {
   return (neuron0x1fb6d70()*0.0596297);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc210() {
   return (neuron0x1fb70b0()*0.230653);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc250() {
   return (neuron0x1fb73f0()*-0.0239866);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc290() {
   return (neuron0x1fb7730()*0.019611);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc2d0() {
   return (neuron0x1fb7a70()*0.0760446);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcbd60() {
   return (neuron0x1fb7db0()*0.0241477);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcbda0() {
   return (neuron0x1fb8310()*-0.0100177);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc420() {
   return (neuron0x1fb8650()*0.0177513);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc460() {
   return (neuron0x1fb8990()*0.0431189);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc4a0() {
   return (neuron0x1fb8cd0()*0.00717847);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc4e0() {
   return (neuron0x1fb9010()*-0.0347323);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc520() {
   return (neuron0x1fb9350()*-0.0219522);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc560() {
   return (neuron0x1fb9690()*0.001869);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc8e0() {
   return (neuron0x1fb4a40()*-0.0423118);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc920() {
   return (neuron0x1fb4cf0()*-0.0121438);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc960() {
   return (neuron0x1fb5030()*-0.525755);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc9a0() {
   return (neuron0x1fb5370()*-0.316741);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc9e0() {
   return (neuron0x1fb56b0()*-0.0295558);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcca20() {
   return (neuron0x1fb59f0()*-0.0453279);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcca60() {
   return (neuron0x1fb5d30()*-0.0633494);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fccaa0() {
   return (neuron0x1fb6070()*-0.0500843);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fccae0() {
   return (neuron0x1fb63b0()*-0.0137101);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fccb20() {
   return (neuron0x1fb66f0()*0.281224);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fccb60() {
   return (neuron0x1fb6a30()*0.04504);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fccba0() {
   return (neuron0x1fb6d70()*0.0324164);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fccbe0() {
   return (neuron0x1fb70b0()*-0.851149);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fccc20() {
   return (neuron0x1fb73f0()*0.0629017);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fccc60() {
   return (neuron0x1fb7730()*-0.0245762);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fccca0() {
   return (neuron0x1fb7a70()*0.0851853);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc730() {
   return (neuron0x1fb7db0()*0.0586007);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc770() {
   return (neuron0x1fb8310()*-0.0107368);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fccdf0() {
   return (neuron0x1fb8650()*0.244539);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcce30() {
   return (neuron0x1fb8990()*-0.0969514);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcce70() {
   return (neuron0x1fb8cd0()*0.0381293);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcceb0() {
   return (neuron0x1fb9010()*0.003907);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fccef0() {
   return (neuron0x1fb9350()*-0.0498518);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fccf30() {
   return (neuron0x1fb9690()*0.00168696);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd2b0() {
   return (neuron0x1fb4a40()*0.77346);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd2f0() {
   return (neuron0x1fb4cf0()*-0.181498);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd330() {
   return (neuron0x1fb5030()*-0.0303628);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd370() {
   return (neuron0x1fb5370()*-1.08075);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd3b0() {
   return (neuron0x1fb56b0()*-0.121458);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd3f0() {
   return (neuron0x1fb59f0()*-0.117346);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd430() {
   return (neuron0x1fb5d30()*-0.223315);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd470() {
   return (neuron0x1fb6070()*0.0499657);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd4b0() {
   return (neuron0x1fb63b0()*0.309455);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd4f0() {
   return (neuron0x1fb66f0()*-0.118613);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd530() {
   return (neuron0x1fb6a30()*0.0284289);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd570() {
   return (neuron0x1fb6d70()*0.163771);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd5b0() {
   return (neuron0x1fb70b0()*-0.308912);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd5f0() {
   return (neuron0x1fb73f0()*0.0182585);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd630() {
   return (neuron0x1fb7730()*0.0578863);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd670() {
   return (neuron0x1fb7a70()*0.545886);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd100() {
   return (neuron0x1fb7db0()*0.0393342);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd140() {
   return (neuron0x1fb8310()*0.575742);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd7c0() {
   return (neuron0x1fb8650()*0.400464);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd800() {
   return (neuron0x1fb8990()*0.0279696);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd840() {
   return (neuron0x1fb8cd0()*0.280676);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd880() {
   return (neuron0x1fb9010()*-0.227844);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd8c0() {
   return (neuron0x1fb9350()*0.207815);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd900() {
   return (neuron0x1fb9690()*0.0255549);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcdc80() {
   return (neuron0x1fb4a40()*0.178409);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcdcc0() {
   return (neuron0x1fb4cf0()*0.559212);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcdd00() {
   return (neuron0x1fb5030()*0.148657);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcdd40() {
   return (neuron0x1fb5370()*-0.172234);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcdd80() {
   return (neuron0x1fb56b0()*-0.152258);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcddc0() {
   return (neuron0x1fb59f0()*-0.1314);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcde00() {
   return (neuron0x1fb5d30()*0.628312);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcde40() {
   return (neuron0x1fb6070()*0.104479);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcde80() {
   return (neuron0x1fb63b0()*-0.000987464);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcdec0() {
   return (neuron0x1fb66f0()*0.53104);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcdf00() {
   return (neuron0x1fb6a30()*-0.520922);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcdf40() {
   return (neuron0x1fb6d70()*0.0287886);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcdf80() {
   return (neuron0x1fb70b0()*0.923068);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcdfc0() {
   return (neuron0x1fb73f0()*0.587822);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce000() {
   return (neuron0x1fb7730()*0.31247);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce040() {
   return (neuron0x1fb7a70()*-0.335339);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcdad0() {
   return (neuron0x1fb7db0()*0.130958);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcdb10() {
   return (neuron0x1fb8310()*-0.496024);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce190() {
   return (neuron0x1fb8650()*-0.193224);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce1d0() {
   return (neuron0x1fb8990()*0.0292671);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce210() {
   return (neuron0x1fb8cd0()*0.123221);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce250() {
   return (neuron0x1fb9010()*-0.271857);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce290() {
   return (neuron0x1fb9350()*-0.240872);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce2d0() {
   return (neuron0x1fb9690()*-0.0115144);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce650() {
   return (neuron0x1fb4a40()*-0.147236);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce690() {
   return (neuron0x1fb4cf0()*-0.118282);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce6d0() {
   return (neuron0x1fb5030()*0.200276);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce710() {
   return (neuron0x1fb5370()*0.31993);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce750() {
   return (neuron0x1fb56b0()*-0.0797693);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce790() {
   return (neuron0x1fb59f0()*0.118173);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce7d0() {
   return (neuron0x1fb5d30()*-0.0414088);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce810() {
   return (neuron0x1fb6070()*-0.030968);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce850() {
   return (neuron0x1fb63b0()*-0.0359443);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce890() {
   return (neuron0x1fb66f0()*-0.0368535);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce8d0() {
   return (neuron0x1fb6a30()*0.058996);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce910() {
   return (neuron0x1fb6d70()*0.109207);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce950() {
   return (neuron0x1fb70b0()*0.77081);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce990() {
   return (neuron0x1fb73f0()*-0.0174463);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce9d0() {
   return (neuron0x1fb7730()*-0.357338);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcea10() {
   return (neuron0x1fb7a70()*0.133056);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce4a0() {
   return (neuron0x1fb7db0()*-0.0770824);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce4e0() {
   return (neuron0x1fb8310()*-0.00106268);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fceb60() {
   return (neuron0x1fb8650()*0.0668927);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fceba0() {
   return (neuron0x1fb8990()*0.0102126);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcebe0() {
   return (neuron0x1fb8cd0()*0.00715351);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcec20() {
   return (neuron0x1fb9010()*-0.00301762);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcec60() {
   return (neuron0x1fb9350()*-0.0173966);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fceca0() {
   return (neuron0x1fb9690()*0.00349617);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf020() {
   return (neuron0x1fb4a40()*-0.278481);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf060() {
   return (neuron0x1fb4cf0()*1.71608);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf0a0() {
   return (neuron0x1fb5030()*-0.197878);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf0e0() {
   return (neuron0x1fb5370()*0.379639);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf120() {
   return (neuron0x1fb56b0()*-0.333529);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf160() {
   return (neuron0x1fb59f0()*0.927572);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf1a0() {
   return (neuron0x1fb5d30()*-0.392818);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf1e0() {
   return (neuron0x1fb6070()*0.667695);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf220() {
   return (neuron0x1fb63b0()*0.0543766);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf260() {
   return (neuron0x1fb66f0()*0.0377774);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf2a0() {
   return (neuron0x1fb6a30()*0.564789);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf2e0() {
   return (neuron0x1fb6d70()*0.103775);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf320() {
   return (neuron0x1fb70b0()*-0.198411);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf360() {
   return (neuron0x1fb73f0()*0.299234);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf3a0() {
   return (neuron0x1fb7730()*0.688951);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf3e0() {
   return (neuron0x1fb7a70()*0.084557);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcee70() {
   return (neuron0x1fb7db0()*0.253243);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fceeb0() {
   return (neuron0x1fb8310()*-0.119272);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf530() {
   return (neuron0x1fb8650()*0.753462);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf570() {
   return (neuron0x1fb8990()*-0.813244);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf5b0() {
   return (neuron0x1fb8cd0()*1.00926);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf5f0() {
   return (neuron0x1fb9010()*0.948942);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf630() {
   return (neuron0x1fb9350()*-0.390209);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf670() {
   return (neuron0x1fb9690()*-0.213447);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf9f0() {
   return (neuron0x1fb4a40()*-0.111445);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcfa30() {
   return (neuron0x1fb4cf0()*0.0221083);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcfa70() {
   return (neuron0x1fb5030()*-0.691134);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcfab0() {
   return (neuron0x1fb5370()*-0.106303);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcfaf0() {
   return (neuron0x1fb56b0()*-0.124498);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcfb30() {
   return (neuron0x1fb59f0()*-0.0258702);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcfb70() {
   return (neuron0x1fb5d30()*0.105867);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcfbb0() {
   return (neuron0x1fb6070()*-0.0552812);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcfbf0() {
   return (neuron0x1fb63b0()*-0.0239962);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcfc30() {
   return (neuron0x1fb66f0()*-0.104886);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcfc70() {
   return (neuron0x1fb6a30()*0.0242074);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcfcb0() {
   return (neuron0x1fb6d70()*-0.0579948);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcfcf0() {
   return (neuron0x1fb70b0()*-0.14259);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcfd30() {
   return (neuron0x1fb73f0()*-0.0910103);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcfd70() {
   return (neuron0x1fb7730()*0.0340293);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcfdb0() {
   return (neuron0x1fb7a70()*-0.0688672);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf840() {
   return (neuron0x1fb7db0()*-0.125678);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcf880() {
   return (neuron0x1fb8310()*0.0406474);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcff00() {
   return (neuron0x1fb8650()*-0.0103855);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcff40() {
   return (neuron0x1fb8990()*0.0300959);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcff80() {
   return (neuron0x1fb8cd0()*0.00295943);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcffc0() {
   return (neuron0x1fb9010()*0.0739851);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd0000() {
   return (neuron0x1fb9350()*0.0426419);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd0040() {
   return (neuron0x1fb9690()*0.0317934);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd03c0() {
   return (neuron0x1fb4a40()*0.0113663);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4990() {
   return (neuron0x1fb4cf0()*-0.00258614);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc49d0() {
   return (neuron0x1fb5030()*0.334136);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4a10() {
   return (neuron0x1fb5370()*-0.0745612);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4c60() {
   return (neuron0x1fb56b0()*0.00610964);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4ca0() {
   return (neuron0x1fb59f0()*-0.0151284);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4ce0() {
   return (neuron0x1fb5d30()*0.00162605);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4f30() {
   return (neuron0x1fb6070()*-0.00700591);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4f70() {
   return (neuron0x1fb63b0()*0.0495763);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc51c0() {
   return (neuron0x1fb66f0()*0.00736963);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc5200() {
   return (neuron0x1fb6a30()*-0.0215971);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc5240() {
   return (neuron0x1fb6d70()*-0.000967571);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc5490() {
   return (neuron0x1fb70b0()*-1.73181);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc54d0() {
   return (neuron0x1fb73f0()*-0.019498);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc5720() {
   return (neuron0x1fb7730()*-0.00535033);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc5760() {
   return (neuron0x1fb7a70()*0.0143813);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd0210() {
   return (neuron0x1fb7db0()*-0.0165003);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd0250() {
   return (neuron0x1fb8310()*0.012057);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc58b0() {
   return (neuron0x1fb8650()*-0.00718032);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc5dc0() {
   return (neuron0x1fb8990()*-0.0143398);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc5e00() {
   return (neuron0x1fb8cd0()*0.018415);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc5e40() {
   return (neuron0x1fb9010()*0.000787137);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc6090() {
   return (neuron0x1fb9350()*0.0094154);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc60d0() {
   return (neuron0x1fb9690()*0.0209185);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc5980() {
   return (neuron0x1fb4a40()*-0.0297521);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc59c0() {
   return (neuron0x1fb4cf0()*0.0160295);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc5a00() {
   return (neuron0x1fb5030()*-0.0467736);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc5a40() {
   return (neuron0x1fb5370()*0.104155);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc63c0() {
   return (neuron0x1fb56b0()*-0.0667601);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd2710() {
   return (neuron0x1fb59f0()*-0.00257236);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd2750() {
   return (neuron0x1fb5d30()*0.0339675);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd2790() {
   return (neuron0x1fb6070()*-0.0176787);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd27d0() {
   return (neuron0x1fb63b0()*-0.0092594);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd2810() {
   return (neuron0x1fb66f0()*-0.0211312);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd2850() {
   return (neuron0x1fb6a30()*0.0204819);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd2890() {
   return (neuron0x1fb6d70()*0.00817024);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd28d0() {
   return (neuron0x1fb70b0()*3.85861);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd2910() {
   return (neuron0x1fb73f0()*0.0460216);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd2950() {
   return (neuron0x1fb7730()*-0.018978);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd2990() {
   return (neuron0x1fb7a70()*-0.0644038);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc62a0() {
   return (neuron0x1fb7db0()*0.0170448);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc62e0() {
   return (neuron0x1fb8310()*-0.0107185);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd2ae0() {
   return (neuron0x1fb8650()*0.0123259);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd2b20() {
   return (neuron0x1fb8990()*0.0255641);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd2b60() {
   return (neuron0x1fb8cd0()*0.0181389);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd2ba0() {
   return (neuron0x1fb9010()*0.0322062);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd2be0() {
   return (neuron0x1fb9350()*-0.0102875);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd2c20() {
   return (neuron0x1fb9690()*0.00283438);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd2fa0() {
   return (neuron0x1fb4a40()*-0.149877);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd2fe0() {
   return (neuron0x1fb4cf0()*-0.000546985);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3020() {
   return (neuron0x1fb5030()*0.509992);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3060() {
   return (neuron0x1fb5370()*0.00655926);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd30a0() {
   return (neuron0x1fb56b0()*-0.0116726);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd30e0() {
   return (neuron0x1fb59f0()*-0.00388322);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3120() {
   return (neuron0x1fb5d30()*0.00533183);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3160() {
   return (neuron0x1fb6070()*-0.000774878);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd31a0() {
   return (neuron0x1fb63b0()*-0.00553855);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd31e0() {
   return (neuron0x1fb66f0()*-0.00517141);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3220() {
   return (neuron0x1fb6a30()*-0.00367717);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3260() {
   return (neuron0x1fb6d70()*0.0117659);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd32a0() {
   return (neuron0x1fb70b0()*-0.00772743);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd32e0() {
   return (neuron0x1fb73f0()*-0.0189908);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3320() {
   return (neuron0x1fb7730()*-0.00541373);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3360() {
   return (neuron0x1fb7a70()*0.000650833);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd2df0() {
   return (neuron0x1fb7db0()*0.0201911);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd2e30() {
   return (neuron0x1fb8310()*0.00854677);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd34b0() {
   return (neuron0x1fb8650()*0.00218487);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd34f0() {
   return (neuron0x1fb8990()*0.00595884);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3530() {
   return (neuron0x1fb8cd0()*0.00883789);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3570() {
   return (neuron0x1fb9010()*0.000971824);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd35b0() {
   return (neuron0x1fb9350()*0.00388333);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd35f0() {
   return (neuron0x1fb9690()*33.0543);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3970() {
   return (neuron0x1fb4a40()*0.104357);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd39b0() {
   return (neuron0x1fb4cf0()*-0.106166);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd39f0() {
   return (neuron0x1fb5030()*0.509348);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3a30() {
   return (neuron0x1fb5370()*-0.0755083);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3a70() {
   return (neuron0x1fb56b0()*-0.00663929);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3ab0() {
   return (neuron0x1fb59f0()*-0.00407313);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3af0() {
   return (neuron0x1fb5d30()*-0.0290581);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3b30() {
   return (neuron0x1fb6070()*-0.0549474);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3b70() {
   return (neuron0x1fb63b0()*-0.00417756);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3bb0() {
   return (neuron0x1fb66f0()*-0.0706655);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3bf0() {
   return (neuron0x1fb6a30()*0.0228258);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3c30() {
   return (neuron0x1fb6d70()*0.0158612);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3c70() {
   return (neuron0x1fb70b0()*0.336608);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3cb0() {
   return (neuron0x1fb73f0()*-0.0843975);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3cf0() {
   return (neuron0x1fb7730()*0.0163333);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3d30() {
   return (neuron0x1fb7a70()*-0.00470265);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd37c0() {
   return (neuron0x1fb7db0()*-0.0648931);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3800() {
   return (neuron0x1fb8310()*-0.0514628);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3e80() {
   return (neuron0x1fb8650()*-0.0146027);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3ec0() {
   return (neuron0x1fb8990()*-0.0956262);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3f00() {
   return (neuron0x1fb8cd0()*0.0660186);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3f40() {
   return (neuron0x1fb9010()*0.0360792);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3f80() {
   return (neuron0x1fb9350()*-0.00408457);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3fc0() {
   return (neuron0x1fb9690()*3.33632);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4340() {
   return (neuron0x1fb4a40()*-0.62686);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4380() {
   return (neuron0x1fb4cf0()*-0.118633);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd43c0() {
   return (neuron0x1fb5030()*-0.245159);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4400() {
   return (neuron0x1fb5370()*-0.734358);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4440() {
   return (neuron0x1fb56b0()*0.285737);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4480() {
   return (neuron0x1fb59f0()*0.975314);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd44c0() {
   return (neuron0x1fb5d30()*-0.477579);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4500() {
   return (neuron0x1fb6070()*0.0112232);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4540() {
   return (neuron0x1fb63b0()*-0.147149);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4580() {
   return (neuron0x1fb66f0()*0.21952);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd45c0() {
   return (neuron0x1fb6a30()*0.000491846);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4600() {
   return (neuron0x1fb6d70()*-0.079831);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4640() {
   return (neuron0x1fb70b0()*-1.44486);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4680() {
   return (neuron0x1fb73f0()*0.0312892);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd46c0() {
   return (neuron0x1fb7730()*0.949918);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4700() {
   return (neuron0x1fb7a70()*0.42067);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4190() {
   return (neuron0x1fb7db0()*-0.0232541);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd41d0() {
   return (neuron0x1fb8310()*-0.306765);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4850() {
   return (neuron0x1fb8650()*-0.216613);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4890() {
   return (neuron0x1fb8990()*-0.422735);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd48d0() {
   return (neuron0x1fb8cd0()*-0.293137);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4910() {
   return (neuron0x1fb9010()*-0.00351658);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4950() {
   return (neuron0x1fb9350()*-0.0889547);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4990() {
   return (neuron0x1fb9690()*-0.0343602);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4d10() {
   return (neuron0x1fb4a40()*0.255228);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4d50() {
   return (neuron0x1fb4cf0()*0.00658571);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4d90() {
   return (neuron0x1fb5030()*0.403305);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4dd0() {
   return (neuron0x1fb5370()*0.23879);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4e10() {
   return (neuron0x1fb56b0()*0.261844);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4e50() {
   return (neuron0x1fb59f0()*0.10087);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4e90() {
   return (neuron0x1fb5d30()*0.358521);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4ed0() {
   return (neuron0x1fb6070()*0.188535);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4f10() {
   return (neuron0x1fb63b0()*0.130831);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4f50() {
   return (neuron0x1fb66f0()*-0.264705);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4f90() {
   return (neuron0x1fb6a30()*0.49923);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4fd0() {
   return (neuron0x1fb6d70()*0.184234);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5010() {
   return (neuron0x1fb70b0()*-0.904357);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5050() {
   return (neuron0x1fb73f0()*0.131572);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5090() {
   return (neuron0x1fb7730()*-0.0544801);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd50d0() {
   return (neuron0x1fb7a70()*-0.105261);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4b60() {
   return (neuron0x1fb7db0()*-0.280717);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4ba0() {
   return (neuron0x1fb8310()*-0.101845);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5220() {
   return (neuron0x1fb8650()*0.167452);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5260() {
   return (neuron0x1fb8990()*0.577505);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd52a0() {
   return (neuron0x1fb8cd0()*0.193605);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd52e0() {
   return (neuron0x1fb9010()*-0.109077);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5320() {
   return (neuron0x1fb9350()*-0.0876844);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5360() {
   return (neuron0x1fb9690()*0.0410184);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd56e0() {
   return (neuron0x1fb4a40()*0.269177);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5720() {
   return (neuron0x1fb4cf0()*-0.0961466);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5760() {
   return (neuron0x1fb5030()*0.286272);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd57a0() {
   return (neuron0x1fb5370()*0.0728839);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd57e0() {
   return (neuron0x1fb56b0()*-0.38239);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5820() {
   return (neuron0x1fb59f0()*-0.220313);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5860() {
   return (neuron0x1fb5d30()*-0.150839);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd58a0() {
   return (neuron0x1fb6070()*0.202733);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd58e0() {
   return (neuron0x1fb63b0()*-0.25271);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5920() {
   return (neuron0x1fb66f0()*0.131353);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5960() {
   return (neuron0x1fb6a30()*-0.385354);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd59a0() {
   return (neuron0x1fb6d70()*-0.00330753);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd59e0() {
   return (neuron0x1fb70b0()*-0.444779);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5a20() {
   return (neuron0x1fb73f0()*0.932221);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5a60() {
   return (neuron0x1fb7730()*0.164443);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5aa0() {
   return (neuron0x1fb7a70()*0.114659);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5530() {
   return (neuron0x1fb7db0()*0.521199);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5570() {
   return (neuron0x1fb8310()*-0.210694);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5bf0() {
   return (neuron0x1fb8650()*-0.555515);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5c30() {
   return (neuron0x1fb8990()*0.503616);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5c70() {
   return (neuron0x1fb8cd0()*-0.135937);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5cb0() {
   return (neuron0x1fb9010()*-0.320604);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5cf0() {
   return (neuron0x1fb9350()*-0.0306828);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5d30() {
   return (neuron0x1fb9690()*-0.074553);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd60b0() {
   return (neuron0x1fb4a40()*-0.108961);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd60f0() {
   return (neuron0x1fb4cf0()*-0.018001);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6130() {
   return (neuron0x1fb5030()*0.389143);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6170() {
   return (neuron0x1fb5370()*0.372532);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd61b0() {
   return (neuron0x1fb56b0()*0.42125);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd61f0() {
   return (neuron0x1fb59f0()*0.0796943);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6230() {
   return (neuron0x1fb5d30()*-1.16556);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6270() {
   return (neuron0x1fb6070()*0.0813793);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd62b0() {
   return (neuron0x1fb63b0()*0.110558);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd62f0() {
   return (neuron0x1fb66f0()*0.130058);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6330() {
   return (neuron0x1fb6a30()*-0.0624066);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6370() {
   return (neuron0x1fb6d70()*-0.149284);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd63b0() {
   return (neuron0x1fb70b0()*0.473885);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd63f0() {
   return (neuron0x1fb73f0()*-0.0170629);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6430() {
   return (neuron0x1fb7730()*-0.0239425);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6470() {
   return (neuron0x1fb7a70()*-0.432646);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5f00() {
   return (neuron0x1fb7db0()*-0.138812);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5f40() {
   return (neuron0x1fb8310()*0.154815);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd65c0() {
   return (neuron0x1fb8650()*0.255432);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6600() {
   return (neuron0x1fb8990()*0.0846288);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6640() {
   return (neuron0x1fb8cd0()*0.215282);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6680() {
   return (neuron0x1fb9010()*-0.062484);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd66c0() {
   return (neuron0x1fb9350()*0.228088);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6700() {
   return (neuron0x1fb9690()*0.0470435);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6a80() {
   return (neuron0x1fb4a40()*-0.00308392);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6ac0() {
   return (neuron0x1fb4cf0()*0.00814997);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6b00() {
   return (neuron0x1fb5030()*0.0192831);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6b40() {
   return (neuron0x1fb5370()*2.70915);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6b80() {
   return (neuron0x1fb56b0()*-0.00842817);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6bc0() {
   return (neuron0x1fb59f0()*-0.00390082);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6c00() {
   return (neuron0x1fb5d30()*-0.0193277);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6c40() {
   return (neuron0x1fb6070()*-0.00359377);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6c80() {
   return (neuron0x1fb63b0()*-0.00355674);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6cc0() {
   return (neuron0x1fb66f0()*0.0096991);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6d00() {
   return (neuron0x1fb6a30()*-0.0067735);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6d40() {
   return (neuron0x1fb6d70()*-0.0104614);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6d80() {
   return (neuron0x1fb70b0()*-0.0571325);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6dc0() {
   return (neuron0x1fb73f0()*-0.0110283);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6e00() {
   return (neuron0x1fb7730()*-0.0131932);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6e40() {
   return (neuron0x1fb7a70()*-0.0120576);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd68d0() {
   return (neuron0x1fb7db0()*-0.00263881);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6910() {
   return (neuron0x1fb8310()*0.0110522);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6f90() {
   return (neuron0x1fb8650()*0.000509959);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6fd0() {
   return (neuron0x1fb8990()*-0.0157322);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd7010() {
   return (neuron0x1fb8cd0()*0.0060447);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd7050() {
   return (neuron0x1fb9010()*-0.00187775);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd7090() {
   return (neuron0x1fb9350()*-0.000913269);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd70d0() {
   return (neuron0x1fb9690()*-0.00799863);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbfb80() {
   return (neuron0x1fb4a40()*-0.319807);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbfbc0() {
   return (neuron0x1fb4cf0()*-0.0377897);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbfc00() {
   return (neuron0x1fb5030()*-0.17597);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbfc40() {
   return (neuron0x1fb5370()*0.184022);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbfc80() {
   return (neuron0x1fb56b0()*-0.41813);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbfcc0() {
   return (neuron0x1fb59f0()*-0.288702);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbfd00() {
   return (neuron0x1fb5d30()*-0.190182);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbfd40() {
   return (neuron0x1fb6070()*-0.117033);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd7860() {
   return (neuron0x1fb63b0()*0.158679);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd78a0() {
   return (neuron0x1fb66f0()*-0.208842);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd78e0() {
   return (neuron0x1fb6a30()*-0.169157);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd7920() {
   return (neuron0x1fb6d70()*-0.123977);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd7960() {
   return (neuron0x1fb70b0()*-0.13817);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd79a0() {
   return (neuron0x1fb73f0()*-0.166554);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd79e0() {
   return (neuron0x1fb7730()*0.160203);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd7a20() {
   return (neuron0x1fb7a70()*0.274424);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd72a0() {
   return (neuron0x1fb7db0()*0.140375);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd72e0() {
   return (neuron0x1fb8310()*0.168649);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd7b70() {
   return (neuron0x1fb8650()*-0.0370045);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd7bb0() {
   return (neuron0x1fb8990()*-0.0688523);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd7bf0() {
   return (neuron0x1fb8cd0()*-0.147581);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd7c30() {
   return (neuron0x1fb9010()*0.0669457);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd7c70() {
   return (neuron0x1fb9350()*0.168714);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd7cb0() {
   return (neuron0x1fb9690()*0.17219);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8030() {
   return (neuron0x1fb4a40()*-0.640005);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8070() {
   return (neuron0x1fb4cf0()*-0.188333);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd80b0() {
   return (neuron0x1fb5030()*-0.0727258);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd80f0() {
   return (neuron0x1fb5370()*1.07405);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8130() {
   return (neuron0x1fb56b0()*-0.469697);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8170() {
   return (neuron0x1fb59f0()*0.947537);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd81b0() {
   return (neuron0x1fb5d30()*-0.639773);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd81f0() {
   return (neuron0x1fb6070()*-0.22308);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8230() {
   return (neuron0x1fb63b0()*-0.0703011);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8270() {
   return (neuron0x1fb66f0()*-0.0958764);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd82b0() {
   return (neuron0x1fb6a30()*0.0731076);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd82f0() {
   return (neuron0x1fb6d70()*-0.625655);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8330() {
   return (neuron0x1fb70b0()*-0.866773);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8370() {
   return (neuron0x1fb73f0()*-0.0872662);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd83b0() {
   return (neuron0x1fb7730()*0.0947805);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd83f0() {
   return (neuron0x1fb7a70()*0.51255);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd7e80() {
   return (neuron0x1fb7db0()*-0.440222);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd7ec0() {
   return (neuron0x1fb8310()*0.245645);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8540() {
   return (neuron0x1fb8650()*-0.034043);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8580() {
   return (neuron0x1fb8990()*-0.152697);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd85c0() {
   return (neuron0x1fb8cd0()*-0.0308579);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8600() {
   return (neuron0x1fb9010()*-0.314524);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8640() {
   return (neuron0x1fb9350()*0.159016);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8680() {
   return (neuron0x1fb9690()*0.180203);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8a00() {
   return (neuron0x1fb4a40()*-0.0350979);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8a40() {
   return (neuron0x1fb4cf0()*-0.0157583);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8a80() {
   return (neuron0x1fb5030()*-0.270377);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8ac0() {
   return (neuron0x1fb5370()*-0.040543);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8b00() {
   return (neuron0x1fb56b0()*-0.00125067);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8b40() {
   return (neuron0x1fb59f0()*-0.00500301);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8b80() {
   return (neuron0x1fb5d30()*0.0080366);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8bc0() {
   return (neuron0x1fb6070()*-0.00869997);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8c00() {
   return (neuron0x1fb63b0()*-0.00543723);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8c40() {
   return (neuron0x1fb66f0()*0.00542228);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8c80() {
   return (neuron0x1fb6a30()*0.0232971);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8cc0() {
   return (neuron0x1fb6d70()*0.0156888);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8d00() {
   return (neuron0x1fb70b0()*0.435109);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8d40() {
   return (neuron0x1fb73f0()*-0.0226217);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8d80() {
   return (neuron0x1fb7730()*0.00198159);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8dc0() {
   return (neuron0x1fb7a70()*-0.0106992);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8850() {
   return (neuron0x1fb7db0()*-0.00679589);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8890() {
   return (neuron0x1fb8310()*-0.0190964);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc93c0() {
   return (neuron0x1fb8650()*-0.0133706);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9400() {
   return (neuron0x1fb8990()*-0.0179573);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9440() {
   return (neuron0x1fb8cd0()*0.0192319);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9480() {
   return (neuron0x1fb9010()*0.0140309);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc94c0() {
   return (neuron0x1fb9350()*-0.0207246);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9500() {
   return (neuron0x1fb9690()*6.3907);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9880() {
   return (neuron0x1fb4a40()*0.0681686);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc98c0() {
   return (neuron0x1fb4cf0()*-0.00719144);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9900() {
   return (neuron0x1fb5030()*-3.00617);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9940() {
   return (neuron0x1fb5370()*0.0234123);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9980() {
   return (neuron0x1fb56b0()*-0.0086911);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc99c0() {
   return (neuron0x1fb59f0()*-0.0152603);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9a00() {
   return (neuron0x1fb5d30()*-0.0179997);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9a40() {
   return (neuron0x1fb6070()*-0.0208613);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9a80() {
   return (neuron0x1fb63b0()*-7.23301e-05);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9ac0() {
   return (neuron0x1fb66f0()*-0.0122734);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9b00() {
   return (neuron0x1fb6a30()*-0.00797804);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9b40() {
   return (neuron0x1fb6d70()*-0.0152259);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9b80() {
   return (neuron0x1fb70b0()*0.141444);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9bc0() {
   return (neuron0x1fb73f0()*-0.0203321);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9c00() {
   return (neuron0x1fb7730()*-0.00642646);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9c40() {
   return (neuron0x1fb7a70()*-0.00926882);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc96d0() {
   return (neuron0x1fb7db0()*-0.00226589);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9710() {
   return (neuron0x1fb8310()*-0.0161605);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9d90() {
   return (neuron0x1fb8650()*0.00315498);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9dd0() {
   return (neuron0x1fb8990()*0.0159168);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9e10() {
   return (neuron0x1fb8cd0()*-0.00323695);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9e50() {
   return (neuron0x1fb9010()*-0.0148168);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9e90() {
   return (neuron0x1fb9350()*0.013754);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9ed0() {
   return (neuron0x1fb9690()*-8.8138);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca250() {
   return (neuron0x1fb4a40()*0.00623936);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca290() {
   return (neuron0x1fb4cf0()*-0.0148208);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca2d0() {
   return (neuron0x1fb5030()*0.191345);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca310() {
   return (neuron0x1fb5370()*0.175115);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca350() {
   return (neuron0x1fb56b0()*-0.0587632);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca390() {
   return (neuron0x1fb59f0()*0.021493);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca3d0() {
   return (neuron0x1fb5d30()*0.0266548);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca410() {
   return (neuron0x1fb6070()*-0.0280737);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca450() {
   return (neuron0x1fb63b0()*-0.0208285);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca490() {
   return (neuron0x1fb66f0()*-0.114273);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca4d0() {
   return (neuron0x1fb6a30()*-0.0102419);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca510() {
   return (neuron0x1fb6d70()*0.0235463);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca550() {
   return (neuron0x1fb70b0()*1.13935);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca590() {
   return (neuron0x1fb73f0()*-0.017466);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca5d0() {
   return (neuron0x1fb7730()*0.113946);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca610() {
   return (neuron0x1fb7a70()*-0.300653);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca0a0() {
   return (neuron0x1fb7db0()*-0.0462864);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca0e0() {
   return (neuron0x1fb8310()*-0.0321402);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca760() {
   return (neuron0x1fb8650()*-0.0701585);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca7a0() {
   return (neuron0x1fb8990()*0.0804406);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca7e0() {
   return (neuron0x1fb8cd0()*-0.0422373);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca820() {
   return (neuron0x1fb9010()*0.0294607);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca860() {
   return (neuron0x1fb9350()*0.0196515);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca8a0() {
   return (neuron0x1fb9690()*-0.013757);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcac20() {
   return (neuron0x1fb4a40()*-0.27614);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcac60() {
   return (neuron0x1fb4cf0()*-0.37999);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcaca0() {
   return (neuron0x1fb5030()*-0.0187266);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcace0() {
   return (neuron0x1fb5370()*-1.07375);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcad20() {
   return (neuron0x1fb56b0()*-0.149589);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcad60() {
   return (neuron0x1fb59f0()*-0.363914);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcada0() {
   return (neuron0x1fb5d30()*0.0385852);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcade0() {
   return (neuron0x1fb6070()*-0.183999);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcae20() {
   return (neuron0x1fb63b0()*-0.071869);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcae60() {
   return (neuron0x1fb66f0()*-0.0519202);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcaea0() {
   return (neuron0x1fb6a30()*0.3781);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcaee0() {
   return (neuron0x1fb6d70()*-0.296968);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcaf20() {
   return (neuron0x1fb70b0()*0.60404);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcaf60() {
   return (neuron0x1fb73f0()*0.609315);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcafa0() {
   return (neuron0x1fb7730()*-0.0536388);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcafe0() {
   return (neuron0x1fb7a70()*0.033368);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcaa70() {
   return (neuron0x1fb7db0()*0.368191);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcaab0() {
   return (neuron0x1fb8310()*-0.523758);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb130() {
   return (neuron0x1fb8650()*-0.0057697);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb170() {
   return (neuron0x1fb8990()*-0.217489);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb1b0() {
   return (neuron0x1fb8cd0()*0.219472);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb1f0() {
   return (neuron0x1fb9010()*-0.162246);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb230() {
   return (neuron0x1fb9350()*0.0945092);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb270() {
   return (neuron0x1fb9690()*-0.0216055);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd140() {
   return (neuron0x1fb4a40()*0.0307118);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd180() {
   return (neuron0x1fb4cf0()*0.01124);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd1c0() {
   return (neuron0x1fb5030()*2.03238);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd200() {
   return (neuron0x1fb5370()*0.0305711);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd240() {
   return (neuron0x1fb56b0()*-0.0014294);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd280() {
   return (neuron0x1fb59f0()*-0.00051165);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd2c0() {
   return (neuron0x1fb5d30()*0.00327175);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd300() {
   return (neuron0x1fb6070()*0.00998541);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd340() {
   return (neuron0x1fb63b0()*-0.0311211);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd380() {
   return (neuron0x1fb66f0()*0.0074606);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd3c0() {
   return (neuron0x1fb6a30()*0.00653981);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd400() {
   return (neuron0x1fb6d70()*0.00216454);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd440() {
   return (neuron0x1fb70b0()*-0.0832625);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd480() {
   return (neuron0x1fb73f0()*-4.73878e-05);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd4c0() {
   return (neuron0x1fb7730()*0.00712119);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd500() {
   return (neuron0x1fb7a70()*-0.00338481);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb2b0() {
   return (neuron0x1fb7db0()*-0.000613141);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb2f0() {
   return (neuron0x1fb8310()*-0.0127709);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd650() {
   return (neuron0x1fb8650()*-0.0137733);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd690() {
   return (neuron0x1fb8990()*0.0130771);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd6d0() {
   return (neuron0x1fb8cd0()*-0.0227303);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd710() {
   return (neuron0x1fb9010()*0.0117363);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd750() {
   return (neuron0x1fb9350()*-0.00994432);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd790() {
   return (neuron0x1fb9690()*-0.0117299);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fddb10() {
   return (neuron0x1fb4a40()*-0.135609);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fddb50() {
   return (neuron0x1fb4cf0()*-0.00508037);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fddb90() {
   return (neuron0x1fb5030()*0.600959);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fddbd0() {
   return (neuron0x1fb5370()*-8.24676e-05);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fddc10() {
   return (neuron0x1fb56b0()*-0.00587553);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fddc50() {
   return (neuron0x1fb59f0()*-0.000736265);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fddc90() {
   return (neuron0x1fb5d30()*0.0101316);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fddcd0() {
   return (neuron0x1fb6070()*0.000284327);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fddd10() {
   return (neuron0x1fb63b0()*-0.00666499);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fddd50() {
   return (neuron0x1fb66f0()*-0.00319482);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fddd90() {
   return (neuron0x1fb6a30()*-0.00261464);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdddd0() {
   return (neuron0x1fb6d70()*0.0125347);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdde10() {
   return (neuron0x1fb70b0()*0.132294);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdde50() {
   return (neuron0x1fb73f0()*-0.0170223);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdde90() {
   return (neuron0x1fb7730()*-0.0026827);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdded0() {
   return (neuron0x1fb7a70()*0.00146985);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd960() {
   return (neuron0x1fb7db0()*0.0120737);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd9a0() {
   return (neuron0x1fb8310()*0.00634815);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde020() {
   return (neuron0x1fb8650()*0.00294695);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde060() {
   return (neuron0x1fb8990()*0.0036584);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde0a0() {
   return (neuron0x1fb8cd0()*0.00500816);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde0e0() {
   return (neuron0x1fb9010()*-0.00137917);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde120() {
   return (neuron0x1fb9350()*-0.0025143);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde160() {
   return (neuron0x1fb9690()*31.0315);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde4e0() {
   return (neuron0x1fb4a40()*0.304134);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde520() {
   return (neuron0x1fb4cf0()*0.0356606);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde560() {
   return (neuron0x1fb5030()*0.050551);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde5a0() {
   return (neuron0x1fb5370()*0.122138);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde5e0() {
   return (neuron0x1fb56b0()*0.144838);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde620() {
   return (neuron0x1fb59f0()*0.0012632);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde660() {
   return (neuron0x1fb5d30()*0.00265767);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde6a0() {
   return (neuron0x1fb6070()*-0.00101194);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde6e0() {
   return (neuron0x1fb63b0()*0.163227);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde720() {
   return (neuron0x1fb66f0()*0.204391);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde760() {
   return (neuron0x1fb6a30()*-0.00443961);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde7a0() {
   return (neuron0x1fb6d70()*0.0538858);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde7e0() {
   return (neuron0x1fb70b0()*-0.0574863);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde820() {
   return (neuron0x1fb73f0()*-0.0135623);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde860() {
   return (neuron0x1fb7730()*0.0425269);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde8a0() {
   return (neuron0x1fb7a70()*0.0629793);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde330() {
   return (neuron0x1fb7db0()*0.0771565);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde370() {
   return (neuron0x1fb8310()*0.0288317);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde9f0() {
   return (neuron0x1fb8650()*-0.0631162);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdea30() {
   return (neuron0x1fb8990()*-0.169185);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdea70() {
   return (neuron0x1fb8cd0()*0.0654992);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdeab0() {
   return (neuron0x1fb9010()*0.00778375);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdeaf0() {
   return (neuron0x1fb9350()*0.00396575);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdeb30() {
   return (neuron0x1fb9690()*0.0245731);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdeeb0() {
   return (neuron0x1fb4a40()*-0.013253);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdeef0() {
   return (neuron0x1fb4cf0()*0.00336329);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdef30() {
   return (neuron0x1fb5030()*-0.00682345);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdef70() {
   return (neuron0x1fb5370()*-2.56408);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdefb0() {
   return (neuron0x1fb56b0()*0.00614974);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdeff0() {
   return (neuron0x1fb59f0()*-0.0223717);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdf030() {
   return (neuron0x1fb5d30()*0.00659421);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdf070() {
   return (neuron0x1fb6070()*-0.014811);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdf0b0() {
   return (neuron0x1fb63b0()*0.00489289);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdf0f0() {
   return (neuron0x1fb66f0()*-0.00669777);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdf130() {
   return (neuron0x1fb6a30()*0.00816181);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdf170() {
   return (neuron0x1fb6d70()*-0.00410673);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdf1b0() {
   return (neuron0x1fb70b0()*0.57031);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdf1f0() {
   return (neuron0x1fb73f0()*0.0603789);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdf230() {
   return (neuron0x1fb7730()*-0.00863959);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdf270() {
   return (neuron0x1fb7a70()*-0.0258691);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fded00() {
   return (neuron0x1fb7db0()*0.0328385);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fded40() {
   return (neuron0x1fb8310()*-0.00756007);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdf3c0() {
   return (neuron0x1fb8650()*-0.00214335);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdf400() {
   return (neuron0x1fb8990()*-0.0158233);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdf440() {
   return (neuron0x1fb8cd0()*0.0152692);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdf480() {
   return (neuron0x1fb9010()*0.000932441);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdf4c0() {
   return (neuron0x1fb9350()*0.0146541);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdf500() {
   return (neuron0x1fb9690()*-0.00191424);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d7f370() {
   return (neuron0x1fb9b00()*-0.00925374);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1d7f3b0() {
   return (neuron0x1fba340()*-0.0374125);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbbeb0() {
   return (neuron0x1fbae20()*0.434492);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbbef0() {
   return (neuron0x1fba8c0()*-0.0330886);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbd980() {
   return (neuron0x1fbbc00()*-1.67712);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbd9c0() {
   return (neuron0x1fbd6d0()*0.0557454);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe750() {
   return (neuron0x1fbe4a0()*-0.488271);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe790() {
   return (neuron0x1fbee70()*1.01424);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf120() {
   return (neuron0x1fbf840()*-0.725103);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbf160() {
   return (neuron0x1fc0320()*0.332196);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbfaf0() {
   return (neuron0x1fc0cf0()*-0.243524);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbfb30() {
   return (neuron0x1fbddd0()*0.00712353);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc05d0() {
   return (neuron0x1fc28a0()*-0.168438);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0610() {
   return (neuron0x1fc3270()*1.44738);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0fa0() {
   return (neuron0x1fc3c40()*-0.0594473);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc0fe0() {
   return (neuron0x1fc4610()*0.0531993);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe080() {
   return (neuron0x1fc6420()*-2.76207);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fbe0c0() {
   return (neuron0x1fc6700()*0.364373);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2b50() {
   return (neuron0x1fc70d0()*0.946252);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc2b90() {
   return (neuron0x1fc7aa0()*0.156594);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3520() {
   return (neuron0x1fc8470()*0.40653);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3560() {
   return (neuron0x1fc8e40()*-1.50359);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3ef0() {
   return (neuron0x1fc1990()*0.0255232);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc3f30() {
   return (neuron0x1fc2360()*0.270585);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc48c0() {
   return (neuron0x1fcbbd0()*-0.135177);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc4900() {
   return (neuron0x1fcc5a0()*0.172824);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb7950() {
   return (neuron0x1fccf70()*0.140785);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb7990() {
   return (neuron0x1fcd940()*-0.0219621);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc69b0() {
   return (neuron0x1fce310()*0.374399);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc69f0() {
   return (neuron0x1fcece0()*-0.0413278);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7380() {
   return (neuron0x1fcf6b0()*0.0227689);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc73c0() {
   return (neuron0x1fd0080()*0.0745616);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7d50() {
   return (neuron0x1fc6110()*-0.368141);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc7d90() {
   return (neuron0x1fd2c60()*3.84528);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8720() {
   return (neuron0x1fd3630()*0.260176);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc8760() {
   return (neuron0x1fd4000()*0.0327815);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc90f0() {
   return (neuron0x1fd49d0()*0.0017515);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9130() {
   return (neuron0x1fd53a0()*-0.0428525);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1c40() {
   return (neuron0x1fd5d70()*0.156643);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc1c80() {
   return (neuron0x1fd6740()*0.103575);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb4f0() {
   return (neuron0x1fd7110()*0.209282);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcb530() {
   return (neuron0x1fd7cf0()*-0.00856688);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcbe80() {
   return (neuron0x1fd86c0()*0.421394);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcbec0() {
   return (neuron0x1fc9540()*0.782229);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc850() {
   return (neuron0x1fc9f10()*0.278568);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcc890() {
   return (neuron0x1fca8e0()*0.051477);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd220() {
   return (neuron0x1fdcf20()*-1.6206);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcd260() {
   return (neuron0x1fdd7d0()*-3.13346);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcdbf0() {
   return (neuron0x1fde1a0()*0.276845);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcdc30() {
   return (neuron0x1fdeb70()*-0.089452);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd0330() {
   return (neuron0x1fb9b00()*0.166043);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd0370() {
   return (neuron0x1fba340()*2.97408);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc58f0() {
   return (neuron0x1fbae20()*-1.41205);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc5930() {
   return (neuron0x1fba8c0()*-1.48699);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd2f10() {
   return (neuron0x1fbbc00()*-1.89529);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd2f50() {
   return (neuron0x1fbd6d0()*-0.262296);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd38e0() {
   return (neuron0x1fbe4a0()*0.416009);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd3920() {
   return (neuron0x1fbee70()*2.10828);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd42b0() {
   return (neuron0x1fbf840()*0.26011);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd42f0() {
   return (neuron0x1fc0320()*-0.802294);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4c80() {
   return (neuron0x1fc0cf0()*1.60945);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd4cc0() {
   return (neuron0x1fbddd0()*0.670608);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5650() {
   return (neuron0x1fc28a0()*-4.34611);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd5690() {
   return (neuron0x1fc3270()*0.449962);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6020() {
   return (neuron0x1fc3c40()*0.31018);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6060() {
   return (neuron0x1fc4610()*-0.239037);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd69f0() {
   return (neuron0x1fc6420()*-2.81481);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd6a30() {
   return (neuron0x1fc6700()*0.733889);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd73c0() {
   return (neuron0x1fc70d0()*0.858428);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd7400() {
   return (neuron0x1fc7aa0()*-1.30519);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd7fa0() {
   return (neuron0x1fc8470()*0.158631);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd7fe0() {
   return (neuron0x1fc8e40()*-2.08781);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd8970() {
   return (neuron0x1fc1990()*1.42239);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fd89b0() {
   return (neuron0x1fc2360()*-0.121376);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc97f0() {
   return (neuron0x1fcbbd0()*1.70864);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fc9830() {
   return (neuron0x1fcc5a0()*-1.62436);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca1c0() {
   return (neuron0x1fccf70()*-0.258482);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fca200() {
   return (neuron0x1fcd940()*0.512991);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcab90() {
   return (neuron0x1fce310()*-0.451078);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fcabd0() {
   return (neuron0x1fcece0()*0.145422);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd0b0() {
   return (neuron0x1fcf6b0()*-1.46909);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdd0f0() {
   return (neuron0x1fd0080()*1.75558);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdda80() {
   return (neuron0x1fc6110()*1.43255);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fddac0() {
   return (neuron0x1fd2c60()*-3.74488);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde450() {
   return (neuron0x1fd3630()*0.178286);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fde490() {
   return (neuron0x1fd4000()*0.181689);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdee20() {
   return (neuron0x1fd49d0()*-1.24374);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdee60() {
   return (neuron0x1fd53a0()*-0.40349);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb9db0() {
   return (neuron0x1fd5d70()*-0.306138);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fb9df0() {
   return (neuron0x1fd6740()*1.80937);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce5c0() {
   return (neuron0x1fd7110()*0.226744);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fce600() {
   return (neuron0x1fd7cf0()*0.301064);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdf540() {
   return (neuron0x1fd86c0()*0.190329);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdf580() {
   return (neuron0x1fc9540()*-0.45797);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdf5c0() {
   return (neuron0x1fc9f10()*-1.82717);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fdf600() {
   return (neuron0x1fca8e0()*-0.224271);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe64b0() {
   return (neuron0x1fdcf20()*1.59079);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe64f0() {
   return (neuron0x1fdd7d0()*2.90161);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6530() {
   return (neuron0x1fde1a0()*-1.84207);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6570() {
   return (neuron0x1fdeb70()*3.76804);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe68f0() {
   return (neuron0x1fb9b00()*0.00621604);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6930() {
   return (neuron0x1fba340()*0.790996);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6970() {
   return (neuron0x1fbae20()*-0.189589);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe69b0() {
   return (neuron0x1fba8c0()*-1.07108);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe69f0() {
   return (neuron0x1fbbc00()*1.7754);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6a30() {
   return (neuron0x1fbd6d0()*-0.0229569);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6a70() {
   return (neuron0x1fbe4a0()*0.340604);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6ab0() {
   return (neuron0x1fbee70()*-2.32655);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6af0() {
   return (neuron0x1fbf840()*0.651478);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6b30() {
   return (neuron0x1fc0320()*-0.191295);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6b70() {
   return (neuron0x1fc0cf0()*0.438342);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6bb0() {
   return (neuron0x1fbddd0()*-0.00216094);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6bf0() {
   return (neuron0x1fc28a0()*0.0446569);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6c30() {
   return (neuron0x1fc3270()*0.16796);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6c70() {
   return (neuron0x1fc3c40()*0.0285642);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6cb0() {
   return (neuron0x1fc4610()*0.0229349);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6740() {
   return (neuron0x1fc6420()*2.85867);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6780() {
   return (neuron0x1fc6700()*-0.372803);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6e00() {
   return (neuron0x1fc70d0()*2.07517);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6e40() {
   return (neuron0x1fc7aa0()*-0.167063);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6e80() {
   return (neuron0x1fc8470()*-0.373568);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6ec0() {
   return (neuron0x1fc8e40()*1.52846);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6f00() {
   return (neuron0x1fc1990()*-0.0141901);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6f40() {
   return (neuron0x1fc2360()*-0.907998);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6f80() {
   return (neuron0x1fcbbd0()*-0.053401);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6fc0() {
   return (neuron0x1fcc5a0()*-0.0023146);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7000() {
   return (neuron0x1fccf70()*-0.0524351);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7040() {
   return (neuron0x1fcd940()*-0.0276645);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7080() {
   return (neuron0x1fce310()*-0.218647);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe70c0() {
   return (neuron0x1fcece0()*0.0309912);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7100() {
   return (neuron0x1fcf6b0()*-0.0269678);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7140() {
   return (neuron0x1fd0080()*1.67375);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6cf0() {
   return (neuron0x1fc6110()*0.419849);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6d30() {
   return (neuron0x1fd2c60()*8.04877);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6d70() {
   return (neuron0x1fd3630()*-0.320757);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe6db0() {
   return (neuron0x1fd4000()*-0.0292541);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7390() {
   return (neuron0x1fd49d0()*-0.0274711);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe73d0() {
   return (neuron0x1fd53a0()*0.0519434);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7410() {
   return (neuron0x1fd5d70()*-0.0647834);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7450() {
   return (neuron0x1fd6740()*0.433302);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7490() {
   return (neuron0x1fd7110()*-0.221466);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe74d0() {
   return (neuron0x1fd7cf0()*-0.0345379);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7510() {
   return (neuron0x1fd86c0()*-0.298951);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7550() {
   return (neuron0x1fc9540()*-2.08917);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7590() {
   return (neuron0x1fc9f10()*-0.135086);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe75d0() {
   return (neuron0x1fca8e0()*-0.0137704);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7610() {
   return (neuron0x1fdcf20()*-1.62572);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7650() {
   return (neuron0x1fdd7d0()*-8.81552);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7690() {
   return (neuron0x1fde1a0()*-0.187322);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe76d0() {
   return (neuron0x1fdeb70()*0.0689849);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7a50() {
   return (neuron0x1fb9b00()*-0.0326823);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7a90() {
   return (neuron0x1fba340()*3.69343);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7ad0() {
   return (neuron0x1fbae20()*-0.408242);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7b10() {
   return (neuron0x1fba8c0()*-2.01513);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7b50() {
   return (neuron0x1fbbc00()*2.2125);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7b90() {
   return (neuron0x1fbd6d0()*-0.0139784);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7bd0() {
   return (neuron0x1fbe4a0()*1.09967);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7c10() {
   return (neuron0x1fbee70()*-2.56764);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7c50() {
   return (neuron0x1fbf840()*0.478531);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7c90() {
   return (neuron0x1fc0320()*-0.574087);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7cd0() {
   return (neuron0x1fc0cf0()*0.20268);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7d10() {
   return (neuron0x1fbddd0()*-0.137532);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7d50() {
   return (neuron0x1fc28a0()*-3.64355);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7d90() {
   return (neuron0x1fc3270()*0.646461);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7dd0() {
   return (neuron0x1fc3c40()*-0.00249351);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7e10() {
   return (neuron0x1fc4610()*-0.10149);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe78a0() {
   return (neuron0x1fc6420()*2.92665);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe78e0() {
   return (neuron0x1fc6700()*-0.835386);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7f60() {
   return (neuron0x1fc70d0()*-0.0510177);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7fa0() {
   return (neuron0x1fc7aa0()*-0.898219);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7fe0() {
   return (neuron0x1fc8470()*-0.672137);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8020() {
   return (neuron0x1fc8e40()*1.96138);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8060() {
   return (neuron0x1fc1990()*-1.05084);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe80a0() {
   return (neuron0x1fc2360()*-1.40418);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe80e0() {
   return (neuron0x1fcbbd0()*1.3121);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8120() {
   return (neuron0x1fcc5a0()*-0.804451);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8160() {
   return (neuron0x1fccf70()*-0.139274);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe81a0() {
   return (neuron0x1fcd940()*-0.181115);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe81e0() {
   return (neuron0x1fce310()*-1.29444);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8220() {
   return (neuron0x1fcece0()*0.0231712);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8260() {
   return (neuron0x1fcf6b0()*-0.940195);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe82a0() {
   return (neuron0x1fd0080()*1.91966);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7e50() {
   return (neuron0x1fc6110()*1.35946);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7e90() {
   return (neuron0x1fd2c60()*1.41867);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7ed0() {
   return (neuron0x1fd3630()*-0.997328);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe7f10() {
   return (neuron0x1fd4000()*0.062953);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe84f0() {
   return (neuron0x1fd49d0()*0.135008);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8530() {
   return (neuron0x1fd53a0()*0.103036);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8570() {
   return (neuron0x1fd5d70()*-0.198579);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe85b0() {
   return (neuron0x1fd6740()*2.33212);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe85f0() {
   return (neuron0x1fd7110()*-0.587557);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8630() {
   return (neuron0x1fd7cf0()*-0.0099589);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8670() {
   return (neuron0x1fd86c0()*2.4998);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe86b0() {
   return (neuron0x1fc9540()*1.38531);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe86f0() {
   return (neuron0x1fc9f10()*-1.89013);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8730() {
   return (neuron0x1fca8e0()*-0.207524);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8770() {
   return (neuron0x1fdcf20()*-0.196373);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe87b0() {
   return (neuron0x1fdd7d0()*-1.13893);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe87f0() {
   return (neuron0x1fde1a0()*-0.984051);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8830() {
   return (neuron0x1fdeb70()*3.11603);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8bb0() {
   return (neuron0x1fb9b00()*-0.209334);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8bf0() {
   return (neuron0x1fba340()*-0.674779);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8c30() {
   return (neuron0x1fbae20()*-0.137273);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8c70() {
   return (neuron0x1fba8c0()*0.0700779);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8cb0() {
   return (neuron0x1fbbc00()*-0.3899);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8cf0() {
   return (neuron0x1fbd6d0()*-0.127685);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8d30() {
   return (neuron0x1fbe4a0()*-0.423329);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8d70() {
   return (neuron0x1fbee70()*-0.391073);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8db0() {
   return (neuron0x1fbf840()*-0.370044);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8df0() {
   return (neuron0x1fc0320()*-0.0139597);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8e30() {
   return (neuron0x1fc0cf0()*-0.0461094);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8e70() {
   return (neuron0x1fbddd0()*-0.661799);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8eb0() {
   return (neuron0x1fc28a0()*-0.21976);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8ef0() {
   return (neuron0x1fc3270()*-0.375611);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8f30() {
   return (neuron0x1fc3c40()*-0.6161);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8f70() {
   return (neuron0x1fc4610()*0.0575557);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8a00() {
   return (neuron0x1fc6420()*-0.157246);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8a40() {
   return (neuron0x1fc6700()*-0.481512);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe90c0() {
   return (neuron0x1fc70d0()*-0.476903);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9100() {
   return (neuron0x1fc7aa0()*0.0797608);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9140() {
   return (neuron0x1fc8470()*-0.0477396);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9180() {
   return (neuron0x1fc8e40()*0.25749);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe91c0() {
   return (neuron0x1fc1990()*-0.278362);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9200() {
   return (neuron0x1fc2360()*-0.359792);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9240() {
   return (neuron0x1fcbbd0()*-0.225184);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9280() {
   return (neuron0x1fcc5a0()*-0.164555);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe92c0() {
   return (neuron0x1fccf70()*-0.569342);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9300() {
   return (neuron0x1fcd940()*0.341357);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9340() {
   return (neuron0x1fce310()*0.278454);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9380() {
   return (neuron0x1fcece0()*-0.101824);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe93c0() {
   return (neuron0x1fcf6b0()*-0.159388);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9400() {
   return (neuron0x1fd0080()*0.248805);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8fb0() {
   return (neuron0x1fc6110()*-0.570514);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe8ff0() {
   return (neuron0x1fd2c60()*0.0835144);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9030() {
   return (neuron0x1fd3630()*-0.315334);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9070() {
   return (neuron0x1fd4000()*-0.224945);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9650() {
   return (neuron0x1fd49d0()*-0.627057);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9690() {
   return (neuron0x1fd53a0()*-0.481417);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe96d0() {
   return (neuron0x1fd5d70()*0.162348);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9710() {
   return (neuron0x1fd6740()*0.039015);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9750() {
   return (neuron0x1fd7110()*-0.462992);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9790() {
   return (neuron0x1fd7cf0()*-0.299087);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe97d0() {
   return (neuron0x1fd86c0()*-0.223391);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9810() {
   return (neuron0x1fc9540()*0.178776);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9850() {
   return (neuron0x1fc9f10()*0.0351394);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9890() {
   return (neuron0x1fca8e0()*-0.598924);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe98d0() {
   return (neuron0x1fdcf20()*-0.0763252);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9910() {
   return (neuron0x1fdd7d0()*-0.223806);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9950() {
   return (neuron0x1fde1a0()*-0.120388);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9990() {
   return (neuron0x1fdeb70()*0.014478);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9bf0() {
   return (neuron0x1fe5d70()*-5.27109);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9c30() {
   return (neuron0x1fe6110()*-5.06335);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9c70() {
   return (neuron0x1fe65b0()*-4.58589);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9cb0() {
   return (neuron0x1fe7710()*-4.12477);
}

double NNfunction_ns_chiPlus1_sL::synapse0x1fe9cf0() {
   return (neuron0x1fe8870()*-0.544489);
}

