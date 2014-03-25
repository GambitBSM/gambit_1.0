#include "NNfunction_cLg.h"
#include <cmath>

double NNfunction_cLg::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4938)/15.3042;
   input1 = (in1 - -0.408355)/1157.8;
   input2 = (in2 - 662.09)/623.679;
   input3 = (in3 - -41.8866)/773.436;
   input4 = (in4 - 1051.46)/955.6;
   input5 = (in5 - 895.518)/950.404;
   input6 = (in6 - 901.955)/948.13;
   input7 = (in7 - 925.653)/931.981;
   input8 = (in8 - 926.916)/975.92;
   input9 = (in9 - 911.112)/961.832;
   input10 = (in10 - 981.919)/954.085;
   input11 = (in11 - 724.435)/866.906;
   input12 = (in12 - 400.334)/421.629;
   input13 = (in13 - 498.674)/509.564;
   input14 = (in14 - 722.392)/815.174;
   input15 = (in15 - 720.921)/812.034;
   input16 = (in16 - 540.309)/566.268;
   input17 = (in17 - 761.835)/902.267;
   input18 = (in18 - 760.974)/906.682;
   input19 = (in19 - 804.489)/876.035;
   input20 = (in20 - -5.02119)/488.942;
   input21 = (in21 - -1.97035)/1148.46;
   input22 = (in22 - -2.64459)/1203.32;
   input23 = (in23 - -208.945)/611.162;
   switch(index) {
     case 0:
         return neuron0x266abf0();
     default:
         return 0.;
   }
}

double NNfunction_cLg::Value(int index, double* input) {
   input0 = (input[0] - 23.4938)/15.3042;
   input1 = (input[1] - -0.408355)/1157.8;
   input2 = (input[2] - 662.09)/623.679;
   input3 = (input[3] - -41.8866)/773.436;
   input4 = (input[4] - 1051.46)/955.6;
   input5 = (input[5] - 895.518)/950.404;
   input6 = (input[6] - 901.955)/948.13;
   input7 = (input[7] - 925.653)/931.981;
   input8 = (input[8] - 926.916)/975.92;
   input9 = (input[9] - 911.112)/961.832;
   input10 = (input[10] - 981.919)/954.085;
   input11 = (input[11] - 724.435)/866.906;
   input12 = (input[12] - 400.334)/421.629;
   input13 = (input[13] - 498.674)/509.564;
   input14 = (input[14] - 722.392)/815.174;
   input15 = (input[15] - 720.921)/812.034;
   input16 = (input[16] - 540.309)/566.268;
   input17 = (input[17] - 761.835)/902.267;
   input18 = (input[18] - 760.974)/906.682;
   input19 = (input[19] - 804.489)/876.035;
   input20 = (input[20] - -5.02119)/488.942;
   input21 = (input[21] - -1.97035)/1148.46;
   input22 = (input[22] - -2.64459)/1203.32;
   input23 = (input[23] - -208.945)/611.162;
   switch(index) {
     case 0:
         return neuron0x266abf0();
     default:
         return 0.;
   }
}

double NNfunction_cLg::neuron0x2636ce0() {
   return input0;
}

double NNfunction_cLg::neuron0x2637020() {
   return input1;
}

double NNfunction_cLg::neuron0x2637360() {
   return input2;
}

double NNfunction_cLg::neuron0x26376a0() {
   return input3;
}

double NNfunction_cLg::neuron0x26379e0() {
   return input4;
}

double NNfunction_cLg::neuron0x2637d20() {
   return input5;
}

double NNfunction_cLg::neuron0x2638060() {
   return input6;
}

double NNfunction_cLg::neuron0x26383a0() {
   return input7;
}

double NNfunction_cLg::neuron0x26386e0() {
   return input8;
}

double NNfunction_cLg::neuron0x2638a20() {
   return input9;
}

double NNfunction_cLg::neuron0x2638d60() {
   return input10;
}

double NNfunction_cLg::neuron0x26390a0() {
   return input11;
}

double NNfunction_cLg::neuron0x26393e0() {
   return input12;
}

double NNfunction_cLg::neuron0x2639720() {
   return input13;
}

double NNfunction_cLg::neuron0x2639a60() {
   return input14;
}

double NNfunction_cLg::neuron0x2639da0() {
   return input15;
}

double NNfunction_cLg::neuron0x263a0e0() {
   return input16;
}

double NNfunction_cLg::neuron0x263a640() {
   return input17;
}

double NNfunction_cLg::neuron0x263a860() {
   return input18;
}

double NNfunction_cLg::neuron0x263aba0() {
   return input19;
}

double NNfunction_cLg::neuron0x263aee0() {
   return input20;
}

double NNfunction_cLg::neuron0x263b220() {
   return input21;
}

double NNfunction_cLg::neuron0x263b560() {
   return input22;
}

double NNfunction_cLg::neuron0x263b8a0() {
   return input23;
}

double NNfunction_cLg::input0x263bd10() {
   double input = 0.378301;
   input += synapse0x2636ba0();
   input += synapse0x2636be0();
   input += synapse0x263bfc0();
   input += synapse0x263c000();
   input += synapse0x263c040();
   input += synapse0x263c080();
   input += synapse0x263c0c0();
   input += synapse0x263c100();
   input += synapse0x263c140();
   input += synapse0x263c180();
   input += synapse0x263c1c0();
   input += synapse0x263c200();
   input += synapse0x263c240();
   input += synapse0x263c280();
   input += synapse0x263c2c0();
   input += synapse0x263c300();
   input += synapse0x2636b10();
   input += synapse0x2636b50();
   input += synapse0x23e8790();
   input += synapse0x23e87d0();
   input += synapse0x263c560();
   input += synapse0x263c5a0();
   input += synapse0x263c5e0();
   input += synapse0x263c620();
   return input;
}

double NNfunction_cLg::neuron0x263bd10() {
   double input = input0x263bd10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x263c660() {
   double input = 1.00387;
   input += synapse0x263c9a0();
   input += synapse0x263c9e0();
   input += synapse0x263ca20();
   input += synapse0x263ca60();
   input += synapse0x263caa0();
   input += synapse0x263cae0();
   input += synapse0x263cb20();
   input += synapse0x263cb60();
   input += synapse0x263cba0();
   input += synapse0x263c450();
   input += synapse0x263c490();
   input += synapse0x263c4d0();
   input += synapse0x263c510();
   input += synapse0x263cdf0();
   input += synapse0x263ce30();
   input += synapse0x263ce70();
   input += synapse0x263c7f0();
   input += synapse0x263c830();
   input += synapse0x263cfc0();
   input += synapse0x263d000();
   input += synapse0x263d040();
   input += synapse0x263d080();
   input += synapse0x263d0c0();
   input += synapse0x263d100();
   return input;
}

double NNfunction_cLg::neuron0x263c660() {
   double input = input0x263c660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x263d140() {
   double input = -0.452644;
   input += synapse0x263d480();
   input += synapse0x263d4c0();
   input += synapse0x263d500();
   input += synapse0x263d540();
   input += synapse0x263d580();
   input += synapse0x263d5c0();
   input += synapse0x263d600();
   input += synapse0x263d640();
   input += synapse0x263d680();
   input += synapse0x263d6c0();
   input += synapse0x263d700();
   input += synapse0x263d740();
   input += synapse0x263d780();
   input += synapse0x263d7c0();
   input += synapse0x263d800();
   input += synapse0x263d840();
   input += synapse0x263d2d0();
   input += synapse0x263d310();
   input += synapse0x23e8bc0();
   input += synapse0x23f62e0();
   input += synapse0x23f6320();
   input += synapse0x2625d70();
   input += synapse0x2625db0();
   input += synapse0x2625df0();
   return input;
}

double NNfunction_cLg::neuron0x263d140() {
   double input = input0x263d140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x263cbe0() {
   double input = -0.0999832;
   input += synapse0x23f6b80();
   input += synapse0x263cd70();
   input += synapse0x263cdb0();
   input += synapse0x263d990();
   input += synapse0x263d9d0();
   input += synapse0x263da10();
   input += synapse0x263da50();
   input += synapse0x263da90();
   input += synapse0x263dad0();
   input += synapse0x263db10();
   input += synapse0x263db50();
   input += synapse0x263db90();
   input += synapse0x263dbd0();
   input += synapse0x263dc10();
   input += synapse0x263dc50();
   input += synapse0x263dc90();
   input += synapse0x2636c20();
   input += synapse0x2636c60();
   input += synapse0x2636ca0();
   input += synapse0x263dde0();
   input += synapse0x263de20();
   input += synapse0x263de60();
   input += synapse0x263dea0();
   input += synapse0x263dee0();
   return input;
}

double NNfunction_cLg::neuron0x263cbe0() {
   double input = input0x263cbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x263df20() {
   double input = 0.385924;
   input += synapse0x263e260();
   input += synapse0x263e2a0();
   input += synapse0x263e2e0();
   input += synapse0x263e320();
   input += synapse0x263e360();
   input += synapse0x263e3a0();
   input += synapse0x263e3e0();
   input += synapse0x263e420();
   input += synapse0x263e460();
   input += synapse0x263e4a0();
   input += synapse0x263e4e0();
   input += synapse0x263e520();
   input += synapse0x263e560();
   input += synapse0x263e5a0();
   input += synapse0x263e5e0();
   input += synapse0x263e620();
   input += synapse0x263e0b0();
   input += synapse0x263e0f0();
   input += synapse0x263e770();
   input += synapse0x263e7b0();
   input += synapse0x263e7f0();
   input += synapse0x263e830();
   input += synapse0x263e870();
   input += synapse0x263e8b0();
   return input;
}

double NNfunction_cLg::neuron0x263df20() {
   double input = input0x263df20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x263e8f0() {
   double input = 0.0771564;
   input += synapse0x263ec30();
   input += synapse0x263ec70();
   input += synapse0x263ecb0();
   input += synapse0x263ecf0();
   input += synapse0x263ed30();
   input += synapse0x263ed70();
   input += synapse0x263edb0();
   input += synapse0x263edf0();
   input += synapse0x263ee30();
   input += synapse0x23f6650();
   input += synapse0x23f6690();
   input += synapse0x23f66d0();
   input += synapse0x23f6710();
   input += synapse0x23f6750();
   input += synapse0x23f6790();
   input += synapse0x23f67d0();
   input += synapse0x263ea80();
   input += synapse0x263eac0();
   input += synapse0x23f6920();
   input += synapse0x23f6960();
   input += synapse0x23f69a0();
   input += synapse0x23f69e0();
   input += synapse0x23f6a20();
   input += synapse0x263f680();
   return input;
}

double NNfunction_cLg::neuron0x263e8f0() {
   double input = input0x263e8f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x263f6c0() {
   double input = 0.0894488;
   input += synapse0x263fa00();
   input += synapse0x263fa40();
   input += synapse0x263fa80();
   input += synapse0x263fac0();
   input += synapse0x263fb00();
   input += synapse0x263fb40();
   input += synapse0x263fb80();
   input += synapse0x263fbc0();
   input += synapse0x263fc00();
   input += synapse0x263fc40();
   input += synapse0x263fc80();
   input += synapse0x263fcc0();
   input += synapse0x263fd00();
   input += synapse0x263fd40();
   input += synapse0x263fd80();
   input += synapse0x263fdc0();
   input += synapse0x263f850();
   input += synapse0x263f890();
   input += synapse0x263ff10();
   input += synapse0x263ff50();
   input += synapse0x263ff90();
   input += synapse0x263ffd0();
   input += synapse0x2640010();
   input += synapse0x2640050();
   return input;
}

double NNfunction_cLg::neuron0x263f6c0() {
   double input = input0x263f6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2640090() {
   double input = 1.67428;
   input += synapse0x26403d0();
   input += synapse0x2640410();
   input += synapse0x2640450();
   input += synapse0x2640490();
   input += synapse0x26404d0();
   input += synapse0x2640510();
   input += synapse0x2640550();
   input += synapse0x2640590();
   input += synapse0x26405d0();
   input += synapse0x2640610();
   input += synapse0x2640650();
   input += synapse0x2640690();
   input += synapse0x26406d0();
   input += synapse0x2640710();
   input += synapse0x2640750();
   input += synapse0x2640790();
   input += synapse0x2640220();
   input += synapse0x2640260();
   input += synapse0x26408e0();
   input += synapse0x2640920();
   input += synapse0x2640960();
   input += synapse0x26409a0();
   input += synapse0x26409e0();
   input += synapse0x2640a20();
   return input;
}

double NNfunction_cLg::neuron0x2640090() {
   double input = input0x2640090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2640a60() {
   double input = -1.60713;
   input += synapse0x263a530();
   input += synapse0x263a570();
   input += synapse0x263a5b0();
   input += synapse0x263a5f0();
   input += synapse0x2640fb0();
   input += synapse0x2640ff0();
   input += synapse0x2641030();
   input += synapse0x2641070();
   input += synapse0x26410b0();
   input += synapse0x26410f0();
   input += synapse0x2641130();
   input += synapse0x2641170();
   input += synapse0x26411b0();
   input += synapse0x26411f0();
   input += synapse0x2641230();
   input += synapse0x2641270();
   input += synapse0x2640bf0();
   input += synapse0x2640c30();
   input += synapse0x26413c0();
   input += synapse0x2641400();
   input += synapse0x2641440();
   input += synapse0x2641480();
   input += synapse0x26414c0();
   input += synapse0x2641500();
   return input;
}

double NNfunction_cLg::neuron0x2640a60() {
   double input = input0x2640a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2641540() {
   double input = -0.561018;
   input += synapse0x2641880();
   input += synapse0x26418c0();
   input += synapse0x2641900();
   input += synapse0x2641940();
   input += synapse0x2641980();
   input += synapse0x26419c0();
   input += synapse0x2641a00();
   input += synapse0x2641a40();
   input += synapse0x2641a80();
   input += synapse0x2641ac0();
   input += synapse0x2641b00();
   input += synapse0x2641b40();
   input += synapse0x2641b80();
   input += synapse0x2641bc0();
   input += synapse0x2641c00();
   input += synapse0x2641c40();
   input += synapse0x26416d0();
   input += synapse0x2641710();
   input += synapse0x2641d90();
   input += synapse0x2641dd0();
   input += synapse0x2641e10();
   input += synapse0x2641e50();
   input += synapse0x2641e90();
   input += synapse0x2641ed0();
   return input;
}

double NNfunction_cLg::neuron0x2641540() {
   double input = input0x2641540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2641f10() {
   double input = 0.545982;
   input += synapse0x2642250();
   input += synapse0x2642290();
   input += synapse0x26422d0();
   input += synapse0x2642310();
   input += synapse0x2642350();
   input += synapse0x2642390();
   input += synapse0x26423d0();
   input += synapse0x2642410();
   input += synapse0x2642450();
   input += synapse0x2642490();
   input += synapse0x26424d0();
   input += synapse0x2642510();
   input += synapse0x2642550();
   input += synapse0x2642590();
   input += synapse0x26425d0();
   input += synapse0x2642610();
   input += synapse0x26420a0();
   input += synapse0x26420e0();
   input += synapse0x263ee70();
   input += synapse0x263eeb0();
   input += synapse0x263eef0();
   input += synapse0x263ef30();
   input += synapse0x263ef70();
   input += synapse0x263efb0();
   return input;
}

double NNfunction_cLg::neuron0x2641f10() {
   double input = input0x2641f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x263eff0() {
   double input = -2.63808;
   input += synapse0x263f330();
   input += synapse0x263f370();
   input += synapse0x263f3b0();
   input += synapse0x263f3f0();
   input += synapse0x263f430();
   input += synapse0x263f470();
   input += synapse0x263f4b0();
   input += synapse0x263f4f0();
   input += synapse0x263f530();
   input += synapse0x263f570();
   input += synapse0x263f5b0();
   input += synapse0x263f5f0();
   input += synapse0x263f630();
   input += synapse0x2643770();
   input += synapse0x26437b0();
   input += synapse0x26437f0();
   input += synapse0x263f180();
   input += synapse0x263f1c0();
   input += synapse0x2643940();
   input += synapse0x2643980();
   input += synapse0x26439c0();
   input += synapse0x2643a00();
   input += synapse0x2643a40();
   input += synapse0x2643a80();
   return input;
}

double NNfunction_cLg::neuron0x263eff0() {
   double input = input0x263eff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2643ac0() {
   double input = -1.63726;
   input += synapse0x2643e00();
   input += synapse0x2643e40();
   input += synapse0x2643e80();
   input += synapse0x2643ec0();
   input += synapse0x2643f00();
   input += synapse0x2643f40();
   input += synapse0x2643f80();
   input += synapse0x2643fc0();
   input += synapse0x2644000();
   input += synapse0x2644040();
   input += synapse0x2644080();
   input += synapse0x26440c0();
   input += synapse0x2644100();
   input += synapse0x2644140();
   input += synapse0x2644180();
   input += synapse0x26441c0();
   input += synapse0x2643c50();
   input += synapse0x2643c90();
   input += synapse0x2644310();
   input += synapse0x2644350();
   input += synapse0x2644390();
   input += synapse0x26443d0();
   input += synapse0x2644410();
   input += synapse0x2644450();
   return input;
}

double NNfunction_cLg::neuron0x2643ac0() {
   double input = input0x2643ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2644490() {
   double input = 0.924832;
   input += synapse0x26447d0();
   input += synapse0x2644810();
   input += synapse0x2644850();
   input += synapse0x2644890();
   input += synapse0x26448d0();
   input += synapse0x2644910();
   input += synapse0x2644950();
   input += synapse0x2644990();
   input += synapse0x26449d0();
   input += synapse0x2644a10();
   input += synapse0x2644a50();
   input += synapse0x2644a90();
   input += synapse0x2644ad0();
   input += synapse0x2644b10();
   input += synapse0x2644b50();
   input += synapse0x2644b90();
   input += synapse0x2644620();
   input += synapse0x2644660();
   input += synapse0x2644ce0();
   input += synapse0x2644d20();
   input += synapse0x2644d60();
   input += synapse0x2644da0();
   input += synapse0x2644de0();
   input += synapse0x2644e20();
   return input;
}

double NNfunction_cLg::neuron0x2644490() {
   double input = input0x2644490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2644e60() {
   double input = -0.283404;
   input += synapse0x26451a0();
   input += synapse0x26451e0();
   input += synapse0x2645220();
   input += synapse0x2645260();
   input += synapse0x26452a0();
   input += synapse0x26452e0();
   input += synapse0x2645320();
   input += synapse0x2645360();
   input += synapse0x26453a0();
   input += synapse0x26453e0();
   input += synapse0x2645420();
   input += synapse0x2645460();
   input += synapse0x26454a0();
   input += synapse0x26454e0();
   input += synapse0x2645520();
   input += synapse0x2645560();
   input += synapse0x2644ff0();
   input += synapse0x2645030();
   input += synapse0x26456b0();
   input += synapse0x26456f0();
   input += synapse0x2645730();
   input += synapse0x2645770();
   input += synapse0x26457b0();
   input += synapse0x26457f0();
   return input;
}

double NNfunction_cLg::neuron0x2644e60() {
   double input = input0x2644e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2645830() {
   double input = 1.0926;
   input += synapse0x2645b70();
   input += synapse0x2636f00();
   input += synapse0x2636f40();
   input += synapse0x2637240();
   input += synapse0x2637280();
   input += synapse0x2637580();
   input += synapse0x26375c0();
   input += synapse0x26378c0();
   input += synapse0x2637900();
   input += synapse0x2637c00();
   input += synapse0x2637c40();
   input += synapse0x2637f40();
   input += synapse0x2637f80();
   input += synapse0x2638280();
   input += synapse0x26382c0();
   input += synapse0x26385c0();
   input += synapse0x2638600();
   input += synapse0x2638900();
   input += synapse0x2638940();
   input += synapse0x2638c40();
   input += synapse0x2638c80();
   input += synapse0x2638f80();
   input += synapse0x2638fc0();
   input += synapse0x26392c0();
   return input;
}

double NNfunction_cLg::neuron0x2645830() {
   double input = input0x2645830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2647640() {
   double input = 0.629243;
   input += synapse0x2639300();
   input += synapse0x2639fc0();
   input += synapse0x263a000();
   input += synapse0x26459c0();
   input += synapse0x2645a00();
   input += synapse0x263a300();
   input += synapse0x263a340();
   input += synapse0x23e8670();
   input += synapse0x23e86b0();
   input += synapse0x263aa80();
   input += synapse0x263aac0();
   input += synapse0x263adc0();
   input += synapse0x263ae00();
   input += synapse0x263b100();
   input += synapse0x263b140();
   input += synapse0x263b440();
   input += synapse0x263b480();
   input += synapse0x263b780();
   input += synapse0x263b7c0();
   input += synapse0x263bac0();
   input += synapse0x263bb00();
   input += synapse0x2639600();
   input += synapse0x2639640();
   input += synapse0x26478e0();
   return input;
}

double NNfunction_cLg::neuron0x2647640() {
   double input = input0x2647640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2647920() {
   double input = 0.0608032;
   input += synapse0x2647c60();
   input += synapse0x2647ca0();
   input += synapse0x2647ce0();
   input += synapse0x2647d20();
   input += synapse0x2647d60();
   input += synapse0x2647da0();
   input += synapse0x2647de0();
   input += synapse0x2647e20();
   input += synapse0x2647e60();
   input += synapse0x2647ea0();
   input += synapse0x2647ee0();
   input += synapse0x2647f20();
   input += synapse0x2647f60();
   input += synapse0x2647fa0();
   input += synapse0x2647fe0();
   input += synapse0x2648020();
   input += synapse0x2647ab0();
   input += synapse0x2647af0();
   input += synapse0x2648170();
   input += synapse0x26481b0();
   input += synapse0x26481f0();
   input += synapse0x2648230();
   input += synapse0x2648270();
   input += synapse0x26482b0();
   return input;
}

double NNfunction_cLg::neuron0x2647920() {
   double input = input0x2647920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x26482f0() {
   double input = 0.0618613;
   input += synapse0x2648630();
   input += synapse0x2648670();
   input += synapse0x26486b0();
   input += synapse0x26486f0();
   input += synapse0x2648730();
   input += synapse0x2648770();
   input += synapse0x26487b0();
   input += synapse0x26487f0();
   input += synapse0x2648830();
   input += synapse0x2648870();
   input += synapse0x26488b0();
   input += synapse0x26488f0();
   input += synapse0x2648930();
   input += synapse0x2648970();
   input += synapse0x26489b0();
   input += synapse0x26489f0();
   input += synapse0x2648480();
   input += synapse0x26484c0();
   input += synapse0x2648b40();
   input += synapse0x2648b80();
   input += synapse0x2648bc0();
   input += synapse0x2648c00();
   input += synapse0x2648c40();
   input += synapse0x2648c80();
   return input;
}

double NNfunction_cLg::neuron0x26482f0() {
   double input = input0x26482f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2648cc0() {
   double input = 2.62421;
   input += synapse0x2649000();
   input += synapse0x2649040();
   input += synapse0x2649080();
   input += synapse0x26490c0();
   input += synapse0x2649100();
   input += synapse0x2649140();
   input += synapse0x2649180();
   input += synapse0x26491c0();
   input += synapse0x2649200();
   input += synapse0x2649240();
   input += synapse0x2649280();
   input += synapse0x26492c0();
   input += synapse0x2649300();
   input += synapse0x2649340();
   input += synapse0x2649380();
   input += synapse0x26493c0();
   input += synapse0x2648e50();
   input += synapse0x2648e90();
   input += synapse0x2649510();
   input += synapse0x2649550();
   input += synapse0x2649590();
   input += synapse0x26495d0();
   input += synapse0x2649610();
   input += synapse0x2649650();
   return input;
}

double NNfunction_cLg::neuron0x2648cc0() {
   double input = input0x2648cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2649690() {
   double input = -0.0589471;
   input += synapse0x26499d0();
   input += synapse0x2649a10();
   input += synapse0x2649a50();
   input += synapse0x2649a90();
   input += synapse0x2649ad0();
   input += synapse0x2649b10();
   input += synapse0x2649b50();
   input += synapse0x2649b90();
   input += synapse0x2649bd0();
   input += synapse0x2649c10();
   input += synapse0x2649c50();
   input += synapse0x2649c90();
   input += synapse0x2649cd0();
   input += synapse0x2649d10();
   input += synapse0x2649d50();
   input += synapse0x2649d90();
   input += synapse0x2649820();
   input += synapse0x2649860();
   input += synapse0x2649ee0();
   input += synapse0x2649f20();
   input += synapse0x2649f60();
   input += synapse0x2649fa0();
   input += synapse0x2649fe0();
   input += synapse0x264a020();
   return input;
}

double NNfunction_cLg::neuron0x2649690() {
   double input = input0x2649690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x264a060() {
   double input = 0.797312;
   input += synapse0x264a3a0();
   input += synapse0x264a3e0();
   input += synapse0x264a420();
   input += synapse0x264a460();
   input += synapse0x264a4a0();
   input += synapse0x264a4e0();
   input += synapse0x264a520();
   input += synapse0x264a560();
   input += synapse0x264a5a0();
   input += synapse0x2642760();
   input += synapse0x26427a0();
   input += synapse0x26427e0();
   input += synapse0x2642820();
   input += synapse0x2642860();
   input += synapse0x26428a0();
   input += synapse0x26428e0();
   input += synapse0x264a1f0();
   input += synapse0x264a230();
   input += synapse0x2642a30();
   input += synapse0x2642a70();
   input += synapse0x2642ab0();
   input += synapse0x2642af0();
   input += synapse0x2642b30();
   input += synapse0x2642b70();
   return input;
}

double NNfunction_cLg::neuron0x264a060() {
   double input = input0x264a060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2642bb0() {
   double input = 1.83157;
   input += synapse0x2642ef0();
   input += synapse0x2642f30();
   input += synapse0x2642f70();
   input += synapse0x2642fb0();
   input += synapse0x2642ff0();
   input += synapse0x2643030();
   input += synapse0x2643070();
   input += synapse0x26430b0();
   input += synapse0x26430f0();
   input += synapse0x2643130();
   input += synapse0x2643170();
   input += synapse0x26431b0();
   input += synapse0x26431f0();
   input += synapse0x2643230();
   input += synapse0x2643270();
   input += synapse0x26432b0();
   input += synapse0x2642d40();
   input += synapse0x2642d80();
   input += synapse0x2643400();
   input += synapse0x2643440();
   input += synapse0x2643480();
   input += synapse0x26434c0();
   input += synapse0x2643500();
   input += synapse0x2643540();
   return input;
}

double NNfunction_cLg::neuron0x2642bb0() {
   double input = input0x2642bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2643580() {
   double input = -1.33417;
   input += synapse0x2643710();
   input += synapse0x264c7a0();
   input += synapse0x264c7e0();
   input += synapse0x264c820();
   input += synapse0x264c860();
   input += synapse0x264c8a0();
   input += synapse0x264c8e0();
   input += synapse0x264c920();
   input += synapse0x264c960();
   input += synapse0x264c9a0();
   input += synapse0x264c9e0();
   input += synapse0x264ca20();
   input += synapse0x264ca60();
   input += synapse0x264caa0();
   input += synapse0x264cae0();
   input += synapse0x264cb20();
   input += synapse0x264c5f0();
   input += synapse0x264c630();
   input += synapse0x264cc70();
   input += synapse0x264ccb0();
   input += synapse0x264ccf0();
   input += synapse0x264cd30();
   input += synapse0x264cd70();
   input += synapse0x264cdb0();
   return input;
}

double NNfunction_cLg::neuron0x2643580() {
   double input = input0x2643580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x264cdf0() {
   double input = 0.145941;
   input += synapse0x264d130();
   input += synapse0x264d170();
   input += synapse0x264d1b0();
   input += synapse0x264d1f0();
   input += synapse0x264d230();
   input += synapse0x264d270();
   input += synapse0x264d2b0();
   input += synapse0x264d2f0();
   input += synapse0x264d330();
   input += synapse0x264d370();
   input += synapse0x264d3b0();
   input += synapse0x264d3f0();
   input += synapse0x264d430();
   input += synapse0x264d470();
   input += synapse0x264d4b0();
   input += synapse0x264d4f0();
   input += synapse0x264cf80();
   input += synapse0x264cfc0();
   input += synapse0x264d640();
   input += synapse0x264d680();
   input += synapse0x264d6c0();
   input += synapse0x264d700();
   input += synapse0x264d740();
   input += synapse0x264d780();
   return input;
}

double NNfunction_cLg::neuron0x264cdf0() {
   double input = input0x264cdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x264d7c0() {
   double input = -0.146766;
   input += synapse0x264db00();
   input += synapse0x264db40();
   input += synapse0x264db80();
   input += synapse0x264dbc0();
   input += synapse0x264dc00();
   input += synapse0x264dc40();
   input += synapse0x264dc80();
   input += synapse0x264dcc0();
   input += synapse0x264dd00();
   input += synapse0x264dd40();
   input += synapse0x264dd80();
   input += synapse0x264ddc0();
   input += synapse0x264de00();
   input += synapse0x264de40();
   input += synapse0x264de80();
   input += synapse0x264dec0();
   input += synapse0x264d950();
   input += synapse0x264d990();
   input += synapse0x264e010();
   input += synapse0x264e050();
   input += synapse0x264e090();
   input += synapse0x264e0d0();
   input += synapse0x264e110();
   input += synapse0x264e150();
   return input;
}

double NNfunction_cLg::neuron0x264d7c0() {
   double input = input0x264d7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x264e190() {
   double input = -0.0704085;
   input += synapse0x264e4d0();
   input += synapse0x264e510();
   input += synapse0x264e550();
   input += synapse0x264e590();
   input += synapse0x264e5d0();
   input += synapse0x264e610();
   input += synapse0x264e650();
   input += synapse0x264e690();
   input += synapse0x264e6d0();
   input += synapse0x264e710();
   input += synapse0x264e750();
   input += synapse0x264e790();
   input += synapse0x264e7d0();
   input += synapse0x264e810();
   input += synapse0x264e850();
   input += synapse0x264e890();
   input += synapse0x264e320();
   input += synapse0x264e360();
   input += synapse0x264e9e0();
   input += synapse0x264ea20();
   input += synapse0x264ea60();
   input += synapse0x264eaa0();
   input += synapse0x264eae0();
   input += synapse0x264eb20();
   return input;
}

double NNfunction_cLg::neuron0x264e190() {
   double input = input0x264e190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x264eb60() {
   double input = -0.922;
   input += synapse0x264eea0();
   input += synapse0x264eee0();
   input += synapse0x264ef20();
   input += synapse0x264ef60();
   input += synapse0x264efa0();
   input += synapse0x264efe0();
   input += synapse0x264f020();
   input += synapse0x264f060();
   input += synapse0x264f0a0();
   input += synapse0x264f0e0();
   input += synapse0x264f120();
   input += synapse0x264f160();
   input += synapse0x264f1a0();
   input += synapse0x264f1e0();
   input += synapse0x264f220();
   input += synapse0x264f260();
   input += synapse0x264ecf0();
   input += synapse0x264ed30();
   input += synapse0x264f3b0();
   input += synapse0x264f3f0();
   input += synapse0x264f430();
   input += synapse0x264f470();
   input += synapse0x264f4b0();
   input += synapse0x264f4f0();
   return input;
}

double NNfunction_cLg::neuron0x264eb60() {
   double input = input0x264eb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x264f530() {
   double input = 0.840479;
   input += synapse0x264f870();
   input += synapse0x264f8b0();
   input += synapse0x264f8f0();
   input += synapse0x264f930();
   input += synapse0x264f970();
   input += synapse0x264f9b0();
   input += synapse0x264f9f0();
   input += synapse0x264fa30();
   input += synapse0x264fa70();
   input += synapse0x264fab0();
   input += synapse0x264faf0();
   input += synapse0x264fb30();
   input += synapse0x264fb70();
   input += synapse0x264fbb0();
   input += synapse0x264fbf0();
   input += synapse0x264fc30();
   input += synapse0x264f6c0();
   input += synapse0x264f700();
   input += synapse0x264fd80();
   input += synapse0x264fdc0();
   input += synapse0x264fe00();
   input += synapse0x264fe40();
   input += synapse0x264fe80();
   input += synapse0x264fec0();
   return input;
}

double NNfunction_cLg::neuron0x264f530() {
   double input = input0x264f530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x264ff00() {
   double input = -0.054936;
   input += synapse0x2650240();
   input += synapse0x2650280();
   input += synapse0x26502c0();
   input += synapse0x2650300();
   input += synapse0x2650340();
   input += synapse0x2650380();
   input += synapse0x26503c0();
   input += synapse0x2650400();
   input += synapse0x2650440();
   input += synapse0x2650480();
   input += synapse0x26504c0();
   input += synapse0x2650500();
   input += synapse0x2650540();
   input += synapse0x2650580();
   input += synapse0x26505c0();
   input += synapse0x2650600();
   input += synapse0x2650090();
   input += synapse0x26500d0();
   input += synapse0x2650750();
   input += synapse0x2650790();
   input += synapse0x26507d0();
   input += synapse0x2650810();
   input += synapse0x2650850();
   input += synapse0x2650890();
   return input;
}

double NNfunction_cLg::neuron0x264ff00() {
   double input = input0x264ff00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x26508d0() {
   double input = 1.42871;
   input += synapse0x2650c10();
   input += synapse0x2650c50();
   input += synapse0x2650c90();
   input += synapse0x2650cd0();
   input += synapse0x2650d10();
   input += synapse0x2650d50();
   input += synapse0x2650d90();
   input += synapse0x2650dd0();
   input += synapse0x2650e10();
   input += synapse0x2650e50();
   input += synapse0x2650e90();
   input += synapse0x2650ed0();
   input += synapse0x2650f10();
   input += synapse0x2650f50();
   input += synapse0x2650f90();
   input += synapse0x2650fd0();
   input += synapse0x2650a60();
   input += synapse0x2650aa0();
   input += synapse0x2651120();
   input += synapse0x2651160();
   input += synapse0x26511a0();
   input += synapse0x26511e0();
   input += synapse0x2651220();
   input += synapse0x2651260();
   return input;
}

double NNfunction_cLg::neuron0x26508d0() {
   double input = input0x26508d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x26512a0() {
   double input = 0.562456;
   input += synapse0x26515e0();
   input += synapse0x2645bb0();
   input += synapse0x2645bf0();
   input += synapse0x2645c30();
   input += synapse0x2645e80();
   input += synapse0x2645ec0();
   input += synapse0x2645f00();
   input += synapse0x2646150();
   input += synapse0x2646190();
   input += synapse0x26463e0();
   input += synapse0x2646420();
   input += synapse0x2646460();
   input += synapse0x26466b0();
   input += synapse0x26466f0();
   input += synapse0x2646940();
   input += synapse0x2646980();
   input += synapse0x2651430();
   input += synapse0x2651470();
   input += synapse0x2646ad0();
   input += synapse0x2646fe0();
   input += synapse0x2647020();
   input += synapse0x2647060();
   input += synapse0x26472b0();
   input += synapse0x26472f0();
   return input;
}

double NNfunction_cLg::neuron0x26512a0() {
   double input = input0x26512a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2647330() {
   double input = 0.806763;
   input += synapse0x2646ba0();
   input += synapse0x2646be0();
   input += synapse0x2646c20();
   input += synapse0x2646c60();
   input += synapse0x26475e0();
   input += synapse0x2653930();
   input += synapse0x2653970();
   input += synapse0x26539b0();
   input += synapse0x26539f0();
   input += synapse0x2653a30();
   input += synapse0x2653a70();
   input += synapse0x2653ab0();
   input += synapse0x2653af0();
   input += synapse0x2653b30();
   input += synapse0x2653b70();
   input += synapse0x2653bb0();
   input += synapse0x26474c0();
   input += synapse0x2647500();
   input += synapse0x2653d00();
   input += synapse0x2653d40();
   input += synapse0x2653d80();
   input += synapse0x2653dc0();
   input += synapse0x2653e00();
   input += synapse0x2653e40();
   return input;
}

double NNfunction_cLg::neuron0x2647330() {
   double input = input0x2647330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2653e80() {
   double input = -0.114306;
   input += synapse0x26541c0();
   input += synapse0x2654200();
   input += synapse0x2654240();
   input += synapse0x2654280();
   input += synapse0x26542c0();
   input += synapse0x2654300();
   input += synapse0x2654340();
   input += synapse0x2654380();
   input += synapse0x26543c0();
   input += synapse0x2654400();
   input += synapse0x2654440();
   input += synapse0x2654480();
   input += synapse0x26544c0();
   input += synapse0x2654500();
   input += synapse0x2654540();
   input += synapse0x2654580();
   input += synapse0x2654010();
   input += synapse0x2654050();
   input += synapse0x26546d0();
   input += synapse0x2654710();
   input += synapse0x2654750();
   input += synapse0x2654790();
   input += synapse0x26547d0();
   input += synapse0x2654810();
   return input;
}

double NNfunction_cLg::neuron0x2653e80() {
   double input = input0x2653e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2654850() {
   double input = 0.614906;
   input += synapse0x2654b90();
   input += synapse0x2654bd0();
   input += synapse0x2654c10();
   input += synapse0x2654c50();
   input += synapse0x2654c90();
   input += synapse0x2654cd0();
   input += synapse0x2654d10();
   input += synapse0x2654d50();
   input += synapse0x2654d90();
   input += synapse0x2654dd0();
   input += synapse0x2654e10();
   input += synapse0x2654e50();
   input += synapse0x2654e90();
   input += synapse0x2654ed0();
   input += synapse0x2654f10();
   input += synapse0x2654f50();
   input += synapse0x26549e0();
   input += synapse0x2654a20();
   input += synapse0x26550a0();
   input += synapse0x26550e0();
   input += synapse0x2655120();
   input += synapse0x2655160();
   input += synapse0x26551a0();
   input += synapse0x26551e0();
   return input;
}

double NNfunction_cLg::neuron0x2654850() {
   double input = input0x2654850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2655220() {
   double input = -0.50822;
   input += synapse0x2655560();
   input += synapse0x26555a0();
   input += synapse0x26555e0();
   input += synapse0x2655620();
   input += synapse0x2655660();
   input += synapse0x26556a0();
   input += synapse0x26556e0();
   input += synapse0x2655720();
   input += synapse0x2655760();
   input += synapse0x26557a0();
   input += synapse0x26557e0();
   input += synapse0x2655820();
   input += synapse0x2655860();
   input += synapse0x26558a0();
   input += synapse0x26558e0();
   input += synapse0x2655920();
   input += synapse0x26553b0();
   input += synapse0x26553f0();
   input += synapse0x2655a70();
   input += synapse0x2655ab0();
   input += synapse0x2655af0();
   input += synapse0x2655b30();
   input += synapse0x2655b70();
   input += synapse0x2655bb0();
   return input;
}

double NNfunction_cLg::neuron0x2655220() {
   double input = input0x2655220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2655bf0() {
   double input = -1.79924;
   input += synapse0x2655f30();
   input += synapse0x2655f70();
   input += synapse0x2655fb0();
   input += synapse0x2655ff0();
   input += synapse0x2656030();
   input += synapse0x2656070();
   input += synapse0x26560b0();
   input += synapse0x26560f0();
   input += synapse0x2656130();
   input += synapse0x2656170();
   input += synapse0x26561b0();
   input += synapse0x26561f0();
   input += synapse0x2656230();
   input += synapse0x2656270();
   input += synapse0x26562b0();
   input += synapse0x26562f0();
   input += synapse0x2655d80();
   input += synapse0x2655dc0();
   input += synapse0x2656440();
   input += synapse0x2656480();
   input += synapse0x26564c0();
   input += synapse0x2656500();
   input += synapse0x2656540();
   input += synapse0x2656580();
   return input;
}

double NNfunction_cLg::neuron0x2655bf0() {
   double input = input0x2655bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x26565c0() {
   double input = 1.0251;
   input += synapse0x2656900();
   input += synapse0x2656940();
   input += synapse0x2656980();
   input += synapse0x26569c0();
   input += synapse0x2656a00();
   input += synapse0x2656a40();
   input += synapse0x2656a80();
   input += synapse0x2656ac0();
   input += synapse0x2656b00();
   input += synapse0x2656b40();
   input += synapse0x2656b80();
   input += synapse0x2656bc0();
   input += synapse0x2656c00();
   input += synapse0x2656c40();
   input += synapse0x2656c80();
   input += synapse0x2656cc0();
   input += synapse0x2656750();
   input += synapse0x2656790();
   input += synapse0x2656e10();
   input += synapse0x2656e50();
   input += synapse0x2656e90();
   input += synapse0x2656ed0();
   input += synapse0x2656f10();
   input += synapse0x2656f50();
   return input;
}

double NNfunction_cLg::neuron0x26565c0() {
   double input = input0x26565c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2656f90() {
   double input = -1.35792;
   input += synapse0x26572d0();
   input += synapse0x2657310();
   input += synapse0x2657350();
   input += synapse0x2657390();
   input += synapse0x26573d0();
   input += synapse0x2657410();
   input += synapse0x2657450();
   input += synapse0x2657490();
   input += synapse0x26574d0();
   input += synapse0x2657510();
   input += synapse0x2657550();
   input += synapse0x2657590();
   input += synapse0x26575d0();
   input += synapse0x2657610();
   input += synapse0x2657650();
   input += synapse0x2657690();
   input += synapse0x2657120();
   input += synapse0x2657160();
   input += synapse0x26577e0();
   input += synapse0x2657820();
   input += synapse0x2657860();
   input += synapse0x26578a0();
   input += synapse0x26578e0();
   input += synapse0x2657920();
   return input;
}

double NNfunction_cLg::neuron0x2656f90() {
   double input = input0x2656f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2657960() {
   double input = -0.495823;
   input += synapse0x2657ca0();
   input += synapse0x2657ce0();
   input += synapse0x2657d20();
   input += synapse0x2657d60();
   input += synapse0x2657da0();
   input += synapse0x2657de0();
   input += synapse0x2657e20();
   input += synapse0x2657e60();
   input += synapse0x2657ea0();
   input += synapse0x2657ee0();
   input += synapse0x2657f20();
   input += synapse0x2657f60();
   input += synapse0x2657fa0();
   input += synapse0x2657fe0();
   input += synapse0x2658020();
   input += synapse0x2658060();
   input += synapse0x2657af0();
   input += synapse0x2657b30();
   input += synapse0x26581b0();
   input += synapse0x26581f0();
   input += synapse0x2658230();
   input += synapse0x2658270();
   input += synapse0x26582b0();
   input += synapse0x26582f0();
   return input;
}

double NNfunction_cLg::neuron0x2657960() {
   double input = input0x2657960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2658330() {
   double input = -2.47048;
   input += synapse0x2640da0();
   input += synapse0x2640de0();
   input += synapse0x2640e20();
   input += synapse0x2640e60();
   input += synapse0x2640ea0();
   input += synapse0x2640ee0();
   input += synapse0x2640f20();
   input += synapse0x2640f60();
   input += synapse0x2658a80();
   input += synapse0x2658ac0();
   input += synapse0x2658b00();
   input += synapse0x2658b40();
   input += synapse0x2658b80();
   input += synapse0x2658bc0();
   input += synapse0x2658c00();
   input += synapse0x2658c40();
   input += synapse0x26584c0();
   input += synapse0x2658500();
   input += synapse0x2658d90();
   input += synapse0x2658dd0();
   input += synapse0x2658e10();
   input += synapse0x2658e50();
   input += synapse0x2658e90();
   input += synapse0x2658ed0();
   return input;
}

double NNfunction_cLg::neuron0x2658330() {
   double input = input0x2658330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2658f10() {
   double input = 0.275368;
   input += synapse0x2659250();
   input += synapse0x2659290();
   input += synapse0x26592d0();
   input += synapse0x2659310();
   input += synapse0x2659350();
   input += synapse0x2659390();
   input += synapse0x26593d0();
   input += synapse0x2659410();
   input += synapse0x2659450();
   input += synapse0x2659490();
   input += synapse0x26594d0();
   input += synapse0x2659510();
   input += synapse0x2659550();
   input += synapse0x2659590();
   input += synapse0x26595d0();
   input += synapse0x2659610();
   input += synapse0x26590a0();
   input += synapse0x26590e0();
   input += synapse0x2659760();
   input += synapse0x26597a0();
   input += synapse0x26597e0();
   input += synapse0x2659820();
   input += synapse0x2659860();
   input += synapse0x26598a0();
   return input;
}

double NNfunction_cLg::neuron0x2658f10() {
   double input = input0x2658f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x26598e0() {
   double input = -0.366991;
   input += synapse0x2659c20();
   input += synapse0x2659c60();
   input += synapse0x2659ca0();
   input += synapse0x2659ce0();
   input += synapse0x2659d20();
   input += synapse0x2659d60();
   input += synapse0x2659da0();
   input += synapse0x2659de0();
   input += synapse0x2659e20();
   input += synapse0x2659e60();
   input += synapse0x2659ea0();
   input += synapse0x2659ee0();
   input += synapse0x2659f20();
   input += synapse0x2659f60();
   input += synapse0x2659fa0();
   input += synapse0x2659fe0();
   input += synapse0x2659a70();
   input += synapse0x2659ab0();
   input += synapse0x264a5e0();
   input += synapse0x264a620();
   input += synapse0x264a660();
   input += synapse0x264a6a0();
   input += synapse0x264a6e0();
   input += synapse0x264a720();
   return input;
}

double NNfunction_cLg::neuron0x26598e0() {
   double input = input0x26598e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x264a760() {
   double input = 2.68448;
   input += synapse0x264aaa0();
   input += synapse0x264aae0();
   input += synapse0x264ab20();
   input += synapse0x264ab60();
   input += synapse0x264aba0();
   input += synapse0x264abe0();
   input += synapse0x264ac20();
   input += synapse0x264ac60();
   input += synapse0x264aca0();
   input += synapse0x264ace0();
   input += synapse0x264ad20();
   input += synapse0x264ad60();
   input += synapse0x264ada0();
   input += synapse0x264ade0();
   input += synapse0x264ae20();
   input += synapse0x264ae60();
   input += synapse0x264a8f0();
   input += synapse0x264a930();
   input += synapse0x264afb0();
   input += synapse0x264aff0();
   input += synapse0x264b030();
   input += synapse0x264b070();
   input += synapse0x264b0b0();
   input += synapse0x264b0f0();
   return input;
}

double NNfunction_cLg::neuron0x264a760() {
   double input = input0x264a760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x264b130() {
   double input = 0.306833;
   input += synapse0x264b470();
   input += synapse0x264b4b0();
   input += synapse0x264b4f0();
   input += synapse0x264b530();
   input += synapse0x264b570();
   input += synapse0x264b5b0();
   input += synapse0x264b5f0();
   input += synapse0x264b630();
   input += synapse0x264b670();
   input += synapse0x264b6b0();
   input += synapse0x264b6f0();
   input += synapse0x264b730();
   input += synapse0x264b770();
   input += synapse0x264b7b0();
   input += synapse0x264b7f0();
   input += synapse0x264b830();
   input += synapse0x264b2c0();
   input += synapse0x264b300();
   input += synapse0x264b980();
   input += synapse0x264b9c0();
   input += synapse0x264ba00();
   input += synapse0x264ba40();
   input += synapse0x264ba80();
   input += synapse0x264bac0();
   return input;
}

double NNfunction_cLg::neuron0x264b130() {
   double input = input0x264b130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x264bb00() {
   double input = 2.74671;
   input += synapse0x264be40();
   input += synapse0x264be80();
   input += synapse0x264bec0();
   input += synapse0x264bf00();
   input += synapse0x264bf40();
   input += synapse0x264bf80();
   input += synapse0x264bfc0();
   input += synapse0x264c000();
   input += synapse0x264c040();
   input += synapse0x264c080();
   input += synapse0x264c0c0();
   input += synapse0x264c100();
   input += synapse0x264c140();
   input += synapse0x264c180();
   input += synapse0x264c1c0();
   input += synapse0x264c200();
   input += synapse0x264bc90();
   input += synapse0x264bcd0();
   input += synapse0x264c350();
   input += synapse0x264c390();
   input += synapse0x264c3d0();
   input += synapse0x264c410();
   input += synapse0x264c450();
   input += synapse0x264c490();
   return input;
}

double NNfunction_cLg::neuron0x264bb00() {
   double input = input0x264bb00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x265e140() {
   double input = -0.120766;
   input += synapse0x265e360();
   input += synapse0x265e3a0();
   input += synapse0x265e3e0();
   input += synapse0x265e420();
   input += synapse0x265e460();
   input += synapse0x265e4a0();
   input += synapse0x265e4e0();
   input += synapse0x265e520();
   input += synapse0x265e560();
   input += synapse0x265e5a0();
   input += synapse0x265e5e0();
   input += synapse0x265e620();
   input += synapse0x265e660();
   input += synapse0x265e6a0();
   input += synapse0x265e6e0();
   input += synapse0x265e720();
   input += synapse0x264c4d0();
   input += synapse0x264c510();
   input += synapse0x265e870();
   input += synapse0x265e8b0();
   input += synapse0x265e8f0();
   input += synapse0x265e930();
   input += synapse0x265e970();
   input += synapse0x265e9b0();
   return input;
}

double NNfunction_cLg::neuron0x265e140() {
   double input = input0x265e140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x265e9f0() {
   double input = 0.44191;
   input += synapse0x265ed30();
   input += synapse0x265ed70();
   input += synapse0x265edb0();
   input += synapse0x265edf0();
   input += synapse0x265ee30();
   input += synapse0x265ee70();
   input += synapse0x265eeb0();
   input += synapse0x265eef0();
   input += synapse0x265ef30();
   input += synapse0x265ef70();
   input += synapse0x265efb0();
   input += synapse0x265eff0();
   input += synapse0x265f030();
   input += synapse0x265f070();
   input += synapse0x265f0b0();
   input += synapse0x265f0f0();
   input += synapse0x265eb80();
   input += synapse0x265ebc0();
   input += synapse0x265f240();
   input += synapse0x265f280();
   input += synapse0x265f2c0();
   input += synapse0x265f300();
   input += synapse0x265f340();
   input += synapse0x265f380();
   return input;
}

double NNfunction_cLg::neuron0x265e9f0() {
   double input = input0x265e9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x265f3c0() {
   double input = 0.0964698;
   input += synapse0x265f700();
   input += synapse0x265f740();
   input += synapse0x265f780();
   input += synapse0x265f7c0();
   input += synapse0x265f800();
   input += synapse0x265f840();
   input += synapse0x265f880();
   input += synapse0x265f8c0();
   input += synapse0x265f900();
   input += synapse0x265f940();
   input += synapse0x265f980();
   input += synapse0x265f9c0();
   input += synapse0x265fa00();
   input += synapse0x265fa40();
   input += synapse0x265fa80();
   input += synapse0x265fac0();
   input += synapse0x265f550();
   input += synapse0x265f590();
   input += synapse0x265fc10();
   input += synapse0x265fc50();
   input += synapse0x265fc90();
   input += synapse0x265fcd0();
   input += synapse0x265fd10();
   input += synapse0x265fd50();
   return input;
}

double NNfunction_cLg::neuron0x265f3c0() {
   double input = input0x265f3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x265fd90() {
   double input = 2.89724;
   input += synapse0x26600d0();
   input += synapse0x2660110();
   input += synapse0x2660150();
   input += synapse0x2660190();
   input += synapse0x26601d0();
   input += synapse0x2660210();
   input += synapse0x2660250();
   input += synapse0x2660290();
   input += synapse0x26602d0();
   input += synapse0x2660310();
   input += synapse0x2660350();
   input += synapse0x2660390();
   input += synapse0x26603d0();
   input += synapse0x2660410();
   input += synapse0x2660450();
   input += synapse0x2660490();
   input += synapse0x265ff20();
   input += synapse0x265ff60();
   input += synapse0x26605e0();
   input += synapse0x2660620();
   input += synapse0x2660660();
   input += synapse0x26606a0();
   input += synapse0x26606e0();
   input += synapse0x2660720();
   return input;
}

double NNfunction_cLg::neuron0x265fd90() {
   double input = input0x265fd90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2666f90() {
   double input = 0.539003;
   input += synapse0x23f6af0();
   input += synapse0x23f6b30();
   input += synapse0x263e1d0();
   input += synapse0x263e210();
   input += synapse0x263eba0();
   input += synapse0x263ebe0();
   input += synapse0x263f970();
   input += synapse0x263f9b0();
   input += synapse0x2640340();
   input += synapse0x2640380();
   input += synapse0x2640d10();
   input += synapse0x2640d50();
   input += synapse0x26417f0();
   input += synapse0x2641830();
   input += synapse0x26421c0();
   input += synapse0x2642200();
   input += synapse0x263f2a0();
   input += synapse0x263f2e0();
   input += synapse0x2643d70();
   input += synapse0x2643db0();
   input += synapse0x2644740();
   input += synapse0x2644780();
   input += synapse0x2645110();
   input += synapse0x2645150();
   input += synapse0x2645ae0();
   input += synapse0x2645b20();
   input += synapse0x2639c80();
   input += synapse0x2639cc0();
   input += synapse0x2647bd0();
   input += synapse0x2647c10();
   input += synapse0x26485a0();
   input += synapse0x26485e0();
   input += synapse0x2648f70();
   input += synapse0x2648fb0();
   input += synapse0x2649940();
   input += synapse0x2649980();
   input += synapse0x264a310();
   input += synapse0x264a350();
   input += synapse0x2642e60();
   input += synapse0x2642ea0();
   input += synapse0x264c710();
   input += synapse0x264c750();
   input += synapse0x264d0a0();
   input += synapse0x264d0e0();
   input += synapse0x264da70();
   input += synapse0x264dab0();
   input += synapse0x264e440();
   input += synapse0x264e480();
   input += synapse0x264ee10();
   input += synapse0x264ee50();
   return input;
}

double NNfunction_cLg::neuron0x2666f90() {
   double input = input0x2666f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2667330() {
   double input = 0.235143;
   input += synapse0x2651550();
   input += synapse0x2651590();
   input += synapse0x2646b10();
   input += synapse0x2646b50();
   input += synapse0x2654130();
   input += synapse0x2654170();
   input += synapse0x2654b00();
   input += synapse0x2654b40();
   input += synapse0x26554d0();
   input += synapse0x2655510();
   input += synapse0x2655ea0();
   input += synapse0x2655ee0();
   input += synapse0x2656870();
   input += synapse0x26568b0();
   input += synapse0x2657240();
   input += synapse0x2657280();
   input += synapse0x2657c10();
   input += synapse0x2657c50();
   input += synapse0x26585e0();
   input += synapse0x2658620();
   input += synapse0x26591c0();
   input += synapse0x2659200();
   input += synapse0x2659b90();
   input += synapse0x2659bd0();
   input += synapse0x264aa10();
   input += synapse0x264aa50();
   input += synapse0x264b3e0();
   input += synapse0x264b420();
   input += synapse0x264bdb0();
   input += synapse0x264bdf0();
   input += synapse0x265e2d0();
   input += synapse0x265e310();
   input += synapse0x265eca0();
   input += synapse0x265ece0();
   input += synapse0x265f670();
   input += synapse0x265f6b0();
   input += synapse0x2660040();
   input += synapse0x2660080();
   input += synapse0x263bf30();
   input += synapse0x263bf70();
   input += synapse0x264f7e0();
   input += synapse0x264f820();
   input += synapse0x2660760();
   input += synapse0x26607a0();
   input += synapse0x26607e0();
   input += synapse0x2660820();
   input += synapse0x26676d0();
   input += synapse0x2667710();
   input += synapse0x2667750();
   input += synapse0x2667790();
   return input;
}

double NNfunction_cLg::neuron0x2667330() {
   double input = input0x2667330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x26677d0() {
   double input = 0.260798;
   input += synapse0x2667b10();
   input += synapse0x2667b50();
   input += synapse0x2667b90();
   input += synapse0x2667bd0();
   input += synapse0x2667c10();
   input += synapse0x2667c50();
   input += synapse0x2667c90();
   input += synapse0x2667cd0();
   input += synapse0x2667d10();
   input += synapse0x2667d50();
   input += synapse0x2667d90();
   input += synapse0x2667dd0();
   input += synapse0x2667e10();
   input += synapse0x2667e50();
   input += synapse0x2667e90();
   input += synapse0x2667ed0();
   input += synapse0x2667960();
   input += synapse0x26679a0();
   input += synapse0x2668020();
   input += synapse0x2668060();
   input += synapse0x26680a0();
   input += synapse0x26680e0();
   input += synapse0x2668120();
   input += synapse0x2668160();
   input += synapse0x26681a0();
   input += synapse0x26681e0();
   input += synapse0x2668220();
   input += synapse0x2668260();
   input += synapse0x26682a0();
   input += synapse0x26682e0();
   input += synapse0x2668320();
   input += synapse0x2668360();
   input += synapse0x2667f10();
   input += synapse0x2667f50();
   input += synapse0x2667f90();
   input += synapse0x2667fd0();
   input += synapse0x26685b0();
   input += synapse0x26685f0();
   input += synapse0x2668630();
   input += synapse0x2668670();
   input += synapse0x26686b0();
   input += synapse0x26686f0();
   input += synapse0x2668730();
   input += synapse0x2668770();
   input += synapse0x26687b0();
   input += synapse0x26687f0();
   input += synapse0x2668830();
   input += synapse0x2668870();
   input += synapse0x26688b0();
   input += synapse0x26688f0();
   return input;
}

double NNfunction_cLg::neuron0x26677d0() {
   double input = input0x26677d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2668930() {
   double input = -0.364805;
   input += synapse0x2668c70();
   input += synapse0x2668cb0();
   input += synapse0x2668cf0();
   input += synapse0x2668d30();
   input += synapse0x2668d70();
   input += synapse0x2668db0();
   input += synapse0x2668df0();
   input += synapse0x2668e30();
   input += synapse0x2668e70();
   input += synapse0x2668eb0();
   input += synapse0x2668ef0();
   input += synapse0x2668f30();
   input += synapse0x2668f70();
   input += synapse0x2668fb0();
   input += synapse0x2668ff0();
   input += synapse0x2669030();
   input += synapse0x2668ac0();
   input += synapse0x2668b00();
   input += synapse0x2669180();
   input += synapse0x26691c0();
   input += synapse0x2669200();
   input += synapse0x2669240();
   input += synapse0x2669280();
   input += synapse0x26692c0();
   input += synapse0x2669300();
   input += synapse0x2669340();
   input += synapse0x2669380();
   input += synapse0x26693c0();
   input += synapse0x2669400();
   input += synapse0x2669440();
   input += synapse0x2669480();
   input += synapse0x26694c0();
   input += synapse0x2669070();
   input += synapse0x26690b0();
   input += synapse0x26690f0();
   input += synapse0x2669130();
   input += synapse0x2669710();
   input += synapse0x2669750();
   input += synapse0x2669790();
   input += synapse0x26697d0();
   input += synapse0x2669810();
   input += synapse0x2669850();
   input += synapse0x2669890();
   input += synapse0x26698d0();
   input += synapse0x2669910();
   input += synapse0x2669950();
   input += synapse0x2669990();
   input += synapse0x26699d0();
   input += synapse0x2669a10();
   input += synapse0x2669a50();
   return input;
}

double NNfunction_cLg::neuron0x2668930() {
   double input = input0x2668930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x2669a90() {
   double input = -0.106837;
   input += synapse0x2669dd0();
   input += synapse0x2669e10();
   input += synapse0x2669e50();
   input += synapse0x2669e90();
   input += synapse0x2669ed0();
   input += synapse0x2669f10();
   input += synapse0x2669f50();
   input += synapse0x2669f90();
   input += synapse0x2669fd0();
   input += synapse0x266a010();
   input += synapse0x266a050();
   input += synapse0x266a090();
   input += synapse0x266a0d0();
   input += synapse0x266a110();
   input += synapse0x266a150();
   input += synapse0x266a190();
   input += synapse0x2669c20();
   input += synapse0x2669c60();
   input += synapse0x266a2e0();
   input += synapse0x266a320();
   input += synapse0x266a360();
   input += synapse0x266a3a0();
   input += synapse0x266a3e0();
   input += synapse0x266a420();
   input += synapse0x266a460();
   input += synapse0x266a4a0();
   input += synapse0x266a4e0();
   input += synapse0x266a520();
   input += synapse0x266a560();
   input += synapse0x266a5a0();
   input += synapse0x266a5e0();
   input += synapse0x266a620();
   input += synapse0x266a1d0();
   input += synapse0x266a210();
   input += synapse0x266a250();
   input += synapse0x266a290();
   input += synapse0x266a870();
   input += synapse0x266a8b0();
   input += synapse0x266a8f0();
   input += synapse0x266a930();
   input += synapse0x266a970();
   input += synapse0x266a9b0();
   input += synapse0x266a9f0();
   input += synapse0x266aa30();
   input += synapse0x266aa70();
   input += synapse0x266aab0();
   input += synapse0x266aaf0();
   input += synapse0x266ab30();
   input += synapse0x266ab70();
   input += synapse0x266abb0();
   return input;
}

double NNfunction_cLg::neuron0x2669a90() {
   double input = input0x2669a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cLg::input0x266abf0() {
   double input = 6.47434;
   input += synapse0x266ae10();
   input += synapse0x266ae50();
   input += synapse0x266ae90();
   input += synapse0x266aed0();
   input += synapse0x266af10();
   return input;
}

double NNfunction_cLg::neuron0x266abf0() {
   double input = input0x266abf0();
   return (input * 1)+0;
}

double NNfunction_cLg::synapse0x2636ba0() {
   return (neuron0x2636ce0()*0.679348);
}

double NNfunction_cLg::synapse0x2636be0() {
   return (neuron0x2637020()*-0.0736676);
}

double NNfunction_cLg::synapse0x263bfc0() {
   return (neuron0x2637360()*-0.0786328);
}

double NNfunction_cLg::synapse0x263c000() {
   return (neuron0x26376a0()*-0.15095);
}

double NNfunction_cLg::synapse0x263c040() {
   return (neuron0x26379e0()*0.0186629);
}

double NNfunction_cLg::synapse0x263c080() {
   return (neuron0x2637d20()*-0.0179827);
}

double NNfunction_cLg::synapse0x263c0c0() {
   return (neuron0x2638060()*-0.0824203);
}

double NNfunction_cLg::synapse0x263c100() {
   return (neuron0x26383a0()*-0.28515);
}

double NNfunction_cLg::synapse0x263c140() {
   return (neuron0x26386e0()*-0.128745);
}

double NNfunction_cLg::synapse0x263c180() {
   return (neuron0x2638a20()*0.125986);
}

double NNfunction_cLg::synapse0x263c1c0() {
   return (neuron0x2638d60()*-0.416292);
}

double NNfunction_cLg::synapse0x263c200() {
   return (neuron0x26390a0()*0.023693);
}

double NNfunction_cLg::synapse0x263c240() {
   return (neuron0x26393e0()*-0.67128);
}

double NNfunction_cLg::synapse0x263c280() {
   return (neuron0x2639720()*-0.363091);
}

double NNfunction_cLg::synapse0x263c2c0() {
   return (neuron0x2639a60()*-0.0159085);
}

double NNfunction_cLg::synapse0x263c300() {
   return (neuron0x2639da0()*-0.0993285);
}

double NNfunction_cLg::synapse0x2636b10() {
   return (neuron0x263a0e0()*0.0158876);
}

double NNfunction_cLg::synapse0x2636b50() {
   return (neuron0x263a640()*0.070505);
}

double NNfunction_cLg::synapse0x23e8790() {
   return (neuron0x263a860()*-0.138183);
}

double NNfunction_cLg::synapse0x23e87d0() {
   return (neuron0x263aba0()*0.293355);
}

double NNfunction_cLg::synapse0x263c560() {
   return (neuron0x263aee0()*0.0576611);
}

double NNfunction_cLg::synapse0x263c5a0() {
   return (neuron0x263b220()*-0.395587);
}

double NNfunction_cLg::synapse0x263c5e0() {
   return (neuron0x263b560()*0.0410894);
}

double NNfunction_cLg::synapse0x263c620() {
   return (neuron0x263b8a0()*0.14312);
}

double NNfunction_cLg::synapse0x263c9a0() {
   return (neuron0x2636ce0()*-0.0319969);
}

double NNfunction_cLg::synapse0x263c9e0() {
   return (neuron0x2637020()*0.0100948);
}

double NNfunction_cLg::synapse0x263ca20() {
   return (neuron0x2637360()*0.108898);
}

double NNfunction_cLg::synapse0x263ca60() {
   return (neuron0x26376a0()*0.739708);
}

double NNfunction_cLg::synapse0x263caa0() {
   return (neuron0x26379e0()*0.0680702);
}

double NNfunction_cLg::synapse0x263cae0() {
   return (neuron0x2637d20()*0.119474);
}

double NNfunction_cLg::synapse0x263cb20() {
   return (neuron0x2638060()*-0.155386);
}

double NNfunction_cLg::synapse0x263cb60() {
   return (neuron0x26383a0()*-0.146619);
}

double NNfunction_cLg::synapse0x263cba0() {
   return (neuron0x26386e0()*-0.00456031);
}

double NNfunction_cLg::synapse0x263c450() {
   return (neuron0x2638a20()*-0.0126339);
}

double NNfunction_cLg::synapse0x263c490() {
   return (neuron0x2638d60()*0.0187328);
}

double NNfunction_cLg::synapse0x263c4d0() {
   return (neuron0x26390a0()*-0.265393);
}

double NNfunction_cLg::synapse0x263c510() {
   return (neuron0x26393e0()*-0.0575934);
}

double NNfunction_cLg::synapse0x263cdf0() {
   return (neuron0x2639720()*-0.00636007);
}

double NNfunction_cLg::synapse0x263ce30() {
   return (neuron0x2639a60()*-0.193117);
}

double NNfunction_cLg::synapse0x263ce70() {
   return (neuron0x2639da0()*1.06347);
}

double NNfunction_cLg::synapse0x263c7f0() {
   return (neuron0x263a0e0()*-0.165906);
}

double NNfunction_cLg::synapse0x263c830() {
   return (neuron0x263a640()*-0.156421);
}

double NNfunction_cLg::synapse0x263cfc0() {
   return (neuron0x263a860()*-0.199211);
}

double NNfunction_cLg::synapse0x263d000() {
   return (neuron0x263aba0()*0.372762);
}

double NNfunction_cLg::synapse0x263d040() {
   return (neuron0x263aee0()*0.033284);
}

double NNfunction_cLg::synapse0x263d080() {
   return (neuron0x263b220()*0.137055);
}

double NNfunction_cLg::synapse0x263d0c0() {
   return (neuron0x263b560()*-0.0911221);
}

double NNfunction_cLg::synapse0x263d100() {
   return (neuron0x263b8a0()*0.0684828);
}

double NNfunction_cLg::synapse0x263d480() {
   return (neuron0x2636ce0()*0.216787);
}

double NNfunction_cLg::synapse0x263d4c0() {
   return (neuron0x2637020()*-0.592462);
}

double NNfunction_cLg::synapse0x263d500() {
   return (neuron0x2637360()*-0.235735);
}

double NNfunction_cLg::synapse0x263d540() {
   return (neuron0x26376a0()*-0.331712);
}

double NNfunction_cLg::synapse0x263d580() {
   return (neuron0x26379e0()*0.276251);
}

double NNfunction_cLg::synapse0x263d5c0() {
   return (neuron0x2637d20()*-1.09237);
}

double NNfunction_cLg::synapse0x263d600() {
   return (neuron0x2638060()*-0.452054);
}

double NNfunction_cLg::synapse0x263d640() {
   return (neuron0x26383a0()*-0.0302546);
}

double NNfunction_cLg::synapse0x263d680() {
   return (neuron0x26386e0()*0.151667);
}

double NNfunction_cLg::synapse0x263d6c0() {
   return (neuron0x2638a20()*-0.074754);
}

double NNfunction_cLg::synapse0x263d700() {
   return (neuron0x2638d60()*0.0808028);
}

double NNfunction_cLg::synapse0x263d740() {
   return (neuron0x26390a0()*0.0880102);
}

double NNfunction_cLg::synapse0x263d780() {
   return (neuron0x26393e0()*0.422877);
}

double NNfunction_cLg::synapse0x263d7c0() {
   return (neuron0x2639720()*0.320156);
}

double NNfunction_cLg::synapse0x263d800() {
   return (neuron0x2639a60()*-0.352249);
}

double NNfunction_cLg::synapse0x263d840() {
   return (neuron0x2639da0()*-0.651769);
}

double NNfunction_cLg::synapse0x263d2d0() {
   return (neuron0x263a0e0()*-0.495042);
}

double NNfunction_cLg::synapse0x263d310() {
   return (neuron0x263a640()*-0.343759);
}

double NNfunction_cLg::synapse0x23e8bc0() {
   return (neuron0x263a860()*0.127584);
}

double NNfunction_cLg::synapse0x23f62e0() {
   return (neuron0x263aba0()*0.457861);
}

double NNfunction_cLg::synapse0x23f6320() {
   return (neuron0x263aee0()*-0.287217);
}

double NNfunction_cLg::synapse0x2625d70() {
   return (neuron0x263b220()*0.227801);
}

double NNfunction_cLg::synapse0x2625db0() {
   return (neuron0x263b560()*-0.1363);
}

double NNfunction_cLg::synapse0x2625df0() {
   return (neuron0x263b8a0()*-0.120988);
}

double NNfunction_cLg::synapse0x23f6b80() {
   return (neuron0x2636ce0()*0.126319);
}

double NNfunction_cLg::synapse0x263cd70() {
   return (neuron0x2637020()*-0.186637);
}

double NNfunction_cLg::synapse0x263cdb0() {
   return (neuron0x2637360()*-0.175179);
}

double NNfunction_cLg::synapse0x263d990() {
   return (neuron0x26376a0()*0.0699414);
}

double NNfunction_cLg::synapse0x263d9d0() {
   return (neuron0x26379e0()*-0.174022);
}

double NNfunction_cLg::synapse0x263da10() {
   return (neuron0x2637d20()*0.0438876);
}

double NNfunction_cLg::synapse0x263da50() {
   return (neuron0x2638060()*-0.145173);
}

double NNfunction_cLg::synapse0x263da90() {
   return (neuron0x26383a0()*-0.174676);
}

double NNfunction_cLg::synapse0x263dad0() {
   return (neuron0x26386e0()*-0.030846);
}

double NNfunction_cLg::synapse0x263db10() {
   return (neuron0x2638a20()*0.0212896);
}

double NNfunction_cLg::synapse0x263db50() {
   return (neuron0x2638d60()*0.306045);
}

double NNfunction_cLg::synapse0x263db90() {
   return (neuron0x26390a0()*-0.280437);
}

double NNfunction_cLg::synapse0x263dbd0() {
   return (neuron0x26393e0()*0.550348);
}

double NNfunction_cLg::synapse0x263dc10() {
   return (neuron0x2639720()*0.022992);
}

double NNfunction_cLg::synapse0x263dc50() {
   return (neuron0x2639a60()*-0.733368);
}

double NNfunction_cLg::synapse0x263dc90() {
   return (neuron0x2639da0()*-0.0632064);
}

double NNfunction_cLg::synapse0x2636c20() {
   return (neuron0x263a0e0()*0.080777);
}

double NNfunction_cLg::synapse0x2636c60() {
   return (neuron0x263a640()*0.120536);
}

double NNfunction_cLg::synapse0x2636ca0() {
   return (neuron0x263a860()*0.0796643);
}

double NNfunction_cLg::synapse0x263dde0() {
   return (neuron0x263aba0()*0.0731327);
}

double NNfunction_cLg::synapse0x263de20() {
   return (neuron0x263aee0()*-0.183475);
}

double NNfunction_cLg::synapse0x263de60() {
   return (neuron0x263b220()*0.115136);
}

double NNfunction_cLg::synapse0x263dea0() {
   return (neuron0x263b560()*-0.0133715);
}

double NNfunction_cLg::synapse0x263dee0() {
   return (neuron0x263b8a0()*0.274384);
}

double NNfunction_cLg::synapse0x263e260() {
   return (neuron0x2636ce0()*-0.0971438);
}

double NNfunction_cLg::synapse0x263e2a0() {
   return (neuron0x2637020()*-0.100168);
}

double NNfunction_cLg::synapse0x263e2e0() {
   return (neuron0x2637360()*-0.0885746);
}

double NNfunction_cLg::synapse0x263e320() {
   return (neuron0x26376a0()*-1.27912);
}

double NNfunction_cLg::synapse0x263e360() {
   return (neuron0x26379e0()*0.218701);
}

double NNfunction_cLg::synapse0x263e3a0() {
   return (neuron0x2637d20()*0.00354819);
}

double NNfunction_cLg::synapse0x263e3e0() {
   return (neuron0x2638060()*-0.163981);
}

double NNfunction_cLg::synapse0x263e420() {
   return (neuron0x26383a0()*0.0809958);
}

double NNfunction_cLg::synapse0x263e460() {
   return (neuron0x26386e0()*0.267833);
}

double NNfunction_cLg::synapse0x263e4a0() {
   return (neuron0x2638a20()*-0.274402);
}

double NNfunction_cLg::synapse0x263e4e0() {
   return (neuron0x2638d60()*0.278792);
}

double NNfunction_cLg::synapse0x263e520() {
   return (neuron0x26390a0()*0.0836298);
}

double NNfunction_cLg::synapse0x263e560() {
   return (neuron0x26393e0()*0.996252);
}

double NNfunction_cLg::synapse0x263e5a0() {
   return (neuron0x2639720()*0.215804);
}

double NNfunction_cLg::synapse0x263e5e0() {
   return (neuron0x2639a60()*0.0670101);
}

double NNfunction_cLg::synapse0x263e620() {
   return (neuron0x2639da0()*0.0319519);
}

double NNfunction_cLg::synapse0x263e0b0() {
   return (neuron0x263a0e0()*0.298456);
}

double NNfunction_cLg::synapse0x263e0f0() {
   return (neuron0x263a640()*0.251456);
}

double NNfunction_cLg::synapse0x263e770() {
   return (neuron0x263a860()*-0.0430712);
}

double NNfunction_cLg::synapse0x263e7b0() {
   return (neuron0x263aba0()*0.11875);
}

double NNfunction_cLg::synapse0x263e7f0() {
   return (neuron0x263aee0()*0.150586);
}

double NNfunction_cLg::synapse0x263e830() {
   return (neuron0x263b220()*0.204016);
}

double NNfunction_cLg::synapse0x263e870() {
   return (neuron0x263b560()*-0.206042);
}

double NNfunction_cLg::synapse0x263e8b0() {
   return (neuron0x263b8a0()*0.321285);
}

double NNfunction_cLg::synapse0x263ec30() {
   return (neuron0x2636ce0()*0.0776428);
}

double NNfunction_cLg::synapse0x263ec70() {
   return (neuron0x2637020()*-0.202561);
}

double NNfunction_cLg::synapse0x263ecb0() {
   return (neuron0x2637360()*0.276036);
}

double NNfunction_cLg::synapse0x263ecf0() {
   return (neuron0x26376a0()*-0.676611);
}

double NNfunction_cLg::synapse0x263ed30() {
   return (neuron0x26379e0()*-0.10271);
}

double NNfunction_cLg::synapse0x263ed70() {
   return (neuron0x2637d20()*0.173002);
}

double NNfunction_cLg::synapse0x263edb0() {
   return (neuron0x2638060()*-0.211888);
}

double NNfunction_cLg::synapse0x263edf0() {
   return (neuron0x26383a0()*0.340113);
}

double NNfunction_cLg::synapse0x263ee30() {
   return (neuron0x26386e0()*-0.398908);
}

double NNfunction_cLg::synapse0x23f6650() {
   return (neuron0x2638a20()*0.369953);
}

double NNfunction_cLg::synapse0x23f6690() {
   return (neuron0x2638d60()*-0.695199);
}

double NNfunction_cLg::synapse0x23f66d0() {
   return (neuron0x26390a0()*0.348378);
}

double NNfunction_cLg::synapse0x23f6710() {
   return (neuron0x26393e0()*0.885395);
}

double NNfunction_cLg::synapse0x23f6750() {
   return (neuron0x2639720()*0.310683);
}

double NNfunction_cLg::synapse0x23f6790() {
   return (neuron0x2639a60()*0.147906);
}

double NNfunction_cLg::synapse0x23f67d0() {
   return (neuron0x2639da0()*-0.01899);
}

double NNfunction_cLg::synapse0x263ea80() {
   return (neuron0x263a0e0()*-0.451985);
}

double NNfunction_cLg::synapse0x263eac0() {
   return (neuron0x263a640()*-0.371403);
}

double NNfunction_cLg::synapse0x23f6920() {
   return (neuron0x263a860()*-0.150677);
}

double NNfunction_cLg::synapse0x23f6960() {
   return (neuron0x263aba0()*-0.395109);
}

double NNfunction_cLg::synapse0x23f69a0() {
   return (neuron0x263aee0()*-0.405828);
}

double NNfunction_cLg::synapse0x23f69e0() {
   return (neuron0x263b220()*0.303273);
}

double NNfunction_cLg::synapse0x23f6a20() {
   return (neuron0x263b560()*0.569144);
}

double NNfunction_cLg::synapse0x263f680() {
   return (neuron0x263b8a0()*0.11366);
}

double NNfunction_cLg::synapse0x263fa00() {
   return (neuron0x2636ce0()*-0.0198173);
}

double NNfunction_cLg::synapse0x263fa40() {
   return (neuron0x2637020()*0.00160737);
}

double NNfunction_cLg::synapse0x263fa80() {
   return (neuron0x2637360()*0.0505498);
}

double NNfunction_cLg::synapse0x263fac0() {
   return (neuron0x26376a0()*-18.9334);
}

double NNfunction_cLg::synapse0x263fb00() {
   return (neuron0x26379e0()*0.0088332);
}

double NNfunction_cLg::synapse0x263fb40() {
   return (neuron0x2637d20()*0.0180721);
}

double NNfunction_cLg::synapse0x263fb80() {
   return (neuron0x2638060()*0.00594496);
}

double NNfunction_cLg::synapse0x263fbc0() {
   return (neuron0x26383a0()*0.0269342);
}

double NNfunction_cLg::synapse0x263fc00() {
   return (neuron0x26386e0()*0.0018166);
}

double NNfunction_cLg::synapse0x263fc40() {
   return (neuron0x2638a20()*-0.00356152);
}

double NNfunction_cLg::synapse0x263fc80() {
   return (neuron0x2638d60()*-0.00432584);
}

double NNfunction_cLg::synapse0x263fcc0() {
   return (neuron0x26390a0()*0.0345877);
}

double NNfunction_cLg::synapse0x263fd00() {
   return (neuron0x26393e0()*-0.299913);
}

double NNfunction_cLg::synapse0x263fd40() {
   return (neuron0x2639720()*-0.0243559);
}

double NNfunction_cLg::synapse0x263fd80() {
   return (neuron0x2639a60()*0.0235727);
}

double NNfunction_cLg::synapse0x263fdc0() {
   return (neuron0x2639da0()*0.037775);
}

double NNfunction_cLg::synapse0x263f850() {
   return (neuron0x263a0e0()*-0.0323545);
}

double NNfunction_cLg::synapse0x263f890() {
   return (neuron0x263a640()*0.0127466);
}

double NNfunction_cLg::synapse0x263ff10() {
   return (neuron0x263a860()*0.0296833);
}

double NNfunction_cLg::synapse0x263ff50() {
   return (neuron0x263aba0()*-0.00733252);
}

double NNfunction_cLg::synapse0x263ff90() {
   return (neuron0x263aee0()*-0.00079769);
}

double NNfunction_cLg::synapse0x263ffd0() {
   return (neuron0x263b220()*-0.00686035);
}

double NNfunction_cLg::synapse0x2640010() {
   return (neuron0x263b560()*-0.000762535);
}

double NNfunction_cLg::synapse0x2640050() {
   return (neuron0x263b8a0()*-0.0043694);
}

double NNfunction_cLg::synapse0x26403d0() {
   return (neuron0x2636ce0()*0.00438145);
}

double NNfunction_cLg::synapse0x2640410() {
   return (neuron0x2637020()*0.000601047);
}

double NNfunction_cLg::synapse0x2640450() {
   return (neuron0x2637360()*-0.00899025);
}

double NNfunction_cLg::synapse0x2640490() {
   return (neuron0x26376a0()*3.40228);
}

double NNfunction_cLg::synapse0x26404d0() {
   return (neuron0x26379e0()*-0.00416577);
}

double NNfunction_cLg::synapse0x2640510() {
   return (neuron0x2637d20()*-0.00540672);
}

double NNfunction_cLg::synapse0x2640550() {
   return (neuron0x2638060()*-0.0057181);
}

double NNfunction_cLg::synapse0x2640590() {
   return (neuron0x26383a0()*0.0050407);
}

double NNfunction_cLg::synapse0x26405d0() {
   return (neuron0x26386e0()*0.000139209);
}

double NNfunction_cLg::synapse0x2640610() {
   return (neuron0x2638a20()*-0.00407209);
}

double NNfunction_cLg::synapse0x2640650() {
   return (neuron0x2638d60()*-0.000585372);
}

double NNfunction_cLg::synapse0x2640690() {
   return (neuron0x26390a0()*-0.00122196);
}

double NNfunction_cLg::synapse0x26406d0() {
   return (neuron0x26393e0()*0.0934082);
}

double NNfunction_cLg::synapse0x2640710() {
   return (neuron0x2639720()*-0.017821);
}

double NNfunction_cLg::synapse0x2640750() {
   return (neuron0x2639a60()*-0.00277467);
}

double NNfunction_cLg::synapse0x2640790() {
   return (neuron0x2639da0()*-0.000579431);
}

double NNfunction_cLg::synapse0x2640220() {
   return (neuron0x263a0e0()*0.00168984);
}

double NNfunction_cLg::synapse0x2640260() {
   return (neuron0x263a640()*-0.00308539);
}

double NNfunction_cLg::synapse0x26408e0() {
   return (neuron0x263a860()*-0.00137109);
}

double NNfunction_cLg::synapse0x2640920() {
   return (neuron0x263aba0()*0.0037321);
}

double NNfunction_cLg::synapse0x2640960() {
   return (neuron0x263aee0()*-0.00491911);
}

double NNfunction_cLg::synapse0x26409a0() {
   return (neuron0x263b220()*-0.0043292);
}

double NNfunction_cLg::synapse0x26409e0() {
   return (neuron0x263b560()*0.0025281);
}

double NNfunction_cLg::synapse0x2640a20() {
   return (neuron0x263b8a0()*-0.00332456);
}

double NNfunction_cLg::synapse0x263a530() {
   return (neuron0x2636ce0()*-0.0900524);
}

double NNfunction_cLg::synapse0x263a570() {
   return (neuron0x2637020()*0.181224);
}

double NNfunction_cLg::synapse0x263a5b0() {
   return (neuron0x2637360()*-0.190335);
}

double NNfunction_cLg::synapse0x263a5f0() {
   return (neuron0x26376a0()*1.03004);
}

double NNfunction_cLg::synapse0x2640fb0() {
   return (neuron0x26379e0()*0.304381);
}

double NNfunction_cLg::synapse0x2640ff0() {
   return (neuron0x2637d20()*0.203569);
}

double NNfunction_cLg::synapse0x2641030() {
   return (neuron0x2638060()*-0.173164);
}

double NNfunction_cLg::synapse0x2641070() {
   return (neuron0x26383a0()*-0.234278);
}

double NNfunction_cLg::synapse0x26410b0() {
   return (neuron0x26386e0()*0.015651);
}

double NNfunction_cLg::synapse0x26410f0() {
   return (neuron0x2638a20()*0.023412);
}

double NNfunction_cLg::synapse0x2641130() {
   return (neuron0x2638d60()*-0.0350418);
}

double NNfunction_cLg::synapse0x2641170() {
   return (neuron0x26390a0()*0.238636);
}

double NNfunction_cLg::synapse0x26411b0() {
   return (neuron0x26393e0()*0.346256);
}

double NNfunction_cLg::synapse0x26411f0() {
   return (neuron0x2639720()*-0.551209);
}

double NNfunction_cLg::synapse0x2641230() {
   return (neuron0x2639a60()*0.196272);
}

double NNfunction_cLg::synapse0x2641270() {
   return (neuron0x2639da0()*-0.575905);
}

double NNfunction_cLg::synapse0x2640bf0() {
   return (neuron0x263a0e0()*-0.353671);
}

double NNfunction_cLg::synapse0x2640c30() {
   return (neuron0x263a640()*0.169119);
}

double NNfunction_cLg::synapse0x26413c0() {
   return (neuron0x263a860()*0.151097);
}

double NNfunction_cLg::synapse0x2641400() {
   return (neuron0x263aba0()*0.184724);
}

double NNfunction_cLg::synapse0x2641440() {
   return (neuron0x263aee0()*0.0418932);
}

double NNfunction_cLg::synapse0x2641480() {
   return (neuron0x263b220()*-0.0438908);
}

double NNfunction_cLg::synapse0x26414c0() {
   return (neuron0x263b560()*-0.0468913);
}

double NNfunction_cLg::synapse0x2641500() {
   return (neuron0x263b8a0()*0.0187685);
}

double NNfunction_cLg::synapse0x2641880() {
   return (neuron0x2636ce0()*-0.31795);
}

double NNfunction_cLg::synapse0x26418c0() {
   return (neuron0x2637020()*0.0186988);
}

double NNfunction_cLg::synapse0x2641900() {
   return (neuron0x2637360()*0.032332);
}

double NNfunction_cLg::synapse0x2641940() {
   return (neuron0x26376a0()*0.0804486);
}

double NNfunction_cLg::synapse0x2641980() {
   return (neuron0x26379e0()*0.267221);
}

double NNfunction_cLg::synapse0x26419c0() {
   return (neuron0x2637d20()*0.509463);
}

double NNfunction_cLg::synapse0x2641a00() {
   return (neuron0x2638060()*0.207125);
}

double NNfunction_cLg::synapse0x2641a40() {
   return (neuron0x26383a0()*0.0195648);
}

double NNfunction_cLg::synapse0x2641a80() {
   return (neuron0x26386e0()*-0.340724);
}

double NNfunction_cLg::synapse0x2641ac0() {
   return (neuron0x2638a20()*-0.209809);
}

double NNfunction_cLg::synapse0x2641b00() {
   return (neuron0x2638d60()*0.366183);
}

double NNfunction_cLg::synapse0x2641b40() {
   return (neuron0x26390a0()*0.150195);
}

double NNfunction_cLg::synapse0x2641b80() {
   return (neuron0x26393e0()*-0.789466);
}

double NNfunction_cLg::synapse0x2641bc0() {
   return (neuron0x2639720()*0.460558);
}

double NNfunction_cLg::synapse0x2641c00() {
   return (neuron0x2639a60()*0.157943);
}

double NNfunction_cLg::synapse0x2641c40() {
   return (neuron0x2639da0()*0.188471);
}

double NNfunction_cLg::synapse0x26416d0() {
   return (neuron0x263a0e0()*-0.117005);
}

double NNfunction_cLg::synapse0x2641710() {
   return (neuron0x263a640()*0.34857);
}

double NNfunction_cLg::synapse0x2641d90() {
   return (neuron0x263a860()*0.403432);
}

double NNfunction_cLg::synapse0x2641dd0() {
   return (neuron0x263aba0()*-0.0679468);
}

double NNfunction_cLg::synapse0x2641e10() {
   return (neuron0x263aee0()*0.279737);
}

double NNfunction_cLg::synapse0x2641e50() {
   return (neuron0x263b220()*-0.196485);
}

double NNfunction_cLg::synapse0x2641e90() {
   return (neuron0x263b560()*0.239842);
}

double NNfunction_cLg::synapse0x2641ed0() {
   return (neuron0x263b8a0()*-0.258361);
}

double NNfunction_cLg::synapse0x2642250() {
   return (neuron0x2636ce0()*0.0115603);
}

double NNfunction_cLg::synapse0x2642290() {
   return (neuron0x2637020()*0.0135507);
}

double NNfunction_cLg::synapse0x26422d0() {
   return (neuron0x2637360()*-0.340322);
}

double NNfunction_cLg::synapse0x2642310() {
   return (neuron0x26376a0()*-0.120018);
}

double NNfunction_cLg::synapse0x2642350() {
   return (neuron0x26379e0()*-0.041701);
}

double NNfunction_cLg::synapse0x2642390() {
   return (neuron0x2637d20()*-0.0308954);
}

double NNfunction_cLg::synapse0x26423d0() {
   return (neuron0x2638060()*-0.0160437);
}

double NNfunction_cLg::synapse0x2642410() {
   return (neuron0x26383a0()*-0.00393301);
}

double NNfunction_cLg::synapse0x2642450() {
   return (neuron0x26386e0()*-0.0272307);
}

double NNfunction_cLg::synapse0x2642490() {
   return (neuron0x2638a20()*0.0128734);
}

double NNfunction_cLg::synapse0x26424d0() {
   return (neuron0x2638d60()*-0.0314054);
}

double NNfunction_cLg::synapse0x2642510() {
   return (neuron0x26390a0()*0.709547);
}

double NNfunction_cLg::synapse0x2642550() {
   return (neuron0x26393e0()*-0.679778);
}

double NNfunction_cLg::synapse0x2642590() {
   return (neuron0x2639720()*-0.26345);
}

double NNfunction_cLg::synapse0x26425d0() {
   return (neuron0x2639a60()*0.0133134);
}

double NNfunction_cLg::synapse0x2642610() {
   return (neuron0x2639da0()*0.184976);
}

double NNfunction_cLg::synapse0x26420a0() {
   return (neuron0x263a0e0()*-0.286852);
}

double NNfunction_cLg::synapse0x26420e0() {
   return (neuron0x263a640()*0.0466629);
}

double NNfunction_cLg::synapse0x263ee70() {
   return (neuron0x263a860()*0.0340252);
}

double NNfunction_cLg::synapse0x263eeb0() {
   return (neuron0x263aba0()*0.0274398);
}

double NNfunction_cLg::synapse0x263eef0() {
   return (neuron0x263aee0()*0.00705115);
}

double NNfunction_cLg::synapse0x263ef30() {
   return (neuron0x263b220()*-0.0387959);
}

double NNfunction_cLg::synapse0x263ef70() {
   return (neuron0x263b560()*0.0482282);
}

double NNfunction_cLg::synapse0x263efb0() {
   return (neuron0x263b8a0()*0.0193489);
}

double NNfunction_cLg::synapse0x263f330() {
   return (neuron0x2636ce0()*-0.00583616);
}

double NNfunction_cLg::synapse0x263f370() {
   return (neuron0x2637020()*0.00212347);
}

double NNfunction_cLg::synapse0x263f3b0() {
   return (neuron0x2637360()*-0.0179546);
}

double NNfunction_cLg::synapse0x263f3f0() {
   return (neuron0x26376a0()*-1.8159);
}

double NNfunction_cLg::synapse0x263f430() {
   return (neuron0x26379e0()*0.00247091);
}

double NNfunction_cLg::synapse0x263f470() {
   return (neuron0x2637d20()*-0.00246993);
}

double NNfunction_cLg::synapse0x263f4b0() {
   return (neuron0x2638060()*-0.000279854);
}

double NNfunction_cLg::synapse0x263f4f0() {
   return (neuron0x26383a0()*-0.000781388);
}

double NNfunction_cLg::synapse0x263f530() {
   return (neuron0x26386e0()*-0.00720192);
}

double NNfunction_cLg::synapse0x263f570() {
   return (neuron0x2638a20()*0.0025354);
}

double NNfunction_cLg::synapse0x263f5b0() {
   return (neuron0x2638d60()*0.00236092);
}

double NNfunction_cLg::synapse0x263f5f0() {
   return (neuron0x26390a0()*0.0165117);
}

double NNfunction_cLg::synapse0x263f630() {
   return (neuron0x26393e0()*-0.69544);
}

double NNfunction_cLg::synapse0x2643770() {
   return (neuron0x2639720()*0.00702486);
}

double NNfunction_cLg::synapse0x26437b0() {
   return (neuron0x2639a60()*0.0100136);
}

double NNfunction_cLg::synapse0x26437f0() {
   return (neuron0x2639da0()*0.0130852);
}

double NNfunction_cLg::synapse0x263f180() {
   return (neuron0x263a0e0()*-0.00345595);
}

double NNfunction_cLg::synapse0x263f1c0() {
   return (neuron0x263a640()*0.0104273);
}

double NNfunction_cLg::synapse0x2643940() {
   return (neuron0x263a860()*0.0187402);
}

double NNfunction_cLg::synapse0x2643980() {
   return (neuron0x263aba0()*-0.00297228);
}

double NNfunction_cLg::synapse0x26439c0() {
   return (neuron0x263aee0()*0.00443444);
}

double NNfunction_cLg::synapse0x2643a00() {
   return (neuron0x263b220()*-0.0023472);
}

double NNfunction_cLg::synapse0x2643a40() {
   return (neuron0x263b560()*0.00118468);
}

double NNfunction_cLg::synapse0x2643a80() {
   return (neuron0x263b8a0()*0.00198342);
}

double NNfunction_cLg::synapse0x2643e00() {
   return (neuron0x2636ce0()*0.0102026);
}

double NNfunction_cLg::synapse0x2643e40() {
   return (neuron0x2637020()*-0.00846463);
}

double NNfunction_cLg::synapse0x2643e80() {
   return (neuron0x2637360()*0.0550326);
}

double NNfunction_cLg::synapse0x2643ec0() {
   return (neuron0x26376a0()*16.6093);
}

double NNfunction_cLg::synapse0x2643f00() {
   return (neuron0x26379e0()*0.00730317);
}

double NNfunction_cLg::synapse0x2643f40() {
   return (neuron0x2637d20()*0.014699);
}

double NNfunction_cLg::synapse0x2643f80() {
   return (neuron0x2638060()*0.00301342);
}

double NNfunction_cLg::synapse0x2643fc0() {
   return (neuron0x26383a0()*0.0172125);
}

double NNfunction_cLg::synapse0x2644000() {
   return (neuron0x26386e0()*-0.00803517);
}

double NNfunction_cLg::synapse0x2644040() {
   return (neuron0x2638a20()*-0.00710464);
}

double NNfunction_cLg::synapse0x2644080() {
   return (neuron0x2638d60()*0.00353463);
}

double NNfunction_cLg::synapse0x26440c0() {
   return (neuron0x26390a0()*0.0170563);
}

double NNfunction_cLg::synapse0x2644100() {
   return (neuron0x26393e0()*-0.30007);
}

double NNfunction_cLg::synapse0x2644140() {
   return (neuron0x2639720()*-0.024902);
}

double NNfunction_cLg::synapse0x2644180() {
   return (neuron0x2639a60()*0.0259769);
}

double NNfunction_cLg::synapse0x26441c0() {
   return (neuron0x2639da0()*0.029361);
}

double NNfunction_cLg::synapse0x2643c50() {
   return (neuron0x263a0e0()*-0.0176784);
}

double NNfunction_cLg::synapse0x2643c90() {
   return (neuron0x263a640()*0.0132041);
}

double NNfunction_cLg::synapse0x2644310() {
   return (neuron0x263a860()*-0.00150558);
}

double NNfunction_cLg::synapse0x2644350() {
   return (neuron0x263aba0()*0.0105147);
}

double NNfunction_cLg::synapse0x2644390() {
   return (neuron0x263aee0()*-0.0102982);
}

double NNfunction_cLg::synapse0x26443d0() {
   return (neuron0x263b220()*-0.00693089);
}

double NNfunction_cLg::synapse0x2644410() {
   return (neuron0x263b560()*0.000804481);
}

double NNfunction_cLg::synapse0x2644450() {
   return (neuron0x263b8a0()*0.0143423);
}

double NNfunction_cLg::synapse0x26447d0() {
   return (neuron0x2636ce0()*0.11685);
}

double NNfunction_cLg::synapse0x2644810() {
   return (neuron0x2637020()*0.175085);
}

double NNfunction_cLg::synapse0x2644850() {
   return (neuron0x2637360()*-0.502382);
}

double NNfunction_cLg::synapse0x2644890() {
   return (neuron0x26376a0()*0.205094);
}

double NNfunction_cLg::synapse0x26448d0() {
   return (neuron0x26379e0()*0.091532);
}

double NNfunction_cLg::synapse0x2644910() {
   return (neuron0x2637d20()*-0.182517);
}

double NNfunction_cLg::synapse0x2644950() {
   return (neuron0x2638060()*-0.0231088);
}

double NNfunction_cLg::synapse0x2644990() {
   return (neuron0x26383a0()*-0.23305);
}

double NNfunction_cLg::synapse0x26449d0() {
   return (neuron0x26386e0()*-0.0256544);
}

double NNfunction_cLg::synapse0x2644a10() {
   return (neuron0x2638a20()*-0.0194343);
}

double NNfunction_cLg::synapse0x2644a50() {
   return (neuron0x2638d60()*0.0220175);
}

double NNfunction_cLg::synapse0x2644a90() {
   return (neuron0x26390a0()*-0.161874);
}

double NNfunction_cLg::synapse0x2644ad0() {
   return (neuron0x26393e0()*0.0834134);
}

double NNfunction_cLg::synapse0x2644b10() {
   return (neuron0x2639720()*-0.018826);
}

double NNfunction_cLg::synapse0x2644b50() {
   return (neuron0x2639a60()*-0.141611);
}

double NNfunction_cLg::synapse0x2644b90() {
   return (neuron0x2639da0()*-0.125679);
}

double NNfunction_cLg::synapse0x2644620() {
   return (neuron0x263a0e0()*0.314725);
}

double NNfunction_cLg::synapse0x2644660() {
   return (neuron0x263a640()*-0.17726);
}

double NNfunction_cLg::synapse0x2644ce0() {
   return (neuron0x263a860()*-0.101004);
}

double NNfunction_cLg::synapse0x2644d20() {
   return (neuron0x263aba0()*-0.144324);
}

double NNfunction_cLg::synapse0x2644d60() {
   return (neuron0x263aee0()*0.0106689);
}

double NNfunction_cLg::synapse0x2644da0() {
   return (neuron0x263b220()*0.0179406);
}

double NNfunction_cLg::synapse0x2644de0() {
   return (neuron0x263b560()*0.0516189);
}

double NNfunction_cLg::synapse0x2644e20() {
   return (neuron0x263b8a0()*-0.0530017);
}

double NNfunction_cLg::synapse0x26451a0() {
   return (neuron0x2636ce0()*-0.18243);
}

double NNfunction_cLg::synapse0x26451e0() {
   return (neuron0x2637020()*-0.190756);
}

double NNfunction_cLg::synapse0x2645220() {
   return (neuron0x2637360()*1.84757);
}

double NNfunction_cLg::synapse0x2645260() {
   return (neuron0x26376a0()*-0.727959);
}

double NNfunction_cLg::synapse0x26452a0() {
   return (neuron0x26379e0()*-0.424202);
}

double NNfunction_cLg::synapse0x26452e0() {
   return (neuron0x2637d20()*0.384746);
}

double NNfunction_cLg::synapse0x2645320() {
   return (neuron0x2638060()*-0.394271);
}

double NNfunction_cLg::synapse0x2645360() {
   return (neuron0x26383a0()*-0.24271);
}

double NNfunction_cLg::synapse0x26453a0() {
   return (neuron0x26386e0()*-0.0598196);
}

double NNfunction_cLg::synapse0x26453e0() {
   return (neuron0x2638a20()*0.138724);
}

double NNfunction_cLg::synapse0x2645420() {
   return (neuron0x2638d60()*-0.125203);
}

double NNfunction_cLg::synapse0x2645460() {
   return (neuron0x26390a0()*0.0553284);
}

double NNfunction_cLg::synapse0x26454a0() {
   return (neuron0x26393e0()*-0.482421);
}

double NNfunction_cLg::synapse0x26454e0() {
   return (neuron0x2639720()*0.116247);
}

double NNfunction_cLg::synapse0x2645520() {
   return (neuron0x2639a60()*0.15196);
}

double NNfunction_cLg::synapse0x2645560() {
   return (neuron0x2639da0()*0.0494152);
}

double NNfunction_cLg::synapse0x2644ff0() {
   return (neuron0x263a0e0()*-0.0676238);
}

double NNfunction_cLg::synapse0x2645030() {
   return (neuron0x263a640()*-0.15458);
}

double NNfunction_cLg::synapse0x26456b0() {
   return (neuron0x263a860()*-0.387555);
}

double NNfunction_cLg::synapse0x26456f0() {
   return (neuron0x263aba0()*0.123632);
}

double NNfunction_cLg::synapse0x2645730() {
   return (neuron0x263aee0()*-0.0888638);
}

double NNfunction_cLg::synapse0x2645770() {
   return (neuron0x263b220()*-0.428939);
}

double NNfunction_cLg::synapse0x26457b0() {
   return (neuron0x263b560()*0.0506439);
}

double NNfunction_cLg::synapse0x26457f0() {
   return (neuron0x263b8a0()*-0.0527443);
}

double NNfunction_cLg::synapse0x2645b70() {
   return (neuron0x2636ce0()*-0.0039373);
}

double NNfunction_cLg::synapse0x2636f00() {
   return (neuron0x2637020()*0.027617);
}

double NNfunction_cLg::synapse0x2636f40() {
   return (neuron0x2637360()*-0.486851);
}

double NNfunction_cLg::synapse0x2637240() {
   return (neuron0x26376a0()*-0.097692);
}

double NNfunction_cLg::synapse0x2637280() {
   return (neuron0x26379e0()*-0.0731116);
}

double NNfunction_cLg::synapse0x2637580() {
   return (neuron0x2637d20()*-0.0505297);
}

double NNfunction_cLg::synapse0x26375c0() {
   return (neuron0x2638060()*-0.0603674);
}

double NNfunction_cLg::synapse0x26378c0() {
   return (neuron0x26383a0()*0.082745);
}

double NNfunction_cLg::synapse0x2637900() {
   return (neuron0x26386e0()*0.000769511);
}

double NNfunction_cLg::synapse0x2637c00() {
   return (neuron0x2638a20()*-0.00363778);
}

double NNfunction_cLg::synapse0x2637c40() {
   return (neuron0x2638d60()*-0.00476224);
}

double NNfunction_cLg::synapse0x2637f40() {
   return (neuron0x26390a0()*-0.254697);
}

double NNfunction_cLg::synapse0x2637f80() {
   return (neuron0x26393e0()*-0.285216);
}

double NNfunction_cLg::synapse0x2638280() {
   return (neuron0x2639720()*-0.131725);
}

double NNfunction_cLg::synapse0x26382c0() {
   return (neuron0x2639a60()*0.0694827);
}

double NNfunction_cLg::synapse0x26385c0() {
   return (neuron0x2639da0()*0.187056);
}

double NNfunction_cLg::synapse0x2638600() {
   return (neuron0x263a0e0()*-0.109549);
}

double NNfunction_cLg::synapse0x2638900() {
   return (neuron0x263a640()*0.0948804);
}

double NNfunction_cLg::synapse0x2638940() {
   return (neuron0x263a860()*0.167763);
}

double NNfunction_cLg::synapse0x2638c40() {
   return (neuron0x263aba0()*0.0272227);
}

double NNfunction_cLg::synapse0x2638c80() {
   return (neuron0x263aee0()*-0.0476537);
}

double NNfunction_cLg::synapse0x2638f80() {
   return (neuron0x263b220()*-0.0429318);
}

double NNfunction_cLg::synapse0x2638fc0() {
   return (neuron0x263b560()*0.069795);
}

double NNfunction_cLg::synapse0x26392c0() {
   return (neuron0x263b8a0()*0.00452971);
}

double NNfunction_cLg::synapse0x2639300() {
   return (neuron0x2636ce0()*-0.0044252);
}

double NNfunction_cLg::synapse0x2639fc0() {
   return (neuron0x2637020()*-0.0465863);
}

double NNfunction_cLg::synapse0x263a000() {
   return (neuron0x2637360()*-0.0733627);
}

double NNfunction_cLg::synapse0x26459c0() {
   return (neuron0x26376a0()*0.089796);
}

double NNfunction_cLg::synapse0x2645a00() {
   return (neuron0x26379e0()*-0.0519143);
}

double NNfunction_cLg::synapse0x263a300() {
   return (neuron0x2637d20()*0.0449551);
}

double NNfunction_cLg::synapse0x263a340() {
   return (neuron0x2638060()*-0.104596);
}

double NNfunction_cLg::synapse0x23e8670() {
   return (neuron0x26383a0()*0.112183);
}

double NNfunction_cLg::synapse0x23e86b0() {
   return (neuron0x26386e0()*0.0137602);
}

double NNfunction_cLg::synapse0x263aa80() {
   return (neuron0x2638a20()*-0.0358456);
}

double NNfunction_cLg::synapse0x263aac0() {
   return (neuron0x2638d60()*0.0115328);
}

double NNfunction_cLg::synapse0x263adc0() {
   return (neuron0x26390a0()*-0.0168297);
}

double NNfunction_cLg::synapse0x263ae00() {
   return (neuron0x26393e0()*-0.278343);
}

double NNfunction_cLg::synapse0x263b100() {
   return (neuron0x2639720()*0.0526656);
}

double NNfunction_cLg::synapse0x263b140() {
   return (neuron0x2639a60()*-0.173472);
}

double NNfunction_cLg::synapse0x263b440() {
   return (neuron0x2639da0()*-0.321972);
}

double NNfunction_cLg::synapse0x263b480() {
   return (neuron0x263a0e0()*0.0984603);
}

double NNfunction_cLg::synapse0x263b780() {
   return (neuron0x263a640()*-0.0930371);
}

double NNfunction_cLg::synapse0x263b7c0() {
   return (neuron0x263a860()*-0.0663708);
}

double NNfunction_cLg::synapse0x263bac0() {
   return (neuron0x263aba0()*0.00650083);
}

double NNfunction_cLg::synapse0x263bb00() {
   return (neuron0x263aee0()*-0.0228081);
}

double NNfunction_cLg::synapse0x2639600() {
   return (neuron0x263b220()*-0.0124124);
}

double NNfunction_cLg::synapse0x2639640() {
   return (neuron0x263b560()*0.00382216);
}

double NNfunction_cLg::synapse0x26478e0() {
   return (neuron0x263b8a0()*-0.0250297);
}

double NNfunction_cLg::synapse0x2647c60() {
   return (neuron0x2636ce0()*0.281579);
}

double NNfunction_cLg::synapse0x2647ca0() {
   return (neuron0x2637020()*-0.129505);
}

double NNfunction_cLg::synapse0x2647ce0() {
   return (neuron0x2637360()*0.0259926);
}

double NNfunction_cLg::synapse0x2647d20() {
   return (neuron0x26376a0()*-0.225293);
}

double NNfunction_cLg::synapse0x2647d60() {
   return (neuron0x26379e0()*-0.263652);
}

double NNfunction_cLg::synapse0x2647da0() {
   return (neuron0x2637d20()*0.061791);
}

double NNfunction_cLg::synapse0x2647de0() {
   return (neuron0x2638060()*0.221707);
}

double NNfunction_cLg::synapse0x2647e20() {
   return (neuron0x26383a0()*0.378796);
}

double NNfunction_cLg::synapse0x2647e60() {
   return (neuron0x26386e0()*-0.157227);
}

double NNfunction_cLg::synapse0x2647ea0() {
   return (neuron0x2638a20()*0.0163623);
}

double NNfunction_cLg::synapse0x2647ee0() {
   return (neuron0x2638d60()*-0.236495);
}

double NNfunction_cLg::synapse0x2647f20() {
   return (neuron0x26390a0()*0.452184);
}

double NNfunction_cLg::synapse0x2647f60() {
   return (neuron0x26393e0()*0.221782);
}

double NNfunction_cLg::synapse0x2647fa0() {
   return (neuron0x2639720()*0.498062);
}

double NNfunction_cLg::synapse0x2647fe0() {
   return (neuron0x2639a60()*0.208023);
}

double NNfunction_cLg::synapse0x2648020() {
   return (neuron0x2639da0()*0.578777);
}

double NNfunction_cLg::synapse0x2647ab0() {
   return (neuron0x263a0e0()*0.182353);
}

double NNfunction_cLg::synapse0x2647af0() {
   return (neuron0x263a640()*0.26757);
}

double NNfunction_cLg::synapse0x2648170() {
   return (neuron0x263a860()*-0.366596);
}

double NNfunction_cLg::synapse0x26481b0() {
   return (neuron0x263aba0()*-0.0539846);
}

double NNfunction_cLg::synapse0x26481f0() {
   return (neuron0x263aee0()*-0.237534);
}

double NNfunction_cLg::synapse0x2648230() {
   return (neuron0x263b220()*0.276818);
}

double NNfunction_cLg::synapse0x2648270() {
   return (neuron0x263b560()*0.26265);
}

double NNfunction_cLg::synapse0x26482b0() {
   return (neuron0x263b8a0()*0.162096);
}

double NNfunction_cLg::synapse0x2648630() {
   return (neuron0x2636ce0()*0.24317);
}

double NNfunction_cLg::synapse0x2648670() {
   return (neuron0x2637020()*0.12523);
}

double NNfunction_cLg::synapse0x26486b0() {
   return (neuron0x2637360()*-0.199887);
}

double NNfunction_cLg::synapse0x26486f0() {
   return (neuron0x26376a0()*0.263683);
}

double NNfunction_cLg::synapse0x2648730() {
   return (neuron0x26379e0()*-0.0640252);
}

double NNfunction_cLg::synapse0x2648770() {
   return (neuron0x2637d20()*-0.305144);
}

double NNfunction_cLg::synapse0x26487b0() {
   return (neuron0x2638060()*0.497292);
}

double NNfunction_cLg::synapse0x26487f0() {
   return (neuron0x26383a0()*0.551686);
}

double NNfunction_cLg::synapse0x2648830() {
   return (neuron0x26386e0()*0.236858);
}

double NNfunction_cLg::synapse0x2648870() {
   return (neuron0x2638a20()*-0.0701754);
}

double NNfunction_cLg::synapse0x26488b0() {
   return (neuron0x2638d60()*0.311122);
}

double NNfunction_cLg::synapse0x26488f0() {
   return (neuron0x26390a0()*0.0262395);
}

double NNfunction_cLg::synapse0x2648930() {
   return (neuron0x26393e0()*-0.0932647);
}

double NNfunction_cLg::synapse0x2648970() {
   return (neuron0x2639720()*-0.222011);
}

double NNfunction_cLg::synapse0x26489b0() {
   return (neuron0x2639a60()*0.0435733);
}

double NNfunction_cLg::synapse0x26489f0() {
   return (neuron0x2639da0()*-0.417941);
}

double NNfunction_cLg::synapse0x2648480() {
   return (neuron0x263a0e0()*0.271065);
}

double NNfunction_cLg::synapse0x26484c0() {
   return (neuron0x263a640()*-0.300859);
}

double NNfunction_cLg::synapse0x2648b40() {
   return (neuron0x263a860()*0.393655);
}

double NNfunction_cLg::synapse0x2648b80() {
   return (neuron0x263aba0()*0.57759);
}

double NNfunction_cLg::synapse0x2648bc0() {
   return (neuron0x263aee0()*0.321195);
}

double NNfunction_cLg::synapse0x2648c00() {
   return (neuron0x263b220()*-0.171774);
}

double NNfunction_cLg::synapse0x2648c40() {
   return (neuron0x263b560()*-0.125696);
}

double NNfunction_cLg::synapse0x2648c80() {
   return (neuron0x263b8a0()*0.143352);
}

double NNfunction_cLg::synapse0x2649000() {
   return (neuron0x2636ce0()*-0.00244809);
}

double NNfunction_cLg::synapse0x2649040() {
   return (neuron0x2637020()*0.00209866);
}

double NNfunction_cLg::synapse0x2649080() {
   return (neuron0x2637360()*-0.0643839);
}

double NNfunction_cLg::synapse0x26490c0() {
   return (neuron0x26376a0()*-0.801284);
}

double NNfunction_cLg::synapse0x2649100() {
   return (neuron0x26379e0()*0.0116275);
}

double NNfunction_cLg::synapse0x2649140() {
   return (neuron0x2637d20()*0.0147637);
}

double NNfunction_cLg::synapse0x2649180() {
   return (neuron0x2638060()*0.0223556);
}

double NNfunction_cLg::synapse0x26491c0() {
   return (neuron0x26383a0()*-0.00873544);
}

double NNfunction_cLg::synapse0x2649200() {
   return (neuron0x26386e0()*0.00236365);
}

double NNfunction_cLg::synapse0x2649240() {
   return (neuron0x2638a20()*0.000933948);
}

double NNfunction_cLg::synapse0x2649280() {
   return (neuron0x2638d60()*0.0131175);
}

double NNfunction_cLg::synapse0x26492c0() {
   return (neuron0x26390a0()*-0.0104372);
}

double NNfunction_cLg::synapse0x2649300() {
   return (neuron0x26393e0()*-0.80924);
}

double NNfunction_cLg::synapse0x2649340() {
   return (neuron0x2639720()*0.028749);
}

double NNfunction_cLg::synapse0x2649380() {
   return (neuron0x2639a60()*0.0358861);
}

double NNfunction_cLg::synapse0x26493c0() {
   return (neuron0x2639da0()*-0.0306157);
}

double NNfunction_cLg::synapse0x2648e50() {
   return (neuron0x263a0e0()*-0.000873314);
}

double NNfunction_cLg::synapse0x2648e90() {
   return (neuron0x263a640()*0.00560981);
}

double NNfunction_cLg::synapse0x2649510() {
   return (neuron0x263a860()*0.00380101);
}

double NNfunction_cLg::synapse0x2649550() {
   return (neuron0x263aba0()*-0.00778106);
}

double NNfunction_cLg::synapse0x2649590() {
   return (neuron0x263aee0()*0.00551711);
}

double NNfunction_cLg::synapse0x26495d0() {
   return (neuron0x263b220()*0.0154139);
}

double NNfunction_cLg::synapse0x2649610() {
   return (neuron0x263b560()*-0.00859342);
}

double NNfunction_cLg::synapse0x2649650() {
   return (neuron0x263b8a0()*0.0111831);
}

double NNfunction_cLg::synapse0x26499d0() {
   return (neuron0x2636ce0()*0.238394);
}

double NNfunction_cLg::synapse0x2649a10() {
   return (neuron0x2637020()*-0.0738374);
}

double NNfunction_cLg::synapse0x2649a50() {
   return (neuron0x2637360()*0.366968);
}

double NNfunction_cLg::synapse0x2649a90() {
   return (neuron0x26376a0()*-0.476274);
}

double NNfunction_cLg::synapse0x2649ad0() {
   return (neuron0x26379e0()*-0.535674);
}

double NNfunction_cLg::synapse0x2649b10() {
   return (neuron0x2637d20()*0.242347);
}

double NNfunction_cLg::synapse0x2649b50() {
   return (neuron0x2638060()*-0.240737);
}

double NNfunction_cLg::synapse0x2649b90() {
   return (neuron0x26383a0()*-0.488608);
}

double NNfunction_cLg::synapse0x2649bd0() {
   return (neuron0x26386e0()*-0.226609);
}

double NNfunction_cLg::synapse0x2649c10() {
   return (neuron0x2638a20()*0.33453);
}

double NNfunction_cLg::synapse0x2649c50() {
   return (neuron0x2638d60()*0.141748);
}

double NNfunction_cLg::synapse0x2649c90() {
   return (neuron0x26390a0()*-0.0873497);
}

double NNfunction_cLg::synapse0x2649cd0() {
   return (neuron0x26393e0()*-0.208475);
}

double NNfunction_cLg::synapse0x2649d10() {
   return (neuron0x2639720()*0.484002);
}

double NNfunction_cLg::synapse0x2649d50() {
   return (neuron0x2639a60()*0.149563);
}

double NNfunction_cLg::synapse0x2649d90() {
   return (neuron0x2639da0()*-0.0428609);
}

double NNfunction_cLg::synapse0x2649820() {
   return (neuron0x263a0e0()*-0.410497);
}

double NNfunction_cLg::synapse0x2649860() {
   return (neuron0x263a640()*-0.355232);
}

double NNfunction_cLg::synapse0x2649ee0() {
   return (neuron0x263a860()*-0.170935);
}

double NNfunction_cLg::synapse0x2649f20() {
   return (neuron0x263aba0()*-0.419642);
}

double NNfunction_cLg::synapse0x2649f60() {
   return (neuron0x263aee0()*0.0271467);
}

double NNfunction_cLg::synapse0x2649fa0() {
   return (neuron0x263b220()*0.320102);
}

double NNfunction_cLg::synapse0x2649fe0() {
   return (neuron0x263b560()*0.290894);
}

double NNfunction_cLg::synapse0x264a020() {
   return (neuron0x263b8a0()*0.139151);
}

double NNfunction_cLg::synapse0x264a3a0() {
   return (neuron0x2636ce0()*-0.00224269);
}

double NNfunction_cLg::synapse0x264a3e0() {
   return (neuron0x2637020()*-0.000623553);
}

double NNfunction_cLg::synapse0x264a420() {
   return (neuron0x2637360()*-0.827391);
}

double NNfunction_cLg::synapse0x264a460() {
   return (neuron0x26376a0()*-0.0361718);
}

double NNfunction_cLg::synapse0x264a4a0() {
   return (neuron0x26379e0()*0.00117842);
}

double NNfunction_cLg::synapse0x264a4e0() {
   return (neuron0x2637d20()*0.0106801);
}

double NNfunction_cLg::synapse0x264a520() {
   return (neuron0x2638060()*-0.0149294);
}

double NNfunction_cLg::synapse0x264a560() {
   return (neuron0x26383a0()*0.011713);
}

double NNfunction_cLg::synapse0x264a5a0() {
   return (neuron0x26386e0()*0.00609204);
}

double NNfunction_cLg::synapse0x2642760() {
   return (neuron0x2638a20()*0.0081701);
}

double NNfunction_cLg::synapse0x26427a0() {
   return (neuron0x2638d60()*-0.0169198);
}

double NNfunction_cLg::synapse0x26427e0() {
   return (neuron0x26390a0()*0.0110231);
}

double NNfunction_cLg::synapse0x2642820() {
   return (neuron0x26393e0()*0.724943);
}

double NNfunction_cLg::synapse0x2642860() {
   return (neuron0x2639720()*-0.0537248);
}

double NNfunction_cLg::synapse0x26428a0() {
   return (neuron0x2639a60()*0.0431891);
}

double NNfunction_cLg::synapse0x26428e0() {
   return (neuron0x2639da0()*0.0237325);
}

double NNfunction_cLg::synapse0x264a1f0() {
   return (neuron0x263a0e0()*-0.047703);
}

double NNfunction_cLg::synapse0x264a230() {
   return (neuron0x263a640()*0.00175712);
}

double NNfunction_cLg::synapse0x2642a30() {
   return (neuron0x263a860()*0.00468963);
}

double NNfunction_cLg::synapse0x2642a70() {
   return (neuron0x263aba0()*0.00419572);
}

double NNfunction_cLg::synapse0x2642ab0() {
   return (neuron0x263aee0()*0.000348694);
}

double NNfunction_cLg::synapse0x2642af0() {
   return (neuron0x263b220()*-0.011151);
}

double NNfunction_cLg::synapse0x2642b30() {
   return (neuron0x263b560()*0.00994832);
}

double NNfunction_cLg::synapse0x2642b70() {
   return (neuron0x263b8a0()*0.00390594);
}

double NNfunction_cLg::synapse0x2642ef0() {
   return (neuron0x2636ce0()*-0.00831587);
}

double NNfunction_cLg::synapse0x2642f30() {
   return (neuron0x2637020()*-0.0133556);
}

double NNfunction_cLg::synapse0x2642f70() {
   return (neuron0x2637360()*-0.604317);
}

double NNfunction_cLg::synapse0x2642fb0() {
   return (neuron0x26376a0()*-0.0178628);
}

double NNfunction_cLg::synapse0x2642ff0() {
   return (neuron0x26379e0()*0.011397);
}

double NNfunction_cLg::synapse0x2643030() {
   return (neuron0x2637d20()*0.0233118);
}

double NNfunction_cLg::synapse0x2643070() {
   return (neuron0x2638060()*0.0136117);
}

double NNfunction_cLg::synapse0x26430b0() {
   return (neuron0x26383a0()*0.00616097);
}

double NNfunction_cLg::synapse0x26430f0() {
   return (neuron0x26386e0()*-0.00271513);
}

double NNfunction_cLg::synapse0x2643130() {
   return (neuron0x2638a20()*-0.00107797);
}

double NNfunction_cLg::synapse0x2643170() {
   return (neuron0x2638d60()*-0.0045717);
}

double NNfunction_cLg::synapse0x26431b0() {
   return (neuron0x26390a0()*-0.00165852);
}

double NNfunction_cLg::synapse0x26431f0() {
   return (neuron0x26393e0()*0.0593689);
}

double NNfunction_cLg::synapse0x2643230() {
   return (neuron0x2639720()*-0.0069997);
}

double NNfunction_cLg::synapse0x2643270() {
   return (neuron0x2639a60()*0.00397576);
}

double NNfunction_cLg::synapse0x26432b0() {
   return (neuron0x2639da0()*-0.00749144);
}

double NNfunction_cLg::synapse0x2642d40() {
   return (neuron0x263a0e0()*-0.0434203);
}

double NNfunction_cLg::synapse0x2642d80() {
   return (neuron0x263a640()*-0.00990371);
}

double NNfunction_cLg::synapse0x2643400() {
   return (neuron0x263a860()*-0.00992494);
}

double NNfunction_cLg::synapse0x2643440() {
   return (neuron0x263aba0()*-0.00746873);
}

double NNfunction_cLg::synapse0x2643480() {
   return (neuron0x263aee0()*0.00775654);
}

double NNfunction_cLg::synapse0x26434c0() {
   return (neuron0x263b220()*0.0015394);
}

double NNfunction_cLg::synapse0x2643500() {
   return (neuron0x263b560()*-0.00469901);
}

double NNfunction_cLg::synapse0x2643540() {
   return (neuron0x263b8a0()*0.00351588);
}

double NNfunction_cLg::synapse0x2643710() {
   return (neuron0x2636ce0()*0.0178024);
}

double NNfunction_cLg::synapse0x264c7a0() {
   return (neuron0x2637020()*-0.0228583);
}

double NNfunction_cLg::synapse0x264c7e0() {
   return (neuron0x2637360()*1.42691);
}

double NNfunction_cLg::synapse0x264c820() {
   return (neuron0x26376a0()*0.27781);
}

double NNfunction_cLg::synapse0x264c860() {
   return (neuron0x26379e0()*-0.0765165);
}

double NNfunction_cLg::synapse0x264c8a0() {
   return (neuron0x2637d20()*-0.156506);
}

double NNfunction_cLg::synapse0x264c8e0() {
   return (neuron0x2638060()*0.0511638);
}

double NNfunction_cLg::synapse0x264c920() {
   return (neuron0x26383a0()*-0.0242006);
}

double NNfunction_cLg::synapse0x264c960() {
   return (neuron0x26386e0()*-0.0270255);
}

double NNfunction_cLg::synapse0x264c9a0() {
   return (neuron0x2638a20()*0.0358154);
}

double NNfunction_cLg::synapse0x264c9e0() {
   return (neuron0x2638d60()*0.0169945);
}

double NNfunction_cLg::synapse0x264ca20() {
   return (neuron0x26390a0()*-0.0150286);
}

double NNfunction_cLg::synapse0x264ca60() {
   return (neuron0x26393e0()*1.29349);
}

double NNfunction_cLg::synapse0x264caa0() {
   return (neuron0x2639720()*-0.12681);
}

double NNfunction_cLg::synapse0x264cae0() {
   return (neuron0x2639a60()*0.0875357);
}

double NNfunction_cLg::synapse0x264cb20() {
   return (neuron0x2639da0()*-0.0482015);
}

double NNfunction_cLg::synapse0x264c5f0() {
   return (neuron0x263a0e0()*-0.018249);
}

double NNfunction_cLg::synapse0x264c630() {
   return (neuron0x263a640()*-0.0522729);
}

double NNfunction_cLg::synapse0x264cc70() {
   return (neuron0x263a860()*-0.0346994);
}

double NNfunction_cLg::synapse0x264ccb0() {
   return (neuron0x263aba0()*-0.0664599);
}

double NNfunction_cLg::synapse0x264ccf0() {
   return (neuron0x263aee0()*-0.0214387);
}

double NNfunction_cLg::synapse0x264cd30() {
   return (neuron0x263b220()*-0.00443527);
}

double NNfunction_cLg::synapse0x264cd70() {
   return (neuron0x263b560()*0.0867758);
}

double NNfunction_cLg::synapse0x264cdb0() {
   return (neuron0x263b8a0()*0.0246409);
}

double NNfunction_cLg::synapse0x264d130() {
   return (neuron0x2636ce0()*-0.239363);
}

double NNfunction_cLg::synapse0x264d170() {
   return (neuron0x2637020()*0.0855706);
}

double NNfunction_cLg::synapse0x264d1b0() {
   return (neuron0x2637360()*0.346517);
}

double NNfunction_cLg::synapse0x264d1f0() {
   return (neuron0x26376a0()*0.773817);
}

double NNfunction_cLg::synapse0x264d230() {
   return (neuron0x26379e0()*-0.0255745);
}

double NNfunction_cLg::synapse0x264d270() {
   return (neuron0x2637d20()*0.447227);
}

double NNfunction_cLg::synapse0x264d2b0() {
   return (neuron0x2638060()*-0.326488);
}

double NNfunction_cLg::synapse0x264d2f0() {
   return (neuron0x26383a0()*0.0716715);
}

double NNfunction_cLg::synapse0x264d330() {
   return (neuron0x26386e0()*-0.0750527);
}

double NNfunction_cLg::synapse0x264d370() {
   return (neuron0x2638a20()*0.705953);
}

double NNfunction_cLg::synapse0x264d3b0() {
   return (neuron0x2638d60()*-0.0367053);
}

double NNfunction_cLg::synapse0x264d3f0() {
   return (neuron0x26390a0()*0.127098);
}

double NNfunction_cLg::synapse0x264d430() {
   return (neuron0x26393e0()*-0.136085);
}

double NNfunction_cLg::synapse0x264d470() {
   return (neuron0x2639720()*-0.3125);
}

double NNfunction_cLg::synapse0x264d4b0() {
   return (neuron0x2639a60()*0.313248);
}

double NNfunction_cLg::synapse0x264d4f0() {
   return (neuron0x2639da0()*0.431098);
}

double NNfunction_cLg::synapse0x264cf80() {
   return (neuron0x263a0e0()*0.0430252);
}

double NNfunction_cLg::synapse0x264cfc0() {
   return (neuron0x263a640()*-0.602488);
}

double NNfunction_cLg::synapse0x264d640() {
   return (neuron0x263a860()*-0.484554);
}

double NNfunction_cLg::synapse0x264d680() {
   return (neuron0x263aba0()*-0.237392);
}

double NNfunction_cLg::synapse0x264d6c0() {
   return (neuron0x263aee0()*0.209107);
}

double NNfunction_cLg::synapse0x264d700() {
   return (neuron0x263b220()*-0.201714);
}

double NNfunction_cLg::synapse0x264d740() {
   return (neuron0x263b560()*-0.140855);
}

double NNfunction_cLg::synapse0x264d780() {
   return (neuron0x263b8a0()*-0.0534398);
}

double NNfunction_cLg::synapse0x264db00() {
   return (neuron0x2636ce0()*-0.166546);
}

double NNfunction_cLg::synapse0x264db40() {
   return (neuron0x2637020()*-0.314689);
}

double NNfunction_cLg::synapse0x264db80() {
   return (neuron0x2637360()*-0.415637);
}

double NNfunction_cLg::synapse0x264dbc0() {
   return (neuron0x26376a0()*-1.00186);
}

double NNfunction_cLg::synapse0x264dc00() {
   return (neuron0x26379e0()*-0.519373);
}

double NNfunction_cLg::synapse0x264dc40() {
   return (neuron0x2637d20()*0.0810973);
}

double NNfunction_cLg::synapse0x264dc80() {
   return (neuron0x2638060()*-0.13502);
}

double NNfunction_cLg::synapse0x264dcc0() {
   return (neuron0x26383a0()*0.319014);
}

double NNfunction_cLg::synapse0x264dd00() {
   return (neuron0x26386e0()*-0.147319);
}

double NNfunction_cLg::synapse0x264dd40() {
   return (neuron0x2638a20()*-0.0542215);
}

double NNfunction_cLg::synapse0x264dd80() {
   return (neuron0x2638d60()*-0.271844);
}

double NNfunction_cLg::synapse0x264ddc0() {
   return (neuron0x26390a0()*0.20398);
}

double NNfunction_cLg::synapse0x264de00() {
   return (neuron0x26393e0()*0.521543);
}

double NNfunction_cLg::synapse0x264de40() {
   return (neuron0x2639720()*0.294231);
}

double NNfunction_cLg::synapse0x264de80() {
   return (neuron0x2639a60()*0.462208);
}

double NNfunction_cLg::synapse0x264dec0() {
   return (neuron0x2639da0()*0.0385282);
}

double NNfunction_cLg::synapse0x264d950() {
   return (neuron0x263a0e0()*0.442943);
}

double NNfunction_cLg::synapse0x264d990() {
   return (neuron0x263a640()*0.00632772);
}

double NNfunction_cLg::synapse0x264e010() {
   return (neuron0x263a860()*0.122134);
}

double NNfunction_cLg::synapse0x264e050() {
   return (neuron0x263aba0()*-0.338046);
}

double NNfunction_cLg::synapse0x264e090() {
   return (neuron0x263aee0()*0.370454);
}

double NNfunction_cLg::synapse0x264e0d0() {
   return (neuron0x263b220()*-0.00960041);
}

double NNfunction_cLg::synapse0x264e110() {
   return (neuron0x263b560()*0.143584);
}

double NNfunction_cLg::synapse0x264e150() {
   return (neuron0x263b8a0()*0.10736);
}

double NNfunction_cLg::synapse0x264e4d0() {
   return (neuron0x2636ce0()*0.00105201);
}

double NNfunction_cLg::synapse0x264e510() {
   return (neuron0x2637020()*-0.00064682);
}

double NNfunction_cLg::synapse0x264e550() {
   return (neuron0x2637360()*-0.0112909);
}

double NNfunction_cLg::synapse0x264e590() {
   return (neuron0x26376a0()*-0.0572462);
}

double NNfunction_cLg::synapse0x264e5d0() {
   return (neuron0x26379e0()*-0.00122262);
}

double NNfunction_cLg::synapse0x264e610() {
   return (neuron0x2637d20()*0.00138483);
}

double NNfunction_cLg::synapse0x264e650() {
   return (neuron0x2638060()*0.00583063);
}

double NNfunction_cLg::synapse0x264e690() {
   return (neuron0x26383a0()*-0.0113799);
}

double NNfunction_cLg::synapse0x264e6d0() {
   return (neuron0x26386e0()*0.0156134);
}

double NNfunction_cLg::synapse0x264e710() {
   return (neuron0x2638a20()*0.00672118);
}

double NNfunction_cLg::synapse0x264e750() {
   return (neuron0x2638d60()*-0.00279711);
}

double NNfunction_cLg::synapse0x264e790() {
   return (neuron0x26390a0()*-0.0161205);
}

double NNfunction_cLg::synapse0x264e7d0() {
   return (neuron0x26393e0()*2.32439);
}

double NNfunction_cLg::synapse0x264e810() {
   return (neuron0x2639720()*0.0239211);
}

double NNfunction_cLg::synapse0x264e850() {
   return (neuron0x2639a60()*-0.00511458);
}

double NNfunction_cLg::synapse0x264e890() {
   return (neuron0x2639da0()*-0.000775447);
}

double NNfunction_cLg::synapse0x264e320() {
   return (neuron0x263a0e0()*0.0184945);
}

double NNfunction_cLg::synapse0x264e360() {
   return (neuron0x263a640()*0.00249355);
}

double NNfunction_cLg::synapse0x264e9e0() {
   return (neuron0x263a860()*-0.00955);
}

double NNfunction_cLg::synapse0x264ea20() {
   return (neuron0x263aba0()*0.0106057);
}

double NNfunction_cLg::synapse0x264ea60() {
   return (neuron0x263aee0()*-0.00109262);
}

double NNfunction_cLg::synapse0x264eaa0() {
   return (neuron0x263b220()*0.00579894);
}

double NNfunction_cLg::synapse0x264eae0() {
   return (neuron0x263b560()*-0.00174774);
}

double NNfunction_cLg::synapse0x264eb20() {
   return (neuron0x263b8a0()*0.00179483);
}

double NNfunction_cLg::synapse0x264eea0() {
   return (neuron0x2636ce0()*-0.0476901);
}

double NNfunction_cLg::synapse0x264eee0() {
   return (neuron0x2637020()*0.303279);
}

double NNfunction_cLg::synapse0x264ef20() {
   return (neuron0x2637360()*0.466947);
}

double NNfunction_cLg::synapse0x264ef60() {
   return (neuron0x26376a0()*-0.0792513);
}

double NNfunction_cLg::synapse0x264efa0() {
   return (neuron0x26379e0()*0.0305233);
}

double NNfunction_cLg::synapse0x264efe0() {
   return (neuron0x2637d20()*0.521831);
}

double NNfunction_cLg::synapse0x264f020() {
   return (neuron0x2638060()*-0.792914);
}

double NNfunction_cLg::synapse0x264f060() {
   return (neuron0x26383a0()*0.00127492);
}

double NNfunction_cLg::synapse0x264f0a0() {
   return (neuron0x26386e0()*0.30488);
}

double NNfunction_cLg::synapse0x264f0e0() {
   return (neuron0x2638a20()*0.0316617);
}

double NNfunction_cLg::synapse0x264f120() {
   return (neuron0x2638d60()*-0.259406);
}

double NNfunction_cLg::synapse0x264f160() {
   return (neuron0x26390a0()*0.0143265);
}

double NNfunction_cLg::synapse0x264f1a0() {
   return (neuron0x26393e0()*0.865791);
}

double NNfunction_cLg::synapse0x264f1e0() {
   return (neuron0x2639720()*0.302869);
}

double NNfunction_cLg::synapse0x264f220() {
   return (neuron0x2639a60()*-0.35354);
}

double NNfunction_cLg::synapse0x264f260() {
   return (neuron0x2639da0()*0.234879);
}

double NNfunction_cLg::synapse0x264ecf0() {
   return (neuron0x263a0e0()*0.00875309);
}

double NNfunction_cLg::synapse0x264ed30() {
   return (neuron0x263a640()*-0.489964);
}

double NNfunction_cLg::synapse0x264f3b0() {
   return (neuron0x263a860()*0.0960055);
}

double NNfunction_cLg::synapse0x264f3f0() {
   return (neuron0x263aba0()*-0.463111);
}

double NNfunction_cLg::synapse0x264f430() {
   return (neuron0x263aee0()*0.0364561);
}

double NNfunction_cLg::synapse0x264f470() {
   return (neuron0x263b220()*0.255513);
}

double NNfunction_cLg::synapse0x264f4b0() {
   return (neuron0x263b560()*-0.329023);
}

double NNfunction_cLg::synapse0x264f4f0() {
   return (neuron0x263b8a0()*-0.0915617);
}

double NNfunction_cLg::synapse0x264f870() {
   return (neuron0x2636ce0()*-0.262537);
}

double NNfunction_cLg::synapse0x264f8b0() {
   return (neuron0x2637020()*0.143743);
}

double NNfunction_cLg::synapse0x264f8f0() {
   return (neuron0x2637360()*0.253205);
}

double NNfunction_cLg::synapse0x264f930() {
   return (neuron0x26376a0()*0.0152403);
}

double NNfunction_cLg::synapse0x264f970() {
   return (neuron0x26379e0()*0.0760309);
}

double NNfunction_cLg::synapse0x264f9b0() {
   return (neuron0x2637d20()*0.112463);
}

double NNfunction_cLg::synapse0x264f9f0() {
   return (neuron0x2638060()*-0.197611);
}

double NNfunction_cLg::synapse0x264fa30() {
   return (neuron0x26383a0()*0.27026);
}

double NNfunction_cLg::synapse0x264fa70() {
   return (neuron0x26386e0()*-0.464365);
}

double NNfunction_cLg::synapse0x264fab0() {
   return (neuron0x2638a20()*-0.05813);
}

double NNfunction_cLg::synapse0x264faf0() {
   return (neuron0x2638d60()*0.0126037);
}

double NNfunction_cLg::synapse0x264fb30() {
   return (neuron0x26390a0()*-0.167145);
}

double NNfunction_cLg::synapse0x264fb70() {
   return (neuron0x26393e0()*-0.553662);
}

double NNfunction_cLg::synapse0x264fbb0() {
   return (neuron0x2639720()*-0.149234);
}

double NNfunction_cLg::synapse0x264fbf0() {
   return (neuron0x2639a60()*0.105906);
}

double NNfunction_cLg::synapse0x264fc30() {
   return (neuron0x2639da0()*-0.0740171);
}

double NNfunction_cLg::synapse0x264f6c0() {
   return (neuron0x263a0e0()*-0.0730579);
}

double NNfunction_cLg::synapse0x264f700() {
   return (neuron0x263a640()*-0.0140698);
}

double NNfunction_cLg::synapse0x264fd80() {
   return (neuron0x263a860()*-0.142217);
}

double NNfunction_cLg::synapse0x264fdc0() {
   return (neuron0x263aba0()*-0.437744);
}

double NNfunction_cLg::synapse0x264fe00() {
   return (neuron0x263aee0()*-0.243613);
}

double NNfunction_cLg::synapse0x264fe40() {
   return (neuron0x263b220()*0.138734);
}

double NNfunction_cLg::synapse0x264fe80() {
   return (neuron0x263b560()*-0.278354);
}

double NNfunction_cLg::synapse0x264fec0() {
   return (neuron0x263b8a0()*0.229473);
}

double NNfunction_cLg::synapse0x2650240() {
   return (neuron0x2636ce0()*-0.538401);
}

double NNfunction_cLg::synapse0x2650280() {
   return (neuron0x2637020()*0.296944);
}

double NNfunction_cLg::synapse0x26502c0() {
   return (neuron0x2637360()*-0.319063);
}

double NNfunction_cLg::synapse0x2650300() {
   return (neuron0x26376a0()*0.37781);
}

double NNfunction_cLg::synapse0x2650340() {
   return (neuron0x26379e0()*-0.343093);
}

double NNfunction_cLg::synapse0x2650380() {
   return (neuron0x2637d20()*0.28391);
}

double NNfunction_cLg::synapse0x26503c0() {
   return (neuron0x2638060()*-0.391594);
}

double NNfunction_cLg::synapse0x2650400() {
   return (neuron0x26383a0()*-0.128038);
}

double NNfunction_cLg::synapse0x2650440() {
   return (neuron0x26386e0()*0.485262);
}

double NNfunction_cLg::synapse0x2650480() {
   return (neuron0x2638a20()*0.421077);
}

double NNfunction_cLg::synapse0x26504c0() {
   return (neuron0x2638d60()*-0.312287);
}

double NNfunction_cLg::synapse0x2650500() {
   return (neuron0x26390a0()*0.300493);
}

double NNfunction_cLg::synapse0x2650540() {
   return (neuron0x26393e0()*0.511823);
}

double NNfunction_cLg::synapse0x2650580() {
   return (neuron0x2639720()*-0.0963703);
}

double NNfunction_cLg::synapse0x26505c0() {
   return (neuron0x2639a60()*-0.0258467);
}

double NNfunction_cLg::synapse0x2650600() {
   return (neuron0x2639da0()*-0.131597);
}

double NNfunction_cLg::synapse0x2650090() {
   return (neuron0x263a0e0()*-0.114056);
}

double NNfunction_cLg::synapse0x26500d0() {
   return (neuron0x263a640()*0.403946);
}

double NNfunction_cLg::synapse0x2650750() {
   return (neuron0x263a860()*0.0568274);
}

double NNfunction_cLg::synapse0x2650790() {
   return (neuron0x263aba0()*-0.185216);
}

double NNfunction_cLg::synapse0x26507d0() {
   return (neuron0x263aee0()*0.0940124);
}

double NNfunction_cLg::synapse0x2650810() {
   return (neuron0x263b220()*-0.525934);
}

double NNfunction_cLg::synapse0x2650850() {
   return (neuron0x263b560()*0.37454);
}

double NNfunction_cLg::synapse0x2650890() {
   return (neuron0x263b8a0()*-0.197098);
}

double NNfunction_cLg::synapse0x2650c10() {
   return (neuron0x2636ce0()*0.00497821);
}

double NNfunction_cLg::synapse0x2650c50() {
   return (neuron0x2637020()*0.00122937);
}

double NNfunction_cLg::synapse0x2650c90() {
   return (neuron0x2637360()*-0.014585);
}

double NNfunction_cLg::synapse0x2650cd0() {
   return (neuron0x26376a0()*-2.93926);
}

double NNfunction_cLg::synapse0x2650d10() {
   return (neuron0x26379e0()*-0.00331864);
}

double NNfunction_cLg::synapse0x2650d50() {
   return (neuron0x2637d20()*-0.00448832);
}

double NNfunction_cLg::synapse0x2650d90() {
   return (neuron0x2638060()*-0.00373022);
}

double NNfunction_cLg::synapse0x2650dd0() {
   return (neuron0x26383a0()*0.00279629);
}

double NNfunction_cLg::synapse0x2650e10() {
   return (neuron0x26386e0()*-0.00263906);
}

double NNfunction_cLg::synapse0x2650e50() {
   return (neuron0x2638a20()*-0.00525864);
}

double NNfunction_cLg::synapse0x2650e90() {
   return (neuron0x2638d60()*-0.000379731);
}

double NNfunction_cLg::synapse0x2650ed0() {
   return (neuron0x26390a0()*0.00066395);
}

double NNfunction_cLg::synapse0x2650f10() {
   return (neuron0x26393e0()*-0.064658);
}

double NNfunction_cLg::synapse0x2650f50() {
   return (neuron0x2639720()*-0.0200336);
}

double NNfunction_cLg::synapse0x2650f90() {
   return (neuron0x2639a60()*-0.00507236);
}

double NNfunction_cLg::synapse0x2650fd0() {
   return (neuron0x2639da0()*-0.00144269);
}

double NNfunction_cLg::synapse0x2650a60() {
   return (neuron0x263a0e0()*-0.000762005);
}

double NNfunction_cLg::synapse0x2650aa0() {
   return (neuron0x263a640()*-7.64919e-05);
}

double NNfunction_cLg::synapse0x2651120() {
   return (neuron0x263a860()*0.00241517);
}

double NNfunction_cLg::synapse0x2651160() {
   return (neuron0x263aba0()*0.00109739);
}

double NNfunction_cLg::synapse0x26511a0() {
   return (neuron0x263aee0()*0.000477812);
}

double NNfunction_cLg::synapse0x26511e0() {
   return (neuron0x263b220()*-0.00302141);
}

double NNfunction_cLg::synapse0x2651220() {
   return (neuron0x263b560()*0.00273473);
}

double NNfunction_cLg::synapse0x2651260() {
   return (neuron0x263b8a0()*-0.00415986);
}

double NNfunction_cLg::synapse0x26515e0() {
   return (neuron0x2636ce0()*0.0586351);
}

double NNfunction_cLg::synapse0x2645bb0() {
   return (neuron0x2637020()*-0.0240289);
}

double NNfunction_cLg::synapse0x2645bf0() {
   return (neuron0x2637360()*-0.200899);
}

double NNfunction_cLg::synapse0x2645c30() {
   return (neuron0x26376a0()*-0.116128);
}

double NNfunction_cLg::synapse0x2645e80() {
   return (neuron0x26379e0()*-0.188601);
}

double NNfunction_cLg::synapse0x2645ec0() {
   return (neuron0x2637d20()*-0.113423);
}

double NNfunction_cLg::synapse0x2645f00() {
   return (neuron0x2638060()*-0.0447592);
}

double NNfunction_cLg::synapse0x2646150() {
   return (neuron0x26383a0()*0.176664);
}

double NNfunction_cLg::synapse0x2646190() {
   return (neuron0x26386e0()*-0.186165);
}

double NNfunction_cLg::synapse0x26463e0() {
   return (neuron0x2638a20()*-0.447419);
}

double NNfunction_cLg::synapse0x2646420() {
   return (neuron0x2638d60()*-0.351911);
}

double NNfunction_cLg::synapse0x2646460() {
   return (neuron0x26390a0()*0.194051);
}

double NNfunction_cLg::synapse0x26466b0() {
   return (neuron0x26393e0()*-0.971211);
}

double NNfunction_cLg::synapse0x26466f0() {
   return (neuron0x2639720()*0.235288);
}

double NNfunction_cLg::synapse0x2646940() {
   return (neuron0x2639a60()*0.272838);
}

double NNfunction_cLg::synapse0x2646980() {
   return (neuron0x2639da0()*0.362931);
}

double NNfunction_cLg::synapse0x2651430() {
   return (neuron0x263a0e0()*0.355773);
}

double NNfunction_cLg::synapse0x2651470() {
   return (neuron0x263a640()*0.219847);
}

double NNfunction_cLg::synapse0x2646ad0() {
   return (neuron0x263a860()*0.017751);
}

double NNfunction_cLg::synapse0x2646fe0() {
   return (neuron0x263aba0()*0.23916);
}

double NNfunction_cLg::synapse0x2647020() {
   return (neuron0x263aee0()*-0.0700685);
}

double NNfunction_cLg::synapse0x2647060() {
   return (neuron0x263b220()*0.0123946);
}

double NNfunction_cLg::synapse0x26472b0() {
   return (neuron0x263b560()*0.141727);
}

double NNfunction_cLg::synapse0x26472f0() {
   return (neuron0x263b8a0()*0.109609);
}

double NNfunction_cLg::synapse0x2646ba0() {
   return (neuron0x2636ce0()*-0.168549);
}

double NNfunction_cLg::synapse0x2646be0() {
   return (neuron0x2637020()*-0.12905);
}

double NNfunction_cLg::synapse0x2646c20() {
   return (neuron0x2637360()*-0.340963);
}

double NNfunction_cLg::synapse0x2646c60() {
   return (neuron0x26376a0()*0.712142);
}

double NNfunction_cLg::synapse0x26475e0() {
   return (neuron0x26379e0()*-0.0471304);
}

double NNfunction_cLg::synapse0x2653930() {
   return (neuron0x2637d20()*-0.333625);
}

double NNfunction_cLg::synapse0x2653970() {
   return (neuron0x2638060()*-0.0743798);
}

double NNfunction_cLg::synapse0x26539b0() {
   return (neuron0x26383a0()*0.152089);
}

double NNfunction_cLg::synapse0x26539f0() {
   return (neuron0x26386e0()*0.126947);
}

double NNfunction_cLg::synapse0x2653a30() {
   return (neuron0x2638a20()*0.0823876);
}

double NNfunction_cLg::synapse0x2653a70() {
   return (neuron0x2638d60()*-0.05303);
}

double NNfunction_cLg::synapse0x2653ab0() {
   return (neuron0x26390a0()*-0.0449861);
}

double NNfunction_cLg::synapse0x2653af0() {
   return (neuron0x26393e0()*-0.751325);
}

double NNfunction_cLg::synapse0x2653b30() {
   return (neuron0x2639720()*-0.839497);
}

double NNfunction_cLg::synapse0x2653b70() {
   return (neuron0x2639a60()*0.00265346);
}

double NNfunction_cLg::synapse0x2653bb0() {
   return (neuron0x2639da0()*0.605881);
}

double NNfunction_cLg::synapse0x26474c0() {
   return (neuron0x263a0e0()*1.24012);
}

double NNfunction_cLg::synapse0x2647500() {
   return (neuron0x263a640()*-0.176216);
}

double NNfunction_cLg::synapse0x2653d00() {
   return (neuron0x263a860()*0.0606943);
}

double NNfunction_cLg::synapse0x2653d40() {
   return (neuron0x263aba0()*-0.0442347);
}

double NNfunction_cLg::synapse0x2653d80() {
   return (neuron0x263aee0()*0.143093);
}

double NNfunction_cLg::synapse0x2653dc0() {
   return (neuron0x263b220()*-0.296956);
}

double NNfunction_cLg::synapse0x2653e00() {
   return (neuron0x263b560()*0.00574632);
}

double NNfunction_cLg::synapse0x2653e40() {
   return (neuron0x263b8a0()*-0.080499);
}

double NNfunction_cLg::synapse0x26541c0() {
   return (neuron0x2636ce0()*-0.0828141);
}

double NNfunction_cLg::synapse0x2654200() {
   return (neuron0x2637020()*-0.205827);
}

double NNfunction_cLg::synapse0x2654240() {
   return (neuron0x2637360()*0.118803);
}

double NNfunction_cLg::synapse0x2654280() {
   return (neuron0x26376a0()*0.0645684);
}

double NNfunction_cLg::synapse0x26542c0() {
   return (neuron0x26379e0()*0.204072);
}

double NNfunction_cLg::synapse0x2654300() {
   return (neuron0x2637d20()*0.578552);
}

double NNfunction_cLg::synapse0x2654340() {
   return (neuron0x2638060()*0.0818433);
}

double NNfunction_cLg::synapse0x2654380() {
   return (neuron0x26383a0()*-0.0905158);
}

double NNfunction_cLg::synapse0x26543c0() {
   return (neuron0x26386e0()*-0.697253);
}

double NNfunction_cLg::synapse0x2654400() {
   return (neuron0x2638a20()*-0.439192);
}

double NNfunction_cLg::synapse0x2654440() {
   return (neuron0x2638d60()*-0.260241);
}

double NNfunction_cLg::synapse0x2654480() {
   return (neuron0x26390a0()*0.112345);
}

double NNfunction_cLg::synapse0x26544c0() {
   return (neuron0x26393e0()*1.21011);
}

double NNfunction_cLg::synapse0x2654500() {
   return (neuron0x2639720()*-0.0802914);
}

double NNfunction_cLg::synapse0x2654540() {
   return (neuron0x2639a60()*-0.109533);
}

double NNfunction_cLg::synapse0x2654580() {
   return (neuron0x2639da0()*-0.111604);
}

double NNfunction_cLg::synapse0x2654010() {
   return (neuron0x263a0e0()*-0.119691);
}

double NNfunction_cLg::synapse0x2654050() {
   return (neuron0x263a640()*-0.0409172);
}

double NNfunction_cLg::synapse0x26546d0() {
   return (neuron0x263a860()*-0.329504);
}

double NNfunction_cLg::synapse0x2654710() {
   return (neuron0x263aba0()*0.185713);
}

double NNfunction_cLg::synapse0x2654750() {
   return (neuron0x263aee0()*0.0800866);
}

double NNfunction_cLg::synapse0x2654790() {
   return (neuron0x263b220()*-0.0277385);
}

double NNfunction_cLg::synapse0x26547d0() {
   return (neuron0x263b560()*-0.293983);
}

double NNfunction_cLg::synapse0x2654810() {
   return (neuron0x263b8a0()*-0.0938684);
}

double NNfunction_cLg::synapse0x2654b90() {
   return (neuron0x2636ce0()*0.0371018);
}

double NNfunction_cLg::synapse0x2654bd0() {
   return (neuron0x2637020()*0.164858);
}

double NNfunction_cLg::synapse0x2654c10() {
   return (neuron0x2637360()*0.961687);
}

double NNfunction_cLg::synapse0x2654c50() {
   return (neuron0x26376a0()*0.0496495);
}

double NNfunction_cLg::synapse0x2654c90() {
   return (neuron0x26379e0()*0.706525);
}

double NNfunction_cLg::synapse0x2654cd0() {
   return (neuron0x2637d20()*0.356144);
}

double NNfunction_cLg::synapse0x2654d10() {
   return (neuron0x2638060()*0.298564);
}

double NNfunction_cLg::synapse0x2654d50() {
   return (neuron0x26383a0()*0.445333);
}

double NNfunction_cLg::synapse0x2654d90() {
   return (neuron0x26386e0()*0.134119);
}

double NNfunction_cLg::synapse0x2654dd0() {
   return (neuron0x2638a20()*0.155999);
}

double NNfunction_cLg::synapse0x2654e10() {
   return (neuron0x2638d60()*-0.0252264);
}

double NNfunction_cLg::synapse0x2654e50() {
   return (neuron0x26390a0()*-0.166972);
}

double NNfunction_cLg::synapse0x2654e90() {
   return (neuron0x26393e0()*-0.779879);
}

double NNfunction_cLg::synapse0x2654ed0() {
   return (neuron0x2639720()*0.255762);
}

double NNfunction_cLg::synapse0x2654f10() {
   return (neuron0x2639a60()*0.402031);
}

double NNfunction_cLg::synapse0x2654f50() {
   return (neuron0x2639da0()*-0.392987);
}

double NNfunction_cLg::synapse0x26549e0() {
   return (neuron0x263a0e0()*0.00559507);
}

double NNfunction_cLg::synapse0x2654a20() {
   return (neuron0x263a640()*-0.231033);
}

double NNfunction_cLg::synapse0x26550a0() {
   return (neuron0x263a860()*0.15456);
}

double NNfunction_cLg::synapse0x26550e0() {
   return (neuron0x263aba0()*0.0808708);
}

double NNfunction_cLg::synapse0x2655120() {
   return (neuron0x263aee0()*0.294123);
}

double NNfunction_cLg::synapse0x2655160() {
   return (neuron0x263b220()*-0.0346944);
}

double NNfunction_cLg::synapse0x26551a0() {
   return (neuron0x263b560()*0.264425);
}

double NNfunction_cLg::synapse0x26551e0() {
   return (neuron0x263b8a0()*-0.153918);
}

double NNfunction_cLg::synapse0x2655560() {
   return (neuron0x2636ce0()*-0.0495551);
}

double NNfunction_cLg::synapse0x26555a0() {
   return (neuron0x2637020()*0.0544979);
}

double NNfunction_cLg::synapse0x26555e0() {
   return (neuron0x2637360()*0.241099);
}

double NNfunction_cLg::synapse0x2655620() {
   return (neuron0x26376a0()*0.145759);
}

double NNfunction_cLg::synapse0x2655660() {
   return (neuron0x26379e0()*0.182587);
}

double NNfunction_cLg::synapse0x26556a0() {
   return (neuron0x2637d20()*-0.0177008);
}

double NNfunction_cLg::synapse0x26556e0() {
   return (neuron0x2638060()*0.0943401);
}

double NNfunction_cLg::synapse0x2655720() {
   return (neuron0x26383a0()*0.00317516);
}

double NNfunction_cLg::synapse0x2655760() {
   return (neuron0x26386e0()*-0.0372697);
}

double NNfunction_cLg::synapse0x26557a0() {
   return (neuron0x2638a20()*0.0206928);
}

double NNfunction_cLg::synapse0x26557e0() {
   return (neuron0x2638d60()*0.0412175);
}

double NNfunction_cLg::synapse0x2655820() {
   return (neuron0x26390a0()*0.0727809);
}

double NNfunction_cLg::synapse0x2655860() {
   return (neuron0x26393e0()*0.101628);
}

double NNfunction_cLg::synapse0x26558a0() {
   return (neuron0x2639720()*-0.10749);
}

double NNfunction_cLg::synapse0x26558e0() {
   return (neuron0x2639a60()*-1.09424);
}

double NNfunction_cLg::synapse0x2655920() {
   return (neuron0x2639da0()*0.0552704);
}

double NNfunction_cLg::synapse0x26553b0() {
   return (neuron0x263a0e0()*-0.00100716);
}

double NNfunction_cLg::synapse0x26553f0() {
   return (neuron0x263a640()*0.122113);
}

double NNfunction_cLg::synapse0x2655a70() {
   return (neuron0x263a860()*0.0533453);
}

double NNfunction_cLg::synapse0x2655ab0() {
   return (neuron0x263aba0()*0.0580834);
}

double NNfunction_cLg::synapse0x2655af0() {
   return (neuron0x263aee0()*-0.0237253);
}

double NNfunction_cLg::synapse0x2655b30() {
   return (neuron0x263b220()*-0.0513235);
}

double NNfunction_cLg::synapse0x2655b70() {
   return (neuron0x263b560()*0.10426);
}

double NNfunction_cLg::synapse0x2655bb0() {
   return (neuron0x263b8a0()*-0.042501);
}

double NNfunction_cLg::synapse0x2655f30() {
   return (neuron0x2636ce0()*0.00697327);
}

double NNfunction_cLg::synapse0x2655f70() {
   return (neuron0x2637020()*0.00248548);
}

double NNfunction_cLg::synapse0x2655fb0() {
   return (neuron0x2637360()*0.0225797);
}

double NNfunction_cLg::synapse0x2655ff0() {
   return (neuron0x26376a0()*0.0161893);
}

double NNfunction_cLg::synapse0x2656030() {
   return (neuron0x26379e0()*-0.00271601);
}

double NNfunction_cLg::synapse0x2656070() {
   return (neuron0x2637d20()*0.000113001);
}

double NNfunction_cLg::synapse0x26560b0() {
   return (neuron0x2638060()*0.00938767);
}

double NNfunction_cLg::synapse0x26560f0() {
   return (neuron0x26383a0()*-0.00846026);
}

double NNfunction_cLg::synapse0x2656130() {
   return (neuron0x26386e0()*0.00777049);
}

double NNfunction_cLg::synapse0x2656170() {
   return (neuron0x2638a20()*-0.000669024);
}

double NNfunction_cLg::synapse0x26561b0() {
   return (neuron0x2638d60()*0.00158073);
}

double NNfunction_cLg::synapse0x26561f0() {
   return (neuron0x26390a0()*-0.0217458);
}

double NNfunction_cLg::synapse0x2656230() {
   return (neuron0x26393e0()*1.40304);
}

double NNfunction_cLg::synapse0x2656270() {
   return (neuron0x2639720()*0.00959601);
}

double NNfunction_cLg::synapse0x26562b0() {
   return (neuron0x2639a60()*0.00845996);
}

double NNfunction_cLg::synapse0x26562f0() {
   return (neuron0x2639da0()*-0.00427584);
}

double NNfunction_cLg::synapse0x2655d80() {
   return (neuron0x263a0e0()*0.0034911);
}

double NNfunction_cLg::synapse0x2655dc0() {
   return (neuron0x263a640()*0.000599575);
}

double NNfunction_cLg::synapse0x2656440() {
   return (neuron0x263a860()*-0.0110381);
}

double NNfunction_cLg::synapse0x2656480() {
   return (neuron0x263aba0()*0.0102175);
}

double NNfunction_cLg::synapse0x26564c0() {
   return (neuron0x263aee0()*0.00288714);
}

double NNfunction_cLg::synapse0x2656500() {
   return (neuron0x263b220()*0.0019867);
}

double NNfunction_cLg::synapse0x2656540() {
   return (neuron0x263b560()*0.00377443);
}

double NNfunction_cLg::synapse0x2656580() {
   return (neuron0x263b8a0()*-0.000315121);
}

double NNfunction_cLg::synapse0x2656900() {
   return (neuron0x2636ce0()*0.00296482);
}

double NNfunction_cLg::synapse0x2656940() {
   return (neuron0x2637020()*0.00128054);
}

double NNfunction_cLg::synapse0x2656980() {
   return (neuron0x2637360()*-0.0147224);
}

double NNfunction_cLg::synapse0x26569c0() {
   return (neuron0x26376a0()*-5.4048);
}

double NNfunction_cLg::synapse0x2656a00() {
   return (neuron0x26379e0()*-0.00459252);
}

double NNfunction_cLg::synapse0x2656a40() {
   return (neuron0x2637d20()*-0.00154588);
}

double NNfunction_cLg::synapse0x2656a80() {
   return (neuron0x2638060()*-0.00137172);
}

double NNfunction_cLg::synapse0x2656ac0() {
   return (neuron0x26383a0()*0.00551271);
}

double NNfunction_cLg::synapse0x2656b00() {
   return (neuron0x26386e0()*-0.00356779);
}

double NNfunction_cLg::synapse0x2656b40() {
   return (neuron0x2638a20()*-0.0038892);
}

double NNfunction_cLg::synapse0x2656b80() {
   return (neuron0x2638d60()*-0.00235486);
}

double NNfunction_cLg::synapse0x2656bc0() {
   return (neuron0x26390a0()*-0.0198631);
}

double NNfunction_cLg::synapse0x2656c00() {
   return (neuron0x26393e0()*-0.162005);
}

double NNfunction_cLg::synapse0x2656c40() {
   return (neuron0x2639720()*-0.00114907);
}

double NNfunction_cLg::synapse0x2656c80() {
   return (neuron0x2639a60()*-0.00605406);
}

double NNfunction_cLg::synapse0x2656cc0() {
   return (neuron0x2639da0()*-0.00712822);
}

double NNfunction_cLg::synapse0x2656750() {
   return (neuron0x263a0e0()*0.00303631);
}

double NNfunction_cLg::synapse0x2656790() {
   return (neuron0x263a640()*-0.0162045);
}

double NNfunction_cLg::synapse0x2656e10() {
   return (neuron0x263a860()*-0.014177);
}

double NNfunction_cLg::synapse0x2656e50() {
   return (neuron0x263aba0()*0.00586094);
}

double NNfunction_cLg::synapse0x2656e90() {
   return (neuron0x263aee0()*0.000921819);
}

double NNfunction_cLg::synapse0x2656ed0() {
   return (neuron0x263b220()*-0.00657156);
}

double NNfunction_cLg::synapse0x2656f10() {
   return (neuron0x263b560()*0.00319219);
}

double NNfunction_cLg::synapse0x2656f50() {
   return (neuron0x263b8a0()*-0.00414859);
}

double NNfunction_cLg::synapse0x26572d0() {
   return (neuron0x2636ce0()*0.0255052);
}

double NNfunction_cLg::synapse0x2657310() {
   return (neuron0x2637020()*0.00589184);
}

double NNfunction_cLg::synapse0x2657350() {
   return (neuron0x2637360()*0.0404805);
}

double NNfunction_cLg::synapse0x2657390() {
   return (neuron0x26376a0()*0.175811);
}

double NNfunction_cLg::synapse0x26573d0() {
   return (neuron0x26379e0()*-0.0243432);
}

double NNfunction_cLg::synapse0x2657410() {
   return (neuron0x2637d20()*0.0758585);
}

double NNfunction_cLg::synapse0x2657450() {
   return (neuron0x2638060()*0.0355014);
}

double NNfunction_cLg::synapse0x2657490() {
   return (neuron0x26383a0()*0.00882148);
}

double NNfunction_cLg::synapse0x26574d0() {
   return (neuron0x26386e0()*-0.0200149);
}

double NNfunction_cLg::synapse0x2657510() {
   return (neuron0x2638a20()*-0.00244381);
}

double NNfunction_cLg::synapse0x2657550() {
   return (neuron0x2638d60()*-0.0223);
}

double NNfunction_cLg::synapse0x2657590() {
   return (neuron0x26390a0()*-0.934357);
}

double NNfunction_cLg::synapse0x26575d0() {
   return (neuron0x26393e0()*-0.192554);
}

double NNfunction_cLg::synapse0x2657610() {
   return (neuron0x2639720()*0.0555798);
}

double NNfunction_cLg::synapse0x2657650() {
   return (neuron0x2639a60()*-0.368123);
}

double NNfunction_cLg::synapse0x2657690() {
   return (neuron0x2639da0()*-0.434934);
}

double NNfunction_cLg::synapse0x2657120() {
   return (neuron0x263a0e0()*-0.0224421);
}

double NNfunction_cLg::synapse0x2657160() {
   return (neuron0x263a640()*-0.457984);
}

double NNfunction_cLg::synapse0x26577e0() {
   return (neuron0x263a860()*-0.507992);
}

double NNfunction_cLg::synapse0x2657820() {
   return (neuron0x263aba0()*-0.0544621);
}

double NNfunction_cLg::synapse0x2657860() {
   return (neuron0x263aee0()*0.00225772);
}

double NNfunction_cLg::synapse0x26578a0() {
   return (neuron0x263b220()*0.0196806);
}

double NNfunction_cLg::synapse0x26578e0() {
   return (neuron0x263b560()*0.00850233);
}

double NNfunction_cLg::synapse0x2657920() {
   return (neuron0x263b8a0()*0.0250747);
}

double NNfunction_cLg::synapse0x2657ca0() {
   return (neuron0x2636ce0()*-0.000816372);
}

double NNfunction_cLg::synapse0x2657ce0() {
   return (neuron0x2637020()*-0.00145739);
}

double NNfunction_cLg::synapse0x2657d20() {
   return (neuron0x2637360()*0.0219106);
}

double NNfunction_cLg::synapse0x2657d60() {
   return (neuron0x26376a0()*-6.3455);
}

double NNfunction_cLg::synapse0x2657da0() {
   return (neuron0x26379e0()*0.00153276);
}

double NNfunction_cLg::synapse0x2657de0() {
   return (neuron0x2637d20()*-0.00239084);
}

double NNfunction_cLg::synapse0x2657e20() {
   return (neuron0x2638060()*0.000646086);
}

double NNfunction_cLg::synapse0x2657e60() {
   return (neuron0x26383a0()*-0.00219631);
}

double NNfunction_cLg::synapse0x2657ea0() {
   return (neuron0x26386e0()*0.00216217);
}

double NNfunction_cLg::synapse0x2657ee0() {
   return (neuron0x2638a20()*0.00379845);
}

double NNfunction_cLg::synapse0x2657f20() {
   return (neuron0x2638d60()*-0.000178479);
}

double NNfunction_cLg::synapse0x2657f60() {
   return (neuron0x26390a0()*0.0141697);
}

double NNfunction_cLg::synapse0x2657fa0() {
   return (neuron0x26393e0()*0.175285);
}

double NNfunction_cLg::synapse0x2657fe0() {
   return (neuron0x2639720()*-0.000994764);
}

double NNfunction_cLg::synapse0x2658020() {
   return (neuron0x2639a60()*0.0067307);
}

double NNfunction_cLg::synapse0x2658060() {
   return (neuron0x2639da0()*0.0049638);
}

double NNfunction_cLg::synapse0x2657af0() {
   return (neuron0x263a0e0()*-0.00587314);
}

double NNfunction_cLg::synapse0x2657b30() {
   return (neuron0x263a640()*0.0112307);
}

double NNfunction_cLg::synapse0x26581b0() {
   return (neuron0x263a860()*0.011303);
}

double NNfunction_cLg::synapse0x26581f0() {
   return (neuron0x263aba0()*-0.00117282);
}

double NNfunction_cLg::synapse0x2658230() {
   return (neuron0x263aee0()*0.00221194);
}

double NNfunction_cLg::synapse0x2658270() {
   return (neuron0x263b220()*-5.41838e-05);
}

double NNfunction_cLg::synapse0x26582b0() {
   return (neuron0x263b560()*-0.00380592);
}

double NNfunction_cLg::synapse0x26582f0() {
   return (neuron0x263b8a0()*0.00397968);
}

double NNfunction_cLg::synapse0x2640da0() {
   return (neuron0x2636ce0()*-0.00524989);
}

double NNfunction_cLg::synapse0x2640de0() {
   return (neuron0x2637020()*0.00542062);
}

double NNfunction_cLg::synapse0x2640e20() {
   return (neuron0x2637360()*-0.0115282);
}

double NNfunction_cLg::synapse0x2640e60() {
   return (neuron0x26376a0()*1.61931);
}

double NNfunction_cLg::synapse0x2640ea0() {
   return (neuron0x26379e0()*0.00885441);
}

double NNfunction_cLg::synapse0x2640ee0() {
   return (neuron0x2637d20()*0.000847847);
}

double NNfunction_cLg::synapse0x2640f20() {
   return (neuron0x2638060()*-0.000634245);
}

double NNfunction_cLg::synapse0x2640f60() {
   return (neuron0x26383a0()*-0.00599496);
}

double NNfunction_cLg::synapse0x2658a80() {
   return (neuron0x26386e0()*-0.00366021);
}

double NNfunction_cLg::synapse0x2658ac0() {
   return (neuron0x2638a20()*0.00180065);
}

double NNfunction_cLg::synapse0x2658b00() {
   return (neuron0x2638d60()*0.00295354);
}

double NNfunction_cLg::synapse0x2658b40() {
   return (neuron0x26390a0()*0.0129919);
}

double NNfunction_cLg::synapse0x2658b80() {
   return (neuron0x26393e0()*-0.731872);
}

double NNfunction_cLg::synapse0x2658bc0() {
   return (neuron0x2639720()*0.000356264);
}

double NNfunction_cLg::synapse0x2658c00() {
   return (neuron0x2639a60()*0.00597981);
}

double NNfunction_cLg::synapse0x2658c40() {
   return (neuron0x2639da0()*0.0119473);
}

double NNfunction_cLg::synapse0x26584c0() {
   return (neuron0x263a0e0()*-0.00140611);
}

double NNfunction_cLg::synapse0x2658500() {
   return (neuron0x263a640()*0.0124296);
}

double NNfunction_cLg::synapse0x2658d90() {
   return (neuron0x263a860()*0.0180258);
}

double NNfunction_cLg::synapse0x2658dd0() {
   return (neuron0x263aba0()*0.00411921);
}

double NNfunction_cLg::synapse0x2658e10() {
   return (neuron0x263aee0()*0.00139431);
}

double NNfunction_cLg::synapse0x2658e50() {
   return (neuron0x263b220()*-0.00393801);
}

double NNfunction_cLg::synapse0x2658e90() {
   return (neuron0x263b560()*-0.000327372);
}

double NNfunction_cLg::synapse0x2658ed0() {
   return (neuron0x263b8a0()*0.000634954);
}

double NNfunction_cLg::synapse0x2659250() {
   return (neuron0x2636ce0()*-0.00421774);
}

double NNfunction_cLg::synapse0x2659290() {
   return (neuron0x2637020()*0.16065);
}

double NNfunction_cLg::synapse0x26592d0() {
   return (neuron0x2637360()*-0.0765556);
}

double NNfunction_cLg::synapse0x2659310() {
   return (neuron0x26376a0()*-0.388419);
}

double NNfunction_cLg::synapse0x2659350() {
   return (neuron0x26379e0()*0.12823);
}

double NNfunction_cLg::synapse0x2659390() {
   return (neuron0x2637d20()*0.327435);
}

double NNfunction_cLg::synapse0x26593d0() {
   return (neuron0x2638060()*0.339372);
}

double NNfunction_cLg::synapse0x2659410() {
   return (neuron0x26383a0()*0.161691);
}

double NNfunction_cLg::synapse0x2659450() {
   return (neuron0x26386e0()*0.358323);
}

double NNfunction_cLg::synapse0x2659490() {
   return (neuron0x2638a20()*0.551065);
}

double NNfunction_cLg::synapse0x26594d0() {
   return (neuron0x2638d60()*-0.306533);
}

double NNfunction_cLg::synapse0x2659510() {
   return (neuron0x26390a0()*0.352763);
}

double NNfunction_cLg::synapse0x2659550() {
   return (neuron0x26393e0()*-0.476467);
}

double NNfunction_cLg::synapse0x2659590() {
   return (neuron0x2639720()*-0.0394887);
}

double NNfunction_cLg::synapse0x26595d0() {
   return (neuron0x2639a60()*-0.0339243);
}

double NNfunction_cLg::synapse0x2659610() {
   return (neuron0x2639da0()*0.117183);
}

double NNfunction_cLg::synapse0x26590a0() {
   return (neuron0x263a0e0()*0.482802);
}

double NNfunction_cLg::synapse0x26590e0() {
   return (neuron0x263a640()*0.607289);
}

double NNfunction_cLg::synapse0x2659760() {
   return (neuron0x263a860()*0.0858889);
}

double NNfunction_cLg::synapse0x26597a0() {
   return (neuron0x263aba0()*-0.0768769);
}

double NNfunction_cLg::synapse0x26597e0() {
   return (neuron0x263aee0()*-0.33967);
}

double NNfunction_cLg::synapse0x2659820() {
   return (neuron0x263b220()*0.325037);
}

double NNfunction_cLg::synapse0x2659860() {
   return (neuron0x263b560()*-0.163381);
}

double NNfunction_cLg::synapse0x26598a0() {
   return (neuron0x263b8a0()*-0.0381772);
}

double NNfunction_cLg::synapse0x2659c20() {
   return (neuron0x2636ce0()*0.191151);
}

double NNfunction_cLg::synapse0x2659c60() {
   return (neuron0x2637020()*0.0999747);
}

double NNfunction_cLg::synapse0x2659ca0() {
   return (neuron0x2637360()*-0.176875);
}

double NNfunction_cLg::synapse0x2659ce0() {
   return (neuron0x26376a0()*0.361588);
}

double NNfunction_cLg::synapse0x2659d20() {
   return (neuron0x26379e0()*0.270185);
}

double NNfunction_cLg::synapse0x2659d60() {
   return (neuron0x2637d20()*-0.052347);
}

double NNfunction_cLg::synapse0x2659da0() {
   return (neuron0x2638060()*-0.130416);
}

double NNfunction_cLg::synapse0x2659de0() {
   return (neuron0x26383a0()*-0.118276);
}

double NNfunction_cLg::synapse0x2659e20() {
   return (neuron0x26386e0()*0.1286);
}

double NNfunction_cLg::synapse0x2659e60() {
   return (neuron0x2638a20()*0.0152228);
}

double NNfunction_cLg::synapse0x2659ea0() {
   return (neuron0x2638d60()*-0.451277);
}

double NNfunction_cLg::synapse0x2659ee0() {
   return (neuron0x26390a0()*0.0431832);
}

double NNfunction_cLg::synapse0x2659f20() {
   return (neuron0x26393e0()*1.04727);
}

double NNfunction_cLg::synapse0x2659f60() {
   return (neuron0x2639720()*0.119067);
}

double NNfunction_cLg::synapse0x2659fa0() {
   return (neuron0x2639a60()*-0.0472096);
}

double NNfunction_cLg::synapse0x2659fe0() {
   return (neuron0x2639da0()*-0.0399584);
}

double NNfunction_cLg::synapse0x2659a70() {
   return (neuron0x263a0e0()*0.0113979);
}

double NNfunction_cLg::synapse0x2659ab0() {
   return (neuron0x263a640()*-0.199692);
}

double NNfunction_cLg::synapse0x264a5e0() {
   return (neuron0x263a860()*0.133841);
}

double NNfunction_cLg::synapse0x264a620() {
   return (neuron0x263aba0()*-0.232838);
}

double NNfunction_cLg::synapse0x264a660() {
   return (neuron0x263aee0()*-0.00585289);
}

double NNfunction_cLg::synapse0x264a6a0() {
   return (neuron0x263b220()*0.214302);
}

double NNfunction_cLg::synapse0x264a6e0() {
   return (neuron0x263b560()*-0.244093);
}

double NNfunction_cLg::synapse0x264a720() {
   return (neuron0x263b8a0()*-0.322606);
}

double NNfunction_cLg::synapse0x264aaa0() {
   return (neuron0x2636ce0()*-0.0103411);
}

double NNfunction_cLg::synapse0x264aae0() {
   return (neuron0x2637020()*0.024608);
}

double NNfunction_cLg::synapse0x264ab20() {
   return (neuron0x2637360()*-0.282435);
}

double NNfunction_cLg::synapse0x264ab60() {
   return (neuron0x26376a0()*0.275352);
}

double NNfunction_cLg::synapse0x264aba0() {
   return (neuron0x26379e0()*0.0240492);
}

double NNfunction_cLg::synapse0x264abe0() {
   return (neuron0x2637d20()*-0.0598904);
}

double NNfunction_cLg::synapse0x264ac20() {
   return (neuron0x2638060()*-0.0253975);
}

double NNfunction_cLg::synapse0x264ac60() {
   return (neuron0x26383a0()*0.0146225);
}

double NNfunction_cLg::synapse0x264aca0() {
   return (neuron0x26386e0()*-0.133135);
}

double NNfunction_cLg::synapse0x264ace0() {
   return (neuron0x2638a20()*-0.0700024);
}

double NNfunction_cLg::synapse0x264ad20() {
   return (neuron0x2638d60()*-0.00462619);
}

double NNfunction_cLg::synapse0x264ad60() {
   return (neuron0x26390a0()*-0.0113664);
}

double NNfunction_cLg::synapse0x264ada0() {
   return (neuron0x26393e0()*2.74989);
}

double NNfunction_cLg::synapse0x264ade0() {
   return (neuron0x2639720()*0.0111945);
}

double NNfunction_cLg::synapse0x264ae20() {
   return (neuron0x2639a60()*-0.0683269);
}

double NNfunction_cLg::synapse0x264ae60() {
   return (neuron0x2639da0()*-0.0941636);
}

double NNfunction_cLg::synapse0x264a8f0() {
   return (neuron0x263a0e0()*0.0721607);
}

double NNfunction_cLg::synapse0x264a930() {
   return (neuron0x263a640()*-0.0747388);
}

double NNfunction_cLg::synapse0x264afb0() {
   return (neuron0x263a860()*0.0390988);
}

double NNfunction_cLg::synapse0x264aff0() {
   return (neuron0x263aba0()*-0.0608848);
}

double NNfunction_cLg::synapse0x264b030() {
   return (neuron0x263aee0()*0.0355972);
}

double NNfunction_cLg::synapse0x264b070() {
   return (neuron0x263b220()*-0.0364378);
}

double NNfunction_cLg::synapse0x264b0b0() {
   return (neuron0x263b560()*0.00807013);
}

double NNfunction_cLg::synapse0x264b0f0() {
   return (neuron0x263b8a0()*-0.047345);
}

double NNfunction_cLg::synapse0x264b470() {
   return (neuron0x2636ce0()*-0.183146);
}

double NNfunction_cLg::synapse0x264b4b0() {
   return (neuron0x2637020()*0.193138);
}

double NNfunction_cLg::synapse0x264b4f0() {
   return (neuron0x2637360()*-0.836688);
}

double NNfunction_cLg::synapse0x264b530() {
   return (neuron0x26376a0()*0.016046);
}

double NNfunction_cLg::synapse0x264b570() {
   return (neuron0x26379e0()*-0.260218);
}

double NNfunction_cLg::synapse0x264b5b0() {
   return (neuron0x2637d20()*-0.0553054);
}

double NNfunction_cLg::synapse0x264b5f0() {
   return (neuron0x2638060()*0.289057);
}

double NNfunction_cLg::synapse0x264b630() {
   return (neuron0x26383a0()*0.81361);
}

double NNfunction_cLg::synapse0x264b670() {
   return (neuron0x26386e0()*0.265232);
}

double NNfunction_cLg::synapse0x264b6b0() {
   return (neuron0x2638a20()*-0.311045);
}

double NNfunction_cLg::synapse0x264b6f0() {
   return (neuron0x2638d60()*-0.40394);
}

double NNfunction_cLg::synapse0x264b730() {
   return (neuron0x26390a0()*-0.488979);
}

double NNfunction_cLg::synapse0x264b770() {
   return (neuron0x26393e0()*0.0549675);
}

double NNfunction_cLg::synapse0x264b7b0() {
   return (neuron0x2639720()*0.0665683);
}

double NNfunction_cLg::synapse0x264b7f0() {
   return (neuron0x2639a60()*-0.243038);
}

double NNfunction_cLg::synapse0x264b830() {
   return (neuron0x2639da0()*-0.144584);
}

double NNfunction_cLg::synapse0x264b2c0() {
   return (neuron0x263a0e0()*0.249031);
}

double NNfunction_cLg::synapse0x264b300() {
   return (neuron0x263a640()*0.286437);
}

double NNfunction_cLg::synapse0x264b980() {
   return (neuron0x263a860()*-0.171731);
}

double NNfunction_cLg::synapse0x264b9c0() {
   return (neuron0x263aba0()*-0.286838);
}

double NNfunction_cLg::synapse0x264ba00() {
   return (neuron0x263aee0()*-0.415862);
}

double NNfunction_cLg::synapse0x264ba40() {
   return (neuron0x263b220()*-0.0741287);
}

double NNfunction_cLg::synapse0x264ba80() {
   return (neuron0x263b560()*-0.160057);
}

double NNfunction_cLg::synapse0x264bac0() {
   return (neuron0x263b8a0()*-0.443945);
}

double NNfunction_cLg::synapse0x264be40() {
   return (neuron0x2636ce0()*0.00152659);
}

double NNfunction_cLg::synapse0x264be80() {
   return (neuron0x2637020()*-0.00456171);
}

double NNfunction_cLg::synapse0x264bec0() {
   return (neuron0x2637360()*-0.150138);
}

double NNfunction_cLg::synapse0x264bf00() {
   return (neuron0x26376a0()*-0.0101567);
}

double NNfunction_cLg::synapse0x264bf40() {
   return (neuron0x26379e0()*-0.0122331);
}

double NNfunction_cLg::synapse0x264bf80() {
   return (neuron0x2637d20()*-0.025589);
}

double NNfunction_cLg::synapse0x264bfc0() {
   return (neuron0x2638060()*-0.00193483);
}

double NNfunction_cLg::synapse0x264c000() {
   return (neuron0x26383a0()*-0.0108423);
}

double NNfunction_cLg::synapse0x264c040() {
   return (neuron0x26386e0()*-0.0077069);
}

double NNfunction_cLg::synapse0x264c080() {
   return (neuron0x2638a20()*-0.0155931);
}

double NNfunction_cLg::synapse0x264c0c0() {
   return (neuron0x2638d60()*0.00332361);
}

double NNfunction_cLg::synapse0x264c100() {
   return (neuron0x26390a0()*-0.0259948);
}

double NNfunction_cLg::synapse0x264c140() {
   return (neuron0x26393e0()*4.52899);
}

double NNfunction_cLg::synapse0x264c180() {
   return (neuron0x2639720()*0.0390394);
}

double NNfunction_cLg::synapse0x264c1c0() {
   return (neuron0x2639a60()*-0.0150363);
}

double NNfunction_cLg::synapse0x264c200() {
   return (neuron0x2639da0()*-0.0241684);
}

double NNfunction_cLg::synapse0x264bc90() {
   return (neuron0x263a0e0()*0.036686);
}

double NNfunction_cLg::synapse0x264bcd0() {
   return (neuron0x263a640()*-0.00917481);
}

double NNfunction_cLg::synapse0x264c350() {
   return (neuron0x263a860()*-0.00285219);
}

double NNfunction_cLg::synapse0x264c390() {
   return (neuron0x263aba0()*0.0108184);
}

double NNfunction_cLg::synapse0x264c3d0() {
   return (neuron0x263aee0()*0.00513528);
}

double NNfunction_cLg::synapse0x264c410() {
   return (neuron0x263b220()*-0.00428549);
}

double NNfunction_cLg::synapse0x264c450() {
   return (neuron0x263b560()*0.00465997);
}

double NNfunction_cLg::synapse0x264c490() {
   return (neuron0x263b8a0()*-0.00758529);
}

double NNfunction_cLg::synapse0x265e360() {
   return (neuron0x2636ce0()*0.265523);
}

double NNfunction_cLg::synapse0x265e3a0() {
   return (neuron0x2637020()*-0.32147);
}

double NNfunction_cLg::synapse0x265e3e0() {
   return (neuron0x2637360()*-0.393765);
}

double NNfunction_cLg::synapse0x265e420() {
   return (neuron0x26376a0()*0.101113);
}

double NNfunction_cLg::synapse0x265e460() {
   return (neuron0x26379e0()*-0.225969);
}

double NNfunction_cLg::synapse0x265e4a0() {
   return (neuron0x2637d20()*-0.0723733);
}

double NNfunction_cLg::synapse0x265e4e0() {
   return (neuron0x2638060()*0.290504);
}

double NNfunction_cLg::synapse0x265e520() {
   return (neuron0x26383a0()*0.212928);
}

double NNfunction_cLg::synapse0x265e560() {
   return (neuron0x26386e0()*-0.00030145);
}

double NNfunction_cLg::synapse0x265e5a0() {
   return (neuron0x2638a20()*0.0160119);
}

double NNfunction_cLg::synapse0x265e5e0() {
   return (neuron0x2638d60()*0.0268133);
}

double NNfunction_cLg::synapse0x265e620() {
   return (neuron0x26390a0()*0.0706314);
}

double NNfunction_cLg::synapse0x265e660() {
   return (neuron0x26393e0()*-0.411598);
}

double NNfunction_cLg::synapse0x265e6a0() {
   return (neuron0x2639720()*0.352862);
}

double NNfunction_cLg::synapse0x265e6e0() {
   return (neuron0x2639a60()*-0.0451241);
}

double NNfunction_cLg::synapse0x265e720() {
   return (neuron0x2639da0()*-0.0905161);
}

double NNfunction_cLg::synapse0x264c4d0() {
   return (neuron0x263a0e0()*0.16202);
}

double NNfunction_cLg::synapse0x264c510() {
   return (neuron0x263a640()*-0.109614);
}

double NNfunction_cLg::synapse0x265e870() {
   return (neuron0x263a860()*0.391509);
}

double NNfunction_cLg::synapse0x265e8b0() {
   return (neuron0x263aba0()*-0.224884);
}

double NNfunction_cLg::synapse0x265e8f0() {
   return (neuron0x263aee0()*0.316382);
}

double NNfunction_cLg::synapse0x265e930() {
   return (neuron0x263b220()*-0.583552);
}

double NNfunction_cLg::synapse0x265e970() {
   return (neuron0x263b560()*0.289646);
}

double NNfunction_cLg::synapse0x265e9b0() {
   return (neuron0x263b8a0()*-0.152887);
}

double NNfunction_cLg::synapse0x265ed30() {
   return (neuron0x2636ce0()*-0.0671615);
}

double NNfunction_cLg::synapse0x265ed70() {
   return (neuron0x2637020()*-0.0486783);
}

double NNfunction_cLg::synapse0x265edb0() {
   return (neuron0x2637360()*0.124662);
}

double NNfunction_cLg::synapse0x265edf0() {
   return (neuron0x26376a0()*-0.228259);
}

double NNfunction_cLg::synapse0x265ee30() {
   return (neuron0x26379e0()*-0.0688978);
}

double NNfunction_cLg::synapse0x265ee70() {
   return (neuron0x2637d20()*0.253323);
}

double NNfunction_cLg::synapse0x265eeb0() {
   return (neuron0x2638060()*-0.0491653);
}

double NNfunction_cLg::synapse0x265eef0() {
   return (neuron0x26383a0()*0.0277847);
}

double NNfunction_cLg::synapse0x265ef30() {
   return (neuron0x26386e0()*0.809531);
}

double NNfunction_cLg::synapse0x265ef70() {
   return (neuron0x2638a20()*-0.69868);
}

double NNfunction_cLg::synapse0x265efb0() {
   return (neuron0x2638d60()*-0.0497827);
}

double NNfunction_cLg::synapse0x265eff0() {
   return (neuron0x26390a0()*-0.0957686);
}

double NNfunction_cLg::synapse0x265f030() {
   return (neuron0x26393e0()*-0.734922);
}

double NNfunction_cLg::synapse0x265f070() {
   return (neuron0x2639720()*0.0229678);
}

double NNfunction_cLg::synapse0x265f0b0() {
   return (neuron0x2639a60()*0.0233342);
}

double NNfunction_cLg::synapse0x265f0f0() {
   return (neuron0x2639da0()*-0.188788);
}

double NNfunction_cLg::synapse0x265eb80() {
   return (neuron0x263a0e0()*0.00763858);
}

double NNfunction_cLg::synapse0x265ebc0() {
   return (neuron0x263a640()*-0.287212);
}

double NNfunction_cLg::synapse0x265f240() {
   return (neuron0x263a860()*-0.021468);
}

double NNfunction_cLg::synapse0x265f280() {
   return (neuron0x263aba0()*-0.0620328);
}

double NNfunction_cLg::synapse0x265f2c0() {
   return (neuron0x263aee0()*0.000253241);
}

double NNfunction_cLg::synapse0x265f300() {
   return (neuron0x263b220()*0.092006);
}

double NNfunction_cLg::synapse0x265f340() {
   return (neuron0x263b560()*-0.0764325);
}

double NNfunction_cLg::synapse0x265f380() {
   return (neuron0x263b8a0()*-0.283792);
}

double NNfunction_cLg::synapse0x265f700() {
   return (neuron0x2636ce0()*0.00544712);
}

double NNfunction_cLg::synapse0x265f740() {
   return (neuron0x2637020()*0.319221);
}

double NNfunction_cLg::synapse0x265f780() {
   return (neuron0x2637360()*-0.0148905);
}

double NNfunction_cLg::synapse0x265f7c0() {
   return (neuron0x26376a0()*0.356261);
}

double NNfunction_cLg::synapse0x265f800() {
   return (neuron0x26379e0()*-0.113242);
}

double NNfunction_cLg::synapse0x265f840() {
   return (neuron0x2637d20()*0.270937);
}

double NNfunction_cLg::synapse0x265f880() {
   return (neuron0x2638060()*0.457812);
}

double NNfunction_cLg::synapse0x265f8c0() {
   return (neuron0x26383a0()*0.285421);
}

double NNfunction_cLg::synapse0x265f900() {
   return (neuron0x26386e0()*-0.399569);
}

double NNfunction_cLg::synapse0x265f940() {
   return (neuron0x2638a20()*-0.335789);
}

double NNfunction_cLg::synapse0x265f980() {
   return (neuron0x2638d60()*0.418891);
}

double NNfunction_cLg::synapse0x265f9c0() {
   return (neuron0x26390a0()*0.452214);
}

double NNfunction_cLg::synapse0x265fa00() {
   return (neuron0x26393e0()*0.622565);
}

double NNfunction_cLg::synapse0x265fa40() {
   return (neuron0x2639720()*0.476553);
}

double NNfunction_cLg::synapse0x265fa80() {
   return (neuron0x2639a60()*0.456817);
}

double NNfunction_cLg::synapse0x265fac0() {
   return (neuron0x2639da0()*-0.0575178);
}

double NNfunction_cLg::synapse0x265f550() {
   return (neuron0x263a0e0()*0.34256);
}

double NNfunction_cLg::synapse0x265f590() {
   return (neuron0x263a640()*0.634258);
}

double NNfunction_cLg::synapse0x265fc10() {
   return (neuron0x263a860()*0.254019);
}

double NNfunction_cLg::synapse0x265fc50() {
   return (neuron0x263aba0()*0.12489);
}

double NNfunction_cLg::synapse0x265fc90() {
   return (neuron0x263aee0()*-0.0297383);
}

double NNfunction_cLg::synapse0x265fcd0() {
   return (neuron0x263b220()*-0.0613814);
}

double NNfunction_cLg::synapse0x265fd10() {
   return (neuron0x263b560()*-0.113514);
}

double NNfunction_cLg::synapse0x265fd50() {
   return (neuron0x263b8a0()*-0.00525011);
}

double NNfunction_cLg::synapse0x26600d0() {
   return (neuron0x2636ce0()*-0.00385623);
}

double NNfunction_cLg::synapse0x2660110() {
   return (neuron0x2637020()*-0.00789776);
}

double NNfunction_cLg::synapse0x2660150() {
   return (neuron0x2637360()*-0.0406347);
}

double NNfunction_cLg::synapse0x2660190() {
   return (neuron0x26376a0()*0.77124);
}

double NNfunction_cLg::synapse0x26601d0() {
   return (neuron0x26379e0()*-0.00482161);
}

double NNfunction_cLg::synapse0x2660210() {
   return (neuron0x2637d20()*0.0113114);
}

double NNfunction_cLg::synapse0x2660250() {
   return (neuron0x2638060()*0.00842522);
}

double NNfunction_cLg::synapse0x2660290() {
   return (neuron0x26383a0()*0.00291229);
}

double NNfunction_cLg::synapse0x26602d0() {
   return (neuron0x26386e0()*-0.00405847);
}

double NNfunction_cLg::synapse0x2660310() {
   return (neuron0x2638a20()*0.00205174);
}

double NNfunction_cLg::synapse0x2660350() {
   return (neuron0x2638d60()*0.000860024);
}

double NNfunction_cLg::synapse0x2660390() {
   return (neuron0x26390a0()*-0.00628266);
}

double NNfunction_cLg::synapse0x26603d0() {
   return (neuron0x26393e0()*-0.866804);
}

double NNfunction_cLg::synapse0x2660410() {
   return (neuron0x2639720()*0.0173266);
}

double NNfunction_cLg::synapse0x2660450() {
   return (neuron0x2639a60()*0.0134542);
}

double NNfunction_cLg::synapse0x2660490() {
   return (neuron0x2639da0()*-0.0128486);
}

double NNfunction_cLg::synapse0x265ff20() {
   return (neuron0x263a0e0()*-0.0077276);
}

double NNfunction_cLg::synapse0x265ff60() {
   return (neuron0x263a640()*-0.00275465);
}

double NNfunction_cLg::synapse0x26605e0() {
   return (neuron0x263a860()*-0.00849438);
}

double NNfunction_cLg::synapse0x2660620() {
   return (neuron0x263aba0()*-0.0147537);
}

double NNfunction_cLg::synapse0x2660660() {
   return (neuron0x263aee0()*0.00946428);
}

double NNfunction_cLg::synapse0x26606a0() {
   return (neuron0x263b220()*0.0113421);
}

double NNfunction_cLg::synapse0x26606e0() {
   return (neuron0x263b560()*-0.00096758);
}

double NNfunction_cLg::synapse0x2660720() {
   return (neuron0x263b8a0()*0.0148531);
}

double NNfunction_cLg::synapse0x23f6af0() {
   return (neuron0x263bd10()*0.0242081);
}

double NNfunction_cLg::synapse0x23f6b30() {
   return (neuron0x263c660()*0.0202901);
}

double NNfunction_cLg::synapse0x263e1d0() {
   return (neuron0x263d140()*0.014913);
}

double NNfunction_cLg::synapse0x263e210() {
   return (neuron0x263cbe0()*0.0188821);
}

double NNfunction_cLg::synapse0x263eba0() {
   return (neuron0x263df20()*0.00368101);
}

double NNfunction_cLg::synapse0x263ebe0() {
   return (neuron0x263e8f0()*0.00817343);
}

double NNfunction_cLg::synapse0x263f970() {
   return (neuron0x263f6c0()*0.0504155);
}

double NNfunction_cLg::synapse0x263f9b0() {
   return (neuron0x2640090()*-1.44785);
}

double NNfunction_cLg::synapse0x2640340() {
   return (neuron0x2640a60()*-0.0121298);
}

double NNfunction_cLg::synapse0x2640380() {
   return (neuron0x2641540()*-0.023107);
}

double NNfunction_cLg::synapse0x2640d10() {
   return (neuron0x2641f10()*-0.0476189);
}

double NNfunction_cLg::synapse0x2640d50() {
   return (neuron0x263eff0()*1.70835);
}

double NNfunction_cLg::synapse0x26417f0() {
   return (neuron0x2643ac0()*0.47993);
}

double NNfunction_cLg::synapse0x2641830() {
   return (neuron0x2644490()*-0.00586937);
}

double NNfunction_cLg::synapse0x26421c0() {
   return (neuron0x2644e60()*0.0322452);
}

double NNfunction_cLg::synapse0x2642200() {
   return (neuron0x2645830()*-0.0680209);
}

double NNfunction_cLg::synapse0x263f2a0() {
   return (neuron0x2647640()*0.0376199);
}

double NNfunction_cLg::synapse0x263f2e0() {
   return (neuron0x2647920()*-0.0120445);
}

double NNfunction_cLg::synapse0x2643d70() {
   return (neuron0x26482f0()*0.0159294);
}

double NNfunction_cLg::synapse0x2643db0() {
   return (neuron0x2648cc0()*-0.747639);
}

double NNfunction_cLg::synapse0x2644740() {
   return (neuron0x2649690()*0.0266259);
}

double NNfunction_cLg::synapse0x2644780() {
   return (neuron0x264a060()*-0.195307);
}

double NNfunction_cLg::synapse0x2645110() {
   return (neuron0x2642bb0()*0.651297);
}

double NNfunction_cLg::synapse0x2645150() {
   return (neuron0x2643580()*0.0391945);
}

double NNfunction_cLg::synapse0x2645ae0() {
   return (neuron0x264cdf0()*-0.0149449);
}

double NNfunction_cLg::synapse0x2645b20() {
   return (neuron0x264d7c0()*-0.00714188);
}

double NNfunction_cLg::synapse0x2639c80() {
   return (neuron0x264e190()*0.81548);
}

double NNfunction_cLg::synapse0x2639cc0() {
   return (neuron0x264eb60()*-0.00981356);
}

double NNfunction_cLg::synapse0x2647bd0() {
   return (neuron0x264f530()*0.0355677);
}

double NNfunction_cLg::synapse0x2647c10() {
   return (neuron0x264ff00()*0.013313);
}

double NNfunction_cLg::synapse0x26485a0() {
   return (neuron0x26508d0()*-1.87851);
}

double NNfunction_cLg::synapse0x26485e0() {
   return (neuron0x26512a0()*0.0150492);
}

double NNfunction_cLg::synapse0x2648f70() {
   return (neuron0x2647330()*0.0207058);
}

double NNfunction_cLg::synapse0x2648fb0() {
   return (neuron0x2653e80()*0.008158);
}

double NNfunction_cLg::synapse0x2649940() {
   return (neuron0x2654850()*0.0273841);
}

double NNfunction_cLg::synapse0x2649980() {
   return (neuron0x2655220()*0.0204607);
}

double NNfunction_cLg::synapse0x264a310() {
   return (neuron0x2655bf0()*0.988416);
}

double NNfunction_cLg::synapse0x264a350() {
   return (neuron0x26565c0()*-0.992382);
}

double NNfunction_cLg::synapse0x2642e60() {
   return (neuron0x2656f90()*-0.190188);
}

double NNfunction_cLg::synapse0x2642ea0() {
   return (neuron0x2657960()*1.84519);
}

double NNfunction_cLg::synapse0x264c710() {
   return (neuron0x2658330()*1.82344);
}

double NNfunction_cLg::synapse0x264c750() {
   return (neuron0x2658f10()*0.006303);
}

double NNfunction_cLg::synapse0x264d0a0() {
   return (neuron0x26598e0()*0.00742897);
}

double NNfunction_cLg::synapse0x264d0e0() {
   return (neuron0x264a760()*-0.0697406);
}

double NNfunction_cLg::synapse0x264da70() {
   return (neuron0x264b130()*0.00726471);
}

double NNfunction_cLg::synapse0x264dab0() {
   return (neuron0x264bb00()*0.0752963);
}

double NNfunction_cLg::synapse0x264e440() {
   return (neuron0x265e140()*-0.0041918);
}

double NNfunction_cLg::synapse0x264e480() {
   return (neuron0x265e9f0()*0.0139042);
}

double NNfunction_cLg::synapse0x264ee10() {
   return (neuron0x265f3c0()*0.0177698);
}

double NNfunction_cLg::synapse0x264ee50() {
   return (neuron0x265fd90()*-1.00818);
}

double NNfunction_cLg::synapse0x2651550() {
   return (neuron0x263bd10()*0.519064);
}

double NNfunction_cLg::synapse0x2651590() {
   return (neuron0x263c660()*0.257518);
}

double NNfunction_cLg::synapse0x2646b10() {
   return (neuron0x263d140()*0.299185);
}

double NNfunction_cLg::synapse0x2646b50() {
   return (neuron0x263cbe0()*0.0530321);
}

double NNfunction_cLg::synapse0x2654130() {
   return (neuron0x263df20()*-0.0687736);
}

double NNfunction_cLg::synapse0x2654170() {
   return (neuron0x263e8f0()*0.0203951);
}

double NNfunction_cLg::synapse0x2654b00() {
   return (neuron0x263f6c0()*-1.14024);
}

double NNfunction_cLg::synapse0x2654b40() {
   return (neuron0x2640090()*1.18614);
}

double NNfunction_cLg::synapse0x26554d0() {
   return (neuron0x2640a60()*-0.185232);
}

double NNfunction_cLg::synapse0x2655510() {
   return (neuron0x2641540()*0.0171213);
}

double NNfunction_cLg::synapse0x2655ea0() {
   return (neuron0x2641f10()*0.40977);
}

double NNfunction_cLg::synapse0x2655ee0() {
   return (neuron0x263eff0()*-0.557263);
}

double NNfunction_cLg::synapse0x2656870() {
   return (neuron0x2643ac0()*-0.662792);
}

double NNfunction_cLg::synapse0x26568b0() {
   return (neuron0x2644490()*0.00550752);
}

double NNfunction_cLg::synapse0x2657240() {
   return (neuron0x2644e60()*0.100542);
}

double NNfunction_cLg::synapse0x2657280() {
   return (neuron0x2645830()*0.240288);
}

double NNfunction_cLg::synapse0x2657c10() {
   return (neuron0x2647640()*-0.00464716);
}

double NNfunction_cLg::synapse0x2657c50() {
   return (neuron0x2647920()*-0.421201);
}

double NNfunction_cLg::synapse0x26585e0() {
   return (neuron0x26482f0()*-0.0930465);
}

double NNfunction_cLg::synapse0x2658620() {
   return (neuron0x2648cc0()*1.01791);
}

double NNfunction_cLg::synapse0x26591c0() {
   return (neuron0x2649690()*0.206116);
}

double NNfunction_cLg::synapse0x2659200() {
   return (neuron0x264a060()*-0.238187);
}

double NNfunction_cLg::synapse0x2659b90() {
   return (neuron0x2642bb0()*0.778597);
}

double NNfunction_cLg::synapse0x2659bd0() {
   return (neuron0x2643580()*0.355378);
}

double NNfunction_cLg::synapse0x264aa10() {
   return (neuron0x264cdf0()*-0.00210181);
}

double NNfunction_cLg::synapse0x264aa50() {
   return (neuron0x264d7c0()*-0.096157);
}

double NNfunction_cLg::synapse0x264b3e0() {
   return (neuron0x264e190()*0.12564);
}

double NNfunction_cLg::synapse0x264b420() {
   return (neuron0x264eb60()*-0.104975);
}

double NNfunction_cLg::synapse0x264bdb0() {
   return (neuron0x264f530()*0.408);
}

double NNfunction_cLg::synapse0x264bdf0() {
   return (neuron0x264ff00()*0.0407111);
}

double NNfunction_cLg::synapse0x265e2d0() {
   return (neuron0x26508d0()*1.53689);
}

double NNfunction_cLg::synapse0x265e310() {
   return (neuron0x26512a0()*0.194666);
}

double NNfunction_cLg::synapse0x265eca0() {
   return (neuron0x2647330()*0.316061);
}

double NNfunction_cLg::synapse0x265ece0() {
   return (neuron0x2653e80()*-0.0371098);
}

double NNfunction_cLg::synapse0x265f670() {
   return (neuron0x2654850()*0.190716);
}

double NNfunction_cLg::synapse0x265f6b0() {
   return (neuron0x2655220()*0.492211);
}

double NNfunction_cLg::synapse0x2660040() {
   return (neuron0x2655bf0()*-0.444936);
}

double NNfunction_cLg::synapse0x2660080() {
   return (neuron0x26565c0()*1.03947);
}

double NNfunction_cLg::synapse0x263bf30() {
   return (neuron0x2656f90()*-0.722421);
}

double NNfunction_cLg::synapse0x263bf70() {
   return (neuron0x2657960()*-0.974777);
}

double NNfunction_cLg::synapse0x264f7e0() {
   return (neuron0x2658330()*-1.34654);
}

double NNfunction_cLg::synapse0x264f820() {
   return (neuron0x2658f10()*0.215814);
}

double NNfunction_cLg::synapse0x2660760() {
   return (neuron0x26598e0()*-0.0306822);
}

double NNfunction_cLg::synapse0x26607a0() {
   return (neuron0x264a760()*-0.378622);
}

double NNfunction_cLg::synapse0x26607e0() {
   return (neuron0x264b130()*0.0891945);
}

double NNfunction_cLg::synapse0x2660820() {
   return (neuron0x264bb00()*0.0898571);
}

double NNfunction_cLg::synapse0x26676d0() {
   return (neuron0x265e140()*0.044068);
}

double NNfunction_cLg::synapse0x2667710() {
   return (neuron0x265e9f0()*0.332135);
}

double NNfunction_cLg::synapse0x2667750() {
   return (neuron0x265f3c0()*0.298482);
}

double NNfunction_cLg::synapse0x2667790() {
   return (neuron0x265fd90()*1.05615);
}

double NNfunction_cLg::synapse0x2667b10() {
   return (neuron0x263bd10()*0.0505333);
}

double NNfunction_cLg::synapse0x2667b50() {
   return (neuron0x263c660()*0.0819677);
}

double NNfunction_cLg::synapse0x2667b90() {
   return (neuron0x263d140()*0.0224516);
}

double NNfunction_cLg::synapse0x2667bd0() {
   return (neuron0x263cbe0()*-0.0918098);
}

double NNfunction_cLg::synapse0x2667c10() {
   return (neuron0x263df20()*-0.0807844);
}

double NNfunction_cLg::synapse0x2667c50() {
   return (neuron0x263e8f0()*-0.0224363);
}

double NNfunction_cLg::synapse0x2667c90() {
   return (neuron0x263f6c0()*0.55071);
}

double NNfunction_cLg::synapse0x2667cd0() {
   return (neuron0x2640090()*-0.915072);
}

double NNfunction_cLg::synapse0x2667d10() {
   return (neuron0x2640a60()*-0.0774405);
}

double NNfunction_cLg::synapse0x2667d50() {
   return (neuron0x2641540()*0.0960913);
}

double NNfunction_cLg::synapse0x2667d90() {
   return (neuron0x2641f10()*0.4197);
}

double NNfunction_cLg::synapse0x2667dd0() {
   return (neuron0x263eff0()*1.78724);
}

double NNfunction_cLg::synapse0x2667e10() {
   return (neuron0x2643ac0()*0.517454);
}

double NNfunction_cLg::synapse0x2667e50() {
   return (neuron0x2644490()*0.203817);
}

double NNfunction_cLg::synapse0x2667e90() {
   return (neuron0x2644e60()*-0.0840476);
}

double NNfunction_cLg::synapse0x2667ed0() {
   return (neuron0x2645830()*0.575712);
}

double NNfunction_cLg::synapse0x2667960() {
   return (neuron0x2647640()*0.679666);
}

double NNfunction_cLg::synapse0x26679a0() {
   return (neuron0x2647920()*-0.0268253);
}

double NNfunction_cLg::synapse0x2668020() {
   return (neuron0x26482f0()*-0.0468474);
}

double NNfunction_cLg::synapse0x2668060() {
   return (neuron0x2648cc0()*0.282812);
}

double NNfunction_cLg::synapse0x26680a0() {
   return (neuron0x2649690()*-0.0643491);
}

double NNfunction_cLg::synapse0x26680e0() {
   return (neuron0x264a060()*-1.42815);
}

double NNfunction_cLg::synapse0x2668120() {
   return (neuron0x2642bb0()*1.62817);
}

double NNfunction_cLg::synapse0x2668160() {
   return (neuron0x2643580()*0.00137646);
}

double NNfunction_cLg::synapse0x26681a0() {
   return (neuron0x264cdf0()*0.064705);
}

double NNfunction_cLg::synapse0x26681e0() {
   return (neuron0x264d7c0()*0.017537);
}

double NNfunction_cLg::synapse0x2668220() {
   return (neuron0x264e190()*1.47875);
}

double NNfunction_cLg::synapse0x2668260() {
   return (neuron0x264eb60()*0.0108466);
}

double NNfunction_cLg::synapse0x26682a0() {
   return (neuron0x264f530()*0.0322994);
}

double NNfunction_cLg::synapse0x26682e0() {
   return (neuron0x264ff00()*-0.05346);
}

double NNfunction_cLg::synapse0x2668320() {
   return (neuron0x26508d0()*-0.580684);
}

double NNfunction_cLg::synapse0x2668360() {
   return (neuron0x26512a0()*0.0543722);
}

double NNfunction_cLg::synapse0x2667f10() {
   return (neuron0x2647330()*0.00188865);
}

double NNfunction_cLg::synapse0x2667f50() {
   return (neuron0x2653e80()*-0.0254743);
}

double NNfunction_cLg::synapse0x2667f90() {
   return (neuron0x2654850()*-0.0312204);
}

double NNfunction_cLg::synapse0x2667fd0() {
   return (neuron0x2655220()*-0.115383);
}

double NNfunction_cLg::synapse0x26685b0() {
   return (neuron0x2655bf0()*2.40059);
}

double NNfunction_cLg::synapse0x26685f0() {
   return (neuron0x26565c0()*-2.83745);
}

double NNfunction_cLg::synapse0x2668630() {
   return (neuron0x2656f90()*0.0948283);
}

double NNfunction_cLg::synapse0x2668670() {
   return (neuron0x2657960()*2.42559);
}

double NNfunction_cLg::synapse0x26686b0() {
   return (neuron0x2658330()*1.6276);
}

double NNfunction_cLg::synapse0x26686f0() {
   return (neuron0x2658f10()*0.0552216);
}

double NNfunction_cLg::synapse0x2668730() {
   return (neuron0x26598e0()*-0.053247);
}

double NNfunction_cLg::synapse0x2668770() {
   return (neuron0x264a760()*-0.572722);
}

double NNfunction_cLg::synapse0x26687b0() {
   return (neuron0x264b130()*-0.0357251);
}

double NNfunction_cLg::synapse0x26687f0() {
   return (neuron0x264bb00()*0.918681);
}

double NNfunction_cLg::synapse0x2668830() {
   return (neuron0x265e140()*0.0100669);
}

double NNfunction_cLg::synapse0x2668870() {
   return (neuron0x265e9f0()*0.0144578);
}

double NNfunction_cLg::synapse0x26688b0() {
   return (neuron0x265f3c0()*0.00819675);
}

double NNfunction_cLg::synapse0x26688f0() {
   return (neuron0x265fd90()*-1.11691);
}

double NNfunction_cLg::synapse0x2668c70() {
   return (neuron0x263bd10()*-0.827334);
}

double NNfunction_cLg::synapse0x2668cb0() {
   return (neuron0x263c660()*0.122282);
}

double NNfunction_cLg::synapse0x2668cf0() {
   return (neuron0x263d140()*-0.711773);
}

double NNfunction_cLg::synapse0x2668d30() {
   return (neuron0x263cbe0()*0.790882);
}

double NNfunction_cLg::synapse0x2668d70() {
   return (neuron0x263df20()*1.22642);
}

double NNfunction_cLg::synapse0x2668db0() {
   return (neuron0x263e8f0()*0.441662);
}

double NNfunction_cLg::synapse0x2668df0() {
   return (neuron0x263f6c0()*7.38937);
}

double NNfunction_cLg::synapse0x2668e30() {
   return (neuron0x2640090()*-1.85255);
}

double NNfunction_cLg::synapse0x2668e70() {
   return (neuron0x2640a60()*-0.536334);
}

double NNfunction_cLg::synapse0x2668eb0() {
   return (neuron0x2641540()*-1.08421);
}

double NNfunction_cLg::synapse0x2668ef0() {
   return (neuron0x2641f10()*0.034044);
}

double NNfunction_cLg::synapse0x2668f30() {
   return (neuron0x263eff0()*0.921602);
}

double NNfunction_cLg::synapse0x2668f70() {
   return (neuron0x2643ac0()*8.26735);
}

double NNfunction_cLg::synapse0x2668fb0() {
   return (neuron0x2644490()*1.26605);
}

double NNfunction_cLg::synapse0x2668ff0() {
   return (neuron0x2644e60()*1.00874);
}

double NNfunction_cLg::synapse0x2669030() {
   return (neuron0x2645830()*-0.00721855);
}

double NNfunction_cLg::synapse0x2668ac0() {
   return (neuron0x2647640()*0.106765);
}

double NNfunction_cLg::synapse0x2668b00() {
   return (neuron0x2647920()*0.164116);
}

double NNfunction_cLg::synapse0x2669180() {
   return (neuron0x26482f0()*0.340414);
}

double NNfunction_cLg::synapse0x26691c0() {
   return (neuron0x2648cc0()*-0.495215);
}

double NNfunction_cLg::synapse0x2669200() {
   return (neuron0x2649690()*0.438251);
}

double NNfunction_cLg::synapse0x2669240() {
   return (neuron0x264a060()*-1.91155);
}

double NNfunction_cLg::synapse0x2669280() {
   return (neuron0x2642bb0()*0.260891);
}

double NNfunction_cLg::synapse0x26692c0() {
   return (neuron0x2643580()*-2.1004);
}

double NNfunction_cLg::synapse0x2669300() {
   return (neuron0x264cdf0()*-0.841929);
}

double NNfunction_cLg::synapse0x2669340() {
   return (neuron0x264d7c0()*-0.444532);
}

double NNfunction_cLg::synapse0x2669380() {
   return (neuron0x264e190()*-0.509239);
}

double NNfunction_cLg::synapse0x26693c0() {
   return (neuron0x264eb60()*-0.68835);
}

double NNfunction_cLg::synapse0x2669400() {
   return (neuron0x264f530()*-0.734387);
}

double NNfunction_cLg::synapse0x2669440() {
   return (neuron0x264ff00()*0.762789);
}

double NNfunction_cLg::synapse0x2669480() {
   return (neuron0x26508d0()*-1.95031);
}

double NNfunction_cLg::synapse0x26694c0() {
   return (neuron0x26512a0()*-1.1796);
}

double NNfunction_cLg::synapse0x2669070() {
   return (neuron0x2647330()*0.471839);
}

double NNfunction_cLg::synapse0x26690b0() {
   return (neuron0x2653e80()*0.797241);
}

double NNfunction_cLg::synapse0x26690f0() {
   return (neuron0x2654850()*0.671232);
}

double NNfunction_cLg::synapse0x2669130() {
   return (neuron0x2655220()*-0.723971);
}

double NNfunction_cLg::synapse0x2669710() {
   return (neuron0x2655bf0()*1.2);
}

double NNfunction_cLg::synapse0x2669750() {
   return (neuron0x26565c0()*-2.14033);
}

double NNfunction_cLg::synapse0x2669790() {
   return (neuron0x2656f90()*-0.42653);
}

double NNfunction_cLg::synapse0x26697d0() {
   return (neuron0x2657960()*3.20312);
}

double NNfunction_cLg::synapse0x2669810() {
   return (neuron0x2658330()*1.37177);
}

double NNfunction_cLg::synapse0x2669850() {
   return (neuron0x2658f10()*-0.830062);
}

double NNfunction_cLg::synapse0x2669890() {
   return (neuron0x26598e0()*1.34013);
}

double NNfunction_cLg::synapse0x26698d0() {
   return (neuron0x264a760()*2.24771);
}

double NNfunction_cLg::synapse0x2669910() {
   return (neuron0x264b130()*0.545618);
}

double NNfunction_cLg::synapse0x2669950() {
   return (neuron0x264bb00()*2.00289);
}

double NNfunction_cLg::synapse0x2669990() {
   return (neuron0x265e140()*-0.0307753);
}

double NNfunction_cLg::synapse0x26699d0() {
   return (neuron0x265e9f0()*-0.909081);
}

double NNfunction_cLg::synapse0x2669a10() {
   return (neuron0x265f3c0()*-0.0707073);
}

double NNfunction_cLg::synapse0x2669a50() {
   return (neuron0x265fd90()*-0.775738);
}

double NNfunction_cLg::synapse0x2669dd0() {
   return (neuron0x263bd10()*-0.228701);
}

double NNfunction_cLg::synapse0x2669e10() {
   return (neuron0x263c660()*-0.0058036);
}

double NNfunction_cLg::synapse0x2669e50() {
   return (neuron0x263d140()*-0.364711);
}

double NNfunction_cLg::synapse0x2669e90() {
   return (neuron0x263cbe0()*0.297254);
}

double NNfunction_cLg::synapse0x2669ed0() {
   return (neuron0x263df20()*0.310309);
}

double NNfunction_cLg::synapse0x2669f10() {
   return (neuron0x263e8f0()*-0.242214);
}

double NNfunction_cLg::synapse0x2669f50() {
   return (neuron0x263f6c0()*-0.288107);
}

double NNfunction_cLg::synapse0x2669f90() {
   return (neuron0x2640090()*0.0409086);
}

double NNfunction_cLg::synapse0x2669fd0() {
   return (neuron0x2640a60()*0.592152);
}

double NNfunction_cLg::synapse0x266a010() {
   return (neuron0x2641540()*-0.162706);
}

double NNfunction_cLg::synapse0x266a050() {
   return (neuron0x2641f10()*0.119018);
}

double NNfunction_cLg::synapse0x266a090() {
   return (neuron0x263eff0()*0.408661);
}

double NNfunction_cLg::synapse0x266a0d0() {
   return (neuron0x2643ac0()*-0.310942);
}

double NNfunction_cLg::synapse0x266a110() {
   return (neuron0x2644490()*0.168737);
}

double NNfunction_cLg::synapse0x266a150() {
   return (neuron0x2644e60()*-0.659676);
}

double NNfunction_cLg::synapse0x266a190() {
   return (neuron0x2645830()*-0.61674);
}

double NNfunction_cLg::synapse0x2669c20() {
   return (neuron0x2647640()*-0.253507);
}

double NNfunction_cLg::synapse0x2669c60() {
   return (neuron0x2647920()*-0.313922);
}

double NNfunction_cLg::synapse0x266a2e0() {
   return (neuron0x26482f0()*-0.0391967);
}

double NNfunction_cLg::synapse0x266a320() {
   return (neuron0x2648cc0()*-0.730783);
}

double NNfunction_cLg::synapse0x266a360() {
   return (neuron0x2649690()*0.00299774);
}

double NNfunction_cLg::synapse0x266a3a0() {
   return (neuron0x264a060()*0.0370551);
}

double NNfunction_cLg::synapse0x266a3e0() {
   return (neuron0x2642bb0()*-0.538906);
}

double NNfunction_cLg::synapse0x266a420() {
   return (neuron0x2643580()*-0.135413);
}

double NNfunction_cLg::synapse0x266a460() {
   return (neuron0x264cdf0()*-0.391633);
}

double NNfunction_cLg::synapse0x266a4a0() {
   return (neuron0x264d7c0()*-0.112897);
}

double NNfunction_cLg::synapse0x266a4e0() {
   return (neuron0x264e190()*-0.437936);
}

double NNfunction_cLg::synapse0x266a520() {
   return (neuron0x264eb60()*0.0541411);
}

double NNfunction_cLg::synapse0x266a560() {
   return (neuron0x264f530()*-0.379814);
}

double NNfunction_cLg::synapse0x266a5a0() {
   return (neuron0x264ff00()*-0.224358);
}

double NNfunction_cLg::synapse0x266a5e0() {
   return (neuron0x26508d0()*-0.531508);
}

double NNfunction_cLg::synapse0x266a620() {
   return (neuron0x26512a0()*-0.466261);
}

double NNfunction_cLg::synapse0x266a1d0() {
   return (neuron0x2647330()*-0.361831);
}

double NNfunction_cLg::synapse0x266a210() {
   return (neuron0x2653e80()*-0.179672);
}

double NNfunction_cLg::synapse0x266a250() {
   return (neuron0x2654850()*-0.485115);
}

double NNfunction_cLg::synapse0x266a290() {
   return (neuron0x2655220()*-0.0400119);
}

double NNfunction_cLg::synapse0x266a870() {
   return (neuron0x2655bf0()*0.236013);
}

double NNfunction_cLg::synapse0x266a8b0() {
   return (neuron0x26565c0()*-0.00969992);
}

double NNfunction_cLg::synapse0x266a8f0() {
   return (neuron0x2656f90()*0.229936);
}

double NNfunction_cLg::synapse0x266a930() {
   return (neuron0x2657960()*-0.472063);
}

double NNfunction_cLg::synapse0x266a970() {
   return (neuron0x2658330()*-0.209247);
}

double NNfunction_cLg::synapse0x266a9b0() {
   return (neuron0x2658f10()*-0.27658);
}

double NNfunction_cLg::synapse0x266a9f0() {
   return (neuron0x26598e0()*0.258933);
}

double NNfunction_cLg::synapse0x266aa30() {
   return (neuron0x264a760()*-0.135447);
}

double NNfunction_cLg::synapse0x266aa70() {
   return (neuron0x264b130()*-0.17883);
}

double NNfunction_cLg::synapse0x266aab0() {
   return (neuron0x264bb00()*0.455107);
}

double NNfunction_cLg::synapse0x266aaf0() {
   return (neuron0x265e140()*0.272189);
}

double NNfunction_cLg::synapse0x266ab30() {
   return (neuron0x265e9f0()*-0.337219);
}

double NNfunction_cLg::synapse0x266ab70() {
   return (neuron0x265f3c0()*0.384799);
}

double NNfunction_cLg::synapse0x266abb0() {
   return (neuron0x265fd90()*-0.2036);
}

double NNfunction_cLg::synapse0x266ae10() {
   return (neuron0x2666f90()*-5.88041);
}

double NNfunction_cLg::synapse0x266ae50() {
   return (neuron0x2667330()*8.2566);
}

double NNfunction_cLg::synapse0x266ae90() {
   return (neuron0x26677d0()*-6.37651);
}

double NNfunction_cLg::synapse0x266aed0() {
   return (neuron0x2668930()*-8.79485);
}

double NNfunction_cLg::synapse0x266af10() {
   return (neuron0x2669a90()*-0.407587);
}

