#include "NNfunction_nn_chi3_charge2p.h"
#include <cmath>

double NNfunction_nn_chi3_charge2p::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.087)/14.9387;
   input1 = (in1 - 68.6676)/831.069;
   input2 = (in2 - 257.753)/190.607;
   input3 = (in3 - 384.922)/734.663;
   input4 = (in4 - 1089.62)/856.749;
   input5 = (in5 - 1088.53)/956.07;
   input6 = (in6 - 1090.76)/953.926;
   input7 = (in7 - 1068.89)/919.947;
   input8 = (in8 - 1083.91)/970.718;
   input9 = (in9 - 1077.55)/966.025;
   input10 = (in10 - 1035.57)/914.869;
   input11 = (in11 - 1092.85)/944.705;
   input12 = (in12 - 1110.69)/941.776;
   input13 = (in13 - 853.348)/691.714;
   input14 = (in14 - 1091.92)/917.813;
   input15 = (in15 - 1092.61)/918.302;
   input16 = (in16 - 729.038)/572.773;
   input17 = (in17 - 1116.88)/949.726;
   input18 = (in18 - 1117.12)/951.048;
   input19 = (in19 - 1070.23)/880.764;
   input20 = (in20 - -277.396)/497.099;
   input21 = (in21 - -354.582)/983.563;
   input22 = (in22 - 6.72534)/967.71;
   input23 = (in23 - 72.9032)/387.286;
   switch(index) {
     case 0:
         return neuron0x2eb47d0();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi3_charge2p::Value(int index, double* input) {
   input0 = (input[0] - 24.087)/14.9387;
   input1 = (input[1] - 68.6676)/831.069;
   input2 = (input[2] - 257.753)/190.607;
   input3 = (input[3] - 384.922)/734.663;
   input4 = (input[4] - 1089.62)/856.749;
   input5 = (input[5] - 1088.53)/956.07;
   input6 = (input[6] - 1090.76)/953.926;
   input7 = (input[7] - 1068.89)/919.947;
   input8 = (input[8] - 1083.91)/970.718;
   input9 = (input[9] - 1077.55)/966.025;
   input10 = (input[10] - 1035.57)/914.869;
   input11 = (input[11] - 1092.85)/944.705;
   input12 = (input[12] - 1110.69)/941.776;
   input13 = (input[13] - 853.348)/691.714;
   input14 = (input[14] - 1091.92)/917.813;
   input15 = (input[15] - 1092.61)/918.302;
   input16 = (input[16] - 729.038)/572.773;
   input17 = (input[17] - 1116.88)/949.726;
   input18 = (input[18] - 1117.12)/951.048;
   input19 = (input[19] - 1070.23)/880.764;
   input20 = (input[20] - -277.396)/497.099;
   input21 = (input[21] - -354.582)/983.563;
   input22 = (input[22] - 6.72534)/967.71;
   input23 = (input[23] - 72.9032)/387.286;
   switch(index) {
     case 0:
         return neuron0x2eb47d0();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi3_charge2p::neuron0x2e7f840() {
   return input0;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e7faf0() {
   return input1;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e7fe30() {
   return input2;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e80170() {
   return input3;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e804b0() {
   return input4;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e807f0() {
   return input5;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e80b30() {
   return input6;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e80e70() {
   return input7;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e811b0() {
   return input8;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e814f0() {
   return input9;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e81830() {
   return input10;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e81b70() {
   return input11;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e81eb0() {
   return input12;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e821f0() {
   return input13;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e82530() {
   return input14;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e82870() {
   return input15;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e82bb0() {
   return input16;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e83110() {
   return input17;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e83450() {
   return input18;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e83790() {
   return input19;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e83ad0() {
   return input20;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e83e10() {
   return input21;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e84150() {
   return input22;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e84490() {
   return input23;
}

double NNfunction_nn_chi3_charge2p::input0x2e84900() {
   double input = 8.78851;
   input += synapse0x2e84c40();
   input += synapse0x2e84c80();
   input += synapse0x2e84cc0();
   input += synapse0x2e84d00();
   input += synapse0x2e84d40();
   input += synapse0x2e84d80();
   input += synapse0x2e84dc0();
   input += synapse0x2e84e00();
   input += synapse0x2e84e40();
   input += synapse0x2e84e80();
   input += synapse0x2e84ec0();
   input += synapse0x2e84f00();
   input += synapse0x2e84f40();
   input += synapse0x2e84f80();
   input += synapse0x2e84fc0();
   input += synapse0x2e85000();
   input += synapse0x2e84a90();
   input += synapse0x2e84ad0();
   input += synapse0x2c3b9f0();
   input += synapse0x2c3ba30();
   input += synapse0x1dc1eb0();
   input += synapse0x1dc1ef0();
   input += synapse0x1dc1270();
   input += synapse0x1dc12b0();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e84900() {
   double input = input0x2e84900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e85150() {
   double input = 0.563676;
   input += synapse0x2e85490();
   input += synapse0x2e854d0();
   input += synapse0x2e85510();
   input += synapse0x2e85550();
   input += synapse0x2e85590();
   input += synapse0x2e855d0();
   input += synapse0x2e85610();
   input += synapse0x2e85650();
   input += synapse0x2e85690();
   input += synapse0x2e85040();
   input += synapse0x2e85080();
   input += synapse0x2e850c0();
   input += synapse0x2e85100();
   input += synapse0x2e858e0();
   input += synapse0x2e85920();
   input += synapse0x2e85960();
   input += synapse0x2e852e0();
   input += synapse0x2e85320();
   input += synapse0x2e85ab0();
   input += synapse0x2e85af0();
   input += synapse0x2e85b30();
   input += synapse0x2e85b70();
   input += synapse0x2e85bb0();
   input += synapse0x2e85bf0();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e85150() {
   double input = input0x2e85150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e85c30() {
   double input = 0.104284;
   input += synapse0x2e85f70();
   input += synapse0x2e85fb0();
   input += synapse0x2e85ff0();
   input += synapse0x2e86030();
   input += synapse0x2e86070();
   input += synapse0x2e860b0();
   input += synapse0x2e860f0();
   input += synapse0x2e86130();
   input += synapse0x2e86170();
   input += synapse0x2e861b0();
   input += synapse0x2e861f0();
   input += synapse0x2e86230();
   input += synapse0x2e86270();
   input += synapse0x2e862b0();
   input += synapse0x2e862f0();
   input += synapse0x2e86330();
   input += synapse0x2e85dc0();
   input += synapse0x2e85e00();
   input += synapse0x1dc1900();
   input += synapse0x2c498f0();
   input += synapse0x2c49930();
   input += synapse0x2e88250();
   input += synapse0x2e88290();
   input += synapse0x2e7f580();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e85c30() {
   double input = input0x2e85c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e856d0() {
   double input = -1.86771;
   input += synapse0x2e7f650();
   input += synapse0x2c4a170();
   input += synapse0x2e85860();
   input += synapse0x2e858a0();
   input += synapse0x2e86480();
   input += synapse0x2e864c0();
   input += synapse0x2e86500();
   input += synapse0x2e86540();
   input += synapse0x2e86580();
   input += synapse0x2e865c0();
   input += synapse0x2e86600();
   input += synapse0x2e86640();
   input += synapse0x2e86680();
   input += synapse0x2e866c0();
   input += synapse0x2e86700();
   input += synapse0x2e86740();
   input += synapse0x2e7f5c0();
   input += synapse0x2e7f600();
   input += synapse0x2e86890();
   input += synapse0x2e868d0();
   input += synapse0x2e86910();
   input += synapse0x2e86950();
   input += synapse0x2e86990();
   input += synapse0x2e869d0();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e856d0() {
   double input = input0x2e856d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e86a10() {
   double input = -0.919388;
   input += synapse0x2e86d50();
   input += synapse0x2e86d90();
   input += synapse0x2e86dd0();
   input += synapse0x2e86e10();
   input += synapse0x2e86e50();
   input += synapse0x2e86e90();
   input += synapse0x2e86ed0();
   input += synapse0x2e86f10();
   input += synapse0x2e86f50();
   input += synapse0x2e86f90();
   input += synapse0x2e86fd0();
   input += synapse0x2e87010();
   input += synapse0x2e87050();
   input += synapse0x2e87090();
   input += synapse0x2e870d0();
   input += synapse0x2e87110();
   input += synapse0x2e87260();
   input += synapse0x2e86ba0();
   input += synapse0x2e86be0();
   input += synapse0x2e88390();
   input += synapse0x2e883d0();
   input += synapse0x2e88410();
   input += synapse0x2e88450();
   input += synapse0x2e88490();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e86a10() {
   double input = input0x2e86a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e884d0() {
   double input = 9.2882;
   input += synapse0x2e88810();
   input += synapse0x2e88850();
   input += synapse0x2e88890();
   input += synapse0x2e888d0();
   input += synapse0x2e88910();
   input += synapse0x2e88950();
   input += synapse0x2e88990();
   input += synapse0x2e889d0();
   input += synapse0x2e88a10();
   input += synapse0x2c49c40();
   input += synapse0x2c49c80();
   input += synapse0x2c49cc0();
   input += synapse0x2c49d00();
   input += synapse0x2c49d40();
   input += synapse0x2c49d80();
   input += synapse0x2c49dc0();
   input += synapse0x2e88660();
   input += synapse0x2e886a0();
   input += synapse0x2c49f10();
   input += synapse0x2c49f50();
   input += synapse0x2c49f90();
   input += synapse0x2c49fd0();
   input += synapse0x2c4a010();
   input += synapse0x2e89260();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e884d0() {
   double input = input0x2e884d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e892a0() {
   double input = -3.24992;
   input += synapse0x2e895e0();
   input += synapse0x2e89620();
   input += synapse0x2e89660();
   input += synapse0x2e896a0();
   input += synapse0x2e896e0();
   input += synapse0x2e89720();
   input += synapse0x2e89760();
   input += synapse0x2e897a0();
   input += synapse0x2e897e0();
   input += synapse0x2e89820();
   input += synapse0x2e89860();
   input += synapse0x2e898a0();
   input += synapse0x2e898e0();
   input += synapse0x2e89920();
   input += synapse0x2e89960();
   input += synapse0x2e899a0();
   input += synapse0x2e89430();
   input += synapse0x2e89470();
   input += synapse0x2e89af0();
   input += synapse0x2e89b30();
   input += synapse0x2e89b70();
   input += synapse0x2e89bb0();
   input += synapse0x2e89bf0();
   input += synapse0x2e89c30();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e892a0() {
   double input = input0x2e892a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e89c70() {
   double input = 3.28709;
   input += synapse0x2e89fb0();
   input += synapse0x2e89ff0();
   input += synapse0x2e8a030();
   input += synapse0x2e8a070();
   input += synapse0x2e8a0b0();
   input += synapse0x2e8a0f0();
   input += synapse0x2e8a130();
   input += synapse0x2e8a170();
   input += synapse0x2e8a1b0();
   input += synapse0x2e8a1f0();
   input += synapse0x2e8a230();
   input += synapse0x2e8a270();
   input += synapse0x2e8a2b0();
   input += synapse0x2e8a2f0();
   input += synapse0x2e8a330();
   input += synapse0x2e8a370();
   input += synapse0x2e89e00();
   input += synapse0x2e89e40();
   input += synapse0x2e8a4c0();
   input += synapse0x2e8a500();
   input += synapse0x2e8a540();
   input += synapse0x2e8a580();
   input += synapse0x2e8a5c0();
   input += synapse0x2e8a600();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e89c70() {
   double input = input0x2e89c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e8a640() {
   double input = -0.82943;
   input += synapse0x2e83000();
   input += synapse0x2e83040();
   input += synapse0x2e83080();
   input += synapse0x2e830c0();
   input += synapse0x2e8ab90();
   input += synapse0x2e8abd0();
   input += synapse0x2e8ac10();
   input += synapse0x2e8ac50();
   input += synapse0x2e8ac90();
   input += synapse0x2e8acd0();
   input += synapse0x2e8ad10();
   input += synapse0x2e8ad50();
   input += synapse0x2e8ad90();
   input += synapse0x2e8add0();
   input += synapse0x2e8ae10();
   input += synapse0x2e8ae50();
   input += synapse0x2e8a7d0();
   input += synapse0x2e8a810();
   input += synapse0x2e8afa0();
   input += synapse0x2e8afe0();
   input += synapse0x2e8b020();
   input += synapse0x2e8b060();
   input += synapse0x2e8b0a0();
   input += synapse0x2e8b0e0();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e8a640() {
   double input = input0x2e8a640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e8b120() {
   double input = -0.911125;
   input += synapse0x2e8b460();
   input += synapse0x2e8b4a0();
   input += synapse0x2e8b4e0();
   input += synapse0x2e8b520();
   input += synapse0x2e8b560();
   input += synapse0x2e8b5a0();
   input += synapse0x2e8b5e0();
   input += synapse0x2e8b620();
   input += synapse0x2e8b660();
   input += synapse0x2e8b6a0();
   input += synapse0x2e8b6e0();
   input += synapse0x2e8b720();
   input += synapse0x2e8b760();
   input += synapse0x2e8b7a0();
   input += synapse0x2e8b7e0();
   input += synapse0x2e8b820();
   input += synapse0x2e8b2b0();
   input += synapse0x2e8b2f0();
   input += synapse0x2e8b970();
   input += synapse0x2e8b9b0();
   input += synapse0x2e8b9f0();
   input += synapse0x2e8ba30();
   input += synapse0x2e8ba70();
   input += synapse0x2e8bab0();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e8b120() {
   double input = input0x2e8b120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e8baf0() {
   double input = -1.85796;
   input += synapse0x2e8be30();
   input += synapse0x2e8be70();
   input += synapse0x2e8beb0();
   input += synapse0x2e8bef0();
   input += synapse0x2e8bf30();
   input += synapse0x2e8bf70();
   input += synapse0x2e8bfb0();
   input += synapse0x2e8bff0();
   input += synapse0x2e8c030();
   input += synapse0x2e8c070();
   input += synapse0x2e8c0b0();
   input += synapse0x2e8c0f0();
   input += synapse0x2e8c130();
   input += synapse0x2e8c170();
   input += synapse0x2e8c1b0();
   input += synapse0x2e8c1f0();
   input += synapse0x2e8bc80();
   input += synapse0x2e8bcc0();
   input += synapse0x2e88a50();
   input += synapse0x2e88a90();
   input += synapse0x2e88ad0();
   input += synapse0x2e88b10();
   input += synapse0x2e88b50();
   input += synapse0x2e88b90();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e8baf0() {
   double input = input0x2e8baf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e88bd0() {
   double input = 1.8799;
   input += synapse0x2e88f10();
   input += synapse0x2e88f50();
   input += synapse0x2e88f90();
   input += synapse0x2e88fd0();
   input += synapse0x2e89010();
   input += synapse0x2e89050();
   input += synapse0x2e89090();
   input += synapse0x2e890d0();
   input += synapse0x2e89110();
   input += synapse0x2e89150();
   input += synapse0x2e89190();
   input += synapse0x2e891d0();
   input += synapse0x2e89210();
   input += synapse0x2e8d350();
   input += synapse0x2e8d390();
   input += synapse0x2e8d3d0();
   input += synapse0x2e88d60();
   input += synapse0x2e88da0();
   input += synapse0x2e8d520();
   input += synapse0x2e8d560();
   input += synapse0x2e8d5a0();
   input += synapse0x2e8d5e0();
   input += synapse0x2e8d620();
   input += synapse0x2e8d660();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e88bd0() {
   double input = input0x2e88bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e8d6a0() {
   double input = -9.8087;
   input += synapse0x2e8d9e0();
   input += synapse0x2e8da20();
   input += synapse0x2e8da60();
   input += synapse0x2e8daa0();
   input += synapse0x2e8dae0();
   input += synapse0x2e8db20();
   input += synapse0x2e8db60();
   input += synapse0x2e8dba0();
   input += synapse0x2e8dbe0();
   input += synapse0x2e8dc20();
   input += synapse0x2e8dc60();
   input += synapse0x2e8dca0();
   input += synapse0x2e8dce0();
   input += synapse0x2e8dd20();
   input += synapse0x2e8dd60();
   input += synapse0x2e8dda0();
   input += synapse0x2e8d830();
   input += synapse0x2e8d870();
   input += synapse0x2e8def0();
   input += synapse0x2e8df30();
   input += synapse0x2e8df70();
   input += synapse0x2e8dfb0();
   input += synapse0x2e8dff0();
   input += synapse0x2e8e030();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e8d6a0() {
   double input = input0x2e8d6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e8e070() {
   double input = 1.67528;
   input += synapse0x2e8e3b0();
   input += synapse0x2e8e3f0();
   input += synapse0x2e8e430();
   input += synapse0x2e8e470();
   input += synapse0x2e8e4b0();
   input += synapse0x2e8e4f0();
   input += synapse0x2e8e530();
   input += synapse0x2e8e570();
   input += synapse0x2e8e5b0();
   input += synapse0x2e8e5f0();
   input += synapse0x2e8e630();
   input += synapse0x2e8e670();
   input += synapse0x2e8e6b0();
   input += synapse0x2e8e6f0();
   input += synapse0x2e8e730();
   input += synapse0x2e8e770();
   input += synapse0x2e8e200();
   input += synapse0x2e8e240();
   input += synapse0x2e8e8c0();
   input += synapse0x2e8e900();
   input += synapse0x2e8e940();
   input += synapse0x2e8e980();
   input += synapse0x2e8e9c0();
   input += synapse0x2e8ea00();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e8e070() {
   double input = input0x2e8e070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e8ea40() {
   double input = -0.146823;
   input += synapse0x2e8ed80();
   input += synapse0x2e8edc0();
   input += synapse0x2e8ee00();
   input += synapse0x2e8ee40();
   input += synapse0x2e8ee80();
   input += synapse0x2e8eec0();
   input += synapse0x2e8ef00();
   input += synapse0x2e8ef40();
   input += synapse0x2e8ef80();
   input += synapse0x2e8efc0();
   input += synapse0x2e8f000();
   input += synapse0x2e8f040();
   input += synapse0x2e8f080();
   input += synapse0x2e8f0c0();
   input += synapse0x2e8f100();
   input += synapse0x2e8f140();
   input += synapse0x2e8ebd0();
   input += synapse0x2e8ec10();
   input += synapse0x2e8f290();
   input += synapse0x2e8f2d0();
   input += synapse0x2e8f310();
   input += synapse0x2e8f350();
   input += synapse0x2e8f390();
   input += synapse0x2e8f3d0();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e8ea40() {
   double input = input0x2e8ea40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e8f410() {
   double input = -1.22085;
   input += synapse0x2e8f750();
   input += synapse0x2e7f9d0();
   input += synapse0x2e7fa10();
   input += synapse0x2e7fd10();
   input += synapse0x2e7fd50();
   input += synapse0x2e80050();
   input += synapse0x2e80090();
   input += synapse0x2e80390();
   input += synapse0x2e803d0();
   input += synapse0x2e806d0();
   input += synapse0x2e80710();
   input += synapse0x2e80a10();
   input += synapse0x2e80a50();
   input += synapse0x2e80d50();
   input += synapse0x2e80d90();
   input += synapse0x2e81090();
   input += synapse0x2e810d0();
   input += synapse0x2e813d0();
   input += synapse0x2e81410();
   input += synapse0x2e81710();
   input += synapse0x2e81750();
   input += synapse0x2e81a50();
   input += synapse0x2e81a90();
   input += synapse0x2e81d90();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e8f410() {
   double input = input0x2e8f410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e91220() {
   double input = 1.32672;
   input += synapse0x2e81dd0();
   input += synapse0x2e82a90();
   input += synapse0x2e82ad0();
   input += synapse0x2e8f5a0();
   input += synapse0x2e8f5e0();
   input += synapse0x2e82dd0();
   input += synapse0x2e82e10();
   input += synapse0x2e83330();
   input += synapse0x2e83370();
   input += synapse0x2e83670();
   input += synapse0x2e836b0();
   input += synapse0x2e839b0();
   input += synapse0x2e839f0();
   input += synapse0x2e83cf0();
   input += synapse0x2e83d30();
   input += synapse0x2e84030();
   input += synapse0x2e84070();
   input += synapse0x2e84370();
   input += synapse0x2e843b0();
   input += synapse0x2e846b0();
   input += synapse0x2e846f0();
   input += synapse0x2e820d0();
   input += synapse0x2e82110();
   input += synapse0x2e914c0();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e91220() {
   double input = input0x2e91220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e91500() {
   double input = -1.77177;
   input += synapse0x2e91840();
   input += synapse0x2e91880();
   input += synapse0x2e918c0();
   input += synapse0x2e91900();
   input += synapse0x2e91940();
   input += synapse0x2e91980();
   input += synapse0x2e919c0();
   input += synapse0x2e91a00();
   input += synapse0x2e91a40();
   input += synapse0x2e91a80();
   input += synapse0x2e91ac0();
   input += synapse0x2e91b00();
   input += synapse0x2e91b40();
   input += synapse0x2e91b80();
   input += synapse0x2e91bc0();
   input += synapse0x2e91c00();
   input += synapse0x2e91690();
   input += synapse0x2e916d0();
   input += synapse0x2e91d50();
   input += synapse0x2e91d90();
   input += synapse0x2e91dd0();
   input += synapse0x2e91e10();
   input += synapse0x2e91e50();
   input += synapse0x2e91e90();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e91500() {
   double input = input0x2e91500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e91ed0() {
   double input = 0.663463;
   input += synapse0x2e92210();
   input += synapse0x2e92250();
   input += synapse0x2e92290();
   input += synapse0x2e922d0();
   input += synapse0x2e92310();
   input += synapse0x2e92350();
   input += synapse0x2e92390();
   input += synapse0x2e923d0();
   input += synapse0x2e92410();
   input += synapse0x2e92450();
   input += synapse0x2e92490();
   input += synapse0x2e924d0();
   input += synapse0x2e92510();
   input += synapse0x2e92550();
   input += synapse0x2e92590();
   input += synapse0x2e925d0();
   input += synapse0x2e92060();
   input += synapse0x2e920a0();
   input += synapse0x2e92720();
   input += synapse0x2e92760();
   input += synapse0x2e927a0();
   input += synapse0x2e927e0();
   input += synapse0x2e92820();
   input += synapse0x2e92860();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e91ed0() {
   double input = input0x2e91ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e928a0() {
   double input = 4.0654;
   input += synapse0x2e92be0();
   input += synapse0x2e92c20();
   input += synapse0x2e92c60();
   input += synapse0x2e92ca0();
   input += synapse0x2e92ce0();
   input += synapse0x2e92d20();
   input += synapse0x2e92d60();
   input += synapse0x2e92da0();
   input += synapse0x2e92de0();
   input += synapse0x2e92e20();
   input += synapse0x2e92e60();
   input += synapse0x2e92ea0();
   input += synapse0x2e92ee0();
   input += synapse0x2e92f20();
   input += synapse0x2e92f60();
   input += synapse0x2e92fa0();
   input += synapse0x2e92a30();
   input += synapse0x2e92a70();
   input += synapse0x2e930f0();
   input += synapse0x2e93130();
   input += synapse0x2e93170();
   input += synapse0x2e931b0();
   input += synapse0x2e931f0();
   input += synapse0x2e93230();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e928a0() {
   double input = input0x2e928a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e93270() {
   double input = -2.51159;
   input += synapse0x2e935b0();
   input += synapse0x2e935f0();
   input += synapse0x2e93630();
   input += synapse0x2e93670();
   input += synapse0x2e936b0();
   input += synapse0x2e936f0();
   input += synapse0x2e93730();
   input += synapse0x2e93770();
   input += synapse0x2e937b0();
   input += synapse0x2e937f0();
   input += synapse0x2e93830();
   input += synapse0x2e93870();
   input += synapse0x2e938b0();
   input += synapse0x2e938f0();
   input += synapse0x2e93930();
   input += synapse0x2e93970();
   input += synapse0x2e93400();
   input += synapse0x2e93440();
   input += synapse0x2e93ac0();
   input += synapse0x2e93b00();
   input += synapse0x2e93b40();
   input += synapse0x2e93b80();
   input += synapse0x2e93bc0();
   input += synapse0x2e93c00();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e93270() {
   double input = input0x2e93270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e93c40() {
   double input = 1.91508;
   input += synapse0x2e93f80();
   input += synapse0x2e93fc0();
   input += synapse0x2e94000();
   input += synapse0x2e94040();
   input += synapse0x2e94080();
   input += synapse0x2e940c0();
   input += synapse0x2e94100();
   input += synapse0x2e94140();
   input += synapse0x2e94180();
   input += synapse0x2e8c340();
   input += synapse0x2e8c380();
   input += synapse0x2e8c3c0();
   input += synapse0x2e8c400();
   input += synapse0x2e8c440();
   input += synapse0x2e8c480();
   input += synapse0x2e8c4c0();
   input += synapse0x2e93dd0();
   input += synapse0x2e93e10();
   input += synapse0x2e8c610();
   input += synapse0x2e8c650();
   input += synapse0x2e8c690();
   input += synapse0x2e8c6d0();
   input += synapse0x2e8c710();
   input += synapse0x2e8c750();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e93c40() {
   double input = input0x2e93c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e8c790() {
   double input = -0.211863;
   input += synapse0x2e8cad0();
   input += synapse0x2e8cb10();
   input += synapse0x2e8cb50();
   input += synapse0x2e8cb90();
   input += synapse0x2e8cbd0();
   input += synapse0x2e8cc10();
   input += synapse0x2e8cc50();
   input += synapse0x2e8cc90();
   input += synapse0x2e8ccd0();
   input += synapse0x2e8cd10();
   input += synapse0x2e8cd50();
   input += synapse0x2e8cd90();
   input += synapse0x2e8cdd0();
   input += synapse0x2e8ce10();
   input += synapse0x2e8ce50();
   input += synapse0x2e8ce90();
   input += synapse0x2e8c920();
   input += synapse0x2e8c960();
   input += synapse0x2e8cfe0();
   input += synapse0x2e8d020();
   input += synapse0x2e8d060();
   input += synapse0x2e8d0a0();
   input += synapse0x2e8d0e0();
   input += synapse0x2e8d120();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e8c790() {
   double input = input0x2e8c790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e8d160() {
   double input = -2.07107;
   input += synapse0x2e8d2f0();
   input += synapse0x2e96380();
   input += synapse0x2e963c0();
   input += synapse0x2e96400();
   input += synapse0x2e96440();
   input += synapse0x2e96480();
   input += synapse0x2e964c0();
   input += synapse0x2e96500();
   input += synapse0x2e96540();
   input += synapse0x2e96580();
   input += synapse0x2e965c0();
   input += synapse0x2e96600();
   input += synapse0x2e96640();
   input += synapse0x2e96680();
   input += synapse0x2e966c0();
   input += synapse0x2e96700();
   input += synapse0x2e961d0();
   input += synapse0x2e96210();
   input += synapse0x2e96850();
   input += synapse0x2e96890();
   input += synapse0x2e968d0();
   input += synapse0x2e96910();
   input += synapse0x2e96950();
   input += synapse0x2e96990();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e8d160() {
   double input = input0x2e8d160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e969d0() {
   double input = 0.690022;
   input += synapse0x2e96d10();
   input += synapse0x2e96d50();
   input += synapse0x2e96d90();
   input += synapse0x2e96dd0();
   input += synapse0x2e96e10();
   input += synapse0x2e96e50();
   input += synapse0x2e96e90();
   input += synapse0x2e96ed0();
   input += synapse0x2e96f10();
   input += synapse0x2e96f50();
   input += synapse0x2e96f90();
   input += synapse0x2e96fd0();
   input += synapse0x2e97010();
   input += synapse0x2e97050();
   input += synapse0x2e97090();
   input += synapse0x2e970d0();
   input += synapse0x2e96b60();
   input += synapse0x2e96ba0();
   input += synapse0x2e97220();
   input += synapse0x2e97260();
   input += synapse0x2e972a0();
   input += synapse0x2e972e0();
   input += synapse0x2e97320();
   input += synapse0x2e97360();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e969d0() {
   double input = input0x2e969d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e973a0() {
   double input = -4.82539;
   input += synapse0x2e976e0();
   input += synapse0x2e97720();
   input += synapse0x2e97760();
   input += synapse0x2e977a0();
   input += synapse0x2e977e0();
   input += synapse0x2e97820();
   input += synapse0x2e97860();
   input += synapse0x2e978a0();
   input += synapse0x2e978e0();
   input += synapse0x2e97920();
   input += synapse0x2e97960();
   input += synapse0x2e979a0();
   input += synapse0x2e979e0();
   input += synapse0x2e97a20();
   input += synapse0x2e97a60();
   input += synapse0x2e97aa0();
   input += synapse0x2e97530();
   input += synapse0x2e97570();
   input += synapse0x2e97bf0();
   input += synapse0x2e97c30();
   input += synapse0x2e97c70();
   input += synapse0x2e97cb0();
   input += synapse0x2e97cf0();
   input += synapse0x2e97d30();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e973a0() {
   double input = input0x2e973a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e97d70() {
   double input = -0.210795;
   input += synapse0x2e980b0();
   input += synapse0x2e980f0();
   input += synapse0x2e98130();
   input += synapse0x2e98170();
   input += synapse0x2e981b0();
   input += synapse0x2e981f0();
   input += synapse0x2e98230();
   input += synapse0x2e98270();
   input += synapse0x2e982b0();
   input += synapse0x2e982f0();
   input += synapse0x2e98330();
   input += synapse0x2e98370();
   input += synapse0x2e983b0();
   input += synapse0x2e983f0();
   input += synapse0x2e98430();
   input += synapse0x2e98470();
   input += synapse0x2e97f00();
   input += synapse0x2e97f40();
   input += synapse0x2e985c0();
   input += synapse0x2e98600();
   input += synapse0x2e98640();
   input += synapse0x2e98680();
   input += synapse0x2e986c0();
   input += synapse0x2e98700();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e97d70() {
   double input = input0x2e97d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e98740() {
   double input = -1.10731;
   input += synapse0x2e98a80();
   input += synapse0x2e98ac0();
   input += synapse0x2e98b00();
   input += synapse0x2e98b40();
   input += synapse0x2e98b80();
   input += synapse0x2e98bc0();
   input += synapse0x2e98c00();
   input += synapse0x2e98c40();
   input += synapse0x2e98c80();
   input += synapse0x2e98cc0();
   input += synapse0x2e98d00();
   input += synapse0x2e98d40();
   input += synapse0x2e98d80();
   input += synapse0x2e98dc0();
   input += synapse0x2e98e00();
   input += synapse0x2e98e40();
   input += synapse0x2e988d0();
   input += synapse0x2e98910();
   input += synapse0x2e98f90();
   input += synapse0x2e98fd0();
   input += synapse0x2e99010();
   input += synapse0x2e99050();
   input += synapse0x2e99090();
   input += synapse0x2e990d0();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e98740() {
   double input = input0x2e98740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e99110() {
   double input = 0.1683;
   input += synapse0x2e99450();
   input += synapse0x2e99490();
   input += synapse0x2e994d0();
   input += synapse0x2e99510();
   input += synapse0x2e99550();
   input += synapse0x2e99590();
   input += synapse0x2e995d0();
   input += synapse0x2e99610();
   input += synapse0x2e99650();
   input += synapse0x2e99690();
   input += synapse0x2e996d0();
   input += synapse0x2e99710();
   input += synapse0x2e99750();
   input += synapse0x2e99790();
   input += synapse0x2e997d0();
   input += synapse0x2e99810();
   input += synapse0x2e992a0();
   input += synapse0x2e992e0();
   input += synapse0x2e99960();
   input += synapse0x2e999a0();
   input += synapse0x2e999e0();
   input += synapse0x2e99a20();
   input += synapse0x2e99a60();
   input += synapse0x2e99aa0();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e99110() {
   double input = input0x2e99110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e99ae0() {
   double input = -0.81772;
   input += synapse0x2e99e20();
   input += synapse0x2e99e60();
   input += synapse0x2e99ea0();
   input += synapse0x2e99ee0();
   input += synapse0x2e99f20();
   input += synapse0x2e99f60();
   input += synapse0x2e99fa0();
   input += synapse0x2e99fe0();
   input += synapse0x2e9a020();
   input += synapse0x2e9a060();
   input += synapse0x2e9a0a0();
   input += synapse0x2e9a0e0();
   input += synapse0x2e9a120();
   input += synapse0x2e9a160();
   input += synapse0x2e9a1a0();
   input += synapse0x2e9a1e0();
   input += synapse0x2e99c70();
   input += synapse0x2e99cb0();
   input += synapse0x2e9a330();
   input += synapse0x2e9a370();
   input += synapse0x2e9a3b0();
   input += synapse0x2e9a3f0();
   input += synapse0x2e9a430();
   input += synapse0x2e9a470();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e99ae0() {
   double input = input0x2e99ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e9a4b0() {
   double input = -0.912636;
   input += synapse0x2e9a7f0();
   input += synapse0x2e9a830();
   input += synapse0x2e9a870();
   input += synapse0x2e9a8b0();
   input += synapse0x2e9a8f0();
   input += synapse0x2e9a930();
   input += synapse0x2e9a970();
   input += synapse0x2e9a9b0();
   input += synapse0x2e9a9f0();
   input += synapse0x2e9aa30();
   input += synapse0x2e9aa70();
   input += synapse0x2e9aab0();
   input += synapse0x2e9aaf0();
   input += synapse0x2e9ab30();
   input += synapse0x2e9ab70();
   input += synapse0x2e9abb0();
   input += synapse0x2e9a640();
   input += synapse0x2e9a680();
   input += synapse0x2e9ad00();
   input += synapse0x2e9ad40();
   input += synapse0x2e9ad80();
   input += synapse0x2e9adc0();
   input += synapse0x2e9ae00();
   input += synapse0x2e9ae40();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e9a4b0() {
   double input = input0x2e9a4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e9ae80() {
   double input = 2.82582;
   input += synapse0x2e9b1c0();
   input += synapse0x2e8f790();
   input += synapse0x2e8f7d0();
   input += synapse0x2e8f810();
   input += synapse0x2e8fa60();
   input += synapse0x2e8faa0();
   input += synapse0x2e8fae0();
   input += synapse0x2e8fd30();
   input += synapse0x2e8fd70();
   input += synapse0x2e8ffc0();
   input += synapse0x2e90000();
   input += synapse0x2e90040();
   input += synapse0x2e90290();
   input += synapse0x2e902d0();
   input += synapse0x2e90520();
   input += synapse0x2e90560();
   input += synapse0x2e9b010();
   input += synapse0x2e9b050();
   input += synapse0x2e906b0();
   input += synapse0x2e90bc0();
   input += synapse0x2e90c00();
   input += synapse0x2e90c40();
   input += synapse0x2e90e90();
   input += synapse0x2e90ed0();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e9ae80() {
   double input = input0x2e9ae80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e90f10() {
   double input = -0.713037;
   input += synapse0x2e90780();
   input += synapse0x2e907c0();
   input += synapse0x2e90800();
   input += synapse0x2e90840();
   input += synapse0x2e911c0();
   input += synapse0x2e9d510();
   input += synapse0x2e9d550();
   input += synapse0x2e9d590();
   input += synapse0x2e9d5d0();
   input += synapse0x2e9d610();
   input += synapse0x2e9d650();
   input += synapse0x2e9d690();
   input += synapse0x2e9d6d0();
   input += synapse0x2e9d710();
   input += synapse0x2e9d750();
   input += synapse0x2e9d790();
   input += synapse0x2e910a0();
   input += synapse0x2e910e0();
   input += synapse0x2e9d8e0();
   input += synapse0x2e9d920();
   input += synapse0x2e9d960();
   input += synapse0x2e9d9a0();
   input += synapse0x2e9d9e0();
   input += synapse0x2e9da20();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e90f10() {
   double input = input0x2e90f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e9da60() {
   double input = -0.564599;
   input += synapse0x2e9dda0();
   input += synapse0x2e9dde0();
   input += synapse0x2e9de20();
   input += synapse0x2e9de60();
   input += synapse0x2e9dea0();
   input += synapse0x2e9dee0();
   input += synapse0x2e9df20();
   input += synapse0x2e9df60();
   input += synapse0x2e9dfa0();
   input += synapse0x2e9dfe0();
   input += synapse0x2e9e020();
   input += synapse0x2e9e060();
   input += synapse0x2e9e0a0();
   input += synapse0x2e9e0e0();
   input += synapse0x2e9e120();
   input += synapse0x2e9e160();
   input += synapse0x2e9dbf0();
   input += synapse0x2e9dc30();
   input += synapse0x2e9e2b0();
   input += synapse0x2e9e2f0();
   input += synapse0x2e9e330();
   input += synapse0x2e9e370();
   input += synapse0x2e9e3b0();
   input += synapse0x2e9e3f0();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e9da60() {
   double input = input0x2e9da60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e9e430() {
   double input = 2.51665;
   input += synapse0x2e9e770();
   input += synapse0x2e9e7b0();
   input += synapse0x2e9e7f0();
   input += synapse0x2e9e830();
   input += synapse0x2e9e870();
   input += synapse0x2e9e8b0();
   input += synapse0x2e9e8f0();
   input += synapse0x2e9e930();
   input += synapse0x2e9e970();
   input += synapse0x2e9e9b0();
   input += synapse0x2e9e9f0();
   input += synapse0x2e9ea30();
   input += synapse0x2e9ea70();
   input += synapse0x2e9eab0();
   input += synapse0x2e9eaf0();
   input += synapse0x2e9eb30();
   input += synapse0x2e9e5c0();
   input += synapse0x2e9e600();
   input += synapse0x2e9ec80();
   input += synapse0x2e9ecc0();
   input += synapse0x2e9ed00();
   input += synapse0x2e9ed40();
   input += synapse0x2e9ed80();
   input += synapse0x2e9edc0();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e9e430() {
   double input = input0x2e9e430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e9ee00() {
   double input = -1.87361;
   input += synapse0x2e9f140();
   input += synapse0x2e9f180();
   input += synapse0x2e9f1c0();
   input += synapse0x2e9f200();
   input += synapse0x2e9f240();
   input += synapse0x2e9f280();
   input += synapse0x2e9f2c0();
   input += synapse0x2e9f300();
   input += synapse0x2e9f340();
   input += synapse0x2e9f380();
   input += synapse0x2e9f3c0();
   input += synapse0x2e9f400();
   input += synapse0x2e9f440();
   input += synapse0x2e9f480();
   input += synapse0x2e9f4c0();
   input += synapse0x2e9f500();
   input += synapse0x2e9ef90();
   input += synapse0x2e9efd0();
   input += synapse0x2e9f650();
   input += synapse0x2e9f690();
   input += synapse0x2e9f6d0();
   input += synapse0x2e9f710();
   input += synapse0x2e9f750();
   input += synapse0x2e9f790();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e9ee00() {
   double input = input0x2e9ee00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e9f7d0() {
   double input = -2.94966;
   input += synapse0x2e9fb10();
   input += synapse0x2e9fb50();
   input += synapse0x2e9fb90();
   input += synapse0x2e9fbd0();
   input += synapse0x2e9fc10();
   input += synapse0x2e9fc50();
   input += synapse0x2e9fc90();
   input += synapse0x2e9fcd0();
   input += synapse0x2e9fd10();
   input += synapse0x2e9fd50();
   input += synapse0x2e9fd90();
   input += synapse0x2e9fdd0();
   input += synapse0x2e9fe10();
   input += synapse0x2e9fe50();
   input += synapse0x2e9fe90();
   input += synapse0x2e9fed0();
   input += synapse0x2e9f960();
   input += synapse0x2e9f9a0();
   input += synapse0x2ea0020();
   input += synapse0x2ea0060();
   input += synapse0x2ea00a0();
   input += synapse0x2ea00e0();
   input += synapse0x2ea0120();
   input += synapse0x2ea0160();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e9f7d0() {
   double input = input0x2e9f7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2ea01a0() {
   double input = -5.51;
   input += synapse0x2ea04e0();
   input += synapse0x2ea0520();
   input += synapse0x2ea0560();
   input += synapse0x2ea05a0();
   input += synapse0x2ea05e0();
   input += synapse0x2ea0620();
   input += synapse0x2ea0660();
   input += synapse0x2ea06a0();
   input += synapse0x2ea06e0();
   input += synapse0x2ea0720();
   input += synapse0x2ea0760();
   input += synapse0x2ea07a0();
   input += synapse0x2ea07e0();
   input += synapse0x2ea0820();
   input += synapse0x2ea0860();
   input += synapse0x2ea08a0();
   input += synapse0x2ea0330();
   input += synapse0x2ea0370();
   input += synapse0x2ea09f0();
   input += synapse0x2ea0a30();
   input += synapse0x2ea0a70();
   input += synapse0x2ea0ab0();
   input += synapse0x2ea0af0();
   input += synapse0x2ea0b30();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2ea01a0() {
   double input = input0x2ea01a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2ea0b70() {
   double input = 0.805288;
   input += synapse0x2ea0eb0();
   input += synapse0x2ea0ef0();
   input += synapse0x2ea0f30();
   input += synapse0x2ea0f70();
   input += synapse0x2ea0fb0();
   input += synapse0x2ea0ff0();
   input += synapse0x2ea1030();
   input += synapse0x2ea1070();
   input += synapse0x2ea10b0();
   input += synapse0x2ea10f0();
   input += synapse0x2ea1130();
   input += synapse0x2ea1170();
   input += synapse0x2ea11b0();
   input += synapse0x2ea11f0();
   input += synapse0x2ea1230();
   input += synapse0x2ea1270();
   input += synapse0x2ea0d00();
   input += synapse0x2ea0d40();
   input += synapse0x2ea13c0();
   input += synapse0x2ea1400();
   input += synapse0x2ea1440();
   input += synapse0x2ea1480();
   input += synapse0x2ea14c0();
   input += synapse0x2ea1500();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2ea0b70() {
   double input = input0x2ea0b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2ea1540() {
   double input = 1.77299;
   input += synapse0x2ea1880();
   input += synapse0x2ea18c0();
   input += synapse0x2ea1900();
   input += synapse0x2ea1940();
   input += synapse0x2ea1980();
   input += synapse0x2ea19c0();
   input += synapse0x2ea1a00();
   input += synapse0x2ea1a40();
   input += synapse0x2ea1a80();
   input += synapse0x2ea1ac0();
   input += synapse0x2ea1b00();
   input += synapse0x2ea1b40();
   input += synapse0x2ea1b80();
   input += synapse0x2ea1bc0();
   input += synapse0x2ea1c00();
   input += synapse0x2ea1c40();
   input += synapse0x2ea16d0();
   input += synapse0x2ea1710();
   input += synapse0x2ea1d90();
   input += synapse0x2ea1dd0();
   input += synapse0x2ea1e10();
   input += synapse0x2ea1e50();
   input += synapse0x2ea1e90();
   input += synapse0x2ea1ed0();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2ea1540() {
   double input = input0x2ea1540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2ea1f10() {
   double input = 0.714541;
   input += synapse0x2e8a980();
   input += synapse0x2e8a9c0();
   input += synapse0x2e8aa00();
   input += synapse0x2e8aa40();
   input += synapse0x2e8aa80();
   input += synapse0x2e8aac0();
   input += synapse0x2e8ab00();
   input += synapse0x2e8ab40();
   input += synapse0x2ea2660();
   input += synapse0x2ea26a0();
   input += synapse0x2ea26e0();
   input += synapse0x2ea2720();
   input += synapse0x2ea2760();
   input += synapse0x2ea27a0();
   input += synapse0x2ea27e0();
   input += synapse0x2ea2820();
   input += synapse0x2ea20a0();
   input += synapse0x2ea20e0();
   input += synapse0x2ea2970();
   input += synapse0x2ea29b0();
   input += synapse0x2ea29f0();
   input += synapse0x2ea2a30();
   input += synapse0x2ea2a70();
   input += synapse0x2ea2ab0();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2ea1f10() {
   double input = input0x2ea1f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2ea2af0() {
   double input = -1.33437;
   input += synapse0x2ea2e30();
   input += synapse0x2ea2e70();
   input += synapse0x2ea2eb0();
   input += synapse0x2ea2ef0();
   input += synapse0x2ea2f30();
   input += synapse0x2ea2f70();
   input += synapse0x2ea2fb0();
   input += synapse0x2ea2ff0();
   input += synapse0x2ea3030();
   input += synapse0x2ea3070();
   input += synapse0x2ea30b0();
   input += synapse0x2ea30f0();
   input += synapse0x2ea3130();
   input += synapse0x2ea3170();
   input += synapse0x2ea31b0();
   input += synapse0x2ea31f0();
   input += synapse0x2ea2c80();
   input += synapse0x2ea2cc0();
   input += synapse0x2ea3340();
   input += synapse0x2ea3380();
   input += synapse0x2ea33c0();
   input += synapse0x2ea3400();
   input += synapse0x2ea3440();
   input += synapse0x2ea3480();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2ea2af0() {
   double input = input0x2ea2af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2ea34c0() {
   double input = 1.73594;
   input += synapse0x2ea3800();
   input += synapse0x2ea3840();
   input += synapse0x2ea3880();
   input += synapse0x2ea38c0();
   input += synapse0x2ea3900();
   input += synapse0x2ea3940();
   input += synapse0x2ea3980();
   input += synapse0x2ea39c0();
   input += synapse0x2ea3a00();
   input += synapse0x2ea3a40();
   input += synapse0x2ea3a80();
   input += synapse0x2ea3ac0();
   input += synapse0x2ea3b00();
   input += synapse0x2ea3b40();
   input += synapse0x2ea3b80();
   input += synapse0x2ea3bc0();
   input += synapse0x2ea3650();
   input += synapse0x2ea3690();
   input += synapse0x2e941c0();
   input += synapse0x2e94200();
   input += synapse0x2e94240();
   input += synapse0x2e94280();
   input += synapse0x2e942c0();
   input += synapse0x2e94300();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2ea34c0() {
   double input = input0x2ea34c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e94340() {
   double input = -1.10209;
   input += synapse0x2e94680();
   input += synapse0x2e946c0();
   input += synapse0x2e94700();
   input += synapse0x2e94740();
   input += synapse0x2e94780();
   input += synapse0x2e947c0();
   input += synapse0x2e94800();
   input += synapse0x2e94840();
   input += synapse0x2e94880();
   input += synapse0x2e948c0();
   input += synapse0x2e94900();
   input += synapse0x2e94940();
   input += synapse0x2e94980();
   input += synapse0x2e949c0();
   input += synapse0x2e94a00();
   input += synapse0x2e94a40();
   input += synapse0x2e944d0();
   input += synapse0x2e94510();
   input += synapse0x2e94b90();
   input += synapse0x2e94bd0();
   input += synapse0x2e94c10();
   input += synapse0x2e94c50();
   input += synapse0x2e94c90();
   input += synapse0x2e94cd0();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e94340() {
   double input = input0x2e94340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e94d10() {
   double input = -1.99729;
   input += synapse0x2e95050();
   input += synapse0x2e95090();
   input += synapse0x2e950d0();
   input += synapse0x2e95110();
   input += synapse0x2e95150();
   input += synapse0x2e95190();
   input += synapse0x2e951d0();
   input += synapse0x2e95210();
   input += synapse0x2e95250();
   input += synapse0x2e95290();
   input += synapse0x2e952d0();
   input += synapse0x2e95310();
   input += synapse0x2e95350();
   input += synapse0x2e95390();
   input += synapse0x2e953d0();
   input += synapse0x2e95410();
   input += synapse0x2e94ea0();
   input += synapse0x2e94ee0();
   input += synapse0x2e95560();
   input += synapse0x2e955a0();
   input += synapse0x2e955e0();
   input += synapse0x2e95620();
   input += synapse0x2e95660();
   input += synapse0x2e956a0();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e94d10() {
   double input = input0x2e94d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2e956e0() {
   double input = -5.68533;
   input += synapse0x2e95a20();
   input += synapse0x2e95a60();
   input += synapse0x2e95aa0();
   input += synapse0x2e95ae0();
   input += synapse0x2e95b20();
   input += synapse0x2e95b60();
   input += synapse0x2e95ba0();
   input += synapse0x2e95be0();
   input += synapse0x2e95c20();
   input += synapse0x2e95c60();
   input += synapse0x2e95ca0();
   input += synapse0x2e95ce0();
   input += synapse0x2e95d20();
   input += synapse0x2e95d60();
   input += synapse0x2e95da0();
   input += synapse0x2e95de0();
   input += synapse0x2e95870();
   input += synapse0x2e958b0();
   input += synapse0x2e95f30();
   input += synapse0x2e95f70();
   input += synapse0x2e95fb0();
   input += synapse0x2e95ff0();
   input += synapse0x2e96030();
   input += synapse0x2e96070();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2e956e0() {
   double input = input0x2e956e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2ea7d20() {
   double input = 8.86903;
   input += synapse0x2ea7f40();
   input += synapse0x2ea7f80();
   input += synapse0x2ea7fc0();
   input += synapse0x2ea8000();
   input += synapse0x2ea8040();
   input += synapse0x2ea8080();
   input += synapse0x2ea80c0();
   input += synapse0x2ea8100();
   input += synapse0x2ea8140();
   input += synapse0x2ea8180();
   input += synapse0x2ea81c0();
   input += synapse0x2ea8200();
   input += synapse0x2ea8240();
   input += synapse0x2ea8280();
   input += synapse0x2ea82c0();
   input += synapse0x2ea8300();
   input += synapse0x2e960b0();
   input += synapse0x2e960f0();
   input += synapse0x2ea8450();
   input += synapse0x2ea8490();
   input += synapse0x2ea84d0();
   input += synapse0x2ea8510();
   input += synapse0x2ea8550();
   input += synapse0x2ea8590();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2ea7d20() {
   double input = input0x2ea7d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2ea85d0() {
   double input = -0.924705;
   input += synapse0x2ea8910();
   input += synapse0x2ea8950();
   input += synapse0x2ea8990();
   input += synapse0x2ea89d0();
   input += synapse0x2ea8a10();
   input += synapse0x2ea8a50();
   input += synapse0x2ea8a90();
   input += synapse0x2ea8ad0();
   input += synapse0x2ea8b10();
   input += synapse0x2ea8b50();
   input += synapse0x2ea8b90();
   input += synapse0x2ea8bd0();
   input += synapse0x2ea8c10();
   input += synapse0x2ea8c50();
   input += synapse0x2ea8c90();
   input += synapse0x2ea8cd0();
   input += synapse0x2ea8760();
   input += synapse0x2ea87a0();
   input += synapse0x2ea8e20();
   input += synapse0x2ea8e60();
   input += synapse0x2ea8ea0();
   input += synapse0x2ea8ee0();
   input += synapse0x2ea8f20();
   input += synapse0x2ea8f60();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2ea85d0() {
   double input = input0x2ea85d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2ea8fa0() {
   double input = -1.55209;
   input += synapse0x2ea92e0();
   input += synapse0x2ea9320();
   input += synapse0x2ea9360();
   input += synapse0x2ea93a0();
   input += synapse0x2ea93e0();
   input += synapse0x2ea9420();
   input += synapse0x2ea9460();
   input += synapse0x2ea94a0();
   input += synapse0x2ea94e0();
   input += synapse0x2ea9520();
   input += synapse0x2ea9560();
   input += synapse0x2ea95a0();
   input += synapse0x2ea95e0();
   input += synapse0x2ea9620();
   input += synapse0x2ea9660();
   input += synapse0x2ea96a0();
   input += synapse0x2ea9130();
   input += synapse0x2ea9170();
   input += synapse0x2ea97f0();
   input += synapse0x2ea9830();
   input += synapse0x2ea9870();
   input += synapse0x2ea98b0();
   input += synapse0x2ea98f0();
   input += synapse0x2ea9930();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2ea8fa0() {
   double input = input0x2ea8fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2ea9970() {
   double input = -1.84528;
   input += synapse0x2ea9cb0();
   input += synapse0x2ea9cf0();
   input += synapse0x2ea9d30();
   input += synapse0x2ea9d70();
   input += synapse0x2ea9db0();
   input += synapse0x2ea9df0();
   input += synapse0x2ea9e30();
   input += synapse0x2ea9e70();
   input += synapse0x2ea9eb0();
   input += synapse0x2ea9ef0();
   input += synapse0x2ea9f30();
   input += synapse0x2ea9f70();
   input += synapse0x2ea9fb0();
   input += synapse0x2ea9ff0();
   input += synapse0x2eaa030();
   input += synapse0x2eaa070();
   input += synapse0x2ea9b00();
   input += synapse0x2ea9b40();
   input += synapse0x2eaa1c0();
   input += synapse0x2eaa200();
   input += synapse0x2eaa240();
   input += synapse0x2eaa280();
   input += synapse0x2eaa2c0();
   input += synapse0x2eaa300();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2ea9970() {
   double input = input0x2ea9970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2eb0b70() {
   double input = -1.13061;
   input += synapse0x2c4a0e0();
   input += synapse0x2c4a120();
   input += synapse0x2e86cc0();
   input += synapse0x2e86d00();
   input += synapse0x2e88780();
   input += synapse0x2e887c0();
   input += synapse0x2e89550();
   input += synapse0x2e89590();
   input += synapse0x2e89f20();
   input += synapse0x2e89f60();
   input += synapse0x2e8a8f0();
   input += synapse0x2e8a930();
   input += synapse0x2e8b3d0();
   input += synapse0x2e8b410();
   input += synapse0x2e8bda0();
   input += synapse0x2e8bde0();
   input += synapse0x2e88e80();
   input += synapse0x2e88ec0();
   input += synapse0x2e8d950();
   input += synapse0x2e8d990();
   input += synapse0x2e8e320();
   input += synapse0x2e8e360();
   input += synapse0x2e8ecf0();
   input += synapse0x2e8ed30();
   input += synapse0x2e8f6c0();
   input += synapse0x2e8f700();
   input += synapse0x2e82750();
   input += synapse0x2e82790();
   input += synapse0x2e917b0();
   input += synapse0x2e917f0();
   input += synapse0x2e92180();
   input += synapse0x2e921c0();
   input += synapse0x2e92b50();
   input += synapse0x2e92b90();
   input += synapse0x2e93520();
   input += synapse0x2e93560();
   input += synapse0x2e93ef0();
   input += synapse0x2e93f30();
   input += synapse0x2e8ca40();
   input += synapse0x2e8ca80();
   input += synapse0x2e962f0();
   input += synapse0x2e96330();
   input += synapse0x2e96c80();
   input += synapse0x2e96cc0();
   input += synapse0x2e97650();
   input += synapse0x2e97690();
   input += synapse0x2e98020();
   input += synapse0x2e98060();
   input += synapse0x2e989f0();
   input += synapse0x2e98a30();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2eb0b70() {
   double input = input0x2eb0b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2eb0f10() {
   double input = -1.32753;
   input += synapse0x2e9b130();
   input += synapse0x2e9b170();
   input += synapse0x2e906f0();
   input += synapse0x2e90730();
   input += synapse0x2e9dd10();
   input += synapse0x2e9dd50();
   input += synapse0x2e9e6e0();
   input += synapse0x2e9e720();
   input += synapse0x2e9f0b0();
   input += synapse0x2e9f0f0();
   input += synapse0x2e9fa80();
   input += synapse0x2e9fac0();
   input += synapse0x2ea0450();
   input += synapse0x2ea0490();
   input += synapse0x2ea0e20();
   input += synapse0x2ea0e60();
   input += synapse0x2ea17f0();
   input += synapse0x2ea1830();
   input += synapse0x2ea21c0();
   input += synapse0x2ea2200();
   input += synapse0x2ea2da0();
   input += synapse0x2ea2de0();
   input += synapse0x2ea3770();
   input += synapse0x2ea37b0();
   input += synapse0x2e945f0();
   input += synapse0x2e94630();
   input += synapse0x2e94fc0();
   input += synapse0x2e95000();
   input += synapse0x2e95990();
   input += synapse0x2e959d0();
   input += synapse0x2ea7eb0();
   input += synapse0x2ea7ef0();
   input += synapse0x2ea8880();
   input += synapse0x2ea88c0();
   input += synapse0x2ea9250();
   input += synapse0x2ea9290();
   input += synapse0x2ea9c20();
   input += synapse0x2ea9c60();
   input += synapse0x2e84bb0();
   input += synapse0x2e84bf0();
   input += synapse0x2e993c0();
   input += synapse0x2e99400();
   input += synapse0x2eaa340();
   input += synapse0x2eaa380();
   input += synapse0x2eaa3c0();
   input += synapse0x2eaa400();
   input += synapse0x2eb12b0();
   input += synapse0x2eb12f0();
   input += synapse0x2eb1330();
   input += synapse0x2eb1370();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2eb0f10() {
   double input = input0x2eb0f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2eb13b0() {
   double input = -0.873314;
   input += synapse0x2eb16f0();
   input += synapse0x2eb1730();
   input += synapse0x2eb1770();
   input += synapse0x2eb17b0();
   input += synapse0x2eb17f0();
   input += synapse0x2eb1830();
   input += synapse0x2eb1870();
   input += synapse0x2eb18b0();
   input += synapse0x2eb18f0();
   input += synapse0x2eb1930();
   input += synapse0x2eb1970();
   input += synapse0x2eb19b0();
   input += synapse0x2eb19f0();
   input += synapse0x2eb1a30();
   input += synapse0x2eb1a70();
   input += synapse0x2eb1ab0();
   input += synapse0x2eb1540();
   input += synapse0x2eb1580();
   input += synapse0x2eb1c00();
   input += synapse0x2eb1c40();
   input += synapse0x2eb1c80();
   input += synapse0x2eb1cc0();
   input += synapse0x2eb1d00();
   input += synapse0x2eb1d40();
   input += synapse0x2eb1d80();
   input += synapse0x2eb1dc0();
   input += synapse0x2eb1e00();
   input += synapse0x2eb1e40();
   input += synapse0x2eb1e80();
   input += synapse0x2eb1ec0();
   input += synapse0x2eb1f00();
   input += synapse0x2eb1f40();
   input += synapse0x2eb1af0();
   input += synapse0x2eb1b30();
   input += synapse0x2eb1b70();
   input += synapse0x2eb1bb0();
   input += synapse0x2eb2190();
   input += synapse0x2eb21d0();
   input += synapse0x2eb2210();
   input += synapse0x2eb2250();
   input += synapse0x2eb2290();
   input += synapse0x2eb22d0();
   input += synapse0x2eb2310();
   input += synapse0x2eb2350();
   input += synapse0x2eb2390();
   input += synapse0x2eb23d0();
   input += synapse0x2eb2410();
   input += synapse0x2eb2450();
   input += synapse0x2eb2490();
   input += synapse0x2eb24d0();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2eb13b0() {
   double input = input0x2eb13b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2eb2510() {
   double input = -0.914149;
   input += synapse0x2eb2850();
   input += synapse0x2eb2890();
   input += synapse0x2eb28d0();
   input += synapse0x2eb2910();
   input += synapse0x2eb2950();
   input += synapse0x2eb2990();
   input += synapse0x2eb29d0();
   input += synapse0x2eb2a10();
   input += synapse0x2eb2a50();
   input += synapse0x2eb2a90();
   input += synapse0x2eb2ad0();
   input += synapse0x2eb2b10();
   input += synapse0x2eb2b50();
   input += synapse0x2eb2b90();
   input += synapse0x2eb2bd0();
   input += synapse0x2eb2c10();
   input += synapse0x2eb26a0();
   input += synapse0x2eb26e0();
   input += synapse0x2eb2d60();
   input += synapse0x2eb2da0();
   input += synapse0x2eb2de0();
   input += synapse0x2eb2e20();
   input += synapse0x2eb2e60();
   input += synapse0x2eb2ea0();
   input += synapse0x2eb2ee0();
   input += synapse0x2eb2f20();
   input += synapse0x2eb2f60();
   input += synapse0x2eb2fa0();
   input += synapse0x2eb2fe0();
   input += synapse0x2eb3020();
   input += synapse0x2eb3060();
   input += synapse0x2eb30a0();
   input += synapse0x2eb2c50();
   input += synapse0x2eb2c90();
   input += synapse0x2eb2cd0();
   input += synapse0x2eb2d10();
   input += synapse0x2eb32f0();
   input += synapse0x2eb3330();
   input += synapse0x2eb3370();
   input += synapse0x2eb33b0();
   input += synapse0x2eb33f0();
   input += synapse0x2eb3430();
   input += synapse0x2eb3470();
   input += synapse0x2eb34b0();
   input += synapse0x2eb34f0();
   input += synapse0x2eb3530();
   input += synapse0x2eb3570();
   input += synapse0x2eb35b0();
   input += synapse0x2eb35f0();
   input += synapse0x2eb3630();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2eb2510() {
   double input = input0x2eb2510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2eb3670() {
   double input = 0.791236;
   input += synapse0x2eb39b0();
   input += synapse0x2eb39f0();
   input += synapse0x2eb3a30();
   input += synapse0x2eb3a70();
   input += synapse0x2eb3ab0();
   input += synapse0x2eb3af0();
   input += synapse0x2eb3b30();
   input += synapse0x2eb3b70();
   input += synapse0x2eb3bb0();
   input += synapse0x2eb3bf0();
   input += synapse0x2eb3c30();
   input += synapse0x2eb3c70();
   input += synapse0x2eb3cb0();
   input += synapse0x2eb3cf0();
   input += synapse0x2eb3d30();
   input += synapse0x2eb3d70();
   input += synapse0x2eb3800();
   input += synapse0x2eb3840();
   input += synapse0x2eb3ec0();
   input += synapse0x2eb3f00();
   input += synapse0x2eb3f40();
   input += synapse0x2eb3f80();
   input += synapse0x2eb3fc0();
   input += synapse0x2eb4000();
   input += synapse0x2eb4040();
   input += synapse0x2eb4080();
   input += synapse0x2eb40c0();
   input += synapse0x2eb4100();
   input += synapse0x2eb4140();
   input += synapse0x2eb4180();
   input += synapse0x2eb41c0();
   input += synapse0x2eb4200();
   input += synapse0x2eb3db0();
   input += synapse0x2eb3df0();
   input += synapse0x2eb3e30();
   input += synapse0x2eb3e70();
   input += synapse0x2eb4450();
   input += synapse0x2eb4490();
   input += synapse0x2eb44d0();
   input += synapse0x2eb4510();
   input += synapse0x2eb4550();
   input += synapse0x2eb4590();
   input += synapse0x2eb45d0();
   input += synapse0x2eb4610();
   input += synapse0x2eb4650();
   input += synapse0x2eb4690();
   input += synapse0x2eb46d0();
   input += synapse0x2eb4710();
   input += synapse0x2eb4750();
   input += synapse0x2eb4790();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2eb3670() {
   double input = input0x2eb3670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2p::input0x2eb47d0() {
   double input = 7.7026;
   input += synapse0x2eb49f0();
   input += synapse0x2eb4a30();
   input += synapse0x2eb4a70();
   input += synapse0x2eb4ab0();
   input += synapse0x2eb4af0();
   return input;
}

double NNfunction_nn_chi3_charge2p::neuron0x2eb47d0() {
   double input = input0x2eb47d0();
   return (input * 1)+0;
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84c40() {
   return (neuron0x2e7f840()*0.0135933);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84c80() {
   return (neuron0x2e7faf0()*-0.00128356);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84cc0() {
   return (neuron0x2e7fe30()*-2.32033);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84d00() {
   return (neuron0x2e80170()*-0.00854141);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84d40() {
   return (neuron0x2e804b0()*-0.0122045);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84d80() {
   return (neuron0x2e807f0()*-0.0433149);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84dc0() {
   return (neuron0x2e80b30()*-0.0202751);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84e00() {
   return (neuron0x2e80e70()*-0.0221773);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84e40() {
   return (neuron0x2e811b0()*-0.00402389);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84e80() {
   return (neuron0x2e814f0()*0.00708553);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84ec0() {
   return (neuron0x2e81830()*0.0139511);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84f00() {
   return (neuron0x2e81b70()*9.70269);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84f40() {
   return (neuron0x2e81eb0()*-0.0367098);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84f80() {
   return (neuron0x2e821f0()*-0.0119422);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84fc0() {
   return (neuron0x2e82530()*-0.0486824);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85000() {
   return (neuron0x2e82870()*-0.0383259);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84a90() {
   return (neuron0x2e82bb0()*-0.00299802);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84ad0() {
   return (neuron0x2e83110()*-0.0128557);
}

double NNfunction_nn_chi3_charge2p::synapse0x2c3b9f0() {
   return (neuron0x2e83450()*-0.000893476);
}

double NNfunction_nn_chi3_charge2p::synapse0x2c3ba30() {
   return (neuron0x2e83790()*-0.013853);
}

double NNfunction_nn_chi3_charge2p::synapse0x1dc1eb0() {
   return (neuron0x2e83ad0()*0.0171285);
}

double NNfunction_nn_chi3_charge2p::synapse0x1dc1ef0() {
   return (neuron0x2e83e10()*-0.00826999);
}

double NNfunction_nn_chi3_charge2p::synapse0x1dc1270() {
   return (neuron0x2e84150()*-0.0163219);
}

double NNfunction_nn_chi3_charge2p::synapse0x1dc12b0() {
   return (neuron0x2e84490()*-0.254822);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85490() {
   return (neuron0x2e7f840()*-0.133928);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e854d0() {
   return (neuron0x2e7faf0()*-0.134374);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85510() {
   return (neuron0x2e7fe30()*-1.25393);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85550() {
   return (neuron0x2e80170()*1.20681);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85590() {
   return (neuron0x2e804b0()*0.70616);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e855d0() {
   return (neuron0x2e807f0()*0.00558821);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85610() {
   return (neuron0x2e80b30()*0.289467);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85650() {
   return (neuron0x2e80e70()*0.391188);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85690() {
   return (neuron0x2e811b0()*-0.761612);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85040() {
   return (neuron0x2e814f0()*0.559046);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85080() {
   return (neuron0x2e81830()*0.651179);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e850c0() {
   return (neuron0x2e81b70()*-0.66577);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85100() {
   return (neuron0x2e81eb0()*0.0624774);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e858e0() {
   return (neuron0x2e821f0()*0.0752098);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85920() {
   return (neuron0x2e82530()*0.833703);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85960() {
   return (neuron0x2e82870()*0.568299);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e852e0() {
   return (neuron0x2e82bb0()*0.781243);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85320() {
   return (neuron0x2e83110()*0.329283);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85ab0() {
   return (neuron0x2e83450()*-0.0746563);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85af0() {
   return (neuron0x2e83790()*-0.508492);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85b30() {
   return (neuron0x2e83ad0()*-1.16874);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85b70() {
   return (neuron0x2e83e10()*-0.181734);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85bb0() {
   return (neuron0x2e84150()*-0.11783);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85bf0() {
   return (neuron0x2e84490()*-0.305935);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85f70() {
   return (neuron0x2e7f840()*-0.0127462);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85fb0() {
   return (neuron0x2e7faf0()*-0.00608194);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85ff0() {
   return (neuron0x2e7fe30()*-1.53757);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86030() {
   return (neuron0x2e80170()*0.0174649);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86070() {
   return (neuron0x2e804b0()*0.00371553);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e860b0() {
   return (neuron0x2e807f0()*-0.014029);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e860f0() {
   return (neuron0x2e80b30()*-0.0194393);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86130() {
   return (neuron0x2e80e70()*0.00804902);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86170() {
   return (neuron0x2e811b0()*0.00632526);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e861b0() {
   return (neuron0x2e814f0()*0.0130329);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e861f0() {
   return (neuron0x2e81830()*0.00193255);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86230() {
   return (neuron0x2e81b70()*-0.182424);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86270() {
   return (neuron0x2e81eb0()*-0.0238992);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e862b0() {
   return (neuron0x2e821f0()*-0.00780876);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e862f0() {
   return (neuron0x2e82530()*0.0152225);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86330() {
   return (neuron0x2e82870()*-0.00157259);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85dc0() {
   return (neuron0x2e82bb0()*-0.0058229);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85e00() {
   return (neuron0x2e83110()*0.0197342);
}

double NNfunction_nn_chi3_charge2p::synapse0x1dc1900() {
   return (neuron0x2e83450()*0.00642775);
}

double NNfunction_nn_chi3_charge2p::synapse0x2c498f0() {
   return (neuron0x2e83790()*0.00661692);
}

double NNfunction_nn_chi3_charge2p::synapse0x2c49930() {
   return (neuron0x2e83ad0()*-0.0065568);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88250() {
   return (neuron0x2e83e10()*0.00337001);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88290() {
   return (neuron0x2e84150()*0.00778906);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e7f580() {
   return (neuron0x2e84490()*2.26759);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e7f650() {
   return (neuron0x2e7f840()*-0.0352318);
}

double NNfunction_nn_chi3_charge2p::synapse0x2c4a170() {
   return (neuron0x2e7faf0()*0.0267154);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e85860() {
   return (neuron0x2e7fe30()*0.365909);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e858a0() {
   return (neuron0x2e80170()*-2.21359);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86480() {
   return (neuron0x2e804b0()*-0.0259283);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e864c0() {
   return (neuron0x2e807f0()*-0.0656567);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86500() {
   return (neuron0x2e80b30()*-0.0698262);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86540() {
   return (neuron0x2e80e70()*-0.0570388);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86580() {
   return (neuron0x2e811b0()*0.0711505);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e865c0() {
   return (neuron0x2e814f0()*0.0124048);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86600() {
   return (neuron0x2e81830()*-0.0288561);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86640() {
   return (neuron0x2e81b70()*2.4628);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86680() {
   return (neuron0x2e81eb0()*-0.0486632);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e866c0() {
   return (neuron0x2e821f0()*-0.0188758);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86700() {
   return (neuron0x2e82530()*-0.0408349);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86740() {
   return (neuron0x2e82870()*-0.108848);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e7f5c0() {
   return (neuron0x2e82bb0()*0.104572);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e7f600() {
   return (neuron0x2e83110()*0.0187534);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86890() {
   return (neuron0x2e83450()*-0.0160823);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e868d0() {
   return (neuron0x2e83790()*-0.0208753);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86910() {
   return (neuron0x2e83ad0()*0.0401604);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86950() {
   return (neuron0x2e83e10()*-0.0372843);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86990() {
   return (neuron0x2e84150()*-0.0519139);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e869d0() {
   return (neuron0x2e84490()*-0.268706);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86d50() {
   return (neuron0x2e7f840()*0.203873);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86d90() {
   return (neuron0x2e7faf0()*-0.232589);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86dd0() {
   return (neuron0x2e7fe30()*0.750294);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86e10() {
   return (neuron0x2e80170()*-0.381047);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86e50() {
   return (neuron0x2e804b0()*1.24566);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86e90() {
   return (neuron0x2e807f0()*0.297712);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86ed0() {
   return (neuron0x2e80b30()*-0.924376);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86f10() {
   return (neuron0x2e80e70()*0.497728);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86f50() {
   return (neuron0x2e811b0()*0.159341);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86f90() {
   return (neuron0x2e814f0()*-0.0644665);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86fd0() {
   return (neuron0x2e81830()*0.0731128);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e87010() {
   return (neuron0x2e81b70()*0.504758);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e87050() {
   return (neuron0x2e81eb0()*-0.337028);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e87090() {
   return (neuron0x2e821f0()*0.782294);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e870d0() {
   return (neuron0x2e82530()*-0.258602);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e87110() {
   return (neuron0x2e82870()*-0.463736);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e87260() {
   return (neuron0x2e82bb0()*0.367633);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86ba0() {
   return (neuron0x2e83110()*0.216769);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86be0() {
   return (neuron0x2e83450()*0.314295);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88390() {
   return (neuron0x2e83790()*0.738879);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e883d0() {
   return (neuron0x2e83ad0()*1.18025);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88410() {
   return (neuron0x2e83e10()*0.234273);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88450() {
   return (neuron0x2e84150()*0.430776);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88490() {
   return (neuron0x2e84490()*-0.949314);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88810() {
   return (neuron0x2e7f840()*-0.00507486);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88850() {
   return (neuron0x2e7faf0()*0.027262);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88890() {
   return (neuron0x2e7fe30()*-2.68936);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e888d0() {
   return (neuron0x2e80170()*0.155416);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88910() {
   return (neuron0x2e804b0()*0.045718);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88950() {
   return (neuron0x2e807f0()*-0.00983355);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88990() {
   return (neuron0x2e80b30()*-0.0383192);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e889d0() {
   return (neuron0x2e80e70()*-0.065128);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88a10() {
   return (neuron0x2e811b0()*-0.0348088);
}

double NNfunction_nn_chi3_charge2p::synapse0x2c49c40() {
   return (neuron0x2e814f0()*0.049817);
}

double NNfunction_nn_chi3_charge2p::synapse0x2c49c80() {
   return (neuron0x2e81830()*0.0171167);
}

double NNfunction_nn_chi3_charge2p::synapse0x2c49cc0() {
   return (neuron0x2e81b70()*2.71991);
}

double NNfunction_nn_chi3_charge2p::synapse0x2c49d00() {
   return (neuron0x2e81eb0()*2.43376);
}

double NNfunction_nn_chi3_charge2p::synapse0x2c49d40() {
   return (neuron0x2e821f0()*-0.0571605);
}

double NNfunction_nn_chi3_charge2p::synapse0x2c49d80() {
   return (neuron0x2e82530()*1.19975);
}

double NNfunction_nn_chi3_charge2p::synapse0x2c49dc0() {
   return (neuron0x2e82870()*1.3296);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88660() {
   return (neuron0x2e82bb0()*-0.0576023);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e886a0() {
   return (neuron0x2e83110()*1.26633);
}

double NNfunction_nn_chi3_charge2p::synapse0x2c49f10() {
   return (neuron0x2e83450()*1.36163);
}

double NNfunction_nn_chi3_charge2p::synapse0x2c49f50() {
   return (neuron0x2e83790()*-0.0198874);
}

double NNfunction_nn_chi3_charge2p::synapse0x2c49f90() {
   return (neuron0x2e83ad0()*0.0470345);
}

double NNfunction_nn_chi3_charge2p::synapse0x2c49fd0() {
   return (neuron0x2e83e10()*0.0746093);
}

double NNfunction_nn_chi3_charge2p::synapse0x2c4a010() {
   return (neuron0x2e84150()*0.0766183);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89260() {
   return (neuron0x2e84490()*0.327579);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e895e0() {
   return (neuron0x2e7f840()*0.0598735);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89620() {
   return (neuron0x2e7faf0()*-0.00850178);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89660() {
   return (neuron0x2e7fe30()*0.715436);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e896a0() {
   return (neuron0x2e80170()*0.0328282);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e896e0() {
   return (neuron0x2e804b0()*0.000383572);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89720() {
   return (neuron0x2e807f0()*-0.0093143);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89760() {
   return (neuron0x2e80b30()*0.0339962);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e897a0() {
   return (neuron0x2e80e70()*-0.0269767);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e897e0() {
   return (neuron0x2e811b0()*0.0150955);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89820() {
   return (neuron0x2e814f0()*-0.00193972);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89860() {
   return (neuron0x2e81830()*-0.0139453);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e898a0() {
   return (neuron0x2e81b70()*-0.921993);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e898e0() {
   return (neuron0x2e81eb0()*-0.646199);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89920() {
   return (neuron0x2e821f0()*-0.0125648);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89960() {
   return (neuron0x2e82530()*-0.222733);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e899a0() {
   return (neuron0x2e82870()*-0.378957);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89430() {
   return (neuron0x2e82bb0()*0.00272986);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89470() {
   return (neuron0x2e83110()*-0.303938);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89af0() {
   return (neuron0x2e83450()*-0.391213);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89b30() {
   return (neuron0x2e83790()*0.00383994);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89b70() {
   return (neuron0x2e83ad0()*-0.0382723);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89bb0() {
   return (neuron0x2e83e10()*0.00446334);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89bf0() {
   return (neuron0x2e84150()*-0.011899);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89c30() {
   return (neuron0x2e84490()*-0.466648);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89fb0() {
   return (neuron0x2e7f840()*0.00928882);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89ff0() {
   return (neuron0x2e7faf0()*-22.4462);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a030() {
   return (neuron0x2e7fe30()*4.36438);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a070() {
   return (neuron0x2e80170()*-0.00920997);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a0b0() {
   return (neuron0x2e804b0()*0.0224821);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a0f0() {
   return (neuron0x2e807f0()*-0.00808119);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a130() {
   return (neuron0x2e80b30()*-0.00722233);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a170() {
   return (neuron0x2e80e70()*-0.00532299);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a1b0() {
   return (neuron0x2e811b0()*0.0428733);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a1f0() {
   return (neuron0x2e814f0()*-0.0365364);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a230() {
   return (neuron0x2e81830()*-0.0222924);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a270() {
   return (neuron0x2e81b70()*-0.162367);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a2b0() {
   return (neuron0x2e81eb0()*0.0553343);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a2f0() {
   return (neuron0x2e821f0()*-0.0324202);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a330() {
   return (neuron0x2e82530()*0.000393751);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a370() {
   return (neuron0x2e82870()*0.0274933);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89e00() {
   return (neuron0x2e82bb0()*0.00955279);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89e40() {
   return (neuron0x2e83110()*-0.0328873);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a4c0() {
   return (neuron0x2e83450()*0.00486014);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a500() {
   return (neuron0x2e83790()*-0.00987649);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a540() {
   return (neuron0x2e83ad0()*0.00738);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a580() {
   return (neuron0x2e83e10()*0.0119142);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a5c0() {
   return (neuron0x2e84150()*-0.0153328);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a600() {
   return (neuron0x2e84490()*-0.305692);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e83000() {
   return (neuron0x2e7f840()*0.0254789);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e83040() {
   return (neuron0x2e7faf0()*11.5613);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e83080() {
   return (neuron0x2e7fe30()*-0.0247611);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e830c0() {
   return (neuron0x2e80170()*0.0263124);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ab90() {
   return (neuron0x2e804b0()*0.0145216);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8abd0() {
   return (neuron0x2e807f0()*0.0397359);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ac10() {
   return (neuron0x2e80b30()*-0.0332289);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ac50() {
   return (neuron0x2e80e70()*-0.0106018);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ac90() {
   return (neuron0x2e811b0()*-0.0699277);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8acd0() {
   return (neuron0x2e814f0()*0.00565912);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ad10() {
   return (neuron0x2e81830()*-0.0595733);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ad50() {
   return (neuron0x2e81b70()*-0.213508);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ad90() {
   return (neuron0x2e81eb0()*-0.0908538);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8add0() {
   return (neuron0x2e821f0()*-0.030199);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ae10() {
   return (neuron0x2e82530()*0.00689744);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ae50() {
   return (neuron0x2e82870()*0.0565571);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a7d0() {
   return (neuron0x2e82bb0()*0.0523899);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a810() {
   return (neuron0x2e83110()*0.0406355);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8afa0() {
   return (neuron0x2e83450()*0.0323867);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8afe0() {
   return (neuron0x2e83790()*0.0492165);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b020() {
   return (neuron0x2e83ad0()*-0.0168945);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b060() {
   return (neuron0x2e83e10()*-0.030565);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b0a0() {
   return (neuron0x2e84150()*-0.0127056);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b0e0() {
   return (neuron0x2e84490()*-5.95152);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b460() {
   return (neuron0x2e7f840()*0.572434);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b4a0() {
   return (neuron0x2e7faf0()*-0.198578);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b4e0() {
   return (neuron0x2e7fe30()*0.365472);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b520() {
   return (neuron0x2e80170()*0.362591);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b560() {
   return (neuron0x2e804b0()*0.166773);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b5a0() {
   return (neuron0x2e807f0()*-0.0363483);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b5e0() {
   return (neuron0x2e80b30()*0.000572199);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b620() {
   return (neuron0x2e80e70()*-0.279151);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b660() {
   return (neuron0x2e811b0()*0.105933);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b6a0() {
   return (neuron0x2e814f0()*-0.481503);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b6e0() {
   return (neuron0x2e81830()*0.0272017);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b720() {
   return (neuron0x2e81b70()*0.138687);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b760() {
   return (neuron0x2e81eb0()*-0.887972);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b7a0() {
   return (neuron0x2e821f0()*0.00733527);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b7e0() {
   return (neuron0x2e82530()*0.0688481);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b820() {
   return (neuron0x2e82870()*0.188772);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b2b0() {
   return (neuron0x2e82bb0()*0.892425);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b2f0() {
   return (neuron0x2e83110()*-0.514971);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b970() {
   return (neuron0x2e83450()*0.116109);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b9b0() {
   return (neuron0x2e83790()*-0.053478);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b9f0() {
   return (neuron0x2e83ad0()*0.0834671);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ba30() {
   return (neuron0x2e83e10()*0.00030349);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ba70() {
   return (neuron0x2e84150()*0.294993);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8bab0() {
   return (neuron0x2e84490()*-0.190757);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8be30() {
   return (neuron0x2e7f840()*0.0188168);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8be70() {
   return (neuron0x2e7faf0()*-8.06146);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8beb0() {
   return (neuron0x2e7fe30()*0.174668);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8bef0() {
   return (neuron0x2e80170()*-0.0216285);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8bf30() {
   return (neuron0x2e804b0()*0.0171961);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8bf70() {
   return (neuron0x2e807f0()*-0.0312096);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8bfb0() {
   return (neuron0x2e80b30()*0.00427988);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8bff0() {
   return (neuron0x2e80e70()*-0.00452);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c030() {
   return (neuron0x2e811b0()*0.0228023);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c070() {
   return (neuron0x2e814f0()*-0.0198152);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c0b0() {
   return (neuron0x2e81830()*-0.00126047);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c0f0() {
   return (neuron0x2e81b70()*-0.320472);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c130() {
   return (neuron0x2e81eb0()*0.00751903);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c170() {
   return (neuron0x2e821f0()*0.0260675);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c1b0() {
   return (neuron0x2e82530()*-0.0250549);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c1f0() {
   return (neuron0x2e82870()*-0.0144157);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8bc80() {
   return (neuron0x2e82bb0()*-0.00978911);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8bcc0() {
   return (neuron0x2e83110()*-0.0282033);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88a50() {
   return (neuron0x2e83450()*0.0112319);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88a90() {
   return (neuron0x2e83790()*0.0139314);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88ad0() {
   return (neuron0x2e83ad0()*-0.00385483);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88b10() {
   return (neuron0x2e83e10()*0.0130009);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88b50() {
   return (neuron0x2e84150()*0.00292936);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88b90() {
   return (neuron0x2e84490()*0.0283593);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88f10() {
   return (neuron0x2e7f840()*-0.232515);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88f50() {
   return (neuron0x2e7faf0()*0.400299);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88f90() {
   return (neuron0x2e7fe30()*-0.536481);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88fd0() {
   return (neuron0x2e80170()*0.00309814);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89010() {
   return (neuron0x2e804b0()*-0.712972);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89050() {
   return (neuron0x2e807f0()*0.145985);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89090() {
   return (neuron0x2e80b30()*-0.199562);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e890d0() {
   return (neuron0x2e80e70()*-0.166479);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89110() {
   return (neuron0x2e811b0()*0.108683);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89150() {
   return (neuron0x2e814f0()*0.564444);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89190() {
   return (neuron0x2e81830()*0.935273);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e891d0() {
   return (neuron0x2e81b70()*-0.173137);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89210() {
   return (neuron0x2e81eb0()*1.13406);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8d350() {
   return (neuron0x2e821f0()*-0.779664);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8d390() {
   return (neuron0x2e82530()*0.730732);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8d3d0() {
   return (neuron0x2e82870()*0.572991);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88d60() {
   return (neuron0x2e82bb0()*-0.692695);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88da0() {
   return (neuron0x2e83110()*0.724582);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8d520() {
   return (neuron0x2e83450()*0.393158);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8d560() {
   return (neuron0x2e83790()*0.465459);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8d5a0() {
   return (neuron0x2e83ad0()*-0.55218);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8d5e0() {
   return (neuron0x2e83e10()*-0.148194);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8d620() {
   return (neuron0x2e84150()*0.0587643);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8d660() {
   return (neuron0x2e84490()*0.775505);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8d9e0() {
   return (neuron0x2e7f840()*-0.0112974);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8da20() {
   return (neuron0x2e7faf0()*-0.0054303);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8da60() {
   return (neuron0x2e7fe30()*2.12297);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8daa0() {
   return (neuron0x2e80170()*0.0225719);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8dae0() {
   return (neuron0x2e804b0()*0.00305676);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8db20() {
   return (neuron0x2e807f0()*0.0454849);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8db60() {
   return (neuron0x2e80b30()*0.0271834);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8dba0() {
   return (neuron0x2e80e70()*0.0175495);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8dbe0() {
   return (neuron0x2e811b0()*-0.00123524);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8dc20() {
   return (neuron0x2e814f0()*-0.00405305);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8dc60() {
   return (neuron0x2e81830()*-0.0221288);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8dca0() {
   return (neuron0x2e81b70()*-10.042);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8dce0() {
   return (neuron0x2e81eb0()*0.0825089);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8dd20() {
   return (neuron0x2e821f0()*-0.00238568);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8dd60() {
   return (neuron0x2e82530()*0.0319476);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8dda0() {
   return (neuron0x2e82870()*0.036698);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8d830() {
   return (neuron0x2e82bb0()*-0.00490864);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8d870() {
   return (neuron0x2e83110()*0.00719038);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8def0() {
   return (neuron0x2e83450()*-0.0136929);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8df30() {
   return (neuron0x2e83790()*0.0151963);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8df70() {
   return (neuron0x2e83ad0()*-0.0320517);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8dfb0() {
   return (neuron0x2e83e10()*0.00647764);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8dff0() {
   return (neuron0x2e84150()*0.0203144);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e030() {
   return (neuron0x2e84490()*0.174982);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e3b0() {
   return (neuron0x2e7f840()*0.0429843);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e3f0() {
   return (neuron0x2e7faf0()*-0.0101773);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e430() {
   return (neuron0x2e7fe30()*-0.174728);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e470() {
   return (neuron0x2e80170()*-0.0215147);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e4b0() {
   return (neuron0x2e804b0()*-0.0200251);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e4f0() {
   return (neuron0x2e807f0()*-0.00744307);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e530() {
   return (neuron0x2e80b30()*-0.0312822);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e570() {
   return (neuron0x2e80e70()*0.0452114);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e5b0() {
   return (neuron0x2e811b0()*-0.0259514);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e5f0() {
   return (neuron0x2e814f0()*-0.017984);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e630() {
   return (neuron0x2e81830()*-0.014473);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e670() {
   return (neuron0x2e81b70()*-0.232815);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e6b0() {
   return (neuron0x2e81eb0()*-0.047454);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e6f0() {
   return (neuron0x2e821f0()*-0.000977572);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e730() {
   return (neuron0x2e82530()*0.0138344);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e770() {
   return (neuron0x2e82870()*0.0500286);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e200() {
   return (neuron0x2e82bb0()*-0.00887569);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e240() {
   return (neuron0x2e83110()*-0.0774532);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e8c0() {
   return (neuron0x2e83450()*0.012384);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e900() {
   return (neuron0x2e83790()*0.0588495);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e940() {
   return (neuron0x2e83ad0()*0.0111419);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e980() {
   return (neuron0x2e83e10()*-0.0170541);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e9c0() {
   return (neuron0x2e84150()*-0.000509181);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ea00() {
   return (neuron0x2e84490()*6.42939);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ed80() {
   return (neuron0x2e7f840()*-0.0471041);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8edc0() {
   return (neuron0x2e7faf0()*-0.0242086);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ee00() {
   return (neuron0x2e7fe30()*0.479977);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ee40() {
   return (neuron0x2e80170()*-0.0110891);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ee80() {
   return (neuron0x2e804b0()*0.00185383);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8eec0() {
   return (neuron0x2e807f0()*-0.031531);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ef00() {
   return (neuron0x2e80b30()*-0.0567642);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ef40() {
   return (neuron0x2e80e70()*-0.00123921);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ef80() {
   return (neuron0x2e811b0()*0.0590624);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8efc0() {
   return (neuron0x2e814f0()*-0.0104533);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8f000() {
   return (neuron0x2e81830()*0.0143083);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8f040() {
   return (neuron0x2e81b70()*0.84576);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8f080() {
   return (neuron0x2e81eb0()*0.00690923);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8f0c0() {
   return (neuron0x2e821f0()*0.114734);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8f100() {
   return (neuron0x2e82530()*0.0764504);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8f140() {
   return (neuron0x2e82870()*0.0552565);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ebd0() {
   return (neuron0x2e82bb0()*0.0573541);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ec10() {
   return (neuron0x2e83110()*-0.00302034);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8f290() {
   return (neuron0x2e83450()*0.0276702);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8f2d0() {
   return (neuron0x2e83790()*0.00771441);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8f310() {
   return (neuron0x2e83ad0()*0.0744884);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8f350() {
   return (neuron0x2e83e10()*0.0195834);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8f390() {
   return (neuron0x2e84150()*-0.0271744);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8f3d0() {
   return (neuron0x2e84490()*-0.930549);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8f750() {
   return (neuron0x2e7f840()*-0.011931);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e7f9d0() {
   return (neuron0x2e7faf0()*0.00115177);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e7fa10() {
   return (neuron0x2e7fe30()*-1.07603);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e7fd10() {
   return (neuron0x2e80170()*0.00924954);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e7fd50() {
   return (neuron0x2e804b0()*-0.00126339);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e80050() {
   return (neuron0x2e807f0()*-0.00378526);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e80090() {
   return (neuron0x2e80b30()*-0.010845);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e80390() {
   return (neuron0x2e80e70()*-0.00230759);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e803d0() {
   return (neuron0x2e811b0()*-0.000857643);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e806d0() {
   return (neuron0x2e814f0()*0.0113949);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e80710() {
   return (neuron0x2e81830()*0.00166245);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e80a10() {
   return (neuron0x2e81b70()*-0.143567);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e80a50() {
   return (neuron0x2e81eb0()*-0.0146935);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e80d50() {
   return (neuron0x2e821f0()*-0.0198725);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e80d90() {
   return (neuron0x2e82530()*0.00505751);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e81090() {
   return (neuron0x2e82870()*-0.00339054);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e810d0() {
   return (neuron0x2e82bb0()*-0.00951278);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e813d0() {
   return (neuron0x2e83110()*-0.000506067);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e81410() {
   return (neuron0x2e83450()*-0.00309941);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e81710() {
   return (neuron0x2e83790()*0.00424463);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e81750() {
   return (neuron0x2e83ad0()*-0.000373367);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e81a50() {
   return (neuron0x2e83e10()*0.00290614);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e81a90() {
   return (neuron0x2e84150()*0.00149486);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e81d90() {
   return (neuron0x2e84490()*1.2731);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e81dd0() {
   return (neuron0x2e7f840()*0.0161343);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e82a90() {
   return (neuron0x2e7faf0()*-0.00470563);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e82ad0() {
   return (neuron0x2e7fe30()*2.37565);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8f5a0() {
   return (neuron0x2e80170()*-0.0164103);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8f5e0() {
   return (neuron0x2e804b0()*-0.00425075);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e82dd0() {
   return (neuron0x2e807f0()*0.00290982);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e82e10() {
   return (neuron0x2e80b30()*0.0200599);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e83330() {
   return (neuron0x2e80e70()*0.0108585);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e83370() {
   return (neuron0x2e811b0()*-0.00886823);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e83670() {
   return (neuron0x2e814f0()*-0.0318098);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e836b0() {
   return (neuron0x2e81830()*0.00940989);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e839b0() {
   return (neuron0x2e81b70()*0.0121071);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e839f0() {
   return (neuron0x2e81eb0()*-0.00654936);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e83cf0() {
   return (neuron0x2e821f0()*-0.0223556);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e83d30() {
   return (neuron0x2e82530()*0.0055995);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84030() {
   return (neuron0x2e82870()*0.0195484);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84070() {
   return (neuron0x2e82bb0()*-0.0224121);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84370() {
   return (neuron0x2e83110()*-0.00879936);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e843b0() {
   return (neuron0x2e83450()*-0.00927911);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e846b0() {
   return (neuron0x2e83790()*-0.0229623);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e846f0() {
   return (neuron0x2e83ad0()*0.00435207);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e820d0() {
   return (neuron0x2e83e10()*-0.00301535);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e82110() {
   return (neuron0x2e84150()*0.0053467);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e914c0() {
   return (neuron0x2e84490()*-5.69295);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e91840() {
   return (neuron0x2e7f840()*0.0183565);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e91880() {
   return (neuron0x2e7faf0()*-0.00937467);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e918c0() {
   return (neuron0x2e7fe30()*0.0266867);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e91900() {
   return (neuron0x2e80170()*0.0182495);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e91940() {
   return (neuron0x2e804b0()*0.0256593);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e91980() {
   return (neuron0x2e807f0()*0.0135783);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e919c0() {
   return (neuron0x2e80b30()*0.00521923);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e91a00() {
   return (neuron0x2e80e70()*0.00207737);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e91a40() {
   return (neuron0x2e811b0()*0.00723855);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e91a80() {
   return (neuron0x2e814f0()*0.00907184);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e91ac0() {
   return (neuron0x2e81830()*0.00119163);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e91b00() {
   return (neuron0x2e81b70()*-0.79016);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e91b40() {
   return (neuron0x2e81eb0()*0.0170514);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e91b80() {
   return (neuron0x2e821f0()*-0.0325713);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e91bc0() {
   return (neuron0x2e82530()*0.0619758);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e91c00() {
   return (neuron0x2e82870()*0.0111949);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e91690() {
   return (neuron0x2e82bb0()*-0.0369958);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e916d0() {
   return (neuron0x2e83110()*0.0297051);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e91d50() {
   return (neuron0x2e83450()*-0.000508397);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e91d90() {
   return (neuron0x2e83790()*0.00293498);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e91dd0() {
   return (neuron0x2e83ad0()*-0.0229365);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e91e10() {
   return (neuron0x2e83e10()*-0.00536165);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e91e50() {
   return (neuron0x2e84150()*0.0187225);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e91e90() {
   return (neuron0x2e84490()*0.434097);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92210() {
   return (neuron0x2e7f840()*-0.193483);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92250() {
   return (neuron0x2e7faf0()*-0.133317);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92290() {
   return (neuron0x2e7fe30()*-0.476757);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e922d0() {
   return (neuron0x2e80170()*-0.00858724);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92310() {
   return (neuron0x2e804b0()*0.129316);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92350() {
   return (neuron0x2e807f0()*-0.475012);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92390() {
   return (neuron0x2e80b30()*-0.304591);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e923d0() {
   return (neuron0x2e80e70()*0.652525);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92410() {
   return (neuron0x2e811b0()*-1.29895);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92450() {
   return (neuron0x2e814f0()*1.23113);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92490() {
   return (neuron0x2e81830()*-0.789801);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e924d0() {
   return (neuron0x2e81b70()*-0.279196);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92510() {
   return (neuron0x2e81eb0()*0.856299);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92550() {
   return (neuron0x2e821f0()*0.0789689);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92590() {
   return (neuron0x2e82530()*-0.485478);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e925d0() {
   return (neuron0x2e82870()*0.146038);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92060() {
   return (neuron0x2e82bb0()*0.568624);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e920a0() {
   return (neuron0x2e83110()*-0.469009);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92720() {
   return (neuron0x2e83450()*-0.133691);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92760() {
   return (neuron0x2e83790()*-0.247599);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e927a0() {
   return (neuron0x2e83ad0()*-0.41722);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e927e0() {
   return (neuron0x2e83e10()*-0.0797476);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92820() {
   return (neuron0x2e84150()*-0.267757);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92860() {
   return (neuron0x2e84490()*-0.853526);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92be0() {
   return (neuron0x2e7f840()*0.0233195);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92c20() {
   return (neuron0x2e7faf0()*-0.0155714);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92c60() {
   return (neuron0x2e7fe30()*3.26128);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92ca0() {
   return (neuron0x2e80170()*-0.025991);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92ce0() {
   return (neuron0x2e804b0()*-0.00497656);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92d20() {
   return (neuron0x2e807f0()*0.0027567);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92d60() {
   return (neuron0x2e80b30()*0.00034529);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92da0() {
   return (neuron0x2e80e70()*0.0156537);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92de0() {
   return (neuron0x2e811b0()*-0.0165152);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92e20() {
   return (neuron0x2e814f0()*0.033397);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92e60() {
   return (neuron0x2e81830()*-0.00876801);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92ea0() {
   return (neuron0x2e81b70()*0.0295467);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92ee0() {
   return (neuron0x2e81eb0()*-0.00108317);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92f20() {
   return (neuron0x2e821f0()*0.0117499);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92f60() {
   return (neuron0x2e82530()*-0.0200026);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92fa0() {
   return (neuron0x2e82870()*0.0161045);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92a30() {
   return (neuron0x2e82bb0()*-0.0355885);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92a70() {
   return (neuron0x2e83110()*-0.0188996);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e930f0() {
   return (neuron0x2e83450()*0.0109714);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93130() {
   return (neuron0x2e83790()*-0.012343);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93170() {
   return (neuron0x2e83ad0()*0.00727032);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e931b0() {
   return (neuron0x2e83e10()*-0.0146492);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e931f0() {
   return (neuron0x2e84150()*-0.00163705);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93230() {
   return (neuron0x2e84490()*-5.55872);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e935b0() {
   return (neuron0x2e7f840()*0.0240969);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e935f0() {
   return (neuron0x2e7faf0()*0.0262903);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93630() {
   return (neuron0x2e7fe30()*0.219243);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93670() {
   return (neuron0x2e80170()*-0.041381);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e936b0() {
   return (neuron0x2e804b0()*0.00522662);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e936f0() {
   return (neuron0x2e807f0()*-0.0203467);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93730() {
   return (neuron0x2e80b30()*-0.0165048);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93770() {
   return (neuron0x2e80e70()*0.00023297);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e937b0() {
   return (neuron0x2e811b0()*0.0663997);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e937f0() {
   return (neuron0x2e814f0()*-0.0570554);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93830() {
   return (neuron0x2e81830()*0.0219382);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93870() {
   return (neuron0x2e81b70()*-1.44748);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e938b0() {
   return (neuron0x2e81eb0()*-0.0725096);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e938f0() {
   return (neuron0x2e821f0()*-0.00479722);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93930() {
   return (neuron0x2e82530()*-0.0604453);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93970() {
   return (neuron0x2e82870()*-0.0129099);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93400() {
   return (neuron0x2e82bb0()*-0.000224383);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93440() {
   return (neuron0x2e83110()*-0.00606332);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93ac0() {
   return (neuron0x2e83450()*-0.0447395);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93b00() {
   return (neuron0x2e83790()*-0.0325986);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93b40() {
   return (neuron0x2e83ad0()*0.0112313);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93b80() {
   return (neuron0x2e83e10()*0.0737239);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93bc0() {
   return (neuron0x2e84150()*-0.041259);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93c00() {
   return (neuron0x2e84490()*-2.23913);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93f80() {
   return (neuron0x2e7f840()*0.00374157);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93fc0() {
   return (neuron0x2e7faf0()*0.000255866);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94000() {
   return (neuron0x2e7fe30()*1.95197);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94040() {
   return (neuron0x2e80170()*-0.0105614);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94080() {
   return (neuron0x2e804b0()*-0.00517063);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e940c0() {
   return (neuron0x2e807f0()*-0.0120242);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94100() {
   return (neuron0x2e80b30()*0.0188962);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94140() {
   return (neuron0x2e80e70()*-0.0265051);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94180() {
   return (neuron0x2e811b0()*0.0182398);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c340() {
   return (neuron0x2e814f0()*-0.0126111);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c380() {
   return (neuron0x2e81830()*0.0101808);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c3c0() {
   return (neuron0x2e81b70()*0.552987);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c400() {
   return (neuron0x2e81eb0()*-0.00112422);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c440() {
   return (neuron0x2e821f0()*-0.0115796);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c480() {
   return (neuron0x2e82530()*-0.0136221);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c4c0() {
   return (neuron0x2e82870()*-0.0360569);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93dd0() {
   return (neuron0x2e82bb0()*-0.0473359);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93e10() {
   return (neuron0x2e83110()*-0.0196725);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c610() {
   return (neuron0x2e83450()*-0.022065);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c650() {
   return (neuron0x2e83790()*0.0149484);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c690() {
   return (neuron0x2e83ad0()*-0.013096);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c6d0() {
   return (neuron0x2e83e10()*1.11366e-05);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c710() {
   return (neuron0x2e84150()*0.0128338);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c750() {
   return (neuron0x2e84490()*0.474992);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8cad0() {
   return (neuron0x2e7f840()*-0.40872);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8cb10() {
   return (neuron0x2e7faf0()*-0.168588);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8cb50() {
   return (neuron0x2e7fe30()*0.701726);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8cb90() {
   return (neuron0x2e80170()*-0.779388);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8cbd0() {
   return (neuron0x2e804b0()*1.27932);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8cc10() {
   return (neuron0x2e807f0()*0.261278);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8cc50() {
   return (neuron0x2e80b30()*-0.503652);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8cc90() {
   return (neuron0x2e80e70()*-0.121625);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ccd0() {
   return (neuron0x2e811b0()*-0.0677378);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8cd10() {
   return (neuron0x2e814f0()*0.51689);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8cd50() {
   return (neuron0x2e81830()*-0.826227);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8cd90() {
   return (neuron0x2e81b70()*-0.385848);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8cdd0() {
   return (neuron0x2e81eb0()*-0.587783);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ce10() {
   return (neuron0x2e821f0()*1.01096);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ce50() {
   return (neuron0x2e82530()*-0.890218);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ce90() {
   return (neuron0x2e82870()*-0.632243);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c920() {
   return (neuron0x2e82bb0()*0.261564);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8c960() {
   return (neuron0x2e83110()*0.620629);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8cfe0() {
   return (neuron0x2e83450()*0.34474);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8d020() {
   return (neuron0x2e83790()*0.761633);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8d060() {
   return (neuron0x2e83ad0()*0.508358);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8d0a0() {
   return (neuron0x2e83e10()*0.211603);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8d0e0() {
   return (neuron0x2e84150()*0.274315);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8d120() {
   return (neuron0x2e84490()*-1.04844);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8d2f0() {
   return (neuron0x2e7f840()*-0.0688554);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96380() {
   return (neuron0x2e7faf0()*0.00679725);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e963c0() {
   return (neuron0x2e7fe30()*-0.393552);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96400() {
   return (neuron0x2e80170()*-0.0159486);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96440() {
   return (neuron0x2e804b0()*-0.215399);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96480() {
   return (neuron0x2e807f0()*0.103663);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e964c0() {
   return (neuron0x2e80b30()*-0.00659314);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96500() {
   return (neuron0x2e80e70()*-0.0517421);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96540() {
   return (neuron0x2e811b0()*-0.101383);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96580() {
   return (neuron0x2e814f0()*0.0485901);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e965c0() {
   return (neuron0x2e81830()*-0.146839);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96600() {
   return (neuron0x2e81b70()*0.0267474);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96640() {
   return (neuron0x2e81eb0()*-0.0806965);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96680() {
   return (neuron0x2e821f0()*0.302045);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e966c0() {
   return (neuron0x2e82530()*0.0465801);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96700() {
   return (neuron0x2e82870()*0.0202797);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e961d0() {
   return (neuron0x2e82bb0()*0.252387);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96210() {
   return (neuron0x2e83110()*-0.0482063);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96850() {
   return (neuron0x2e83450()*0.0921501);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96890() {
   return (neuron0x2e83790()*0.0309517);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e968d0() {
   return (neuron0x2e83ad0()*0.318204);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96910() {
   return (neuron0x2e83e10()*-0.179704);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96950() {
   return (neuron0x2e84150()*-0.0289036);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96990() {
   return (neuron0x2e84490()*-0.0357015);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96d10() {
   return (neuron0x2e7f840()*0.0186242);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96d50() {
   return (neuron0x2e7faf0()*-0.0132912);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96d90() {
   return (neuron0x2e7fe30()*-0.177944);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96dd0() {
   return (neuron0x2e80170()*2.04871);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96e10() {
   return (neuron0x2e804b0()*-0.0329195);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96e50() {
   return (neuron0x2e807f0()*-0.00980778);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96e90() {
   return (neuron0x2e80b30()*0.0141936);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96ed0() {
   return (neuron0x2e80e70()*0.0169469);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96f10() {
   return (neuron0x2e811b0()*0.00191918);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96f50() {
   return (neuron0x2e814f0()*0.0116152);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96f90() {
   return (neuron0x2e81830()*0.00996872);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96fd0() {
   return (neuron0x2e81b70()*-1.37278);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97010() {
   return (neuron0x2e81eb0()*0.0587316);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97050() {
   return (neuron0x2e821f0()*0.0542487);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97090() {
   return (neuron0x2e82530()*0.0333108);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e970d0() {
   return (neuron0x2e82870()*0.0611043);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96b60() {
   return (neuron0x2e82bb0()*-0.0150418);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96ba0() {
   return (neuron0x2e83110()*-0.0168845);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97220() {
   return (neuron0x2e83450()*0.011221);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97260() {
   return (neuron0x2e83790()*-0.0137681);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e972a0() {
   return (neuron0x2e83ad0()*0.0143785);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e972e0() {
   return (neuron0x2e83e10()*0.000312541);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97320() {
   return (neuron0x2e84150()*0.00520949);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97360() {
   return (neuron0x2e84490()*-0.0698537);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e976e0() {
   return (neuron0x2e7f840()*0.0302134);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97720() {
   return (neuron0x2e7faf0()*-0.00197806);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97760() {
   return (neuron0x2e7fe30()*-2.7877);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e977a0() {
   return (neuron0x2e80170()*0.0385758);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e977e0() {
   return (neuron0x2e804b0()*-0.0194463);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97820() {
   return (neuron0x2e807f0()*0.0058014);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97860() {
   return (neuron0x2e80b30()*-0.000681173);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e978a0() {
   return (neuron0x2e80e70()*-0.0115136);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e978e0() {
   return (neuron0x2e811b0()*0.0277354);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97920() {
   return (neuron0x2e814f0()*-0.00671755);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97960() {
   return (neuron0x2e81830()*-0.00732056);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e979a0() {
   return (neuron0x2e81b70()*0.103927);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e979e0() {
   return (neuron0x2e81eb0()*0.00765603);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97a20() {
   return (neuron0x2e821f0()*0.0552117);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97a60() {
   return (neuron0x2e82530()*0.0462779);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97aa0() {
   return (neuron0x2e82870()*0.0260063);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97530() {
   return (neuron0x2e82bb0()*0.040951);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97570() {
   return (neuron0x2e83110()*0.0405625);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97bf0() {
   return (neuron0x2e83450()*0.00378043);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97c30() {
   return (neuron0x2e83790()*-0.0221148);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97c70() {
   return (neuron0x2e83ad0()*0.0201467);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97cb0() {
   return (neuron0x2e83e10()*0.0049262);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97cf0() {
   return (neuron0x2e84150()*0.00128534);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97d30() {
   return (neuron0x2e84490()*-5.28637);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e980b0() {
   return (neuron0x2e7f840()*-0.0146921);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e980f0() {
   return (neuron0x2e7faf0()*0.00599878);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98130() {
   return (neuron0x2e7fe30()*-1.3573);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98170() {
   return (neuron0x2e80170()*-0.0116124);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e981b0() {
   return (neuron0x2e804b0()*-0.000667513);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e981f0() {
   return (neuron0x2e807f0()*-0.0153729);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98230() {
   return (neuron0x2e80b30()*-0.00452305);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98270() {
   return (neuron0x2e80e70()*-0.00721528);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e982b0() {
   return (neuron0x2e811b0()*-0.0225359);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e982f0() {
   return (neuron0x2e814f0()*-0.00231584);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98330() {
   return (neuron0x2e81830()*0.0231155);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98370() {
   return (neuron0x2e81b70()*0.217382);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e983b0() {
   return (neuron0x2e81eb0()*0.0250185);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e983f0() {
   return (neuron0x2e821f0()*0.00434372);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98430() {
   return (neuron0x2e82530()*0.0141246);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98470() {
   return (neuron0x2e82870()*0.0316332);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97f00() {
   return (neuron0x2e82bb0()*-0.00910196);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97f40() {
   return (neuron0x2e83110()*-0.0338815);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e985c0() {
   return (neuron0x2e83450()*0.0115888);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98600() {
   return (neuron0x2e83790()*0.00293516);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98640() {
   return (neuron0x2e83ad0()*0.00410979);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98680() {
   return (neuron0x2e83e10()*0.0226616);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e986c0() {
   return (neuron0x2e84150()*-0.0172222);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98700() {
   return (neuron0x2e84490()*0.38673);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98a80() {
   return (neuron0x2e7f840()*-0.453834);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98ac0() {
   return (neuron0x2e7faf0()*0.031907);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98b00() {
   return (neuron0x2e7fe30()*1.58805);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98b40() {
   return (neuron0x2e80170()*-0.509133);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98b80() {
   return (neuron0x2e804b0()*-0.187066);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98bc0() {
   return (neuron0x2e807f0()*-0.015433);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98c00() {
   return (neuron0x2e80b30()*0.159949);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98c40() {
   return (neuron0x2e80e70()*0.000818888);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98c80() {
   return (neuron0x2e811b0()*-0.11679);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98cc0() {
   return (neuron0x2e814f0()*-0.0051843);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98d00() {
   return (neuron0x2e81830()*0.130765);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98d40() {
   return (neuron0x2e81b70()*-0.155087);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98d80() {
   return (neuron0x2e81eb0()*0.359595);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98dc0() {
   return (neuron0x2e821f0()*-0.00427206);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98e00() {
   return (neuron0x2e82530()*0.0946481);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98e40() {
   return (neuron0x2e82870()*0.341312);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e988d0() {
   return (neuron0x2e82bb0()*-0.175955);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98910() {
   return (neuron0x2e83110()*-0.110952);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98f90() {
   return (neuron0x2e83450()*-0.185691);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98fd0() {
   return (neuron0x2e83790()*-0.0912671);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99010() {
   return (neuron0x2e83ad0()*-0.12521);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99050() {
   return (neuron0x2e83e10()*0.0186367);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99090() {
   return (neuron0x2e84150()*-0.0131429);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e990d0() {
   return (neuron0x2e84490()*0.990429);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99450() {
   return (neuron0x2e7f840()*0.0118083);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99490() {
   return (neuron0x2e7faf0()*-0.000729547);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e994d0() {
   return (neuron0x2e7fe30()*1.56927);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99510() {
   return (neuron0x2e80170()*-0.00276183);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99550() {
   return (neuron0x2e804b0()*-0.00545011);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99590() {
   return (neuron0x2e807f0()*0.0158406);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e995d0() {
   return (neuron0x2e80b30()*0.0127924);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99610() {
   return (neuron0x2e80e70()*-0.00195629);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99650() {
   return (neuron0x2e811b0()*0.00249799);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99690() {
   return (neuron0x2e814f0()*-0.0076529);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e996d0() {
   return (neuron0x2e81830()*0.0015616);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99710() {
   return (neuron0x2e81b70()*0.235505);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99750() {
   return (neuron0x2e81eb0()*0.00891164);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99790() {
   return (neuron0x2e821f0()*0.00184502);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e997d0() {
   return (neuron0x2e82530()*0.00984818);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99810() {
   return (neuron0x2e82870()*-0.0232605);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e992a0() {
   return (neuron0x2e82bb0()*-0.0168186);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e992e0() {
   return (neuron0x2e83110()*-0.00849021);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99960() {
   return (neuron0x2e83450()*-0.00211406);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e999a0() {
   return (neuron0x2e83790()*0.00998394);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e999e0() {
   return (neuron0x2e83ad0()*0.010328);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99a20() {
   return (neuron0x2e83e10()*-0.00924814);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99a60() {
   return (neuron0x2e84150()*0.00414167);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99aa0() {
   return (neuron0x2e84490()*1.40422);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99e20() {
   return (neuron0x2e7f840()*0.520089);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99e60() {
   return (neuron0x2e7faf0()*0.0538809);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99ea0() {
   return (neuron0x2e7fe30()*0.590693);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99ee0() {
   return (neuron0x2e80170()*-0.464793);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99f20() {
   return (neuron0x2e804b0()*-0.342552);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99f60() {
   return (neuron0x2e807f0()*-0.0781572);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99fa0() {
   return (neuron0x2e80b30()*0.17283);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99fe0() {
   return (neuron0x2e80e70()*-0.558683);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a020() {
   return (neuron0x2e811b0()*0.682227);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a060() {
   return (neuron0x2e814f0()*-0.196494);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a0a0() {
   return (neuron0x2e81830()*0.021947);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a0e0() {
   return (neuron0x2e81b70()*-0.267644);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a120() {
   return (neuron0x2e81eb0()*-0.400534);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a160() {
   return (neuron0x2e821f0()*0.100927);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a1a0() {
   return (neuron0x2e82530()*-0.301726);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a1e0() {
   return (neuron0x2e82870()*-0.313745);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99c70() {
   return (neuron0x2e82bb0()*-0.249373);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99cb0() {
   return (neuron0x2e83110()*0.954453);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a330() {
   return (neuron0x2e83450()*0.423678);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a370() {
   return (neuron0x2e83790()*0.392859);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a3b0() {
   return (neuron0x2e83ad0()*-0.0791789);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a3f0() {
   return (neuron0x2e83e10()*-0.270867);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a430() {
   return (neuron0x2e84150()*0.225567);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a470() {
   return (neuron0x2e84490()*0.862059);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a7f0() {
   return (neuron0x2e7f840()*-0.0226088);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a830() {
   return (neuron0x2e7faf0()*0.0110316);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a870() {
   return (neuron0x2e7fe30()*0.102984);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a8b0() {
   return (neuron0x2e80170()*0.0198905);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a8f0() {
   return (neuron0x2e804b0()*0.0215024);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a930() {
   return (neuron0x2e807f0()*-0.0112494);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a970() {
   return (neuron0x2e80b30()*-0.00354939);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a9b0() {
   return (neuron0x2e80e70()*-0.0109271);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a9f0() {
   return (neuron0x2e811b0()*0.00299438);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9aa30() {
   return (neuron0x2e814f0()*-0.00677098);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9aa70() {
   return (neuron0x2e81830()*0.0173798);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9aab0() {
   return (neuron0x2e81b70()*-0.047254);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9aaf0() {
   return (neuron0x2e81eb0()*0.0216987);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9ab30() {
   return (neuron0x2e821f0()*-0.00663964);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9ab70() {
   return (neuron0x2e82530()*-0.00976229);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9abb0() {
   return (neuron0x2e82870()*-0.0219363);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a640() {
   return (neuron0x2e82bb0()*-0.0140809);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9a680() {
   return (neuron0x2e83110()*0.0681194);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9ad00() {
   return (neuron0x2e83450()*-0.00455825);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9ad40() {
   return (neuron0x2e83790()*-0.0546639);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9ad80() {
   return (neuron0x2e83ad0()*-0.0220761);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9adc0() {
   return (neuron0x2e83e10()*0.0255629);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9ae00() {
   return (neuron0x2e84150()*0.000730197);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9ae40() {
   return (neuron0x2e84490()*-5.5281);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9b1c0() {
   return (neuron0x2e7f840()*0.0825474);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8f790() {
   return (neuron0x2e7faf0()*0.016415);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8f7d0() {
   return (neuron0x2e7fe30()*0.222611);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8f810() {
   return (neuron0x2e80170()*-0.0238421);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8fa60() {
   return (neuron0x2e804b0()*0.0207114);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8faa0() {
   return (neuron0x2e807f0()*-0.0439747);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8fae0() {
   return (neuron0x2e80b30()*0.00755804);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8fd30() {
   return (neuron0x2e80e70()*0.0322993);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8fd70() {
   return (neuron0x2e811b0()*-0.0106725);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ffc0() {
   return (neuron0x2e814f0()*-0.051857);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e90000() {
   return (neuron0x2e81830()*0.00973962);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e90040() {
   return (neuron0x2e81b70()*-0.132297);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e90290() {
   return (neuron0x2e81eb0()*0.00914543);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e902d0() {
   return (neuron0x2e821f0()*-0.0251873);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e90520() {
   return (neuron0x2e82530()*-0.0592381);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e90560() {
   return (neuron0x2e82870()*0.0289835);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9b010() {
   return (neuron0x2e82bb0()*-0.0214569);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9b050() {
   return (neuron0x2e83110()*0.0173332);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e906b0() {
   return (neuron0x2e83450()*0.0337939);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e90bc0() {
   return (neuron0x2e83790()*-0.0391188);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e90c00() {
   return (neuron0x2e83ad0()*-0.0738887);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e90c40() {
   return (neuron0x2e83e10()*0.0590921);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e90e90() {
   return (neuron0x2e84150()*0.0232842);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e90ed0() {
   return (neuron0x2e84490()*-1.05707);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e90780() {
   return (neuron0x2e7f840()*-0.0595317);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e907c0() {
   return (neuron0x2e7faf0()*-0.000960152);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e90800() {
   return (neuron0x2e7fe30()*-0.990848);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e90840() {
   return (neuron0x2e80170()*-0.00590427);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e911c0() {
   return (neuron0x2e804b0()*0.0207496);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9d510() {
   return (neuron0x2e807f0()*-0.00422295);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9d550() {
   return (neuron0x2e80b30()*-0.031906);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9d590() {
   return (neuron0x2e80e70()*0.00391053);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9d5d0() {
   return (neuron0x2e811b0()*-0.0227161);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9d610() {
   return (neuron0x2e814f0()*-0.00443177);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9d650() {
   return (neuron0x2e81830()*-0.00403519);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9d690() {
   return (neuron0x2e81b70()*-0.437078);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9d6d0() {
   return (neuron0x2e81eb0()*-0.00352194);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9d710() {
   return (neuron0x2e821f0()*0.0419003);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9d750() {
   return (neuron0x2e82530()*0.0169837);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9d790() {
   return (neuron0x2e82870()*0.0247615);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e910a0() {
   return (neuron0x2e82bb0()*0.00941153);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e910e0() {
   return (neuron0x2e83110()*-0.0192);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9d8e0() {
   return (neuron0x2e83450()*0.0490315);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9d920() {
   return (neuron0x2e83790()*-0.000205294);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9d960() {
   return (neuron0x2e83ad0()*0.0293716);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9d9a0() {
   return (neuron0x2e83e10()*0.0133216);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9d9e0() {
   return (neuron0x2e84150()*-0.0331886);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9da20() {
   return (neuron0x2e84490()*-2.20551);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9dda0() {
   return (neuron0x2e7f840()*0.00669488);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9dde0() {
   return (neuron0x2e7faf0()*-0.0112162);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9de20() {
   return (neuron0x2e7fe30()*0.0398489);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9de60() {
   return (neuron0x2e80170()*2.22618);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9dea0() {
   return (neuron0x2e804b0()*-0.023124);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9dee0() {
   return (neuron0x2e807f0()*-0.0180196);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9df20() {
   return (neuron0x2e80b30()*-0.0138963);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9df60() {
   return (neuron0x2e80e70()*0.00701372);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9dfa0() {
   return (neuron0x2e811b0()*-0.00154913);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9dfe0() {
   return (neuron0x2e814f0()*0.00681217);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e020() {
   return (neuron0x2e81830()*0.0156338);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e060() {
   return (neuron0x2e81b70()*-0.392661);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e0a0() {
   return (neuron0x2e81eb0()*0.017891);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e0e0() {
   return (neuron0x2e821f0()*0.0798205);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e120() {
   return (neuron0x2e82530()*-0.0216375);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e160() {
   return (neuron0x2e82870()*0.0456644);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9dbf0() {
   return (neuron0x2e82bb0()*0.00172758);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9dc30() {
   return (neuron0x2e83110()*-0.0503399);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e2b0() {
   return (neuron0x2e83450()*0.0110782);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e2f0() {
   return (neuron0x2e83790()*-0.0226036);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e330() {
   return (neuron0x2e83ad0()*0.0295782);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e370() {
   return (neuron0x2e83e10()*0.00832316);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e3b0() {
   return (neuron0x2e84150()*-0.00682967);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e3f0() {
   return (neuron0x2e84490()*-0.197511);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e770() {
   return (neuron0x2e7f840()*-0.0438248);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e7b0() {
   return (neuron0x2e7faf0()*0.00326663);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e7f0() {
   return (neuron0x2e7fe30()*1.91964);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e830() {
   return (neuron0x2e80170()*-0.0195341);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e870() {
   return (neuron0x2e804b0()*0.0109023);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e8b0() {
   return (neuron0x2e807f0()*0.00245249);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e8f0() {
   return (neuron0x2e80b30()*0.00750297);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e930() {
   return (neuron0x2e80e70()*-0.00215342);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e970() {
   return (neuron0x2e811b0()*-0.00537605);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e9b0() {
   return (neuron0x2e814f0()*-0.00458127);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e9f0() {
   return (neuron0x2e81830()*0.00414452);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9ea30() {
   return (neuron0x2e81b70()*0.0438636);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9ea70() {
   return (neuron0x2e81eb0()*0.0119749);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9eab0() {
   return (neuron0x2e821f0()*-0.0360424);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9eaf0() {
   return (neuron0x2e82530()*-0.0197593);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9eb30() {
   return (neuron0x2e82870()*-0.00599198);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e5c0() {
   return (neuron0x2e82bb0()*-0.0286425);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e600() {
   return (neuron0x2e83110()*-0.0242123);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9ec80() {
   return (neuron0x2e83450()*0.000584431);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9ecc0() {
   return (neuron0x2e83790()*-0.00397085);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9ed00() {
   return (neuron0x2e83ad0()*0.00741264);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9ed40() {
   return (neuron0x2e83e10()*0.00722454);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9ed80() {
   return (neuron0x2e84150()*-0.0075412);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9edc0() {
   return (neuron0x2e84490()*3.35686);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f140() {
   return (neuron0x2e7f840()*-0.2097);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f180() {
   return (neuron0x2e7faf0()*0.212534);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f1c0() {
   return (neuron0x2e7fe30()*0.461257);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f200() {
   return (neuron0x2e80170()*-1.1654);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f240() {
   return (neuron0x2e804b0()*-1.26654);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f280() {
   return (neuron0x2e807f0()*-0.0109166);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f2c0() {
   return (neuron0x2e80b30()*-0.0204256);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f300() {
   return (neuron0x2e80e70()*-0.179884);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f340() {
   return (neuron0x2e811b0()*0.751838);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f380() {
   return (neuron0x2e814f0()*0.923807);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f3c0() {
   return (neuron0x2e81830()*-0.138813);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f400() {
   return (neuron0x2e81b70()*-1.09253);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f440() {
   return (neuron0x2e81eb0()*0.759205);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f480() {
   return (neuron0x2e821f0()*-0.454065);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f4c0() {
   return (neuron0x2e82530()*-0.792571);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f500() {
   return (neuron0x2e82870()*-0.01072);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9ef90() {
   return (neuron0x2e82bb0()*-0.310279);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9efd0() {
   return (neuron0x2e83110()*0.429774);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f650() {
   return (neuron0x2e83450()*0.296695);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f690() {
   return (neuron0x2e83790()*0.3319);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f6d0() {
   return (neuron0x2e83ad0()*-0.289356);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f710() {
   return (neuron0x2e83e10()*-0.209194);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f750() {
   return (neuron0x2e84150()*0.141816);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f790() {
   return (neuron0x2e84490()*0.625836);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9fb10() {
   return (neuron0x2e7f840()*0.00727773);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9fb50() {
   return (neuron0x2e7faf0()*0.00478355);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9fb90() {
   return (neuron0x2e7fe30()*-0.421088);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9fbd0() {
   return (neuron0x2e80170()*-0.0160772);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9fc10() {
   return (neuron0x2e804b0()*0.00177437);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9fc50() {
   return (neuron0x2e807f0()*0.000442214);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9fc90() {
   return (neuron0x2e80b30()*0.00334967);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9fcd0() {
   return (neuron0x2e80e70()*-0.00621581);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9fd10() {
   return (neuron0x2e811b0()*-0.00548557);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9fd50() {
   return (neuron0x2e814f0()*-0.00287517);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9fd90() {
   return (neuron0x2e81830()*0.00316628);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9fdd0() {
   return (neuron0x2e81b70()*0.021291);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9fe10() {
   return (neuron0x2e81eb0()*-0.0101913);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9fe50() {
   return (neuron0x2e821f0()*0.00598471);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9fe90() {
   return (neuron0x2e82530()*-0.00260105);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9fed0() {
   return (neuron0x2e82870()*0.00528802);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f960() {
   return (neuron0x2e82bb0()*0.00965852);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f9a0() {
   return (neuron0x2e83110()*-0.00115216);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0020() {
   return (neuron0x2e83450()*0.00759643);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0060() {
   return (neuron0x2e83790()*0.00492199);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea00a0() {
   return (neuron0x2e83ad0()*-0.000696167);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea00e0() {
   return (neuron0x2e83e10()*9.58113e-05);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0120() {
   return (neuron0x2e84150()*0.00261532);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0160() {
   return (neuron0x2e84490()*-1.17651);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea04e0() {
   return (neuron0x2e7f840()*0.0100565);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0520() {
   return (neuron0x2e7faf0()*-14.3709);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0560() {
   return (neuron0x2e7fe30()*0.533253);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea05a0() {
   return (neuron0x2e80170()*-0.0251088);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea05e0() {
   return (neuron0x2e804b0()*0.0233982);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0620() {
   return (neuron0x2e807f0()*-0.0423132);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0660() {
   return (neuron0x2e80b30()*0.010666);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea06a0() {
   return (neuron0x2e80e70()*-0.0186514);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea06e0() {
   return (neuron0x2e811b0()*0.0521916);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0720() {
   return (neuron0x2e814f0()*-0.0548533);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0760() {
   return (neuron0x2e81830()*-0.0269176);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea07a0() {
   return (neuron0x2e81b70()*-1.30391);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea07e0() {
   return (neuron0x2e81eb0()*0.0173083);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0820() {
   return (neuron0x2e821f0()*0.0458674);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0860() {
   return (neuron0x2e82530()*-0.0251922);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea08a0() {
   return (neuron0x2e82870()*0.00412075);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0330() {
   return (neuron0x2e82bb0()*-0.00985883);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0370() {
   return (neuron0x2e83110()*-0.0599097);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea09f0() {
   return (neuron0x2e83450()*0.021272);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0a30() {
   return (neuron0x2e83790()*0.0358311);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0a70() {
   return (neuron0x2e83ad0()*-0.032825);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0ab0() {
   return (neuron0x2e83e10()*0.00778892);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0af0() {
   return (neuron0x2e84150()*0.00128696);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0b30() {
   return (neuron0x2e84490()*-0.596311);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0eb0() {
   return (neuron0x2e7f840()*-0.257076);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0ef0() {
   return (neuron0x2e7faf0()*0.00835727);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0f30() {
   return (neuron0x2e7fe30()*-0.0934514);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0f70() {
   return (neuron0x2e80170()*0.190836);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0fb0() {
   return (neuron0x2e804b0()*0.236588);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0ff0() {
   return (neuron0x2e807f0()*-0.159537);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1030() {
   return (neuron0x2e80b30()*0.196077);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1070() {
   return (neuron0x2e80e70()*0.0821414);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea10b0() {
   return (neuron0x2e811b0()*-0.10913);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea10f0() {
   return (neuron0x2e814f0()*0.15565);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1130() {
   return (neuron0x2e81830()*0.07942);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1170() {
   return (neuron0x2e81b70()*0.277295);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea11b0() {
   return (neuron0x2e81eb0()*-0.44738);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea11f0() {
   return (neuron0x2e821f0()*0.972117);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1230() {
   return (neuron0x2e82530()*0.370685);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1270() {
   return (neuron0x2e82870()*0.232603);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0d00() {
   return (neuron0x2e82bb0()*0.787586);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0d40() {
   return (neuron0x2e83110()*-0.514249);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea13c0() {
   return (neuron0x2e83450()*-0.202239);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1400() {
   return (neuron0x2e83790()*0.28613);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1440() {
   return (neuron0x2e83ad0()*-0.106224);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1480() {
   return (neuron0x2e83e10()*-0.0922946);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea14c0() {
   return (neuron0x2e84150()*-0.118776);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1500() {
   return (neuron0x2e84490()*0.786389);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1880() {
   return (neuron0x2e7f840()*0.0466653);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea18c0() {
   return (neuron0x2e7faf0()*0.0124114);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1900() {
   return (neuron0x2e7fe30()*0.62674);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1940() {
   return (neuron0x2e80170()*-0.186871);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1980() {
   return (neuron0x2e804b0()*0.267299);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea19c0() {
   return (neuron0x2e807f0()*-0.0868725);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1a00() {
   return (neuron0x2e80b30()*-0.002587);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1a40() {
   return (neuron0x2e80e70()*0.119594);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1a80() {
   return (neuron0x2e811b0()*0.234844);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1ac0() {
   return (neuron0x2e814f0()*0.0284352);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1b00() {
   return (neuron0x2e81830()*0.188703);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1b40() {
   return (neuron0x2e81b70()*-0.159167);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1b80() {
   return (neuron0x2e81eb0()*0.0666439);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1bc0() {
   return (neuron0x2e821f0()*-0.481093);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1c00() {
   return (neuron0x2e82530()*-0.0708169);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1c40() {
   return (neuron0x2e82870()*-0.134695);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea16d0() {
   return (neuron0x2e82bb0()*-0.334728);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1710() {
   return (neuron0x2e83110()*0.132173);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1d90() {
   return (neuron0x2e83450()*-0.100486);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1dd0() {
   return (neuron0x2e83790()*-0.0232522);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1e10() {
   return (neuron0x2e83ad0()*-0.355433);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1e50() {
   return (neuron0x2e83e10()*0.202069);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1e90() {
   return (neuron0x2e84150()*0.0530187);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1ed0() {
   return (neuron0x2e84490()*0.987851);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a980() {
   return (neuron0x2e7f840()*-0.453901);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a9c0() {
   return (neuron0x2e7faf0()*0.171591);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8aa00() {
   return (neuron0x2e7fe30()*-0.320067);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8aa40() {
   return (neuron0x2e80170()*-0.473601);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8aa80() {
   return (neuron0x2e804b0()*-0.189193);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8aac0() {
   return (neuron0x2e807f0()*0.0334395);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ab00() {
   return (neuron0x2e80b30()*-0.0270839);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ab40() {
   return (neuron0x2e80e70()*0.256183);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea2660() {
   return (neuron0x2e811b0()*-0.0762806);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea26a0() {
   return (neuron0x2e814f0()*0.567958);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea26e0() {
   return (neuron0x2e81830()*0.0875547);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea2720() {
   return (neuron0x2e81b70()*-0.170274);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea2760() {
   return (neuron0x2e81eb0()*0.96283);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea27a0() {
   return (neuron0x2e821f0()*-0.183506);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea27e0() {
   return (neuron0x2e82530()*-0.00972796);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea2820() {
   return (neuron0x2e82870()*-0.23265);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea20a0() {
   return (neuron0x2e82bb0()*-0.821622);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea20e0() {
   return (neuron0x2e83110()*0.443903);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea2970() {
   return (neuron0x2e83450()*-0.219493);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea29b0() {
   return (neuron0x2e83790()*0.119886);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea29f0() {
   return (neuron0x2e83ad0()*-0.174717);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea2a30() {
   return (neuron0x2e83e10()*-0.0708607);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea2a70() {
   return (neuron0x2e84150()*-0.17712);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea2ab0() {
   return (neuron0x2e84490()*0.405772);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea2e30() {
   return (neuron0x2e7f840()*0.00470762);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea2e70() {
   return (neuron0x2e7faf0()*-0.0057206);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea2eb0() {
   return (neuron0x2e7fe30()*1.02251);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea2ef0() {
   return (neuron0x2e80170()*0.0155409);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea2f30() {
   return (neuron0x2e804b0()*-0.0100637);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea2f70() {
   return (neuron0x2e807f0()*0.0101987);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea2fb0() {
   return (neuron0x2e80b30()*0.0411004);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea2ff0() {
   return (neuron0x2e80e70()*-0.006585);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3030() {
   return (neuron0x2e811b0()*0.0088196);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3070() {
   return (neuron0x2e814f0()*-0.0377279);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea30b0() {
   return (neuron0x2e81830()*-0.0113688);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea30f0() {
   return (neuron0x2e81b70()*-2.61684);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3130() {
   return (neuron0x2e81eb0()*0.096441);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3170() {
   return (neuron0x2e821f0()*0.00513948);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea31b0() {
   return (neuron0x2e82530()*0.0664608);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea31f0() {
   return (neuron0x2e82870()*0.0555106);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea2c80() {
   return (neuron0x2e82bb0()*-0.0225305);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea2cc0() {
   return (neuron0x2e83110()*0.0191907);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3340() {
   return (neuron0x2e83450()*0.0388371);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3380() {
   return (neuron0x2e83790()*0.0455717);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea33c0() {
   return (neuron0x2e83ad0()*-0.00483218);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3400() {
   return (neuron0x2e83e10()*0.00265669);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3440() {
   return (neuron0x2e84150()*0.0112393);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3480() {
   return (neuron0x2e84490()*-0.142351);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3800() {
   return (neuron0x2e7f840()*-0.0173257);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3840() {
   return (neuron0x2e7faf0()*0.0188658);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3880() {
   return (neuron0x2e7fe30()*-0.257185);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea38c0() {
   return (neuron0x2e80170()*-2.38606);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3900() {
   return (neuron0x2e804b0()*0.0756476);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3940() {
   return (neuron0x2e807f0()*0.0509776);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3980() {
   return (neuron0x2e80b30()*0.0329998);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea39c0() {
   return (neuron0x2e80e70()*0.0287332);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3a00() {
   return (neuron0x2e811b0()*-0.00344772);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3a40() {
   return (neuron0x2e814f0()*-0.0346218);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3a80() {
   return (neuron0x2e81830()*-0.00499078);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3ac0() {
   return (neuron0x2e81b70()*-0.487701);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3b00() {
   return (neuron0x2e81eb0()*-0.0350387);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3b40() {
   return (neuron0x2e821f0()*-0.163793);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3b80() {
   return (neuron0x2e82530()*0.0770796);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3bc0() {
   return (neuron0x2e82870()*-0.0167564);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3650() {
   return (neuron0x2e82bb0()*-0.10544);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3690() {
   return (neuron0x2e83110()*0.0922621);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e941c0() {
   return (neuron0x2e83450()*0.0304812);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94200() {
   return (neuron0x2e83790()*0.0422989);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94240() {
   return (neuron0x2e83ad0()*-0.118925);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94280() {
   return (neuron0x2e83e10()*0.0266174);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e942c0() {
   return (neuron0x2e84150()*0.0323501);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94300() {
   return (neuron0x2e84490()*0.590043);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94680() {
   return (neuron0x2e7f840()*0.0110129);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e946c0() {
   return (neuron0x2e7faf0()*11.1634);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94700() {
   return (neuron0x2e7fe30()*0.0604725);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94740() {
   return (neuron0x2e80170()*0.0176452);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94780() {
   return (neuron0x2e804b0()*-0.0287467);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e947c0() {
   return (neuron0x2e807f0()*-0.0175219);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94800() {
   return (neuron0x2e80b30()*0.0200093);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94840() {
   return (neuron0x2e80e70()*0.0243442);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94880() {
   return (neuron0x2e811b0()*-0.0210562);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e948c0() {
   return (neuron0x2e814f0()*0.028368);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94900() {
   return (neuron0x2e81830()*0.0398231);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94940() {
   return (neuron0x2e81b70()*-0.0198767);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94980() {
   return (neuron0x2e81eb0()*-0.0689017);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e949c0() {
   return (neuron0x2e821f0()*0.0590615);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94a00() {
   return (neuron0x2e82530()*0.0061299);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94a40() {
   return (neuron0x2e82870()*-0.0327772);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e944d0() {
   return (neuron0x2e82bb0()*0.0424834);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94510() {
   return (neuron0x2e83110()*0.0143987);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94b90() {
   return (neuron0x2e83450()*0.00808167);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94bd0() {
   return (neuron0x2e83790()*-0.00332272);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94c10() {
   return (neuron0x2e83ad0()*-0.0229373);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94c50() {
   return (neuron0x2e83e10()*-0.00266157);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94c90() {
   return (neuron0x2e84150()*0.0179034);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94cd0() {
   return (neuron0x2e84490()*2.24293);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95050() {
   return (neuron0x2e7f840()*0.344854);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95090() {
   return (neuron0x2e7faf0()*0.145363);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e950d0() {
   return (neuron0x2e7fe30()*0.2528);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95110() {
   return (neuron0x2e80170()*-0.0642581);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95150() {
   return (neuron0x2e804b0()*-0.179871);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95190() {
   return (neuron0x2e807f0()*0.278913);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e951d0() {
   return (neuron0x2e80b30()*0.504103);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95210() {
   return (neuron0x2e80e70()*-1.1183);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95250() {
   return (neuron0x2e811b0()*0.155073);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95290() {
   return (neuron0x2e814f0()*-0.568227);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e952d0() {
   return (neuron0x2e81830()*0.813853);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95310() {
   return (neuron0x2e81b70()*-0.167893);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95350() {
   return (neuron0x2e81eb0()*-0.512655);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95390() {
   return (neuron0x2e821f0()*-0.460347);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e953d0() {
   return (neuron0x2e82530()*0.294129);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95410() {
   return (neuron0x2e82870()*-1.24976);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94ea0() {
   return (neuron0x2e82bb0()*0.26243);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94ee0() {
   return (neuron0x2e83110()*-0.342257);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95560() {
   return (neuron0x2e83450()*-0.134467);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e955a0() {
   return (neuron0x2e83790()*0.175172);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e955e0() {
   return (neuron0x2e83ad0()*-0.313781);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95620() {
   return (neuron0x2e83e10()*-0.0423608);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95660() {
   return (neuron0x2e84150()*0.110836);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e956a0() {
   return (neuron0x2e84490()*-0.444745);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95a20() {
   return (neuron0x2e7f840()*0.0150288);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95a60() {
   return (neuron0x2e7faf0()*0.00297362);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95aa0() {
   return (neuron0x2e7fe30()*-3.80166);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95ae0() {
   return (neuron0x2e80170()*0.00074947);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95b20() {
   return (neuron0x2e804b0()*-0.0209535);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95b60() {
   return (neuron0x2e807f0()*-0.0162438);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95ba0() {
   return (neuron0x2e80b30()*0.0139079);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95be0() {
   return (neuron0x2e80e70()*-0.0210522);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95c20() {
   return (neuron0x2e811b0()*0.0329115);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95c60() {
   return (neuron0x2e814f0()*-0.0212307);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95ca0() {
   return (neuron0x2e81830()*0.0281789);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95ce0() {
   return (neuron0x2e81b70()*-0.0294413);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95d20() {
   return (neuron0x2e81eb0()*-0.050851);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95d60() {
   return (neuron0x2e821f0()*0.111984);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95da0() {
   return (neuron0x2e82530()*0.0243886);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95de0() {
   return (neuron0x2e82870()*0.00102409);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95870() {
   return (neuron0x2e82bb0()*0.0499679);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e958b0() {
   return (neuron0x2e83110()*0.0128387);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95f30() {
   return (neuron0x2e83450()*-0.0126628);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95f70() {
   return (neuron0x2e83790()*0.00441532);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95fb0() {
   return (neuron0x2e83ad0()*0.00379659);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95ff0() {
   return (neuron0x2e83e10()*0.0151897);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96030() {
   return (neuron0x2e84150()*-0.00298001);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96070() {
   return (neuron0x2e84490()*-7.14589);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea7f40() {
   return (neuron0x2e7f840()*0.00092679);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea7f80() {
   return (neuron0x2e7faf0()*24.9023);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea7fc0() {
   return (neuron0x2e7fe30()*4.72708);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8000() {
   return (neuron0x2e80170()*-0.0809497);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8040() {
   return (neuron0x2e804b0()*0.0364616);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8080() {
   return (neuron0x2e807f0()*0.0205305);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea80c0() {
   return (neuron0x2e80b30()*-0.00226115);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8100() {
   return (neuron0x2e80e70()*-0.0302402);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8140() {
   return (neuron0x2e811b0()*-0.0676171);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8180() {
   return (neuron0x2e814f0()*0.0922219);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea81c0() {
   return (neuron0x2e81830()*-0.0165735);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8200() {
   return (neuron0x2e81b70()*0.136546);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8240() {
   return (neuron0x2e81eb0()*-0.0356178);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8280() {
   return (neuron0x2e821f0()*0.0283254);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea82c0() {
   return (neuron0x2e82530()*-0.06333);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8300() {
   return (neuron0x2e82870()*-0.0248271);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e960b0() {
   return (neuron0x2e82bb0()*-0.117736);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e960f0() {
   return (neuron0x2e83110()*0.0103395);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8450() {
   return (neuron0x2e83450()*0.0344745);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8490() {
   return (neuron0x2e83790()*0.052455);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea84d0() {
   return (neuron0x2e83ad0()*0.00137493);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8510() {
   return (neuron0x2e83e10()*-0.0735195);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8550() {
   return (neuron0x2e84150()*0.0164963);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8590() {
   return (neuron0x2e84490()*0.819006);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8910() {
   return (neuron0x2e7f840()*0.578501);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8950() {
   return (neuron0x2e7faf0()*0.087628);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8990() {
   return (neuron0x2e7fe30()*0.648449);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea89d0() {
   return (neuron0x2e80170()*-0.581757);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8a10() {
   return (neuron0x2e804b0()*-0.568506);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8a50() {
   return (neuron0x2e807f0()*-0.0150795);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8a90() {
   return (neuron0x2e80b30()*0.272185);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8ad0() {
   return (neuron0x2e80e70()*-0.456948);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8b10() {
   return (neuron0x2e811b0()*0.643476);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8b50() {
   return (neuron0x2e814f0()*0.122965);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8b90() {
   return (neuron0x2e81830()*-0.273346);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8bd0() {
   return (neuron0x2e81b70()*-0.462387);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8c10() {
   return (neuron0x2e81eb0()*0.0626267);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8c50() {
   return (neuron0x2e821f0()*0.0615044);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8c90() {
   return (neuron0x2e82530()*-0.541801);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8cd0() {
   return (neuron0x2e82870()*-0.665409);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8760() {
   return (neuron0x2e82bb0()*-0.111072);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea87a0() {
   return (neuron0x2e83110()*0.965079);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8e20() {
   return (neuron0x2e83450()*0.460962);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8e60() {
   return (neuron0x2e83790()*0.37144);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8ea0() {
   return (neuron0x2e83ad0()*-0.391419);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8ee0() {
   return (neuron0x2e83e10()*-0.345223);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8f20() {
   return (neuron0x2e84150()*0.0409745);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8f60() {
   return (neuron0x2e84490()*1.16226);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea92e0() {
   return (neuron0x2e7f840()*0.0120226);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9320() {
   return (neuron0x2e7faf0()*0.00112516);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9360() {
   return (neuron0x2e7fe30()*0.764197);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea93a0() {
   return (neuron0x2e80170()*-0.00314173);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea93e0() {
   return (neuron0x2e804b0()*0.0122371);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9420() {
   return (neuron0x2e807f0()*0.0131911);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9460() {
   return (neuron0x2e80b30()*0.00286371);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea94a0() {
   return (neuron0x2e80e70()*0.00940799);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea94e0() {
   return (neuron0x2e811b0()*0.00719296);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9520() {
   return (neuron0x2e814f0()*-0.0024131);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9560() {
   return (neuron0x2e81830()*-0.00200476);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea95a0() {
   return (neuron0x2e81b70()*-0.0168529);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea95e0() {
   return (neuron0x2e81eb0()*0.0404034);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9620() {
   return (neuron0x2e821f0()*0.0101598);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9660() {
   return (neuron0x2e82530()*-0.00534929);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea96a0() {
   return (neuron0x2e82870()*-0.000402345);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9130() {
   return (neuron0x2e82bb0()*-0.00574993);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9170() {
   return (neuron0x2e83110()*0.0116254);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea97f0() {
   return (neuron0x2e83450()*0.00178598);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9830() {
   return (neuron0x2e83790()*-0.0107884);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9870() {
   return (neuron0x2e83ad0()*0.00431797);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea98b0() {
   return (neuron0x2e83e10()*-0.0110332);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea98f0() {
   return (neuron0x2e84150()*-0.000732747);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9930() {
   return (neuron0x2e84490()*0.422161);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9cb0() {
   return (neuron0x2e7f840()*0.0249001);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9cf0() {
   return (neuron0x2e7faf0()*0.00212652);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9d30() {
   return (neuron0x2e7fe30()*-2.15151);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9d70() {
   return (neuron0x2e80170()*0.022445);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9db0() {
   return (neuron0x2e804b0()*-0.00315868);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9df0() {
   return (neuron0x2e807f0()*-0.00124109);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9e30() {
   return (neuron0x2e80b30()*-0.0156984);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9e70() {
   return (neuron0x2e80e70()*0.0051576);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9eb0() {
   return (neuron0x2e811b0()*-0.0100668);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9ef0() {
   return (neuron0x2e814f0()*-0.00340521);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9f30() {
   return (neuron0x2e81830()*-0.00945501);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9f70() {
   return (neuron0x2e81b70()*-0.148522);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9fb0() {
   return (neuron0x2e81eb0()*-0.0180485);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9ff0() {
   return (neuron0x2e821f0()*0.0268097);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eaa030() {
   return (neuron0x2e82530()*0.0168196);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eaa070() {
   return (neuron0x2e82870()*0.00894064);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9b00() {
   return (neuron0x2e82bb0()*0.0202807);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9b40() {
   return (neuron0x2e83110()*-0.00137203);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eaa1c0() {
   return (neuron0x2e83450()*0.00998326);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eaa200() {
   return (neuron0x2e83790()*0.0104348);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eaa240() {
   return (neuron0x2e83ad0()*0.00425654);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eaa280() {
   return (neuron0x2e83e10()*-0.00302326);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eaa2c0() {
   return (neuron0x2e84150()*0.00192794);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eaa300() {
   return (neuron0x2e84490()*-3.85225);
}

double NNfunction_nn_chi3_charge2p::synapse0x2c4a0e0() {
   return (neuron0x2e84900()*-4.96278);
}

double NNfunction_nn_chi3_charge2p::synapse0x2c4a120() {
   return (neuron0x2e85150()*-0.0122455);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86cc0() {
   return (neuron0x2e85c30()*-0.386713);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e86d00() {
   return (neuron0x2e856d0()*-0.0515205);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88780() {
   return (neuron0x2e86a10()*0.20564);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e887c0() {
   return (neuron0x2e884d0()*0.52336);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89550() {
   return (neuron0x2e892a0()*0.439356);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89590() {
   return (neuron0x2e89c70()*7.86117);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89f20() {
   return (neuron0x2e8a640()*0.159625);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e89f60() {
   return (neuron0x2e8b120()*-0.602638);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a8f0() {
   return (neuron0x2e8baf0()*-2.81747);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8a930() {
   return (neuron0x2e88bd0()*-0.221742);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b3d0() {
   return (neuron0x2e8d6a0()*-4.45091);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8b410() {
   return (neuron0x2e8e070()*1.32193);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8bda0() {
   return (neuron0x2e8ea40()*-0.689668);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8bde0() {
   return (neuron0x2e8f410()*-0.887093);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88e80() {
   return (neuron0x2e91220()*-1.81877);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e88ec0() {
   return (neuron0x2e91500()*-1.14042);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8d950() {
   return (neuron0x2e91ed0()*0.266394);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8d990() {
   return (neuron0x2e928a0()*-3.9485);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e320() {
   return (neuron0x2e93270()*-0.0321262);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8e360() {
   return (neuron0x2e93c40()*0.61524);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ecf0() {
   return (neuron0x2e8c790()*-0.252289);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ed30() {
   return (neuron0x2e8d160()*-0.0130094);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8f6c0() {
   return (neuron0x2e969d0()*0.0321072);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8f700() {
   return (neuron0x2e973a0()*6.14919);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e82750() {
   return (neuron0x2e97d70()*0.610656);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e82790() {
   return (neuron0x2e98740()*-0.330811);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e917b0() {
   return (neuron0x2e99110()*0.670931);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e917f0() {
   return (neuron0x2e99ae0()*0.655139);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92180() {
   return (neuron0x2e9a4b0()*1.77599);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e921c0() {
   return (neuron0x2e9ae80()*-0.235696);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92b50() {
   return (neuron0x2e90f10()*0.54673);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e92b90() {
   return (neuron0x2e9da60()*-0.0667034);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93520() {
   return (neuron0x2e9e430()*0.25396);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93560() {
   return (neuron0x2e9ee00()*0.37129);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93ef0() {
   return (neuron0x2e9f7d0()*3.4865);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e93f30() {
   return (neuron0x2ea01a0()*2.63359);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ca40() {
   return (neuron0x2ea0b70()*0.202887);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e8ca80() {
   return (neuron0x2ea1540()*0.528157);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e962f0() {
   return (neuron0x2ea1f10()*-0.446888);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96330() {
   return (neuron0x2ea2af0()*0.270731);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96c80() {
   return (neuron0x2ea34c0()*0.0209368);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e96cc0() {
   return (neuron0x2e94340()*-1.0139);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97650() {
   return (neuron0x2e94d10()*0.287998);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e97690() {
   return (neuron0x2e956e0()*-0.380184);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98020() {
   return (neuron0x2ea7d20()*8.54696);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98060() {
   return (neuron0x2ea85d0()*-0.660677);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e989f0() {
   return (neuron0x2ea8fa0()*2.53845);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e98a30() {
   return (neuron0x2ea9970()*-0.908033);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9b130() {
   return (neuron0x2e84900()*0.0555001);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9b170() {
   return (neuron0x2e85150()*-0.0701199);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e906f0() {
   return (neuron0x2e85c30()*-0.476374);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e90730() {
   return (neuron0x2e856d0()*1.15294);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9dd10() {
   return (neuron0x2e86a10()*-0.0335358);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9dd50() {
   return (neuron0x2e884d0()*-0.247228);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e6e0() {
   return (neuron0x2e892a0()*-0.334859);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9e720() {
   return (neuron0x2e89c70()*-1.34047);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f0b0() {
   return (neuron0x2e8a640()*-0.949235);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9f0f0() {
   return (neuron0x2e8b120()*-0.438363);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9fa80() {
   return (neuron0x2e8baf0()*0.395813);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e9fac0() {
   return (neuron0x2e88bd0()*0.313539);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0450() {
   return (neuron0x2e8d6a0()*0.615692);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0490() {
   return (neuron0x2e8e070()*1.74398);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0e20() {
   return (neuron0x2e8ea40()*-1.18165);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea0e60() {
   return (neuron0x2e8f410()*1.64634);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea17f0() {
   return (neuron0x2e91220()*-1.07462);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea1830() {
   return (neuron0x2e91500()*-0.0490475);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea21c0() {
   return (neuron0x2e91ed0()*-0.0159268);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea2200() {
   return (neuron0x2e928a0()*1.25876);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea2da0() {
   return (neuron0x2e93270()*0.304027);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea2de0() {
   return (neuron0x2e93c40()*-0.176177);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea3770() {
   return (neuron0x2e8c790()*0.173164);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea37b0() {
   return (neuron0x2e8d160()*0.968387);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e945f0() {
   return (neuron0x2e969d0()*2.23054);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94630() {
   return (neuron0x2e973a0()*-0.994765);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e94fc0() {
   return (neuron0x2e97d70()*0.334347);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95000() {
   return (neuron0x2e98740()*0.42083);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e95990() {
   return (neuron0x2e99110()*0.117126);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e959d0() {
   return (neuron0x2e99ae0()*-0.144456);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea7eb0() {
   return (neuron0x2e9a4b0()*2.36345);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea7ef0() {
   return (neuron0x2e9ae80()*-2.30927);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea8880() {
   return (neuron0x2e90f10()*-1.42257);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea88c0() {
   return (neuron0x2e9da60()*-2.21728);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9250() {
   return (neuron0x2e9e430()*1.18503);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9290() {
   return (neuron0x2e9ee00()*-0.238592);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9c20() {
   return (neuron0x2e9f7d0()*0.00731772);
}

double NNfunction_nn_chi3_charge2p::synapse0x2ea9c60() {
   return (neuron0x2ea01a0()*-0.306789);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84bb0() {
   return (neuron0x2ea0b70()*0.222617);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e84bf0() {
   return (neuron0x2ea1540()*0.203532);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e993c0() {
   return (neuron0x2ea1f10()*-0.711295);
}

double NNfunction_nn_chi3_charge2p::synapse0x2e99400() {
   return (neuron0x2ea2af0()*-0.410044);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eaa340() {
   return (neuron0x2ea34c0()*-1.14133);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eaa380() {
   return (neuron0x2e94340()*0.491167);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eaa3c0() {
   return (neuron0x2e94d10()*-0.105965);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eaa400() {
   return (neuron0x2e956e0()*-2.56039);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb12b0() {
   return (neuron0x2ea7d20()*-0.880544);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb12f0() {
   return (neuron0x2ea85d0()*0.254036);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1330() {
   return (neuron0x2ea8fa0()*2.9416);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1370() {
   return (neuron0x2ea9970()*0.108053);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb16f0() {
   return (neuron0x2e84900()*0.0830664);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1730() {
   return (neuron0x2e85150()*0.0113495);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1770() {
   return (neuron0x2e85c30()*0.788852);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb17b0() {
   return (neuron0x2e856d0()*0.367526);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb17f0() {
   return (neuron0x2e86a10()*-0.0792649);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1830() {
   return (neuron0x2e884d0()*-0.0182105);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1870() {
   return (neuron0x2e892a0()*0.269846);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb18b0() {
   return (neuron0x2e89c70()*-0.925826);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb18f0() {
   return (neuron0x2e8a640()*-0.34146);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1930() {
   return (neuron0x2e8b120()*0.196991);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1970() {
   return (neuron0x2e8baf0()*2.49157);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb19b0() {
   return (neuron0x2e88bd0()*0.242706);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb19f0() {
   return (neuron0x2e8d6a0()*0.110318);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1a30() {
   return (neuron0x2e8e070()*0.817448);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1a70() {
   return (neuron0x2e8ea40()*-0.43312);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1ab0() {
   return (neuron0x2e8f410()*-0.14811);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1540() {
   return (neuron0x2e91220()*1.31826);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1580() {
   return (neuron0x2e91500()*0.332311);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1c00() {
   return (neuron0x2e91ed0()*-0.153955);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1c40() {
   return (neuron0x2e928a0()*1.42403);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1c80() {
   return (neuron0x2e93270()*0.463105);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1cc0() {
   return (neuron0x2e93c40()*1.15574);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1d00() {
   return (neuron0x2e8c790()*0.175682);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1d40() {
   return (neuron0x2e8d160()*0.796896);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1d80() {
   return (neuron0x2e969d0()*0.61208);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1dc0() {
   return (neuron0x2e973a0()*-1.62874);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1e00() {
   return (neuron0x2e97d70()*0.130953);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1e40() {
   return (neuron0x2e98740()*0.304106);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1e80() {
   return (neuron0x2e99110()*-1.48133);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1ec0() {
   return (neuron0x2e99ae0()*-0.430979);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1f00() {
   return (neuron0x2e9a4b0()*0.708671);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1f40() {
   return (neuron0x2e9ae80()*-0.458418);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1af0() {
   return (neuron0x2e90f10()*-0.180983);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1b30() {
   return (neuron0x2e9da60()*-0.560569);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1b70() {
   return (neuron0x2e9e430()*0.226884);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb1bb0() {
   return (neuron0x2e9ee00()*-0.242396);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2190() {
   return (neuron0x2e9f7d0()*1.06317);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb21d0() {
   return (neuron0x2ea01a0()*-1.82681);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2210() {
   return (neuron0x2ea0b70()*-0.0483537);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2250() {
   return (neuron0x2ea1540()*0.0516484);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2290() {
   return (neuron0x2ea1f10()*0.0344518);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb22d0() {
   return (neuron0x2ea2af0()*0.0420941);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2310() {
   return (neuron0x2ea34c0()*-0.342415);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2350() {
   return (neuron0x2e94340()*0.979695);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2390() {
   return (neuron0x2e94d10()*-0.209472);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb23d0() {
   return (neuron0x2e956e0()*-1.21435);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2410() {
   return (neuron0x2ea7d20()*-0.947848);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2450() {
   return (neuron0x2ea85d0()*0.444164);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2490() {
   return (neuron0x2ea8fa0()*-0.570547);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb24d0() {
   return (neuron0x2ea9970()*0.679553);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2850() {
   return (neuron0x2e84900()*0.261602);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2890() {
   return (neuron0x2e85150()*0.0676067);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb28d0() {
   return (neuron0x2e85c30()*-0.212167);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2910() {
   return (neuron0x2e856d0()*-0.797043);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2950() {
   return (neuron0x2e86a10()*-0.0884656);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2990() {
   return (neuron0x2e884d0()*0.140579);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb29d0() {
   return (neuron0x2e892a0()*0.411141);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2a10() {
   return (neuron0x2e89c70()*0.196198);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2a50() {
   return (neuron0x2e8a640()*0.662065);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2a90() {
   return (neuron0x2e8b120()*0.606395);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2ad0() {
   return (neuron0x2e8baf0()*2.84406);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2b10() {
   return (neuron0x2e88bd0()*-0.0236197);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2b50() {
   return (neuron0x2e8d6a0()*-0.307463);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2b90() {
   return (neuron0x2e8e070()*-1.05844);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2bd0() {
   return (neuron0x2e8ea40()*1.13035);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2c10() {
   return (neuron0x2e8f410()*2.44645);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb26a0() {
   return (neuron0x2e91220()*0.627626);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb26e0() {
   return (neuron0x2e91500()*-0.860569);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2d60() {
   return (neuron0x2e91ed0()*-0.133972);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2da0() {
   return (neuron0x2e928a0()*1.70688);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2de0() {
   return (neuron0x2e93270()*-0.424695);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2e20() {
   return (neuron0x2e93c40()*-0.486571);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2e60() {
   return (neuron0x2e8c790()*0.0583535);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2ea0() {
   return (neuron0x2e8d160()*-0.970977);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2ee0() {
   return (neuron0x2e969d0()*-1.7277);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2f20() {
   return (neuron0x2e973a0()*-3.02787);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2f60() {
   return (neuron0x2e97d70()*-1.39213);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2fa0() {
   return (neuron0x2e98740()*0.00600472);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2fe0() {
   return (neuron0x2e99110()*-0.239958);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3020() {
   return (neuron0x2e99ae0()*-0.272096);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3060() {
   return (neuron0x2e9a4b0()*-1.38265);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb30a0() {
   return (neuron0x2e9ae80()*0.802382);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2c50() {
   return (neuron0x2e90f10()*0.12117);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2c90() {
   return (neuron0x2e9da60()*1.74942);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2cd0() {
   return (neuron0x2e9e430()*-1.67097);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb2d10() {
   return (neuron0x2e9ee00()*-0.0754785);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb32f0() {
   return (neuron0x2e9f7d0()*0.528747);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3330() {
   return (neuron0x2ea01a0()*-1.7602);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3370() {
   return (neuron0x2ea0b70()*-0.221287);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb33b0() {
   return (neuron0x2ea1540()*-0.741745);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb33f0() {
   return (neuron0x2ea1f10()*0.640988);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3430() {
   return (neuron0x2ea2af0()*0.666976);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3470() {
   return (neuron0x2ea34c0()*0.844351);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb34b0() {
   return (neuron0x2e94340()*0.877727);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb34f0() {
   return (neuron0x2e94d10()*-0.117467);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3530() {
   return (neuron0x2e956e0()*1.08061);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3570() {
   return (neuron0x2ea7d20()*-0.218869);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb35b0() {
   return (neuron0x2ea85d0()*0.238463);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb35f0() {
   return (neuron0x2ea8fa0()*-1.20466);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3630() {
   return (neuron0x2ea9970()*-0.338153);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb39b0() {
   return (neuron0x2e84900()*-0.169465);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb39f0() {
   return (neuron0x2e85150()*-0.0805412);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3a30() {
   return (neuron0x2e85c30()*-0.0962801);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3a70() {
   return (neuron0x2e856d0()*1.57044);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3ab0() {
   return (neuron0x2e86a10()*0.0580158);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3af0() {
   return (neuron0x2e884d0()*-0.272799);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3b30() {
   return (neuron0x2e892a0()*-0.459279);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3b70() {
   return (neuron0x2e89c70()*-1.18788);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3bb0() {
   return (neuron0x2e8a640()*-1.3024);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3bf0() {
   return (neuron0x2e8b120()*-0.733477);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3c30() {
   return (neuron0x2e8baf0()*-2.14866);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3c70() {
   return (neuron0x2e88bd0()*0.234044);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3cb0() {
   return (neuron0x2e8d6a0()*0.789425);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3cf0() {
   return (neuron0x2e8e070()*1.44849);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3d30() {
   return (neuron0x2e8ea40()*-1.86715);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3d70() {
   return (neuron0x2e8f410()*-1.38272);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3800() {
   return (neuron0x2e91220()*1.35887);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3840() {
   return (neuron0x2e91500()*1.45243);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3ec0() {
   return (neuron0x2e91ed0()*0.0585086);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3f00() {
   return (neuron0x2e928a0()*-1.99968);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3f40() {
   return (neuron0x2e93270()*1.09532);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3f80() {
   return (neuron0x2e93c40()*1.95207);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3fc0() {
   return (neuron0x2e8c790()*0.0680623);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4000() {
   return (neuron0x2e8d160()*2.15651);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4040() {
   return (neuron0x2e969d0()*3.27659);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4080() {
   return (neuron0x2e973a0()*2.55149);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb40c0() {
   return (neuron0x2e97d70()*1.68043);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4100() {
   return (neuron0x2e98740()*0.285824);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4140() {
   return (neuron0x2e99110()*0.462431);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4180() {
   return (neuron0x2e99ae0()*-0.00785015);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb41c0() {
   return (neuron0x2e9a4b0()*1.45334);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4200() {
   return (neuron0x2e9ae80()*0.137489);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3db0() {
   return (neuron0x2e90f10()*0.751807);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3df0() {
   return (neuron0x2e9da60()*-3.26766);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3e30() {
   return (neuron0x2e9e430()*0.11229);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb3e70() {
   return (neuron0x2e9ee00()*-0.107879);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4450() {
   return (neuron0x2e9f7d0()*2.67306);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4490() {
   return (neuron0x2ea01a0()*1.03346);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb44d0() {
   return (neuron0x2ea0b70()*0.289533);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4510() {
   return (neuron0x2ea1540()*1.19197);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4550() {
   return (neuron0x2ea1f10()*-0.894988);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4590() {
   return (neuron0x2ea2af0()*-0.893742);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb45d0() {
   return (neuron0x2ea34c0()*-1.66302);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4610() {
   return (neuron0x2e94340()*-0.481453);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4650() {
   return (neuron0x2e94d10()*-0.0125852);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4690() {
   return (neuron0x2e956e0()*-2.88392);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb46d0() {
   return (neuron0x2ea7d20()*-0.629255);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4710() {
   return (neuron0x2ea85d0()*0.0457363);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4750() {
   return (neuron0x2ea8fa0()*1.46281);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4790() {
   return (neuron0x2ea9970()*-1.21101);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb49f0() {
   return (neuron0x2eb0b70()*-4.24066);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4a30() {
   return (neuron0x2eb0f10()*-4.35756);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4a70() {
   return (neuron0x2eb13b0()*7.37498);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4ab0() {
   return (neuron0x2eb2510()*-12.1844);
}

double NNfunction_nn_chi3_charge2p::synapse0x2eb4af0() {
   return (neuron0x2eb3670()*-8.05011);
}

