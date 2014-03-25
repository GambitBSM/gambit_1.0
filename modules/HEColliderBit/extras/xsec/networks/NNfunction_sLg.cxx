#include "NNfunction_sLg.h"
#include <cmath>

double NNfunction_sLg::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.512)/15.3144;
   input1 = (in1 - 0.64181)/1157.71;
   input2 = (in2 - 661.799)/624.444;
   input3 = (in3 - -40.7603)/784.611;
   input4 = (in4 - 1055.75)/957.783;
   input5 = (in5 - 895.924)/950.57;
   input6 = (in6 - 902.816)/948.801;
   input7 = (in7 - 927.982)/933.729;
   input8 = (in8 - 928.223)/976.398;
   input9 = (in9 - 911.759)/961.807;
   input10 = (in10 - 982.316)/953.642;
   input11 = (in11 - 725.739)/867.811;
   input12 = (in12 - 432.405)/458.291;
   input13 = (in13 - 500.291)/512.11;
   input14 = (in14 - 724.243)/816.996;
   input15 = (in15 - 723.218)/814.507;
   input16 = (in16 - 541.108)/567.217;
   input17 = (in17 - 762.56)/902.784;
   input18 = (in18 - 761.501)/907.044;
   input19 = (in19 - 806.176)/877.959;
   input20 = (in20 - -4.9615)/489.875;
   input21 = (in21 - -2.21998)/1150.4;
   input22 = (in22 - -2.24548)/1202.82;
   input23 = (in23 - -207.805)/610.039;
   switch(index) {
     case 0:
         return neuron0x26aebf0();
     default:
         return 0.;
   }
}

double NNfunction_sLg::Value(int index, double* input) {
   input0 = (input[0] - 23.512)/15.3144;
   input1 = (input[1] - 0.64181)/1157.71;
   input2 = (input[2] - 661.799)/624.444;
   input3 = (input[3] - -40.7603)/784.611;
   input4 = (input[4] - 1055.75)/957.783;
   input5 = (input[5] - 895.924)/950.57;
   input6 = (input[6] - 902.816)/948.801;
   input7 = (input[7] - 927.982)/933.729;
   input8 = (input[8] - 928.223)/976.398;
   input9 = (input[9] - 911.759)/961.807;
   input10 = (input[10] - 982.316)/953.642;
   input11 = (input[11] - 725.739)/867.811;
   input12 = (input[12] - 432.405)/458.291;
   input13 = (input[13] - 500.291)/512.11;
   input14 = (input[14] - 724.243)/816.996;
   input15 = (input[15] - 723.218)/814.507;
   input16 = (input[16] - 541.108)/567.217;
   input17 = (input[17] - 762.56)/902.784;
   input18 = (input[18] - 761.501)/907.044;
   input19 = (input[19] - 806.176)/877.959;
   input20 = (input[20] - -4.9615)/489.875;
   input21 = (input[21] - -2.21998)/1150.4;
   input22 = (input[22] - -2.24548)/1202.82;
   input23 = (input[23] - -207.805)/610.039;
   switch(index) {
     case 0:
         return neuron0x26aebf0();
     default:
         return 0.;
   }
}

double NNfunction_sLg::neuron0x267ace0() {
   return input0;
}

double NNfunction_sLg::neuron0x267b020() {
   return input1;
}

double NNfunction_sLg::neuron0x267b360() {
   return input2;
}

double NNfunction_sLg::neuron0x267b6a0() {
   return input3;
}

double NNfunction_sLg::neuron0x267b9e0() {
   return input4;
}

double NNfunction_sLg::neuron0x267bd20() {
   return input5;
}

double NNfunction_sLg::neuron0x267c060() {
   return input6;
}

double NNfunction_sLg::neuron0x267c3a0() {
   return input7;
}

double NNfunction_sLg::neuron0x267c6e0() {
   return input8;
}

double NNfunction_sLg::neuron0x267ca20() {
   return input9;
}

double NNfunction_sLg::neuron0x267cd60() {
   return input10;
}

double NNfunction_sLg::neuron0x267d0a0() {
   return input11;
}

double NNfunction_sLg::neuron0x267d3e0() {
   return input12;
}

double NNfunction_sLg::neuron0x267d720() {
   return input13;
}

double NNfunction_sLg::neuron0x267da60() {
   return input14;
}

double NNfunction_sLg::neuron0x267dda0() {
   return input15;
}

double NNfunction_sLg::neuron0x267e0e0() {
   return input16;
}

double NNfunction_sLg::neuron0x267e640() {
   return input17;
}

double NNfunction_sLg::neuron0x267e860() {
   return input18;
}

double NNfunction_sLg::neuron0x267eba0() {
   return input19;
}

double NNfunction_sLg::neuron0x267eee0() {
   return input20;
}

double NNfunction_sLg::neuron0x267f220() {
   return input21;
}

double NNfunction_sLg::neuron0x267f560() {
   return input22;
}

double NNfunction_sLg::neuron0x267f8a0() {
   return input23;
}

double NNfunction_sLg::input0x267fd10() {
   double input = 0.393197;
   input += synapse0x267aba0();
   input += synapse0x267abe0();
   input += synapse0x267ffc0();
   input += synapse0x2680000();
   input += synapse0x2680040();
   input += synapse0x2680080();
   input += synapse0x26800c0();
   input += synapse0x2680100();
   input += synapse0x2680140();
   input += synapse0x2680180();
   input += synapse0x26801c0();
   input += synapse0x2680200();
   input += synapse0x2680240();
   input += synapse0x2680280();
   input += synapse0x26802c0();
   input += synapse0x2680300();
   input += synapse0x267ab10();
   input += synapse0x267ab50();
   input += synapse0x242c790();
   input += synapse0x242c7d0();
   input += synapse0x2680560();
   input += synapse0x26805a0();
   input += synapse0x26805e0();
   input += synapse0x2680620();
   return input;
}

double NNfunction_sLg::neuron0x267fd10() {
   double input = input0x267fd10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2680660() {
   double input = 1.26671;
   input += synapse0x26809a0();
   input += synapse0x26809e0();
   input += synapse0x2680a20();
   input += synapse0x2680a60();
   input += synapse0x2680aa0();
   input += synapse0x2680ae0();
   input += synapse0x2680b20();
   input += synapse0x2680b60();
   input += synapse0x2680ba0();
   input += synapse0x2680450();
   input += synapse0x2680490();
   input += synapse0x26804d0();
   input += synapse0x2680510();
   input += synapse0x2680df0();
   input += synapse0x2680e30();
   input += synapse0x2680e70();
   input += synapse0x26807f0();
   input += synapse0x2680830();
   input += synapse0x2680fc0();
   input += synapse0x2681000();
   input += synapse0x2681040();
   input += synapse0x2681080();
   input += synapse0x26810c0();
   input += synapse0x2681100();
   return input;
}

double NNfunction_sLg::neuron0x2680660() {
   double input = input0x2680660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2681140() {
   double input = -0.167349;
   input += synapse0x2681480();
   input += synapse0x26814c0();
   input += synapse0x2681500();
   input += synapse0x2681540();
   input += synapse0x2681580();
   input += synapse0x26815c0();
   input += synapse0x2681600();
   input += synapse0x2681640();
   input += synapse0x2681680();
   input += synapse0x26816c0();
   input += synapse0x2681700();
   input += synapse0x2681740();
   input += synapse0x2681780();
   input += synapse0x26817c0();
   input += synapse0x2681800();
   input += synapse0x2681840();
   input += synapse0x26812d0();
   input += synapse0x2681310();
   input += synapse0x242cbc0();
   input += synapse0x243a2e0();
   input += synapse0x243a320();
   input += synapse0x2669d70();
   input += synapse0x2669db0();
   input += synapse0x2669df0();
   return input;
}

double NNfunction_sLg::neuron0x2681140() {
   double input = input0x2681140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2680be0() {
   double input = -0.187493;
   input += synapse0x243ab80();
   input += synapse0x2680d70();
   input += synapse0x2680db0();
   input += synapse0x2681990();
   input += synapse0x26819d0();
   input += synapse0x2681a10();
   input += synapse0x2681a50();
   input += synapse0x2681a90();
   input += synapse0x2681ad0();
   input += synapse0x2681b10();
   input += synapse0x2681b50();
   input += synapse0x2681b90();
   input += synapse0x2681bd0();
   input += synapse0x2681c10();
   input += synapse0x2681c50();
   input += synapse0x2681c90();
   input += synapse0x267ac20();
   input += synapse0x267ac60();
   input += synapse0x267aca0();
   input += synapse0x2681de0();
   input += synapse0x2681e20();
   input += synapse0x2681e60();
   input += synapse0x2681ea0();
   input += synapse0x2681ee0();
   return input;
}

double NNfunction_sLg::neuron0x2680be0() {
   double input = input0x2680be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2681f20() {
   double input = 1.11299;
   input += synapse0x2682260();
   input += synapse0x26822a0();
   input += synapse0x26822e0();
   input += synapse0x2682320();
   input += synapse0x2682360();
   input += synapse0x26823a0();
   input += synapse0x26823e0();
   input += synapse0x2682420();
   input += synapse0x2682460();
   input += synapse0x26824a0();
   input += synapse0x26824e0();
   input += synapse0x2682520();
   input += synapse0x2682560();
   input += synapse0x26825a0();
   input += synapse0x26825e0();
   input += synapse0x2682620();
   input += synapse0x26820b0();
   input += synapse0x26820f0();
   input += synapse0x2682770();
   input += synapse0x26827b0();
   input += synapse0x26827f0();
   input += synapse0x2682830();
   input += synapse0x2682870();
   input += synapse0x26828b0();
   return input;
}

double NNfunction_sLg::neuron0x2681f20() {
   double input = input0x2681f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x26828f0() {
   double input = 0.0610181;
   input += synapse0x2682c30();
   input += synapse0x2682c70();
   input += synapse0x2682cb0();
   input += synapse0x2682cf0();
   input += synapse0x2682d30();
   input += synapse0x2682d70();
   input += synapse0x2682db0();
   input += synapse0x2682df0();
   input += synapse0x2682e30();
   input += synapse0x243a650();
   input += synapse0x243a690();
   input += synapse0x243a6d0();
   input += synapse0x243a710();
   input += synapse0x243a750();
   input += synapse0x243a790();
   input += synapse0x243a7d0();
   input += synapse0x2682a80();
   input += synapse0x2682ac0();
   input += synapse0x243a920();
   input += synapse0x243a960();
   input += synapse0x243a9a0();
   input += synapse0x243a9e0();
   input += synapse0x243aa20();
   input += synapse0x2683680();
   return input;
}

double NNfunction_sLg::neuron0x26828f0() {
   double input = input0x26828f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x26836c0() {
   double input = 0.104718;
   input += synapse0x2683a00();
   input += synapse0x2683a40();
   input += synapse0x2683a80();
   input += synapse0x2683ac0();
   input += synapse0x2683b00();
   input += synapse0x2683b40();
   input += synapse0x2683b80();
   input += synapse0x2683bc0();
   input += synapse0x2683c00();
   input += synapse0x2683c40();
   input += synapse0x2683c80();
   input += synapse0x2683cc0();
   input += synapse0x2683d00();
   input += synapse0x2683d40();
   input += synapse0x2683d80();
   input += synapse0x2683dc0();
   input += synapse0x2683850();
   input += synapse0x2683890();
   input += synapse0x2683f10();
   input += synapse0x2683f50();
   input += synapse0x2683f90();
   input += synapse0x2683fd0();
   input += synapse0x2684010();
   input += synapse0x2684050();
   return input;
}

double NNfunction_sLg::neuron0x26836c0() {
   double input = input0x26836c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2684090() {
   double input = 3.68967;
   input += synapse0x26843d0();
   input += synapse0x2684410();
   input += synapse0x2684450();
   input += synapse0x2684490();
   input += synapse0x26844d0();
   input += synapse0x2684510();
   input += synapse0x2684550();
   input += synapse0x2684590();
   input += synapse0x26845d0();
   input += synapse0x2684610();
   input += synapse0x2684650();
   input += synapse0x2684690();
   input += synapse0x26846d0();
   input += synapse0x2684710();
   input += synapse0x2684750();
   input += synapse0x2684790();
   input += synapse0x2684220();
   input += synapse0x2684260();
   input += synapse0x26848e0();
   input += synapse0x2684920();
   input += synapse0x2684960();
   input += synapse0x26849a0();
   input += synapse0x26849e0();
   input += synapse0x2684a20();
   return input;
}

double NNfunction_sLg::neuron0x2684090() {
   double input = input0x2684090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2684a60() {
   double input = -1.31293;
   input += synapse0x267e530();
   input += synapse0x267e570();
   input += synapse0x267e5b0();
   input += synapse0x267e5f0();
   input += synapse0x2684fb0();
   input += synapse0x2684ff0();
   input += synapse0x2685030();
   input += synapse0x2685070();
   input += synapse0x26850b0();
   input += synapse0x26850f0();
   input += synapse0x2685130();
   input += synapse0x2685170();
   input += synapse0x26851b0();
   input += synapse0x26851f0();
   input += synapse0x2685230();
   input += synapse0x2685270();
   input += synapse0x2684bf0();
   input += synapse0x2684c30();
   input += synapse0x26853c0();
   input += synapse0x2685400();
   input += synapse0x2685440();
   input += synapse0x2685480();
   input += synapse0x26854c0();
   input += synapse0x2685500();
   return input;
}

double NNfunction_sLg::neuron0x2684a60() {
   double input = input0x2684a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2685540() {
   double input = -0.667414;
   input += synapse0x2685880();
   input += synapse0x26858c0();
   input += synapse0x2685900();
   input += synapse0x2685940();
   input += synapse0x2685980();
   input += synapse0x26859c0();
   input += synapse0x2685a00();
   input += synapse0x2685a40();
   input += synapse0x2685a80();
   input += synapse0x2685ac0();
   input += synapse0x2685b00();
   input += synapse0x2685b40();
   input += synapse0x2685b80();
   input += synapse0x2685bc0();
   input += synapse0x2685c00();
   input += synapse0x2685c40();
   input += synapse0x26856d0();
   input += synapse0x2685710();
   input += synapse0x2685d90();
   input += synapse0x2685dd0();
   input += synapse0x2685e10();
   input += synapse0x2685e50();
   input += synapse0x2685e90();
   input += synapse0x2685ed0();
   return input;
}

double NNfunction_sLg::neuron0x2685540() {
   double input = input0x2685540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2685f10() {
   double input = 0.250275;
   input += synapse0x2686250();
   input += synapse0x2686290();
   input += synapse0x26862d0();
   input += synapse0x2686310();
   input += synapse0x2686350();
   input += synapse0x2686390();
   input += synapse0x26863d0();
   input += synapse0x2686410();
   input += synapse0x2686450();
   input += synapse0x2686490();
   input += synapse0x26864d0();
   input += synapse0x2686510();
   input += synapse0x2686550();
   input += synapse0x2686590();
   input += synapse0x26865d0();
   input += synapse0x2686610();
   input += synapse0x26860a0();
   input += synapse0x26860e0();
   input += synapse0x2682e70();
   input += synapse0x2682eb0();
   input += synapse0x2682ef0();
   input += synapse0x2682f30();
   input += synapse0x2682f70();
   input += synapse0x2682fb0();
   return input;
}

double NNfunction_sLg::neuron0x2685f10() {
   double input = input0x2685f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2682ff0() {
   double input = -2.09488;
   input += synapse0x2683330();
   input += synapse0x2683370();
   input += synapse0x26833b0();
   input += synapse0x26833f0();
   input += synapse0x2683430();
   input += synapse0x2683470();
   input += synapse0x26834b0();
   input += synapse0x26834f0();
   input += synapse0x2683530();
   input += synapse0x2683570();
   input += synapse0x26835b0();
   input += synapse0x26835f0();
   input += synapse0x2683630();
   input += synapse0x2687770();
   input += synapse0x26877b0();
   input += synapse0x26877f0();
   input += synapse0x2683180();
   input += synapse0x26831c0();
   input += synapse0x2687940();
   input += synapse0x2687980();
   input += synapse0x26879c0();
   input += synapse0x2687a00();
   input += synapse0x2687a40();
   input += synapse0x2687a80();
   return input;
}

double NNfunction_sLg::neuron0x2682ff0() {
   double input = input0x2682ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2687ac0() {
   double input = -1.52504;
   input += synapse0x2687e00();
   input += synapse0x2687e40();
   input += synapse0x2687e80();
   input += synapse0x2687ec0();
   input += synapse0x2687f00();
   input += synapse0x2687f40();
   input += synapse0x2687f80();
   input += synapse0x2687fc0();
   input += synapse0x2688000();
   input += synapse0x2688040();
   input += synapse0x2688080();
   input += synapse0x26880c0();
   input += synapse0x2688100();
   input += synapse0x2688140();
   input += synapse0x2688180();
   input += synapse0x26881c0();
   input += synapse0x2687c50();
   input += synapse0x2687c90();
   input += synapse0x2688310();
   input += synapse0x2688350();
   input += synapse0x2688390();
   input += synapse0x26883d0();
   input += synapse0x2688410();
   input += synapse0x2688450();
   return input;
}

double NNfunction_sLg::neuron0x2687ac0() {
   double input = input0x2687ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2688490() {
   double input = 0.178053;
   input += synapse0x26887d0();
   input += synapse0x2688810();
   input += synapse0x2688850();
   input += synapse0x2688890();
   input += synapse0x26888d0();
   input += synapse0x2688910();
   input += synapse0x2688950();
   input += synapse0x2688990();
   input += synapse0x26889d0();
   input += synapse0x2688a10();
   input += synapse0x2688a50();
   input += synapse0x2688a90();
   input += synapse0x2688ad0();
   input += synapse0x2688b10();
   input += synapse0x2688b50();
   input += synapse0x2688b90();
   input += synapse0x2688620();
   input += synapse0x2688660();
   input += synapse0x2688ce0();
   input += synapse0x2688d20();
   input += synapse0x2688d60();
   input += synapse0x2688da0();
   input += synapse0x2688de0();
   input += synapse0x2688e20();
   return input;
}

double NNfunction_sLg::neuron0x2688490() {
   double input = input0x2688490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2688e60() {
   double input = 0.138345;
   input += synapse0x26891a0();
   input += synapse0x26891e0();
   input += synapse0x2689220();
   input += synapse0x2689260();
   input += synapse0x26892a0();
   input += synapse0x26892e0();
   input += synapse0x2689320();
   input += synapse0x2689360();
   input += synapse0x26893a0();
   input += synapse0x26893e0();
   input += synapse0x2689420();
   input += synapse0x2689460();
   input += synapse0x26894a0();
   input += synapse0x26894e0();
   input += synapse0x2689520();
   input += synapse0x2689560();
   input += synapse0x2688ff0();
   input += synapse0x2689030();
   input += synapse0x26896b0();
   input += synapse0x26896f0();
   input += synapse0x2689730();
   input += synapse0x2689770();
   input += synapse0x26897b0();
   input += synapse0x26897f0();
   return input;
}

double NNfunction_sLg::neuron0x2688e60() {
   double input = input0x2688e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2689830() {
   double input = 0.619962;
   input += synapse0x2689b70();
   input += synapse0x267af00();
   input += synapse0x267af40();
   input += synapse0x267b240();
   input += synapse0x267b280();
   input += synapse0x267b580();
   input += synapse0x267b5c0();
   input += synapse0x267b8c0();
   input += synapse0x267b900();
   input += synapse0x267bc00();
   input += synapse0x267bc40();
   input += synapse0x267bf40();
   input += synapse0x267bf80();
   input += synapse0x267c280();
   input += synapse0x267c2c0();
   input += synapse0x267c5c0();
   input += synapse0x267c600();
   input += synapse0x267c900();
   input += synapse0x267c940();
   input += synapse0x267cc40();
   input += synapse0x267cc80();
   input += synapse0x267cf80();
   input += synapse0x267cfc0();
   input += synapse0x267d2c0();
   return input;
}

double NNfunction_sLg::neuron0x2689830() {
   double input = input0x2689830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x268b640() {
   double input = 0.821955;
   input += synapse0x267d300();
   input += synapse0x267dfc0();
   input += synapse0x267e000();
   input += synapse0x26899c0();
   input += synapse0x2689a00();
   input += synapse0x267e300();
   input += synapse0x267e340();
   input += synapse0x242c670();
   input += synapse0x242c6b0();
   input += synapse0x267ea80();
   input += synapse0x267eac0();
   input += synapse0x267edc0();
   input += synapse0x267ee00();
   input += synapse0x267f100();
   input += synapse0x267f140();
   input += synapse0x267f440();
   input += synapse0x267f480();
   input += synapse0x267f780();
   input += synapse0x267f7c0();
   input += synapse0x267fac0();
   input += synapse0x267fb00();
   input += synapse0x267d600();
   input += synapse0x267d640();
   input += synapse0x268b8e0();
   return input;
}

double NNfunction_sLg::neuron0x268b640() {
   double input = input0x268b640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x268b920() {
   double input = 0.404965;
   input += synapse0x268bc60();
   input += synapse0x268bca0();
   input += synapse0x268bce0();
   input += synapse0x268bd20();
   input += synapse0x268bd60();
   input += synapse0x268bda0();
   input += synapse0x268bde0();
   input += synapse0x268be20();
   input += synapse0x268be60();
   input += synapse0x268bea0();
   input += synapse0x268bee0();
   input += synapse0x268bf20();
   input += synapse0x268bf60();
   input += synapse0x268bfa0();
   input += synapse0x268bfe0();
   input += synapse0x268c020();
   input += synapse0x268bab0();
   input += synapse0x268baf0();
   input += synapse0x268c170();
   input += synapse0x268c1b0();
   input += synapse0x268c1f0();
   input += synapse0x268c230();
   input += synapse0x268c270();
   input += synapse0x268c2b0();
   return input;
}

double NNfunction_sLg::neuron0x268b920() {
   double input = input0x268b920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x268c2f0() {
   double input = 0.502258;
   input += synapse0x268c630();
   input += synapse0x268c670();
   input += synapse0x268c6b0();
   input += synapse0x268c6f0();
   input += synapse0x268c730();
   input += synapse0x268c770();
   input += synapse0x268c7b0();
   input += synapse0x268c7f0();
   input += synapse0x268c830();
   input += synapse0x268c870();
   input += synapse0x268c8b0();
   input += synapse0x268c8f0();
   input += synapse0x268c930();
   input += synapse0x268c970();
   input += synapse0x268c9b0();
   input += synapse0x268c9f0();
   input += synapse0x268c480();
   input += synapse0x268c4c0();
   input += synapse0x268cb40();
   input += synapse0x268cb80();
   input += synapse0x268cbc0();
   input += synapse0x268cc00();
   input += synapse0x268cc40();
   input += synapse0x268cc80();
   return input;
}

double NNfunction_sLg::neuron0x268c2f0() {
   double input = input0x268c2f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x268ccc0() {
   double input = 1.84576;
   input += synapse0x268d000();
   input += synapse0x268d040();
   input += synapse0x268d080();
   input += synapse0x268d0c0();
   input += synapse0x268d100();
   input += synapse0x268d140();
   input += synapse0x268d180();
   input += synapse0x268d1c0();
   input += synapse0x268d200();
   input += synapse0x268d240();
   input += synapse0x268d280();
   input += synapse0x268d2c0();
   input += synapse0x268d300();
   input += synapse0x268d340();
   input += synapse0x268d380();
   input += synapse0x268d3c0();
   input += synapse0x268ce50();
   input += synapse0x268ce90();
   input += synapse0x268d510();
   input += synapse0x268d550();
   input += synapse0x268d590();
   input += synapse0x268d5d0();
   input += synapse0x268d610();
   input += synapse0x268d650();
   return input;
}

double NNfunction_sLg::neuron0x268ccc0() {
   double input = input0x268ccc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x268d690() {
   double input = 0.477941;
   input += synapse0x268d9d0();
   input += synapse0x268da10();
   input += synapse0x268da50();
   input += synapse0x268da90();
   input += synapse0x268dad0();
   input += synapse0x268db10();
   input += synapse0x268db50();
   input += synapse0x268db90();
   input += synapse0x268dbd0();
   input += synapse0x268dc10();
   input += synapse0x268dc50();
   input += synapse0x268dc90();
   input += synapse0x268dcd0();
   input += synapse0x268dd10();
   input += synapse0x268dd50();
   input += synapse0x268dd90();
   input += synapse0x268d820();
   input += synapse0x268d860();
   input += synapse0x268dee0();
   input += synapse0x268df20();
   input += synapse0x268df60();
   input += synapse0x268dfa0();
   input += synapse0x268dfe0();
   input += synapse0x268e020();
   return input;
}

double NNfunction_sLg::neuron0x268d690() {
   double input = input0x268d690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x268e060() {
   double input = 0.134025;
   input += synapse0x268e3a0();
   input += synapse0x268e3e0();
   input += synapse0x268e420();
   input += synapse0x268e460();
   input += synapse0x268e4a0();
   input += synapse0x268e4e0();
   input += synapse0x268e520();
   input += synapse0x268e560();
   input += synapse0x268e5a0();
   input += synapse0x2686760();
   input += synapse0x26867a0();
   input += synapse0x26867e0();
   input += synapse0x2686820();
   input += synapse0x2686860();
   input += synapse0x26868a0();
   input += synapse0x26868e0();
   input += synapse0x268e1f0();
   input += synapse0x268e230();
   input += synapse0x2686a30();
   input += synapse0x2686a70();
   input += synapse0x2686ab0();
   input += synapse0x2686af0();
   input += synapse0x2686b30();
   input += synapse0x2686b70();
   return input;
}

double NNfunction_sLg::neuron0x268e060() {
   double input = input0x268e060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2686bb0() {
   double input = -0.274952;
   input += synapse0x2686ef0();
   input += synapse0x2686f30();
   input += synapse0x2686f70();
   input += synapse0x2686fb0();
   input += synapse0x2686ff0();
   input += synapse0x2687030();
   input += synapse0x2687070();
   input += synapse0x26870b0();
   input += synapse0x26870f0();
   input += synapse0x2687130();
   input += synapse0x2687170();
   input += synapse0x26871b0();
   input += synapse0x26871f0();
   input += synapse0x2687230();
   input += synapse0x2687270();
   input += synapse0x26872b0();
   input += synapse0x2686d40();
   input += synapse0x2686d80();
   input += synapse0x2687400();
   input += synapse0x2687440();
   input += synapse0x2687480();
   input += synapse0x26874c0();
   input += synapse0x2687500();
   input += synapse0x2687540();
   return input;
}

double NNfunction_sLg::neuron0x2686bb0() {
   double input = input0x2686bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2687580() {
   double input = -0.547353;
   input += synapse0x2687710();
   input += synapse0x26907a0();
   input += synapse0x26907e0();
   input += synapse0x2690820();
   input += synapse0x2690860();
   input += synapse0x26908a0();
   input += synapse0x26908e0();
   input += synapse0x2690920();
   input += synapse0x2690960();
   input += synapse0x26909a0();
   input += synapse0x26909e0();
   input += synapse0x2690a20();
   input += synapse0x2690a60();
   input += synapse0x2690aa0();
   input += synapse0x2690ae0();
   input += synapse0x2690b20();
   input += synapse0x26905f0();
   input += synapse0x2690630();
   input += synapse0x2690c70();
   input += synapse0x2690cb0();
   input += synapse0x2690cf0();
   input += synapse0x2690d30();
   input += synapse0x2690d70();
   input += synapse0x2690db0();
   return input;
}

double NNfunction_sLg::neuron0x2687580() {
   double input = input0x2687580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2690df0() {
   double input = -0.718556;
   input += synapse0x2691130();
   input += synapse0x2691170();
   input += synapse0x26911b0();
   input += synapse0x26911f0();
   input += synapse0x2691230();
   input += synapse0x2691270();
   input += synapse0x26912b0();
   input += synapse0x26912f0();
   input += synapse0x2691330();
   input += synapse0x2691370();
   input += synapse0x26913b0();
   input += synapse0x26913f0();
   input += synapse0x2691430();
   input += synapse0x2691470();
   input += synapse0x26914b0();
   input += synapse0x26914f0();
   input += synapse0x2690f80();
   input += synapse0x2690fc0();
   input += synapse0x2691640();
   input += synapse0x2691680();
   input += synapse0x26916c0();
   input += synapse0x2691700();
   input += synapse0x2691740();
   input += synapse0x2691780();
   return input;
}

double NNfunction_sLg::neuron0x2690df0() {
   double input = input0x2690df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x26917c0() {
   double input = 0.255678;
   input += synapse0x2691b00();
   input += synapse0x2691b40();
   input += synapse0x2691b80();
   input += synapse0x2691bc0();
   input += synapse0x2691c00();
   input += synapse0x2691c40();
   input += synapse0x2691c80();
   input += synapse0x2691cc0();
   input += synapse0x2691d00();
   input += synapse0x2691d40();
   input += synapse0x2691d80();
   input += synapse0x2691dc0();
   input += synapse0x2691e00();
   input += synapse0x2691e40();
   input += synapse0x2691e80();
   input += synapse0x2691ec0();
   input += synapse0x2691950();
   input += synapse0x2691990();
   input += synapse0x2692010();
   input += synapse0x2692050();
   input += synapse0x2692090();
   input += synapse0x26920d0();
   input += synapse0x2692110();
   input += synapse0x2692150();
   return input;
}

double NNfunction_sLg::neuron0x26917c0() {
   double input = input0x26917c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2692190() {
   double input = -1.0944;
   input += synapse0x26924d0();
   input += synapse0x2692510();
   input += synapse0x2692550();
   input += synapse0x2692590();
   input += synapse0x26925d0();
   input += synapse0x2692610();
   input += synapse0x2692650();
   input += synapse0x2692690();
   input += synapse0x26926d0();
   input += synapse0x2692710();
   input += synapse0x2692750();
   input += synapse0x2692790();
   input += synapse0x26927d0();
   input += synapse0x2692810();
   input += synapse0x2692850();
   input += synapse0x2692890();
   input += synapse0x2692320();
   input += synapse0x2692360();
   input += synapse0x26929e0();
   input += synapse0x2692a20();
   input += synapse0x2692a60();
   input += synapse0x2692aa0();
   input += synapse0x2692ae0();
   input += synapse0x2692b20();
   return input;
}

double NNfunction_sLg::neuron0x2692190() {
   double input = input0x2692190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2692b60() {
   double input = -0.89186;
   input += synapse0x2692ea0();
   input += synapse0x2692ee0();
   input += synapse0x2692f20();
   input += synapse0x2692f60();
   input += synapse0x2692fa0();
   input += synapse0x2692fe0();
   input += synapse0x2693020();
   input += synapse0x2693060();
   input += synapse0x26930a0();
   input += synapse0x26930e0();
   input += synapse0x2693120();
   input += synapse0x2693160();
   input += synapse0x26931a0();
   input += synapse0x26931e0();
   input += synapse0x2693220();
   input += synapse0x2693260();
   input += synapse0x2692cf0();
   input += synapse0x2692d30();
   input += synapse0x26933b0();
   input += synapse0x26933f0();
   input += synapse0x2693430();
   input += synapse0x2693470();
   input += synapse0x26934b0();
   input += synapse0x26934f0();
   return input;
}

double NNfunction_sLg::neuron0x2692b60() {
   double input = input0x2692b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2693530() {
   double input = 0.84785;
   input += synapse0x2693870();
   input += synapse0x26938b0();
   input += synapse0x26938f0();
   input += synapse0x2693930();
   input += synapse0x2693970();
   input += synapse0x26939b0();
   input += synapse0x26939f0();
   input += synapse0x2693a30();
   input += synapse0x2693a70();
   input += synapse0x2693ab0();
   input += synapse0x2693af0();
   input += synapse0x2693b30();
   input += synapse0x2693b70();
   input += synapse0x2693bb0();
   input += synapse0x2693bf0();
   input += synapse0x2693c30();
   input += synapse0x26936c0();
   input += synapse0x2693700();
   input += synapse0x2693d80();
   input += synapse0x2693dc0();
   input += synapse0x2693e00();
   input += synapse0x2693e40();
   input += synapse0x2693e80();
   input += synapse0x2693ec0();
   return input;
}

double NNfunction_sLg::neuron0x2693530() {
   double input = input0x2693530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2693f00() {
   double input = -0.0976481;
   input += synapse0x2694240();
   input += synapse0x2694280();
   input += synapse0x26942c0();
   input += synapse0x2694300();
   input += synapse0x2694340();
   input += synapse0x2694380();
   input += synapse0x26943c0();
   input += synapse0x2694400();
   input += synapse0x2694440();
   input += synapse0x2694480();
   input += synapse0x26944c0();
   input += synapse0x2694500();
   input += synapse0x2694540();
   input += synapse0x2694580();
   input += synapse0x26945c0();
   input += synapse0x2694600();
   input += synapse0x2694090();
   input += synapse0x26940d0();
   input += synapse0x2694750();
   input += synapse0x2694790();
   input += synapse0x26947d0();
   input += synapse0x2694810();
   input += synapse0x2694850();
   input += synapse0x2694890();
   return input;
}

double NNfunction_sLg::neuron0x2693f00() {
   double input = input0x2693f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x26948d0() {
   double input = 3.00618;
   input += synapse0x2694c10();
   input += synapse0x2694c50();
   input += synapse0x2694c90();
   input += synapse0x2694cd0();
   input += synapse0x2694d10();
   input += synapse0x2694d50();
   input += synapse0x2694d90();
   input += synapse0x2694dd0();
   input += synapse0x2694e10();
   input += synapse0x2694e50();
   input += synapse0x2694e90();
   input += synapse0x2694ed0();
   input += synapse0x2694f10();
   input += synapse0x2694f50();
   input += synapse0x2694f90();
   input += synapse0x2694fd0();
   input += synapse0x2694a60();
   input += synapse0x2694aa0();
   input += synapse0x2695120();
   input += synapse0x2695160();
   input += synapse0x26951a0();
   input += synapse0x26951e0();
   input += synapse0x2695220();
   input += synapse0x2695260();
   return input;
}

double NNfunction_sLg::neuron0x26948d0() {
   double input = input0x26948d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x26952a0() {
   double input = 0.383484;
   input += synapse0x26955e0();
   input += synapse0x2689bb0();
   input += synapse0x2689bf0();
   input += synapse0x2689c30();
   input += synapse0x2689e80();
   input += synapse0x2689ec0();
   input += synapse0x2689f00();
   input += synapse0x268a150();
   input += synapse0x268a190();
   input += synapse0x268a3e0();
   input += synapse0x268a420();
   input += synapse0x268a460();
   input += synapse0x268a6b0();
   input += synapse0x268a6f0();
   input += synapse0x268a940();
   input += synapse0x268a980();
   input += synapse0x2695430();
   input += synapse0x2695470();
   input += synapse0x268aad0();
   input += synapse0x268afe0();
   input += synapse0x268b020();
   input += synapse0x268b060();
   input += synapse0x268b2b0();
   input += synapse0x268b2f0();
   return input;
}

double NNfunction_sLg::neuron0x26952a0() {
   double input = input0x26952a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x268b330() {
   double input = 0.845342;
   input += synapse0x268aba0();
   input += synapse0x268abe0();
   input += synapse0x268ac20();
   input += synapse0x268ac60();
   input += synapse0x268b5e0();
   input += synapse0x2697930();
   input += synapse0x2697970();
   input += synapse0x26979b0();
   input += synapse0x26979f0();
   input += synapse0x2697a30();
   input += synapse0x2697a70();
   input += synapse0x2697ab0();
   input += synapse0x2697af0();
   input += synapse0x2697b30();
   input += synapse0x2697b70();
   input += synapse0x2697bb0();
   input += synapse0x268b4c0();
   input += synapse0x268b500();
   input += synapse0x2697d00();
   input += synapse0x2697d40();
   input += synapse0x2697d80();
   input += synapse0x2697dc0();
   input += synapse0x2697e00();
   input += synapse0x2697e40();
   return input;
}

double NNfunction_sLg::neuron0x268b330() {
   double input = input0x268b330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2697e80() {
   double input = 1.64341;
   input += synapse0x26981c0();
   input += synapse0x2698200();
   input += synapse0x2698240();
   input += synapse0x2698280();
   input += synapse0x26982c0();
   input += synapse0x2698300();
   input += synapse0x2698340();
   input += synapse0x2698380();
   input += synapse0x26983c0();
   input += synapse0x2698400();
   input += synapse0x2698440();
   input += synapse0x2698480();
   input += synapse0x26984c0();
   input += synapse0x2698500();
   input += synapse0x2698540();
   input += synapse0x2698580();
   input += synapse0x2698010();
   input += synapse0x2698050();
   input += synapse0x26986d0();
   input += synapse0x2698710();
   input += synapse0x2698750();
   input += synapse0x2698790();
   input += synapse0x26987d0();
   input += synapse0x2698810();
   return input;
}

double NNfunction_sLg::neuron0x2697e80() {
   double input = input0x2697e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2698850() {
   double input = 0.24104;
   input += synapse0x2698b90();
   input += synapse0x2698bd0();
   input += synapse0x2698c10();
   input += synapse0x2698c50();
   input += synapse0x2698c90();
   input += synapse0x2698cd0();
   input += synapse0x2698d10();
   input += synapse0x2698d50();
   input += synapse0x2698d90();
   input += synapse0x2698dd0();
   input += synapse0x2698e10();
   input += synapse0x2698e50();
   input += synapse0x2698e90();
   input += synapse0x2698ed0();
   input += synapse0x2698f10();
   input += synapse0x2698f50();
   input += synapse0x26989e0();
   input += synapse0x2698a20();
   input += synapse0x26990a0();
   input += synapse0x26990e0();
   input += synapse0x2699120();
   input += synapse0x2699160();
   input += synapse0x26991a0();
   input += synapse0x26991e0();
   return input;
}

double NNfunction_sLg::neuron0x2698850() {
   double input = input0x2698850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2699220() {
   double input = -0.446132;
   input += synapse0x2699560();
   input += synapse0x26995a0();
   input += synapse0x26995e0();
   input += synapse0x2699620();
   input += synapse0x2699660();
   input += synapse0x26996a0();
   input += synapse0x26996e0();
   input += synapse0x2699720();
   input += synapse0x2699760();
   input += synapse0x26997a0();
   input += synapse0x26997e0();
   input += synapse0x2699820();
   input += synapse0x2699860();
   input += synapse0x26998a0();
   input += synapse0x26998e0();
   input += synapse0x2699920();
   input += synapse0x26993b0();
   input += synapse0x26993f0();
   input += synapse0x2699a70();
   input += synapse0x2699ab0();
   input += synapse0x2699af0();
   input += synapse0x2699b30();
   input += synapse0x2699b70();
   input += synapse0x2699bb0();
   return input;
}

double NNfunction_sLg::neuron0x2699220() {
   double input = input0x2699220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x2699bf0() {
   double input = 1.92356;
   input += synapse0x2699f30();
   input += synapse0x2699f70();
   input += synapse0x2699fb0();
   input += synapse0x2699ff0();
   input += synapse0x269a030();
   input += synapse0x269a070();
   input += synapse0x269a0b0();
   input += synapse0x269a0f0();
   input += synapse0x269a130();
   input += synapse0x269a170();
   input += synapse0x269a1b0();
   input += synapse0x269a1f0();
   input += synapse0x269a230();
   input += synapse0x269a270();
   input += synapse0x269a2b0();
   input += synapse0x269a2f0();
   input += synapse0x2699d80();
   input += synapse0x2699dc0();
   input += synapse0x269a440();
   input += synapse0x269a480();
   input += synapse0x269a4c0();
   input += synapse0x269a500();
   input += synapse0x269a540();
   input += synapse0x269a580();
   return input;
}

double NNfunction_sLg::neuron0x2699bf0() {
   double input = input0x2699bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x269a5c0() {
   double input = 0.915382;
   input += synapse0x269a900();
   input += synapse0x269a940();
   input += synapse0x269a980();
   input += synapse0x269a9c0();
   input += synapse0x269aa00();
   input += synapse0x269aa40();
   input += synapse0x269aa80();
   input += synapse0x269aac0();
   input += synapse0x269ab00();
   input += synapse0x269ab40();
   input += synapse0x269ab80();
   input += synapse0x269abc0();
   input += synapse0x269ac00();
   input += synapse0x269ac40();
   input += synapse0x269ac80();
   input += synapse0x269acc0();
   input += synapse0x269a750();
   input += synapse0x269a790();
   input += synapse0x269ae10();
   input += synapse0x269ae50();
   input += synapse0x269ae90();
   input += synapse0x269aed0();
   input += synapse0x269af10();
   input += synapse0x269af50();
   return input;
}

double NNfunction_sLg::neuron0x269a5c0() {
   double input = input0x269a5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x269af90() {
   double input = -0.830457;
   input += synapse0x269b2d0();
   input += synapse0x269b310();
   input += synapse0x269b350();
   input += synapse0x269b390();
   input += synapse0x269b3d0();
   input += synapse0x269b410();
   input += synapse0x269b450();
   input += synapse0x269b490();
   input += synapse0x269b4d0();
   input += synapse0x269b510();
   input += synapse0x269b550();
   input += synapse0x269b590();
   input += synapse0x269b5d0();
   input += synapse0x269b610();
   input += synapse0x269b650();
   input += synapse0x269b690();
   input += synapse0x269b120();
   input += synapse0x269b160();
   input += synapse0x269b7e0();
   input += synapse0x269b820();
   input += synapse0x269b860();
   input += synapse0x269b8a0();
   input += synapse0x269b8e0();
   input += synapse0x269b920();
   return input;
}

double NNfunction_sLg::neuron0x269af90() {
   double input = input0x269af90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x269b960() {
   double input = -0.606527;
   input += synapse0x269bca0();
   input += synapse0x269bce0();
   input += synapse0x269bd20();
   input += synapse0x269bd60();
   input += synapse0x269bda0();
   input += synapse0x269bde0();
   input += synapse0x269be20();
   input += synapse0x269be60();
   input += synapse0x269bea0();
   input += synapse0x269bee0();
   input += synapse0x269bf20();
   input += synapse0x269bf60();
   input += synapse0x269bfa0();
   input += synapse0x269bfe0();
   input += synapse0x269c020();
   input += synapse0x269c060();
   input += synapse0x269baf0();
   input += synapse0x269bb30();
   input += synapse0x269c1b0();
   input += synapse0x269c1f0();
   input += synapse0x269c230();
   input += synapse0x269c270();
   input += synapse0x269c2b0();
   input += synapse0x269c2f0();
   return input;
}

double NNfunction_sLg::neuron0x269b960() {
   double input = input0x269b960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x269c330() {
   double input = -2.23077;
   input += synapse0x2684da0();
   input += synapse0x2684de0();
   input += synapse0x2684e20();
   input += synapse0x2684e60();
   input += synapse0x2684ea0();
   input += synapse0x2684ee0();
   input += synapse0x2684f20();
   input += synapse0x2684f60();
   input += synapse0x269ca80();
   input += synapse0x269cac0();
   input += synapse0x269cb00();
   input += synapse0x269cb40();
   input += synapse0x269cb80();
   input += synapse0x269cbc0();
   input += synapse0x269cc00();
   input += synapse0x269cc40();
   input += synapse0x269c4c0();
   input += synapse0x269c500();
   input += synapse0x269cd90();
   input += synapse0x269cdd0();
   input += synapse0x269ce10();
   input += synapse0x269ce50();
   input += synapse0x269ce90();
   input += synapse0x269ced0();
   return input;
}

double NNfunction_sLg::neuron0x269c330() {
   double input = input0x269c330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x269cf10() {
   double input = 0.775055;
   input += synapse0x269d250();
   input += synapse0x269d290();
   input += synapse0x269d2d0();
   input += synapse0x269d310();
   input += synapse0x269d350();
   input += synapse0x269d390();
   input += synapse0x269d3d0();
   input += synapse0x269d410();
   input += synapse0x269d450();
   input += synapse0x269d490();
   input += synapse0x269d4d0();
   input += synapse0x269d510();
   input += synapse0x269d550();
   input += synapse0x269d590();
   input += synapse0x269d5d0();
   input += synapse0x269d610();
   input += synapse0x269d0a0();
   input += synapse0x269d0e0();
   input += synapse0x269d760();
   input += synapse0x269d7a0();
   input += synapse0x269d7e0();
   input += synapse0x269d820();
   input += synapse0x269d860();
   input += synapse0x269d8a0();
   return input;
}

double NNfunction_sLg::neuron0x269cf10() {
   double input = input0x269cf10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x269d8e0() {
   double input = -0.481461;
   input += synapse0x269dc20();
   input += synapse0x269dc60();
   input += synapse0x269dca0();
   input += synapse0x269dce0();
   input += synapse0x269dd20();
   input += synapse0x269dd60();
   input += synapse0x269dda0();
   input += synapse0x269dde0();
   input += synapse0x269de20();
   input += synapse0x269de60();
   input += synapse0x269dea0();
   input += synapse0x269dee0();
   input += synapse0x269df20();
   input += synapse0x269df60();
   input += synapse0x269dfa0();
   input += synapse0x269dfe0();
   input += synapse0x269da70();
   input += synapse0x269dab0();
   input += synapse0x268e5e0();
   input += synapse0x268e620();
   input += synapse0x268e660();
   input += synapse0x268e6a0();
   input += synapse0x268e6e0();
   input += synapse0x268e720();
   return input;
}

double NNfunction_sLg::neuron0x269d8e0() {
   double input = input0x269d8e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x268e760() {
   double input = 0.0808842;
   input += synapse0x268eaa0();
   input += synapse0x268eae0();
   input += synapse0x268eb20();
   input += synapse0x268eb60();
   input += synapse0x268eba0();
   input += synapse0x268ebe0();
   input += synapse0x268ec20();
   input += synapse0x268ec60();
   input += synapse0x268eca0();
   input += synapse0x268ece0();
   input += synapse0x268ed20();
   input += synapse0x268ed60();
   input += synapse0x268eda0();
   input += synapse0x268ede0();
   input += synapse0x268ee20();
   input += synapse0x268ee60();
   input += synapse0x268e8f0();
   input += synapse0x268e930();
   input += synapse0x268efb0();
   input += synapse0x268eff0();
   input += synapse0x268f030();
   input += synapse0x268f070();
   input += synapse0x268f0b0();
   input += synapse0x268f0f0();
   return input;
}

double NNfunction_sLg::neuron0x268e760() {
   double input = input0x268e760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x268f130() {
   double input = 0.391641;
   input += synapse0x268f470();
   input += synapse0x268f4b0();
   input += synapse0x268f4f0();
   input += synapse0x268f530();
   input += synapse0x268f570();
   input += synapse0x268f5b0();
   input += synapse0x268f5f0();
   input += synapse0x268f630();
   input += synapse0x268f670();
   input += synapse0x268f6b0();
   input += synapse0x268f6f0();
   input += synapse0x268f730();
   input += synapse0x268f770();
   input += synapse0x268f7b0();
   input += synapse0x268f7f0();
   input += synapse0x268f830();
   input += synapse0x268f2c0();
   input += synapse0x268f300();
   input += synapse0x268f980();
   input += synapse0x268f9c0();
   input += synapse0x268fa00();
   input += synapse0x268fa40();
   input += synapse0x268fa80();
   input += synapse0x268fac0();
   return input;
}

double NNfunction_sLg::neuron0x268f130() {
   double input = input0x268f130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x268fb00() {
   double input = -0.0244606;
   input += synapse0x268fe40();
   input += synapse0x268fe80();
   input += synapse0x268fec0();
   input += synapse0x268ff00();
   input += synapse0x268ff40();
   input += synapse0x268ff80();
   input += synapse0x268ffc0();
   input += synapse0x2690000();
   input += synapse0x2690040();
   input += synapse0x2690080();
   input += synapse0x26900c0();
   input += synapse0x2690100();
   input += synapse0x2690140();
   input += synapse0x2690180();
   input += synapse0x26901c0();
   input += synapse0x2690200();
   input += synapse0x268fc90();
   input += synapse0x268fcd0();
   input += synapse0x2690350();
   input += synapse0x2690390();
   input += synapse0x26903d0();
   input += synapse0x2690410();
   input += synapse0x2690450();
   input += synapse0x2690490();
   return input;
}

double NNfunction_sLg::neuron0x268fb00() {
   double input = input0x268fb00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x26a2140() {
   double input = -0.284741;
   input += synapse0x26a2360();
   input += synapse0x26a23a0();
   input += synapse0x26a23e0();
   input += synapse0x26a2420();
   input += synapse0x26a2460();
   input += synapse0x26a24a0();
   input += synapse0x26a24e0();
   input += synapse0x26a2520();
   input += synapse0x26a2560();
   input += synapse0x26a25a0();
   input += synapse0x26a25e0();
   input += synapse0x26a2620();
   input += synapse0x26a2660();
   input += synapse0x26a26a0();
   input += synapse0x26a26e0();
   input += synapse0x26a2720();
   input += synapse0x26904d0();
   input += synapse0x2690510();
   input += synapse0x26a2870();
   input += synapse0x26a28b0();
   input += synapse0x26a28f0();
   input += synapse0x26a2930();
   input += synapse0x26a2970();
   input += synapse0x26a29b0();
   return input;
}

double NNfunction_sLg::neuron0x26a2140() {
   double input = input0x26a2140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x26a29f0() {
   double input = 0.448615;
   input += synapse0x26a2d30();
   input += synapse0x26a2d70();
   input += synapse0x26a2db0();
   input += synapse0x26a2df0();
   input += synapse0x26a2e30();
   input += synapse0x26a2e70();
   input += synapse0x26a2eb0();
   input += synapse0x26a2ef0();
   input += synapse0x26a2f30();
   input += synapse0x26a2f70();
   input += synapse0x26a2fb0();
   input += synapse0x26a2ff0();
   input += synapse0x26a3030();
   input += synapse0x26a3070();
   input += synapse0x26a30b0();
   input += synapse0x26a30f0();
   input += synapse0x26a2b80();
   input += synapse0x26a2bc0();
   input += synapse0x26a3240();
   input += synapse0x26a3280();
   input += synapse0x26a32c0();
   input += synapse0x26a3300();
   input += synapse0x26a3340();
   input += synapse0x26a3380();
   return input;
}

double NNfunction_sLg::neuron0x26a29f0() {
   double input = input0x26a29f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x26a33c0() {
   double input = 0.264605;
   input += synapse0x26a3700();
   input += synapse0x26a3740();
   input += synapse0x26a3780();
   input += synapse0x26a37c0();
   input += synapse0x26a3800();
   input += synapse0x26a3840();
   input += synapse0x26a3880();
   input += synapse0x26a38c0();
   input += synapse0x26a3900();
   input += synapse0x26a3940();
   input += synapse0x26a3980();
   input += synapse0x26a39c0();
   input += synapse0x26a3a00();
   input += synapse0x26a3a40();
   input += synapse0x26a3a80();
   input += synapse0x26a3ac0();
   input += synapse0x26a3550();
   input += synapse0x26a3590();
   input += synapse0x26a3c10();
   input += synapse0x26a3c50();
   input += synapse0x26a3c90();
   input += synapse0x26a3cd0();
   input += synapse0x26a3d10();
   input += synapse0x26a3d50();
   return input;
}

double NNfunction_sLg::neuron0x26a33c0() {
   double input = input0x26a33c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x26a3d90() {
   double input = -0.832521;
   input += synapse0x26a40d0();
   input += synapse0x26a4110();
   input += synapse0x26a4150();
   input += synapse0x26a4190();
   input += synapse0x26a41d0();
   input += synapse0x26a4210();
   input += synapse0x26a4250();
   input += synapse0x26a4290();
   input += synapse0x26a42d0();
   input += synapse0x26a4310();
   input += synapse0x26a4350();
   input += synapse0x26a4390();
   input += synapse0x26a43d0();
   input += synapse0x26a4410();
   input += synapse0x26a4450();
   input += synapse0x26a4490();
   input += synapse0x26a3f20();
   input += synapse0x26a3f60();
   input += synapse0x26a45e0();
   input += synapse0x26a4620();
   input += synapse0x26a4660();
   input += synapse0x26a46a0();
   input += synapse0x26a46e0();
   input += synapse0x26a4720();
   return input;
}

double NNfunction_sLg::neuron0x26a3d90() {
   double input = input0x26a3d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x26aaf90() {
   double input = 0.0606866;
   input += synapse0x243aaf0();
   input += synapse0x243ab30();
   input += synapse0x26821d0();
   input += synapse0x2682210();
   input += synapse0x2682ba0();
   input += synapse0x2682be0();
   input += synapse0x2683970();
   input += synapse0x26839b0();
   input += synapse0x2684340();
   input += synapse0x2684380();
   input += synapse0x2684d10();
   input += synapse0x2684d50();
   input += synapse0x26857f0();
   input += synapse0x2685830();
   input += synapse0x26861c0();
   input += synapse0x2686200();
   input += synapse0x26832a0();
   input += synapse0x26832e0();
   input += synapse0x2687d70();
   input += synapse0x2687db0();
   input += synapse0x2688740();
   input += synapse0x2688780();
   input += synapse0x2689110();
   input += synapse0x2689150();
   input += synapse0x2689ae0();
   input += synapse0x2689b20();
   input += synapse0x267dc80();
   input += synapse0x267dcc0();
   input += synapse0x268bbd0();
   input += synapse0x268bc10();
   input += synapse0x268c5a0();
   input += synapse0x268c5e0();
   input += synapse0x268cf70();
   input += synapse0x268cfb0();
   input += synapse0x268d940();
   input += synapse0x268d980();
   input += synapse0x268e310();
   input += synapse0x268e350();
   input += synapse0x2686e60();
   input += synapse0x2686ea0();
   input += synapse0x2690710();
   input += synapse0x2690750();
   input += synapse0x26910a0();
   input += synapse0x26910e0();
   input += synapse0x2691a70();
   input += synapse0x2691ab0();
   input += synapse0x2692440();
   input += synapse0x2692480();
   input += synapse0x2692e10();
   input += synapse0x2692e50();
   return input;
}

double NNfunction_sLg::neuron0x26aaf90() {
   double input = input0x26aaf90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x26ab330() {
   double input = -0.383767;
   input += synapse0x2695550();
   input += synapse0x2695590();
   input += synapse0x268ab10();
   input += synapse0x268ab50();
   input += synapse0x2698130();
   input += synapse0x2698170();
   input += synapse0x2698b00();
   input += synapse0x2698b40();
   input += synapse0x26994d0();
   input += synapse0x2699510();
   input += synapse0x2699ea0();
   input += synapse0x2699ee0();
   input += synapse0x269a870();
   input += synapse0x269a8b0();
   input += synapse0x269b240();
   input += synapse0x269b280();
   input += synapse0x269bc10();
   input += synapse0x269bc50();
   input += synapse0x269c5e0();
   input += synapse0x269c620();
   input += synapse0x269d1c0();
   input += synapse0x269d200();
   input += synapse0x269db90();
   input += synapse0x269dbd0();
   input += synapse0x268ea10();
   input += synapse0x268ea50();
   input += synapse0x268f3e0();
   input += synapse0x268f420();
   input += synapse0x268fdb0();
   input += synapse0x268fdf0();
   input += synapse0x26a22d0();
   input += synapse0x26a2310();
   input += synapse0x26a2ca0();
   input += synapse0x26a2ce0();
   input += synapse0x26a3670();
   input += synapse0x26a36b0();
   input += synapse0x26a4040();
   input += synapse0x26a4080();
   input += synapse0x267ff30();
   input += synapse0x267ff70();
   input += synapse0x26937e0();
   input += synapse0x2693820();
   input += synapse0x26a4760();
   input += synapse0x26a47a0();
   input += synapse0x26a47e0();
   input += synapse0x26a4820();
   input += synapse0x26ab6d0();
   input += synapse0x26ab710();
   input += synapse0x26ab750();
   input += synapse0x26ab790();
   return input;
}

double NNfunction_sLg::neuron0x26ab330() {
   double input = input0x26ab330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x26ab7d0() {
   double input = -0.85589;
   input += synapse0x26abb10();
   input += synapse0x26abb50();
   input += synapse0x26abb90();
   input += synapse0x26abbd0();
   input += synapse0x26abc10();
   input += synapse0x26abc50();
   input += synapse0x26abc90();
   input += synapse0x26abcd0();
   input += synapse0x26abd10();
   input += synapse0x26abd50();
   input += synapse0x26abd90();
   input += synapse0x26abdd0();
   input += synapse0x26abe10();
   input += synapse0x26abe50();
   input += synapse0x26abe90();
   input += synapse0x26abed0();
   input += synapse0x26ab960();
   input += synapse0x26ab9a0();
   input += synapse0x26ac020();
   input += synapse0x26ac060();
   input += synapse0x26ac0a0();
   input += synapse0x26ac0e0();
   input += synapse0x26ac120();
   input += synapse0x26ac160();
   input += synapse0x26ac1a0();
   input += synapse0x26ac1e0();
   input += synapse0x26ac220();
   input += synapse0x26ac260();
   input += synapse0x26ac2a0();
   input += synapse0x26ac2e0();
   input += synapse0x26ac320();
   input += synapse0x26ac360();
   input += synapse0x26abf10();
   input += synapse0x26abf50();
   input += synapse0x26abf90();
   input += synapse0x26abfd0();
   input += synapse0x26ac5b0();
   input += synapse0x26ac5f0();
   input += synapse0x26ac630();
   input += synapse0x26ac670();
   input += synapse0x26ac6b0();
   input += synapse0x26ac6f0();
   input += synapse0x26ac730();
   input += synapse0x26ac770();
   input += synapse0x26ac7b0();
   input += synapse0x26ac7f0();
   input += synapse0x26ac830();
   input += synapse0x26ac870();
   input += synapse0x26ac8b0();
   input += synapse0x26ac8f0();
   return input;
}

double NNfunction_sLg::neuron0x26ab7d0() {
   double input = input0x26ab7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x26ac930() {
   double input = 1.02893;
   input += synapse0x26acc70();
   input += synapse0x26accb0();
   input += synapse0x26accf0();
   input += synapse0x26acd30();
   input += synapse0x26acd70();
   input += synapse0x26acdb0();
   input += synapse0x26acdf0();
   input += synapse0x26ace30();
   input += synapse0x26ace70();
   input += synapse0x26aceb0();
   input += synapse0x26acef0();
   input += synapse0x26acf30();
   input += synapse0x26acf70();
   input += synapse0x26acfb0();
   input += synapse0x26acff0();
   input += synapse0x26ad030();
   input += synapse0x26acac0();
   input += synapse0x26acb00();
   input += synapse0x26ad180();
   input += synapse0x26ad1c0();
   input += synapse0x26ad200();
   input += synapse0x26ad240();
   input += synapse0x26ad280();
   input += synapse0x26ad2c0();
   input += synapse0x26ad300();
   input += synapse0x26ad340();
   input += synapse0x26ad380();
   input += synapse0x26ad3c0();
   input += synapse0x26ad400();
   input += synapse0x26ad440();
   input += synapse0x26ad480();
   input += synapse0x26ad4c0();
   input += synapse0x26ad070();
   input += synapse0x26ad0b0();
   input += synapse0x26ad0f0();
   input += synapse0x26ad130();
   input += synapse0x26ad710();
   input += synapse0x26ad750();
   input += synapse0x26ad790();
   input += synapse0x26ad7d0();
   input += synapse0x26ad810();
   input += synapse0x26ad850();
   input += synapse0x26ad890();
   input += synapse0x26ad8d0();
   input += synapse0x26ad910();
   input += synapse0x26ad950();
   input += synapse0x26ad990();
   input += synapse0x26ad9d0();
   input += synapse0x26ada10();
   input += synapse0x26ada50();
   return input;
}

double NNfunction_sLg::neuron0x26ac930() {
   double input = input0x26ac930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x26ada90() {
   double input = -0.128818;
   input += synapse0x26addd0();
   input += synapse0x26ade10();
   input += synapse0x26ade50();
   input += synapse0x26ade90();
   input += synapse0x26aded0();
   input += synapse0x26adf10();
   input += synapse0x26adf50();
   input += synapse0x26adf90();
   input += synapse0x26adfd0();
   input += synapse0x26ae010();
   input += synapse0x26ae050();
   input += synapse0x26ae090();
   input += synapse0x26ae0d0();
   input += synapse0x26ae110();
   input += synapse0x26ae150();
   input += synapse0x26ae190();
   input += synapse0x26adc20();
   input += synapse0x26adc60();
   input += synapse0x26ae2e0();
   input += synapse0x26ae320();
   input += synapse0x26ae360();
   input += synapse0x26ae3a0();
   input += synapse0x26ae3e0();
   input += synapse0x26ae420();
   input += synapse0x26ae460();
   input += synapse0x26ae4a0();
   input += synapse0x26ae4e0();
   input += synapse0x26ae520();
   input += synapse0x26ae560();
   input += synapse0x26ae5a0();
   input += synapse0x26ae5e0();
   input += synapse0x26ae620();
   input += synapse0x26ae1d0();
   input += synapse0x26ae210();
   input += synapse0x26ae250();
   input += synapse0x26ae290();
   input += synapse0x26ae870();
   input += synapse0x26ae8b0();
   input += synapse0x26ae8f0();
   input += synapse0x26ae930();
   input += synapse0x26ae970();
   input += synapse0x26ae9b0();
   input += synapse0x26ae9f0();
   input += synapse0x26aea30();
   input += synapse0x26aea70();
   input += synapse0x26aeab0();
   input += synapse0x26aeaf0();
   input += synapse0x26aeb30();
   input += synapse0x26aeb70();
   input += synapse0x26aebb0();
   return input;
}

double NNfunction_sLg::neuron0x26ada90() {
   double input = input0x26ada90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sLg::input0x26aebf0() {
   double input = 5.71023;
   input += synapse0x26aee10();
   input += synapse0x26aee50();
   input += synapse0x26aee90();
   input += synapse0x26aeed0();
   input += synapse0x26aef10();
   return input;
}

double NNfunction_sLg::neuron0x26aebf0() {
   double input = input0x26aebf0();
   return (input * 1)+0;
}

double NNfunction_sLg::synapse0x267aba0() {
   return (neuron0x267ace0()*0.33565);
}

double NNfunction_sLg::synapse0x267abe0() {
   return (neuron0x267b020()*-0.152171);
}

double NNfunction_sLg::synapse0x267ffc0() {
   return (neuron0x267b360()*-0.498691);
}

double NNfunction_sLg::synapse0x2680000() {
   return (neuron0x267b6a0()*-0.0643233);
}

double NNfunction_sLg::synapse0x2680040() {
   return (neuron0x267b9e0()*-0.0968274);
}

double NNfunction_sLg::synapse0x2680080() {
   return (neuron0x267bd20()*0.0434792);
}

double NNfunction_sLg::synapse0x26800c0() {
   return (neuron0x267c060()*-0.169699);
}

double NNfunction_sLg::synapse0x2680100() {
   return (neuron0x267c3a0()*-0.284864);
}

double NNfunction_sLg::synapse0x2680140() {
   return (neuron0x267c6e0()*-0.0100249);
}

double NNfunction_sLg::synapse0x2680180() {
   return (neuron0x267ca20()*0.00876388);
}

double NNfunction_sLg::synapse0x26801c0() {
   return (neuron0x267cd60()*-0.398988);
}

double NNfunction_sLg::synapse0x2680200() {
   return (neuron0x267d0a0()*-0.0314135);
}

double NNfunction_sLg::synapse0x2680240() {
   return (neuron0x267d3e0()*-0.766004);
}

double NNfunction_sLg::synapse0x2680280() {
   return (neuron0x267d720()*-0.0399306);
}

double NNfunction_sLg::synapse0x26802c0() {
   return (neuron0x267da60()*0.0921024);
}

double NNfunction_sLg::synapse0x2680300() {
   return (neuron0x267dda0()*0.114211);
}

double NNfunction_sLg::synapse0x267ab10() {
   return (neuron0x267e0e0()*-0.106639);
}

double NNfunction_sLg::synapse0x267ab50() {
   return (neuron0x267e640()*-0.0464282);
}

double NNfunction_sLg::synapse0x242c790() {
   return (neuron0x267e860()*-0.0703246);
}

double NNfunction_sLg::synapse0x242c7d0() {
   return (neuron0x267eba0()*0.197981);
}

double NNfunction_sLg::synapse0x2680560() {
   return (neuron0x267eee0()*-0.0445528);
}

double NNfunction_sLg::synapse0x26805a0() {
   return (neuron0x267f220()*-0.168265);
}

double NNfunction_sLg::synapse0x26805e0() {
   return (neuron0x267f560()*-0.0400702);
}

double NNfunction_sLg::synapse0x2680620() {
   return (neuron0x267f8a0()*0.0367735);
}

double NNfunction_sLg::synapse0x26809a0() {
   return (neuron0x267ace0()*-0.0125681);
}

double NNfunction_sLg::synapse0x26809e0() {
   return (neuron0x267b020()*0.0613092);
}

double NNfunction_sLg::synapse0x2680a20() {
   return (neuron0x267b360()*-0.131496);
}

double NNfunction_sLg::synapse0x2680a60() {
   return (neuron0x267b6a0()*0.90442);
}

double NNfunction_sLg::synapse0x2680aa0() {
   return (neuron0x267b9e0()*-0.00692004);
}

double NNfunction_sLg::synapse0x2680ae0() {
   return (neuron0x267bd20()*0.00648015);
}

double NNfunction_sLg::synapse0x2680b20() {
   return (neuron0x267c060()*-0.0445331);
}

double NNfunction_sLg::synapse0x2680b60() {
   return (neuron0x267c3a0()*-0.0365315);
}

double NNfunction_sLg::synapse0x2680ba0() {
   return (neuron0x267c6e0()*0.0174776);
}

double NNfunction_sLg::synapse0x2680450() {
   return (neuron0x267ca20()*0.00232351);
}

double NNfunction_sLg::synapse0x2680490() {
   return (neuron0x267cd60()*-0.0219615);
}

double NNfunction_sLg::synapse0x26804d0() {
   return (neuron0x267d0a0()*-0.223719);
}

double NNfunction_sLg::synapse0x2680510() {
   return (neuron0x267d3e0()*-0.189909);
}

double NNfunction_sLg::synapse0x2680df0() {
   return (neuron0x267d720()*-0.11268);
}

double NNfunction_sLg::synapse0x2680e30() {
   return (neuron0x267da60()*-0.00792411);
}

double NNfunction_sLg::synapse0x2680e70() {
   return (neuron0x267dda0()*0.556542);
}

double NNfunction_sLg::synapse0x26807f0() {
   return (neuron0x267e0e0()*-0.205307);
}

double NNfunction_sLg::synapse0x2680830() {
   return (neuron0x267e640()*0.000668069);
}

double NNfunction_sLg::synapse0x2680fc0() {
   return (neuron0x267e860()*0.075416);
}

double NNfunction_sLg::synapse0x2681000() {
   return (neuron0x267eba0()*0.0859834);
}

double NNfunction_sLg::synapse0x2681040() {
   return (neuron0x267eee0()*0.00511732);
}

double NNfunction_sLg::synapse0x2681080() {
   return (neuron0x267f220()*-0.0161849);
}

double NNfunction_sLg::synapse0x26810c0() {
   return (neuron0x267f560()*0.00482353);
}

double NNfunction_sLg::synapse0x2681100() {
   return (neuron0x267f8a0()*0.0202756);
}

double NNfunction_sLg::synapse0x2681480() {
   return (neuron0x267ace0()*-0.21664);
}

double NNfunction_sLg::synapse0x26814c0() {
   return (neuron0x267b020()*-0.0712144);
}

double NNfunction_sLg::synapse0x2681500() {
   return (neuron0x267b360()*-0.624368);
}

double NNfunction_sLg::synapse0x2681540() {
   return (neuron0x267b6a0()*-0.241717);
}

double NNfunction_sLg::synapse0x2681580() {
   return (neuron0x267b9e0()*0.0025327);
}

double NNfunction_sLg::synapse0x26815c0() {
   return (neuron0x267bd20()*0.076266);
}

double NNfunction_sLg::synapse0x2681600() {
   return (neuron0x267c060()*-0.0558146);
}

double NNfunction_sLg::synapse0x2681640() {
   return (neuron0x267c3a0()*-0.0146624);
}

double NNfunction_sLg::synapse0x2681680() {
   return (neuron0x267c6e0()*0.327369);
}

double NNfunction_sLg::synapse0x26816c0() {
   return (neuron0x267ca20()*-0.0747534);
}

double NNfunction_sLg::synapse0x2681700() {
   return (neuron0x267cd60()*0.132206);
}

double NNfunction_sLg::synapse0x2681740() {
   return (neuron0x267d0a0()*0.0234939);
}

double NNfunction_sLg::synapse0x2681780() {
   return (neuron0x267d3e0()*-0.16319);
}

double NNfunction_sLg::synapse0x26817c0() {
   return (neuron0x267d720()*0.0934567);
}

double NNfunction_sLg::synapse0x2681800() {
   return (neuron0x267da60()*0.0992169);
}

double NNfunction_sLg::synapse0x2681840() {
   return (neuron0x267dda0()*-0.669812);
}

double NNfunction_sLg::synapse0x26812d0() {
   return (neuron0x267e0e0()*-0.0150451);
}

double NNfunction_sLg::synapse0x2681310() {
   return (neuron0x267e640()*0.117708);
}

double NNfunction_sLg::synapse0x242cbc0() {
   return (neuron0x267e860()*-0.143847);
}

double NNfunction_sLg::synapse0x243a2e0() {
   return (neuron0x267eba0()*-0.00168645);
}

double NNfunction_sLg::synapse0x243a320() {
   return (neuron0x267eee0()*-0.0311681);
}

double NNfunction_sLg::synapse0x2669d70() {
   return (neuron0x267f220()*0.0350274);
}

double NNfunction_sLg::synapse0x2669db0() {
   return (neuron0x267f560()*-0.165418);
}

double NNfunction_sLg::synapse0x2669df0() {
   return (neuron0x267f8a0()*-0.0180078);
}

double NNfunction_sLg::synapse0x243ab80() {
   return (neuron0x267ace0()*0.28111);
}

double NNfunction_sLg::synapse0x2680d70() {
   return (neuron0x267b020()*-0.00972558);
}

double NNfunction_sLg::synapse0x2680db0() {
   return (neuron0x267b360()*-0.519618);
}

double NNfunction_sLg::synapse0x2681990() {
   return (neuron0x267b6a0()*-0.0830927);
}

double NNfunction_sLg::synapse0x26819d0() {
   return (neuron0x267b9e0()*-0.366756);
}

double NNfunction_sLg::synapse0x2681a10() {
   return (neuron0x267bd20()*-0.09765);
}

double NNfunction_sLg::synapse0x2681a50() {
   return (neuron0x267c060()*-0.0656346);
}

double NNfunction_sLg::synapse0x2681a90() {
   return (neuron0x267c3a0()*-0.0324425);
}

double NNfunction_sLg::synapse0x2681ad0() {
   return (neuron0x267c6e0()*-0.153887);
}

double NNfunction_sLg::synapse0x2681b10() {
   return (neuron0x267ca20()*0.186552);
}

double NNfunction_sLg::synapse0x2681b50() {
   return (neuron0x267cd60()*0.386607);
}

double NNfunction_sLg::synapse0x2681b90() {
   return (neuron0x267d0a0()*-0.103299);
}

double NNfunction_sLg::synapse0x2681bd0() {
   return (neuron0x267d3e0()*0.419042);
}

double NNfunction_sLg::synapse0x2681c10() {
   return (neuron0x267d720()*-0.0398419);
}

double NNfunction_sLg::synapse0x2681c50() {
   return (neuron0x267da60()*-0.265426);
}

double NNfunction_sLg::synapse0x2681c90() {
   return (neuron0x267dda0()*-0.0387741);
}

double NNfunction_sLg::synapse0x267ac20() {
   return (neuron0x267e0e0()*0.186385);
}

double NNfunction_sLg::synapse0x267ac60() {
   return (neuron0x267e640()*0.232591);
}

double NNfunction_sLg::synapse0x267aca0() {
   return (neuron0x267e860()*-0.0111986);
}

double NNfunction_sLg::synapse0x2681de0() {
   return (neuron0x267eba0()*0.230805);
}

double NNfunction_sLg::synapse0x2681e20() {
   return (neuron0x267eee0()*-0.0613181);
}

double NNfunction_sLg::synapse0x2681e60() {
   return (neuron0x267f220()*-0.0927992);
}

double NNfunction_sLg::synapse0x2681ea0() {
   return (neuron0x267f560()*0.136178);
}

double NNfunction_sLg::synapse0x2681ee0() {
   return (neuron0x267f8a0()*0.224411);
}

double NNfunction_sLg::synapse0x2682260() {
   return (neuron0x267ace0()*-0.0862675);
}

double NNfunction_sLg::synapse0x26822a0() {
   return (neuron0x267b020()*-0.0433409);
}

double NNfunction_sLg::synapse0x26822e0() {
   return (neuron0x267b360()*-0.79821);
}

double NNfunction_sLg::synapse0x2682320() {
   return (neuron0x267b6a0()*0.0141391);
}

double NNfunction_sLg::synapse0x2682360() {
   return (neuron0x267b9e0()*-0.12344);
}

double NNfunction_sLg::synapse0x26823a0() {
   return (neuron0x267bd20()*-0.11775);
}

double NNfunction_sLg::synapse0x26823e0() {
   return (neuron0x267c060()*-0.0641979);
}

double NNfunction_sLg::synapse0x2682420() {
   return (neuron0x267c3a0()*-0.122812);
}

double NNfunction_sLg::synapse0x2682460() {
   return (neuron0x267c6e0()*0.244115);
}

double NNfunction_sLg::synapse0x26824a0() {
   return (neuron0x267ca20()*-0.0605732);
}

double NNfunction_sLg::synapse0x26824e0() {
   return (neuron0x267cd60()*0.156339);
}

double NNfunction_sLg::synapse0x2682520() {
   return (neuron0x267d0a0()*0.0309865);
}

double NNfunction_sLg::synapse0x2682560() {
   return (neuron0x267d3e0()*1.28217);
}

double NNfunction_sLg::synapse0x26825a0() {
   return (neuron0x267d720()*0.0285884);
}

double NNfunction_sLg::synapse0x26825e0() {
   return (neuron0x267da60()*0.0315793);
}

double NNfunction_sLg::synapse0x2682620() {
   return (neuron0x267dda0()*0.149391);
}

double NNfunction_sLg::synapse0x26820b0() {
   return (neuron0x267e0e0()*-0.116211);
}

double NNfunction_sLg::synapse0x26820f0() {
   return (neuron0x267e640()*-0.0283395);
}

double NNfunction_sLg::synapse0x2682770() {
   return (neuron0x267e860()*0.0880876);
}

double NNfunction_sLg::synapse0x26827b0() {
   return (neuron0x267eba0()*-0.019366);
}

double NNfunction_sLg::synapse0x26827f0() {
   return (neuron0x267eee0()*0.0802235);
}

double NNfunction_sLg::synapse0x2682830() {
   return (neuron0x267f220()*-0.0375411);
}

double NNfunction_sLg::synapse0x2682870() {
   return (neuron0x267f560()*0.0478084);
}

double NNfunction_sLg::synapse0x26828b0() {
   return (neuron0x267f8a0()*0.010449);
}

double NNfunction_sLg::synapse0x2682c30() {
   return (neuron0x267ace0()*-0.0336847);
}

double NNfunction_sLg::synapse0x2682c70() {
   return (neuron0x267b020()*-0.0497949);
}

double NNfunction_sLg::synapse0x2682cb0() {
   return (neuron0x267b360()*-0.30784);
}

double NNfunction_sLg::synapse0x2682cf0() {
   return (neuron0x267b6a0()*-0.0982985);
}

double NNfunction_sLg::synapse0x2682d30() {
   return (neuron0x267b9e0()*-0.0134251);
}

double NNfunction_sLg::synapse0x2682d70() {
   return (neuron0x267bd20()*-0.286989);
}

double NNfunction_sLg::synapse0x2682db0() {
   return (neuron0x267c060()*-0.172682);
}

double NNfunction_sLg::synapse0x2682df0() {
   return (neuron0x267c3a0()*0.37948);
}

double NNfunction_sLg::synapse0x2682e30() {
   return (neuron0x267c6e0()*-0.285549);
}

double NNfunction_sLg::synapse0x243a650() {
   return (neuron0x267ca20()*0.318738);
}

double NNfunction_sLg::synapse0x243a690() {
   return (neuron0x267cd60()*-0.298301);
}

double NNfunction_sLg::synapse0x243a6d0() {
   return (neuron0x267d0a0()*0.368836);
}

double NNfunction_sLg::synapse0x243a710() {
   return (neuron0x267d3e0()*0.826352);
}

double NNfunction_sLg::synapse0x243a750() {
   return (neuron0x267d720()*-0.126703);
}

double NNfunction_sLg::synapse0x243a790() {
   return (neuron0x267da60()*0.217054);
}

double NNfunction_sLg::synapse0x243a7d0() {
   return (neuron0x267dda0()*-0.0234677);
}

double NNfunction_sLg::synapse0x2682a80() {
   return (neuron0x267e0e0()*-0.406463);
}

double NNfunction_sLg::synapse0x2682ac0() {
   return (neuron0x267e640()*-0.308655);
}

double NNfunction_sLg::synapse0x243a920() {
   return (neuron0x267e860()*-0.217197);
}

double NNfunction_sLg::synapse0x243a960() {
   return (neuron0x267eba0()*-0.171542);
}

double NNfunction_sLg::synapse0x243a9a0() {
   return (neuron0x267eee0()*-0.237198);
}

double NNfunction_sLg::synapse0x243a9e0() {
   return (neuron0x267f220()*0.120075);
}

double NNfunction_sLg::synapse0x243aa20() {
   return (neuron0x267f560()*0.475818);
}

double NNfunction_sLg::synapse0x2683680() {
   return (neuron0x267f8a0()*0.219965);
}

double NNfunction_sLg::synapse0x2683a00() {
   return (neuron0x267ace0()*-0.00898012);
}

double NNfunction_sLg::synapse0x2683a40() {
   return (neuron0x267b020()*0.0032093);
}

double NNfunction_sLg::synapse0x2683a80() {
   return (neuron0x267b360()*-0.01334);
}

double NNfunction_sLg::synapse0x2683ac0() {
   return (neuron0x267b6a0()*-17.9605);
}

double NNfunction_sLg::synapse0x2683b00() {
   return (neuron0x267b9e0()*0.00883513);
}

double NNfunction_sLg::synapse0x2683b40() {
   return (neuron0x267bd20()*0.00369445);
}

double NNfunction_sLg::synapse0x2683b80() {
   return (neuron0x267c060()*-0.00485831);
}

double NNfunction_sLg::synapse0x2683bc0() {
   return (neuron0x267c3a0()*0.0167132);
}

double NNfunction_sLg::synapse0x2683c00() {
   return (neuron0x267c6e0()*-0.000198827);
}

double NNfunction_sLg::synapse0x2683c40() {
   return (neuron0x267ca20()*-0.00312517);
}

double NNfunction_sLg::synapse0x2683c80() {
   return (neuron0x267cd60()*-0.000255063);
}

double NNfunction_sLg::synapse0x2683cc0() {
   return (neuron0x267d0a0()*0.0239105);
}

double NNfunction_sLg::synapse0x2683d00() {
   return (neuron0x267d3e0()*-0.332109);
}

double NNfunction_sLg::synapse0x2683d40() {
   return (neuron0x267d720()*-0.00258434);
}

double NNfunction_sLg::synapse0x2683d80() {
   return (neuron0x267da60()*0.0136522);
}

double NNfunction_sLg::synapse0x2683dc0() {
   return (neuron0x267dda0()*0.0048108);
}

double NNfunction_sLg::synapse0x2683850() {
   return (neuron0x267e0e0()*-0.00993149);
}

double NNfunction_sLg::synapse0x2683890() {
   return (neuron0x267e640()*0.0184885);
}

double NNfunction_sLg::synapse0x2683f10() {
   return (neuron0x267e860()*0.0160806);
}

double NNfunction_sLg::synapse0x2683f50() {
   return (neuron0x267eba0()*-0.00957231);
}

double NNfunction_sLg::synapse0x2683f90() {
   return (neuron0x267eee0()*0.000637913);
}

double NNfunction_sLg::synapse0x2683fd0() {
   return (neuron0x267f220()*-0.00443271);
}

double NNfunction_sLg::synapse0x2684010() {
   return (neuron0x267f560()*-0.00385481);
}

double NNfunction_sLg::synapse0x2684050() {
   return (neuron0x267f8a0()*-0.0048975);
}

double NNfunction_sLg::synapse0x26843d0() {
   return (neuron0x267ace0()*0.00575446);
}

double NNfunction_sLg::synapse0x2684410() {
   return (neuron0x267b020()*0.00467233);
}

double NNfunction_sLg::synapse0x2684450() {
   return (neuron0x267b360()*-0.0592619);
}

double NNfunction_sLg::synapse0x2684490() {
   return (neuron0x267b6a0()*0.829965);
}

double NNfunction_sLg::synapse0x26844d0() {
   return (neuron0x267b9e0()*-0.00132281);
}

double NNfunction_sLg::synapse0x2684510() {
   return (neuron0x267bd20()*0.00447714);
}

double NNfunction_sLg::synapse0x2684550() {
   return (neuron0x267c060()*0.0124743);
}

double NNfunction_sLg::synapse0x2684590() {
   return (neuron0x267c3a0()*8.40353e-06);
}

double NNfunction_sLg::synapse0x26845d0() {
   return (neuron0x267c6e0()*-0.019481);
}

double NNfunction_sLg::synapse0x2684610() {
   return (neuron0x267ca20()*-0.0030142);
}

double NNfunction_sLg::synapse0x2684650() {
   return (neuron0x267cd60()*-0.0101112);
}

double NNfunction_sLg::synapse0x2684690() {
   return (neuron0x267d0a0()*-0.02811);
}

double NNfunction_sLg::synapse0x26846d0() {
   return (neuron0x267d3e0()*2.33823);
}

double NNfunction_sLg::synapse0x2684710() {
   return (neuron0x267d720()*-0.0135673);
}

double NNfunction_sLg::synapse0x2684750() {
   return (neuron0x267da60()*-0.00503457);
}

double NNfunction_sLg::synapse0x2684790() {
   return (neuron0x267dda0()*0.00236782);
}

double NNfunction_sLg::synapse0x2684220() {
   return (neuron0x267e0e0()*-0.0184422);
}

double NNfunction_sLg::synapse0x2684260() {
   return (neuron0x267e640()*-0.0135634);
}

double NNfunction_sLg::synapse0x26848e0() {
   return (neuron0x267e860()*-0.0249291);
}

double NNfunction_sLg::synapse0x2684920() {
   return (neuron0x267eba0()*-0.00186549);
}

double NNfunction_sLg::synapse0x2684960() {
   return (neuron0x267eee0()*0.00736412);
}

double NNfunction_sLg::synapse0x26849a0() {
   return (neuron0x267f220()*-0.00127732);
}

double NNfunction_sLg::synapse0x26849e0() {
   return (neuron0x267f560()*-0.0029899);
}

double NNfunction_sLg::synapse0x2684a20() {
   return (neuron0x267f8a0()*0.000324854);
}

double NNfunction_sLg::synapse0x267e530() {
   return (neuron0x267ace0()*-0.0951031);
}

double NNfunction_sLg::synapse0x267e570() {
   return (neuron0x267b020()*0.133326);
}

double NNfunction_sLg::synapse0x267e5b0() {
   return (neuron0x267b360()*-0.239082);
}

double NNfunction_sLg::synapse0x267e5f0() {
   return (neuron0x267b6a0()*0.59233);
}

double NNfunction_sLg::synapse0x2684fb0() {
   return (neuron0x267b9e0()*-0.0515234);
}

double NNfunction_sLg::synapse0x2684ff0() {
   return (neuron0x267bd20()*0.340155);
}

double NNfunction_sLg::synapse0x2685030() {
   return (neuron0x267c060()*-0.129655);
}

double NNfunction_sLg::synapse0x2685070() {
   return (neuron0x267c3a0()*0.00415043);
}

double NNfunction_sLg::synapse0x26850b0() {
   return (neuron0x267c6e0()*-0.103025);
}

double NNfunction_sLg::synapse0x26850f0() {
   return (neuron0x267ca20()*-0.107502);
}

double NNfunction_sLg::synapse0x2685130() {
   return (neuron0x267cd60()*-0.160401);
}

double NNfunction_sLg::synapse0x2685170() {
   return (neuron0x267d0a0()*0.138874);
}

double NNfunction_sLg::synapse0x26851b0() {
   return (neuron0x267d3e0()*0.678253);
}

double NNfunction_sLg::synapse0x26851f0() {
   return (neuron0x267d720()*-1.40038);
}

double NNfunction_sLg::synapse0x2685230() {
   return (neuron0x267da60()*0.217498);
}

double NNfunction_sLg::synapse0x2685270() {
   return (neuron0x267dda0()*-0.440134);
}

double NNfunction_sLg::synapse0x2684bf0() {
   return (neuron0x267e0e0()*0.107875);
}

double NNfunction_sLg::synapse0x2684c30() {
   return (neuron0x267e640()*-0.0930799);
}

double NNfunction_sLg::synapse0x26853c0() {
   return (neuron0x267e860()*0.561243);
}

double NNfunction_sLg::synapse0x2685400() {
   return (neuron0x267eba0()*0.213749);
}

double NNfunction_sLg::synapse0x2685440() {
   return (neuron0x267eee0()*-0.0391961);
}

double NNfunction_sLg::synapse0x2685480() {
   return (neuron0x267f220()*-0.184641);
}

double NNfunction_sLg::synapse0x26854c0() {
   return (neuron0x267f560()*-0.150982);
}

double NNfunction_sLg::synapse0x2685500() {
   return (neuron0x267f8a0()*-0.0180294);
}

double NNfunction_sLg::synapse0x2685880() {
   return (neuron0x267ace0()*0.0301862);
}

double NNfunction_sLg::synapse0x26858c0() {
   return (neuron0x267b020()*-0.0045733);
}

double NNfunction_sLg::synapse0x2685900() {
   return (neuron0x267b360()*0.187911);
}

double NNfunction_sLg::synapse0x2685940() {
   return (neuron0x267b6a0()*-0.216727);
}

double NNfunction_sLg::synapse0x2685980() {
   return (neuron0x267b9e0()*0.0351838);
}

double NNfunction_sLg::synapse0x26859c0() {
   return (neuron0x267bd20()*0.00439654);
}

double NNfunction_sLg::synapse0x2685a00() {
   return (neuron0x267c060()*0.000805115);
}

double NNfunction_sLg::synapse0x2685a40() {
   return (neuron0x267c3a0()*0.016819);
}

double NNfunction_sLg::synapse0x2685a80() {
   return (neuron0x267c6e0()*-0.078717);
}

double NNfunction_sLg::synapse0x2685ac0() {
   return (neuron0x267ca20()*0.00719231);
}

double NNfunction_sLg::synapse0x2685b00() {
   return (neuron0x267cd60()*0.0603085);
}

double NNfunction_sLg::synapse0x2685b40() {
   return (neuron0x267d0a0()*0.0119414);
}

double NNfunction_sLg::synapse0x2685b80() {
   return (neuron0x267d3e0()*-0.790619);
}

double NNfunction_sLg::synapse0x2685bc0() {
   return (neuron0x267d720()*0.0432523);
}

double NNfunction_sLg::synapse0x2685c00() {
   return (neuron0x267da60()*0.0388469);
}

double NNfunction_sLg::synapse0x2685c40() {
   return (neuron0x267dda0()*0.0341499);
}

double NNfunction_sLg::synapse0x26856d0() {
   return (neuron0x267e0e0()*0.0940068);
}

double NNfunction_sLg::synapse0x2685710() {
   return (neuron0x267e640()*0.00964108);
}

double NNfunction_sLg::synapse0x2685d90() {
   return (neuron0x267e860()*0.00288508);
}

double NNfunction_sLg::synapse0x2685dd0() {
   return (neuron0x267eba0()*-0.0114518);
}

double NNfunction_sLg::synapse0x2685e10() {
   return (neuron0x267eee0()*-0.00185831);
}

double NNfunction_sLg::synapse0x2685e50() {
   return (neuron0x267f220()*-0.0060895);
}

double NNfunction_sLg::synapse0x2685e90() {
   return (neuron0x267f560()*-0.00281221);
}

double NNfunction_sLg::synapse0x2685ed0() {
   return (neuron0x267f8a0()*0.00940857);
}

double NNfunction_sLg::synapse0x2686250() {
   return (neuron0x267ace0()*0.0183702);
}

double NNfunction_sLg::synapse0x2686290() {
   return (neuron0x267b020()*0.0908811);
}

double NNfunction_sLg::synapse0x26862d0() {
   return (neuron0x267b360()*0.192557);
}

double NNfunction_sLg::synapse0x2686310() {
   return (neuron0x267b6a0()*-0.0650091);
}

double NNfunction_sLg::synapse0x2686350() {
   return (neuron0x267b9e0()*-0.0329958);
}

double NNfunction_sLg::synapse0x2686390() {
   return (neuron0x267bd20()*0.0652549);
}

double NNfunction_sLg::synapse0x26863d0() {
   return (neuron0x267c060()*0.00821696);
}

double NNfunction_sLg::synapse0x2686410() {
   return (neuron0x267c3a0()*-0.0224726);
}

double NNfunction_sLg::synapse0x2686450() {
   return (neuron0x267c6e0()*-0.0193209);
}

double NNfunction_sLg::synapse0x2686490() {
   return (neuron0x267ca20()*0.0482277);
}

double NNfunction_sLg::synapse0x26864d0() {
   return (neuron0x267cd60()*0.00978117);
}

double NNfunction_sLg::synapse0x2686510() {
   return (neuron0x267d0a0()*-0.0238259);
}

double NNfunction_sLg::synapse0x2686550() {
   return (neuron0x267d3e0()*-0.560733);
}

double NNfunction_sLg::synapse0x2686590() {
   return (neuron0x267d720()*-0.107947);
}

double NNfunction_sLg::synapse0x26865d0() {
   return (neuron0x267da60()*-0.0383121);
}

double NNfunction_sLg::synapse0x2686610() {
   return (neuron0x267dda0()*-0.0496856);
}

double NNfunction_sLg::synapse0x26860a0() {
   return (neuron0x267e0e0()*-0.0107511);
}

double NNfunction_sLg::synapse0x26860e0() {
   return (neuron0x267e640()*0.511645);
}

double NNfunction_sLg::synapse0x2682e70() {
   return (neuron0x267e860()*0.0316445);
}

double NNfunction_sLg::synapse0x2682eb0() {
   return (neuron0x267eba0()*-0.184005);
}

double NNfunction_sLg::synapse0x2682ef0() {
   return (neuron0x267eee0()*-0.0181848);
}

double NNfunction_sLg::synapse0x2682f30() {
   return (neuron0x267f220()*-0.0443988);
}

double NNfunction_sLg::synapse0x2682f70() {
   return (neuron0x267f560()*-0.0430588);
}

double NNfunction_sLg::synapse0x2682fb0() {
   return (neuron0x267f8a0()*0.0315279);
}

double NNfunction_sLg::synapse0x2683330() {
   return (neuron0x267ace0()*-0.000107637);
}

double NNfunction_sLg::synapse0x2683370() {
   return (neuron0x267b020()*8.74027e-05);
}

double NNfunction_sLg::synapse0x26833b0() {
   return (neuron0x267b360()*-0.0154793);
}

double NNfunction_sLg::synapse0x26833f0() {
   return (neuron0x267b6a0()*-1.72738);
}

double NNfunction_sLg::synapse0x2683430() {
   return (neuron0x267b9e0()*-0.00201049);
}

double NNfunction_sLg::synapse0x2683470() {
   return (neuron0x267bd20()*-0.00119464);
}

double NNfunction_sLg::synapse0x26834b0() {
   return (neuron0x267c060()*0.00193724);
}

double NNfunction_sLg::synapse0x26834f0() {
   return (neuron0x267c3a0()*-0.00141213);
}

double NNfunction_sLg::synapse0x2683530() {
   return (neuron0x267c6e0()*0.00151724);
}

double NNfunction_sLg::synapse0x2683570() {
   return (neuron0x267ca20()*-5.55052e-05);
}

double NNfunction_sLg::synapse0x26835b0() {
   return (neuron0x267cd60()*-0.00291726);
}

double NNfunction_sLg::synapse0x26835f0() {
   return (neuron0x267d0a0()*0.0276106);
}

double NNfunction_sLg::synapse0x2683630() {
   return (neuron0x267d3e0()*0.444184);
}

double NNfunction_sLg::synapse0x2687770() {
   return (neuron0x267d720()*0.00788679);
}

double NNfunction_sLg::synapse0x26877b0() {
   return (neuron0x267da60()*0.0129711);
}

double NNfunction_sLg::synapse0x26877f0() {
   return (neuron0x267dda0()*0.00954723);
}

double NNfunction_sLg::synapse0x2683180() {
   return (neuron0x267e0e0()*0.00163494);
}

double NNfunction_sLg::synapse0x26831c0() {
   return (neuron0x267e640()*0.0210189);
}

double NNfunction_sLg::synapse0x2687940() {
   return (neuron0x267e860()*0.017326);
}

double NNfunction_sLg::synapse0x2687980() {
   return (neuron0x267eba0()*0.0056008);
}

double NNfunction_sLg::synapse0x26879c0() {
   return (neuron0x267eee0()*0.00379548);
}

double NNfunction_sLg::synapse0x2687a00() {
   return (neuron0x267f220()*0.00168709);
}

double NNfunction_sLg::synapse0x2687a40() {
   return (neuron0x267f560()*-0.000777594);
}

double NNfunction_sLg::synapse0x2687a80() {
   return (neuron0x267f8a0()*-0.00174981);
}

double NNfunction_sLg::synapse0x2687e00() {
   return (neuron0x267ace0()*0.0061092);
}

double NNfunction_sLg::synapse0x2687e40() {
   return (neuron0x267b020()*-0.0154528);
}

double NNfunction_sLg::synapse0x2687e80() {
   return (neuron0x267b360()*-0.0258061);
}

double NNfunction_sLg::synapse0x2687ec0() {
   return (neuron0x267b6a0()*16.0731);
}

double NNfunction_sLg::synapse0x2687f00() {
   return (neuron0x267b9e0()*0.0102926);
}

double NNfunction_sLg::synapse0x2687f40() {
   return (neuron0x267bd20()*0.00377574);
}

double NNfunction_sLg::synapse0x2687f80() {
   return (neuron0x267c060()*-0.0112127);
}

double NNfunction_sLg::synapse0x2687fc0() {
   return (neuron0x267c3a0()*0.0103005);
}

double NNfunction_sLg::synapse0x2688000() {
   return (neuron0x267c6e0()*-0.00743288);
}

double NNfunction_sLg::synapse0x2688040() {
   return (neuron0x267ca20()*0.00458045);
}

double NNfunction_sLg::synapse0x2688080() {
   return (neuron0x267cd60()*0.00310485);
}

double NNfunction_sLg::synapse0x26880c0() {
   return (neuron0x267d0a0()*0.00825658);
}

double NNfunction_sLg::synapse0x2688100() {
   return (neuron0x267d3e0()*-0.347951);
}

double NNfunction_sLg::synapse0x2688140() {
   return (neuron0x267d720()*-0.00699298);
}

double NNfunction_sLg::synapse0x2688180() {
   return (neuron0x267da60()*0.0127603);
}

double NNfunction_sLg::synapse0x26881c0() {
   return (neuron0x267dda0()*0.00962638);
}

double NNfunction_sLg::synapse0x2687c50() {
   return (neuron0x267e0e0()*0.0116264);
}

double NNfunction_sLg::synapse0x2687c90() {
   return (neuron0x267e640()*0.00944687);
}

double NNfunction_sLg::synapse0x2688310() {
   return (neuron0x267e860()*0.00896774);
}

double NNfunction_sLg::synapse0x2688350() {
   return (neuron0x267eba0()*0.00645904);
}

double NNfunction_sLg::synapse0x2688390() {
   return (neuron0x267eee0()*-0.0098076);
}

double NNfunction_sLg::synapse0x26883d0() {
   return (neuron0x267f220()*-0.00500473);
}

double NNfunction_sLg::synapse0x2688410() {
   return (neuron0x267f560()*0.00379569);
}

double NNfunction_sLg::synapse0x2688450() {
   return (neuron0x267f8a0()*0.00849836);
}

double NNfunction_sLg::synapse0x26887d0() {
   return (neuron0x267ace0()*-0.150646);
}

double NNfunction_sLg::synapse0x2688810() {
   return (neuron0x267b020()*-0.0635548);
}

double NNfunction_sLg::synapse0x2688850() {
   return (neuron0x267b360()*-0.242829);
}

double NNfunction_sLg::synapse0x2688890() {
   return (neuron0x267b6a0()*-0.44727);
}

double NNfunction_sLg::synapse0x26888d0() {
   return (neuron0x267b9e0()*-0.0498578);
}

double NNfunction_sLg::synapse0x2688910() {
   return (neuron0x267bd20()*-0.514227);
}

double NNfunction_sLg::synapse0x2688950() {
   return (neuron0x267c060()*-0.394816);
}

double NNfunction_sLg::synapse0x2688990() {
   return (neuron0x267c3a0()*0.0655457);
}

double NNfunction_sLg::synapse0x26889d0() {
   return (neuron0x267c6e0()*0.160035);
}

double NNfunction_sLg::synapse0x2688a10() {
   return (neuron0x267ca20()*0.360023);
}

double NNfunction_sLg::synapse0x2688a50() {
   return (neuron0x267cd60()*-0.187913);
}

double NNfunction_sLg::synapse0x2688a90() {
   return (neuron0x267d0a0()*-0.246632);
}

double NNfunction_sLg::synapse0x2688ad0() {
   return (neuron0x267d3e0()*-0.449482);
}

double NNfunction_sLg::synapse0x2688b10() {
   return (neuron0x267d720()*-0.256174);
}

double NNfunction_sLg::synapse0x2688b50() {
   return (neuron0x267da60()*0.220936);
}

double NNfunction_sLg::synapse0x2688b90() {
   return (neuron0x267dda0()*-0.127331);
}

double NNfunction_sLg::synapse0x2688620() {
   return (neuron0x267e0e0()*0.178632);
}

double NNfunction_sLg::synapse0x2688660() {
   return (neuron0x267e640()*0.610636);
}

double NNfunction_sLg::synapse0x2688ce0() {
   return (neuron0x267e860()*-0.0235023);
}

double NNfunction_sLg::synapse0x2688d20() {
   return (neuron0x267eba0()*0.490185);
}

double NNfunction_sLg::synapse0x2688d60() {
   return (neuron0x267eee0()*-0.0122818);
}

double NNfunction_sLg::synapse0x2688da0() {
   return (neuron0x267f220()*0.309575);
}

double NNfunction_sLg::synapse0x2688de0() {
   return (neuron0x267f560()*-0.308899);
}

double NNfunction_sLg::synapse0x2688e20() {
   return (neuron0x267f8a0()*-0.227315);
}

double NNfunction_sLg::synapse0x26891a0() {
   return (neuron0x267ace0()*0.0188856);
}

double NNfunction_sLg::synapse0x26891e0() {
   return (neuron0x267b020()*-0.0366226);
}

double NNfunction_sLg::synapse0x2689220() {
   return (neuron0x267b360()*0.10378);
}

double NNfunction_sLg::synapse0x2689260() {
   return (neuron0x267b6a0()*-0.0966941);
}

double NNfunction_sLg::synapse0x26892a0() {
   return (neuron0x267b9e0()*-0.0953341);
}

double NNfunction_sLg::synapse0x26892e0() {
   return (neuron0x267bd20()*0.0243205);
}

double NNfunction_sLg::synapse0x2689320() {
   return (neuron0x267c060()*-0.0498335);
}

double NNfunction_sLg::synapse0x2689360() {
   return (neuron0x267c3a0()*-0.063727);
}

double NNfunction_sLg::synapse0x26893a0() {
   return (neuron0x267c6e0()*-0.0237605);
}

double NNfunction_sLg::synapse0x26893e0() {
   return (neuron0x267ca20()*-0.0365298);
}

double NNfunction_sLg::synapse0x2689420() {
   return (neuron0x267cd60()*0.00259941);
}

double NNfunction_sLg::synapse0x2689460() {
   return (neuron0x267d0a0()*-0.0463414);
}

double NNfunction_sLg::synapse0x26894a0() {
   return (neuron0x267d3e0()*-0.452191);
}

double NNfunction_sLg::synapse0x26894e0() {
   return (neuron0x267d720()*0.00419381);
}

double NNfunction_sLg::synapse0x2689520() {
   return (neuron0x267da60()*0.78368);
}

double NNfunction_sLg::synapse0x2689560() {
   return (neuron0x267dda0()*-0.0939773);
}

double NNfunction_sLg::synapse0x2688ff0() {
   return (neuron0x267e0e0()*-0.137232);
}

double NNfunction_sLg::synapse0x2689030() {
   return (neuron0x267e640()*-0.0151304);
}

double NNfunction_sLg::synapse0x26896b0() {
   return (neuron0x267e860()*0.0174823);
}

double NNfunction_sLg::synapse0x26896f0() {
   return (neuron0x267eba0()*-0.0105332);
}

double NNfunction_sLg::synapse0x2689730() {
   return (neuron0x267eee0()*0.0152829);
}

double NNfunction_sLg::synapse0x2689770() {
   return (neuron0x267f220()*-0.00523714);
}

double NNfunction_sLg::synapse0x26897b0() {
   return (neuron0x267f560()*-0.048007);
}

double NNfunction_sLg::synapse0x26897f0() {
   return (neuron0x267f8a0()*9.03454e-05);
}

double NNfunction_sLg::synapse0x2689b70() {
   return (neuron0x267ace0()*-0.0760632);
}

double NNfunction_sLg::synapse0x267af00() {
   return (neuron0x267b020()*-0.172571);
}

double NNfunction_sLg::synapse0x267af40() {
   return (neuron0x267b360()*0.139304);
}

double NNfunction_sLg::synapse0x267b240() {
   return (neuron0x267b6a0()*-0.197996);
}

double NNfunction_sLg::synapse0x267b280() {
   return (neuron0x267b9e0()*-0.154815);
}

double NNfunction_sLg::synapse0x267b580() {
   return (neuron0x267bd20()*-0.140746);
}

double NNfunction_sLg::synapse0x267b5c0() {
   return (neuron0x267c060()*0.147133);
}

double NNfunction_sLg::synapse0x267b8c0() {
   return (neuron0x267c3a0()*0.171763);
}

double NNfunction_sLg::synapse0x267b900() {
   return (neuron0x267c6e0()*-0.01447);
}

double NNfunction_sLg::synapse0x267bc00() {
   return (neuron0x267ca20()*-0.097132);
}

double NNfunction_sLg::synapse0x267bc40() {
   return (neuron0x267cd60()*0.0663227);
}

double NNfunction_sLg::synapse0x267bf40() {
   return (neuron0x267d0a0()*-0.205801);
}

double NNfunction_sLg::synapse0x267bf80() {
   return (neuron0x267d3e0()*-0.476819);
}

double NNfunction_sLg::synapse0x267c280() {
   return (neuron0x267d720()*0.199843);
}

double NNfunction_sLg::synapse0x267c2c0() {
   return (neuron0x267da60()*-0.279529);
}

double NNfunction_sLg::synapse0x267c5c0() {
   return (neuron0x267dda0()*-0.175835);
}

double NNfunction_sLg::synapse0x267c600() {
   return (neuron0x267e0e0()*-0.371737);
}

double NNfunction_sLg::synapse0x267c900() {
   return (neuron0x267e640()*0.17907);
}

double NNfunction_sLg::synapse0x267c940() {
   return (neuron0x267e860()*0.582234);
}

double NNfunction_sLg::synapse0x267cc40() {
   return (neuron0x267eba0()*0.326714);
}

double NNfunction_sLg::synapse0x267cc80() {
   return (neuron0x267eee0()*-0.0248384);
}

double NNfunction_sLg::synapse0x267cf80() {
   return (neuron0x267f220()*0.0893974);
}

double NNfunction_sLg::synapse0x267cfc0() {
   return (neuron0x267f560()*-0.11699);
}

double NNfunction_sLg::synapse0x267d2c0() {
   return (neuron0x267f8a0()*-0.0142606);
}

double NNfunction_sLg::synapse0x267d300() {
   return (neuron0x267ace0()*-3.92342e-05);
}

double NNfunction_sLg::synapse0x267dfc0() {
   return (neuron0x267b020()*0.00486066);
}

double NNfunction_sLg::synapse0x267e000() {
   return (neuron0x267b360()*-0.0276155);
}

double NNfunction_sLg::synapse0x26899c0() {
   return (neuron0x267b6a0()*-0.189152);
}

double NNfunction_sLg::synapse0x2689a00() {
   return (neuron0x267b9e0()*-0.00498876);
}

double NNfunction_sLg::synapse0x267e300() {
   return (neuron0x267bd20()*0.00409352);
}

double NNfunction_sLg::synapse0x267e340() {
   return (neuron0x267c060()*0.00305764);
}

double NNfunction_sLg::synapse0x242c670() {
   return (neuron0x267c3a0()*-0.016194);
}

double NNfunction_sLg::synapse0x242c6b0() {
   return (neuron0x267c6e0()*0.00920297);
}

double NNfunction_sLg::synapse0x267ea80() {
   return (neuron0x267ca20()*0.00128685);
}

double NNfunction_sLg::synapse0x267eac0() {
   return (neuron0x267cd60()*0.0113389);
}

double NNfunction_sLg::synapse0x267edc0() {
   return (neuron0x267d0a0()*-0.206154);
}

double NNfunction_sLg::synapse0x267ee00() {
   return (neuron0x267d3e0()*-0.217913);
}

double NNfunction_sLg::synapse0x267f100() {
   return (neuron0x267d720()*0.0238228);
}

double NNfunction_sLg::synapse0x267f140() {
   return (neuron0x267da60()*-0.131063);
}

double NNfunction_sLg::synapse0x267f440() {
   return (neuron0x267dda0()*-0.138367);
}

double NNfunction_sLg::synapse0x267f480() {
   return (neuron0x267e0e0()*0.0238993);
}

double NNfunction_sLg::synapse0x267f780() {
   return (neuron0x267e640()*-0.119902);
}

double NNfunction_sLg::synapse0x267f7c0() {
   return (neuron0x267e860()*-0.11223);
}

double NNfunction_sLg::synapse0x267fac0() {
   return (neuron0x267eba0()*-0.0122542);
}

double NNfunction_sLg::synapse0x267fb00() {
   return (neuron0x267eee0()*0.00320392);
}

double NNfunction_sLg::synapse0x267d600() {
   return (neuron0x267f220()*0.000733451);
}

double NNfunction_sLg::synapse0x267d640() {
   return (neuron0x267f560()*0.00415423);
}

double NNfunction_sLg::synapse0x268b8e0() {
   return (neuron0x267f8a0()*-0.00486468);
}

double NNfunction_sLg::synapse0x268bc60() {
   return (neuron0x267ace0()*0.132311);
}

double NNfunction_sLg::synapse0x268bca0() {
   return (neuron0x267b020()*-0.305104);
}

double NNfunction_sLg::synapse0x268bce0() {
   return (neuron0x267b360()*0.0131762);
}

double NNfunction_sLg::synapse0x268bd20() {
   return (neuron0x267b6a0()*0.0435981);
}

double NNfunction_sLg::synapse0x268bd60() {
   return (neuron0x267b9e0()*-0.0476491);
}

double NNfunction_sLg::synapse0x268bda0() {
   return (neuron0x267bd20()*0.0402892);
}

double NNfunction_sLg::synapse0x268bde0() {
   return (neuron0x267c060()*0.0526815);
}

double NNfunction_sLg::synapse0x268be20() {
   return (neuron0x267c3a0()*0.1039);
}

double NNfunction_sLg::synapse0x268be60() {
   return (neuron0x267c6e0()*0.101263);
}

double NNfunction_sLg::synapse0x268bea0() {
   return (neuron0x267ca20()*-0.256728);
}

double NNfunction_sLg::synapse0x268bee0() {
   return (neuron0x267cd60()*0.076513);
}

double NNfunction_sLg::synapse0x268bf20() {
   return (neuron0x267d0a0()*0.294199);
}

double NNfunction_sLg::synapse0x268bf60() {
   return (neuron0x267d3e0()*0.303798);
}

double NNfunction_sLg::synapse0x268bfa0() {
   return (neuron0x267d720()*0.406789);
}

double NNfunction_sLg::synapse0x268bfe0() {
   return (neuron0x267da60()*0.286429);
}

double NNfunction_sLg::synapse0x268c020() {
   return (neuron0x267dda0()*0.680249);
}

double NNfunction_sLg::synapse0x268bab0() {
   return (neuron0x267e0e0()*-0.010906);
}

double NNfunction_sLg::synapse0x268baf0() {
   return (neuron0x267e640()*0.055865);
}

double NNfunction_sLg::synapse0x268c170() {
   return (neuron0x267e860()*-0.283603);
}

double NNfunction_sLg::synapse0x268c1b0() {
   return (neuron0x267eba0()*-0.0599994);
}

double NNfunction_sLg::synapse0x268c1f0() {
   return (neuron0x267eee0()*-0.10367);
}

double NNfunction_sLg::synapse0x268c230() {
   return (neuron0x267f220()*0.196944);
}

double NNfunction_sLg::synapse0x268c270() {
   return (neuron0x267f560()*-0.033739);
}

double NNfunction_sLg::synapse0x268c2b0() {
   return (neuron0x267f8a0()*0.080964);
}

double NNfunction_sLg::synapse0x268c630() {
   return (neuron0x267ace0()*0.258669);
}

double NNfunction_sLg::synapse0x268c670() {
   return (neuron0x267b020()*0.65427);
}

double NNfunction_sLg::synapse0x268c6b0() {
   return (neuron0x267b360()*0.0523757);
}

double NNfunction_sLg::synapse0x268c6f0() {
   return (neuron0x267b6a0()*0.279516);
}

double NNfunction_sLg::synapse0x268c730() {
   return (neuron0x267b9e0()*0.0942182);
}

double NNfunction_sLg::synapse0x268c770() {
   return (neuron0x267bd20()*0.141978);
}

double NNfunction_sLg::synapse0x268c7b0() {
   return (neuron0x267c060()*0.335135);
}

double NNfunction_sLg::synapse0x268c7f0() {
   return (neuron0x267c3a0()*0.470397);
}

double NNfunction_sLg::synapse0x268c830() {
   return (neuron0x267c6e0()*-0.0631931);
}

double NNfunction_sLg::synapse0x268c870() {
   return (neuron0x267ca20()*0.0971792);
}

double NNfunction_sLg::synapse0x268c8b0() {
   return (neuron0x267cd60()*0.168596);
}

double NNfunction_sLg::synapse0x268c8f0() {
   return (neuron0x267d0a0()*-0.309223);
}

double NNfunction_sLg::synapse0x268c930() {
   return (neuron0x267d3e0()*-0.158786);
}

double NNfunction_sLg::synapse0x268c970() {
   return (neuron0x267d720()*0.113186);
}

double NNfunction_sLg::synapse0x268c9b0() {
   return (neuron0x267da60()*0.245151);
}

double NNfunction_sLg::synapse0x268c9f0() {
   return (neuron0x267dda0()*-0.294303);
}

double NNfunction_sLg::synapse0x268c480() {
   return (neuron0x267e0e0()*0.332908);
}

double NNfunction_sLg::synapse0x268c4c0() {
   return (neuron0x267e640()*0.162645);
}

double NNfunction_sLg::synapse0x268cb40() {
   return (neuron0x267e860()*0.204085);
}

double NNfunction_sLg::synapse0x268cb80() {
   return (neuron0x267eba0()*0.357235);
}

double NNfunction_sLg::synapse0x268cbc0() {
   return (neuron0x267eee0()*0.249693);
}

double NNfunction_sLg::synapse0x268cc00() {
   return (neuron0x267f220()*-0.378367);
}

double NNfunction_sLg::synapse0x268cc40() {
   return (neuron0x267f560()*0.144723);
}

double NNfunction_sLg::synapse0x268cc80() {
   return (neuron0x267f8a0()*0.0539859);
}

double NNfunction_sLg::synapse0x268d000() {
   return (neuron0x267ace0()*0.0647019);
}

double NNfunction_sLg::synapse0x268d040() {
   return (neuron0x267b020()*0.0201958);
}

double NNfunction_sLg::synapse0x268d080() {
   return (neuron0x267b360()*0.262726);
}

double NNfunction_sLg::synapse0x268d0c0() {
   return (neuron0x267b6a0()*-1.08047);
}

double NNfunction_sLg::synapse0x268d100() {
   return (neuron0x267b9e0()*0.00518635);
}

double NNfunction_sLg::synapse0x268d140() {
   return (neuron0x267bd20()*0.00441041);
}

double NNfunction_sLg::synapse0x268d180() {
   return (neuron0x267c060()*-0.0420034);
}

double NNfunction_sLg::synapse0x268d1c0() {
   return (neuron0x267c3a0()*-0.00300906);
}

double NNfunction_sLg::synapse0x268d200() {
   return (neuron0x267c6e0()*-0.0181939);
}

double NNfunction_sLg::synapse0x268d240() {
   return (neuron0x267ca20()*0.0251985);
}

double NNfunction_sLg::synapse0x268d280() {
   return (neuron0x267cd60()*0.049216);
}

double NNfunction_sLg::synapse0x268d2c0() {
   return (neuron0x267d0a0()*0.0296848);
}

double NNfunction_sLg::synapse0x268d300() {
   return (neuron0x267d3e0()*-0.45751);
}

double NNfunction_sLg::synapse0x268d340() {
   return (neuron0x267d720()*0.0262908);
}

double NNfunction_sLg::synapse0x268d380() {
   return (neuron0x267da60()*-0.0367922);
}

double NNfunction_sLg::synapse0x268d3c0() {
   return (neuron0x267dda0()*0.139926);
}

double NNfunction_sLg::synapse0x268ce50() {
   return (neuron0x267e0e0()*0.136287);
}

double NNfunction_sLg::synapse0x268ce90() {
   return (neuron0x267e640()*0.00229218);
}

double NNfunction_sLg::synapse0x268d510() {
   return (neuron0x267e860()*0.0824486);
}

double NNfunction_sLg::synapse0x268d550() {
   return (neuron0x267eba0()*0.0316727);
}

double NNfunction_sLg::synapse0x268d590() {
   return (neuron0x267eee0()*-0.0239341);
}

double NNfunction_sLg::synapse0x268d5d0() {
   return (neuron0x267f220()*-0.0300706);
}

double NNfunction_sLg::synapse0x268d610() {
   return (neuron0x267f560()*-0.00879841);
}

double NNfunction_sLg::synapse0x268d650() {
   return (neuron0x267f8a0()*0.0148999);
}

double NNfunction_sLg::synapse0x268d9d0() {
   return (neuron0x267ace0()*0.248905);
}

double NNfunction_sLg::synapse0x268da10() {
   return (neuron0x267b020()*-0.184243);
}

double NNfunction_sLg::synapse0x268da50() {
   return (neuron0x267b360()*0.00769274);
}

double NNfunction_sLg::synapse0x268da90() {
   return (neuron0x267b6a0()*-0.237195);
}

double NNfunction_sLg::synapse0x268dad0() {
   return (neuron0x267b9e0()*-0.476066);
}

double NNfunction_sLg::synapse0x268db10() {
   return (neuron0x267bd20()*-0.114942);
}

double NNfunction_sLg::synapse0x268db50() {
   return (neuron0x267c060()*-0.439995);
}

double NNfunction_sLg::synapse0x268db90() {
   return (neuron0x267c3a0()*-0.508901);
}

double NNfunction_sLg::synapse0x268dbd0() {
   return (neuron0x267c6e0()*-0.374406);
}

double NNfunction_sLg::synapse0x268dc10() {
   return (neuron0x267ca20()*0.206462);
}

double NNfunction_sLg::synapse0x268dc50() {
   return (neuron0x267cd60()*0.174076);
}

double NNfunction_sLg::synapse0x268dc90() {
   return (neuron0x267d0a0()*-0.261336);
}

double NNfunction_sLg::synapse0x268dcd0() {
   return (neuron0x267d3e0()*-0.181468);
}

double NNfunction_sLg::synapse0x268dd10() {
   return (neuron0x267d720()*0.135049);
}

double NNfunction_sLg::synapse0x268dd50() {
   return (neuron0x267da60()*-0.0578938);
}

double NNfunction_sLg::synapse0x268dd90() {
   return (neuron0x267dda0()*-0.248408);
}

double NNfunction_sLg::synapse0x268d820() {
   return (neuron0x267e0e0()*-0.187882);
}

double NNfunction_sLg::synapse0x268d860() {
   return (neuron0x267e640()*-0.218142);
}

double NNfunction_sLg::synapse0x268dee0() {
   return (neuron0x267e860()*-0.307854);
}

double NNfunction_sLg::synapse0x268df20() {
   return (neuron0x267eba0()*-0.477693);
}

double NNfunction_sLg::synapse0x268df60() {
   return (neuron0x267eee0()*-0.0667573);
}

double NNfunction_sLg::synapse0x268dfa0() {
   return (neuron0x267f220()*-0.0226684);
}

double NNfunction_sLg::synapse0x268dfe0() {
   return (neuron0x267f560()*0.199847);
}

double NNfunction_sLg::synapse0x268e020() {
   return (neuron0x267f8a0()*0.0980278);
}

double NNfunction_sLg::synapse0x268e3a0() {
   return (neuron0x267ace0()*-0.0249037);
}

double NNfunction_sLg::synapse0x268e3e0() {
   return (neuron0x267b020()*0.173792);
}

double NNfunction_sLg::synapse0x268e420() {
   return (neuron0x267b360()*-0.681702);
}

double NNfunction_sLg::synapse0x268e460() {
   return (neuron0x267b6a0()*-0.00483068);
}

double NNfunction_sLg::synapse0x268e4a0() {
   return (neuron0x267b9e0()*-0.0614444);
}

double NNfunction_sLg::synapse0x268e4e0() {
   return (neuron0x267bd20()*0.245606);
}

double NNfunction_sLg::synapse0x268e520() {
   return (neuron0x267c060()*0.095408);
}

double NNfunction_sLg::synapse0x268e560() {
   return (neuron0x267c3a0()*-0.12859);
}

double NNfunction_sLg::synapse0x268e5a0() {
   return (neuron0x267c6e0()*-0.161446);
}

double NNfunction_sLg::synapse0x2686760() {
   return (neuron0x267ca20()*-0.0074873);
}

double NNfunction_sLg::synapse0x26867a0() {
   return (neuron0x267cd60()*-0.0105348);
}

double NNfunction_sLg::synapse0x26867e0() {
   return (neuron0x267d0a0()*-0.156834);
}

double NNfunction_sLg::synapse0x2686820() {
   return (neuron0x267d3e0()*-0.0838799);
}

double NNfunction_sLg::synapse0x2686860() {
   return (neuron0x267d720()*-0.222432);
}

double NNfunction_sLg::synapse0x26868a0() {
   return (neuron0x267da60()*-0.0909274);
}

double NNfunction_sLg::synapse0x26868e0() {
   return (neuron0x267dda0()*0.277502);
}

double NNfunction_sLg::synapse0x268e1f0() {
   return (neuron0x267e0e0()*-0.0241775);
}

double NNfunction_sLg::synapse0x268e230() {
   return (neuron0x267e640()*-0.0851397);
}

double NNfunction_sLg::synapse0x2686a30() {
   return (neuron0x267e860()*-0.203288);
}

double NNfunction_sLg::synapse0x2686a70() {
   return (neuron0x267eba0()*-0.364505);
}

double NNfunction_sLg::synapse0x2686ab0() {
   return (neuron0x267eee0()*0.16473);
}

double NNfunction_sLg::synapse0x2686af0() {
   return (neuron0x267f220()*-0.0303381);
}

double NNfunction_sLg::synapse0x2686b30() {
   return (neuron0x267f560()*-0.243841);
}

double NNfunction_sLg::synapse0x2686b70() {
   return (neuron0x267f8a0()*0.0479865);
}

double NNfunction_sLg::synapse0x2686ef0() {
   return (neuron0x267ace0()*0.0217695);
}

double NNfunction_sLg::synapse0x2686f30() {
   return (neuron0x267b020()*0.046499);
}

double NNfunction_sLg::synapse0x2686f70() {
   return (neuron0x267b360()*-1.47855);
}

double NNfunction_sLg::synapse0x2686fb0() {
   return (neuron0x267b6a0()*-0.00394224);
}

double NNfunction_sLg::synapse0x2686ff0() {
   return (neuron0x267b9e0()*-0.0295268);
}

double NNfunction_sLg::synapse0x2687030() {
   return (neuron0x267bd20()*0.0410478);
}

double NNfunction_sLg::synapse0x2687070() {
   return (neuron0x267c060()*-0.0297502);
}

double NNfunction_sLg::synapse0x26870b0() {
   return (neuron0x267c3a0()*-0.0160749);
}

double NNfunction_sLg::synapse0x26870f0() {
   return (neuron0x267c6e0()*-0.0349434);
}

double NNfunction_sLg::synapse0x2687130() {
   return (neuron0x267ca20()*-0.0143755);
}

double NNfunction_sLg::synapse0x2687170() {
   return (neuron0x267cd60()*0.010451);
}

double NNfunction_sLg::synapse0x26871b0() {
   return (neuron0x267d0a0()*-0.0601839);
}

double NNfunction_sLg::synapse0x26871f0() {
   return (neuron0x267d3e0()*0.219264);
}

double NNfunction_sLg::synapse0x2687230() {
   return (neuron0x267d720()*-0.00411045);
}

double NNfunction_sLg::synapse0x2687270() {
   return (neuron0x267da60()*-0.0189447);
}

double NNfunction_sLg::synapse0x26872b0() {
   return (neuron0x267dda0()*0.0281149);
}

double NNfunction_sLg::synapse0x2686d40() {
   return (neuron0x267e0e0()*-0.0304456);
}

double NNfunction_sLg::synapse0x2686d80() {
   return (neuron0x267e640()*0.0323714);
}

double NNfunction_sLg::synapse0x2687400() {
   return (neuron0x267e860()*-0.00485515);
}

double NNfunction_sLg::synapse0x2687440() {
   return (neuron0x267eba0()*0.0644663);
}

double NNfunction_sLg::synapse0x2687480() {
   return (neuron0x267eee0()*0.0595678);
}

double NNfunction_sLg::synapse0x26874c0() {
   return (neuron0x267f220()*-0.0186037);
}

double NNfunction_sLg::synapse0x2687500() {
   return (neuron0x267f560()*0.0397428);
}

double NNfunction_sLg::synapse0x2687540() {
   return (neuron0x267f8a0()*-0.000176123);
}

double NNfunction_sLg::synapse0x2687710() {
   return (neuron0x267ace0()*0.126518);
}

double NNfunction_sLg::synapse0x26907a0() {
   return (neuron0x267b020()*-0.150625);
}

double NNfunction_sLg::synapse0x26907e0() {
   return (neuron0x267b360()*0.0776767);
}

double NNfunction_sLg::synapse0x2690820() {
   return (neuron0x267b6a0()*-0.0555303);
}

double NNfunction_sLg::synapse0x2690860() {
   return (neuron0x267b9e0()*-0.0627169);
}

double NNfunction_sLg::synapse0x26908a0() {
   return (neuron0x267bd20()*-0.448918);
}

double NNfunction_sLg::synapse0x26908e0() {
   return (neuron0x267c060()*-0.242612);
}

double NNfunction_sLg::synapse0x2690920() {
   return (neuron0x267c3a0()*-0.00563849);
}

double NNfunction_sLg::synapse0x2690960() {
   return (neuron0x267c6e0()*0.072129);
}

double NNfunction_sLg::synapse0x26909a0() {
   return (neuron0x267ca20()*0.0817942);
}

double NNfunction_sLg::synapse0x26909e0() {
   return (neuron0x267cd60()*-0.0503888);
}

double NNfunction_sLg::synapse0x2690a20() {
   return (neuron0x267d0a0()*0.0660237);
}

double NNfunction_sLg::synapse0x2690a60() {
   return (neuron0x267d3e0()*2.19404);
}

double NNfunction_sLg::synapse0x2690aa0() {
   return (neuron0x267d720()*-0.0134101);
}

double NNfunction_sLg::synapse0x2690ae0() {
   return (neuron0x267da60()*-0.236683);
}

double NNfunction_sLg::synapse0x2690b20() {
   return (neuron0x267dda0()*-0.186606);
}

double NNfunction_sLg::synapse0x26905f0() {
   return (neuron0x267e0e0()*0.183438);
}

double NNfunction_sLg::synapse0x2690630() {
   return (neuron0x267e640()*0.00857735);
}

double NNfunction_sLg::synapse0x2690c70() {
   return (neuron0x267e860()*0.0152977);
}

double NNfunction_sLg::synapse0x2690cb0() {
   return (neuron0x267eba0()*-0.0249934);
}

double NNfunction_sLg::synapse0x2690cf0() {
   return (neuron0x267eee0()*-0.112683);
}

double NNfunction_sLg::synapse0x2690d30() {
   return (neuron0x267f220()*-0.195722);
}

double NNfunction_sLg::synapse0x2690d70() {
   return (neuron0x267f560()*0.081151);
}

double NNfunction_sLg::synapse0x2690db0() {
   return (neuron0x267f8a0()*-0.105217);
}

double NNfunction_sLg::synapse0x2691130() {
   return (neuron0x267ace0()*0.0673297);
}

double NNfunction_sLg::synapse0x2691170() {
   return (neuron0x267b020()*-0.0407426);
}

double NNfunction_sLg::synapse0x26911b0() {
   return (neuron0x267b360()*1.09248);
}

double NNfunction_sLg::synapse0x26911f0() {
   return (neuron0x267b6a0()*0.368334);
}

double NNfunction_sLg::synapse0x2691230() {
   return (neuron0x267b9e0()*0.0354051);
}

double NNfunction_sLg::synapse0x2691270() {
   return (neuron0x267bd20()*0.023813);
}

double NNfunction_sLg::synapse0x26912b0() {
   return (neuron0x267c060()*0.0343731);
}

double NNfunction_sLg::synapse0x26912f0() {
   return (neuron0x267c3a0()*-0.0425245);
}

double NNfunction_sLg::synapse0x2691330() {
   return (neuron0x267c6e0()*0.0495747);
}

double NNfunction_sLg::synapse0x2691370() {
   return (neuron0x267ca20()*0.0472801);
}

double NNfunction_sLg::synapse0x26913b0() {
   return (neuron0x267cd60()*-0.0352433);
}

double NNfunction_sLg::synapse0x26913f0() {
   return (neuron0x267d0a0()*-0.0429756);
}

double NNfunction_sLg::synapse0x2691430() {
   return (neuron0x267d3e0()*0.615372);
}

double NNfunction_sLg::synapse0x2691470() {
   return (neuron0x267d720()*-0.125125);
}

double NNfunction_sLg::synapse0x26914b0() {
   return (neuron0x267da60()*0.024356);
}

double NNfunction_sLg::synapse0x26914f0() {
   return (neuron0x267dda0()*0.00682443);
}

double NNfunction_sLg::synapse0x2690f80() {
   return (neuron0x267e0e0()*0.0502035);
}

double NNfunction_sLg::synapse0x2690fc0() {
   return (neuron0x267e640()*-0.0245481);
}

double NNfunction_sLg::synapse0x2691640() {
   return (neuron0x267e860()*-0.0331563);
}

double NNfunction_sLg::synapse0x2691680() {
   return (neuron0x267eba0()*-0.118443);
}

double NNfunction_sLg::synapse0x26916c0() {
   return (neuron0x267eee0()*-0.0224424);
}

double NNfunction_sLg::synapse0x2691700() {
   return (neuron0x267f220()*0.0247212);
}

double NNfunction_sLg::synapse0x2691740() {
   return (neuron0x267f560()*0.0171688);
}

double NNfunction_sLg::synapse0x2691780() {
   return (neuron0x267f8a0()*-0.0301464);
}

double NNfunction_sLg::synapse0x2691b00() {
   return (neuron0x267ace0()*0.0590863);
}

double NNfunction_sLg::synapse0x2691b40() {
   return (neuron0x267b020()*-0.0495793);
}

double NNfunction_sLg::synapse0x2691b80() {
   return (neuron0x267b360()*-0.561223);
}

double NNfunction_sLg::synapse0x2691bc0() {
   return (neuron0x267b6a0()*-0.40093);
}

double NNfunction_sLg::synapse0x2691c00() {
   return (neuron0x267b9e0()*0.0843103);
}

double NNfunction_sLg::synapse0x2691c40() {
   return (neuron0x267bd20()*0.12463);
}

double NNfunction_sLg::synapse0x2691c80() {
   return (neuron0x267c060()*0.104089);
}

double NNfunction_sLg::synapse0x2691cc0() {
   return (neuron0x267c3a0()*0.0663208);
}

double NNfunction_sLg::synapse0x2691d00() {
   return (neuron0x267c6e0()*-0.0586689);
}

double NNfunction_sLg::synapse0x2691d40() {
   return (neuron0x267ca20()*-0.199028);
}

double NNfunction_sLg::synapse0x2691d80() {
   return (neuron0x267cd60()*-0.531971);
}

double NNfunction_sLg::synapse0x2691dc0() {
   return (neuron0x267d0a0()*-0.0104696);
}

double NNfunction_sLg::synapse0x2691e00() {
   return (neuron0x267d3e0()*0.769418);
}

double NNfunction_sLg::synapse0x2691e40() {
   return (neuron0x267d720()*0.0284122);
}

double NNfunction_sLg::synapse0x2691e80() {
   return (neuron0x267da60()*0.00942657);
}

double NNfunction_sLg::synapse0x2691ec0() {
   return (neuron0x267dda0()*-0.0242938);
}

double NNfunction_sLg::synapse0x2691950() {
   return (neuron0x267e0e0()*-0.0870225);
}

double NNfunction_sLg::synapse0x2691990() {
   return (neuron0x267e640()*0.0774855);
}

double NNfunction_sLg::synapse0x2692010() {
   return (neuron0x267e860()*0.0217002);
}

double NNfunction_sLg::synapse0x2692050() {
   return (neuron0x267eba0()*0.117839);
}

double NNfunction_sLg::synapse0x2692090() {
   return (neuron0x267eee0()*0.0470385);
}

double NNfunction_sLg::synapse0x26920d0() {
   return (neuron0x267f220()*0.0746666);
}

double NNfunction_sLg::synapse0x2692110() {
   return (neuron0x267f560()*0.00805907);
}

double NNfunction_sLg::synapse0x2692150() {
   return (neuron0x267f8a0()*-0.0319997);
}

double NNfunction_sLg::synapse0x26924d0() {
   return (neuron0x267ace0()*0.00261012);
}

double NNfunction_sLg::synapse0x2692510() {
   return (neuron0x267b020()*-0.0013325);
}

double NNfunction_sLg::synapse0x2692550() {
   return (neuron0x267b360()*-0.0139741);
}

double NNfunction_sLg::synapse0x2692590() {
   return (neuron0x267b6a0()*-0.75759);
}

double NNfunction_sLg::synapse0x26925d0() {
   return (neuron0x267b9e0()*0.000101856);
}

double NNfunction_sLg::synapse0x2692610() {
   return (neuron0x267bd20()*0.000893019);
}

double NNfunction_sLg::synapse0x2692650() {
   return (neuron0x267c060()*0.000380896);
}

double NNfunction_sLg::synapse0x2692690() {
   return (neuron0x267c3a0()*0.00590999);
}

double NNfunction_sLg::synapse0x26926d0() {
   return (neuron0x267c6e0()*-0.00433091);
}

double NNfunction_sLg::synapse0x2692710() {
   return (neuron0x267ca20()*-0.00151464);
}

double NNfunction_sLg::synapse0x2692750() {
   return (neuron0x267cd60()*-0.00178771);
}

double NNfunction_sLg::synapse0x2692790() {
   return (neuron0x267d0a0()*-0.000676918);
}

double NNfunction_sLg::synapse0x26927d0() {
   return (neuron0x267d3e0()*0.971931);
}

double NNfunction_sLg::synapse0x2692810() {
   return (neuron0x267d720()*0.0144093);
}

double NNfunction_sLg::synapse0x2692850() {
   return (neuron0x267da60()*-0.00306203);
}

double NNfunction_sLg::synapse0x2692890() {
   return (neuron0x267dda0()*-0.00781972);
}

double NNfunction_sLg::synapse0x2692320() {
   return (neuron0x267e0e0()*0.0204072);
}

double NNfunction_sLg::synapse0x2692360() {
   return (neuron0x267e640()*0.00249334);
}

double NNfunction_sLg::synapse0x26929e0() {
   return (neuron0x267e860()*-0.00023262);
}

double NNfunction_sLg::synapse0x2692a20() {
   return (neuron0x267eba0()*0.00389266);
}

double NNfunction_sLg::synapse0x2692a60() {
   return (neuron0x267eee0()*-0.00215963);
}

double NNfunction_sLg::synapse0x2692aa0() {
   return (neuron0x267f220()*7.32824e-05);
}

double NNfunction_sLg::synapse0x2692ae0() {
   return (neuron0x267f560()*-0.00208714);
}

double NNfunction_sLg::synapse0x2692b20() {
   return (neuron0x267f8a0()*0.00102106);
}

double NNfunction_sLg::synapse0x2692ea0() {
   return (neuron0x267ace0()*-0.130647);
}

double NNfunction_sLg::synapse0x2692ee0() {
   return (neuron0x267b020()*0.154594);
}

double NNfunction_sLg::synapse0x2692f20() {
   return (neuron0x267b360()*0.0909775);
}

double NNfunction_sLg::synapse0x2692f60() {
   return (neuron0x267b6a0()*-0.333406);
}

double NNfunction_sLg::synapse0x2692fa0() {
   return (neuron0x267b9e0()*-0.00336198);
}

double NNfunction_sLg::synapse0x2692fe0() {
   return (neuron0x267bd20()*0.284475);
}

double NNfunction_sLg::synapse0x2693020() {
   return (neuron0x267c060()*-0.741615);
}

double NNfunction_sLg::synapse0x2693060() {
   return (neuron0x267c3a0()*0.304459);
}

double NNfunction_sLg::synapse0x26930a0() {
   return (neuron0x267c6e0()*0.0892309);
}

double NNfunction_sLg::synapse0x26930e0() {
   return (neuron0x267ca20()*-0.018015);
}

double NNfunction_sLg::synapse0x2693120() {
   return (neuron0x267cd60()*-0.102239);
}

double NNfunction_sLg::synapse0x2693160() {
   return (neuron0x267d0a0()*-0.252805);
}

double NNfunction_sLg::synapse0x26931a0() {
   return (neuron0x267d3e0()*1.01968);
}

double NNfunction_sLg::synapse0x26931e0() {
   return (neuron0x267d720()*0.165929);
}

double NNfunction_sLg::synapse0x2693220() {
   return (neuron0x267da60()*-0.0887339);
}

double NNfunction_sLg::synapse0x2693260() {
   return (neuron0x267dda0()*-0.0230832);
}

double NNfunction_sLg::synapse0x2692cf0() {
   return (neuron0x267e0e0()*0.131809);
}

double NNfunction_sLg::synapse0x2692d30() {
   return (neuron0x267e640()*-0.310616);
}

double NNfunction_sLg::synapse0x26933b0() {
   return (neuron0x267e860()*0.112245);
}

double NNfunction_sLg::synapse0x26933f0() {
   return (neuron0x267eba0()*-0.267034);
}

double NNfunction_sLg::synapse0x2693430() {
   return (neuron0x267eee0()*0.144577);
}

double NNfunction_sLg::synapse0x2693470() {
   return (neuron0x267f220()*0.171);
}

double NNfunction_sLg::synapse0x26934b0() {
   return (neuron0x267f560()*-0.0721646);
}

double NNfunction_sLg::synapse0x26934f0() {
   return (neuron0x267f8a0()*0.0395827);
}

double NNfunction_sLg::synapse0x2693870() {
   return (neuron0x267ace0()*-0.330835);
}

double NNfunction_sLg::synapse0x26938b0() {
   return (neuron0x267b020()*0.0246625);
}

double NNfunction_sLg::synapse0x26938f0() {
   return (neuron0x267b360()*-0.318776);
}

double NNfunction_sLg::synapse0x2693930() {
   return (neuron0x267b6a0()*-0.411555);
}

double NNfunction_sLg::synapse0x2693970() {
   return (neuron0x267b9e0()*0.0893201);
}

double NNfunction_sLg::synapse0x26939b0() {
   return (neuron0x267bd20()*0.125793);
}

double NNfunction_sLg::synapse0x26939f0() {
   return (neuron0x267c060()*-0.109715);
}

double NNfunction_sLg::synapse0x2693a30() {
   return (neuron0x267c3a0()*0.186128);
}

double NNfunction_sLg::synapse0x2693a70() {
   return (neuron0x267c6e0()*-0.437961);
}

double NNfunction_sLg::synapse0x2693ab0() {
   return (neuron0x267ca20()*0.0972591);
}

double NNfunction_sLg::synapse0x2693af0() {
   return (neuron0x267cd60()*0.0593232);
}

double NNfunction_sLg::synapse0x2693b30() {
   return (neuron0x267d0a0()*-0.125242);
}

double NNfunction_sLg::synapse0x2693b70() {
   return (neuron0x267d3e0()*-0.719773);
}

double NNfunction_sLg::synapse0x2693bb0() {
   return (neuron0x267d720()*-0.0471733);
}

double NNfunction_sLg::synapse0x2693bf0() {
   return (neuron0x267da60()*0.0532006);
}

double NNfunction_sLg::synapse0x2693c30() {
   return (neuron0x267dda0()*0.0769039);
}

double NNfunction_sLg::synapse0x26936c0() {
   return (neuron0x267e0e0()*-0.16021);
}

double NNfunction_sLg::synapse0x2693700() {
   return (neuron0x267e640()*-0.0638347);
}

double NNfunction_sLg::synapse0x2693d80() {
   return (neuron0x267e860()*-0.133266);
}

double NNfunction_sLg::synapse0x2693dc0() {
   return (neuron0x267eba0()*-0.158823);
}

double NNfunction_sLg::synapse0x2693e00() {
   return (neuron0x267eee0()*-0.144574);
}

double NNfunction_sLg::synapse0x2693e40() {
   return (neuron0x267f220()*-0.13362);
}

double NNfunction_sLg::synapse0x2693e80() {
   return (neuron0x267f560()*-0.117096);
}

double NNfunction_sLg::synapse0x2693ec0() {
   return (neuron0x267f8a0()*0.112694);
}

double NNfunction_sLg::synapse0x2694240() {
   return (neuron0x267ace0()*-0.0933174);
}

double NNfunction_sLg::synapse0x2694280() {
   return (neuron0x267b020()*-0.104815);
}

double NNfunction_sLg::synapse0x26942c0() {
   return (neuron0x267b360()*-0.337333);
}

double NNfunction_sLg::synapse0x2694300() {
   return (neuron0x267b6a0()*0.245354);
}

double NNfunction_sLg::synapse0x2694340() {
   return (neuron0x267b9e0()*0.38089);
}

double NNfunction_sLg::synapse0x2694380() {
   return (neuron0x267bd20()*0.0656096);
}

double NNfunction_sLg::synapse0x26943c0() {
   return (neuron0x267c060()*-0.205653);
}

double NNfunction_sLg::synapse0x2694400() {
   return (neuron0x267c3a0()*0.214584);
}

double NNfunction_sLg::synapse0x2694440() {
   return (neuron0x267c6e0()*0.172628);
}

double NNfunction_sLg::synapse0x2694480() {
   return (neuron0x267ca20()*-0.00985208);
}

double NNfunction_sLg::synapse0x26944c0() {
   return (neuron0x267cd60()*0.0917734);
}

double NNfunction_sLg::synapse0x2694500() {
   return (neuron0x267d0a0()*0.0421011);
}

double NNfunction_sLg::synapse0x2694540() {
   return (neuron0x267d3e0()*0.436728);
}

double NNfunction_sLg::synapse0x2694580() {
   return (neuron0x267d720()*-0.359374);
}

double NNfunction_sLg::synapse0x26945c0() {
   return (neuron0x267da60()*-0.17847);
}

double NNfunction_sLg::synapse0x2694600() {
   return (neuron0x267dda0()*0.0550927);
}

double NNfunction_sLg::synapse0x2694090() {
   return (neuron0x267e0e0()*-0.263603);
}

double NNfunction_sLg::synapse0x26940d0() {
   return (neuron0x267e640()*0.26791);
}

double NNfunction_sLg::synapse0x2694750() {
   return (neuron0x267e860()*0.0622992);
}

double NNfunction_sLg::synapse0x2694790() {
   return (neuron0x267eba0()*0.195912);
}

double NNfunction_sLg::synapse0x26947d0() {
   return (neuron0x267eee0()*-0.0931515);
}

double NNfunction_sLg::synapse0x2694810() {
   return (neuron0x267f220()*-0.363548);
}

double NNfunction_sLg::synapse0x2694850() {
   return (neuron0x267f560()*0.242803);
}

double NNfunction_sLg::synapse0x2694890() {
   return (neuron0x267f8a0()*0.0305323);
}

double NNfunction_sLg::synapse0x2694c10() {
   return (neuron0x267ace0()*0.00117321);
}

double NNfunction_sLg::synapse0x2694c50() {
   return (neuron0x267b020()*0.000576659);
}

double NNfunction_sLg::synapse0x2694c90() {
   return (neuron0x267b360()*0.00943655);
}

double NNfunction_sLg::synapse0x2694cd0() {
   return (neuron0x267b6a0()*-2.00646);
}

double NNfunction_sLg::synapse0x2694d10() {
   return (neuron0x267b9e0()*0.000681109);
}

double NNfunction_sLg::synapse0x2694d50() {
   return (neuron0x267bd20()*0.00107011);
}

double NNfunction_sLg::synapse0x2694d90() {
   return (neuron0x267c060()*-0.00173429);
}

double NNfunction_sLg::synapse0x2694dd0() {
   return (neuron0x267c3a0()*-8.3876e-05);
}

double NNfunction_sLg::synapse0x2694e10() {
   return (neuron0x267c6e0()*-0.00116262);
}

double NNfunction_sLg::synapse0x2694e50() {
   return (neuron0x267ca20()*2.4436e-05);
}

double NNfunction_sLg::synapse0x2694e90() {
   return (neuron0x267cd60()*0.00482716);
}

double NNfunction_sLg::synapse0x2694ed0() {
   return (neuron0x267d0a0()*-0.021088);
}

double NNfunction_sLg::synapse0x2694f10() {
   return (neuron0x267d3e0()*0.398768);
}

double NNfunction_sLg::synapse0x2694f50() {
   return (neuron0x267d720()*-0.00301454);
}

double NNfunction_sLg::synapse0x2694f90() {
   return (neuron0x267da60()*-0.0131489);
}

double NNfunction_sLg::synapse0x2694fd0() {
   return (neuron0x267dda0()*-0.0199093);
}

double NNfunction_sLg::synapse0x2694a60() {
   return (neuron0x267e0e0()*-0.00279343);
}

double NNfunction_sLg::synapse0x2694aa0() {
   return (neuron0x267e640()*-0.022481);
}

double NNfunction_sLg::synapse0x2695120() {
   return (neuron0x267e860()*-0.0194587);
}

double NNfunction_sLg::synapse0x2695160() {
   return (neuron0x267eba0()*-0.00337973);
}

double NNfunction_sLg::synapse0x26951a0() {
   return (neuron0x267eee0()*-0.00213144);
}

double NNfunction_sLg::synapse0x26951e0() {
   return (neuron0x267f220()*-0.00190197);
}

double NNfunction_sLg::synapse0x2695220() {
   return (neuron0x267f560()*0.000977322);
}

double NNfunction_sLg::synapse0x2695260() {
   return (neuron0x267f8a0()*0.000793934);
}

double NNfunction_sLg::synapse0x26955e0() {
   return (neuron0x267ace0()*0.0282815);
}

double NNfunction_sLg::synapse0x2689bb0() {
   return (neuron0x267b020()*0.221586);
}

double NNfunction_sLg::synapse0x2689bf0() {
   return (neuron0x267b360()*-0.129592);
}

double NNfunction_sLg::synapse0x2689c30() {
   return (neuron0x267b6a0()*-0.198031);
}

double NNfunction_sLg::synapse0x2689e80() {
   return (neuron0x267b9e0()*-0.000795697);
}

double NNfunction_sLg::synapse0x2689ec0() {
   return (neuron0x267bd20()*-0.194257);
}

double NNfunction_sLg::synapse0x2689f00() {
   return (neuron0x267c060()*0.0246471);
}

double NNfunction_sLg::synapse0x268a150() {
   return (neuron0x267c3a0()*0.164671);
}

double NNfunction_sLg::synapse0x268a190() {
   return (neuron0x267c6e0()*-0.0937352);
}

double NNfunction_sLg::synapse0x268a3e0() {
   return (neuron0x267ca20()*-0.117936);
}

double NNfunction_sLg::synapse0x268a420() {
   return (neuron0x267cd60()*-0.242077);
}

double NNfunction_sLg::synapse0x268a460() {
   return (neuron0x267d0a0()*0.253552);
}

double NNfunction_sLg::synapse0x268a6b0() {
   return (neuron0x267d3e0()*-0.743326);
}

double NNfunction_sLg::synapse0x268a6f0() {
   return (neuron0x267d720()*0.315871);
}

double NNfunction_sLg::synapse0x268a940() {
   return (neuron0x267da60()*0.329253);
}

double NNfunction_sLg::synapse0x268a980() {
   return (neuron0x267dda0()*0.306028);
}

double NNfunction_sLg::synapse0x2695430() {
   return (neuron0x267e0e0()*0.52677);
}

double NNfunction_sLg::synapse0x2695470() {
   return (neuron0x267e640()*0.0425129);
}

double NNfunction_sLg::synapse0x268aad0() {
   return (neuron0x267e860()*-0.152109);
}

double NNfunction_sLg::synapse0x268afe0() {
   return (neuron0x267eba0()*0.245284);
}

double NNfunction_sLg::synapse0x268b020() {
   return (neuron0x267eee0()*-0.150639);
}

double NNfunction_sLg::synapse0x268b060() {
   return (neuron0x267f220()*0.0148255);
}

double NNfunction_sLg::synapse0x268b2b0() {
   return (neuron0x267f560()*0.119951);
}

double NNfunction_sLg::synapse0x268b2f0() {
   return (neuron0x267f8a0()*0.226084);
}

double NNfunction_sLg::synapse0x268aba0() {
   return (neuron0x267ace0()*-0.185854);
}

double NNfunction_sLg::synapse0x268abe0() {
   return (neuron0x267b020()*-0.237703);
}

double NNfunction_sLg::synapse0x268ac20() {
   return (neuron0x267b360()*-0.235359);
}

double NNfunction_sLg::synapse0x268ac60() {
   return (neuron0x267b6a0()*0.37277);
}

double NNfunction_sLg::synapse0x268b5e0() {
   return (neuron0x267b9e0()*-0.0539783);
}

double NNfunction_sLg::synapse0x2697930() {
   return (neuron0x267bd20()*-0.105072);
}

double NNfunction_sLg::synapse0x2697970() {
   return (neuron0x267c060()*0.262805);
}

double NNfunction_sLg::synapse0x26979b0() {
   return (neuron0x267c3a0()*-0.0346565);
}

double NNfunction_sLg::synapse0x26979f0() {
   return (neuron0x267c6e0()*-0.022976);
}

double NNfunction_sLg::synapse0x2697a30() {
   return (neuron0x267ca20()*-0.0404378);
}

double NNfunction_sLg::synapse0x2697a70() {
   return (neuron0x267cd60()*0.0566889);
}

double NNfunction_sLg::synapse0x2697ab0() {
   return (neuron0x267d0a0()*-0.364735);
}

double NNfunction_sLg::synapse0x2697af0() {
   return (neuron0x267d3e0()*-0.862246);
}

double NNfunction_sLg::synapse0x2697b30() {
   return (neuron0x267d720()*-0.417654);
}

double NNfunction_sLg::synapse0x2697b70() {
   return (neuron0x267da60()*0.22556);
}

double NNfunction_sLg::synapse0x2697bb0() {
   return (neuron0x267dda0()*0.570771);
}

double NNfunction_sLg::synapse0x268b4c0() {
   return (neuron0x267e0e0()*1.16857);
}

double NNfunction_sLg::synapse0x268b500() {
   return (neuron0x267e640()*-0.284792);
}

double NNfunction_sLg::synapse0x2697d00() {
   return (neuron0x267e860()*0.18456);
}

double NNfunction_sLg::synapse0x2697d40() {
   return (neuron0x267eba0()*-0.215291);
}

double NNfunction_sLg::synapse0x2697d80() {
   return (neuron0x267eee0()*0.235806);
}

double NNfunction_sLg::synapse0x2697dc0() {
   return (neuron0x267f220()*-0.0417199);
}

double NNfunction_sLg::synapse0x2697e00() {
   return (neuron0x267f560()*-0.00670049);
}

double NNfunction_sLg::synapse0x2697e40() {
   return (neuron0x267f8a0()*-0.00416687);
}

double NNfunction_sLg::synapse0x26981c0() {
   return (neuron0x267ace0()*0.0309969);
}

double NNfunction_sLg::synapse0x2698200() {
   return (neuron0x267b020()*-0.0057115);
}

double NNfunction_sLg::synapse0x2698240() {
   return (neuron0x267b360()*-0.100688);
}

double NNfunction_sLg::synapse0x2698280() {
   return (neuron0x267b6a0()*0.0229475);
}

double NNfunction_sLg::synapse0x26982c0() {
   return (neuron0x267b9e0()*-0.0297581);
}

double NNfunction_sLg::synapse0x2698300() {
   return (neuron0x267bd20()*-0.0716512);
}

double NNfunction_sLg::synapse0x2698340() {
   return (neuron0x267c060()*0.0223587);
}

double NNfunction_sLg::synapse0x2698380() {
   return (neuron0x267c3a0()*-0.0382818);
}

double NNfunction_sLg::synapse0x26983c0() {
   return (neuron0x267c6e0()*0.00895587);
}

double NNfunction_sLg::synapse0x2698400() {
   return (neuron0x267ca20()*-0.134084);
}

double NNfunction_sLg::synapse0x2698440() {
   return (neuron0x267cd60()*0.0979525);
}

double NNfunction_sLg::synapse0x2698480() {
   return (neuron0x267d0a0()*-0.0871191);
}

double NNfunction_sLg::synapse0x26984c0() {
   return (neuron0x267d3e0()*2.39981);
}

double NNfunction_sLg::synapse0x2698500() {
   return (neuron0x267d720()*0.0308733);
}

double NNfunction_sLg::synapse0x2698540() {
   return (neuron0x267da60()*-0.0377836);
}

double NNfunction_sLg::synapse0x2698580() {
   return (neuron0x267dda0()*-0.0253128);
}

double NNfunction_sLg::synapse0x2698010() {
   return (neuron0x267e0e0()*0.0698749);
}

double NNfunction_sLg::synapse0x2698050() {
   return (neuron0x267e640()*-0.0774234);
}

double NNfunction_sLg::synapse0x26986d0() {
   return (neuron0x267e860()*0.00485925);
}

double NNfunction_sLg::synapse0x2698710() {
   return (neuron0x267eba0()*-0.00838925);
}

double NNfunction_sLg::synapse0x2698750() {
   return (neuron0x267eee0()*0.0618841);
}

double NNfunction_sLg::synapse0x2698790() {
   return (neuron0x267f220()*0.0235396);
}

double NNfunction_sLg::synapse0x26987d0() {
   return (neuron0x267f560()*-0.0132536);
}

double NNfunction_sLg::synapse0x2698810() {
   return (neuron0x267f8a0()*-0.0343733);
}

double NNfunction_sLg::synapse0x2698b90() {
   return (neuron0x267ace0()*-0.623435);
}

double NNfunction_sLg::synapse0x2698bd0() {
   return (neuron0x267b020()*0.151216);
}

double NNfunction_sLg::synapse0x2698c10() {
   return (neuron0x267b360()*0.258096);
}

double NNfunction_sLg::synapse0x2698c50() {
   return (neuron0x267b6a0()*-0.140808);
}

double NNfunction_sLg::synapse0x2698c90() {
   return (neuron0x267b9e0()*0.565462);
}

double NNfunction_sLg::synapse0x2698cd0() {
   return (neuron0x267bd20()*-0.250892);
}

double NNfunction_sLg::synapse0x2698d10() {
   return (neuron0x267c060()*0.0585743);
}

double NNfunction_sLg::synapse0x2698d50() {
   return (neuron0x267c3a0()*-0.1656);
}

double NNfunction_sLg::synapse0x2698d90() {
   return (neuron0x267c6e0()*0.122431);
}

double NNfunction_sLg::synapse0x2698dd0() {
   return (neuron0x267ca20()*-0.0391037);
}

double NNfunction_sLg::synapse0x2698e10() {
   return (neuron0x267cd60()*0.0111351);
}

double NNfunction_sLg::synapse0x2698e50() {
   return (neuron0x267d0a0()*-0.000882765);
}

double NNfunction_sLg::synapse0x2698e90() {
   return (neuron0x267d3e0()*-0.67451);
}

double NNfunction_sLg::synapse0x2698ed0() {
   return (neuron0x267d720()*-0.0589318);
}

double NNfunction_sLg::synapse0x2698f10() {
   return (neuron0x267da60()*0.364331);
}

double NNfunction_sLg::synapse0x2698f50() {
   return (neuron0x267dda0()*-0.40076);
}

double NNfunction_sLg::synapse0x26989e0() {
   return (neuron0x267e0e0()*-0.0340569);
}

double NNfunction_sLg::synapse0x2698a20() {
   return (neuron0x267e640()*-0.110276);
}

double NNfunction_sLg::synapse0x26990a0() {
   return (neuron0x267e860()*0.140924);
}

double NNfunction_sLg::synapse0x26990e0() {
   return (neuron0x267eba0()*0.402001);
}

double NNfunction_sLg::synapse0x2699120() {
   return (neuron0x267eee0()*-0.0488168);
}

double NNfunction_sLg::synapse0x2699160() {
   return (neuron0x267f220()*0.0591955);
}

double NNfunction_sLg::synapse0x26991a0() {
   return (neuron0x267f560()*0.333145);
}

double NNfunction_sLg::synapse0x26991e0() {
   return (neuron0x267f8a0()*0.138158);
}

double NNfunction_sLg::synapse0x2699560() {
   return (neuron0x267ace0()*0.0859161);
}

double NNfunction_sLg::synapse0x26995a0() {
   return (neuron0x267b020()*-0.0421207);
}

double NNfunction_sLg::synapse0x26995e0() {
   return (neuron0x267b360()*-0.75193);
}

double NNfunction_sLg::synapse0x2699620() {
   return (neuron0x267b6a0()*0.18903);
}

double NNfunction_sLg::synapse0x2699660() {
   return (neuron0x267b9e0()*0.131697);
}

double NNfunction_sLg::synapse0x26996a0() {
   return (neuron0x267bd20()*-0.063121);
}

double NNfunction_sLg::synapse0x26996e0() {
   return (neuron0x267c060()*0.349315);
}

double NNfunction_sLg::synapse0x2699720() {
   return (neuron0x267c3a0()*0.174802);
}

double NNfunction_sLg::synapse0x2699760() {
   return (neuron0x267c6e0()*-0.044557);
}

double NNfunction_sLg::synapse0x26997a0() {
   return (neuron0x267ca20()*0.00998627);
}

double NNfunction_sLg::synapse0x26997e0() {
   return (neuron0x267cd60()*0.102073);
}

double NNfunction_sLg::synapse0x2699820() {
   return (neuron0x267d0a0()*0.208783);
}

double NNfunction_sLg::synapse0x2699860() {
   return (neuron0x267d3e0()*-0.818881);
}

double NNfunction_sLg::synapse0x26998a0() {
   return (neuron0x267d720()*-0.161283);
}

double NNfunction_sLg::synapse0x26998e0() {
   return (neuron0x267da60()*-0.172885);
}

double NNfunction_sLg::synapse0x2699920() {
   return (neuron0x267dda0()*-0.0571764);
}

double NNfunction_sLg::synapse0x26993b0() {
   return (neuron0x267e0e0()*0.016961);
}

double NNfunction_sLg::synapse0x26993f0() {
   return (neuron0x267e640()*-0.144478);
}

double NNfunction_sLg::synapse0x2699a70() {
   return (neuron0x267e860()*0.0519544);
}

double NNfunction_sLg::synapse0x2699ab0() {
   return (neuron0x267eba0()*-0.10898);
}

double NNfunction_sLg::synapse0x2699af0() {
   return (neuron0x267eee0()*-0.00868827);
}

double NNfunction_sLg::synapse0x2699b30() {
   return (neuron0x267f220()*0.242705);
}

double NNfunction_sLg::synapse0x2699b70() {
   return (neuron0x267f560()*-0.158704);
}

double NNfunction_sLg::synapse0x2699bb0() {
   return (neuron0x267f8a0()*-0.0477614);
}

double NNfunction_sLg::synapse0x2699f30() {
   return (neuron0x267ace0()*0.0104516);
}

double NNfunction_sLg::synapse0x2699f70() {
   return (neuron0x267b020()*-0.00398963);
}

double NNfunction_sLg::synapse0x2699fb0() {
   return (neuron0x267b360()*-0.0745888);
}

double NNfunction_sLg::synapse0x2699ff0() {
   return (neuron0x267b6a0()*-0.0653211);
}

double NNfunction_sLg::synapse0x269a030() {
   return (neuron0x267b9e0()*-0.0200415);
}

double NNfunction_sLg::synapse0x269a070() {
   return (neuron0x267bd20()*-0.0274016);
}

double NNfunction_sLg::synapse0x269a0b0() {
   return (neuron0x267c060()*0.00452615);
}

double NNfunction_sLg::synapse0x269a0f0() {
   return (neuron0x267c3a0()*-0.00936773);
}

double NNfunction_sLg::synapse0x269a130() {
   return (neuron0x267c6e0()*0.00108837);
}

double NNfunction_sLg::synapse0x269a170() {
   return (neuron0x267ca20()*-0.0383285);
}

double NNfunction_sLg::synapse0x269a1b0() {
   return (neuron0x267cd60()*0.0280862);
}

double NNfunction_sLg::synapse0x269a1f0() {
   return (neuron0x267d0a0()*-0.00390513);
}

double NNfunction_sLg::synapse0x269a230() {
   return (neuron0x267d3e0()*3.14498);
}

double NNfunction_sLg::synapse0x269a270() {
   return (neuron0x267d720()*0.0291054);
}

double NNfunction_sLg::synapse0x269a2b0() {
   return (neuron0x267da60()*-0.0123412);
}

double NNfunction_sLg::synapse0x269a2f0() {
   return (neuron0x267dda0()*-0.00109513);
}

double NNfunction_sLg::synapse0x2699d80() {
   return (neuron0x267e0e0()*0.028558);
}

double NNfunction_sLg::synapse0x2699dc0() {
   return (neuron0x267e640()*-0.00373266);
}

double NNfunction_sLg::synapse0x269a440() {
   return (neuron0x267e860()*0.0127385);
}

double NNfunction_sLg::synapse0x269a480() {
   return (neuron0x267eba0()*0.0131832);
}

double NNfunction_sLg::synapse0x269a4c0() {
   return (neuron0x267eee0()*0.0197372);
}

double NNfunction_sLg::synapse0x269a500() {
   return (neuron0x267f220()*0.00325957);
}

double NNfunction_sLg::synapse0x269a540() {
   return (neuron0x267f560()*-0.00834303);
}

double NNfunction_sLg::synapse0x269a580() {
   return (neuron0x267f8a0()*-0.0107292);
}

double NNfunction_sLg::synapse0x269a900() {
   return (neuron0x267ace0()*-0.000307354);
}

double NNfunction_sLg::synapse0x269a940() {
   return (neuron0x267b020()*0.00195543);
}

double NNfunction_sLg::synapse0x269a980() {
   return (neuron0x267b360()*0.00104084);
}

double NNfunction_sLg::synapse0x269a9c0() {
   return (neuron0x267b6a0()*-5.90996);
}

double NNfunction_sLg::synapse0x269aa00() {
   return (neuron0x267b9e0()*-0.00478099);
}

double NNfunction_sLg::synapse0x269aa40() {
   return (neuron0x267bd20()*0.002883);
}

double NNfunction_sLg::synapse0x269aa80() {
   return (neuron0x267c060()*0.00441106);
}

double NNfunction_sLg::synapse0x269aac0() {
   return (neuron0x267c3a0()*-0.00358892);
}

double NNfunction_sLg::synapse0x269ab00() {
   return (neuron0x267c6e0()*1.50764e-05);
}

double NNfunction_sLg::synapse0x269ab40() {
   return (neuron0x267ca20()*-0.00254865);
}

double NNfunction_sLg::synapse0x269ab80() {
   return (neuron0x267cd60()*-0.00151224);
}

double NNfunction_sLg::synapse0x269abc0() {
   return (neuron0x267d0a0()*-0.0230244);
}

double NNfunction_sLg::synapse0x269ac00() {
   return (neuron0x267d3e0()*-0.201134);
}

double NNfunction_sLg::synapse0x269ac40() {
   return (neuron0x267d720()*0.00852861);
}

double NNfunction_sLg::synapse0x269ac80() {
   return (neuron0x267da60()*-0.0116915);
}

double NNfunction_sLg::synapse0x269acc0() {
   return (neuron0x267dda0()*-0.00979931);
}

double NNfunction_sLg::synapse0x269a750() {
   return (neuron0x267e0e0()*0.00221397);
}

double NNfunction_sLg::synapse0x269a790() {
   return (neuron0x267e640()*-0.0176531);
}

double NNfunction_sLg::synapse0x269ae10() {
   return (neuron0x267e860()*-0.0143711);
}

double NNfunction_sLg::synapse0x269ae50() {
   return (neuron0x267eba0()*0.00617716);
}

double NNfunction_sLg::synapse0x269ae90() {
   return (neuron0x267eee0()*0.0047894);
}

double NNfunction_sLg::synapse0x269aed0() {
   return (neuron0x267f220()*-0.00214626);
}

double NNfunction_sLg::synapse0x269af10() {
   return (neuron0x267f560()*-0.000321561);
}

double NNfunction_sLg::synapse0x269af50() {
   return (neuron0x267f8a0()*-0.000903546);
}

double NNfunction_sLg::synapse0x269b2d0() {
   return (neuron0x267ace0()*0.0272569);
}

double NNfunction_sLg::synapse0x269b310() {
   return (neuron0x267b020()*0.00286827);
}

double NNfunction_sLg::synapse0x269b350() {
   return (neuron0x267b360()*0.0326364);
}

double NNfunction_sLg::synapse0x269b390() {
   return (neuron0x267b6a0()*0.16279);
}

double NNfunction_sLg::synapse0x269b3d0() {
   return (neuron0x267b9e0()*0.0330689);
}

double NNfunction_sLg::synapse0x269b410() {
   return (neuron0x267bd20()*0.0463446);
}

double NNfunction_sLg::synapse0x269b450() {
   return (neuron0x267c060()*0.0306715);
}

double NNfunction_sLg::synapse0x269b490() {
   return (neuron0x267c3a0()*0.0416943);
}

double NNfunction_sLg::synapse0x269b4d0() {
   return (neuron0x267c6e0()*-0.0215666);
}

double NNfunction_sLg::synapse0x269b510() {
   return (neuron0x267ca20()*-0.026204);
}

double NNfunction_sLg::synapse0x269b550() {
   return (neuron0x267cd60()*-0.035214);
}

double NNfunction_sLg::synapse0x269b590() {
   return (neuron0x267d0a0()*-0.827238);
}

double NNfunction_sLg::synapse0x269b5d0() {
   return (neuron0x267d3e0()*-0.509087);
}

double NNfunction_sLg::synapse0x269b610() {
   return (neuron0x267d720()*-0.0570882);
}

double NNfunction_sLg::synapse0x269b650() {
   return (neuron0x267da60()*-0.402039);
}

double NNfunction_sLg::synapse0x269b690() {
   return (neuron0x267dda0()*-0.367618);
}

double NNfunction_sLg::synapse0x269b120() {
   return (neuron0x267e0e0()*-0.0498562);
}

double NNfunction_sLg::synapse0x269b160() {
   return (neuron0x267e640()*-0.436437);
}

double NNfunction_sLg::synapse0x269b7e0() {
   return (neuron0x267e860()*-0.464752);
}

double NNfunction_sLg::synapse0x269b820() {
   return (neuron0x267eba0()*-0.0519373);
}

double NNfunction_sLg::synapse0x269b860() {
   return (neuron0x267eee0()*0.000842659);
}

double NNfunction_sLg::synapse0x269b8a0() {
   return (neuron0x267f220()*0.00232164);
}

double NNfunction_sLg::synapse0x269b8e0() {
   return (neuron0x267f560()*-0.00457988);
}

double NNfunction_sLg::synapse0x269b920() {
   return (neuron0x267f8a0()*0.0151613);
}

double NNfunction_sLg::synapse0x269bca0() {
   return (neuron0x267ace0()*-2.35701e-05);
}

double NNfunction_sLg::synapse0x269bce0() {
   return (neuron0x267b020()*-0.00442162);
}

double NNfunction_sLg::synapse0x269bd20() {
   return (neuron0x267b360()*-0.00207193);
}

double NNfunction_sLg::synapse0x269bd60() {
   return (neuron0x267b6a0()*-6.01973);
}

double NNfunction_sLg::synapse0x269bda0() {
   return (neuron0x267b9e0()*0.00254563);
}

double NNfunction_sLg::synapse0x269bde0() {
   return (neuron0x267bd20()*-0.00126209);
}

double NNfunction_sLg::synapse0x269be20() {
   return (neuron0x267c060()*-0.00263262);
}

double NNfunction_sLg::synapse0x269be60() {
   return (neuron0x267c3a0()*0.00370525);
}

double NNfunction_sLg::synapse0x269bea0() {
   return (neuron0x267c6e0()*0.000307788);
}

double NNfunction_sLg::synapse0x269bee0() {
   return (neuron0x267ca20()*0.00278607);
}

double NNfunction_sLg::synapse0x269bf20() {
   return (neuron0x267cd60()*-0.000802035);
}

double NNfunction_sLg::synapse0x269bf60() {
   return (neuron0x267d0a0()*0.0216533);
}

double NNfunction_sLg::synapse0x269bfa0() {
   return (neuron0x267d3e0()*0.14358);
}

double NNfunction_sLg::synapse0x269bfe0() {
   return (neuron0x267d720()*-0.0071109);
}

double NNfunction_sLg::synapse0x269c020() {
   return (neuron0x267da60()*0.00587566);
}

double NNfunction_sLg::synapse0x269c060() {
   return (neuron0x267dda0()*0.00684566);
}

double NNfunction_sLg::synapse0x269baf0() {
   return (neuron0x267e0e0()*-0.00650554);
}

double NNfunction_sLg::synapse0x269bb30() {
   return (neuron0x267e640()*0.0111022);
}

double NNfunction_sLg::synapse0x269c1b0() {
   return (neuron0x267e860()*0.0128694);
}

double NNfunction_sLg::synapse0x269c1f0() {
   return (neuron0x267eba0()*-0.00324479);
}

double NNfunction_sLg::synapse0x269c230() {
   return (neuron0x267eee0()*0.00115193);
}

double NNfunction_sLg::synapse0x269c270() {
   return (neuron0x267f220()*-0.00227453);
}

double NNfunction_sLg::synapse0x269c2b0() {
   return (neuron0x267f560()*0.000468365);
}

double NNfunction_sLg::synapse0x269c2f0() {
   return (neuron0x267f8a0()*-0.00295032);
}

double NNfunction_sLg::synapse0x2684da0() {
   return (neuron0x267ace0()*-0.00329924);
}

double NNfunction_sLg::synapse0x2684de0() {
   return (neuron0x267b020()*-0.00111706);
}

double NNfunction_sLg::synapse0x2684e20() {
   return (neuron0x267b360()*-0.014137);
}

double NNfunction_sLg::synapse0x2684e60() {
   return (neuron0x267b6a0()*3.50722);
}

double NNfunction_sLg::synapse0x2684ea0() {
   return (neuron0x267b9e0()*-0.0011383);
}

double NNfunction_sLg::synapse0x2684ee0() {
   return (neuron0x267bd20()*-0.000949371);
}

double NNfunction_sLg::synapse0x2684f20() {
   return (neuron0x267c060()*0.00104401);
}

double NNfunction_sLg::synapse0x2684f60() {
   return (neuron0x267c3a0()*0.000339848);
}

double NNfunction_sLg::synapse0x269ca80() {
   return (neuron0x267c6e0()*0.00145491);
}

double NNfunction_sLg::synapse0x269cac0() {
   return (neuron0x267ca20()*-0.00174927);
}

double NNfunction_sLg::synapse0x269cb00() {
   return (neuron0x267cd60()*-0.00387826);
}

double NNfunction_sLg::synapse0x269cb40() {
   return (neuron0x267d0a0()*0.0179793);
}

double NNfunction_sLg::synapse0x269cb80() {
   return (neuron0x267d3e0()*0.240046);
}

double NNfunction_sLg::synapse0x269cbc0() {
   return (neuron0x267d720()*0.0037699);
}

double NNfunction_sLg::synapse0x269cc00() {
   return (neuron0x267da60()*0.0104603);
}

double NNfunction_sLg::synapse0x269cc40() {
   return (neuron0x267dda0()*0.0145692);
}

double NNfunction_sLg::synapse0x269c4c0() {
   return (neuron0x267e0e0()*-0.00680681);
}

double NNfunction_sLg::synapse0x269c500() {
   return (neuron0x267e640()*0.0107958);
}

double NNfunction_sLg::synapse0x269cd90() {
   return (neuron0x267e860()*0.00886588);
}

double NNfunction_sLg::synapse0x269cdd0() {
   return (neuron0x267eba0()*0.00423783);
}

double NNfunction_sLg::synapse0x269ce10() {
   return (neuron0x267eee0()*-0.00321997);
}

double NNfunction_sLg::synapse0x269ce50() {
   return (neuron0x267f220()*-0.000314159);
}

double NNfunction_sLg::synapse0x269ce90() {
   return (neuron0x267f560()*0.00066637);
}

double NNfunction_sLg::synapse0x269ced0() {
   return (neuron0x267f8a0()*9.17864e-05);
}

double NNfunction_sLg::synapse0x269d250() {
   return (neuron0x267ace0()*-0.109253);
}

double NNfunction_sLg::synapse0x269d290() {
   return (neuron0x267b020()*0.1212);
}

double NNfunction_sLg::synapse0x269d2d0() {
   return (neuron0x267b360()*-0.467224);
}

double NNfunction_sLg::synapse0x269d310() {
   return (neuron0x267b6a0()*-0.127787);
}

double NNfunction_sLg::synapse0x269d350() {
   return (neuron0x267b9e0()*-0.0689953);
}

double NNfunction_sLg::synapse0x269d390() {
   return (neuron0x267bd20()*-0.00148661);
}

double NNfunction_sLg::synapse0x269d3d0() {
   return (neuron0x267c060()*0.147998);
}

double NNfunction_sLg::synapse0x269d410() {
   return (neuron0x267c3a0()*-0.124819);
}

double NNfunction_sLg::synapse0x269d450() {
   return (neuron0x267c6e0()*0.176176);
}

double NNfunction_sLg::synapse0x269d490() {
   return (neuron0x267ca20()*0.0478389);
}

double NNfunction_sLg::synapse0x269d4d0() {
   return (neuron0x267cd60()*-0.017189);
}

double NNfunction_sLg::synapse0x269d510() {
   return (neuron0x267d0a0()*0.0789117);
}

double NNfunction_sLg::synapse0x269d550() {
   return (neuron0x267d3e0()*-0.618516);
}

double NNfunction_sLg::synapse0x269d590() {
   return (neuron0x267d720()*0.0362382);
}

double NNfunction_sLg::synapse0x269d5d0() {
   return (neuron0x267da60()*0.173204);
}

double NNfunction_sLg::synapse0x269d610() {
   return (neuron0x267dda0()*-0.119097);
}

double NNfunction_sLg::synapse0x269d0a0() {
   return (neuron0x267e0e0()*0.0909625);
}

double NNfunction_sLg::synapse0x269d0e0() {
   return (neuron0x267e640()*0.0100945);
}

double NNfunction_sLg::synapse0x269d760() {
   return (neuron0x267e860()*0.457011);
}

double NNfunction_sLg::synapse0x269d7a0() {
   return (neuron0x267eba0()*-0.308747);
}

double NNfunction_sLg::synapse0x269d7e0() {
   return (neuron0x267eee0()*-0.0799106);
}

double NNfunction_sLg::synapse0x269d820() {
   return (neuron0x267f220()*0.0759826);
}

double NNfunction_sLg::synapse0x269d860() {
   return (neuron0x267f560()*0.109845);
}

double NNfunction_sLg::synapse0x269d8a0() {
   return (neuron0x267f8a0()*-0.0933008);
}

double NNfunction_sLg::synapse0x269dc20() {
   return (neuron0x267ace0()*0.189859);
}

double NNfunction_sLg::synapse0x269dc60() {
   return (neuron0x267b020()*-0.405098);
}

double NNfunction_sLg::synapse0x269dca0() {
   return (neuron0x267b360()*-0.211252);
}

double NNfunction_sLg::synapse0x269dce0() {
   return (neuron0x267b6a0()*0.174254);
}

double NNfunction_sLg::synapse0x269dd20() {
   return (neuron0x267b9e0()*0.338183);
}

double NNfunction_sLg::synapse0x269dd60() {
   return (neuron0x267bd20()*0.10998);
}

double NNfunction_sLg::synapse0x269dda0() {
   return (neuron0x267c060()*0.360534);
}

double NNfunction_sLg::synapse0x269dde0() {
   return (neuron0x267c3a0()*0.308784);
}

double NNfunction_sLg::synapse0x269de20() {
   return (neuron0x267c6e0()*-0.0793028);
}

double NNfunction_sLg::synapse0x269de60() {
   return (neuron0x267ca20()*0.23907);
}

double NNfunction_sLg::synapse0x269dea0() {
   return (neuron0x267cd60()*-0.168263);
}

double NNfunction_sLg::synapse0x269dee0() {
   return (neuron0x267d0a0()*-0.402439);
}

double NNfunction_sLg::synapse0x269df20() {
   return (neuron0x267d3e0()*0.804343);
}

double NNfunction_sLg::synapse0x269df60() {
   return (neuron0x267d720()*0.15908);
}

double NNfunction_sLg::synapse0x269dfa0() {
   return (neuron0x267da60()*0.529186);
}

double NNfunction_sLg::synapse0x269dfe0() {
   return (neuron0x267dda0()*-0.362205);
}

double NNfunction_sLg::synapse0x269da70() {
   return (neuron0x267e0e0()*-0.160883);
}

double NNfunction_sLg::synapse0x269dab0() {
   return (neuron0x267e640()*0.549459);
}

double NNfunction_sLg::synapse0x268e5e0() {
   return (neuron0x267e860()*-0.00276421);
}

double NNfunction_sLg::synapse0x268e620() {
   return (neuron0x267eba0()*0.0218165);
}

double NNfunction_sLg::synapse0x268e660() {
   return (neuron0x267eee0()*0.0969686);
}

double NNfunction_sLg::synapse0x268e6a0() {
   return (neuron0x267f220()*0.122954);
}

double NNfunction_sLg::synapse0x268e6e0() {
   return (neuron0x267f560()*-0.132742);
}

double NNfunction_sLg::synapse0x268e720() {
   return (neuron0x267f8a0()*-0.139987);
}

double NNfunction_sLg::synapse0x268eaa0() {
   return (neuron0x267ace0()*0.111773);
}

double NNfunction_sLg::synapse0x268eae0() {
   return (neuron0x267b020()*-0.012115);
}

double NNfunction_sLg::synapse0x268eb20() {
   return (neuron0x267b360()*-0.125256);
}

double NNfunction_sLg::synapse0x268eb60() {
   return (neuron0x267b6a0()*0.427982);
}

double NNfunction_sLg::synapse0x268eba0() {
   return (neuron0x267b9e0()*0.0822802);
}

double NNfunction_sLg::synapse0x268ebe0() {
   return (neuron0x267bd20()*-0.00623326);
}

double NNfunction_sLg::synapse0x268ec20() {
   return (neuron0x267c060()*-0.0446379);
}

double NNfunction_sLg::synapse0x268ec60() {
   return (neuron0x267c3a0()*-0.0118984);
}

double NNfunction_sLg::synapse0x268eca0() {
   return (neuron0x267c6e0()*-0.0169744);
}

double NNfunction_sLg::synapse0x268ece0() {
   return (neuron0x267ca20()*0.607008);
}

double NNfunction_sLg::synapse0x268ed20() {
   return (neuron0x267cd60()*-0.20763);
}

double NNfunction_sLg::synapse0x268ed60() {
   return (neuron0x267d0a0()*0.0254721);
}

double NNfunction_sLg::synapse0x268eda0() {
   return (neuron0x267d3e0()*1.54232);
}

double NNfunction_sLg::synapse0x268ede0() {
   return (neuron0x267d720()*-0.0391569);
}

double NNfunction_sLg::synapse0x268ee20() {
   return (neuron0x267da60()*-0.159469);
}

double NNfunction_sLg::synapse0x268ee60() {
   return (neuron0x267dda0()*-0.050959);
}

double NNfunction_sLg::synapse0x268e8f0() {
   return (neuron0x267e0e0()*0.0333095);
}

double NNfunction_sLg::synapse0x268e930() {
   return (neuron0x267e640()*0.25357);
}

double NNfunction_sLg::synapse0x268efb0() {
   return (neuron0x267e860()*-0.0999855);
}

double NNfunction_sLg::synapse0x268eff0() {
   return (neuron0x267eba0()*-0.253314);
}

double NNfunction_sLg::synapse0x268f030() {
   return (neuron0x267eee0()*0.0139313);
}

double NNfunction_sLg::synapse0x268f070() {
   return (neuron0x267f220()*-0.111127);
}

double NNfunction_sLg::synapse0x268f0b0() {
   return (neuron0x267f560()*-0.233574);
}

double NNfunction_sLg::synapse0x268f0f0() {
   return (neuron0x267f8a0()*-0.109036);
}

double NNfunction_sLg::synapse0x268f470() {
   return (neuron0x267ace0()*-0.0936887);
}

double NNfunction_sLg::synapse0x268f4b0() {
   return (neuron0x267b020()*0.146357);
}

double NNfunction_sLg::synapse0x268f4f0() {
   return (neuron0x267b360()*-0.931615);
}

double NNfunction_sLg::synapse0x268f530() {
   return (neuron0x267b6a0()*-0.0625787);
}

double NNfunction_sLg::synapse0x268f570() {
   return (neuron0x267b9e0()*-0.206741);
}

double NNfunction_sLg::synapse0x268f5b0() {
   return (neuron0x267bd20()*-0.0671901);
}

double NNfunction_sLg::synapse0x268f5f0() {
   return (neuron0x267c060()*0.0604444);
}

double NNfunction_sLg::synapse0x268f630() {
   return (neuron0x267c3a0()*0.321022);
}

double NNfunction_sLg::synapse0x268f670() {
   return (neuron0x267c6e0()*0.0333889);
}

double NNfunction_sLg::synapse0x268f6b0() {
   return (neuron0x267ca20()*-0.195952);
}

double NNfunction_sLg::synapse0x268f6f0() {
   return (neuron0x267cd60()*-0.142432);
}

double NNfunction_sLg::synapse0x268f730() {
   return (neuron0x267d0a0()*-0.309204);
}

double NNfunction_sLg::synapse0x268f770() {
   return (neuron0x267d3e0()*-0.227724);
}

double NNfunction_sLg::synapse0x268f7b0() {
   return (neuron0x267d720()*0.045147);
}

double NNfunction_sLg::synapse0x268f7f0() {
   return (neuron0x267da60()*-0.192954);
}

double NNfunction_sLg::synapse0x268f830() {
   return (neuron0x267dda0()*-0.0123774);
}

double NNfunction_sLg::synapse0x268f2c0() {
   return (neuron0x267e0e0()*0.456704);
}

double NNfunction_sLg::synapse0x268f300() {
   return (neuron0x267e640()*0.0326629);
}

double NNfunction_sLg::synapse0x268f980() {
   return (neuron0x267e860()*-0.267481);
}

double NNfunction_sLg::synapse0x268f9c0() {
   return (neuron0x267eba0()*-0.385129);
}

double NNfunction_sLg::synapse0x268fa00() {
   return (neuron0x267eee0()*-0.322852);
}

double NNfunction_sLg::synapse0x268fa40() {
   return (neuron0x267f220()*-0.229585);
}

double NNfunction_sLg::synapse0x268fa80() {
   return (neuron0x267f560()*-0.143815);
}

double NNfunction_sLg::synapse0x268fac0() {
   return (neuron0x267f8a0()*-0.301552);
}

double NNfunction_sLg::synapse0x268fe40() {
   return (neuron0x267ace0()*-0.0502906);
}

double NNfunction_sLg::synapse0x268fe80() {
   return (neuron0x267b020()*-0.0152697);
}

double NNfunction_sLg::synapse0x268fec0() {
   return (neuron0x267b360()*-0.183015);
}

double NNfunction_sLg::synapse0x268ff00() {
   return (neuron0x267b6a0()*0.638015);
}

double NNfunction_sLg::synapse0x268ff40() {
   return (neuron0x267b9e0()*0.0018913);
}

double NNfunction_sLg::synapse0x268ff80() {
   return (neuron0x267bd20()*-0.0445818);
}

double NNfunction_sLg::synapse0x268ffc0() {
   return (neuron0x267c060()*-0.0471125);
}

double NNfunction_sLg::synapse0x2690000() {
   return (neuron0x267c3a0()*-0.0033372);
}

double NNfunction_sLg::synapse0x2690040() {
   return (neuron0x267c6e0()*0.226949);
}

double NNfunction_sLg::synapse0x2690080() {
   return (neuron0x267ca20()*-0.0921035);
}

double NNfunction_sLg::synapse0x26900c0() {
   return (neuron0x267cd60()*-0.00832229);
}

double NNfunction_sLg::synapse0x2690100() {
   return (neuron0x267d0a0()*0.00946342);
}

double NNfunction_sLg::synapse0x2690140() {
   return (neuron0x267d3e0()*1.32907);
}

double NNfunction_sLg::synapse0x2690180() {
   return (neuron0x267d720()*0.0686066);
}

double NNfunction_sLg::synapse0x26901c0() {
   return (neuron0x267da60()*-0.0612671);
}

double NNfunction_sLg::synapse0x2690200() {
   return (neuron0x267dda0()*0.0165114);
}

double NNfunction_sLg::synapse0x268fc90() {
   return (neuron0x267e0e0()*0.0442179);
}

double NNfunction_sLg::synapse0x268fcd0() {
   return (neuron0x267e640()*-0.0405521);
}

double NNfunction_sLg::synapse0x2690350() {
   return (neuron0x267e860()*0.0561024);
}

double NNfunction_sLg::synapse0x2690390() {
   return (neuron0x267eba0()*0.0530636);
}

double NNfunction_sLg::synapse0x26903d0() {
   return (neuron0x267eee0()*-0.00356519);
}

double NNfunction_sLg::synapse0x2690410() {
   return (neuron0x267f220()*0.0291962);
}

double NNfunction_sLg::synapse0x2690450() {
   return (neuron0x267f560()*0.06043);
}

double NNfunction_sLg::synapse0x2690490() {
   return (neuron0x267f8a0()*-0.0352683);
}

double NNfunction_sLg::synapse0x26a2360() {
   return (neuron0x267ace0()*-0.0757886);
}

double NNfunction_sLg::synapse0x26a23a0() {
   return (neuron0x267b020()*-0.32323);
}

double NNfunction_sLg::synapse0x26a23e0() {
   return (neuron0x267b360()*-0.108254);
}

double NNfunction_sLg::synapse0x26a2420() {
   return (neuron0x267b6a0()*-0.0862694);
}

double NNfunction_sLg::synapse0x26a2460() {
   return (neuron0x267b9e0()*-0.677183);
}

double NNfunction_sLg::synapse0x26a24a0() {
   return (neuron0x267bd20()*0.0639389);
}

double NNfunction_sLg::synapse0x26a24e0() {
   return (neuron0x267c060()*-0.076488);
}

double NNfunction_sLg::synapse0x26a2520() {
   return (neuron0x267c3a0()*-0.0477271);
}

double NNfunction_sLg::synapse0x26a2560() {
   return (neuron0x267c6e0()*0.134334);
}

double NNfunction_sLg::synapse0x26a25a0() {
   return (neuron0x267ca20()*-0.0952879);
}

double NNfunction_sLg::synapse0x26a25e0() {
   return (neuron0x267cd60()*0.0429451);
}

double NNfunction_sLg::synapse0x26a2620() {
   return (neuron0x267d0a0()*0.184703);
}

double NNfunction_sLg::synapse0x26a2660() {
   return (neuron0x267d3e0()*-0.544376);
}

double NNfunction_sLg::synapse0x26a26a0() {
   return (neuron0x267d720()*0.395704);
}

double NNfunction_sLg::synapse0x26a26e0() {
   return (neuron0x267da60()*0.0184032);
}

double NNfunction_sLg::synapse0x26a2720() {
   return (neuron0x267dda0()*0.247381);
}

double NNfunction_sLg::synapse0x26904d0() {
   return (neuron0x267e0e0()*0.211768);
}

double NNfunction_sLg::synapse0x2690510() {
   return (neuron0x267e640()*-0.264464);
}

double NNfunction_sLg::synapse0x26a2870() {
   return (neuron0x267e860()*0.117934);
}

double NNfunction_sLg::synapse0x26a28b0() {
   return (neuron0x267eba0()*-0.243533);
}

double NNfunction_sLg::synapse0x26a28f0() {
   return (neuron0x267eee0()*0.106344);
}

double NNfunction_sLg::synapse0x26a2930() {
   return (neuron0x267f220()*-0.433479);
}

double NNfunction_sLg::synapse0x26a2970() {
   return (neuron0x267f560()*0.084882);
}

double NNfunction_sLg::synapse0x26a29b0() {
   return (neuron0x267f8a0()*-0.0726006);
}

double NNfunction_sLg::synapse0x26a2d30() {
   return (neuron0x267ace0()*-0.0208504);
}

double NNfunction_sLg::synapse0x26a2d70() {
   return (neuron0x267b020()*-0.00716512);
}

double NNfunction_sLg::synapse0x26a2db0() {
   return (neuron0x267b360()*-0.0600316);
}

double NNfunction_sLg::synapse0x26a2df0() {
   return (neuron0x267b6a0()*0.0378033);
}

double NNfunction_sLg::synapse0x26a2e30() {
   return (neuron0x267b9e0()*-0.0162404);
}

double NNfunction_sLg::synapse0x26a2e70() {
   return (neuron0x267bd20()*0.0097712);
}

double NNfunction_sLg::synapse0x26a2eb0() {
   return (neuron0x267c060()*0.00152538);
}

double NNfunction_sLg::synapse0x26a2ef0() {
   return (neuron0x267c3a0()*0.000121588);
}

double NNfunction_sLg::synapse0x26a2f30() {
   return (neuron0x267c6e0()*0.0123485);
}

double NNfunction_sLg::synapse0x26a2f70() {
   return (neuron0x267ca20()*0.0210827);
}

double NNfunction_sLg::synapse0x26a2fb0() {
   return (neuron0x267cd60()*-0.00387356);
}

double NNfunction_sLg::synapse0x26a2ff0() {
   return (neuron0x267d0a0()*0.424402);
}

double NNfunction_sLg::synapse0x26a3030() {
   return (neuron0x267d3e0()*-0.396598);
}

double NNfunction_sLg::synapse0x26a3070() {
   return (neuron0x267d720()*-0.12541);
}

double NNfunction_sLg::synapse0x26a30b0() {
   return (neuron0x267da60()*0.0076709);
}

double NNfunction_sLg::synapse0x26a30f0() {
   return (neuron0x267dda0()*0.056677);
}

double NNfunction_sLg::synapse0x26a2b80() {
   return (neuron0x267e0e0()*-0.146806);
}

double NNfunction_sLg::synapse0x26a2bc0() {
   return (neuron0x267e640()*0.0236286);
}

double NNfunction_sLg::synapse0x26a3240() {
   return (neuron0x267e860()*0.0366659);
}

double NNfunction_sLg::synapse0x26a3280() {
   return (neuron0x267eba0()*0.0139712);
}

double NNfunction_sLg::synapse0x26a32c0() {
   return (neuron0x267eee0()*0.0406393);
}

double NNfunction_sLg::synapse0x26a3300() {
   return (neuron0x267f220()*0.00274931);
}

double NNfunction_sLg::synapse0x26a3340() {
   return (neuron0x267f560()*0.00970472);
}

double NNfunction_sLg::synapse0x26a3380() {
   return (neuron0x267f8a0()*-0.0105333);
}

double NNfunction_sLg::synapse0x26a3700() {
   return (neuron0x267ace0()*0.279293);
}

double NNfunction_sLg::synapse0x26a3740() {
   return (neuron0x267b020()*0.218119);
}

double NNfunction_sLg::synapse0x26a3780() {
   return (neuron0x267b360()*-0.733824);
}

double NNfunction_sLg::synapse0x26a37c0() {
   return (neuron0x267b6a0()*0.168191);
}

double NNfunction_sLg::synapse0x26a3800() {
   return (neuron0x267b9e0()*0.0814059);
}

double NNfunction_sLg::synapse0x26a3840() {
   return (neuron0x267bd20()*0.0410642);
}

double NNfunction_sLg::synapse0x26a3880() {
   return (neuron0x267c060()*0.461346);
}

double NNfunction_sLg::synapse0x26a38c0() {
   return (neuron0x267c3a0()*0.241722);
}

double NNfunction_sLg::synapse0x26a3900() {
   return (neuron0x267c6e0()*-0.224242);
}

double NNfunction_sLg::synapse0x26a3940() {
   return (neuron0x267ca20()*-0.170339);
}

double NNfunction_sLg::synapse0x26a3980() {
   return (neuron0x267cd60()*0.604289);
}

double NNfunction_sLg::synapse0x26a39c0() {
   return (neuron0x267d0a0()*-0.442563);
}

double NNfunction_sLg::synapse0x26a3a00() {
   return (neuron0x267d3e0()*0.197525);
}

double NNfunction_sLg::synapse0x26a3a40() {
   return (neuron0x267d720()*0.434139);
}

double NNfunction_sLg::synapse0x26a3a80() {
   return (neuron0x267da60()*0.233188);
}

double NNfunction_sLg::synapse0x26a3ac0() {
   return (neuron0x267dda0()*0.0536011);
}

double NNfunction_sLg::synapse0x26a3550() {
   return (neuron0x267e0e0()*0.150178);
}

double NNfunction_sLg::synapse0x26a3590() {
   return (neuron0x267e640()*0.440546);
}

double NNfunction_sLg::synapse0x26a3c10() {
   return (neuron0x267e860()*0.0213768);
}

double NNfunction_sLg::synapse0x26a3c50() {
   return (neuron0x267eba0()*0.0561835);
}

double NNfunction_sLg::synapse0x26a3c90() {
   return (neuron0x267eee0()*0.211949);
}

double NNfunction_sLg::synapse0x26a3cd0() {
   return (neuron0x267f220()*0.0678007);
}

double NNfunction_sLg::synapse0x26a3d10() {
   return (neuron0x267f560()*0.140641);
}

double NNfunction_sLg::synapse0x26a3d50() {
   return (neuron0x267f8a0()*0.0982156);
}

double NNfunction_sLg::synapse0x26a40d0() {
   return (neuron0x267ace0()*-0.00266289);
}

double NNfunction_sLg::synapse0x26a4110() {
   return (neuron0x267b020()*0.000957073);
}

double NNfunction_sLg::synapse0x26a4150() {
   return (neuron0x267b360()*0.0361861);
}

double NNfunction_sLg::synapse0x26a4190() {
   return (neuron0x267b6a0()*1.07624);
}

double NNfunction_sLg::synapse0x26a41d0() {
   return (neuron0x267b9e0()*-0.00160381);
}

double NNfunction_sLg::synapse0x26a4210() {
   return (neuron0x267bd20()*0.00187685);
}

double NNfunction_sLg::synapse0x26a4250() {
   return (neuron0x267c060()*-0.00123803);
}

double NNfunction_sLg::synapse0x26a4290() {
   return (neuron0x267c3a0()*5.63357e-05);
}

double NNfunction_sLg::synapse0x26a42d0() {
   return (neuron0x267c6e0()*-0.000647873);
}

double NNfunction_sLg::synapse0x26a4310() {
   return (neuron0x267ca20()*0.00191288);
}

double NNfunction_sLg::synapse0x26a4350() {
   return (neuron0x267cd60()*0.00273528);
}

double NNfunction_sLg::synapse0x26a4390() {
   return (neuron0x267d0a0()*0.00534969);
}

double NNfunction_sLg::synapse0x26a43d0() {
   return (neuron0x267d3e0()*-1.57985);
}

double NNfunction_sLg::synapse0x26a4410() {
   return (neuron0x267d720()*-0.00618978);
}

double NNfunction_sLg::synapse0x26a4450() {
   return (neuron0x267da60()*0.00693372);
}

double NNfunction_sLg::synapse0x26a4490() {
   return (neuron0x267dda0()*0.00477065);
}

double NNfunction_sLg::synapse0x26a3f20() {
   return (neuron0x267e0e0()*0.000166);
}

double NNfunction_sLg::synapse0x26a3f60() {
   return (neuron0x267e640()*0.00695893);
}

double NNfunction_sLg::synapse0x26a45e0() {
   return (neuron0x267e860()*0.00308688);
}

double NNfunction_sLg::synapse0x26a4620() {
   return (neuron0x267eba0()*-0.00260122);
}

double NNfunction_sLg::synapse0x26a4660() {
   return (neuron0x267eee0()*-0.00220562);
}

double NNfunction_sLg::synapse0x26a46a0() {
   return (neuron0x267f220()*-0.000648943);
}

double NNfunction_sLg::synapse0x26a46e0() {
   return (neuron0x267f560()*-0.000429733);
}

double NNfunction_sLg::synapse0x26a4720() {
   return (neuron0x267f8a0()*0.000302628);
}

double NNfunction_sLg::synapse0x243aaf0() {
   return (neuron0x267fd10()*0.966503);
}

double NNfunction_sLg::synapse0x243ab30() {
   return (neuron0x2680660()*0.127187);
}

double NNfunction_sLg::synapse0x26821d0() {
   return (neuron0x2681140()*1.01247);
}

double NNfunction_sLg::synapse0x2682210() {
   return (neuron0x2680be0()*0.740465);
}

double NNfunction_sLg::synapse0x2682ba0() {
   return (neuron0x2681f20()*1.14488);
}

double NNfunction_sLg::synapse0x2682be0() {
   return (neuron0x26828f0()*0.388906);
}

double NNfunction_sLg::synapse0x2683970() {
   return (neuron0x26836c0()*2.08044);
}

double NNfunction_sLg::synapse0x26839b0() {
   return (neuron0x2684090()*-1.00609);
}

double NNfunction_sLg::synapse0x2684340() {
   return (neuron0x2684a60()*0.219129);
}

double NNfunction_sLg::synapse0x2684380() {
   return (neuron0x2685540()*-0.692521);
}

double NNfunction_sLg::synapse0x2684d10() {
   return (neuron0x2685f10()*-0.901977);
}

double NNfunction_sLg::synapse0x2684d50() {
   return (neuron0x2682ff0()*0.783539);
}

double NNfunction_sLg::synapse0x26857f0() {
   return (neuron0x2687ac0()*2.39812);
}

double NNfunction_sLg::synapse0x2685830() {
   return (neuron0x2688490()*0.150747);
}

double NNfunction_sLg::synapse0x26861c0() {
   return (neuron0x2688e60()*-0.497215);
}

double NNfunction_sLg::synapse0x2686200() {
   return (neuron0x2689830()*-0.438458);
}

double NNfunction_sLg::synapse0x26832a0() {
   return (neuron0x268b640()*-0.760257);
}

double NNfunction_sLg::synapse0x26832e0() {
   return (neuron0x268b920()*0.0776594);
}

double NNfunction_sLg::synapse0x2687d70() {
   return (neuron0x268c2f0()*0.0860619);
}

double NNfunction_sLg::synapse0x2687db0() {
   return (neuron0x268ccc0()*-0.968421);
}

double NNfunction_sLg::synapse0x2688740() {
   return (neuron0x268d690()*0.462551);
}

double NNfunction_sLg::synapse0x2688780() {
   return (neuron0x268e060()*0.71683);
}

double NNfunction_sLg::synapse0x2689110() {
   return (neuron0x2686bb0()*1.42704);
}

double NNfunction_sLg::synapse0x2689150() {
   return (neuron0x2687580()*0.1998);
}

double NNfunction_sLg::synapse0x2689ae0() {
   return (neuron0x2690df0()*-1.51716);
}

double NNfunction_sLg::synapse0x2689b20() {
   return (neuron0x26917c0()*1.38297);
}

double NNfunction_sLg::synapse0x267dc80() {
   return (neuron0x2692190()*0.246816);
}

double NNfunction_sLg::synapse0x267dcc0() {
   return (neuron0x2692b60()*0.0500666);
}

double NNfunction_sLg::synapse0x268bbd0() {
   return (neuron0x2693530()*0.637895);
}

double NNfunction_sLg::synapse0x268bc10() {
   return (neuron0x2693f00()*0.488281);
}

double NNfunction_sLg::synapse0x268c5a0() {
   return (neuron0x26948d0()*-0.542018);
}

double NNfunction_sLg::synapse0x268c5e0() {
   return (neuron0x26952a0()*-0.0825653);
}

double NNfunction_sLg::synapse0x268cf70() {
   return (neuron0x268b330()*0.090119);
}

double NNfunction_sLg::synapse0x268cfb0() {
   return (neuron0x2697e80()*0.974262);
}

double NNfunction_sLg::synapse0x268d940() {
   return (neuron0x2698850()*0.0438173);
}

double NNfunction_sLg::synapse0x268d980() {
   return (neuron0x2699220()*0.827609);
}

double NNfunction_sLg::synapse0x268e310() {
   return (neuron0x2699bf0()*1.73641);
}

double NNfunction_sLg::synapse0x268e350() {
   return (neuron0x269a5c0()*-1.12866);
}

double NNfunction_sLg::synapse0x2686e60() {
   return (neuron0x269af90()*0.00801983);
}

double NNfunction_sLg::synapse0x2686ea0() {
   return (neuron0x269b960()*1.58402);
}

double NNfunction_sLg::synapse0x2690710() {
   return (neuron0x269c330()*0.972582);
}

double NNfunction_sLg::synapse0x2690750() {
   return (neuron0x269cf10()*0.92094);
}

double NNfunction_sLg::synapse0x26910a0() {
   return (neuron0x269d8e0()*0.21531);
}

double NNfunction_sLg::synapse0x26910e0() {
   return (neuron0x268e760()*0.401623);
}

double NNfunction_sLg::synapse0x2691a70() {
   return (neuron0x268f130()*0.404189);
}

double NNfunction_sLg::synapse0x2691ab0() {
   return (neuron0x268fb00()*0.956608);
}

double NNfunction_sLg::synapse0x2692440() {
   return (neuron0x26a2140()*-0.412151);
}

double NNfunction_sLg::synapse0x2692480() {
   return (neuron0x26a29f0()*0.345846);
}

double NNfunction_sLg::synapse0x2692e10() {
   return (neuron0x26a33c0()*0.473327);
}

double NNfunction_sLg::synapse0x2692e50() {
   return (neuron0x26a3d90()*-0.947717);
}

double NNfunction_sLg::synapse0x2695550() {
   return (neuron0x267fd10()*0.380468);
}

double NNfunction_sLg::synapse0x2695590() {
   return (neuron0x2680660()*-0.121465);
}

double NNfunction_sLg::synapse0x268ab10() {
   return (neuron0x2681140()*-0.159785);
}

double NNfunction_sLg::synapse0x268ab50() {
   return (neuron0x2680be0()*-0.511259);
}

double NNfunction_sLg::synapse0x2698130() {
   return (neuron0x2681f20()*0.707453);
}

double NNfunction_sLg::synapse0x2698170() {
   return (neuron0x26828f0()*-0.267203);
}

double NNfunction_sLg::synapse0x2698b00() {
   return (neuron0x26836c0()*-5.98917);
}

double NNfunction_sLg::synapse0x2698b40() {
   return (neuron0x2684090()*1.79993);
}

double NNfunction_sLg::synapse0x26994d0() {
   return (neuron0x2684a60()*0.149505);
}

double NNfunction_sLg::synapse0x2699510() {
   return (neuron0x2685540()*0.396093);
}

double NNfunction_sLg::synapse0x2699ea0() {
   return (neuron0x2685f10()*0.419868);
}

double NNfunction_sLg::synapse0x2699ee0() {
   return (neuron0x2682ff0()*-1.33502);
}

double NNfunction_sLg::synapse0x269a870() {
   return (neuron0x2687ac0()*-6.84255);
}

double NNfunction_sLg::synapse0x269a8b0() {
   return (neuron0x2688490()*0.283512);
}

double NNfunction_sLg::synapse0x269b240() {
   return (neuron0x2688e60()*-0.235836);
}

double NNfunction_sLg::synapse0x269b280() {
   return (neuron0x2689830()*-0.308434);
}

double NNfunction_sLg::synapse0x269bc10() {
   return (neuron0x268b640()*-0.364668);
}

double NNfunction_sLg::synapse0x269bc50() {
   return (neuron0x268b920()*-0.374793);
}

double NNfunction_sLg::synapse0x269c5e0() {
   return (neuron0x268c2f0()*-0.295877);
}

double NNfunction_sLg::synapse0x269c620() {
   return (neuron0x268ccc0()*0.108974);
}

double NNfunction_sLg::synapse0x269d1c0() {
   return (neuron0x268d690()*-0.196473);
}

double NNfunction_sLg::synapse0x269d200() {
   return (neuron0x268e060()*-0.42888);
}

double NNfunction_sLg::synapse0x269db90() {
   return (neuron0x2686bb0()*0.669544);
}

double NNfunction_sLg::synapse0x269dbd0() {
   return (neuron0x2687580()*0.839049);
}

double NNfunction_sLg::synapse0x268ea10() {
   return (neuron0x2690df0()*0.676021);
}

double NNfunction_sLg::synapse0x268ea50() {
   return (neuron0x26917c0()*-0.380026);
}

double NNfunction_sLg::synapse0x268f3e0() {
   return (neuron0x2692190()*-0.963163);
}

double NNfunction_sLg::synapse0x268f420() {
   return (neuron0x2692b60()*0.210925);
}

double NNfunction_sLg::synapse0x268fdb0() {
   return (neuron0x2693530()*0.761652);
}

double NNfunction_sLg::synapse0x268fdf0() {
   return (neuron0x2693f00()*0.157119);
}

double NNfunction_sLg::synapse0x26a22d0() {
   return (neuron0x26948d0()*1.79913);
}

double NNfunction_sLg::synapse0x26a2310() {
   return (neuron0x26952a0()*0.55058);
}

double NNfunction_sLg::synapse0x26a2ca0() {
   return (neuron0x268b330()*-0.295648);
}

double NNfunction_sLg::synapse0x26a2ce0() {
   return (neuron0x2697e80()*-1.22295);
}

double NNfunction_sLg::synapse0x26a3670() {
   return (neuron0x2698850()*-0.34548);
}

double NNfunction_sLg::synapse0x26a36b0() {
   return (neuron0x2699220()*0.720336);
}

double NNfunction_sLg::synapse0x26a4040() {
   return (neuron0x2699bf0()*-1.61438);
}

double NNfunction_sLg::synapse0x26a4080() {
   return (neuron0x269a5c0()*2.02242);
}

double NNfunction_sLg::synapse0x267ff30() {
   return (neuron0x269af90()*0.102058);
}

double NNfunction_sLg::synapse0x267ff70() {
   return (neuron0x269b960()*-3.65297);
}

double NNfunction_sLg::synapse0x26937e0() {
   return (neuron0x269c330()*-2.25823);
}

double NNfunction_sLg::synapse0x2693820() {
   return (neuron0x269cf10()*0.342382);
}

double NNfunction_sLg::synapse0x26a4760() {
   return (neuron0x269d8e0()*0.321737);
}

double NNfunction_sLg::synapse0x26a47a0() {
   return (neuron0x268e760()*-0.773665);
}

double NNfunction_sLg::synapse0x26a47e0() {
   return (neuron0x268f130()*-0.39749);
}

double NNfunction_sLg::synapse0x26a4820() {
   return (neuron0x268fb00()*-0.426722);
}

double NNfunction_sLg::synapse0x26ab6d0() {
   return (neuron0x26a2140()*0.340822);
}

double NNfunction_sLg::synapse0x26ab710() {
   return (neuron0x26a29f0()*0.334572);
}

double NNfunction_sLg::synapse0x26ab750() {
   return (neuron0x26a33c0()*0.417272);
}

double NNfunction_sLg::synapse0x26ab790() {
   return (neuron0x26a3d90()*0.832673);
}

double NNfunction_sLg::synapse0x26abb10() {
   return (neuron0x267fd10()*-0.0341173);
}

double NNfunction_sLg::synapse0x26abb50() {
   return (neuron0x2680660()*-0.0993273);
}

double NNfunction_sLg::synapse0x26abb90() {
   return (neuron0x2681140()*0.0125665);
}

double NNfunction_sLg::synapse0x26abbd0() {
   return (neuron0x2680be0()*0.0415836);
}

double NNfunction_sLg::synapse0x26abc10() {
   return (neuron0x2681f20()*-0.113774);
}

double NNfunction_sLg::synapse0x26abc50() {
   return (neuron0x26828f0()*0.0191865);
}

double NNfunction_sLg::synapse0x26abc90() {
   return (neuron0x26836c0()*0.216141);
}

double NNfunction_sLg::synapse0x26abcd0() {
   return (neuron0x2684090()*-0.0965975);
}

double NNfunction_sLg::synapse0x26abd10() {
   return (neuron0x2684a60()*0.0218003);
}

double NNfunction_sLg::synapse0x26abd50() {
   return (neuron0x2685540()*-0.853023);
}

double NNfunction_sLg::synapse0x26abd90() {
   return (neuron0x2685f10()*-0.258086);
}

double NNfunction_sLg::synapse0x26abdd0() {
   return (neuron0x2682ff0()*2.47027);
}

double NNfunction_sLg::synapse0x26abe10() {
   return (neuron0x2687ac0()*0.615494);
}

double NNfunction_sLg::synapse0x26abe50() {
   return (neuron0x2688490()*-0.0319516);
}

double NNfunction_sLg::synapse0x26abe90() {
   return (neuron0x2688e60()*-0.142369);
}

double NNfunction_sLg::synapse0x26abed0() {
   return (neuron0x2689830()*-0.060471);
}

double NNfunction_sLg::synapse0x26ab960() {
   return (neuron0x268b640()*-0.450705);
}

double NNfunction_sLg::synapse0x26ab9a0() {
   return (neuron0x268b920()*0.0196173);
}

double NNfunction_sLg::synapse0x26ac020() {
   return (neuron0x268c2f0()*0.0140158);
}

double NNfunction_sLg::synapse0x26ac060() {
   return (neuron0x268ccc0()*-0.356717);
}

double NNfunction_sLg::synapse0x26ac0a0() {
   return (neuron0x268d690()*0.0228447);
}

double NNfunction_sLg::synapse0x26ac0e0() {
   return (neuron0x268e060()*0.0427824);
}

double NNfunction_sLg::synapse0x26ac120() {
   return (neuron0x2686bb0()*-0.170119);
}

double NNfunction_sLg::synapse0x26ac160() {
   return (neuron0x2687580()*-0.0394726);
}

double NNfunction_sLg::synapse0x26ac1a0() {
   return (neuron0x2690df0()*-0.117388);
}

double NNfunction_sLg::synapse0x26ac1e0() {
   return (neuron0x26917c0()*-0.0906879);
}

double NNfunction_sLg::synapse0x26ac220() {
   return (neuron0x2692190()*0.920208);
}

double NNfunction_sLg::synapse0x26ac260() {
   return (neuron0x2692b60()*0.00382772);
}

double NNfunction_sLg::synapse0x26ac2a0() {
   return (neuron0x2693530()*-0.0536697);
}

double NNfunction_sLg::synapse0x26ac2e0() {
   return (neuron0x2693f00()*0.0211141);
}

double NNfunction_sLg::synapse0x26ac320() {
   return (neuron0x26948d0()*-2.36501);
}

double NNfunction_sLg::synapse0x26ac360() {
   return (neuron0x26952a0()*-0.0527132);
}

double NNfunction_sLg::synapse0x26abf10() {
   return (neuron0x268b330()*-0.00757076);
}

double NNfunction_sLg::synapse0x26abf50() {
   return (neuron0x2697e80()*0.0408278);
}

double NNfunction_sLg::synapse0x26abf90() {
   return (neuron0x2698850()*-0.0012865);
}

double NNfunction_sLg::synapse0x26abfd0() {
   return (neuron0x2699220()*-0.081679);
}

double NNfunction_sLg::synapse0x26ac5b0() {
   return (neuron0x2699bf0()*0.582725);
}

double NNfunction_sLg::synapse0x26ac5f0() {
   return (neuron0x269a5c0()*0.361443);
}

double NNfunction_sLg::synapse0x26ac630() {
   return (neuron0x269af90()*-0.255424);
}

double NNfunction_sLg::synapse0x26ac670() {
   return (neuron0x269b960()*0.773333);
}

double NNfunction_sLg::synapse0x26ac6b0() {
   return (neuron0x269c330()*2.34214);
}

double NNfunction_sLg::synapse0x26ac6f0() {
   return (neuron0x269cf10()*-0.0743176);
}

double NNfunction_sLg::synapse0x26ac730() {
   return (neuron0x269d8e0()*0.0130006);
}

double NNfunction_sLg::synapse0x26ac770() {
   return (neuron0x268e760()*0.0057019);
}

double NNfunction_sLg::synapse0x26ac7b0() {
   return (neuron0x268f130()*0.0203069);
}

double NNfunction_sLg::synapse0x26ac7f0() {
   return (neuron0x268fb00()*-0.21373);
}

double NNfunction_sLg::synapse0x26ac830() {
   return (neuron0x26a2140()*-0.0413017);
}

double NNfunction_sLg::synapse0x26ac870() {
   return (neuron0x26a29f0()*-0.541036);
}

double NNfunction_sLg::synapse0x26ac8b0() {
   return (neuron0x26a33c0()*-0.0165018);
}

double NNfunction_sLg::synapse0x26ac8f0() {
   return (neuron0x26a3d90()*-0.887296);
}

double NNfunction_sLg::synapse0x26acc70() {
   return (neuron0x267fd10()*0.0511975);
}

double NNfunction_sLg::synapse0x26accb0() {
   return (neuron0x2680660()*0.275545);
}

double NNfunction_sLg::synapse0x26accf0() {
   return (neuron0x2681140()*-0.0288495);
}

double NNfunction_sLg::synapse0x26acd30() {
   return (neuron0x2680be0()*-0.0558297);
}

double NNfunction_sLg::synapse0x26acd70() {
   return (neuron0x2681f20()*0.0466844);
}

double NNfunction_sLg::synapse0x26acdb0() {
   return (neuron0x26828f0()*-0.027925);
}

double NNfunction_sLg::synapse0x26acdf0() {
   return (neuron0x26836c0()*0.0978388);
}

double NNfunction_sLg::synapse0x26ace30() {
   return (neuron0x2684090()*-2.35998);
}

double NNfunction_sLg::synapse0x26ace70() {
   return (neuron0x2684a60()*-0.015444);
}

double NNfunction_sLg::synapse0x26aceb0() {
   return (neuron0x2685540()*1.03184);
}

double NNfunction_sLg::synapse0x26acef0() {
   return (neuron0x2685f10()*0.248666);
}

double NNfunction_sLg::synapse0x26acf30() {
   return (neuron0x2682ff0()*2.2244);
}

double NNfunction_sLg::synapse0x26acf70() {
   return (neuron0x2687ac0()*-0.154877);
}

double NNfunction_sLg::synapse0x26acfb0() {
   return (neuron0x2688490()*0.0348413);
}

double NNfunction_sLg::synapse0x26acff0() {
   return (neuron0x2688e60()*0.212272);
}

double NNfunction_sLg::synapse0x26ad030() {
   return (neuron0x2689830()*0.0447211);
}

double NNfunction_sLg::synapse0x26acac0() {
   return (neuron0x268b640()*1.57146);
}

double NNfunction_sLg::synapse0x26acb00() {
   return (neuron0x268b920()*0.00294582);
}

double NNfunction_sLg::synapse0x26ad180() {
   return (neuron0x268c2f0()*-0.00829163);
}

double NNfunction_sLg::synapse0x26ad1c0() {
   return (neuron0x268ccc0()*0.4434);
}

double NNfunction_sLg::synapse0x26ad200() {
   return (neuron0x268d690()*-0.0197652);
}

double NNfunction_sLg::synapse0x26ad240() {
   return (neuron0x268e060()*-0.0497972);
}

double NNfunction_sLg::synapse0x26ad280() {
   return (neuron0x2686bb0()*-0.0140264);
}

double NNfunction_sLg::synapse0x26ad2c0() {
   return (neuron0x2687580()*0.0440421);
}

double NNfunction_sLg::synapse0x26ad300() {
   return (neuron0x2690df0()*0.0390318);
}

double NNfunction_sLg::synapse0x26ad340() {
   return (neuron0x26917c0()*0.0412998);
}

double NNfunction_sLg::synapse0x26ad380() {
   return (neuron0x2692190()*2.22883);
}

double NNfunction_sLg::synapse0x26ad3c0() {
   return (neuron0x2692b60()*-0.0139817);
}

double NNfunction_sLg::synapse0x26ad400() {
   return (neuron0x2693530()*0.0867817);
}

double NNfunction_sLg::synapse0x26ad440() {
   return (neuron0x2693f00()*-0.0073004);
}

double NNfunction_sLg::synapse0x26ad480() {
   return (neuron0x26948d0()*-1.89015);
}

double NNfunction_sLg::synapse0x26ad4c0() {
   return (neuron0x26952a0()*0.0806629);
}

double NNfunction_sLg::synapse0x26ad070() {
   return (neuron0x268b330()*0.00841798);
}

double NNfunction_sLg::synapse0x26ad0b0() {
   return (neuron0x2697e80()*-0.485415);
}

double NNfunction_sLg::synapse0x26ad0f0() {
   return (neuron0x2698850()*-0.0048128);
}

double NNfunction_sLg::synapse0x26ad130() {
   return (neuron0x2699220()*0.0578478);
}

double NNfunction_sLg::synapse0x26ad710() {
   return (neuron0x2699bf0()*0.844385);
}

double NNfunction_sLg::synapse0x26ad750() {
   return (neuron0x269a5c0()*-2.46579);
}

double NNfunction_sLg::synapse0x26ad790() {
   return (neuron0x269af90()*0.0869269);
}

double NNfunction_sLg::synapse0x26ad7d0() {
   return (neuron0x269b960()*1.84922);
}

double NNfunction_sLg::synapse0x26ad810() {
   return (neuron0x269c330()*1.52626);
}

double NNfunction_sLg::synapse0x26ad850() {
   return (neuron0x269cf10()*0.0979123);
}

double NNfunction_sLg::synapse0x26ad890() {
   return (neuron0x269d8e0()*0.000358814);
}

double NNfunction_sLg::synapse0x26ad8d0() {
   return (neuron0x268e760()*-0.0303601);
}

double NNfunction_sLg::synapse0x26ad910() {
   return (neuron0x268f130()*-0.0311983);
}

double NNfunction_sLg::synapse0x26ad950() {
   return (neuron0x268fb00()*0.281252);
}

double NNfunction_sLg::synapse0x26ad990() {
   return (neuron0x26a2140()*0.0288724);
}

double NNfunction_sLg::synapse0x26ad9d0() {
   return (neuron0x26a29f0()*0.773962);
}

double NNfunction_sLg::synapse0x26ada10() {
   return (neuron0x26a33c0()*0.0229291);
}

double NNfunction_sLg::synapse0x26ada50() {
   return (neuron0x26a3d90()*-1.35881);
}

double NNfunction_sLg::synapse0x26addd0() {
   return (neuron0x267fd10()*-0.272928);
}

double NNfunction_sLg::synapse0x26ade10() {
   return (neuron0x2680660()*-0.0798229);
}

double NNfunction_sLg::synapse0x26ade50() {
   return (neuron0x2681140()*-0.319825);
}

double NNfunction_sLg::synapse0x26ade90() {
   return (neuron0x2680be0()*0.254471);
}

double NNfunction_sLg::synapse0x26aded0() {
   return (neuron0x2681f20()*0.316215);
}

double NNfunction_sLg::synapse0x26adf10() {
   return (neuron0x26828f0()*-0.128669);
}

double NNfunction_sLg::synapse0x26adf50() {
   return (neuron0x26836c0()*-0.33655);
}

double NNfunction_sLg::synapse0x26adf90() {
   return (neuron0x2684090()*0.0515425);
}

double NNfunction_sLg::synapse0x26adfd0() {
   return (neuron0x2684a60()*0.538703);
}

double NNfunction_sLg::synapse0x26ae010() {
   return (neuron0x2685540()*-0.305154);
}

double NNfunction_sLg::synapse0x26ae050() {
   return (neuron0x2685f10()*0.0829396);
}

double NNfunction_sLg::synapse0x26ae090() {
   return (neuron0x2682ff0()*0.482114);
}

double NNfunction_sLg::synapse0x26ae0d0() {
   return (neuron0x2687ac0()*-0.146925);
}

double NNfunction_sLg::synapse0x26ae110() {
   return (neuron0x2688490()*0.178746);
}

double NNfunction_sLg::synapse0x26ae150() {
   return (neuron0x2688e60()*-0.673328);
}

double NNfunction_sLg::synapse0x26ae190() {
   return (neuron0x2689830()*-0.648702);
}

double NNfunction_sLg::synapse0x26adc20() {
   return (neuron0x268b640()*-0.398812);
}

double NNfunction_sLg::synapse0x26adc60() {
   return (neuron0x268b920()*-0.318689);
}

double NNfunction_sLg::synapse0x26ae2e0() {
   return (neuron0x268c2f0()*0.00156115);
}

double NNfunction_sLg::synapse0x26ae320() {
   return (neuron0x268ccc0()*-0.792192);
}

double NNfunction_sLg::synapse0x26ae360() {
   return (neuron0x268d690()*-0.0967912);
}

double NNfunction_sLg::synapse0x26ae3a0() {
   return (neuron0x268e060()*-0.0658109);
}

double NNfunction_sLg::synapse0x26ae3e0() {
   return (neuron0x2686bb0()*-0.438992);
}

double NNfunction_sLg::synapse0x26ae420() {
   return (neuron0x2687580()*-0.343688);
}

double NNfunction_sLg::synapse0x26ae460() {
   return (neuron0x2690df0()*-0.42938);
}

double NNfunction_sLg::synapse0x26ae4a0() {
   return (neuron0x26917c0()*-0.0547172);
}

double NNfunction_sLg::synapse0x26ae4e0() {
   return (neuron0x2692190()*-0.444489);
}

double NNfunction_sLg::synapse0x26ae520() {
   return (neuron0x2692b60()*0.121467);
}

double NNfunction_sLg::synapse0x26ae560() {
   return (neuron0x2693530()*-0.524175);
}

double NNfunction_sLg::synapse0x26ae5a0() {
   return (neuron0x2693f00()*-0.17341);
}

double NNfunction_sLg::synapse0x26ae5e0() {
   return (neuron0x26948d0()*-0.694404);
}

double NNfunction_sLg::synapse0x26ae620() {
   return (neuron0x26952a0()*-0.474566);
}

double NNfunction_sLg::synapse0x26ae1d0() {
   return (neuron0x268b330()*-0.540399);
}

double NNfunction_sLg::synapse0x26ae210() {
   return (neuron0x2697e80()*-0.136984);
}

double NNfunction_sLg::synapse0x26ae250() {
   return (neuron0x2698850()*-0.438062);
}

double NNfunction_sLg::synapse0x26ae290() {
   return (neuron0x2699220()*0.0135191);
}

double NNfunction_sLg::synapse0x26ae870() {
   return (neuron0x2699bf0()*0.283694);
}

double NNfunction_sLg::synapse0x26ae8b0() {
   return (neuron0x269a5c0()*-0.0778726);
}

double NNfunction_sLg::synapse0x26ae8f0() {
   return (neuron0x269af90()*0.300469);
}

double NNfunction_sLg::synapse0x26ae930() {
   return (neuron0x269b960()*-0.483309);
}

double NNfunction_sLg::synapse0x26ae970() {
   return (neuron0x269c330()*-0.0779498);
}

double NNfunction_sLg::synapse0x26ae9b0() {
   return (neuron0x269cf10()*-0.295907);
}

double NNfunction_sLg::synapse0x26ae9f0() {
   return (neuron0x269d8e0()*0.326822);
}

double NNfunction_sLg::synapse0x26aea30() {
   return (neuron0x268e760()*-0.110526);
}

double NNfunction_sLg::synapse0x26aea70() {
   return (neuron0x268f130()*-0.199033);
}

double NNfunction_sLg::synapse0x26aeab0() {
   return (neuron0x268fb00()*0.440549);
}

double NNfunction_sLg::synapse0x26aeaf0() {
   return (neuron0x26a2140()*0.202374);
}

double NNfunction_sLg::synapse0x26aeb30() {
   return (neuron0x26a29f0()*-0.453051);
}

double NNfunction_sLg::synapse0x26aeb70() {
   return (neuron0x26a33c0()*0.337121);
}

double NNfunction_sLg::synapse0x26aebb0() {
   return (neuron0x26a3d90()*-0.148444);
}

double NNfunction_sLg::synapse0x26aee10() {
   return (neuron0x26aaf90()*-1.52013);
}

double NNfunction_sLg::synapse0x26aee50() {
   return (neuron0x26ab330()*9.66124);
}

double NNfunction_sLg::synapse0x26aee90() {
   return (neuron0x26ab7d0()*-5.71457);
}

double NNfunction_sLg::synapse0x26aeed0() {
   return (neuron0x26ac930()*-6.53658);
}

double NNfunction_sLg::synapse0x26aef10() {
   return (neuron0x26ada90()*-0.561207);
}

