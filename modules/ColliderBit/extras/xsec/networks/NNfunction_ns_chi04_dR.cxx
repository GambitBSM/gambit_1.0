#include "NNfunction_ns_chi04_dR.h"
#include <cmath>

double NNfunction_ns_chi04_dR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.2736)/14.952;
   input1 = (in1 - 19.6443)/658.854;
   input2 = (in2 - 196.988)/224.294;
   input3 = (in3 - 68.0035)/741.431;
   input4 = (in4 - 866.822)/862.413;
   input5 = (in5 - 780.269)/883.459;
   input6 = (in6 - 781.321)/881.993;
   input7 = (in7 - 774.625)/853.479;
   input8 = (in8 - 763.794)/904.8;
   input9 = (in9 - 752.163)/894.72;
   input10 = (in10 - 784.094)/896.276;
   input11 = (in11 - 646.639)/781.261;
   input12 = (in12 - 640.813)/768.52;
   input13 = (in13 - 455.509)/454.87;
   input14 = (in14 - 612.151)/689.075;
   input15 = (in15 - 618.632)/708.1;
   input16 = (in16 - 456.901)/489.172;
   input17 = (in17 - 238.961)/182.391;
   input18 = (in18 - 671.123)/809.696;
   input19 = (in19 - 669.773)/775.557;
   input20 = (in20 - -46.9182)/435.005;
   input21 = (in21 - -67.0672)/1019.47;
   input22 = (in22 - -6.72389)/1048.73;
   input23 = (in23 - -19.8576)/249.38;
   switch(index) {
     case 0:
         return neuron0x30426a0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi04_dR::Value(int index, double* input) {
   input0 = (input[0] - 23.2736)/14.952;
   input1 = (input[1] - 19.6443)/658.854;
   input2 = (input[2] - 196.988)/224.294;
   input3 = (input[3] - 68.0035)/741.431;
   input4 = (input[4] - 866.822)/862.413;
   input5 = (input[5] - 780.269)/883.459;
   input6 = (input[6] - 781.321)/881.993;
   input7 = (input[7] - 774.625)/853.479;
   input8 = (input[8] - 763.794)/904.8;
   input9 = (input[9] - 752.163)/894.72;
   input10 = (input[10] - 784.094)/896.276;
   input11 = (input[11] - 646.639)/781.261;
   input12 = (input[12] - 640.813)/768.52;
   input13 = (input[13] - 455.509)/454.87;
   input14 = (input[14] - 612.151)/689.075;
   input15 = (input[15] - 618.632)/708.1;
   input16 = (input[16] - 456.901)/489.172;
   input17 = (input[17] - 238.961)/182.391;
   input18 = (input[18] - 671.123)/809.696;
   input19 = (input[19] - 669.773)/775.557;
   input20 = (input[20] - -46.9182)/435.005;
   input21 = (input[21] - -67.0672)/1019.47;
   input22 = (input[22] - -6.72389)/1048.73;
   input23 = (input[23] - -19.8576)/249.38;
   switch(index) {
     case 0:
         return neuron0x30426a0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi04_dR::neuron0x300e790() {
   return input0;
}

double NNfunction_ns_chi04_dR::neuron0x300ead0() {
   return input1;
}

double NNfunction_ns_chi04_dR::neuron0x300ee10() {
   return input2;
}

double NNfunction_ns_chi04_dR::neuron0x300f150() {
   return input3;
}

double NNfunction_ns_chi04_dR::neuron0x300f490() {
   return input4;
}

double NNfunction_ns_chi04_dR::neuron0x300f7d0() {
   return input5;
}

double NNfunction_ns_chi04_dR::neuron0x300fb10() {
   return input6;
}

double NNfunction_ns_chi04_dR::neuron0x300fe50() {
   return input7;
}

double NNfunction_ns_chi04_dR::neuron0x3010190() {
   return input8;
}

double NNfunction_ns_chi04_dR::neuron0x30104d0() {
   return input9;
}

double NNfunction_ns_chi04_dR::neuron0x3010810() {
   return input10;
}

double NNfunction_ns_chi04_dR::neuron0x3010b50() {
   return input11;
}

double NNfunction_ns_chi04_dR::neuron0x3010e90() {
   return input12;
}

double NNfunction_ns_chi04_dR::neuron0x30111d0() {
   return input13;
}

double NNfunction_ns_chi04_dR::neuron0x3011510() {
   return input14;
}

double NNfunction_ns_chi04_dR::neuron0x3011850() {
   return input15;
}

double NNfunction_ns_chi04_dR::neuron0x3011b90() {
   return input16;
}

double NNfunction_ns_chi04_dR::neuron0x30120f0() {
   return input17;
}

double NNfunction_ns_chi04_dR::neuron0x3012310() {
   return input18;
}

double NNfunction_ns_chi04_dR::neuron0x3012650() {
   return input19;
}

double NNfunction_ns_chi04_dR::neuron0x3012990() {
   return input20;
}

double NNfunction_ns_chi04_dR::neuron0x3012cd0() {
   return input21;
}

double NNfunction_ns_chi04_dR::neuron0x3013010() {
   return input22;
}

double NNfunction_ns_chi04_dR::neuron0x3013350() {
   return input23;
}

double NNfunction_ns_chi04_dR::input0x30137c0() {
   double input = -0.451018;
   input += synapse0x300e650();
   input += synapse0x300e690();
   input += synapse0x3013a70();
   input += synapse0x3013ab0();
   input += synapse0x3013af0();
   input += synapse0x3013b30();
   input += synapse0x3013b70();
   input += synapse0x3013bb0();
   input += synapse0x3013bf0();
   input += synapse0x3013c30();
   input += synapse0x3013c70();
   input += synapse0x3013cb0();
   input += synapse0x3013cf0();
   input += synapse0x3013d30();
   input += synapse0x3013d70();
   input += synapse0x3013db0();
   input += synapse0x300e5c0();
   input += synapse0x300e600();
   input += synapse0x2dc9930();
   input += synapse0x2dc9970();
   input += synapse0x3014010();
   input += synapse0x3014050();
   input += synapse0x3014090();
   input += synapse0x30140d0();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x30137c0() {
   double input = input0x30137c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3014110() {
   double input = 0.891463;
   input += synapse0x3014450();
   input += synapse0x3014490();
   input += synapse0x30144d0();
   input += synapse0x3014510();
   input += synapse0x3014550();
   input += synapse0x3014590();
   input += synapse0x30145d0();
   input += synapse0x3014610();
   input += synapse0x3014650();
   input += synapse0x3013f00();
   input += synapse0x3013f40();
   input += synapse0x3013f80();
   input += synapse0x3013fc0();
   input += synapse0x30148a0();
   input += synapse0x30148e0();
   input += synapse0x3014920();
   input += synapse0x30142a0();
   input += synapse0x30142e0();
   input += synapse0x3014a70();
   input += synapse0x3014ab0();
   input += synapse0x3014af0();
   input += synapse0x3014b30();
   input += synapse0x3014b70();
   input += synapse0x3014bb0();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3014110() {
   double input = input0x3014110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3014bf0() {
   double input = -0.368344;
   input += synapse0x3014f30();
   input += synapse0x3014f70();
   input += synapse0x3014fb0();
   input += synapse0x3014ff0();
   input += synapse0x3015030();
   input += synapse0x3015070();
   input += synapse0x30150b0();
   input += synapse0x30150f0();
   input += synapse0x3015130();
   input += synapse0x3015170();
   input += synapse0x30151b0();
   input += synapse0x30151f0();
   input += synapse0x3015230();
   input += synapse0x3015270();
   input += synapse0x30152b0();
   input += synapse0x30152f0();
   input += synapse0x3014d80();
   input += synapse0x3014dc0();
   input += synapse0x2dca020();
   input += synapse0x2dd78f0();
   input += synapse0x2dd7930();
   input += synapse0x2ffd820();
   input += synapse0x2ffd860();
   input += synapse0x2ffd8a0();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3014bf0() {
   double input = input0x3014bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3014690() {
   double input = -0.909241;
   input += synapse0x2dd8170();
   input += synapse0x3014820();
   input += synapse0x3014860();
   input += synapse0x3015440();
   input += synapse0x3015480();
   input += synapse0x30154c0();
   input += synapse0x3015500();
   input += synapse0x3015540();
   input += synapse0x3015580();
   input += synapse0x30155c0();
   input += synapse0x3015600();
   input += synapse0x3015640();
   input += synapse0x3015680();
   input += synapse0x30156c0();
   input += synapse0x3015700();
   input += synapse0x3015740();
   input += synapse0x300e6d0();
   input += synapse0x300e710();
   input += synapse0x300e750();
   input += synapse0x3015890();
   input += synapse0x30158d0();
   input += synapse0x3015910();
   input += synapse0x3015950();
   input += synapse0x3015990();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3014690() {
   double input = input0x3014690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x30159d0() {
   double input = -0.141742;
   input += synapse0x3015d10();
   input += synapse0x3015d50();
   input += synapse0x3015d90();
   input += synapse0x3015dd0();
   input += synapse0x3015e10();
   input += synapse0x3015e50();
   input += synapse0x3015e90();
   input += synapse0x3015ed0();
   input += synapse0x3015f10();
   input += synapse0x3015f50();
   input += synapse0x3015f90();
   input += synapse0x3015fd0();
   input += synapse0x3016010();
   input += synapse0x3016050();
   input += synapse0x3016090();
   input += synapse0x30160d0();
   input += synapse0x3015b60();
   input += synapse0x3015ba0();
   input += synapse0x3016220();
   input += synapse0x3016260();
   input += synapse0x30162a0();
   input += synapse0x30162e0();
   input += synapse0x3016320();
   input += synapse0x3016360();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x30159d0() {
   double input = input0x30159d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x30163a0() {
   double input = 0.679958;
   input += synapse0x30166e0();
   input += synapse0x3016720();
   input += synapse0x3016760();
   input += synapse0x30167a0();
   input += synapse0x30167e0();
   input += synapse0x3016820();
   input += synapse0x3016860();
   input += synapse0x30168a0();
   input += synapse0x30168e0();
   input += synapse0x2dd7c40();
   input += synapse0x2dd7c80();
   input += synapse0x2dd7cc0();
   input += synapse0x2dd7d00();
   input += synapse0x2dd7d40();
   input += synapse0x2dd7d80();
   input += synapse0x2dd7dc0();
   input += synapse0x3016530();
   input += synapse0x3016570();
   input += synapse0x2dd7f10();
   input += synapse0x2dd7f50();
   input += synapse0x2dd7f90();
   input += synapse0x2dd7fd0();
   input += synapse0x2dd8010();
   input += synapse0x3017130();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x30163a0() {
   double input = input0x30163a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3017170() {
   double input = 0.244421;
   input += synapse0x30174b0();
   input += synapse0x30174f0();
   input += synapse0x3017530();
   input += synapse0x3017570();
   input += synapse0x30175b0();
   input += synapse0x30175f0();
   input += synapse0x3017630();
   input += synapse0x3017670();
   input += synapse0x30176b0();
   input += synapse0x30176f0();
   input += synapse0x3017730();
   input += synapse0x3017770();
   input += synapse0x30177b0();
   input += synapse0x30177f0();
   input += synapse0x3017830();
   input += synapse0x3017870();
   input += synapse0x3017300();
   input += synapse0x3017340();
   input += synapse0x30179c0();
   input += synapse0x3017a00();
   input += synapse0x3017a40();
   input += synapse0x3017a80();
   input += synapse0x3017ac0();
   input += synapse0x3017b00();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3017170() {
   double input = input0x3017170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3017b40() {
   double input = -0.822177;
   input += synapse0x3017e80();
   input += synapse0x3017ec0();
   input += synapse0x3017f00();
   input += synapse0x3017f40();
   input += synapse0x3017f80();
   input += synapse0x3017fc0();
   input += synapse0x3018000();
   input += synapse0x3018040();
   input += synapse0x3018080();
   input += synapse0x30180c0();
   input += synapse0x3018100();
   input += synapse0x3018140();
   input += synapse0x3018180();
   input += synapse0x30181c0();
   input += synapse0x3018200();
   input += synapse0x3018240();
   input += synapse0x3017cd0();
   input += synapse0x3017d10();
   input += synapse0x3018390();
   input += synapse0x30183d0();
   input += synapse0x3018410();
   input += synapse0x3018450();
   input += synapse0x3018490();
   input += synapse0x30184d0();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3017b40() {
   double input = input0x3017b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3018510() {
   double input = 0.259067;
   input += synapse0x3011fe0();
   input += synapse0x3012020();
   input += synapse0x3012060();
   input += synapse0x30120a0();
   input += synapse0x3018a60();
   input += synapse0x3018aa0();
   input += synapse0x3018ae0();
   input += synapse0x3018b20();
   input += synapse0x3018b60();
   input += synapse0x3018ba0();
   input += synapse0x3018be0();
   input += synapse0x3018c20();
   input += synapse0x3018c60();
   input += synapse0x3018ca0();
   input += synapse0x3018ce0();
   input += synapse0x3018d20();
   input += synapse0x30186a0();
   input += synapse0x30186e0();
   input += synapse0x3018e70();
   input += synapse0x3018eb0();
   input += synapse0x3018ef0();
   input += synapse0x3018f30();
   input += synapse0x3018f70();
   input += synapse0x3018fb0();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3018510() {
   double input = input0x3018510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3018ff0() {
   double input = -0.0668476;
   input += synapse0x3019330();
   input += synapse0x3019370();
   input += synapse0x30193b0();
   input += synapse0x30193f0();
   input += synapse0x3019430();
   input += synapse0x3019470();
   input += synapse0x30194b0();
   input += synapse0x30194f0();
   input += synapse0x3019530();
   input += synapse0x3019570();
   input += synapse0x30195b0();
   input += synapse0x30195f0();
   input += synapse0x3019630();
   input += synapse0x3019670();
   input += synapse0x30196b0();
   input += synapse0x30196f0();
   input += synapse0x3019180();
   input += synapse0x30191c0();
   input += synapse0x3019840();
   input += synapse0x3019880();
   input += synapse0x30198c0();
   input += synapse0x3019900();
   input += synapse0x3019940();
   input += synapse0x3019980();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3018ff0() {
   double input = input0x3018ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x30199c0() {
   double input = 1.12812;
   input += synapse0x3019d00();
   input += synapse0x3019d40();
   input += synapse0x3019d80();
   input += synapse0x3019dc0();
   input += synapse0x3019e00();
   input += synapse0x3019e40();
   input += synapse0x3019e80();
   input += synapse0x3019ec0();
   input += synapse0x3019f00();
   input += synapse0x3019f40();
   input += synapse0x3019f80();
   input += synapse0x3019fc0();
   input += synapse0x301a000();
   input += synapse0x301a040();
   input += synapse0x301a080();
   input += synapse0x301a0c0();
   input += synapse0x3019b50();
   input += synapse0x3019b90();
   input += synapse0x3016920();
   input += synapse0x3016960();
   input += synapse0x30169a0();
   input += synapse0x30169e0();
   input += synapse0x3016a20();
   input += synapse0x3016a60();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x30199c0() {
   double input = input0x30199c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3016aa0() {
   double input = 3.48544;
   input += synapse0x3016de0();
   input += synapse0x3016e20();
   input += synapse0x3016e60();
   input += synapse0x3016ea0();
   input += synapse0x3016ee0();
   input += synapse0x3016f20();
   input += synapse0x3016f60();
   input += synapse0x3016fa0();
   input += synapse0x3016fe0();
   input += synapse0x3017020();
   input += synapse0x3017060();
   input += synapse0x30170a0();
   input += synapse0x30170e0();
   input += synapse0x301b220();
   input += synapse0x301b260();
   input += synapse0x301b2a0();
   input += synapse0x3016c30();
   input += synapse0x3016c70();
   input += synapse0x301b3f0();
   input += synapse0x301b430();
   input += synapse0x301b470();
   input += synapse0x301b4b0();
   input += synapse0x301b4f0();
   input += synapse0x301b530();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3016aa0() {
   double input = input0x3016aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x301b570() {
   double input = -3.20716;
   input += synapse0x301b8b0();
   input += synapse0x301b8f0();
   input += synapse0x301b930();
   input += synapse0x301b970();
   input += synapse0x301b9b0();
   input += synapse0x301b9f0();
   input += synapse0x301ba30();
   input += synapse0x301ba70();
   input += synapse0x301bab0();
   input += synapse0x301baf0();
   input += synapse0x301bb30();
   input += synapse0x301bb70();
   input += synapse0x301bbb0();
   input += synapse0x301bbf0();
   input += synapse0x301bc30();
   input += synapse0x301bc70();
   input += synapse0x301b700();
   input += synapse0x301b740();
   input += synapse0x301bdc0();
   input += synapse0x301be00();
   input += synapse0x301be40();
   input += synapse0x301be80();
   input += synapse0x301bec0();
   input += synapse0x301bf00();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x301b570() {
   double input = input0x301b570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x301bf40() {
   double input = 0.556008;
   input += synapse0x301c280();
   input += synapse0x301c2c0();
   input += synapse0x301c300();
   input += synapse0x301c340();
   input += synapse0x301c380();
   input += synapse0x301c3c0();
   input += synapse0x301c400();
   input += synapse0x301c440();
   input += synapse0x301c480();
   input += synapse0x301c4c0();
   input += synapse0x301c500();
   input += synapse0x301c540();
   input += synapse0x301c580();
   input += synapse0x301c5c0();
   input += synapse0x301c600();
   input += synapse0x301c640();
   input += synapse0x301c0d0();
   input += synapse0x301c110();
   input += synapse0x301c790();
   input += synapse0x301c7d0();
   input += synapse0x301c810();
   input += synapse0x301c850();
   input += synapse0x301c890();
   input += synapse0x301c8d0();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x301bf40() {
   double input = input0x301bf40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x301c910() {
   double input = 0.373013;
   input += synapse0x301cc50();
   input += synapse0x301cc90();
   input += synapse0x301ccd0();
   input += synapse0x301cd10();
   input += synapse0x301cd50();
   input += synapse0x301cd90();
   input += synapse0x301cdd0();
   input += synapse0x301ce10();
   input += synapse0x301ce50();
   input += synapse0x301ce90();
   input += synapse0x301ced0();
   input += synapse0x301cf10();
   input += synapse0x301cf50();
   input += synapse0x301cf90();
   input += synapse0x301cfd0();
   input += synapse0x301d010();
   input += synapse0x301caa0();
   input += synapse0x301cae0();
   input += synapse0x301d160();
   input += synapse0x301d1a0();
   input += synapse0x301d1e0();
   input += synapse0x301d220();
   input += synapse0x301d260();
   input += synapse0x301d2a0();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x301c910() {
   double input = input0x301c910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x301d2e0() {
   double input = 1.71823;
   input += synapse0x301d620();
   input += synapse0x300e9b0();
   input += synapse0x300e9f0();
   input += synapse0x300ecf0();
   input += synapse0x300ed30();
   input += synapse0x300f030();
   input += synapse0x300f070();
   input += synapse0x300f370();
   input += synapse0x300f3b0();
   input += synapse0x300f6b0();
   input += synapse0x300f6f0();
   input += synapse0x300f9f0();
   input += synapse0x300fa30();
   input += synapse0x300fd30();
   input += synapse0x300fd70();
   input += synapse0x3010070();
   input += synapse0x30100b0();
   input += synapse0x30103b0();
   input += synapse0x30103f0();
   input += synapse0x30106f0();
   input += synapse0x3010730();
   input += synapse0x3010a30();
   input += synapse0x3010a70();
   input += synapse0x3010d70();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x301d2e0() {
   double input = input0x301d2e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x301f0f0() {
   double input = -1.97795;
   input += synapse0x3010db0();
   input += synapse0x3011a70();
   input += synapse0x3011ab0();
   input += synapse0x301d470();
   input += synapse0x301d4b0();
   input += synapse0x3011db0();
   input += synapse0x3011df0();
   input += synapse0x2dc9810();
   input += synapse0x2dc9850();
   input += synapse0x3012530();
   input += synapse0x3012570();
   input += synapse0x3012870();
   input += synapse0x30128b0();
   input += synapse0x3012bb0();
   input += synapse0x3012bf0();
   input += synapse0x3012ef0();
   input += synapse0x3012f30();
   input += synapse0x3013230();
   input += synapse0x3013270();
   input += synapse0x3013570();
   input += synapse0x30135b0();
   input += synapse0x30110b0();
   input += synapse0x30110f0();
   input += synapse0x301f390();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x301f0f0() {
   double input = input0x301f0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x301f3d0() {
   double input = -2.11944;
   input += synapse0x301f710();
   input += synapse0x301f750();
   input += synapse0x301f790();
   input += synapse0x301f7d0();
   input += synapse0x301f810();
   input += synapse0x301f850();
   input += synapse0x301f890();
   input += synapse0x301f8d0();
   input += synapse0x301f910();
   input += synapse0x301f950();
   input += synapse0x301f990();
   input += synapse0x301f9d0();
   input += synapse0x301fa10();
   input += synapse0x301fa50();
   input += synapse0x301fa90();
   input += synapse0x301fad0();
   input += synapse0x301f560();
   input += synapse0x301f5a0();
   input += synapse0x301fc20();
   input += synapse0x301fc60();
   input += synapse0x301fca0();
   input += synapse0x301fce0();
   input += synapse0x301fd20();
   input += synapse0x301fd60();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x301f3d0() {
   double input = input0x301f3d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x301fda0() {
   double input = 2.03607;
   input += synapse0x30200e0();
   input += synapse0x3020120();
   input += synapse0x3020160();
   input += synapse0x30201a0();
   input += synapse0x30201e0();
   input += synapse0x3020220();
   input += synapse0x3020260();
   input += synapse0x30202a0();
   input += synapse0x30202e0();
   input += synapse0x3020320();
   input += synapse0x3020360();
   input += synapse0x30203a0();
   input += synapse0x30203e0();
   input += synapse0x3020420();
   input += synapse0x3020460();
   input += synapse0x30204a0();
   input += synapse0x301ff30();
   input += synapse0x301ff70();
   input += synapse0x30205f0();
   input += synapse0x3020630();
   input += synapse0x3020670();
   input += synapse0x30206b0();
   input += synapse0x30206f0();
   input += synapse0x3020730();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x301fda0() {
   double input = input0x301fda0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3020770() {
   double input = -0.255518;
   input += synapse0x3020ab0();
   input += synapse0x3020af0();
   input += synapse0x3020b30();
   input += synapse0x3020b70();
   input += synapse0x3020bb0();
   input += synapse0x3020bf0();
   input += synapse0x3020c30();
   input += synapse0x3020c70();
   input += synapse0x3020cb0();
   input += synapse0x3020cf0();
   input += synapse0x3020d30();
   input += synapse0x3020d70();
   input += synapse0x3020db0();
   input += synapse0x3020df0();
   input += synapse0x3020e30();
   input += synapse0x3020e70();
   input += synapse0x3020900();
   input += synapse0x3020940();
   input += synapse0x3020fc0();
   input += synapse0x3021000();
   input += synapse0x3021040();
   input += synapse0x3021080();
   input += synapse0x30210c0();
   input += synapse0x3021100();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3020770() {
   double input = input0x3020770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3021140() {
   double input = -0.533005;
   input += synapse0x3021480();
   input += synapse0x30214c0();
   input += synapse0x3021500();
   input += synapse0x3021540();
   input += synapse0x3021580();
   input += synapse0x30215c0();
   input += synapse0x3021600();
   input += synapse0x3021640();
   input += synapse0x3021680();
   input += synapse0x30216c0();
   input += synapse0x3021700();
   input += synapse0x3021740();
   input += synapse0x3021780();
   input += synapse0x30217c0();
   input += synapse0x3021800();
   input += synapse0x3021840();
   input += synapse0x30212d0();
   input += synapse0x3021310();
   input += synapse0x3021990();
   input += synapse0x30219d0();
   input += synapse0x3021a10();
   input += synapse0x3021a50();
   input += synapse0x3021a90();
   input += synapse0x3021ad0();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3021140() {
   double input = input0x3021140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3021b10() {
   double input = -1.87587;
   input += synapse0x3021e50();
   input += synapse0x3021e90();
   input += synapse0x3021ed0();
   input += synapse0x3021f10();
   input += synapse0x3021f50();
   input += synapse0x3021f90();
   input += synapse0x3021fd0();
   input += synapse0x3022010();
   input += synapse0x3022050();
   input += synapse0x301a210();
   input += synapse0x301a250();
   input += synapse0x301a290();
   input += synapse0x301a2d0();
   input += synapse0x301a310();
   input += synapse0x301a350();
   input += synapse0x301a390();
   input += synapse0x3021ca0();
   input += synapse0x3021ce0();
   input += synapse0x301a4e0();
   input += synapse0x301a520();
   input += synapse0x301a560();
   input += synapse0x301a5a0();
   input += synapse0x301a5e0();
   input += synapse0x301a620();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3021b10() {
   double input = input0x3021b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x301a660() {
   double input = 1.65154;
   input += synapse0x301a9a0();
   input += synapse0x301a9e0();
   input += synapse0x301aa20();
   input += synapse0x301aa60();
   input += synapse0x301aaa0();
   input += synapse0x301aae0();
   input += synapse0x301ab20();
   input += synapse0x301ab60();
   input += synapse0x301aba0();
   input += synapse0x301abe0();
   input += synapse0x301ac20();
   input += synapse0x301ac60();
   input += synapse0x301aca0();
   input += synapse0x301ace0();
   input += synapse0x301ad20();
   input += synapse0x301ad60();
   input += synapse0x301a7f0();
   input += synapse0x301a830();
   input += synapse0x301aeb0();
   input += synapse0x301aef0();
   input += synapse0x301af30();
   input += synapse0x301af70();
   input += synapse0x301afb0();
   input += synapse0x301aff0();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x301a660() {
   double input = input0x301a660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x301b030() {
   double input = 2.05056;
   input += synapse0x301b1c0();
   input += synapse0x3024250();
   input += synapse0x3024290();
   input += synapse0x30242d0();
   input += synapse0x3024310();
   input += synapse0x3024350();
   input += synapse0x3024390();
   input += synapse0x30243d0();
   input += synapse0x3024410();
   input += synapse0x3024450();
   input += synapse0x3024490();
   input += synapse0x30244d0();
   input += synapse0x3024510();
   input += synapse0x3024550();
   input += synapse0x3024590();
   input += synapse0x30245d0();
   input += synapse0x30240a0();
   input += synapse0x30240e0();
   input += synapse0x3024720();
   input += synapse0x3024760();
   input += synapse0x30247a0();
   input += synapse0x30247e0();
   input += synapse0x3024820();
   input += synapse0x3024860();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x301b030() {
   double input = input0x301b030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x30248a0() {
   double input = -0.621826;
   input += synapse0x3024be0();
   input += synapse0x3024c20();
   input += synapse0x3024c60();
   input += synapse0x3024ca0();
   input += synapse0x3024ce0();
   input += synapse0x3024d20();
   input += synapse0x3024d60();
   input += synapse0x3024da0();
   input += synapse0x3024de0();
   input += synapse0x3024e20();
   input += synapse0x3024e60();
   input += synapse0x3024ea0();
   input += synapse0x3024ee0();
   input += synapse0x3024f20();
   input += synapse0x3024f60();
   input += synapse0x3024fa0();
   input += synapse0x3024a30();
   input += synapse0x3024a70();
   input += synapse0x30250f0();
   input += synapse0x3025130();
   input += synapse0x3025170();
   input += synapse0x30251b0();
   input += synapse0x30251f0();
   input += synapse0x3025230();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x30248a0() {
   double input = input0x30248a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3025270() {
   double input = 0.985979;
   input += synapse0x30255b0();
   input += synapse0x30255f0();
   input += synapse0x3025630();
   input += synapse0x3025670();
   input += synapse0x30256b0();
   input += synapse0x30256f0();
   input += synapse0x3025730();
   input += synapse0x3025770();
   input += synapse0x30257b0();
   input += synapse0x30257f0();
   input += synapse0x3025830();
   input += synapse0x3025870();
   input += synapse0x30258b0();
   input += synapse0x30258f0();
   input += synapse0x3025930();
   input += synapse0x3025970();
   input += synapse0x3025400();
   input += synapse0x3025440();
   input += synapse0x3025ac0();
   input += synapse0x3025b00();
   input += synapse0x3025b40();
   input += synapse0x3025b80();
   input += synapse0x3025bc0();
   input += synapse0x3025c00();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3025270() {
   double input = input0x3025270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3025c40() {
   double input = 0.0609116;
   input += synapse0x3025f80();
   input += synapse0x3025fc0();
   input += synapse0x3026000();
   input += synapse0x3026040();
   input += synapse0x3026080();
   input += synapse0x30260c0();
   input += synapse0x3026100();
   input += synapse0x3026140();
   input += synapse0x3026180();
   input += synapse0x30261c0();
   input += synapse0x3026200();
   input += synapse0x3026240();
   input += synapse0x3026280();
   input += synapse0x30262c0();
   input += synapse0x3026300();
   input += synapse0x3026340();
   input += synapse0x3025dd0();
   input += synapse0x3025e10();
   input += synapse0x3026490();
   input += synapse0x30264d0();
   input += synapse0x3026510();
   input += synapse0x3026550();
   input += synapse0x3026590();
   input += synapse0x30265d0();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3025c40() {
   double input = input0x3025c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3026610() {
   double input = 0.0852029;
   input += synapse0x3026950();
   input += synapse0x3026990();
   input += synapse0x30269d0();
   input += synapse0x3026a10();
   input += synapse0x3026a50();
   input += synapse0x3026a90();
   input += synapse0x3026ad0();
   input += synapse0x3026b10();
   input += synapse0x3026b50();
   input += synapse0x3026b90();
   input += synapse0x3026bd0();
   input += synapse0x3026c10();
   input += synapse0x3026c50();
   input += synapse0x3026c90();
   input += synapse0x3026cd0();
   input += synapse0x3026d10();
   input += synapse0x30267a0();
   input += synapse0x30267e0();
   input += synapse0x3026e60();
   input += synapse0x3026ea0();
   input += synapse0x3026ee0();
   input += synapse0x3026f20();
   input += synapse0x3026f60();
   input += synapse0x3026fa0();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3026610() {
   double input = input0x3026610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3026fe0() {
   double input = -1.68824;
   input += synapse0x3027320();
   input += synapse0x3027360();
   input += synapse0x30273a0();
   input += synapse0x30273e0();
   input += synapse0x3027420();
   input += synapse0x3027460();
   input += synapse0x30274a0();
   input += synapse0x30274e0();
   input += synapse0x3027520();
   input += synapse0x3027560();
   input += synapse0x30275a0();
   input += synapse0x30275e0();
   input += synapse0x3027620();
   input += synapse0x3027660();
   input += synapse0x30276a0();
   input += synapse0x30276e0();
   input += synapse0x3027170();
   input += synapse0x30271b0();
   input += synapse0x3027830();
   input += synapse0x3027870();
   input += synapse0x30278b0();
   input += synapse0x30278f0();
   input += synapse0x3027930();
   input += synapse0x3027970();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3026fe0() {
   double input = input0x3026fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x30279b0() {
   double input = 0.526827;
   input += synapse0x3027cf0();
   input += synapse0x3027d30();
   input += synapse0x3027d70();
   input += synapse0x3027db0();
   input += synapse0x3027df0();
   input += synapse0x3027e30();
   input += synapse0x3027e70();
   input += synapse0x3027eb0();
   input += synapse0x3027ef0();
   input += synapse0x3027f30();
   input += synapse0x3027f70();
   input += synapse0x3027fb0();
   input += synapse0x3027ff0();
   input += synapse0x3028030();
   input += synapse0x3028070();
   input += synapse0x30280b0();
   input += synapse0x3027b40();
   input += synapse0x3027b80();
   input += synapse0x3028200();
   input += synapse0x3028240();
   input += synapse0x3028280();
   input += synapse0x30282c0();
   input += synapse0x3028300();
   input += synapse0x3028340();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x30279b0() {
   double input = input0x30279b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3028380() {
   double input = 0.661221;
   input += synapse0x30286c0();
   input += synapse0x3028700();
   input += synapse0x3028740();
   input += synapse0x3028780();
   input += synapse0x30287c0();
   input += synapse0x3028800();
   input += synapse0x3028840();
   input += synapse0x3028880();
   input += synapse0x30288c0();
   input += synapse0x3028900();
   input += synapse0x3028940();
   input += synapse0x3028980();
   input += synapse0x30289c0();
   input += synapse0x3028a00();
   input += synapse0x3028a40();
   input += synapse0x3028a80();
   input += synapse0x3028510();
   input += synapse0x3028550();
   input += synapse0x3028bd0();
   input += synapse0x3028c10();
   input += synapse0x3028c50();
   input += synapse0x3028c90();
   input += synapse0x3028cd0();
   input += synapse0x3028d10();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3028380() {
   double input = input0x3028380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3028d50() {
   double input = -0.657559;
   input += synapse0x3029090();
   input += synapse0x301d660();
   input += synapse0x301d6a0();
   input += synapse0x301d6e0();
   input += synapse0x301d930();
   input += synapse0x301d970();
   input += synapse0x301d9b0();
   input += synapse0x301dc00();
   input += synapse0x301dc40();
   input += synapse0x301de90();
   input += synapse0x301ded0();
   input += synapse0x301df10();
   input += synapse0x301e160();
   input += synapse0x301e1a0();
   input += synapse0x301e3f0();
   input += synapse0x301e430();
   input += synapse0x3028ee0();
   input += synapse0x3028f20();
   input += synapse0x301e580();
   input += synapse0x301ea90();
   input += synapse0x301ead0();
   input += synapse0x301eb10();
   input += synapse0x301ed60();
   input += synapse0x301eda0();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3028d50() {
   double input = input0x3028d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x301ede0() {
   double input = 0.735705;
   input += synapse0x301e650();
   input += synapse0x301e690();
   input += synapse0x301e6d0();
   input += synapse0x301e710();
   input += synapse0x301f090();
   input += synapse0x302b3e0();
   input += synapse0x302b420();
   input += synapse0x302b460();
   input += synapse0x302b4a0();
   input += synapse0x302b4e0();
   input += synapse0x302b520();
   input += synapse0x302b560();
   input += synapse0x302b5a0();
   input += synapse0x302b5e0();
   input += synapse0x302b620();
   input += synapse0x302b660();
   input += synapse0x301ef70();
   input += synapse0x301efb0();
   input += synapse0x302b7b0();
   input += synapse0x302b7f0();
   input += synapse0x302b830();
   input += synapse0x302b870();
   input += synapse0x302b8b0();
   input += synapse0x302b8f0();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x301ede0() {
   double input = input0x301ede0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x302b930() {
   double input = 0.68058;
   input += synapse0x302bc70();
   input += synapse0x302bcb0();
   input += synapse0x302bcf0();
   input += synapse0x302bd30();
   input += synapse0x302bd70();
   input += synapse0x302bdb0();
   input += synapse0x302bdf0();
   input += synapse0x302be30();
   input += synapse0x302be70();
   input += synapse0x302beb0();
   input += synapse0x302bef0();
   input += synapse0x302bf30();
   input += synapse0x302bf70();
   input += synapse0x302bfb0();
   input += synapse0x302bff0();
   input += synapse0x302c030();
   input += synapse0x302bac0();
   input += synapse0x302bb00();
   input += synapse0x302c180();
   input += synapse0x302c1c0();
   input += synapse0x302c200();
   input += synapse0x302c240();
   input += synapse0x302c280();
   input += synapse0x302c2c0();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x302b930() {
   double input = input0x302b930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x302c300() {
   double input = -1.26237;
   input += synapse0x302c640();
   input += synapse0x302c680();
   input += synapse0x302c6c0();
   input += synapse0x302c700();
   input += synapse0x302c740();
   input += synapse0x302c780();
   input += synapse0x302c7c0();
   input += synapse0x302c800();
   input += synapse0x302c840();
   input += synapse0x302c880();
   input += synapse0x302c8c0();
   input += synapse0x302c900();
   input += synapse0x302c940();
   input += synapse0x302c980();
   input += synapse0x302c9c0();
   input += synapse0x302ca00();
   input += synapse0x302c490();
   input += synapse0x302c4d0();
   input += synapse0x302cb50();
   input += synapse0x302cb90();
   input += synapse0x302cbd0();
   input += synapse0x302cc10();
   input += synapse0x302cc50();
   input += synapse0x302cc90();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x302c300() {
   double input = input0x302c300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x302ccd0() {
   double input = -2.04534;
   input += synapse0x302d010();
   input += synapse0x302d050();
   input += synapse0x302d090();
   input += synapse0x302d0d0();
   input += synapse0x302d110();
   input += synapse0x302d150();
   input += synapse0x302d190();
   input += synapse0x302d1d0();
   input += synapse0x302d210();
   input += synapse0x302d250();
   input += synapse0x302d290();
   input += synapse0x302d2d0();
   input += synapse0x302d310();
   input += synapse0x302d350();
   input += synapse0x302d390();
   input += synapse0x302d3d0();
   input += synapse0x302ce60();
   input += synapse0x302cea0();
   input += synapse0x302d520();
   input += synapse0x302d560();
   input += synapse0x302d5a0();
   input += synapse0x302d5e0();
   input += synapse0x302d620();
   input += synapse0x302d660();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x302ccd0() {
   double input = input0x302ccd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x302d6a0() {
   double input = -0.498882;
   input += synapse0x302d9e0();
   input += synapse0x302da20();
   input += synapse0x302da60();
   input += synapse0x302daa0();
   input += synapse0x302dae0();
   input += synapse0x302db20();
   input += synapse0x302db60();
   input += synapse0x302dba0();
   input += synapse0x302dbe0();
   input += synapse0x302dc20();
   input += synapse0x302dc60();
   input += synapse0x302dca0();
   input += synapse0x302dce0();
   input += synapse0x302dd20();
   input += synapse0x302dd60();
   input += synapse0x302dda0();
   input += synapse0x302d830();
   input += synapse0x302d870();
   input += synapse0x302def0();
   input += synapse0x302df30();
   input += synapse0x302df70();
   input += synapse0x302dfb0();
   input += synapse0x302dff0();
   input += synapse0x302e030();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x302d6a0() {
   double input = input0x302d6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x302e070() {
   double input = 2.17708;
   input += synapse0x302e3b0();
   input += synapse0x302e3f0();
   input += synapse0x302e430();
   input += synapse0x302e470();
   input += synapse0x302e4b0();
   input += synapse0x302e4f0();
   input += synapse0x302e530();
   input += synapse0x302e570();
   input += synapse0x302e5b0();
   input += synapse0x302e5f0();
   input += synapse0x302e630();
   input += synapse0x302e670();
   input += synapse0x302e6b0();
   input += synapse0x302e6f0();
   input += synapse0x302e730();
   input += synapse0x302e770();
   input += synapse0x302e200();
   input += synapse0x302e240();
   input += synapse0x302e8c0();
   input += synapse0x302e900();
   input += synapse0x302e940();
   input += synapse0x302e980();
   input += synapse0x302e9c0();
   input += synapse0x302ea00();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x302e070() {
   double input = input0x302e070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x302ea40() {
   double input = 0.389161;
   input += synapse0x302ed80();
   input += synapse0x302edc0();
   input += synapse0x302ee00();
   input += synapse0x302ee40();
   input += synapse0x302ee80();
   input += synapse0x302eec0();
   input += synapse0x302ef00();
   input += synapse0x302ef40();
   input += synapse0x302ef80();
   input += synapse0x302efc0();
   input += synapse0x302f000();
   input += synapse0x302f040();
   input += synapse0x302f080();
   input += synapse0x302f0c0();
   input += synapse0x302f100();
   input += synapse0x302f140();
   input += synapse0x302ebd0();
   input += synapse0x302ec10();
   input += synapse0x302f290();
   input += synapse0x302f2d0();
   input += synapse0x302f310();
   input += synapse0x302f350();
   input += synapse0x302f390();
   input += synapse0x302f3d0();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x302ea40() {
   double input = input0x302ea40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x302f410() {
   double input = -0.343082;
   input += synapse0x302f750();
   input += synapse0x302f790();
   input += synapse0x302f7d0();
   input += synapse0x302f810();
   input += synapse0x302f850();
   input += synapse0x302f890();
   input += synapse0x302f8d0();
   input += synapse0x302f910();
   input += synapse0x302f950();
   input += synapse0x302f990();
   input += synapse0x302f9d0();
   input += synapse0x302fa10();
   input += synapse0x302fa50();
   input += synapse0x302fa90();
   input += synapse0x302fad0();
   input += synapse0x302fb10();
   input += synapse0x302f5a0();
   input += synapse0x302f5e0();
   input += synapse0x302fc60();
   input += synapse0x302fca0();
   input += synapse0x302fce0();
   input += synapse0x302fd20();
   input += synapse0x302fd60();
   input += synapse0x302fda0();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x302f410() {
   double input = input0x302f410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x302fde0() {
   double input = 1.29735;
   input += synapse0x3018850();
   input += synapse0x3018890();
   input += synapse0x30188d0();
   input += synapse0x3018910();
   input += synapse0x3018950();
   input += synapse0x3018990();
   input += synapse0x30189d0();
   input += synapse0x3018a10();
   input += synapse0x3030530();
   input += synapse0x3030570();
   input += synapse0x30305b0();
   input += synapse0x30305f0();
   input += synapse0x3030630();
   input += synapse0x3030670();
   input += synapse0x30306b0();
   input += synapse0x30306f0();
   input += synapse0x302ff70();
   input += synapse0x302ffb0();
   input += synapse0x3030840();
   input += synapse0x3030880();
   input += synapse0x30308c0();
   input += synapse0x3030900();
   input += synapse0x3030940();
   input += synapse0x3030980();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x302fde0() {
   double input = input0x302fde0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x30309c0() {
   double input = 3.27675;
   input += synapse0x3030d00();
   input += synapse0x3030d40();
   input += synapse0x3030d80();
   input += synapse0x3030dc0();
   input += synapse0x3030e00();
   input += synapse0x3030e40();
   input += synapse0x3030e80();
   input += synapse0x3030ec0();
   input += synapse0x3030f00();
   input += synapse0x3030f40();
   input += synapse0x3030f80();
   input += synapse0x3030fc0();
   input += synapse0x3031000();
   input += synapse0x3031040();
   input += synapse0x3031080();
   input += synapse0x30310c0();
   input += synapse0x3030b50();
   input += synapse0x3030b90();
   input += synapse0x3031210();
   input += synapse0x3031250();
   input += synapse0x3031290();
   input += synapse0x30312d0();
   input += synapse0x3031310();
   input += synapse0x3031350();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x30309c0() {
   double input = input0x30309c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3031390() {
   double input = -2.37074;
   input += synapse0x30316d0();
   input += synapse0x3031710();
   input += synapse0x3031750();
   input += synapse0x3031790();
   input += synapse0x30317d0();
   input += synapse0x3031810();
   input += synapse0x3031850();
   input += synapse0x3031890();
   input += synapse0x30318d0();
   input += synapse0x3031910();
   input += synapse0x3031950();
   input += synapse0x3031990();
   input += synapse0x30319d0();
   input += synapse0x3031a10();
   input += synapse0x3031a50();
   input += synapse0x3031a90();
   input += synapse0x3031520();
   input += synapse0x3031560();
   input += synapse0x3022090();
   input += synapse0x30220d0();
   input += synapse0x3022110();
   input += synapse0x3022150();
   input += synapse0x3022190();
   input += synapse0x30221d0();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3031390() {
   double input = input0x3031390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3022210() {
   double input = -0.446208;
   input += synapse0x3022550();
   input += synapse0x3022590();
   input += synapse0x30225d0();
   input += synapse0x3022610();
   input += synapse0x3022650();
   input += synapse0x3022690();
   input += synapse0x30226d0();
   input += synapse0x3022710();
   input += synapse0x3022750();
   input += synapse0x3022790();
   input += synapse0x30227d0();
   input += synapse0x3022810();
   input += synapse0x3022850();
   input += synapse0x3022890();
   input += synapse0x30228d0();
   input += synapse0x3022910();
   input += synapse0x30223a0();
   input += synapse0x30223e0();
   input += synapse0x3022a60();
   input += synapse0x3022aa0();
   input += synapse0x3022ae0();
   input += synapse0x3022b20();
   input += synapse0x3022b60();
   input += synapse0x3022ba0();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3022210() {
   double input = input0x3022210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3022be0() {
   double input = 0.126872;
   input += synapse0x3022f20();
   input += synapse0x3022f60();
   input += synapse0x3022fa0();
   input += synapse0x3022fe0();
   input += synapse0x3023020();
   input += synapse0x3023060();
   input += synapse0x30230a0();
   input += synapse0x30230e0();
   input += synapse0x3023120();
   input += synapse0x3023160();
   input += synapse0x30231a0();
   input += synapse0x30231e0();
   input += synapse0x3023220();
   input += synapse0x3023260();
   input += synapse0x30232a0();
   input += synapse0x30232e0();
   input += synapse0x3022d70();
   input += synapse0x3022db0();
   input += synapse0x3023430();
   input += synapse0x3023470();
   input += synapse0x30234b0();
   input += synapse0x30234f0();
   input += synapse0x3023530();
   input += synapse0x3023570();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3022be0() {
   double input = input0x3022be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x30235b0() {
   double input = 1.72337;
   input += synapse0x30238f0();
   input += synapse0x3023930();
   input += synapse0x3023970();
   input += synapse0x30239b0();
   input += synapse0x30239f0();
   input += synapse0x3023a30();
   input += synapse0x3023a70();
   input += synapse0x3023ab0();
   input += synapse0x3023af0();
   input += synapse0x3023b30();
   input += synapse0x3023b70();
   input += synapse0x3023bb0();
   input += synapse0x3023bf0();
   input += synapse0x3023c30();
   input += synapse0x3023c70();
   input += synapse0x3023cb0();
   input += synapse0x3023740();
   input += synapse0x3023780();
   input += synapse0x3023e00();
   input += synapse0x3023e40();
   input += synapse0x3023e80();
   input += synapse0x3023ec0();
   input += synapse0x3023f00();
   input += synapse0x3023f40();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x30235b0() {
   double input = input0x30235b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3035bf0() {
   double input = -0.775443;
   input += synapse0x3035e10();
   input += synapse0x3035e50();
   input += synapse0x3035e90();
   input += synapse0x3035ed0();
   input += synapse0x3035f10();
   input += synapse0x3035f50();
   input += synapse0x3035f90();
   input += synapse0x3035fd0();
   input += synapse0x3036010();
   input += synapse0x3036050();
   input += synapse0x3036090();
   input += synapse0x30360d0();
   input += synapse0x3036110();
   input += synapse0x3036150();
   input += synapse0x3036190();
   input += synapse0x30361d0();
   input += synapse0x3023f80();
   input += synapse0x3023fc0();
   input += synapse0x3036320();
   input += synapse0x3036360();
   input += synapse0x30363a0();
   input += synapse0x30363e0();
   input += synapse0x3036420();
   input += synapse0x3036460();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3035bf0() {
   double input = input0x3035bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x30364a0() {
   double input = 0.257383;
   input += synapse0x30367e0();
   input += synapse0x3036820();
   input += synapse0x3036860();
   input += synapse0x30368a0();
   input += synapse0x30368e0();
   input += synapse0x3036920();
   input += synapse0x3036960();
   input += synapse0x30369a0();
   input += synapse0x30369e0();
   input += synapse0x3036a20();
   input += synapse0x3036a60();
   input += synapse0x3036aa0();
   input += synapse0x3036ae0();
   input += synapse0x3036b20();
   input += synapse0x3036b60();
   input += synapse0x3036ba0();
   input += synapse0x3036630();
   input += synapse0x3036670();
   input += synapse0x3036cf0();
   input += synapse0x3036d30();
   input += synapse0x3036d70();
   input += synapse0x3036db0();
   input += synapse0x3036df0();
   input += synapse0x3036e30();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x30364a0() {
   double input = input0x30364a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3036e70() {
   double input = 1.48448;
   input += synapse0x30371b0();
   input += synapse0x30371f0();
   input += synapse0x3037230();
   input += synapse0x3037270();
   input += synapse0x30372b0();
   input += synapse0x30372f0();
   input += synapse0x3037330();
   input += synapse0x3037370();
   input += synapse0x30373b0();
   input += synapse0x30373f0();
   input += synapse0x3037430();
   input += synapse0x3037470();
   input += synapse0x30374b0();
   input += synapse0x30374f0();
   input += synapse0x3037530();
   input += synapse0x3037570();
   input += synapse0x3037000();
   input += synapse0x3037040();
   input += synapse0x30376c0();
   input += synapse0x3037700();
   input += synapse0x3037740();
   input += synapse0x3037780();
   input += synapse0x30377c0();
   input += synapse0x3037800();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3036e70() {
   double input = input0x3036e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3037840() {
   double input = 2.66187;
   input += synapse0x3037b80();
   input += synapse0x3037bc0();
   input += synapse0x3037c00();
   input += synapse0x3037c40();
   input += synapse0x3037c80();
   input += synapse0x3037cc0();
   input += synapse0x3037d00();
   input += synapse0x3037d40();
   input += synapse0x3037d80();
   input += synapse0x3037dc0();
   input += synapse0x3037e00();
   input += synapse0x3037e40();
   input += synapse0x3037e80();
   input += synapse0x3037ec0();
   input += synapse0x3037f00();
   input += synapse0x3037f40();
   input += synapse0x30379d0();
   input += synapse0x3037a10();
   input += synapse0x3038090();
   input += synapse0x30380d0();
   input += synapse0x3038110();
   input += synapse0x3038150();
   input += synapse0x3038190();
   input += synapse0x30381d0();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3037840() {
   double input = input0x3037840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x303ea40() {
   double input = -0.221568;
   input += synapse0x2dd80e0();
   input += synapse0x2dd8120();
   input += synapse0x3015c80();
   input += synapse0x3015cc0();
   input += synapse0x3016650();
   input += synapse0x3016690();
   input += synapse0x3017420();
   input += synapse0x3017460();
   input += synapse0x3017df0();
   input += synapse0x3017e30();
   input += synapse0x30187c0();
   input += synapse0x3018800();
   input += synapse0x30192a0();
   input += synapse0x30192e0();
   input += synapse0x3019c70();
   input += synapse0x3019cb0();
   input += synapse0x3016d50();
   input += synapse0x3016d90();
   input += synapse0x301b820();
   input += synapse0x301b860();
   input += synapse0x301c1f0();
   input += synapse0x301c230();
   input += synapse0x301cbc0();
   input += synapse0x301cc00();
   input += synapse0x301d590();
   input += synapse0x301d5d0();
   input += synapse0x3011730();
   input += synapse0x3011770();
   input += synapse0x301f680();
   input += synapse0x301f6c0();
   input += synapse0x3020050();
   input += synapse0x3020090();
   input += synapse0x3020a20();
   input += synapse0x3020a60();
   input += synapse0x30213f0();
   input += synapse0x3021430();
   input += synapse0x3021dc0();
   input += synapse0x3021e00();
   input += synapse0x301a910();
   input += synapse0x301a950();
   input += synapse0x30241c0();
   input += synapse0x3024200();
   input += synapse0x3024b50();
   input += synapse0x3024b90();
   input += synapse0x3025520();
   input += synapse0x3025560();
   input += synapse0x3025ef0();
   input += synapse0x3025f30();
   input += synapse0x30268c0();
   input += synapse0x3026900();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x303ea40() {
   double input = input0x303ea40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x303ede0() {
   double input = -0.740978;
   input += synapse0x3029000();
   input += synapse0x3029040();
   input += synapse0x301e5c0();
   input += synapse0x301e600();
   input += synapse0x302bbe0();
   input += synapse0x302bc20();
   input += synapse0x302c5b0();
   input += synapse0x302c5f0();
   input += synapse0x302cf80();
   input += synapse0x302cfc0();
   input += synapse0x302d950();
   input += synapse0x302d990();
   input += synapse0x302e320();
   input += synapse0x302e360();
   input += synapse0x302ecf0();
   input += synapse0x302ed30();
   input += synapse0x302f6c0();
   input += synapse0x302f700();
   input += synapse0x3030090();
   input += synapse0x30300d0();
   input += synapse0x3030c70();
   input += synapse0x3030cb0();
   input += synapse0x3031640();
   input += synapse0x3031680();
   input += synapse0x30224c0();
   input += synapse0x3022500();
   input += synapse0x3022e90();
   input += synapse0x3022ed0();
   input += synapse0x3023860();
   input += synapse0x30238a0();
   input += synapse0x3035d80();
   input += synapse0x3035dc0();
   input += synapse0x3036750();
   input += synapse0x3036790();
   input += synapse0x3037120();
   input += synapse0x3037160();
   input += synapse0x3037af0();
   input += synapse0x3037b30();
   input += synapse0x30139e0();
   input += synapse0x3013a20();
   input += synapse0x3027290();
   input += synapse0x30272d0();
   input += synapse0x3038210();
   input += synapse0x3038250();
   input += synapse0x3038290();
   input += synapse0x30382d0();
   input += synapse0x303f180();
   input += synapse0x303f1c0();
   input += synapse0x303f200();
   input += synapse0x303f240();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x303ede0() {
   double input = input0x303ede0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x303f280() {
   double input = 1.86197;
   input += synapse0x303f5c0();
   input += synapse0x303f600();
   input += synapse0x303f640();
   input += synapse0x303f680();
   input += synapse0x303f6c0();
   input += synapse0x303f700();
   input += synapse0x303f740();
   input += synapse0x303f780();
   input += synapse0x303f7c0();
   input += synapse0x303f800();
   input += synapse0x303f840();
   input += synapse0x303f880();
   input += synapse0x303f8c0();
   input += synapse0x303f900();
   input += synapse0x303f940();
   input += synapse0x303f980();
   input += synapse0x303f410();
   input += synapse0x303f450();
   input += synapse0x303fad0();
   input += synapse0x303fb10();
   input += synapse0x303fb50();
   input += synapse0x303fb90();
   input += synapse0x303fbd0();
   input += synapse0x303fc10();
   input += synapse0x303fc50();
   input += synapse0x303fc90();
   input += synapse0x303fcd0();
   input += synapse0x303fd10();
   input += synapse0x303fd50();
   input += synapse0x303fd90();
   input += synapse0x303fdd0();
   input += synapse0x303fe10();
   input += synapse0x303f9c0();
   input += synapse0x303fa00();
   input += synapse0x303fa40();
   input += synapse0x303fa80();
   input += synapse0x3040060();
   input += synapse0x30400a0();
   input += synapse0x30400e0();
   input += synapse0x3040120();
   input += synapse0x3040160();
   input += synapse0x30401a0();
   input += synapse0x30401e0();
   input += synapse0x3040220();
   input += synapse0x3040260();
   input += synapse0x30402a0();
   input += synapse0x30402e0();
   input += synapse0x3040320();
   input += synapse0x3040360();
   input += synapse0x30403a0();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x303f280() {
   double input = input0x303f280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x30403e0() {
   double input = -0.84359;
   input += synapse0x3040720();
   input += synapse0x3040760();
   input += synapse0x30407a0();
   input += synapse0x30407e0();
   input += synapse0x3040820();
   input += synapse0x3040860();
   input += synapse0x30408a0();
   input += synapse0x30408e0();
   input += synapse0x3040920();
   input += synapse0x3040960();
   input += synapse0x30409a0();
   input += synapse0x30409e0();
   input += synapse0x3040a20();
   input += synapse0x3040a60();
   input += synapse0x3040aa0();
   input += synapse0x3040ae0();
   input += synapse0x3040570();
   input += synapse0x30405b0();
   input += synapse0x3040c30();
   input += synapse0x3040c70();
   input += synapse0x3040cb0();
   input += synapse0x3040cf0();
   input += synapse0x3040d30();
   input += synapse0x3040d70();
   input += synapse0x3040db0();
   input += synapse0x3040df0();
   input += synapse0x3040e30();
   input += synapse0x3040e70();
   input += synapse0x3040eb0();
   input += synapse0x3040ef0();
   input += synapse0x3040f30();
   input += synapse0x3040f70();
   input += synapse0x3040b20();
   input += synapse0x3040b60();
   input += synapse0x3040ba0();
   input += synapse0x3040be0();
   input += synapse0x30411c0();
   input += synapse0x3041200();
   input += synapse0x3041240();
   input += synapse0x3041280();
   input += synapse0x30412c0();
   input += synapse0x3041300();
   input += synapse0x3041340();
   input += synapse0x3041380();
   input += synapse0x30413c0();
   input += synapse0x3041400();
   input += synapse0x3041440();
   input += synapse0x3041480();
   input += synapse0x30414c0();
   input += synapse0x3041500();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x30403e0() {
   double input = input0x30403e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x3041540() {
   double input = 0.465845;
   input += synapse0x3041880();
   input += synapse0x30418c0();
   input += synapse0x3041900();
   input += synapse0x3041940();
   input += synapse0x3041980();
   input += synapse0x30419c0();
   input += synapse0x3041a00();
   input += synapse0x3041a40();
   input += synapse0x3041a80();
   input += synapse0x3041ac0();
   input += synapse0x3041b00();
   input += synapse0x3041b40();
   input += synapse0x3041b80();
   input += synapse0x3041bc0();
   input += synapse0x3041c00();
   input += synapse0x3041c40();
   input += synapse0x30416d0();
   input += synapse0x3041710();
   input += synapse0x3041d90();
   input += synapse0x3041dd0();
   input += synapse0x3041e10();
   input += synapse0x3041e50();
   input += synapse0x3041e90();
   input += synapse0x3041ed0();
   input += synapse0x3041f10();
   input += synapse0x3041f50();
   input += synapse0x3041f90();
   input += synapse0x3041fd0();
   input += synapse0x3042010();
   input += synapse0x3042050();
   input += synapse0x3042090();
   input += synapse0x30420d0();
   input += synapse0x3041c80();
   input += synapse0x3041cc0();
   input += synapse0x3041d00();
   input += synapse0x3041d40();
   input += synapse0x3042320();
   input += synapse0x3042360();
   input += synapse0x30423a0();
   input += synapse0x30423e0();
   input += synapse0x3042420();
   input += synapse0x3042460();
   input += synapse0x30424a0();
   input += synapse0x30424e0();
   input += synapse0x3042520();
   input += synapse0x3042560();
   input += synapse0x30425a0();
   input += synapse0x30425e0();
   input += synapse0x3042620();
   input += synapse0x3042660();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x3041540() {
   double input = input0x3041540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_dR::input0x30426a0() {
   double input = 8.93976;
   input += synapse0x30428c0();
   input += synapse0x3042900();
   input += synapse0x3042940();
   input += synapse0x3042980();
   input += synapse0x30429c0();
   return input;
}

double NNfunction_ns_chi04_dR::neuron0x30426a0() {
   double input = input0x30426a0();
   return (input * 1)+0;
}

double NNfunction_ns_chi04_dR::synapse0x300e650() {
   return (neuron0x300e790()*-0.072504);
}

double NNfunction_ns_chi04_dR::synapse0x300e690() {
   return (neuron0x300ead0()*-0.456965);
}

double NNfunction_ns_chi04_dR::synapse0x3013a70() {
   return (neuron0x300ee10()*-0.0937899);
}

double NNfunction_ns_chi04_dR::synapse0x3013ab0() {
   return (neuron0x300f150()*0.417161);
}

double NNfunction_ns_chi04_dR::synapse0x3013af0() {
   return (neuron0x300f490()*-0.145705);
}

double NNfunction_ns_chi04_dR::synapse0x3013b30() {
   return (neuron0x300f7d0()*-0.772315);
}

double NNfunction_ns_chi04_dR::synapse0x3013b70() {
   return (neuron0x300fb10()*1.3196);
}

double NNfunction_ns_chi04_dR::synapse0x3013bb0() {
   return (neuron0x300fe50()*0.14665);
}

double NNfunction_ns_chi04_dR::synapse0x3013bf0() {
   return (neuron0x3010190()*-0.388054);
}

double NNfunction_ns_chi04_dR::synapse0x3013c30() {
   return (neuron0x30104d0()*-0.189909);
}

double NNfunction_ns_chi04_dR::synapse0x3013c70() {
   return (neuron0x3010810()*-0.0521817);
}

double NNfunction_ns_chi04_dR::synapse0x3013cb0() {
   return (neuron0x3010b50()*-1.0188);
}

double NNfunction_ns_chi04_dR::synapse0x3013cf0() {
   return (neuron0x3010e90()*1.59014);
}

double NNfunction_ns_chi04_dR::synapse0x3013d30() {
   return (neuron0x30111d0()*0.926972);
}

double NNfunction_ns_chi04_dR::synapse0x3013d70() {
   return (neuron0x3011510()*0.443807);
}

double NNfunction_ns_chi04_dR::synapse0x3013db0() {
   return (neuron0x3011850()*-0.194009);
}

double NNfunction_ns_chi04_dR::synapse0x300e5c0() {
   return (neuron0x3011b90()*1.37599);
}

double NNfunction_ns_chi04_dR::synapse0x300e600() {
   return (neuron0x30120f0()*0.47086);
}

double NNfunction_ns_chi04_dR::synapse0x2dc9930() {
   return (neuron0x3012310()*-0.0324861);
}

double NNfunction_ns_chi04_dR::synapse0x2dc9970() {
   return (neuron0x3012650()*-0.892994);
}

double NNfunction_ns_chi04_dR::synapse0x3014010() {
   return (neuron0x3012990()*0.692324);
}

double NNfunction_ns_chi04_dR::synapse0x3014050() {
   return (neuron0x3012cd0()*1.09541);
}

double NNfunction_ns_chi04_dR::synapse0x3014090() {
   return (neuron0x3013010()*-0.487467);
}

double NNfunction_ns_chi04_dR::synapse0x30140d0() {
   return (neuron0x3013350()*-0.414843);
}

double NNfunction_ns_chi04_dR::synapse0x3014450() {
   return (neuron0x300e790()*-0.00349899);
}

double NNfunction_ns_chi04_dR::synapse0x3014490() {
   return (neuron0x300ead0()*-6.0029);
}

double NNfunction_ns_chi04_dR::synapse0x30144d0() {
   return (neuron0x300ee10()*2.62058);
}

double NNfunction_ns_chi04_dR::synapse0x3014510() {
   return (neuron0x300f150()*-0.014859);
}

double NNfunction_ns_chi04_dR::synapse0x3014550() {
   return (neuron0x300f490()*0.0238573);
}

double NNfunction_ns_chi04_dR::synapse0x3014590() {
   return (neuron0x300f7d0()*0.0168685);
}

double NNfunction_ns_chi04_dR::synapse0x30145d0() {
   return (neuron0x300fb10()*-0.00055976);
}

double NNfunction_ns_chi04_dR::synapse0x3014610() {
   return (neuron0x300fe50()*-0.00311236);
}

double NNfunction_ns_chi04_dR::synapse0x3014650() {
   return (neuron0x3010190()*-0.0189002);
}

double NNfunction_ns_chi04_dR::synapse0x3013f00() {
   return (neuron0x30104d0()*0.00398123);
}

double NNfunction_ns_chi04_dR::synapse0x3013f40() {
   return (neuron0x3010810()*-0.0178753);
}

double NNfunction_ns_chi04_dR::synapse0x3013f80() {
   return (neuron0x3010b50()*0.00190774);
}

double NNfunction_ns_chi04_dR::synapse0x3013fc0() {
   return (neuron0x3010e90()*0.042207);
}

double NNfunction_ns_chi04_dR::synapse0x30148a0() {
   return (neuron0x30111d0()*-0.000316873);
}

double NNfunction_ns_chi04_dR::synapse0x30148e0() {
   return (neuron0x3011510()*-0.0216043);
}

double NNfunction_ns_chi04_dR::synapse0x3014920() {
   return (neuron0x3011850()*0.00204418);
}

double NNfunction_ns_chi04_dR::synapse0x30142a0() {
   return (neuron0x3011b90()*0.0364439);
}

double NNfunction_ns_chi04_dR::synapse0x30142e0() {
   return (neuron0x30120f0()*0.186494);
}

double NNfunction_ns_chi04_dR::synapse0x3014a70() {
   return (neuron0x3012310()*0.0154214);
}

double NNfunction_ns_chi04_dR::synapse0x3014ab0() {
   return (neuron0x3012650()*0.00809446);
}

double NNfunction_ns_chi04_dR::synapse0x3014af0() {
   return (neuron0x3012990()*-0.0129037);
}

double NNfunction_ns_chi04_dR::synapse0x3014b30() {
   return (neuron0x3012cd0()*-0.00992485);
}

double NNfunction_ns_chi04_dR::synapse0x3014b70() {
   return (neuron0x3013010()*-0.0029112);
}

double NNfunction_ns_chi04_dR::synapse0x3014bb0() {
   return (neuron0x3013350()*1.06894);
}

double NNfunction_ns_chi04_dR::synapse0x3014f30() {
   return (neuron0x300e790()*0.668761);
}

double NNfunction_ns_chi04_dR::synapse0x3014f70() {
   return (neuron0x300ead0()*2.14559);
}

double NNfunction_ns_chi04_dR::synapse0x3014fb0() {
   return (neuron0x300ee10()*0.66369);
}

double NNfunction_ns_chi04_dR::synapse0x3014ff0() {
   return (neuron0x300f150()*-0.54206);
}

double NNfunction_ns_chi04_dR::synapse0x3015030() {
   return (neuron0x300f490()*1.18001);
}

double NNfunction_ns_chi04_dR::synapse0x3015070() {
   return (neuron0x300f7d0()*-0.309971);
}

double NNfunction_ns_chi04_dR::synapse0x30150b0() {
   return (neuron0x300fb10()*0.269872);
}

double NNfunction_ns_chi04_dR::synapse0x30150f0() {
   return (neuron0x300fe50()*-0.04617);
}

double NNfunction_ns_chi04_dR::synapse0x3015130() {
   return (neuron0x3010190()*-0.424902);
}

double NNfunction_ns_chi04_dR::synapse0x3015170() {
   return (neuron0x30104d0()*-0.597598);
}

double NNfunction_ns_chi04_dR::synapse0x30151b0() {
   return (neuron0x3010810()*-0.414664);
}

double NNfunction_ns_chi04_dR::synapse0x30151f0() {
   return (neuron0x3010b50()*-0.254238);
}

double NNfunction_ns_chi04_dR::synapse0x3015230() {
   return (neuron0x3010e90()*-0.416051);
}

double NNfunction_ns_chi04_dR::synapse0x3015270() {
   return (neuron0x30111d0()*-0.791445);
}

double NNfunction_ns_chi04_dR::synapse0x30152b0() {
   return (neuron0x3011510()*-0.43287);
}

double NNfunction_ns_chi04_dR::synapse0x30152f0() {
   return (neuron0x3011850()*-0.52872);
}

double NNfunction_ns_chi04_dR::synapse0x3014d80() {
   return (neuron0x3011b90()*1.7174);
}

double NNfunction_ns_chi04_dR::synapse0x3014dc0() {
   return (neuron0x30120f0()*0.297734);
}

double NNfunction_ns_chi04_dR::synapse0x2dca020() {
   return (neuron0x3012310()*1.12408);
}

double NNfunction_ns_chi04_dR::synapse0x2dd78f0() {
   return (neuron0x3012650()*-0.179564);
}

double NNfunction_ns_chi04_dR::synapse0x2dd7930() {
   return (neuron0x3012990()*-0.872485);
}

double NNfunction_ns_chi04_dR::synapse0x2ffd820() {
   return (neuron0x3012cd0()*-0.76861);
}

double NNfunction_ns_chi04_dR::synapse0x2ffd860() {
   return (neuron0x3013010()*0.181557);
}

double NNfunction_ns_chi04_dR::synapse0x2ffd8a0() {
   return (neuron0x3013350()*-3.10285);
}

double NNfunction_ns_chi04_dR::synapse0x2dd8170() {
   return (neuron0x300e790()*-1.73711);
}

double NNfunction_ns_chi04_dR::synapse0x3014820() {
   return (neuron0x300ead0()*-0.411817);
}

double NNfunction_ns_chi04_dR::synapse0x3014860() {
   return (neuron0x300ee10()*-0.931415);
}

double NNfunction_ns_chi04_dR::synapse0x3015440() {
   return (neuron0x300f150()*-0.210685);
}

double NNfunction_ns_chi04_dR::synapse0x3015480() {
   return (neuron0x300f490()*1.54558);
}

double NNfunction_ns_chi04_dR::synapse0x30154c0() {
   return (neuron0x300f7d0()*-0.932759);
}

double NNfunction_ns_chi04_dR::synapse0x3015500() {
   return (neuron0x300fb10()*-0.255503);
}

double NNfunction_ns_chi04_dR::synapse0x3015540() {
   return (neuron0x300fe50()*-0.896859);
}

double NNfunction_ns_chi04_dR::synapse0x3015580() {
   return (neuron0x3010190()*-0.15027);
}

double NNfunction_ns_chi04_dR::synapse0x30155c0() {
   return (neuron0x30104d0()*0.955805);
}

double NNfunction_ns_chi04_dR::synapse0x3015600() {
   return (neuron0x3010810()*0.0517541);
}

double NNfunction_ns_chi04_dR::synapse0x3015640() {
   return (neuron0x3010b50()*-0.267334);
}

double NNfunction_ns_chi04_dR::synapse0x3015680() {
   return (neuron0x3010e90()*0.260236);
}

double NNfunction_ns_chi04_dR::synapse0x30156c0() {
   return (neuron0x30111d0()*0.914332);
}

double NNfunction_ns_chi04_dR::synapse0x3015700() {
   return (neuron0x3011510()*0.986853);
}

double NNfunction_ns_chi04_dR::synapse0x3015740() {
   return (neuron0x3011850()*1.03749);
}

double NNfunction_ns_chi04_dR::synapse0x300e6d0() {
   return (neuron0x3011b90()*-1.64931);
}

double NNfunction_ns_chi04_dR::synapse0x300e710() {
   return (neuron0x30120f0()*1.03307);
}

double NNfunction_ns_chi04_dR::synapse0x300e750() {
   return (neuron0x3012310()*-0.918376);
}

double NNfunction_ns_chi04_dR::synapse0x3015890() {
   return (neuron0x3012650()*-0.0875898);
}

double NNfunction_ns_chi04_dR::synapse0x30158d0() {
   return (neuron0x3012990()*2.00999);
}

double NNfunction_ns_chi04_dR::synapse0x3015910() {
   return (neuron0x3012cd0()*-0.625248);
}

double NNfunction_ns_chi04_dR::synapse0x3015950() {
   return (neuron0x3013010()*0.645297);
}

double NNfunction_ns_chi04_dR::synapse0x3015990() {
   return (neuron0x3013350()*-1.60451);
}

double NNfunction_ns_chi04_dR::synapse0x3015d10() {
   return (neuron0x300e790()*0.359273);
}

double NNfunction_ns_chi04_dR::synapse0x3015d50() {
   return (neuron0x300ead0()*-0.0175514);
}

double NNfunction_ns_chi04_dR::synapse0x3015d90() {
   return (neuron0x300ee10()*0.549489);
}

double NNfunction_ns_chi04_dR::synapse0x3015dd0() {
   return (neuron0x300f150()*0.278562);
}

double NNfunction_ns_chi04_dR::synapse0x3015e10() {
   return (neuron0x300f490()*-0.397589);
}

double NNfunction_ns_chi04_dR::synapse0x3015e50() {
   return (neuron0x300f7d0()*0.517174);
}

double NNfunction_ns_chi04_dR::synapse0x3015e90() {
   return (neuron0x300fb10()*1.27683);
}

double NNfunction_ns_chi04_dR::synapse0x3015ed0() {
   return (neuron0x300fe50()*0.791861);
}

double NNfunction_ns_chi04_dR::synapse0x3015f10() {
   return (neuron0x3010190()*-0.123845);
}

double NNfunction_ns_chi04_dR::synapse0x3015f50() {
   return (neuron0x30104d0()*0.0273717);
}

double NNfunction_ns_chi04_dR::synapse0x3015f90() {
   return (neuron0x3010810()*0.110489);
}

double NNfunction_ns_chi04_dR::synapse0x3015fd0() {
   return (neuron0x3010b50()*-0.264655);
}

double NNfunction_ns_chi04_dR::synapse0x3016010() {
   return (neuron0x3010e90()*0.489077);
}

double NNfunction_ns_chi04_dR::synapse0x3016050() {
   return (neuron0x30111d0()*0.0856538);
}

double NNfunction_ns_chi04_dR::synapse0x3016090() {
   return (neuron0x3011510()*-0.20452);
}

double NNfunction_ns_chi04_dR::synapse0x30160d0() {
   return (neuron0x3011850()*1.63004);
}

double NNfunction_ns_chi04_dR::synapse0x3015b60() {
   return (neuron0x3011b90()*-0.191331);
}

double NNfunction_ns_chi04_dR::synapse0x3015ba0() {
   return (neuron0x30120f0()*-1.02226);
}

double NNfunction_ns_chi04_dR::synapse0x3016220() {
   return (neuron0x3012310()*0.139548);
}

double NNfunction_ns_chi04_dR::synapse0x3016260() {
   return (neuron0x3012650()*-0.355278);
}

double NNfunction_ns_chi04_dR::synapse0x30162a0() {
   return (neuron0x3012990()*-0.151912);
}

double NNfunction_ns_chi04_dR::synapse0x30162e0() {
   return (neuron0x3012cd0()*0.287754);
}

double NNfunction_ns_chi04_dR::synapse0x3016320() {
   return (neuron0x3013010()*-0.125954);
}

double NNfunction_ns_chi04_dR::synapse0x3016360() {
   return (neuron0x3013350()*0.0582725);
}

double NNfunction_ns_chi04_dR::synapse0x30166e0() {
   return (neuron0x300e790()*-0.16569);
}

double NNfunction_ns_chi04_dR::synapse0x3016720() {
   return (neuron0x300ead0()*1.83589);
}

double NNfunction_ns_chi04_dR::synapse0x3016760() {
   return (neuron0x300ee10()*0.0699356);
}

double NNfunction_ns_chi04_dR::synapse0x30167a0() {
   return (neuron0x300f150()*-1.23115);
}

double NNfunction_ns_chi04_dR::synapse0x30167e0() {
   return (neuron0x300f490()*-0.956572);
}

double NNfunction_ns_chi04_dR::synapse0x3016820() {
   return (neuron0x300f7d0()*-0.201);
}

double NNfunction_ns_chi04_dR::synapse0x3016860() {
   return (neuron0x300fb10()*-0.0615612);
}

double NNfunction_ns_chi04_dR::synapse0x30168a0() {
   return (neuron0x300fe50()*0.230002);
}

double NNfunction_ns_chi04_dR::synapse0x30168e0() {
   return (neuron0x3010190()*0.026871);
}

double NNfunction_ns_chi04_dR::synapse0x2dd7c40() {
   return (neuron0x30104d0()*-0.0265024);
}

double NNfunction_ns_chi04_dR::synapse0x2dd7c80() {
   return (neuron0x3010810()*-0.269514);
}

double NNfunction_ns_chi04_dR::synapse0x2dd7cc0() {
   return (neuron0x3010b50()*-1.52963);
}

double NNfunction_ns_chi04_dR::synapse0x2dd7d00() {
   return (neuron0x3010e90()*1.442);
}

double NNfunction_ns_chi04_dR::synapse0x2dd7d40() {
   return (neuron0x30111d0()*0.039087);
}

double NNfunction_ns_chi04_dR::synapse0x2dd7d80() {
   return (neuron0x3011510()*0.619015);
}

double NNfunction_ns_chi04_dR::synapse0x2dd7dc0() {
   return (neuron0x3011850()*-0.0925391);
}

double NNfunction_ns_chi04_dR::synapse0x3016530() {
   return (neuron0x3011b90()*0.331201);
}

double NNfunction_ns_chi04_dR::synapse0x3016570() {
   return (neuron0x30120f0()*0.840299);
}

double NNfunction_ns_chi04_dR::synapse0x2dd7f10() {
   return (neuron0x3012310()*0.618289);
}

double NNfunction_ns_chi04_dR::synapse0x2dd7f50() {
   return (neuron0x3012650()*1.47697);
}

double NNfunction_ns_chi04_dR::synapse0x2dd7f90() {
   return (neuron0x3012990()*-0.330538);
}

double NNfunction_ns_chi04_dR::synapse0x2dd7fd0() {
   return (neuron0x3012cd0()*-0.289552);
}

double NNfunction_ns_chi04_dR::synapse0x2dd8010() {
   return (neuron0x3013010()*0.364979);
}

double NNfunction_ns_chi04_dR::synapse0x3017130() {
   return (neuron0x3013350()*-0.702361);
}

double NNfunction_ns_chi04_dR::synapse0x30174b0() {
   return (neuron0x300e790()*-0.185659);
}

double NNfunction_ns_chi04_dR::synapse0x30174f0() {
   return (neuron0x300ead0()*-0.615833);
}

double NNfunction_ns_chi04_dR::synapse0x3017530() {
   return (neuron0x300ee10()*-0.286943);
}

double NNfunction_ns_chi04_dR::synapse0x3017570() {
   return (neuron0x300f150()*-0.235419);
}

double NNfunction_ns_chi04_dR::synapse0x30175b0() {
   return (neuron0x300f490()*-1.00259);
}

double NNfunction_ns_chi04_dR::synapse0x30175f0() {
   return (neuron0x300f7d0()*0.574202);
}

double NNfunction_ns_chi04_dR::synapse0x3017630() {
   return (neuron0x300fb10()*-0.284984);
}

double NNfunction_ns_chi04_dR::synapse0x3017670() {
   return (neuron0x300fe50()*-0.926269);
}

double NNfunction_ns_chi04_dR::synapse0x30176b0() {
   return (neuron0x3010190()*-0.0275659);
}

double NNfunction_ns_chi04_dR::synapse0x30176f0() {
   return (neuron0x30104d0()*-0.22427);
}

double NNfunction_ns_chi04_dR::synapse0x3017730() {
   return (neuron0x3010810()*-0.0780971);
}

double NNfunction_ns_chi04_dR::synapse0x3017770() {
   return (neuron0x3010b50()*-0.604651);
}

double NNfunction_ns_chi04_dR::synapse0x30177b0() {
   return (neuron0x3010e90()*-0.382586);
}

double NNfunction_ns_chi04_dR::synapse0x30177f0() {
   return (neuron0x30111d0()*0.640465);
}

double NNfunction_ns_chi04_dR::synapse0x3017830() {
   return (neuron0x3011510()*-0.048273);
}

double NNfunction_ns_chi04_dR::synapse0x3017870() {
   return (neuron0x3011850()*0.157725);
}

double NNfunction_ns_chi04_dR::synapse0x3017300() {
   return (neuron0x3011b90()*-0.141108);
}

double NNfunction_ns_chi04_dR::synapse0x3017340() {
   return (neuron0x30120f0()*0.431791);
}

double NNfunction_ns_chi04_dR::synapse0x30179c0() {
   return (neuron0x3012310()*0.36623);
}

double NNfunction_ns_chi04_dR::synapse0x3017a00() {
   return (neuron0x3012650()*-0.147227);
}

double NNfunction_ns_chi04_dR::synapse0x3017a40() {
   return (neuron0x3012990()*0.26652);
}

double NNfunction_ns_chi04_dR::synapse0x3017a80() {
   return (neuron0x3012cd0()*0.273281);
}

double NNfunction_ns_chi04_dR::synapse0x3017ac0() {
   return (neuron0x3013010()*-0.0603421);
}

double NNfunction_ns_chi04_dR::synapse0x3017b00() {
   return (neuron0x3013350()*-0.321493);
}

double NNfunction_ns_chi04_dR::synapse0x3017e80() {
   return (neuron0x300e790()*-0.0178416);
}

double NNfunction_ns_chi04_dR::synapse0x3017ec0() {
   return (neuron0x300ead0()*0.00314433);
}

double NNfunction_ns_chi04_dR::synapse0x3017f00() {
   return (neuron0x300ee10()*-0.0860644);
}

double NNfunction_ns_chi04_dR::synapse0x3017f40() {
   return (neuron0x300f150()*-0.741282);
}

double NNfunction_ns_chi04_dR::synapse0x3017f80() {
   return (neuron0x300f490()*0.0160945);
}

double NNfunction_ns_chi04_dR::synapse0x3017fc0() {
   return (neuron0x300f7d0()*-0.00799854);
}

double NNfunction_ns_chi04_dR::synapse0x3018000() {
   return (neuron0x300fb10()*-0.0171393);
}

double NNfunction_ns_chi04_dR::synapse0x3018040() {
   return (neuron0x300fe50()*-0.0103321);
}

double NNfunction_ns_chi04_dR::synapse0x3018080() {
   return (neuron0x3010190()*0.0014636);
}

double NNfunction_ns_chi04_dR::synapse0x30180c0() {
   return (neuron0x30104d0()*0.00367153);
}

double NNfunction_ns_chi04_dR::synapse0x3018100() {
   return (neuron0x3010810()*-0.00923305);
}

double NNfunction_ns_chi04_dR::synapse0x3018140() {
   return (neuron0x3010b50()*0.0135707);
}

double NNfunction_ns_chi04_dR::synapse0x3018180() {
   return (neuron0x3010e90()*-0.0167293);
}

double NNfunction_ns_chi04_dR::synapse0x30181c0() {
   return (neuron0x30111d0()*0.00818207);
}

double NNfunction_ns_chi04_dR::synapse0x3018200() {
   return (neuron0x3011510()*0.00470636);
}

double NNfunction_ns_chi04_dR::synapse0x3018240() {
   return (neuron0x3011850()*-0.0083185);
}

double NNfunction_ns_chi04_dR::synapse0x3017cd0() {
   return (neuron0x3011b90()*-0.0200928);
}

double NNfunction_ns_chi04_dR::synapse0x3017d10() {
   return (neuron0x30120f0()*0.363501);
}

double NNfunction_ns_chi04_dR::synapse0x3018390() {
   return (neuron0x3012310()*0.00939799);
}

double NNfunction_ns_chi04_dR::synapse0x30183d0() {
   return (neuron0x3012650()*0.00345306);
}

double NNfunction_ns_chi04_dR::synapse0x3018410() {
   return (neuron0x3012990()*-0.0141981);
}

double NNfunction_ns_chi04_dR::synapse0x3018450() {
   return (neuron0x3012cd0()*0.0116724);
}

double NNfunction_ns_chi04_dR::synapse0x3018490() {
   return (neuron0x3013010()*-0.00420967);
}

double NNfunction_ns_chi04_dR::synapse0x30184d0() {
   return (neuron0x3013350()*0.0275302);
}

double NNfunction_ns_chi04_dR::synapse0x3011fe0() {
   return (neuron0x300e790()*0.0226301);
}

double NNfunction_ns_chi04_dR::synapse0x3012020() {
   return (neuron0x300ead0()*7.60307);
}

double NNfunction_ns_chi04_dR::synapse0x3012060() {
   return (neuron0x300ee10()*-0.220429);
}

double NNfunction_ns_chi04_dR::synapse0x30120a0() {
   return (neuron0x300f150()*-0.0162879);
}

double NNfunction_ns_chi04_dR::synapse0x3018a60() {
   return (neuron0x300f490()*0.0197405);
}

double NNfunction_ns_chi04_dR::synapse0x3018aa0() {
   return (neuron0x300f7d0()*-0.0192666);
}

double NNfunction_ns_chi04_dR::synapse0x3018ae0() {
   return (neuron0x300fb10()*-0.0397728);
}

double NNfunction_ns_chi04_dR::synapse0x3018b20() {
   return (neuron0x300fe50()*0.0124918);
}

double NNfunction_ns_chi04_dR::synapse0x3018b60() {
   return (neuron0x3010190()*-0.0134696);
}

double NNfunction_ns_chi04_dR::synapse0x3018ba0() {
   return (neuron0x30104d0()*0.0273266);
}

double NNfunction_ns_chi04_dR::synapse0x3018be0() {
   return (neuron0x3010810()*0.00561833);
}

double NNfunction_ns_chi04_dR::synapse0x3018c20() {
   return (neuron0x3010b50()*0.0133924);
}

double NNfunction_ns_chi04_dR::synapse0x3018c60() {
   return (neuron0x3010e90()*-0.027941);
}

double NNfunction_ns_chi04_dR::synapse0x3018ca0() {
   return (neuron0x30111d0()*-0.00108974);
}

double NNfunction_ns_chi04_dR::synapse0x3018ce0() {
   return (neuron0x3011510()*-0.00223214);
}

double NNfunction_ns_chi04_dR::synapse0x3018d20() {
   return (neuron0x3011850()*0.0116569);
}

double NNfunction_ns_chi04_dR::synapse0x30186a0() {
   return (neuron0x3011b90()*-0.00231263);
}

double NNfunction_ns_chi04_dR::synapse0x30186e0() {
   return (neuron0x30120f0()*0.102883);
}

double NNfunction_ns_chi04_dR::synapse0x3018e70() {
   return (neuron0x3012310()*-0.00250566);
}

double NNfunction_ns_chi04_dR::synapse0x3018eb0() {
   return (neuron0x3012650()*-0.0218054);
}

double NNfunction_ns_chi04_dR::synapse0x3018ef0() {
   return (neuron0x3012990()*-0.0121748);
}

double NNfunction_ns_chi04_dR::synapse0x3018f30() {
   return (neuron0x3012cd0()*-0.0104497);
}

double NNfunction_ns_chi04_dR::synapse0x3018f70() {
   return (neuron0x3013010()*-0.00171016);
}

double NNfunction_ns_chi04_dR::synapse0x3018fb0() {
   return (neuron0x3013350()*2.63965);
}

double NNfunction_ns_chi04_dR::synapse0x3019330() {
   return (neuron0x300e790()*0.780746);
}

double NNfunction_ns_chi04_dR::synapse0x3019370() {
   return (neuron0x300ead0()*-1.26743);
}

double NNfunction_ns_chi04_dR::synapse0x30193b0() {
   return (neuron0x300ee10()*0.401714);
}

double NNfunction_ns_chi04_dR::synapse0x30193f0() {
   return (neuron0x300f150()*-0.583269);
}

double NNfunction_ns_chi04_dR::synapse0x3019430() {
   return (neuron0x300f490()*1.12934);
}

double NNfunction_ns_chi04_dR::synapse0x3019470() {
   return (neuron0x300f7d0()*0.138052);
}

double NNfunction_ns_chi04_dR::synapse0x30194b0() {
   return (neuron0x300fb10()*-1.33564);
}

double NNfunction_ns_chi04_dR::synapse0x30194f0() {
   return (neuron0x300fe50()*-0.694284);
}

double NNfunction_ns_chi04_dR::synapse0x3019530() {
   return (neuron0x3010190()*-0.997105);
}

double NNfunction_ns_chi04_dR::synapse0x3019570() {
   return (neuron0x30104d0()*0.226833);
}

double NNfunction_ns_chi04_dR::synapse0x30195b0() {
   return (neuron0x3010810()*2.50228);
}

double NNfunction_ns_chi04_dR::synapse0x30195f0() {
   return (neuron0x3010b50()*-0.0302274);
}

double NNfunction_ns_chi04_dR::synapse0x3019630() {
   return (neuron0x3010e90()*0.193045);
}

double NNfunction_ns_chi04_dR::synapse0x3019670() {
   return (neuron0x30111d0()*-0.969473);
}

double NNfunction_ns_chi04_dR::synapse0x30196b0() {
   return (neuron0x3011510()*1.52672);
}

double NNfunction_ns_chi04_dR::synapse0x30196f0() {
   return (neuron0x3011850()*-0.420919);
}

double NNfunction_ns_chi04_dR::synapse0x3019180() {
   return (neuron0x3011b90()*-0.212446);
}

double NNfunction_ns_chi04_dR::synapse0x30191c0() {
   return (neuron0x30120f0()*1.4171);
}

double NNfunction_ns_chi04_dR::synapse0x3019840() {
   return (neuron0x3012310()*0.281288);
}

double NNfunction_ns_chi04_dR::synapse0x3019880() {
   return (neuron0x3012650()*-0.244433);
}

double NNfunction_ns_chi04_dR::synapse0x30198c0() {
   return (neuron0x3012990()*0.181255);
}

double NNfunction_ns_chi04_dR::synapse0x3019900() {
   return (neuron0x3012cd0()*0.163267);
}

double NNfunction_ns_chi04_dR::synapse0x3019940() {
   return (neuron0x3013010()*-1.18612);
}

double NNfunction_ns_chi04_dR::synapse0x3019980() {
   return (neuron0x3013350()*-0.753411);
}

double NNfunction_ns_chi04_dR::synapse0x3019d00() {
   return (neuron0x300e790()*-0.170633);
}

double NNfunction_ns_chi04_dR::synapse0x3019d40() {
   return (neuron0x300ead0()*0.559556);
}

double NNfunction_ns_chi04_dR::synapse0x3019d80() {
   return (neuron0x300ee10()*-0.442152);
}

double NNfunction_ns_chi04_dR::synapse0x3019dc0() {
   return (neuron0x300f150()*0.719183);
}

double NNfunction_ns_chi04_dR::synapse0x3019e00() {
   return (neuron0x300f490()*-0.188942);
}

double NNfunction_ns_chi04_dR::synapse0x3019e40() {
   return (neuron0x300f7d0()*-0.0864261);
}

double NNfunction_ns_chi04_dR::synapse0x3019e80() {
   return (neuron0x300fb10()*-1.03628);
}

double NNfunction_ns_chi04_dR::synapse0x3019ec0() {
   return (neuron0x300fe50()*-0.0823811);
}

double NNfunction_ns_chi04_dR::synapse0x3019f00() {
   return (neuron0x3010190()*-0.328299);
}

double NNfunction_ns_chi04_dR::synapse0x3019f40() {
   return (neuron0x30104d0()*1.29937);
}

double NNfunction_ns_chi04_dR::synapse0x3019f80() {
   return (neuron0x3010810()*0.900341);
}

double NNfunction_ns_chi04_dR::synapse0x3019fc0() {
   return (neuron0x3010b50()*-0.657743);
}

double NNfunction_ns_chi04_dR::synapse0x301a000() {
   return (neuron0x3010e90()*0.209187);
}

double NNfunction_ns_chi04_dR::synapse0x301a040() {
   return (neuron0x30111d0()*1.84399);
}

double NNfunction_ns_chi04_dR::synapse0x301a080() {
   return (neuron0x3011510()*-0.306077);
}

double NNfunction_ns_chi04_dR::synapse0x301a0c0() {
   return (neuron0x3011850()*0.164971);
}

double NNfunction_ns_chi04_dR::synapse0x3019b50() {
   return (neuron0x3011b90()*0.155299);
}

double NNfunction_ns_chi04_dR::synapse0x3019b90() {
   return (neuron0x30120f0()*-1.10688);
}

double NNfunction_ns_chi04_dR::synapse0x3016920() {
   return (neuron0x3012310()*-0.396887);
}

double NNfunction_ns_chi04_dR::synapse0x3016960() {
   return (neuron0x3012650()*-0.595743);
}

double NNfunction_ns_chi04_dR::synapse0x30169a0() {
   return (neuron0x3012990()*-0.374605);
}

double NNfunction_ns_chi04_dR::synapse0x30169e0() {
   return (neuron0x3012cd0()*1.27223);
}

double NNfunction_ns_chi04_dR::synapse0x3016a20() {
   return (neuron0x3013010()*0.780811);
}

double NNfunction_ns_chi04_dR::synapse0x3016a60() {
   return (neuron0x3013350()*0.5124);
}

double NNfunction_ns_chi04_dR::synapse0x3016de0() {
   return (neuron0x300e790()*0.0873199);
}

double NNfunction_ns_chi04_dR::synapse0x3016e20() {
   return (neuron0x300ead0()*13.1406);
}

double NNfunction_ns_chi04_dR::synapse0x3016e60() {
   return (neuron0x300ee10()*3.37333);
}

double NNfunction_ns_chi04_dR::synapse0x3016ea0() {
   return (neuron0x300f150()*-0.0110359);
}

double NNfunction_ns_chi04_dR::synapse0x3016ee0() {
   return (neuron0x300f490()*0.00741442);
}

double NNfunction_ns_chi04_dR::synapse0x3016f20() {
   return (neuron0x300f7d0()*0.0267304);
}

double NNfunction_ns_chi04_dR::synapse0x3016f60() {
   return (neuron0x300fb10()*0.0692612);
}

double NNfunction_ns_chi04_dR::synapse0x3016fa0() {
   return (neuron0x300fe50()*-0.00439118);
}

double NNfunction_ns_chi04_dR::synapse0x3016fe0() {
   return (neuron0x3010190()*0.110588);
}

double NNfunction_ns_chi04_dR::synapse0x3017020() {
   return (neuron0x30104d0()*0.100026);
}

double NNfunction_ns_chi04_dR::synapse0x3017060() {
   return (neuron0x3010810()*-0.0213451);
}

double NNfunction_ns_chi04_dR::synapse0x30170a0() {
   return (neuron0x3010b50()*-0.0319116);
}

double NNfunction_ns_chi04_dR::synapse0x30170e0() {
   return (neuron0x3010e90()*-0.0352354);
}

double NNfunction_ns_chi04_dR::synapse0x301b220() {
   return (neuron0x30111d0()*-0.0669962);
}

double NNfunction_ns_chi04_dR::synapse0x301b260() {
   return (neuron0x3011510()*-0.112239);
}

double NNfunction_ns_chi04_dR::synapse0x301b2a0() {
   return (neuron0x3011850()*0.0746156);
}

double NNfunction_ns_chi04_dR::synapse0x3016c30() {
   return (neuron0x3011b90()*0.0686569);
}

double NNfunction_ns_chi04_dR::synapse0x3016c70() {
   return (neuron0x30120f0()*-0.491562);
}

double NNfunction_ns_chi04_dR::synapse0x301b3f0() {
   return (neuron0x3012310()*-0.0354957);
}

double NNfunction_ns_chi04_dR::synapse0x301b430() {
   return (neuron0x3012650()*-0.162058);
}

double NNfunction_ns_chi04_dR::synapse0x301b470() {
   return (neuron0x3012990()*0.0189358);
}

double NNfunction_ns_chi04_dR::synapse0x301b4b0() {
   return (neuron0x3012cd0()*-0.0703466);
}

double NNfunction_ns_chi04_dR::synapse0x301b4f0() {
   return (neuron0x3013010()*-0.0121379);
}

double NNfunction_ns_chi04_dR::synapse0x301b530() {
   return (neuron0x3013350()*0.221801);
}

double NNfunction_ns_chi04_dR::synapse0x301b8b0() {
   return (neuron0x300e790()*-0.125525);
}

double NNfunction_ns_chi04_dR::synapse0x301b8f0() {
   return (neuron0x300ead0()*1.13159);
}

double NNfunction_ns_chi04_dR::synapse0x301b930() {
   return (neuron0x300ee10()*0.310936);
}

double NNfunction_ns_chi04_dR::synapse0x301b970() {
   return (neuron0x300f150()*-0.0476323);
}

double NNfunction_ns_chi04_dR::synapse0x301b9b0() {
   return (neuron0x300f490()*-0.0388595);
}

double NNfunction_ns_chi04_dR::synapse0x301b9f0() {
   return (neuron0x300f7d0()*0.0300403);
}

double NNfunction_ns_chi04_dR::synapse0x301ba30() {
   return (neuron0x300fb10()*-0.0258075);
}

double NNfunction_ns_chi04_dR::synapse0x301ba70() {
   return (neuron0x300fe50()*0.0295742);
}

double NNfunction_ns_chi04_dR::synapse0x301bab0() {
   return (neuron0x3010190()*0.0109929);
}

double NNfunction_ns_chi04_dR::synapse0x301baf0() {
   return (neuron0x30104d0()*-0.107377);
}

double NNfunction_ns_chi04_dR::synapse0x301bb30() {
   return (neuron0x3010810()*0.0180548);
}

double NNfunction_ns_chi04_dR::synapse0x301bb70() {
   return (neuron0x3010b50()*0.0559395);
}

double NNfunction_ns_chi04_dR::synapse0x301bbb0() {
   return (neuron0x3010e90()*-0.0328546);
}

double NNfunction_ns_chi04_dR::synapse0x301bbf0() {
   return (neuron0x30111d0()*0.0149397);
}

double NNfunction_ns_chi04_dR::synapse0x301bc30() {
   return (neuron0x3011510()*-0.0286951);
}

double NNfunction_ns_chi04_dR::synapse0x301bc70() {
   return (neuron0x3011850()*-0.087678);
}

double NNfunction_ns_chi04_dR::synapse0x301b700() {
   return (neuron0x3011b90()*-0.0184222);
}

double NNfunction_ns_chi04_dR::synapse0x301b740() {
   return (neuron0x30120f0()*0.776841);
}

double NNfunction_ns_chi04_dR::synapse0x301bdc0() {
   return (neuron0x3012310()*0.0383683);
}

double NNfunction_ns_chi04_dR::synapse0x301be00() {
   return (neuron0x3012650()*-0.0596185);
}

double NNfunction_ns_chi04_dR::synapse0x301be40() {
   return (neuron0x3012990()*0.017751);
}

double NNfunction_ns_chi04_dR::synapse0x301be80() {
   return (neuron0x3012cd0()*-0.0221184);
}

double NNfunction_ns_chi04_dR::synapse0x301bec0() {
   return (neuron0x3013010()*-0.108937);
}

double NNfunction_ns_chi04_dR::synapse0x301bf00() {
   return (neuron0x3013350()*-1.67022);
}

double NNfunction_ns_chi04_dR::synapse0x301c280() {
   return (neuron0x300e790()*-1.10637);
}

double NNfunction_ns_chi04_dR::synapse0x301c2c0() {
   return (neuron0x300ead0()*-0.959453);
}

double NNfunction_ns_chi04_dR::synapse0x301c300() {
   return (neuron0x300ee10()*3.09321);
}

double NNfunction_ns_chi04_dR::synapse0x301c340() {
   return (neuron0x300f150()*0.0213557);
}

double NNfunction_ns_chi04_dR::synapse0x301c380() {
   return (neuron0x300f490()*0.104935);
}

double NNfunction_ns_chi04_dR::synapse0x301c3c0() {
   return (neuron0x300f7d0()*-0.569446);
}

double NNfunction_ns_chi04_dR::synapse0x301c400() {
   return (neuron0x300fb10()*0.26435);
}

double NNfunction_ns_chi04_dR::synapse0x301c440() {
   return (neuron0x300fe50()*0.220613);
}

double NNfunction_ns_chi04_dR::synapse0x301c480() {
   return (neuron0x3010190()*0.205704);
}

double NNfunction_ns_chi04_dR::synapse0x301c4c0() {
   return (neuron0x30104d0()*-0.28545);
}

double NNfunction_ns_chi04_dR::synapse0x301c500() {
   return (neuron0x3010810()*0.605736);
}

double NNfunction_ns_chi04_dR::synapse0x301c540() {
   return (neuron0x3010b50()*-1.17234);
}

double NNfunction_ns_chi04_dR::synapse0x301c580() {
   return (neuron0x3010e90()*-0.353639);
}

double NNfunction_ns_chi04_dR::synapse0x301c5c0() {
   return (neuron0x30111d0()*0.34687);
}

double NNfunction_ns_chi04_dR::synapse0x301c600() {
   return (neuron0x3011510()*0.492871);
}

double NNfunction_ns_chi04_dR::synapse0x301c640() {
   return (neuron0x3011850()*0.560283);
}

double NNfunction_ns_chi04_dR::synapse0x301c0d0() {
   return (neuron0x3011b90()*1.29824);
}

double NNfunction_ns_chi04_dR::synapse0x301c110() {
   return (neuron0x30120f0()*0.201764);
}

double NNfunction_ns_chi04_dR::synapse0x301c790() {
   return (neuron0x3012310()*0.254864);
}

double NNfunction_ns_chi04_dR::synapse0x301c7d0() {
   return (neuron0x3012650()*-0.130769);
}

double NNfunction_ns_chi04_dR::synapse0x301c810() {
   return (neuron0x3012990()*0.377435);
}

double NNfunction_ns_chi04_dR::synapse0x301c850() {
   return (neuron0x3012cd0()*-0.342431);
}

double NNfunction_ns_chi04_dR::synapse0x301c890() {
   return (neuron0x3013010()*-0.839521);
}

double NNfunction_ns_chi04_dR::synapse0x301c8d0() {
   return (neuron0x3013350()*0.30549);
}

double NNfunction_ns_chi04_dR::synapse0x301cc50() {
   return (neuron0x300e790()*0.451944);
}

double NNfunction_ns_chi04_dR::synapse0x301cc90() {
   return (neuron0x300ead0()*-1.2292);
}

double NNfunction_ns_chi04_dR::synapse0x301ccd0() {
   return (neuron0x300ee10()*-0.30756);
}

double NNfunction_ns_chi04_dR::synapse0x301cd10() {
   return (neuron0x300f150()*0.134254);
}

double NNfunction_ns_chi04_dR::synapse0x301cd50() {
   return (neuron0x300f490()*-0.104942);
}

double NNfunction_ns_chi04_dR::synapse0x301cd90() {
   return (neuron0x300f7d0()*-0.0358246);
}

double NNfunction_ns_chi04_dR::synapse0x301cdd0() {
   return (neuron0x300fb10()*-0.103345);
}

double NNfunction_ns_chi04_dR::synapse0x301ce10() {
   return (neuron0x300fe50()*0.319599);
}

double NNfunction_ns_chi04_dR::synapse0x301ce50() {
   return (neuron0x3010190()*-0.502317);
}

double NNfunction_ns_chi04_dR::synapse0x301ce90() {
   return (neuron0x30104d0()*0.181292);
}

double NNfunction_ns_chi04_dR::synapse0x301ced0() {
   return (neuron0x3010810()*0.151704);
}

double NNfunction_ns_chi04_dR::synapse0x301cf10() {
   return (neuron0x3010b50()*0.630591);
}

double NNfunction_ns_chi04_dR::synapse0x301cf50() {
   return (neuron0x3010e90()*-0.830283);
}

double NNfunction_ns_chi04_dR::synapse0x301cf90() {
   return (neuron0x30111d0()*-0.121691);
}

double NNfunction_ns_chi04_dR::synapse0x301cfd0() {
   return (neuron0x3011510()*-0.022652);
}

double NNfunction_ns_chi04_dR::synapse0x301d010() {
   return (neuron0x3011850()*-0.0247504);
}

double NNfunction_ns_chi04_dR::synapse0x301caa0() {
   return (neuron0x3011b90()*0.287666);
}

double NNfunction_ns_chi04_dR::synapse0x301cae0() {
   return (neuron0x30120f0()*-0.933584);
}

double NNfunction_ns_chi04_dR::synapse0x301d160() {
   return (neuron0x3012310()*-0.108352);
}

double NNfunction_ns_chi04_dR::synapse0x301d1a0() {
   return (neuron0x3012650()*0.750391);
}

double NNfunction_ns_chi04_dR::synapse0x301d1e0() {
   return (neuron0x3012990()*-0.743318);
}

double NNfunction_ns_chi04_dR::synapse0x301d220() {
   return (neuron0x3012cd0()*0.025249);
}

double NNfunction_ns_chi04_dR::synapse0x301d260() {
   return (neuron0x3013010()*-0.169412);
}

double NNfunction_ns_chi04_dR::synapse0x301d2a0() {
   return (neuron0x3013350()*-2.14817);
}

double NNfunction_ns_chi04_dR::synapse0x301d620() {
   return (neuron0x300e790()*0.337694);
}

double NNfunction_ns_chi04_dR::synapse0x300e9b0() {
   return (neuron0x300ead0()*-1.29113);
}

double NNfunction_ns_chi04_dR::synapse0x300e9f0() {
   return (neuron0x300ee10()*0.82152);
}

double NNfunction_ns_chi04_dR::synapse0x300ecf0() {
   return (neuron0x300f150()*-3.51842);
}

double NNfunction_ns_chi04_dR::synapse0x300ed30() {
   return (neuron0x300f490()*1.23081);
}

double NNfunction_ns_chi04_dR::synapse0x300f030() {
   return (neuron0x300f7d0()*0.430207);
}

double NNfunction_ns_chi04_dR::synapse0x300f070() {
   return (neuron0x300fb10()*0.0764936);
}

double NNfunction_ns_chi04_dR::synapse0x300f370() {
   return (neuron0x300fe50()*-0.202341);
}

double NNfunction_ns_chi04_dR::synapse0x300f3b0() {
   return (neuron0x3010190()*0.64163);
}

double NNfunction_ns_chi04_dR::synapse0x300f6b0() {
   return (neuron0x30104d0()*0.0771326);
}

double NNfunction_ns_chi04_dR::synapse0x300f6f0() {
   return (neuron0x3010810()*-0.0543805);
}

double NNfunction_ns_chi04_dR::synapse0x300f9f0() {
   return (neuron0x3010b50()*0.570632);
}

double NNfunction_ns_chi04_dR::synapse0x300fa30() {
   return (neuron0x3010e90()*0.28426);
}

double NNfunction_ns_chi04_dR::synapse0x300fd30() {
   return (neuron0x30111d0()*-0.221325);
}

double NNfunction_ns_chi04_dR::synapse0x300fd70() {
   return (neuron0x3011510()*1.00124);
}

double NNfunction_ns_chi04_dR::synapse0x3010070() {
   return (neuron0x3011850()*0.232013);
}

double NNfunction_ns_chi04_dR::synapse0x30100b0() {
   return (neuron0x3011b90()*0.481135);
}

double NNfunction_ns_chi04_dR::synapse0x30103b0() {
   return (neuron0x30120f0()*-0.137624);
}

double NNfunction_ns_chi04_dR::synapse0x30103f0() {
   return (neuron0x3012310()*0.263531);
}

double NNfunction_ns_chi04_dR::synapse0x30106f0() {
   return (neuron0x3012650()*-0.190956);
}

double NNfunction_ns_chi04_dR::synapse0x3010730() {
   return (neuron0x3012990()*0.762128);
}

double NNfunction_ns_chi04_dR::synapse0x3010a30() {
   return (neuron0x3012cd0()*0.147493);
}

double NNfunction_ns_chi04_dR::synapse0x3010a70() {
   return (neuron0x3013010()*-0.544995);
}

double NNfunction_ns_chi04_dR::synapse0x3010d70() {
   return (neuron0x3013350()*0.373982);
}

double NNfunction_ns_chi04_dR::synapse0x3010db0() {
   return (neuron0x300e790()*-0.0234795);
}

double NNfunction_ns_chi04_dR::synapse0x3011a70() {
   return (neuron0x300ead0()*1.05389);
}

double NNfunction_ns_chi04_dR::synapse0x3011ab0() {
   return (neuron0x300ee10()*-0.00646133);
}

double NNfunction_ns_chi04_dR::synapse0x301d470() {
   return (neuron0x300f150()*0.0288431);
}

double NNfunction_ns_chi04_dR::synapse0x301d4b0() {
   return (neuron0x300f490()*-0.0073632);
}

double NNfunction_ns_chi04_dR::synapse0x3011db0() {
   return (neuron0x300f7d0()*-0.00779096);
}

double NNfunction_ns_chi04_dR::synapse0x3011df0() {
   return (neuron0x300fb10()*-0.0103019);
}

double NNfunction_ns_chi04_dR::synapse0x2dc9810() {
   return (neuron0x300fe50()*-0.0129173);
}

double NNfunction_ns_chi04_dR::synapse0x2dc9850() {
   return (neuron0x3010190()*0.0168389);
}

double NNfunction_ns_chi04_dR::synapse0x3012530() {
   return (neuron0x30104d0()*0.00862168);
}

double NNfunction_ns_chi04_dR::synapse0x3012570() {
   return (neuron0x3010810()*0.00242371);
}

double NNfunction_ns_chi04_dR::synapse0x3012870() {
   return (neuron0x3010b50()*0.00565239);
}

double NNfunction_ns_chi04_dR::synapse0x30128b0() {
   return (neuron0x3010e90()*-0.0108412);
}

double NNfunction_ns_chi04_dR::synapse0x3012bb0() {
   return (neuron0x30111d0()*-0.00448716);
}

double NNfunction_ns_chi04_dR::synapse0x3012bf0() {
   return (neuron0x3011510()*-0.0220367);
}

double NNfunction_ns_chi04_dR::synapse0x3012ef0() {
   return (neuron0x3011850()*-0.0420106);
}

double NNfunction_ns_chi04_dR::synapse0x3012f30() {
   return (neuron0x3011b90()*-0.00422467);
}

double NNfunction_ns_chi04_dR::synapse0x3013230() {
   return (neuron0x30120f0()*-0.0913758);
}

double NNfunction_ns_chi04_dR::synapse0x3013270() {
   return (neuron0x3012310()*0.00290812);
}

double NNfunction_ns_chi04_dR::synapse0x3013570() {
   return (neuron0x3012650()*-0.00323543);
}

double NNfunction_ns_chi04_dR::synapse0x30135b0() {
   return (neuron0x3012990()*-0.00675572);
}

double NNfunction_ns_chi04_dR::synapse0x30110b0() {
   return (neuron0x3012cd0()*-0.00827893);
}

double NNfunction_ns_chi04_dR::synapse0x30110f0() {
   return (neuron0x3013010()*0.00651933);
}

double NNfunction_ns_chi04_dR::synapse0x301f390() {
   return (neuron0x3013350()*-0.101878);
}

double NNfunction_ns_chi04_dR::synapse0x301f710() {
   return (neuron0x300e790()*0.112702);
}

double NNfunction_ns_chi04_dR::synapse0x301f750() {
   return (neuron0x300ead0()*3.79179);
}

double NNfunction_ns_chi04_dR::synapse0x301f790() {
   return (neuron0x300ee10()*-1.23253);
}

double NNfunction_ns_chi04_dR::synapse0x301f7d0() {
   return (neuron0x300f150()*-0.137558);
}

double NNfunction_ns_chi04_dR::synapse0x301f810() {
   return (neuron0x300f490()*0.0178615);
}

double NNfunction_ns_chi04_dR::synapse0x301f850() {
   return (neuron0x300f7d0()*0.20021);
}

double NNfunction_ns_chi04_dR::synapse0x301f890() {
   return (neuron0x300fb10()*-0.242415);
}

double NNfunction_ns_chi04_dR::synapse0x301f8d0() {
   return (neuron0x300fe50()*-0.0757273);
}

double NNfunction_ns_chi04_dR::synapse0x301f910() {
   return (neuron0x3010190()*-0.0672831);
}

double NNfunction_ns_chi04_dR::synapse0x301f950() {
   return (neuron0x30104d0()*-0.0859468);
}

double NNfunction_ns_chi04_dR::synapse0x301f990() {
   return (neuron0x3010810()*0.0991005);
}

double NNfunction_ns_chi04_dR::synapse0x301f9d0() {
   return (neuron0x3010b50()*0.0174175);
}

double NNfunction_ns_chi04_dR::synapse0x301fa10() {
   return (neuron0x3010e90()*-0.0553834);
}

double NNfunction_ns_chi04_dR::synapse0x301fa50() {
   return (neuron0x30111d0()*0.134165);
}

double NNfunction_ns_chi04_dR::synapse0x301fa90() {
   return (neuron0x3011510()*-0.0599885);
}

double NNfunction_ns_chi04_dR::synapse0x301fad0() {
   return (neuron0x3011850()*-0.0210977);
}

double NNfunction_ns_chi04_dR::synapse0x301f560() {
   return (neuron0x3011b90()*0.0810994);
}

double NNfunction_ns_chi04_dR::synapse0x301f5a0() {
   return (neuron0x30120f0()*-0.255721);
}

double NNfunction_ns_chi04_dR::synapse0x301fc20() {
   return (neuron0x3012310()*0.150633);
}

double NNfunction_ns_chi04_dR::synapse0x301fc60() {
   return (neuron0x3012650()*-0.140422);
}

double NNfunction_ns_chi04_dR::synapse0x301fca0() {
   return (neuron0x3012990()*0.0443042);
}

double NNfunction_ns_chi04_dR::synapse0x301fce0() {
   return (neuron0x3012cd0()*-0.0286401);
}

double NNfunction_ns_chi04_dR::synapse0x301fd20() {
   return (neuron0x3013010()*-0.00890503);
}

double NNfunction_ns_chi04_dR::synapse0x301fd60() {
   return (neuron0x3013350()*-3.05288);
}

double NNfunction_ns_chi04_dR::synapse0x30200e0() {
   return (neuron0x300e790()*0.12303);
}

double NNfunction_ns_chi04_dR::synapse0x3020120() {
   return (neuron0x300ead0()*1.58806);
}

double NNfunction_ns_chi04_dR::synapse0x3020160() {
   return (neuron0x300ee10()*2.47855);
}

double NNfunction_ns_chi04_dR::synapse0x30201a0() {
   return (neuron0x300f150()*0.0507315);
}

double NNfunction_ns_chi04_dR::synapse0x30201e0() {
   return (neuron0x300f490()*-0.00909381);
}

double NNfunction_ns_chi04_dR::synapse0x3020220() {
   return (neuron0x300f7d0()*-0.0422807);
}

double NNfunction_ns_chi04_dR::synapse0x3020260() {
   return (neuron0x300fb10()*0.0409807);
}

double NNfunction_ns_chi04_dR::synapse0x30202a0() {
   return (neuron0x300fe50()*0.0492969);
}

double NNfunction_ns_chi04_dR::synapse0x30202e0() {
   return (neuron0x3010190()*0.0396463);
}

double NNfunction_ns_chi04_dR::synapse0x3020320() {
   return (neuron0x30104d0()*0.0347608);
}

double NNfunction_ns_chi04_dR::synapse0x3020360() {
   return (neuron0x3010810()*0.0665102);
}

double NNfunction_ns_chi04_dR::synapse0x30203a0() {
   return (neuron0x3010b50()*0.060112);
}

double NNfunction_ns_chi04_dR::synapse0x30203e0() {
   return (neuron0x3010e90()*-0.0095654);
}

double NNfunction_ns_chi04_dR::synapse0x3020420() {
   return (neuron0x30111d0()*0.039751);
}

double NNfunction_ns_chi04_dR::synapse0x3020460() {
   return (neuron0x3011510()*-0.0511);
}

double NNfunction_ns_chi04_dR::synapse0x30204a0() {
   return (neuron0x3011850()*0.102374);
}

double NNfunction_ns_chi04_dR::synapse0x301ff30() {
   return (neuron0x3011b90()*0.0230683);
}

double NNfunction_ns_chi04_dR::synapse0x301ff70() {
   return (neuron0x30120f0()*-0.044408);
}

double NNfunction_ns_chi04_dR::synapse0x30205f0() {
   return (neuron0x3012310()*-0.0376313);
}

double NNfunction_ns_chi04_dR::synapse0x3020630() {
   return (neuron0x3012650()*-0.0364718);
}

double NNfunction_ns_chi04_dR::synapse0x3020670() {
   return (neuron0x3012990()*0.0300249);
}

double NNfunction_ns_chi04_dR::synapse0x30206b0() {
   return (neuron0x3012cd0()*-0.0292527);
}

double NNfunction_ns_chi04_dR::synapse0x30206f0() {
   return (neuron0x3013010()*-0.0083938);
}

double NNfunction_ns_chi04_dR::synapse0x3020730() {
   return (neuron0x3013350()*0.694878);
}

double NNfunction_ns_chi04_dR::synapse0x3020ab0() {
   return (neuron0x300e790()*-0.184036);
}

double NNfunction_ns_chi04_dR::synapse0x3020af0() {
   return (neuron0x300ead0()*-1.95129);
}

double NNfunction_ns_chi04_dR::synapse0x3020b30() {
   return (neuron0x300ee10()*1.58734);
}

double NNfunction_ns_chi04_dR::synapse0x3020b70() {
   return (neuron0x300f150()*0.182827);
}

double NNfunction_ns_chi04_dR::synapse0x3020bb0() {
   return (neuron0x300f490()*-0.0771493);
}

double NNfunction_ns_chi04_dR::synapse0x3020bf0() {
   return (neuron0x300f7d0()*-0.0173161);
}

double NNfunction_ns_chi04_dR::synapse0x3020c30() {
   return (neuron0x300fb10()*-0.0282202);
}

double NNfunction_ns_chi04_dR::synapse0x3020c70() {
   return (neuron0x300fe50()*0.0109864);
}

double NNfunction_ns_chi04_dR::synapse0x3020cb0() {
   return (neuron0x3010190()*0.0145022);
}

double NNfunction_ns_chi04_dR::synapse0x3020cf0() {
   return (neuron0x30104d0()*-0.0921967);
}

double NNfunction_ns_chi04_dR::synapse0x3020d30() {
   return (neuron0x3010810()*-0.0191784);
}

double NNfunction_ns_chi04_dR::synapse0x3020d70() {
   return (neuron0x3010b50()*0.102679);
}

double NNfunction_ns_chi04_dR::synapse0x3020db0() {
   return (neuron0x3010e90()*-0.0289074);
}

double NNfunction_ns_chi04_dR::synapse0x3020df0() {
   return (neuron0x30111d0()*-0.100315);
}

double NNfunction_ns_chi04_dR::synapse0x3020e30() {
   return (neuron0x3011510()*-0.0325982);
}

double NNfunction_ns_chi04_dR::synapse0x3020e70() {
   return (neuron0x3011850()*-0.172568);
}

double NNfunction_ns_chi04_dR::synapse0x3020900() {
   return (neuron0x3011b90()*-0.0612063);
}

double NNfunction_ns_chi04_dR::synapse0x3020940() {
   return (neuron0x30120f0()*0.242426);
}

double NNfunction_ns_chi04_dR::synapse0x3020fc0() {
   return (neuron0x3012310()*-0.107062);
}

double NNfunction_ns_chi04_dR::synapse0x3021000() {
   return (neuron0x3012650()*0.0324693);
}

double NNfunction_ns_chi04_dR::synapse0x3021040() {
   return (neuron0x3012990()*0.026509);
}

double NNfunction_ns_chi04_dR::synapse0x3021080() {
   return (neuron0x3012cd0()*0.0290436);
}

double NNfunction_ns_chi04_dR::synapse0x30210c0() {
   return (neuron0x3013010()*-0.0346604);
}

double NNfunction_ns_chi04_dR::synapse0x3021100() {
   return (neuron0x3013350()*1.29386);
}

double NNfunction_ns_chi04_dR::synapse0x3021480() {
   return (neuron0x300e790()*0.24844);
}

double NNfunction_ns_chi04_dR::synapse0x30214c0() {
   return (neuron0x300ead0()*1.53243);
}

double NNfunction_ns_chi04_dR::synapse0x3021500() {
   return (neuron0x300ee10()*-2.81066);
}

double NNfunction_ns_chi04_dR::synapse0x3021540() {
   return (neuron0x300f150()*-0.677747);
}

double NNfunction_ns_chi04_dR::synapse0x3021580() {
   return (neuron0x300f490()*0.193336);
}

double NNfunction_ns_chi04_dR::synapse0x30215c0() {
   return (neuron0x300f7d0()*0.0453444);
}

double NNfunction_ns_chi04_dR::synapse0x3021600() {
   return (neuron0x300fb10()*0.169257);
}

double NNfunction_ns_chi04_dR::synapse0x3021640() {
   return (neuron0x300fe50()*-0.0262947);
}

double NNfunction_ns_chi04_dR::synapse0x3021680() {
   return (neuron0x3010190()*-0.0649621);
}

double NNfunction_ns_chi04_dR::synapse0x30216c0() {
   return (neuron0x30104d0()*-0.0674605);
}

double NNfunction_ns_chi04_dR::synapse0x3021700() {
   return (neuron0x3010810()*-0.0645634);
}

double NNfunction_ns_chi04_dR::synapse0x3021740() {
   return (neuron0x3010b50()*-0.259858);
}

double NNfunction_ns_chi04_dR::synapse0x3021780() {
   return (neuron0x3010e90()*0.27619);
}

double NNfunction_ns_chi04_dR::synapse0x30217c0() {
   return (neuron0x30111d0()*-0.17024);
}

double NNfunction_ns_chi04_dR::synapse0x3021800() {
   return (neuron0x3011510()*0.804473);
}

double NNfunction_ns_chi04_dR::synapse0x3021840() {
   return (neuron0x3011850()*0.0311533);
}

double NNfunction_ns_chi04_dR::synapse0x30212d0() {
   return (neuron0x3011b90()*-0.189929);
}

double NNfunction_ns_chi04_dR::synapse0x3021310() {
   return (neuron0x30120f0()*0.107856);
}

double NNfunction_ns_chi04_dR::synapse0x3021990() {
   return (neuron0x3012310()*0.337559);
}

double NNfunction_ns_chi04_dR::synapse0x30219d0() {
   return (neuron0x3012650()*0.0649273);
}

double NNfunction_ns_chi04_dR::synapse0x3021a10() {
   return (neuron0x3012990()*0.0871937);
}

double NNfunction_ns_chi04_dR::synapse0x3021a50() {
   return (neuron0x3012cd0()*-0.0122216);
}

double NNfunction_ns_chi04_dR::synapse0x3021a90() {
   return (neuron0x3013010()*0.243325);
}

double NNfunction_ns_chi04_dR::synapse0x3021ad0() {
   return (neuron0x3013350()*-0.609748);
}

double NNfunction_ns_chi04_dR::synapse0x3021e50() {
   return (neuron0x300e790()*1.76439);
}

double NNfunction_ns_chi04_dR::synapse0x3021e90() {
   return (neuron0x300ead0()*-0.0808393);
}

double NNfunction_ns_chi04_dR::synapse0x3021ed0() {
   return (neuron0x300ee10()*-0.849736);
}

double NNfunction_ns_chi04_dR::synapse0x3021f10() {
   return (neuron0x300f150()*0.0370092);
}

double NNfunction_ns_chi04_dR::synapse0x3021f50() {
   return (neuron0x300f490()*0.457589);
}

double NNfunction_ns_chi04_dR::synapse0x3021f90() {
   return (neuron0x300f7d0()*-1.05429);
}

double NNfunction_ns_chi04_dR::synapse0x3021fd0() {
   return (neuron0x300fb10()*-1.32769);
}

double NNfunction_ns_chi04_dR::synapse0x3022010() {
   return (neuron0x300fe50()*0.235374);
}

double NNfunction_ns_chi04_dR::synapse0x3022050() {
   return (neuron0x3010190()*0.396544);
}

double NNfunction_ns_chi04_dR::synapse0x301a210() {
   return (neuron0x30104d0()*-1.02289);
}

double NNfunction_ns_chi04_dR::synapse0x301a250() {
   return (neuron0x3010810()*0.375045);
}

double NNfunction_ns_chi04_dR::synapse0x301a290() {
   return (neuron0x3010b50()*0.286316);
}

double NNfunction_ns_chi04_dR::synapse0x301a2d0() {
   return (neuron0x3010e90()*-1.08234);
}

double NNfunction_ns_chi04_dR::synapse0x301a310() {
   return (neuron0x30111d0()*-0.936689);
}

double NNfunction_ns_chi04_dR::synapse0x301a350() {
   return (neuron0x3011510()*-0.249905);
}

double NNfunction_ns_chi04_dR::synapse0x301a390() {
   return (neuron0x3011850()*0.873507);
}

double NNfunction_ns_chi04_dR::synapse0x3021ca0() {
   return (neuron0x3011b90()*-0.708602);
}

double NNfunction_ns_chi04_dR::synapse0x3021ce0() {
   return (neuron0x30120f0()*-1.46308);
}

double NNfunction_ns_chi04_dR::synapse0x301a4e0() {
   return (neuron0x3012310()*0.88694);
}

double NNfunction_ns_chi04_dR::synapse0x301a520() {
   return (neuron0x3012650()*-0.504094);
}

double NNfunction_ns_chi04_dR::synapse0x301a560() {
   return (neuron0x3012990()*-1.77586);
}

double NNfunction_ns_chi04_dR::synapse0x301a5a0() {
   return (neuron0x3012cd0()*0.0675728);
}

double NNfunction_ns_chi04_dR::synapse0x301a5e0() {
   return (neuron0x3013010()*0.403878);
}

double NNfunction_ns_chi04_dR::synapse0x301a620() {
   return (neuron0x3013350()*0.735046);
}

double NNfunction_ns_chi04_dR::synapse0x301a9a0() {
   return (neuron0x300e790()*0.368699);
}

double NNfunction_ns_chi04_dR::synapse0x301a9e0() {
   return (neuron0x300ead0()*1.10612);
}

double NNfunction_ns_chi04_dR::synapse0x301aa20() {
   return (neuron0x300ee10()*2.39545);
}

double NNfunction_ns_chi04_dR::synapse0x301aa60() {
   return (neuron0x300f150()*-1.10965);
}

double NNfunction_ns_chi04_dR::synapse0x301aaa0() {
   return (neuron0x300f490()*0.387283);
}

double NNfunction_ns_chi04_dR::synapse0x301aae0() {
   return (neuron0x300f7d0()*0.614727);
}

double NNfunction_ns_chi04_dR::synapse0x301ab20() {
   return (neuron0x300fb10()*0.110236);
}

double NNfunction_ns_chi04_dR::synapse0x301ab60() {
   return (neuron0x300fe50()*0.185416);
}

double NNfunction_ns_chi04_dR::synapse0x301aba0() {
   return (neuron0x3010190()*0.517985);
}

double NNfunction_ns_chi04_dR::synapse0x301abe0() {
   return (neuron0x30104d0()*1.79695);
}

double NNfunction_ns_chi04_dR::synapse0x301ac20() {
   return (neuron0x3010810()*-0.375205);
}

double NNfunction_ns_chi04_dR::synapse0x301ac60() {
   return (neuron0x3010b50()*-0.59117);
}

double NNfunction_ns_chi04_dR::synapse0x301aca0() {
   return (neuron0x3010e90()*-0.25038);
}

double NNfunction_ns_chi04_dR::synapse0x301ace0() {
   return (neuron0x30111d0()*-0.199526);
}

double NNfunction_ns_chi04_dR::synapse0x301ad20() {
   return (neuron0x3011510()*-0.185488);
}

double NNfunction_ns_chi04_dR::synapse0x301ad60() {
   return (neuron0x3011850()*-0.303259);
}

double NNfunction_ns_chi04_dR::synapse0x301a7f0() {
   return (neuron0x3011b90()*-0.380531);
}

double NNfunction_ns_chi04_dR::synapse0x301a830() {
   return (neuron0x30120f0()*-0.343814);
}

double NNfunction_ns_chi04_dR::synapse0x301aeb0() {
   return (neuron0x3012310()*-0.143772);
}

double NNfunction_ns_chi04_dR::synapse0x301aef0() {
   return (neuron0x3012650()*0.219274);
}

double NNfunction_ns_chi04_dR::synapse0x301af30() {
   return (neuron0x3012990()*0.945357);
}

double NNfunction_ns_chi04_dR::synapse0x301af70() {
   return (neuron0x3012cd0()*0.101873);
}

double NNfunction_ns_chi04_dR::synapse0x301afb0() {
   return (neuron0x3013010()*-0.885197);
}

double NNfunction_ns_chi04_dR::synapse0x301aff0() {
   return (neuron0x3013350()*-1.40919);
}

double NNfunction_ns_chi04_dR::synapse0x301b1c0() {
   return (neuron0x300e790()*-0.0233504);
}

double NNfunction_ns_chi04_dR::synapse0x3024250() {
   return (neuron0x300ead0()*4.76818);
}

double NNfunction_ns_chi04_dR::synapse0x3024290() {
   return (neuron0x300ee10()*0.795384);
}

double NNfunction_ns_chi04_dR::synapse0x30242d0() {
   return (neuron0x300f150()*0.00288215);
}

double NNfunction_ns_chi04_dR::synapse0x3024310() {
   return (neuron0x300f490()*-0.0157196);
}

double NNfunction_ns_chi04_dR::synapse0x3024350() {
   return (neuron0x300f7d0()*0.0364408);
}

double NNfunction_ns_chi04_dR::synapse0x3024390() {
   return (neuron0x300fb10()*-0.0315404);
}

double NNfunction_ns_chi04_dR::synapse0x30243d0() {
   return (neuron0x300fe50()*0.00324323);
}

double NNfunction_ns_chi04_dR::synapse0x3024410() {
   return (neuron0x3010190()*-0.013891);
}

double NNfunction_ns_chi04_dR::synapse0x3024450() {
   return (neuron0x30104d0()*-0.00637411);
}

double NNfunction_ns_chi04_dR::synapse0x3024490() {
   return (neuron0x3010810()*0.00459915);
}

double NNfunction_ns_chi04_dR::synapse0x30244d0() {
   return (neuron0x3010b50()*0.0116716);
}

double NNfunction_ns_chi04_dR::synapse0x3024510() {
   return (neuron0x3010e90()*-0.00375748);
}

double NNfunction_ns_chi04_dR::synapse0x3024550() {
   return (neuron0x30111d0()*0.0141572);
}

double NNfunction_ns_chi04_dR::synapse0x3024590() {
   return (neuron0x3011510()*0.0274516);
}

double NNfunction_ns_chi04_dR::synapse0x30245d0() {
   return (neuron0x3011850()*0.0136191);
}

double NNfunction_ns_chi04_dR::synapse0x30240a0() {
   return (neuron0x3011b90()*-0.0164312);
}

double NNfunction_ns_chi04_dR::synapse0x30240e0() {
   return (neuron0x30120f0()*0.142275);
}

double NNfunction_ns_chi04_dR::synapse0x3024720() {
   return (neuron0x3012310()*-0.0174463);
}

double NNfunction_ns_chi04_dR::synapse0x3024760() {
   return (neuron0x3012650()*-0.0219193);
}

double NNfunction_ns_chi04_dR::synapse0x30247a0() {
   return (neuron0x3012990()*0.00579487);
}

double NNfunction_ns_chi04_dR::synapse0x30247e0() {
   return (neuron0x3012cd0()*-0.0117718);
}

double NNfunction_ns_chi04_dR::synapse0x3024820() {
   return (neuron0x3013010()*-0.00387216);
}

double NNfunction_ns_chi04_dR::synapse0x3024860() {
   return (neuron0x3013350()*-2.05859);
}

double NNfunction_ns_chi04_dR::synapse0x3024be0() {
   return (neuron0x300e790()*-0.00226399);
}

double NNfunction_ns_chi04_dR::synapse0x3024c20() {
   return (neuron0x300ead0()*-0.00246283);
}

double NNfunction_ns_chi04_dR::synapse0x3024c60() {
   return (neuron0x300ee10()*-0.0248387);
}

double NNfunction_ns_chi04_dR::synapse0x3024ca0() {
   return (neuron0x300f150()*-2.30105);
}

double NNfunction_ns_chi04_dR::synapse0x3024ce0() {
   return (neuron0x300f490()*0.00760082);
}

double NNfunction_ns_chi04_dR::synapse0x3024d20() {
   return (neuron0x300f7d0()*-0.00670364);
}

double NNfunction_ns_chi04_dR::synapse0x3024d60() {
   return (neuron0x300fb10()*-0.00476153);
}

double NNfunction_ns_chi04_dR::synapse0x3024da0() {
   return (neuron0x300fe50()*-0.00298288);
}

double NNfunction_ns_chi04_dR::synapse0x3024de0() {
   return (neuron0x3010190()*-0.000231285);
}

double NNfunction_ns_chi04_dR::synapse0x3024e20() {
   return (neuron0x30104d0()*0.00807627);
}

double NNfunction_ns_chi04_dR::synapse0x3024e60() {
   return (neuron0x3010810()*-0.00395706);
}

double NNfunction_ns_chi04_dR::synapse0x3024ea0() {
   return (neuron0x3010b50()*-0.00492037);
}

double NNfunction_ns_chi04_dR::synapse0x3024ee0() {
   return (neuron0x3010e90()*-0.0104849);
}

double NNfunction_ns_chi04_dR::synapse0x3024f20() {
   return (neuron0x30111d0()*0.00079811);
}

double NNfunction_ns_chi04_dR::synapse0x3024f60() {
   return (neuron0x3011510()*0.00214926);
}

double NNfunction_ns_chi04_dR::synapse0x3024fa0() {
   return (neuron0x3011850()*0.0031294);
}

double NNfunction_ns_chi04_dR::synapse0x3024a30() {
   return (neuron0x3011b90()*-0.00280495);
}

double NNfunction_ns_chi04_dR::synapse0x3024a70() {
   return (neuron0x30120f0()*0.126051);
}

double NNfunction_ns_chi04_dR::synapse0x30250f0() {
   return (neuron0x3012310()*-0.0122934);
}

double NNfunction_ns_chi04_dR::synapse0x3025130() {
   return (neuron0x3012650()*-0.000531219);
}

double NNfunction_ns_chi04_dR::synapse0x3025170() {
   return (neuron0x3012990()*0.00134177);
}

double NNfunction_ns_chi04_dR::synapse0x30251b0() {
   return (neuron0x3012cd0()*0.00896281);
}

double NNfunction_ns_chi04_dR::synapse0x30251f0() {
   return (neuron0x3013010()*0.00384421);
}

double NNfunction_ns_chi04_dR::synapse0x3025230() {
   return (neuron0x3013350()*-0.0123757);
}

double NNfunction_ns_chi04_dR::synapse0x30255b0() {
   return (neuron0x300e790()*0.460034);
}

double NNfunction_ns_chi04_dR::synapse0x30255f0() {
   return (neuron0x300ead0()*-0.437913);
}

double NNfunction_ns_chi04_dR::synapse0x3025630() {
   return (neuron0x300ee10()*-1.66613);
}

double NNfunction_ns_chi04_dR::synapse0x3025670() {
   return (neuron0x300f150()*-0.216899);
}

double NNfunction_ns_chi04_dR::synapse0x30256b0() {
   return (neuron0x300f490()*1.26599);
}

double NNfunction_ns_chi04_dR::synapse0x30256f0() {
   return (neuron0x300f7d0()*0.483958);
}

double NNfunction_ns_chi04_dR::synapse0x3025730() {
   return (neuron0x300fb10()*0.303008);
}

double NNfunction_ns_chi04_dR::synapse0x3025770() {
   return (neuron0x300fe50()*0.216894);
}

double NNfunction_ns_chi04_dR::synapse0x30257b0() {
   return (neuron0x3010190()*0.0305877);
}

double NNfunction_ns_chi04_dR::synapse0x30257f0() {
   return (neuron0x30104d0()*-0.383959);
}

double NNfunction_ns_chi04_dR::synapse0x3025830() {
   return (neuron0x3010810()*-0.308246);
}

double NNfunction_ns_chi04_dR::synapse0x3025870() {
   return (neuron0x3010b50()*0.497109);
}

double NNfunction_ns_chi04_dR::synapse0x30258b0() {
   return (neuron0x3010e90()*-1.79772);
}

double NNfunction_ns_chi04_dR::synapse0x30258f0() {
   return (neuron0x30111d0()*-0.303552);
}

double NNfunction_ns_chi04_dR::synapse0x3025930() {
   return (neuron0x3011510()*-0.97232);
}

double NNfunction_ns_chi04_dR::synapse0x3025970() {
   return (neuron0x3011850()*-1.02957);
}

double NNfunction_ns_chi04_dR::synapse0x3025400() {
   return (neuron0x3011b90()*1.67254);
}

double NNfunction_ns_chi04_dR::synapse0x3025440() {
   return (neuron0x30120f0()*-0.00191606);
}

double NNfunction_ns_chi04_dR::synapse0x3025ac0() {
   return (neuron0x3012310()*0.607108);
}

double NNfunction_ns_chi04_dR::synapse0x3025b00() {
   return (neuron0x3012650()*-1.04305);
}

double NNfunction_ns_chi04_dR::synapse0x3025b40() {
   return (neuron0x3012990()*-0.772597);
}

double NNfunction_ns_chi04_dR::synapse0x3025b80() {
   return (neuron0x3012cd0()*-1.39424);
}

double NNfunction_ns_chi04_dR::synapse0x3025bc0() {
   return (neuron0x3013010()*-0.569856);
}

double NNfunction_ns_chi04_dR::synapse0x3025c00() {
   return (neuron0x3013350()*0.523448);
}

double NNfunction_ns_chi04_dR::synapse0x3025f80() {
   return (neuron0x300e790()*0.0549822);
}

double NNfunction_ns_chi04_dR::synapse0x3025fc0() {
   return (neuron0x300ead0()*-2.05615);
}

double NNfunction_ns_chi04_dR::synapse0x3026000() {
   return (neuron0x300ee10()*0.649018);
}

double NNfunction_ns_chi04_dR::synapse0x3026040() {
   return (neuron0x300f150()*0.0112412);
}

double NNfunction_ns_chi04_dR::synapse0x3026080() {
   return (neuron0x300f490()*-0.0269253);
}

double NNfunction_ns_chi04_dR::synapse0x30260c0() {
   return (neuron0x300f7d0()*-0.00605927);
}

double NNfunction_ns_chi04_dR::synapse0x3026100() {
   return (neuron0x300fb10()*-0.0626503);
}

double NNfunction_ns_chi04_dR::synapse0x3026140() {
   return (neuron0x300fe50()*0.0162149);
}

double NNfunction_ns_chi04_dR::synapse0x3026180() {
   return (neuron0x3010190()*0.0516194);
}

double NNfunction_ns_chi04_dR::synapse0x30261c0() {
   return (neuron0x30104d0()*0.150961);
}

double NNfunction_ns_chi04_dR::synapse0x3026200() {
   return (neuron0x3010810()*-0.0524619);
}

double NNfunction_ns_chi04_dR::synapse0x3026240() {
   return (neuron0x3010b50()*0.00934832);
}

double NNfunction_ns_chi04_dR::synapse0x3026280() {
   return (neuron0x3010e90()*-0.00489032);
}

double NNfunction_ns_chi04_dR::synapse0x30262c0() {
   return (neuron0x30111d0()*0.0346867);
}

double NNfunction_ns_chi04_dR::synapse0x3026300() {
   return (neuron0x3011510()*-0.121203);
}

double NNfunction_ns_chi04_dR::synapse0x3026340() {
   return (neuron0x3011850()*-0.0334428);
}

double NNfunction_ns_chi04_dR::synapse0x3025dd0() {
   return (neuron0x3011b90()*0.0399427);
}

double NNfunction_ns_chi04_dR::synapse0x3025e10() {
   return (neuron0x30120f0()*0.547837);
}

double NNfunction_ns_chi04_dR::synapse0x3026490() {
   return (neuron0x3012310()*-0.0296508);
}

double NNfunction_ns_chi04_dR::synapse0x30264d0() {
   return (neuron0x3012650()*-0.0375418);
}

double NNfunction_ns_chi04_dR::synapse0x3026510() {
   return (neuron0x3012990()*-0.0672523);
}

double NNfunction_ns_chi04_dR::synapse0x3026550() {
   return (neuron0x3012cd0()*-0.0203949);
}

double NNfunction_ns_chi04_dR::synapse0x3026590() {
   return (neuron0x3013010()*0.0136383);
}

double NNfunction_ns_chi04_dR::synapse0x30265d0() {
   return (neuron0x3013350()*-0.0706968);
}

double NNfunction_ns_chi04_dR::synapse0x3026950() {
   return (neuron0x300e790()*0.0677583);
}

double NNfunction_ns_chi04_dR::synapse0x3026990() {
   return (neuron0x300ead0()*6.0677);
}

double NNfunction_ns_chi04_dR::synapse0x30269d0() {
   return (neuron0x300ee10()*0.600894);
}

double NNfunction_ns_chi04_dR::synapse0x3026a10() {
   return (neuron0x300f150()*-0.00511572);
}

double NNfunction_ns_chi04_dR::synapse0x3026a50() {
   return (neuron0x300f490()*0.044361);
}

double NNfunction_ns_chi04_dR::synapse0x3026a90() {
   return (neuron0x300f7d0()*-0.0368235);
}

double NNfunction_ns_chi04_dR::synapse0x3026ad0() {
   return (neuron0x300fb10()*-0.0562518);
}

double NNfunction_ns_chi04_dR::synapse0x3026b10() {
   return (neuron0x300fe50()*0.0177039);
}

double NNfunction_ns_chi04_dR::synapse0x3026b50() {
   return (neuron0x3010190()*-0.0138932);
}

double NNfunction_ns_chi04_dR::synapse0x3026b90() {
   return (neuron0x30104d0()*0.0398432);
}

double NNfunction_ns_chi04_dR::synapse0x3026bd0() {
   return (neuron0x3010810()*0.00934205);
}

double NNfunction_ns_chi04_dR::synapse0x3026c10() {
   return (neuron0x3010b50()*0.036701);
}

double NNfunction_ns_chi04_dR::synapse0x3026c50() {
   return (neuron0x3010e90()*-0.031341);
}

double NNfunction_ns_chi04_dR::synapse0x3026c90() {
   return (neuron0x30111d0()*0.0066006);
}

double NNfunction_ns_chi04_dR::synapse0x3026cd0() {
   return (neuron0x3011510()*-0.003597);
}

double NNfunction_ns_chi04_dR::synapse0x3026d10() {
   return (neuron0x3011850()*0.00140321);
}

double NNfunction_ns_chi04_dR::synapse0x30267a0() {
   return (neuron0x3011b90()*0.00374859);
}

double NNfunction_ns_chi04_dR::synapse0x30267e0() {
   return (neuron0x30120f0()*0.0712163);
}

double NNfunction_ns_chi04_dR::synapse0x3026e60() {
   return (neuron0x3012310()*0.0111204);
}

double NNfunction_ns_chi04_dR::synapse0x3026ea0() {
   return (neuron0x3012650()*-0.0138142);
}

double NNfunction_ns_chi04_dR::synapse0x3026ee0() {
   return (neuron0x3012990()*0.00503195);
}

double NNfunction_ns_chi04_dR::synapse0x3026f20() {
   return (neuron0x3012cd0()*-0.0120903);
}

double NNfunction_ns_chi04_dR::synapse0x3026f60() {
   return (neuron0x3013010()*-0.00529175);
}

double NNfunction_ns_chi04_dR::synapse0x3026fa0() {
   return (neuron0x3013350()*2.88736);
}

double NNfunction_ns_chi04_dR::synapse0x3027320() {
   return (neuron0x300e790()*-0.00447637);
}

double NNfunction_ns_chi04_dR::synapse0x3027360() {
   return (neuron0x300ead0()*-0.718746);
}

double NNfunction_ns_chi04_dR::synapse0x30273a0() {
   return (neuron0x300ee10()*0.209089);
}

double NNfunction_ns_chi04_dR::synapse0x30273e0() {
   return (neuron0x300f150()*0.0578574);
}

double NNfunction_ns_chi04_dR::synapse0x3027420() {
   return (neuron0x300f490()*-0.025785);
}

double NNfunction_ns_chi04_dR::synapse0x3027460() {
   return (neuron0x300f7d0()*-0.0069174);
}

double NNfunction_ns_chi04_dR::synapse0x30274a0() {
   return (neuron0x300fb10()*-0.00208147);
}

double NNfunction_ns_chi04_dR::synapse0x30274e0() {
   return (neuron0x300fe50()*-0.00545794);
}

double NNfunction_ns_chi04_dR::synapse0x3027520() {
   return (neuron0x3010190()*0.0292624);
}

double NNfunction_ns_chi04_dR::synapse0x3027560() {
   return (neuron0x30104d0()*0.0435842);
}

double NNfunction_ns_chi04_dR::synapse0x30275a0() {
   return (neuron0x3010810()*-0.0167332);
}

double NNfunction_ns_chi04_dR::synapse0x30275e0() {
   return (neuron0x3010b50()*0.0151785);
}

double NNfunction_ns_chi04_dR::synapse0x3027620() {
   return (neuron0x3010e90()*-0.000970851);
}

double NNfunction_ns_chi04_dR::synapse0x3027660() {
   return (neuron0x30111d0()*-0.0316304);
}

double NNfunction_ns_chi04_dR::synapse0x30276a0() {
   return (neuron0x3011510()*-0.011996);
}

double NNfunction_ns_chi04_dR::synapse0x30276e0() {
   return (neuron0x3011850()*-0.0205286);
}

double NNfunction_ns_chi04_dR::synapse0x3027170() {
   return (neuron0x3011b90()*0.00380177);
}

double NNfunction_ns_chi04_dR::synapse0x30271b0() {
   return (neuron0x30120f0()*0.523226);
}

double NNfunction_ns_chi04_dR::synapse0x3027830() {
   return (neuron0x3012310()*-0.026652);
}

double NNfunction_ns_chi04_dR::synapse0x3027870() {
   return (neuron0x3012650()*-0.0229497);
}

double NNfunction_ns_chi04_dR::synapse0x30278b0() {
   return (neuron0x3012990()*-0.0289624);
}

double NNfunction_ns_chi04_dR::synapse0x30278f0() {
   return (neuron0x3012cd0()*-0.00643395);
}

double NNfunction_ns_chi04_dR::synapse0x3027930() {
   return (neuron0x3013010()*0.0299042);
}

double NNfunction_ns_chi04_dR::synapse0x3027970() {
   return (neuron0x3013350()*0.0658431);
}

double NNfunction_ns_chi04_dR::synapse0x3027cf0() {
   return (neuron0x300e790()*0.43663);
}

double NNfunction_ns_chi04_dR::synapse0x3027d30() {
   return (neuron0x300ead0()*1.3366);
}

double NNfunction_ns_chi04_dR::synapse0x3027d70() {
   return (neuron0x300ee10()*0.258684);
}

double NNfunction_ns_chi04_dR::synapse0x3027db0() {
   return (neuron0x300f150()*-1.00202);
}

double NNfunction_ns_chi04_dR::synapse0x3027df0() {
   return (neuron0x300f490()*-0.0805224);
}

double NNfunction_ns_chi04_dR::synapse0x3027e30() {
   return (neuron0x300f7d0()*-0.591135);
}

double NNfunction_ns_chi04_dR::synapse0x3027e70() {
   return (neuron0x300fb10()*0.248561);
}

double NNfunction_ns_chi04_dR::synapse0x3027eb0() {
   return (neuron0x300fe50()*0.0766634);
}

double NNfunction_ns_chi04_dR::synapse0x3027ef0() {
   return (neuron0x3010190()*-0.23634);
}

double NNfunction_ns_chi04_dR::synapse0x3027f30() {
   return (neuron0x30104d0()*-0.0466402);
}

double NNfunction_ns_chi04_dR::synapse0x3027f70() {
   return (neuron0x3010810()*-0.280255);
}

double NNfunction_ns_chi04_dR::synapse0x3027fb0() {
   return (neuron0x3010b50()*-0.0986499);
}

double NNfunction_ns_chi04_dR::synapse0x3027ff0() {
   return (neuron0x3010e90()*-0.720565);
}

double NNfunction_ns_chi04_dR::synapse0x3028030() {
   return (neuron0x30111d0()*-0.345802);
}

double NNfunction_ns_chi04_dR::synapse0x3028070() {
   return (neuron0x3011510()*0.329574);
}

double NNfunction_ns_chi04_dR::synapse0x30280b0() {
   return (neuron0x3011850()*-1.00351);
}

double NNfunction_ns_chi04_dR::synapse0x3027b40() {
   return (neuron0x3011b90()*-0.615936);
}

double NNfunction_ns_chi04_dR::synapse0x3027b80() {
   return (neuron0x30120f0()*-0.186726);
}

double NNfunction_ns_chi04_dR::synapse0x3028200() {
   return (neuron0x3012310()*-0.150571);
}

double NNfunction_ns_chi04_dR::synapse0x3028240() {
   return (neuron0x3012650()*-0.0558418);
}

double NNfunction_ns_chi04_dR::synapse0x3028280() {
   return (neuron0x3012990()*0.182697);
}

double NNfunction_ns_chi04_dR::synapse0x30282c0() {
   return (neuron0x3012cd0()*0.327899);
}

double NNfunction_ns_chi04_dR::synapse0x3028300() {
   return (neuron0x3013010()*1.05709);
}

double NNfunction_ns_chi04_dR::synapse0x3028340() {
   return (neuron0x3013350()*-0.375977);
}

double NNfunction_ns_chi04_dR::synapse0x30286c0() {
   return (neuron0x300e790()*0.0163559);
}

double NNfunction_ns_chi04_dR::synapse0x3028700() {
   return (neuron0x300ead0()*-0.0101715);
}

double NNfunction_ns_chi04_dR::synapse0x3028740() {
   return (neuron0x300ee10()*0.0588176);
}

double NNfunction_ns_chi04_dR::synapse0x3028780() {
   return (neuron0x300f150()*-0.795796);
}

double NNfunction_ns_chi04_dR::synapse0x30287c0() {
   return (neuron0x300f490()*-0.0040004);
}

double NNfunction_ns_chi04_dR::synapse0x3028800() {
   return (neuron0x300f7d0()*0.008759);
}

double NNfunction_ns_chi04_dR::synapse0x3028840() {
   return (neuron0x300fb10()*0.0239422);
}

double NNfunction_ns_chi04_dR::synapse0x3028880() {
   return (neuron0x300fe50()*0.0207005);
}

double NNfunction_ns_chi04_dR::synapse0x30288c0() {
   return (neuron0x3010190()*0.00113054);
}

double NNfunction_ns_chi04_dR::synapse0x3028900() {
   return (neuron0x30104d0()*-0.00238226);
}

double NNfunction_ns_chi04_dR::synapse0x3028940() {
   return (neuron0x3010810()*0.00267276);
}

double NNfunction_ns_chi04_dR::synapse0x3028980() {
   return (neuron0x3010b50()*-0.0105383);
}

double NNfunction_ns_chi04_dR::synapse0x30289c0() {
   return (neuron0x3010e90()*0.00801199);
}

double NNfunction_ns_chi04_dR::synapse0x3028a00() {
   return (neuron0x30111d0()*-0.00707323);
}

double NNfunction_ns_chi04_dR::synapse0x3028a40() {
   return (neuron0x3011510()*-0.0115958);
}

double NNfunction_ns_chi04_dR::synapse0x3028a80() {
   return (neuron0x3011850()*0.0116703);
}

double NNfunction_ns_chi04_dR::synapse0x3028510() {
   return (neuron0x3011b90()*0.00850247);
}

double NNfunction_ns_chi04_dR::synapse0x3028550() {
   return (neuron0x30120f0()*-0.387714);
}

double NNfunction_ns_chi04_dR::synapse0x3028bd0() {
   return (neuron0x3012310()*-0.0209494);
}

double NNfunction_ns_chi04_dR::synapse0x3028c10() {
   return (neuron0x3012650()*0.000961638);
}

double NNfunction_ns_chi04_dR::synapse0x3028c50() {
   return (neuron0x3012990()*0.0170433);
}

double NNfunction_ns_chi04_dR::synapse0x3028c90() {
   return (neuron0x3012cd0()*-0.0019136);
}

double NNfunction_ns_chi04_dR::synapse0x3028cd0() {
   return (neuron0x3013010()*-0.00340047);
}

double NNfunction_ns_chi04_dR::synapse0x3028d10() {
   return (neuron0x3013350()*-0.036936);
}

double NNfunction_ns_chi04_dR::synapse0x3029090() {
   return (neuron0x300e790()*-0.256769);
}

double NNfunction_ns_chi04_dR::synapse0x301d660() {
   return (neuron0x300ead0()*2.21285);
}

double NNfunction_ns_chi04_dR::synapse0x301d6a0() {
   return (neuron0x300ee10()*0.19683);
}

double NNfunction_ns_chi04_dR::synapse0x301d6e0() {
   return (neuron0x300f150()*0.165447);
}

double NNfunction_ns_chi04_dR::synapse0x301d930() {
   return (neuron0x300f490()*-0.184414);
}

double NNfunction_ns_chi04_dR::synapse0x301d970() {
   return (neuron0x300f7d0()*0.109429);
}

double NNfunction_ns_chi04_dR::synapse0x301d9b0() {
   return (neuron0x300fb10()*-0.057917);
}

double NNfunction_ns_chi04_dR::synapse0x301dc00() {
   return (neuron0x300fe50()*-0.0643229);
}

double NNfunction_ns_chi04_dR::synapse0x301dc40() {
   return (neuron0x3010190()*0.000947663);
}

double NNfunction_ns_chi04_dR::synapse0x301de90() {
   return (neuron0x30104d0()*0.169128);
}

double NNfunction_ns_chi04_dR::synapse0x301ded0() {
   return (neuron0x3010810()*0.0141678);
}

double NNfunction_ns_chi04_dR::synapse0x301df10() {
   return (neuron0x3010b50()*-0.00266843);
}

double NNfunction_ns_chi04_dR::synapse0x301e160() {
   return (neuron0x3010e90()*-0.187364);
}

double NNfunction_ns_chi04_dR::synapse0x301e1a0() {
   return (neuron0x30111d0()*0.272452);
}

double NNfunction_ns_chi04_dR::synapse0x301e3f0() {
   return (neuron0x3011510()*-0.228637);
}

double NNfunction_ns_chi04_dR::synapse0x301e430() {
   return (neuron0x3011850()*-0.204608);
}

double NNfunction_ns_chi04_dR::synapse0x3028ee0() {
   return (neuron0x3011b90()*-0.0952174);
}

double NNfunction_ns_chi04_dR::synapse0x3028f20() {
   return (neuron0x30120f0()*-0.336239);
}

double NNfunction_ns_chi04_dR::synapse0x301e580() {
   return (neuron0x3012310()*-0.228262);
}

double NNfunction_ns_chi04_dR::synapse0x301ea90() {
   return (neuron0x3012650()*-0.0408011);
}

double NNfunction_ns_chi04_dR::synapse0x301ead0() {
   return (neuron0x3012990()*-0.105289);
}

double NNfunction_ns_chi04_dR::synapse0x301eb10() {
   return (neuron0x3012cd0()*0.0765445);
}

double NNfunction_ns_chi04_dR::synapse0x301ed60() {
   return (neuron0x3013010()*-0.297433);
}

double NNfunction_ns_chi04_dR::synapse0x301eda0() {
   return (neuron0x3013350()*0.58999);
}

double NNfunction_ns_chi04_dR::synapse0x301e650() {
   return (neuron0x300e790()*-0.00698978);
}

double NNfunction_ns_chi04_dR::synapse0x301e690() {
   return (neuron0x300ead0()*0.208112);
}

double NNfunction_ns_chi04_dR::synapse0x301e6d0() {
   return (neuron0x300ee10()*-0.0922685);
}

double NNfunction_ns_chi04_dR::synapse0x301e710() {
   return (neuron0x300f150()*-0.0124704);
}

double NNfunction_ns_chi04_dR::synapse0x301f090() {
   return (neuron0x300f490()*0.0155365);
}

double NNfunction_ns_chi04_dR::synapse0x302b3e0() {
   return (neuron0x300f7d0()*-0.0274056);
}

double NNfunction_ns_chi04_dR::synapse0x302b420() {
   return (neuron0x300fb10()*-0.0357666);
}

double NNfunction_ns_chi04_dR::synapse0x302b460() {
   return (neuron0x300fe50()*-0.0451179);
}

double NNfunction_ns_chi04_dR::synapse0x302b4a0() {
   return (neuron0x3010190()*0.0125676);
}

double NNfunction_ns_chi04_dR::synapse0x302b4e0() {
   return (neuron0x30104d0()*0.0345137);
}

double NNfunction_ns_chi04_dR::synapse0x302b520() {
   return (neuron0x3010810()*0.0133774);
}

double NNfunction_ns_chi04_dR::synapse0x302b560() {
   return (neuron0x3010b50()*-0.0163938);
}

double NNfunction_ns_chi04_dR::synapse0x302b5a0() {
   return (neuron0x3010e90()*-0.0387799);
}

double NNfunction_ns_chi04_dR::synapse0x302b5e0() {
   return (neuron0x30111d0()*0.0204661);
}

double NNfunction_ns_chi04_dR::synapse0x302b620() {
   return (neuron0x3011510()*0.0208081);
}

double NNfunction_ns_chi04_dR::synapse0x302b660() {
   return (neuron0x3011850()*-0.0115346);
}

double NNfunction_ns_chi04_dR::synapse0x301ef70() {
   return (neuron0x3011b90()*-0.00727498);
}

double NNfunction_ns_chi04_dR::synapse0x301efb0() {
   return (neuron0x30120f0()*2.03268);
}

double NNfunction_ns_chi04_dR::synapse0x302b7b0() {
   return (neuron0x3012310()*-0.0118048);
}

double NNfunction_ns_chi04_dR::synapse0x302b7f0() {
   return (neuron0x3012650()*0.0129959);
}

double NNfunction_ns_chi04_dR::synapse0x302b830() {
   return (neuron0x3012990()*-0.0260534);
}

double NNfunction_ns_chi04_dR::synapse0x302b870() {
   return (neuron0x3012cd0()*0.0404472);
}

double NNfunction_ns_chi04_dR::synapse0x302b8b0() {
   return (neuron0x3013010()*-0.0136609);
}

double NNfunction_ns_chi04_dR::synapse0x302b8f0() {
   return (neuron0x3013350()*0.0814871);
}

double NNfunction_ns_chi04_dR::synapse0x302bc70() {
   return (neuron0x300e790()*0.684567);
}

double NNfunction_ns_chi04_dR::synapse0x302bcb0() {
   return (neuron0x300ead0()*-0.21345);
}

double NNfunction_ns_chi04_dR::synapse0x302bcf0() {
   return (neuron0x300ee10()*0.455822);
}

double NNfunction_ns_chi04_dR::synapse0x302bd30() {
   return (neuron0x300f150()*1.07699);
}

double NNfunction_ns_chi04_dR::synapse0x302bd70() {
   return (neuron0x300f490()*0.570298);
}

double NNfunction_ns_chi04_dR::synapse0x302bdb0() {
   return (neuron0x300f7d0()*-0.344207);
}

double NNfunction_ns_chi04_dR::synapse0x302bdf0() {
   return (neuron0x300fb10()*-0.00193039);
}

double NNfunction_ns_chi04_dR::synapse0x302be30() {
   return (neuron0x300fe50()*1.09332);
}

double NNfunction_ns_chi04_dR::synapse0x302be70() {
   return (neuron0x3010190()*-0.390266);
}

double NNfunction_ns_chi04_dR::synapse0x302beb0() {
   return (neuron0x30104d0()*1.81871);
}

double NNfunction_ns_chi04_dR::synapse0x302bef0() {
   return (neuron0x3010810()*0.583426);
}

double NNfunction_ns_chi04_dR::synapse0x302bf30() {
   return (neuron0x3010b50()*-0.0445638);
}

double NNfunction_ns_chi04_dR::synapse0x302bf70() {
   return (neuron0x3010e90()*-0.424287);
}

double NNfunction_ns_chi04_dR::synapse0x302bfb0() {
   return (neuron0x30111d0()*0.52121);
}

double NNfunction_ns_chi04_dR::synapse0x302bff0() {
   return (neuron0x3011510()*0.720635);
}

double NNfunction_ns_chi04_dR::synapse0x302c030() {
   return (neuron0x3011850()*-0.506817);
}

double NNfunction_ns_chi04_dR::synapse0x302bac0() {
   return (neuron0x3011b90()*-0.463868);
}

double NNfunction_ns_chi04_dR::synapse0x302bb00() {
   return (neuron0x30120f0()*-0.238583);
}

double NNfunction_ns_chi04_dR::synapse0x302c180() {
   return (neuron0x3012310()*0.416948);
}

double NNfunction_ns_chi04_dR::synapse0x302c1c0() {
   return (neuron0x3012650()*0.469846);
}

double NNfunction_ns_chi04_dR::synapse0x302c200() {
   return (neuron0x3012990()*0.273839);
}

double NNfunction_ns_chi04_dR::synapse0x302c240() {
   return (neuron0x3012cd0()*-0.629639);
}

double NNfunction_ns_chi04_dR::synapse0x302c280() {
   return (neuron0x3013010()*-0.586733);
}

double NNfunction_ns_chi04_dR::synapse0x302c2c0() {
   return (neuron0x3013350()*-1.75933);
}

double NNfunction_ns_chi04_dR::synapse0x302c640() {
   return (neuron0x300e790()*-0.00120439);
}

double NNfunction_ns_chi04_dR::synapse0x302c680() {
   return (neuron0x300ead0()*0.217731);
}

double NNfunction_ns_chi04_dR::synapse0x302c6c0() {
   return (neuron0x300ee10()*-0.0797293);
}

double NNfunction_ns_chi04_dR::synapse0x302c700() {
   return (neuron0x300f150()*-0.00871568);
}

double NNfunction_ns_chi04_dR::synapse0x302c740() {
   return (neuron0x300f490()*0.0238858);
}

double NNfunction_ns_chi04_dR::synapse0x302c780() {
   return (neuron0x300f7d0()*-0.00483821);
}

double NNfunction_ns_chi04_dR::synapse0x302c7c0() {
   return (neuron0x300fb10()*-0.0116809);
}

double NNfunction_ns_chi04_dR::synapse0x302c800() {
   return (neuron0x300fe50()*-0.0011928);
}

double NNfunction_ns_chi04_dR::synapse0x302c840() {
   return (neuron0x3010190()*-0.0166271);
}

double NNfunction_ns_chi04_dR::synapse0x302c880() {
   return (neuron0x30104d0()*-0.00577579);
}

double NNfunction_ns_chi04_dR::synapse0x302c8c0() {
   return (neuron0x3010810()*0.00310734);
}

double NNfunction_ns_chi04_dR::synapse0x302c900() {
   return (neuron0x3010b50()*0.00101884);
}

double NNfunction_ns_chi04_dR::synapse0x302c940() {
   return (neuron0x3010e90()*-0.00935806);
}

double NNfunction_ns_chi04_dR::synapse0x302c980() {
   return (neuron0x30111d0()*0.0120645);
}

double NNfunction_ns_chi04_dR::synapse0x302c9c0() {
   return (neuron0x3011510()*0.0246025);
}

double NNfunction_ns_chi04_dR::synapse0x302ca00() {
   return (neuron0x3011850()*0.0155836);
}

double NNfunction_ns_chi04_dR::synapse0x302c490() {
   return (neuron0x3011b90()*-0.0123759);
}

double NNfunction_ns_chi04_dR::synapse0x302c4d0() {
   return (neuron0x30120f0()*0.735534);
}

double NNfunction_ns_chi04_dR::synapse0x302cb50() {
   return (neuron0x3012310()*0.0169081);
}

double NNfunction_ns_chi04_dR::synapse0x302cb90() {
   return (neuron0x3012650()*0.0155741);
}

double NNfunction_ns_chi04_dR::synapse0x302cbd0() {
   return (neuron0x3012990()*-0.00823129);
}

double NNfunction_ns_chi04_dR::synapse0x302cc10() {
   return (neuron0x3012cd0()*0.0122496);
}

double NNfunction_ns_chi04_dR::synapse0x302cc50() {
   return (neuron0x3013010()*-0.0124091);
}

double NNfunction_ns_chi04_dR::synapse0x302cc90() {
   return (neuron0x3013350()*0.0104833);
}

double NNfunction_ns_chi04_dR::synapse0x302d010() {
   return (neuron0x300e790()*0.0175914);
}

double NNfunction_ns_chi04_dR::synapse0x302d050() {
   return (neuron0x300ead0()*3.81521);
}

double NNfunction_ns_chi04_dR::synapse0x302d090() {
   return (neuron0x300ee10()*-2.60751);
}

double NNfunction_ns_chi04_dR::synapse0x302d0d0() {
   return (neuron0x300f150()*0.0250814);
}

double NNfunction_ns_chi04_dR::synapse0x302d110() {
   return (neuron0x300f490()*0.0357756);
}

double NNfunction_ns_chi04_dR::synapse0x302d150() {
   return (neuron0x300f7d0()*-0.0299025);
}

double NNfunction_ns_chi04_dR::synapse0x302d190() {
   return (neuron0x300fb10()*-0.0551189);
}

double NNfunction_ns_chi04_dR::synapse0x302d1d0() {
   return (neuron0x300fe50()*-0.0359961);
}

double NNfunction_ns_chi04_dR::synapse0x302d210() {
   return (neuron0x3010190()*-0.0308246);
}

double NNfunction_ns_chi04_dR::synapse0x302d250() {
   return (neuron0x30104d0()*-0.0422196);
}

double NNfunction_ns_chi04_dR::synapse0x302d290() {
   return (neuron0x3010810()*0.0216791);
}

double NNfunction_ns_chi04_dR::synapse0x302d2d0() {
   return (neuron0x3010b50()*-0.0576168);
}

double NNfunction_ns_chi04_dR::synapse0x302d310() {
   return (neuron0x3010e90()*-0.0512498);
}

double NNfunction_ns_chi04_dR::synapse0x302d350() {
   return (neuron0x30111d0()*-0.0305559);
}

double NNfunction_ns_chi04_dR::synapse0x302d390() {
   return (neuron0x3011510()*0.0396047);
}

double NNfunction_ns_chi04_dR::synapse0x302d3d0() {
   return (neuron0x3011850()*0.0106667);
}

double NNfunction_ns_chi04_dR::synapse0x302ce60() {
   return (neuron0x3011b90()*-0.0630751);
}

double NNfunction_ns_chi04_dR::synapse0x302cea0() {
   return (neuron0x30120f0()*-0.686432);
}

double NNfunction_ns_chi04_dR::synapse0x302d520() {
   return (neuron0x3012310()*-0.000690767);
}

double NNfunction_ns_chi04_dR::synapse0x302d560() {
   return (neuron0x3012650()*-0.0267556);
}

double NNfunction_ns_chi04_dR::synapse0x302d5a0() {
   return (neuron0x3012990()*0.0260838);
}

double NNfunction_ns_chi04_dR::synapse0x302d5e0() {
   return (neuron0x3012cd0()*-0.011363);
}

double NNfunction_ns_chi04_dR::synapse0x302d620() {
   return (neuron0x3013010()*0.0186359);
}

double NNfunction_ns_chi04_dR::synapse0x302d660() {
   return (neuron0x3013350()*-0.538239);
}

double NNfunction_ns_chi04_dR::synapse0x302d9e0() {
   return (neuron0x300e790()*-0.236566);
}

double NNfunction_ns_chi04_dR::synapse0x302da20() {
   return (neuron0x300ead0()*1.32936);
}

double NNfunction_ns_chi04_dR::synapse0x302da60() {
   return (neuron0x300ee10()*0.411239);
}

double NNfunction_ns_chi04_dR::synapse0x302daa0() {
   return (neuron0x300f150()*-0.970201);
}

double NNfunction_ns_chi04_dR::synapse0x302dae0() {
   return (neuron0x300f490()*0.792477);
}

double NNfunction_ns_chi04_dR::synapse0x302db20() {
   return (neuron0x300f7d0()*-0.0861936);
}

double NNfunction_ns_chi04_dR::synapse0x302db60() {
   return (neuron0x300fb10()*-0.0338312);
}

double NNfunction_ns_chi04_dR::synapse0x302dba0() {
   return (neuron0x300fe50()*0.227368);
}

double NNfunction_ns_chi04_dR::synapse0x302dbe0() {
   return (neuron0x3010190()*0.152518);
}

double NNfunction_ns_chi04_dR::synapse0x302dc20() {
   return (neuron0x30104d0()*-0.488417);
}

double NNfunction_ns_chi04_dR::synapse0x302dc60() {
   return (neuron0x3010810()*-0.704322);
}

double NNfunction_ns_chi04_dR::synapse0x302dca0() {
   return (neuron0x3010b50()*-0.168742);
}

double NNfunction_ns_chi04_dR::synapse0x302dce0() {
   return (neuron0x3010e90()*0.0595646);
}

double NNfunction_ns_chi04_dR::synapse0x302dd20() {
   return (neuron0x30111d0()*-0.13145);
}

double NNfunction_ns_chi04_dR::synapse0x302dd60() {
   return (neuron0x3011510()*0.00736478);
}

double NNfunction_ns_chi04_dR::synapse0x302dda0() {
   return (neuron0x3011850()*0.381805);
}

double NNfunction_ns_chi04_dR::synapse0x302d830() {
   return (neuron0x3011b90()*-0.503419);
}

double NNfunction_ns_chi04_dR::synapse0x302d870() {
   return (neuron0x30120f0()*0.465296);
}

double NNfunction_ns_chi04_dR::synapse0x302def0() {
   return (neuron0x3012310()*-0.270042);
}

double NNfunction_ns_chi04_dR::synapse0x302df30() {
   return (neuron0x3012650()*0.263355);
}

double NNfunction_ns_chi04_dR::synapse0x302df70() {
   return (neuron0x3012990()*-0.209727);
}

double NNfunction_ns_chi04_dR::synapse0x302dfb0() {
   return (neuron0x3012cd0()*0.453691);
}

double NNfunction_ns_chi04_dR::synapse0x302dff0() {
   return (neuron0x3013010()*-0.272292);
}

double NNfunction_ns_chi04_dR::synapse0x302e030() {
   return (neuron0x3013350()*0.317475);
}

double NNfunction_ns_chi04_dR::synapse0x302e3b0() {
   return (neuron0x300e790()*-0.0263571);
}

double NNfunction_ns_chi04_dR::synapse0x302e3f0() {
   return (neuron0x300ead0()*-1.74948);
}

double NNfunction_ns_chi04_dR::synapse0x302e430() {
   return (neuron0x300ee10()*0.10142);
}

double NNfunction_ns_chi04_dR::synapse0x302e470() {
   return (neuron0x300f150()*-0.0160854);
}

double NNfunction_ns_chi04_dR::synapse0x302e4b0() {
   return (neuron0x300f490()*-0.00606656);
}

double NNfunction_ns_chi04_dR::synapse0x302e4f0() {
   return (neuron0x300f7d0()*0.0105971);
}

double NNfunction_ns_chi04_dR::synapse0x302e530() {
   return (neuron0x300fb10()*0.0210845);
}

double NNfunction_ns_chi04_dR::synapse0x302e570() {
   return (neuron0x300fe50()*0.0244552);
}

double NNfunction_ns_chi04_dR::synapse0x302e5b0() {
   return (neuron0x3010190()*0.0105176);
}

double NNfunction_ns_chi04_dR::synapse0x302e5f0() {
   return (neuron0x30104d0()*0.0157044);
}

double NNfunction_ns_chi04_dR::synapse0x302e630() {
   return (neuron0x3010810()*0.00756511);
}

double NNfunction_ns_chi04_dR::synapse0x302e670() {
   return (neuron0x3010b50()*-0.0393733);
}

double NNfunction_ns_chi04_dR::synapse0x302e6b0() {
   return (neuron0x3010e90()*-0.0268077);
}

double NNfunction_ns_chi04_dR::synapse0x302e6f0() {
   return (neuron0x30111d0()*0.0105522);
}

double NNfunction_ns_chi04_dR::synapse0x302e730() {
   return (neuron0x3011510()*-0.0204148);
}

double NNfunction_ns_chi04_dR::synapse0x302e770() {
   return (neuron0x3011850()*-0.0064608);
}

double NNfunction_ns_chi04_dR::synapse0x302e200() {
   return (neuron0x3011b90()*-0.0257501);
}

double NNfunction_ns_chi04_dR::synapse0x302e240() {
   return (neuron0x30120f0()*-0.298572);
}

double NNfunction_ns_chi04_dR::synapse0x302e8c0() {
   return (neuron0x3012310()*-0.0741412);
}

double NNfunction_ns_chi04_dR::synapse0x302e900() {
   return (neuron0x3012650()*0.0519907);
}

double NNfunction_ns_chi04_dR::synapse0x302e940() {
   return (neuron0x3012990()*-0.0633389);
}

double NNfunction_ns_chi04_dR::synapse0x302e980() {
   return (neuron0x3012cd0()*0.00568702);
}

double NNfunction_ns_chi04_dR::synapse0x302e9c0() {
   return (neuron0x3013010()*0.0158754);
}

double NNfunction_ns_chi04_dR::synapse0x302ea00() {
   return (neuron0x3013350()*-0.93553);
}

double NNfunction_ns_chi04_dR::synapse0x302ed80() {
   return (neuron0x300e790()*-0.126367);
}

double NNfunction_ns_chi04_dR::synapse0x302edc0() {
   return (neuron0x300ead0()*2.38691);
}

double NNfunction_ns_chi04_dR::synapse0x302ee00() {
   return (neuron0x300ee10()*1.82659);
}

double NNfunction_ns_chi04_dR::synapse0x302ee40() {
   return (neuron0x300f150()*-1.33009);
}

double NNfunction_ns_chi04_dR::synapse0x302ee80() {
   return (neuron0x300f490()*-0.0419518);
}

double NNfunction_ns_chi04_dR::synapse0x302eec0() {
   return (neuron0x300f7d0()*0.645188);
}

double NNfunction_ns_chi04_dR::synapse0x302ef00() {
   return (neuron0x300fb10()*-0.491873);
}

double NNfunction_ns_chi04_dR::synapse0x302ef40() {
   return (neuron0x300fe50()*-0.74342);
}

double NNfunction_ns_chi04_dR::synapse0x302ef80() {
   return (neuron0x3010190()*-0.347172);
}

double NNfunction_ns_chi04_dR::synapse0x302efc0() {
   return (neuron0x30104d0()*-0.347248);
}

double NNfunction_ns_chi04_dR::synapse0x302f000() {
   return (neuron0x3010810()*0.347338);
}

double NNfunction_ns_chi04_dR::synapse0x302f040() {
   return (neuron0x3010b50()*0.489251);
}

double NNfunction_ns_chi04_dR::synapse0x302f080() {
   return (neuron0x3010e90()*-0.609797);
}

double NNfunction_ns_chi04_dR::synapse0x302f0c0() {
   return (neuron0x30111d0()*-0.795386);
}

double NNfunction_ns_chi04_dR::synapse0x302f100() {
   return (neuron0x3011510()*-0.37594);
}

double NNfunction_ns_chi04_dR::synapse0x302f140() {
   return (neuron0x3011850()*-0.400786);
}

double NNfunction_ns_chi04_dR::synapse0x302ebd0() {
   return (neuron0x3011b90()*0.337311);
}

double NNfunction_ns_chi04_dR::synapse0x302ec10() {
   return (neuron0x30120f0()*1.40111);
}

double NNfunction_ns_chi04_dR::synapse0x302f290() {
   return (neuron0x3012310()*0.848171);
}

double NNfunction_ns_chi04_dR::synapse0x302f2d0() {
   return (neuron0x3012650()*0.642334);
}

double NNfunction_ns_chi04_dR::synapse0x302f310() {
   return (neuron0x3012990()*0.193203);
}

double NNfunction_ns_chi04_dR::synapse0x302f350() {
   return (neuron0x3012cd0()*-0.33877);
}

double NNfunction_ns_chi04_dR::synapse0x302f390() {
   return (neuron0x3013010()*0.0841391);
}

double NNfunction_ns_chi04_dR::synapse0x302f3d0() {
   return (neuron0x3013350()*2.04147);
}

double NNfunction_ns_chi04_dR::synapse0x302f750() {
   return (neuron0x300e790()*0.000929063);
}

double NNfunction_ns_chi04_dR::synapse0x302f790() {
   return (neuron0x300ead0()*3.35116);
}

double NNfunction_ns_chi04_dR::synapse0x302f7d0() {
   return (neuron0x300ee10()*0.424341);
}

double NNfunction_ns_chi04_dR::synapse0x302f810() {
   return (neuron0x300f150()*-0.0121683);
}

double NNfunction_ns_chi04_dR::synapse0x302f850() {
   return (neuron0x300f490()*-0.0230163);
}

double NNfunction_ns_chi04_dR::synapse0x302f890() {
   return (neuron0x300f7d0()*0.0296709);
}

double NNfunction_ns_chi04_dR::synapse0x302f8d0() {
   return (neuron0x300fb10()*-0.024934);
}

double NNfunction_ns_chi04_dR::synapse0x302f910() {
   return (neuron0x300fe50()*-0.0388306);
}

double NNfunction_ns_chi04_dR::synapse0x302f950() {
   return (neuron0x3010190()*-0.00618714);
}

double NNfunction_ns_chi04_dR::synapse0x302f990() {
   return (neuron0x30104d0()*-0.0166213);
}

double NNfunction_ns_chi04_dR::synapse0x302f9d0() {
   return (neuron0x3010810()*0.056692);
}

double NNfunction_ns_chi04_dR::synapse0x302fa10() {
   return (neuron0x3010b50()*0.0210361);
}

double NNfunction_ns_chi04_dR::synapse0x302fa50() {
   return (neuron0x3010e90()*-0.0245496);
}

double NNfunction_ns_chi04_dR::synapse0x302fa90() {
   return (neuron0x30111d0()*0.03651);
}

double NNfunction_ns_chi04_dR::synapse0x302fad0() {
   return (neuron0x3011510()*-0.00101038);
}

double NNfunction_ns_chi04_dR::synapse0x302fb10() {
   return (neuron0x3011850()*-0.00439434);
}

double NNfunction_ns_chi04_dR::synapse0x302f5a0() {
   return (neuron0x3011b90()*-0.00828237);
}

double NNfunction_ns_chi04_dR::synapse0x302f5e0() {
   return (neuron0x30120f0()*0.126473);
}

double NNfunction_ns_chi04_dR::synapse0x302fc60() {
   return (neuron0x3012310()*0.0304027);
}

double NNfunction_ns_chi04_dR::synapse0x302fca0() {
   return (neuron0x3012650()*-0.0231377);
}

double NNfunction_ns_chi04_dR::synapse0x302fce0() {
   return (neuron0x3012990()*-0.00130663);
}

double NNfunction_ns_chi04_dR::synapse0x302fd20() {
   return (neuron0x3012cd0()*-0.0180591);
}

double NNfunction_ns_chi04_dR::synapse0x302fd60() {
   return (neuron0x3013010()*0.00870798);
}

double NNfunction_ns_chi04_dR::synapse0x302fda0() {
   return (neuron0x3013350()*-1.50087);
}

double NNfunction_ns_chi04_dR::synapse0x3018850() {
   return (neuron0x300e790()*0.702569);
}

double NNfunction_ns_chi04_dR::synapse0x3018890() {
   return (neuron0x300ead0()*1.76918);
}

double NNfunction_ns_chi04_dR::synapse0x30188d0() {
   return (neuron0x300ee10()*0.639626);
}

double NNfunction_ns_chi04_dR::synapse0x3018910() {
   return (neuron0x300f150()*0.830531);
}

double NNfunction_ns_chi04_dR::synapse0x3018950() {
   return (neuron0x300f490()*0.585935);
}

double NNfunction_ns_chi04_dR::synapse0x3018990() {
   return (neuron0x300f7d0()*-0.344496);
}

double NNfunction_ns_chi04_dR::synapse0x30189d0() {
   return (neuron0x300fb10()*-0.269794);
}

double NNfunction_ns_chi04_dR::synapse0x3018a10() {
   return (neuron0x300fe50()*-0.210595);
}

double NNfunction_ns_chi04_dR::synapse0x3030530() {
   return (neuron0x3010190()*0.0612437);
}

double NNfunction_ns_chi04_dR::synapse0x3030570() {
   return (neuron0x30104d0()*0.182734);
}

double NNfunction_ns_chi04_dR::synapse0x30305b0() {
   return (neuron0x3010810()*0.341937);
}

double NNfunction_ns_chi04_dR::synapse0x30305f0() {
   return (neuron0x3010b50()*-0.509394);
}

double NNfunction_ns_chi04_dR::synapse0x3030630() {
   return (neuron0x3010e90()*0.263868);
}

double NNfunction_ns_chi04_dR::synapse0x3030670() {
   return (neuron0x30111d0()*-0.955672);
}

double NNfunction_ns_chi04_dR::synapse0x30306b0() {
   return (neuron0x3011510()*-0.0806243);
}

double NNfunction_ns_chi04_dR::synapse0x30306f0() {
   return (neuron0x3011850()*-0.37039);
}

double NNfunction_ns_chi04_dR::synapse0x302ff70() {
   return (neuron0x3011b90()*0.277117);
}

double NNfunction_ns_chi04_dR::synapse0x302ffb0() {
   return (neuron0x30120f0()*-0.0812459);
}

double NNfunction_ns_chi04_dR::synapse0x3030840() {
   return (neuron0x3012310()*-0.11419);
}

double NNfunction_ns_chi04_dR::synapse0x3030880() {
   return (neuron0x3012650()*-0.0452847);
}

double NNfunction_ns_chi04_dR::synapse0x30308c0() {
   return (neuron0x3012990()*-0.211724);
}

double NNfunction_ns_chi04_dR::synapse0x3030900() {
   return (neuron0x3012cd0()*0.0595365);
}

double NNfunction_ns_chi04_dR::synapse0x3030940() {
   return (neuron0x3013010()*-0.167883);
}

double NNfunction_ns_chi04_dR::synapse0x3030980() {
   return (neuron0x3013350()*1.37883);
}

double NNfunction_ns_chi04_dR::synapse0x3030d00() {
   return (neuron0x300e790()*-0.00739778);
}

double NNfunction_ns_chi04_dR::synapse0x3030d40() {
   return (neuron0x300ead0()*-13.8561);
}

double NNfunction_ns_chi04_dR::synapse0x3030d80() {
   return (neuron0x300ee10()*4.43763);
}

double NNfunction_ns_chi04_dR::synapse0x3030dc0() {
   return (neuron0x300f150()*-0.00439327);
}

double NNfunction_ns_chi04_dR::synapse0x3030e00() {
   return (neuron0x300f490()*0.0187445);
}

double NNfunction_ns_chi04_dR::synapse0x3030e40() {
   return (neuron0x300f7d0()*0.0112376);
}

double NNfunction_ns_chi04_dR::synapse0x3030e80() {
   return (neuron0x300fb10()*0.00849822);
}

double NNfunction_ns_chi04_dR::synapse0x3030ec0() {
   return (neuron0x300fe50()*0.050517);
}

double NNfunction_ns_chi04_dR::synapse0x3030f00() {
   return (neuron0x3010190()*0.040022);
}

double NNfunction_ns_chi04_dR::synapse0x3030f40() {
   return (neuron0x30104d0()*-0.00666351);
}

double NNfunction_ns_chi04_dR::synapse0x3030f80() {
   return (neuron0x3010810()*-0.0308178);
}

double NNfunction_ns_chi04_dR::synapse0x3030fc0() {
   return (neuron0x3010b50()*0.0449588);
}

double NNfunction_ns_chi04_dR::synapse0x3031000() {
   return (neuron0x3010e90()*0.0359136);
}

double NNfunction_ns_chi04_dR::synapse0x3031040() {
   return (neuron0x30111d0()*0.0290868);
}

double NNfunction_ns_chi04_dR::synapse0x3031080() {
   return (neuron0x3011510()*-0.0202032);
}

double NNfunction_ns_chi04_dR::synapse0x30310c0() {
   return (neuron0x3011850()*-0.042992);
}

double NNfunction_ns_chi04_dR::synapse0x3030b50() {
   return (neuron0x3011b90()*-0.0284338);
}

double NNfunction_ns_chi04_dR::synapse0x3030b90() {
   return (neuron0x30120f0()*-0.0527548);
}

double NNfunction_ns_chi04_dR::synapse0x3031210() {
   return (neuron0x3012310()*-0.0287278);
}

double NNfunction_ns_chi04_dR::synapse0x3031250() {
   return (neuron0x3012650()*-0.00605521);
}

double NNfunction_ns_chi04_dR::synapse0x3031290() {
   return (neuron0x3012990()*0.0044484);
}

double NNfunction_ns_chi04_dR::synapse0x30312d0() {
   return (neuron0x3012cd0()*-0.0115451);
}

double NNfunction_ns_chi04_dR::synapse0x3031310() {
   return (neuron0x3013010()*0.00697659);
}

double NNfunction_ns_chi04_dR::synapse0x3031350() {
   return (neuron0x3013350()*-0.138908);
}

double NNfunction_ns_chi04_dR::synapse0x30316d0() {
   return (neuron0x300e790()*0.248336);
}

double NNfunction_ns_chi04_dR::synapse0x3031710() {
   return (neuron0x300ead0()*-5.574);
}

double NNfunction_ns_chi04_dR::synapse0x3031750() {
   return (neuron0x300ee10()*0.289686);
}

double NNfunction_ns_chi04_dR::synapse0x3031790() {
   return (neuron0x300f150()*0.124609);
}

double NNfunction_ns_chi04_dR::synapse0x30317d0() {
   return (neuron0x300f490()*0.0217817);
}

double NNfunction_ns_chi04_dR::synapse0x3031810() {
   return (neuron0x300f7d0()*-0.158177);
}

double NNfunction_ns_chi04_dR::synapse0x3031850() {
   return (neuron0x300fb10()*0.0318323);
}

double NNfunction_ns_chi04_dR::synapse0x3031890() {
   return (neuron0x300fe50()*-0.138108);
}

double NNfunction_ns_chi04_dR::synapse0x30318d0() {
   return (neuron0x3010190()*0.120074);
}

double NNfunction_ns_chi04_dR::synapse0x3031910() {
   return (neuron0x30104d0()*-0.0235121);
}

double NNfunction_ns_chi04_dR::synapse0x3031950() {
   return (neuron0x3010810()*0.165134);
}

double NNfunction_ns_chi04_dR::synapse0x3031990() {
   return (neuron0x3010b50()*0.122825);
}

double NNfunction_ns_chi04_dR::synapse0x30319d0() {
   return (neuron0x3010e90()*0.18271);
}

double NNfunction_ns_chi04_dR::synapse0x3031a10() {
   return (neuron0x30111d0()*-0.149332);
}

double NNfunction_ns_chi04_dR::synapse0x3031a50() {
   return (neuron0x3011510()*-0.0251639);
}

double NNfunction_ns_chi04_dR::synapse0x3031a90() {
   return (neuron0x3011850()*-0.333045);
}

double NNfunction_ns_chi04_dR::synapse0x3031520() {
   return (neuron0x3011b90()*0.229674);
}

double NNfunction_ns_chi04_dR::synapse0x3031560() {
   return (neuron0x30120f0()*0.826154);
}

double NNfunction_ns_chi04_dR::synapse0x3022090() {
   return (neuron0x3012310()*0.0787407);
}

double NNfunction_ns_chi04_dR::synapse0x30220d0() {
   return (neuron0x3012650()*-0.0350968);
}

double NNfunction_ns_chi04_dR::synapse0x3022110() {
   return (neuron0x3012990()*-0.0956861);
}

double NNfunction_ns_chi04_dR::synapse0x3022150() {
   return (neuron0x3012cd0()*0.0423218);
}

double NNfunction_ns_chi04_dR::synapse0x3022190() {
   return (neuron0x3013010()*0.203927);
}

double NNfunction_ns_chi04_dR::synapse0x30221d0() {
   return (neuron0x3013350()*1.89639);
}

double NNfunction_ns_chi04_dR::synapse0x3022550() {
   return (neuron0x300e790()*0.121815);
}

double NNfunction_ns_chi04_dR::synapse0x3022590() {
   return (neuron0x300ead0()*1.24251);
}

double NNfunction_ns_chi04_dR::synapse0x30225d0() {
   return (neuron0x300ee10()*-0.230953);
}

double NNfunction_ns_chi04_dR::synapse0x3022610() {
   return (neuron0x300f150()*-0.948836);
}

double NNfunction_ns_chi04_dR::synapse0x3022650() {
   return (neuron0x300f490()*0.275024);
}

double NNfunction_ns_chi04_dR::synapse0x3022690() {
   return (neuron0x300f7d0()*-1.03501);
}

double NNfunction_ns_chi04_dR::synapse0x30226d0() {
   return (neuron0x300fb10()*0.910903);
}

double NNfunction_ns_chi04_dR::synapse0x3022710() {
   return (neuron0x300fe50()*0.178008);
}

double NNfunction_ns_chi04_dR::synapse0x3022750() {
   return (neuron0x3010190()*-0.808175);
}

double NNfunction_ns_chi04_dR::synapse0x3022790() {
   return (neuron0x30104d0()*0.561218);
}

double NNfunction_ns_chi04_dR::synapse0x30227d0() {
   return (neuron0x3010810()*-1.50003);
}

double NNfunction_ns_chi04_dR::synapse0x3022810() {
   return (neuron0x3010b50()*-0.93587);
}

double NNfunction_ns_chi04_dR::synapse0x3022850() {
   return (neuron0x3010e90()*-0.550792);
}

double NNfunction_ns_chi04_dR::synapse0x3022890() {
   return (neuron0x30111d0()*-0.393768);
}

double NNfunction_ns_chi04_dR::synapse0x30228d0() {
   return (neuron0x3011510()*-2.15463);
}

double NNfunction_ns_chi04_dR::synapse0x3022910() {
   return (neuron0x3011850()*-0.309831);
}

double NNfunction_ns_chi04_dR::synapse0x30223a0() {
   return (neuron0x3011b90()*0.547395);
}

double NNfunction_ns_chi04_dR::synapse0x30223e0() {
   return (neuron0x30120f0()*-1.38035);
}

double NNfunction_ns_chi04_dR::synapse0x3022a60() {
   return (neuron0x3012310()*-0.908865);
}

double NNfunction_ns_chi04_dR::synapse0x3022aa0() {
   return (neuron0x3012650()*-0.58097);
}

double NNfunction_ns_chi04_dR::synapse0x3022ae0() {
   return (neuron0x3012990()*0.14121);
}

double NNfunction_ns_chi04_dR::synapse0x3022b20() {
   return (neuron0x3012cd0()*0.914738);
}

double NNfunction_ns_chi04_dR::synapse0x3022b60() {
   return (neuron0x3013010()*0.859956);
}

double NNfunction_ns_chi04_dR::synapse0x3022ba0() {
   return (neuron0x3013350()*-0.0427209);
}

double NNfunction_ns_chi04_dR::synapse0x3022f20() {
   return (neuron0x300e790()*0.00579742);
}

double NNfunction_ns_chi04_dR::synapse0x3022f60() {
   return (neuron0x300ead0()*-0.00351752);
}

double NNfunction_ns_chi04_dR::synapse0x3022fa0() {
   return (neuron0x300ee10()*0.0223761);
}

double NNfunction_ns_chi04_dR::synapse0x3022fe0() {
   return (neuron0x300f150()*-2.26489);
}

double NNfunction_ns_chi04_dR::synapse0x3023020() {
   return (neuron0x300f490()*0.0037955);
}

double NNfunction_ns_chi04_dR::synapse0x3023060() {
   return (neuron0x300f7d0()*0.000557981);
}

double NNfunction_ns_chi04_dR::synapse0x30230a0() {
   return (neuron0x300fb10()*0.0112888);
}

double NNfunction_ns_chi04_dR::synapse0x30230e0() {
   return (neuron0x300fe50()*0.0102582);
}

double NNfunction_ns_chi04_dR::synapse0x3023120() {
   return (neuron0x3010190()*-0.000434481);
}

double NNfunction_ns_chi04_dR::synapse0x3023160() {
   return (neuron0x30104d0()*0.00554476);
}

double NNfunction_ns_chi04_dR::synapse0x30231a0() {
   return (neuron0x3010810()*0.00405383);
}

double NNfunction_ns_chi04_dR::synapse0x30231e0() {
   return (neuron0x3010b50()*-0.0023943);
}

double NNfunction_ns_chi04_dR::synapse0x3023220() {
   return (neuron0x3010e90()*-0.000104198);
}

double NNfunction_ns_chi04_dR::synapse0x3023260() {
   return (neuron0x30111d0()*-0.0243636);
}

double NNfunction_ns_chi04_dR::synapse0x30232a0() {
   return (neuron0x3011510()*-0.00162546);
}

double NNfunction_ns_chi04_dR::synapse0x30232e0() {
   return (neuron0x3011850()*0.0125034);
}

double NNfunction_ns_chi04_dR::synapse0x3022d70() {
   return (neuron0x3011b90()*-0.00938129);
}

double NNfunction_ns_chi04_dR::synapse0x3022db0() {
   return (neuron0x30120f0()*-0.183425);
}

double NNfunction_ns_chi04_dR::synapse0x3023430() {
   return (neuron0x3012310()*-0.0165979);
}

double NNfunction_ns_chi04_dR::synapse0x3023470() {
   return (neuron0x3012650()*-0.00172277);
}

double NNfunction_ns_chi04_dR::synapse0x30234b0() {
   return (neuron0x3012990()*0.00685786);
}

double NNfunction_ns_chi04_dR::synapse0x30234f0() {
   return (neuron0x3012cd0()*0.00692661);
}

double NNfunction_ns_chi04_dR::synapse0x3023530() {
   return (neuron0x3013010()*0.00482271);
}

double NNfunction_ns_chi04_dR::synapse0x3023570() {
   return (neuron0x3013350()*-0.0250924);
}

double NNfunction_ns_chi04_dR::synapse0x30238f0() {
   return (neuron0x300e790()*-0.0616476);
}

double NNfunction_ns_chi04_dR::synapse0x3023930() {
   return (neuron0x300ead0()*2.95262);
}

double NNfunction_ns_chi04_dR::synapse0x3023970() {
   return (neuron0x300ee10()*0.903212);
}

double NNfunction_ns_chi04_dR::synapse0x30239b0() {
   return (neuron0x300f150()*0.158389);
}

double NNfunction_ns_chi04_dR::synapse0x30239f0() {
   return (neuron0x300f490()*-0.196428);
}

double NNfunction_ns_chi04_dR::synapse0x3023a30() {
   return (neuron0x300f7d0()*0.0182203);
}

double NNfunction_ns_chi04_dR::synapse0x3023a70() {
   return (neuron0x300fb10()*0.253184);
}

double NNfunction_ns_chi04_dR::synapse0x3023ab0() {
   return (neuron0x300fe50()*-0.109458);
}

double NNfunction_ns_chi04_dR::synapse0x3023af0() {
   return (neuron0x3010190()*0.142261);
}

double NNfunction_ns_chi04_dR::synapse0x3023b30() {
   return (neuron0x30104d0()*0.054316);
}

double NNfunction_ns_chi04_dR::synapse0x3023b70() {
   return (neuron0x3010810()*0.180885);
}

double NNfunction_ns_chi04_dR::synapse0x3023bb0() {
   return (neuron0x3010b50()*0.114802);
}

double NNfunction_ns_chi04_dR::synapse0x3023bf0() {
   return (neuron0x3010e90()*-0.0776717);
}

double NNfunction_ns_chi04_dR::synapse0x3023c30() {
   return (neuron0x30111d0()*-0.13653);
}

double NNfunction_ns_chi04_dR::synapse0x3023c70() {
   return (neuron0x3011510()*0.0348637);
}

double NNfunction_ns_chi04_dR::synapse0x3023cb0() {
   return (neuron0x3011850()*0.0512322);
}

double NNfunction_ns_chi04_dR::synapse0x3023740() {
   return (neuron0x3011b90()*-0.104343);
}

double NNfunction_ns_chi04_dR::synapse0x3023780() {
   return (neuron0x30120f0()*1.33963);
}

double NNfunction_ns_chi04_dR::synapse0x3023e00() {
   return (neuron0x3012310()*-0.0993562);
}

double NNfunction_ns_chi04_dR::synapse0x3023e40() {
   return (neuron0x3012650()*-0.165653);
}

double NNfunction_ns_chi04_dR::synapse0x3023e80() {
   return (neuron0x3012990()*0.0979316);
}

double NNfunction_ns_chi04_dR::synapse0x3023ec0() {
   return (neuron0x3012cd0()*-0.0123503);
}

double NNfunction_ns_chi04_dR::synapse0x3023f00() {
   return (neuron0x3013010()*-0.0618929);
}

double NNfunction_ns_chi04_dR::synapse0x3023f40() {
   return (neuron0x3013350()*-1.13378);
}

double NNfunction_ns_chi04_dR::synapse0x3035e10() {
   return (neuron0x300e790()*-1.73371);
}

double NNfunction_ns_chi04_dR::synapse0x3035e50() {
   return (neuron0x300ead0()*-0.472223);
}

double NNfunction_ns_chi04_dR::synapse0x3035e90() {
   return (neuron0x300ee10()*0.591748);
}

double NNfunction_ns_chi04_dR::synapse0x3035ed0() {
   return (neuron0x300f150()*0.366331);
}

double NNfunction_ns_chi04_dR::synapse0x3035f10() {
   return (neuron0x300f490()*1.69194);
}

double NNfunction_ns_chi04_dR::synapse0x3035f50() {
   return (neuron0x300f7d0()*0.549606);
}

double NNfunction_ns_chi04_dR::synapse0x3035f90() {
   return (neuron0x300fb10()*-0.44551);
}

double NNfunction_ns_chi04_dR::synapse0x3035fd0() {
   return (neuron0x300fe50()*1.1072);
}

double NNfunction_ns_chi04_dR::synapse0x3036010() {
   return (neuron0x3010190()*0.293834);
}

double NNfunction_ns_chi04_dR::synapse0x3036050() {
   return (neuron0x30104d0()*-0.305264);
}

double NNfunction_ns_chi04_dR::synapse0x3036090() {
   return (neuron0x3010810()*1.06881);
}

double NNfunction_ns_chi04_dR::synapse0x30360d0() {
   return (neuron0x3010b50()*-0.107504);
}

double NNfunction_ns_chi04_dR::synapse0x3036110() {
   return (neuron0x3010e90()*-0.841125);
}

double NNfunction_ns_chi04_dR::synapse0x3036150() {
   return (neuron0x30111d0()*-0.288985);
}

double NNfunction_ns_chi04_dR::synapse0x3036190() {
   return (neuron0x3011510()*0.0275051);
}

double NNfunction_ns_chi04_dR::synapse0x30361d0() {
   return (neuron0x3011850()*0.117687);
}

double NNfunction_ns_chi04_dR::synapse0x3023f80() {
   return (neuron0x3011b90()*0.0112979);
}

double NNfunction_ns_chi04_dR::synapse0x3023fc0() {
   return (neuron0x30120f0()*0.178831);
}

double NNfunction_ns_chi04_dR::synapse0x3036320() {
   return (neuron0x3012310()*0.72225);
}

double NNfunction_ns_chi04_dR::synapse0x3036360() {
   return (neuron0x3012650()*0.155563);
}

double NNfunction_ns_chi04_dR::synapse0x30363a0() {
   return (neuron0x3012990()*-0.411914);
}

double NNfunction_ns_chi04_dR::synapse0x30363e0() {
   return (neuron0x3012cd0()*-0.938253);
}

double NNfunction_ns_chi04_dR::synapse0x3036420() {
   return (neuron0x3013010()*1.10972);
}

double NNfunction_ns_chi04_dR::synapse0x3036460() {
   return (neuron0x3013350()*0.0260598);
}

double NNfunction_ns_chi04_dR::synapse0x30367e0() {
   return (neuron0x300e790()*0.194652);
}

double NNfunction_ns_chi04_dR::synapse0x3036820() {
   return (neuron0x300ead0()*1.83801);
}

double NNfunction_ns_chi04_dR::synapse0x3036860() {
   return (neuron0x300ee10()*-0.157185);
}

double NNfunction_ns_chi04_dR::synapse0x30368a0() {
   return (neuron0x300f150()*-0.527975);
}

double NNfunction_ns_chi04_dR::synapse0x30368e0() {
   return (neuron0x300f490()*-0.107843);
}

double NNfunction_ns_chi04_dR::synapse0x3036920() {
   return (neuron0x300f7d0()*-0.281627);
}

double NNfunction_ns_chi04_dR::synapse0x3036960() {
   return (neuron0x300fb10()*-0.276544);
}

double NNfunction_ns_chi04_dR::synapse0x30369a0() {
   return (neuron0x300fe50()*0.00136546);
}

double NNfunction_ns_chi04_dR::synapse0x30369e0() {
   return (neuron0x3010190()*0.154675);
}

double NNfunction_ns_chi04_dR::synapse0x3036a20() {
   return (neuron0x30104d0()*0.175347);
}

double NNfunction_ns_chi04_dR::synapse0x3036a60() {
   return (neuron0x3010810()*0.000843485);
}

double NNfunction_ns_chi04_dR::synapse0x3036aa0() {
   return (neuron0x3010b50()*0.0453871);
}

double NNfunction_ns_chi04_dR::synapse0x3036ae0() {
   return (neuron0x3010e90()*-0.0566838);
}

double NNfunction_ns_chi04_dR::synapse0x3036b20() {
   return (neuron0x30111d0()*0.0333951);
}

double NNfunction_ns_chi04_dR::synapse0x3036b60() {
   return (neuron0x3011510()*-0.162284);
}

double NNfunction_ns_chi04_dR::synapse0x3036ba0() {
   return (neuron0x3011850()*0.815281);
}

double NNfunction_ns_chi04_dR::synapse0x3036630() {
   return (neuron0x3011b90()*0.552428);
}

double NNfunction_ns_chi04_dR::synapse0x3036670() {
   return (neuron0x30120f0()*0.138531);
}

double NNfunction_ns_chi04_dR::synapse0x3036cf0() {
   return (neuron0x3012310()*0.248275);
}

double NNfunction_ns_chi04_dR::synapse0x3036d30() {
   return (neuron0x3012650()*0.206571);
}

double NNfunction_ns_chi04_dR::synapse0x3036d70() {
   return (neuron0x3012990()*0.188558);
}

double NNfunction_ns_chi04_dR::synapse0x3036db0() {
   return (neuron0x3012cd0()*-0.119718);
}

double NNfunction_ns_chi04_dR::synapse0x3036df0() {
   return (neuron0x3013010()*0.493788);
}

double NNfunction_ns_chi04_dR::synapse0x3036e30() {
   return (neuron0x3013350()*0.366573);
}

double NNfunction_ns_chi04_dR::synapse0x30371b0() {
   return (neuron0x300e790()*0.0174883);
}

double NNfunction_ns_chi04_dR::synapse0x30371f0() {
   return (neuron0x300ead0()*0.924359);
}

double NNfunction_ns_chi04_dR::synapse0x3037230() {
   return (neuron0x300ee10()*0.254121);
}

double NNfunction_ns_chi04_dR::synapse0x3037270() {
   return (neuron0x300f150()*0.0216841);
}

double NNfunction_ns_chi04_dR::synapse0x30372b0() {
   return (neuron0x300f490()*-0.0272822);
}

double NNfunction_ns_chi04_dR::synapse0x30372f0() {
   return (neuron0x300f7d0()*0.0100677);
}

double NNfunction_ns_chi04_dR::synapse0x3037330() {
   return (neuron0x300fb10()*0.0242193);
}

double NNfunction_ns_chi04_dR::synapse0x3037370() {
   return (neuron0x300fe50()*0.0142943);
}

double NNfunction_ns_chi04_dR::synapse0x30373b0() {
   return (neuron0x3010190()*0.0154111);
}

double NNfunction_ns_chi04_dR::synapse0x30373f0() {
   return (neuron0x30104d0()*0.0249634);
}

double NNfunction_ns_chi04_dR::synapse0x3037430() {
   return (neuron0x3010810()*-0.0150063);
}

double NNfunction_ns_chi04_dR::synapse0x3037470() {
   return (neuron0x3010b50()*-0.00289386);
}

double NNfunction_ns_chi04_dR::synapse0x30374b0() {
   return (neuron0x3010e90()*0.0156771);
}

double NNfunction_ns_chi04_dR::synapse0x30374f0() {
   return (neuron0x30111d0()*-0.0289229);
}

double NNfunction_ns_chi04_dR::synapse0x3037530() {
   return (neuron0x3011510()*-0.00984609);
}

double NNfunction_ns_chi04_dR::synapse0x3037570() {
   return (neuron0x3011850()*0.00699644);
}

double NNfunction_ns_chi04_dR::synapse0x3037000() {
   return (neuron0x3011b90()*0.0119719);
}

double NNfunction_ns_chi04_dR::synapse0x3037040() {
   return (neuron0x30120f0()*0.137823);
}

double NNfunction_ns_chi04_dR::synapse0x30376c0() {
   return (neuron0x3012310()*-0.0367913);
}

double NNfunction_ns_chi04_dR::synapse0x3037700() {
   return (neuron0x3012650()*-0.0225576);
}

double NNfunction_ns_chi04_dR::synapse0x3037740() {
   return (neuron0x3012990()*-0.0235582);
}

double NNfunction_ns_chi04_dR::synapse0x3037780() {
   return (neuron0x3012cd0()*-0.00702553);
}

double NNfunction_ns_chi04_dR::synapse0x30377c0() {
   return (neuron0x3013010()*0.021971);
}

double NNfunction_ns_chi04_dR::synapse0x3037800() {
   return (neuron0x3013350()*0.0314193);
}

double NNfunction_ns_chi04_dR::synapse0x3037b80() {
   return (neuron0x300e790()*-0.0345019);
}

double NNfunction_ns_chi04_dR::synapse0x3037bc0() {
   return (neuron0x300ead0()*3.92834);
}

double NNfunction_ns_chi04_dR::synapse0x3037c00() {
   return (neuron0x300ee10()*2.62956);
}

double NNfunction_ns_chi04_dR::synapse0x3037c40() {
   return (neuron0x300f150()*-0.0585392);
}

double NNfunction_ns_chi04_dR::synapse0x3037c80() {
   return (neuron0x300f490()*-0.149387);
}

double NNfunction_ns_chi04_dR::synapse0x3037cc0() {
   return (neuron0x300f7d0()*0.0331939);
}

double NNfunction_ns_chi04_dR::synapse0x3037d00() {
   return (neuron0x300fb10()*0.112453);
}

double NNfunction_ns_chi04_dR::synapse0x3037d40() {
   return (neuron0x300fe50()*-0.0347401);
}

double NNfunction_ns_chi04_dR::synapse0x3037d80() {
   return (neuron0x3010190()*0.0306299);
}

double NNfunction_ns_chi04_dR::synapse0x3037dc0() {
   return (neuron0x30104d0()*-0.0375617);
}

double NNfunction_ns_chi04_dR::synapse0x3037e00() {
   return (neuron0x3010810()*0.0334994);
}

double NNfunction_ns_chi04_dR::synapse0x3037e40() {
   return (neuron0x3010b50()*-0.0377477);
}

double NNfunction_ns_chi04_dR::synapse0x3037e80() {
   return (neuron0x3010e90()*-0.00405427);
}

double NNfunction_ns_chi04_dR::synapse0x3037ec0() {
   return (neuron0x30111d0()*0.0629393);
}

double NNfunction_ns_chi04_dR::synapse0x3037f00() {
   return (neuron0x3011510()*0.0400539);
}

double NNfunction_ns_chi04_dR::synapse0x3037f40() {
   return (neuron0x3011850()*0.0566535);
}

double NNfunction_ns_chi04_dR::synapse0x30379d0() {
   return (neuron0x3011b90()*-0.119107);
}

double NNfunction_ns_chi04_dR::synapse0x3037a10() {
   return (neuron0x30120f0()*0.444392);
}

double NNfunction_ns_chi04_dR::synapse0x3038090() {
   return (neuron0x3012310()*-0.0481659);
}

double NNfunction_ns_chi04_dR::synapse0x30380d0() {
   return (neuron0x3012650()*-0.0141688);
}

double NNfunction_ns_chi04_dR::synapse0x3038110() {
   return (neuron0x3012990()*-0.140368);
}

double NNfunction_ns_chi04_dR::synapse0x3038150() {
   return (neuron0x3012cd0()*-0.0563291);
}

double NNfunction_ns_chi04_dR::synapse0x3038190() {
   return (neuron0x3013010()*0.030331);
}

double NNfunction_ns_chi04_dR::synapse0x30381d0() {
   return (neuron0x3013350()*-3.89214);
}

double NNfunction_ns_chi04_dR::synapse0x2dd80e0() {
   return (neuron0x30137c0()*-0.0989382);
}

double NNfunction_ns_chi04_dR::synapse0x2dd8120() {
   return (neuron0x3014110()*-3.07554);
}

double NNfunction_ns_chi04_dR::synapse0x3015c80() {
   return (neuron0x3014bf0()*0.131983);
}

double NNfunction_ns_chi04_dR::synapse0x3015cc0() {
   return (neuron0x3014690()*-0.0857777);
}

double NNfunction_ns_chi04_dR::synapse0x3016650() {
   return (neuron0x30159d0()*0.238274);
}

double NNfunction_ns_chi04_dR::synapse0x3016690() {
   return (neuron0x30163a0()*0.31642);
}

double NNfunction_ns_chi04_dR::synapse0x3017420() {
   return (neuron0x3017170()*-0.750269);
}

double NNfunction_ns_chi04_dR::synapse0x3017460() {
   return (neuron0x3017b40()*-0.303904);
}

double NNfunction_ns_chi04_dR::synapse0x3017df0() {
   return (neuron0x3018510()*-0.653219);
}

double NNfunction_ns_chi04_dR::synapse0x3017e30() {
   return (neuron0x3018ff0()*-0.0660916);
}

double NNfunction_ns_chi04_dR::synapse0x30187c0() {
   return (neuron0x30199c0()*0.0370712);
}

double NNfunction_ns_chi04_dR::synapse0x3018800() {
   return (neuron0x3016aa0()*-0.597264);
}

double NNfunction_ns_chi04_dR::synapse0x30192a0() {
   return (neuron0x301b570()*-0.193842);
}

double NNfunction_ns_chi04_dR::synapse0x30192e0() {
   return (neuron0x301bf40()*-0.216465);
}

double NNfunction_ns_chi04_dR::synapse0x3019c70() {
   return (neuron0x301c910()*0.013761);
}

double NNfunction_ns_chi04_dR::synapse0x3019cb0() {
   return (neuron0x301d2e0()*-0.548286);
}

double NNfunction_ns_chi04_dR::synapse0x3016d50() {
   return (neuron0x301f0f0()*1.93093);
}

double NNfunction_ns_chi04_dR::synapse0x3016d90() {
   return (neuron0x301f3d0()*1.2655);
}

double NNfunction_ns_chi04_dR::synapse0x301b820() {
   return (neuron0x301fda0()*-1.59163);
}

double NNfunction_ns_chi04_dR::synapse0x301b860() {
   return (neuron0x3020770()*-1.25116);
}

double NNfunction_ns_chi04_dR::synapse0x301c1f0() {
   return (neuron0x3021140()*1.1797);
}

double NNfunction_ns_chi04_dR::synapse0x301c230() {
   return (neuron0x3021b10()*-0.31486);
}

double NNfunction_ns_chi04_dR::synapse0x301cbc0() {
   return (neuron0x301a660()*-0.343691);
}

double NNfunction_ns_chi04_dR::synapse0x301cc00() {
   return (neuron0x301b030()*-0.40295);
}

double NNfunction_ns_chi04_dR::synapse0x301d590() {
   return (neuron0x30248a0()*-0.237248);
}

double NNfunction_ns_chi04_dR::synapse0x301d5d0() {
   return (neuron0x3025270()*0.120527);
}

double NNfunction_ns_chi04_dR::synapse0x3011730() {
   return (neuron0x3025c40()*-2.06719);
}

double NNfunction_ns_chi04_dR::synapse0x3011770() {
   return (neuron0x3026610()*1.53105);
}

double NNfunction_ns_chi04_dR::synapse0x301f680() {
   return (neuron0x3026fe0()*1.72145);
}

double NNfunction_ns_chi04_dR::synapse0x301f6c0() {
   return (neuron0x30279b0()*0.0287505);
}

double NNfunction_ns_chi04_dR::synapse0x3020050() {
   return (neuron0x3028380()*-0.0537704);
}

double NNfunction_ns_chi04_dR::synapse0x3020090() {
   return (neuron0x3028d50()*2.9964);
}

double NNfunction_ns_chi04_dR::synapse0x3020a20() {
   return (neuron0x301ede0()*1.12734);
}

double NNfunction_ns_chi04_dR::synapse0x3020a60() {
   return (neuron0x302b930()*-0.106898);
}

double NNfunction_ns_chi04_dR::synapse0x30213f0() {
   return (neuron0x302c300()*2.95094);
}

double NNfunction_ns_chi04_dR::synapse0x3021430() {
   return (neuron0x302ccd0()*3.35069);
}

double NNfunction_ns_chi04_dR::synapse0x3021dc0() {
   return (neuron0x302d6a0()*0.358604);
}

double NNfunction_ns_chi04_dR::synapse0x3021e00() {
   return (neuron0x302e070()*-3.98002);
}

double NNfunction_ns_chi04_dR::synapse0x301a910() {
   return (neuron0x302ea40()*0.145323);
}

double NNfunction_ns_chi04_dR::synapse0x301a950() {
   return (neuron0x302f410()*-0.35015);
}

double NNfunction_ns_chi04_dR::synapse0x30241c0() {
   return (neuron0x302fde0()*0.189947);
}

double NNfunction_ns_chi04_dR::synapse0x3024200() {
   return (neuron0x30309c0()*-3.1469);
}

double NNfunction_ns_chi04_dR::synapse0x3024b50() {
   return (neuron0x3031390()*-0.102725);
}

double NNfunction_ns_chi04_dR::synapse0x3024b90() {
   return (neuron0x3022210()*-0.0623518);
}

double NNfunction_ns_chi04_dR::synapse0x3025520() {
   return (neuron0x3022be0()*0.245252);
}

double NNfunction_ns_chi04_dR::synapse0x3025560() {
   return (neuron0x30235b0()*2.81536);
}

double NNfunction_ns_chi04_dR::synapse0x3025ef0() {
   return (neuron0x3035bf0()*-0.15563);
}

double NNfunction_ns_chi04_dR::synapse0x3025f30() {
   return (neuron0x30364a0()*1.22389);
}

double NNfunction_ns_chi04_dR::synapse0x30268c0() {
   return (neuron0x3036e70()*1.38036);
}

double NNfunction_ns_chi04_dR::synapse0x3026900() {
   return (neuron0x3037840()*-2.66837);
}

double NNfunction_ns_chi04_dR::synapse0x3029000() {
   return (neuron0x30137c0()*-0.000287683);
}

double NNfunction_ns_chi04_dR::synapse0x3029040() {
   return (neuron0x3014110()*-2.56888);
}

double NNfunction_ns_chi04_dR::synapse0x301e5c0() {
   return (neuron0x3014bf0()*-0.00203387);
}

double NNfunction_ns_chi04_dR::synapse0x301e600() {
   return (neuron0x3014690()*0.0281948);
}

double NNfunction_ns_chi04_dR::synapse0x302bbe0() {
   return (neuron0x30159d0()*0.00942038);
}

double NNfunction_ns_chi04_dR::synapse0x302bc20() {
   return (neuron0x30163a0()*0.0722512);
}

double NNfunction_ns_chi04_dR::synapse0x302c5b0() {
   return (neuron0x3017170()*0.0500647);
}

double NNfunction_ns_chi04_dR::synapse0x302c5f0() {
   return (neuron0x3017b40()*-1.19072);
}

double NNfunction_ns_chi04_dR::synapse0x302cf80() {
   return (neuron0x3018510()*1.97433);
}

double NNfunction_ns_chi04_dR::synapse0x302cfc0() {
   return (neuron0x3018ff0()*0.00315604);
}

double NNfunction_ns_chi04_dR::synapse0x302d950() {
   return (neuron0x30199c0()*-0.0295381);
}

double NNfunction_ns_chi04_dR::synapse0x302d990() {
   return (neuron0x3016aa0()*-4.18943);
}

double NNfunction_ns_chi04_dR::synapse0x302e320() {
   return (neuron0x301b570()*0.0104981);
}

double NNfunction_ns_chi04_dR::synapse0x302e360() {
   return (neuron0x301bf40()*-0.055075);
}

double NNfunction_ns_chi04_dR::synapse0x302ecf0() {
   return (neuron0x301c910()*-0.00186492);
}

double NNfunction_ns_chi04_dR::synapse0x302ed30() {
   return (neuron0x301d2e0()*-0.0346984);
}

double NNfunction_ns_chi04_dR::synapse0x302f6c0() {
   return (neuron0x301f0f0()*-0.646087);
}

double NNfunction_ns_chi04_dR::synapse0x302f700() {
   return (neuron0x301f3d0()*0.188331);
}

double NNfunction_ns_chi04_dR::synapse0x3030090() {
   return (neuron0x301fda0()*0.658567);
}

double NNfunction_ns_chi04_dR::synapse0x30300d0() {
   return (neuron0x3020770()*-0.713577);
}

double NNfunction_ns_chi04_dR::synapse0x3030c70() {
   return (neuron0x3021140()*-0.143);
}

double NNfunction_ns_chi04_dR::synapse0x3030cb0() {
   return (neuron0x3021b10()*-0.00144312);
}

double NNfunction_ns_chi04_dR::synapse0x3031640() {
   return (neuron0x301a660()*-0.0466298);
}

double NNfunction_ns_chi04_dR::synapse0x3031680() {
   return (neuron0x301b030()*0.136995);
}

double NNfunction_ns_chi04_dR::synapse0x30224c0() {
   return (neuron0x30248a0()*1.29631);
}

double NNfunction_ns_chi04_dR::synapse0x3022500() {
   return (neuron0x3025270()*0.00637617);
}

double NNfunction_ns_chi04_dR::synapse0x3022e90() {
   return (neuron0x3025c40()*0.64054);
}

double NNfunction_ns_chi04_dR::synapse0x3022ed0() {
   return (neuron0x3026610()*-1.83428);
}

double NNfunction_ns_chi04_dR::synapse0x3023860() {
   return (neuron0x3026fe0()*3.73231);
}

double NNfunction_ns_chi04_dR::synapse0x30238a0() {
   return (neuron0x30279b0()*-0.00495053);
}

double NNfunction_ns_chi04_dR::synapse0x3035d80() {
   return (neuron0x3028380()*1.53942);
}

double NNfunction_ns_chi04_dR::synapse0x3035dc0() {
   return (neuron0x3028d50()*-0.254711);
}

double NNfunction_ns_chi04_dR::synapse0x3036750() {
   return (neuron0x301ede0()*0.0900232);
}

double NNfunction_ns_chi04_dR::synapse0x3036790() {
   return (neuron0x302b930()*-0.0337582);
}

double NNfunction_ns_chi04_dR::synapse0x3037120() {
   return (neuron0x302c300()*1.64805);
}

double NNfunction_ns_chi04_dR::synapse0x3037160() {
   return (neuron0x302ccd0()*1.00064);
}

double NNfunction_ns_chi04_dR::synapse0x3037af0() {
   return (neuron0x302d6a0()*-0.0127089);
}

double NNfunction_ns_chi04_dR::synapse0x3037b30() {
   return (neuron0x302e070()*-0.427371);
}

double NNfunction_ns_chi04_dR::synapse0x30139e0() {
   return (neuron0x302ea40()*-0.0258356);
}

double NNfunction_ns_chi04_dR::synapse0x3013a20() {
   return (neuron0x302f410()*-0.189349);
}

double NNfunction_ns_chi04_dR::synapse0x3027290() {
   return (neuron0x302fde0()*0.0501801);
}

double NNfunction_ns_chi04_dR::synapse0x30272d0() {
   return (neuron0x30309c0()*4.12542);
}

double NNfunction_ns_chi04_dR::synapse0x3038210() {
   return (neuron0x3031390()*0.0463182);
}

double NNfunction_ns_chi04_dR::synapse0x3038250() {
   return (neuron0x3022210()*0.0151282);
}

double NNfunction_ns_chi04_dR::synapse0x3038290() {
   return (neuron0x3022be0()*-1.38554);
}

double NNfunction_ns_chi04_dR::synapse0x30382d0() {
   return (neuron0x30235b0()*0.0867743);
}

double NNfunction_ns_chi04_dR::synapse0x303f180() {
   return (neuron0x3035bf0()*0.0463506);
}

double NNfunction_ns_chi04_dR::synapse0x303f1c0() {
   return (neuron0x30364a0()*-0.243025);
}

double NNfunction_ns_chi04_dR::synapse0x303f200() {
   return (neuron0x3036e70()*-4.28839);
}

double NNfunction_ns_chi04_dR::synapse0x303f240() {
   return (neuron0x3037840()*-0.556921);
}

double NNfunction_ns_chi04_dR::synapse0x303f5c0() {
   return (neuron0x30137c0()*1.78568);
}

double NNfunction_ns_chi04_dR::synapse0x303f600() {
   return (neuron0x3014110()*-1.46134);
}

double NNfunction_ns_chi04_dR::synapse0x303f640() {
   return (neuron0x3014bf0()*-2.20257);
}

double NNfunction_ns_chi04_dR::synapse0x303f680() {
   return (neuron0x3014690()*1.79974);
}

double NNfunction_ns_chi04_dR::synapse0x303f6c0() {
   return (neuron0x30159d0()*-0.558923);
}

double NNfunction_ns_chi04_dR::synapse0x303f700() {
   return (neuron0x30163a0()*1.67144);
}

double NNfunction_ns_chi04_dR::synapse0x303f740() {
   return (neuron0x3017170()*1.83491);
}

double NNfunction_ns_chi04_dR::synapse0x303f780() {
   return (neuron0x3017b40()*0.846186);
}

double NNfunction_ns_chi04_dR::synapse0x303f7c0() {
   return (neuron0x3018510()*-2.64516);
}

double NNfunction_ns_chi04_dR::synapse0x303f800() {
   return (neuron0x3018ff0()*2.41323);
}

double NNfunction_ns_chi04_dR::synapse0x303f840() {
   return (neuron0x30199c0()*-2.05668);
}

double NNfunction_ns_chi04_dR::synapse0x303f880() {
   return (neuron0x3016aa0()*-8.16115);
}

double NNfunction_ns_chi04_dR::synapse0x303f8c0() {
   return (neuron0x301b570()*-0.281784);
}

double NNfunction_ns_chi04_dR::synapse0x303f900() {
   return (neuron0x301bf40()*-1.62052);
}

double NNfunction_ns_chi04_dR::synapse0x303f940() {
   return (neuron0x301c910()*3.08922);
}

double NNfunction_ns_chi04_dR::synapse0x303f980() {
   return (neuron0x301d2e0()*-1.62294);
}

double NNfunction_ns_chi04_dR::synapse0x303f410() {
   return (neuron0x301f0f0()*1.01779);
}

double NNfunction_ns_chi04_dR::synapse0x303f450() {
   return (neuron0x301f3d0()*-5.10045);
}

double NNfunction_ns_chi04_dR::synapse0x303fad0() {
   return (neuron0x301fda0()*-0.00154361);
}

double NNfunction_ns_chi04_dR::synapse0x303fb10() {
   return (neuron0x3020770()*1.86063);
}

double NNfunction_ns_chi04_dR::synapse0x303fb50() {
   return (neuron0x3021140()*0.00300462);
}

double NNfunction_ns_chi04_dR::synapse0x303fb90() {
   return (neuron0x3021b10()*2.42605);
}

double NNfunction_ns_chi04_dR::synapse0x303fbd0() {
   return (neuron0x301a660()*2.27805);
}

double NNfunction_ns_chi04_dR::synapse0x303fc10() {
   return (neuron0x301b030()*0.761304);
}

double NNfunction_ns_chi04_dR::synapse0x303fc50() {
   return (neuron0x30248a0()*-0.839387);
}

double NNfunction_ns_chi04_dR::synapse0x303fc90() {
   return (neuron0x3025270()*2.02365);
}

double NNfunction_ns_chi04_dR::synapse0x303fcd0() {
   return (neuron0x3025c40()*2.04743);
}

double NNfunction_ns_chi04_dR::synapse0x303fd10() {
   return (neuron0x3026610()*-5.02575);
}

double NNfunction_ns_chi04_dR::synapse0x303fd50() {
   return (neuron0x3026fe0()*2.14066);
}

double NNfunction_ns_chi04_dR::synapse0x303fd90() {
   return (neuron0x30279b0()*-2.67468);
}

double NNfunction_ns_chi04_dR::synapse0x303fdd0() {
   return (neuron0x3028380()*0.352468);
}

double NNfunction_ns_chi04_dR::synapse0x303fe10() {
   return (neuron0x3028d50()*-3.17606);
}

double NNfunction_ns_chi04_dR::synapse0x303f9c0() {
   return (neuron0x301ede0()*-0.570773);
}

double NNfunction_ns_chi04_dR::synapse0x303fa00() {
   return (neuron0x302b930()*-2.18909);
}

double NNfunction_ns_chi04_dR::synapse0x303fa40() {
   return (neuron0x302c300()*1.10049);
}

double NNfunction_ns_chi04_dR::synapse0x303fa80() {
   return (neuron0x302ccd0()*0.617488);
}

double NNfunction_ns_chi04_dR::synapse0x3040060() {
   return (neuron0x302d6a0()*-2.40701);
}

double NNfunction_ns_chi04_dR::synapse0x30400a0() {
   return (neuron0x302e070()*3.92744);
}

double NNfunction_ns_chi04_dR::synapse0x30400e0() {
   return (neuron0x302ea40()*-2.96822);
}

double NNfunction_ns_chi04_dR::synapse0x3040120() {
   return (neuron0x302f410()*0.343107);
}

double NNfunction_ns_chi04_dR::synapse0x3040160() {
   return (neuron0x302fde0()*-3.14304);
}

double NNfunction_ns_chi04_dR::synapse0x30401a0() {
   return (neuron0x30309c0()*-2.3913);
}

double NNfunction_ns_chi04_dR::synapse0x30401e0() {
   return (neuron0x3031390()*4.92262);
}

double NNfunction_ns_chi04_dR::synapse0x3040220() {
   return (neuron0x3022210()*1.59936);
}

double NNfunction_ns_chi04_dR::synapse0x3040260() {
   return (neuron0x3022be0()*1.58265);
}

double NNfunction_ns_chi04_dR::synapse0x30402a0() {
   return (neuron0x30235b0()*-2.52051);
}

double NNfunction_ns_chi04_dR::synapse0x30402e0() {
   return (neuron0x3035bf0()*2.06411);
}

double NNfunction_ns_chi04_dR::synapse0x3040320() {
   return (neuron0x30364a0()*-0.790511);
}

double NNfunction_ns_chi04_dR::synapse0x3040360() {
   return (neuron0x3036e70()*0.567495);
}

double NNfunction_ns_chi04_dR::synapse0x30403a0() {
   return (neuron0x3037840()*-3.28731);
}

double NNfunction_ns_chi04_dR::synapse0x3040720() {
   return (neuron0x30137c0()*-0.00338288);
}

double NNfunction_ns_chi04_dR::synapse0x3040760() {
   return (neuron0x3014110()*1.68679);
}

double NNfunction_ns_chi04_dR::synapse0x30407a0() {
   return (neuron0x3014bf0()*0.00682972);
}

double NNfunction_ns_chi04_dR::synapse0x30407e0() {
   return (neuron0x3014690()*-0.00707841);
}

double NNfunction_ns_chi04_dR::synapse0x3040820() {
   return (neuron0x30159d0()*0.0907861);
}

double NNfunction_ns_chi04_dR::synapse0x3040860() {
   return (neuron0x30163a0()*-0.0644947);
}

double NNfunction_ns_chi04_dR::synapse0x30408a0() {
   return (neuron0x3017170()*-0.00346049);
}

double NNfunction_ns_chi04_dR::synapse0x30408e0() {
   return (neuron0x3017b40()*-4.33336);
}

double NNfunction_ns_chi04_dR::synapse0x3040920() {
   return (neuron0x3018510()*-1.89905);
}

double NNfunction_ns_chi04_dR::synapse0x3040960() {
   return (neuron0x3018ff0()*0.0196156);
}

double NNfunction_ns_chi04_dR::synapse0x30409a0() {
   return (neuron0x30199c0()*0.00788136);
}

double NNfunction_ns_chi04_dR::synapse0x30409e0() {
   return (neuron0x3016aa0()*0.00453425);
}

double NNfunction_ns_chi04_dR::synapse0x3040a20() {
   return (neuron0x301b570()*1.22499);
}

double NNfunction_ns_chi04_dR::synapse0x3040a60() {
   return (neuron0x301bf40()*0.0497962);
}

double NNfunction_ns_chi04_dR::synapse0x3040aa0() {
   return (neuron0x301c910()*0.0192363);
}

double NNfunction_ns_chi04_dR::synapse0x3040ae0() {
   return (neuron0x301d2e0()*0.0251483);
}

double NNfunction_ns_chi04_dR::synapse0x3040570() {
   return (neuron0x301f0f0()*1.93166);
}

double NNfunction_ns_chi04_dR::synapse0x30405b0() {
   return (neuron0x301f3d0()*-0.641193);
}

double NNfunction_ns_chi04_dR::synapse0x3040c30() {
   return (neuron0x301fda0()*-0.781161);
}

double NNfunction_ns_chi04_dR::synapse0x3040c70() {
   return (neuron0x3020770()*0.99179);
}

double NNfunction_ns_chi04_dR::synapse0x3040cb0() {
   return (neuron0x3021140()*0.216563);
}

double NNfunction_ns_chi04_dR::synapse0x3040cf0() {
   return (neuron0x3021b10()*0.0303953);
}

double NNfunction_ns_chi04_dR::synapse0x3040d30() {
   return (neuron0x301a660()*0.0281434);
}

double NNfunction_ns_chi04_dR::synapse0x3040d70() {
   return (neuron0x301b030()*-0.638915);
}

double NNfunction_ns_chi04_dR::synapse0x3040db0() {
   return (neuron0x30248a0()*4.27661);
}

double NNfunction_ns_chi04_dR::synapse0x3040df0() {
   return (neuron0x3025270()*0.00748119);
}

double NNfunction_ns_chi04_dR::synapse0x3040e30() {
   return (neuron0x3025c40()*0.889921);
}

double NNfunction_ns_chi04_dR::synapse0x3040e70() {
   return (neuron0x3026610()*2.02671);
}

double NNfunction_ns_chi04_dR::synapse0x3040eb0() {
   return (neuron0x3026fe0()*1.62008);
}

double NNfunction_ns_chi04_dR::synapse0x3040ef0() {
   return (neuron0x30279b0()*-0.00634626);
}

double NNfunction_ns_chi04_dR::synapse0x3040f30() {
   return (neuron0x3028380()*4.21088);
}

double NNfunction_ns_chi04_dR::synapse0x3040f70() {
   return (neuron0x3028d50()*0.121065);
}

double NNfunction_ns_chi04_dR::synapse0x3040b20() {
   return (neuron0x301ede0()*0.771783);
}

double NNfunction_ns_chi04_dR::synapse0x3040b60() {
   return (neuron0x302b930()*-0.00744062);
}

double NNfunction_ns_chi04_dR::synapse0x3040ba0() {
   return (neuron0x302c300()*2.7667);
}

double NNfunction_ns_chi04_dR::synapse0x3040be0() {
   return (neuron0x302ccd0()*0.9479);
}

double NNfunction_ns_chi04_dR::synapse0x30411c0() {
   return (neuron0x302d6a0()*0.0368105);
}

double NNfunction_ns_chi04_dR::synapse0x3041200() {
   return (neuron0x302e070()*-1.08723);
}

double NNfunction_ns_chi04_dR::synapse0x3041240() {
   return (neuron0x302ea40()*-0.0128626);
}

double NNfunction_ns_chi04_dR::synapse0x3041280() {
   return (neuron0x302f410()*2.2352);
}

double NNfunction_ns_chi04_dR::synapse0x30412c0() {
   return (neuron0x302fde0()*-0.0424275);
}

double NNfunction_ns_chi04_dR::synapse0x3041300() {
   return (neuron0x30309c0()*-1.00512);
}

double NNfunction_ns_chi04_dR::synapse0x3041340() {
   return (neuron0x3031390()*0.0420757);
}

double NNfunction_ns_chi04_dR::synapse0x3041380() {
   return (neuron0x3022210()*-0.0151531);
}

double NNfunction_ns_chi04_dR::synapse0x30413c0() {
   return (neuron0x3022be0()*-4.35091);
}

double NNfunction_ns_chi04_dR::synapse0x3041400() {
   return (neuron0x30235b0()*-0.0310909);
}

double NNfunction_ns_chi04_dR::synapse0x3041440() {
   return (neuron0x3035bf0()*-0.00825317);
}

double NNfunction_ns_chi04_dR::synapse0x3041480() {
   return (neuron0x30364a0()*0.162039);
}

double NNfunction_ns_chi04_dR::synapse0x30414c0() {
   return (neuron0x3036e70()*-0.946834);
}

double NNfunction_ns_chi04_dR::synapse0x3041500() {
   return (neuron0x3037840()*0.631435);
}

double NNfunction_ns_chi04_dR::synapse0x3041880() {
   return (neuron0x30137c0()*-0.0128309);
}

double NNfunction_ns_chi04_dR::synapse0x30418c0() {
   return (neuron0x3014110()*0.291291);
}

double NNfunction_ns_chi04_dR::synapse0x3041900() {
   return (neuron0x3014bf0()*-0.00306027);
}

double NNfunction_ns_chi04_dR::synapse0x3041940() {
   return (neuron0x3014690()*0.00368199);
}

double NNfunction_ns_chi04_dR::synapse0x3041980() {
   return (neuron0x30159d0()*0.00105417);
}

double NNfunction_ns_chi04_dR::synapse0x30419c0() {
   return (neuron0x30163a0()*-0.00338254);
}

double NNfunction_ns_chi04_dR::synapse0x3041a00() {
   return (neuron0x3017170()*0.000199948);
}

double NNfunction_ns_chi04_dR::synapse0x3041a40() {
   return (neuron0x3017b40()*-1.48606);
}

double NNfunction_ns_chi04_dR::synapse0x3041a80() {
   return (neuron0x3018510()*-1.87848);
}

double NNfunction_ns_chi04_dR::synapse0x3041ac0() {
   return (neuron0x3018ff0()*-0.0147507);
}

double NNfunction_ns_chi04_dR::synapse0x3041b00() {
   return (neuron0x30199c0()*0.00782384);
}

double NNfunction_ns_chi04_dR::synapse0x3041b40() {
   return (neuron0x3016aa0()*0.685929);
}

double NNfunction_ns_chi04_dR::synapse0x3041b80() {
   return (neuron0x301b570()*-0.190414);
}

double NNfunction_ns_chi04_dR::synapse0x3041bc0() {
   return (neuron0x301bf40()*-0.0101195);
}

double NNfunction_ns_chi04_dR::synapse0x3041c00() {
   return (neuron0x301c910()*-0.0110622);
}

double NNfunction_ns_chi04_dR::synapse0x3041c40() {
   return (neuron0x301d2e0()*-0.000603347);
}

double NNfunction_ns_chi04_dR::synapse0x30416d0() {
   return (neuron0x301f0f0()*2.23889);
}

double NNfunction_ns_chi04_dR::synapse0x3041710() {
   return (neuron0x301f3d0()*0.0646551);
}

double NNfunction_ns_chi04_dR::synapse0x3041d90() {
   return (neuron0x301fda0()*-0.127894);
}

double NNfunction_ns_chi04_dR::synapse0x3041dd0() {
   return (neuron0x3020770()*-0.199667);
}

double NNfunction_ns_chi04_dR::synapse0x3041e10() {
   return (neuron0x3021140()*-0.0176556);
}

double NNfunction_ns_chi04_dR::synapse0x3041e50() {
   return (neuron0x3021b10()*0.0132618);
}

double NNfunction_ns_chi04_dR::synapse0x3041e90() {
   return (neuron0x301a660()*-0.0139564);
}

double NNfunction_ns_chi04_dR::synapse0x3041ed0() {
   return (neuron0x301b030()*-2.23448);
}

double NNfunction_ns_chi04_dR::synapse0x3041f10() {
   return (neuron0x30248a0()*1.61408);
}

double NNfunction_ns_chi04_dR::synapse0x3041f50() {
   return (neuron0x3025270()*-0.0114678);
}

double NNfunction_ns_chi04_dR::synapse0x3041f90() {
   return (neuron0x3025c40()*-0.391754);
}

double NNfunction_ns_chi04_dR::synapse0x3041fd0() {
   return (neuron0x3026610()*0.0664777);
}

double NNfunction_ns_chi04_dR::synapse0x3042010() {
   return (neuron0x3026fe0()*1.13962);
}

double NNfunction_ns_chi04_dR::synapse0x3042050() {
   return (neuron0x30279b0()*-0.00467435);
}

double NNfunction_ns_chi04_dR::synapse0x3042090() {
   return (neuron0x3028380()*1.61592);
}

double NNfunction_ns_chi04_dR::synapse0x30420d0() {
   return (neuron0x3028d50()*0.0213102);
}

double NNfunction_ns_chi04_dR::synapse0x3041c80() {
   return (neuron0x301ede0()*0.179186);
}

double NNfunction_ns_chi04_dR::synapse0x3041cc0() {
   return (neuron0x302b930()*-0.000201948);
}

double NNfunction_ns_chi04_dR::synapse0x3041d00() {
   return (neuron0x302c300()*2.59895);
}

double NNfunction_ns_chi04_dR::synapse0x3041d40() {
   return (neuron0x302ccd0()*-0.166368);
}

double NNfunction_ns_chi04_dR::synapse0x3042320() {
   return (neuron0x302d6a0()*-0.0117714);
}

double NNfunction_ns_chi04_dR::synapse0x3042360() {
   return (neuron0x302e070()*-0.11153);
}

double NNfunction_ns_chi04_dR::synapse0x30423a0() {
   return (neuron0x302ea40()*0.00341728);
}

double NNfunction_ns_chi04_dR::synapse0x30423e0() {
   return (neuron0x302f410()*0.202151);
}

double NNfunction_ns_chi04_dR::synapse0x3042420() {
   return (neuron0x302fde0()*0.0154816);
}

double NNfunction_ns_chi04_dR::synapse0x3042460() {
   return (neuron0x30309c0()*3.03165);
}

double NNfunction_ns_chi04_dR::synapse0x30424a0() {
   return (neuron0x3031390()*-0.128166);
}

double NNfunction_ns_chi04_dR::synapse0x30424e0() {
   return (neuron0x3022210()*-0.00602227);
}

double NNfunction_ns_chi04_dR::synapse0x3042520() {
   return (neuron0x3022be0()*-1.66179);
}

double NNfunction_ns_chi04_dR::synapse0x3042560() {
   return (neuron0x30235b0()*-0.284176);
}

double NNfunction_ns_chi04_dR::synapse0x30425a0() {
   return (neuron0x3035bf0()*-0.00671639);
}

double NNfunction_ns_chi04_dR::synapse0x30425e0() {
   return (neuron0x30364a0()*-0.0224457);
}

double NNfunction_ns_chi04_dR::synapse0x3042620() {
   return (neuron0x3036e70()*1.5468);
}

double NNfunction_ns_chi04_dR::synapse0x3042660() {
   return (neuron0x3037840()*-0.266495);
}

double NNfunction_ns_chi04_dR::synapse0x30428c0() {
   return (neuron0x303ea40()*-1.19169);
}

double NNfunction_ns_chi04_dR::synapse0x3042900() {
   return (neuron0x303ede0()*-3.10585);
}

double NNfunction_ns_chi04_dR::synapse0x3042940() {
   return (neuron0x303f280()*3.15453);
}

double NNfunction_ns_chi04_dR::synapse0x3042980() {
   return (neuron0x30403e0()*-8.19158);
}

double NNfunction_ns_chi04_dR::synapse0x30429c0() {
   return (neuron0x3041540()*-5.98532);
}

