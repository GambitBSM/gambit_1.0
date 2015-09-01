#include "NNfunction_sg_dL.h"
#include <cmath>

double NNfunction_sg_dL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4083)/15.1397;
   input1 = (in1 - 46.2341)/903.452;
   input2 = (in2 - 484.878)/538.599;
   input3 = (in3 - 227.871)/738.747;
   input4 = (in4 - 1013.45)/835.135;
   input5 = (in5 - 924.002)/845.196;
   input6 = (in6 - 928.706)/845.492;
   input7 = (in7 - 924.099)/824.508;
   input8 = (in8 - 930.942)/864.6;
   input9 = (in9 - 921.472)/853.929;
   input10 = (in10 - 926.709)/840.143;
   input11 = (in11 - 788.785)/660.972;
   input12 = (in12 - 901.32)/794.343;
   input13 = (in13 - 673.606)/529.266;
   input14 = (in14 - 894.554)/760.453;
   input15 = (in15 - 895.569)/761.151;
   input16 = (in16 - 609.521)/494.094;
   input17 = (in17 - 915.307)/811.097;
   input18 = (in18 - 913.411)/812.08;
   input19 = (in19 - 912.512)/772.013;
   input20 = (in20 - -189.552)/519.336;
   input21 = (in21 - -248.836)/1100.94;
   input22 = (in22 - -19.7944)/1106.57;
   input23 = (in23 - -45.4641)/603.063;
   switch(index) {
     case 0:
         return neuron0x40f3cc0();
     default:
         return 0.;
   }
}

double NNfunction_sg_dL::Value(int index, double* input) {
   input0 = (input[0] - 23.4083)/15.1397;
   input1 = (input[1] - 46.2341)/903.452;
   input2 = (input[2] - 484.878)/538.599;
   input3 = (input[3] - 227.871)/738.747;
   input4 = (input[4] - 1013.45)/835.135;
   input5 = (input[5] - 924.002)/845.196;
   input6 = (input[6] - 928.706)/845.492;
   input7 = (input[7] - 924.099)/824.508;
   input8 = (input[8] - 930.942)/864.6;
   input9 = (input[9] - 921.472)/853.929;
   input10 = (input[10] - 926.709)/840.143;
   input11 = (input[11] - 788.785)/660.972;
   input12 = (input[12] - 901.32)/794.343;
   input13 = (input[13] - 673.606)/529.266;
   input14 = (input[14] - 894.554)/760.453;
   input15 = (input[15] - 895.569)/761.151;
   input16 = (input[16] - 609.521)/494.094;
   input17 = (input[17] - 915.307)/811.097;
   input18 = (input[18] - 913.411)/812.08;
   input19 = (input[19] - 912.512)/772.013;
   input20 = (input[20] - -189.552)/519.336;
   input21 = (input[21] - -248.836)/1100.94;
   input22 = (input[22] - -19.7944)/1106.57;
   input23 = (input[23] - -45.4641)/603.063;
   switch(index) {
     case 0:
         return neuron0x40f3cc0();
     default:
         return 0.;
   }
}

double NNfunction_sg_dL::neuron0x40bed30() {
   return input0;
}

double NNfunction_sg_dL::neuron0x40befe0() {
   return input1;
}

double NNfunction_sg_dL::neuron0x40bf320() {
   return input2;
}

double NNfunction_sg_dL::neuron0x40bf660() {
   return input3;
}

double NNfunction_sg_dL::neuron0x40bf9a0() {
   return input4;
}

double NNfunction_sg_dL::neuron0x40bfce0() {
   return input5;
}

double NNfunction_sg_dL::neuron0x40c0020() {
   return input6;
}

double NNfunction_sg_dL::neuron0x40c0360() {
   return input7;
}

double NNfunction_sg_dL::neuron0x40c06a0() {
   return input8;
}

double NNfunction_sg_dL::neuron0x40c09e0() {
   return input9;
}

double NNfunction_sg_dL::neuron0x40c0d20() {
   return input10;
}

double NNfunction_sg_dL::neuron0x40c1060() {
   return input11;
}

double NNfunction_sg_dL::neuron0x40c13a0() {
   return input12;
}

double NNfunction_sg_dL::neuron0x40c16e0() {
   return input13;
}

double NNfunction_sg_dL::neuron0x40c1a20() {
   return input14;
}

double NNfunction_sg_dL::neuron0x40c1d60() {
   return input15;
}

double NNfunction_sg_dL::neuron0x40c20a0() {
   return input16;
}

double NNfunction_sg_dL::neuron0x40c2600() {
   return input17;
}

double NNfunction_sg_dL::neuron0x40c2820() {
   return input18;
}

double NNfunction_sg_dL::neuron0x40c2b60() {
   return input19;
}

double NNfunction_sg_dL::neuron0x40c2ea0() {
   return input20;
}

double NNfunction_sg_dL::neuron0x40c31e0() {
   return input21;
}

double NNfunction_sg_dL::neuron0x40c3520() {
   return input22;
}

double NNfunction_sg_dL::neuron0x40c3860() {
   return input23;
}

double NNfunction_sg_dL::input0x40c3cd0() {
   double input = 0.008199;
   input += synapse0x40c4010();
   input += synapse0x40c4050();
   input += synapse0x40c4090();
   input += synapse0x40c40d0();
   input += synapse0x40c4110();
   input += synapse0x40c4150();
   input += synapse0x40c4190();
   input += synapse0x40c41d0();
   input += synapse0x40c4210();
   input += synapse0x40c4250();
   input += synapse0x40c4290();
   input += synapse0x40c42d0();
   input += synapse0x40c4310();
   input += synapse0x40c4350();
   input += synapse0x40c4390();
   input += synapse0x40c43d0();
   input += synapse0x40c3e60();
   input += synapse0x40c3ea0();
   input += synapse0x2ce9cd0();
   input += synapse0x2ce9d10();
   input += synapse0x40c4520();
   input += synapse0x40c4560();
   input += synapse0x40c45a0();
   input += synapse0x40c45e0();
   return input;
}

double NNfunction_sg_dL::neuron0x40c3cd0() {
   double input = input0x40c3cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40c4620() {
   double input = -0.392012;
   input += synapse0x40c4960();
   input += synapse0x40c49a0();
   input += synapse0x40c49e0();
   input += synapse0x40c4a20();
   input += synapse0x40c4a60();
   input += synapse0x40c4aa0();
   input += synapse0x40c4ae0();
   input += synapse0x40c4b20();
   input += synapse0x40c4b60();
   input += synapse0x40c4410();
   input += synapse0x40c4450();
   input += synapse0x40c4490();
   input += synapse0x40c44d0();
   input += synapse0x40c4db0();
   input += synapse0x40c4df0();
   input += synapse0x40c4e30();
   input += synapse0x40c47b0();
   input += synapse0x40c47f0();
   input += synapse0x40c4f80();
   input += synapse0x40c4fc0();
   input += synapse0x40c5000();
   input += synapse0x40c5040();
   input += synapse0x40c5080();
   input += synapse0x40c50c0();
   return input;
}

double NNfunction_sg_dL::neuron0x40c4620() {
   double input = input0x40c4620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40c5100() {
   double input = -0.888887;
   input += synapse0x40c5440();
   input += synapse0x40c5480();
   input += synapse0x40c54c0();
   input += synapse0x40c5500();
   input += synapse0x40c5540();
   input += synapse0x40c5580();
   input += synapse0x40c55c0();
   input += synapse0x40c5600();
   input += synapse0x40c5640();
   input += synapse0x40c5680();
   input += synapse0x40c56c0();
   input += synapse0x40c5700();
   input += synapse0x40c5740();
   input += synapse0x40c5780();
   input += synapse0x40c57c0();
   input += synapse0x40c5800();
   input += synapse0x40c5290();
   input += synapse0x40c52d0();
   input += synapse0x2ceacb0();
   input += synapse0x3e88e30();
   input += synapse0x3e88e70();
   input += synapse0x40c7740();
   input += synapse0x40c7780();
   input += synapse0x40bea70();
   return input;
}

double NNfunction_sg_dL::neuron0x40c5100() {
   double input = input0x40c5100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40c4ba0() {
   double input = 0.944869;
   input += synapse0x40beb40();
   input += synapse0x3e896b0();
   input += synapse0x40c4d30();
   input += synapse0x40c4d70();
   input += synapse0x40c5950();
   input += synapse0x40c5990();
   input += synapse0x40c59d0();
   input += synapse0x40c5a10();
   input += synapse0x40c5a50();
   input += synapse0x40c5a90();
   input += synapse0x40c5ad0();
   input += synapse0x40c5b10();
   input += synapse0x40c5b50();
   input += synapse0x40c5b90();
   input += synapse0x40c5bd0();
   input += synapse0x40c5c10();
   input += synapse0x40beab0();
   input += synapse0x40beaf0();
   input += synapse0x40c5d60();
   input += synapse0x40c5da0();
   input += synapse0x40c5de0();
   input += synapse0x40c5e20();
   input += synapse0x40c5e60();
   input += synapse0x40c5ea0();
   return input;
}

double NNfunction_sg_dL::neuron0x40c4ba0() {
   double input = input0x40c4ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40c5ee0() {
   double input = 0.281835;
   input += synapse0x40c6220();
   input += synapse0x40c6260();
   input += synapse0x40c62a0();
   input += synapse0x40c62e0();
   input += synapse0x40c6320();
   input += synapse0x40c6360();
   input += synapse0x40c63a0();
   input += synapse0x40c63e0();
   input += synapse0x40c6420();
   input += synapse0x40c6460();
   input += synapse0x40c64a0();
   input += synapse0x40c64e0();
   input += synapse0x40c6520();
   input += synapse0x40c6560();
   input += synapse0x40c65a0();
   input += synapse0x40c65e0();
   input += synapse0x40c6730();
   input += synapse0x40c6070();
   input += synapse0x40c60b0();
   input += synapse0x40c7880();
   input += synapse0x40c78c0();
   input += synapse0x40c7900();
   input += synapse0x40c7940();
   input += synapse0x40c7980();
   return input;
}

double NNfunction_sg_dL::neuron0x40c5ee0() {
   double input = input0x40c5ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40c79c0() {
   double input = -2.67052;
   input += synapse0x40c7d00();
   input += synapse0x40c7d40();
   input += synapse0x40c7d80();
   input += synapse0x40c7dc0();
   input += synapse0x40c7e00();
   input += synapse0x40c7e40();
   input += synapse0x40c7e80();
   input += synapse0x40c7ec0();
   input += synapse0x40c7f00();
   input += synapse0x3e89180();
   input += synapse0x3e891c0();
   input += synapse0x3e89200();
   input += synapse0x3e89240();
   input += synapse0x3e89280();
   input += synapse0x3e892c0();
   input += synapse0x3e89300();
   input += synapse0x40c7b50();
   input += synapse0x40c7b90();
   input += synapse0x3e89450();
   input += synapse0x3e89490();
   input += synapse0x3e894d0();
   input += synapse0x3e89510();
   input += synapse0x3e89550();
   input += synapse0x40c8750();
   return input;
}

double NNfunction_sg_dL::neuron0x40c79c0() {
   double input = input0x40c79c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40c8790() {
   double input = 0.0610642;
   input += synapse0x40c8ad0();
   input += synapse0x40c8b10();
   input += synapse0x40c8b50();
   input += synapse0x40c8b90();
   input += synapse0x40c8bd0();
   input += synapse0x40c8c10();
   input += synapse0x40c8c50();
   input += synapse0x40c8c90();
   input += synapse0x40c8cd0();
   input += synapse0x40c8d10();
   input += synapse0x40c8d50();
   input += synapse0x40c8d90();
   input += synapse0x40c8dd0();
   input += synapse0x40c8e10();
   input += synapse0x40c8e50();
   input += synapse0x40c8e90();
   input += synapse0x40c8920();
   input += synapse0x40c8960();
   input += synapse0x40c8fe0();
   input += synapse0x40c9020();
   input += synapse0x40c9060();
   input += synapse0x40c90a0();
   input += synapse0x40c90e0();
   input += synapse0x40c9120();
   return input;
}

double NNfunction_sg_dL::neuron0x40c8790() {
   double input = input0x40c8790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40c9160() {
   double input = 0.633327;
   input += synapse0x40c94a0();
   input += synapse0x40c94e0();
   input += synapse0x40c9520();
   input += synapse0x40c9560();
   input += synapse0x40c95a0();
   input += synapse0x40c95e0();
   input += synapse0x40c9620();
   input += synapse0x40c9660();
   input += synapse0x40c96a0();
   input += synapse0x40c96e0();
   input += synapse0x40c9720();
   input += synapse0x40c9760();
   input += synapse0x40c97a0();
   input += synapse0x40c97e0();
   input += synapse0x40c9820();
   input += synapse0x40c9860();
   input += synapse0x40c92f0();
   input += synapse0x40c9330();
   input += synapse0x40c99b0();
   input += synapse0x40c99f0();
   input += synapse0x40c9a30();
   input += synapse0x40c9a70();
   input += synapse0x40c9ab0();
   input += synapse0x40c9af0();
   return input;
}

double NNfunction_sg_dL::neuron0x40c9160() {
   double input = input0x40c9160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40c9b30() {
   double input = 0.190636;
   input += synapse0x40c24f0();
   input += synapse0x40c2530();
   input += synapse0x40c2570();
   input += synapse0x40c25b0();
   input += synapse0x40ca080();
   input += synapse0x40ca0c0();
   input += synapse0x40ca100();
   input += synapse0x40ca140();
   input += synapse0x40ca180();
   input += synapse0x40ca1c0();
   input += synapse0x40ca200();
   input += synapse0x40ca240();
   input += synapse0x40ca280();
   input += synapse0x40ca2c0();
   input += synapse0x40ca300();
   input += synapse0x40ca340();
   input += synapse0x40c9cc0();
   input += synapse0x40c9d00();
   input += synapse0x40ca490();
   input += synapse0x40ca4d0();
   input += synapse0x40ca510();
   input += synapse0x40ca550();
   input += synapse0x40ca590();
   input += synapse0x40ca5d0();
   return input;
}

double NNfunction_sg_dL::neuron0x40c9b30() {
   double input = input0x40c9b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40ca610() {
   double input = 0.0899985;
   input += synapse0x40ca950();
   input += synapse0x40ca990();
   input += synapse0x40ca9d0();
   input += synapse0x40caa10();
   input += synapse0x40caa50();
   input += synapse0x40caa90();
   input += synapse0x40caad0();
   input += synapse0x40cab10();
   input += synapse0x40cab50();
   input += synapse0x40cab90();
   input += synapse0x40cabd0();
   input += synapse0x40cac10();
   input += synapse0x40cac50();
   input += synapse0x40cac90();
   input += synapse0x40cacd0();
   input += synapse0x40cad10();
   input += synapse0x40ca7a0();
   input += synapse0x40ca7e0();
   input += synapse0x40cae60();
   input += synapse0x40caea0();
   input += synapse0x40caee0();
   input += synapse0x40caf20();
   input += synapse0x40caf60();
   input += synapse0x40cafa0();
   return input;
}

double NNfunction_sg_dL::neuron0x40ca610() {
   double input = input0x40ca610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40cafe0() {
   double input = 0.0437138;
   input += synapse0x40cb320();
   input += synapse0x40cb360();
   input += synapse0x40cb3a0();
   input += synapse0x40cb3e0();
   input += synapse0x40cb420();
   input += synapse0x40cb460();
   input += synapse0x40cb4a0();
   input += synapse0x40cb4e0();
   input += synapse0x40cb520();
   input += synapse0x40cb560();
   input += synapse0x40cb5a0();
   input += synapse0x40cb5e0();
   input += synapse0x40cb620();
   input += synapse0x40cb660();
   input += synapse0x40cb6a0();
   input += synapse0x40cb6e0();
   input += synapse0x40cb170();
   input += synapse0x40cb1b0();
   input += synapse0x40c7f40();
   input += synapse0x40c7f80();
   input += synapse0x40c7fc0();
   input += synapse0x40c8000();
   input += synapse0x40c8040();
   input += synapse0x40c8080();
   return input;
}

double NNfunction_sg_dL::neuron0x40cafe0() {
   double input = input0x40cafe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40c80c0() {
   double input = -0.754445;
   input += synapse0x40c8400();
   input += synapse0x40c8440();
   input += synapse0x40c8480();
   input += synapse0x40c84c0();
   input += synapse0x40c8500();
   input += synapse0x40c8540();
   input += synapse0x40c8580();
   input += synapse0x40c85c0();
   input += synapse0x40c8600();
   input += synapse0x40c8640();
   input += synapse0x40c8680();
   input += synapse0x40c86c0();
   input += synapse0x40c8700();
   input += synapse0x40cc840();
   input += synapse0x40cc880();
   input += synapse0x40cc8c0();
   input += synapse0x40c8250();
   input += synapse0x40c8290();
   input += synapse0x40cca10();
   input += synapse0x40cca50();
   input += synapse0x40cca90();
   input += synapse0x40ccad0();
   input += synapse0x40ccb10();
   input += synapse0x40ccb50();
   return input;
}

double NNfunction_sg_dL::neuron0x40c80c0() {
   double input = input0x40c80c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40ccb90() {
   double input = -0.127669;
   input += synapse0x40cced0();
   input += synapse0x40ccf10();
   input += synapse0x40ccf50();
   input += synapse0x40ccf90();
   input += synapse0x40ccfd0();
   input += synapse0x40cd010();
   input += synapse0x40cd050();
   input += synapse0x40cd090();
   input += synapse0x40cd0d0();
   input += synapse0x40cd110();
   input += synapse0x40cd150();
   input += synapse0x40cd190();
   input += synapse0x40cd1d0();
   input += synapse0x40cd210();
   input += synapse0x40cd250();
   input += synapse0x40cd290();
   input += synapse0x40ccd20();
   input += synapse0x40ccd60();
   input += synapse0x40cd3e0();
   input += synapse0x40cd420();
   input += synapse0x40cd460();
   input += synapse0x40cd4a0();
   input += synapse0x40cd4e0();
   input += synapse0x40cd520();
   return input;
}

double NNfunction_sg_dL::neuron0x40ccb90() {
   double input = input0x40ccb90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40cd560() {
   double input = -0.250569;
   input += synapse0x40cd8a0();
   input += synapse0x40cd8e0();
   input += synapse0x40cd920();
   input += synapse0x40cd960();
   input += synapse0x40cd9a0();
   input += synapse0x40cd9e0();
   input += synapse0x40cda20();
   input += synapse0x40cda60();
   input += synapse0x40cdaa0();
   input += synapse0x40cdae0();
   input += synapse0x40cdb20();
   input += synapse0x40cdb60();
   input += synapse0x40cdba0();
   input += synapse0x40cdbe0();
   input += synapse0x40cdc20();
   input += synapse0x40cdc60();
   input += synapse0x40cd6f0();
   input += synapse0x40cd730();
   input += synapse0x40cddb0();
   input += synapse0x40cddf0();
   input += synapse0x40cde30();
   input += synapse0x40cde70();
   input += synapse0x40cdeb0();
   input += synapse0x40cdef0();
   return input;
}

double NNfunction_sg_dL::neuron0x40cd560() {
   double input = input0x40cd560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40cdf30() {
   double input = 0.676519;
   input += synapse0x40ce270();
   input += synapse0x40ce2b0();
   input += synapse0x40ce2f0();
   input += synapse0x40ce330();
   input += synapse0x40ce370();
   input += synapse0x40ce3b0();
   input += synapse0x40ce3f0();
   input += synapse0x40ce430();
   input += synapse0x40ce470();
   input += synapse0x40ce4b0();
   input += synapse0x40ce4f0();
   input += synapse0x40ce530();
   input += synapse0x40ce570();
   input += synapse0x40ce5b0();
   input += synapse0x40ce5f0();
   input += synapse0x40ce630();
   input += synapse0x40ce0c0();
   input += synapse0x40ce100();
   input += synapse0x40ce780();
   input += synapse0x40ce7c0();
   input += synapse0x40ce800();
   input += synapse0x40ce840();
   input += synapse0x40ce880();
   input += synapse0x40ce8c0();
   return input;
}

double NNfunction_sg_dL::neuron0x40cdf30() {
   double input = input0x40cdf30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40ce900() {
   double input = -1.34107;
   input += synapse0x40cec40();
   input += synapse0x40beec0();
   input += synapse0x40bef00();
   input += synapse0x40bf200();
   input += synapse0x40bf240();
   input += synapse0x40bf540();
   input += synapse0x40bf580();
   input += synapse0x40bf880();
   input += synapse0x40bf8c0();
   input += synapse0x40bfbc0();
   input += synapse0x40bfc00();
   input += synapse0x40bff00();
   input += synapse0x40bff40();
   input += synapse0x40c0240();
   input += synapse0x40c0280();
   input += synapse0x40c0580();
   input += synapse0x40c05c0();
   input += synapse0x40c08c0();
   input += synapse0x40c0900();
   input += synapse0x40c0c00();
   input += synapse0x40c0c40();
   input += synapse0x40c0f40();
   input += synapse0x40c0f80();
   input += synapse0x40c1280();
   return input;
}

double NNfunction_sg_dL::neuron0x40ce900() {
   double input = input0x40ce900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40d0710() {
   double input = 1.66731;
   input += synapse0x40c12c0();
   input += synapse0x40c1f80();
   input += synapse0x40c1fc0();
   input += synapse0x40cea90();
   input += synapse0x40cead0();
   input += synapse0x40c22c0();
   input += synapse0x40c2300();
   input += synapse0x2cfdd30();
   input += synapse0x2cfdd70();
   input += synapse0x40c2a40();
   input += synapse0x40c2a80();
   input += synapse0x40c2d80();
   input += synapse0x40c2dc0();
   input += synapse0x40c30c0();
   input += synapse0x40c3100();
   input += synapse0x40c3400();
   input += synapse0x40c3440();
   input += synapse0x40c3740();
   input += synapse0x40c3780();
   input += synapse0x40c3a80();
   input += synapse0x40c3ac0();
   input += synapse0x40c15c0();
   input += synapse0x40c1600();
   input += synapse0x40d09b0();
   return input;
}

double NNfunction_sg_dL::neuron0x40d0710() {
   double input = input0x40d0710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40d09f0() {
   double input = -1.92895;
   input += synapse0x40d0d30();
   input += synapse0x40d0d70();
   input += synapse0x40d0db0();
   input += synapse0x40d0df0();
   input += synapse0x40d0e30();
   input += synapse0x40d0e70();
   input += synapse0x40d0eb0();
   input += synapse0x40d0ef0();
   input += synapse0x40d0f30();
   input += synapse0x40d0f70();
   input += synapse0x40d0fb0();
   input += synapse0x40d0ff0();
   input += synapse0x40d1030();
   input += synapse0x40d1070();
   input += synapse0x40d10b0();
   input += synapse0x40d10f0();
   input += synapse0x40d0b80();
   input += synapse0x40d0bc0();
   input += synapse0x40d1240();
   input += synapse0x40d1280();
   input += synapse0x40d12c0();
   input += synapse0x40d1300();
   input += synapse0x40d1340();
   input += synapse0x40d1380();
   return input;
}

double NNfunction_sg_dL::neuron0x40d09f0() {
   double input = input0x40d09f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40d13c0() {
   double input = -0.0656253;
   input += synapse0x40d1700();
   input += synapse0x40d1740();
   input += synapse0x40d1780();
   input += synapse0x40d17c0();
   input += synapse0x40d1800();
   input += synapse0x40d1840();
   input += synapse0x40d1880();
   input += synapse0x40d18c0();
   input += synapse0x40d1900();
   input += synapse0x40d1940();
   input += synapse0x40d1980();
   input += synapse0x40d19c0();
   input += synapse0x40d1a00();
   input += synapse0x40d1a40();
   input += synapse0x40d1a80();
   input += synapse0x40d1ac0();
   input += synapse0x40d1550();
   input += synapse0x40d1590();
   input += synapse0x40d1c10();
   input += synapse0x40d1c50();
   input += synapse0x40d1c90();
   input += synapse0x40d1cd0();
   input += synapse0x40d1d10();
   input += synapse0x40d1d50();
   return input;
}

double NNfunction_sg_dL::neuron0x40d13c0() {
   double input = input0x40d13c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40d1d90() {
   double input = -0.613964;
   input += synapse0x40d20d0();
   input += synapse0x40d2110();
   input += synapse0x40d2150();
   input += synapse0x40d2190();
   input += synapse0x40d21d0();
   input += synapse0x40d2210();
   input += synapse0x40d2250();
   input += synapse0x40d2290();
   input += synapse0x40d22d0();
   input += synapse0x40d2310();
   input += synapse0x40d2350();
   input += synapse0x40d2390();
   input += synapse0x40d23d0();
   input += synapse0x40d2410();
   input += synapse0x40d2450();
   input += synapse0x40d2490();
   input += synapse0x40d1f20();
   input += synapse0x40d1f60();
   input += synapse0x40d25e0();
   input += synapse0x40d2620();
   input += synapse0x40d2660();
   input += synapse0x40d26a0();
   input += synapse0x40d26e0();
   input += synapse0x40d2720();
   return input;
}

double NNfunction_sg_dL::neuron0x40d1d90() {
   double input = input0x40d1d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40d2760() {
   double input = -0.14327;
   input += synapse0x40d2aa0();
   input += synapse0x40d2ae0();
   input += synapse0x40d2b20();
   input += synapse0x40d2b60();
   input += synapse0x40d2ba0();
   input += synapse0x40d2be0();
   input += synapse0x40d2c20();
   input += synapse0x40d2c60();
   input += synapse0x40d2ca0();
   input += synapse0x40d2ce0();
   input += synapse0x40d2d20();
   input += synapse0x40d2d60();
   input += synapse0x40d2da0();
   input += synapse0x40d2de0();
   input += synapse0x40d2e20();
   input += synapse0x40d2e60();
   input += synapse0x40d28f0();
   input += synapse0x40d2930();
   input += synapse0x40d2fb0();
   input += synapse0x40d2ff0();
   input += synapse0x40d3030();
   input += synapse0x40d3070();
   input += synapse0x40d30b0();
   input += synapse0x40d30f0();
   return input;
}

double NNfunction_sg_dL::neuron0x40d2760() {
   double input = input0x40d2760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40d3130() {
   double input = -0.0726562;
   input += synapse0x40d3470();
   input += synapse0x40d34b0();
   input += synapse0x40d34f0();
   input += synapse0x40d3530();
   input += synapse0x40d3570();
   input += synapse0x40d35b0();
   input += synapse0x40d35f0();
   input += synapse0x40d3630();
   input += synapse0x40d3670();
   input += synapse0x40cb830();
   input += synapse0x40cb870();
   input += synapse0x40cb8b0();
   input += synapse0x40cb8f0();
   input += synapse0x40cb930();
   input += synapse0x40cb970();
   input += synapse0x40cb9b0();
   input += synapse0x40d32c0();
   input += synapse0x40d3300();
   input += synapse0x40cbb00();
   input += synapse0x40cbb40();
   input += synapse0x40cbb80();
   input += synapse0x40cbbc0();
   input += synapse0x40cbc00();
   input += synapse0x40cbc40();
   return input;
}

double NNfunction_sg_dL::neuron0x40d3130() {
   double input = input0x40d3130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40cbc80() {
   double input = -0.00874256;
   input += synapse0x40cbfc0();
   input += synapse0x40cc000();
   input += synapse0x40cc040();
   input += synapse0x40cc080();
   input += synapse0x40cc0c0();
   input += synapse0x40cc100();
   input += synapse0x40cc140();
   input += synapse0x40cc180();
   input += synapse0x40cc1c0();
   input += synapse0x40cc200();
   input += synapse0x40cc240();
   input += synapse0x40cc280();
   input += synapse0x40cc2c0();
   input += synapse0x40cc300();
   input += synapse0x40cc340();
   input += synapse0x40cc380();
   input += synapse0x40cbe10();
   input += synapse0x40cbe50();
   input += synapse0x40cc4d0();
   input += synapse0x40cc510();
   input += synapse0x40cc550();
   input += synapse0x40cc590();
   input += synapse0x40cc5d0();
   input += synapse0x40cc610();
   return input;
}

double NNfunction_sg_dL::neuron0x40cbc80() {
   double input = input0x40cbc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40cc650() {
   double input = -0.415968;
   input += synapse0x40cc7e0();
   input += synapse0x40d5870();
   input += synapse0x40d58b0();
   input += synapse0x40d58f0();
   input += synapse0x40d5930();
   input += synapse0x40d5970();
   input += synapse0x40d59b0();
   input += synapse0x40d59f0();
   input += synapse0x40d5a30();
   input += synapse0x40d5a70();
   input += synapse0x40d5ab0();
   input += synapse0x40d5af0();
   input += synapse0x40d5b30();
   input += synapse0x40d5b70();
   input += synapse0x40d5bb0();
   input += synapse0x40d5bf0();
   input += synapse0x40d56c0();
   input += synapse0x40d5700();
   input += synapse0x40d5d40();
   input += synapse0x40d5d80();
   input += synapse0x40d5dc0();
   input += synapse0x40d5e00();
   input += synapse0x40d5e40();
   input += synapse0x40d5e80();
   return input;
}

double NNfunction_sg_dL::neuron0x40cc650() {
   double input = input0x40cc650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40d5ec0() {
   double input = 0.298801;
   input += synapse0x40d6200();
   input += synapse0x40d6240();
   input += synapse0x40d6280();
   input += synapse0x40d62c0();
   input += synapse0x40d6300();
   input += synapse0x40d6340();
   input += synapse0x40d6380();
   input += synapse0x40d63c0();
   input += synapse0x40d6400();
   input += synapse0x40d6440();
   input += synapse0x40d6480();
   input += synapse0x40d64c0();
   input += synapse0x40d6500();
   input += synapse0x40d6540();
   input += synapse0x40d6580();
   input += synapse0x40d65c0();
   input += synapse0x40d6050();
   input += synapse0x40d6090();
   input += synapse0x40d6710();
   input += synapse0x40d6750();
   input += synapse0x40d6790();
   input += synapse0x40d67d0();
   input += synapse0x40d6810();
   input += synapse0x40d6850();
   return input;
}

double NNfunction_sg_dL::neuron0x40d5ec0() {
   double input = input0x40d5ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40d6890() {
   double input = -1.08447;
   input += synapse0x40d6bd0();
   input += synapse0x40d6c10();
   input += synapse0x40d6c50();
   input += synapse0x40d6c90();
   input += synapse0x40d6cd0();
   input += synapse0x40d6d10();
   input += synapse0x40d6d50();
   input += synapse0x40d6d90();
   input += synapse0x40d6dd0();
   input += synapse0x40d6e10();
   input += synapse0x40d6e50();
   input += synapse0x40d6e90();
   input += synapse0x40d6ed0();
   input += synapse0x40d6f10();
   input += synapse0x40d6f50();
   input += synapse0x40d6f90();
   input += synapse0x40d6a20();
   input += synapse0x40d6a60();
   input += synapse0x40d70e0();
   input += synapse0x40d7120();
   input += synapse0x40d7160();
   input += synapse0x40d71a0();
   input += synapse0x40d71e0();
   input += synapse0x40d7220();
   return input;
}

double NNfunction_sg_dL::neuron0x40d6890() {
   double input = input0x40d6890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40d7260() {
   double input = 0.0586684;
   input += synapse0x40d75a0();
   input += synapse0x40d75e0();
   input += synapse0x40d7620();
   input += synapse0x40d7660();
   input += synapse0x40d76a0();
   input += synapse0x40d76e0();
   input += synapse0x40d7720();
   input += synapse0x40d7760();
   input += synapse0x40d77a0();
   input += synapse0x40d77e0();
   input += synapse0x40d7820();
   input += synapse0x40d7860();
   input += synapse0x40d78a0();
   input += synapse0x40d78e0();
   input += synapse0x40d7920();
   input += synapse0x40d7960();
   input += synapse0x40d73f0();
   input += synapse0x40d7430();
   input += synapse0x40d7ab0();
   input += synapse0x40d7af0();
   input += synapse0x40d7b30();
   input += synapse0x40d7b70();
   input += synapse0x40d7bb0();
   input += synapse0x40d7bf0();
   return input;
}

double NNfunction_sg_dL::neuron0x40d7260() {
   double input = input0x40d7260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40d7c30() {
   double input = -0.476139;
   input += synapse0x40d7f70();
   input += synapse0x40d7fb0();
   input += synapse0x40d7ff0();
   input += synapse0x40d8030();
   input += synapse0x40d8070();
   input += synapse0x40d80b0();
   input += synapse0x40d80f0();
   input += synapse0x40d8130();
   input += synapse0x40d8170();
   input += synapse0x40d81b0();
   input += synapse0x40d81f0();
   input += synapse0x40d8230();
   input += synapse0x40d8270();
   input += synapse0x40d82b0();
   input += synapse0x40d82f0();
   input += synapse0x40d8330();
   input += synapse0x40d7dc0();
   input += synapse0x40d7e00();
   input += synapse0x40d8480();
   input += synapse0x40d84c0();
   input += synapse0x40d8500();
   input += synapse0x40d8540();
   input += synapse0x40d8580();
   input += synapse0x40d85c0();
   return input;
}

double NNfunction_sg_dL::neuron0x40d7c30() {
   double input = input0x40d7c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40d8600() {
   double input = 0.205862;
   input += synapse0x40d8940();
   input += synapse0x40d8980();
   input += synapse0x40d89c0();
   input += synapse0x40d8a00();
   input += synapse0x40d8a40();
   input += synapse0x40d8a80();
   input += synapse0x40d8ac0();
   input += synapse0x40d8b00();
   input += synapse0x40d8b40();
   input += synapse0x40d8b80();
   input += synapse0x40d8bc0();
   input += synapse0x40d8c00();
   input += synapse0x40d8c40();
   input += synapse0x40d8c80();
   input += synapse0x40d8cc0();
   input += synapse0x40d8d00();
   input += synapse0x40d8790();
   input += synapse0x40d87d0();
   input += synapse0x40d8e50();
   input += synapse0x40d8e90();
   input += synapse0x40d8ed0();
   input += synapse0x40d8f10();
   input += synapse0x40d8f50();
   input += synapse0x40d8f90();
   return input;
}

double NNfunction_sg_dL::neuron0x40d8600() {
   double input = input0x40d8600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40d8fd0() {
   double input = -0.450121;
   input += synapse0x40d9310();
   input += synapse0x40d9350();
   input += synapse0x40d9390();
   input += synapse0x40d93d0();
   input += synapse0x40d9410();
   input += synapse0x40d9450();
   input += synapse0x40d9490();
   input += synapse0x40d94d0();
   input += synapse0x40d9510();
   input += synapse0x40d9550();
   input += synapse0x40d9590();
   input += synapse0x40d95d0();
   input += synapse0x40d9610();
   input += synapse0x40d9650();
   input += synapse0x40d9690();
   input += synapse0x40d96d0();
   input += synapse0x40d9160();
   input += synapse0x40d91a0();
   input += synapse0x40d9820();
   input += synapse0x40d9860();
   input += synapse0x40d98a0();
   input += synapse0x40d98e0();
   input += synapse0x40d9920();
   input += synapse0x40d9960();
   return input;
}

double NNfunction_sg_dL::neuron0x40d8fd0() {
   double input = input0x40d8fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40d99a0() {
   double input = 0.0230606;
   input += synapse0x40d9ce0();
   input += synapse0x40d9d20();
   input += synapse0x40d9d60();
   input += synapse0x40d9da0();
   input += synapse0x40d9de0();
   input += synapse0x40d9e20();
   input += synapse0x40d9e60();
   input += synapse0x40d9ea0();
   input += synapse0x40d9ee0();
   input += synapse0x40d9f20();
   input += synapse0x40d9f60();
   input += synapse0x40d9fa0();
   input += synapse0x40d9fe0();
   input += synapse0x40da020();
   input += synapse0x40da060();
   input += synapse0x40da0a0();
   input += synapse0x40d9b30();
   input += synapse0x40d9b70();
   input += synapse0x40da1f0();
   input += synapse0x40da230();
   input += synapse0x40da270();
   input += synapse0x40da2b0();
   input += synapse0x40da2f0();
   input += synapse0x40da330();
   return input;
}

double NNfunction_sg_dL::neuron0x40d99a0() {
   double input = input0x40d99a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40da370() {
   double input = 0.262291;
   input += synapse0x40da6b0();
   input += synapse0x40cec80();
   input += synapse0x40cecc0();
   input += synapse0x40ced00();
   input += synapse0x40cef50();
   input += synapse0x40cef90();
   input += synapse0x40cefd0();
   input += synapse0x40cf220();
   input += synapse0x40cf260();
   input += synapse0x40cf4b0();
   input += synapse0x40cf4f0();
   input += synapse0x40cf530();
   input += synapse0x40cf780();
   input += synapse0x40cf7c0();
   input += synapse0x40cfa10();
   input += synapse0x40cfa50();
   input += synapse0x40da500();
   input += synapse0x40da540();
   input += synapse0x40cfba0();
   input += synapse0x40d00b0();
   input += synapse0x40d00f0();
   input += synapse0x40d0130();
   input += synapse0x40d0380();
   input += synapse0x40d03c0();
   return input;
}

double NNfunction_sg_dL::neuron0x40da370() {
   double input = input0x40da370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40d0400() {
   double input = 2.38881;
   input += synapse0x40cfc70();
   input += synapse0x40cfcb0();
   input += synapse0x40cfcf0();
   input += synapse0x40cfd30();
   input += synapse0x40d06b0();
   input += synapse0x40dca00();
   input += synapse0x40dca40();
   input += synapse0x40dca80();
   input += synapse0x40dcac0();
   input += synapse0x40dcb00();
   input += synapse0x40dcb40();
   input += synapse0x40dcb80();
   input += synapse0x40dcbc0();
   input += synapse0x40dcc00();
   input += synapse0x40dcc40();
   input += synapse0x40dcc80();
   input += synapse0x40d0590();
   input += synapse0x40d05d0();
   input += synapse0x40dcdd0();
   input += synapse0x40dce10();
   input += synapse0x40dce50();
   input += synapse0x40dce90();
   input += synapse0x40dced0();
   input += synapse0x40dcf10();
   return input;
}

double NNfunction_sg_dL::neuron0x40d0400() {
   double input = input0x40d0400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40dcf50() {
   double input = 0.0191408;
   input += synapse0x40dd290();
   input += synapse0x40dd2d0();
   input += synapse0x40dd310();
   input += synapse0x40dd350();
   input += synapse0x40dd390();
   input += synapse0x40dd3d0();
   input += synapse0x40dd410();
   input += synapse0x40dd450();
   input += synapse0x40dd490();
   input += synapse0x40dd4d0();
   input += synapse0x40dd510();
   input += synapse0x40dd550();
   input += synapse0x40dd590();
   input += synapse0x40dd5d0();
   input += synapse0x40dd610();
   input += synapse0x40dd650();
   input += synapse0x40dd0e0();
   input += synapse0x40dd120();
   input += synapse0x40dd7a0();
   input += synapse0x40dd7e0();
   input += synapse0x40dd820();
   input += synapse0x40dd860();
   input += synapse0x40dd8a0();
   input += synapse0x40dd8e0();
   return input;
}

double NNfunction_sg_dL::neuron0x40dcf50() {
   double input = input0x40dcf50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40dd920() {
   double input = 0.350113;
   input += synapse0x40ddc60();
   input += synapse0x40ddca0();
   input += synapse0x40ddce0();
   input += synapse0x40ddd20();
   input += synapse0x40ddd60();
   input += synapse0x40ddda0();
   input += synapse0x40ddde0();
   input += synapse0x40dde20();
   input += synapse0x40dde60();
   input += synapse0x40ddea0();
   input += synapse0x40ddee0();
   input += synapse0x40ddf20();
   input += synapse0x40ddf60();
   input += synapse0x40ddfa0();
   input += synapse0x40ddfe0();
   input += synapse0x40de020();
   input += synapse0x40ddab0();
   input += synapse0x40ddaf0();
   input += synapse0x40de170();
   input += synapse0x40de1b0();
   input += synapse0x40de1f0();
   input += synapse0x40de230();
   input += synapse0x40de270();
   input += synapse0x40de2b0();
   return input;
}

double NNfunction_sg_dL::neuron0x40dd920() {
   double input = input0x40dd920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40de2f0() {
   double input = -0.280047;
   input += synapse0x40de630();
   input += synapse0x40de670();
   input += synapse0x40de6b0();
   input += synapse0x40de6f0();
   input += synapse0x40de730();
   input += synapse0x40de770();
   input += synapse0x40de7b0();
   input += synapse0x40de7f0();
   input += synapse0x40de830();
   input += synapse0x40de870();
   input += synapse0x40de8b0();
   input += synapse0x40de8f0();
   input += synapse0x40de930();
   input += synapse0x40de970();
   input += synapse0x40de9b0();
   input += synapse0x40de9f0();
   input += synapse0x40de480();
   input += synapse0x40de4c0();
   input += synapse0x40deb40();
   input += synapse0x40deb80();
   input += synapse0x40debc0();
   input += synapse0x40dec00();
   input += synapse0x40dec40();
   input += synapse0x40dec80();
   return input;
}

double NNfunction_sg_dL::neuron0x40de2f0() {
   double input = input0x40de2f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40decc0() {
   double input = -0.770022;
   input += synapse0x40df000();
   input += synapse0x40df040();
   input += synapse0x40df080();
   input += synapse0x40df0c0();
   input += synapse0x40df100();
   input += synapse0x40df140();
   input += synapse0x40df180();
   input += synapse0x40df1c0();
   input += synapse0x40df200();
   input += synapse0x40df240();
   input += synapse0x40df280();
   input += synapse0x40df2c0();
   input += synapse0x40df300();
   input += synapse0x40df340();
   input += synapse0x40df380();
   input += synapse0x40df3c0();
   input += synapse0x40dee50();
   input += synapse0x40dee90();
   input += synapse0x40df510();
   input += synapse0x40df550();
   input += synapse0x40df590();
   input += synapse0x40df5d0();
   input += synapse0x40df610();
   input += synapse0x40df650();
   return input;
}

double NNfunction_sg_dL::neuron0x40decc0() {
   double input = input0x40decc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40df690() {
   double input = -0.603026;
   input += synapse0x40df9d0();
   input += synapse0x40dfa10();
   input += synapse0x40dfa50();
   input += synapse0x40dfa90();
   input += synapse0x40dfad0();
   input += synapse0x40dfb10();
   input += synapse0x40dfb50();
   input += synapse0x40dfb90();
   input += synapse0x40dfbd0();
   input += synapse0x40dfc10();
   input += synapse0x40dfc50();
   input += synapse0x40dfc90();
   input += synapse0x40dfcd0();
   input += synapse0x40dfd10();
   input += synapse0x40dfd50();
   input += synapse0x40dfd90();
   input += synapse0x40df820();
   input += synapse0x40df860();
   input += synapse0x40dfee0();
   input += synapse0x40dff20();
   input += synapse0x40dff60();
   input += synapse0x40dffa0();
   input += synapse0x40dffe0();
   input += synapse0x40e0020();
   return input;
}

double NNfunction_sg_dL::neuron0x40df690() {
   double input = input0x40df690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40e0060() {
   double input = 3.90846;
   input += synapse0x40e03a0();
   input += synapse0x40e03e0();
   input += synapse0x40e0420();
   input += synapse0x40e0460();
   input += synapse0x40e04a0();
   input += synapse0x40e04e0();
   input += synapse0x40e0520();
   input += synapse0x40e0560();
   input += synapse0x40e05a0();
   input += synapse0x40e05e0();
   input += synapse0x40e0620();
   input += synapse0x40e0660();
   input += synapse0x40e06a0();
   input += synapse0x40e06e0();
   input += synapse0x40e0720();
   input += synapse0x40e0760();
   input += synapse0x40e01f0();
   input += synapse0x40e0230();
   input += synapse0x40e08b0();
   input += synapse0x40e08f0();
   input += synapse0x40e0930();
   input += synapse0x40e0970();
   input += synapse0x40e09b0();
   input += synapse0x40e09f0();
   return input;
}

double NNfunction_sg_dL::neuron0x40e0060() {
   double input = input0x40e0060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40e0a30() {
   double input = 0.334593;
   input += synapse0x40e0d70();
   input += synapse0x40e0db0();
   input += synapse0x40e0df0();
   input += synapse0x40e0e30();
   input += synapse0x40e0e70();
   input += synapse0x40e0eb0();
   input += synapse0x40e0ef0();
   input += synapse0x40e0f30();
   input += synapse0x40e0f70();
   input += synapse0x40e0fb0();
   input += synapse0x40e0ff0();
   input += synapse0x40e1030();
   input += synapse0x40e1070();
   input += synapse0x40e10b0();
   input += synapse0x40e10f0();
   input += synapse0x40e1130();
   input += synapse0x40e0bc0();
   input += synapse0x40e0c00();
   input += synapse0x40e1280();
   input += synapse0x40e12c0();
   input += synapse0x40e1300();
   input += synapse0x40e1340();
   input += synapse0x40e1380();
   input += synapse0x40e13c0();
   return input;
}

double NNfunction_sg_dL::neuron0x40e0a30() {
   double input = input0x40e0a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40e1400() {
   double input = -0.207851;
   input += synapse0x40c9e70();
   input += synapse0x40c9eb0();
   input += synapse0x40c9ef0();
   input += synapse0x40c9f30();
   input += synapse0x40c9f70();
   input += synapse0x40c9fb0();
   input += synapse0x40c9ff0();
   input += synapse0x40ca030();
   input += synapse0x40e1b50();
   input += synapse0x40e1b90();
   input += synapse0x40e1bd0();
   input += synapse0x40e1c10();
   input += synapse0x40e1c50();
   input += synapse0x40e1c90();
   input += synapse0x40e1cd0();
   input += synapse0x40e1d10();
   input += synapse0x40e1590();
   input += synapse0x40e15d0();
   input += synapse0x40e1e60();
   input += synapse0x40e1ea0();
   input += synapse0x40e1ee0();
   input += synapse0x40e1f20();
   input += synapse0x40e1f60();
   input += synapse0x40e1fa0();
   return input;
}

double NNfunction_sg_dL::neuron0x40e1400() {
   double input = input0x40e1400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40e1fe0() {
   double input = 1.09239;
   input += synapse0x40e2320();
   input += synapse0x40e2360();
   input += synapse0x40e23a0();
   input += synapse0x40e23e0();
   input += synapse0x40e2420();
   input += synapse0x40e2460();
   input += synapse0x40e24a0();
   input += synapse0x40e24e0();
   input += synapse0x40e2520();
   input += synapse0x40e2560();
   input += synapse0x40e25a0();
   input += synapse0x40e25e0();
   input += synapse0x40e2620();
   input += synapse0x40e2660();
   input += synapse0x40e26a0();
   input += synapse0x40e26e0();
   input += synapse0x40e2170();
   input += synapse0x40e21b0();
   input += synapse0x40e2830();
   input += synapse0x40e2870();
   input += synapse0x40e28b0();
   input += synapse0x40e28f0();
   input += synapse0x40e2930();
   input += synapse0x40e2970();
   return input;
}

double NNfunction_sg_dL::neuron0x40e1fe0() {
   double input = input0x40e1fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40e29b0() {
   double input = 0.74154;
   input += synapse0x40e2cf0();
   input += synapse0x40e2d30();
   input += synapse0x40e2d70();
   input += synapse0x40e2db0();
   input += synapse0x40e2df0();
   input += synapse0x40e2e30();
   input += synapse0x40e2e70();
   input += synapse0x40e2eb0();
   input += synapse0x40e2ef0();
   input += synapse0x40e2f30();
   input += synapse0x40e2f70();
   input += synapse0x40e2fb0();
   input += synapse0x40e2ff0();
   input += synapse0x40e3030();
   input += synapse0x40e3070();
   input += synapse0x40e30b0();
   input += synapse0x40e2b40();
   input += synapse0x40e2b80();
   input += synapse0x40d36b0();
   input += synapse0x40d36f0();
   input += synapse0x40d3730();
   input += synapse0x40d3770();
   input += synapse0x40d37b0();
   input += synapse0x40d37f0();
   return input;
}

double NNfunction_sg_dL::neuron0x40e29b0() {
   double input = input0x40e29b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40d3830() {
   double input = 1.03921;
   input += synapse0x40d3b70();
   input += synapse0x40d3bb0();
   input += synapse0x40d3bf0();
   input += synapse0x40d3c30();
   input += synapse0x40d3c70();
   input += synapse0x40d3cb0();
   input += synapse0x40d3cf0();
   input += synapse0x40d3d30();
   input += synapse0x40d3d70();
   input += synapse0x40d3db0();
   input += synapse0x40d3df0();
   input += synapse0x40d3e30();
   input += synapse0x40d3e70();
   input += synapse0x40d3eb0();
   input += synapse0x40d3ef0();
   input += synapse0x40d3f30();
   input += synapse0x40d39c0();
   input += synapse0x40d3a00();
   input += synapse0x40d4080();
   input += synapse0x40d40c0();
   input += synapse0x40d4100();
   input += synapse0x40d4140();
   input += synapse0x40d4180();
   input += synapse0x40d41c0();
   return input;
}

double NNfunction_sg_dL::neuron0x40d3830() {
   double input = input0x40d3830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40d4200() {
   double input = 1.9112;
   input += synapse0x40d4540();
   input += synapse0x40d4580();
   input += synapse0x40d45c0();
   input += synapse0x40d4600();
   input += synapse0x40d4640();
   input += synapse0x40d4680();
   input += synapse0x40d46c0();
   input += synapse0x40d4700();
   input += synapse0x40d4740();
   input += synapse0x40d4780();
   input += synapse0x40d47c0();
   input += synapse0x40d4800();
   input += synapse0x40d4840();
   input += synapse0x40d4880();
   input += synapse0x40d48c0();
   input += synapse0x40d4900();
   input += synapse0x40d4390();
   input += synapse0x40d43d0();
   input += synapse0x40d4a50();
   input += synapse0x40d4a90();
   input += synapse0x40d4ad0();
   input += synapse0x40d4b10();
   input += synapse0x40d4b50();
   input += synapse0x40d4b90();
   return input;
}

double NNfunction_sg_dL::neuron0x40d4200() {
   double input = input0x40d4200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40d4bd0() {
   double input = -0.418094;
   input += synapse0x40d4f10();
   input += synapse0x40d4f50();
   input += synapse0x40d4f90();
   input += synapse0x40d4fd0();
   input += synapse0x40d5010();
   input += synapse0x40d5050();
   input += synapse0x40d5090();
   input += synapse0x40d50d0();
   input += synapse0x40d5110();
   input += synapse0x40d5150();
   input += synapse0x40d5190();
   input += synapse0x40d51d0();
   input += synapse0x40d5210();
   input += synapse0x40d5250();
   input += synapse0x40d5290();
   input += synapse0x40d52d0();
   input += synapse0x40d4d60();
   input += synapse0x40d4da0();
   input += synapse0x40d5420();
   input += synapse0x40d5460();
   input += synapse0x40d54a0();
   input += synapse0x40d54e0();
   input += synapse0x40d5520();
   input += synapse0x40d5560();
   return input;
}

double NNfunction_sg_dL::neuron0x40d4bd0() {
   double input = input0x40d4bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40e7210() {
   double input = -3.4844;
   input += synapse0x40e7430();
   input += synapse0x40e7470();
   input += synapse0x40e74b0();
   input += synapse0x40e74f0();
   input += synapse0x40e7530();
   input += synapse0x40e7570();
   input += synapse0x40e75b0();
   input += synapse0x40e75f0();
   input += synapse0x40e7630();
   input += synapse0x40e7670();
   input += synapse0x40e76b0();
   input += synapse0x40e76f0();
   input += synapse0x40e7730();
   input += synapse0x40e7770();
   input += synapse0x40e77b0();
   input += synapse0x40e77f0();
   input += synapse0x40d55a0();
   input += synapse0x40d55e0();
   input += synapse0x40e7940();
   input += synapse0x40e7980();
   input += synapse0x40e79c0();
   input += synapse0x40e7a00();
   input += synapse0x40e7a40();
   input += synapse0x40e7a80();
   return input;
}

double NNfunction_sg_dL::neuron0x40e7210() {
   double input = input0x40e7210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40e7ac0() {
   double input = 3.37798;
   input += synapse0x40e7e00();
   input += synapse0x40e7e40();
   input += synapse0x40e7e80();
   input += synapse0x40e7ec0();
   input += synapse0x40e7f00();
   input += synapse0x40e7f40();
   input += synapse0x40e7f80();
   input += synapse0x40e7fc0();
   input += synapse0x40e8000();
   input += synapse0x40e8040();
   input += synapse0x40e8080();
   input += synapse0x40e80c0();
   input += synapse0x40e8100();
   input += synapse0x40e8140();
   input += synapse0x40e8180();
   input += synapse0x40e81c0();
   input += synapse0x40e7c50();
   input += synapse0x40e7c90();
   input += synapse0x40e8310();
   input += synapse0x40e8350();
   input += synapse0x40e8390();
   input += synapse0x40e83d0();
   input += synapse0x40e8410();
   input += synapse0x40e8450();
   return input;
}

double NNfunction_sg_dL::neuron0x40e7ac0() {
   double input = input0x40e7ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40e8490() {
   double input = -1.12123;
   input += synapse0x40e87d0();
   input += synapse0x40e8810();
   input += synapse0x40e8850();
   input += synapse0x40e8890();
   input += synapse0x40e88d0();
   input += synapse0x40e8910();
   input += synapse0x40e8950();
   input += synapse0x40e8990();
   input += synapse0x40e89d0();
   input += synapse0x40e8a10();
   input += synapse0x40e8a50();
   input += synapse0x40e8a90();
   input += synapse0x40e8ad0();
   input += synapse0x40e8b10();
   input += synapse0x40e8b50();
   input += synapse0x40e8b90();
   input += synapse0x40e8620();
   input += synapse0x40e8660();
   input += synapse0x40e8ce0();
   input += synapse0x40e8d20();
   input += synapse0x40e8d60();
   input += synapse0x40e8da0();
   input += synapse0x40e8de0();
   input += synapse0x40e8e20();
   return input;
}

double NNfunction_sg_dL::neuron0x40e8490() {
   double input = input0x40e8490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40e8e60() {
   double input = 2.4783;
   input += synapse0x40e91a0();
   input += synapse0x40e91e0();
   input += synapse0x40e9220();
   input += synapse0x40e9260();
   input += synapse0x40e92a0();
   input += synapse0x40e92e0();
   input += synapse0x40e9320();
   input += synapse0x40e9360();
   input += synapse0x40e93a0();
   input += synapse0x40e93e0();
   input += synapse0x40e9420();
   input += synapse0x40e9460();
   input += synapse0x40e94a0();
   input += synapse0x40e94e0();
   input += synapse0x40e9520();
   input += synapse0x40e9560();
   input += synapse0x40e8ff0();
   input += synapse0x40e9030();
   input += synapse0x40e96b0();
   input += synapse0x40e96f0();
   input += synapse0x40e9730();
   input += synapse0x40e9770();
   input += synapse0x40e97b0();
   input += synapse0x40e97f0();
   return input;
}

double NNfunction_sg_dL::neuron0x40e8e60() {
   double input = input0x40e8e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40f0060() {
   double input = -0.278738;
   input += synapse0x3e89620();
   input += synapse0x3e89660();
   input += synapse0x40c6190();
   input += synapse0x40c61d0();
   input += synapse0x40c7c70();
   input += synapse0x40c7cb0();
   input += synapse0x40c8a40();
   input += synapse0x40c8a80();
   input += synapse0x40c9410();
   input += synapse0x40c9450();
   input += synapse0x40c9de0();
   input += synapse0x40c9e20();
   input += synapse0x40ca8c0();
   input += synapse0x40ca900();
   input += synapse0x40cb290();
   input += synapse0x40cb2d0();
   input += synapse0x40c8370();
   input += synapse0x40c83b0();
   input += synapse0x40cce40();
   input += synapse0x40cce80();
   input += synapse0x40cd810();
   input += synapse0x40cd850();
   input += synapse0x40ce1e0();
   input += synapse0x40ce220();
   input += synapse0x40cebb0();
   input += synapse0x40cebf0();
   input += synapse0x40c1c40();
   input += synapse0x40c1c80();
   input += synapse0x40d0ca0();
   input += synapse0x40d0ce0();
   input += synapse0x40d1670();
   input += synapse0x40d16b0();
   input += synapse0x40d2040();
   input += synapse0x40d2080();
   input += synapse0x40d2a10();
   input += synapse0x40d2a50();
   input += synapse0x40d33e0();
   input += synapse0x40d3420();
   input += synapse0x40cbf30();
   input += synapse0x40cbf70();
   input += synapse0x40d57e0();
   input += synapse0x40d5820();
   input += synapse0x40d6170();
   input += synapse0x40d61b0();
   input += synapse0x40d6b40();
   input += synapse0x40d6b80();
   input += synapse0x40d7510();
   input += synapse0x40d7550();
   input += synapse0x40d7ee0();
   input += synapse0x40d7f20();
   return input;
}

double NNfunction_sg_dL::neuron0x40f0060() {
   double input = input0x40f0060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40f0400() {
   double input = 0.668726;
   input += synapse0x40da620();
   input += synapse0x40da660();
   input += synapse0x40cfbe0();
   input += synapse0x40cfc20();
   input += synapse0x40dd200();
   input += synapse0x40dd240();
   input += synapse0x40ddbd0();
   input += synapse0x40ddc10();
   input += synapse0x40de5a0();
   input += synapse0x40de5e0();
   input += synapse0x40def70();
   input += synapse0x40defb0();
   input += synapse0x40df940();
   input += synapse0x40df980();
   input += synapse0x40e0310();
   input += synapse0x40e0350();
   input += synapse0x40e0ce0();
   input += synapse0x40e0d20();
   input += synapse0x40e16b0();
   input += synapse0x40e16f0();
   input += synapse0x40e2290();
   input += synapse0x40e22d0();
   input += synapse0x40e2c60();
   input += synapse0x40e2ca0();
   input += synapse0x40d3ae0();
   input += synapse0x40d3b20();
   input += synapse0x40d44b0();
   input += synapse0x40d44f0();
   input += synapse0x40d4e80();
   input += synapse0x40d4ec0();
   input += synapse0x40e73a0();
   input += synapse0x40e73e0();
   input += synapse0x40e7d70();
   input += synapse0x40e7db0();
   input += synapse0x40e8740();
   input += synapse0x40e8780();
   input += synapse0x40e9110();
   input += synapse0x40e9150();
   input += synapse0x40c3f80();
   input += synapse0x40c3fc0();
   input += synapse0x40d88b0();
   input += synapse0x40d88f0();
   input += synapse0x40e9830();
   input += synapse0x40e9870();
   input += synapse0x40e98b0();
   input += synapse0x40e98f0();
   input += synapse0x40f07a0();
   input += synapse0x40f07e0();
   input += synapse0x40f0820();
   input += synapse0x40f0860();
   return input;
}

double NNfunction_sg_dL::neuron0x40f0400() {
   double input = input0x40f0400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40f08a0() {
   double input = -0.866293;
   input += synapse0x40f0be0();
   input += synapse0x40f0c20();
   input += synapse0x40f0c60();
   input += synapse0x40f0ca0();
   input += synapse0x40f0ce0();
   input += synapse0x40f0d20();
   input += synapse0x40f0d60();
   input += synapse0x40f0da0();
   input += synapse0x40f0de0();
   input += synapse0x40f0e20();
   input += synapse0x40f0e60();
   input += synapse0x40f0ea0();
   input += synapse0x40f0ee0();
   input += synapse0x40f0f20();
   input += synapse0x40f0f60();
   input += synapse0x40f0fa0();
   input += synapse0x40f0a30();
   input += synapse0x40f0a70();
   input += synapse0x40f10f0();
   input += synapse0x40f1130();
   input += synapse0x40f1170();
   input += synapse0x40f11b0();
   input += synapse0x40f11f0();
   input += synapse0x40f1230();
   input += synapse0x40f1270();
   input += synapse0x40f12b0();
   input += synapse0x40f12f0();
   input += synapse0x40f1330();
   input += synapse0x40f1370();
   input += synapse0x40f13b0();
   input += synapse0x40f13f0();
   input += synapse0x40f1430();
   input += synapse0x40f0fe0();
   input += synapse0x40f1020();
   input += synapse0x40f1060();
   input += synapse0x40f10a0();
   input += synapse0x40f1680();
   input += synapse0x40f16c0();
   input += synapse0x40f1700();
   input += synapse0x40f1740();
   input += synapse0x40f1780();
   input += synapse0x40f17c0();
   input += synapse0x40f1800();
   input += synapse0x40f1840();
   input += synapse0x40f1880();
   input += synapse0x40f18c0();
   input += synapse0x40f1900();
   input += synapse0x40f1940();
   input += synapse0x40f1980();
   input += synapse0x40f19c0();
   return input;
}

double NNfunction_sg_dL::neuron0x40f08a0() {
   double input = input0x40f08a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40f1a00() {
   double input = 0.67511;
   input += synapse0x40f1d40();
   input += synapse0x40f1d80();
   input += synapse0x40f1dc0();
   input += synapse0x40f1e00();
   input += synapse0x40f1e40();
   input += synapse0x40f1e80();
   input += synapse0x40f1ec0();
   input += synapse0x40f1f00();
   input += synapse0x40f1f40();
   input += synapse0x40f1f80();
   input += synapse0x40f1fc0();
   input += synapse0x40f2000();
   input += synapse0x40f2040();
   input += synapse0x40f2080();
   input += synapse0x40f20c0();
   input += synapse0x40f2100();
   input += synapse0x40f1b90();
   input += synapse0x40f1bd0();
   input += synapse0x40f2250();
   input += synapse0x40f2290();
   input += synapse0x40f22d0();
   input += synapse0x40f2310();
   input += synapse0x40f2350();
   input += synapse0x40f2390();
   input += synapse0x40f23d0();
   input += synapse0x40f2410();
   input += synapse0x40f2450();
   input += synapse0x40f2490();
   input += synapse0x40f24d0();
   input += synapse0x40f2510();
   input += synapse0x40f2550();
   input += synapse0x40f2590();
   input += synapse0x40f2140();
   input += synapse0x40f2180();
   input += synapse0x40f21c0();
   input += synapse0x40f2200();
   input += synapse0x40f27e0();
   input += synapse0x40f2820();
   input += synapse0x40f2860();
   input += synapse0x40f28a0();
   input += synapse0x40f28e0();
   input += synapse0x40f2920();
   input += synapse0x40f2960();
   input += synapse0x40f29a0();
   input += synapse0x40f29e0();
   input += synapse0x40f2a20();
   input += synapse0x40f2a60();
   input += synapse0x40f2aa0();
   input += synapse0x40f2ae0();
   input += synapse0x40f2b20();
   return input;
}

double NNfunction_sg_dL::neuron0x40f1a00() {
   double input = input0x40f1a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40f2b60() {
   double input = -0.137155;
   input += synapse0x40f2ea0();
   input += synapse0x40f2ee0();
   input += synapse0x40f2f20();
   input += synapse0x40f2f60();
   input += synapse0x40f2fa0();
   input += synapse0x40f2fe0();
   input += synapse0x40f3020();
   input += synapse0x40f3060();
   input += synapse0x40f30a0();
   input += synapse0x40f30e0();
   input += synapse0x40f3120();
   input += synapse0x40f3160();
   input += synapse0x40f31a0();
   input += synapse0x40f31e0();
   input += synapse0x40f3220();
   input += synapse0x40f3260();
   input += synapse0x40f2cf0();
   input += synapse0x40f2d30();
   input += synapse0x40f33b0();
   input += synapse0x40f33f0();
   input += synapse0x40f3430();
   input += synapse0x40f3470();
   input += synapse0x40f34b0();
   input += synapse0x40f34f0();
   input += synapse0x40f3530();
   input += synapse0x40f3570();
   input += synapse0x40f35b0();
   input += synapse0x40f35f0();
   input += synapse0x40f3630();
   input += synapse0x40f3670();
   input += synapse0x40f36b0();
   input += synapse0x40f36f0();
   input += synapse0x40f32a0();
   input += synapse0x40f32e0();
   input += synapse0x40f3320();
   input += synapse0x40f3360();
   input += synapse0x40f3940();
   input += synapse0x40f3980();
   input += synapse0x40f39c0();
   input += synapse0x40f3a00();
   input += synapse0x40f3a40();
   input += synapse0x40f3a80();
   input += synapse0x40f3ac0();
   input += synapse0x40f3b00();
   input += synapse0x40f3b40();
   input += synapse0x40f3b80();
   input += synapse0x40f3bc0();
   input += synapse0x40f3c00();
   input += synapse0x40f3c40();
   input += synapse0x40f3c80();
   return input;
}

double NNfunction_sg_dL::neuron0x40f2b60() {
   double input = input0x40f2b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dL::input0x40f3cc0() {
   double input = 13.0566;
   input += synapse0x40f3ee0();
   input += synapse0x40f3f20();
   input += synapse0x40f3f60();
   input += synapse0x40f3fa0();
   input += synapse0x40f3fe0();
   return input;
}

double NNfunction_sg_dL::neuron0x40f3cc0() {
   double input = input0x40f3cc0();
   return (input * 1)+0;
}

double NNfunction_sg_dL::synapse0x40c4010() {
   return (neuron0x40bed30()*-0.254151);
}

double NNfunction_sg_dL::synapse0x40c4050() {
   return (neuron0x40befe0()*0.0935418);
}

double NNfunction_sg_dL::synapse0x40c4090() {
   return (neuron0x40bf320()*0.200718);
}

double NNfunction_sg_dL::synapse0x40c40d0() {
   return (neuron0x40bf660()*-1.48124);
}

double NNfunction_sg_dL::synapse0x40c4110() {
   return (neuron0x40bf9a0()*-0.0337366);
}

double NNfunction_sg_dL::synapse0x40c4150() {
   return (neuron0x40bfce0()*-0.115418);
}

double NNfunction_sg_dL::synapse0x40c4190() {
   return (neuron0x40c0020()*-0.0485252);
}

double NNfunction_sg_dL::synapse0x40c41d0() {
   return (neuron0x40c0360()*-0.298307);
}

double NNfunction_sg_dL::synapse0x40c4210() {
   return (neuron0x40c06a0()*-0.0922652);
}

double NNfunction_sg_dL::synapse0x40c4250() {
   return (neuron0x40c09e0()*-0.0239524);
}

double NNfunction_sg_dL::synapse0x40c4290() {
   return (neuron0x40c0d20()*-0.143217);
}

double NNfunction_sg_dL::synapse0x40c42d0() {
   return (neuron0x40c1060()*-2.04532);
}

double NNfunction_sg_dL::synapse0x40c4310() {
   return (neuron0x40c13a0()*-0.0142668);
}

double NNfunction_sg_dL::synapse0x40c4350() {
   return (neuron0x40c16e0()*-0.215466);
}

double NNfunction_sg_dL::synapse0x40c4390() {
   return (neuron0x40c1a20()*-0.0116659);
}

double NNfunction_sg_dL::synapse0x40c43d0() {
   return (neuron0x40c1d60()*-0.204374);
}

double NNfunction_sg_dL::synapse0x40c3e60() {
   return (neuron0x40c20a0()*0.152226);
}

double NNfunction_sg_dL::synapse0x40c3ea0() {
   return (neuron0x40c2600()*-0.12312);
}

double NNfunction_sg_dL::synapse0x2ce9cd0() {
   return (neuron0x40c2820()*0.0930806);
}

double NNfunction_sg_dL::synapse0x2ce9d10() {
   return (neuron0x40c2b60()*-0.282248);
}

double NNfunction_sg_dL::synapse0x40c4520() {
   return (neuron0x40c2ea0()*-0.0134652);
}

double NNfunction_sg_dL::synapse0x40c4560() {
   return (neuron0x40c31e0()*0.216901);
}

double NNfunction_sg_dL::synapse0x40c45a0() {
   return (neuron0x40c3520()*0.105348);
}

double NNfunction_sg_dL::synapse0x40c45e0() {
   return (neuron0x40c3860()*-0.38272);
}

double NNfunction_sg_dL::synapse0x40c4960() {
   return (neuron0x40bed30()*-0.0334068);
}

double NNfunction_sg_dL::synapse0x40c49a0() {
   return (neuron0x40befe0()*-0.144366);
}

double NNfunction_sg_dL::synapse0x40c49e0() {
   return (neuron0x40bf320()*0.0385893);
}

double NNfunction_sg_dL::synapse0x40c4a20() {
   return (neuron0x40bf660()*-1.58341);
}

double NNfunction_sg_dL::synapse0x40c4a60() {
   return (neuron0x40bf9a0()*0.0826705);
}

double NNfunction_sg_dL::synapse0x40c4aa0() {
   return (neuron0x40bfce0()*-0.0377525);
}

double NNfunction_sg_dL::synapse0x40c4ae0() {
   return (neuron0x40c0020()*-0.0355912);
}

double NNfunction_sg_dL::synapse0x40c4b20() {
   return (neuron0x40c0360()*-0.0334679);
}

double NNfunction_sg_dL::synapse0x40c4b60() {
   return (neuron0x40c06a0()*-0.0601032);
}

double NNfunction_sg_dL::synapse0x40c4410() {
   return (neuron0x40c09e0()*-0.0742028);
}

double NNfunction_sg_dL::synapse0x40c4450() {
   return (neuron0x40c0d20()*0.0917628);
}

double NNfunction_sg_dL::synapse0x40c4490() {
   return (neuron0x40c1060()*-0.974965);
}

double NNfunction_sg_dL::synapse0x40c44d0() {
   return (neuron0x40c13a0()*-0.437101);
}

double NNfunction_sg_dL::synapse0x40c4db0() {
   return (neuron0x40c16e0()*-0.147111);
}

double NNfunction_sg_dL::synapse0x40c4df0() {
   return (neuron0x40c1a20()*-0.346098);
}

double NNfunction_sg_dL::synapse0x40c4e30() {
   return (neuron0x40c1d60()*-0.246606);
}

double NNfunction_sg_dL::synapse0x40c47b0() {
   return (neuron0x40c20a0()*-0.0950226);
}

double NNfunction_sg_dL::synapse0x40c47f0() {
   return (neuron0x40c2600()*-0.282658);
}

double NNfunction_sg_dL::synapse0x40c4f80() {
   return (neuron0x40c2820()*-0.255058);
}

double NNfunction_sg_dL::synapse0x40c4fc0() {
   return (neuron0x40c2b60()*-0.0551035);
}

double NNfunction_sg_dL::synapse0x40c5000() {
   return (neuron0x40c2ea0()*0.261958);
}

double NNfunction_sg_dL::synapse0x40c5040() {
   return (neuron0x40c31e0()*0.0209129);
}

double NNfunction_sg_dL::synapse0x40c5080() {
   return (neuron0x40c3520()*-0.0315012);
}

double NNfunction_sg_dL::synapse0x40c50c0() {
   return (neuron0x40c3860()*-0.0137413);
}

double NNfunction_sg_dL::synapse0x40c5440() {
   return (neuron0x40bed30()*-0.00927533);
}

double NNfunction_sg_dL::synapse0x40c5480() {
   return (neuron0x40befe0()*0.0254677);
}

double NNfunction_sg_dL::synapse0x40c54c0() {
   return (neuron0x40bf320()*0.0810709);
}

double NNfunction_sg_dL::synapse0x40c5500() {
   return (neuron0x40bf660()*-0.554347);
}

double NNfunction_sg_dL::synapse0x40c5540() {
   return (neuron0x40bf9a0()*-0.113294);
}

double NNfunction_sg_dL::synapse0x40c5580() {
   return (neuron0x40bfce0()*-0.15025);
}

double NNfunction_sg_dL::synapse0x40c55c0() {
   return (neuron0x40c0020()*-0.00646064);
}

double NNfunction_sg_dL::synapse0x40c5600() {
   return (neuron0x40c0360()*0.0219458);
}

double NNfunction_sg_dL::synapse0x40c5640() {
   return (neuron0x40c06a0()*-0.0292051);
}

double NNfunction_sg_dL::synapse0x40c5680() {
   return (neuron0x40c09e0()*-0.0597028);
}

double NNfunction_sg_dL::synapse0x40c56c0() {
   return (neuron0x40c0d20()*-0.00804178);
}

double NNfunction_sg_dL::synapse0x40c5700() {
   return (neuron0x40c1060()*0.4864);
}

double NNfunction_sg_dL::synapse0x40c5740() {
   return (neuron0x40c13a0()*-0.182956);
}

double NNfunction_sg_dL::synapse0x40c5780() {
   return (neuron0x40c16e0()*-0.0744612);
}

double NNfunction_sg_dL::synapse0x40c57c0() {
   return (neuron0x40c1a20()*0.23191);
}

double NNfunction_sg_dL::synapse0x40c5800() {
   return (neuron0x40c1d60()*0.0445152);
}

double NNfunction_sg_dL::synapse0x40c5290() {
   return (neuron0x40c20a0()*-0.0322491);
}

double NNfunction_sg_dL::synapse0x40c52d0() {
   return (neuron0x40c2600()*-0.0937303);
}

double NNfunction_sg_dL::synapse0x2ceacb0() {
   return (neuron0x40c2820()*0.0655351);
}

double NNfunction_sg_dL::synapse0x3e88e30() {
   return (neuron0x40c2b60()*0.169272);
}

double NNfunction_sg_dL::synapse0x3e88e70() {
   return (neuron0x40c2ea0()*0.0393109);
}

double NNfunction_sg_dL::synapse0x40c7740() {
   return (neuron0x40c31e0()*-0.0397246);
}

double NNfunction_sg_dL::synapse0x40c7780() {
   return (neuron0x40c3520()*0.000829805);
}

double NNfunction_sg_dL::synapse0x40bea70() {
   return (neuron0x40c3860()*-0.00404798);
}

double NNfunction_sg_dL::synapse0x40beb40() {
   return (neuron0x40bed30()*0.190394);
}

double NNfunction_sg_dL::synapse0x3e896b0() {
   return (neuron0x40befe0()*-0.389851);
}

double NNfunction_sg_dL::synapse0x40c4d30() {
   return (neuron0x40bf320()*0.630228);
}

double NNfunction_sg_dL::synapse0x40c4d70() {
   return (neuron0x40bf660()*-0.502105);
}

double NNfunction_sg_dL::synapse0x40c5950() {
   return (neuron0x40bf9a0()*0.0479601);
}

double NNfunction_sg_dL::synapse0x40c5990() {
   return (neuron0x40bfce0()*-0.420485);
}

double NNfunction_sg_dL::synapse0x40c59d0() {
   return (neuron0x40c0020()*-0.348691);
}

double NNfunction_sg_dL::synapse0x40c5a10() {
   return (neuron0x40c0360()*-0.0291976);
}

double NNfunction_sg_dL::synapse0x40c5a50() {
   return (neuron0x40c06a0()*-0.198796);
}

double NNfunction_sg_dL::synapse0x40c5a90() {
   return (neuron0x40c09e0()*-0.0857294);
}

double NNfunction_sg_dL::synapse0x40c5ad0() {
   return (neuron0x40c0d20()*-0.0103715);
}

double NNfunction_sg_dL::synapse0x40c5b10() {
   return (neuron0x40c1060()*-0.115438);
}

double NNfunction_sg_dL::synapse0x40c5b50() {
   return (neuron0x40c13a0()*-0.249691);
}

double NNfunction_sg_dL::synapse0x40c5b90() {
   return (neuron0x40c16e0()*-0.268317);
}

double NNfunction_sg_dL::synapse0x40c5bd0() {
   return (neuron0x40c1a20()*-0.520378);
}

double NNfunction_sg_dL::synapse0x40c5c10() {
   return (neuron0x40c1d60()*-0.51358);
}

double NNfunction_sg_dL::synapse0x40beab0() {
   return (neuron0x40c20a0()*-0.0627386);
}

double NNfunction_sg_dL::synapse0x40beaf0() {
   return (neuron0x40c2600()*-0.164605);
}

double NNfunction_sg_dL::synapse0x40c5d60() {
   return (neuron0x40c2820()*-0.136684);
}

double NNfunction_sg_dL::synapse0x40c5da0() {
   return (neuron0x40c2b60()*-0.370217);
}

double NNfunction_sg_dL::synapse0x40c5de0() {
   return (neuron0x40c2ea0()*0.519092);
}

double NNfunction_sg_dL::synapse0x40c5e20() {
   return (neuron0x40c31e0()*0.00724341);
}

double NNfunction_sg_dL::synapse0x40c5e60() {
   return (neuron0x40c3520()*-0.120523);
}

double NNfunction_sg_dL::synapse0x40c5ea0() {
   return (neuron0x40c3860()*-0.554332);
}

double NNfunction_sg_dL::synapse0x40c6220() {
   return (neuron0x40bed30()*0.199557);
}

double NNfunction_sg_dL::synapse0x40c6260() {
   return (neuron0x40befe0()*0.328481);
}

double NNfunction_sg_dL::synapse0x40c62a0() {
   return (neuron0x40bf320()*-0.0527358);
}

double NNfunction_sg_dL::synapse0x40c62e0() {
   return (neuron0x40bf660()*-0.0229469);
}

double NNfunction_sg_dL::synapse0x40c6320() {
   return (neuron0x40bf9a0()*-0.225173);
}

double NNfunction_sg_dL::synapse0x40c6360() {
   return (neuron0x40bfce0()*0.249318);
}

double NNfunction_sg_dL::synapse0x40c63a0() {
   return (neuron0x40c0020()*-0.218816);
}

double NNfunction_sg_dL::synapse0x40c63e0() {
   return (neuron0x40c0360()*0.0106387);
}

double NNfunction_sg_dL::synapse0x40c6420() {
   return (neuron0x40c06a0()*0.21904);
}

double NNfunction_sg_dL::synapse0x40c6460() {
   return (neuron0x40c09e0()*0.13878);
}

double NNfunction_sg_dL::synapse0x40c64a0() {
   return (neuron0x40c0d20()*-0.0864948);
}

double NNfunction_sg_dL::synapse0x40c64e0() {
   return (neuron0x40c1060()*1.44763);
}

double NNfunction_sg_dL::synapse0x40c6520() {
   return (neuron0x40c13a0()*0.617065);
}

double NNfunction_sg_dL::synapse0x40c6560() {
   return (neuron0x40c16e0()*-0.0104863);
}

double NNfunction_sg_dL::synapse0x40c65a0() {
   return (neuron0x40c1a20()*0.532611);
}

double NNfunction_sg_dL::synapse0x40c65e0() {
   return (neuron0x40c1d60()*-0.00469889);
}

double NNfunction_sg_dL::synapse0x40c6730() {
   return (neuron0x40c20a0()*-0.209902);
}

double NNfunction_sg_dL::synapse0x40c6070() {
   return (neuron0x40c2600()*0.200385);
}

double NNfunction_sg_dL::synapse0x40c60b0() {
   return (neuron0x40c2820()*0.169277);
}

double NNfunction_sg_dL::synapse0x40c7880() {
   return (neuron0x40c2b60()*0.0770097);
}

double NNfunction_sg_dL::synapse0x40c78c0() {
   return (neuron0x40c2ea0()*-0.2601);
}

double NNfunction_sg_dL::synapse0x40c7900() {
   return (neuron0x40c31e0()*-0.132815);
}

double NNfunction_sg_dL::synapse0x40c7940() {
   return (neuron0x40c3520()*-0.00692704);
}

double NNfunction_sg_dL::synapse0x40c7980() {
   return (neuron0x40c3860()*0.240192);
}

double NNfunction_sg_dL::synapse0x40c7d00() {
   return (neuron0x40bed30()*0.00166249);
}

double NNfunction_sg_dL::synapse0x40c7d40() {
   return (neuron0x40befe0()*-0.00078803);
}

double NNfunction_sg_dL::synapse0x40c7d80() {
   return (neuron0x40bf320()*0.0168611);
}

double NNfunction_sg_dL::synapse0x40c7dc0() {
   return (neuron0x40bf660()*-0.0426591);
}

double NNfunction_sg_dL::synapse0x40c7e00() {
   return (neuron0x40bf9a0()*0.00201);
}

double NNfunction_sg_dL::synapse0x40c7e40() {
   return (neuron0x40bfce0()*0.00137906);
}

double NNfunction_sg_dL::synapse0x40c7e80() {
   return (neuron0x40c0020()*-0.00167091);
}

double NNfunction_sg_dL::synapse0x40c7ec0() {
   return (neuron0x40c0360()*0.00145942);
}

double NNfunction_sg_dL::synapse0x40c7f00() {
   return (neuron0x40c06a0()*0.0254274);
}

double NNfunction_sg_dL::synapse0x3e89180() {
   return (neuron0x40c09e0()*0.00999842);
}

double NNfunction_sg_dL::synapse0x3e891c0() {
   return (neuron0x40c0d20()*0.0197102);
}

double NNfunction_sg_dL::synapse0x3e89200() {
   return (neuron0x40c1060()*-3.48539);
}

double NNfunction_sg_dL::synapse0x3e89240() {
   return (neuron0x40c13a0()*0.0182396);
}

double NNfunction_sg_dL::synapse0x3e89280() {
   return (neuron0x40c16e0()*-0.00933552);
}

double NNfunction_sg_dL::synapse0x3e892c0() {
   return (neuron0x40c1a20()*-0.00755692);
}

double NNfunction_sg_dL::synapse0x3e89300() {
   return (neuron0x40c1d60()*-0.0129258);
}

double NNfunction_sg_dL::synapse0x40c7b50() {
   return (neuron0x40c20a0()*-0.0189937);
}

double NNfunction_sg_dL::synapse0x40c7b90() {
   return (neuron0x40c2600()*0.00570517);
}

double NNfunction_sg_dL::synapse0x3e89450() {
   return (neuron0x40c2820()*0.00372319);
}

double NNfunction_sg_dL::synapse0x3e89490() {
   return (neuron0x40c2b60()*0.00619);
}

double NNfunction_sg_dL::synapse0x3e894d0() {
   return (neuron0x40c2ea0()*0.0141143);
}

double NNfunction_sg_dL::synapse0x3e89510() {
   return (neuron0x40c31e0()*-0.00192935);
}

double NNfunction_sg_dL::synapse0x3e89550() {
   return (neuron0x40c3520()*-0.000626726);
}

double NNfunction_sg_dL::synapse0x40c8750() {
   return (neuron0x40c3860()*0.0108025);
}

double NNfunction_sg_dL::synapse0x40c8ad0() {
   return (neuron0x40bed30()*0.0306313);
}

double NNfunction_sg_dL::synapse0x40c8b10() {
   return (neuron0x40befe0()*-0.0294026);
}

double NNfunction_sg_dL::synapse0x40c8b50() {
   return (neuron0x40bf320()*0.0148227);
}

double NNfunction_sg_dL::synapse0x40c8b90() {
   return (neuron0x40bf660()*-0.128782);
}

double NNfunction_sg_dL::synapse0x40c8bd0() {
   return (neuron0x40bf9a0()*0.014979);
}

double NNfunction_sg_dL::synapse0x40c8c10() {
   return (neuron0x40bfce0()*-0.033629);
}

double NNfunction_sg_dL::synapse0x40c8c50() {
   return (neuron0x40c0020()*-0.0449108);
}

double NNfunction_sg_dL::synapse0x40c8c90() {
   return (neuron0x40c0360()*-0.0465222);
}

double NNfunction_sg_dL::synapse0x40c8cd0() {
   return (neuron0x40c06a0()*-0.113269);
}

double NNfunction_sg_dL::synapse0x40c8d10() {
   return (neuron0x40c09e0()*-0.0275547);
}

double NNfunction_sg_dL::synapse0x40c8d50() {
   return (neuron0x40c0d20()*-0.171735);
}

double NNfunction_sg_dL::synapse0x40c8d90() {
   return (neuron0x40c1060()*-0.992226);
}

double NNfunction_sg_dL::synapse0x40c8dd0() {
   return (neuron0x40c13a0()*-0.1311);
}

double NNfunction_sg_dL::synapse0x40c8e10() {
   return (neuron0x40c16e0()*-0.129045);
}

double NNfunction_sg_dL::synapse0x40c8e50() {
   return (neuron0x40c1a20()*-0.0629633);
}

double NNfunction_sg_dL::synapse0x40c8e90() {
   return (neuron0x40c1d60()*0.00520037);
}

double NNfunction_sg_dL::synapse0x40c8920() {
   return (neuron0x40c20a0()*-0.0619983);
}

double NNfunction_sg_dL::synapse0x40c8960() {
   return (neuron0x40c2600()*-0.0124919);
}

double NNfunction_sg_dL::synapse0x40c8fe0() {
   return (neuron0x40c2820()*-0.03065);
}

double NNfunction_sg_dL::synapse0x40c9020() {
   return (neuron0x40c2b60()*-0.0240707);
}

double NNfunction_sg_dL::synapse0x40c9060() {
   return (neuron0x40c2ea0()*0.00726914);
}

double NNfunction_sg_dL::synapse0x40c90a0() {
   return (neuron0x40c31e0()*0.000374934);
}

double NNfunction_sg_dL::synapse0x40c90e0() {
   return (neuron0x40c3520()*-0.0206675);
}

double NNfunction_sg_dL::synapse0x40c9120() {
   return (neuron0x40c3860()*-0.0325838);
}

double NNfunction_sg_dL::synapse0x40c94a0() {
   return (neuron0x40bed30()*0.00304347);
}

double NNfunction_sg_dL::synapse0x40c94e0() {
   return (neuron0x40befe0()*-0.0365074);
}

double NNfunction_sg_dL::synapse0x40c9520() {
   return (neuron0x40bf320()*-0.128858);
}

double NNfunction_sg_dL::synapse0x40c9560() {
   return (neuron0x40bf660()*0.553824);
}

double NNfunction_sg_dL::synapse0x40c95a0() {
   return (neuron0x40bf9a0()*-0.0427469);
}

double NNfunction_sg_dL::synapse0x40c95e0() {
   return (neuron0x40bfce0()*-0.0169831);
}

double NNfunction_sg_dL::synapse0x40c9620() {
   return (neuron0x40c0020()*0.0143269);
}

double NNfunction_sg_dL::synapse0x40c9660() {
   return (neuron0x40c0360()*-0.0300631);
}

double NNfunction_sg_dL::synapse0x40c96a0() {
   return (neuron0x40c06a0()*-0.0265363);
}

double NNfunction_sg_dL::synapse0x40c96e0() {
   return (neuron0x40c09e0()*0.0201786);
}

double NNfunction_sg_dL::synapse0x40c9720() {
   return (neuron0x40c0d20()*-0.0200136);
}

double NNfunction_sg_dL::synapse0x40c9760() {
   return (neuron0x40c1060()*-0.656718);
}

double NNfunction_sg_dL::synapse0x40c97a0() {
   return (neuron0x40c13a0()*-0.00529176);
}

double NNfunction_sg_dL::synapse0x40c97e0() {
   return (neuron0x40c16e0()*0.0114522);
}

double NNfunction_sg_dL::synapse0x40c9820() {
   return (neuron0x40c1a20()*0.295918);
}

double NNfunction_sg_dL::synapse0x40c9860() {
   return (neuron0x40c1d60()*-0.248603);
}

double NNfunction_sg_dL::synapse0x40c92f0() {
   return (neuron0x40c20a0()*-0.00692743);
}

double NNfunction_sg_dL::synapse0x40c9330() {
   return (neuron0x40c2600()*0.0974671);
}

double NNfunction_sg_dL::synapse0x40c99b0() {
   return (neuron0x40c2820()*0.0323462);
}

double NNfunction_sg_dL::synapse0x40c99f0() {
   return (neuron0x40c2b60()*0.0112565);
}

double NNfunction_sg_dL::synapse0x40c9a30() {
   return (neuron0x40c2ea0()*-0.0144159);
}

double NNfunction_sg_dL::synapse0x40c9a70() {
   return (neuron0x40c31e0()*-0.0149194);
}

double NNfunction_sg_dL::synapse0x40c9ab0() {
   return (neuron0x40c3520()*0.00884586);
}

double NNfunction_sg_dL::synapse0x40c9af0() {
   return (neuron0x40c3860()*0.012671);
}

double NNfunction_sg_dL::synapse0x40c24f0() {
   return (neuron0x40bed30()*-0.0230013);
}

double NNfunction_sg_dL::synapse0x40c2530() {
   return (neuron0x40befe0()*-0.0241556);
}

double NNfunction_sg_dL::synapse0x40c2570() {
   return (neuron0x40bf320()*-0.269823);
}

double NNfunction_sg_dL::synapse0x40c25b0() {
   return (neuron0x40bf660()*0.667701);
}

double NNfunction_sg_dL::synapse0x40ca080() {
   return (neuron0x40bf9a0()*-0.0193897);
}

double NNfunction_sg_dL::synapse0x40ca0c0() {
   return (neuron0x40bfce0()*-0.0444405);
}

double NNfunction_sg_dL::synapse0x40ca100() {
   return (neuron0x40c0020()*-0.0276009);
}

double NNfunction_sg_dL::synapse0x40ca140() {
   return (neuron0x40c0360()*-0.0466981);
}

double NNfunction_sg_dL::synapse0x40ca180() {
   return (neuron0x40c06a0()*-0.0163212);
}

double NNfunction_sg_dL::synapse0x40ca1c0() {
   return (neuron0x40c09e0()*0.0213611);
}

double NNfunction_sg_dL::synapse0x40ca200() {
   return (neuron0x40c0d20()*-0.00316493);
}

double NNfunction_sg_dL::synapse0x40ca240() {
   return (neuron0x40c1060()*-0.97294);
}

double NNfunction_sg_dL::synapse0x40ca280() {
   return (neuron0x40c13a0()*0.26613);
}

double NNfunction_sg_dL::synapse0x40ca2c0() {
   return (neuron0x40c16e0()*-0.147563);
}

double NNfunction_sg_dL::synapse0x40ca300() {
   return (neuron0x40c1a20()*0.0488473);
}

double NNfunction_sg_dL::synapse0x40ca340() {
   return (neuron0x40c1d60()*0.127425);
}

double NNfunction_sg_dL::synapse0x40c9cc0() {
   return (neuron0x40c20a0()*-0.149888);
}

double NNfunction_sg_dL::synapse0x40c9d00() {
   return (neuron0x40c2600()*-0.00700549);
}

double NNfunction_sg_dL::synapse0x40ca490() {
   return (neuron0x40c2820()*0.0151269);
}

double NNfunction_sg_dL::synapse0x40ca4d0() {
   return (neuron0x40c2b60()*0.106131);
}

double NNfunction_sg_dL::synapse0x40ca510() {
   return (neuron0x40c2ea0()*0.0286799);
}

double NNfunction_sg_dL::synapse0x40ca550() {
   return (neuron0x40c31e0()*0.0105289);
}

double NNfunction_sg_dL::synapse0x40ca590() {
   return (neuron0x40c3520()*-0.00871303);
}

double NNfunction_sg_dL::synapse0x40ca5d0() {
   return (neuron0x40c3860()*0.0159931);
}

double NNfunction_sg_dL::synapse0x40ca950() {
   return (neuron0x40bed30()*-0.0456058);
}

double NNfunction_sg_dL::synapse0x40ca990() {
   return (neuron0x40befe0()*-0.021934);
}

double NNfunction_sg_dL::synapse0x40ca9d0() {
   return (neuron0x40bf320()*0.229941);
}

double NNfunction_sg_dL::synapse0x40caa10() {
   return (neuron0x40bf660()*-0.624548);
}

double NNfunction_sg_dL::synapse0x40caa50() {
   return (neuron0x40bf9a0()*0.0258499);
}

double NNfunction_sg_dL::synapse0x40caa90() {
   return (neuron0x40bfce0()*0.11864);
}

double NNfunction_sg_dL::synapse0x40caad0() {
   return (neuron0x40c0020()*-0.0752542);
}

double NNfunction_sg_dL::synapse0x40cab10() {
   return (neuron0x40c0360()*0.0853419);
}

double NNfunction_sg_dL::synapse0x40cab50() {
   return (neuron0x40c06a0()*-8.92005e-05);
}

double NNfunction_sg_dL::synapse0x40cab90() {
   return (neuron0x40c09e0()*0.0112646);
}

double NNfunction_sg_dL::synapse0x40cabd0() {
   return (neuron0x40c0d20()*-0.0893057);
}

double NNfunction_sg_dL::synapse0x40cac10() {
   return (neuron0x40c1060()*-1.31824);
}

double NNfunction_sg_dL::synapse0x40cac50() {
   return (neuron0x40c13a0()*-0.278018);
}

double NNfunction_sg_dL::synapse0x40cac90() {
   return (neuron0x40c16e0()*-0.143384);
}

double NNfunction_sg_dL::synapse0x40cacd0() {
   return (neuron0x40c1a20()*-0.26029);
}

double NNfunction_sg_dL::synapse0x40cad10() {
   return (neuron0x40c1d60()*0.279252);
}

double NNfunction_sg_dL::synapse0x40ca7a0() {
   return (neuron0x40c20a0()*-0.246337);
}

double NNfunction_sg_dL::synapse0x40ca7e0() {
   return (neuron0x40c2600()*0.129794);
}

double NNfunction_sg_dL::synapse0x40cae60() {
   return (neuron0x40c2820()*-0.122429);
}

double NNfunction_sg_dL::synapse0x40caea0() {
   return (neuron0x40c2b60()*0.163046);
}

double NNfunction_sg_dL::synapse0x40caee0() {
   return (neuron0x40c2ea0()*0.00452799);
}

double NNfunction_sg_dL::synapse0x40caf20() {
   return (neuron0x40c31e0()*0.0497898);
}

double NNfunction_sg_dL::synapse0x40caf60() {
   return (neuron0x40c3520()*-0.0974369);
}

double NNfunction_sg_dL::synapse0x40cafa0() {
   return (neuron0x40c3860()*0.0604539);
}

double NNfunction_sg_dL::synapse0x40cb320() {
   return (neuron0x40bed30()*0.0148986);
}

double NNfunction_sg_dL::synapse0x40cb360() {
   return (neuron0x40befe0()*0.318629);
}

double NNfunction_sg_dL::synapse0x40cb3a0() {
   return (neuron0x40bf320()*0.251065);
}

double NNfunction_sg_dL::synapse0x40cb3e0() {
   return (neuron0x40bf660()*-0.742226);
}

double NNfunction_sg_dL::synapse0x40cb420() {
   return (neuron0x40bf9a0()*0.241265);
}

double NNfunction_sg_dL::synapse0x40cb460() {
   return (neuron0x40bfce0()*0.408175);
}

double NNfunction_sg_dL::synapse0x40cb4a0() {
   return (neuron0x40c0020()*0.510132);
}

double NNfunction_sg_dL::synapse0x40cb4e0() {
   return (neuron0x40c0360()*0.025547);
}

double NNfunction_sg_dL::synapse0x40cb520() {
   return (neuron0x40c06a0()*0.524035);
}

double NNfunction_sg_dL::synapse0x40cb560() {
   return (neuron0x40c09e0()*0.215143);
}

double NNfunction_sg_dL::synapse0x40cb5a0() {
   return (neuron0x40c0d20()*0.388723);
}

double NNfunction_sg_dL::synapse0x40cb5e0() {
   return (neuron0x40c1060()*0.128098);
}

double NNfunction_sg_dL::synapse0x40cb620() {
   return (neuron0x40c13a0()*0.387598);
}

double NNfunction_sg_dL::synapse0x40cb660() {
   return (neuron0x40c16e0()*-0.0906496);
}

double NNfunction_sg_dL::synapse0x40cb6a0() {
   return (neuron0x40c1a20()*-0.0175303);
}

double NNfunction_sg_dL::synapse0x40cb6e0() {
   return (neuron0x40c1d60()*0.187949);
}

double NNfunction_sg_dL::synapse0x40cb170() {
   return (neuron0x40c20a0()*-0.0536913);
}

double NNfunction_sg_dL::synapse0x40cb1b0() {
   return (neuron0x40c2600()*0.141331);
}

double NNfunction_sg_dL::synapse0x40c7f40() {
   return (neuron0x40c2820()*-0.0714838);
}

double NNfunction_sg_dL::synapse0x40c7f80() {
   return (neuron0x40c2b60()*-0.0811195);
}

double NNfunction_sg_dL::synapse0x40c7fc0() {
   return (neuron0x40c2ea0()*0.144352);
}

double NNfunction_sg_dL::synapse0x40c8000() {
   return (neuron0x40c31e0()*-0.0283338);
}

double NNfunction_sg_dL::synapse0x40c8040() {
   return (neuron0x40c3520()*0.188408);
}

double NNfunction_sg_dL::synapse0x40c8080() {
   return (neuron0x40c3860()*0.27418);
}

double NNfunction_sg_dL::synapse0x40c8400() {
   return (neuron0x40bed30()*0.0662522);
}

double NNfunction_sg_dL::synapse0x40c8440() {
   return (neuron0x40befe0()*-0.279151);
}

double NNfunction_sg_dL::synapse0x40c8480() {
   return (neuron0x40bf320()*0.344781);
}

double NNfunction_sg_dL::synapse0x40c84c0() {
   return (neuron0x40bf660()*-0.325242);
}

double NNfunction_sg_dL::synapse0x40c8500() {
   return (neuron0x40bf9a0()*-0.294373);
}

double NNfunction_sg_dL::synapse0x40c8540() {
   return (neuron0x40bfce0()*0.273427);
}

double NNfunction_sg_dL::synapse0x40c8580() {
   return (neuron0x40c0020()*0.105668);
}

double NNfunction_sg_dL::synapse0x40c85c0() {
   return (neuron0x40c0360()*-0.0413288);
}

double NNfunction_sg_dL::synapse0x40c8600() {
   return (neuron0x40c06a0()*0.0635494);
}

double NNfunction_sg_dL::synapse0x40c8640() {
   return (neuron0x40c09e0()*0.234259);
}

double NNfunction_sg_dL::synapse0x40c8680() {
   return (neuron0x40c0d20()*-0.405057);
}

double NNfunction_sg_dL::synapse0x40c86c0() {
   return (neuron0x40c1060()*0.0783157);
}

double NNfunction_sg_dL::synapse0x40c8700() {
   return (neuron0x40c13a0()*0.317534);
}

double NNfunction_sg_dL::synapse0x40cc840() {
   return (neuron0x40c16e0()*0.350358);
}

double NNfunction_sg_dL::synapse0x40cc880() {
   return (neuron0x40c1a20()*0.035557);
}

double NNfunction_sg_dL::synapse0x40cc8c0() {
   return (neuron0x40c1d60()*0.179268);
}

double NNfunction_sg_dL::synapse0x40c8250() {
   return (neuron0x40c20a0()*0.336133);
}

double NNfunction_sg_dL::synapse0x40c8290() {
   return (neuron0x40c2600()*0.218891);
}

double NNfunction_sg_dL::synapse0x40cca10() {
   return (neuron0x40c2820()*0.191847);
}

double NNfunction_sg_dL::synapse0x40cca50() {
   return (neuron0x40c2b60()*-0.109836);
}

double NNfunction_sg_dL::synapse0x40cca90() {
   return (neuron0x40c2ea0()*-0.177999);
}

double NNfunction_sg_dL::synapse0x40ccad0() {
   return (neuron0x40c31e0()*-0.110046);
}

double NNfunction_sg_dL::synapse0x40ccb10() {
   return (neuron0x40c3520()*0.527213);
}

double NNfunction_sg_dL::synapse0x40ccb50() {
   return (neuron0x40c3860()*0.291979);
}

double NNfunction_sg_dL::synapse0x40cced0() {
   return (neuron0x40bed30()*0.24049);
}

double NNfunction_sg_dL::synapse0x40ccf10() {
   return (neuron0x40befe0()*0.0765032);
}

double NNfunction_sg_dL::synapse0x40ccf50() {
   return (neuron0x40bf320()*-0.344508);
}

double NNfunction_sg_dL::synapse0x40ccf90() {
   return (neuron0x40bf660()*0.853693);
}

double NNfunction_sg_dL::synapse0x40ccfd0() {
   return (neuron0x40bf9a0()*0.414483);
}

double NNfunction_sg_dL::synapse0x40cd010() {
   return (neuron0x40bfce0()*0.0363016);
}

double NNfunction_sg_dL::synapse0x40cd050() {
   return (neuron0x40c0020()*-0.249768);
}

double NNfunction_sg_dL::synapse0x40cd090() {
   return (neuron0x40c0360()*-0.318689);
}

double NNfunction_sg_dL::synapse0x40cd0d0() {
   return (neuron0x40c06a0()*-0.309937);
}

double NNfunction_sg_dL::synapse0x40cd110() {
   return (neuron0x40c09e0()*0.191736);
}

double NNfunction_sg_dL::synapse0x40cd150() {
   return (neuron0x40c0d20()*-0.0414922);
}

double NNfunction_sg_dL::synapse0x40cd190() {
   return (neuron0x40c1060()*1.94325);
}

double NNfunction_sg_dL::synapse0x40cd1d0() {
   return (neuron0x40c13a0()*0.769747);
}

double NNfunction_sg_dL::synapse0x40cd210() {
   return (neuron0x40c16e0()*-0.132451);
}

double NNfunction_sg_dL::synapse0x40cd250() {
   return (neuron0x40c1a20()*0.353459);
}

double NNfunction_sg_dL::synapse0x40cd290() {
   return (neuron0x40c1d60()*0.654273);
}

double NNfunction_sg_dL::synapse0x40ccd20() {
   return (neuron0x40c20a0()*0.538624);
}

double NNfunction_sg_dL::synapse0x40ccd60() {
   return (neuron0x40c2600()*0.0858436);
}

double NNfunction_sg_dL::synapse0x40cd3e0() {
   return (neuron0x40c2820()*0.744714);
}

double NNfunction_sg_dL::synapse0x40cd420() {
   return (neuron0x40c2b60()*-0.100095);
}

double NNfunction_sg_dL::synapse0x40cd460() {
   return (neuron0x40c2ea0()*-0.526816);
}

double NNfunction_sg_dL::synapse0x40cd4a0() {
   return (neuron0x40c31e0()*-0.358155);
}

double NNfunction_sg_dL::synapse0x40cd4e0() {
   return (neuron0x40c3520()*-0.443179);
}

double NNfunction_sg_dL::synapse0x40cd520() {
   return (neuron0x40c3860()*0.115161);
}

double NNfunction_sg_dL::synapse0x40cd8a0() {
   return (neuron0x40bed30()*0.0241206);
}

double NNfunction_sg_dL::synapse0x40cd8e0() {
   return (neuron0x40befe0()*-0.0390182);
}

double NNfunction_sg_dL::synapse0x40cd920() {
   return (neuron0x40bf320()*-0.229846);
}

double NNfunction_sg_dL::synapse0x40cd960() {
   return (neuron0x40bf660()*1.17105);
}

double NNfunction_sg_dL::synapse0x40cd9a0() {
   return (neuron0x40bf9a0()*0.0199945);
}

double NNfunction_sg_dL::synapse0x40cd9e0() {
   return (neuron0x40bfce0()*-0.0342227);
}

double NNfunction_sg_dL::synapse0x40cda20() {
   return (neuron0x40c0020()*0.0132025);
}

double NNfunction_sg_dL::synapse0x40cda60() {
   return (neuron0x40c0360()*-0.0599402);
}

double NNfunction_sg_dL::synapse0x40cdaa0() {
   return (neuron0x40c06a0()*0.0938427);
}

double NNfunction_sg_dL::synapse0x40cdae0() {
   return (neuron0x40c09e0()*-0.440698);
}

double NNfunction_sg_dL::synapse0x40cdb20() {
   return (neuron0x40c0d20()*0.0103876);
}

double NNfunction_sg_dL::synapse0x40cdb60() {
   return (neuron0x40c1060()*0.30457);
}

double NNfunction_sg_dL::synapse0x40cdba0() {
   return (neuron0x40c13a0()*0.0363626);
}

double NNfunction_sg_dL::synapse0x40cdbe0() {
   return (neuron0x40c16e0()*0.0447402);
}

double NNfunction_sg_dL::synapse0x40cdc20() {
   return (neuron0x40c1a20()*-0.0569318);
}

double NNfunction_sg_dL::synapse0x40cdc60() {
   return (neuron0x40c1d60()*0.00982763);
}

double NNfunction_sg_dL::synapse0x40cd6f0() {
   return (neuron0x40c20a0()*0.0807401);
}

double NNfunction_sg_dL::synapse0x40cd730() {
   return (neuron0x40c2600()*-0.00199833);
}

double NNfunction_sg_dL::synapse0x40cddb0() {
   return (neuron0x40c2820()*0.0344662);
}

double NNfunction_sg_dL::synapse0x40cddf0() {
   return (neuron0x40c2b60()*0.0694674);
}

double NNfunction_sg_dL::synapse0x40cde30() {
   return (neuron0x40c2ea0()*0.07995);
}

double NNfunction_sg_dL::synapse0x40cde70() {
   return (neuron0x40c31e0()*-0.0300964);
}

double NNfunction_sg_dL::synapse0x40cdeb0() {
   return (neuron0x40c3520()*0.00599212);
}

double NNfunction_sg_dL::synapse0x40cdef0() {
   return (neuron0x40c3860()*0.00213549);
}

double NNfunction_sg_dL::synapse0x40ce270() {
   return (neuron0x40bed30()*0.00507931);
}

double NNfunction_sg_dL::synapse0x40ce2b0() {
   return (neuron0x40befe0()*0.00575333);
}

double NNfunction_sg_dL::synapse0x40ce2f0() {
   return (neuron0x40bf320()*-0.00362194);
}

double NNfunction_sg_dL::synapse0x40ce330() {
   return (neuron0x40bf660()*4.01515);
}

double NNfunction_sg_dL::synapse0x40ce370() {
   return (neuron0x40bf9a0()*0.00242532);
}

double NNfunction_sg_dL::synapse0x40ce3b0() {
   return (neuron0x40bfce0()*-0.00661541);
}

double NNfunction_sg_dL::synapse0x40ce3f0() {
   return (neuron0x40c0020()*-0.00130738);
}

double NNfunction_sg_dL::synapse0x40ce430() {
   return (neuron0x40c0360()*0.00736436);
}

double NNfunction_sg_dL::synapse0x40ce470() {
   return (neuron0x40c06a0()*-0.00168394);
}

double NNfunction_sg_dL::synapse0x40ce4b0() {
   return (neuron0x40c09e0()*0.00337118);
}

double NNfunction_sg_dL::synapse0x40ce4f0() {
   return (neuron0x40c0d20()*-0.00481609);
}

double NNfunction_sg_dL::synapse0x40ce530() {
   return (neuron0x40c1060()*0.298518);
}

double NNfunction_sg_dL::synapse0x40ce570() {
   return (neuron0x40c13a0()*0.026445);
}

double NNfunction_sg_dL::synapse0x40ce5b0() {
   return (neuron0x40c16e0()*-0.0404648);
}

double NNfunction_sg_dL::synapse0x40ce5f0() {
   return (neuron0x40c1a20()*0.00117625);
}

double NNfunction_sg_dL::synapse0x40ce630() {
   return (neuron0x40c1d60()*0.0141988);
}

double NNfunction_sg_dL::synapse0x40ce0c0() {
   return (neuron0x40c20a0()*-0.0248319);
}

double NNfunction_sg_dL::synapse0x40ce100() {
   return (neuron0x40c2600()*0.0137675);
}

double NNfunction_sg_dL::synapse0x40ce780() {
   return (neuron0x40c2820()*0.0196722);
}

double NNfunction_sg_dL::synapse0x40ce7c0() {
   return (neuron0x40c2b60()*-0.00727823);
}

double NNfunction_sg_dL::synapse0x40ce800() {
   return (neuron0x40c2ea0()*0.00591052);
}

double NNfunction_sg_dL::synapse0x40ce840() {
   return (neuron0x40c31e0()*-0.0049487);
}

double NNfunction_sg_dL::synapse0x40ce880() {
   return (neuron0x40c3520()*0.00198751);
}

double NNfunction_sg_dL::synapse0x40ce8c0() {
   return (neuron0x40c3860()*-0.00529038);
}

double NNfunction_sg_dL::synapse0x40cec40() {
   return (neuron0x40bed30()*-0.0138418);
}

double NNfunction_sg_dL::synapse0x40beec0() {
   return (neuron0x40befe0()*0.00414663);
}

double NNfunction_sg_dL::synapse0x40bef00() {
   return (neuron0x40bf320()*0.109247);
}

double NNfunction_sg_dL::synapse0x40bf200() {
   return (neuron0x40bf660()*0.824861);
}

double NNfunction_sg_dL::synapse0x40bf240() {
   return (neuron0x40bf9a0()*-0.00812817);
}

double NNfunction_sg_dL::synapse0x40bf540() {
   return (neuron0x40bfce0()*0.0564699);
}

double NNfunction_sg_dL::synapse0x40bf580() {
   return (neuron0x40c0020()*-0.00952479);
}

double NNfunction_sg_dL::synapse0x40bf880() {
   return (neuron0x40c0360()*0.0141102);
}

double NNfunction_sg_dL::synapse0x40bf8c0() {
   return (neuron0x40c06a0()*0.0640531);
}

double NNfunction_sg_dL::synapse0x40bfbc0() {
   return (neuron0x40c09e0()*0.00539804);
}

double NNfunction_sg_dL::synapse0x40bfc00() {
   return (neuron0x40c0d20()*0.0155861);
}

double NNfunction_sg_dL::synapse0x40bff00() {
   return (neuron0x40c1060()*1.38685);
}

double NNfunction_sg_dL::synapse0x40bff40() {
   return (neuron0x40c13a0()*-0.00884193);
}

double NNfunction_sg_dL::synapse0x40c0240() {
   return (neuron0x40c16e0()*0.0400054);
}

double NNfunction_sg_dL::synapse0x40c0280() {
   return (neuron0x40c1a20()*-0.0087331);
}

double NNfunction_sg_dL::synapse0x40c0580() {
   return (neuron0x40c1d60()*0.0149961);
}

double NNfunction_sg_dL::synapse0x40c05c0() {
   return (neuron0x40c20a0()*0.0136428);
}

double NNfunction_sg_dL::synapse0x40c08c0() {
   return (neuron0x40c2600()*-0.022346);
}

double NNfunction_sg_dL::synapse0x40c0900() {
   return (neuron0x40c2820()*-0.00457864);
}

double NNfunction_sg_dL::synapse0x40c0c00() {
   return (neuron0x40c2b60()*0.0086599);
}

double NNfunction_sg_dL::synapse0x40c0c40() {
   return (neuron0x40c2ea0()*-0.0118902);
}

double NNfunction_sg_dL::synapse0x40c0f40() {
   return (neuron0x40c31e0()*0.0344639);
}

double NNfunction_sg_dL::synapse0x40c0f80() {
   return (neuron0x40c3520()*-0.0124873);
}

double NNfunction_sg_dL::synapse0x40c1280() {
   return (neuron0x40c3860()*-0.0249129);
}

double NNfunction_sg_dL::synapse0x40c12c0() {
   return (neuron0x40bed30()*0.00565242);
}

double NNfunction_sg_dL::synapse0x40c1f80() {
   return (neuron0x40befe0()*0.00118354);
}

double NNfunction_sg_dL::synapse0x40c1fc0() {
   return (neuron0x40bf320()*0.0522821);
}

double NNfunction_sg_dL::synapse0x40cea90() {
   return (neuron0x40bf660()*-0.0544811);
}

double NNfunction_sg_dL::synapse0x40cead0() {
   return (neuron0x40bf9a0()*-0.0011269);
}

double NNfunction_sg_dL::synapse0x40c22c0() {
   return (neuron0x40bfce0()*0.0160001);
}

double NNfunction_sg_dL::synapse0x40c2300() {
   return (neuron0x40c0020()*-0.00258448);
}

double NNfunction_sg_dL::synapse0x2cfdd30() {
   return (neuron0x40c0360()*0.0159399);
}

double NNfunction_sg_dL::synapse0x2cfdd70() {
   return (neuron0x40c06a0()*0.0518461);
}

double NNfunction_sg_dL::synapse0x40c2a40() {
   return (neuron0x40c09e0()*-0.003223);
}

double NNfunction_sg_dL::synapse0x40c2a80() {
   return (neuron0x40c0d20()*0.0252026);
}

double NNfunction_sg_dL::synapse0x40c2d80() {
   return (neuron0x40c1060()*-1.46926);
}

double NNfunction_sg_dL::synapse0x40c2dc0() {
   return (neuron0x40c13a0()*0.0291989);
}

double NNfunction_sg_dL::synapse0x40c30c0() {
   return (neuron0x40c16e0()*0.0139232);
}

double NNfunction_sg_dL::synapse0x40c3100() {
   return (neuron0x40c1a20()*-0.023672);
}

double NNfunction_sg_dL::synapse0x40c3400() {
   return (neuron0x40c1d60()*0.00101313);
}

double NNfunction_sg_dL::synapse0x40c3440() {
   return (neuron0x40c20a0()*-0.00632969);
}

double NNfunction_sg_dL::synapse0x40c3740() {
   return (neuron0x40c2600()*0.00983649);
}

double NNfunction_sg_dL::synapse0x40c3780() {
   return (neuron0x40c2820()*0.020532);
}

double NNfunction_sg_dL::synapse0x40c3a80() {
   return (neuron0x40c2b60()*0.0117151);
}

double NNfunction_sg_dL::synapse0x40c3ac0() {
   return (neuron0x40c2ea0()*0.00987569);
}

double NNfunction_sg_dL::synapse0x40c15c0() {
   return (neuron0x40c31e0()*0.0110266);
}

double NNfunction_sg_dL::synapse0x40c1600() {
   return (neuron0x40c3520()*-0.0051033);
}

double NNfunction_sg_dL::synapse0x40d09b0() {
   return (neuron0x40c3860()*-0.0061241);
}

double NNfunction_sg_dL::synapse0x40d0d30() {
   return (neuron0x40bed30()*0.000265137);
}

double NNfunction_sg_dL::synapse0x40d0d70() {
   return (neuron0x40befe0()*-0.000384433);
}

double NNfunction_sg_dL::synapse0x40d0db0() {
   return (neuron0x40bf320()*-0.0520229);
}

double NNfunction_sg_dL::synapse0x40d0df0() {
   return (neuron0x40bf660()*1.79109);
}

double NNfunction_sg_dL::synapse0x40d0e30() {
   return (neuron0x40bf9a0()*0.00211018);
}

double NNfunction_sg_dL::synapse0x40d0e70() {
   return (neuron0x40bfce0()*-0.00442915);
}

double NNfunction_sg_dL::synapse0x40d0eb0() {
   return (neuron0x40c0020()*0.00163002);
}

double NNfunction_sg_dL::synapse0x40d0ef0() {
   return (neuron0x40c0360()*0.00275435);
}

double NNfunction_sg_dL::synapse0x40d0f30() {
   return (neuron0x40c06a0()*-0.00177296);
}

double NNfunction_sg_dL::synapse0x40d0f70() {
   return (neuron0x40c09e0()*0.0146453);
}

double NNfunction_sg_dL::synapse0x40d0fb0() {
   return (neuron0x40c0d20()*-0.00175551);
}

double NNfunction_sg_dL::synapse0x40d0ff0() {
   return (neuron0x40c1060()*-0.482315);
}

double NNfunction_sg_dL::synapse0x40d1030() {
   return (neuron0x40c13a0()*0.0052435);
}

double NNfunction_sg_dL::synapse0x40d1070() {
   return (neuron0x40c16e0()*0.00874423);
}

double NNfunction_sg_dL::synapse0x40d10b0() {
   return (neuron0x40c1a20()*0.00982985);
}

double NNfunction_sg_dL::synapse0x40d10f0() {
   return (neuron0x40c1d60()*0.00442907);
}

double NNfunction_sg_dL::synapse0x40d0b80() {
   return (neuron0x40c20a0()*0.00245386);
}

double NNfunction_sg_dL::synapse0x40d0bc0() {
   return (neuron0x40c2600()*0.000879741);
}

double NNfunction_sg_dL::synapse0x40d1240() {
   return (neuron0x40c2820()*0.00549897);
}

double NNfunction_sg_dL::synapse0x40d1280() {
   return (neuron0x40c2b60()*0.00936636);
}

double NNfunction_sg_dL::synapse0x40d12c0() {
   return (neuron0x40c2ea0()*-0.00159736);
}

double NNfunction_sg_dL::synapse0x40d1300() {
   return (neuron0x40c31e0()*-0.00516227);
}

double NNfunction_sg_dL::synapse0x40d1340() {
   return (neuron0x40c3520()*-0.00209413);
}

double NNfunction_sg_dL::synapse0x40d1380() {
   return (neuron0x40c3860()*0.00862662);
}

double NNfunction_sg_dL::synapse0x40d1700() {
   return (neuron0x40bed30()*-0.0130858);
}

double NNfunction_sg_dL::synapse0x40d1740() {
   return (neuron0x40befe0()*0.00553694);
}

double NNfunction_sg_dL::synapse0x40d1780() {
   return (neuron0x40bf320()*-0.00670361);
}

double NNfunction_sg_dL::synapse0x40d17c0() {
   return (neuron0x40bf660()*-0.248447);
}

double NNfunction_sg_dL::synapse0x40d1800() {
   return (neuron0x40bf9a0()*-0.0189912);
}

double NNfunction_sg_dL::synapse0x40d1840() {
   return (neuron0x40bfce0()*-0.0224229);
}

double NNfunction_sg_dL::synapse0x40d1880() {
   return (neuron0x40c0020()*-0.00572196);
}

double NNfunction_sg_dL::synapse0x40d18c0() {
   return (neuron0x40c0360()*-0.0108759);
}

double NNfunction_sg_dL::synapse0x40d1900() {
   return (neuron0x40c06a0()*0.0458948);
}

double NNfunction_sg_dL::synapse0x40d1940() {
   return (neuron0x40c09e0()*0.0151688);
}

double NNfunction_sg_dL::synapse0x40d1980() {
   return (neuron0x40c0d20()*0.00659415);
}

double NNfunction_sg_dL::synapse0x40d19c0() {
   return (neuron0x40c1060()*-2.31834);
}

double NNfunction_sg_dL::synapse0x40d1a00() {
   return (neuron0x40c13a0()*0.0603178);
}

double NNfunction_sg_dL::synapse0x40d1a40() {
   return (neuron0x40c16e0()*-0.0249136);
}

double NNfunction_sg_dL::synapse0x40d1a80() {
   return (neuron0x40c1a20()*0.0123931);
}

double NNfunction_sg_dL::synapse0x40d1ac0() {
   return (neuron0x40c1d60()*0.0202462);
}

double NNfunction_sg_dL::synapse0x40d1550() {
   return (neuron0x40c20a0()*-0.0219308);
}

double NNfunction_sg_dL::synapse0x40d1590() {
   return (neuron0x40c2600()*0.0161734);
}

double NNfunction_sg_dL::synapse0x40d1c10() {
   return (neuron0x40c2820()*0.0196597);
}

double NNfunction_sg_dL::synapse0x40d1c50() {
   return (neuron0x40c2b60()*0.00248875);
}

double NNfunction_sg_dL::synapse0x40d1c90() {
   return (neuron0x40c2ea0()*0.00439247);
}

double NNfunction_sg_dL::synapse0x40d1cd0() {
   return (neuron0x40c31e0()*0.0138392);
}

double NNfunction_sg_dL::synapse0x40d1d10() {
   return (neuron0x40c3520()*0.0149085);
}

double NNfunction_sg_dL::synapse0x40d1d50() {
   return (neuron0x40c3860()*-0.0184454);
}

double NNfunction_sg_dL::synapse0x40d20d0() {
   return (neuron0x40bed30()*-0.0682134);
}

double NNfunction_sg_dL::synapse0x40d2110() {
   return (neuron0x40befe0()*-0.00694734);
}

double NNfunction_sg_dL::synapse0x40d2150() {
   return (neuron0x40bf320()*-0.220996);
}

double NNfunction_sg_dL::synapse0x40d2190() {
   return (neuron0x40bf660()*0.810991);
}

double NNfunction_sg_dL::synapse0x40d21d0() {
   return (neuron0x40bf9a0()*-0.218805);
}

double NNfunction_sg_dL::synapse0x40d2210() {
   return (neuron0x40bfce0()*-0.0276723);
}

double NNfunction_sg_dL::synapse0x40d2250() {
   return (neuron0x40c0020()*0.111416);
}

double NNfunction_sg_dL::synapse0x40d2290() {
   return (neuron0x40c0360()*-0.381199);
}

double NNfunction_sg_dL::synapse0x40d22d0() {
   return (neuron0x40c06a0()*-0.273402);
}

double NNfunction_sg_dL::synapse0x40d2310() {
   return (neuron0x40c09e0()*-0.168995);
}

double NNfunction_sg_dL::synapse0x40d2350() {
   return (neuron0x40c0d20()*0.190923);
}

double NNfunction_sg_dL::synapse0x40d2390() {
   return (neuron0x40c1060()*0.766674);
}

double NNfunction_sg_dL::synapse0x40d23d0() {
   return (neuron0x40c13a0()*0.121217);
}

double NNfunction_sg_dL::synapse0x40d2410() {
   return (neuron0x40c16e0()*0.185064);
}

double NNfunction_sg_dL::synapse0x40d2450() {
   return (neuron0x40c1a20()*-0.198421);
}

double NNfunction_sg_dL::synapse0x40d2490() {
   return (neuron0x40c1d60()*-0.0928252);
}

double NNfunction_sg_dL::synapse0x40d1f20() {
   return (neuron0x40c20a0()*-0.143672);
}

double NNfunction_sg_dL::synapse0x40d1f60() {
   return (neuron0x40c2600()*-0.013143);
}

double NNfunction_sg_dL::synapse0x40d25e0() {
   return (neuron0x40c2820()*0.19965);
}

double NNfunction_sg_dL::synapse0x40d2620() {
   return (neuron0x40c2b60()*-0.0869438);
}

double NNfunction_sg_dL::synapse0x40d2660() {
   return (neuron0x40c2ea0()*0.0906423);
}

double NNfunction_sg_dL::synapse0x40d26a0() {
   return (neuron0x40c31e0()*-0.159117);
}

double NNfunction_sg_dL::synapse0x40d26e0() {
   return (neuron0x40c3520()*0.0466897);
}

double NNfunction_sg_dL::synapse0x40d2720() {
   return (neuron0x40c3860()*-0.16013);
}

double NNfunction_sg_dL::synapse0x40d2aa0() {
   return (neuron0x40bed30()*-0.0307563);
}

double NNfunction_sg_dL::synapse0x40d2ae0() {
   return (neuron0x40befe0()*0.00438963);
}

double NNfunction_sg_dL::synapse0x40d2b20() {
   return (neuron0x40bf320()*-0.0110011);
}

double NNfunction_sg_dL::synapse0x40d2b60() {
   return (neuron0x40bf660()*-0.712083);
}

double NNfunction_sg_dL::synapse0x40d2ba0() {
   return (neuron0x40bf9a0()*-0.015941);
}

double NNfunction_sg_dL::synapse0x40d2be0() {
   return (neuron0x40bfce0()*-0.0340183);
}

double NNfunction_sg_dL::synapse0x40d2c20() {
   return (neuron0x40c0020()*0.00260058);
}

double NNfunction_sg_dL::synapse0x40d2c60() {
   return (neuron0x40c0360()*-0.043993);
}

double NNfunction_sg_dL::synapse0x40d2ca0() {
   return (neuron0x40c06a0()*0.00132191);
}

double NNfunction_sg_dL::synapse0x40d2ce0() {
   return (neuron0x40c09e0()*-0.0366497);
}

double NNfunction_sg_dL::synapse0x40d2d20() {
   return (neuron0x40c0d20()*-0.0424678);
}

double NNfunction_sg_dL::synapse0x40d2d60() {
   return (neuron0x40c1060()*1.83325);
}

double NNfunction_sg_dL::synapse0x40d2da0() {
   return (neuron0x40c13a0()*-0.0487712);
}

double NNfunction_sg_dL::synapse0x40d2de0() {
   return (neuron0x40c16e0()*0.0122746);
}

double NNfunction_sg_dL::synapse0x40d2e20() {
   return (neuron0x40c1a20()*0.0111763);
}

double NNfunction_sg_dL::synapse0x40d2e60() {
   return (neuron0x40c1d60()*0.011854);
}

double NNfunction_sg_dL::synapse0x40d28f0() {
   return (neuron0x40c20a0()*0.0409346);
}

double NNfunction_sg_dL::synapse0x40d2930() {
   return (neuron0x40c2600()*-0.0437033);
}

double NNfunction_sg_dL::synapse0x40d2fb0() {
   return (neuron0x40c2820()*-0.0446607);
}

double NNfunction_sg_dL::synapse0x40d2ff0() {
   return (neuron0x40c2b60()*-0.0432314);
}

double NNfunction_sg_dL::synapse0x40d3030() {
   return (neuron0x40c2ea0()*-0.0199084);
}

double NNfunction_sg_dL::synapse0x40d3070() {
   return (neuron0x40c31e0()*0.0136972);
}

double NNfunction_sg_dL::synapse0x40d30b0() {
   return (neuron0x40c3520()*0.019775);
}

double NNfunction_sg_dL::synapse0x40d30f0() {
   return (neuron0x40c3860()*-0.0266001);
}

double NNfunction_sg_dL::synapse0x40d3470() {
   return (neuron0x40bed30()*-0.0125394);
}

double NNfunction_sg_dL::synapse0x40d34b0() {
   return (neuron0x40befe0()*-0.0125282);
}

double NNfunction_sg_dL::synapse0x40d34f0() {
   return (neuron0x40bf320()*0.131768);
}

double NNfunction_sg_dL::synapse0x40d3530() {
   return (neuron0x40bf660()*0.054316);
}

double NNfunction_sg_dL::synapse0x40d3570() {
   return (neuron0x40bf9a0()*-0.0153801);
}

double NNfunction_sg_dL::synapse0x40d35b0() {
   return (neuron0x40bfce0()*-0.00921918);
}

double NNfunction_sg_dL::synapse0x40d35f0() {
   return (neuron0x40c0020()*0.0215479);
}

double NNfunction_sg_dL::synapse0x40d3630() {
   return (neuron0x40c0360()*0.00509846);
}

double NNfunction_sg_dL::synapse0x40d3670() {
   return (neuron0x40c06a0()*-0.0199502);
}

double NNfunction_sg_dL::synapse0x40cb830() {
   return (neuron0x40c09e0()*-0.0528719);
}

double NNfunction_sg_dL::synapse0x40cb870() {
   return (neuron0x40c0d20()*0.0517209);
}

double NNfunction_sg_dL::synapse0x40cb8b0() {
   return (neuron0x40c1060()*-0.67429);
}

double NNfunction_sg_dL::synapse0x40cb8f0() {
   return (neuron0x40c13a0()*-0.104522);
}

double NNfunction_sg_dL::synapse0x40cb930() {
   return (neuron0x40c16e0()*0.0535787);
}

double NNfunction_sg_dL::synapse0x40cb970() {
   return (neuron0x40c1a20()*-0.000364217);
}

double NNfunction_sg_dL::synapse0x40cb9b0() {
   return (neuron0x40c1d60()*0.0036449);
}

double NNfunction_sg_dL::synapse0x40d32c0() {
   return (neuron0x40c20a0()*0.0194489);
}

double NNfunction_sg_dL::synapse0x40d3300() {
   return (neuron0x40c2600()*-0.025861);
}

double NNfunction_sg_dL::synapse0x40cbb00() {
   return (neuron0x40c2820()*0.0141557);
}

double NNfunction_sg_dL::synapse0x40cbb40() {
   return (neuron0x40c2b60()*-0.0731337);
}

double NNfunction_sg_dL::synapse0x40cbb80() {
   return (neuron0x40c2ea0()*-0.0552978);
}

double NNfunction_sg_dL::synapse0x40cbbc0() {
   return (neuron0x40c31e0()*0.0148324);
}

double NNfunction_sg_dL::synapse0x40cbc00() {
   return (neuron0x40c3520()*-0.00119829);
}

double NNfunction_sg_dL::synapse0x40cbc40() {
   return (neuron0x40c3860()*-0.0282247);
}

double NNfunction_sg_dL::synapse0x40cbfc0() {
   return (neuron0x40bed30()*-0.0151398);
}

double NNfunction_sg_dL::synapse0x40cc000() {
   return (neuron0x40befe0()*-0.014816);
}

double NNfunction_sg_dL::synapse0x40cc040() {
   return (neuron0x40bf320()*-0.0633839);
}

double NNfunction_sg_dL::synapse0x40cc080() {
   return (neuron0x40bf660()*-3.53325);
}

double NNfunction_sg_dL::synapse0x40cc0c0() {
   return (neuron0x40bf9a0()*-0.00464663);
}

double NNfunction_sg_dL::synapse0x40cc100() {
   return (neuron0x40bfce0()*0.00450189);
}

double NNfunction_sg_dL::synapse0x40cc140() {
   return (neuron0x40c0020()*0.006875);
}

double NNfunction_sg_dL::synapse0x40cc180() {
   return (neuron0x40c0360()*0.00163373);
}

double NNfunction_sg_dL::synapse0x40cc1c0() {
   return (neuron0x40c06a0()*0.00769901);
}

double NNfunction_sg_dL::synapse0x40cc200() {
   return (neuron0x40c09e0()*-0.00825135);
}

double NNfunction_sg_dL::synapse0x40cc240() {
   return (neuron0x40c0d20()*0.00347677);
}

double NNfunction_sg_dL::synapse0x40cc280() {
   return (neuron0x40c1060()*-1.13572);
}

double NNfunction_sg_dL::synapse0x40cc2c0() {
   return (neuron0x40c13a0()*-0.0840379);
}

double NNfunction_sg_dL::synapse0x40cc300() {
   return (neuron0x40c16e0()*0.0377868);
}

double NNfunction_sg_dL::synapse0x40cc340() {
   return (neuron0x40c1a20()*-0.0305786);
}

double NNfunction_sg_dL::synapse0x40cc380() {
   return (neuron0x40c1d60()*-0.0349533);
}

double NNfunction_sg_dL::synapse0x40cbe10() {
   return (neuron0x40c20a0()*0.00298468);
}

double NNfunction_sg_dL::synapse0x40cbe50() {
   return (neuron0x40c2600()*-0.0365614);
}

double NNfunction_sg_dL::synapse0x40cc4d0() {
   return (neuron0x40c2820()*-0.0827519);
}

double NNfunction_sg_dL::synapse0x40cc510() {
   return (neuron0x40c2b60()*-0.0121985);
}

double NNfunction_sg_dL::synapse0x40cc550() {
   return (neuron0x40c2ea0()*-0.00602867);
}

double NNfunction_sg_dL::synapse0x40cc590() {
   return (neuron0x40c31e0()*0.0119329);
}

double NNfunction_sg_dL::synapse0x40cc5d0() {
   return (neuron0x40c3520()*0.0050349);
}

double NNfunction_sg_dL::synapse0x40cc610() {
   return (neuron0x40c3860()*-0.0240929);
}

double NNfunction_sg_dL::synapse0x40cc7e0() {
   return (neuron0x40bed30()*-0.00443307);
}

double NNfunction_sg_dL::synapse0x40d5870() {
   return (neuron0x40befe0()*-0.0354409);
}

double NNfunction_sg_dL::synapse0x40d58b0() {
   return (neuron0x40bf320()*-0.170067);
}

double NNfunction_sg_dL::synapse0x40d58f0() {
   return (neuron0x40bf660()*-0.347583);
}

double NNfunction_sg_dL::synapse0x40d5930() {
   return (neuron0x40bf9a0()*0.00339559);
}

double NNfunction_sg_dL::synapse0x40d5970() {
   return (neuron0x40bfce0()*0.0620567);
}

double NNfunction_sg_dL::synapse0x40d59b0() {
   return (neuron0x40c0020()*0.0302118);
}

double NNfunction_sg_dL::synapse0x40d59f0() {
   return (neuron0x40c0360()*0.0157748);
}

double NNfunction_sg_dL::synapse0x40d5a30() {
   return (neuron0x40c06a0()*0.0127071);
}

double NNfunction_sg_dL::synapse0x40d5a70() {
   return (neuron0x40c09e0()*-0.0123458);
}

double NNfunction_sg_dL::synapse0x40d5ab0() {
   return (neuron0x40c0d20()*0.0434499);
}

double NNfunction_sg_dL::synapse0x40d5af0() {
   return (neuron0x40c1060()*0.326353);
}

double NNfunction_sg_dL::synapse0x40d5b30() {
   return (neuron0x40c13a0()*-0.091074);
}

double NNfunction_sg_dL::synapse0x40d5b70() {
   return (neuron0x40c16e0()*0.0714203);
}

double NNfunction_sg_dL::synapse0x40d5bb0() {
   return (neuron0x40c1a20()*-0.0492164);
}

double NNfunction_sg_dL::synapse0x40d5bf0() {
   return (neuron0x40c1d60()*-0.0461978);
}

double NNfunction_sg_dL::synapse0x40d56c0() {
   return (neuron0x40c20a0()*-0.0259334);
}

double NNfunction_sg_dL::synapse0x40d5700() {
   return (neuron0x40c2600()*0.0265379);
}

double NNfunction_sg_dL::synapse0x40d5d40() {
   return (neuron0x40c2820()*0.0334485);
}

double NNfunction_sg_dL::synapse0x40d5d80() {
   return (neuron0x40c2b60()*-0.0322389);
}

double NNfunction_sg_dL::synapse0x40d5dc0() {
   return (neuron0x40c2ea0()*-0.0380366);
}

double NNfunction_sg_dL::synapse0x40d5e00() {
   return (neuron0x40c31e0()*0.0304456);
}

double NNfunction_sg_dL::synapse0x40d5e40() {
   return (neuron0x40c3520()*-0.00369588);
}

double NNfunction_sg_dL::synapse0x40d5e80() {
   return (neuron0x40c3860()*-0.00179469);
}

double NNfunction_sg_dL::synapse0x40d6200() {
   return (neuron0x40bed30()*0.0252215);
}

double NNfunction_sg_dL::synapse0x40d6240() {
   return (neuron0x40befe0()*0.0577436);
}

double NNfunction_sg_dL::synapse0x40d6280() {
   return (neuron0x40bf320()*0.269176);
}

double NNfunction_sg_dL::synapse0x40d62c0() {
   return (neuron0x40bf660()*0.336414);
}

double NNfunction_sg_dL::synapse0x40d6300() {
   return (neuron0x40bf9a0()*0.0715552);
}

double NNfunction_sg_dL::synapse0x40d6340() {
   return (neuron0x40bfce0()*0.082711);
}

double NNfunction_sg_dL::synapse0x40d6380() {
   return (neuron0x40c0020()*0.0189829);
}

double NNfunction_sg_dL::synapse0x40d63c0() {
   return (neuron0x40c0360()*0.106676);
}

double NNfunction_sg_dL::synapse0x40d6400() {
   return (neuron0x40c06a0()*0.0652809);
}

double NNfunction_sg_dL::synapse0x40d6440() {
   return (neuron0x40c09e0()*0.0720361);
}

double NNfunction_sg_dL::synapse0x40d6480() {
   return (neuron0x40c0d20()*0.0178759);
}

double NNfunction_sg_dL::synapse0x40d64c0() {
   return (neuron0x40c1060()*-0.379852);
}

double NNfunction_sg_dL::synapse0x40d6500() {
   return (neuron0x40c13a0()*0.502412);
}

double NNfunction_sg_dL::synapse0x40d6540() {
   return (neuron0x40c16e0()*-0.0307946);
}

double NNfunction_sg_dL::synapse0x40d6580() {
   return (neuron0x40c1a20()*0.256474);
}

double NNfunction_sg_dL::synapse0x40d65c0() {
   return (neuron0x40c1d60()*0.258644);
}

double NNfunction_sg_dL::synapse0x40d6050() {
   return (neuron0x40c20a0()*-0.100666);
}

double NNfunction_sg_dL::synapse0x40d6090() {
   return (neuron0x40c2600()*0.217554);
}

double NNfunction_sg_dL::synapse0x40d6710() {
   return (neuron0x40c2820()*0.271589);
}

double NNfunction_sg_dL::synapse0x40d6750() {
   return (neuron0x40c2b60()*0.0888564);
}

double NNfunction_sg_dL::synapse0x40d6790() {
   return (neuron0x40c2ea0()*0.0108101);
}

double NNfunction_sg_dL::synapse0x40d67d0() {
   return (neuron0x40c31e0()*0.0356958);
}

double NNfunction_sg_dL::synapse0x40d6810() {
   return (neuron0x40c3520()*0.0147709);
}

double NNfunction_sg_dL::synapse0x40d6850() {
   return (neuron0x40c3860()*0.0413364);
}

double NNfunction_sg_dL::synapse0x40d6bd0() {
   return (neuron0x40bed30()*-0.0235062);
}

double NNfunction_sg_dL::synapse0x40d6c10() {
   return (neuron0x40befe0()*0.16675);
}

double NNfunction_sg_dL::synapse0x40d6c50() {
   return (neuron0x40bf320()*-0.101953);
}

double NNfunction_sg_dL::synapse0x40d6c90() {
   return (neuron0x40bf660()*0.907024);
}

double NNfunction_sg_dL::synapse0x40d6cd0() {
   return (neuron0x40bf9a0()*0.176193);
}

double NNfunction_sg_dL::synapse0x40d6d10() {
   return (neuron0x40bfce0()*0.0268212);
}

double NNfunction_sg_dL::synapse0x40d6d50() {
   return (neuron0x40c0020()*0.0839766);
}

double NNfunction_sg_dL::synapse0x40d6d90() {
   return (neuron0x40c0360()*-0.0959337);
}

double NNfunction_sg_dL::synapse0x40d6dd0() {
   return (neuron0x40c06a0()*-0.0167139);
}

double NNfunction_sg_dL::synapse0x40d6e10() {
   return (neuron0x40c09e0()*0.0139928);
}

double NNfunction_sg_dL::synapse0x40d6e50() {
   return (neuron0x40c0d20()*-0.0353121);
}

double NNfunction_sg_dL::synapse0x40d6e90() {
   return (neuron0x40c1060()*1.26926);
}

double NNfunction_sg_dL::synapse0x40d6ed0() {
   return (neuron0x40c13a0()*-0.0108014);
}

double NNfunction_sg_dL::synapse0x40d6f10() {
   return (neuron0x40c16e0()*-0.397679);
}

double NNfunction_sg_dL::synapse0x40d6f50() {
   return (neuron0x40c1a20()*-0.180633);
}

double NNfunction_sg_dL::synapse0x40d6f90() {
   return (neuron0x40c1d60()*-0.338333);
}

double NNfunction_sg_dL::synapse0x40d6a20() {
   return (neuron0x40c20a0()*-0.0911873);
}

double NNfunction_sg_dL::synapse0x40d6a60() {
   return (neuron0x40c2600()*0.160797);
}

double NNfunction_sg_dL::synapse0x40d70e0() {
   return (neuron0x40c2820()*0.113072);
}

double NNfunction_sg_dL::synapse0x40d7120() {
   return (neuron0x40c2b60()*0.201931);
}

double NNfunction_sg_dL::synapse0x40d7160() {
   return (neuron0x40c2ea0()*0.170584);
}

double NNfunction_sg_dL::synapse0x40d71a0() {
   return (neuron0x40c31e0()*0.0876668);
}

double NNfunction_sg_dL::synapse0x40d71e0() {
   return (neuron0x40c3520()*0.0690112);
}

double NNfunction_sg_dL::synapse0x40d7220() {
   return (neuron0x40c3860()*0.0962973);
}

double NNfunction_sg_dL::synapse0x40d75a0() {
   return (neuron0x40bed30()*0.150405);
}

double NNfunction_sg_dL::synapse0x40d75e0() {
   return (neuron0x40befe0()*-0.215265);
}

double NNfunction_sg_dL::synapse0x40d7620() {
   return (neuron0x40bf320()*-0.164463);
}

double NNfunction_sg_dL::synapse0x40d7660() {
   return (neuron0x40bf660()*-0.341337);
}

double NNfunction_sg_dL::synapse0x40d76a0() {
   return (neuron0x40bf9a0()*0.289141);
}

double NNfunction_sg_dL::synapse0x40d76e0() {
   return (neuron0x40bfce0()*0.313534);
}

double NNfunction_sg_dL::synapse0x40d7720() {
   return (neuron0x40c0020()*-0.452132);
}

double NNfunction_sg_dL::synapse0x40d7760() {
   return (neuron0x40c0360()*-0.336433);
}

double NNfunction_sg_dL::synapse0x40d77a0() {
   return (neuron0x40c06a0()*-0.279298);
}

double NNfunction_sg_dL::synapse0x40d77e0() {
   return (neuron0x40c09e0()*-0.160438);
}

double NNfunction_sg_dL::synapse0x40d7820() {
   return (neuron0x40c0d20()*-0.16832);
}

double NNfunction_sg_dL::synapse0x40d7860() {
   return (neuron0x40c1060()*-0.520226);
}

double NNfunction_sg_dL::synapse0x40d78a0() {
   return (neuron0x40c13a0()*-0.201309);
}

double NNfunction_sg_dL::synapse0x40d78e0() {
   return (neuron0x40c16e0()*-0.228901);
}

double NNfunction_sg_dL::synapse0x40d7920() {
   return (neuron0x40c1a20()*-0.518307);
}

double NNfunction_sg_dL::synapse0x40d7960() {
   return (neuron0x40c1d60()*-0.263221);
}

double NNfunction_sg_dL::synapse0x40d73f0() {
   return (neuron0x40c20a0()*-0.401577);
}

double NNfunction_sg_dL::synapse0x40d7430() {
   return (neuron0x40c2600()*-0.305803);
}

double NNfunction_sg_dL::synapse0x40d7ab0() {
   return (neuron0x40c2820()*-0.0845461);
}

double NNfunction_sg_dL::synapse0x40d7af0() {
   return (neuron0x40c2b60()*0.13923);
}

double NNfunction_sg_dL::synapse0x40d7b30() {
   return (neuron0x40c2ea0()*0.383426);
}

double NNfunction_sg_dL::synapse0x40d7b70() {
   return (neuron0x40c31e0()*0.583913);
}

double NNfunction_sg_dL::synapse0x40d7bb0() {
   return (neuron0x40c3520()*-0.131632);
}

double NNfunction_sg_dL::synapse0x40d7bf0() {
   return (neuron0x40c3860()*-0.190331);
}

double NNfunction_sg_dL::synapse0x40d7f70() {
   return (neuron0x40bed30()*-0.456701);
}

double NNfunction_sg_dL::synapse0x40d7fb0() {
   return (neuron0x40befe0()*-0.319366);
}

double NNfunction_sg_dL::synapse0x40d7ff0() {
   return (neuron0x40bf320()*-0.34128);
}

double NNfunction_sg_dL::synapse0x40d8030() {
   return (neuron0x40bf660()*-0.00155835);
}

double NNfunction_sg_dL::synapse0x40d8070() {
   return (neuron0x40bf9a0()*0.0159225);
}

double NNfunction_sg_dL::synapse0x40d80b0() {
   return (neuron0x40bfce0()*-0.549974);
}

double NNfunction_sg_dL::synapse0x40d80f0() {
   return (neuron0x40c0020()*-0.102939);
}

double NNfunction_sg_dL::synapse0x40d8130() {
   return (neuron0x40c0360()*-0.0923571);
}

double NNfunction_sg_dL::synapse0x40d8170() {
   return (neuron0x40c06a0()*0.286061);
}

double NNfunction_sg_dL::synapse0x40d81b0() {
   return (neuron0x40c09e0()*-0.338156);
}

double NNfunction_sg_dL::synapse0x40d81f0() {
   return (neuron0x40c0d20()*0.367169);
}

double NNfunction_sg_dL::synapse0x40d8230() {
   return (neuron0x40c1060()*-1.25398);
}

double NNfunction_sg_dL::synapse0x40d8270() {
   return (neuron0x40c13a0()*-0.24073);
}

double NNfunction_sg_dL::synapse0x40d82b0() {
   return (neuron0x40c16e0()*-0.385732);
}

double NNfunction_sg_dL::synapse0x40d82f0() {
   return (neuron0x40c1a20()*-0.577311);
}

double NNfunction_sg_dL::synapse0x40d8330() {
   return (neuron0x40c1d60()*-0.582437);
}

double NNfunction_sg_dL::synapse0x40d7dc0() {
   return (neuron0x40c20a0()*0.111064);
}

double NNfunction_sg_dL::synapse0x40d7e00() {
   return (neuron0x40c2600()*-0.720945);
}

double NNfunction_sg_dL::synapse0x40d8480() {
   return (neuron0x40c2820()*-0.693159);
}

double NNfunction_sg_dL::synapse0x40d84c0() {
   return (neuron0x40c2b60()*-0.369809);
}

double NNfunction_sg_dL::synapse0x40d8500() {
   return (neuron0x40c2ea0()*0.418307);
}

double NNfunction_sg_dL::synapse0x40d8540() {
   return (neuron0x40c31e0()*-0.021518);
}

double NNfunction_sg_dL::synapse0x40d8580() {
   return (neuron0x40c3520()*-0.322764);
}

double NNfunction_sg_dL::synapse0x40d85c0() {
   return (neuron0x40c3860()*-0.0117033);
}

double NNfunction_sg_dL::synapse0x40d8940() {
   return (neuron0x40bed30()*-0.0125501);
}

double NNfunction_sg_dL::synapse0x40d8980() {
   return (neuron0x40befe0()*0.0144684);
}

double NNfunction_sg_dL::synapse0x40d89c0() {
   return (neuron0x40bf320()*0.056911);
}

double NNfunction_sg_dL::synapse0x40d8a00() {
   return (neuron0x40bf660()*-2.45638);
}

double NNfunction_sg_dL::synapse0x40d8a40() {
   return (neuron0x40bf9a0()*-0.022791);
}

double NNfunction_sg_dL::synapse0x40d8a80() {
   return (neuron0x40bfce0()*-0.0384644);
}

double NNfunction_sg_dL::synapse0x40d8ac0() {
   return (neuron0x40c0020()*-0.000365937);
}

double NNfunction_sg_dL::synapse0x40d8b00() {
   return (neuron0x40c0360()*-0.00270105);
}

double NNfunction_sg_dL::synapse0x40d8b40() {
   return (neuron0x40c06a0()*-0.0596643);
}

double NNfunction_sg_dL::synapse0x40d8b80() {
   return (neuron0x40c09e0()*0.0246317);
}

double NNfunction_sg_dL::synapse0x40d8bc0() {
   return (neuron0x40c0d20()*-0.00113302);
}

double NNfunction_sg_dL::synapse0x40d8c00() {
   return (neuron0x40c1060()*1.02485);
}

double NNfunction_sg_dL::synapse0x40d8c40() {
   return (neuron0x40c13a0()*-0.40178);
}

double NNfunction_sg_dL::synapse0x40d8c80() {
   return (neuron0x40c16e0()*0.0350758);
}

double NNfunction_sg_dL::synapse0x40d8cc0() {
   return (neuron0x40c1a20()*-0.170193);
}

double NNfunction_sg_dL::synapse0x40d8d00() {
   return (neuron0x40c1d60()*-0.199095);
}

double NNfunction_sg_dL::synapse0x40d8790() {
   return (neuron0x40c20a0()*-0.0208565);
}

double NNfunction_sg_dL::synapse0x40d87d0() {
   return (neuron0x40c2600()*-0.160043);
}

double NNfunction_sg_dL::synapse0x40d8e50() {
   return (neuron0x40c2820()*-0.165721);
}

double NNfunction_sg_dL::synapse0x40d8e90() {
   return (neuron0x40c2b60()*0.0129729);
}

double NNfunction_sg_dL::synapse0x40d8ed0() {
   return (neuron0x40c2ea0()*-0.0271535);
}

double NNfunction_sg_dL::synapse0x40d8f10() {
   return (neuron0x40c31e0()*-0.0158395);
}

double NNfunction_sg_dL::synapse0x40d8f50() {
   return (neuron0x40c3520()*0.0122347);
}

double NNfunction_sg_dL::synapse0x40d8f90() {
   return (neuron0x40c3860()*0.0496945);
}

double NNfunction_sg_dL::synapse0x40d9310() {
   return (neuron0x40bed30()*-0.00139104);
}

double NNfunction_sg_dL::synapse0x40d9350() {
   return (neuron0x40befe0()*0.0134194);
}

double NNfunction_sg_dL::synapse0x40d9390() {
   return (neuron0x40bf320()*0.76713);
}

double NNfunction_sg_dL::synapse0x40d93d0() {
   return (neuron0x40bf660()*0.112462);
}

double NNfunction_sg_dL::synapse0x40d9410() {
   return (neuron0x40bf9a0()*-0.0107768);
}

double NNfunction_sg_dL::synapse0x40d9450() {
   return (neuron0x40bfce0()*-0.00590423);
}

double NNfunction_sg_dL::synapse0x40d9490() {
   return (neuron0x40c0020()*-0.0168275);
}

double NNfunction_sg_dL::synapse0x40d94d0() {
   return (neuron0x40c0360()*-0.0263986);
}

double NNfunction_sg_dL::synapse0x40d9510() {
   return (neuron0x40c06a0()*-0.012927);
}

double NNfunction_sg_dL::synapse0x40d9550() {
   return (neuron0x40c09e0()*0.0172268);
}

double NNfunction_sg_dL::synapse0x40d9590() {
   return (neuron0x40c0d20()*-0.000305674);
}

double NNfunction_sg_dL::synapse0x40d95d0() {
   return (neuron0x40c1060()*-0.582757);
}

double NNfunction_sg_dL::synapse0x40d9610() {
   return (neuron0x40c13a0()*-0.00235707);
}

double NNfunction_sg_dL::synapse0x40d9650() {
   return (neuron0x40c16e0()*0.0140087);
}

double NNfunction_sg_dL::synapse0x40d9690() {
   return (neuron0x40c1a20()*0.00651084);
}

double NNfunction_sg_dL::synapse0x40d96d0() {
   return (neuron0x40c1d60()*0.0107106);
}

double NNfunction_sg_dL::synapse0x40d9160() {
   return (neuron0x40c20a0()*0.0422797);
}

double NNfunction_sg_dL::synapse0x40d91a0() {
   return (neuron0x40c2600()*-0.00940245);
}

double NNfunction_sg_dL::synapse0x40d9820() {
   return (neuron0x40c2820()*-0.0134639);
}

double NNfunction_sg_dL::synapse0x40d9860() {
   return (neuron0x40c2b60()*-0.00322173);
}

double NNfunction_sg_dL::synapse0x40d98a0() {
   return (neuron0x40c2ea0()*-0.000397573);
}

double NNfunction_sg_dL::synapse0x40d98e0() {
   return (neuron0x40c31e0()*-0.0138451);
}

double NNfunction_sg_dL::synapse0x40d9920() {
   return (neuron0x40c3520()*-0.0116753);
}

double NNfunction_sg_dL::synapse0x40d9960() {
   return (neuron0x40c3860()*0.00466164);
}

double NNfunction_sg_dL::synapse0x40d9ce0() {
   return (neuron0x40bed30()*0.111224);
}

double NNfunction_sg_dL::synapse0x40d9d20() {
   return (neuron0x40befe0()*0.0890211);
}

double NNfunction_sg_dL::synapse0x40d9d60() {
   return (neuron0x40bf320()*0.442316);
}

double NNfunction_sg_dL::synapse0x40d9da0() {
   return (neuron0x40bf660()*0.758081);
}

double NNfunction_sg_dL::synapse0x40d9de0() {
   return (neuron0x40bf9a0()*-0.00100298);
}

double NNfunction_sg_dL::synapse0x40d9e20() {
   return (neuron0x40bfce0()*-0.136619);
}

double NNfunction_sg_dL::synapse0x40d9e60() {
   return (neuron0x40c0020()*-0.0692187);
}

double NNfunction_sg_dL::synapse0x40d9ea0() {
   return (neuron0x40c0360()*0.143189);
}

double NNfunction_sg_dL::synapse0x40d9ee0() {
   return (neuron0x40c06a0()*-0.0578779);
}

double NNfunction_sg_dL::synapse0x40d9f20() {
   return (neuron0x40c09e0()*0.159487);
}

double NNfunction_sg_dL::synapse0x40d9f60() {
   return (neuron0x40c0d20()*-0.20339);
}

double NNfunction_sg_dL::synapse0x40d9fa0() {
   return (neuron0x40c1060()*-0.76371);
}

double NNfunction_sg_dL::synapse0x40d9fe0() {
   return (neuron0x40c13a0()*-0.430325);
}

double NNfunction_sg_dL::synapse0x40da020() {
   return (neuron0x40c16e0()*-0.174234);
}

double NNfunction_sg_dL::synapse0x40da060() {
   return (neuron0x40c1a20()*-0.333611);
}

double NNfunction_sg_dL::synapse0x40da0a0() {
   return (neuron0x40c1d60()*-0.341632);
}

double NNfunction_sg_dL::synapse0x40d9b30() {
   return (neuron0x40c20a0()*-0.149783);
}

double NNfunction_sg_dL::synapse0x40d9b70() {
   return (neuron0x40c2600()*-0.401913);
}

double NNfunction_sg_dL::synapse0x40da1f0() {
   return (neuron0x40c2820()*-0.408377);
}

double NNfunction_sg_dL::synapse0x40da230() {
   return (neuron0x40c2b60()*0.0110978);
}

double NNfunction_sg_dL::synapse0x40da270() {
   return (neuron0x40c2ea0()*0.139655);
}

double NNfunction_sg_dL::synapse0x40da2b0() {
   return (neuron0x40c31e0()*0.043342);
}

double NNfunction_sg_dL::synapse0x40da2f0() {
   return (neuron0x40c3520()*-0.0898088);
}

double NNfunction_sg_dL::synapse0x40da330() {
   return (neuron0x40c3860()*-0.0801706);
}

double NNfunction_sg_dL::synapse0x40da6b0() {
   return (neuron0x40bed30()*-0.18062);
}

double NNfunction_sg_dL::synapse0x40cec80() {
   return (neuron0x40befe0()*0.0240705);
}

double NNfunction_sg_dL::synapse0x40cecc0() {
   return (neuron0x40bf320()*-0.0686268);
}

double NNfunction_sg_dL::synapse0x40ced00() {
   return (neuron0x40bf660()*-0.00331815);
}

double NNfunction_sg_dL::synapse0x40cef50() {
   return (neuron0x40bf9a0()*-0.22633);
}

double NNfunction_sg_dL::synapse0x40cef90() {
   return (neuron0x40bfce0()*-0.240745);
}

double NNfunction_sg_dL::synapse0x40cefd0() {
   return (neuron0x40c0020()*0.233769);
}

double NNfunction_sg_dL::synapse0x40cf220() {
   return (neuron0x40c0360()*-0.00469432);
}

double NNfunction_sg_dL::synapse0x40cf260() {
   return (neuron0x40c06a0()*-0.104647);
}

double NNfunction_sg_dL::synapse0x40cf4b0() {
   return (neuron0x40c09e0()*-0.0128801);
}

double NNfunction_sg_dL::synapse0x40cf4f0() {
   return (neuron0x40c0d20()*-0.138924);
}

double NNfunction_sg_dL::synapse0x40cf530() {
   return (neuron0x40c1060()*0.935292);
}

double NNfunction_sg_dL::synapse0x40cf780() {
   return (neuron0x40c13a0()*0.123374);
}

double NNfunction_sg_dL::synapse0x40cf7c0() {
   return (neuron0x40c16e0()*0.258605);
}

double NNfunction_sg_dL::synapse0x40cfa10() {
   return (neuron0x40c1a20()*-0.132941);
}

double NNfunction_sg_dL::synapse0x40cfa50() {
   return (neuron0x40c1d60()*0.221053);
}

double NNfunction_sg_dL::synapse0x40da500() {
   return (neuron0x40c20a0()*0.222155);
}

double NNfunction_sg_dL::synapse0x40da540() {
   return (neuron0x40c2600()*0.439718);
}

double NNfunction_sg_dL::synapse0x40cfba0() {
   return (neuron0x40c2820()*0.0178432);
}

double NNfunction_sg_dL::synapse0x40d00b0() {
   return (neuron0x40c2b60()*-0.00224019);
}

double NNfunction_sg_dL::synapse0x40d00f0() {
   return (neuron0x40c2ea0()*0.11175);
}

double NNfunction_sg_dL::synapse0x40d0130() {
   return (neuron0x40c31e0()*-0.123387);
}

double NNfunction_sg_dL::synapse0x40d0380() {
   return (neuron0x40c3520()*0.151966);
}

double NNfunction_sg_dL::synapse0x40d03c0() {
   return (neuron0x40c3860()*0.0553762);
}

double NNfunction_sg_dL::synapse0x40cfc70() {
   return (neuron0x40bed30()*-0.00745386);
}

double NNfunction_sg_dL::synapse0x40cfcb0() {
   return (neuron0x40befe0()*-0.00262198);
}

double NNfunction_sg_dL::synapse0x40cfcf0() {
   return (neuron0x40bf320()*-0.00315477);
}

double NNfunction_sg_dL::synapse0x40cfd30() {
   return (neuron0x40bf660()*1.59416);
}

double NNfunction_sg_dL::synapse0x40d06b0() {
   return (neuron0x40bf9a0()*0.00227552);
}

double NNfunction_sg_dL::synapse0x40dca00() {
   return (neuron0x40bfce0()*0.0122762);
}

double NNfunction_sg_dL::synapse0x40dca40() {
   return (neuron0x40c0020()*0.00604911);
}

double NNfunction_sg_dL::synapse0x40dca80() {
   return (neuron0x40c0360()*-0.00509638);
}

double NNfunction_sg_dL::synapse0x40dcac0() {
   return (neuron0x40c06a0()*-0.00506833);
}

double NNfunction_sg_dL::synapse0x40dcb00() {
   return (neuron0x40c09e0()*0.00819015);
}

double NNfunction_sg_dL::synapse0x40dcb40() {
   return (neuron0x40c0d20()*0.00751835);
}

double NNfunction_sg_dL::synapse0x40dcb80() {
   return (neuron0x40c1060()*0.346934);
}

double NNfunction_sg_dL::synapse0x40dcbc0() {
   return (neuron0x40c13a0()*-0.0189801);
}

double NNfunction_sg_dL::synapse0x40dcc00() {
   return (neuron0x40c16e0()*-0.00744273);
}

double NNfunction_sg_dL::synapse0x40dcc40() {
   return (neuron0x40c1a20()*-0.0103813);
}

double NNfunction_sg_dL::synapse0x40dcc80() {
   return (neuron0x40c1d60()*-0.0286607);
}

double NNfunction_sg_dL::synapse0x40d0590() {
   return (neuron0x40c20a0()*-0.0160694);
}

double NNfunction_sg_dL::synapse0x40d05d0() {
   return (neuron0x40c2600()*-0.0130736);
}

double NNfunction_sg_dL::synapse0x40dcdd0() {
   return (neuron0x40c2820()*-0.0195227);
}

double NNfunction_sg_dL::synapse0x40dce10() {
   return (neuron0x40c2b60()*0.0158133);
}

double NNfunction_sg_dL::synapse0x40dce50() {
   return (neuron0x40c2ea0()*0.00673114);
}

double NNfunction_sg_dL::synapse0x40dce90() {
   return (neuron0x40c31e0()*0.000447923);
}

double NNfunction_sg_dL::synapse0x40dced0() {
   return (neuron0x40c3520()*-0.00406826);
}

double NNfunction_sg_dL::synapse0x40dcf10() {
   return (neuron0x40c3860()*0.0193499);
}

double NNfunction_sg_dL::synapse0x40dd290() {
   return (neuron0x40bed30()*-0.0183552);
}

double NNfunction_sg_dL::synapse0x40dd2d0() {
   return (neuron0x40befe0()*-0.00630624);
}

double NNfunction_sg_dL::synapse0x40dd310() {
   return (neuron0x40bf320()*0.476937);
}

double NNfunction_sg_dL::synapse0x40dd350() {
   return (neuron0x40bf660()*1.89824);
}

double NNfunction_sg_dL::synapse0x40dd390() {
   return (neuron0x40bf9a0()*-0.00963595);
}

double NNfunction_sg_dL::synapse0x40dd3d0() {
   return (neuron0x40bfce0()*0.0186212);
}

double NNfunction_sg_dL::synapse0x40dd410() {
   return (neuron0x40c0020()*-0.00877934);
}

double NNfunction_sg_dL::synapse0x40dd450() {
   return (neuron0x40c0360()*0.00471009);
}

double NNfunction_sg_dL::synapse0x40dd490() {
   return (neuron0x40c06a0()*0.0382965);
}

double NNfunction_sg_dL::synapse0x40dd4d0() {
   return (neuron0x40c09e0()*0.00288219);
}

double NNfunction_sg_dL::synapse0x40dd510() {
   return (neuron0x40c0d20()*-0.00465359);
}

double NNfunction_sg_dL::synapse0x40dd550() {
   return (neuron0x40c1060()*-0.621667);
}

double NNfunction_sg_dL::synapse0x40dd590() {
   return (neuron0x40c13a0()*-0.12416);
}

double NNfunction_sg_dL::synapse0x40dd5d0() {
   return (neuron0x40c16e0()*0.0143703);
}

double NNfunction_sg_dL::synapse0x40dd610() {
   return (neuron0x40c1a20()*-0.0735524);
}

double NNfunction_sg_dL::synapse0x40dd650() {
   return (neuron0x40c1d60()*-0.0219473);
}

double NNfunction_sg_dL::synapse0x40dd0e0() {
   return (neuron0x40c20a0()*0.0357512);
}

double NNfunction_sg_dL::synapse0x40dd120() {
   return (neuron0x40c2600()*-0.0558193);
}

double NNfunction_sg_dL::synapse0x40dd7a0() {
   return (neuron0x40c2820()*-0.0333409);
}

double NNfunction_sg_dL::synapse0x40dd7e0() {
   return (neuron0x40c2b60()*-0.0656113);
}

double NNfunction_sg_dL::synapse0x40dd820() {
   return (neuron0x40c2ea0()*-0.0221153);
}

double NNfunction_sg_dL::synapse0x40dd860() {
   return (neuron0x40c31e0()*0.0187305);
}

double NNfunction_sg_dL::synapse0x40dd8a0() {
   return (neuron0x40c3520()*0.0104881);
}

double NNfunction_sg_dL::synapse0x40dd8e0() {
   return (neuron0x40c3860()*-0.0556295);
}

double NNfunction_sg_dL::synapse0x40ddc60() {
   return (neuron0x40bed30()*-0.234805);
}

double NNfunction_sg_dL::synapse0x40ddca0() {
   return (neuron0x40befe0()*0.351817);
}

double NNfunction_sg_dL::synapse0x40ddce0() {
   return (neuron0x40bf320()*-0.300046);
}

double NNfunction_sg_dL::synapse0x40ddd20() {
   return (neuron0x40bf660()*-0.594876);
}

double NNfunction_sg_dL::synapse0x40ddd60() {
   return (neuron0x40bf9a0()*-0.032062);
}

double NNfunction_sg_dL::synapse0x40ddda0() {
   return (neuron0x40bfce0()*-0.515509);
}

double NNfunction_sg_dL::synapse0x40ddde0() {
   return (neuron0x40c0020()*0.337105);
}

double NNfunction_sg_dL::synapse0x40dde20() {
   return (neuron0x40c0360()*-0.102432);
}

double NNfunction_sg_dL::synapse0x40dde60() {
   return (neuron0x40c06a0()*-0.296448);
}

double NNfunction_sg_dL::synapse0x40ddea0() {
   return (neuron0x40c09e0()*-0.290492);
}

double NNfunction_sg_dL::synapse0x40ddee0() {
   return (neuron0x40c0d20()*-0.195935);
}

double NNfunction_sg_dL::synapse0x40ddf20() {
   return (neuron0x40c1060()*-0.442312);
}

double NNfunction_sg_dL::synapse0x40ddf60() {
   return (neuron0x40c13a0()*-0.443227);
}

double NNfunction_sg_dL::synapse0x40ddfa0() {
   return (neuron0x40c16e0()*-0.175622);
}

double NNfunction_sg_dL::synapse0x40ddfe0() {
   return (neuron0x40c1a20()*0.194359);
}

double NNfunction_sg_dL::synapse0x40de020() {
   return (neuron0x40c1d60()*-0.145277);
}

double NNfunction_sg_dL::synapse0x40ddab0() {
   return (neuron0x40c20a0()*-0.0564678);
}

double NNfunction_sg_dL::synapse0x40ddaf0() {
   return (neuron0x40c2600()*0.0179185);
}

double NNfunction_sg_dL::synapse0x40de170() {
   return (neuron0x40c2820()*0.112364);
}

double NNfunction_sg_dL::synapse0x40de1b0() {
   return (neuron0x40c2b60()*-0.314303);
}

double NNfunction_sg_dL::synapse0x40de1f0() {
   return (neuron0x40c2ea0()*0.218634);
}

double NNfunction_sg_dL::synapse0x40de230() {
   return (neuron0x40c31e0()*0.246342);
}

double NNfunction_sg_dL::synapse0x40de270() {
   return (neuron0x40c3520()*0.172667);
}

double NNfunction_sg_dL::synapse0x40de2b0() {
   return (neuron0x40c3860()*-0.0580072);
}

double NNfunction_sg_dL::synapse0x40de630() {
   return (neuron0x40bed30()*0.0472105);
}

double NNfunction_sg_dL::synapse0x40de670() {
   return (neuron0x40befe0()*-0.0118716);
}

double NNfunction_sg_dL::synapse0x40de6b0() {
   return (neuron0x40bf320()*-0.559742);
}

double NNfunction_sg_dL::synapse0x40de6f0() {
   return (neuron0x40bf660()*1.01113);
}

double NNfunction_sg_dL::synapse0x40de730() {
   return (neuron0x40bf9a0()*-0.000967992);
}

double NNfunction_sg_dL::synapse0x40de770() {
   return (neuron0x40bfce0()*-0.066206);
}

double NNfunction_sg_dL::synapse0x40de7b0() {
   return (neuron0x40c0020()*-0.00683377);
}

double NNfunction_sg_dL::synapse0x40de7f0() {
   return (neuron0x40c0360()*0.0446734);
}

double NNfunction_sg_dL::synapse0x40de830() {
   return (neuron0x40c06a0()*-0.00402194);
}

double NNfunction_sg_dL::synapse0x40de870() {
   return (neuron0x40c09e0()*0.0371709);
}

double NNfunction_sg_dL::synapse0x40de8b0() {
   return (neuron0x40c0d20()*-0.0213086);
}

double NNfunction_sg_dL::synapse0x40de8f0() {
   return (neuron0x40c1060()*0.126753);
}

double NNfunction_sg_dL::synapse0x40de930() {
   return (neuron0x40c13a0()*-0.12292);
}

double NNfunction_sg_dL::synapse0x40de970() {
   return (neuron0x40c16e0()*-0.0932879);
}

double NNfunction_sg_dL::synapse0x40de9b0() {
   return (neuron0x40c1a20()*-0.0707167);
}

double NNfunction_sg_dL::synapse0x40de9f0() {
   return (neuron0x40c1d60()*0.00485935);
}

double NNfunction_sg_dL::synapse0x40de480() {
   return (neuron0x40c20a0()*-0.000261535);
}

double NNfunction_sg_dL::synapse0x40de4c0() {
   return (neuron0x40c2600()*0.00915956);
}

double NNfunction_sg_dL::synapse0x40deb40() {
   return (neuron0x40c2820()*-0.0243207);
}

double NNfunction_sg_dL::synapse0x40deb80() {
   return (neuron0x40c2b60()*-0.095573);
}

double NNfunction_sg_dL::synapse0x40debc0() {
   return (neuron0x40c2ea0()*-0.0343637);
}

double NNfunction_sg_dL::synapse0x40dec00() {
   return (neuron0x40c31e0()*0.0406485);
}

double NNfunction_sg_dL::synapse0x40dec40() {
   return (neuron0x40c3520()*0.0550369);
}

double NNfunction_sg_dL::synapse0x40dec80() {
   return (neuron0x40c3860()*-0.0961444);
}

double NNfunction_sg_dL::synapse0x40df000() {
   return (neuron0x40bed30()*0.0570435);
}

double NNfunction_sg_dL::synapse0x40df040() {
   return (neuron0x40befe0()*-0.115035);
}

double NNfunction_sg_dL::synapse0x40df080() {
   return (neuron0x40bf320()*0.562612);
}

double NNfunction_sg_dL::synapse0x40df0c0() {
   return (neuron0x40bf660()*-0.454505);
}

double NNfunction_sg_dL::synapse0x40df100() {
   return (neuron0x40bf9a0()*-0.034112);
}

double NNfunction_sg_dL::synapse0x40df140() {
   return (neuron0x40bfce0()*-0.027707);
}

double NNfunction_sg_dL::synapse0x40df180() {
   return (neuron0x40c0020()*-0.0386623);
}

double NNfunction_sg_dL::synapse0x40df1c0() {
   return (neuron0x40c0360()*-0.0457578);
}

double NNfunction_sg_dL::synapse0x40df200() {
   return (neuron0x40c06a0()*0.0401543);
}

double NNfunction_sg_dL::synapse0x40df240() {
   return (neuron0x40c09e0()*0.08143);
}

double NNfunction_sg_dL::synapse0x40df280() {
   return (neuron0x40c0d20()*0.0328175);
}

double NNfunction_sg_dL::synapse0x40df2c0() {
   return (neuron0x40c1060()*0.633368);
}

double NNfunction_sg_dL::synapse0x40df300() {
   return (neuron0x40c13a0()*0.27564);
}

double NNfunction_sg_dL::synapse0x40df340() {
   return (neuron0x40c16e0()*0.0153676);
}

double NNfunction_sg_dL::synapse0x40df380() {
   return (neuron0x40c1a20()*-0.0361835);
}

double NNfunction_sg_dL::synapse0x40df3c0() {
   return (neuron0x40c1d60()*-0.29519);
}

double NNfunction_sg_dL::synapse0x40dee50() {
   return (neuron0x40c20a0()*-0.185634);
}

double NNfunction_sg_dL::synapse0x40dee90() {
   return (neuron0x40c2600()*0.0300057);
}

double NNfunction_sg_dL::synapse0x40df510() {
   return (neuron0x40c2820()*-0.0532622);
}

double NNfunction_sg_dL::synapse0x40df550() {
   return (neuron0x40c2b60()*0.107113);
}

double NNfunction_sg_dL::synapse0x40df590() {
   return (neuron0x40c2ea0()*-0.00699898);
}

double NNfunction_sg_dL::synapse0x40df5d0() {
   return (neuron0x40c31e0()*-0.0102444);
}

double NNfunction_sg_dL::synapse0x40df610() {
   return (neuron0x40c3520()*0.00160168);
}

double NNfunction_sg_dL::synapse0x40df650() {
   return (neuron0x40c3860()*0.0472178);
}

double NNfunction_sg_dL::synapse0x40df9d0() {
   return (neuron0x40bed30()*-0.139155);
}

double NNfunction_sg_dL::synapse0x40dfa10() {
   return (neuron0x40befe0()*0.105638);
}

double NNfunction_sg_dL::synapse0x40dfa50() {
   return (neuron0x40bf320()*-0.100442);
}

double NNfunction_sg_dL::synapse0x40dfa90() {
   return (neuron0x40bf660()*-0.387909);
}

double NNfunction_sg_dL::synapse0x40dfad0() {
   return (neuron0x40bf9a0()*0.461236);
}

double NNfunction_sg_dL::synapse0x40dfb10() {
   return (neuron0x40bfce0()*0.0471522);
}

double NNfunction_sg_dL::synapse0x40dfb50() {
   return (neuron0x40c0020()*-0.0840751);
}

double NNfunction_sg_dL::synapse0x40dfb90() {
   return (neuron0x40c0360()*-0.322812);
}

double NNfunction_sg_dL::synapse0x40dfbd0() {
   return (neuron0x40c06a0()*0.0531883);
}

double NNfunction_sg_dL::synapse0x40dfc10() {
   return (neuron0x40c09e0()*0.109446);
}

double NNfunction_sg_dL::synapse0x40dfc50() {
   return (neuron0x40c0d20()*-0.158087);
}

double NNfunction_sg_dL::synapse0x40dfc90() {
   return (neuron0x40c1060()*0.259332);
}

double NNfunction_sg_dL::synapse0x40dfcd0() {
   return (neuron0x40c13a0()*0.111017);
}

double NNfunction_sg_dL::synapse0x40dfd10() {
   return (neuron0x40c16e0()*-0.0618727);
}

double NNfunction_sg_dL::synapse0x40dfd50() {
   return (neuron0x40c1a20()*0.38432);
}

double NNfunction_sg_dL::synapse0x40dfd90() {
   return (neuron0x40c1d60()*0.45411);
}

double NNfunction_sg_dL::synapse0x40df820() {
   return (neuron0x40c20a0()*0.133626);
}

double NNfunction_sg_dL::synapse0x40df860() {
   return (neuron0x40c2600()*0.332956);
}

double NNfunction_sg_dL::synapse0x40dfee0() {
   return (neuron0x40c2820()*-0.26205);
}

double NNfunction_sg_dL::synapse0x40dff20() {
   return (neuron0x40c2b60()*0.186725);
}

double NNfunction_sg_dL::synapse0x40dff60() {
   return (neuron0x40c2ea0()*-0.458097);
}

double NNfunction_sg_dL::synapse0x40dffa0() {
   return (neuron0x40c31e0()*0.130746);
}

double NNfunction_sg_dL::synapse0x40dffe0() {
   return (neuron0x40c3520()*0.0397922);
}

double NNfunction_sg_dL::synapse0x40e0020() {
   return (neuron0x40c3860()*-0.0908672);
}

double NNfunction_sg_dL::synapse0x40e03a0() {
   return (neuron0x40bed30()*-0.00565244);
}

double NNfunction_sg_dL::synapse0x40e03e0() {
   return (neuron0x40befe0()*-0.00772341);
}

double NNfunction_sg_dL::synapse0x40e0420() {
   return (neuron0x40bf320()*-0.0121807);
}

double NNfunction_sg_dL::synapse0x40e0460() {
   return (neuron0x40bf660()*15.4093);
}

double NNfunction_sg_dL::synapse0x40e04a0() {
   return (neuron0x40bf9a0()*0.00366143);
}

double NNfunction_sg_dL::synapse0x40e04e0() {
   return (neuron0x40bfce0()*0.00481081);
}

double NNfunction_sg_dL::synapse0x40e0520() {
   return (neuron0x40c0020()*0.00122458);
}

double NNfunction_sg_dL::synapse0x40e0560() {
   return (neuron0x40c0360()*0.00102466);
}

double NNfunction_sg_dL::synapse0x40e05a0() {
   return (neuron0x40c06a0()*0.000469825);
}

double NNfunction_sg_dL::synapse0x40e05e0() {
   return (neuron0x40c09e0()*-0.00280981);
}

double NNfunction_sg_dL::synapse0x40e0620() {
   return (neuron0x40c0d20()*0.00395615);
}

double NNfunction_sg_dL::synapse0x40e0660() {
   return (neuron0x40c1060()*-0.0217028);
}

double NNfunction_sg_dL::synapse0x40e06a0() {
   return (neuron0x40c13a0()*-0.00173079);
}

double NNfunction_sg_dL::synapse0x40e06e0() {
   return (neuron0x40c16e0()*0.0116752);
}

double NNfunction_sg_dL::synapse0x40e0720() {
   return (neuron0x40c1a20()*0.0103178);
}

double NNfunction_sg_dL::synapse0x40e0760() {
   return (neuron0x40c1d60()*-0.000122821);
}

double NNfunction_sg_dL::synapse0x40e01f0() {
   return (neuron0x40c20a0()*0.000992698);
}

double NNfunction_sg_dL::synapse0x40e0230() {
   return (neuron0x40c2600()*0.00427018);
}

double NNfunction_sg_dL::synapse0x40e08b0() {
   return (neuron0x40c2820()*-0.00632968);
}

double NNfunction_sg_dL::synapse0x40e08f0() {
   return (neuron0x40c2b60()*0.0105796);
}

double NNfunction_sg_dL::synapse0x40e0930() {
   return (neuron0x40c2ea0()*-0.00594978);
}

double NNfunction_sg_dL::synapse0x40e0970() {
   return (neuron0x40c31e0()*-0.00164);
}

double NNfunction_sg_dL::synapse0x40e09b0() {
   return (neuron0x40c3520()*-0.00210174);
}

double NNfunction_sg_dL::synapse0x40e09f0() {
   return (neuron0x40c3860()*0.00140113);
}

double NNfunction_sg_dL::synapse0x40e0d70() {
   return (neuron0x40bed30()*0.472567);
}

double NNfunction_sg_dL::synapse0x40e0db0() {
   return (neuron0x40befe0()*-0.171436);
}

double NNfunction_sg_dL::synapse0x40e0df0() {
   return (neuron0x40bf320()*-0.407025);
}

double NNfunction_sg_dL::synapse0x40e0e30() {
   return (neuron0x40bf660()*0.217869);
}

double NNfunction_sg_dL::synapse0x40e0e70() {
   return (neuron0x40bf9a0()*0.198012);
}

double NNfunction_sg_dL::synapse0x40e0eb0() {
   return (neuron0x40bfce0()*0.283625);
}

double NNfunction_sg_dL::synapse0x40e0ef0() {
   return (neuron0x40c0020()*-0.177489);
}

double NNfunction_sg_dL::synapse0x40e0f30() {
   return (neuron0x40c0360()*0.0964563);
}

double NNfunction_sg_dL::synapse0x40e0f70() {
   return (neuron0x40c06a0()*0.0523553);
}

double NNfunction_sg_dL::synapse0x40e0fb0() {
   return (neuron0x40c09e0()*0.0928366);
}

double NNfunction_sg_dL::synapse0x40e0ff0() {
   return (neuron0x40c0d20()*0.363611);
}

double NNfunction_sg_dL::synapse0x40e1030() {
   return (neuron0x40c1060()*1.19193);
}

double NNfunction_sg_dL::synapse0x40e1070() {
   return (neuron0x40c13a0()*0.00677478);
}

double NNfunction_sg_dL::synapse0x40e10b0() {
   return (neuron0x40c16e0()*0.471759);
}

double NNfunction_sg_dL::synapse0x40e10f0() {
   return (neuron0x40c1a20()*0.329389);
}

double NNfunction_sg_dL::synapse0x40e1130() {
   return (neuron0x40c1d60()*0.258471);
}

double NNfunction_sg_dL::synapse0x40e0bc0() {
   return (neuron0x40c20a0()*-0.026815);
}

double NNfunction_sg_dL::synapse0x40e0c00() {
   return (neuron0x40c2600()*0.201818);
}

double NNfunction_sg_dL::synapse0x40e1280() {
   return (neuron0x40c2820()*-0.16106);
}

double NNfunction_sg_dL::synapse0x40e12c0() {
   return (neuron0x40c2b60()*-0.248818);
}

double NNfunction_sg_dL::synapse0x40e1300() {
   return (neuron0x40c2ea0()*-0.0651035);
}

double NNfunction_sg_dL::synapse0x40e1340() {
   return (neuron0x40c31e0()*-0.62895);
}

double NNfunction_sg_dL::synapse0x40e1380() {
   return (neuron0x40c3520()*-0.0183477);
}

double NNfunction_sg_dL::synapse0x40e13c0() {
   return (neuron0x40c3860()*0.550912);
}

double NNfunction_sg_dL::synapse0x40c9e70() {
   return (neuron0x40bed30()*-0.0873861);
}

double NNfunction_sg_dL::synapse0x40c9eb0() {
   return (neuron0x40befe0()*0.233836);
}

double NNfunction_sg_dL::synapse0x40c9ef0() {
   return (neuron0x40bf320()*-0.386971);
}

double NNfunction_sg_dL::synapse0x40c9f30() {
   return (neuron0x40bf660()*0.245946);
}

double NNfunction_sg_dL::synapse0x40c9f70() {
   return (neuron0x40bf9a0()*-0.0531842);
}

double NNfunction_sg_dL::synapse0x40c9fb0() {
   return (neuron0x40bfce0()*-0.13528);
}

double NNfunction_sg_dL::synapse0x40c9ff0() {
   return (neuron0x40c0020()*0.695091);
}

double NNfunction_sg_dL::synapse0x40ca030() {
   return (neuron0x40c0360()*0.228936);
}

double NNfunction_sg_dL::synapse0x40e1b50() {
   return (neuron0x40c06a0()*0.605491);
}

double NNfunction_sg_dL::synapse0x40e1b90() {
   return (neuron0x40c09e0()*0.349835);
}

double NNfunction_sg_dL::synapse0x40e1bd0() {
   return (neuron0x40c0d20()*0.318055);
}

double NNfunction_sg_dL::synapse0x40e1c10() {
   return (neuron0x40c1060()*0.0619689);
}

double NNfunction_sg_dL::synapse0x40e1c50() {
   return (neuron0x40c13a0()*0.130571);
}

double NNfunction_sg_dL::synapse0x40e1c90() {
   return (neuron0x40c16e0()*0.398896);
}

double NNfunction_sg_dL::synapse0x40e1cd0() {
   return (neuron0x40c1a20()*0.0220245);
}

double NNfunction_sg_dL::synapse0x40e1d10() {
   return (neuron0x40c1d60()*-0.166439);
}

double NNfunction_sg_dL::synapse0x40e1590() {
   return (neuron0x40c20a0()*0.66815);
}

double NNfunction_sg_dL::synapse0x40e15d0() {
   return (neuron0x40c2600()*0.0889426);
}

double NNfunction_sg_dL::synapse0x40e1e60() {
   return (neuron0x40c2820()*0.58592);
}

double NNfunction_sg_dL::synapse0x40e1ea0() {
   return (neuron0x40c2b60()*0.0690868);
}

double NNfunction_sg_dL::synapse0x40e1ee0() {
   return (neuron0x40c2ea0()*-0.140463);
}

double NNfunction_sg_dL::synapse0x40e1f20() {
   return (neuron0x40c31e0()*-0.542059);
}

double NNfunction_sg_dL::synapse0x40e1f60() {
   return (neuron0x40c3520()*-0.314829);
}

double NNfunction_sg_dL::synapse0x40e1fa0() {
   return (neuron0x40c3860()*0.602806);
}

double NNfunction_sg_dL::synapse0x40e2320() {
   return (neuron0x40bed30()*0.0160672);
}

double NNfunction_sg_dL::synapse0x40e2360() {
   return (neuron0x40befe0()*0.0760456);
}

double NNfunction_sg_dL::synapse0x40e23a0() {
   return (neuron0x40bf320()*0.0314633);
}

double NNfunction_sg_dL::synapse0x40e23e0() {
   return (neuron0x40bf660()*-0.302637);
}

double NNfunction_sg_dL::synapse0x40e2420() {
   return (neuron0x40bf9a0()*-0.0114738);
}

double NNfunction_sg_dL::synapse0x40e2460() {
   return (neuron0x40bfce0()*0.0108163);
}

double NNfunction_sg_dL::synapse0x40e24a0() {
   return (neuron0x40c0020()*0.0564304);
}

double NNfunction_sg_dL::synapse0x40e24e0() {
   return (neuron0x40c0360()*0.150692);
}

double NNfunction_sg_dL::synapse0x40e2520() {
   return (neuron0x40c06a0()*0.0357057);
}

double NNfunction_sg_dL::synapse0x40e2560() {
   return (neuron0x40c09e0()*0.0403502);
}

double NNfunction_sg_dL::synapse0x40e25a0() {
   return (neuron0x40c0d20()*0.0480506);
}

double NNfunction_sg_dL::synapse0x40e25e0() {
   return (neuron0x40c1060()*-0.816035);
}

double NNfunction_sg_dL::synapse0x40e2620() {
   return (neuron0x40c13a0()*0.104525);
}

double NNfunction_sg_dL::synapse0x40e2660() {
   return (neuron0x40c16e0()*0.285348);
}

double NNfunction_sg_dL::synapse0x40e26a0() {
   return (neuron0x40c1a20()*-0.428923);
}

double NNfunction_sg_dL::synapse0x40e26e0() {
   return (neuron0x40c1d60()*-0.46079);
}

double NNfunction_sg_dL::synapse0x40e2170() {
   return (neuron0x40c20a0()*0.239211);
}

double NNfunction_sg_dL::synapse0x40e21b0() {
   return (neuron0x40c2600()*-0.177294);
}

double NNfunction_sg_dL::synapse0x40e2830() {
   return (neuron0x40c2820()*-0.068851);
}

double NNfunction_sg_dL::synapse0x40e2870() {
   return (neuron0x40c2b60()*0.126293);
}

double NNfunction_sg_dL::synapse0x40e28b0() {
   return (neuron0x40c2ea0()*-0.159072);
}

double NNfunction_sg_dL::synapse0x40e28f0() {
   return (neuron0x40c31e0()*0.0107217);
}

double NNfunction_sg_dL::synapse0x40e2930() {
   return (neuron0x40c3520()*0.0113411);
}

double NNfunction_sg_dL::synapse0x40e2970() {
   return (neuron0x40c3860()*-0.02878);
}

double NNfunction_sg_dL::synapse0x40e2cf0() {
   return (neuron0x40bed30()*0.130832);
}

double NNfunction_sg_dL::synapse0x40e2d30() {
   return (neuron0x40befe0()*-0.104787);
}

double NNfunction_sg_dL::synapse0x40e2d70() {
   return (neuron0x40bf320()*-0.349914);
}

double NNfunction_sg_dL::synapse0x40e2db0() {
   return (neuron0x40bf660()*-0.233271);
}

double NNfunction_sg_dL::synapse0x40e2df0() {
   return (neuron0x40bf9a0()*0.128564);
}

double NNfunction_sg_dL::synapse0x40e2e30() {
   return (neuron0x40bfce0()*-0.109961);
}

double NNfunction_sg_dL::synapse0x40e2e70() {
   return (neuron0x40c0020()*-0.0944756);
}

double NNfunction_sg_dL::synapse0x40e2eb0() {
   return (neuron0x40c0360()*-0.221467);
}

double NNfunction_sg_dL::synapse0x40e2ef0() {
   return (neuron0x40c06a0()*-0.120165);
}

double NNfunction_sg_dL::synapse0x40e2f30() {
   return (neuron0x40c09e0()*-0.0961291);
}

double NNfunction_sg_dL::synapse0x40e2f70() {
   return (neuron0x40c0d20()*-0.0560107);
}

double NNfunction_sg_dL::synapse0x40e2fb0() {
   return (neuron0x40c1060()*-0.738799);
}

double NNfunction_sg_dL::synapse0x40e2ff0() {
   return (neuron0x40c13a0()*-0.716006);
}

double NNfunction_sg_dL::synapse0x40e3030() {
   return (neuron0x40c16e0()*-0.0464864);
}

double NNfunction_sg_dL::synapse0x40e3070() {
   return (neuron0x40c1a20()*-0.46518);
}

double NNfunction_sg_dL::synapse0x40e30b0() {
   return (neuron0x40c1d60()*-0.457803);
}

double NNfunction_sg_dL::synapse0x40e2b40() {
   return (neuron0x40c20a0()*0.0533958);
}

double NNfunction_sg_dL::synapse0x40e2b80() {
   return (neuron0x40c2600()*-0.332608);
}

double NNfunction_sg_dL::synapse0x40d36b0() {
   return (neuron0x40c2820()*-0.454882);
}

double NNfunction_sg_dL::synapse0x40d36f0() {
   return (neuron0x40c2b60()*-0.0321372);
}

double NNfunction_sg_dL::synapse0x40d3730() {
   return (neuron0x40c2ea0()*0.109082);
}

double NNfunction_sg_dL::synapse0x40d3770() {
   return (neuron0x40c31e0()*-0.0556035);
}

double NNfunction_sg_dL::synapse0x40d37b0() {
   return (neuron0x40c3520()*-0.00559307);
}

double NNfunction_sg_dL::synapse0x40d37f0() {
   return (neuron0x40c3860()*-0.103074);
}

double NNfunction_sg_dL::synapse0x40d3b70() {
   return (neuron0x40bed30()*0.0373029);
}

double NNfunction_sg_dL::synapse0x40d3bb0() {
   return (neuron0x40befe0()*-0.134146);
}

double NNfunction_sg_dL::synapse0x40d3bf0() {
   return (neuron0x40bf320()*-0.00896138);
}

double NNfunction_sg_dL::synapse0x40d3c30() {
   return (neuron0x40bf660()*0.767832);
}

double NNfunction_sg_dL::synapse0x40d3c70() {
   return (neuron0x40bf9a0()*-0.0703748);
}

double NNfunction_sg_dL::synapse0x40d3cb0() {
   return (neuron0x40bfce0()*-0.107623);
}

double NNfunction_sg_dL::synapse0x40d3cf0() {
   return (neuron0x40c0020()*-0.0483849);
}

double NNfunction_sg_dL::synapse0x40d3d30() {
   return (neuron0x40c0360()*-0.0699492);
}

double NNfunction_sg_dL::synapse0x40d3d70() {
   return (neuron0x40c06a0()*0.0432068);
}

double NNfunction_sg_dL::synapse0x40d3db0() {
   return (neuron0x40c09e0()*-0.0426856);
}

double NNfunction_sg_dL::synapse0x40d3df0() {
   return (neuron0x40c0d20()*0.0264628);
}

double NNfunction_sg_dL::synapse0x40d3e30() {
   return (neuron0x40c1060()*-0.385889);
}

double NNfunction_sg_dL::synapse0x40d3e70() {
   return (neuron0x40c13a0()*-0.25137);
}

double NNfunction_sg_dL::synapse0x40d3eb0() {
   return (neuron0x40c16e0()*0.0356536);
}

double NNfunction_sg_dL::synapse0x40d3ef0() {
   return (neuron0x40c1a20()*-0.244621);
}

double NNfunction_sg_dL::synapse0x40d3f30() {
   return (neuron0x40c1d60()*-0.0255623);
}

double NNfunction_sg_dL::synapse0x40d39c0() {
   return (neuron0x40c20a0()*-0.0620072);
}

double NNfunction_sg_dL::synapse0x40d3a00() {
   return (neuron0x40c2600()*0.161794);
}

double NNfunction_sg_dL::synapse0x40d4080() {
   return (neuron0x40c2820()*0.210001);
}

double NNfunction_sg_dL::synapse0x40d40c0() {
   return (neuron0x40c2b60()*0.0445195);
}

double NNfunction_sg_dL::synapse0x40d4100() {
   return (neuron0x40c2ea0()*-0.0255388);
}

double NNfunction_sg_dL::synapse0x40d4140() {
   return (neuron0x40c31e0()*0.0612767);
}

double NNfunction_sg_dL::synapse0x40d4180() {
   return (neuron0x40c3520()*-0.00951311);
}

double NNfunction_sg_dL::synapse0x40d41c0() {
   return (neuron0x40c3860()*-0.0324849);
}

double NNfunction_sg_dL::synapse0x40d4540() {
   return (neuron0x40bed30()*-0.00629781);
}

double NNfunction_sg_dL::synapse0x40d4580() {
   return (neuron0x40befe0()*-0.0162192);
}

double NNfunction_sg_dL::synapse0x40d45c0() {
   return (neuron0x40bf320()*-0.110774);
}

double NNfunction_sg_dL::synapse0x40d4600() {
   return (neuron0x40bf660()*-1.65419);
}

double NNfunction_sg_dL::synapse0x40d4640() {
   return (neuron0x40bf9a0()*-0.0074519);
}

double NNfunction_sg_dL::synapse0x40d4680() {
   return (neuron0x40bfce0()*-0.0317571);
}

double NNfunction_sg_dL::synapse0x40d46c0() {
   return (neuron0x40c0020()*-0.0245494);
}

double NNfunction_sg_dL::synapse0x40d4700() {
   return (neuron0x40c0360()*-0.0130185);
}

double NNfunction_sg_dL::synapse0x40d4740() {
   return (neuron0x40c06a0()*0.0152358);
}

double NNfunction_sg_dL::synapse0x40d4780() {
   return (neuron0x40c09e0()*0.00352834);
}

double NNfunction_sg_dL::synapse0x40d47c0() {
   return (neuron0x40c0d20()*0.0183706);
}

double NNfunction_sg_dL::synapse0x40d4800() {
   return (neuron0x40c1060()*1.59556);
}

double NNfunction_sg_dL::synapse0x40d4840() {
   return (neuron0x40c13a0()*-0.108961);
}

double NNfunction_sg_dL::synapse0x40d4880() {
   return (neuron0x40c16e0()*0.0763769);
}

double NNfunction_sg_dL::synapse0x40d48c0() {
   return (neuron0x40c1a20()*-0.0978199);
}

double NNfunction_sg_dL::synapse0x40d4900() {
   return (neuron0x40c1d60()*-0.0604643);
}

double NNfunction_sg_dL::synapse0x40d4390() {
   return (neuron0x40c20a0()*0.0268643);
}

double NNfunction_sg_dL::synapse0x40d43d0() {
   return (neuron0x40c2600()*-0.0827212);
}

double NNfunction_sg_dL::synapse0x40d4a50() {
   return (neuron0x40c2820()*-0.0521393);
}

double NNfunction_sg_dL::synapse0x40d4a90() {
   return (neuron0x40c2b60()*0.0097772);
}

double NNfunction_sg_dL::synapse0x40d4ad0() {
   return (neuron0x40c2ea0()*0.0286133);
}

double NNfunction_sg_dL::synapse0x40d4b10() {
   return (neuron0x40c31e0()*0.0317655);
}

double NNfunction_sg_dL::synapse0x40d4b50() {
   return (neuron0x40c3520()*-0.00300088);
}

double NNfunction_sg_dL::synapse0x40d4b90() {
   return (neuron0x40c3860()*0.0045095);
}

double NNfunction_sg_dL::synapse0x40d4f10() {
   return (neuron0x40bed30()*0.252179);
}

double NNfunction_sg_dL::synapse0x40d4f50() {
   return (neuron0x40befe0()*0.314031);
}

double NNfunction_sg_dL::synapse0x40d4f90() {
   return (neuron0x40bf320()*-0.0125188);
}

double NNfunction_sg_dL::synapse0x40d4fd0() {
   return (neuron0x40bf660()*-0.311662);
}

double NNfunction_sg_dL::synapse0x40d5010() {
   return (neuron0x40bf9a0()*0.126105);
}

double NNfunction_sg_dL::synapse0x40d5050() {
   return (neuron0x40bfce0()*0.392127);
}

double NNfunction_sg_dL::synapse0x40d5090() {
   return (neuron0x40c0020()*0.106423);
}

double NNfunction_sg_dL::synapse0x40d50d0() {
   return (neuron0x40c0360()*0.440303);
}

double NNfunction_sg_dL::synapse0x40d5110() {
   return (neuron0x40c06a0()*0.238354);
}

double NNfunction_sg_dL::synapse0x40d5150() {
   return (neuron0x40c09e0()*0.341231);
}

double NNfunction_sg_dL::synapse0x40d5190() {
   return (neuron0x40c0d20()*-0.276818);
}

double NNfunction_sg_dL::synapse0x40d51d0() {
   return (neuron0x40c1060()*-0.100119);
}

double NNfunction_sg_dL::synapse0x40d5210() {
   return (neuron0x40c13a0()*-0.353473);
}

double NNfunction_sg_dL::synapse0x40d5250() {
   return (neuron0x40c16e0()*0.200147);
}

double NNfunction_sg_dL::synapse0x40d5290() {
   return (neuron0x40c1a20()*-0.174391);
}

double NNfunction_sg_dL::synapse0x40d52d0() {
   return (neuron0x40c1d60()*-0.258713);
}

double NNfunction_sg_dL::synapse0x40d4d60() {
   return (neuron0x40c20a0()*-0.0845585);
}

double NNfunction_sg_dL::synapse0x40d4da0() {
   return (neuron0x40c2600()*0.148769);
}

double NNfunction_sg_dL::synapse0x40d5420() {
   return (neuron0x40c2820()*-0.465549);
}

double NNfunction_sg_dL::synapse0x40d5460() {
   return (neuron0x40c2b60()*0.0955817);
}

double NNfunction_sg_dL::synapse0x40d54a0() {
   return (neuron0x40c2ea0()*-0.168689);
}

double NNfunction_sg_dL::synapse0x40d54e0() {
   return (neuron0x40c31e0()*0.0204887);
}

double NNfunction_sg_dL::synapse0x40d5520() {
   return (neuron0x40c3520()*0.10799);
}

double NNfunction_sg_dL::synapse0x40d5560() {
   return (neuron0x40c3860()*-0.0923728);
}

double NNfunction_sg_dL::synapse0x40e7430() {
   return (neuron0x40bed30()*0.00500276);
}

double NNfunction_sg_dL::synapse0x40e7470() {
   return (neuron0x40befe0()*0.00501337);
}

double NNfunction_sg_dL::synapse0x40e74b0() {
   return (neuron0x40bf320()*0.0021161);
}

double NNfunction_sg_dL::synapse0x40e74f0() {
   return (neuron0x40bf660()*-12.1817);
}

double NNfunction_sg_dL::synapse0x40e7530() {
   return (neuron0x40bf9a0()*-0.00317344);
}

double NNfunction_sg_dL::synapse0x40e7570() {
   return (neuron0x40bfce0()*-0.00515509);
}

double NNfunction_sg_dL::synapse0x40e75b0() {
   return (neuron0x40c0020()*0.00109506);
}

double NNfunction_sg_dL::synapse0x40e75f0() {
   return (neuron0x40c0360()*-0.0013957);
}

double NNfunction_sg_dL::synapse0x40e7630() {
   return (neuron0x40c06a0()*-6.57009e-05);
}

double NNfunction_sg_dL::synapse0x40e7670() {
   return (neuron0x40c09e0()*0.00539777);
}

double NNfunction_sg_dL::synapse0x40e76b0() {
   return (neuron0x40c0d20()*-0.000318739);
}

double NNfunction_sg_dL::synapse0x40e76f0() {
   return (neuron0x40c1060()*0.119405);
}

double NNfunction_sg_dL::synapse0x40e7730() {
   return (neuron0x40c13a0()*-2.77929e-05);
}

double NNfunction_sg_dL::synapse0x40e7770() {
   return (neuron0x40c16e0()*-0.0049027);
}

double NNfunction_sg_dL::synapse0x40e77b0() {
   return (neuron0x40c1a20()*-0.00924312);
}

double NNfunction_sg_dL::synapse0x40e77f0() {
   return (neuron0x40c1d60()*0.00113851);
}

double NNfunction_sg_dL::synapse0x40d55a0() {
   return (neuron0x40c20a0()*-0.000119669);
}

double NNfunction_sg_dL::synapse0x40d55e0() {
   return (neuron0x40c2600()*-0.00910535);
}

double NNfunction_sg_dL::synapse0x40e7940() {
   return (neuron0x40c2820()*0.00505518);
}

double NNfunction_sg_dL::synapse0x40e7980() {
   return (neuron0x40c2b60()*-0.00766273);
}

double NNfunction_sg_dL::synapse0x40e79c0() {
   return (neuron0x40c2ea0()*0.00617522);
}

double NNfunction_sg_dL::synapse0x40e7a00() {
   return (neuron0x40c31e0()*0.0066798);
}

double NNfunction_sg_dL::synapse0x40e7a40() {
   return (neuron0x40c3520()*0.000977054);
}

double NNfunction_sg_dL::synapse0x40e7a80() {
   return (neuron0x40c3860()*0.00222146);
}

double NNfunction_sg_dL::synapse0x40e7e00() {
   return (neuron0x40bed30()*-0.00435092);
}

double NNfunction_sg_dL::synapse0x40e7e40() {
   return (neuron0x40befe0()*0.00857401);
}

double NNfunction_sg_dL::synapse0x40e7e80() {
   return (neuron0x40bf320()*0.0115076);
}

double NNfunction_sg_dL::synapse0x40e7ec0() {
   return (neuron0x40bf660()*-1.93706);
}

double NNfunction_sg_dL::synapse0x40e7f00() {
   return (neuron0x40bf9a0()*0.0100607);
}

double NNfunction_sg_dL::synapse0x40e7f40() {
   return (neuron0x40bfce0()*0.0276425);
}

double NNfunction_sg_dL::synapse0x40e7f80() {
   return (neuron0x40c0020()*0.0127189);
}

double NNfunction_sg_dL::synapse0x40e7fc0() {
   return (neuron0x40c0360()*0.013905);
}

double NNfunction_sg_dL::synapse0x40e8000() {
   return (neuron0x40c06a0()*0.0107644);
}

double NNfunction_sg_dL::synapse0x40e8040() {
   return (neuron0x40c09e0()*-0.00898244);
}

double NNfunction_sg_dL::synapse0x40e8080() {
   return (neuron0x40c0d20()*0.00981279);
}

double NNfunction_sg_dL::synapse0x40e80c0() {
   return (neuron0x40c1060()*-1.0797);
}

double NNfunction_sg_dL::synapse0x40e8100() {
   return (neuron0x40c13a0()*0.0102602);
}

double NNfunction_sg_dL::synapse0x40e8140() {
   return (neuron0x40c16e0()*-0.0158355);
}

double NNfunction_sg_dL::synapse0x40e8180() {
   return (neuron0x40c1a20()*-0.00911403);
}

double NNfunction_sg_dL::synapse0x40e81c0() {
   return (neuron0x40c1d60()*-0.00615578);
}

double NNfunction_sg_dL::synapse0x40e7c50() {
   return (neuron0x40c20a0()*-0.0147817);
}

double NNfunction_sg_dL::synapse0x40e7c90() {
   return (neuron0x40c2600()*-0.0207306);
}

double NNfunction_sg_dL::synapse0x40e8310() {
   return (neuron0x40c2820()*-0.000907155);
}

double NNfunction_sg_dL::synapse0x40e8350() {
   return (neuron0x40c2b60()*-0.00513032);
}

double NNfunction_sg_dL::synapse0x40e8390() {
   return (neuron0x40c2ea0()*0.0165635);
}

double NNfunction_sg_dL::synapse0x40e83d0() {
   return (neuron0x40c31e0()*-0.00138355);
}

double NNfunction_sg_dL::synapse0x40e8410() {
   return (neuron0x40c3520()*-0.00426524);
}

double NNfunction_sg_dL::synapse0x40e8450() {
   return (neuron0x40c3860()*0.00836583);
}

double NNfunction_sg_dL::synapse0x40e87d0() {
   return (neuron0x40bed30()*0.0414241);
}

double NNfunction_sg_dL::synapse0x40e8810() {
   return (neuron0x40befe0()*-0.0237658);
}

double NNfunction_sg_dL::synapse0x40e8850() {
   return (neuron0x40bf320()*-0.104435);
}

double NNfunction_sg_dL::synapse0x40e8890() {
   return (neuron0x40bf660()*-0.9206);
}

double NNfunction_sg_dL::synapse0x40e88d0() {
   return (neuron0x40bf9a0()*-0.0208696);
}

double NNfunction_sg_dL::synapse0x40e8910() {
   return (neuron0x40bfce0()*-0.287215);
}

double NNfunction_sg_dL::synapse0x40e8950() {
   return (neuron0x40c0020()*-0.0695963);
}

double NNfunction_sg_dL::synapse0x40e8990() {
   return (neuron0x40c0360()*-0.026675);
}

double NNfunction_sg_dL::synapse0x40e89d0() {
   return (neuron0x40c06a0()*-0.0155077);
}

double NNfunction_sg_dL::synapse0x40e8a10() {
   return (neuron0x40c09e0()*-0.0969322);
}

double NNfunction_sg_dL::synapse0x40e8a50() {
   return (neuron0x40c0d20()*-0.0556076);
}

double NNfunction_sg_dL::synapse0x40e8a90() {
   return (neuron0x40c1060()*0.114821);
}

double NNfunction_sg_dL::synapse0x40e8ad0() {
   return (neuron0x40c13a0()*0.605081);
}

double NNfunction_sg_dL::synapse0x40e8b10() {
   return (neuron0x40c16e0()*-0.0653507);
}

double NNfunction_sg_dL::synapse0x40e8b50() {
   return (neuron0x40c1a20()*-0.0646034);
}

double NNfunction_sg_dL::synapse0x40e8b90() {
   return (neuron0x40c1d60()*0.0911887);
}

double NNfunction_sg_dL::synapse0x40e8620() {
   return (neuron0x40c20a0()*0.126711);
}

double NNfunction_sg_dL::synapse0x40e8660() {
   return (neuron0x40c2600()*0.208096);
}

double NNfunction_sg_dL::synapse0x40e8ce0() {
   return (neuron0x40c2820()*0.0407885);
}

double NNfunction_sg_dL::synapse0x40e8d20() {
   return (neuron0x40c2b60()*-0.0115443);
}

double NNfunction_sg_dL::synapse0x40e8d60() {
   return (neuron0x40c2ea0()*0.0290613);
}

double NNfunction_sg_dL::synapse0x40e8da0() {
   return (neuron0x40c31e0()*-0.0127504);
}

double NNfunction_sg_dL::synapse0x40e8de0() {
   return (neuron0x40c3520()*-0.0115574);
}

double NNfunction_sg_dL::synapse0x40e8e20() {
   return (neuron0x40c3860()*-0.056473);
}

double NNfunction_sg_dL::synapse0x40e91a0() {
   return (neuron0x40bed30()*-0.000244113);
}

double NNfunction_sg_dL::synapse0x40e91e0() {
   return (neuron0x40befe0()*-0.0036175);
}

double NNfunction_sg_dL::synapse0x40e9220() {
   return (neuron0x40bf320()*0.0282748);
}

double NNfunction_sg_dL::synapse0x40e9260() {
   return (neuron0x40bf660()*3.74646);
}

double NNfunction_sg_dL::synapse0x40e92a0() {
   return (neuron0x40bf9a0()*-0.0011807);
}

double NNfunction_sg_dL::synapse0x40e92e0() {
   return (neuron0x40bfce0()*0.00642914);
}

double NNfunction_sg_dL::synapse0x40e9320() {
   return (neuron0x40c0020()*-0.000559473);
}

double NNfunction_sg_dL::synapse0x40e9360() {
   return (neuron0x40c0360()*-0.00720647);
}

double NNfunction_sg_dL::synapse0x40e93a0() {
   return (neuron0x40c06a0()*-0.00525266);
}

double NNfunction_sg_dL::synapse0x40e93e0() {
   return (neuron0x40c09e0()*0.00168652);
}

double NNfunction_sg_dL::synapse0x40e9420() {
   return (neuron0x40c0d20()*0.00135532);
}

double NNfunction_sg_dL::synapse0x40e9460() {
   return (neuron0x40c1060()*-0.150783);
}

double NNfunction_sg_dL::synapse0x40e94a0() {
   return (neuron0x40c13a0()*-0.0100301);
}

double NNfunction_sg_dL::synapse0x40e94e0() {
   return (neuron0x40c16e0()*0.00613525);
}

double NNfunction_sg_dL::synapse0x40e9520() {
   return (neuron0x40c1a20()*0.00284587);
}

double NNfunction_sg_dL::synapse0x40e9560() {
   return (neuron0x40c1d60()*-0.0101125);
}

double NNfunction_sg_dL::synapse0x40e8ff0() {
   return (neuron0x40c20a0()*0.00656065);
}

double NNfunction_sg_dL::synapse0x40e9030() {
   return (neuron0x40c2600()*0.00558008);
}

double NNfunction_sg_dL::synapse0x40e96b0() {
   return (neuron0x40c2820()*0.0029373);
}

double NNfunction_sg_dL::synapse0x40e96f0() {
   return (neuron0x40c2b60()*-0.00399465);
}

double NNfunction_sg_dL::synapse0x40e9730() {
   return (neuron0x40c2ea0()*-0.00679269);
}

double NNfunction_sg_dL::synapse0x40e9770() {
   return (neuron0x40c31e0()*0.00134712);
}

double NNfunction_sg_dL::synapse0x40e97b0() {
   return (neuron0x40c3520()*-0.000149708);
}

double NNfunction_sg_dL::synapse0x40e97f0() {
   return (neuron0x40c3860()*0.00473992);
}

double NNfunction_sg_dL::synapse0x3e89620() {
   return (neuron0x40c3cd0()*-0.142227);
}

double NNfunction_sg_dL::synapse0x3e89660() {
   return (neuron0x40c4620()*0.131811);
}

double NNfunction_sg_dL::synapse0x40c6190() {
   return (neuron0x40c5100()*0.312381);
}

double NNfunction_sg_dL::synapse0x40c61d0() {
   return (neuron0x40c4ba0()*-0.0071388);
}

double NNfunction_sg_dL::synapse0x40c7c70() {
   return (neuron0x40c5ee0()*-0.0322153);
}

double NNfunction_sg_dL::synapse0x40c7cb0() {
   return (neuron0x40c79c0()*0.0905941);
}

double NNfunction_sg_dL::synapse0x40c8a40() {
   return (neuron0x40c8790()*-0.0236719);
}

double NNfunction_sg_dL::synapse0x40c8a80() {
   return (neuron0x40c9160()*-0.223984);
}

double NNfunction_sg_dL::synapse0x40c9410() {
   return (neuron0x40c9b30()*-0.121524);
}

double NNfunction_sg_dL::synapse0x40c9450() {
   return (neuron0x40ca610()*-0.0487667);
}

double NNfunction_sg_dL::synapse0x40c9de0() {
   return (neuron0x40cafe0()*0.0115756);
}

double NNfunction_sg_dL::synapse0x40c9e20() {
   return (neuron0x40c80c0()*0.0273418);
}

double NNfunction_sg_dL::synapse0x40ca8c0() {
   return (neuron0x40ccb90()*0.0098151);
}

double NNfunction_sg_dL::synapse0x40ca900() {
   return (neuron0x40cd560()*-0.228471);
}

double NNfunction_sg_dL::synapse0x40cb290() {
   return (neuron0x40cdf30()*-0.370602);
}

double NNfunction_sg_dL::synapse0x40cb2d0() {
   return (neuron0x40ce900()*0.686684);
}

double NNfunction_sg_dL::synapse0x40c8370() {
   return (neuron0x40d0710()*-1.34589);
}

double NNfunction_sg_dL::synapse0x40c83b0() {
   return (neuron0x40d09f0()*-0.306677);
}

double NNfunction_sg_dL::synapse0x40cce40() {
   return (neuron0x40d13c0()*0.418989);
}

double NNfunction_sg_dL::synapse0x40cce80() {
   return (neuron0x40d1d90()*-0.0044514);
}

double NNfunction_sg_dL::synapse0x40cd810() {
   return (neuron0x40d2760()*-0.450778);
}

double NNfunction_sg_dL::synapse0x40cd850() {
   return (neuron0x40d3130()*-0.566374);
}

double NNfunction_sg_dL::synapse0x40ce1e0() {
   return (neuron0x40cbc80()*-0.566092);
}

double NNfunction_sg_dL::synapse0x40ce220() {
   return (neuron0x40cc650()*0.913517);
}

double NNfunction_sg_dL::synapse0x40cebb0() {
   return (neuron0x40d5ec0()*-0.247201);
}

double NNfunction_sg_dL::synapse0x40cebf0() {
   return (neuron0x40d6890()*0.148406);
}

double NNfunction_sg_dL::synapse0x40c1c40() {
   return (neuron0x40d7260()*-0.00753071);
}

double NNfunction_sg_dL::synapse0x40c1c80() {
   return (neuron0x40d7c30()*0.00598562);
}

double NNfunction_sg_dL::synapse0x40d0ca0() {
   return (neuron0x40d8600()*0.973879);
}

double NNfunction_sg_dL::synapse0x40d0ce0() {
   return (neuron0x40d8fd0()*0.0170686);
}

double NNfunction_sg_dL::synapse0x40d1670() {
   return (neuron0x40d99a0()*-0.077535);
}

double NNfunction_sg_dL::synapse0x40d16b0() {
   return (neuron0x40da370()*-0.0556097);
}

double NNfunction_sg_dL::synapse0x40d2040() {
   return (neuron0x40d0400()*-2.64918);
}

double NNfunction_sg_dL::synapse0x40d2080() {
   return (neuron0x40dcf50()*-0.763878);
}

double NNfunction_sg_dL::synapse0x40d2a10() {
   return (neuron0x40dd920()*0.0115531);
}

double NNfunction_sg_dL::synapse0x40d2a50() {
   return (neuron0x40de2f0()*-0.517858);
}

double NNfunction_sg_dL::synapse0x40d33e0() {
   return (neuron0x40decc0()*0.0574419);
}

double NNfunction_sg_dL::synapse0x40d3420() {
   return (neuron0x40df690()*0.0185875);
}

double NNfunction_sg_dL::synapse0x40cbf30() {
   return (neuron0x40e0060()*0.036888);
}

double NNfunction_sg_dL::synapse0x40cbf70() {
   return (neuron0x40e0a30()*-0.0183549);
}

double NNfunction_sg_dL::synapse0x40d57e0() {
   return (neuron0x40e1400()*-0.000452951);
}

double NNfunction_sg_dL::synapse0x40d5820() {
   return (neuron0x40e1fe0()*-0.0444702);
}

double NNfunction_sg_dL::synapse0x40d6170() {
   return (neuron0x40e29b0()*-0.00311772);
}

double NNfunction_sg_dL::synapse0x40d61b0() {
   return (neuron0x40d3830()*-0.226297);
}

double NNfunction_sg_dL::synapse0x40d6b40() {
   return (neuron0x40d4200()*0.38135);
}

double NNfunction_sg_dL::synapse0x40d6b80() {
   return (neuron0x40d4bd0()*0.0205541);
}

double NNfunction_sg_dL::synapse0x40d7510() {
   return (neuron0x40e7210()*2.35255);
}

double NNfunction_sg_dL::synapse0x40d7550() {
   return (neuron0x40e7ac0()*-1.6173);
}

double NNfunction_sg_dL::synapse0x40d7ee0() {
   return (neuron0x40e8490()*0.224157);
}

double NNfunction_sg_dL::synapse0x40d7f20() {
   return (neuron0x40e8e60()*-1.4986);
}

double NNfunction_sg_dL::synapse0x40da620() {
   return (neuron0x40c3cd0()*0.0781551);
}

double NNfunction_sg_dL::synapse0x40da660() {
   return (neuron0x40c4620()*0.0891521);
}

double NNfunction_sg_dL::synapse0x40cfbe0() {
   return (neuron0x40c5100()*0.0986511);
}

double NNfunction_sg_dL::synapse0x40cfc20() {
   return (neuron0x40c4ba0()*0.015656);
}

double NNfunction_sg_dL::synapse0x40dd200() {
   return (neuron0x40c5ee0()*0.0801311);
}

double NNfunction_sg_dL::synapse0x40dd240() {
   return (neuron0x40c79c0()*-0.361147);
}

double NNfunction_sg_dL::synapse0x40ddbd0() {
   return (neuron0x40c8790()*-0.209553);
}

double NNfunction_sg_dL::synapse0x40ddc10() {
   return (neuron0x40c9160()*-0.116844);
}

double NNfunction_sg_dL::synapse0x40de5a0() {
   return (neuron0x40c9b30()*0.0679083);
}

double NNfunction_sg_dL::synapse0x40de5e0() {
   return (neuron0x40ca610()*-0.00833649);
}

double NNfunction_sg_dL::synapse0x40def70() {
   return (neuron0x40cafe0()*-0.00962643);
}

double NNfunction_sg_dL::synapse0x40defb0() {
   return (neuron0x40c80c0()*-0.0407166);
}

double NNfunction_sg_dL::synapse0x40df940() {
   return (neuron0x40ccb90()*-0.0227682);
}

double NNfunction_sg_dL::synapse0x40df980() {
   return (neuron0x40cd560()*0.0989961);
}

double NNfunction_sg_dL::synapse0x40e0310() {
   return (neuron0x40cdf30()*0.97483);
}

double NNfunction_sg_dL::synapse0x40e0350() {
   return (neuron0x40ce900()*0.376559);
}

double NNfunction_sg_dL::synapse0x40e0ce0() {
   return (neuron0x40d0710()*-0.167293);
}

double NNfunction_sg_dL::synapse0x40e0d20() {
   return (neuron0x40d09f0()*1.71794);
}

double NNfunction_sg_dL::synapse0x40e16b0() {
   return (neuron0x40d13c0()*-1.00851);
}

double NNfunction_sg_dL::synapse0x40e16f0() {
   return (neuron0x40d1d90()*0.0213281);
}

double NNfunction_sg_dL::synapse0x40e2290() {
   return (neuron0x40d2760()*0.985417);
}

double NNfunction_sg_dL::synapse0x40e22d0() {
   return (neuron0x40d3130()*-0.686307);
}

double NNfunction_sg_dL::synapse0x40e2c60() {
   return (neuron0x40cbc80()*-0.484242);
}

double NNfunction_sg_dL::synapse0x40e2ca0() {
   return (neuron0x40cc650()*0.610058);
}

double NNfunction_sg_dL::synapse0x40d3ae0() {
   return (neuron0x40d5ec0()*0.309335);
}

double NNfunction_sg_dL::synapse0x40d3b20() {
   return (neuron0x40d6890()*-0.0597617);
}

double NNfunction_sg_dL::synapse0x40d44b0() {
   return (neuron0x40d7260()*0.00290432);
}

double NNfunction_sg_dL::synapse0x40d44f0() {
   return (neuron0x40d7c30()*0.00469663);
}

double NNfunction_sg_dL::synapse0x40d4e80() {
   return (neuron0x40d8600()*-0.0243137);
}

double NNfunction_sg_dL::synapse0x40d4ec0() {
   return (neuron0x40d8fd0()*0.394364);
}

double NNfunction_sg_dL::synapse0x40e73a0() {
   return (neuron0x40d99a0()*0.115513);
}

double NNfunction_sg_dL::synapse0x40e73e0() {
   return (neuron0x40da370()*0.0815646);
}

double NNfunction_sg_dL::synapse0x40e7d70() {
   return (neuron0x40d0400()*-0.414511);
}

double NNfunction_sg_dL::synapse0x40e7db0() {
   return (neuron0x40dcf50()*-0.0859673);
}

double NNfunction_sg_dL::synapse0x40e8740() {
   return (neuron0x40dd920()*0.0119012);
}

double NNfunction_sg_dL::synapse0x40e8780() {
   return (neuron0x40de2f0()*0.387133);
}

double NNfunction_sg_dL::synapse0x40e9110() {
   return (neuron0x40decc0()*0.0723924);
}

double NNfunction_sg_dL::synapse0x40e9150() {
   return (neuron0x40df690()*0.0210056);
}

double NNfunction_sg_dL::synapse0x40c3f80() {
   return (neuron0x40e0060()*0.738363);
}

double NNfunction_sg_dL::synapse0x40c3fc0() {
   return (neuron0x40e0a30()*0.018106);
}

double NNfunction_sg_dL::synapse0x40d88b0() {
   return (neuron0x40e1400()*-0.000173416);
}

double NNfunction_sg_dL::synapse0x40d88f0() {
   return (neuron0x40e1fe0()*0.0780533);
}

double NNfunction_sg_dL::synapse0x40e9830() {
   return (neuron0x40e29b0()*0.0418145);
}

double NNfunction_sg_dL::synapse0x40e9870() {
   return (neuron0x40d3830()*0.130841);
}

double NNfunction_sg_dL::synapse0x40e98b0() {
   return (neuron0x40d4200()*-0.471999);
}

double NNfunction_sg_dL::synapse0x40e98f0() {
   return (neuron0x40d4bd0()*-0.0677734);
}

double NNfunction_sg_dL::synapse0x40f07a0() {
   return (neuron0x40e7210()*1.00962);
}

double NNfunction_sg_dL::synapse0x40f07e0() {
   return (neuron0x40e7ac0()*-1.08565);
}

double NNfunction_sg_dL::synapse0x40f0820() {
   return (neuron0x40e8490()*-0.090787);
}

double NNfunction_sg_dL::synapse0x40f0860() {
   return (neuron0x40e8e60()*-1.343);
}

double NNfunction_sg_dL::synapse0x40f0be0() {
   return (neuron0x40c3cd0()*-0.400524);
}

double NNfunction_sg_dL::synapse0x40f0c20() {
   return (neuron0x40c4620()*-0.0633954);
}

double NNfunction_sg_dL::synapse0x40f0c60() {
   return (neuron0x40c5100()*0.146633);
}

double NNfunction_sg_dL::synapse0x40f0ca0() {
   return (neuron0x40c4ba0()*-0.0109161);
}

double NNfunction_sg_dL::synapse0x40f0ce0() {
   return (neuron0x40c5ee0()*-0.119556);
}

double NNfunction_sg_dL::synapse0x40f0d20() {
   return (neuron0x40c79c0()*-0.433318);
}

double NNfunction_sg_dL::synapse0x40f0d60() {
   return (neuron0x40c8790()*-0.297752);
}

double NNfunction_sg_dL::synapse0x40f0da0() {
   return (neuron0x40c9160()*-0.578733);
}

double NNfunction_sg_dL::synapse0x40f0de0() {
   return (neuron0x40c9b30()*-0.72544);
}

double NNfunction_sg_dL::synapse0x40f0e20() {
   return (neuron0x40ca610()*-0.191529);
}

double NNfunction_sg_dL::synapse0x40f0e60() {
   return (neuron0x40cafe0()*-0.0628662);
}

double NNfunction_sg_dL::synapse0x40f0ea0() {
   return (neuron0x40c80c0()*-0.0177616);
}

double NNfunction_sg_dL::synapse0x40f0ee0() {
   return (neuron0x40ccb90()*0.0268512);
}

double NNfunction_sg_dL::synapse0x40f0f20() {
   return (neuron0x40cd560()*0.0861103);
}

double NNfunction_sg_dL::synapse0x40f0f60() {
   return (neuron0x40cdf30()*0.712176);
}

double NNfunction_sg_dL::synapse0x40f0fa0() {
   return (neuron0x40ce900()*0.751872);
}

double NNfunction_sg_dL::synapse0x40f0a30() {
   return (neuron0x40d0710()*-0.218714);
}

double NNfunction_sg_dL::synapse0x40f0a70() {
   return (neuron0x40d09f0()*0.702076);
}

double NNfunction_sg_dL::synapse0x40f10f0() {
   return (neuron0x40d13c0()*-0.528276);
}

double NNfunction_sg_dL::synapse0x40f1130() {
   return (neuron0x40d1d90()*0.100186);
}

double NNfunction_sg_dL::synapse0x40f1170() {
   return (neuron0x40d2760()*0.0480564);
}

double NNfunction_sg_dL::synapse0x40f11b0() {
   return (neuron0x40d3130()*-0.585462);
}

double NNfunction_sg_dL::synapse0x40f11f0() {
   return (neuron0x40cbc80()*-0.762152);
}

double NNfunction_sg_dL::synapse0x40f1230() {
   return (neuron0x40cc650()*0.241759);
}

double NNfunction_sg_dL::synapse0x40f1270() {
   return (neuron0x40d5ec0()*-0.0949169);
}

double NNfunction_sg_dL::synapse0x40f12b0() {
   return (neuron0x40d6890()*0.219722);
}

double NNfunction_sg_dL::synapse0x40f12f0() {
   return (neuron0x40d7260()*0.0163328);
}

double NNfunction_sg_dL::synapse0x40f1330() {
   return (neuron0x40d7c30()*0.0103917);
}

double NNfunction_sg_dL::synapse0x40f1370() {
   return (neuron0x40d8600()*-0.0901272);
}

double NNfunction_sg_dL::synapse0x40f13b0() {
   return (neuron0x40d8fd0()*-0.311552);
}

double NNfunction_sg_dL::synapse0x40f13f0() {
   return (neuron0x40d99a0()*0.0522982);
}

double NNfunction_sg_dL::synapse0x40f1430() {
   return (neuron0x40da370()*-0.0212719);
}

double NNfunction_sg_dL::synapse0x40f0fe0() {
   return (neuron0x40d0400()*-0.68028);
}

double NNfunction_sg_dL::synapse0x40f1020() {
   return (neuron0x40dcf50()*-0.0542025);
}

double NNfunction_sg_dL::synapse0x40f1060() {
   return (neuron0x40dd920()*-0.0225984);
}

double NNfunction_sg_dL::synapse0x40f10a0() {
   return (neuron0x40de2f0()*-0.03061);
}

double NNfunction_sg_dL::synapse0x40f1680() {
   return (neuron0x40decc0()*0.280172);
}

double NNfunction_sg_dL::synapse0x40f16c0() {
   return (neuron0x40df690()*-0.00397326);
}

double NNfunction_sg_dL::synapse0x40f1700() {
   return (neuron0x40e0060()*1.49687);
}

double NNfunction_sg_dL::synapse0x40f1740() {
   return (neuron0x40e0a30()*-0.0431571);
}

double NNfunction_sg_dL::synapse0x40f1780() {
   return (neuron0x40e1400()*0.0180296);
}

double NNfunction_sg_dL::synapse0x40f17c0() {
   return (neuron0x40e1fe0()*-0.162427);
}

double NNfunction_sg_dL::synapse0x40f1800() {
   return (neuron0x40e29b0()*-0.215485);
}

double NNfunction_sg_dL::synapse0x40f1840() {
   return (neuron0x40d3830()*-0.400998);
}

double NNfunction_sg_dL::synapse0x40f1880() {
   return (neuron0x40d4200()*-0.337371);
}

double NNfunction_sg_dL::synapse0x40f18c0() {
   return (neuron0x40d4bd0()*0.00418656);
}

double NNfunction_sg_dL::synapse0x40f1900() {
   return (neuron0x40e7210()*-0.645387);
}

double NNfunction_sg_dL::synapse0x40f1940() {
   return (neuron0x40e7ac0()*-1.81704);
}

double NNfunction_sg_dL::synapse0x40f1980() {
   return (neuron0x40e8490()*-0.0950645);
}

double NNfunction_sg_dL::synapse0x40f19c0() {
   return (neuron0x40e8e60()*-0.162383);
}

double NNfunction_sg_dL::synapse0x40f1d40() {
   return (neuron0x40c3cd0()*0.0507331);
}

double NNfunction_sg_dL::synapse0x40f1d80() {
   return (neuron0x40c4620()*-0.30929);
}

double NNfunction_sg_dL::synapse0x40f1dc0() {
   return (neuron0x40c5100()*-0.570553);
}

double NNfunction_sg_dL::synapse0x40f1e00() {
   return (neuron0x40c4ba0()*-0.00126604);
}

double NNfunction_sg_dL::synapse0x40f1e40() {
   return (neuron0x40c5ee0()*-0.0910634);
}

double NNfunction_sg_dL::synapse0x40f1e80() {
   return (neuron0x40c79c0()*-1.67872);
}

double NNfunction_sg_dL::synapse0x40f1ec0() {
   return (neuron0x40c8790()*-0.650785);
}

double NNfunction_sg_dL::synapse0x40f1f00() {
   return (neuron0x40c9160()*0.847457);
}

double NNfunction_sg_dL::synapse0x40f1f40() {
   return (neuron0x40c9b30()*0.717703);
}

double NNfunction_sg_dL::synapse0x40f1f80() {
   return (neuron0x40ca610()*0.161767);
}

double NNfunction_sg_dL::synapse0x40f1fc0() {
   return (neuron0x40cafe0()*0.020134);
}

double NNfunction_sg_dL::synapse0x40f2000() {
   return (neuron0x40c80c0()*0.0353677);
}

double NNfunction_sg_dL::synapse0x40f2040() {
   return (neuron0x40ccb90()*0.00396852);
}

double NNfunction_sg_dL::synapse0x40f2080() {
   return (neuron0x40cd560()*0.265593);
}

double NNfunction_sg_dL::synapse0x40f20c0() {
   return (neuron0x40cdf30()*3.24895);
}

double NNfunction_sg_dL::synapse0x40f2100() {
   return (neuron0x40ce900()*0.120933);
}

double NNfunction_sg_dL::synapse0x40f1b90() {
   return (neuron0x40d0710()*-2.13091);
}

double NNfunction_sg_dL::synapse0x40f1bd0() {
   return (neuron0x40d09f0()*3.55503);
}

double NNfunction_sg_dL::synapse0x40f2250() {
   return (neuron0x40d13c0()*-0.25394);
}

double NNfunction_sg_dL::synapse0x40f2290() {
   return (neuron0x40d1d90()*-0.0324592);
}

double NNfunction_sg_dL::synapse0x40f22d0() {
   return (neuron0x40d2760()*-0.577848);
}

double NNfunction_sg_dL::synapse0x40f2310() {
   return (neuron0x40d3130()*0.130241);
}

double NNfunction_sg_dL::synapse0x40f2350() {
   return (neuron0x40cbc80()*0.902294);
}

double NNfunction_sg_dL::synapse0x40f2390() {
   return (neuron0x40cc650()*-0.43664);
}

double NNfunction_sg_dL::synapse0x40f23d0() {
   return (neuron0x40d5ec0()*-0.0523466);
}

double NNfunction_sg_dL::synapse0x40f2410() {
   return (neuron0x40d6890()*-0.13955);
}

double NNfunction_sg_dL::synapse0x40f2450() {
   return (neuron0x40d7260()*0.0320658);
}

double NNfunction_sg_dL::synapse0x40f2490() {
   return (neuron0x40d7c30()*0.0151349);
}

double NNfunction_sg_dL::synapse0x40f24d0() {
   return (neuron0x40d8600()*0.136156);
}

double NNfunction_sg_dL::synapse0x40f2510() {
   return (neuron0x40d8fd0()*1.05634);
}

double NNfunction_sg_dL::synapse0x40f2550() {
   return (neuron0x40d99a0()*-0.0424075);
}

double NNfunction_sg_dL::synapse0x40f2590() {
   return (neuron0x40da370()*-0.0504924);
}

double NNfunction_sg_dL::synapse0x40f2140() {
   return (neuron0x40d0400()*-1.63905);
}

double NNfunction_sg_dL::synapse0x40f2180() {
   return (neuron0x40dcf50()*-0.0810642);
}

double NNfunction_sg_dL::synapse0x40f21c0() {
   return (neuron0x40dd920()*-0.0096778);
}

double NNfunction_sg_dL::synapse0x40f2200() {
   return (neuron0x40de2f0()*-0.168758);
}

double NNfunction_sg_dL::synapse0x40f27e0() {
   return (neuron0x40decc0()*-0.416921);
}

double NNfunction_sg_dL::synapse0x40f2820() {
   return (neuron0x40df690()*-0.0641993);
}

double NNfunction_sg_dL::synapse0x40f2860() {
   return (neuron0x40e0060()*4.02891);
}

double NNfunction_sg_dL::synapse0x40f28a0() {
   return (neuron0x40e0a30()*0.0128823);
}

double NNfunction_sg_dL::synapse0x40f28e0() {
   return (neuron0x40e1400()*-0.00312279);
}

double NNfunction_sg_dL::synapse0x40f2920() {
   return (neuron0x40e1fe0()*0.104596);
}

double NNfunction_sg_dL::synapse0x40f2960() {
   return (neuron0x40e29b0()*0.123422);
}

double NNfunction_sg_dL::synapse0x40f29a0() {
   return (neuron0x40d3830()*0.237499);
}

double NNfunction_sg_dL::synapse0x40f29e0() {
   return (neuron0x40d4200()*0.891818);
}

double NNfunction_sg_dL::synapse0x40f2a20() {
   return (neuron0x40d4bd0()*0.0618834);
}

double NNfunction_sg_dL::synapse0x40f2a60() {
   return (neuron0x40e7210()*4.76206);
}

double NNfunction_sg_dL::synapse0x40f2aa0() {
   return (neuron0x40e7ac0()*-0.333511);
}

double NNfunction_sg_dL::synapse0x40f2ae0() {
   return (neuron0x40e8490()*-0.146417);
}

double NNfunction_sg_dL::synapse0x40f2b20() {
   return (neuron0x40e8e60()*-2.97074);
}

double NNfunction_sg_dL::synapse0x40f2ea0() {
   return (neuron0x40c3cd0()*0.0250213);
}

double NNfunction_sg_dL::synapse0x40f2ee0() {
   return (neuron0x40c4620()*-0.59612);
}

double NNfunction_sg_dL::synapse0x40f2f20() {
   return (neuron0x40c5100()*-0.0939017);
}

double NNfunction_sg_dL::synapse0x40f2f60() {
   return (neuron0x40c4ba0()*-0.256977);
}

double NNfunction_sg_dL::synapse0x40f2fa0() {
   return (neuron0x40c5ee0()*-0.164385);
}

double NNfunction_sg_dL::synapse0x40f2fe0() {
   return (neuron0x40c79c0()*-0.69394);
}

double NNfunction_sg_dL::synapse0x40f3020() {
   return (neuron0x40c8790()*0.0142824);
}

double NNfunction_sg_dL::synapse0x40f3060() {
   return (neuron0x40c9160()*0.0337092);
}

double NNfunction_sg_dL::synapse0x40f30a0() {
   return (neuron0x40c9b30()*0.015542);
}

double NNfunction_sg_dL::synapse0x40f30e0() {
   return (neuron0x40ca610()*-0.696869);
}

double NNfunction_sg_dL::synapse0x40f3120() {
   return (neuron0x40cafe0()*-0.503801);
}

double NNfunction_sg_dL::synapse0x40f3160() {
   return (neuron0x40c80c0()*-0.0311192);
}

double NNfunction_sg_dL::synapse0x40f31a0() {
   return (neuron0x40ccb90()*-0.573566);
}

double NNfunction_sg_dL::synapse0x40f31e0() {
   return (neuron0x40cd560()*-0.511815);
}

double NNfunction_sg_dL::synapse0x40f3220() {
   return (neuron0x40cdf30()*-0.187134);
}

double NNfunction_sg_dL::synapse0x40f3260() {
   return (neuron0x40ce900()*-0.657605);
}

double NNfunction_sg_dL::synapse0x40f2cf0() {
   return (neuron0x40d0710()*0.180461);
}

double NNfunction_sg_dL::synapse0x40f2d30() {
   return (neuron0x40d09f0()*-0.349826);
}

double NNfunction_sg_dL::synapse0x40f33b0() {
   return (neuron0x40d13c0()*-0.157449);
}

double NNfunction_sg_dL::synapse0x40f33f0() {
   return (neuron0x40d1d90()*-0.307248);
}

double NNfunction_sg_dL::synapse0x40f3430() {
   return (neuron0x40d2760()*0.0915899);
}

double NNfunction_sg_dL::synapse0x40f3470() {
   return (neuron0x40d3130()*0.0102188);
}

double NNfunction_sg_dL::synapse0x40f34b0() {
   return (neuron0x40cbc80()*-0.338517);
}

double NNfunction_sg_dL::synapse0x40f34f0() {
   return (neuron0x40cc650()*-0.628522);
}

double NNfunction_sg_dL::synapse0x40f3530() {
   return (neuron0x40d5ec0()*-0.311863);
}

double NNfunction_sg_dL::synapse0x40f3570() {
   return (neuron0x40d6890()*-0.728846);
}

double NNfunction_sg_dL::synapse0x40f35b0() {
   return (neuron0x40d7260()*-0.184905);
}

double NNfunction_sg_dL::synapse0x40f35f0() {
   return (neuron0x40d7c30()*0.188672);
}

double NNfunction_sg_dL::synapse0x40f3630() {
   return (neuron0x40d8600()*-0.630667);
}

double NNfunction_sg_dL::synapse0x40f3670() {
   return (neuron0x40d8fd0()*-0.832335);
}

double NNfunction_sg_dL::synapse0x40f36b0() {
   return (neuron0x40d99a0()*0.40349);
}

double NNfunction_sg_dL::synapse0x40f36f0() {
   return (neuron0x40da370()*0.0671164);
}

double NNfunction_sg_dL::synapse0x40f32a0() {
   return (neuron0x40d0400()*0.0748598);
}

double NNfunction_sg_dL::synapse0x40f32e0() {
   return (neuron0x40dcf50()*0.182553);
}

double NNfunction_sg_dL::synapse0x40f3320() {
   return (neuron0x40dd920()*-0.0755192);
}

double NNfunction_sg_dL::synapse0x40f3360() {
   return (neuron0x40de2f0()*0.0636816);
}

double NNfunction_sg_dL::synapse0x40f3940() {
   return (neuron0x40decc0()*-0.51368);
}

double NNfunction_sg_dL::synapse0x40f3980() {
   return (neuron0x40df690()*-0.0149694);
}

double NNfunction_sg_dL::synapse0x40f39c0() {
   return (neuron0x40e0060()*-0.919934);
}

double NNfunction_sg_dL::synapse0x40f3a00() {
   return (neuron0x40e0a30()*-0.308741);
}

double NNfunction_sg_dL::synapse0x40f3a40() {
   return (neuron0x40e1400()*0.258457);
}

double NNfunction_sg_dL::synapse0x40f3a80() {
   return (neuron0x40e1fe0()*-0.553552);
}

double NNfunction_sg_dL::synapse0x40f3ac0() {
   return (neuron0x40e29b0()*0.0880347);
}

double NNfunction_sg_dL::synapse0x40f3b00() {
   return (neuron0x40d3830()*-0.173174);
}

double NNfunction_sg_dL::synapse0x40f3b40() {
   return (neuron0x40d4200()*-0.653989);
}

double NNfunction_sg_dL::synapse0x40f3b80() {
   return (neuron0x40d4bd0()*-0.133004);
}

double NNfunction_sg_dL::synapse0x40f3bc0() {
   return (neuron0x40e7210()*-0.684123);
}

double NNfunction_sg_dL::synapse0x40f3c00() {
   return (neuron0x40e7ac0()*-0.320888);
}

double NNfunction_sg_dL::synapse0x40f3c40() {
   return (neuron0x40e8490()*-0.409226);
}

double NNfunction_sg_dL::synapse0x40f3c80() {
   return (neuron0x40e8e60()*-0.16125);
}

double NNfunction_sg_dL::synapse0x40f3ee0() {
   return (neuron0x40f0060()*-4.3779);
}

double NNfunction_sg_dL::synapse0x40f3f20() {
   return (neuron0x40f0400()*-3.72705);
}

double NNfunction_sg_dL::synapse0x40f3f60() {
   return (neuron0x40f08a0()*-3.619);
}

double NNfunction_sg_dL::synapse0x40f3fa0() {
   return (neuron0x40f1a00()*-12.2312);
}

double NNfunction_sg_dL::synapse0x40f3fe0() {
   return (neuron0x40f2b60()*2.01143);
}

