#include "NNfunction_ns_chiMinus1_uL.h"
#include <cmath>

double NNfunction_ns_chiMinus1_uL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.2679)/15.1346;
   input1 = (in1 - 41.4163)/917.42;
   input2 = (in2 - 438.865)/490.247;
   input3 = (in3 - 205.127)/747.204;
   input4 = (in4 - 928.804)/807.232;
   input5 = (in5 - 809.959)/792.935;
   input6 = (in6 - 807.404)/788.339;
   input7 = (in7 - 812.013)/776.602;
   input8 = (in8 - 819.43)/821.449;
   input9 = (in9 - 810.076)/808.906;
   input10 = (in10 - 828.291)/815.067;
   input11 = (in11 - 536.267)/425.722;
   input12 = (in12 - 786.243)/725.124;
   input13 = (in13 - 585.817)/456.012;
   input14 = (in14 - 773.935)/678.736;
   input15 = (in15 - 779.475)/681.851;
   input16 = (in16 - 544.945)/461.751;
   input17 = (in17 - 803.663)/748.804;
   input18 = (in18 - 804.781)/751.272;
   input19 = (in19 - 810.096)/722.355;
   input20 = (in20 - -165.02)/486.165;
   input21 = (in21 - -214.234)/1050.92;
   input22 = (in22 - -7.78593)/1049.95;
   input23 = (in23 - -56.0606)/579.722;
   switch(index) {
     case 0:
         return neuron0x38f4280();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiMinus1_uL::Value(int index, double* input) {
   input0 = (input[0] - 23.2679)/15.1346;
   input1 = (input[1] - 41.4163)/917.42;
   input2 = (input[2] - 438.865)/490.247;
   input3 = (input[3] - 205.127)/747.204;
   input4 = (input[4] - 928.804)/807.232;
   input5 = (input[5] - 809.959)/792.935;
   input6 = (input[6] - 807.404)/788.339;
   input7 = (input[7] - 812.013)/776.602;
   input8 = (input[8] - 819.43)/821.449;
   input9 = (input[9] - 810.076)/808.906;
   input10 = (input[10] - 828.291)/815.067;
   input11 = (input[11] - 536.267)/425.722;
   input12 = (input[12] - 786.243)/725.124;
   input13 = (input[13] - 585.817)/456.012;
   input14 = (input[14] - 773.935)/678.736;
   input15 = (input[15] - 779.475)/681.851;
   input16 = (input[16] - 544.945)/461.751;
   input17 = (input[17] - 803.663)/748.804;
   input18 = (input[18] - 804.781)/751.272;
   input19 = (input[19] - 810.096)/722.355;
   input20 = (input[20] - -165.02)/486.165;
   input21 = (input[21] - -214.234)/1050.92;
   input22 = (input[22] - -7.78593)/1049.95;
   input23 = (input[23] - -56.0606)/579.722;
   switch(index) {
     case 0:
         return neuron0x38f4280();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiMinus1_uL::neuron0x38bf2f0() {
   return input0;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38bf5a0() {
   return input1;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38bf8e0() {
   return input2;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38bfc20() {
   return input3;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38bff60() {
   return input4;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c02a0() {
   return input5;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c05e0() {
   return input6;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c0920() {
   return input7;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c0c60() {
   return input8;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c0fa0() {
   return input9;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c12e0() {
   return input10;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c1620() {
   return input11;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c1960() {
   return input12;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c1ca0() {
   return input13;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c1fe0() {
   return input14;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c2320() {
   return input15;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c2660() {
   return input16;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c2bc0() {
   return input17;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c2de0() {
   return input18;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c3120() {
   return input19;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c3460() {
   return input20;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c37a0() {
   return input21;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c3ae0() {
   return input22;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c3e20() {
   return input23;
}

double NNfunction_ns_chiMinus1_uL::input0x38c4290() {
   double input = -0.444881;
   input += synapse0x38c45d0();
   input += synapse0x38c4610();
   input += synapse0x38c4650();
   input += synapse0x38c4690();
   input += synapse0x38c46d0();
   input += synapse0x38c4710();
   input += synapse0x38c4750();
   input += synapse0x38c4790();
   input += synapse0x38c47d0();
   input += synapse0x38c4810();
   input += synapse0x38c4850();
   input += synapse0x38c4890();
   input += synapse0x38c48d0();
   input += synapse0x38c4910();
   input += synapse0x38c4950();
   input += synapse0x38c4990();
   input += synapse0x38c4420();
   input += synapse0x38c4460();
   input += synapse0x27e0d50();
   input += synapse0x27e0d90();
   input += synapse0x38c4ae0();
   input += synapse0x38c4b20();
   input += synapse0x38c4b60();
   input += synapse0x38c4ba0();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c4290() {
   double input = input0x38c4290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38c4be0() {
   double input = 0.180706;
   input += synapse0x38c4f20();
   input += synapse0x38c4f60();
   input += synapse0x38c4fa0();
   input += synapse0x38c4fe0();
   input += synapse0x38c5020();
   input += synapse0x38c5060();
   input += synapse0x38c50a0();
   input += synapse0x38c50e0();
   input += synapse0x38c5120();
   input += synapse0x38c49d0();
   input += synapse0x38c4a10();
   input += synapse0x38c4a50();
   input += synapse0x38c4a90();
   input += synapse0x38c5370();
   input += synapse0x38c53b0();
   input += synapse0x38c53f0();
   input += synapse0x38c4d70();
   input += synapse0x38c4db0();
   input += synapse0x38c5540();
   input += synapse0x38c5580();
   input += synapse0x38c55c0();
   input += synapse0x38c5600();
   input += synapse0x38c5640();
   input += synapse0x38c5680();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c4be0() {
   double input = input0x38c4be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38c56c0() {
   double input = -2.00426;
   input += synapse0x38c5a00();
   input += synapse0x38c5a40();
   input += synapse0x38c5a80();
   input += synapse0x38c5ac0();
   input += synapse0x38c5b00();
   input += synapse0x38c5b40();
   input += synapse0x38c5b80();
   input += synapse0x38c5bc0();
   input += synapse0x38c5c00();
   input += synapse0x38c5c40();
   input += synapse0x38c5c80();
   input += synapse0x38c5cc0();
   input += synapse0x38c5d00();
   input += synapse0x38c5d40();
   input += synapse0x38c5d80();
   input += synapse0x38c5dc0();
   input += synapse0x38c5850();
   input += synapse0x38c5890();
   input += synapse0x27cf9c0();
   input += synapse0x36893d0();
   input += synapse0x3689410();
   input += synapse0x38c7d00();
   input += synapse0x38c7d40();
   input += synapse0x38bf030();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c56c0() {
   double input = input0x38c56c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38c5160() {
   double input = 1.55477;
   input += synapse0x38bf100();
   input += synapse0x3689c50();
   input += synapse0x38c52f0();
   input += synapse0x38c5330();
   input += synapse0x38c5f10();
   input += synapse0x38c5f50();
   input += synapse0x38c5f90();
   input += synapse0x38c5fd0();
   input += synapse0x38c6010();
   input += synapse0x38c6050();
   input += synapse0x38c6090();
   input += synapse0x38c60d0();
   input += synapse0x38c6110();
   input += synapse0x38c6150();
   input += synapse0x38c6190();
   input += synapse0x38c61d0();
   input += synapse0x38bf070();
   input += synapse0x38bf0b0();
   input += synapse0x38c6320();
   input += synapse0x38c6360();
   input += synapse0x38c63a0();
   input += synapse0x38c63e0();
   input += synapse0x38c6420();
   input += synapse0x38c6460();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c5160() {
   double input = input0x38c5160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38c64a0() {
   double input = -0.0519104;
   input += synapse0x38c67e0();
   input += synapse0x38c6820();
   input += synapse0x38c6860();
   input += synapse0x38c68a0();
   input += synapse0x38c68e0();
   input += synapse0x38c6920();
   input += synapse0x38c6960();
   input += synapse0x38c69a0();
   input += synapse0x38c69e0();
   input += synapse0x38c6a20();
   input += synapse0x38c6a60();
   input += synapse0x38c6aa0();
   input += synapse0x38c6ae0();
   input += synapse0x38c6b20();
   input += synapse0x38c6b60();
   input += synapse0x38c6ba0();
   input += synapse0x38c6cf0();
   input += synapse0x38c6630();
   input += synapse0x38c6670();
   input += synapse0x38c7e40();
   input += synapse0x38c7e80();
   input += synapse0x38c7ec0();
   input += synapse0x38c7f00();
   input += synapse0x38c7f40();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c64a0() {
   double input = input0x38c64a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38c7f80() {
   double input = -0.460047;
   input += synapse0x38c82c0();
   input += synapse0x38c8300();
   input += synapse0x38c8340();
   input += synapse0x38c8380();
   input += synapse0x38c83c0();
   input += synapse0x38c8400();
   input += synapse0x38c8440();
   input += synapse0x38c8480();
   input += synapse0x38c84c0();
   input += synapse0x3689720();
   input += synapse0x3689760();
   input += synapse0x36897a0();
   input += synapse0x36897e0();
   input += synapse0x3689820();
   input += synapse0x3689860();
   input += synapse0x36898a0();
   input += synapse0x38c8110();
   input += synapse0x38c8150();
   input += synapse0x36899f0();
   input += synapse0x3689a30();
   input += synapse0x3689a70();
   input += synapse0x3689ab0();
   input += synapse0x3689af0();
   input += synapse0x38c8d10();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c7f80() {
   double input = input0x38c7f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38c8d50() {
   double input = 0.0476249;
   input += synapse0x38c9090();
   input += synapse0x38c90d0();
   input += synapse0x38c9110();
   input += synapse0x38c9150();
   input += synapse0x38c9190();
   input += synapse0x38c91d0();
   input += synapse0x38c9210();
   input += synapse0x38c9250();
   input += synapse0x38c9290();
   input += synapse0x38c92d0();
   input += synapse0x38c9310();
   input += synapse0x38c9350();
   input += synapse0x38c9390();
   input += synapse0x38c93d0();
   input += synapse0x38c9410();
   input += synapse0x38c9450();
   input += synapse0x38c8ee0();
   input += synapse0x38c8f20();
   input += synapse0x38c95a0();
   input += synapse0x38c95e0();
   input += synapse0x38c9620();
   input += synapse0x38c9660();
   input += synapse0x38c96a0();
   input += synapse0x38c96e0();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c8d50() {
   double input = input0x38c8d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38c9720() {
   double input = 0.921952;
   input += synapse0x38c9a60();
   input += synapse0x38c9aa0();
   input += synapse0x38c9ae0();
   input += synapse0x38c9b20();
   input += synapse0x38c9b60();
   input += synapse0x38c9ba0();
   input += synapse0x38c9be0();
   input += synapse0x38c9c20();
   input += synapse0x38c9c60();
   input += synapse0x38c9ca0();
   input += synapse0x38c9ce0();
   input += synapse0x38c9d20();
   input += synapse0x38c9d60();
   input += synapse0x38c9da0();
   input += synapse0x38c9de0();
   input += synapse0x38c9e20();
   input += synapse0x38c98b0();
   input += synapse0x38c98f0();
   input += synapse0x38c9f70();
   input += synapse0x38c9fb0();
   input += synapse0x38c9ff0();
   input += synapse0x38ca030();
   input += synapse0x38ca070();
   input += synapse0x38ca0b0();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c9720() {
   double input = input0x38c9720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38ca0f0() {
   double input = -4.4953;
   input += synapse0x38c2ab0();
   input += synapse0x38c2af0();
   input += synapse0x38c2b30();
   input += synapse0x38c2b70();
   input += synapse0x38ca640();
   input += synapse0x38ca680();
   input += synapse0x38ca6c0();
   input += synapse0x38ca700();
   input += synapse0x38ca740();
   input += synapse0x38ca780();
   input += synapse0x38ca7c0();
   input += synapse0x38ca800();
   input += synapse0x38ca840();
   input += synapse0x38ca880();
   input += synapse0x38ca8c0();
   input += synapse0x38ca900();
   input += synapse0x38ca280();
   input += synapse0x38ca2c0();
   input += synapse0x38caa50();
   input += synapse0x38caa90();
   input += synapse0x38caad0();
   input += synapse0x38cab10();
   input += synapse0x38cab50();
   input += synapse0x38cab90();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38ca0f0() {
   double input = input0x38ca0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38cabd0() {
   double input = -0.897751;
   input += synapse0x38caf10();
   input += synapse0x38caf50();
   input += synapse0x38caf90();
   input += synapse0x38cafd0();
   input += synapse0x38cb010();
   input += synapse0x38cb050();
   input += synapse0x38cb090();
   input += synapse0x38cb0d0();
   input += synapse0x38cb110();
   input += synapse0x38cb150();
   input += synapse0x38cb190();
   input += synapse0x38cb1d0();
   input += synapse0x38cb210();
   input += synapse0x38cb250();
   input += synapse0x38cb290();
   input += synapse0x38cb2d0();
   input += synapse0x38cad60();
   input += synapse0x38cada0();
   input += synapse0x38cb420();
   input += synapse0x38cb460();
   input += synapse0x38cb4a0();
   input += synapse0x38cb4e0();
   input += synapse0x38cb520();
   input += synapse0x38cb560();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38cabd0() {
   double input = input0x38cabd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38cb5a0() {
   double input = -0.57531;
   input += synapse0x38cb8e0();
   input += synapse0x38cb920();
   input += synapse0x38cb960();
   input += synapse0x38cb9a0();
   input += synapse0x38cb9e0();
   input += synapse0x38cba20();
   input += synapse0x38cba60();
   input += synapse0x38cbaa0();
   input += synapse0x38cbae0();
   input += synapse0x38cbb20();
   input += synapse0x38cbb60();
   input += synapse0x38cbba0();
   input += synapse0x38cbbe0();
   input += synapse0x38cbc20();
   input += synapse0x38cbc60();
   input += synapse0x38cbca0();
   input += synapse0x38cb730();
   input += synapse0x38cb770();
   input += synapse0x38c8500();
   input += synapse0x38c8540();
   input += synapse0x38c8580();
   input += synapse0x38c85c0();
   input += synapse0x38c8600();
   input += synapse0x38c8640();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38cb5a0() {
   double input = input0x38cb5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38c8680() {
   double input = -0.47004;
   input += synapse0x38c89c0();
   input += synapse0x38c8a00();
   input += synapse0x38c8a40();
   input += synapse0x38c8a80();
   input += synapse0x38c8ac0();
   input += synapse0x38c8b00();
   input += synapse0x38c8b40();
   input += synapse0x38c8b80();
   input += synapse0x38c8bc0();
   input += synapse0x38c8c00();
   input += synapse0x38c8c40();
   input += synapse0x38c8c80();
   input += synapse0x38c8cc0();
   input += synapse0x38cce00();
   input += synapse0x38cce40();
   input += synapse0x38cce80();
   input += synapse0x38c8810();
   input += synapse0x38c8850();
   input += synapse0x38ccfd0();
   input += synapse0x38cd010();
   input += synapse0x38cd050();
   input += synapse0x38cd090();
   input += synapse0x38cd0d0();
   input += synapse0x38cd110();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38c8680() {
   double input = input0x38c8680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38cd150() {
   double input = 1.09712;
   input += synapse0x38cd490();
   input += synapse0x38cd4d0();
   input += synapse0x38cd510();
   input += synapse0x38cd550();
   input += synapse0x38cd590();
   input += synapse0x38cd5d0();
   input += synapse0x38cd610();
   input += synapse0x38cd650();
   input += synapse0x38cd690();
   input += synapse0x38cd6d0();
   input += synapse0x38cd710();
   input += synapse0x38cd750();
   input += synapse0x38cd790();
   input += synapse0x38cd7d0();
   input += synapse0x38cd810();
   input += synapse0x38cd850();
   input += synapse0x38cd2e0();
   input += synapse0x38cd320();
   input += synapse0x38cd9a0();
   input += synapse0x38cd9e0();
   input += synapse0x38cda20();
   input += synapse0x38cda60();
   input += synapse0x38cdaa0();
   input += synapse0x38cdae0();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38cd150() {
   double input = input0x38cd150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38cdb20() {
   double input = 0.878299;
   input += synapse0x38cde60();
   input += synapse0x38cdea0();
   input += synapse0x38cdee0();
   input += synapse0x38cdf20();
   input += synapse0x38cdf60();
   input += synapse0x38cdfa0();
   input += synapse0x38cdfe0();
   input += synapse0x38ce020();
   input += synapse0x38ce060();
   input += synapse0x38ce0a0();
   input += synapse0x38ce0e0();
   input += synapse0x38ce120();
   input += synapse0x38ce160();
   input += synapse0x38ce1a0();
   input += synapse0x38ce1e0();
   input += synapse0x38ce220();
   input += synapse0x38cdcb0();
   input += synapse0x38cdcf0();
   input += synapse0x38ce370();
   input += synapse0x38ce3b0();
   input += synapse0x38ce3f0();
   input += synapse0x38ce430();
   input += synapse0x38ce470();
   input += synapse0x38ce4b0();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38cdb20() {
   double input = input0x38cdb20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38ce4f0() {
   double input = -0.211476;
   input += synapse0x38ce830();
   input += synapse0x38ce870();
   input += synapse0x38ce8b0();
   input += synapse0x38ce8f0();
   input += synapse0x38ce930();
   input += synapse0x38ce970();
   input += synapse0x38ce9b0();
   input += synapse0x38ce9f0();
   input += synapse0x38cea30();
   input += synapse0x38cea70();
   input += synapse0x38ceab0();
   input += synapse0x38ceaf0();
   input += synapse0x38ceb30();
   input += synapse0x38ceb70();
   input += synapse0x38cebb0();
   input += synapse0x38cebf0();
   input += synapse0x38ce680();
   input += synapse0x38ce6c0();
   input += synapse0x38ced40();
   input += synapse0x38ced80();
   input += synapse0x38cedc0();
   input += synapse0x38cee00();
   input += synapse0x38cee40();
   input += synapse0x38cee80();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38ce4f0() {
   double input = input0x38ce4f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38ceec0() {
   double input = -0.418452;
   input += synapse0x38cf200();
   input += synapse0x38bf480();
   input += synapse0x38bf4c0();
   input += synapse0x38bf7c0();
   input += synapse0x38bf800();
   input += synapse0x38bfb00();
   input += synapse0x38bfb40();
   input += synapse0x38bfe40();
   input += synapse0x38bfe80();
   input += synapse0x38c0180();
   input += synapse0x38c01c0();
   input += synapse0x38c04c0();
   input += synapse0x38c0500();
   input += synapse0x38c0800();
   input += synapse0x38c0840();
   input += synapse0x38c0b40();
   input += synapse0x38c0b80();
   input += synapse0x38c0e80();
   input += synapse0x38c0ec0();
   input += synapse0x38c11c0();
   input += synapse0x38c1200();
   input += synapse0x38c1500();
   input += synapse0x38c1540();
   input += synapse0x38c1840();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38ceec0() {
   double input = input0x38ceec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38d0cd0() {
   double input = 0.914733;
   input += synapse0x38c1880();
   input += synapse0x38c2540();
   input += synapse0x38c2580();
   input += synapse0x38cf050();
   input += synapse0x38cf090();
   input += synapse0x38c2880();
   input += synapse0x38c28c0();
   input += synapse0x31d3370();
   input += synapse0x31d33b0();
   input += synapse0x38c3000();
   input += synapse0x38c3040();
   input += synapse0x38c3340();
   input += synapse0x38c3380();
   input += synapse0x38c3680();
   input += synapse0x38c36c0();
   input += synapse0x38c39c0();
   input += synapse0x38c3a00();
   input += synapse0x38c3d00();
   input += synapse0x38c3d40();
   input += synapse0x38c4040();
   input += synapse0x38c4080();
   input += synapse0x38c1b80();
   input += synapse0x38c1bc0();
   input += synapse0x38d0f70();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38d0cd0() {
   double input = input0x38d0cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38d0fb0() {
   double input = -0.76786;
   input += synapse0x38d12f0();
   input += synapse0x38d1330();
   input += synapse0x38d1370();
   input += synapse0x38d13b0();
   input += synapse0x38d13f0();
   input += synapse0x38d1430();
   input += synapse0x38d1470();
   input += synapse0x38d14b0();
   input += synapse0x38d14f0();
   input += synapse0x38d1530();
   input += synapse0x38d1570();
   input += synapse0x38d15b0();
   input += synapse0x38d15f0();
   input += synapse0x38d1630();
   input += synapse0x38d1670();
   input += synapse0x38d16b0();
   input += synapse0x38d1140();
   input += synapse0x38d1180();
   input += synapse0x38d1800();
   input += synapse0x38d1840();
   input += synapse0x38d1880();
   input += synapse0x38d18c0();
   input += synapse0x38d1900();
   input += synapse0x38d1940();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38d0fb0() {
   double input = input0x38d0fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38d1980() {
   double input = 1.4248;
   input += synapse0x38d1cc0();
   input += synapse0x38d1d00();
   input += synapse0x38d1d40();
   input += synapse0x38d1d80();
   input += synapse0x38d1dc0();
   input += synapse0x38d1e00();
   input += synapse0x38d1e40();
   input += synapse0x38d1e80();
   input += synapse0x38d1ec0();
   input += synapse0x38d1f00();
   input += synapse0x38d1f40();
   input += synapse0x38d1f80();
   input += synapse0x38d1fc0();
   input += synapse0x38d2000();
   input += synapse0x38d2040();
   input += synapse0x38d2080();
   input += synapse0x38d1b10();
   input += synapse0x38d1b50();
   input += synapse0x38d21d0();
   input += synapse0x38d2210();
   input += synapse0x38d2250();
   input += synapse0x38d2290();
   input += synapse0x38d22d0();
   input += synapse0x38d2310();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38d1980() {
   double input = input0x38d1980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38d2350() {
   double input = 1.45689;
   input += synapse0x38d2690();
   input += synapse0x38d26d0();
   input += synapse0x38d2710();
   input += synapse0x38d2750();
   input += synapse0x38d2790();
   input += synapse0x38d27d0();
   input += synapse0x38d2810();
   input += synapse0x38d2850();
   input += synapse0x38d2890();
   input += synapse0x38d28d0();
   input += synapse0x38d2910();
   input += synapse0x38d2950();
   input += synapse0x38d2990();
   input += synapse0x38d29d0();
   input += synapse0x38d2a10();
   input += synapse0x38d2a50();
   input += synapse0x38d24e0();
   input += synapse0x38d2520();
   input += synapse0x38d2ba0();
   input += synapse0x38d2be0();
   input += synapse0x38d2c20();
   input += synapse0x38d2c60();
   input += synapse0x38d2ca0();
   input += synapse0x38d2ce0();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38d2350() {
   double input = input0x38d2350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38d2d20() {
   double input = 1.68139;
   input += synapse0x38d3060();
   input += synapse0x38d30a0();
   input += synapse0x38d30e0();
   input += synapse0x38d3120();
   input += synapse0x38d3160();
   input += synapse0x38d31a0();
   input += synapse0x38d31e0();
   input += synapse0x38d3220();
   input += synapse0x38d3260();
   input += synapse0x38d32a0();
   input += synapse0x38d32e0();
   input += synapse0x38d3320();
   input += synapse0x38d3360();
   input += synapse0x38d33a0();
   input += synapse0x38d33e0();
   input += synapse0x38d3420();
   input += synapse0x38d2eb0();
   input += synapse0x38d2ef0();
   input += synapse0x38d3570();
   input += synapse0x38d35b0();
   input += synapse0x38d35f0();
   input += synapse0x38d3630();
   input += synapse0x38d3670();
   input += synapse0x38d36b0();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38d2d20() {
   double input = input0x38d2d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38d36f0() {
   double input = -0.895256;
   input += synapse0x38d3a30();
   input += synapse0x38d3a70();
   input += synapse0x38d3ab0();
   input += synapse0x38d3af0();
   input += synapse0x38d3b30();
   input += synapse0x38d3b70();
   input += synapse0x38d3bb0();
   input += synapse0x38d3bf0();
   input += synapse0x38d3c30();
   input += synapse0x38cbdf0();
   input += synapse0x38cbe30();
   input += synapse0x38cbe70();
   input += synapse0x38cbeb0();
   input += synapse0x38cbef0();
   input += synapse0x38cbf30();
   input += synapse0x38cbf70();
   input += synapse0x38d3880();
   input += synapse0x38d38c0();
   input += synapse0x38cc0c0();
   input += synapse0x38cc100();
   input += synapse0x38cc140();
   input += synapse0x38cc180();
   input += synapse0x38cc1c0();
   input += synapse0x38cc200();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38d36f0() {
   double input = input0x38d36f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38cc240() {
   double input = -4.23316;
   input += synapse0x38cc580();
   input += synapse0x38cc5c0();
   input += synapse0x38cc600();
   input += synapse0x38cc640();
   input += synapse0x38cc680();
   input += synapse0x38cc6c0();
   input += synapse0x38cc700();
   input += synapse0x38cc740();
   input += synapse0x38cc780();
   input += synapse0x38cc7c0();
   input += synapse0x38cc800();
   input += synapse0x38cc840();
   input += synapse0x38cc880();
   input += synapse0x38cc8c0();
   input += synapse0x38cc900();
   input += synapse0x38cc940();
   input += synapse0x38cc3d0();
   input += synapse0x38cc410();
   input += synapse0x38cca90();
   input += synapse0x38ccad0();
   input += synapse0x38ccb10();
   input += synapse0x38ccb50();
   input += synapse0x38ccb90();
   input += synapse0x38ccbd0();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38cc240() {
   double input = input0x38cc240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38ccc10() {
   double input = -0.780838;
   input += synapse0x38ccda0();
   input += synapse0x38d5e30();
   input += synapse0x38d5e70();
   input += synapse0x38d5eb0();
   input += synapse0x38d5ef0();
   input += synapse0x38d5f30();
   input += synapse0x38d5f70();
   input += synapse0x38d5fb0();
   input += synapse0x38d5ff0();
   input += synapse0x38d6030();
   input += synapse0x38d6070();
   input += synapse0x38d60b0();
   input += synapse0x38d60f0();
   input += synapse0x38d6130();
   input += synapse0x38d6170();
   input += synapse0x38d61b0();
   input += synapse0x38d5c80();
   input += synapse0x38d5cc0();
   input += synapse0x38d6300();
   input += synapse0x38d6340();
   input += synapse0x38d6380();
   input += synapse0x38d63c0();
   input += synapse0x38d6400();
   input += synapse0x38d6440();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38ccc10() {
   double input = input0x38ccc10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38d6480() {
   double input = -0.780605;
   input += synapse0x38d67c0();
   input += synapse0x38d6800();
   input += synapse0x38d6840();
   input += synapse0x38d6880();
   input += synapse0x38d68c0();
   input += synapse0x38d6900();
   input += synapse0x38d6940();
   input += synapse0x38d6980();
   input += synapse0x38d69c0();
   input += synapse0x38d6a00();
   input += synapse0x38d6a40();
   input += synapse0x38d6a80();
   input += synapse0x38d6ac0();
   input += synapse0x38d6b00();
   input += synapse0x38d6b40();
   input += synapse0x38d6b80();
   input += synapse0x38d6610();
   input += synapse0x38d6650();
   input += synapse0x38d6cd0();
   input += synapse0x38d6d10();
   input += synapse0x38d6d50();
   input += synapse0x38d6d90();
   input += synapse0x38d6dd0();
   input += synapse0x38d6e10();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38d6480() {
   double input = input0x38d6480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38d6e50() {
   double input = -1.79621;
   input += synapse0x38d7190();
   input += synapse0x38d71d0();
   input += synapse0x38d7210();
   input += synapse0x38d7250();
   input += synapse0x38d7290();
   input += synapse0x38d72d0();
   input += synapse0x38d7310();
   input += synapse0x38d7350();
   input += synapse0x38d7390();
   input += synapse0x38d73d0();
   input += synapse0x38d7410();
   input += synapse0x38d7450();
   input += synapse0x38d7490();
   input += synapse0x38d74d0();
   input += synapse0x38d7510();
   input += synapse0x38d7550();
   input += synapse0x38d6fe0();
   input += synapse0x38d7020();
   input += synapse0x38d76a0();
   input += synapse0x38d76e0();
   input += synapse0x38d7720();
   input += synapse0x38d7760();
   input += synapse0x38d77a0();
   input += synapse0x38d77e0();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38d6e50() {
   double input = input0x38d6e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38d7820() {
   double input = 1.1391;
   input += synapse0x38d7b60();
   input += synapse0x38d7ba0();
   input += synapse0x38d7be0();
   input += synapse0x38d7c20();
   input += synapse0x38d7c60();
   input += synapse0x38d7ca0();
   input += synapse0x38d7ce0();
   input += synapse0x38d7d20();
   input += synapse0x38d7d60();
   input += synapse0x38d7da0();
   input += synapse0x38d7de0();
   input += synapse0x38d7e20();
   input += synapse0x38d7e60();
   input += synapse0x38d7ea0();
   input += synapse0x38d7ee0();
   input += synapse0x38d7f20();
   input += synapse0x38d79b0();
   input += synapse0x38d79f0();
   input += synapse0x38d8070();
   input += synapse0x38d80b0();
   input += synapse0x38d80f0();
   input += synapse0x38d8130();
   input += synapse0x38d8170();
   input += synapse0x38d81b0();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38d7820() {
   double input = input0x38d7820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38d81f0() {
   double input = -0.285181;
   input += synapse0x38d8530();
   input += synapse0x38d8570();
   input += synapse0x38d85b0();
   input += synapse0x38d85f0();
   input += synapse0x38d8630();
   input += synapse0x38d8670();
   input += synapse0x38d86b0();
   input += synapse0x38d86f0();
   input += synapse0x38d8730();
   input += synapse0x38d8770();
   input += synapse0x38d87b0();
   input += synapse0x38d87f0();
   input += synapse0x38d8830();
   input += synapse0x38d8870();
   input += synapse0x38d88b0();
   input += synapse0x38d88f0();
   input += synapse0x38d8380();
   input += synapse0x38d83c0();
   input += synapse0x38d8a40();
   input += synapse0x38d8a80();
   input += synapse0x38d8ac0();
   input += synapse0x38d8b00();
   input += synapse0x38d8b40();
   input += synapse0x38d8b80();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38d81f0() {
   double input = input0x38d81f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38d8bc0() {
   double input = 0.413967;
   input += synapse0x38d8f00();
   input += synapse0x38d8f40();
   input += synapse0x38d8f80();
   input += synapse0x38d8fc0();
   input += synapse0x38d9000();
   input += synapse0x38d9040();
   input += synapse0x38d9080();
   input += synapse0x38d90c0();
   input += synapse0x38d9100();
   input += synapse0x38d9140();
   input += synapse0x38d9180();
   input += synapse0x38d91c0();
   input += synapse0x38d9200();
   input += synapse0x38d9240();
   input += synapse0x38d9280();
   input += synapse0x38d92c0();
   input += synapse0x38d8d50();
   input += synapse0x38d8d90();
   input += synapse0x38d9410();
   input += synapse0x38d9450();
   input += synapse0x38d9490();
   input += synapse0x38d94d0();
   input += synapse0x38d9510();
   input += synapse0x38d9550();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38d8bc0() {
   double input = input0x38d8bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38d9590() {
   double input = -2.50083;
   input += synapse0x38d98d0();
   input += synapse0x38d9910();
   input += synapse0x38d9950();
   input += synapse0x38d9990();
   input += synapse0x38d99d0();
   input += synapse0x38d9a10();
   input += synapse0x38d9a50();
   input += synapse0x38d9a90();
   input += synapse0x38d9ad0();
   input += synapse0x38d9b10();
   input += synapse0x38d9b50();
   input += synapse0x38d9b90();
   input += synapse0x38d9bd0();
   input += synapse0x38d9c10();
   input += synapse0x38d9c50();
   input += synapse0x38d9c90();
   input += synapse0x38d9720();
   input += synapse0x38d9760();
   input += synapse0x38d9de0();
   input += synapse0x38d9e20();
   input += synapse0x38d9e60();
   input += synapse0x38d9ea0();
   input += synapse0x38d9ee0();
   input += synapse0x38d9f20();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38d9590() {
   double input = input0x38d9590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38d9f60() {
   double input = -4.97212;
   input += synapse0x38da2a0();
   input += synapse0x38da2e0();
   input += synapse0x38da320();
   input += synapse0x38da360();
   input += synapse0x38da3a0();
   input += synapse0x38da3e0();
   input += synapse0x38da420();
   input += synapse0x38da460();
   input += synapse0x38da4a0();
   input += synapse0x38da4e0();
   input += synapse0x38da520();
   input += synapse0x38da560();
   input += synapse0x38da5a0();
   input += synapse0x38da5e0();
   input += synapse0x38da620();
   input += synapse0x38da660();
   input += synapse0x38da0f0();
   input += synapse0x38da130();
   input += synapse0x38da7b0();
   input += synapse0x38da7f0();
   input += synapse0x38da830();
   input += synapse0x38da870();
   input += synapse0x38da8b0();
   input += synapse0x38da8f0();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38d9f60() {
   double input = input0x38d9f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38da930() {
   double input = -1.86304;
   input += synapse0x38dac70();
   input += synapse0x38cf240();
   input += synapse0x38cf280();
   input += synapse0x38cf2c0();
   input += synapse0x38cf510();
   input += synapse0x38cf550();
   input += synapse0x38cf590();
   input += synapse0x38cf7e0();
   input += synapse0x38cf820();
   input += synapse0x38cfa70();
   input += synapse0x38cfab0();
   input += synapse0x38cfaf0();
   input += synapse0x38cfd40();
   input += synapse0x38cfd80();
   input += synapse0x38cffd0();
   input += synapse0x38d0010();
   input += synapse0x38daac0();
   input += synapse0x38dab00();
   input += synapse0x38d0160();
   input += synapse0x38d0670();
   input += synapse0x38d06b0();
   input += synapse0x38d06f0();
   input += synapse0x38d0940();
   input += synapse0x38d0980();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38da930() {
   double input = input0x38da930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38d09c0() {
   double input = -0.278162;
   input += synapse0x38d0230();
   input += synapse0x38d0270();
   input += synapse0x38d02b0();
   input += synapse0x38d02f0();
   input += synapse0x38d0c70();
   input += synapse0x38dcfc0();
   input += synapse0x38dd000();
   input += synapse0x38dd040();
   input += synapse0x38dd080();
   input += synapse0x38dd0c0();
   input += synapse0x38dd100();
   input += synapse0x38dd140();
   input += synapse0x38dd180();
   input += synapse0x38dd1c0();
   input += synapse0x38dd200();
   input += synapse0x38dd240();
   input += synapse0x38d0b50();
   input += synapse0x38d0b90();
   input += synapse0x38dd390();
   input += synapse0x38dd3d0();
   input += synapse0x38dd410();
   input += synapse0x38dd450();
   input += synapse0x38dd490();
   input += synapse0x38dd4d0();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38d09c0() {
   double input = input0x38d09c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38dd510() {
   double input = 0.38252;
   input += synapse0x38dd850();
   input += synapse0x38dd890();
   input += synapse0x38dd8d0();
   input += synapse0x38dd910();
   input += synapse0x38dd950();
   input += synapse0x38dd990();
   input += synapse0x38dd9d0();
   input += synapse0x38dda10();
   input += synapse0x38dda50();
   input += synapse0x38dda90();
   input += synapse0x38ddad0();
   input += synapse0x38ddb10();
   input += synapse0x38ddb50();
   input += synapse0x38ddb90();
   input += synapse0x38ddbd0();
   input += synapse0x38ddc10();
   input += synapse0x38dd6a0();
   input += synapse0x38dd6e0();
   input += synapse0x38ddd60();
   input += synapse0x38ddda0();
   input += synapse0x38ddde0();
   input += synapse0x38dde20();
   input += synapse0x38dde60();
   input += synapse0x38ddea0();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38dd510() {
   double input = input0x38dd510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38ddee0() {
   double input = -1.72792;
   input += synapse0x38de220();
   input += synapse0x38de260();
   input += synapse0x38de2a0();
   input += synapse0x38de2e0();
   input += synapse0x38de320();
   input += synapse0x38de360();
   input += synapse0x38de3a0();
   input += synapse0x38de3e0();
   input += synapse0x38de420();
   input += synapse0x38de460();
   input += synapse0x38de4a0();
   input += synapse0x38de4e0();
   input += synapse0x38de520();
   input += synapse0x38de560();
   input += synapse0x38de5a0();
   input += synapse0x38de5e0();
   input += synapse0x38de070();
   input += synapse0x38de0b0();
   input += synapse0x38de730();
   input += synapse0x38de770();
   input += synapse0x38de7b0();
   input += synapse0x38de7f0();
   input += synapse0x38de830();
   input += synapse0x38de870();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38ddee0() {
   double input = input0x38ddee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38de8b0() {
   double input = -1.33893;
   input += synapse0x38debf0();
   input += synapse0x38dec30();
   input += synapse0x38dec70();
   input += synapse0x38decb0();
   input += synapse0x38decf0();
   input += synapse0x38ded30();
   input += synapse0x38ded70();
   input += synapse0x38dedb0();
   input += synapse0x38dedf0();
   input += synapse0x38dee30();
   input += synapse0x38dee70();
   input += synapse0x38deeb0();
   input += synapse0x38deef0();
   input += synapse0x38def30();
   input += synapse0x38def70();
   input += synapse0x38defb0();
   input += synapse0x38dea40();
   input += synapse0x38dea80();
   input += synapse0x38df100();
   input += synapse0x38df140();
   input += synapse0x38df180();
   input += synapse0x38df1c0();
   input += synapse0x38df200();
   input += synapse0x38df240();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38de8b0() {
   double input = input0x38de8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38df280() {
   double input = 0.975699;
   input += synapse0x38df5c0();
   input += synapse0x38df600();
   input += synapse0x38df640();
   input += synapse0x38df680();
   input += synapse0x38df6c0();
   input += synapse0x38df700();
   input += synapse0x38df740();
   input += synapse0x38df780();
   input += synapse0x38df7c0();
   input += synapse0x38df800();
   input += synapse0x38df840();
   input += synapse0x38df880();
   input += synapse0x38df8c0();
   input += synapse0x38df900();
   input += synapse0x38df940();
   input += synapse0x38df980();
   input += synapse0x38df410();
   input += synapse0x38df450();
   input += synapse0x38dfad0();
   input += synapse0x38dfb10();
   input += synapse0x38dfb50();
   input += synapse0x38dfb90();
   input += synapse0x38dfbd0();
   input += synapse0x38dfc10();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38df280() {
   double input = input0x38df280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38dfc50() {
   double input = 0.792446;
   input += synapse0x38dff90();
   input += synapse0x38dffd0();
   input += synapse0x38e0010();
   input += synapse0x38e0050();
   input += synapse0x38e0090();
   input += synapse0x38e00d0();
   input += synapse0x38e0110();
   input += synapse0x38e0150();
   input += synapse0x38e0190();
   input += synapse0x38e01d0();
   input += synapse0x38e0210();
   input += synapse0x38e0250();
   input += synapse0x38e0290();
   input += synapse0x38e02d0();
   input += synapse0x38e0310();
   input += synapse0x38e0350();
   input += synapse0x38dfde0();
   input += synapse0x38dfe20();
   input += synapse0x38e04a0();
   input += synapse0x38e04e0();
   input += synapse0x38e0520();
   input += synapse0x38e0560();
   input += synapse0x38e05a0();
   input += synapse0x38e05e0();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38dfc50() {
   double input = input0x38dfc50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38e0620() {
   double input = -3.71783;
   input += synapse0x38e0960();
   input += synapse0x38e09a0();
   input += synapse0x38e09e0();
   input += synapse0x38e0a20();
   input += synapse0x38e0a60();
   input += synapse0x38e0aa0();
   input += synapse0x38e0ae0();
   input += synapse0x38e0b20();
   input += synapse0x38e0b60();
   input += synapse0x38e0ba0();
   input += synapse0x38e0be0();
   input += synapse0x38e0c20();
   input += synapse0x38e0c60();
   input += synapse0x38e0ca0();
   input += synapse0x38e0ce0();
   input += synapse0x38e0d20();
   input += synapse0x38e07b0();
   input += synapse0x38e07f0();
   input += synapse0x38e0e70();
   input += synapse0x38e0eb0();
   input += synapse0x38e0ef0();
   input += synapse0x38e0f30();
   input += synapse0x38e0f70();
   input += synapse0x38e0fb0();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38e0620() {
   double input = input0x38e0620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38e0ff0() {
   double input = -0.558447;
   input += synapse0x38e1330();
   input += synapse0x38e1370();
   input += synapse0x38e13b0();
   input += synapse0x38e13f0();
   input += synapse0x38e1430();
   input += synapse0x38e1470();
   input += synapse0x38e14b0();
   input += synapse0x38e14f0();
   input += synapse0x38e1530();
   input += synapse0x38e1570();
   input += synapse0x38e15b0();
   input += synapse0x38e15f0();
   input += synapse0x38e1630();
   input += synapse0x38e1670();
   input += synapse0x38e16b0();
   input += synapse0x38e16f0();
   input += synapse0x38e1180();
   input += synapse0x38e11c0();
   input += synapse0x38e1840();
   input += synapse0x38e1880();
   input += synapse0x38e18c0();
   input += synapse0x38e1900();
   input += synapse0x38e1940();
   input += synapse0x38e1980();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38e0ff0() {
   double input = input0x38e0ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38e19c0() {
   double input = 0.321074;
   input += synapse0x38ca430();
   input += synapse0x38ca470();
   input += synapse0x38ca4b0();
   input += synapse0x38ca4f0();
   input += synapse0x38ca530();
   input += synapse0x38ca570();
   input += synapse0x38ca5b0();
   input += synapse0x38ca5f0();
   input += synapse0x38e2110();
   input += synapse0x38e2150();
   input += synapse0x38e2190();
   input += synapse0x38e21d0();
   input += synapse0x38e2210();
   input += synapse0x38e2250();
   input += synapse0x38e2290();
   input += synapse0x38e22d0();
   input += synapse0x38e1b50();
   input += synapse0x38e1b90();
   input += synapse0x38e2420();
   input += synapse0x38e2460();
   input += synapse0x38e24a0();
   input += synapse0x38e24e0();
   input += synapse0x38e2520();
   input += synapse0x38e2560();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38e19c0() {
   double input = input0x38e19c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38e25a0() {
   double input = -0.0387487;
   input += synapse0x38e28e0();
   input += synapse0x38e2920();
   input += synapse0x38e2960();
   input += synapse0x38e29a0();
   input += synapse0x38e29e0();
   input += synapse0x38e2a20();
   input += synapse0x38e2a60();
   input += synapse0x38e2aa0();
   input += synapse0x38e2ae0();
   input += synapse0x38e2b20();
   input += synapse0x38e2b60();
   input += synapse0x38e2ba0();
   input += synapse0x38e2be0();
   input += synapse0x38e2c20();
   input += synapse0x38e2c60();
   input += synapse0x38e2ca0();
   input += synapse0x38e2730();
   input += synapse0x38e2770();
   input += synapse0x38e2df0();
   input += synapse0x38e2e30();
   input += synapse0x38e2e70();
   input += synapse0x38e2eb0();
   input += synapse0x38e2ef0();
   input += synapse0x38e2f30();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38e25a0() {
   double input = input0x38e25a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38e2f70() {
   double input = -1.0937;
   input += synapse0x38e32b0();
   input += synapse0x38e32f0();
   input += synapse0x38e3330();
   input += synapse0x38e3370();
   input += synapse0x38e33b0();
   input += synapse0x38e33f0();
   input += synapse0x38e3430();
   input += synapse0x38e3470();
   input += synapse0x38e34b0();
   input += synapse0x38e34f0();
   input += synapse0x38e3530();
   input += synapse0x38e3570();
   input += synapse0x38e35b0();
   input += synapse0x38e35f0();
   input += synapse0x38e3630();
   input += synapse0x38e3670();
   input += synapse0x38e3100();
   input += synapse0x38e3140();
   input += synapse0x38d3c70();
   input += synapse0x38d3cb0();
   input += synapse0x38d3cf0();
   input += synapse0x38d3d30();
   input += synapse0x38d3d70();
   input += synapse0x38d3db0();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38e2f70() {
   double input = input0x38e2f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38d3df0() {
   double input = 2.4442;
   input += synapse0x38d4130();
   input += synapse0x38d4170();
   input += synapse0x38d41b0();
   input += synapse0x38d41f0();
   input += synapse0x38d4230();
   input += synapse0x38d4270();
   input += synapse0x38d42b0();
   input += synapse0x38d42f0();
   input += synapse0x38d4330();
   input += synapse0x38d4370();
   input += synapse0x38d43b0();
   input += synapse0x38d43f0();
   input += synapse0x38d4430();
   input += synapse0x38d4470();
   input += synapse0x38d44b0();
   input += synapse0x38d44f0();
   input += synapse0x38d3f80();
   input += synapse0x38d3fc0();
   input += synapse0x38d4640();
   input += synapse0x38d4680();
   input += synapse0x38d46c0();
   input += synapse0x38d4700();
   input += synapse0x38d4740();
   input += synapse0x38d4780();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38d3df0() {
   double input = input0x38d3df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38d47c0() {
   double input = -1.34342;
   input += synapse0x38d4b00();
   input += synapse0x38d4b40();
   input += synapse0x38d4b80();
   input += synapse0x38d4bc0();
   input += synapse0x38d4c00();
   input += synapse0x38d4c40();
   input += synapse0x38d4c80();
   input += synapse0x38d4cc0();
   input += synapse0x38d4d00();
   input += synapse0x38d4d40();
   input += synapse0x38d4d80();
   input += synapse0x38d4dc0();
   input += synapse0x38d4e00();
   input += synapse0x38d4e40();
   input += synapse0x38d4e80();
   input += synapse0x38d4ec0();
   input += synapse0x38d4950();
   input += synapse0x38d4990();
   input += synapse0x38d5010();
   input += synapse0x38d5050();
   input += synapse0x38d5090();
   input += synapse0x38d50d0();
   input += synapse0x38d5110();
   input += synapse0x38d5150();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38d47c0() {
   double input = input0x38d47c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38d5190() {
   double input = -3.75163;
   input += synapse0x38d54d0();
   input += synapse0x38d5510();
   input += synapse0x38d5550();
   input += synapse0x38d5590();
   input += synapse0x38d55d0();
   input += synapse0x38d5610();
   input += synapse0x38d5650();
   input += synapse0x38d5690();
   input += synapse0x38d56d0();
   input += synapse0x38d5710();
   input += synapse0x38d5750();
   input += synapse0x38d5790();
   input += synapse0x38d57d0();
   input += synapse0x38d5810();
   input += synapse0x38d5850();
   input += synapse0x38d5890();
   input += synapse0x38d5320();
   input += synapse0x38d5360();
   input += synapse0x38d59e0();
   input += synapse0x38d5a20();
   input += synapse0x38d5a60();
   input += synapse0x38d5aa0();
   input += synapse0x38d5ae0();
   input += synapse0x38d5b20();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38d5190() {
   double input = input0x38d5190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38e77d0() {
   double input = 0.13705;
   input += synapse0x38e79f0();
   input += synapse0x38e7a30();
   input += synapse0x38e7a70();
   input += synapse0x38e7ab0();
   input += synapse0x38e7af0();
   input += synapse0x38e7b30();
   input += synapse0x38e7b70();
   input += synapse0x38e7bb0();
   input += synapse0x38e7bf0();
   input += synapse0x38e7c30();
   input += synapse0x38e7c70();
   input += synapse0x38e7cb0();
   input += synapse0x38e7cf0();
   input += synapse0x38e7d30();
   input += synapse0x38e7d70();
   input += synapse0x38e7db0();
   input += synapse0x38d5b60();
   input += synapse0x38d5ba0();
   input += synapse0x38e7f00();
   input += synapse0x38e7f40();
   input += synapse0x38e7f80();
   input += synapse0x38e7fc0();
   input += synapse0x38e8000();
   input += synapse0x38e8040();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38e77d0() {
   double input = input0x38e77d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38e8080() {
   double input = -0.0322999;
   input += synapse0x38e83c0();
   input += synapse0x38e8400();
   input += synapse0x38e8440();
   input += synapse0x38e8480();
   input += synapse0x38e84c0();
   input += synapse0x38e8500();
   input += synapse0x38e8540();
   input += synapse0x38e8580();
   input += synapse0x38e85c0();
   input += synapse0x38e8600();
   input += synapse0x38e8640();
   input += synapse0x38e8680();
   input += synapse0x38e86c0();
   input += synapse0x38e8700();
   input += synapse0x38e8740();
   input += synapse0x38e8780();
   input += synapse0x38e8210();
   input += synapse0x38e8250();
   input += synapse0x38e88d0();
   input += synapse0x38e8910();
   input += synapse0x38e8950();
   input += synapse0x38e8990();
   input += synapse0x38e89d0();
   input += synapse0x38e8a10();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38e8080() {
   double input = input0x38e8080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38e8a50() {
   double input = -0.434217;
   input += synapse0x38e8d90();
   input += synapse0x38e8dd0();
   input += synapse0x38e8e10();
   input += synapse0x38e8e50();
   input += synapse0x38e8e90();
   input += synapse0x38e8ed0();
   input += synapse0x38e8f10();
   input += synapse0x38e8f50();
   input += synapse0x38e8f90();
   input += synapse0x38e8fd0();
   input += synapse0x38e9010();
   input += synapse0x38e9050();
   input += synapse0x38e9090();
   input += synapse0x38e90d0();
   input += synapse0x38e9110();
   input += synapse0x38e9150();
   input += synapse0x38e8be0();
   input += synapse0x38e8c20();
   input += synapse0x38e92a0();
   input += synapse0x38e92e0();
   input += synapse0x38e9320();
   input += synapse0x38e9360();
   input += synapse0x38e93a0();
   input += synapse0x38e93e0();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38e8a50() {
   double input = input0x38e8a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38e9420() {
   double input = -1.24374;
   input += synapse0x38e9760();
   input += synapse0x38e97a0();
   input += synapse0x38e97e0();
   input += synapse0x38e9820();
   input += synapse0x38e9860();
   input += synapse0x38e98a0();
   input += synapse0x38e98e0();
   input += synapse0x38e9920();
   input += synapse0x38e9960();
   input += synapse0x38e99a0();
   input += synapse0x38e99e0();
   input += synapse0x38e9a20();
   input += synapse0x38e9a60();
   input += synapse0x38e9aa0();
   input += synapse0x38e9ae0();
   input += synapse0x38e9b20();
   input += synapse0x38e95b0();
   input += synapse0x38e95f0();
   input += synapse0x38e9c70();
   input += synapse0x38e9cb0();
   input += synapse0x38e9cf0();
   input += synapse0x38e9d30();
   input += synapse0x38e9d70();
   input += synapse0x38e9db0();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38e9420() {
   double input = input0x38e9420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38f0620() {
   double input = -0.825896;
   input += synapse0x3689bc0();
   input += synapse0x3689c00();
   input += synapse0x38c6750();
   input += synapse0x38c6790();
   input += synapse0x38c8230();
   input += synapse0x38c8270();
   input += synapse0x38c9000();
   input += synapse0x38c9040();
   input += synapse0x38c99d0();
   input += synapse0x38c9a10();
   input += synapse0x38ca3a0();
   input += synapse0x38ca3e0();
   input += synapse0x38cae80();
   input += synapse0x38caec0();
   input += synapse0x38cb850();
   input += synapse0x38cb890();
   input += synapse0x38c8930();
   input += synapse0x38c8970();
   input += synapse0x38cd400();
   input += synapse0x38cd440();
   input += synapse0x38cddd0();
   input += synapse0x38cde10();
   input += synapse0x38ce7a0();
   input += synapse0x38ce7e0();
   input += synapse0x38cf170();
   input += synapse0x38cf1b0();
   input += synapse0x38c2200();
   input += synapse0x38c2240();
   input += synapse0x38d1260();
   input += synapse0x38d12a0();
   input += synapse0x38d1c30();
   input += synapse0x38d1c70();
   input += synapse0x38d2600();
   input += synapse0x38d2640();
   input += synapse0x38d2fd0();
   input += synapse0x38d3010();
   input += synapse0x38d39a0();
   input += synapse0x38d39e0();
   input += synapse0x38cc4f0();
   input += synapse0x38cc530();
   input += synapse0x38d5da0();
   input += synapse0x38d5de0();
   input += synapse0x38d6730();
   input += synapse0x38d6770();
   input += synapse0x38d7100();
   input += synapse0x38d7140();
   input += synapse0x38d7ad0();
   input += synapse0x38d7b10();
   input += synapse0x38d84a0();
   input += synapse0x38d84e0();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38f0620() {
   double input = input0x38f0620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38f09c0() {
   double input = -0.781211;
   input += synapse0x38dabe0();
   input += synapse0x38dac20();
   input += synapse0x38d01a0();
   input += synapse0x38d01e0();
   input += synapse0x38dd7c0();
   input += synapse0x38dd800();
   input += synapse0x38de190();
   input += synapse0x38de1d0();
   input += synapse0x38deb60();
   input += synapse0x38deba0();
   input += synapse0x38df530();
   input += synapse0x38df570();
   input += synapse0x38dff00();
   input += synapse0x38dff40();
   input += synapse0x38e08d0();
   input += synapse0x38e0910();
   input += synapse0x38e12a0();
   input += synapse0x38e12e0();
   input += synapse0x38e1c70();
   input += synapse0x38e1cb0();
   input += synapse0x38e2850();
   input += synapse0x38e2890();
   input += synapse0x38e3220();
   input += synapse0x38e3260();
   input += synapse0x38d40a0();
   input += synapse0x38d40e0();
   input += synapse0x38d4a70();
   input += synapse0x38d4ab0();
   input += synapse0x38d5440();
   input += synapse0x38d5480();
   input += synapse0x38e7960();
   input += synapse0x38e79a0();
   input += synapse0x38e8330();
   input += synapse0x38e8370();
   input += synapse0x38e8d00();
   input += synapse0x38e8d40();
   input += synapse0x38e96d0();
   input += synapse0x38e9710();
   input += synapse0x38c4540();
   input += synapse0x38c4580();
   input += synapse0x38d8e70();
   input += synapse0x38d8eb0();
   input += synapse0x38e9df0();
   input += synapse0x38e9e30();
   input += synapse0x38e9e70();
   input += synapse0x38e9eb0();
   input += synapse0x38f0d60();
   input += synapse0x38f0da0();
   input += synapse0x38f0de0();
   input += synapse0x38f0e20();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38f09c0() {
   double input = input0x38f09c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38f0e60() {
   double input = 0.521187;
   input += synapse0x38f11a0();
   input += synapse0x38f11e0();
   input += synapse0x38f1220();
   input += synapse0x38f1260();
   input += synapse0x38f12a0();
   input += synapse0x38f12e0();
   input += synapse0x38f1320();
   input += synapse0x38f1360();
   input += synapse0x38f13a0();
   input += synapse0x38f13e0();
   input += synapse0x38f1420();
   input += synapse0x38f1460();
   input += synapse0x38f14a0();
   input += synapse0x38f14e0();
   input += synapse0x38f1520();
   input += synapse0x38f1560();
   input += synapse0x38f0ff0();
   input += synapse0x38f1030();
   input += synapse0x38f16b0();
   input += synapse0x38f16f0();
   input += synapse0x38f1730();
   input += synapse0x38f1770();
   input += synapse0x38f17b0();
   input += synapse0x38f17f0();
   input += synapse0x38f1830();
   input += synapse0x38f1870();
   input += synapse0x38f18b0();
   input += synapse0x38f18f0();
   input += synapse0x38f1930();
   input += synapse0x38f1970();
   input += synapse0x38f19b0();
   input += synapse0x38f19f0();
   input += synapse0x38f15a0();
   input += synapse0x38f15e0();
   input += synapse0x38f1620();
   input += synapse0x38f1660();
   input += synapse0x38f1c40();
   input += synapse0x38f1c80();
   input += synapse0x38f1cc0();
   input += synapse0x38f1d00();
   input += synapse0x38f1d40();
   input += synapse0x38f1d80();
   input += synapse0x38f1dc0();
   input += synapse0x38f1e00();
   input += synapse0x38f1e40();
   input += synapse0x38f1e80();
   input += synapse0x38f1ec0();
   input += synapse0x38f1f00();
   input += synapse0x38f1f40();
   input += synapse0x38f1f80();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38f0e60() {
   double input = input0x38f0e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38f1fc0() {
   double input = -0.370514;
   input += synapse0x38f2300();
   input += synapse0x38f2340();
   input += synapse0x38f2380();
   input += synapse0x38f23c0();
   input += synapse0x38f2400();
   input += synapse0x38f2440();
   input += synapse0x38f2480();
   input += synapse0x38f24c0();
   input += synapse0x38f2500();
   input += synapse0x38f2540();
   input += synapse0x38f2580();
   input += synapse0x38f25c0();
   input += synapse0x38f2600();
   input += synapse0x38f2640();
   input += synapse0x38f2680();
   input += synapse0x38f26c0();
   input += synapse0x38f2150();
   input += synapse0x38f2190();
   input += synapse0x38f2810();
   input += synapse0x38f2850();
   input += synapse0x38f2890();
   input += synapse0x38f28d0();
   input += synapse0x38f2910();
   input += synapse0x38f2950();
   input += synapse0x38f2990();
   input += synapse0x38f29d0();
   input += synapse0x38f2a10();
   input += synapse0x38f2a50();
   input += synapse0x38f2a90();
   input += synapse0x38f2ad0();
   input += synapse0x38f2b10();
   input += synapse0x38f2b50();
   input += synapse0x38f2700();
   input += synapse0x38f2740();
   input += synapse0x38f2780();
   input += synapse0x38f27c0();
   input += synapse0x38f2da0();
   input += synapse0x38f2de0();
   input += synapse0x38f2e20();
   input += synapse0x38f2e60();
   input += synapse0x38f2ea0();
   input += synapse0x38f2ee0();
   input += synapse0x38f2f20();
   input += synapse0x38f2f60();
   input += synapse0x38f2fa0();
   input += synapse0x38f2fe0();
   input += synapse0x38f3020();
   input += synapse0x38f3060();
   input += synapse0x38f30a0();
   input += synapse0x38f30e0();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38f1fc0() {
   double input = input0x38f1fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38f3120() {
   double input = 0.132426;
   input += synapse0x38f3460();
   input += synapse0x38f34a0();
   input += synapse0x38f34e0();
   input += synapse0x38f3520();
   input += synapse0x38f3560();
   input += synapse0x38f35a0();
   input += synapse0x38f35e0();
   input += synapse0x38f3620();
   input += synapse0x38f3660();
   input += synapse0x38f36a0();
   input += synapse0x38f36e0();
   input += synapse0x38f3720();
   input += synapse0x38f3760();
   input += synapse0x38f37a0();
   input += synapse0x38f37e0();
   input += synapse0x38f3820();
   input += synapse0x38f32b0();
   input += synapse0x38f32f0();
   input += synapse0x38f3970();
   input += synapse0x38f39b0();
   input += synapse0x38f39f0();
   input += synapse0x38f3a30();
   input += synapse0x38f3a70();
   input += synapse0x38f3ab0();
   input += synapse0x38f3af0();
   input += synapse0x38f3b30();
   input += synapse0x38f3b70();
   input += synapse0x38f3bb0();
   input += synapse0x38f3bf0();
   input += synapse0x38f3c30();
   input += synapse0x38f3c70();
   input += synapse0x38f3cb0();
   input += synapse0x38f3860();
   input += synapse0x38f38a0();
   input += synapse0x38f38e0();
   input += synapse0x38f3920();
   input += synapse0x38f3f00();
   input += synapse0x38f3f40();
   input += synapse0x38f3f80();
   input += synapse0x38f3fc0();
   input += synapse0x38f4000();
   input += synapse0x38f4040();
   input += synapse0x38f4080();
   input += synapse0x38f40c0();
   input += synapse0x38f4100();
   input += synapse0x38f4140();
   input += synapse0x38f4180();
   input += synapse0x38f41c0();
   input += synapse0x38f4200();
   input += synapse0x38f4240();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38f3120() {
   double input = input0x38f3120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::input0x38f4280() {
   double input = 3.17528;
   input += synapse0x38f44a0();
   input += synapse0x38f44e0();
   input += synapse0x38f4520();
   input += synapse0x38f4560();
   input += synapse0x38f45a0();
   return input;
}

double NNfunction_ns_chiMinus1_uL::neuron0x38f4280() {
   double input = input0x38f4280();
   return (input * 1)+0;
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c45d0() {
   return (neuron0x38bf2f0()*-0.202698);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4610() {
   return (neuron0x38bf5a0()*0.196342);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4650() {
   return (neuron0x38bf8e0()*-0.270085);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4690() {
   return (neuron0x38bfc20()*0.21426);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c46d0() {
   return (neuron0x38bff60()*0.0724528);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4710() {
   return (neuron0x38c02a0()*-0.173853);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4750() {
   return (neuron0x38c05e0()*-0.0358124);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4790() {
   return (neuron0x38c0920()*0.305728);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c47d0() {
   return (neuron0x38c0c60()*0.135196);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4810() {
   return (neuron0x38c0fa0()*0.148535);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4850() {
   return (neuron0x38c12e0()*0.284424);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4890() {
   return (neuron0x38c1620()*0.526987);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c48d0() {
   return (neuron0x38c1960()*0.0273315);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4910() {
   return (neuron0x38c1ca0()*0.169751);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4950() {
   return (neuron0x38c1fe0()*-0.121423);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4990() {
   return (neuron0x38c2320()*-0.0803044);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4420() {
   return (neuron0x38c2660()*0.776433);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4460() {
   return (neuron0x38c2bc0()*0.267599);
}

double NNfunction_ns_chiMinus1_uL::synapse0x27e0d50() {
   return (neuron0x38c2de0()*0.464372);
}

double NNfunction_ns_chiMinus1_uL::synapse0x27e0d90() {
   return (neuron0x38c3120()*-0.0259602);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4ae0() {
   return (neuron0x38c3460()*0.0825563);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4b20() {
   return (neuron0x38c37a0()*-0.0187338);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4b60() {
   return (neuron0x38c3ae0()*-0.259946);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4ba0() {
   return (neuron0x38c3e20()*-0.322544);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4f20() {
   return (neuron0x38bf2f0()*-0.480752);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4f60() {
   return (neuron0x38bf5a0()*-0.0447712);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4fa0() {
   return (neuron0x38bf8e0()*-0.442862);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4fe0() {
   return (neuron0x38bfc20()*-0.247514);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5020() {
   return (neuron0x38bff60()*-0.486893);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5060() {
   return (neuron0x38c02a0()*0.694325);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c50a0() {
   return (neuron0x38c05e0()*0.566714);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c50e0() {
   return (neuron0x38c0920()*0.313443);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5120() {
   return (neuron0x38c0c60()*-0.331373);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c49d0() {
   return (neuron0x38c0fa0()*0.371801);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4a10() {
   return (neuron0x38c12e0()*0.410342);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4a50() {
   return (neuron0x38c1620()*0.164283);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4a90() {
   return (neuron0x38c1960()*0.0172311);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5370() {
   return (neuron0x38c1ca0()*0.0951111);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c53b0() {
   return (neuron0x38c1fe0()*-0.212885);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c53f0() {
   return (neuron0x38c2320()*-0.0526403);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4d70() {
   return (neuron0x38c2660()*-0.120001);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4db0() {
   return (neuron0x38c2bc0()*-0.487094);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5540() {
   return (neuron0x38c2de0()*0.359635);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5580() {
   return (neuron0x38c3120()*0.295734);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c55c0() {
   return (neuron0x38c3460()*-0.448445);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5600() {
   return (neuron0x38c37a0()*0.294144);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5640() {
   return (neuron0x38c3ae0()*0.169749);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5680() {
   return (neuron0x38c3e20()*0.303906);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5a00() {
   return (neuron0x38bf2f0()*-0.0923153);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5a40() {
   return (neuron0x38bf5a0()*0.0170928);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5a80() {
   return (neuron0x38bf8e0()*-3.04863);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5ac0() {
   return (neuron0x38bfc20()*0.0241613);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5b00() {
   return (neuron0x38bff60()*-0.0144151);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5b40() {
   return (neuron0x38c02a0()*-0.0115087);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5b80() {
   return (neuron0x38c05e0()*0.00301431);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5bc0() {
   return (neuron0x38c0920()*-0.0233847);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5c00() {
   return (neuron0x38c0c60()*-0.0183859);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5c40() {
   return (neuron0x38c0fa0()*0.00563182);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5c80() {
   return (neuron0x38c12e0()*0.00031361);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5cc0() {
   return (neuron0x38c1620()*-0.190296);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5d00() {
   return (neuron0x38c1960()*-0.0254088);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5d40() {
   return (neuron0x38c1ca0()*0.021498);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5d80() {
   return (neuron0x38c1fe0()*-0.0328306);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5dc0() {
   return (neuron0x38c2320()*-0.00838752);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5850() {
   return (neuron0x38c2660()*0.0184503);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5890() {
   return (neuron0x38c2bc0()*-0.0206436);
}

double NNfunction_ns_chiMinus1_uL::synapse0x27cf9c0() {
   return (neuron0x38c2de0()*0.000645374);
}

double NNfunction_ns_chiMinus1_uL::synapse0x36893d0() {
   return (neuron0x38c3120()*-0.00753871);
}

double NNfunction_ns_chiMinus1_uL::synapse0x3689410() {
   return (neuron0x38c3460()*-0.0242276);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c7d00() {
   return (neuron0x38c37a0()*0.00762036);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c7d40() {
   return (neuron0x38c3ae0()*-0.00440273);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38bf030() {
   return (neuron0x38c3e20()*-4.02304);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38bf100() {
   return (neuron0x38bf2f0()*0.0618679);
}

double NNfunction_ns_chiMinus1_uL::synapse0x3689c50() {
   return (neuron0x38bf5a0()*0.0393086);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c52f0() {
   return (neuron0x38bf8e0()*-0.441299);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5330() {
   return (neuron0x38bfc20()*0.778836);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5f10() {
   return (neuron0x38bff60()*0.0475165);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5f50() {
   return (neuron0x38c02a0()*0.007637);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5f90() {
   return (neuron0x38c05e0()*0.0617499);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c5fd0() {
   return (neuron0x38c0920()*0.00265764);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6010() {
   return (neuron0x38c0c60()*0.0581509);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6050() {
   return (neuron0x38c0fa0()*-0.0456359);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6090() {
   return (neuron0x38c12e0()*-0.0453854);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c60d0() {
   return (neuron0x38c1620()*-0.558961);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6110() {
   return (neuron0x38c1960()*-0.290126);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6150() {
   return (neuron0x38c1ca0()*0.382053);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6190() {
   return (neuron0x38c1fe0()*-0.019267);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c61d0() {
   return (neuron0x38c2320()*-0.115126);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38bf070() {
   return (neuron0x38c2660()*0.468866);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38bf0b0() {
   return (neuron0x38c2bc0()*-0.144912);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6320() {
   return (neuron0x38c2de0()*-0.17164);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6360() {
   return (neuron0x38c3120()*-0.101266);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c63a0() {
   return (neuron0x38c3460()*-0.16144);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c63e0() {
   return (neuron0x38c37a0()*-0.029417);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6420() {
   return (neuron0x38c3ae0()*0.0647379);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6460() {
   return (neuron0x38c3e20()*-0.0904958);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c67e0() {
   return (neuron0x38bf2f0()*0.0255982);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6820() {
   return (neuron0x38bf5a0()*0.00434954);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6860() {
   return (neuron0x38bf8e0()*0.444907);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c68a0() {
   return (neuron0x38bfc20()*0.0382121);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c68e0() {
   return (neuron0x38bff60()*0.0074621);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6920() {
   return (neuron0x38c02a0()*0.00085213);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6960() {
   return (neuron0x38c05e0()*0.0087498);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c69a0() {
   return (neuron0x38c0920()*0.00341936);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c69e0() {
   return (neuron0x38c0c60()*-0.0100358);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6a20() {
   return (neuron0x38c0fa0()*-0.0104266);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6a60() {
   return (neuron0x38c12e0()*-0.019593);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6aa0() {
   return (neuron0x38c1620()*-0.103311);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6ae0() {
   return (neuron0x38c1960()*0.0227959);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6b20() {
   return (neuron0x38c1ca0()*0.0140834);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6b60() {
   return (neuron0x38c1fe0()*-0.00565341);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6ba0() {
   return (neuron0x38c2320()*-0.0054651);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6cf0() {
   return (neuron0x38c2660()*0.0265329);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6630() {
   return (neuron0x38c2bc0()*0.00731512);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6670() {
   return (neuron0x38c2de0()*-0.0050554);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c7e40() {
   return (neuron0x38c3120()*0.00636592);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c7e80() {
   return (neuron0x38c3460()*-0.00582749);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c7ec0() {
   return (neuron0x38c37a0()*0.00136052);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c7f00() {
   return (neuron0x38c3ae0()*0.0101749);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c7f40() {
   return (neuron0x38c3e20()*7.6923);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c82c0() {
   return (neuron0x38bf2f0()*-0.0946871);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8300() {
   return (neuron0x38bf5a0()*0.0606519);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8340() {
   return (neuron0x38bf8e0()*0.308352);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8380() {
   return (neuron0x38bfc20()*-0.0292491);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c83c0() {
   return (neuron0x38bff60()*0.298635);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8400() {
   return (neuron0x38c02a0()*-0.0296077);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8440() {
   return (neuron0x38c05e0()*0.124866);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8480() {
   return (neuron0x38c0920()*0.19224);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c84c0() {
   return (neuron0x38c0c60()*0.126181);
}

double NNfunction_ns_chiMinus1_uL::synapse0x3689720() {
   return (neuron0x38c0fa0()*-0.00532597);
}

double NNfunction_ns_chiMinus1_uL::synapse0x3689760() {
   return (neuron0x38c12e0()*-0.0984154);
}

double NNfunction_ns_chiMinus1_uL::synapse0x36897a0() {
   return (neuron0x38c1620()*0.397801);
}

double NNfunction_ns_chiMinus1_uL::synapse0x36897e0() {
   return (neuron0x38c1960()*0.262576);
}

double NNfunction_ns_chiMinus1_uL::synapse0x3689820() {
   return (neuron0x38c1ca0()*0.0412756);
}

double NNfunction_ns_chiMinus1_uL::synapse0x3689860() {
   return (neuron0x38c1fe0()*-0.0698924);
}

double NNfunction_ns_chiMinus1_uL::synapse0x36898a0() {
   return (neuron0x38c2320()*-0.774732);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8110() {
   return (neuron0x38c2660()*0.0561491);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8150() {
   return (neuron0x38c2bc0()*0.120279);
}

double NNfunction_ns_chiMinus1_uL::synapse0x36899f0() {
   return (neuron0x38c2de0()*0.0549533);
}

double NNfunction_ns_chiMinus1_uL::synapse0x3689a30() {
   return (neuron0x38c3120()*-0.0125462);
}

double NNfunction_ns_chiMinus1_uL::synapse0x3689a70() {
   return (neuron0x38c3460()*-0.0616823);
}

double NNfunction_ns_chiMinus1_uL::synapse0x3689ab0() {
   return (neuron0x38c37a0()*-0.109314);
}

double NNfunction_ns_chiMinus1_uL::synapse0x3689af0() {
   return (neuron0x38c3ae0()*-0.0714283);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8d10() {
   return (neuron0x38c3e20()*-0.293857);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9090() {
   return (neuron0x38bf2f0()*-0.325726);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c90d0() {
   return (neuron0x38bf5a0()*-0.415706);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9110() {
   return (neuron0x38bf8e0()*0.163046);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9150() {
   return (neuron0x38bfc20()*0.183653);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9190() {
   return (neuron0x38bff60()*0.0979937);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c91d0() {
   return (neuron0x38c02a0()*0.0709541);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9210() {
   return (neuron0x38c05e0()*0.246032);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9250() {
   return (neuron0x38c0920()*-0.263734);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9290() {
   return (neuron0x38c0c60()*0.107341);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c92d0() {
   return (neuron0x38c0fa0()*-0.192395);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9310() {
   return (neuron0x38c12e0()*-0.0882512);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9350() {
   return (neuron0x38c1620()*0.55382);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9390() {
   return (neuron0x38c1960()*0.198042);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c93d0() {
   return (neuron0x38c1ca0()*0.200886);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9410() {
   return (neuron0x38c1fe0()*0.0225685);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9450() {
   return (neuron0x38c2320()*0.303293);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8ee0() {
   return (neuron0x38c2660()*0.15207);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8f20() {
   return (neuron0x38c2bc0()*-0.0593809);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c95a0() {
   return (neuron0x38c2de0()*0.36272);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c95e0() {
   return (neuron0x38c3120()*0.0478251);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9620() {
   return (neuron0x38c3460()*0.239862);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9660() {
   return (neuron0x38c37a0()*0.112457);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c96a0() {
   return (neuron0x38c3ae0()*-0.101684);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c96e0() {
   return (neuron0x38c3e20()*-0.285798);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9a60() {
   return (neuron0x38bf2f0()*0.21751);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9aa0() {
   return (neuron0x38bf5a0()*-0.335125);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9ae0() {
   return (neuron0x38bf8e0()*0.184649);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9b20() {
   return (neuron0x38bfc20()*-0.0387006);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9b60() {
   return (neuron0x38bff60()*-0.254617);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9ba0() {
   return (neuron0x38c02a0()*0.344573);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9be0() {
   return (neuron0x38c05e0()*-0.673219);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9c20() {
   return (neuron0x38c0920()*-0.453333);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9c60() {
   return (neuron0x38c0c60()*0.133067);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9ca0() {
   return (neuron0x38c0fa0()*0.035869);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9ce0() {
   return (neuron0x38c12e0()*-0.0119899);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9d20() {
   return (neuron0x38c1620()*-0.802215);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9d60() {
   return (neuron0x38c1960()*-0.0232081);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9da0() {
   return (neuron0x38c1ca0()*-0.184157);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9de0() {
   return (neuron0x38c1fe0()*0.315369);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9e20() {
   return (neuron0x38c2320()*-0.400612);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c98b0() {
   return (neuron0x38c2660()*0.0527473);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c98f0() {
   return (neuron0x38c2bc0()*-0.137432);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9f70() {
   return (neuron0x38c2de0()*-0.166807);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9fb0() {
   return (neuron0x38c3120()*-0.0854384);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9ff0() {
   return (neuron0x38c3460()*-0.173186);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca030() {
   return (neuron0x38c37a0()*0.0923434);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca070() {
   return (neuron0x38c3ae0()*0.18741);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca0b0() {
   return (neuron0x38c3e20()*-0.0102235);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c2ab0() {
   return (neuron0x38bf2f0()*-0.0680947);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c2af0() {
   return (neuron0x38bf5a0()*-0.00823587);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c2b30() {
   return (neuron0x38bf8e0()*-4.65153);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c2b70() {
   return (neuron0x38bfc20()*0.0477265);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca640() {
   return (neuron0x38bff60()*-0.0228964);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca680() {
   return (neuron0x38c02a0()*-0.00195933);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca6c0() {
   return (neuron0x38c05e0()*-0.0144841);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca700() {
   return (neuron0x38c0920()*-0.0127609);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca740() {
   return (neuron0x38c0c60()*0.0092513);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca780() {
   return (neuron0x38c0fa0()*-0.0114851);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca7c0() {
   return (neuron0x38c12e0()*-0.00841671);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca800() {
   return (neuron0x38c1620()*0.230476);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca840() {
   return (neuron0x38c1960()*-0.00796062);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca880() {
   return (neuron0x38c1ca0()*-0.0112031);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca8c0() {
   return (neuron0x38c1fe0()*0.0151634);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca900() {
   return (neuron0x38c2320()*-0.000108896);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca280() {
   return (neuron0x38c2660()*-0.00445195);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca2c0() {
   return (neuron0x38c2bc0()*-0.00209055);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38caa50() {
   return (neuron0x38c2de0()*0.0121332);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38caa90() {
   return (neuron0x38c3120()*-0.0105387);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38caad0() {
   return (neuron0x38c3460()*-0.0274075);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cab10() {
   return (neuron0x38c37a0()*-0.0102315);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cab50() {
   return (neuron0x38c3ae0()*0.00605983);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cab90() {
   return (neuron0x38c3e20()*6.09856);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38caf10() {
   return (neuron0x38bf2f0()*-0.102399);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38caf50() {
   return (neuron0x38bf5a0()*-0.0081312);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38caf90() {
   return (neuron0x38bf8e0()*-0.303739);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cafd0() {
   return (neuron0x38bfc20()*-0.0336525);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb010() {
   return (neuron0x38bff60()*-0.0104223);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb050() {
   return (neuron0x38c02a0()*0.00563002);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb090() {
   return (neuron0x38c05e0()*-0.0100024);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb0d0() {
   return (neuron0x38c0920()*-0.0114263);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb110() {
   return (neuron0x38c0c60()*-0.0137609);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb150() {
   return (neuron0x38c0fa0()*-0.0012323);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb190() {
   return (neuron0x38c12e0()*-0.00820118);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb1d0() {
   return (neuron0x38c1620()*-1.18658);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb210() {
   return (neuron0x38c1960()*-0.038842);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb250() {
   return (neuron0x38c1ca0()*-0.0807622);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb290() {
   return (neuron0x38c1fe0()*-0.0113896);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb2d0() {
   return (neuron0x38c2320()*-0.0271523);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cad60() {
   return (neuron0x38c2660()*-0.0760378);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cada0() {
   return (neuron0x38c2bc0()*-0.050591);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb420() {
   return (neuron0x38c2de0()*0.00342311);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb460() {
   return (neuron0x38c3120()*-0.0400075);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb4a0() {
   return (neuron0x38c3460()*0.000799517);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb4e0() {
   return (neuron0x38c37a0()*-0.00431889);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb520() {
   return (neuron0x38c3ae0()*-0.0042759);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb560() {
   return (neuron0x38c3e20()*-0.656711);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb8e0() {
   return (neuron0x38bf2f0()*-0.0857459);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb920() {
   return (neuron0x38bf5a0()*-0.00178947);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb960() {
   return (neuron0x38bf8e0()*0.0826223);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb9a0() {
   return (neuron0x38bfc20()*-0.0314768);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb9e0() {
   return (neuron0x38bff60()*-0.00871216);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cba20() {
   return (neuron0x38c02a0()*0.0206479);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cba60() {
   return (neuron0x38c05e0()*-0.00666225);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cbaa0() {
   return (neuron0x38c0920()*-0.00894255);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cbae0() {
   return (neuron0x38c0c60()*-0.0137436);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cbb20() {
   return (neuron0x38c0fa0()*-0.00781476);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cbb60() {
   return (neuron0x38c12e0()*-0.000198058);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cbba0() {
   return (neuron0x38c1620()*-1.1671);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cbbe0() {
   return (neuron0x38c1960()*-0.0471519);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cbc20() {
   return (neuron0x38c1ca0()*-0.104563);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cbc60() {
   return (neuron0x38c1fe0()*-0.00689356);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cbca0() {
   return (neuron0x38c2320()*-0.0306454);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb730() {
   return (neuron0x38c2660()*-0.0955386);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb770() {
   return (neuron0x38c2bc0()*-0.0619575);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8500() {
   return (neuron0x38c2de0()*-0.0199019);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8540() {
   return (neuron0x38c3120()*-0.0476867);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8580() {
   return (neuron0x38c3460()*0.00587115);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c85c0() {
   return (neuron0x38c37a0()*-0.00211828);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8600() {
   return (neuron0x38c3ae0()*-0.0145553);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8640() {
   return (neuron0x38c3e20()*-0.580903);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c89c0() {
   return (neuron0x38bf2f0()*0.356567);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8a00() {
   return (neuron0x38bf5a0()*-0.175868);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8a40() {
   return (neuron0x38bf8e0()*0.214546);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8a80() {
   return (neuron0x38bfc20()*-0.0193076);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8ac0() {
   return (neuron0x38bff60()*-0.309156);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8b00() {
   return (neuron0x38c02a0()*-0.0293429);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8b40() {
   return (neuron0x38c05e0()*0.0866122);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8b80() {
   return (neuron0x38c0920()*0.0456449);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8bc0() {
   return (neuron0x38c0c60()*-0.0828901);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8c00() {
   return (neuron0x38c0fa0()*-0.484793);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8c40() {
   return (neuron0x38c12e0()*0.183823);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8c80() {
   return (neuron0x38c1620()*-0.334036);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8cc0() {
   return (neuron0x38c1960()*0.160195);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cce00() {
   return (neuron0x38c1ca0()*0.109075);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cce40() {
   return (neuron0x38c1fe0()*0.104162);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cce80() {
   return (neuron0x38c2320()*0.35737);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8810() {
   return (neuron0x38c2660()*-0.0185513);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8850() {
   return (neuron0x38c2bc0()*0.141496);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ccfd0() {
   return (neuron0x38c2de0()*0.0122079);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd010() {
   return (neuron0x38c3120()*0.0142789);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd050() {
   return (neuron0x38c3460()*0.253474);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd090() {
   return (neuron0x38c37a0()*0.053698);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd0d0() {
   return (neuron0x38c3ae0()*-0.403378);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd110() {
   return (neuron0x38c3e20()*-0.319963);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd490() {
   return (neuron0x38bf2f0()*0.0935396);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd4d0() {
   return (neuron0x38bf5a0()*0.0515631);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd510() {
   return (neuron0x38bf8e0()*-0.0926855);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd550() {
   return (neuron0x38bfc20()*0.572556);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd590() {
   return (neuron0x38bff60()*-0.677933);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd5d0() {
   return (neuron0x38c02a0()*-0.0636061);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd610() {
   return (neuron0x38c05e0()*0.650992);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd650() {
   return (neuron0x38c0920()*-0.549229);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd690() {
   return (neuron0x38c0c60()*0.0690515);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd6d0() {
   return (neuron0x38c0fa0()*-0.0522031);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd710() {
   return (neuron0x38c12e0()*0.0617807);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd750() {
   return (neuron0x38c1620()*-1.12523);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd790() {
   return (neuron0x38c1960()*0.14879);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd7d0() {
   return (neuron0x38c1ca0()*0.199937);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd810() {
   return (neuron0x38c1fe0()*0.182877);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd850() {
   return (neuron0x38c2320()*-0.387617);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd2e0() {
   return (neuron0x38c2660()*-0.00942454);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd320() {
   return (neuron0x38c2bc0()*-0.00538789);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd9a0() {
   return (neuron0x38c2de0()*-0.190488);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd9e0() {
   return (neuron0x38c3120()*-0.00154539);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cda20() {
   return (neuron0x38c3460()*0.103858);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cda60() {
   return (neuron0x38c37a0()*-0.0168999);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cdaa0() {
   return (neuron0x38c3ae0()*0.161293);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cdae0() {
   return (neuron0x38c3e20()*0.325399);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cde60() {
   return (neuron0x38bf2f0()*-0.119573);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cdea0() {
   return (neuron0x38bf5a0()*-0.00758231);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cdee0() {
   return (neuron0x38bf8e0()*-0.367946);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cdf20() {
   return (neuron0x38bfc20()*0.352333);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cdf60() {
   return (neuron0x38bff60()*-0.0303872);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cdfa0() {
   return (neuron0x38c02a0()*-0.0294543);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cdfe0() {
   return (neuron0x38c05e0()*-0.0641274);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce020() {
   return (neuron0x38c0920()*-0.0464157);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce060() {
   return (neuron0x38c0c60()*-0.0258562);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce0a0() {
   return (neuron0x38c0fa0()*-0.0266454);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce0e0() {
   return (neuron0x38c12e0()*-0.0137165);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce120() {
   return (neuron0x38c1620()*-0.118247);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce160() {
   return (neuron0x38c1960()*-0.0701996);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce1a0() {
   return (neuron0x38c1ca0()*0.037);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce1e0() {
   return (neuron0x38c1fe0()*-0.0933822);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce220() {
   return (neuron0x38c2320()*-0.125085);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cdcb0() {
   return (neuron0x38c2660()*0.00665092);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cdcf0() {
   return (neuron0x38c2bc0()*-0.00336137);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce370() {
   return (neuron0x38c2de0()*0.0500066);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce3b0() {
   return (neuron0x38c3120()*0.0234794);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce3f0() {
   return (neuron0x38c3460()*0.0208535);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce430() {
   return (neuron0x38c37a0()*0.014196);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce470() {
   return (neuron0x38c3ae0()*0.00449002);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce4b0() {
   return (neuron0x38c3e20()*0.104556);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce830() {
   return (neuron0x38bf2f0()*-0.00766538);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce870() {
   return (neuron0x38bf5a0()*-0.00913139);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce8b0() {
   return (neuron0x38bf8e0()*0.0915275);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce8f0() {
   return (neuron0x38bfc20()*3.70705);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce930() {
   return (neuron0x38bff60()*-0.00831643);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce970() {
   return (neuron0x38c02a0()*0.000430007);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce9b0() {
   return (neuron0x38c05e0()*0.0308961);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce9f0() {
   return (neuron0x38c0920()*-0.00371363);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cea30() {
   return (neuron0x38c0c60()*-0.00511319);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cea70() {
   return (neuron0x38c0fa0()*-0.023848);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ceab0() {
   return (neuron0x38c12e0()*-0.00290303);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ceaf0() {
   return (neuron0x38c1620()*0.283204);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ceb30() {
   return (neuron0x38c1960()*-0.0199411);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ceb70() {
   return (neuron0x38c1ca0()*0.0720658);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cebb0() {
   return (neuron0x38c1fe0()*0.00520786);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cebf0() {
   return (neuron0x38c2320()*0.0286953);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce680() {
   return (neuron0x38c2660()*0.0571092);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce6c0() {
   return (neuron0x38c2bc0()*-0.0230196);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ced40() {
   return (neuron0x38c2de0()*0.00213407);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ced80() {
   return (neuron0x38c3120()*-0.0105388);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cedc0() {
   return (neuron0x38c3460()*-0.00518686);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cee00() {
   return (neuron0x38c37a0()*0.00486707);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cee40() {
   return (neuron0x38c3ae0()*0.00301369);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cee80() {
   return (neuron0x38c3e20()*0.0265082);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cf200() {
   return (neuron0x38bf2f0()*-0.480903);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38bf480() {
   return (neuron0x38bf5a0()*0.017129);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38bf4c0() {
   return (neuron0x38bf8e0()*1.05096);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38bf7c0() {
   return (neuron0x38bfc20()*0.149348);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38bf800() {
   return (neuron0x38bff60()*0.0785229);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38bfb00() {
   return (neuron0x38c02a0()*0.193934);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38bfb40() {
   return (neuron0x38c05e0()*0.0773351);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38bfe40() {
   return (neuron0x38c0920()*0.100359);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38bfe80() {
   return (neuron0x38c0c60()*-0.040027);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c0180() {
   return (neuron0x38c0fa0()*0.054477);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c01c0() {
   return (neuron0x38c12e0()*0.0188924);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c04c0() {
   return (neuron0x38c1620()*0.0460226);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c0500() {
   return (neuron0x38c1960()*0.0805644);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c0800() {
   return (neuron0x38c1ca0()*-0.0991203);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c0840() {
   return (neuron0x38c1fe0()*0.0361232);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c0b40() {
   return (neuron0x38c2320()*-0.428205);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c0b80() {
   return (neuron0x38c2660()*-0.142744);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c0e80() {
   return (neuron0x38c2bc0()*0.25975);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c0ec0() {
   return (neuron0x38c2de0()*-0.0918312);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c11c0() {
   return (neuron0x38c3120()*0.0896011);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c1200() {
   return (neuron0x38c3460()*0.152674);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c1500() {
   return (neuron0x38c37a0()*-0.00211181);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c1540() {
   return (neuron0x38c3ae0()*0.00937578);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c1840() {
   return (neuron0x38c3e20()*-0.473333);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c1880() {
   return (neuron0x38bf2f0()*-0.013822);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c2540() {
   return (neuron0x38bf5a0()*0.0348363);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c2580() {
   return (neuron0x38bf8e0()*0.198366);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cf050() {
   return (neuron0x38bfc20()*-0.327778);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cf090() {
   return (neuron0x38bff60()*0.0539074);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c2880() {
   return (neuron0x38c02a0()*0.0117078);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c28c0() {
   return (neuron0x38c05e0()*-0.0282289);
}

double NNfunction_ns_chiMinus1_uL::synapse0x31d3370() {
   return (neuron0x38c0920()*0.00597045);
}

double NNfunction_ns_chiMinus1_uL::synapse0x31d33b0() {
   return (neuron0x38c0c60()*-0.511322);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c3000() {
   return (neuron0x38c0fa0()*0.373385);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c3040() {
   return (neuron0x38c12e0()*0.408504);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c3340() {
   return (neuron0x38c1620()*-0.692586);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c3380() {
   return (neuron0x38c1960()*0.0401311);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c3680() {
   return (neuron0x38c1ca0()*-0.0794269);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c36c0() {
   return (neuron0x38c1fe0()*-0.0439102);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c39c0() {
   return (neuron0x38c2320()*0.0861431);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c3a00() {
   return (neuron0x38c2660()*0.0289543);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c3d00() {
   return (neuron0x38c2bc0()*-0.0319005);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c3d40() {
   return (neuron0x38c2de0()*0.00271112);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4040() {
   return (neuron0x38c3120()*0.0245635);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4080() {
   return (neuron0x38c3460()*0.0940925);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c1b80() {
   return (neuron0x38c37a0()*0.0326664);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c1bc0() {
   return (neuron0x38c3ae0()*0.108554);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d0f70() {
   return (neuron0x38c3e20()*0.0955103);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d12f0() {
   return (neuron0x38bf2f0()*0.0406187);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1330() {
   return (neuron0x38bf5a0()*-0.184996);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1370() {
   return (neuron0x38bf8e0()*0.793921);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d13b0() {
   return (neuron0x38bfc20()*-0.275476);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d13f0() {
   return (neuron0x38bff60()*-0.589222);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1430() {
   return (neuron0x38c02a0()*-0.0078953);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1470() {
   return (neuron0x38c05e0()*-0.329548);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d14b0() {
   return (neuron0x38c0920()*-0.116586);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d14f0() {
   return (neuron0x38c0c60()*0.617725);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1530() {
   return (neuron0x38c0fa0()*-0.280736);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1570() {
   return (neuron0x38c12e0()*-0.26068);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d15b0() {
   return (neuron0x38c1620()*-0.424597);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d15f0() {
   return (neuron0x38c1960()*-0.116484);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1630() {
   return (neuron0x38c1ca0()*0.795613);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1670() {
   return (neuron0x38c1fe0()*0.403378);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d16b0() {
   return (neuron0x38c2320()*0.253102);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1140() {
   return (neuron0x38c2660()*-0.36406);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1180() {
   return (neuron0x38c2bc0()*0.139398);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1800() {
   return (neuron0x38c2de0()*0.200375);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1840() {
   return (neuron0x38c3120()*0.338379);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1880() {
   return (neuron0x38c3460()*0.164695);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d18c0() {
   return (neuron0x38c37a0()*-0.0435323);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1900() {
   return (neuron0x38c3ae0()*0.33371);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1940() {
   return (neuron0x38c3e20()*-0.0359502);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1cc0() {
   return (neuron0x38bf2f0()*-0.0233737);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1d00() {
   return (neuron0x38bf5a0()*-0.012657);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1d40() {
   return (neuron0x38bf8e0()*-0.951199);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1d80() {
   return (neuron0x38bfc20()*0.00779895);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1dc0() {
   return (neuron0x38bff60()*-0.0157541);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1e00() {
   return (neuron0x38c02a0()*0.00139406);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1e40() {
   return (neuron0x38c05e0()*-0.0153117);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1e80() {
   return (neuron0x38c0920()*-0.00564749);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1ec0() {
   return (neuron0x38c0c60()*-0.0100303);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1f00() {
   return (neuron0x38c0fa0()*-0.0136114);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1f40() {
   return (neuron0x38c12e0()*-0.00497178);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1f80() {
   return (neuron0x38c1620()*-0.0622161);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1fc0() {
   return (neuron0x38c1960()*-0.0412504);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2000() {
   return (neuron0x38c1ca0()*-0.0551257);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2040() {
   return (neuron0x38c1fe0()*0.00580053);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2080() {
   return (neuron0x38c2320()*-0.00441039);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1b10() {
   return (neuron0x38c2660()*-0.0552387);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1b50() {
   return (neuron0x38c2bc0()*-0.0284707);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d21d0() {
   return (neuron0x38c2de0()*-0.0150369);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2210() {
   return (neuron0x38c3120()*-0.0231658);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2250() {
   return (neuron0x38c3460()*-0.00289971);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2290() {
   return (neuron0x38c37a0()*-0.00788587);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d22d0() {
   return (neuron0x38c3ae0()*0.00621657);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2310() {
   return (neuron0x38c3e20()*-0.0240701);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2690() {
   return (neuron0x38bf2f0()*0.0551736);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d26d0() {
   return (neuron0x38bf5a0()*-0.0126036);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2710() {
   return (neuron0x38bf8e0()*-0.411793);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2750() {
   return (neuron0x38bfc20()*0.165121);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2790() {
   return (neuron0x38bff60()*0.38994);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d27d0() {
   return (neuron0x38c02a0()*0.177686);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2810() {
   return (neuron0x38c05e0()*0.277929);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2850() {
   return (neuron0x38c0920()*0.0178364);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2890() {
   return (neuron0x38c0c60()*0.0197231);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d28d0() {
   return (neuron0x38c0fa0()*0.089664);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2910() {
   return (neuron0x38c12e0()*-0.0551866);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2950() {
   return (neuron0x38c1620()*-0.663851);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2990() {
   return (neuron0x38c1960()*0.318009);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d29d0() {
   return (neuron0x38c1ca0()*-0.219189);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2a10() {
   return (neuron0x38c1fe0()*-0.261908);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2a50() {
   return (neuron0x38c2320()*0.15452);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d24e0() {
   return (neuron0x38c2660()*-0.394171);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2520() {
   return (neuron0x38c2bc0()*0.0762296);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2ba0() {
   return (neuron0x38c2de0()*0.106735);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2be0() {
   return (neuron0x38c3120()*0.110685);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2c20() {
   return (neuron0x38c3460()*-0.0258748);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2c60() {
   return (neuron0x38c37a0()*-0.0111566);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2ca0() {
   return (neuron0x38c3ae0()*0.0909012);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2ce0() {
   return (neuron0x38c3e20()*0.19535);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3060() {
   return (neuron0x38bf2f0()*-0.0261964);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d30a0() {
   return (neuron0x38bf5a0()*0.000998139);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d30e0() {
   return (neuron0x38bf8e0()*1.93154);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3120() {
   return (neuron0x38bfc20()*-0.0328336);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3160() {
   return (neuron0x38bff60()*0.0035193);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d31a0() {
   return (neuron0x38c02a0()*0.0143946);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d31e0() {
   return (neuron0x38c05e0()*0.0110282);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3220() {
   return (neuron0x38c0920()*0.00820897);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3260() {
   return (neuron0x38c0c60()*-0.0141842);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d32a0() {
   return (neuron0x38c0fa0()*0.00606723);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d32e0() {
   return (neuron0x38c12e0()*-0.00527195);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3320() {
   return (neuron0x38c1620()*-0.628662);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3360() {
   return (neuron0x38c1960()*0.00458593);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d33a0() {
   return (neuron0x38c1ca0()*0.00322169);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d33e0() {
   return (neuron0x38c1fe0()*0.00790398);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3420() {
   return (neuron0x38c2320()*0.0031029);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2eb0() {
   return (neuron0x38c2660()*0.00225987);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2ef0() {
   return (neuron0x38c2bc0()*-0.0148532);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3570() {
   return (neuron0x38c2de0()*-0.00188532);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d35b0() {
   return (neuron0x38c3120()*-0.00324889);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d35f0() {
   return (neuron0x38c3460()*-0.00694914);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3630() {
   return (neuron0x38c37a0()*0.00212281);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3670() {
   return (neuron0x38c3ae0()*-0.00824463);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d36b0() {
   return (neuron0x38c3e20()*-0.00729013);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3a30() {
   return (neuron0x38bf2f0()*0.0240214);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3a70() {
   return (neuron0x38bf5a0()*0.000264979);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3ab0() {
   return (neuron0x38bf8e0()*-0.134012);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3af0() {
   return (neuron0x38bfc20()*-0.011034);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3b30() {
   return (neuron0x38bff60()*-0.00198785);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3b70() {
   return (neuron0x38c02a0()*0.004775);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3bb0() {
   return (neuron0x38c05e0()*0.00252528);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3bf0() {
   return (neuron0x38c0920()*0.00670877);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3c30() {
   return (neuron0x38c0c60()*0.00661578);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cbdf0() {
   return (neuron0x38c0fa0()*-0.00680895);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cbe30() {
   return (neuron0x38c12e0()*-0.00363926);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cbe70() {
   return (neuron0x38c1620()*-0.0884656);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cbeb0() {
   return (neuron0x38c1960()*-0.0188788);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cbef0() {
   return (neuron0x38c1ca0()*-0.0193598);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cbf30() {
   return (neuron0x38c1fe0()*0.00742838);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cbf70() {
   return (neuron0x38c2320()*0.00445244);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3880() {
   return (neuron0x38c2660()*-0.00177292);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d38c0() {
   return (neuron0x38c2bc0()*-0.012205);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc0c0() {
   return (neuron0x38c2de0()*-0.00564361);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc100() {
   return (neuron0x38c3120()*-0.00454601);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc140() {
   return (neuron0x38c3460()*-0.00902036);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc180() {
   return (neuron0x38c37a0()*-0.00498394);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc1c0() {
   return (neuron0x38c3ae0()*-0.00282713);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc200() {
   return (neuron0x38c3e20()*2.11437);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc580() {
   return (neuron0x38bf2f0()*0.0050233);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc5c0() {
   return (neuron0x38bf5a0()*-0.0114717);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc600() {
   return (neuron0x38bf8e0()*0.479942);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc640() {
   return (neuron0x38bfc20()*-2.16369);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc680() {
   return (neuron0x38bff60()*-0.058469);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc6c0() {
   return (neuron0x38c02a0()*0.0354674);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc700() {
   return (neuron0x38c05e0()*0.0226152);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc740() {
   return (neuron0x38c0920()*-0.0887079);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc780() {
   return (neuron0x38c0c60()*0.0132438);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc7c0() {
   return (neuron0x38c0fa0()*0.0649112);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc800() {
   return (neuron0x38c12e0()*-0.0168115);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc840() {
   return (neuron0x38c1620()*0.432352);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc880() {
   return (neuron0x38c1960()*-0.041264);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc8c0() {
   return (neuron0x38c1ca0()*0.025085);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc900() {
   return (neuron0x38c1fe0()*0.0721991);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc940() {
   return (neuron0x38c2320()*-0.022542);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc3d0() {
   return (neuron0x38c2660()*0.0632314);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc410() {
   return (neuron0x38c2bc0()*-0.050548);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cca90() {
   return (neuron0x38c2de0()*0.0312423);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ccad0() {
   return (neuron0x38c3120()*-0.0469292);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ccb10() {
   return (neuron0x38c3460()*-0.026153);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ccb50() {
   return (neuron0x38c37a0()*-0.0423832);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ccb90() {
   return (neuron0x38c3ae0()*0.0419039);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ccbd0() {
   return (neuron0x38c3e20()*0.0294865);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ccda0() {
   return (neuron0x38bf2f0()*-0.0138535);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5e30() {
   return (neuron0x38bf5a0()*0.00858769);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5e70() {
   return (neuron0x38bf8e0()*-3.22915);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5eb0() {
   return (neuron0x38bfc20()*-0.00314898);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5ef0() {
   return (neuron0x38bff60()*-0.0115215);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5f30() {
   return (neuron0x38c02a0()*-0.00924901);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5f70() {
   return (neuron0x38c05e0()*-0.00255457);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5fb0() {
   return (neuron0x38c0920()*-0.0242552);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5ff0() {
   return (neuron0x38c0c60()*0.00400799);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6030() {
   return (neuron0x38c0fa0()*-0.00163807);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6070() {
   return (neuron0x38c12e0()*0.00598018);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d60b0() {
   return (neuron0x38c1620()*0.378522);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d60f0() {
   return (neuron0x38c1960()*-0.0484098);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6130() {
   return (neuron0x38c1ca0()*-0.0213576);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6170() {
   return (neuron0x38c1fe0()*-0.0397256);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d61b0() {
   return (neuron0x38c2320()*-0.0168913);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5c80() {
   return (neuron0x38c2660()*-0.0220217);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5cc0() {
   return (neuron0x38c2bc0()*-0.0316383);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6300() {
   return (neuron0x38c2de0()*-0.00615344);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6340() {
   return (neuron0x38c3120()*-0.0227687);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6380() {
   return (neuron0x38c3460()*0.00222117);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d63c0() {
   return (neuron0x38c37a0()*0.001231);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6400() {
   return (neuron0x38c3ae0()*-0.000903368);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6440() {
   return (neuron0x38c3e20()*-3.34042);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d67c0() {
   return (neuron0x38bf2f0()*-0.123512);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6800() {
   return (neuron0x38bf5a0()*0.124242);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6840() {
   return (neuron0x38bf8e0()*0.210207);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6880() {
   return (neuron0x38bfc20()*-0.225103);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d68c0() {
   return (neuron0x38bff60()*0.144133);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6900() {
   return (neuron0x38c02a0()*0.102368);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6940() {
   return (neuron0x38c05e0()*0.0773799);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6980() {
   return (neuron0x38c0920()*0.17941);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d69c0() {
   return (neuron0x38c0c60()*0.206257);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6a00() {
   return (neuron0x38c0fa0()*0.293923);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6a40() {
   return (neuron0x38c12e0()*-0.130406);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6a80() {
   return (neuron0x38c1620()*-0.792888);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6ac0() {
   return (neuron0x38c1960()*-0.0624907);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6b00() {
   return (neuron0x38c1ca0()*-0.247919);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6b40() {
   return (neuron0x38c1fe0()*0.115573);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6b80() {
   return (neuron0x38c2320()*-0.0613529);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6610() {
   return (neuron0x38c2660()*0.0182449);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6650() {
   return (neuron0x38c2bc0()*0.0588221);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6cd0() {
   return (neuron0x38c2de0()*-0.375501);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6d10() {
   return (neuron0x38c3120()*-0.0822306);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6d50() {
   return (neuron0x38c3460()*-0.150475);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6d90() {
   return (neuron0x38c37a0()*-0.0304971);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6dd0() {
   return (neuron0x38c3ae0()*0.202392);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6e10() {
   return (neuron0x38c3e20()*0.133268);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7190() {
   return (neuron0x38bf2f0()*-0.0074938);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d71d0() {
   return (neuron0x38bf5a0()*-0.00580305);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7210() {
   return (neuron0x38bf8e0()*0.0395432);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7250() {
   return (neuron0x38bfc20()*-3.16623);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7290() {
   return (neuron0x38bff60()*-0.00241441);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d72d0() {
   return (neuron0x38c02a0()*-0.00561889);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7310() {
   return (neuron0x38c05e0()*0.00117984);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7350() {
   return (neuron0x38c0920()*0.00710465);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7390() {
   return (neuron0x38c0c60()*0.00709631);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d73d0() {
   return (neuron0x38c0fa0()*-0.0116699);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7410() {
   return (neuron0x38c12e0()*-0.00137695);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7450() {
   return (neuron0x38c1620()*0.588639);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7490() {
   return (neuron0x38c1960()*-0.0073207);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d74d0() {
   return (neuron0x38c1ca0()*0.0412778);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7510() {
   return (neuron0x38c1fe0()*-0.0160119);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7550() {
   return (neuron0x38c2320()*0.0172859);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6fe0() {
   return (neuron0x38c2660()*0.0339858);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7020() {
   return (neuron0x38c2bc0()*-0.0046053);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d76a0() {
   return (neuron0x38c2de0()*-0.00269597);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d76e0() {
   return (neuron0x38c3120()*-0.00684833);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7720() {
   return (neuron0x38c3460()*-0.00255128);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7760() {
   return (neuron0x38c37a0()*0.0121046);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d77a0() {
   return (neuron0x38c3ae0()*-0.0081893);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d77e0() {
   return (neuron0x38c3e20()*-0.0211079);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7b60() {
   return (neuron0x38bf2f0()*-1.27255);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7ba0() {
   return (neuron0x38bf5a0()*0.00600214);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7be0() {
   return (neuron0x38bf8e0()*0.0291966);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7c20() {
   return (neuron0x38bfc20()*0.0335735);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7c60() {
   return (neuron0x38bff60()*-0.038732);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7ca0() {
   return (neuron0x38c02a0()*0.047532);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7ce0() {
   return (neuron0x38c05e0()*-0.0355956);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7d20() {
   return (neuron0x38c0920()*-0.0788751);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7d60() {
   return (neuron0x38c0c60()*0.0258022);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7da0() {
   return (neuron0x38c0fa0()*0.0645052);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7de0() {
   return (neuron0x38c12e0()*-0.0618461);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7e20() {
   return (neuron0x38c1620()*0.08825);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7e60() {
   return (neuron0x38c1960()*0.0733181);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7ea0() {
   return (neuron0x38c1ca0()*0.14725);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7ee0() {
   return (neuron0x38c1fe0()*0.0657045);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7f20() {
   return (neuron0x38c2320()*0.00903489);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d79b0() {
   return (neuron0x38c2660()*0.0589009);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d79f0() {
   return (neuron0x38c2bc0()*-0.0127557);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8070() {
   return (neuron0x38c2de0()*0.0927303);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d80b0() {
   return (neuron0x38c3120()*0.103513);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d80f0() {
   return (neuron0x38c3460()*-0.0277722);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8130() {
   return (neuron0x38c37a0()*0.0277017);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8170() {
   return (neuron0x38c3ae0()*0.12079);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d81b0() {
   return (neuron0x38c3e20()*-0.902634);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8530() {
   return (neuron0x38bf2f0()*-0.165439);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8570() {
   return (neuron0x38bf5a0()*-0.00444734);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d85b0() {
   return (neuron0x38bf8e0()*-0.0212895);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d85f0() {
   return (neuron0x38bfc20()*-0.0488061);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8630() {
   return (neuron0x38bff60()*-0.0126402);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8670() {
   return (neuron0x38c02a0()*0.0471503);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d86b0() {
   return (neuron0x38c05e0()*-0.0161534);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d86f0() {
   return (neuron0x38c0920()*0.0845032);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8730() {
   return (neuron0x38c0c60()*-0.390509);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8770() {
   return (neuron0x38c0fa0()*0.080134);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d87b0() {
   return (neuron0x38c12e0()*-0.723641);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d87f0() {
   return (neuron0x38c1620()*1.56179);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8830() {
   return (neuron0x38c1960()*0.00538495);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8870() {
   return (neuron0x38c1ca0()*-0.0287524);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d88b0() {
   return (neuron0x38c1fe0()*-0.155625);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d88f0() {
   return (neuron0x38c2320()*-0.0325027);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8380() {
   return (neuron0x38c2660()*0.0313044);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d83c0() {
   return (neuron0x38c2bc0()*0.0794514);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8a40() {
   return (neuron0x38c2de0()*0.011456);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8a80() {
   return (neuron0x38c3120()*-0.0522533);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8ac0() {
   return (neuron0x38c3460()*0.1922);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8b00() {
   return (neuron0x38c37a0()*0.0532544);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8b40() {
   return (neuron0x38c3ae0()*-0.120776);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8b80() {
   return (neuron0x38c3e20()*-0.0964827);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8f00() {
   return (neuron0x38bf2f0()*0.0326742);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8f40() {
   return (neuron0x38bf5a0()*-0.0179745);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8f80() {
   return (neuron0x38bf8e0()*-0.300161);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8fc0() {
   return (neuron0x38bfc20()*0.520299);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9000() {
   return (neuron0x38bff60()*0.170219);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9040() {
   return (neuron0x38c02a0()*-0.0282111);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9080() {
   return (neuron0x38c05e0()*-0.0167705);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d90c0() {
   return (neuron0x38c0920()*0.0125618);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9100() {
   return (neuron0x38c0c60()*0.0911084);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9140() {
   return (neuron0x38c0fa0()*-0.00586485);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9180() {
   return (neuron0x38c12e0()*0.0148728);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d91c0() {
   return (neuron0x38c1620()*-0.722065);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9200() {
   return (neuron0x38c1960()*0.159846);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9240() {
   return (neuron0x38c1ca0()*-0.230557);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9280() {
   return (neuron0x38c1fe0()*0.866705);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d92c0() {
   return (neuron0x38c2320()*-0.0364789);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8d50() {
   return (neuron0x38c2660()*-0.251035);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8d90() {
   return (neuron0x38c2bc0()*0.0550172);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9410() {
   return (neuron0x38c2de0()*0.0251307);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9450() {
   return (neuron0x38c3120()*0.0599774);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9490() {
   return (neuron0x38c3460()*0.0195521);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d94d0() {
   return (neuron0x38c37a0()*0.00699018);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9510() {
   return (neuron0x38c3ae0()*0.0446726);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9550() {
   return (neuron0x38c3e20()*0.0886541);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d98d0() {
   return (neuron0x38bf2f0()*-0.00595879);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9910() {
   return (neuron0x38bf5a0()*0.0113607);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9950() {
   return (neuron0x38bf8e0()*0.568977);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9990() {
   return (neuron0x38bfc20()*1.04042);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d99d0() {
   return (neuron0x38bff60()*-0.0445028);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9a10() {
   return (neuron0x38c02a0()*0.0288766);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9a50() {
   return (neuron0x38c05e0()*-0.00716102);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9a90() {
   return (neuron0x38c0920()*-0.0122463);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9ad0() {
   return (neuron0x38c0c60()*-0.0566618);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9b10() {
   return (neuron0x38c0fa0()*-0.033515);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9b50() {
   return (neuron0x38c12e0()*0.00792821);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9b90() {
   return (neuron0x38c1620()*-0.607072);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9bd0() {
   return (neuron0x38c1960()*-0.167518);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9c10() {
   return (neuron0x38c1ca0()*0.0379074);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9c50() {
   return (neuron0x38c1fe0()*0.0615501);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9c90() {
   return (neuron0x38c2320()*0.00281858);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9720() {
   return (neuron0x38c2660()*0.0561916);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9760() {
   return (neuron0x38c2bc0()*-0.0697507);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9de0() {
   return (neuron0x38c2de0()*0.0407904);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9e20() {
   return (neuron0x38c3120()*-0.0202003);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9e60() {
   return (neuron0x38c3460()*0.00265064);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9ea0() {
   return (neuron0x38c37a0()*0.0128018);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9ee0() {
   return (neuron0x38c3ae0()*0.0637656);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d9f20() {
   return (neuron0x38c3e20()*0.196056);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da2a0() {
   return (neuron0x38bf2f0()*0.0386041);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da2e0() {
   return (neuron0x38bf5a0()*-0.00103365);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da320() {
   return (neuron0x38bf8e0()*-0.13158);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da360() {
   return (neuron0x38bfc20()*3.39876);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da3a0() {
   return (neuron0x38bff60()*0.012171);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da3e0() {
   return (neuron0x38c02a0()*-0.0329545);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da420() {
   return (neuron0x38c05e0()*-0.052493);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da460() {
   return (neuron0x38c0920()*0.00290737);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da4a0() {
   return (neuron0x38c0c60()*0.027516);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da4e0() {
   return (neuron0x38c0fa0()*0.0637974);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da520() {
   return (neuron0x38c12e0()*0.00213273);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da560() {
   return (neuron0x38c1620()*1.29765);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da5a0() {
   return (neuron0x38c1960()*0.0401467);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da5e0() {
   return (neuron0x38c1ca0()*-0.0454859);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da620() {
   return (neuron0x38c1fe0()*-0.0651558);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da660() {
   return (neuron0x38c2320()*-0.0459778);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da0f0() {
   return (neuron0x38c2660()*-0.0201716);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da130() {
   return (neuron0x38c2bc0()*0.0363637);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da7b0() {
   return (neuron0x38c2de0()*-0.0234349);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da7f0() {
   return (neuron0x38c3120()*0.00420955);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da830() {
   return (neuron0x38c3460()*0.00261556);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da870() {
   return (neuron0x38c37a0()*-0.0247774);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da8b0() {
   return (neuron0x38c3ae0()*-0.0397912);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38da8f0() {
   return (neuron0x38c3e20()*-0.113577);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dac70() {
   return (neuron0x38bf2f0()*0.0141178);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cf240() {
   return (neuron0x38bf5a0()*-0.00633414);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cf280() {
   return (neuron0x38bf8e0()*-3.59803);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cf2c0() {
   return (neuron0x38bfc20()*0.00307329);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cf510() {
   return (neuron0x38bff60()*-0.00101324);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cf550() {
   return (neuron0x38c02a0()*-0.0120132);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cf590() {
   return (neuron0x38c05e0()*-0.0034384);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cf7e0() {
   return (neuron0x38c0920()*-0.00707232);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cf820() {
   return (neuron0x38c0c60()*0.00760646);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cfa70() {
   return (neuron0x38c0fa0()*-0.00506796);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cfab0() {
   return (neuron0x38c12e0()*-0.0114259);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cfaf0() {
   return (neuron0x38c1620()*0.472814);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cfd40() {
   return (neuron0x38c1960()*-0.00434075);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cfd80() {
   return (neuron0x38c1ca0()*-0.00904951);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cffd0() {
   return (neuron0x38c1fe0()*0.0027481);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d0010() {
   return (neuron0x38c2320()*0.0055116);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38daac0() {
   return (neuron0x38c2660()*0.00509509);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dab00() {
   return (neuron0x38c2bc0()*0.0105532);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d0160() {
   return (neuron0x38c2de0()*-0.00187656);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d0670() {
   return (neuron0x38c3120()*0.000669487);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d06b0() {
   return (neuron0x38c3460()*0.0116849);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d06f0() {
   return (neuron0x38c37a0()*0.00433191);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d0940() {
   return (neuron0x38c3ae0()*0.0080074);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d0980() {
   return (neuron0x38c3e20()*0.0739016);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d0230() {
   return (neuron0x38bf2f0()*-0.111351);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d0270() {
   return (neuron0x38bf5a0()*0.148255);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d02b0() {
   return (neuron0x38bf8e0()*0.189434);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d02f0() {
   return (neuron0x38bfc20()*-0.36482);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d0c70() {
   return (neuron0x38bff60()*0.0246771);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dcfc0() {
   return (neuron0x38c02a0()*0.0244248);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd000() {
   return (neuron0x38c05e0()*0.0319836);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd040() {
   return (neuron0x38c0920()*0.0914768);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd080() {
   return (neuron0x38c0c60()*0.294953);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd0c0() {
   return (neuron0x38c0fa0()*0.23843);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd100() {
   return (neuron0x38c12e0()*-0.13042);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd140() {
   return (neuron0x38c1620()*-0.016201);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd180() {
   return (neuron0x38c1960()*0.557547);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd1c0() {
   return (neuron0x38c1ca0()*-0.854727);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd200() {
   return (neuron0x38c1fe0()*0.0989113);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd240() {
   return (neuron0x38c2320()*1.013);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d0b50() {
   return (neuron0x38c2660()*-0.600752);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d0b90() {
   return (neuron0x38c2bc0()*0.472538);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd390() {
   return (neuron0x38c2de0()*0.11409);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd3d0() {
   return (neuron0x38c3120()*0.0424904);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd410() {
   return (neuron0x38c3460()*0.22872);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd450() {
   return (neuron0x38c37a0()*0.162975);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd490() {
   return (neuron0x38c3ae0()*0.0663845);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd4d0() {
   return (neuron0x38c3e20()*0.283626);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd850() {
   return (neuron0x38bf2f0()*0.385578);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd890() {
   return (neuron0x38bf5a0()*0.0414561);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd8d0() {
   return (neuron0x38bf8e0()*0.167954);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd910() {
   return (neuron0x38bfc20()*-0.0476763);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd950() {
   return (neuron0x38bff60()*0.0289149);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd990() {
   return (neuron0x38c02a0()*0.273626);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd9d0() {
   return (neuron0x38c05e0()*-0.257003);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dda10() {
   return (neuron0x38c0920()*0.000247631);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dda50() {
   return (neuron0x38c0c60()*0.00629716);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dda90() {
   return (neuron0x38c0fa0()*0.304135);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ddad0() {
   return (neuron0x38c12e0()*-0.233836);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ddb10() {
   return (neuron0x38c1620()*0.379407);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ddb50() {
   return (neuron0x38c1960()*0.00433984);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ddb90() {
   return (neuron0x38c1ca0()*0.205418);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ddbd0() {
   return (neuron0x38c1fe0()*0.295279);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ddc10() {
   return (neuron0x38c2320()*0.22351);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd6a0() {
   return (neuron0x38c2660()*-0.334789);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd6e0() {
   return (neuron0x38c2bc0()*0.0748879);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ddd60() {
   return (neuron0x38c2de0()*0.793264);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ddda0() {
   return (neuron0x38c3120()*-0.00309072);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ddde0() {
   return (neuron0x38c3460()*-0.396139);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dde20() {
   return (neuron0x38c37a0()*0.0990574);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dde60() {
   return (neuron0x38c3ae0()*-0.140292);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ddea0() {
   return (neuron0x38c3e20()*0.257652);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de220() {
   return (neuron0x38bf2f0()*-0.0177358);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de260() {
   return (neuron0x38bf5a0()*0.000562141);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de2a0() {
   return (neuron0x38bf8e0()*0.572552);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de2e0() {
   return (neuron0x38bfc20()*0.0660406);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de320() {
   return (neuron0x38bff60()*-0.0181561);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de360() {
   return (neuron0x38c02a0()*-0.00178444);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de3a0() {
   return (neuron0x38c05e0()*-0.0160432);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de3e0() {
   return (neuron0x38c0920()*0.00408853);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de420() {
   return (neuron0x38c0c60()*6.40897e-05);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de460() {
   return (neuron0x38c0fa0()*-0.00275849);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de4a0() {
   return (neuron0x38c12e0()*0.00738126);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de4e0() {
   return (neuron0x38c1620()*-1.11498);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de520() {
   return (neuron0x38c1960()*-0.0307803);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de560() {
   return (neuron0x38c1ca0()*-0.0405245);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de5a0() {
   return (neuron0x38c1fe0()*-0.0141151);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de5e0() {
   return (neuron0x38c2320()*-0.0146935);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de070() {
   return (neuron0x38c2660()*-0.0376899);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de0b0() {
   return (neuron0x38c2bc0()*-0.0198754);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de730() {
   return (neuron0x38c2de0()*-0.0148878);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de770() {
   return (neuron0x38c3120()*-0.0226873);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de7b0() {
   return (neuron0x38c3460()*0.0045765);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de7f0() {
   return (neuron0x38c37a0()*-0.00714466);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de830() {
   return (neuron0x38c3ae0()*0.0021568);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de870() {
   return (neuron0x38c3e20()*-0.0246504);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38debf0() {
   return (neuron0x38bf2f0()*0.0485612);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dec30() {
   return (neuron0x38bf5a0()*0.00394522);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dec70() {
   return (neuron0x38bf8e0()*1.51492);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38decb0() {
   return (neuron0x38bfc20()*-0.069017);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38decf0() {
   return (neuron0x38bff60()*-0.0133182);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ded30() {
   return (neuron0x38c02a0()*-0.019233);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ded70() {
   return (neuron0x38c05e0()*0.0282755);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dedb0() {
   return (neuron0x38c0920()*0.0257516);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dedf0() {
   return (neuron0x38c0c60()*-0.039426);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dee30() {
   return (neuron0x38c0fa0()*0.0117628);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dee70() {
   return (neuron0x38c12e0()*0.0336253);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38deeb0() {
   return (neuron0x38c1620()*0.0168412);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38deef0() {
   return (neuron0x38c1960()*0.0458532);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38def30() {
   return (neuron0x38c1ca0()*0.14358);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38def70() {
   return (neuron0x38c1fe0()*-0.0410409);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38defb0() {
   return (neuron0x38c2320()*0.0304366);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dea40() {
   return (neuron0x38c2660()*0.170418);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dea80() {
   return (neuron0x38c2bc0()*0.0593555);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df100() {
   return (neuron0x38c2de0()*-0.0205195);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df140() {
   return (neuron0x38c3120()*0.0561418);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df180() {
   return (neuron0x38c3460()*-0.101931);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df1c0() {
   return (neuron0x38c37a0()*-0.0239357);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df200() {
   return (neuron0x38c3ae0()*-0.0392882);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df240() {
   return (neuron0x38c3e20()*-0.0604703);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df5c0() {
   return (neuron0x38bf2f0()*-0.0845708);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df600() {
   return (neuron0x38bf5a0()*-0.00799368);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df640() {
   return (neuron0x38bf8e0()*0.301131);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df680() {
   return (neuron0x38bfc20()*-0.125882);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df6c0() {
   return (neuron0x38bff60()*-0.028041);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df700() {
   return (neuron0x38c02a0()*-0.0455595);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df740() {
   return (neuron0x38c05e0()*0.00721464);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df780() {
   return (neuron0x38c0920()*0.0409818);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df7c0() {
   return (neuron0x38c0c60()*-0.183564);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df800() {
   return (neuron0x38c0fa0()*-0.548645);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df840() {
   return (neuron0x38c12e0()*0.0597719);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df880() {
   return (neuron0x38c1620()*-1.5113);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df8c0() {
   return (neuron0x38c1960()*-0.0509216);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df900() {
   return (neuron0x38c1ca0()*0.0876663);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df940() {
   return (neuron0x38c1fe0()*0.049502);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df980() {
   return (neuron0x38c2320()*0.0113859);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df410() {
   return (neuron0x38c2660()*0.0672178);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df450() {
   return (neuron0x38c2bc0()*0.00118651);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dfad0() {
   return (neuron0x38c2de0()*0.052309);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dfb10() {
   return (neuron0x38c3120()*0.0281933);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dfb50() {
   return (neuron0x38c3460()*0.0393578);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dfb90() {
   return (neuron0x38c37a0()*0.0127578);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dfbd0() {
   return (neuron0x38c3ae0()*0.0164139);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dfc10() {
   return (neuron0x38c3e20()*0.0132044);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dff90() {
   return (neuron0x38bf2f0()*0.314056);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dffd0() {
   return (neuron0x38bf5a0()*-0.234535);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0010() {
   return (neuron0x38bf8e0()*-0.448421);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0050() {
   return (neuron0x38bfc20()*-0.292201);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0090() {
   return (neuron0x38bff60()*0.492755);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e00d0() {
   return (neuron0x38c02a0()*-0.345225);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0110() {
   return (neuron0x38c05e0()*-0.398017);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0150() {
   return (neuron0x38c0920()*-0.0501276);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0190() {
   return (neuron0x38c0c60()*0.260404);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e01d0() {
   return (neuron0x38c0fa0()*0.389911);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0210() {
   return (neuron0x38c12e0()*0.0455611);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0250() {
   return (neuron0x38c1620()*0.343212);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0290() {
   return (neuron0x38c1960()*0.135546);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e02d0() {
   return (neuron0x38c1ca0()*-0.500607);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0310() {
   return (neuron0x38c1fe0()*-0.0299347);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0350() {
   return (neuron0x38c2320()*-0.0243311);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dfde0() {
   return (neuron0x38c2660()*-0.723355);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dfe20() {
   return (neuron0x38c2bc0()*0.149474);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e04a0() {
   return (neuron0x38c2de0()*0.678706);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e04e0() {
   return (neuron0x38c3120()*-0.028617);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0520() {
   return (neuron0x38c3460()*-0.475878);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0560() {
   return (neuron0x38c37a0()*-0.67817);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e05a0() {
   return (neuron0x38c3ae0()*-0.996691);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e05e0() {
   return (neuron0x38c3e20()*0.393841);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0960() {
   return (neuron0x38bf2f0()*7.73589e-05);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e09a0() {
   return (neuron0x38bf5a0()*0.00318613);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e09e0() {
   return (neuron0x38bf8e0()*0.0677887);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0a20() {
   return (neuron0x38bfc20()*-0.000462242);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0a60() {
   return (neuron0x38bff60()*-0.00667407);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0aa0() {
   return (neuron0x38c02a0()*0.0113271);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0ae0() {
   return (neuron0x38c05e0()*0.00483916);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0b20() {
   return (neuron0x38c0920()*-0.00700712);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0b60() {
   return (neuron0x38c0c60()*0.0102832);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0ba0() {
   return (neuron0x38c0fa0()*0.0100289);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0be0() {
   return (neuron0x38c12e0()*-0.0238118);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0c20() {
   return (neuron0x38c1620()*-4.68928);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0c60() {
   return (neuron0x38c1960()*-0.0137276);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0ca0() {
   return (neuron0x38c1ca0()*-0.0307752);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0ce0() {
   return (neuron0x38c1fe0()*-0.00604095);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0d20() {
   return (neuron0x38c2320()*0.00465791);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e07b0() {
   return (neuron0x38c2660()*-0.0253023);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e07f0() {
   return (neuron0x38c2bc0()*-0.00832077);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0e70() {
   return (neuron0x38c2de0()*-0.000575537);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0eb0() {
   return (neuron0x38c3120()*-0.0228113);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0ef0() {
   return (neuron0x38c3460()*-0.00336895);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0f30() {
   return (neuron0x38c37a0()*0.0101503);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0f70() {
   return (neuron0x38c3ae0()*-0.00380595);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0fb0() {
   return (neuron0x38c3e20()*0.0153104);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e1330() {
   return (neuron0x38bf2f0()*0.000718418);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e1370() {
   return (neuron0x38bf5a0()*0.0046542);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e13b0() {
   return (neuron0x38bf8e0()*2.11012);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e13f0() {
   return (neuron0x38bfc20()*-0.0111875);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e1430() {
   return (neuron0x38bff60()*-0.00376198);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e1470() {
   return (neuron0x38c02a0()*0.00327912);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e14b0() {
   return (neuron0x38c05e0()*0.00704581);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e14f0() {
   return (neuron0x38c0920()*0.000103572);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e1530() {
   return (neuron0x38c0c60()*0.000424858);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e1570() {
   return (neuron0x38c0fa0()*-0.00342144);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e15b0() {
   return (neuron0x38c12e0()*0.00241725);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e15f0() {
   return (neuron0x38c1620()*-0.390496);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e1630() {
   return (neuron0x38c1960()*0.00914093);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e1670() {
   return (neuron0x38c1ca0()*0.00810088);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e16b0() {
   return (neuron0x38c1fe0()*-0.00391898);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e16f0() {
   return (neuron0x38c2320()*0.000140901);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e1180() {
   return (neuron0x38c2660()*-0.00124887);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e11c0() {
   return (neuron0x38c2bc0()*-0.00508378);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e1840() {
   return (neuron0x38c2de0()*-0.00103588);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e1880() {
   return (neuron0x38c3120()*-0.00193883);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e18c0() {
   return (neuron0x38c3460()*-0.00309703);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e1900() {
   return (neuron0x38c37a0()*0.00122195);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e1940() {
   return (neuron0x38c3ae0()*0.00132898);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e1980() {
   return (neuron0x38c3e20()*-0.00726688);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca430() {
   return (neuron0x38bf2f0()*-0.00584038);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca470() {
   return (neuron0x38bf5a0()*0.00197407);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca4b0() {
   return (neuron0x38bf8e0()*-0.124808);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca4f0() {
   return (neuron0x38bfc20()*0.0402958);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca530() {
   return (neuron0x38bff60()*5.75375e-05);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca570() {
   return (neuron0x38c02a0()*0.00336981);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca5b0() {
   return (neuron0x38c05e0()*-0.000835302);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca5f0() {
   return (neuron0x38c0920()*0.00134571);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2110() {
   return (neuron0x38c0c60()*-0.0123513);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2150() {
   return (neuron0x38c0fa0()*-0.0121274);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2190() {
   return (neuron0x38c12e0()*0.0095983);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e21d0() {
   return (neuron0x38c1620()*2.54097);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2210() {
   return (neuron0x38c1960()*0.00303);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2250() {
   return (neuron0x38c1ca0()*0.00283114);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2290() {
   return (neuron0x38c1fe0()*0.00672406);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e22d0() {
   return (neuron0x38c2320()*-0.00637751);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e1b50() {
   return (neuron0x38c2660()*0.00917743);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e1b90() {
   return (neuron0x38c2bc0()*4.90894e-06);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2420() {
   return (neuron0x38c2de0()*-0.00302122);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2460() {
   return (neuron0x38c3120()*0.00257375);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e24a0() {
   return (neuron0x38c3460()*-0.00160999);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e24e0() {
   return (neuron0x38c37a0()*0.000218314);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2520() {
   return (neuron0x38c3ae0()*-0.00502983);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2560() {
   return (neuron0x38c3e20()*0.0190531);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e28e0() {
   return (neuron0x38bf2f0()*-0.162552);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2920() {
   return (neuron0x38bf5a0()*0.0941389);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2960() {
   return (neuron0x38bf8e0()*-0.638526);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e29a0() {
   return (neuron0x38bfc20()*0.652262);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e29e0() {
   return (neuron0x38bff60()*0.0266323);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2a20() {
   return (neuron0x38c02a0()*1.04142);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2a60() {
   return (neuron0x38c05e0()*0.141642);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2aa0() {
   return (neuron0x38c0920()*-0.0120502);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2ae0() {
   return (neuron0x38c0c60()*-0.0288259);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2b20() {
   return (neuron0x38c0fa0()*0.309111);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2b60() {
   return (neuron0x38c12e0()*0.262006);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2ba0() {
   return (neuron0x38c1620()*-0.444461);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2be0() {
   return (neuron0x38c1960()*0.345017);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2c20() {
   return (neuron0x38c1ca0()*-0.458471);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2c60() {
   return (neuron0x38c1fe0()*0.109662);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2ca0() {
   return (neuron0x38c2320()*-0.420648);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2730() {
   return (neuron0x38c2660()*-0.345604);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2770() {
   return (neuron0x38c2bc0()*0.0219997);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2df0() {
   return (neuron0x38c2de0()*-0.277691);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2e30() {
   return (neuron0x38c3120()*-0.113511);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2e70() {
   return (neuron0x38c3460()*0.346272);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2eb0() {
   return (neuron0x38c37a0()*-0.0646777);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2ef0() {
   return (neuron0x38c3ae0()*-0.0436817);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2f30() {
   return (neuron0x38c3e20()*-0.0388662);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e32b0() {
   return (neuron0x38bf2f0()*0.0336977);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e32f0() {
   return (neuron0x38bf5a0()*-0.00235111);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e3330() {
   return (neuron0x38bf8e0()*-0.822218);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e3370() {
   return (neuron0x38bfc20()*0.0229866);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e33b0() {
   return (neuron0x38bff60()*0.0154143);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e33f0() {
   return (neuron0x38c02a0()*0.00272878);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e3430() {
   return (neuron0x38c05e0()*-3.95508e-05);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e3470() {
   return (neuron0x38c0920()*0.00152858);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e34b0() {
   return (neuron0x38c0c60()*0.00722669);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e34f0() {
   return (neuron0x38c0fa0()*0.00168069);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e3530() {
   return (neuron0x38c12e0()*-0.00984026);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e3570() {
   return (neuron0x38c1620()*0.17187);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e35b0() {
   return (neuron0x38c1960()*0.021858);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e35f0() {
   return (neuron0x38c1ca0()*0.00718737);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e3630() {
   return (neuron0x38c1fe0()*0.00185623);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e3670() {
   return (neuron0x38c2320()*-0.0052705);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e3100() {
   return (neuron0x38c2660()*0.015921);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e3140() {
   return (neuron0x38c2bc0()*0.0124508);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3c70() {
   return (neuron0x38c2de0()*-0.0052965);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3cb0() {
   return (neuron0x38c3120()*0.00857981);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3cf0() {
   return (neuron0x38c3460()*0.0100681);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3d30() {
   return (neuron0x38c37a0()*-0.000505937);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3d70() {
   return (neuron0x38c3ae0()*0.0154134);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3db0() {
   return (neuron0x38c3e20()*6.46729);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4130() {
   return (neuron0x38bf2f0()*-0.0039772);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4170() {
   return (neuron0x38bf5a0()*-0.075206);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d41b0() {
   return (neuron0x38bf8e0()*0.551407);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d41f0() {
   return (neuron0x38bfc20()*1.9032);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4230() {
   return (neuron0x38bff60()*0.0176439);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4270() {
   return (neuron0x38c02a0()*-0.0338686);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d42b0() {
   return (neuron0x38c05e0()*0.0950014);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d42f0() {
   return (neuron0x38c0920()*-0.0424797);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4330() {
   return (neuron0x38c0c60()*0.0708002);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4370() {
   return (neuron0x38c0fa0()*0.0123354);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d43b0() {
   return (neuron0x38c12e0()*-0.00927491);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d43f0() {
   return (neuron0x38c1620()*-1.41919);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4430() {
   return (neuron0x38c1960()*0.161775);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4470() {
   return (neuron0x38c1ca0()*-0.0860377);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d44b0() {
   return (neuron0x38c1fe0()*-0.00360797);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d44f0() {
   return (neuron0x38c2320()*0.230292);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3f80() {
   return (neuron0x38c2660()*-0.0354377);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3fc0() {
   return (neuron0x38c2bc0()*0.0130603);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4640() {
   return (neuron0x38c2de0()*0.107984);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4680() {
   return (neuron0x38c3120()*-0.0428837);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d46c0() {
   return (neuron0x38c3460()*0.0398372);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4700() {
   return (neuron0x38c37a0()*-0.00948767);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4740() {
   return (neuron0x38c3ae0()*-0.0324414);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4780() {
   return (neuron0x38c3e20()*0.00783931);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4b00() {
   return (neuron0x38bf2f0()*-0.0416844);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4b40() {
   return (neuron0x38bf5a0()*7.11541e-05);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4b80() {
   return (neuron0x38bf8e0()*-0.00369726);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4bc0() {
   return (neuron0x38bfc20()*-0.00292641);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4c00() {
   return (neuron0x38bff60()*-0.00997714);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4c40() {
   return (neuron0x38c02a0()*0.00200082);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4c80() {
   return (neuron0x38c05e0()*-0.00249066);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4cc0() {
   return (neuron0x38c0920()*0.0069557);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4d00() {
   return (neuron0x38c0c60()*-0.0234348);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4d40() {
   return (neuron0x38c0fa0()*-0.00387385);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4d80() {
   return (neuron0x38c12e0()*-0.012102);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4dc0() {
   return (neuron0x38c1620()*1.06208);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4e00() {
   return (neuron0x38c1960()*-0.0206368);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4e40() {
   return (neuron0x38c1ca0()*-0.019866);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4e80() {
   return (neuron0x38c1fe0()*-0.0068019);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4ec0() {
   return (neuron0x38c2320()*-0.00692455);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4950() {
   return (neuron0x38c2660()*-0.0225726);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4990() {
   return (neuron0x38c2bc0()*-0.0172231);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5010() {
   return (neuron0x38c2de0()*-0.0124531);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5050() {
   return (neuron0x38c3120()*-0.00248509);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5090() {
   return (neuron0x38c3460()*-0.0150163);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d50d0() {
   return (neuron0x38c37a0()*0.0012348);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5110() {
   return (neuron0x38c3ae0()*-0.0064064);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5150() {
   return (neuron0x38c3e20()*0.0203321);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d54d0() {
   return (neuron0x38bf2f0()*-0.0249077);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5510() {
   return (neuron0x38bf5a0()*0.00512149);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5550() {
   return (neuron0x38bf8e0()*-5.0442);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5590() {
   return (neuron0x38bfc20()*0.0266268);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d55d0() {
   return (neuron0x38bff60()*-0.006388);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5610() {
   return (neuron0x38c02a0()*-0.0119038);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5650() {
   return (neuron0x38c05e0()*-0.0103039);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5690() {
   return (neuron0x38c0920()*-0.0146106);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d56d0() {
   return (neuron0x38c0c60()*-0.0105185);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5710() {
   return (neuron0x38c0fa0()*0.0046147);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5750() {
   return (neuron0x38c12e0()*-0.0014513);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5790() {
   return (neuron0x38c1620()*0.0462927);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d57d0() {
   return (neuron0x38c1960()*-0.0332603);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5810() {
   return (neuron0x38c1ca0()*0.00729953);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5850() {
   return (neuron0x38c1fe0()*-0.0143953);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5890() {
   return (neuron0x38c2320()*-0.00654699);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5320() {
   return (neuron0x38c2660()*0.00907459);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5360() {
   return (neuron0x38c2bc0()*-0.0125397);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d59e0() {
   return (neuron0x38c2de0()*0.00173614);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5a20() {
   return (neuron0x38c3120()*-0.00219124);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5a60() {
   return (neuron0x38c3460()*-0.00767004);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5aa0() {
   return (neuron0x38c37a0()*0.0029577);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5ae0() {
   return (neuron0x38c3ae0()*-0.000764285);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5b20() {
   return (neuron0x38c3e20()*-6.64725);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e79f0() {
   return (neuron0x38bf2f0()*0.0444013);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e7a30() {
   return (neuron0x38bf5a0()*0.00703265);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e7a70() {
   return (neuron0x38bf8e0()*0.671812);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e7ab0() {
   return (neuron0x38bfc20()*-0.0436219);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e7af0() {
   return (neuron0x38bff60()*-0.00101014);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e7b30() {
   return (neuron0x38c02a0()*-0.000895077);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e7b70() {
   return (neuron0x38c05e0()*0.00571668);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e7bb0() {
   return (neuron0x38c0920()*-0.00160927);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e7bf0() {
   return (neuron0x38c0c60()*-0.0031897);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e7c30() {
   return (neuron0x38c0fa0()*-0.00333967);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e7c70() {
   return (neuron0x38c12e0()*0.00027423);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e7cb0() {
   return (neuron0x38c1620()*-0.28974);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e7cf0() {
   return (neuron0x38c1960()*0.00230361);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e7d30() {
   return (neuron0x38c1ca0()*-0.00643209);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e7d70() {
   return (neuron0x38c1fe0()*-0.0132822);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e7db0() {
   return (neuron0x38c2320()*0.00515637);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5b60() {
   return (neuron0x38c2660()*-0.0173825);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5ba0() {
   return (neuron0x38c2bc0()*-0.00281933);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e7f00() {
   return (neuron0x38c2de0()*-0.00353039);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e7f40() {
   return (neuron0x38c3120()*-0.000824215);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e7f80() {
   return (neuron0x38c3460()*-0.00885682);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e7fc0() {
   return (neuron0x38c37a0()*-0.00180353);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8000() {
   return (neuron0x38c3ae0()*-0.00426592);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8040() {
   return (neuron0x38c3e20()*2.99606);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e83c0() {
   return (neuron0x38bf2f0()*-0.136831);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8400() {
   return (neuron0x38bf5a0()*0.04025);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8440() {
   return (neuron0x38bf8e0()*-0.703835);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8480() {
   return (neuron0x38bfc20()*0.792438);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e84c0() {
   return (neuron0x38bff60()*-0.41396);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8500() {
   return (neuron0x38c02a0()*0.0780627);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8540() {
   return (neuron0x38c05e0()*-0.0920013);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8580() {
   return (neuron0x38c0920()*-0.0383401);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e85c0() {
   return (neuron0x38c0c60()*0.0156462);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8600() {
   return (neuron0x38c0fa0()*-0.0439344);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8640() {
   return (neuron0x38c12e0()*-0.200748);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8680() {
   return (neuron0x38c1620()*1.10833);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e86c0() {
   return (neuron0x38c1960()*0.0769719);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8700() {
   return (neuron0x38c1ca0()*-0.119076);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8740() {
   return (neuron0x38c1fe0()*0.0975955);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8780() {
   return (neuron0x38c2320()*-0.208819);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8210() {
   return (neuron0x38c2660()*-0.505897);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8250() {
   return (neuron0x38c2bc0()*0.0132569);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e88d0() {
   return (neuron0x38c2de0()*0.0985011);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8910() {
   return (neuron0x38c3120()*0.069327);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8950() {
   return (neuron0x38c3460()*-0.169138);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8990() {
   return (neuron0x38c37a0()*0.0433671);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e89d0() {
   return (neuron0x38c3ae0()*-0.00404214);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8a10() {
   return (neuron0x38c3e20()*-0.21358);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8d90() {
   return (neuron0x38bf2f0()*0.160719);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8dd0() {
   return (neuron0x38bf5a0()*0.0241972);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8e10() {
   return (neuron0x38bf8e0()*-0.199581);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8e50() {
   return (neuron0x38bfc20()*0.396593);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8e90() {
   return (neuron0x38bff60()*0.442852);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8ed0() {
   return (neuron0x38c02a0()*-0.246272);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8f10() {
   return (neuron0x38c05e0()*0.0747498);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8f50() {
   return (neuron0x38c0920()*0.373179);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8f90() {
   return (neuron0x38c0c60()*-0.640742);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8fd0() {
   return (neuron0x38c0fa0()*-0.0358077);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9010() {
   return (neuron0x38c12e0()*-0.123599);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9050() {
   return (neuron0x38c1620()*-0.392731);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9090() {
   return (neuron0x38c1960()*-0.350456);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e90d0() {
   return (neuron0x38c1ca0()*-0.518001);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9110() {
   return (neuron0x38c1fe0()*-0.0464746);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9150() {
   return (neuron0x38c2320()*-0.0633794);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8be0() {
   return (neuron0x38c2660()*-0.0622677);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8c20() {
   return (neuron0x38c2bc0()*-0.364373);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e92a0() {
   return (neuron0x38c2de0()*0.0846822);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e92e0() {
   return (neuron0x38c3120()*-0.678372);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9320() {
   return (neuron0x38c3460()*-0.373022);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9360() {
   return (neuron0x38c37a0()*0.126441);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e93a0() {
   return (neuron0x38c3ae0()*-0.108988);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e93e0() {
   return (neuron0x38c3e20()*-0.201865);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9760() {
   return (neuron0x38bf2f0()*0.0496908);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e97a0() {
   return (neuron0x38bf5a0()*-0.000820136);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e97e0() {
   return (neuron0x38bf8e0()*0.221889);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9820() {
   return (neuron0x38bfc20()*-0.00529254);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9860() {
   return (neuron0x38bff60()*0.00492347);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e98a0() {
   return (neuron0x38c02a0()*0.00769771);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e98e0() {
   return (neuron0x38c05e0()*0.00581385);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9920() {
   return (neuron0x38c0920()*0.0208239);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9960() {
   return (neuron0x38c0c60()*0.00685208);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e99a0() {
   return (neuron0x38c0fa0()*-0.00563221);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e99e0() {
   return (neuron0x38c12e0()*-0.00812733);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9a20() {
   return (neuron0x38c1620()*-0.0817516);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9a60() {
   return (neuron0x38c1960()*-0.0165742);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9aa0() {
   return (neuron0x38c1ca0()*-0.0130312);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9ae0() {
   return (neuron0x38c1fe0()*0.0185605);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9b20() {
   return (neuron0x38c2320()*0.00596171);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e95b0() {
   return (neuron0x38c2660()*0.0186753);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e95f0() {
   return (neuron0x38c2bc0()*-0.00542554);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9c70() {
   return (neuron0x38c2de0()*-0.00985161);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9cb0() {
   return (neuron0x38c3120()*0.00258463);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9cf0() {
   return (neuron0x38c3460()*-0.0135833);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9d30() {
   return (neuron0x38c37a0()*-0.00316357);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9d70() {
   return (neuron0x38c3ae0()*-0.00166124);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9db0() {
   return (neuron0x38c3e20()*2.02631);
}

double NNfunction_ns_chiMinus1_uL::synapse0x3689bc0() {
   return (neuron0x38c4290()*-0.00508112);
}

double NNfunction_ns_chiMinus1_uL::synapse0x3689c00() {
   return (neuron0x38c4be0()*-0.00160929);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6750() {
   return (neuron0x38c56c0()*-0.370785);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c6790() {
   return (neuron0x38c5160()*-0.0196365);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8230() {
   return (neuron0x38c64a0()*-0.112402);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8270() {
   return (neuron0x38c7f80()*-0.0319727);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9000() {
   return (neuron0x38c8d50()*-0.0246849);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9040() {
   return (neuron0x38c9720()*-0.0208576);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c99d0() {
   return (neuron0x38ca0f0()*0.457426);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c9a10() {
   return (neuron0x38cabd0()*-0.653961);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca3a0() {
   return (neuron0x38cb5a0()*0.68663);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ca3e0() {
   return (neuron0x38c8680()*-0.00253935);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cae80() {
   return (neuron0x38cd150()*-0.00463578);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38caec0() {
   return (neuron0x38cdb20()*0.144957);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb850() {
   return (neuron0x38ce4f0()*-0.121381);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cb890() {
   return (neuron0x38ceec0()*-0.00295868);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8930() {
   return (neuron0x38d0cd0()*-0.0221786);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c8970() {
   return (neuron0x38d0fb0()*-0.0164779);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd400() {
   return (neuron0x38d1980()*1.02761);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cd440() {
   return (neuron0x38d2350()*0.0230614);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cddd0() {
   return (neuron0x38d2d20()*1.3893);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cde10() {
   return (neuron0x38d36f0()*-1.76929);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce7a0() {
   return (neuron0x38cc240()*-0.0155936);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38ce7e0() {
   return (neuron0x38ccc10()*0.291903);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cf170() {
   return (neuron0x38d6480()*-0.00735635);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cf1b0() {
   return (neuron0x38d6e50()*-0.116038);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c2200() {
   return (neuron0x38d7820()*0.0341604);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c2240() {
   return (neuron0x38d81f0()*0.0031547);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1260() {
   return (neuron0x38d8bc0()*0.00140112);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d12a0() {
   return (neuron0x38d9590()*0.0745125);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1c30() {
   return (neuron0x38d9f60()*-0.0348589);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d1c70() {
   return (neuron0x38da930()*0.777692);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2600() {
   return (neuron0x38d09c0()*-0.0126736);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2640() {
   return (neuron0x38dd510()*-0.0124359);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d2fd0() {
   return (neuron0x38ddee0()*-1.19669);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d3010() {
   return (neuron0x38de8b0()*0.209653);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d39a0() {
   return (neuron0x38df280()*-0.00827681);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d39e0() {
   return (neuron0x38dfc50()*0.00126726);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc4f0() {
   return (neuron0x38e0620()*0.320361);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38cc530() {
   return (neuron0x38e0ff0()*-0.75419);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5da0() {
   return (neuron0x38e19c0()*-0.759746);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5de0() {
   return (neuron0x38e25a0()*-0.00194937);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6730() {
   return (neuron0x38e2f70()*0.0354566);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d6770() {
   return (neuron0x38d3df0()*-0.0287726);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7100() {
   return (neuron0x38d47c0()*-1.4358);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7140() {
   return (neuron0x38d5190()*0.641264);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7ad0() {
   return (neuron0x38e77d0()*0.821514);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d7b10() {
   return (neuron0x38e8080()*0.0451301);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d84a0() {
   return (neuron0x38e8a50()*0.00441237);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d84e0() {
   return (neuron0x38e9420()*1.16138);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dabe0() {
   return (neuron0x38c4290()*0.649194);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dac20() {
   return (neuron0x38c4be0()*0.462339);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d01a0() {
   return (neuron0x38c56c0()*0.985572);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d01e0() {
   return (neuron0x38c5160()*2.3909);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd7c0() {
   return (neuron0x38c64a0()*-1.23608);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dd800() {
   return (neuron0x38c7f80()*-1.43929);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de190() {
   return (neuron0x38c8d50()*-1.08865);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38de1d0() {
   return (neuron0x38c9720()*0.665829);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38deb60() {
   return (neuron0x38ca0f0()*0.264437);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38deba0() {
   return (neuron0x38cabd0()*0.419087);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df530() {
   return (neuron0x38cb5a0()*-0.81815);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38df570() {
   return (neuron0x38c8680()*-1.42439);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dff00() {
   return (neuron0x38cd150()*0.702966);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38dff40() {
   return (neuron0x38cdb20()*2.07064);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e08d0() {
   return (neuron0x38ce4f0()*6.81123);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e0910() {
   return (neuron0x38ceec0()*1.24225);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e12a0() {
   return (neuron0x38d0cd0()*-1.61811);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e12e0() {
   return (neuron0x38d0fb0()*0.689782);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e1c70() {
   return (neuron0x38d1980()*-0.112713);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e1cb0() {
   return (neuron0x38d2350()*0.367857);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2850() {
   return (neuron0x38d2d20()*-1.2492);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e2890() {
   return (neuron0x38d36f0()*0.694531);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e3220() {
   return (neuron0x38cc240()*-5.07587);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e3260() {
   return (neuron0x38ccc10()*-0.240663);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d40a0() {
   return (neuron0x38d6480()*-2.29335);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d40e0() {
   return (neuron0x38d6e50()*9.59796);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4a70() {
   return (neuron0x38d7820()*-0.693997);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d4ab0() {
   return (neuron0x38d81f0()*0.883589);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5440() {
   return (neuron0x38d8bc0()*1.18338);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d5480() {
   return (neuron0x38d9590()*-5.07355);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e7960() {
   return (neuron0x38d9f60()*-5.73427);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e79a0() {
   return (neuron0x38da930()*-2.37343);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8330() {
   return (neuron0x38d09c0()*0.598198);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8370() {
   return (neuron0x38dd510()*-0.852936);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8d00() {
   return (neuron0x38ddee0()*2.2589);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e8d40() {
   return (neuron0x38de8b0()*2.36149);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e96d0() {
   return (neuron0x38df280()*-1.64767);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9710() {
   return (neuron0x38dfc50()*0.35657);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4540() {
   return (neuron0x38e0620()*-4.94046);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38c4580() {
   return (neuron0x38e0ff0()*0.575626);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8e70() {
   return (neuron0x38e19c0()*2.37531);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38d8eb0() {
   return (neuron0x38e25a0()*0.549103);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9df0() {
   return (neuron0x38e2f70()*1.54451);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9e30() {
   return (neuron0x38d3df0()*3.76869);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9e70() {
   return (neuron0x38d47c0()*1.32295);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38e9eb0() {
   return (neuron0x38d5190()*-0.102692);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f0d60() {
   return (neuron0x38e77d0()*-0.474412);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f0da0() {
   return (neuron0x38e8080()*-1.20262);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f0de0() {
   return (neuron0x38e8a50()*0.761902);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f0e20() {
   return (neuron0x38e9420()*-0.577469);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f11a0() {
   return (neuron0x38c4290()*-0.0118627);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f11e0() {
   return (neuron0x38c4be0()*-0.0364424);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1220() {
   return (neuron0x38c56c0()*1.45991);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1260() {
   return (neuron0x38c5160()*0.0860097);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f12a0() {
   return (neuron0x38c64a0()*-1.66213);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f12e0() {
   return (neuron0x38c7f80()*-0.140741);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1320() {
   return (neuron0x38c8d50()*0.0390863);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1360() {
   return (neuron0x38c9720()*-0.0368197);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f13a0() {
   return (neuron0x38ca0f0()*-0.0511841);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f13e0() {
   return (neuron0x38cabd0()*0.884084);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1420() {
   return (neuron0x38cb5a0()*-0.656302);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1460() {
   return (neuron0x38c8680()*0.171559);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f14a0() {
   return (neuron0x38cd150()*0.0182231);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f14e0() {
   return (neuron0x38cdb20()*1.3109);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1520() {
   return (neuron0x38ce4f0()*0.780311);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1560() {
   return (neuron0x38ceec0()*-0.125135);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f0ff0() {
   return (neuron0x38d0cd0()*-0.138244);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1030() {
   return (neuron0x38d0fb0()*-0.10262);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f16b0() {
   return (neuron0x38d1980()*-0.512105);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f16f0() {
   return (neuron0x38d2350()*0.382539);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1730() {
   return (neuron0x38d2d20()*-1.39864);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1770() {
   return (neuron0x38d36f0()*1.17372);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f17b0() {
   return (neuron0x38cc240()*0.144699);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f17f0() {
   return (neuron0x38ccc10()*-0.300643);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1830() {
   return (neuron0x38d6480()*0.237706);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1870() {
   return (neuron0x38d6e50()*1.26619);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f18b0() {
   return (neuron0x38d7820()*-0.118684);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f18f0() {
   return (neuron0x38d81f0()*0.127307);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1930() {
   return (neuron0x38d8bc0()*0.278045);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1970() {
   return (neuron0x38d9590()*0.268696);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f19b0() {
   return (neuron0x38d9f60()*-0.943055);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f19f0() {
   return (neuron0x38da930()*-1.56093);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f15a0() {
   return (neuron0x38d09c0()*-0.0253119);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f15e0() {
   return (neuron0x38dd510()*0.0444044);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1620() {
   return (neuron0x38ddee0()*1.15454);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1660() {
   return (neuron0x38de8b0()*0.7429);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1c40() {
   return (neuron0x38df280()*-0.327034);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1c80() {
   return (neuron0x38dfc50()*-0.0588068);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1cc0() {
   return (neuron0x38e0620()*-1.14039);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1d00() {
   return (neuron0x38e0ff0()*1.0283);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1d40() {
   return (neuron0x38e19c0()*2.52676);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1d80() {
   return (neuron0x38e25a0()*0.0105223);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1dc0() {
   return (neuron0x38e2f70()*1.90952);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1e00() {
   return (neuron0x38d3df0()*-0.0163827);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1e40() {
   return (neuron0x38d47c0()*0.648756);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1e80() {
   return (neuron0x38d5190()*-0.607609);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1ec0() {
   return (neuron0x38e77d0()*-0.257978);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1f00() {
   return (neuron0x38e8080()*0.0967523);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1f40() {
   return (neuron0x38e8a50()*0.00790855);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f1f80() {
   return (neuron0x38e9420()*-0.361306);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2300() {
   return (neuron0x38c4290()*0.201698);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2340() {
   return (neuron0x38c4be0()*-0.283077);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2380() {
   return (neuron0x38c56c0()*0.104054);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f23c0() {
   return (neuron0x38c5160()*-0.417085);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2400() {
   return (neuron0x38c64a0()*0.151641);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2440() {
   return (neuron0x38c7f80()*0.166566);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2480() {
   return (neuron0x38c8d50()*-0.045501);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f24c0() {
   return (neuron0x38c9720()*0.0387036);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2500() {
   return (neuron0x38ca0f0()*-0.382423);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2540() {
   return (neuron0x38cabd0()*-0.458535);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2580() {
   return (neuron0x38cb5a0()*-0.0285028);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f25c0() {
   return (neuron0x38c8680()*0.0125915);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2600() {
   return (neuron0x38cd150()*-0.438384);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2640() {
   return (neuron0x38cdb20()*-0.589274);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2680() {
   return (neuron0x38ce4f0()*-0.130261);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f26c0() {
   return (neuron0x38ceec0()*-0.497867);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2150() {
   return (neuron0x38d0cd0()*-0.457048);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2190() {
   return (neuron0x38d0fb0()*-0.297447);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2810() {
   return (neuron0x38d1980()*-0.129741);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2850() {
   return (neuron0x38d2350()*-0.204916);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2890() {
   return (neuron0x38d2d20()*-0.209491);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f28d0() {
   return (neuron0x38d36f0()*-0.400892);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2910() {
   return (neuron0x38cc240()*-0.4598);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2950() {
   return (neuron0x38ccc10()*-0.357579);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2990() {
   return (neuron0x38d6480()*0.353358);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f29d0() {
   return (neuron0x38d6e50()*-0.319521);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2a10() {
   return (neuron0x38d7820()*-0.134919);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2a50() {
   return (neuron0x38d81f0()*-0.00584076);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2a90() {
   return (neuron0x38d8bc0()*-0.230823);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2ad0() {
   return (neuron0x38d9590()*0.196362);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2b10() {
   return (neuron0x38d9f60()*-0.614256);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2b50() {
   return (neuron0x38da930()*0.193447);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2700() {
   return (neuron0x38d09c0()*-0.283864);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2740() {
   return (neuron0x38dd510()*-0.166306);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2780() {
   return (neuron0x38ddee0()*-0.111383);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f27c0() {
   return (neuron0x38de8b0()*-0.581277);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2da0() {
   return (neuron0x38df280()*0.368024);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2de0() {
   return (neuron0x38dfc50()*0.0189616);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2e20() {
   return (neuron0x38e0620()*-0.603533);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2e60() {
   return (neuron0x38e0ff0()*-0.241922);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2ea0() {
   return (neuron0x38e19c0()*-0.0302988);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2ee0() {
   return (neuron0x38e25a0()*0.0358231);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2f20() {
   return (neuron0x38e2f70()*-0.35646);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2f60() {
   return (neuron0x38d3df0()*-0.297075);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2fa0() {
   return (neuron0x38d47c0()*0.355145);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f2fe0() {
   return (neuron0x38d5190()*-0.0473323);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3020() {
   return (neuron0x38e77d0()*-0.594004);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3060() {
   return (neuron0x38e8080()*-0.53487);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f30a0() {
   return (neuron0x38e8a50()*-0.470964);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f30e0() {
   return (neuron0x38e9420()*-0.300625);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3460() {
   return (neuron0x38c4290()*0.57722);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f34a0() {
   return (neuron0x38c4be0()*0.205616);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f34e0() {
   return (neuron0x38c56c0()*0.606937);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3520() {
   return (neuron0x38c5160()*0.258637);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3560() {
   return (neuron0x38c64a0()*0.727053);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f35a0() {
   return (neuron0x38c7f80()*0.549548);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f35e0() {
   return (neuron0x38c8d50()*0.379469);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3620() {
   return (neuron0x38c9720()*0.487364);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3660() {
   return (neuron0x38ca0f0()*0.521115);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f36a0() {
   return (neuron0x38cabd0()*0.255541);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f36e0() {
   return (neuron0x38cb5a0()*-0.0264661);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3720() {
   return (neuron0x38c8680()*0.382135);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3760() {
   return (neuron0x38cd150()*0.10856);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f37a0() {
   return (neuron0x38cdb20()*-0.197769);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f37e0() {
   return (neuron0x38ce4f0()*0.453333);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3820() {
   return (neuron0x38ceec0()*-0.348064);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f32b0() {
   return (neuron0x38d0cd0()*0.359096);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f32f0() {
   return (neuron0x38d0fb0()*0.301054);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3970() {
   return (neuron0x38d1980()*0.0478488);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f39b0() {
   return (neuron0x38d2350()*-0.26658);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f39f0() {
   return (neuron0x38d2d20()*0.355214);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3a30() {
   return (neuron0x38d36f0()*0.394222);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3a70() {
   return (neuron0x38cc240()*0.165992);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3ab0() {
   return (neuron0x38ccc10()*0.038126);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3af0() {
   return (neuron0x38d6480()*0.351036);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3b30() {
   return (neuron0x38d6e50()*-0.405765);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3b70() {
   return (neuron0x38d7820()*0.242115);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3bb0() {
   return (neuron0x38d81f0()*0.0407336);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3bf0() {
   return (neuron0x38d8bc0()*0.304214);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3c30() {
   return (neuron0x38d9590()*0.143305);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3c70() {
   return (neuron0x38d9f60()*0.490386);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3cb0() {
   return (neuron0x38da930()*0.63522);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3860() {
   return (neuron0x38d09c0()*0.22647);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f38a0() {
   return (neuron0x38dd510()*0.0166232);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f38e0() {
   return (neuron0x38ddee0()*0.384173);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3920() {
   return (neuron0x38de8b0()*0.511817);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3f00() {
   return (neuron0x38df280()*-0.0552074);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3f40() {
   return (neuron0x38dfc50()*-0.0691454);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3f80() {
   return (neuron0x38e0620()*0.259032);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f3fc0() {
   return (neuron0x38e0ff0()*0.572467);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f4000() {
   return (neuron0x38e19c0()*0.539099);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f4040() {
   return (neuron0x38e25a0()*-0.071835);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f4080() {
   return (neuron0x38e2f70()*0.547274);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f40c0() {
   return (neuron0x38d3df0()*0.0399895);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f4100() {
   return (neuron0x38d47c0()*0.662509);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f4140() {
   return (neuron0x38d5190()*0.704486);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f4180() {
   return (neuron0x38e77d0()*-0.508072);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f41c0() {
   return (neuron0x38e8080()*0.267526);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f4200() {
   return (neuron0x38e8a50()*0.302499);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f4240() {
   return (neuron0x38e9420()*0.0922045);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f44a0() {
   return (neuron0x38f0620()*8.41724);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f44e0() {
   return (neuron0x38f09c0()*-10.2835);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f4520() {
   return (neuron0x38f0e60()*-4.02786);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f4560() {
   return (neuron0x38f1fc0()*0.384281);
}

double NNfunction_ns_chiMinus1_uL::synapse0x38f45a0() {
   return (neuron0x38f3120()*3.58567);
}

