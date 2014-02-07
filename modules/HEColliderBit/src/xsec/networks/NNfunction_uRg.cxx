#include "NNfunction_uRg.h"
#include <cmath>

double NNfunction_uRg::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5134)/15.3182;
   input1 = (in1 - -1.95578)/1164.87;
   input2 = (in2 - 657.754)/627.47;
   input3 = (in3 - -41.0457)/815.471;
   input4 = (in4 - 1078.4)/970.757;
   input5 = (in5 - 911.54)/963.74;
   input6 = (in6 - 919.448)/965.18;
   input7 = (in7 - 938.574)/944.247;
   input8 = (in8 - 920.026)/966.671;
   input9 = (in9 - 906.362)/953.261;
   input10 = (in10 - 979.16)/948.269;
   input11 = (in11 - 720.566)/860.283;
   input12 = (in12 - 724.62)/863.876;
   input13 = (in13 - 503.405)/516.015;
   input14 = (in14 - 640.97)/692.581;
   input15 = (in15 - 744.827)/836.543;
   input16 = (in16 - 546.576)/576.819;
   input17 = (in17 - 753.519)/892.096;
   input18 = (in18 - 754.428)/897.765;
   input19 = (in19 - 799.95)/870.886;
   input20 = (in20 - -4.21671)/493.871;
   input21 = (in21 - 0.978536)/1154.76;
   input22 = (in22 - 0.121639)/1202.61;
   input23 = (in23 - -202.782)/611.527;
   switch(index) {
     case 0:
         return neuron0x2874cb0();
     default:
         return 0.;
   }
}

double NNfunction_uRg::Value(int index, double* input) {
   input0 = (input[0] - 23.5134)/15.3182;
   input1 = (input[1] - -1.95578)/1164.87;
   input2 = (input[2] - 657.754)/627.47;
   input3 = (input[3] - -41.0457)/815.471;
   input4 = (input[4] - 1078.4)/970.757;
   input5 = (input[5] - 911.54)/963.74;
   input6 = (input[6] - 919.448)/965.18;
   input7 = (input[7] - 938.574)/944.247;
   input8 = (input[8] - 920.026)/966.671;
   input9 = (input[9] - 906.362)/953.261;
   input10 = (input[10] - 979.16)/948.269;
   input11 = (input[11] - 720.566)/860.283;
   input12 = (input[12] - 724.62)/863.876;
   input13 = (input[13] - 503.405)/516.015;
   input14 = (input[14] - 640.97)/692.581;
   input15 = (input[15] - 744.827)/836.543;
   input16 = (input[16] - 546.576)/576.819;
   input17 = (input[17] - 753.519)/892.096;
   input18 = (input[18] - 754.428)/897.765;
   input19 = (input[19] - 799.95)/870.886;
   input20 = (input[20] - -4.21671)/493.871;
   input21 = (input[21] - 0.978536)/1154.76;
   input22 = (input[22] - 0.121639)/1202.61;
   input23 = (input[23] - -202.782)/611.527;
   switch(index) {
     case 0:
         return neuron0x2874cb0();
     default:
         return 0.;
   }
}

double NNfunction_uRg::neuron0x2840da0() {
   return input0;
}

double NNfunction_uRg::neuron0x28410e0() {
   return input1;
}

double NNfunction_uRg::neuron0x2841420() {
   return input2;
}

double NNfunction_uRg::neuron0x2841760() {
   return input3;
}

double NNfunction_uRg::neuron0x2841aa0() {
   return input4;
}

double NNfunction_uRg::neuron0x2841de0() {
   return input5;
}

double NNfunction_uRg::neuron0x2842120() {
   return input6;
}

double NNfunction_uRg::neuron0x2842460() {
   return input7;
}

double NNfunction_uRg::neuron0x28427a0() {
   return input8;
}

double NNfunction_uRg::neuron0x2842ae0() {
   return input9;
}

double NNfunction_uRg::neuron0x2842e20() {
   return input10;
}

double NNfunction_uRg::neuron0x2843160() {
   return input11;
}

double NNfunction_uRg::neuron0x28434a0() {
   return input12;
}

double NNfunction_uRg::neuron0x28437e0() {
   return input13;
}

double NNfunction_uRg::neuron0x2843b20() {
   return input14;
}

double NNfunction_uRg::neuron0x2843e60() {
   return input15;
}

double NNfunction_uRg::neuron0x28441a0() {
   return input16;
}

double NNfunction_uRg::neuron0x2844700() {
   return input17;
}

double NNfunction_uRg::neuron0x2844920() {
   return input18;
}

double NNfunction_uRg::neuron0x2844c60() {
   return input19;
}

double NNfunction_uRg::neuron0x2844fa0() {
   return input20;
}

double NNfunction_uRg::neuron0x28452e0() {
   return input21;
}

double NNfunction_uRg::neuron0x2845620() {
   return input22;
}

double NNfunction_uRg::neuron0x2845960() {
   return input23;
}

double NNfunction_uRg::input0x2845dd0() {
   double input = 0.340245;
   input += synapse0x2840c60();
   input += synapse0x2840ca0();
   input += synapse0x2846080();
   input += synapse0x28460c0();
   input += synapse0x2846100();
   input += synapse0x2846140();
   input += synapse0x2846180();
   input += synapse0x28461c0();
   input += synapse0x2846200();
   input += synapse0x2846240();
   input += synapse0x2846280();
   input += synapse0x28462c0();
   input += synapse0x2846300();
   input += synapse0x2846340();
   input += synapse0x2846380();
   input += synapse0x28463c0();
   input += synapse0x2840bd0();
   input += synapse0x2840c10();
   input += synapse0x25f2850();
   input += synapse0x25f2890();
   input += synapse0x2846620();
   input += synapse0x2846660();
   input += synapse0x28466a0();
   input += synapse0x28466e0();
   return input;
}

double NNfunction_uRg::neuron0x2845dd0() {
   double input = input0x2845dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2846720() {
   double input = 0.611887;
   input += synapse0x2846a60();
   input += synapse0x2846aa0();
   input += synapse0x2846ae0();
   input += synapse0x2846b20();
   input += synapse0x2846b60();
   input += synapse0x2846ba0();
   input += synapse0x2846be0();
   input += synapse0x2846c20();
   input += synapse0x2846c60();
   input += synapse0x2846510();
   input += synapse0x2846550();
   input += synapse0x2846590();
   input += synapse0x28465d0();
   input += synapse0x2846eb0();
   input += synapse0x2846ef0();
   input += synapse0x2846f30();
   input += synapse0x28468b0();
   input += synapse0x28468f0();
   input += synapse0x2847080();
   input += synapse0x28470c0();
   input += synapse0x2847100();
   input += synapse0x2847140();
   input += synapse0x2847180();
   input += synapse0x28471c0();
   return input;
}

double NNfunction_uRg::neuron0x2846720() {
   double input = input0x2846720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2847200() {
   double input = -0.386926;
   input += synapse0x2847540();
   input += synapse0x2847580();
   input += synapse0x28475c0();
   input += synapse0x2847600();
   input += synapse0x2847640();
   input += synapse0x2847680();
   input += synapse0x28476c0();
   input += synapse0x2847700();
   input += synapse0x2847740();
   input += synapse0x2847780();
   input += synapse0x28477c0();
   input += synapse0x2847800();
   input += synapse0x2847840();
   input += synapse0x2847880();
   input += synapse0x28478c0();
   input += synapse0x2847900();
   input += synapse0x2847390();
   input += synapse0x28473d0();
   input += synapse0x25f2c80();
   input += synapse0x26003a0();
   input += synapse0x26003e0();
   input += synapse0x282fe30();
   input += synapse0x282fe70();
   input += synapse0x282feb0();
   return input;
}

double NNfunction_uRg::neuron0x2847200() {
   double input = input0x2847200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2846ca0() {
   double input = -0.242735;
   input += synapse0x2600c40();
   input += synapse0x2846e30();
   input += synapse0x2846e70();
   input += synapse0x2847a50();
   input += synapse0x2847a90();
   input += synapse0x2847ad0();
   input += synapse0x2847b10();
   input += synapse0x2847b50();
   input += synapse0x2847b90();
   input += synapse0x2847bd0();
   input += synapse0x2847c10();
   input += synapse0x2847c50();
   input += synapse0x2847c90();
   input += synapse0x2847cd0();
   input += synapse0x2847d10();
   input += synapse0x2847d50();
   input += synapse0x2840ce0();
   input += synapse0x2840d20();
   input += synapse0x2840d60();
   input += synapse0x2847ea0();
   input += synapse0x2847ee0();
   input += synapse0x2847f20();
   input += synapse0x2847f60();
   input += synapse0x2847fa0();
   return input;
}

double NNfunction_uRg::neuron0x2846ca0() {
   double input = input0x2846ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2847fe0() {
   double input = -0.216701;
   input += synapse0x2848320();
   input += synapse0x2848360();
   input += synapse0x28483a0();
   input += synapse0x28483e0();
   input += synapse0x2848420();
   input += synapse0x2848460();
   input += synapse0x28484a0();
   input += synapse0x28484e0();
   input += synapse0x2848520();
   input += synapse0x2848560();
   input += synapse0x28485a0();
   input += synapse0x28485e0();
   input += synapse0x2848620();
   input += synapse0x2848660();
   input += synapse0x28486a0();
   input += synapse0x28486e0();
   input += synapse0x2848170();
   input += synapse0x28481b0();
   input += synapse0x2848830();
   input += synapse0x2848870();
   input += synapse0x28488b0();
   input += synapse0x28488f0();
   input += synapse0x2848930();
   input += synapse0x2848970();
   return input;
}

double NNfunction_uRg::neuron0x2847fe0() {
   double input = input0x2847fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x28489b0() {
   double input = 0.385501;
   input += synapse0x2848cf0();
   input += synapse0x2848d30();
   input += synapse0x2848d70();
   input += synapse0x2848db0();
   input += synapse0x2848df0();
   input += synapse0x2848e30();
   input += synapse0x2848e70();
   input += synapse0x2848eb0();
   input += synapse0x2848ef0();
   input += synapse0x2600710();
   input += synapse0x2600750();
   input += synapse0x2600790();
   input += synapse0x26007d0();
   input += synapse0x2600810();
   input += synapse0x2600850();
   input += synapse0x2600890();
   input += synapse0x2848b40();
   input += synapse0x2848b80();
   input += synapse0x26009e0();
   input += synapse0x2600a20();
   input += synapse0x2600a60();
   input += synapse0x2600aa0();
   input += synapse0x2600ae0();
   input += synapse0x2849740();
   return input;
}

double NNfunction_uRg::neuron0x28489b0() {
   double input = input0x28489b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2849780() {
   double input = -2.05002;
   input += synapse0x2849ac0();
   input += synapse0x2849b00();
   input += synapse0x2849b40();
   input += synapse0x2849b80();
   input += synapse0x2849bc0();
   input += synapse0x2849c00();
   input += synapse0x2849c40();
   input += synapse0x2849c80();
   input += synapse0x2849cc0();
   input += synapse0x2849d00();
   input += synapse0x2849d40();
   input += synapse0x2849d80();
   input += synapse0x2849dc0();
   input += synapse0x2849e00();
   input += synapse0x2849e40();
   input += synapse0x2849e80();
   input += synapse0x2849910();
   input += synapse0x2849950();
   input += synapse0x2849fd0();
   input += synapse0x284a010();
   input += synapse0x284a050();
   input += synapse0x284a090();
   input += synapse0x284a0d0();
   input += synapse0x284a110();
   return input;
}

double NNfunction_uRg::neuron0x2849780() {
   double input = input0x2849780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x284a150() {
   double input = 1.2647;
   input += synapse0x284a490();
   input += synapse0x284a4d0();
   input += synapse0x284a510();
   input += synapse0x284a550();
   input += synapse0x284a590();
   input += synapse0x284a5d0();
   input += synapse0x284a610();
   input += synapse0x284a650();
   input += synapse0x284a690();
   input += synapse0x284a6d0();
   input += synapse0x284a710();
   input += synapse0x284a750();
   input += synapse0x284a790();
   input += synapse0x284a7d0();
   input += synapse0x284a810();
   input += synapse0x284a850();
   input += synapse0x284a2e0();
   input += synapse0x284a320();
   input += synapse0x284a9a0();
   input += synapse0x284a9e0();
   input += synapse0x284aa20();
   input += synapse0x284aa60();
   input += synapse0x284aaa0();
   input += synapse0x284aae0();
   return input;
}

double NNfunction_uRg::neuron0x284a150() {
   double input = input0x284a150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x284ab20() {
   double input = -0.840696;
   input += synapse0x28445f0();
   input += synapse0x2844630();
   input += synapse0x2844670();
   input += synapse0x28446b0();
   input += synapse0x284b070();
   input += synapse0x284b0b0();
   input += synapse0x284b0f0();
   input += synapse0x284b130();
   input += synapse0x284b170();
   input += synapse0x284b1b0();
   input += synapse0x284b1f0();
   input += synapse0x284b230();
   input += synapse0x284b270();
   input += synapse0x284b2b0();
   input += synapse0x284b2f0();
   input += synapse0x284b330();
   input += synapse0x284acb0();
   input += synapse0x284acf0();
   input += synapse0x284b480();
   input += synapse0x284b4c0();
   input += synapse0x284b500();
   input += synapse0x284b540();
   input += synapse0x284b580();
   input += synapse0x284b5c0();
   return input;
}

double NNfunction_uRg::neuron0x284ab20() {
   double input = input0x284ab20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x284b600() {
   double input = -1.0288;
   input += synapse0x284b940();
   input += synapse0x284b980();
   input += synapse0x284b9c0();
   input += synapse0x284ba00();
   input += synapse0x284ba40();
   input += synapse0x284ba80();
   input += synapse0x284bac0();
   input += synapse0x284bb00();
   input += synapse0x284bb40();
   input += synapse0x284bb80();
   input += synapse0x284bbc0();
   input += synapse0x284bc00();
   input += synapse0x284bc40();
   input += synapse0x284bc80();
   input += synapse0x284bcc0();
   input += synapse0x284bd00();
   input += synapse0x284b790();
   input += synapse0x284b7d0();
   input += synapse0x284be50();
   input += synapse0x284be90();
   input += synapse0x284bed0();
   input += synapse0x284bf10();
   input += synapse0x284bf50();
   input += synapse0x284bf90();
   return input;
}

double NNfunction_uRg::neuron0x284b600() {
   double input = input0x284b600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x284bfd0() {
   double input = -0.288688;
   input += synapse0x284c310();
   input += synapse0x284c350();
   input += synapse0x284c390();
   input += synapse0x284c3d0();
   input += synapse0x284c410();
   input += synapse0x284c450();
   input += synapse0x284c490();
   input += synapse0x284c4d0();
   input += synapse0x284c510();
   input += synapse0x284c550();
   input += synapse0x284c590();
   input += synapse0x284c5d0();
   input += synapse0x284c610();
   input += synapse0x284c650();
   input += synapse0x284c690();
   input += synapse0x284c6d0();
   input += synapse0x284c160();
   input += synapse0x284c1a0();
   input += synapse0x2848f30();
   input += synapse0x2848f70();
   input += synapse0x2848fb0();
   input += synapse0x2848ff0();
   input += synapse0x2849030();
   input += synapse0x2849070();
   return input;
}

double NNfunction_uRg::neuron0x284bfd0() {
   double input = input0x284bfd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x28490b0() {
   double input = -0.898154;
   input += synapse0x28493f0();
   input += synapse0x2849430();
   input += synapse0x2849470();
   input += synapse0x28494b0();
   input += synapse0x28494f0();
   input += synapse0x2849530();
   input += synapse0x2849570();
   input += synapse0x28495b0();
   input += synapse0x28495f0();
   input += synapse0x2849630();
   input += synapse0x2849670();
   input += synapse0x28496b0();
   input += synapse0x28496f0();
   input += synapse0x284d830();
   input += synapse0x284d870();
   input += synapse0x284d8b0();
   input += synapse0x2849240();
   input += synapse0x2849280();
   input += synapse0x284da00();
   input += synapse0x284da40();
   input += synapse0x284da80();
   input += synapse0x284dac0();
   input += synapse0x284db00();
   input += synapse0x284db40();
   return input;
}

double NNfunction_uRg::neuron0x28490b0() {
   double input = input0x28490b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x284db80() {
   double input = 1.13197;
   input += synapse0x284dec0();
   input += synapse0x284df00();
   input += synapse0x284df40();
   input += synapse0x284df80();
   input += synapse0x284dfc0();
   input += synapse0x284e000();
   input += synapse0x284e040();
   input += synapse0x284e080();
   input += synapse0x284e0c0();
   input += synapse0x284e100();
   input += synapse0x284e140();
   input += synapse0x284e180();
   input += synapse0x284e1c0();
   input += synapse0x284e200();
   input += synapse0x284e240();
   input += synapse0x284e280();
   input += synapse0x284dd10();
   input += synapse0x284dd50();
   input += synapse0x284e3d0();
   input += synapse0x284e410();
   input += synapse0x284e450();
   input += synapse0x284e490();
   input += synapse0x284e4d0();
   input += synapse0x284e510();
   return input;
}

double NNfunction_uRg::neuron0x284db80() {
   double input = input0x284db80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x284e550() {
   double input = -1.80317;
   input += synapse0x284e890();
   input += synapse0x284e8d0();
   input += synapse0x284e910();
   input += synapse0x284e950();
   input += synapse0x284e990();
   input += synapse0x284e9d0();
   input += synapse0x284ea10();
   input += synapse0x284ea50();
   input += synapse0x284ea90();
   input += synapse0x284ead0();
   input += synapse0x284eb10();
   input += synapse0x284eb50();
   input += synapse0x284eb90();
   input += synapse0x284ebd0();
   input += synapse0x284ec10();
   input += synapse0x284ec50();
   input += synapse0x284e6e0();
   input += synapse0x284e720();
   input += synapse0x284eda0();
   input += synapse0x284ede0();
   input += synapse0x284ee20();
   input += synapse0x284ee60();
   input += synapse0x284eea0();
   input += synapse0x284eee0();
   return input;
}

double NNfunction_uRg::neuron0x284e550() {
   double input = input0x284e550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x284ef20() {
   double input = -0.489135;
   input += synapse0x284f260();
   input += synapse0x284f2a0();
   input += synapse0x284f2e0();
   input += synapse0x284f320();
   input += synapse0x284f360();
   input += synapse0x284f3a0();
   input += synapse0x284f3e0();
   input += synapse0x284f420();
   input += synapse0x284f460();
   input += synapse0x284f4a0();
   input += synapse0x284f4e0();
   input += synapse0x284f520();
   input += synapse0x284f560();
   input += synapse0x284f5a0();
   input += synapse0x284f5e0();
   input += synapse0x284f620();
   input += synapse0x284f0b0();
   input += synapse0x284f0f0();
   input += synapse0x284f770();
   input += synapse0x284f7b0();
   input += synapse0x284f7f0();
   input += synapse0x284f830();
   input += synapse0x284f870();
   input += synapse0x284f8b0();
   return input;
}

double NNfunction_uRg::neuron0x284ef20() {
   double input = input0x284ef20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x284f8f0() {
   double input = 0.391732;
   input += synapse0x284fc30();
   input += synapse0x2840fc0();
   input += synapse0x2841000();
   input += synapse0x2841300();
   input += synapse0x2841340();
   input += synapse0x2841640();
   input += synapse0x2841680();
   input += synapse0x2841980();
   input += synapse0x28419c0();
   input += synapse0x2841cc0();
   input += synapse0x2841d00();
   input += synapse0x2842000();
   input += synapse0x2842040();
   input += synapse0x2842340();
   input += synapse0x2842380();
   input += synapse0x2842680();
   input += synapse0x28426c0();
   input += synapse0x28429c0();
   input += synapse0x2842a00();
   input += synapse0x2842d00();
   input += synapse0x2842d40();
   input += synapse0x2843040();
   input += synapse0x2843080();
   input += synapse0x2843380();
   return input;
}

double NNfunction_uRg::neuron0x284f8f0() {
   double input = input0x284f8f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2851700() {
   double input = 0.373669;
   input += synapse0x28433c0();
   input += synapse0x2844080();
   input += synapse0x28440c0();
   input += synapse0x284fa80();
   input += synapse0x284fac0();
   input += synapse0x28443c0();
   input += synapse0x2844400();
   input += synapse0x25f2730();
   input += synapse0x25f2770();
   input += synapse0x2844b40();
   input += synapse0x2844b80();
   input += synapse0x2844e80();
   input += synapse0x2844ec0();
   input += synapse0x28451c0();
   input += synapse0x2845200();
   input += synapse0x2845500();
   input += synapse0x2845540();
   input += synapse0x2845840();
   input += synapse0x2845880();
   input += synapse0x2845b80();
   input += synapse0x2845bc0();
   input += synapse0x28436c0();
   input += synapse0x2843700();
   input += synapse0x28519a0();
   return input;
}

double NNfunction_uRg::neuron0x2851700() {
   double input = input0x2851700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x28519e0() {
   double input = 0.0135699;
   input += synapse0x2851d20();
   input += synapse0x2851d60();
   input += synapse0x2851da0();
   input += synapse0x2851de0();
   input += synapse0x2851e20();
   input += synapse0x2851e60();
   input += synapse0x2851ea0();
   input += synapse0x2851ee0();
   input += synapse0x2851f20();
   input += synapse0x2851f60();
   input += synapse0x2851fa0();
   input += synapse0x2851fe0();
   input += synapse0x2852020();
   input += synapse0x2852060();
   input += synapse0x28520a0();
   input += synapse0x28520e0();
   input += synapse0x2851b70();
   input += synapse0x2851bb0();
   input += synapse0x2852230();
   input += synapse0x2852270();
   input += synapse0x28522b0();
   input += synapse0x28522f0();
   input += synapse0x2852330();
   input += synapse0x2852370();
   return input;
}

double NNfunction_uRg::neuron0x28519e0() {
   double input = input0x28519e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x28523b0() {
   double input = -1.01392;
   input += synapse0x28526f0();
   input += synapse0x2852730();
   input += synapse0x2852770();
   input += synapse0x28527b0();
   input += synapse0x28527f0();
   input += synapse0x2852830();
   input += synapse0x2852870();
   input += synapse0x28528b0();
   input += synapse0x28528f0();
   input += synapse0x2852930();
   input += synapse0x2852970();
   input += synapse0x28529b0();
   input += synapse0x28529f0();
   input += synapse0x2852a30();
   input += synapse0x2852a70();
   input += synapse0x2852ab0();
   input += synapse0x2852540();
   input += synapse0x2852580();
   input += synapse0x2852c00();
   input += synapse0x2852c40();
   input += synapse0x2852c80();
   input += synapse0x2852cc0();
   input += synapse0x2852d00();
   input += synapse0x2852d40();
   return input;
}

double NNfunction_uRg::neuron0x28523b0() {
   double input = input0x28523b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2852d80() {
   double input = 0.792191;
   input += synapse0x28530c0();
   input += synapse0x2853100();
   input += synapse0x2853140();
   input += synapse0x2853180();
   input += synapse0x28531c0();
   input += synapse0x2853200();
   input += synapse0x2853240();
   input += synapse0x2853280();
   input += synapse0x28532c0();
   input += synapse0x2853300();
   input += synapse0x2853340();
   input += synapse0x2853380();
   input += synapse0x28533c0();
   input += synapse0x2853400();
   input += synapse0x2853440();
   input += synapse0x2853480();
   input += synapse0x2852f10();
   input += synapse0x2852f50();
   input += synapse0x28535d0();
   input += synapse0x2853610();
   input += synapse0x2853650();
   input += synapse0x2853690();
   input += synapse0x28536d0();
   input += synapse0x2853710();
   return input;
}

double NNfunction_uRg::neuron0x2852d80() {
   double input = input0x2852d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2853750() {
   double input = -0.599082;
   input += synapse0x2853a90();
   input += synapse0x2853ad0();
   input += synapse0x2853b10();
   input += synapse0x2853b50();
   input += synapse0x2853b90();
   input += synapse0x2853bd0();
   input += synapse0x2853c10();
   input += synapse0x2853c50();
   input += synapse0x2853c90();
   input += synapse0x2853cd0();
   input += synapse0x2853d10();
   input += synapse0x2853d50();
   input += synapse0x2853d90();
   input += synapse0x2853dd0();
   input += synapse0x2853e10();
   input += synapse0x2853e50();
   input += synapse0x28538e0();
   input += synapse0x2853920();
   input += synapse0x2853fa0();
   input += synapse0x2853fe0();
   input += synapse0x2854020();
   input += synapse0x2854060();
   input += synapse0x28540a0();
   input += synapse0x28540e0();
   return input;
}

double NNfunction_uRg::neuron0x2853750() {
   double input = input0x2853750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2854120() {
   double input = -0.135268;
   input += synapse0x2854460();
   input += synapse0x28544a0();
   input += synapse0x28544e0();
   input += synapse0x2854520();
   input += synapse0x2854560();
   input += synapse0x28545a0();
   input += synapse0x28545e0();
   input += synapse0x2854620();
   input += synapse0x2854660();
   input += synapse0x284c820();
   input += synapse0x284c860();
   input += synapse0x284c8a0();
   input += synapse0x284c8e0();
   input += synapse0x284c920();
   input += synapse0x284c960();
   input += synapse0x284c9a0();
   input += synapse0x28542b0();
   input += synapse0x28542f0();
   input += synapse0x284caf0();
   input += synapse0x284cb30();
   input += synapse0x284cb70();
   input += synapse0x284cbb0();
   input += synapse0x284cbf0();
   input += synapse0x284cc30();
   return input;
}

double NNfunction_uRg::neuron0x2854120() {
   double input = input0x2854120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x284cc70() {
   double input = 0.735931;
   input += synapse0x284cfb0();
   input += synapse0x284cff0();
   input += synapse0x284d030();
   input += synapse0x284d070();
   input += synapse0x284d0b0();
   input += synapse0x284d0f0();
   input += synapse0x284d130();
   input += synapse0x284d170();
   input += synapse0x284d1b0();
   input += synapse0x284d1f0();
   input += synapse0x284d230();
   input += synapse0x284d270();
   input += synapse0x284d2b0();
   input += synapse0x284d2f0();
   input += synapse0x284d330();
   input += synapse0x284d370();
   input += synapse0x284ce00();
   input += synapse0x284ce40();
   input += synapse0x284d4c0();
   input += synapse0x284d500();
   input += synapse0x284d540();
   input += synapse0x284d580();
   input += synapse0x284d5c0();
   input += synapse0x284d600();
   return input;
}

double NNfunction_uRg::neuron0x284cc70() {
   double input = input0x284cc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x284d640() {
   double input = 0.411332;
   input += synapse0x284d7d0();
   input += synapse0x2856860();
   input += synapse0x28568a0();
   input += synapse0x28568e0();
   input += synapse0x2856920();
   input += synapse0x2856960();
   input += synapse0x28569a0();
   input += synapse0x28569e0();
   input += synapse0x2856a20();
   input += synapse0x2856a60();
   input += synapse0x2856aa0();
   input += synapse0x2856ae0();
   input += synapse0x2856b20();
   input += synapse0x2856b60();
   input += synapse0x2856ba0();
   input += synapse0x2856be0();
   input += synapse0x28566b0();
   input += synapse0x28566f0();
   input += synapse0x2856d30();
   input += synapse0x2856d70();
   input += synapse0x2856db0();
   input += synapse0x2856df0();
   input += synapse0x2856e30();
   input += synapse0x2856e70();
   return input;
}

double NNfunction_uRg::neuron0x284d640() {
   double input = input0x284d640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2856eb0() {
   double input = 0.604861;
   input += synapse0x28571f0();
   input += synapse0x2857230();
   input += synapse0x2857270();
   input += synapse0x28572b0();
   input += synapse0x28572f0();
   input += synapse0x2857330();
   input += synapse0x2857370();
   input += synapse0x28573b0();
   input += synapse0x28573f0();
   input += synapse0x2857430();
   input += synapse0x2857470();
   input += synapse0x28574b0();
   input += synapse0x28574f0();
   input += synapse0x2857530();
   input += synapse0x2857570();
   input += synapse0x28575b0();
   input += synapse0x2857040();
   input += synapse0x2857080();
   input += synapse0x2857700();
   input += synapse0x2857740();
   input += synapse0x2857780();
   input += synapse0x28577c0();
   input += synapse0x2857800();
   input += synapse0x2857840();
   return input;
}

double NNfunction_uRg::neuron0x2856eb0() {
   double input = input0x2856eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2857880() {
   double input = -0.0939266;
   input += synapse0x2857bc0();
   input += synapse0x2857c00();
   input += synapse0x2857c40();
   input += synapse0x2857c80();
   input += synapse0x2857cc0();
   input += synapse0x2857d00();
   input += synapse0x2857d40();
   input += synapse0x2857d80();
   input += synapse0x2857dc0();
   input += synapse0x2857e00();
   input += synapse0x2857e40();
   input += synapse0x2857e80();
   input += synapse0x2857ec0();
   input += synapse0x2857f00();
   input += synapse0x2857f40();
   input += synapse0x2857f80();
   input += synapse0x2857a10();
   input += synapse0x2857a50();
   input += synapse0x28580d0();
   input += synapse0x2858110();
   input += synapse0x2858150();
   input += synapse0x2858190();
   input += synapse0x28581d0();
   input += synapse0x2858210();
   return input;
}

double NNfunction_uRg::neuron0x2857880() {
   double input = input0x2857880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2858250() {
   double input = 0.179021;
   input += synapse0x2858590();
   input += synapse0x28585d0();
   input += synapse0x2858610();
   input += synapse0x2858650();
   input += synapse0x2858690();
   input += synapse0x28586d0();
   input += synapse0x2858710();
   input += synapse0x2858750();
   input += synapse0x2858790();
   input += synapse0x28587d0();
   input += synapse0x2858810();
   input += synapse0x2858850();
   input += synapse0x2858890();
   input += synapse0x28588d0();
   input += synapse0x2858910();
   input += synapse0x2858950();
   input += synapse0x28583e0();
   input += synapse0x2858420();
   input += synapse0x2858aa0();
   input += synapse0x2858ae0();
   input += synapse0x2858b20();
   input += synapse0x2858b60();
   input += synapse0x2858ba0();
   input += synapse0x2858be0();
   return input;
}

double NNfunction_uRg::neuron0x2858250() {
   double input = input0x2858250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2858c20() {
   double input = -0.138845;
   input += synapse0x2858f60();
   input += synapse0x2858fa0();
   input += synapse0x2858fe0();
   input += synapse0x2859020();
   input += synapse0x2859060();
   input += synapse0x28590a0();
   input += synapse0x28590e0();
   input += synapse0x2859120();
   input += synapse0x2859160();
   input += synapse0x28591a0();
   input += synapse0x28591e0();
   input += synapse0x2859220();
   input += synapse0x2859260();
   input += synapse0x28592a0();
   input += synapse0x28592e0();
   input += synapse0x2859320();
   input += synapse0x2858db0();
   input += synapse0x2858df0();
   input += synapse0x2859470();
   input += synapse0x28594b0();
   input += synapse0x28594f0();
   input += synapse0x2859530();
   input += synapse0x2859570();
   input += synapse0x28595b0();
   return input;
}

double NNfunction_uRg::neuron0x2858c20() {
   double input = input0x2858c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x28595f0() {
   double input = -0.261562;
   input += synapse0x2859930();
   input += synapse0x2859970();
   input += synapse0x28599b0();
   input += synapse0x28599f0();
   input += synapse0x2859a30();
   input += synapse0x2859a70();
   input += synapse0x2859ab0();
   input += synapse0x2859af0();
   input += synapse0x2859b30();
   input += synapse0x2859b70();
   input += synapse0x2859bb0();
   input += synapse0x2859bf0();
   input += synapse0x2859c30();
   input += synapse0x2859c70();
   input += synapse0x2859cb0();
   input += synapse0x2859cf0();
   input += synapse0x2859780();
   input += synapse0x28597c0();
   input += synapse0x2859e40();
   input += synapse0x2859e80();
   input += synapse0x2859ec0();
   input += synapse0x2859f00();
   input += synapse0x2859f40();
   input += synapse0x2859f80();
   return input;
}

double NNfunction_uRg::neuron0x28595f0() {
   double input = input0x28595f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2859fc0() {
   double input = 0.674402;
   input += synapse0x285a300();
   input += synapse0x285a340();
   input += synapse0x285a380();
   input += synapse0x285a3c0();
   input += synapse0x285a400();
   input += synapse0x285a440();
   input += synapse0x285a480();
   input += synapse0x285a4c0();
   input += synapse0x285a500();
   input += synapse0x285a540();
   input += synapse0x285a580();
   input += synapse0x285a5c0();
   input += synapse0x285a600();
   input += synapse0x285a640();
   input += synapse0x285a680();
   input += synapse0x285a6c0();
   input += synapse0x285a150();
   input += synapse0x285a190();
   input += synapse0x285a810();
   input += synapse0x285a850();
   input += synapse0x285a890();
   input += synapse0x285a8d0();
   input += synapse0x285a910();
   input += synapse0x285a950();
   return input;
}

double NNfunction_uRg::neuron0x2859fc0() {
   double input = input0x2859fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x285a990() {
   double input = 1.7983;
   input += synapse0x285acd0();
   input += synapse0x285ad10();
   input += synapse0x285ad50();
   input += synapse0x285ad90();
   input += synapse0x285add0();
   input += synapse0x285ae10();
   input += synapse0x285ae50();
   input += synapse0x285ae90();
   input += synapse0x285aed0();
   input += synapse0x285af10();
   input += synapse0x285af50();
   input += synapse0x285af90();
   input += synapse0x285afd0();
   input += synapse0x285b010();
   input += synapse0x285b050();
   input += synapse0x285b090();
   input += synapse0x285ab20();
   input += synapse0x285ab60();
   input += synapse0x285b1e0();
   input += synapse0x285b220();
   input += synapse0x285b260();
   input += synapse0x285b2a0();
   input += synapse0x285b2e0();
   input += synapse0x285b320();
   return input;
}

double NNfunction_uRg::neuron0x285a990() {
   double input = input0x285a990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x285b360() {
   double input = 0.58654;
   input += synapse0x285b6a0();
   input += synapse0x284fc70();
   input += synapse0x284fcb0();
   input += synapse0x284fcf0();
   input += synapse0x284ff40();
   input += synapse0x284ff80();
   input += synapse0x284ffc0();
   input += synapse0x2850210();
   input += synapse0x2850250();
   input += synapse0x28504a0();
   input += synapse0x28504e0();
   input += synapse0x2850520();
   input += synapse0x2850770();
   input += synapse0x28507b0();
   input += synapse0x2850a00();
   input += synapse0x2850a40();
   input += synapse0x285b4f0();
   input += synapse0x285b530();
   input += synapse0x2850b90();
   input += synapse0x28510a0();
   input += synapse0x28510e0();
   input += synapse0x2851120();
   input += synapse0x2851370();
   input += synapse0x28513b0();
   return input;
}

double NNfunction_uRg::neuron0x285b360() {
   double input = input0x285b360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x28513f0() {
   double input = 0.519774;
   input += synapse0x2850c60();
   input += synapse0x2850ca0();
   input += synapse0x2850ce0();
   input += synapse0x2850d20();
   input += synapse0x28516a0();
   input += synapse0x285d9f0();
   input += synapse0x285da30();
   input += synapse0x285da70();
   input += synapse0x285dab0();
   input += synapse0x285daf0();
   input += synapse0x285db30();
   input += synapse0x285db70();
   input += synapse0x285dbb0();
   input += synapse0x285dbf0();
   input += synapse0x285dc30();
   input += synapse0x285dc70();
   input += synapse0x2851580();
   input += synapse0x28515c0();
   input += synapse0x285ddc0();
   input += synapse0x285de00();
   input += synapse0x285de40();
   input += synapse0x285de80();
   input += synapse0x285dec0();
   input += synapse0x285df00();
   return input;
}

double NNfunction_uRg::neuron0x28513f0() {
   double input = input0x28513f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x285df40() {
   double input = 0.895768;
   input += synapse0x285e280();
   input += synapse0x285e2c0();
   input += synapse0x285e300();
   input += synapse0x285e340();
   input += synapse0x285e380();
   input += synapse0x285e3c0();
   input += synapse0x285e400();
   input += synapse0x285e440();
   input += synapse0x285e480();
   input += synapse0x285e4c0();
   input += synapse0x285e500();
   input += synapse0x285e540();
   input += synapse0x285e580();
   input += synapse0x285e5c0();
   input += synapse0x285e600();
   input += synapse0x285e640();
   input += synapse0x285e0d0();
   input += synapse0x285e110();
   input += synapse0x285e790();
   input += synapse0x285e7d0();
   input += synapse0x285e810();
   input += synapse0x285e850();
   input += synapse0x285e890();
   input += synapse0x285e8d0();
   return input;
}

double NNfunction_uRg::neuron0x285df40() {
   double input = input0x285df40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x285e910() {
   double input = 0.538523;
   input += synapse0x285ec50();
   input += synapse0x285ec90();
   input += synapse0x285ecd0();
   input += synapse0x285ed10();
   input += synapse0x285ed50();
   input += synapse0x285ed90();
   input += synapse0x285edd0();
   input += synapse0x285ee10();
   input += synapse0x285ee50();
   input += synapse0x285ee90();
   input += synapse0x285eed0();
   input += synapse0x285ef10();
   input += synapse0x285ef50();
   input += synapse0x285ef90();
   input += synapse0x285efd0();
   input += synapse0x285f010();
   input += synapse0x285eaa0();
   input += synapse0x285eae0();
   input += synapse0x285f160();
   input += synapse0x285f1a0();
   input += synapse0x285f1e0();
   input += synapse0x285f220();
   input += synapse0x285f260();
   input += synapse0x285f2a0();
   return input;
}

double NNfunction_uRg::neuron0x285e910() {
   double input = input0x285e910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x285f2e0() {
   double input = 0.482334;
   input += synapse0x285f620();
   input += synapse0x285f660();
   input += synapse0x285f6a0();
   input += synapse0x285f6e0();
   input += synapse0x285f720();
   input += synapse0x285f760();
   input += synapse0x285f7a0();
   input += synapse0x285f7e0();
   input += synapse0x285f820();
   input += synapse0x285f860();
   input += synapse0x285f8a0();
   input += synapse0x285f8e0();
   input += synapse0x285f920();
   input += synapse0x285f960();
   input += synapse0x285f9a0();
   input += synapse0x285f9e0();
   input += synapse0x285f470();
   input += synapse0x285f4b0();
   input += synapse0x285fb30();
   input += synapse0x285fb70();
   input += synapse0x285fbb0();
   input += synapse0x285fbf0();
   input += synapse0x285fc30();
   input += synapse0x285fc70();
   return input;
}

double NNfunction_uRg::neuron0x285f2e0() {
   double input = input0x285f2e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x285fcb0() {
   double input = 0.334637;
   input += synapse0x285fff0();
   input += synapse0x2860030();
   input += synapse0x2860070();
   input += synapse0x28600b0();
   input += synapse0x28600f0();
   input += synapse0x2860130();
   input += synapse0x2860170();
   input += synapse0x28601b0();
   input += synapse0x28601f0();
   input += synapse0x2860230();
   input += synapse0x2860270();
   input += synapse0x28602b0();
   input += synapse0x28602f0();
   input += synapse0x2860330();
   input += synapse0x2860370();
   input += synapse0x28603b0();
   input += synapse0x285fe40();
   input += synapse0x285fe80();
   input += synapse0x2860500();
   input += synapse0x2860540();
   input += synapse0x2860580();
   input += synapse0x28605c0();
   input += synapse0x2860600();
   input += synapse0x2860640();
   return input;
}

double NNfunction_uRg::neuron0x285fcb0() {
   double input = input0x285fcb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2860680() {
   double input = 1.10949;
   input += synapse0x28609c0();
   input += synapse0x2860a00();
   input += synapse0x2860a40();
   input += synapse0x2860a80();
   input += synapse0x2860ac0();
   input += synapse0x2860b00();
   input += synapse0x2860b40();
   input += synapse0x2860b80();
   input += synapse0x2860bc0();
   input += synapse0x2860c00();
   input += synapse0x2860c40();
   input += synapse0x2860c80();
   input += synapse0x2860cc0();
   input += synapse0x2860d00();
   input += synapse0x2860d40();
   input += synapse0x2860d80();
   input += synapse0x2860810();
   input += synapse0x2860850();
   input += synapse0x2860ed0();
   input += synapse0x2860f10();
   input += synapse0x2860f50();
   input += synapse0x2860f90();
   input += synapse0x2860fd0();
   input += synapse0x2861010();
   return input;
}

double NNfunction_uRg::neuron0x2860680() {
   double input = input0x2860680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2861050() {
   double input = -0.475308;
   input += synapse0x2861390();
   input += synapse0x28613d0();
   input += synapse0x2861410();
   input += synapse0x2861450();
   input += synapse0x2861490();
   input += synapse0x28614d0();
   input += synapse0x2861510();
   input += synapse0x2861550();
   input += synapse0x2861590();
   input += synapse0x28615d0();
   input += synapse0x2861610();
   input += synapse0x2861650();
   input += synapse0x2861690();
   input += synapse0x28616d0();
   input += synapse0x2861710();
   input += synapse0x2861750();
   input += synapse0x28611e0();
   input += synapse0x2861220();
   input += synapse0x28618a0();
   input += synapse0x28618e0();
   input += synapse0x2861920();
   input += synapse0x2861960();
   input += synapse0x28619a0();
   input += synapse0x28619e0();
   return input;
}

double NNfunction_uRg::neuron0x2861050() {
   double input = input0x2861050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2861a20() {
   double input = -0.0280791;
   input += synapse0x2861d60();
   input += synapse0x2861da0();
   input += synapse0x2861de0();
   input += synapse0x2861e20();
   input += synapse0x2861e60();
   input += synapse0x2861ea0();
   input += synapse0x2861ee0();
   input += synapse0x2861f20();
   input += synapse0x2861f60();
   input += synapse0x2861fa0();
   input += synapse0x2861fe0();
   input += synapse0x2862020();
   input += synapse0x2862060();
   input += synapse0x28620a0();
   input += synapse0x28620e0();
   input += synapse0x2862120();
   input += synapse0x2861bb0();
   input += synapse0x2861bf0();
   input += synapse0x2862270();
   input += synapse0x28622b0();
   input += synapse0x28622f0();
   input += synapse0x2862330();
   input += synapse0x2862370();
   input += synapse0x28623b0();
   return input;
}

double NNfunction_uRg::neuron0x2861a20() {
   double input = input0x2861a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x28623f0() {
   double input = -4.29524;
   input += synapse0x284ae60();
   input += synapse0x284aea0();
   input += synapse0x284aee0();
   input += synapse0x284af20();
   input += synapse0x284af60();
   input += synapse0x284afa0();
   input += synapse0x284afe0();
   input += synapse0x284b020();
   input += synapse0x2862b40();
   input += synapse0x2862b80();
   input += synapse0x2862bc0();
   input += synapse0x2862c00();
   input += synapse0x2862c40();
   input += synapse0x2862c80();
   input += synapse0x2862cc0();
   input += synapse0x2862d00();
   input += synapse0x2862580();
   input += synapse0x28625c0();
   input += synapse0x2862e50();
   input += synapse0x2862e90();
   input += synapse0x2862ed0();
   input += synapse0x2862f10();
   input += synapse0x2862f50();
   input += synapse0x2862f90();
   return input;
}

double NNfunction_uRg::neuron0x28623f0() {
   double input = input0x28623f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2862fd0() {
   double input = -0.589075;
   input += synapse0x2863310();
   input += synapse0x2863350();
   input += synapse0x2863390();
   input += synapse0x28633d0();
   input += synapse0x2863410();
   input += synapse0x2863450();
   input += synapse0x2863490();
   input += synapse0x28634d0();
   input += synapse0x2863510();
   input += synapse0x2863550();
   input += synapse0x2863590();
   input += synapse0x28635d0();
   input += synapse0x2863610();
   input += synapse0x2863650();
   input += synapse0x2863690();
   input += synapse0x28636d0();
   input += synapse0x2863160();
   input += synapse0x28631a0();
   input += synapse0x2863820();
   input += synapse0x2863860();
   input += synapse0x28638a0();
   input += synapse0x28638e0();
   input += synapse0x2863920();
   input += synapse0x2863960();
   return input;
}

double NNfunction_uRg::neuron0x2862fd0() {
   double input = input0x2862fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x28639a0() {
   double input = -0.915445;
   input += synapse0x2863ce0();
   input += synapse0x2863d20();
   input += synapse0x2863d60();
   input += synapse0x2863da0();
   input += synapse0x2863de0();
   input += synapse0x2863e20();
   input += synapse0x2863e60();
   input += synapse0x2863ea0();
   input += synapse0x2863ee0();
   input += synapse0x2863f20();
   input += synapse0x2863f60();
   input += synapse0x2863fa0();
   input += synapse0x2863fe0();
   input += synapse0x2864020();
   input += synapse0x2864060();
   input += synapse0x28640a0();
   input += synapse0x2863b30();
   input += synapse0x2863b70();
   input += synapse0x28546a0();
   input += synapse0x28546e0();
   input += synapse0x2854720();
   input += synapse0x2854760();
   input += synapse0x28547a0();
   input += synapse0x28547e0();
   return input;
}

double NNfunction_uRg::neuron0x28639a0() {
   double input = input0x28639a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2854820() {
   double input = 0.638935;
   input += synapse0x2854b60();
   input += synapse0x2854ba0();
   input += synapse0x2854be0();
   input += synapse0x2854c20();
   input += synapse0x2854c60();
   input += synapse0x2854ca0();
   input += synapse0x2854ce0();
   input += synapse0x2854d20();
   input += synapse0x2854d60();
   input += synapse0x2854da0();
   input += synapse0x2854de0();
   input += synapse0x2854e20();
   input += synapse0x2854e60();
   input += synapse0x2854ea0();
   input += synapse0x2854ee0();
   input += synapse0x2854f20();
   input += synapse0x28549b0();
   input += synapse0x28549f0();
   input += synapse0x2855070();
   input += synapse0x28550b0();
   input += synapse0x28550f0();
   input += synapse0x2855130();
   input += synapse0x2855170();
   input += synapse0x28551b0();
   return input;
}

double NNfunction_uRg::neuron0x2854820() {
   double input = input0x2854820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x28551f0() {
   double input = -0.134618;
   input += synapse0x2855530();
   input += synapse0x2855570();
   input += synapse0x28555b0();
   input += synapse0x28555f0();
   input += synapse0x2855630();
   input += synapse0x2855670();
   input += synapse0x28556b0();
   input += synapse0x28556f0();
   input += synapse0x2855730();
   input += synapse0x2855770();
   input += synapse0x28557b0();
   input += synapse0x28557f0();
   input += synapse0x2855830();
   input += synapse0x2855870();
   input += synapse0x28558b0();
   input += synapse0x28558f0();
   input += synapse0x2855380();
   input += synapse0x28553c0();
   input += synapse0x2855a40();
   input += synapse0x2855a80();
   input += synapse0x2855ac0();
   input += synapse0x2855b00();
   input += synapse0x2855b40();
   input += synapse0x2855b80();
   return input;
}

double NNfunction_uRg::neuron0x28551f0() {
   double input = input0x28551f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2855bc0() {
   double input = -0.610719;
   input += synapse0x2855f00();
   input += synapse0x2855f40();
   input += synapse0x2855f80();
   input += synapse0x2855fc0();
   input += synapse0x2856000();
   input += synapse0x2856040();
   input += synapse0x2856080();
   input += synapse0x28560c0();
   input += synapse0x2856100();
   input += synapse0x2856140();
   input += synapse0x2856180();
   input += synapse0x28561c0();
   input += synapse0x2856200();
   input += synapse0x2856240();
   input += synapse0x2856280();
   input += synapse0x28562c0();
   input += synapse0x2855d50();
   input += synapse0x2855d90();
   input += synapse0x2856410();
   input += synapse0x2856450();
   input += synapse0x2856490();
   input += synapse0x28564d0();
   input += synapse0x2856510();
   input += synapse0x2856550();
   return input;
}

double NNfunction_uRg::neuron0x2855bc0() {
   double input = input0x2855bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2868200() {
   double input = -0.145552;
   input += synapse0x2868420();
   input += synapse0x2868460();
   input += synapse0x28684a0();
   input += synapse0x28684e0();
   input += synapse0x2868520();
   input += synapse0x2868560();
   input += synapse0x28685a0();
   input += synapse0x28685e0();
   input += synapse0x2868620();
   input += synapse0x2868660();
   input += synapse0x28686a0();
   input += synapse0x28686e0();
   input += synapse0x2868720();
   input += synapse0x2868760();
   input += synapse0x28687a0();
   input += synapse0x28687e0();
   input += synapse0x2856590();
   input += synapse0x28565d0();
   input += synapse0x2868930();
   input += synapse0x2868970();
   input += synapse0x28689b0();
   input += synapse0x28689f0();
   input += synapse0x2868a30();
   input += synapse0x2868a70();
   return input;
}

double NNfunction_uRg::neuron0x2868200() {
   double input = input0x2868200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2868ab0() {
   double input = 0.533111;
   input += synapse0x2868df0();
   input += synapse0x2868e30();
   input += synapse0x2868e70();
   input += synapse0x2868eb0();
   input += synapse0x2868ef0();
   input += synapse0x2868f30();
   input += synapse0x2868f70();
   input += synapse0x2868fb0();
   input += synapse0x2868ff0();
   input += synapse0x2869030();
   input += synapse0x2869070();
   input += synapse0x28690b0();
   input += synapse0x28690f0();
   input += synapse0x2869130();
   input += synapse0x2869170();
   input += synapse0x28691b0();
   input += synapse0x2868c40();
   input += synapse0x2868c80();
   input += synapse0x2869300();
   input += synapse0x2869340();
   input += synapse0x2869380();
   input += synapse0x28693c0();
   input += synapse0x2869400();
   input += synapse0x2869440();
   return input;
}

double NNfunction_uRg::neuron0x2868ab0() {
   double input = input0x2868ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2869480() {
   double input = 0.271466;
   input += synapse0x28697c0();
   input += synapse0x2869800();
   input += synapse0x2869840();
   input += synapse0x2869880();
   input += synapse0x28698c0();
   input += synapse0x2869900();
   input += synapse0x2869940();
   input += synapse0x2869980();
   input += synapse0x28699c0();
   input += synapse0x2869a00();
   input += synapse0x2869a40();
   input += synapse0x2869a80();
   input += synapse0x2869ac0();
   input += synapse0x2869b00();
   input += synapse0x2869b40();
   input += synapse0x2869b80();
   input += synapse0x2869610();
   input += synapse0x2869650();
   input += synapse0x2869cd0();
   input += synapse0x2869d10();
   input += synapse0x2869d50();
   input += synapse0x2869d90();
   input += synapse0x2869dd0();
   input += synapse0x2869e10();
   return input;
}

double NNfunction_uRg::neuron0x2869480() {
   double input = input0x2869480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2869e50() {
   double input = 0.748501;
   input += synapse0x286a190();
   input += synapse0x286a1d0();
   input += synapse0x286a210();
   input += synapse0x286a250();
   input += synapse0x286a290();
   input += synapse0x286a2d0();
   input += synapse0x286a310();
   input += synapse0x286a350();
   input += synapse0x286a390();
   input += synapse0x286a3d0();
   input += synapse0x286a410();
   input += synapse0x286a450();
   input += synapse0x286a490();
   input += synapse0x286a4d0();
   input += synapse0x286a510();
   input += synapse0x286a550();
   input += synapse0x2869fe0();
   input += synapse0x286a020();
   input += synapse0x286a6a0();
   input += synapse0x286a6e0();
   input += synapse0x286a720();
   input += synapse0x286a760();
   input += synapse0x286a7a0();
   input += synapse0x286a7e0();
   return input;
}

double NNfunction_uRg::neuron0x2869e50() {
   double input = input0x2869e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2871050() {
   double input = -0.439588;
   input += synapse0x2600bb0();
   input += synapse0x2600bf0();
   input += synapse0x2848290();
   input += synapse0x28482d0();
   input += synapse0x2848c60();
   input += synapse0x2848ca0();
   input += synapse0x2849a30();
   input += synapse0x2849a70();
   input += synapse0x284a400();
   input += synapse0x284a440();
   input += synapse0x284add0();
   input += synapse0x284ae10();
   input += synapse0x284b8b0();
   input += synapse0x284b8f0();
   input += synapse0x284c280();
   input += synapse0x284c2c0();
   input += synapse0x2849360();
   input += synapse0x28493a0();
   input += synapse0x284de30();
   input += synapse0x284de70();
   input += synapse0x284e800();
   input += synapse0x284e840();
   input += synapse0x284f1d0();
   input += synapse0x284f210();
   input += synapse0x284fba0();
   input += synapse0x284fbe0();
   input += synapse0x2843d40();
   input += synapse0x2843d80();
   input += synapse0x2851c90();
   input += synapse0x2851cd0();
   input += synapse0x2852660();
   input += synapse0x28526a0();
   input += synapse0x2853030();
   input += synapse0x2853070();
   input += synapse0x2853a00();
   input += synapse0x2853a40();
   input += synapse0x28543d0();
   input += synapse0x2854410();
   input += synapse0x284cf20();
   input += synapse0x284cf60();
   input += synapse0x28567d0();
   input += synapse0x2856810();
   input += synapse0x2857160();
   input += synapse0x28571a0();
   input += synapse0x2857b30();
   input += synapse0x2857b70();
   input += synapse0x2858500();
   input += synapse0x2858540();
   input += synapse0x2858ed0();
   input += synapse0x2858f10();
   return input;
}

double NNfunction_uRg::neuron0x2871050() {
   double input = input0x2871050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x28713f0() {
   double input = -0.387723;
   input += synapse0x285b610();
   input += synapse0x285b650();
   input += synapse0x2850bd0();
   input += synapse0x2850c10();
   input += synapse0x285e1f0();
   input += synapse0x285e230();
   input += synapse0x285ebc0();
   input += synapse0x285ec00();
   input += synapse0x285f590();
   input += synapse0x285f5d0();
   input += synapse0x285ff60();
   input += synapse0x285ffa0();
   input += synapse0x2860930();
   input += synapse0x2860970();
   input += synapse0x2861300();
   input += synapse0x2861340();
   input += synapse0x2861cd0();
   input += synapse0x2861d10();
   input += synapse0x28626a0();
   input += synapse0x28626e0();
   input += synapse0x2863280();
   input += synapse0x28632c0();
   input += synapse0x2863c50();
   input += synapse0x2863c90();
   input += synapse0x2854ad0();
   input += synapse0x2854b10();
   input += synapse0x28554a0();
   input += synapse0x28554e0();
   input += synapse0x2855e70();
   input += synapse0x2855eb0();
   input += synapse0x2868390();
   input += synapse0x28683d0();
   input += synapse0x2868d60();
   input += synapse0x2868da0();
   input += synapse0x2869730();
   input += synapse0x2869770();
   input += synapse0x286a100();
   input += synapse0x286a140();
   input += synapse0x2845ff0();
   input += synapse0x2846030();
   input += synapse0x28598a0();
   input += synapse0x28598e0();
   input += synapse0x286a820();
   input += synapse0x286a860();
   input += synapse0x286a8a0();
   input += synapse0x286a8e0();
   input += synapse0x2871790();
   input += synapse0x28717d0();
   input += synapse0x2871810();
   input += synapse0x2871850();
   return input;
}

double NNfunction_uRg::neuron0x28713f0() {
   double input = input0x28713f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2871890() {
   double input = -0.825474;
   input += synapse0x2871bd0();
   input += synapse0x2871c10();
   input += synapse0x2871c50();
   input += synapse0x2871c90();
   input += synapse0x2871cd0();
   input += synapse0x2871d10();
   input += synapse0x2871d50();
   input += synapse0x2871d90();
   input += synapse0x2871dd0();
   input += synapse0x2871e10();
   input += synapse0x2871e50();
   input += synapse0x2871e90();
   input += synapse0x2871ed0();
   input += synapse0x2871f10();
   input += synapse0x2871f50();
   input += synapse0x2871f90();
   input += synapse0x2871a20();
   input += synapse0x2871a60();
   input += synapse0x28720e0();
   input += synapse0x2872120();
   input += synapse0x2872160();
   input += synapse0x28721a0();
   input += synapse0x28721e0();
   input += synapse0x2872220();
   input += synapse0x2872260();
   input += synapse0x28722a0();
   input += synapse0x28722e0();
   input += synapse0x2872320();
   input += synapse0x2872360();
   input += synapse0x28723a0();
   input += synapse0x28723e0();
   input += synapse0x2872420();
   input += synapse0x2871fd0();
   input += synapse0x2872010();
   input += synapse0x2872050();
   input += synapse0x2872090();
   input += synapse0x2872670();
   input += synapse0x28726b0();
   input += synapse0x28726f0();
   input += synapse0x2872730();
   input += synapse0x2872770();
   input += synapse0x28727b0();
   input += synapse0x28727f0();
   input += synapse0x2872830();
   input += synapse0x2872870();
   input += synapse0x28728b0();
   input += synapse0x28728f0();
   input += synapse0x2872930();
   input += synapse0x2872970();
   input += synapse0x28729b0();
   return input;
}

double NNfunction_uRg::neuron0x2871890() {
   double input = input0x2871890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x28729f0() {
   double input = 0.199237;
   input += synapse0x2872d30();
   input += synapse0x2872d70();
   input += synapse0x2872db0();
   input += synapse0x2872df0();
   input += synapse0x2872e30();
   input += synapse0x2872e70();
   input += synapse0x2872eb0();
   input += synapse0x2872ef0();
   input += synapse0x2872f30();
   input += synapse0x2872f70();
   input += synapse0x2872fb0();
   input += synapse0x2872ff0();
   input += synapse0x2873030();
   input += synapse0x2873070();
   input += synapse0x28730b0();
   input += synapse0x28730f0();
   input += synapse0x2872b80();
   input += synapse0x2872bc0();
   input += synapse0x2873240();
   input += synapse0x2873280();
   input += synapse0x28732c0();
   input += synapse0x2873300();
   input += synapse0x2873340();
   input += synapse0x2873380();
   input += synapse0x28733c0();
   input += synapse0x2873400();
   input += synapse0x2873440();
   input += synapse0x2873480();
   input += synapse0x28734c0();
   input += synapse0x2873500();
   input += synapse0x2873540();
   input += synapse0x2873580();
   input += synapse0x2873130();
   input += synapse0x2873170();
   input += synapse0x28731b0();
   input += synapse0x28731f0();
   input += synapse0x28737d0();
   input += synapse0x2873810();
   input += synapse0x2873850();
   input += synapse0x2873890();
   input += synapse0x28738d0();
   input += synapse0x2873910();
   input += synapse0x2873950();
   input += synapse0x2873990();
   input += synapse0x28739d0();
   input += synapse0x2873a10();
   input += synapse0x2873a50();
   input += synapse0x2873a90();
   input += synapse0x2873ad0();
   input += synapse0x2873b10();
   return input;
}

double NNfunction_uRg::neuron0x28729f0() {
   double input = input0x28729f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2873b50() {
   double input = 0.224123;
   input += synapse0x2873e90();
   input += synapse0x2873ed0();
   input += synapse0x2873f10();
   input += synapse0x2873f50();
   input += synapse0x2873f90();
   input += synapse0x2873fd0();
   input += synapse0x2874010();
   input += synapse0x2874050();
   input += synapse0x2874090();
   input += synapse0x28740d0();
   input += synapse0x2874110();
   input += synapse0x2874150();
   input += synapse0x2874190();
   input += synapse0x28741d0();
   input += synapse0x2874210();
   input += synapse0x2874250();
   input += synapse0x2873ce0();
   input += synapse0x2873d20();
   input += synapse0x28743a0();
   input += synapse0x28743e0();
   input += synapse0x2874420();
   input += synapse0x2874460();
   input += synapse0x28744a0();
   input += synapse0x28744e0();
   input += synapse0x2874520();
   input += synapse0x2874560();
   input += synapse0x28745a0();
   input += synapse0x28745e0();
   input += synapse0x2874620();
   input += synapse0x2874660();
   input += synapse0x28746a0();
   input += synapse0x28746e0();
   input += synapse0x2874290();
   input += synapse0x28742d0();
   input += synapse0x2874310();
   input += synapse0x2874350();
   input += synapse0x2874930();
   input += synapse0x2874970();
   input += synapse0x28749b0();
   input += synapse0x28749f0();
   input += synapse0x2874a30();
   input += synapse0x2874a70();
   input += synapse0x2874ab0();
   input += synapse0x2874af0();
   input += synapse0x2874b30();
   input += synapse0x2874b70();
   input += synapse0x2874bb0();
   input += synapse0x2874bf0();
   input += synapse0x2874c30();
   input += synapse0x2874c70();
   return input;
}

double NNfunction_uRg::neuron0x2873b50() {
   double input = input0x2873b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uRg::input0x2874cb0() {
   double input = 12.7094;
   input += synapse0x2874ed0();
   input += synapse0x2874f10();
   input += synapse0x2874f50();
   input += synapse0x2874f90();
   input += synapse0x2874fd0();
   return input;
}

double NNfunction_uRg::neuron0x2874cb0() {
   double input = input0x2874cb0();
   return (input * 1)+0;
}

double NNfunction_uRg::synapse0x2840c60() {
   return (neuron0x2840da0()*0.0112311);
}

double NNfunction_uRg::synapse0x2840ca0() {
   return (neuron0x28410e0()*-0.00473299);
}

double NNfunction_uRg::synapse0x2846080() {
   return (neuron0x2841420()*0.0290676);
}

double NNfunction_uRg::synapse0x28460c0() {
   return (neuron0x2841760()*0.0284972);
}

double NNfunction_uRg::synapse0x2846100() {
   return (neuron0x2841aa0()*0.0960292);
}

double NNfunction_uRg::synapse0x2846140() {
   return (neuron0x2841de0()*-0.145076);
}

double NNfunction_uRg::synapse0x2846180() {
   return (neuron0x2842120()*-0.151682);
}

double NNfunction_uRg::synapse0x28461c0() {
   return (neuron0x2842460()*-0.0180104);
}

double NNfunction_uRg::synapse0x2846200() {
   return (neuron0x28427a0()*0.0254101);
}

double NNfunction_uRg::synapse0x2846240() {
   return (neuron0x2842ae0()*0.0154393);
}

double NNfunction_uRg::synapse0x2846280() {
   return (neuron0x2842e20()*0.0504543);
}

double NNfunction_uRg::synapse0x28462c0() {
   return (neuron0x2843160()*-0.000351447);
}

double NNfunction_uRg::synapse0x2846300() {
   return (neuron0x28434a0()*0.0562867);
}

double NNfunction_uRg::synapse0x2846340() {
   return (neuron0x28437e0()*-0.0457381);
}

double NNfunction_uRg::synapse0x2846380() {
   return (neuron0x2843b20()*-0.301696);
}

double NNfunction_uRg::synapse0x28463c0() {
   return (neuron0x2843e60()*-0.107066);
}

double NNfunction_uRg::synapse0x2840bd0() {
   return (neuron0x28441a0()*-0.0434055);
}

double NNfunction_uRg::synapse0x2840c10() {
   return (neuron0x2844700()*0.0189621);
}

double NNfunction_uRg::synapse0x25f2850() {
   return (neuron0x2844920()*0.0185275);
}

double NNfunction_uRg::synapse0x25f2890() {
   return (neuron0x2844c60()*-0.0276948);
}

double NNfunction_uRg::synapse0x2846620() {
   return (neuron0x2844fa0()*-0.064294);
}

double NNfunction_uRg::synapse0x2846660() {
   return (neuron0x28452e0()*0.0356364);
}

double NNfunction_uRg::synapse0x28466a0() {
   return (neuron0x2845620()*0.00988228);
}

double NNfunction_uRg::synapse0x28466e0() {
   return (neuron0x2845960()*0.111031);
}

double NNfunction_uRg::synapse0x2846a60() {
   return (neuron0x2840da0()*-0.10246);
}

double NNfunction_uRg::synapse0x2846aa0() {
   return (neuron0x28410e0()*-0.0852514);
}

double NNfunction_uRg::synapse0x2846ae0() {
   return (neuron0x2841420()*-0.130437);
}

double NNfunction_uRg::synapse0x2846b20() {
   return (neuron0x2841760()*0.448647);
}

double NNfunction_uRg::synapse0x2846b60() {
   return (neuron0x2841aa0()*-0.130173);
}

double NNfunction_uRg::synapse0x2846ba0() {
   return (neuron0x2841de0()*0.271319);
}

double NNfunction_uRg::synapse0x2846be0() {
   return (neuron0x2842120()*-0.0723458);
}

double NNfunction_uRg::synapse0x2846c20() {
   return (neuron0x2842460()*-0.139418);
}

double NNfunction_uRg::synapse0x2846c60() {
   return (neuron0x28427a0()*-0.217975);
}

double NNfunction_uRg::synapse0x2846510() {
   return (neuron0x2842ae0()*-0.115086);
}

double NNfunction_uRg::synapse0x2846550() {
   return (neuron0x2842e20()*0.206171);
}

double NNfunction_uRg::synapse0x2846590() {
   return (neuron0x2843160()*-0.27292);
}

double NNfunction_uRg::synapse0x28465d0() {
   return (neuron0x28434a0()*-0.16279);
}

double NNfunction_uRg::synapse0x2846eb0() {
   return (neuron0x28437e0()*0.0770309);
}

double NNfunction_uRg::synapse0x2846ef0() {
   return (neuron0x2843b20()*-0.14629);
}

double NNfunction_uRg::synapse0x2846f30() {
   return (neuron0x2843e60()*0.199463);
}

double NNfunction_uRg::synapse0x28468b0() {
   return (neuron0x28441a0()*-0.0972716);
}

double NNfunction_uRg::synapse0x28468f0() {
   return (neuron0x2844700()*-0.1765);
}

double NNfunction_uRg::synapse0x2847080() {
   return (neuron0x2844920()*-0.269236);
}

double NNfunction_uRg::synapse0x28470c0() {
   return (neuron0x2844c60()*0.637329);
}

double NNfunction_uRg::synapse0x2847100() {
   return (neuron0x2844fa0()*-0.0951093);
}

double NNfunction_uRg::synapse0x2847140() {
   return (neuron0x28452e0()*0.238518);
}

double NNfunction_uRg::synapse0x2847180() {
   return (neuron0x2845620()*-0.0523388);
}

double NNfunction_uRg::synapse0x28471c0() {
   return (neuron0x2845960()*0.139735);
}

double NNfunction_uRg::synapse0x2847540() {
   return (neuron0x2840da0()*-0.00535731);
}

double NNfunction_uRg::synapse0x2847580() {
   return (neuron0x28410e0()*-0.0102018);
}

double NNfunction_uRg::synapse0x28475c0() {
   return (neuron0x2841420()*0.00276771);
}

double NNfunction_uRg::synapse0x2847600() {
   return (neuron0x2841760()*-1.79003);
}

double NNfunction_uRg::synapse0x2847640() {
   return (neuron0x2841aa0()*0.000659741);
}

double NNfunction_uRg::synapse0x2847680() {
   return (neuron0x2841de0()*-0.0258245);
}

double NNfunction_uRg::synapse0x28476c0() {
   return (neuron0x2842120()*-0.0116939);
}

double NNfunction_uRg::synapse0x2847700() {
   return (neuron0x2842460()*-0.0395182);
}

double NNfunction_uRg::synapse0x2847740() {
   return (neuron0x28427a0()*0.00298929);
}

double NNfunction_uRg::synapse0x2847780() {
   return (neuron0x2842ae0()*0.0200433);
}

double NNfunction_uRg::synapse0x28477c0() {
   return (neuron0x2842e20()*0.0183734);
}

double NNfunction_uRg::synapse0x2847800() {
   return (neuron0x2843160()*-0.0239553);
}

double NNfunction_uRg::synapse0x2847840() {
   return (neuron0x28434a0()*0.0433229);
}

double NNfunction_uRg::synapse0x2847880() {
   return (neuron0x28437e0()*-0.0238123);
}

double NNfunction_uRg::synapse0x28478c0() {
   return (neuron0x2843b20()*-0.996604);
}

double NNfunction_uRg::synapse0x2847900() {
   return (neuron0x2843e60()*-0.0450682);
}

double NNfunction_uRg::synapse0x2847390() {
   return (neuron0x28441a0()*-0.0153037);
}

double NNfunction_uRg::synapse0x28473d0() {
   return (neuron0x2844700()*0.0103897);
}

double NNfunction_uRg::synapse0x25f2c80() {
   return (neuron0x2844920()*0.013654);
}

double NNfunction_uRg::synapse0x26003a0() {
   return (neuron0x2844c60()*0.0296729);
}

double NNfunction_uRg::synapse0x26003e0() {
   return (neuron0x2844fa0()*0.00591826);
}

double NNfunction_uRg::synapse0x282fe30() {
   return (neuron0x28452e0()*0.0108282);
}

double NNfunction_uRg::synapse0x282fe70() {
   return (neuron0x2845620()*0.00457735);
}

double NNfunction_uRg::synapse0x282feb0() {
   return (neuron0x2845960()*-0.0119175);
}

double NNfunction_uRg::synapse0x2600c40() {
   return (neuron0x2840da0()*-0.000354446);
}

double NNfunction_uRg::synapse0x2846e30() {
   return (neuron0x28410e0()*-0.299435);
}

double NNfunction_uRg::synapse0x2846e70() {
   return (neuron0x2841420()*-0.0426658);
}

double NNfunction_uRg::synapse0x2847a50() {
   return (neuron0x2841760()*1.12791);
}

double NNfunction_uRg::synapse0x2847a90() {
   return (neuron0x2841aa0()*-0.0941309);
}

double NNfunction_uRg::synapse0x2847ad0() {
   return (neuron0x2841de0()*0.0522957);
}

double NNfunction_uRg::synapse0x2847b10() {
   return (neuron0x2842120()*-0.0143987);
}

double NNfunction_uRg::synapse0x2847b50() {
   return (neuron0x2842460()*-0.038253);
}

double NNfunction_uRg::synapse0x2847b90() {
   return (neuron0x28427a0()*-0.170315);
}

double NNfunction_uRg::synapse0x2847bd0() {
   return (neuron0x2842ae0()*0.351053);
}

double NNfunction_uRg::synapse0x2847c10() {
   return (neuron0x2842e20()*-0.0609319);
}

double NNfunction_uRg::synapse0x2847c50() {
   return (neuron0x2843160()*-0.385296);
}

double NNfunction_uRg::synapse0x2847c90() {
   return (neuron0x28434a0()*0.217833);
}

double NNfunction_uRg::synapse0x2847cd0() {
   return (neuron0x28437e0()*0.266693);
}

double NNfunction_uRg::synapse0x2847d10() {
   return (neuron0x2843b20()*-0.307232);
}

double NNfunction_uRg::synapse0x2847d50() {
   return (neuron0x2843e60()*-0.117015);
}

double NNfunction_uRg::synapse0x2840ce0() {
   return (neuron0x28441a0()*0.0603819);
}

double NNfunction_uRg::synapse0x2840d20() {
   return (neuron0x2844700()*-0.202738);
}

double NNfunction_uRg::synapse0x2840d60() {
   return (neuron0x2844920()*-0.129214);
}

double NNfunction_uRg::synapse0x2847ea0() {
   return (neuron0x2844c60()*0.222916);
}

double NNfunction_uRg::synapse0x2847ee0() {
   return (neuron0x2844fa0()*-0.0313126);
}

double NNfunction_uRg::synapse0x2847f20() {
   return (neuron0x28452e0()*-0.0311049);
}

double NNfunction_uRg::synapse0x2847f60() {
   return (neuron0x2845620()*0.0235893);
}

double NNfunction_uRg::synapse0x2847fa0() {
   return (neuron0x2845960()*-0.0304306);
}

double NNfunction_uRg::synapse0x2848320() {
   return (neuron0x2840da0()*0.035593);
}

double NNfunction_uRg::synapse0x2848360() {
   return (neuron0x28410e0()*0.391594);
}

double NNfunction_uRg::synapse0x28483a0() {
   return (neuron0x2841420()*-0.00625588);
}

double NNfunction_uRg::synapse0x28483e0() {
   return (neuron0x2841760()*2.33995);
}

double NNfunction_uRg::synapse0x2848420() {
   return (neuron0x2841aa0()*-0.00812429);
}

double NNfunction_uRg::synapse0x2848460() {
   return (neuron0x2841de0()*-0.0196811);
}

double NNfunction_uRg::synapse0x28484a0() {
   return (neuron0x2842120()*0.0274912);
}

double NNfunction_uRg::synapse0x28484e0() {
   return (neuron0x2842460()*0.0238324);
}

double NNfunction_uRg::synapse0x2848520() {
   return (neuron0x28427a0()*0.0295954);
}

double NNfunction_uRg::synapse0x2848560() {
   return (neuron0x2842ae0()*0.0444408);
}

double NNfunction_uRg::synapse0x28485a0() {
   return (neuron0x2842e20()*-0.00892282);
}

double NNfunction_uRg::synapse0x28485e0() {
   return (neuron0x2843160()*0.390501);
}

double NNfunction_uRg::synapse0x2848620() {
   return (neuron0x28434a0()*-0.547183);
}

double NNfunction_uRg::synapse0x2848660() {
   return (neuron0x28437e0()*0.0426102);
}

double NNfunction_uRg::synapse0x28486a0() {
   return (neuron0x2843b20()*0.197881);
}

double NNfunction_uRg::synapse0x28486e0() {
   return (neuron0x2843e60()*-0.0595072);
}

double NNfunction_uRg::synapse0x2848170() {
   return (neuron0x28441a0()*-0.0210314);
}

double NNfunction_uRg::synapse0x28481b0() {
   return (neuron0x2844700()*-0.0984329);
}

double NNfunction_uRg::synapse0x2848830() {
   return (neuron0x2844920()*0.15093);
}

double NNfunction_uRg::synapse0x2848870() {
   return (neuron0x2844c60()*-0.342346);
}

double NNfunction_uRg::synapse0x28488b0() {
   return (neuron0x2844fa0()*-0.0151659);
}

double NNfunction_uRg::synapse0x28488f0() {
   return (neuron0x28452e0()*0.0794937);
}

double NNfunction_uRg::synapse0x2848930() {
   return (neuron0x2845620()*-0.0427094);
}

double NNfunction_uRg::synapse0x2848970() {
   return (neuron0x2845960()*0.0113901);
}

double NNfunction_uRg::synapse0x2848cf0() {
   return (neuron0x2840da0()*0.0625064);
}

double NNfunction_uRg::synapse0x2848d30() {
   return (neuron0x28410e0()*-0.173943);
}

double NNfunction_uRg::synapse0x2848d70() {
   return (neuron0x2841420()*0.0746134);
}

double NNfunction_uRg::synapse0x2848db0() {
   return (neuron0x2841760()*-0.672415);
}

double NNfunction_uRg::synapse0x2848df0() {
   return (neuron0x2841aa0()*0.0148472);
}

double NNfunction_uRg::synapse0x2848e30() {
   return (neuron0x2841de0()*0.0192804);
}

double NNfunction_uRg::synapse0x2848e70() {
   return (neuron0x2842120()*-0.0908407);
}

double NNfunction_uRg::synapse0x2848eb0() {
   return (neuron0x2842460()*0.000807224);
}

double NNfunction_uRg::synapse0x2848ef0() {
   return (neuron0x28427a0()*-0.214147);
}

double NNfunction_uRg::synapse0x2600710() {
   return (neuron0x2842ae0()*0.289152);
}

double NNfunction_uRg::synapse0x2600750() {
   return (neuron0x2842e20()*-0.335244);
}

double NNfunction_uRg::synapse0x2600790() {
   return (neuron0x2843160()*0.495992);
}

double NNfunction_uRg::synapse0x26007d0() {
   return (neuron0x28434a0()*0.207389);
}

double NNfunction_uRg::synapse0x2600810() {
   return (neuron0x28437e0()*0.202597);
}

double NNfunction_uRg::synapse0x2600850() {
   return (neuron0x2843b20()*-0.49426);
}

double NNfunction_uRg::synapse0x2600890() {
   return (neuron0x2843e60()*0.147299);
}

double NNfunction_uRg::synapse0x2848b40() {
   return (neuron0x28441a0()*-0.212972);
}

double NNfunction_uRg::synapse0x2848b80() {
   return (neuron0x2844700()*-0.333272);
}

double NNfunction_uRg::synapse0x26009e0() {
   return (neuron0x2844920()*-0.308857);
}

double NNfunction_uRg::synapse0x2600a20() {
   return (neuron0x2844c60()*-0.319374);
}

double NNfunction_uRg::synapse0x2600a60() {
   return (neuron0x2844fa0()*-0.0722561);
}

double NNfunction_uRg::synapse0x2600aa0() {
   return (neuron0x28452e0()*0.101174);
}

double NNfunction_uRg::synapse0x2600ae0() {
   return (neuron0x2845620()*0.0738599);
}

double NNfunction_uRg::synapse0x2849740() {
   return (neuron0x2845960()*0.169245);
}

double NNfunction_uRg::synapse0x2849ac0() {
   return (neuron0x2840da0()*0.000868226);
}

double NNfunction_uRg::synapse0x2849b00() {
   return (neuron0x28410e0()*-0.0112249);
}

double NNfunction_uRg::synapse0x2849b40() {
   return (neuron0x2841420()*-0.00936233);
}

double NNfunction_uRg::synapse0x2849b80() {
   return (neuron0x2841760()*-1.53136);
}

double NNfunction_uRg::synapse0x2849bc0() {
   return (neuron0x2841aa0()*0.00701779);
}

double NNfunction_uRg::synapse0x2849c00() {
   return (neuron0x2841de0()*-0.00875979);
}

double NNfunction_uRg::synapse0x2849c40() {
   return (neuron0x2842120()*0.00647866);
}

double NNfunction_uRg::synapse0x2849c80() {
   return (neuron0x2842460()*-0.00503259);
}

double NNfunction_uRg::synapse0x2849cc0() {
   return (neuron0x28427a0()*-0.000778805);
}

double NNfunction_uRg::synapse0x2849d00() {
   return (neuron0x2842ae0()*0.00414586);
}

double NNfunction_uRg::synapse0x2849d40() {
   return (neuron0x2842e20()*0.0100481);
}

double NNfunction_uRg::synapse0x2849d80() {
   return (neuron0x2843160()*0.014702);
}

double NNfunction_uRg::synapse0x2849dc0() {
   return (neuron0x28434a0()*0.0118308);
}

double NNfunction_uRg::synapse0x2849e00() {
   return (neuron0x28437e0()*0.00126505);
}

double NNfunction_uRg::synapse0x2849e40() {
   return (neuron0x2843b20()*-0.312353);
}

double NNfunction_uRg::synapse0x2849e80() {
   return (neuron0x2843e60()*0.0053952);
}

double NNfunction_uRg::synapse0x2849910() {
   return (neuron0x28441a0()*-0.00103501);
}

double NNfunction_uRg::synapse0x2849950() {
   return (neuron0x2844700()*0.028892);
}

double NNfunction_uRg::synapse0x2849fd0() {
   return (neuron0x2844920()*0.0213282);
}

double NNfunction_uRg::synapse0x284a010() {
   return (neuron0x2844c60()*0.0116157);
}

double NNfunction_uRg::synapse0x284a050() {
   return (neuron0x2844fa0()*-0.000492092);
}

double NNfunction_uRg::synapse0x284a090() {
   return (neuron0x28452e0()*0.00214182);
}

double NNfunction_uRg::synapse0x284a0d0() {
   return (neuron0x2845620()*0.00485442);
}

double NNfunction_uRg::synapse0x284a110() {
   return (neuron0x2845960()*-0.0166958);
}

double NNfunction_uRg::synapse0x284a490() {
   return (neuron0x2840da0()*0.00357132);
}

double NNfunction_uRg::synapse0x284a4d0() {
   return (neuron0x28410e0()*0.00340606);
}

double NNfunction_uRg::synapse0x284a510() {
   return (neuron0x2841420()*-0.00829272);
}

double NNfunction_uRg::synapse0x284a550() {
   return (neuron0x2841760()*1.3293);
}

double NNfunction_uRg::synapse0x284a590() {
   return (neuron0x2841aa0()*0.0016216);
}

double NNfunction_uRg::synapse0x284a5d0() {
   return (neuron0x2841de0()*0.00476619);
}

double NNfunction_uRg::synapse0x284a610() {
   return (neuron0x2842120()*0.00311545);
}

double NNfunction_uRg::synapse0x284a650() {
   return (neuron0x2842460()*0.00953085);
}

double NNfunction_uRg::synapse0x284a690() {
   return (neuron0x28427a0()*-0.016358);
}

double NNfunction_uRg::synapse0x284a6d0() {
   return (neuron0x2842ae0()*0.00189462);
}

double NNfunction_uRg::synapse0x284a710() {
   return (neuron0x2842e20()*-0.00817088);
}

double NNfunction_uRg::synapse0x284a750() {
   return (neuron0x2843160()*0.0104044);
}

double NNfunction_uRg::synapse0x284a790() {
   return (neuron0x28434a0()*-0.0209457);
}

double NNfunction_uRg::synapse0x284a7d0() {
   return (neuron0x28437e0()*-0.00690692);
}

double NNfunction_uRg::synapse0x284a810() {
   return (neuron0x2843b20()*-0.681233);
}

double NNfunction_uRg::synapse0x284a850() {
   return (neuron0x2843e60()*0.005703);
}

double NNfunction_uRg::synapse0x284a2e0() {
   return (neuron0x28441a0()*-0.00639933);
}

double NNfunction_uRg::synapse0x284a320() {
   return (neuron0x2844700()*-0.0125416);
}

double NNfunction_uRg::synapse0x284a9a0() {
   return (neuron0x2844920()*-0.0168567);
}

double NNfunction_uRg::synapse0x284a9e0() {
   return (neuron0x2844c60()*-0.0216491);
}

double NNfunction_uRg::synapse0x284aa20() {
   return (neuron0x2844fa0()*0.00443261);
}

double NNfunction_uRg::synapse0x284aa60() {
   return (neuron0x28452e0()*-0.00782077);
}

double NNfunction_uRg::synapse0x284aaa0() {
   return (neuron0x2845620()*-0.00352168);
}

double NNfunction_uRg::synapse0x284aae0() {
   return (neuron0x2845960()*0.000993829);
}

double NNfunction_uRg::synapse0x28445f0() {
   return (neuron0x2840da0()*0.00443309);
}

double NNfunction_uRg::synapse0x2844630() {
   return (neuron0x28410e0()*-0.00385203);
}

double NNfunction_uRg::synapse0x2844670() {
   return (neuron0x2841420()*-0.0016398);
}

double NNfunction_uRg::synapse0x28446b0() {
   return (neuron0x2841760()*4.61925);
}

double NNfunction_uRg::synapse0x284b070() {
   return (neuron0x2841aa0()*0.00472781);
}

double NNfunction_uRg::synapse0x284b0b0() {
   return (neuron0x2841de0()*0.00682052);
}

double NNfunction_uRg::synapse0x284b0f0() {
   return (neuron0x2842120()*0.00582646);
}

double NNfunction_uRg::synapse0x284b130() {
   return (neuron0x2842460()*0.00506857);
}

double NNfunction_uRg::synapse0x284b170() {
   return (neuron0x28427a0()*-0.0122227);
}

double NNfunction_uRg::synapse0x284b1b0() {
   return (neuron0x2842ae0()*-0.0131201);
}

double NNfunction_uRg::synapse0x284b1f0() {
   return (neuron0x2842e20()*-0.0119098);
}

double NNfunction_uRg::synapse0x284b230() {
   return (neuron0x2843160()*-0.00135636);
}

double NNfunction_uRg::synapse0x284b270() {
   return (neuron0x28434a0()*-0.00189728);
}

double NNfunction_uRg::synapse0x284b2b0() {
   return (neuron0x28437e0()*-0.00630022);
}

double NNfunction_uRg::synapse0x284b2f0() {
   return (neuron0x2843b20()*0.091148);
}

double NNfunction_uRg::synapse0x284b330() {
   return (neuron0x2843e60()*0.00041594);
}

double NNfunction_uRg::synapse0x284acb0() {
   return (neuron0x28441a0()*0.00409416);
}

double NNfunction_uRg::synapse0x284acf0() {
   return (neuron0x2844700()*-0.00573841);
}

double NNfunction_uRg::synapse0x284b480() {
   return (neuron0x2844920()*-0.0142346);
}

double NNfunction_uRg::synapse0x284b4c0() {
   return (neuron0x2844c60()*-0.00648419);
}

double NNfunction_uRg::synapse0x284b500() {
   return (neuron0x2844fa0()*0.00053337);
}

double NNfunction_uRg::synapse0x284b540() {
   return (neuron0x28452e0()*-0.00467037);
}

double NNfunction_uRg::synapse0x284b580() {
   return (neuron0x2845620()*0.00111802);
}

double NNfunction_uRg::synapse0x284b5c0() {
   return (neuron0x2845960()*0.0115653);
}

double NNfunction_uRg::synapse0x284b940() {
   return (neuron0x2840da0()*-0.00342335);
}

double NNfunction_uRg::synapse0x284b980() {
   return (neuron0x28410e0()*0.00264702);
}

double NNfunction_uRg::synapse0x284b9c0() {
   return (neuron0x2841420()*0.00854354);
}

double NNfunction_uRg::synapse0x284ba00() {
   return (neuron0x2841760()*-1.80881);
}

double NNfunction_uRg::synapse0x284ba40() {
   return (neuron0x2841aa0()*0.000774744);
}

double NNfunction_uRg::synapse0x284ba80() {
   return (neuron0x2841de0()*-0.00411764);
}

double NNfunction_uRg::synapse0x284bac0() {
   return (neuron0x2842120()*-0.00634989);
}

double NNfunction_uRg::synapse0x284bb00() {
   return (neuron0x2842460()*-0.0160971);
}

double NNfunction_uRg::synapse0x284bb40() {
   return (neuron0x28427a0()*-0.00406186);
}

double NNfunction_uRg::synapse0x284bb80() {
   return (neuron0x2842ae0()*-0.00207441);
}

double NNfunction_uRg::synapse0x284bbc0() {
   return (neuron0x2842e20()*0.00142206);
}

double NNfunction_uRg::synapse0x284bc00() {
   return (neuron0x2843160()*-0.0240689);
}

double NNfunction_uRg::synapse0x284bc40() {
   return (neuron0x28434a0()*0.00517286);
}

double NNfunction_uRg::synapse0x284bc80() {
   return (neuron0x28437e0()*-0.0050735);
}

double NNfunction_uRg::synapse0x284bcc0() {
   return (neuron0x2843b20()*-0.105013);
}

double NNfunction_uRg::synapse0x284bd00() {
   return (neuron0x2843e60()*-0.027756);
}

double NNfunction_uRg::synapse0x284b790() {
   return (neuron0x28441a0()*-0.00753689);
}

double NNfunction_uRg::synapse0x284b7d0() {
   return (neuron0x2844700()*-0.0170136);
}

double NNfunction_uRg::synapse0x284be50() {
   return (neuron0x2844920()*-0.00166743);
}

double NNfunction_uRg::synapse0x284be90() {
   return (neuron0x2844c60()*0.0125056);
}

double NNfunction_uRg::synapse0x284bed0() {
   return (neuron0x2844fa0()*0.00099874);
}

double NNfunction_uRg::synapse0x284bf10() {
   return (neuron0x28452e0()*0.00428522);
}

double NNfunction_uRg::synapse0x284bf50() {
   return (neuron0x2845620()*0.00347336);
}

double NNfunction_uRg::synapse0x284bf90() {
   return (neuron0x2845960()*0.00205019);
}

double NNfunction_uRg::synapse0x284c310() {
   return (neuron0x2840da0()*-0.0718559);
}

double NNfunction_uRg::synapse0x284c350() {
   return (neuron0x28410e0()*0.693517);
}

double NNfunction_uRg::synapse0x284c390() {
   return (neuron0x2841420()*0.0184982);
}

double NNfunction_uRg::synapse0x284c3d0() {
   return (neuron0x2841760()*1.15222);
}

double NNfunction_uRg::synapse0x284c410() {
   return (neuron0x2841aa0()*0.0106706);
}

double NNfunction_uRg::synapse0x284c450() {
   return (neuron0x2841de0()*0.138725);
}

double NNfunction_uRg::synapse0x284c490() {
   return (neuron0x2842120()*-0.0369394);
}

double NNfunction_uRg::synapse0x284c4d0() {
   return (neuron0x2842460()*0.0168224);
}

double NNfunction_uRg::synapse0x284c510() {
   return (neuron0x28427a0()*0.0937207);
}

double NNfunction_uRg::synapse0x284c550() {
   return (neuron0x2842ae0()*-0.0930741);
}

double NNfunction_uRg::synapse0x284c590() {
   return (neuron0x2842e20()*0.115559);
}

double NNfunction_uRg::synapse0x284c5d0() {
   return (neuron0x2843160()*0.0896564);
}

double NNfunction_uRg::synapse0x284c610() {
   return (neuron0x28434a0()*-0.0170886);
}

double NNfunction_uRg::synapse0x284c650() {
   return (neuron0x28437e0()*-0.0324256);
}

double NNfunction_uRg::synapse0x284c690() {
   return (neuron0x2843b20()*-0.501993);
}

double NNfunction_uRg::synapse0x284c6d0() {
   return (neuron0x2843e60()*-0.0161571);
}

double NNfunction_uRg::synapse0x284c160() {
   return (neuron0x28441a0()*-0.148102);
}

double NNfunction_uRg::synapse0x284c1a0() {
   return (neuron0x2844700()*0.372207);
}

double NNfunction_uRg::synapse0x2848f30() {
   return (neuron0x2844920()*-0.0221776);
}

double NNfunction_uRg::synapse0x2848f70() {
   return (neuron0x2844c60()*0.253864);
}

double NNfunction_uRg::synapse0x2848fb0() {
   return (neuron0x2844fa0()*0.053932);
}

double NNfunction_uRg::synapse0x2848ff0() {
   return (neuron0x28452e0()*0.0419213);
}

double NNfunction_uRg::synapse0x2849030() {
   return (neuron0x2845620()*0.109247);
}

double NNfunction_uRg::synapse0x2849070() {
   return (neuron0x2845960()*-0.0234021);
}

double NNfunction_uRg::synapse0x28493f0() {
   return (neuron0x2840da0()*-0.0262881);
}

double NNfunction_uRg::synapse0x2849430() {
   return (neuron0x28410e0()*0.0573601);
}

double NNfunction_uRg::synapse0x2849470() {
   return (neuron0x2841420()*0.0380494);
}

double NNfunction_uRg::synapse0x28494b0() {
   return (neuron0x2841760()*-0.225724);
}

double NNfunction_uRg::synapse0x28494f0() {
   return (neuron0x2841aa0()*0.0201577);
}

double NNfunction_uRg::synapse0x2849530() {
   return (neuron0x2841de0()*-0.023503);
}

double NNfunction_uRg::synapse0x2849570() {
   return (neuron0x2842120()*-0.00920578);
}

double NNfunction_uRg::synapse0x28495b0() {
   return (neuron0x2842460()*-0.0976718);
}

double NNfunction_uRg::synapse0x28495f0() {
   return (neuron0x28427a0()*-0.0304169);
}

double NNfunction_uRg::synapse0x2849630() {
   return (neuron0x2842ae0()*0.228989);
}

double NNfunction_uRg::synapse0x2849670() {
   return (neuron0x2842e20()*-0.20653);
}

double NNfunction_uRg::synapse0x28496b0() {
   return (neuron0x2843160()*0.232883);
}

double NNfunction_uRg::synapse0x28496f0() {
   return (neuron0x28434a0()*0.0996229);
}

double NNfunction_uRg::synapse0x284d830() {
   return (neuron0x28437e0()*-0.0984288);
}

double NNfunction_uRg::synapse0x284d870() {
   return (neuron0x2843b20()*0.421637);
}

double NNfunction_uRg::synapse0x284d8b0() {
   return (neuron0x2843e60()*0.00693122);
}

double NNfunction_uRg::synapse0x2849240() {
   return (neuron0x28441a0()*-0.0814564);
}

double NNfunction_uRg::synapse0x2849280() {
   return (neuron0x2844700()*0.18921);
}

double NNfunction_uRg::synapse0x284da00() {
   return (neuron0x2844920()*-0.325216);
}

double NNfunction_uRg::synapse0x284da40() {
   return (neuron0x2844c60()*-0.00131111);
}

double NNfunction_uRg::synapse0x284da80() {
   return (neuron0x2844fa0()*0.021136);
}

double NNfunction_uRg::synapse0x284dac0() {
   return (neuron0x28452e0()*-0.0197801);
}

double NNfunction_uRg::synapse0x284db00() {
   return (neuron0x2845620()*-0.0279811);
}

double NNfunction_uRg::synapse0x284db40() {
   return (neuron0x2845960()*0.028996);
}

double NNfunction_uRg::synapse0x284dec0() {
   return (neuron0x2840da0()*-0.0108597);
}

double NNfunction_uRg::synapse0x284df00() {
   return (neuron0x28410e0()*0.0445705);
}

double NNfunction_uRg::synapse0x284df40() {
   return (neuron0x2841420()*-0.0269698);
}

double NNfunction_uRg::synapse0x284df80() {
   return (neuron0x2841760()*0.0177421);
}

double NNfunction_uRg::synapse0x284dfc0() {
   return (neuron0x2841aa0()*0.03289);
}

double NNfunction_uRg::synapse0x284e000() {
   return (neuron0x2841de0()*0.0296504);
}

double NNfunction_uRg::synapse0x284e040() {
   return (neuron0x2842120()*0.0316412);
}

double NNfunction_uRg::synapse0x284e080() {
   return (neuron0x2842460()*-0.0110463);
}

double NNfunction_uRg::synapse0x284e0c0() {
   return (neuron0x28427a0()*-0.090935);
}

double NNfunction_uRg::synapse0x284e100() {
   return (neuron0x2842ae0()*-0.00345239);
}

double NNfunction_uRg::synapse0x284e140() {
   return (neuron0x2842e20()*-0.0119809);
}

double NNfunction_uRg::synapse0x284e180() {
   return (neuron0x2843160()*0.424958);
}

double NNfunction_uRg::synapse0x284e1c0() {
   return (neuron0x28434a0()*0.482004);
}

double NNfunction_uRg::synapse0x284e200() {
   return (neuron0x28437e0()*-0.00891087);
}

double NNfunction_uRg::synapse0x284e240() {
   return (neuron0x2843b20()*-0.244849);
}

double NNfunction_uRg::synapse0x284e280() {
   return (neuron0x2843e60()*0.15643);
}

double NNfunction_uRg::synapse0x284dd10() {
   return (neuron0x28441a0()*0.0146602);
}

double NNfunction_uRg::synapse0x284dd50() {
   return (neuron0x2844700()*0.29132);
}

double NNfunction_uRg::synapse0x284e3d0() {
   return (neuron0x2844920()*0.341979);
}

double NNfunction_uRg::synapse0x284e410() {
   return (neuron0x2844c60()*-0.126887);
}

double NNfunction_uRg::synapse0x284e450() {
   return (neuron0x2844fa0()*-0.000130484);
}

double NNfunction_uRg::synapse0x284e490() {
   return (neuron0x28452e0()*0.016318);
}

double NNfunction_uRg::synapse0x284e4d0() {
   return (neuron0x2845620()*0.0047925);
}

double NNfunction_uRg::synapse0x284e510() {
   return (neuron0x2845960()*-0.0142051);
}

double NNfunction_uRg::synapse0x284e890() {
   return (neuron0x2840da0()*-0.000874423);
}

double NNfunction_uRg::synapse0x284e8d0() {
   return (neuron0x28410e0()*0.00546385);
}

double NNfunction_uRg::synapse0x284e910() {
   return (neuron0x2841420()*-0.000858642);
}

double NNfunction_uRg::synapse0x284e950() {
   return (neuron0x2841760()*1.17438);
}

double NNfunction_uRg::synapse0x284e990() {
   return (neuron0x2841aa0()*0.0105587);
}

double NNfunction_uRg::synapse0x284e9d0() {
   return (neuron0x2841de0()*-0.0109274);
}

double NNfunction_uRg::synapse0x284ea10() {
   return (neuron0x2842120()*-6.30631e-05);
}

double NNfunction_uRg::synapse0x284ea50() {
   return (neuron0x2842460()*-0.0115256);
}

double NNfunction_uRg::synapse0x284ea90() {
   return (neuron0x28427a0()*-0.0214461);
}

double NNfunction_uRg::synapse0x284ead0() {
   return (neuron0x2842ae0()*-0.0146567);
}

double NNfunction_uRg::synapse0x284eb10() {
   return (neuron0x2842e20()*-0.00391585);
}

double NNfunction_uRg::synapse0x284eb50() {
   return (neuron0x2843160()*-0.0130286);
}

double NNfunction_uRg::synapse0x284eb90() {
   return (neuron0x28434a0()*-0.00623818);
}

double NNfunction_uRg::synapse0x284ebd0() {
   return (neuron0x28437e0()*-0.0102937);
}

double NNfunction_uRg::synapse0x284ec10() {
   return (neuron0x2843b20()*-0.326161);
}

double NNfunction_uRg::synapse0x284ec50() {
   return (neuron0x2843e60()*-0.0324487);
}

double NNfunction_uRg::synapse0x284e6e0() {
   return (neuron0x28441a0()*-0.00992029);
}

double NNfunction_uRg::synapse0x284e720() {
   return (neuron0x2844700()*0.00123518);
}

double NNfunction_uRg::synapse0x284eda0() {
   return (neuron0x2844920()*0.00233755);
}

double NNfunction_uRg::synapse0x284ede0() {
   return (neuron0x2844c60()*0.0012339);
}

double NNfunction_uRg::synapse0x284ee20() {
   return (neuron0x2844fa0()*-0.00258087);
}

double NNfunction_uRg::synapse0x284ee60() {
   return (neuron0x28452e0()*0.00012112);
}

double NNfunction_uRg::synapse0x284eea0() {
   return (neuron0x2845620()*0.000140289);
}

double NNfunction_uRg::synapse0x284eee0() {
   return (neuron0x2845960()*-0.00209422);
}

double NNfunction_uRg::synapse0x284f260() {
   return (neuron0x2840da0()*-0.046644);
}

double NNfunction_uRg::synapse0x284f2a0() {
   return (neuron0x28410e0()*-0.476661);
}

double NNfunction_uRg::synapse0x284f2e0() {
   return (neuron0x2841420()*-0.0243438);
}

double NNfunction_uRg::synapse0x284f320() {
   return (neuron0x2841760()*-0.768332);
}

double NNfunction_uRg::synapse0x284f360() {
   return (neuron0x2841aa0()*0.050151);
}

double NNfunction_uRg::synapse0x284f3a0() {
   return (neuron0x2841de0()*0.0652418);
}

double NNfunction_uRg::synapse0x284f3e0() {
   return (neuron0x2842120()*0.00261195);
}

double NNfunction_uRg::synapse0x284f420() {
   return (neuron0x2842460()*0.0369907);
}

double NNfunction_uRg::synapse0x284f460() {
   return (neuron0x28427a0()*-0.0639028);
}

double NNfunction_uRg::synapse0x284f4a0() {
   return (neuron0x2842ae0()*-0.0201562);
}

double NNfunction_uRg::synapse0x284f4e0() {
   return (neuron0x2842e20()*-0.0146386);
}

double NNfunction_uRg::synapse0x284f520() {
   return (neuron0x2843160()*0.0472267);
}

double NNfunction_uRg::synapse0x284f560() {
   return (neuron0x28434a0()*-0.622224);
}

double NNfunction_uRg::synapse0x284f5a0() {
   return (neuron0x28437e0()*0.0314219);
}

double NNfunction_uRg::synapse0x284f5e0() {
   return (neuron0x2843b20()*0.0437065);
}

double NNfunction_uRg::synapse0x284f620() {
   return (neuron0x2843e60()*-0.00521333);
}

double NNfunction_uRg::synapse0x284f0b0() {
   return (neuron0x28441a0()*-0.00501409);
}

double NNfunction_uRg::synapse0x284f0f0() {
   return (neuron0x2844700()*0.104515);
}

double NNfunction_uRg::synapse0x284f770() {
   return (neuron0x2844920()*0.0280429);
}

double NNfunction_uRg::synapse0x284f7b0() {
   return (neuron0x2844c60()*-0.274895);
}

double NNfunction_uRg::synapse0x284f7f0() {
   return (neuron0x2844fa0()*5.36953e-05);
}

double NNfunction_uRg::synapse0x284f830() {
   return (neuron0x28452e0()*0.0237758);
}

double NNfunction_uRg::synapse0x284f870() {
   return (neuron0x2845620()*-0.000348627);
}

double NNfunction_uRg::synapse0x284f8b0() {
   return (neuron0x2845960()*0.00807321);
}

double NNfunction_uRg::synapse0x284fc30() {
   return (neuron0x2840da0()*0.00368813);
}

double NNfunction_uRg::synapse0x2840fc0() {
   return (neuron0x28410e0()*-0.00734512);
}

double NNfunction_uRg::synapse0x2841000() {
   return (neuron0x2841420()*-0.00288634);
}

double NNfunction_uRg::synapse0x2841300() {
   return (neuron0x2841760()*-0.0312278);
}

double NNfunction_uRg::synapse0x2841340() {
   return (neuron0x2841aa0()*-0.0594586);
}

double NNfunction_uRg::synapse0x2841640() {
   return (neuron0x2841de0()*0.0149815);
}

double NNfunction_uRg::synapse0x2841680() {
   return (neuron0x2842120()*-0.0535715);
}

double NNfunction_uRg::synapse0x2841980() {
   return (neuron0x2842460()*-0.0124273);
}

double NNfunction_uRg::synapse0x28419c0() {
   return (neuron0x28427a0()*-0.0502424);
}

double NNfunction_uRg::synapse0x2841cc0() {
   return (neuron0x2842ae0()*-0.00384727);
}

double NNfunction_uRg::synapse0x2841d00() {
   return (neuron0x2842e20()*-0.00641553);
}

double NNfunction_uRg::synapse0x2842000() {
   return (neuron0x2843160()*0.0233468);
}

double NNfunction_uRg::synapse0x2842040() {
   return (neuron0x28434a0()*0.0431443);
}

double NNfunction_uRg::synapse0x2842340() {
   return (neuron0x28437e0()*-0.00707741);
}

double NNfunction_uRg::synapse0x2842380() {
   return (neuron0x2843b20()*-1.54145);
}

double NNfunction_uRg::synapse0x2842680() {
   return (neuron0x2843e60()*0.15491);
}

double NNfunction_uRg::synapse0x28426c0() {
   return (neuron0x28441a0()*-0.0124221);
}

double NNfunction_uRg::synapse0x28429c0() {
   return (neuron0x2844700()*-0.0271947);
}

double NNfunction_uRg::synapse0x2842a00() {
   return (neuron0x2844920()*-0.0291061);
}

double NNfunction_uRg::synapse0x2842d00() {
   return (neuron0x2844c60()*-0.0350364);
}

double NNfunction_uRg::synapse0x2842d40() {
   return (neuron0x2844fa0()*0.0247398);
}

double NNfunction_uRg::synapse0x2843040() {
   return (neuron0x28452e0()*-0.0191937);
}

double NNfunction_uRg::synapse0x2843080() {
   return (neuron0x2845620()*-0.00297549);
}

double NNfunction_uRg::synapse0x2843380() {
   return (neuron0x2845960()*0.0728547);
}

double NNfunction_uRg::synapse0x28433c0() {
   return (neuron0x2840da0()*0.00430704);
}

double NNfunction_uRg::synapse0x2844080() {
   return (neuron0x28410e0()*-0.190184);
}

double NNfunction_uRg::synapse0x28440c0() {
   return (neuron0x2841420()*0.316857);
}

double NNfunction_uRg::synapse0x284fa80() {
   return (neuron0x2841760()*-0.0902009);
}

double NNfunction_uRg::synapse0x284fac0() {
   return (neuron0x2841aa0()*0.143283);
}

double NNfunction_uRg::synapse0x28443c0() {
   return (neuron0x2841de0()*-0.210627);
}

double NNfunction_uRg::synapse0x2844400() {
   return (neuron0x2842120()*-0.326758);
}

double NNfunction_uRg::synapse0x25f2730() {
   return (neuron0x2842460()*-0.42863);
}

double NNfunction_uRg::synapse0x25f2770() {
   return (neuron0x28427a0()*0.0233968);
}

double NNfunction_uRg::synapse0x2844b40() {
   return (neuron0x2842ae0()*0.0860021);
}

double NNfunction_uRg::synapse0x2844b80() {
   return (neuron0x2842e20()*-0.352252);
}

double NNfunction_uRg::synapse0x2844e80() {
   return (neuron0x2843160()*0.102536);
}

double NNfunction_uRg::synapse0x2844ec0() {
   return (neuron0x28434a0()*-0.323629);
}

double NNfunction_uRg::synapse0x28451c0() {
   return (neuron0x28437e0()*0.295978);
}

double NNfunction_uRg::synapse0x2845200() {
   return (neuron0x2843b20()*-0.307874);
}

double NNfunction_uRg::synapse0x2845500() {
   return (neuron0x2843e60()*-0.261689);
}

double NNfunction_uRg::synapse0x2845540() {
   return (neuron0x28441a0()*0.460487);
}

double NNfunction_uRg::synapse0x2845840() {
   return (neuron0x2844700()*-0.162203);
}

double NNfunction_uRg::synapse0x2845880() {
   return (neuron0x2844920()*-0.591094);
}

double NNfunction_uRg::synapse0x2845b80() {
   return (neuron0x2844c60()*-0.182863);
}

double NNfunction_uRg::synapse0x2845bc0() {
   return (neuron0x2844fa0()*0.343977);
}

double NNfunction_uRg::synapse0x28436c0() {
   return (neuron0x28452e0()*-0.0675746);
}

double NNfunction_uRg::synapse0x2843700() {
   return (neuron0x2845620()*-0.267122);
}

double NNfunction_uRg::synapse0x28519a0() {
   return (neuron0x2845960()*-0.303808);
}

double NNfunction_uRg::synapse0x2851d20() {
   return (neuron0x2840da0()*0.305759);
}

double NNfunction_uRg::synapse0x2851d60() {
   return (neuron0x28410e0()*-0.174322);
}

double NNfunction_uRg::synapse0x2851da0() {
   return (neuron0x2841420()*-0.090848);
}

double NNfunction_uRg::synapse0x2851de0() {
   return (neuron0x2841760()*-0.601844);
}

double NNfunction_uRg::synapse0x2851e20() {
   return (neuron0x2841aa0()*-0.423805);
}

double NNfunction_uRg::synapse0x2851e60() {
   return (neuron0x2841de0()*-0.0484268);
}

double NNfunction_uRg::synapse0x2851ea0() {
   return (neuron0x2842120()*0.135224);
}

double NNfunction_uRg::synapse0x2851ee0() {
   return (neuron0x2842460()*0.256819);
}

double NNfunction_uRg::synapse0x2851f20() {
   return (neuron0x28427a0()*-0.153399);
}

double NNfunction_uRg::synapse0x2851f60() {
   return (neuron0x2842ae0()*0.0854559);
}

double NNfunction_uRg::synapse0x2851fa0() {
   return (neuron0x2842e20()*-0.193254);
}

double NNfunction_uRg::synapse0x2851fe0() {
   return (neuron0x2843160()*0.370026);
}

double NNfunction_uRg::synapse0x2852020() {
   return (neuron0x28434a0()*-0.201876);
}

double NNfunction_uRg::synapse0x2852060() {
   return (neuron0x28437e0()*0.337243);
}

double NNfunction_uRg::synapse0x28520a0() {
   return (neuron0x2843b20()*0.372902);
}

double NNfunction_uRg::synapse0x28520e0() {
   return (neuron0x2843e60()*0.328586);
}

double NNfunction_uRg::synapse0x2851b70() {
   return (neuron0x28441a0()*0.02182);
}

double NNfunction_uRg::synapse0x2851bb0() {
   return (neuron0x2844700()*0.414145);
}

double NNfunction_uRg::synapse0x2852230() {
   return (neuron0x2844920()*-0.233901);
}

double NNfunction_uRg::synapse0x2852270() {
   return (neuron0x2844c60()*0.00810286);
}

double NNfunction_uRg::synapse0x28522b0() {
   return (neuron0x2844fa0()*-0.109784);
}

double NNfunction_uRg::synapse0x28522f0() {
   return (neuron0x28452e0()*0.380953);
}

double NNfunction_uRg::synapse0x2852330() {
   return (neuron0x2845620()*0.206649);
}

double NNfunction_uRg::synapse0x2852370() {
   return (neuron0x2845960()*0.193045);
}

double NNfunction_uRg::synapse0x28526f0() {
   return (neuron0x2840da0()*0.0100791);
}

double NNfunction_uRg::synapse0x2852730() {
   return (neuron0x28410e0()*-0.00759418);
}

double NNfunction_uRg::synapse0x2852770() {
   return (neuron0x2841420()*0.0198525);
}

double NNfunction_uRg::synapse0x28527b0() {
   return (neuron0x2841760()*-0.46822);
}

double NNfunction_uRg::synapse0x28527f0() {
   return (neuron0x2841aa0()*0.19933);
}

double NNfunction_uRg::synapse0x2852830() {
   return (neuron0x2841de0()*-0.152098);
}

double NNfunction_uRg::synapse0x2852870() {
   return (neuron0x2842120()*0.0135481);
}

double NNfunction_uRg::synapse0x28528b0() {
   return (neuron0x2842460()*0.123146);
}

double NNfunction_uRg::synapse0x28528f0() {
   return (neuron0x28427a0()*0.0210433);
}

double NNfunction_uRg::synapse0x2852930() {
   return (neuron0x2842ae0()*-0.018037);
}

double NNfunction_uRg::synapse0x2852970() {
   return (neuron0x2842e20()*-0.0227186);
}

double NNfunction_uRg::synapse0x28529b0() {
   return (neuron0x2843160()*-0.0324326);
}

double NNfunction_uRg::synapse0x28529f0() {
   return (neuron0x28434a0()*-0.0280946);
}

double NNfunction_uRg::synapse0x2852a30() {
   return (neuron0x28437e0()*-0.0250188);
}

double NNfunction_uRg::synapse0x2852a70() {
   return (neuron0x2843b20()*0.339813);
}

double NNfunction_uRg::synapse0x2852ab0() {
   return (neuron0x2843e60()*-0.271382);
}

double NNfunction_uRg::synapse0x2852540() {
   return (neuron0x28441a0()*-0.0119427);
}

double NNfunction_uRg::synapse0x2852580() {
   return (neuron0x2844700()*-0.0580723);
}

double NNfunction_uRg::synapse0x2852c00() {
   return (neuron0x2844920()*-0.0255835);
}

double NNfunction_uRg::synapse0x2852c40() {
   return (neuron0x2844c60()*-0.0527742);
}

double NNfunction_uRg::synapse0x2852c80() {
   return (neuron0x2844fa0()*0.00323568);
}

double NNfunction_uRg::synapse0x2852cc0() {
   return (neuron0x28452e0()*-0.00524161);
}

double NNfunction_uRg::synapse0x2852d00() {
   return (neuron0x2845620()*-0.0200793);
}

double NNfunction_uRg::synapse0x2852d40() {
   return (neuron0x2845960()*-0.0276563);
}

double NNfunction_uRg::synapse0x28530c0() {
   return (neuron0x2840da0()*-0.0063351);
}

double NNfunction_uRg::synapse0x2853100() {
   return (neuron0x28410e0()*-0.0274417);
}

double NNfunction_uRg::synapse0x2853140() {
   return (neuron0x2841420()*-0.0108214);
}

double NNfunction_uRg::synapse0x2853180() {
   return (neuron0x2841760()*-1.02738);
}

double NNfunction_uRg::synapse0x28531c0() {
   return (neuron0x2841aa0()*0.0262756);
}

double NNfunction_uRg::synapse0x2853200() {
   return (neuron0x2841de0()*0.0147104);
}

double NNfunction_uRg::synapse0x2853240() {
   return (neuron0x2842120()*0.0140365);
}

double NNfunction_uRg::synapse0x2853280() {
   return (neuron0x2842460()*-0.00184183);
}

double NNfunction_uRg::synapse0x28532c0() {
   return (neuron0x28427a0()*-0.107993);
}

double NNfunction_uRg::synapse0x2853300() {
   return (neuron0x2842ae0()*-0.0456134);
}

double NNfunction_uRg::synapse0x2853340() {
   return (neuron0x2842e20()*0.00218388);
}

double NNfunction_uRg::synapse0x2853380() {
   return (neuron0x2843160()*-0.00714217);
}

double NNfunction_uRg::synapse0x28533c0() {
   return (neuron0x28434a0()*-0.100249);
}

double NNfunction_uRg::synapse0x2853400() {
   return (neuron0x28437e0()*-0.0152043);
}

double NNfunction_uRg::synapse0x2853440() {
   return (neuron0x2843b20()*-0.613466);
}

double NNfunction_uRg::synapse0x2853480() {
   return (neuron0x2843e60()*0.00246756);
}

double NNfunction_uRg::synapse0x2852f10() {
   return (neuron0x28441a0()*-0.0150892);
}

double NNfunction_uRg::synapse0x2852f50() {
   return (neuron0x2844700()*0.00965664);
}

double NNfunction_uRg::synapse0x28535d0() {
   return (neuron0x2844920()*-0.02672);
}

double NNfunction_uRg::synapse0x2853610() {
   return (neuron0x2844c60()*-0.0211731);
}

double NNfunction_uRg::synapse0x2853650() {
   return (neuron0x2844fa0()*0.00650374);
}

double NNfunction_uRg::synapse0x2853690() {
   return (neuron0x28452e0()*0.00227295);
}

double NNfunction_uRg::synapse0x28536d0() {
   return (neuron0x2845620()*-0.00221438);
}

double NNfunction_uRg::synapse0x2853710() {
   return (neuron0x2845960()*-0.00425988);
}

double NNfunction_uRg::synapse0x2853a90() {
   return (neuron0x2840da0()*-0.0111799);
}

double NNfunction_uRg::synapse0x2853ad0() {
   return (neuron0x28410e0()*-0.024012);
}

double NNfunction_uRg::synapse0x2853b10() {
   return (neuron0x2841420()*0.00427415);
}

double NNfunction_uRg::synapse0x2853b50() {
   return (neuron0x2841760()*-0.92069);
}

double NNfunction_uRg::synapse0x2853b90() {
   return (neuron0x2841aa0()*0.0131095);
}

double NNfunction_uRg::synapse0x2853bd0() {
   return (neuron0x2841de0()*0.0274551);
}

double NNfunction_uRg::synapse0x2853c10() {
   return (neuron0x2842120()*0.00601515);
}

double NNfunction_uRg::synapse0x2853c50() {
   return (neuron0x2842460()*-0.0197496);
}

double NNfunction_uRg::synapse0x2853c90() {
   return (neuron0x28427a0()*-0.0295482);
}

double NNfunction_uRg::synapse0x2853cd0() {
   return (neuron0x2842ae0()*0.109414);
}

double NNfunction_uRg::synapse0x2853d10() {
   return (neuron0x2842e20()*-0.0496346);
}

double NNfunction_uRg::synapse0x2853d50() {
   return (neuron0x2843160()*0.119089);
}

double NNfunction_uRg::synapse0x2853d90() {
   return (neuron0x28434a0()*0.142639);
}

double NNfunction_uRg::synapse0x2853dd0() {
   return (neuron0x28437e0()*-0.0184853);
}

double NNfunction_uRg::synapse0x2853e10() {
   return (neuron0x2843b20()*0.178707);
}

double NNfunction_uRg::synapse0x2853e50() {
   return (neuron0x2843e60()*-0.0424144);
}

double NNfunction_uRg::synapse0x28538e0() {
   return (neuron0x28441a0()*-0.0540721);
}

double NNfunction_uRg::synapse0x2853920() {
   return (neuron0x2844700()*-0.666507);
}

double NNfunction_uRg::synapse0x2853fa0() {
   return (neuron0x2844920()*0.0430808);
}

double NNfunction_uRg::synapse0x2853fe0() {
   return (neuron0x2844c60()*0.0143706);
}

double NNfunction_uRg::synapse0x2854020() {
   return (neuron0x2844fa0()*0.0165051);
}

double NNfunction_uRg::synapse0x2854060() {
   return (neuron0x28452e0()*0.0130165);
}

double NNfunction_uRg::synapse0x28540a0() {
   return (neuron0x2845620()*0.00795235);
}

double NNfunction_uRg::synapse0x28540e0() {
   return (neuron0x2845960()*0.0243825);
}

double NNfunction_uRg::synapse0x2854460() {
   return (neuron0x2840da0()*0.00116699);
}

double NNfunction_uRg::synapse0x28544a0() {
   return (neuron0x28410e0()*-0.0100469);
}

double NNfunction_uRg::synapse0x28544e0() {
   return (neuron0x2841420()*-0.017091);
}

double NNfunction_uRg::synapse0x2854520() {
   return (neuron0x2841760()*-0.270067);
}

double NNfunction_uRg::synapse0x2854560() {
   return (neuron0x2841aa0()*0.00163134);
}

double NNfunction_uRg::synapse0x28545a0() {
   return (neuron0x2841de0()*0.108662);
}

double NNfunction_uRg::synapse0x28545e0() {
   return (neuron0x2842120()*0.222747);
}

double NNfunction_uRg::synapse0x2854620() {
   return (neuron0x2842460()*-0.0597662);
}

double NNfunction_uRg::synapse0x2854660() {
   return (neuron0x28427a0()*0.0748277);
}

double NNfunction_uRg::synapse0x284c820() {
   return (neuron0x2842ae0()*-0.04973);
}

double NNfunction_uRg::synapse0x284c860() {
   return (neuron0x2842e20()*-0.0882892);
}

double NNfunction_uRg::synapse0x284c8a0() {
   return (neuron0x2843160()*-0.302049);
}

double NNfunction_uRg::synapse0x284c8e0() {
   return (neuron0x28434a0()*-0.0574031);
}

double NNfunction_uRg::synapse0x284c920() {
   return (neuron0x28437e0()*-0.2442);
}

double NNfunction_uRg::synapse0x284c960() {
   return (neuron0x2843b20()*0.530817);
}

double NNfunction_uRg::synapse0x284c9a0() {
   return (neuron0x2843e60()*0.270428);
}

double NNfunction_uRg::synapse0x28542b0() {
   return (neuron0x28441a0()*-0.632573);
}

double NNfunction_uRg::synapse0x28542f0() {
   return (neuron0x2844700()*-0.111588);
}

double NNfunction_uRg::synapse0x284caf0() {
   return (neuron0x2844920()*-0.113126);
}

double NNfunction_uRg::synapse0x284cb30() {
   return (neuron0x2844c60()*-0.318471);
}

double NNfunction_uRg::synapse0x284cb70() {
   return (neuron0x2844fa0()*-0.0108151);
}

double NNfunction_uRg::synapse0x284cbb0() {
   return (neuron0x28452e0()*0.080393);
}

double NNfunction_uRg::synapse0x284cbf0() {
   return (neuron0x2845620()*-0.0305816);
}

double NNfunction_uRg::synapse0x284cc30() {
   return (neuron0x2845960()*-0.0303806);
}

double NNfunction_uRg::synapse0x284cfb0() {
   return (neuron0x2840da0()*-0.00464361);
}

double NNfunction_uRg::synapse0x284cff0() {
   return (neuron0x28410e0()*0.0259978);
}

double NNfunction_uRg::synapse0x284d030() {
   return (neuron0x2841420()*0.00471145);
}

double NNfunction_uRg::synapse0x284d070() {
   return (neuron0x2841760()*-1.50356);
}

double NNfunction_uRg::synapse0x284d0b0() {
   return (neuron0x2841aa0()*0.0236117);
}

double NNfunction_uRg::synapse0x284d0f0() {
   return (neuron0x2841de0()*0.00107709);
}

double NNfunction_uRg::synapse0x284d130() {
   return (neuron0x2842120()*0.00455478);
}

double NNfunction_uRg::synapse0x284d170() {
   return (neuron0x2842460()*0.00258226);
}

double NNfunction_uRg::synapse0x284d1b0() {
   return (neuron0x28427a0()*-0.0303909);
}

double NNfunction_uRg::synapse0x284d1f0() {
   return (neuron0x2842ae0()*-0.0199041);
}

double NNfunction_uRg::synapse0x284d230() {
   return (neuron0x2842e20()*-0.00561102);
}

double NNfunction_uRg::synapse0x284d270() {
   return (neuron0x2843160()*-0.0258136);
}

double NNfunction_uRg::synapse0x284d2b0() {
   return (neuron0x28434a0()*-0.0464905);
}

double NNfunction_uRg::synapse0x284d2f0() {
   return (neuron0x28437e0()*-0.0165316);
}

double NNfunction_uRg::synapse0x284d330() {
   return (neuron0x2843b20()*0.0257967);
}

double NNfunction_uRg::synapse0x284d370() {
   return (neuron0x2843e60()*-0.0229144);
}

double NNfunction_uRg::synapse0x284ce00() {
   return (neuron0x28441a0()*-0.00869877);
}

double NNfunction_uRg::synapse0x284ce40() {
   return (neuron0x2844700()*-0.0212949);
}

double NNfunction_uRg::synapse0x284d4c0() {
   return (neuron0x2844920()*-0.0185204);
}

double NNfunction_uRg::synapse0x284d500() {
   return (neuron0x2844c60()*-0.0122479);
}

double NNfunction_uRg::synapse0x284d540() {
   return (neuron0x2844fa0()*-0.00501385);
}

double NNfunction_uRg::synapse0x284d580() {
   return (neuron0x28452e0()*0.00359219);
}

double NNfunction_uRg::synapse0x284d5c0() {
   return (neuron0x2845620()*-0.00261234);
}

double NNfunction_uRg::synapse0x284d600() {
   return (neuron0x2845960()*0.00696745);
}

double NNfunction_uRg::synapse0x284d7d0() {
   return (neuron0x2840da0()*-0.00873517);
}

double NNfunction_uRg::synapse0x2856860() {
   return (neuron0x28410e0()*0.0345899);
}

double NNfunction_uRg::synapse0x28568a0() {
   return (neuron0x2841420()*-0.000701996);
}

double NNfunction_uRg::synapse0x28568e0() {
   return (neuron0x2841760()*-14.2852);
}

double NNfunction_uRg::synapse0x2856920() {
   return (neuron0x2841aa0()*-0.0140514);
}

double NNfunction_uRg::synapse0x2856960() {
   return (neuron0x2841de0()*-0.0249152);
}

double NNfunction_uRg::synapse0x28569a0() {
   return (neuron0x2842120()*0.00171755);
}

double NNfunction_uRg::synapse0x28569e0() {
   return (neuron0x2842460()*-0.00860686);
}

double NNfunction_uRg::synapse0x2856a20() {
   return (neuron0x28427a0()*0.019045);
}

double NNfunction_uRg::synapse0x2856a60() {
   return (neuron0x2842ae0()*0.0122388);
}

double NNfunction_uRg::synapse0x2856aa0() {
   return (neuron0x2842e20()*0.0117819);
}

double NNfunction_uRg::synapse0x2856ae0() {
   return (neuron0x2843160()*0.0174128);
}

double NNfunction_uRg::synapse0x2856b20() {
   return (neuron0x28434a0()*0.0108936);
}

double NNfunction_uRg::synapse0x2856b60() {
   return (neuron0x28437e0()*0.00651529);
}

double NNfunction_uRg::synapse0x2856ba0() {
   return (neuron0x2843b20()*-0.021097);
}

double NNfunction_uRg::synapse0x2856be0() {
   return (neuron0x2843e60()*-0.0150799);
}

double NNfunction_uRg::synapse0x28566b0() {
   return (neuron0x28441a0()*-0.0354011);
}

double NNfunction_uRg::synapse0x28566f0() {
   return (neuron0x2844700()*0.0133203);
}

double NNfunction_uRg::synapse0x2856d30() {
   return (neuron0x2844920()*0.034417);
}

double NNfunction_uRg::synapse0x2856d70() {
   return (neuron0x2844c60()*0.0102145);
}

double NNfunction_uRg::synapse0x2856db0() {
   return (neuron0x2844fa0()*-0.00345774);
}

double NNfunction_uRg::synapse0x2856df0() {
   return (neuron0x28452e0()*0.00957105);
}

double NNfunction_uRg::synapse0x2856e30() {
   return (neuron0x2845620()*-0.00874251);
}

double NNfunction_uRg::synapse0x2856e70() {
   return (neuron0x2845960()*-0.0102977);
}

double NNfunction_uRg::synapse0x28571f0() {
   return (neuron0x2840da0()*0.0127404);
}

double NNfunction_uRg::synapse0x2857230() {
   return (neuron0x28410e0()*-0.0170703);
}

double NNfunction_uRg::synapse0x2857270() {
   return (neuron0x2841420()*-0.0184431);
}

double NNfunction_uRg::synapse0x28572b0() {
   return (neuron0x2841760()*0.139149);
}

double NNfunction_uRg::synapse0x28572f0() {
   return (neuron0x2841aa0()*-0.0684222);
}

double NNfunction_uRg::synapse0x2857330() {
   return (neuron0x2841de0()*0.107824);
}

double NNfunction_uRg::synapse0x2857370() {
   return (neuron0x2842120()*-0.0951543);
}

double NNfunction_uRg::synapse0x28573b0() {
   return (neuron0x2842460()*0.12658);
}

double NNfunction_uRg::synapse0x28573f0() {
   return (neuron0x28427a0()*0.0247951);
}

double NNfunction_uRg::synapse0x2857430() {
   return (neuron0x2842ae0()*-0.0114932);
}

double NNfunction_uRg::synapse0x2857470() {
   return (neuron0x2842e20()*0.0205174);
}

double NNfunction_uRg::synapse0x28574b0() {
   return (neuron0x2843160()*0.0183124);
}

double NNfunction_uRg::synapse0x28574f0() {
   return (neuron0x28434a0()*0.00333685);
}

double NNfunction_uRg::synapse0x2857530() {
   return (neuron0x28437e0()*-0.00852044);
}

double NNfunction_uRg::synapse0x2857570() {
   return (neuron0x2843b20()*-0.32834);
}

double NNfunction_uRg::synapse0x28575b0() {
   return (neuron0x2843e60()*-0.0678539);
}

double NNfunction_uRg::synapse0x2857040() {
   return (neuron0x28441a0()*0.0606608);
}

double NNfunction_uRg::synapse0x2857080() {
   return (neuron0x2844700()*0.0199168);
}

double NNfunction_uRg::synapse0x2857700() {
   return (neuron0x2844920()*0.0237918);
}

double NNfunction_uRg::synapse0x2857740() {
   return (neuron0x2844c60()*0.0157964);
}

double NNfunction_uRg::synapse0x2857780() {
   return (neuron0x2844fa0()*0.00403007);
}

double NNfunction_uRg::synapse0x28577c0() {
   return (neuron0x28452e0()*0.00562254);
}

double NNfunction_uRg::synapse0x2857800() {
   return (neuron0x2845620()*0.00357987);
}

double NNfunction_uRg::synapse0x2857840() {
   return (neuron0x2845960()*-0.00239953);
}

double NNfunction_uRg::synapse0x2857bc0() {
   return (neuron0x2840da0()*-0.0605921);
}

double NNfunction_uRg::synapse0x2857c00() {
   return (neuron0x28410e0()*-0.493001);
}

double NNfunction_uRg::synapse0x2857c40() {
   return (neuron0x2841420()*-0.286112);
}

double NNfunction_uRg::synapse0x2857c80() {
   return (neuron0x2841760()*-0.939744);
}

double NNfunction_uRg::synapse0x2857cc0() {
   return (neuron0x2841aa0()*-0.103266);
}

double NNfunction_uRg::synapse0x2857d00() {
   return (neuron0x2841de0()*0.182146);
}

double NNfunction_uRg::synapse0x2857d40() {
   return (neuron0x2842120()*-0.0932091);
}

double NNfunction_uRg::synapse0x2857d80() {
   return (neuron0x2842460()*-0.1215);
}

double NNfunction_uRg::synapse0x2857dc0() {
   return (neuron0x28427a0()*0.294923);
}

double NNfunction_uRg::synapse0x2857e00() {
   return (neuron0x2842ae0()*-0.0748177);
}

double NNfunction_uRg::synapse0x2857e40() {
   return (neuron0x2842e20()*-0.212444);
}

double NNfunction_uRg::synapse0x2857e80() {
   return (neuron0x2843160()*0.318612);
}

double NNfunction_uRg::synapse0x2857ec0() {
   return (neuron0x28434a0()*0.290024);
}

double NNfunction_uRg::synapse0x2857f00() {
   return (neuron0x28437e0()*0.317784);
}

double NNfunction_uRg::synapse0x2857f40() {
   return (neuron0x2843b20()*0.249732);
}

double NNfunction_uRg::synapse0x2857f80() {
   return (neuron0x2843e60()*0.110302);
}

double NNfunction_uRg::synapse0x2857a10() {
   return (neuron0x28441a0()*0.11137);
}

double NNfunction_uRg::synapse0x2857a50() {
   return (neuron0x2844700()*-0.132668);
}

double NNfunction_uRg::synapse0x28580d0() {
   return (neuron0x2844920()*0.354026);
}

double NNfunction_uRg::synapse0x2858110() {
   return (neuron0x2844c60()*-0.0911907);
}

double NNfunction_uRg::synapse0x2858150() {
   return (neuron0x2844fa0()*0.133359);
}

double NNfunction_uRg::synapse0x2858190() {
   return (neuron0x28452e0()*-0.0677413);
}

double NNfunction_uRg::synapse0x28581d0() {
   return (neuron0x2845620()*0.0524145);
}

double NNfunction_uRg::synapse0x2858210() {
   return (neuron0x2845960()*0.142119);
}

double NNfunction_uRg::synapse0x2858590() {
   return (neuron0x2840da0()*0.018185);
}

double NNfunction_uRg::synapse0x28585d0() {
   return (neuron0x28410e0()*-0.137617);
}

double NNfunction_uRg::synapse0x2858610() {
   return (neuron0x2841420()*-0.0122577);
}

double NNfunction_uRg::synapse0x2858650() {
   return (neuron0x2841760()*-0.311438);
}

double NNfunction_uRg::synapse0x2858690() {
   return (neuron0x2841aa0()*-0.00783997);
}

double NNfunction_uRg::synapse0x28586d0() {
   return (neuron0x2841de0()*-0.0206281);
}

double NNfunction_uRg::synapse0x2858710() {
   return (neuron0x2842120()*0.0239108);
}

double NNfunction_uRg::synapse0x2858750() {
   return (neuron0x2842460()*-0.0316067);
}

double NNfunction_uRg::synapse0x2858790() {
   return (neuron0x28427a0()*-0.047693);
}

double NNfunction_uRg::synapse0x28587d0() {
   return (neuron0x2842ae0()*0.0601491);
}

double NNfunction_uRg::synapse0x2858810() {
   return (neuron0x2842e20()*-0.0966461);
}

double NNfunction_uRg::synapse0x2858850() {
   return (neuron0x2843160()*0.179176);
}

double NNfunction_uRg::synapse0x2858890() {
   return (neuron0x28434a0()*0.245913);
}

double NNfunction_uRg::synapse0x28588d0() {
   return (neuron0x28437e0()*-0.0414161);
}

double NNfunction_uRg::synapse0x2858910() {
   return (neuron0x2843b20()*-0.785382);
}

double NNfunction_uRg::synapse0x2858950() {
   return (neuron0x2843e60()*-0.0185897);
}

double NNfunction_uRg::synapse0x28583e0() {
   return (neuron0x28441a0()*-0.0447871);
}

double NNfunction_uRg::synapse0x2858420() {
   return (neuron0x2844700()*0.0618461);
}

double NNfunction_uRg::synapse0x2858aa0() {
   return (neuron0x2844920()*0.195768);
}

double NNfunction_uRg::synapse0x2858ae0() {
   return (neuron0x2844c60()*0.0872782);
}

double NNfunction_uRg::synapse0x2858b20() {
   return (neuron0x2844fa0()*0.00834502);
}

double NNfunction_uRg::synapse0x2858b60() {
   return (neuron0x28452e0()*-0.00763734);
}

double NNfunction_uRg::synapse0x2858ba0() {
   return (neuron0x2845620()*0.00508961);
}

double NNfunction_uRg::synapse0x2858be0() {
   return (neuron0x2845960()*0.00430541);
}

double NNfunction_uRg::synapse0x2858f60() {
   return (neuron0x2840da0()*0.00182607);
}

double NNfunction_uRg::synapse0x2858fa0() {
   return (neuron0x28410e0()*-0.0618419);
}

double NNfunction_uRg::synapse0x2858fe0() {
   return (neuron0x2841420()*-0.0257917);
}

double NNfunction_uRg::synapse0x2859020() {
   return (neuron0x2841760()*5.12517);
}

double NNfunction_uRg::synapse0x2859060() {
   return (neuron0x2841aa0()*-0.0592699);
}

double NNfunction_uRg::synapse0x28590a0() {
   return (neuron0x2841de0()*0.0357808);
}

double NNfunction_uRg::synapse0x28590e0() {
   return (neuron0x2842120()*0.00618868);
}

double NNfunction_uRg::synapse0x2859120() {
   return (neuron0x2842460()*-0.0299787);
}

double NNfunction_uRg::synapse0x2859160() {
   return (neuron0x28427a0()*0.0326314);
}

double NNfunction_uRg::synapse0x28591a0() {
   return (neuron0x2842ae0()*-0.0484766);
}

double NNfunction_uRg::synapse0x28591e0() {
   return (neuron0x2842e20()*-0.0447934);
}

double NNfunction_uRg::synapse0x2859220() {
   return (neuron0x2843160()*0.102064);
}

double NNfunction_uRg::synapse0x2859260() {
   return (neuron0x28434a0()*0.14278);
}

double NNfunction_uRg::synapse0x28592a0() {
   return (neuron0x28437e0()*-0.048474);
}

double NNfunction_uRg::synapse0x28592e0() {
   return (neuron0x2843b20()*-1.60848);
}

double NNfunction_uRg::synapse0x2859320() {
   return (neuron0x2843e60()*0.180509);
}

double NNfunction_uRg::synapse0x2858db0() {
   return (neuron0x28441a0()*-0.0300005);
}

double NNfunction_uRg::synapse0x2858df0() {
   return (neuron0x2844700()*0.156074);
}

double NNfunction_uRg::synapse0x2859470() {
   return (neuron0x2844920()*0.111815);
}

double NNfunction_uRg::synapse0x28594b0() {
   return (neuron0x2844c60()*-0.0029985);
}

double NNfunction_uRg::synapse0x28594f0() {
   return (neuron0x2844fa0()*0.0308932);
}

double NNfunction_uRg::synapse0x2859530() {
   return (neuron0x28452e0()*-0.0224722);
}

double NNfunction_uRg::synapse0x2859570() {
   return (neuron0x2845620()*-0.00993377);
}

double NNfunction_uRg::synapse0x28595b0() {
   return (neuron0x2845960()*0.0693835);
}

double NNfunction_uRg::synapse0x2859930() {
   return (neuron0x2840da0()*0.00888835);
}

double NNfunction_uRg::synapse0x2859970() {
   return (neuron0x28410e0()*0.567026);
}

double NNfunction_uRg::synapse0x28599b0() {
   return (neuron0x2841420()*0.0272217);
}

double NNfunction_uRg::synapse0x28599f0() {
   return (neuron0x2841760()*-1.02187);
}

double NNfunction_uRg::synapse0x2859a30() {
   return (neuron0x2841aa0()*0.0160873);
}

double NNfunction_uRg::synapse0x2859a70() {
   return (neuron0x2841de0()*0.178409);
}

double NNfunction_uRg::synapse0x2859ab0() {
   return (neuron0x2842120()*-0.183877);
}

double NNfunction_uRg::synapse0x2859af0() {
   return (neuron0x2842460()*0.00152558);
}

double NNfunction_uRg::synapse0x2859b30() {
   return (neuron0x28427a0()*-0.284875);
}

double NNfunction_uRg::synapse0x2859b70() {
   return (neuron0x2842ae0()*-0.14493);
}

double NNfunction_uRg::synapse0x2859bb0() {
   return (neuron0x2842e20()*-0.234943);
}

double NNfunction_uRg::synapse0x2859bf0() {
   return (neuron0x2843160()*-0.276472);
}

double NNfunction_uRg::synapse0x2859c30() {
   return (neuron0x28434a0()*-0.0740119);
}

double NNfunction_uRg::synapse0x2859c70() {
   return (neuron0x28437e0()*0.189827);
}

double NNfunction_uRg::synapse0x2859cb0() {
   return (neuron0x2843b20()*0.239273);
}

double NNfunction_uRg::synapse0x2859cf0() {
   return (neuron0x2843e60()*-0.110472);
}

double NNfunction_uRg::synapse0x2859780() {
   return (neuron0x28441a0()*0.131835);
}

double NNfunction_uRg::synapse0x28597c0() {
   return (neuron0x2844700()*-0.204302);
}

double NNfunction_uRg::synapse0x2859e40() {
   return (neuron0x2844920()*-0.347013);
}

double NNfunction_uRg::synapse0x2859e80() {
   return (neuron0x2844c60()*-0.24821);
}

double NNfunction_uRg::synapse0x2859ec0() {
   return (neuron0x2844fa0()*0.0671466);
}

double NNfunction_uRg::synapse0x2859f00() {
   return (neuron0x28452e0()*-0.248492);
}

double NNfunction_uRg::synapse0x2859f40() {
   return (neuron0x2845620()*-0.00461367);
}

double NNfunction_uRg::synapse0x2859f80() {
   return (neuron0x2845960()*-0.364666);
}

double NNfunction_uRg::synapse0x285a300() {
   return (neuron0x2840da0()*-0.0611957);
}

double NNfunction_uRg::synapse0x285a340() {
   return (neuron0x28410e0()*-0.090068);
}

double NNfunction_uRg::synapse0x285a380() {
   return (neuron0x2841420()*-0.0437232);
}

double NNfunction_uRg::synapse0x285a3c0() {
   return (neuron0x2841760()*0.322544);
}

double NNfunction_uRg::synapse0x285a400() {
   return (neuron0x2841aa0()*-0.0299325);
}

double NNfunction_uRg::synapse0x285a440() {
   return (neuron0x2841de0()*0.0237119);
}

double NNfunction_uRg::synapse0x285a480() {
   return (neuron0x2842120()*-0.0445794);
}

double NNfunction_uRg::synapse0x285a4c0() {
   return (neuron0x2842460()*0.0216012);
}

double NNfunction_uRg::synapse0x285a500() {
   return (neuron0x28427a0()*0.235034);
}

double NNfunction_uRg::synapse0x285a540() {
   return (neuron0x2842ae0()*0.0895539);
}

double NNfunction_uRg::synapse0x285a580() {
   return (neuron0x2842e20()*-0.194072);
}

double NNfunction_uRg::synapse0x285a5c0() {
   return (neuron0x2843160()*-0.088055);
}

double NNfunction_uRg::synapse0x285a600() {
   return (neuron0x28434a0()*-0.0735105);
}

double NNfunction_uRg::synapse0x285a640() {
   return (neuron0x28437e0()*-0.182851);
}

double NNfunction_uRg::synapse0x285a680() {
   return (neuron0x2843b20()*-0.515039);
}

double NNfunction_uRg::synapse0x285a6c0() {
   return (neuron0x2843e60()*0.041749);
}

double NNfunction_uRg::synapse0x285a150() {
   return (neuron0x28441a0()*-0.117364);
}

double NNfunction_uRg::synapse0x285a190() {
   return (neuron0x2844700()*0.298286);
}

double NNfunction_uRg::synapse0x285a810() {
   return (neuron0x2844920()*0.55158);
}

double NNfunction_uRg::synapse0x285a850() {
   return (neuron0x2844c60()*0.459259);
}

double NNfunction_uRg::synapse0x285a890() {
   return (neuron0x2844fa0()*-0.0329621);
}

double NNfunction_uRg::synapse0x285a8d0() {
   return (neuron0x28452e0()*-0.0325582);
}

double NNfunction_uRg::synapse0x285a910() {
   return (neuron0x2845620()*-0.00714458);
}

double NNfunction_uRg::synapse0x285a950() {
   return (neuron0x2845960()*0.0120659);
}

double NNfunction_uRg::synapse0x285acd0() {
   return (neuron0x2840da0()*-0.00866174);
}

double NNfunction_uRg::synapse0x285ad10() {
   return (neuron0x28410e0()*0.00344767);
}

double NNfunction_uRg::synapse0x285ad50() {
   return (neuron0x2841420()*0.00375425);
}

double NNfunction_uRg::synapse0x285ad90() {
   return (neuron0x2841760()*-0.170727);
}

double NNfunction_uRg::synapse0x285add0() {
   return (neuron0x2841aa0()*-0.0239378);
}

double NNfunction_uRg::synapse0x285ae10() {
   return (neuron0x2841de0()*-0.0233375);
}

double NNfunction_uRg::synapse0x285ae50() {
   return (neuron0x2842120()*-0.0392154);
}

double NNfunction_uRg::synapse0x285ae90() {
   return (neuron0x2842460()*-0.0304603);
}

double NNfunction_uRg::synapse0x285aed0() {
   return (neuron0x28427a0()*0.00058282);
}

double NNfunction_uRg::synapse0x285af10() {
   return (neuron0x2842ae0()*-0.0169692);
}

double NNfunction_uRg::synapse0x285af50() {
   return (neuron0x2842e20()*-0.00646008);
}

double NNfunction_uRg::synapse0x285af90() {
   return (neuron0x2843160()*-0.0140216);
}

double NNfunction_uRg::synapse0x285afd0() {
   return (neuron0x28434a0()*-0.00173344);
}

double NNfunction_uRg::synapse0x285b010() {
   return (neuron0x28437e0()*-0.00824747);
}

double NNfunction_uRg::synapse0x285b050() {
   return (neuron0x2843b20()*-0.56676);
}

double NNfunction_uRg::synapse0x285b090() {
   return (neuron0x2843e60()*-0.0123558);
}

double NNfunction_uRg::synapse0x285ab20() {
   return (neuron0x28441a0()*0.00869981);
}

double NNfunction_uRg::synapse0x285ab60() {
   return (neuron0x2844700()*-0.0191598);
}

double NNfunction_uRg::synapse0x285b1e0() {
   return (neuron0x2844920()*-0.0151846);
}

double NNfunction_uRg::synapse0x285b220() {
   return (neuron0x2844c60()*-0.00981447);
}

double NNfunction_uRg::synapse0x285b260() {
   return (neuron0x2844fa0()*-0.000221282);
}

double NNfunction_uRg::synapse0x285b2a0() {
   return (neuron0x28452e0()*-0.002462);
}

double NNfunction_uRg::synapse0x285b2e0() {
   return (neuron0x2845620()*-0.00108494);
}

double NNfunction_uRg::synapse0x285b320() {
   return (neuron0x2845960()*0.00940252);
}

double NNfunction_uRg::synapse0x285b6a0() {
   return (neuron0x2840da0()*0.0579718);
}

double NNfunction_uRg::synapse0x284fc70() {
   return (neuron0x28410e0()*0.511728);
}

double NNfunction_uRg::synapse0x284fcb0() {
   return (neuron0x2841420()*-0.0820937);
}

double NNfunction_uRg::synapse0x284fcf0() {
   return (neuron0x2841760()*-0.57386);
}

double NNfunction_uRg::synapse0x284ff40() {
   return (neuron0x2841aa0()*-0.0527911);
}

double NNfunction_uRg::synapse0x284ff80() {
   return (neuron0x2841de0()*-0.0666143);
}

double NNfunction_uRg::synapse0x284ffc0() {
   return (neuron0x2842120()*-0.0503315);
}

double NNfunction_uRg::synapse0x2850210() {
   return (neuron0x2842460()*-0.0567963);
}

double NNfunction_uRg::synapse0x2850250() {
   return (neuron0x28427a0()*-0.0908924);
}

double NNfunction_uRg::synapse0x28504a0() {
   return (neuron0x2842ae0()*0.0597696);
}

double NNfunction_uRg::synapse0x28504e0() {
   return (neuron0x2842e20()*-0.0454968);
}

double NNfunction_uRg::synapse0x2850520() {
   return (neuron0x2843160()*0.0883133);
}

double NNfunction_uRg::synapse0x2850770() {
   return (neuron0x28434a0()*-0.289591);
}

double NNfunction_uRg::synapse0x28507b0() {
   return (neuron0x28437e0()*0.231916);
}

double NNfunction_uRg::synapse0x2850a00() {
   return (neuron0x2843b20()*-0.380725);
}

double NNfunction_uRg::synapse0x2850a40() {
   return (neuron0x2843e60()*0.0102232);
}

double NNfunction_uRg::synapse0x285b4f0() {
   return (neuron0x28441a0()*0.15382);
}

double NNfunction_uRg::synapse0x285b530() {
   return (neuron0x2844700()*0.385523);
}

double NNfunction_uRg::synapse0x2850b90() {
   return (neuron0x2844920()*-0.144065);
}

double NNfunction_uRg::synapse0x28510a0() {
   return (neuron0x2844c60()*0.348307);
}

double NNfunction_uRg::synapse0x28510e0() {
   return (neuron0x2844fa0()*0.0239834);
}

double NNfunction_uRg::synapse0x2851120() {
   return (neuron0x28452e0()*-0.121566);
}

double NNfunction_uRg::synapse0x2851370() {
   return (neuron0x2845620()*0.0528686);
}

double NNfunction_uRg::synapse0x28513b0() {
   return (neuron0x2845960()*-0.105538);
}

double NNfunction_uRg::synapse0x2850c60() {
   return (neuron0x2840da0()*-0.168578);
}

double NNfunction_uRg::synapse0x2850ca0() {
   return (neuron0x28410e0()*0.386825);
}

double NNfunction_uRg::synapse0x2850ce0() {
   return (neuron0x2841420()*-0.139515);
}

double NNfunction_uRg::synapse0x2850d20() {
   return (neuron0x2841760()*-0.236902);
}

double NNfunction_uRg::synapse0x28516a0() {
   return (neuron0x2841aa0()*-0.168578);
}

double NNfunction_uRg::synapse0x285d9f0() {
   return (neuron0x2841de0()*0.142967);
}

double NNfunction_uRg::synapse0x285da30() {
   return (neuron0x2842120()*0.105681);
}

double NNfunction_uRg::synapse0x285da70() {
   return (neuron0x2842460()*-0.0621952);
}

double NNfunction_uRg::synapse0x285dab0() {
   return (neuron0x28427a0()*-0.019586);
}

double NNfunction_uRg::synapse0x285daf0() {
   return (neuron0x2842ae0()*-0.116168);
}

double NNfunction_uRg::synapse0x285db30() {
   return (neuron0x2842e20()*-0.0751967);
}

double NNfunction_uRg::synapse0x285db70() {
   return (neuron0x2843160()*-0.0325792);
}

double NNfunction_uRg::synapse0x285dbb0() {
   return (neuron0x28434a0()*0.000231753);
}

double NNfunction_uRg::synapse0x285dbf0() {
   return (neuron0x28437e0()*-0.313193);
}

double NNfunction_uRg::synapse0x285dc30() {
   return (neuron0x2843b20()*-0.220341);
}

double NNfunction_uRg::synapse0x285dc70() {
   return (neuron0x2843e60()*0.351536);
}

double NNfunction_uRg::synapse0x2851580() {
   return (neuron0x28441a0()*0.337634);
}

double NNfunction_uRg::synapse0x28515c0() {
   return (neuron0x2844700()*-0.244107);
}

double NNfunction_uRg::synapse0x285ddc0() {
   return (neuron0x2844920()*-0.157139);
}

double NNfunction_uRg::synapse0x285de00() {
   return (neuron0x2844c60()*-0.120184);
}

double NNfunction_uRg::synapse0x285de40() {
   return (neuron0x2844fa0()*0.104518);
}

double NNfunction_uRg::synapse0x285de80() {
   return (neuron0x28452e0()*0.0643936);
}

double NNfunction_uRg::synapse0x285dec0() {
   return (neuron0x2845620()*0.0112387);
}

double NNfunction_uRg::synapse0x285df00() {
   return (neuron0x2845960()*-0.0928664);
}

double NNfunction_uRg::synapse0x285e280() {
   return (neuron0x2840da0()*-0.000240703);
}

double NNfunction_uRg::synapse0x285e2c0() {
   return (neuron0x28410e0()*0.00208881);
}

double NNfunction_uRg::synapse0x285e300() {
   return (neuron0x2841420()*-0.0144398);
}

double NNfunction_uRg::synapse0x285e340() {
   return (neuron0x2841760()*-0.0418908);
}

double NNfunction_uRg::synapse0x285e380() {
   return (neuron0x2841aa0()*-0.0324562);
}

double NNfunction_uRg::synapse0x285e3c0() {
   return (neuron0x2841de0()*-0.0284221);
}

double NNfunction_uRg::synapse0x285e400() {
   return (neuron0x2842120()*-0.0372196);
}

double NNfunction_uRg::synapse0x285e440() {
   return (neuron0x2842460()*-0.0136149);
}

double NNfunction_uRg::synapse0x285e480() {
   return (neuron0x28427a0()*0.0120274);
}

double NNfunction_uRg::synapse0x285e4c0() {
   return (neuron0x2842ae0()*0.0262944);
}

double NNfunction_uRg::synapse0x285e500() {
   return (neuron0x2842e20()*0.0300724);
}

double NNfunction_uRg::synapse0x285e540() {
   return (neuron0x2843160()*0.0507186);
}

double NNfunction_uRg::synapse0x285e580() {
   return (neuron0x28434a0()*0.0205014);
}

double NNfunction_uRg::synapse0x285e5c0() {
   return (neuron0x28437e0()*0.0222758);
}

double NNfunction_uRg::synapse0x285e600() {
   return (neuron0x2843b20()*2.5795);
}

double NNfunction_uRg::synapse0x285e640() {
   return (neuron0x2843e60()*0.0110898);
}

double NNfunction_uRg::synapse0x285e0d0() {
   return (neuron0x28441a0()*0.0238112);
}

double NNfunction_uRg::synapse0x285e110() {
   return (neuron0x2844700()*0.013826);
}

double NNfunction_uRg::synapse0x285e790() {
   return (neuron0x2844920()*0.0232575);
}

double NNfunction_uRg::synapse0x285e7d0() {
   return (neuron0x2844c60()*0.0315908);
}

double NNfunction_uRg::synapse0x285e810() {
   return (neuron0x2844fa0()*-0.00252402);
}

double NNfunction_uRg::synapse0x285e850() {
   return (neuron0x28452e0()*-0.00168848);
}

double NNfunction_uRg::synapse0x285e890() {
   return (neuron0x2845620()*-0.00253657);
}

double NNfunction_uRg::synapse0x285e8d0() {
   return (neuron0x2845960()*0.00571029);
}

double NNfunction_uRg::synapse0x285ec50() {
   return (neuron0x2840da0()*-0.000568492);
}

double NNfunction_uRg::synapse0x285ec90() {
   return (neuron0x28410e0()*0.150769);
}

double NNfunction_uRg::synapse0x285ecd0() {
   return (neuron0x2841420()*0.0127674);
}

double NNfunction_uRg::synapse0x285ed10() {
   return (neuron0x2841760()*-0.552274);
}

double NNfunction_uRg::synapse0x285ed50() {
   return (neuron0x2841aa0()*-0.00437285);
}

double NNfunction_uRg::synapse0x285ed90() {
   return (neuron0x2841de0()*0.00012557);
}

double NNfunction_uRg::synapse0x285edd0() {
   return (neuron0x2842120()*-0.00429514);
}

double NNfunction_uRg::synapse0x285ee10() {
   return (neuron0x2842460()*-0.01668);
}

double NNfunction_uRg::synapse0x285ee50() {
   return (neuron0x28427a0()*0.163336);
}

double NNfunction_uRg::synapse0x285ee90() {
   return (neuron0x2842ae0()*0.070784);
}

double NNfunction_uRg::synapse0x285eed0() {
   return (neuron0x2842e20()*-0.00551694);
}

double NNfunction_uRg::synapse0x285ef10() {
   return (neuron0x2843160()*-0.0235208);
}

double NNfunction_uRg::synapse0x285ef50() {
   return (neuron0x28434a0()*0.0641803);
}

double NNfunction_uRg::synapse0x285ef90() {
   return (neuron0x28437e0()*0.0128868);
}

double NNfunction_uRg::synapse0x285efd0() {
   return (neuron0x2843b20()*-0.548897);
}

double NNfunction_uRg::synapse0x285f010() {
   return (neuron0x2843e60()*-0.0256482);
}

double NNfunction_uRg::synapse0x285eaa0() {
   return (neuron0x28441a0()*0.00272295);
}

double NNfunction_uRg::synapse0x285eae0() {
   return (neuron0x2844700()*-0.0468692);
}

double NNfunction_uRg::synapse0x285f160() {
   return (neuron0x2844920()*0.012731);
}

double NNfunction_uRg::synapse0x285f1a0() {
   return (neuron0x2844c60()*-0.00464055);
}

double NNfunction_uRg::synapse0x285f1e0() {
   return (neuron0x2844fa0()*0.0100818);
}

double NNfunction_uRg::synapse0x285f220() {
   return (neuron0x28452e0()*-0.00657345);
}

double NNfunction_uRg::synapse0x285f260() {
   return (neuron0x2845620()*-0.00129603);
}

double NNfunction_uRg::synapse0x285f2a0() {
   return (neuron0x2845960()*0.00287234);
}

double NNfunction_uRg::synapse0x285f620() {
   return (neuron0x2840da0()*0.000212047);
}

double NNfunction_uRg::synapse0x285f660() {
   return (neuron0x28410e0()*-0.00961568);
}

double NNfunction_uRg::synapse0x285f6a0() {
   return (neuron0x2841420()*-0.0218693);
}

double NNfunction_uRg::synapse0x285f6e0() {
   return (neuron0x2841760()*0.145521);
}

double NNfunction_uRg::synapse0x285f720() {
   return (neuron0x2841aa0()*-0.0315851);
}

double NNfunction_uRg::synapse0x285f760() {
   return (neuron0x2841de0()*-0.104893);
}

double NNfunction_uRg::synapse0x285f7a0() {
   return (neuron0x2842120()*0.153286);
}

double NNfunction_uRg::synapse0x285f7e0() {
   return (neuron0x2842460()*-0.00716007);
}

double NNfunction_uRg::synapse0x285f820() {
   return (neuron0x28427a0()*0.0253578);
}

double NNfunction_uRg::synapse0x285f860() {
   return (neuron0x2842ae0()*-0.00411147);
}

double NNfunction_uRg::synapse0x285f8a0() {
   return (neuron0x2842e20()*-0.00341647);
}

double NNfunction_uRg::synapse0x285f8e0() {
   return (neuron0x2843160()*0.0171985);
}

double NNfunction_uRg::synapse0x285f920() {
   return (neuron0x28434a0()*0.0395147);
}

double NNfunction_uRg::synapse0x285f960() {
   return (neuron0x28437e0()*-0.0146298);
}

double NNfunction_uRg::synapse0x285f9a0() {
   return (neuron0x2843b20()*-0.302138);
}

double NNfunction_uRg::synapse0x285f9e0() {
   return (neuron0x2843e60()*0.00945215);
}

double NNfunction_uRg::synapse0x285f470() {
   return (neuron0x28441a0()*0.0858263);
}

double NNfunction_uRg::synapse0x285f4b0() {
   return (neuron0x2844700()*0.0378453);
}

double NNfunction_uRg::synapse0x285fb30() {
   return (neuron0x2844920()*0.0210455);
}

double NNfunction_uRg::synapse0x285fb70() {
   return (neuron0x2844c60()*0.000596364);
}

double NNfunction_uRg::synapse0x285fbb0() {
   return (neuron0x2844fa0()*-0.00187627);
}

double NNfunction_uRg::synapse0x285fbf0() {
   return (neuron0x28452e0()*-0.00216145);
}

double NNfunction_uRg::synapse0x285fc30() {
   return (neuron0x2845620()*-0.00683832);
}

double NNfunction_uRg::synapse0x285fc70() {
   return (neuron0x2845960()*0.00365815);
}

double NNfunction_uRg::synapse0x285fff0() {
   return (neuron0x2840da0()*0.00488436);
}

double NNfunction_uRg::synapse0x2860030() {
   return (neuron0x28410e0()*-0.0138493);
}

double NNfunction_uRg::synapse0x2860070() {
   return (neuron0x2841420()*-0.0108569);
}

double NNfunction_uRg::synapse0x28600b0() {
   return (neuron0x2841760()*0.0481802);
}

double NNfunction_uRg::synapse0x28600f0() {
   return (neuron0x2841aa0()*-0.0585488);
}

double NNfunction_uRg::synapse0x2860130() {
   return (neuron0x2841de0()*-0.0364743);
}

double NNfunction_uRg::synapse0x2860170() {
   return (neuron0x2842120()*-0.0668343);
}

double NNfunction_uRg::synapse0x28601b0() {
   return (neuron0x2842460()*-0.139416);
}

double NNfunction_uRg::synapse0x28601f0() {
   return (neuron0x28427a0()*0.0427866);
}

double NNfunction_uRg::synapse0x2860230() {
   return (neuron0x2842ae0()*0.0221497);
}

double NNfunction_uRg::synapse0x2860270() {
   return (neuron0x2842e20()*0.0290127);
}

double NNfunction_uRg::synapse0x28602b0() {
   return (neuron0x2843160()*0.016494);
}

double NNfunction_uRg::synapse0x28602f0() {
   return (neuron0x28434a0()*0.0418263);
}

double NNfunction_uRg::synapse0x2860330() {
   return (neuron0x28437e0()*0.0164026);
}

double NNfunction_uRg::synapse0x2860370() {
   return (neuron0x2843b20()*-0.175491);
}

double NNfunction_uRg::synapse0x28603b0() {
   return (neuron0x2843e60()*-0.0996109);
}

double NNfunction_uRg::synapse0x285fe40() {
   return (neuron0x28441a0()*-0.112292);
}

double NNfunction_uRg::synapse0x285fe80() {
   return (neuron0x2844700()*0.0287073);
}

double NNfunction_uRg::synapse0x2860500() {
   return (neuron0x2844920()*0.0199103);
}

double NNfunction_uRg::synapse0x2860540() {
   return (neuron0x2844c60()*0.0353291);
}

double NNfunction_uRg::synapse0x2860580() {
   return (neuron0x2844fa0()*0.0127997);
}

double NNfunction_uRg::synapse0x28605c0() {
   return (neuron0x28452e0()*-0.00945949);
}

double NNfunction_uRg::synapse0x2860600() {
   return (neuron0x2845620()*0.00722375);
}

double NNfunction_uRg::synapse0x2860640() {
   return (neuron0x2845960()*-0.040193);
}

double NNfunction_uRg::synapse0x28609c0() {
   return (neuron0x2840da0()*0.00663257);
}

double NNfunction_uRg::synapse0x2860a00() {
   return (neuron0x28410e0()*-0.00537217);
}

double NNfunction_uRg::synapse0x2860a40() {
   return (neuron0x2841420()*0.0109734);
}

double NNfunction_uRg::synapse0x2860a80() {
   return (neuron0x2841760()*0.0914259);
}

double NNfunction_uRg::synapse0x2860ac0() {
   return (neuron0x2841aa0()*0.0160492);
}

double NNfunction_uRg::synapse0x2860b00() {
   return (neuron0x2841de0()*-0.0484639);
}

double NNfunction_uRg::synapse0x2860b40() {
   return (neuron0x2842120()*0.0370815);
}

double NNfunction_uRg::synapse0x2860b80() {
   return (neuron0x2842460()*0.122327);
}

double NNfunction_uRg::synapse0x2860bc0() {
   return (neuron0x28427a0()*-0.00346687);
}

double NNfunction_uRg::synapse0x2860c00() {
   return (neuron0x2842ae0()*-0.00992118);
}

double NNfunction_uRg::synapse0x2860c40() {
   return (neuron0x2842e20()*-0.00287599);
}

double NNfunction_uRg::synapse0x2860c80() {
   return (neuron0x2843160()*-0.00844066);
}

double NNfunction_uRg::synapse0x2860cc0() {
   return (neuron0x28434a0()*-0.00689585);
}

double NNfunction_uRg::synapse0x2860d00() {
   return (neuron0x28437e0()*0.0124588);
}

double NNfunction_uRg::synapse0x2860d40() {
   return (neuron0x2843b20()*-0.456332);
}

double NNfunction_uRg::synapse0x2860d80() {
   return (neuron0x2843e60()*0.0606853);
}

double NNfunction_uRg::synapse0x2860810() {
   return (neuron0x28441a0()*-0.0592348);
}

double NNfunction_uRg::synapse0x2860850() {
   return (neuron0x2844700()*-0.0108877);
}

double NNfunction_uRg::synapse0x2860ed0() {
   return (neuron0x2844920()*0.0125137);
}

double NNfunction_uRg::synapse0x2860f10() {
   return (neuron0x2844c60()*-0.0168497);
}

double NNfunction_uRg::synapse0x2860f50() {
   return (neuron0x2844fa0()*0.000699161);
}

double NNfunction_uRg::synapse0x2860f90() {
   return (neuron0x28452e0()*0.00375552);
}

double NNfunction_uRg::synapse0x2860fd0() {
   return (neuron0x2845620()*0.00164684);
}

double NNfunction_uRg::synapse0x2861010() {
   return (neuron0x2845960()*-0.0127049);
}

double NNfunction_uRg::synapse0x2861390() {
   return (neuron0x2840da0()*0.0263452);
}

double NNfunction_uRg::synapse0x28613d0() {
   return (neuron0x28410e0()*0.0809598);
}

double NNfunction_uRg::synapse0x2861410() {
   return (neuron0x2841420()*-0.207629);
}

double NNfunction_uRg::synapse0x2861450() {
   return (neuron0x2841760()*0.457205);
}

double NNfunction_uRg::synapse0x2861490() {
   return (neuron0x2841aa0()*0.388137);
}

double NNfunction_uRg::synapse0x28614d0() {
   return (neuron0x2841de0()*0.290304);
}

double NNfunction_uRg::synapse0x2861510() {
   return (neuron0x2842120()*0.163773);
}

double NNfunction_uRg::synapse0x2861550() {
   return (neuron0x2842460()*-0.048518);
}

double NNfunction_uRg::synapse0x2861590() {
   return (neuron0x28427a0()*0.352365);
}

double NNfunction_uRg::synapse0x28615d0() {
   return (neuron0x2842ae0()*0.157119);
}

double NNfunction_uRg::synapse0x2861610() {
   return (neuron0x2842e20()*0.176754);
}

double NNfunction_uRg::synapse0x2861650() {
   return (neuron0x2843160()*-0.442263);
}

double NNfunction_uRg::synapse0x2861690() {
   return (neuron0x28434a0()*0.270151);
}

double NNfunction_uRg::synapse0x28616d0() {
   return (neuron0x28437e0()*0.228055);
}

double NNfunction_uRg::synapse0x2861710() {
   return (neuron0x2843b20()*-0.0460421);
}

double NNfunction_uRg::synapse0x2861750() {
   return (neuron0x2843e60()*0.0958058);
}

double NNfunction_uRg::synapse0x28611e0() {
   return (neuron0x28441a0()*0.0532091);
}

double NNfunction_uRg::synapse0x2861220() {
   return (neuron0x2844700()*0.182718);
}

double NNfunction_uRg::synapse0x28618a0() {
   return (neuron0x2844920()*-0.515419);
}

double NNfunction_uRg::synapse0x28618e0() {
   return (neuron0x2844c60()*-0.14691);
}

double NNfunction_uRg::synapse0x2861920() {
   return (neuron0x2844fa0()*-0.087486);
}

double NNfunction_uRg::synapse0x2861960() {
   return (neuron0x28452e0()*0.149496);
}

double NNfunction_uRg::synapse0x28619a0() {
   return (neuron0x2845620()*0.150763);
}

double NNfunction_uRg::synapse0x28619e0() {
   return (neuron0x2845960()*-0.0443763);
}

double NNfunction_uRg::synapse0x2861d60() {
   return (neuron0x2840da0()*-0.00498886);
}

double NNfunction_uRg::synapse0x2861da0() {
   return (neuron0x28410e0()*0.00380318);
}

double NNfunction_uRg::synapse0x2861de0() {
   return (neuron0x2841420()*0.00318291);
}

double NNfunction_uRg::synapse0x2861e20() {
   return (neuron0x2841760()*-4.52003);
}

double NNfunction_uRg::synapse0x2861e60() {
   return (neuron0x2841aa0()*-0.00025874);
}

double NNfunction_uRg::synapse0x2861ea0() {
   return (neuron0x2841de0()*-0.00580129);
}

double NNfunction_uRg::synapse0x2861ee0() {
   return (neuron0x2842120()*-0.00287806);
}

double NNfunction_uRg::synapse0x2861f20() {
   return (neuron0x2842460()*-0.00410928);
}

double NNfunction_uRg::synapse0x2861f60() {
   return (neuron0x28427a0()*0.00454591);
}

double NNfunction_uRg::synapse0x2861fa0() {
   return (neuron0x2842ae0()*0.0030239);
}

double NNfunction_uRg::synapse0x2861fe0() {
   return (neuron0x2842e20()*0.00487318);
}

double NNfunction_uRg::synapse0x2862020() {
   return (neuron0x2843160()*0.0185518);
}

double NNfunction_uRg::synapse0x2862060() {
   return (neuron0x28434a0()*0.020853);
}

double NNfunction_uRg::synapse0x28620a0() {
   return (neuron0x28437e0()*-0.00916334);
}

double NNfunction_uRg::synapse0x28620e0() {
   return (neuron0x2843b20()*0.0781051);
}

double NNfunction_uRg::synapse0x2862120() {
   return (neuron0x2843e60()*0.0150567);
}

double NNfunction_uRg::synapse0x2861bb0() {
   return (neuron0x28441a0()*-0.0123464);
}

double NNfunction_uRg::synapse0x2861bf0() {
   return (neuron0x2844700()*0.0152427);
}

double NNfunction_uRg::synapse0x2862270() {
   return (neuron0x2844920()*0.0229651);
}

double NNfunction_uRg::synapse0x28622b0() {
   return (neuron0x2844c60()*0.00079288);
}

double NNfunction_uRg::synapse0x28622f0() {
   return (neuron0x2844fa0()*0.000828618);
}

double NNfunction_uRg::synapse0x2862330() {
   return (neuron0x28452e0()*0.00417334);
}

double NNfunction_uRg::synapse0x2862370() {
   return (neuron0x2845620()*-0.00366755);
}

double NNfunction_uRg::synapse0x28623b0() {
   return (neuron0x2845960()*-0.00581305);
}

double NNfunction_uRg::synapse0x284ae60() {
   return (neuron0x2840da0()*0.0043716);
}

double NNfunction_uRg::synapse0x284aea0() {
   return (neuron0x28410e0()*0.0273723);
}

double NNfunction_uRg::synapse0x284aee0() {
   return (neuron0x2841420()*-0.0228954);
}

double NNfunction_uRg::synapse0x284af20() {
   return (neuron0x2841760()*-3.43022);
}

double NNfunction_uRg::synapse0x284af60() {
   return (neuron0x2841aa0()*-0.0427775);
}

double NNfunction_uRg::synapse0x284afa0() {
   return (neuron0x2841de0()*-0.0345824);
}

double NNfunction_uRg::synapse0x284afe0() {
   return (neuron0x2842120()*-0.0385178);
}

double NNfunction_uRg::synapse0x284b020() {
   return (neuron0x2842460()*-0.00404965);
}

double NNfunction_uRg::synapse0x2862b40() {
   return (neuron0x28427a0()*0.0321733);
}

double NNfunction_uRg::synapse0x2862b80() {
   return (neuron0x2842ae0()*0.0364962);
}

double NNfunction_uRg::synapse0x2862bc0() {
   return (neuron0x2842e20()*0.0295502);
}

double NNfunction_uRg::synapse0x2862c00() {
   return (neuron0x2843160()*0.0283696);
}

double NNfunction_uRg::synapse0x2862c40() {
   return (neuron0x28434a0()*0.0289967);
}

double NNfunction_uRg::synapse0x2862c80() {
   return (neuron0x28437e0()*-0.031702);
}

double NNfunction_uRg::synapse0x2862cc0() {
   return (neuron0x2843b20()*-4.63949);
}

double NNfunction_uRg::synapse0x2862d00() {
   return (neuron0x2843e60()*0.0406883);
}

double NNfunction_uRg::synapse0x2862580() {
   return (neuron0x28441a0()*-0.00155565);
}

double NNfunction_uRg::synapse0x28625c0() {
   return (neuron0x2844700()*0.0146723);
}

double NNfunction_uRg::synapse0x2862e50() {
   return (neuron0x2844920()*0.0165677);
}

double NNfunction_uRg::synapse0x2862e90() {
   return (neuron0x2844c60()*0.00821366);
}

double NNfunction_uRg::synapse0x2862ed0() {
   return (neuron0x2844fa0()*-0.015342);
}

double NNfunction_uRg::synapse0x2862f10() {
   return (neuron0x28452e0()*0.00763519);
}

double NNfunction_uRg::synapse0x2862f50() {
   return (neuron0x2845620()*0.0123859);
}

double NNfunction_uRg::synapse0x2862f90() {
   return (neuron0x2845960()*-0.0244923);
}

double NNfunction_uRg::synapse0x2863310() {
   return (neuron0x2840da0()*-0.025494);
}

double NNfunction_uRg::synapse0x2863350() {
   return (neuron0x28410e0()*0.547572);
}

double NNfunction_uRg::synapse0x2863390() {
   return (neuron0x2841420()*-0.030084);
}

double NNfunction_uRg::synapse0x28633d0() {
   return (neuron0x2841760()*-1.57785);
}

double NNfunction_uRg::synapse0x2863410() {
   return (neuron0x2841aa0()*0.0444499);
}

double NNfunction_uRg::synapse0x2863450() {
   return (neuron0x2841de0()*0.00234529);
}

double NNfunction_uRg::synapse0x2863490() {
   return (neuron0x2842120()*-0.0102823);
}

double NNfunction_uRg::synapse0x28634d0() {
   return (neuron0x2842460()*0.0468684);
}

double NNfunction_uRg::synapse0x2863510() {
   return (neuron0x28427a0()*0.143479);
}

double NNfunction_uRg::synapse0x2863550() {
   return (neuron0x2842ae0()*-0.0550134);
}

double NNfunction_uRg::synapse0x2863590() {
   return (neuron0x2842e20()*-0.11823);
}

double NNfunction_uRg::synapse0x28635d0() {
   return (neuron0x2843160()*0.0343894);
}

double NNfunction_uRg::synapse0x2863610() {
   return (neuron0x28434a0()*-0.421915);
}

double NNfunction_uRg::synapse0x2863650() {
   return (neuron0x28437e0()*0.0598524);
}

double NNfunction_uRg::synapse0x2863690() {
   return (neuron0x2843b20()*-0.270377);
}

double NNfunction_uRg::synapse0x28636d0() {
   return (neuron0x2843e60()*-0.0495924);
}

double NNfunction_uRg::synapse0x2863160() {
   return (neuron0x28441a0()*-0.0101905);
}

double NNfunction_uRg::synapse0x28631a0() {
   return (neuron0x2844700()*-0.103756);
}

double NNfunction_uRg::synapse0x2863820() {
   return (neuron0x2844920()*0.242141);
}

double NNfunction_uRg::synapse0x2863860() {
   return (neuron0x2844c60()*-0.0895102);
}

double NNfunction_uRg::synapse0x28638a0() {
   return (neuron0x2844fa0()*0.0357362);
}

double NNfunction_uRg::synapse0x28638e0() {
   return (neuron0x28452e0()*0.012922);
}

double NNfunction_uRg::synapse0x2863920() {
   return (neuron0x2845620()*-0.0105244);
}

double NNfunction_uRg::synapse0x2863960() {
   return (neuron0x2845960()*0.0675328);
}

double NNfunction_uRg::synapse0x2863ce0() {
   return (neuron0x2840da0()*0.00157739);
}

double NNfunction_uRg::synapse0x2863d20() {
   return (neuron0x28410e0()*0.0080489);
}

double NNfunction_uRg::synapse0x2863d60() {
   return (neuron0x2841420()*-0.0145014);
}

double NNfunction_uRg::synapse0x2863da0() {
   return (neuron0x2841760()*0.0367117);
}

double NNfunction_uRg::synapse0x2863de0() {
   return (neuron0x2841aa0()*-0.0874261);
}

double NNfunction_uRg::synapse0x2863e20() {
   return (neuron0x2841de0()*-0.107516);
}

double NNfunction_uRg::synapse0x2863e60() {
   return (neuron0x2842120()*-0.0764624);
}

double NNfunction_uRg::synapse0x2863ea0() {
   return (neuron0x2842460()*0.0310388);
}

double NNfunction_uRg::synapse0x2863ee0() {
   return (neuron0x28427a0()*-0.00712083);
}

double NNfunction_uRg::synapse0x2863f20() {
   return (neuron0x2842ae0()*0.0183263);
}

double NNfunction_uRg::synapse0x2863f60() {
   return (neuron0x2842e20()*0.0115354);
}

double NNfunction_uRg::synapse0x2863fa0() {
   return (neuron0x2843160()*0.000149516);
}

double NNfunction_uRg::synapse0x2863fe0() {
   return (neuron0x28434a0()*-0.0233154);
}

double NNfunction_uRg::synapse0x2864020() {
   return (neuron0x28437e0()*0.00625148);
}

double NNfunction_uRg::synapse0x2864060() {
   return (neuron0x2843b20()*0.483807);
}

double NNfunction_uRg::synapse0x28640a0() {
   return (neuron0x2843e60()*0.0278577);
}

double NNfunction_uRg::synapse0x2863b30() {
   return (neuron0x28441a0()*0.0177641);
}

double NNfunction_uRg::synapse0x2863b70() {
   return (neuron0x2844700()*0.00776405);
}

double NNfunction_uRg::synapse0x28546a0() {
   return (neuron0x2844920()*-0.00501848);
}

double NNfunction_uRg::synapse0x28546e0() {
   return (neuron0x2844c60()*0.0201788);
}

double NNfunction_uRg::synapse0x2854720() {
   return (neuron0x2844fa0()*-0.00231954);
}

double NNfunction_uRg::synapse0x2854760() {
   return (neuron0x28452e0()*-0.00494331);
}

double NNfunction_uRg::synapse0x28547a0() {
   return (neuron0x2845620()*0.00130072);
}

double NNfunction_uRg::synapse0x28547e0() {
   return (neuron0x2845960()*-0.00242369);
}

double NNfunction_uRg::synapse0x2854b60() {
   return (neuron0x2840da0()*0.000971692);
}

double NNfunction_uRg::synapse0x2854ba0() {
   return (neuron0x28410e0()*-0.145628);
}

double NNfunction_uRg::synapse0x2854be0() {
   return (neuron0x2841420()*0.00727119);
}

double NNfunction_uRg::synapse0x2854c20() {
   return (neuron0x2841760()*-0.0590459);
}

double NNfunction_uRg::synapse0x2854c60() {
   return (neuron0x2841aa0()*0.0435864);
}

double NNfunction_uRg::synapse0x2854ca0() {
   return (neuron0x2841de0()*0.0185565);
}

double NNfunction_uRg::synapse0x2854ce0() {
   return (neuron0x2842120()*0.0172135);
}

double NNfunction_uRg::synapse0x2854d20() {
   return (neuron0x2842460()*0.00147084);
}

double NNfunction_uRg::synapse0x2854d60() {
   return (neuron0x28427a0()*0.120297);
}

double NNfunction_uRg::synapse0x2854da0() {
   return (neuron0x2842ae0()*-0.140337);
}

double NNfunction_uRg::synapse0x2854de0() {
   return (neuron0x2842e20()*-0.0522449);
}

double NNfunction_uRg::synapse0x2854e20() {
   return (neuron0x2843160()*-0.0892859);
}

double NNfunction_uRg::synapse0x2854e60() {
   return (neuron0x28434a0()*0.132278);
}

double NNfunction_uRg::synapse0x2854ea0() {
   return (neuron0x28437e0()*-0.0216707);
}

double NNfunction_uRg::synapse0x2854ee0() {
   return (neuron0x2843b20()*-0.295125);
}

double NNfunction_uRg::synapse0x2854f20() {
   return (neuron0x2843e60()*-0.0388737);
}

double NNfunction_uRg::synapse0x28549b0() {
   return (neuron0x28441a0()*0.00114411);
}

double NNfunction_uRg::synapse0x28549f0() {
   return (neuron0x2844700()*0.0107148);
}

double NNfunction_uRg::synapse0x2855070() {
   return (neuron0x2844920()*-0.0847142);
}

double NNfunction_uRg::synapse0x28550b0() {
   return (neuron0x2844c60()*-0.120941);
}

double NNfunction_uRg::synapse0x28550f0() {
   return (neuron0x2844fa0()*-0.00596894);
}

double NNfunction_uRg::synapse0x2855130() {
   return (neuron0x28452e0()*0.0290996);
}

double NNfunction_uRg::synapse0x2855170() {
   return (neuron0x2845620()*0.00412499);
}

double NNfunction_uRg::synapse0x28551b0() {
   return (neuron0x2845960()*0.0157647);
}

double NNfunction_uRg::synapse0x2855530() {
   return (neuron0x2840da0()*-0.0817915);
}

double NNfunction_uRg::synapse0x2855570() {
   return (neuron0x28410e0()*-0.10394);
}

double NNfunction_uRg::synapse0x28555b0() {
   return (neuron0x2841420()*0.00209953);
}

double NNfunction_uRg::synapse0x28555f0() {
   return (neuron0x2841760()*0.0923621);
}

double NNfunction_uRg::synapse0x2855630() {
   return (neuron0x2841aa0()*0.0676547);
}

double NNfunction_uRg::synapse0x2855670() {
   return (neuron0x2841de0()*0.069641);
}

double NNfunction_uRg::synapse0x28556b0() {
   return (neuron0x2842120()*0.123262);
}

double NNfunction_uRg::synapse0x28556f0() {
   return (neuron0x2842460()*0.0636616);
}

double NNfunction_uRg::synapse0x2855730() {
   return (neuron0x28427a0()*0.0723345);
}

double NNfunction_uRg::synapse0x2855770() {
   return (neuron0x2842ae0()*-0.241735);
}

double NNfunction_uRg::synapse0x28557b0() {
   return (neuron0x2842e20()*-0.707707);
}

double NNfunction_uRg::synapse0x28557f0() {
   return (neuron0x2843160()*-0.0361139);
}

double NNfunction_uRg::synapse0x2855830() {
   return (neuron0x28434a0()*-0.372659);
}

double NNfunction_uRg::synapse0x2855870() {
   return (neuron0x28437e0()*0.010322);
}

double NNfunction_uRg::synapse0x28558b0() {
   return (neuron0x2843b20()*0.811845);
}

double NNfunction_uRg::synapse0x28558f0() {
   return (neuron0x2843e60()*0.0817817);
}

double NNfunction_uRg::synapse0x2855380() {
   return (neuron0x28441a0()*0.104781);
}

double NNfunction_uRg::synapse0x28553c0() {
   return (neuron0x2844700()*-0.181096);
}

double NNfunction_uRg::synapse0x2855a40() {
   return (neuron0x2844920()*-0.104343);
}

double NNfunction_uRg::synapse0x2855a80() {
   return (neuron0x2844c60()*0.0988151);
}

double NNfunction_uRg::synapse0x2855ac0() {
   return (neuron0x2844fa0()*0.019092);
}

double NNfunction_uRg::synapse0x2855b00() {
   return (neuron0x28452e0()*-0.0219539);
}

double NNfunction_uRg::synapse0x2855b40() {
   return (neuron0x2845620()*0.0425058);
}

double NNfunction_uRg::synapse0x2855b80() {
   return (neuron0x2845960()*-0.100613);
}

double NNfunction_uRg::synapse0x2855f00() {
   return (neuron0x2840da0()*-0.0252939);
}

double NNfunction_uRg::synapse0x2855f40() {
   return (neuron0x28410e0()*0.460142);
}

double NNfunction_uRg::synapse0x2855f80() {
   return (neuron0x2841420()*0.0179241);
}

double NNfunction_uRg::synapse0x2855fc0() {
   return (neuron0x2841760()*0.841895);
}

double NNfunction_uRg::synapse0x2856000() {
   return (neuron0x2841aa0()*-0.0631321);
}

double NNfunction_uRg::synapse0x2856040() {
   return (neuron0x2841de0()*0.0660924);
}

double NNfunction_uRg::synapse0x2856080() {
   return (neuron0x2842120()*0.0451829);
}

double NNfunction_uRg::synapse0x28560c0() {
   return (neuron0x2842460()*-0.0277741);
}

double NNfunction_uRg::synapse0x2856100() {
   return (neuron0x28427a0()*-0.202596);
}

double NNfunction_uRg::synapse0x2856140() {
   return (neuron0x2842ae0()*-0.32491);
}

double NNfunction_uRg::synapse0x2856180() {
   return (neuron0x2842e20()*-0.14495);
}

double NNfunction_uRg::synapse0x28561c0() {
   return (neuron0x2843160()*0.0505878);
}

double NNfunction_uRg::synapse0x2856200() {
   return (neuron0x28434a0()*0.235824);
}

double NNfunction_uRg::synapse0x2856240() {
   return (neuron0x28437e0()*-0.0976332);
}

double NNfunction_uRg::synapse0x2856280() {
   return (neuron0x2843b20()*0.386326);
}

double NNfunction_uRg::synapse0x28562c0() {
   return (neuron0x2843e60()*0.0269979);
}

double NNfunction_uRg::synapse0x2855d50() {
   return (neuron0x28441a0()*-0.0595564);
}

double NNfunction_uRg::synapse0x2855d90() {
   return (neuron0x2844700()*-0.292456);
}

double NNfunction_uRg::synapse0x2856410() {
   return (neuron0x2844920()*-0.116711);
}

double NNfunction_uRg::synapse0x2856450() {
   return (neuron0x2844c60()*0.095796);
}

double NNfunction_uRg::synapse0x2856490() {
   return (neuron0x2844fa0()*0.0137018);
}

double NNfunction_uRg::synapse0x28564d0() {
   return (neuron0x28452e0()*-0.0078944);
}

double NNfunction_uRg::synapse0x2856510() {
   return (neuron0x2845620()*-0.0146969);
}

double NNfunction_uRg::synapse0x2856550() {
   return (neuron0x2845960()*-0.00577874);
}

double NNfunction_uRg::synapse0x2868420() {
   return (neuron0x2840da0()*-0.071467);
}

double NNfunction_uRg::synapse0x2868460() {
   return (neuron0x28410e0()*-0.643775);
}

double NNfunction_uRg::synapse0x28684a0() {
   return (neuron0x2841420()*-0.0745115);
}

double NNfunction_uRg::synapse0x28684e0() {
   return (neuron0x2841760()*1.13572);
}

double NNfunction_uRg::synapse0x2868520() {
   return (neuron0x2841aa0()*-0.041294);
}

double NNfunction_uRg::synapse0x2868560() {
   return (neuron0x2841de0()*-0.160283);
}

double NNfunction_uRg::synapse0x28685a0() {
   return (neuron0x2842120()*-0.045398);
}

double NNfunction_uRg::synapse0x28685e0() {
   return (neuron0x2842460()*0.0472733);
}

double NNfunction_uRg::synapse0x2868620() {
   return (neuron0x28427a0()*0.0675438);
}

double NNfunction_uRg::synapse0x2868660() {
   return (neuron0x2842ae0()*0.128193);
}

double NNfunction_uRg::synapse0x28686a0() {
   return (neuron0x2842e20()*-0.129842);
}

double NNfunction_uRg::synapse0x28686e0() {
   return (neuron0x2843160()*-0.0683952);
}

double NNfunction_uRg::synapse0x2868720() {
   return (neuron0x28434a0()*-0.214073);
}

double NNfunction_uRg::synapse0x2868760() {
   return (neuron0x28437e0()*0.243306);
}

double NNfunction_uRg::synapse0x28687a0() {
   return (neuron0x2843b20()*0.269838);
}

double NNfunction_uRg::synapse0x28687e0() {
   return (neuron0x2843e60()*-0.147756);
}

double NNfunction_uRg::synapse0x2856590() {
   return (neuron0x28441a0()*0.0220175);
}

double NNfunction_uRg::synapse0x28565d0() {
   return (neuron0x2844700()*-0.487327);
}

double NNfunction_uRg::synapse0x2868930() {
   return (neuron0x2844920()*0.319795);
}

double NNfunction_uRg::synapse0x2868970() {
   return (neuron0x2844c60()*-0.173936);
}

double NNfunction_uRg::synapse0x28689b0() {
   return (neuron0x2844fa0()*0.134562);
}

double NNfunction_uRg::synapse0x28689f0() {
   return (neuron0x28452e0()*-0.182747);
}

double NNfunction_uRg::synapse0x2868a30() {
   return (neuron0x2845620()*-0.0383041);
}

double NNfunction_uRg::synapse0x2868a70() {
   return (neuron0x2845960()*-0.157954);
}

double NNfunction_uRg::synapse0x2868df0() {
   return (neuron0x2840da0()*0.0324899);
}

double NNfunction_uRg::synapse0x2868e30() {
   return (neuron0x28410e0()*-0.278206);
}

double NNfunction_uRg::synapse0x2868e70() {
   return (neuron0x2841420()*0.007021);
}

double NNfunction_uRg::synapse0x2868eb0() {
   return (neuron0x2841760()*-0.147872);
}

double NNfunction_uRg::synapse0x2868ef0() {
   return (neuron0x2841aa0()*-0.0436965);
}

double NNfunction_uRg::synapse0x2868f30() {
   return (neuron0x2841de0()*0.0144337);
}

double NNfunction_uRg::synapse0x2868f70() {
   return (neuron0x2842120()*-0.0509868);
}

double NNfunction_uRg::synapse0x2868fb0() {
   return (neuron0x2842460()*0.0310037);
}

double NNfunction_uRg::synapse0x2868ff0() {
   return (neuron0x28427a0()*0.220893);
}

double NNfunction_uRg::synapse0x2869030() {
   return (neuron0x2842ae0()*-0.060994);
}

double NNfunction_uRg::synapse0x2869070() {
   return (neuron0x2842e20()*0.173507);
}

double NNfunction_uRg::synapse0x28690b0() {
   return (neuron0x2843160()*0.640916);
}

double NNfunction_uRg::synapse0x28690f0() {
   return (neuron0x28434a0()*-0.0163554);
}

double NNfunction_uRg::synapse0x2869130() {
   return (neuron0x28437e0()*-0.044919);
}

double NNfunction_uRg::synapse0x2869170() {
   return (neuron0x2843b20()*-0.424164);
}

double NNfunction_uRg::synapse0x28691b0() {
   return (neuron0x2843e60()*0.00137811);
}

double NNfunction_uRg::synapse0x2868c40() {
   return (neuron0x28441a0()*0.00112107);
}

double NNfunction_uRg::synapse0x2868c80() {
   return (neuron0x2844700()*-0.0752163);
}

double NNfunction_uRg::synapse0x2869300() {
   return (neuron0x2844920()*-0.0724128);
}

double NNfunction_uRg::synapse0x2869340() {
   return (neuron0x2844c60()*0.261916);
}

double NNfunction_uRg::synapse0x2869380() {
   return (neuron0x2844fa0()*0.0121145);
}

double NNfunction_uRg::synapse0x28693c0() {
   return (neuron0x28452e0()*-0.00538215);
}

double NNfunction_uRg::synapse0x2869400() {
   return (neuron0x2845620()*0.0178137);
}

double NNfunction_uRg::synapse0x2869440() {
   return (neuron0x2845960()*0.00410287);
}

double NNfunction_uRg::synapse0x28697c0() {
   return (neuron0x2840da0()*-0.00136801);
}

double NNfunction_uRg::synapse0x2869800() {
   return (neuron0x28410e0()*0.318676);
}

double NNfunction_uRg::synapse0x2869840() {
   return (neuron0x2841420()*-0.172953);
}

double NNfunction_uRg::synapse0x2869880() {
   return (neuron0x2841760()*-0.212693);
}

double NNfunction_uRg::synapse0x28698c0() {
   return (neuron0x2841aa0()*-0.159467);
}

double NNfunction_uRg::synapse0x2869900() {
   return (neuron0x2841de0()*-0.0692624);
}

double NNfunction_uRg::synapse0x2869940() {
   return (neuron0x2842120()*0.250011);
}

double NNfunction_uRg::synapse0x2869980() {
   return (neuron0x2842460()*0.235003);
}

double NNfunction_uRg::synapse0x28699c0() {
   return (neuron0x28427a0()*-0.182175);
}

double NNfunction_uRg::synapse0x2869a00() {
   return (neuron0x2842ae0()*-0.32833);
}

double NNfunction_uRg::synapse0x2869a40() {
   return (neuron0x2842e20()*0.244864);
}

double NNfunction_uRg::synapse0x2869a80() {
   return (neuron0x2843160()*0.338592);
}

double NNfunction_uRg::synapse0x2869ac0() {
   return (neuron0x28434a0()*0.424551);
}

double NNfunction_uRg::synapse0x2869b00() {
   return (neuron0x28437e0()*0.0755045);
}

double NNfunction_uRg::synapse0x2869b40() {
   return (neuron0x2843b20()*0.758487);
}

double NNfunction_uRg::synapse0x2869b80() {
   return (neuron0x2843e60()*-0.0957714);
}

double NNfunction_uRg::synapse0x2869610() {
   return (neuron0x28441a0()*-0.0606013);
}

double NNfunction_uRg::synapse0x2869650() {
   return (neuron0x2844700()*0.242051);
}

double NNfunction_uRg::synapse0x2869cd0() {
   return (neuron0x2844920()*0.0526198);
}

double NNfunction_uRg::synapse0x2869d10() {
   return (neuron0x2844c60()*0.314695);
}

double NNfunction_uRg::synapse0x2869d50() {
   return (neuron0x2844fa0()*-0.0900562);
}

double NNfunction_uRg::synapse0x2869d90() {
   return (neuron0x28452e0()*-0.118634);
}

double NNfunction_uRg::synapse0x2869dd0() {
   return (neuron0x2845620()*-0.151972);
}

double NNfunction_uRg::synapse0x2869e10() {
   return (neuron0x2845960()*-0.0937498);
}

double NNfunction_uRg::synapse0x286a190() {
   return (neuron0x2840da0()*0.00216124);
}

double NNfunction_uRg::synapse0x286a1d0() {
   return (neuron0x28410e0()*-0.0182148);
}

double NNfunction_uRg::synapse0x286a210() {
   return (neuron0x2841420()*-0.0212772);
}

double NNfunction_uRg::synapse0x286a250() {
   return (neuron0x2841760()*0.224843);
}

double NNfunction_uRg::synapse0x286a290() {
   return (neuron0x2841aa0()*0.228085);
}

double NNfunction_uRg::synapse0x286a2d0() {
   return (neuron0x2841de0()*-0.0479927);
}

double NNfunction_uRg::synapse0x286a310() {
   return (neuron0x2842120()*-0.184375);
}

double NNfunction_uRg::synapse0x286a350() {
   return (neuron0x2842460()*-0.0371072);
}

double NNfunction_uRg::synapse0x286a390() {
   return (neuron0x28427a0()*0.00437374);
}

double NNfunction_uRg::synapse0x286a3d0() {
   return (neuron0x2842ae0()*0.00255674);
}

double NNfunction_uRg::synapse0x286a410() {
   return (neuron0x2842e20()*0.00676014);
}

double NNfunction_uRg::synapse0x286a450() {
   return (neuron0x2843160()*0.0390513);
}

double NNfunction_uRg::synapse0x286a490() {
   return (neuron0x28434a0()*0.0412354);
}

double NNfunction_uRg::synapse0x286a4d0() {
   return (neuron0x28437e0()*-0.00634771);
}

double NNfunction_uRg::synapse0x286a510() {
   return (neuron0x2843b20()*-0.332202);
}

double NNfunction_uRg::synapse0x286a550() {
   return (neuron0x2843e60()*0.17);
}

double NNfunction_uRg::synapse0x2869fe0() {
   return (neuron0x28441a0()*0.0738719);
}

double NNfunction_uRg::synapse0x286a020() {
   return (neuron0x2844700()*0.0757037);
}

double NNfunction_uRg::synapse0x286a6a0() {
   return (neuron0x2844920()*0.0300688);
}

double NNfunction_uRg::synapse0x286a6e0() {
   return (neuron0x2844c60()*0.0120952);
}

double NNfunction_uRg::synapse0x286a720() {
   return (neuron0x2844fa0()*0.0124132);
}

double NNfunction_uRg::synapse0x286a760() {
   return (neuron0x28452e0()*-0.0107745);
}

double NNfunction_uRg::synapse0x286a7a0() {
   return (neuron0x2845620()*0.00333649);
}

double NNfunction_uRg::synapse0x286a7e0() {
   return (neuron0x2845960()*-0.0364142);
}

double NNfunction_uRg::synapse0x2600bb0() {
   return (neuron0x2845dd0()*0.251965);
}

double NNfunction_uRg::synapse0x2600bf0() {
   return (neuron0x2846720()*0.102855);
}

double NNfunction_uRg::synapse0x2848290() {
   return (neuron0x2847200()*0.616915);
}

double NNfunction_uRg::synapse0x28482d0() {
   return (neuron0x2846ca0()*-0.621279);
}

double NNfunction_uRg::synapse0x2848c60() {
   return (neuron0x2847fe0()*-1.2845);
}

double NNfunction_uRg::synapse0x2848ca0() {
   return (neuron0x28489b0()*0.410712);
}

double NNfunction_uRg::synapse0x2849a30() {
   return (neuron0x2849780()*0.503366);
}

double NNfunction_uRg::synapse0x2849a70() {
   return (neuron0x284a150()*-0.178253);
}

double NNfunction_uRg::synapse0x284a400() {
   return (neuron0x284ab20()*-1.01989);
}

double NNfunction_uRg::synapse0x284a440() {
   return (neuron0x284b600()*0.834015);
}

double NNfunction_uRg::synapse0x284add0() {
   return (neuron0x284bfd0()*-0.554592);
}

double NNfunction_uRg::synapse0x284ae10() {
   return (neuron0x28490b0()*-0.379111);
}

double NNfunction_uRg::synapse0x284b8b0() {
   return (neuron0x284db80()*0.212857);
}

double NNfunction_uRg::synapse0x284b8f0() {
   return (neuron0x284e550()*-0.56222);
}

double NNfunction_uRg::synapse0x284c280() {
   return (neuron0x284ef20()*0.167057);
}

double NNfunction_uRg::synapse0x284c2c0() {
   return (neuron0x284f8f0()*-0.346742);
}

double NNfunction_uRg::synapse0x2849360() {
   return (neuron0x2851700()*0.046326);
}

double NNfunction_uRg::synapse0x28493a0() {
   return (neuron0x28519e0()*0.164838);
}

double NNfunction_uRg::synapse0x284de30() {
   return (neuron0x28523b0()*0.691232);
}

double NNfunction_uRg::synapse0x284de70() {
   return (neuron0x2852d80()*0.123597);
}

double NNfunction_uRg::synapse0x284e800() {
   return (neuron0x2853750()*0.190797);
}

double NNfunction_uRg::synapse0x284e840() {
   return (neuron0x2854120()*0.341972);
}

double NNfunction_uRg::synapse0x284f1d0() {
   return (neuron0x284cc70()*0.428402);
}

double NNfunction_uRg::synapse0x284f210() {
   return (neuron0x284d640()*4.33761);
}

double NNfunction_uRg::synapse0x284fba0() {
   return (neuron0x2856eb0()*-0.572639);
}

double NNfunction_uRg::synapse0x284fbe0() {
   return (neuron0x2857880()*0.457456);
}

double NNfunction_uRg::synapse0x2843d40() {
   return (neuron0x2858250()*0.142735);
}

double NNfunction_uRg::synapse0x2843d80() {
   return (neuron0x2858c20()*-0.88413);
}

double NNfunction_uRg::synapse0x2851c90() {
   return (neuron0x28595f0()*0.649184);
}

double NNfunction_uRg::synapse0x2851cd0() {
   return (neuron0x2859fc0()*0.162903);
}

double NNfunction_uRg::synapse0x2852660() {
   return (neuron0x285a990()*0.0929027);
}

double NNfunction_uRg::synapse0x28526a0() {
   return (neuron0x285b360()*0.562076);
}

double NNfunction_uRg::synapse0x2853030() {
   return (neuron0x28513f0()*0.510766);
}

double NNfunction_uRg::synapse0x2853070() {
   return (neuron0x285df40()*-0.767816);
}

double NNfunction_uRg::synapse0x2853a00() {
   return (neuron0x285e910()*0.271664);
}

double NNfunction_uRg::synapse0x2853a40() {
   return (neuron0x285f2e0()*-0.364511);
}

double NNfunction_uRg::synapse0x28543d0() {
   return (neuron0x285fcb0()*-0.787748);
}

double NNfunction_uRg::synapse0x2854410() {
   return (neuron0x2860680()*-0.0680267);
}

double NNfunction_uRg::synapse0x284cf20() {
   return (neuron0x2861050()*-0.318539);
}

double NNfunction_uRg::synapse0x284cf60() {
   return (neuron0x2861a20()*0.470273);
}

double NNfunction_uRg::synapse0x28567d0() {
   return (neuron0x28623f0()*-2.37665);
}

double NNfunction_uRg::synapse0x2856810() {
   return (neuron0x2862fd0()*0.662369);
}

double NNfunction_uRg::synapse0x2857160() {
   return (neuron0x28639a0()*-0.401488);
}

double NNfunction_uRg::synapse0x28571a0() {
   return (neuron0x2854820()*-0.38643);
}

double NNfunction_uRg::synapse0x2857b30() {
   return (neuron0x28551f0()*-0.4249);
}

double NNfunction_uRg::synapse0x2857b70() {
   return (neuron0x2855bc0()*-1.08209);
}

double NNfunction_uRg::synapse0x2858500() {
   return (neuron0x2868200()*-0.530594);
}

double NNfunction_uRg::synapse0x2858540() {
   return (neuron0x2868ab0()*0.366511);
}

double NNfunction_uRg::synapse0x2858ed0() {
   return (neuron0x2869480()*0.0363231);
}

double NNfunction_uRg::synapse0x2858f10() {
   return (neuron0x2869e50()*-0.827165);
}

double NNfunction_uRg::synapse0x285b610() {
   return (neuron0x2845dd0()*0.082704);
}

double NNfunction_uRg::synapse0x285b650() {
   return (neuron0x2846720()*-0.0192812);
}

double NNfunction_uRg::synapse0x2850bd0() {
   return (neuron0x2847200()*0.30876);
}

double NNfunction_uRg::synapse0x2850c10() {
   return (neuron0x2846ca0()*0.232478);
}

double NNfunction_uRg::synapse0x285e1f0() {
   return (neuron0x2847fe0()*0.291584);
}

double NNfunction_uRg::synapse0x285e230() {
   return (neuron0x28489b0()*0.371295);
}

double NNfunction_uRg::synapse0x285ebc0() {
   return (neuron0x2849780()*-0.475704);
}

double NNfunction_uRg::synapse0x285ec00() {
   return (neuron0x284a150()*0.341461);
}

double NNfunction_uRg::synapse0x285f590() {
   return (neuron0x284ab20()*-0.634407);
}

double NNfunction_uRg::synapse0x285f5d0() {
   return (neuron0x284b600()*-0.491243);
}

double NNfunction_uRg::synapse0x285ff60() {
   return (neuron0x284bfd0()*0.301669);
}

double NNfunction_uRg::synapse0x285ffa0() {
   return (neuron0x28490b0()*-0.652591);
}

double NNfunction_uRg::synapse0x2860930() {
   return (neuron0x284db80()*0.00842767);
}

double NNfunction_uRg::synapse0x2860970() {
   return (neuron0x284e550()*0.027293);
}

double NNfunction_uRg::synapse0x2861300() {
   return (neuron0x284ef20()*0.188333);
}

double NNfunction_uRg::synapse0x2861340() {
   return (neuron0x284f8f0()*0.427519);
}

double NNfunction_uRg::synapse0x2861cd0() {
   return (neuron0x2851700()*-0.329034);
}

double NNfunction_uRg::synapse0x2861d10() {
   return (neuron0x28519e0()*-0.522116);
}

double NNfunction_uRg::synapse0x28626a0() {
   return (neuron0x28523b0()*0.400037);
}

double NNfunction_uRg::synapse0x28626e0() {
   return (neuron0x2852d80()*0.403152);
}

double NNfunction_uRg::synapse0x2863280() {
   return (neuron0x2853750()*0.307814);
}

double NNfunction_uRg::synapse0x28632c0() {
   return (neuron0x2854120()*-0.0573957);
}

double NNfunction_uRg::synapse0x2863c50() {
   return (neuron0x284cc70()*-0.266583);
}

double NNfunction_uRg::synapse0x2863c90() {
   return (neuron0x284d640()*0.043866);
}

double NNfunction_uRg::synapse0x2854ad0() {
   return (neuron0x2856eb0()*-0.483687);
}

double NNfunction_uRg::synapse0x2854b10() {
   return (neuron0x2857880()*-0.17551);
}

double NNfunction_uRg::synapse0x28554a0() {
   return (neuron0x2858250()*-0.104024);
}

double NNfunction_uRg::synapse0x28554e0() {
   return (neuron0x2858c20()*-0.255413);
}

double NNfunction_uRg::synapse0x2855e70() {
   return (neuron0x28595f0()*-0.0455798);
}

double NNfunction_uRg::synapse0x2855eb0() {
   return (neuron0x2859fc0()*-0.0764056);
}

double NNfunction_uRg::synapse0x2868390() {
   return (neuron0x285a990()*0.126525);
}

double NNfunction_uRg::synapse0x28683d0() {
   return (neuron0x285b360()*-0.570289);
}

double NNfunction_uRg::synapse0x2868d60() {
   return (neuron0x28513f0()*-0.350775);
}

double NNfunction_uRg::synapse0x2868da0() {
   return (neuron0x285df40()*-0.644784);
}

double NNfunction_uRg::synapse0x2869730() {
   return (neuron0x285e910()*-0.316205);
}

double NNfunction_uRg::synapse0x2869770() {
   return (neuron0x285f2e0()*-0.242338);
}

double NNfunction_uRg::synapse0x286a100() {
   return (neuron0x285fcb0()*-0.248186);
}

double NNfunction_uRg::synapse0x286a140() {
   return (neuron0x2860680()*-0.126511);
}

double NNfunction_uRg::synapse0x2845ff0() {
   return (neuron0x2861050()*-0.629034);
}

double NNfunction_uRg::synapse0x2846030() {
   return (neuron0x2861a20()*0.12609);
}

double NNfunction_uRg::synapse0x28598a0() {
   return (neuron0x28623f0()*-0.11253);
}

double NNfunction_uRg::synapse0x28598e0() {
   return (neuron0x2862fd0()*0.196567);
}

double NNfunction_uRg::synapse0x286a820() {
   return (neuron0x28639a0()*-0.30615);
}

double NNfunction_uRg::synapse0x286a860() {
   return (neuron0x2854820()*-0.0986276);
}

double NNfunction_uRg::synapse0x286a8a0() {
   return (neuron0x28551f0()*-0.188793);
}

double NNfunction_uRg::synapse0x286a8e0() {
   return (neuron0x2855bc0()*0.530084);
}

double NNfunction_uRg::synapse0x2871790() {
   return (neuron0x2868200()*-0.413797);
}

double NNfunction_uRg::synapse0x28717d0() {
   return (neuron0x2868ab0()*0.17858);
}

double NNfunction_uRg::synapse0x2871810() {
   return (neuron0x2869480()*-0.360798);
}

double NNfunction_uRg::synapse0x2871850() {
   return (neuron0x2869e50()*0.141061);
}

double NNfunction_uRg::synapse0x2871bd0() {
   return (neuron0x2845dd0()*-0.0296927);
}

double NNfunction_uRg::synapse0x2871c10() {
   return (neuron0x2846720()*-0.658248);
}

double NNfunction_uRg::synapse0x2871c50() {
   return (neuron0x2847200()*-0.319741);
}

double NNfunction_uRg::synapse0x2871c90() {
   return (neuron0x2846ca0()*-0.375664);
}

double NNfunction_uRg::synapse0x2871cd0() {
   return (neuron0x2847fe0()*-0.160866);
}

double NNfunction_uRg::synapse0x2871d10() {
   return (neuron0x28489b0()*0.00658991);
}

double NNfunction_uRg::synapse0x2871d50() {
   return (neuron0x2849780()*0.0293206);
}

double NNfunction_uRg::synapse0x2871d90() {
   return (neuron0x284a150()*0.0250006);
}

double NNfunction_uRg::synapse0x2871dd0() {
   return (neuron0x284ab20()*0.0419104);
}

double NNfunction_uRg::synapse0x2871e10() {
   return (neuron0x284b600()*-0.507745);
}

double NNfunction_uRg::synapse0x2871e50() {
   return (neuron0x284bfd0()*-0.253653);
}

double NNfunction_uRg::synapse0x2871e90() {
   return (neuron0x28490b0()*-0.16601);
}

double NNfunction_uRg::synapse0x2871ed0() {
   return (neuron0x284db80()*-0.293759);
}

double NNfunction_uRg::synapse0x2871f10() {
   return (neuron0x284e550()*-0.158919);
}

double NNfunction_uRg::synapse0x2871f50() {
   return (neuron0x284ef20()*-0.31555);
}

double NNfunction_uRg::synapse0x2871f90() {
   return (neuron0x284f8f0()*0.293281);
}

double NNfunction_uRg::synapse0x2871a20() {
   return (neuron0x2851700()*-0.316068);
}

double NNfunction_uRg::synapse0x2871a60() {
   return (neuron0x28519e0()*-0.823426);
}

double NNfunction_uRg::synapse0x28720e0() {
   return (neuron0x28523b0()*-0.457827);
}

double NNfunction_uRg::synapse0x2872120() {
   return (neuron0x2852d80()*-0.329838);
}

double NNfunction_uRg::synapse0x2872160() {
   return (neuron0x2853750()*-0.657007);
}

double NNfunction_uRg::synapse0x28721a0() {
   return (neuron0x2854120()*-0.990272);
}

double NNfunction_uRg::synapse0x28721e0() {
   return (neuron0x284cc70()*-0.107704);
}

double NNfunction_uRg::synapse0x2872220() {
   return (neuron0x284d640()*-0.230634);
}

double NNfunction_uRg::synapse0x2872260() {
   return (neuron0x2856eb0()*0.124763);
}

double NNfunction_uRg::synapse0x28722a0() {
   return (neuron0x2857880()*-0.335678);
}

double NNfunction_uRg::synapse0x28722e0() {
   return (neuron0x2858250()*0.175934);
}

double NNfunction_uRg::synapse0x2872320() {
   return (neuron0x2858c20()*-0.383386);
}

double NNfunction_uRg::synapse0x2872360() {
   return (neuron0x28595f0()*-0.49692);
}

double NNfunction_uRg::synapse0x28723a0() {
   return (neuron0x2859fc0()*-0.612695);
}

double NNfunction_uRg::synapse0x28723e0() {
   return (neuron0x285a990()*0.0761045);
}

double NNfunction_uRg::synapse0x2872420() {
   return (neuron0x285b360()*-0.0541722);
}

double NNfunction_uRg::synapse0x2871fd0() {
   return (neuron0x28513f0()*-0.294871);
}

double NNfunction_uRg::synapse0x2872010() {
   return (neuron0x285df40()*-0.143356);
}

double NNfunction_uRg::synapse0x2872050() {
   return (neuron0x285e910()*-0.131903);
}

double NNfunction_uRg::synapse0x2872090() {
   return (neuron0x285f2e0()*-0.526745);
}

double NNfunction_uRg::synapse0x2872670() {
   return (neuron0x285fcb0()*-0.456034);
}

double NNfunction_uRg::synapse0x28726b0() {
   return (neuron0x2860680()*-0.411195);
}

double NNfunction_uRg::synapse0x28726f0() {
   return (neuron0x2861050()*-0.409951);
}

double NNfunction_uRg::synapse0x2872730() {
   return (neuron0x2861a20()*-0.0516613);
}

double NNfunction_uRg::synapse0x2872770() {
   return (neuron0x28623f0()*-0.533712);
}

double NNfunction_uRg::synapse0x28727b0() {
   return (neuron0x2862fd0()*-0.301753);
}

double NNfunction_uRg::synapse0x28727f0() {
   return (neuron0x28639a0()*-0.765843);
}

double NNfunction_uRg::synapse0x2872830() {
   return (neuron0x2854820()*-0.252904);
}

double NNfunction_uRg::synapse0x2872870() {
   return (neuron0x28551f0()*-0.670125);
}

double NNfunction_uRg::synapse0x28728b0() {
   return (neuron0x2855bc0()*-0.342018);
}

double NNfunction_uRg::synapse0x28728f0() {
   return (neuron0x2868200()*-0.367753);
}

double NNfunction_uRg::synapse0x2872930() {
   return (neuron0x2868ab0()*-0.550265);
}

double NNfunction_uRg::synapse0x2872970() {
   return (neuron0x2869480()*-0.652558);
}

double NNfunction_uRg::synapse0x28729b0() {
   return (neuron0x2869e50()*-0.427538);
}

double NNfunction_uRg::synapse0x2872d30() {
   return (neuron0x2845dd0()*-0.345939);
}

double NNfunction_uRg::synapse0x2872d70() {
   return (neuron0x2846720()*0.0156737);
}

double NNfunction_uRg::synapse0x2872db0() {
   return (neuron0x2847200()*-0.432491);
}

double NNfunction_uRg::synapse0x2872df0() {
   return (neuron0x2846ca0()*-0.0153659);
}

double NNfunction_uRg::synapse0x2872e30() {
   return (neuron0x2847fe0()*-0.0191414);
}

double NNfunction_uRg::synapse0x2872e70() {
   return (neuron0x28489b0()*0.019509);
}

double NNfunction_uRg::synapse0x2872eb0() {
   return (neuron0x2849780()*0.975776);
}

double NNfunction_uRg::synapse0x2872ef0() {
   return (neuron0x284a150()*0.803242);
}

double NNfunction_uRg::synapse0x2872f30() {
   return (neuron0x284ab20()*1.59614);
}

double NNfunction_uRg::synapse0x2872f70() {
   return (neuron0x284b600()*1.25737);
}

double NNfunction_uRg::synapse0x2872fb0() {
   return (neuron0x284bfd0()*0.00106214);
}

double NNfunction_uRg::synapse0x2872ff0() {
   return (neuron0x28490b0()*-0.113072);
}

double NNfunction_uRg::synapse0x2873030() {
   return (neuron0x284db80()*0.151186);
}

double NNfunction_uRg::synapse0x2873070() {
   return (neuron0x284e550()*1.70581);
}

double NNfunction_uRg::synapse0x28730b0() {
   return (neuron0x284ef20()*-0.0534677);
}

double NNfunction_uRg::synapse0x28730f0() {
   return (neuron0x284f8f0()*-0.0728415);
}

double NNfunction_uRg::synapse0x2872b80() {
   return (neuron0x2851700()*-0.00722215);
}

double NNfunction_uRg::synapse0x2872bc0() {
   return (neuron0x28519e0()*-0.00440908);
}

double NNfunction_uRg::synapse0x2873240() {
   return (neuron0x28523b0()*0.261204);
}

double NNfunction_uRg::synapse0x2873280() {
   return (neuron0x2852d80()*0.62358);
}

double NNfunction_uRg::synapse0x28732c0() {
   return (neuron0x2853750()*-0.0726779);
}

double NNfunction_uRg::synapse0x2873300() {
   return (neuron0x2854120()*-0.0194766);
}

double NNfunction_uRg::synapse0x2873340() {
   return (neuron0x284cc70()*-0.946113);
}

double NNfunction_uRg::synapse0x2873380() {
   return (neuron0x284d640()*-0.0727225);
}

double NNfunction_uRg::synapse0x28733c0() {
   return (neuron0x2856eb0()*-0.845265);
}

double NNfunction_uRg::synapse0x2873400() {
   return (neuron0x2857880()*0.00103416);
}

double NNfunction_uRg::synapse0x2873440() {
   return (neuron0x2858250()*0.157873);
}

double NNfunction_uRg::synapse0x2873480() {
   return (neuron0x2858c20()*-0.155492);
}

double NNfunction_uRg::synapse0x28734c0() {
   return (neuron0x28595f0()*-0.0177707);
}

double NNfunction_uRg::synapse0x2873500() {
   return (neuron0x2859fc0()*0.0452032);
}

double NNfunction_uRg::synapse0x2873540() {
   return (neuron0x285a990()*-1.58648);
}

double NNfunction_uRg::synapse0x2873580() {
   return (neuron0x285b360()*0.00560598);
}

double NNfunction_uRg::synapse0x2873130() {
   return (neuron0x28513f0()*-0.0268489);
}

double NNfunction_uRg::synapse0x2873170() {
   return (neuron0x285df40()*0.27647);
}

double NNfunction_uRg::synapse0x28731b0() {
   return (neuron0x285e910()*0.538614);
}

double NNfunction_uRg::synapse0x28731f0() {
   return (neuron0x285f2e0()*-0.971557);
}

double NNfunction_uRg::synapse0x28737d0() {
   return (neuron0x285fcb0()*-0.815506);
}

double NNfunction_uRg::synapse0x2873810() {
   return (neuron0x2860680()*-1.14501);
}

double NNfunction_uRg::synapse0x2873850() {
   return (neuron0x2861050()*-0.00505161);
}

double NNfunction_uRg::synapse0x2873890() {
   return (neuron0x2861a20()*1.75616);
}

double NNfunction_uRg::synapse0x28738d0() {
   return (neuron0x28623f0()*0.0175304);
}

double NNfunction_uRg::synapse0x2873910() {
   return (neuron0x2862fd0()*0.00302176);
}

double NNfunction_uRg::synapse0x2873950() {
   return (neuron0x28639a0()*1.4286);
}

double NNfunction_uRg::synapse0x2873990() {
   return (neuron0x2854820()*0.419089);
}

double NNfunction_uRg::synapse0x28739d0() {
   return (neuron0x28551f0()*-0.0538549);
}

double NNfunction_uRg::synapse0x2873a10() {
   return (neuron0x2855bc0()*-0.0417457);
}

double NNfunction_uRg::synapse0x2873a50() {
   return (neuron0x2868200()*-0.00953071);
}

double NNfunction_uRg::synapse0x2873a90() {
   return (neuron0x2868ab0()*0.0929557);
}

double NNfunction_uRg::synapse0x2873ad0() {
   return (neuron0x2869480()*-0.0114095);
}

double NNfunction_uRg::synapse0x2873b10() {
   return (neuron0x2869e50()*-0.307133);
}

double NNfunction_uRg::synapse0x2873e90() {
   return (neuron0x2845dd0()*0.45929);
}

double NNfunction_uRg::synapse0x2873ed0() {
   return (neuron0x2846720()*0.0636487);
}

double NNfunction_uRg::synapse0x2873f10() {
   return (neuron0x2847200()*-0.802166);
}

double NNfunction_uRg::synapse0x2873f50() {
   return (neuron0x2846ca0()*0.68284);
}

double NNfunction_uRg::synapse0x2873f90() {
   return (neuron0x2847fe0()*0.959904);
}

double NNfunction_uRg::synapse0x2873fd0() {
   return (neuron0x28489b0()*-0.00854406);
}

double NNfunction_uRg::synapse0x2874010() {
   return (neuron0x2849780()*-0.491248);
}

double NNfunction_uRg::synapse0x2874050() {
   return (neuron0x284a150()*0.426418);
}

double NNfunction_uRg::synapse0x2874090() {
   return (neuron0x284ab20()*0.133697);
}

double NNfunction_uRg::synapse0x28740d0() {
   return (neuron0x284b600()*0.225167);
}

double NNfunction_uRg::synapse0x2874110() {
   return (neuron0x284bfd0()*0.546475);
}

double NNfunction_uRg::synapse0x2874150() {
   return (neuron0x28490b0()*-0.270445);
}

double NNfunction_uRg::synapse0x2874190() {
   return (neuron0x284db80()*0.116743);
}

double NNfunction_uRg::synapse0x28741d0() {
   return (neuron0x284e550()*0.665334);
}

double NNfunction_uRg::synapse0x2874210() {
   return (neuron0x284ef20()*-0.288617);
}

double NNfunction_uRg::synapse0x2874250() {
   return (neuron0x284f8f0()*-0.87937);
}

double NNfunction_uRg::synapse0x2873ce0() {
   return (neuron0x2851700()*0.00718866);
}

double NNfunction_uRg::synapse0x2873d20() {
   return (neuron0x28519e0()*-0.0868814);
}

double NNfunction_uRg::synapse0x28743a0() {
   return (neuron0x28523b0()*0.0885271);
}

double NNfunction_uRg::synapse0x28743e0() {
   return (neuron0x2852d80()*-0.160055);
}

double NNfunction_uRg::synapse0x2874420() {
   return (neuron0x2853750()*-0.221165);
}

double NNfunction_uRg::synapse0x2874460() {
   return (neuron0x2854120()*0.0849418);
}

double NNfunction_uRg::synapse0x28744a0() {
   return (neuron0x284cc70()*-0.376182);
}

double NNfunction_uRg::synapse0x28744e0() {
   return (neuron0x284d640()*-4.17208);
}

double NNfunction_uRg::synapse0x2874520() {
   return (neuron0x2856eb0()*-0.259811);
}

double NNfunction_uRg::synapse0x2874560() {
   return (neuron0x2857880()*-0.231029);
}

double NNfunction_uRg::synapse0x28745a0() {
   return (neuron0x2858250()*-0.216562);
}

double NNfunction_uRg::synapse0x28745e0() {
   return (neuron0x2858c20()*1.44728);
}

double NNfunction_uRg::synapse0x2874620() {
   return (neuron0x28595f0()*-0.0715152);
}

double NNfunction_uRg::synapse0x2874660() {
   return (neuron0x2859fc0()*0.156148);
}

double NNfunction_uRg::synapse0x28746a0() {
   return (neuron0x285a990()*-0.298577);
}

double NNfunction_uRg::synapse0x28746e0() {
   return (neuron0x285b360()*-0.0281802);
}

double NNfunction_uRg::synapse0x2874290() {
   return (neuron0x28513f0()*0.0366636);
}

double NNfunction_uRg::synapse0x28742d0() {
   return (neuron0x285df40()*0.646735);
}

double NNfunction_uRg::synapse0x2874310() {
   return (neuron0x285e910()*-0.124666);
}

double NNfunction_uRg::synapse0x2874350() {
   return (neuron0x285f2e0()*0.0741338);
}

double NNfunction_uRg::synapse0x2874930() {
   return (neuron0x285fcb0()*-0.182029);
}

double NNfunction_uRg::synapse0x2874970() {
   return (neuron0x2860680()*-0.444928);
}

double NNfunction_uRg::synapse0x28749b0() {
   return (neuron0x2861050()*-0.0242934);
}

double NNfunction_uRg::synapse0x28749f0() {
   return (neuron0x2861a20()*0.251414);
}

double NNfunction_uRg::synapse0x2874a30() {
   return (neuron0x28623f0()*-1.77713);
}

double NNfunction_uRg::synapse0x2874a70() {
   return (neuron0x2862fd0()*-0.659563);
}

double NNfunction_uRg::synapse0x2874ab0() {
   return (neuron0x28639a0()*0.215978);
}

double NNfunction_uRg::synapse0x2874af0() {
   return (neuron0x2854820()*0.713145);
}

double NNfunction_uRg::synapse0x2874b30() {
   return (neuron0x28551f0()*0.0340925);
}

double NNfunction_uRg::synapse0x2874b70() {
   return (neuron0x2855bc0()*0.250799);
}

double NNfunction_uRg::synapse0x2874bb0() {
   return (neuron0x2868200()*0.363717);
}

double NNfunction_uRg::synapse0x2874bf0() {
   return (neuron0x2868ab0()*0.100076);
}

double NNfunction_uRg::synapse0x2874c30() {
   return (neuron0x2869480()*-0.0929391);
}

double NNfunction_uRg::synapse0x2874c70() {
   return (neuron0x2869e50()*0.0716729);
}

double NNfunction_uRg::synapse0x2874ed0() {
   return (neuron0x2871050()*-6.46138);
}

double NNfunction_uRg::synapse0x2874f10() {
   return (neuron0x28713f0()*0.633108);
}

double NNfunction_uRg::synapse0x2874f50() {
   return (neuron0x2871890()*-0.213175);
}

double NNfunction_uRg::synapse0x2874f90() {
   return (neuron0x28729f0()*-12.9515);
}

double NNfunction_uRg::synapse0x2874fd0() {
   return (neuron0x2873b50()*-7.18395);
}

