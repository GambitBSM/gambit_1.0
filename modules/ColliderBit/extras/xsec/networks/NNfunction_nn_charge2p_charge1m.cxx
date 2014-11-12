#include "NNfunction_nn_charge2p_charge1m.h"
#include <cmath>

double NNfunction_nn_charge2p_charge1m::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.3474)/14.8844;
   input1 = (in1 - 42.0983)/876.293;
   input2 = (in2 - 219.528)/169.501;
   input3 = (in3 - 244.753)/704.776;
   input4 = (in4 - 1027.54)/859.301;
   input5 = (in5 - 1020.16)/945.944;
   input6 = (in6 - 1024.6)/944.933;
   input7 = (in7 - 1009.35)/914.235;
   input8 = (in8 - 1023.79)/963.218;
   input9 = (in9 - 1015.31)/956.791;
   input10 = (in10 - 993.002)/914.649;
   input11 = (in11 - 930.066)/907.353;
   input12 = (in12 - 976.153)/913.272;
   input13 = (in13 - 733.371)/646.285;
   input14 = (in14 - 958.875)/882.917;
   input15 = (in15 - 960.317)/883.829;
   input16 = (in16 - 644.664)/554.792;
   input17 = (in17 - 989.97)/926.778;
   input18 = (in18 - 991.017)/928.83;
   input19 = (in19 - 953.287)/862.31;
   input20 = (in20 - -181.39)/444.826;
   input21 = (in21 - -230.092)/934.829;
   input22 = (in22 - 7.53793)/946.52;
   input23 = (in23 - 30.3055)/293.727;
   switch(index) {
     case 0:
         return neuron0x212af20();
     default:
         return 0.;
   }
}

double NNfunction_nn_charge2p_charge1m::Value(int index, double* input) {
   input0 = (input[0] - 24.3474)/14.8844;
   input1 = (input[1] - 42.0983)/876.293;
   input2 = (input[2] - 219.528)/169.501;
   input3 = (input[3] - 244.753)/704.776;
   input4 = (input[4] - 1027.54)/859.301;
   input5 = (input[5] - 1020.16)/945.944;
   input6 = (input[6] - 1024.6)/944.933;
   input7 = (input[7] - 1009.35)/914.235;
   input8 = (input[8] - 1023.79)/963.218;
   input9 = (input[9] - 1015.31)/956.791;
   input10 = (input[10] - 993.002)/914.649;
   input11 = (input[11] - 930.066)/907.353;
   input12 = (input[12] - 976.153)/913.272;
   input13 = (input[13] - 733.371)/646.285;
   input14 = (input[14] - 958.875)/882.917;
   input15 = (input[15] - 960.317)/883.829;
   input16 = (input[16] - 644.664)/554.792;
   input17 = (input[17] - 989.97)/926.778;
   input18 = (input[18] - 991.017)/928.83;
   input19 = (input[19] - 953.287)/862.31;
   input20 = (input[20] - -181.39)/444.826;
   input21 = (input[21] - -230.092)/934.829;
   input22 = (input[22] - 7.53793)/946.52;
   input23 = (input[23] - 30.3055)/293.727;
   switch(index) {
     case 0:
         return neuron0x212af20();
     default:
         return 0.;
   }
}

double NNfunction_nn_charge2p_charge1m::neuron0x20f5f90() {
   return input0;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20f6240() {
   return input1;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20f6580() {
   return input2;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20f68c0() {
   return input3;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20f6c00() {
   return input4;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20f6f40() {
   return input5;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20f7280() {
   return input6;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20f75c0() {
   return input7;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20f7900() {
   return input8;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20f7c40() {
   return input9;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20f7f80() {
   return input10;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20f82c0() {
   return input11;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20f8600() {
   return input12;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20f8940() {
   return input13;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20f8c80() {
   return input14;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20f8fc0() {
   return input15;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20f9300() {
   return input16;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20f9860() {
   return input17;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20f9ba0() {
   return input18;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20f9ee0() {
   return input19;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20fa220() {
   return input20;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20fa560() {
   return input21;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20fa8a0() {
   return input22;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20fabe0() {
   return input23;
}

double NNfunction_nn_charge2p_charge1m::input0x20fb050() {
   double input = -4.98949;
   input += synapse0x20fb390();
   input += synapse0x20fb3d0();
   input += synapse0x20fb410();
   input += synapse0x20fb450();
   input += synapse0x20fb490();
   input += synapse0x20fb4d0();
   input += synapse0x20fb510();
   input += synapse0x20fb550();
   input += synapse0x20fb590();
   input += synapse0x20fb5d0();
   input += synapse0x20fb610();
   input += synapse0x20fb650();
   input += synapse0x20fb690();
   input += synapse0x20fb6d0();
   input += synapse0x20fb710();
   input += synapse0x20fb750();
   input += synapse0x20fb1e0();
   input += synapse0x20fb220();
   input += synapse0x1eb21c0();
   input += synapse0x1eb2200();
   input += synapse0x20fb790();
   input += synapse0x20fb7d0();
   input += synapse0x20fb810();
   input += synapse0x20fb850();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20fb050() {
   double input = input0x20fb050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x20fb890() {
   double input = -2.23156;
   input += synapse0x20fbbd0();
   input += synapse0x20fbc10();
   input += synapse0x20fbc50();
   input += synapse0x20fbc90();
   input += synapse0x20fbcd0();
   input += synapse0x20fbd10();
   input += synapse0x20fbd50();
   input += synapse0x20fbd90();
   input += synapse0x20fbdd0();
   input += synapse0x1eb2010();
   input += synapse0x1eb2050();
   input += synapse0x1eb2090();
   input += synapse0x1eb20d0();
   input += synapse0x20fc020();
   input += synapse0x20fc060();
   input += synapse0x20fc0a0();
   input += synapse0x20fba20();
   input += synapse0x20fba60();
   input += synapse0x20fc1f0();
   input += synapse0x20fc230();
   input += synapse0x20fc270();
   input += synapse0x20fc2b0();
   input += synapse0x20fc2f0();
   input += synapse0x20fc330();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20fb890() {
   double input = input0x20fb890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x20fc370() {
   double input = 1.08419;
   input += synapse0x20fc6b0();
   input += synapse0x20fc6f0();
   input += synapse0x20fc730();
   input += synapse0x20fc770();
   input += synapse0x20fc7b0();
   input += synapse0x20fc7f0();
   input += synapse0x20fc830();
   input += synapse0x20fc870();
   input += synapse0x20fc8b0();
   input += synapse0x20fc8f0();
   input += synapse0x20fc930();
   input += synapse0x20fc970();
   input += synapse0x20fc9b0();
   input += synapse0x20fc9f0();
   input += synapse0x20fca30();
   input += synapse0x20fca70();
   input += synapse0x20fc500();
   input += synapse0x20fc540();
   input += synapse0xe29f50();
   input += synapse0x1ec0040();
   input += synapse0x1ec0080();
   input += synapse0x20fe9a0();
   input += synapse0x20fe9e0();
   input += synapse0x20f5cd0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20fc370() {
   double input = input0x20fc370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x20fbe10() {
   double input = 3.178;
   input += synapse0x20f5da0();
   input += synapse0x1ec08c0();
   input += synapse0x20fbfa0();
   input += synapse0x20fbfe0();
   input += synapse0x20fcbc0();
   input += synapse0x20fcc00();
   input += synapse0x20fcc40();
   input += synapse0x20fcc80();
   input += synapse0x20fccc0();
   input += synapse0x20fcd00();
   input += synapse0x20fcd40();
   input += synapse0x20fcd80();
   input += synapse0x20fcdc0();
   input += synapse0x20fce00();
   input += synapse0x20fce40();
   input += synapse0x20fce80();
   input += synapse0x20f5d10();
   input += synapse0x20f5d50();
   input += synapse0x20fcfd0();
   input += synapse0x20fd010();
   input += synapse0x20fd050();
   input += synapse0x20fd090();
   input += synapse0x20fd0d0();
   input += synapse0x20fd110();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20fbe10() {
   double input = input0x20fbe10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x20fd150() {
   double input = -0.583269;
   input += synapse0x20fd490();
   input += synapse0x20fd4d0();
   input += synapse0x20fd510();
   input += synapse0x20fd550();
   input += synapse0x20fd590();
   input += synapse0x20fd5d0();
   input += synapse0x20fd610();
   input += synapse0x20fd650();
   input += synapse0x20fd690();
   input += synapse0x20fd6d0();
   input += synapse0x20fd710();
   input += synapse0x20fd750();
   input += synapse0x20fd790();
   input += synapse0x20fd7d0();
   input += synapse0x20fd810();
   input += synapse0x20fd850();
   input += synapse0x20fd9a0();
   input += synapse0x20fd2e0();
   input += synapse0x20fd320();
   input += synapse0x20feae0();
   input += synapse0x20feb20();
   input += synapse0x20feb60();
   input += synapse0x20feba0();
   input += synapse0x20febe0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20fd150() {
   double input = input0x20fd150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x20fec20() {
   double input = 3.80357;
   input += synapse0x20fef60();
   input += synapse0x20fefa0();
   input += synapse0x20fefe0();
   input += synapse0x20ff020();
   input += synapse0x20ff060();
   input += synapse0x20ff0a0();
   input += synapse0x20ff0e0();
   input += synapse0x20ff120();
   input += synapse0x20ff160();
   input += synapse0x1ec0390();
   input += synapse0x1ec03d0();
   input += synapse0x1ec0410();
   input += synapse0x1ec0450();
   input += synapse0x1ec0490();
   input += synapse0x1ec04d0();
   input += synapse0x1ec0510();
   input += synapse0x20fedb0();
   input += synapse0x20fedf0();
   input += synapse0x1ec0660();
   input += synapse0x1ec06a0();
   input += synapse0x1ec06e0();
   input += synapse0x1ec0720();
   input += synapse0x1ec0760();
   input += synapse0x20ff9b0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20fec20() {
   double input = input0x20fec20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x20ff9f0() {
   double input = -0.624423;
   input += synapse0x20ffd30();
   input += synapse0x20ffd70();
   input += synapse0x20ffdb0();
   input += synapse0x20ffdf0();
   input += synapse0x20ffe30();
   input += synapse0x20ffe70();
   input += synapse0x20ffeb0();
   input += synapse0x20ffef0();
   input += synapse0x20fff30();
   input += synapse0x20fff70();
   input += synapse0x20fffb0();
   input += synapse0x20ffff0();
   input += synapse0x2100030();
   input += synapse0x2100070();
   input += synapse0x21000b0();
   input += synapse0x21000f0();
   input += synapse0x20ffb80();
   input += synapse0x20ffbc0();
   input += synapse0x2100240();
   input += synapse0x2100280();
   input += synapse0x21002c0();
   input += synapse0x2100300();
   input += synapse0x2100340();
   input += synapse0x2100380();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20ff9f0() {
   double input = input0x20ff9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x21003c0() {
   double input = 0.419792;
   input += synapse0x2100700();
   input += synapse0x2100740();
   input += synapse0x2100780();
   input += synapse0x21007c0();
   input += synapse0x2100800();
   input += synapse0x2100840();
   input += synapse0x2100880();
   input += synapse0x21008c0();
   input += synapse0x2100900();
   input += synapse0x2100940();
   input += synapse0x2100980();
   input += synapse0x21009c0();
   input += synapse0x2100a00();
   input += synapse0x2100a40();
   input += synapse0x2100a80();
   input += synapse0x2100ac0();
   input += synapse0x2100550();
   input += synapse0x2100590();
   input += synapse0x2100c10();
   input += synapse0x2100c50();
   input += synapse0x2100c90();
   input += synapse0x2100cd0();
   input += synapse0x2100d10();
   input += synapse0x2100d50();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x21003c0() {
   double input = input0x21003c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2100d90() {
   double input = 0.544929;
   input += synapse0x20f9750();
   input += synapse0x20f9790();
   input += synapse0x20f97d0();
   input += synapse0x20f9810();
   input += synapse0x21012e0();
   input += synapse0x2101320();
   input += synapse0x2101360();
   input += synapse0x21013a0();
   input += synapse0x21013e0();
   input += synapse0x2101420();
   input += synapse0x2101460();
   input += synapse0x21014a0();
   input += synapse0x21014e0();
   input += synapse0x2101520();
   input += synapse0x2101560();
   input += synapse0x21015a0();
   input += synapse0x2100f20();
   input += synapse0x2100f60();
   input += synapse0x21016f0();
   input += synapse0x2101730();
   input += synapse0x2101770();
   input += synapse0x21017b0();
   input += synapse0x21017f0();
   input += synapse0x2101830();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2100d90() {
   double input = input0x2100d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2101870() {
   double input = 0.9142;
   input += synapse0x2101bb0();
   input += synapse0x2101bf0();
   input += synapse0x2101c30();
   input += synapse0x2101c70();
   input += synapse0x2101cb0();
   input += synapse0x2101cf0();
   input += synapse0x2101d30();
   input += synapse0x2101d70();
   input += synapse0x2101db0();
   input += synapse0x2101df0();
   input += synapse0x2101e30();
   input += synapse0x2101e70();
   input += synapse0x2101eb0();
   input += synapse0x2101ef0();
   input += synapse0x2101f30();
   input += synapse0x2101f70();
   input += synapse0x2101a00();
   input += synapse0x2101a40();
   input += synapse0x21020c0();
   input += synapse0x2102100();
   input += synapse0x2102140();
   input += synapse0x2102180();
   input += synapse0x21021c0();
   input += synapse0x2102200();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2101870() {
   double input = input0x2101870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2102240() {
   double input = 1.02994;
   input += synapse0x2102580();
   input += synapse0x21025c0();
   input += synapse0x2102600();
   input += synapse0x2102640();
   input += synapse0x2102680();
   input += synapse0x21026c0();
   input += synapse0x2102700();
   input += synapse0x2102740();
   input += synapse0x2102780();
   input += synapse0x21027c0();
   input += synapse0x2102800();
   input += synapse0x2102840();
   input += synapse0x2102880();
   input += synapse0x21028c0();
   input += synapse0x2102900();
   input += synapse0x2102940();
   input += synapse0x21023d0();
   input += synapse0x2102410();
   input += synapse0x20ff1a0();
   input += synapse0x20ff1e0();
   input += synapse0x20ff220();
   input += synapse0x20ff260();
   input += synapse0x20ff2a0();
   input += synapse0x20ff2e0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2102240() {
   double input = input0x2102240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x20ff320() {
   double input = 0.00641162;
   input += synapse0x20ff660();
   input += synapse0x20ff6a0();
   input += synapse0x20ff6e0();
   input += synapse0x20ff720();
   input += synapse0x20ff760();
   input += synapse0x20ff7a0();
   input += synapse0x20ff7e0();
   input += synapse0x20ff820();
   input += synapse0x20ff860();
   input += synapse0x20ff8a0();
   input += synapse0x20ff8e0();
   input += synapse0x20ff920();
   input += synapse0x20ff960();
   input += synapse0x2103aa0();
   input += synapse0x2103ae0();
   input += synapse0x2103b20();
   input += synapse0x20ff4b0();
   input += synapse0x20ff4f0();
   input += synapse0x2103c70();
   input += synapse0x2103cb0();
   input += synapse0x2103cf0();
   input += synapse0x2103d30();
   input += synapse0x2103d70();
   input += synapse0x2103db0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x20ff320() {
   double input = input0x20ff320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2103df0() {
   double input = 0.308188;
   input += synapse0x2104130();
   input += synapse0x2104170();
   input += synapse0x21041b0();
   input += synapse0x21041f0();
   input += synapse0x2104230();
   input += synapse0x2104270();
   input += synapse0x21042b0();
   input += synapse0x21042f0();
   input += synapse0x2104330();
   input += synapse0x2104370();
   input += synapse0x21043b0();
   input += synapse0x21043f0();
   input += synapse0x2104430();
   input += synapse0x2104470();
   input += synapse0x21044b0();
   input += synapse0x21044f0();
   input += synapse0x2103f80();
   input += synapse0x2103fc0();
   input += synapse0x2104640();
   input += synapse0x2104680();
   input += synapse0x21046c0();
   input += synapse0x2104700();
   input += synapse0x2104740();
   input += synapse0x2104780();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2103df0() {
   double input = input0x2103df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x21047c0() {
   double input = -0.0322429;
   input += synapse0x2104b00();
   input += synapse0x2104b40();
   input += synapse0x2104b80();
   input += synapse0x2104bc0();
   input += synapse0x2104c00();
   input += synapse0x2104c40();
   input += synapse0x2104c80();
   input += synapse0x2104cc0();
   input += synapse0x2104d00();
   input += synapse0x2104d40();
   input += synapse0x2104d80();
   input += synapse0x2104dc0();
   input += synapse0x2104e00();
   input += synapse0x2104e40();
   input += synapse0x2104e80();
   input += synapse0x2104ec0();
   input += synapse0x2104950();
   input += synapse0x2104990();
   input += synapse0x2105010();
   input += synapse0x2105050();
   input += synapse0x2105090();
   input += synapse0x21050d0();
   input += synapse0x2105110();
   input += synapse0x2105150();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x21047c0() {
   double input = input0x21047c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2105190() {
   double input = 0.019782;
   input += synapse0x21054d0();
   input += synapse0x2105510();
   input += synapse0x2105550();
   input += synapse0x2105590();
   input += synapse0x21055d0();
   input += synapse0x2105610();
   input += synapse0x2105650();
   input += synapse0x2105690();
   input += synapse0x21056d0();
   input += synapse0x2105710();
   input += synapse0x2105750();
   input += synapse0x2105790();
   input += synapse0x21057d0();
   input += synapse0x2105810();
   input += synapse0x2105850();
   input += synapse0x2105890();
   input += synapse0x2105320();
   input += synapse0x2105360();
   input += synapse0x21059e0();
   input += synapse0x2105a20();
   input += synapse0x2105a60();
   input += synapse0x2105aa0();
   input += synapse0x2105ae0();
   input += synapse0x2105b20();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2105190() {
   double input = input0x2105190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2105b60() {
   double input = 0.212646;
   input += synapse0x2105ea0();
   input += synapse0x20f6120();
   input += synapse0x20f6160();
   input += synapse0x20f6460();
   input += synapse0x20f64a0();
   input += synapse0x20f67a0();
   input += synapse0x20f67e0();
   input += synapse0x20f6ae0();
   input += synapse0x20f6b20();
   input += synapse0x20f6e20();
   input += synapse0x20f6e60();
   input += synapse0x20f7160();
   input += synapse0x20f71a0();
   input += synapse0x20f74a0();
   input += synapse0x20f74e0();
   input += synapse0x20f77e0();
   input += synapse0x20f7820();
   input += synapse0x20f7b20();
   input += synapse0x20f7b60();
   input += synapse0x20f7e60();
   input += synapse0x20f7ea0();
   input += synapse0x20f81a0();
   input += synapse0x20f81e0();
   input += synapse0x20f84e0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2105b60() {
   double input = input0x2105b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2107970() {
   double input = 0.246189;
   input += synapse0x20f8520();
   input += synapse0x20f91e0();
   input += synapse0x20f9220();
   input += synapse0x2105cf0();
   input += synapse0x2105d30();
   input += synapse0x20f9520();
   input += synapse0x20f9560();
   input += synapse0x20f9a80();
   input += synapse0x20f9ac0();
   input += synapse0x20f9dc0();
   input += synapse0x20f9e00();
   input += synapse0x20fa100();
   input += synapse0x20fa140();
   input += synapse0x20fa440();
   input += synapse0x20fa480();
   input += synapse0x20fa780();
   input += synapse0x20fa7c0();
   input += synapse0x20faac0();
   input += synapse0x20fab00();
   input += synapse0x20fae00();
   input += synapse0x20fae40();
   input += synapse0x20f8820();
   input += synapse0x20f8860();
   input += synapse0x2107c10();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2107970() {
   double input = input0x2107970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2107c50() {
   double input = -2.57287;
   input += synapse0x2107f90();
   input += synapse0x2107fd0();
   input += synapse0x2108010();
   input += synapse0x2108050();
   input += synapse0x2108090();
   input += synapse0x21080d0();
   input += synapse0x2108110();
   input += synapse0x2108150();
   input += synapse0x2108190();
   input += synapse0x21081d0();
   input += synapse0x2108210();
   input += synapse0x2108250();
   input += synapse0x2108290();
   input += synapse0x21082d0();
   input += synapse0x2108310();
   input += synapse0x2108350();
   input += synapse0x2107de0();
   input += synapse0x2107e20();
   input += synapse0x21084a0();
   input += synapse0x21084e0();
   input += synapse0x2108520();
   input += synapse0x2108560();
   input += synapse0x21085a0();
   input += synapse0x21085e0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2107c50() {
   double input = input0x2107c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2108620() {
   double input = -0.638092;
   input += synapse0x2108960();
   input += synapse0x21089a0();
   input += synapse0x21089e0();
   input += synapse0x2108a20();
   input += synapse0x2108a60();
   input += synapse0x2108aa0();
   input += synapse0x2108ae0();
   input += synapse0x2108b20();
   input += synapse0x2108b60();
   input += synapse0x2108ba0();
   input += synapse0x2108be0();
   input += synapse0x2108c20();
   input += synapse0x2108c60();
   input += synapse0x2108ca0();
   input += synapse0x2108ce0();
   input += synapse0x2108d20();
   input += synapse0x21087b0();
   input += synapse0x21087f0();
   input += synapse0x2108e70();
   input += synapse0x2108eb0();
   input += synapse0x2108ef0();
   input += synapse0x2108f30();
   input += synapse0x2108f70();
   input += synapse0x2108fb0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2108620() {
   double input = input0x2108620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2108ff0() {
   double input = -1.34907;
   input += synapse0x2109330();
   input += synapse0x2109370();
   input += synapse0x21093b0();
   input += synapse0x21093f0();
   input += synapse0x2109430();
   input += synapse0x2109470();
   input += synapse0x21094b0();
   input += synapse0x21094f0();
   input += synapse0x2109530();
   input += synapse0x2109570();
   input += synapse0x21095b0();
   input += synapse0x21095f0();
   input += synapse0x2109630();
   input += synapse0x2109670();
   input += synapse0x21096b0();
   input += synapse0x21096f0();
   input += synapse0x2109180();
   input += synapse0x21091c0();
   input += synapse0x2109840();
   input += synapse0x2109880();
   input += synapse0x21098c0();
   input += synapse0x2109900();
   input += synapse0x2109940();
   input += synapse0x2109980();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2108ff0() {
   double input = input0x2108ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x21099c0() {
   double input = 3.37144;
   input += synapse0x2109d00();
   input += synapse0x2109d40();
   input += synapse0x2109d80();
   input += synapse0x2109dc0();
   input += synapse0x2109e00();
   input += synapse0x2109e40();
   input += synapse0x2109e80();
   input += synapse0x2109ec0();
   input += synapse0x2109f00();
   input += synapse0x2109f40();
   input += synapse0x2109f80();
   input += synapse0x2109fc0();
   input += synapse0x210a000();
   input += synapse0x210a040();
   input += synapse0x210a080();
   input += synapse0x210a0c0();
   input += synapse0x2109b50();
   input += synapse0x2109b90();
   input += synapse0x210a210();
   input += synapse0x210a250();
   input += synapse0x210a290();
   input += synapse0x210a2d0();
   input += synapse0x210a310();
   input += synapse0x210a350();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x21099c0() {
   double input = input0x21099c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x210a390() {
   double input = -0.556849;
   input += synapse0x210a6d0();
   input += synapse0x210a710();
   input += synapse0x210a750();
   input += synapse0x210a790();
   input += synapse0x210a7d0();
   input += synapse0x210a810();
   input += synapse0x210a850();
   input += synapse0x210a890();
   input += synapse0x210a8d0();
   input += synapse0x2102a90();
   input += synapse0x2102ad0();
   input += synapse0x2102b10();
   input += synapse0x2102b50();
   input += synapse0x2102b90();
   input += synapse0x2102bd0();
   input += synapse0x2102c10();
   input += synapse0x210a520();
   input += synapse0x210a560();
   input += synapse0x2102d60();
   input += synapse0x2102da0();
   input += synapse0x2102de0();
   input += synapse0x2102e20();
   input += synapse0x2102e60();
   input += synapse0x2102ea0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x210a390() {
   double input = input0x210a390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2102ee0() {
   double input = 2.14781;
   input += synapse0x2103220();
   input += synapse0x2103260();
   input += synapse0x21032a0();
   input += synapse0x21032e0();
   input += synapse0x2103320();
   input += synapse0x2103360();
   input += synapse0x21033a0();
   input += synapse0x21033e0();
   input += synapse0x2103420();
   input += synapse0x2103460();
   input += synapse0x21034a0();
   input += synapse0x21034e0();
   input += synapse0x2103520();
   input += synapse0x2103560();
   input += synapse0x21035a0();
   input += synapse0x21035e0();
   input += synapse0x2103070();
   input += synapse0x21030b0();
   input += synapse0x2103730();
   input += synapse0x2103770();
   input += synapse0x21037b0();
   input += synapse0x21037f0();
   input += synapse0x2103830();
   input += synapse0x2103870();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2102ee0() {
   double input = input0x2102ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x21038b0() {
   double input = -2.03602;
   input += synapse0x2103a40();
   input += synapse0x210cad0();
   input += synapse0x210cb10();
   input += synapse0x210cb50();
   input += synapse0x210cb90();
   input += synapse0x210cbd0();
   input += synapse0x210cc10();
   input += synapse0x210cc50();
   input += synapse0x210cc90();
   input += synapse0x210ccd0();
   input += synapse0x210cd10();
   input += synapse0x210cd50();
   input += synapse0x210cd90();
   input += synapse0x210cdd0();
   input += synapse0x210ce10();
   input += synapse0x210ce50();
   input += synapse0x210c920();
   input += synapse0x210c960();
   input += synapse0x210cfa0();
   input += synapse0x210cfe0();
   input += synapse0x210d020();
   input += synapse0x210d060();
   input += synapse0x210d0a0();
   input += synapse0x210d0e0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x21038b0() {
   double input = input0x21038b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x210d120() {
   double input = -1.29367;
   input += synapse0x210d460();
   input += synapse0x210d4a0();
   input += synapse0x210d4e0();
   input += synapse0x210d520();
   input += synapse0x210d560();
   input += synapse0x210d5a0();
   input += synapse0x210d5e0();
   input += synapse0x210d620();
   input += synapse0x210d660();
   input += synapse0x210d6a0();
   input += synapse0x210d6e0();
   input += synapse0x210d720();
   input += synapse0x210d760();
   input += synapse0x210d7a0();
   input += synapse0x210d7e0();
   input += synapse0x210d820();
   input += synapse0x210d2b0();
   input += synapse0x210d2f0();
   input += synapse0x210d970();
   input += synapse0x210d9b0();
   input += synapse0x210d9f0();
   input += synapse0x210da30();
   input += synapse0x210da70();
   input += synapse0x210dab0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x210d120() {
   double input = input0x210d120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x210daf0() {
   double input = -0.422279;
   input += synapse0x210de30();
   input += synapse0x210de70();
   input += synapse0x210deb0();
   input += synapse0x210def0();
   input += synapse0x210df30();
   input += synapse0x210df70();
   input += synapse0x210dfb0();
   input += synapse0x210dff0();
   input += synapse0x210e030();
   input += synapse0x210e070();
   input += synapse0x210e0b0();
   input += synapse0x210e0f0();
   input += synapse0x210e130();
   input += synapse0x210e170();
   input += synapse0x210e1b0();
   input += synapse0x210e1f0();
   input += synapse0x210dc80();
   input += synapse0x210dcc0();
   input += synapse0x210e340();
   input += synapse0x210e380();
   input += synapse0x210e3c0();
   input += synapse0x210e400();
   input += synapse0x210e440();
   input += synapse0x210e480();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x210daf0() {
   double input = input0x210daf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x210e4c0() {
   double input = 2.63475;
   input += synapse0x210e800();
   input += synapse0x210e840();
   input += synapse0x210e880();
   input += synapse0x210e8c0();
   input += synapse0x210e900();
   input += synapse0x210e940();
   input += synapse0x210e980();
   input += synapse0x210e9c0();
   input += synapse0x210ea00();
   input += synapse0x210ea40();
   input += synapse0x210ea80();
   input += synapse0x210eac0();
   input += synapse0x210eb00();
   input += synapse0x210eb40();
   input += synapse0x210eb80();
   input += synapse0x210ebc0();
   input += synapse0x210e650();
   input += synapse0x210e690();
   input += synapse0x210ed10();
   input += synapse0x210ed50();
   input += synapse0x210ed90();
   input += synapse0x210edd0();
   input += synapse0x210ee10();
   input += synapse0x210ee50();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x210e4c0() {
   double input = input0x210e4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x210ee90() {
   double input = 2.72579;
   input += synapse0x210f1d0();
   input += synapse0x210f210();
   input += synapse0x210f250();
   input += synapse0x210f290();
   input += synapse0x210f2d0();
   input += synapse0x210f310();
   input += synapse0x210f350();
   input += synapse0x210f390();
   input += synapse0x210f3d0();
   input += synapse0x210f410();
   input += synapse0x210f450();
   input += synapse0x210f490();
   input += synapse0x210f4d0();
   input += synapse0x210f510();
   input += synapse0x210f550();
   input += synapse0x210f590();
   input += synapse0x210f020();
   input += synapse0x210f060();
   input += synapse0x210f6e0();
   input += synapse0x210f720();
   input += synapse0x210f760();
   input += synapse0x210f7a0();
   input += synapse0x210f7e0();
   input += synapse0x210f820();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x210ee90() {
   double input = input0x210ee90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x210f860() {
   double input = 1.73603;
   input += synapse0x210fba0();
   input += synapse0x210fbe0();
   input += synapse0x210fc20();
   input += synapse0x210fc60();
   input += synapse0x210fca0();
   input += synapse0x210fce0();
   input += synapse0x210fd20();
   input += synapse0x210fd60();
   input += synapse0x210fda0();
   input += synapse0x210fde0();
   input += synapse0x210fe20();
   input += synapse0x210fe60();
   input += synapse0x210fea0();
   input += synapse0x210fee0();
   input += synapse0x210ff20();
   input += synapse0x210ff60();
   input += synapse0x210f9f0();
   input += synapse0x210fa30();
   input += synapse0x21100b0();
   input += synapse0x21100f0();
   input += synapse0x2110130();
   input += synapse0x2110170();
   input += synapse0x21101b0();
   input += synapse0x21101f0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x210f860() {
   double input = input0x210f860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2110230() {
   double input = 7.26191;
   input += synapse0x2110570();
   input += synapse0x21105b0();
   input += synapse0x21105f0();
   input += synapse0x2110630();
   input += synapse0x2110670();
   input += synapse0x21106b0();
   input += synapse0x21106f0();
   input += synapse0x2110730();
   input += synapse0x2110770();
   input += synapse0x21107b0();
   input += synapse0x21107f0();
   input += synapse0x2110830();
   input += synapse0x2110870();
   input += synapse0x21108b0();
   input += synapse0x21108f0();
   input += synapse0x2110930();
   input += synapse0x21103c0();
   input += synapse0x2110400();
   input += synapse0x2110a80();
   input += synapse0x2110ac0();
   input += synapse0x2110b00();
   input += synapse0x2110b40();
   input += synapse0x2110b80();
   input += synapse0x2110bc0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2110230() {
   double input = input0x2110230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2110c00() {
   double input = -1.10681;
   input += synapse0x2110f40();
   input += synapse0x2110f80();
   input += synapse0x2110fc0();
   input += synapse0x2111000();
   input += synapse0x2111040();
   input += synapse0x2111080();
   input += synapse0x21110c0();
   input += synapse0x2111100();
   input += synapse0x2111140();
   input += synapse0x2111180();
   input += synapse0x21111c0();
   input += synapse0x2111200();
   input += synapse0x2111240();
   input += synapse0x2111280();
   input += synapse0x21112c0();
   input += synapse0x2111300();
   input += synapse0x2110d90();
   input += synapse0x2110dd0();
   input += synapse0x2111450();
   input += synapse0x2111490();
   input += synapse0x21114d0();
   input += synapse0x2111510();
   input += synapse0x2111550();
   input += synapse0x2111590();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2110c00() {
   double input = input0x2110c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x21115d0() {
   double input = -5.4854;
   input += synapse0x2111910();
   input += synapse0x2105ee0();
   input += synapse0x2105f20();
   input += synapse0x2105f60();
   input += synapse0x21061b0();
   input += synapse0x21061f0();
   input += synapse0x2106230();
   input += synapse0x2106480();
   input += synapse0x21064c0();
   input += synapse0x2106710();
   input += synapse0x2106750();
   input += synapse0x2106790();
   input += synapse0x21069e0();
   input += synapse0x2106a20();
   input += synapse0x2106c70();
   input += synapse0x2106cb0();
   input += synapse0x2111760();
   input += synapse0x21117a0();
   input += synapse0x2106e00();
   input += synapse0x2107310();
   input += synapse0x2107350();
   input += synapse0x2107390();
   input += synapse0x21075e0();
   input += synapse0x2107620();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x21115d0() {
   double input = input0x21115d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2107660() {
   double input = -5.36188;
   input += synapse0x2106ed0();
   input += synapse0x2106f10();
   input += synapse0x2106f50();
   input += synapse0x2106f90();
   input += synapse0x2107910();
   input += synapse0x2113c60();
   input += synapse0x2113ca0();
   input += synapse0x2113ce0();
   input += synapse0x2113d20();
   input += synapse0x2113d60();
   input += synapse0x2113da0();
   input += synapse0x2113de0();
   input += synapse0x2113e20();
   input += synapse0x2113e60();
   input += synapse0x2113ea0();
   input += synapse0x2113ee0();
   input += synapse0x21077f0();
   input += synapse0x2107830();
   input += synapse0x2114030();
   input += synapse0x2114070();
   input += synapse0x21140b0();
   input += synapse0x21140f0();
   input += synapse0x2114130();
   input += synapse0x2114170();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2107660() {
   double input = input0x2107660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x21141b0() {
   double input = 0.288709;
   input += synapse0x21144f0();
   input += synapse0x2114530();
   input += synapse0x2114570();
   input += synapse0x21145b0();
   input += synapse0x21145f0();
   input += synapse0x2114630();
   input += synapse0x2114670();
   input += synapse0x21146b0();
   input += synapse0x21146f0();
   input += synapse0x2114730();
   input += synapse0x2114770();
   input += synapse0x21147b0();
   input += synapse0x21147f0();
   input += synapse0x2114830();
   input += synapse0x2114870();
   input += synapse0x21148b0();
   input += synapse0x2114340();
   input += synapse0x2114380();
   input += synapse0x2114a00();
   input += synapse0x2114a40();
   input += synapse0x2114a80();
   input += synapse0x2114ac0();
   input += synapse0x2114b00();
   input += synapse0x2114b40();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x21141b0() {
   double input = input0x21141b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2114b80() {
   double input = 1.24816;
   input += synapse0x2114ec0();
   input += synapse0x2114f00();
   input += synapse0x2114f40();
   input += synapse0x2114f80();
   input += synapse0x2114fc0();
   input += synapse0x2115000();
   input += synapse0x2115040();
   input += synapse0x2115080();
   input += synapse0x21150c0();
   input += synapse0x2115100();
   input += synapse0x2115140();
   input += synapse0x2115180();
   input += synapse0x21151c0();
   input += synapse0x2115200();
   input += synapse0x2115240();
   input += synapse0x2115280();
   input += synapse0x2114d10();
   input += synapse0x2114d50();
   input += synapse0x21153d0();
   input += synapse0x2115410();
   input += synapse0x2115450();
   input += synapse0x2115490();
   input += synapse0x21154d0();
   input += synapse0x2115510();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2114b80() {
   double input = input0x2114b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2115550() {
   double input = 0.199904;
   input += synapse0x2115890();
   input += synapse0x21158d0();
   input += synapse0x2115910();
   input += synapse0x2115950();
   input += synapse0x2115990();
   input += synapse0x21159d0();
   input += synapse0x2115a10();
   input += synapse0x2115a50();
   input += synapse0x2115a90();
   input += synapse0x2115ad0();
   input += synapse0x2115b10();
   input += synapse0x2115b50();
   input += synapse0x2115b90();
   input += synapse0x2115bd0();
   input += synapse0x2115c10();
   input += synapse0x2115c50();
   input += synapse0x21156e0();
   input += synapse0x2115720();
   input += synapse0x2115da0();
   input += synapse0x2115de0();
   input += synapse0x2115e20();
   input += synapse0x2115e60();
   input += synapse0x2115ea0();
   input += synapse0x2115ee0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2115550() {
   double input = input0x2115550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2115f20() {
   double input = -0.333303;
   input += synapse0x2116260();
   input += synapse0x21162a0();
   input += synapse0x21162e0();
   input += synapse0x2116320();
   input += synapse0x2116360();
   input += synapse0x21163a0();
   input += synapse0x21163e0();
   input += synapse0x2116420();
   input += synapse0x2116460();
   input += synapse0x21164a0();
   input += synapse0x21164e0();
   input += synapse0x2116520();
   input += synapse0x2116560();
   input += synapse0x21165a0();
   input += synapse0x21165e0();
   input += synapse0x2116620();
   input += synapse0x21160b0();
   input += synapse0x21160f0();
   input += synapse0x2116770();
   input += synapse0x21167b0();
   input += synapse0x21167f0();
   input += synapse0x2116830();
   input += synapse0x2116870();
   input += synapse0x21168b0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2115f20() {
   double input = input0x2115f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x21168f0() {
   double input = 2.86481;
   input += synapse0x2116c30();
   input += synapse0x2116c70();
   input += synapse0x2116cb0();
   input += synapse0x2116cf0();
   input += synapse0x2116d30();
   input += synapse0x2116d70();
   input += synapse0x2116db0();
   input += synapse0x2116df0();
   input += synapse0x2116e30();
   input += synapse0x2116e70();
   input += synapse0x2116eb0();
   input += synapse0x2116ef0();
   input += synapse0x2116f30();
   input += synapse0x2116f70();
   input += synapse0x2116fb0();
   input += synapse0x2116ff0();
   input += synapse0x2116a80();
   input += synapse0x2116ac0();
   input += synapse0x2117140();
   input += synapse0x2117180();
   input += synapse0x21171c0();
   input += synapse0x2117200();
   input += synapse0x2117240();
   input += synapse0x2117280();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x21168f0() {
   double input = input0x21168f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x21172c0() {
   double input = 0.912832;
   input += synapse0x2117600();
   input += synapse0x2117640();
   input += synapse0x2117680();
   input += synapse0x21176c0();
   input += synapse0x2117700();
   input += synapse0x2117740();
   input += synapse0x2117780();
   input += synapse0x21177c0();
   input += synapse0x2117800();
   input += synapse0x2117840();
   input += synapse0x2117880();
   input += synapse0x21178c0();
   input += synapse0x2117900();
   input += synapse0x2117940();
   input += synapse0x2117980();
   input += synapse0x21179c0();
   input += synapse0x2117450();
   input += synapse0x2117490();
   input += synapse0x2117b10();
   input += synapse0x2117b50();
   input += synapse0x2117b90();
   input += synapse0x2117bd0();
   input += synapse0x2117c10();
   input += synapse0x2117c50();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x21172c0() {
   double input = input0x21172c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2117c90() {
   double input = -0.255531;
   input += synapse0x2117fd0();
   input += synapse0x2118010();
   input += synapse0x2118050();
   input += synapse0x2118090();
   input += synapse0x21180d0();
   input += synapse0x2118110();
   input += synapse0x2118150();
   input += synapse0x2118190();
   input += synapse0x21181d0();
   input += synapse0x2118210();
   input += synapse0x2118250();
   input += synapse0x2118290();
   input += synapse0x21182d0();
   input += synapse0x2118310();
   input += synapse0x2118350();
   input += synapse0x2118390();
   input += synapse0x2117e20();
   input += synapse0x2117e60();
   input += synapse0x21184e0();
   input += synapse0x2118520();
   input += synapse0x2118560();
   input += synapse0x21185a0();
   input += synapse0x21185e0();
   input += synapse0x2118620();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2117c90() {
   double input = input0x2117c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2118660() {
   double input = 0.503436;
   input += synapse0x21010d0();
   input += synapse0x2101110();
   input += synapse0x2101150();
   input += synapse0x2101190();
   input += synapse0x21011d0();
   input += synapse0x2101210();
   input += synapse0x2101250();
   input += synapse0x2101290();
   input += synapse0x2118db0();
   input += synapse0x2118df0();
   input += synapse0x2118e30();
   input += synapse0x2118e70();
   input += synapse0x2118eb0();
   input += synapse0x2118ef0();
   input += synapse0x2118f30();
   input += synapse0x2118f70();
   input += synapse0x21187f0();
   input += synapse0x2118830();
   input += synapse0x21190c0();
   input += synapse0x2119100();
   input += synapse0x2119140();
   input += synapse0x2119180();
   input += synapse0x21191c0();
   input += synapse0x2119200();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2118660() {
   double input = input0x2118660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2119240() {
   double input = -0.820334;
   input += synapse0x2119580();
   input += synapse0x21195c0();
   input += synapse0x2119600();
   input += synapse0x2119640();
   input += synapse0x2119680();
   input += synapse0x21196c0();
   input += synapse0x2119700();
   input += synapse0x2119740();
   input += synapse0x2119780();
   input += synapse0x21197c0();
   input += synapse0x2119800();
   input += synapse0x2119840();
   input += synapse0x2119880();
   input += synapse0x21198c0();
   input += synapse0x2119900();
   input += synapse0x2119940();
   input += synapse0x21193d0();
   input += synapse0x2119410();
   input += synapse0x2119a90();
   input += synapse0x2119ad0();
   input += synapse0x2119b10();
   input += synapse0x2119b50();
   input += synapse0x2119b90();
   input += synapse0x2119bd0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2119240() {
   double input = input0x2119240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2119c10() {
   double input = 4.74649;
   input += synapse0x2119f50();
   input += synapse0x2119f90();
   input += synapse0x2119fd0();
   input += synapse0x211a010();
   input += synapse0x211a050();
   input += synapse0x211a090();
   input += synapse0x211a0d0();
   input += synapse0x211a110();
   input += synapse0x211a150();
   input += synapse0x211a190();
   input += synapse0x211a1d0();
   input += synapse0x211a210();
   input += synapse0x211a250();
   input += synapse0x211a290();
   input += synapse0x211a2d0();
   input += synapse0x211a310();
   input += synapse0x2119da0();
   input += synapse0x2119de0();
   input += synapse0x210a910();
   input += synapse0x210a950();
   input += synapse0x210a990();
   input += synapse0x210a9d0();
   input += synapse0x210aa10();
   input += synapse0x210aa50();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2119c10() {
   double input = input0x2119c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x210aa90() {
   double input = -0.0514579;
   input += synapse0x210add0();
   input += synapse0x210ae10();
   input += synapse0x210ae50();
   input += synapse0x210ae90();
   input += synapse0x210aed0();
   input += synapse0x210af10();
   input += synapse0x210af50();
   input += synapse0x210af90();
   input += synapse0x210afd0();
   input += synapse0x210b010();
   input += synapse0x210b050();
   input += synapse0x210b090();
   input += synapse0x210b0d0();
   input += synapse0x210b110();
   input += synapse0x210b150();
   input += synapse0x210b190();
   input += synapse0x210ac20();
   input += synapse0x210ac60();
   input += synapse0x210b2e0();
   input += synapse0x210b320();
   input += synapse0x210b360();
   input += synapse0x210b3a0();
   input += synapse0x210b3e0();
   input += synapse0x210b420();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x210aa90() {
   double input = input0x210aa90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x210b460() {
   double input = 1.5321;
   input += synapse0x210b7a0();
   input += synapse0x210b7e0();
   input += synapse0x210b820();
   input += synapse0x210b860();
   input += synapse0x210b8a0();
   input += synapse0x210b8e0();
   input += synapse0x210b920();
   input += synapse0x210b960();
   input += synapse0x210b9a0();
   input += synapse0x210b9e0();
   input += synapse0x210ba20();
   input += synapse0x210ba60();
   input += synapse0x210baa0();
   input += synapse0x210bae0();
   input += synapse0x210bb20();
   input += synapse0x210bb60();
   input += synapse0x210b5f0();
   input += synapse0x210b630();
   input += synapse0x210bcb0();
   input += synapse0x210bcf0();
   input += synapse0x210bd30();
   input += synapse0x210bd70();
   input += synapse0x210bdb0();
   input += synapse0x210bdf0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x210b460() {
   double input = input0x210b460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x210be30() {
   double input = -0.377128;
   input += synapse0x210c170();
   input += synapse0x210c1b0();
   input += synapse0x210c1f0();
   input += synapse0x210c230();
   input += synapse0x210c270();
   input += synapse0x210c2b0();
   input += synapse0x210c2f0();
   input += synapse0x210c330();
   input += synapse0x210c370();
   input += synapse0x210c3b0();
   input += synapse0x210c3f0();
   input += synapse0x210c430();
   input += synapse0x210c470();
   input += synapse0x210c4b0();
   input += synapse0x210c4f0();
   input += synapse0x210c530();
   input += synapse0x210bfc0();
   input += synapse0x210c000();
   input += synapse0x210c680();
   input += synapse0x210c6c0();
   input += synapse0x210c700();
   input += synapse0x210c740();
   input += synapse0x210c780();
   input += synapse0x210c7c0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x210be30() {
   double input = input0x210be30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x211e470() {
   double input = 2.04145;
   input += synapse0x211e690();
   input += synapse0x211e6d0();
   input += synapse0x211e710();
   input += synapse0x211e750();
   input += synapse0x211e790();
   input += synapse0x211e7d0();
   input += synapse0x211e810();
   input += synapse0x211e850();
   input += synapse0x211e890();
   input += synapse0x211e8d0();
   input += synapse0x211e910();
   input += synapse0x211e950();
   input += synapse0x211e990();
   input += synapse0x211e9d0();
   input += synapse0x211ea10();
   input += synapse0x211ea50();
   input += synapse0x210c800();
   input += synapse0x210c840();
   input += synapse0x211eba0();
   input += synapse0x211ebe0();
   input += synapse0x211ec20();
   input += synapse0x211ec60();
   input += synapse0x211eca0();
   input += synapse0x211ece0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x211e470() {
   double input = input0x211e470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x211ed20() {
   double input = -1.89571;
   input += synapse0x211f060();
   input += synapse0x211f0a0();
   input += synapse0x211f0e0();
   input += synapse0x211f120();
   input += synapse0x211f160();
   input += synapse0x211f1a0();
   input += synapse0x211f1e0();
   input += synapse0x211f220();
   input += synapse0x211f260();
   input += synapse0x211f2a0();
   input += synapse0x211f2e0();
   input += synapse0x211f320();
   input += synapse0x211f360();
   input += synapse0x211f3a0();
   input += synapse0x211f3e0();
   input += synapse0x211f420();
   input += synapse0x211eeb0();
   input += synapse0x211eef0();
   input += synapse0x211f570();
   input += synapse0x211f5b0();
   input += synapse0x211f5f0();
   input += synapse0x211f630();
   input += synapse0x211f670();
   input += synapse0x211f6b0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x211ed20() {
   double input = input0x211ed20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x211f6f0() {
   double input = -0.593721;
   input += synapse0x211fa30();
   input += synapse0x211fa70();
   input += synapse0x211fab0();
   input += synapse0x211faf0();
   input += synapse0x211fb30();
   input += synapse0x211fb70();
   input += synapse0x211fbb0();
   input += synapse0x211fbf0();
   input += synapse0x211fc30();
   input += synapse0x211fc70();
   input += synapse0x211fcb0();
   input += synapse0x211fcf0();
   input += synapse0x211fd30();
   input += synapse0x211fd70();
   input += synapse0x211fdb0();
   input += synapse0x211fdf0();
   input += synapse0x211f880();
   input += synapse0x211f8c0();
   input += synapse0x211ff40();
   input += synapse0x211ff80();
   input += synapse0x211ffc0();
   input += synapse0x2120000();
   input += synapse0x2120040();
   input += synapse0x2120080();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x211f6f0() {
   double input = input0x211f6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x21200c0() {
   double input = 1.94454;
   input += synapse0x2120400();
   input += synapse0x2120440();
   input += synapse0x2120480();
   input += synapse0x21204c0();
   input += synapse0x2120500();
   input += synapse0x2120540();
   input += synapse0x2120580();
   input += synapse0x21205c0();
   input += synapse0x2120600();
   input += synapse0x2120640();
   input += synapse0x2120680();
   input += synapse0x21206c0();
   input += synapse0x2120700();
   input += synapse0x2120740();
   input += synapse0x2120780();
   input += synapse0x21207c0();
   input += synapse0x2120250();
   input += synapse0x2120290();
   input += synapse0x2120910();
   input += synapse0x2120950();
   input += synapse0x2120990();
   input += synapse0x21209d0();
   input += synapse0x2120a10();
   input += synapse0x2120a50();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x21200c0() {
   double input = input0x21200c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x21272c0() {
   double input = -0.129728;
   input += synapse0x1ec0830();
   input += synapse0x1ec0870();
   input += synapse0x20fd400();
   input += synapse0x20fd440();
   input += synapse0x20feed0();
   input += synapse0x20fef10();
   input += synapse0x20ffca0();
   input += synapse0x20ffce0();
   input += synapse0x2100670();
   input += synapse0x21006b0();
   input += synapse0x2101040();
   input += synapse0x2101080();
   input += synapse0x2101b20();
   input += synapse0x2101b60();
   input += synapse0x21024f0();
   input += synapse0x2102530();
   input += synapse0x20ff5d0();
   input += synapse0x20ff610();
   input += synapse0x21040a0();
   input += synapse0x21040e0();
   input += synapse0x2104a70();
   input += synapse0x2104ab0();
   input += synapse0x2105440();
   input += synapse0x2105480();
   input += synapse0x2105e10();
   input += synapse0x2105e50();
   input += synapse0x20f8ea0();
   input += synapse0x20f8ee0();
   input += synapse0x2107f00();
   input += synapse0x2107f40();
   input += synapse0x21088d0();
   input += synapse0x2108910();
   input += synapse0x21092a0();
   input += synapse0x21092e0();
   input += synapse0x2109c70();
   input += synapse0x2109cb0();
   input += synapse0x210a640();
   input += synapse0x210a680();
   input += synapse0x2103190();
   input += synapse0x21031d0();
   input += synapse0x210ca40();
   input += synapse0x210ca80();
   input += synapse0x210d3d0();
   input += synapse0x210d410();
   input += synapse0x210dda0();
   input += synapse0x210dde0();
   input += synapse0x210e770();
   input += synapse0x210e7b0();
   input += synapse0x210f140();
   input += synapse0x210f180();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x21272c0() {
   double input = input0x21272c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2127660() {
   double input = -1.55341;
   input += synapse0x2111880();
   input += synapse0x21118c0();
   input += synapse0x2106e40();
   input += synapse0x2106e80();
   input += synapse0x2114460();
   input += synapse0x21144a0();
   input += synapse0x2114e30();
   input += synapse0x2114e70();
   input += synapse0x2115800();
   input += synapse0x2115840();
   input += synapse0x21161d0();
   input += synapse0x2116210();
   input += synapse0x2116ba0();
   input += synapse0x2116be0();
   input += synapse0x2117570();
   input += synapse0x21175b0();
   input += synapse0x2117f40();
   input += synapse0x2117f80();
   input += synapse0x2118910();
   input += synapse0x2118950();
   input += synapse0x21194f0();
   input += synapse0x2119530();
   input += synapse0x2119ec0();
   input += synapse0x2119f00();
   input += synapse0x210ad40();
   input += synapse0x210ad80();
   input += synapse0x210b710();
   input += synapse0x210b750();
   input += synapse0x210c0e0();
   input += synapse0x210c120();
   input += synapse0x211e600();
   input += synapse0x211e640();
   input += synapse0x211efd0();
   input += synapse0x211f010();
   input += synapse0x211f9a0();
   input += synapse0x211f9e0();
   input += synapse0x2120370();
   input += synapse0x21203b0();
   input += synapse0x20fb300();
   input += synapse0x20fb340();
   input += synapse0x210fb10();
   input += synapse0x210fb50();
   input += synapse0x2120a90();
   input += synapse0x2120ad0();
   input += synapse0x2120b10();
   input += synapse0x2120b50();
   input += synapse0x2127a00();
   input += synapse0x2127a40();
   input += synapse0x2127a80();
   input += synapse0x2127ac0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2127660() {
   double input = input0x2127660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2127b00() {
   double input = -0.217916;
   input += synapse0x2127e40();
   input += synapse0x2127e80();
   input += synapse0x2127ec0();
   input += synapse0x2127f00();
   input += synapse0x2127f40();
   input += synapse0x2127f80();
   input += synapse0x2127fc0();
   input += synapse0x2128000();
   input += synapse0x2128040();
   input += synapse0x2128080();
   input += synapse0x21280c0();
   input += synapse0x2128100();
   input += synapse0x2128140();
   input += synapse0x2128180();
   input += synapse0x21281c0();
   input += synapse0x2128200();
   input += synapse0x2127c90();
   input += synapse0x2127cd0();
   input += synapse0x2128350();
   input += synapse0x2128390();
   input += synapse0x21283d0();
   input += synapse0x2128410();
   input += synapse0x2128450();
   input += synapse0x2128490();
   input += synapse0x21284d0();
   input += synapse0x2128510();
   input += synapse0x2128550();
   input += synapse0x2128590();
   input += synapse0x21285d0();
   input += synapse0x2128610();
   input += synapse0x2128650();
   input += synapse0x2128690();
   input += synapse0x2128240();
   input += synapse0x2128280();
   input += synapse0x21282c0();
   input += synapse0x2128300();
   input += synapse0x21288e0();
   input += synapse0x2128920();
   input += synapse0x2128960();
   input += synapse0x21289a0();
   input += synapse0x21289e0();
   input += synapse0x2128a20();
   input += synapse0x2128a60();
   input += synapse0x2128aa0();
   input += synapse0x2128ae0();
   input += synapse0x2128b20();
   input += synapse0x2128b60();
   input += synapse0x2128ba0();
   input += synapse0x2128be0();
   input += synapse0x2128c20();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2127b00() {
   double input = input0x2127b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2128c60() {
   double input = -0.834761;
   input += synapse0x2128fa0();
   input += synapse0x2128fe0();
   input += synapse0x2129020();
   input += synapse0x2129060();
   input += synapse0x21290a0();
   input += synapse0x21290e0();
   input += synapse0x2129120();
   input += synapse0x2129160();
   input += synapse0x21291a0();
   input += synapse0x21291e0();
   input += synapse0x2129220();
   input += synapse0x2129260();
   input += synapse0x21292a0();
   input += synapse0x21292e0();
   input += synapse0x2129320();
   input += synapse0x2129360();
   input += synapse0x2128df0();
   input += synapse0x2128e30();
   input += synapse0x21294b0();
   input += synapse0x21294f0();
   input += synapse0x2129530();
   input += synapse0x2129570();
   input += synapse0x21295b0();
   input += synapse0x21295f0();
   input += synapse0x2129630();
   input += synapse0x2129670();
   input += synapse0x21296b0();
   input += synapse0x21296f0();
   input += synapse0x2129730();
   input += synapse0x2129770();
   input += synapse0x21297b0();
   input += synapse0x21297f0();
   input += synapse0x21293a0();
   input += synapse0x21293e0();
   input += synapse0x2129420();
   input += synapse0x2129460();
   input += synapse0x2129a40();
   input += synapse0x2129a80();
   input += synapse0x2129ac0();
   input += synapse0x2129b00();
   input += synapse0x2129b40();
   input += synapse0x2129b80();
   input += synapse0x2129bc0();
   input += synapse0x2129c00();
   input += synapse0x2129c40();
   input += synapse0x2129c80();
   input += synapse0x2129cc0();
   input += synapse0x2129d00();
   input += synapse0x2129d40();
   input += synapse0x2129d80();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2128c60() {
   double input = input0x2128c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x2129dc0() {
   double input = -0.875184;
   input += synapse0x212a100();
   input += synapse0x212a140();
   input += synapse0x212a180();
   input += synapse0x212a1c0();
   input += synapse0x212a200();
   input += synapse0x212a240();
   input += synapse0x212a280();
   input += synapse0x212a2c0();
   input += synapse0x212a300();
   input += synapse0x212a340();
   input += synapse0x212a380();
   input += synapse0x212a3c0();
   input += synapse0x212a400();
   input += synapse0x212a440();
   input += synapse0x212a480();
   input += synapse0x212a4c0();
   input += synapse0x2129f50();
   input += synapse0x2129f90();
   input += synapse0x212a610();
   input += synapse0x212a650();
   input += synapse0x212a690();
   input += synapse0x212a6d0();
   input += synapse0x212a710();
   input += synapse0x212a750();
   input += synapse0x212a790();
   input += synapse0x212a7d0();
   input += synapse0x212a810();
   input += synapse0x212a850();
   input += synapse0x212a890();
   input += synapse0x212a8d0();
   input += synapse0x212a910();
   input += synapse0x212a950();
   input += synapse0x212a500();
   input += synapse0x212a540();
   input += synapse0x212a580();
   input += synapse0x212a5c0();
   input += synapse0x212aba0();
   input += synapse0x212abe0();
   input += synapse0x212ac20();
   input += synapse0x212ac60();
   input += synapse0x212aca0();
   input += synapse0x212ace0();
   input += synapse0x212ad20();
   input += synapse0x212ad60();
   input += synapse0x212ada0();
   input += synapse0x212ade0();
   input += synapse0x212ae20();
   input += synapse0x212ae60();
   input += synapse0x212aea0();
   input += synapse0x212aee0();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x2129dc0() {
   double input = input0x2129dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::input0x212af20() {
   double input = 7.34934;
   input += synapse0x212b140();
   input += synapse0x212b180();
   input += synapse0x212b1c0();
   input += synapse0x212b200();
   input += synapse0x212b240();
   return input;
}

double NNfunction_nn_charge2p_charge1m::neuron0x212af20() {
   double input = input0x212af20();
   return (input * 1)+0;
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb390() {
   return (neuron0x20f5f90()*0.0688133);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb3d0() {
   return (neuron0x20f6240()*-0.00194425);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb410() {
   return (neuron0x20f6580()*-0.219684);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb450() {
   return (neuron0x20f68c0()*0.0520318);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb490() {
   return (neuron0x20f6c00()*-0.0250861);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb4d0() {
   return (neuron0x20f6f40()*-0.0133806);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb510() {
   return (neuron0x20f7280()*-0.00895349);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb550() {
   return (neuron0x20f75c0()*0.0152183);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb590() {
   return (neuron0x20f7900()*0.0153611);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb5d0() {
   return (neuron0x20f7c40()*0.000426037);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb610() {
   return (neuron0x20f7f80()*0.0179083);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb650() {
   return (neuron0x20f82c0()*-2.11397);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb690() {
   return (neuron0x20f8600()*-0.0231807);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb6d0() {
   return (neuron0x20f8940()*0.017473);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb710() {
   return (neuron0x20f8c80()*0.026017);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb750() {
   return (neuron0x20f8fc0()*-0.0235062);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb1e0() {
   return (neuron0x20f9300()*-0.00086148);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb220() {
   return (neuron0x20f9860()*0.00135741);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1eb21c0() {
   return (neuron0x20f9ba0()*-0.00236726);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1eb2200() {
   return (neuron0x20f9ee0()*0.00601203);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb790() {
   return (neuron0x20fa220()*0.029133);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb7d0() {
   return (neuron0x20fa560()*-0.0063135);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb810() {
   return (neuron0x20fa8a0()*0.00470728);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb850() {
   return (neuron0x20fabe0()*-2.45732);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fbbd0() {
   return (neuron0x20f5f90()*-0.00967516);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fbc10() {
   return (neuron0x20f6240()*-0.0116835);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fbc50() {
   return (neuron0x20f6580()*-0.405481);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fbc90() {
   return (neuron0x20f68c0()*0.0452931);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fbcd0() {
   return (neuron0x20f6c00()*0.0140515);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fbd10() {
   return (neuron0x20f6f40()*0.0407825);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fbd50() {
   return (neuron0x20f7280()*0.00510214);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fbd90() {
   return (neuron0x20f75c0()*-0.0121083);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fbdd0() {
   return (neuron0x20f7900()*-0.0175203);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1eb2010() {
   return (neuron0x20f7c40()*-0.0523696);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1eb2050() {
   return (neuron0x20f7f80()*-0.0340886);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1eb2090() {
   return (neuron0x20f82c0()*-3.42495);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1eb20d0() {
   return (neuron0x20f8600()*0.11458);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc020() {
   return (neuron0x20f8940()*0.025764);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc060() {
   return (neuron0x20f8c80()*-0.0177591);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc0a0() {
   return (neuron0x20f8fc0()*0.0440585);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fba20() {
   return (neuron0x20f9300()*0.0296234);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fba60() {
   return (neuron0x20f9860()*0.00422935);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc1f0() {
   return (neuron0x20f9ba0()*0.00302335);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc230() {
   return (neuron0x20f9ee0()*0.011283);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc270() {
   return (neuron0x20fa220()*-0.0080204);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc2b0() {
   return (neuron0x20fa560()*0.0137872);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc2f0() {
   return (neuron0x20fa8a0()*-0.00307556);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc330() {
   return (neuron0x20fabe0()*1.02674);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc6b0() {
   return (neuron0x20f5f90()*-0.107518);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc6f0() {
   return (neuron0x20f6240()*0.415754);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc730() {
   return (neuron0x20f6580()*-0.202034);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc770() {
   return (neuron0x20f68c0()*-0.620885);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc7b0() {
   return (neuron0x20f6c00()*0.348263);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc7f0() {
   return (neuron0x20f6f40()*0.124996);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc830() {
   return (neuron0x20f7280()*0.292477);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc870() {
   return (neuron0x20f75c0()*0.219708);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc8b0() {
   return (neuron0x20f7900()*-0.224817);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc8f0() {
   return (neuron0x20f7c40()*0.705127);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc930() {
   return (neuron0x20f7f80()*-0.296429);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc970() {
   return (neuron0x20f82c0()*-0.6316);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc9b0() {
   return (neuron0x20f8600()*0.234284);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc9f0() {
   return (neuron0x20f8940()*-0.619903);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fca30() {
   return (neuron0x20f8c80()*0.685872);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fca70() {
   return (neuron0x20f8fc0()*-0.878247);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc500() {
   return (neuron0x20f9300()*-0.095204);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fc540() {
   return (neuron0x20f9860()*0.817362);
}

double NNfunction_nn_charge2p_charge1m::synapse0xe29f50() {
   return (neuron0x20f9ba0()*0.449397);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1ec0040() {
   return (neuron0x20f9ee0()*0.322464);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1ec0080() {
   return (neuron0x20fa220()*0.555038);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fe9a0() {
   return (neuron0x20fa560()*-0.406244);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fe9e0() {
   return (neuron0x20fa8a0()*-0.0372549);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f5cd0() {
   return (neuron0x20fabe0()*-0.879504);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f5da0() {
   return (neuron0x20f5f90()*0.0816588);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1ec08c0() {
   return (neuron0x20f6240()*0.0175297);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fbfa0() {
   return (neuron0x20f6580()*3.01565);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fbfe0() {
   return (neuron0x20f68c0()*-0.0236614);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fcbc0() {
   return (neuron0x20f6c00()*0.0470652);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fcc00() {
   return (neuron0x20f6f40()*0.00513269);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fcc40() {
   return (neuron0x20f7280()*0.11174);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fcc80() {
   return (neuron0x20f75c0()*-0.0338502);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fccc0() {
   return (neuron0x20f7900()*-0.00106592);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fcd00() {
   return (neuron0x20f7c40()*0.0157138);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fcd40() {
   return (neuron0x20f7f80()*-0.00115092);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fcd80() {
   return (neuron0x20f82c0()*-0.324354);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fcdc0() {
   return (neuron0x20f8600()*0.0186969);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fce00() {
   return (neuron0x20f8940()*0.0128883);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fce40() {
   return (neuron0x20f8c80()*-0.0524732);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fce80() {
   return (neuron0x20f8fc0()*0.024284);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f5d10() {
   return (neuron0x20f9300()*0.0333839);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f5d50() {
   return (neuron0x20f9860()*0.0113016);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fcfd0() {
   return (neuron0x20f9ba0()*-0.0164898);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd010() {
   return (neuron0x20f9ee0()*-0.0272196);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd050() {
   return (neuron0x20fa220()*0.0121477);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd090() {
   return (neuron0x20fa560()*-0.0119102);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd0d0() {
   return (neuron0x20fa8a0()*0.0478999);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd110() {
   return (neuron0x20fabe0()*-4.7355);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd490() {
   return (neuron0x20f5f90()*0.00763963);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd4d0() {
   return (neuron0x20f6240()*-0.0143289);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd510() {
   return (neuron0x20f6580()*-0.0467762);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd550() {
   return (neuron0x20f68c0()*0.352533);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd590() {
   return (neuron0x20f6c00()*-0.0178508);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd5d0() {
   return (neuron0x20f6f40()*0.0269913);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd610() {
   return (neuron0x20f7280()*-0.0172868);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd650() {
   return (neuron0x20f75c0()*0.0170216);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd690() {
   return (neuron0x20f7900()*0.00109719);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd6d0() {
   return (neuron0x20f7c40()*-0.00135893);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd710() {
   return (neuron0x20f7f80()*0.00418136);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd750() {
   return (neuron0x20f82c0()*-1.96538);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd790() {
   return (neuron0x20f8600()*-0.00117108);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd7d0() {
   return (neuron0x20f8940()*-0.00267259);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd810() {
   return (neuron0x20f8c80()*0.00666765);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd850() {
   return (neuron0x20f8fc0()*-0.00606535);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd9a0() {
   return (neuron0x20f9300()*0.0064886);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd2e0() {
   return (neuron0x20f9860()*-0.00219866);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd320() {
   return (neuron0x20f9ba0()*-0.0238084);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20feae0() {
   return (neuron0x20f9ee0()*0.00267157);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20feb20() {
   return (neuron0x20fa220()*-0.00105736);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20feb60() {
   return (neuron0x20fa560()*0.00828174);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20feba0() {
   return (neuron0x20fa8a0()*0.0071488);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20febe0() {
   return (neuron0x20fabe0()*-0.274189);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fef60() {
   return (neuron0x20f5f90()*-0.0302212);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fefa0() {
   return (neuron0x20f6240()*-0.000437845);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fefe0() {
   return (neuron0x20f6580()*2.51732);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff020() {
   return (neuron0x20f68c0()*0.0401225);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff060() {
   return (neuron0x20f6c00()*-0.00468779);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff0a0() {
   return (neuron0x20f6f40()*0.0184564);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff0e0() {
   return (neuron0x20f7280()*0.00787221);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff120() {
   return (neuron0x20f75c0()*0.0231325);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff160() {
   return (neuron0x20f7900()*-0.0035729);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1ec0390() {
   return (neuron0x20f7c40()*-0.0102422);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1ec03d0() {
   return (neuron0x20f7f80()*-0.0284053);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1ec0410() {
   return (neuron0x20f82c0()*0.255227);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1ec0450() {
   return (neuron0x20f8600()*0.0420004);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1ec0490() {
   return (neuron0x20f8940()*0.0266081);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1ec04d0() {
   return (neuron0x20f8c80()*-0.00939656);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1ec0510() {
   return (neuron0x20f8fc0()*-0.0101027);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fedb0() {
   return (neuron0x20f9300()*-0.00952572);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fedf0() {
   return (neuron0x20f9860()*-0.00523727);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1ec0660() {
   return (neuron0x20f9ba0()*0.0156853);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1ec06a0() {
   return (neuron0x20f9ee0()*0.0135346);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1ec06e0() {
   return (neuron0x20fa220()*0.0107745);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1ec0720() {
   return (neuron0x20fa560()*0.00517017);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1ec0760() {
   return (neuron0x20fa8a0()*-0.0150363);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff9b0() {
   return (neuron0x20fabe0()*3.46984);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ffd30() {
   return (neuron0x20f5f90()*-0.735975);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ffd70() {
   return (neuron0x20f6240()*0.479814);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ffdb0() {
   return (neuron0x20f6580()*-0.0232361);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ffdf0() {
   return (neuron0x20f68c0()*-0.192237);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ffe30() {
   return (neuron0x20f6c00()*-1.31909);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ffe70() {
   return (neuron0x20f6f40()*-0.166155);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ffeb0() {
   return (neuron0x20f7280()*0.769111);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ffef0() {
   return (neuron0x20f75c0()*-0.011594);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fff30() {
   return (neuron0x20f7900()*0.678513);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fff70() {
   return (neuron0x20f7c40()*-1.05585);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fffb0() {
   return (neuron0x20f7f80()*0.646527);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ffff0() {
   return (neuron0x20f82c0()*-0.00510722);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100030() {
   return (neuron0x20f8600()*0.785764);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100070() {
   return (neuron0x20f8940()*0.325864);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21000b0() {
   return (neuron0x20f8c80()*-0.602586);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21000f0() {
   return (neuron0x20f8fc0()*0.973015);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ffb80() {
   return (neuron0x20f9300()*-1.13253);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ffbc0() {
   return (neuron0x20f9860()*-0.601751);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100240() {
   return (neuron0x20f9ba0()*-0.644343);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100280() {
   return (neuron0x20f9ee0()*-0.672949);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21002c0() {
   return (neuron0x20fa220()*0.738817);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100300() {
   return (neuron0x20fa560()*-1.15769);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100340() {
   return (neuron0x20fa8a0()*0.534982);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100380() {
   return (neuron0x20fabe0()*-0.126156);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100700() {
   return (neuron0x20f5f90()*0.15778);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100740() {
   return (neuron0x20f6240()*0.147018);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100780() {
   return (neuron0x20f6580()*0.187051);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21007c0() {
   return (neuron0x20f68c0()*1.01565);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100800() {
   return (neuron0x20f6c00()*-0.377978);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100840() {
   return (neuron0x20f6f40()*0.465868);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100880() {
   return (neuron0x20f7280()*0.0661281);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21008c0() {
   return (neuron0x20f75c0()*0.258536);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100900() {
   return (neuron0x20f7900()*0.216495);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100940() {
   return (neuron0x20f7c40()*-0.0748207);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100980() {
   return (neuron0x20f7f80()*-0.358076);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21009c0() {
   return (neuron0x20f82c0()*0.711308);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100a00() {
   return (neuron0x20f8600()*0.037285);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100a40() {
   return (neuron0x20f8940()*-0.456849);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100a80() {
   return (neuron0x20f8c80()*-0.198997);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100ac0() {
   return (neuron0x20f8fc0()*0.441793);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100550() {
   return (neuron0x20f9300()*0.911655);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100590() {
   return (neuron0x20f9860()*0.595341);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100c10() {
   return (neuron0x20f9ba0()*-0.2229);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100c50() {
   return (neuron0x20f9ee0()*-0.250954);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100c90() {
   return (neuron0x20fa220()*-0.528827);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100cd0() {
   return (neuron0x20fa560()*0.0053854);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100d10() {
   return (neuron0x20fa8a0()*-0.17814);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100d50() {
   return (neuron0x20fabe0()*-0.293054);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f9750() {
   return (neuron0x20f5f90()*-0.0174755);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f9790() {
   return (neuron0x20f6240()*-0.008683);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f97d0() {
   return (neuron0x20f6580()*0.136092);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f9810() {
   return (neuron0x20f68c0()*-1.82401);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21012e0() {
   return (neuron0x20f6c00()*-0.00528004);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101320() {
   return (neuron0x20f6f40()*0.0189248);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101360() {
   return (neuron0x20f7280()*-0.00128444);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21013a0() {
   return (neuron0x20f75c0()*0.0278416);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21013e0() {
   return (neuron0x20f7900()*-0.0132662);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101420() {
   return (neuron0x20f7c40()*0.00819118);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101460() {
   return (neuron0x20f7f80()*0.00437495);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21014a0() {
   return (neuron0x20f82c0()*-1.13041);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21014e0() {
   return (neuron0x20f8600()*-0.0193768);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101520() {
   return (neuron0x20f8940()*-0.0380796);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101560() {
   return (neuron0x20f8c80()*0.00399465);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21015a0() {
   return (neuron0x20f8fc0()*0.00518489);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100f20() {
   return (neuron0x20f9300()*-0.0204273);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100f60() {
   return (neuron0x20f9860()*0.00766439);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21016f0() {
   return (neuron0x20f9ba0()*-0.000366381);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101730() {
   return (neuron0x20f9ee0()*0.00589855);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101770() {
   return (neuron0x20fa220()*0.0139108);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21017b0() {
   return (neuron0x20fa560()*0.00103874);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21017f0() {
   return (neuron0x20fa8a0()*0.00732561);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101830() {
   return (neuron0x20fabe0()*-0.128236);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101bb0() {
   return (neuron0x20f5f90()*-1.01997);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101bf0() {
   return (neuron0x20f6240()*-0.289462);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101c30() {
   return (neuron0x20f6580()*1.95905);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101c70() {
   return (neuron0x20f68c0()*-0.501537);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101cb0() {
   return (neuron0x20f6c00()*0.358418);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101cf0() {
   return (neuron0x20f6f40()*0.253445);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101d30() {
   return (neuron0x20f7280()*-0.558542);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101d70() {
   return (neuron0x20f75c0()*0.139631);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101db0() {
   return (neuron0x20f7900()*0.419223);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101df0() {
   return (neuron0x20f7c40()*-0.553447);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101e30() {
   return (neuron0x20f7f80()*0.411024);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101e70() {
   return (neuron0x20f82c0()*0.133842);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101eb0() {
   return (neuron0x20f8600()*0.319631);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101ef0() {
   return (neuron0x20f8940()*0.474169);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101f30() {
   return (neuron0x20f8c80()*-1.53149);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101f70() {
   return (neuron0x20f8fc0()*0.231552);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101a00() {
   return (neuron0x20f9300()*-0.209556);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101a40() {
   return (neuron0x20f9860()*-0.0271394);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21020c0() {
   return (neuron0x20f9ba0()*0.614558);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102100() {
   return (neuron0x20f9ee0()*-0.2533);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102140() {
   return (neuron0x20fa220()*0.136869);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102180() {
   return (neuron0x20fa560()*0.214914);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21021c0() {
   return (neuron0x20fa8a0()*-0.617923);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102200() {
   return (neuron0x20fabe0()*-0.492371);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102580() {
   return (neuron0x20f5f90()*-0.128096);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21025c0() {
   return (neuron0x20f6240()*-0.0110432);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102600() {
   return (neuron0x20f6580()*-0.248895);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102640() {
   return (neuron0x20f68c0()*0.00716783);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102680() {
   return (neuron0x20f6c00()*0.00909016);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21026c0() {
   return (neuron0x20f6f40()*-0.0121858);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102700() {
   return (neuron0x20f7280()*-0.0225067);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102740() {
   return (neuron0x20f75c0()*0.0293006);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102780() {
   return (neuron0x20f7900()*-0.0473698);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21027c0() {
   return (neuron0x20f7c40()*-0.0017817);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102800() {
   return (neuron0x20f7f80()*-0.0540677);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102840() {
   return (neuron0x20f82c0()*0.130816);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102880() {
   return (neuron0x20f8600()*-0.0488514);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21028c0() {
   return (neuron0x20f8940()*-0.0272381);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102900() {
   return (neuron0x20f8c80()*0.00880083);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102940() {
   return (neuron0x20f8fc0()*-0.0464444);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21023d0() {
   return (neuron0x20f9300()*-0.0147109);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102410() {
   return (neuron0x20f9860()*-0.0190221);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff1a0() {
   return (neuron0x20f9ba0()*0.0219733);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff1e0() {
   return (neuron0x20f9ee0()*0.0295763);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff220() {
   return (neuron0x20fa220()*-0.0175027);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff260() {
   return (neuron0x20fa560()*0.00452038);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff2a0() {
   return (neuron0x20fa8a0()*0.0112358);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff2e0() {
   return (neuron0x20fabe0()*-1.66095);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff660() {
   return (neuron0x20f5f90()*-0.801634);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff6a0() {
   return (neuron0x20f6240()*0.381605);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff6e0() {
   return (neuron0x20f6580()*-0.980045);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff720() {
   return (neuron0x20f68c0()*0.944716);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff760() {
   return (neuron0x20f6c00()*0.462604);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff7a0() {
   return (neuron0x20f6f40()*0.370814);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff7e0() {
   return (neuron0x20f7280()*-0.0491586);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff820() {
   return (neuron0x20f75c0()*-0.292319);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff860() {
   return (neuron0x20f7900()*0.153999);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff8a0() {
   return (neuron0x20f7c40()*-1.46061);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff8e0() {
   return (neuron0x20f7f80()*0.988319);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff920() {
   return (neuron0x20f82c0()*0.193734);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff960() {
   return (neuron0x20f8600()*-0.0947541);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103aa0() {
   return (neuron0x20f8940()*-0.0756749);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103ae0() {
   return (neuron0x20f8c80()*-0.0580379);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103b20() {
   return (neuron0x20f8fc0()*0.0531018);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff4b0() {
   return (neuron0x20f9300()*0.946716);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff4f0() {
   return (neuron0x20f9860()*-0.174985);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103c70() {
   return (neuron0x20f9ba0()*0.249762);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103cb0() {
   return (neuron0x20f9ee0()*0.321928);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103cf0() {
   return (neuron0x20fa220()*-0.100108);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103d30() {
   return (neuron0x20fa560()*-0.17978);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103d70() {
   return (neuron0x20fa8a0()*0.134753);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103db0() {
   return (neuron0x20fabe0()*0.326111);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104130() {
   return (neuron0x20f5f90()*-1.22919);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104170() {
   return (neuron0x20f6240()*0.371809);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21041b0() {
   return (neuron0x20f6580()*-0.1516);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21041f0() {
   return (neuron0x20f68c0()*0.0450437);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104230() {
   return (neuron0x20f6c00()*0.0163851);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104270() {
   return (neuron0x20f6f40()*-1.44376);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21042b0() {
   return (neuron0x20f7280()*-0.145115);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21042f0() {
   return (neuron0x20f75c0()*0.329112);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104330() {
   return (neuron0x20f7900()*-0.514234);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104370() {
   return (neuron0x20f7c40()*0.0442561);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21043b0() {
   return (neuron0x20f7f80()*0.117513);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21043f0() {
   return (neuron0x20f82c0()*0.293419);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104430() {
   return (neuron0x20f8600()*0.242232);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104470() {
   return (neuron0x20f8940()*0.255787);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21044b0() {
   return (neuron0x20f8c80()*1.09788);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21044f0() {
   return (neuron0x20f8fc0()*0.167494);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103f80() {
   return (neuron0x20f9300()*-0.271278);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103fc0() {
   return (neuron0x20f9860()*-1.77676);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104640() {
   return (neuron0x20f9ba0()*0.08865);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104680() {
   return (neuron0x20f9ee0()*-0.0553378);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21046c0() {
   return (neuron0x20fa220()*0.272563);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104700() {
   return (neuron0x20fa560()*0.430923);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104740() {
   return (neuron0x20fa8a0()*-1.02871);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104780() {
   return (neuron0x20fabe0()*0.368054);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104b00() {
   return (neuron0x20f5f90()*0.216858);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104b40() {
   return (neuron0x20f6240()*-0.0906562);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104b80() {
   return (neuron0x20f6580()*0.200147);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104bc0() {
   return (neuron0x20f68c0()*-0.233534);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104c00() {
   return (neuron0x20f6c00()*0.224167);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104c40() {
   return (neuron0x20f6f40()*-0.192446);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104c80() {
   return (neuron0x20f7280()*0.129936);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104cc0() {
   return (neuron0x20f75c0()*-0.285331);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104d00() {
   return (neuron0x20f7900()*0.103193);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104d40() {
   return (neuron0x20f7c40()*-0.155183);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104d80() {
   return (neuron0x20f7f80()*0.254212);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104dc0() {
   return (neuron0x20f82c0()*-0.0420156);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104e00() {
   return (neuron0x20f8600()*0.285088);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104e40() {
   return (neuron0x20f8940()*-0.0317745);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104e80() {
   return (neuron0x20f8c80()*-0.0978275);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104ec0() {
   return (neuron0x20f8fc0()*0.13586);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104950() {
   return (neuron0x20f9300()*0.148887);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104990() {
   return (neuron0x20f9860()*0.225562);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105010() {
   return (neuron0x20f9ba0()*0.0534245);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105050() {
   return (neuron0x20f9ee0()*-0.193343);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105090() {
   return (neuron0x20fa220()*0.0674302);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21050d0() {
   return (neuron0x20fa560()*-0.171535);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105110() {
   return (neuron0x20fa8a0()*0.0123115);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105150() {
   return (neuron0x20fabe0()*0.432257);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21054d0() {
   return (neuron0x20f5f90()*0.15414);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105510() {
   return (neuron0x20f6240()*0.00234624);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105550() {
   return (neuron0x20f6580()*0.620096);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105590() {
   return (neuron0x20f68c0()*0.0123322);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21055d0() {
   return (neuron0x20f6c00()*-0.019967);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105610() {
   return (neuron0x20f6f40()*-0.0291138);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105650() {
   return (neuron0x20f7280()*0.0118348);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105690() {
   return (neuron0x20f75c0()*-0.00133302);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21056d0() {
   return (neuron0x20f7900()*-0.00278497);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105710() {
   return (neuron0x20f7c40()*0.00896609);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105750() {
   return (neuron0x20f7f80()*0.0146216);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105790() {
   return (neuron0x20f82c0()*0.478576);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21057d0() {
   return (neuron0x20f8600()*0.0254741);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105810() {
   return (neuron0x20f8940()*0.0248644);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105850() {
   return (neuron0x20f8c80()*-0.000564177);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105890() {
   return (neuron0x20f8fc0()*-0.0240993);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105320() {
   return (neuron0x20f9300()*0.028759);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105360() {
   return (neuron0x20f9860()*-0.0304219);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21059e0() {
   return (neuron0x20f9ba0()*-0.019619);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105a20() {
   return (neuron0x20f9ee0()*-0.00614685);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105a60() {
   return (neuron0x20fa220()*-0.031082);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105aa0() {
   return (neuron0x20fa560()*0.0161186);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105ae0() {
   return (neuron0x20fa8a0()*0.00768071);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105b20() {
   return (neuron0x20fabe0()*-2.04188);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105ea0() {
   return (neuron0x20f5f90()*0.139567);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f6120() {
   return (neuron0x20f6240()*-0.0470715);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f6160() {
   return (neuron0x20f6580()*0.900483);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f6460() {
   return (neuron0x20f68c0()*-0.168939);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f64a0() {
   return (neuron0x20f6c00()*0.0517834);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f67a0() {
   return (neuron0x20f6f40()*-0.0462192);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f67e0() {
   return (neuron0x20f7280()*0.0281937);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f6ae0() {
   return (neuron0x20f75c0()*-0.0872879);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f6b20() {
   return (neuron0x20f7900()*0.0835991);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f6e20() {
   return (neuron0x20f7c40()*-0.0447368);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f6e60() {
   return (neuron0x20f7f80()*0.0878155);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f7160() {
   return (neuron0x20f82c0()*-0.114836);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f71a0() {
   return (neuron0x20f8600()*0.145896);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f74a0() {
   return (neuron0x20f8940()*1.3817e-05);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f74e0() {
   return (neuron0x20f8c80()*-0.0177047);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f77e0() {
   return (neuron0x20f8fc0()*0.0822218);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f7820() {
   return (neuron0x20f9300()*0.0882018);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f7b20() {
   return (neuron0x20f9860()*0.113168);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f7b60() {
   return (neuron0x20f9ba0()*-0.03954);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f7e60() {
   return (neuron0x20f9ee0()*-0.117896);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f7ea0() {
   return (neuron0x20fa220()*-0.00025136);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f81a0() {
   return (neuron0x20fa560()*-0.0481222);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f81e0() {
   return (neuron0x20fa8a0()*0.0186125);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f84e0() {
   return (neuron0x20fabe0()*1.40696);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f8520() {
   return (neuron0x20f5f90()*-0.192294);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f91e0() {
   return (neuron0x20f6240()*0.409988);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f9220() {
   return (neuron0x20f6580()*0.981495);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105cf0() {
   return (neuron0x20f68c0()*0.0474895);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105d30() {
   return (neuron0x20f6c00()*-0.109066);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f9520() {
   return (neuron0x20f6f40()*-0.0828845);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f9560() {
   return (neuron0x20f7280()*0.012576);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f9a80() {
   return (neuron0x20f75c0()*-0.397929);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f9ac0() {
   return (neuron0x20f7900()*0.111849);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f9dc0() {
   return (neuron0x20f7c40()*-0.341591);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f9e00() {
   return (neuron0x20f7f80()*0.0358317);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fa100() {
   return (neuron0x20f82c0()*-0.529511);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fa140() {
   return (neuron0x20f8600()*-0.142668);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fa440() {
   return (neuron0x20f8940()*-1.38738);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fa480() {
   return (neuron0x20f8c80()*-0.841954);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fa780() {
   return (neuron0x20f8fc0()*-0.416604);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fa7c0() {
   return (neuron0x20f9300()*-0.154327);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20faac0() {
   return (neuron0x20f9860()*-0.74225);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fab00() {
   return (neuron0x20f9ba0()*-0.680672);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fae00() {
   return (neuron0x20f9ee0()*0.166443);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fae40() {
   return (neuron0x20fa220()*-0.801269);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f8820() {
   return (neuron0x20fa560()*0.796674);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f8860() {
   return (neuron0x20fa8a0()*-0.30024);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2107c10() {
   return (neuron0x20fabe0()*-0.885533);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2107f90() {
   return (neuron0x20f5f90()*0.0111226);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2107fd0() {
   return (neuron0x20f6240()*0.0014924);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108010() {
   return (neuron0x20f6580()*-0.139875);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108050() {
   return (neuron0x20f68c0()*0.0111873);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108090() {
   return (neuron0x20f6c00()*-0.0102611);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21080d0() {
   return (neuron0x20f6f40()*-0.0037976);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108110() {
   return (neuron0x20f7280()*0.00404226);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108150() {
   return (neuron0x20f75c0()*-0.00421721);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108190() {
   return (neuron0x20f7900()*0.0097349);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21081d0() {
   return (neuron0x20f7c40()*0.000796661);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108210() {
   return (neuron0x20f7f80()*0.0107955);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108250() {
   return (neuron0x20f82c0()*0.299483);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108290() {
   return (neuron0x20f8600()*0.00229147);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21082d0() {
   return (neuron0x20f8940()*0.00181343);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108310() {
   return (neuron0x20f8c80()*0.0065746);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108350() {
   return (neuron0x20f8fc0()*0.00425683);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2107de0() {
   return (neuron0x20f9300()*0.0119962);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2107e20() {
   return (neuron0x20f9860()*0.00533065);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21084a0() {
   return (neuron0x20f9ba0()*0.00599136);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21084e0() {
   return (neuron0x20f9ee0()*-0.00744493);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108520() {
   return (neuron0x20fa220()*0.0140061);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108560() {
   return (neuron0x20fa560()*-0.00136383);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21085a0() {
   return (neuron0x20fa8a0()*0.00148883);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21085e0() {
   return (neuron0x20fabe0()*-1.85216);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108960() {
   return (neuron0x20f5f90()*-0.0399505);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21089a0() {
   return (neuron0x20f6240()*-0.0332918);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21089e0() {
   return (neuron0x20f6580()*-1.48213);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108a20() {
   return (neuron0x20f68c0()*0.00369625);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108a60() {
   return (neuron0x20f6c00()*0.0637917);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108aa0() {
   return (neuron0x20f6f40()*0.00454895);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108ae0() {
   return (neuron0x20f7280()*0.0589879);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108b20() {
   return (neuron0x20f75c0()*-0.0499218);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108b60() {
   return (neuron0x20f7900()*0.0149587);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108ba0() {
   return (neuron0x20f7c40()*-0.0581061);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108be0() {
   return (neuron0x20f7f80()*-0.00463424);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108c20() {
   return (neuron0x20f82c0()*0.627139);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108c60() {
   return (neuron0x20f8600()*0.125447);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108ca0() {
   return (neuron0x20f8940()*0.0068425);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108ce0() {
   return (neuron0x20f8c80()*-0.0917869);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108d20() {
   return (neuron0x20f8fc0()*0.024804);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21087b0() {
   return (neuron0x20f9300()*0.0520984);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21087f0() {
   return (neuron0x20f9860()*0.0668113);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108e70() {
   return (neuron0x20f9ba0()*-0.00570514);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108eb0() {
   return (neuron0x20f9ee0()*-0.0630335);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108ef0() {
   return (neuron0x20fa220()*0.00443408);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108f30() {
   return (neuron0x20fa560()*-0.00201817);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108f70() {
   return (neuron0x20fa8a0()*0.0225373);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108fb0() {
   return (neuron0x20fabe0()*2.29484);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109330() {
   return (neuron0x20f5f90()*-0.449045);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109370() {
   return (neuron0x20f6240()*0.00671658);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21093b0() {
   return (neuron0x20f6580()*0.480273);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21093f0() {
   return (neuron0x20f68c0()*0.00499507);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109430() {
   return (neuron0x20f6c00()*0.00967004);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109470() {
   return (neuron0x20f6f40()*0.0319093);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21094b0() {
   return (neuron0x20f7280()*-0.00732661);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21094f0() {
   return (neuron0x20f75c0()*0.0235844);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109530() {
   return (neuron0x20f7900()*-0.00702511);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109570() {
   return (neuron0x20f7c40()*-0.0190594);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21095b0() {
   return (neuron0x20f7f80()*-0.0114693);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21095f0() {
   return (neuron0x20f82c0()*0.334765);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109630() {
   return (neuron0x20f8600()*-0.0226897);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109670() {
   return (neuron0x20f8940()*0.00787937);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21096b0() {
   return (neuron0x20f8c80()*-0.00265857);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21096f0() {
   return (neuron0x20f8fc0()*0.00220784);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109180() {
   return (neuron0x20f9300()*-0.0140322);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21091c0() {
   return (neuron0x20f9860()*-0.0286297);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109840() {
   return (neuron0x20f9ba0()*0.0125822);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109880() {
   return (neuron0x20f9ee0()*0.00244137);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21098c0() {
   return (neuron0x20fa220()*-0.00419272);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109900() {
   return (neuron0x20fa560()*-0.00695351);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109940() {
   return (neuron0x20fa8a0()*-0.0100084);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109980() {
   return (neuron0x20fabe0()*0.0210545);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109d00() {
   return (neuron0x20f5f90()*-0.00868414);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109d40() {
   return (neuron0x20f6240()*-0.00242241);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109d80() {
   return (neuron0x20f6580()*-0.0863042);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109dc0() {
   return (neuron0x20f68c0()*-0.0415456);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109e00() {
   return (neuron0x20f6c00()*0.000986084);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109e40() {
   return (neuron0x20f6f40()*-0.0299397);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109e80() {
   return (neuron0x20f7280()*-0.00743949);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109ec0() {
   return (neuron0x20f75c0()*0.0241272);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109f00() {
   return (neuron0x20f7900()*0.00468085);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109f40() {
   return (neuron0x20f7c40()*0.04395);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109f80() {
   return (neuron0x20f7f80()*0.0163373);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109fc0() {
   return (neuron0x20f82c0()*3.60661);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a000() {
   return (neuron0x20f8600()*-0.035369);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a040() {
   return (neuron0x20f8940()*-0.0117865);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a080() {
   return (neuron0x20f8c80()*0.0162941);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a0c0() {
   return (neuron0x20f8fc0()*-0.0250152);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109b50() {
   return (neuron0x20f9300()*0.00149089);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109b90() {
   return (neuron0x20f9860()*0.00450535);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a210() {
   return (neuron0x20f9ba0()*-0.0141117);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a250() {
   return (neuron0x20f9ee0()*-0.00245496);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a290() {
   return (neuron0x20fa220()*0.0146459);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a2d0() {
   return (neuron0x20fa560()*-0.0144907);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a310() {
   return (neuron0x20fa8a0()*0.0115953);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a350() {
   return (neuron0x20fabe0()*-1.5875);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a6d0() {
   return (neuron0x20f5f90()*0.0320836);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a710() {
   return (neuron0x20f6240()*0.00313546);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a750() {
   return (neuron0x20f6580()*-0.374685);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a790() {
   return (neuron0x20f68c0()*0.0480779);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a7d0() {
   return (neuron0x20f6c00()*-0.00501328);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a810() {
   return (neuron0x20f6f40()*0.0221804);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a850() {
   return (neuron0x20f7280()*0.0095733);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a890() {
   return (neuron0x20f75c0()*0.0192913);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a8d0() {
   return (neuron0x20f7900()*0.0131996);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102a90() {
   return (neuron0x20f7c40()*-0.00803148);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102ad0() {
   return (neuron0x20f7f80()*0.0149842);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102b10() {
   return (neuron0x20f82c0()*-1.06227);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102b50() {
   return (neuron0x20f8600()*-0.0270945);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102b90() {
   return (neuron0x20f8940()*0.0227207);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102bd0() {
   return (neuron0x20f8c80()*-0.00696641);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102c10() {
   return (neuron0x20f8fc0()*0.0161289);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a520() {
   return (neuron0x20f9300()*-0.0168121);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a560() {
   return (neuron0x20f9860()*-0.00915505);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102d60() {
   return (neuron0x20f9ba0()*-0.03758);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102da0() {
   return (neuron0x20f9ee0()*0.0186842);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102de0() {
   return (neuron0x20fa220()*0.0236316);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102e20() {
   return (neuron0x20fa560()*0.00524622);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102e60() {
   return (neuron0x20fa8a0()*-0.0159684);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102ea0() {
   return (neuron0x20fabe0()*-1.66685);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103220() {
   return (neuron0x20f5f90()*0.052209);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103260() {
   return (neuron0x20f6240()*-0.0171672);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21032a0() {
   return (neuron0x20f6580()*0.261152);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21032e0() {
   return (neuron0x20f68c0()*-0.0364507);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103320() {
   return (neuron0x20f6c00()*0.0179609);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103360() {
   return (neuron0x20f6f40()*0.000153987);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21033a0() {
   return (neuron0x20f7280()*0.0138515);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21033e0() {
   return (neuron0x20f75c0()*-0.0318438);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103420() {
   return (neuron0x20f7900()*0.0260198);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103460() {
   return (neuron0x20f7c40()*-3.10959e-05);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21034a0() {
   return (neuron0x20f7f80()*0.0235201);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21034e0() {
   return (neuron0x20f82c0()*-0.562248);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103520() {
   return (neuron0x20f8600()*0.0167126);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103560() {
   return (neuron0x20f8940()*-0.0188214);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21035a0() {
   return (neuron0x20f8c80()*-0.00837674);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21035e0() {
   return (neuron0x20f8fc0()*0.0301575);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103070() {
   return (neuron0x20f9300()*0.000370044);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21030b0() {
   return (neuron0x20f9860()*0.0462097);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103730() {
   return (neuron0x20f9ba0()*0.000240978);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103770() {
   return (neuron0x20f9ee0()*-0.0364944);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21037b0() {
   return (neuron0x20fa220()*0.0106008);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21037f0() {
   return (neuron0x20fa560()*-0.0104444);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103830() {
   return (neuron0x20fa8a0()*-0.00764141);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103870() {
   return (neuron0x20fabe0()*-1.14902);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103a40() {
   return (neuron0x20f5f90()*0.0429403);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210cad0() {
   return (neuron0x20f6240()*0.00293465);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210cb10() {
   return (neuron0x20f6580()*-1.11089);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210cb50() {
   return (neuron0x20f68c0()*0.0137463);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210cb90() {
   return (neuron0x20f6c00()*0.0209018);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210cbd0() {
   return (neuron0x20f6f40()*0.00300583);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210cc10() {
   return (neuron0x20f7280()*0.00141922);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210cc50() {
   return (neuron0x20f75c0()*-0.00919358);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210cc90() {
   return (neuron0x20f7900()*0.0055672);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ccd0() {
   return (neuron0x20f7c40()*-0.0163454);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210cd10() {
   return (neuron0x20f7f80()*0.000625645);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210cd50() {
   return (neuron0x20f82c0()*0.148318);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210cd90() {
   return (neuron0x20f8600()*-0.010174);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210cdd0() {
   return (neuron0x20f8940()*0.0289192);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ce10() {
   return (neuron0x20f8c80()*-0.0217565);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ce50() {
   return (neuron0x20f8fc0()*0.0103588);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c920() {
   return (neuron0x20f9300()*0.0152207);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c960() {
   return (neuron0x20f9860()*0.00547602);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210cfa0() {
   return (neuron0x20f9ba0()*0.00229351);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210cfe0() {
   return (neuron0x20f9ee0()*0.0029136);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d020() {
   return (neuron0x20fa220()*-0.00904266);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d060() {
   return (neuron0x20fa560()*-0.00347731);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d0a0() {
   return (neuron0x20fa8a0()*-0.000631861);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d0e0() {
   return (neuron0x20fabe0()*-3.38723);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d460() {
   return (neuron0x20f5f90()*-0.0132432);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d4a0() {
   return (neuron0x20f6240()*-0.0137674);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d4e0() {
   return (neuron0x20f6580()*0.0770117);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d520() {
   return (neuron0x20f68c0()*-0.0560296);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d560() {
   return (neuron0x20f6c00()*-0.0134653);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d5a0() {
   return (neuron0x20f6f40()*-0.00640572);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d5e0() {
   return (neuron0x20f7280()*-0.0216026);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d620() {
   return (neuron0x20f75c0()*-0.00372608);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d660() {
   return (neuron0x20f7900()*-0.00431925);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d6a0() {
   return (neuron0x20f7c40()*0.00589174);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d6e0() {
   return (neuron0x20f7f80()*-0.0196568);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d720() {
   return (neuron0x20f82c0()*-3.18251);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d760() {
   return (neuron0x20f8600()*0.00999907);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d7a0() {
   return (neuron0x20f8940()*-0.0049445);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d7e0() {
   return (neuron0x20f8c80()*-0.00420072);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d820() {
   return (neuron0x20f8fc0()*-0.0168382);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d2b0() {
   return (neuron0x20f9300()*0.0264836);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d2f0() {
   return (neuron0x20f9860()*0.00271608);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d970() {
   return (neuron0x20f9ba0()*-0.00155976);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d9b0() {
   return (neuron0x20f9ee0()*0.0062453);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d9f0() {
   return (neuron0x20fa220()*-0.0142614);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210da30() {
   return (neuron0x20fa560()*-0.00880346);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210da70() {
   return (neuron0x20fa8a0()*0.00776464);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210dab0() {
   return (neuron0x20fabe0()*-0.1767);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210de30() {
   return (neuron0x20f5f90()*0.00742335);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210de70() {
   return (neuron0x20f6240()*0.00737918);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210deb0() {
   return (neuron0x20f6580()*-0.643288);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210def0() {
   return (neuron0x20f68c0()*0.0231634);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210df30() {
   return (neuron0x20f6c00()*-0.0269074);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210df70() {
   return (neuron0x20f6f40()*-0.00412069);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210dfb0() {
   return (neuron0x20f7280()*0.000283778);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210dff0() {
   return (neuron0x20f75c0()*-0.00254951);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e030() {
   return (neuron0x20f7900()*-0.00275104);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e070() {
   return (neuron0x20f7c40()*-0.00302835);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e0b0() {
   return (neuron0x20f7f80()*0.0155819);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e0f0() {
   return (neuron0x20f82c0()*0.654975);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e130() {
   return (neuron0x20f8600()*0.0350843);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e170() {
   return (neuron0x20f8940()*-0.0237936);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e1b0() {
   return (neuron0x20f8c80()*0.0321068);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e1f0() {
   return (neuron0x20f8fc0()*0.0206934);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210dc80() {
   return (neuron0x20f9300()*-0.013647);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210dcc0() {
   return (neuron0x20f9860()*0.00628567);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e340() {
   return (neuron0x20f9ba0()*0.00321916);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e380() {
   return (neuron0x20f9ee0()*0.00126937);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e3c0() {
   return (neuron0x20fa220()*0.0252941);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e400() {
   return (neuron0x20fa560()*-0.00429308);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e440() {
   return (neuron0x20fa8a0()*-0.00164346);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e480() {
   return (neuron0x20fabe0()*0.103719);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e800() {
   return (neuron0x20f5f90()*0.0197563);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e840() {
   return (neuron0x20f6240()*0.0089695);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e880() {
   return (neuron0x20f6580()*-0.909287);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e8c0() {
   return (neuron0x20f68c0()*-0.000853947);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e900() {
   return (neuron0x20f6c00()*0.016565);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e940() {
   return (neuron0x20f6f40()*0.000253768);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e980() {
   return (neuron0x20f7280()*0.00789831);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e9c0() {
   return (neuron0x20f75c0()*0.0131238);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ea00() {
   return (neuron0x20f7900()*0.0133563);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ea40() {
   return (neuron0x20f7c40()*0.0276813);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ea80() {
   return (neuron0x20f7f80()*0.042316);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210eac0() {
   return (neuron0x20f82c0()*5.06699);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210eb00() {
   return (neuron0x20f8600()*-0.0491815);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210eb40() {
   return (neuron0x20f8940()*0.00329351);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210eb80() {
   return (neuron0x20f8c80()*0.0138529);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ebc0() {
   return (neuron0x20f8fc0()*0.0105176);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e650() {
   return (neuron0x20f9300()*-0.00245695);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e690() {
   return (neuron0x20f9860()*0.0141147);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ed10() {
   return (neuron0x20f9ba0()*-0.013029);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ed50() {
   return (neuron0x20f9ee0()*-0.0081492);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ed90() {
   return (neuron0x20fa220()*0.0230162);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210edd0() {
   return (neuron0x20fa560()*0.00588006);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ee10() {
   return (neuron0x20fa8a0()*-0.00934326);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ee50() {
   return (neuron0x20fabe0()*-1.48867);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f1d0() {
   return (neuron0x20f5f90()*0.0768158);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f210() {
   return (neuron0x20f6240()*0.0101666);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f250() {
   return (neuron0x20f6580()*-0.255395);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f290() {
   return (neuron0x20f68c0()*0.0237407);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f2d0() {
   return (neuron0x20f6c00()*-0.00262332);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f310() {
   return (neuron0x20f6f40()*0.0116795);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f350() {
   return (neuron0x20f7280()*0.00798067);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f390() {
   return (neuron0x20f75c0()*0.0290145);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f3d0() {
   return (neuron0x20f7900()*0.0133394);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f410() {
   return (neuron0x20f7c40()*-0.0323699);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f450() {
   return (neuron0x20f7f80()*-0.0106771);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f490() {
   return (neuron0x20f82c0()*-0.0122484);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f4d0() {
   return (neuron0x20f8600()*0.042195);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f510() {
   return (neuron0x20f8940()*0.023608);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f550() {
   return (neuron0x20f8c80()*-0.00173612);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f590() {
   return (neuron0x20f8fc0()*-0.0135099);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f020() {
   return (neuron0x20f9300()*-0.0217264);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f060() {
   return (neuron0x20f9860()*-0.0230503);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f6e0() {
   return (neuron0x20f9ba0()*0.0140828);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f720() {
   return (neuron0x20f9ee0()*-0.00918471);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f760() {
   return (neuron0x20fa220()*0.00622784);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f7a0() {
   return (neuron0x20fa560()*-0.02159);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f7e0() {
   return (neuron0x20fa8a0()*0.00551683);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f820() {
   return (neuron0x20fabe0()*17.0093);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210fba0() {
   return (neuron0x20f5f90()*-0.389428);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210fbe0() {
   return (neuron0x20f6240()*-0.178345);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210fc20() {
   return (neuron0x20f6580()*1.77561);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210fc60() {
   return (neuron0x20f68c0()*-0.346376);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210fca0() {
   return (neuron0x20f6c00()*-0.328796);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210fce0() {
   return (neuron0x20f6f40()*0.0150077);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210fd20() {
   return (neuron0x20f7280()*-0.200595);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210fd60() {
   return (neuron0x20f75c0()*-0.58102);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210fda0() {
   return (neuron0x20f7900()*-0.176562);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210fde0() {
   return (neuron0x20f7c40()*0.0509348);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210fe20() {
   return (neuron0x20f7f80()*-0.425969);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210fe60() {
   return (neuron0x20f82c0()*1.17528);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210fea0() {
   return (neuron0x20f8600()*0.110211);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210fee0() {
   return (neuron0x20f8940()*-0.357856);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ff20() {
   return (neuron0x20f8c80()*0.157385);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ff60() {
   return (neuron0x20f8fc0()*0.349614);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f9f0() {
   return (neuron0x20f9300()*-0.058355);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210fa30() {
   return (neuron0x20f9860()*-0.0225426);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21100b0() {
   return (neuron0x20f9ba0()*0.0472476);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21100f0() {
   return (neuron0x20f9ee0()*-0.303283);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110130() {
   return (neuron0x20fa220()*-0.417618);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110170() {
   return (neuron0x20fa560()*0.126827);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21101b0() {
   return (neuron0x20fa8a0()*-0.0365893);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21101f0() {
   return (neuron0x20fabe0()*0.45001);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110570() {
   return (neuron0x20f5f90()*0.0228768);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21105b0() {
   return (neuron0x20f6240()*-0.000320612);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21105f0() {
   return (neuron0x20f6580()*5.1294);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110630() {
   return (neuron0x20f68c0()*0.0229312);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110670() {
   return (neuron0x20f6c00()*0.0403981);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21106b0() {
   return (neuron0x20f6f40()*0.029762);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21106f0() {
   return (neuron0x20f7280()*-0.0165194);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110730() {
   return (neuron0x20f75c0()*0.0257755);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110770() {
   return (neuron0x20f7900()*0.00344733);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21107b0() {
   return (neuron0x20f7c40()*-0.0413382);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21107f0() {
   return (neuron0x20f7f80()*-0.0142097);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110830() {
   return (neuron0x20f82c0()*-0.0614277);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110870() {
   return (neuron0x20f8600()*0.0236074);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21108b0() {
   return (neuron0x20f8940()*0.0617726);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21108f0() {
   return (neuron0x20f8c80()*-0.0188309);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110930() {
   return (neuron0x20f8fc0()*-0.00382728);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21103c0() {
   return (neuron0x20f9300()*-0.00104098);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110400() {
   return (neuron0x20f9860()*0.0093752);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110a80() {
   return (neuron0x20f9ba0()*0.0309099);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110ac0() {
   return (neuron0x20f9ee0()*-0.0172491);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110b00() {
   return (neuron0x20fa220()*0.00531724);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110b40() {
   return (neuron0x20fa560()*-0.0222957);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110b80() {
   return (neuron0x20fa8a0()*-0.0174517);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110bc0() {
   return (neuron0x20fabe0()*10.0114);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110f40() {
   return (neuron0x20f5f90()*-0.00432769);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110f80() {
   return (neuron0x20f6240()*-0.000575345);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110fc0() {
   return (neuron0x20f6580()*-0.0346612);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2111000() {
   return (neuron0x20f68c0()*-1.56831);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2111040() {
   return (neuron0x20f6c00()*-0.00513074);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2111080() {
   return (neuron0x20f6f40()*-0.00150252);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21110c0() {
   return (neuron0x20f7280()*-0.00542252);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2111100() {
   return (neuron0x20f75c0()*0.00207727);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2111140() {
   return (neuron0x20f7900()*-0.00816097);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2111180() {
   return (neuron0x20f7c40()*0.00340748);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21111c0() {
   return (neuron0x20f7f80()*0.00294755);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2111200() {
   return (neuron0x20f82c0()*0.187521);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2111240() {
   return (neuron0x20f8600()*-0.0118315);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2111280() {
   return (neuron0x20f8940()*0.00550838);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21112c0() {
   return (neuron0x20f8c80()*-0.00634514);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2111300() {
   return (neuron0x20f8fc0()*0.00391929);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110d90() {
   return (neuron0x20f9300()*0.0169899);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2110dd0() {
   return (neuron0x20f9860()*-0.00208118);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2111450() {
   return (neuron0x20f9ba0()*-0.00524208);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2111490() {
   return (neuron0x20f9ee0()*-0.00229503);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21114d0() {
   return (neuron0x20fa220()*0.00407645);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2111510() {
   return (neuron0x20fa560()*0.00450399);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2111550() {
   return (neuron0x20fa8a0()*0.000926132);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2111590() {
   return (neuron0x20fabe0()*0.0238678);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2111910() {
   return (neuron0x20f5f90()*-0.0687012);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105ee0() {
   return (neuron0x20f6240()*-0.00352483);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105f20() {
   return (neuron0x20f6580()*0.520922);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105f60() {
   return (neuron0x20f68c0()*0.0218246);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21061b0() {
   return (neuron0x20f6c00()*0.00274731);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21061f0() {
   return (neuron0x20f6f40()*0.004914);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2106230() {
   return (neuron0x20f7280()*-0.00391646);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2106480() {
   return (neuron0x20f75c0()*0.00655891);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21064c0() {
   return (neuron0x20f7900()*-0.00505015);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2106710() {
   return (neuron0x20f7c40()*-0.00412444);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2106750() {
   return (neuron0x20f7f80()*-0.014487);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2106790() {
   return (neuron0x20f82c0()*-6.99961);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21069e0() {
   return (neuron0x20f8600()*0.00131234);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2106a20() {
   return (neuron0x20f8940()*-0.0215273);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2106c70() {
   return (neuron0x20f8c80()*-0.00856921);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2106cb0() {
   return (neuron0x20f8fc0()*0.000440867);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2111760() {
   return (neuron0x20f9300()*-0.0179875);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21117a0() {
   return (neuron0x20f9860()*-0.0142731);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2106e00() {
   return (neuron0x20f9ba0()*-0.011451);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2107310() {
   return (neuron0x20f9ee0()*0.00166124);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2107350() {
   return (neuron0x20fa220()*-0.0109876);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2107390() {
   return (neuron0x20fa560()*0.00285569);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21075e0() {
   return (neuron0x20fa8a0()*0.00947318);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2107620() {
   return (neuron0x20fabe0()*-0.741517);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2106ed0() {
   return (neuron0x20f5f90()*-0.0451943);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2106f10() {
   return (neuron0x20f6240()*-0.00865137);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2106f50() {
   return (neuron0x20f6580()*-0.364977);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2106f90() {
   return (neuron0x20f68c0()*0.0217726);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2107910() {
   return (neuron0x20f6c00()*-0.101765);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2113c60() {
   return (neuron0x20f6f40()*0.00581031);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2113ca0() {
   return (neuron0x20f7280()*-0.0267228);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2113ce0() {
   return (neuron0x20f75c0()*0.0268565);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2113d20() {
   return (neuron0x20f7900()*-0.0182823);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2113d60() {
   return (neuron0x20f7c40()*-0.0366195);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2113da0() {
   return (neuron0x20f7f80()*-0.00723479);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2113de0() {
   return (neuron0x20f82c0()*0.244049);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2113e20() {
   return (neuron0x20f8600()*-4.20507);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2113e60() {
   return (neuron0x20f8940()*0.0310675);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2113ea0() {
   return (neuron0x20f8c80()*-0.0117399);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2113ee0() {
   return (neuron0x20f8fc0()*-0.0380771);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21077f0() {
   return (neuron0x20f9300()*0.00177972);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2107830() {
   return (neuron0x20f9860()*-0.0744818);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114030() {
   return (neuron0x20f9ba0()*-0.0434602);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114070() {
   return (neuron0x20f9ee0()*0.0515633);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21140b0() {
   return (neuron0x20fa220()*0.0144153);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21140f0() {
   return (neuron0x20fa560()*0.00125208);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114130() {
   return (neuron0x20fa8a0()*-0.0109925);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114170() {
   return (neuron0x20fabe0()*0.776759);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21144f0() {
   return (neuron0x20f5f90()*0.110363);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114530() {
   return (neuron0x20f6240()*-0.284005);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114570() {
   return (neuron0x20f6580()*-0.844949);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21145b0() {
   return (neuron0x20f68c0()*0.0125235);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21145f0() {
   return (neuron0x20f6c00()*0.109186);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114630() {
   return (neuron0x20f6f40()*-0.877884);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114670() {
   return (neuron0x20f7280()*0.102309);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21146b0() {
   return (neuron0x20f75c0()*-0.132225);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21146f0() {
   return (neuron0x20f7900()*-0.000538026);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114730() {
   return (neuron0x20f7c40()*-0.219664);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114770() {
   return (neuron0x20f7f80()*0.220475);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21147b0() {
   return (neuron0x20f82c0()*-0.675238);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21147f0() {
   return (neuron0x20f8600()*-0.327072);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114830() {
   return (neuron0x20f8940()*0.698873);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114870() {
   return (neuron0x20f8c80()*-0.0332355);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21148b0() {
   return (neuron0x20f8fc0()*-0.882866);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114340() {
   return (neuron0x20f9300()*-0.138176);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114380() {
   return (neuron0x20f9860()*-0.831603);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114a00() {
   return (neuron0x20f9ba0()*0.597944);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114a40() {
   return (neuron0x20f9ee0()*-0.0433155);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114a80() {
   return (neuron0x20fa220()*-0.485191);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114ac0() {
   return (neuron0x20fa560()*-0.616721);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114b00() {
   return (neuron0x20fa8a0()*0.277253);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114b40() {
   return (neuron0x20fabe0()*0.148836);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114ec0() {
   return (neuron0x20f5f90()*-0.0126932);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114f00() {
   return (neuron0x20f6240()*0.0211791);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114f40() {
   return (neuron0x20f6580()*0.0688002);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114f80() {
   return (neuron0x20f68c0()*0.868448);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114fc0() {
   return (neuron0x20f6c00()*0.0394556);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115000() {
   return (neuron0x20f6f40()*-0.00609491);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115040() {
   return (neuron0x20f7280()*-0.00285392);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115080() {
   return (neuron0x20f75c0()*-0.01587);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21150c0() {
   return (neuron0x20f7900()*0.010843);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115100() {
   return (neuron0x20f7c40()*0.0218444);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115140() {
   return (neuron0x20f7f80()*0.027625);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115180() {
   return (neuron0x20f82c0()*3.02261);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21151c0() {
   return (neuron0x20f8600()*0.0210443);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115200() {
   return (neuron0x20f8940()*0.0149731);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115240() {
   return (neuron0x20f8c80()*-0.0105925);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115280() {
   return (neuron0x20f8fc0()*-0.0271439);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114d10() {
   return (neuron0x20f9300()*-0.000206137);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114d50() {
   return (neuron0x20f9860()*0.000613719);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21153d0() {
   return (neuron0x20f9ba0()*0.00484914);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115410() {
   return (neuron0x20f9ee0()*-0.00671076);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115450() {
   return (neuron0x20fa220()*0.00461502);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115490() {
   return (neuron0x20fa560()*0.00299541);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21154d0() {
   return (neuron0x20fa8a0()*0.0175932);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115510() {
   return (neuron0x20fabe0()*0.347194);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115890() {
   return (neuron0x20f5f90()*0.00987946);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21158d0() {
   return (neuron0x20f6240()*0.0027503);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115910() {
   return (neuron0x20f6580()*-0.0501034);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115950() {
   return (neuron0x20f68c0()*1.60522);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115990() {
   return (neuron0x20f6c00()*0.00453104);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21159d0() {
   return (neuron0x20f6f40()*-0.00757079);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115a10() {
   return (neuron0x20f7280()*-2.77079e-05);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115a50() {
   return (neuron0x20f75c0()*-0.0125465);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115a90() {
   return (neuron0x20f7900()*0.00915515);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115ad0() {
   return (neuron0x20f7c40()*-0.00269352);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115b10() {
   return (neuron0x20f7f80()*-4.23567e-05);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115b50() {
   return (neuron0x20f82c0()*0.497865);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115b90() {
   return (neuron0x20f8600()*0.0114073);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115bd0() {
   return (neuron0x20f8940()*0.0200425);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115c10() {
   return (neuron0x20f8c80()*0.00321164);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115c50() {
   return (neuron0x20f8fc0()*-0.0106573);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21156e0() {
   return (neuron0x20f9300()*0.00315836);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115720() {
   return (neuron0x20f9860()*-0.00190237);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115da0() {
   return (neuron0x20f9ba0()*0.000993608);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115de0() {
   return (neuron0x20f9ee0()*0.0022163);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115e20() {
   return (neuron0x20fa220()*-0.00554707);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115e60() {
   return (neuron0x20fa560()*-0.00150552);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115ea0() {
   return (neuron0x20fa8a0()*-0.000753912);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115ee0() {
   return (neuron0x20fabe0()*0.0479107);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116260() {
   return (neuron0x20f5f90()*-0.0532081);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21162a0() {
   return (neuron0x20f6240()*0.0179227);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21162e0() {
   return (neuron0x20f6580()*-0.370103);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116320() {
   return (neuron0x20f68c0()*0.0438866);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116360() {
   return (neuron0x20f6c00()*0.199609);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21163a0() {
   return (neuron0x20f6f40()*-0.159524);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21163e0() {
   return (neuron0x20f7280()*0.275757);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116420() {
   return (neuron0x20f75c0()*-0.0111945);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116460() {
   return (neuron0x20f7900()*-0.175003);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21164a0() {
   return (neuron0x20f7c40()*-0.162247);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21164e0() {
   return (neuron0x20f7f80()*0.0574717);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116520() {
   return (neuron0x20f82c0()*-0.400969);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116560() {
   return (neuron0x20f8600()*0.112521);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21165a0() {
   return (neuron0x20f8940()*0.0436167);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21165e0() {
   return (neuron0x20f8c80()*-0.29553);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116620() {
   return (neuron0x20f8fc0()*-0.0466907);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21160b0() {
   return (neuron0x20f9300()*-0.0106058);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21160f0() {
   return (neuron0x20f9860()*-0.0544185);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116770() {
   return (neuron0x20f9ba0()*-0.107976);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21167b0() {
   return (neuron0x20f9ee0()*0.178709);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21167f0() {
   return (neuron0x20fa220()*0.335052);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116830() {
   return (neuron0x20fa560()*0.0732673);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116870() {
   return (neuron0x20fa8a0()*-0.0883003);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21168b0() {
   return (neuron0x20fabe0()*-2.93341);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116c30() {
   return (neuron0x20f5f90()*-0.0127054);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116c70() {
   return (neuron0x20f6240()*0.0410507);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116cb0() {
   return (neuron0x20f6580()*-1.27064);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116cf0() {
   return (neuron0x20f68c0()*0.077328);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116d30() {
   return (neuron0x20f6c00()*-0.0318761);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116d70() {
   return (neuron0x20f6f40()*0.0151821);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116db0() {
   return (neuron0x20f7280()*-0.0122766);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116df0() {
   return (neuron0x20f75c0()*0.0375059);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116e30() {
   return (neuron0x20f7900()*0.0317866);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116e70() {
   return (neuron0x20f7c40()*0.0478636);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116eb0() {
   return (neuron0x20f7f80()*0.042335);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116ef0() {
   return (neuron0x20f82c0()*-0.586236);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116f30() {
   return (neuron0x20f8600()*-0.0494716);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116f70() {
   return (neuron0x20f8940()*-0.0286578);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116fb0() {
   return (neuron0x20f8c80()*0.0110508);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116ff0() {
   return (neuron0x20f8fc0()*-0.0076687);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116a80() {
   return (neuron0x20f9300()*0.00352348);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116ac0() {
   return (neuron0x20f9860()*0.00560493);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117140() {
   return (neuron0x20f9ba0()*-0.0525324);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117180() {
   return (neuron0x20f9ee0()*0.0421334);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21171c0() {
   return (neuron0x20fa220()*0.050704);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117200() {
   return (neuron0x20fa560()*0.00750139);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117240() {
   return (neuron0x20fa8a0()*-0.0095145);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117280() {
   return (neuron0x20fabe0()*0.151727);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117600() {
   return (neuron0x20f5f90()*0.277846);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117640() {
   return (neuron0x20f6240()*-0.104369);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117680() {
   return (neuron0x20f6580()*0.658426);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21176c0() {
   return (neuron0x20f68c0()*-0.229888);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117700() {
   return (neuron0x20f6c00()*0.118573);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117740() {
   return (neuron0x20f6f40()*-0.179877);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117780() {
   return (neuron0x20f7280()*-0.73569);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21177c0() {
   return (neuron0x20f75c0()*0.305563);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117800() {
   return (neuron0x20f7900()*0.195001);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117840() {
   return (neuron0x20f7c40()*0.140948);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117880() {
   return (neuron0x20f7f80()*0.287007);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21178c0() {
   return (neuron0x20f82c0()*0.627196);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117900() {
   return (neuron0x20f8600()*-0.6915);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117940() {
   return (neuron0x20f8940()*-0.0509361);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117980() {
   return (neuron0x20f8c80()*0.680454);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21179c0() {
   return (neuron0x20f8fc0()*-0.0292111);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117450() {
   return (neuron0x20f9300()*0.066935);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117490() {
   return (neuron0x20f9860()*-0.15661);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117b10() {
   return (neuron0x20f9ba0()*0.189514);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117b50() {
   return (neuron0x20f9ee0()*-0.200973);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117b90() {
   return (neuron0x20fa220()*-0.93997);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117bd0() {
   return (neuron0x20fa560()*0.164701);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117c10() {
   return (neuron0x20fa8a0()*-0.292765);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117c50() {
   return (neuron0x20fabe0()*1.24851);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117fd0() {
   return (neuron0x20f5f90()*0.0353192);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118010() {
   return (neuron0x20f6240()*-0.0569125);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118050() {
   return (neuron0x20f6580()*0.0373392);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118090() {
   return (neuron0x20f68c0()*0.292846);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21180d0() {
   return (neuron0x20f6c00()*0.261164);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118110() {
   return (neuron0x20f6f40()*-0.124049);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118150() {
   return (neuron0x20f7280()*0.717167);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118190() {
   return (neuron0x20f75c0()*0.338178);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21181d0() {
   return (neuron0x20f7900()*-0.392218);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118210() {
   return (neuron0x20f7c40()*-0.429664);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118250() {
   return (neuron0x20f7f80()*0.0927425);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118290() {
   return (neuron0x20f82c0()*-0.083156);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21182d0() {
   return (neuron0x20f8600()*-0.585792);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118310() {
   return (neuron0x20f8940()*0.19553);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118350() {
   return (neuron0x20f8c80()*-0.534188);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118390() {
   return (neuron0x20f8fc0()*-0.523665);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117e20() {
   return (neuron0x20f9300()*-0.0205243);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117e60() {
   return (neuron0x20f9860()*-0.340977);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21184e0() {
   return (neuron0x20f9ba0()*0.276865);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118520() {
   return (neuron0x20f9ee0()*0.352537);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118560() {
   return (neuron0x20fa220()*0.176355);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21185a0() {
   return (neuron0x20fa560()*-0.553057);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21185e0() {
   return (neuron0x20fa8a0()*-0.0594081);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118620() {
   return (neuron0x20fabe0()*0.87795);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21010d0() {
   return (neuron0x20f5f90()*0.689369);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101110() {
   return (neuron0x20f6240()*0.0291029);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101150() {
   return (neuron0x20f6580()*-0.901675);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101190() {
   return (neuron0x20f68c0()*1.05683);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21011d0() {
   return (neuron0x20f6c00()*0.903935);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101210() {
   return (neuron0x20f6f40()*0.244151);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101250() {
   return (neuron0x20f7280()*0.745216);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101290() {
   return (neuron0x20f75c0()*0.311089);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118db0() {
   return (neuron0x20f7900()*-0.248408);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118df0() {
   return (neuron0x20f7c40()*0.767732);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118e30() {
   return (neuron0x20f7f80()*-0.133122);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118e70() {
   return (neuron0x20f82c0()*-0.172859);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118eb0() {
   return (neuron0x20f8600()*0.445841);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118ef0() {
   return (neuron0x20f8940()*0.541598);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118f30() {
   return (neuron0x20f8c80()*0.462736);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118f70() {
   return (neuron0x20f8fc0()*-1.47317);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21187f0() {
   return (neuron0x20f9300()*-0.0297138);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118830() {
   return (neuron0x20f9860()*-0.854792);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21190c0() {
   return (neuron0x20f9ba0()*-0.20846);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119100() {
   return (neuron0x20f9ee0()*0.853051);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119140() {
   return (neuron0x20fa220()*-0.106816);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119180() {
   return (neuron0x20fa560()*-0.642278);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21191c0() {
   return (neuron0x20fa8a0()*-0.143344);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119200() {
   return (neuron0x20fabe0()*-0.0347007);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119580() {
   return (neuron0x20f5f90()*-0.000904912);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21195c0() {
   return (neuron0x20f6240()*0.0131961);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119600() {
   return (neuron0x20f6580()*0.166599);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119640() {
   return (neuron0x20f68c0()*-0.0363582);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119680() {
   return (neuron0x20f6c00()*0.00373441);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21196c0() {
   return (neuron0x20f6f40()*-0.0263576);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119700() {
   return (neuron0x20f7280()*0.0261114);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119740() {
   return (neuron0x20f75c0()*-0.0131668);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119780() {
   return (neuron0x20f7900()*-0.0238077);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21197c0() {
   return (neuron0x20f7c40()*-0.00992794);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119800() {
   return (neuron0x20f7f80()*0.000155398);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119840() {
   return (neuron0x20f82c0()*2.14942);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119880() {
   return (neuron0x20f8600()*0.0379744);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21198c0() {
   return (neuron0x20f8940()*-0.00177653);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119900() {
   return (neuron0x20f8c80()*0.00454138);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119940() {
   return (neuron0x20f8fc0()*0.0244631);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21193d0() {
   return (neuron0x20f9300()*-0.00681455);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119410() {
   return (neuron0x20f9860()*-0.00261148);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119a90() {
   return (neuron0x20f9ba0()*-0.0136557);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119ad0() {
   return (neuron0x20f9ee0()*0.003124);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119b10() {
   return (neuron0x20fa220()*0.0305739);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119b50() {
   return (neuron0x20fa560()*-0.00471077);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119b90() {
   return (neuron0x20fa8a0()*-0.0107305);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119bd0() {
   return (neuron0x20fabe0()*-0.532627);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119f50() {
   return (neuron0x20f5f90()*0.100982);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119f90() {
   return (neuron0x20f6240()*-0.00209347);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119fd0() {
   return (neuron0x20f6580()*-0.602575);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211a010() {
   return (neuron0x20f68c0()*-0.0147323);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211a050() {
   return (neuron0x20f6c00()*-6.10637e-06);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211a090() {
   return (neuron0x20f6f40()*0.00118766);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211a0d0() {
   return (neuron0x20f7280()*-0.00217699);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211a110() {
   return (neuron0x20f75c0()*0.00598297);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211a150() {
   return (neuron0x20f7900()*0.0171971);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211a190() {
   return (neuron0x20f7c40()*0.0127142);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211a1d0() {
   return (neuron0x20f7f80()*0.0150048);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211a210() {
   return (neuron0x20f82c0()*6.60849);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211a250() {
   return (neuron0x20f8600()*-0.0190822);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211a290() {
   return (neuron0x20f8940()*0.026158);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211a2d0() {
   return (neuron0x20f8c80()*0.0155085);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211a310() {
   return (neuron0x20f8fc0()*-0.0155157);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119da0() {
   return (neuron0x20f9300()*0.0269722);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119de0() {
   return (neuron0x20f9860()*0.0188274);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a910() {
   return (neuron0x20f9ba0()*0.0156228);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a950() {
   return (neuron0x20f9ee0()*-0.0034603);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a990() {
   return (neuron0x20fa220()*-0.0104877);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a9d0() {
   return (neuron0x20fa560()*-0.0111977);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210aa10() {
   return (neuron0x20fa8a0()*-0.00619796);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210aa50() {
   return (neuron0x20fabe0()*2.03691);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210add0() {
   return (neuron0x20f5f90()*-0.230447);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ae10() {
   return (neuron0x20f6240()*-0.120664);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ae50() {
   return (neuron0x20f6580()*-1.17023);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ae90() {
   return (neuron0x20f68c0()*0.0747225);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210aed0() {
   return (neuron0x20f6c00()*-1.66936);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210af10() {
   return (neuron0x20f6f40()*-0.0111036);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210af50() {
   return (neuron0x20f7280()*0.0697417);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210af90() {
   return (neuron0x20f75c0()*0.040508);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210afd0() {
   return (neuron0x20f7900()*0.989434);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b010() {
   return (neuron0x20f7c40()*0.143512);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b050() {
   return (neuron0x20f7f80()*-0.0192072);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b090() {
   return (neuron0x20f82c0()*-1.1206);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b0d0() {
   return (neuron0x20f8600()*0.884384);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b110() {
   return (neuron0x20f8940()*1.39653);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b150() {
   return (neuron0x20f8c80()*1.74545);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b190() {
   return (neuron0x20f8fc0()*-0.122236);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ac20() {
   return (neuron0x20f9300()*0.482589);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ac60() {
   return (neuron0x20f9860()*0.36991);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b2e0() {
   return (neuron0x20f9ba0()*-0.289493);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b320() {
   return (neuron0x20f9ee0()*0.54277);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b360() {
   return (neuron0x20fa220()*-0.227111);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b3a0() {
   return (neuron0x20fa560()*0.51652);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b3e0() {
   return (neuron0x20fa8a0()*0.636237);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b420() {
   return (neuron0x20fabe0()*-0.16775);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b7a0() {
   return (neuron0x20f5f90()*-0.0079645);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b7e0() {
   return (neuron0x20f6240()*-0.00782893);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b820() {
   return (neuron0x20f6580()*0.604815);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b860() {
   return (neuron0x20f68c0()*-0.0369526);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b8a0() {
   return (neuron0x20f6c00()*-0.00777513);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b8e0() {
   return (neuron0x20f6f40()*-0.0153888);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b920() {
   return (neuron0x20f7280()*-0.00338737);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b960() {
   return (neuron0x20f75c0()*0.00235987);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b9a0() {
   return (neuron0x20f7900()*-0.00510988);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b9e0() {
   return (neuron0x20f7c40()*0.0165433);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ba20() {
   return (neuron0x20f7f80()*0.00209464);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ba60() {
   return (neuron0x20f82c0()*0.681149);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210baa0() {
   return (neuron0x20f8600()*0.0160883);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210bae0() {
   return (neuron0x20f8940()*-0.0248222);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210bb20() {
   return (neuron0x20f8c80()*0.016567);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210bb60() {
   return (neuron0x20f8fc0()*-0.00104391);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b5f0() {
   return (neuron0x20f9300()*0.00922397);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b630() {
   return (neuron0x20f9860()*-0.000859432);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210bcb0() {
   return (neuron0x20f9ba0()*0.00580365);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210bcf0() {
   return (neuron0x20f9ee0()*-0.0110312);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210bd30() {
   return (neuron0x20fa220()*0.00457614);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210bd70() {
   return (neuron0x20fa560()*-9.99673e-05);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210bdb0() {
   return (neuron0x20fa8a0()*0.00873161);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210bdf0() {
   return (neuron0x20fabe0()*2.19433);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c170() {
   return (neuron0x20f5f90()*2.26757);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c1b0() {
   return (neuron0x20f6240()*0.390893);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c1f0() {
   return (neuron0x20f6580()*-0.96214);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c230() {
   return (neuron0x20f68c0()*-0.191852);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c270() {
   return (neuron0x20f6c00()*0.548919);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c2b0() {
   return (neuron0x20f6f40()*-0.131221);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c2f0() {
   return (neuron0x20f7280()*-0.508337);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c330() {
   return (neuron0x20f75c0()*-0.245823);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c370() {
   return (neuron0x20f7900()*-0.118899);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c3b0() {
   return (neuron0x20f7c40()*-0.0787689);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c3f0() {
   return (neuron0x20f7f80()*0.202246);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c430() {
   return (neuron0x20f82c0()*0.66007);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c470() {
   return (neuron0x20f8600()*1.36929);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c4b0() {
   return (neuron0x20f8940()*0.727839);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c4f0() {
   return (neuron0x20f8c80()*-0.380573);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c530() {
   return (neuron0x20f8fc0()*-0.588924);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210bfc0() {
   return (neuron0x20f9300()*0.219873);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c000() {
   return (neuron0x20f9860()*-0.581453);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c680() {
   return (neuron0x20f9ba0()*-0.555542);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c6c0() {
   return (neuron0x20f9ee0()*-0.392574);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c700() {
   return (neuron0x20fa220()*-0.204785);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c740() {
   return (neuron0x20fa560()*0.108257);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c780() {
   return (neuron0x20fa8a0()*0.0976665);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c7c0() {
   return (neuron0x20fabe0()*-0.0459031);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211e690() {
   return (neuron0x20f5f90()*-0.000945472);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211e6d0() {
   return (neuron0x20f6240()*-0.00268409);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211e710() {
   return (neuron0x20f6580()*0.144833);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211e750() {
   return (neuron0x20f68c0()*1.71899);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211e790() {
   return (neuron0x20f6c00()*0.00811886);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211e7d0() {
   return (neuron0x20f6f40()*0.00733603);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211e810() {
   return (neuron0x20f7280()*0.00948445);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211e850() {
   return (neuron0x20f75c0()*0.0112361);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211e890() {
   return (neuron0x20f7900()*0.00958968);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211e8d0() {
   return (neuron0x20f7c40()*-0.00285612);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211e910() {
   return (neuron0x20f7f80()*-0.0088564);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211e950() {
   return (neuron0x20f82c0()*-0.763538);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211e990() {
   return (neuron0x20f8600()*0.00443808);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211e9d0() {
   return (neuron0x20f8940()*-0.0284953);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211ea10() {
   return (neuron0x20f8c80()*0.0103483);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211ea50() {
   return (neuron0x20f8fc0()*-0.0114061);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c800() {
   return (neuron0x20f9300()*-0.042037);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c840() {
   return (neuron0x20f9860()*0.00954547);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211eba0() {
   return (neuron0x20f9ba0()*0.0133738);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211ebe0() {
   return (neuron0x20f9ee0()*0.0150376);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211ec20() {
   return (neuron0x20fa220()*-0.00273979);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211ec60() {
   return (neuron0x20fa560()*-0.00782333);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211eca0() {
   return (neuron0x20fa8a0()*-0.000278332);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211ece0() {
   return (neuron0x20fabe0()*-0.0917342);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f060() {
   return (neuron0x20f5f90()*-0.0269022);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f0a0() {
   return (neuron0x20f6240()*-0.0220606);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f0e0() {
   return (neuron0x20f6580()*0.157638);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f120() {
   return (neuron0x20f68c0()*-0.0224814);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f160() {
   return (neuron0x20f6c00()*-0.0288208);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f1a0() {
   return (neuron0x20f6f40()*0.00453038);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f1e0() {
   return (neuron0x20f7280()*-0.0112055);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f220() {
   return (neuron0x20f75c0()*-0.015882);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f260() {
   return (neuron0x20f7900()*-0.00777706);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f2a0() {
   return (neuron0x20f7c40()*-0.0100635);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f2e0() {
   return (neuron0x20f7f80()*0.00621524);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f320() {
   return (neuron0x20f82c0()*-4.47587);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f360() {
   return (neuron0x20f8600()*-0.0482662);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f3a0() {
   return (neuron0x20f8940()*-0.0477248);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f3e0() {
   return (neuron0x20f8c80()*-0.0198185);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f420() {
   return (neuron0x20f8fc0()*-0.0140136);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211eeb0() {
   return (neuron0x20f9300()*-0.00239738);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211eef0() {
   return (neuron0x20f9860()*-0.00669126);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f570() {
   return (neuron0x20f9ba0()*-0.0466994);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f5b0() {
   return (neuron0x20f9ee0()*-0.00895402);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f5f0() {
   return (neuron0x20fa220()*0.00909112);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f630() {
   return (neuron0x20fa560()*0.000100216);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f670() {
   return (neuron0x20fa8a0()*0.00113016);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f6b0() {
   return (neuron0x20fabe0()*0.145413);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211fa30() {
   return (neuron0x20f5f90()*-0.647288);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211fa70() {
   return (neuron0x20f6240()*-0.31677);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211fab0() {
   return (neuron0x20f6580()*1.40006);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211faf0() {
   return (neuron0x20f68c0()*-0.867973);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211fb30() {
   return (neuron0x20f6c00()*-0.228763);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211fb70() {
   return (neuron0x20f6f40()*-0.411346);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211fbb0() {
   return (neuron0x20f7280()*-1.23388);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211fbf0() {
   return (neuron0x20f75c0()*-0.0132099);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211fc30() {
   return (neuron0x20f7900()*0.396409);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211fc70() {
   return (neuron0x20f7c40()*-0.8786);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211fcb0() {
   return (neuron0x20f7f80()*1.33608);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211fcf0() {
   return (neuron0x20f82c0()*-1.09517);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211fd30() {
   return (neuron0x20f8600()*-0.199453);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211fd70() {
   return (neuron0x20f8940()*-0.330916);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211fdb0() {
   return (neuron0x20f8c80()*-0.455421);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211fdf0() {
   return (neuron0x20f8fc0()*-0.458842);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f880() {
   return (neuron0x20f9300()*0.0660035);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f8c0() {
   return (neuron0x20f9860()*-0.475318);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211ff40() {
   return (neuron0x20f9ba0()*-0.483175);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211ff80() {
   return (neuron0x20f9ee0()*-0.259007);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211ffc0() {
   return (neuron0x20fa220()*0.103);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120000() {
   return (neuron0x20fa560()*-1.19848);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120040() {
   return (neuron0x20fa8a0()*-0.960452);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120080() {
   return (neuron0x20fabe0()*-0.540948);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120400() {
   return (neuron0x20f5f90()*-0.322067);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120440() {
   return (neuron0x20f6240()*-0.000226709);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120480() {
   return (neuron0x20f6580()*-0.807628);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21204c0() {
   return (neuron0x20f68c0()*-0.0446212);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120500() {
   return (neuron0x20f6c00()*0.0264943);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120540() {
   return (neuron0x20f6f40()*-0.0221905);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120580() {
   return (neuron0x20f7280()*-0.0194275);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21205c0() {
   return (neuron0x20f75c0()*-0.0557029);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120600() {
   return (neuron0x20f7900()*0.0470678);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120640() {
   return (neuron0x20f7c40()*-0.00472654);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120680() {
   return (neuron0x20f7f80()*0.0869298);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21206c0() {
   return (neuron0x20f82c0()*-0.487867);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120700() {
   return (neuron0x20f8600()*-0.00844435);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120740() {
   return (neuron0x20f8940()*-0.0408526);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120780() {
   return (neuron0x20f8c80()*0.00686527);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21207c0() {
   return (neuron0x20f8fc0()*-0.0110952);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120250() {
   return (neuron0x20f9300()*0.00454194);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120290() {
   return (neuron0x20f9860()*0.0315618);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120910() {
   return (neuron0x20f9ba0()*-0.00559653);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120950() {
   return (neuron0x20f9ee0()*-0.078627);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120990() {
   return (neuron0x20fa220()*0.0279718);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21209d0() {
   return (neuron0x20fa560()*-0.0138641);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120a10() {
   return (neuron0x20fa8a0()*-0.0165101);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120a50() {
   return (neuron0x20fabe0()*-0.142892);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1ec0830() {
   return (neuron0x20fb050()*-0.195687);
}

double NNfunction_nn_charge2p_charge1m::synapse0x1ec0870() {
   return (neuron0x20fb890()*-0.308349);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd400() {
   return (neuron0x20fc370()*0.00201566);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fd440() {
   return (neuron0x20fbe10()*-0.111589);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20feed0() {
   return (neuron0x20fd150()*1.51697);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fef10() {
   return (neuron0x20fec20()*-1.1461);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ffca0() {
   return (neuron0x20ff9f0()*-0.00235867);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ffce0() {
   return (neuron0x21003c0()*-0.00134267);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2100670() {
   return (neuron0x2100d90()*2.31044);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21006b0() {
   return (neuron0x2101870()*0.0199677);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101040() {
   return (neuron0x2102240()*-0.312299);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101080() {
   return (neuron0x20ff320()*-0.0135162);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101b20() {
   return (neuron0x2103df0()*0.0106849);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2101b60() {
   return (neuron0x21047c0()*0.0380592);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21024f0() {
   return (neuron0x2105190()*0.153273);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2102530() {
   return (neuron0x2105b60()*0.269748);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff5d0() {
   return (neuron0x2107970()*0.010472);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20ff610() {
   return (neuron0x2107c50()*3.31665);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21040a0() {
   return (neuron0x2108620()*-0.295574);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21040e0() {
   return (neuron0x2108ff0()*1.2657);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104a70() {
   return (neuron0x21099c0()*0.356786);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2104ab0() {
   return (neuron0x210a390()*-1.31676);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105440() {
   return (neuron0x2102ee0()*0.741691);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105480() {
   return (neuron0x21038b0()*-1.81161);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105e10() {
   return (neuron0x210d120()*-0.6897);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2105e50() {
   return (neuron0x210daf0()*-1.60044);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f8ea0() {
   return (neuron0x210e4c0()*-1.14121);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20f8ee0() {
   return (neuron0x210ee90()*0.0184206);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2107f00() {
   return (neuron0x210f860()*-0.00510775);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2107f40() {
   return (neuron0x2110230()*0.168621);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21088d0() {
   return (neuron0x2110c00()*5.68366);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2108910() {
   return (neuron0x21115d0()*-2.46101);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21092a0() {
   return (neuron0x2107660()*0.0570219);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21092e0() {
   return (neuron0x21141b0()*-0.0333502);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109c70() {
   return (neuron0x2114b80()*-0.571171);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2109cb0() {
   return (neuron0x2115550()*5.6686);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a640() {
   return (neuron0x2115f20()*0.00172461);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210a680() {
   return (neuron0x21168f0()*-0.440233);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2103190() {
   return (neuron0x21172c0()*0.00699666);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21031d0() {
   return (neuron0x2117c90()*0.0243156);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ca40() {
   return (neuron0x2118660()*-0.00951083);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ca80() {
   return (neuron0x2119240()*1.3926);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d3d0() {
   return (neuron0x2119c10()*-1.76193);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210d410() {
   return (neuron0x210aa90()*-0.00718191);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210dda0() {
   return (neuron0x210b460()*-2.0677);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210dde0() {
   return (neuron0x210be30()*0.0171756);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e770() {
   return (neuron0x211e470()*2.37637);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210e7b0() {
   return (neuron0x211ed20()*-0.644189);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f140() {
   return (neuron0x211f6f0()*-0.00415228);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210f180() {
   return (neuron0x21200c0()*-1.3693);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2111880() {
   return (neuron0x20fb050()*-1.50759);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21118c0() {
   return (neuron0x20fb890()*-1.07315);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2106e40() {
   return (neuron0x20fc370()*0.00657847);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2106e80() {
   return (neuron0x20fbe10()*2.70472);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114460() {
   return (neuron0x20fd150()*1.58848);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21144a0() {
   return (neuron0x20fec20()*-1.07028);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114e30() {
   return (neuron0x20ff9f0()*-0.0203847);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2114e70() {
   return (neuron0x21003c0()*-0.0486205);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115800() {
   return (neuron0x2100d90()*0.186862);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2115840() {
   return (neuron0x2101870()*-0.0295333);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21161d0() {
   return (neuron0x2102240()*-1.39926);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116210() {
   return (neuron0x20ff320()*0.0191576);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116ba0() {
   return (neuron0x2103df0()*-0.00503536);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2116be0() {
   return (neuron0x21047c0()*0.00184606);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117570() {
   return (neuron0x2105190()*-0.110811);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21175b0() {
   return (neuron0x2105b60()*0.255986);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117f40() {
   return (neuron0x2107970()*0.00809904);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2117f80() {
   return (neuron0x2107c50()*3.35011);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118910() {
   return (neuron0x2108620()*-0.829386);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2118950() {
   return (neuron0x2108ff0()*0.734411);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21194f0() {
   return (neuron0x21099c0()*0.157313);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119530() {
   return (neuron0x210a390()*-0.526326);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119ec0() {
   return (neuron0x2102ee0()*-0.425326);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2119f00() {
   return (neuron0x21038b0()*-2.10551);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ad40() {
   return (neuron0x210d120()*1.12294);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210ad80() {
   return (neuron0x210daf0()*-1.40419);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b710() {
   return (neuron0x210e4c0()*0.045167);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210b750() {
   return (neuron0x210ee90()*-0.374115);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c0e0() {
   return (neuron0x210f860()*-0.0215699);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210c120() {
   return (neuron0x2110230()*0.840301);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211e600() {
   return (neuron0x2110c00()*0.628892);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211e640() {
   return (neuron0x21115d0()*-0.0708841);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211efd0() {
   return (neuron0x2107660()*-1.35567);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f010() {
   return (neuron0x21141b0()*-0.0177954);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f9a0() {
   return (neuron0x2114b80()*-0.520109);
}

double NNfunction_nn_charge2p_charge1m::synapse0x211f9e0() {
   return (neuron0x2115550()*0.517661);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120370() {
   return (neuron0x2115f20()*0.0483538);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21203b0() {
   return (neuron0x21168f0()*-0.0965279);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb300() {
   return (neuron0x21172c0()*-0.0239058);
}

double NNfunction_nn_charge2p_charge1m::synapse0x20fb340() {
   return (neuron0x2117c90()*-0.0181945);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210fb10() {
   return (neuron0x2118660()*-0.0171276);
}

double NNfunction_nn_charge2p_charge1m::synapse0x210fb50() {
   return (neuron0x2119240()*0.801812);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120a90() {
   return (neuron0x2119c10()*0.288257);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120ad0() {
   return (neuron0x210aa90()*0.00992705);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120b10() {
   return (neuron0x210b460()*-1.38449);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2120b50() {
   return (neuron0x210be30()*0.0121326);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2127a00() {
   return (neuron0x211e470()*0.280785);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2127a40() {
   return (neuron0x211ed20()*-1.56283);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2127a80() {
   return (neuron0x211f6f0()*0.0336614);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2127ac0() {
   return (neuron0x21200c0()*-0.404033);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2127e40() {
   return (neuron0x20fb050()*0.434065);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2127e80() {
   return (neuron0x20fb890()*-1.01402);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2127ec0() {
   return (neuron0x20fc370()*0.467729);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2127f00() {
   return (neuron0x20fbe10()*0.893807);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2127f40() {
   return (neuron0x20fd150()*0.686255);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2127f80() {
   return (neuron0x20fec20()*-2.41076);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2127fc0() {
   return (neuron0x20ff9f0()*0.461289);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128000() {
   return (neuron0x21003c0()*0.592373);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128040() {
   return (neuron0x2100d90()*0.687621);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128080() {
   return (neuron0x2101870()*0.536997);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21280c0() {
   return (neuron0x2102240()*-0.152707);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128100() {
   return (neuron0x20ff320()*0.530738);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128140() {
   return (neuron0x2103df0()*-0.398596);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128180() {
   return (neuron0x21047c0()*-1.28554);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21281c0() {
   return (neuron0x2105190()*2.21631);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128200() {
   return (neuron0x2105b60()*0.291406);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2127c90() {
   return (neuron0x2107970()*-0.537796);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2127cd0() {
   return (neuron0x2107c50()*0.25046);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128350() {
   return (neuron0x2108620()*-0.208548);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128390() {
   return (neuron0x2108ff0()*-0.529487);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21283d0() {
   return (neuron0x21099c0()*0.482855);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128410() {
   return (neuron0x210a390()*1.23117);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128450() {
   return (neuron0x2102ee0()*-0.504098);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128490() {
   return (neuron0x21038b0()*1.45392);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21284d0() {
   return (neuron0x210d120()*1.20496);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128510() {
   return (neuron0x210daf0()*1.10267);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128550() {
   return (neuron0x210e4c0()*1.83851);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128590() {
   return (neuron0x210ee90()*-6.17463);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21285d0() {
   return (neuron0x210f860()*0.932709);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128610() {
   return (neuron0x2110230()*-2.00571);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128650() {
   return (neuron0x2110c00()*1.44474);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128690() {
   return (neuron0x21115d0()*-0.0323381);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128240() {
   return (neuron0x2107660()*-0.0771821);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128280() {
   return (neuron0x21141b0()*0.761787);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21282c0() {
   return (neuron0x2114b80()*-0.168536);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128300() {
   return (neuron0x2115550()*1.0835);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21288e0() {
   return (neuron0x2115f20()*2.4768);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128920() {
   return (neuron0x21168f0()*0.100989);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128960() {
   return (neuron0x21172c0()*0.615897);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21289a0() {
   return (neuron0x2117c90()*-1.18752);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21289e0() {
   return (neuron0x2118660()*0.460094);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128a20() {
   return (neuron0x2119240()*0.74456);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128a60() {
   return (neuron0x2119c10()*-1.46934);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128aa0() {
   return (neuron0x210aa90()*-0.239491);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128ae0() {
   return (neuron0x210b460()*-0.0203547);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128b20() {
   return (neuron0x210be30()*-0.339485);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128b60() {
   return (neuron0x211e470()*0.901674);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128ba0() {
   return (neuron0x211ed20()*-0.237355);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128be0() {
   return (neuron0x211f6f0()*-0.175598);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128c20() {
   return (neuron0x21200c0()*1.12501);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128fa0() {
   return (neuron0x20fb050()*1.62741);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128fe0() {
   return (neuron0x20fb890()*0.10094);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129020() {
   return (neuron0x20fc370()*-0.186139);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129060() {
   return (neuron0x20fbe10()*0.878783);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21290a0() {
   return (neuron0x20fd150()*0.134399);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21290e0() {
   return (neuron0x20fec20()*-0.554278);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129120() {
   return (neuron0x20ff9f0()*-0.134632);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129160() {
   return (neuron0x21003c0()*-0.269899);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21291a0() {
   return (neuron0x2100d90()*0.149693);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21291e0() {
   return (neuron0x2101870()*-0.176325);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129220() {
   return (neuron0x2102240()*-0.284299);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129260() {
   return (neuron0x20ff320()*-0.179308);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21292a0() {
   return (neuron0x2103df0()*0.1236);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21292e0() {
   return (neuron0x21047c0()*-0.488715);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129320() {
   return (neuron0x2105190()*-1.65011);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129360() {
   return (neuron0x2105b60()*1.95188);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128df0() {
   return (neuron0x2107970()*0.209743);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2128e30() {
   return (neuron0x2107c50()*-1.22122);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21294b0() {
   return (neuron0x2108620()*-1.04727);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21294f0() {
   return (neuron0x2108ff0()*-2.43956);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129530() {
   return (neuron0x21099c0()*-0.905716);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129570() {
   return (neuron0x210a390()*-2.36086);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21295b0() {
   return (neuron0x2102ee0()*-2.8767);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21295f0() {
   return (neuron0x21038b0()*-0.0330227);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129630() {
   return (neuron0x210d120()*-1.06991);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129670() {
   return (neuron0x210daf0()*0.476859);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21296b0() {
   return (neuron0x210e4c0()*-1.04306);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21296f0() {
   return (neuron0x210ee90()*5.78809);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129730() {
   return (neuron0x210f860()*-0.338923);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129770() {
   return (neuron0x2110230()*4.13202);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21297b0() {
   return (neuron0x2110c00()*0.228949);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21297f0() {
   return (neuron0x21115d0()*-1.23982);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21293a0() {
   return (neuron0x2107660()*-0.0582666);
}

double NNfunction_nn_charge2p_charge1m::synapse0x21293e0() {
   return (neuron0x21141b0()*-0.289621);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129420() {
   return (neuron0x2114b80()*-0.0807236);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129460() {
   return (neuron0x2115550()*0.588336);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129a40() {
   return (neuron0x2115f20()*-0.646855);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129a80() {
   return (neuron0x21168f0()*-2.92132);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129ac0() {
   return (neuron0x21172c0()*-0.10474);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129b00() {
   return (neuron0x2117c90()*0.520832);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129b40() {
   return (neuron0x2118660()*-0.123425);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129b80() {
   return (neuron0x2119240()*-0.636028);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129bc0() {
   return (neuron0x2119c10()*-0.122764);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129c00() {
   return (neuron0x210aa90()*0.0495496);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129c40() {
   return (neuron0x210b460()*-0.0269384);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129c80() {
   return (neuron0x210be30()*0.0548562);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129cc0() {
   return (neuron0x211e470()*0.000602924);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129d00() {
   return (neuron0x211ed20()*0.338818);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129d40() {
   return (neuron0x211f6f0()*0.0498753);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129d80() {
   return (neuron0x21200c0()*2.02);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a100() {
   return (neuron0x20fb050()*-2.49286);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a140() {
   return (neuron0x20fb890()*1.38433);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a180() {
   return (neuron0x20fc370()*0.0526178);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a1c0() {
   return (neuron0x20fbe10()*-0.723579);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a200() {
   return (neuron0x20fd150()*-0.608658);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a240() {
   return (neuron0x20fec20()*1.9378);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a280() {
   return (neuron0x20ff9f0()*0.0119641);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a2c0() {
   return (neuron0x21003c0()*0.0624407);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a300() {
   return (neuron0x2100d90()*-0.591437);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a340() {
   return (neuron0x2101870()*-0.0110656);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a380() {
   return (neuron0x2102240()*-1.32112);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a3c0() {
   return (neuron0x20ff320()*0.0216677);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a400() {
   return (neuron0x2103df0()*-0.00270544);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a440() {
   return (neuron0x21047c0()*0.228162);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a480() {
   return (neuron0x2105190()*-1.85769);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a4c0() {
   return (neuron0x2105b60()*-0.933347);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129f50() {
   return (neuron0x2107970()*-0.0443825);
}

double NNfunction_nn_charge2p_charge1m::synapse0x2129f90() {
   return (neuron0x2107c50()*0.0227861);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a610() {
   return (neuron0x2108620()*0.365333);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a650() {
   return (neuron0x2108ff0()*-1.58061);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a690() {
   return (neuron0x21099c0()*1.64695);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a6d0() {
   return (neuron0x210a390()*0.0343026);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a710() {
   return (neuron0x2102ee0()*-2.46083);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a750() {
   return (neuron0x21038b0()*0.977601);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a790() {
   return (neuron0x210d120()*-1.76931);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a7d0() {
   return (neuron0x210daf0()*-0.156276);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a810() {
   return (neuron0x210e4c0()*0.267116);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a850() {
   return (neuron0x210ee90()*5.28001);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a890() {
   return (neuron0x210f860()*0.084746);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a8d0() {
   return (neuron0x2110230()*-4.6312);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a910() {
   return (neuron0x2110c00()*-1.40871);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a950() {
   return (neuron0x21115d0()*2.34434);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a500() {
   return (neuron0x2107660()*-0.0887236);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a540() {
   return (neuron0x21141b0()*0.0952351);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a580() {
   return (neuron0x2114b80()*0.119956);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212a5c0() {
   return (neuron0x2115550()*-1.46479);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212aba0() {
   return (neuron0x2115f20()*0.102019);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212abe0() {
   return (neuron0x21168f0()*-0.578377);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212ac20() {
   return (neuron0x21172c0()*-0.0217622);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212ac60() {
   return (neuron0x2117c90()*-0.116755);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212aca0() {
   return (neuron0x2118660()*-0.00979201);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212ace0() {
   return (neuron0x2119240()*-1.19335);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212ad20() {
   return (neuron0x2119c10()*1.5234);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212ad60() {
   return (neuron0x210aa90()*-0.00127122);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212ada0() {
   return (neuron0x210b460()*-0.848411);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212ade0() {
   return (neuron0x210be30()*-0.0577733);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212ae20() {
   return (neuron0x211e470()*-0.594368);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212ae60() {
   return (neuron0x211ed20()*0.995792);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212aea0() {
   return (neuron0x211f6f0()*0.0170359);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212aee0() {
   return (neuron0x21200c0()*1.11727);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212b140() {
   return (neuron0x21272c0()*-6.21263);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212b180() {
   return (neuron0x2127660()*-3.88337);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212b1c0() {
   return (neuron0x2127b00()*-3.63938);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212b200() {
   return (neuron0x2128c60()*-4.1481);
}

double NNfunction_nn_charge2p_charge1m::synapse0x212b240() {
   return (neuron0x2129dc0()*-6.47686);
}

