#include "NNfunction_ss_cLdL.h"
#include <cmath>

double NNfunction_ss_cLdL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5506)/15.3424;
   input1 = (in1 - 3.71422)/1141.52;
   input2 = (in2 - 662.204)/620.26;
   input3 = (in3 - -53.1209)/820.499;
   input4 = (in4 - 1043.66)/940.498;
   input5 = (in5 - 881.116)/935.738;
   input6 = (in6 - 894.317)/935.924;
   input7 = (in7 - 914.952)/925.232;
   input8 = (in8 - 927.447)/977.627;
   input9 = (in9 - 894.45)/954.312;
   input10 = (in10 - 989.655)/959.616;
   input11 = (in11 - 389.285)/402.702;
   input12 = (in12 - 381.164)/391.824;
   input13 = (in13 - 498.262)/515.436;
   input14 = (in14 - 697.837)/795.667;
   input15 = (in15 - 699.581)/798.575;
   input16 = (in16 - 528.226)/552.806;
   input17 = (in17 - 768.67)/908.69;
   input18 = (in18 - 752.891)/906.061;
   input19 = (in19 - 805.777)/886.455;
   input20 = (in20 - -4.44233)/487.963;
   input21 = (in21 - 8.15067)/1162.71;
   input22 = (in22 - 4.85141)/1205.1;
   input23 = (in23 - -192.386)/593.829;
   switch(index) {
     case 0:
         return neuron0x2c754b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLdL::Value(int index, double* input) {
   input0 = (input[0] - 23.5506)/15.3424;
   input1 = (input[1] - 3.71422)/1141.52;
   input2 = (input[2] - 662.204)/620.26;
   input3 = (input[3] - -53.1209)/820.499;
   input4 = (input[4] - 1043.66)/940.498;
   input5 = (input[5] - 881.116)/935.738;
   input6 = (input[6] - 894.317)/935.924;
   input7 = (input[7] - 914.952)/925.232;
   input8 = (input[8] - 927.447)/977.627;
   input9 = (input[9] - 894.45)/954.312;
   input10 = (input[10] - 989.655)/959.616;
   input11 = (input[11] - 389.285)/402.702;
   input12 = (input[12] - 381.164)/391.824;
   input13 = (input[13] - 498.262)/515.436;
   input14 = (input[14] - 697.837)/795.667;
   input15 = (input[15] - 699.581)/798.575;
   input16 = (input[16] - 528.226)/552.806;
   input17 = (input[17] - 768.67)/908.69;
   input18 = (input[18] - 752.891)/906.061;
   input19 = (input[19] - 805.777)/886.455;
   input20 = (input[20] - -4.44233)/487.963;
   input21 = (input[21] - 8.15067)/1162.71;
   input22 = (input[22] - 4.85141)/1205.1;
   input23 = (input[23] - -192.386)/593.829;
   switch(index) {
     case 0:
         return neuron0x2c754b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLdL::neuron0x2c41570() {
   return input0;
}

double NNfunction_ss_cLdL::neuron0x2c418b0() {
   return input1;
}

double NNfunction_ss_cLdL::neuron0x2c41bf0() {
   return input2;
}

double NNfunction_ss_cLdL::neuron0x2c41f30() {
   return input3;
}

double NNfunction_ss_cLdL::neuron0x2c42270() {
   return input4;
}

double NNfunction_ss_cLdL::neuron0x2c425b0() {
   return input5;
}

double NNfunction_ss_cLdL::neuron0x2c428f0() {
   return input6;
}

double NNfunction_ss_cLdL::neuron0x2c42c30() {
   return input7;
}

double NNfunction_ss_cLdL::neuron0x2c42f70() {
   return input8;
}

double NNfunction_ss_cLdL::neuron0x2c432b0() {
   return input9;
}

double NNfunction_ss_cLdL::neuron0x2c435f0() {
   return input10;
}

double NNfunction_ss_cLdL::neuron0x2c43930() {
   return input11;
}

double NNfunction_ss_cLdL::neuron0x2c43c70() {
   return input12;
}

double NNfunction_ss_cLdL::neuron0x2c43fb0() {
   return input13;
}

double NNfunction_ss_cLdL::neuron0x2c442f0() {
   return input14;
}

double NNfunction_ss_cLdL::neuron0x2c44630() {
   return input15;
}

double NNfunction_ss_cLdL::neuron0x2c44970() {
   return input16;
}

double NNfunction_ss_cLdL::neuron0x2c44ed0() {
   return input17;
}

double NNfunction_ss_cLdL::neuron0x2c450f0() {
   return input18;
}

double NNfunction_ss_cLdL::neuron0x2c45430() {
   return input19;
}

double NNfunction_ss_cLdL::neuron0x2c45770() {
   return input20;
}

double NNfunction_ss_cLdL::neuron0x2c45ab0() {
   return input21;
}

double NNfunction_ss_cLdL::neuron0x2c45df0() {
   return input22;
}

double NNfunction_ss_cLdL::neuron0x2c46130() {
   return input23;
}

double NNfunction_ss_cLdL::input0x2c465d0() {
   double input = 0.79503;
   input += synapse0x2a013e0();
   input += synapse0x2c41430();
   input += synapse0x2c41470();
   input += synapse0x2c46880();
   input += synapse0x2c468c0();
   input += synapse0x2c46900();
   input += synapse0x2c46940();
   input += synapse0x2c46980();
   input += synapse0x2c469c0();
   input += synapse0x2c46a00();
   input += synapse0x2c46a40();
   input += synapse0x2c46a80();
   input += synapse0x2c46ac0();
   input += synapse0x2c46b00();
   input += synapse0x2c46b40();
   input += synapse0x2c46b80();
   input += synapse0x2c413a0();
   input += synapse0x2c413e0();
   input += synapse0x29f2c80();
   input += synapse0x29f2cc0();
   input += synapse0x2c46de0();
   input += synapse0x2c46e20();
   input += synapse0x2c46e60();
   input += synapse0x2c46ea0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c465d0() {
   double input = input0x2c465d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c46ee0() {
   double input = 0.409284;
   input += synapse0x2c47220();
   input += synapse0x2c47260();
   input += synapse0x2c472a0();
   input += synapse0x2c472e0();
   input += synapse0x2c47320();
   input += synapse0x2c47360();
   input += synapse0x2c473a0();
   input += synapse0x2c473e0();
   input += synapse0x2c47420();
   input += synapse0x2c46cd0();
   input += synapse0x2c46d10();
   input += synapse0x2c46d50();
   input += synapse0x2c46d90();
   input += synapse0x2c47670();
   input += synapse0x2c476b0();
   input += synapse0x2c476f0();
   input += synapse0x2c47070();
   input += synapse0x2c470b0();
   input += synapse0x2c47840();
   input += synapse0x2c47880();
   input += synapse0x2c478c0();
   input += synapse0x2c47900();
   input += synapse0x2c47940();
   input += synapse0x2c47980();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c46ee0() {
   double input = input0x2c46ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c479c0() {
   double input = 1.29804;
   input += synapse0x2c47d00();
   input += synapse0x2c47d40();
   input += synapse0x2c47d80();
   input += synapse0x2c47dc0();
   input += synapse0x2c47e00();
   input += synapse0x2c47e40();
   input += synapse0x2c47e80();
   input += synapse0x2c47ec0();
   input += synapse0x2c47f00();
   input += synapse0x2c47f40();
   input += synapse0x2c47f80();
   input += synapse0x2c47fc0();
   input += synapse0x2c48000();
   input += synapse0x2c48040();
   input += synapse0x2c48080();
   input += synapse0x2c480c0();
   input += synapse0x2c47b50();
   input += synapse0x2c47b90();
   input += synapse0x2a00ad0();
   input += synapse0x2a00b10();
   input += synapse0x2c30600();
   input += synapse0x2c30640();
   input += synapse0x2c30680();
   input += synapse0x2c414b0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c479c0() {
   double input = input0x2c479c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2a01250() {
   double input = 0.350807;
   input += synapse0x2c47610();
   input += synapse0x2c414f0();
   input += synapse0x2c41530();
   input += synapse0x2c48210();
   input += synapse0x2c48250();
   input += synapse0x2c48290();
   input += synapse0x2c482d0();
   input += synapse0x2c48310();
   input += synapse0x2c48350();
   input += synapse0x2c48390();
   input += synapse0x2c483d0();
   input += synapse0x2c48410();
   input += synapse0x2c48450();
   input += synapse0x2c48490();
   input += synapse0x2c484d0();
   input += synapse0x2c48510();
   input += synapse0x2c47460();
   input += synapse0x2c474a0();
   input += synapse0x2c48660();
   input += synapse0x2c486a0();
   input += synapse0x2c486e0();
   input += synapse0x2c48720();
   input += synapse0x2c48760();
   input += synapse0x2c487a0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2a01250() {
   double input = input0x2a01250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c487e0() {
   double input = 0.0448065;
   input += synapse0x2c48b20();
   input += synapse0x2c48b60();
   input += synapse0x2c48ba0();
   input += synapse0x2c48be0();
   input += synapse0x2c48c20();
   input += synapse0x2c48c60();
   input += synapse0x2c48ca0();
   input += synapse0x2c48ce0();
   input += synapse0x2c48d20();
   input += synapse0x2c48d60();
   input += synapse0x2c48da0();
   input += synapse0x2c48de0();
   input += synapse0x2c48e20();
   input += synapse0x2c48e60();
   input += synapse0x2c48ea0();
   input += synapse0x2c48ee0();
   input += synapse0x2c48970();
   input += synapse0x2c489b0();
   input += synapse0x2c49030();
   input += synapse0x2c49070();
   input += synapse0x2c490b0();
   input += synapse0x2c490f0();
   input += synapse0x2c49130();
   input += synapse0x2c49170();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c487e0() {
   double input = input0x2c487e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c491b0() {
   double input = 0.343115;
   input += synapse0x2c494f0();
   input += synapse0x2c49530();
   input += synapse0x2c49570();
   input += synapse0x2c495b0();
   input += synapse0x2c495f0();
   input += synapse0x2c49630();
   input += synapse0x2c49670();
   input += synapse0x2c496b0();
   input += synapse0x2c496f0();
   input += synapse0x2a00e40();
   input += synapse0x2a00e80();
   input += synapse0x2a00ec0();
   input += synapse0x2a00f00();
   input += synapse0x2a00f40();
   input += synapse0x2a00f80();
   input += synapse0x2a00fc0();
   input += synapse0x2c49340();
   input += synapse0x2c49380();
   input += synapse0x2a01110();
   input += synapse0x2a01150();
   input += synapse0x2a01190();
   input += synapse0x2a011d0();
   input += synapse0x2a01210();
   input += synapse0x2c49f40();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c491b0() {
   double input = input0x2c491b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c49f80() {
   double input = -2.60183;
   input += synapse0x2c4a2c0();
   input += synapse0x2c4a300();
   input += synapse0x2c4a340();
   input += synapse0x2c4a380();
   input += synapse0x2c4a3c0();
   input += synapse0x2c4a400();
   input += synapse0x2c4a440();
   input += synapse0x2c4a480();
   input += synapse0x2c4a4c0();
   input += synapse0x2c4a500();
   input += synapse0x2c4a540();
   input += synapse0x2c4a580();
   input += synapse0x2c4a5c0();
   input += synapse0x2c4a600();
   input += synapse0x2c4a640();
   input += synapse0x2c4a680();
   input += synapse0x2c4a110();
   input += synapse0x2c4a150();
   input += synapse0x2c4a7d0();
   input += synapse0x2c4a810();
   input += synapse0x2c4a850();
   input += synapse0x2c4a890();
   input += synapse0x2c4a8d0();
   input += synapse0x2c4a910();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c49f80() {
   double input = input0x2c49f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c4a950() {
   double input = 1.56885;
   input += synapse0x2c4ac90();
   input += synapse0x2c4acd0();
   input += synapse0x2c4ad10();
   input += synapse0x2c4ad50();
   input += synapse0x2c4ad90();
   input += synapse0x2c4add0();
   input += synapse0x2c4ae10();
   input += synapse0x2c4ae50();
   input += synapse0x2c4ae90();
   input += synapse0x2c4aed0();
   input += synapse0x2c4af10();
   input += synapse0x2c4af50();
   input += synapse0x2c4af90();
   input += synapse0x2c4afd0();
   input += synapse0x2c4b010();
   input += synapse0x2c4b050();
   input += synapse0x2c4aae0();
   input += synapse0x2c4ab20();
   input += synapse0x2c4b1a0();
   input += synapse0x2c4b1e0();
   input += synapse0x2c4b220();
   input += synapse0x2c4b260();
   input += synapse0x2c4b2a0();
   input += synapse0x2c4b2e0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c4a950() {
   double input = input0x2c4a950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c4b320() {
   double input = -0.0179866;
   input += synapse0x2c44dc0();
   input += synapse0x2c44e00();
   input += synapse0x2c44e40();
   input += synapse0x2c44e80();
   input += synapse0x2c4b870();
   input += synapse0x2c4b8b0();
   input += synapse0x2c4b8f0();
   input += synapse0x2c4b930();
   input += synapse0x2c4b970();
   input += synapse0x2c4b9b0();
   input += synapse0x2c4b9f0();
   input += synapse0x2c4ba30();
   input += synapse0x2c4ba70();
   input += synapse0x2c4bab0();
   input += synapse0x2c4baf0();
   input += synapse0x2c4bb30();
   input += synapse0x2c4b4b0();
   input += synapse0x2c4b4f0();
   input += synapse0x2c4bc80();
   input += synapse0x2c4bcc0();
   input += synapse0x2c4bd00();
   input += synapse0x2c4bd40();
   input += synapse0x2c4bd80();
   input += synapse0x2c4bdc0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c4b320() {
   double input = input0x2c4b320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c4be00() {
   double input = 0.0350586;
   input += synapse0x2c4c140();
   input += synapse0x2c4c180();
   input += synapse0x2c4c1c0();
   input += synapse0x2c4c200();
   input += synapse0x2c4c240();
   input += synapse0x2c4c280();
   input += synapse0x2c4c2c0();
   input += synapse0x2c4c300();
   input += synapse0x2c4c340();
   input += synapse0x2c4c380();
   input += synapse0x2c4c3c0();
   input += synapse0x2c4c400();
   input += synapse0x2c4c440();
   input += synapse0x2c4c480();
   input += synapse0x2c4c4c0();
   input += synapse0x2c4c500();
   input += synapse0x2c4bf90();
   input += synapse0x2c4bfd0();
   input += synapse0x2c4c650();
   input += synapse0x2c4c690();
   input += synapse0x2c4c6d0();
   input += synapse0x2c4c710();
   input += synapse0x2c4c750();
   input += synapse0x2c4c790();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c4be00() {
   double input = input0x2c4be00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c4c7d0() {
   double input = -0.760459;
   input += synapse0x2c4cb10();
   input += synapse0x2c4cb50();
   input += synapse0x2c4cb90();
   input += synapse0x2c4cbd0();
   input += synapse0x2c4cc10();
   input += synapse0x2c4cc50();
   input += synapse0x2c4cc90();
   input += synapse0x2c4ccd0();
   input += synapse0x2c4cd10();
   input += synapse0x2c4cd50();
   input += synapse0x2c4cd90();
   input += synapse0x2c4cdd0();
   input += synapse0x2c4ce10();
   input += synapse0x2c4ce50();
   input += synapse0x2c4ce90();
   input += synapse0x2c4ced0();
   input += synapse0x2c4c960();
   input += synapse0x2c4c9a0();
   input += synapse0x2c49730();
   input += synapse0x2c49770();
   input += synapse0x2c497b0();
   input += synapse0x2c497f0();
   input += synapse0x2c49830();
   input += synapse0x2c49870();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c4c7d0() {
   double input = input0x2c4c7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c498b0() {
   double input = -2.26047;
   input += synapse0x2c49bf0();
   input += synapse0x2c49c30();
   input += synapse0x2c49c70();
   input += synapse0x2c49cb0();
   input += synapse0x2c49cf0();
   input += synapse0x2c49d30();
   input += synapse0x2c49d70();
   input += synapse0x2c49db0();
   input += synapse0x2c49df0();
   input += synapse0x2c49e30();
   input += synapse0x2c49e70();
   input += synapse0x2c49eb0();
   input += synapse0x2c49ef0();
   input += synapse0x2c4e030();
   input += synapse0x2c4e070();
   input += synapse0x2c4e0b0();
   input += synapse0x2c49a40();
   input += synapse0x2c49a80();
   input += synapse0x2c4e200();
   input += synapse0x2c4e240();
   input += synapse0x2c4e280();
   input += synapse0x2c4e2c0();
   input += synapse0x2c4e300();
   input += synapse0x2c4e340();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c498b0() {
   double input = input0x2c498b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c4e380() {
   double input = -0.574498;
   input += synapse0x2c4e6c0();
   input += synapse0x2c4e700();
   input += synapse0x2c4e740();
   input += synapse0x2c4e780();
   input += synapse0x2c4e7c0();
   input += synapse0x2c4e800();
   input += synapse0x2c4e840();
   input += synapse0x2c4e880();
   input += synapse0x2c4e8c0();
   input += synapse0x2c4e900();
   input += synapse0x2c4e940();
   input += synapse0x2c4e980();
   input += synapse0x2c4e9c0();
   input += synapse0x2c4ea00();
   input += synapse0x2c4ea40();
   input += synapse0x2c4ea80();
   input += synapse0x2c4e510();
   input += synapse0x2c4e550();
   input += synapse0x2c4ebd0();
   input += synapse0x2c4ec10();
   input += synapse0x2c4ec50();
   input += synapse0x2c4ec90();
   input += synapse0x2c4ecd0();
   input += synapse0x2c4ed10();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c4e380() {
   double input = input0x2c4e380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c4ed50() {
   double input = 0.479516;
   input += synapse0x2c4f090();
   input += synapse0x2c4f0d0();
   input += synapse0x2c4f110();
   input += synapse0x2c4f150();
   input += synapse0x2c4f190();
   input += synapse0x2c4f1d0();
   input += synapse0x2c4f210();
   input += synapse0x2c4f250();
   input += synapse0x2c4f290();
   input += synapse0x2c4f2d0();
   input += synapse0x2c4f310();
   input += synapse0x2c4f350();
   input += synapse0x2c4f390();
   input += synapse0x2c4f3d0();
   input += synapse0x2c4f410();
   input += synapse0x2c4f450();
   input += synapse0x2c4eee0();
   input += synapse0x2c4ef20();
   input += synapse0x2c4f5a0();
   input += synapse0x2c4f5e0();
   input += synapse0x2c4f620();
   input += synapse0x2c4f660();
   input += synapse0x2c4f6a0();
   input += synapse0x2c4f6e0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c4ed50() {
   double input = input0x2c4ed50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c4f720() {
   double input = -1.65089;
   input += synapse0x2c4fa60();
   input += synapse0x2c4faa0();
   input += synapse0x2c4fae0();
   input += synapse0x2c4fb20();
   input += synapse0x2c4fb60();
   input += synapse0x2c4fba0();
   input += synapse0x2c4fbe0();
   input += synapse0x2c4fc20();
   input += synapse0x2c4fc60();
   input += synapse0x2c4fca0();
   input += synapse0x2c4fce0();
   input += synapse0x2c4fd20();
   input += synapse0x2c4fd60();
   input += synapse0x2c4fda0();
   input += synapse0x2c4fde0();
   input += synapse0x2c4fe20();
   input += synapse0x2c4f8b0();
   input += synapse0x2c4f8f0();
   input += synapse0x2c4ff70();
   input += synapse0x2c4ffb0();
   input += synapse0x2c4fff0();
   input += synapse0x2c50030();
   input += synapse0x2c50070();
   input += synapse0x2c500b0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c4f720() {
   double input = input0x2c4f720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c500f0() {
   double input = -0.857911;
   input += synapse0x2c50430();
   input += synapse0x2c41790();
   input += synapse0x2c417d0();
   input += synapse0x2c41ad0();
   input += synapse0x2c41b10();
   input += synapse0x2c41e10();
   input += synapse0x2c41e50();
   input += synapse0x2c42150();
   input += synapse0x2c42190();
   input += synapse0x2c42490();
   input += synapse0x2c424d0();
   input += synapse0x2c427d0();
   input += synapse0x2c42810();
   input += synapse0x2c42b10();
   input += synapse0x2c42b50();
   input += synapse0x2c42e50();
   input += synapse0x2c42e90();
   input += synapse0x2c43190();
   input += synapse0x2c431d0();
   input += synapse0x2c434d0();
   input += synapse0x2c43510();
   input += synapse0x2c43810();
   input += synapse0x2c43850();
   input += synapse0x2c43b50();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c500f0() {
   double input = input0x2c500f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c51f00() {
   double input = 0.453626;
   input += synapse0x2c43b90();
   input += synapse0x2c44850();
   input += synapse0x2c44890();
   input += synapse0x2c50280();
   input += synapse0x2c502c0();
   input += synapse0x2c44b90();
   input += synapse0x2c44bd0();
   input += synapse0x29f2b60();
   input += synapse0x29f2ba0();
   input += synapse0x2c45310();
   input += synapse0x2c45350();
   input += synapse0x2c45650();
   input += synapse0x2c45690();
   input += synapse0x2c45990();
   input += synapse0x2c459d0();
   input += synapse0x2c45cd0();
   input += synapse0x2c45d10();
   input += synapse0x2c46010();
   input += synapse0x2c46050();
   input += synapse0x2c46350();
   input += synapse0x2c46390();
   input += synapse0x2c43e90();
   input += synapse0x2c43ed0();
   input += synapse0x2c521a0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c51f00() {
   double input = input0x2c51f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c521e0() {
   double input = 0.657509;
   input += synapse0x2c52520();
   input += synapse0x2c52560();
   input += synapse0x2c525a0();
   input += synapse0x2c525e0();
   input += synapse0x2c52620();
   input += synapse0x2c52660();
   input += synapse0x2c526a0();
   input += synapse0x2c526e0();
   input += synapse0x2c52720();
   input += synapse0x2c52760();
   input += synapse0x2c527a0();
   input += synapse0x2c527e0();
   input += synapse0x2c52820();
   input += synapse0x2c52860();
   input += synapse0x2c528a0();
   input += synapse0x2c528e0();
   input += synapse0x2c52370();
   input += synapse0x2c523b0();
   input += synapse0x2c52a30();
   input += synapse0x2c52a70();
   input += synapse0x2c52ab0();
   input += synapse0x2c52af0();
   input += synapse0x2c52b30();
   input += synapse0x2c52b70();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c521e0() {
   double input = input0x2c521e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c52bb0() {
   double input = -0.0761793;
   input += synapse0x2c52ef0();
   input += synapse0x2c52f30();
   input += synapse0x2c52f70();
   input += synapse0x2c52fb0();
   input += synapse0x2c52ff0();
   input += synapse0x2c53030();
   input += synapse0x2c53070();
   input += synapse0x2c530b0();
   input += synapse0x2c530f0();
   input += synapse0x2c53130();
   input += synapse0x2c53170();
   input += synapse0x2c531b0();
   input += synapse0x2c531f0();
   input += synapse0x2c53230();
   input += synapse0x2c53270();
   input += synapse0x2c532b0();
   input += synapse0x2c52d40();
   input += synapse0x2c52d80();
   input += synapse0x2c53400();
   input += synapse0x2c53440();
   input += synapse0x2c53480();
   input += synapse0x2c534c0();
   input += synapse0x2c53500();
   input += synapse0x2c53540();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c52bb0() {
   double input = input0x2c52bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c53580() {
   double input = 0.168338;
   input += synapse0x2c538c0();
   input += synapse0x2c53900();
   input += synapse0x2c53940();
   input += synapse0x2c53980();
   input += synapse0x2c539c0();
   input += synapse0x2c53a00();
   input += synapse0x2c53a40();
   input += synapse0x2c53a80();
   input += synapse0x2c53ac0();
   input += synapse0x2c53b00();
   input += synapse0x2c53b40();
   input += synapse0x2c53b80();
   input += synapse0x2c53bc0();
   input += synapse0x2c53c00();
   input += synapse0x2c53c40();
   input += synapse0x2c53c80();
   input += synapse0x2c53710();
   input += synapse0x2c53750();
   input += synapse0x2c53dd0();
   input += synapse0x2c53e10();
   input += synapse0x2c53e50();
   input += synapse0x2c53e90();
   input += synapse0x2c53ed0();
   input += synapse0x2c53f10();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c53580() {
   double input = input0x2c53580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c53f50() {
   double input = 0.0226268;
   input += synapse0x2c54290();
   input += synapse0x2c542d0();
   input += synapse0x2c54310();
   input += synapse0x2c54350();
   input += synapse0x2c54390();
   input += synapse0x2c543d0();
   input += synapse0x2c54410();
   input += synapse0x2c54450();
   input += synapse0x2c54490();
   input += synapse0x2c544d0();
   input += synapse0x2c54510();
   input += synapse0x2c54550();
   input += synapse0x2c54590();
   input += synapse0x2c545d0();
   input += synapse0x2c54610();
   input += synapse0x2c54650();
   input += synapse0x2c540e0();
   input += synapse0x2c54120();
   input += synapse0x2c547a0();
   input += synapse0x2c547e0();
   input += synapse0x2c54820();
   input += synapse0x2c54860();
   input += synapse0x2c548a0();
   input += synapse0x2c548e0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c53f50() {
   double input = input0x2c53f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c54920() {
   double input = -0.185886;
   input += synapse0x2c54c60();
   input += synapse0x2c54ca0();
   input += synapse0x2c54ce0();
   input += synapse0x2c54d20();
   input += synapse0x2c54d60();
   input += synapse0x2c54da0();
   input += synapse0x2c54de0();
   input += synapse0x2c54e20();
   input += synapse0x2c54e60();
   input += synapse0x2c4d020();
   input += synapse0x2c4d060();
   input += synapse0x2c4d0a0();
   input += synapse0x2c4d0e0();
   input += synapse0x2c4d120();
   input += synapse0x2c4d160();
   input += synapse0x2c4d1a0();
   input += synapse0x2c54ab0();
   input += synapse0x2c54af0();
   input += synapse0x2c4d2f0();
   input += synapse0x2c4d330();
   input += synapse0x2c4d370();
   input += synapse0x2c4d3b0();
   input += synapse0x2c4d3f0();
   input += synapse0x2c4d430();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c54920() {
   double input = input0x2c54920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c4d470() {
   double input = 0.663491;
   input += synapse0x2c4d7b0();
   input += synapse0x2c4d7f0();
   input += synapse0x2c4d830();
   input += synapse0x2c4d870();
   input += synapse0x2c4d8b0();
   input += synapse0x2c4d8f0();
   input += synapse0x2c4d930();
   input += synapse0x2c4d970();
   input += synapse0x2c4d9b0();
   input += synapse0x2c4d9f0();
   input += synapse0x2c4da30();
   input += synapse0x2c4da70();
   input += synapse0x2c4dab0();
   input += synapse0x2c4daf0();
   input += synapse0x2c4db30();
   input += synapse0x2c4db70();
   input += synapse0x2c4d600();
   input += synapse0x2c4d640();
   input += synapse0x2c4dcc0();
   input += synapse0x2c4dd00();
   input += synapse0x2c4dd40();
   input += synapse0x2c4dd80();
   input += synapse0x2c4ddc0();
   input += synapse0x2c4de00();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c4d470() {
   double input = input0x2c4d470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c4de40() {
   double input = -0.214409;
   input += synapse0x2c4dfd0();
   input += synapse0x2c57060();
   input += synapse0x2c570a0();
   input += synapse0x2c570e0();
   input += synapse0x2c57120();
   input += synapse0x2c57160();
   input += synapse0x2c571a0();
   input += synapse0x2c571e0();
   input += synapse0x2c57220();
   input += synapse0x2c57260();
   input += synapse0x2c572a0();
   input += synapse0x2c572e0();
   input += synapse0x2c57320();
   input += synapse0x2c57360();
   input += synapse0x2c573a0();
   input += synapse0x2c573e0();
   input += synapse0x2c56eb0();
   input += synapse0x2c56ef0();
   input += synapse0x2c57530();
   input += synapse0x2c57570();
   input += synapse0x2c575b0();
   input += synapse0x2c575f0();
   input += synapse0x2c57630();
   input += synapse0x2c57670();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c4de40() {
   double input = input0x2c4de40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c576b0() {
   double input = -2.47516;
   input += synapse0x2c579f0();
   input += synapse0x2c57a30();
   input += synapse0x2c57a70();
   input += synapse0x2c57ab0();
   input += synapse0x2c57af0();
   input += synapse0x2c57b30();
   input += synapse0x2c57b70();
   input += synapse0x2c57bb0();
   input += synapse0x2c57bf0();
   input += synapse0x2c57c30();
   input += synapse0x2c57c70();
   input += synapse0x2c57cb0();
   input += synapse0x2c57cf0();
   input += synapse0x2c57d30();
   input += synapse0x2c57d70();
   input += synapse0x2c57db0();
   input += synapse0x2c57840();
   input += synapse0x2c57880();
   input += synapse0x2c57f00();
   input += synapse0x2c57f40();
   input += synapse0x2c57f80();
   input += synapse0x2c57fc0();
   input += synapse0x2c58000();
   input += synapse0x2c58040();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c576b0() {
   double input = input0x2c576b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c58080() {
   double input = 0.553115;
   input += synapse0x2c583c0();
   input += synapse0x2c58400();
   input += synapse0x2c58440();
   input += synapse0x2c58480();
   input += synapse0x2c584c0();
   input += synapse0x2c58500();
   input += synapse0x2c58540();
   input += synapse0x2c58580();
   input += synapse0x2c585c0();
   input += synapse0x2c58600();
   input += synapse0x2c58640();
   input += synapse0x2c58680();
   input += synapse0x2c586c0();
   input += synapse0x2c58700();
   input += synapse0x2c58740();
   input += synapse0x2c58780();
   input += synapse0x2c58210();
   input += synapse0x2c58250();
   input += synapse0x2c588d0();
   input += synapse0x2c58910();
   input += synapse0x2c58950();
   input += synapse0x2c58990();
   input += synapse0x2c589d0();
   input += synapse0x2c58a10();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c58080() {
   double input = input0x2c58080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c58a50() {
   double input = -1.50164;
   input += synapse0x2c58d90();
   input += synapse0x2c58dd0();
   input += synapse0x2c58e10();
   input += synapse0x2c58e50();
   input += synapse0x2c58e90();
   input += synapse0x2c58ed0();
   input += synapse0x2c58f10();
   input += synapse0x2c58f50();
   input += synapse0x2c58f90();
   input += synapse0x2c58fd0();
   input += synapse0x2c59010();
   input += synapse0x2c59050();
   input += synapse0x2c59090();
   input += synapse0x2c590d0();
   input += synapse0x2c59110();
   input += synapse0x2c59150();
   input += synapse0x2c58be0();
   input += synapse0x2c58c20();
   input += synapse0x2c592a0();
   input += synapse0x2c592e0();
   input += synapse0x2c59320();
   input += synapse0x2c59360();
   input += synapse0x2c593a0();
   input += synapse0x2c593e0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c58a50() {
   double input = input0x2c58a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c59420() {
   double input = 0.200221;
   input += synapse0x2c59760();
   input += synapse0x2c597a0();
   input += synapse0x2c597e0();
   input += synapse0x2c59820();
   input += synapse0x2c59860();
   input += synapse0x2c598a0();
   input += synapse0x2c598e0();
   input += synapse0x2c59920();
   input += synapse0x2c59960();
   input += synapse0x2c599a0();
   input += synapse0x2c599e0();
   input += synapse0x2c59a20();
   input += synapse0x2c59a60();
   input += synapse0x2c59aa0();
   input += synapse0x2c59ae0();
   input += synapse0x2c59b20();
   input += synapse0x2c595b0();
   input += synapse0x2c595f0();
   input += synapse0x2c59c70();
   input += synapse0x2c59cb0();
   input += synapse0x2c59cf0();
   input += synapse0x2c59d30();
   input += synapse0x2c59d70();
   input += synapse0x2c59db0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c59420() {
   double input = input0x2c59420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c59df0() {
   double input = 0.828761;
   input += synapse0x2c5a130();
   input += synapse0x2c5a170();
   input += synapse0x2c5a1b0();
   input += synapse0x2c5a1f0();
   input += synapse0x2c5a230();
   input += synapse0x2c5a270();
   input += synapse0x2c5a2b0();
   input += synapse0x2c5a2f0();
   input += synapse0x2c5a330();
   input += synapse0x2c5a370();
   input += synapse0x2c5a3b0();
   input += synapse0x2c5a3f0();
   input += synapse0x2c5a430();
   input += synapse0x2c5a470();
   input += synapse0x2c5a4b0();
   input += synapse0x2c5a4f0();
   input += synapse0x2c59f80();
   input += synapse0x2c59fc0();
   input += synapse0x2c5a640();
   input += synapse0x2c5a680();
   input += synapse0x2c5a6c0();
   input += synapse0x2c5a700();
   input += synapse0x2c5a740();
   input += synapse0x2c5a780();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c59df0() {
   double input = input0x2c59df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c5a7c0() {
   double input = 0.887612;
   input += synapse0x2c5ab00();
   input += synapse0x2c5ab40();
   input += synapse0x2c5ab80();
   input += synapse0x2c5abc0();
   input += synapse0x2c5ac00();
   input += synapse0x2c5ac40();
   input += synapse0x2c5ac80();
   input += synapse0x2c5acc0();
   input += synapse0x2c5ad00();
   input += synapse0x2c5ad40();
   input += synapse0x2c5ad80();
   input += synapse0x2c5adc0();
   input += synapse0x2c5ae00();
   input += synapse0x2c5ae40();
   input += synapse0x2c5ae80();
   input += synapse0x2c5aec0();
   input += synapse0x2c5a950();
   input += synapse0x2c5a990();
   input += synapse0x2c5b010();
   input += synapse0x2c5b050();
   input += synapse0x2c5b090();
   input += synapse0x2c5b0d0();
   input += synapse0x2c5b110();
   input += synapse0x2c5b150();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c5a7c0() {
   double input = input0x2c5a7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c5b190() {
   double input = 1.25876;
   input += synapse0x2c5b4d0();
   input += synapse0x2c5b510();
   input += synapse0x2c5b550();
   input += synapse0x2c5b590();
   input += synapse0x2c5b5d0();
   input += synapse0x2c5b610();
   input += synapse0x2c5b650();
   input += synapse0x2c5b690();
   input += synapse0x2c5b6d0();
   input += synapse0x2c5b710();
   input += synapse0x2c5b750();
   input += synapse0x2c5b790();
   input += synapse0x2c5b7d0();
   input += synapse0x2c5b810();
   input += synapse0x2c5b850();
   input += synapse0x2c5b890();
   input += synapse0x2c5b320();
   input += synapse0x2c5b360();
   input += synapse0x2c5b9e0();
   input += synapse0x2c5ba20();
   input += synapse0x2c5ba60();
   input += synapse0x2c5baa0();
   input += synapse0x2c5bae0();
   input += synapse0x2c5bb20();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c5b190() {
   double input = input0x2c5b190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c5bb60() {
   double input = 1.48599;
   input += synapse0x2c5bea0();
   input += synapse0x2c50470();
   input += synapse0x2c504b0();
   input += synapse0x2c504f0();
   input += synapse0x2c50740();
   input += synapse0x2c50780();
   input += synapse0x2c507c0();
   input += synapse0x2c50a10();
   input += synapse0x2c50a50();
   input += synapse0x2c50ca0();
   input += synapse0x2c50ce0();
   input += synapse0x2c50d20();
   input += synapse0x2c50f70();
   input += synapse0x2c50fb0();
   input += synapse0x2c51200();
   input += synapse0x2c51240();
   input += synapse0x2c5bcf0();
   input += synapse0x2c5bd30();
   input += synapse0x2c51390();
   input += synapse0x2c518a0();
   input += synapse0x2c518e0();
   input += synapse0x2c51920();
   input += synapse0x2c51b70();
   input += synapse0x2c51bb0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c5bb60() {
   double input = input0x2c5bb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c51bf0() {
   double input = 2.91344;
   input += synapse0x2c51460();
   input += synapse0x2c514a0();
   input += synapse0x2c514e0();
   input += synapse0x2c51520();
   input += synapse0x2c51ea0();
   input += synapse0x2c5e1f0();
   input += synapse0x2c5e230();
   input += synapse0x2c5e270();
   input += synapse0x2c5e2b0();
   input += synapse0x2c5e2f0();
   input += synapse0x2c5e330();
   input += synapse0x2c5e370();
   input += synapse0x2c5e3b0();
   input += synapse0x2c5e3f0();
   input += synapse0x2c5e430();
   input += synapse0x2c5e470();
   input += synapse0x2c51d80();
   input += synapse0x2c51dc0();
   input += synapse0x2c5e5c0();
   input += synapse0x2c5e600();
   input += synapse0x2c5e640();
   input += synapse0x2c5e680();
   input += synapse0x2c5e6c0();
   input += synapse0x2c5e700();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c51bf0() {
   double input = input0x2c51bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c5e740() {
   double input = -0.349892;
   input += synapse0x2c5ea80();
   input += synapse0x2c5eac0();
   input += synapse0x2c5eb00();
   input += synapse0x2c5eb40();
   input += synapse0x2c5eb80();
   input += synapse0x2c5ebc0();
   input += synapse0x2c5ec00();
   input += synapse0x2c5ec40();
   input += synapse0x2c5ec80();
   input += synapse0x2c5ecc0();
   input += synapse0x2c5ed00();
   input += synapse0x2c5ed40();
   input += synapse0x2c5ed80();
   input += synapse0x2c5edc0();
   input += synapse0x2c5ee00();
   input += synapse0x2c5ee40();
   input += synapse0x2c5e8d0();
   input += synapse0x2c5e910();
   input += synapse0x2c5ef90();
   input += synapse0x2c5efd0();
   input += synapse0x2c5f010();
   input += synapse0x2c5f050();
   input += synapse0x2c5f090();
   input += synapse0x2c5f0d0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c5e740() {
   double input = input0x2c5e740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c5f110() {
   double input = 0.916529;
   input += synapse0x2c5f450();
   input += synapse0x2c5f490();
   input += synapse0x2c5f4d0();
   input += synapse0x2c5f510();
   input += synapse0x2c5f550();
   input += synapse0x2c5f590();
   input += synapse0x2c5f5d0();
   input += synapse0x2c5f610();
   input += synapse0x2c5f650();
   input += synapse0x2c5f690();
   input += synapse0x2c5f6d0();
   input += synapse0x2c5f710();
   input += synapse0x2c5f750();
   input += synapse0x2c5f790();
   input += synapse0x2c5f7d0();
   input += synapse0x2c5f810();
   input += synapse0x2c5f2a0();
   input += synapse0x2c5f2e0();
   input += synapse0x2c5f960();
   input += synapse0x2c5f9a0();
   input += synapse0x2c5f9e0();
   input += synapse0x2c5fa20();
   input += synapse0x2c5fa60();
   input += synapse0x2c5faa0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c5f110() {
   double input = input0x2c5f110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c5fae0() {
   double input = 0.19558;
   input += synapse0x2c5fe20();
   input += synapse0x2c5fe60();
   input += synapse0x2c5fea0();
   input += synapse0x2c5fee0();
   input += synapse0x2c5ff20();
   input += synapse0x2c5ff60();
   input += synapse0x2c5ffa0();
   input += synapse0x2c5ffe0();
   input += synapse0x2c60020();
   input += synapse0x2c60060();
   input += synapse0x2c600a0();
   input += synapse0x2c600e0();
   input += synapse0x2c60120();
   input += synapse0x2c60160();
   input += synapse0x2c601a0();
   input += synapse0x2c601e0();
   input += synapse0x2c5fc70();
   input += synapse0x2c5fcb0();
   input += synapse0x2c60330();
   input += synapse0x2c60370();
   input += synapse0x2c603b0();
   input += synapse0x2c603f0();
   input += synapse0x2c60430();
   input += synapse0x2c60470();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c5fae0() {
   double input = input0x2c5fae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c604b0() {
   double input = -1.56981;
   input += synapse0x2c607f0();
   input += synapse0x2c60830();
   input += synapse0x2c60870();
   input += synapse0x2c608b0();
   input += synapse0x2c608f0();
   input += synapse0x2c60930();
   input += synapse0x2c60970();
   input += synapse0x2c609b0();
   input += synapse0x2c609f0();
   input += synapse0x2c60a30();
   input += synapse0x2c60a70();
   input += synapse0x2c60ab0();
   input += synapse0x2c60af0();
   input += synapse0x2c60b30();
   input += synapse0x2c60b70();
   input += synapse0x2c60bb0();
   input += synapse0x2c60640();
   input += synapse0x2c60680();
   input += synapse0x2c60d00();
   input += synapse0x2c60d40();
   input += synapse0x2c60d80();
   input += synapse0x2c60dc0();
   input += synapse0x2c60e00();
   input += synapse0x2c60e40();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c604b0() {
   double input = input0x2c604b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c60e80() {
   double input = 2.01461;
   input += synapse0x2c611c0();
   input += synapse0x2c61200();
   input += synapse0x2c61240();
   input += synapse0x2c61280();
   input += synapse0x2c612c0();
   input += synapse0x2c61300();
   input += synapse0x2c61340();
   input += synapse0x2c61380();
   input += synapse0x2c613c0();
   input += synapse0x2c61400();
   input += synapse0x2c61440();
   input += synapse0x2c61480();
   input += synapse0x2c614c0();
   input += synapse0x2c61500();
   input += synapse0x2c61540();
   input += synapse0x2c61580();
   input += synapse0x2c61010();
   input += synapse0x2c61050();
   input += synapse0x2c616d0();
   input += synapse0x2c61710();
   input += synapse0x2c61750();
   input += synapse0x2c61790();
   input += synapse0x2c617d0();
   input += synapse0x2c61810();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c60e80() {
   double input = input0x2c60e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c61850() {
   double input = -2.04918;
   input += synapse0x2c61b90();
   input += synapse0x2c61bd0();
   input += synapse0x2c61c10();
   input += synapse0x2c61c50();
   input += synapse0x2c61c90();
   input += synapse0x2c61cd0();
   input += synapse0x2c61d10();
   input += synapse0x2c61d50();
   input += synapse0x2c61d90();
   input += synapse0x2c61dd0();
   input += synapse0x2c61e10();
   input += synapse0x2c61e50();
   input += synapse0x2c61e90();
   input += synapse0x2c61ed0();
   input += synapse0x2c61f10();
   input += synapse0x2c61f50();
   input += synapse0x2c619e0();
   input += synapse0x2c61a20();
   input += synapse0x2c620a0();
   input += synapse0x2c620e0();
   input += synapse0x2c62120();
   input += synapse0x2c62160();
   input += synapse0x2c621a0();
   input += synapse0x2c621e0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c61850() {
   double input = input0x2c61850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c62220() {
   double input = 0.496903;
   input += synapse0x2c62560();
   input += synapse0x2c625a0();
   input += synapse0x2c625e0();
   input += synapse0x2c62620();
   input += synapse0x2c62660();
   input += synapse0x2c626a0();
   input += synapse0x2c626e0();
   input += synapse0x2c62720();
   input += synapse0x2c62760();
   input += synapse0x2c627a0();
   input += synapse0x2c627e0();
   input += synapse0x2c62820();
   input += synapse0x2c62860();
   input += synapse0x2c628a0();
   input += synapse0x2c628e0();
   input += synapse0x2c62920();
   input += synapse0x2c623b0();
   input += synapse0x2c623f0();
   input += synapse0x2c62a70();
   input += synapse0x2c62ab0();
   input += synapse0x2c62af0();
   input += synapse0x2c62b30();
   input += synapse0x2c62b70();
   input += synapse0x2c62bb0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c62220() {
   double input = input0x2c62220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c62bf0() {
   double input = 0.328689;
   input += synapse0x2c4b660();
   input += synapse0x2c4b6a0();
   input += synapse0x2c4b6e0();
   input += synapse0x2c4b720();
   input += synapse0x2c4b760();
   input += synapse0x2c4b7a0();
   input += synapse0x2c4b7e0();
   input += synapse0x2c4b820();
   input += synapse0x2c63340();
   input += synapse0x2c63380();
   input += synapse0x2c633c0();
   input += synapse0x2c63400();
   input += synapse0x2c63440();
   input += synapse0x2c63480();
   input += synapse0x2c634c0();
   input += synapse0x2c63500();
   input += synapse0x2c62d80();
   input += synapse0x2c62dc0();
   input += synapse0x2c63650();
   input += synapse0x2c63690();
   input += synapse0x2c636d0();
   input += synapse0x2c63710();
   input += synapse0x2c63750();
   input += synapse0x2c63790();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c62bf0() {
   double input = input0x2c62bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c637d0() {
   double input = 0.605921;
   input += synapse0x2c63b10();
   input += synapse0x2c63b50();
   input += synapse0x2c63b90();
   input += synapse0x2c63bd0();
   input += synapse0x2c63c10();
   input += synapse0x2c63c50();
   input += synapse0x2c63c90();
   input += synapse0x2c63cd0();
   input += synapse0x2c63d10();
   input += synapse0x2c63d50();
   input += synapse0x2c63d90();
   input += synapse0x2c63dd0();
   input += synapse0x2c63e10();
   input += synapse0x2c63e50();
   input += synapse0x2c63e90();
   input += synapse0x2c63ed0();
   input += synapse0x2c63960();
   input += synapse0x2c639a0();
   input += synapse0x2c64020();
   input += synapse0x2c64060();
   input += synapse0x2c640a0();
   input += synapse0x2c640e0();
   input += synapse0x2c64120();
   input += synapse0x2c64160();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c637d0() {
   double input = input0x2c637d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c641a0() {
   double input = 0.721438;
   input += synapse0x2c644e0();
   input += synapse0x2c64520();
   input += synapse0x2c64560();
   input += synapse0x2c645a0();
   input += synapse0x2c645e0();
   input += synapse0x2c64620();
   input += synapse0x2c64660();
   input += synapse0x2c646a0();
   input += synapse0x2c646e0();
   input += synapse0x2c64720();
   input += synapse0x2c64760();
   input += synapse0x2c647a0();
   input += synapse0x2c647e0();
   input += synapse0x2c64820();
   input += synapse0x2c64860();
   input += synapse0x2c648a0();
   input += synapse0x2c64330();
   input += synapse0x2c64370();
   input += synapse0x2c54ea0();
   input += synapse0x2c54ee0();
   input += synapse0x2c54f20();
   input += synapse0x2c54f60();
   input += synapse0x2c54fa0();
   input += synapse0x2c54fe0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c641a0() {
   double input = input0x2c641a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c55020() {
   double input = -0.738556;
   input += synapse0x2c55360();
   input += synapse0x2c553a0();
   input += synapse0x2c553e0();
   input += synapse0x2c55420();
   input += synapse0x2c55460();
   input += synapse0x2c554a0();
   input += synapse0x2c554e0();
   input += synapse0x2c55520();
   input += synapse0x2c55560();
   input += synapse0x2c555a0();
   input += synapse0x2c555e0();
   input += synapse0x2c55620();
   input += synapse0x2c55660();
   input += synapse0x2c556a0();
   input += synapse0x2c556e0();
   input += synapse0x2c55720();
   input += synapse0x2c551b0();
   input += synapse0x2c551f0();
   input += synapse0x2c55870();
   input += synapse0x2c558b0();
   input += synapse0x2c558f0();
   input += synapse0x2c55930();
   input += synapse0x2c55970();
   input += synapse0x2c559b0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c55020() {
   double input = input0x2c55020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c559f0() {
   double input = -0.794293;
   input += synapse0x2c55d30();
   input += synapse0x2c55d70();
   input += synapse0x2c55db0();
   input += synapse0x2c55df0();
   input += synapse0x2c55e30();
   input += synapse0x2c55e70();
   input += synapse0x2c55eb0();
   input += synapse0x2c55ef0();
   input += synapse0x2c55f30();
   input += synapse0x2c55f70();
   input += synapse0x2c55fb0();
   input += synapse0x2c55ff0();
   input += synapse0x2c56030();
   input += synapse0x2c56070();
   input += synapse0x2c560b0();
   input += synapse0x2c560f0();
   input += synapse0x2c55b80();
   input += synapse0x2c55bc0();
   input += synapse0x2c56240();
   input += synapse0x2c56280();
   input += synapse0x2c562c0();
   input += synapse0x2c56300();
   input += synapse0x2c56340();
   input += synapse0x2c56380();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c559f0() {
   double input = input0x2c559f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c563c0() {
   double input = -0.949533;
   input += synapse0x2c56700();
   input += synapse0x2c56740();
   input += synapse0x2c56780();
   input += synapse0x2c567c0();
   input += synapse0x2c56800();
   input += synapse0x2c56840();
   input += synapse0x2c56880();
   input += synapse0x2c568c0();
   input += synapse0x2c56900();
   input += synapse0x2c56940();
   input += synapse0x2c56980();
   input += synapse0x2c569c0();
   input += synapse0x2c56a00();
   input += synapse0x2c56a40();
   input += synapse0x2c56a80();
   input += synapse0x2c56ac0();
   input += synapse0x2c56550();
   input += synapse0x2c56590();
   input += synapse0x2c56c10();
   input += synapse0x2c56c50();
   input += synapse0x2c56c90();
   input += synapse0x2c56cd0();
   input += synapse0x2c56d10();
   input += synapse0x2c56d50();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c563c0() {
   double input = input0x2c563c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c68a00() {
   double input = -0.158775;
   input += synapse0x2c68c20();
   input += synapse0x2c68c60();
   input += synapse0x2c68ca0();
   input += synapse0x2c68ce0();
   input += synapse0x2c68d20();
   input += synapse0x2c68d60();
   input += synapse0x2c68da0();
   input += synapse0x2c68de0();
   input += synapse0x2c68e20();
   input += synapse0x2c68e60();
   input += synapse0x2c68ea0();
   input += synapse0x2c68ee0();
   input += synapse0x2c68f20();
   input += synapse0x2c68f60();
   input += synapse0x2c68fa0();
   input += synapse0x2c68fe0();
   input += synapse0x2c56d90();
   input += synapse0x2c56dd0();
   input += synapse0x2c69130();
   input += synapse0x2c69170();
   input += synapse0x2c691b0();
   input += synapse0x2c691f0();
   input += synapse0x2c69230();
   input += synapse0x2c69270();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c68a00() {
   double input = input0x2c68a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c692b0() {
   double input = -0.264441;
   input += synapse0x2c695f0();
   input += synapse0x2c69630();
   input += synapse0x2c69670();
   input += synapse0x2c696b0();
   input += synapse0x2c696f0();
   input += synapse0x2c69730();
   input += synapse0x2c69770();
   input += synapse0x2c697b0();
   input += synapse0x2c697f0();
   input += synapse0x2c69830();
   input += synapse0x2c69870();
   input += synapse0x2c698b0();
   input += synapse0x2c698f0();
   input += synapse0x2c69930();
   input += synapse0x2c69970();
   input += synapse0x2c699b0();
   input += synapse0x2c69440();
   input += synapse0x2c69480();
   input += synapse0x2c69b00();
   input += synapse0x2c69b40();
   input += synapse0x2c69b80();
   input += synapse0x2c69bc0();
   input += synapse0x2c69c00();
   input += synapse0x2c69c40();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c692b0() {
   double input = input0x2c692b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c69c80() {
   double input = 0.464246;
   input += synapse0x2c69fc0();
   input += synapse0x2c6a000();
   input += synapse0x2c6a040();
   input += synapse0x2c6a080();
   input += synapse0x2c6a0c0();
   input += synapse0x2c6a100();
   input += synapse0x2c6a140();
   input += synapse0x2c6a180();
   input += synapse0x2c6a1c0();
   input += synapse0x2c6a200();
   input += synapse0x2c6a240();
   input += synapse0x2c6a280();
   input += synapse0x2c6a2c0();
   input += synapse0x2c6a300();
   input += synapse0x2c6a340();
   input += synapse0x2c6a380();
   input += synapse0x2c69e10();
   input += synapse0x2c69e50();
   input += synapse0x2c6a4d0();
   input += synapse0x2c6a510();
   input += synapse0x2c6a550();
   input += synapse0x2c6a590();
   input += synapse0x2c6a5d0();
   input += synapse0x2c6a610();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c69c80() {
   double input = input0x2c69c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c6a650() {
   double input = 0.487395;
   input += synapse0x2c6a990();
   input += synapse0x2c6a9d0();
   input += synapse0x2c6aa10();
   input += synapse0x2c6aa50();
   input += synapse0x2c6aa90();
   input += synapse0x2c6aad0();
   input += synapse0x2c6ab10();
   input += synapse0x2c6ab50();
   input += synapse0x2c6ab90();
   input += synapse0x2c6abd0();
   input += synapse0x2c6ac10();
   input += synapse0x2c6ac50();
   input += synapse0x2c6ac90();
   input += synapse0x2c6acd0();
   input += synapse0x2c6ad10();
   input += synapse0x2c6ad50();
   input += synapse0x2c6a7e0();
   input += synapse0x2c6a820();
   input += synapse0x2c6aea0();
   input += synapse0x2c6aee0();
   input += synapse0x2c6af20();
   input += synapse0x2c6af60();
   input += synapse0x2c6afa0();
   input += synapse0x2c6afe0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c6a650() {
   double input = input0x2c6a650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c71850() {
   double input = 0.245559;
   input += synapse0x2c47580();
   input += synapse0x2c475c0();
   input += synapse0x2c48a90();
   input += synapse0x2c48ad0();
   input += synapse0x2c49460();
   input += synapse0x2c494a0();
   input += synapse0x2c4a230();
   input += synapse0x2c4a270();
   input += synapse0x2c4ac00();
   input += synapse0x2c4ac40();
   input += synapse0x2c4b5d0();
   input += synapse0x2c4b610();
   input += synapse0x2c4c0b0();
   input += synapse0x2c4c0f0();
   input += synapse0x2c4ca80();
   input += synapse0x2c4cac0();
   input += synapse0x2c49b60();
   input += synapse0x2c49ba0();
   input += synapse0x2c4e630();
   input += synapse0x2c4e670();
   input += synapse0x2c4f000();
   input += synapse0x2c4f040();
   input += synapse0x2c4f9d0();
   input += synapse0x2c4fa10();
   input += synapse0x2c503a0();
   input += synapse0x2c503e0();
   input += synapse0x2c44510();
   input += synapse0x2c44550();
   input += synapse0x2c52490();
   input += synapse0x2c524d0();
   input += synapse0x2c52e60();
   input += synapse0x2c52ea0();
   input += synapse0x2c53830();
   input += synapse0x2c53870();
   input += synapse0x2c54200();
   input += synapse0x2c54240();
   input += synapse0x2c54bd0();
   input += synapse0x2c54c10();
   input += synapse0x2c4d720();
   input += synapse0x2c4d760();
   input += synapse0x2c56fd0();
   input += synapse0x2c57010();
   input += synapse0x2c57960();
   input += synapse0x2c579a0();
   input += synapse0x2c58330();
   input += synapse0x2c58370();
   input += synapse0x2c58d00();
   input += synapse0x2c58d40();
   input += synapse0x2c596d0();
   input += synapse0x2c59710();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c71850() {
   double input = input0x2c71850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c71bf0() {
   double input = 0.15282;
   input += synapse0x2c5be10();
   input += synapse0x2c5be50();
   input += synapse0x2c513d0();
   input += synapse0x2c51410();
   input += synapse0x2c5e9f0();
   input += synapse0x2c5ea30();
   input += synapse0x2c5f3c0();
   input += synapse0x2c5f400();
   input += synapse0x2c5fd90();
   input += synapse0x2c5fdd0();
   input += synapse0x2c60760();
   input += synapse0x2c607a0();
   input += synapse0x2c61130();
   input += synapse0x2c61170();
   input += synapse0x2c61b00();
   input += synapse0x2c61b40();
   input += synapse0x2c624d0();
   input += synapse0x2c62510();
   input += synapse0x2c62ea0();
   input += synapse0x2c62ee0();
   input += synapse0x2c63a80();
   input += synapse0x2c63ac0();
   input += synapse0x2c64450();
   input += synapse0x2c64490();
   input += synapse0x2c552d0();
   input += synapse0x2c55310();
   input += synapse0x2c55ca0();
   input += synapse0x2c55ce0();
   input += synapse0x2c56670();
   input += synapse0x2c566b0();
   input += synapse0x2c68b90();
   input += synapse0x2c68bd0();
   input += synapse0x2c69560();
   input += synapse0x2c695a0();
   input += synapse0x2c69f30();
   input += synapse0x2c69f70();
   input += synapse0x2c6a900();
   input += synapse0x2c6a940();
   input += synapse0x2c467f0();
   input += synapse0x2c46830();
   input += synapse0x2c5a0a0();
   input += synapse0x2c5a0e0();
   input += synapse0x2c6b020();
   input += synapse0x2c6b060();
   input += synapse0x2c6b0a0();
   input += synapse0x2c6b0e0();
   input += synapse0x2c71f90();
   input += synapse0x2c71fd0();
   input += synapse0x2c72010();
   input += synapse0x2c72050();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c71bf0() {
   double input = input0x2c71bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c72090() {
   double input = -0.0084829;
   input += synapse0x2c723d0();
   input += synapse0x2c72410();
   input += synapse0x2c72450();
   input += synapse0x2c72490();
   input += synapse0x2c724d0();
   input += synapse0x2c72510();
   input += synapse0x2c72550();
   input += synapse0x2c72590();
   input += synapse0x2c725d0();
   input += synapse0x2c72610();
   input += synapse0x2c72650();
   input += synapse0x2c72690();
   input += synapse0x2c726d0();
   input += synapse0x2c72710();
   input += synapse0x2c72750();
   input += synapse0x2c72790();
   input += synapse0x2c72220();
   input += synapse0x2c72260();
   input += synapse0x2c728e0();
   input += synapse0x2c72920();
   input += synapse0x2c72960();
   input += synapse0x2c729a0();
   input += synapse0x2c729e0();
   input += synapse0x2c72a20();
   input += synapse0x2c72a60();
   input += synapse0x2c72aa0();
   input += synapse0x2c72ae0();
   input += synapse0x2c72b20();
   input += synapse0x2c72b60();
   input += synapse0x2c72ba0();
   input += synapse0x2c72be0();
   input += synapse0x2c72c20();
   input += synapse0x2c727d0();
   input += synapse0x2c72810();
   input += synapse0x2c72850();
   input += synapse0x2c72890();
   input += synapse0x2c72e70();
   input += synapse0x2c72eb0();
   input += synapse0x2c72ef0();
   input += synapse0x2c72f30();
   input += synapse0x2c72f70();
   input += synapse0x2c72fb0();
   input += synapse0x2c72ff0();
   input += synapse0x2c73030();
   input += synapse0x2c73070();
   input += synapse0x2c730b0();
   input += synapse0x2c730f0();
   input += synapse0x2c73130();
   input += synapse0x2c73170();
   input += synapse0x2c731b0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c72090() {
   double input = input0x2c72090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c731f0() {
   double input = -0.277657;
   input += synapse0x2c73530();
   input += synapse0x2c73570();
   input += synapse0x2c735b0();
   input += synapse0x2c735f0();
   input += synapse0x2c73630();
   input += synapse0x2c73670();
   input += synapse0x2c736b0();
   input += synapse0x2c736f0();
   input += synapse0x2c73730();
   input += synapse0x2c73770();
   input += synapse0x2c737b0();
   input += synapse0x2c737f0();
   input += synapse0x2c73830();
   input += synapse0x2c73870();
   input += synapse0x2c738b0();
   input += synapse0x2c738f0();
   input += synapse0x2c73380();
   input += synapse0x2c733c0();
   input += synapse0x2c73a40();
   input += synapse0x2c73a80();
   input += synapse0x2c73ac0();
   input += synapse0x2c73b00();
   input += synapse0x2c73b40();
   input += synapse0x2c73b80();
   input += synapse0x2c73bc0();
   input += synapse0x2c73c00();
   input += synapse0x2c73c40();
   input += synapse0x2c73c80();
   input += synapse0x2c73cc0();
   input += synapse0x2c73d00();
   input += synapse0x2c73d40();
   input += synapse0x2c73d80();
   input += synapse0x2c73930();
   input += synapse0x2c73970();
   input += synapse0x2c739b0();
   input += synapse0x2c739f0();
   input += synapse0x2c73fd0();
   input += synapse0x2c74010();
   input += synapse0x2c74050();
   input += synapse0x2c74090();
   input += synapse0x2c740d0();
   input += synapse0x2c74110();
   input += synapse0x2c74150();
   input += synapse0x2c74190();
   input += synapse0x2c741d0();
   input += synapse0x2c74210();
   input += synapse0x2c74250();
   input += synapse0x2c74290();
   input += synapse0x2c742d0();
   input += synapse0x2c74310();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c731f0() {
   double input = input0x2c731f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c74350() {
   double input = 0.00403585;
   input += synapse0x2c74690();
   input += synapse0x2c746d0();
   input += synapse0x2c74710();
   input += synapse0x2c74750();
   input += synapse0x2c74790();
   input += synapse0x2c747d0();
   input += synapse0x2c74810();
   input += synapse0x2c74850();
   input += synapse0x2c74890();
   input += synapse0x2c748d0();
   input += synapse0x2c74910();
   input += synapse0x2c74950();
   input += synapse0x2c74990();
   input += synapse0x2c749d0();
   input += synapse0x2c74a10();
   input += synapse0x2c74a50();
   input += synapse0x2c744e0();
   input += synapse0x2c74520();
   input += synapse0x2c74ba0();
   input += synapse0x2c74be0();
   input += synapse0x2c74c20();
   input += synapse0x2c74c60();
   input += synapse0x2c74ca0();
   input += synapse0x2c74ce0();
   input += synapse0x2c74d20();
   input += synapse0x2c74d60();
   input += synapse0x2c74da0();
   input += synapse0x2c74de0();
   input += synapse0x2c74e20();
   input += synapse0x2c74e60();
   input += synapse0x2c74ea0();
   input += synapse0x2c74ee0();
   input += synapse0x2c74a90();
   input += synapse0x2c74ad0();
   input += synapse0x2c74b10();
   input += synapse0x2c74b50();
   input += synapse0x2c75130();
   input += synapse0x2c75170();
   input += synapse0x2c751b0();
   input += synapse0x2c751f0();
   input += synapse0x2c75230();
   input += synapse0x2c75270();
   input += synapse0x2c752b0();
   input += synapse0x2c752f0();
   input += synapse0x2c75330();
   input += synapse0x2c75370();
   input += synapse0x2c753b0();
   input += synapse0x2c753f0();
   input += synapse0x2c75430();
   input += synapse0x2c75470();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c74350() {
   double input = input0x2c74350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x2c754b0() {
   double input = 7.61815;
   input += synapse0x2c46590();
   input += synapse0x2c756d0();
   input += synapse0x2c75710();
   input += synapse0x2c75750();
   input += synapse0x2c75790();
   return input;
}

double NNfunction_ss_cLdL::neuron0x2c754b0() {
   double input = input0x2c754b0();
   return (input * 1)+0;
}

double NNfunction_ss_cLdL::synapse0x2a013e0() {
   return (neuron0x2c41570()*0.0611258);
}

double NNfunction_ss_cLdL::synapse0x2c41430() {
   return (neuron0x2c418b0()*0.110227);
}

double NNfunction_ss_cLdL::synapse0x2c41470() {
   return (neuron0x2c41bf0()*-0.467269);
}

double NNfunction_ss_cLdL::synapse0x2c46880() {
   return (neuron0x2c41f30()*-0.0733371);
}

double NNfunction_ss_cLdL::synapse0x2c468c0() {
   return (neuron0x2c42270()*-0.0952797);
}

double NNfunction_ss_cLdL::synapse0x2c46900() {
   return (neuron0x2c425b0()*-0.149905);
}

double NNfunction_ss_cLdL::synapse0x2c46940() {
   return (neuron0x2c428f0()*0.0536731);
}

double NNfunction_ss_cLdL::synapse0x2c46980() {
   return (neuron0x2c42c30()*-0.137406);
}

double NNfunction_ss_cLdL::synapse0x2c469c0() {
   return (neuron0x2c42f70()*0.00626188);
}

double NNfunction_ss_cLdL::synapse0x2c46a00() {
   return (neuron0x2c432b0()*0.0239707);
}

double NNfunction_ss_cLdL::synapse0x2c46a40() {
   return (neuron0x2c435f0()*0.0269822);
}

double NNfunction_ss_cLdL::synapse0x2c46a80() {
   return (neuron0x2c43930()*-0.46577);
}

double NNfunction_ss_cLdL::synapse0x2c46ac0() {
   return (neuron0x2c43c70()*-0.239254);
}

double NNfunction_ss_cLdL::synapse0x2c46b00() {
   return (neuron0x2c43fb0()*-0.100255);
}

double NNfunction_ss_cLdL::synapse0x2c46b40() {
   return (neuron0x2c442f0()*0.0460874);
}

double NNfunction_ss_cLdL::synapse0x2c46b80() {
   return (neuron0x2c44630()*0.413663);
}

double NNfunction_ss_cLdL::synapse0x2c413a0() {
   return (neuron0x2c44970()*-0.167467);
}

double NNfunction_ss_cLdL::synapse0x2c413e0() {
   return (neuron0x2c44ed0()*0.338118);
}

double NNfunction_ss_cLdL::synapse0x29f2c80() {
   return (neuron0x2c450f0()*0.199673);
}

double NNfunction_ss_cLdL::synapse0x29f2cc0() {
   return (neuron0x2c45430()*0.00809572);
}

double NNfunction_ss_cLdL::synapse0x2c46de0() {
   return (neuron0x2c45770()*0.145099);
}

double NNfunction_ss_cLdL::synapse0x2c46e20() {
   return (neuron0x2c45ab0()*0.0921871);
}

double NNfunction_ss_cLdL::synapse0x2c46e60() {
   return (neuron0x2c45df0()*-0.016215);
}

double NNfunction_ss_cLdL::synapse0x2c46ea0() {
   return (neuron0x2c46130()*0.00671521);
}

double NNfunction_ss_cLdL::synapse0x2c47220() {
   return (neuron0x2c41570()*0.194421);
}

double NNfunction_ss_cLdL::synapse0x2c47260() {
   return (neuron0x2c418b0()*-0.11843);
}

double NNfunction_ss_cLdL::synapse0x2c472a0() {
   return (neuron0x2c41bf0()*-0.137115);
}

double NNfunction_ss_cLdL::synapse0x2c472e0() {
   return (neuron0x2c41f30()*0.891988);
}

double NNfunction_ss_cLdL::synapse0x2c47320() {
   return (neuron0x2c42270()*0.115459);
}

double NNfunction_ss_cLdL::synapse0x2c47360() {
   return (neuron0x2c425b0()*0.161387);
}

double NNfunction_ss_cLdL::synapse0x2c473a0() {
   return (neuron0x2c428f0()*-0.331948);
}

double NNfunction_ss_cLdL::synapse0x2c473e0() {
   return (neuron0x2c42c30()*0.0766672);
}

double NNfunction_ss_cLdL::synapse0x2c47420() {
   return (neuron0x2c42f70()*0.0553668);
}

double NNfunction_ss_cLdL::synapse0x2c46cd0() {
   return (neuron0x2c432b0()*0.135185);
}

double NNfunction_ss_cLdL::synapse0x2c46d10() {
   return (neuron0x2c435f0()*0.0366129);
}

double NNfunction_ss_cLdL::synapse0x2c46d50() {
   return (neuron0x2c43930()*-0.399584);
}

double NNfunction_ss_cLdL::synapse0x2c46d90() {
   return (neuron0x2c43c70()*-0.90109);
}

double NNfunction_ss_cLdL::synapse0x2c47670() {
   return (neuron0x2c43fb0()*-0.427206);
}

double NNfunction_ss_cLdL::synapse0x2c476b0() {
   return (neuron0x2c442f0()*-0.0324152);
}

double NNfunction_ss_cLdL::synapse0x2c476f0() {
   return (neuron0x2c44630()*-0.016477);
}

double NNfunction_ss_cLdL::synapse0x2c47070() {
   return (neuron0x2c44970()*-0.224226);
}

double NNfunction_ss_cLdL::synapse0x2c470b0() {
   return (neuron0x2c44ed0()*0.0331066);
}

double NNfunction_ss_cLdL::synapse0x2c47840() {
   return (neuron0x2c450f0()*-0.00687473);
}

double NNfunction_ss_cLdL::synapse0x2c47880() {
   return (neuron0x2c45430()*0.145115);
}

double NNfunction_ss_cLdL::synapse0x2c478c0() {
   return (neuron0x2c45770()*0.0260287);
}

double NNfunction_ss_cLdL::synapse0x2c47900() {
   return (neuron0x2c45ab0()*-0.0600597);
}

double NNfunction_ss_cLdL::synapse0x2c47940() {
   return (neuron0x2c45df0()*-0.00379876);
}

double NNfunction_ss_cLdL::synapse0x2c47980() {
   return (neuron0x2c46130()*0.180571);
}

double NNfunction_ss_cLdL::synapse0x2c47d00() {
   return (neuron0x2c41570()*-0.0638026);
}

double NNfunction_ss_cLdL::synapse0x2c47d40() {
   return (neuron0x2c418b0()*-0.0248724);
}

double NNfunction_ss_cLdL::synapse0x2c47d80() {
   return (neuron0x2c41bf0()*-0.131282);
}

double NNfunction_ss_cLdL::synapse0x2c47dc0() {
   return (neuron0x2c41f30()*-0.822941);
}

double NNfunction_ss_cLdL::synapse0x2c47e00() {
   return (neuron0x2c42270()*-0.0197856);
}

double NNfunction_ss_cLdL::synapse0x2c47e40() {
   return (neuron0x2c425b0()*0.147592);
}

double NNfunction_ss_cLdL::synapse0x2c47e80() {
   return (neuron0x2c428f0()*0.0521406);
}

double NNfunction_ss_cLdL::synapse0x2c47ec0() {
   return (neuron0x2c42c30()*0.222693);
}

double NNfunction_ss_cLdL::synapse0x2c47f00() {
   return (neuron0x2c42f70()*-0.0135827);
}

double NNfunction_ss_cLdL::synapse0x2c47f40() {
   return (neuron0x2c432b0()*-0.0230491);
}

double NNfunction_ss_cLdL::synapse0x2c47f80() {
   return (neuron0x2c435f0()*-0.0516802);
}

double NNfunction_ss_cLdL::synapse0x2c47fc0() {
   return (neuron0x2c43930()*-0.140602);
}

double NNfunction_ss_cLdL::synapse0x2c48000() {
   return (neuron0x2c43c70()*-0.333173);
}

double NNfunction_ss_cLdL::synapse0x2c48040() {
   return (neuron0x2c43fb0()*0.0287086);
}

double NNfunction_ss_cLdL::synapse0x2c48080() {
   return (neuron0x2c442f0()*-0.0237458);
}

double NNfunction_ss_cLdL::synapse0x2c480c0() {
   return (neuron0x2c44630()*0.0464642);
}

double NNfunction_ss_cLdL::synapse0x2c47b50() {
   return (neuron0x2c44970()*0.0196455);
}

double NNfunction_ss_cLdL::synapse0x2c47b90() {
   return (neuron0x2c44ed0()*0.0193692);
}

double NNfunction_ss_cLdL::synapse0x2a00ad0() {
   return (neuron0x2c450f0()*0.0392716);
}

double NNfunction_ss_cLdL::synapse0x2a00b10() {
   return (neuron0x2c45430()*-0.024655);
}

double NNfunction_ss_cLdL::synapse0x2c30600() {
   return (neuron0x2c45770()*0.00917998);
}

double NNfunction_ss_cLdL::synapse0x2c30640() {
   return (neuron0x2c45ab0()*0.00828336);
}

double NNfunction_ss_cLdL::synapse0x2c30680() {
   return (neuron0x2c45df0()*-0.0190456);
}

double NNfunction_ss_cLdL::synapse0x2c414b0() {
   return (neuron0x2c46130()*-0.00653778);
}

double NNfunction_ss_cLdL::synapse0x2c47610() {
   return (neuron0x2c41570()*-0.0206043);
}

double NNfunction_ss_cLdL::synapse0x2c414f0() {
   return (neuron0x2c418b0()*-0.0124775);
}

double NNfunction_ss_cLdL::synapse0x2c41530() {
   return (neuron0x2c41bf0()*-0.114051);
}

double NNfunction_ss_cLdL::synapse0x2c48210() {
   return (neuron0x2c41f30()*-1.74505);
}

double NNfunction_ss_cLdL::synapse0x2c48250() {
   return (neuron0x2c42270()*-0.0238042);
}

double NNfunction_ss_cLdL::synapse0x2c48290() {
   return (neuron0x2c425b0()*-0.00600566);
}

double NNfunction_ss_cLdL::synapse0x2c482d0() {
   return (neuron0x2c428f0()*-0.0266508);
}

double NNfunction_ss_cLdL::synapse0x2c48310() {
   return (neuron0x2c42c30()*0.0288168);
}

double NNfunction_ss_cLdL::synapse0x2c48350() {
   return (neuron0x2c42f70()*-0.0161049);
}

double NNfunction_ss_cLdL::synapse0x2c48390() {
   return (neuron0x2c432b0()*0.00274782);
}

double NNfunction_ss_cLdL::synapse0x2c483d0() {
   return (neuron0x2c435f0()*0.00302101);
}

double NNfunction_ss_cLdL::synapse0x2c48410() {
   return (neuron0x2c43930()*-1.15505);
}

double NNfunction_ss_cLdL::synapse0x2c48450() {
   return (neuron0x2c43c70()*0.426738);
}

double NNfunction_ss_cLdL::synapse0x2c48490() {
   return (neuron0x2c43fb0()*0.00449338);
}

double NNfunction_ss_cLdL::synapse0x2c484d0() {
   return (neuron0x2c442f0()*-0.0027746);
}

double NNfunction_ss_cLdL::synapse0x2c48510() {
   return (neuron0x2c44630()*0.0246283);
}

double NNfunction_ss_cLdL::synapse0x2c47460() {
   return (neuron0x2c44970()*-0.011462);
}

double NNfunction_ss_cLdL::synapse0x2c474a0() {
   return (neuron0x2c44ed0()*-0.0379187);
}

double NNfunction_ss_cLdL::synapse0x2c48660() {
   return (neuron0x2c450f0()*0.039081);
}

double NNfunction_ss_cLdL::synapse0x2c486a0() {
   return (neuron0x2c45430()*0.00527321);
}

double NNfunction_ss_cLdL::synapse0x2c486e0() {
   return (neuron0x2c45770()*-0.00176797);
}

double NNfunction_ss_cLdL::synapse0x2c48720() {
   return (neuron0x2c45ab0()*0.00643562);
}

double NNfunction_ss_cLdL::synapse0x2c48760() {
   return (neuron0x2c45df0()*0.0142559);
}

double NNfunction_ss_cLdL::synapse0x2c487a0() {
   return (neuron0x2c46130()*0.0197352);
}

double NNfunction_ss_cLdL::synapse0x2c48b20() {
   return (neuron0x2c41570()*0.300688);
}

double NNfunction_ss_cLdL::synapse0x2c48b60() {
   return (neuron0x2c418b0()*0.381664);
}

double NNfunction_ss_cLdL::synapse0x2c48ba0() {
   return (neuron0x2c41bf0()*0.0407273);
}

double NNfunction_ss_cLdL::synapse0x2c48be0() {
   return (neuron0x2c41f30()*0.0794461);
}

double NNfunction_ss_cLdL::synapse0x2c48c20() {
   return (neuron0x2c42270()*-0.00801593);
}

double NNfunction_ss_cLdL::synapse0x2c48c60() {
   return (neuron0x2c425b0()*0.0331037);
}

double NNfunction_ss_cLdL::synapse0x2c48ca0() {
   return (neuron0x2c428f0()*-0.0944223);
}

double NNfunction_ss_cLdL::synapse0x2c48ce0() {
   return (neuron0x2c42c30()*0.236198);
}

double NNfunction_ss_cLdL::synapse0x2c48d20() {
   return (neuron0x2c42f70()*-0.353684);
}

double NNfunction_ss_cLdL::synapse0x2c48d60() {
   return (neuron0x2c432b0()*0.0712669);
}

double NNfunction_ss_cLdL::synapse0x2c48da0() {
   return (neuron0x2c435f0()*0.297015);
}

double NNfunction_ss_cLdL::synapse0x2c48de0() {
   return (neuron0x2c43930()*0.98872);
}

double NNfunction_ss_cLdL::synapse0x2c48e20() {
   return (neuron0x2c43c70()*0.385246);
}

double NNfunction_ss_cLdL::synapse0x2c48e60() {
   return (neuron0x2c43fb0()*-0.0493025);
}

double NNfunction_ss_cLdL::synapse0x2c48ea0() {
   return (neuron0x2c442f0()*-0.494376);
}

double NNfunction_ss_cLdL::synapse0x2c48ee0() {
   return (neuron0x2c44630()*0.297712);
}

double NNfunction_ss_cLdL::synapse0x2c48970() {
   return (neuron0x2c44970()*0.127121);
}

double NNfunction_ss_cLdL::synapse0x2c489b0() {
   return (neuron0x2c44ed0()*0.399157);
}

double NNfunction_ss_cLdL::synapse0x2c49030() {
   return (neuron0x2c450f0()*0.756804);
}

double NNfunction_ss_cLdL::synapse0x2c49070() {
   return (neuron0x2c45430()*-0.123075);
}

double NNfunction_ss_cLdL::synapse0x2c490b0() {
   return (neuron0x2c45770()*0.112784);
}

double NNfunction_ss_cLdL::synapse0x2c490f0() {
   return (neuron0x2c45ab0()*-0.349908);
}

double NNfunction_ss_cLdL::synapse0x2c49130() {
   return (neuron0x2c45df0()*0.102091);
}

double NNfunction_ss_cLdL::synapse0x2c49170() {
   return (neuron0x2c46130()*-0.170529);
}

double NNfunction_ss_cLdL::synapse0x2c494f0() {
   return (neuron0x2c41570()*0.0456145);
}

double NNfunction_ss_cLdL::synapse0x2c49530() {
   return (neuron0x2c418b0()*-0.248566);
}

double NNfunction_ss_cLdL::synapse0x2c49570() {
   return (neuron0x2c41bf0()*0.188276);
}

double NNfunction_ss_cLdL::synapse0x2c495b0() {
   return (neuron0x2c41f30()*0.9268);
}

double NNfunction_ss_cLdL::synapse0x2c495f0() {
   return (neuron0x2c42270()*0.115353);
}

double NNfunction_ss_cLdL::synapse0x2c49630() {
   return (neuron0x2c425b0()*-0.011902);
}

double NNfunction_ss_cLdL::synapse0x2c49670() {
   return (neuron0x2c428f0()*-0.0261796);
}

double NNfunction_ss_cLdL::synapse0x2c496b0() {
   return (neuron0x2c42c30()*0.110185);
}

double NNfunction_ss_cLdL::synapse0x2c496f0() {
   return (neuron0x2c42f70()*-0.0633414);
}

double NNfunction_ss_cLdL::synapse0x2a00e40() {
   return (neuron0x2c432b0()*0.0713937);
}

double NNfunction_ss_cLdL::synapse0x2a00e80() {
   return (neuron0x2c435f0()*0.114124);
}

double NNfunction_ss_cLdL::synapse0x2a00ec0() {
   return (neuron0x2c43930()*0.68082);
}

double NNfunction_ss_cLdL::synapse0x2a00f00() {
   return (neuron0x2c43c70()*0.380802);
}

double NNfunction_ss_cLdL::synapse0x2a00f40() {
   return (neuron0x2c43fb0()*-0.293915);
}

double NNfunction_ss_cLdL::synapse0x2a00f80() {
   return (neuron0x2c442f0()*-0.308083);
}

double NNfunction_ss_cLdL::synapse0x2a00fc0() {
   return (neuron0x2c44630()*-0.392498);
}

double NNfunction_ss_cLdL::synapse0x2c49340() {
   return (neuron0x2c44970()*-0.188917);
}

double NNfunction_ss_cLdL::synapse0x2c49380() {
   return (neuron0x2c44ed0()*-0.363627);
}

double NNfunction_ss_cLdL::synapse0x2a01110() {
   return (neuron0x2c450f0()*-0.74732);
}

double NNfunction_ss_cLdL::synapse0x2a01150() {
   return (neuron0x2c45430()*-0.135686);
}

double NNfunction_ss_cLdL::synapse0x2a01190() {
   return (neuron0x2c45770()*-0.0250322);
}

double NNfunction_ss_cLdL::synapse0x2a011d0() {
   return (neuron0x2c45ab0()*-0.162881);
}

double NNfunction_ss_cLdL::synapse0x2a01210() {
   return (neuron0x2c45df0()*0.165626);
}

double NNfunction_ss_cLdL::synapse0x2c49f40() {
   return (neuron0x2c46130()*0.0555757);
}

double NNfunction_ss_cLdL::synapse0x2c4a2c0() {
   return (neuron0x2c41570()*0.00849587);
}

double NNfunction_ss_cLdL::synapse0x2c4a300() {
   return (neuron0x2c418b0()*0.0176994);
}

double NNfunction_ss_cLdL::synapse0x2c4a340() {
   return (neuron0x2c41bf0()*-0.0759504);
}

double NNfunction_ss_cLdL::synapse0x2c4a380() {
   return (neuron0x2c41f30()*-6.00398);
}

double NNfunction_ss_cLdL::synapse0x2c4a3c0() {
   return (neuron0x2c42270()*-0.0247619);
}

double NNfunction_ss_cLdL::synapse0x2c4a400() {
   return (neuron0x2c425b0()*-0.0274698);
}

double NNfunction_ss_cLdL::synapse0x2c4a440() {
   return (neuron0x2c428f0()*-0.00931178);
}

double NNfunction_ss_cLdL::synapse0x2c4a480() {
   return (neuron0x2c42c30()*0.0101094);
}

double NNfunction_ss_cLdL::synapse0x2c4a4c0() {
   return (neuron0x2c42f70()*-0.0295918);
}

double NNfunction_ss_cLdL::synapse0x2c4a500() {
   return (neuron0x2c432b0()*-0.0201623);
}

double NNfunction_ss_cLdL::synapse0x2c4a540() {
   return (neuron0x2c435f0()*-0.0133656);
}

double NNfunction_ss_cLdL::synapse0x2c4a580() {
   return (neuron0x2c43930()*0.16038);
}

double NNfunction_ss_cLdL::synapse0x2c4a5c0() {
   return (neuron0x2c43c70()*0.568266);
}

double NNfunction_ss_cLdL::synapse0x2c4a600() {
   return (neuron0x2c43fb0()*-0.0408686);
}

double NNfunction_ss_cLdL::synapse0x2c4a640() {
   return (neuron0x2c442f0()*-0.0305098);
}

double NNfunction_ss_cLdL::synapse0x2c4a680() {
   return (neuron0x2c44630()*-0.00782674);
}

double NNfunction_ss_cLdL::synapse0x2c4a110() {
   return (neuron0x2c44970()*0.00979958);
}

double NNfunction_ss_cLdL::synapse0x2c4a150() {
   return (neuron0x2c44ed0()*-0.0355001);
}

double NNfunction_ss_cLdL::synapse0x2c4a7d0() {
   return (neuron0x2c450f0()*-0.0447072);
}

double NNfunction_ss_cLdL::synapse0x2c4a810() {
   return (neuron0x2c45430()*-0.0226178);
}

double NNfunction_ss_cLdL::synapse0x2c4a850() {
   return (neuron0x2c45770()*0.0183223);
}

double NNfunction_ss_cLdL::synapse0x2c4a890() {
   return (neuron0x2c45ab0()*-0.0163762);
}

double NNfunction_ss_cLdL::synapse0x2c4a8d0() {
   return (neuron0x2c45df0()*0.0241296);
}

double NNfunction_ss_cLdL::synapse0x2c4a910() {
   return (neuron0x2c46130()*-0.0266256);
}

double NNfunction_ss_cLdL::synapse0x2c4ac90() {
   return (neuron0x2c41570()*-0.0673628);
}

double NNfunction_ss_cLdL::synapse0x2c4acd0() {
   return (neuron0x2c418b0()*0.00938027);
}

double NNfunction_ss_cLdL::synapse0x2c4ad10() {
   return (neuron0x2c41bf0()*-0.108654);
}

double NNfunction_ss_cLdL::synapse0x2c4ad50() {
   return (neuron0x2c41f30()*0.110716);
}

double NNfunction_ss_cLdL::synapse0x2c4ad90() {
   return (neuron0x2c42270()*-0.00901533);
}

double NNfunction_ss_cLdL::synapse0x2c4add0() {
   return (neuron0x2c425b0()*-0.0665355);
}

double NNfunction_ss_cLdL::synapse0x2c4ae10() {
   return (neuron0x2c428f0()*0.0428879);
}

double NNfunction_ss_cLdL::synapse0x2c4ae50() {
   return (neuron0x2c42c30()*-0.176435);
}

double NNfunction_ss_cLdL::synapse0x2c4ae90() {
   return (neuron0x2c42f70()*-0.012813);
}

double NNfunction_ss_cLdL::synapse0x2c4aed0() {
   return (neuron0x2c432b0()*0.132593);
}

double NNfunction_ss_cLdL::synapse0x2c4af10() {
   return (neuron0x2c435f0()*0.0354656);
}

double NNfunction_ss_cLdL::synapse0x2c4af50() {
   return (neuron0x2c43930()*-0.961561);
}

double NNfunction_ss_cLdL::synapse0x2c4af90() {
   return (neuron0x2c43c70()*0.411562);
}

double NNfunction_ss_cLdL::synapse0x2c4afd0() {
   return (neuron0x2c43fb0()*-0.0840788);
}

double NNfunction_ss_cLdL::synapse0x2c4b010() {
   return (neuron0x2c442f0()*-0.0722966);
}

double NNfunction_ss_cLdL::synapse0x2c4b050() {
   return (neuron0x2c44630()*-0.0338433);
}

double NNfunction_ss_cLdL::synapse0x2c4aae0() {
   return (neuron0x2c44970()*-0.05749);
}

double NNfunction_ss_cLdL::synapse0x2c4ab20() {
   return (neuron0x2c44ed0()*0.0246221);
}

double NNfunction_ss_cLdL::synapse0x2c4b1a0() {
   return (neuron0x2c450f0()*0.0321239);
}

double NNfunction_ss_cLdL::synapse0x2c4b1e0() {
   return (neuron0x2c45430()*-0.0958516);
}

double NNfunction_ss_cLdL::synapse0x2c4b220() {
   return (neuron0x2c45770()*-0.0944788);
}

double NNfunction_ss_cLdL::synapse0x2c4b260() {
   return (neuron0x2c45ab0()*0.0319579);
}

double NNfunction_ss_cLdL::synapse0x2c4b2a0() {
   return (neuron0x2c45df0()*0.0359061);
}

double NNfunction_ss_cLdL::synapse0x2c4b2e0() {
   return (neuron0x2c46130()*0.0258352);
}

double NNfunction_ss_cLdL::synapse0x2c44dc0() {
   return (neuron0x2c41570()*-0.00120994);
}

double NNfunction_ss_cLdL::synapse0x2c44e00() {
   return (neuron0x2c418b0()*0.0120391);
}

double NNfunction_ss_cLdL::synapse0x2c44e40() {
   return (neuron0x2c41bf0()*-0.00242803);
}

double NNfunction_ss_cLdL::synapse0x2c44e80() {
   return (neuron0x2c41f30()*0.311616);
}

double NNfunction_ss_cLdL::synapse0x2c4b870() {
   return (neuron0x2c42270()*-0.00131612);
}

double NNfunction_ss_cLdL::synapse0x2c4b8b0() {
   return (neuron0x2c425b0()*-0.0101464);
}

double NNfunction_ss_cLdL::synapse0x2c4b8f0() {
   return (neuron0x2c428f0()*-0.0207688);
}

double NNfunction_ss_cLdL::synapse0x2c4b930() {
   return (neuron0x2c42c30()*-0.00306434);
}

double NNfunction_ss_cLdL::synapse0x2c4b970() {
   return (neuron0x2c42f70()*0.0482699);
}

double NNfunction_ss_cLdL::synapse0x2c4b9b0() {
   return (neuron0x2c432b0()*0.0642779);
}

double NNfunction_ss_cLdL::synapse0x2c4b9f0() {
   return (neuron0x2c435f0()*0.0525744);
}

double NNfunction_ss_cLdL::synapse0x2c4ba30() {
   return (neuron0x2c43930()*1.0815);
}

double NNfunction_ss_cLdL::synapse0x2c4ba70() {
   return (neuron0x2c43c70()*0.678267);
}

double NNfunction_ss_cLdL::synapse0x2c4bab0() {
   return (neuron0x2c43fb0()*0.0126592);
}

double NNfunction_ss_cLdL::synapse0x2c4baf0() {
   return (neuron0x2c442f0()*0.0300239);
}

double NNfunction_ss_cLdL::synapse0x2c4bb30() {
   return (neuron0x2c44630()*-0.0219238);
}

double NNfunction_ss_cLdL::synapse0x2c4b4b0() {
   return (neuron0x2c44970()*-0.0059493);
}

double NNfunction_ss_cLdL::synapse0x2c4b4f0() {
   return (neuron0x2c44ed0()*0.0155128);
}

double NNfunction_ss_cLdL::synapse0x2c4bc80() {
   return (neuron0x2c450f0()*0.00275812);
}

double NNfunction_ss_cLdL::synapse0x2c4bcc0() {
   return (neuron0x2c45430()*-0.00497022);
}

double NNfunction_ss_cLdL::synapse0x2c4bd00() {
   return (neuron0x2c45770()*-0.0153192);
}

double NNfunction_ss_cLdL::synapse0x2c4bd40() {
   return (neuron0x2c45ab0()*0.0147813);
}

double NNfunction_ss_cLdL::synapse0x2c4bd80() {
   return (neuron0x2c45df0()*0.0133331);
}

double NNfunction_ss_cLdL::synapse0x2c4bdc0() {
   return (neuron0x2c46130()*0.0191191);
}

double NNfunction_ss_cLdL::synapse0x2c4c140() {
   return (neuron0x2c41570()*-0.205131);
}

double NNfunction_ss_cLdL::synapse0x2c4c180() {
   return (neuron0x2c418b0()*0.143953);
}

double NNfunction_ss_cLdL::synapse0x2c4c1c0() {
   return (neuron0x2c41bf0()*0.0654077);
}

double NNfunction_ss_cLdL::synapse0x2c4c200() {
   return (neuron0x2c41f30()*-0.62666);
}

double NNfunction_ss_cLdL::synapse0x2c4c240() {
   return (neuron0x2c42270()*-0.350471);
}

double NNfunction_ss_cLdL::synapse0x2c4c280() {
   return (neuron0x2c425b0()*0.253373);
}

double NNfunction_ss_cLdL::synapse0x2c4c2c0() {
   return (neuron0x2c428f0()*-0.368825);
}

double NNfunction_ss_cLdL::synapse0x2c4c300() {
   return (neuron0x2c42c30()*0.459449);
}

double NNfunction_ss_cLdL::synapse0x2c4c340() {
   return (neuron0x2c42f70()*0.154487);
}

double NNfunction_ss_cLdL::synapse0x2c4c380() {
   return (neuron0x2c432b0()*0.0124319);
}

double NNfunction_ss_cLdL::synapse0x2c4c3c0() {
   return (neuron0x2c435f0()*0.00597763);
}

double NNfunction_ss_cLdL::synapse0x2c4c400() {
   return (neuron0x2c43930()*0.257101);
}

double NNfunction_ss_cLdL::synapse0x2c4c440() {
   return (neuron0x2c43c70()*0.293208);
}

double NNfunction_ss_cLdL::synapse0x2c4c480() {
   return (neuron0x2c43fb0()*0.309951);
}

double NNfunction_ss_cLdL::synapse0x2c4c4c0() {
   return (neuron0x2c442f0()*0.104823);
}

double NNfunction_ss_cLdL::synapse0x2c4c500() {
   return (neuron0x2c44630()*0.0770277);
}

double NNfunction_ss_cLdL::synapse0x2c4bf90() {
   return (neuron0x2c44970()*-0.360876);
}

double NNfunction_ss_cLdL::synapse0x2c4bfd0() {
   return (neuron0x2c44ed0()*-0.172187);
}

double NNfunction_ss_cLdL::synapse0x2c4c650() {
   return (neuron0x2c450f0()*0.0147688);
}

double NNfunction_ss_cLdL::synapse0x2c4c690() {
   return (neuron0x2c45430()*0.297638);
}

double NNfunction_ss_cLdL::synapse0x2c4c6d0() {
   return (neuron0x2c45770()*0.077296);
}

double NNfunction_ss_cLdL::synapse0x2c4c710() {
   return (neuron0x2c45ab0()*0.07631);
}

double NNfunction_ss_cLdL::synapse0x2c4c750() {
   return (neuron0x2c45df0()*-0.0759205);
}

double NNfunction_ss_cLdL::synapse0x2c4c790() {
   return (neuron0x2c46130()*-0.217728);
}

double NNfunction_ss_cLdL::synapse0x2c4cb10() {
   return (neuron0x2c41570()*0.0708391);
}

double NNfunction_ss_cLdL::synapse0x2c4cb50() {
   return (neuron0x2c418b0()*0.0953403);
}

double NNfunction_ss_cLdL::synapse0x2c4cb90() {
   return (neuron0x2c41bf0()*0.549155);
}

double NNfunction_ss_cLdL::synapse0x2c4cbd0() {
   return (neuron0x2c41f30()*-0.357844);
}

double NNfunction_ss_cLdL::synapse0x2c4cc10() {
   return (neuron0x2c42270()*-0.0595471);
}

double NNfunction_ss_cLdL::synapse0x2c4cc50() {
   return (neuron0x2c425b0()*0.331851);
}

double NNfunction_ss_cLdL::synapse0x2c4cc90() {
   return (neuron0x2c428f0()*0.197738);
}

double NNfunction_ss_cLdL::synapse0x2c4ccd0() {
   return (neuron0x2c42c30()*-0.126064);
}

double NNfunction_ss_cLdL::synapse0x2c4cd10() {
   return (neuron0x2c42f70()*-0.312411);
}

double NNfunction_ss_cLdL::synapse0x2c4cd50() {
   return (neuron0x2c432b0()*-0.212927);
}

double NNfunction_ss_cLdL::synapse0x2c4cd90() {
   return (neuron0x2c435f0()*-0.201108);
}

double NNfunction_ss_cLdL::synapse0x2c4cdd0() {
   return (neuron0x2c43930()*0.333149);
}

double NNfunction_ss_cLdL::synapse0x2c4ce10() {
   return (neuron0x2c43c70()*0.0669293);
}

double NNfunction_ss_cLdL::synapse0x2c4ce50() {
   return (neuron0x2c43fb0()*0.0221005);
}

double NNfunction_ss_cLdL::synapse0x2c4ce90() {
   return (neuron0x2c442f0()*0.040064);
}

double NNfunction_ss_cLdL::synapse0x2c4ced0() {
   return (neuron0x2c44630()*0.334683);
}

double NNfunction_ss_cLdL::synapse0x2c4c960() {
   return (neuron0x2c44970()*-0.182706);
}

double NNfunction_ss_cLdL::synapse0x2c4c9a0() {
   return (neuron0x2c44ed0()*0.144723);
}

double NNfunction_ss_cLdL::synapse0x2c49730() {
   return (neuron0x2c450f0()*0.177256);
}

double NNfunction_ss_cLdL::synapse0x2c49770() {
   return (neuron0x2c45430()*0.11922);
}

double NNfunction_ss_cLdL::synapse0x2c497b0() {
   return (neuron0x2c45770()*0.0518468);
}

double NNfunction_ss_cLdL::synapse0x2c497f0() {
   return (neuron0x2c45ab0()*-0.146464);
}

double NNfunction_ss_cLdL::synapse0x2c49830() {
   return (neuron0x2c45df0()*0.00384266);
}

double NNfunction_ss_cLdL::synapse0x2c49870() {
   return (neuron0x2c46130()*0.124566);
}

double NNfunction_ss_cLdL::synapse0x2c49bf0() {
   return (neuron0x2c41570()*-0.0479496);
}

double NNfunction_ss_cLdL::synapse0x2c49c30() {
   return (neuron0x2c418b0()*0.0295224);
}

double NNfunction_ss_cLdL::synapse0x2c49c70() {
   return (neuron0x2c41bf0()*0.603752);
}

double NNfunction_ss_cLdL::synapse0x2c49cb0() {
   return (neuron0x2c41f30()*0.267735);
}

double NNfunction_ss_cLdL::synapse0x2c49cf0() {
   return (neuron0x2c42270()*0.119159);
}

double NNfunction_ss_cLdL::synapse0x2c49d30() {
   return (neuron0x2c425b0()*0.0156789);
}

double NNfunction_ss_cLdL::synapse0x2c49d70() {
   return (neuron0x2c428f0()*-0.0306215);
}

double NNfunction_ss_cLdL::synapse0x2c49db0() {
   return (neuron0x2c42c30()*0.0269319);
}

double NNfunction_ss_cLdL::synapse0x2c49df0() {
   return (neuron0x2c42f70()*0.0138367);
}

double NNfunction_ss_cLdL::synapse0x2c49e30() {
   return (neuron0x2c432b0()*-0.168789);
}

double NNfunction_ss_cLdL::synapse0x2c49e70() {
   return (neuron0x2c435f0()*0.00917491);
}

double NNfunction_ss_cLdL::synapse0x2c49eb0() {
   return (neuron0x2c43930()*-1.4476);
}

double NNfunction_ss_cLdL::synapse0x2c49ef0() {
   return (neuron0x2c43c70()*0.745466);
}

double NNfunction_ss_cLdL::synapse0x2c4e030() {
   return (neuron0x2c43fb0()*-0.0460044);
}

double NNfunction_ss_cLdL::synapse0x2c4e070() {
   return (neuron0x2c442f0()*0.119933);
}

double NNfunction_ss_cLdL::synapse0x2c4e0b0() {
   return (neuron0x2c44630()*-0.123335);
}

double NNfunction_ss_cLdL::synapse0x2c49a40() {
   return (neuron0x2c44970()*-0.0013932);
}

double NNfunction_ss_cLdL::synapse0x2c49a80() {
   return (neuron0x2c44ed0()*-0.00370791);
}

double NNfunction_ss_cLdL::synapse0x2c4e200() {
   return (neuron0x2c450f0()*-0.0273097);
}

double NNfunction_ss_cLdL::synapse0x2c4e240() {
   return (neuron0x2c45430()*0.142367);
}

double NNfunction_ss_cLdL::synapse0x2c4e280() {
   return (neuron0x2c45770()*0.170529);
}

double NNfunction_ss_cLdL::synapse0x2c4e2c0() {
   return (neuron0x2c45ab0()*-0.118378);
}

double NNfunction_ss_cLdL::synapse0x2c4e300() {
   return (neuron0x2c45df0()*-0.0769924);
}

double NNfunction_ss_cLdL::synapse0x2c4e340() {
   return (neuron0x2c46130()*-0.105058);
}

double NNfunction_ss_cLdL::synapse0x2c4e6c0() {
   return (neuron0x2c41570()*0.0139228);
}

double NNfunction_ss_cLdL::synapse0x2c4e700() {
   return (neuron0x2c418b0()*-0.00762566);
}

double NNfunction_ss_cLdL::synapse0x2c4e740() {
   return (neuron0x2c41bf0()*-0.0579417);
}

double NNfunction_ss_cLdL::synapse0x2c4e780() {
   return (neuron0x2c41f30()*19.8578);
}

double NNfunction_ss_cLdL::synapse0x2c4e7c0() {
   return (neuron0x2c42270()*0.0411683);
}

double NNfunction_ss_cLdL::synapse0x2c4e800() {
   return (neuron0x2c425b0()*-0.00954065);
}

double NNfunction_ss_cLdL::synapse0x2c4e840() {
   return (neuron0x2c428f0()*-0.00210099);
}

double NNfunction_ss_cLdL::synapse0x2c4e880() {
   return (neuron0x2c42c30()*0.00221069);
}

double NNfunction_ss_cLdL::synapse0x2c4e8c0() {
   return (neuron0x2c42f70()*-0.0259099);
}

double NNfunction_ss_cLdL::synapse0x2c4e900() {
   return (neuron0x2c432b0()*0.0058449);
}

double NNfunction_ss_cLdL::synapse0x2c4e940() {
   return (neuron0x2c435f0()*-0.0101884);
}

double NNfunction_ss_cLdL::synapse0x2c4e980() {
   return (neuron0x2c43930()*-0.0475668);
}

double NNfunction_ss_cLdL::synapse0x2c4e9c0() {
   return (neuron0x2c43c70()*-0.09876);
}

double NNfunction_ss_cLdL::synapse0x2c4ea00() {
   return (neuron0x2c43fb0()*-0.0388873);
}

double NNfunction_ss_cLdL::synapse0x2c4ea40() {
   return (neuron0x2c442f0()*0.024402);
}

double NNfunction_ss_cLdL::synapse0x2c4ea80() {
   return (neuron0x2c44630()*-0.0260001);
}

double NNfunction_ss_cLdL::synapse0x2c4e510() {
   return (neuron0x2c44970()*-0.0220585);
}

double NNfunction_ss_cLdL::synapse0x2c4e550() {
   return (neuron0x2c44ed0()*0.00469432);
}

double NNfunction_ss_cLdL::synapse0x2c4ebd0() {
   return (neuron0x2c450f0()*-0.0363368);
}

double NNfunction_ss_cLdL::synapse0x2c4ec10() {
   return (neuron0x2c45430()*-0.0352734);
}

double NNfunction_ss_cLdL::synapse0x2c4ec50() {
   return (neuron0x2c45770()*0.035326);
}

double NNfunction_ss_cLdL::synapse0x2c4ec90() {
   return (neuron0x2c45ab0()*0.0119873);
}

double NNfunction_ss_cLdL::synapse0x2c4ecd0() {
   return (neuron0x2c45df0()*0.0323344);
}

double NNfunction_ss_cLdL::synapse0x2c4ed10() {
   return (neuron0x2c46130()*0.0144639);
}

double NNfunction_ss_cLdL::synapse0x2c4f090() {
   return (neuron0x2c41570()*0.00786683);
}

double NNfunction_ss_cLdL::synapse0x2c4f0d0() {
   return (neuron0x2c418b0()*-0.021983);
}

double NNfunction_ss_cLdL::synapse0x2c4f110() {
   return (neuron0x2c41bf0()*-0.885964);
}

double NNfunction_ss_cLdL::synapse0x2c4f150() {
   return (neuron0x2c41f30()*-0.0845071);
}

double NNfunction_ss_cLdL::synapse0x2c4f190() {
   return (neuron0x2c42270()*0.0217603);
}

double NNfunction_ss_cLdL::synapse0x2c4f1d0() {
   return (neuron0x2c425b0()*0.0117225);
}

double NNfunction_ss_cLdL::synapse0x2c4f210() {
   return (neuron0x2c428f0()*0.00421302);
}

double NNfunction_ss_cLdL::synapse0x2c4f250() {
   return (neuron0x2c42c30()*-0.02656);
}

double NNfunction_ss_cLdL::synapse0x2c4f290() {
   return (neuron0x2c42f70()*0.00607677);
}

double NNfunction_ss_cLdL::synapse0x2c4f2d0() {
   return (neuron0x2c432b0()*-0.000523642);
}

double NNfunction_ss_cLdL::synapse0x2c4f310() {
   return (neuron0x2c435f0()*0.00261358);
}

double NNfunction_ss_cLdL::synapse0x2c4f350() {
   return (neuron0x2c43930()*0.23293);
}

double NNfunction_ss_cLdL::synapse0x2c4f390() {
   return (neuron0x2c43c70()*0.290521);
}

double NNfunction_ss_cLdL::synapse0x2c4f3d0() {
   return (neuron0x2c43fb0()*-0.023139);
}

double NNfunction_ss_cLdL::synapse0x2c4f410() {
   return (neuron0x2c442f0()*0.00269018);
}

double NNfunction_ss_cLdL::synapse0x2c4f450() {
   return (neuron0x2c44630()*0.00360986);
}

double NNfunction_ss_cLdL::synapse0x2c4eee0() {
   return (neuron0x2c44970()*0.0100365);
}

double NNfunction_ss_cLdL::synapse0x2c4ef20() {
   return (neuron0x2c44ed0()*-0.00248952);
}

double NNfunction_ss_cLdL::synapse0x2c4f5a0() {
   return (neuron0x2c450f0()*0.00678368);
}

double NNfunction_ss_cLdL::synapse0x2c4f5e0() {
   return (neuron0x2c45430()*-0.0112089);
}

double NNfunction_ss_cLdL::synapse0x2c4f620() {
   return (neuron0x2c45770()*-0.00782894);
}

double NNfunction_ss_cLdL::synapse0x2c4f660() {
   return (neuron0x2c45ab0()*0.00585746);
}

double NNfunction_ss_cLdL::synapse0x2c4f6a0() {
   return (neuron0x2c45df0()*0.00347453);
}

double NNfunction_ss_cLdL::synapse0x2c4f6e0() {
   return (neuron0x2c46130()*0.0284829);
}

double NNfunction_ss_cLdL::synapse0x2c4fa60() {
   return (neuron0x2c41570()*-0.0128464);
}

double NNfunction_ss_cLdL::synapse0x2c4faa0() {
   return (neuron0x2c418b0()*0.0268515);
}

double NNfunction_ss_cLdL::synapse0x2c4fae0() {
   return (neuron0x2c41bf0()*0.667485);
}

double NNfunction_ss_cLdL::synapse0x2c4fb20() {
   return (neuron0x2c41f30()*0.112863);
}

double NNfunction_ss_cLdL::synapse0x2c4fb60() {
   return (neuron0x2c42270()*0.00407681);
}

double NNfunction_ss_cLdL::synapse0x2c4fba0() {
   return (neuron0x2c425b0()*-0.00164023);
}

double NNfunction_ss_cLdL::synapse0x2c4fbe0() {
   return (neuron0x2c428f0()*0.000737501);
}

double NNfunction_ss_cLdL::synapse0x2c4fc20() {
   return (neuron0x2c42c30()*0.0173949);
}

double NNfunction_ss_cLdL::synapse0x2c4fc60() {
   return (neuron0x2c42f70()*0.00597885);
}

double NNfunction_ss_cLdL::synapse0x2c4fca0() {
   return (neuron0x2c432b0()*-0.00492865);
}

double NNfunction_ss_cLdL::synapse0x2c4fce0() {
   return (neuron0x2c435f0()*0.00659989);
}

double NNfunction_ss_cLdL::synapse0x2c4fd20() {
   return (neuron0x2c43930()*0.045163);
}

double NNfunction_ss_cLdL::synapse0x2c4fd60() {
   return (neuron0x2c43c70()*-0.0118089);
}

double NNfunction_ss_cLdL::synapse0x2c4fda0() {
   return (neuron0x2c43fb0()*0.000895306);
}

double NNfunction_ss_cLdL::synapse0x2c4fde0() {
   return (neuron0x2c442f0()*0.00944588);
}

double NNfunction_ss_cLdL::synapse0x2c4fe20() {
   return (neuron0x2c44630()*0.0256298);
}

double NNfunction_ss_cLdL::synapse0x2c4f8b0() {
   return (neuron0x2c44970()*0.00913694);
}

double NNfunction_ss_cLdL::synapse0x2c4f8f0() {
   return (neuron0x2c44ed0()*0.0278682);
}

double NNfunction_ss_cLdL::synapse0x2c4ff70() {
   return (neuron0x2c450f0()*0.000551281);
}

double NNfunction_ss_cLdL::synapse0x2c4ffb0() {
   return (neuron0x2c45430()*0.00548742);
}

double NNfunction_ss_cLdL::synapse0x2c4fff0() {
   return (neuron0x2c45770()*0.0179749);
}

double NNfunction_ss_cLdL::synapse0x2c50030() {
   return (neuron0x2c45ab0()*0.0048182);
}

double NNfunction_ss_cLdL::synapse0x2c50070() {
   return (neuron0x2c45df0()*-0.0125274);
}

double NNfunction_ss_cLdL::synapse0x2c500b0() {
   return (neuron0x2c46130()*-0.0225358);
}

double NNfunction_ss_cLdL::synapse0x2c50430() {
   return (neuron0x2c41570()*0.322684);
}

double NNfunction_ss_cLdL::synapse0x2c41790() {
   return (neuron0x2c418b0()*0.025195);
}

double NNfunction_ss_cLdL::synapse0x2c417d0() {
   return (neuron0x2c41bf0()*0.170101);
}

double NNfunction_ss_cLdL::synapse0x2c41ad0() {
   return (neuron0x2c41f30()*-0.208545);
}

double NNfunction_ss_cLdL::synapse0x2c41b10() {
   return (neuron0x2c42270()*-0.100229);
}

double NNfunction_ss_cLdL::synapse0x2c41e10() {
   return (neuron0x2c425b0()*-0.0365801);
}

double NNfunction_ss_cLdL::synapse0x2c41e50() {
   return (neuron0x2c428f0()*-0.200921);
}

double NNfunction_ss_cLdL::synapse0x2c42150() {
   return (neuron0x2c42c30()*0.149896);
}

double NNfunction_ss_cLdL::synapse0x2c42190() {
   return (neuron0x2c42f70()*0.0937862);
}

double NNfunction_ss_cLdL::synapse0x2c42490() {
   return (neuron0x2c432b0()*0.0262577);
}

double NNfunction_ss_cLdL::synapse0x2c424d0() {
   return (neuron0x2c435f0()*0.203239);
}

double NNfunction_ss_cLdL::synapse0x2c427d0() {
   return (neuron0x2c43930()*0.893923);
}

double NNfunction_ss_cLdL::synapse0x2c42810() {
   return (neuron0x2c43c70()*-0.808857);
}

double NNfunction_ss_cLdL::synapse0x2c42b10() {
   return (neuron0x2c43fb0()*0.354424);
}

double NNfunction_ss_cLdL::synapse0x2c42b50() {
   return (neuron0x2c442f0()*0.154959);
}

double NNfunction_ss_cLdL::synapse0x2c42e50() {
   return (neuron0x2c44630()*-0.336342);
}

double NNfunction_ss_cLdL::synapse0x2c42e90() {
   return (neuron0x2c44970()*-0.217887);
}

double NNfunction_ss_cLdL::synapse0x2c43190() {
   return (neuron0x2c44ed0()*0.0389465);
}

double NNfunction_ss_cLdL::synapse0x2c431d0() {
   return (neuron0x2c450f0()*-0.0732102);
}

double NNfunction_ss_cLdL::synapse0x2c434d0() {
   return (neuron0x2c45430()*-0.114479);
}

double NNfunction_ss_cLdL::synapse0x2c43510() {
   return (neuron0x2c45770()*-0.0501062);
}

double NNfunction_ss_cLdL::synapse0x2c43810() {
   return (neuron0x2c45ab0()*-0.0573148);
}

double NNfunction_ss_cLdL::synapse0x2c43850() {
   return (neuron0x2c45df0()*0.121113);
}

double NNfunction_ss_cLdL::synapse0x2c43b50() {
   return (neuron0x2c46130()*0.0945613);
}

double NNfunction_ss_cLdL::synapse0x2c43b90() {
   return (neuron0x2c41570()*0.410126);
}

double NNfunction_ss_cLdL::synapse0x2c44850() {
   return (neuron0x2c418b0()*-0.341274);
}

double NNfunction_ss_cLdL::synapse0x2c44890() {
   return (neuron0x2c41bf0()*0.356427);
}

double NNfunction_ss_cLdL::synapse0x2c50280() {
   return (neuron0x2c41f30()*-0.552216);
}

double NNfunction_ss_cLdL::synapse0x2c502c0() {
   return (neuron0x2c42270()*0.334693);
}

double NNfunction_ss_cLdL::synapse0x2c44b90() {
   return (neuron0x2c425b0()*-0.204649);
}

double NNfunction_ss_cLdL::synapse0x2c44bd0() {
   return (neuron0x2c428f0()*-0.165184);
}

double NNfunction_ss_cLdL::synapse0x29f2b60() {
   return (neuron0x2c42c30()*-0.576231);
}

double NNfunction_ss_cLdL::synapse0x29f2ba0() {
   return (neuron0x2c42f70()*-0.428131);
}

double NNfunction_ss_cLdL::synapse0x2c45310() {
   return (neuron0x2c432b0()*0.0265531);
}

double NNfunction_ss_cLdL::synapse0x2c45350() {
   return (neuron0x2c435f0()*-0.048438);
}

double NNfunction_ss_cLdL::synapse0x2c45650() {
   return (neuron0x2c43930()*-0.230537);
}

double NNfunction_ss_cLdL::synapse0x2c45690() {
   return (neuron0x2c43c70()*-0.51455);
}

double NNfunction_ss_cLdL::synapse0x2c45990() {
   return (neuron0x2c43fb0()*0.0989249);
}

double NNfunction_ss_cLdL::synapse0x2c459d0() {
   return (neuron0x2c442f0()*-0.476005);
}

double NNfunction_ss_cLdL::synapse0x2c45cd0() {
   return (neuron0x2c44630()*-0.253134);
}

double NNfunction_ss_cLdL::synapse0x2c45d10() {
   return (neuron0x2c44970()*0.71755);
}

double NNfunction_ss_cLdL::synapse0x2c46010() {
   return (neuron0x2c44ed0()*-0.661874);
}

double NNfunction_ss_cLdL::synapse0x2c46050() {
   return (neuron0x2c450f0()*0.000660548);
}

double NNfunction_ss_cLdL::synapse0x2c46350() {
   return (neuron0x2c45430()*-0.117756);
}

double NNfunction_ss_cLdL::synapse0x2c46390() {
   return (neuron0x2c45770()*0.0896907);
}

double NNfunction_ss_cLdL::synapse0x2c43e90() {
   return (neuron0x2c45ab0()*-0.0153325);
}

double NNfunction_ss_cLdL::synapse0x2c43ed0() {
   return (neuron0x2c45df0()*0.0371478);
}

double NNfunction_ss_cLdL::synapse0x2c521a0() {
   return (neuron0x2c46130()*0.220496);
}

double NNfunction_ss_cLdL::synapse0x2c52520() {
   return (neuron0x2c41570()*0.00686024);
}

double NNfunction_ss_cLdL::synapse0x2c52560() {
   return (neuron0x2c418b0()*-0.00744271);
}

double NNfunction_ss_cLdL::synapse0x2c525a0() {
   return (neuron0x2c41bf0()*0.0152681);
}

double NNfunction_ss_cLdL::synapse0x2c525e0() {
   return (neuron0x2c41f30()*0.254089);
}

double NNfunction_ss_cLdL::synapse0x2c52620() {
   return (neuron0x2c42270()*-0.0112928);
}

double NNfunction_ss_cLdL::synapse0x2c52660() {
   return (neuron0x2c425b0()*-0.00563636);
}

double NNfunction_ss_cLdL::synapse0x2c526a0() {
   return (neuron0x2c428f0()*0.0394075);
}

double NNfunction_ss_cLdL::synapse0x2c526e0() {
   return (neuron0x2c42c30()*0.0260129);
}

double NNfunction_ss_cLdL::synapse0x2c52720() {
   return (neuron0x2c42f70()*-0.00418084);
}

double NNfunction_ss_cLdL::synapse0x2c52760() {
   return (neuron0x2c432b0()*-0.0484313);
}

double NNfunction_ss_cLdL::synapse0x2c527a0() {
   return (neuron0x2c435f0()*-0.002859);
}

double NNfunction_ss_cLdL::synapse0x2c527e0() {
   return (neuron0x2c43930()*2.74729);
}

double NNfunction_ss_cLdL::synapse0x2c52820() {
   return (neuron0x2c43c70()*-0.438066);
}

double NNfunction_ss_cLdL::synapse0x2c52860() {
   return (neuron0x2c43fb0()*0.0218255);
}

double NNfunction_ss_cLdL::synapse0x2c528a0() {
   return (neuron0x2c442f0()*0.0123201);
}

double NNfunction_ss_cLdL::synapse0x2c528e0() {
   return (neuron0x2c44630()*0.0212514);
}

double NNfunction_ss_cLdL::synapse0x2c52370() {
   return (neuron0x2c44970()*0.0250076);
}

double NNfunction_ss_cLdL::synapse0x2c523b0() {
   return (neuron0x2c44ed0()*0.0131195);
}

double NNfunction_ss_cLdL::synapse0x2c52a30() {
   return (neuron0x2c450f0()*-0.0553717);
}

double NNfunction_ss_cLdL::synapse0x2c52a70() {
   return (neuron0x2c45430()*-0.0117898);
}

double NNfunction_ss_cLdL::synapse0x2c52ab0() {
   return (neuron0x2c45770()*-0.00945616);
}

double NNfunction_ss_cLdL::synapse0x2c52af0() {
   return (neuron0x2c45ab0()*-0.0363173);
}

double NNfunction_ss_cLdL::synapse0x2c52b30() {
   return (neuron0x2c45df0()*-0.00940432);
}

double NNfunction_ss_cLdL::synapse0x2c52b70() {
   return (neuron0x2c46130()*-0.00356078);
}

double NNfunction_ss_cLdL::synapse0x2c52ef0() {
   return (neuron0x2c41570()*-0.171762);
}

double NNfunction_ss_cLdL::synapse0x2c52f30() {
   return (neuron0x2c418b0()*0.324926);
}

double NNfunction_ss_cLdL::synapse0x2c52f70() {
   return (neuron0x2c41bf0()*-0.0187999);
}

double NNfunction_ss_cLdL::synapse0x2c52fb0() {
   return (neuron0x2c41f30()*0.363325);
}

double NNfunction_ss_cLdL::synapse0x2c52ff0() {
   return (neuron0x2c42270()*0.311605);
}

double NNfunction_ss_cLdL::synapse0x2c53030() {
   return (neuron0x2c425b0()*-0.451532);
}

double NNfunction_ss_cLdL::synapse0x2c53070() {
   return (neuron0x2c428f0()*0.49543);
}

double NNfunction_ss_cLdL::synapse0x2c530b0() {
   return (neuron0x2c42c30()*0.198514);
}

double NNfunction_ss_cLdL::synapse0x2c530f0() {
   return (neuron0x2c42f70()*-0.0211915);
}

double NNfunction_ss_cLdL::synapse0x2c53130() {
   return (neuron0x2c432b0()*-0.14966);
}

double NNfunction_ss_cLdL::synapse0x2c53170() {
   return (neuron0x2c435f0()*-0.217551);
}

double NNfunction_ss_cLdL::synapse0x2c531b0() {
   return (neuron0x2c43930()*-0.408787);
}

double NNfunction_ss_cLdL::synapse0x2c531f0() {
   return (neuron0x2c43c70()*-0.790304);
}

double NNfunction_ss_cLdL::synapse0x2c53230() {
   return (neuron0x2c43fb0()*-0.00261463);
}

double NNfunction_ss_cLdL::synapse0x2c53270() {
   return (neuron0x2c442f0()*-0.504321);
}

double NNfunction_ss_cLdL::synapse0x2c532b0() {
   return (neuron0x2c44630()*0.226237);
}

double NNfunction_ss_cLdL::synapse0x2c52d40() {
   return (neuron0x2c44970()*-0.227307);
}

double NNfunction_ss_cLdL::synapse0x2c52d80() {
   return (neuron0x2c44ed0()*-0.629484);
}

double NNfunction_ss_cLdL::synapse0x2c53400() {
   return (neuron0x2c450f0()*-0.382054);
}

double NNfunction_ss_cLdL::synapse0x2c53440() {
   return (neuron0x2c45430()*0.0456144);
}

double NNfunction_ss_cLdL::synapse0x2c53480() {
   return (neuron0x2c45770()*0.3628);
}

double NNfunction_ss_cLdL::synapse0x2c534c0() {
   return (neuron0x2c45ab0()*0.00534538);
}

double NNfunction_ss_cLdL::synapse0x2c53500() {
   return (neuron0x2c45df0()*-0.133575);
}

double NNfunction_ss_cLdL::synapse0x2c53540() {
   return (neuron0x2c46130()*0.217513);
}

double NNfunction_ss_cLdL::synapse0x2c538c0() {
   return (neuron0x2c41570()*0.0186781);
}

double NNfunction_ss_cLdL::synapse0x2c53900() {
   return (neuron0x2c418b0()*-0.017671);
}

double NNfunction_ss_cLdL::synapse0x2c53940() {
   return (neuron0x2c41bf0()*0.0174469);
}

double NNfunction_ss_cLdL::synapse0x2c53980() {
   return (neuron0x2c41f30()*0.05801);
}

double NNfunction_ss_cLdL::synapse0x2c539c0() {
   return (neuron0x2c42270()*0.0602843);
}

double NNfunction_ss_cLdL::synapse0x2c53a00() {
   return (neuron0x2c425b0()*0.00277383);
}

double NNfunction_ss_cLdL::synapse0x2c53a40() {
   return (neuron0x2c428f0()*0.000182368);
}

double NNfunction_ss_cLdL::synapse0x2c53a80() {
   return (neuron0x2c42c30()*-0.00646975);
}

double NNfunction_ss_cLdL::synapse0x2c53ac0() {
   return (neuron0x2c42f70()*-0.0306901);
}

double NNfunction_ss_cLdL::synapse0x2c53b00() {
   return (neuron0x2c432b0()*-0.00839867);
}

double NNfunction_ss_cLdL::synapse0x2c53b40() {
   return (neuron0x2c435f0()*-0.0433809);
}

double NNfunction_ss_cLdL::synapse0x2c53b80() {
   return (neuron0x2c43930()*0.00971515);
}

double NNfunction_ss_cLdL::synapse0x2c53bc0() {
   return (neuron0x2c43c70()*-1.30358);
}

double NNfunction_ss_cLdL::synapse0x2c53c00() {
   return (neuron0x2c43fb0()*-0.0517458);
}

double NNfunction_ss_cLdL::synapse0x2c53c40() {
   return (neuron0x2c442f0()*0.00107763);
}

double NNfunction_ss_cLdL::synapse0x2c53c80() {
   return (neuron0x2c44630()*0.00133427);
}

double NNfunction_ss_cLdL::synapse0x2c53710() {
   return (neuron0x2c44970()*-0.0155885);
}

double NNfunction_ss_cLdL::synapse0x2c53750() {
   return (neuron0x2c44ed0()*-0.0191427);
}

double NNfunction_ss_cLdL::synapse0x2c53dd0() {
   return (neuron0x2c450f0()*-0.0333148);
}

double NNfunction_ss_cLdL::synapse0x2c53e10() {
   return (neuron0x2c45430()*-0.00999699);
}

double NNfunction_ss_cLdL::synapse0x2c53e50() {
   return (neuron0x2c45770()*0.018435);
}

double NNfunction_ss_cLdL::synapse0x2c53e90() {
   return (neuron0x2c45ab0()*-0.0127388);
}

double NNfunction_ss_cLdL::synapse0x2c53ed0() {
   return (neuron0x2c45df0()*0.00434864);
}

double NNfunction_ss_cLdL::synapse0x2c53f10() {
   return (neuron0x2c46130()*-0.00721411);
}

double NNfunction_ss_cLdL::synapse0x2c54290() {
   return (neuron0x2c41570()*0.195212);
}

double NNfunction_ss_cLdL::synapse0x2c542d0() {
   return (neuron0x2c418b0()*-0.154629);
}

double NNfunction_ss_cLdL::synapse0x2c54310() {
   return (neuron0x2c41bf0()*0.900558);
}

double NNfunction_ss_cLdL::synapse0x2c54350() {
   return (neuron0x2c41f30()*-0.405785);
}

double NNfunction_ss_cLdL::synapse0x2c54390() {
   return (neuron0x2c42270()*-0.255776);
}

double NNfunction_ss_cLdL::synapse0x2c543d0() {
   return (neuron0x2c425b0()*0.325441);
}

double NNfunction_ss_cLdL::synapse0x2c54410() {
   return (neuron0x2c428f0()*0.151826);
}

double NNfunction_ss_cLdL::synapse0x2c54450() {
   return (neuron0x2c42c30()*0.0178674);
}

double NNfunction_ss_cLdL::synapse0x2c54490() {
   return (neuron0x2c42f70()*0.217857);
}

double NNfunction_ss_cLdL::synapse0x2c544d0() {
   return (neuron0x2c432b0()*0.174114);
}

double NNfunction_ss_cLdL::synapse0x2c54510() {
   return (neuron0x2c435f0()*-0.0270136);
}

double NNfunction_ss_cLdL::synapse0x2c54550() {
   return (neuron0x2c43930()*0.0741058);
}

double NNfunction_ss_cLdL::synapse0x2c54590() {
   return (neuron0x2c43c70()*-1.13531);
}

double NNfunction_ss_cLdL::synapse0x2c545d0() {
   return (neuron0x2c43fb0()*0.6965);
}

double NNfunction_ss_cLdL::synapse0x2c54610() {
   return (neuron0x2c442f0()*0.0335181);
}

double NNfunction_ss_cLdL::synapse0x2c54650() {
   return (neuron0x2c44630()*1.04687);
}

double NNfunction_ss_cLdL::synapse0x2c540e0() {
   return (neuron0x2c44970()*0.418832);
}

double NNfunction_ss_cLdL::synapse0x2c54120() {
   return (neuron0x2c44ed0()*0.193155);
}

double NNfunction_ss_cLdL::synapse0x2c547a0() {
   return (neuron0x2c450f0()*0.21719);
}

double NNfunction_ss_cLdL::synapse0x2c547e0() {
   return (neuron0x2c45430()*-0.0556635);
}

double NNfunction_ss_cLdL::synapse0x2c54820() {
   return (neuron0x2c45770()*-0.449897);
}

double NNfunction_ss_cLdL::synapse0x2c54860() {
   return (neuron0x2c45ab0()*-0.182552);
}

double NNfunction_ss_cLdL::synapse0x2c548a0() {
   return (neuron0x2c45df0()*-0.0688251);
}

double NNfunction_ss_cLdL::synapse0x2c548e0() {
   return (neuron0x2c46130()*0.11128);
}

double NNfunction_ss_cLdL::synapse0x2c54c60() {
   return (neuron0x2c41570()*-0.570678);
}

double NNfunction_ss_cLdL::synapse0x2c54ca0() {
   return (neuron0x2c418b0()*-0.243381);
}

double NNfunction_ss_cLdL::synapse0x2c54ce0() {
   return (neuron0x2c41bf0()*-0.440584);
}

double NNfunction_ss_cLdL::synapse0x2c54d20() {
   return (neuron0x2c41f30()*-0.464709);
}

double NNfunction_ss_cLdL::synapse0x2c54d60() {
   return (neuron0x2c42270()*-0.0668517);
}

double NNfunction_ss_cLdL::synapse0x2c54da0() {
   return (neuron0x2c425b0()*0.264631);
}

double NNfunction_ss_cLdL::synapse0x2c54de0() {
   return (neuron0x2c428f0()*-0.313443);
}

double NNfunction_ss_cLdL::synapse0x2c54e20() {
   return (neuron0x2c42c30()*-0.785498);
}

double NNfunction_ss_cLdL::synapse0x2c54e60() {
   return (neuron0x2c42f70()*-0.05847);
}

double NNfunction_ss_cLdL::synapse0x2c4d020() {
   return (neuron0x2c432b0()*0.263269);
}

double NNfunction_ss_cLdL::synapse0x2c4d060() {
   return (neuron0x2c435f0()*-0.228188);
}

double NNfunction_ss_cLdL::synapse0x2c4d0a0() {
   return (neuron0x2c43930()*0.0092041);
}

double NNfunction_ss_cLdL::synapse0x2c4d0e0() {
   return (neuron0x2c43c70()*0.522662);
}

double NNfunction_ss_cLdL::synapse0x2c4d120() {
   return (neuron0x2c43fb0()*-0.0501997);
}

double NNfunction_ss_cLdL::synapse0x2c4d160() {
   return (neuron0x2c442f0()*-0.577531);
}

double NNfunction_ss_cLdL::synapse0x2c4d1a0() {
   return (neuron0x2c44630()*0.284797);
}

double NNfunction_ss_cLdL::synapse0x2c54ab0() {
   return (neuron0x2c44970()*-0.331598);
}

double NNfunction_ss_cLdL::synapse0x2c54af0() {
   return (neuron0x2c44ed0()*0.142617);
}

double NNfunction_ss_cLdL::synapse0x2c4d2f0() {
   return (neuron0x2c450f0()*-0.139477);
}

double NNfunction_ss_cLdL::synapse0x2c4d330() {
   return (neuron0x2c45430()*-0.0646294);
}

double NNfunction_ss_cLdL::synapse0x2c4d370() {
   return (neuron0x2c45770()*0.281123);
}

double NNfunction_ss_cLdL::synapse0x2c4d3b0() {
   return (neuron0x2c45ab0()*-0.0532134);
}

double NNfunction_ss_cLdL::synapse0x2c4d3f0() {
   return (neuron0x2c45df0()*0.290747);
}

double NNfunction_ss_cLdL::synapse0x2c4d430() {
   return (neuron0x2c46130()*0.0996822);
}

double NNfunction_ss_cLdL::synapse0x2c4d7b0() {
   return (neuron0x2c41570()*-0.285051);
}

double NNfunction_ss_cLdL::synapse0x2c4d7f0() {
   return (neuron0x2c418b0()*-0.0452939);
}

double NNfunction_ss_cLdL::synapse0x2c4d830() {
   return (neuron0x2c41bf0()*-0.282817);
}

double NNfunction_ss_cLdL::synapse0x2c4d870() {
   return (neuron0x2c41f30()*0.753937);
}

double NNfunction_ss_cLdL::synapse0x2c4d8b0() {
   return (neuron0x2c42270()*0.116525);
}

double NNfunction_ss_cLdL::synapse0x2c4d8f0() {
   return (neuron0x2c425b0()*-0.134585);
}

double NNfunction_ss_cLdL::synapse0x2c4d930() {
   return (neuron0x2c428f0()*-0.235041);
}

double NNfunction_ss_cLdL::synapse0x2c4d970() {
   return (neuron0x2c42c30()*-0.262822);
}

double NNfunction_ss_cLdL::synapse0x2c4d9b0() {
   return (neuron0x2c42f70()*-0.0640878);
}

double NNfunction_ss_cLdL::synapse0x2c4d9f0() {
   return (neuron0x2c432b0()*0.0310316);
}

double NNfunction_ss_cLdL::synapse0x2c4da30() {
   return (neuron0x2c435f0()*0.0267772);
}

double NNfunction_ss_cLdL::synapse0x2c4da70() {
   return (neuron0x2c43930()*-0.195817);
}

double NNfunction_ss_cLdL::synapse0x2c4dab0() {
   return (neuron0x2c43c70()*-0.118951);
}

double NNfunction_ss_cLdL::synapse0x2c4daf0() {
   return (neuron0x2c43fb0()*0.812792);
}

double NNfunction_ss_cLdL::synapse0x2c4db30() {
   return (neuron0x2c442f0()*0.036388);
}

double NNfunction_ss_cLdL::synapse0x2c4db70() {
   return (neuron0x2c44630()*-0.0803051);
}

double NNfunction_ss_cLdL::synapse0x2c4d600() {
   return (neuron0x2c44970()*-0.348072);
}

double NNfunction_ss_cLdL::synapse0x2c4d640() {
   return (neuron0x2c44ed0()*-0.0130853);
}

double NNfunction_ss_cLdL::synapse0x2c4dcc0() {
   return (neuron0x2c450f0()*-0.196692);
}

double NNfunction_ss_cLdL::synapse0x2c4dd00() {
   return (neuron0x2c45430()*0.000733614);
}

double NNfunction_ss_cLdL::synapse0x2c4dd40() {
   return (neuron0x2c45770()*-0.212067);
}

double NNfunction_ss_cLdL::synapse0x2c4dd80() {
   return (neuron0x2c45ab0()*-0.121504);
}

double NNfunction_ss_cLdL::synapse0x2c4ddc0() {
   return (neuron0x2c45df0()*-0.0139582);
}

double NNfunction_ss_cLdL::synapse0x2c4de00() {
   return (neuron0x2c46130()*-0.0342193);
}

double NNfunction_ss_cLdL::synapse0x2c4dfd0() {
   return (neuron0x2c41570()*0.00576756);
}

double NNfunction_ss_cLdL::synapse0x2c57060() {
   return (neuron0x2c418b0()*-0.0197219);
}

double NNfunction_ss_cLdL::synapse0x2c570a0() {
   return (neuron0x2c41bf0()*0.102064);
}

double NNfunction_ss_cLdL::synapse0x2c570e0() {
   return (neuron0x2c41f30()*-0.638363);
}

double NNfunction_ss_cLdL::synapse0x2c57120() {
   return (neuron0x2c42270()*0.0706752);
}

double NNfunction_ss_cLdL::synapse0x2c57160() {
   return (neuron0x2c425b0()*-0.0452055);
}

double NNfunction_ss_cLdL::synapse0x2c571a0() {
   return (neuron0x2c428f0()*0.0409128);
}

double NNfunction_ss_cLdL::synapse0x2c571e0() {
   return (neuron0x2c42c30()*0.0236011);
}

double NNfunction_ss_cLdL::synapse0x2c57220() {
   return (neuron0x2c42f70()*-0.0183927);
}

double NNfunction_ss_cLdL::synapse0x2c57260() {
   return (neuron0x2c432b0()*0.0907433);
}

double NNfunction_ss_cLdL::synapse0x2c572a0() {
   return (neuron0x2c435f0()*0.0265819);
}

double NNfunction_ss_cLdL::synapse0x2c572e0() {
   return (neuron0x2c43930()*0.59084);
}

double NNfunction_ss_cLdL::synapse0x2c57320() {
   return (neuron0x2c43c70()*-0.40459);
}

double NNfunction_ss_cLdL::synapse0x2c57360() {
   return (neuron0x2c43fb0()*-0.0903227);
}

double NNfunction_ss_cLdL::synapse0x2c573a0() {
   return (neuron0x2c442f0()*-0.00319245);
}

double NNfunction_ss_cLdL::synapse0x2c573e0() {
   return (neuron0x2c44630()*-0.0648975);
}

double NNfunction_ss_cLdL::synapse0x2c56eb0() {
   return (neuron0x2c44970()*-0.0197313);
}

double NNfunction_ss_cLdL::synapse0x2c56ef0() {
   return (neuron0x2c44ed0()*0.00984681);
}

double NNfunction_ss_cLdL::synapse0x2c57530() {
   return (neuron0x2c450f0()*0.0127418);
}

double NNfunction_ss_cLdL::synapse0x2c57570() {
   return (neuron0x2c45430()*0.0180529);
}

double NNfunction_ss_cLdL::synapse0x2c575b0() {
   return (neuron0x2c45770()*-0.000115691);
}

double NNfunction_ss_cLdL::synapse0x2c575f0() {
   return (neuron0x2c45ab0()*0.0909356);
}

double NNfunction_ss_cLdL::synapse0x2c57630() {
   return (neuron0x2c45df0()*-0.0683481);
}

double NNfunction_ss_cLdL::synapse0x2c57670() {
   return (neuron0x2c46130()*-0.00934529);
}

double NNfunction_ss_cLdL::synapse0x2c579f0() {
   return (neuron0x2c41570()*0.0324473);
}

double NNfunction_ss_cLdL::synapse0x2c57a30() {
   return (neuron0x2c418b0()*0.00505936);
}

double NNfunction_ss_cLdL::synapse0x2c57a70() {
   return (neuron0x2c41bf0()*0.0250447);
}

double NNfunction_ss_cLdL::synapse0x2c57ab0() {
   return (neuron0x2c41f30()*1.43571);
}

double NNfunction_ss_cLdL::synapse0x2c57af0() {
   return (neuron0x2c42270()*0.0106242);
}

double NNfunction_ss_cLdL::synapse0x2c57b30() {
   return (neuron0x2c425b0()*0.045306);
}

double NNfunction_ss_cLdL::synapse0x2c57b70() {
   return (neuron0x2c428f0()*0.0117964);
}

double NNfunction_ss_cLdL::synapse0x2c57bb0() {
   return (neuron0x2c42c30()*0.0171825);
}

double NNfunction_ss_cLdL::synapse0x2c57bf0() {
   return (neuron0x2c42f70()*0.00557791);
}

double NNfunction_ss_cLdL::synapse0x2c57c30() {
   return (neuron0x2c432b0()*0.00727415);
}

double NNfunction_ss_cLdL::synapse0x2c57c70() {
   return (neuron0x2c435f0()*-0.0160585);
}

double NNfunction_ss_cLdL::synapse0x2c57cb0() {
   return (neuron0x2c43930()*0.489847);
}

double NNfunction_ss_cLdL::synapse0x2c57cf0() {
   return (neuron0x2c43c70()*0.305074);
}

double NNfunction_ss_cLdL::synapse0x2c57d30() {
   return (neuron0x2c43fb0()*-0.0116805);
}

double NNfunction_ss_cLdL::synapse0x2c57d70() {
   return (neuron0x2c442f0()*0.0115305);
}

double NNfunction_ss_cLdL::synapse0x2c57db0() {
   return (neuron0x2c44630()*-0.000636578);
}

double NNfunction_ss_cLdL::synapse0x2c57840() {
   return (neuron0x2c44970()*0.00453675);
}

double NNfunction_ss_cLdL::synapse0x2c57880() {
   return (neuron0x2c44ed0()*0.0289925);
}

double NNfunction_ss_cLdL::synapse0x2c57f00() {
   return (neuron0x2c450f0()*-0.0193449);
}

double NNfunction_ss_cLdL::synapse0x2c57f40() {
   return (neuron0x2c45430()*0.00447437);
}

double NNfunction_ss_cLdL::synapse0x2c57f80() {
   return (neuron0x2c45770()*0.00582025);
}

double NNfunction_ss_cLdL::synapse0x2c57fc0() {
   return (neuron0x2c45ab0()*0.012694);
}

double NNfunction_ss_cLdL::synapse0x2c58000() {
   return (neuron0x2c45df0()*-0.0117818);
}

double NNfunction_ss_cLdL::synapse0x2c58040() {
   return (neuron0x2c46130()*-0.0144613);
}

double NNfunction_ss_cLdL::synapse0x2c583c0() {
   return (neuron0x2c41570()*0.190538);
}

double NNfunction_ss_cLdL::synapse0x2c58400() {
   return (neuron0x2c418b0()*-0.165044);
}

double NNfunction_ss_cLdL::synapse0x2c58440() {
   return (neuron0x2c41bf0()*-0.0909124);
}

double NNfunction_ss_cLdL::synapse0x2c58480() {
   return (neuron0x2c41f30()*0.0967326);
}

double NNfunction_ss_cLdL::synapse0x2c584c0() {
   return (neuron0x2c42270()*0.0986368);
}

double NNfunction_ss_cLdL::synapse0x2c58500() {
   return (neuron0x2c425b0()*-0.042312);
}

double NNfunction_ss_cLdL::synapse0x2c58540() {
   return (neuron0x2c428f0()*-0.183755);
}

double NNfunction_ss_cLdL::synapse0x2c58580() {
   return (neuron0x2c42c30()*0.45559);
}

double NNfunction_ss_cLdL::synapse0x2c585c0() {
   return (neuron0x2c42f70()*-0.351401);
}

double NNfunction_ss_cLdL::synapse0x2c58600() {
   return (neuron0x2c432b0()*0.0976054);
}

double NNfunction_ss_cLdL::synapse0x2c58640() {
   return (neuron0x2c435f0()*-0.144212);
}

double NNfunction_ss_cLdL::synapse0x2c58680() {
   return (neuron0x2c43930()*0.0149202);
}

double NNfunction_ss_cLdL::synapse0x2c586c0() {
   return (neuron0x2c43c70()*0.549367);
}

double NNfunction_ss_cLdL::synapse0x2c58700() {
   return (neuron0x2c43fb0()*0.0448028);
}

double NNfunction_ss_cLdL::synapse0x2c58740() {
   return (neuron0x2c442f0()*0.591004);
}

double NNfunction_ss_cLdL::synapse0x2c58780() {
   return (neuron0x2c44630()*-0.461645);
}

double NNfunction_ss_cLdL::synapse0x2c58210() {
   return (neuron0x2c44970()*0.283577);
}

double NNfunction_ss_cLdL::synapse0x2c58250() {
   return (neuron0x2c44ed0()*0.306585);
}

double NNfunction_ss_cLdL::synapse0x2c588d0() {
   return (neuron0x2c450f0()*0.375389);
}

double NNfunction_ss_cLdL::synapse0x2c58910() {
   return (neuron0x2c45430()*-0.0450969);
}

double NNfunction_ss_cLdL::synapse0x2c58950() {
   return (neuron0x2c45770()*0.601147);
}

double NNfunction_ss_cLdL::synapse0x2c58990() {
   return (neuron0x2c45ab0()*0.150353);
}

double NNfunction_ss_cLdL::synapse0x2c589d0() {
   return (neuron0x2c45df0()*0.14469);
}

double NNfunction_ss_cLdL::synapse0x2c58a10() {
   return (neuron0x2c46130()*0.298387);
}

double NNfunction_ss_cLdL::synapse0x2c58d90() {
   return (neuron0x2c41570()*-0.005607);
}

double NNfunction_ss_cLdL::synapse0x2c58dd0() {
   return (neuron0x2c418b0()*-0.00138894);
}

double NNfunction_ss_cLdL::synapse0x2c58e10() {
   return (neuron0x2c41bf0()*-0.0195782);
}

double NNfunction_ss_cLdL::synapse0x2c58e50() {
   return (neuron0x2c41f30()*-1.85247);
}

double NNfunction_ss_cLdL::synapse0x2c58e90() {
   return (neuron0x2c42270()*-0.00478712);
}

double NNfunction_ss_cLdL::synapse0x2c58ed0() {
   return (neuron0x2c425b0()*-0.005583);
}

double NNfunction_ss_cLdL::synapse0x2c58f10() {
   return (neuron0x2c428f0()*0.00982183);
}

double NNfunction_ss_cLdL::synapse0x2c58f50() {
   return (neuron0x2c42c30()*0.0159759);
}

double NNfunction_ss_cLdL::synapse0x2c58f90() {
   return (neuron0x2c42f70()*0.029257);
}

double NNfunction_ss_cLdL::synapse0x2c58fd0() {
   return (neuron0x2c432b0()*0.0294571);
}

double NNfunction_ss_cLdL::synapse0x2c59010() {
   return (neuron0x2c435f0()*0.0037805);
}

double NNfunction_ss_cLdL::synapse0x2c59050() {
   return (neuron0x2c43930()*-0.0188799);
}

double NNfunction_ss_cLdL::synapse0x2c59090() {
   return (neuron0x2c43c70()*-0.121228);
}

double NNfunction_ss_cLdL::synapse0x2c590d0() {
   return (neuron0x2c43fb0()*0.0273867);
}

double NNfunction_ss_cLdL::synapse0x2c59110() {
   return (neuron0x2c442f0()*-0.0139064);
}

double NNfunction_ss_cLdL::synapse0x2c59150() {
   return (neuron0x2c44630()*-0.0269423);
}

double NNfunction_ss_cLdL::synapse0x2c58be0() {
   return (neuron0x2c44970()*-0.00961031);
}

double NNfunction_ss_cLdL::synapse0x2c58c20() {
   return (neuron0x2c44ed0()*0.00627256);
}

double NNfunction_ss_cLdL::synapse0x2c592a0() {
   return (neuron0x2c450f0()*-0.00596742);
}

double NNfunction_ss_cLdL::synapse0x2c592e0() {
   return (neuron0x2c45430()*0.0116873);
}

double NNfunction_ss_cLdL::synapse0x2c59320() {
   return (neuron0x2c45770()*-0.001036);
}

double NNfunction_ss_cLdL::synapse0x2c59360() {
   return (neuron0x2c45ab0()*-0.000825991);
}

double NNfunction_ss_cLdL::synapse0x2c593a0() {
   return (neuron0x2c45df0()*-0.0109053);
}

double NNfunction_ss_cLdL::synapse0x2c593e0() {
   return (neuron0x2c46130()*0.0203262);
}

double NNfunction_ss_cLdL::synapse0x2c59760() {
   return (neuron0x2c41570()*0.013821);
}

double NNfunction_ss_cLdL::synapse0x2c597a0() {
   return (neuron0x2c418b0()*0.000424674);
}

double NNfunction_ss_cLdL::synapse0x2c597e0() {
   return (neuron0x2c41bf0()*0.0631463);
}

double NNfunction_ss_cLdL::synapse0x2c59820() {
   return (neuron0x2c41f30()*1.3758);
}

double NNfunction_ss_cLdL::synapse0x2c59860() {
   return (neuron0x2c42270()*0.00394448);
}

double NNfunction_ss_cLdL::synapse0x2c598a0() {
   return (neuron0x2c425b0()*0.037091);
}

double NNfunction_ss_cLdL::synapse0x2c598e0() {
   return (neuron0x2c428f0()*-0.0126482);
}

double NNfunction_ss_cLdL::synapse0x2c59920() {
   return (neuron0x2c42c30()*0.00557774);
}

double NNfunction_ss_cLdL::synapse0x2c59960() {
   return (neuron0x2c42f70()*0.0185357);
}

double NNfunction_ss_cLdL::synapse0x2c599a0() {
   return (neuron0x2c432b0()*0.00671793);
}

double NNfunction_ss_cLdL::synapse0x2c599e0() {
   return (neuron0x2c435f0()*0.00369824);
}

double NNfunction_ss_cLdL::synapse0x2c59a20() {
   return (neuron0x2c43930()*-0.552046);
}

double NNfunction_ss_cLdL::synapse0x2c59a60() {
   return (neuron0x2c43c70()*0.852449);
}

double NNfunction_ss_cLdL::synapse0x2c59aa0() {
   return (neuron0x2c43fb0()*-0.000507745);
}

double NNfunction_ss_cLdL::synapse0x2c59ae0() {
   return (neuron0x2c442f0()*-0.0042661);
}

double NNfunction_ss_cLdL::synapse0x2c59b20() {
   return (neuron0x2c44630()*-0.0385841);
}

double NNfunction_ss_cLdL::synapse0x2c595b0() {
   return (neuron0x2c44970()*0.0137641);
}

double NNfunction_ss_cLdL::synapse0x2c595f0() {
   return (neuron0x2c44ed0()*0.0118112);
}

double NNfunction_ss_cLdL::synapse0x2c59c70() {
   return (neuron0x2c450f0()*0.0145935);
}

double NNfunction_ss_cLdL::synapse0x2c59cb0() {
   return (neuron0x2c45430()*0.00700515);
}

double NNfunction_ss_cLdL::synapse0x2c59cf0() {
   return (neuron0x2c45770()*0.0122155);
}

double NNfunction_ss_cLdL::synapse0x2c59d30() {
   return (neuron0x2c45ab0()*0.0675128);
}

double NNfunction_ss_cLdL::synapse0x2c59d70() {
   return (neuron0x2c45df0()*-0.0314452);
}

double NNfunction_ss_cLdL::synapse0x2c59db0() {
   return (neuron0x2c46130()*0.0264186);
}

double NNfunction_ss_cLdL::synapse0x2c5a130() {
   return (neuron0x2c41570()*0.0435395);
}

double NNfunction_ss_cLdL::synapse0x2c5a170() {
   return (neuron0x2c418b0()*-0.112009);
}

double NNfunction_ss_cLdL::synapse0x2c5a1b0() {
   return (neuron0x2c41bf0()*-0.00576164);
}

double NNfunction_ss_cLdL::synapse0x2c5a1f0() {
   return (neuron0x2c41f30()*-0.496147);
}

double NNfunction_ss_cLdL::synapse0x2c5a230() {
   return (neuron0x2c42270()*0.0320455);
}

double NNfunction_ss_cLdL::synapse0x2c5a270() {
   return (neuron0x2c425b0()*0.148641);
}

double NNfunction_ss_cLdL::synapse0x2c5a2b0() {
   return (neuron0x2c428f0()*0.0464886);
}

double NNfunction_ss_cLdL::synapse0x2c5a2f0() {
   return (neuron0x2c42c30()*-0.293495);
}

double NNfunction_ss_cLdL::synapse0x2c5a330() {
   return (neuron0x2c42f70()*0.0277394);
}

double NNfunction_ss_cLdL::synapse0x2c5a370() {
   return (neuron0x2c432b0()*0.0266353);
}

double NNfunction_ss_cLdL::synapse0x2c5a3b0() {
   return (neuron0x2c435f0()*0.0406706);
}

double NNfunction_ss_cLdL::synapse0x2c5a3f0() {
   return (neuron0x2c43930()*0.000487102);
}

double NNfunction_ss_cLdL::synapse0x2c5a430() {
   return (neuron0x2c43c70()*-0.21864);
}

double NNfunction_ss_cLdL::synapse0x2c5a470() {
   return (neuron0x2c43fb0()*-0.0201532);
}

double NNfunction_ss_cLdL::synapse0x2c5a4b0() {
   return (neuron0x2c442f0()*0.0613564);
}

double NNfunction_ss_cLdL::synapse0x2c5a4f0() {
   return (neuron0x2c44630()*-0.0849866);
}

double NNfunction_ss_cLdL::synapse0x2c59f80() {
   return (neuron0x2c44970()*-0.0461263);
}

double NNfunction_ss_cLdL::synapse0x2c59fc0() {
   return (neuron0x2c44ed0()*0.0573356);
}

double NNfunction_ss_cLdL::synapse0x2c5a640() {
   return (neuron0x2c450f0()*0.0938797);
}

double NNfunction_ss_cLdL::synapse0x2c5a680() {
   return (neuron0x2c45430()*-0.03347);
}

double NNfunction_ss_cLdL::synapse0x2c5a6c0() {
   return (neuron0x2c45770()*0.0120313);
}

double NNfunction_ss_cLdL::synapse0x2c5a700() {
   return (neuron0x2c45ab0()*0.0371374);
}

double NNfunction_ss_cLdL::synapse0x2c5a740() {
   return (neuron0x2c45df0()*0.0435202);
}

double NNfunction_ss_cLdL::synapse0x2c5a780() {
   return (neuron0x2c46130()*0.00165015);
}

double NNfunction_ss_cLdL::synapse0x2c5ab00() {
   return (neuron0x2c41570()*-0.329655);
}

double NNfunction_ss_cLdL::synapse0x2c5ab40() {
   return (neuron0x2c418b0()*0.0443828);
}

double NNfunction_ss_cLdL::synapse0x2c5ab80() {
   return (neuron0x2c41bf0()*-0.185411);
}

double NNfunction_ss_cLdL::synapse0x2c5abc0() {
   return (neuron0x2c41f30()*-0.31824);
}

double NNfunction_ss_cLdL::synapse0x2c5ac00() {
   return (neuron0x2c42270()*0.550697);
}

double NNfunction_ss_cLdL::synapse0x2c5ac40() {
   return (neuron0x2c425b0()*-0.243636);
}

double NNfunction_ss_cLdL::synapse0x2c5ac80() {
   return (neuron0x2c428f0()*-0.468758);
}

double NNfunction_ss_cLdL::synapse0x2c5acc0() {
   return (neuron0x2c42c30()*-0.132976);
}

double NNfunction_ss_cLdL::synapse0x2c5ad00() {
   return (neuron0x2c42f70()*-0.0704725);
}

double NNfunction_ss_cLdL::synapse0x2c5ad40() {
   return (neuron0x2c432b0()*-0.113495);
}

double NNfunction_ss_cLdL::synapse0x2c5ad80() {
   return (neuron0x2c435f0()*-0.256442);
}

double NNfunction_ss_cLdL::synapse0x2c5adc0() {
   return (neuron0x2c43930()*0.265433);
}

double NNfunction_ss_cLdL::synapse0x2c5ae00() {
   return (neuron0x2c43c70()*0.195983);
}

double NNfunction_ss_cLdL::synapse0x2c5ae40() {
   return (neuron0x2c43fb0()*-0.579846);
}

double NNfunction_ss_cLdL::synapse0x2c5ae80() {
   return (neuron0x2c442f0()*-0.303867);
}

double NNfunction_ss_cLdL::synapse0x2c5aec0() {
   return (neuron0x2c44630()*0.338184);
}

double NNfunction_ss_cLdL::synapse0x2c5a950() {
   return (neuron0x2c44970()*-0.686833);
}

double NNfunction_ss_cLdL::synapse0x2c5a990() {
   return (neuron0x2c44ed0()*-0.151838);
}

double NNfunction_ss_cLdL::synapse0x2c5b010() {
   return (neuron0x2c450f0()*0.453943);
}

double NNfunction_ss_cLdL::synapse0x2c5b050() {
   return (neuron0x2c45430()*-0.0985986);
}

double NNfunction_ss_cLdL::synapse0x2c5b090() {
   return (neuron0x2c45770()*-0.402947);
}

double NNfunction_ss_cLdL::synapse0x2c5b0d0() {
   return (neuron0x2c45ab0()*-0.36844);
}

double NNfunction_ss_cLdL::synapse0x2c5b110() {
   return (neuron0x2c45df0()*0.326993);
}

double NNfunction_ss_cLdL::synapse0x2c5b150() {
   return (neuron0x2c46130()*-0.287349);
}

double NNfunction_ss_cLdL::synapse0x2c5b4d0() {
   return (neuron0x2c41570()*0.0707738);
}

double NNfunction_ss_cLdL::synapse0x2c5b510() {
   return (neuron0x2c418b0()*0.126863);
}

double NNfunction_ss_cLdL::synapse0x2c5b550() {
   return (neuron0x2c41bf0()*-0.0357763);
}

double NNfunction_ss_cLdL::synapse0x2c5b590() {
   return (neuron0x2c41f30()*-0.834015);
}

double NNfunction_ss_cLdL::synapse0x2c5b5d0() {
   return (neuron0x2c42270()*0.0341168);
}

double NNfunction_ss_cLdL::synapse0x2c5b610() {
   return (neuron0x2c425b0()*-0.0718832);
}

double NNfunction_ss_cLdL::synapse0x2c5b650() {
   return (neuron0x2c428f0()*-0.18378);
}

double NNfunction_ss_cLdL::synapse0x2c5b690() {
   return (neuron0x2c42c30()*0.0485737);
}

double NNfunction_ss_cLdL::synapse0x2c5b6d0() {
   return (neuron0x2c42f70()*-0.0121927);
}

double NNfunction_ss_cLdL::synapse0x2c5b710() {
   return (neuron0x2c432b0()*0.0329924);
}

double NNfunction_ss_cLdL::synapse0x2c5b750() {
   return (neuron0x2c435f0()*-0.0412848);
}

double NNfunction_ss_cLdL::synapse0x2c5b790() {
   return (neuron0x2c43930()*0.250248);
}

double NNfunction_ss_cLdL::synapse0x2c5b7d0() {
   return (neuron0x2c43c70()*-0.227724);
}

double NNfunction_ss_cLdL::synapse0x2c5b810() {
   return (neuron0x2c43fb0()*-0.0564934);
}

double NNfunction_ss_cLdL::synapse0x2c5b850() {
   return (neuron0x2c442f0()*-0.105424);
}

double NNfunction_ss_cLdL::synapse0x2c5b890() {
   return (neuron0x2c44630()*0.00816498);
}

double NNfunction_ss_cLdL::synapse0x2c5b320() {
   return (neuron0x2c44970()*0.0961546);
}

double NNfunction_ss_cLdL::synapse0x2c5b360() {
   return (neuron0x2c44ed0()*0.0572619);
}

double NNfunction_ss_cLdL::synapse0x2c5b9e0() {
   return (neuron0x2c450f0()*-0.0366522);
}

double NNfunction_ss_cLdL::synapse0x2c5ba20() {
   return (neuron0x2c45430()*0.00487587);
}

double NNfunction_ss_cLdL::synapse0x2c5ba60() {
   return (neuron0x2c45770()*-0.0313182);
}

double NNfunction_ss_cLdL::synapse0x2c5baa0() {
   return (neuron0x2c45ab0()*0.0377149);
}

double NNfunction_ss_cLdL::synapse0x2c5bae0() {
   return (neuron0x2c45df0()*-0.0323071);
}

double NNfunction_ss_cLdL::synapse0x2c5bb20() {
   return (neuron0x2c46130()*-0.00690313);
}

double NNfunction_ss_cLdL::synapse0x2c5bea0() {
   return (neuron0x2c41570()*0.0998276);
}

double NNfunction_ss_cLdL::synapse0x2c50470() {
   return (neuron0x2c418b0()*0.374769);
}

double NNfunction_ss_cLdL::synapse0x2c504b0() {
   return (neuron0x2c41bf0()*0.151466);
}

double NNfunction_ss_cLdL::synapse0x2c504f0() {
   return (neuron0x2c41f30()*-0.00993654);
}

double NNfunction_ss_cLdL::synapse0x2c50740() {
   return (neuron0x2c42270()*0.150084);
}

double NNfunction_ss_cLdL::synapse0x2c50780() {
   return (neuron0x2c425b0()*0.190415);
}

double NNfunction_ss_cLdL::synapse0x2c507c0() {
   return (neuron0x2c428f0()*0.103509);
}

double NNfunction_ss_cLdL::synapse0x2c50a10() {
   return (neuron0x2c42c30()*-0.144406);
}

double NNfunction_ss_cLdL::synapse0x2c50a50() {
   return (neuron0x2c42f70()*-0.509903);
}

double NNfunction_ss_cLdL::synapse0x2c50ca0() {
   return (neuron0x2c432b0()*-0.538183);
}

double NNfunction_ss_cLdL::synapse0x2c50ce0() {
   return (neuron0x2c435f0()*-0.379006);
}

double NNfunction_ss_cLdL::synapse0x2c50d20() {
   return (neuron0x2c43930()*0.211856);
}

double NNfunction_ss_cLdL::synapse0x2c50f70() {
   return (neuron0x2c43c70()*0.126633);
}

double NNfunction_ss_cLdL::synapse0x2c50fb0() {
   return (neuron0x2c43fb0()*0.242816);
}

double NNfunction_ss_cLdL::synapse0x2c51200() {
   return (neuron0x2c442f0()*0.269666);
}

double NNfunction_ss_cLdL::synapse0x2c51240() {
   return (neuron0x2c44630()*0.244883);
}

double NNfunction_ss_cLdL::synapse0x2c5bcf0() {
   return (neuron0x2c44970()*0.0897176);
}

double NNfunction_ss_cLdL::synapse0x2c5bd30() {
   return (neuron0x2c44ed0()*0.861597);
}

double NNfunction_ss_cLdL::synapse0x2c51390() {
   return (neuron0x2c450f0()*-0.0664483);
}

double NNfunction_ss_cLdL::synapse0x2c518a0() {
   return (neuron0x2c45430()*0.422111);
}

double NNfunction_ss_cLdL::synapse0x2c518e0() {
   return (neuron0x2c45770()*0.316118);
}

double NNfunction_ss_cLdL::synapse0x2c51920() {
   return (neuron0x2c45ab0()*0.284439);
}

double NNfunction_ss_cLdL::synapse0x2c51b70() {
   return (neuron0x2c45df0()*0.00342382);
}

double NNfunction_ss_cLdL::synapse0x2c51bb0() {
   return (neuron0x2c46130()*0.162567);
}

double NNfunction_ss_cLdL::synapse0x2c51460() {
   return (neuron0x2c41570()*-0.0269654);
}

double NNfunction_ss_cLdL::synapse0x2c514a0() {
   return (neuron0x2c418b0()*-0.017049);
}

double NNfunction_ss_cLdL::synapse0x2c514e0() {
   return (neuron0x2c41bf0()*-0.0857029);
}

double NNfunction_ss_cLdL::synapse0x2c51520() {
   return (neuron0x2c41f30()*-0.567052);
}

double NNfunction_ss_cLdL::synapse0x2c51ea0() {
   return (neuron0x2c42270()*-0.00825399);
}

double NNfunction_ss_cLdL::synapse0x2c5e1f0() {
   return (neuron0x2c425b0()*0.00706731);
}

double NNfunction_ss_cLdL::synapse0x2c5e230() {
   return (neuron0x2c428f0()*0.0101843);
}

double NNfunction_ss_cLdL::synapse0x2c5e270() {
   return (neuron0x2c42c30()*0.0229151);
}

double NNfunction_ss_cLdL::synapse0x2c5e2b0() {
   return (neuron0x2c42f70()*-0.00835817);
}

double NNfunction_ss_cLdL::synapse0x2c5e2f0() {
   return (neuron0x2c432b0()*-0.0260336);
}

double NNfunction_ss_cLdL::synapse0x2c5e330() {
   return (neuron0x2c435f0()*-0.00379199);
}

double NNfunction_ss_cLdL::synapse0x2c5e370() {
   return (neuron0x2c43930()*-1.10425);
}

double NNfunction_ss_cLdL::synapse0x2c5e3b0() {
   return (neuron0x2c43c70()*-1.09724);
}

double NNfunction_ss_cLdL::synapse0x2c5e3f0() {
   return (neuron0x2c43fb0()*0.0016423);
}

double NNfunction_ss_cLdL::synapse0x2c5e430() {
   return (neuron0x2c442f0()*-0.0383738);
}

double NNfunction_ss_cLdL::synapse0x2c5e470() {
   return (neuron0x2c44630()*0.01749);
}

double NNfunction_ss_cLdL::synapse0x2c51d80() {
   return (neuron0x2c44970()*-0.00419306);
}

double NNfunction_ss_cLdL::synapse0x2c51dc0() {
   return (neuron0x2c44ed0()*-0.00441624);
}

double NNfunction_ss_cLdL::synapse0x2c5e5c0() {
   return (neuron0x2c450f0()*0.0482429);
}

double NNfunction_ss_cLdL::synapse0x2c5e600() {
   return (neuron0x2c45430()*-0.0122676);
}

double NNfunction_ss_cLdL::synapse0x2c5e640() {
   return (neuron0x2c45770()*0.00403287);
}

double NNfunction_ss_cLdL::synapse0x2c5e680() {
   return (neuron0x2c45ab0()*0.00633568);
}

double NNfunction_ss_cLdL::synapse0x2c5e6c0() {
   return (neuron0x2c45df0()*-0.0190256);
}

double NNfunction_ss_cLdL::synapse0x2c5e700() {
   return (neuron0x2c46130()*0.00842092);
}

double NNfunction_ss_cLdL::synapse0x2c5ea80() {
   return (neuron0x2c41570()*-0.115128);
}

double NNfunction_ss_cLdL::synapse0x2c5eac0() {
   return (neuron0x2c418b0()*0.0711137);
}

double NNfunction_ss_cLdL::synapse0x2c5eb00() {
   return (neuron0x2c41bf0()*-0.143691);
}

double NNfunction_ss_cLdL::synapse0x2c5eb40() {
   return (neuron0x2c41f30()*1.01088);
}

double NNfunction_ss_cLdL::synapse0x2c5eb80() {
   return (neuron0x2c42270()*-0.037922);
}

double NNfunction_ss_cLdL::synapse0x2c5ebc0() {
   return (neuron0x2c425b0()*-0.13827);
}

double NNfunction_ss_cLdL::synapse0x2c5ec00() {
   return (neuron0x2c428f0()*-0.076802);
}

double NNfunction_ss_cLdL::synapse0x2c5ec40() {
   return (neuron0x2c42c30()*-0.157367);
}

double NNfunction_ss_cLdL::synapse0x2c5ec80() {
   return (neuron0x2c42f70()*0.0810911);
}

double NNfunction_ss_cLdL::synapse0x2c5ecc0() {
   return (neuron0x2c432b0()*-0.237644);
}

double NNfunction_ss_cLdL::synapse0x2c5ed00() {
   return (neuron0x2c435f0()*0.0764516);
}

double NNfunction_ss_cLdL::synapse0x2c5ed40() {
   return (neuron0x2c43930()*0.560435);
}

double NNfunction_ss_cLdL::synapse0x2c5ed80() {
   return (neuron0x2c43c70()*0.614182);
}

double NNfunction_ss_cLdL::synapse0x2c5edc0() {
   return (neuron0x2c43fb0()*0.149377);
}

double NNfunction_ss_cLdL::synapse0x2c5ee00() {
   return (neuron0x2c442f0()*-0.0470547);
}

double NNfunction_ss_cLdL::synapse0x2c5ee40() {
   return (neuron0x2c44630()*-0.133345);
}

double NNfunction_ss_cLdL::synapse0x2c5e8d0() {
   return (neuron0x2c44970()*0.0554357);
}

double NNfunction_ss_cLdL::synapse0x2c5e910() {
   return (neuron0x2c44ed0()*-0.321006);
}

double NNfunction_ss_cLdL::synapse0x2c5ef90() {
   return (neuron0x2c450f0()*-0.0647652);
}

double NNfunction_ss_cLdL::synapse0x2c5efd0() {
   return (neuron0x2c45430()*0.0733847);
}

double NNfunction_ss_cLdL::synapse0x2c5f010() {
   return (neuron0x2c45770()*0.113286);
}

double NNfunction_ss_cLdL::synapse0x2c5f050() {
   return (neuron0x2c45ab0()*-0.270133);
}

double NNfunction_ss_cLdL::synapse0x2c5f090() {
   return (neuron0x2c45df0()*0.180977);
}

double NNfunction_ss_cLdL::synapse0x2c5f0d0() {
   return (neuron0x2c46130()*-0.100561);
}

double NNfunction_ss_cLdL::synapse0x2c5f450() {
   return (neuron0x2c41570()*-0.258406);
}

double NNfunction_ss_cLdL::synapse0x2c5f490() {
   return (neuron0x2c418b0()*0.250151);
}

double NNfunction_ss_cLdL::synapse0x2c5f4d0() {
   return (neuron0x2c41bf0()*0.148981);
}

double NNfunction_ss_cLdL::synapse0x2c5f510() {
   return (neuron0x2c41f30()*0.390334);
}

double NNfunction_ss_cLdL::synapse0x2c5f550() {
   return (neuron0x2c42270()*-0.534556);
}

double NNfunction_ss_cLdL::synapse0x2c5f590() {
   return (neuron0x2c425b0()*0.118927);
}

double NNfunction_ss_cLdL::synapse0x2c5f5d0() {
   return (neuron0x2c428f0()*-0.137021);
}

double NNfunction_ss_cLdL::synapse0x2c5f610() {
   return (neuron0x2c42c30()*-0.236387);
}

double NNfunction_ss_cLdL::synapse0x2c5f650() {
   return (neuron0x2c42f70()*0.0222068);
}

double NNfunction_ss_cLdL::synapse0x2c5f690() {
   return (neuron0x2c432b0()*0.10732);
}

double NNfunction_ss_cLdL::synapse0x2c5f6d0() {
   return (neuron0x2c435f0()*0.0585398);
}

double NNfunction_ss_cLdL::synapse0x2c5f710() {
   return (neuron0x2c43930()*-0.2097);
}

double NNfunction_ss_cLdL::synapse0x2c5f750() {
   return (neuron0x2c43c70()*-0.619388);
}

double NNfunction_ss_cLdL::synapse0x2c5f790() {
   return (neuron0x2c43fb0()*-0.00550732);
}

double NNfunction_ss_cLdL::synapse0x2c5f7d0() {
   return (neuron0x2c442f0()*0.168217);
}

double NNfunction_ss_cLdL::synapse0x2c5f810() {
   return (neuron0x2c44630()*-0.383386);
}

double NNfunction_ss_cLdL::synapse0x2c5f2a0() {
   return (neuron0x2c44970()*0.183871);
}

double NNfunction_ss_cLdL::synapse0x2c5f2e0() {
   return (neuron0x2c44ed0()*0.22684);
}

double NNfunction_ss_cLdL::synapse0x2c5f960() {
   return (neuron0x2c450f0()*0.233905);
}

double NNfunction_ss_cLdL::synapse0x2c5f9a0() {
   return (neuron0x2c45430()*0.269005);
}

double NNfunction_ss_cLdL::synapse0x2c5f9e0() {
   return (neuron0x2c45770()*-0.0377967);
}

double NNfunction_ss_cLdL::synapse0x2c5fa20() {
   return (neuron0x2c45ab0()*0.00732291);
}

double NNfunction_ss_cLdL::synapse0x2c5fa60() {
   return (neuron0x2c45df0()*0.0375787);
}

double NNfunction_ss_cLdL::synapse0x2c5faa0() {
   return (neuron0x2c46130()*0.181079);
}

double NNfunction_ss_cLdL::synapse0x2c5fe20() {
   return (neuron0x2c41570()*0.265898);
}

double NNfunction_ss_cLdL::synapse0x2c5fe60() {
   return (neuron0x2c418b0()*0.109861);
}

double NNfunction_ss_cLdL::synapse0x2c5fea0() {
   return (neuron0x2c41bf0()*-0.462878);
}

double NNfunction_ss_cLdL::synapse0x2c5fee0() {
   return (neuron0x2c41f30()*0.102657);
}

double NNfunction_ss_cLdL::synapse0x2c5ff20() {
   return (neuron0x2c42270()*0.22198);
}

double NNfunction_ss_cLdL::synapse0x2c5ff60() {
   return (neuron0x2c425b0()*0.327781);
}

double NNfunction_ss_cLdL::synapse0x2c5ffa0() {
   return (neuron0x2c428f0()*0.0233195);
}

double NNfunction_ss_cLdL::synapse0x2c5ffe0() {
   return (neuron0x2c42c30()*-0.152304);
}

double NNfunction_ss_cLdL::synapse0x2c60020() {
   return (neuron0x2c42f70()*-0.307817);
}

double NNfunction_ss_cLdL::synapse0x2c60060() {
   return (neuron0x2c432b0()*-0.146469);
}

double NNfunction_ss_cLdL::synapse0x2c600a0() {
   return (neuron0x2c435f0()*0.182522);
}

double NNfunction_ss_cLdL::synapse0x2c600e0() {
   return (neuron0x2c43930()*-0.323242);
}

double NNfunction_ss_cLdL::synapse0x2c60120() {
   return (neuron0x2c43c70()*0.286794);
}

double NNfunction_ss_cLdL::synapse0x2c60160() {
   return (neuron0x2c43fb0()*-0.806707);
}

double NNfunction_ss_cLdL::synapse0x2c601a0() {
   return (neuron0x2c442f0()*-0.0470622);
}

double NNfunction_ss_cLdL::synapse0x2c601e0() {
   return (neuron0x2c44630()*-0.504646);
}

double NNfunction_ss_cLdL::synapse0x2c5fc70() {
   return (neuron0x2c44970()*-0.516439);
}

double NNfunction_ss_cLdL::synapse0x2c5fcb0() {
   return (neuron0x2c44ed0()*-0.491052);
}

double NNfunction_ss_cLdL::synapse0x2c60330() {
   return (neuron0x2c450f0()*-0.38012);
}

double NNfunction_ss_cLdL::synapse0x2c60370() {
   return (neuron0x2c45430()*0.202447);
}

double NNfunction_ss_cLdL::synapse0x2c603b0() {
   return (neuron0x2c45770()*0.141291);
}

double NNfunction_ss_cLdL::synapse0x2c603f0() {
   return (neuron0x2c45ab0()*0.684671);
}

double NNfunction_ss_cLdL::synapse0x2c60430() {
   return (neuron0x2c45df0()*0.0196621);
}

double NNfunction_ss_cLdL::synapse0x2c60470() {
   return (neuron0x2c46130()*0.252746);
}

double NNfunction_ss_cLdL::synapse0x2c607f0() {
   return (neuron0x2c41570()*0.245367);
}

double NNfunction_ss_cLdL::synapse0x2c60830() {
   return (neuron0x2c418b0()*0.220948);
}

double NNfunction_ss_cLdL::synapse0x2c60870() {
   return (neuron0x2c41bf0()*-0.0611455);
}

double NNfunction_ss_cLdL::synapse0x2c608b0() {
   return (neuron0x2c41f30()*-0.101358);
}

double NNfunction_ss_cLdL::synapse0x2c608f0() {
   return (neuron0x2c42270()*-0.399303);
}

double NNfunction_ss_cLdL::synapse0x2c60930() {
   return (neuron0x2c425b0()*-0.00580342);
}

double NNfunction_ss_cLdL::synapse0x2c60970() {
   return (neuron0x2c428f0()*0.391504);
}

double NNfunction_ss_cLdL::synapse0x2c609b0() {
   return (neuron0x2c42c30()*-0.165385);
}

double NNfunction_ss_cLdL::synapse0x2c609f0() {
   return (neuron0x2c42f70()*0.21794);
}

double NNfunction_ss_cLdL::synapse0x2c60a30() {
   return (neuron0x2c432b0()*0.159837);
}

double NNfunction_ss_cLdL::synapse0x2c60a70() {
   return (neuron0x2c435f0()*0.319505);
}

double NNfunction_ss_cLdL::synapse0x2c60ab0() {
   return (neuron0x2c43930()*-1.10813);
}

double NNfunction_ss_cLdL::synapse0x2c60af0() {
   return (neuron0x2c43c70()*0.218557);
}

double NNfunction_ss_cLdL::synapse0x2c60b30() {
   return (neuron0x2c43fb0()*0.351749);
}

double NNfunction_ss_cLdL::synapse0x2c60b70() {
   return (neuron0x2c442f0()*-1.12286);
}

double NNfunction_ss_cLdL::synapse0x2c60bb0() {
   return (neuron0x2c44630()*-0.668996);
}

double NNfunction_ss_cLdL::synapse0x2c60640() {
   return (neuron0x2c44970()*0.468203);
}

double NNfunction_ss_cLdL::synapse0x2c60680() {
   return (neuron0x2c44ed0()*-0.0107746);
}

double NNfunction_ss_cLdL::synapse0x2c60d00() {
   return (neuron0x2c450f0()*0.143303);
}

double NNfunction_ss_cLdL::synapse0x2c60d40() {
   return (neuron0x2c45430()*-0.259226);
}

double NNfunction_ss_cLdL::synapse0x2c60d80() {
   return (neuron0x2c45770()*0.0435107);
}

double NNfunction_ss_cLdL::synapse0x2c60dc0() {
   return (neuron0x2c45ab0()*0.158528);
}

double NNfunction_ss_cLdL::synapse0x2c60e00() {
   return (neuron0x2c45df0()*0.0857886);
}

double NNfunction_ss_cLdL::synapse0x2c60e40() {
   return (neuron0x2c46130()*-0.125604);
}

double NNfunction_ss_cLdL::synapse0x2c611c0() {
   return (neuron0x2c41570()*-0.0060799);
}

double NNfunction_ss_cLdL::synapse0x2c61200() {
   return (neuron0x2c418b0()*-0.00188278);
}

double NNfunction_ss_cLdL::synapse0x2c61240() {
   return (neuron0x2c41bf0()*-0.0103233);
}

double NNfunction_ss_cLdL::synapse0x2c61280() {
   return (neuron0x2c41f30()*-1.98313);
}

double NNfunction_ss_cLdL::synapse0x2c612c0() {
   return (neuron0x2c42270()*0.0133572);
}

double NNfunction_ss_cLdL::synapse0x2c61300() {
   return (neuron0x2c425b0()*-0.0121818);
}

double NNfunction_ss_cLdL::synapse0x2c61340() {
   return (neuron0x2c428f0()*-0.00372298);
}

double NNfunction_ss_cLdL::synapse0x2c61380() {
   return (neuron0x2c42c30()*-0.0116347);
}

double NNfunction_ss_cLdL::synapse0x2c613c0() {
   return (neuron0x2c42f70()*-0.00988883);
}

double NNfunction_ss_cLdL::synapse0x2c61400() {
   return (neuron0x2c432b0()*-0.000300195);
}

double NNfunction_ss_cLdL::synapse0x2c61440() {
   return (neuron0x2c435f0()*0.000867767);
}

double NNfunction_ss_cLdL::synapse0x2c61480() {
   return (neuron0x2c43930()*0.115825);
}

double NNfunction_ss_cLdL::synapse0x2c614c0() {
   return (neuron0x2c43c70()*0.105072);
}

double NNfunction_ss_cLdL::synapse0x2c61500() {
   return (neuron0x2c43fb0()*-0.00374277);
}

double NNfunction_ss_cLdL::synapse0x2c61540() {
   return (neuron0x2c442f0()*0.00450261);
}

double NNfunction_ss_cLdL::synapse0x2c61580() {
   return (neuron0x2c44630()*0.0205851);
}

double NNfunction_ss_cLdL::synapse0x2c61010() {
   return (neuron0x2c44970()*-0.00244148);
}

double NNfunction_ss_cLdL::synapse0x2c61050() {
   return (neuron0x2c44ed0()*-0.00103851);
}

double NNfunction_ss_cLdL::synapse0x2c616d0() {
   return (neuron0x2c450f0()*0.023585);
}

double NNfunction_ss_cLdL::synapse0x2c61710() {
   return (neuron0x2c45430()*-0.0134244);
}

double NNfunction_ss_cLdL::synapse0x2c61750() {
   return (neuron0x2c45770()*0.00118191);
}

double NNfunction_ss_cLdL::synapse0x2c61790() {
   return (neuron0x2c45ab0()*-0.00473562);
}

double NNfunction_ss_cLdL::synapse0x2c617d0() {
   return (neuron0x2c45df0()*0.0123362);
}

double NNfunction_ss_cLdL::synapse0x2c61810() {
   return (neuron0x2c46130()*-0.0105752);
}

double NNfunction_ss_cLdL::synapse0x2c61b90() {
   return (neuron0x2c41570()*-0.0648699);
}

double NNfunction_ss_cLdL::synapse0x2c61bd0() {
   return (neuron0x2c418b0()*-0.0289135);
}

double NNfunction_ss_cLdL::synapse0x2c61c10() {
   return (neuron0x2c41bf0()*0.0719452);
}

double NNfunction_ss_cLdL::synapse0x2c61c50() {
   return (neuron0x2c41f30()*-0.269261);
}

double NNfunction_ss_cLdL::synapse0x2c61c90() {
   return (neuron0x2c42270()*-0.0563993);
}

double NNfunction_ss_cLdL::synapse0x2c61cd0() {
   return (neuron0x2c425b0()*0.0201313);
}

double NNfunction_ss_cLdL::synapse0x2c61d10() {
   return (neuron0x2c428f0()*0.0367614);
}

double NNfunction_ss_cLdL::synapse0x2c61d50() {
   return (neuron0x2c42c30()*0.0774198);
}

double NNfunction_ss_cLdL::synapse0x2c61d90() {
   return (neuron0x2c42f70()*0.0641191);
}

double NNfunction_ss_cLdL::synapse0x2c61dd0() {
   return (neuron0x2c432b0()*-0.0605706);
}

double NNfunction_ss_cLdL::synapse0x2c61e10() {
   return (neuron0x2c435f0()*0.0109295);
}

double NNfunction_ss_cLdL::synapse0x2c61e50() {
   return (neuron0x2c43930()*-0.513619);
}

double NNfunction_ss_cLdL::synapse0x2c61e90() {
   return (neuron0x2c43c70()*-2.67359);
}

double NNfunction_ss_cLdL::synapse0x2c61ed0() {
   return (neuron0x2c43fb0()*0.0191457);
}

double NNfunction_ss_cLdL::synapse0x2c61f10() {
   return (neuron0x2c442f0()*-0.0206251);
}

double NNfunction_ss_cLdL::synapse0x2c61f50() {
   return (neuron0x2c44630()*-0.0691357);
}

double NNfunction_ss_cLdL::synapse0x2c619e0() {
   return (neuron0x2c44970()*0.0371315);
}

double NNfunction_ss_cLdL::synapse0x2c61a20() {
   return (neuron0x2c44ed0()*-0.0354313);
}

double NNfunction_ss_cLdL::synapse0x2c620a0() {
   return (neuron0x2c450f0()*-0.00541563);
}

double NNfunction_ss_cLdL::synapse0x2c620e0() {
   return (neuron0x2c45430()*0.0210288);
}

double NNfunction_ss_cLdL::synapse0x2c62120() {
   return (neuron0x2c45770()*0.00730079);
}

double NNfunction_ss_cLdL::synapse0x2c62160() {
   return (neuron0x2c45ab0()*0.00762314);
}

double NNfunction_ss_cLdL::synapse0x2c621a0() {
   return (neuron0x2c45df0()*-0.03932);
}

double NNfunction_ss_cLdL::synapse0x2c621e0() {
   return (neuron0x2c46130()*0.0186346);
}

double NNfunction_ss_cLdL::synapse0x2c62560() {
   return (neuron0x2c41570()*-0.0333652);
}

double NNfunction_ss_cLdL::synapse0x2c625a0() {
   return (neuron0x2c418b0()*0.00477134);
}

double NNfunction_ss_cLdL::synapse0x2c625e0() {
   return (neuron0x2c41bf0()*0.0547049);
}

double NNfunction_ss_cLdL::synapse0x2c62620() {
   return (neuron0x2c41f30()*-16.7408);
}

double NNfunction_ss_cLdL::synapse0x2c62660() {
   return (neuron0x2c42270()*-0.0543597);
}

double NNfunction_ss_cLdL::synapse0x2c626a0() {
   return (neuron0x2c425b0()*-0.00635914);
}

double NNfunction_ss_cLdL::synapse0x2c626e0() {
   return (neuron0x2c428f0()*-0.00334406);
}

double NNfunction_ss_cLdL::synapse0x2c62720() {
   return (neuron0x2c42c30()*0.00285041);
}

double NNfunction_ss_cLdL::synapse0x2c62760() {
   return (neuron0x2c42f70()*0.0375772);
}

double NNfunction_ss_cLdL::synapse0x2c627a0() {
   return (neuron0x2c432b0()*-0.00256608);
}

double NNfunction_ss_cLdL::synapse0x2c627e0() {
   return (neuron0x2c435f0()*0.012627);
}

double NNfunction_ss_cLdL::synapse0x2c62820() {
   return (neuron0x2c43930()*0.072223);
}

double NNfunction_ss_cLdL::synapse0x2c62860() {
   return (neuron0x2c43c70()*0.0979878);
}

double NNfunction_ss_cLdL::synapse0x2c628a0() {
   return (neuron0x2c43fb0()*0.0669533);
}

double NNfunction_ss_cLdL::synapse0x2c628e0() {
   return (neuron0x2c442f0()*-0.0305812);
}

double NNfunction_ss_cLdL::synapse0x2c62920() {
   return (neuron0x2c44630()*0.0235234);
}

double NNfunction_ss_cLdL::synapse0x2c623b0() {
   return (neuron0x2c44970()*0.0314919);
}

double NNfunction_ss_cLdL::synapse0x2c623f0() {
   return (neuron0x2c44ed0()*-0.0135798);
}

double NNfunction_ss_cLdL::synapse0x2c62a70() {
   return (neuron0x2c450f0()*0.065058);
}

double NNfunction_ss_cLdL::synapse0x2c62ab0() {
   return (neuron0x2c45430()*0.0330323);
}

double NNfunction_ss_cLdL::synapse0x2c62af0() {
   return (neuron0x2c45770()*-0.0376043);
}

double NNfunction_ss_cLdL::synapse0x2c62b30() {
   return (neuron0x2c45ab0()*-0.00148428);
}

double NNfunction_ss_cLdL::synapse0x2c62b70() {
   return (neuron0x2c45df0()*-0.0371602);
}

double NNfunction_ss_cLdL::synapse0x2c62bb0() {
   return (neuron0x2c46130()*-0.0129735);
}

double NNfunction_ss_cLdL::synapse0x2c4b660() {
   return (neuron0x2c41570()*0.011564);
}

double NNfunction_ss_cLdL::synapse0x2c4b6a0() {
   return (neuron0x2c418b0()*-0.14822);
}

double NNfunction_ss_cLdL::synapse0x2c4b6e0() {
   return (neuron0x2c41bf0()*0.0281258);
}

double NNfunction_ss_cLdL::synapse0x2c4b720() {
   return (neuron0x2c41f30()*0.461781);
}

double NNfunction_ss_cLdL::synapse0x2c4b760() {
   return (neuron0x2c42270()*-0.0744642);
}

double NNfunction_ss_cLdL::synapse0x2c4b7a0() {
   return (neuron0x2c425b0()*0.283749);
}

double NNfunction_ss_cLdL::synapse0x2c4b7e0() {
   return (neuron0x2c428f0()*0.16181);
}

double NNfunction_ss_cLdL::synapse0x2c4b820() {
   return (neuron0x2c42c30()*-0.0806402);
}

double NNfunction_ss_cLdL::synapse0x2c63340() {
   return (neuron0x2c42f70()*-0.0346263);
}

double NNfunction_ss_cLdL::synapse0x2c63380() {
   return (neuron0x2c432b0()*0.0424823);
}

double NNfunction_ss_cLdL::synapse0x2c633c0() {
   return (neuron0x2c435f0()*-0.162012);
}

double NNfunction_ss_cLdL::synapse0x2c63400() {
   return (neuron0x2c43930()*-0.0599428);
}

double NNfunction_ss_cLdL::synapse0x2c63440() {
   return (neuron0x2c43c70()*-0.440649);
}

double NNfunction_ss_cLdL::synapse0x2c63480() {
   return (neuron0x2c43fb0()*0.131672);
}

double NNfunction_ss_cLdL::synapse0x2c634c0() {
   return (neuron0x2c442f0()*0.195084);
}

double NNfunction_ss_cLdL::synapse0x2c63500() {
   return (neuron0x2c44630()*-0.289162);
}

double NNfunction_ss_cLdL::synapse0x2c62d80() {
   return (neuron0x2c44970()*0.111236);
}

double NNfunction_ss_cLdL::synapse0x2c62dc0() {
   return (neuron0x2c44ed0()*-0.302406);
}

double NNfunction_ss_cLdL::synapse0x2c63650() {
   return (neuron0x2c450f0()*-0.228683);
}

double NNfunction_ss_cLdL::synapse0x2c63690() {
   return (neuron0x2c45430()*-0.533724);
}

double NNfunction_ss_cLdL::synapse0x2c636d0() {
   return (neuron0x2c45770()*-0.00326425);
}

double NNfunction_ss_cLdL::synapse0x2c63710() {
   return (neuron0x2c45ab0()*0.110534);
}

double NNfunction_ss_cLdL::synapse0x2c63750() {
   return (neuron0x2c45df0()*0.0156348);
}

double NNfunction_ss_cLdL::synapse0x2c63790() {
   return (neuron0x2c46130()*0.066262);
}

double NNfunction_ss_cLdL::synapse0x2c63b10() {
   return (neuron0x2c41570()*0.208572);
}

double NNfunction_ss_cLdL::synapse0x2c63b50() {
   return (neuron0x2c418b0()*0.266337);
}

double NNfunction_ss_cLdL::synapse0x2c63b90() {
   return (neuron0x2c41bf0()*-0.33069);
}

double NNfunction_ss_cLdL::synapse0x2c63bd0() {
   return (neuron0x2c41f30()*0.0326795);
}

double NNfunction_ss_cLdL::synapse0x2c63c10() {
   return (neuron0x2c42270()*-0.228936);
}

double NNfunction_ss_cLdL::synapse0x2c63c50() {
   return (neuron0x2c425b0()*0.0927273);
}

double NNfunction_ss_cLdL::synapse0x2c63c90() {
   return (neuron0x2c428f0()*0.283688);
}

double NNfunction_ss_cLdL::synapse0x2c63cd0() {
   return (neuron0x2c42c30()*-0.301062);
}

double NNfunction_ss_cLdL::synapse0x2c63d10() {
   return (neuron0x2c42f70()*0.184751);
}

double NNfunction_ss_cLdL::synapse0x2c63d50() {
   return (neuron0x2c432b0()*-0.0998312);
}

double NNfunction_ss_cLdL::synapse0x2c63d90() {
   return (neuron0x2c435f0()*-0.37195);
}

double NNfunction_ss_cLdL::synapse0x2c63dd0() {
   return (neuron0x2c43930()*0.682615);
}

double NNfunction_ss_cLdL::synapse0x2c63e10() {
   return (neuron0x2c43c70()*0.0232432);
}

double NNfunction_ss_cLdL::synapse0x2c63e50() {
   return (neuron0x2c43fb0()*0.26868);
}

double NNfunction_ss_cLdL::synapse0x2c63e90() {
   return (neuron0x2c442f0()*0.13542);
}

double NNfunction_ss_cLdL::synapse0x2c63ed0() {
   return (neuron0x2c44630()*0.045261);
}

double NNfunction_ss_cLdL::synapse0x2c63960() {
   return (neuron0x2c44970()*0.297713);
}

double NNfunction_ss_cLdL::synapse0x2c639a0() {
   return (neuron0x2c44ed0()*-0.0806383);
}

double NNfunction_ss_cLdL::synapse0x2c64020() {
   return (neuron0x2c450f0()*0.00996012);
}

double NNfunction_ss_cLdL::synapse0x2c64060() {
   return (neuron0x2c45430()*0.0437655);
}

double NNfunction_ss_cLdL::synapse0x2c640a0() {
   return (neuron0x2c45770()*0.190907);
}

double NNfunction_ss_cLdL::synapse0x2c640e0() {
   return (neuron0x2c45ab0()*-0.00302824);
}

double NNfunction_ss_cLdL::synapse0x2c64120() {
   return (neuron0x2c45df0()*0.173336);
}

double NNfunction_ss_cLdL::synapse0x2c64160() {
   return (neuron0x2c46130()*-0.565517);
}

double NNfunction_ss_cLdL::synapse0x2c644e0() {
   return (neuron0x2c41570()*0.0662523);
}

double NNfunction_ss_cLdL::synapse0x2c64520() {
   return (neuron0x2c418b0()*0.147227);
}

double NNfunction_ss_cLdL::synapse0x2c64560() {
   return (neuron0x2c41bf0()*0.245407);
}

double NNfunction_ss_cLdL::synapse0x2c645a0() {
   return (neuron0x2c41f30()*0.965164);
}

double NNfunction_ss_cLdL::synapse0x2c645e0() {
   return (neuron0x2c42270()*-0.0907635);
}

double NNfunction_ss_cLdL::synapse0x2c64620() {
   return (neuron0x2c425b0()*-0.0115551);
}

double NNfunction_ss_cLdL::synapse0x2c64660() {
   return (neuron0x2c428f0()*0.0290792);
}

double NNfunction_ss_cLdL::synapse0x2c646a0() {
   return (neuron0x2c42c30()*-0.00420909);
}

double NNfunction_ss_cLdL::synapse0x2c646e0() {
   return (neuron0x2c42f70()*0.290837);
}

double NNfunction_ss_cLdL::synapse0x2c64720() {
   return (neuron0x2c432b0()*0.14932);
}

double NNfunction_ss_cLdL::synapse0x2c64760() {
   return (neuron0x2c435f0()*0.0263498);
}

double NNfunction_ss_cLdL::synapse0x2c647a0() {
   return (neuron0x2c43930()*-0.163751);
}

double NNfunction_ss_cLdL::synapse0x2c647e0() {
   return (neuron0x2c43c70()*0.0308384);
}

double NNfunction_ss_cLdL::synapse0x2c64820() {
   return (neuron0x2c43fb0()*0.306657);
}

double NNfunction_ss_cLdL::synapse0x2c64860() {
   return (neuron0x2c442f0()*0.0760901);
}

double NNfunction_ss_cLdL::synapse0x2c648a0() {
   return (neuron0x2c44630()*0.0643824);
}

double NNfunction_ss_cLdL::synapse0x2c64330() {
   return (neuron0x2c44970()*-0.0501638);
}

double NNfunction_ss_cLdL::synapse0x2c64370() {
   return (neuron0x2c44ed0()*0.221569);
}

double NNfunction_ss_cLdL::synapse0x2c54ea0() {
   return (neuron0x2c450f0()*-0.0179906);
}

double NNfunction_ss_cLdL::synapse0x2c54ee0() {
   return (neuron0x2c45430()*0.196042);
}

double NNfunction_ss_cLdL::synapse0x2c54f20() {
   return (neuron0x2c45770()*0.0689126);
}

double NNfunction_ss_cLdL::synapse0x2c54f60() {
   return (neuron0x2c45ab0()*0.0633685);
}

double NNfunction_ss_cLdL::synapse0x2c54fa0() {
   return (neuron0x2c45df0()*-0.072966);
}

double NNfunction_ss_cLdL::synapse0x2c54fe0() {
   return (neuron0x2c46130()*0.106535);
}

double NNfunction_ss_cLdL::synapse0x2c55360() {
   return (neuron0x2c41570()*-0.0344483);
}

double NNfunction_ss_cLdL::synapse0x2c553a0() {
   return (neuron0x2c418b0()*-0.0411602);
}

double NNfunction_ss_cLdL::synapse0x2c553e0() {
   return (neuron0x2c41bf0()*0.0281317);
}

double NNfunction_ss_cLdL::synapse0x2c55420() {
   return (neuron0x2c41f30()*0.529909);
}

double NNfunction_ss_cLdL::synapse0x2c55460() {
   return (neuron0x2c42270()*0.0940152);
}

double NNfunction_ss_cLdL::synapse0x2c554a0() {
   return (neuron0x2c425b0()*0.0431416);
}

double NNfunction_ss_cLdL::synapse0x2c554e0() {
   return (neuron0x2c428f0()*0.026318);
}

double NNfunction_ss_cLdL::synapse0x2c55520() {
   return (neuron0x2c42c30()*0.0339207);
}

double NNfunction_ss_cLdL::synapse0x2c55560() {
   return (neuron0x2c42f70()*-0.235112);
}

double NNfunction_ss_cLdL::synapse0x2c555a0() {
   return (neuron0x2c432b0()*-0.120865);
}

double NNfunction_ss_cLdL::synapse0x2c555e0() {
   return (neuron0x2c435f0()*-0.203284);
}

double NNfunction_ss_cLdL::synapse0x2c55620() {
   return (neuron0x2c43930()*0.701602);
}

double NNfunction_ss_cLdL::synapse0x2c55660() {
   return (neuron0x2c43c70()*0.929969);
}

double NNfunction_ss_cLdL::synapse0x2c556a0() {
   return (neuron0x2c43fb0()*-0.117647);
}

double NNfunction_ss_cLdL::synapse0x2c556e0() {
   return (neuron0x2c442f0()*0.0164422);
}

double NNfunction_ss_cLdL::synapse0x2c55720() {
   return (neuron0x2c44630()*0.15991);
}

double NNfunction_ss_cLdL::synapse0x2c551b0() {
   return (neuron0x2c44970()*0.0351124);
}

double NNfunction_ss_cLdL::synapse0x2c551f0() {
   return (neuron0x2c44ed0()*-0.0286715);
}

double NNfunction_ss_cLdL::synapse0x2c55870() {
   return (neuron0x2c450f0()*0.00252176);
}

double NNfunction_ss_cLdL::synapse0x2c558b0() {
   return (neuron0x2c45430()*-0.0887982);
}

double NNfunction_ss_cLdL::synapse0x2c558f0() {
   return (neuron0x2c45770()*-0.035056);
}

double NNfunction_ss_cLdL::synapse0x2c55930() {
   return (neuron0x2c45ab0()*-0.0960604);
}

double NNfunction_ss_cLdL::synapse0x2c55970() {
   return (neuron0x2c45df0()*-0.0396424);
}

double NNfunction_ss_cLdL::synapse0x2c559b0() {
   return (neuron0x2c46130()*-0.0400879);
}

double NNfunction_ss_cLdL::synapse0x2c55d30() {
   return (neuron0x2c41570()*0.0423466);
}

double NNfunction_ss_cLdL::synapse0x2c55d70() {
   return (neuron0x2c418b0()*-0.00361893);
}

double NNfunction_ss_cLdL::synapse0x2c55db0() {
   return (neuron0x2c41bf0()*-0.106075);
}

double NNfunction_ss_cLdL::synapse0x2c55df0() {
   return (neuron0x2c41f30()*0.99933);
}

double NNfunction_ss_cLdL::synapse0x2c55e30() {
   return (neuron0x2c42270()*-0.0999136);
}

double NNfunction_ss_cLdL::synapse0x2c55e70() {
   return (neuron0x2c425b0()*0.206926);
}

double NNfunction_ss_cLdL::synapse0x2c55eb0() {
   return (neuron0x2c428f0()*-0.0802851);
}

double NNfunction_ss_cLdL::synapse0x2c55ef0() {
   return (neuron0x2c42c30()*0.390771);
}

double NNfunction_ss_cLdL::synapse0x2c55f30() {
   return (neuron0x2c42f70()*0.050386);
}

double NNfunction_ss_cLdL::synapse0x2c55f70() {
   return (neuron0x2c432b0()*0.0895059);
}

double NNfunction_ss_cLdL::synapse0x2c55fb0() {
   return (neuron0x2c435f0()*0.0389671);
}

double NNfunction_ss_cLdL::synapse0x2c55ff0() {
   return (neuron0x2c43930()*-0.011296);
}

double NNfunction_ss_cLdL::synapse0x2c56030() {
   return (neuron0x2c43c70()*0.0208422);
}

double NNfunction_ss_cLdL::synapse0x2c56070() {
   return (neuron0x2c43fb0()*0.00800522);
}

double NNfunction_ss_cLdL::synapse0x2c560b0() {
   return (neuron0x2c442f0()*0.0757299);
}

double NNfunction_ss_cLdL::synapse0x2c560f0() {
   return (neuron0x2c44630()*-0.132274);
}

double NNfunction_ss_cLdL::synapse0x2c55b80() {
   return (neuron0x2c44970()*0.0811676);
}

double NNfunction_ss_cLdL::synapse0x2c55bc0() {
   return (neuron0x2c44ed0()*0.177413);
}

double NNfunction_ss_cLdL::synapse0x2c56240() {
   return (neuron0x2c450f0()*-0.115604);
}

double NNfunction_ss_cLdL::synapse0x2c56280() {
   return (neuron0x2c45430()*0.140617);
}

double NNfunction_ss_cLdL::synapse0x2c562c0() {
   return (neuron0x2c45770()*-0.0260155);
}

double NNfunction_ss_cLdL::synapse0x2c56300() {
   return (neuron0x2c45ab0()*0.0636364);
}

double NNfunction_ss_cLdL::synapse0x2c56340() {
   return (neuron0x2c45df0()*-0.0561324);
}

double NNfunction_ss_cLdL::synapse0x2c56380() {
   return (neuron0x2c46130()*-0.0427021);
}

double NNfunction_ss_cLdL::synapse0x2c56700() {
   return (neuron0x2c41570()*-0.205758);
}

double NNfunction_ss_cLdL::synapse0x2c56740() {
   return (neuron0x2c418b0()*0.0853782);
}

double NNfunction_ss_cLdL::synapse0x2c56780() {
   return (neuron0x2c41bf0()*-0.229215);
}

double NNfunction_ss_cLdL::synapse0x2c567c0() {
   return (neuron0x2c41f30()*0.34695);
}

double NNfunction_ss_cLdL::synapse0x2c56800() {
   return (neuron0x2c42270()*-0.19685);
}

double NNfunction_ss_cLdL::synapse0x2c56840() {
   return (neuron0x2c425b0()*-0.0891588);
}

double NNfunction_ss_cLdL::synapse0x2c56880() {
   return (neuron0x2c428f0()*0.121997);
}

double NNfunction_ss_cLdL::synapse0x2c568c0() {
   return (neuron0x2c42c30()*0.27145);
}

double NNfunction_ss_cLdL::synapse0x2c56900() {
   return (neuron0x2c42f70()*0.488186);
}

double NNfunction_ss_cLdL::synapse0x2c56940() {
   return (neuron0x2c432b0()*-0.125234);
}

double NNfunction_ss_cLdL::synapse0x2c56980() {
   return (neuron0x2c435f0()*-0.592487);
}

double NNfunction_ss_cLdL::synapse0x2c569c0() {
   return (neuron0x2c43930()*0.897476);
}

double NNfunction_ss_cLdL::synapse0x2c56a00() {
   return (neuron0x2c43c70()*0.745573);
}

double NNfunction_ss_cLdL::synapse0x2c56a40() {
   return (neuron0x2c43fb0()*0.915398);
}

double NNfunction_ss_cLdL::synapse0x2c56a80() {
   return (neuron0x2c442f0()*0.296847);
}

double NNfunction_ss_cLdL::synapse0x2c56ac0() {
   return (neuron0x2c44630()*0.632502);
}

double NNfunction_ss_cLdL::synapse0x2c56550() {
   return (neuron0x2c44970()*-0.376287);
}

double NNfunction_ss_cLdL::synapse0x2c56590() {
   return (neuron0x2c44ed0()*0.872613);
}

double NNfunction_ss_cLdL::synapse0x2c56c10() {
   return (neuron0x2c450f0()*0.423542);
}

double NNfunction_ss_cLdL::synapse0x2c56c50() {
   return (neuron0x2c45430()*0.247985);
}

double NNfunction_ss_cLdL::synapse0x2c56c90() {
   return (neuron0x2c45770()*0.114736);
}

double NNfunction_ss_cLdL::synapse0x2c56cd0() {
   return (neuron0x2c45ab0()*-0.0890719);
}

double NNfunction_ss_cLdL::synapse0x2c56d10() {
   return (neuron0x2c45df0()*-0.221106);
}

double NNfunction_ss_cLdL::synapse0x2c56d50() {
   return (neuron0x2c46130()*-0.492397);
}

double NNfunction_ss_cLdL::synapse0x2c68c20() {
   return (neuron0x2c41570()*0.103359);
}

double NNfunction_ss_cLdL::synapse0x2c68c60() {
   return (neuron0x2c418b0()*-0.357963);
}

double NNfunction_ss_cLdL::synapse0x2c68ca0() {
   return (neuron0x2c41bf0()*-0.0534049);
}

double NNfunction_ss_cLdL::synapse0x2c68ce0() {
   return (neuron0x2c41f30()*-0.724116);
}

double NNfunction_ss_cLdL::synapse0x2c68d20() {
   return (neuron0x2c42270()*-0.289307);
}

double NNfunction_ss_cLdL::synapse0x2c68d60() {
   return (neuron0x2c425b0()*-0.338479);
}

double NNfunction_ss_cLdL::synapse0x2c68da0() {
   return (neuron0x2c428f0()*-0.123413);
}

double NNfunction_ss_cLdL::synapse0x2c68de0() {
   return (neuron0x2c42c30()*-0.114243);
}

double NNfunction_ss_cLdL::synapse0x2c68e20() {
   return (neuron0x2c42f70()*0.0321013);
}

double NNfunction_ss_cLdL::synapse0x2c68e60() {
   return (neuron0x2c432b0()*-0.221757);
}

double NNfunction_ss_cLdL::synapse0x2c68ea0() {
   return (neuron0x2c435f0()*-0.148635);
}

double NNfunction_ss_cLdL::synapse0x2c68ee0() {
   return (neuron0x2c43930()*0.1116);
}

double NNfunction_ss_cLdL::synapse0x2c68f20() {
   return (neuron0x2c43c70()*-0.00125067);
}

double NNfunction_ss_cLdL::synapse0x2c68f60() {
   return (neuron0x2c43fb0()*0.190159);
}

double NNfunction_ss_cLdL::synapse0x2c68fa0() {
   return (neuron0x2c442f0()*-0.192362);
}

double NNfunction_ss_cLdL::synapse0x2c68fe0() {
   return (neuron0x2c44630()*-0.195122);
}

double NNfunction_ss_cLdL::synapse0x2c56d90() {
   return (neuron0x2c44970()*0.214055);
}

double NNfunction_ss_cLdL::synapse0x2c56dd0() {
   return (neuron0x2c44ed0()*-0.419845);
}

double NNfunction_ss_cLdL::synapse0x2c69130() {
   return (neuron0x2c450f0()*0.755547);
}

double NNfunction_ss_cLdL::synapse0x2c69170() {
   return (neuron0x2c45430()*-0.178699);
}

double NNfunction_ss_cLdL::synapse0x2c691b0() {
   return (neuron0x2c45770()*0.225706);
}

double NNfunction_ss_cLdL::synapse0x2c691f0() {
   return (neuron0x2c45ab0()*-0.0364109);
}

double NNfunction_ss_cLdL::synapse0x2c69230() {
   return (neuron0x2c45df0()*-0.0737917);
}

double NNfunction_ss_cLdL::synapse0x2c69270() {
   return (neuron0x2c46130()*0.172154);
}

double NNfunction_ss_cLdL::synapse0x2c695f0() {
   return (neuron0x2c41570()*-0.107759);
}

double NNfunction_ss_cLdL::synapse0x2c69630() {
   return (neuron0x2c418b0()*0.00256586);
}

double NNfunction_ss_cLdL::synapse0x2c69670() {
   return (neuron0x2c41bf0()*-0.132219);
}

double NNfunction_ss_cLdL::synapse0x2c696b0() {
   return (neuron0x2c41f30()*-0.126667);
}

double NNfunction_ss_cLdL::synapse0x2c696f0() {
   return (neuron0x2c42270()*-0.469207);
}

double NNfunction_ss_cLdL::synapse0x2c69730() {
   return (neuron0x2c425b0()*0.065583);
}

double NNfunction_ss_cLdL::synapse0x2c69770() {
   return (neuron0x2c428f0()*0.276757);
}

double NNfunction_ss_cLdL::synapse0x2c697b0() {
   return (neuron0x2c42c30()*0.311252);
}

double NNfunction_ss_cLdL::synapse0x2c697f0() {
   return (neuron0x2c42f70()*0.626115);
}

double NNfunction_ss_cLdL::synapse0x2c69830() {
   return (neuron0x2c432b0()*-0.756871);
}

double NNfunction_ss_cLdL::synapse0x2c69870() {
   return (neuron0x2c435f0()*0.205703);
}

double NNfunction_ss_cLdL::synapse0x2c698b0() {
   return (neuron0x2c43930()*-0.0549264);
}

double NNfunction_ss_cLdL::synapse0x2c698f0() {
   return (neuron0x2c43c70()*-0.0478969);
}

double NNfunction_ss_cLdL::synapse0x2c69930() {
   return (neuron0x2c43fb0()*-0.842325);
}

double NNfunction_ss_cLdL::synapse0x2c69970() {
   return (neuron0x2c442f0()*-0.190606);
}

double NNfunction_ss_cLdL::synapse0x2c699b0() {
   return (neuron0x2c44630()*-0.224749);
}

double NNfunction_ss_cLdL::synapse0x2c69440() {
   return (neuron0x2c44970()*-0.241811);
}

double NNfunction_ss_cLdL::synapse0x2c69480() {
   return (neuron0x2c44ed0()*0.0740341);
}

double NNfunction_ss_cLdL::synapse0x2c69b00() {
   return (neuron0x2c450f0()*0.460248);
}

double NNfunction_ss_cLdL::synapse0x2c69b40() {
   return (neuron0x2c45430()*-0.131713);
}

double NNfunction_ss_cLdL::synapse0x2c69b80() {
   return (neuron0x2c45770()*0.157123);
}

double NNfunction_ss_cLdL::synapse0x2c69bc0() {
   return (neuron0x2c45ab0()*0.298776);
}

double NNfunction_ss_cLdL::synapse0x2c69c00() {
   return (neuron0x2c45df0()*-0.121299);
}

double NNfunction_ss_cLdL::synapse0x2c69c40() {
   return (neuron0x2c46130()*0.162796);
}

double NNfunction_ss_cLdL::synapse0x2c69fc0() {
   return (neuron0x2c41570()*-0.107435);
}

double NNfunction_ss_cLdL::synapse0x2c6a000() {
   return (neuron0x2c418b0()*-0.169384);
}

double NNfunction_ss_cLdL::synapse0x2c6a040() {
   return (neuron0x2c41bf0()*-0.159875);
}

double NNfunction_ss_cLdL::synapse0x2c6a080() {
   return (neuron0x2c41f30()*0.0280797);
}

double NNfunction_ss_cLdL::synapse0x2c6a0c0() {
   return (neuron0x2c42270()*-0.269576);
}

double NNfunction_ss_cLdL::synapse0x2c6a100() {
   return (neuron0x2c425b0()*-0.244482);
}

double NNfunction_ss_cLdL::synapse0x2c6a140() {
   return (neuron0x2c428f0()*-0.124884);
}

double NNfunction_ss_cLdL::synapse0x2c6a180() {
   return (neuron0x2c42c30()*0.0975368);
}

double NNfunction_ss_cLdL::synapse0x2c6a1c0() {
   return (neuron0x2c42f70()*-0.3786);
}

double NNfunction_ss_cLdL::synapse0x2c6a200() {
   return (neuron0x2c432b0()*-0.466986);
}

double NNfunction_ss_cLdL::synapse0x2c6a240() {
   return (neuron0x2c435f0()*0.33287);
}

double NNfunction_ss_cLdL::synapse0x2c6a280() {
   return (neuron0x2c43930()*0.571605);
}

double NNfunction_ss_cLdL::synapse0x2c6a2c0() {
   return (neuron0x2c43c70()*0.273959);
}

double NNfunction_ss_cLdL::synapse0x2c6a300() {
   return (neuron0x2c43fb0()*0.384652);
}

double NNfunction_ss_cLdL::synapse0x2c6a340() {
   return (neuron0x2c442f0()*-0.393476);
}

double NNfunction_ss_cLdL::synapse0x2c6a380() {
   return (neuron0x2c44630()*0.0679964);
}

double NNfunction_ss_cLdL::synapse0x2c69e10() {
   return (neuron0x2c44970()*0.0176279);
}

double NNfunction_ss_cLdL::synapse0x2c69e50() {
   return (neuron0x2c44ed0()*0.412504);
}

double NNfunction_ss_cLdL::synapse0x2c6a4d0() {
   return (neuron0x2c450f0()*-0.013577);
}

double NNfunction_ss_cLdL::synapse0x2c6a510() {
   return (neuron0x2c45430()*0.648408);
}

double NNfunction_ss_cLdL::synapse0x2c6a550() {
   return (neuron0x2c45770()*-0.0535892);
}

double NNfunction_ss_cLdL::synapse0x2c6a590() {
   return (neuron0x2c45ab0()*-0.06877);
}

double NNfunction_ss_cLdL::synapse0x2c6a5d0() {
   return (neuron0x2c45df0()*-0.109785);
}

double NNfunction_ss_cLdL::synapse0x2c6a610() {
   return (neuron0x2c46130()*-0.102444);
}

double NNfunction_ss_cLdL::synapse0x2c6a990() {
   return (neuron0x2c41570()*0.276589);
}

double NNfunction_ss_cLdL::synapse0x2c6a9d0() {
   return (neuron0x2c418b0()*0.176929);
}

double NNfunction_ss_cLdL::synapse0x2c6aa10() {
   return (neuron0x2c41bf0()*-0.0188207);
}

double NNfunction_ss_cLdL::synapse0x2c6aa50() {
   return (neuron0x2c41f30()*0.582613);
}

double NNfunction_ss_cLdL::synapse0x2c6aa90() {
   return (neuron0x2c42270()*0.367512);
}

double NNfunction_ss_cLdL::synapse0x2c6aad0() {
   return (neuron0x2c425b0()*0.107444);
}

double NNfunction_ss_cLdL::synapse0x2c6ab10() {
   return (neuron0x2c428f0()*-0.430911);
}

double NNfunction_ss_cLdL::synapse0x2c6ab50() {
   return (neuron0x2c42c30()*-0.341804);
}

double NNfunction_ss_cLdL::synapse0x2c6ab90() {
   return (neuron0x2c42f70()*-0.108559);
}

double NNfunction_ss_cLdL::synapse0x2c6abd0() {
   return (neuron0x2c432b0()*0.418091);
}

double NNfunction_ss_cLdL::synapse0x2c6ac10() {
   return (neuron0x2c435f0()*-0.0248529);
}

double NNfunction_ss_cLdL::synapse0x2c6ac50() {
   return (neuron0x2c43930()*0.45913);
}

double NNfunction_ss_cLdL::synapse0x2c6ac90() {
   return (neuron0x2c43c70()*-0.394839);
}

double NNfunction_ss_cLdL::synapse0x2c6acd0() {
   return (neuron0x2c43fb0()*-0.528008);
}

double NNfunction_ss_cLdL::synapse0x2c6ad10() {
   return (neuron0x2c442f0()*0.0455396);
}

double NNfunction_ss_cLdL::synapse0x2c6ad50() {
   return (neuron0x2c44630()*-0.0781775);
}

double NNfunction_ss_cLdL::synapse0x2c6a7e0() {
   return (neuron0x2c44970()*0.164012);
}

double NNfunction_ss_cLdL::synapse0x2c6a820() {
   return (neuron0x2c44ed0()*0.363265);
}

double NNfunction_ss_cLdL::synapse0x2c6aea0() {
   return (neuron0x2c450f0()*-0.236448);
}

double NNfunction_ss_cLdL::synapse0x2c6aee0() {
   return (neuron0x2c45430()*0.160941);
}

double NNfunction_ss_cLdL::synapse0x2c6af20() {
   return (neuron0x2c45770()*-0.162725);
}

double NNfunction_ss_cLdL::synapse0x2c6af60() {
   return (neuron0x2c45ab0()*-0.196186);
}

double NNfunction_ss_cLdL::synapse0x2c6afa0() {
   return (neuron0x2c45df0()*0.330704);
}

double NNfunction_ss_cLdL::synapse0x2c6afe0() {
   return (neuron0x2c46130()*0.292543);
}

double NNfunction_ss_cLdL::synapse0x2c47580() {
   return (neuron0x2c465d0()*0.763377);
}

double NNfunction_ss_cLdL::synapse0x2c475c0() {
   return (neuron0x2c46ee0()*2.31305);
}

double NNfunction_ss_cLdL::synapse0x2c48a90() {
   return (neuron0x2c479c0()*0.0242767);
}

double NNfunction_ss_cLdL::synapse0x2c48ad0() {
   return (neuron0x2a01250()*-1.03068);
}

double NNfunction_ss_cLdL::synapse0x2c49460() {
   return (neuron0x2c487e0()*1.38595);
}

double NNfunction_ss_cLdL::synapse0x2c494a0() {
   return (neuron0x2c491b0()*-0.195014);
}

double NNfunction_ss_cLdL::synapse0x2c4a230() {
   return (neuron0x2c49f80()*7.87556);
}

double NNfunction_ss_cLdL::synapse0x2c4a270() {
   return (neuron0x2c4a950()*0.108566);
}

double NNfunction_ss_cLdL::synapse0x2c4ac00() {
   return (neuron0x2c4b320()*1.11092);
}

double NNfunction_ss_cLdL::synapse0x2c4ac40() {
   return (neuron0x2c4be00()*-1.37104);
}

double NNfunction_ss_cLdL::synapse0x2c4b5d0() {
   return (neuron0x2c4c7d0()*-1.97461);
}

double NNfunction_ss_cLdL::synapse0x2c4b610() {
   return (neuron0x2c498b0()*-1.68939);
}

double NNfunction_ss_cLdL::synapse0x2c4c0b0() {
   return (neuron0x2c4e380()*-1.04763);
}

double NNfunction_ss_cLdL::synapse0x2c4c0f0() {
   return (neuron0x2c4ed50()*-3.36012);
}

double NNfunction_ss_cLdL::synapse0x2c4ca80() {
   return (neuron0x2c4f720()*-1.68622);
}

double NNfunction_ss_cLdL::synapse0x2c4cac0() {
   return (neuron0x2c500f0()*-2.09271);
}

double NNfunction_ss_cLdL::synapse0x2c49b60() {
   return (neuron0x2c51f00()*1.1182);
}

double NNfunction_ss_cLdL::synapse0x2c49ba0() {
   return (neuron0x2c521e0()*1.3558);
}

double NNfunction_ss_cLdL::synapse0x2c4e630() {
   return (neuron0x2c52bb0()*0.916291);
}

double NNfunction_ss_cLdL::synapse0x2c4e670() {
   return (neuron0x2c53580()*-1.05184);
}

double NNfunction_ss_cLdL::synapse0x2c4f000() {
   return (neuron0x2c53f50()*0.986905);
}

double NNfunction_ss_cLdL::synapse0x2c4f040() {
   return (neuron0x2c54920()*-0.603202);
}

double NNfunction_ss_cLdL::synapse0x2c4f9d0() {
   return (neuron0x2c4d470()*1.28902);
}

double NNfunction_ss_cLdL::synapse0x2c4fa10() {
   return (neuron0x2c4de40()*-1.99496);
}

double NNfunction_ss_cLdL::synapse0x2c503a0() {
   return (neuron0x2c576b0()*1.14025);
}

double NNfunction_ss_cLdL::synapse0x2c503e0() {
   return (neuron0x2c58080()*1.14516);
}

double NNfunction_ss_cLdL::synapse0x2c44510() {
   return (neuron0x2c58a50()*-1.93997);
}

double NNfunction_ss_cLdL::synapse0x2c44550() {
   return (neuron0x2c59420()*2.16802);
}

double NNfunction_ss_cLdL::synapse0x2c52490() {
   return (neuron0x2c59df0()*0.309718);
}

double NNfunction_ss_cLdL::synapse0x2c524d0() {
   return (neuron0x2c5a7c0()*1.07182);
}

double NNfunction_ss_cLdL::synapse0x2c52e60() {
   return (neuron0x2c5b190()*-0.979794);
}

double NNfunction_ss_cLdL::synapse0x2c52ea0() {
   return (neuron0x2c5bb60()*-1.07091);
}

double NNfunction_ss_cLdL::synapse0x2c53830() {
   return (neuron0x2c51bf0()*-1.21675);
}

double NNfunction_ss_cLdL::synapse0x2c53870() {
   return (neuron0x2c5e740()*1.84322);
}

double NNfunction_ss_cLdL::synapse0x2c54200() {
   return (neuron0x2c5f110()*1.55247);
}

double NNfunction_ss_cLdL::synapse0x2c54240() {
   return (neuron0x2c5fae0()*1.22201);
}

double NNfunction_ss_cLdL::synapse0x2c54bd0() {
   return (neuron0x2c604b0()*-0.807826);
}

double NNfunction_ss_cLdL::synapse0x2c54c10() {
   return (neuron0x2c60e80()*-5.15353);
}

double NNfunction_ss_cLdL::synapse0x2c4d720() {
   return (neuron0x2c61850()*-1.81377);
}

double NNfunction_ss_cLdL::synapse0x2c4d760() {
   return (neuron0x2c62220()*2.04816);
}

double NNfunction_ss_cLdL::synapse0x2c56fd0() {
   return (neuron0x2c62bf0()*2.8683);
}

double NNfunction_ss_cLdL::synapse0x2c57010() {
   return (neuron0x2c637d0()*0.643512);
}

double NNfunction_ss_cLdL::synapse0x2c57960() {
   return (neuron0x2c641a0()*2.39678);
}

double NNfunction_ss_cLdL::synapse0x2c579a0() {
   return (neuron0x2c55020()*1.7851);
}

double NNfunction_ss_cLdL::synapse0x2c58330() {
   return (neuron0x2c559f0()*1.89603);
}

double NNfunction_ss_cLdL::synapse0x2c58370() {
   return (neuron0x2c563c0()*1.12071);
}

double NNfunction_ss_cLdL::synapse0x2c58d00() {
   return (neuron0x2c68a00()*-1.24537);
}

double NNfunction_ss_cLdL::synapse0x2c58d40() {
   return (neuron0x2c692b0()*0.585141);
}

double NNfunction_ss_cLdL::synapse0x2c596d0() {
   return (neuron0x2c69c80()*1.33473);
}

double NNfunction_ss_cLdL::synapse0x2c59710() {
   return (neuron0x2c6a650()*-0.459789);
}

double NNfunction_ss_cLdL::synapse0x2c5be10() {
   return (neuron0x2c465d0()*-0.0525368);
}

double NNfunction_ss_cLdL::synapse0x2c5be50() {
   return (neuron0x2c46ee0()*0.0299188);
}

double NNfunction_ss_cLdL::synapse0x2c513d0() {
   return (neuron0x2c479c0()*-0.472153);
}

double NNfunction_ss_cLdL::synapse0x2c51410() {
   return (neuron0x2a01250()*0.206745);
}

double NNfunction_ss_cLdL::synapse0x2c5e9f0() {
   return (neuron0x2c487e0()*0.108617);
}

double NNfunction_ss_cLdL::synapse0x2c5ea30() {
   return (neuron0x2c491b0()*0.345868);
}

double NNfunction_ss_cLdL::synapse0x2c5f3c0() {
   return (neuron0x2c49f80()*1.05485);
}

double NNfunction_ss_cLdL::synapse0x2c5f400() {
   return (neuron0x2c4a950()*0.0190411);
}

double NNfunction_ss_cLdL::synapse0x2c5fd90() {
   return (neuron0x2c4b320()*-0.255844);
}

double NNfunction_ss_cLdL::synapse0x2c5fdd0() {
   return (neuron0x2c4be00()*-0.0764649);
}

double NNfunction_ss_cLdL::synapse0x2c60760() {
   return (neuron0x2c4c7d0()*-0.0407714);
}

double NNfunction_ss_cLdL::synapse0x2c607a0() {
   return (neuron0x2c498b0()*-0.0556044);
}

double NNfunction_ss_cLdL::synapse0x2c61130() {
   return (neuron0x2c4e380()*-1.24074);
}

double NNfunction_ss_cLdL::synapse0x2c61170() {
   return (neuron0x2c4ed50()*0.516567);
}

double NNfunction_ss_cLdL::synapse0x2c61b00() {
   return (neuron0x2c4f720()*1.0255);
}

double NNfunction_ss_cLdL::synapse0x2c61b40() {
   return (neuron0x2c500f0()*-0.0565949);
}

double NNfunction_ss_cLdL::synapse0x2c624d0() {
   return (neuron0x2c51f00()*0.00212132);
}

double NNfunction_ss_cLdL::synapse0x2c62510() {
   return (neuron0x2c521e0()*-0.458535);
}

double NNfunction_ss_cLdL::synapse0x2c62ea0() {
   return (neuron0x2c52bb0()*0.130552);
}

double NNfunction_ss_cLdL::synapse0x2c62ee0() {
   return (neuron0x2c53580()*0.246891);
}

double NNfunction_ss_cLdL::synapse0x2c63a80() {
   return (neuron0x2c53f50()*0.15388);
}

double NNfunction_ss_cLdL::synapse0x2c63ac0() {
   return (neuron0x2c54920()*-0.113081);
}

double NNfunction_ss_cLdL::synapse0x2c64450() {
   return (neuron0x2c4d470()*0.18641);
}

double NNfunction_ss_cLdL::synapse0x2c64490() {
   return (neuron0x2c4de40()*0.208493);
}

double NNfunction_ss_cLdL::synapse0x2c552d0() {
   return (neuron0x2c576b0()*0.693183);
}

double NNfunction_ss_cLdL::synapse0x2c55310() {
   return (neuron0x2c58080()*0.121033);
}

double NNfunction_ss_cLdL::synapse0x2c55ca0() {
   return (neuron0x2c58a50()*-0.254396);
}

double NNfunction_ss_cLdL::synapse0x2c55ce0() {
   return (neuron0x2c59420()*0.298486);
}

double NNfunction_ss_cLdL::synapse0x2c56670() {
   return (neuron0x2c59df0()*0.212466);
}

double NNfunction_ss_cLdL::synapse0x2c566b0() {
   return (neuron0x2c5a7c0()*-0.0873873);
}

double NNfunction_ss_cLdL::synapse0x2c68b90() {
   return (neuron0x2c5b190()*0.106789);
}

double NNfunction_ss_cLdL::synapse0x2c68bd0() {
   return (neuron0x2c5bb60()*-0.133245);
}

double NNfunction_ss_cLdL::synapse0x2c69560() {
   return (neuron0x2c51bf0()*1.56358);
}

double NNfunction_ss_cLdL::synapse0x2c695a0() {
   return (neuron0x2c5e740()*0.0137267);
}

double NNfunction_ss_cLdL::synapse0x2c69f30() {
   return (neuron0x2c5f110()*0.140223);
}

double NNfunction_ss_cLdL::synapse0x2c69f70() {
   return (neuron0x2c5fae0()*0.0877762);
}

double NNfunction_ss_cLdL::synapse0x2c6a900() {
   return (neuron0x2c604b0()*-0.139294);
}

double NNfunction_ss_cLdL::synapse0x2c6a940() {
   return (neuron0x2c60e80()*-0.34547);
}

double NNfunction_ss_cLdL::synapse0x2c467f0() {
   return (neuron0x2c61850()*-1.14961);
}

double NNfunction_ss_cLdL::synapse0x2c46830() {
   return (neuron0x2c62220()*-1.29318);
}

double NNfunction_ss_cLdL::synapse0x2c5a0a0() {
   return (neuron0x2c62bf0()*-0.0629761);
}

double NNfunction_ss_cLdL::synapse0x2c5a0e0() {
   return (neuron0x2c637d0()*0.261657);
}

double NNfunction_ss_cLdL::synapse0x2c6b020() {
   return (neuron0x2c641a0()*-0.0282085);
}

double NNfunction_ss_cLdL::synapse0x2c6b060() {
   return (neuron0x2c55020()*0.142389);
}

double NNfunction_ss_cLdL::synapse0x2c6b0a0() {
   return (neuron0x2c559f0()*-0.0274878);
}

double NNfunction_ss_cLdL::synapse0x2c6b0e0() {
   return (neuron0x2c563c0()*0.119349);
}

double NNfunction_ss_cLdL::synapse0x2c71f90() {
   return (neuron0x2c68a00()*-0.073901);
}

double NNfunction_ss_cLdL::synapse0x2c71fd0() {
   return (neuron0x2c692b0()*0.0892629);
}

double NNfunction_ss_cLdL::synapse0x2c72010() {
   return (neuron0x2c69c80()*0.061756);
}

double NNfunction_ss_cLdL::synapse0x2c72050() {
   return (neuron0x2c6a650()*0.0912765);
}

double NNfunction_ss_cLdL::synapse0x2c723d0() {
   return (neuron0x2c465d0()*0.181003);
}

double NNfunction_ss_cLdL::synapse0x2c72410() {
   return (neuron0x2c46ee0()*-0.0249567);
}

double NNfunction_ss_cLdL::synapse0x2c72450() {
   return (neuron0x2c479c0()*0.0758235);
}

double NNfunction_ss_cLdL::synapse0x2c72490() {
   return (neuron0x2a01250()*-0.804505);
}

double NNfunction_ss_cLdL::synapse0x2c724d0() {
   return (neuron0x2c487e0()*0.0477652);
}

double NNfunction_ss_cLdL::synapse0x2c72510() {
   return (neuron0x2c491b0()*0.268858);
}

double NNfunction_ss_cLdL::synapse0x2c72550() {
   return (neuron0x2c49f80()*0.851886);
}

double NNfunction_ss_cLdL::synapse0x2c72590() {
   return (neuron0x2c4a950()*-0.274819);
}

double NNfunction_ss_cLdL::synapse0x2c725d0() {
   return (neuron0x2c4b320()*1.1212);
}

double NNfunction_ss_cLdL::synapse0x2c72610() {
   return (neuron0x2c4be00()*-0.0593504);
}

double NNfunction_ss_cLdL::synapse0x2c72650() {
   return (neuron0x2c4c7d0()*-0.00295093);
}

double NNfunction_ss_cLdL::synapse0x2c72690() {
   return (neuron0x2c498b0()*-0.00209821);
}

double NNfunction_ss_cLdL::synapse0x2c726d0() {
   return (neuron0x2c4e380()*5.42249);
}

double NNfunction_ss_cLdL::synapse0x2c72710() {
   return (neuron0x2c4ed50()*-0.665074);
}

double NNfunction_ss_cLdL::synapse0x2c72750() {
   return (neuron0x2c4f720()*-1.07143);
}

double NNfunction_ss_cLdL::synapse0x2c72790() {
   return (neuron0x2c500f0()*-0.0166661);
}

double NNfunction_ss_cLdL::synapse0x2c72220() {
   return (neuron0x2c51f00()*-0.00288546);
}

double NNfunction_ss_cLdL::synapse0x2c72260() {
   return (neuron0x2c521e0()*0.112876);
}

double NNfunction_ss_cLdL::synapse0x2c728e0() {
   return (neuron0x2c52bb0()*0.09274);
}

double NNfunction_ss_cLdL::synapse0x2c72920() {
   return (neuron0x2c53580()*-0.417166);
}

double NNfunction_ss_cLdL::synapse0x2c72960() {
   return (neuron0x2c53f50()*0.13231);
}

double NNfunction_ss_cLdL::synapse0x2c729a0() {
   return (neuron0x2c54920()*-0.0708507);
}

double NNfunction_ss_cLdL::synapse0x2c729e0() {
   return (neuron0x2c4d470()*0.157268);
}

double NNfunction_ss_cLdL::synapse0x2c72a20() {
   return (neuron0x2c4de40()*-0.172837);
}

double NNfunction_ss_cLdL::synapse0x2c72a60() {
   return (neuron0x2c576b0()*0.0903258);
}

double NNfunction_ss_cLdL::synapse0x2c72aa0() {
   return (neuron0x2c58080()*0.079844);
}

double NNfunction_ss_cLdL::synapse0x2c72ae0() {
   return (neuron0x2c58a50()*2.10934);
}

double NNfunction_ss_cLdL::synapse0x2c72b20() {
   return (neuron0x2c59420()*1.73455);
}

double NNfunction_ss_cLdL::synapse0x2c72b60() {
   return (neuron0x2c59df0()*0.239639);
}

double NNfunction_ss_cLdL::synapse0x2c72ba0() {
   return (neuron0x2c5a7c0()*-0.103211);
}

double NNfunction_ss_cLdL::synapse0x2c72be0() {
   return (neuron0x2c5b190()*0.244968);
}

double NNfunction_ss_cLdL::synapse0x2c72c20() {
   return (neuron0x2c5bb60()*-0.0633189);
}

double NNfunction_ss_cLdL::synapse0x2c727d0() {
   return (neuron0x2c51bf0()*-0.937085);
}

double NNfunction_ss_cLdL::synapse0x2c72810() {
   return (neuron0x2c5e740()*-0.0316642);
}

double NNfunction_ss_cLdL::synapse0x2c72850() {
   return (neuron0x2c5f110()*0.079566);
}

double NNfunction_ss_cLdL::synapse0x2c72890() {
   return (neuron0x2c5fae0()*0.0308201);
}

double NNfunction_ss_cLdL::synapse0x2c72e70() {
   return (neuron0x2c604b0()*-0.168379);
}

double NNfunction_ss_cLdL::synapse0x2c72eb0() {
   return (neuron0x2c60e80()*-2.66347);
}

double NNfunction_ss_cLdL::synapse0x2c72ef0() {
   return (neuron0x2c61850()*-1.07685);
}

double NNfunction_ss_cLdL::synapse0x2c72f30() {
   return (neuron0x2c62220()*1.97478);
}

double NNfunction_ss_cLdL::synapse0x2c72f70() {
   return (neuron0x2c62bf0()*-0.234069);
}

double NNfunction_ss_cLdL::synapse0x2c72fb0() {
   return (neuron0x2c637d0()*0.280016);
}

double NNfunction_ss_cLdL::synapse0x2c72ff0() {
   return (neuron0x2c641a0()*-0.538402);
}

double NNfunction_ss_cLdL::synapse0x2c73030() {
   return (neuron0x2c55020()*0.303025);
}

double NNfunction_ss_cLdL::synapse0x2c73070() {
   return (neuron0x2c559f0()*-0.226757);
}

double NNfunction_ss_cLdL::synapse0x2c730b0() {
   return (neuron0x2c563c0()*0.0573591);
}

double NNfunction_ss_cLdL::synapse0x2c730f0() {
   return (neuron0x2c68a00()*-0.0662956);
}

double NNfunction_ss_cLdL::synapse0x2c73130() {
   return (neuron0x2c692b0()*0.0870307);
}

double NNfunction_ss_cLdL::synapse0x2c73170() {
   return (neuron0x2c69c80()*-0.000851595);
}

double NNfunction_ss_cLdL::synapse0x2c731b0() {
   return (neuron0x2c6a650()*0.0781755);
}

double NNfunction_ss_cLdL::synapse0x2c73530() {
   return (neuron0x2c465d0()*0.299133);
}

double NNfunction_ss_cLdL::synapse0x2c73570() {
   return (neuron0x2c46ee0()*0.00627622);
}

double NNfunction_ss_cLdL::synapse0x2c735b0() {
   return (neuron0x2c479c0()*1.09285);
}

double NNfunction_ss_cLdL::synapse0x2c735f0() {
   return (neuron0x2a01250()*1.27343);
}

double NNfunction_ss_cLdL::synapse0x2c73630() {
   return (neuron0x2c487e0()*0.0325015);
}

double NNfunction_ss_cLdL::synapse0x2c73670() {
   return (neuron0x2c491b0()*0.439193);
}

double NNfunction_ss_cLdL::synapse0x2c736b0() {
   return (neuron0x2c49f80()*1.30225);
}

double NNfunction_ss_cLdL::synapse0x2c736f0() {
   return (neuron0x2c4a950()*-0.625766);
}

double NNfunction_ss_cLdL::synapse0x2c73730() {
   return (neuron0x2c4b320()*1.47928);
}

double NNfunction_ss_cLdL::synapse0x2c73770() {
   return (neuron0x2c4be00()*-0.15127);
}

double NNfunction_ss_cLdL::synapse0x2c737b0() {
   return (neuron0x2c4c7d0()*-0.0922709);
}

double NNfunction_ss_cLdL::synapse0x2c737f0() {
   return (neuron0x2c498b0()*0.180304);
}

double NNfunction_ss_cLdL::synapse0x2c73830() {
   return (neuron0x2c4e380()*2.72008);
}

double NNfunction_ss_cLdL::synapse0x2c73870() {
   return (neuron0x2c4ed50()*-0.839394);
}

double NNfunction_ss_cLdL::synapse0x2c738b0() {
   return (neuron0x2c4f720()*-0.857035);
}

double NNfunction_ss_cLdL::synapse0x2c738f0() {
   return (neuron0x2c500f0()*0.0291452);
}

double NNfunction_ss_cLdL::synapse0x2c73380() {
   return (neuron0x2c51f00()*-0.0429865);
}

double NNfunction_ss_cLdL::synapse0x2c733c0() {
   return (neuron0x2c521e0()*0.14707);
}

double NNfunction_ss_cLdL::synapse0x2c73a40() {
   return (neuron0x2c52bb0()*0.133445);
}

double NNfunction_ss_cLdL::synapse0x2c73a80() {
   return (neuron0x2c53580()*-1.458);
}

double NNfunction_ss_cLdL::synapse0x2c73ac0() {
   return (neuron0x2c53f50()*0.146137);
}

double NNfunction_ss_cLdL::synapse0x2c73b00() {
   return (neuron0x2c54920()*-0.130302);
}

double NNfunction_ss_cLdL::synapse0x2c73b40() {
   return (neuron0x2c4d470()*0.117632);
}

double NNfunction_ss_cLdL::synapse0x2c73b80() {
   return (neuron0x2c4de40()*0.977318);
}

double NNfunction_ss_cLdL::synapse0x2c73bc0() {
   return (neuron0x2c576b0()*-2.62315);
}

double NNfunction_ss_cLdL::synapse0x2c73c00() {
   return (neuron0x2c58080()*0.126763);
}

double NNfunction_ss_cLdL::synapse0x2c73c40() {
   return (neuron0x2c58a50()*0.706077);
}

double NNfunction_ss_cLdL::synapse0x2c73c80() {
   return (neuron0x2c59420()*-0.367941);
}

double NNfunction_ss_cLdL::synapse0x2c73cc0() {
   return (neuron0x2c59df0()*1.26656);
}

double NNfunction_ss_cLdL::synapse0x2c73d00() {
   return (neuron0x2c5a7c0()*-0.0631);
}

double NNfunction_ss_cLdL::synapse0x2c73d40() {
   return (neuron0x2c5b190()*1.05349);
}

double NNfunction_ss_cLdL::synapse0x2c73d80() {
   return (neuron0x2c5bb60()*-0.106681);
}

double NNfunction_ss_cLdL::synapse0x2c73930() {
   return (neuron0x2c51bf0()*-1.11536);
}

double NNfunction_ss_cLdL::synapse0x2c73970() {
   return (neuron0x2c5e740()*0.130714);
}

double NNfunction_ss_cLdL::synapse0x2c739b0() {
   return (neuron0x2c5f110()*0.0899795);
}

double NNfunction_ss_cLdL::synapse0x2c739f0() {
   return (neuron0x2c5fae0()*0.0418013);
}

double NNfunction_ss_cLdL::synapse0x2c73fd0() {
   return (neuron0x2c604b0()*-0.17119);
}

double NNfunction_ss_cLdL::synapse0x2c74010() {
   return (neuron0x2c60e80()*-4.7375);
}

double NNfunction_ss_cLdL::synapse0x2c74050() {
   return (neuron0x2c61850()*-1.17661);
}

double NNfunction_ss_cLdL::synapse0x2c74090() {
   return (neuron0x2c62220()*4.7326);
}

double NNfunction_ss_cLdL::synapse0x2c740d0() {
   return (neuron0x2c62bf0()*-0.162228);
}

double NNfunction_ss_cLdL::synapse0x2c74110() {
   return (neuron0x2c637d0()*0.312563);
}

double NNfunction_ss_cLdL::synapse0x2c74150() {
   return (neuron0x2c641a0()*-0.103029);
}

double NNfunction_ss_cLdL::synapse0x2c74190() {
   return (neuron0x2c55020()*0.655077);
}

double NNfunction_ss_cLdL::synapse0x2c741d0() {
   return (neuron0x2c559f0()*-0.39645);
}

double NNfunction_ss_cLdL::synapse0x2c74210() {
   return (neuron0x2c563c0()*0.0761193);
}

double NNfunction_ss_cLdL::synapse0x2c74250() {
   return (neuron0x2c68a00()*-0.103504);
}

double NNfunction_ss_cLdL::synapse0x2c74290() {
   return (neuron0x2c692b0()*0.0690836);
}

double NNfunction_ss_cLdL::synapse0x2c742d0() {
   return (neuron0x2c69c80()*0.0566471);
}

double NNfunction_ss_cLdL::synapse0x2c74310() {
   return (neuron0x2c6a650()*0.02976);
}

double NNfunction_ss_cLdL::synapse0x2c74690() {
   return (neuron0x2c465d0()*-0.22485);
}

double NNfunction_ss_cLdL::synapse0x2c746d0() {
   return (neuron0x2c46ee0()*-0.0540126);
}

double NNfunction_ss_cLdL::synapse0x2c74710() {
   return (neuron0x2c479c0()*-0.428962);
}

double NNfunction_ss_cLdL::synapse0x2c74750() {
   return (neuron0x2a01250()*0.349609);
}

double NNfunction_ss_cLdL::synapse0x2c74790() {
   return (neuron0x2c487e0()*0.18726);
}

double NNfunction_ss_cLdL::synapse0x2c747d0() {
   return (neuron0x2c491b0()*-0.180498);
}

double NNfunction_ss_cLdL::synapse0x2c74810() {
   return (neuron0x2c49f80()*-0.0821617);
}

double NNfunction_ss_cLdL::synapse0x2c74850() {
   return (neuron0x2c4a950()*0.223768);
}

double NNfunction_ss_cLdL::synapse0x2c74890() {
   return (neuron0x2c4b320()*0.714566);
}

double NNfunction_ss_cLdL::synapse0x2c748d0() {
   return (neuron0x2c4be00()*-0.24135);
}

double NNfunction_ss_cLdL::synapse0x2c74910() {
   return (neuron0x2c4c7d0()*0.18944);
}

double NNfunction_ss_cLdL::synapse0x2c74950() {
   return (neuron0x2c498b0()*0.685364);
}

double NNfunction_ss_cLdL::synapse0x2c74990() {
   return (neuron0x2c4e380()*-0.471863);
}

double NNfunction_ss_cLdL::synapse0x2c749d0() {
   return (neuron0x2c4ed50()*0.439593);
}

double NNfunction_ss_cLdL::synapse0x2c74a10() {
   return (neuron0x2c4f720()*-0.551755);
}

double NNfunction_ss_cLdL::synapse0x2c74a50() {
   return (neuron0x2c500f0()*-0.56742);
}

double NNfunction_ss_cLdL::synapse0x2c744e0() {
   return (neuron0x2c51f00()*-0.16171);
}

double NNfunction_ss_cLdL::synapse0x2c74520() {
   return (neuron0x2c521e0()*-0.668945);
}

double NNfunction_ss_cLdL::synapse0x2c74ba0() {
   return (neuron0x2c52bb0()*-0.163411);
}

double NNfunction_ss_cLdL::synapse0x2c74be0() {
   return (neuron0x2c53580()*-0.692807);
}

double NNfunction_ss_cLdL::synapse0x2c74c20() {
   return (neuron0x2c53f50()*0.00329282);
}

double NNfunction_ss_cLdL::synapse0x2c74c60() {
   return (neuron0x2c54920()*0.0987491);
}

double NNfunction_ss_cLdL::synapse0x2c74ca0() {
   return (neuron0x2c4d470()*-0.312687);
}

double NNfunction_ss_cLdL::synapse0x2c74ce0() {
   return (neuron0x2c4de40()*-0.451794);
}

double NNfunction_ss_cLdL::synapse0x2c74d20() {
   return (neuron0x2c576b0()*-0.466788);
}

double NNfunction_ss_cLdL::synapse0x2c74d60() {
   return (neuron0x2c58080()*0.0744085);
}

double NNfunction_ss_cLdL::synapse0x2c74da0() {
   return (neuron0x2c58a50()*-0.357028);
}

double NNfunction_ss_cLdL::synapse0x2c74de0() {
   return (neuron0x2c59420()*0.140463);
}

double NNfunction_ss_cLdL::synapse0x2c74e20() {
   return (neuron0x2c59df0()*-0.294605);
}

double NNfunction_ss_cLdL::synapse0x2c74e60() {
   return (neuron0x2c5a7c0()*-0.403717);
}

double NNfunction_ss_cLdL::synapse0x2c74ea0() {
   return (neuron0x2c5b190()*-0.434024);
}

double NNfunction_ss_cLdL::synapse0x2c74ee0() {
   return (neuron0x2c5bb60()*-0.418616);
}

double NNfunction_ss_cLdL::synapse0x2c74a90() {
   return (neuron0x2c51bf0()*-0.50579);
}

double NNfunction_ss_cLdL::synapse0x2c74ad0() {
   return (neuron0x2c5e740()*-0.0317166);
}

double NNfunction_ss_cLdL::synapse0x2c74b10() {
   return (neuron0x2c5f110()*-0.440563);
}

double NNfunction_ss_cLdL::synapse0x2c74b50() {
   return (neuron0x2c5fae0()*0.172981);
}

double NNfunction_ss_cLdL::synapse0x2c75130() {
   return (neuron0x2c604b0()*0.297878);
}

double NNfunction_ss_cLdL::synapse0x2c75170() {
   return (neuron0x2c60e80()*0.0790937);
}

double NNfunction_ss_cLdL::synapse0x2c751b0() {
   return (neuron0x2c61850()*0.0992579);
}

double NNfunction_ss_cLdL::synapse0x2c751f0() {
   return (neuron0x2c62220()*-0.34154);
}

double NNfunction_ss_cLdL::synapse0x2c75230() {
   return (neuron0x2c62bf0()*-0.324174);
}

double NNfunction_ss_cLdL::synapse0x2c75270() {
   return (neuron0x2c637d0()*-0.258614);
}

double NNfunction_ss_cLdL::synapse0x2c752b0() {
   return (neuron0x2c641a0()*0.300476);
}

double NNfunction_ss_cLdL::synapse0x2c752f0() {
   return (neuron0x2c55020()*-0.0622141);
}

double NNfunction_ss_cLdL::synapse0x2c75330() {
   return (neuron0x2c559f0()*-0.0862515);
}

double NNfunction_ss_cLdL::synapse0x2c75370() {
   return (neuron0x2c563c0()*0.40598);
}

double NNfunction_ss_cLdL::synapse0x2c753b0() {
   return (neuron0x2c68a00()*0.21729);
}

double NNfunction_ss_cLdL::synapse0x2c753f0() {
   return (neuron0x2c692b0()*-0.351175);
}

double NNfunction_ss_cLdL::synapse0x2c75430() {
   return (neuron0x2c69c80()*0.324789);
}

double NNfunction_ss_cLdL::synapse0x2c75470() {
   return (neuron0x2c6a650()*-0.168303);
}

double NNfunction_ss_cLdL::synapse0x2c46590() {
   return (neuron0x2c71850()*-6.4889);
}

double NNfunction_ss_cLdL::synapse0x2c756d0() {
   return (neuron0x2c71bf0()*7.97223);
}

double NNfunction_ss_cLdL::synapse0x2c75710() {
   return (neuron0x2c72090()*-5.11185);
}

double NNfunction_ss_cLdL::synapse0x2c75750() {
   return (neuron0x2c731f0()*-6.99507);
}

double NNfunction_ss_cLdL::synapse0x2c75790() {
   return (neuron0x2c74350()*-0.764693);
}

