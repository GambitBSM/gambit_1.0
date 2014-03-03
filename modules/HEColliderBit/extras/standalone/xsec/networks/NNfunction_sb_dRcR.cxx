#include "NNfunction_sb_dRcR.h"
#include <cmath>

double NNfunction_sb_dRcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.3656)/15.2738;
   input1 = (in1 - -0.681096)/1156.73;
   input2 = (in2 - 649.886)/618.633;
   input3 = (in3 - -56.3608)/790.593;
   input4 = (in4 - 1057.51)/955.331;
   input5 = (in5 - 888.781)/940.278;
   input6 = (in6 - 901.188)/946.932;
   input7 = (in7 - 927.029)/937.147;
   input8 = (in8 - 892.294)/951.414;
   input9 = (in9 - 882.193)/937.491;
   input10 = (in10 - 973.221)/941.713;
   input11 = (in11 - 704.913)/849.802;
   input12 = (in12 - 700.196)/851.414;
   input13 = (in13 - 500.143)/515.142;
   input14 = (in14 - 719.318)/821.196;
   input15 = (in15 - 348.378)/336.543;
   input16 = (in16 - 539.308)/567.919;
   input17 = (in17 - 331.502)/325.105;
   input18 = (in18 - 724.708)/866.436;
   input19 = (in19 - 789.493)/861.482;
   input20 = (in20 - -6.40325)/491.69;
   input21 = (in21 - -4.46366)/1148.93;
   input22 = (in22 - 2.21409)/1207.58;
   input23 = (in23 - -197.193)/608.895;
   switch(index) {
     case 0:
         return neuron0x130f4a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_dRcR::Value(int index, double* input) {
   input0 = (input[0] - 23.3656)/15.2738;
   input1 = (input[1] - -0.681096)/1156.73;
   input2 = (input[2] - 649.886)/618.633;
   input3 = (input[3] - -56.3608)/790.593;
   input4 = (input[4] - 1057.51)/955.331;
   input5 = (input[5] - 888.781)/940.278;
   input6 = (input[6] - 901.188)/946.932;
   input7 = (input[7] - 927.029)/937.147;
   input8 = (input[8] - 892.294)/951.414;
   input9 = (input[9] - 882.193)/937.491;
   input10 = (input[10] - 973.221)/941.713;
   input11 = (input[11] - 704.913)/849.802;
   input12 = (input[12] - 700.196)/851.414;
   input13 = (input[13] - 500.143)/515.142;
   input14 = (input[14] - 719.318)/821.196;
   input15 = (input[15] - 348.378)/336.543;
   input16 = (input[16] - 539.308)/567.919;
   input17 = (input[17] - 331.502)/325.105;
   input18 = (input[18] - 724.708)/866.436;
   input19 = (input[19] - 789.493)/861.482;
   input20 = (input[20] - -6.40325)/491.69;
   input21 = (input[21] - -4.46366)/1148.93;
   input22 = (input[22] - 2.21409)/1207.58;
   input23 = (input[23] - -197.193)/608.895;
   switch(index) {
     case 0:
         return neuron0x130f4a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_dRcR::neuron0x12db560() {
   return input0;
}

double NNfunction_sb_dRcR::neuron0x12db8a0() {
   return input1;
}

double NNfunction_sb_dRcR::neuron0x12dbbe0() {
   return input2;
}

double NNfunction_sb_dRcR::neuron0x12dbf20() {
   return input3;
}

double NNfunction_sb_dRcR::neuron0x12dc260() {
   return input4;
}

double NNfunction_sb_dRcR::neuron0x12dc5a0() {
   return input5;
}

double NNfunction_sb_dRcR::neuron0x12dc8e0() {
   return input6;
}

double NNfunction_sb_dRcR::neuron0x12dcc20() {
   return input7;
}

double NNfunction_sb_dRcR::neuron0x12dcf60() {
   return input8;
}

double NNfunction_sb_dRcR::neuron0x12dd2a0() {
   return input9;
}

double NNfunction_sb_dRcR::neuron0x12dd5e0() {
   return input10;
}

double NNfunction_sb_dRcR::neuron0x12dd920() {
   return input11;
}

double NNfunction_sb_dRcR::neuron0x12ddc60() {
   return input12;
}

double NNfunction_sb_dRcR::neuron0x12ddfa0() {
   return input13;
}

double NNfunction_sb_dRcR::neuron0x12de2e0() {
   return input14;
}

double NNfunction_sb_dRcR::neuron0x12de620() {
   return input15;
}

double NNfunction_sb_dRcR::neuron0x12de960() {
   return input16;
}

double NNfunction_sb_dRcR::neuron0x12deec0() {
   return input17;
}

double NNfunction_sb_dRcR::neuron0x12df0e0() {
   return input18;
}

double NNfunction_sb_dRcR::neuron0x12df420() {
   return input19;
}

double NNfunction_sb_dRcR::neuron0x12df760() {
   return input20;
}

double NNfunction_sb_dRcR::neuron0x12dfaa0() {
   return input21;
}

double NNfunction_sb_dRcR::neuron0x12dfde0() {
   return input22;
}

double NNfunction_sb_dRcR::neuron0x12e0120() {
   return input23;
}

double NNfunction_sb_dRcR::input0x12e05c0() {
   double input = 0.600975;
   input += synapse0x109b3d0();
   input += synapse0x12db420();
   input += synapse0x12db460();
   input += synapse0x12e0870();
   input += synapse0x12e08b0();
   input += synapse0x12e08f0();
   input += synapse0x12e0930();
   input += synapse0x12e0970();
   input += synapse0x12e09b0();
   input += synapse0x12e09f0();
   input += synapse0x12e0a30();
   input += synapse0x12e0a70();
   input += synapse0x12e0ab0();
   input += synapse0x12e0af0();
   input += synapse0x12e0b30();
   input += synapse0x12e0b70();
   input += synapse0x12db390();
   input += synapse0x12db3d0();
   input += synapse0x108cc70();
   input += synapse0x108ccb0();
   input += synapse0x12e0dd0();
   input += synapse0x12e0e10();
   input += synapse0x12e0e50();
   input += synapse0x12e0e90();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12e05c0() {
   double input = input0x12e05c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12e0ed0() {
   double input = 0.580965;
   input += synapse0x12e1210();
   input += synapse0x12e1250();
   input += synapse0x12e1290();
   input += synapse0x12e12d0();
   input += synapse0x12e1310();
   input += synapse0x12e1350();
   input += synapse0x12e1390();
   input += synapse0x12e13d0();
   input += synapse0x12e1410();
   input += synapse0x12e0cc0();
   input += synapse0x12e0d00();
   input += synapse0x12e0d40();
   input += synapse0x12e0d80();
   input += synapse0x12e1660();
   input += synapse0x12e16a0();
   input += synapse0x12e16e0();
   input += synapse0x12e1060();
   input += synapse0x12e10a0();
   input += synapse0x12e1830();
   input += synapse0x12e1870();
   input += synapse0x12e18b0();
   input += synapse0x12e18f0();
   input += synapse0x12e1930();
   input += synapse0x12e1970();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12e0ed0() {
   double input = input0x12e0ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12e19b0() {
   double input = -3.89063;
   input += synapse0x12e1cf0();
   input += synapse0x12e1d30();
   input += synapse0x12e1d70();
   input += synapse0x12e1db0();
   input += synapse0x12e1df0();
   input += synapse0x12e1e30();
   input += synapse0x12e1e70();
   input += synapse0x12e1eb0();
   input += synapse0x12e1ef0();
   input += synapse0x12e1f30();
   input += synapse0x12e1f70();
   input += synapse0x12e1fb0();
   input += synapse0x12e1ff0();
   input += synapse0x12e2030();
   input += synapse0x12e2070();
   input += synapse0x12e20b0();
   input += synapse0x12e1b40();
   input += synapse0x12e1b80();
   input += synapse0x109aac0();
   input += synapse0x109ab00();
   input += synapse0x12ca5f0();
   input += synapse0x12ca630();
   input += synapse0x12ca670();
   input += synapse0x12db4a0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12e19b0() {
   double input = input0x12e19b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x109b240() {
   double input = 3.62542;
   input += synapse0x12e1600();
   input += synapse0x12db4e0();
   input += synapse0x12db520();
   input += synapse0x12e2200();
   input += synapse0x12e2240();
   input += synapse0x12e2280();
   input += synapse0x12e22c0();
   input += synapse0x12e2300();
   input += synapse0x12e2340();
   input += synapse0x12e2380();
   input += synapse0x12e23c0();
   input += synapse0x12e2400();
   input += synapse0x12e2440();
   input += synapse0x12e2480();
   input += synapse0x12e24c0();
   input += synapse0x12e2500();
   input += synapse0x12e1450();
   input += synapse0x12e1490();
   input += synapse0x12e2650();
   input += synapse0x12e2690();
   input += synapse0x12e26d0();
   input += synapse0x12e2710();
   input += synapse0x12e2750();
   input += synapse0x12e2790();
   return input;
}

double NNfunction_sb_dRcR::neuron0x109b240() {
   double input = input0x109b240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12e27d0() {
   double input = -2.9248;
   input += synapse0x12e2b10();
   input += synapse0x12e2b50();
   input += synapse0x12e2b90();
   input += synapse0x12e2bd0();
   input += synapse0x12e2c10();
   input += synapse0x12e2c50();
   input += synapse0x12e2c90();
   input += synapse0x12e2cd0();
   input += synapse0x12e2d10();
   input += synapse0x12e2d50();
   input += synapse0x12e2d90();
   input += synapse0x12e2dd0();
   input += synapse0x12e2e10();
   input += synapse0x12e2e50();
   input += synapse0x12e2e90();
   input += synapse0x12e2ed0();
   input += synapse0x12e2960();
   input += synapse0x12e29a0();
   input += synapse0x12e3020();
   input += synapse0x12e3060();
   input += synapse0x12e30a0();
   input += synapse0x12e30e0();
   input += synapse0x12e3120();
   input += synapse0x12e3160();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12e27d0() {
   double input = input0x12e27d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12e31a0() {
   double input = -0.475351;
   input += synapse0x12e34e0();
   input += synapse0x12e3520();
   input += synapse0x12e3560();
   input += synapse0x12e35a0();
   input += synapse0x12e35e0();
   input += synapse0x12e3620();
   input += synapse0x12e3660();
   input += synapse0x12e36a0();
   input += synapse0x12e36e0();
   input += synapse0x109ae30();
   input += synapse0x109ae70();
   input += synapse0x109aeb0();
   input += synapse0x109aef0();
   input += synapse0x109af30();
   input += synapse0x109af70();
   input += synapse0x109afb0();
   input += synapse0x12e3330();
   input += synapse0x12e3370();
   input += synapse0x109b100();
   input += synapse0x109b140();
   input += synapse0x109b180();
   input += synapse0x109b1c0();
   input += synapse0x109b200();
   input += synapse0x12e3f30();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12e31a0() {
   double input = input0x12e31a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12e3f70() {
   double input = -0.0133974;
   input += synapse0x12e42b0();
   input += synapse0x12e42f0();
   input += synapse0x12e4330();
   input += synapse0x12e4370();
   input += synapse0x12e43b0();
   input += synapse0x12e43f0();
   input += synapse0x12e4430();
   input += synapse0x12e4470();
   input += synapse0x12e44b0();
   input += synapse0x12e44f0();
   input += synapse0x12e4530();
   input += synapse0x12e4570();
   input += synapse0x12e45b0();
   input += synapse0x12e45f0();
   input += synapse0x12e4630();
   input += synapse0x12e4670();
   input += synapse0x12e4100();
   input += synapse0x12e4140();
   input += synapse0x12e47c0();
   input += synapse0x12e4800();
   input += synapse0x12e4840();
   input += synapse0x12e4880();
   input += synapse0x12e48c0();
   input += synapse0x12e4900();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12e3f70() {
   double input = input0x12e3f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12e4940() {
   double input = 2.62294;
   input += synapse0x12e4c80();
   input += synapse0x12e4cc0();
   input += synapse0x12e4d00();
   input += synapse0x12e4d40();
   input += synapse0x12e4d80();
   input += synapse0x12e4dc0();
   input += synapse0x12e4e00();
   input += synapse0x12e4e40();
   input += synapse0x12e4e80();
   input += synapse0x12e4ec0();
   input += synapse0x12e4f00();
   input += synapse0x12e4f40();
   input += synapse0x12e4f80();
   input += synapse0x12e4fc0();
   input += synapse0x12e5000();
   input += synapse0x12e5040();
   input += synapse0x12e4ad0();
   input += synapse0x12e4b10();
   input += synapse0x12e5190();
   input += synapse0x12e51d0();
   input += synapse0x12e5210();
   input += synapse0x12e5250();
   input += synapse0x12e5290();
   input += synapse0x12e52d0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12e4940() {
   double input = input0x12e4940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12e5310() {
   double input = -0.518963;
   input += synapse0x12dedb0();
   input += synapse0x12dedf0();
   input += synapse0x12dee30();
   input += synapse0x12dee70();
   input += synapse0x12e5860();
   input += synapse0x12e58a0();
   input += synapse0x12e58e0();
   input += synapse0x12e5920();
   input += synapse0x12e5960();
   input += synapse0x12e59a0();
   input += synapse0x12e59e0();
   input += synapse0x12e5a20();
   input += synapse0x12e5a60();
   input += synapse0x12e5aa0();
   input += synapse0x12e5ae0();
   input += synapse0x12e5b20();
   input += synapse0x12e54a0();
   input += synapse0x12e54e0();
   input += synapse0x12e5c70();
   input += synapse0x12e5cb0();
   input += synapse0x12e5cf0();
   input += synapse0x12e5d30();
   input += synapse0x12e5d70();
   input += synapse0x12e5db0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12e5310() {
   double input = input0x12e5310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12e5df0() {
   double input = -2.33216;
   input += synapse0x12e6130();
   input += synapse0x12e6170();
   input += synapse0x12e61b0();
   input += synapse0x12e61f0();
   input += synapse0x12e6230();
   input += synapse0x12e6270();
   input += synapse0x12e62b0();
   input += synapse0x12e62f0();
   input += synapse0x12e6330();
   input += synapse0x12e6370();
   input += synapse0x12e63b0();
   input += synapse0x12e63f0();
   input += synapse0x12e6430();
   input += synapse0x12e6470();
   input += synapse0x12e64b0();
   input += synapse0x12e64f0();
   input += synapse0x12e5f80();
   input += synapse0x12e5fc0();
   input += synapse0x12e6640();
   input += synapse0x12e6680();
   input += synapse0x12e66c0();
   input += synapse0x12e6700();
   input += synapse0x12e6740();
   input += synapse0x12e6780();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12e5df0() {
   double input = input0x12e5df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12e67c0() {
   double input = -1.47874;
   input += synapse0x12e6b00();
   input += synapse0x12e6b40();
   input += synapse0x12e6b80();
   input += synapse0x12e6bc0();
   input += synapse0x12e6c00();
   input += synapse0x12e6c40();
   input += synapse0x12e6c80();
   input += synapse0x12e6cc0();
   input += synapse0x12e6d00();
   input += synapse0x12e6d40();
   input += synapse0x12e6d80();
   input += synapse0x12e6dc0();
   input += synapse0x12e6e00();
   input += synapse0x12e6e40();
   input += synapse0x12e6e80();
   input += synapse0x12e6ec0();
   input += synapse0x12e6950();
   input += synapse0x12e6990();
   input += synapse0x12e3720();
   input += synapse0x12e3760();
   input += synapse0x12e37a0();
   input += synapse0x12e37e0();
   input += synapse0x12e3820();
   input += synapse0x12e3860();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12e67c0() {
   double input = input0x12e67c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12e38a0() {
   double input = -0.252011;
   input += synapse0x12e3be0();
   input += synapse0x12e3c20();
   input += synapse0x12e3c60();
   input += synapse0x12e3ca0();
   input += synapse0x12e3ce0();
   input += synapse0x12e3d20();
   input += synapse0x12e3d60();
   input += synapse0x12e3da0();
   input += synapse0x12e3de0();
   input += synapse0x12e3e20();
   input += synapse0x12e3e60();
   input += synapse0x12e3ea0();
   input += synapse0x12e3ee0();
   input += synapse0x12e8020();
   input += synapse0x12e8060();
   input += synapse0x12e80a0();
   input += synapse0x12e3a30();
   input += synapse0x12e3a70();
   input += synapse0x12e81f0();
   input += synapse0x12e8230();
   input += synapse0x12e8270();
   input += synapse0x12e82b0();
   input += synapse0x12e82f0();
   input += synapse0x12e8330();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12e38a0() {
   double input = input0x12e38a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12e8370() {
   double input = 1.5893;
   input += synapse0x12e86b0();
   input += synapse0x12e86f0();
   input += synapse0x12e8730();
   input += synapse0x12e8770();
   input += synapse0x12e87b0();
   input += synapse0x12e87f0();
   input += synapse0x12e8830();
   input += synapse0x12e8870();
   input += synapse0x12e88b0();
   input += synapse0x12e88f0();
   input += synapse0x12e8930();
   input += synapse0x12e8970();
   input += synapse0x12e89b0();
   input += synapse0x12e89f0();
   input += synapse0x12e8a30();
   input += synapse0x12e8a70();
   input += synapse0x12e8500();
   input += synapse0x12e8540();
   input += synapse0x12e8bc0();
   input += synapse0x12e8c00();
   input += synapse0x12e8c40();
   input += synapse0x12e8c80();
   input += synapse0x12e8cc0();
   input += synapse0x12e8d00();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12e8370() {
   double input = input0x12e8370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12e8d40() {
   double input = 0.239374;
   input += synapse0x12e9080();
   input += synapse0x12e90c0();
   input += synapse0x12e9100();
   input += synapse0x12e9140();
   input += synapse0x12e9180();
   input += synapse0x12e91c0();
   input += synapse0x12e9200();
   input += synapse0x12e9240();
   input += synapse0x12e9280();
   input += synapse0x12e92c0();
   input += synapse0x12e9300();
   input += synapse0x12e9340();
   input += synapse0x12e9380();
   input += synapse0x12e93c0();
   input += synapse0x12e9400();
   input += synapse0x12e9440();
   input += synapse0x12e8ed0();
   input += synapse0x12e8f10();
   input += synapse0x12e9590();
   input += synapse0x12e95d0();
   input += synapse0x12e9610();
   input += synapse0x12e9650();
   input += synapse0x12e9690();
   input += synapse0x12e96d0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12e8d40() {
   double input = input0x12e8d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12e9710() {
   double input = 1.12127;
   input += synapse0x12e9a50();
   input += synapse0x12e9a90();
   input += synapse0x12e9ad0();
   input += synapse0x12e9b10();
   input += synapse0x12e9b50();
   input += synapse0x12e9b90();
   input += synapse0x12e9bd0();
   input += synapse0x12e9c10();
   input += synapse0x12e9c50();
   input += synapse0x12e9c90();
   input += synapse0x12e9cd0();
   input += synapse0x12e9d10();
   input += synapse0x12e9d50();
   input += synapse0x12e9d90();
   input += synapse0x12e9dd0();
   input += synapse0x12e9e10();
   input += synapse0x12e98a0();
   input += synapse0x12e98e0();
   input += synapse0x12e9f60();
   input += synapse0x12e9fa0();
   input += synapse0x12e9fe0();
   input += synapse0x12ea020();
   input += synapse0x12ea060();
   input += synapse0x12ea0a0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12e9710() {
   double input = input0x12e9710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12ea0e0() {
   double input = -1.37709;
   input += synapse0x12ea420();
   input += synapse0x12db780();
   input += synapse0x12db7c0();
   input += synapse0x12dbac0();
   input += synapse0x12dbb00();
   input += synapse0x12dbe00();
   input += synapse0x12dbe40();
   input += synapse0x12dc140();
   input += synapse0x12dc180();
   input += synapse0x12dc480();
   input += synapse0x12dc4c0();
   input += synapse0x12dc7c0();
   input += synapse0x12dc800();
   input += synapse0x12dcb00();
   input += synapse0x12dcb40();
   input += synapse0x12dce40();
   input += synapse0x12dce80();
   input += synapse0x12dd180();
   input += synapse0x12dd1c0();
   input += synapse0x12dd4c0();
   input += synapse0x12dd500();
   input += synapse0x12dd800();
   input += synapse0x12dd840();
   input += synapse0x12ddb40();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12ea0e0() {
   double input = input0x12ea0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12ebef0() {
   double input = 0.92472;
   input += synapse0x12ddb80();
   input += synapse0x12de840();
   input += synapse0x12de880();
   input += synapse0x12ea270();
   input += synapse0x12ea2b0();
   input += synapse0x12deb80();
   input += synapse0x12debc0();
   input += synapse0x108cb50();
   input += synapse0x108cb90();
   input += synapse0x12df300();
   input += synapse0x12df340();
   input += synapse0x12df640();
   input += synapse0x12df680();
   input += synapse0x12df980();
   input += synapse0x12df9c0();
   input += synapse0x12dfcc0();
   input += synapse0x12dfd00();
   input += synapse0x12e0000();
   input += synapse0x12e0040();
   input += synapse0x12e0340();
   input += synapse0x12e0380();
   input += synapse0x12dde80();
   input += synapse0x12ddec0();
   input += synapse0x12ec190();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12ebef0() {
   double input = input0x12ebef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12ec1d0() {
   double input = 0.770589;
   input += synapse0x12ec510();
   input += synapse0x12ec550();
   input += synapse0x12ec590();
   input += synapse0x12ec5d0();
   input += synapse0x12ec610();
   input += synapse0x12ec650();
   input += synapse0x12ec690();
   input += synapse0x12ec6d0();
   input += synapse0x12ec710();
   input += synapse0x12ec750();
   input += synapse0x12ec790();
   input += synapse0x12ec7d0();
   input += synapse0x12ec810();
   input += synapse0x12ec850();
   input += synapse0x12ec890();
   input += synapse0x12ec8d0();
   input += synapse0x12ec360();
   input += synapse0x12ec3a0();
   input += synapse0x12eca20();
   input += synapse0x12eca60();
   input += synapse0x12ecaa0();
   input += synapse0x12ecae0();
   input += synapse0x12ecb20();
   input += synapse0x12ecb60();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12ec1d0() {
   double input = input0x12ec1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12ecba0() {
   double input = -2.73084;
   input += synapse0x12ecee0();
   input += synapse0x12ecf20();
   input += synapse0x12ecf60();
   input += synapse0x12ecfa0();
   input += synapse0x12ecfe0();
   input += synapse0x12ed020();
   input += synapse0x12ed060();
   input += synapse0x12ed0a0();
   input += synapse0x12ed0e0();
   input += synapse0x12ed120();
   input += synapse0x12ed160();
   input += synapse0x12ed1a0();
   input += synapse0x12ed1e0();
   input += synapse0x12ed220();
   input += synapse0x12ed260();
   input += synapse0x12ed2a0();
   input += synapse0x12ecd30();
   input += synapse0x12ecd70();
   input += synapse0x12ed3f0();
   input += synapse0x12ed430();
   input += synapse0x12ed470();
   input += synapse0x12ed4b0();
   input += synapse0x12ed4f0();
   input += synapse0x12ed530();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12ecba0() {
   double input = input0x12ecba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12ed570() {
   double input = 0.854945;
   input += synapse0x12ed8b0();
   input += synapse0x12ed8f0();
   input += synapse0x12ed930();
   input += synapse0x12ed970();
   input += synapse0x12ed9b0();
   input += synapse0x12ed9f0();
   input += synapse0x12eda30();
   input += synapse0x12eda70();
   input += synapse0x12edab0();
   input += synapse0x12edaf0();
   input += synapse0x12edb30();
   input += synapse0x12edb70();
   input += synapse0x12edbb0();
   input += synapse0x12edbf0();
   input += synapse0x12edc30();
   input += synapse0x12edc70();
   input += synapse0x12ed700();
   input += synapse0x12ed740();
   input += synapse0x12eddc0();
   input += synapse0x12ede00();
   input += synapse0x12ede40();
   input += synapse0x12ede80();
   input += synapse0x12edec0();
   input += synapse0x12edf00();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12ed570() {
   double input = input0x12ed570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12edf40() {
   double input = -0.556581;
   input += synapse0x12ee280();
   input += synapse0x12ee2c0();
   input += synapse0x12ee300();
   input += synapse0x12ee340();
   input += synapse0x12ee380();
   input += synapse0x12ee3c0();
   input += synapse0x12ee400();
   input += synapse0x12ee440();
   input += synapse0x12ee480();
   input += synapse0x12ee4c0();
   input += synapse0x12ee500();
   input += synapse0x12ee540();
   input += synapse0x12ee580();
   input += synapse0x12ee5c0();
   input += synapse0x12ee600();
   input += synapse0x12ee640();
   input += synapse0x12ee0d0();
   input += synapse0x12ee110();
   input += synapse0x12ee790();
   input += synapse0x12ee7d0();
   input += synapse0x12ee810();
   input += synapse0x12ee850();
   input += synapse0x12ee890();
   input += synapse0x12ee8d0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12edf40() {
   double input = input0x12edf40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12ee910() {
   double input = 0.891798;
   input += synapse0x12eec50();
   input += synapse0x12eec90();
   input += synapse0x12eecd0();
   input += synapse0x12eed10();
   input += synapse0x12eed50();
   input += synapse0x12eed90();
   input += synapse0x12eedd0();
   input += synapse0x12eee10();
   input += synapse0x12eee50();
   input += synapse0x12e7010();
   input += synapse0x12e7050();
   input += synapse0x12e7090();
   input += synapse0x12e70d0();
   input += synapse0x12e7110();
   input += synapse0x12e7150();
   input += synapse0x12e7190();
   input += synapse0x12eeaa0();
   input += synapse0x12eeae0();
   input += synapse0x12e72e0();
   input += synapse0x12e7320();
   input += synapse0x12e7360();
   input += synapse0x12e73a0();
   input += synapse0x12e73e0();
   input += synapse0x12e7420();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12ee910() {
   double input = input0x12ee910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12e7460() {
   double input = -0.694471;
   input += synapse0x12e77a0();
   input += synapse0x12e77e0();
   input += synapse0x12e7820();
   input += synapse0x12e7860();
   input += synapse0x12e78a0();
   input += synapse0x12e78e0();
   input += synapse0x12e7920();
   input += synapse0x12e7960();
   input += synapse0x12e79a0();
   input += synapse0x12e79e0();
   input += synapse0x12e7a20();
   input += synapse0x12e7a60();
   input += synapse0x12e7aa0();
   input += synapse0x12e7ae0();
   input += synapse0x12e7b20();
   input += synapse0x12e7b60();
   input += synapse0x12e75f0();
   input += synapse0x12e7630();
   input += synapse0x12e7cb0();
   input += synapse0x12e7cf0();
   input += synapse0x12e7d30();
   input += synapse0x12e7d70();
   input += synapse0x12e7db0();
   input += synapse0x12e7df0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12e7460() {
   double input = input0x12e7460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12e7e30() {
   double input = -1.33718;
   input += synapse0x12e7fc0();
   input += synapse0x12f1050();
   input += synapse0x12f1090();
   input += synapse0x12f10d0();
   input += synapse0x12f1110();
   input += synapse0x12f1150();
   input += synapse0x12f1190();
   input += synapse0x12f11d0();
   input += synapse0x12f1210();
   input += synapse0x12f1250();
   input += synapse0x12f1290();
   input += synapse0x12f12d0();
   input += synapse0x12f1310();
   input += synapse0x12f1350();
   input += synapse0x12f1390();
   input += synapse0x12f13d0();
   input += synapse0x12f0ea0();
   input += synapse0x12f0ee0();
   input += synapse0x12f1520();
   input += synapse0x12f1560();
   input += synapse0x12f15a0();
   input += synapse0x12f15e0();
   input += synapse0x12f1620();
   input += synapse0x12f1660();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12e7e30() {
   double input = input0x12e7e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12f16a0() {
   double input = 0.565972;
   input += synapse0x12f19e0();
   input += synapse0x12f1a20();
   input += synapse0x12f1a60();
   input += synapse0x12f1aa0();
   input += synapse0x12f1ae0();
   input += synapse0x12f1b20();
   input += synapse0x12f1b60();
   input += synapse0x12f1ba0();
   input += synapse0x12f1be0();
   input += synapse0x12f1c20();
   input += synapse0x12f1c60();
   input += synapse0x12f1ca0();
   input += synapse0x12f1ce0();
   input += synapse0x12f1d20();
   input += synapse0x12f1d60();
   input += synapse0x12f1da0();
   input += synapse0x12f1830();
   input += synapse0x12f1870();
   input += synapse0x12f1ef0();
   input += synapse0x12f1f30();
   input += synapse0x12f1f70();
   input += synapse0x12f1fb0();
   input += synapse0x12f1ff0();
   input += synapse0x12f2030();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12f16a0() {
   double input = input0x12f16a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12f2070() {
   double input = 0.559396;
   input += synapse0x12f23b0();
   input += synapse0x12f23f0();
   input += synapse0x12f2430();
   input += synapse0x12f2470();
   input += synapse0x12f24b0();
   input += synapse0x12f24f0();
   input += synapse0x12f2530();
   input += synapse0x12f2570();
   input += synapse0x12f25b0();
   input += synapse0x12f25f0();
   input += synapse0x12f2630();
   input += synapse0x12f2670();
   input += synapse0x12f26b0();
   input += synapse0x12f26f0();
   input += synapse0x12f2730();
   input += synapse0x12f2770();
   input += synapse0x12f2200();
   input += synapse0x12f2240();
   input += synapse0x12f28c0();
   input += synapse0x12f2900();
   input += synapse0x12f2940();
   input += synapse0x12f2980();
   input += synapse0x12f29c0();
   input += synapse0x12f2a00();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12f2070() {
   double input = input0x12f2070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12f2a40() {
   double input = -0.506204;
   input += synapse0x12f2d80();
   input += synapse0x12f2dc0();
   input += synapse0x12f2e00();
   input += synapse0x12f2e40();
   input += synapse0x12f2e80();
   input += synapse0x12f2ec0();
   input += synapse0x12f2f00();
   input += synapse0x12f2f40();
   input += synapse0x12f2f80();
   input += synapse0x12f2fc0();
   input += synapse0x12f3000();
   input += synapse0x12f3040();
   input += synapse0x12f3080();
   input += synapse0x12f30c0();
   input += synapse0x12f3100();
   input += synapse0x12f3140();
   input += synapse0x12f2bd0();
   input += synapse0x12f2c10();
   input += synapse0x12f3290();
   input += synapse0x12f32d0();
   input += synapse0x12f3310();
   input += synapse0x12f3350();
   input += synapse0x12f3390();
   input += synapse0x12f33d0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12f2a40() {
   double input = input0x12f2a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12f3410() {
   double input = 0.831509;
   input += synapse0x12f3750();
   input += synapse0x12f3790();
   input += synapse0x12f37d0();
   input += synapse0x12f3810();
   input += synapse0x12f3850();
   input += synapse0x12f3890();
   input += synapse0x12f38d0();
   input += synapse0x12f3910();
   input += synapse0x12f3950();
   input += synapse0x12f3990();
   input += synapse0x12f39d0();
   input += synapse0x12f3a10();
   input += synapse0x12f3a50();
   input += synapse0x12f3a90();
   input += synapse0x12f3ad0();
   input += synapse0x12f3b10();
   input += synapse0x12f35a0();
   input += synapse0x12f35e0();
   input += synapse0x12f3c60();
   input += synapse0x12f3ca0();
   input += synapse0x12f3ce0();
   input += synapse0x12f3d20();
   input += synapse0x12f3d60();
   input += synapse0x12f3da0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12f3410() {
   double input = input0x12f3410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12f3de0() {
   double input = -1.32272;
   input += synapse0x12f4120();
   input += synapse0x12f4160();
   input += synapse0x12f41a0();
   input += synapse0x12f41e0();
   input += synapse0x12f4220();
   input += synapse0x12f4260();
   input += synapse0x12f42a0();
   input += synapse0x12f42e0();
   input += synapse0x12f4320();
   input += synapse0x12f4360();
   input += synapse0x12f43a0();
   input += synapse0x12f43e0();
   input += synapse0x12f4420();
   input += synapse0x12f4460();
   input += synapse0x12f44a0();
   input += synapse0x12f44e0();
   input += synapse0x12f3f70();
   input += synapse0x12f3fb0();
   input += synapse0x12f4630();
   input += synapse0x12f4670();
   input += synapse0x12f46b0();
   input += synapse0x12f46f0();
   input += synapse0x12f4730();
   input += synapse0x12f4770();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12f3de0() {
   double input = input0x12f3de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12f47b0() {
   double input = 0.31273;
   input += synapse0x12f4af0();
   input += synapse0x12f4b30();
   input += synapse0x12f4b70();
   input += synapse0x12f4bb0();
   input += synapse0x12f4bf0();
   input += synapse0x12f4c30();
   input += synapse0x12f4c70();
   input += synapse0x12f4cb0();
   input += synapse0x12f4cf0();
   input += synapse0x12f4d30();
   input += synapse0x12f4d70();
   input += synapse0x12f4db0();
   input += synapse0x12f4df0();
   input += synapse0x12f4e30();
   input += synapse0x12f4e70();
   input += synapse0x12f4eb0();
   input += synapse0x12f4940();
   input += synapse0x12f4980();
   input += synapse0x12f5000();
   input += synapse0x12f5040();
   input += synapse0x12f5080();
   input += synapse0x12f50c0();
   input += synapse0x12f5100();
   input += synapse0x12f5140();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12f47b0() {
   double input = input0x12f47b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12f5180() {
   double input = -0.824844;
   input += synapse0x12f54c0();
   input += synapse0x12f5500();
   input += synapse0x12f5540();
   input += synapse0x12f5580();
   input += synapse0x12f55c0();
   input += synapse0x12f5600();
   input += synapse0x12f5640();
   input += synapse0x12f5680();
   input += synapse0x12f56c0();
   input += synapse0x12f5700();
   input += synapse0x12f5740();
   input += synapse0x12f5780();
   input += synapse0x12f57c0();
   input += synapse0x12f5800();
   input += synapse0x12f5840();
   input += synapse0x12f5880();
   input += synapse0x12f5310();
   input += synapse0x12f5350();
   input += synapse0x12f59d0();
   input += synapse0x12f5a10();
   input += synapse0x12f5a50();
   input += synapse0x12f5a90();
   input += synapse0x12f5ad0();
   input += synapse0x12f5b10();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12f5180() {
   double input = input0x12f5180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12f5b50() {
   double input = 3.11148;
   input += synapse0x12f5e90();
   input += synapse0x12ea460();
   input += synapse0x12ea4a0();
   input += synapse0x12ea4e0();
   input += synapse0x12ea730();
   input += synapse0x12ea770();
   input += synapse0x12ea7b0();
   input += synapse0x12eaa00();
   input += synapse0x12eaa40();
   input += synapse0x12eac90();
   input += synapse0x12eacd0();
   input += synapse0x12ead10();
   input += synapse0x12eaf60();
   input += synapse0x12eafa0();
   input += synapse0x12eb1f0();
   input += synapse0x12eb230();
   input += synapse0x12f5ce0();
   input += synapse0x12f5d20();
   input += synapse0x12eb380();
   input += synapse0x12eb890();
   input += synapse0x12eb8d0();
   input += synapse0x12eb910();
   input += synapse0x12ebb60();
   input += synapse0x12ebba0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12f5b50() {
   double input = input0x12f5b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12ebbe0() {
   double input = 0.468336;
   input += synapse0x12eb450();
   input += synapse0x12eb490();
   input += synapse0x12eb4d0();
   input += synapse0x12eb510();
   input += synapse0x12ebe90();
   input += synapse0x12f81e0();
   input += synapse0x12f8220();
   input += synapse0x12f8260();
   input += synapse0x12f82a0();
   input += synapse0x12f82e0();
   input += synapse0x12f8320();
   input += synapse0x12f8360();
   input += synapse0x12f83a0();
   input += synapse0x12f83e0();
   input += synapse0x12f8420();
   input += synapse0x12f8460();
   input += synapse0x12ebd70();
   input += synapse0x12ebdb0();
   input += synapse0x12f85b0();
   input += synapse0x12f85f0();
   input += synapse0x12f8630();
   input += synapse0x12f8670();
   input += synapse0x12f86b0();
   input += synapse0x12f86f0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12ebbe0() {
   double input = input0x12ebbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12f8730() {
   double input = 3.28915;
   input += synapse0x12f8a70();
   input += synapse0x12f8ab0();
   input += synapse0x12f8af0();
   input += synapse0x12f8b30();
   input += synapse0x12f8b70();
   input += synapse0x12f8bb0();
   input += synapse0x12f8bf0();
   input += synapse0x12f8c30();
   input += synapse0x12f8c70();
   input += synapse0x12f8cb0();
   input += synapse0x12f8cf0();
   input += synapse0x12f8d30();
   input += synapse0x12f8d70();
   input += synapse0x12f8db0();
   input += synapse0x12f8df0();
   input += synapse0x12f8e30();
   input += synapse0x12f88c0();
   input += synapse0x12f8900();
   input += synapse0x12f8f80();
   input += synapse0x12f8fc0();
   input += synapse0x12f9000();
   input += synapse0x12f9040();
   input += synapse0x12f9080();
   input += synapse0x12f90c0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12f8730() {
   double input = input0x12f8730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12f9100() {
   double input = -0.950541;
   input += synapse0x12f9440();
   input += synapse0x12f9480();
   input += synapse0x12f94c0();
   input += synapse0x12f9500();
   input += synapse0x12f9540();
   input += synapse0x12f9580();
   input += synapse0x12f95c0();
   input += synapse0x12f9600();
   input += synapse0x12f9640();
   input += synapse0x12f9680();
   input += synapse0x12f96c0();
   input += synapse0x12f9700();
   input += synapse0x12f9740();
   input += synapse0x12f9780();
   input += synapse0x12f97c0();
   input += synapse0x12f9800();
   input += synapse0x12f9290();
   input += synapse0x12f92d0();
   input += synapse0x12f9950();
   input += synapse0x12f9990();
   input += synapse0x12f99d0();
   input += synapse0x12f9a10();
   input += synapse0x12f9a50();
   input += synapse0x12f9a90();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12f9100() {
   double input = input0x12f9100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12f9ad0() {
   double input = 2.60212;
   input += synapse0x12f9e10();
   input += synapse0x12f9e50();
   input += synapse0x12f9e90();
   input += synapse0x12f9ed0();
   input += synapse0x12f9f10();
   input += synapse0x12f9f50();
   input += synapse0x12f9f90();
   input += synapse0x12f9fd0();
   input += synapse0x12fa010();
   input += synapse0x12fa050();
   input += synapse0x12fa090();
   input += synapse0x12fa0d0();
   input += synapse0x12fa110();
   input += synapse0x12fa150();
   input += synapse0x12fa190();
   input += synapse0x12fa1d0();
   input += synapse0x12f9c60();
   input += synapse0x12f9ca0();
   input += synapse0x12fa320();
   input += synapse0x12fa360();
   input += synapse0x12fa3a0();
   input += synapse0x12fa3e0();
   input += synapse0x12fa420();
   input += synapse0x12fa460();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12f9ad0() {
   double input = input0x12f9ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12fa4a0() {
   double input = 1.97179;
   input += synapse0x12fa7e0();
   input += synapse0x12fa820();
   input += synapse0x12fa860();
   input += synapse0x12fa8a0();
   input += synapse0x12fa8e0();
   input += synapse0x12fa920();
   input += synapse0x12fa960();
   input += synapse0x12fa9a0();
   input += synapse0x12fa9e0();
   input += synapse0x12faa20();
   input += synapse0x12faa60();
   input += synapse0x12faaa0();
   input += synapse0x12faae0();
   input += synapse0x12fab20();
   input += synapse0x12fab60();
   input += synapse0x12faba0();
   input += synapse0x12fa630();
   input += synapse0x12fa670();
   input += synapse0x12facf0();
   input += synapse0x12fad30();
   input += synapse0x12fad70();
   input += synapse0x12fadb0();
   input += synapse0x12fadf0();
   input += synapse0x12fae30();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12fa4a0() {
   double input = input0x12fa4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12fae70() {
   double input = 0.782127;
   input += synapse0x12fb1b0();
   input += synapse0x12fb1f0();
   input += synapse0x12fb230();
   input += synapse0x12fb270();
   input += synapse0x12fb2b0();
   input += synapse0x12fb2f0();
   input += synapse0x12fb330();
   input += synapse0x12fb370();
   input += synapse0x12fb3b0();
   input += synapse0x12fb3f0();
   input += synapse0x12fb430();
   input += synapse0x12fb470();
   input += synapse0x12fb4b0();
   input += synapse0x12fb4f0();
   input += synapse0x12fb530();
   input += synapse0x12fb570();
   input += synapse0x12fb000();
   input += synapse0x12fb040();
   input += synapse0x12fb6c0();
   input += synapse0x12fb700();
   input += synapse0x12fb740();
   input += synapse0x12fb780();
   input += synapse0x12fb7c0();
   input += synapse0x12fb800();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12fae70() {
   double input = input0x12fae70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12fb840() {
   double input = -0.83587;
   input += synapse0x12fbb80();
   input += synapse0x12fbbc0();
   input += synapse0x12fbc00();
   input += synapse0x12fbc40();
   input += synapse0x12fbc80();
   input += synapse0x12fbcc0();
   input += synapse0x12fbd00();
   input += synapse0x12fbd40();
   input += synapse0x12fbd80();
   input += synapse0x12fbdc0();
   input += synapse0x12fbe00();
   input += synapse0x12fbe40();
   input += synapse0x12fbe80();
   input += synapse0x12fbec0();
   input += synapse0x12fbf00();
   input += synapse0x12fbf40();
   input += synapse0x12fb9d0();
   input += synapse0x12fba10();
   input += synapse0x12fc090();
   input += synapse0x12fc0d0();
   input += synapse0x12fc110();
   input += synapse0x12fc150();
   input += synapse0x12fc190();
   input += synapse0x12fc1d0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12fb840() {
   double input = input0x12fb840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12fc210() {
   double input = 2.09752;
   input += synapse0x12fc550();
   input += synapse0x12fc590();
   input += synapse0x12fc5d0();
   input += synapse0x12fc610();
   input += synapse0x12fc650();
   input += synapse0x12fc690();
   input += synapse0x12fc6d0();
   input += synapse0x12fc710();
   input += synapse0x12fc750();
   input += synapse0x12fc790();
   input += synapse0x12fc7d0();
   input += synapse0x12fc810();
   input += synapse0x12fc850();
   input += synapse0x12fc890();
   input += synapse0x12fc8d0();
   input += synapse0x12fc910();
   input += synapse0x12fc3a0();
   input += synapse0x12fc3e0();
   input += synapse0x12fca60();
   input += synapse0x12fcaa0();
   input += synapse0x12fcae0();
   input += synapse0x12fcb20();
   input += synapse0x12fcb60();
   input += synapse0x12fcba0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12fc210() {
   double input = input0x12fc210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12fcbe0() {
   double input = -3.97688;
   input += synapse0x12e5650();
   input += synapse0x12e5690();
   input += synapse0x12e56d0();
   input += synapse0x12e5710();
   input += synapse0x12e5750();
   input += synapse0x12e5790();
   input += synapse0x12e57d0();
   input += synapse0x12e5810();
   input += synapse0x12fd330();
   input += synapse0x12fd370();
   input += synapse0x12fd3b0();
   input += synapse0x12fd3f0();
   input += synapse0x12fd430();
   input += synapse0x12fd470();
   input += synapse0x12fd4b0();
   input += synapse0x12fd4f0();
   input += synapse0x12fcd70();
   input += synapse0x12fcdb0();
   input += synapse0x12fd640();
   input += synapse0x12fd680();
   input += synapse0x12fd6c0();
   input += synapse0x12fd700();
   input += synapse0x12fd740();
   input += synapse0x12fd780();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12fcbe0() {
   double input = input0x12fcbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12fd7c0() {
   double input = -0.557287;
   input += synapse0x12fdb00();
   input += synapse0x12fdb40();
   input += synapse0x12fdb80();
   input += synapse0x12fdbc0();
   input += synapse0x12fdc00();
   input += synapse0x12fdc40();
   input += synapse0x12fdc80();
   input += synapse0x12fdcc0();
   input += synapse0x12fdd00();
   input += synapse0x12fdd40();
   input += synapse0x12fdd80();
   input += synapse0x12fddc0();
   input += synapse0x12fde00();
   input += synapse0x12fde40();
   input += synapse0x12fde80();
   input += synapse0x12fdec0();
   input += synapse0x12fd950();
   input += synapse0x12fd990();
   input += synapse0x12fe010();
   input += synapse0x12fe050();
   input += synapse0x12fe090();
   input += synapse0x12fe0d0();
   input += synapse0x12fe110();
   input += synapse0x12fe150();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12fd7c0() {
   double input = input0x12fd7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12fe190() {
   double input = 2.25378;
   input += synapse0x12fe4d0();
   input += synapse0x12fe510();
   input += synapse0x12fe550();
   input += synapse0x12fe590();
   input += synapse0x12fe5d0();
   input += synapse0x12fe610();
   input += synapse0x12fe650();
   input += synapse0x12fe690();
   input += synapse0x12fe6d0();
   input += synapse0x12fe710();
   input += synapse0x12fe750();
   input += synapse0x12fe790();
   input += synapse0x12fe7d0();
   input += synapse0x12fe810();
   input += synapse0x12fe850();
   input += synapse0x12fe890();
   input += synapse0x12fe320();
   input += synapse0x12fe360();
   input += synapse0x12eee90();
   input += synapse0x12eeed0();
   input += synapse0x12eef10();
   input += synapse0x12eef50();
   input += synapse0x12eef90();
   input += synapse0x12eefd0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12fe190() {
   double input = input0x12fe190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12ef010() {
   double input = -1.44631;
   input += synapse0x12ef350();
   input += synapse0x12ef390();
   input += synapse0x12ef3d0();
   input += synapse0x12ef410();
   input += synapse0x12ef450();
   input += synapse0x12ef490();
   input += synapse0x12ef4d0();
   input += synapse0x12ef510();
   input += synapse0x12ef550();
   input += synapse0x12ef590();
   input += synapse0x12ef5d0();
   input += synapse0x12ef610();
   input += synapse0x12ef650();
   input += synapse0x12ef690();
   input += synapse0x12ef6d0();
   input += synapse0x12ef710();
   input += synapse0x12ef1a0();
   input += synapse0x12ef1e0();
   input += synapse0x12ef860();
   input += synapse0x12ef8a0();
   input += synapse0x12ef8e0();
   input += synapse0x12ef920();
   input += synapse0x12ef960();
   input += synapse0x12ef9a0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12ef010() {
   double input = input0x12ef010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12ef9e0() {
   double input = 0.851437;
   input += synapse0x12efd20();
   input += synapse0x12efd60();
   input += synapse0x12efda0();
   input += synapse0x12efde0();
   input += synapse0x12efe20();
   input += synapse0x12efe60();
   input += synapse0x12efea0();
   input += synapse0x12efee0();
   input += synapse0x12eff20();
   input += synapse0x12eff60();
   input += synapse0x12effa0();
   input += synapse0x12effe0();
   input += synapse0x12f0020();
   input += synapse0x12f0060();
   input += synapse0x12f00a0();
   input += synapse0x12f00e0();
   input += synapse0x12efb70();
   input += synapse0x12efbb0();
   input += synapse0x12f0230();
   input += synapse0x12f0270();
   input += synapse0x12f02b0();
   input += synapse0x12f02f0();
   input += synapse0x12f0330();
   input += synapse0x12f0370();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12ef9e0() {
   double input = input0x12ef9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x12f03b0() {
   double input = -1.83028;
   input += synapse0x12f06f0();
   input += synapse0x12f0730();
   input += synapse0x12f0770();
   input += synapse0x12f07b0();
   input += synapse0x12f07f0();
   input += synapse0x12f0830();
   input += synapse0x12f0870();
   input += synapse0x12f08b0();
   input += synapse0x12f08f0();
   input += synapse0x12f0930();
   input += synapse0x12f0970();
   input += synapse0x12f09b0();
   input += synapse0x12f09f0();
   input += synapse0x12f0a30();
   input += synapse0x12f0a70();
   input += synapse0x12f0ab0();
   input += synapse0x12f0540();
   input += synapse0x12f0580();
   input += synapse0x12f0c00();
   input += synapse0x12f0c40();
   input += synapse0x12f0c80();
   input += synapse0x12f0cc0();
   input += synapse0x12f0d00();
   input += synapse0x12f0d40();
   return input;
}

double NNfunction_sb_dRcR::neuron0x12f03b0() {
   double input = input0x12f03b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x13029f0() {
   double input = -0.818184;
   input += synapse0x1302c10();
   input += synapse0x1302c50();
   input += synapse0x1302c90();
   input += synapse0x1302cd0();
   input += synapse0x1302d10();
   input += synapse0x1302d50();
   input += synapse0x1302d90();
   input += synapse0x1302dd0();
   input += synapse0x1302e10();
   input += synapse0x1302e50();
   input += synapse0x1302e90();
   input += synapse0x1302ed0();
   input += synapse0x1302f10();
   input += synapse0x1302f50();
   input += synapse0x1302f90();
   input += synapse0x1302fd0();
   input += synapse0x12f0d80();
   input += synapse0x12f0dc0();
   input += synapse0x1303120();
   input += synapse0x1303160();
   input += synapse0x13031a0();
   input += synapse0x13031e0();
   input += synapse0x1303220();
   input += synapse0x1303260();
   return input;
}

double NNfunction_sb_dRcR::neuron0x13029f0() {
   double input = input0x13029f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x13032a0() {
   double input = 0.923193;
   input += synapse0x13035e0();
   input += synapse0x1303620();
   input += synapse0x1303660();
   input += synapse0x13036a0();
   input += synapse0x13036e0();
   input += synapse0x1303720();
   input += synapse0x1303760();
   input += synapse0x13037a0();
   input += synapse0x13037e0();
   input += synapse0x1303820();
   input += synapse0x1303860();
   input += synapse0x13038a0();
   input += synapse0x13038e0();
   input += synapse0x1303920();
   input += synapse0x1303960();
   input += synapse0x13039a0();
   input += synapse0x1303430();
   input += synapse0x1303470();
   input += synapse0x1303af0();
   input += synapse0x1303b30();
   input += synapse0x1303b70();
   input += synapse0x1303bb0();
   input += synapse0x1303bf0();
   input += synapse0x1303c30();
   return input;
}

double NNfunction_sb_dRcR::neuron0x13032a0() {
   double input = input0x13032a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1303c70() {
   double input = 3.59668;
   input += synapse0x1303fb0();
   input += synapse0x1303ff0();
   input += synapse0x1304030();
   input += synapse0x1304070();
   input += synapse0x13040b0();
   input += synapse0x13040f0();
   input += synapse0x1304130();
   input += synapse0x1304170();
   input += synapse0x13041b0();
   input += synapse0x13041f0();
   input += synapse0x1304230();
   input += synapse0x1304270();
   input += synapse0x13042b0();
   input += synapse0x13042f0();
   input += synapse0x1304330();
   input += synapse0x1304370();
   input += synapse0x1303e00();
   input += synapse0x1303e40();
   input += synapse0x13044c0();
   input += synapse0x1304500();
   input += synapse0x1304540();
   input += synapse0x1304580();
   input += synapse0x13045c0();
   input += synapse0x1304600();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1303c70() {
   double input = input0x1303c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1304640() {
   double input = -4.32771;
   input += synapse0x1304980();
   input += synapse0x13049c0();
   input += synapse0x1304a00();
   input += synapse0x1304a40();
   input += synapse0x1304a80();
   input += synapse0x1304ac0();
   input += synapse0x1304b00();
   input += synapse0x1304b40();
   input += synapse0x1304b80();
   input += synapse0x1304bc0();
   input += synapse0x1304c00();
   input += synapse0x1304c40();
   input += synapse0x1304c80();
   input += synapse0x1304cc0();
   input += synapse0x1304d00();
   input += synapse0x1304d40();
   input += synapse0x13047d0();
   input += synapse0x1304810();
   input += synapse0x1304e90();
   input += synapse0x1304ed0();
   input += synapse0x1304f10();
   input += synapse0x1304f50();
   input += synapse0x1304f90();
   input += synapse0x1304fd0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1304640() {
   double input = input0x1304640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x130b840() {
   double input = 1.23246;
   input += synapse0x12e1570();
   input += synapse0x12e15b0();
   input += synapse0x12e2a80();
   input += synapse0x12e2ac0();
   input += synapse0x12e3450();
   input += synapse0x12e3490();
   input += synapse0x12e4220();
   input += synapse0x12e4260();
   input += synapse0x12e4bf0();
   input += synapse0x12e4c30();
   input += synapse0x12e55c0();
   input += synapse0x12e5600();
   input += synapse0x12e60a0();
   input += synapse0x12e60e0();
   input += synapse0x12e6a70();
   input += synapse0x12e6ab0();
   input += synapse0x12e3b50();
   input += synapse0x12e3b90();
   input += synapse0x12e8620();
   input += synapse0x12e8660();
   input += synapse0x12e8ff0();
   input += synapse0x12e9030();
   input += synapse0x12e99c0();
   input += synapse0x12e9a00();
   input += synapse0x12ea390();
   input += synapse0x12ea3d0();
   input += synapse0x12de500();
   input += synapse0x12de540();
   input += synapse0x12ec480();
   input += synapse0x12ec4c0();
   input += synapse0x12ece50();
   input += synapse0x12ece90();
   input += synapse0x12ed820();
   input += synapse0x12ed860();
   input += synapse0x12ee1f0();
   input += synapse0x12ee230();
   input += synapse0x12eebc0();
   input += synapse0x12eec00();
   input += synapse0x12e7710();
   input += synapse0x12e7750();
   input += synapse0x12f0fc0();
   input += synapse0x12f1000();
   input += synapse0x12f1950();
   input += synapse0x12f1990();
   input += synapse0x12f2320();
   input += synapse0x12f2360();
   input += synapse0x12f2cf0();
   input += synapse0x12f2d30();
   input += synapse0x12f36c0();
   input += synapse0x12f3700();
   return input;
}

double NNfunction_sb_dRcR::neuron0x130b840() {
   double input = input0x130b840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x130bbe0() {
   double input = -1.32317;
   input += synapse0x12f5e00();
   input += synapse0x12f5e40();
   input += synapse0x12eb3c0();
   input += synapse0x12eb400();
   input += synapse0x12f89e0();
   input += synapse0x12f8a20();
   input += synapse0x12f93b0();
   input += synapse0x12f93f0();
   input += synapse0x12f9d80();
   input += synapse0x12f9dc0();
   input += synapse0x12fa750();
   input += synapse0x12fa790();
   input += synapse0x12fb120();
   input += synapse0x12fb160();
   input += synapse0x12fbaf0();
   input += synapse0x12fbb30();
   input += synapse0x12fc4c0();
   input += synapse0x12fc500();
   input += synapse0x12fce90();
   input += synapse0x12fced0();
   input += synapse0x12fda70();
   input += synapse0x12fdab0();
   input += synapse0x12fe440();
   input += synapse0x12fe480();
   input += synapse0x12ef2c0();
   input += synapse0x12ef300();
   input += synapse0x12efc90();
   input += synapse0x12efcd0();
   input += synapse0x12f0660();
   input += synapse0x12f06a0();
   input += synapse0x1302b80();
   input += synapse0x1302bc0();
   input += synapse0x1303550();
   input += synapse0x1303590();
   input += synapse0x1303f20();
   input += synapse0x1303f60();
   input += synapse0x13048f0();
   input += synapse0x1304930();
   input += synapse0x12e07e0();
   input += synapse0x12e0820();
   input += synapse0x12f4090();
   input += synapse0x12f40d0();
   input += synapse0x1305010();
   input += synapse0x1305050();
   input += synapse0x1305090();
   input += synapse0x13050d0();
   input += synapse0x130bf80();
   input += synapse0x130bfc0();
   input += synapse0x130c000();
   input += synapse0x130c040();
   return input;
}

double NNfunction_sb_dRcR::neuron0x130bbe0() {
   double input = input0x130bbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x130c080() {
   double input = 0.131813;
   input += synapse0x130c3c0();
   input += synapse0x130c400();
   input += synapse0x130c440();
   input += synapse0x130c480();
   input += synapse0x130c4c0();
   input += synapse0x130c500();
   input += synapse0x130c540();
   input += synapse0x130c580();
   input += synapse0x130c5c0();
   input += synapse0x130c600();
   input += synapse0x130c640();
   input += synapse0x130c680();
   input += synapse0x130c6c0();
   input += synapse0x130c700();
   input += synapse0x130c740();
   input += synapse0x130c780();
   input += synapse0x130c210();
   input += synapse0x130c250();
   input += synapse0x130c8d0();
   input += synapse0x130c910();
   input += synapse0x130c950();
   input += synapse0x130c990();
   input += synapse0x130c9d0();
   input += synapse0x130ca10();
   input += synapse0x130ca50();
   input += synapse0x130ca90();
   input += synapse0x130cad0();
   input += synapse0x130cb10();
   input += synapse0x130cb50();
   input += synapse0x130cb90();
   input += synapse0x130cbd0();
   input += synapse0x130cc10();
   input += synapse0x130c7c0();
   input += synapse0x130c800();
   input += synapse0x130c840();
   input += synapse0x130c880();
   input += synapse0x130ce60();
   input += synapse0x130cea0();
   input += synapse0x130cee0();
   input += synapse0x130cf20();
   input += synapse0x130cf60();
   input += synapse0x130cfa0();
   input += synapse0x130cfe0();
   input += synapse0x130d020();
   input += synapse0x130d060();
   input += synapse0x130d0a0();
   input += synapse0x130d0e0();
   input += synapse0x130d120();
   input += synapse0x130d160();
   input += synapse0x130d1a0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x130c080() {
   double input = input0x130c080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x130d1e0() {
   double input = 0.317106;
   input += synapse0x130d520();
   input += synapse0x130d560();
   input += synapse0x130d5a0();
   input += synapse0x130d5e0();
   input += synapse0x130d620();
   input += synapse0x130d660();
   input += synapse0x130d6a0();
   input += synapse0x130d6e0();
   input += synapse0x130d720();
   input += synapse0x130d760();
   input += synapse0x130d7a0();
   input += synapse0x130d7e0();
   input += synapse0x130d820();
   input += synapse0x130d860();
   input += synapse0x130d8a0();
   input += synapse0x130d8e0();
   input += synapse0x130d370();
   input += synapse0x130d3b0();
   input += synapse0x130da30();
   input += synapse0x130da70();
   input += synapse0x130dab0();
   input += synapse0x130daf0();
   input += synapse0x130db30();
   input += synapse0x130db70();
   input += synapse0x130dbb0();
   input += synapse0x130dbf0();
   input += synapse0x130dc30();
   input += synapse0x130dc70();
   input += synapse0x130dcb0();
   input += synapse0x130dcf0();
   input += synapse0x130dd30();
   input += synapse0x130dd70();
   input += synapse0x130d920();
   input += synapse0x130d960();
   input += synapse0x130d9a0();
   input += synapse0x130d9e0();
   input += synapse0x130dfc0();
   input += synapse0x130e000();
   input += synapse0x130e040();
   input += synapse0x130e080();
   input += synapse0x130e0c0();
   input += synapse0x130e100();
   input += synapse0x130e140();
   input += synapse0x130e180();
   input += synapse0x130e1c0();
   input += synapse0x130e200();
   input += synapse0x130e240();
   input += synapse0x130e280();
   input += synapse0x130e2c0();
   input += synapse0x130e300();
   return input;
}

double NNfunction_sb_dRcR::neuron0x130d1e0() {
   double input = input0x130d1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x130e340() {
   double input = 0.197703;
   input += synapse0x130e680();
   input += synapse0x130e6c0();
   input += synapse0x130e700();
   input += synapse0x130e740();
   input += synapse0x130e780();
   input += synapse0x130e7c0();
   input += synapse0x130e800();
   input += synapse0x130e840();
   input += synapse0x130e880();
   input += synapse0x130e8c0();
   input += synapse0x130e900();
   input += synapse0x130e940();
   input += synapse0x130e980();
   input += synapse0x130e9c0();
   input += synapse0x130ea00();
   input += synapse0x130ea40();
   input += synapse0x130e4d0();
   input += synapse0x130e510();
   input += synapse0x130eb90();
   input += synapse0x130ebd0();
   input += synapse0x130ec10();
   input += synapse0x130ec50();
   input += synapse0x130ec90();
   input += synapse0x130ecd0();
   input += synapse0x130ed10();
   input += synapse0x130ed50();
   input += synapse0x130ed90();
   input += synapse0x130edd0();
   input += synapse0x130ee10();
   input += synapse0x130ee50();
   input += synapse0x130ee90();
   input += synapse0x130eed0();
   input += synapse0x130ea80();
   input += synapse0x130eac0();
   input += synapse0x130eb00();
   input += synapse0x130eb40();
   input += synapse0x130f120();
   input += synapse0x130f160();
   input += synapse0x130f1a0();
   input += synapse0x130f1e0();
   input += synapse0x130f220();
   input += synapse0x130f260();
   input += synapse0x130f2a0();
   input += synapse0x130f2e0();
   input += synapse0x130f320();
   input += synapse0x130f360();
   input += synapse0x130f3a0();
   input += synapse0x130f3e0();
   input += synapse0x130f420();
   input += synapse0x130f460();
   return input;
}

double NNfunction_sb_dRcR::neuron0x130e340() {
   double input = input0x130e340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x130f4a0() {
   double input = 16.6677;
   input += synapse0x12e0580();
   input += synapse0x130f6c0();
   input += synapse0x130f700();
   input += synapse0x130f740();
   input += synapse0x130f780();
   return input;
}

double NNfunction_sb_dRcR::neuron0x130f4a0() {
   double input = input0x130f4a0();
   return (input * 1)+0;
}

double NNfunction_sb_dRcR::synapse0x109b3d0() {
   return (neuron0x12db560()*-0.0620904);
}

double NNfunction_sb_dRcR::synapse0x12db420() {
   return (neuron0x12db8a0()*-0.0391563);
}

double NNfunction_sb_dRcR::synapse0x12db460() {
   return (neuron0x12dbbe0()*0.176491);
}

double NNfunction_sb_dRcR::synapse0x12e0870() {
   return (neuron0x12dbf20()*-1.0763);
}

double NNfunction_sb_dRcR::synapse0x12e08b0() {
   return (neuron0x12dc260()*-0.214493);
}

double NNfunction_sb_dRcR::synapse0x12e08f0() {
   return (neuron0x12dc5a0()*0.599505);
}

double NNfunction_sb_dRcR::synapse0x12e0930() {
   return (neuron0x12dc8e0()*-0.195915);
}

double NNfunction_sb_dRcR::synapse0x12e0970() {
   return (neuron0x12dcc20()*-0.324953);
}

double NNfunction_sb_dRcR::synapse0x12e09b0() {
   return (neuron0x12dcf60()*-0.139255);
}

double NNfunction_sb_dRcR::synapse0x12e09f0() {
   return (neuron0x12dd2a0()*0.156803);
}

double NNfunction_sb_dRcR::synapse0x12e0a30() {
   return (neuron0x12dd5e0()*-0.175065);
}

double NNfunction_sb_dRcR::synapse0x12e0a70() {
   return (neuron0x12dd920()*0.340759);
}

double NNfunction_sb_dRcR::synapse0x12e0ab0() {
   return (neuron0x12ddc60()*0.113852);
}

double NNfunction_sb_dRcR::synapse0x12e0af0() {
   return (neuron0x12ddfa0()*0.182933);
}

double NNfunction_sb_dRcR::synapse0x12e0b30() {
   return (neuron0x12de2e0()*0.729127);
}

double NNfunction_sb_dRcR::synapse0x12e0b70() {
   return (neuron0x12de620()*-0.248653);
}

double NNfunction_sb_dRcR::synapse0x12db390() {
   return (neuron0x12de960()*0.625418);
}

double NNfunction_sb_dRcR::synapse0x12db3d0() {
   return (neuron0x12deec0()*-0.301056);
}

double NNfunction_sb_dRcR::synapse0x108cc70() {
   return (neuron0x12df0e0()*0.192304);
}

double NNfunction_sb_dRcR::synapse0x108ccb0() {
   return (neuron0x12df420()*0.05403);
}

double NNfunction_sb_dRcR::synapse0x12e0dd0() {
   return (neuron0x12df760()*-0.0507761);
}

double NNfunction_sb_dRcR::synapse0x12e0e10() {
   return (neuron0x12dfaa0()*0.29407);
}

double NNfunction_sb_dRcR::synapse0x12e0e50() {
   return (neuron0x12dfde0()*-0.194765);
}

double NNfunction_sb_dRcR::synapse0x12e0e90() {
   return (neuron0x12e0120()*0.0927378);
}

double NNfunction_sb_dRcR::synapse0x12e1210() {
   return (neuron0x12db560()*0.0646778);
}

double NNfunction_sb_dRcR::synapse0x12e1250() {
   return (neuron0x12db8a0()*0.0892706);
}

double NNfunction_sb_dRcR::synapse0x12e1290() {
   return (neuron0x12dbbe0()*0.0544093);
}

double NNfunction_sb_dRcR::synapse0x12e12d0() {
   return (neuron0x12dbf20()*4.30054);
}

double NNfunction_sb_dRcR::synapse0x12e1310() {
   return (neuron0x12dc260()*0.0288456);
}

double NNfunction_sb_dRcR::synapse0x12e1350() {
   return (neuron0x12dc5a0()*-0.0205045);
}

double NNfunction_sb_dRcR::synapse0x12e1390() {
   return (neuron0x12dc8e0()*0.00939319);
}

double NNfunction_sb_dRcR::synapse0x12e13d0() {
   return (neuron0x12dcc20()*0.0655446);
}

double NNfunction_sb_dRcR::synapse0x12e1410() {
   return (neuron0x12dcf60()*0.204335);
}

double NNfunction_sb_dRcR::synapse0x12e0cc0() {
   return (neuron0x12dd2a0()*0.0428326);
}

double NNfunction_sb_dRcR::synapse0x12e0d00() {
   return (neuron0x12dd5e0()*0.00943337);
}

double NNfunction_sb_dRcR::synapse0x12e0d40() {
   return (neuron0x12dd920()*0.0162311);
}

double NNfunction_sb_dRcR::synapse0x12e0d80() {
   return (neuron0x12ddc60()*0.175541);
}

double NNfunction_sb_dRcR::synapse0x12e1660() {
   return (neuron0x12ddfa0()*0.0690054);
}

double NNfunction_sb_dRcR::synapse0x12e16a0() {
   return (neuron0x12de2e0()*0.0226003);
}

double NNfunction_sb_dRcR::synapse0x12e16e0() {
   return (neuron0x12de620()*-1.04365);
}

double NNfunction_sb_dRcR::synapse0x12e1060() {
   return (neuron0x12de960()*-0.0927864);
}

double NNfunction_sb_dRcR::synapse0x12e10a0() {
   return (neuron0x12deec0()*-1.32145);
}

double NNfunction_sb_dRcR::synapse0x12e1830() {
   return (neuron0x12df0e0()*0.120505);
}

double NNfunction_sb_dRcR::synapse0x12e1870() {
   return (neuron0x12df420()*-0.110655);
}

double NNfunction_sb_dRcR::synapse0x12e18b0() {
   return (neuron0x12df760()*0.0542673);
}

double NNfunction_sb_dRcR::synapse0x12e18f0() {
   return (neuron0x12dfaa0()*-0.0432136);
}

double NNfunction_sb_dRcR::synapse0x12e1930() {
   return (neuron0x12dfde0()*-0.00854526);
}

double NNfunction_sb_dRcR::synapse0x12e1970() {
   return (neuron0x12e0120()*-0.0479648);
}

double NNfunction_sb_dRcR::synapse0x12e1cf0() {
   return (neuron0x12db560()*0.0154789);
}

double NNfunction_sb_dRcR::synapse0x12e1d30() {
   return (neuron0x12db8a0()*-0.0204378);
}

double NNfunction_sb_dRcR::synapse0x12e1d70() {
   return (neuron0x12dbbe0()*0.0056168);
}

double NNfunction_sb_dRcR::synapse0x12e1db0() {
   return (neuron0x12dbf20()*0.0603652);
}

double NNfunction_sb_dRcR::synapse0x12e1df0() {
   return (neuron0x12dc260()*0.013856);
}

double NNfunction_sb_dRcR::synapse0x12e1e30() {
   return (neuron0x12dc5a0()*0.0250567);
}

double NNfunction_sb_dRcR::synapse0x12e1e70() {
   return (neuron0x12dc8e0()*-0.00342057);
}

double NNfunction_sb_dRcR::synapse0x12e1eb0() {
   return (neuron0x12dcc20()*0.0217738);
}

double NNfunction_sb_dRcR::synapse0x12e1ef0() {
   return (neuron0x12dcf60()*-0.0155652);
}

double NNfunction_sb_dRcR::synapse0x12e1f30() {
   return (neuron0x12dd2a0()*-0.00249248);
}

double NNfunction_sb_dRcR::synapse0x12e1f70() {
   return (neuron0x12dd5e0()*-0.0155237);
}

double NNfunction_sb_dRcR::synapse0x12e1fb0() {
   return (neuron0x12dd920()*-0.0359463);
}

double NNfunction_sb_dRcR::synapse0x12e1ff0() {
   return (neuron0x12ddc60()*-0.0163409);
}

double NNfunction_sb_dRcR::synapse0x12e2030() {
   return (neuron0x12ddfa0()*-0.012776);
}

double NNfunction_sb_dRcR::synapse0x12e2070() {
   return (neuron0x12de2e0()*0.0106887);
}

double NNfunction_sb_dRcR::synapse0x12e20b0() {
   return (neuron0x12de620()*-2.661);
}

double NNfunction_sb_dRcR::synapse0x12e1b40() {
   return (neuron0x12de960()*-0.0171137);
}

double NNfunction_sb_dRcR::synapse0x12e1b80() {
   return (neuron0x12deec0()*0.164308);
}

double NNfunction_sb_dRcR::synapse0x109aac0() {
   return (neuron0x12df0e0()*-0.00459461);
}

double NNfunction_sb_dRcR::synapse0x109ab00() {
   return (neuron0x12df420()*0.0108577);
}

double NNfunction_sb_dRcR::synapse0x12ca5f0() {
   return (neuron0x12df760()*0.00699618);
}

double NNfunction_sb_dRcR::synapse0x12ca630() {
   return (neuron0x12dfaa0()*-0.00100473);
}

double NNfunction_sb_dRcR::synapse0x12ca670() {
   return (neuron0x12dfde0()*-0.00226618);
}

double NNfunction_sb_dRcR::synapse0x12db4a0() {
   return (neuron0x12e0120()*0.0114509);
}

double NNfunction_sb_dRcR::synapse0x12e1600() {
   return (neuron0x12db560()*-0.00953317);
}

double NNfunction_sb_dRcR::synapse0x12db4e0() {
   return (neuron0x12db8a0()*0.0094211);
}

double NNfunction_sb_dRcR::synapse0x12db520() {
   return (neuron0x12dbbe0()*-0.00338889);
}

double NNfunction_sb_dRcR::synapse0x12e2200() {
   return (neuron0x12dbf20()*-0.0396374);
}

double NNfunction_sb_dRcR::synapse0x12e2240() {
   return (neuron0x12dc260()*0.005927);
}

double NNfunction_sb_dRcR::synapse0x12e2280() {
   return (neuron0x12dc5a0()*0.00626564);
}

double NNfunction_sb_dRcR::synapse0x12e22c0() {
   return (neuron0x12dc8e0()*0.00731642);
}

double NNfunction_sb_dRcR::synapse0x12e2300() {
   return (neuron0x12dcc20()*0.013727);
}

double NNfunction_sb_dRcR::synapse0x12e2340() {
   return (neuron0x12dcf60()*-0.0202545);
}

double NNfunction_sb_dRcR::synapse0x12e2380() {
   return (neuron0x12dd2a0()*-0.0123524);
}

double NNfunction_sb_dRcR::synapse0x12e23c0() {
   return (neuron0x12dd5e0()*-0.0140564);
}

double NNfunction_sb_dRcR::synapse0x12e2400() {
   return (neuron0x12dd920()*0.00750054);
}

double NNfunction_sb_dRcR::synapse0x12e2440() {
   return (neuron0x12ddc60()*0.00768014);
}

double NNfunction_sb_dRcR::synapse0x12e2480() {
   return (neuron0x12ddfa0()*0.0223821);
}

double NNfunction_sb_dRcR::synapse0x12e24c0() {
   return (neuron0x12de2e0()*0.00873605);
}

double NNfunction_sb_dRcR::synapse0x12e2500() {
   return (neuron0x12de620()*-0.113254);
}

double NNfunction_sb_dRcR::synapse0x12e1450() {
   return (neuron0x12de960()*0.0102682);
}

double NNfunction_sb_dRcR::synapse0x12e1490() {
   return (neuron0x12deec0()*2.57749);
}

double NNfunction_sb_dRcR::synapse0x12e2650() {
   return (neuron0x12df0e0()*-0.00224925);
}

double NNfunction_sb_dRcR::synapse0x12e2690() {
   return (neuron0x12df420()*0.00521853);
}

double NNfunction_sb_dRcR::synapse0x12e26d0() {
   return (neuron0x12df760()*-0.00965138);
}

double NNfunction_sb_dRcR::synapse0x12e2710() {
   return (neuron0x12dfaa0()*0.000540559);
}

double NNfunction_sb_dRcR::synapse0x12e2750() {
   return (neuron0x12dfde0()*-0.00150854);
}

double NNfunction_sb_dRcR::synapse0x12e2790() {
   return (neuron0x12e0120()*-0.0159936);
}

double NNfunction_sb_dRcR::synapse0x12e2b10() {
   return (neuron0x12db560()*0.121332);
}

double NNfunction_sb_dRcR::synapse0x12e2b50() {
   return (neuron0x12db8a0()*-0.0763849);
}

double NNfunction_sb_dRcR::synapse0x12e2b90() {
   return (neuron0x12dbbe0()*0.143873);
}

double NNfunction_sb_dRcR::synapse0x12e2bd0() {
   return (neuron0x12dbf20()*4.84769);
}

double NNfunction_sb_dRcR::synapse0x12e2c10() {
   return (neuron0x12dc260()*-0.0601415);
}

double NNfunction_sb_dRcR::synapse0x12e2c50() {
   return (neuron0x12dc5a0()*0.131939);
}

double NNfunction_sb_dRcR::synapse0x12e2c90() {
   return (neuron0x12dc8e0()*0.174517);
}

double NNfunction_sb_dRcR::synapse0x12e2cd0() {
   return (neuron0x12dcc20()*0.56161);
}

double NNfunction_sb_dRcR::synapse0x12e2d10() {
   return (neuron0x12dcf60()*-0.298224);
}

double NNfunction_sb_dRcR::synapse0x12e2d50() {
   return (neuron0x12dd2a0()*0.0839923);
}

double NNfunction_sb_dRcR::synapse0x12e2d90() {
   return (neuron0x12dd5e0()*0.474605);
}

double NNfunction_sb_dRcR::synapse0x12e2dd0() {
   return (neuron0x12dd920()*0.175241);
}

double NNfunction_sb_dRcR::synapse0x12e2e10() {
   return (neuron0x12ddc60()*0.196156);
}

double NNfunction_sb_dRcR::synapse0x12e2e50() {
   return (neuron0x12ddfa0()*-0.259633);
}

double NNfunction_sb_dRcR::synapse0x12e2e90() {
   return (neuron0x12de2e0()*-0.279216);
}

double NNfunction_sb_dRcR::synapse0x12e2ed0() {
   return (neuron0x12de620()*0.0190992);
}

double NNfunction_sb_dRcR::synapse0x12e2960() {
   return (neuron0x12de960()*-0.14639);
}

double NNfunction_sb_dRcR::synapse0x12e29a0() {
   return (neuron0x12deec0()*-0.0617242);
}

double NNfunction_sb_dRcR::synapse0x12e3020() {
   return (neuron0x12df0e0()*0.0699447);
}

double NNfunction_sb_dRcR::synapse0x12e3060() {
   return (neuron0x12df420()*-0.339157);
}

double NNfunction_sb_dRcR::synapse0x12e30a0() {
   return (neuron0x12df760()*-0.130166);
}

double NNfunction_sb_dRcR::synapse0x12e30e0() {
   return (neuron0x12dfaa0()*0.15121);
}

double NNfunction_sb_dRcR::synapse0x12e3120() {
   return (neuron0x12dfde0()*0.399145);
}

double NNfunction_sb_dRcR::synapse0x12e3160() {
   return (neuron0x12e0120()*1.05088);
}

double NNfunction_sb_dRcR::synapse0x12e34e0() {
   return (neuron0x12db560()*-0.00448105);
}

double NNfunction_sb_dRcR::synapse0x12e3520() {
   return (neuron0x12db8a0()*-0.00920665);
}

double NNfunction_sb_dRcR::synapse0x12e3560() {
   return (neuron0x12dbbe0()*-0.00233761);
}

double NNfunction_sb_dRcR::synapse0x12e35a0() {
   return (neuron0x12dbf20()*2.52009);
}

double NNfunction_sb_dRcR::synapse0x12e35e0() {
   return (neuron0x12dc260()*-0.00671691);
}

double NNfunction_sb_dRcR::synapse0x12e3620() {
   return (neuron0x12dc5a0()*0.0109971);
}

double NNfunction_sb_dRcR::synapse0x12e3660() {
   return (neuron0x12dc8e0()*0.00986877);
}

double NNfunction_sb_dRcR::synapse0x12e36a0() {
   return (neuron0x12dcc20()*0.00333293);
}

double NNfunction_sb_dRcR::synapse0x12e36e0() {
   return (neuron0x12dcf60()*0.000801343);
}

double NNfunction_sb_dRcR::synapse0x109ae30() {
   return (neuron0x12dd2a0()*-0.000657473);
}

double NNfunction_sb_dRcR::synapse0x109ae70() {
   return (neuron0x12dd5e0()*0.00138992);
}

double NNfunction_sb_dRcR::synapse0x109aeb0() {
   return (neuron0x12dd920()*-0.0143808);
}

double NNfunction_sb_dRcR::synapse0x109aef0() {
   return (neuron0x12ddc60()*-0.0452694);
}

double NNfunction_sb_dRcR::synapse0x109af30() {
   return (neuron0x12ddfa0()*0.00940071);
}

double NNfunction_sb_dRcR::synapse0x109af70() {
   return (neuron0x12de2e0()*-0.00664268);
}

double NNfunction_sb_dRcR::synapse0x109afb0() {
   return (neuron0x12de620()*0.115246);
}

double NNfunction_sb_dRcR::synapse0x12e3330() {
   return (neuron0x12de960()*0.00956922);
}

double NNfunction_sb_dRcR::synapse0x12e3370() {
   return (neuron0x12deec0()*0.133259);
}

double NNfunction_sb_dRcR::synapse0x109b100() {
   return (neuron0x12df0e0()*-0.00219911);
}

double NNfunction_sb_dRcR::synapse0x109b140() {
   return (neuron0x12df420()*0.00990708);
}

double NNfunction_sb_dRcR::synapse0x109b180() {
   return (neuron0x12df760()*-0.00144226);
}

double NNfunction_sb_dRcR::synapse0x109b1c0() {
   return (neuron0x12dfaa0()*0.00219438);
}

double NNfunction_sb_dRcR::synapse0x109b200() {
   return (neuron0x12dfde0()*0.00203938);
}

double NNfunction_sb_dRcR::synapse0x12e3f30() {
   return (neuron0x12e0120()*0.0127023);
}

double NNfunction_sb_dRcR::synapse0x12e42b0() {
   return (neuron0x12db560()*-0.559121);
}

double NNfunction_sb_dRcR::synapse0x12e42f0() {
   return (neuron0x12db8a0()*0.876796);
}

double NNfunction_sb_dRcR::synapse0x12e4330() {
   return (neuron0x12dbbe0()*0.0347976);
}

double NNfunction_sb_dRcR::synapse0x12e4370() {
   return (neuron0x12dbf20()*0.0110565);
}

double NNfunction_sb_dRcR::synapse0x12e43b0() {
   return (neuron0x12dc260()*-0.245213);
}

double NNfunction_sb_dRcR::synapse0x12e43f0() {
   return (neuron0x12dc5a0()*-0.283036);
}

double NNfunction_sb_dRcR::synapse0x12e4430() {
   return (neuron0x12dc8e0()*-0.549974);
}

double NNfunction_sb_dRcR::synapse0x12e4470() {
   return (neuron0x12dcc20()*0.0302881);
}

double NNfunction_sb_dRcR::synapse0x12e44b0() {
   return (neuron0x12dcf60()*1.36962);
}

double NNfunction_sb_dRcR::synapse0x12e44f0() {
   return (neuron0x12dd2a0()*1.03766);
}

double NNfunction_sb_dRcR::synapse0x12e4530() {
   return (neuron0x12dd5e0()*0.451529);
}

double NNfunction_sb_dRcR::synapse0x12e4570() {
   return (neuron0x12dd920()*-0.559854);
}

double NNfunction_sb_dRcR::synapse0x12e45b0() {
   return (neuron0x12ddc60()*-0.26548);
}

double NNfunction_sb_dRcR::synapse0x12e45f0() {
   return (neuron0x12ddfa0()*-0.20809);
}

double NNfunction_sb_dRcR::synapse0x12e4630() {
   return (neuron0x12de2e0()*-0.781972);
}

double NNfunction_sb_dRcR::synapse0x12e4670() {
   return (neuron0x12de620()*-1.09386);
}

double NNfunction_sb_dRcR::synapse0x12e4100() {
   return (neuron0x12de960()*0.042638);
}

double NNfunction_sb_dRcR::synapse0x12e4140() {
   return (neuron0x12deec0()*-0.619423);
}

double NNfunction_sb_dRcR::synapse0x12e47c0() {
   return (neuron0x12df0e0()*0.410298);
}

double NNfunction_sb_dRcR::synapse0x12e4800() {
   return (neuron0x12df420()*-0.00120429);
}

double NNfunction_sb_dRcR::synapse0x12e4840() {
   return (neuron0x12df760()*0.142648);
}

double NNfunction_sb_dRcR::synapse0x12e4880() {
   return (neuron0x12dfaa0()*-0.558457);
}

double NNfunction_sb_dRcR::synapse0x12e48c0() {
   return (neuron0x12dfde0()*1.53774);
}

double NNfunction_sb_dRcR::synapse0x12e4900() {
   return (neuron0x12e0120()*-1.35347);
}

double NNfunction_sb_dRcR::synapse0x12e4c80() {
   return (neuron0x12db560()*0.111452);
}

double NNfunction_sb_dRcR::synapse0x12e4cc0() {
   return (neuron0x12db8a0()*0.0838402);
}

double NNfunction_sb_dRcR::synapse0x12e4d00() {
   return (neuron0x12dbbe0()*0.00289862);
}

double NNfunction_sb_dRcR::synapse0x12e4d40() {
   return (neuron0x12dbf20()*-0.602858);
}

double NNfunction_sb_dRcR::synapse0x12e4d80() {
   return (neuron0x12dc260()*0.0010853);
}

double NNfunction_sb_dRcR::synapse0x12e4dc0() {
   return (neuron0x12dc5a0()*0.0992976);
}

double NNfunction_sb_dRcR::synapse0x12e4e00() {
   return (neuron0x12dc8e0()*0.145931);
}

double NNfunction_sb_dRcR::synapse0x12e4e40() {
   return (neuron0x12dcc20()*0.0748023);
}

double NNfunction_sb_dRcR::synapse0x12e4e80() {
   return (neuron0x12dcf60()*-0.0235682);
}

double NNfunction_sb_dRcR::synapse0x12e4ec0() {
   return (neuron0x12dd2a0()*0.0462693);
}

double NNfunction_sb_dRcR::synapse0x12e4f00() {
   return (neuron0x12dd5e0()*-0.0809728);
}

double NNfunction_sb_dRcR::synapse0x12e4f40() {
   return (neuron0x12dd920()*0.0557194);
}

double NNfunction_sb_dRcR::synapse0x12e4f80() {
   return (neuron0x12ddc60()*-0.0894539);
}

double NNfunction_sb_dRcR::synapse0x12e4fc0() {
   return (neuron0x12ddfa0()*-0.00353464);
}

double NNfunction_sb_dRcR::synapse0x12e5000() {
   return (neuron0x12de2e0()*0.0134306);
}

double NNfunction_sb_dRcR::synapse0x12e5040() {
   return (neuron0x12de620()*2.22163);
}

double NNfunction_sb_dRcR::synapse0x12e4ad0() {
   return (neuron0x12de960()*-0.0682489);
}

double NNfunction_sb_dRcR::synapse0x12e4b10() {
   return (neuron0x12deec0()*1.3568);
}

double NNfunction_sb_dRcR::synapse0x12e5190() {
   return (neuron0x12df0e0()*-0.225621);
}

double NNfunction_sb_dRcR::synapse0x12e51d0() {
   return (neuron0x12df420()*-0.257593);
}

double NNfunction_sb_dRcR::synapse0x12e5210() {
   return (neuron0x12df760()*0.0541188);
}

double NNfunction_sb_dRcR::synapse0x12e5250() {
   return (neuron0x12dfaa0()*0.0524041);
}

double NNfunction_sb_dRcR::synapse0x12e5290() {
   return (neuron0x12dfde0()*0.067429);
}

double NNfunction_sb_dRcR::synapse0x12e52d0() {
   return (neuron0x12e0120()*-0.170281);
}

double NNfunction_sb_dRcR::synapse0x12dedb0() {
   return (neuron0x12db560()*0.119082);
}

double NNfunction_sb_dRcR::synapse0x12dedf0() {
   return (neuron0x12db8a0()*-0.113882);
}

double NNfunction_sb_dRcR::synapse0x12dee30() {
   return (neuron0x12dbbe0()*1.05306);
}

double NNfunction_sb_dRcR::synapse0x12dee70() {
   return (neuron0x12dbf20()*-0.773692);
}

double NNfunction_sb_dRcR::synapse0x12e5860() {
   return (neuron0x12dc260()*0.479851);
}

double NNfunction_sb_dRcR::synapse0x12e58a0() {
   return (neuron0x12dc5a0()*0.362585);
}

double NNfunction_sb_dRcR::synapse0x12e58e0() {
   return (neuron0x12dc8e0()*0.449112);
}

double NNfunction_sb_dRcR::synapse0x12e5920() {
   return (neuron0x12dcc20()*0.157051);
}

double NNfunction_sb_dRcR::synapse0x12e5960() {
   return (neuron0x12dcf60()*0.330231);
}

double NNfunction_sb_dRcR::synapse0x12e59a0() {
   return (neuron0x12dd2a0()*-0.478017);
}

double NNfunction_sb_dRcR::synapse0x12e59e0() {
   return (neuron0x12dd5e0()*-0.21954);
}

double NNfunction_sb_dRcR::synapse0x12e5a20() {
   return (neuron0x12dd920()*-1.67411);
}

double NNfunction_sb_dRcR::synapse0x12e5a60() {
   return (neuron0x12ddc60()*0.28189);
}

double NNfunction_sb_dRcR::synapse0x12e5aa0() {
   return (neuron0x12ddfa0()*1.46448);
}

double NNfunction_sb_dRcR::synapse0x12e5ae0() {
   return (neuron0x12de2e0()*0.787364);
}

double NNfunction_sb_dRcR::synapse0x12e5b20() {
   return (neuron0x12de620()*1.75719);
}

double NNfunction_sb_dRcR::synapse0x12e54a0() {
   return (neuron0x12de960()*-0.923611);
}

double NNfunction_sb_dRcR::synapse0x12e54e0() {
   return (neuron0x12deec0()*0.157799);
}

double NNfunction_sb_dRcR::synapse0x12e5c70() {
   return (neuron0x12df0e0()*0.130173);
}

double NNfunction_sb_dRcR::synapse0x12e5cb0() {
   return (neuron0x12df420()*-1.02181);
}

double NNfunction_sb_dRcR::synapse0x12e5cf0() {
   return (neuron0x12df760()*0.102914);
}

double NNfunction_sb_dRcR::synapse0x12e5d30() {
   return (neuron0x12dfaa0()*-0.396711);
}

double NNfunction_sb_dRcR::synapse0x12e5d70() {
   return (neuron0x12dfde0()*-0.766716);
}

double NNfunction_sb_dRcR::synapse0x12e5db0() {
   return (neuron0x12e0120()*0.874537);
}

double NNfunction_sb_dRcR::synapse0x12e6130() {
   return (neuron0x12db560()*-0.354356);
}

double NNfunction_sb_dRcR::synapse0x12e6170() {
   return (neuron0x12db8a0()*1.24873);
}

double NNfunction_sb_dRcR::synapse0x12e61b0() {
   return (neuron0x12dbbe0()*-0.536046);
}

double NNfunction_sb_dRcR::synapse0x12e61f0() {
   return (neuron0x12dbf20()*-1.29695);
}

double NNfunction_sb_dRcR::synapse0x12e6230() {
   return (neuron0x12dc260()*0.593147);
}

double NNfunction_sb_dRcR::synapse0x12e6270() {
   return (neuron0x12dc5a0()*0.220753);
}

double NNfunction_sb_dRcR::synapse0x12e62b0() {
   return (neuron0x12dc8e0()*-0.272002);
}

double NNfunction_sb_dRcR::synapse0x12e62f0() {
   return (neuron0x12dcc20()*0.22691);
}

double NNfunction_sb_dRcR::synapse0x12e6330() {
   return (neuron0x12dcf60()*-0.0942587);
}

double NNfunction_sb_dRcR::synapse0x12e6370() {
   return (neuron0x12dd2a0()*-0.163483);
}

double NNfunction_sb_dRcR::synapse0x12e63b0() {
   return (neuron0x12dd5e0()*-0.646992);
}

double NNfunction_sb_dRcR::synapse0x12e63f0() {
   return (neuron0x12dd920()*0.0448515);
}

double NNfunction_sb_dRcR::synapse0x12e6430() {
   return (neuron0x12ddc60()*0.4326);
}

double NNfunction_sb_dRcR::synapse0x12e6470() {
   return (neuron0x12ddfa0()*0.202866);
}

double NNfunction_sb_dRcR::synapse0x12e64b0() {
   return (neuron0x12de2e0()*-0.0974242);
}

double NNfunction_sb_dRcR::synapse0x12e64f0() {
   return (neuron0x12de620()*-0.565229);
}

double NNfunction_sb_dRcR::synapse0x12e5f80() {
   return (neuron0x12de960()*-0.0593654);
}

double NNfunction_sb_dRcR::synapse0x12e5fc0() {
   return (neuron0x12deec0()*-0.0373578);
}

double NNfunction_sb_dRcR::synapse0x12e6640() {
   return (neuron0x12df0e0()*0.336419);
}

double NNfunction_sb_dRcR::synapse0x12e6680() {
   return (neuron0x12df420()*-0.676689);
}

double NNfunction_sb_dRcR::synapse0x12e66c0() {
   return (neuron0x12df760()*0.547533);
}

double NNfunction_sb_dRcR::synapse0x12e6700() {
   return (neuron0x12dfaa0()*-0.174446);
}

double NNfunction_sb_dRcR::synapse0x12e6740() {
   return (neuron0x12dfde0()*0.256983);
}

double NNfunction_sb_dRcR::synapse0x12e6780() {
   return (neuron0x12e0120()*0.261575);
}

double NNfunction_sb_dRcR::synapse0x12e6b00() {
   return (neuron0x12db560()*-0.241154);
}

double NNfunction_sb_dRcR::synapse0x12e6b40() {
   return (neuron0x12db8a0()*-0.0486886);
}

double NNfunction_sb_dRcR::synapse0x12e6b80() {
   return (neuron0x12dbbe0()*-0.401228);
}

double NNfunction_sb_dRcR::synapse0x12e6bc0() {
   return (neuron0x12dbf20()*0.673787);
}

double NNfunction_sb_dRcR::synapse0x12e6c00() {
   return (neuron0x12dc260()*0.287103);
}

double NNfunction_sb_dRcR::synapse0x12e6c40() {
   return (neuron0x12dc5a0()*0.283253);
}

double NNfunction_sb_dRcR::synapse0x12e6c80() {
   return (neuron0x12dc8e0()*0.143961);
}

double NNfunction_sb_dRcR::synapse0x12e6cc0() {
   return (neuron0x12dcc20()*0.41168);
}

double NNfunction_sb_dRcR::synapse0x12e6d00() {
   return (neuron0x12dcf60()*0.120666);
}

double NNfunction_sb_dRcR::synapse0x12e6d40() {
   return (neuron0x12dd2a0()*0.493889);
}

double NNfunction_sb_dRcR::synapse0x12e6d80() {
   return (neuron0x12dd5e0()*0.128799);
}

double NNfunction_sb_dRcR::synapse0x12e6dc0() {
   return (neuron0x12dd920()*-0.127272);
}

double NNfunction_sb_dRcR::synapse0x12e6e00() {
   return (neuron0x12ddc60()*0.126895);
}

double NNfunction_sb_dRcR::synapse0x12e6e40() {
   return (neuron0x12ddfa0()*-0.151978);
}

double NNfunction_sb_dRcR::synapse0x12e6e80() {
   return (neuron0x12de2e0()*0.11492);
}

double NNfunction_sb_dRcR::synapse0x12e6ec0() {
   return (neuron0x12de620()*0.204767);
}

double NNfunction_sb_dRcR::synapse0x12e6950() {
   return (neuron0x12de960()*-0.342821);
}

double NNfunction_sb_dRcR::synapse0x12e6990() {
   return (neuron0x12deec0()*-2.34361);
}

double NNfunction_sb_dRcR::synapse0x12e3720() {
   return (neuron0x12df0e0()*0.0122992);
}

double NNfunction_sb_dRcR::synapse0x12e3760() {
   return (neuron0x12df420()*0.657207);
}

double NNfunction_sb_dRcR::synapse0x12e37a0() {
   return (neuron0x12df760()*0.0164568);
}

double NNfunction_sb_dRcR::synapse0x12e37e0() {
   return (neuron0x12dfaa0()*0.261643);
}

double NNfunction_sb_dRcR::synapse0x12e3820() {
   return (neuron0x12dfde0()*0.10213);
}

double NNfunction_sb_dRcR::synapse0x12e3860() {
   return (neuron0x12e0120()*-0.0394716);
}

double NNfunction_sb_dRcR::synapse0x12e3be0() {
   return (neuron0x12db560()*1.22909);
}

double NNfunction_sb_dRcR::synapse0x12e3c20() {
   return (neuron0x12db8a0()*-0.550163);
}

double NNfunction_sb_dRcR::synapse0x12e3c60() {
   return (neuron0x12dbbe0()*-0.721571);
}

double NNfunction_sb_dRcR::synapse0x12e3ca0() {
   return (neuron0x12dbf20()*-0.556968);
}

double NNfunction_sb_dRcR::synapse0x12e3ce0() {
   return (neuron0x12dc260()*0.567);
}

double NNfunction_sb_dRcR::synapse0x12e3d20() {
   return (neuron0x12dc5a0()*0.217251);
}

double NNfunction_sb_dRcR::synapse0x12e3d60() {
   return (neuron0x12dc8e0()*-1.15654);
}

double NNfunction_sb_dRcR::synapse0x12e3da0() {
   return (neuron0x12dcc20()*0.705437);
}

double NNfunction_sb_dRcR::synapse0x12e3de0() {
   return (neuron0x12dcf60()*0.813508);
}

double NNfunction_sb_dRcR::synapse0x12e3e20() {
   return (neuron0x12dd2a0()*-0.54403);
}

double NNfunction_sb_dRcR::synapse0x12e3e60() {
   return (neuron0x12dd5e0()*-0.843429);
}

double NNfunction_sb_dRcR::synapse0x12e3ea0() {
   return (neuron0x12dd920()*0.321763);
}

double NNfunction_sb_dRcR::synapse0x12e3ee0() {
   return (neuron0x12ddc60()*-1.16733);
}

double NNfunction_sb_dRcR::synapse0x12e8020() {
   return (neuron0x12ddfa0()*1.05919);
}

double NNfunction_sb_dRcR::synapse0x12e8060() {
   return (neuron0x12de2e0()*-0.25877);
}

double NNfunction_sb_dRcR::synapse0x12e80a0() {
   return (neuron0x12de620()*-0.529511);
}

double NNfunction_sb_dRcR::synapse0x12e3a30() {
   return (neuron0x12de960()*0.749589);
}

double NNfunction_sb_dRcR::synapse0x12e3a70() {
   return (neuron0x12deec0()*-0.00996696);
}

double NNfunction_sb_dRcR::synapse0x12e81f0() {
   return (neuron0x12df0e0()*-0.298818);
}

double NNfunction_sb_dRcR::synapse0x12e8230() {
   return (neuron0x12df420()*0.170274);
}

double NNfunction_sb_dRcR::synapse0x12e8270() {
   return (neuron0x12df760()*-0.366002);
}

double NNfunction_sb_dRcR::synapse0x12e82b0() {
   return (neuron0x12dfaa0()*0.45348);
}

double NNfunction_sb_dRcR::synapse0x12e82f0() {
   return (neuron0x12dfde0()*0.85954);
}

double NNfunction_sb_dRcR::synapse0x12e8330() {
   return (neuron0x12e0120()*-0.445435);
}

double NNfunction_sb_dRcR::synapse0x12e86b0() {
   return (neuron0x12db560()*-0.262861);
}

double NNfunction_sb_dRcR::synapse0x12e86f0() {
   return (neuron0x12db8a0()*0.942327);
}

double NNfunction_sb_dRcR::synapse0x12e8730() {
   return (neuron0x12dbbe0()*0.22527);
}

double NNfunction_sb_dRcR::synapse0x12e8770() {
   return (neuron0x12dbf20()*-1.18451);
}

double NNfunction_sb_dRcR::synapse0x12e87b0() {
   return (neuron0x12dc260()*-0.0238028);
}

double NNfunction_sb_dRcR::synapse0x12e87f0() {
   return (neuron0x12dc5a0()*-0.780935);
}

double NNfunction_sb_dRcR::synapse0x12e8830() {
   return (neuron0x12dc8e0()*1.07687);
}

double NNfunction_sb_dRcR::synapse0x12e8870() {
   return (neuron0x12dcc20()*-0.340846);
}

double NNfunction_sb_dRcR::synapse0x12e88b0() {
   return (neuron0x12dcf60()*-0.277773);
}

double NNfunction_sb_dRcR::synapse0x12e88f0() {
   return (neuron0x12dd2a0()*-0.500404);
}

double NNfunction_sb_dRcR::synapse0x12e8930() {
   return (neuron0x12dd5e0()*-0.0800855);
}

double NNfunction_sb_dRcR::synapse0x12e8970() {
   return (neuron0x12dd920()*-0.198068);
}

double NNfunction_sb_dRcR::synapse0x12e89b0() {
   return (neuron0x12ddc60()*-0.444281);
}

double NNfunction_sb_dRcR::synapse0x12e89f0() {
   return (neuron0x12ddfa0()*-0.0423814);
}

double NNfunction_sb_dRcR::synapse0x12e8a30() {
   return (neuron0x12de2e0()*0.183311);
}

double NNfunction_sb_dRcR::synapse0x12e8a70() {
   return (neuron0x12de620()*-0.483607);
}

double NNfunction_sb_dRcR::synapse0x12e8500() {
   return (neuron0x12de960()*-0.0387472);
}

double NNfunction_sb_dRcR::synapse0x12e8540() {
   return (neuron0x12deec0()*-0.642152);
}

double NNfunction_sb_dRcR::synapse0x12e8bc0() {
   return (neuron0x12df0e0()*0.286429);
}

double NNfunction_sb_dRcR::synapse0x12e8c00() {
   return (neuron0x12df420()*-0.580838);
}

double NNfunction_sb_dRcR::synapse0x12e8c40() {
   return (neuron0x12df760()*-0.0138405);
}

double NNfunction_sb_dRcR::synapse0x12e8c80() {
   return (neuron0x12dfaa0()*-0.190354);
}

double NNfunction_sb_dRcR::synapse0x12e8cc0() {
   return (neuron0x12dfde0()*-0.0664622);
}

double NNfunction_sb_dRcR::synapse0x12e8d00() {
   return (neuron0x12e0120()*-0.135361);
}

double NNfunction_sb_dRcR::synapse0x12e9080() {
   return (neuron0x12db560()*-0.31068);
}

double NNfunction_sb_dRcR::synapse0x12e90c0() {
   return (neuron0x12db8a0()*0.275448);
}

double NNfunction_sb_dRcR::synapse0x12e9100() {
   return (neuron0x12dbbe0()*0.330565);
}

double NNfunction_sb_dRcR::synapse0x12e9140() {
   return (neuron0x12dbf20()*-0.566144);
}

double NNfunction_sb_dRcR::synapse0x12e9180() {
   return (neuron0x12dc260()*0.525046);
}

double NNfunction_sb_dRcR::synapse0x12e91c0() {
   return (neuron0x12dc5a0()*0.34257);
}

double NNfunction_sb_dRcR::synapse0x12e9200() {
   return (neuron0x12dc8e0()*0.903753);
}

double NNfunction_sb_dRcR::synapse0x12e9240() {
   return (neuron0x12dcc20()*-0.514964);
}

double NNfunction_sb_dRcR::synapse0x12e9280() {
   return (neuron0x12dcf60()*-0.10703);
}

double NNfunction_sb_dRcR::synapse0x12e92c0() {
   return (neuron0x12dd2a0()*-0.433693);
}

double NNfunction_sb_dRcR::synapse0x12e9300() {
   return (neuron0x12dd5e0()*0.395007);
}

double NNfunction_sb_dRcR::synapse0x12e9340() {
   return (neuron0x12dd920()*-1.06063);
}

double NNfunction_sb_dRcR::synapse0x12e9380() {
   return (neuron0x12ddc60()*-0.336876);
}

double NNfunction_sb_dRcR::synapse0x12e93c0() {
   return (neuron0x12ddfa0()*0.167921);
}

double NNfunction_sb_dRcR::synapse0x12e9400() {
   return (neuron0x12de2e0()*0.34493);
}

double NNfunction_sb_dRcR::synapse0x12e9440() {
   return (neuron0x12de620()*-0.066184);
}

double NNfunction_sb_dRcR::synapse0x12e8ed0() {
   return (neuron0x12de960()*-0.443762);
}

double NNfunction_sb_dRcR::synapse0x12e8f10() {
   return (neuron0x12deec0()*-0.679862);
}

double NNfunction_sb_dRcR::synapse0x12e9590() {
   return (neuron0x12df0e0()*-0.201986);
}

double NNfunction_sb_dRcR::synapse0x12e95d0() {
   return (neuron0x12df420()*-0.762084);
}

double NNfunction_sb_dRcR::synapse0x12e9610() {
   return (neuron0x12df760()*-0.219566);
}

double NNfunction_sb_dRcR::synapse0x12e9650() {
   return (neuron0x12dfaa0()*-0.0888076);
}

double NNfunction_sb_dRcR::synapse0x12e9690() {
   return (neuron0x12dfde0()*0.588835);
}

double NNfunction_sb_dRcR::synapse0x12e96d0() {
   return (neuron0x12e0120()*0.541549);
}

double NNfunction_sb_dRcR::synapse0x12e9a50() {
   return (neuron0x12db560()*-0.0797137);
}

double NNfunction_sb_dRcR::synapse0x12e9a90() {
   return (neuron0x12db8a0()*0.0904861);
}

double NNfunction_sb_dRcR::synapse0x12e9ad0() {
   return (neuron0x12dbbe0()*0.0181791);
}

double NNfunction_sb_dRcR::synapse0x12e9b10() {
   return (neuron0x12dbf20()*-0.180701);
}

double NNfunction_sb_dRcR::synapse0x12e9b50() {
   return (neuron0x12dc260()*-0.56485);
}

double NNfunction_sb_dRcR::synapse0x12e9b90() {
   return (neuron0x12dc5a0()*0.117692);
}

double NNfunction_sb_dRcR::synapse0x12e9bd0() {
   return (neuron0x12dc8e0()*-0.0319463);
}

double NNfunction_sb_dRcR::synapse0x12e9c10() {
   return (neuron0x12dcc20()*-0.258841);
}

double NNfunction_sb_dRcR::synapse0x12e9c50() {
   return (neuron0x12dcf60()*-0.946004);
}

double NNfunction_sb_dRcR::synapse0x12e9c90() {
   return (neuron0x12dd2a0()*-0.13388);
}

double NNfunction_sb_dRcR::synapse0x12e9cd0() {
   return (neuron0x12dd5e0()*0.752315);
}

double NNfunction_sb_dRcR::synapse0x12e9d10() {
   return (neuron0x12dd920()*2.19014);
}

double NNfunction_sb_dRcR::synapse0x12e9d50() {
   return (neuron0x12ddc60()*0.143447);
}

double NNfunction_sb_dRcR::synapse0x12e9d90() {
   return (neuron0x12ddfa0()*-0.746655);
}

double NNfunction_sb_dRcR::synapse0x12e9dd0() {
   return (neuron0x12de2e0()*-0.107703);
}

double NNfunction_sb_dRcR::synapse0x12e9e10() {
   return (neuron0x12de620()*-0.404602);
}

double NNfunction_sb_dRcR::synapse0x12e98a0() {
   return (neuron0x12de960()*0.235434);
}

double NNfunction_sb_dRcR::synapse0x12e98e0() {
   return (neuron0x12deec0()*-0.257221);
}

double NNfunction_sb_dRcR::synapse0x12e9f60() {
   return (neuron0x12df0e0()*0.136721);
}

double NNfunction_sb_dRcR::synapse0x12e9fa0() {
   return (neuron0x12df420()*0.0390484);
}

double NNfunction_sb_dRcR::synapse0x12e9fe0() {
   return (neuron0x12df760()*0.500754);
}

double NNfunction_sb_dRcR::synapse0x12ea020() {
   return (neuron0x12dfaa0()*0.469665);
}

double NNfunction_sb_dRcR::synapse0x12ea060() {
   return (neuron0x12dfde0()*-0.478102);
}

double NNfunction_sb_dRcR::synapse0x12ea0a0() {
   return (neuron0x12e0120()*-0.530249);
}

double NNfunction_sb_dRcR::synapse0x12ea420() {
   return (neuron0x12db560()*0.580836);
}

double NNfunction_sb_dRcR::synapse0x12db780() {
   return (neuron0x12db8a0()*-1.17166);
}

double NNfunction_sb_dRcR::synapse0x12db7c0() {
   return (neuron0x12dbbe0()*0.00317526);
}

double NNfunction_sb_dRcR::synapse0x12dbac0() {
   return (neuron0x12dbf20()*1.15101);
}

double NNfunction_sb_dRcR::synapse0x12dbb00() {
   return (neuron0x12dc260()*1.39531);
}

double NNfunction_sb_dRcR::synapse0x12dbe00() {
   return (neuron0x12dc5a0()*-0.0750208);
}

double NNfunction_sb_dRcR::synapse0x12dbe40() {
   return (neuron0x12dc8e0()*0.276128);
}

double NNfunction_sb_dRcR::synapse0x12dc140() {
   return (neuron0x12dcc20()*-0.403166);
}

double NNfunction_sb_dRcR::synapse0x12dc180() {
   return (neuron0x12dcf60()*-0.203739);
}

double NNfunction_sb_dRcR::synapse0x12dc480() {
   return (neuron0x12dd2a0()*0.304354);
}

double NNfunction_sb_dRcR::synapse0x12dc4c0() {
   return (neuron0x12dd5e0()*-0.184454);
}

double NNfunction_sb_dRcR::synapse0x12dc7c0() {
   return (neuron0x12dd920()*0.800431);
}

double NNfunction_sb_dRcR::synapse0x12dc800() {
   return (neuron0x12ddc60()*-0.300409);
}

double NNfunction_sb_dRcR::synapse0x12dcb00() {
   return (neuron0x12ddfa0()*-0.548158);
}

double NNfunction_sb_dRcR::synapse0x12dcb40() {
   return (neuron0x12de2e0()*0.563417);
}

double NNfunction_sb_dRcR::synapse0x12dce40() {
   return (neuron0x12de620()*0.724089);
}

double NNfunction_sb_dRcR::synapse0x12dce80() {
   return (neuron0x12de960()*0.202668);
}

double NNfunction_sb_dRcR::synapse0x12dd180() {
   return (neuron0x12deec0()*0.185739);
}

double NNfunction_sb_dRcR::synapse0x12dd1c0() {
   return (neuron0x12df0e0()*-0.233394);
}

double NNfunction_sb_dRcR::synapse0x12dd4c0() {
   return (neuron0x12df420()*0.00149431);
}

double NNfunction_sb_dRcR::synapse0x12dd500() {
   return (neuron0x12df760()*-0.374528);
}

double NNfunction_sb_dRcR::synapse0x12dd800() {
   return (neuron0x12dfaa0()*0.0511664);
}

double NNfunction_sb_dRcR::synapse0x12dd840() {
   return (neuron0x12dfde0()*0.102225);
}

double NNfunction_sb_dRcR::synapse0x12ddb40() {
   return (neuron0x12e0120()*-0.452504);
}

double NNfunction_sb_dRcR::synapse0x12ddb80() {
   return (neuron0x12db560()*-0.598832);
}

double NNfunction_sb_dRcR::synapse0x12de840() {
   return (neuron0x12db8a0()*-0.0196574);
}

double NNfunction_sb_dRcR::synapse0x12de880() {
   return (neuron0x12dbbe0()*-0.399289);
}

double NNfunction_sb_dRcR::synapse0x12ea270() {
   return (neuron0x12dbf20()*-0.175397);
}

double NNfunction_sb_dRcR::synapse0x12ea2b0() {
   return (neuron0x12dc260()*-0.98594);
}

double NNfunction_sb_dRcR::synapse0x12deb80() {
   return (neuron0x12dc5a0()*0.502255);
}

double NNfunction_sb_dRcR::synapse0x12debc0() {
   return (neuron0x12dc8e0()*-0.368771);
}

double NNfunction_sb_dRcR::synapse0x108cb50() {
   return (neuron0x12dcc20()*-0.225855);
}

double NNfunction_sb_dRcR::synapse0x108cb90() {
   return (neuron0x12dcf60()*-0.0249539);
}

double NNfunction_sb_dRcR::synapse0x12df300() {
   return (neuron0x12dd2a0()*-0.504566);
}

double NNfunction_sb_dRcR::synapse0x12df340() {
   return (neuron0x12dd5e0()*-0.310192);
}

double NNfunction_sb_dRcR::synapse0x12df640() {
   return (neuron0x12dd920()*-0.85108);
}

double NNfunction_sb_dRcR::synapse0x12df680() {
   return (neuron0x12ddc60()*1.06094);
}

double NNfunction_sb_dRcR::synapse0x12df980() {
   return (neuron0x12ddfa0()*0.189169);
}

double NNfunction_sb_dRcR::synapse0x12df9c0() {
   return (neuron0x12de2e0()*0.266179);
}

double NNfunction_sb_dRcR::synapse0x12dfcc0() {
   return (neuron0x12de620()*-0.0806428);
}

double NNfunction_sb_dRcR::synapse0x12dfd00() {
   return (neuron0x12de960()*0.630053);
}

double NNfunction_sb_dRcR::synapse0x12e0000() {
   return (neuron0x12deec0()*0.723683);
}

double NNfunction_sb_dRcR::synapse0x12e0040() {
   return (neuron0x12df0e0()*0.265504);
}

double NNfunction_sb_dRcR::synapse0x12e0340() {
   return (neuron0x12df420()*0.560641);
}

double NNfunction_sb_dRcR::synapse0x12e0380() {
   return (neuron0x12df760()*0.103872);
}

double NNfunction_sb_dRcR::synapse0x12dde80() {
   return (neuron0x12dfaa0()*-0.405914);
}

double NNfunction_sb_dRcR::synapse0x12ddec0() {
   return (neuron0x12dfde0()*-0.20358);
}

double NNfunction_sb_dRcR::synapse0x12ec190() {
   return (neuron0x12e0120()*-0.229423);
}

double NNfunction_sb_dRcR::synapse0x12ec510() {
   return (neuron0x12db560()*0.291329);
}

double NNfunction_sb_dRcR::synapse0x12ec550() {
   return (neuron0x12db8a0()*-0.265231);
}

double NNfunction_sb_dRcR::synapse0x12ec590() {
   return (neuron0x12dbbe0()*0.0607687);
}

double NNfunction_sb_dRcR::synapse0x12ec5d0() {
   return (neuron0x12dbf20()*-0.632887);
}

double NNfunction_sb_dRcR::synapse0x12ec610() {
   return (neuron0x12dc260()*-0.880985);
}

double NNfunction_sb_dRcR::synapse0x12ec650() {
   return (neuron0x12dc5a0()*-0.233989);
}

double NNfunction_sb_dRcR::synapse0x12ec690() {
   return (neuron0x12dc8e0()*-0.0339035);
}

double NNfunction_sb_dRcR::synapse0x12ec6d0() {
   return (neuron0x12dcc20()*-0.129659);
}

double NNfunction_sb_dRcR::synapse0x12ec710() {
   return (neuron0x12dcf60()*0.292835);
}

double NNfunction_sb_dRcR::synapse0x12ec750() {
   return (neuron0x12dd2a0()*0.0399858);
}

double NNfunction_sb_dRcR::synapse0x12ec790() {
   return (neuron0x12dd5e0()*0.0429742);
}

double NNfunction_sb_dRcR::synapse0x12ec7d0() {
   return (neuron0x12dd920()*-0.258938);
}

double NNfunction_sb_dRcR::synapse0x12ec810() {
   return (neuron0x12ddc60()*-0.112979);
}

double NNfunction_sb_dRcR::synapse0x12ec850() {
   return (neuron0x12ddfa0()*-0.228121);
}

double NNfunction_sb_dRcR::synapse0x12ec890() {
   return (neuron0x12de2e0()*-0.369913);
}

double NNfunction_sb_dRcR::synapse0x12ec8d0() {
   return (neuron0x12de620()*-0.00907219);
}

double NNfunction_sb_dRcR::synapse0x12ec360() {
   return (neuron0x12de960()*0.342185);
}

double NNfunction_sb_dRcR::synapse0x12ec3a0() {
   return (neuron0x12deec0()*0.129245);
}

double NNfunction_sb_dRcR::synapse0x12eca20() {
   return (neuron0x12df0e0()*-0.472122);
}

double NNfunction_sb_dRcR::synapse0x12eca60() {
   return (neuron0x12df420()*0.187886);
}

double NNfunction_sb_dRcR::synapse0x12ecaa0() {
   return (neuron0x12df760()*0.0345412);
}

double NNfunction_sb_dRcR::synapse0x12ecae0() {
   return (neuron0x12dfaa0()*-0.26993);
}

double NNfunction_sb_dRcR::synapse0x12ecb20() {
   return (neuron0x12dfde0()*0.32409);
}

double NNfunction_sb_dRcR::synapse0x12ecb60() {
   return (neuron0x12e0120()*-0.123418);
}

double NNfunction_sb_dRcR::synapse0x12ecee0() {
   return (neuron0x12db560()*0.217608);
}

double NNfunction_sb_dRcR::synapse0x12ecf20() {
   return (neuron0x12db8a0()*1.11158);
}

double NNfunction_sb_dRcR::synapse0x12ecf60() {
   return (neuron0x12dbbe0()*0.0321271);
}

double NNfunction_sb_dRcR::synapse0x12ecfa0() {
   return (neuron0x12dbf20()*1.32037);
}

double NNfunction_sb_dRcR::synapse0x12ecfe0() {
   return (neuron0x12dc260()*-0.0924423);
}

double NNfunction_sb_dRcR::synapse0x12ed020() {
   return (neuron0x12dc5a0()*0.0331268);
}

double NNfunction_sb_dRcR::synapse0x12ed060() {
   return (neuron0x12dc8e0()*0.0385676);
}

double NNfunction_sb_dRcR::synapse0x12ed0a0() {
   return (neuron0x12dcc20()*-0.317992);
}

double NNfunction_sb_dRcR::synapse0x12ed0e0() {
   return (neuron0x12dcf60()*-0.582164);
}

double NNfunction_sb_dRcR::synapse0x12ed120() {
   return (neuron0x12dd2a0()*0.279292);
}

double NNfunction_sb_dRcR::synapse0x12ed160() {
   return (neuron0x12dd5e0()*-0.159718);
}

double NNfunction_sb_dRcR::synapse0x12ed1a0() {
   return (neuron0x12dd920()*0.0843377);
}

double NNfunction_sb_dRcR::synapse0x12ed1e0() {
   return (neuron0x12ddc60()*1.06611);
}

double NNfunction_sb_dRcR::synapse0x12ed220() {
   return (neuron0x12ddfa0()*-0.12711);
}

double NNfunction_sb_dRcR::synapse0x12ed260() {
   return (neuron0x12de2e0()*-0.193686);
}

double NNfunction_sb_dRcR::synapse0x12ed2a0() {
   return (neuron0x12de620()*-0.14679);
}

double NNfunction_sb_dRcR::synapse0x12ecd30() {
   return (neuron0x12de960()*-0.586433);
}

double NNfunction_sb_dRcR::synapse0x12ecd70() {
   return (neuron0x12deec0()*0.131197);
}

double NNfunction_sb_dRcR::synapse0x12ed3f0() {
   return (neuron0x12df0e0()*0.314875);
}

double NNfunction_sb_dRcR::synapse0x12ed430() {
   return (neuron0x12df420()*0.732353);
}

double NNfunction_sb_dRcR::synapse0x12ed470() {
   return (neuron0x12df760()*-0.0352272);
}

double NNfunction_sb_dRcR::synapse0x12ed4b0() {
   return (neuron0x12dfaa0()*0.304042);
}

double NNfunction_sb_dRcR::synapse0x12ed4f0() {
   return (neuron0x12dfde0()*0.0965228);
}

double NNfunction_sb_dRcR::synapse0x12ed530() {
   return (neuron0x12e0120()*0.22681);
}

double NNfunction_sb_dRcR::synapse0x12ed8b0() {
   return (neuron0x12db560()*-0.312124);
}

double NNfunction_sb_dRcR::synapse0x12ed8f0() {
   return (neuron0x12db8a0()*-0.535038);
}

double NNfunction_sb_dRcR::synapse0x12ed930() {
   return (neuron0x12dbbe0()*0.533993);
}

double NNfunction_sb_dRcR::synapse0x12ed970() {
   return (neuron0x12dbf20()*-0.536503);
}

double NNfunction_sb_dRcR::synapse0x12ed9b0() {
   return (neuron0x12dc260()*0.322711);
}

double NNfunction_sb_dRcR::synapse0x12ed9f0() {
   return (neuron0x12dc5a0()*0.0232381);
}

double NNfunction_sb_dRcR::synapse0x12eda30() {
   return (neuron0x12dc8e0()*-0.99857);
}

double NNfunction_sb_dRcR::synapse0x12eda70() {
   return (neuron0x12dcc20()*-0.004307);
}

double NNfunction_sb_dRcR::synapse0x12edab0() {
   return (neuron0x12dcf60()*0.798916);
}

double NNfunction_sb_dRcR::synapse0x12edaf0() {
   return (neuron0x12dd2a0()*0.320482);
}

double NNfunction_sb_dRcR::synapse0x12edb30() {
   return (neuron0x12dd5e0()*0.197748);
}

double NNfunction_sb_dRcR::synapse0x12edb70() {
   return (neuron0x12dd920()*0.59491);
}

double NNfunction_sb_dRcR::synapse0x12edbb0() {
   return (neuron0x12ddc60()*-0.656064);
}

double NNfunction_sb_dRcR::synapse0x12edbf0() {
   return (neuron0x12ddfa0()*0.458072);
}

double NNfunction_sb_dRcR::synapse0x12edc30() {
   return (neuron0x12de2e0()*-1.05367);
}

double NNfunction_sb_dRcR::synapse0x12edc70() {
   return (neuron0x12de620()*2.67638);
}

double NNfunction_sb_dRcR::synapse0x12ed700() {
   return (neuron0x12de960()*0.0833451);
}

double NNfunction_sb_dRcR::synapse0x12ed740() {
   return (neuron0x12deec0()*1.03793);
}

double NNfunction_sb_dRcR::synapse0x12eddc0() {
   return (neuron0x12df0e0()*-0.904821);
}

double NNfunction_sb_dRcR::synapse0x12ede00() {
   return (neuron0x12df420()*0.240533);
}

double NNfunction_sb_dRcR::synapse0x12ede40() {
   return (neuron0x12df760()*-0.869785);
}

double NNfunction_sb_dRcR::synapse0x12ede80() {
   return (neuron0x12dfaa0()*-0.439123);
}

double NNfunction_sb_dRcR::synapse0x12edec0() {
   return (neuron0x12dfde0()*0.379776);
}

double NNfunction_sb_dRcR::synapse0x12edf00() {
   return (neuron0x12e0120()*-0.0980584);
}

double NNfunction_sb_dRcR::synapse0x12ee280() {
   return (neuron0x12db560()*0.0378048);
}

double NNfunction_sb_dRcR::synapse0x12ee2c0() {
   return (neuron0x12db8a0()*-0.0391134);
}

double NNfunction_sb_dRcR::synapse0x12ee300() {
   return (neuron0x12dbbe0()*-0.0111234);
}

double NNfunction_sb_dRcR::synapse0x12ee340() {
   return (neuron0x12dbf20()*-3.14376);
}

double NNfunction_sb_dRcR::synapse0x12ee380() {
   return (neuron0x12dc260()*0.00883383);
}

double NNfunction_sb_dRcR::synapse0x12ee3c0() {
   return (neuron0x12dc5a0()*0.00181931);
}

double NNfunction_sb_dRcR::synapse0x12ee400() {
   return (neuron0x12dc8e0()*-0.030533);
}

double NNfunction_sb_dRcR::synapse0x12ee440() {
   return (neuron0x12dcc20()*0.00340238);
}

double NNfunction_sb_dRcR::synapse0x12ee480() {
   return (neuron0x12dcf60()*-0.0190642);
}

double NNfunction_sb_dRcR::synapse0x12ee4c0() {
   return (neuron0x12dd2a0()*0.0455379);
}

double NNfunction_sb_dRcR::synapse0x12ee500() {
   return (neuron0x12dd5e0()*0.048843);
}

double NNfunction_sb_dRcR::synapse0x12ee540() {
   return (neuron0x12dd920()*-0.0215311);
}

double NNfunction_sb_dRcR::synapse0x12ee580() {
   return (neuron0x12ddc60()*0.117764);
}

double NNfunction_sb_dRcR::synapse0x12ee5c0() {
   return (neuron0x12ddfa0()*-0.0333772);
}

double NNfunction_sb_dRcR::synapse0x12ee600() {
   return (neuron0x12de2e0()*-0.012455);
}

double NNfunction_sb_dRcR::synapse0x12ee640() {
   return (neuron0x12de620()*0.0834939);
}

double NNfunction_sb_dRcR::synapse0x12ee0d0() {
   return (neuron0x12de960()*-0.0154721);
}

double NNfunction_sb_dRcR::synapse0x12ee110() {
   return (neuron0x12deec0()*0.0687761);
}

double NNfunction_sb_dRcR::synapse0x12ee790() {
   return (neuron0x12df0e0()*-0.034797);
}

double NNfunction_sb_dRcR::synapse0x12ee7d0() {
   return (neuron0x12df420()*-0.0420409);
}

double NNfunction_sb_dRcR::synapse0x12ee810() {
   return (neuron0x12df760()*0.0359538);
}

double NNfunction_sb_dRcR::synapse0x12ee850() {
   return (neuron0x12dfaa0()*-0.0137775);
}

double NNfunction_sb_dRcR::synapse0x12ee890() {
   return (neuron0x12dfde0()*-0.0268569);
}

double NNfunction_sb_dRcR::synapse0x12ee8d0() {
   return (neuron0x12e0120()*-0.0532848);
}

double NNfunction_sb_dRcR::synapse0x12eec50() {
   return (neuron0x12db560()*0.516343);
}

double NNfunction_sb_dRcR::synapse0x12eec90() {
   return (neuron0x12db8a0()*0.268409);
}

double NNfunction_sb_dRcR::synapse0x12eecd0() {
   return (neuron0x12dbbe0()*-0.985894);
}

double NNfunction_sb_dRcR::synapse0x12eed10() {
   return (neuron0x12dbf20()*-0.743456);
}

double NNfunction_sb_dRcR::synapse0x12eed50() {
   return (neuron0x12dc260()*-0.029042);
}

double NNfunction_sb_dRcR::synapse0x12eed90() {
   return (neuron0x12dc5a0()*-0.344142);
}

double NNfunction_sb_dRcR::synapse0x12eedd0() {
   return (neuron0x12dc8e0()*0.217284);
}

double NNfunction_sb_dRcR::synapse0x12eee10() {
   return (neuron0x12dcc20()*-0.262764);
}

double NNfunction_sb_dRcR::synapse0x12eee50() {
   return (neuron0x12dcf60()*-1.21245);
}

double NNfunction_sb_dRcR::synapse0x12e7010() {
   return (neuron0x12dd2a0()*-0.121226);
}

double NNfunction_sb_dRcR::synapse0x12e7050() {
   return (neuron0x12dd5e0()*0.114072);
}

double NNfunction_sb_dRcR::synapse0x12e7090() {
   return (neuron0x12dd920()*-0.463296);
}

double NNfunction_sb_dRcR::synapse0x12e70d0() {
   return (neuron0x12ddc60()*-0.886241);
}

double NNfunction_sb_dRcR::synapse0x12e7110() {
   return (neuron0x12ddfa0()*-0.526042);
}

double NNfunction_sb_dRcR::synapse0x12e7150() {
   return (neuron0x12de2e0()*0.106585);
}

double NNfunction_sb_dRcR::synapse0x12e7190() {
   return (neuron0x12de620()*-0.342002);
}

double NNfunction_sb_dRcR::synapse0x12eeaa0() {
   return (neuron0x12de960()*1.1645);
}

double NNfunction_sb_dRcR::synapse0x12eeae0() {
   return (neuron0x12deec0()*-0.0105971);
}

double NNfunction_sb_dRcR::synapse0x12e72e0() {
   return (neuron0x12df0e0()*0.640382);
}

double NNfunction_sb_dRcR::synapse0x12e7320() {
   return (neuron0x12df420()*1.78263);
}

double NNfunction_sb_dRcR::synapse0x12e7360() {
   return (neuron0x12df760()*1.67501);
}

double NNfunction_sb_dRcR::synapse0x12e73a0() {
   return (neuron0x12dfaa0()*0.939873);
}

double NNfunction_sb_dRcR::synapse0x12e73e0() {
   return (neuron0x12dfde0()*-1.32489);
}

double NNfunction_sb_dRcR::synapse0x12e7420() {
   return (neuron0x12e0120()*0.25516);
}

double NNfunction_sb_dRcR::synapse0x12e77a0() {
   return (neuron0x12db560()*0.0221936);
}

double NNfunction_sb_dRcR::synapse0x12e77e0() {
   return (neuron0x12db8a0()*-0.0426242);
}

double NNfunction_sb_dRcR::synapse0x12e7820() {
   return (neuron0x12dbbe0()*-0.0764653);
}

double NNfunction_sb_dRcR::synapse0x12e7860() {
   return (neuron0x12dbf20()*-1.59335);
}

double NNfunction_sb_dRcR::synapse0x12e78a0() {
   return (neuron0x12dc260()*-0.0844931);
}

double NNfunction_sb_dRcR::synapse0x12e78e0() {
   return (neuron0x12dc5a0()*-0.06584);
}

double NNfunction_sb_dRcR::synapse0x12e7920() {
   return (neuron0x12dc8e0()*0.00946147);
}

double NNfunction_sb_dRcR::synapse0x12e7960() {
   return (neuron0x12dcc20()*0.0709581);
}

double NNfunction_sb_dRcR::synapse0x12e79a0() {
   return (neuron0x12dcf60()*0.0806753);
}

double NNfunction_sb_dRcR::synapse0x12e79e0() {
   return (neuron0x12dd2a0()*0.0685554);
}

double NNfunction_sb_dRcR::synapse0x12e7a20() {
   return (neuron0x12dd5e0()*0.0663108);
}

double NNfunction_sb_dRcR::synapse0x12e7a60() {
   return (neuron0x12dd920()*0.0958822);
}

double NNfunction_sb_dRcR::synapse0x12e7aa0() {
   return (neuron0x12ddc60()*0.0350885);
}

double NNfunction_sb_dRcR::synapse0x12e7ae0() {
   return (neuron0x12ddfa0()*-0.0861545);
}

double NNfunction_sb_dRcR::synapse0x12e7b20() {
   return (neuron0x12de2e0()*-0.000677849);
}

double NNfunction_sb_dRcR::synapse0x12e7b60() {
   return (neuron0x12de620()*-1.82117);
}

double NNfunction_sb_dRcR::synapse0x12e75f0() {
   return (neuron0x12de960()*-0.0951244);
}

double NNfunction_sb_dRcR::synapse0x12e7630() {
   return (neuron0x12deec0()*-0.150663);
}

double NNfunction_sb_dRcR::synapse0x12e7cb0() {
   return (neuron0x12df0e0()*-0.00360675);
}

double NNfunction_sb_dRcR::synapse0x12e7cf0() {
   return (neuron0x12df420()*0.0719151);
}

double NNfunction_sb_dRcR::synapse0x12e7d30() {
   return (neuron0x12df760()*0.0389937);
}

double NNfunction_sb_dRcR::synapse0x12e7d70() {
   return (neuron0x12dfaa0()*0.00824407);
}

double NNfunction_sb_dRcR::synapse0x12e7db0() {
   return (neuron0x12dfde0()*0.00976327);
}

double NNfunction_sb_dRcR::synapse0x12e7df0() {
   return (neuron0x12e0120()*-0.067468);
}

double NNfunction_sb_dRcR::synapse0x12e7fc0() {
   return (neuron0x12db560()*0.00868135);
}

double NNfunction_sb_dRcR::synapse0x12f1050() {
   return (neuron0x12db8a0()*-0.0411584);
}

double NNfunction_sb_dRcR::synapse0x12f1090() {
   return (neuron0x12dbbe0()*0.0084458);
}

double NNfunction_sb_dRcR::synapse0x12f10d0() {
   return (neuron0x12dbf20()*-0.0128464);
}

double NNfunction_sb_dRcR::synapse0x12f1110() {
   return (neuron0x12dc260()*-0.00367325);
}

double NNfunction_sb_dRcR::synapse0x12f1150() {
   return (neuron0x12dc5a0()*-0.0121406);
}

double NNfunction_sb_dRcR::synapse0x12f1190() {
   return (neuron0x12dc8e0()*-0.00982771);
}

double NNfunction_sb_dRcR::synapse0x12f11d0() {
   return (neuron0x12dcc20()*0.0143052);
}

double NNfunction_sb_dRcR::synapse0x12f1210() {
   return (neuron0x12dcf60()*0.00607009);
}

double NNfunction_sb_dRcR::synapse0x12f1250() {
   return (neuron0x12dd2a0()*0.0147289);
}

double NNfunction_sb_dRcR::synapse0x12f1290() {
   return (neuron0x12dd5e0()*0.00284794);
}

double NNfunction_sb_dRcR::synapse0x12f12d0() {
   return (neuron0x12dd920()*-0.480381);
}

double NNfunction_sb_dRcR::synapse0x12f1310() {
   return (neuron0x12ddc60()*-0.508928);
}

double NNfunction_sb_dRcR::synapse0x12f1350() {
   return (neuron0x12ddfa0()*0.0457197);
}

double NNfunction_sb_dRcR::synapse0x12f1390() {
   return (neuron0x12de2e0()*-0.246037);
}

double NNfunction_sb_dRcR::synapse0x12f13d0() {
   return (neuron0x12de620()*0.075855);
}

double NNfunction_sb_dRcR::synapse0x12f0ea0() {
   return (neuron0x12de960()*0.0605054);
}

double NNfunction_sb_dRcR::synapse0x12f0ee0() {
   return (neuron0x12deec0()*0.0643614);
}

double NNfunction_sb_dRcR::synapse0x12f1520() {
   return (neuron0x12df0e0()*-0.258248);
}

double NNfunction_sb_dRcR::synapse0x12f1560() {
   return (neuron0x12df420()*0.00446454);
}

double NNfunction_sb_dRcR::synapse0x12f15a0() {
   return (neuron0x12df760()*0.0192323);
}

double NNfunction_sb_dRcR::synapse0x12f15e0() {
   return (neuron0x12dfaa0()*0.0180128);
}

double NNfunction_sb_dRcR::synapse0x12f1620() {
   return (neuron0x12dfde0()*0.01884);
}

double NNfunction_sb_dRcR::synapse0x12f1660() {
   return (neuron0x12e0120()*-0.00710841);
}

double NNfunction_sb_dRcR::synapse0x12f19e0() {
   return (neuron0x12db560()*-1.25222);
}

double NNfunction_sb_dRcR::synapse0x12f1a20() {
   return (neuron0x12db8a0()*0.953896);
}

double NNfunction_sb_dRcR::synapse0x12f1a60() {
   return (neuron0x12dbbe0()*0.207687);
}

double NNfunction_sb_dRcR::synapse0x12f1aa0() {
   return (neuron0x12dbf20()*0.532092);
}

double NNfunction_sb_dRcR::synapse0x12f1ae0() {
   return (neuron0x12dc260()*0.278698);
}

double NNfunction_sb_dRcR::synapse0x12f1b20() {
   return (neuron0x12dc5a0()*-0.0642772);
}

double NNfunction_sb_dRcR::synapse0x12f1b60() {
   return (neuron0x12dc8e0()*-0.622399);
}

double NNfunction_sb_dRcR::synapse0x12f1ba0() {
   return (neuron0x12dcc20()*1.68105);
}

double NNfunction_sb_dRcR::synapse0x12f1be0() {
   return (neuron0x12dcf60()*-0.336964);
}

double NNfunction_sb_dRcR::synapse0x12f1c20() {
   return (neuron0x12dd2a0()*-0.0513891);
}

double NNfunction_sb_dRcR::synapse0x12f1c60() {
   return (neuron0x12dd5e0()*-0.977698);
}

double NNfunction_sb_dRcR::synapse0x12f1ca0() {
   return (neuron0x12dd920()*0.421265);
}

double NNfunction_sb_dRcR::synapse0x12f1ce0() {
   return (neuron0x12ddc60()*1.36862);
}

double NNfunction_sb_dRcR::synapse0x12f1d20() {
   return (neuron0x12ddfa0()*0.530644);
}

double NNfunction_sb_dRcR::synapse0x12f1d60() {
   return (neuron0x12de2e0()*-0.311114);
}

double NNfunction_sb_dRcR::synapse0x12f1da0() {
   return (neuron0x12de620()*-1.34637);
}

double NNfunction_sb_dRcR::synapse0x12f1830() {
   return (neuron0x12de960()*0.297562);
}

double NNfunction_sb_dRcR::synapse0x12f1870() {
   return (neuron0x12deec0()*-0.725218);
}

double NNfunction_sb_dRcR::synapse0x12f1ef0() {
   return (neuron0x12df0e0()*0.528975);
}

double NNfunction_sb_dRcR::synapse0x12f1f30() {
   return (neuron0x12df420()*-0.601817);
}

double NNfunction_sb_dRcR::synapse0x12f1f70() {
   return (neuron0x12df760()*0.0256283);
}

double NNfunction_sb_dRcR::synapse0x12f1fb0() {
   return (neuron0x12dfaa0()*-0.119196);
}

double NNfunction_sb_dRcR::synapse0x12f1ff0() {
   return (neuron0x12dfde0()*-0.776045);
}

double NNfunction_sb_dRcR::synapse0x12f2030() {
   return (neuron0x12e0120()*-0.233266);
}

double NNfunction_sb_dRcR::synapse0x12f23b0() {
   return (neuron0x12db560()*0.00162789);
}

double NNfunction_sb_dRcR::synapse0x12f23f0() {
   return (neuron0x12db8a0()*0.000489341);
}

double NNfunction_sb_dRcR::synapse0x12f2430() {
   return (neuron0x12dbbe0()*0.00243);
}

double NNfunction_sb_dRcR::synapse0x12f2470() {
   return (neuron0x12dbf20()*0.248468);
}

double NNfunction_sb_dRcR::synapse0x12f24b0() {
   return (neuron0x12dc260()*0.0108546);
}

double NNfunction_sb_dRcR::synapse0x12f24f0() {
   return (neuron0x12dc5a0()*0.00039658);
}

double NNfunction_sb_dRcR::synapse0x12f2530() {
   return (neuron0x12dc8e0()*-0.00549855);
}

double NNfunction_sb_dRcR::synapse0x12f2570() {
   return (neuron0x12dcc20()*0.00443951);
}

double NNfunction_sb_dRcR::synapse0x12f25b0() {
   return (neuron0x12dcf60()*0.00276132);
}

double NNfunction_sb_dRcR::synapse0x12f25f0() {
   return (neuron0x12dd2a0()*0.00357006);
}

double NNfunction_sb_dRcR::synapse0x12f2630() {
   return (neuron0x12dd5e0()*-0.00974636);
}

double NNfunction_sb_dRcR::synapse0x12f2670() {
   return (neuron0x12dd920()*-0.0422655);
}

double NNfunction_sb_dRcR::synapse0x12f26b0() {
   return (neuron0x12ddc60()*-0.0336018);
}

double NNfunction_sb_dRcR::synapse0x12f26f0() {
   return (neuron0x12ddfa0()*0.0245508);
}

double NNfunction_sb_dRcR::synapse0x12f2730() {
   return (neuron0x12de2e0()*-0.0120269);
}

double NNfunction_sb_dRcR::synapse0x12f2770() {
   return (neuron0x12de620()*0.442609);
}

double NNfunction_sb_dRcR::synapse0x12f2200() {
   return (neuron0x12de960()*0.0172118);
}

double NNfunction_sb_dRcR::synapse0x12f2240() {
   return (neuron0x12deec0()*0.459275);
}

double NNfunction_sb_dRcR::synapse0x12f28c0() {
   return (neuron0x12df0e0()*-0.0203754);
}

double NNfunction_sb_dRcR::synapse0x12f2900() {
   return (neuron0x12df420()*0.00860557);
}

double NNfunction_sb_dRcR::synapse0x12f2940() {
   return (neuron0x12df760()*-0.00355948);
}

double NNfunction_sb_dRcR::synapse0x12f2980() {
   return (neuron0x12dfaa0()*0.00114504);
}

double NNfunction_sb_dRcR::synapse0x12f29c0() {
   return (neuron0x12dfde0()*0.0102866);
}

double NNfunction_sb_dRcR::synapse0x12f2a00() {
   return (neuron0x12e0120()*-0.0141073);
}

double NNfunction_sb_dRcR::synapse0x12f2d80() {
   return (neuron0x12db560()*0.00988997);
}

double NNfunction_sb_dRcR::synapse0x12f2dc0() {
   return (neuron0x12db8a0()*-0.727106);
}

double NNfunction_sb_dRcR::synapse0x12f2e00() {
   return (neuron0x12dbbe0()*0.0292103);
}

double NNfunction_sb_dRcR::synapse0x12f2e40() {
   return (neuron0x12dbf20()*0.491588);
}

double NNfunction_sb_dRcR::synapse0x12f2e80() {
   return (neuron0x12dc260()*0.658796);
}

double NNfunction_sb_dRcR::synapse0x12f2ec0() {
   return (neuron0x12dc5a0()*-0.2156);
}

double NNfunction_sb_dRcR::synapse0x12f2f00() {
   return (neuron0x12dc8e0()*0.501822);
}

double NNfunction_sb_dRcR::synapse0x12f2f40() {
   return (neuron0x12dcc20()*-0.465816);
}

double NNfunction_sb_dRcR::synapse0x12f2f80() {
   return (neuron0x12dcf60()*-0.995072);
}

double NNfunction_sb_dRcR::synapse0x12f2fc0() {
   return (neuron0x12dd2a0()*-0.411538);
}

double NNfunction_sb_dRcR::synapse0x12f3000() {
   return (neuron0x12dd5e0()*-0.40697);
}

double NNfunction_sb_dRcR::synapse0x12f3040() {
   return (neuron0x12dd920()*-0.3201);
}

double NNfunction_sb_dRcR::synapse0x12f3080() {
   return (neuron0x12ddc60()*-0.490701);
}

double NNfunction_sb_dRcR::synapse0x12f30c0() {
   return (neuron0x12ddfa0()*0.113353);
}

double NNfunction_sb_dRcR::synapse0x12f3100() {
   return (neuron0x12de2e0()*-0.632933);
}

double NNfunction_sb_dRcR::synapse0x12f3140() {
   return (neuron0x12de620()*0.90574);
}

double NNfunction_sb_dRcR::synapse0x12f2bd0() {
   return (neuron0x12de960()*0.479849);
}

double NNfunction_sb_dRcR::synapse0x12f2c10() {
   return (neuron0x12deec0()*0.894706);
}

double NNfunction_sb_dRcR::synapse0x12f3290() {
   return (neuron0x12df0e0()*0.164422);
}

double NNfunction_sb_dRcR::synapse0x12f32d0() {
   return (neuron0x12df420()*-0.385512);
}

double NNfunction_sb_dRcR::synapse0x12f3310() {
   return (neuron0x12df760()*1.17771);
}

double NNfunction_sb_dRcR::synapse0x12f3350() {
   return (neuron0x12dfaa0()*-0.155698);
}

double NNfunction_sb_dRcR::synapse0x12f3390() {
   return (neuron0x12dfde0()*0.166761);
}

double NNfunction_sb_dRcR::synapse0x12f33d0() {
   return (neuron0x12e0120()*-0.522359);
}

double NNfunction_sb_dRcR::synapse0x12f3750() {
   return (neuron0x12db560()*0.198997);
}

double NNfunction_sb_dRcR::synapse0x12f3790() {
   return (neuron0x12db8a0()*0.0775074);
}

double NNfunction_sb_dRcR::synapse0x12f37d0() {
   return (neuron0x12dbbe0()*0.146902);
}

double NNfunction_sb_dRcR::synapse0x12f3810() {
   return (neuron0x12dbf20()*0.150102);
}

double NNfunction_sb_dRcR::synapse0x12f3850() {
   return (neuron0x12dc260()*-0.63596);
}

double NNfunction_sb_dRcR::synapse0x12f3890() {
   return (neuron0x12dc5a0()*0.87137);
}

double NNfunction_sb_dRcR::synapse0x12f38d0() {
   return (neuron0x12dc8e0()*-0.1355);
}

double NNfunction_sb_dRcR::synapse0x12f3910() {
   return (neuron0x12dcc20()*0.832821);
}

double NNfunction_sb_dRcR::synapse0x12f3950() {
   return (neuron0x12dcf60()*0.342616);
}

double NNfunction_sb_dRcR::synapse0x12f3990() {
   return (neuron0x12dd2a0()*0.437583);
}

double NNfunction_sb_dRcR::synapse0x12f39d0() {
   return (neuron0x12dd5e0()*0.137196);
}

double NNfunction_sb_dRcR::synapse0x12f3a10() {
   return (neuron0x12dd920()*0.233213);
}

double NNfunction_sb_dRcR::synapse0x12f3a50() {
   return (neuron0x12ddc60()*0.361249);
}

double NNfunction_sb_dRcR::synapse0x12f3a90() {
   return (neuron0x12ddfa0()*0.760303);
}

double NNfunction_sb_dRcR::synapse0x12f3ad0() {
   return (neuron0x12de2e0()*0.0771923);
}

double NNfunction_sb_dRcR::synapse0x12f3b10() {
   return (neuron0x12de620()*0.674047);
}

double NNfunction_sb_dRcR::synapse0x12f35a0() {
   return (neuron0x12de960()*0.2819);
}

double NNfunction_sb_dRcR::synapse0x12f35e0() {
   return (neuron0x12deec0()*-0.977506);
}

double NNfunction_sb_dRcR::synapse0x12f3c60() {
   return (neuron0x12df0e0()*-0.160777);
}

double NNfunction_sb_dRcR::synapse0x12f3ca0() {
   return (neuron0x12df420()*-0.0512991);
}

double NNfunction_sb_dRcR::synapse0x12f3ce0() {
   return (neuron0x12df760()*-0.830636);
}

double NNfunction_sb_dRcR::synapse0x12f3d20() {
   return (neuron0x12dfaa0()*0.0830713);
}

double NNfunction_sb_dRcR::synapse0x12f3d60() {
   return (neuron0x12dfde0()*-0.384246);
}

double NNfunction_sb_dRcR::synapse0x12f3da0() {
   return (neuron0x12e0120()*-0.320933);
}

double NNfunction_sb_dRcR::synapse0x12f4120() {
   return (neuron0x12db560()*0.970105);
}

double NNfunction_sb_dRcR::synapse0x12f4160() {
   return (neuron0x12db8a0()*-1.11103);
}

double NNfunction_sb_dRcR::synapse0x12f41a0() {
   return (neuron0x12dbbe0()*-0.788778);
}

double NNfunction_sb_dRcR::synapse0x12f41e0() {
   return (neuron0x12dbf20()*0.827137);
}

double NNfunction_sb_dRcR::synapse0x12f4220() {
   return (neuron0x12dc260()*0.32437);
}

double NNfunction_sb_dRcR::synapse0x12f4260() {
   return (neuron0x12dc5a0()*-1.20388);
}

double NNfunction_sb_dRcR::synapse0x12f42a0() {
   return (neuron0x12dc8e0()*0.878324);
}

double NNfunction_sb_dRcR::synapse0x12f42e0() {
   return (neuron0x12dcc20()*-0.183494);
}

double NNfunction_sb_dRcR::synapse0x12f4320() {
   return (neuron0x12dcf60()*0.0682652);
}

double NNfunction_sb_dRcR::synapse0x12f4360() {
   return (neuron0x12dd2a0()*0.830887);
}

double NNfunction_sb_dRcR::synapse0x12f43a0() {
   return (neuron0x12dd5e0()*0.716265);
}

double NNfunction_sb_dRcR::synapse0x12f43e0() {
   return (neuron0x12dd920()*-0.126017);
}

double NNfunction_sb_dRcR::synapse0x12f4420() {
   return (neuron0x12ddc60()*0.349496);
}

double NNfunction_sb_dRcR::synapse0x12f4460() {
   return (neuron0x12ddfa0()*-0.0513339);
}

double NNfunction_sb_dRcR::synapse0x12f44a0() {
   return (neuron0x12de2e0()*-0.847013);
}

double NNfunction_sb_dRcR::synapse0x12f44e0() {
   return (neuron0x12de620()*-1.33734);
}

double NNfunction_sb_dRcR::synapse0x12f3f70() {
   return (neuron0x12de960()*-0.396489);
}

double NNfunction_sb_dRcR::synapse0x12f3fb0() {
   return (neuron0x12deec0()*-1.67443);
}

double NNfunction_sb_dRcR::synapse0x12f4630() {
   return (neuron0x12df0e0()*-0.490814);
}

double NNfunction_sb_dRcR::synapse0x12f4670() {
   return (neuron0x12df420()*0.952993);
}

double NNfunction_sb_dRcR::synapse0x12f46b0() {
   return (neuron0x12df760()*-0.241482);
}

double NNfunction_sb_dRcR::synapse0x12f46f0() {
   return (neuron0x12dfaa0()*0.317441);
}

double NNfunction_sb_dRcR::synapse0x12f4730() {
   return (neuron0x12dfde0()*0.0992549);
}

double NNfunction_sb_dRcR::synapse0x12f4770() {
   return (neuron0x12e0120()*-0.642534);
}

double NNfunction_sb_dRcR::synapse0x12f4af0() {
   return (neuron0x12db560()*0.370529);
}

double NNfunction_sb_dRcR::synapse0x12f4b30() {
   return (neuron0x12db8a0()*0.541001);
}

double NNfunction_sb_dRcR::synapse0x12f4b70() {
   return (neuron0x12dbbe0()*0.549107);
}

double NNfunction_sb_dRcR::synapse0x12f4bb0() {
   return (neuron0x12dbf20()*0.445646);
}

double NNfunction_sb_dRcR::synapse0x12f4bf0() {
   return (neuron0x12dc260()*-0.0951394);
}

double NNfunction_sb_dRcR::synapse0x12f4c30() {
   return (neuron0x12dc5a0()*0.259924);
}

double NNfunction_sb_dRcR::synapse0x12f4c70() {
   return (neuron0x12dc8e0()*-0.603919);
}

double NNfunction_sb_dRcR::synapse0x12f4cb0() {
   return (neuron0x12dcc20()*0.640243);
}

double NNfunction_sb_dRcR::synapse0x12f4cf0() {
   return (neuron0x12dcf60()*0.362807);
}

double NNfunction_sb_dRcR::synapse0x12f4d30() {
   return (neuron0x12dd2a0()*0.252734);
}

double NNfunction_sb_dRcR::synapse0x12f4d70() {
   return (neuron0x12dd5e0()*0.551429);
}

double NNfunction_sb_dRcR::synapse0x12f4db0() {
   return (neuron0x12dd920()*-0.633764);
}

double NNfunction_sb_dRcR::synapse0x12f4df0() {
   return (neuron0x12ddc60()*0.250577);
}

double NNfunction_sb_dRcR::synapse0x12f4e30() {
   return (neuron0x12ddfa0()*0.120037);
}

double NNfunction_sb_dRcR::synapse0x12f4e70() {
   return (neuron0x12de2e0()*-0.0869086);
}

double NNfunction_sb_dRcR::synapse0x12f4eb0() {
   return (neuron0x12de620()*-0.670791);
}

double NNfunction_sb_dRcR::synapse0x12f4940() {
   return (neuron0x12de960()*-0.456093);
}

double NNfunction_sb_dRcR::synapse0x12f4980() {
   return (neuron0x12deec0()*-0.726075);
}

double NNfunction_sb_dRcR::synapse0x12f5000() {
   return (neuron0x12df0e0()*1.40314);
}

double NNfunction_sb_dRcR::synapse0x12f5040() {
   return (neuron0x12df420()*-0.367825);
}

double NNfunction_sb_dRcR::synapse0x12f5080() {
   return (neuron0x12df760()*-0.0487567);
}

double NNfunction_sb_dRcR::synapse0x12f50c0() {
   return (neuron0x12dfaa0()*0.00934905);
}

double NNfunction_sb_dRcR::synapse0x12f5100() {
   return (neuron0x12dfde0()*0.186471);
}

double NNfunction_sb_dRcR::synapse0x12f5140() {
   return (neuron0x12e0120()*-0.824548);
}

double NNfunction_sb_dRcR::synapse0x12f54c0() {
   return (neuron0x12db560()*-0.0467348);
}

double NNfunction_sb_dRcR::synapse0x12f5500() {
   return (neuron0x12db8a0()*0.0939455);
}

double NNfunction_sb_dRcR::synapse0x12f5540() {
   return (neuron0x12dbbe0()*0.0280841);
}

double NNfunction_sb_dRcR::synapse0x12f5580() {
   return (neuron0x12dbf20()*-3.20865);
}

double NNfunction_sb_dRcR::synapse0x12f55c0() {
   return (neuron0x12dc260()*-0.013182);
}

double NNfunction_sb_dRcR::synapse0x12f5600() {
   return (neuron0x12dc5a0()*-0.0285926);
}

double NNfunction_sb_dRcR::synapse0x12f5640() {
   return (neuron0x12dc8e0()*0.0249247);
}

double NNfunction_sb_dRcR::synapse0x12f5680() {
   return (neuron0x12dcc20()*0.00220613);
}

double NNfunction_sb_dRcR::synapse0x12f56c0() {
   return (neuron0x12dcf60()*0.0505673);
}

double NNfunction_sb_dRcR::synapse0x12f5700() {
   return (neuron0x12dd2a0()*-0.056381);
}

double NNfunction_sb_dRcR::synapse0x12f5740() {
   return (neuron0x12dd5e0()*-0.0859028);
}

double NNfunction_sb_dRcR::synapse0x12f5780() {
   return (neuron0x12dd920()*-0.0126427);
}

double NNfunction_sb_dRcR::synapse0x12f57c0() {
   return (neuron0x12ddc60()*-0.145917);
}

double NNfunction_sb_dRcR::synapse0x12f5800() {
   return (neuron0x12ddfa0()*0.0574323);
}

double NNfunction_sb_dRcR::synapse0x12f5840() {
   return (neuron0x12de2e0()*0.00400028);
}

double NNfunction_sb_dRcR::synapse0x12f5880() {
   return (neuron0x12de620()*0.120705);
}

double NNfunction_sb_dRcR::synapse0x12f5310() {
   return (neuron0x12de960()*-0.00803616);
}

double NNfunction_sb_dRcR::synapse0x12f5350() {
   return (neuron0x12deec0()*0.116906);
}

double NNfunction_sb_dRcR::synapse0x12f59d0() {
   return (neuron0x12df0e0()*0.0364246);
}

double NNfunction_sb_dRcR::synapse0x12f5a10() {
   return (neuron0x12df420()*0.0216131);
}

double NNfunction_sb_dRcR::synapse0x12f5a50() {
   return (neuron0x12df760()*-0.0371789);
}

double NNfunction_sb_dRcR::synapse0x12f5a90() {
   return (neuron0x12dfaa0()*0.0189467);
}

double NNfunction_sb_dRcR::synapse0x12f5ad0() {
   return (neuron0x12dfde0()*0.0317038);
}

double NNfunction_sb_dRcR::synapse0x12f5b10() {
   return (neuron0x12e0120()*0.0637107);
}

double NNfunction_sb_dRcR::synapse0x12f5e90() {
   return (neuron0x12db560()*0.00390445);
}

double NNfunction_sb_dRcR::synapse0x12ea460() {
   return (neuron0x12db8a0()*0.0190584);
}

double NNfunction_sb_dRcR::synapse0x12ea4a0() {
   return (neuron0x12dbbe0()*-0.00604727);
}

double NNfunction_sb_dRcR::synapse0x12ea4e0() {
   return (neuron0x12dbf20()*1.7003);
}

double NNfunction_sb_dRcR::synapse0x12ea730() {
   return (neuron0x12dc260()*0.00408893);
}

double NNfunction_sb_dRcR::synapse0x12ea770() {
   return (neuron0x12dc5a0()*0.0108518);
}

double NNfunction_sb_dRcR::synapse0x12ea7b0() {
   return (neuron0x12dc8e0()*0.00745782);
}

double NNfunction_sb_dRcR::synapse0x12eaa00() {
   return (neuron0x12dcc20()*0.00532177);
}

double NNfunction_sb_dRcR::synapse0x12eaa40() {
   return (neuron0x12dcf60()*0.00742081);
}

double NNfunction_sb_dRcR::synapse0x12eac90() {
   return (neuron0x12dd2a0()*0.00167038);
}

double NNfunction_sb_dRcR::synapse0x12eacd0() {
   return (neuron0x12dd5e0()*-0.0238699);
}

double NNfunction_sb_dRcR::synapse0x12ead10() {
   return (neuron0x12dd920()*-0.0227297);
}

double NNfunction_sb_dRcR::synapse0x12eaf60() {
   return (neuron0x12ddc60()*0.0016861);
}

double NNfunction_sb_dRcR::synapse0x12eafa0() {
   return (neuron0x12ddfa0()*-0.00156446);
}

double NNfunction_sb_dRcR::synapse0x12eb1f0() {
   return (neuron0x12de2e0()*0.0047552);
}

double NNfunction_sb_dRcR::synapse0x12eb230() {
   return (neuron0x12de620()*-0.374749);
}

double NNfunction_sb_dRcR::synapse0x12f5ce0() {
   return (neuron0x12de960()*-0.0241767);
}

double NNfunction_sb_dRcR::synapse0x12f5d20() {
   return (neuron0x12deec0()*-0.392133);
}

double NNfunction_sb_dRcR::synapse0x12eb380() {
   return (neuron0x12df0e0()*0.00449713);
}

double NNfunction_sb_dRcR::synapse0x12eb890() {
   return (neuron0x12df420()*-0.00425936);
}

double NNfunction_sb_dRcR::synapse0x12eb8d0() {
   return (neuron0x12df760()*-0.0102145);
}

double NNfunction_sb_dRcR::synapse0x12eb910() {
   return (neuron0x12dfaa0()*-0.00738877);
}

double NNfunction_sb_dRcR::synapse0x12ebb60() {
   return (neuron0x12dfde0()*-0.00259329);
}

double NNfunction_sb_dRcR::synapse0x12ebba0() {
   return (neuron0x12e0120()*0.00497844);
}

double NNfunction_sb_dRcR::synapse0x12eb450() {
   return (neuron0x12db560()*0.180739);
}

double NNfunction_sb_dRcR::synapse0x12eb490() {
   return (neuron0x12db8a0()*-0.400704);
}

double NNfunction_sb_dRcR::synapse0x12eb4d0() {
   return (neuron0x12dbbe0()*-0.0318384);
}

double NNfunction_sb_dRcR::synapse0x12eb510() {
   return (neuron0x12dbf20()*-1.05858);
}

double NNfunction_sb_dRcR::synapse0x12ebe90() {
   return (neuron0x12dc260()*0.552432);
}

double NNfunction_sb_dRcR::synapse0x12f81e0() {
   return (neuron0x12dc5a0()*-0.0451496);
}

double NNfunction_sb_dRcR::synapse0x12f8220() {
   return (neuron0x12dc8e0()*0.643277);
}

double NNfunction_sb_dRcR::synapse0x12f8260() {
   return (neuron0x12dcc20()*-0.382335);
}

double NNfunction_sb_dRcR::synapse0x12f82a0() {
   return (neuron0x12dcf60()*-0.898399);
}

double NNfunction_sb_dRcR::synapse0x12f82e0() {
   return (neuron0x12dd2a0()*0.750036);
}

double NNfunction_sb_dRcR::synapse0x12f8320() {
   return (neuron0x12dd5e0()*-1.00854);
}

double NNfunction_sb_dRcR::synapse0x12f8360() {
   return (neuron0x12dd920()*-0.11051);
}

double NNfunction_sb_dRcR::synapse0x12f83a0() {
   return (neuron0x12ddc60()*-0.291996);
}

double NNfunction_sb_dRcR::synapse0x12f83e0() {
   return (neuron0x12ddfa0()*-0.0495843);
}

double NNfunction_sb_dRcR::synapse0x12f8420() {
   return (neuron0x12de2e0()*-0.778473);
}

double NNfunction_sb_dRcR::synapse0x12f8460() {
   return (neuron0x12de620()*-1.47727);
}

double NNfunction_sb_dRcR::synapse0x12ebd70() {
   return (neuron0x12de960()*-0.312824);
}

double NNfunction_sb_dRcR::synapse0x12ebdb0() {
   return (neuron0x12deec0()*-0.406882);
}

double NNfunction_sb_dRcR::synapse0x12f85b0() {
   return (neuron0x12df0e0()*-0.41608);
}

double NNfunction_sb_dRcR::synapse0x12f85f0() {
   return (neuron0x12df420()*0.188926);
}

double NNfunction_sb_dRcR::synapse0x12f8630() {
   return (neuron0x12df760()*0.803375);
}

double NNfunction_sb_dRcR::synapse0x12f8670() {
   return (neuron0x12dfaa0()*0.195177);
}

double NNfunction_sb_dRcR::synapse0x12f86b0() {
   return (neuron0x12dfde0()*-0.328299);
}

double NNfunction_sb_dRcR::synapse0x12f86f0() {
   return (neuron0x12e0120()*0.100419);
}

double NNfunction_sb_dRcR::synapse0x12f8a70() {
   return (neuron0x12db560()*-0.20379);
}

double NNfunction_sb_dRcR::synapse0x12f8ab0() {
   return (neuron0x12db8a0()*0.652469);
}

double NNfunction_sb_dRcR::synapse0x12f8af0() {
   return (neuron0x12dbbe0()*-0.226481);
}

double NNfunction_sb_dRcR::synapse0x12f8b30() {
   return (neuron0x12dbf20()*2.20951);
}

double NNfunction_sb_dRcR::synapse0x12f8b70() {
   return (neuron0x12dc260()*-0.0466183);
}

double NNfunction_sb_dRcR::synapse0x12f8bb0() {
   return (neuron0x12dc5a0()*-0.230365);
}

double NNfunction_sb_dRcR::synapse0x12f8bf0() {
   return (neuron0x12dc8e0()*0.0559682);
}

double NNfunction_sb_dRcR::synapse0x12f8c30() {
   return (neuron0x12dcc20()*0.14688);
}

double NNfunction_sb_dRcR::synapse0x12f8c70() {
   return (neuron0x12dcf60()*0.145042);
}

double NNfunction_sb_dRcR::synapse0x12f8cb0() {
   return (neuron0x12dd2a0()*0.204831);
}

double NNfunction_sb_dRcR::synapse0x12f8cf0() {
   return (neuron0x12dd5e0()*-0.36852);
}

double NNfunction_sb_dRcR::synapse0x12f8d30() {
   return (neuron0x12dd920()*0.698679);
}

double NNfunction_sb_dRcR::synapse0x12f8d70() {
   return (neuron0x12ddc60()*0.584306);
}

double NNfunction_sb_dRcR::synapse0x12f8db0() {
   return (neuron0x12ddfa0()*0.197953);
}

double NNfunction_sb_dRcR::synapse0x12f8df0() {
   return (neuron0x12de2e0()*-0.0584164);
}

double NNfunction_sb_dRcR::synapse0x12f8e30() {
   return (neuron0x12de620()*-0.0346934);
}

double NNfunction_sb_dRcR::synapse0x12f88c0() {
   return (neuron0x12de960()*0.0432873);
}

double NNfunction_sb_dRcR::synapse0x12f8900() {
   return (neuron0x12deec0()*-0.162484);
}

double NNfunction_sb_dRcR::synapse0x12f8f80() {
   return (neuron0x12df0e0()*0.124558);
}

double NNfunction_sb_dRcR::synapse0x12f8fc0() {
   return (neuron0x12df420()*-0.237257);
}

double NNfunction_sb_dRcR::synapse0x12f9000() {
   return (neuron0x12df760()*0.174659);
}

double NNfunction_sb_dRcR::synapse0x12f9040() {
   return (neuron0x12dfaa0()*-0.113293);
}

double NNfunction_sb_dRcR::synapse0x12f9080() {
   return (neuron0x12dfde0()*0.181026);
}

double NNfunction_sb_dRcR::synapse0x12f90c0() {
   return (neuron0x12e0120()*-0.119179);
}

double NNfunction_sb_dRcR::synapse0x12f9440() {
   return (neuron0x12db560()*-0.508056);
}

double NNfunction_sb_dRcR::synapse0x12f9480() {
   return (neuron0x12db8a0()*0.522334);
}

double NNfunction_sb_dRcR::synapse0x12f94c0() {
   return (neuron0x12dbbe0()*0.642177);
}

double NNfunction_sb_dRcR::synapse0x12f9500() {
   return (neuron0x12dbf20()*1.89404);
}

double NNfunction_sb_dRcR::synapse0x12f9540() {
   return (neuron0x12dc260()*-0.534518);
}

double NNfunction_sb_dRcR::synapse0x12f9580() {
   return (neuron0x12dc5a0()*0.427324);
}

double NNfunction_sb_dRcR::synapse0x12f95c0() {
   return (neuron0x12dc8e0()*-0.096134);
}

double NNfunction_sb_dRcR::synapse0x12f9600() {
   return (neuron0x12dcc20()*-1.30253);
}

double NNfunction_sb_dRcR::synapse0x12f9640() {
   return (neuron0x12dcf60()*0.629671);
}

double NNfunction_sb_dRcR::synapse0x12f9680() {
   return (neuron0x12dd2a0()*0.848573);
}

double NNfunction_sb_dRcR::synapse0x12f96c0() {
   return (neuron0x12dd5e0()*0.167286);
}

double NNfunction_sb_dRcR::synapse0x12f9700() {
   return (neuron0x12dd920()*0.493144);
}

double NNfunction_sb_dRcR::synapse0x12f9740() {
   return (neuron0x12ddc60()*-0.460337);
}

double NNfunction_sb_dRcR::synapse0x12f9780() {
   return (neuron0x12ddfa0()*0.43649);
}

double NNfunction_sb_dRcR::synapse0x12f97c0() {
   return (neuron0x12de2e0()*-0.127144);
}

double NNfunction_sb_dRcR::synapse0x12f9800() {
   return (neuron0x12de620()*0.517297);
}

double NNfunction_sb_dRcR::synapse0x12f9290() {
   return (neuron0x12de960()*0.136572);
}

double NNfunction_sb_dRcR::synapse0x12f92d0() {
   return (neuron0x12deec0()*1.03457);
}

double NNfunction_sb_dRcR::synapse0x12f9950() {
   return (neuron0x12df0e0()*-0.273302);
}

double NNfunction_sb_dRcR::synapse0x12f9990() {
   return (neuron0x12df420()*-0.877544);
}

double NNfunction_sb_dRcR::synapse0x12f99d0() {
   return (neuron0x12df760()*-0.252158);
}

double NNfunction_sb_dRcR::synapse0x12f9a10() {
   return (neuron0x12dfaa0()*-0.203832);
}

double NNfunction_sb_dRcR::synapse0x12f9a50() {
   return (neuron0x12dfde0()*-0.900314);
}

double NNfunction_sb_dRcR::synapse0x12f9a90() {
   return (neuron0x12e0120()*0.182637);
}

double NNfunction_sb_dRcR::synapse0x12f9e10() {
   return (neuron0x12db560()*-0.0029727);
}

double NNfunction_sb_dRcR::synapse0x12f9e50() {
   return (neuron0x12db8a0()*-0.0177011);
}

double NNfunction_sb_dRcR::synapse0x12f9e90() {
   return (neuron0x12dbbe0()*0.00381444);
}

double NNfunction_sb_dRcR::synapse0x12f9ed0() {
   return (neuron0x12dbf20()*-0.682888);
}

double NNfunction_sb_dRcR::synapse0x12f9f10() {
   return (neuron0x12dc260()*-0.0130527);
}

double NNfunction_sb_dRcR::synapse0x12f9f50() {
   return (neuron0x12dc5a0()*0.00231249);
}

double NNfunction_sb_dRcR::synapse0x12f9f90() {
   return (neuron0x12dc8e0()*0.00235461);
}

double NNfunction_sb_dRcR::synapse0x12f9fd0() {
   return (neuron0x12dcc20()*0.00680508);
}

double NNfunction_sb_dRcR::synapse0x12fa010() {
   return (neuron0x12dcf60()*0.0112827);
}

double NNfunction_sb_dRcR::synapse0x12fa050() {
   return (neuron0x12dd2a0()*0.00390185);
}

double NNfunction_sb_dRcR::synapse0x12fa090() {
   return (neuron0x12dd5e0()*0.0227737);
}

double NNfunction_sb_dRcR::synapse0x12fa0d0() {
   return (neuron0x12dd920()*0.0809768);
}

double NNfunction_sb_dRcR::synapse0x12fa110() {
   return (neuron0x12ddc60()*0.059789);
}

double NNfunction_sb_dRcR::synapse0x12fa150() {
   return (neuron0x12ddfa0()*-0.0153209);
}

double NNfunction_sb_dRcR::synapse0x12fa190() {
   return (neuron0x12de2e0()*0.0243482);
}

double NNfunction_sb_dRcR::synapse0x12fa1d0() {
   return (neuron0x12de620()*-0.673461);
}

double NNfunction_sb_dRcR::synapse0x12f9c60() {
   return (neuron0x12de960()*-0.0151331);
}

double NNfunction_sb_dRcR::synapse0x12f9ca0() {
   return (neuron0x12deec0()*-0.596583);
}

double NNfunction_sb_dRcR::synapse0x12fa320() {
   return (neuron0x12df0e0()*0.0317569);
}

double NNfunction_sb_dRcR::synapse0x12fa360() {
   return (neuron0x12df420()*-0.00846809);
}

double NNfunction_sb_dRcR::synapse0x12fa3a0() {
   return (neuron0x12df760()*-0.00512398);
}

double NNfunction_sb_dRcR::synapse0x12fa3e0() {
   return (neuron0x12dfaa0()*-0.00705774);
}

double NNfunction_sb_dRcR::synapse0x12fa420() {
   return (neuron0x12dfde0()*-0.00786362);
}

double NNfunction_sb_dRcR::synapse0x12fa460() {
   return (neuron0x12e0120()*0.00374511);
}

double NNfunction_sb_dRcR::synapse0x12fa7e0() {
   return (neuron0x12db560()*0.707304);
}

double NNfunction_sb_dRcR::synapse0x12fa820() {
   return (neuron0x12db8a0()*-1.29662);
}

double NNfunction_sb_dRcR::synapse0x12fa860() {
   return (neuron0x12dbbe0()*0.324717);
}

double NNfunction_sb_dRcR::synapse0x12fa8a0() {
   return (neuron0x12dbf20()*-0.635347);
}

double NNfunction_sb_dRcR::synapse0x12fa8e0() {
   return (neuron0x12dc260()*-0.847249);
}

double NNfunction_sb_dRcR::synapse0x12fa920() {
   return (neuron0x12dc5a0()*0.411276);
}

double NNfunction_sb_dRcR::synapse0x12fa960() {
   return (neuron0x12dc8e0()*-0.0610822);
}

double NNfunction_sb_dRcR::synapse0x12fa9a0() {
   return (neuron0x12dcc20()*-0.793564);
}

double NNfunction_sb_dRcR::synapse0x12fa9e0() {
   return (neuron0x12dcf60()*-0.0508204);
}

double NNfunction_sb_dRcR::synapse0x12faa20() {
   return (neuron0x12dd2a0()*0.638456);
}

double NNfunction_sb_dRcR::synapse0x12faa60() {
   return (neuron0x12dd5e0()*0.394143);
}

double NNfunction_sb_dRcR::synapse0x12faaa0() {
   return (neuron0x12dd920()*0.280495);
}

double NNfunction_sb_dRcR::synapse0x12faae0() {
   return (neuron0x12ddc60()*0.577185);
}

double NNfunction_sb_dRcR::synapse0x12fab20() {
   return (neuron0x12ddfa0()*0.391231);
}

double NNfunction_sb_dRcR::synapse0x12fab60() {
   return (neuron0x12de2e0()*0.524666);
}

double NNfunction_sb_dRcR::synapse0x12faba0() {
   return (neuron0x12de620()*0.211009);
}

double NNfunction_sb_dRcR::synapse0x12fa630() {
   return (neuron0x12de960()*0.256178);
}

double NNfunction_sb_dRcR::synapse0x12fa670() {
   return (neuron0x12deec0()*0.408397);
}

double NNfunction_sb_dRcR::synapse0x12facf0() {
   return (neuron0x12df0e0()*0.678487);
}

double NNfunction_sb_dRcR::synapse0x12fad30() {
   return (neuron0x12df420()*-0.911196);
}

double NNfunction_sb_dRcR::synapse0x12fad70() {
   return (neuron0x12df760()*-0.132219);
}

double NNfunction_sb_dRcR::synapse0x12fadb0() {
   return (neuron0x12dfaa0()*0.122182);
}

double NNfunction_sb_dRcR::synapse0x12fadf0() {
   return (neuron0x12dfde0()*0.120022);
}

double NNfunction_sb_dRcR::synapse0x12fae30() {
   return (neuron0x12e0120()*0.255451);
}

double NNfunction_sb_dRcR::synapse0x12fb1b0() {
   return (neuron0x12db560()*-0.584575);
}

double NNfunction_sb_dRcR::synapse0x12fb1f0() {
   return (neuron0x12db8a0()*0.0903151);
}

double NNfunction_sb_dRcR::synapse0x12fb230() {
   return (neuron0x12dbbe0()*-0.0482734);
}

double NNfunction_sb_dRcR::synapse0x12fb270() {
   return (neuron0x12dbf20()*-0.0075353);
}

double NNfunction_sb_dRcR::synapse0x12fb2b0() {
   return (neuron0x12dc260()*1.20628);
}

double NNfunction_sb_dRcR::synapse0x12fb2f0() {
   return (neuron0x12dc5a0()*0.385966);
}

double NNfunction_sb_dRcR::synapse0x12fb330() {
   return (neuron0x12dc8e0()*-0.434782);
}

double NNfunction_sb_dRcR::synapse0x12fb370() {
   return (neuron0x12dcc20()*0.0186451);
}

double NNfunction_sb_dRcR::synapse0x12fb3b0() {
   return (neuron0x12dcf60()*0.189951);
}

double NNfunction_sb_dRcR::synapse0x12fb3f0() {
   return (neuron0x12dd2a0()*1.65003);
}

double NNfunction_sb_dRcR::synapse0x12fb430() {
   return (neuron0x12dd5e0()*0.325053);
}

double NNfunction_sb_dRcR::synapse0x12fb470() {
   return (neuron0x12dd920()*1.17739);
}

double NNfunction_sb_dRcR::synapse0x12fb4b0() {
   return (neuron0x12ddc60()*0.183711);
}

double NNfunction_sb_dRcR::synapse0x12fb4f0() {
   return (neuron0x12ddfa0()*0.0630754);
}

double NNfunction_sb_dRcR::synapse0x12fb530() {
   return (neuron0x12de2e0()*0.727033);
}

double NNfunction_sb_dRcR::synapse0x12fb570() {
   return (neuron0x12de620()*1.75221);
}

double NNfunction_sb_dRcR::synapse0x12fb000() {
   return (neuron0x12de960()*0.0901526);
}

double NNfunction_sb_dRcR::synapse0x12fb040() {
   return (neuron0x12deec0()*0.162634);
}

double NNfunction_sb_dRcR::synapse0x12fb6c0() {
   return (neuron0x12df0e0()*-0.327198);
}

double NNfunction_sb_dRcR::synapse0x12fb700() {
   return (neuron0x12df420()*-0.159655);
}

double NNfunction_sb_dRcR::synapse0x12fb740() {
   return (neuron0x12df760()*-0.135334);
}

double NNfunction_sb_dRcR::synapse0x12fb780() {
   return (neuron0x12dfaa0()*0.0491264);
}

double NNfunction_sb_dRcR::synapse0x12fb7c0() {
   return (neuron0x12dfde0()*0.63965);
}

double NNfunction_sb_dRcR::synapse0x12fb800() {
   return (neuron0x12e0120()*0.243118);
}

double NNfunction_sb_dRcR::synapse0x12fbb80() {
   return (neuron0x12db560()*-0.105897);
}

double NNfunction_sb_dRcR::synapse0x12fbbc0() {
   return (neuron0x12db8a0()*-0.0224391);
}

double NNfunction_sb_dRcR::synapse0x12fbc00() {
   return (neuron0x12dbbe0()*0.131555);
}

double NNfunction_sb_dRcR::synapse0x12fbc40() {
   return (neuron0x12dbf20()*1.03408);
}

double NNfunction_sb_dRcR::synapse0x12fbc80() {
   return (neuron0x12dc260()*-0.282401);
}

double NNfunction_sb_dRcR::synapse0x12fbcc0() {
   return (neuron0x12dc5a0()*-0.0250196);
}

double NNfunction_sb_dRcR::synapse0x12fbd00() {
   return (neuron0x12dc8e0()*0.686371);
}

double NNfunction_sb_dRcR::synapse0x12fbd40() {
   return (neuron0x12dcc20()*-0.671569);
}

double NNfunction_sb_dRcR::synapse0x12fbd80() {
   return (neuron0x12dcf60()*-0.169369);
}

double NNfunction_sb_dRcR::synapse0x12fbdc0() {
   return (neuron0x12dd2a0()*-0.191495);
}

double NNfunction_sb_dRcR::synapse0x12fbe00() {
   return (neuron0x12dd5e0()*0.131716);
}

double NNfunction_sb_dRcR::synapse0x12fbe40() {
   return (neuron0x12dd920()*0.131518);
}

double NNfunction_sb_dRcR::synapse0x12fbe80() {
   return (neuron0x12ddc60()*0.529302);
}

double NNfunction_sb_dRcR::synapse0x12fbec0() {
   return (neuron0x12ddfa0()*-0.00748495);
}

double NNfunction_sb_dRcR::synapse0x12fbf00() {
   return (neuron0x12de2e0()*-0.211368);
}

double NNfunction_sb_dRcR::synapse0x12fbf40() {
   return (neuron0x12de620()*0.0580056);
}

double NNfunction_sb_dRcR::synapse0x12fb9d0() {
   return (neuron0x12de960()*0.0951456);
}

double NNfunction_sb_dRcR::synapse0x12fba10() {
   return (neuron0x12deec0()*0.138014);
}

double NNfunction_sb_dRcR::synapse0x12fc090() {
   return (neuron0x12df0e0()*0.154691);
}

double NNfunction_sb_dRcR::synapse0x12fc0d0() {
   return (neuron0x12df420()*0.222298);
}

double NNfunction_sb_dRcR::synapse0x12fc110() {
   return (neuron0x12df760()*0.213317);
}

double NNfunction_sb_dRcR::synapse0x12fc150() {
   return (neuron0x12dfaa0()*-0.16606);
}

double NNfunction_sb_dRcR::synapse0x12fc190() {
   return (neuron0x12dfde0()*0.0835642);
}

double NNfunction_sb_dRcR::synapse0x12fc1d0() {
   return (neuron0x12e0120()*0.0541262);
}

double NNfunction_sb_dRcR::synapse0x12fc550() {
   return (neuron0x12db560()*-0.833106);
}

double NNfunction_sb_dRcR::synapse0x12fc590() {
   return (neuron0x12db8a0()*1.31625);
}

double NNfunction_sb_dRcR::synapse0x12fc5d0() {
   return (neuron0x12dbbe0()*0.489929);
}

double NNfunction_sb_dRcR::synapse0x12fc610() {
   return (neuron0x12dbf20()*-0.640813);
}

double NNfunction_sb_dRcR::synapse0x12fc650() {
   return (neuron0x12dc260()*0.233143);
}

double NNfunction_sb_dRcR::synapse0x12fc690() {
   return (neuron0x12dc5a0()*0.623234);
}

double NNfunction_sb_dRcR::synapse0x12fc6d0() {
   return (neuron0x12dc8e0()*0.157926);
}

double NNfunction_sb_dRcR::synapse0x12fc710() {
   return (neuron0x12dcc20()*-0.484769);
}

double NNfunction_sb_dRcR::synapse0x12fc750() {
   return (neuron0x12dcf60()*-0.677989);
}

double NNfunction_sb_dRcR::synapse0x12fc790() {
   return (neuron0x12dd2a0()*-0.0135979);
}

double NNfunction_sb_dRcR::synapse0x12fc7d0() {
   return (neuron0x12dd5e0()*-0.221211);
}

double NNfunction_sb_dRcR::synapse0x12fc810() {
   return (neuron0x12dd920()*-0.375989);
}

double NNfunction_sb_dRcR::synapse0x12fc850() {
   return (neuron0x12ddc60()*-0.145313);
}

double NNfunction_sb_dRcR::synapse0x12fc890() {
   return (neuron0x12ddfa0()*0.509493);
}

double NNfunction_sb_dRcR::synapse0x12fc8d0() {
   return (neuron0x12de2e0()*-0.66812);
}

double NNfunction_sb_dRcR::synapse0x12fc910() {
   return (neuron0x12de620()*-0.156846);
}

double NNfunction_sb_dRcR::synapse0x12fc3a0() {
   return (neuron0x12de960()*-1.39129);
}

double NNfunction_sb_dRcR::synapse0x12fc3e0() {
   return (neuron0x12deec0()*-0.637824);
}

double NNfunction_sb_dRcR::synapse0x12fca60() {
   return (neuron0x12df0e0()*-0.761456);
}

double NNfunction_sb_dRcR::synapse0x12fcaa0() {
   return (neuron0x12df420()*0.612989);
}

double NNfunction_sb_dRcR::synapse0x12fcae0() {
   return (neuron0x12df760()*-0.585634);
}

double NNfunction_sb_dRcR::synapse0x12fcb20() {
   return (neuron0x12dfaa0()*-0.0308423);
}

double NNfunction_sb_dRcR::synapse0x12fcb60() {
   return (neuron0x12dfde0()*-0.993698);
}

double NNfunction_sb_dRcR::synapse0x12fcba0() {
   return (neuron0x12e0120()*-0.288571);
}

double NNfunction_sb_dRcR::synapse0x12e5650() {
   return (neuron0x12db560()*-0.135985);
}

double NNfunction_sb_dRcR::synapse0x12e5690() {
   return (neuron0x12db8a0()*0.788192);
}

double NNfunction_sb_dRcR::synapse0x12e56d0() {
   return (neuron0x12dbbe0()*0.374176);
}

double NNfunction_sb_dRcR::synapse0x12e5710() {
   return (neuron0x12dbf20()*-2.61302);
}

double NNfunction_sb_dRcR::synapse0x12e5750() {
   return (neuron0x12dc260()*-0.00962142);
}

double NNfunction_sb_dRcR::synapse0x12e5790() {
   return (neuron0x12dc5a0()*0.110277);
}

double NNfunction_sb_dRcR::synapse0x12e57d0() {
   return (neuron0x12dc8e0()*-0.131969);
}

double NNfunction_sb_dRcR::synapse0x12e5810() {
   return (neuron0x12dcc20()*-0.0739617);
}

double NNfunction_sb_dRcR::synapse0x12fd330() {
   return (neuron0x12dcf60()*0.0178173);
}

double NNfunction_sb_dRcR::synapse0x12fd370() {
   return (neuron0x12dd2a0()*0.230941);
}

double NNfunction_sb_dRcR::synapse0x12fd3b0() {
   return (neuron0x12dd5e0()*0.182881);
}

double NNfunction_sb_dRcR::synapse0x12fd3f0() {
   return (neuron0x12dd920()*0.233859);
}

double NNfunction_sb_dRcR::synapse0x12fd430() {
   return (neuron0x12ddc60()*0.157254);
}

double NNfunction_sb_dRcR::synapse0x12fd470() {
   return (neuron0x12ddfa0()*0.343341);
}

double NNfunction_sb_dRcR::synapse0x12fd4b0() {
   return (neuron0x12de2e0()*-0.0529717);
}

double NNfunction_sb_dRcR::synapse0x12fd4f0() {
   return (neuron0x12de620()*0.821331);
}

double NNfunction_sb_dRcR::synapse0x12fcd70() {
   return (neuron0x12de960()*0.0687643);
}

double NNfunction_sb_dRcR::synapse0x12fcdb0() {
   return (neuron0x12deec0()*0.297288);
}

double NNfunction_sb_dRcR::synapse0x12fd640() {
   return (neuron0x12df0e0()*-0.0387761);
}

double NNfunction_sb_dRcR::synapse0x12fd680() {
   return (neuron0x12df420()*-0.178549);
}

double NNfunction_sb_dRcR::synapse0x12fd6c0() {
   return (neuron0x12df760()*-0.222643);
}

double NNfunction_sb_dRcR::synapse0x12fd700() {
   return (neuron0x12dfaa0()*-0.267919);
}

double NNfunction_sb_dRcR::synapse0x12fd740() {
   return (neuron0x12dfde0()*-0.083501);
}

double NNfunction_sb_dRcR::synapse0x12fd780() {
   return (neuron0x12e0120()*-0.22911);
}

double NNfunction_sb_dRcR::synapse0x12fdb00() {
   return (neuron0x12db560()*-0.357236);
}

double NNfunction_sb_dRcR::synapse0x12fdb40() {
   return (neuron0x12db8a0()*0.42952);
}

double NNfunction_sb_dRcR::synapse0x12fdb80() {
   return (neuron0x12dbbe0()*0.160416);
}

double NNfunction_sb_dRcR::synapse0x12fdbc0() {
   return (neuron0x12dbf20()*1.15173);
}

double NNfunction_sb_dRcR::synapse0x12fdc00() {
   return (neuron0x12dc260()*-0.110924);
}

double NNfunction_sb_dRcR::synapse0x12fdc40() {
   return (neuron0x12dc5a0()*-0.232067);
}

double NNfunction_sb_dRcR::synapse0x12fdc80() {
   return (neuron0x12dc8e0()*-0.04906);
}

double NNfunction_sb_dRcR::synapse0x12fdcc0() {
   return (neuron0x12dcc20()*-0.262549);
}

double NNfunction_sb_dRcR::synapse0x12fdd00() {
   return (neuron0x12dcf60()*-0.434865);
}

double NNfunction_sb_dRcR::synapse0x12fdd40() {
   return (neuron0x12dd2a0()*-0.0828076);
}

double NNfunction_sb_dRcR::synapse0x12fdd80() {
   return (neuron0x12dd5e0()*-0.105723);
}

double NNfunction_sb_dRcR::synapse0x12fddc0() {
   return (neuron0x12dd920()*-0.49993);
}

double NNfunction_sb_dRcR::synapse0x12fde00() {
   return (neuron0x12ddc60()*-0.206631);
}

double NNfunction_sb_dRcR::synapse0x12fde40() {
   return (neuron0x12ddfa0()*-0.109547);
}

double NNfunction_sb_dRcR::synapse0x12fde80() {
   return (neuron0x12de2e0()*0.0121984);
}

double NNfunction_sb_dRcR::synapse0x12fdec0() {
   return (neuron0x12de620()*0.122324);
}

double NNfunction_sb_dRcR::synapse0x12fd950() {
   return (neuron0x12de960()*0.1811);
}

double NNfunction_sb_dRcR::synapse0x12fd990() {
   return (neuron0x12deec0()*-0.228456);
}

double NNfunction_sb_dRcR::synapse0x12fe010() {
   return (neuron0x12df0e0()*-0.169147);
}

double NNfunction_sb_dRcR::synapse0x12fe050() {
   return (neuron0x12df420()*-0.0507438);
}

double NNfunction_sb_dRcR::synapse0x12fe090() {
   return (neuron0x12df760()*0.159664);
}

double NNfunction_sb_dRcR::synapse0x12fe0d0() {
   return (neuron0x12dfaa0()*0.160174);
}

double NNfunction_sb_dRcR::synapse0x12fe110() {
   return (neuron0x12dfde0()*0.0347797);
}

double NNfunction_sb_dRcR::synapse0x12fe150() {
   return (neuron0x12e0120()*-0.141188);
}

double NNfunction_sb_dRcR::synapse0x12fe4d0() {
   return (neuron0x12db560()*-0.0937621);
}

double NNfunction_sb_dRcR::synapse0x12fe510() {
   return (neuron0x12db8a0()*0.0405845);
}

double NNfunction_sb_dRcR::synapse0x12fe550() {
   return (neuron0x12dbbe0()*-0.0437547);
}

double NNfunction_sb_dRcR::synapse0x12fe590() {
   return (neuron0x12dbf20()*-0.758485);
}

double NNfunction_sb_dRcR::synapse0x12fe5d0() {
   return (neuron0x12dc260()*0.00433773);
}

double NNfunction_sb_dRcR::synapse0x12fe610() {
   return (neuron0x12dc5a0()*-0.0436064);
}

double NNfunction_sb_dRcR::synapse0x12fe650() {
   return (neuron0x12dc8e0()*-0.0587479);
}

double NNfunction_sb_dRcR::synapse0x12fe690() {
   return (neuron0x12dcc20()*-0.0180925);
}

double NNfunction_sb_dRcR::synapse0x12fe6d0() {
   return (neuron0x12dcf60()*0.0167443);
}

double NNfunction_sb_dRcR::synapse0x12fe710() {
   return (neuron0x12dd2a0()*-0.055193);
}

double NNfunction_sb_dRcR::synapse0x12fe750() {
   return (neuron0x12dd5e0()*-0.0246171);
}

double NNfunction_sb_dRcR::synapse0x12fe790() {
   return (neuron0x12dd920()*-0.0971033);
}

double NNfunction_sb_dRcR::synapse0x12fe7d0() {
   return (neuron0x12ddc60()*-0.0174982);
}

double NNfunction_sb_dRcR::synapse0x12fe810() {
   return (neuron0x12ddfa0()*0.0241445);
}

double NNfunction_sb_dRcR::synapse0x12fe850() {
   return (neuron0x12de2e0()*-0.0101113);
}

double NNfunction_sb_dRcR::synapse0x12fe890() {
   return (neuron0x12de620()*1.40554);
}

double NNfunction_sb_dRcR::synapse0x12fe320() {
   return (neuron0x12de960()*0.0919662);
}

double NNfunction_sb_dRcR::synapse0x12fe360() {
   return (neuron0x12deec0()*1.95779);
}

double NNfunction_sb_dRcR::synapse0x12eee90() {
   return (neuron0x12df0e0()*0.0103911);
}

double NNfunction_sb_dRcR::synapse0x12eeed0() {
   return (neuron0x12df420()*0.207207);
}

double NNfunction_sb_dRcR::synapse0x12eef10() {
   return (neuron0x12df760()*-0.00765946);
}

double NNfunction_sb_dRcR::synapse0x12eef50() {
   return (neuron0x12dfaa0()*0.00973986);
}

double NNfunction_sb_dRcR::synapse0x12eef90() {
   return (neuron0x12dfde0()*-0.0427675);
}

double NNfunction_sb_dRcR::synapse0x12eefd0() {
   return (neuron0x12e0120()*0.0616353);
}

double NNfunction_sb_dRcR::synapse0x12ef350() {
   return (neuron0x12db560()*0.00976812);
}

double NNfunction_sb_dRcR::synapse0x12ef390() {
   return (neuron0x12db8a0()*0.416838);
}

double NNfunction_sb_dRcR::synapse0x12ef3d0() {
   return (neuron0x12dbbe0()*-0.356939);
}

double NNfunction_sb_dRcR::synapse0x12ef410() {
   return (neuron0x12dbf20()*1.00129);
}

double NNfunction_sb_dRcR::synapse0x12ef450() {
   return (neuron0x12dc260()*-0.146693);
}

double NNfunction_sb_dRcR::synapse0x12ef490() {
   return (neuron0x12dc5a0()*0.44389);
}

double NNfunction_sb_dRcR::synapse0x12ef4d0() {
   return (neuron0x12dc8e0()*-0.075947);
}

double NNfunction_sb_dRcR::synapse0x12ef510() {
   return (neuron0x12dcc20()*0.17328);
}

double NNfunction_sb_dRcR::synapse0x12ef550() {
   return (neuron0x12dcf60()*-0.0356223);
}

double NNfunction_sb_dRcR::synapse0x12ef590() {
   return (neuron0x12dd2a0()*0.334416);
}

double NNfunction_sb_dRcR::synapse0x12ef5d0() {
   return (neuron0x12dd5e0()*-0.507083);
}

double NNfunction_sb_dRcR::synapse0x12ef610() {
   return (neuron0x12dd920()*-1.73492);
}

double NNfunction_sb_dRcR::synapse0x12ef650() {
   return (neuron0x12ddc60()*-0.0592249);
}

double NNfunction_sb_dRcR::synapse0x12ef690() {
   return (neuron0x12ddfa0()*0.307825);
}

double NNfunction_sb_dRcR::synapse0x12ef6d0() {
   return (neuron0x12de2e0()*0.0838842);
}

double NNfunction_sb_dRcR::synapse0x12ef710() {
   return (neuron0x12de620()*-0.309075);
}

double NNfunction_sb_dRcR::synapse0x12ef1a0() {
   return (neuron0x12de960()*0.1825);
}

double NNfunction_sb_dRcR::synapse0x12ef1e0() {
   return (neuron0x12deec0()*0.2994);
}

double NNfunction_sb_dRcR::synapse0x12ef860() {
   return (neuron0x12df0e0()*0.190499);
}

double NNfunction_sb_dRcR::synapse0x12ef8a0() {
   return (neuron0x12df420()*0.152454);
}

double NNfunction_sb_dRcR::synapse0x12ef8e0() {
   return (neuron0x12df760()*-0.467544);
}

double NNfunction_sb_dRcR::synapse0x12ef920() {
   return (neuron0x12dfaa0()*-0.342506);
}

double NNfunction_sb_dRcR::synapse0x12ef960() {
   return (neuron0x12dfde0()*0.0595046);
}

double NNfunction_sb_dRcR::synapse0x12ef9a0() {
   return (neuron0x12e0120()*-0.0232982);
}

double NNfunction_sb_dRcR::synapse0x12efd20() {
   return (neuron0x12db560()*0.0578158);
}

double NNfunction_sb_dRcR::synapse0x12efd60() {
   return (neuron0x12db8a0()*-0.0449061);
}

double NNfunction_sb_dRcR::synapse0x12efda0() {
   return (neuron0x12dbbe0()*-0.0171345);
}

double NNfunction_sb_dRcR::synapse0x12efde0() {
   return (neuron0x12dbf20()*8.11419);
}

double NNfunction_sb_dRcR::synapse0x12efe20() {
   return (neuron0x12dc260()*0.0167554);
}

double NNfunction_sb_dRcR::synapse0x12efe60() {
   return (neuron0x12dc5a0()*0.0231407);
}

double NNfunction_sb_dRcR::synapse0x12efea0() {
   return (neuron0x12dc8e0()*0.0363941);
}

double NNfunction_sb_dRcR::synapse0x12efee0() {
   return (neuron0x12dcc20()*-0.0432476);
}

double NNfunction_sb_dRcR::synapse0x12eff20() {
   return (neuron0x12dcf60()*0.03295);
}

double NNfunction_sb_dRcR::synapse0x12eff60() {
   return (neuron0x12dd2a0()*-0.0274438);
}

double NNfunction_sb_dRcR::synapse0x12effa0() {
   return (neuron0x12dd5e0()*-0.0180897);
}

double NNfunction_sb_dRcR::synapse0x12effe0() {
   return (neuron0x12dd920()*0.0331514);
}

double NNfunction_sb_dRcR::synapse0x12f0020() {
   return (neuron0x12ddc60()*-0.160392);
}

double NNfunction_sb_dRcR::synapse0x12f0060() {
   return (neuron0x12ddfa0()*0.0386781);
}

double NNfunction_sb_dRcR::synapse0x12f00a0() {
   return (neuron0x12de2e0()*-0.0428096);
}

double NNfunction_sb_dRcR::synapse0x12f00e0() {
   return (neuron0x12de620()*1.05732);
}

double NNfunction_sb_dRcR::synapse0x12efb70() {
   return (neuron0x12de960()*0.0562998);
}

double NNfunction_sb_dRcR::synapse0x12efbb0() {
   return (neuron0x12deec0()*1.15611);
}

double NNfunction_sb_dRcR::synapse0x12f0230() {
   return (neuron0x12df0e0()*-0.0160391);
}

double NNfunction_sb_dRcR::synapse0x12f0270() {
   return (neuron0x12df420()*0.0177405);
}

double NNfunction_sb_dRcR::synapse0x12f02b0() {
   return (neuron0x12df760()*-0.0761796);
}

double NNfunction_sb_dRcR::synapse0x12f02f0() {
   return (neuron0x12dfaa0()*0.0147982);
}

double NNfunction_sb_dRcR::synapse0x12f0330() {
   return (neuron0x12dfde0()*0.0292187);
}

double NNfunction_sb_dRcR::synapse0x12f0370() {
   return (neuron0x12e0120()*0.0376326);
}

double NNfunction_sb_dRcR::synapse0x12f06f0() {
   return (neuron0x12db560()*0.570777);
}

double NNfunction_sb_dRcR::synapse0x12f0730() {
   return (neuron0x12db8a0()*1.10061);
}

double NNfunction_sb_dRcR::synapse0x12f0770() {
   return (neuron0x12dbbe0()*0.563296);
}

double NNfunction_sb_dRcR::synapse0x12f07b0() {
   return (neuron0x12dbf20()*0.867213);
}

double NNfunction_sb_dRcR::synapse0x12f07f0() {
   return (neuron0x12dc260()*0.436719);
}

double NNfunction_sb_dRcR::synapse0x12f0830() {
   return (neuron0x12dc5a0()*-0.14034);
}

double NNfunction_sb_dRcR::synapse0x12f0870() {
   return (neuron0x12dc8e0()*-0.318522);
}

double NNfunction_sb_dRcR::synapse0x12f08b0() {
   return (neuron0x12dcc20()*-0.667638);
}

double NNfunction_sb_dRcR::synapse0x12f08f0() {
   return (neuron0x12dcf60()*-0.589343);
}

double NNfunction_sb_dRcR::synapse0x12f0930() {
   return (neuron0x12dd2a0()*-0.173893);
}

double NNfunction_sb_dRcR::synapse0x12f0970() {
   return (neuron0x12dd5e0()*0.0167289);
}

double NNfunction_sb_dRcR::synapse0x12f09b0() {
   return (neuron0x12dd920()*-0.302485);
}

double NNfunction_sb_dRcR::synapse0x12f09f0() {
   return (neuron0x12ddc60()*-1.52306);
}

double NNfunction_sb_dRcR::synapse0x12f0a30() {
   return (neuron0x12ddfa0()*-0.287957);
}

double NNfunction_sb_dRcR::synapse0x12f0a70() {
   return (neuron0x12de2e0()*0.611498);
}

double NNfunction_sb_dRcR::synapse0x12f0ab0() {
   return (neuron0x12de620()*-0.160417);
}

double NNfunction_sb_dRcR::synapse0x12f0540() {
   return (neuron0x12de960()*0.127687);
}

double NNfunction_sb_dRcR::synapse0x12f0580() {
   return (neuron0x12deec0()*0.193624);
}

double NNfunction_sb_dRcR::synapse0x12f0c00() {
   return (neuron0x12df0e0()*0.516125);
}

double NNfunction_sb_dRcR::synapse0x12f0c40() {
   return (neuron0x12df420()*-0.302191);
}

double NNfunction_sb_dRcR::synapse0x12f0c80() {
   return (neuron0x12df760()*0.887352);
}

double NNfunction_sb_dRcR::synapse0x12f0cc0() {
   return (neuron0x12dfaa0()*0.054317);
}

double NNfunction_sb_dRcR::synapse0x12f0d00() {
   return (neuron0x12dfde0()*0.213111);
}

double NNfunction_sb_dRcR::synapse0x12f0d40() {
   return (neuron0x12e0120()*-0.605717);
}

double NNfunction_sb_dRcR::synapse0x1302c10() {
   return (neuron0x12db560()*0.238339);
}

double NNfunction_sb_dRcR::synapse0x1302c50() {
   return (neuron0x12db8a0()*-0.181063);
}

double NNfunction_sb_dRcR::synapse0x1302c90() {
   return (neuron0x12dbbe0()*0.410294);
}

double NNfunction_sb_dRcR::synapse0x1302cd0() {
   return (neuron0x12dbf20()*0.385228);
}

double NNfunction_sb_dRcR::synapse0x1302d10() {
   return (neuron0x12dc260()*-0.885761);
}

double NNfunction_sb_dRcR::synapse0x1302d50() {
   return (neuron0x12dc5a0()*0.196406);
}

double NNfunction_sb_dRcR::synapse0x1302d90() {
   return (neuron0x12dc8e0()*-0.74372);
}

double NNfunction_sb_dRcR::synapse0x1302dd0() {
   return (neuron0x12dcc20()*0.862699);
}

double NNfunction_sb_dRcR::synapse0x1302e10() {
   return (neuron0x12dcf60()*1.22552);
}

double NNfunction_sb_dRcR::synapse0x1302e50() {
   return (neuron0x12dd2a0()*0.112005);
}

double NNfunction_sb_dRcR::synapse0x1302e90() {
   return (neuron0x12dd5e0()*-0.525943);
}

double NNfunction_sb_dRcR::synapse0x1302ed0() {
   return (neuron0x12dd920()*0.132643);
}

double NNfunction_sb_dRcR::synapse0x1302f10() {
   return (neuron0x12ddc60()*-1.61677);
}

double NNfunction_sb_dRcR::synapse0x1302f50() {
   return (neuron0x12ddfa0()*0.238488);
}

double NNfunction_sb_dRcR::synapse0x1302f90() {
   return (neuron0x12de2e0()*-0.923757);
}

double NNfunction_sb_dRcR::synapse0x1302fd0() {
   return (neuron0x12de620()*-0.531494);
}

double NNfunction_sb_dRcR::synapse0x12f0d80() {
   return (neuron0x12de960()*-0.223509);
}

double NNfunction_sb_dRcR::synapse0x12f0dc0() {
   return (neuron0x12deec0()*1.28784);
}

double NNfunction_sb_dRcR::synapse0x1303120() {
   return (neuron0x12df0e0()*-1.07714);
}

double NNfunction_sb_dRcR::synapse0x1303160() {
   return (neuron0x12df420()*0.262857);
}

double NNfunction_sb_dRcR::synapse0x13031a0() {
   return (neuron0x12df760()*-0.23307);
}

double NNfunction_sb_dRcR::synapse0x13031e0() {
   return (neuron0x12dfaa0()*-0.209705);
}

double NNfunction_sb_dRcR::synapse0x1303220() {
   return (neuron0x12dfde0()*0.440257);
}

double NNfunction_sb_dRcR::synapse0x1303260() {
   return (neuron0x12e0120()*0.373721);
}

double NNfunction_sb_dRcR::synapse0x13035e0() {
   return (neuron0x12db560()*-0.475975);
}

double NNfunction_sb_dRcR::synapse0x1303620() {
   return (neuron0x12db8a0()*0.44454);
}

double NNfunction_sb_dRcR::synapse0x1303660() {
   return (neuron0x12dbbe0()*0.317837);
}

double NNfunction_sb_dRcR::synapse0x13036a0() {
   return (neuron0x12dbf20()*-0.824662);
}

double NNfunction_sb_dRcR::synapse0x13036e0() {
   return (neuron0x12dc260()*1.96784);
}

double NNfunction_sb_dRcR::synapse0x1303720() {
   return (neuron0x12dc5a0()*-0.672369);
}

double NNfunction_sb_dRcR::synapse0x1303760() {
   return (neuron0x12dc8e0()*-0.0344993);
}

double NNfunction_sb_dRcR::synapse0x13037a0() {
   return (neuron0x12dcc20()*-0.627082);
}

double NNfunction_sb_dRcR::synapse0x13037e0() {
   return (neuron0x12dcf60()*-0.695261);
}

double NNfunction_sb_dRcR::synapse0x1303820() {
   return (neuron0x12dd2a0()*0.405342);
}

double NNfunction_sb_dRcR::synapse0x1303860() {
   return (neuron0x12dd5e0()*-0.662566);
}

double NNfunction_sb_dRcR::synapse0x13038a0() {
   return (neuron0x12dd920()*-0.828912);
}

double NNfunction_sb_dRcR::synapse0x13038e0() {
   return (neuron0x12ddc60()*0.156402);
}

double NNfunction_sb_dRcR::synapse0x1303920() {
   return (neuron0x12ddfa0()*-1.11186);
}

double NNfunction_sb_dRcR::synapse0x1303960() {
   return (neuron0x12de2e0()*-0.11293);
}

double NNfunction_sb_dRcR::synapse0x13039a0() {
   return (neuron0x12de620()*-0.391272);
}

double NNfunction_sb_dRcR::synapse0x1303430() {
   return (neuron0x12de960()*0.0555853);
}

double NNfunction_sb_dRcR::synapse0x1303470() {
   return (neuron0x12deec0()*0.803953);
}

double NNfunction_sb_dRcR::synapse0x1303af0() {
   return (neuron0x12df0e0()*-0.130113);
}

double NNfunction_sb_dRcR::synapse0x1303b30() {
   return (neuron0x12df420()*0.362861);
}

double NNfunction_sb_dRcR::synapse0x1303b70() {
   return (neuron0x12df760()*0.0370466);
}

double NNfunction_sb_dRcR::synapse0x1303bb0() {
   return (neuron0x12dfaa0()*-0.272227);
}

double NNfunction_sb_dRcR::synapse0x1303bf0() {
   return (neuron0x12dfde0()*0.555535);
}

double NNfunction_sb_dRcR::synapse0x1303c30() {
   return (neuron0x12e0120()*-0.0557517);
}

double NNfunction_sb_dRcR::synapse0x1303fb0() {
   return (neuron0x12db560()*0.0689495);
}

double NNfunction_sb_dRcR::synapse0x1303ff0() {
   return (neuron0x12db8a0()*1.01537);
}

double NNfunction_sb_dRcR::synapse0x1304030() {
   return (neuron0x12dbbe0()*0.406905);
}

double NNfunction_sb_dRcR::synapse0x1304070() {
   return (neuron0x12dbf20()*0.6991);
}

double NNfunction_sb_dRcR::synapse0x13040b0() {
   return (neuron0x12dc260()*-0.325106);
}

double NNfunction_sb_dRcR::synapse0x13040f0() {
   return (neuron0x12dc5a0()*0.297916);
}

double NNfunction_sb_dRcR::synapse0x1304130() {
   return (neuron0x12dc8e0()*0.199852);
}

double NNfunction_sb_dRcR::synapse0x1304170() {
   return (neuron0x12dcc20()*0.0317068);
}

double NNfunction_sb_dRcR::synapse0x13041b0() {
   return (neuron0x12dcf60()*0.305256);
}

double NNfunction_sb_dRcR::synapse0x13041f0() {
   return (neuron0x12dd2a0()*-0.189404);
}

double NNfunction_sb_dRcR::synapse0x1304230() {
   return (neuron0x12dd5e0()*0.537583);
}

double NNfunction_sb_dRcR::synapse0x1304270() {
   return (neuron0x12dd920()*-1.15534);
}

double NNfunction_sb_dRcR::synapse0x13042b0() {
   return (neuron0x12ddc60()*0.204698);
}

double NNfunction_sb_dRcR::synapse0x13042f0() {
   return (neuron0x12ddfa0()*0.862484);
}

double NNfunction_sb_dRcR::synapse0x1304330() {
   return (neuron0x12de2e0()*-0.438488);
}

double NNfunction_sb_dRcR::synapse0x1304370() {
   return (neuron0x12de620()*0.537729);
}

double NNfunction_sb_dRcR::synapse0x1303e00() {
   return (neuron0x12de960()*0.900252);
}

double NNfunction_sb_dRcR::synapse0x1303e40() {
   return (neuron0x12deec0()*0.646764);
}

double NNfunction_sb_dRcR::synapse0x13044c0() {
   return (neuron0x12df0e0()*-0.442113);
}

double NNfunction_sb_dRcR::synapse0x1304500() {
   return (neuron0x12df420()*-0.00199745);
}

double NNfunction_sb_dRcR::synapse0x1304540() {
   return (neuron0x12df760()*0.00848831);
}

double NNfunction_sb_dRcR::synapse0x1304580() {
   return (neuron0x12dfaa0()*-0.0592414);
}

double NNfunction_sb_dRcR::synapse0x13045c0() {
   return (neuron0x12dfde0()*0.082075);
}

double NNfunction_sb_dRcR::synapse0x1304600() {
   return (neuron0x12e0120()*-0.0327149);
}

double NNfunction_sb_dRcR::synapse0x1304980() {
   return (neuron0x12db560()*0.0216437);
}

double NNfunction_sb_dRcR::synapse0x13049c0() {
   return (neuron0x12db8a0()*-0.401832);
}

double NNfunction_sb_dRcR::synapse0x1304a00() {
   return (neuron0x12dbbe0()*-0.0767478);
}

double NNfunction_sb_dRcR::synapse0x1304a40() {
   return (neuron0x12dbf20()*-2.53835);
}

double NNfunction_sb_dRcR::synapse0x1304a80() {
   return (neuron0x12dc260()*-0.0163265);
}

double NNfunction_sb_dRcR::synapse0x1304ac0() {
   return (neuron0x12dc5a0()*-0.238332);
}

double NNfunction_sb_dRcR::synapse0x1304b00() {
   return (neuron0x12dc8e0()*-0.0581375);
}

double NNfunction_sb_dRcR::synapse0x1304b40() {
   return (neuron0x12dcc20()*-0.0197993);
}

double NNfunction_sb_dRcR::synapse0x1304b80() {
   return (neuron0x12dcf60()*0.124384);
}

double NNfunction_sb_dRcR::synapse0x1304bc0() {
   return (neuron0x12dd2a0()*-0.0200774);
}

double NNfunction_sb_dRcR::synapse0x1304c00() {
   return (neuron0x12dd5e0()*0.156706);
}

double NNfunction_sb_dRcR::synapse0x1304c40() {
   return (neuron0x12dd920()*0.426149);
}

double NNfunction_sb_dRcR::synapse0x1304c80() {
   return (neuron0x12ddc60()*0.34815);
}

double NNfunction_sb_dRcR::synapse0x1304cc0() {
   return (neuron0x12ddfa0()*-0.0613198);
}

double NNfunction_sb_dRcR::synapse0x1304d00() {
   return (neuron0x12de2e0()*0.0748987);
}

double NNfunction_sb_dRcR::synapse0x1304d40() {
   return (neuron0x12de620()*0.243007);
}

double NNfunction_sb_dRcR::synapse0x13047d0() {
   return (neuron0x12de960()*0.139478);
}

double NNfunction_sb_dRcR::synapse0x1304810() {
   return (neuron0x12deec0()*0.277602);
}

double NNfunction_sb_dRcR::synapse0x1304e90() {
   return (neuron0x12df0e0()*0.15347);
}

double NNfunction_sb_dRcR::synapse0x1304ed0() {
   return (neuron0x12df420()*0.0908976);
}

double NNfunction_sb_dRcR::synapse0x1304f10() {
   return (neuron0x12df760()*0.251351);
}

double NNfunction_sb_dRcR::synapse0x1304f50() {
   return (neuron0x12dfaa0()*0.172793);
}

double NNfunction_sb_dRcR::synapse0x1304f90() {
   return (neuron0x12dfde0()*0.171403);
}

double NNfunction_sb_dRcR::synapse0x1304fd0() {
   return (neuron0x12e0120()*-0.149265);
}

double NNfunction_sb_dRcR::synapse0x12e1570() {
   return (neuron0x12e05c0()*0.00163708);
}

double NNfunction_sb_dRcR::synapse0x12e15b0() {
   return (neuron0x12e0ed0()*-0.156833);
}

double NNfunction_sb_dRcR::synapse0x12e2a80() {
   return (neuron0x12e19b0()*0.733729);
}

double NNfunction_sb_dRcR::synapse0x12e2ac0() {
   return (neuron0x109b240()*-0.708603);
}

double NNfunction_sb_dRcR::synapse0x12e3450() {
   return (neuron0x12e27d0()*0.0049847);
}

double NNfunction_sb_dRcR::synapse0x12e3490() {
   return (neuron0x12e31a0()*2.24553);
}

double NNfunction_sb_dRcR::synapse0x12e4220() {
   return (neuron0x12e3f70()*-0.00269818);
}

double NNfunction_sb_dRcR::synapse0x12e4260() {
   return (neuron0x12e4940()*0.0404966);
}

double NNfunction_sb_dRcR::synapse0x12e4bf0() {
   return (neuron0x12e5310()*-0.0130421);
}

double NNfunction_sb_dRcR::synapse0x12e4c30() {
   return (neuron0x12e5df0()*0.00150182);
}

double NNfunction_sb_dRcR::synapse0x12e55c0() {
   return (neuron0x12e67c0()*0.00412635);
}

double NNfunction_sb_dRcR::synapse0x12e5600() {
   return (neuron0x12e38a0()*-0.0144055);
}

double NNfunction_sb_dRcR::synapse0x12e60a0() {
   return (neuron0x12e8370()*-0.0115535);
}

double NNfunction_sb_dRcR::synapse0x12e60e0() {
   return (neuron0x12e8d40()*-0.00131975);
}

double NNfunction_sb_dRcR::synapse0x12e6a70() {
   return (neuron0x12e9710()*0.00292716);
}

double NNfunction_sb_dRcR::synapse0x12e6ab0() {
   return (neuron0x12ea0e0()*-0.00318021);
}

double NNfunction_sb_dRcR::synapse0x12e3b50() {
   return (neuron0x12ebef0()*-0.0109334);
}

double NNfunction_sb_dRcR::synapse0x12e3b90() {
   return (neuron0x12ec1d0()*-0.00142487);
}

double NNfunction_sb_dRcR::synapse0x12e8620() {
   return (neuron0x12ecba0()*-0.0189276);
}

double NNfunction_sb_dRcR::synapse0x12e8660() {
   return (neuron0x12ed570()*-0.00582786);
}

double NNfunction_sb_dRcR::synapse0x12e8ff0() {
   return (neuron0x12edf40()*1.46217);
}

double NNfunction_sb_dRcR::synapse0x12e9030() {
   return (neuron0x12ee910()*-0.00631448);
}

double NNfunction_sb_dRcR::synapse0x12e99c0() {
   return (neuron0x12e7460()*-0.0914703);
}

double NNfunction_sb_dRcR::synapse0x12e9a00() {
   return (neuron0x12e7e30()*-0.68786);
}

double NNfunction_sb_dRcR::synapse0x12ea390() {
   return (neuron0x12f16a0()*0.00731721);
}

double NNfunction_sb_dRcR::synapse0x12ea3d0() {
   return (neuron0x12f2070()*1.65442);
}

double NNfunction_sb_dRcR::synapse0x12de500() {
   return (neuron0x12f2a40()*0.00609495);
}

double NNfunction_sb_dRcR::synapse0x12de540() {
   return (neuron0x12f3410()*-0.00259677);
}

double NNfunction_sb_dRcR::synapse0x12ec480() {
   return (neuron0x12f3de0()*0.010716);
}

double NNfunction_sb_dRcR::synapse0x12ec4c0() {
   return (neuron0x12f47b0()*0.00153221);
}

double NNfunction_sb_dRcR::synapse0x12ece50() {
   return (neuron0x12f5180()*0.903462);
}

double NNfunction_sb_dRcR::synapse0x12ece90() {
   return (neuron0x12f5b50()*-1.88039);
}

double NNfunction_sb_dRcR::synapse0x12ed820() {
   return (neuron0x12ebbe0()*-0.00980203);
}

double NNfunction_sb_dRcR::synapse0x12ed860() {
   return (neuron0x12f8730()*0.0190889);
}

double NNfunction_sb_dRcR::synapse0x12ee1f0() {
   return (neuron0x12f9100()*0.00800198);
}

double NNfunction_sb_dRcR::synapse0x12ee230() {
   return (neuron0x12f9ad0()*-1.49251);
}

double NNfunction_sb_dRcR::synapse0x12eebc0() {
   return (neuron0x12fa4a0()*0.0020629);
}

double NNfunction_sb_dRcR::synapse0x12eec00() {
   return (neuron0x12fae70()*-0.00772416);
}

double NNfunction_sb_dRcR::synapse0x12e7710() {
   return (neuron0x12fb840()*0.00967372);
}

double NNfunction_sb_dRcR::synapse0x12e7750() {
   return (neuron0x12fc210()*-0.00769542);
}

double NNfunction_sb_dRcR::synapse0x12f0fc0() {
   return (neuron0x12fcbe0()*-0.0506437);
}

double NNfunction_sb_dRcR::synapse0x12f1000() {
   return (neuron0x12fd7c0()*-0.0396362);
}

double NNfunction_sb_dRcR::synapse0x12f1950() {
   return (neuron0x12fe190()*0.0545766);
}

double NNfunction_sb_dRcR::synapse0x12f1990() {
   return (neuron0x12ef010()*-0.0149502);
}

double NNfunction_sb_dRcR::synapse0x12f2320() {
   return (neuron0x12ef9e0()*-0.00941399);
}

double NNfunction_sb_dRcR::synapse0x12f2360() {
   return (neuron0x12f03b0()*-0.00382505);
}

double NNfunction_sb_dRcR::synapse0x12f2cf0() {
   return (neuron0x13029f0()*0.000367851);
}

double NNfunction_sb_dRcR::synapse0x12f2d30() {
   return (neuron0x13032a0()*-0.00872755);
}

double NNfunction_sb_dRcR::synapse0x12f36c0() {
   return (neuron0x1303c70()*0.0129692);
}

double NNfunction_sb_dRcR::synapse0x12f3700() {
   return (neuron0x1304640()*-0.139659);
}

double NNfunction_sb_dRcR::synapse0x12f5e00() {
   return (neuron0x12e05c0()*-0.244694);
}

double NNfunction_sb_dRcR::synapse0x12f5e40() {
   return (neuron0x12e0ed0()*1.35209);
}

double NNfunction_sb_dRcR::synapse0x12eb3c0() {
   return (neuron0x12e19b0()*0.10275);
}

double NNfunction_sb_dRcR::synapse0x12eb400() {
   return (neuron0x109b240()*0.638274);
}

double NNfunction_sb_dRcR::synapse0x12f89e0() {
   return (neuron0x12e27d0()*-0.0534882);
}

double NNfunction_sb_dRcR::synapse0x12f8a20() {
   return (neuron0x12e31a0()*1.07824);
}

double NNfunction_sb_dRcR::synapse0x12f93b0() {
   return (neuron0x12e3f70()*0.0323414);
}

double NNfunction_sb_dRcR::synapse0x12f93f0() {
   return (neuron0x12e4940()*0.36567);
}

double NNfunction_sb_dRcR::synapse0x12f9d80() {
   return (neuron0x12e5310()*0.0207674);
}

double NNfunction_sb_dRcR::synapse0x12f9dc0() {
   return (neuron0x12e5df0()*-0.076275);
}

double NNfunction_sb_dRcR::synapse0x12fa750() {
   return (neuron0x12e67c0()*-0.105938);
}

double NNfunction_sb_dRcR::synapse0x12fa790() {
   return (neuron0x12e38a0()*-0.0056465);
}

double NNfunction_sb_dRcR::synapse0x12fb120() {
   return (neuron0x12e8370()*0.015911);
}

double NNfunction_sb_dRcR::synapse0x12fb160() {
   return (neuron0x12e8d40()*-0.0880388);
}

double NNfunction_sb_dRcR::synapse0x12fbaf0() {
   return (neuron0x12e9710()*-0.0382297);
}

double NNfunction_sb_dRcR::synapse0x12fbb30() {
   return (neuron0x12ea0e0()*0.06415);
}

double NNfunction_sb_dRcR::synapse0x12fc4c0() {
   return (neuron0x12ebef0()*0.022578);
}

double NNfunction_sb_dRcR::synapse0x12fc500() {
   return (neuron0x12ec1d0()*0.00800679);
}

double NNfunction_sb_dRcR::synapse0x12fce90() {
   return (neuron0x12ecba0()*0.164218);
}

double NNfunction_sb_dRcR::synapse0x12fced0() {
   return (neuron0x12ed570()*-0.0546647);
}

double NNfunction_sb_dRcR::synapse0x12fda70() {
   return (neuron0x12edf40()*-2.98855);
}

double NNfunction_sb_dRcR::synapse0x12fdab0() {
   return (neuron0x12ee910()*0.00379409);
}

double NNfunction_sb_dRcR::synapse0x12fe440() {
   return (neuron0x12e7460()*-0.406186);
}

double NNfunction_sb_dRcR::synapse0x12fe480() {
   return (neuron0x12e7e30()*-0.444331);
}

double NNfunction_sb_dRcR::synapse0x12ef2c0() {
   return (neuron0x12f16a0()*0.0126402);
}

double NNfunction_sb_dRcR::synapse0x12ef300() {
   return (neuron0x12f2070()*-0.420275);
}

double NNfunction_sb_dRcR::synapse0x12efc90() {
   return (neuron0x12f2a40()*-0.0682991);
}

double NNfunction_sb_dRcR::synapse0x12efcd0() {
   return (neuron0x12f3410()*-0.0901318);
}

double NNfunction_sb_dRcR::synapse0x12f0660() {
   return (neuron0x12f3de0()*-0.063778);
}

double NNfunction_sb_dRcR::synapse0x12f06a0() {
   return (neuron0x12f47b0()*-0.0181757);
}

double NNfunction_sb_dRcR::synapse0x1302b80() {
   return (neuron0x12f5180()*-4.2091);
}

double NNfunction_sb_dRcR::synapse0x1302bc0() {
   return (neuron0x12f5b50()*0.556285);
}

double NNfunction_sb_dRcR::synapse0x1303550() {
   return (neuron0x12ebbe0()*0.014349);
}

double NNfunction_sb_dRcR::synapse0x1303590() {
   return (neuron0x12f8730()*-0.0915775);
}

double NNfunction_sb_dRcR::synapse0x1303f20() {
   return (neuron0x12f9100()*0.0240159);
}

double NNfunction_sb_dRcR::synapse0x1303f60() {
   return (neuron0x12f9ad0()*-1.68504);
}

double NNfunction_sb_dRcR::synapse0x13048f0() {
   return (neuron0x12fa4a0()*0.0445563);
}

double NNfunction_sb_dRcR::synapse0x1304930() {
   return (neuron0x12fae70()*0.0413482);
}

double NNfunction_sb_dRcR::synapse0x12e07e0() {
   return (neuron0x12fb840()*-0.175482);
}

double NNfunction_sb_dRcR::synapse0x12e0820() {
   return (neuron0x12fc210()*0.0420096);
}

double NNfunction_sb_dRcR::synapse0x12f4090() {
   return (neuron0x12fcbe0()*-0.118628);
}

double NNfunction_sb_dRcR::synapse0x12f40d0() {
   return (neuron0x12fd7c0()*0.478871);
}

double NNfunction_sb_dRcR::synapse0x1305010() {
   return (neuron0x12fe190()*0.551691);
}

double NNfunction_sb_dRcR::synapse0x1305050() {
   return (neuron0x12ef010()*-0.00438522);
}

double NNfunction_sb_dRcR::synapse0x1305090() {
   return (neuron0x12ef9e0()*2.59217);
}

double NNfunction_sb_dRcR::synapse0x13050d0() {
   return (neuron0x12f03b0()*-0.0783278);
}

double NNfunction_sb_dRcR::synapse0x130bf80() {
   return (neuron0x13029f0()*0.0391023);
}

double NNfunction_sb_dRcR::synapse0x130bfc0() {
   return (neuron0x13032a0()*-0.056418);
}

double NNfunction_sb_dRcR::synapse0x130c000() {
   return (neuron0x1303c70()*0.055987);
}

double NNfunction_sb_dRcR::synapse0x130c040() {
   return (neuron0x1304640()*-0.371632);
}

double NNfunction_sb_dRcR::synapse0x130c3c0() {
   return (neuron0x12e05c0()*-2.8385);
}

double NNfunction_sb_dRcR::synapse0x130c400() {
   return (neuron0x12e0ed0()*-4.59721);
}

double NNfunction_sb_dRcR::synapse0x130c440() {
   return (neuron0x12e19b0()*0.970129);
}

double NNfunction_sb_dRcR::synapse0x130c480() {
   return (neuron0x109b240()*-0.730736);
}

double NNfunction_sb_dRcR::synapse0x130c4c0() {
   return (neuron0x12e27d0()*2.14471);
}

double NNfunction_sb_dRcR::synapse0x130c500() {
   return (neuron0x12e31a0()*0.417557);
}

double NNfunction_sb_dRcR::synapse0x130c540() {
   return (neuron0x12e3f70()*0.138804);
}

double NNfunction_sb_dRcR::synapse0x130c580() {
   return (neuron0x12e4940()*2.25799);
}

double NNfunction_sb_dRcR::synapse0x130c5c0() {
   return (neuron0x12e5310()*2.00263);
}

double NNfunction_sb_dRcR::synapse0x130c600() {
   return (neuron0x12e5df0()*-2.56727);
}

double NNfunction_sb_dRcR::synapse0x130c640() {
   return (neuron0x12e67c0()*-0.639215);
}

double NNfunction_sb_dRcR::synapse0x130c680() {
   return (neuron0x12e38a0()*1.19508);
}

double NNfunction_sb_dRcR::synapse0x130c6c0() {
   return (neuron0x12e8370()*1.72101);
}

double NNfunction_sb_dRcR::synapse0x130c700() {
   return (neuron0x12e8d40()*-2.18599);
}

double NNfunction_sb_dRcR::synapse0x130c740() {
   return (neuron0x12e9710()*2.06049);
}

double NNfunction_sb_dRcR::synapse0x130c780() {
   return (neuron0x12ea0e0()*1.2463);
}

double NNfunction_sb_dRcR::synapse0x130c210() {
   return (neuron0x12ebef0()*2.02847);
}

double NNfunction_sb_dRcR::synapse0x130c250() {
   return (neuron0x12ec1d0()*-2.07239);
}

double NNfunction_sb_dRcR::synapse0x130c8d0() {
   return (neuron0x12ecba0()*-2.06129);
}

double NNfunction_sb_dRcR::synapse0x130c910() {
   return (neuron0x12ed570()*1.4236);
}

double NNfunction_sb_dRcR::synapse0x130c950() {
   return (neuron0x12edf40()*2.29992);
}

double NNfunction_sb_dRcR::synapse0x130c990() {
   return (neuron0x12ee910()*0.411554);
}

double NNfunction_sb_dRcR::synapse0x130c9d0() {
   return (neuron0x12e7460()*-1.04863);
}

double NNfunction_sb_dRcR::synapse0x130ca10() {
   return (neuron0x12e7e30()*0.748177);
}

double NNfunction_sb_dRcR::synapse0x130ca50() {
   return (neuron0x12f16a0()*-0.599419);
}

double NNfunction_sb_dRcR::synapse0x130ca90() {
   return (neuron0x12f2070()*0.997058);
}

double NNfunction_sb_dRcR::synapse0x130cad0() {
   return (neuron0x12f2a40()*-1.65127);
}

double NNfunction_sb_dRcR::synapse0x130cb10() {
   return (neuron0x12f3410()*-2.39817);
}

double NNfunction_sb_dRcR::synapse0x130cb50() {
   return (neuron0x12f3de0()*-0.983424);
}

double NNfunction_sb_dRcR::synapse0x130cb90() {
   return (neuron0x12f47b0()*1.65489);
}

double NNfunction_sb_dRcR::synapse0x130cbd0() {
   return (neuron0x12f5180()*4.0378);
}

double NNfunction_sb_dRcR::synapse0x130cc10() {
   return (neuron0x12f5b50()*-0.0974583);
}

double NNfunction_sb_dRcR::synapse0x130c7c0() {
   return (neuron0x12ebbe0()*0.602525);
}

double NNfunction_sb_dRcR::synapse0x130c800() {
   return (neuron0x12f8730()*4.63814);
}

double NNfunction_sb_dRcR::synapse0x130c840() {
   return (neuron0x12f9100()*-1.03062);
}

double NNfunction_sb_dRcR::synapse0x130c880() {
   return (neuron0x12f9ad0()*-1.15364);
}

double NNfunction_sb_dRcR::synapse0x130ce60() {
   return (neuron0x12fa4a0()*1.18254);
}

double NNfunction_sb_dRcR::synapse0x130cea0() {
   return (neuron0x12fae70()*2.26152);
}

double NNfunction_sb_dRcR::synapse0x130cee0() {
   return (neuron0x12fb840()*2.3588);
}

double NNfunction_sb_dRcR::synapse0x130cf20() {
   return (neuron0x12fc210()*0.0516858);
}

double NNfunction_sb_dRcR::synapse0x130cf60() {
   return (neuron0x12fcbe0()*-4.99266);
}

double NNfunction_sb_dRcR::synapse0x130cfa0() {
   return (neuron0x12fd7c0()*1.07093);
}

double NNfunction_sb_dRcR::synapse0x130cfe0() {
   return (neuron0x12fe190()*-2.6605);
}

double NNfunction_sb_dRcR::synapse0x130d020() {
   return (neuron0x12ef010()*0.731468);
}

double NNfunction_sb_dRcR::synapse0x130d060() {
   return (neuron0x12ef9e0()*1.92774);
}

double NNfunction_sb_dRcR::synapse0x130d0a0() {
   return (neuron0x12f03b0()*-1.16445);
}

double NNfunction_sb_dRcR::synapse0x130d0e0() {
   return (neuron0x13029f0()*-0.701107);
}

double NNfunction_sb_dRcR::synapse0x130d120() {
   return (neuron0x13032a0()*-0.263336);
}

double NNfunction_sb_dRcR::synapse0x130d160() {
   return (neuron0x1303c70()*2.75734);
}

double NNfunction_sb_dRcR::synapse0x130d1a0() {
   return (neuron0x1304640()*-4.85976);
}

double NNfunction_sb_dRcR::synapse0x130d520() {
   return (neuron0x12e05c0()*1.33933);
}

double NNfunction_sb_dRcR::synapse0x130d560() {
   return (neuron0x12e0ed0()*-0.732812);
}

double NNfunction_sb_dRcR::synapse0x130d5a0() {
   return (neuron0x12e19b0()*-1.91633);
}

double NNfunction_sb_dRcR::synapse0x130d5e0() {
   return (neuron0x109b240()*0.526529);
}

double NNfunction_sb_dRcR::synapse0x130d620() {
   return (neuron0x12e27d0()*4.3973);
}

double NNfunction_sb_dRcR::synapse0x130d660() {
   return (neuron0x12e31a0()*1.00299);
}

double NNfunction_sb_dRcR::synapse0x130d6a0() {
   return (neuron0x12e3f70()*2.88098);
}

double NNfunction_sb_dRcR::synapse0x130d6e0() {
   return (neuron0x12e4940()*2.08764);
}

double NNfunction_sb_dRcR::synapse0x130d720() {
   return (neuron0x12e5310()*0.575074);
}

double NNfunction_sb_dRcR::synapse0x130d760() {
   return (neuron0x12e5df0()*0.139459);
}

double NNfunction_sb_dRcR::synapse0x130d7a0() {
   return (neuron0x12e67c0()*-2.66428);
}

double NNfunction_sb_dRcR::synapse0x130d7e0() {
   return (neuron0x12e38a0()*2.66342);
}

double NNfunction_sb_dRcR::synapse0x130d820() {
   return (neuron0x12e8370()*3.04203);
}

double NNfunction_sb_dRcR::synapse0x130d860() {
   return (neuron0x12e8d40()*0.508981);
}

double NNfunction_sb_dRcR::synapse0x130d8a0() {
   return (neuron0x12e9710()*1.31412);
}

double NNfunction_sb_dRcR::synapse0x130d8e0() {
   return (neuron0x12ea0e0()*-2.69967);
}

double NNfunction_sb_dRcR::synapse0x130d370() {
   return (neuron0x12ebef0()*0.0384233);
}

double NNfunction_sb_dRcR::synapse0x130d3b0() {
   return (neuron0x12ec1d0()*1.16228);
}

double NNfunction_sb_dRcR::synapse0x130da30() {
   return (neuron0x12ecba0()*-3.42748);
}

double NNfunction_sb_dRcR::synapse0x130da70() {
   return (neuron0x12ed570()*1.87205);
}

double NNfunction_sb_dRcR::synapse0x130dab0() {
   return (neuron0x12edf40()*0.228799);
}

double NNfunction_sb_dRcR::synapse0x130daf0() {
   return (neuron0x12ee910()*3.33891);
}

double NNfunction_sb_dRcR::synapse0x130db30() {
   return (neuron0x12e7460()*0.310883);
}

double NNfunction_sb_dRcR::synapse0x130db70() {
   return (neuron0x12e7e30()*-1.10519);
}

double NNfunction_sb_dRcR::synapse0x130dbb0() {
   return (neuron0x12f16a0()*-2.42413);
}

double NNfunction_sb_dRcR::synapse0x130dbf0() {
   return (neuron0x12f2070()*-1.33673);
}

double NNfunction_sb_dRcR::synapse0x130dc30() {
   return (neuron0x12f2a40()*-2.37733);
}

double NNfunction_sb_dRcR::synapse0x130dc70() {
   return (neuron0x12f3410()*1.51618);
}

double NNfunction_sb_dRcR::synapse0x130dcb0() {
   return (neuron0x12f3de0()*-2.86205);
}

double NNfunction_sb_dRcR::synapse0x130dcf0() {
   return (neuron0x12f47b0()*0.302226);
}

double NNfunction_sb_dRcR::synapse0x130dd30() {
   return (neuron0x12f5180()*0.906096);
}

double NNfunction_sb_dRcR::synapse0x130dd70() {
   return (neuron0x12f5b50()*-1.98871);
}

double NNfunction_sb_dRcR::synapse0x130d920() {
   return (neuron0x12ebbe0()*3.23728);
}

double NNfunction_sb_dRcR::synapse0x130d960() {
   return (neuron0x12f8730()*-0.306981);
}

double NNfunction_sb_dRcR::synapse0x130d9a0() {
   return (neuron0x12f9100()*-3.45189);
}

double NNfunction_sb_dRcR::synapse0x130d9e0() {
   return (neuron0x12f9ad0()*0.821017);
}

double NNfunction_sb_dRcR::synapse0x130dfc0() {
   return (neuron0x12fa4a0()*3.00042);
}

double NNfunction_sb_dRcR::synapse0x130e000() {
   return (neuron0x12fae70()*-0.0329246);
}

double NNfunction_sb_dRcR::synapse0x130e040() {
   return (neuron0x12fb840()*-1.84757);
}

double NNfunction_sb_dRcR::synapse0x130e080() {
   return (neuron0x12fc210()*3.34565);
}

double NNfunction_sb_dRcR::synapse0x130e0c0() {
   return (neuron0x12fcbe0()*0.292435);
}

double NNfunction_sb_dRcR::synapse0x130e100() {
   return (neuron0x12fd7c0()*-1.62122);
}

double NNfunction_sb_dRcR::synapse0x130e140() {
   return (neuron0x12fe190()*1.24541);
}

double NNfunction_sb_dRcR::synapse0x130e180() {
   return (neuron0x12ef010()*-2.76664);
}

double NNfunction_sb_dRcR::synapse0x130e1c0() {
   return (neuron0x12ef9e0()*3.31961);
}

double NNfunction_sb_dRcR::synapse0x130e200() {
   return (neuron0x12f03b0()*-3.10806);
}

double NNfunction_sb_dRcR::synapse0x130e240() {
   return (neuron0x13029f0()*-3.43114);
}

double NNfunction_sb_dRcR::synapse0x130e280() {
   return (neuron0x13032a0()*3.04214);
}

double NNfunction_sb_dRcR::synapse0x130e2c0() {
   return (neuron0x1303c70()*0.29826);
}

double NNfunction_sb_dRcR::synapse0x130e300() {
   return (neuron0x1304640()*0.394461);
}

double NNfunction_sb_dRcR::synapse0x130e680() {
   return (neuron0x12e05c0()*0.321473);
}

double NNfunction_sb_dRcR::synapse0x130e6c0() {
   return (neuron0x12e0ed0()*-1.61321);
}

double NNfunction_sb_dRcR::synapse0x130e700() {
   return (neuron0x12e19b0()*-2.11684);
}

double NNfunction_sb_dRcR::synapse0x130e740() {
   return (neuron0x109b240()*1.34305);
}

double NNfunction_sb_dRcR::synapse0x130e780() {
   return (neuron0x12e27d0()*0.0193518);
}

double NNfunction_sb_dRcR::synapse0x130e7c0() {
   return (neuron0x12e31a0()*-1.8607);
}

double NNfunction_sb_dRcR::synapse0x130e800() {
   return (neuron0x12e3f70()*0.000232876);
}

double NNfunction_sb_dRcR::synapse0x130e840() {
   return (neuron0x12e4940()*1.05148);
}

double NNfunction_sb_dRcR::synapse0x130e880() {
   return (neuron0x12e5310()*-0.0441781);
}

double NNfunction_sb_dRcR::synapse0x130e8c0() {
   return (neuron0x12e5df0()*0.0643492);
}

double NNfunction_sb_dRcR::synapse0x130e900() {
   return (neuron0x12e67c0()*-0.034625);
}

double NNfunction_sb_dRcR::synapse0x130e940() {
   return (neuron0x12e38a0()*0.0226963);
}

double NNfunction_sb_dRcR::synapse0x130e980() {
   return (neuron0x12e8370()*0.0934442);
}

double NNfunction_sb_dRcR::synapse0x130e9c0() {
   return (neuron0x12e8d40()*0.16491);
}

double NNfunction_sb_dRcR::synapse0x130ea00() {
   return (neuron0x12e9710()*0.0411268);
}

double NNfunction_sb_dRcR::synapse0x130ea40() {
   return (neuron0x12ea0e0()*-0.129757);
}

double NNfunction_sb_dRcR::synapse0x130e4d0() {
   return (neuron0x12ebef0()*-0.0454561);
}

double NNfunction_sb_dRcR::synapse0x130e510() {
   return (neuron0x12ec1d0()*0.0288847);
}

double NNfunction_sb_dRcR::synapse0x130eb90() {
   return (neuron0x12ecba0()*-0.270219);
}

double NNfunction_sb_dRcR::synapse0x130ebd0() {
   return (neuron0x12ed570()*0.0717024);
}

double NNfunction_sb_dRcR::synapse0x130ec10() {
   return (neuron0x12edf40()*2.62734);
}

double NNfunction_sb_dRcR::synapse0x130ec50() {
   return (neuron0x12ee910()*0.0207446);
}

double NNfunction_sb_dRcR::synapse0x130ec90() {
   return (neuron0x12e7460()*0.0102997);
}

double NNfunction_sb_dRcR::synapse0x130ecd0() {
   return (neuron0x12e7e30()*0.468434);
}

double NNfunction_sb_dRcR::synapse0x130ed10() {
   return (neuron0x12f16a0()*-0.0271815);
}

double NNfunction_sb_dRcR::synapse0x130ed50() {
   return (neuron0x12f2070()*-0.897719);
}

double NNfunction_sb_dRcR::synapse0x130ed90() {
   return (neuron0x12f2a40()*0.0458021);
}

double NNfunction_sb_dRcR::synapse0x130edd0() {
   return (neuron0x12f3410()*0.0736066);
}

double NNfunction_sb_dRcR::synapse0x130ee10() {
   return (neuron0x12f3de0()*0.0780347);
}

double NNfunction_sb_dRcR::synapse0x130ee50() {
   return (neuron0x12f47b0()*0.0560729);
}

double NNfunction_sb_dRcR::synapse0x130ee90() {
   return (neuron0x12f5180()*3.89375);
}

double NNfunction_sb_dRcR::synapse0x130eed0() {
   return (neuron0x12f5b50()*-2.79087);
}

double NNfunction_sb_dRcR::synapse0x130ea80() {
   return (neuron0x12ebbe0()*0.0460638);
}

double NNfunction_sb_dRcR::synapse0x130eac0() {
   return (neuron0x12f8730()*0.0782477);
}

double NNfunction_sb_dRcR::synapse0x130eb00() {
   return (neuron0x12f9100()*-0.0499224);
}

double NNfunction_sb_dRcR::synapse0x130eb40() {
   return (neuron0x12f9ad0()*1.19171);
}

double NNfunction_sb_dRcR::synapse0x130f120() {
   return (neuron0x12fa4a0()*-0.0419308);
}

double NNfunction_sb_dRcR::synapse0x130f160() {
   return (neuron0x12fae70()*-0.0524302);
}

double NNfunction_sb_dRcR::synapse0x130f1a0() {
   return (neuron0x12fb840()*0.108373);
}

double NNfunction_sb_dRcR::synapse0x130f1e0() {
   return (neuron0x12fc210()*0.00236314);
}

double NNfunction_sb_dRcR::synapse0x130f220() {
   return (neuron0x12fcbe0()*0.191034);
}

double NNfunction_sb_dRcR::synapse0x130f260() {
   return (neuron0x12fd7c0()*-0.746732);
}

double NNfunction_sb_dRcR::synapse0x130f2a0() {
   return (neuron0x12fe190()*1.79875);
}

double NNfunction_sb_dRcR::synapse0x130f2e0() {
   return (neuron0x12ef010()*-0.0193355);
}

double NNfunction_sb_dRcR::synapse0x130f320() {
   return (neuron0x12ef9e0()*-3.30933);
}

double NNfunction_sb_dRcR::synapse0x130f360() {
   return (neuron0x12f03b0()*0.0793923);
}

double NNfunction_sb_dRcR::synapse0x130f3a0() {
   return (neuron0x13029f0()*-0.0291727);
}

double NNfunction_sb_dRcR::synapse0x130f3e0() {
   return (neuron0x13032a0()*0.11025);
}

double NNfunction_sb_dRcR::synapse0x130f420() {
   return (neuron0x1303c70()*0.0142957);
}

double NNfunction_sb_dRcR::synapse0x130f460() {
   return (neuron0x1304640()*0.358944);
}

double NNfunction_sb_dRcR::synapse0x12e0580() {
   return (neuron0x130b840()*-7.99652);
}

double NNfunction_sb_dRcR::synapse0x130f6c0() {
   return (neuron0x130bbe0()*-3.70255);
}

double NNfunction_sb_dRcR::synapse0x130f700() {
   return (neuron0x130c080()*-6.04259);
}

double NNfunction_sb_dRcR::synapse0x130f740() {
   return (neuron0x130d1e0()*-4.91538);
}

double NNfunction_sb_dRcR::synapse0x130f780() {
   return (neuron0x130e340()*-3.10036);
}

