#include "NNfunction_NN_3_3.h"
#include <cmath>

double NNfunction_NN_3_3::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.1683)/15.4028;
   input1 = (in1 - -9.3158)/1079.24;
   input2 = (in2 - 476.447)/528.32;
   input3 = (in3 - -17.5664)/844.653;
   input4 = (in4 - 1019.98)/918.994;
   input5 = (in5 - 910.495)/955.3;
   input6 = (in6 - 921.296)/955.72;
   input7 = (in7 - 922.019)/933.576;
   input8 = (in8 - 924.009)/970.15;
   input9 = (in9 - 909.416)/957.01;
   input10 = (in10 - 959.858)/944.8;
   input11 = (in11 - 648.882)/813.066;
   input12 = (in12 - 721.527)/866.102;
   input13 = (in13 - 489.517)/512.422;
   input14 = (in14 - 670.904)/782.609;
   input15 = (in15 - 723.347)/818.533;
   input16 = (in16 - 546.393)/577.392;
   input17 = (in17 - 747.935)/890.592;
   input18 = (in18 - 750.552)/896.759;
   input19 = (in19 - 753.863)/848.574;
   input20 = (in20 - -5.00771)/506.632;
   input21 = (in21 - -7.33983)/1146.1;
   input22 = (in22 - 4.64933)/1191.55;
   input23 = (in23 - -25.245)/118.689;
   switch(index) {
     case 0:
         return neuron0x1c08420();
     default:
         return 0.;
   }
}

double NNfunction_NN_3_3::Value(int index, double* input) {
   input0 = (input[0] - 24.1683)/15.4028;
   input1 = (input[1] - -9.3158)/1079.24;
   input2 = (input[2] - 476.447)/528.32;
   input3 = (input[3] - -17.5664)/844.653;
   input4 = (input[4] - 1019.98)/918.994;
   input5 = (input[5] - 910.495)/955.3;
   input6 = (input[6] - 921.296)/955.72;
   input7 = (input[7] - 922.019)/933.576;
   input8 = (input[8] - 924.009)/970.15;
   input9 = (input[9] - 909.416)/957.01;
   input10 = (input[10] - 959.858)/944.8;
   input11 = (input[11] - 648.882)/813.066;
   input12 = (input[12] - 721.527)/866.102;
   input13 = (input[13] - 489.517)/512.422;
   input14 = (input[14] - 670.904)/782.609;
   input15 = (input[15] - 723.347)/818.533;
   input16 = (input[16] - 546.393)/577.392;
   input17 = (input[17] - 747.935)/890.592;
   input18 = (input[18] - 750.552)/896.759;
   input19 = (input[19] - 753.863)/848.574;
   input20 = (input[20] - -5.00771)/506.632;
   input21 = (input[21] - -7.33983)/1146.1;
   input22 = (input[22] - 4.64933)/1191.55;
   input23 = (input[23] - -25.245)/118.689;
   switch(index) {
     case 0:
         return neuron0x1c08420();
     default:
         return 0.;
   }
}

double NNfunction_NN_3_3::neuron0x1bd44e0() {
   return input0;
}

double NNfunction_NN_3_3::neuron0x1bd4820() {
   return input1;
}

double NNfunction_NN_3_3::neuron0x1bd4b60() {
   return input2;
}

double NNfunction_NN_3_3::neuron0x1bd4ea0() {
   return input3;
}

double NNfunction_NN_3_3::neuron0x1bd51e0() {
   return input4;
}

double NNfunction_NN_3_3::neuron0x1bd5520() {
   return input5;
}

double NNfunction_NN_3_3::neuron0x1bd5860() {
   return input6;
}

double NNfunction_NN_3_3::neuron0x1bd5ba0() {
   return input7;
}

double NNfunction_NN_3_3::neuron0x1bd5ee0() {
   return input8;
}

double NNfunction_NN_3_3::neuron0x1bd6220() {
   return input9;
}

double NNfunction_NN_3_3::neuron0x1bd6560() {
   return input10;
}

double NNfunction_NN_3_3::neuron0x1bd68a0() {
   return input11;
}

double NNfunction_NN_3_3::neuron0x1bd6be0() {
   return input12;
}

double NNfunction_NN_3_3::neuron0x1bd6f20() {
   return input13;
}

double NNfunction_NN_3_3::neuron0x1bd7260() {
   return input14;
}

double NNfunction_NN_3_3::neuron0x1bd75a0() {
   return input15;
}

double NNfunction_NN_3_3::neuron0x1bd78e0() {
   return input16;
}

double NNfunction_NN_3_3::neuron0x1bd7e40() {
   return input17;
}

double NNfunction_NN_3_3::neuron0x1bd8060() {
   return input18;
}

double NNfunction_NN_3_3::neuron0x1bd83a0() {
   return input19;
}

double NNfunction_NN_3_3::neuron0x1bd86e0() {
   return input20;
}

double NNfunction_NN_3_3::neuron0x1bd8a20() {
   return input21;
}

double NNfunction_NN_3_3::neuron0x1bd8d60() {
   return input22;
}

double NNfunction_NN_3_3::neuron0x1bd90a0() {
   return input23;
}

double NNfunction_NN_3_3::input0x1bd9540() {
   double input = 0.25144;
   input += synapse0x1994350();
   input += synapse0x1bd43a0();
   input += synapse0x1bd43e0();
   input += synapse0x1bd97f0();
   input += synapse0x1bd9830();
   input += synapse0x1bd9870();
   input += synapse0x1bd98b0();
   input += synapse0x1bd98f0();
   input += synapse0x1bd9930();
   input += synapse0x1bd9970();
   input += synapse0x1bd99b0();
   input += synapse0x1bd99f0();
   input += synapse0x1bd9a30();
   input += synapse0x1bd9a70();
   input += synapse0x1bd9ab0();
   input += synapse0x1bd9af0();
   input += synapse0x1bd4310();
   input += synapse0x1bd4350();
   input += synapse0x1985bf0();
   input += synapse0x1985c30();
   input += synapse0x1bd9d50();
   input += synapse0x1bd9d90();
   input += synapse0x1bd9dd0();
   input += synapse0x1bd9e10();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bd9540() {
   double input = input0x1bd9540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bd9e50() {
   double input = 1.17449;
   input += synapse0x1bda190();
   input += synapse0x1bda1d0();
   input += synapse0x1bda210();
   input += synapse0x1bda250();
   input += synapse0x1bda290();
   input += synapse0x1bda2d0();
   input += synapse0x1bda310();
   input += synapse0x1bda350();
   input += synapse0x1bda390();
   input += synapse0x1bd9c40();
   input += synapse0x1bd9c80();
   input += synapse0x1bd9cc0();
   input += synapse0x1bd9d00();
   input += synapse0x1bda5e0();
   input += synapse0x1bda620();
   input += synapse0x1bda660();
   input += synapse0x1bd9fe0();
   input += synapse0x1bda020();
   input += synapse0x1bda7b0();
   input += synapse0x1bda7f0();
   input += synapse0x1bda830();
   input += synapse0x1bda870();
   input += synapse0x1bda8b0();
   input += synapse0x1bda8f0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bd9e50() {
   double input = input0x1bd9e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bda930() {
   double input = 0.297602;
   input += synapse0x1bdac70();
   input += synapse0x1bdacb0();
   input += synapse0x1bdacf0();
   input += synapse0x1bdad30();
   input += synapse0x1bdad70();
   input += synapse0x1bdadb0();
   input += synapse0x1bdadf0();
   input += synapse0x1bdae30();
   input += synapse0x1bdae70();
   input += synapse0x1bdaeb0();
   input += synapse0x1bdaef0();
   input += synapse0x1bdaf30();
   input += synapse0x1bdaf70();
   input += synapse0x1bdafb0();
   input += synapse0x1bdaff0();
   input += synapse0x1bdb030();
   input += synapse0x1bdaac0();
   input += synapse0x1bdab00();
   input += synapse0x1993a40();
   input += synapse0x1993a80();
   input += synapse0x1bc3570();
   input += synapse0x1bc35b0();
   input += synapse0x1bc35f0();
   input += synapse0x1bd4420();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bda930() {
   double input = input0x1bda930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x19941c0() {
   double input = -0.773038;
   input += synapse0x1bda580();
   input += synapse0x1bd4460();
   input += synapse0x1bd44a0();
   input += synapse0x1bdb180();
   input += synapse0x1bdb1c0();
   input += synapse0x1bdb200();
   input += synapse0x1bdb240();
   input += synapse0x1bdb280();
   input += synapse0x1bdb2c0();
   input += synapse0x1bdb300();
   input += synapse0x1bdb340();
   input += synapse0x1bdb380();
   input += synapse0x1bdb3c0();
   input += synapse0x1bdb400();
   input += synapse0x1bdb440();
   input += synapse0x1bdb480();
   input += synapse0x1bda3d0();
   input += synapse0x1bda410();
   input += synapse0x1bdb5d0();
   input += synapse0x1bdb610();
   input += synapse0x1bdb650();
   input += synapse0x1bdb690();
   input += synapse0x1bdb6d0();
   input += synapse0x1bdb710();
   return input;
}

double NNfunction_NN_3_3::neuron0x19941c0() {
   double input = input0x19941c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bdb750() {
   double input = -5.34738;
   input += synapse0x1bdba90();
   input += synapse0x1bdbad0();
   input += synapse0x1bdbb10();
   input += synapse0x1bdbb50();
   input += synapse0x1bdbb90();
   input += synapse0x1bdbbd0();
   input += synapse0x1bdbc10();
   input += synapse0x1bdbc50();
   input += synapse0x1bdbc90();
   input += synapse0x1bdbcd0();
   input += synapse0x1bdbd10();
   input += synapse0x1bdbd50();
   input += synapse0x1bdbd90();
   input += synapse0x1bdbdd0();
   input += synapse0x1bdbe10();
   input += synapse0x1bdbe50();
   input += synapse0x1bdb8e0();
   input += synapse0x1bdb920();
   input += synapse0x1bdbfa0();
   input += synapse0x1bdbfe0();
   input += synapse0x1bdc020();
   input += synapse0x1bdc060();
   input += synapse0x1bdc0a0();
   input += synapse0x1bdc0e0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bdb750() {
   double input = input0x1bdb750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bdc120() {
   double input = -0.873158;
   input += synapse0x1bdc460();
   input += synapse0x1bdc4a0();
   input += synapse0x1bdc4e0();
   input += synapse0x1bdc520();
   input += synapse0x1bdc560();
   input += synapse0x1bdc5a0();
   input += synapse0x1bdc5e0();
   input += synapse0x1bdc620();
   input += synapse0x1bdc660();
   input += synapse0x1993db0();
   input += synapse0x1993df0();
   input += synapse0x1993e30();
   input += synapse0x1993e70();
   input += synapse0x1993eb0();
   input += synapse0x1993ef0();
   input += synapse0x1993f30();
   input += synapse0x1bdc2b0();
   input += synapse0x1bdc2f0();
   input += synapse0x1994080();
   input += synapse0x19940c0();
   input += synapse0x1994100();
   input += synapse0x1994140();
   input += synapse0x1994180();
   input += synapse0x1bdceb0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bdc120() {
   double input = input0x1bdc120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bdcef0() {
   double input = 1.54454;
   input += synapse0x1bdd230();
   input += synapse0x1bdd270();
   input += synapse0x1bdd2b0();
   input += synapse0x1bdd2f0();
   input += synapse0x1bdd330();
   input += synapse0x1bdd370();
   input += synapse0x1bdd3b0();
   input += synapse0x1bdd3f0();
   input += synapse0x1bdd430();
   input += synapse0x1bdd470();
   input += synapse0x1bdd4b0();
   input += synapse0x1bdd4f0();
   input += synapse0x1bdd530();
   input += synapse0x1bdd570();
   input += synapse0x1bdd5b0();
   input += synapse0x1bdd5f0();
   input += synapse0x1bdd080();
   input += synapse0x1bdd0c0();
   input += synapse0x1bdd740();
   input += synapse0x1bdd780();
   input += synapse0x1bdd7c0();
   input += synapse0x1bdd800();
   input += synapse0x1bdd840();
   input += synapse0x1bdd880();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bdcef0() {
   double input = input0x1bdcef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bdd8c0() {
   double input = -2.11433;
   input += synapse0x1bddc00();
   input += synapse0x1bddc40();
   input += synapse0x1bddc80();
   input += synapse0x1bddcc0();
   input += synapse0x1bddd00();
   input += synapse0x1bddd40();
   input += synapse0x1bddd80();
   input += synapse0x1bdddc0();
   input += synapse0x1bdde00();
   input += synapse0x1bdde40();
   input += synapse0x1bdde80();
   input += synapse0x1bddec0();
   input += synapse0x1bddf00();
   input += synapse0x1bddf40();
   input += synapse0x1bddf80();
   input += synapse0x1bddfc0();
   input += synapse0x1bdda50();
   input += synapse0x1bdda90();
   input += synapse0x1bde110();
   input += synapse0x1bde150();
   input += synapse0x1bde190();
   input += synapse0x1bde1d0();
   input += synapse0x1bde210();
   input += synapse0x1bde250();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bdd8c0() {
   double input = input0x1bdd8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bde290() {
   double input = -2.29441;
   input += synapse0x1bd7d30();
   input += synapse0x1bd7d70();
   input += synapse0x1bd7db0();
   input += synapse0x1bd7df0();
   input += synapse0x1bde7e0();
   input += synapse0x1bde820();
   input += synapse0x1bde860();
   input += synapse0x1bde8a0();
   input += synapse0x1bde8e0();
   input += synapse0x1bde920();
   input += synapse0x1bde960();
   input += synapse0x1bde9a0();
   input += synapse0x1bde9e0();
   input += synapse0x1bdea20();
   input += synapse0x1bdea60();
   input += synapse0x1bdeaa0();
   input += synapse0x1bde420();
   input += synapse0x1bde460();
   input += synapse0x1bdebf0();
   input += synapse0x1bdec30();
   input += synapse0x1bdec70();
   input += synapse0x1bdecb0();
   input += synapse0x1bdecf0();
   input += synapse0x1bded30();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bde290() {
   double input = input0x1bde290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bded70() {
   double input = 0.515466;
   input += synapse0x1bdf0b0();
   input += synapse0x1bdf0f0();
   input += synapse0x1bdf130();
   input += synapse0x1bdf170();
   input += synapse0x1bdf1b0();
   input += synapse0x1bdf1f0();
   input += synapse0x1bdf230();
   input += synapse0x1bdf270();
   input += synapse0x1bdf2b0();
   input += synapse0x1bdf2f0();
   input += synapse0x1bdf330();
   input += synapse0x1bdf370();
   input += synapse0x1bdf3b0();
   input += synapse0x1bdf3f0();
   input += synapse0x1bdf430();
   input += synapse0x1bdf470();
   input += synapse0x1bdef00();
   input += synapse0x1bdef40();
   input += synapse0x1bdf5c0();
   input += synapse0x1bdf600();
   input += synapse0x1bdf640();
   input += synapse0x1bdf680();
   input += synapse0x1bdf6c0();
   input += synapse0x1bdf700();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bded70() {
   double input = input0x1bded70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bdf740() {
   double input = 0.118578;
   input += synapse0x1bdfa80();
   input += synapse0x1bdfac0();
   input += synapse0x1bdfb00();
   input += synapse0x1bdfb40();
   input += synapse0x1bdfb80();
   input += synapse0x1bdfbc0();
   input += synapse0x1bdfc00();
   input += synapse0x1bdfc40();
   input += synapse0x1bdfc80();
   input += synapse0x1bdfcc0();
   input += synapse0x1bdfd00();
   input += synapse0x1bdfd40();
   input += synapse0x1bdfd80();
   input += synapse0x1bdfdc0();
   input += synapse0x1bdfe00();
   input += synapse0x1bdfe40();
   input += synapse0x1bdf8d0();
   input += synapse0x1bdf910();
   input += synapse0x1bdc6a0();
   input += synapse0x1bdc6e0();
   input += synapse0x1bdc720();
   input += synapse0x1bdc760();
   input += synapse0x1bdc7a0();
   input += synapse0x1bdc7e0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bdf740() {
   double input = input0x1bdf740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bdc820() {
   double input = 0.132806;
   input += synapse0x1bdcb60();
   input += synapse0x1bdcba0();
   input += synapse0x1bdcbe0();
   input += synapse0x1bdcc20();
   input += synapse0x1bdcc60();
   input += synapse0x1bdcca0();
   input += synapse0x1bdcce0();
   input += synapse0x1bdcd20();
   input += synapse0x1bdcd60();
   input += synapse0x1bdcda0();
   input += synapse0x1bdcde0();
   input += synapse0x1bdce20();
   input += synapse0x1bdce60();
   input += synapse0x1be0fa0();
   input += synapse0x1be0fe0();
   input += synapse0x1be1020();
   input += synapse0x1bdc9b0();
   input += synapse0x1bdc9f0();
   input += synapse0x1be1170();
   input += synapse0x1be11b0();
   input += synapse0x1be11f0();
   input += synapse0x1be1230();
   input += synapse0x1be1270();
   input += synapse0x1be12b0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bdc820() {
   double input = input0x1bdc820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1be12f0() {
   double input = 0.813982;
   input += synapse0x1be1630();
   input += synapse0x1be1670();
   input += synapse0x1be16b0();
   input += synapse0x1be16f0();
   input += synapse0x1be1730();
   input += synapse0x1be1770();
   input += synapse0x1be17b0();
   input += synapse0x1be17f0();
   input += synapse0x1be1830();
   input += synapse0x1be1870();
   input += synapse0x1be18b0();
   input += synapse0x1be18f0();
   input += synapse0x1be1930();
   input += synapse0x1be1970();
   input += synapse0x1be19b0();
   input += synapse0x1be19f0();
   input += synapse0x1be1480();
   input += synapse0x1be14c0();
   input += synapse0x1be1b40();
   input += synapse0x1be1b80();
   input += synapse0x1be1bc0();
   input += synapse0x1be1c00();
   input += synapse0x1be1c40();
   input += synapse0x1be1c80();
   return input;
}

double NNfunction_NN_3_3::neuron0x1be12f0() {
   double input = input0x1be12f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1be1cc0() {
   double input = -1.04663;
   input += synapse0x1be2000();
   input += synapse0x1be2040();
   input += synapse0x1be2080();
   input += synapse0x1be20c0();
   input += synapse0x1be2100();
   input += synapse0x1be2140();
   input += synapse0x1be2180();
   input += synapse0x1be21c0();
   input += synapse0x1be2200();
   input += synapse0x1be2240();
   input += synapse0x1be2280();
   input += synapse0x1be22c0();
   input += synapse0x1be2300();
   input += synapse0x1be2340();
   input += synapse0x1be2380();
   input += synapse0x1be23c0();
   input += synapse0x1be1e50();
   input += synapse0x1be1e90();
   input += synapse0x1be2510();
   input += synapse0x1be2550();
   input += synapse0x1be2590();
   input += synapse0x1be25d0();
   input += synapse0x1be2610();
   input += synapse0x1be2650();
   return input;
}

double NNfunction_NN_3_3::neuron0x1be1cc0() {
   double input = input0x1be1cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1be2690() {
   double input = 2.9395;
   input += synapse0x1be29d0();
   input += synapse0x1be2a10();
   input += synapse0x1be2a50();
   input += synapse0x1be2a90();
   input += synapse0x1be2ad0();
   input += synapse0x1be2b10();
   input += synapse0x1be2b50();
   input += synapse0x1be2b90();
   input += synapse0x1be2bd0();
   input += synapse0x1be2c10();
   input += synapse0x1be2c50();
   input += synapse0x1be2c90();
   input += synapse0x1be2cd0();
   input += synapse0x1be2d10();
   input += synapse0x1be2d50();
   input += synapse0x1be2d90();
   input += synapse0x1be2820();
   input += synapse0x1be2860();
   input += synapse0x1be2ee0();
   input += synapse0x1be2f20();
   input += synapse0x1be2f60();
   input += synapse0x1be2fa0();
   input += synapse0x1be2fe0();
   input += synapse0x1be3020();
   return input;
}

double NNfunction_NN_3_3::neuron0x1be2690() {
   double input = input0x1be2690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1be3060() {
   double input = 2.23608;
   input += synapse0x1be33a0();
   input += synapse0x1bd4700();
   input += synapse0x1bd4740();
   input += synapse0x1bd4a40();
   input += synapse0x1bd4a80();
   input += synapse0x1bd4d80();
   input += synapse0x1bd4dc0();
   input += synapse0x1bd50c0();
   input += synapse0x1bd5100();
   input += synapse0x1bd5400();
   input += synapse0x1bd5440();
   input += synapse0x1bd5740();
   input += synapse0x1bd5780();
   input += synapse0x1bd5a80();
   input += synapse0x1bd5ac0();
   input += synapse0x1bd5dc0();
   input += synapse0x1bd5e00();
   input += synapse0x1bd6100();
   input += synapse0x1bd6140();
   input += synapse0x1bd6440();
   input += synapse0x1bd6480();
   input += synapse0x1bd6780();
   input += synapse0x1bd67c0();
   input += synapse0x1bd6ac0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1be3060() {
   double input = input0x1be3060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1be4e70() {
   double input = 1.02442;
   input += synapse0x1bd6b00();
   input += synapse0x1bd77c0();
   input += synapse0x1bd7800();
   input += synapse0x1be31f0();
   input += synapse0x1be3230();
   input += synapse0x1bd7b00();
   input += synapse0x1bd7b40();
   input += synapse0x1985ad0();
   input += synapse0x1985b10();
   input += synapse0x1bd8280();
   input += synapse0x1bd82c0();
   input += synapse0x1bd85c0();
   input += synapse0x1bd8600();
   input += synapse0x1bd8900();
   input += synapse0x1bd8940();
   input += synapse0x1bd8c40();
   input += synapse0x1bd8c80();
   input += synapse0x1bd8f80();
   input += synapse0x1bd8fc0();
   input += synapse0x1bd92c0();
   input += synapse0x1bd9300();
   input += synapse0x1bd6e00();
   input += synapse0x1bd6e40();
   input += synapse0x1be5110();
   return input;
}

double NNfunction_NN_3_3::neuron0x1be4e70() {
   double input = input0x1be4e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1be5150() {
   double input = 2.18826;
   input += synapse0x1be5490();
   input += synapse0x1be54d0();
   input += synapse0x1be5510();
   input += synapse0x1be5550();
   input += synapse0x1be5590();
   input += synapse0x1be55d0();
   input += synapse0x1be5610();
   input += synapse0x1be5650();
   input += synapse0x1be5690();
   input += synapse0x1be56d0();
   input += synapse0x1be5710();
   input += synapse0x1be5750();
   input += synapse0x1be5790();
   input += synapse0x1be57d0();
   input += synapse0x1be5810();
   input += synapse0x1be5850();
   input += synapse0x1be52e0();
   input += synapse0x1be5320();
   input += synapse0x1be59a0();
   input += synapse0x1be59e0();
   input += synapse0x1be5a20();
   input += synapse0x1be5a60();
   input += synapse0x1be5aa0();
   input += synapse0x1be5ae0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1be5150() {
   double input = input0x1be5150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1be5b20() {
   double input = 3.91235;
   input += synapse0x1be5e60();
   input += synapse0x1be5ea0();
   input += synapse0x1be5ee0();
   input += synapse0x1be5f20();
   input += synapse0x1be5f60();
   input += synapse0x1be5fa0();
   input += synapse0x1be5fe0();
   input += synapse0x1be6020();
   input += synapse0x1be6060();
   input += synapse0x1be60a0();
   input += synapse0x1be60e0();
   input += synapse0x1be6120();
   input += synapse0x1be6160();
   input += synapse0x1be61a0();
   input += synapse0x1be61e0();
   input += synapse0x1be6220();
   input += synapse0x1be5cb0();
   input += synapse0x1be5cf0();
   input += synapse0x1be6370();
   input += synapse0x1be63b0();
   input += synapse0x1be63f0();
   input += synapse0x1be6430();
   input += synapse0x1be6470();
   input += synapse0x1be64b0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1be5b20() {
   double input = input0x1be5b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1be64f0() {
   double input = 5.01137;
   input += synapse0x1be6830();
   input += synapse0x1be6870();
   input += synapse0x1be68b0();
   input += synapse0x1be68f0();
   input += synapse0x1be6930();
   input += synapse0x1be6970();
   input += synapse0x1be69b0();
   input += synapse0x1be69f0();
   input += synapse0x1be6a30();
   input += synapse0x1be6a70();
   input += synapse0x1be6ab0();
   input += synapse0x1be6af0();
   input += synapse0x1be6b30();
   input += synapse0x1be6b70();
   input += synapse0x1be6bb0();
   input += synapse0x1be6bf0();
   input += synapse0x1be6680();
   input += synapse0x1be66c0();
   input += synapse0x1be6d40();
   input += synapse0x1be6d80();
   input += synapse0x1be6dc0();
   input += synapse0x1be6e00();
   input += synapse0x1be6e40();
   input += synapse0x1be6e80();
   return input;
}

double NNfunction_NN_3_3::neuron0x1be64f0() {
   double input = input0x1be64f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1be6ec0() {
   double input = 0.650455;
   input += synapse0x1be7200();
   input += synapse0x1be7240();
   input += synapse0x1be7280();
   input += synapse0x1be72c0();
   input += synapse0x1be7300();
   input += synapse0x1be7340();
   input += synapse0x1be7380();
   input += synapse0x1be73c0();
   input += synapse0x1be7400();
   input += synapse0x1be7440();
   input += synapse0x1be7480();
   input += synapse0x1be74c0();
   input += synapse0x1be7500();
   input += synapse0x1be7540();
   input += synapse0x1be7580();
   input += synapse0x1be75c0();
   input += synapse0x1be7050();
   input += synapse0x1be7090();
   input += synapse0x1be7710();
   input += synapse0x1be7750();
   input += synapse0x1be7790();
   input += synapse0x1be77d0();
   input += synapse0x1be7810();
   input += synapse0x1be7850();
   return input;
}

double NNfunction_NN_3_3::neuron0x1be6ec0() {
   double input = input0x1be6ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1be7890() {
   double input = -0.790244;
   input += synapse0x1be7bd0();
   input += synapse0x1be7c10();
   input += synapse0x1be7c50();
   input += synapse0x1be7c90();
   input += synapse0x1be7cd0();
   input += synapse0x1be7d10();
   input += synapse0x1be7d50();
   input += synapse0x1be7d90();
   input += synapse0x1be7dd0();
   input += synapse0x1bdff90();
   input += synapse0x1bdffd0();
   input += synapse0x1be0010();
   input += synapse0x1be0050();
   input += synapse0x1be0090();
   input += synapse0x1be00d0();
   input += synapse0x1be0110();
   input += synapse0x1be7a20();
   input += synapse0x1be7a60();
   input += synapse0x1be0260();
   input += synapse0x1be02a0();
   input += synapse0x1be02e0();
   input += synapse0x1be0320();
   input += synapse0x1be0360();
   input += synapse0x1be03a0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1be7890() {
   double input = input0x1be7890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1be03e0() {
   double input = -1.75093;
   input += synapse0x1be0720();
   input += synapse0x1be0760();
   input += synapse0x1be07a0();
   input += synapse0x1be07e0();
   input += synapse0x1be0820();
   input += synapse0x1be0860();
   input += synapse0x1be08a0();
   input += synapse0x1be08e0();
   input += synapse0x1be0920();
   input += synapse0x1be0960();
   input += synapse0x1be09a0();
   input += synapse0x1be09e0();
   input += synapse0x1be0a20();
   input += synapse0x1be0a60();
   input += synapse0x1be0aa0();
   input += synapse0x1be0ae0();
   input += synapse0x1be0570();
   input += synapse0x1be05b0();
   input += synapse0x1be0c30();
   input += synapse0x1be0c70();
   input += synapse0x1be0cb0();
   input += synapse0x1be0cf0();
   input += synapse0x1be0d30();
   input += synapse0x1be0d70();
   return input;
}

double NNfunction_NN_3_3::neuron0x1be03e0() {
   double input = input0x1be03e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1be0db0() {
   double input = -0.560832;
   input += synapse0x1be0f40();
   input += synapse0x1be9fd0();
   input += synapse0x1bea010();
   input += synapse0x1bea050();
   input += synapse0x1bea090();
   input += synapse0x1bea0d0();
   input += synapse0x1bea110();
   input += synapse0x1bea150();
   input += synapse0x1bea190();
   input += synapse0x1bea1d0();
   input += synapse0x1bea210();
   input += synapse0x1bea250();
   input += synapse0x1bea290();
   input += synapse0x1bea2d0();
   input += synapse0x1bea310();
   input += synapse0x1bea350();
   input += synapse0x1be9e20();
   input += synapse0x1be9e60();
   input += synapse0x1bea4a0();
   input += synapse0x1bea4e0();
   input += synapse0x1bea520();
   input += synapse0x1bea560();
   input += synapse0x1bea5a0();
   input += synapse0x1bea5e0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1be0db0() {
   double input = input0x1be0db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bea620() {
   double input = -1.15187;
   input += synapse0x1bea960();
   input += synapse0x1bea9a0();
   input += synapse0x1bea9e0();
   input += synapse0x1beaa20();
   input += synapse0x1beaa60();
   input += synapse0x1beaaa0();
   input += synapse0x1beaae0();
   input += synapse0x1beab20();
   input += synapse0x1beab60();
   input += synapse0x1beaba0();
   input += synapse0x1beabe0();
   input += synapse0x1beac20();
   input += synapse0x1beac60();
   input += synapse0x1beaca0();
   input += synapse0x1beace0();
   input += synapse0x1bead20();
   input += synapse0x1bea7b0();
   input += synapse0x1bea7f0();
   input += synapse0x1beae70();
   input += synapse0x1beaeb0();
   input += synapse0x1beaef0();
   input += synapse0x1beaf30();
   input += synapse0x1beaf70();
   input += synapse0x1beafb0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bea620() {
   double input = input0x1bea620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1beaff0() {
   double input = 1.81939;
   input += synapse0x1beb330();
   input += synapse0x1beb370();
   input += synapse0x1beb3b0();
   input += synapse0x1beb3f0();
   input += synapse0x1beb430();
   input += synapse0x1beb470();
   input += synapse0x1beb4b0();
   input += synapse0x1beb4f0();
   input += synapse0x1beb530();
   input += synapse0x1beb570();
   input += synapse0x1beb5b0();
   input += synapse0x1beb5f0();
   input += synapse0x1beb630();
   input += synapse0x1beb670();
   input += synapse0x1beb6b0();
   input += synapse0x1beb6f0();
   input += synapse0x1beb180();
   input += synapse0x1beb1c0();
   input += synapse0x1beb840();
   input += synapse0x1beb880();
   input += synapse0x1beb8c0();
   input += synapse0x1beb900();
   input += synapse0x1beb940();
   input += synapse0x1beb980();
   return input;
}

double NNfunction_NN_3_3::neuron0x1beaff0() {
   double input = input0x1beaff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1beb9c0() {
   double input = -1.2788;
   input += synapse0x1bebd00();
   input += synapse0x1bebd40();
   input += synapse0x1bebd80();
   input += synapse0x1bebdc0();
   input += synapse0x1bebe00();
   input += synapse0x1bebe40();
   input += synapse0x1bebe80();
   input += synapse0x1bebec0();
   input += synapse0x1bebf00();
   input += synapse0x1bebf40();
   input += synapse0x1bebf80();
   input += synapse0x1bebfc0();
   input += synapse0x1bec000();
   input += synapse0x1bec040();
   input += synapse0x1bec080();
   input += synapse0x1bec0c0();
   input += synapse0x1bebb50();
   input += synapse0x1bebb90();
   input += synapse0x1bec210();
   input += synapse0x1bec250();
   input += synapse0x1bec290();
   input += synapse0x1bec2d0();
   input += synapse0x1bec310();
   input += synapse0x1bec350();
   return input;
}

double NNfunction_NN_3_3::neuron0x1beb9c0() {
   double input = input0x1beb9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bec390() {
   double input = -1.11381;
   input += synapse0x1bec6d0();
   input += synapse0x1bec710();
   input += synapse0x1bec750();
   input += synapse0x1bec790();
   input += synapse0x1bec7d0();
   input += synapse0x1bec810();
   input += synapse0x1bec850();
   input += synapse0x1bec890();
   input += synapse0x1bec8d0();
   input += synapse0x1bec910();
   input += synapse0x1bec950();
   input += synapse0x1bec990();
   input += synapse0x1bec9d0();
   input += synapse0x1beca10();
   input += synapse0x1beca50();
   input += synapse0x1beca90();
   input += synapse0x1bec520();
   input += synapse0x1bec560();
   input += synapse0x1becbe0();
   input += synapse0x1becc20();
   input += synapse0x1becc60();
   input += synapse0x1becca0();
   input += synapse0x1becce0();
   input += synapse0x1becd20();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bec390() {
   double input = input0x1bec390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1becd60() {
   double input = -0.667932;
   input += synapse0x1bed0a0();
   input += synapse0x1bed0e0();
   input += synapse0x1bed120();
   input += synapse0x1bed160();
   input += synapse0x1bed1a0();
   input += synapse0x1bed1e0();
   input += synapse0x1bed220();
   input += synapse0x1bed260();
   input += synapse0x1bed2a0();
   input += synapse0x1bed2e0();
   input += synapse0x1bed320();
   input += synapse0x1bed360();
   input += synapse0x1bed3a0();
   input += synapse0x1bed3e0();
   input += synapse0x1bed420();
   input += synapse0x1bed460();
   input += synapse0x1becef0();
   input += synapse0x1becf30();
   input += synapse0x1bed5b0();
   input += synapse0x1bed5f0();
   input += synapse0x1bed630();
   input += synapse0x1bed670();
   input += synapse0x1bed6b0();
   input += synapse0x1bed6f0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1becd60() {
   double input = input0x1becd60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bed730() {
   double input = -0.223898;
   input += synapse0x1beda70();
   input += synapse0x1bedab0();
   input += synapse0x1bedaf0();
   input += synapse0x1bedb30();
   input += synapse0x1bedb70();
   input += synapse0x1bedbb0();
   input += synapse0x1bedbf0();
   input += synapse0x1bedc30();
   input += synapse0x1bedc70();
   input += synapse0x1bedcb0();
   input += synapse0x1bedcf0();
   input += synapse0x1bedd30();
   input += synapse0x1bedd70();
   input += synapse0x1beddb0();
   input += synapse0x1beddf0();
   input += synapse0x1bede30();
   input += synapse0x1bed8c0();
   input += synapse0x1bed900();
   input += synapse0x1bedf80();
   input += synapse0x1bedfc0();
   input += synapse0x1bee000();
   input += synapse0x1bee040();
   input += synapse0x1bee080();
   input += synapse0x1bee0c0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bed730() {
   double input = input0x1bed730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bee100() {
   double input = -2.94582;
   input += synapse0x1bee440();
   input += synapse0x1bee480();
   input += synapse0x1bee4c0();
   input += synapse0x1bee500();
   input += synapse0x1bee540();
   input += synapse0x1bee580();
   input += synapse0x1bee5c0();
   input += synapse0x1bee600();
   input += synapse0x1bee640();
   input += synapse0x1bee680();
   input += synapse0x1bee6c0();
   input += synapse0x1bee700();
   input += synapse0x1bee740();
   input += synapse0x1bee780();
   input += synapse0x1bee7c0();
   input += synapse0x1bee800();
   input += synapse0x1bee290();
   input += synapse0x1bee2d0();
   input += synapse0x1bee950();
   input += synapse0x1bee990();
   input += synapse0x1bee9d0();
   input += synapse0x1beea10();
   input += synapse0x1beea50();
   input += synapse0x1beea90();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bee100() {
   double input = input0x1bee100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1beead0() {
   double input = -2.90685;
   input += synapse0x1beee10();
   input += synapse0x1be33e0();
   input += synapse0x1be3420();
   input += synapse0x1be3460();
   input += synapse0x1be36b0();
   input += synapse0x1be36f0();
   input += synapse0x1be3730();
   input += synapse0x1be3980();
   input += synapse0x1be39c0();
   input += synapse0x1be3c10();
   input += synapse0x1be3c50();
   input += synapse0x1be3c90();
   input += synapse0x1be3ee0();
   input += synapse0x1be3f20();
   input += synapse0x1be4170();
   input += synapse0x1be41b0();
   input += synapse0x1beec60();
   input += synapse0x1beeca0();
   input += synapse0x1be4300();
   input += synapse0x1be4810();
   input += synapse0x1be4850();
   input += synapse0x1be4890();
   input += synapse0x1be4ae0();
   input += synapse0x1be4b20();
   return input;
}

double NNfunction_NN_3_3::neuron0x1beead0() {
   double input = input0x1beead0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1be4b60() {
   double input = 1.14179;
   input += synapse0x1be43d0();
   input += synapse0x1be4410();
   input += synapse0x1be4450();
   input += synapse0x1be4490();
   input += synapse0x1be4e10();
   input += synapse0x1bf1160();
   input += synapse0x1bf11a0();
   input += synapse0x1bf11e0();
   input += synapse0x1bf1220();
   input += synapse0x1bf1260();
   input += synapse0x1bf12a0();
   input += synapse0x1bf12e0();
   input += synapse0x1bf1320();
   input += synapse0x1bf1360();
   input += synapse0x1bf13a0();
   input += synapse0x1bf13e0();
   input += synapse0x1be4cf0();
   input += synapse0x1be4d30();
   input += synapse0x1bf1530();
   input += synapse0x1bf1570();
   input += synapse0x1bf15b0();
   input += synapse0x1bf15f0();
   input += synapse0x1bf1630();
   input += synapse0x1bf1670();
   return input;
}

double NNfunction_NN_3_3::neuron0x1be4b60() {
   double input = input0x1be4b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bf16b0() {
   double input = -0.889541;
   input += synapse0x1bf19f0();
   input += synapse0x1bf1a30();
   input += synapse0x1bf1a70();
   input += synapse0x1bf1ab0();
   input += synapse0x1bf1af0();
   input += synapse0x1bf1b30();
   input += synapse0x1bf1b70();
   input += synapse0x1bf1bb0();
   input += synapse0x1bf1bf0();
   input += synapse0x1bf1c30();
   input += synapse0x1bf1c70();
   input += synapse0x1bf1cb0();
   input += synapse0x1bf1cf0();
   input += synapse0x1bf1d30();
   input += synapse0x1bf1d70();
   input += synapse0x1bf1db0();
   input += synapse0x1bf1840();
   input += synapse0x1bf1880();
   input += synapse0x1bf1f00();
   input += synapse0x1bf1f40();
   input += synapse0x1bf1f80();
   input += synapse0x1bf1fc0();
   input += synapse0x1bf2000();
   input += synapse0x1bf2040();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bf16b0() {
   double input = input0x1bf16b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bf2080() {
   double input = -0.736259;
   input += synapse0x1bf23c0();
   input += synapse0x1bf2400();
   input += synapse0x1bf2440();
   input += synapse0x1bf2480();
   input += synapse0x1bf24c0();
   input += synapse0x1bf2500();
   input += synapse0x1bf2540();
   input += synapse0x1bf2580();
   input += synapse0x1bf25c0();
   input += synapse0x1bf2600();
   input += synapse0x1bf2640();
   input += synapse0x1bf2680();
   input += synapse0x1bf26c0();
   input += synapse0x1bf2700();
   input += synapse0x1bf2740();
   input += synapse0x1bf2780();
   input += synapse0x1bf2210();
   input += synapse0x1bf2250();
   input += synapse0x1bf28d0();
   input += synapse0x1bf2910();
   input += synapse0x1bf2950();
   input += synapse0x1bf2990();
   input += synapse0x1bf29d0();
   input += synapse0x1bf2a10();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bf2080() {
   double input = input0x1bf2080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bf2a50() {
   double input = 0.176396;
   input += synapse0x1bf2d90();
   input += synapse0x1bf2dd0();
   input += synapse0x1bf2e10();
   input += synapse0x1bf2e50();
   input += synapse0x1bf2e90();
   input += synapse0x1bf2ed0();
   input += synapse0x1bf2f10();
   input += synapse0x1bf2f50();
   input += synapse0x1bf2f90();
   input += synapse0x1bf2fd0();
   input += synapse0x1bf3010();
   input += synapse0x1bf3050();
   input += synapse0x1bf3090();
   input += synapse0x1bf30d0();
   input += synapse0x1bf3110();
   input += synapse0x1bf3150();
   input += synapse0x1bf2be0();
   input += synapse0x1bf2c20();
   input += synapse0x1bf32a0();
   input += synapse0x1bf32e0();
   input += synapse0x1bf3320();
   input += synapse0x1bf3360();
   input += synapse0x1bf33a0();
   input += synapse0x1bf33e0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bf2a50() {
   double input = input0x1bf2a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bf3420() {
   double input = 3.35387;
   input += synapse0x1bf3760();
   input += synapse0x1bf37a0();
   input += synapse0x1bf37e0();
   input += synapse0x1bf3820();
   input += synapse0x1bf3860();
   input += synapse0x1bf38a0();
   input += synapse0x1bf38e0();
   input += synapse0x1bf3920();
   input += synapse0x1bf3960();
   input += synapse0x1bf39a0();
   input += synapse0x1bf39e0();
   input += synapse0x1bf3a20();
   input += synapse0x1bf3a60();
   input += synapse0x1bf3aa0();
   input += synapse0x1bf3ae0();
   input += synapse0x1bf3b20();
   input += synapse0x1bf35b0();
   input += synapse0x1bf35f0();
   input += synapse0x1bf3c70();
   input += synapse0x1bf3cb0();
   input += synapse0x1bf3cf0();
   input += synapse0x1bf3d30();
   input += synapse0x1bf3d70();
   input += synapse0x1bf3db0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bf3420() {
   double input = input0x1bf3420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bf3df0() {
   double input = -0.365293;
   input += synapse0x1bf4130();
   input += synapse0x1bf4170();
   input += synapse0x1bf41b0();
   input += synapse0x1bf41f0();
   input += synapse0x1bf4230();
   input += synapse0x1bf4270();
   input += synapse0x1bf42b0();
   input += synapse0x1bf42f0();
   input += synapse0x1bf4330();
   input += synapse0x1bf4370();
   input += synapse0x1bf43b0();
   input += synapse0x1bf43f0();
   input += synapse0x1bf4430();
   input += synapse0x1bf4470();
   input += synapse0x1bf44b0();
   input += synapse0x1bf44f0();
   input += synapse0x1bf3f80();
   input += synapse0x1bf3fc0();
   input += synapse0x1bf4640();
   input += synapse0x1bf4680();
   input += synapse0x1bf46c0();
   input += synapse0x1bf4700();
   input += synapse0x1bf4740();
   input += synapse0x1bf4780();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bf3df0() {
   double input = input0x1bf3df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bf47c0() {
   double input = -0.82637;
   input += synapse0x1bf4b00();
   input += synapse0x1bf4b40();
   input += synapse0x1bf4b80();
   input += synapse0x1bf4bc0();
   input += synapse0x1bf4c00();
   input += synapse0x1bf4c40();
   input += synapse0x1bf4c80();
   input += synapse0x1bf4cc0();
   input += synapse0x1bf4d00();
   input += synapse0x1bf4d40();
   input += synapse0x1bf4d80();
   input += synapse0x1bf4dc0();
   input += synapse0x1bf4e00();
   input += synapse0x1bf4e40();
   input += synapse0x1bf4e80();
   input += synapse0x1bf4ec0();
   input += synapse0x1bf4950();
   input += synapse0x1bf4990();
   input += synapse0x1bf5010();
   input += synapse0x1bf5050();
   input += synapse0x1bf5090();
   input += synapse0x1bf50d0();
   input += synapse0x1bf5110();
   input += synapse0x1bf5150();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bf47c0() {
   double input = input0x1bf47c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bf5190() {
   double input = -0.54427;
   input += synapse0x1bf54d0();
   input += synapse0x1bf5510();
   input += synapse0x1bf5550();
   input += synapse0x1bf5590();
   input += synapse0x1bf55d0();
   input += synapse0x1bf5610();
   input += synapse0x1bf5650();
   input += synapse0x1bf5690();
   input += synapse0x1bf56d0();
   input += synapse0x1bf5710();
   input += synapse0x1bf5750();
   input += synapse0x1bf5790();
   input += synapse0x1bf57d0();
   input += synapse0x1bf5810();
   input += synapse0x1bf5850();
   input += synapse0x1bf5890();
   input += synapse0x1bf5320();
   input += synapse0x1bf5360();
   input += synapse0x1bf59e0();
   input += synapse0x1bf5a20();
   input += synapse0x1bf5a60();
   input += synapse0x1bf5aa0();
   input += synapse0x1bf5ae0();
   input += synapse0x1bf5b20();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bf5190() {
   double input = input0x1bf5190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bf5b60() {
   double input = -0.0648648;
   input += synapse0x1bde5d0();
   input += synapse0x1bde610();
   input += synapse0x1bde650();
   input += synapse0x1bde690();
   input += synapse0x1bde6d0();
   input += synapse0x1bde710();
   input += synapse0x1bde750();
   input += synapse0x1bde790();
   input += synapse0x1bf62b0();
   input += synapse0x1bf62f0();
   input += synapse0x1bf6330();
   input += synapse0x1bf6370();
   input += synapse0x1bf63b0();
   input += synapse0x1bf63f0();
   input += synapse0x1bf6430();
   input += synapse0x1bf6470();
   input += synapse0x1bf5cf0();
   input += synapse0x1bf5d30();
   input += synapse0x1bf65c0();
   input += synapse0x1bf6600();
   input += synapse0x1bf6640();
   input += synapse0x1bf6680();
   input += synapse0x1bf66c0();
   input += synapse0x1bf6700();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bf5b60() {
   double input = input0x1bf5b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bf6740() {
   double input = -0.113237;
   input += synapse0x1bf6a80();
   input += synapse0x1bf6ac0();
   input += synapse0x1bf6b00();
   input += synapse0x1bf6b40();
   input += synapse0x1bf6b80();
   input += synapse0x1bf6bc0();
   input += synapse0x1bf6c00();
   input += synapse0x1bf6c40();
   input += synapse0x1bf6c80();
   input += synapse0x1bf6cc0();
   input += synapse0x1bf6d00();
   input += synapse0x1bf6d40();
   input += synapse0x1bf6d80();
   input += synapse0x1bf6dc0();
   input += synapse0x1bf6e00();
   input += synapse0x1bf6e40();
   input += synapse0x1bf68d0();
   input += synapse0x1bf6910();
   input += synapse0x1bf6f90();
   input += synapse0x1bf6fd0();
   input += synapse0x1bf7010();
   input += synapse0x1bf7050();
   input += synapse0x1bf7090();
   input += synapse0x1bf70d0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bf6740() {
   double input = input0x1bf6740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bf7110() {
   double input = 0.935378;
   input += synapse0x1bf7450();
   input += synapse0x1bf7490();
   input += synapse0x1bf74d0();
   input += synapse0x1bf7510();
   input += synapse0x1bf7550();
   input += synapse0x1bf7590();
   input += synapse0x1bf75d0();
   input += synapse0x1bf7610();
   input += synapse0x1bf7650();
   input += synapse0x1bf7690();
   input += synapse0x1bf76d0();
   input += synapse0x1bf7710();
   input += synapse0x1bf7750();
   input += synapse0x1bf7790();
   input += synapse0x1bf77d0();
   input += synapse0x1bf7810();
   input += synapse0x1bf72a0();
   input += synapse0x1bf72e0();
   input += synapse0x1be7e10();
   input += synapse0x1be7e50();
   input += synapse0x1be7e90();
   input += synapse0x1be7ed0();
   input += synapse0x1be7f10();
   input += synapse0x1be7f50();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bf7110() {
   double input = input0x1bf7110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1be7f90() {
   double input = 0.977724;
   input += synapse0x1be82d0();
   input += synapse0x1be8310();
   input += synapse0x1be8350();
   input += synapse0x1be8390();
   input += synapse0x1be83d0();
   input += synapse0x1be8410();
   input += synapse0x1be8450();
   input += synapse0x1be8490();
   input += synapse0x1be84d0();
   input += synapse0x1be8510();
   input += synapse0x1be8550();
   input += synapse0x1be8590();
   input += synapse0x1be85d0();
   input += synapse0x1be8610();
   input += synapse0x1be8650();
   input += synapse0x1be8690();
   input += synapse0x1be8120();
   input += synapse0x1be8160();
   input += synapse0x1be87e0();
   input += synapse0x1be8820();
   input += synapse0x1be8860();
   input += synapse0x1be88a0();
   input += synapse0x1be88e0();
   input += synapse0x1be8920();
   return input;
}

double NNfunction_NN_3_3::neuron0x1be7f90() {
   double input = input0x1be7f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1be8960() {
   double input = 0.262169;
   input += synapse0x1be8ca0();
   input += synapse0x1be8ce0();
   input += synapse0x1be8d20();
   input += synapse0x1be8d60();
   input += synapse0x1be8da0();
   input += synapse0x1be8de0();
   input += synapse0x1be8e20();
   input += synapse0x1be8e60();
   input += synapse0x1be8ea0();
   input += synapse0x1be8ee0();
   input += synapse0x1be8f20();
   input += synapse0x1be8f60();
   input += synapse0x1be8fa0();
   input += synapse0x1be8fe0();
   input += synapse0x1be9020();
   input += synapse0x1be9060();
   input += synapse0x1be8af0();
   input += synapse0x1be8b30();
   input += synapse0x1be91b0();
   input += synapse0x1be91f0();
   input += synapse0x1be9230();
   input += synapse0x1be9270();
   input += synapse0x1be92b0();
   input += synapse0x1be92f0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1be8960() {
   double input = input0x1be8960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1be9330() {
   double input = -1.10876;
   input += synapse0x1be9670();
   input += synapse0x1be96b0();
   input += synapse0x1be96f0();
   input += synapse0x1be9730();
   input += synapse0x1be9770();
   input += synapse0x1be97b0();
   input += synapse0x1be97f0();
   input += synapse0x1be9830();
   input += synapse0x1be9870();
   input += synapse0x1be98b0();
   input += synapse0x1be98f0();
   input += synapse0x1be9930();
   input += synapse0x1be9970();
   input += synapse0x1be99b0();
   input += synapse0x1be99f0();
   input += synapse0x1be9a30();
   input += synapse0x1be94c0();
   input += synapse0x1be9500();
   input += synapse0x1be9b80();
   input += synapse0x1be9bc0();
   input += synapse0x1be9c00();
   input += synapse0x1be9c40();
   input += synapse0x1be9c80();
   input += synapse0x1be9cc0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1be9330() {
   double input = input0x1be9330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bfb970() {
   double input = -0.156506;
   input += synapse0x1bfbb90();
   input += synapse0x1bfbbd0();
   input += synapse0x1bfbc10();
   input += synapse0x1bfbc50();
   input += synapse0x1bfbc90();
   input += synapse0x1bfbcd0();
   input += synapse0x1bfbd10();
   input += synapse0x1bfbd50();
   input += synapse0x1bfbd90();
   input += synapse0x1bfbdd0();
   input += synapse0x1bfbe10();
   input += synapse0x1bfbe50();
   input += synapse0x1bfbe90();
   input += synapse0x1bfbed0();
   input += synapse0x1bfbf10();
   input += synapse0x1bfbf50();
   input += synapse0x1be9d00();
   input += synapse0x1be9d40();
   input += synapse0x1bfc0a0();
   input += synapse0x1bfc0e0();
   input += synapse0x1bfc120();
   input += synapse0x1bfc160();
   input += synapse0x1bfc1a0();
   input += synapse0x1bfc1e0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bfb970() {
   double input = input0x1bfb970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bfc220() {
   double input = -1.40366;
   input += synapse0x1bfc560();
   input += synapse0x1bfc5a0();
   input += synapse0x1bfc5e0();
   input += synapse0x1bfc620();
   input += synapse0x1bfc660();
   input += synapse0x1bfc6a0();
   input += synapse0x1bfc6e0();
   input += synapse0x1bfc720();
   input += synapse0x1bfc760();
   input += synapse0x1bfc7a0();
   input += synapse0x1bfc7e0();
   input += synapse0x1bfc820();
   input += synapse0x1bfc860();
   input += synapse0x1bfc8a0();
   input += synapse0x1bfc8e0();
   input += synapse0x1bfc920();
   input += synapse0x1bfc3b0();
   input += synapse0x1bfc3f0();
   input += synapse0x1bfca70();
   input += synapse0x1bfcab0();
   input += synapse0x1bfcaf0();
   input += synapse0x1bfcb30();
   input += synapse0x1bfcb70();
   input += synapse0x1bfcbb0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bfc220() {
   double input = input0x1bfc220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bfcbf0() {
   double input = -1.54738;
   input += synapse0x1bfcf30();
   input += synapse0x1bfcf70();
   input += synapse0x1bfcfb0();
   input += synapse0x1bfcff0();
   input += synapse0x1bfd030();
   input += synapse0x1bfd070();
   input += synapse0x1bfd0b0();
   input += synapse0x1bfd0f0();
   input += synapse0x1bfd130();
   input += synapse0x1bfd170();
   input += synapse0x1bfd1b0();
   input += synapse0x1bfd1f0();
   input += synapse0x1bfd230();
   input += synapse0x1bfd270();
   input += synapse0x1bfd2b0();
   input += synapse0x1bfd2f0();
   input += synapse0x1bfcd80();
   input += synapse0x1bfcdc0();
   input += synapse0x1bfd440();
   input += synapse0x1bfd480();
   input += synapse0x1bfd4c0();
   input += synapse0x1bfd500();
   input += synapse0x1bfd540();
   input += synapse0x1bfd580();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bfcbf0() {
   double input = input0x1bfcbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1bfd5c0() {
   double input = -0.579062;
   input += synapse0x1bfd900();
   input += synapse0x1bfd940();
   input += synapse0x1bfd980();
   input += synapse0x1bfd9c0();
   input += synapse0x1bfda00();
   input += synapse0x1bfda40();
   input += synapse0x1bfda80();
   input += synapse0x1bfdac0();
   input += synapse0x1bfdb00();
   input += synapse0x1bfdb40();
   input += synapse0x1bfdb80();
   input += synapse0x1bfdbc0();
   input += synapse0x1bfdc00();
   input += synapse0x1bfdc40();
   input += synapse0x1bfdc80();
   input += synapse0x1bfdcc0();
   input += synapse0x1bfd750();
   input += synapse0x1bfd790();
   input += synapse0x1bfde10();
   input += synapse0x1bfde50();
   input += synapse0x1bfde90();
   input += synapse0x1bfded0();
   input += synapse0x1bfdf10();
   input += synapse0x1bfdf50();
   return input;
}

double NNfunction_NN_3_3::neuron0x1bfd5c0() {
   double input = input0x1bfd5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1c047c0() {
   double input = 0.837426;
   input += synapse0x1bda4f0();
   input += synapse0x1bda530();
   input += synapse0x1bdba00();
   input += synapse0x1bdba40();
   input += synapse0x1bdc3d0();
   input += synapse0x1bdc410();
   input += synapse0x1bdd1a0();
   input += synapse0x1bdd1e0();
   input += synapse0x1bddb70();
   input += synapse0x1bddbb0();
   input += synapse0x1bde540();
   input += synapse0x1bde580();
   input += synapse0x1bdf020();
   input += synapse0x1bdf060();
   input += synapse0x1bdf9f0();
   input += synapse0x1bdfa30();
   input += synapse0x1bdcad0();
   input += synapse0x1bdcb10();
   input += synapse0x1be15a0();
   input += synapse0x1be15e0();
   input += synapse0x1be1f70();
   input += synapse0x1be1fb0();
   input += synapse0x1be2940();
   input += synapse0x1be2980();
   input += synapse0x1be3310();
   input += synapse0x1be3350();
   input += synapse0x1bd7480();
   input += synapse0x1bd74c0();
   input += synapse0x1be5400();
   input += synapse0x1be5440();
   input += synapse0x1be5dd0();
   input += synapse0x1be5e10();
   input += synapse0x1be67a0();
   input += synapse0x1be67e0();
   input += synapse0x1be7170();
   input += synapse0x1be71b0();
   input += synapse0x1be7b40();
   input += synapse0x1be7b80();
   input += synapse0x1be0690();
   input += synapse0x1be06d0();
   input += synapse0x1be9f40();
   input += synapse0x1be9f80();
   input += synapse0x1bea8d0();
   input += synapse0x1bea910();
   input += synapse0x1beb2a0();
   input += synapse0x1beb2e0();
   input += synapse0x1bebc70();
   input += synapse0x1bebcb0();
   input += synapse0x1bec640();
   input += synapse0x1bec680();
   return input;
}

double NNfunction_NN_3_3::neuron0x1c047c0() {
   double input = input0x1c047c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1c04b60() {
   double input = -0.153993;
   input += synapse0x1beed80();
   input += synapse0x1beedc0();
   input += synapse0x1be4340();
   input += synapse0x1be4380();
   input += synapse0x1bf1960();
   input += synapse0x1bf19a0();
   input += synapse0x1bf2330();
   input += synapse0x1bf2370();
   input += synapse0x1bf2d00();
   input += synapse0x1bf2d40();
   input += synapse0x1bf36d0();
   input += synapse0x1bf3710();
   input += synapse0x1bf40a0();
   input += synapse0x1bf40e0();
   input += synapse0x1bf4a70();
   input += synapse0x1bf4ab0();
   input += synapse0x1bf5440();
   input += synapse0x1bf5480();
   input += synapse0x1bf5e10();
   input += synapse0x1bf5e50();
   input += synapse0x1bf69f0();
   input += synapse0x1bf6a30();
   input += synapse0x1bf73c0();
   input += synapse0x1bf7400();
   input += synapse0x1be8240();
   input += synapse0x1be8280();
   input += synapse0x1be8c10();
   input += synapse0x1be8c50();
   input += synapse0x1be95e0();
   input += synapse0x1be9620();
   input += synapse0x1bfbb00();
   input += synapse0x1bfbb40();
   input += synapse0x1bfc4d0();
   input += synapse0x1bfc510();
   input += synapse0x1bfcea0();
   input += synapse0x1bfcee0();
   input += synapse0x1bfd870();
   input += synapse0x1bfd8b0();
   input += synapse0x1bd9760();
   input += synapse0x1bd97a0();
   input += synapse0x1bed010();
   input += synapse0x1bed050();
   input += synapse0x1bfdf90();
   input += synapse0x1bfdfd0();
   input += synapse0x1bfe010();
   input += synapse0x1bfe050();
   input += synapse0x1c04f00();
   input += synapse0x1c04f40();
   input += synapse0x1c04f80();
   input += synapse0x1c04fc0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1c04b60() {
   double input = input0x1c04b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1c05000() {
   double input = 0.9353;
   input += synapse0x1c05340();
   input += synapse0x1c05380();
   input += synapse0x1c053c0();
   input += synapse0x1c05400();
   input += synapse0x1c05440();
   input += synapse0x1c05480();
   input += synapse0x1c054c0();
   input += synapse0x1c05500();
   input += synapse0x1c05540();
   input += synapse0x1c05580();
   input += synapse0x1c055c0();
   input += synapse0x1c05600();
   input += synapse0x1c05640();
   input += synapse0x1c05680();
   input += synapse0x1c056c0();
   input += synapse0x1c05700();
   input += synapse0x1c05190();
   input += synapse0x1c051d0();
   input += synapse0x1c05850();
   input += synapse0x1c05890();
   input += synapse0x1c058d0();
   input += synapse0x1c05910();
   input += synapse0x1c05950();
   input += synapse0x1c05990();
   input += synapse0x1c059d0();
   input += synapse0x1c05a10();
   input += synapse0x1c05a50();
   input += synapse0x1c05a90();
   input += synapse0x1c05ad0();
   input += synapse0x1c05b10();
   input += synapse0x1c05b50();
   input += synapse0x1c05b90();
   input += synapse0x1c05740();
   input += synapse0x1c05780();
   input += synapse0x1c057c0();
   input += synapse0x1c05800();
   input += synapse0x1c05de0();
   input += synapse0x1c05e20();
   input += synapse0x1c05e60();
   input += synapse0x1c05ea0();
   input += synapse0x1c05ee0();
   input += synapse0x1c05f20();
   input += synapse0x1c05f60();
   input += synapse0x1c05fa0();
   input += synapse0x1c05fe0();
   input += synapse0x1c06020();
   input += synapse0x1c06060();
   input += synapse0x1c060a0();
   input += synapse0x1c060e0();
   input += synapse0x1c06120();
   return input;
}

double NNfunction_NN_3_3::neuron0x1c05000() {
   double input = input0x1c05000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1c06160() {
   double input = -0.0927407;
   input += synapse0x1c064a0();
   input += synapse0x1c064e0();
   input += synapse0x1c06520();
   input += synapse0x1c06560();
   input += synapse0x1c065a0();
   input += synapse0x1c065e0();
   input += synapse0x1c06620();
   input += synapse0x1c06660();
   input += synapse0x1c066a0();
   input += synapse0x1c066e0();
   input += synapse0x1c06720();
   input += synapse0x1c06760();
   input += synapse0x1c067a0();
   input += synapse0x1c067e0();
   input += synapse0x1c06820();
   input += synapse0x1c06860();
   input += synapse0x1c062f0();
   input += synapse0x1c06330();
   input += synapse0x1c069b0();
   input += synapse0x1c069f0();
   input += synapse0x1c06a30();
   input += synapse0x1c06a70();
   input += synapse0x1c06ab0();
   input += synapse0x1c06af0();
   input += synapse0x1c06b30();
   input += synapse0x1c06b70();
   input += synapse0x1c06bb0();
   input += synapse0x1c06bf0();
   input += synapse0x1c06c30();
   input += synapse0x1c06c70();
   input += synapse0x1c06cb0();
   input += synapse0x1c06cf0();
   input += synapse0x1c068a0();
   input += synapse0x1c068e0();
   input += synapse0x1c06920();
   input += synapse0x1c06960();
   input += synapse0x1c06f40();
   input += synapse0x1c06f80();
   input += synapse0x1c06fc0();
   input += synapse0x1c07000();
   input += synapse0x1c07040();
   input += synapse0x1c07080();
   input += synapse0x1c070c0();
   input += synapse0x1c07100();
   input += synapse0x1c07140();
   input += synapse0x1c07180();
   input += synapse0x1c071c0();
   input += synapse0x1c07200();
   input += synapse0x1c07240();
   input += synapse0x1c07280();
   return input;
}

double NNfunction_NN_3_3::neuron0x1c06160() {
   double input = input0x1c06160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1c072c0() {
   double input = 0.253417;
   input += synapse0x1c07600();
   input += synapse0x1c07640();
   input += synapse0x1c07680();
   input += synapse0x1c076c0();
   input += synapse0x1c07700();
   input += synapse0x1c07740();
   input += synapse0x1c07780();
   input += synapse0x1c077c0();
   input += synapse0x1c07800();
   input += synapse0x1c07840();
   input += synapse0x1c07880();
   input += synapse0x1c078c0();
   input += synapse0x1c07900();
   input += synapse0x1c07940();
   input += synapse0x1c07980();
   input += synapse0x1c079c0();
   input += synapse0x1c07450();
   input += synapse0x1c07490();
   input += synapse0x1c07b10();
   input += synapse0x1c07b50();
   input += synapse0x1c07b90();
   input += synapse0x1c07bd0();
   input += synapse0x1c07c10();
   input += synapse0x1c07c50();
   input += synapse0x1c07c90();
   input += synapse0x1c07cd0();
   input += synapse0x1c07d10();
   input += synapse0x1c07d50();
   input += synapse0x1c07d90();
   input += synapse0x1c07dd0();
   input += synapse0x1c07e10();
   input += synapse0x1c07e50();
   input += synapse0x1c07a00();
   input += synapse0x1c07a40();
   input += synapse0x1c07a80();
   input += synapse0x1c07ac0();
   input += synapse0x1c080a0();
   input += synapse0x1c080e0();
   input += synapse0x1c08120();
   input += synapse0x1c08160();
   input += synapse0x1c081a0();
   input += synapse0x1c081e0();
   input += synapse0x1c08220();
   input += synapse0x1c08260();
   input += synapse0x1c082a0();
   input += synapse0x1c082e0();
   input += synapse0x1c08320();
   input += synapse0x1c08360();
   input += synapse0x1c083a0();
   input += synapse0x1c083e0();
   return input;
}

double NNfunction_NN_3_3::neuron0x1c072c0() {
   double input = input0x1c072c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_3::input0x1c08420() {
   double input = 5.10151;
   input += synapse0x1bd9500();
   input += synapse0x1c08640();
   input += synapse0x1c08680();
   input += synapse0x1c086c0();
   input += synapse0x1c08700();
   return input;
}

double NNfunction_NN_3_3::neuron0x1c08420() {
   double input = input0x1c08420();
   return (input * 1)+0;
}

double NNfunction_NN_3_3::synapse0x1994350() {
   return (neuron0x1bd44e0()*0.112774);
}

double NNfunction_NN_3_3::synapse0x1bd43a0() {
   return (neuron0x1bd4820()*0.0873984);
}

double NNfunction_NN_3_3::synapse0x1bd43e0() {
   return (neuron0x1bd4b60()*0.664991);
}

double NNfunction_NN_3_3::synapse0x1bd97f0() {
   return (neuron0x1bd4ea0()*0.0351702);
}

double NNfunction_NN_3_3::synapse0x1bd9830() {
   return (neuron0x1bd51e0()*0.0424663);
}

double NNfunction_NN_3_3::synapse0x1bd9870() {
   return (neuron0x1bd5520()*0.103378);
}

double NNfunction_NN_3_3::synapse0x1bd98b0() {
   return (neuron0x1bd5860()*-0.00727747);
}

double NNfunction_NN_3_3::synapse0x1bd98f0() {
   return (neuron0x1bd5ba0()*0.123601);
}

double NNfunction_NN_3_3::synapse0x1bd9930() {
   return (neuron0x1bd5ee0()*-0.0876085);
}

double NNfunction_NN_3_3::synapse0x1bd9970() {
   return (neuron0x1bd6220()*-0.059675);
}

double NNfunction_NN_3_3::synapse0x1bd99b0() {
   return (neuron0x1bd6560()*-0.00229464);
}

double NNfunction_NN_3_3::synapse0x1bd99f0() {
   return (neuron0x1bd68a0()*-0.219345);
}

double NNfunction_NN_3_3::synapse0x1bd9a30() {
   return (neuron0x1bd6be0()*0.0907622);
}

double NNfunction_NN_3_3::synapse0x1bd9a70() {
   return (neuron0x1bd6f20()*-0.0321665);
}

double NNfunction_NN_3_3::synapse0x1bd9ab0() {
   return (neuron0x1bd7260()*1.03075);
}

double NNfunction_NN_3_3::synapse0x1bd9af0() {
   return (neuron0x1bd75a0()*0.105907);
}

double NNfunction_NN_3_3::synapse0x1bd4310() {
   return (neuron0x1bd78e0()*0.0796791);
}

double NNfunction_NN_3_3::synapse0x1bd4350() {
   return (neuron0x1bd7e40()*0.115934);
}

double NNfunction_NN_3_3::synapse0x1985bf0() {
   return (neuron0x1bd8060()*-0.0764534);
}

double NNfunction_NN_3_3::synapse0x1985c30() {
   return (neuron0x1bd83a0()*-0.0034903);
}

double NNfunction_NN_3_3::synapse0x1bd9d50() {
   return (neuron0x1bd86e0()*-0.036867);
}

double NNfunction_NN_3_3::synapse0x1bd9d90() {
   return (neuron0x1bd8a20()*-0.00983062);
}

double NNfunction_NN_3_3::synapse0x1bd9dd0() {
   return (neuron0x1bd8d60()*0.000700956);
}

double NNfunction_NN_3_3::synapse0x1bd9e10() {
   return (neuron0x1bd90a0()*1.33856);
}

double NNfunction_NN_3_3::synapse0x1bda190() {
   return (neuron0x1bd44e0()*0.00410233);
}

double NNfunction_NN_3_3::synapse0x1bda1d0() {
   return (neuron0x1bd4820()*-0.0865257);
}

double NNfunction_NN_3_3::synapse0x1bda210() {
   return (neuron0x1bd4b60()*3.15864);
}

double NNfunction_NN_3_3::synapse0x1bda250() {
   return (neuron0x1bd4ea0()*-0.0113005);
}

double NNfunction_NN_3_3::synapse0x1bda290() {
   return (neuron0x1bd51e0()*-0.0389592);
}

double NNfunction_NN_3_3::synapse0x1bda2d0() {
   return (neuron0x1bd5520()*-0.0308757);
}

double NNfunction_NN_3_3::synapse0x1bda310() {
   return (neuron0x1bd5860()*-0.0213207);
}

double NNfunction_NN_3_3::synapse0x1bda350() {
   return (neuron0x1bd5ba0()*0.0346119);
}

double NNfunction_NN_3_3::synapse0x1bda390() {
   return (neuron0x1bd5ee0()*-0.0146762);
}

double NNfunction_NN_3_3::synapse0x1bd9c40() {
   return (neuron0x1bd6220()*-0.00877275);
}

double NNfunction_NN_3_3::synapse0x1bd9c80() {
   return (neuron0x1bd6560()*-0.0323184);
}

double NNfunction_NN_3_3::synapse0x1bd9cc0() {
   return (neuron0x1bd68a0()*0.226699);
}

double NNfunction_NN_3_3::synapse0x1bd9d00() {
   return (neuron0x1bd6be0()*0.0517859);
}

double NNfunction_NN_3_3::synapse0x1bda5e0() {
   return (neuron0x1bd6f20()*0.0231161);
}

double NNfunction_NN_3_3::synapse0x1bda620() {
   return (neuron0x1bd7260()*-0.240799);
}

double NNfunction_NN_3_3::synapse0x1bda660() {
   return (neuron0x1bd75a0()*-0.0207676);
}

double NNfunction_NN_3_3::synapse0x1bd9fe0() {
   return (neuron0x1bd78e0()*-0.0327184);
}

double NNfunction_NN_3_3::synapse0x1bda020() {
   return (neuron0x1bd7e40()*0.0232534);
}

double NNfunction_NN_3_3::synapse0x1bda7b0() {
   return (neuron0x1bd8060()*0.0564812);
}

double NNfunction_NN_3_3::synapse0x1bda7f0() {
   return (neuron0x1bd83a0()*0.0501535);
}

double NNfunction_NN_3_3::synapse0x1bda830() {
   return (neuron0x1bd86e0()*0.00531769);
}

double NNfunction_NN_3_3::synapse0x1bda870() {
   return (neuron0x1bd8a20()*-0.00936982);
}

double NNfunction_NN_3_3::synapse0x1bda8b0() {
   return (neuron0x1bd8d60()*-0.0247474);
}

double NNfunction_NN_3_3::synapse0x1bda8f0() {
   return (neuron0x1bd90a0()*1.1904);
}

double NNfunction_NN_3_3::synapse0x1bdac70() {
   return (neuron0x1bd44e0()*-0.659135);
}

double NNfunction_NN_3_3::synapse0x1bdacb0() {
   return (neuron0x1bd4820()*-0.270961);
}

double NNfunction_NN_3_3::synapse0x1bdacf0() {
   return (neuron0x1bd4b60()*-0.526529);
}

double NNfunction_NN_3_3::synapse0x1bdad30() {
   return (neuron0x1bd4ea0()*-0.460045);
}

double NNfunction_NN_3_3::synapse0x1bdad70() {
   return (neuron0x1bd51e0()*0.0639271);
}

double NNfunction_NN_3_3::synapse0x1bdadb0() {
   return (neuron0x1bd5520()*0.521177);
}

double NNfunction_NN_3_3::synapse0x1bdadf0() {
   return (neuron0x1bd5860()*0.20639);
}

double NNfunction_NN_3_3::synapse0x1bdae30() {
   return (neuron0x1bd5ba0()*0.483725);
}

double NNfunction_NN_3_3::synapse0x1bdae70() {
   return (neuron0x1bd5ee0()*0.0896983);
}

double NNfunction_NN_3_3::synapse0x1bdaeb0() {
   return (neuron0x1bd6220()*-0.499977);
}

double NNfunction_NN_3_3::synapse0x1bdaef0() {
   return (neuron0x1bd6560()*0.414701);
}

double NNfunction_NN_3_3::synapse0x1bdaf30() {
   return (neuron0x1bd68a0()*-0.0422391);
}

double NNfunction_NN_3_3::synapse0x1bdaf70() {
   return (neuron0x1bd6be0()*0.387311);
}

double NNfunction_NN_3_3::synapse0x1bdafb0() {
   return (neuron0x1bd6f20()*-0.0712636);
}

double NNfunction_NN_3_3::synapse0x1bdaff0() {
   return (neuron0x1bd7260()*-0.0751214);
}

double NNfunction_NN_3_3::synapse0x1bdb030() {
   return (neuron0x1bd75a0()*0.211128);
}

double NNfunction_NN_3_3::synapse0x1bdaac0() {
   return (neuron0x1bd78e0()*-0.150126);
}

double NNfunction_NN_3_3::synapse0x1bdab00() {
   return (neuron0x1bd7e40()*-0.349549);
}

double NNfunction_NN_3_3::synapse0x1993a40() {
   return (neuron0x1bd8060()*0.436636);
}

double NNfunction_NN_3_3::synapse0x1993a80() {
   return (neuron0x1bd83a0()*-0.0034036);
}

double NNfunction_NN_3_3::synapse0x1bc3570() {
   return (neuron0x1bd86e0()*-0.377305);
}

double NNfunction_NN_3_3::synapse0x1bc35b0() {
   return (neuron0x1bd8a20()*0.0473274);
}

double NNfunction_NN_3_3::synapse0x1bc35f0() {
   return (neuron0x1bd8d60()*-0.505171);
}

double NNfunction_NN_3_3::synapse0x1bd4420() {
   return (neuron0x1bd90a0()*-0.350034);
}

double NNfunction_NN_3_3::synapse0x1bda580() {
   return (neuron0x1bd44e0()*-0.0407084);
}

double NNfunction_NN_3_3::synapse0x1bd4460() {
   return (neuron0x1bd4820()*-0.0441694);
}

double NNfunction_NN_3_3::synapse0x1bd44a0() {
   return (neuron0x1bd4b60()*3.18012);
}

double NNfunction_NN_3_3::synapse0x1bdb180() {
   return (neuron0x1bd4ea0()*0.0338031);
}

double NNfunction_NN_3_3::synapse0x1bdb1c0() {
   return (neuron0x1bd51e0()*-0.0163425);
}

double NNfunction_NN_3_3::synapse0x1bdb200() {
   return (neuron0x1bd5520()*0.0133549);
}

double NNfunction_NN_3_3::synapse0x1bdb240() {
   return (neuron0x1bd5860()*0.0312758);
}

double NNfunction_NN_3_3::synapse0x1bdb280() {
   return (neuron0x1bd5ba0()*0.0206405);
}

double NNfunction_NN_3_3::synapse0x1bdb2c0() {
   return (neuron0x1bd5ee0()*-0.047398);
}

double NNfunction_NN_3_3::synapse0x1bdb300() {
   return (neuron0x1bd6220()*-0.0103369);
}

double NNfunction_NN_3_3::synapse0x1bdb340() {
   return (neuron0x1bd6560()*0.00106108);
}

double NNfunction_NN_3_3::synapse0x1bdb380() {
   return (neuron0x1bd68a0()*0.919706);
}

double NNfunction_NN_3_3::synapse0x1bdb3c0() {
   return (neuron0x1bd6be0()*-0.0440902);
}

double NNfunction_NN_3_3::synapse0x1bdb400() {
   return (neuron0x1bd6f20()*0.00497987);
}

double NNfunction_NN_3_3::synapse0x1bdb440() {
   return (neuron0x1bd7260()*0.125803);
}

double NNfunction_NN_3_3::synapse0x1bdb480() {
   return (neuron0x1bd75a0()*-0.0249179);
}

double NNfunction_NN_3_3::synapse0x1bda3d0() {
   return (neuron0x1bd78e0()*0.0303183);
}

double NNfunction_NN_3_3::synapse0x1bda410() {
   return (neuron0x1bd7e40()*0.0381851);
}

double NNfunction_NN_3_3::synapse0x1bdb5d0() {
   return (neuron0x1bd8060()*-0.0392282);
}

double NNfunction_NN_3_3::synapse0x1bdb610() {
   return (neuron0x1bd83a0()*-0.0152862);
}

double NNfunction_NN_3_3::synapse0x1bdb650() {
   return (neuron0x1bd86e0()*-0.0172233);
}

double NNfunction_NN_3_3::synapse0x1bdb690() {
   return (neuron0x1bd8a20()*-0.0201426);
}

double NNfunction_NN_3_3::synapse0x1bdb6d0() {
   return (neuron0x1bd8d60()*-0.0049892);
}

double NNfunction_NN_3_3::synapse0x1bdb710() {
   return (neuron0x1bd90a0()*-0.39146);
}

double NNfunction_NN_3_3::synapse0x1bdba90() {
   return (neuron0x1bd44e0()*-0.076289);
}

double NNfunction_NN_3_3::synapse0x1bdbad0() {
   return (neuron0x1bd4820()*0.0207188);
}

double NNfunction_NN_3_3::synapse0x1bdbb10() {
   return (neuron0x1bd4b60()*-5.64819);
}

double NNfunction_NN_3_3::synapse0x1bdbb50() {
   return (neuron0x1bd4ea0()*0.00891796);
}

double NNfunction_NN_3_3::synapse0x1bdbb90() {
   return (neuron0x1bd51e0()*-0.0212003);
}

double NNfunction_NN_3_3::synapse0x1bdbbd0() {
   return (neuron0x1bd5520()*-0.00871885);
}

double NNfunction_NN_3_3::synapse0x1bdbc10() {
   return (neuron0x1bd5860()*0.00154189);
}

double NNfunction_NN_3_3::synapse0x1bdbc50() {
   return (neuron0x1bd5ba0()*0.00224837);
}

double NNfunction_NN_3_3::synapse0x1bdbc90() {
   return (neuron0x1bd5ee0()*-0.000944248);
}

double NNfunction_NN_3_3::synapse0x1bdbcd0() {
   return (neuron0x1bd6220()*0.00916084);
}

double NNfunction_NN_3_3::synapse0x1bdbd10() {
   return (neuron0x1bd6560()*0.0035082);
}

double NNfunction_NN_3_3::synapse0x1bdbd50() {
   return (neuron0x1bd68a0()*0.0190944);
}

double NNfunction_NN_3_3::synapse0x1bdbd90() {
   return (neuron0x1bd6be0()*-0.0320283);
}

double NNfunction_NN_3_3::synapse0x1bdbdd0() {
   return (neuron0x1bd6f20()*0.00604591);
}

double NNfunction_NN_3_3::synapse0x1bdbe10() {
   return (neuron0x1bd7260()*0.0619763);
}

double NNfunction_NN_3_3::synapse0x1bdbe50() {
   return (neuron0x1bd75a0()*0.00563955);
}

double NNfunction_NN_3_3::synapse0x1bdb8e0() {
   return (neuron0x1bd78e0()*-0.00646045);
}

double NNfunction_NN_3_3::synapse0x1bdb920() {
   return (neuron0x1bd7e40()*-0.0077739);
}

double NNfunction_NN_3_3::synapse0x1bdbfa0() {
   return (neuron0x1bd8060()*0.00536244);
}

double NNfunction_NN_3_3::synapse0x1bdbfe0() {
   return (neuron0x1bd83a0()*0.00866954);
}

double NNfunction_NN_3_3::synapse0x1bdc020() {
   return (neuron0x1bd86e0()*-0.000916267);
}

double NNfunction_NN_3_3::synapse0x1bdc060() {
   return (neuron0x1bd8a20()*0.0101774);
}

double NNfunction_NN_3_3::synapse0x1bdc0a0() {
   return (neuron0x1bd8d60()*-0.0153139);
}

double NNfunction_NN_3_3::synapse0x1bdc0e0() {
   return (neuron0x1bd90a0()*2.38928);
}

double NNfunction_NN_3_3::synapse0x1bdc460() {
   return (neuron0x1bd44e0()*-0.018979);
}

double NNfunction_NN_3_3::synapse0x1bdc4a0() {
   return (neuron0x1bd4820()*24.6023);
}

double NNfunction_NN_3_3::synapse0x1bdc4e0() {
   return (neuron0x1bd4b60()*0.0582317);
}

double NNfunction_NN_3_3::synapse0x1bdc520() {
   return (neuron0x1bd4ea0()*-0.00604609);
}

double NNfunction_NN_3_3::synapse0x1bdc560() {
   return (neuron0x1bd51e0()*-0.0216314);
}

double NNfunction_NN_3_3::synapse0x1bdc5a0() {
   return (neuron0x1bd5520()*0.00485714);
}

double NNfunction_NN_3_3::synapse0x1bdc5e0() {
   return (neuron0x1bd5860()*0.00190484);
}

double NNfunction_NN_3_3::synapse0x1bdc620() {
   return (neuron0x1bd5ba0()*-0.00988083);
}

double NNfunction_NN_3_3::synapse0x1bdc660() {
   return (neuron0x1bd5ee0()*0.00135439);
}

double NNfunction_NN_3_3::synapse0x1993db0() {
   return (neuron0x1bd6220()*-0.00876734);
}

double NNfunction_NN_3_3::synapse0x1993df0() {
   return (neuron0x1bd6560()*0.00408007);
}

double NNfunction_NN_3_3::synapse0x1993e30() {
   return (neuron0x1bd68a0()*0.0115752);
}

double NNfunction_NN_3_3::synapse0x1993e70() {
   return (neuron0x1bd6be0()*0.00992283);
}

double NNfunction_NN_3_3::synapse0x1993eb0() {
   return (neuron0x1bd6f20()*-0.00522141);
}

double NNfunction_NN_3_3::synapse0x1993ef0() {
   return (neuron0x1bd7260()*-0.0771953);
}

double NNfunction_NN_3_3::synapse0x1993f30() {
   return (neuron0x1bd75a0()*-0.00781235);
}

double NNfunction_NN_3_3::synapse0x1bdc2b0() {
   return (neuron0x1bd78e0()*-0.00427469);
}

double NNfunction_NN_3_3::synapse0x1bdc2f0() {
   return (neuron0x1bd7e40()*-0.0265334);
}

double NNfunction_NN_3_3::synapse0x1994080() {
   return (neuron0x1bd8060()*0.00373476);
}

double NNfunction_NN_3_3::synapse0x19940c0() {
   return (neuron0x1bd83a0()*0.00495706);
}

double NNfunction_NN_3_3::synapse0x1994100() {
   return (neuron0x1bd86e0()*-0.00794639);
}

double NNfunction_NN_3_3::synapse0x1994140() {
   return (neuron0x1bd8a20()*0.00506414);
}

double NNfunction_NN_3_3::synapse0x1994180() {
   return (neuron0x1bd8d60()*0.00995926);
}

double NNfunction_NN_3_3::synapse0x1bdceb0() {
   return (neuron0x1bd90a0()*-0.603876);
}

double NNfunction_NN_3_3::synapse0x1bdd230() {
   return (neuron0x1bd44e0()*-0.0238997);
}

double NNfunction_NN_3_3::synapse0x1bdd270() {
   return (neuron0x1bd4820()*-2.53538);
}

double NNfunction_NN_3_3::synapse0x1bdd2b0() {
   return (neuron0x1bd4b60()*-0.500827);
}

double NNfunction_NN_3_3::synapse0x1bdd2f0() {
   return (neuron0x1bd4ea0()*0.0764275);
}

double NNfunction_NN_3_3::synapse0x1bdd330() {
   return (neuron0x1bd51e0()*-0.00394081);
}

double NNfunction_NN_3_3::synapse0x1bdd370() {
   return (neuron0x1bd5520()*0.0859282);
}

double NNfunction_NN_3_3::synapse0x1bdd3b0() {
   return (neuron0x1bd5860()*0.0801873);
}

double NNfunction_NN_3_3::synapse0x1bdd3f0() {
   return (neuron0x1bd5ba0()*0.0445167);
}

double NNfunction_NN_3_3::synapse0x1bdd430() {
   return (neuron0x1bd5ee0()*0.0908069);
}

double NNfunction_NN_3_3::synapse0x1bdd470() {
   return (neuron0x1bd6220()*-0.0632576);
}

double NNfunction_NN_3_3::synapse0x1bdd4b0() {
   return (neuron0x1bd6560()*-0.0326806);
}

double NNfunction_NN_3_3::synapse0x1bdd4f0() {
   return (neuron0x1bd68a0()*-0.325198);
}

double NNfunction_NN_3_3::synapse0x1bdd530() {
   return (neuron0x1bd6be0()*0.00414502);
}

double NNfunction_NN_3_3::synapse0x1bdd570() {
   return (neuron0x1bd6f20()*-0.0201562);
}

double NNfunction_NN_3_3::synapse0x1bdd5b0() {
   return (neuron0x1bd7260()*3.52467);
}

double NNfunction_NN_3_3::synapse0x1bdd5f0() {
   return (neuron0x1bd75a0()*-0.105733);
}

double NNfunction_NN_3_3::synapse0x1bdd080() {
   return (neuron0x1bd78e0()*0.00155912);
}

double NNfunction_NN_3_3::synapse0x1bdd0c0() {
   return (neuron0x1bd7e40()*-0.0580665);
}

double NNfunction_NN_3_3::synapse0x1bdd740() {
   return (neuron0x1bd8060()*0.00841418);
}

double NNfunction_NN_3_3::synapse0x1bdd780() {
   return (neuron0x1bd83a0()*-0.0124629);
}

double NNfunction_NN_3_3::synapse0x1bdd7c0() {
   return (neuron0x1bd86e0()*0.0312934);
}

double NNfunction_NN_3_3::synapse0x1bdd800() {
   return (neuron0x1bd8a20()*-0.0239888);
}

double NNfunction_NN_3_3::synapse0x1bdd840() {
   return (neuron0x1bd8d60()*0.026915);
}

double NNfunction_NN_3_3::synapse0x1bdd880() {
   return (neuron0x1bd90a0()*-0.0505289);
}

double NNfunction_NN_3_3::synapse0x1bddc00() {
   return (neuron0x1bd44e0()*-0.062437);
}

double NNfunction_NN_3_3::synapse0x1bddc40() {
   return (neuron0x1bd4820()*0.000209867);
}

double NNfunction_NN_3_3::synapse0x1bddc80() {
   return (neuron0x1bd4b60()*0.470827);
}

double NNfunction_NN_3_3::synapse0x1bddcc0() {
   return (neuron0x1bd4ea0()*0.0401584);
}

double NNfunction_NN_3_3::synapse0x1bddd00() {
   return (neuron0x1bd51e0()*0.0424403);
}

double NNfunction_NN_3_3::synapse0x1bddd40() {
   return (neuron0x1bd5520()*-0.0107853);
}

double NNfunction_NN_3_3::synapse0x1bddd80() {
   return (neuron0x1bd5860()*-0.0142988);
}

double NNfunction_NN_3_3::synapse0x1bdddc0() {
   return (neuron0x1bd5ba0()*0.0313516);
}

double NNfunction_NN_3_3::synapse0x1bdde00() {
   return (neuron0x1bd5ee0()*-0.0196858);
}

double NNfunction_NN_3_3::synapse0x1bdde40() {
   return (neuron0x1bd6220()*-0.0739849);
}

double NNfunction_NN_3_3::synapse0x1bdde80() {
   return (neuron0x1bd6560()*-0.0183219);
}

double NNfunction_NN_3_3::synapse0x1bddec0() {
   return (neuron0x1bd68a0()*0.626506);
}

double NNfunction_NN_3_3::synapse0x1bddf00() {
   return (neuron0x1bd6be0()*-1.5528);
}

double NNfunction_NN_3_3::synapse0x1bddf40() {
   return (neuron0x1bd6f20()*0.040474);
}

double NNfunction_NN_3_3::synapse0x1bddf80() {
   return (neuron0x1bd7260()*0.0358042);
}

double NNfunction_NN_3_3::synapse0x1bddfc0() {
   return (neuron0x1bd75a0()*0.0199536);
}

double NNfunction_NN_3_3::synapse0x1bdda50() {
   return (neuron0x1bd78e0()*0.0716508);
}

double NNfunction_NN_3_3::synapse0x1bdda90() {
   return (neuron0x1bd7e40()*-0.0492741);
}

double NNfunction_NN_3_3::synapse0x1bde110() {
   return (neuron0x1bd8060()*-0.0532478);
}

double NNfunction_NN_3_3::synapse0x1bde150() {
   return (neuron0x1bd83a0()*-0.0342647);
}

double NNfunction_NN_3_3::synapse0x1bde190() {
   return (neuron0x1bd86e0()*-0.0112873);
}

double NNfunction_NN_3_3::synapse0x1bde1d0() {
   return (neuron0x1bd8a20()*0.0248772);
}

double NNfunction_NN_3_3::synapse0x1bde210() {
   return (neuron0x1bd8d60()*0.0115436);
}

double NNfunction_NN_3_3::synapse0x1bde250() {
   return (neuron0x1bd90a0()*-0.686795);
}

double NNfunction_NN_3_3::synapse0x1bd7d30() {
   return (neuron0x1bd44e0()*-0.0276946);
}

double NNfunction_NN_3_3::synapse0x1bd7d70() {
   return (neuron0x1bd4820()*-0.0705392);
}

double NNfunction_NN_3_3::synapse0x1bd7db0() {
   return (neuron0x1bd4b60()*0.130816);
}

double NNfunction_NN_3_3::synapse0x1bd7df0() {
   return (neuron0x1bd4ea0()*0.0290654);
}

double NNfunction_NN_3_3::synapse0x1bde7e0() {
   return (neuron0x1bd51e0()*-0.0568556);
}

double NNfunction_NN_3_3::synapse0x1bde820() {
   return (neuron0x1bd5520()*-0.0181229);
}

double NNfunction_NN_3_3::synapse0x1bde860() {
   return (neuron0x1bd5860()*-0.0123608);
}

double NNfunction_NN_3_3::synapse0x1bde8a0() {
   return (neuron0x1bd5ba0()*-0.00647242);
}

double NNfunction_NN_3_3::synapse0x1bde8e0() {
   return (neuron0x1bd5ee0()*0.0311586);
}

double NNfunction_NN_3_3::synapse0x1bde920() {
   return (neuron0x1bd6220()*0.0841952);
}

double NNfunction_NN_3_3::synapse0x1bde960() {
   return (neuron0x1bd6560()*-0.0262747);
}

double NNfunction_NN_3_3::synapse0x1bde9a0() {
   return (neuron0x1bd68a0()*0.0212761);
}

double NNfunction_NN_3_3::synapse0x1bde9e0() {
   return (neuron0x1bd6be0()*0.0340035);
}

double NNfunction_NN_3_3::synapse0x1bdea20() {
   return (neuron0x1bd6f20()*0.00390414);
}

double NNfunction_NN_3_3::synapse0x1bdea60() {
   return (neuron0x1bd7260()*-2.09513);
}

double NNfunction_NN_3_3::synapse0x1bdeaa0() {
   return (neuron0x1bd75a0()*0.0183301);
}

double NNfunction_NN_3_3::synapse0x1bde420() {
   return (neuron0x1bd78e0()*-0.0152301);
}

double NNfunction_NN_3_3::synapse0x1bde460() {
   return (neuron0x1bd7e40()*0.0679836);
}

double NNfunction_NN_3_3::synapse0x1bdebf0() {
   return (neuron0x1bd8060()*0.0116316);
}

double NNfunction_NN_3_3::synapse0x1bdec30() {
   return (neuron0x1bd83a0()*0.0321229);
}

double NNfunction_NN_3_3::synapse0x1bdec70() {
   return (neuron0x1bd86e0()*-0.0212024);
}

double NNfunction_NN_3_3::synapse0x1bdecb0() {
   return (neuron0x1bd8a20()*-0.0184394);
}

double NNfunction_NN_3_3::synapse0x1bdecf0() {
   return (neuron0x1bd8d60()*-0.0250545);
}

double NNfunction_NN_3_3::synapse0x1bded30() {
   return (neuron0x1bd90a0()*0.264804);
}

double NNfunction_NN_3_3::synapse0x1bdf0b0() {
   return (neuron0x1bd44e0()*0.038133);
}

double NNfunction_NN_3_3::synapse0x1bdf0f0() {
   return (neuron0x1bd4820()*1.21275);
}

double NNfunction_NN_3_3::synapse0x1bdf130() {
   return (neuron0x1bd4b60()*0.120186);
}

double NNfunction_NN_3_3::synapse0x1bdf170() {
   return (neuron0x1bd4ea0()*-0.0115559);
}

double NNfunction_NN_3_3::synapse0x1bdf1b0() {
   return (neuron0x1bd51e0()*-0.0754748);
}

double NNfunction_NN_3_3::synapse0x1bdf1f0() {
   return (neuron0x1bd5520()*-0.0274033);
}

double NNfunction_NN_3_3::synapse0x1bdf230() {
   return (neuron0x1bd5860()*0.046595);
}

double NNfunction_NN_3_3::synapse0x1bdf270() {
   return (neuron0x1bd5ba0()*-0.0475097);
}

double NNfunction_NN_3_3::synapse0x1bdf2b0() {
   return (neuron0x1bd5ee0()*-0.0690964);
}

double NNfunction_NN_3_3::synapse0x1bdf2f0() {
   return (neuron0x1bd6220()*-0.017728);
}

double NNfunction_NN_3_3::synapse0x1bdf330() {
   return (neuron0x1bd6560()*-0.0536391);
}

double NNfunction_NN_3_3::synapse0x1bdf370() {
   return (neuron0x1bd68a0()*0.000590005);
}

double NNfunction_NN_3_3::synapse0x1bdf3b0() {
   return (neuron0x1bd6be0()*-0.15256);
}

double NNfunction_NN_3_3::synapse0x1bdf3f0() {
   return (neuron0x1bd6f20()*0.0205933);
}

double NNfunction_NN_3_3::synapse0x1bdf430() {
   return (neuron0x1bd7260()*0.688498);
}

double NNfunction_NN_3_3::synapse0x1bdf470() {
   return (neuron0x1bd75a0()*-0.0504407);
}

double NNfunction_NN_3_3::synapse0x1bdef00() {
   return (neuron0x1bd78e0()*-0.0958896);
}

double NNfunction_NN_3_3::synapse0x1bdef40() {
   return (neuron0x1bd7e40()*-0.224417);
}

double NNfunction_NN_3_3::synapse0x1bdf5c0() {
   return (neuron0x1bd8060()*0.0891345);
}

double NNfunction_NN_3_3::synapse0x1bdf600() {
   return (neuron0x1bd83a0()*0.0139506);
}

double NNfunction_NN_3_3::synapse0x1bdf640() {
   return (neuron0x1bd86e0()*-0.0296658);
}

double NNfunction_NN_3_3::synapse0x1bdf680() {
   return (neuron0x1bd8a20()*-0.0478131);
}

double NNfunction_NN_3_3::synapse0x1bdf6c0() {
   return (neuron0x1bd8d60()*-0.118606);
}

double NNfunction_NN_3_3::synapse0x1bdf700() {
   return (neuron0x1bd90a0()*0.747963);
}

double NNfunction_NN_3_3::synapse0x1bdfa80() {
   return (neuron0x1bd44e0()*-0.0279788);
}

double NNfunction_NN_3_3::synapse0x1bdfac0() {
   return (neuron0x1bd4820()*0.040835);
}

double NNfunction_NN_3_3::synapse0x1bdfb00() {
   return (neuron0x1bd4b60()*0.837727);
}

double NNfunction_NN_3_3::synapse0x1bdfb40() {
   return (neuron0x1bd4ea0()*0.0093813);
}

double NNfunction_NN_3_3::synapse0x1bdfb80() {
   return (neuron0x1bd51e0()*-0.0302435);
}

double NNfunction_NN_3_3::synapse0x1bdfbc0() {
   return (neuron0x1bd5520()*-0.00988943);
}

double NNfunction_NN_3_3::synapse0x1bdfc00() {
   return (neuron0x1bd5860()*0.0326193);
}

double NNfunction_NN_3_3::synapse0x1bdfc40() {
   return (neuron0x1bd5ba0()*0.0608158);
}

double NNfunction_NN_3_3::synapse0x1bdfc80() {
   return (neuron0x1bd5ee0()*0.0322437);
}

double NNfunction_NN_3_3::synapse0x1bdfcc0() {
   return (neuron0x1bd6220()*-0.0279707);
}

double NNfunction_NN_3_3::synapse0x1bdfd00() {
   return (neuron0x1bd6560()*-0.0539706);
}

double NNfunction_NN_3_3::synapse0x1bdfd40() {
   return (neuron0x1bd68a0()*-1.82643);
}

double NNfunction_NN_3_3::synapse0x1bdfd80() {
   return (neuron0x1bd6be0()*0.0500296);
}

double NNfunction_NN_3_3::synapse0x1bdfdc0() {
   return (neuron0x1bd6f20()*-0.0176806);
}

double NNfunction_NN_3_3::synapse0x1bdfe00() {
   return (neuron0x1bd7260()*0.101853);
}

double NNfunction_NN_3_3::synapse0x1bdfe40() {
   return (neuron0x1bd75a0()*-0.00880829);
}

double NNfunction_NN_3_3::synapse0x1bdf8d0() {
   return (neuron0x1bd78e0()*-0.0475306);
}

double NNfunction_NN_3_3::synapse0x1bdf910() {
   return (neuron0x1bd7e40()*-0.00705199);
}

double NNfunction_NN_3_3::synapse0x1bdc6a0() {
   return (neuron0x1bd8060()*-0.0282582);
}

double NNfunction_NN_3_3::synapse0x1bdc6e0() {
   return (neuron0x1bd83a0()*-0.0294307);
}

double NNfunction_NN_3_3::synapse0x1bdc720() {
   return (neuron0x1bd86e0()*-0.0449206);
}

double NNfunction_NN_3_3::synapse0x1bdc760() {
   return (neuron0x1bd8a20()*-0.0135732);
}

double NNfunction_NN_3_3::synapse0x1bdc7a0() {
   return (neuron0x1bd8d60()*-0.00893362);
}

double NNfunction_NN_3_3::synapse0x1bdc7e0() {
   return (neuron0x1bd90a0()*-0.10434);
}

double NNfunction_NN_3_3::synapse0x1bdcb60() {
   return (neuron0x1bd44e0()*0.00497147);
}

double NNfunction_NN_3_3::synapse0x1bdcba0() {
   return (neuron0x1bd4820()*0.0301225);
}

double NNfunction_NN_3_3::synapse0x1bdcbe0() {
   return (neuron0x1bd4b60()*1.26965);
}

double NNfunction_NN_3_3::synapse0x1bdcc20() {
   return (neuron0x1bd4ea0()*0.0415805);
}

double NNfunction_NN_3_3::synapse0x1bdcc60() {
   return (neuron0x1bd51e0()*0.00822858);
}

double NNfunction_NN_3_3::synapse0x1bdcca0() {
   return (neuron0x1bd5520()*0.0487842);
}

double NNfunction_NN_3_3::synapse0x1bdcce0() {
   return (neuron0x1bd5860()*-0.0283587);
}

double NNfunction_NN_3_3::synapse0x1bdcd20() {
   return (neuron0x1bd5ba0()*0.0194844);
}

double NNfunction_NN_3_3::synapse0x1bdcd60() {
   return (neuron0x1bd5ee0()*-0.0023303);
}

double NNfunction_NN_3_3::synapse0x1bdcda0() {
   return (neuron0x1bd6220()*-0.0278);
}

double NNfunction_NN_3_3::synapse0x1bdcde0() {
   return (neuron0x1bd6560()*0.00329195);
}

double NNfunction_NN_3_3::synapse0x1bdce20() {
   return (neuron0x1bd68a0()*-0.301149);
}

double NNfunction_NN_3_3::synapse0x1bdce60() {
   return (neuron0x1bd6be0()*-0.233484);
}

double NNfunction_NN_3_3::synapse0x1be0fa0() {
   return (neuron0x1bd6f20()*0.0203707);
}

double NNfunction_NN_3_3::synapse0x1be0fe0() {
   return (neuron0x1bd7260()*0.130916);
}

double NNfunction_NN_3_3::synapse0x1be1020() {
   return (neuron0x1bd75a0()*-0.0434771);
}

double NNfunction_NN_3_3::synapse0x1bdc9b0() {
   return (neuron0x1bd78e0()*-0.0662991);
}

double NNfunction_NN_3_3::synapse0x1bdc9f0() {
   return (neuron0x1bd7e40()*-0.0321279);
}

double NNfunction_NN_3_3::synapse0x1be1170() {
   return (neuron0x1bd8060()*-0.132262);
}

double NNfunction_NN_3_3::synapse0x1be11b0() {
   return (neuron0x1bd83a0()*-0.0727604);
}

double NNfunction_NN_3_3::synapse0x1be11f0() {
   return (neuron0x1bd86e0()*-0.0538997);
}

double NNfunction_NN_3_3::synapse0x1be1230() {
   return (neuron0x1bd8a20()*-0.0543379);
}

double NNfunction_NN_3_3::synapse0x1be1270() {
   return (neuron0x1bd8d60()*-0.0522969);
}

double NNfunction_NN_3_3::synapse0x1be12b0() {
   return (neuron0x1bd90a0()*-0.175005);
}

double NNfunction_NN_3_3::synapse0x1be1630() {
   return (neuron0x1bd44e0()*0.0546706);
}

double NNfunction_NN_3_3::synapse0x1be1670() {
   return (neuron0x1bd4820()*-0.0817304);
}

double NNfunction_NN_3_3::synapse0x1be16b0() {
   return (neuron0x1bd4b60()*0.481504);
}

double NNfunction_NN_3_3::synapse0x1be16f0() {
   return (neuron0x1bd4ea0()*-0.0118887);
}

double NNfunction_NN_3_3::synapse0x1be1730() {
   return (neuron0x1bd51e0()*-0.00561634);
}

double NNfunction_NN_3_3::synapse0x1be1770() {
   return (neuron0x1bd5520()*0.0148421);
}

double NNfunction_NN_3_3::synapse0x1be17b0() {
   return (neuron0x1bd5860()*0.037427);
}

double NNfunction_NN_3_3::synapse0x1be17f0() {
   return (neuron0x1bd5ba0()*-0.0146775);
}

double NNfunction_NN_3_3::synapse0x1be1830() {
   return (neuron0x1bd5ee0()*-0.0069713);
}

double NNfunction_NN_3_3::synapse0x1be1870() {
   return (neuron0x1bd6220()*-0.0755411);
}

double NNfunction_NN_3_3::synapse0x1be18b0() {
   return (neuron0x1bd6560()*0.0252763);
}

double NNfunction_NN_3_3::synapse0x1be18f0() {
   return (neuron0x1bd68a0()*-0.01464);
}

double NNfunction_NN_3_3::synapse0x1be1930() {
   return (neuron0x1bd6be0()*0.0352842);
}

double NNfunction_NN_3_3::synapse0x1be1970() {
   return (neuron0x1bd6f20()*-0.0228372);
}

double NNfunction_NN_3_3::synapse0x1be19b0() {
   return (neuron0x1bd7260()*-0.527518);
}

double NNfunction_NN_3_3::synapse0x1be19f0() {
   return (neuron0x1bd75a0()*-0.0135254);
}

double NNfunction_NN_3_3::synapse0x1be1480() {
   return (neuron0x1bd78e0()*0.0129067);
}

double NNfunction_NN_3_3::synapse0x1be14c0() {
   return (neuron0x1bd7e40()*0.274592);
}

double NNfunction_NN_3_3::synapse0x1be1b40() {
   return (neuron0x1bd8060()*0.0337811);
}

double NNfunction_NN_3_3::synapse0x1be1b80() {
   return (neuron0x1bd83a0()*0.0351615);
}

double NNfunction_NN_3_3::synapse0x1be1bc0() {
   return (neuron0x1bd86e0()*-0.0278923);
}

double NNfunction_NN_3_3::synapse0x1be1c00() {
   return (neuron0x1bd8a20()*0.0110752);
}

double NNfunction_NN_3_3::synapse0x1be1c40() {
   return (neuron0x1bd8d60()*0.0313821);
}

double NNfunction_NN_3_3::synapse0x1be1c80() {
   return (neuron0x1bd90a0()*-0.145907);
}

double NNfunction_NN_3_3::synapse0x1be2000() {
   return (neuron0x1bd44e0()*-0.102382);
}

double NNfunction_NN_3_3::synapse0x1be2040() {
   return (neuron0x1bd4820()*0.0231595);
}

double NNfunction_NN_3_3::synapse0x1be2080() {
   return (neuron0x1bd4b60()*-0.276223);
}

double NNfunction_NN_3_3::synapse0x1be20c0() {
   return (neuron0x1bd4ea0()*0.0257404);
}

double NNfunction_NN_3_3::synapse0x1be2100() {
   return (neuron0x1bd51e0()*-0.00919957);
}

double NNfunction_NN_3_3::synapse0x1be2140() {
   return (neuron0x1bd5520()*0.0209824);
}

double NNfunction_NN_3_3::synapse0x1be2180() {
   return (neuron0x1bd5860()*-0.0274898);
}

double NNfunction_NN_3_3::synapse0x1be21c0() {
   return (neuron0x1bd5ba0()*-0.0144151);
}

double NNfunction_NN_3_3::synapse0x1be2200() {
   return (neuron0x1bd5ee0()*0.0551741);
}

double NNfunction_NN_3_3::synapse0x1be2240() {
   return (neuron0x1bd6220()*0.0650516);
}

double NNfunction_NN_3_3::synapse0x1be2280() {
   return (neuron0x1bd6560()*0.00605918);
}

double NNfunction_NN_3_3::synapse0x1be22c0() {
   return (neuron0x1bd68a0()*0.177676);
}

double NNfunction_NN_3_3::synapse0x1be2300() {
   return (neuron0x1bd6be0()*-0.0426826);
}

double NNfunction_NN_3_3::synapse0x1be2340() {
   return (neuron0x1bd6f20()*0.171659);
}

double NNfunction_NN_3_3::synapse0x1be2380() {
   return (neuron0x1bd7260()*0.0708165);
}

double NNfunction_NN_3_3::synapse0x1be23c0() {
   return (neuron0x1bd75a0()*-0.020772);
}

double NNfunction_NN_3_3::synapse0x1be1e50() {
   return (neuron0x1bd78e0()*-0.131819);
}

double NNfunction_NN_3_3::synapse0x1be1e90() {
   return (neuron0x1bd7e40()*-0.0948147);
}

double NNfunction_NN_3_3::synapse0x1be2510() {
   return (neuron0x1bd8060()*0.0248777);
}

double NNfunction_NN_3_3::synapse0x1be2550() {
   return (neuron0x1bd83a0()*-0.0357746);
}

double NNfunction_NN_3_3::synapse0x1be2590() {
   return (neuron0x1bd86e0()*0.0231263);
}

double NNfunction_NN_3_3::synapse0x1be25d0() {
   return (neuron0x1bd8a20()*-0.00532753);
}

double NNfunction_NN_3_3::synapse0x1be2610() {
   return (neuron0x1bd8d60()*0.0281253);
}

double NNfunction_NN_3_3::synapse0x1be2650() {
   return (neuron0x1bd90a0()*-0.663865);
}

double NNfunction_NN_3_3::synapse0x1be29d0() {
   return (neuron0x1bd44e0()*-0.235208);
}

double NNfunction_NN_3_3::synapse0x1be2a10() {
   return (neuron0x1bd4820()*0.0457601);
}

double NNfunction_NN_3_3::synapse0x1be2a50() {
   return (neuron0x1bd4b60()*3.81153);
}

double NNfunction_NN_3_3::synapse0x1be2a90() {
   return (neuron0x1bd4ea0()*-0.0115171);
}

double NNfunction_NN_3_3::synapse0x1be2ad0() {
   return (neuron0x1bd51e0()*-0.0651615);
}

double NNfunction_NN_3_3::synapse0x1be2b10() {
   return (neuron0x1bd5520()*0.0109841);
}

double NNfunction_NN_3_3::synapse0x1be2b50() {
   return (neuron0x1bd5860()*-0.00424897);
}

double NNfunction_NN_3_3::synapse0x1be2b90() {
   return (neuron0x1bd5ba0()*0.0682);
}

double NNfunction_NN_3_3::synapse0x1be2bd0() {
   return (neuron0x1bd5ee0()*-0.0254984);
}

double NNfunction_NN_3_3::synapse0x1be2c10() {
   return (neuron0x1bd6220()*-0.0157011);
}

double NNfunction_NN_3_3::synapse0x1be2c50() {
   return (neuron0x1bd6560()*-0.0462136);
}

double NNfunction_NN_3_3::synapse0x1be2c90() {
   return (neuron0x1bd68a0()*0.189047);
}

double NNfunction_NN_3_3::synapse0x1be2cd0() {
   return (neuron0x1bd6be0()*-0.0144697);
}

double NNfunction_NN_3_3::synapse0x1be2d10() {
   return (neuron0x1bd6f20()*0.0530865);
}

double NNfunction_NN_3_3::synapse0x1be2d50() {
   return (neuron0x1bd7260()*0.00298378);
}

double NNfunction_NN_3_3::synapse0x1be2d90() {
   return (neuron0x1bd75a0()*0.0200803);
}

double NNfunction_NN_3_3::synapse0x1be2820() {
   return (neuron0x1bd78e0()*-0.0399098);
}

double NNfunction_NN_3_3::synapse0x1be2860() {
   return (neuron0x1bd7e40()*0.0971532);
}

double NNfunction_NN_3_3::synapse0x1be2ee0() {
   return (neuron0x1bd8060()*0.0243965);
}

double NNfunction_NN_3_3::synapse0x1be2f20() {
   return (neuron0x1bd83a0()*0.0406237);
}

double NNfunction_NN_3_3::synapse0x1be2f60() {
   return (neuron0x1bd86e0()*-0.0264645);
}

double NNfunction_NN_3_3::synapse0x1be2fa0() {
   return (neuron0x1bd8a20()*0.0100457);
}

double NNfunction_NN_3_3::synapse0x1be2fe0() {
   return (neuron0x1bd8d60()*-0.0184807);
}

double NNfunction_NN_3_3::synapse0x1be3020() {
   return (neuron0x1bd90a0()*0.837311);
}

double NNfunction_NN_3_3::synapse0x1be33a0() {
   return (neuron0x1bd44e0()*0.148144);
}

double NNfunction_NN_3_3::synapse0x1bd4700() {
   return (neuron0x1bd4820()*0.0556359);
}

double NNfunction_NN_3_3::synapse0x1bd4740() {
   return (neuron0x1bd4b60()*1.67003);
}

double NNfunction_NN_3_3::synapse0x1bd4a40() {
   return (neuron0x1bd4ea0()*0.0427045);
}

double NNfunction_NN_3_3::synapse0x1bd4a80() {
   return (neuron0x1bd51e0()*0.0221218);
}

double NNfunction_NN_3_3::synapse0x1bd4d80() {
   return (neuron0x1bd5520()*-0.0133139);
}

double NNfunction_NN_3_3::synapse0x1bd4dc0() {
   return (neuron0x1bd5860()*-0.0400254);
}

double NNfunction_NN_3_3::synapse0x1bd50c0() {
   return (neuron0x1bd5ba0()*-0.0284432);
}

double NNfunction_NN_3_3::synapse0x1bd5100() {
   return (neuron0x1bd5ee0()*0.00924741);
}

double NNfunction_NN_3_3::synapse0x1bd5400() {
   return (neuron0x1bd6220()*-0.0104474);
}

double NNfunction_NN_3_3::synapse0x1bd5440() {
   return (neuron0x1bd6560()*-0.0281128);
}

double NNfunction_NN_3_3::synapse0x1bd5740() {
   return (neuron0x1bd68a0()*0.239537);
}

double NNfunction_NN_3_3::synapse0x1bd5780() {
   return (neuron0x1bd6be0()*0.0173255);
}

double NNfunction_NN_3_3::synapse0x1bd5a80() {
   return (neuron0x1bd6f20()*0.00510202);
}

double NNfunction_NN_3_3::synapse0x1bd5ac0() {
   return (neuron0x1bd7260()*-0.00271825);
}

double NNfunction_NN_3_3::synapse0x1bd5dc0() {
   return (neuron0x1bd75a0()*0.0429509);
}

double NNfunction_NN_3_3::synapse0x1bd5e00() {
   return (neuron0x1bd78e0()*0.0216885);
}

double NNfunction_NN_3_3::synapse0x1bd6100() {
   return (neuron0x1bd7e40()*-0.0713952);
}

double NNfunction_NN_3_3::synapse0x1bd6140() {
   return (neuron0x1bd8060()*-0.0208494);
}

double NNfunction_NN_3_3::synapse0x1bd6440() {
   return (neuron0x1bd83a0()*-0.0197376);
}

double NNfunction_NN_3_3::synapse0x1bd6480() {
   return (neuron0x1bd86e0()*0.0131429);
}

double NNfunction_NN_3_3::synapse0x1bd6780() {
   return (neuron0x1bd8a20()*-0.0429321);
}

double NNfunction_NN_3_3::synapse0x1bd67c0() {
   return (neuron0x1bd8d60()*-0.0217595);
}

double NNfunction_NN_3_3::synapse0x1bd6ac0() {
   return (neuron0x1bd90a0()*-0.434358);
}

double NNfunction_NN_3_3::synapse0x1bd6b00() {
   return (neuron0x1bd44e0()*-0.00821567);
}

double NNfunction_NN_3_3::synapse0x1bd77c0() {
   return (neuron0x1bd4820()*-8.793);
}

double NNfunction_NN_3_3::synapse0x1bd7800() {
   return (neuron0x1bd4b60()*0.605279);
}

double NNfunction_NN_3_3::synapse0x1be31f0() {
   return (neuron0x1bd4ea0()*0.0177509);
}

double NNfunction_NN_3_3::synapse0x1be3230() {
   return (neuron0x1bd51e0()*0.00238859);
}

double NNfunction_NN_3_3::synapse0x1bd7b00() {
   return (neuron0x1bd5520()*0.010444);
}

double NNfunction_NN_3_3::synapse0x1bd7b40() {
   return (neuron0x1bd5860()*-0.00860183);
}

double NNfunction_NN_3_3::synapse0x1985ad0() {
   return (neuron0x1bd5ba0()*0.00342702);
}

double NNfunction_NN_3_3::synapse0x1985b10() {
   return (neuron0x1bd5ee0()*-0.00287585);
}

double NNfunction_NN_3_3::synapse0x1bd8280() {
   return (neuron0x1bd6220()*-0.00367265);
}

double NNfunction_NN_3_3::synapse0x1bd82c0() {
   return (neuron0x1bd6560()*-0.00538299);
}

double NNfunction_NN_3_3::synapse0x1bd85c0() {
   return (neuron0x1bd68a0()*-0.0138655);
}

double NNfunction_NN_3_3::synapse0x1bd8600() {
   return (neuron0x1bd6be0()*-0.00232662);
}

double NNfunction_NN_3_3::synapse0x1bd8900() {
   return (neuron0x1bd6f20()*0.014153);
}

double NNfunction_NN_3_3::synapse0x1bd8940() {
   return (neuron0x1bd7260()*-0.103134);
}

double NNfunction_NN_3_3::synapse0x1bd8c40() {
   return (neuron0x1bd75a0()*-0.00862811);
}

double NNfunction_NN_3_3::synapse0x1bd8c80() {
   return (neuron0x1bd78e0()*-0.00883703);
}

double NNfunction_NN_3_3::synapse0x1bd8f80() {
   return (neuron0x1bd7e40()*-0.0167118);
}

double NNfunction_NN_3_3::synapse0x1bd8fc0() {
   return (neuron0x1bd8060()*0.00218105);
}

double NNfunction_NN_3_3::synapse0x1bd92c0() {
   return (neuron0x1bd83a0()*0.00840482);
}

double NNfunction_NN_3_3::synapse0x1bd9300() {
   return (neuron0x1bd86e0()*0.00317559);
}

double NNfunction_NN_3_3::synapse0x1bd6e00() {
   return (neuron0x1bd8a20()*-0.00308818);
}

double NNfunction_NN_3_3::synapse0x1bd6e40() {
   return (neuron0x1bd8d60()*0.00361142);
}

double NNfunction_NN_3_3::synapse0x1be5110() {
   return (neuron0x1bd90a0()*-0.403693);
}

double NNfunction_NN_3_3::synapse0x1be5490() {
   return (neuron0x1bd44e0()*0.00943996);
}

double NNfunction_NN_3_3::synapse0x1be54d0() {
   return (neuron0x1bd4820()*-0.0172234);
}

double NNfunction_NN_3_3::synapse0x1be5510() {
   return (neuron0x1bd4b60()*2.1132);
}

double NNfunction_NN_3_3::synapse0x1be5550() {
   return (neuron0x1bd4ea0()*0.023571);
}

double NNfunction_NN_3_3::synapse0x1be5590() {
   return (neuron0x1bd51e0()*0.0123459);
}

double NNfunction_NN_3_3::synapse0x1be55d0() {
   return (neuron0x1bd5520()*0.0208718);
}

double NNfunction_NN_3_3::synapse0x1be5610() {
   return (neuron0x1bd5860()*0.0112522);
}

double NNfunction_NN_3_3::synapse0x1be5650() {
   return (neuron0x1bd5ba0()*0.0160057);
}

double NNfunction_NN_3_3::synapse0x1be5690() {
   return (neuron0x1bd5ee0()*-0.00835594);
}

double NNfunction_NN_3_3::synapse0x1be56d0() {
   return (neuron0x1bd6220()*-0.0137665);
}

double NNfunction_NN_3_3::synapse0x1be5710() {
   return (neuron0x1bd6560()*0.019389);
}

double NNfunction_NN_3_3::synapse0x1be5750() {
   return (neuron0x1bd68a0()*0.135504);
}

double NNfunction_NN_3_3::synapse0x1be5790() {
   return (neuron0x1bd6be0()*-0.000281696);
}

double NNfunction_NN_3_3::synapse0x1be57d0() {
   return (neuron0x1bd6f20()*-0.0499105);
}

double NNfunction_NN_3_3::synapse0x1be5810() {
   return (neuron0x1bd7260()*-0.0712943);
}

double NNfunction_NN_3_3::synapse0x1be5850() {
   return (neuron0x1bd75a0()*0.0285353);
}

double NNfunction_NN_3_3::synapse0x1be52e0() {
   return (neuron0x1bd78e0()*0.0425254);
}

double NNfunction_NN_3_3::synapse0x1be5320() {
   return (neuron0x1bd7e40()*0.0507818);
}

double NNfunction_NN_3_3::synapse0x1be59a0() {
   return (neuron0x1bd8060()*0.0156894);
}

double NNfunction_NN_3_3::synapse0x1be59e0() {
   return (neuron0x1bd83a0()*0.0183393);
}

double NNfunction_NN_3_3::synapse0x1be5a20() {
   return (neuron0x1bd86e0()*0.00552063);
}

double NNfunction_NN_3_3::synapse0x1be5a60() {
   return (neuron0x1bd8a20()*-0.00164116);
}

double NNfunction_NN_3_3::synapse0x1be5aa0() {
   return (neuron0x1bd8d60()*-0.0359058);
}

double NNfunction_NN_3_3::synapse0x1be5ae0() {
   return (neuron0x1bd90a0()*1.99916);
}

double NNfunction_NN_3_3::synapse0x1be5e60() {
   return (neuron0x1bd44e0()*0.0951495);
}

double NNfunction_NN_3_3::synapse0x1be5ea0() {
   return (neuron0x1bd4820()*-0.0359911);
}

double NNfunction_NN_3_3::synapse0x1be5ee0() {
   return (neuron0x1bd4b60()*2.45227);
}

double NNfunction_NN_3_3::synapse0x1be5f20() {
   return (neuron0x1bd4ea0()*0.0174941);
}

double NNfunction_NN_3_3::synapse0x1be5f60() {
   return (neuron0x1bd51e0()*0.00580974);
}

double NNfunction_NN_3_3::synapse0x1be5fa0() {
   return (neuron0x1bd5520()*0.0357563);
}

double NNfunction_NN_3_3::synapse0x1be5fe0() {
   return (neuron0x1bd5860()*-0.00493825);
}

double NNfunction_NN_3_3::synapse0x1be6020() {
   return (neuron0x1bd5ba0()*-0.0241794);
}

double NNfunction_NN_3_3::synapse0x1be6060() {
   return (neuron0x1bd5ee0()*0.0046508);
}

double NNfunction_NN_3_3::synapse0x1be60a0() {
   return (neuron0x1bd6220()*-0.0329796);
}

double NNfunction_NN_3_3::synapse0x1be60e0() {
   return (neuron0x1bd6560()*-0.0516625);
}

double NNfunction_NN_3_3::synapse0x1be6120() {
   return (neuron0x1bd68a0()*-0.386552);
}

double NNfunction_NN_3_3::synapse0x1be6160() {
   return (neuron0x1bd6be0()*-0.0804834);
}

double NNfunction_NN_3_3::synapse0x1be61a0() {
   return (neuron0x1bd6f20()*-0.0119301);
}

double NNfunction_NN_3_3::synapse0x1be61e0() {
   return (neuron0x1bd7260()*0.0788502);
}

double NNfunction_NN_3_3::synapse0x1be6220() {
   return (neuron0x1bd75a0()*0.0200708);
}

double NNfunction_NN_3_3::synapse0x1be5cb0() {
   return (neuron0x1bd78e0()*0.0335464);
}

double NNfunction_NN_3_3::synapse0x1be5cf0() {
   return (neuron0x1bd7e40()*-0.0348058);
}

double NNfunction_NN_3_3::synapse0x1be6370() {
   return (neuron0x1bd8060()*-0.00788946);
}

double NNfunction_NN_3_3::synapse0x1be63b0() {
   return (neuron0x1bd83a0()*-0.0151201);
}

double NNfunction_NN_3_3::synapse0x1be63f0() {
   return (neuron0x1bd86e0()*0.00132996);
}

double NNfunction_NN_3_3::synapse0x1be6430() {
   return (neuron0x1bd8a20()*-0.0205504);
}

double NNfunction_NN_3_3::synapse0x1be6470() {
   return (neuron0x1bd8d60()*0.00235829);
}

double NNfunction_NN_3_3::synapse0x1be64b0() {
   return (neuron0x1bd90a0()*1.24325);
}

double NNfunction_NN_3_3::synapse0x1be6830() {
   return (neuron0x1bd44e0()*0.113068);
}

double NNfunction_NN_3_3::synapse0x1be6870() {
   return (neuron0x1bd4820()*-0.0389845);
}

double NNfunction_NN_3_3::synapse0x1be68b0() {
   return (neuron0x1bd4b60()*4.46541);
}

double NNfunction_NN_3_3::synapse0x1be68f0() {
   return (neuron0x1bd4ea0()*-0.00202211);
}

double NNfunction_NN_3_3::synapse0x1be6930() {
   return (neuron0x1bd51e0()*-0.0155356);
}

double NNfunction_NN_3_3::synapse0x1be6970() {
   return (neuron0x1bd5520()*-0.0285861);
}

double NNfunction_NN_3_3::synapse0x1be69b0() {
   return (neuron0x1bd5860()*0.0124587);
}

double NNfunction_NN_3_3::synapse0x1be69f0() {
   return (neuron0x1bd5ba0()*-0.0159366);
}

double NNfunction_NN_3_3::synapse0x1be6a30() {
   return (neuron0x1bd5ee0()*-0.00836981);
}

double NNfunction_NN_3_3::synapse0x1be6a70() {
   return (neuron0x1bd6220()*0.0121575);
}

double NNfunction_NN_3_3::synapse0x1be6ab0() {
   return (neuron0x1bd6560()*0.0736834);
}

double NNfunction_NN_3_3::synapse0x1be6af0() {
   return (neuron0x1bd68a0()*-0.24029);
}

double NNfunction_NN_3_3::synapse0x1be6b30() {
   return (neuron0x1bd6be0()*-0.124325);
}

double NNfunction_NN_3_3::synapse0x1be6b70() {
   return (neuron0x1bd6f20()*-0.0750733);
}

double NNfunction_NN_3_3::synapse0x1be6bb0() {
   return (neuron0x1bd7260()*0.446982);
}

double NNfunction_NN_3_3::synapse0x1be6bf0() {
   return (neuron0x1bd75a0()*-0.0138154);
}

double NNfunction_NN_3_3::synapse0x1be6680() {
   return (neuron0x1bd78e0()*-0.0510875);
}

double NNfunction_NN_3_3::synapse0x1be66c0() {
   return (neuron0x1bd7e40()*0.0247152);
}

double NNfunction_NN_3_3::synapse0x1be6d40() {
   return (neuron0x1bd8060()*-0.048805);
}

double NNfunction_NN_3_3::synapse0x1be6d80() {
   return (neuron0x1bd83a0()*0.0082169);
}

double NNfunction_NN_3_3::synapse0x1be6dc0() {
   return (neuron0x1bd86e0()*0.0517824);
}

double NNfunction_NN_3_3::synapse0x1be6e00() {
   return (neuron0x1bd8a20()*0.00628419);
}

double NNfunction_NN_3_3::synapse0x1be6e40() {
   return (neuron0x1bd8d60()*-0.0111579);
}

double NNfunction_NN_3_3::synapse0x1be6e80() {
   return (neuron0x1bd90a0()*0.0663103);
}

double NNfunction_NN_3_3::synapse0x1be7200() {
   return (neuron0x1bd44e0()*0.287047);
}

double NNfunction_NN_3_3::synapse0x1be7240() {
   return (neuron0x1bd4820()*0.0599998);
}

double NNfunction_NN_3_3::synapse0x1be7280() {
   return (neuron0x1bd4b60()*1.02104);
}

double NNfunction_NN_3_3::synapse0x1be72c0() {
   return (neuron0x1bd4ea0()*0.0434814);
}

double NNfunction_NN_3_3::synapse0x1be7300() {
   return (neuron0x1bd51e0()*-0.0473764);
}

double NNfunction_NN_3_3::synapse0x1be7340() {
   return (neuron0x1bd5520()*-0.03009);
}

double NNfunction_NN_3_3::synapse0x1be7380() {
   return (neuron0x1bd5860()*0.00658768);
}

double NNfunction_NN_3_3::synapse0x1be73c0() {
   return (neuron0x1bd5ba0()*-0.0282473);
}

double NNfunction_NN_3_3::synapse0x1be7400() {
   return (neuron0x1bd5ee0()*-0.0411791);
}

double NNfunction_NN_3_3::synapse0x1be7440() {
   return (neuron0x1bd6220()*-0.0515223);
}

double NNfunction_NN_3_3::synapse0x1be7480() {
   return (neuron0x1bd6560()*-0.00549278);
}

double NNfunction_NN_3_3::synapse0x1be74c0() {
   return (neuron0x1bd68a0()*-0.408158);
}

double NNfunction_NN_3_3::synapse0x1be7500() {
   return (neuron0x1bd6be0()*0.152228);
}

double NNfunction_NN_3_3::synapse0x1be7540() {
   return (neuron0x1bd6f20()*0.0259932);
}

double NNfunction_NN_3_3::synapse0x1be7580() {
   return (neuron0x1bd7260()*-0.084175);
}

double NNfunction_NN_3_3::synapse0x1be75c0() {
   return (neuron0x1bd75a0()*0.00212871);
}

double NNfunction_NN_3_3::synapse0x1be7050() {
   return (neuron0x1bd78e0()*0.0382489);
}

double NNfunction_NN_3_3::synapse0x1be7090() {
   return (neuron0x1bd7e40()*0.0746099);
}

double NNfunction_NN_3_3::synapse0x1be7710() {
   return (neuron0x1bd8060()*0.00547936);
}

double NNfunction_NN_3_3::synapse0x1be7750() {
   return (neuron0x1bd83a0()*0.0895359);
}

double NNfunction_NN_3_3::synapse0x1be7790() {
   return (neuron0x1bd86e0()*-0.0505846);
}

double NNfunction_NN_3_3::synapse0x1be77d0() {
   return (neuron0x1bd8a20()*-0.0127062);
}

double NNfunction_NN_3_3::synapse0x1be7810() {
   return (neuron0x1bd8d60()*-0.017998);
}

double NNfunction_NN_3_3::synapse0x1be7850() {
   return (neuron0x1bd90a0()*-0.539854);
}

double NNfunction_NN_3_3::synapse0x1be7bd0() {
   return (neuron0x1bd44e0()*0.00405642);
}

double NNfunction_NN_3_3::synapse0x1be7c10() {
   return (neuron0x1bd4820()*-14.8451);
}

double NNfunction_NN_3_3::synapse0x1be7c50() {
   return (neuron0x1bd4b60()*-0.0573192);
}

double NNfunction_NN_3_3::synapse0x1be7c90() {
   return (neuron0x1bd4ea0()*-0.00579858);
}

double NNfunction_NN_3_3::synapse0x1be7cd0() {
   return (neuron0x1bd51e0()*-0.0195982);
}

double NNfunction_NN_3_3::synapse0x1be7d10() {
   return (neuron0x1bd5520()*-0.00854252);
}

double NNfunction_NN_3_3::synapse0x1be7d50() {
   return (neuron0x1bd5860()*-0.00224488);
}

double NNfunction_NN_3_3::synapse0x1be7d90() {
   return (neuron0x1bd5ba0()*0.0240822);
}

double NNfunction_NN_3_3::synapse0x1be7dd0() {
   return (neuron0x1bd5ee0()*0.00253255);
}

double NNfunction_NN_3_3::synapse0x1bdff90() {
   return (neuron0x1bd6220()*0.00292448);
}

double NNfunction_NN_3_3::synapse0x1bdffd0() {
   return (neuron0x1bd6560()*0.0134699);
}

double NNfunction_NN_3_3::synapse0x1be0010() {
   return (neuron0x1bd68a0()*0.104002);
}

double NNfunction_NN_3_3::synapse0x1be0050() {
   return (neuron0x1bd6be0()*0.0212322);
}

double NNfunction_NN_3_3::synapse0x1be0090() {
   return (neuron0x1bd6f20()*0.0219063);
}

double NNfunction_NN_3_3::synapse0x1be00d0() {
   return (neuron0x1bd7260()*-0.199437);
}

double NNfunction_NN_3_3::synapse0x1be0110() {
   return (neuron0x1bd75a0()*-0.0220243);
}

double NNfunction_NN_3_3::synapse0x1be7a20() {
   return (neuron0x1bd78e0()*-0.012133);
}

double NNfunction_NN_3_3::synapse0x1be7a60() {
   return (neuron0x1bd7e40()*-0.00189637);
}

double NNfunction_NN_3_3::synapse0x1be0260() {
   return (neuron0x1bd8060()*0.00354202);
}

double NNfunction_NN_3_3::synapse0x1be02a0() {
   return (neuron0x1bd83a0()*0.0110619);
}

double NNfunction_NN_3_3::synapse0x1be02e0() {
   return (neuron0x1bd86e0()*0.00907697);
}

double NNfunction_NN_3_3::synapse0x1be0320() {
   return (neuron0x1bd8a20()*-0.00595041);
}

double NNfunction_NN_3_3::synapse0x1be0360() {
   return (neuron0x1bd8d60()*0.0141482);
}

double NNfunction_NN_3_3::synapse0x1be03a0() {
   return (neuron0x1bd90a0()*0.698262);
}

double NNfunction_NN_3_3::synapse0x1be0720() {
   return (neuron0x1bd44e0()*-0.103931);
}

double NNfunction_NN_3_3::synapse0x1be0760() {
   return (neuron0x1bd4820()*0.0611848);
}

double NNfunction_NN_3_3::synapse0x1be07a0() {
   return (neuron0x1bd4b60()*3.44224);
}

double NNfunction_NN_3_3::synapse0x1be07e0() {
   return (neuron0x1bd4ea0()*-0.0538239);
}

double NNfunction_NN_3_3::synapse0x1be0820() {
   return (neuron0x1bd51e0()*-0.0161149);
}

double NNfunction_NN_3_3::synapse0x1be0860() {
   return (neuron0x1bd5520()*-0.0276325);
}

double NNfunction_NN_3_3::synapse0x1be08a0() {
   return (neuron0x1bd5860()*0.0287963);
}

double NNfunction_NN_3_3::synapse0x1be08e0() {
   return (neuron0x1bd5ba0()*0.0266653);
}

double NNfunction_NN_3_3::synapse0x1be0920() {
   return (neuron0x1bd5ee0()*-0.0012964);
}

double NNfunction_NN_3_3::synapse0x1be0960() {
   return (neuron0x1bd6220()*0.0544274);
}

double NNfunction_NN_3_3::synapse0x1be09a0() {
   return (neuron0x1bd6560()*-0.0138768);
}

double NNfunction_NN_3_3::synapse0x1be09e0() {
   return (neuron0x1bd68a0()*0.637355);
}

double NNfunction_NN_3_3::synapse0x1be0a20() {
   return (neuron0x1bd6be0()*0.085709);
}

double NNfunction_NN_3_3::synapse0x1be0a60() {
   return (neuron0x1bd6f20()*9.25694e-05);
}

double NNfunction_NN_3_3::synapse0x1be0aa0() {
   return (neuron0x1bd7260()*-0.655727);
}

double NNfunction_NN_3_3::synapse0x1be0ae0() {
   return (neuron0x1bd75a0()*-0.0988904);
}

double NNfunction_NN_3_3::synapse0x1be0570() {
   return (neuron0x1bd78e0()*-0.0102019);
}

double NNfunction_NN_3_3::synapse0x1be05b0() {
   return (neuron0x1bd7e40()*0.0093722);
}

double NNfunction_NN_3_3::synapse0x1be0c30() {
   return (neuron0x1bd8060()*0.0658471);
}

double NNfunction_NN_3_3::synapse0x1be0c70() {
   return (neuron0x1bd83a0()*0.105432);
}

double NNfunction_NN_3_3::synapse0x1be0cb0() {
   return (neuron0x1bd86e0()*-0.0201876);
}

double NNfunction_NN_3_3::synapse0x1be0cf0() {
   return (neuron0x1bd8a20()*-0.00458128);
}

double NNfunction_NN_3_3::synapse0x1be0d30() {
   return (neuron0x1bd8d60()*-0.0107525);
}

double NNfunction_NN_3_3::synapse0x1be0d70() {
   return (neuron0x1bd90a0()*-0.0670156);
}

double NNfunction_NN_3_3::synapse0x1be0f40() {
   return (neuron0x1bd44e0()*0.0384378);
}

double NNfunction_NN_3_3::synapse0x1be9fd0() {
   return (neuron0x1bd4820()*-3.45689);
}

double NNfunction_NN_3_3::synapse0x1bea010() {
   return (neuron0x1bd4b60()*-1.98561);
}

double NNfunction_NN_3_3::synapse0x1bea050() {
   return (neuron0x1bd4ea0()*0.0107472);
}

double NNfunction_NN_3_3::synapse0x1bea090() {
   return (neuron0x1bd51e0()*-0.036622);
}

double NNfunction_NN_3_3::synapse0x1bea0d0() {
   return (neuron0x1bd5520()*-0.0574369);
}

double NNfunction_NN_3_3::synapse0x1bea110() {
   return (neuron0x1bd5860()*-0.0347237);
}

double NNfunction_NN_3_3::synapse0x1bea150() {
   return (neuron0x1bd5ba0()*0.0108618);
}

double NNfunction_NN_3_3::synapse0x1bea190() {
   return (neuron0x1bd5ee0()*-0.0288135);
}

double NNfunction_NN_3_3::synapse0x1bea1d0() {
   return (neuron0x1bd6220()*-0.0133959);
}

double NNfunction_NN_3_3::synapse0x1bea210() {
   return (neuron0x1bd6560()*-0.0225105);
}

double NNfunction_NN_3_3::synapse0x1bea250() {
   return (neuron0x1bd68a0()*-0.215708);
}

double NNfunction_NN_3_3::synapse0x1bea290() {
   return (neuron0x1bd6be0()*-0.0475502);
}

double NNfunction_NN_3_3::synapse0x1bea2d0() {
   return (neuron0x1bd6f20()*0.0402814);
}

double NNfunction_NN_3_3::synapse0x1bea310() {
   return (neuron0x1bd7260()*0.039823);
}

double NNfunction_NN_3_3::synapse0x1bea350() {
   return (neuron0x1bd75a0()*0.0445475);
}

double NNfunction_NN_3_3::synapse0x1be9e20() {
   return (neuron0x1bd78e0()*-0.06201);
}

double NNfunction_NN_3_3::synapse0x1be9e60() {
   return (neuron0x1bd7e40()*0.00658283);
}

double NNfunction_NN_3_3::synapse0x1bea4a0() {
   return (neuron0x1bd8060()*0.00128449);
}

double NNfunction_NN_3_3::synapse0x1bea4e0() {
   return (neuron0x1bd83a0()*-0.00330658);
}

double NNfunction_NN_3_3::synapse0x1bea520() {
   return (neuron0x1bd86e0()*0.00261832);
}

double NNfunction_NN_3_3::synapse0x1bea560() {
   return (neuron0x1bd8a20()*-0.0436359);
}

double NNfunction_NN_3_3::synapse0x1bea5a0() {
   return (neuron0x1bd8d60()*-0.0230729);
}

double NNfunction_NN_3_3::synapse0x1bea5e0() {
   return (neuron0x1bd90a0()*-0.161954);
}

double NNfunction_NN_3_3::synapse0x1bea960() {
   return (neuron0x1bd44e0()*-0.119659);
}

double NNfunction_NN_3_3::synapse0x1bea9a0() {
   return (neuron0x1bd4820()*0.00988831);
}

double NNfunction_NN_3_3::synapse0x1bea9e0() {
   return (neuron0x1bd4b60()*-2.4191);
}

double NNfunction_NN_3_3::synapse0x1beaa20() {
   return (neuron0x1bd4ea0()*0.0202283);
}

double NNfunction_NN_3_3::synapse0x1beaa60() {
   return (neuron0x1bd51e0()*-0.0336472);
}

double NNfunction_NN_3_3::synapse0x1beaaa0() {
   return (neuron0x1bd5520()*-0.0137189);
}

double NNfunction_NN_3_3::synapse0x1beaae0() {
   return (neuron0x1bd5860()*-0.00571416);
}

double NNfunction_NN_3_3::synapse0x1beab20() {
   return (neuron0x1bd5ba0()*-0.0245886);
}

double NNfunction_NN_3_3::synapse0x1beab60() {
   return (neuron0x1bd5ee0()*0.00136413);
}

double NNfunction_NN_3_3::synapse0x1beaba0() {
   return (neuron0x1bd6220()*0.00526782);
}

double NNfunction_NN_3_3::synapse0x1beabe0() {
   return (neuron0x1bd6560()*0.00643442);
}

double NNfunction_NN_3_3::synapse0x1beac20() {
   return (neuron0x1bd68a0()*0.0642187);
}

double NNfunction_NN_3_3::synapse0x1beac60() {
   return (neuron0x1bd6be0()*-0.0372852);
}

double NNfunction_NN_3_3::synapse0x1beaca0() {
   return (neuron0x1bd6f20()*-5.2083e-05);
}

double NNfunction_NN_3_3::synapse0x1beace0() {
   return (neuron0x1bd7260()*0.10166);
}

double NNfunction_NN_3_3::synapse0x1bead20() {
   return (neuron0x1bd75a0()*0.0094);
}

double NNfunction_NN_3_3::synapse0x1bea7b0() {
   return (neuron0x1bd78e0()*0.0129421);
}

double NNfunction_NN_3_3::synapse0x1bea7f0() {
   return (neuron0x1bd7e40()*0.0184202);
}

double NNfunction_NN_3_3::synapse0x1beae70() {
   return (neuron0x1bd8060()*0.0144002);
}

double NNfunction_NN_3_3::synapse0x1beaeb0() {
   return (neuron0x1bd83a0()*0.0328961);
}

double NNfunction_NN_3_3::synapse0x1beaef0() {
   return (neuron0x1bd86e0()*0.0106868);
}

double NNfunction_NN_3_3::synapse0x1beaf30() {
   return (neuron0x1bd8a20()*0.00202273);
}

double NNfunction_NN_3_3::synapse0x1beaf70() {
   return (neuron0x1bd8d60()*-0.0016696);
}

double NNfunction_NN_3_3::synapse0x1beafb0() {
   return (neuron0x1bd90a0()*1.61694);
}

double NNfunction_NN_3_3::synapse0x1beb330() {
   return (neuron0x1bd44e0()*0.0123945);
}

double NNfunction_NN_3_3::synapse0x1beb370() {
   return (neuron0x1bd4820()*9.22221);
}

double NNfunction_NN_3_3::synapse0x1beb3b0() {
   return (neuron0x1bd4b60()*0.759977);
}

double NNfunction_NN_3_3::synapse0x1beb3f0() {
   return (neuron0x1bd4ea0()*-0.000594023);
}

double NNfunction_NN_3_3::synapse0x1beb430() {
   return (neuron0x1bd51e0()*0.00496344);
}

double NNfunction_NN_3_3::synapse0x1beb470() {
   return (neuron0x1bd5520()*-0.00188238);
}

double NNfunction_NN_3_3::synapse0x1beb4b0() {
   return (neuron0x1bd5860()*-0.0115985);
}

double NNfunction_NN_3_3::synapse0x1beb4f0() {
   return (neuron0x1bd5ba0()*-0.00407625);
}

double NNfunction_NN_3_3::synapse0x1beb530() {
   return (neuron0x1bd5ee0()*-0.00705281);
}

double NNfunction_NN_3_3::synapse0x1beb570() {
   return (neuron0x1bd6220()*-0.00313963);
}

double NNfunction_NN_3_3::synapse0x1beb5b0() {
   return (neuron0x1bd6560()*-0.00836312);
}

double NNfunction_NN_3_3::synapse0x1beb5f0() {
   return (neuron0x1bd68a0()*-0.0275561);
}

double NNfunction_NN_3_3::synapse0x1beb630() {
   return (neuron0x1bd6be0()*-0.00309455);
}

double NNfunction_NN_3_3::synapse0x1beb670() {
   return (neuron0x1bd6f20()*0.0149741);
}

double NNfunction_NN_3_3::synapse0x1beb6b0() {
   return (neuron0x1bd7260()*-0.0563167);
}

double NNfunction_NN_3_3::synapse0x1beb6f0() {
   return (neuron0x1bd75a0()*-0.000675147);
}

double NNfunction_NN_3_3::synapse0x1beb180() {
   return (neuron0x1bd78e0()*0.000194518);
}

double NNfunction_NN_3_3::synapse0x1beb1c0() {
   return (neuron0x1bd7e40()*-0.00102859);
}

double NNfunction_NN_3_3::synapse0x1beb840() {
   return (neuron0x1bd8060()*0.0038509);
}

double NNfunction_NN_3_3::synapse0x1beb880() {
   return (neuron0x1bd83a0()*-0.00416701);
}

double NNfunction_NN_3_3::synapse0x1beb8c0() {
   return (neuron0x1bd86e0()*0.00499813);
}

double NNfunction_NN_3_3::synapse0x1beb900() {
   return (neuron0x1bd8a20()*-0.00559243);
}

double NNfunction_NN_3_3::synapse0x1beb940() {
   return (neuron0x1bd8d60()*-0.000283066);
}

double NNfunction_NN_3_3::synapse0x1beb980() {
   return (neuron0x1bd90a0()*-0.0184122);
}

double NNfunction_NN_3_3::synapse0x1bebd00() {
   return (neuron0x1bd44e0()*-0.419345);
}

double NNfunction_NN_3_3::synapse0x1bebd40() {
   return (neuron0x1bd4820()*0.000895425);
}

double NNfunction_NN_3_3::synapse0x1bebd80() {
   return (neuron0x1bd4b60()*-0.37116);
}

double NNfunction_NN_3_3::synapse0x1bebdc0() {
   return (neuron0x1bd4ea0()*-0.00893091);
}

double NNfunction_NN_3_3::synapse0x1bebe00() {
   return (neuron0x1bd51e0()*-0.06069);
}

double NNfunction_NN_3_3::synapse0x1bebe40() {
   return (neuron0x1bd5520()*-0.00863134);
}

double NNfunction_NN_3_3::synapse0x1bebe80() {
   return (neuron0x1bd5860()*0.0155354);
}

double NNfunction_NN_3_3::synapse0x1bebec0() {
   return (neuron0x1bd5ba0()*0.0300899);
}

double NNfunction_NN_3_3::synapse0x1bebf00() {
   return (neuron0x1bd5ee0()*0.018872);
}

double NNfunction_NN_3_3::synapse0x1bebf40() {
   return (neuron0x1bd6220()*-0.0220513);
}

double NNfunction_NN_3_3::synapse0x1bebf80() {
   return (neuron0x1bd6560()*0.0247116);
}

double NNfunction_NN_3_3::synapse0x1bebfc0() {
   return (neuron0x1bd68a0()*-0.0576748);
}

double NNfunction_NN_3_3::synapse0x1bec000() {
   return (neuron0x1bd6be0()*-0.0281361);
}

double NNfunction_NN_3_3::synapse0x1bec040() {
   return (neuron0x1bd6f20()*-0.0123956);
}

double NNfunction_NN_3_3::synapse0x1bec080() {
   return (neuron0x1bd7260()*0.0691753);
}

double NNfunction_NN_3_3::synapse0x1bec0c0() {
   return (neuron0x1bd75a0()*0.00868267);
}

double NNfunction_NN_3_3::synapse0x1bebb50() {
   return (neuron0x1bd78e0()*-0.0369048);
}

double NNfunction_NN_3_3::synapse0x1bebb90() {
   return (neuron0x1bd7e40()*0.0301269);
}

double NNfunction_NN_3_3::synapse0x1bec210() {
   return (neuron0x1bd8060()*0.0328666);
}

double NNfunction_NN_3_3::synapse0x1bec250() {
   return (neuron0x1bd83a0()*0.0509798);
}

double NNfunction_NN_3_3::synapse0x1bec290() {
   return (neuron0x1bd86e0()*0.0105363);
}

double NNfunction_NN_3_3::synapse0x1bec2d0() {
   return (neuron0x1bd8a20()*0.0179493);
}

double NNfunction_NN_3_3::synapse0x1bec310() {
   return (neuron0x1bd8d60()*-0.0527702);
}

double NNfunction_NN_3_3::synapse0x1bec350() {
   return (neuron0x1bd90a0()*1.77129);
}

double NNfunction_NN_3_3::synapse0x1bec6d0() {
   return (neuron0x1bd44e0()*0.0558766);
}

double NNfunction_NN_3_3::synapse0x1bec710() {
   return (neuron0x1bd4820()*0.181199);
}

double NNfunction_NN_3_3::synapse0x1bec750() {
   return (neuron0x1bd4b60()*-0.239894);
}

double NNfunction_NN_3_3::synapse0x1bec790() {
   return (neuron0x1bd4ea0()*-0.0210693);
}

double NNfunction_NN_3_3::synapse0x1bec7d0() {
   return (neuron0x1bd51e0()*-0.0207578);
}

double NNfunction_NN_3_3::synapse0x1bec810() {
   return (neuron0x1bd5520()*0.0229822);
}

double NNfunction_NN_3_3::synapse0x1bec850() {
   return (neuron0x1bd5860()*-0.0210584);
}

double NNfunction_NN_3_3::synapse0x1bec890() {
   return (neuron0x1bd5ba0()*-0.000957368);
}

double NNfunction_NN_3_3::synapse0x1bec8d0() {
   return (neuron0x1bd5ee0()*0.000581293);
}

double NNfunction_NN_3_3::synapse0x1bec910() {
   return (neuron0x1bd6220()*0.0272608);
}

double NNfunction_NN_3_3::synapse0x1bec950() {
   return (neuron0x1bd6560()*-0.0265466);
}

double NNfunction_NN_3_3::synapse0x1bec990() {
   return (neuron0x1bd68a0()*0.0391504);
}

double NNfunction_NN_3_3::synapse0x1bec9d0() {
   return (neuron0x1bd6be0()*0.0292211);
}

double NNfunction_NN_3_3::synapse0x1beca10() {
   return (neuron0x1bd6f20()*0.00146894);
}

double NNfunction_NN_3_3::synapse0x1beca50() {
   return (neuron0x1bd7260()*-0.556996);
}

double NNfunction_NN_3_3::synapse0x1beca90() {
   return (neuron0x1bd75a0()*-0.0112458);
}

double NNfunction_NN_3_3::synapse0x1bec520() {
   return (neuron0x1bd78e0()*-0.0439217);
}

double NNfunction_NN_3_3::synapse0x1bec560() {
   return (neuron0x1bd7e40()*-0.0224272);
}

double NNfunction_NN_3_3::synapse0x1becbe0() {
   return (neuron0x1bd8060()*-0.0170522);
}

double NNfunction_NN_3_3::synapse0x1becc20() {
   return (neuron0x1bd83a0()*0.0319445);
}

double NNfunction_NN_3_3::synapse0x1becc60() {
   return (neuron0x1bd86e0()*-0.0219874);
}

double NNfunction_NN_3_3::synapse0x1becca0() {
   return (neuron0x1bd8a20()*0.00536483);
}

double NNfunction_NN_3_3::synapse0x1becce0() {
   return (neuron0x1bd8d60()*0.0113261);
}

double NNfunction_NN_3_3::synapse0x1becd20() {
   return (neuron0x1bd90a0()*3.21656);
}

double NNfunction_NN_3_3::synapse0x1bed0a0() {
   return (neuron0x1bd44e0()*-0.025223);
}

double NNfunction_NN_3_3::synapse0x1bed0e0() {
   return (neuron0x1bd4820()*-0.094562);
}

double NNfunction_NN_3_3::synapse0x1bed120() {
   return (neuron0x1bd4b60()*0.287284);
}

double NNfunction_NN_3_3::synapse0x1bed160() {
   return (neuron0x1bd4ea0()*0.0117061);
}

double NNfunction_NN_3_3::synapse0x1bed1a0() {
   return (neuron0x1bd51e0()*0.00297856);
}

double NNfunction_NN_3_3::synapse0x1bed1e0() {
   return (neuron0x1bd5520()*-0.00416572);
}

double NNfunction_NN_3_3::synapse0x1bed220() {
   return (neuron0x1bd5860()*0.0468121);
}

double NNfunction_NN_3_3::synapse0x1bed260() {
   return (neuron0x1bd5ba0()*0.0314227);
}

double NNfunction_NN_3_3::synapse0x1bed2a0() {
   return (neuron0x1bd5ee0()*0.0375474);
}

double NNfunction_NN_3_3::synapse0x1bed2e0() {
   return (neuron0x1bd6220()*-0.0141296);
}

double NNfunction_NN_3_3::synapse0x1bed320() {
   return (neuron0x1bd6560()*-0.014222);
}

double NNfunction_NN_3_3::synapse0x1bed360() {
   return (neuron0x1bd68a0()*0.0431599);
}

double NNfunction_NN_3_3::synapse0x1bed3a0() {
   return (neuron0x1bd6be0()*0.00926378);
}

double NNfunction_NN_3_3::synapse0x1bed3e0() {
   return (neuron0x1bd6f20()*0.0263205);
}

double NNfunction_NN_3_3::synapse0x1bed420() {
   return (neuron0x1bd7260()*0.334197);
}

double NNfunction_NN_3_3::synapse0x1bed460() {
   return (neuron0x1bd75a0()*0.0101998);
}

double NNfunction_NN_3_3::synapse0x1becef0() {
   return (neuron0x1bd78e0()*0.00690624);
}

double NNfunction_NN_3_3::synapse0x1becf30() {
   return (neuron0x1bd7e40()*-0.0172998);
}

double NNfunction_NN_3_3::synapse0x1bed5b0() {
   return (neuron0x1bd8060()*-0.000566722);
}

double NNfunction_NN_3_3::synapse0x1bed5f0() {
   return (neuron0x1bd83a0()*-0.0421749);
}

double NNfunction_NN_3_3::synapse0x1bed630() {
   return (neuron0x1bd86e0()*-0.000386851);
}

double NNfunction_NN_3_3::synapse0x1bed670() {
   return (neuron0x1bd8a20()*-0.024192);
}

double NNfunction_NN_3_3::synapse0x1bed6b0() {
   return (neuron0x1bd8d60()*0.014052);
}

double NNfunction_NN_3_3::synapse0x1bed6f0() {
   return (neuron0x1bd90a0()*-1.82084);
}

double NNfunction_NN_3_3::synapse0x1beda70() {
   return (neuron0x1bd44e0()*0.0138497);
}

double NNfunction_NN_3_3::synapse0x1bedab0() {
   return (neuron0x1bd4820()*-0.0368976);
}

double NNfunction_NN_3_3::synapse0x1bedaf0() {
   return (neuron0x1bd4b60()*-1.41311);
}

double NNfunction_NN_3_3::synapse0x1bedb30() {
   return (neuron0x1bd4ea0()*-0.0928005);
}

double NNfunction_NN_3_3::synapse0x1bedb70() {
   return (neuron0x1bd51e0()*-0.0811651);
}

double NNfunction_NN_3_3::synapse0x1bedbb0() {
   return (neuron0x1bd5520()*-0.0636515);
}

double NNfunction_NN_3_3::synapse0x1bedbf0() {
   return (neuron0x1bd5860()*0.0542975);
}

double NNfunction_NN_3_3::synapse0x1bedc30() {
   return (neuron0x1bd5ba0()*0.14002);
}

double NNfunction_NN_3_3::synapse0x1bedc70() {
   return (neuron0x1bd5ee0()*0.100237);
}

double NNfunction_NN_3_3::synapse0x1bedcb0() {
   return (neuron0x1bd6220()*0.00695988);
}

double NNfunction_NN_3_3::synapse0x1bedcf0() {
   return (neuron0x1bd6560()*-0.0824249);
}

double NNfunction_NN_3_3::synapse0x1bedd30() {
   return (neuron0x1bd68a0()*-0.810817);
}

double NNfunction_NN_3_3::synapse0x1bedd70() {
   return (neuron0x1bd6be0()*0.161471);
}

double NNfunction_NN_3_3::synapse0x1beddb0() {
   return (neuron0x1bd6f20()*-0.00308803);
}

double NNfunction_NN_3_3::synapse0x1beddf0() {
   return (neuron0x1bd7260()*-0.0432424);
}

double NNfunction_NN_3_3::synapse0x1bede30() {
   return (neuron0x1bd75a0()*-0.161532);
}

double NNfunction_NN_3_3::synapse0x1bed8c0() {
   return (neuron0x1bd78e0()*0.00596989);
}

double NNfunction_NN_3_3::synapse0x1bed900() {
   return (neuron0x1bd7e40()*0.141017);
}

double NNfunction_NN_3_3::synapse0x1bedf80() {
   return (neuron0x1bd8060()*0.176775);
}

double NNfunction_NN_3_3::synapse0x1bedfc0() {
   return (neuron0x1bd83a0()*0.159988);
}

double NNfunction_NN_3_3::synapse0x1bee000() {
   return (neuron0x1bd86e0()*-0.0995782);
}

double NNfunction_NN_3_3::synapse0x1bee040() {
   return (neuron0x1bd8a20()*0.0240129);
}

double NNfunction_NN_3_3::synapse0x1bee080() {
   return (neuron0x1bd8d60()*-0.0476808);
}

double NNfunction_NN_3_3::synapse0x1bee0c0() {
   return (neuron0x1bd90a0()*-0.0909982);
}

double NNfunction_NN_3_3::synapse0x1bee440() {
   return (neuron0x1bd44e0()*-0.123541);
}

double NNfunction_NN_3_3::synapse0x1bee480() {
   return (neuron0x1bd4820()*0.0548996);
}

double NNfunction_NN_3_3::synapse0x1bee4c0() {
   return (neuron0x1bd4b60()*-1.63997);
}

double NNfunction_NN_3_3::synapse0x1bee500() {
   return (neuron0x1bd4ea0()*0.0229184);
}

double NNfunction_NN_3_3::synapse0x1bee540() {
   return (neuron0x1bd51e0()*-0.0234557);
}

double NNfunction_NN_3_3::synapse0x1bee580() {
   return (neuron0x1bd5520()*-0.0719847);
}

double NNfunction_NN_3_3::synapse0x1bee5c0() {
   return (neuron0x1bd5860()*-0.00805186);
}

double NNfunction_NN_3_3::synapse0x1bee600() {
   return (neuron0x1bd5ba0()*-0.0165286);
}

double NNfunction_NN_3_3::synapse0x1bee640() {
   return (neuron0x1bd5ee0()*-0.0321794);
}

double NNfunction_NN_3_3::synapse0x1bee680() {
   return (neuron0x1bd6220()*0.0146257);
}

double NNfunction_NN_3_3::synapse0x1bee6c0() {
   return (neuron0x1bd6560()*-0.00647985);
}

double NNfunction_NN_3_3::synapse0x1bee700() {
   return (neuron0x1bd68a0()*-0.0607762);
}

double NNfunction_NN_3_3::synapse0x1bee740() {
   return (neuron0x1bd6be0()*0.00593627);
}

double NNfunction_NN_3_3::synapse0x1bee780() {
   return (neuron0x1bd6f20()*0.00277309);
}

double NNfunction_NN_3_3::synapse0x1bee7c0() {
   return (neuron0x1bd7260()*-0.0400237);
}

double NNfunction_NN_3_3::synapse0x1bee800() {
   return (neuron0x1bd75a0()*-0.0391871);
}

double NNfunction_NN_3_3::synapse0x1bee290() {
   return (neuron0x1bd78e0()*0.0118593);
}

double NNfunction_NN_3_3::synapse0x1bee2d0() {
   return (neuron0x1bd7e40()*-0.154188);
}

double NNfunction_NN_3_3::synapse0x1bee950() {
   return (neuron0x1bd8060()*-0.0174002);
}

double NNfunction_NN_3_3::synapse0x1bee990() {
   return (neuron0x1bd83a0()*-0.0333026);
}

double NNfunction_NN_3_3::synapse0x1bee9d0() {
   return (neuron0x1bd86e0()*0.00764186);
}

double NNfunction_NN_3_3::synapse0x1beea10() {
   return (neuron0x1bd8a20()*-0.013103);
}

double NNfunction_NN_3_3::synapse0x1beea50() {
   return (neuron0x1bd8d60()*-0.0100378);
}

double NNfunction_NN_3_3::synapse0x1beea90() {
   return (neuron0x1bd90a0()*1.49132);
}

double NNfunction_NN_3_3::synapse0x1beee10() {
   return (neuron0x1bd44e0()*-0.0422805);
}

double NNfunction_NN_3_3::synapse0x1be33e0() {
   return (neuron0x1bd4820()*0.0276436);
}

double NNfunction_NN_3_3::synapse0x1be3420() {
   return (neuron0x1bd4b60()*-0.90221);
}

double NNfunction_NN_3_3::synapse0x1be3460() {
   return (neuron0x1bd4ea0()*0.0220479);
}

double NNfunction_NN_3_3::synapse0x1be36b0() {
   return (neuron0x1bd51e0()*0.0440419);
}

double NNfunction_NN_3_3::synapse0x1be36f0() {
   return (neuron0x1bd5520()*0.0814304);
}

double NNfunction_NN_3_3::synapse0x1be3730() {
   return (neuron0x1bd5860()*-0.0173408);
}

double NNfunction_NN_3_3::synapse0x1be3980() {
   return (neuron0x1bd5ba0()*0.0189417);
}

double NNfunction_NN_3_3::synapse0x1be39c0() {
   return (neuron0x1bd5ee0()*-0.022692);
}

double NNfunction_NN_3_3::synapse0x1be3c10() {
   return (neuron0x1bd6220()*0.026428);
}

double NNfunction_NN_3_3::synapse0x1be3c50() {
   return (neuron0x1bd6560()*-0.03125);
}

double NNfunction_NN_3_3::synapse0x1be3c90() {
   return (neuron0x1bd68a0()*0.106694);
}

double NNfunction_NN_3_3::synapse0x1be3ee0() {
   return (neuron0x1bd6be0()*0.00102861);
}

double NNfunction_NN_3_3::synapse0x1be3f20() {
   return (neuron0x1bd6f20()*-0.0120763);
}

double NNfunction_NN_3_3::synapse0x1be4170() {
   return (neuron0x1bd7260()*-0.0640107);
}

double NNfunction_NN_3_3::synapse0x1be41b0() {
   return (neuron0x1bd75a0()*0.0744726);
}

double NNfunction_NN_3_3::synapse0x1beec60() {
   return (neuron0x1bd78e0()*0.0123776);
}

double NNfunction_NN_3_3::synapse0x1beeca0() {
   return (neuron0x1bd7e40()*0.194073);
}

double NNfunction_NN_3_3::synapse0x1be4300() {
   return (neuron0x1bd8060()*-0.0146177);
}

double NNfunction_NN_3_3::synapse0x1be4810() {
   return (neuron0x1bd83a0()*0.0487066);
}

double NNfunction_NN_3_3::synapse0x1be4850() {
   return (neuron0x1bd86e0()*-0.0129796);
}

double NNfunction_NN_3_3::synapse0x1be4890() {
   return (neuron0x1bd8a20()*-0.0413447);
}

double NNfunction_NN_3_3::synapse0x1be4ae0() {
   return (neuron0x1bd8d60()*-0.0267059);
}

double NNfunction_NN_3_3::synapse0x1be4b20() {
   return (neuron0x1bd90a0()*2.26897);
}

double NNfunction_NN_3_3::synapse0x1be43d0() {
   return (neuron0x1bd44e0()*-0.0387972);
}

double NNfunction_NN_3_3::synapse0x1be4410() {
   return (neuron0x1bd4820()*-0.00054337);
}

double NNfunction_NN_3_3::synapse0x1be4450() {
   return (neuron0x1bd4b60()*1.82836);
}

double NNfunction_NN_3_3::synapse0x1be4490() {
   return (neuron0x1bd4ea0()*-0.0395511);
}

double NNfunction_NN_3_3::synapse0x1be4e10() {
   return (neuron0x1bd51e0()*-0.0566302);
}

double NNfunction_NN_3_3::synapse0x1bf1160() {
   return (neuron0x1bd5520()*0.0805254);
}

double NNfunction_NN_3_3::synapse0x1bf11a0() {
   return (neuron0x1bd5860()*0.00412426);
}

double NNfunction_NN_3_3::synapse0x1bf11e0() {
   return (neuron0x1bd5ba0()*-0.0177434);
}

double NNfunction_NN_3_3::synapse0x1bf1220() {
   return (neuron0x1bd5ee0()*0.0372774);
}

double NNfunction_NN_3_3::synapse0x1bf1260() {
   return (neuron0x1bd6220()*0.024132);
}

double NNfunction_NN_3_3::synapse0x1bf12a0() {
   return (neuron0x1bd6560()*0.00158364);
}

double NNfunction_NN_3_3::synapse0x1bf12e0() {
   return (neuron0x1bd68a0()*0.899114);
}

double NNfunction_NN_3_3::synapse0x1bf1320() {
   return (neuron0x1bd6be0()*-0.0150924);
}

double NNfunction_NN_3_3::synapse0x1bf1360() {
   return (neuron0x1bd6f20()*-0.0464662);
}

double NNfunction_NN_3_3::synapse0x1bf13a0() {
   return (neuron0x1bd7260()*0.816322);
}

double NNfunction_NN_3_3::synapse0x1bf13e0() {
   return (neuron0x1bd75a0()*0.0214851);
}

double NNfunction_NN_3_3::synapse0x1be4cf0() {
   return (neuron0x1bd78e0()*-0.0317498);
}

double NNfunction_NN_3_3::synapse0x1be4d30() {
   return (neuron0x1bd7e40()*-0.0501284);
}

double NNfunction_NN_3_3::synapse0x1bf1530() {
   return (neuron0x1bd8060()*-0.0934009);
}

double NNfunction_NN_3_3::synapse0x1bf1570() {
   return (neuron0x1bd83a0()*-0.0755868);
}

double NNfunction_NN_3_3::synapse0x1bf15b0() {
   return (neuron0x1bd86e0()*-0.010961);
}

double NNfunction_NN_3_3::synapse0x1bf15f0() {
   return (neuron0x1bd8a20()*-0.0188088);
}

double NNfunction_NN_3_3::synapse0x1bf1630() {
   return (neuron0x1bd8d60()*-0.0347202);
}

double NNfunction_NN_3_3::synapse0x1bf1670() {
   return (neuron0x1bd90a0()*-0.51768);
}

double NNfunction_NN_3_3::synapse0x1bf19f0() {
   return (neuron0x1bd44e0()*0.0318264);
}

double NNfunction_NN_3_3::synapse0x1bf1a30() {
   return (neuron0x1bd4820()*0.049798);
}

double NNfunction_NN_3_3::synapse0x1bf1a70() {
   return (neuron0x1bd4b60()*0.597528);
}

double NNfunction_NN_3_3::synapse0x1bf1ab0() {
   return (neuron0x1bd4ea0()*0.0521762);
}

double NNfunction_NN_3_3::synapse0x1bf1af0() {
   return (neuron0x1bd51e0()*-0.187941);
}

double NNfunction_NN_3_3::synapse0x1bf1b30() {
   return (neuron0x1bd5520()*0.0535964);
}

double NNfunction_NN_3_3::synapse0x1bf1b70() {
   return (neuron0x1bd5860()*0.0709479);
}

double NNfunction_NN_3_3::synapse0x1bf1bb0() {
   return (neuron0x1bd5ba0()*-0.00638059);
}

double NNfunction_NN_3_3::synapse0x1bf1bf0() {
   return (neuron0x1bd5ee0()*-0.000560213);
}

double NNfunction_NN_3_3::synapse0x1bf1c30() {
   return (neuron0x1bd6220()*0.0921537);
}

double NNfunction_NN_3_3::synapse0x1bf1c70() {
   return (neuron0x1bd6560()*-0.139967);
}

double NNfunction_NN_3_3::synapse0x1bf1cb0() {
   return (neuron0x1bd68a0()*0.0497251);
}

double NNfunction_NN_3_3::synapse0x1bf1cf0() {
   return (neuron0x1bd6be0()*-0.0595533);
}

double NNfunction_NN_3_3::synapse0x1bf1d30() {
   return (neuron0x1bd6f20()*0.226836);
}

double NNfunction_NN_3_3::synapse0x1bf1d70() {
   return (neuron0x1bd7260()*0.116713);
}

double NNfunction_NN_3_3::synapse0x1bf1db0() {
   return (neuron0x1bd75a0()*-0.0538172);
}

double NNfunction_NN_3_3::synapse0x1bf1840() {
   return (neuron0x1bd78e0()*-0.0900855);
}

double NNfunction_NN_3_3::synapse0x1bf1880() {
   return (neuron0x1bd7e40()*0.180427);
}

double NNfunction_NN_3_3::synapse0x1bf1f00() {
   return (neuron0x1bd8060()*0.10139);
}

double NNfunction_NN_3_3::synapse0x1bf1f40() {
   return (neuron0x1bd83a0()*-0.0567258);
}

double NNfunction_NN_3_3::synapse0x1bf1f80() {
   return (neuron0x1bd86e0()*-0.0478287);
}

double NNfunction_NN_3_3::synapse0x1bf1fc0() {
   return (neuron0x1bd8a20()*0.0173365);
}

double NNfunction_NN_3_3::synapse0x1bf2000() {
   return (neuron0x1bd8d60()*0.0473365);
}

double NNfunction_NN_3_3::synapse0x1bf2040() {
   return (neuron0x1bd90a0()*0.922028);
}

double NNfunction_NN_3_3::synapse0x1bf23c0() {
   return (neuron0x1bd44e0()*-0.060504);
}

double NNfunction_NN_3_3::synapse0x1bf2400() {
   return (neuron0x1bd4820()*0.0164408);
}

double NNfunction_NN_3_3::synapse0x1bf2440() {
   return (neuron0x1bd4b60()*1.25404);
}

double NNfunction_NN_3_3::synapse0x1bf2480() {
   return (neuron0x1bd4ea0()*-0.012052);
}

double NNfunction_NN_3_3::synapse0x1bf24c0() {
   return (neuron0x1bd51e0()*-0.000508618);
}

double NNfunction_NN_3_3::synapse0x1bf2500() {
   return (neuron0x1bd5520()*0.00475012);
}

double NNfunction_NN_3_3::synapse0x1bf2540() {
   return (neuron0x1bd5860()*0.0183358);
}

double NNfunction_NN_3_3::synapse0x1bf2580() {
   return (neuron0x1bd5ba0()*0.014018);
}

double NNfunction_NN_3_3::synapse0x1bf25c0() {
   return (neuron0x1bd5ee0()*0.0330456);
}

double NNfunction_NN_3_3::synapse0x1bf2600() {
   return (neuron0x1bd6220()*0.0225577);
}

double NNfunction_NN_3_3::synapse0x1bf2640() {
   return (neuron0x1bd6560()*0.00500578);
}

double NNfunction_NN_3_3::synapse0x1bf2680() {
   return (neuron0x1bd68a0()*-2.39769);
}

double NNfunction_NN_3_3::synapse0x1bf26c0() {
   return (neuron0x1bd6be0()*0.263015);
}

double NNfunction_NN_3_3::synapse0x1bf2700() {
   return (neuron0x1bd6f20()*-0.0143081);
}

double NNfunction_NN_3_3::synapse0x1bf2740() {
   return (neuron0x1bd7260()*-0.0791699);
}

double NNfunction_NN_3_3::synapse0x1bf2780() {
   return (neuron0x1bd75a0()*-0.00168531);
}

double NNfunction_NN_3_3::synapse0x1bf2210() {
   return (neuron0x1bd78e0()*0.000115781);
}

double NNfunction_NN_3_3::synapse0x1bf2250() {
   return (neuron0x1bd7e40()*-0.0176098);
}

double NNfunction_NN_3_3::synapse0x1bf28d0() {
   return (neuron0x1bd8060()*0.0280871);
}

double NNfunction_NN_3_3::synapse0x1bf2910() {
   return (neuron0x1bd83a0()*0.0188858);
}

double NNfunction_NN_3_3::synapse0x1bf2950() {
   return (neuron0x1bd86e0()*-0.0232592);
}

double NNfunction_NN_3_3::synapse0x1bf2990() {
   return (neuron0x1bd8a20()*0.0229239);
}

double NNfunction_NN_3_3::synapse0x1bf29d0() {
   return (neuron0x1bd8d60()*0.00112711);
}

double NNfunction_NN_3_3::synapse0x1bf2a10() {
   return (neuron0x1bd90a0()*0.00717925);
}

double NNfunction_NN_3_3::synapse0x1bf2d90() {
   return (neuron0x1bd44e0()*0.0578023);
}

double NNfunction_NN_3_3::synapse0x1bf2dd0() {
   return (neuron0x1bd4820()*-0.00658548);
}

double NNfunction_NN_3_3::synapse0x1bf2e10() {
   return (neuron0x1bd4b60()*0.334927);
}

double NNfunction_NN_3_3::synapse0x1bf2e50() {
   return (neuron0x1bd4ea0()*0.0264489);
}

double NNfunction_NN_3_3::synapse0x1bf2e90() {
   return (neuron0x1bd51e0()*-0.205955);
}

double NNfunction_NN_3_3::synapse0x1bf2ed0() {
   return (neuron0x1bd5520()*-0.52346);
}

double NNfunction_NN_3_3::synapse0x1bf2f10() {
   return (neuron0x1bd5860()*0.106986);
}

double NNfunction_NN_3_3::synapse0x1bf2f50() {
   return (neuron0x1bd5ba0()*-0.525409);
}

double NNfunction_NN_3_3::synapse0x1bf2f90() {
   return (neuron0x1bd5ee0()*0.104264);
}

double NNfunction_NN_3_3::synapse0x1bf2fd0() {
   return (neuron0x1bd6220()*-0.175386);
}

double NNfunction_NN_3_3::synapse0x1bf3010() {
   return (neuron0x1bd6560()*0.0794394);
}

double NNfunction_NN_3_3::synapse0x1bf3050() {
   return (neuron0x1bd68a0()*-0.383541);
}

double NNfunction_NN_3_3::synapse0x1bf3090() {
   return (neuron0x1bd6be0()*-0.315328);
}

double NNfunction_NN_3_3::synapse0x1bf30d0() {
   return (neuron0x1bd6f20()*0.773091);
}

double NNfunction_NN_3_3::synapse0x1bf3110() {
   return (neuron0x1bd7260()*0.0391983);
}

double NNfunction_NN_3_3::synapse0x1bf3150() {
   return (neuron0x1bd75a0()*-0.297609);
}

double NNfunction_NN_3_3::synapse0x1bf2be0() {
   return (neuron0x1bd78e0()*-0.480305);
}

double NNfunction_NN_3_3::synapse0x1bf2c20() {
   return (neuron0x1bd7e40()*-0.52772);
}

double NNfunction_NN_3_3::synapse0x1bf32a0() {
   return (neuron0x1bd8060()*-0.032739);
}

double NNfunction_NN_3_3::synapse0x1bf32e0() {
   return (neuron0x1bd83a0()*-0.226874);
}

double NNfunction_NN_3_3::synapse0x1bf3320() {
   return (neuron0x1bd86e0()*0.136284);
}

double NNfunction_NN_3_3::synapse0x1bf3360() {
   return (neuron0x1bd8a20()*0.140359);
}

double NNfunction_NN_3_3::synapse0x1bf33a0() {
   return (neuron0x1bd8d60()*-0.128442);
}

double NNfunction_NN_3_3::synapse0x1bf33e0() {
   return (neuron0x1bd90a0()*0.161831);
}

double NNfunction_NN_3_3::synapse0x1bf3760() {
   return (neuron0x1bd44e0()*-0.0570059);
}

double NNfunction_NN_3_3::synapse0x1bf37a0() {
   return (neuron0x1bd4820()*0.00333645);
}

double NNfunction_NN_3_3::synapse0x1bf37e0() {
   return (neuron0x1bd4b60()*6.09164);
}

double NNfunction_NN_3_3::synapse0x1bf3820() {
   return (neuron0x1bd4ea0()*-0.0149225);
}

double NNfunction_NN_3_3::synapse0x1bf3860() {
   return (neuron0x1bd51e0()*0.00424251);
}

double NNfunction_NN_3_3::synapse0x1bf38a0() {
   return (neuron0x1bd5520()*0.00794931);
}

double NNfunction_NN_3_3::synapse0x1bf38e0() {
   return (neuron0x1bd5860()*0.0248321);
}

double NNfunction_NN_3_3::synapse0x1bf3920() {
   return (neuron0x1bd5ba0()*0.037227);
}

double NNfunction_NN_3_3::synapse0x1bf3960() {
   return (neuron0x1bd5ee0()*0.0153951);
}

double NNfunction_NN_3_3::synapse0x1bf39a0() {
   return (neuron0x1bd6220()*-0.0397669);
}

double NNfunction_NN_3_3::synapse0x1bf39e0() {
   return (neuron0x1bd6560()*-0.0166222);
}

double NNfunction_NN_3_3::synapse0x1bf3a20() {
   return (neuron0x1bd68a0()*-1.97218);
}

double NNfunction_NN_3_3::synapse0x1bf3a60() {
   return (neuron0x1bd6be0()*-0.0743301);
}

double NNfunction_NN_3_3::synapse0x1bf3aa0() {
   return (neuron0x1bd6f20()*0.0398658);
}

double NNfunction_NN_3_3::synapse0x1bf3ae0() {
   return (neuron0x1bd7260()*0.114948);
}

double NNfunction_NN_3_3::synapse0x1bf3b20() {
   return (neuron0x1bd75a0()*0.0291121);
}

double NNfunction_NN_3_3::synapse0x1bf35b0() {
   return (neuron0x1bd78e0()*-0.0247109);
}

double NNfunction_NN_3_3::synapse0x1bf35f0() {
   return (neuron0x1bd7e40()*0.0279405);
}

double NNfunction_NN_3_3::synapse0x1bf3c70() {
   return (neuron0x1bd8060()*0.00628166);
}

double NNfunction_NN_3_3::synapse0x1bf3cb0() {
   return (neuron0x1bd83a0()*-0.00823763);
}

double NNfunction_NN_3_3::synapse0x1bf3cf0() {
   return (neuron0x1bd86e0()*0.0038767);
}

double NNfunction_NN_3_3::synapse0x1bf3d30() {
   return (neuron0x1bd8a20()*0.0164525);
}

double NNfunction_NN_3_3::synapse0x1bf3d70() {
   return (neuron0x1bd8d60()*0.00611699);
}

double NNfunction_NN_3_3::synapse0x1bf3db0() {
   return (neuron0x1bd90a0()*0.0987559);
}

double NNfunction_NN_3_3::synapse0x1bf4130() {
   return (neuron0x1bd44e0()*-0.0311121);
}

double NNfunction_NN_3_3::synapse0x1bf4170() {
   return (neuron0x1bd4820()*-5.48003);
}

double NNfunction_NN_3_3::synapse0x1bf41b0() {
   return (neuron0x1bd4b60()*-1.1064);
}

double NNfunction_NN_3_3::synapse0x1bf41f0() {
   return (neuron0x1bd4ea0()*0.00983884);
}

double NNfunction_NN_3_3::synapse0x1bf4230() {
   return (neuron0x1bd51e0()*0.00837788);
}

double NNfunction_NN_3_3::synapse0x1bf4270() {
   return (neuron0x1bd5520()*-0.000406275);
}

double NNfunction_NN_3_3::synapse0x1bf42b0() {
   return (neuron0x1bd5860()*0.00994852);
}

double NNfunction_NN_3_3::synapse0x1bf42f0() {
   return (neuron0x1bd5ba0()*-0.00488315);
}

double NNfunction_NN_3_3::synapse0x1bf4330() {
   return (neuron0x1bd5ee0()*0.0207468);
}

double NNfunction_NN_3_3::synapse0x1bf4370() {
   return (neuron0x1bd6220()*-0.0407746);
}

double NNfunction_NN_3_3::synapse0x1bf43b0() {
   return (neuron0x1bd6560()*-0.00297841);
}

double NNfunction_NN_3_3::synapse0x1bf43f0() {
   return (neuron0x1bd68a0()*-0.00841866);
}

double NNfunction_NN_3_3::synapse0x1bf4430() {
   return (neuron0x1bd6be0()*-0.0111993);
}

double NNfunction_NN_3_3::synapse0x1bf4470() {
   return (neuron0x1bd6f20()*-0.000822139);
}

double NNfunction_NN_3_3::synapse0x1bf44b0() {
   return (neuron0x1bd7260()*-0.354829);
}

double NNfunction_NN_3_3::synapse0x1bf44f0() {
   return (neuron0x1bd75a0()*-0.00977915);
}

double NNfunction_NN_3_3::synapse0x1bf3f80() {
   return (neuron0x1bd78e0()*-0.0109426);
}

double NNfunction_NN_3_3::synapse0x1bf3fc0() {
   return (neuron0x1bd7e40()*-0.03359);
}

double NNfunction_NN_3_3::synapse0x1bf4640() {
   return (neuron0x1bd8060()*0.0247445);
}

double NNfunction_NN_3_3::synapse0x1bf4680() {
   return (neuron0x1bd83a0()*0.0173066);
}

double NNfunction_NN_3_3::synapse0x1bf46c0() {
   return (neuron0x1bd86e0()*0.00113218);
}

double NNfunction_NN_3_3::synapse0x1bf4700() {
   return (neuron0x1bd8a20()*-0.000991729);
}

double NNfunction_NN_3_3::synapse0x1bf4740() {
   return (neuron0x1bd8d60()*0.00314826);
}

double NNfunction_NN_3_3::synapse0x1bf4780() {
   return (neuron0x1bd90a0()*-0.375391);
}

double NNfunction_NN_3_3::synapse0x1bf4b00() {
   return (neuron0x1bd44e0()*-1.36568);
}

double NNfunction_NN_3_3::synapse0x1bf4b40() {
   return (neuron0x1bd4820()*0.0282447);
}

double NNfunction_NN_3_3::synapse0x1bf4b80() {
   return (neuron0x1bd4b60()*-0.343009);
}

double NNfunction_NN_3_3::synapse0x1bf4bc0() {
   return (neuron0x1bd4ea0()*0.0514154);
}

double NNfunction_NN_3_3::synapse0x1bf4c00() {
   return (neuron0x1bd51e0()*-0.0976572);
}

double NNfunction_NN_3_3::synapse0x1bf4c40() {
   return (neuron0x1bd5520()*-0.091853);
}

double NNfunction_NN_3_3::synapse0x1bf4c80() {
   return (neuron0x1bd5860()*0.0837044);
}

double NNfunction_NN_3_3::synapse0x1bf4cc0() {
   return (neuron0x1bd5ba0()*-0.0121802);
}

double NNfunction_NN_3_3::synapse0x1bf4d00() {
   return (neuron0x1bd5ee0()*0.0269586);
}

double NNfunction_NN_3_3::synapse0x1bf4d40() {
   return (neuron0x1bd6220()*0.0112539);
}

double NNfunction_NN_3_3::synapse0x1bf4d80() {
   return (neuron0x1bd6560()*0.132612);
}

double NNfunction_NN_3_3::synapse0x1bf4dc0() {
   return (neuron0x1bd68a0()*0.140078);
}

double NNfunction_NN_3_3::synapse0x1bf4e00() {
   return (neuron0x1bd6be0()*0.0353412);
}

double NNfunction_NN_3_3::synapse0x1bf4e40() {
   return (neuron0x1bd6f20()*-0.0239952);
}

double NNfunction_NN_3_3::synapse0x1bf4e80() {
   return (neuron0x1bd7260()*-0.103288);
}

double NNfunction_NN_3_3::synapse0x1bf4ec0() {
   return (neuron0x1bd75a0()*-0.00243705);
}

double NNfunction_NN_3_3::synapse0x1bf4950() {
   return (neuron0x1bd78e0()*-0.0930643);
}

double NNfunction_NN_3_3::synapse0x1bf4990() {
   return (neuron0x1bd7e40()*-0.00221739);
}

double NNfunction_NN_3_3::synapse0x1bf5010() {
   return (neuron0x1bd8060()*-0.0234216);
}

double NNfunction_NN_3_3::synapse0x1bf5050() {
   return (neuron0x1bd83a0()*0.0503319);
}

double NNfunction_NN_3_3::synapse0x1bf5090() {
   return (neuron0x1bd86e0()*0.0215539);
}

double NNfunction_NN_3_3::synapse0x1bf50d0() {
   return (neuron0x1bd8a20()*0.00715262);
}

double NNfunction_NN_3_3::synapse0x1bf5110() {
   return (neuron0x1bd8d60()*-0.0556788);
}

double NNfunction_NN_3_3::synapse0x1bf5150() {
   return (neuron0x1bd90a0()*1.57228);
}

double NNfunction_NN_3_3::synapse0x1bf54d0() {
   return (neuron0x1bd44e0()*-0.0657012);
}

double NNfunction_NN_3_3::synapse0x1bf5510() {
   return (neuron0x1bd4820()*-0.247857);
}

double NNfunction_NN_3_3::synapse0x1bf5550() {
   return (neuron0x1bd4b60()*0.154249);
}

double NNfunction_NN_3_3::synapse0x1bf5590() {
   return (neuron0x1bd4ea0()*0.0170292);
}

double NNfunction_NN_3_3::synapse0x1bf55d0() {
   return (neuron0x1bd51e0()*-0.014912);
}

double NNfunction_NN_3_3::synapse0x1bf5610() {
   return (neuron0x1bd5520()*-0.0401586);
}

double NNfunction_NN_3_3::synapse0x1bf5650() {
   return (neuron0x1bd5860()*0.0109277);
}

double NNfunction_NN_3_3::synapse0x1bf5690() {
   return (neuron0x1bd5ba0()*0.00198293);
}

double NNfunction_NN_3_3::synapse0x1bf56d0() {
   return (neuron0x1bd5ee0()*0.00421524);
}

double NNfunction_NN_3_3::synapse0x1bf5710() {
   return (neuron0x1bd6220()*-0.01147);
}

double NNfunction_NN_3_3::synapse0x1bf5750() {
   return (neuron0x1bd6560()*0.00131519);
}

double NNfunction_NN_3_3::synapse0x1bf5790() {
   return (neuron0x1bd68a0()*0.00773465);
}

double NNfunction_NN_3_3::synapse0x1bf57d0() {
   return (neuron0x1bd6be0()*-0.01008);
}

double NNfunction_NN_3_3::synapse0x1bf5810() {
   return (neuron0x1bd6f20()*0.0025433);
}

double NNfunction_NN_3_3::synapse0x1bf5850() {
   return (neuron0x1bd7260()*-0.0207502);
}

double NNfunction_NN_3_3::synapse0x1bf5890() {
   return (neuron0x1bd75a0()*-0.0320738);
}

double NNfunction_NN_3_3::synapse0x1bf5320() {
   return (neuron0x1bd78e0()*0.0109979);
}

double NNfunction_NN_3_3::synapse0x1bf5360() {
   return (neuron0x1bd7e40()*0.0214512);
}

double NNfunction_NN_3_3::synapse0x1bf59e0() {
   return (neuron0x1bd8060()*-0.00875256);
}

double NNfunction_NN_3_3::synapse0x1bf5a20() {
   return (neuron0x1bd83a0()*-0.00725396);
}

double NNfunction_NN_3_3::synapse0x1bf5a60() {
   return (neuron0x1bd86e0()*-0.00597032);
}

double NNfunction_NN_3_3::synapse0x1bf5aa0() {
   return (neuron0x1bd8a20()*0.00069465);
}

double NNfunction_NN_3_3::synapse0x1bf5ae0() {
   return (neuron0x1bd8d60()*0.0273543);
}

double NNfunction_NN_3_3::synapse0x1bf5b20() {
   return (neuron0x1bd90a0()*-3.40491);
}

double NNfunction_NN_3_3::synapse0x1bde5d0() {
   return (neuron0x1bd44e0()*-0.0106402);
}

double NNfunction_NN_3_3::synapse0x1bde610() {
   return (neuron0x1bd4820()*-22.3242);
}

double NNfunction_NN_3_3::synapse0x1bde650() {
   return (neuron0x1bd4b60()*-0.0472308);
}

double NNfunction_NN_3_3::synapse0x1bde690() {
   return (neuron0x1bd4ea0()*0.00506494);
}

double NNfunction_NN_3_3::synapse0x1bde6d0() {
   return (neuron0x1bd51e0()*0.0127647);
}

double NNfunction_NN_3_3::synapse0x1bde710() {
   return (neuron0x1bd5520()*-0.013582);
}

double NNfunction_NN_3_3::synapse0x1bde750() {
   return (neuron0x1bd5860()*-0.0137289);
}

double NNfunction_NN_3_3::synapse0x1bde790() {
   return (neuron0x1bd5ba0()*0.000803583);
}

double NNfunction_NN_3_3::synapse0x1bf62b0() {
   return (neuron0x1bd5ee0()*0.00514668);
}

double NNfunction_NN_3_3::synapse0x1bf62f0() {
   return (neuron0x1bd6220()*0.00512547);
}

double NNfunction_NN_3_3::synapse0x1bf6330() {
   return (neuron0x1bd6560()*-0.00187098);
}

double NNfunction_NN_3_3::synapse0x1bf6370() {
   return (neuron0x1bd68a0()*0.00226089);
}

double NNfunction_NN_3_3::synapse0x1bf63b0() {
   return (neuron0x1bd6be0()*-3.70635e-06);
}

double NNfunction_NN_3_3::synapse0x1bf63f0() {
   return (neuron0x1bd6f20()*0.00551582);
}

double NNfunction_NN_3_3::synapse0x1bf6430() {
   return (neuron0x1bd7260()*-0.153109);
}

double NNfunction_NN_3_3::synapse0x1bf6470() {
   return (neuron0x1bd75a0()*-0.0128508);
}

double NNfunction_NN_3_3::synapse0x1bf5cf0() {
   return (neuron0x1bd78e0()*-0.000532676);
}

double NNfunction_NN_3_3::synapse0x1bf5d30() {
   return (neuron0x1bd7e40()*-0.00529376);
}

double NNfunction_NN_3_3::synapse0x1bf65c0() {
   return (neuron0x1bd8060()*-0.00181736);
}

double NNfunction_NN_3_3::synapse0x1bf6600() {
   return (neuron0x1bd83a0()*0.000760267);
}

double NNfunction_NN_3_3::synapse0x1bf6640() {
   return (neuron0x1bd86e0()*0.00470966);
}

double NNfunction_NN_3_3::synapse0x1bf6680() {
   return (neuron0x1bd8a20()*-0.00553765);
}

double NNfunction_NN_3_3::synapse0x1bf66c0() {
   return (neuron0x1bd8d60()*-0.00219209);
}

double NNfunction_NN_3_3::synapse0x1bf6700() {
   return (neuron0x1bd90a0()*-1.10748);
}

double NNfunction_NN_3_3::synapse0x1bf6a80() {
   return (neuron0x1bd44e0()*-0.0469473);
}

double NNfunction_NN_3_3::synapse0x1bf6ac0() {
   return (neuron0x1bd4820()*-0.0032577);
}

double NNfunction_NN_3_3::synapse0x1bf6b00() {
   return (neuron0x1bd4b60()*-0.742615);
}

double NNfunction_NN_3_3::synapse0x1bf6b40() {
   return (neuron0x1bd4ea0()*0.146785);
}

double NNfunction_NN_3_3::synapse0x1bf6b80() {
   return (neuron0x1bd51e0()*-0.234272);
}

double NNfunction_NN_3_3::synapse0x1bf6bc0() {
   return (neuron0x1bd5520()*0.221425);
}

double NNfunction_NN_3_3::synapse0x1bf6c00() {
   return (neuron0x1bd5860()*-0.00590749);
}

double NNfunction_NN_3_3::synapse0x1bf6c40() {
   return (neuron0x1bd5ba0()*-0.0557031);
}

double NNfunction_NN_3_3::synapse0x1bf6c80() {
   return (neuron0x1bd5ee0()*-0.0970688);
}

double NNfunction_NN_3_3::synapse0x1bf6cc0() {
   return (neuron0x1bd6220()*-0.172883);
}

double NNfunction_NN_3_3::synapse0x1bf6d00() {
   return (neuron0x1bd6560()*-0.0523654);
}

double NNfunction_NN_3_3::synapse0x1bf6d40() {
   return (neuron0x1bd68a0()*0.0832011);
}

double NNfunction_NN_3_3::synapse0x1bf6d80() {
   return (neuron0x1bd6be0()*-0.130076);
}

double NNfunction_NN_3_3::synapse0x1bf6dc0() {
   return (neuron0x1bd6f20()*-0.0207834);
}

double NNfunction_NN_3_3::synapse0x1bf6e00() {
   return (neuron0x1bd7260()*-0.0756244);
}

double NNfunction_NN_3_3::synapse0x1bf6e40() {
   return (neuron0x1bd75a0()*0.0230209);
}

double NNfunction_NN_3_3::synapse0x1bf68d0() {
   return (neuron0x1bd78e0()*-0.0653963);
}

double NNfunction_NN_3_3::synapse0x1bf6910() {
   return (neuron0x1bd7e40()*0.176717);
}

double NNfunction_NN_3_3::synapse0x1bf6f90() {
   return (neuron0x1bd8060()*-0.325982);
}

double NNfunction_NN_3_3::synapse0x1bf6fd0() {
   return (neuron0x1bd83a0()*-0.0712619);
}

double NNfunction_NN_3_3::synapse0x1bf7010() {
   return (neuron0x1bd86e0()*-0.114033);
}

double NNfunction_NN_3_3::synapse0x1bf7050() {
   return (neuron0x1bd8a20()*-0.114677);
}

double NNfunction_NN_3_3::synapse0x1bf7090() {
   return (neuron0x1bd8d60()*-0.295238);
}

double NNfunction_NN_3_3::synapse0x1bf70d0() {
   return (neuron0x1bd90a0()*-0.170639);
}

double NNfunction_NN_3_3::synapse0x1bf7450() {
   return (neuron0x1bd44e0()*-0.2465);
}

double NNfunction_NN_3_3::synapse0x1bf7490() {
   return (neuron0x1bd4820()*-0.580304);
}

double NNfunction_NN_3_3::synapse0x1bf74d0() {
   return (neuron0x1bd4b60()*0.139809);
}

double NNfunction_NN_3_3::synapse0x1bf7510() {
   return (neuron0x1bd4ea0()*-0.241674);
}

double NNfunction_NN_3_3::synapse0x1bf7550() {
   return (neuron0x1bd51e0()*-0.279071);
}

double NNfunction_NN_3_3::synapse0x1bf7590() {
   return (neuron0x1bd5520()*-0.0847778);
}

double NNfunction_NN_3_3::synapse0x1bf75d0() {
   return (neuron0x1bd5860()*-0.272024);
}

double NNfunction_NN_3_3::synapse0x1bf7610() {
   return (neuron0x1bd5ba0()*0.0306207);
}

double NNfunction_NN_3_3::synapse0x1bf7650() {
   return (neuron0x1bd5ee0()*-0.164556);
}

double NNfunction_NN_3_3::synapse0x1bf7690() {
   return (neuron0x1bd6220()*-0.0971501);
}

double NNfunction_NN_3_3::synapse0x1bf76d0() {
   return (neuron0x1bd6560()*-0.393484);
}

double NNfunction_NN_3_3::synapse0x1bf7710() {
   return (neuron0x1bd68a0()*-0.658178);
}

double NNfunction_NN_3_3::synapse0x1bf7750() {
   return (neuron0x1bd6be0()*1.00622);
}

double NNfunction_NN_3_3::synapse0x1bf7790() {
   return (neuron0x1bd6f20()*0.0262621);
}

double NNfunction_NN_3_3::synapse0x1bf77d0() {
   return (neuron0x1bd7260()*0.542206);
}

double NNfunction_NN_3_3::synapse0x1bf7810() {
   return (neuron0x1bd75a0()*-0.227397);
}

double NNfunction_NN_3_3::synapse0x1bf72a0() {
   return (neuron0x1bd78e0()*0.0714179);
}

double NNfunction_NN_3_3::synapse0x1bf72e0() {
   return (neuron0x1bd7e40()*-0.156414);
}

double NNfunction_NN_3_3::synapse0x1be7e10() {
   return (neuron0x1bd8060()*-0.171734);
}

double NNfunction_NN_3_3::synapse0x1be7e50() {
   return (neuron0x1bd83a0()*-0.165663);
}

double NNfunction_NN_3_3::synapse0x1be7e90() {
   return (neuron0x1bd86e0()*-0.0441722);
}

double NNfunction_NN_3_3::synapse0x1be7ed0() {
   return (neuron0x1bd8a20()*0.36554);
}

double NNfunction_NN_3_3::synapse0x1be7f10() {
   return (neuron0x1bd8d60()*-0.0822913);
}

double NNfunction_NN_3_3::synapse0x1be7f50() {
   return (neuron0x1bd90a0()*0.330253);
}

double NNfunction_NN_3_3::synapse0x1be82d0() {
   return (neuron0x1bd44e0()*-0.0357423);
}

double NNfunction_NN_3_3::synapse0x1be8310() {
   return (neuron0x1bd4820()*-4.91947);
}

double NNfunction_NN_3_3::synapse0x1be8350() {
   return (neuron0x1bd4b60()*1.80654);
}

double NNfunction_NN_3_3::synapse0x1be8390() {
   return (neuron0x1bd4ea0()*-0.0337166);
}

double NNfunction_NN_3_3::synapse0x1be83d0() {
   return (neuron0x1bd51e0()*-0.00902663);
}

double NNfunction_NN_3_3::synapse0x1be8410() {
   return (neuron0x1bd5520()*-0.0308351);
}

double NNfunction_NN_3_3::synapse0x1be8450() {
   return (neuron0x1bd5860()*0.0128312);
}

double NNfunction_NN_3_3::synapse0x1be8490() {
   return (neuron0x1bd5ba0()*-0.0254883);
}

double NNfunction_NN_3_3::synapse0x1be84d0() {
   return (neuron0x1bd5ee0()*0.0372422);
}

double NNfunction_NN_3_3::synapse0x1be8510() {
   return (neuron0x1bd6220()*-0.0367075);
}

double NNfunction_NN_3_3::synapse0x1be8550() {
   return (neuron0x1bd6560()*0.000112015);
}

double NNfunction_NN_3_3::synapse0x1be8590() {
   return (neuron0x1bd68a0()*0.147407);
}

double NNfunction_NN_3_3::synapse0x1be85d0() {
   return (neuron0x1bd6be0()*0.0336375);
}

double NNfunction_NN_3_3::synapse0x1be8610() {
   return (neuron0x1bd6f20()*0.0419817);
}

double NNfunction_NN_3_3::synapse0x1be8650() {
   return (neuron0x1bd7260()*-0.320164);
}

double NNfunction_NN_3_3::synapse0x1be8690() {
   return (neuron0x1bd75a0()*-0.0109948);
}

double NNfunction_NN_3_3::synapse0x1be8120() {
   return (neuron0x1bd78e0()*-0.0647871);
}

double NNfunction_NN_3_3::synapse0x1be8160() {
   return (neuron0x1bd7e40()*-0.00530284);
}

double NNfunction_NN_3_3::synapse0x1be87e0() {
   return (neuron0x1bd8060()*0.025023);
}

double NNfunction_NN_3_3::synapse0x1be8820() {
   return (neuron0x1bd83a0()*0.0113668);
}

double NNfunction_NN_3_3::synapse0x1be8860() {
   return (neuron0x1bd86e0()*-0.00179739);
}

double NNfunction_NN_3_3::synapse0x1be88a0() {
   return (neuron0x1bd8a20()*-0.00992893);
}

double NNfunction_NN_3_3::synapse0x1be88e0() {
   return (neuron0x1bd8d60()*0.0231297);
}

double NNfunction_NN_3_3::synapse0x1be8920() {
   return (neuron0x1bd90a0()*0.115323);
}

double NNfunction_NN_3_3::synapse0x1be8ca0() {
   return (neuron0x1bd44e0()*0.0873991);
}

double NNfunction_NN_3_3::synapse0x1be8ce0() {
   return (neuron0x1bd4820()*0.02927);
}

double NNfunction_NN_3_3::synapse0x1be8d20() {
   return (neuron0x1bd4b60()*0.523323);
}

double NNfunction_NN_3_3::synapse0x1be8d60() {
   return (neuron0x1bd4ea0()*0.0092115);
}

double NNfunction_NN_3_3::synapse0x1be8da0() {
   return (neuron0x1bd51e0()*0.0394791);
}

double NNfunction_NN_3_3::synapse0x1be8de0() {
   return (neuron0x1bd5520()*-0.0113524);
}

double NNfunction_NN_3_3::synapse0x1be8e20() {
   return (neuron0x1bd5860()*-0.0234895);
}

double NNfunction_NN_3_3::synapse0x1be8e60() {
   return (neuron0x1bd5ba0()*0.00514624);
}

double NNfunction_NN_3_3::synapse0x1be8ea0() {
   return (neuron0x1bd5ee0()*0.0347754);
}

double NNfunction_NN_3_3::synapse0x1be8ee0() {
   return (neuron0x1bd6220()*-0.00465585);
}

double NNfunction_NN_3_3::synapse0x1be8f20() {
   return (neuron0x1bd6560()*-0.000759264);
}

double NNfunction_NN_3_3::synapse0x1be8f60() {
   return (neuron0x1bd68a0()*-0.201142);
}

double NNfunction_NN_3_3::synapse0x1be8fa0() {
   return (neuron0x1bd6be0()*0.0364275);
}

double NNfunction_NN_3_3::synapse0x1be8fe0() {
   return (neuron0x1bd6f20()*0.00236429);
}

double NNfunction_NN_3_3::synapse0x1be9020() {
   return (neuron0x1bd7260()*-0.0997047);
}

double NNfunction_NN_3_3::synapse0x1be9060() {
   return (neuron0x1bd75a0()*0.0213844);
}

double NNfunction_NN_3_3::synapse0x1be8af0() {
   return (neuron0x1bd78e0()*0.00683892);
}

double NNfunction_NN_3_3::synapse0x1be8b30() {
   return (neuron0x1bd7e40()*-0.038012);
}

double NNfunction_NN_3_3::synapse0x1be91b0() {
   return (neuron0x1bd8060()*0.00499233);
}

double NNfunction_NN_3_3::synapse0x1be91f0() {
   return (neuron0x1bd83a0()*0.0041534);
}

double NNfunction_NN_3_3::synapse0x1be9230() {
   return (neuron0x1bd86e0()*0.00181367);
}

double NNfunction_NN_3_3::synapse0x1be9270() {
   return (neuron0x1bd8a20()*-0.0141494);
}

double NNfunction_NN_3_3::synapse0x1be92b0() {
   return (neuron0x1bd8d60()*-0.00520558);
}

double NNfunction_NN_3_3::synapse0x1be92f0() {
   return (neuron0x1bd90a0()*0.156146);
}

double NNfunction_NN_3_3::synapse0x1be9670() {
   return (neuron0x1bd44e0()*-0.0598402);
}

double NNfunction_NN_3_3::synapse0x1be96b0() {
   return (neuron0x1bd4820()*-0.0161961);
}

double NNfunction_NN_3_3::synapse0x1be96f0() {
   return (neuron0x1bd4b60()*0.050487);
}

double NNfunction_NN_3_3::synapse0x1be9730() {
   return (neuron0x1bd4ea0()*-0.0554956);
}

double NNfunction_NN_3_3::synapse0x1be9770() {
   return (neuron0x1bd51e0()*-0.0150472);
}

double NNfunction_NN_3_3::synapse0x1be97b0() {
   return (neuron0x1bd5520()*-0.0682179);
}

double NNfunction_NN_3_3::synapse0x1be97f0() {
   return (neuron0x1bd5860()*-0.032565);
}

double NNfunction_NN_3_3::synapse0x1be9830() {
   return (neuron0x1bd5ba0()*0.0231232);
}

double NNfunction_NN_3_3::synapse0x1be9870() {
   return (neuron0x1bd5ee0()*-0.07295);
}

double NNfunction_NN_3_3::synapse0x1be98b0() {
   return (neuron0x1bd6220()*-0.0484124);
}

double NNfunction_NN_3_3::synapse0x1be98f0() {
   return (neuron0x1bd6560()*-0.0197757);
}

double NNfunction_NN_3_3::synapse0x1be9930() {
   return (neuron0x1bd68a0()*0.569326);
}

double NNfunction_NN_3_3::synapse0x1be9970() {
   return (neuron0x1bd6be0()*-0.150582);
}

double NNfunction_NN_3_3::synapse0x1be99b0() {
   return (neuron0x1bd6f20()*-0.0648218);
}

double NNfunction_NN_3_3::synapse0x1be99f0() {
   return (neuron0x1bd7260()*0.155643);
}

double NNfunction_NN_3_3::synapse0x1be9a30() {
   return (neuron0x1bd75a0()*0.00610646);
}

double NNfunction_NN_3_3::synapse0x1be94c0() {
   return (neuron0x1bd78e0()*0.0759302);
}

double NNfunction_NN_3_3::synapse0x1be9500() {
   return (neuron0x1bd7e40()*0.0403314);
}

double NNfunction_NN_3_3::synapse0x1be9b80() {
   return (neuron0x1bd8060()*-0.0764287);
}

double NNfunction_NN_3_3::synapse0x1be9bc0() {
   return (neuron0x1bd83a0()*-0.0135997);
}

double NNfunction_NN_3_3::synapse0x1be9c00() {
   return (neuron0x1bd86e0()*-0.0100411);
}

double NNfunction_NN_3_3::synapse0x1be9c40() {
   return (neuron0x1bd8a20()*0.0517293);
}

double NNfunction_NN_3_3::synapse0x1be9c80() {
   return (neuron0x1bd8d60()*-0.0234893);
}

double NNfunction_NN_3_3::synapse0x1be9cc0() {
   return (neuron0x1bd90a0()*-0.531138);
}

double NNfunction_NN_3_3::synapse0x1bfbb90() {
   return (neuron0x1bd44e0()*0.0703588);
}

double NNfunction_NN_3_3::synapse0x1bfbbd0() {
   return (neuron0x1bd4820()*0.127552);
}

double NNfunction_NN_3_3::synapse0x1bfbc10() {
   return (neuron0x1bd4b60()*-0.216237);
}

double NNfunction_NN_3_3::synapse0x1bfbc50() {
   return (neuron0x1bd4ea0()*-0.00111131);
}

double NNfunction_NN_3_3::synapse0x1bfbc90() {
   return (neuron0x1bd51e0()*0.00890112);
}

double NNfunction_NN_3_3::synapse0x1bfbcd0() {
   return (neuron0x1bd5520()*-0.00721047);
}

double NNfunction_NN_3_3::synapse0x1bfbd10() {
   return (neuron0x1bd5860()*0.0173404);
}

double NNfunction_NN_3_3::synapse0x1bfbd50() {
   return (neuron0x1bd5ba0()*0.0230331);
}

double NNfunction_NN_3_3::synapse0x1bfbd90() {
   return (neuron0x1bd5ee0()*0.0194444);
}

double NNfunction_NN_3_3::synapse0x1bfbdd0() {
   return (neuron0x1bd6220()*0.0030944);
}

double NNfunction_NN_3_3::synapse0x1bfbe10() {
   return (neuron0x1bd6560()*-0.0117315);
}

double NNfunction_NN_3_3::synapse0x1bfbe50() {
   return (neuron0x1bd68a0()*0.122991);
}

double NNfunction_NN_3_3::synapse0x1bfbe90() {
   return (neuron0x1bd6be0()*0.00801433);
}

double NNfunction_NN_3_3::synapse0x1bfbed0() {
   return (neuron0x1bd6f20()*0.0426505);
}

double NNfunction_NN_3_3::synapse0x1bfbf10() {
   return (neuron0x1bd7260()*-0.747951);
}

double NNfunction_NN_3_3::synapse0x1bfbf50() {
   return (neuron0x1bd75a0()*-0.0310213);
}

double NNfunction_NN_3_3::synapse0x1be9d00() {
   return (neuron0x1bd78e0()*-0.0453619);
}

double NNfunction_NN_3_3::synapse0x1be9d40() {
   return (neuron0x1bd7e40()*0.0110821);
}

double NNfunction_NN_3_3::synapse0x1bfc0a0() {
   return (neuron0x1bd8060()*0.000415449);
}

double NNfunction_NN_3_3::synapse0x1bfc0e0() {
   return (neuron0x1bd83a0()*0.0237605);
}

double NNfunction_NN_3_3::synapse0x1bfc120() {
   return (neuron0x1bd86e0()*-0.0687266);
}

double NNfunction_NN_3_3::synapse0x1bfc160() {
   return (neuron0x1bd8a20()*-0.028286);
}

double NNfunction_NN_3_3::synapse0x1bfc1a0() {
   return (neuron0x1bd8d60()*0.0511146);
}

double NNfunction_NN_3_3::synapse0x1bfc1e0() {
   return (neuron0x1bd90a0()*2.75132);
}

double NNfunction_NN_3_3::synapse0x1bfc560() {
   return (neuron0x1bd44e0()*-0.0390974);
}

double NNfunction_NN_3_3::synapse0x1bfc5a0() {
   return (neuron0x1bd4820()*0.011708);
}

double NNfunction_NN_3_3::synapse0x1bfc5e0() {
   return (neuron0x1bd4b60()*0.387301);
}

double NNfunction_NN_3_3::synapse0x1bfc620() {
   return (neuron0x1bd4ea0()*-0.0476398);
}

double NNfunction_NN_3_3::synapse0x1bfc660() {
   return (neuron0x1bd51e0()*0.0264338);
}

double NNfunction_NN_3_3::synapse0x1bfc6a0() {
   return (neuron0x1bd5520()*-0.0174771);
}

double NNfunction_NN_3_3::synapse0x1bfc6e0() {
   return (neuron0x1bd5860()*-0.00141108);
}

double NNfunction_NN_3_3::synapse0x1bfc720() {
   return (neuron0x1bd5ba0()*0.00198658);
}

double NNfunction_NN_3_3::synapse0x1bfc760() {
   return (neuron0x1bd5ee0()*-0.0428024);
}

double NNfunction_NN_3_3::synapse0x1bfc7a0() {
   return (neuron0x1bd6220()*-0.0402823);
}

double NNfunction_NN_3_3::synapse0x1bfc7e0() {
   return (neuron0x1bd6560()*0.0143909);
}

double NNfunction_NN_3_3::synapse0x1bfc820() {
   return (neuron0x1bd68a0()*-0.0504437);
}

double NNfunction_NN_3_3::synapse0x1bfc860() {
   return (neuron0x1bd6be0()*0.0188381);
}

double NNfunction_NN_3_3::synapse0x1bfc8a0() {
   return (neuron0x1bd6f20()*-0.0112403);
}

double NNfunction_NN_3_3::synapse0x1bfc8e0() {
   return (neuron0x1bd7260()*0.474933);
}

double NNfunction_NN_3_3::synapse0x1bfc920() {
   return (neuron0x1bd75a0()*-0.0187293);
}

double NNfunction_NN_3_3::synapse0x1bfc3b0() {
   return (neuron0x1bd78e0()*0.00974044);
}

double NNfunction_NN_3_3::synapse0x1bfc3f0() {
   return (neuron0x1bd7e40()*-0.0522984);
}

double NNfunction_NN_3_3::synapse0x1bfca70() {
   return (neuron0x1bd8060()*0.0133035);
}

double NNfunction_NN_3_3::synapse0x1bfcab0() {
   return (neuron0x1bd83a0()*-0.0058006);
}

double NNfunction_NN_3_3::synapse0x1bfcaf0() {
   return (neuron0x1bd86e0()*0.00329043);
}

double NNfunction_NN_3_3::synapse0x1bfcb30() {
   return (neuron0x1bd8a20()*0.00895453);
}

double NNfunction_NN_3_3::synapse0x1bfcb70() {
   return (neuron0x1bd8d60()*-0.0112506);
}

double NNfunction_NN_3_3::synapse0x1bfcbb0() {
   return (neuron0x1bd90a0()*1.19802);
}

double NNfunction_NN_3_3::synapse0x1bfcf30() {
   return (neuron0x1bd44e0()*-0.0286492);
}

double NNfunction_NN_3_3::synapse0x1bfcf70() {
   return (neuron0x1bd4820()*0.00447383);
}

double NNfunction_NN_3_3::synapse0x1bfcfb0() {
   return (neuron0x1bd4b60()*0.128039);
}

double NNfunction_NN_3_3::synapse0x1bfcff0() {
   return (neuron0x1bd4ea0()*-0.0158114);
}

double NNfunction_NN_3_3::synapse0x1bfd030() {
   return (neuron0x1bd51e0()*0.0152098);
}

double NNfunction_NN_3_3::synapse0x1bfd070() {
   return (neuron0x1bd5520()*-0.00445387);
}

double NNfunction_NN_3_3::synapse0x1bfd0b0() {
   return (neuron0x1bd5860()*0.000103717);
}

double NNfunction_NN_3_3::synapse0x1bfd0f0() {
   return (neuron0x1bd5ba0()*-0.00833073);
}

double NNfunction_NN_3_3::synapse0x1bfd130() {
   return (neuron0x1bd5ee0()*-0.0194482);
}

double NNfunction_NN_3_3::synapse0x1bfd170() {
   return (neuron0x1bd6220()*-0.0130351);
}

double NNfunction_NN_3_3::synapse0x1bfd1b0() {
   return (neuron0x1bd6560()*0.0156904);
}

double NNfunction_NN_3_3::synapse0x1bfd1f0() {
   return (neuron0x1bd68a0()*-0.134642);
}

double NNfunction_NN_3_3::synapse0x1bfd230() {
   return (neuron0x1bd6be0()*0.0215902);
}

double NNfunction_NN_3_3::synapse0x1bfd270() {
   return (neuron0x1bd6f20()*-0.0243163);
}

double NNfunction_NN_3_3::synapse0x1bfd2b0() {
   return (neuron0x1bd7260()*0.367106);
}

double NNfunction_NN_3_3::synapse0x1bfd2f0() {
   return (neuron0x1bd75a0()*0.00286066);
}

double NNfunction_NN_3_3::synapse0x1bfcd80() {
   return (neuron0x1bd78e0()*0.0170354);
}

double NNfunction_NN_3_3::synapse0x1bfcdc0() {
   return (neuron0x1bd7e40()*-0.0330366);
}

double NNfunction_NN_3_3::synapse0x1bfd440() {
   return (neuron0x1bd8060()*-0.00422925);
}

double NNfunction_NN_3_3::synapse0x1bfd480() {
   return (neuron0x1bd83a0()*-0.00380632);
}

double NNfunction_NN_3_3::synapse0x1bfd4c0() {
   return (neuron0x1bd86e0()*0.0156919);
}

double NNfunction_NN_3_3::synapse0x1bfd500() {
   return (neuron0x1bd8a20()*0.00260965);
}

double NNfunction_NN_3_3::synapse0x1bfd540() {
   return (neuron0x1bd8d60()*-0.0470701);
}

double NNfunction_NN_3_3::synapse0x1bfd580() {
   return (neuron0x1bd90a0()*-1.18178);
}

double NNfunction_NN_3_3::synapse0x1bfd900() {
   return (neuron0x1bd44e0()*0.0232251);
}

double NNfunction_NN_3_3::synapse0x1bfd940() {
   return (neuron0x1bd4820()*-0.0387399);
}

double NNfunction_NN_3_3::synapse0x1bfd980() {
   return (neuron0x1bd4b60()*-0.325145);
}

double NNfunction_NN_3_3::synapse0x1bfd9c0() {
   return (neuron0x1bd4ea0()*0.000849264);
}

double NNfunction_NN_3_3::synapse0x1bfda00() {
   return (neuron0x1bd51e0()*0.0211917);
}

double NNfunction_NN_3_3::synapse0x1bfda40() {
   return (neuron0x1bd5520()*0.00813649);
}

double NNfunction_NN_3_3::synapse0x1bfda80() {
   return (neuron0x1bd5860()*0.0253388);
}

double NNfunction_NN_3_3::synapse0x1bfdac0() {
   return (neuron0x1bd5ba0()*0.039839);
}

double NNfunction_NN_3_3::synapse0x1bfdb00() {
   return (neuron0x1bd5ee0()*-0.00870552);
}

double NNfunction_NN_3_3::synapse0x1bfdb40() {
   return (neuron0x1bd6220()*-0.0407947);
}

double NNfunction_NN_3_3::synapse0x1bfdb80() {
   return (neuron0x1bd6560()*0.0293272);
}

double NNfunction_NN_3_3::synapse0x1bfdbc0() {
   return (neuron0x1bd68a0()*-0.0339293);
}

double NNfunction_NN_3_3::synapse0x1bfdc00() {
   return (neuron0x1bd6be0()*-0.0201212);
}

double NNfunction_NN_3_3::synapse0x1bfdc40() {
   return (neuron0x1bd6f20()*-0.00704678);
}

double NNfunction_NN_3_3::synapse0x1bfdc80() {
   return (neuron0x1bd7260()*0.138262);
}

double NNfunction_NN_3_3::synapse0x1bfdcc0() {
   return (neuron0x1bd75a0()*0.0302555);
}

double NNfunction_NN_3_3::synapse0x1bfd750() {
   return (neuron0x1bd78e0()*0.0270687);
}

double NNfunction_NN_3_3::synapse0x1bfd790() {
   return (neuron0x1bd7e40()*0.0527676);
}

double NNfunction_NN_3_3::synapse0x1bfde10() {
   return (neuron0x1bd8060()*0.0259716);
}

double NNfunction_NN_3_3::synapse0x1bfde50() {
   return (neuron0x1bd83a0()*-0.0180907);
}

double NNfunction_NN_3_3::synapse0x1bfde90() {
   return (neuron0x1bd86e0()*0.0121872);
}

double NNfunction_NN_3_3::synapse0x1bfded0() {
   return (neuron0x1bd8a20()*-0.0044545);
}

double NNfunction_NN_3_3::synapse0x1bfdf10() {
   return (neuron0x1bd8d60()*-0.0225067);
}

double NNfunction_NN_3_3::synapse0x1bfdf50() {
   return (neuron0x1bd90a0()*-2.41045);
}

double NNfunction_NN_3_3::synapse0x1bda4f0() {
   return (neuron0x1bd9540()*0.192068);
}

double NNfunction_NN_3_3::synapse0x1bda530() {
   return (neuron0x1bd9e50()*-2.32788);
}

double NNfunction_NN_3_3::synapse0x1bdba00() {
   return (neuron0x1bda930()*0.129815);
}

double NNfunction_NN_3_3::synapse0x1bdba40() {
   return (neuron0x19941c0()*0.148388);
}

double NNfunction_NN_3_3::synapse0x1bdc3d0() {
   return (neuron0x1bdb750()*-0.369552);
}

double NNfunction_NN_3_3::synapse0x1bdc410() {
   return (neuron0x1bdc120()*-6.0046);
}

double NNfunction_NN_3_3::synapse0x1bdd1a0() {
   return (neuron0x1bdcef0()*0.520332);
}

double NNfunction_NN_3_3::synapse0x1bdd1e0() {
   return (neuron0x1bdd8c0()*-0.00634689);
}

double NNfunction_NN_3_3::synapse0x1bddb70() {
   return (neuron0x1bde290()*0.4363);
}

double NNfunction_NN_3_3::synapse0x1bddbb0() {
   return (neuron0x1bded70()*0.415958);
}

double NNfunction_NN_3_3::synapse0x1bde540() {
   return (neuron0x1bdf740()*0.0432293);
}

double NNfunction_NN_3_3::synapse0x1bde580() {
   return (neuron0x1bdc820()*-0.935391);
}

double NNfunction_NN_3_3::synapse0x1bdf020() {
   return (neuron0x1be12f0()*0.00137337);
}

double NNfunction_NN_3_3::synapse0x1bdf060() {
   return (neuron0x1be1cc0()*0.0148562);
}

double NNfunction_NN_3_3::synapse0x1bdf9f0() {
   return (neuron0x1be2690()*-0.626303);
}

double NNfunction_NN_3_3::synapse0x1bdfa30() {
   return (neuron0x1be3060()*-0.607179);
}

double NNfunction_NN_3_3::synapse0x1bdcad0() {
   return (neuron0x1be4e70()*5.15359);
}

double NNfunction_NN_3_3::synapse0x1bdcb10() {
   return (neuron0x1be5150()*2.82135);
}

double NNfunction_NN_3_3::synapse0x1be15a0() {
   return (neuron0x1be5b20()*-0.435252);
}

double NNfunction_NN_3_3::synapse0x1be15e0() {
   return (neuron0x1be64f0()*-1.30118);
}

double NNfunction_NN_3_3::synapse0x1be1f70() {
   return (neuron0x1be6ec0()*-0.86328);
}

double NNfunction_NN_3_3::synapse0x1be1fb0() {
   return (neuron0x1be7890()*-2.0973);
}

double NNfunction_NN_3_3::synapse0x1be2940() {
   return (neuron0x1be03e0()*-0.446142);
}

double NNfunction_NN_3_3::synapse0x1be2980() {
   return (neuron0x1be0db0()*1.44816);
}

double NNfunction_NN_3_3::synapse0x1be3310() {
   return (neuron0x1bea620()*-0.708303);
}

double NNfunction_NN_3_3::synapse0x1be3350() {
   return (neuron0x1beaff0()*3.58484);
}

double NNfunction_NN_3_3::synapse0x1bd7480() {
   return (neuron0x1beb9c0()*0.298815);
}

double NNfunction_NN_3_3::synapse0x1bd74c0() {
   return (neuron0x1bec390()*-1.15601);
}

double NNfunction_NN_3_3::synapse0x1be5400() {
   return (neuron0x1becd60()*-0.768274);
}

double NNfunction_NN_3_3::synapse0x1be5440() {
   return (neuron0x1bed730()*0.632165);
}

double NNfunction_NN_3_3::synapse0x1be5dd0() {
   return (neuron0x1bee100()*0.899689);
}

double NNfunction_NN_3_3::synapse0x1be5e10() {
   return (neuron0x1beead0()*1.97838);
}

double NNfunction_NN_3_3::synapse0x1be67a0() {
   return (neuron0x1be4b60()*0.464569);
}

double NNfunction_NN_3_3::synapse0x1be67e0() {
   return (neuron0x1bf16b0()*-0.890115);
}

double NNfunction_NN_3_3::synapse0x1be7170() {
   return (neuron0x1bf2080()*-0.157813);
}

double NNfunction_NN_3_3::synapse0x1be71b0() {
   return (neuron0x1bf2a50()*0.19111);
}

double NNfunction_NN_3_3::synapse0x1be7b40() {
   return (neuron0x1bf3420()*-0.161947);
}

double NNfunction_NN_3_3::synapse0x1be7b80() {
   return (neuron0x1bf3df0()*-2.70867);
}

double NNfunction_NN_3_3::synapse0x1be0690() {
   return (neuron0x1bf47c0()*-0.498899);
}

double NNfunction_NN_3_3::synapse0x1be06d0() {
   return (neuron0x1bf5190()*2.9763);
}

double NNfunction_NN_3_3::synapse0x1be9f40() {
   return (neuron0x1bf5b60()*-4.76566);
}

double NNfunction_NN_3_3::synapse0x1be9f80() {
   return (neuron0x1bf6740()*0.136287);
}

double NNfunction_NN_3_3::synapse0x1bea8d0() {
   return (neuron0x1bf7110()*0.102832);
}

double NNfunction_NN_3_3::synapse0x1bea910() {
   return (neuron0x1be7f90()*0.608729);
}

double NNfunction_NN_3_3::synapse0x1beb2a0() {
   return (neuron0x1be8960()*-0.481596);
}

double NNfunction_NN_3_3::synapse0x1beb2e0() {
   return (neuron0x1be9330()*-0.379435);
}

double NNfunction_NN_3_3::synapse0x1bebc70() {
   return (neuron0x1bfb970()*-0.291125);
}

double NNfunction_NN_3_3::synapse0x1bebcb0() {
   return (neuron0x1bfc220()*-0.807055);
}

double NNfunction_NN_3_3::synapse0x1bec640() {
   return (neuron0x1bfcbf0()*-2.56437);
}

double NNfunction_NN_3_3::synapse0x1bec680() {
   return (neuron0x1bfd5c0()*-1.73702);
}

double NNfunction_NN_3_3::synapse0x1beed80() {
   return (neuron0x1bd9540()*-0.603978);
}

double NNfunction_NN_3_3::synapse0x1beedc0() {
   return (neuron0x1bd9e50()*-1.31307);
}

double NNfunction_NN_3_3::synapse0x1be4340() {
   return (neuron0x1bda930()*0.094543);
}

double NNfunction_NN_3_3::synapse0x1be4380() {
   return (neuron0x19941c0()*1.92907);
}

double NNfunction_NN_3_3::synapse0x1bf1960() {
   return (neuron0x1bdb750()*-2.78668);
}

double NNfunction_NN_3_3::synapse0x1bf19a0() {
   return (neuron0x1bdc120()*-5.90942);
}

double NNfunction_NN_3_3::synapse0x1bf2330() {
   return (neuron0x1bdcef0()*-0.302241);
}

double NNfunction_NN_3_3::synapse0x1bf2370() {
   return (neuron0x1bdd8c0()*-0.653893);
}

double NNfunction_NN_3_3::synapse0x1bf2d00() {
   return (neuron0x1bde290()*1.09819);
}

double NNfunction_NN_3_3::synapse0x1bf2d40() {
   return (neuron0x1bded70()*-0.348229);
}

double NNfunction_NN_3_3::synapse0x1bf36d0() {
   return (neuron0x1bdf740()*0.26024);
}

double NNfunction_NN_3_3::synapse0x1bf3710() {
   return (neuron0x1bdc820()*-0.288247);
}

double NNfunction_NN_3_3::synapse0x1bf40a0() {
   return (neuron0x1be12f0()*-0.599373);
}

double NNfunction_NN_3_3::synapse0x1bf40e0() {
   return (neuron0x1be1cc0()*0.383983);
}

double NNfunction_NN_3_3::synapse0x1bf4a70() {
   return (neuron0x1be2690()*1.22551);
}

double NNfunction_NN_3_3::synapse0x1bf4ab0() {
   return (neuron0x1be3060()*-1.27746);
}

double NNfunction_NN_3_3::synapse0x1bf5440() {
   return (neuron0x1be4e70()*4.78615);
}

double NNfunction_NN_3_3::synapse0x1bf5480() {
   return (neuron0x1be5150()*1.66479);
}

double NNfunction_NN_3_3::synapse0x1bf5e10() {
   return (neuron0x1be5b20()*2.09427);
}

double NNfunction_NN_3_3::synapse0x1bf5e50() {
   return (neuron0x1be64f0()*2.1846);
}

double NNfunction_NN_3_3::synapse0x1bf69f0() {
   return (neuron0x1be6ec0()*1.2376);
}

double NNfunction_NN_3_3::synapse0x1bf6a30() {
   return (neuron0x1be7890()*-3.74882);
}

double NNfunction_NN_3_3::synapse0x1bf73c0() {
   return (neuron0x1be03e0()*0.94865);
}

double NNfunction_NN_3_3::synapse0x1bf7400() {
   return (neuron0x1be0db0()*-1.28856);
}

double NNfunction_NN_3_3::synapse0x1be8240() {
   return (neuron0x1bea620()*-2.76221);
}

double NNfunction_NN_3_3::synapse0x1be8280() {
   return (neuron0x1beaff0()*4.01035);
}

double NNfunction_NN_3_3::synapse0x1be8c10() {
   return (neuron0x1beb9c0()*1.4993);
}

double NNfunction_NN_3_3::synapse0x1be8c50() {
   return (neuron0x1bec390()*-0.433187);
}

double NNfunction_NN_3_3::synapse0x1be95e0() {
   return (neuron0x1becd60()*0.29628);
}

double NNfunction_NN_3_3::synapse0x1be9620() {
   return (neuron0x1bed730()*-0.177424);
}

double NNfunction_NN_3_3::synapse0x1bfbb00() {
   return (neuron0x1bee100()*3.16707);
}

double NNfunction_NN_3_3::synapse0x1bfbb40() {
   return (neuron0x1beead0()*1.90075);
}

double NNfunction_NN_3_3::synapse0x1bfc4d0() {
   return (neuron0x1be4b60()*0.22819);
}

double NNfunction_NN_3_3::synapse0x1bfc510() {
   return (neuron0x1bf16b0()*-0.15025);
}

double NNfunction_NN_3_3::synapse0x1bfcea0() {
   return (neuron0x1bf2080()*-1.55569);
}

double NNfunction_NN_3_3::synapse0x1bfcee0() {
   return (neuron0x1bf2a50()*0.0238865);
}

double NNfunction_NN_3_3::synapse0x1bfd870() {
   return (neuron0x1bf3420()*-1.33732);
}

double NNfunction_NN_3_3::synapse0x1bfd8b0() {
   return (neuron0x1bf3df0()*-0.168279);
}

double NNfunction_NN_3_3::synapse0x1bd9760() {
   return (neuron0x1bf47c0()*-0.384856);
}

double NNfunction_NN_3_3::synapse0x1bd97a0() {
   return (neuron0x1bf5190()*-0.0445776);
}

double NNfunction_NN_3_3::synapse0x1bed010() {
   return (neuron0x1bf5b60()*-4.2884);
}

double NNfunction_NN_3_3::synapse0x1bed050() {
   return (neuron0x1bf6740()*-0.2566);
}

double NNfunction_NN_3_3::synapse0x1bfdf90() {
   return (neuron0x1bf7110()*0.120437);
}

double NNfunction_NN_3_3::synapse0x1bfdfd0() {
   return (neuron0x1be7f90()*2.75484);
}

double NNfunction_NN_3_3::synapse0x1bfe010() {
   return (neuron0x1be8960()*0.865307);
}

double NNfunction_NN_3_3::synapse0x1bfe050() {
   return (neuron0x1be9330()*0.0851845);
}

double NNfunction_NN_3_3::synapse0x1c04f00() {
   return (neuron0x1bfb970()*-0.104704);
}

double NNfunction_NN_3_3::synapse0x1c04f40() {
   return (neuron0x1bfc220()*-0.31918);
}

double NNfunction_NN_3_3::synapse0x1c04f80() {
   return (neuron0x1bfcbf0()*0.310591);
}

double NNfunction_NN_3_3::synapse0x1c04fc0() {
   return (neuron0x1bfd5c0()*-0.750152);
}

double NNfunction_NN_3_3::synapse0x1c05340() {
   return (neuron0x1bd9540()*0.66609);
}

double NNfunction_NN_3_3::synapse0x1c05380() {
   return (neuron0x1bd9e50()*0.0496235);
}

double NNfunction_NN_3_3::synapse0x1c053c0() {
   return (neuron0x1bda930()*-0.0125741);
}

double NNfunction_NN_3_3::synapse0x1c05400() {
   return (neuron0x19941c0()*-0.448893);
}

double NNfunction_NN_3_3::synapse0x1c05440() {
   return (neuron0x1bdb750()*0.11517);
}

double NNfunction_NN_3_3::synapse0x1c05480() {
   return (neuron0x1bdc120()*2.96895);
}

double NNfunction_NN_3_3::synapse0x1c054c0() {
   return (neuron0x1bdcef0()*0.396237);
}

double NNfunction_NN_3_3::synapse0x1c05500() {
   return (neuron0x1bdd8c0()*-0.121789);
}

double NNfunction_NN_3_3::synapse0x1c05540() {
   return (neuron0x1bde290()*-0.610737);
}

double NNfunction_NN_3_3::synapse0x1c05580() {
   return (neuron0x1bded70()*0.438865);
}

double NNfunction_NN_3_3::synapse0x1c055c0() {
   return (neuron0x1bdf740()*0.209294);
}

double NNfunction_NN_3_3::synapse0x1c05600() {
   return (neuron0x1bdc820()*-0.32177);
}

double NNfunction_NN_3_3::synapse0x1c05640() {
   return (neuron0x1be12f0()*1.78984);
}

double NNfunction_NN_3_3::synapse0x1c05680() {
   return (neuron0x1be1cc0()*1.00134);
}

double NNfunction_NN_3_3::synapse0x1c056c0() {
   return (neuron0x1be2690()*-0.0417015);
}

double NNfunction_NN_3_3::synapse0x1c05700() {
   return (neuron0x1be3060()*-0.650841);
}

double NNfunction_NN_3_3::synapse0x1c05190() {
   return (neuron0x1be4e70()*-0.765904);
}

double NNfunction_NN_3_3::synapse0x1c051d0() {
   return (neuron0x1be5150()*0.394775);
}

double NNfunction_NN_3_3::synapse0x1c05850() {
   return (neuron0x1be5b20()*0.732338);
}

double NNfunction_NN_3_3::synapse0x1c05890() {
   return (neuron0x1be64f0()*-1.59517);
}

double NNfunction_NN_3_3::synapse0x1c058d0() {
   return (neuron0x1be6ec0()*-0.320175);
}

double NNfunction_NN_3_3::synapse0x1c05910() {
   return (neuron0x1be7890()*-2.68293);
}

double NNfunction_NN_3_3::synapse0x1c05950() {
   return (neuron0x1be03e0()*0.353378);
}

double NNfunction_NN_3_3::synapse0x1c05990() {
   return (neuron0x1be0db0()*0.996511);
}

double NNfunction_NN_3_3::synapse0x1c059d0() {
   return (neuron0x1bea620()*-0.0375875);
}

double NNfunction_NN_3_3::synapse0x1c05a10() {
   return (neuron0x1beaff0()*-2.93203);
}

double NNfunction_NN_3_3::synapse0x1c05a50() {
   return (neuron0x1beb9c0()*0.469559);
}

double NNfunction_NN_3_3::synapse0x1c05a90() {
   return (neuron0x1bec390()*-0.771333);
}

double NNfunction_NN_3_3::synapse0x1c05ad0() {
   return (neuron0x1becd60()*0.8017);
}

double NNfunction_NN_3_3::synapse0x1c05b10() {
   return (neuron0x1bed730()*-0.123835);
}

double NNfunction_NN_3_3::synapse0x1c05b50() {
   return (neuron0x1bee100()*-0.349506);
}

double NNfunction_NN_3_3::synapse0x1c05b90() {
   return (neuron0x1beead0()*-1.54347);
}

double NNfunction_NN_3_3::synapse0x1c05740() {
   return (neuron0x1be4b60()*0.470295);
}

double NNfunction_NN_3_3::synapse0x1c05780() {
   return (neuron0x1bf16b0()*-0.0312815);
}

double NNfunction_NN_3_3::synapse0x1c057c0() {
   return (neuron0x1bf2080()*-0.114852);
}

double NNfunction_NN_3_3::synapse0x1c05800() {
   return (neuron0x1bf2a50()*-0.0280193);
}

double NNfunction_NN_3_3::synapse0x1c05de0() {
   return (neuron0x1bf3420()*0.00205935);
}

double NNfunction_NN_3_3::synapse0x1c05e20() {
   return (neuron0x1bf3df0()*-1.66855);
}

double NNfunction_NN_3_3::synapse0x1c05e60() {
   return (neuron0x1bf47c0()*-0.0789662);
}

double NNfunction_NN_3_3::synapse0x1c05ea0() {
   return (neuron0x1bf5190()*-0.0459497);
}

double NNfunction_NN_3_3::synapse0x1c05ee0() {
   return (neuron0x1bf5b60()*5.49326);
}

double NNfunction_NN_3_3::synapse0x1c05f20() {
   return (neuron0x1bf6740()*-0.135635);
}

double NNfunction_NN_3_3::synapse0x1c05f60() {
   return (neuron0x1bf7110()*-0.0446337);
}

double NNfunction_NN_3_3::synapse0x1c05fa0() {
   return (neuron0x1be7f90()*-1.35469);
}

double NNfunction_NN_3_3::synapse0x1c05fe0() {
   return (neuron0x1be8960()*0.839177);
}

double NNfunction_NN_3_3::synapse0x1c06020() {
   return (neuron0x1be9330()*0.663175);
}

double NNfunction_NN_3_3::synapse0x1c06060() {
   return (neuron0x1bfb970()*-0.343093);
}

double NNfunction_NN_3_3::synapse0x1c060a0() {
   return (neuron0x1bfc220()*-1.21366);
}

double NNfunction_NN_3_3::synapse0x1c060e0() {
   return (neuron0x1bfcbf0()*0.992957);
}

double NNfunction_NN_3_3::synapse0x1c06120() {
   return (neuron0x1bfd5c0()*-1.35111);
}

double NNfunction_NN_3_3::synapse0x1c064a0() {
   return (neuron0x1bd9540()*-0.017424);
}

double NNfunction_NN_3_3::synapse0x1c064e0() {
   return (neuron0x1bd9e50()*0.438338);
}

double NNfunction_NN_3_3::synapse0x1c06520() {
   return (neuron0x1bda930()*-0.0616687);
}

double NNfunction_NN_3_3::synapse0x1c06560() {
   return (neuron0x19941c0()*0.0921585);
}

double NNfunction_NN_3_3::synapse0x1c065a0() {
   return (neuron0x1bdb750()*-0.0406538);
}

double NNfunction_NN_3_3::synapse0x1c065e0() {
   return (neuron0x1bdc120()*-3.18449);
}

double NNfunction_NN_3_3::synapse0x1c06620() {
   return (neuron0x1bdcef0()*-0.0603898);
}

double NNfunction_NN_3_3::synapse0x1c06660() {
   return (neuron0x1bdd8c0()*-0.0831667);
}

double NNfunction_NN_3_3::synapse0x1c066a0() {
   return (neuron0x1bde290()*-0.194917);
}

double NNfunction_NN_3_3::synapse0x1c066e0() {
   return (neuron0x1bded70()*-0.105313);
}

double NNfunction_NN_3_3::synapse0x1c06720() {
   return (neuron0x1bdf740()*0.0328122);
}

double NNfunction_NN_3_3::synapse0x1c06760() {
   return (neuron0x1bdc820()*-0.56499);
}

double NNfunction_NN_3_3::synapse0x1c067a0() {
   return (neuron0x1be12f0()*-0.808151);
}

double NNfunction_NN_3_3::synapse0x1c067e0() {
   return (neuron0x1be1cc0()*-0.0647458);
}

double NNfunction_NN_3_3::synapse0x1c06820() {
   return (neuron0x1be2690()*-1.2659);
}

double NNfunction_NN_3_3::synapse0x1c06860() {
   return (neuron0x1be3060()*-1.05883);
}

double NNfunction_NN_3_3::synapse0x1c062f0() {
   return (neuron0x1be4e70()*-0.0463241);
}

double NNfunction_NN_3_3::synapse0x1c06330() {
   return (neuron0x1be5150()*1.27844);
}

double NNfunction_NN_3_3::synapse0x1c069b0() {
   return (neuron0x1be5b20()*0.677832);
}

double NNfunction_NN_3_3::synapse0x1c069f0() {
   return (neuron0x1be64f0()*-0.441527);
}

double NNfunction_NN_3_3::synapse0x1c06a30() {
   return (neuron0x1be6ec0()*-0.299027);
}

double NNfunction_NN_3_3::synapse0x1c06a70() {
   return (neuron0x1be7890()*0.17028);
}

double NNfunction_NN_3_3::synapse0x1c06ab0() {
   return (neuron0x1be03e0()*0.00891572);
}

double NNfunction_NN_3_3::synapse0x1c06af0() {
   return (neuron0x1be0db0()*0.0312719);
}

double NNfunction_NN_3_3::synapse0x1c06b30() {
   return (neuron0x1bea620()*-0.268151);
}

double NNfunction_NN_3_3::synapse0x1c06b70() {
   return (neuron0x1beaff0()*0.487881);
}

double NNfunction_NN_3_3::synapse0x1c06bb0() {
   return (neuron0x1beb9c0()*0.147145);
}

double NNfunction_NN_3_3::synapse0x1c06bf0() {
   return (neuron0x1bec390()*-0.960013);
}

double NNfunction_NN_3_3::synapse0x1c06c30() {
   return (neuron0x1becd60()*-1.47246);
}

double NNfunction_NN_3_3::synapse0x1c06c70() {
   return (neuron0x1bed730()*-0.0495297);
}

double NNfunction_NN_3_3::synapse0x1c06cb0() {
   return (neuron0x1bee100()*-0.285637);
}

double NNfunction_NN_3_3::synapse0x1c06cf0() {
   return (neuron0x1beead0()*0.683826);
}

double NNfunction_NN_3_3::synapse0x1c068a0() {
   return (neuron0x1be4b60()*-0.0459131);
}

double NNfunction_NN_3_3::synapse0x1c068e0() {
   return (neuron0x1bf16b0()*0.259375);
}

double NNfunction_NN_3_3::synapse0x1c06920() {
   return (neuron0x1bf2080()*-0.0619164);
}

double NNfunction_NN_3_3::synapse0x1c06960() {
   return (neuron0x1bf2a50()*0.000465256);
}

double NNfunction_NN_3_3::synapse0x1c06f40() {
   return (neuron0x1bf3420()*0.028606);
}

double NNfunction_NN_3_3::synapse0x1c06f80() {
   return (neuron0x1bf3df0()*0.303905);
}

double NNfunction_NN_3_3::synapse0x1c06fc0() {
   return (neuron0x1bf47c0()*-0.0248259);
}

double NNfunction_NN_3_3::synapse0x1c07000() {
   return (neuron0x1bf5190()*-2.49931);
}

double NNfunction_NN_3_3::synapse0x1c07040() {
   return (neuron0x1bf5b60()*-3.24905);
}

double NNfunction_NN_3_3::synapse0x1c07080() {
   return (neuron0x1bf6740()*0.431994);
}

double NNfunction_NN_3_3::synapse0x1c070c0() {
   return (neuron0x1bf7110()*-0.0751099);
}

double NNfunction_NN_3_3::synapse0x1c07100() {
   return (neuron0x1be7f90()*0.144248);
}

double NNfunction_NN_3_3::synapse0x1c07140() {
   return (neuron0x1be8960()*2.03889);
}

double NNfunction_NN_3_3::synapse0x1c07180() {
   return (neuron0x1be9330()*0.2062);
}

double NNfunction_NN_3_3::synapse0x1c071c0() {
   return (neuron0x1bfb970()*1.43021);
}

double NNfunction_NN_3_3::synapse0x1c07200() {
   return (neuron0x1bfc220()*1.13314);
}

double NNfunction_NN_3_3::synapse0x1c07240() {
   return (neuron0x1bfcbf0()*0.455178);
}

double NNfunction_NN_3_3::synapse0x1c07280() {
   return (neuron0x1bfd5c0()*-1.68626);
}

double NNfunction_NN_3_3::synapse0x1c07600() {
   return (neuron0x1bd9540()*-0.0663141);
}

double NNfunction_NN_3_3::synapse0x1c07640() {
   return (neuron0x1bd9e50()*-0.89044);
}

double NNfunction_NN_3_3::synapse0x1c07680() {
   return (neuron0x1bda930()*0.00441066);
}

double NNfunction_NN_3_3::synapse0x1c076c0() {
   return (neuron0x19941c0()*-2.07231);
}

double NNfunction_NN_3_3::synapse0x1c07700() {
   return (neuron0x1bdb750()*-1.27951);
}

double NNfunction_NN_3_3::synapse0x1c07740() {
   return (neuron0x1bdc120()*1.77882);
}

double NNfunction_NN_3_3::synapse0x1c07780() {
   return (neuron0x1bdcef0()*0.0479311);
}

double NNfunction_NN_3_3::synapse0x1c077c0() {
   return (neuron0x1bdd8c0()*0.603822);
}

double NNfunction_NN_3_3::synapse0x1c07800() {
   return (neuron0x1bde290()*0.209219);
}

double NNfunction_NN_3_3::synapse0x1c07840() {
   return (neuron0x1bded70()*0.428358);
}

double NNfunction_NN_3_3::synapse0x1c07880() {
   return (neuron0x1bdf740()*1.29106);
}

double NNfunction_NN_3_3::synapse0x1c078c0() {
   return (neuron0x1bdc820()*-0.80061);
}

double NNfunction_NN_3_3::synapse0x1c07900() {
   return (neuron0x1be12f0()*0.52298);
}

double NNfunction_NN_3_3::synapse0x1c07940() {
   return (neuron0x1be1cc0()*1.93694);
}

double NNfunction_NN_3_3::synapse0x1c07980() {
   return (neuron0x1be2690()*-2.63061);
}

double NNfunction_NN_3_3::synapse0x1c079c0() {
   return (neuron0x1be3060()*0.298455);
}

double NNfunction_NN_3_3::synapse0x1c07450() {
   return (neuron0x1be4e70()*-1.57786);
}

double NNfunction_NN_3_3::synapse0x1c07490() {
   return (neuron0x1be5150()*-0.789374);
}

double NNfunction_NN_3_3::synapse0x1c07b10() {
   return (neuron0x1be5b20()*-2.44606);
}

double NNfunction_NN_3_3::synapse0x1c07b50() {
   return (neuron0x1be64f0()*-1.83316);
}

double NNfunction_NN_3_3::synapse0x1c07b90() {
   return (neuron0x1be6ec0()*0.007495);
}

double NNfunction_NN_3_3::synapse0x1c07bd0() {
   return (neuron0x1be7890()*3.63516);
}

double NNfunction_NN_3_3::synapse0x1c07c10() {
   return (neuron0x1be03e0()*-1.5353);
}

double NNfunction_NN_3_3::synapse0x1c07c50() {
   return (neuron0x1be0db0()*0.971449);
}

double NNfunction_NN_3_3::synapse0x1c07c90() {
   return (neuron0x1bea620()*2.34392);
}

double NNfunction_NN_3_3::synapse0x1c07cd0() {
   return (neuron0x1beaff0()*-2.07484);
}

double NNfunction_NN_3_3::synapse0x1c07d10() {
   return (neuron0x1beb9c0()*-0.724873);
}

double NNfunction_NN_3_3::synapse0x1c07d50() {
   return (neuron0x1bec390()*-1.00112);
}

double NNfunction_NN_3_3::synapse0x1c07d90() {
   return (neuron0x1becd60()*-0.124389);
}

double NNfunction_NN_3_3::synapse0x1c07dd0() {
   return (neuron0x1bed730()*0.382007);
}

double NNfunction_NN_3_3::synapse0x1c07e10() {
   return (neuron0x1bee100()*-0.168212);
}

double NNfunction_NN_3_3::synapse0x1c07e50() {
   return (neuron0x1beead0()*-0.251883);
}

double NNfunction_NN_3_3::synapse0x1c07a00() {
   return (neuron0x1be4b60()*-0.570957);
}

double NNfunction_NN_3_3::synapse0x1c07a40() {
   return (neuron0x1bf16b0()*-0.418873);
}

double NNfunction_NN_3_3::synapse0x1c07a80() {
   return (neuron0x1bf2080()*0.34764);
}

double NNfunction_NN_3_3::synapse0x1c07ac0() {
   return (neuron0x1bf2a50()*-0.265273);
}

double NNfunction_NN_3_3::synapse0x1c080a0() {
   return (neuron0x1bf3420()*-0.58069);
}

double NNfunction_NN_3_3::synapse0x1c080e0() {
   return (neuron0x1bf3df0()*0.476737);
}

double NNfunction_NN_3_3::synapse0x1c08120() {
   return (neuron0x1bf47c0()*0.44472);
}

double NNfunction_NN_3_3::synapse0x1c08160() {
   return (neuron0x1bf5190()*0.641137);
}

double NNfunction_NN_3_3::synapse0x1c081a0() {
   return (neuron0x1bf5b60()*-1.969);
}

double NNfunction_NN_3_3::synapse0x1c081e0() {
   return (neuron0x1bf6740()*0.424105);
}

double NNfunction_NN_3_3::synapse0x1c08220() {
   return (neuron0x1bf7110()*-0.201344);
}

double NNfunction_NN_3_3::synapse0x1c08260() {
   return (neuron0x1be7f90()*-1.57827);
}

double NNfunction_NN_3_3::synapse0x1c082a0() {
   return (neuron0x1be8960()*-1.01017);
}

double NNfunction_NN_3_3::synapse0x1c082e0() {
   return (neuron0x1be9330()*1.61992);
}

double NNfunction_NN_3_3::synapse0x1c08320() {
   return (neuron0x1bfb970()*0.111745);
}

double NNfunction_NN_3_3::synapse0x1c08360() {
   return (neuron0x1bfc220()*-1.19835);
}

double NNfunction_NN_3_3::synapse0x1c083a0() {
   return (neuron0x1bfcbf0()*1.08704);
}

double NNfunction_NN_3_3::synapse0x1c083e0() {
   return (neuron0x1bfd5c0()*0.0761835);
}

double NNfunction_NN_3_3::synapse0x1bd9500() {
   return (neuron0x1c047c0()*4.77002);
}

double NNfunction_NN_3_3::synapse0x1c08640() {
   return (neuron0x1c04b60()*-4.22564);
}

double NNfunction_NN_3_3::synapse0x1c08680() {
   return (neuron0x1c05000()*-5.94074);
}

double NNfunction_NN_3_3::synapse0x1c086c0() {
   return (neuron0x1c06160()*-9.92782);
}

double NNfunction_NN_3_3::synapse0x1c08700() {
   return (neuron0x1c072c0()*-3.9578);
}

