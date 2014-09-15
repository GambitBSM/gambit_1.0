#include "NNfunction_nn_chi2_charge2m.h"
#include <cmath>

double NNfunction_nn_chi2_charge2m::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.8074)/14.8386;
   input1 = (in1 - 30.5951)/920.024;
   input2 = (in2 - 187.504)/134.823;
   input3 = (in3 - 199.746)/707.99;
   input4 = (in4 - 1045.78)/873.842;
   input5 = (in5 - 1054.33)/957.243;
   input6 = (in6 - 1059.71)/956.391;
   input7 = (in7 - 1043.33)/924.766;
   input8 = (in8 - 1058.8)/973.612;
   input9 = (in9 - 1049.89)/966.784;
   input10 = (in10 - 1029.28)/923.998;
   input11 = (in11 - 961.932)/931.545;
   input12 = (in12 - 980.982)/930.769;
   input13 = (in13 - 729.971)/656.166;
   input14 = (in14 - 959.235)/898.771;
   input15 = (in15 - 962.842)/899.752;
   input16 = (in16 - 645.668)/566.184;
   input17 = (in17 - 995.633)/945.753;
   input18 = (in18 - 994.921)/945.795;
   input19 = (in19 - 956.681)/878.283;
   input20 = (in20 - -149.736)/439.446;
   input21 = (in21 - -191.313)/937.969;
   input22 = (in22 - 7.59777)/958.171;
   input23 = (in23 - 22.3808)/253.222;
   switch(index) {
     case 0:
         return neuron0x28b0db0();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi2_charge2m::Value(int index, double* input) {
   input0 = (input[0] - 24.8074)/14.8386;
   input1 = (input[1] - 30.5951)/920.024;
   input2 = (input[2] - 187.504)/134.823;
   input3 = (input[3] - 199.746)/707.99;
   input4 = (input[4] - 1045.78)/873.842;
   input5 = (input[5] - 1054.33)/957.243;
   input6 = (input[6] - 1059.71)/956.391;
   input7 = (input[7] - 1043.33)/924.766;
   input8 = (input[8] - 1058.8)/973.612;
   input9 = (input[9] - 1049.89)/966.784;
   input10 = (input[10] - 1029.28)/923.998;
   input11 = (input[11] - 961.932)/931.545;
   input12 = (input[12] - 980.982)/930.769;
   input13 = (input[13] - 729.971)/656.166;
   input14 = (input[14] - 959.235)/898.771;
   input15 = (input[15] - 962.842)/899.752;
   input16 = (input[16] - 645.668)/566.184;
   input17 = (input[17] - 995.633)/945.753;
   input18 = (input[18] - 994.921)/945.795;
   input19 = (input[19] - 956.681)/878.283;
   input20 = (input[20] - -149.736)/439.446;
   input21 = (input[21] - -191.313)/937.969;
   input22 = (input[22] - 7.59777)/958.171;
   input23 = (input[23] - 22.3808)/253.222;
   switch(index) {
     case 0:
         return neuron0x28b0db0();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi2_charge2m::neuron0x287ce70() {
   return input0;
}

double NNfunction_nn_chi2_charge2m::neuron0x287d1b0() {
   return input1;
}

double NNfunction_nn_chi2_charge2m::neuron0x287d4f0() {
   return input2;
}

double NNfunction_nn_chi2_charge2m::neuron0x287d830() {
   return input3;
}

double NNfunction_nn_chi2_charge2m::neuron0x287db70() {
   return input4;
}

double NNfunction_nn_chi2_charge2m::neuron0x287deb0() {
   return input5;
}

double NNfunction_nn_chi2_charge2m::neuron0x287e1f0() {
   return input6;
}

double NNfunction_nn_chi2_charge2m::neuron0x287e530() {
   return input7;
}

double NNfunction_nn_chi2_charge2m::neuron0x287e870() {
   return input8;
}

double NNfunction_nn_chi2_charge2m::neuron0x287ebb0() {
   return input9;
}

double NNfunction_nn_chi2_charge2m::neuron0x287eef0() {
   return input10;
}

double NNfunction_nn_chi2_charge2m::neuron0x287f230() {
   return input11;
}

double NNfunction_nn_chi2_charge2m::neuron0x287f570() {
   return input12;
}

double NNfunction_nn_chi2_charge2m::neuron0x287f8b0() {
   return input13;
}

double NNfunction_nn_chi2_charge2m::neuron0x287fbf0() {
   return input14;
}

double NNfunction_nn_chi2_charge2m::neuron0x287ff30() {
   return input15;
}

double NNfunction_nn_chi2_charge2m::neuron0x2880270() {
   return input16;
}

double NNfunction_nn_chi2_charge2m::neuron0x28807d0() {
   return input17;
}

double NNfunction_nn_chi2_charge2m::neuron0x28809f0() {
   return input18;
}

double NNfunction_nn_chi2_charge2m::neuron0x2880d30() {
   return input19;
}

double NNfunction_nn_chi2_charge2m::neuron0x2881070() {
   return input20;
}

double NNfunction_nn_chi2_charge2m::neuron0x28813b0() {
   return input21;
}

double NNfunction_nn_chi2_charge2m::neuron0x28816f0() {
   return input22;
}

double NNfunction_nn_chi2_charge2m::neuron0x2881a30() {
   return input23;
}

double NNfunction_nn_chi2_charge2m::input0x2881ed0() {
   double input = -0.278269;
   input += synapse0x2646820();
   input += synapse0x287cd30();
   input += synapse0x287cd70();
   input += synapse0x2882180();
   input += synapse0x28821c0();
   input += synapse0x2882200();
   input += synapse0x2882240();
   input += synapse0x2882280();
   input += synapse0x28822c0();
   input += synapse0x2882300();
   input += synapse0x2882340();
   input += synapse0x2882380();
   input += synapse0x28823c0();
   input += synapse0x2882400();
   input += synapse0x2882440();
   input += synapse0x2882480();
   input += synapse0x287cca0();
   input += synapse0x287cce0();
   input += synapse0x2638010();
   input += synapse0x2638050();
   input += synapse0x28826e0();
   input += synapse0x2882720();
   input += synapse0x2882760();
   input += synapse0x28827a0();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x2881ed0() {
   double input = input0x2881ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x28827e0() {
   double input = -0.110866;
   input += synapse0x2882b20();
   input += synapse0x2882b60();
   input += synapse0x2882ba0();
   input += synapse0x2882be0();
   input += synapse0x2882c20();
   input += synapse0x2882c60();
   input += synapse0x2882ca0();
   input += synapse0x2882ce0();
   input += synapse0x2882d20();
   input += synapse0x28825d0();
   input += synapse0x2882610();
   input += synapse0x2882650();
   input += synapse0x2882690();
   input += synapse0x2882f70();
   input += synapse0x2882fb0();
   input += synapse0x2882ff0();
   input += synapse0x2882970();
   input += synapse0x28829b0();
   input += synapse0x2883140();
   input += synapse0x2883180();
   input += synapse0x28831c0();
   input += synapse0x2883200();
   input += synapse0x2883240();
   input += synapse0x2883280();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x28827e0() {
   double input = input0x28827e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x28832c0() {
   double input = -2.59955;
   input += synapse0x2883600();
   input += synapse0x2883640();
   input += synapse0x2883680();
   input += synapse0x28836c0();
   input += synapse0x2883700();
   input += synapse0x2883740();
   input += synapse0x2883780();
   input += synapse0x28837c0();
   input += synapse0x2883800();
   input += synapse0x2883840();
   input += synapse0x2883880();
   input += synapse0x28838c0();
   input += synapse0x2883900();
   input += synapse0x2883940();
   input += synapse0x2883980();
   input += synapse0x28839c0();
   input += synapse0x2883450();
   input += synapse0x2883490();
   input += synapse0x2645f30();
   input += synapse0x2645f70();
   input += synapse0x286bf00();
   input += synapse0x286bf40();
   input += synapse0x286bf80();
   input += synapse0x287cdb0();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x28832c0() {
   double input = input0x28832c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x2646690() {
   double input = 1.18475;
   input += synapse0x2882f10();
   input += synapse0x287cdf0();
   input += synapse0x287ce30();
   input += synapse0x2883b10();
   input += synapse0x2883b50();
   input += synapse0x2883b90();
   input += synapse0x2883bd0();
   input += synapse0x2883c10();
   input += synapse0x2883c50();
   input += synapse0x2883c90();
   input += synapse0x2883cd0();
   input += synapse0x2883d10();
   input += synapse0x2883d50();
   input += synapse0x2883d90();
   input += synapse0x2883dd0();
   input += synapse0x2883e10();
   input += synapse0x2882d60();
   input += synapse0x2882da0();
   input += synapse0x2883f60();
   input += synapse0x2883fa0();
   input += synapse0x2883fe0();
   input += synapse0x2884020();
   input += synapse0x2884060();
   input += synapse0x28840a0();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x2646690() {
   double input = input0x2646690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x28840e0() {
   double input = -0.253215;
   input += synapse0x2884420();
   input += synapse0x2884460();
   input += synapse0x28844a0();
   input += synapse0x28844e0();
   input += synapse0x2884520();
   input += synapse0x2884560();
   input += synapse0x28845a0();
   input += synapse0x28845e0();
   input += synapse0x2884620();
   input += synapse0x2884660();
   input += synapse0x28846a0();
   input += synapse0x28846e0();
   input += synapse0x2884720();
   input += synapse0x2884760();
   input += synapse0x28847a0();
   input += synapse0x28847e0();
   input += synapse0x2884270();
   input += synapse0x28842b0();
   input += synapse0x2884930();
   input += synapse0x2884970();
   input += synapse0x28849b0();
   input += synapse0x28849f0();
   input += synapse0x2884a30();
   input += synapse0x2884a70();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x28840e0() {
   double input = input0x28840e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x2884ab0() {
   double input = -1.31022;
   input += synapse0x2884df0();
   input += synapse0x2884e30();
   input += synapse0x2884e70();
   input += synapse0x2884eb0();
   input += synapse0x2884ef0();
   input += synapse0x2884f30();
   input += synapse0x2884f70();
   input += synapse0x2884fb0();
   input += synapse0x2884ff0();
   input += synapse0x2646280();
   input += synapse0x26462c0();
   input += synapse0x2646300();
   input += synapse0x2646340();
   input += synapse0x2646380();
   input += synapse0x26463c0();
   input += synapse0x2646400();
   input += synapse0x2884c40();
   input += synapse0x2884c80();
   input += synapse0x2646550();
   input += synapse0x2646590();
   input += synapse0x26465d0();
   input += synapse0x2646610();
   input += synapse0x2646650();
   input += synapse0x2885840();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x2884ab0() {
   double input = input0x2884ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x2885880() {
   double input = 2.26645;
   input += synapse0x2885bc0();
   input += synapse0x2885c00();
   input += synapse0x2885c40();
   input += synapse0x2885c80();
   input += synapse0x2885cc0();
   input += synapse0x2885d00();
   input += synapse0x2885d40();
   input += synapse0x2885d80();
   input += synapse0x2885dc0();
   input += synapse0x2885e00();
   input += synapse0x2885e40();
   input += synapse0x2885e80();
   input += synapse0x2885ec0();
   input += synapse0x2885f00();
   input += synapse0x2885f40();
   input += synapse0x2885f80();
   input += synapse0x2885a10();
   input += synapse0x2885a50();
   input += synapse0x28860d0();
   input += synapse0x2886110();
   input += synapse0x2886150();
   input += synapse0x2886190();
   input += synapse0x28861d0();
   input += synapse0x2886210();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x2885880() {
   double input = input0x2885880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x2886250() {
   double input = 1.47466;
   input += synapse0x2886590();
   input += synapse0x28865d0();
   input += synapse0x2886610();
   input += synapse0x2886650();
   input += synapse0x2886690();
   input += synapse0x28866d0();
   input += synapse0x2886710();
   input += synapse0x2886750();
   input += synapse0x2886790();
   input += synapse0x28867d0();
   input += synapse0x2886810();
   input += synapse0x2886850();
   input += synapse0x2886890();
   input += synapse0x28868d0();
   input += synapse0x2886910();
   input += synapse0x2886950();
   input += synapse0x28863e0();
   input += synapse0x2886420();
   input += synapse0x2886aa0();
   input += synapse0x2886ae0();
   input += synapse0x2886b20();
   input += synapse0x2886b60();
   input += synapse0x2886ba0();
   input += synapse0x2886be0();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x2886250() {
   double input = input0x2886250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x2886c20() {
   double input = 0.631058;
   input += synapse0x28806c0();
   input += synapse0x2880700();
   input += synapse0x2880740();
   input += synapse0x2880780();
   input += synapse0x2887170();
   input += synapse0x28871b0();
   input += synapse0x28871f0();
   input += synapse0x2887230();
   input += synapse0x2887270();
   input += synapse0x28872b0();
   input += synapse0x28872f0();
   input += synapse0x2887330();
   input += synapse0x2887370();
   input += synapse0x28873b0();
   input += synapse0x28873f0();
   input += synapse0x2887430();
   input += synapse0x2886db0();
   input += synapse0x2886df0();
   input += synapse0x2887580();
   input += synapse0x28875c0();
   input += synapse0x2887600();
   input += synapse0x2887640();
   input += synapse0x2887680();
   input += synapse0x28876c0();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x2886c20() {
   double input = input0x2886c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x2887700() {
   double input = 3.20187;
   input += synapse0x2887a40();
   input += synapse0x2887a80();
   input += synapse0x2887ac0();
   input += synapse0x2887b00();
   input += synapse0x2887b40();
   input += synapse0x2887b80();
   input += synapse0x2887bc0();
   input += synapse0x2887c00();
   input += synapse0x2887c40();
   input += synapse0x2887c80();
   input += synapse0x2887cc0();
   input += synapse0x2887d00();
   input += synapse0x2887d40();
   input += synapse0x2887d80();
   input += synapse0x2887dc0();
   input += synapse0x2887e00();
   input += synapse0x2887890();
   input += synapse0x28878d0();
   input += synapse0x2887f50();
   input += synapse0x2887f90();
   input += synapse0x2887fd0();
   input += synapse0x2888010();
   input += synapse0x2888050();
   input += synapse0x2888090();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x2887700() {
   double input = input0x2887700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x28880d0() {
   double input = -4.74506;
   input += synapse0x2888410();
   input += synapse0x2888450();
   input += synapse0x2888490();
   input += synapse0x28884d0();
   input += synapse0x2888510();
   input += synapse0x2888550();
   input += synapse0x2888590();
   input += synapse0x28885d0();
   input += synapse0x2888610();
   input += synapse0x2888650();
   input += synapse0x2888690();
   input += synapse0x28886d0();
   input += synapse0x2888710();
   input += synapse0x2888750();
   input += synapse0x2888790();
   input += synapse0x28887d0();
   input += synapse0x2888260();
   input += synapse0x28882a0();
   input += synapse0x2885030();
   input += synapse0x2885070();
   input += synapse0x28850b0();
   input += synapse0x28850f0();
   input += synapse0x2885130();
   input += synapse0x2885170();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x28880d0() {
   double input = input0x28880d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x28851b0() {
   double input = -4.81321;
   input += synapse0x28854f0();
   input += synapse0x2885530();
   input += synapse0x2885570();
   input += synapse0x28855b0();
   input += synapse0x28855f0();
   input += synapse0x2885630();
   input += synapse0x2885670();
   input += synapse0x28856b0();
   input += synapse0x28856f0();
   input += synapse0x2885730();
   input += synapse0x2885770();
   input += synapse0x28857b0();
   input += synapse0x28857f0();
   input += synapse0x2889930();
   input += synapse0x2889970();
   input += synapse0x28899b0();
   input += synapse0x2885340();
   input += synapse0x2885380();
   input += synapse0x2889b00();
   input += synapse0x2889b40();
   input += synapse0x2889b80();
   input += synapse0x2889bc0();
   input += synapse0x2889c00();
   input += synapse0x2889c40();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x28851b0() {
   double input = input0x28851b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x2889c80() {
   double input = 2.0191;
   input += synapse0x2889fc0();
   input += synapse0x288a000();
   input += synapse0x288a040();
   input += synapse0x288a080();
   input += synapse0x288a0c0();
   input += synapse0x288a100();
   input += synapse0x288a140();
   input += synapse0x288a180();
   input += synapse0x288a1c0();
   input += synapse0x288a200();
   input += synapse0x288a240();
   input += synapse0x288a280();
   input += synapse0x288a2c0();
   input += synapse0x288a300();
   input += synapse0x288a340();
   input += synapse0x288a380();
   input += synapse0x2889e10();
   input += synapse0x2889e50();
   input += synapse0x288a4d0();
   input += synapse0x288a510();
   input += synapse0x288a550();
   input += synapse0x288a590();
   input += synapse0x288a5d0();
   input += synapse0x288a610();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x2889c80() {
   double input = input0x2889c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x288a650() {
   double input = -2.92898;
   input += synapse0x288a990();
   input += synapse0x288a9d0();
   input += synapse0x288aa10();
   input += synapse0x288aa50();
   input += synapse0x288aa90();
   input += synapse0x288aad0();
   input += synapse0x288ab10();
   input += synapse0x288ab50();
   input += synapse0x288ab90();
   input += synapse0x288abd0();
   input += synapse0x288ac10();
   input += synapse0x288ac50();
   input += synapse0x288ac90();
   input += synapse0x288acd0();
   input += synapse0x288ad10();
   input += synapse0x288ad50();
   input += synapse0x288a7e0();
   input += synapse0x288a820();
   input += synapse0x288aea0();
   input += synapse0x288aee0();
   input += synapse0x288af20();
   input += synapse0x288af60();
   input += synapse0x288afa0();
   input += synapse0x288afe0();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x288a650() {
   double input = input0x288a650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x288b020() {
   double input = 3.8797;
   input += synapse0x288b360();
   input += synapse0x288b3a0();
   input += synapse0x288b3e0();
   input += synapse0x288b420();
   input += synapse0x288b460();
   input += synapse0x288b4a0();
   input += synapse0x288b4e0();
   input += synapse0x288b520();
   input += synapse0x288b560();
   input += synapse0x288b5a0();
   input += synapse0x288b5e0();
   input += synapse0x288b620();
   input += synapse0x288b660();
   input += synapse0x288b6a0();
   input += synapse0x288b6e0();
   input += synapse0x288b720();
   input += synapse0x288b1b0();
   input += synapse0x288b1f0();
   input += synapse0x288b870();
   input += synapse0x288b8b0();
   input += synapse0x288b8f0();
   input += synapse0x288b930();
   input += synapse0x288b970();
   input += synapse0x288b9b0();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x288b020() {
   double input = input0x288b020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x288b9f0() {
   double input = 0.87096;
   input += synapse0x288bd30();
   input += synapse0x287d090();
   input += synapse0x287d0d0();
   input += synapse0x287d3d0();
   input += synapse0x287d410();
   input += synapse0x287d710();
   input += synapse0x287d750();
   input += synapse0x287da50();
   input += synapse0x287da90();
   input += synapse0x287dd90();
   input += synapse0x287ddd0();
   input += synapse0x287e0d0();
   input += synapse0x287e110();
   input += synapse0x287e410();
   input += synapse0x287e450();
   input += synapse0x287e750();
   input += synapse0x287e790();
   input += synapse0x287ea90();
   input += synapse0x287ead0();
   input += synapse0x287edd0();
   input += synapse0x287ee10();
   input += synapse0x287f110();
   input += synapse0x287f150();
   input += synapse0x287f450();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x288b9f0() {
   double input = input0x288b9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x288d800() {
   double input = 4.51661;
   input += synapse0x287f490();
   input += synapse0x2880150();
   input += synapse0x2880190();
   input += synapse0x288bb80();
   input += synapse0x288bbc0();
   input += synapse0x2880490();
   input += synapse0x28804d0();
   input += synapse0x2637ef0();
   input += synapse0x2637f30();
   input += synapse0x2880c10();
   input += synapse0x2880c50();
   input += synapse0x2880f50();
   input += synapse0x2880f90();
   input += synapse0x2881290();
   input += synapse0x28812d0();
   input += synapse0x28815d0();
   input += synapse0x2881610();
   input += synapse0x2881910();
   input += synapse0x2881950();
   input += synapse0x2881c50();
   input += synapse0x2881c90();
   input += synapse0x287f790();
   input += synapse0x287f7d0();
   input += synapse0x288daa0();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x288d800() {
   double input = input0x288d800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x288dae0() {
   double input = -0.384988;
   input += synapse0x288de20();
   input += synapse0x288de60();
   input += synapse0x288dea0();
   input += synapse0x288dee0();
   input += synapse0x288df20();
   input += synapse0x288df60();
   input += synapse0x288dfa0();
   input += synapse0x288dfe0();
   input += synapse0x288e020();
   input += synapse0x288e060();
   input += synapse0x288e0a0();
   input += synapse0x288e0e0();
   input += synapse0x288e120();
   input += synapse0x288e160();
   input += synapse0x288e1a0();
   input += synapse0x288e1e0();
   input += synapse0x288dc70();
   input += synapse0x288dcb0();
   input += synapse0x288e330();
   input += synapse0x288e370();
   input += synapse0x288e3b0();
   input += synapse0x288e3f0();
   input += synapse0x288e430();
   input += synapse0x288e470();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x288dae0() {
   double input = input0x288dae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x288e4b0() {
   double input = 3.82735;
   input += synapse0x288e7f0();
   input += synapse0x288e830();
   input += synapse0x288e870();
   input += synapse0x288e8b0();
   input += synapse0x288e8f0();
   input += synapse0x288e930();
   input += synapse0x288e970();
   input += synapse0x288e9b0();
   input += synapse0x288e9f0();
   input += synapse0x288ea30();
   input += synapse0x288ea70();
   input += synapse0x288eab0();
   input += synapse0x288eaf0();
   input += synapse0x288eb30();
   input += synapse0x288eb70();
   input += synapse0x288ebb0();
   input += synapse0x288e640();
   input += synapse0x288e680();
   input += synapse0x288ed00();
   input += synapse0x288ed40();
   input += synapse0x288ed80();
   input += synapse0x288edc0();
   input += synapse0x288ee00();
   input += synapse0x288ee40();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x288e4b0() {
   double input = input0x288e4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x288ee80() {
   double input = 3.02402;
   input += synapse0x288f1c0();
   input += synapse0x288f200();
   input += synapse0x288f240();
   input += synapse0x288f280();
   input += synapse0x288f2c0();
   input += synapse0x288f300();
   input += synapse0x288f340();
   input += synapse0x288f380();
   input += synapse0x288f3c0();
   input += synapse0x288f400();
   input += synapse0x288f440();
   input += synapse0x288f480();
   input += synapse0x288f4c0();
   input += synapse0x288f500();
   input += synapse0x288f540();
   input += synapse0x288f580();
   input += synapse0x288f010();
   input += synapse0x288f050();
   input += synapse0x288f6d0();
   input += synapse0x288f710();
   input += synapse0x288f750();
   input += synapse0x288f790();
   input += synapse0x288f7d0();
   input += synapse0x288f810();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x288ee80() {
   double input = input0x288ee80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x288f850() {
   double input = 1.43523;
   input += synapse0x288fb90();
   input += synapse0x288fbd0();
   input += synapse0x288fc10();
   input += synapse0x288fc50();
   input += synapse0x288fc90();
   input += synapse0x288fcd0();
   input += synapse0x288fd10();
   input += synapse0x288fd50();
   input += synapse0x288fd90();
   input += synapse0x288fdd0();
   input += synapse0x288fe10();
   input += synapse0x288fe50();
   input += synapse0x288fe90();
   input += synapse0x288fed0();
   input += synapse0x288ff10();
   input += synapse0x288ff50();
   input += synapse0x288f9e0();
   input += synapse0x288fa20();
   input += synapse0x28900a0();
   input += synapse0x28900e0();
   input += synapse0x2890120();
   input += synapse0x2890160();
   input += synapse0x28901a0();
   input += synapse0x28901e0();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x288f850() {
   double input = input0x288f850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x2890220() {
   double input = -0.631732;
   input += synapse0x2890560();
   input += synapse0x28905a0();
   input += synapse0x28905e0();
   input += synapse0x2890620();
   input += synapse0x2890660();
   input += synapse0x28906a0();
   input += synapse0x28906e0();
   input += synapse0x2890720();
   input += synapse0x2890760();
   input += synapse0x2888920();
   input += synapse0x2888960();
   input += synapse0x28889a0();
   input += synapse0x28889e0();
   input += synapse0x2888a20();
   input += synapse0x2888a60();
   input += synapse0x2888aa0();
   input += synapse0x28903b0();
   input += synapse0x28903f0();
   input += synapse0x2888bf0();
   input += synapse0x2888c30();
   input += synapse0x2888c70();
   input += synapse0x2888cb0();
   input += synapse0x2888cf0();
   input += synapse0x2888d30();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x2890220() {
   double input = input0x2890220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x2888d70() {
   double input = -1.32628;
   input += synapse0x28890b0();
   input += synapse0x28890f0();
   input += synapse0x2889130();
   input += synapse0x2889170();
   input += synapse0x28891b0();
   input += synapse0x28891f0();
   input += synapse0x2889230();
   input += synapse0x2889270();
   input += synapse0x28892b0();
   input += synapse0x28892f0();
   input += synapse0x2889330();
   input += synapse0x2889370();
   input += synapse0x28893b0();
   input += synapse0x28893f0();
   input += synapse0x2889430();
   input += synapse0x2889470();
   input += synapse0x2888f00();
   input += synapse0x2888f40();
   input += synapse0x28895c0();
   input += synapse0x2889600();
   input += synapse0x2889640();
   input += synapse0x2889680();
   input += synapse0x28896c0();
   input += synapse0x2889700();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x2888d70() {
   double input = input0x2888d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x2889740() {
   double input = 1.74594;
   input += synapse0x28898d0();
   input += synapse0x2892960();
   input += synapse0x28929a0();
   input += synapse0x28929e0();
   input += synapse0x2892a20();
   input += synapse0x2892a60();
   input += synapse0x2892aa0();
   input += synapse0x2892ae0();
   input += synapse0x2892b20();
   input += synapse0x2892b60();
   input += synapse0x2892ba0();
   input += synapse0x2892be0();
   input += synapse0x2892c20();
   input += synapse0x2892c60();
   input += synapse0x2892ca0();
   input += synapse0x2892ce0();
   input += synapse0x28927b0();
   input += synapse0x28927f0();
   input += synapse0x2892e30();
   input += synapse0x2892e70();
   input += synapse0x2892eb0();
   input += synapse0x2892ef0();
   input += synapse0x2892f30();
   input += synapse0x2892f70();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x2889740() {
   double input = input0x2889740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x2892fb0() {
   double input = 0.692077;
   input += synapse0x28932f0();
   input += synapse0x2893330();
   input += synapse0x2893370();
   input += synapse0x28933b0();
   input += synapse0x28933f0();
   input += synapse0x2893430();
   input += synapse0x2893470();
   input += synapse0x28934b0();
   input += synapse0x28934f0();
   input += synapse0x2893530();
   input += synapse0x2893570();
   input += synapse0x28935b0();
   input += synapse0x28935f0();
   input += synapse0x2893630();
   input += synapse0x2893670();
   input += synapse0x28936b0();
   input += synapse0x2893140();
   input += synapse0x2893180();
   input += synapse0x2893800();
   input += synapse0x2893840();
   input += synapse0x2893880();
   input += synapse0x28938c0();
   input += synapse0x2893900();
   input += synapse0x2893940();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x2892fb0() {
   double input = input0x2892fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x2893980() {
   double input = 2.30782;
   input += synapse0x2893cc0();
   input += synapse0x2893d00();
   input += synapse0x2893d40();
   input += synapse0x2893d80();
   input += synapse0x2893dc0();
   input += synapse0x2893e00();
   input += synapse0x2893e40();
   input += synapse0x2893e80();
   input += synapse0x2893ec0();
   input += synapse0x2893f00();
   input += synapse0x2893f40();
   input += synapse0x2893f80();
   input += synapse0x2893fc0();
   input += synapse0x2894000();
   input += synapse0x2894040();
   input += synapse0x2894080();
   input += synapse0x2893b10();
   input += synapse0x2893b50();
   input += synapse0x28941d0();
   input += synapse0x2894210();
   input += synapse0x2894250();
   input += synapse0x2894290();
   input += synapse0x28942d0();
   input += synapse0x2894310();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x2893980() {
   double input = input0x2893980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x2894350() {
   double input = 0.841354;
   input += synapse0x2894690();
   input += synapse0x28946d0();
   input += synapse0x2894710();
   input += synapse0x2894750();
   input += synapse0x2894790();
   input += synapse0x28947d0();
   input += synapse0x2894810();
   input += synapse0x2894850();
   input += synapse0x2894890();
   input += synapse0x28948d0();
   input += synapse0x2894910();
   input += synapse0x2894950();
   input += synapse0x2894990();
   input += synapse0x28949d0();
   input += synapse0x2894a10();
   input += synapse0x2894a50();
   input += synapse0x28944e0();
   input += synapse0x2894520();
   input += synapse0x2894ba0();
   input += synapse0x2894be0();
   input += synapse0x2894c20();
   input += synapse0x2894c60();
   input += synapse0x2894ca0();
   input += synapse0x2894ce0();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x2894350() {
   double input = input0x2894350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x2894d20() {
   double input = -0.218347;
   input += synapse0x2895060();
   input += synapse0x28950a0();
   input += synapse0x28950e0();
   input += synapse0x2895120();
   input += synapse0x2895160();
   input += synapse0x28951a0();
   input += synapse0x28951e0();
   input += synapse0x2895220();
   input += synapse0x2895260();
   input += synapse0x28952a0();
   input += synapse0x28952e0();
   input += synapse0x2895320();
   input += synapse0x2895360();
   input += synapse0x28953a0();
   input += synapse0x28953e0();
   input += synapse0x2895420();
   input += synapse0x2894eb0();
   input += synapse0x2894ef0();
   input += synapse0x2895570();
   input += synapse0x28955b0();
   input += synapse0x28955f0();
   input += synapse0x2895630();
   input += synapse0x2895670();
   input += synapse0x28956b0();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x2894d20() {
   double input = input0x2894d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x28956f0() {
   double input = 0.46825;
   input += synapse0x2895a30();
   input += synapse0x2895a70();
   input += synapse0x2895ab0();
   input += synapse0x2895af0();
   input += synapse0x2895b30();
   input += synapse0x2895b70();
   input += synapse0x2895bb0();
   input += synapse0x2895bf0();
   input += synapse0x2895c30();
   input += synapse0x2895c70();
   input += synapse0x2895cb0();
   input += synapse0x2895cf0();
   input += synapse0x2895d30();
   input += synapse0x2895d70();
   input += synapse0x2895db0();
   input += synapse0x2895df0();
   input += synapse0x2895880();
   input += synapse0x28958c0();
   input += synapse0x2895f40();
   input += synapse0x2895f80();
   input += synapse0x2895fc0();
   input += synapse0x2896000();
   input += synapse0x2896040();
   input += synapse0x2896080();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x28956f0() {
   double input = input0x28956f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x28960c0() {
   double input = -0.811259;
   input += synapse0x2896400();
   input += synapse0x2896440();
   input += synapse0x2896480();
   input += synapse0x28964c0();
   input += synapse0x2896500();
   input += synapse0x2896540();
   input += synapse0x2896580();
   input += synapse0x28965c0();
   input += synapse0x2896600();
   input += synapse0x2896640();
   input += synapse0x2896680();
   input += synapse0x28966c0();
   input += synapse0x2896700();
   input += synapse0x2896740();
   input += synapse0x2896780();
   input += synapse0x28967c0();
   input += synapse0x2896250();
   input += synapse0x2896290();
   input += synapse0x2896910();
   input += synapse0x2896950();
   input += synapse0x2896990();
   input += synapse0x28969d0();
   input += synapse0x2896a10();
   input += synapse0x2896a50();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x28960c0() {
   double input = input0x28960c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x2896a90() {
   double input = -4.69503;
   input += synapse0x2896dd0();
   input += synapse0x2896e10();
   input += synapse0x2896e50();
   input += synapse0x2896e90();
   input += synapse0x2896ed0();
   input += synapse0x2896f10();
   input += synapse0x2896f50();
   input += synapse0x2896f90();
   input += synapse0x2896fd0();
   input += synapse0x2897010();
   input += synapse0x2897050();
   input += synapse0x2897090();
   input += synapse0x28970d0();
   input += synapse0x2897110();
   input += synapse0x2897150();
   input += synapse0x2897190();
   input += synapse0x2896c20();
   input += synapse0x2896c60();
   input += synapse0x28972e0();
   input += synapse0x2897320();
   input += synapse0x2897360();
   input += synapse0x28973a0();
   input += synapse0x28973e0();
   input += synapse0x2897420();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x2896a90() {
   double input = input0x2896a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x2897460() {
   double input = -0.810303;
   input += synapse0x28977a0();
   input += synapse0x288bd70();
   input += synapse0x288bdb0();
   input += synapse0x288bdf0();
   input += synapse0x288c040();
   input += synapse0x288c080();
   input += synapse0x288c0c0();
   input += synapse0x288c310();
   input += synapse0x288c350();
   input += synapse0x288c5a0();
   input += synapse0x288c5e0();
   input += synapse0x288c620();
   input += synapse0x288c870();
   input += synapse0x288c8b0();
   input += synapse0x288cb00();
   input += synapse0x288cb40();
   input += synapse0x28975f0();
   input += synapse0x2897630();
   input += synapse0x288cc90();
   input += synapse0x288d1a0();
   input += synapse0x288d1e0();
   input += synapse0x288d220();
   input += synapse0x288d470();
   input += synapse0x288d4b0();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x2897460() {
   double input = input0x2897460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x288d4f0() {
   double input = -0.722252;
   input += synapse0x288cd60();
   input += synapse0x288cda0();
   input += synapse0x288cde0();
   input += synapse0x288ce20();
   input += synapse0x288d7a0();
   input += synapse0x2899af0();
   input += synapse0x2899b30();
   input += synapse0x2899b70();
   input += synapse0x2899bb0();
   input += synapse0x2899bf0();
   input += synapse0x2899c30();
   input += synapse0x2899c70();
   input += synapse0x2899cb0();
   input += synapse0x2899cf0();
   input += synapse0x2899d30();
   input += synapse0x2899d70();
   input += synapse0x288d680();
   input += synapse0x288d6c0();
   input += synapse0x2899ec0();
   input += synapse0x2899f00();
   input += synapse0x2899f40();
   input += synapse0x2899f80();
   input += synapse0x2899fc0();
   input += synapse0x289a000();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x288d4f0() {
   double input = input0x288d4f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x289a040() {
   double input = -0.705058;
   input += synapse0x289a380();
   input += synapse0x289a3c0();
   input += synapse0x289a400();
   input += synapse0x289a440();
   input += synapse0x289a480();
   input += synapse0x289a4c0();
   input += synapse0x289a500();
   input += synapse0x289a540();
   input += synapse0x289a580();
   input += synapse0x289a5c0();
   input += synapse0x289a600();
   input += synapse0x289a640();
   input += synapse0x289a680();
   input += synapse0x289a6c0();
   input += synapse0x289a700();
   input += synapse0x289a740();
   input += synapse0x289a1d0();
   input += synapse0x289a210();
   input += synapse0x289a890();
   input += synapse0x289a8d0();
   input += synapse0x289a910();
   input += synapse0x289a950();
   input += synapse0x289a990();
   input += synapse0x289a9d0();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x289a040() {
   double input = input0x289a040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x289aa10() {
   double input = -1.31269;
   input += synapse0x289ad50();
   input += synapse0x289ad90();
   input += synapse0x289add0();
   input += synapse0x289ae10();
   input += synapse0x289ae50();
   input += synapse0x289ae90();
   input += synapse0x289aed0();
   input += synapse0x289af10();
   input += synapse0x289af50();
   input += synapse0x289af90();
   input += synapse0x289afd0();
   input += synapse0x289b010();
   input += synapse0x289b050();
   input += synapse0x289b090();
   input += synapse0x289b0d0();
   input += synapse0x289b110();
   input += synapse0x289aba0();
   input += synapse0x289abe0();
   input += synapse0x289b260();
   input += synapse0x289b2a0();
   input += synapse0x289b2e0();
   input += synapse0x289b320();
   input += synapse0x289b360();
   input += synapse0x289b3a0();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x289aa10() {
   double input = input0x289aa10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x289b3e0() {
   double input = 0.94983;
   input += synapse0x289b720();
   input += synapse0x289b760();
   input += synapse0x289b7a0();
   input += synapse0x289b7e0();
   input += synapse0x289b820();
   input += synapse0x289b860();
   input += synapse0x289b8a0();
   input += synapse0x289b8e0();
   input += synapse0x289b920();
   input += synapse0x289b960();
   input += synapse0x289b9a0();
   input += synapse0x289b9e0();
   input += synapse0x289ba20();
   input += synapse0x289ba60();
   input += synapse0x289baa0();
   input += synapse0x289bae0();
   input += synapse0x289b570();
   input += synapse0x289b5b0();
   input += synapse0x289bc30();
   input += synapse0x289bc70();
   input += synapse0x289bcb0();
   input += synapse0x289bcf0();
   input += synapse0x289bd30();
   input += synapse0x289bd70();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x289b3e0() {
   double input = input0x289b3e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x289bdb0() {
   double input = 0.0215917;
   input += synapse0x289c0f0();
   input += synapse0x289c130();
   input += synapse0x289c170();
   input += synapse0x289c1b0();
   input += synapse0x289c1f0();
   input += synapse0x289c230();
   input += synapse0x289c270();
   input += synapse0x289c2b0();
   input += synapse0x289c2f0();
   input += synapse0x289c330();
   input += synapse0x289c370();
   input += synapse0x289c3b0();
   input += synapse0x289c3f0();
   input += synapse0x289c430();
   input += synapse0x289c470();
   input += synapse0x289c4b0();
   input += synapse0x289bf40();
   input += synapse0x289bf80();
   input += synapse0x289c600();
   input += synapse0x289c640();
   input += synapse0x289c680();
   input += synapse0x289c6c0();
   input += synapse0x289c700();
   input += synapse0x289c740();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x289bdb0() {
   double input = input0x289bdb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x289c780() {
   double input = -0.809809;
   input += synapse0x289cac0();
   input += synapse0x289cb00();
   input += synapse0x289cb40();
   input += synapse0x289cb80();
   input += synapse0x289cbc0();
   input += synapse0x289cc00();
   input += synapse0x289cc40();
   input += synapse0x289cc80();
   input += synapse0x289ccc0();
   input += synapse0x289cd00();
   input += synapse0x289cd40();
   input += synapse0x289cd80();
   input += synapse0x289cdc0();
   input += synapse0x289ce00();
   input += synapse0x289ce40();
   input += synapse0x289ce80();
   input += synapse0x289c910();
   input += synapse0x289c950();
   input += synapse0x289cfd0();
   input += synapse0x289d010();
   input += synapse0x289d050();
   input += synapse0x289d090();
   input += synapse0x289d0d0();
   input += synapse0x289d110();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x289c780() {
   double input = input0x289c780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x289d150() {
   double input = 0.448824;
   input += synapse0x289d490();
   input += synapse0x289d4d0();
   input += synapse0x289d510();
   input += synapse0x289d550();
   input += synapse0x289d590();
   input += synapse0x289d5d0();
   input += synapse0x289d610();
   input += synapse0x289d650();
   input += synapse0x289d690();
   input += synapse0x289d6d0();
   input += synapse0x289d710();
   input += synapse0x289d750();
   input += synapse0x289d790();
   input += synapse0x289d7d0();
   input += synapse0x289d810();
   input += synapse0x289d850();
   input += synapse0x289d2e0();
   input += synapse0x289d320();
   input += synapse0x289d9a0();
   input += synapse0x289d9e0();
   input += synapse0x289da20();
   input += synapse0x289da60();
   input += synapse0x289daa0();
   input += synapse0x289dae0();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x289d150() {
   double input = input0x289d150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x289db20() {
   double input = -0.950247;
   input += synapse0x289de60();
   input += synapse0x289dea0();
   input += synapse0x289dee0();
   input += synapse0x289df20();
   input += synapse0x289df60();
   input += synapse0x289dfa0();
   input += synapse0x289dfe0();
   input += synapse0x289e020();
   input += synapse0x289e060();
   input += synapse0x289e0a0();
   input += synapse0x289e0e0();
   input += synapse0x289e120();
   input += synapse0x289e160();
   input += synapse0x289e1a0();
   input += synapse0x289e1e0();
   input += synapse0x289e220();
   input += synapse0x289dcb0();
   input += synapse0x289dcf0();
   input += synapse0x289e370();
   input += synapse0x289e3b0();
   input += synapse0x289e3f0();
   input += synapse0x289e430();
   input += synapse0x289e470();
   input += synapse0x289e4b0();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x289db20() {
   double input = input0x289db20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x289e4f0() {
   double input = 0.227113;
   input += synapse0x2886f60();
   input += synapse0x2886fa0();
   input += synapse0x2886fe0();
   input += synapse0x2887020();
   input += synapse0x2887060();
   input += synapse0x28870a0();
   input += synapse0x28870e0();
   input += synapse0x2887120();
   input += synapse0x289ec40();
   input += synapse0x289ec80();
   input += synapse0x289ecc0();
   input += synapse0x289ed00();
   input += synapse0x289ed40();
   input += synapse0x289ed80();
   input += synapse0x289edc0();
   input += synapse0x289ee00();
   input += synapse0x289e680();
   input += synapse0x289e6c0();
   input += synapse0x289ef50();
   input += synapse0x289ef90();
   input += synapse0x289efd0();
   input += synapse0x289f010();
   input += synapse0x289f050();
   input += synapse0x289f090();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x289e4f0() {
   double input = input0x289e4f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x289f0d0() {
   double input = 1.24374;
   input += synapse0x289f410();
   input += synapse0x289f450();
   input += synapse0x289f490();
   input += synapse0x289f4d0();
   input += synapse0x289f510();
   input += synapse0x289f550();
   input += synapse0x289f590();
   input += synapse0x289f5d0();
   input += synapse0x289f610();
   input += synapse0x289f650();
   input += synapse0x289f690();
   input += synapse0x289f6d0();
   input += synapse0x289f710();
   input += synapse0x289f750();
   input += synapse0x289f790();
   input += synapse0x289f7d0();
   input += synapse0x289f260();
   input += synapse0x289f2a0();
   input += synapse0x289f920();
   input += synapse0x289f960();
   input += synapse0x289f9a0();
   input += synapse0x289f9e0();
   input += synapse0x289fa20();
   input += synapse0x289fa60();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x289f0d0() {
   double input = input0x289f0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x289faa0() {
   double input = -1.24123;
   input += synapse0x289fde0();
   input += synapse0x289fe20();
   input += synapse0x289fe60();
   input += synapse0x289fea0();
   input += synapse0x289fee0();
   input += synapse0x289ff20();
   input += synapse0x289ff60();
   input += synapse0x289ffa0();
   input += synapse0x289ffe0();
   input += synapse0x28a0020();
   input += synapse0x28a0060();
   input += synapse0x28a00a0();
   input += synapse0x28a00e0();
   input += synapse0x28a0120();
   input += synapse0x28a0160();
   input += synapse0x28a01a0();
   input += synapse0x289fc30();
   input += synapse0x289fc70();
   input += synapse0x28907a0();
   input += synapse0x28907e0();
   input += synapse0x2890820();
   input += synapse0x2890860();
   input += synapse0x28908a0();
   input += synapse0x28908e0();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x289faa0() {
   double input = input0x289faa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x2890920() {
   double input = 0.421514;
   input += synapse0x2890c60();
   input += synapse0x2890ca0();
   input += synapse0x2890ce0();
   input += synapse0x2890d20();
   input += synapse0x2890d60();
   input += synapse0x2890da0();
   input += synapse0x2890de0();
   input += synapse0x2890e20();
   input += synapse0x2890e60();
   input += synapse0x2890ea0();
   input += synapse0x2890ee0();
   input += synapse0x2890f20();
   input += synapse0x2890f60();
   input += synapse0x2890fa0();
   input += synapse0x2890fe0();
   input += synapse0x2891020();
   input += synapse0x2890ab0();
   input += synapse0x2890af0();
   input += synapse0x2891170();
   input += synapse0x28911b0();
   input += synapse0x28911f0();
   input += synapse0x2891230();
   input += synapse0x2891270();
   input += synapse0x28912b0();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x2890920() {
   double input = input0x2890920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x28912f0() {
   double input = 3.85026;
   input += synapse0x2891630();
   input += synapse0x2891670();
   input += synapse0x28916b0();
   input += synapse0x28916f0();
   input += synapse0x2891730();
   input += synapse0x2891770();
   input += synapse0x28917b0();
   input += synapse0x28917f0();
   input += synapse0x2891830();
   input += synapse0x2891870();
   input += synapse0x28918b0();
   input += synapse0x28918f0();
   input += synapse0x2891930();
   input += synapse0x2891970();
   input += synapse0x28919b0();
   input += synapse0x28919f0();
   input += synapse0x2891480();
   input += synapse0x28914c0();
   input += synapse0x2891b40();
   input += synapse0x2891b80();
   input += synapse0x2891bc0();
   input += synapse0x2891c00();
   input += synapse0x2891c40();
   input += synapse0x2891c80();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x28912f0() {
   double input = input0x28912f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x2891cc0() {
   double input = -0.819611;
   input += synapse0x2892000();
   input += synapse0x2892040();
   input += synapse0x2892080();
   input += synapse0x28920c0();
   input += synapse0x2892100();
   input += synapse0x2892140();
   input += synapse0x2892180();
   input += synapse0x28921c0();
   input += synapse0x2892200();
   input += synapse0x2892240();
   input += synapse0x2892280();
   input += synapse0x28922c0();
   input += synapse0x2892300();
   input += synapse0x2892340();
   input += synapse0x2892380();
   input += synapse0x28923c0();
   input += synapse0x2891e50();
   input += synapse0x2891e90();
   input += synapse0x2892510();
   input += synapse0x2892550();
   input += synapse0x2892590();
   input += synapse0x28925d0();
   input += synapse0x2892610();
   input += synapse0x2892650();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x2891cc0() {
   double input = input0x2891cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x28a4300() {
   double input = 0.471693;
   input += synapse0x28a4520();
   input += synapse0x28a4560();
   input += synapse0x28a45a0();
   input += synapse0x28a45e0();
   input += synapse0x28a4620();
   input += synapse0x28a4660();
   input += synapse0x28a46a0();
   input += synapse0x28a46e0();
   input += synapse0x28a4720();
   input += synapse0x28a4760();
   input += synapse0x28a47a0();
   input += synapse0x28a47e0();
   input += synapse0x28a4820();
   input += synapse0x28a4860();
   input += synapse0x28a48a0();
   input += synapse0x28a48e0();
   input += synapse0x2892690();
   input += synapse0x28926d0();
   input += synapse0x28a4a30();
   input += synapse0x28a4a70();
   input += synapse0x28a4ab0();
   input += synapse0x28a4af0();
   input += synapse0x28a4b30();
   input += synapse0x28a4b70();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x28a4300() {
   double input = input0x28a4300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x28a4bb0() {
   double input = 1.51518;
   input += synapse0x28a4ef0();
   input += synapse0x28a4f30();
   input += synapse0x28a4f70();
   input += synapse0x28a4fb0();
   input += synapse0x28a4ff0();
   input += synapse0x28a5030();
   input += synapse0x28a5070();
   input += synapse0x28a50b0();
   input += synapse0x28a50f0();
   input += synapse0x28a5130();
   input += synapse0x28a5170();
   input += synapse0x28a51b0();
   input += synapse0x28a51f0();
   input += synapse0x28a5230();
   input += synapse0x28a5270();
   input += synapse0x28a52b0();
   input += synapse0x28a4d40();
   input += synapse0x28a4d80();
   input += synapse0x28a5400();
   input += synapse0x28a5440();
   input += synapse0x28a5480();
   input += synapse0x28a54c0();
   input += synapse0x28a5500();
   input += synapse0x28a5540();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x28a4bb0() {
   double input = input0x28a4bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x28a5580() {
   double input = 3.32711;
   input += synapse0x28a58c0();
   input += synapse0x28a5900();
   input += synapse0x28a5940();
   input += synapse0x28a5980();
   input += synapse0x28a59c0();
   input += synapse0x28a5a00();
   input += synapse0x28a5a40();
   input += synapse0x28a5a80();
   input += synapse0x28a5ac0();
   input += synapse0x28a5b00();
   input += synapse0x28a5b40();
   input += synapse0x28a5b80();
   input += synapse0x28a5bc0();
   input += synapse0x28a5c00();
   input += synapse0x28a5c40();
   input += synapse0x28a5c80();
   input += synapse0x28a5710();
   input += synapse0x28a5750();
   input += synapse0x28a5dd0();
   input += synapse0x28a5e10();
   input += synapse0x28a5e50();
   input += synapse0x28a5e90();
   input += synapse0x28a5ed0();
   input += synapse0x28a5f10();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x28a5580() {
   double input = input0x28a5580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x28a5f50() {
   double input = -1.33146;
   input += synapse0x28a6290();
   input += synapse0x28a62d0();
   input += synapse0x28a6310();
   input += synapse0x28a6350();
   input += synapse0x28a6390();
   input += synapse0x28a63d0();
   input += synapse0x28a6410();
   input += synapse0x28a6450();
   input += synapse0x28a6490();
   input += synapse0x28a64d0();
   input += synapse0x28a6510();
   input += synapse0x28a6550();
   input += synapse0x28a6590();
   input += synapse0x28a65d0();
   input += synapse0x28a6610();
   input += synapse0x28a6650();
   input += synapse0x28a60e0();
   input += synapse0x28a6120();
   input += synapse0x28a67a0();
   input += synapse0x28a67e0();
   input += synapse0x28a6820();
   input += synapse0x28a6860();
   input += synapse0x28a68a0();
   input += synapse0x28a68e0();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x28a5f50() {
   double input = input0x28a5f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x28ad150() {
   double input = -0.260532;
   input += synapse0x2882e80();
   input += synapse0x2882ec0();
   input += synapse0x2884390();
   input += synapse0x28843d0();
   input += synapse0x2884d60();
   input += synapse0x2884da0();
   input += synapse0x2885b30();
   input += synapse0x2885b70();
   input += synapse0x2886500();
   input += synapse0x2886540();
   input += synapse0x2886ed0();
   input += synapse0x2886f10();
   input += synapse0x28879b0();
   input += synapse0x28879f0();
   input += synapse0x2888380();
   input += synapse0x28883c0();
   input += synapse0x2885460();
   input += synapse0x28854a0();
   input += synapse0x2889f30();
   input += synapse0x2889f70();
   input += synapse0x288a900();
   input += synapse0x288a940();
   input += synapse0x288b2d0();
   input += synapse0x288b310();
   input += synapse0x288bca0();
   input += synapse0x288bce0();
   input += synapse0x287fe10();
   input += synapse0x287fe50();
   input += synapse0x288dd90();
   input += synapse0x288ddd0();
   input += synapse0x288e760();
   input += synapse0x288e7a0();
   input += synapse0x288f130();
   input += synapse0x288f170();
   input += synapse0x288fb00();
   input += synapse0x288fb40();
   input += synapse0x28904d0();
   input += synapse0x2890510();
   input += synapse0x2889020();
   input += synapse0x2889060();
   input += synapse0x28928d0();
   input += synapse0x2892910();
   input += synapse0x2893260();
   input += synapse0x28932a0();
   input += synapse0x2893c30();
   input += synapse0x2893c70();
   input += synapse0x2894600();
   input += synapse0x2894640();
   input += synapse0x2894fd0();
   input += synapse0x2895010();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x28ad150() {
   double input = input0x28ad150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x28ad4f0() {
   double input = -1.14059;
   input += synapse0x2897710();
   input += synapse0x2897750();
   input += synapse0x288ccd0();
   input += synapse0x288cd10();
   input += synapse0x289a2f0();
   input += synapse0x289a330();
   input += synapse0x289acc0();
   input += synapse0x289ad00();
   input += synapse0x289b690();
   input += synapse0x289b6d0();
   input += synapse0x289c060();
   input += synapse0x289c0a0();
   input += synapse0x289ca30();
   input += synapse0x289ca70();
   input += synapse0x289d400();
   input += synapse0x289d440();
   input += synapse0x289ddd0();
   input += synapse0x289de10();
   input += synapse0x289e7a0();
   input += synapse0x289e7e0();
   input += synapse0x289f380();
   input += synapse0x289f3c0();
   input += synapse0x289fd50();
   input += synapse0x289fd90();
   input += synapse0x2890bd0();
   input += synapse0x2890c10();
   input += synapse0x28915a0();
   input += synapse0x28915e0();
   input += synapse0x2891f70();
   input += synapse0x2891fb0();
   input += synapse0x28a4490();
   input += synapse0x28a44d0();
   input += synapse0x28a4e60();
   input += synapse0x28a4ea0();
   input += synapse0x28a5830();
   input += synapse0x28a5870();
   input += synapse0x28a6200();
   input += synapse0x28a6240();
   input += synapse0x28820f0();
   input += synapse0x2882130();
   input += synapse0x28959a0();
   input += synapse0x28959e0();
   input += synapse0x28a6920();
   input += synapse0x28a6960();
   input += synapse0x28a69a0();
   input += synapse0x28a69e0();
   input += synapse0x28ad890();
   input += synapse0x28ad8d0();
   input += synapse0x28ad910();
   input += synapse0x28ad950();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x28ad4f0() {
   double input = input0x28ad4f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x28ad990() {
   double input = -1.50701;
   input += synapse0x28adcd0();
   input += synapse0x28add10();
   input += synapse0x28add50();
   input += synapse0x28add90();
   input += synapse0x28addd0();
   input += synapse0x28ade10();
   input += synapse0x28ade50();
   input += synapse0x28ade90();
   input += synapse0x28aded0();
   input += synapse0x28adf10();
   input += synapse0x28adf50();
   input += synapse0x28adf90();
   input += synapse0x28adfd0();
   input += synapse0x28ae010();
   input += synapse0x28ae050();
   input += synapse0x28ae090();
   input += synapse0x28adb20();
   input += synapse0x28adb60();
   input += synapse0x28ae1e0();
   input += synapse0x28ae220();
   input += synapse0x28ae260();
   input += synapse0x28ae2a0();
   input += synapse0x28ae2e0();
   input += synapse0x28ae320();
   input += synapse0x28ae360();
   input += synapse0x28ae3a0();
   input += synapse0x28ae3e0();
   input += synapse0x28ae420();
   input += synapse0x28ae460();
   input += synapse0x28ae4a0();
   input += synapse0x28ae4e0();
   input += synapse0x28ae520();
   input += synapse0x28ae0d0();
   input += synapse0x28ae110();
   input += synapse0x28ae150();
   input += synapse0x28ae190();
   input += synapse0x28ae770();
   input += synapse0x28ae7b0();
   input += synapse0x28ae7f0();
   input += synapse0x28ae830();
   input += synapse0x28ae870();
   input += synapse0x28ae8b0();
   input += synapse0x28ae8f0();
   input += synapse0x28ae930();
   input += synapse0x28ae970();
   input += synapse0x28ae9b0();
   input += synapse0x28ae9f0();
   input += synapse0x28aea30();
   input += synapse0x28aea70();
   input += synapse0x28aeab0();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x28ad990() {
   double input = input0x28ad990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x28aeaf0() {
   double input = 0.505022;
   input += synapse0x28aee30();
   input += synapse0x28aee70();
   input += synapse0x28aeeb0();
   input += synapse0x28aeef0();
   input += synapse0x28aef30();
   input += synapse0x28aef70();
   input += synapse0x28aefb0();
   input += synapse0x28aeff0();
   input += synapse0x28af030();
   input += synapse0x28af070();
   input += synapse0x28af0b0();
   input += synapse0x28af0f0();
   input += synapse0x28af130();
   input += synapse0x28af170();
   input += synapse0x28af1b0();
   input += synapse0x28af1f0();
   input += synapse0x28aec80();
   input += synapse0x28aecc0();
   input += synapse0x28af340();
   input += synapse0x28af380();
   input += synapse0x28af3c0();
   input += synapse0x28af400();
   input += synapse0x28af440();
   input += synapse0x28af480();
   input += synapse0x28af4c0();
   input += synapse0x28af500();
   input += synapse0x28af540();
   input += synapse0x28af580();
   input += synapse0x28af5c0();
   input += synapse0x28af600();
   input += synapse0x28af640();
   input += synapse0x28af680();
   input += synapse0x28af230();
   input += synapse0x28af270();
   input += synapse0x28af2b0();
   input += synapse0x28af2f0();
   input += synapse0x28af8d0();
   input += synapse0x28af910();
   input += synapse0x28af950();
   input += synapse0x28af990();
   input += synapse0x28af9d0();
   input += synapse0x28afa10();
   input += synapse0x28afa50();
   input += synapse0x28afa90();
   input += synapse0x28afad0();
   input += synapse0x28afb10();
   input += synapse0x28afb50();
   input += synapse0x28afb90();
   input += synapse0x28afbd0();
   input += synapse0x28afc10();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x28aeaf0() {
   double input = input0x28aeaf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x28afc50() {
   double input = 2.19547;
   input += synapse0x28aff90();
   input += synapse0x28affd0();
   input += synapse0x28b0010();
   input += synapse0x28b0050();
   input += synapse0x28b0090();
   input += synapse0x28b00d0();
   input += synapse0x28b0110();
   input += synapse0x28b0150();
   input += synapse0x28b0190();
   input += synapse0x28b01d0();
   input += synapse0x28b0210();
   input += synapse0x28b0250();
   input += synapse0x28b0290();
   input += synapse0x28b02d0();
   input += synapse0x28b0310();
   input += synapse0x28b0350();
   input += synapse0x28afde0();
   input += synapse0x28afe20();
   input += synapse0x28b04a0();
   input += synapse0x28b04e0();
   input += synapse0x28b0520();
   input += synapse0x28b0560();
   input += synapse0x28b05a0();
   input += synapse0x28b05e0();
   input += synapse0x28b0620();
   input += synapse0x28b0660();
   input += synapse0x28b06a0();
   input += synapse0x28b06e0();
   input += synapse0x28b0720();
   input += synapse0x28b0760();
   input += synapse0x28b07a0();
   input += synapse0x28b07e0();
   input += synapse0x28b0390();
   input += synapse0x28b03d0();
   input += synapse0x28b0410();
   input += synapse0x28b0450();
   input += synapse0x28b0a30();
   input += synapse0x28b0a70();
   input += synapse0x28b0ab0();
   input += synapse0x28b0af0();
   input += synapse0x28b0b30();
   input += synapse0x28b0b70();
   input += synapse0x28b0bb0();
   input += synapse0x28b0bf0();
   input += synapse0x28b0c30();
   input += synapse0x28b0c70();
   input += synapse0x28b0cb0();
   input += synapse0x28b0cf0();
   input += synapse0x28b0d30();
   input += synapse0x28b0d70();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x28afc50() {
   double input = input0x28afc50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2m::input0x28b0db0() {
   double input = -1.39319;
   input += synapse0x2881e90();
   input += synapse0x28b0fd0();
   input += synapse0x28b1010();
   input += synapse0x28b1050();
   input += synapse0x28b1090();
   return input;
}

double NNfunction_nn_chi2_charge2m::neuron0x28b0db0() {
   double input = input0x28b0db0();
   return (input * 1)+0;
}

double NNfunction_nn_chi2_charge2m::synapse0x2646820() {
   return (neuron0x287ce70()*-0.300734);
}

double NNfunction_nn_chi2_charge2m::synapse0x287cd30() {
   return (neuron0x287d1b0()*-2.26899);
}

double NNfunction_nn_chi2_charge2m::synapse0x287cd70() {
   return (neuron0x287d4f0()*1.07875);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882180() {
   return (neuron0x287d830()*-0.0930668);
}

double NNfunction_nn_chi2_charge2m::synapse0x28821c0() {
   return (neuron0x287db70()*-0.716254);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882200() {
   return (neuron0x287deb0()*-0.645997);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882240() {
   return (neuron0x287e1f0()*-0.590292);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882280() {
   return (neuron0x287e530()*0.341032);
}

double NNfunction_nn_chi2_charge2m::synapse0x28822c0() {
   return (neuron0x287e870()*-0.578456);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882300() {
   return (neuron0x287ebb0()*0.601899);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882340() {
   return (neuron0x287eef0()*-0.282339);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882380() {
   return (neuron0x287f230()*-0.930554);
}

double NNfunction_nn_chi2_charge2m::synapse0x28823c0() {
   return (neuron0x287f570()*0.228138);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882400() {
   return (neuron0x287f8b0()*-0.104812);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882440() {
   return (neuron0x287fbf0()*0.105325);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882480() {
   return (neuron0x287ff30()*0.448953);
}

double NNfunction_nn_chi2_charge2m::synapse0x287cca0() {
   return (neuron0x2880270()*-0.371639);
}

double NNfunction_nn_chi2_charge2m::synapse0x287cce0() {
   return (neuron0x28807d0()*-0.677923);
}

double NNfunction_nn_chi2_charge2m::synapse0x2638010() {
   return (neuron0x28809f0()*0.0802565);
}

double NNfunction_nn_chi2_charge2m::synapse0x2638050() {
   return (neuron0x2880d30()*-0.237135);
}

double NNfunction_nn_chi2_charge2m::synapse0x28826e0() {
   return (neuron0x2881070()*-0.0636647);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882720() {
   return (neuron0x28813b0()*0.0813371);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882760() {
   return (neuron0x28816f0()*0.241973);
}

double NNfunction_nn_chi2_charge2m::synapse0x28827a0() {
   return (neuron0x2881a30()*0.283787);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882b20() {
   return (neuron0x287ce70()*0.0172746);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882b60() {
   return (neuron0x287d1b0()*0.201801);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882ba0() {
   return (neuron0x287d4f0()*-0.116585);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882be0() {
   return (neuron0x287d830()*-0.00428675);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882c20() {
   return (neuron0x287db70()*-0.0154395);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882c60() {
   return (neuron0x287deb0()*-0.0246355);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882ca0() {
   return (neuron0x287e1f0()*0.00710028);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882ce0() {
   return (neuron0x287e530()*-0.0176449);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882d20() {
   return (neuron0x287e870()*-0.00731721);
}

double NNfunction_nn_chi2_charge2m::synapse0x28825d0() {
   return (neuron0x287ebb0()*0.0239101);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882610() {
   return (neuron0x287eef0()*0.00110962);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882650() {
   return (neuron0x287f230()*0.140928);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882690() {
   return (neuron0x287f570()*0.0697395);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882f70() {
   return (neuron0x287f8b0()*-0.010601);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882fb0() {
   return (neuron0x287fbf0()*-0.0141019);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882ff0() {
   return (neuron0x287ff30()*-0.00667317);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882970() {
   return (neuron0x2880270()*-0.0262573);
}

double NNfunction_nn_chi2_charge2m::synapse0x28829b0() {
   return (neuron0x28807d0()*0.000419904);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883140() {
   return (neuron0x28809f0()*-0.00326714);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883180() {
   return (neuron0x2880d30()*0.0437084);
}

double NNfunction_nn_chi2_charge2m::synapse0x28831c0() {
   return (neuron0x2881070()*-0.0198105);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883200() {
   return (neuron0x28813b0()*-0.00713979);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883240() {
   return (neuron0x28816f0()*-0.021245);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883280() {
   return (neuron0x2881a30()*-2.44918);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883600() {
   return (neuron0x287ce70()*0.0473981);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883640() {
   return (neuron0x287d1b0()*0.00185278);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883680() {
   return (neuron0x287d4f0()*-1.89318);
}

double NNfunction_nn_chi2_charge2m::synapse0x28836c0() {
   return (neuron0x287d830()*-0.0009617);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883700() {
   return (neuron0x287db70()*-0.00401486);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883740() {
   return (neuron0x287deb0()*-0.00447888);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883780() {
   return (neuron0x287e1f0()*-0.0131357);
}

double NNfunction_nn_chi2_charge2m::synapse0x28837c0() {
   return (neuron0x287e530()*0.0119009);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883800() {
   return (neuron0x287e870()*0.00387634);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883840() {
   return (neuron0x287ebb0()*0.00712984);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883880() {
   return (neuron0x287eef0()*0.000154145);
}

double NNfunction_nn_chi2_charge2m::synapse0x28838c0() {
   return (neuron0x287f230()*0.00370225);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883900() {
   return (neuron0x287f570()*-0.00152229);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883940() {
   return (neuron0x287f8b0()*0.00190826);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883980() {
   return (neuron0x287fbf0()*0.00280309);
}

double NNfunction_nn_chi2_charge2m::synapse0x28839c0() {
   return (neuron0x287ff30()*0.00648231);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883450() {
   return (neuron0x2880270()*0.00364463);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883490() {
   return (neuron0x28807d0()*0.000902383);
}

double NNfunction_nn_chi2_charge2m::synapse0x2645f30() {
   return (neuron0x28809f0()*0.00459483);
}

double NNfunction_nn_chi2_charge2m::synapse0x2645f70() {
   return (neuron0x2880d30()*-0.00301605);
}

double NNfunction_nn_chi2_charge2m::synapse0x286bf00() {
   return (neuron0x2881070()*-0.00927563);
}

double NNfunction_nn_chi2_charge2m::synapse0x286bf40() {
   return (neuron0x28813b0()*-0.00171307);
}

double NNfunction_nn_chi2_charge2m::synapse0x286bf80() {
   return (neuron0x28816f0()*-0.00333907);
}

double NNfunction_nn_chi2_charge2m::synapse0x287cdb0() {
   return (neuron0x2881a30()*-3.38395);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882f10() {
   return (neuron0x287ce70()*-0.0587111);
}

double NNfunction_nn_chi2_charge2m::synapse0x287cdf0() {
   return (neuron0x287d1b0()*3.30441);
}

double NNfunction_nn_chi2_charge2m::synapse0x287ce30() {
   return (neuron0x287d4f0()*1.10667);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883b10() {
   return (neuron0x287d830()*0.0526408);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883b50() {
   return (neuron0x287db70()*0.0247559);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883b90() {
   return (neuron0x287deb0()*0.0241481);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883bd0() {
   return (neuron0x287e1f0()*0.234456);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883c10() {
   return (neuron0x287e530()*0.00712901);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883c50() {
   return (neuron0x287e870()*0.144866);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883c90() {
   return (neuron0x287ebb0()*0.0325807);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883cd0() {
   return (neuron0x287eef0()*0.102153);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883d10() {
   return (neuron0x287f230()*0.261011);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883d50() {
   return (neuron0x287f570()*0.191073);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883d90() {
   return (neuron0x287f8b0()*-0.0750221);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883dd0() {
   return (neuron0x287fbf0()*0.0507857);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883e10() {
   return (neuron0x287ff30()*0.232014);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882d60() {
   return (neuron0x2880270()*-0.103292);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882da0() {
   return (neuron0x28807d0()*-0.149099);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883f60() {
   return (neuron0x28809f0()*0.100272);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883fa0() {
   return (neuron0x2880d30()*0.485045);
}

double NNfunction_nn_chi2_charge2m::synapse0x2883fe0() {
   return (neuron0x2881070()*-0.324082);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884020() {
   return (neuron0x28813b0()*-0.0470299);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884060() {
   return (neuron0x28816f0()*0.168474);
}

double NNfunction_nn_chi2_charge2m::synapse0x28840a0() {
   return (neuron0x2881a30()*0.364317);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884420() {
   return (neuron0x287ce70()*-0.252368);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884460() {
   return (neuron0x287d1b0()*1.12522);
}

double NNfunction_nn_chi2_charge2m::synapse0x28844a0() {
   return (neuron0x287d4f0()*1.17777);
}

double NNfunction_nn_chi2_charge2m::synapse0x28844e0() {
   return (neuron0x287d830()*-0.342783);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884520() {
   return (neuron0x287db70()*-0.56688);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884560() {
   return (neuron0x287deb0()*-0.310189);
}

double NNfunction_nn_chi2_charge2m::synapse0x28845a0() {
   return (neuron0x287e1f0()*-0.182733);
}

double NNfunction_nn_chi2_charge2m::synapse0x28845e0() {
   return (neuron0x287e530()*-0.149778);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884620() {
   return (neuron0x287e870()*-0.47266);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884660() {
   return (neuron0x287ebb0()*0.285386);
}

double NNfunction_nn_chi2_charge2m::synapse0x28846a0() {
   return (neuron0x287eef0()*-0.169361);
}

double NNfunction_nn_chi2_charge2m::synapse0x28846e0() {
   return (neuron0x287f230()*-1.62457);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884720() {
   return (neuron0x287f570()*0.468339);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884760() {
   return (neuron0x287f8b0()*-0.117687);
}

double NNfunction_nn_chi2_charge2m::synapse0x28847a0() {
   return (neuron0x287fbf0()*0.0469616);
}

double NNfunction_nn_chi2_charge2m::synapse0x28847e0() {
   return (neuron0x287ff30()*-0.504876);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884270() {
   return (neuron0x2880270()*-0.135044);
}

double NNfunction_nn_chi2_charge2m::synapse0x28842b0() {
   return (neuron0x28807d0()*-0.248253);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884930() {
   return (neuron0x28809f0()*0.0524193);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884970() {
   return (neuron0x2880d30()*-0.40948);
}

double NNfunction_nn_chi2_charge2m::synapse0x28849b0() {
   return (neuron0x2881070()*0.0985984);
}

double NNfunction_nn_chi2_charge2m::synapse0x28849f0() {
   return (neuron0x28813b0()*0.040874);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884a30() {
   return (neuron0x28816f0()*0.443221);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884a70() {
   return (neuron0x2881a30()*0.296844);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884df0() {
   return (neuron0x287ce70()*-0.143521);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884e30() {
   return (neuron0x287d1b0()*0.728416);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884e70() {
   return (neuron0x287d4f0()*2.2273);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884eb0() {
   return (neuron0x287d830()*-0.234723);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884ef0() {
   return (neuron0x287db70()*-0.260031);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884f30() {
   return (neuron0x287deb0()*-0.230072);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884f70() {
   return (neuron0x287e1f0()*0.18635);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884fb0() {
   return (neuron0x287e530()*-0.351959);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884ff0() {
   return (neuron0x287e870()*-0.151099);
}

double NNfunction_nn_chi2_charge2m::synapse0x2646280() {
   return (neuron0x287ebb0()*-0.725458);
}

double NNfunction_nn_chi2_charge2m::synapse0x26462c0() {
   return (neuron0x287eef0()*0.246882);
}

double NNfunction_nn_chi2_charge2m::synapse0x2646300() {
   return (neuron0x287f230()*-2.90611);
}

double NNfunction_nn_chi2_charge2m::synapse0x2646340() {
   return (neuron0x287f570()*0.103592);
}

double NNfunction_nn_chi2_charge2m::synapse0x2646380() {
   return (neuron0x287f8b0()*-0.76472);
}

double NNfunction_nn_chi2_charge2m::synapse0x26463c0() {
   return (neuron0x287fbf0()*-0.243316);
}

double NNfunction_nn_chi2_charge2m::synapse0x2646400() {
   return (neuron0x287ff30()*-0.411584);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884c40() {
   return (neuron0x2880270()*0.0699498);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884c80() {
   return (neuron0x28807d0()*-0.468683);
}

double NNfunction_nn_chi2_charge2m::synapse0x2646550() {
   return (neuron0x28809f0()*0.440565);
}

double NNfunction_nn_chi2_charge2m::synapse0x2646590() {
   return (neuron0x2880d30()*-0.171213);
}

double NNfunction_nn_chi2_charge2m::synapse0x26465d0() {
   return (neuron0x2881070()*0.233026);
}

double NNfunction_nn_chi2_charge2m::synapse0x2646610() {
   return (neuron0x28813b0()*0.185245);
}

double NNfunction_nn_chi2_charge2m::synapse0x2646650() {
   return (neuron0x28816f0()*0.133155);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885840() {
   return (neuron0x2881a30()*-0.0941717);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885bc0() {
   return (neuron0x287ce70()*0.0115721);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885c00() {
   return (neuron0x287d1b0()*-0.0186638);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885c40() {
   return (neuron0x287d4f0()*2.04025);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885c80() {
   return (neuron0x287d830()*-0.0118854);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885cc0() {
   return (neuron0x287db70()*0.0150902);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885d00() {
   return (neuron0x287deb0()*0.0282528);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885d40() {
   return (neuron0x287e1f0()*0.00376619);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885d80() {
   return (neuron0x287e530()*0.0222517);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885dc0() {
   return (neuron0x287e870()*-0.00473475);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885e00() {
   return (neuron0x287ebb0()*0.00356942);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885e40() {
   return (neuron0x287eef0()*0.0162053);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885e80() {
   return (neuron0x287f230()*-0.000300557);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885ec0() {
   return (neuron0x287f570()*0.0104838);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885f00() {
   return (neuron0x287f8b0()*0.0329287);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885f40() {
   return (neuron0x287fbf0()*-0.00689814);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885f80() {
   return (neuron0x287ff30()*-0.0190325);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885a10() {
   return (neuron0x2880270()*-0.0437543);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885a50() {
   return (neuron0x28807d0()*-0.020558);
}

double NNfunction_nn_chi2_charge2m::synapse0x28860d0() {
   return (neuron0x28809f0()*-0.0241827);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886110() {
   return (neuron0x2880d30()*0.0159337);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886150() {
   return (neuron0x2881070()*0.0199909);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886190() {
   return (neuron0x28813b0()*-0.00855658);
}

double NNfunction_nn_chi2_charge2m::synapse0x28861d0() {
   return (neuron0x28816f0()*-0.0147112);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886210() {
   return (neuron0x2881a30()*-3.68612);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886590() {
   return (neuron0x287ce70()*0.0337685);
}

double NNfunction_nn_chi2_charge2m::synapse0x28865d0() {
   return (neuron0x287d1b0()*0.00326738);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886610() {
   return (neuron0x287d4f0()*-1.82112);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886650() {
   return (neuron0x287d830()*-0.0293027);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886690() {
   return (neuron0x287db70()*-0.103598);
}

double NNfunction_nn_chi2_charge2m::synapse0x28866d0() {
   return (neuron0x287deb0()*0.0149317);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886710() {
   return (neuron0x287e1f0()*0.113169);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886750() {
   return (neuron0x287e530()*0.0881255);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886790() {
   return (neuron0x287e870()*0.174772);
}

double NNfunction_nn_chi2_charge2m::synapse0x28867d0() {
   return (neuron0x287ebb0()*0.0825657);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886810() {
   return (neuron0x287eef0()*-0.0116743);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886850() {
   return (neuron0x287f230()*0.870216);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886890() {
   return (neuron0x287f570()*0.186351);
}

double NNfunction_nn_chi2_charge2m::synapse0x28868d0() {
   return (neuron0x287f8b0()*0.0869909);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886910() {
   return (neuron0x287fbf0()*-0.0987898);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886950() {
   return (neuron0x287ff30()*-0.0917476);
}

double NNfunction_nn_chi2_charge2m::synapse0x28863e0() {
   return (neuron0x2880270()*0.140326);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886420() {
   return (neuron0x28807d0()*0.182854);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886aa0() {
   return (neuron0x28809f0()*0.127112);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886ae0() {
   return (neuron0x2880d30()*0.0819315);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886b20() {
   return (neuron0x2881070()*-0.142398);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886b60() {
   return (neuron0x28813b0()*0.0101977);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886ba0() {
   return (neuron0x28816f0()*0.042049);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886be0() {
   return (neuron0x2881a30()*-0.702164);
}

double NNfunction_nn_chi2_charge2m::synapse0x28806c0() {
   return (neuron0x287ce70()*-0.586327);
}

double NNfunction_nn_chi2_charge2m::synapse0x2880700() {
   return (neuron0x287d1b0()*0.00276539);
}

double NNfunction_nn_chi2_charge2m::synapse0x2880740() {
   return (neuron0x287d4f0()*-1.27616);
}

double NNfunction_nn_chi2_charge2m::synapse0x2880780() {
   return (neuron0x287d830()*0.228618);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887170() {
   return (neuron0x287db70()*0.123049);
}

double NNfunction_nn_chi2_charge2m::synapse0x28871b0() {
   return (neuron0x287deb0()*0.345576);
}

double NNfunction_nn_chi2_charge2m::synapse0x28871f0() {
   return (neuron0x287e1f0()*0.272231);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887230() {
   return (neuron0x287e530()*0.226131);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887270() {
   return (neuron0x287e870()*-0.150059);
}

double NNfunction_nn_chi2_charge2m::synapse0x28872b0() {
   return (neuron0x287ebb0()*-0.063393);
}

double NNfunction_nn_chi2_charge2m::synapse0x28872f0() {
   return (neuron0x287eef0()*-0.400873);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887330() {
   return (neuron0x287f230()*0.647092);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887370() {
   return (neuron0x287f570()*0.692674);
}

double NNfunction_nn_chi2_charge2m::synapse0x28873b0() {
   return (neuron0x287f8b0()*-0.363276);
}

double NNfunction_nn_chi2_charge2m::synapse0x28873f0() {
   return (neuron0x287fbf0()*-0.181088);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887430() {
   return (neuron0x287ff30()*-0.314274);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886db0() {
   return (neuron0x2880270()*0.198447);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886df0() {
   return (neuron0x28807d0()*0.176354);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887580() {
   return (neuron0x28809f0()*0.476489);
}

double NNfunction_nn_chi2_charge2m::synapse0x28875c0() {
   return (neuron0x2880d30()*-0.37938);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887600() {
   return (neuron0x2881070()*-0.0978769);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887640() {
   return (neuron0x28813b0()*-0.360124);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887680() {
   return (neuron0x28816f0()*0.496864);
}

double NNfunction_nn_chi2_charge2m::synapse0x28876c0() {
   return (neuron0x2881a30()*-2.19384);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887a40() {
   return (neuron0x287ce70()*-0.11925);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887a80() {
   return (neuron0x287d1b0()*-0.000905157);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887ac0() {
   return (neuron0x287d4f0()*0.648569);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887b00() {
   return (neuron0x287d830()*-0.0481435);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887b40() {
   return (neuron0x287db70()*-0.0811643);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887b80() {
   return (neuron0x287deb0()*-0.0592073);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887bc0() {
   return (neuron0x287e1f0()*-0.0222054);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887c00() {
   return (neuron0x287e530()*-0.109908);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887c40() {
   return (neuron0x287e870()*0.0195097);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887c80() {
   return (neuron0x287ebb0()*0.0189504);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887cc0() {
   return (neuron0x287eef0()*-0.00581614);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887d00() {
   return (neuron0x287f230()*0.107339);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887d40() {
   return (neuron0x287f570()*-0.0785491);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887d80() {
   return (neuron0x287f8b0()*-0.00589955);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887dc0() {
   return (neuron0x287fbf0()*-0.0611002);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887e00() {
   return (neuron0x287ff30()*-0.0225924);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887890() {
   return (neuron0x2880270()*-0.00320836);
}

double NNfunction_nn_chi2_charge2m::synapse0x28878d0() {
   return (neuron0x28807d0()*0.0231454);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887f50() {
   return (neuron0x28809f0()*0.0360455);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887f90() {
   return (neuron0x2880d30()*0.0686503);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887fd0() {
   return (neuron0x2881070()*-0.0256365);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888010() {
   return (neuron0x28813b0()*0.0133715);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888050() {
   return (neuron0x28816f0()*0.0395057);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888090() {
   return (neuron0x2881a30()*-1.4195);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888410() {
   return (neuron0x287ce70()*-0.010715);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888450() {
   return (neuron0x287d1b0()*0.0262186);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888490() {
   return (neuron0x287d4f0()*0.0859893);
}

double NNfunction_nn_chi2_charge2m::synapse0x28884d0() {
   return (neuron0x287d830()*-0.053576);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888510() {
   return (neuron0x287db70()*0.075031);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888550() {
   return (neuron0x287deb0()*0.0774866);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888590() {
   return (neuron0x287e1f0()*-0.00587561);
}

double NNfunction_nn_chi2_charge2m::synapse0x28885d0() {
   return (neuron0x287e530()*0.0407369);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888610() {
   return (neuron0x287e870()*-0.0321135);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888650() {
   return (neuron0x287ebb0()*-0.0394155);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888690() {
   return (neuron0x287eef0()*-0.0370898);
}

double NNfunction_nn_chi2_charge2m::synapse0x28886d0() {
   return (neuron0x287f230()*-5.57207);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888710() {
   return (neuron0x287f570()*-0.0565952);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888750() {
   return (neuron0x287f8b0()*0.0527556);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888790() {
   return (neuron0x287fbf0()*-0.051142);
}

double NNfunction_nn_chi2_charge2m::synapse0x28887d0() {
   return (neuron0x287ff30()*-0.106337);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888260() {
   return (neuron0x2880270()*-0.073047);
}

double NNfunction_nn_chi2_charge2m::synapse0x28882a0() {
   return (neuron0x28807d0()*0.0234491);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885030() {
   return (neuron0x28809f0()*-0.0438867);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885070() {
   return (neuron0x2880d30()*0.0298386);
}

double NNfunction_nn_chi2_charge2m::synapse0x28850b0() {
   return (neuron0x2881070()*0.0214167);
}

double NNfunction_nn_chi2_charge2m::synapse0x28850f0() {
   return (neuron0x28813b0()*-0.0195265);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885130() {
   return (neuron0x28816f0()*0.0357662);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885170() {
   return (neuron0x2881a30()*-1.18202);
}

double NNfunction_nn_chi2_charge2m::synapse0x28854f0() {
   return (neuron0x287ce70()*-0.0952534);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885530() {
   return (neuron0x287d1b0()*2.9183);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885570() {
   return (neuron0x287d4f0()*1.42489);
}

double NNfunction_nn_chi2_charge2m::synapse0x28855b0() {
   return (neuron0x287d830()*-0.0163363);
}

double NNfunction_nn_chi2_charge2m::synapse0x28855f0() {
   return (neuron0x287db70()*0.00878994);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885630() {
   return (neuron0x287deb0()*-0.0511102);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885670() {
   return (neuron0x287e1f0()*0.0917532);
}

double NNfunction_nn_chi2_charge2m::synapse0x28856b0() {
   return (neuron0x287e530()*-0.0676297);
}

double NNfunction_nn_chi2_charge2m::synapse0x28856f0() {
   return (neuron0x287e870()*0.161567);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885730() {
   return (neuron0x287ebb0()*-0.0137441);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885770() {
   return (neuron0x287eef0()*0.0722949);
}

double NNfunction_nn_chi2_charge2m::synapse0x28857b0() {
   return (neuron0x287f230()*-6.09542);
}

double NNfunction_nn_chi2_charge2m::synapse0x28857f0() {
   return (neuron0x287f570()*0.00170087);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889930() {
   return (neuron0x287f8b0()*0.059259);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889970() {
   return (neuron0x287fbf0()*0.0474015);
}

double NNfunction_nn_chi2_charge2m::synapse0x28899b0() {
   return (neuron0x287ff30()*0.0523558);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885340() {
   return (neuron0x2880270()*0.0590606);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885380() {
   return (neuron0x28807d0()*-0.02691);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889b00() {
   return (neuron0x28809f0()*-0.0502536);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889b40() {
   return (neuron0x2880d30()*-0.0226684);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889b80() {
   return (neuron0x2881070()*-0.189638);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889bc0() {
   return (neuron0x28813b0()*-0.0138188);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889c00() {
   return (neuron0x28816f0()*0.0174265);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889c40() {
   return (neuron0x2881a30()*-0.284271);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889fc0() {
   return (neuron0x287ce70()*0.0958087);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a000() {
   return (neuron0x287d1b0()*-0.867307);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a040() {
   return (neuron0x287d4f0()*-1.52309);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a080() {
   return (neuron0x287d830()*0.595919);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a0c0() {
   return (neuron0x287db70()*0.831495);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a100() {
   return (neuron0x287deb0()*-1.33403);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a140() {
   return (neuron0x287e1f0()*0.751063);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a180() {
   return (neuron0x287e530()*-0.231702);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a1c0() {
   return (neuron0x287e870()*0.361834);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a200() {
   return (neuron0x287ebb0()*0.0729408);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a240() {
   return (neuron0x287eef0()*-0.116826);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a280() {
   return (neuron0x287f230()*2.3397);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a2c0() {
   return (neuron0x287f570()*-0.310669);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a300() {
   return (neuron0x287f8b0()*0.788738);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a340() {
   return (neuron0x287fbf0()*-0.063184);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a380() {
   return (neuron0x287ff30()*0.0981733);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889e10() {
   return (neuron0x2880270()*0.783911);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889e50() {
   return (neuron0x28807d0()*-1.46229);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a4d0() {
   return (neuron0x28809f0()*-0.190193);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a510() {
   return (neuron0x2880d30()*-0.571644);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a550() {
   return (neuron0x2881070()*-1.52613);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a590() {
   return (neuron0x28813b0()*-1.55116);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a5d0() {
   return (neuron0x28816f0()*-1.27401);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a610() {
   return (neuron0x2881a30()*-0.49919);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a990() {
   return (neuron0x287ce70()*0.115181);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a9d0() {
   return (neuron0x287d1b0()*1.96213);
}

double NNfunction_nn_chi2_charge2m::synapse0x288aa10() {
   return (neuron0x287d4f0()*0.752365);
}

double NNfunction_nn_chi2_charge2m::synapse0x288aa50() {
   return (neuron0x287d830()*0.00972154);
}

double NNfunction_nn_chi2_charge2m::synapse0x288aa90() {
   return (neuron0x287db70()*0.0674306);
}

double NNfunction_nn_chi2_charge2m::synapse0x288aad0() {
   return (neuron0x287deb0()*0.168931);
}

double NNfunction_nn_chi2_charge2m::synapse0x288ab10() {
   return (neuron0x287e1f0()*0.157988);
}

double NNfunction_nn_chi2_charge2m::synapse0x288ab50() {
   return (neuron0x287e530()*0.0752659);
}

double NNfunction_nn_chi2_charge2m::synapse0x288ab90() {
   return (neuron0x287e870()*0.0228034);
}

double NNfunction_nn_chi2_charge2m::synapse0x288abd0() {
   return (neuron0x287ebb0()*-0.0184608);
}

double NNfunction_nn_chi2_charge2m::synapse0x288ac10() {
   return (neuron0x287eef0()*0.0818497);
}

double NNfunction_nn_chi2_charge2m::synapse0x288ac50() {
   return (neuron0x287f230()*-4.21563);
}

double NNfunction_nn_chi2_charge2m::synapse0x288ac90() {
   return (neuron0x287f570()*0.0848438);
}

double NNfunction_nn_chi2_charge2m::synapse0x288acd0() {
   return (neuron0x287f8b0()*0.0666376);
}

double NNfunction_nn_chi2_charge2m::synapse0x288ad10() {
   return (neuron0x287fbf0()*0.0577548);
}

double NNfunction_nn_chi2_charge2m::synapse0x288ad50() {
   return (neuron0x287ff30()*0.164707);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a7e0() {
   return (neuron0x2880270()*0.0242088);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a820() {
   return (neuron0x28807d0()*0.096949);
}

double NNfunction_nn_chi2_charge2m::synapse0x288aea0() {
   return (neuron0x28809f0()*0.00163791);
}

double NNfunction_nn_chi2_charge2m::synapse0x288aee0() {
   return (neuron0x2880d30()*0.0909484);
}

double NNfunction_nn_chi2_charge2m::synapse0x288af20() {
   return (neuron0x2881070()*-0.0312354);
}

double NNfunction_nn_chi2_charge2m::synapse0x288af60() {
   return (neuron0x28813b0()*-0.134012);
}

double NNfunction_nn_chi2_charge2m::synapse0x288afa0() {
   return (neuron0x28816f0()*0.0387521);
}

double NNfunction_nn_chi2_charge2m::synapse0x288afe0() {
   return (neuron0x2881a30()*2.49525);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b360() {
   return (neuron0x287ce70()*-0.00647505);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b3a0() {
   return (neuron0x287d1b0()*0.00620869);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b3e0() {
   return (neuron0x287d4f0()*0.981138);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b420() {
   return (neuron0x287d830()*-0.00202666);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b460() {
   return (neuron0x287db70()*0.00549669);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b4a0() {
   return (neuron0x287deb0()*-0.00110099);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b4e0() {
   return (neuron0x287e1f0()*0.0138751);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b520() {
   return (neuron0x287e530()*0.0125837);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b560() {
   return (neuron0x287e870()*-0.0039442);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b5a0() {
   return (neuron0x287ebb0()*-0.0104967);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b5e0() {
   return (neuron0x287eef0()*0.00498273);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b620() {
   return (neuron0x287f230()*0.0407786);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b660() {
   return (neuron0x287f570()*0.0098616);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b6a0() {
   return (neuron0x287f8b0()*-0.00830144);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b6e0() {
   return (neuron0x287fbf0()*0.0162336);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b720() {
   return (neuron0x287ff30()*0.0139431);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b1b0() {
   return (neuron0x2880270()*-0.0111615);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b1f0() {
   return (neuron0x28807d0()*-0.00337077);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b870() {
   return (neuron0x28809f0()*-0.00946499);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b8b0() {
   return (neuron0x2880d30()*-0.0136325);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b8f0() {
   return (neuron0x2881070()*-0.014457);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b930() {
   return (neuron0x28813b0()*0.00364259);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b970() {
   return (neuron0x28816f0()*-0.00641856);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b9b0() {
   return (neuron0x2881a30()*1.56172);
}

double NNfunction_nn_chi2_charge2m::synapse0x288bd30() {
   return (neuron0x287ce70()*-0.151667);
}

double NNfunction_nn_chi2_charge2m::synapse0x287d090() {
   return (neuron0x287d1b0()*-0.167018);
}

double NNfunction_nn_chi2_charge2m::synapse0x287d0d0() {
   return (neuron0x287d4f0()*-0.151468);
}

double NNfunction_nn_chi2_charge2m::synapse0x287d3d0() {
   return (neuron0x287d830()*-0.37025);
}

double NNfunction_nn_chi2_charge2m::synapse0x287d410() {
   return (neuron0x287db70()*-0.335077);
}

double NNfunction_nn_chi2_charge2m::synapse0x287d710() {
   return (neuron0x287deb0()*0.24238);
}

double NNfunction_nn_chi2_charge2m::synapse0x287d750() {
   return (neuron0x287e1f0()*0.0154032);
}

double NNfunction_nn_chi2_charge2m::synapse0x287da50() {
   return (neuron0x287e530()*0.456526);
}

double NNfunction_nn_chi2_charge2m::synapse0x287da90() {
   return (neuron0x287e870()*-0.736592);
}

double NNfunction_nn_chi2_charge2m::synapse0x287dd90() {
   return (neuron0x287ebb0()*-0.06547);
}

double NNfunction_nn_chi2_charge2m::synapse0x287ddd0() {
   return (neuron0x287eef0()*0.126707);
}

double NNfunction_nn_chi2_charge2m::synapse0x287e0d0() {
   return (neuron0x287f230()*1.2433);
}

double NNfunction_nn_chi2_charge2m::synapse0x287e110() {
   return (neuron0x287f570()*-0.636484);
}

double NNfunction_nn_chi2_charge2m::synapse0x287e410() {
   return (neuron0x287f8b0()*0.168908);
}

double NNfunction_nn_chi2_charge2m::synapse0x287e450() {
   return (neuron0x287fbf0()*-0.460878);
}

double NNfunction_nn_chi2_charge2m::synapse0x287e750() {
   return (neuron0x287ff30()*-0.110595);
}

double NNfunction_nn_chi2_charge2m::synapse0x287e790() {
   return (neuron0x2880270()*0.238433);
}

double NNfunction_nn_chi2_charge2m::synapse0x287ea90() {
   return (neuron0x28807d0()*0.302223);
}

double NNfunction_nn_chi2_charge2m::synapse0x287ead0() {
   return (neuron0x28809f0()*-0.020427);
}

double NNfunction_nn_chi2_charge2m::synapse0x287edd0() {
   return (neuron0x2880d30()*-0.0652384);
}

double NNfunction_nn_chi2_charge2m::synapse0x287ee10() {
   return (neuron0x2881070()*-0.0933059);
}

double NNfunction_nn_chi2_charge2m::synapse0x287f110() {
   return (neuron0x28813b0()*-1.15634);
}

double NNfunction_nn_chi2_charge2m::synapse0x287f150() {
   return (neuron0x28816f0()*0.188271);
}

double NNfunction_nn_chi2_charge2m::synapse0x287f450() {
   return (neuron0x2881a30()*-0.663511);
}

double NNfunction_nn_chi2_charge2m::synapse0x287f490() {
   return (neuron0x287ce70()*2.16933);
}

double NNfunction_nn_chi2_charge2m::synapse0x2880150() {
   return (neuron0x287d1b0()*0.015654);
}

double NNfunction_nn_chi2_charge2m::synapse0x2880190() {
   return (neuron0x287d4f0()*-0.136684);
}

double NNfunction_nn_chi2_charge2m::synapse0x288bb80() {
   return (neuron0x287d830()*0.0684844);
}

double NNfunction_nn_chi2_charge2m::synapse0x288bbc0() {
   return (neuron0x287db70()*0.0292862);
}

double NNfunction_nn_chi2_charge2m::synapse0x2880490() {
   return (neuron0x287deb0()*0.0594044);
}

double NNfunction_nn_chi2_charge2m::synapse0x28804d0() {
   return (neuron0x287e1f0()*-0.0197817);
}

double NNfunction_nn_chi2_charge2m::synapse0x2637ef0() {
   return (neuron0x287e530()*0.102158);
}

double NNfunction_nn_chi2_charge2m::synapse0x2637f30() {
   return (neuron0x287e870()*-0.0648502);
}

double NNfunction_nn_chi2_charge2m::synapse0x2880c10() {
   return (neuron0x287ebb0()*0.0215497);
}

double NNfunction_nn_chi2_charge2m::synapse0x2880c50() {
   return (neuron0x287eef0()*0.0742785);
}

double NNfunction_nn_chi2_charge2m::synapse0x2880f50() {
   return (neuron0x287f230()*0.0444679);
}

double NNfunction_nn_chi2_charge2m::synapse0x2880f90() {
   return (neuron0x287f570()*0.153264);
}

double NNfunction_nn_chi2_charge2m::synapse0x2881290() {
   return (neuron0x287f8b0()*-0.105802);
}

double NNfunction_nn_chi2_charge2m::synapse0x28812d0() {
   return (neuron0x287fbf0()*0.182017);
}

double NNfunction_nn_chi2_charge2m::synapse0x28815d0() {
   return (neuron0x287ff30()*-0.0342122);
}

double NNfunction_nn_chi2_charge2m::synapse0x2881610() {
   return (neuron0x2880270()*-0.0722863);
}

double NNfunction_nn_chi2_charge2m::synapse0x2881910() {
   return (neuron0x28807d0()*0.0797955);
}

double NNfunction_nn_chi2_charge2m::synapse0x2881950() {
   return (neuron0x28809f0()*0.0171634);
}

double NNfunction_nn_chi2_charge2m::synapse0x2881c50() {
   return (neuron0x2880d30()*-0.133706);
}

double NNfunction_nn_chi2_charge2m::synapse0x2881c90() {
   return (neuron0x2881070()*0.0107949);
}

double NNfunction_nn_chi2_charge2m::synapse0x287f790() {
   return (neuron0x28813b0()*-0.030684);
}

double NNfunction_nn_chi2_charge2m::synapse0x287f7d0() {
   return (neuron0x28816f0()*-0.00219209);
}

double NNfunction_nn_chi2_charge2m::synapse0x288daa0() {
   return (neuron0x2881a30()*0.864008);
}

double NNfunction_nn_chi2_charge2m::synapse0x288de20() {
   return (neuron0x287ce70()*-0.00664958);
}

double NNfunction_nn_chi2_charge2m::synapse0x288de60() {
   return (neuron0x287d1b0()*0.0028748);
}

double NNfunction_nn_chi2_charge2m::synapse0x288dea0() {
   return (neuron0x287d4f0()*-0.402705);
}

double NNfunction_nn_chi2_charge2m::synapse0x288dee0() {
   return (neuron0x287d830()*0.00116143);
}

double NNfunction_nn_chi2_charge2m::synapse0x288df20() {
   return (neuron0x287db70()*-0.00333968);
}

double NNfunction_nn_chi2_charge2m::synapse0x288df60() {
   return (neuron0x287deb0()*0.00135338);
}

double NNfunction_nn_chi2_charge2m::synapse0x288dfa0() {
   return (neuron0x287e1f0()*-0.00441789);
}

double NNfunction_nn_chi2_charge2m::synapse0x288dfe0() {
   return (neuron0x287e530()*-0.00180728);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e020() {
   return (neuron0x287e870()*0.0019954);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e060() {
   return (neuron0x287ebb0()*0.00351294);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e0a0() {
   return (neuron0x287eef0()*0.00053432);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e0e0() {
   return (neuron0x287f230()*-0.0553339);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e120() {
   return (neuron0x287f570()*-0.000690912);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e160() {
   return (neuron0x287f8b0()*-0.00388189);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e1a0() {
   return (neuron0x287fbf0()*-0.0011091);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e1e0() {
   return (neuron0x287ff30()*-0.00357187);
}

double NNfunction_nn_chi2_charge2m::synapse0x288dc70() {
   return (neuron0x2880270()*0.00524982);
}

double NNfunction_nn_chi2_charge2m::synapse0x288dcb0() {
   return (neuron0x28807d0()*0.0045207);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e330() {
   return (neuron0x28809f0()*0.00482802);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e370() {
   return (neuron0x2880d30()*0.00489202);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e3b0() {
   return (neuron0x2881070()*0.00601412);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e3f0() {
   return (neuron0x28813b0()*-0.000746585);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e430() {
   return (neuron0x28816f0()*-0.000167431);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e470() {
   return (neuron0x2881a30()*-0.262263);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e7f0() {
   return (neuron0x287ce70()*0.0980661);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e830() {
   return (neuron0x287d1b0()*0.014386);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e870() {
   return (neuron0x287d4f0()*-1.3614);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e8b0() {
   return (neuron0x287d830()*0.0287014);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e8f0() {
   return (neuron0x287db70()*-0.00530546);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e930() {
   return (neuron0x287deb0()*0.00773586);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e970() {
   return (neuron0x287e1f0()*0.0124899);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e9b0() {
   return (neuron0x287e530()*0.017107);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e9f0() {
   return (neuron0x287e870()*-0.0285372);
}

double NNfunction_nn_chi2_charge2m::synapse0x288ea30() {
   return (neuron0x287ebb0()*0.0340375);
}

double NNfunction_nn_chi2_charge2m::synapse0x288ea70() {
   return (neuron0x287eef0()*0.0351454);
}

double NNfunction_nn_chi2_charge2m::synapse0x288eab0() {
   return (neuron0x287f230()*5.9402);
}

double NNfunction_nn_chi2_charge2m::synapse0x288eaf0() {
   return (neuron0x287f570()*0.0634151);
}

double NNfunction_nn_chi2_charge2m::synapse0x288eb30() {
   return (neuron0x287f8b0()*-0.0991024);
}

double NNfunction_nn_chi2_charge2m::synapse0x288eb70() {
   return (neuron0x287fbf0()*-0.0442494);
}

double NNfunction_nn_chi2_charge2m::synapse0x288ebb0() {
   return (neuron0x287ff30()*0.0202773);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e640() {
   return (neuron0x2880270()*-0.0166342);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e680() {
   return (neuron0x28807d0()*0.0523113);
}

double NNfunction_nn_chi2_charge2m::synapse0x288ed00() {
   return (neuron0x28809f0()*0.060699);
}

double NNfunction_nn_chi2_charge2m::synapse0x288ed40() {
   return (neuron0x2880d30()*0.0158058);
}

double NNfunction_nn_chi2_charge2m::synapse0x288ed80() {
   return (neuron0x2881070()*0.0173643);
}

double NNfunction_nn_chi2_charge2m::synapse0x288edc0() {
   return (neuron0x28813b0()*0.0111828);
}

double NNfunction_nn_chi2_charge2m::synapse0x288ee00() {
   return (neuron0x28816f0()*-0.0157616);
}

double NNfunction_nn_chi2_charge2m::synapse0x288ee40() {
   return (neuron0x2881a30()*-0.0111212);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f1c0() {
   return (neuron0x287ce70()*0.00443125);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f200() {
   return (neuron0x287d1b0()*0.0398842);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f240() {
   return (neuron0x287d4f0()*-0.563628);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f280() {
   return (neuron0x287d830()*-0.00021868);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f2c0() {
   return (neuron0x287db70()*0.0218429);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f300() {
   return (neuron0x287deb0()*0.0509659);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f340() {
   return (neuron0x287e1f0()*-0.0120656);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f380() {
   return (neuron0x287e530()*0.0224761);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f3c0() {
   return (neuron0x287e870()*0.00270487);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f400() {
   return (neuron0x287ebb0()*-0.00798734);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f440() {
   return (neuron0x287eef0()*0.00548956);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f480() {
   return (neuron0x287f230()*1.73337);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f4c0() {
   return (neuron0x287f570()*0.0202014);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f500() {
   return (neuron0x287f8b0()*0.0591847);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f540() {
   return (neuron0x287fbf0()*-0.0479674);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f580() {
   return (neuron0x287ff30()*-0.0365907);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f010() {
   return (neuron0x2880270()*0.00246218);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f050() {
   return (neuron0x28807d0()*0.0189935);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f6d0() {
   return (neuron0x28809f0()*-0.00137219);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f710() {
   return (neuron0x2880d30()*0.00716956);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f750() {
   return (neuron0x2881070()*0.0330232);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f790() {
   return (neuron0x28813b0()*0.00774047);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f7d0() {
   return (neuron0x28816f0()*-0.0241843);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f810() {
   return (neuron0x2881a30()*-0.930436);
}

double NNfunction_nn_chi2_charge2m::synapse0x288fb90() {
   return (neuron0x287ce70()*0.145483);
}

double NNfunction_nn_chi2_charge2m::synapse0x288fbd0() {
   return (neuron0x287d1b0()*-0.642054);
}

double NNfunction_nn_chi2_charge2m::synapse0x288fc10() {
   return (neuron0x287d4f0()*-2.18508);
}

double NNfunction_nn_chi2_charge2m::synapse0x288fc50() {
   return (neuron0x287d830()*0.256169);
}

double NNfunction_nn_chi2_charge2m::synapse0x288fc90() {
   return (neuron0x287db70()*0.20901);
}

double NNfunction_nn_chi2_charge2m::synapse0x288fcd0() {
   return (neuron0x287deb0()*0.215441);
}

double NNfunction_nn_chi2_charge2m::synapse0x288fd10() {
   return (neuron0x287e1f0()*-0.152264);
}

double NNfunction_nn_chi2_charge2m::synapse0x288fd50() {
   return (neuron0x287e530()*0.336357);
}

double NNfunction_nn_chi2_charge2m::synapse0x288fd90() {
   return (neuron0x287e870()*0.0136434);
}

double NNfunction_nn_chi2_charge2m::synapse0x288fdd0() {
   return (neuron0x287ebb0()*0.741331);
}

double NNfunction_nn_chi2_charge2m::synapse0x288fe10() {
   return (neuron0x287eef0()*-0.278441);
}

double NNfunction_nn_chi2_charge2m::synapse0x288fe50() {
   return (neuron0x287f230()*2.88597);
}

double NNfunction_nn_chi2_charge2m::synapse0x288fe90() {
   return (neuron0x287f570()*-0.0752585);
}

double NNfunction_nn_chi2_charge2m::synapse0x288fed0() {
   return (neuron0x287f8b0()*0.957225);
}

double NNfunction_nn_chi2_charge2m::synapse0x288ff10() {
   return (neuron0x287fbf0()*0.15236);
}

double NNfunction_nn_chi2_charge2m::synapse0x288ff50() {
   return (neuron0x287ff30()*0.3891);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f9e0() {
   return (neuron0x2880270()*-0.0940921);
}

double NNfunction_nn_chi2_charge2m::synapse0x288fa20() {
   return (neuron0x28807d0()*0.522714);
}

double NNfunction_nn_chi2_charge2m::synapse0x28900a0() {
   return (neuron0x28809f0()*-0.37084);
}

double NNfunction_nn_chi2_charge2m::synapse0x28900e0() {
   return (neuron0x2880d30()*0.146048);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890120() {
   return (neuron0x2881070()*-0.185446);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890160() {
   return (neuron0x28813b0()*-0.213867);
}

double NNfunction_nn_chi2_charge2m::synapse0x28901a0() {
   return (neuron0x28816f0()*-0.158109);
}

double NNfunction_nn_chi2_charge2m::synapse0x28901e0() {
   return (neuron0x2881a30()*0.336489);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890560() {
   return (neuron0x287ce70()*0.693407);
}

double NNfunction_nn_chi2_charge2m::synapse0x28905a0() {
   return (neuron0x287d1b0()*0.00246901);
}

double NNfunction_nn_chi2_charge2m::synapse0x28905e0() {
   return (neuron0x287d4f0()*0.0553999);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890620() {
   return (neuron0x287d830()*-0.773272);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890660() {
   return (neuron0x287db70()*-0.551663);
}

double NNfunction_nn_chi2_charge2m::synapse0x28906a0() {
   return (neuron0x287deb0()*0.03652);
}

double NNfunction_nn_chi2_charge2m::synapse0x28906e0() {
   return (neuron0x287e1f0()*-1.16786);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890720() {
   return (neuron0x287e530()*0.0964249);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890760() {
   return (neuron0x287e870()*0.604028);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888920() {
   return (neuron0x287ebb0()*0.506522);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888960() {
   return (neuron0x287eef0()*-0.0775099);
}

double NNfunction_nn_chi2_charge2m::synapse0x28889a0() {
   return (neuron0x287f230()*0.680429);
}

double NNfunction_nn_chi2_charge2m::synapse0x28889e0() {
   return (neuron0x287f570()*0.444806);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888a20() {
   return (neuron0x287f8b0()*0.0120425);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888a60() {
   return (neuron0x287fbf0()*-0.764484);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888aa0() {
   return (neuron0x287ff30()*-0.9131);
}

double NNfunction_nn_chi2_charge2m::synapse0x28903b0() {
   return (neuron0x2880270()*-0.81992);
}

double NNfunction_nn_chi2_charge2m::synapse0x28903f0() {
   return (neuron0x28807d0()*-0.328883);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888bf0() {
   return (neuron0x28809f0()*-0.638506);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888c30() {
   return (neuron0x2880d30()*0.576279);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888c70() {
   return (neuron0x2881070()*0.575447);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888cb0() {
   return (neuron0x28813b0()*-0.926214);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888cf0() {
   return (neuron0x28816f0()*-0.943482);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888d30() {
   return (neuron0x2881a30()*-0.561104);
}

double NNfunction_nn_chi2_charge2m::synapse0x28890b0() {
   return (neuron0x287ce70()*-0.112095);
}

double NNfunction_nn_chi2_charge2m::synapse0x28890f0() {
   return (neuron0x287d1b0()*-0.085468);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889130() {
   return (neuron0x287d4f0()*-0.0690081);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889170() {
   return (neuron0x287d830()*0.0617002);
}

double NNfunction_nn_chi2_charge2m::synapse0x28891b0() {
   return (neuron0x287db70()*-0.0385451);
}

double NNfunction_nn_chi2_charge2m::synapse0x28891f0() {
   return (neuron0x287deb0()*0.192844);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889230() {
   return (neuron0x287e1f0()*0.0710615);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889270() {
   return (neuron0x287e530()*0.101424);
}

double NNfunction_nn_chi2_charge2m::synapse0x28892b0() {
   return (neuron0x287e870()*0.0484126);
}

double NNfunction_nn_chi2_charge2m::synapse0x28892f0() {
   return (neuron0x287ebb0()*0.0433095);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889330() {
   return (neuron0x287eef0()*0.0106681);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889370() {
   return (neuron0x287f230()*0.441075);
}

double NNfunction_nn_chi2_charge2m::synapse0x28893b0() {
   return (neuron0x287f570()*-1.16932);
}

double NNfunction_nn_chi2_charge2m::synapse0x28893f0() {
   return (neuron0x287f8b0()*0.317877);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889430() {
   return (neuron0x287fbf0()*-0.0865861);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889470() {
   return (neuron0x287ff30()*0.1212);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888f00() {
   return (neuron0x2880270()*0.0879657);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888f40() {
   return (neuron0x28807d0()*0.196308);
}

double NNfunction_nn_chi2_charge2m::synapse0x28895c0() {
   return (neuron0x28809f0()*-0.370613);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889600() {
   return (neuron0x2880d30()*-0.0483266);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889640() {
   return (neuron0x2881070()*-0.138846);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889680() {
   return (neuron0x28813b0()*0.019785);
}

double NNfunction_nn_chi2_charge2m::synapse0x28896c0() {
   return (neuron0x28816f0()*-0.20455);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889700() {
   return (neuron0x2881a30()*0.711076);
}

double NNfunction_nn_chi2_charge2m::synapse0x28898d0() {
   return (neuron0x287ce70()*-0.286391);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892960() {
   return (neuron0x287d1b0()*0.120569);
}

double NNfunction_nn_chi2_charge2m::synapse0x28929a0() {
   return (neuron0x287d4f0()*1.18002);
}

double NNfunction_nn_chi2_charge2m::synapse0x28929e0() {
   return (neuron0x287d830()*-0.0474559);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892a20() {
   return (neuron0x287db70()*0.0842354);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892a60() {
   return (neuron0x287deb0()*-0.118415);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892aa0() {
   return (neuron0x287e1f0()*-0.463633);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892ae0() {
   return (neuron0x287e530()*-0.164001);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892b20() {
   return (neuron0x287e870()*0.103626);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892b60() {
   return (neuron0x287ebb0()*-0.13491);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892ba0() {
   return (neuron0x287eef0()*-0.150687);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892be0() {
   return (neuron0x287f230()*2.66842);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892c20() {
   return (neuron0x287f570()*-0.15827);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892c60() {
   return (neuron0x287f8b0()*-0.611092);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892ca0() {
   return (neuron0x287fbf0()*0.0848143);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892ce0() {
   return (neuron0x287ff30()*-0.346884);
}

double NNfunction_nn_chi2_charge2m::synapse0x28927b0() {
   return (neuron0x2880270()*-0.0914968);
}

double NNfunction_nn_chi2_charge2m::synapse0x28927f0() {
   return (neuron0x28807d0()*-0.118074);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892e30() {
   return (neuron0x28809f0()*0.0833982);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892e70() {
   return (neuron0x2880d30()*-0.344338);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892eb0() {
   return (neuron0x2881070()*-0.545584);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892ef0() {
   return (neuron0x28813b0()*0.0536361);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892f30() {
   return (neuron0x28816f0()*0.106273);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892f70() {
   return (neuron0x2881a30()*-0.210422);
}

double NNfunction_nn_chi2_charge2m::synapse0x28932f0() {
   return (neuron0x287ce70()*-0.219314);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893330() {
   return (neuron0x287d1b0()*0.279024);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893370() {
   return (neuron0x287d4f0()*2.08776);
}

double NNfunction_nn_chi2_charge2m::synapse0x28933b0() {
   return (neuron0x287d830()*-0.178511);
}

double NNfunction_nn_chi2_charge2m::synapse0x28933f0() {
   return (neuron0x287db70()*-0.000463871);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893430() {
   return (neuron0x287deb0()*0.299505);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893470() {
   return (neuron0x287e1f0()*0.0531947);
}

double NNfunction_nn_chi2_charge2m::synapse0x28934b0() {
   return (neuron0x287e530()*0.204512);
}

double NNfunction_nn_chi2_charge2m::synapse0x28934f0() {
   return (neuron0x287e870()*-0.194762);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893530() {
   return (neuron0x287ebb0()*-0.0653283);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893570() {
   return (neuron0x287eef0()*0.332662);
}

double NNfunction_nn_chi2_charge2m::synapse0x28935b0() {
   return (neuron0x287f230()*-2.2599);
}

double NNfunction_nn_chi2_charge2m::synapse0x28935f0() {
   return (neuron0x287f570()*0.0386008);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893630() {
   return (neuron0x287f8b0()*-0.111568);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893670() {
   return (neuron0x287fbf0()*-0.374298);
}

double NNfunction_nn_chi2_charge2m::synapse0x28936b0() {
   return (neuron0x287ff30()*-0.616042);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893140() {
   return (neuron0x2880270()*0.210946);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893180() {
   return (neuron0x28807d0()*-0.107807);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893800() {
   return (neuron0x28809f0()*-0.376869);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893840() {
   return (neuron0x2880d30()*0.265158);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893880() {
   return (neuron0x2881070()*0.164301);
}

double NNfunction_nn_chi2_charge2m::synapse0x28938c0() {
   return (neuron0x28813b0()*0.0375197);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893900() {
   return (neuron0x28816f0()*0.0950773);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893940() {
   return (neuron0x2881a30()*0.777709);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893cc0() {
   return (neuron0x287ce70()*-0.189152);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893d00() {
   return (neuron0x287d1b0()*-0.679524);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893d40() {
   return (neuron0x287d4f0()*0.207038);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893d80() {
   return (neuron0x287d830()*-0.91539);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893dc0() {
   return (neuron0x287db70()*0.387284);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893e00() {
   return (neuron0x287deb0()*0.401916);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893e40() {
   return (neuron0x287e1f0()*0.948741);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893e80() {
   return (neuron0x287e530()*0.75809);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893ec0() {
   return (neuron0x287e870()*0.60715);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893f00() {
   return (neuron0x287ebb0()*0.270382);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893f40() {
   return (neuron0x287eef0()*0.298726);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893f80() {
   return (neuron0x287f230()*-0.503845);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893fc0() {
   return (neuron0x287f570()*0.856071);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894000() {
   return (neuron0x287f8b0()*0.485258);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894040() {
   return (neuron0x287fbf0()*0.0641351);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894080() {
   return (neuron0x287ff30()*0.311591);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893b10() {
   return (neuron0x2880270()*0.540088);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893b50() {
   return (neuron0x28807d0()*0.456797);
}

double NNfunction_nn_chi2_charge2m::synapse0x28941d0() {
   return (neuron0x28809f0()*-0.337923);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894210() {
   return (neuron0x2880d30()*0.0704589);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894250() {
   return (neuron0x2881070()*0.0452502);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894290() {
   return (neuron0x28813b0()*0.0284234);
}

double NNfunction_nn_chi2_charge2m::synapse0x28942d0() {
   return (neuron0x28816f0()*-0.208266);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894310() {
   return (neuron0x2881a30()*0.167727);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894690() {
   return (neuron0x287ce70()*-0.0867169);
}

double NNfunction_nn_chi2_charge2m::synapse0x28946d0() {
   return (neuron0x287d1b0()*0.00684571);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894710() {
   return (neuron0x287d4f0()*0.104604);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894750() {
   return (neuron0x287d830()*-0.0208403);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894790() {
   return (neuron0x287db70()*0.0726924);
}

double NNfunction_nn_chi2_charge2m::synapse0x28947d0() {
   return (neuron0x287deb0()*0.0509322);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894810() {
   return (neuron0x287e1f0()*-0.334722);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894850() {
   return (neuron0x287e530()*0.313045);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894890() {
   return (neuron0x287e870()*0.54953);
}

double NNfunction_nn_chi2_charge2m::synapse0x28948d0() {
   return (neuron0x287ebb0()*-0.270317);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894910() {
   return (neuron0x287eef0()*0.121858);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894950() {
   return (neuron0x287f230()*-0.736029);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894990() {
   return (neuron0x287f570()*0.243401);
}

double NNfunction_nn_chi2_charge2m::synapse0x28949d0() {
   return (neuron0x287f8b0()*0.133825);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894a10() {
   return (neuron0x287fbf0()*-0.176463);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894a50() {
   return (neuron0x287ff30()*0.0366828);
}

double NNfunction_nn_chi2_charge2m::synapse0x28944e0() {
   return (neuron0x2880270()*0.0128877);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894520() {
   return (neuron0x28807d0()*0.209965);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894ba0() {
   return (neuron0x28809f0()*-0.0823484);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894be0() {
   return (neuron0x2880d30()*0.0144534);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894c20() {
   return (neuron0x2881070()*0.0203915);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894c60() {
   return (neuron0x28813b0()*0.0781718);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894ca0() {
   return (neuron0x28816f0()*-0.239489);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894ce0() {
   return (neuron0x2881a30()*-0.936515);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895060() {
   return (neuron0x287ce70()*-0.0144759);
}

double NNfunction_nn_chi2_charge2m::synapse0x28950a0() {
   return (neuron0x287d1b0()*0.00758334);
}

double NNfunction_nn_chi2_charge2m::synapse0x28950e0() {
   return (neuron0x287d4f0()*0.0835403);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895120() {
   return (neuron0x287d830()*-0.00145727);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895160() {
   return (neuron0x287db70()*0.0216154);
}

double NNfunction_nn_chi2_charge2m::synapse0x28951a0() {
   return (neuron0x287deb0()*-0.00375718);
}

double NNfunction_nn_chi2_charge2m::synapse0x28951e0() {
   return (neuron0x287e1f0()*0.0065929);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895220() {
   return (neuron0x287e530()*0.0179444);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895260() {
   return (neuron0x287e870()*-0.012313);
}

double NNfunction_nn_chi2_charge2m::synapse0x28952a0() {
   return (neuron0x287ebb0()*-0.00440886);
}

double NNfunction_nn_chi2_charge2m::synapse0x28952e0() {
   return (neuron0x287eef0()*-0.000208106);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895320() {
   return (neuron0x287f230()*-0.100388);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895360() {
   return (neuron0x287f570()*-0.0288425);
}

double NNfunction_nn_chi2_charge2m::synapse0x28953a0() {
   return (neuron0x287f8b0()*-0.0181094);
}

double NNfunction_nn_chi2_charge2m::synapse0x28953e0() {
   return (neuron0x287fbf0()*0.0266227);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895420() {
   return (neuron0x287ff30()*-0.0130341);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894eb0() {
   return (neuron0x2880270()*0.00202724);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894ef0() {
   return (neuron0x28807d0()*-0.00539435);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895570() {
   return (neuron0x28809f0()*0.017538);
}

double NNfunction_nn_chi2_charge2m::synapse0x28955b0() {
   return (neuron0x2880d30()*-0.00153056);
}

double NNfunction_nn_chi2_charge2m::synapse0x28955f0() {
   return (neuron0x2881070()*0.0111167);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895630() {
   return (neuron0x28813b0()*0.0268649);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895670() {
   return (neuron0x28816f0()*0.00159264);
}

double NNfunction_nn_chi2_charge2m::synapse0x28956b0() {
   return (neuron0x2881a30()*5.75971);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895a30() {
   return (neuron0x287ce70()*-0.146773);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895a70() {
   return (neuron0x287d1b0()*-0.0307208);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895ab0() {
   return (neuron0x287d4f0()*-0.510475);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895af0() {
   return (neuron0x287d830()*-0.170697);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895b30() {
   return (neuron0x287db70()*-0.0436688);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895b70() {
   return (neuron0x287deb0()*0.0213452);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895bb0() {
   return (neuron0x287e1f0()*-0.0246635);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895bf0() {
   return (neuron0x287e530()*0.0113963);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895c30() {
   return (neuron0x287e870()*-0.00997187);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895c70() {
   return (neuron0x287ebb0()*0.0179599);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895cb0() {
   return (neuron0x287eef0()*-0.0163945);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895cf0() {
   return (neuron0x287f230()*1.09346);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895d30() {
   return (neuron0x287f570()*-0.184867);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895d70() {
   return (neuron0x287f8b0()*0.116594);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895db0() {
   return (neuron0x287fbf0()*-0.177103);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895df0() {
   return (neuron0x287ff30()*-0.0391814);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895880() {
   return (neuron0x2880270()*0.0129669);
}

double NNfunction_nn_chi2_charge2m::synapse0x28958c0() {
   return (neuron0x28807d0()*-0.0275207);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895f40() {
   return (neuron0x28809f0()*-0.0172241);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895f80() {
   return (neuron0x2880d30()*-0.0295282);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895fc0() {
   return (neuron0x2881070()*0.0219376);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896000() {
   return (neuron0x28813b0()*0.000842738);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896040() {
   return (neuron0x28816f0()*-0.00651661);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896080() {
   return (neuron0x2881a30()*0.13912);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896400() {
   return (neuron0x287ce70()*-0.0324404);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896440() {
   return (neuron0x287d1b0()*-0.0167594);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896480() {
   return (neuron0x287d4f0()*-1.07091);
}

double NNfunction_nn_chi2_charge2m::synapse0x28964c0() {
   return (neuron0x287d830()*-0.0219311);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896500() {
   return (neuron0x287db70()*-0.00398376);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896540() {
   return (neuron0x287deb0()*-0.0384093);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896580() {
   return (neuron0x287e1f0()*-0.00913251);
}

double NNfunction_nn_chi2_charge2m::synapse0x28965c0() {
   return (neuron0x287e530()*-0.0308144);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896600() {
   return (neuron0x287e870()*0.0436578);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896640() {
   return (neuron0x287ebb0()*-0.0102153);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896680() {
   return (neuron0x287eef0()*0.00538474);
}

double NNfunction_nn_chi2_charge2m::synapse0x28966c0() {
   return (neuron0x287f230()*0.516254);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896700() {
   return (neuron0x287f570()*0.019741);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896740() {
   return (neuron0x287f8b0()*-0.0139358);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896780() {
   return (neuron0x287fbf0()*-0.0399669);
}

double NNfunction_nn_chi2_charge2m::synapse0x28967c0() {
   return (neuron0x287ff30()*-0.00967883);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896250() {
   return (neuron0x2880270()*-0.0139452);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896290() {
   return (neuron0x28807d0()*-0.00922503);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896910() {
   return (neuron0x28809f0()*0.00907621);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896950() {
   return (neuron0x2880d30()*0.0134739);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896990() {
   return (neuron0x2881070()*-0.0109197);
}

double NNfunction_nn_chi2_charge2m::synapse0x28969d0() {
   return (neuron0x28813b0()*0.0219397);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896a10() {
   return (neuron0x28816f0()*4.68483e-05);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896a50() {
   return (neuron0x2881a30()*2.26152);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896dd0() {
   return (neuron0x287ce70()*-0.0419975);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896e10() {
   return (neuron0x287d1b0()*4.47751);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896e50() {
   return (neuron0x287d4f0()*0.242235);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896e90() {
   return (neuron0x287d830()*-0.0774933);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896ed0() {
   return (neuron0x287db70()*0.0263221);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896f10() {
   return (neuron0x287deb0()*0.0132488);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896f50() {
   return (neuron0x287e1f0()*0.0843113);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896f90() {
   return (neuron0x287e530()*-0.0190209);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896fd0() {
   return (neuron0x287e870()*0.0024713);
}

double NNfunction_nn_chi2_charge2m::synapse0x2897010() {
   return (neuron0x287ebb0()*-0.0518453);
}

double NNfunction_nn_chi2_charge2m::synapse0x2897050() {
   return (neuron0x287eef0()*0.0220423);
}

double NNfunction_nn_chi2_charge2m::synapse0x2897090() {
   return (neuron0x287f230()*-5.94582);
}

double NNfunction_nn_chi2_charge2m::synapse0x28970d0() {
   return (neuron0x287f570()*-0.0483275);
}

double NNfunction_nn_chi2_charge2m::synapse0x2897110() {
   return (neuron0x287f8b0()*-0.0177617);
}

double NNfunction_nn_chi2_charge2m::synapse0x2897150() {
   return (neuron0x287fbf0()*-0.043491);
}

double NNfunction_nn_chi2_charge2m::synapse0x2897190() {
   return (neuron0x287ff30()*-0.108);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896c20() {
   return (neuron0x2880270()*-0.0148324);
}

double NNfunction_nn_chi2_charge2m::synapse0x2896c60() {
   return (neuron0x28807d0()*-0.0235593);
}

double NNfunction_nn_chi2_charge2m::synapse0x28972e0() {
   return (neuron0x28809f0()*-0.0365);
}

double NNfunction_nn_chi2_charge2m::synapse0x2897320() {
   return (neuron0x2880d30()*0.0319494);
}

double NNfunction_nn_chi2_charge2m::synapse0x2897360() {
   return (neuron0x2881070()*-0.087881);
}

double NNfunction_nn_chi2_charge2m::synapse0x28973a0() {
   return (neuron0x28813b0()*0.052533);
}

double NNfunction_nn_chi2_charge2m::synapse0x28973e0() {
   return (neuron0x28816f0()*0.0382217);
}

double NNfunction_nn_chi2_charge2m::synapse0x2897420() {
   return (neuron0x2881a30()*-2.22977);
}

double NNfunction_nn_chi2_charge2m::synapse0x28977a0() {
   return (neuron0x287ce70()*0.00257936);
}

double NNfunction_nn_chi2_charge2m::synapse0x288bd70() {
   return (neuron0x287d1b0()*-0.0330991);
}

double NNfunction_nn_chi2_charge2m::synapse0x288bdb0() {
   return (neuron0x287d4f0()*0.19018);
}

double NNfunction_nn_chi2_charge2m::synapse0x288bdf0() {
   return (neuron0x287d830()*-0.00517454);
}

double NNfunction_nn_chi2_charge2m::synapse0x288c040() {
   return (neuron0x287db70()*0.00960291);
}

double NNfunction_nn_chi2_charge2m::synapse0x288c080() {
   return (neuron0x287deb0()*-0.00635079);
}

double NNfunction_nn_chi2_charge2m::synapse0x288c0c0() {
   return (neuron0x287e1f0()*-0.0155357);
}

double NNfunction_nn_chi2_charge2m::synapse0x288c310() {
   return (neuron0x287e530()*0.00653085);
}

double NNfunction_nn_chi2_charge2m::synapse0x288c350() {
   return (neuron0x287e870()*-0.00466863);
}

double NNfunction_nn_chi2_charge2m::synapse0x288c5a0() {
   return (neuron0x287ebb0()*-0.00312632);
}

double NNfunction_nn_chi2_charge2m::synapse0x288c5e0() {
   return (neuron0x287eef0()*0.0113816);
}

double NNfunction_nn_chi2_charge2m::synapse0x288c620() {
   return (neuron0x287f230()*-0.120175);
}

double NNfunction_nn_chi2_charge2m::synapse0x288c870() {
   return (neuron0x287f570()*-0.00989668);
}

double NNfunction_nn_chi2_charge2m::synapse0x288c8b0() {
   return (neuron0x287f8b0()*-0.036573);
}

double NNfunction_nn_chi2_charge2m::synapse0x288cb00() {
   return (neuron0x287fbf0()*0.00733781);
}

double NNfunction_nn_chi2_charge2m::synapse0x288cb40() {
   return (neuron0x287ff30()*-0.0249212);
}

double NNfunction_nn_chi2_charge2m::synapse0x28975f0() {
   return (neuron0x2880270()*0.00511344);
}

double NNfunction_nn_chi2_charge2m::synapse0x2897630() {
   return (neuron0x28807d0()*-0.0261637);
}

double NNfunction_nn_chi2_charge2m::synapse0x288cc90() {
   return (neuron0x28809f0()*0.0266083);
}

double NNfunction_nn_chi2_charge2m::synapse0x288d1a0() {
   return (neuron0x2880d30()*0.0140452);
}

double NNfunction_nn_chi2_charge2m::synapse0x288d1e0() {
   return (neuron0x2881070()*0.0195423);
}

double NNfunction_nn_chi2_charge2m::synapse0x288d220() {
   return (neuron0x28813b0()*0.00539664);
}

double NNfunction_nn_chi2_charge2m::synapse0x288d470() {
   return (neuron0x28816f0()*0.00767096);
}

double NNfunction_nn_chi2_charge2m::synapse0x288d4b0() {
   return (neuron0x2881a30()*10.3676);
}

double NNfunction_nn_chi2_charge2m::synapse0x288cd60() {
   return (neuron0x287ce70()*-0.209441);
}

double NNfunction_nn_chi2_charge2m::synapse0x288cda0() {
   return (neuron0x287d1b0()*-1.61096);
}

double NNfunction_nn_chi2_charge2m::synapse0x288cde0() {
   return (neuron0x287d4f0()*2.23935);
}

double NNfunction_nn_chi2_charge2m::synapse0x288ce20() {
   return (neuron0x287d830()*-0.272678);
}

double NNfunction_nn_chi2_charge2m::synapse0x288d7a0() {
   return (neuron0x287db70()*-0.346251);
}

double NNfunction_nn_chi2_charge2m::synapse0x2899af0() {
   return (neuron0x287deb0()*0.0858312);
}

double NNfunction_nn_chi2_charge2m::synapse0x2899b30() {
   return (neuron0x287e1f0()*0.0390078);
}

double NNfunction_nn_chi2_charge2m::synapse0x2899b70() {
   return (neuron0x287e530()*-0.150316);
}

double NNfunction_nn_chi2_charge2m::synapse0x2899bb0() {
   return (neuron0x287e870()*-0.241706);
}

double NNfunction_nn_chi2_charge2m::synapse0x2899bf0() {
   return (neuron0x287ebb0()*-0.236365);
}

double NNfunction_nn_chi2_charge2m::synapse0x2899c30() {
   return (neuron0x287eef0()*0.0782758);
}

double NNfunction_nn_chi2_charge2m::synapse0x2899c70() {
   return (neuron0x287f230()*-2.39777);
}

double NNfunction_nn_chi2_charge2m::synapse0x2899cb0() {
   return (neuron0x287f570()*0.290714);
}

double NNfunction_nn_chi2_charge2m::synapse0x2899cf0() {
   return (neuron0x287f8b0()*-0.102526);
}

double NNfunction_nn_chi2_charge2m::synapse0x2899d30() {
   return (neuron0x287fbf0()*-0.23696);
}

double NNfunction_nn_chi2_charge2m::synapse0x2899d70() {
   return (neuron0x287ff30()*-0.516259);
}

double NNfunction_nn_chi2_charge2m::synapse0x288d680() {
   return (neuron0x2880270()*0.0406454);
}

double NNfunction_nn_chi2_charge2m::synapse0x288d6c0() {
   return (neuron0x28807d0()*-0.174679);
}

double NNfunction_nn_chi2_charge2m::synapse0x2899ec0() {
   return (neuron0x28809f0()*-0.033651);
}

double NNfunction_nn_chi2_charge2m::synapse0x2899f00() {
   return (neuron0x2880d30()*0.498601);
}

double NNfunction_nn_chi2_charge2m::synapse0x2899f40() {
   return (neuron0x2881070()*0.0720905);
}

double NNfunction_nn_chi2_charge2m::synapse0x2899f80() {
   return (neuron0x28813b0()*0.19099);
}

double NNfunction_nn_chi2_charge2m::synapse0x2899fc0() {
   return (neuron0x28816f0()*0.197122);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a000() {
   return (neuron0x2881a30()*0.148857);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a380() {
   return (neuron0x287ce70()*-0.191622);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a3c0() {
   return (neuron0x287d1b0()*0.307152);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a400() {
   return (neuron0x287d4f0()*2.76963);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a440() {
   return (neuron0x287d830()*-0.248934);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a480() {
   return (neuron0x287db70()*-0.250172);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a4c0() {
   return (neuron0x287deb0()*0.0197512);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a500() {
   return (neuron0x287e1f0()*-0.158341);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a540() {
   return (neuron0x287e530()*-0.275011);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a580() {
   return (neuron0x287e870()*0.0972384);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a5c0() {
   return (neuron0x287ebb0()*-0.25939);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a600() {
   return (neuron0x287eef0()*-0.000780124);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a640() {
   return (neuron0x287f230()*-3.06656);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a680() {
   return (neuron0x287f570()*0.265014);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a6c0() {
   return (neuron0x287f8b0()*-0.285705);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a700() {
   return (neuron0x287fbf0()*0.159105);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a740() {
   return (neuron0x287ff30()*-0.225077);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a1d0() {
   return (neuron0x2880270()*-0.115436);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a210() {
   return (neuron0x28807d0()*-0.358089);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a890() {
   return (neuron0x28809f0()*-0.0505093);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a8d0() {
   return (neuron0x2880d30()*0.332464);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a910() {
   return (neuron0x2881070()*0.0508954);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a950() {
   return (neuron0x28813b0()*0.217235);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a990() {
   return (neuron0x28816f0()*0.308735);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a9d0() {
   return (neuron0x2881a30()*-0.645693);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ad50() {
   return (neuron0x287ce70()*-0.131033);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ad90() {
   return (neuron0x287d1b0()*0.22184);
}

double NNfunction_nn_chi2_charge2m::synapse0x289add0() {
   return (neuron0x287d4f0()*1.04758);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ae10() {
   return (neuron0x287d830()*-0.169485);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ae50() {
   return (neuron0x287db70()*-0.114103);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ae90() {
   return (neuron0x287deb0()*0.143623);
}

double NNfunction_nn_chi2_charge2m::synapse0x289aed0() {
   return (neuron0x287e1f0()*0.142468);
}

double NNfunction_nn_chi2_charge2m::synapse0x289af10() {
   return (neuron0x287e530()*-0.0629651);
}

double NNfunction_nn_chi2_charge2m::synapse0x289af50() {
   return (neuron0x287e870()*-0.0582084);
}

double NNfunction_nn_chi2_charge2m::synapse0x289af90() {
   return (neuron0x287ebb0()*0.0055146);
}

double NNfunction_nn_chi2_charge2m::synapse0x289afd0() {
   return (neuron0x287eef0()*-0.163536);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b010() {
   return (neuron0x287f230()*-1.20992);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b050() {
   return (neuron0x287f570()*-0.325929);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b090() {
   return (neuron0x287f8b0()*0.386692);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b0d0() {
   return (neuron0x287fbf0()*-0.159666);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b110() {
   return (neuron0x287ff30()*-0.106533);
}

double NNfunction_nn_chi2_charge2m::synapse0x289aba0() {
   return (neuron0x2880270()*0.0332204);
}

double NNfunction_nn_chi2_charge2m::synapse0x289abe0() {
   return (neuron0x28807d0()*-0.122572);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b260() {
   return (neuron0x28809f0()*-0.00843611);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b2a0() {
   return (neuron0x2880d30()*0.160367);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b2e0() {
   return (neuron0x2881070()*-0.0560299);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b320() {
   return (neuron0x28813b0()*-0.0350367);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b360() {
   return (neuron0x28816f0()*0.0728183);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b3a0() {
   return (neuron0x2881a30()*-2.75234);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b720() {
   return (neuron0x287ce70()*-0.13494);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b760() {
   return (neuron0x287d1b0()*-0.0889876);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b7a0() {
   return (neuron0x287d4f0()*-0.147653);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b7e0() {
   return (neuron0x287d830()*-5.24303);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b820() {
   return (neuron0x287db70()*0.115769);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b860() {
   return (neuron0x287deb0()*-0.0428243);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b8a0() {
   return (neuron0x287e1f0()*0.0406294);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b8e0() {
   return (neuron0x287e530()*0.0976612);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b920() {
   return (neuron0x287e870()*0.0388289);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b960() {
   return (neuron0x287ebb0()*0.0582118);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b9a0() {
   return (neuron0x287eef0()*0.0522782);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b9e0() {
   return (neuron0x287f230()*0.162402);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ba20() {
   return (neuron0x287f570()*-0.160277);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ba60() {
   return (neuron0x287f8b0()*-0.0935216);
}

double NNfunction_nn_chi2_charge2m::synapse0x289baa0() {
   return (neuron0x287fbf0()*-0.16032);
}

double NNfunction_nn_chi2_charge2m::synapse0x289bae0() {
   return (neuron0x287ff30()*0.0115558);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b570() {
   return (neuron0x2880270()*0.0335577);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b5b0() {
   return (neuron0x28807d0()*-0.007254);
}

double NNfunction_nn_chi2_charge2m::synapse0x289bc30() {
   return (neuron0x28809f0()*0.0995758);
}

double NNfunction_nn_chi2_charge2m::synapse0x289bc70() {
   return (neuron0x2880d30()*0.059311);
}

double NNfunction_nn_chi2_charge2m::synapse0x289bcb0() {
   return (neuron0x2881070()*0.0545573);
}

double NNfunction_nn_chi2_charge2m::synapse0x289bcf0() {
   return (neuron0x28813b0()*-0.0322112);
}

double NNfunction_nn_chi2_charge2m::synapse0x289bd30() {
   return (neuron0x28816f0()*0.0690425);
}

double NNfunction_nn_chi2_charge2m::synapse0x289bd70() {
   return (neuron0x2881a30()*-0.231485);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c0f0() {
   return (neuron0x287ce70()*0.546532);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c130() {
   return (neuron0x287d1b0()*-0.892886);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c170() {
   return (neuron0x287d4f0()*-0.271824);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c1b0() {
   return (neuron0x287d830()*1.24458);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c1f0() {
   return (neuron0x287db70()*0.666196);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c230() {
   return (neuron0x287deb0()*0.0656618);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c270() {
   return (neuron0x287e1f0()*0.249061);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c2b0() {
   return (neuron0x287e530()*0.314552);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c2f0() {
   return (neuron0x287e870()*-0.967751);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c330() {
   return (neuron0x287ebb0()*-0.890075);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c370() {
   return (neuron0x287eef0()*0.719729);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c3b0() {
   return (neuron0x287f230()*-0.206732);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c3f0() {
   return (neuron0x287f570()*-0.726297);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c430() {
   return (neuron0x287f8b0()*-0.771066);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c470() {
   return (neuron0x287fbf0()*0.457529);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c4b0() {
   return (neuron0x287ff30()*0.910792);
}

double NNfunction_nn_chi2_charge2m::synapse0x289bf40() {
   return (neuron0x2880270()*0.352432);
}

double NNfunction_nn_chi2_charge2m::synapse0x289bf80() {
   return (neuron0x28807d0()*0.787265);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c600() {
   return (neuron0x28809f0()*1.41001);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c640() {
   return (neuron0x2880d30()*0.265433);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c680() {
   return (neuron0x2881070()*-1.42943);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c6c0() {
   return (neuron0x28813b0()*1.07743);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c700() {
   return (neuron0x28816f0()*1.47288);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c740() {
   return (neuron0x2881a30()*0.214848);
}

double NNfunction_nn_chi2_charge2m::synapse0x289cac0() {
   return (neuron0x287ce70()*-0.0293042);
}

double NNfunction_nn_chi2_charge2m::synapse0x289cb00() {
   return (neuron0x287d1b0()*-12.3258);
}

double NNfunction_nn_chi2_charge2m::synapse0x289cb40() {
   return (neuron0x287d4f0()*-0.216436);
}

double NNfunction_nn_chi2_charge2m::synapse0x289cb80() {
   return (neuron0x287d830()*0.0443826);
}

double NNfunction_nn_chi2_charge2m::synapse0x289cbc0() {
   return (neuron0x287db70()*0.0777407);
}

double NNfunction_nn_chi2_charge2m::synapse0x289cc00() {
   return (neuron0x287deb0()*0.0161336);
}

double NNfunction_nn_chi2_charge2m::synapse0x289cc40() {
   return (neuron0x287e1f0()*0.0225789);
}

double NNfunction_nn_chi2_charge2m::synapse0x289cc80() {
   return (neuron0x287e530()*0.0679737);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ccc0() {
   return (neuron0x287e870()*0.0165845);
}

double NNfunction_nn_chi2_charge2m::synapse0x289cd00() {
   return (neuron0x287ebb0()*0.0699433);
}

double NNfunction_nn_chi2_charge2m::synapse0x289cd40() {
   return (neuron0x287eef0()*0.00682036);
}

double NNfunction_nn_chi2_charge2m::synapse0x289cd80() {
   return (neuron0x287f230()*0.229856);
}

double NNfunction_nn_chi2_charge2m::synapse0x289cdc0() {
   return (neuron0x287f570()*0.0274942);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ce00() {
   return (neuron0x287f8b0()*0.0521878);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ce40() {
   return (neuron0x287fbf0()*-0.0344294);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ce80() {
   return (neuron0x287ff30()*-0.0979565);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c910() {
   return (neuron0x2880270()*0.0430934);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c950() {
   return (neuron0x28807d0()*-0.0269152);
}

double NNfunction_nn_chi2_charge2m::synapse0x289cfd0() {
   return (neuron0x28809f0()*-0.0232782);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d010() {
   return (neuron0x2880d30()*-0.114186);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d050() {
   return (neuron0x2881070()*0.0531416);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d090() {
   return (neuron0x28813b0()*-0.0323848);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d0d0() {
   return (neuron0x28816f0()*-0.0378947);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d110() {
   return (neuron0x2881a30()*3.69198);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d490() {
   return (neuron0x287ce70()*0.202406);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d4d0() {
   return (neuron0x287d1b0()*-0.00106246);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d510() {
   return (neuron0x287d4f0()*-0.0157261);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d550() {
   return (neuron0x287d830()*0.0733179);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d590() {
   return (neuron0x287db70()*0.128835);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d5d0() {
   return (neuron0x287deb0()*0.046352);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d610() {
   return (neuron0x287e1f0()*0.14615);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d650() {
   return (neuron0x287e530()*0.0947004);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d690() {
   return (neuron0x287e870()*-0.0925701);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d6d0() {
   return (neuron0x287ebb0()*0.0539427);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d710() {
   return (neuron0x287eef0()*-0.0198031);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d750() {
   return (neuron0x287f230()*0.0342525);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d790() {
   return (neuron0x287f570()*-0.100195);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d7d0() {
   return (neuron0x287f8b0()*0.00499011);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d810() {
   return (neuron0x287fbf0()*0.127639);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d850() {
   return (neuron0x287ff30()*0.0328233);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d2e0() {
   return (neuron0x2880270()*0.00688928);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d320() {
   return (neuron0x28807d0()*0.0172885);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d9a0() {
   return (neuron0x28809f0()*-0.0696976);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d9e0() {
   return (neuron0x2880d30()*-0.122369);
}

double NNfunction_nn_chi2_charge2m::synapse0x289da20() {
   return (neuron0x2881070()*-0.0301468);
}

double NNfunction_nn_chi2_charge2m::synapse0x289da60() {
   return (neuron0x28813b0()*0.0866902);
}

double NNfunction_nn_chi2_charge2m::synapse0x289daa0() {
   return (neuron0x28816f0()*-0.0507327);
}

double NNfunction_nn_chi2_charge2m::synapse0x289dae0() {
   return (neuron0x2881a30()*-0.689253);
}

double NNfunction_nn_chi2_charge2m::synapse0x289de60() {
   return (neuron0x287ce70()*-0.222922);
}

double NNfunction_nn_chi2_charge2m::synapse0x289dea0() {
   return (neuron0x287d1b0()*1.06941);
}

double NNfunction_nn_chi2_charge2m::synapse0x289dee0() {
   return (neuron0x287d4f0()*1.06594);
}

double NNfunction_nn_chi2_charge2m::synapse0x289df20() {
   return (neuron0x287d830()*0.85803);
}

double NNfunction_nn_chi2_charge2m::synapse0x289df60() {
   return (neuron0x287db70()*-0.808046);
}

double NNfunction_nn_chi2_charge2m::synapse0x289dfa0() {
   return (neuron0x287deb0()*0.202445);
}

double NNfunction_nn_chi2_charge2m::synapse0x289dfe0() {
   return (neuron0x287e1f0()*0.550718);
}

double NNfunction_nn_chi2_charge2m::synapse0x289e020() {
   return (neuron0x287e530()*0.40527);
}

double NNfunction_nn_chi2_charge2m::synapse0x289e060() {
   return (neuron0x287e870()*-0.768387);
}

double NNfunction_nn_chi2_charge2m::synapse0x289e0a0() {
   return (neuron0x287ebb0()*0.428221);
}

double NNfunction_nn_chi2_charge2m::synapse0x289e0e0() {
   return (neuron0x287eef0()*-0.619474);
}

double NNfunction_nn_chi2_charge2m::synapse0x289e120() {
   return (neuron0x287f230()*-2.8038);
}

double NNfunction_nn_chi2_charge2m::synapse0x289e160() {
   return (neuron0x287f570()*0.146236);
}

double NNfunction_nn_chi2_charge2m::synapse0x289e1a0() {
   return (neuron0x287f8b0()*-0.0112151);
}

double NNfunction_nn_chi2_charge2m::synapse0x289e1e0() {
   return (neuron0x287fbf0()*0.171166);
}

double NNfunction_nn_chi2_charge2m::synapse0x289e220() {
   return (neuron0x287ff30()*0.448022);
}

double NNfunction_nn_chi2_charge2m::synapse0x289dcb0() {
   return (neuron0x2880270()*0.251552);
}

double NNfunction_nn_chi2_charge2m::synapse0x289dcf0() {
   return (neuron0x28807d0()*0.315954);
}

double NNfunction_nn_chi2_charge2m::synapse0x289e370() {
   return (neuron0x28809f0()*0.624829);
}

double NNfunction_nn_chi2_charge2m::synapse0x289e3b0() {
   return (neuron0x2880d30()*-0.0084216);
}

double NNfunction_nn_chi2_charge2m::synapse0x289e3f0() {
   return (neuron0x2881070()*-0.0427425);
}

double NNfunction_nn_chi2_charge2m::synapse0x289e430() {
   return (neuron0x28813b0()*0.813819);
}

double NNfunction_nn_chi2_charge2m::synapse0x289e470() {
   return (neuron0x28816f0()*0.301514);
}

double NNfunction_nn_chi2_charge2m::synapse0x289e4b0() {
   return (neuron0x2881a30()*-0.671709);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886f60() {
   return (neuron0x287ce70()*0.0456582);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886fa0() {
   return (neuron0x287d1b0()*0.00629219);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886fe0() {
   return (neuron0x287d4f0()*0.203518);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887020() {
   return (neuron0x287d830()*2.78725);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887060() {
   return (neuron0x287db70()*-0.0151405);
}

double NNfunction_nn_chi2_charge2m::synapse0x28870a0() {
   return (neuron0x287deb0()*0.0712177);
}

double NNfunction_nn_chi2_charge2m::synapse0x28870e0() {
   return (neuron0x287e1f0()*0.0412633);
}

double NNfunction_nn_chi2_charge2m::synapse0x2887120() {
   return (neuron0x287e530()*-0.0601866);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ec40() {
   return (neuron0x287e870()*-0.00701679);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ec80() {
   return (neuron0x287ebb0()*-0.0984083);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ecc0() {
   return (neuron0x287eef0()*-0.0151542);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ed00() {
   return (neuron0x287f230()*-0.683425);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ed40() {
   return (neuron0x287f570()*-0.0170203);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ed80() {
   return (neuron0x287f8b0()*-0.135329);
}

double NNfunction_nn_chi2_charge2m::synapse0x289edc0() {
   return (neuron0x287fbf0()*0.193745);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ee00() {
   return (neuron0x287ff30()*-0.0785647);
}

double NNfunction_nn_chi2_charge2m::synapse0x289e680() {
   return (neuron0x2880270()*-0.0410531);
}

double NNfunction_nn_chi2_charge2m::synapse0x289e6c0() {
   return (neuron0x28807d0()*-0.0222896);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ef50() {
   return (neuron0x28809f0()*-0.135853);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ef90() {
   return (neuron0x2880d30()*-0.0945381);
}

double NNfunction_nn_chi2_charge2m::synapse0x289efd0() {
   return (neuron0x2881070()*0.0317969);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f010() {
   return (neuron0x28813b0()*-0.0388718);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f050() {
   return (neuron0x28816f0()*0.0245126);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f090() {
   return (neuron0x2881a30()*0.397152);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f410() {
   return (neuron0x287ce70()*-0.122327);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f450() {
   return (neuron0x287d1b0()*-2.76644);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f490() {
   return (neuron0x287d4f0()*2.26332);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f4d0() {
   return (neuron0x287d830()*-1.81859);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f510() {
   return (neuron0x287db70()*0.370808);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f550() {
   return (neuron0x287deb0()*0.369052);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f590() {
   return (neuron0x287e1f0()*0.599907);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f5d0() {
   return (neuron0x287e530()*-0.14419);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f610() {
   return (neuron0x287e870()*0.666536);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f650() {
   return (neuron0x287ebb0()*-0.44085);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f690() {
   return (neuron0x287eef0()*1.19081);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f6d0() {
   return (neuron0x287f230()*-1.06203);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f710() {
   return (neuron0x287f570()*0.127781);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f750() {
   return (neuron0x287f8b0()*-0.982607);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f790() {
   return (neuron0x287fbf0()*-0.794325);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f7d0() {
   return (neuron0x287ff30()*-2.23609);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f260() {
   return (neuron0x2880270()*0.0854229);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f2a0() {
   return (neuron0x28807d0()*-0.173679);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f920() {
   return (neuron0x28809f0()*-0.0555429);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f960() {
   return (neuron0x2880d30()*0.448854);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f9a0() {
   return (neuron0x2881070()*1.24993);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f9e0() {
   return (neuron0x28813b0()*0.10326);
}

double NNfunction_nn_chi2_charge2m::synapse0x289fa20() {
   return (neuron0x28816f0()*-1.099);
}

double NNfunction_nn_chi2_charge2m::synapse0x289fa60() {
   return (neuron0x2881a30()*0.349203);
}

double NNfunction_nn_chi2_charge2m::synapse0x289fde0() {
   return (neuron0x287ce70()*0.149121);
}

double NNfunction_nn_chi2_charge2m::synapse0x289fe20() {
   return (neuron0x287d1b0()*2.82761);
}

double NNfunction_nn_chi2_charge2m::synapse0x289fe60() {
   return (neuron0x287d4f0()*-2.36259);
}

double NNfunction_nn_chi2_charge2m::synapse0x289fea0() {
   return (neuron0x287d830()*1.88665);
}

double NNfunction_nn_chi2_charge2m::synapse0x289fee0() {
   return (neuron0x287db70()*-0.355799);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ff20() {
   return (neuron0x287deb0()*-0.319224);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ff60() {
   return (neuron0x287e1f0()*-0.603884);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ffa0() {
   return (neuron0x287e530()*0.302484);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ffe0() {
   return (neuron0x287e870()*-0.668235);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a0020() {
   return (neuron0x287ebb0()*0.516532);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a0060() {
   return (neuron0x287eef0()*-1.2413);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a00a0() {
   return (neuron0x287f230()*1.02175);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a00e0() {
   return (neuron0x287f570()*-0.118913);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a0120() {
   return (neuron0x287f8b0()*1.12966);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a0160() {
   return (neuron0x287fbf0()*0.852052);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a01a0() {
   return (neuron0x287ff30()*2.28957);
}

double NNfunction_nn_chi2_charge2m::synapse0x289fc30() {
   return (neuron0x2880270()*-0.0960969);
}

double NNfunction_nn_chi2_charge2m::synapse0x289fc70() {
   return (neuron0x28807d0()*0.179889);
}

double NNfunction_nn_chi2_charge2m::synapse0x28907a0() {
   return (neuron0x28809f0()*0.094868);
}

double NNfunction_nn_chi2_charge2m::synapse0x28907e0() {
   return (neuron0x2880d30()*-0.473095);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890820() {
   return (neuron0x2881070()*-1.23558);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890860() {
   return (neuron0x28813b0()*-0.0990309);
}

double NNfunction_nn_chi2_charge2m::synapse0x28908a0() {
   return (neuron0x28816f0()*1.14347);
}

double NNfunction_nn_chi2_charge2m::synapse0x28908e0() {
   return (neuron0x2881a30()*-0.437471);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890c60() {
   return (neuron0x287ce70()*-0.132047);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890ca0() {
   return (neuron0x287d1b0()*-0.888104);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890ce0() {
   return (neuron0x287d4f0()*0.457287);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890d20() {
   return (neuron0x287d830()*-0.0633483);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890d60() {
   return (neuron0x287db70()*0.729849);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890da0() {
   return (neuron0x287deb0()*-0.367815);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890de0() {
   return (neuron0x287e1f0()*0.939605);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890e20() {
   return (neuron0x287e530()*-0.454671);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890e60() {
   return (neuron0x287e870()*-0.863367);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890ea0() {
   return (neuron0x287ebb0()*0.816488);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890ee0() {
   return (neuron0x287eef0()*0.162268);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890f20() {
   return (neuron0x287f230()*0.510336);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890f60() {
   return (neuron0x287f570()*1.16691);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890fa0() {
   return (neuron0x287f8b0()*-0.576657);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890fe0() {
   return (neuron0x287fbf0()*-0.863015);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891020() {
   return (neuron0x287ff30()*0.339899);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890ab0() {
   return (neuron0x2880270()*0.169726);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890af0() {
   return (neuron0x28807d0()*-0.275661);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891170() {
   return (neuron0x28809f0()*0.457362);
}

double NNfunction_nn_chi2_charge2m::synapse0x28911b0() {
   return (neuron0x2880d30()*0.857831);
}

double NNfunction_nn_chi2_charge2m::synapse0x28911f0() {
   return (neuron0x2881070()*-0.135836);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891230() {
   return (neuron0x28813b0()*-0.0125015);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891270() {
   return (neuron0x28816f0()*1.25553);
}

double NNfunction_nn_chi2_charge2m::synapse0x28912b0() {
   return (neuron0x2881a30()*-0.292314);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891630() {
   return (neuron0x287ce70()*0.0137948);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891670() {
   return (neuron0x287d1b0()*-0.331363);
}

double NNfunction_nn_chi2_charge2m::synapse0x28916b0() {
   return (neuron0x287d4f0()*-0.304053);
}

double NNfunction_nn_chi2_charge2m::synapse0x28916f0() {
   return (neuron0x287d830()*-0.675519);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891730() {
   return (neuron0x287db70()*-0.351788);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891770() {
   return (neuron0x287deb0()*0.549042);
}

double NNfunction_nn_chi2_charge2m::synapse0x28917b0() {
   return (neuron0x287e1f0()*0.630841);
}

double NNfunction_nn_chi2_charge2m::synapse0x28917f0() {
   return (neuron0x287e530()*0.626666);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891830() {
   return (neuron0x287e870()*0.13203);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891870() {
   return (neuron0x287ebb0()*0.160517);
}

double NNfunction_nn_chi2_charge2m::synapse0x28918b0() {
   return (neuron0x287eef0()*0.647908);
}

double NNfunction_nn_chi2_charge2m::synapse0x28918f0() {
   return (neuron0x287f230()*0.0608961);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891930() {
   return (neuron0x287f570()*0.505937);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891970() {
   return (neuron0x287f8b0()*0.433061);
}

double NNfunction_nn_chi2_charge2m::synapse0x28919b0() {
   return (neuron0x287fbf0()*-0.509993);
}

double NNfunction_nn_chi2_charge2m::synapse0x28919f0() {
   return (neuron0x287ff30()*0.170538);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891480() {
   return (neuron0x2880270()*0.655059);
}

double NNfunction_nn_chi2_charge2m::synapse0x28914c0() {
   return (neuron0x28807d0()*-0.00418443);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891b40() {
   return (neuron0x28809f0()*-0.138116);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891b80() {
   return (neuron0x2880d30()*0.390651);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891bc0() {
   return (neuron0x2881070()*0.633017);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891c00() {
   return (neuron0x28813b0()*0.103734);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891c40() {
   return (neuron0x28816f0()*0.0038294);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891c80() {
   return (neuron0x2881a30()*0.0939635);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892000() {
   return (neuron0x287ce70()*0.00123161);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892040() {
   return (neuron0x287d1b0()*-12.9146);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892080() {
   return (neuron0x287d4f0()*-0.0399082);
}

double NNfunction_nn_chi2_charge2m::synapse0x28920c0() {
   return (neuron0x287d830()*0.0248162);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892100() {
   return (neuron0x287db70()*0.0956835);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892140() {
   return (neuron0x287deb0()*0.0298954);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892180() {
   return (neuron0x287e1f0()*0.148621);
}

double NNfunction_nn_chi2_charge2m::synapse0x28921c0() {
   return (neuron0x287e530()*0.024614);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892200() {
   return (neuron0x287e870()*0.0876503);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892240() {
   return (neuron0x287ebb0()*0.0297477);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892280() {
   return (neuron0x287eef0()*0.11484);
}

double NNfunction_nn_chi2_charge2m::synapse0x28922c0() {
   return (neuron0x287f230()*0.196637);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892300() {
   return (neuron0x287f570()*-0.00739936);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892340() {
   return (neuron0x287f8b0()*-0.0312925);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892380() {
   return (neuron0x287fbf0()*-0.00686576);
}

double NNfunction_nn_chi2_charge2m::synapse0x28923c0() {
   return (neuron0x287ff30()*0.0108335);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891e50() {
   return (neuron0x2880270()*-0.0414124);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891e90() {
   return (neuron0x28807d0()*-0.018791);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892510() {
   return (neuron0x28809f0()*-0.0200111);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892550() {
   return (neuron0x2880d30()*-0.0436023);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892590() {
   return (neuron0x2881070()*0.00514619);
}

double NNfunction_nn_chi2_charge2m::synapse0x28925d0() {
   return (neuron0x28813b0()*-0.00788037);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892610() {
   return (neuron0x28816f0()*0.0371272);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892650() {
   return (neuron0x2881a30()*-3.90214);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4520() {
   return (neuron0x287ce70()*-0.0376216);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4560() {
   return (neuron0x287d1b0()*-0.0461479);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a45a0() {
   return (neuron0x287d4f0()*0.618534);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a45e0() {
   return (neuron0x287d830()*-0.0202467);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4620() {
   return (neuron0x287db70()*-0.0531409);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4660() {
   return (neuron0x287deb0()*-0.0204878);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a46a0() {
   return (neuron0x287e1f0()*-0.04029);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a46e0() {
   return (neuron0x287e530()*-0.0707031);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4720() {
   return (neuron0x287e870()*-0.0317686);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4760() {
   return (neuron0x287ebb0()*0.00512615);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a47a0() {
   return (neuron0x287eef0()*-0.0093169);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a47e0() {
   return (neuron0x287f230()*0.0571809);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4820() {
   return (neuron0x287f570()*0.00853632);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4860() {
   return (neuron0x287f8b0()*-0.0316154);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a48a0() {
   return (neuron0x287fbf0()*-0.0128237);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a48e0() {
   return (neuron0x287ff30()*0.0038598);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892690() {
   return (neuron0x2880270()*-0.0269405);
}

double NNfunction_nn_chi2_charge2m::synapse0x28926d0() {
   return (neuron0x28807d0()*-0.0497542);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4a30() {
   return (neuron0x28809f0()*0.0188607);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4a70() {
   return (neuron0x2880d30()*0.0365735);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4ab0() {
   return (neuron0x2881070()*-0.0174761);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4af0() {
   return (neuron0x28813b0()*-0.0250139);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4b30() {
   return (neuron0x28816f0()*0.0881999);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4b70() {
   return (neuron0x2881a30()*-0.428919);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4ef0() {
   return (neuron0x287ce70()*-0.733581);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4f30() {
   return (neuron0x287d1b0()*0.253923);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4f70() {
   return (neuron0x287d4f0()*-0.311505);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4fb0() {
   return (neuron0x287d830()*-0.314958);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4ff0() {
   return (neuron0x287db70()*0.729459);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5030() {
   return (neuron0x287deb0()*-0.135038);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5070() {
   return (neuron0x287e1f0()*0.684065);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a50b0() {
   return (neuron0x287e530()*0.340238);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a50f0() {
   return (neuron0x287e870()*-0.244861);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5130() {
   return (neuron0x287ebb0()*1.04803);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5170() {
   return (neuron0x287eef0()*0.377338);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a51b0() {
   return (neuron0x287f230()*-0.448385);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a51f0() {
   return (neuron0x287f570()*-0.855106);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5230() {
   return (neuron0x287f8b0()*0.278645);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5270() {
   return (neuron0x287fbf0()*1.03567);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a52b0() {
   return (neuron0x287ff30()*1.29926);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4d40() {
   return (neuron0x2880270()*0.543402);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4d80() {
   return (neuron0x28807d0()*0.453819);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5400() {
   return (neuron0x28809f0()*-0.0828339);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5440() {
   return (neuron0x2880d30()*-0.13774);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5480() {
   return (neuron0x2881070()*-0.520317);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a54c0() {
   return (neuron0x28813b0()*0.690704);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5500() {
   return (neuron0x28816f0()*-0.169291);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5540() {
   return (neuron0x2881a30()*0.193188);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a58c0() {
   return (neuron0x287ce70()*-0.0579953);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5900() {
   return (neuron0x287d1b0()*0.00364276);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5940() {
   return (neuron0x287d4f0()*1.87598);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5980() {
   return (neuron0x287d830()*0.000664226);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a59c0() {
   return (neuron0x287db70()*0.00331472);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5a00() {
   return (neuron0x287deb0()*-0.00983595);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5a40() {
   return (neuron0x287e1f0()*0.0094741);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5a80() {
   return (neuron0x287e530()*-0.0142936);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5ac0() {
   return (neuron0x287e870()*0.00129852);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5b00() {
   return (neuron0x287ebb0()*0.00502297);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5b40() {
   return (neuron0x287eef0()*-0.0021227);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5b80() {
   return (neuron0x287f230()*0.0162295);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5bc0() {
   return (neuron0x287f570()*0.0119056);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5c00() {
   return (neuron0x287f8b0()*0.0185032);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5c40() {
   return (neuron0x287fbf0()*-0.00598339);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5c80() {
   return (neuron0x287ff30()*-0.0128972);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5710() {
   return (neuron0x2880270()*-0.00304318);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5750() {
   return (neuron0x28807d0()*0.000354463);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5dd0() {
   return (neuron0x28809f0()*-0.00511521);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5e10() {
   return (neuron0x2880d30()*0.00806736);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5e50() {
   return (neuron0x2881070()*0.00959354);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5e90() {
   return (neuron0x28813b0()*0.00693371);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5ed0() {
   return (neuron0x28816f0()*0.00152044);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5f10() {
   return (neuron0x2881a30()*3.35349);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a6290() {
   return (neuron0x287ce70()*-0.204169);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a62d0() {
   return (neuron0x287d1b0()*-0.00895736);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a6310() {
   return (neuron0x287d4f0()*-0.0760208);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a6350() {
   return (neuron0x287d830()*-0.0169098);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a6390() {
   return (neuron0x287db70()*-0.0381353);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a63d0() {
   return (neuron0x287deb0()*-0.0404372);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a6410() {
   return (neuron0x287e1f0()*-0.0820283);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a6450() {
   return (neuron0x287e530()*-0.061476);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a6490() {
   return (neuron0x287e870()*0.0280177);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a64d0() {
   return (neuron0x287ebb0()*0.0544123);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a6510() {
   return (neuron0x287eef0()*0.00643158);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a6550() {
   return (neuron0x287f230()*0.0419671);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a6590() {
   return (neuron0x287f570()*0.000632313);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a65d0() {
   return (neuron0x287f8b0()*0.00076338);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a6610() {
   return (neuron0x287fbf0()*-0.0440811);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a6650() {
   return (neuron0x287ff30()*-0.0438051);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a60e0() {
   return (neuron0x2880270()*0.0105796);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a6120() {
   return (neuron0x28807d0()*0.0253249);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a67a0() {
   return (neuron0x28809f0()*0.0311529);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a67e0() {
   return (neuron0x2880d30()*0.0659698);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a6820() {
   return (neuron0x2881070()*0.0310785);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a6860() {
   return (neuron0x28813b0()*0.00793967);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a68a0() {
   return (neuron0x28816f0()*0.0141037);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a68e0() {
   return (neuron0x2881a30()*-2.03804);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882e80() {
   return (neuron0x2881ed0()*-0.00336146);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882ec0() {
   return (neuron0x28827e0()*-0.841032);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884390() {
   return (neuron0x28832c0()*0.388351);
}

double NNfunction_nn_chi2_charge2m::synapse0x28843d0() {
   return (neuron0x2646690()*0.0539151);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884d60() {
   return (neuron0x28840e0()*0.0521739);
}

double NNfunction_nn_chi2_charge2m::synapse0x2884da0() {
   return (neuron0x2884ab0()*0.15906);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885b30() {
   return (neuron0x2885880()*-1.74521);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885b70() {
   return (neuron0x2886250()*0.0930011);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886500() {
   return (neuron0x2886c20()*-0.0880305);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886540() {
   return (neuron0x2887700()*-2.09603);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886ed0() {
   return (neuron0x28880d0()*0.183929);
}

double NNfunction_nn_chi2_charge2m::synapse0x2886f10() {
   return (neuron0x28851b0()*-0.0519897);
}

double NNfunction_nn_chi2_charge2m::synapse0x28879b0() {
   return (neuron0x2889c80()*-0.0382602);
}

double NNfunction_nn_chi2_charge2m::synapse0x28879f0() {
   return (neuron0x288a650()*-0.0773434);
}

double NNfunction_nn_chi2_charge2m::synapse0x2888380() {
   return (neuron0x288b020()*-0.104278);
}

double NNfunction_nn_chi2_charge2m::synapse0x28883c0() {
   return (neuron0x288b9f0()*-0.124179);
}

double NNfunction_nn_chi2_charge2m::synapse0x2885460() {
   return (neuron0x288d800()*0.723729);
}

double NNfunction_nn_chi2_charge2m::synapse0x28854a0() {
   return (neuron0x288dae0()*-0.701419);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889f30() {
   return (neuron0x288e4b0()*0.205896);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889f70() {
   return (neuron0x288ee80()*-0.96584);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a900() {
   return (neuron0x288f850()*0.217153);
}

double NNfunction_nn_chi2_charge2m::synapse0x288a940() {
   return (neuron0x2890220()*-0.00539022);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b2d0() {
   return (neuron0x2888d70()*0.180636);
}

double NNfunction_nn_chi2_charge2m::synapse0x288b310() {
   return (neuron0x2889740()*0.120225);
}

double NNfunction_nn_chi2_charge2m::synapse0x288bca0() {
   return (neuron0x2892fb0()*0.0534435);
}

double NNfunction_nn_chi2_charge2m::synapse0x288bce0() {
   return (neuron0x2893980()*0.0498247);
}

double NNfunction_nn_chi2_charge2m::synapse0x287fe10() {
   return (neuron0x2894350()*-0.35165);
}

double NNfunction_nn_chi2_charge2m::synapse0x287fe50() {
   return (neuron0x2894d20()*3.40222);
}

double NNfunction_nn_chi2_charge2m::synapse0x288dd90() {
   return (neuron0x28956f0()*0.308668);
}

double NNfunction_nn_chi2_charge2m::synapse0x288ddd0() {
   return (neuron0x28960c0()*-1.14886);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e760() {
   return (neuron0x2896a90()*0.0922698);
}

double NNfunction_nn_chi2_charge2m::synapse0x288e7a0() {
   return (neuron0x2897460()*1.53496);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f130() {
   return (neuron0x288d4f0()*-0.0120159);
}

double NNfunction_nn_chi2_charge2m::synapse0x288f170() {
   return (neuron0x289a040()*0.0184442);
}

double NNfunction_nn_chi2_charge2m::synapse0x288fb00() {
   return (neuron0x289aa10()*-0.213563);
}

double NNfunction_nn_chi2_charge2m::synapse0x288fb40() {
   return (neuron0x289b3e0()*-0.0167664);
}

double NNfunction_nn_chi2_charge2m::synapse0x28904d0() {
   return (neuron0x289bdb0()*0.0206799);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890510() {
   return (neuron0x289c780()*0.452465);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889020() {
   return (neuron0x289d150()*-1.485);
}

double NNfunction_nn_chi2_charge2m::synapse0x2889060() {
   return (neuron0x289db20()*-0.047781);
}

double NNfunction_nn_chi2_charge2m::synapse0x28928d0() {
   return (neuron0x289e4f0()*0.0330689);
}

double NNfunction_nn_chi2_charge2m::synapse0x2892910() {
   return (neuron0x289f0d0()*-0.394652);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893260() {
   return (neuron0x289faa0()*-0.364555);
}

double NNfunction_nn_chi2_charge2m::synapse0x28932a0() {
   return (neuron0x2890920()*0.0566143);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893c30() {
   return (neuron0x28912f0()*-0.0114776);
}

double NNfunction_nn_chi2_charge2m::synapse0x2893c70() {
   return (neuron0x2891cc0()*-0.273854);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894600() {
   return (neuron0x28a4300()*-1.54757);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894640() {
   return (neuron0x28a4bb0()*-0.00329124);
}

double NNfunction_nn_chi2_charge2m::synapse0x2894fd0() {
   return (neuron0x28a5580()*-0.913392);
}

double NNfunction_nn_chi2_charge2m::synapse0x2895010() {
   return (neuron0x28a5f50()*-1.36248);
}

double NNfunction_nn_chi2_charge2m::synapse0x2897710() {
   return (neuron0x2881ed0()*-1.19143);
}

double NNfunction_nn_chi2_charge2m::synapse0x2897750() {
   return (neuron0x28827e0()*1.33933);
}

double NNfunction_nn_chi2_charge2m::synapse0x288ccd0() {
   return (neuron0x28832c0()*-0.761573);
}

double NNfunction_nn_chi2_charge2m::synapse0x288cd10() {
   return (neuron0x2646690()*1.50601);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a2f0() {
   return (neuron0x28840e0()*1.75756);
}

double NNfunction_nn_chi2_charge2m::synapse0x289a330() {
   return (neuron0x2884ab0()*-1.55207);
}

double NNfunction_nn_chi2_charge2m::synapse0x289acc0() {
   return (neuron0x2885880()*1.12481);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ad00() {
   return (neuron0x2886250()*-1.33311);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b690() {
   return (neuron0x2886c20()*0.886141);
}

double NNfunction_nn_chi2_charge2m::synapse0x289b6d0() {
   return (neuron0x2887700()*-0.0252911);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c060() {
   return (neuron0x28880d0()*0.0315557);
}

double NNfunction_nn_chi2_charge2m::synapse0x289c0a0() {
   return (neuron0x28851b0()*0.694746);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ca30() {
   return (neuron0x2889c80()*0.140616);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ca70() {
   return (neuron0x288a650()*-1.72514);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d400() {
   return (neuron0x288b020()*-0.264679);
}

double NNfunction_nn_chi2_charge2m::synapse0x289d440() {
   return (neuron0x288b9f0()*0.0750937);
}

double NNfunction_nn_chi2_charge2m::synapse0x289ddd0() {
   return (neuron0x288d800()*0.477889);
}

double NNfunction_nn_chi2_charge2m::synapse0x289de10() {
   return (neuron0x288dae0()*0.863109);
}

double NNfunction_nn_chi2_charge2m::synapse0x289e7a0() {
   return (neuron0x288e4b0()*3.175);
}

double NNfunction_nn_chi2_charge2m::synapse0x289e7e0() {
   return (neuron0x288ee80()*-0.110614);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f380() {
   return (neuron0x288f850()*-1.22494);
}

double NNfunction_nn_chi2_charge2m::synapse0x289f3c0() {
   return (neuron0x2890220()*-0.163117);
}

double NNfunction_nn_chi2_charge2m::synapse0x289fd50() {
   return (neuron0x2888d70()*-0.530833);
}

double NNfunction_nn_chi2_charge2m::synapse0x289fd90() {
   return (neuron0x2889740()*-0.625528);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890bd0() {
   return (neuron0x2892fb0()*0.400351);
}

double NNfunction_nn_chi2_charge2m::synapse0x2890c10() {
   return (neuron0x2893980()*-1.18582);
}

double NNfunction_nn_chi2_charge2m::synapse0x28915a0() {
   return (neuron0x2894350()*0.69481);
}

double NNfunction_nn_chi2_charge2m::synapse0x28915e0() {
   return (neuron0x2894d20()*0.426841);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891f70() {
   return (neuron0x28956f0()*0.390949);
}

double NNfunction_nn_chi2_charge2m::synapse0x2891fb0() {
   return (neuron0x28960c0()*0.896403);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4490() {
   return (neuron0x2896a90()*0.351172);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a44d0() {
   return (neuron0x2897460()*-0.014482);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4e60() {
   return (neuron0x288d4f0()*-0.746312);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a4ea0() {
   return (neuron0x289a040()*-0.467497);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5830() {
   return (neuron0x289aa10()*0.135491);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a5870() {
   return (neuron0x289b3e0()*-0.664147);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a6200() {
   return (neuron0x289bdb0()*-0.224583);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a6240() {
   return (neuron0x289c780()*-4.19404);
}

double NNfunction_nn_chi2_charge2m::synapse0x28820f0() {
   return (neuron0x289d150()*0.457203);
}

double NNfunction_nn_chi2_charge2m::synapse0x2882130() {
   return (neuron0x289db20()*-0.34998);
}

double NNfunction_nn_chi2_charge2m::synapse0x28959a0() {
   return (neuron0x289e4f0()*-0.563597);
}

double NNfunction_nn_chi2_charge2m::synapse0x28959e0() {
   return (neuron0x289f0d0()*1.2748);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a6920() {
   return (neuron0x289faa0()*1.29737);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a6960() {
   return (neuron0x2890920()*-0.479409);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a69a0() {
   return (neuron0x28912f0()*2.02729);
}

double NNfunction_nn_chi2_charge2m::synapse0x28a69e0() {
   return (neuron0x2891cc0()*-5.00413);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ad890() {
   return (neuron0x28a4300()*0.748925);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ad8d0() {
   return (neuron0x28a4bb0()*0.666919);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ad910() {
   return (neuron0x28a5580()*1.1538);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ad950() {
   return (neuron0x28a5f50()*-1.31768);
}

double NNfunction_nn_chi2_charge2m::synapse0x28adcd0() {
   return (neuron0x2881ed0()*1.04956);
}

double NNfunction_nn_chi2_charge2m::synapse0x28add10() {
   return (neuron0x28827e0()*0.640174);
}

double NNfunction_nn_chi2_charge2m::synapse0x28add50() {
   return (neuron0x28832c0()*1.12407);
}

double NNfunction_nn_chi2_charge2m::synapse0x28add90() {
   return (neuron0x2646690()*-1.90628);
}

double NNfunction_nn_chi2_charge2m::synapse0x28addd0() {
   return (neuron0x28840e0()*-1.60922);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ade10() {
   return (neuron0x2884ab0()*-0.367461);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ade50() {
   return (neuron0x2885880()*-0.946163);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ade90() {
   return (neuron0x2886250()*0.622538);
}

double NNfunction_nn_chi2_charge2m::synapse0x28aded0() {
   return (neuron0x2886c20()*-0.683161);
}

double NNfunction_nn_chi2_charge2m::synapse0x28adf10() {
   return (neuron0x2887700()*-1.67669);
}

double NNfunction_nn_chi2_charge2m::synapse0x28adf50() {
   return (neuron0x28880d0()*1.55984);
}

double NNfunction_nn_chi2_charge2m::synapse0x28adf90() {
   return (neuron0x28851b0()*0.686893);
}

double NNfunction_nn_chi2_charge2m::synapse0x28adfd0() {
   return (neuron0x2889c80()*-0.0188019);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae010() {
   return (neuron0x288a650()*1.22799);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae050() {
   return (neuron0x288b020()*0.262125);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae090() {
   return (neuron0x288b9f0()*-0.153076);
}

double NNfunction_nn_chi2_charge2m::synapse0x28adb20() {
   return (neuron0x288d800()*-0.566399);
}

double NNfunction_nn_chi2_charge2m::synapse0x28adb60() {
   return (neuron0x288dae0()*1.54221);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae1e0() {
   return (neuron0x288e4b0()*-2.14903);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae220() {
   return (neuron0x288ee80()*-1.19381);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae260() {
   return (neuron0x288f850()*-0.681269);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae2a0() {
   return (neuron0x2890220()*0.321144);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae2e0() {
   return (neuron0x2888d70()*0.683194);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae320() {
   return (neuron0x2889740()*0.347987);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae360() {
   return (neuron0x2892fb0()*-0.734789);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae3a0() {
   return (neuron0x2893980()*1.16334);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae3e0() {
   return (neuron0x2894350()*-0.554477);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae420() {
   return (neuron0x2894d20()*1.89789);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae460() {
   return (neuron0x28956f0()*-0.348695);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae4a0() {
   return (neuron0x28960c0()*-0.486823);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae4e0() {
   return (neuron0x2896a90()*-1.87388);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae520() {
   return (neuron0x2897460()*-1.16992);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae0d0() {
   return (neuron0x288d4f0()*1.59644);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae110() {
   return (neuron0x289a040()*-0.32351);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae150() {
   return (neuron0x289aa10()*-0.114812);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae190() {
   return (neuron0x289b3e0()*0.819698);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae770() {
   return (neuron0x289bdb0()*0.343055);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae7b0() {
   return (neuron0x289c780()*4.16205);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae7f0() {
   return (neuron0x289d150()*-1.01196);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae830() {
   return (neuron0x289db20()*0.477);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae870() {
   return (neuron0x289e4f0()*0.741378);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae8b0() {
   return (neuron0x289f0d0()*0.481545);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae8f0() {
   return (neuron0x289faa0()*0.440602);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae930() {
   return (neuron0x2890920()*0.400652);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae970() {
   return (neuron0x28912f0()*-1.9435);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae9b0() {
   return (neuron0x2891cc0()*5.57345);
}

double NNfunction_nn_chi2_charge2m::synapse0x28ae9f0() {
   return (neuron0x28a4300()*1.63994);
}

double NNfunction_nn_chi2_charge2m::synapse0x28aea30() {
   return (neuron0x28a4bb0()*-0.505141);
}

double NNfunction_nn_chi2_charge2m::synapse0x28aea70() {
   return (neuron0x28a5580()*-0.0448608);
}

double NNfunction_nn_chi2_charge2m::synapse0x28aeab0() {
   return (neuron0x28a5f50()*0.0265258);
}

double NNfunction_nn_chi2_charge2m::synapse0x28aee30() {
   return (neuron0x2881ed0()*-0.120787);
}

double NNfunction_nn_chi2_charge2m::synapse0x28aee70() {
   return (neuron0x28827e0()*2.45928);
}

double NNfunction_nn_chi2_charge2m::synapse0x28aeeb0() {
   return (neuron0x28832c0()*-0.362889);
}

double NNfunction_nn_chi2_charge2m::synapse0x28aeef0() {
   return (neuron0x2646690()*0.37486);
}

double NNfunction_nn_chi2_charge2m::synapse0x28aef30() {
   return (neuron0x28840e0()*0.173796);
}

double NNfunction_nn_chi2_charge2m::synapse0x28aef70() {
   return (neuron0x2884ab0()*-0.970141);
}

double NNfunction_nn_chi2_charge2m::synapse0x28aefb0() {
   return (neuron0x2885880()*-2.80338);
}

double NNfunction_nn_chi2_charge2m::synapse0x28aeff0() {
   return (neuron0x2886250()*0.0160828);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af030() {
   return (neuron0x2886c20()*-0.0628481);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af070() {
   return (neuron0x2887700()*-0.766209);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af0b0() {
   return (neuron0x28880d0()*1.53276);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af0f0() {
   return (neuron0x28851b0()*0.582297);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af130() {
   return (neuron0x2889c80()*0.0864579);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af170() {
   return (neuron0x288a650()*-0.465428);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af1b0() {
   return (neuron0x288b020()*0.0312057);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af1f0() {
   return (neuron0x288b9f0()*-0.138977);
}

double NNfunction_nn_chi2_charge2m::synapse0x28aec80() {
   return (neuron0x288d800()*0.944797);
}

double NNfunction_nn_chi2_charge2m::synapse0x28aecc0() {
   return (neuron0x288dae0()*-0.687946);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af340() {
   return (neuron0x288e4b0()*1.17397);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af380() {
   return (neuron0x288ee80()*-1.5982);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af3c0() {
   return (neuron0x288f850()*-0.956379);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af400() {
   return (neuron0x2890220()*-0.0256078);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af440() {
   return (neuron0x2888d70()*0.382056);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af480() {
   return (neuron0x2889740()*-0.288576);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af4c0() {
   return (neuron0x2892fb0()*-0.314987);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af500() {
   return (neuron0x2893980()*0.00682191);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af540() {
   return (neuron0x2894350()*0.24536);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af580() {
   return (neuron0x2894d20()*-0.50057);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af5c0() {
   return (neuron0x28956f0()*1.734);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af600() {
   return (neuron0x28960c0()*-2.50743);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af640() {
   return (neuron0x2896a90()*-0.265386);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af680() {
   return (neuron0x2897460()*2.62362);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af230() {
   return (neuron0x288d4f0()*0.00927241);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af270() {
   return (neuron0x289a040()*0.23956);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af2b0() {
   return (neuron0x289aa10()*-0.945138);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af2f0() {
   return (neuron0x289b3e0()*0.745461);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af8d0() {
   return (neuron0x289bdb0()*0.0596456);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af910() {
   return (neuron0x289c780()*1.96479);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af950() {
   return (neuron0x289d150()*-0.0928346);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af990() {
   return (neuron0x289db20()*0.193822);
}

double NNfunction_nn_chi2_charge2m::synapse0x28af9d0() {
   return (neuron0x289e4f0()*0.750124);
}

double NNfunction_nn_chi2_charge2m::synapse0x28afa10() {
   return (neuron0x289f0d0()*0.994453);
}

double NNfunction_nn_chi2_charge2m::synapse0x28afa50() {
   return (neuron0x289faa0()*0.906709);
}

double NNfunction_nn_chi2_charge2m::synapse0x28afa90() {
   return (neuron0x2890920()*0.148065);
}

double NNfunction_nn_chi2_charge2m::synapse0x28afad0() {
   return (neuron0x28912f0()*-0.438378);
}

double NNfunction_nn_chi2_charge2m::synapse0x28afb10() {
   return (neuron0x2891cc0()*-1.28713);
}

double NNfunction_nn_chi2_charge2m::synapse0x28afb50() {
   return (neuron0x28a4300()*-0.435644);
}

double NNfunction_nn_chi2_charge2m::synapse0x28afb90() {
   return (neuron0x28a4bb0()*-0.0945291);
}

double NNfunction_nn_chi2_charge2m::synapse0x28afbd0() {
   return (neuron0x28a5580()*-0.0805226);
}

double NNfunction_nn_chi2_charge2m::synapse0x28afc10() {
   return (neuron0x28a5f50()*-0.178665);
}

double NNfunction_nn_chi2_charge2m::synapse0x28aff90() {
   return (neuron0x2881ed0()*0.0441573);
}

double NNfunction_nn_chi2_charge2m::synapse0x28affd0() {
   return (neuron0x28827e0()*-0.809511);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0010() {
   return (neuron0x28832c0()*-1.13963);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0050() {
   return (neuron0x2646690()*-0.140079);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0090() {
   return (neuron0x28840e0()*-0.0514805);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b00d0() {
   return (neuron0x2884ab0()*0.242168);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0110() {
   return (neuron0x2885880()*1.27142);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0150() {
   return (neuron0x2886250()*0.0104163);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0190() {
   return (neuron0x2886c20()*0.0416572);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b01d0() {
   return (neuron0x2887700()*1.44277);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0210() {
   return (neuron0x28880d0()*-0.51366);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0250() {
   return (neuron0x28851b0()*-0.185454);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0290() {
   return (neuron0x2889c80()*-0.0217176);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b02d0() {
   return (neuron0x288a650()*0.151775);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0310() {
   return (neuron0x288b020()*-1.70401);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0350() {
   return (neuron0x288b9f0()*0.0550809);
}

double NNfunction_nn_chi2_charge2m::synapse0x28afde0() {
   return (neuron0x288d800()*-0.337491);
}

double NNfunction_nn_chi2_charge2m::synapse0x28afe20() {
   return (neuron0x288dae0()*-3.71792);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b04a0() {
   return (neuron0x288e4b0()*-0.435264);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b04e0() {
   return (neuron0x288ee80()*1.00481);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0520() {
   return (neuron0x288f850()*0.229269);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0560() {
   return (neuron0x2890220()*0.00684176);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b05a0() {
   return (neuron0x2888d70()*-0.163902);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b05e0() {
   return (neuron0x2889740()*0.0745453);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0620() {
   return (neuron0x2892fb0()*0.103459);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0660() {
   return (neuron0x2893980()*-0.00633016);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b06a0() {
   return (neuron0x2894350()*-0.03938);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b06e0() {
   return (neuron0x2894d20()*-0.348718);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0720() {
   return (neuron0x28956f0()*-0.713032);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0760() {
   return (neuron0x28960c0()*0.491432);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b07a0() {
   return (neuron0x2896a90()*0.07887);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b07e0() {
   return (neuron0x2897460()*-0.389852);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0390() {
   return (neuron0x288d4f0()*-0.00205436);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b03d0() {
   return (neuron0x289a040()*-0.0909006);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0410() {
   return (neuron0x289aa10()*0.331735);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0450() {
   return (neuron0x289b3e0()*-0.284789);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0a30() {
   return (neuron0x289bdb0()*-0.0201174);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0a70() {
   return (neuron0x289c780()*-0.540798);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0ab0() {
   return (neuron0x289d150()*0.12755);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0af0() {
   return (neuron0x289db20()*-0.0543581);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0b30() {
   return (neuron0x289e4f0()*-0.301375);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0b70() {
   return (neuron0x289f0d0()*-0.237207);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0bb0() {
   return (neuron0x289faa0()*-0.21045);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0bf0() {
   return (neuron0x2890920()*-0.0550318);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0c30() {
   return (neuron0x28912f0()*0.159256);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0c70() {
   return (neuron0x2891cc0()*0.363046);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0cb0() {
   return (neuron0x28a4300()*0.0715938);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0cf0() {
   return (neuron0x28a4bb0()*0.0363147);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0d30() {
   return (neuron0x28a5580()*-1.27142);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0d70() {
   return (neuron0x28a5f50()*0.379404);
}

double NNfunction_nn_chi2_charge2m::synapse0x2881e90() {
   return (neuron0x28ad150()*-4.91147);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b0fd0() {
   return (neuron0x28ad4f0()*4.97287);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b1010() {
   return (neuron0x28ad990()*5.13525);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b1050() {
   return (neuron0x28aeaf0()*-3.01795);
}

double NNfunction_nn_chi2_charge2m::synapse0x28b1090() {
   return (neuron0x28afc50()*-9.99747);
}

