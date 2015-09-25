#include "NNfunction_ss_sLsL.h"
#include <cmath>

double NNfunction_ss_sLsL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9435)/15.0834;
   input1 = (in1 - 31.1324)/892.374;
   input2 = (in2 - 451.269)/550.179;
   input3 = (in3 - 130.023)/678.941;
   input4 = (in4 - 784.15)/812.701;
   input5 = (in5 - 667.634)/784.125;
   input6 = (in6 - 671.182)/786.9;
   input7 = (in7 - 682.636)/787.294;
   input8 = (in8 - 680.193)/814.081;
   input9 = (in9 - 663.838)/796.444;
   input10 = (in10 - 703.18)/819.646;
   input11 = (in11 - 630.565)/686.393;
   input12 = (in12 - 388.085)/246.504;
   input13 = (in13 - 468.406)/410.89;
   input14 = (in14 - 626.21)/648.326;
   input15 = (in15 - 622.754)/645.403;
   input16 = (in16 - 453.032)/449.14;
   input17 = (in17 - 653.027)/717.635;
   input18 = (in18 - 646.501)/718.395;
   input19 = (in19 - 666.483)/706.344;
   input20 = (in20 - -117.036)/413.693;
   input21 = (in21 - -146.994)/942.899;
   input22 = (in22 - 6.80275)/966.596;
   input23 = (in23 - -82.0577)/519.774;
   switch(index) {
     case 0:
         return neuron0x298ff60();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLsL::Value(int index, double* input) {
   input0 = (input[0] - 22.9435)/15.0834;
   input1 = (input[1] - 31.1324)/892.374;
   input2 = (input[2] - 451.269)/550.179;
   input3 = (input[3] - 130.023)/678.941;
   input4 = (input[4] - 784.15)/812.701;
   input5 = (input[5] - 667.634)/784.125;
   input6 = (input[6] - 671.182)/786.9;
   input7 = (input[7] - 682.636)/787.294;
   input8 = (input[8] - 680.193)/814.081;
   input9 = (input[9] - 663.838)/796.444;
   input10 = (input[10] - 703.18)/819.646;
   input11 = (input[11] - 630.565)/686.393;
   input12 = (input[12] - 388.085)/246.504;
   input13 = (input[13] - 468.406)/410.89;
   input14 = (input[14] - 626.21)/648.326;
   input15 = (input[15] - 622.754)/645.403;
   input16 = (input[16] - 453.032)/449.14;
   input17 = (input[17] - 653.027)/717.635;
   input18 = (input[18] - 646.501)/718.395;
   input19 = (input[19] - 666.483)/706.344;
   input20 = (input[20] - -117.036)/413.693;
   input21 = (input[21] - -146.994)/942.899;
   input22 = (input[22] - 6.80275)/966.596;
   input23 = (input[23] - -82.0577)/519.774;
   switch(index) {
     case 0:
         return neuron0x298ff60();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLsL::neuron0x295c120() {
   return input0;
}

double NNfunction_ss_sLsL::neuron0x295c3d0() {
   return input1;
}

double NNfunction_ss_sLsL::neuron0x295c710() {
   return input2;
}

double NNfunction_ss_sLsL::neuron0x295ca50() {
   return input3;
}

double NNfunction_ss_sLsL::neuron0x295cd90() {
   return input4;
}

double NNfunction_ss_sLsL::neuron0x295d0d0() {
   return input5;
}

double NNfunction_ss_sLsL::neuron0x295d410() {
   return input6;
}

double NNfunction_ss_sLsL::neuron0x295d750() {
   return input7;
}

double NNfunction_ss_sLsL::neuron0x295da90() {
   return input8;
}

double NNfunction_ss_sLsL::neuron0x295ddd0() {
   return input9;
}

double NNfunction_ss_sLsL::neuron0x295e110() {
   return input10;
}

double NNfunction_ss_sLsL::neuron0x295e450() {
   return input11;
}

double NNfunction_ss_sLsL::neuron0x295e790() {
   return input12;
}

double NNfunction_ss_sLsL::neuron0x295ead0() {
   return input13;
}

double NNfunction_ss_sLsL::neuron0x295ee10() {
   return input14;
}

double NNfunction_ss_sLsL::neuron0x295f150() {
   return input15;
}

double NNfunction_ss_sLsL::neuron0x295f490() {
   return input16;
}

double NNfunction_ss_sLsL::neuron0x295f9f0() {
   return input17;
}

double NNfunction_ss_sLsL::neuron0x295fc10() {
   return input18;
}

double NNfunction_ss_sLsL::neuron0x295ff50() {
   return input19;
}

double NNfunction_ss_sLsL::neuron0x2960290() {
   return input20;
}

double NNfunction_ss_sLsL::neuron0x29605d0() {
   return input21;
}

double NNfunction_ss_sLsL::neuron0x2960910() {
   return input22;
}

double NNfunction_ss_sLsL::neuron0x2960c50() {
   return input23;
}

double NNfunction_ss_sLsL::input0x29610c0() {
   double input = -0.298491;
   input += synapse0x295c0a0();
   input += synapse0x295c0e0();
   input += synapse0x2961370();
   input += synapse0x29613b0();
   input += synapse0x29613f0();
   input += synapse0x2961430();
   input += synapse0x2961470();
   input += synapse0x29614b0();
   input += synapse0x29614f0();
   input += synapse0x2961530();
   input += synapse0x2961570();
   input += synapse0x29615b0();
   input += synapse0x29615f0();
   input += synapse0x2961630();
   input += synapse0x2961670();
   input += synapse0x29616b0();
   input += synapse0x295c010();
   input += synapse0x295c050();
   input += synapse0x27171e0();
   input += synapse0x2717220();
   input += synapse0x2961910();
   input += synapse0x2961950();
   input += synapse0x2961990();
   input += synapse0x29619d0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x29610c0() {
   double input = input0x29610c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2961a10() {
   double input = -1.17987;
   input += synapse0x2961d50();
   input += synapse0x2961d90();
   input += synapse0x2961dd0();
   input += synapse0x2961e10();
   input += synapse0x2961e50();
   input += synapse0x2961e90();
   input += synapse0x2961ed0();
   input += synapse0x2961f10();
   input += synapse0x2961f50();
   input += synapse0x2961800();
   input += synapse0x2961840();
   input += synapse0x2961880();
   input += synapse0x29618c0();
   input += synapse0x29621a0();
   input += synapse0x29621e0();
   input += synapse0x2962220();
   input += synapse0x2961ba0();
   input += synapse0x2961be0();
   input += synapse0x2962370();
   input += synapse0x29623b0();
   input += synapse0x29623f0();
   input += synapse0x2962430();
   input += synapse0x2962470();
   input += synapse0x29624b0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2961a10() {
   double input = input0x2961a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x29624f0() {
   double input = 0.85278;
   input += synapse0x2962830();
   input += synapse0x2962870();
   input += synapse0x29628b0();
   input += synapse0x29628f0();
   input += synapse0x2962930();
   input += synapse0x2962970();
   input += synapse0x29629b0();
   input += synapse0x29629f0();
   input += synapse0x2962a30();
   input += synapse0x2962a70();
   input += synapse0x2962ab0();
   input += synapse0x2962af0();
   input += synapse0x2962b30();
   input += synapse0x2962b70();
   input += synapse0x2962bb0();
   input += synapse0x2962bf0();
   input += synapse0x2962680();
   input += synapse0x29626c0();
   input += synapse0x294b190();
   input += synapse0x27250e0();
   input += synapse0x2725120();
   input += synapse0x2840630();
   input += synapse0x2840670();
   input += synapse0x295be80();
   return input;
}

double NNfunction_ss_sLsL::neuron0x29624f0() {
   double input = input0x29624f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2725840() {
   double input = -0.178478;
   input += synapse0x27259d0();
   input += synapse0x29620b0();
   input += synapse0x29620f0();
   input += synapse0x2962130();
   input += synapse0x2962d40();
   input += synapse0x2962d80();
   input += synapse0x2962dc0();
   input += synapse0x2962e00();
   input += synapse0x2962e40();
   input += synapse0x2962e80();
   input += synapse0x2962ec0();
   input += synapse0x2962f00();
   input += synapse0x2962f40();
   input += synapse0x2962f80();
   input += synapse0x2962fc0();
   input += synapse0x2963000();
   input += synapse0x295bec0();
   input += synapse0x295bf00();
   input += synapse0x295bf40();
   input += synapse0x2963150();
   input += synapse0x2963190();
   input += synapse0x29631d0();
   input += synapse0x2963210();
   input += synapse0x2963250();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2725840() {
   double input = input0x2725840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2963290() {
   double input = 1.24455;
   input += synapse0x29635d0();
   input += synapse0x2963610();
   input += synapse0x2963650();
   input += synapse0x2963690();
   input += synapse0x29636d0();
   input += synapse0x2963710();
   input += synapse0x2963750();
   input += synapse0x2963790();
   input += synapse0x29637d0();
   input += synapse0x2963810();
   input += synapse0x2963850();
   input += synapse0x2963890();
   input += synapse0x29638d0();
   input += synapse0x2963910();
   input += synapse0x2963950();
   input += synapse0x2963990();
   input += synapse0x2963420();
   input += synapse0x2963460();
   input += synapse0x2963ae0();
   input += synapse0x2963b20();
   input += synapse0x2963b60();
   input += synapse0x2963ba0();
   input += synapse0x2963be0();
   input += synapse0x2963c20();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2963290() {
   double input = input0x2963290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2963c60() {
   double input = -0.548068;
   input += synapse0x2963fa0();
   input += synapse0x2963fe0();
   input += synapse0x2964020();
   input += synapse0x2964060();
   input += synapse0x29640a0();
   input += synapse0x29640e0();
   input += synapse0x2964120();
   input += synapse0x2964160();
   input += synapse0x29641a0();
   input += synapse0x2725430();
   input += synapse0x2725470();
   input += synapse0x27254b0();
   input += synapse0x27254f0();
   input += synapse0x2725530();
   input += synapse0x2725570();
   input += synapse0x27255b0();
   input += synapse0x2963df0();
   input += synapse0x2963e30();
   input += synapse0x2725700();
   input += synapse0x2725740();
   input += synapse0x2725780();
   input += synapse0x27257c0();
   input += synapse0x2725800();
   input += synapse0x29649f0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2963c60() {
   double input = input0x2963c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2964a30() {
   double input = -0.252708;
   input += synapse0x2964d70();
   input += synapse0x2964db0();
   input += synapse0x2964df0();
   input += synapse0x2964e30();
   input += synapse0x2964e70();
   input += synapse0x2964eb0();
   input += synapse0x2964ef0();
   input += synapse0x2964f30();
   input += synapse0x2964f70();
   input += synapse0x2964fb0();
   input += synapse0x2964ff0();
   input += synapse0x2965030();
   input += synapse0x2965070();
   input += synapse0x29650b0();
   input += synapse0x29650f0();
   input += synapse0x2965130();
   input += synapse0x2964bc0();
   input += synapse0x2964c00();
   input += synapse0x2965280();
   input += synapse0x29652c0();
   input += synapse0x2965300();
   input += synapse0x2965340();
   input += synapse0x2965380();
   input += synapse0x29653c0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2964a30() {
   double input = input0x2964a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2965400() {
   double input = 0.644616;
   input += synapse0x2965740();
   input += synapse0x2965780();
   input += synapse0x29657c0();
   input += synapse0x2965800();
   input += synapse0x2965840();
   input += synapse0x2965880();
   input += synapse0x29658c0();
   input += synapse0x2965900();
   input += synapse0x2965940();
   input += synapse0x2965980();
   input += synapse0x29659c0();
   input += synapse0x2965a00();
   input += synapse0x2965a40();
   input += synapse0x2965a80();
   input += synapse0x2965ac0();
   input += synapse0x2965b00();
   input += synapse0x2965590();
   input += synapse0x29655d0();
   input += synapse0x2965c50();
   input += synapse0x2965c90();
   input += synapse0x2965cd0();
   input += synapse0x2965d10();
   input += synapse0x2965d50();
   input += synapse0x2965d90();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2965400() {
   double input = input0x2965400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2965dd0() {
   double input = 0.0146646;
   input += synapse0x295f8e0();
   input += synapse0x295f920();
   input += synapse0x295f960();
   input += synapse0x295f9a0();
   input += synapse0x2966320();
   input += synapse0x2966360();
   input += synapse0x29663a0();
   input += synapse0x29663e0();
   input += synapse0x2966420();
   input += synapse0x2966460();
   input += synapse0x29664a0();
   input += synapse0x29664e0();
   input += synapse0x2966520();
   input += synapse0x2966560();
   input += synapse0x29665a0();
   input += synapse0x29665e0();
   input += synapse0x2965f60();
   input += synapse0x2965fa0();
   input += synapse0x2966730();
   input += synapse0x2966770();
   input += synapse0x29667b0();
   input += synapse0x29667f0();
   input += synapse0x2966830();
   input += synapse0x2966870();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2965dd0() {
   double input = input0x2965dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x29668b0() {
   double input = -0.853874;
   input += synapse0x2966bf0();
   input += synapse0x2966c30();
   input += synapse0x2966c70();
   input += synapse0x2966cb0();
   input += synapse0x2966cf0();
   input += synapse0x2966d30();
   input += synapse0x2966d70();
   input += synapse0x2966db0();
   input += synapse0x2966df0();
   input += synapse0x2966e30();
   input += synapse0x2966e70();
   input += synapse0x2966eb0();
   input += synapse0x2966ef0();
   input += synapse0x2966f30();
   input += synapse0x2966f70();
   input += synapse0x2966fb0();
   input += synapse0x2966a40();
   input += synapse0x2966a80();
   input += synapse0x2967100();
   input += synapse0x2967140();
   input += synapse0x2967180();
   input += synapse0x29671c0();
   input += synapse0x2967200();
   input += synapse0x2967240();
   return input;
}

double NNfunction_ss_sLsL::neuron0x29668b0() {
   double input = input0x29668b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2967280() {
   double input = -0.0475072;
   input += synapse0x29675c0();
   input += synapse0x2967600();
   input += synapse0x2967640();
   input += synapse0x2967680();
   input += synapse0x29676c0();
   input += synapse0x2967700();
   input += synapse0x2967740();
   input += synapse0x2967780();
   input += synapse0x29677c0();
   input += synapse0x2967800();
   input += synapse0x2967840();
   input += synapse0x2967880();
   input += synapse0x29678c0();
   input += synapse0x2967900();
   input += synapse0x2967940();
   input += synapse0x2967980();
   input += synapse0x2967410();
   input += synapse0x2967450();
   input += synapse0x29641e0();
   input += synapse0x2964220();
   input += synapse0x2964260();
   input += synapse0x29642a0();
   input += synapse0x29642e0();
   input += synapse0x2964320();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2967280() {
   double input = input0x2967280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2964360() {
   double input = 4.80398;
   input += synapse0x29646a0();
   input += synapse0x29646e0();
   input += synapse0x2964720();
   input += synapse0x2964760();
   input += synapse0x29647a0();
   input += synapse0x29647e0();
   input += synapse0x2964820();
   input += synapse0x2964860();
   input += synapse0x29648a0();
   input += synapse0x29648e0();
   input += synapse0x2964920();
   input += synapse0x2964960();
   input += synapse0x29649a0();
   input += synapse0x2968ae0();
   input += synapse0x2968b20();
   input += synapse0x2968b60();
   input += synapse0x29644f0();
   input += synapse0x2964530();
   input += synapse0x2968cb0();
   input += synapse0x2968cf0();
   input += synapse0x2968d30();
   input += synapse0x2968d70();
   input += synapse0x2968db0();
   input += synapse0x2968df0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2964360() {
   double input = input0x2964360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2968e30() {
   double input = -1.72549;
   input += synapse0x2969170();
   input += synapse0x29691b0();
   input += synapse0x29691f0();
   input += synapse0x2969230();
   input += synapse0x2969270();
   input += synapse0x29692b0();
   input += synapse0x29692f0();
   input += synapse0x2969330();
   input += synapse0x2969370();
   input += synapse0x29693b0();
   input += synapse0x29693f0();
   input += synapse0x2969430();
   input += synapse0x2969470();
   input += synapse0x29694b0();
   input += synapse0x29694f0();
   input += synapse0x2969530();
   input += synapse0x2968fc0();
   input += synapse0x2969000();
   input += synapse0x2969680();
   input += synapse0x29696c0();
   input += synapse0x2969700();
   input += synapse0x2969740();
   input += synapse0x2969780();
   input += synapse0x29697c0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2968e30() {
   double input = input0x2968e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2969800() {
   double input = -0.828024;
   input += synapse0x2969b40();
   input += synapse0x2969b80();
   input += synapse0x2969bc0();
   input += synapse0x2969c00();
   input += synapse0x2969c40();
   input += synapse0x2969c80();
   input += synapse0x2969cc0();
   input += synapse0x2969d00();
   input += synapse0x2969d40();
   input += synapse0x2969d80();
   input += synapse0x2969dc0();
   input += synapse0x2969e00();
   input += synapse0x2969e40();
   input += synapse0x2969e80();
   input += synapse0x2969ec0();
   input += synapse0x2969f00();
   input += synapse0x2969990();
   input += synapse0x29699d0();
   input += synapse0x296a050();
   input += synapse0x296a090();
   input += synapse0x296a0d0();
   input += synapse0x296a110();
   input += synapse0x296a150();
   input += synapse0x296a190();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2969800() {
   double input = input0x2969800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x296a1d0() {
   double input = 0.363166;
   input += synapse0x296a510();
   input += synapse0x296a550();
   input += synapse0x296a590();
   input += synapse0x296a5d0();
   input += synapse0x296a610();
   input += synapse0x296a650();
   input += synapse0x296a690();
   input += synapse0x296a6d0();
   input += synapse0x296a710();
   input += synapse0x296a750();
   input += synapse0x296a790();
   input += synapse0x296a7d0();
   input += synapse0x296a810();
   input += synapse0x296a850();
   input += synapse0x296a890();
   input += synapse0x296a8d0();
   input += synapse0x296a360();
   input += synapse0x296a3a0();
   input += synapse0x296aa20();
   input += synapse0x296aa60();
   input += synapse0x296aaa0();
   input += synapse0x296aae0();
   input += synapse0x296ab20();
   input += synapse0x296ab60();
   return input;
}

double NNfunction_ss_sLsL::neuron0x296a1d0() {
   double input = input0x296a1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x296aba0() {
   double input = -0.0113491;
   input += synapse0x296aee0();
   input += synapse0x295c2b0();
   input += synapse0x295c2f0();
   input += synapse0x295c5f0();
   input += synapse0x295c630();
   input += synapse0x295c930();
   input += synapse0x295c970();
   input += synapse0x295cc70();
   input += synapse0x295ccb0();
   input += synapse0x295cfb0();
   input += synapse0x295cff0();
   input += synapse0x295d2f0();
   input += synapse0x295d330();
   input += synapse0x295d630();
   input += synapse0x295d670();
   input += synapse0x295d970();
   input += synapse0x295d9b0();
   input += synapse0x295dcb0();
   input += synapse0x295dcf0();
   input += synapse0x295dff0();
   input += synapse0x295e030();
   input += synapse0x295e330();
   input += synapse0x295e370();
   input += synapse0x295e670();
   return input;
}

double NNfunction_ss_sLsL::neuron0x296aba0() {
   double input = input0x296aba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x296c9b0() {
   double input = 0.326358;
   input += synapse0x295e6b0();
   input += synapse0x295f370();
   input += synapse0x295f3b0();
   input += synapse0x296ad30();
   input += synapse0x296ad70();
   input += synapse0x295f6b0();
   input += synapse0x295f6f0();
   input += synapse0x27170c0();
   input += synapse0x2717100();
   input += synapse0x295fe30();
   input += synapse0x295fe70();
   input += synapse0x2960170();
   input += synapse0x29601b0();
   input += synapse0x29604b0();
   input += synapse0x29604f0();
   input += synapse0x29607f0();
   input += synapse0x2960830();
   input += synapse0x2960b30();
   input += synapse0x2960b70();
   input += synapse0x2960e70();
   input += synapse0x2960eb0();
   input += synapse0x295e9b0();
   input += synapse0x295e9f0();
   input += synapse0x296cc50();
   return input;
}

double NNfunction_ss_sLsL::neuron0x296c9b0() {
   double input = input0x296c9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x296cc90() {
   double input = -2.00173;
   input += synapse0x296cfd0();
   input += synapse0x296d010();
   input += synapse0x296d050();
   input += synapse0x296d090();
   input += synapse0x296d0d0();
   input += synapse0x296d110();
   input += synapse0x296d150();
   input += synapse0x296d190();
   input += synapse0x296d1d0();
   input += synapse0x296d210();
   input += synapse0x296d250();
   input += synapse0x296d290();
   input += synapse0x296d2d0();
   input += synapse0x296d310();
   input += synapse0x296d350();
   input += synapse0x296d390();
   input += synapse0x296ce20();
   input += synapse0x296ce60();
   input += synapse0x296d4e0();
   input += synapse0x296d520();
   input += synapse0x296d560();
   input += synapse0x296d5a0();
   input += synapse0x296d5e0();
   input += synapse0x296d620();
   return input;
}

double NNfunction_ss_sLsL::neuron0x296cc90() {
   double input = input0x296cc90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x296d660() {
   double input = 1.20745;
   input += synapse0x296d9a0();
   input += synapse0x296d9e0();
   input += synapse0x296da20();
   input += synapse0x296da60();
   input += synapse0x296daa0();
   input += synapse0x296dae0();
   input += synapse0x296db20();
   input += synapse0x296db60();
   input += synapse0x296dba0();
   input += synapse0x296dbe0();
   input += synapse0x296dc20();
   input += synapse0x296dc60();
   input += synapse0x296dca0();
   input += synapse0x296dce0();
   input += synapse0x296dd20();
   input += synapse0x296dd60();
   input += synapse0x296d7f0();
   input += synapse0x296d830();
   input += synapse0x296deb0();
   input += synapse0x296def0();
   input += synapse0x296df30();
   input += synapse0x296df70();
   input += synapse0x296dfb0();
   input += synapse0x296dff0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x296d660() {
   double input = input0x296d660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x296e030() {
   double input = 1.93895;
   input += synapse0x296e370();
   input += synapse0x296e3b0();
   input += synapse0x296e3f0();
   input += synapse0x296e430();
   input += synapse0x296e470();
   input += synapse0x296e4b0();
   input += synapse0x296e4f0();
   input += synapse0x296e530();
   input += synapse0x296e570();
   input += synapse0x296e5b0();
   input += synapse0x296e5f0();
   input += synapse0x296e630();
   input += synapse0x296e670();
   input += synapse0x296e6b0();
   input += synapse0x296e6f0();
   input += synapse0x296e730();
   input += synapse0x296e1c0();
   input += synapse0x296e200();
   input += synapse0x296e880();
   input += synapse0x296e8c0();
   input += synapse0x296e900();
   input += synapse0x296e940();
   input += synapse0x296e980();
   input += synapse0x296e9c0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x296e030() {
   double input = input0x296e030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x296ea00() {
   double input = 1.17786;
   input += synapse0x296ed40();
   input += synapse0x296ed80();
   input += synapse0x296edc0();
   input += synapse0x296ee00();
   input += synapse0x296ee40();
   input += synapse0x296ee80();
   input += synapse0x296eec0();
   input += synapse0x296ef00();
   input += synapse0x296ef40();
   input += synapse0x296ef80();
   input += synapse0x296efc0();
   input += synapse0x296f000();
   input += synapse0x296f040();
   input += synapse0x296f080();
   input += synapse0x296f0c0();
   input += synapse0x296f100();
   input += synapse0x296eb90();
   input += synapse0x296ebd0();
   input += synapse0x296f250();
   input += synapse0x296f290();
   input += synapse0x296f2d0();
   input += synapse0x296f310();
   input += synapse0x296f350();
   input += synapse0x296f390();
   return input;
}

double NNfunction_ss_sLsL::neuron0x296ea00() {
   double input = input0x296ea00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x296f3d0() {
   double input = -0.239492;
   input += synapse0x296f710();
   input += synapse0x296f750();
   input += synapse0x296f790();
   input += synapse0x296f7d0();
   input += synapse0x296f810();
   input += synapse0x296f850();
   input += synapse0x296f890();
   input += synapse0x296f8d0();
   input += synapse0x296f910();
   input += synapse0x2967ad0();
   input += synapse0x2967b10();
   input += synapse0x2967b50();
   input += synapse0x2967b90();
   input += synapse0x2967bd0();
   input += synapse0x2967c10();
   input += synapse0x2967c50();
   input += synapse0x296f560();
   input += synapse0x296f5a0();
   input += synapse0x2967da0();
   input += synapse0x2967de0();
   input += synapse0x2967e20();
   input += synapse0x2967e60();
   input += synapse0x2967ea0();
   input += synapse0x2967ee0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x296f3d0() {
   double input = input0x296f3d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2967f20() {
   double input = -0.845823;
   input += synapse0x2968260();
   input += synapse0x29682a0();
   input += synapse0x29682e0();
   input += synapse0x2968320();
   input += synapse0x2968360();
   input += synapse0x29683a0();
   input += synapse0x29683e0();
   input += synapse0x2968420();
   input += synapse0x2968460();
   input += synapse0x29684a0();
   input += synapse0x29684e0();
   input += synapse0x2968520();
   input += synapse0x2968560();
   input += synapse0x29685a0();
   input += synapse0x29685e0();
   input += synapse0x2968620();
   input += synapse0x29680b0();
   input += synapse0x29680f0();
   input += synapse0x2968770();
   input += synapse0x29687b0();
   input += synapse0x29687f0();
   input += synapse0x2968830();
   input += synapse0x2968870();
   input += synapse0x29688b0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2967f20() {
   double input = input0x2967f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x29688f0() {
   double input = 0.405286;
   input += synapse0x2968a80();
   input += synapse0x2971b10();
   input += synapse0x2971b50();
   input += synapse0x2971b90();
   input += synapse0x2971bd0();
   input += synapse0x2971c10();
   input += synapse0x2971c50();
   input += synapse0x2971c90();
   input += synapse0x2971cd0();
   input += synapse0x2971d10();
   input += synapse0x2971d50();
   input += synapse0x2971d90();
   input += synapse0x2971dd0();
   input += synapse0x2971e10();
   input += synapse0x2971e50();
   input += synapse0x2971e90();
   input += synapse0x2971960();
   input += synapse0x29719a0();
   input += synapse0x2971fe0();
   input += synapse0x2972020();
   input += synapse0x2972060();
   input += synapse0x29720a0();
   input += synapse0x29720e0();
   input += synapse0x2972120();
   return input;
}

double NNfunction_ss_sLsL::neuron0x29688f0() {
   double input = input0x29688f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2972160() {
   double input = -0.0708513;
   input += synapse0x29724a0();
   input += synapse0x29724e0();
   input += synapse0x2972520();
   input += synapse0x2972560();
   input += synapse0x29725a0();
   input += synapse0x29725e0();
   input += synapse0x2972620();
   input += synapse0x2972660();
   input += synapse0x29726a0();
   input += synapse0x29726e0();
   input += synapse0x2972720();
   input += synapse0x2972760();
   input += synapse0x29727a0();
   input += synapse0x29727e0();
   input += synapse0x2972820();
   input += synapse0x2972860();
   input += synapse0x29722f0();
   input += synapse0x2972330();
   input += synapse0x29729b0();
   input += synapse0x29729f0();
   input += synapse0x2972a30();
   input += synapse0x2972a70();
   input += synapse0x2972ab0();
   input += synapse0x2972af0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2972160() {
   double input = input0x2972160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2972b30() {
   double input = -0.586875;
   input += synapse0x2972e70();
   input += synapse0x2972eb0();
   input += synapse0x2972ef0();
   input += synapse0x2972f30();
   input += synapse0x2972f70();
   input += synapse0x2972fb0();
   input += synapse0x2972ff0();
   input += synapse0x2973030();
   input += synapse0x2973070();
   input += synapse0x29730b0();
   input += synapse0x29730f0();
   input += synapse0x2973130();
   input += synapse0x2973170();
   input += synapse0x29731b0();
   input += synapse0x29731f0();
   input += synapse0x2973230();
   input += synapse0x2972cc0();
   input += synapse0x2972d00();
   input += synapse0x2973380();
   input += synapse0x29733c0();
   input += synapse0x2973400();
   input += synapse0x2973440();
   input += synapse0x2973480();
   input += synapse0x29734c0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2972b30() {
   double input = input0x2972b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2973500() {
   double input = 1.20645;
   input += synapse0x2973840();
   input += synapse0x2973880();
   input += synapse0x29738c0();
   input += synapse0x2973900();
   input += synapse0x2973940();
   input += synapse0x2973980();
   input += synapse0x29739c0();
   input += synapse0x2973a00();
   input += synapse0x2973a40();
   input += synapse0x2973a80();
   input += synapse0x2973ac0();
   input += synapse0x2973b00();
   input += synapse0x2973b40();
   input += synapse0x2973b80();
   input += synapse0x2973bc0();
   input += synapse0x2973c00();
   input += synapse0x2973690();
   input += synapse0x29736d0();
   input += synapse0x2973d50();
   input += synapse0x2973d90();
   input += synapse0x2973dd0();
   input += synapse0x2973e10();
   input += synapse0x2973e50();
   input += synapse0x2973e90();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2973500() {
   double input = input0x2973500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2973ed0() {
   double input = -1.07987;
   input += synapse0x2974210();
   input += synapse0x2974250();
   input += synapse0x2974290();
   input += synapse0x29742d0();
   input += synapse0x2974310();
   input += synapse0x2974350();
   input += synapse0x2974390();
   input += synapse0x29743d0();
   input += synapse0x2974410();
   input += synapse0x2974450();
   input += synapse0x2974490();
   input += synapse0x29744d0();
   input += synapse0x2974510();
   input += synapse0x2974550();
   input += synapse0x2974590();
   input += synapse0x29745d0();
   input += synapse0x2974060();
   input += synapse0x29740a0();
   input += synapse0x2974720();
   input += synapse0x2974760();
   input += synapse0x29747a0();
   input += synapse0x29747e0();
   input += synapse0x2974820();
   input += synapse0x2974860();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2973ed0() {
   double input = input0x2973ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x29748a0() {
   double input = -0.21579;
   input += synapse0x2974be0();
   input += synapse0x2974c20();
   input += synapse0x2974c60();
   input += synapse0x2974ca0();
   input += synapse0x2974ce0();
   input += synapse0x2974d20();
   input += synapse0x2974d60();
   input += synapse0x2974da0();
   input += synapse0x2974de0();
   input += synapse0x2974e20();
   input += synapse0x2974e60();
   input += synapse0x2974ea0();
   input += synapse0x2974ee0();
   input += synapse0x2974f20();
   input += synapse0x2974f60();
   input += synapse0x2974fa0();
   input += synapse0x2974a30();
   input += synapse0x2974a70();
   input += synapse0x29750f0();
   input += synapse0x2975130();
   input += synapse0x2975170();
   input += synapse0x29751b0();
   input += synapse0x29751f0();
   input += synapse0x2975230();
   return input;
}

double NNfunction_ss_sLsL::neuron0x29748a0() {
   double input = input0x29748a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2975270() {
   double input = 0.0496979;
   input += synapse0x29755b0();
   input += synapse0x29755f0();
   input += synapse0x2975630();
   input += synapse0x2975670();
   input += synapse0x29756b0();
   input += synapse0x29756f0();
   input += synapse0x2975730();
   input += synapse0x2975770();
   input += synapse0x29757b0();
   input += synapse0x29757f0();
   input += synapse0x2975830();
   input += synapse0x2975870();
   input += synapse0x29758b0();
   input += synapse0x29758f0();
   input += synapse0x2975930();
   input += synapse0x2975970();
   input += synapse0x2975400();
   input += synapse0x2975440();
   input += synapse0x2975ac0();
   input += synapse0x2975b00();
   input += synapse0x2975b40();
   input += synapse0x2975b80();
   input += synapse0x2975bc0();
   input += synapse0x2975c00();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2975270() {
   double input = input0x2975270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2975c40() {
   double input = 1.18765;
   input += synapse0x2975f80();
   input += synapse0x2975fc0();
   input += synapse0x2976000();
   input += synapse0x2976040();
   input += synapse0x2976080();
   input += synapse0x29760c0();
   input += synapse0x2976100();
   input += synapse0x2976140();
   input += synapse0x2976180();
   input += synapse0x29761c0();
   input += synapse0x2976200();
   input += synapse0x2976240();
   input += synapse0x2976280();
   input += synapse0x29762c0();
   input += synapse0x2976300();
   input += synapse0x2976340();
   input += synapse0x2975dd0();
   input += synapse0x2975e10();
   input += synapse0x2976490();
   input += synapse0x29764d0();
   input += synapse0x2976510();
   input += synapse0x2976550();
   input += synapse0x2976590();
   input += synapse0x29765d0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2975c40() {
   double input = input0x2975c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2976610() {
   double input = 1.0879;
   input += synapse0x2976950();
   input += synapse0x296af20();
   input += synapse0x296af60();
   input += synapse0x296afa0();
   input += synapse0x296b1f0();
   input += synapse0x296b230();
   input += synapse0x296b270();
   input += synapse0x296b4c0();
   input += synapse0x296b500();
   input += synapse0x296b750();
   input += synapse0x296b790();
   input += synapse0x296b7d0();
   input += synapse0x296ba20();
   input += synapse0x296ba60();
   input += synapse0x296bcb0();
   input += synapse0x296bcf0();
   input += synapse0x29767a0();
   input += synapse0x29767e0();
   input += synapse0x296be40();
   input += synapse0x296c350();
   input += synapse0x296c390();
   input += synapse0x296c3d0();
   input += synapse0x296c620();
   input += synapse0x296c660();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2976610() {
   double input = input0x2976610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x296c6a0() {
   double input = -2.4836;
   input += synapse0x296bf10();
   input += synapse0x296bf50();
   input += synapse0x296bf90();
   input += synapse0x296bfd0();
   input += synapse0x296c950();
   input += synapse0x2978ca0();
   input += synapse0x2978ce0();
   input += synapse0x2978d20();
   input += synapse0x2978d60();
   input += synapse0x2978da0();
   input += synapse0x2978de0();
   input += synapse0x2978e20();
   input += synapse0x2978e60();
   input += synapse0x2978ea0();
   input += synapse0x2978ee0();
   input += synapse0x2978f20();
   input += synapse0x296c830();
   input += synapse0x296c870();
   input += synapse0x2979070();
   input += synapse0x29790b0();
   input += synapse0x29790f0();
   input += synapse0x2979130();
   input += synapse0x2979170();
   input += synapse0x29791b0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x296c6a0() {
   double input = input0x296c6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x29791f0() {
   double input = -0.453325;
   input += synapse0x2979530();
   input += synapse0x2979570();
   input += synapse0x29795b0();
   input += synapse0x29795f0();
   input += synapse0x2979630();
   input += synapse0x2979670();
   input += synapse0x29796b0();
   input += synapse0x29796f0();
   input += synapse0x2979730();
   input += synapse0x2979770();
   input += synapse0x29797b0();
   input += synapse0x29797f0();
   input += synapse0x2979830();
   input += synapse0x2979870();
   input += synapse0x29798b0();
   input += synapse0x29798f0();
   input += synapse0x2979380();
   input += synapse0x29793c0();
   input += synapse0x2979a40();
   input += synapse0x2979a80();
   input += synapse0x2979ac0();
   input += synapse0x2979b00();
   input += synapse0x2979b40();
   input += synapse0x2979b80();
   return input;
}

double NNfunction_ss_sLsL::neuron0x29791f0() {
   double input = input0x29791f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2979bc0() {
   double input = -1.26959;
   input += synapse0x2979f00();
   input += synapse0x2979f40();
   input += synapse0x2979f80();
   input += synapse0x2979fc0();
   input += synapse0x297a000();
   input += synapse0x297a040();
   input += synapse0x297a080();
   input += synapse0x297a0c0();
   input += synapse0x297a100();
   input += synapse0x297a140();
   input += synapse0x297a180();
   input += synapse0x297a1c0();
   input += synapse0x297a200();
   input += synapse0x297a240();
   input += synapse0x297a280();
   input += synapse0x297a2c0();
   input += synapse0x2979d50();
   input += synapse0x2979d90();
   input += synapse0x297a410();
   input += synapse0x297a450();
   input += synapse0x297a490();
   input += synapse0x297a4d0();
   input += synapse0x297a510();
   input += synapse0x297a550();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2979bc0() {
   double input = input0x2979bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x297a590() {
   double input = -1.15526;
   input += synapse0x297a8d0();
   input += synapse0x297a910();
   input += synapse0x297a950();
   input += synapse0x297a990();
   input += synapse0x297a9d0();
   input += synapse0x297aa10();
   input += synapse0x297aa50();
   input += synapse0x297aa90();
   input += synapse0x297aad0();
   input += synapse0x297ab10();
   input += synapse0x297ab50();
   input += synapse0x297ab90();
   input += synapse0x297abd0();
   input += synapse0x297ac10();
   input += synapse0x297ac50();
   input += synapse0x297ac90();
   input += synapse0x297a720();
   input += synapse0x297a760();
   input += synapse0x297ade0();
   input += synapse0x297ae20();
   input += synapse0x297ae60();
   input += synapse0x297aea0();
   input += synapse0x297aee0();
   input += synapse0x297af20();
   return input;
}

double NNfunction_ss_sLsL::neuron0x297a590() {
   double input = input0x297a590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x297af60() {
   double input = 2.27498;
   input += synapse0x297b2a0();
   input += synapse0x297b2e0();
   input += synapse0x297b320();
   input += synapse0x297b360();
   input += synapse0x297b3a0();
   input += synapse0x297b3e0();
   input += synapse0x297b420();
   input += synapse0x297b460();
   input += synapse0x297b4a0();
   input += synapse0x297b4e0();
   input += synapse0x297b520();
   input += synapse0x297b560();
   input += synapse0x297b5a0();
   input += synapse0x297b5e0();
   input += synapse0x297b620();
   input += synapse0x297b660();
   input += synapse0x297b0f0();
   input += synapse0x297b130();
   input += synapse0x297b7b0();
   input += synapse0x297b7f0();
   input += synapse0x297b830();
   input += synapse0x297b870();
   input += synapse0x297b8b0();
   input += synapse0x297b8f0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x297af60() {
   double input = input0x297af60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x297b930() {
   double input = -4.9245;
   input += synapse0x297bc70();
   input += synapse0x297bcb0();
   input += synapse0x297bcf0();
   input += synapse0x297bd30();
   input += synapse0x297bd70();
   input += synapse0x297bdb0();
   input += synapse0x297bdf0();
   input += synapse0x297be30();
   input += synapse0x297be70();
   input += synapse0x297beb0();
   input += synapse0x297bef0();
   input += synapse0x297bf30();
   input += synapse0x297bf70();
   input += synapse0x297bfb0();
   input += synapse0x297bff0();
   input += synapse0x297c030();
   input += synapse0x297bac0();
   input += synapse0x297bb00();
   input += synapse0x297c180();
   input += synapse0x297c1c0();
   input += synapse0x297c200();
   input += synapse0x297c240();
   input += synapse0x297c280();
   input += synapse0x297c2c0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x297b930() {
   double input = input0x297b930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x297c300() {
   double input = -0.562274;
   input += synapse0x297c640();
   input += synapse0x297c680();
   input += synapse0x297c6c0();
   input += synapse0x297c700();
   input += synapse0x297c740();
   input += synapse0x297c780();
   input += synapse0x297c7c0();
   input += synapse0x297c800();
   input += synapse0x297c840();
   input += synapse0x297c880();
   input += synapse0x297c8c0();
   input += synapse0x297c900();
   input += synapse0x297c940();
   input += synapse0x297c980();
   input += synapse0x297c9c0();
   input += synapse0x297ca00();
   input += synapse0x297c490();
   input += synapse0x297c4d0();
   input += synapse0x297cb50();
   input += synapse0x297cb90();
   input += synapse0x297cbd0();
   input += synapse0x297cc10();
   input += synapse0x297cc50();
   input += synapse0x297cc90();
   return input;
}

double NNfunction_ss_sLsL::neuron0x297c300() {
   double input = input0x297c300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x297ccd0() {
   double input = 0.506458;
   input += synapse0x297d010();
   input += synapse0x297d050();
   input += synapse0x297d090();
   input += synapse0x297d0d0();
   input += synapse0x297d110();
   input += synapse0x297d150();
   input += synapse0x297d190();
   input += synapse0x297d1d0();
   input += synapse0x297d210();
   input += synapse0x297d250();
   input += synapse0x297d290();
   input += synapse0x297d2d0();
   input += synapse0x297d310();
   input += synapse0x297d350();
   input += synapse0x297d390();
   input += synapse0x297d3d0();
   input += synapse0x297ce60();
   input += synapse0x297cea0();
   input += synapse0x297d520();
   input += synapse0x297d560();
   input += synapse0x297d5a0();
   input += synapse0x297d5e0();
   input += synapse0x297d620();
   input += synapse0x297d660();
   return input;
}

double NNfunction_ss_sLsL::neuron0x297ccd0() {
   double input = input0x297ccd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x297d6a0() {
   double input = -0.4583;
   input += synapse0x2966110();
   input += synapse0x2966150();
   input += synapse0x2966190();
   input += synapse0x29661d0();
   input += synapse0x2966210();
   input += synapse0x2966250();
   input += synapse0x2966290();
   input += synapse0x29662d0();
   input += synapse0x297ddf0();
   input += synapse0x297de30();
   input += synapse0x297de70();
   input += synapse0x297deb0();
   input += synapse0x297def0();
   input += synapse0x297df30();
   input += synapse0x297df70();
   input += synapse0x297dfb0();
   input += synapse0x297d830();
   input += synapse0x297d870();
   input += synapse0x297e100();
   input += synapse0x297e140();
   input += synapse0x297e180();
   input += synapse0x297e1c0();
   input += synapse0x297e200();
   input += synapse0x297e240();
   return input;
}

double NNfunction_ss_sLsL::neuron0x297d6a0() {
   double input = input0x297d6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x297e280() {
   double input = -3.53588;
   input += synapse0x297e5c0();
   input += synapse0x297e600();
   input += synapse0x297e640();
   input += synapse0x297e680();
   input += synapse0x297e6c0();
   input += synapse0x297e700();
   input += synapse0x297e740();
   input += synapse0x297e780();
   input += synapse0x297e7c0();
   input += synapse0x297e800();
   input += synapse0x297e840();
   input += synapse0x297e880();
   input += synapse0x297e8c0();
   input += synapse0x297e900();
   input += synapse0x297e940();
   input += synapse0x297e980();
   input += synapse0x297e410();
   input += synapse0x297e450();
   input += synapse0x297ead0();
   input += synapse0x297eb10();
   input += synapse0x297eb50();
   input += synapse0x297eb90();
   input += synapse0x297ebd0();
   input += synapse0x297ec10();
   return input;
}

double NNfunction_ss_sLsL::neuron0x297e280() {
   double input = input0x297e280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x297ec50() {
   double input = -0.2967;
   input += synapse0x297ef90();
   input += synapse0x297efd0();
   input += synapse0x297f010();
   input += synapse0x297f050();
   input += synapse0x297f090();
   input += synapse0x297f0d0();
   input += synapse0x297f110();
   input += synapse0x297f150();
   input += synapse0x297f190();
   input += synapse0x297f1d0();
   input += synapse0x297f210();
   input += synapse0x297f250();
   input += synapse0x297f290();
   input += synapse0x297f2d0();
   input += synapse0x297f310();
   input += synapse0x297f350();
   input += synapse0x297ede0();
   input += synapse0x297ee20();
   input += synapse0x296f950();
   input += synapse0x296f990();
   input += synapse0x296f9d0();
   input += synapse0x296fa10();
   input += synapse0x296fa50();
   input += synapse0x296fa90();
   return input;
}

double NNfunction_ss_sLsL::neuron0x297ec50() {
   double input = input0x297ec50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x296fad0() {
   double input = 0.988367;
   input += synapse0x296fe10();
   input += synapse0x296fe50();
   input += synapse0x296fe90();
   input += synapse0x296fed0();
   input += synapse0x296ff10();
   input += synapse0x296ff50();
   input += synapse0x296ff90();
   input += synapse0x296ffd0();
   input += synapse0x2970010();
   input += synapse0x2970050();
   input += synapse0x2970090();
   input += synapse0x29700d0();
   input += synapse0x2970110();
   input += synapse0x2970150();
   input += synapse0x2970190();
   input += synapse0x29701d0();
   input += synapse0x296fc60();
   input += synapse0x296fca0();
   input += synapse0x2970320();
   input += synapse0x2970360();
   input += synapse0x29703a0();
   input += synapse0x29703e0();
   input += synapse0x2970420();
   input += synapse0x2970460();
   return input;
}

double NNfunction_ss_sLsL::neuron0x296fad0() {
   double input = input0x296fad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x29704a0() {
   double input = 0.970928;
   input += synapse0x29707e0();
   input += synapse0x2970820();
   input += synapse0x2970860();
   input += synapse0x29708a0();
   input += synapse0x29708e0();
   input += synapse0x2970920();
   input += synapse0x2970960();
   input += synapse0x29709a0();
   input += synapse0x29709e0();
   input += synapse0x2970a20();
   input += synapse0x2970a60();
   input += synapse0x2970aa0();
   input += synapse0x2970ae0();
   input += synapse0x2970b20();
   input += synapse0x2970b60();
   input += synapse0x2970ba0();
   input += synapse0x2970630();
   input += synapse0x2970670();
   input += synapse0x2970cf0();
   input += synapse0x2970d30();
   input += synapse0x2970d70();
   input += synapse0x2970db0();
   input += synapse0x2970df0();
   input += synapse0x2970e30();
   return input;
}

double NNfunction_ss_sLsL::neuron0x29704a0() {
   double input = input0x29704a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2970e70() {
   double input = -1.23295;
   input += synapse0x29711b0();
   input += synapse0x29711f0();
   input += synapse0x2971230();
   input += synapse0x2971270();
   input += synapse0x29712b0();
   input += synapse0x29712f0();
   input += synapse0x2971330();
   input += synapse0x2971370();
   input += synapse0x29713b0();
   input += synapse0x29713f0();
   input += synapse0x2971430();
   input += synapse0x2971470();
   input += synapse0x29714b0();
   input += synapse0x29714f0();
   input += synapse0x2971530();
   input += synapse0x2971570();
   input += synapse0x2971000();
   input += synapse0x2971040();
   input += synapse0x29716c0();
   input += synapse0x2971700();
   input += synapse0x2971740();
   input += synapse0x2971780();
   input += synapse0x29717c0();
   input += synapse0x2971800();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2970e70() {
   double input = input0x2970e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x29834b0() {
   double input = 1.29132;
   input += synapse0x29836d0();
   input += synapse0x2983710();
   input += synapse0x2983750();
   input += synapse0x2983790();
   input += synapse0x29837d0();
   input += synapse0x2983810();
   input += synapse0x2983850();
   input += synapse0x2983890();
   input += synapse0x29838d0();
   input += synapse0x2983910();
   input += synapse0x2983950();
   input += synapse0x2983990();
   input += synapse0x29839d0();
   input += synapse0x2983a10();
   input += synapse0x2983a50();
   input += synapse0x2983a90();
   input += synapse0x2971840();
   input += synapse0x2971880();
   input += synapse0x2983be0();
   input += synapse0x2983c20();
   input += synapse0x2983c60();
   input += synapse0x2983ca0();
   input += synapse0x2983ce0();
   input += synapse0x2983d20();
   return input;
}

double NNfunction_ss_sLsL::neuron0x29834b0() {
   double input = input0x29834b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2983d60() {
   double input = 0.367514;
   input += synapse0x29840a0();
   input += synapse0x29840e0();
   input += synapse0x2984120();
   input += synapse0x2984160();
   input += synapse0x29841a0();
   input += synapse0x29841e0();
   input += synapse0x2984220();
   input += synapse0x2984260();
   input += synapse0x29842a0();
   input += synapse0x29842e0();
   input += synapse0x2984320();
   input += synapse0x2984360();
   input += synapse0x29843a0();
   input += synapse0x29843e0();
   input += synapse0x2984420();
   input += synapse0x2984460();
   input += synapse0x2983ef0();
   input += synapse0x2983f30();
   input += synapse0x29845b0();
   input += synapse0x29845f0();
   input += synapse0x2984630();
   input += synapse0x2984670();
   input += synapse0x29846b0();
   input += synapse0x29846f0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2983d60() {
   double input = input0x2983d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2984730() {
   double input = 0.438689;
   input += synapse0x2984a70();
   input += synapse0x2984ab0();
   input += synapse0x2984af0();
   input += synapse0x2984b30();
   input += synapse0x2984b70();
   input += synapse0x2984bb0();
   input += synapse0x2984bf0();
   input += synapse0x2984c30();
   input += synapse0x2984c70();
   input += synapse0x2984cb0();
   input += synapse0x2984cf0();
   input += synapse0x2984d30();
   input += synapse0x2984d70();
   input += synapse0x2984db0();
   input += synapse0x2984df0();
   input += synapse0x2984e30();
   input += synapse0x29848c0();
   input += synapse0x2984900();
   input += synapse0x2984f80();
   input += synapse0x2984fc0();
   input += synapse0x2985000();
   input += synapse0x2985040();
   input += synapse0x2985080();
   input += synapse0x29850c0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2984730() {
   double input = input0x2984730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x2985100() {
   double input = 3.06785;
   input += synapse0x2985440();
   input += synapse0x2985480();
   input += synapse0x29854c0();
   input += synapse0x2985500();
   input += synapse0x2985540();
   input += synapse0x2985580();
   input += synapse0x29855c0();
   input += synapse0x2985600();
   input += synapse0x2985640();
   input += synapse0x2985680();
   input += synapse0x29856c0();
   input += synapse0x2985700();
   input += synapse0x2985740();
   input += synapse0x2985780();
   input += synapse0x29857c0();
   input += synapse0x2985800();
   input += synapse0x2985290();
   input += synapse0x29852d0();
   input += synapse0x2985950();
   input += synapse0x2985990();
   input += synapse0x29859d0();
   input += synapse0x2985a10();
   input += synapse0x2985a50();
   input += synapse0x2985a90();
   return input;
}

double NNfunction_ss_sLsL::neuron0x2985100() {
   double input = input0x2985100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x298c300() {
   double input = 0.903113;
   input += synapse0x2962020();
   input += synapse0x2962060();
   input += synapse0x2963540();
   input += synapse0x2963580();
   input += synapse0x2963f10();
   input += synapse0x2963f50();
   input += synapse0x2964ce0();
   input += synapse0x2964d20();
   input += synapse0x29656b0();
   input += synapse0x29656f0();
   input += synapse0x2966080();
   input += synapse0x29660c0();
   input += synapse0x2966b60();
   input += synapse0x2966ba0();
   input += synapse0x2967530();
   input += synapse0x2967570();
   input += synapse0x2964610();
   input += synapse0x2964650();
   input += synapse0x29690e0();
   input += synapse0x2969120();
   input += synapse0x2969ab0();
   input += synapse0x2969af0();
   input += synapse0x296a480();
   input += synapse0x296a4c0();
   input += synapse0x296ae50();
   input += synapse0x296ae90();
   input += synapse0x295f030();
   input += synapse0x295f070();
   input += synapse0x296cf40();
   input += synapse0x296cf80();
   input += synapse0x296d910();
   input += synapse0x296d950();
   input += synapse0x296e2e0();
   input += synapse0x296e320();
   input += synapse0x296ecb0();
   input += synapse0x296ecf0();
   input += synapse0x296f680();
   input += synapse0x296f6c0();
   input += synapse0x29681d0();
   input += synapse0x2968210();
   input += synapse0x2971a80();
   input += synapse0x2971ac0();
   input += synapse0x2972410();
   input += synapse0x2972450();
   input += synapse0x2972de0();
   input += synapse0x2972e20();
   input += synapse0x29737b0();
   input += synapse0x29737f0();
   input += synapse0x2974180();
   input += synapse0x29741c0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x298c300() {
   double input = input0x298c300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x298c6a0() {
   double input = 0.789329;
   input += synapse0x29768c0();
   input += synapse0x2976900();
   input += synapse0x296be80();
   input += synapse0x296bec0();
   input += synapse0x29794a0();
   input += synapse0x29794e0();
   input += synapse0x2979e70();
   input += synapse0x2979eb0();
   input += synapse0x297a840();
   input += synapse0x297a880();
   input += synapse0x297b210();
   input += synapse0x297b250();
   input += synapse0x297bbe0();
   input += synapse0x297bc20();
   input += synapse0x297c5b0();
   input += synapse0x297c5f0();
   input += synapse0x297cf80();
   input += synapse0x297cfc0();
   input += synapse0x297d950();
   input += synapse0x297d990();
   input += synapse0x297e530();
   input += synapse0x297e570();
   input += synapse0x297ef00();
   input += synapse0x297ef40();
   input += synapse0x296fd80();
   input += synapse0x296fdc0();
   input += synapse0x2970750();
   input += synapse0x2970790();
   input += synapse0x2971120();
   input += synapse0x2971160();
   input += synapse0x2983640();
   input += synapse0x2983680();
   input += synapse0x2984010();
   input += synapse0x2984050();
   input += synapse0x29849e0();
   input += synapse0x2984a20();
   input += synapse0x29853b0();
   input += synapse0x29853f0();
   input += synapse0x29612e0();
   input += synapse0x2961320();
   input += synapse0x2974b50();
   input += synapse0x2974b90();
   input += synapse0x2985ad0();
   input += synapse0x2985b10();
   input += synapse0x2985b50();
   input += synapse0x2985b90();
   input += synapse0x298ca40();
   input += synapse0x298ca80();
   input += synapse0x298cac0();
   input += synapse0x298cb00();
   return input;
}

double NNfunction_ss_sLsL::neuron0x298c6a0() {
   double input = input0x298c6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x298cb40() {
   double input = 0.469412;
   input += synapse0x298ce80();
   input += synapse0x298cec0();
   input += synapse0x298cf00();
   input += synapse0x298cf40();
   input += synapse0x298cf80();
   input += synapse0x298cfc0();
   input += synapse0x298d000();
   input += synapse0x298d040();
   input += synapse0x298d080();
   input += synapse0x298d0c0();
   input += synapse0x298d100();
   input += synapse0x298d140();
   input += synapse0x298d180();
   input += synapse0x298d1c0();
   input += synapse0x298d200();
   input += synapse0x298d240();
   input += synapse0x298ccd0();
   input += synapse0x298cd10();
   input += synapse0x298d390();
   input += synapse0x298d3d0();
   input += synapse0x298d410();
   input += synapse0x298d450();
   input += synapse0x298d490();
   input += synapse0x298d4d0();
   input += synapse0x298d510();
   input += synapse0x298d550();
   input += synapse0x298d590();
   input += synapse0x298d5d0();
   input += synapse0x298d610();
   input += synapse0x298d650();
   input += synapse0x298d690();
   input += synapse0x298d6d0();
   input += synapse0x298d280();
   input += synapse0x298d2c0();
   input += synapse0x298d300();
   input += synapse0x298d340();
   input += synapse0x298d920();
   input += synapse0x298d960();
   input += synapse0x298d9a0();
   input += synapse0x298d9e0();
   input += synapse0x298da20();
   input += synapse0x298da60();
   input += synapse0x298daa0();
   input += synapse0x298dae0();
   input += synapse0x298db20();
   input += synapse0x298db60();
   input += synapse0x298dba0();
   input += synapse0x298dbe0();
   input += synapse0x298dc20();
   input += synapse0x298dc60();
   return input;
}

double NNfunction_ss_sLsL::neuron0x298cb40() {
   double input = input0x298cb40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x298dca0() {
   double input = -0.00511104;
   input += synapse0x298dfe0();
   input += synapse0x298e020();
   input += synapse0x298e060();
   input += synapse0x298e0a0();
   input += synapse0x298e0e0();
   input += synapse0x298e120();
   input += synapse0x298e160();
   input += synapse0x298e1a0();
   input += synapse0x298e1e0();
   input += synapse0x298e220();
   input += synapse0x298e260();
   input += synapse0x298e2a0();
   input += synapse0x298e2e0();
   input += synapse0x298e320();
   input += synapse0x298e360();
   input += synapse0x298e3a0();
   input += synapse0x298de30();
   input += synapse0x298de70();
   input += synapse0x298e4f0();
   input += synapse0x298e530();
   input += synapse0x298e570();
   input += synapse0x298e5b0();
   input += synapse0x298e5f0();
   input += synapse0x298e630();
   input += synapse0x298e670();
   input += synapse0x298e6b0();
   input += synapse0x298e6f0();
   input += synapse0x298e730();
   input += synapse0x298e770();
   input += synapse0x298e7b0();
   input += synapse0x298e7f0();
   input += synapse0x298e830();
   input += synapse0x298e3e0();
   input += synapse0x298e420();
   input += synapse0x298e460();
   input += synapse0x298e4a0();
   input += synapse0x298ea80();
   input += synapse0x298eac0();
   input += synapse0x298eb00();
   input += synapse0x298eb40();
   input += synapse0x298eb80();
   input += synapse0x298ebc0();
   input += synapse0x298ec00();
   input += synapse0x298ec40();
   input += synapse0x298ec80();
   input += synapse0x298ecc0();
   input += synapse0x298ed00();
   input += synapse0x298ed40();
   input += synapse0x298ed80();
   input += synapse0x298edc0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x298dca0() {
   double input = input0x298dca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x298ee00() {
   double input = -0.697529;
   input += synapse0x298f140();
   input += synapse0x298f180();
   input += synapse0x298f1c0();
   input += synapse0x298f200();
   input += synapse0x298f240();
   input += synapse0x298f280();
   input += synapse0x298f2c0();
   input += synapse0x298f300();
   input += synapse0x298f340();
   input += synapse0x298f380();
   input += synapse0x298f3c0();
   input += synapse0x298f400();
   input += synapse0x298f440();
   input += synapse0x298f480();
   input += synapse0x298f4c0();
   input += synapse0x298f500();
   input += synapse0x298ef90();
   input += synapse0x298efd0();
   input += synapse0x298f650();
   input += synapse0x298f690();
   input += synapse0x298f6d0();
   input += synapse0x298f710();
   input += synapse0x298f750();
   input += synapse0x298f790();
   input += synapse0x298f7d0();
   input += synapse0x298f810();
   input += synapse0x298f850();
   input += synapse0x298f890();
   input += synapse0x298f8d0();
   input += synapse0x298f910();
   input += synapse0x298f950();
   input += synapse0x298f990();
   input += synapse0x298f540();
   input += synapse0x298f580();
   input += synapse0x298f5c0();
   input += synapse0x298f600();
   input += synapse0x298fbe0();
   input += synapse0x298fc20();
   input += synapse0x298fc60();
   input += synapse0x298fca0();
   input += synapse0x298fce0();
   input += synapse0x298fd20();
   input += synapse0x298fd60();
   input += synapse0x298fda0();
   input += synapse0x298fde0();
   input += synapse0x298fe20();
   input += synapse0x298fe60();
   input += synapse0x298fea0();
   input += synapse0x298fee0();
   input += synapse0x298ff20();
   return input;
}

double NNfunction_ss_sLsL::neuron0x298ee00() {
   double input = input0x298ee00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x298ff60() {
   double input = -0.403385;
   input += synapse0x2990180();
   input += synapse0x29901c0();
   input += synapse0x2990200();
   input += synapse0x2990240();
   input += synapse0x2990280();
   return input;
}

double NNfunction_ss_sLsL::neuron0x298ff60() {
   double input = input0x298ff60();
   return (input * 1)+0;
}

double NNfunction_ss_sLsL::synapse0x295c0a0() {
   return (neuron0x295c120()*0.0432764);
}

double NNfunction_ss_sLsL::synapse0x295c0e0() {
   return (neuron0x295c3d0()*0.0545168);
}

double NNfunction_ss_sLsL::synapse0x2961370() {
   return (neuron0x295c710()*-0.365526);
}

double NNfunction_ss_sLsL::synapse0x29613b0() {
   return (neuron0x295ca50()*-0.442471);
}

double NNfunction_ss_sLsL::synapse0x29613f0() {
   return (neuron0x295cd90()*-0.166455);
}

double NNfunction_ss_sLsL::synapse0x2961430() {
   return (neuron0x295d0d0()*-0.150577);
}

double NNfunction_ss_sLsL::synapse0x2961470() {
   return (neuron0x295d410()*-0.339005);
}

double NNfunction_ss_sLsL::synapse0x29614b0() {
   return (neuron0x295d750()*0.0528059);
}

double NNfunction_ss_sLsL::synapse0x29614f0() {
   return (neuron0x295da90()*0.657485);
}

double NNfunction_ss_sLsL::synapse0x2961530() {
   return (neuron0x295ddd0()*-0.10626);
}

double NNfunction_ss_sLsL::synapse0x2961570() {
   return (neuron0x295e110()*-0.490598);
}

double NNfunction_ss_sLsL::synapse0x29615b0() {
   return (neuron0x295e450()*-1.3265);
}

double NNfunction_ss_sLsL::synapse0x29615f0() {
   return (neuron0x295e790()*1.40104);
}

double NNfunction_ss_sLsL::synapse0x2961630() {
   return (neuron0x295ead0()*-0.00783452);
}

double NNfunction_ss_sLsL::synapse0x2961670() {
   return (neuron0x295ee10()*-1.04382);
}

double NNfunction_ss_sLsL::synapse0x29616b0() {
   return (neuron0x295f150()*0.791991);
}

double NNfunction_ss_sLsL::synapse0x295c010() {
   return (neuron0x295f490()*-0.782591);
}

double NNfunction_ss_sLsL::synapse0x295c050() {
   return (neuron0x295f9f0()*-1.59774);
}

double NNfunction_ss_sLsL::synapse0x27171e0() {
   return (neuron0x295fc10()*0.88238);
}

double NNfunction_ss_sLsL::synapse0x2717220() {
   return (neuron0x295ff50()*-0.858426);
}

double NNfunction_ss_sLsL::synapse0x2961910() {
   return (neuron0x2960290()*-0.185161);
}

double NNfunction_ss_sLsL::synapse0x2961950() {
   return (neuron0x29605d0()*-0.711476);
}

double NNfunction_ss_sLsL::synapse0x2961990() {
   return (neuron0x2960910()*0.771699);
}

double NNfunction_ss_sLsL::synapse0x29619d0() {
   return (neuron0x2960c50()*-0.0968993);
}

double NNfunction_ss_sLsL::synapse0x2961d50() {
   return (neuron0x295c120()*0.0153182);
}

double NNfunction_ss_sLsL::synapse0x2961d90() {
   return (neuron0x295c3d0()*0.484401);
}

double NNfunction_ss_sLsL::synapse0x2961dd0() {
   return (neuron0x295c710()*0.839544);
}

double NNfunction_ss_sLsL::synapse0x2961e10() {
   return (neuron0x295ca50()*0.701703);
}

double NNfunction_ss_sLsL::synapse0x2961e50() {
   return (neuron0x295cd90()*0.0500686);
}

double NNfunction_ss_sLsL::synapse0x2961e90() {
   return (neuron0x295d0d0()*0.134384);
}

double NNfunction_ss_sLsL::synapse0x2961ed0() {
   return (neuron0x295d410()*0.657847);
}

double NNfunction_ss_sLsL::synapse0x2961f10() {
   return (neuron0x295d750()*0.197207);
}

double NNfunction_ss_sLsL::synapse0x2961f50() {
   return (neuron0x295da90()*0.275976);
}

double NNfunction_ss_sLsL::synapse0x2961800() {
   return (neuron0x295ddd0()*-0.235917);
}

double NNfunction_ss_sLsL::synapse0x2961840() {
   return (neuron0x295e110()*-0.135084);
}

double NNfunction_ss_sLsL::synapse0x2961880() {
   return (neuron0x295e450()*1.26031);
}

double NNfunction_ss_sLsL::synapse0x29618c0() {
   return (neuron0x295e790()*-0.34662);
}

double NNfunction_ss_sLsL::synapse0x29621a0() {
   return (neuron0x295ead0()*-0.633599);
}

double NNfunction_ss_sLsL::synapse0x29621e0() {
   return (neuron0x295ee10()*-0.126066);
}

double NNfunction_ss_sLsL::synapse0x2962220() {
   return (neuron0x295f150()*-0.101517);
}

double NNfunction_ss_sLsL::synapse0x2961ba0() {
   return (neuron0x295f490()*-0.0829097);
}

double NNfunction_ss_sLsL::synapse0x2961be0() {
   return (neuron0x295f9f0()*-0.837205);
}

double NNfunction_ss_sLsL::synapse0x2962370() {
   return (neuron0x295fc10()*1.64949);
}

double NNfunction_ss_sLsL::synapse0x29623b0() {
   return (neuron0x295ff50()*-0.956918);
}

double NNfunction_ss_sLsL::synapse0x29623f0() {
   return (neuron0x2960290()*0.266908);
}

double NNfunction_ss_sLsL::synapse0x2962430() {
   return (neuron0x29605d0()*0.134028);
}

double NNfunction_ss_sLsL::synapse0x2962470() {
   return (neuron0x2960910()*-0.310181);
}

double NNfunction_ss_sLsL::synapse0x29624b0() {
   return (neuron0x2960c50()*0.0305354);
}

double NNfunction_ss_sLsL::synapse0x2962830() {
   return (neuron0x295c120()*0.011795);
}

double NNfunction_ss_sLsL::synapse0x2962870() {
   return (neuron0x295c3d0()*-0.0872469);
}

double NNfunction_ss_sLsL::synapse0x29628b0() {
   return (neuron0x295c710()*-0.0567869);
}

double NNfunction_ss_sLsL::synapse0x29628f0() {
   return (neuron0x295ca50()*0.362367);
}

double NNfunction_ss_sLsL::synapse0x2962930() {
   return (neuron0x295cd90()*0.151713);
}

double NNfunction_ss_sLsL::synapse0x2962970() {
   return (neuron0x295d0d0()*-0.0209103);
}

double NNfunction_ss_sLsL::synapse0x29629b0() {
   return (neuron0x295d410()*0.00285178);
}

double NNfunction_ss_sLsL::synapse0x29629f0() {
   return (neuron0x295d750()*-0.0893099);
}

double NNfunction_ss_sLsL::synapse0x2962a30() {
   return (neuron0x295da90()*-0.0761071);
}

double NNfunction_ss_sLsL::synapse0x2962a70() {
   return (neuron0x295ddd0()*-0.0366855);
}

double NNfunction_ss_sLsL::synapse0x2962ab0() {
   return (neuron0x295e110()*-0.101142);
}

double NNfunction_ss_sLsL::synapse0x2962af0() {
   return (neuron0x295e450()*-0.00985962);
}

double NNfunction_ss_sLsL::synapse0x2962b30() {
   return (neuron0x295e790()*1.21631);
}

double NNfunction_ss_sLsL::synapse0x2962b70() {
   return (neuron0x295ead0()*0.0496426);
}

double NNfunction_ss_sLsL::synapse0x2962bb0() {
   return (neuron0x295ee10()*0.206356);
}

double NNfunction_ss_sLsL::synapse0x2962bf0() {
   return (neuron0x295f150()*-0.554665);
}

double NNfunction_ss_sLsL::synapse0x2962680() {
   return (neuron0x295f490()*0.0180258);
}

double NNfunction_ss_sLsL::synapse0x29626c0() {
   return (neuron0x295f9f0()*-0.0780335);
}

double NNfunction_ss_sLsL::synapse0x294b190() {
   return (neuron0x295fc10()*-0.0917636);
}

double NNfunction_ss_sLsL::synapse0x27250e0() {
   return (neuron0x295ff50()*0.0417875);
}

double NNfunction_ss_sLsL::synapse0x2725120() {
   return (neuron0x2960290()*0.0412864);
}

double NNfunction_ss_sLsL::synapse0x2840630() {
   return (neuron0x29605d0()*-0.00430435);
}

double NNfunction_ss_sLsL::synapse0x2840670() {
   return (neuron0x2960910()*-0.0516723);
}

double NNfunction_ss_sLsL::synapse0x295be80() {
   return (neuron0x2960c50()*-0.074062);
}

double NNfunction_ss_sLsL::synapse0x27259d0() {
   return (neuron0x295c120()*0.000874204);
}

double NNfunction_ss_sLsL::synapse0x29620b0() {
   return (neuron0x295c3d0()*-0.0105012);
}

double NNfunction_ss_sLsL::synapse0x29620f0() {
   return (neuron0x295c710()*-0.00873707);
}

double NNfunction_ss_sLsL::synapse0x2962130() {
   return (neuron0x295ca50()*-5.63214);
}

double NNfunction_ss_sLsL::synapse0x2962d40() {
   return (neuron0x295cd90()*0.00807179);
}

double NNfunction_ss_sLsL::synapse0x2962d80() {
   return (neuron0x295d0d0()*-0.021674);
}

double NNfunction_ss_sLsL::synapse0x2962dc0() {
   return (neuron0x295d410()*-0.0208112);
}

double NNfunction_ss_sLsL::synapse0x2962e00() {
   return (neuron0x295d750()*-0.00626451);
}

double NNfunction_ss_sLsL::synapse0x2962e40() {
   return (neuron0x295da90()*-0.00666563);
}

double NNfunction_ss_sLsL::synapse0x2962e80() {
   return (neuron0x295ddd0()*-0.00602288);
}

double NNfunction_ss_sLsL::synapse0x2962ec0() {
   return (neuron0x295e110()*0.00787901);
}

double NNfunction_ss_sLsL::synapse0x2962f00() {
   return (neuron0x295e450()*-0.00186419);
}

double NNfunction_ss_sLsL::synapse0x2962f40() {
   return (neuron0x295e790()*-0.348905);
}

double NNfunction_ss_sLsL::synapse0x2962f80() {
   return (neuron0x295ead0()*-0.0243923);
}

double NNfunction_ss_sLsL::synapse0x2962fc0() {
   return (neuron0x295ee10()*0.00827362);
}

double NNfunction_ss_sLsL::synapse0x2963000() {
   return (neuron0x295f150()*-0.0108759);
}

double NNfunction_ss_sLsL::synapse0x295bec0() {
   return (neuron0x295f490()*-0.0213097);
}

double NNfunction_ss_sLsL::synapse0x295bf00() {
   return (neuron0x295f9f0()*-0.00210684);
}

double NNfunction_ss_sLsL::synapse0x295bf40() {
   return (neuron0x295fc10()*-0.00731741);
}

double NNfunction_ss_sLsL::synapse0x2963150() {
   return (neuron0x295ff50()*0.0174539);
}

double NNfunction_ss_sLsL::synapse0x2963190() {
   return (neuron0x2960290()*-0.00485644);
}

double NNfunction_ss_sLsL::synapse0x29631d0() {
   return (neuron0x29605d0()*-0.00305917);
}

double NNfunction_ss_sLsL::synapse0x2963210() {
   return (neuron0x2960910()*0.0193449);
}

double NNfunction_ss_sLsL::synapse0x2963250() {
   return (neuron0x2960c50()*-0.00818945);
}

double NNfunction_ss_sLsL::synapse0x29635d0() {
   return (neuron0x295c120()*0.148053);
}

double NNfunction_ss_sLsL::synapse0x2963610() {
   return (neuron0x295c3d0()*0.425403);
}

double NNfunction_ss_sLsL::synapse0x2963650() {
   return (neuron0x295c710()*1.24825);
}

double NNfunction_ss_sLsL::synapse0x2963690() {
   return (neuron0x295ca50()*0.983746);
}

double NNfunction_ss_sLsL::synapse0x29636d0() {
   return (neuron0x295cd90()*1.30245);
}

double NNfunction_ss_sLsL::synapse0x2963710() {
   return (neuron0x295d0d0()*0.445431);
}

double NNfunction_ss_sLsL::synapse0x2963750() {
   return (neuron0x295d410()*0.789434);
}

double NNfunction_ss_sLsL::synapse0x2963790() {
   return (neuron0x295d750()*-0.0757229);
}

double NNfunction_ss_sLsL::synapse0x29637d0() {
   return (neuron0x295da90()*1.56595);
}

double NNfunction_ss_sLsL::synapse0x2963810() {
   return (neuron0x295ddd0()*0.566286);
}

double NNfunction_ss_sLsL::synapse0x2963850() {
   return (neuron0x295e110()*0.3263);
}

double NNfunction_ss_sLsL::synapse0x2963890() {
   return (neuron0x295e450()*-0.417493);
}

double NNfunction_ss_sLsL::synapse0x29638d0() {
   return (neuron0x295e790()*-1.55228);
}

double NNfunction_ss_sLsL::synapse0x2963910() {
   return (neuron0x295ead0()*-0.586566);
}

double NNfunction_ss_sLsL::synapse0x2963950() {
   return (neuron0x295ee10()*0.104838);
}

double NNfunction_ss_sLsL::synapse0x2963990() {
   return (neuron0x295f150()*-0.772567);
}

double NNfunction_ss_sLsL::synapse0x2963420() {
   return (neuron0x295f490()*0.408083);
}

double NNfunction_ss_sLsL::synapse0x2963460() {
   return (neuron0x295f9f0()*0.31494);
}

double NNfunction_ss_sLsL::synapse0x2963ae0() {
   return (neuron0x295fc10()*0.0728753);
}

double NNfunction_ss_sLsL::synapse0x2963b20() {
   return (neuron0x295ff50()*1.34365);
}

double NNfunction_ss_sLsL::synapse0x2963b60() {
   return (neuron0x2960290()*0.843403);
}

double NNfunction_ss_sLsL::synapse0x2963ba0() {
   return (neuron0x29605d0()*-0.386695);
}

double NNfunction_ss_sLsL::synapse0x2963be0() {
   return (neuron0x2960910()*0.0316993);
}

double NNfunction_ss_sLsL::synapse0x2963c20() {
   return (neuron0x2960c50()*0.132674);
}

double NNfunction_ss_sLsL::synapse0x2963fa0() {
   return (neuron0x295c120()*0.148563);
}

double NNfunction_ss_sLsL::synapse0x2963fe0() {
   return (neuron0x295c3d0()*0.381925);
}

double NNfunction_ss_sLsL::synapse0x2964020() {
   return (neuron0x295c710()*0.152717);
}

double NNfunction_ss_sLsL::synapse0x2964060() {
   return (neuron0x295ca50()*-0.003631);
}

double NNfunction_ss_sLsL::synapse0x29640a0() {
   return (neuron0x295cd90()*-0.186473);
}

double NNfunction_ss_sLsL::synapse0x29640e0() {
   return (neuron0x295d0d0()*0.45369);
}

double NNfunction_ss_sLsL::synapse0x2964120() {
   return (neuron0x295d410()*-0.619019);
}

double NNfunction_ss_sLsL::synapse0x2964160() {
   return (neuron0x295d750()*0.00738775);
}

double NNfunction_ss_sLsL::synapse0x29641a0() {
   return (neuron0x295da90()*1.37645);
}

double NNfunction_ss_sLsL::synapse0x2725430() {
   return (neuron0x295ddd0()*1.77079);
}

double NNfunction_ss_sLsL::synapse0x2725470() {
   return (neuron0x295e110()*0.568679);
}

double NNfunction_ss_sLsL::synapse0x27254b0() {
   return (neuron0x295e450()*0.603651);
}

double NNfunction_ss_sLsL::synapse0x27254f0() {
   return (neuron0x295e790()*-0.911081);
}

double NNfunction_ss_sLsL::synapse0x2725530() {
   return (neuron0x295ead0()*0.00925925);
}

double NNfunction_ss_sLsL::synapse0x2725570() {
   return (neuron0x295ee10()*-2.8006);
}

double NNfunction_ss_sLsL::synapse0x27255b0() {
   return (neuron0x295f150()*-0.019433);
}

double NNfunction_ss_sLsL::synapse0x2963df0() {
   return (neuron0x295f490()*-0.503506);
}

double NNfunction_ss_sLsL::synapse0x2963e30() {
   return (neuron0x295f9f0()*0.692616);
}

double NNfunction_ss_sLsL::synapse0x2725700() {
   return (neuron0x295fc10()*0.190213);
}

double NNfunction_ss_sLsL::synapse0x2725740() {
   return (neuron0x295ff50()*0.939055);
}

double NNfunction_ss_sLsL::synapse0x2725780() {
   return (neuron0x2960290()*-0.00492194);
}

double NNfunction_ss_sLsL::synapse0x27257c0() {
   return (neuron0x29605d0()*0.331137);
}

double NNfunction_ss_sLsL::synapse0x2725800() {
   return (neuron0x2960910()*-0.160958);
}

double NNfunction_ss_sLsL::synapse0x29649f0() {
   return (neuron0x2960c50()*-0.120863);
}

double NNfunction_ss_sLsL::synapse0x2964d70() {
   return (neuron0x295c120()*-0.106021);
}

double NNfunction_ss_sLsL::synapse0x2964db0() {
   return (neuron0x295c3d0()*0.00413467);
}

double NNfunction_ss_sLsL::synapse0x2964df0() {
   return (neuron0x295c710()*0.0810153);
}

double NNfunction_ss_sLsL::synapse0x2964e30() {
   return (neuron0x295ca50()*-0.414781);
}

double NNfunction_ss_sLsL::synapse0x2964e70() {
   return (neuron0x295cd90()*0.0170658);
}

double NNfunction_ss_sLsL::synapse0x2964eb0() {
   return (neuron0x295d0d0()*0.0611775);
}

double NNfunction_ss_sLsL::synapse0x2964ef0() {
   return (neuron0x295d410()*0.139587);
}

double NNfunction_ss_sLsL::synapse0x2964f30() {
   return (neuron0x295d750()*0.059513);
}

double NNfunction_ss_sLsL::synapse0x2964f70() {
   return (neuron0x295da90()*0.313983);
}

double NNfunction_ss_sLsL::synapse0x2964fb0() {
   return (neuron0x295ddd0()*-0.0112056);
}

double NNfunction_ss_sLsL::synapse0x2964ff0() {
   return (neuron0x295e110()*0.895957);
}

double NNfunction_ss_sLsL::synapse0x2965030() {
   return (neuron0x295e450()*0.0932714);
}

double NNfunction_ss_sLsL::synapse0x2965070() {
   return (neuron0x295e790()*-0.215216);
}

double NNfunction_ss_sLsL::synapse0x29650b0() {
   return (neuron0x295ead0()*0.0527944);
}

double NNfunction_ss_sLsL::synapse0x29650f0() {
   return (neuron0x295ee10()*0.0318854);
}

double NNfunction_ss_sLsL::synapse0x2965130() {
   return (neuron0x295f150()*0.194496);
}

double NNfunction_ss_sLsL::synapse0x2964bc0() {
   return (neuron0x295f490()*-0.0203728);
}

double NNfunction_ss_sLsL::synapse0x2964c00() {
   return (neuron0x295f9f0()*0.092284);
}

double NNfunction_ss_sLsL::synapse0x2965280() {
   return (neuron0x295fc10()*0.223567);
}

double NNfunction_ss_sLsL::synapse0x29652c0() {
   return (neuron0x295ff50()*-0.0304768);
}

double NNfunction_ss_sLsL::synapse0x2965300() {
   return (neuron0x2960290()*0.0917426);
}

double NNfunction_ss_sLsL::synapse0x2965340() {
   return (neuron0x29605d0()*0.0826183);
}

double NNfunction_ss_sLsL::synapse0x2965380() {
   return (neuron0x2960910()*0.0486782);
}

double NNfunction_ss_sLsL::synapse0x29653c0() {
   return (neuron0x2960c50()*0.0415023);
}

double NNfunction_ss_sLsL::synapse0x2965740() {
   return (neuron0x295c120()*0.0757781);
}

double NNfunction_ss_sLsL::synapse0x2965780() {
   return (neuron0x295c3d0()*-0.00861067);
}

double NNfunction_ss_sLsL::synapse0x29657c0() {
   return (neuron0x295c710()*-0.311956);
}

double NNfunction_ss_sLsL::synapse0x2965800() {
   return (neuron0x295ca50()*-0.337227);
}

double NNfunction_ss_sLsL::synapse0x2965840() {
   return (neuron0x295cd90()*0.0445281);
}

double NNfunction_ss_sLsL::synapse0x2965880() {
   return (neuron0x295d0d0()*-0.144626);
}

double NNfunction_ss_sLsL::synapse0x29658c0() {
   return (neuron0x295d410()*-0.290157);
}

double NNfunction_ss_sLsL::synapse0x2965900() {
   return (neuron0x295d750()*-0.249584);
}

double NNfunction_ss_sLsL::synapse0x2965940() {
   return (neuron0x295da90()*-0.00338089);
}

double NNfunction_ss_sLsL::synapse0x2965980() {
   return (neuron0x295ddd0()*-0.0105203);
}

double NNfunction_ss_sLsL::synapse0x29659c0() {
   return (neuron0x295e110()*-0.0601212);
}

double NNfunction_ss_sLsL::synapse0x2965a00() {
   return (neuron0x295e450()*0.171233);
}

double NNfunction_ss_sLsL::synapse0x2965a40() {
   return (neuron0x295e790()*-0.590801);
}

double NNfunction_ss_sLsL::synapse0x2965a80() {
   return (neuron0x295ead0()*0.0200437);
}

double NNfunction_ss_sLsL::synapse0x2965ac0() {
   return (neuron0x295ee10()*0.588581);
}

double NNfunction_ss_sLsL::synapse0x2965b00() {
   return (neuron0x295f150()*0.28066);
}

double NNfunction_ss_sLsL::synapse0x2965590() {
   return (neuron0x295f490()*-0.0520296);
}

double NNfunction_ss_sLsL::synapse0x29655d0() {
   return (neuron0x295f9f0()*0.041042);
}

double NNfunction_ss_sLsL::synapse0x2965c50() {
   return (neuron0x295fc10()*0.0223589);
}

double NNfunction_ss_sLsL::synapse0x2965c90() {
   return (neuron0x295ff50()*-0.028245);
}

double NNfunction_ss_sLsL::synapse0x2965cd0() {
   return (neuron0x2960290()*0.00975343);
}

double NNfunction_ss_sLsL::synapse0x2965d10() {
   return (neuron0x29605d0()*0.0269219);
}

double NNfunction_ss_sLsL::synapse0x2965d50() {
   return (neuron0x2960910()*-0.0293761);
}

double NNfunction_ss_sLsL::synapse0x2965d90() {
   return (neuron0x2960c50()*-0.00495069);
}

double NNfunction_ss_sLsL::synapse0x295f8e0() {
   return (neuron0x295c120()*0.0455915);
}

double NNfunction_ss_sLsL::synapse0x295f920() {
   return (neuron0x295c3d0()*-0.494415);
}

double NNfunction_ss_sLsL::synapse0x295f960() {
   return (neuron0x295c710()*-1.89965);
}

double NNfunction_ss_sLsL::synapse0x295f9a0() {
   return (neuron0x295ca50()*1.59954);
}

double NNfunction_ss_sLsL::synapse0x2966320() {
   return (neuron0x295cd90()*-0.250523);
}

double NNfunction_ss_sLsL::synapse0x2966360() {
   return (neuron0x295d0d0()*0.19685);
}

double NNfunction_ss_sLsL::synapse0x29663a0() {
   return (neuron0x295d410()*-0.00446218);
}

double NNfunction_ss_sLsL::synapse0x29663e0() {
   return (neuron0x295d750()*0.214257);
}

double NNfunction_ss_sLsL::synapse0x2966420() {
   return (neuron0x295da90()*-0.309265);
}

double NNfunction_ss_sLsL::synapse0x2966460() {
   return (neuron0x295ddd0()*-0.141178);
}

double NNfunction_ss_sLsL::synapse0x29664a0() {
   return (neuron0x295e110()*-0.423472);
}

double NNfunction_ss_sLsL::synapse0x29664e0() {
   return (neuron0x295e450()*0.541827);
}

double NNfunction_ss_sLsL::synapse0x2966520() {
   return (neuron0x295e790()*-0.546165);
}

double NNfunction_ss_sLsL::synapse0x2966560() {
   return (neuron0x295ead0()*-0.172685);
}

double NNfunction_ss_sLsL::synapse0x29665a0() {
   return (neuron0x295ee10()*1.15814);
}

double NNfunction_ss_sLsL::synapse0x29665e0() {
   return (neuron0x295f150()*0.594236);
}

double NNfunction_ss_sLsL::synapse0x2965f60() {
   return (neuron0x295f490()*-0.161319);
}

double NNfunction_ss_sLsL::synapse0x2965fa0() {
   return (neuron0x295f9f0()*0.447942);
}

double NNfunction_ss_sLsL::synapse0x2966730() {
   return (neuron0x295fc10()*-0.163809);
}

double NNfunction_ss_sLsL::synapse0x2966770() {
   return (neuron0x295ff50()*-0.431557);
}

double NNfunction_ss_sLsL::synapse0x29667b0() {
   return (neuron0x2960290()*0.658609);
}

double NNfunction_ss_sLsL::synapse0x29667f0() {
   return (neuron0x29605d0()*-0.0702616);
}

double NNfunction_ss_sLsL::synapse0x2966830() {
   return (neuron0x2960910()*-0.167997);
}

double NNfunction_ss_sLsL::synapse0x2966870() {
   return (neuron0x2960c50()*-0.0373062);
}

double NNfunction_ss_sLsL::synapse0x2966bf0() {
   return (neuron0x295c120()*0.379518);
}

double NNfunction_ss_sLsL::synapse0x2966c30() {
   return (neuron0x295c3d0()*-0.26299);
}

double NNfunction_ss_sLsL::synapse0x2966c70() {
   return (neuron0x295c710()*-0.0270603);
}

double NNfunction_ss_sLsL::synapse0x2966cb0() {
   return (neuron0x295ca50()*-0.747993);
}

double NNfunction_ss_sLsL::synapse0x2966cf0() {
   return (neuron0x295cd90()*0.324181);
}

double NNfunction_ss_sLsL::synapse0x2966d30() {
   return (neuron0x295d0d0()*0.0479398);
}

double NNfunction_ss_sLsL::synapse0x2966d70() {
   return (neuron0x295d410()*0.374684);
}

double NNfunction_ss_sLsL::synapse0x2966db0() {
   return (neuron0x295d750()*-0.15911);
}

double NNfunction_ss_sLsL::synapse0x2966df0() {
   return (neuron0x295da90()*-0.122362);
}

double NNfunction_ss_sLsL::synapse0x2966e30() {
   return (neuron0x295ddd0()*0.0412944);
}

double NNfunction_ss_sLsL::synapse0x2966e70() {
   return (neuron0x295e110()*0.0659713);
}

double NNfunction_ss_sLsL::synapse0x2966eb0() {
   return (neuron0x295e450()*-0.0392323);
}

double NNfunction_ss_sLsL::synapse0x2966ef0() {
   return (neuron0x295e790()*0.734984);
}

double NNfunction_ss_sLsL::synapse0x2966f30() {
   return (neuron0x295ead0()*-0.09298);
}

double NNfunction_ss_sLsL::synapse0x2966f70() {
   return (neuron0x295ee10()*-0.106678);
}

double NNfunction_ss_sLsL::synapse0x2966fb0() {
   return (neuron0x295f150()*0.226092);
}

double NNfunction_ss_sLsL::synapse0x2966a40() {
   return (neuron0x295f490()*-0.21219);
}

double NNfunction_ss_sLsL::synapse0x2966a80() {
   return (neuron0x295f9f0()*0.147268);
}

double NNfunction_ss_sLsL::synapse0x2967100() {
   return (neuron0x295fc10()*-0.442468);
}

double NNfunction_ss_sLsL::synapse0x2967140() {
   return (neuron0x295ff50()*0.201376);
}

double NNfunction_ss_sLsL::synapse0x2967180() {
   return (neuron0x2960290()*0.158571);
}

double NNfunction_ss_sLsL::synapse0x29671c0() {
   return (neuron0x29605d0()*-0.149283);
}

double NNfunction_ss_sLsL::synapse0x2967200() {
   return (neuron0x2960910()*-0.0153864);
}

double NNfunction_ss_sLsL::synapse0x2967240() {
   return (neuron0x2960c50()*0.218174);
}

double NNfunction_ss_sLsL::synapse0x29675c0() {
   return (neuron0x295c120()*0.0234804);
}

double NNfunction_ss_sLsL::synapse0x2967600() {
   return (neuron0x295c3d0()*0.0251989);
}

double NNfunction_ss_sLsL::synapse0x2967640() {
   return (neuron0x295c710()*1.46151);
}

double NNfunction_ss_sLsL::synapse0x2967680() {
   return (neuron0x295ca50()*0.0749104);
}

double NNfunction_ss_sLsL::synapse0x29676c0() {
   return (neuron0x295cd90()*-0.00610947);
}

double NNfunction_ss_sLsL::synapse0x2967700() {
   return (neuron0x295d0d0()*0.0372619);
}

double NNfunction_ss_sLsL::synapse0x2967740() {
   return (neuron0x295d410()*0.027061);
}

double NNfunction_ss_sLsL::synapse0x2967780() {
   return (neuron0x295d750()*0.00249286);
}

double NNfunction_ss_sLsL::synapse0x29677c0() {
   return (neuron0x295da90()*0.018743);
}

double NNfunction_ss_sLsL::synapse0x2967800() {
   return (neuron0x295ddd0()*-0.0428547);
}

double NNfunction_ss_sLsL::synapse0x2967840() {
   return (neuron0x295e110()*-0.00828481);
}

double NNfunction_ss_sLsL::synapse0x2967880() {
   return (neuron0x295e450()*-0.103489);
}

double NNfunction_ss_sLsL::synapse0x29678c0() {
   return (neuron0x295e790()*0.0690403);
}

double NNfunction_ss_sLsL::synapse0x2967900() {
   return (neuron0x295ead0()*0.0222076);
}

double NNfunction_ss_sLsL::synapse0x2967940() {
   return (neuron0x295ee10()*0.0378886);
}

double NNfunction_ss_sLsL::synapse0x2967980() {
   return (neuron0x295f150()*-0.0414852);
}

double NNfunction_ss_sLsL::synapse0x2967410() {
   return (neuron0x295f490()*-0.0203859);
}

double NNfunction_ss_sLsL::synapse0x2967450() {
   return (neuron0x295f9f0()*-0.0245944);
}

double NNfunction_ss_sLsL::synapse0x29641e0() {
   return (neuron0x295fc10()*-0.0472554);
}

double NNfunction_ss_sLsL::synapse0x2964220() {
   return (neuron0x295ff50()*0.0301355);
}

double NNfunction_ss_sLsL::synapse0x2964260() {
   return (neuron0x2960290()*0.0097866);
}

double NNfunction_ss_sLsL::synapse0x29642a0() {
   return (neuron0x29605d0()*-0.0153616);
}

double NNfunction_ss_sLsL::synapse0x29642e0() {
   return (neuron0x2960910()*-0.0213392);
}

double NNfunction_ss_sLsL::synapse0x2964320() {
   return (neuron0x2960c50()*0.00537489);
}

double NNfunction_ss_sLsL::synapse0x29646a0() {
   return (neuron0x295c120()*-0.0273078);
}

double NNfunction_ss_sLsL::synapse0x29646e0() {
   return (neuron0x295c3d0()*0.0386378);
}

double NNfunction_ss_sLsL::synapse0x2964720() {
   return (neuron0x295c710()*-1.15135);
}

double NNfunction_ss_sLsL::synapse0x2964760() {
   return (neuron0x295ca50()*0.0596386);
}

double NNfunction_ss_sLsL::synapse0x29647a0() {
   return (neuron0x295cd90()*-0.0164055);
}

double NNfunction_ss_sLsL::synapse0x29647e0() {
   return (neuron0x295d0d0()*0.0655641);
}

double NNfunction_ss_sLsL::synapse0x2964820() {
   return (neuron0x295d410()*0.0641344);
}

double NNfunction_ss_sLsL::synapse0x2964860() {
   return (neuron0x295d750()*0.00700808);
}

double NNfunction_ss_sLsL::synapse0x29648a0() {
   return (neuron0x295da90()*0.0165099);
}

double NNfunction_ss_sLsL::synapse0x29648e0() {
   return (neuron0x295ddd0()*0.00797475);
}

double NNfunction_ss_sLsL::synapse0x2964920() {
   return (neuron0x295e110()*0.0182692);
}

double NNfunction_ss_sLsL::synapse0x2964960() {
   return (neuron0x295e450()*-0.0981583);
}

double NNfunction_ss_sLsL::synapse0x29649a0() {
   return (neuron0x295e790()*0.41366);
}

double NNfunction_ss_sLsL::synapse0x2968ae0() {
   return (neuron0x295ead0()*-0.0105095);
}

double NNfunction_ss_sLsL::synapse0x2968b20() {
   return (neuron0x295ee10()*0.0156056);
}

double NNfunction_ss_sLsL::synapse0x2968b60() {
   return (neuron0x295f150()*-0.032547);
}

double NNfunction_ss_sLsL::synapse0x29644f0() {
   return (neuron0x295f490()*-0.0964767);
}

double NNfunction_ss_sLsL::synapse0x2964530() {
   return (neuron0x295f9f0()*-0.0116969);
}

double NNfunction_ss_sLsL::synapse0x2968cb0() {
   return (neuron0x295fc10()*-0.0213047);
}

double NNfunction_ss_sLsL::synapse0x2968cf0() {
   return (neuron0x295ff50()*0.032816);
}

double NNfunction_ss_sLsL::synapse0x2968d30() {
   return (neuron0x2960290()*0.0109206);
}

double NNfunction_ss_sLsL::synapse0x2968d70() {
   return (neuron0x29605d0()*0.0141545);
}

double NNfunction_ss_sLsL::synapse0x2968db0() {
   return (neuron0x2960910()*-0.0155988);
}

double NNfunction_ss_sLsL::synapse0x2968df0() {
   return (neuron0x2960c50()*0.00230168);
}

double NNfunction_ss_sLsL::synapse0x2969170() {
   return (neuron0x295c120()*0.012584);
}

double NNfunction_ss_sLsL::synapse0x29691b0() {
   return (neuron0x295c3d0()*-0.0118973);
}

double NNfunction_ss_sLsL::synapse0x29691f0() {
   return (neuron0x295c710()*-0.140587);
}

double NNfunction_ss_sLsL::synapse0x2969230() {
   return (neuron0x295ca50()*-1.97409);
}

double NNfunction_ss_sLsL::synapse0x2969270() {
   return (neuron0x295cd90()*-0.0220229);
}

double NNfunction_ss_sLsL::synapse0x29692b0() {
   return (neuron0x295d0d0()*-0.0340124);
}

double NNfunction_ss_sLsL::synapse0x29692f0() {
   return (neuron0x295d410()*-0.0594187);
}

double NNfunction_ss_sLsL::synapse0x2969330() {
   return (neuron0x295d750()*-0.0307133);
}

double NNfunction_ss_sLsL::synapse0x2969370() {
   return (neuron0x295da90()*-0.00329283);
}

double NNfunction_ss_sLsL::synapse0x29693b0() {
   return (neuron0x295ddd0()*0.0184116);
}

double NNfunction_ss_sLsL::synapse0x29693f0() {
   return (neuron0x295e110()*-0.0441005);
}

double NNfunction_ss_sLsL::synapse0x2969430() {
   return (neuron0x295e450()*-0.145834);
}

double NNfunction_ss_sLsL::synapse0x2969470() {
   return (neuron0x295e790()*0.657485);
}

double NNfunction_ss_sLsL::synapse0x29694b0() {
   return (neuron0x295ead0()*-0.0244819);
}

double NNfunction_ss_sLsL::synapse0x29694f0() {
   return (neuron0x295ee10()*-0.0192939);
}

double NNfunction_ss_sLsL::synapse0x2969530() {
   return (neuron0x295f150()*-0.110029);
}

double NNfunction_ss_sLsL::synapse0x2968fc0() {
   return (neuron0x295f490()*0.0490022);
}

double NNfunction_ss_sLsL::synapse0x2969000() {
   return (neuron0x295f9f0()*-0.087476);
}

double NNfunction_ss_sLsL::synapse0x2969680() {
   return (neuron0x295fc10()*-0.0254562);
}

double NNfunction_ss_sLsL::synapse0x29696c0() {
   return (neuron0x295ff50()*-0.0381556);
}

double NNfunction_ss_sLsL::synapse0x2969700() {
   return (neuron0x2960290()*-0.0397205);
}

double NNfunction_ss_sLsL::synapse0x2969740() {
   return (neuron0x29605d0()*0.0193797);
}

double NNfunction_ss_sLsL::synapse0x2969780() {
   return (neuron0x2960910()*-0.00230236);
}

double NNfunction_ss_sLsL::synapse0x29697c0() {
   return (neuron0x2960c50()*-0.0282357);
}

double NNfunction_ss_sLsL::synapse0x2969b40() {
   return (neuron0x295c120()*0.00377784);
}

double NNfunction_ss_sLsL::synapse0x2969b80() {
   return (neuron0x295c3d0()*-0.00618792);
}

double NNfunction_ss_sLsL::synapse0x2969bc0() {
   return (neuron0x295c710()*0.0525927);
}

double NNfunction_ss_sLsL::synapse0x2969c00() {
   return (neuron0x295ca50()*-2.5735);
}

double NNfunction_ss_sLsL::synapse0x2969c40() {
   return (neuron0x295cd90()*-0.01668);
}

double NNfunction_ss_sLsL::synapse0x2969c80() {
   return (neuron0x295d0d0()*0.000786274);
}

double NNfunction_ss_sLsL::synapse0x2969cc0() {
   return (neuron0x295d410()*0.0113189);
}

double NNfunction_ss_sLsL::synapse0x2969d00() {
   return (neuron0x295d750()*-0.00825182);
}

double NNfunction_ss_sLsL::synapse0x2969d40() {
   return (neuron0x295da90()*0.00490027);
}

double NNfunction_ss_sLsL::synapse0x2969d80() {
   return (neuron0x295ddd0()*0.00519331);
}

double NNfunction_ss_sLsL::synapse0x2969dc0() {
   return (neuron0x295e110()*0.00632516);
}

double NNfunction_ss_sLsL::synapse0x2969e00() {
   return (neuron0x295e450()*-0.0241473);
}

double NNfunction_ss_sLsL::synapse0x2969e40() {
   return (neuron0x295e790()*0.338612);
}

double NNfunction_ss_sLsL::synapse0x2969e80() {
   return (neuron0x295ead0()*0.0506361);
}

double NNfunction_ss_sLsL::synapse0x2969ec0() {
   return (neuron0x295ee10()*0.00567372);
}

double NNfunction_ss_sLsL::synapse0x2969f00() {
   return (neuron0x295f150()*-0.00642778);
}

double NNfunction_ss_sLsL::synapse0x2969990() {
   return (neuron0x295f490()*0.0440294);
}

double NNfunction_ss_sLsL::synapse0x29699d0() {
   return (neuron0x295f9f0()*-0.00952946);
}

double NNfunction_ss_sLsL::synapse0x296a050() {
   return (neuron0x295fc10()*-0.0158421);
}

double NNfunction_ss_sLsL::synapse0x296a090() {
   return (neuron0x295ff50()*0.000465626);
}

double NNfunction_ss_sLsL::synapse0x296a0d0() {
   return (neuron0x2960290()*0.00819753);
}

double NNfunction_ss_sLsL::synapse0x296a110() {
   return (neuron0x29605d0()*-0.00922951);
}

double NNfunction_ss_sLsL::synapse0x296a150() {
   return (neuron0x2960910()*-0.00560899);
}

double NNfunction_ss_sLsL::synapse0x296a190() {
   return (neuron0x2960c50()*-0.00418006);
}

double NNfunction_ss_sLsL::synapse0x296a510() {
   return (neuron0x295c120()*0.0295386);
}

double NNfunction_ss_sLsL::synapse0x296a550() {
   return (neuron0x295c3d0()*-0.00245568);
}

double NNfunction_ss_sLsL::synapse0x296a590() {
   return (neuron0x295c710()*-0.0422947);
}

double NNfunction_ss_sLsL::synapse0x296a5d0() {
   return (neuron0x295ca50()*0.395849);
}

double NNfunction_ss_sLsL::synapse0x296a610() {
   return (neuron0x295cd90()*0.0103707);
}

double NNfunction_ss_sLsL::synapse0x296a650() {
   return (neuron0x295d0d0()*-0.0252129);
}

double NNfunction_ss_sLsL::synapse0x296a690() {
   return (neuron0x295d410()*-0.0339319);
}

double NNfunction_ss_sLsL::synapse0x296a6d0() {
   return (neuron0x295d750()*-0.00224076);
}

double NNfunction_ss_sLsL::synapse0x296a710() {
   return (neuron0x295da90()*-0.0347779);
}

double NNfunction_ss_sLsL::synapse0x296a750() {
   return (neuron0x295ddd0()*-0.372393);
}

double NNfunction_ss_sLsL::synapse0x296a790() {
   return (neuron0x295e110()*0.004183);
}

double NNfunction_ss_sLsL::synapse0x296a7d0() {
   return (neuron0x295e450()*0.192104);
}

double NNfunction_ss_sLsL::synapse0x296a810() {
   return (neuron0x295e790()*1.7198);
}

double NNfunction_ss_sLsL::synapse0x296a850() {
   return (neuron0x295ead0()*0.212115);
}

double NNfunction_ss_sLsL::synapse0x296a890() {
   return (neuron0x295ee10()*0.0421558);
}

double NNfunction_ss_sLsL::synapse0x296a8d0() {
   return (neuron0x295f150()*0.0453363);
}

double NNfunction_ss_sLsL::synapse0x296a360() {
   return (neuron0x295f490()*0.100353);
}

double NNfunction_ss_sLsL::synapse0x296a3a0() {
   return (neuron0x295f9f0()*0.134442);
}

double NNfunction_ss_sLsL::synapse0x296aa20() {
   return (neuron0x295fc10()*0.0698041);
}

double NNfunction_ss_sLsL::synapse0x296aa60() {
   return (neuron0x295ff50()*0.241339);
}

double NNfunction_ss_sLsL::synapse0x296aaa0() {
   return (neuron0x2960290()*-0.0202428);
}

double NNfunction_ss_sLsL::synapse0x296aae0() {
   return (neuron0x29605d0()*-0.0237147);
}

double NNfunction_ss_sLsL::synapse0x296ab20() {
   return (neuron0x2960910()*0.0266214);
}

double NNfunction_ss_sLsL::synapse0x296ab60() {
   return (neuron0x2960c50()*-0.0516406);
}

double NNfunction_ss_sLsL::synapse0x296aee0() {
   return (neuron0x295c120()*0.0182815);
}

double NNfunction_ss_sLsL::synapse0x295c2b0() {
   return (neuron0x295c3d0()*-0.477156);
}

double NNfunction_ss_sLsL::synapse0x295c2f0() {
   return (neuron0x295c710()*0.264428);
}

double NNfunction_ss_sLsL::synapse0x295c5f0() {
   return (neuron0x295ca50()*-0.596388);
}

double NNfunction_ss_sLsL::synapse0x295c630() {
   return (neuron0x295cd90()*0.334375);
}

double NNfunction_ss_sLsL::synapse0x295c930() {
   return (neuron0x295d0d0()*-0.440585);
}

double NNfunction_ss_sLsL::synapse0x295c970() {
   return (neuron0x295d410()*0.190025);
}

double NNfunction_ss_sLsL::synapse0x295cc70() {
   return (neuron0x295d750()*-0.169557);
}

double NNfunction_ss_sLsL::synapse0x295ccb0() {
   return (neuron0x295da90()*1.17928);
}

double NNfunction_ss_sLsL::synapse0x295cfb0() {
   return (neuron0x295ddd0()*0.757543);
}

double NNfunction_ss_sLsL::synapse0x295cff0() {
   return (neuron0x295e110()*0.267635);
}

double NNfunction_ss_sLsL::synapse0x295d2f0() {
   return (neuron0x295e450()*0.4726);
}

double NNfunction_ss_sLsL::synapse0x295d330() {
   return (neuron0x295e790()*-1.53324);
}

double NNfunction_ss_sLsL::synapse0x295d630() {
   return (neuron0x295ead0()*0.211556);
}

double NNfunction_ss_sLsL::synapse0x295d670() {
   return (neuron0x295ee10()*-0.251913);
}

double NNfunction_ss_sLsL::synapse0x295d970() {
   return (neuron0x295f150()*0.436443);
}

double NNfunction_ss_sLsL::synapse0x295d9b0() {
   return (neuron0x295f490()*-0.156223);
}

double NNfunction_ss_sLsL::synapse0x295dcb0() {
   return (neuron0x295f9f0()*1.11297);
}

double NNfunction_ss_sLsL::synapse0x295dcf0() {
   return (neuron0x295fc10()*0.325225);
}

double NNfunction_ss_sLsL::synapse0x295dff0() {
   return (neuron0x295ff50()*0.34575);
}

double NNfunction_ss_sLsL::synapse0x295e030() {
   return (neuron0x2960290()*-0.397606);
}

double NNfunction_ss_sLsL::synapse0x295e330() {
   return (neuron0x29605d0()*-0.543778);
}

double NNfunction_ss_sLsL::synapse0x295e370() {
   return (neuron0x2960910()*0.660577);
}

double NNfunction_ss_sLsL::synapse0x295e670() {
   return (neuron0x2960c50()*0.0969757);
}

double NNfunction_ss_sLsL::synapse0x295e6b0() {
   return (neuron0x295c120()*-0.165134);
}

double NNfunction_ss_sLsL::synapse0x295f370() {
   return (neuron0x295c3d0()*0.073946);
}

double NNfunction_ss_sLsL::synapse0x295f3b0() {
   return (neuron0x295c710()*-0.571315);
}

double NNfunction_ss_sLsL::synapse0x296ad30() {
   return (neuron0x295ca50()*0.720554);
}

double NNfunction_ss_sLsL::synapse0x296ad70() {
   return (neuron0x295cd90()*-0.483594);
}

double NNfunction_ss_sLsL::synapse0x295f6b0() {
   return (neuron0x295d0d0()*-0.258461);
}

double NNfunction_ss_sLsL::synapse0x295f6f0() {
   return (neuron0x295d410()*0.0522861);
}

double NNfunction_ss_sLsL::synapse0x27170c0() {
   return (neuron0x295d750()*-0.165013);
}

double NNfunction_ss_sLsL::synapse0x2717100() {
   return (neuron0x295da90()*-0.301563);
}

double NNfunction_ss_sLsL::synapse0x295fe30() {
   return (neuron0x295ddd0()*-0.21134);
}

double NNfunction_ss_sLsL::synapse0x295fe70() {
   return (neuron0x295e110()*-0.0320445);
}

double NNfunction_ss_sLsL::synapse0x2960170() {
   return (neuron0x295e450()*0.401736);
}

double NNfunction_ss_sLsL::synapse0x29601b0() {
   return (neuron0x295e790()*0.553756);
}

double NNfunction_ss_sLsL::synapse0x29604b0() {
   return (neuron0x295ead0()*0.29902);
}

double NNfunction_ss_sLsL::synapse0x29604f0() {
   return (neuron0x295ee10()*-0.0469377);
}

double NNfunction_ss_sLsL::synapse0x29607f0() {
   return (neuron0x295f150()*-0.497902);
}

double NNfunction_ss_sLsL::synapse0x2960830() {
   return (neuron0x295f490()*-0.51979);
}

double NNfunction_ss_sLsL::synapse0x2960b30() {
   return (neuron0x295f9f0()*-0.192247);
}

double NNfunction_ss_sLsL::synapse0x2960b70() {
   return (neuron0x295fc10()*0.132964);
}

double NNfunction_ss_sLsL::synapse0x2960e70() {
   return (neuron0x295ff50()*-1.17047);
}

double NNfunction_ss_sLsL::synapse0x2960eb0() {
   return (neuron0x2960290()*-0.368012);
}

double NNfunction_ss_sLsL::synapse0x295e9b0() {
   return (neuron0x29605d0()*0.0369253);
}

double NNfunction_ss_sLsL::synapse0x295e9f0() {
   return (neuron0x2960910()*-0.0243715);
}

double NNfunction_ss_sLsL::synapse0x296cc50() {
   return (neuron0x2960c50()*0.323472);
}

double NNfunction_ss_sLsL::synapse0x296cfd0() {
   return (neuron0x295c120()*0.016691);
}

double NNfunction_ss_sLsL::synapse0x296d010() {
   return (neuron0x295c3d0()*-0.00171757);
}

double NNfunction_ss_sLsL::synapse0x296d050() {
   return (neuron0x295c710()*-0.0238122);
}

double NNfunction_ss_sLsL::synapse0x296d090() {
   return (neuron0x295ca50()*3.52197);
}

double NNfunction_ss_sLsL::synapse0x296d0d0() {
   return (neuron0x295cd90()*-0.000761517);
}

double NNfunction_ss_sLsL::synapse0x296d110() {
   return (neuron0x295d0d0()*-0.00544006);
}

double NNfunction_ss_sLsL::synapse0x296d150() {
   return (neuron0x295d410()*-0.00177388);
}

double NNfunction_ss_sLsL::synapse0x296d190() {
   return (neuron0x295d750()*-0.0221773);
}

double NNfunction_ss_sLsL::synapse0x296d1d0() {
   return (neuron0x295da90()*0.0084964);
}

double NNfunction_ss_sLsL::synapse0x296d210() {
   return (neuron0x295ddd0()*0.000864936);
}

double NNfunction_ss_sLsL::synapse0x296d250() {
   return (neuron0x295e110()*0.0111981);
}

double NNfunction_ss_sLsL::synapse0x296d290() {
   return (neuron0x295e450()*-0.0409775);
}

double NNfunction_ss_sLsL::synapse0x296d2d0() {
   return (neuron0x295e790()*0.12018);
}

double NNfunction_ss_sLsL::synapse0x296d310() {
   return (neuron0x295ead0()*0.012348);
}

double NNfunction_ss_sLsL::synapse0x296d350() {
   return (neuron0x295ee10()*-0.00787791);
}

double NNfunction_ss_sLsL::synapse0x296d390() {
   return (neuron0x295f150()*-0.0293449);
}

double NNfunction_ss_sLsL::synapse0x296ce20() {
   return (neuron0x295f490()*0.00564743);
}

double NNfunction_ss_sLsL::synapse0x296ce60() {
   return (neuron0x295f9f0()*-0.011376);
}

double NNfunction_ss_sLsL::synapse0x296d4e0() {
   return (neuron0x295fc10()*-0.0185639);
}

double NNfunction_ss_sLsL::synapse0x296d520() {
   return (neuron0x295ff50()*0.0121816);
}

double NNfunction_ss_sLsL::synapse0x296d560() {
   return (neuron0x2960290()*-0.0130043);
}

double NNfunction_ss_sLsL::synapse0x296d5a0() {
   return (neuron0x29605d0()*-0.0194567);
}

double NNfunction_ss_sLsL::synapse0x296d5e0() {
   return (neuron0x2960910()*-0.00320927);
}

double NNfunction_ss_sLsL::synapse0x296d620() {
   return (neuron0x2960c50()*-0.0143888);
}

double NNfunction_ss_sLsL::synapse0x296d9a0() {
   return (neuron0x295c120()*0.0945756);
}

double NNfunction_ss_sLsL::synapse0x296d9e0() {
   return (neuron0x295c3d0()*-1.29501);
}

double NNfunction_ss_sLsL::synapse0x296da20() {
   return (neuron0x295c710()*-0.0369475);
}

double NNfunction_ss_sLsL::synapse0x296da60() {
   return (neuron0x295ca50()*0.244227);
}

double NNfunction_ss_sLsL::synapse0x296daa0() {
   return (neuron0x295cd90()*0.382664);
}

double NNfunction_ss_sLsL::synapse0x296dae0() {
   return (neuron0x295d0d0()*-0.627166);
}

double NNfunction_ss_sLsL::synapse0x296db20() {
   return (neuron0x295d410()*0.37594);
}

double NNfunction_ss_sLsL::synapse0x296db60() {
   return (neuron0x295d750()*-0.0731704);
}

double NNfunction_ss_sLsL::synapse0x296dba0() {
   return (neuron0x295da90()*-0.173388);
}

double NNfunction_ss_sLsL::synapse0x296dbe0() {
   return (neuron0x295ddd0()*-0.871251);
}

double NNfunction_ss_sLsL::synapse0x296dc20() {
   return (neuron0x295e110()*0.342913);
}

double NNfunction_ss_sLsL::synapse0x296dc60() {
   return (neuron0x295e450()*-1.17526);
}

double NNfunction_ss_sLsL::synapse0x296dca0() {
   return (neuron0x295e790()*0.156364);
}

double NNfunction_ss_sLsL::synapse0x296dce0() {
   return (neuron0x295ead0()*0.378812);
}

double NNfunction_ss_sLsL::synapse0x296dd20() {
   return (neuron0x295ee10()*0.31692);
}

double NNfunction_ss_sLsL::synapse0x296dd60() {
   return (neuron0x295f150()*0.52774);
}

double NNfunction_ss_sLsL::synapse0x296d7f0() {
   return (neuron0x295f490()*0.183505);
}

double NNfunction_ss_sLsL::synapse0x296d830() {
   return (neuron0x295f9f0()*1.6453);
}

double NNfunction_ss_sLsL::synapse0x296deb0() {
   return (neuron0x295fc10()*-0.95356);
}

double NNfunction_ss_sLsL::synapse0x296def0() {
   return (neuron0x295ff50()*-1.12243);
}

double NNfunction_ss_sLsL::synapse0x296df30() {
   return (neuron0x2960290()*0.988441);
}

double NNfunction_ss_sLsL::synapse0x296df70() {
   return (neuron0x29605d0()*-0.293615);
}

double NNfunction_ss_sLsL::synapse0x296dfb0() {
   return (neuron0x2960910()*-0.499238);
}

double NNfunction_ss_sLsL::synapse0x296dff0() {
   return (neuron0x2960c50()*-0.000866129);
}

double NNfunction_ss_sLsL::synapse0x296e370() {
   return (neuron0x295c120()*0.102386);
}

double NNfunction_ss_sLsL::synapse0x296e3b0() {
   return (neuron0x295c3d0()*0.204883);
}

double NNfunction_ss_sLsL::synapse0x296e3f0() {
   return (neuron0x295c710()*-0.659998);
}

double NNfunction_ss_sLsL::synapse0x296e430() {
   return (neuron0x295ca50()*1.05013);
}

double NNfunction_ss_sLsL::synapse0x296e470() {
   return (neuron0x295cd90()*0.0751937);
}

double NNfunction_ss_sLsL::synapse0x296e4b0() {
   return (neuron0x295d0d0()*0.0326961);
}

double NNfunction_ss_sLsL::synapse0x296e4f0() {
   return (neuron0x295d410()*-0.0305984);
}

double NNfunction_ss_sLsL::synapse0x296e530() {
   return (neuron0x295d750()*0.110163);
}

double NNfunction_ss_sLsL::synapse0x296e570() {
   return (neuron0x295da90()*0.0434998);
}

double NNfunction_ss_sLsL::synapse0x296e5b0() {
   return (neuron0x295ddd0()*0.0556455);
}

double NNfunction_ss_sLsL::synapse0x296e5f0() {
   return (neuron0x295e110()*-0.0464978);
}

double NNfunction_ss_sLsL::synapse0x296e630() {
   return (neuron0x295e450()*-0.0228532);
}

double NNfunction_ss_sLsL::synapse0x296e670() {
   return (neuron0x295e790()*-0.34852);
}

double NNfunction_ss_sLsL::synapse0x296e6b0() {
   return (neuron0x295ead0()*0.0173309);
}

double NNfunction_ss_sLsL::synapse0x296e6f0() {
   return (neuron0x295ee10()*-0.112576);
}

double NNfunction_ss_sLsL::synapse0x296e730() {
   return (neuron0x295f150()*-0.122466);
}

double NNfunction_ss_sLsL::synapse0x296e1c0() {
   return (neuron0x295f490()*0.168146);
}

double NNfunction_ss_sLsL::synapse0x296e200() {
   return (neuron0x295f9f0()*-0.0358738);
}

double NNfunction_ss_sLsL::synapse0x296e880() {
   return (neuron0x295fc10()*-0.0417064);
}

double NNfunction_ss_sLsL::synapse0x296e8c0() {
   return (neuron0x295ff50()*-0.00862444);
}

double NNfunction_ss_sLsL::synapse0x296e900() {
   return (neuron0x2960290()*0.00123669);
}

double NNfunction_ss_sLsL::synapse0x296e940() {
   return (neuron0x29605d0()*0.000805561);
}

double NNfunction_ss_sLsL::synapse0x296e980() {
   return (neuron0x2960910()*0.0143224);
}

double NNfunction_ss_sLsL::synapse0x296e9c0() {
   return (neuron0x2960c50()*0.0054555);
}

double NNfunction_ss_sLsL::synapse0x296ed40() {
   return (neuron0x295c120()*0.115282);
}

double NNfunction_ss_sLsL::synapse0x296ed80() {
   return (neuron0x295c3d0()*-0.517576);
}

double NNfunction_ss_sLsL::synapse0x296edc0() {
   return (neuron0x295c710()*-0.0388676);
}

double NNfunction_ss_sLsL::synapse0x296ee00() {
   return (neuron0x295ca50()*0.513394);
}

double NNfunction_ss_sLsL::synapse0x296ee40() {
   return (neuron0x295cd90()*0.597326);
}

double NNfunction_ss_sLsL::synapse0x296ee80() {
   return (neuron0x295d0d0()*0.158883);
}

double NNfunction_ss_sLsL::synapse0x296eec0() {
   return (neuron0x295d410()*0.242843);
}

double NNfunction_ss_sLsL::synapse0x296ef00() {
   return (neuron0x295d750()*0.339506);
}

double NNfunction_ss_sLsL::synapse0x296ef40() {
   return (neuron0x295da90()*0.303094);
}

double NNfunction_ss_sLsL::synapse0x296ef80() {
   return (neuron0x295ddd0()*-0.0877208);
}

double NNfunction_ss_sLsL::synapse0x296efc0() {
   return (neuron0x295e110()*-0.00881894);
}

double NNfunction_ss_sLsL::synapse0x296f000() {
   return (neuron0x295e450()*-0.57584);
}

double NNfunction_ss_sLsL::synapse0x296f040() {
   return (neuron0x295e790()*1.77291);
}

double NNfunction_ss_sLsL::synapse0x296f080() {
   return (neuron0x295ead0()*-1.94744);
}

double NNfunction_ss_sLsL::synapse0x296f0c0() {
   return (neuron0x295ee10()*-0.412926);
}

double NNfunction_ss_sLsL::synapse0x296f100() {
   return (neuron0x295f150()*0.131871);
}

double NNfunction_ss_sLsL::synapse0x296eb90() {
   return (neuron0x295f490()*0.622777);
}

double NNfunction_ss_sLsL::synapse0x296ebd0() {
   return (neuron0x295f9f0()*-0.174589);
}

double NNfunction_ss_sLsL::synapse0x296f250() {
   return (neuron0x295fc10()*-1.33363);
}

double NNfunction_ss_sLsL::synapse0x296f290() {
   return (neuron0x295ff50()*0.139549);
}

double NNfunction_ss_sLsL::synapse0x296f2d0() {
   return (neuron0x2960290()*0.20301);
}

double NNfunction_ss_sLsL::synapse0x296f310() {
   return (neuron0x29605d0()*-0.160748);
}

double NNfunction_ss_sLsL::synapse0x296f350() {
   return (neuron0x2960910()*0.178499);
}

double NNfunction_ss_sLsL::synapse0x296f390() {
   return (neuron0x2960c50()*0.0234795);
}

double NNfunction_ss_sLsL::synapse0x296f710() {
   return (neuron0x295c120()*0.0811016);
}

double NNfunction_ss_sLsL::synapse0x296f750() {
   return (neuron0x295c3d0()*0.347609);
}

double NNfunction_ss_sLsL::synapse0x296f790() {
   return (neuron0x295c710()*-0.873715);
}

double NNfunction_ss_sLsL::synapse0x296f7d0() {
   return (neuron0x295ca50()*-0.0194353);
}

double NNfunction_ss_sLsL::synapse0x296f810() {
   return (neuron0x295cd90()*0.519566);
}

double NNfunction_ss_sLsL::synapse0x296f850() {
   return (neuron0x295d0d0()*0.0294012);
}

double NNfunction_ss_sLsL::synapse0x296f890() {
   return (neuron0x295d410()*-0.561811);
}

double NNfunction_ss_sLsL::synapse0x296f8d0() {
   return (neuron0x295d750()*-0.019052);
}

double NNfunction_ss_sLsL::synapse0x296f910() {
   return (neuron0x295da90()*-0.158071);
}

double NNfunction_ss_sLsL::synapse0x2967ad0() {
   return (neuron0x295ddd0()*-0.0940643);
}

double NNfunction_ss_sLsL::synapse0x2967b10() {
   return (neuron0x295e110()*-0.382075);
}

double NNfunction_ss_sLsL::synapse0x2967b50() {
   return (neuron0x295e450()*0.252146);
}

double NNfunction_ss_sLsL::synapse0x2967b90() {
   return (neuron0x295e790()*1.16457);
}

double NNfunction_ss_sLsL::synapse0x2967bd0() {
   return (neuron0x295ead0()*-0.0712542);
}

double NNfunction_ss_sLsL::synapse0x2967c10() {
   return (neuron0x295ee10()*0.30118);
}

double NNfunction_ss_sLsL::synapse0x2967c50() {
   return (neuron0x295f150()*-0.706703);
}

double NNfunction_ss_sLsL::synapse0x296f560() {
   return (neuron0x295f490()*0.0639187);
}

double NNfunction_ss_sLsL::synapse0x296f5a0() {
   return (neuron0x295f9f0()*-0.602619);
}

double NNfunction_ss_sLsL::synapse0x2967da0() {
   return (neuron0x295fc10()*-0.288064);
}

double NNfunction_ss_sLsL::synapse0x2967de0() {
   return (neuron0x295ff50()*-0.0951785);
}

double NNfunction_ss_sLsL::synapse0x2967e20() {
   return (neuron0x2960290()*-0.0610467);
}

double NNfunction_ss_sLsL::synapse0x2967e60() {
   return (neuron0x29605d0()*-0.266307);
}

double NNfunction_ss_sLsL::synapse0x2967ea0() {
   return (neuron0x2960910()*-0.0446074);
}

double NNfunction_ss_sLsL::synapse0x2967ee0() {
   return (neuron0x2960c50()*-0.132669);
}

double NNfunction_ss_sLsL::synapse0x2968260() {
   return (neuron0x295c120()*0.0842618);
}

double NNfunction_ss_sLsL::synapse0x29682a0() {
   return (neuron0x295c3d0()*0.244655);
}

double NNfunction_ss_sLsL::synapse0x29682e0() {
   return (neuron0x295c710()*0.301111);
}

double NNfunction_ss_sLsL::synapse0x2968320() {
   return (neuron0x295ca50()*0.568249);
}

double NNfunction_ss_sLsL::synapse0x2968360() {
   return (neuron0x295cd90()*-0.0511578);
}

double NNfunction_ss_sLsL::synapse0x29683a0() {
   return (neuron0x295d0d0()*-0.00501077);
}

double NNfunction_ss_sLsL::synapse0x29683e0() {
   return (neuron0x295d410()*-0.292411);
}

double NNfunction_ss_sLsL::synapse0x2968420() {
   return (neuron0x295d750()*0.065899);
}

double NNfunction_ss_sLsL::synapse0x2968460() {
   return (neuron0x295da90()*0.0038364);
}

double NNfunction_ss_sLsL::synapse0x29684a0() {
   return (neuron0x295ddd0()*-0.1103);
}

double NNfunction_ss_sLsL::synapse0x29684e0() {
   return (neuron0x295e110()*-0.0546763);
}

double NNfunction_ss_sLsL::synapse0x2968520() {
   return (neuron0x295e450()*0.0668436);
}

double NNfunction_ss_sLsL::synapse0x2968560() {
   return (neuron0x295e790()*0.262381);
}

double NNfunction_ss_sLsL::synapse0x29685a0() {
   return (neuron0x295ead0()*-0.100366);
}

double NNfunction_ss_sLsL::synapse0x29685e0() {
   return (neuron0x295ee10()*-0.0464523);
}

double NNfunction_ss_sLsL::synapse0x2968620() {
   return (neuron0x295f150()*-0.119773);
}

double NNfunction_ss_sLsL::synapse0x29680b0() {
   return (neuron0x295f490()*-0.484723);
}

double NNfunction_ss_sLsL::synapse0x29680f0() {
   return (neuron0x295f9f0()*0.282248);
}

double NNfunction_ss_sLsL::synapse0x2968770() {
   return (neuron0x295fc10()*0.0827388);
}

double NNfunction_ss_sLsL::synapse0x29687b0() {
   return (neuron0x295ff50()*0.151316);
}

double NNfunction_ss_sLsL::synapse0x29687f0() {
   return (neuron0x2960290()*-0.0634463);
}

double NNfunction_ss_sLsL::synapse0x2968830() {
   return (neuron0x29605d0()*-0.0285756);
}

double NNfunction_ss_sLsL::synapse0x2968870() {
   return (neuron0x2960910()*-0.00535351);
}

double NNfunction_ss_sLsL::synapse0x29688b0() {
   return (neuron0x2960c50()*0.0906015);
}

double NNfunction_ss_sLsL::synapse0x2968a80() {
   return (neuron0x295c120()*0.00529213);
}

double NNfunction_ss_sLsL::synapse0x2971b10() {
   return (neuron0x295c3d0()*-1.73633);
}

double NNfunction_ss_sLsL::synapse0x2971b50() {
   return (neuron0x295c710()*1.21028);
}

double NNfunction_ss_sLsL::synapse0x2971b90() {
   return (neuron0x295ca50()*-0.45562);
}

double NNfunction_ss_sLsL::synapse0x2971bd0() {
   return (neuron0x295cd90()*0.874061);
}

double NNfunction_ss_sLsL::synapse0x2971c10() {
   return (neuron0x295d0d0()*0.725471);
}

double NNfunction_ss_sLsL::synapse0x2971c50() {
   return (neuron0x295d410()*1.13761);
}

double NNfunction_ss_sLsL::synapse0x2971c90() {
   return (neuron0x295d750()*0.787036);
}

double NNfunction_ss_sLsL::synapse0x2971cd0() {
   return (neuron0x295da90()*-0.299006);
}

double NNfunction_ss_sLsL::synapse0x2971d10() {
   return (neuron0x295ddd0()*0.199938);
}

double NNfunction_ss_sLsL::synapse0x2971d50() {
   return (neuron0x295e110()*-0.0409679);
}

double NNfunction_ss_sLsL::synapse0x2971d90() {
   return (neuron0x295e450()*-0.282148);
}

double NNfunction_ss_sLsL::synapse0x2971dd0() {
   return (neuron0x295e790()*-0.751966);
}

double NNfunction_ss_sLsL::synapse0x2971e10() {
   return (neuron0x295ead0()*0.216875);
}

double NNfunction_ss_sLsL::synapse0x2971e50() {
   return (neuron0x295ee10()*-0.482067);
}

double NNfunction_ss_sLsL::synapse0x2971e90() {
   return (neuron0x295f150()*-0.922512);
}

double NNfunction_ss_sLsL::synapse0x2971960() {
   return (neuron0x295f490()*0.15379);
}

double NNfunction_ss_sLsL::synapse0x29719a0() {
   return (neuron0x295f9f0()*-0.4454);
}

double NNfunction_ss_sLsL::synapse0x2971fe0() {
   return (neuron0x295fc10()*0.394396);
}

double NNfunction_ss_sLsL::synapse0x2972020() {
   return (neuron0x295ff50()*0.548786);
}

double NNfunction_ss_sLsL::synapse0x2972060() {
   return (neuron0x2960290()*-0.8551);
}

double NNfunction_ss_sLsL::synapse0x29720a0() {
   return (neuron0x29605d0()*0.750454);
}

double NNfunction_ss_sLsL::synapse0x29720e0() {
   return (neuron0x2960910()*-0.129451);
}

double NNfunction_ss_sLsL::synapse0x2972120() {
   return (neuron0x2960c50()*-0.0613193);
}

double NNfunction_ss_sLsL::synapse0x29724a0() {
   return (neuron0x295c120()*-0.20969);
}

double NNfunction_ss_sLsL::synapse0x29724e0() {
   return (neuron0x295c3d0()*0.0890213);
}

double NNfunction_ss_sLsL::synapse0x2972520() {
   return (neuron0x295c710()*-0.259762);
}

double NNfunction_ss_sLsL::synapse0x2972560() {
   return (neuron0x295ca50()*0.0557168);
}

double NNfunction_ss_sLsL::synapse0x29725a0() {
   return (neuron0x295cd90()*-0.0971802);
}

double NNfunction_ss_sLsL::synapse0x29725e0() {
   return (neuron0x295d0d0()*0.0739138);
}

double NNfunction_ss_sLsL::synapse0x2972620() {
   return (neuron0x295d410()*-0.0891175);
}

double NNfunction_ss_sLsL::synapse0x2972660() {
   return (neuron0x295d750()*-0.0400121);
}

double NNfunction_ss_sLsL::synapse0x29726a0() {
   return (neuron0x295da90()*-0.152882);
}

double NNfunction_ss_sLsL::synapse0x29726e0() {
   return (neuron0x295ddd0()*-0.203226);
}

double NNfunction_ss_sLsL::synapse0x2972720() {
   return (neuron0x295e110()*-0.539642);
}

double NNfunction_ss_sLsL::synapse0x2972760() {
   return (neuron0x295e450()*0.376733);
}

double NNfunction_ss_sLsL::synapse0x29727a0() {
   return (neuron0x295e790()*1.04414);
}

double NNfunction_ss_sLsL::synapse0x29727e0() {
   return (neuron0x295ead0()*0.47575);
}

double NNfunction_ss_sLsL::synapse0x2972820() {
   return (neuron0x295ee10()*-0.569264);
}

double NNfunction_ss_sLsL::synapse0x2972860() {
   return (neuron0x295f150()*0.259201);
}

double NNfunction_ss_sLsL::synapse0x29722f0() {
   return (neuron0x295f490()*-0.533382);
}

double NNfunction_ss_sLsL::synapse0x2972330() {
   return (neuron0x295f9f0()*0.131895);
}

double NNfunction_ss_sLsL::synapse0x29729b0() {
   return (neuron0x295fc10()*-0.477271);
}

double NNfunction_ss_sLsL::synapse0x29729f0() {
   return (neuron0x295ff50()*-0.539489);
}

double NNfunction_ss_sLsL::synapse0x2972a30() {
   return (neuron0x2960290()*0.308457);
}

double NNfunction_ss_sLsL::synapse0x2972a70() {
   return (neuron0x29605d0()*-0.215766);
}

double NNfunction_ss_sLsL::synapse0x2972ab0() {
   return (neuron0x2960910()*0.183915);
}

double NNfunction_ss_sLsL::synapse0x2972af0() {
   return (neuron0x2960c50()*-0.149715);
}

double NNfunction_ss_sLsL::synapse0x2972e70() {
   return (neuron0x295c120()*0.0381761);
}

double NNfunction_ss_sLsL::synapse0x2972eb0() {
   return (neuron0x295c3d0()*1.7239);
}

double NNfunction_ss_sLsL::synapse0x2972ef0() {
   return (neuron0x295c710()*0.0495317);
}

double NNfunction_ss_sLsL::synapse0x2972f30() {
   return (neuron0x295ca50()*-0.228535);
}

double NNfunction_ss_sLsL::synapse0x2972f70() {
   return (neuron0x295cd90()*0.415125);
}

double NNfunction_ss_sLsL::synapse0x2972fb0() {
   return (neuron0x295d0d0()*1.78318);
}

double NNfunction_ss_sLsL::synapse0x2972ff0() {
   return (neuron0x295d410()*0.954402);
}

double NNfunction_ss_sLsL::synapse0x2973030() {
   return (neuron0x295d750()*0.0989535);
}

double NNfunction_ss_sLsL::synapse0x2973070() {
   return (neuron0x295da90()*-0.384954);
}

double NNfunction_ss_sLsL::synapse0x29730b0() {
   return (neuron0x295ddd0()*-0.88403);
}

double NNfunction_ss_sLsL::synapse0x29730f0() {
   return (neuron0x295e110()*0.414848);
}

double NNfunction_ss_sLsL::synapse0x2973130() {
   return (neuron0x295e450()*-0.851329);
}

double NNfunction_ss_sLsL::synapse0x2973170() {
   return (neuron0x295e790()*-0.133136);
}

double NNfunction_ss_sLsL::synapse0x29731b0() {
   return (neuron0x295ead0()*-0.443943);
}

double NNfunction_ss_sLsL::synapse0x29731f0() {
   return (neuron0x295ee10()*-0.506354);
}

double NNfunction_ss_sLsL::synapse0x2973230() {
   return (neuron0x295f150()*-0.406355);
}

double NNfunction_ss_sLsL::synapse0x2972cc0() {
   return (neuron0x295f490()*0.76281);
}

double NNfunction_ss_sLsL::synapse0x2972d00() {
   return (neuron0x295f9f0()*0.541597);
}

double NNfunction_ss_sLsL::synapse0x2973380() {
   return (neuron0x295fc10()*-0.497302);
}

double NNfunction_ss_sLsL::synapse0x29733c0() {
   return (neuron0x295ff50()*-0.268686);
}

double NNfunction_ss_sLsL::synapse0x2973400() {
   return (neuron0x2960290()*-0.553914);
}

double NNfunction_ss_sLsL::synapse0x2973440() {
   return (neuron0x29605d0()*-0.301805);
}

double NNfunction_ss_sLsL::synapse0x2973480() {
   return (neuron0x2960910()*0.40619);
}

double NNfunction_ss_sLsL::synapse0x29734c0() {
   return (neuron0x2960c50()*0.173224);
}

double NNfunction_ss_sLsL::synapse0x2973840() {
   return (neuron0x295c120()*-0.0198922);
}

double NNfunction_ss_sLsL::synapse0x2973880() {
   return (neuron0x295c3d0()*-1.72788);
}

double NNfunction_ss_sLsL::synapse0x29738c0() {
   return (neuron0x295c710()*-0.798783);
}

double NNfunction_ss_sLsL::synapse0x2973900() {
   return (neuron0x295ca50()*-0.336303);
}

double NNfunction_ss_sLsL::synapse0x2973940() {
   return (neuron0x295cd90()*0.455274);
}

double NNfunction_ss_sLsL::synapse0x2973980() {
   return (neuron0x295d0d0()*0.00390606);
}

double NNfunction_ss_sLsL::synapse0x29739c0() {
   return (neuron0x295d410()*0.460282);
}

double NNfunction_ss_sLsL::synapse0x2973a00() {
   return (neuron0x295d750()*0.415021);
}

double NNfunction_ss_sLsL::synapse0x2973a40() {
   return (neuron0x295da90()*-0.474932);
}

double NNfunction_ss_sLsL::synapse0x2973a80() {
   return (neuron0x295ddd0()*-0.0847053);
}

double NNfunction_ss_sLsL::synapse0x2973ac0() {
   return (neuron0x295e110()*-0.340716);
}

double NNfunction_ss_sLsL::synapse0x2973b00() {
   return (neuron0x295e450()*-0.729503);
}

double NNfunction_ss_sLsL::synapse0x2973b40() {
   return (neuron0x295e790()*0.37577);
}

double NNfunction_ss_sLsL::synapse0x2973b80() {
   return (neuron0x295ead0()*-0.435086);
}

double NNfunction_ss_sLsL::synapse0x2973bc0() {
   return (neuron0x295ee10()*-1.21557);
}

double NNfunction_ss_sLsL::synapse0x2973c00() {
   return (neuron0x295f150()*-1.20476);
}

double NNfunction_ss_sLsL::synapse0x2973690() {
   return (neuron0x295f490()*0.495113);
}

double NNfunction_ss_sLsL::synapse0x29736d0() {
   return (neuron0x295f9f0()*0.400853);
}

double NNfunction_ss_sLsL::synapse0x2973d50() {
   return (neuron0x295fc10()*1.58076);
}

double NNfunction_ss_sLsL::synapse0x2973d90() {
   return (neuron0x295ff50()*0.480727);
}

double NNfunction_ss_sLsL::synapse0x2973dd0() {
   return (neuron0x2960290()*-0.56663);
}

double NNfunction_ss_sLsL::synapse0x2973e10() {
   return (neuron0x29605d0()*0.271597);
}

double NNfunction_ss_sLsL::synapse0x2973e50() {
   return (neuron0x2960910()*-0.0275936);
}

double NNfunction_ss_sLsL::synapse0x2973e90() {
   return (neuron0x2960c50()*0.183401);
}

double NNfunction_ss_sLsL::synapse0x2974210() {
   return (neuron0x295c120()*-0.00907455);
}

double NNfunction_ss_sLsL::synapse0x2974250() {
   return (neuron0x295c3d0()*0.0779459);
}

double NNfunction_ss_sLsL::synapse0x2974290() {
   return (neuron0x295c710()*0.191892);
}

double NNfunction_ss_sLsL::synapse0x29742d0() {
   return (neuron0x295ca50()*-0.566103);
}

double NNfunction_ss_sLsL::synapse0x2974310() {
   return (neuron0x295cd90()*-0.211205);
}

double NNfunction_ss_sLsL::synapse0x2974350() {
   return (neuron0x295d0d0()*-0.0152068);
}

double NNfunction_ss_sLsL::synapse0x2974390() {
   return (neuron0x295d410()*-0.0180441);
}

double NNfunction_ss_sLsL::synapse0x29743d0() {
   return (neuron0x295d750()*0.0920227);
}

double NNfunction_ss_sLsL::synapse0x2974410() {
   return (neuron0x295da90()*-0.0546113);
}

double NNfunction_ss_sLsL::synapse0x2974450() {
   return (neuron0x295ddd0()*-0.0198689);
}

double NNfunction_ss_sLsL::synapse0x2974490() {
   return (neuron0x295e110()*-0.0375835);
}

double NNfunction_ss_sLsL::synapse0x29744d0() {
   return (neuron0x295e450()*-0.479955);
}

double NNfunction_ss_sLsL::synapse0x2974510() {
   return (neuron0x295e790()*0.478598);
}

double NNfunction_ss_sLsL::synapse0x2974550() {
   return (neuron0x295ead0()*0.183928);
}

double NNfunction_ss_sLsL::synapse0x2974590() {
   return (neuron0x295ee10()*0.0532924);
}

double NNfunction_ss_sLsL::synapse0x29745d0() {
   return (neuron0x295f150()*-0.281361);
}

double NNfunction_ss_sLsL::synapse0x2974060() {
   return (neuron0x295f490()*0.302216);
}

double NNfunction_ss_sLsL::synapse0x29740a0() {
   return (neuron0x295f9f0()*-0.200078);
}

double NNfunction_ss_sLsL::synapse0x2974720() {
   return (neuron0x295fc10()*-0.17515);
}

double NNfunction_ss_sLsL::synapse0x2974760() {
   return (neuron0x295ff50()*-0.112511);
}

double NNfunction_ss_sLsL::synapse0x29747a0() {
   return (neuron0x2960290()*0.034147);
}

double NNfunction_ss_sLsL::synapse0x29747e0() {
   return (neuron0x29605d0()*-0.011108);
}

double NNfunction_ss_sLsL::synapse0x2974820() {
   return (neuron0x2960910()*-0.0448183);
}

double NNfunction_ss_sLsL::synapse0x2974860() {
   return (neuron0x2960c50()*0.00553332);
}

double NNfunction_ss_sLsL::synapse0x2974be0() {
   return (neuron0x295c120()*-0.018429);
}

double NNfunction_ss_sLsL::synapse0x2974c20() {
   return (neuron0x295c3d0()*0.0175269);
}

double NNfunction_ss_sLsL::synapse0x2974c60() {
   return (neuron0x295c710()*-0.0706307);
}

double NNfunction_ss_sLsL::synapse0x2974ca0() {
   return (neuron0x295ca50()*-0.0528223);
}

double NNfunction_ss_sLsL::synapse0x2974ce0() {
   return (neuron0x295cd90()*-0.0167992);
}

double NNfunction_ss_sLsL::synapse0x2974d20() {
   return (neuron0x295d0d0()*0.0158872);
}

double NNfunction_ss_sLsL::synapse0x2974d60() {
   return (neuron0x295d410()*-0.00955886);
}

double NNfunction_ss_sLsL::synapse0x2974da0() {
   return (neuron0x295d750()*0.00704732);
}

double NNfunction_ss_sLsL::synapse0x2974de0() {
   return (neuron0x295da90()*0.0581489);
}

double NNfunction_ss_sLsL::synapse0x2974e20() {
   return (neuron0x295ddd0()*-0.00313384);
}

double NNfunction_ss_sLsL::synapse0x2974e60() {
   return (neuron0x295e110()*-0.0182268);
}

double NNfunction_ss_sLsL::synapse0x2974ea0() {
   return (neuron0x295e450()*-0.0256279);
}

double NNfunction_ss_sLsL::synapse0x2974ee0() {
   return (neuron0x295e790()*2.20948);
}

double NNfunction_ss_sLsL::synapse0x2974f20() {
   return (neuron0x295ead0()*-0.0202908);
}

double NNfunction_ss_sLsL::synapse0x2974f60() {
   return (neuron0x295ee10()*-0.0206966);
}

double NNfunction_ss_sLsL::synapse0x2974fa0() {
   return (neuron0x295f150()*0.00866904);
}

double NNfunction_ss_sLsL::synapse0x2974a30() {
   return (neuron0x295f490()*-0.0261165);
}

double NNfunction_ss_sLsL::synapse0x2974a70() {
   return (neuron0x295f9f0()*-0.00744224);
}

double NNfunction_ss_sLsL::synapse0x29750f0() {
   return (neuron0x295fc10()*-0.00732192);
}

double NNfunction_ss_sLsL::synapse0x2975130() {
   return (neuron0x295ff50()*0.00569763);
}

double NNfunction_ss_sLsL::synapse0x2975170() {
   return (neuron0x2960290()*-0.00788109);
}

double NNfunction_ss_sLsL::synapse0x29751b0() {
   return (neuron0x29605d0()*0.013581);
}

double NNfunction_ss_sLsL::synapse0x29751f0() {
   return (neuron0x2960910()*0.0120726);
}

double NNfunction_ss_sLsL::synapse0x2975230() {
   return (neuron0x2960c50()*0.00631429);
}

double NNfunction_ss_sLsL::synapse0x29755b0() {
   return (neuron0x295c120()*0.0250461);
}

double NNfunction_ss_sLsL::synapse0x29755f0() {
   return (neuron0x295c3d0()*0.728074);
}

double NNfunction_ss_sLsL::synapse0x2975630() {
   return (neuron0x295c710()*1.63491);
}

double NNfunction_ss_sLsL::synapse0x2975670() {
   return (neuron0x295ca50()*0.305569);
}

double NNfunction_ss_sLsL::synapse0x29756b0() {
   return (neuron0x295cd90()*-0.295738);
}

double NNfunction_ss_sLsL::synapse0x29756f0() {
   return (neuron0x295d0d0()*0.0303905);
}

double NNfunction_ss_sLsL::synapse0x2975730() {
   return (neuron0x295d410()*0.247452);
}

double NNfunction_ss_sLsL::synapse0x2975770() {
   return (neuron0x295d750()*0.0513284);
}

double NNfunction_ss_sLsL::synapse0x29757b0() {
   return (neuron0x295da90()*0.125642);
}

double NNfunction_ss_sLsL::synapse0x29757f0() {
   return (neuron0x295ddd0()*0.148116);
}

double NNfunction_ss_sLsL::synapse0x2975830() {
   return (neuron0x295e110()*-0.0306951);
}

double NNfunction_ss_sLsL::synapse0x2975870() {
   return (neuron0x295e450()*-0.0614483);
}

double NNfunction_ss_sLsL::synapse0x29758b0() {
   return (neuron0x295e790()*0.628671);
}

double NNfunction_ss_sLsL::synapse0x29758f0() {
   return (neuron0x295ead0()*-0.660774);
}

double NNfunction_ss_sLsL::synapse0x2975930() {
   return (neuron0x295ee10()*-0.206938);
}

double NNfunction_ss_sLsL::synapse0x2975970() {
   return (neuron0x295f150()*-0.0901116);
}

double NNfunction_ss_sLsL::synapse0x2975400() {
   return (neuron0x295f490()*-0.237478);
}

double NNfunction_ss_sLsL::synapse0x2975440() {
   return (neuron0x295f9f0()*-0.0988042);
}

double NNfunction_ss_sLsL::synapse0x2975ac0() {
   return (neuron0x295fc10()*-0.0538482);
}

double NNfunction_ss_sLsL::synapse0x2975b00() {
   return (neuron0x295ff50()*-0.503139);
}

double NNfunction_ss_sLsL::synapse0x2975b40() {
   return (neuron0x2960290()*0.11992);
}

double NNfunction_ss_sLsL::synapse0x2975b80() {
   return (neuron0x29605d0()*0.0595249);
}

double NNfunction_ss_sLsL::synapse0x2975bc0() {
   return (neuron0x2960910()*0.271434);
}

double NNfunction_ss_sLsL::synapse0x2975c00() {
   return (neuron0x2960c50()*-0.174926);
}

double NNfunction_ss_sLsL::synapse0x2975f80() {
   return (neuron0x295c120()*0.0989089);
}

double NNfunction_ss_sLsL::synapse0x2975fc0() {
   return (neuron0x295c3d0()*-0.265331);
}

double NNfunction_ss_sLsL::synapse0x2976000() {
   return (neuron0x295c710()*-1.99816);
}

double NNfunction_ss_sLsL::synapse0x2976040() {
   return (neuron0x295ca50()*0.389375);
}

double NNfunction_ss_sLsL::synapse0x2976080() {
   return (neuron0x295cd90()*-0.0266773);
}

double NNfunction_ss_sLsL::synapse0x29760c0() {
   return (neuron0x295d0d0()*-0.172614);
}

double NNfunction_ss_sLsL::synapse0x2976100() {
   return (neuron0x295d410()*1.02542);
}

double NNfunction_ss_sLsL::synapse0x2976140() {
   return (neuron0x295d750()*-0.770362);
}

double NNfunction_ss_sLsL::synapse0x2976180() {
   return (neuron0x295da90()*-0.470586);
}

double NNfunction_ss_sLsL::synapse0x29761c0() {
   return (neuron0x295ddd0()*0.0220268);
}

double NNfunction_ss_sLsL::synapse0x2976200() {
   return (neuron0x295e110()*-0.551966);
}

double NNfunction_ss_sLsL::synapse0x2976240() {
   return (neuron0x295e450()*0.600845);
}

double NNfunction_ss_sLsL::synapse0x2976280() {
   return (neuron0x295e790()*-1.31935);
}

double NNfunction_ss_sLsL::synapse0x29762c0() {
   return (neuron0x295ead0()*1.01919);
}

double NNfunction_ss_sLsL::synapse0x2976300() {
   return (neuron0x295ee10()*-0.452674);
}

double NNfunction_ss_sLsL::synapse0x2976340() {
   return (neuron0x295f150()*1.71669);
}

double NNfunction_ss_sLsL::synapse0x2975dd0() {
   return (neuron0x295f490()*-1.10978);
}

double NNfunction_ss_sLsL::synapse0x2975e10() {
   return (neuron0x295f9f0()*1.22332);
}

double NNfunction_ss_sLsL::synapse0x2976490() {
   return (neuron0x295fc10()*0.110651);
}

double NNfunction_ss_sLsL::synapse0x29764d0() {
   return (neuron0x295ff50()*0.748736);
}

double NNfunction_ss_sLsL::synapse0x2976510() {
   return (neuron0x2960290()*-0.219345);
}

double NNfunction_ss_sLsL::synapse0x2976550() {
   return (neuron0x29605d0()*-0.773605);
}

double NNfunction_ss_sLsL::synapse0x2976590() {
   return (neuron0x2960910()*0.929394);
}

double NNfunction_ss_sLsL::synapse0x29765d0() {
   return (neuron0x2960c50()*0.321096);
}

double NNfunction_ss_sLsL::synapse0x2976950() {
   return (neuron0x295c120()*-0.0123821);
}

double NNfunction_ss_sLsL::synapse0x296af20() {
   return (neuron0x295c3d0()*-0.0749109);
}

double NNfunction_ss_sLsL::synapse0x296af60() {
   return (neuron0x295c710()*-0.229158);
}

double NNfunction_ss_sLsL::synapse0x296afa0() {
   return (neuron0x295ca50()*-0.125499);
}

double NNfunction_ss_sLsL::synapse0x296b1f0() {
   return (neuron0x295cd90()*-0.280321);
}

double NNfunction_ss_sLsL::synapse0x296b230() {
   return (neuron0x295d0d0()*0.0280293);
}

double NNfunction_ss_sLsL::synapse0x296b270() {
   return (neuron0x295d410()*0.154088);
}

double NNfunction_ss_sLsL::synapse0x296b4c0() {
   return (neuron0x295d750()*0.152031);
}

double NNfunction_ss_sLsL::synapse0x296b500() {
   return (neuron0x295da90()*0.0268473);
}

double NNfunction_ss_sLsL::synapse0x296b750() {
   return (neuron0x295ddd0()*-0.0718958);
}

double NNfunction_ss_sLsL::synapse0x296b790() {
   return (neuron0x295e110()*0.120563);
}

double NNfunction_ss_sLsL::synapse0x296b7d0() {
   return (neuron0x295e450()*0.765912);
}

double NNfunction_ss_sLsL::synapse0x296ba20() {
   return (neuron0x295e790()*-0.131746);
}

double NNfunction_ss_sLsL::synapse0x296ba60() {
   return (neuron0x295ead0()*-0.452807);
}

double NNfunction_ss_sLsL::synapse0x296bcb0() {
   return (neuron0x295ee10()*0.73073);
}

double NNfunction_ss_sLsL::synapse0x296bcf0() {
   return (neuron0x295f150()*-0.30871);
}

double NNfunction_ss_sLsL::synapse0x29767a0() {
   return (neuron0x295f490()*-0.359057);
}

double NNfunction_ss_sLsL::synapse0x29767e0() {
   return (neuron0x295f9f0()*0.341482);
}

double NNfunction_ss_sLsL::synapse0x296be40() {
   return (neuron0x295fc10()*0.355883);
}

double NNfunction_ss_sLsL::synapse0x296c350() {
   return (neuron0x295ff50()*0.056195);
}

double NNfunction_ss_sLsL::synapse0x296c390() {
   return (neuron0x2960290()*0.0843513);
}

double NNfunction_ss_sLsL::synapse0x296c3d0() {
   return (neuron0x29605d0()*0.0506062);
}

double NNfunction_ss_sLsL::synapse0x296c620() {
   return (neuron0x2960910()*0.0343369);
}

double NNfunction_ss_sLsL::synapse0x296c660() {
   return (neuron0x2960c50()*0.0215354);
}

double NNfunction_ss_sLsL::synapse0x296bf10() {
   return (neuron0x295c120()*-0.00292748);
}

double NNfunction_ss_sLsL::synapse0x296bf50() {
   return (neuron0x295c3d0()*0.00481789);
}

double NNfunction_ss_sLsL::synapse0x296bf90() {
   return (neuron0x295c710()*-0.0933961);
}

double NNfunction_ss_sLsL::synapse0x296bfd0() {
   return (neuron0x295ca50()*0.00144739);
}

double NNfunction_ss_sLsL::synapse0x296c950() {
   return (neuron0x295cd90()*0.00751482);
}

double NNfunction_ss_sLsL::synapse0x2978ca0() {
   return (neuron0x295d0d0()*0.00437176);
}

double NNfunction_ss_sLsL::synapse0x2978ce0() {
   return (neuron0x295d410()*0.0052662);
}

double NNfunction_ss_sLsL::synapse0x2978d20() {
   return (neuron0x295d750()*0.010451);
}

double NNfunction_ss_sLsL::synapse0x2978d60() {
   return (neuron0x295da90()*-0.00792238);
}

double NNfunction_ss_sLsL::synapse0x2978da0() {
   return (neuron0x295ddd0()*0.0847215);
}

double NNfunction_ss_sLsL::synapse0x2978de0() {
   return (neuron0x295e110()*-0.0386186);
}

double NNfunction_ss_sLsL::synapse0x2978e20() {
   return (neuron0x295e450()*-0.0498828);
}

double NNfunction_ss_sLsL::synapse0x2978e60() {
   return (neuron0x295e790()*0.636263);
}

double NNfunction_ss_sLsL::synapse0x2978ea0() {
   return (neuron0x295ead0()*0.0563433);
}

double NNfunction_ss_sLsL::synapse0x2978ee0() {
   return (neuron0x295ee10()*-0.0351104);
}

double NNfunction_ss_sLsL::synapse0x2978f20() {
   return (neuron0x295f150()*-0.032723);
}

double NNfunction_ss_sLsL::synapse0x296c830() {
   return (neuron0x295f490()*0.0450087);
}

double NNfunction_ss_sLsL::synapse0x296c870() {
   return (neuron0x295f9f0()*-0.0532985);
}

double NNfunction_ss_sLsL::synapse0x2979070() {
   return (neuron0x295fc10()*-0.00804998);
}

double NNfunction_ss_sLsL::synapse0x29790b0() {
   return (neuron0x295ff50()*0.037273);
}

double NNfunction_ss_sLsL::synapse0x29790f0() {
   return (neuron0x2960290()*0.016815);
}

double NNfunction_ss_sLsL::synapse0x2979130() {
   return (neuron0x29605d0()*0.00054516);
}

double NNfunction_ss_sLsL::synapse0x2979170() {
   return (neuron0x2960910()*-0.00307315);
}

double NNfunction_ss_sLsL::synapse0x29791b0() {
   return (neuron0x2960c50()*0.0136977);
}

double NNfunction_ss_sLsL::synapse0x2979530() {
   return (neuron0x295c120()*-0.0527218);
}

double NNfunction_ss_sLsL::synapse0x2979570() {
   return (neuron0x295c3d0()*-0.385184);
}

double NNfunction_ss_sLsL::synapse0x29795b0() {
   return (neuron0x295c710()*0.740152);
}

double NNfunction_ss_sLsL::synapse0x29795f0() {
   return (neuron0x295ca50()*0.174416);
}

double NNfunction_ss_sLsL::synapse0x2979630() {
   return (neuron0x295cd90()*-0.241571);
}

double NNfunction_ss_sLsL::synapse0x2979670() {
   return (neuron0x295d0d0()*0.686013);
}

double NNfunction_ss_sLsL::synapse0x29796b0() {
   return (neuron0x295d410()*0.670795);
}

double NNfunction_ss_sLsL::synapse0x29796f0() {
   return (neuron0x295d750()*-0.478977);
}

double NNfunction_ss_sLsL::synapse0x2979730() {
   return (neuron0x295da90()*-1.1698);
}

double NNfunction_ss_sLsL::synapse0x2979770() {
   return (neuron0x295ddd0()*-0.18074);
}

double NNfunction_ss_sLsL::synapse0x29797b0() {
   return (neuron0x295e110()*-0.460051);
}

double NNfunction_ss_sLsL::synapse0x29797f0() {
   return (neuron0x295e450()*-0.37932);
}

double NNfunction_ss_sLsL::synapse0x2979830() {
   return (neuron0x295e790()*-1.87252);
}

double NNfunction_ss_sLsL::synapse0x2979870() {
   return (neuron0x295ead0()*0.64437);
}

double NNfunction_ss_sLsL::synapse0x29798b0() {
   return (neuron0x295ee10()*0.264757);
}

double NNfunction_ss_sLsL::synapse0x29798f0() {
   return (neuron0x295f150()*1.95481);
}

double NNfunction_ss_sLsL::synapse0x2979380() {
   return (neuron0x295f490()*-0.336093);
}

double NNfunction_ss_sLsL::synapse0x29793c0() {
   return (neuron0x295f9f0()*1.61741);
}

double NNfunction_ss_sLsL::synapse0x2979a40() {
   return (neuron0x295fc10()*-0.568145);
}

double NNfunction_ss_sLsL::synapse0x2979a80() {
   return (neuron0x295ff50()*0.325683);
}

double NNfunction_ss_sLsL::synapse0x2979ac0() {
   return (neuron0x2960290()*0.530983);
}

double NNfunction_ss_sLsL::synapse0x2979b00() {
   return (neuron0x29605d0()*-0.205304);
}

double NNfunction_ss_sLsL::synapse0x2979b40() {
   return (neuron0x2960910()*0.000570305);
}

double NNfunction_ss_sLsL::synapse0x2979b80() {
   return (neuron0x2960c50()*0.121356);
}

double NNfunction_ss_sLsL::synapse0x2979f00() {
   return (neuron0x295c120()*0.150779);
}

double NNfunction_ss_sLsL::synapse0x2979f40() {
   return (neuron0x295c3d0()*-2.11619);
}

double NNfunction_ss_sLsL::synapse0x2979f80() {
   return (neuron0x295c710()*2.29928);
}

double NNfunction_ss_sLsL::synapse0x2979fc0() {
   return (neuron0x295ca50()*0.0325945);
}

double NNfunction_ss_sLsL::synapse0x297a000() {
   return (neuron0x295cd90()*1.08225);
}

double NNfunction_ss_sLsL::synapse0x297a040() {
   return (neuron0x295d0d0()*-0.797447);
}

double NNfunction_ss_sLsL::synapse0x297a080() {
   return (neuron0x295d410()*0.369138);
}

double NNfunction_ss_sLsL::synapse0x297a0c0() {
   return (neuron0x295d750()*0.805938);
}

double NNfunction_ss_sLsL::synapse0x297a100() {
   return (neuron0x295da90()*0.0895403);
}

double NNfunction_ss_sLsL::synapse0x297a140() {
   return (neuron0x295ddd0()*-0.886583);
}

double NNfunction_ss_sLsL::synapse0x297a180() {
   return (neuron0x295e110()*0.290842);
}

double NNfunction_ss_sLsL::synapse0x297a1c0() {
   return (neuron0x295e450()*-1.69783);
}

double NNfunction_ss_sLsL::synapse0x297a200() {
   return (neuron0x295e790()*1.06717);
}

double NNfunction_ss_sLsL::synapse0x297a240() {
   return (neuron0x295ead0()*-1.20724);
}

double NNfunction_ss_sLsL::synapse0x297a280() {
   return (neuron0x295ee10()*0.776744);
}

double NNfunction_ss_sLsL::synapse0x297a2c0() {
   return (neuron0x295f150()*0.0988705);
}

double NNfunction_ss_sLsL::synapse0x2979d50() {
   return (neuron0x295f490()*0.585015);
}

double NNfunction_ss_sLsL::synapse0x2979d90() {
   return (neuron0x295f9f0()*0.423063);
}

double NNfunction_ss_sLsL::synapse0x297a410() {
   return (neuron0x295fc10()*-0.981708);
}

double NNfunction_ss_sLsL::synapse0x297a450() {
   return (neuron0x295ff50()*-1.74305);
}

double NNfunction_ss_sLsL::synapse0x297a490() {
   return (neuron0x2960290()*0.779595);
}

double NNfunction_ss_sLsL::synapse0x297a4d0() {
   return (neuron0x29605d0()*-0.350606);
}

double NNfunction_ss_sLsL::synapse0x297a510() {
   return (neuron0x2960910()*-0.393088);
}

double NNfunction_ss_sLsL::synapse0x297a550() {
   return (neuron0x2960c50()*0.018756);
}

double NNfunction_ss_sLsL::synapse0x297a8d0() {
   return (neuron0x295c120()*-0.0635724);
}

double NNfunction_ss_sLsL::synapse0x297a910() {
   return (neuron0x295c3d0()*-1.48026);
}

double NNfunction_ss_sLsL::synapse0x297a950() {
   return (neuron0x295c710()*0.195275);
}

double NNfunction_ss_sLsL::synapse0x297a990() {
   return (neuron0x295ca50()*1.20446);
}

double NNfunction_ss_sLsL::synapse0x297a9d0() {
   return (neuron0x295cd90()*-0.285397);
}

double NNfunction_ss_sLsL::synapse0x297aa10() {
   return (neuron0x295d0d0()*0.352317);
}

double NNfunction_ss_sLsL::synapse0x297aa50() {
   return (neuron0x295d410()*0.339021);
}

double NNfunction_ss_sLsL::synapse0x297aa90() {
   return (neuron0x295d750()*-0.153368);
}

double NNfunction_ss_sLsL::synapse0x297aad0() {
   return (neuron0x295da90()*-0.0365335);
}

double NNfunction_ss_sLsL::synapse0x297ab10() {
   return (neuron0x295ddd0()*0.769025);
}

double NNfunction_ss_sLsL::synapse0x297ab50() {
   return (neuron0x295e110()*1.258);
}

double NNfunction_ss_sLsL::synapse0x297ab90() {
   return (neuron0x295e450()*-0.337132);
}

double NNfunction_ss_sLsL::synapse0x297abd0() {
   return (neuron0x295e790()*-0.173616);
}

double NNfunction_ss_sLsL::synapse0x297ac10() {
   return (neuron0x295ead0()*0.867962);
}

double NNfunction_ss_sLsL::synapse0x297ac50() {
   return (neuron0x295ee10()*-0.169046);
}

double NNfunction_ss_sLsL::synapse0x297ac90() {
   return (neuron0x295f150()*-0.212711);
}

double NNfunction_ss_sLsL::synapse0x297a720() {
   return (neuron0x295f490()*0.393651);
}

double NNfunction_ss_sLsL::synapse0x297a760() {
   return (neuron0x295f9f0()*0.254134);
}

double NNfunction_ss_sLsL::synapse0x297ade0() {
   return (neuron0x295fc10()*-1.6664);
}

double NNfunction_ss_sLsL::synapse0x297ae20() {
   return (neuron0x295ff50()*0.803613);
}

double NNfunction_ss_sLsL::synapse0x297ae60() {
   return (neuron0x2960290()*0.91549);
}

double NNfunction_ss_sLsL::synapse0x297aea0() {
   return (neuron0x29605d0()*-0.749226);
}

double NNfunction_ss_sLsL::synapse0x297aee0() {
   return (neuron0x2960910()*0.274213);
}

double NNfunction_ss_sLsL::synapse0x297af20() {
   return (neuron0x2960c50()*0.116231);
}

double NNfunction_ss_sLsL::synapse0x297b2a0() {
   return (neuron0x295c120()*0.00573636);
}

double NNfunction_ss_sLsL::synapse0x297b2e0() {
   return (neuron0x295c3d0()*-0.00627281);
}

double NNfunction_ss_sLsL::synapse0x297b320() {
   return (neuron0x295c710()*0.00878809);
}

double NNfunction_ss_sLsL::synapse0x297b360() {
   return (neuron0x295ca50()*-0.00721135);
}

double NNfunction_ss_sLsL::synapse0x297b3a0() {
   return (neuron0x295cd90()*0.0017452);
}

double NNfunction_ss_sLsL::synapse0x297b3e0() {
   return (neuron0x295d0d0()*-0.00507023);
}

double NNfunction_ss_sLsL::synapse0x297b420() {
   return (neuron0x295d410()*0.00440257);
}

double NNfunction_ss_sLsL::synapse0x297b460() {
   return (neuron0x295d750()*0.000175978);
}

double NNfunction_ss_sLsL::synapse0x297b4a0() {
   return (neuron0x295da90()*-0.00371876);
}

double NNfunction_ss_sLsL::synapse0x297b4e0() {
   return (neuron0x295ddd0()*0.0323106);
}

double NNfunction_ss_sLsL::synapse0x297b520() {
   return (neuron0x295e110()*-0.0070765);
}

double NNfunction_ss_sLsL::synapse0x297b560() {
   return (neuron0x295e450()*0.0280523);
}

double NNfunction_ss_sLsL::synapse0x297b5a0() {
   return (neuron0x295e790()*-0.96901);
}

double NNfunction_ss_sLsL::synapse0x297b5e0() {
   return (neuron0x295ead0()*0.0126228);
}

double NNfunction_ss_sLsL::synapse0x297b620() {
   return (neuron0x295ee10()*0.00768084);
}

double NNfunction_ss_sLsL::synapse0x297b660() {
   return (neuron0x295f150()*0.00930945);
}

double NNfunction_ss_sLsL::synapse0x297b0f0() {
   return (neuron0x295f490()*0.00902029);
}

double NNfunction_ss_sLsL::synapse0x297b130() {
   return (neuron0x295f9f0()*0.00905591);
}

double NNfunction_ss_sLsL::synapse0x297b7b0() {
   return (neuron0x295fc10()*0.0258808);
}

double NNfunction_ss_sLsL::synapse0x297b7f0() {
   return (neuron0x295ff50()*0.0120321);
}

double NNfunction_ss_sLsL::synapse0x297b830() {
   return (neuron0x2960290()*0.00882893);
}

double NNfunction_ss_sLsL::synapse0x297b870() {
   return (neuron0x29605d0()*-0.00520188);
}

double NNfunction_ss_sLsL::synapse0x297b8b0() {
   return (neuron0x2960910()*-0.00892542);
}

double NNfunction_ss_sLsL::synapse0x297b8f0() {
   return (neuron0x2960c50()*0.00863017);
}

double NNfunction_ss_sLsL::synapse0x297bc70() {
   return (neuron0x295c120()*-0.0226433);
}

double NNfunction_ss_sLsL::synapse0x297bcb0() {
   return (neuron0x295c3d0()*-0.0226121);
}

double NNfunction_ss_sLsL::synapse0x297bcf0() {
   return (neuron0x295c710()*-0.0240329);
}

double NNfunction_ss_sLsL::synapse0x297bd30() {
   return (neuron0x295ca50()*2.35694);
}

double NNfunction_ss_sLsL::synapse0x297bd70() {
   return (neuron0x295cd90()*0.00138504);
}

double NNfunction_ss_sLsL::synapse0x297bdb0() {
   return (neuron0x295d0d0()*-0.0308041);
}

double NNfunction_ss_sLsL::synapse0x297bdf0() {
   return (neuron0x295d410()*-0.0264182);
}

double NNfunction_ss_sLsL::synapse0x297be30() {
   return (neuron0x295d750()*0.0116192);
}

double NNfunction_ss_sLsL::synapse0x297be70() {
   return (neuron0x295da90()*-0.0276446);
}

double NNfunction_ss_sLsL::synapse0x297beb0() {
   return (neuron0x295ddd0()*-0.0175223);
}

double NNfunction_ss_sLsL::synapse0x297bef0() {
   return (neuron0x295e110()*-0.00829176);
}

double NNfunction_ss_sLsL::synapse0x297bf30() {
   return (neuron0x295e450()*-0.0319066);
}

double NNfunction_ss_sLsL::synapse0x297bf70() {
   return (neuron0x295e790()*0.324098);
}

double NNfunction_ss_sLsL::synapse0x297bfb0() {
   return (neuron0x295ead0()*0.0114542);
}

double NNfunction_ss_sLsL::synapse0x297bff0() {
   return (neuron0x295ee10()*-0.0021095);
}

double NNfunction_ss_sLsL::synapse0x297c030() {
   return (neuron0x295f150()*0.00345129);
}

double NNfunction_ss_sLsL::synapse0x297bac0() {
   return (neuron0x295f490()*0.055344);
}

double NNfunction_ss_sLsL::synapse0x297bb00() {
   return (neuron0x295f9f0()*-0.0298383);
}

double NNfunction_ss_sLsL::synapse0x297c180() {
   return (neuron0x295fc10()*-0.0266577);
}

double NNfunction_ss_sLsL::synapse0x297c1c0() {
   return (neuron0x295ff50()*-0.00549956);
}

double NNfunction_ss_sLsL::synapse0x297c200() {
   return (neuron0x2960290()*0.000923263);
}

double NNfunction_ss_sLsL::synapse0x297c240() {
   return (neuron0x29605d0()*0.0175946);
}

double NNfunction_ss_sLsL::synapse0x297c280() {
   return (neuron0x2960910()*0.00892889);
}

double NNfunction_ss_sLsL::synapse0x297c2c0() {
   return (neuron0x2960c50()*0.00966945);
}

double NNfunction_ss_sLsL::synapse0x297c640() {
   return (neuron0x295c120()*-0.0369293);
}

double NNfunction_ss_sLsL::synapse0x297c680() {
   return (neuron0x295c3d0()*0.0779972);
}

double NNfunction_ss_sLsL::synapse0x297c6c0() {
   return (neuron0x295c710()*-0.472328);
}

double NNfunction_ss_sLsL::synapse0x297c700() {
   return (neuron0x295ca50()*-0.598783);
}

double NNfunction_ss_sLsL::synapse0x297c740() {
   return (neuron0x295cd90()*-0.473478);
}

double NNfunction_ss_sLsL::synapse0x297c780() {
   return (neuron0x295d0d0()*0.398351);
}

double NNfunction_ss_sLsL::synapse0x297c7c0() {
   return (neuron0x295d410()*-0.60998);
}

double NNfunction_ss_sLsL::synapse0x297c800() {
   return (neuron0x295d750()*-0.36875);
}

double NNfunction_ss_sLsL::synapse0x297c840() {
   return (neuron0x295da90()*-0.312337);
}

double NNfunction_ss_sLsL::synapse0x297c880() {
   return (neuron0x295ddd0()*-0.428663);
}

double NNfunction_ss_sLsL::synapse0x297c8c0() {
   return (neuron0x295e110()*-0.268585);
}

double NNfunction_ss_sLsL::synapse0x297c900() {
   return (neuron0x295e450()*0.329193);
}

double NNfunction_ss_sLsL::synapse0x297c940() {
   return (neuron0x295e790()*-0.178175);
}

double NNfunction_ss_sLsL::synapse0x297c980() {
   return (neuron0x295ead0()*-0.142649);
}

double NNfunction_ss_sLsL::synapse0x297c9c0() {
   return (neuron0x295ee10()*-0.141747);
}

double NNfunction_ss_sLsL::synapse0x297ca00() {
   return (neuron0x295f150()*-0.342426);
}

double NNfunction_ss_sLsL::synapse0x297c490() {
   return (neuron0x295f490()*-0.182402);
}

double NNfunction_ss_sLsL::synapse0x297c4d0() {
   return (neuron0x295f9f0()*-0.347192);
}

double NNfunction_ss_sLsL::synapse0x297cb50() {
   return (neuron0x295fc10()*0.0253506);
}

double NNfunction_ss_sLsL::synapse0x297cb90() {
   return (neuron0x295ff50()*0.78683);
}

double NNfunction_ss_sLsL::synapse0x297cbd0() {
   return (neuron0x2960290()*-0.397718);
}

double NNfunction_ss_sLsL::synapse0x297cc10() {
   return (neuron0x29605d0()*0.2697);
}

double NNfunction_ss_sLsL::synapse0x297cc50() {
   return (neuron0x2960910()*0.245295);
}

double NNfunction_ss_sLsL::synapse0x297cc90() {
   return (neuron0x2960c50()*0.145876);
}

double NNfunction_ss_sLsL::synapse0x297d010() {
   return (neuron0x295c120()*0.0316291);
}

double NNfunction_ss_sLsL::synapse0x297d050() {
   return (neuron0x295c3d0()*-0.0795619);
}

double NNfunction_ss_sLsL::synapse0x297d090() {
   return (neuron0x295c710()*-0.0532025);
}

double NNfunction_ss_sLsL::synapse0x297d0d0() {
   return (neuron0x295ca50()*0.0380719);
}

double NNfunction_ss_sLsL::synapse0x297d110() {
   return (neuron0x295cd90()*0.0386221);
}

double NNfunction_ss_sLsL::synapse0x297d150() {
   return (neuron0x295d0d0()*0.022695);
}

double NNfunction_ss_sLsL::synapse0x297d190() {
   return (neuron0x295d410()*-0.0103664);
}

double NNfunction_ss_sLsL::synapse0x297d1d0() {
   return (neuron0x295d750()*-0.01298);
}

double NNfunction_ss_sLsL::synapse0x297d210() {
   return (neuron0x295da90()*-0.533941);
}

double NNfunction_ss_sLsL::synapse0x297d250() {
   return (neuron0x295ddd0()*0.0758167);
}

double NNfunction_ss_sLsL::synapse0x297d290() {
   return (neuron0x295e110()*0.243863);
}

double NNfunction_ss_sLsL::synapse0x297d2d0() {
   return (neuron0x295e450()*-0.0465987);
}

double NNfunction_ss_sLsL::synapse0x297d310() {
   return (neuron0x295e790()*1.63132);
}

double NNfunction_ss_sLsL::synapse0x297d350() {
   return (neuron0x295ead0()*-0.0500512);
}

double NNfunction_ss_sLsL::synapse0x297d390() {
   return (neuron0x295ee10()*-0.00678646);
}

double NNfunction_ss_sLsL::synapse0x297d3d0() {
   return (neuron0x295f150()*-0.056533);
}

double NNfunction_ss_sLsL::synapse0x297ce60() {
   return (neuron0x295f490()*-0.117377);
}

double NNfunction_ss_sLsL::synapse0x297cea0() {
   return (neuron0x295f9f0()*0.0238184);
}

double NNfunction_ss_sLsL::synapse0x297d520() {
   return (neuron0x295fc10()*-0.137277);
}

double NNfunction_ss_sLsL::synapse0x297d560() {
   return (neuron0x295ff50()*-0.144508);
}

double NNfunction_ss_sLsL::synapse0x297d5a0() {
   return (neuron0x2960290()*-0.0254386);
}

double NNfunction_ss_sLsL::synapse0x297d5e0() {
   return (neuron0x29605d0()*-0.0593191);
}

double NNfunction_ss_sLsL::synapse0x297d620() {
   return (neuron0x2960910()*0.0500219);
}

double NNfunction_ss_sLsL::synapse0x297d660() {
   return (neuron0x2960c50()*0.00890939);
}

double NNfunction_ss_sLsL::synapse0x2966110() {
   return (neuron0x295c120()*-0.025419);
}

double NNfunction_ss_sLsL::synapse0x2966150() {
   return (neuron0x295c3d0()*-0.282628);
}

double NNfunction_ss_sLsL::synapse0x2966190() {
   return (neuron0x295c710()*0.0266887);
}

double NNfunction_ss_sLsL::synapse0x29661d0() {
   return (neuron0x295ca50()*0.225466);
}

double NNfunction_ss_sLsL::synapse0x2966210() {
   return (neuron0x295cd90()*0.839557);
}

double NNfunction_ss_sLsL::synapse0x2966250() {
   return (neuron0x295d0d0()*-0.195627);
}

double NNfunction_ss_sLsL::synapse0x2966290() {
   return (neuron0x295d410()*-0.0355944);
}

double NNfunction_ss_sLsL::synapse0x29662d0() {
   return (neuron0x295d750()*0.601516);
}

double NNfunction_ss_sLsL::synapse0x297ddf0() {
   return (neuron0x295da90()*-0.0541735);
}

double NNfunction_ss_sLsL::synapse0x297de30() {
   return (neuron0x295ddd0()*-0.0554762);
}

double NNfunction_ss_sLsL::synapse0x297de70() {
   return (neuron0x295e110()*0.193233);
}

double NNfunction_ss_sLsL::synapse0x297deb0() {
   return (neuron0x295e450()*-0.168943);
}

double NNfunction_ss_sLsL::synapse0x297def0() {
   return (neuron0x295e790()*-1.63953);
}

double NNfunction_ss_sLsL::synapse0x297df30() {
   return (neuron0x295ead0()*-0.00221133);
}

double NNfunction_ss_sLsL::synapse0x297df70() {
   return (neuron0x295ee10()*0.403835);
}

double NNfunction_ss_sLsL::synapse0x297dfb0() {
   return (neuron0x295f150()*0.317083);
}

double NNfunction_ss_sLsL::synapse0x297d830() {
   return (neuron0x295f490()*-0.187396);
}

double NNfunction_ss_sLsL::synapse0x297d870() {
   return (neuron0x295f9f0()*0.157088);
}

double NNfunction_ss_sLsL::synapse0x297e100() {
   return (neuron0x295fc10()*0.208101);
}

double NNfunction_ss_sLsL::synapse0x297e140() {
   return (neuron0x295ff50()*-0.127677);
}

double NNfunction_ss_sLsL::synapse0x297e180() {
   return (neuron0x2960290()*-0.0569989);
}

double NNfunction_ss_sLsL::synapse0x297e1c0() {
   return (neuron0x29605d0()*-0.0579611);
}

double NNfunction_ss_sLsL::synapse0x297e200() {
   return (neuron0x2960910()*0.0489675);
}

double NNfunction_ss_sLsL::synapse0x297e240() {
   return (neuron0x2960c50()*-0.09196);
}

double NNfunction_ss_sLsL::synapse0x297e5c0() {
   return (neuron0x295c120()*-0.0196153);
}

double NNfunction_ss_sLsL::synapse0x297e600() {
   return (neuron0x295c3d0()*0.0870262);
}

double NNfunction_ss_sLsL::synapse0x297e640() {
   return (neuron0x295c710()*-0.2195);
}

double NNfunction_ss_sLsL::synapse0x297e680() {
   return (neuron0x295ca50()*-1.67595);
}

double NNfunction_ss_sLsL::synapse0x297e6c0() {
   return (neuron0x295cd90()*0.0750229);
}

double NNfunction_ss_sLsL::synapse0x297e700() {
   return (neuron0x295d0d0()*0.0443334);
}

double NNfunction_ss_sLsL::synapse0x297e740() {
   return (neuron0x295d410()*-0.0250039);
}

double NNfunction_ss_sLsL::synapse0x297e780() {
   return (neuron0x295d750()*0.0891366);
}

double NNfunction_ss_sLsL::synapse0x297e7c0() {
   return (neuron0x295da90()*0.00758747);
}

double NNfunction_ss_sLsL::synapse0x297e800() {
   return (neuron0x295ddd0()*0.0183535);
}

double NNfunction_ss_sLsL::synapse0x297e840() {
   return (neuron0x295e110()*-0.0253996);
}

double NNfunction_ss_sLsL::synapse0x297e880() {
   return (neuron0x295e450()*0.111138);
}

double NNfunction_ss_sLsL::synapse0x297e8c0() {
   return (neuron0x295e790()*0.437872);
}

double NNfunction_ss_sLsL::synapse0x297e900() {
   return (neuron0x295ead0()*-0.0159142);
}

double NNfunction_ss_sLsL::synapse0x297e940() {
   return (neuron0x295ee10()*0.0423559);
}

double NNfunction_ss_sLsL::synapse0x297e980() {
   return (neuron0x295f150()*0.00227285);
}

double NNfunction_ss_sLsL::synapse0x297e410() {
   return (neuron0x295f490()*-0.00961887);
}

double NNfunction_ss_sLsL::synapse0x297e450() {
   return (neuron0x295f9f0()*0.0356017);
}

double NNfunction_ss_sLsL::synapse0x297ead0() {
   return (neuron0x295fc10()*0.0271993);
}

double NNfunction_ss_sLsL::synapse0x297eb10() {
   return (neuron0x295ff50()*0.00789771);
}

double NNfunction_ss_sLsL::synapse0x297eb50() {
   return (neuron0x2960290()*-0.0016748);
}

double NNfunction_ss_sLsL::synapse0x297eb90() {
   return (neuron0x29605d0()*0.0362364);
}

double NNfunction_ss_sLsL::synapse0x297ebd0() {
   return (neuron0x2960910()*0.0217933);
}

double NNfunction_ss_sLsL::synapse0x297ec10() {
   return (neuron0x2960c50()*0.00378369);
}

double NNfunction_ss_sLsL::synapse0x297ef90() {
   return (neuron0x295c120()*-0.0671319);
}

double NNfunction_ss_sLsL::synapse0x297efd0() {
   return (neuron0x295c3d0()*-0.025491);
}

double NNfunction_ss_sLsL::synapse0x297f010() {
   return (neuron0x295c710()*-0.177229);
}

double NNfunction_ss_sLsL::synapse0x297f050() {
   return (neuron0x295ca50()*-0.810602);
}

double NNfunction_ss_sLsL::synapse0x297f090() {
   return (neuron0x295cd90()*-0.0589034);
}

double NNfunction_ss_sLsL::synapse0x297f0d0() {
   return (neuron0x295d0d0()*0.143054);
}

double NNfunction_ss_sLsL::synapse0x297f110() {
   return (neuron0x295d410()*-0.078873);
}

double NNfunction_ss_sLsL::synapse0x297f150() {
   return (neuron0x295d750()*0.175149);
}

double NNfunction_ss_sLsL::synapse0x297f190() {
   return (neuron0x295da90()*0.0535586);
}

double NNfunction_ss_sLsL::synapse0x297f1d0() {
   return (neuron0x295ddd0()*-0.740003);
}

double NNfunction_ss_sLsL::synapse0x297f210() {
   return (neuron0x295e110()*-0.421008);
}

double NNfunction_ss_sLsL::synapse0x297f250() {
   return (neuron0x295e450()*0.100988);
}

double NNfunction_ss_sLsL::synapse0x297f290() {
   return (neuron0x295e790()*0.0212433);
}

double NNfunction_ss_sLsL::synapse0x297f2d0() {
   return (neuron0x295ead0()*0.123651);
}

double NNfunction_ss_sLsL::synapse0x297f310() {
   return (neuron0x295ee10()*0.228728);
}

double NNfunction_ss_sLsL::synapse0x297f350() {
   return (neuron0x295f150()*-0.291953);
}

double NNfunction_ss_sLsL::synapse0x297ede0() {
   return (neuron0x295f490()*-0.438032);
}

double NNfunction_ss_sLsL::synapse0x297ee20() {
   return (neuron0x295f9f0()*-0.0275372);
}

double NNfunction_ss_sLsL::synapse0x296f950() {
   return (neuron0x295fc10()*0.131248);
}

double NNfunction_ss_sLsL::synapse0x296f990() {
   return (neuron0x295ff50()*-0.348614);
}

double NNfunction_ss_sLsL::synapse0x296f9d0() {
   return (neuron0x2960290()*0.0812865);
}

double NNfunction_ss_sLsL::synapse0x296fa10() {
   return (neuron0x29605d0()*-0.154537);
}

double NNfunction_ss_sLsL::synapse0x296fa50() {
   return (neuron0x2960910()*0.017123);
}

double NNfunction_ss_sLsL::synapse0x296fa90() {
   return (neuron0x2960c50()*-0.182764);
}

double NNfunction_ss_sLsL::synapse0x296fe10() {
   return (neuron0x295c120()*0.040701);
}

double NNfunction_ss_sLsL::synapse0x296fe50() {
   return (neuron0x295c3d0()*-0.0684987);
}

double NNfunction_ss_sLsL::synapse0x296fe90() {
   return (neuron0x295c710()*-0.75785);
}

double NNfunction_ss_sLsL::synapse0x296fed0() {
   return (neuron0x295ca50()*0.183731);
}

double NNfunction_ss_sLsL::synapse0x296ff10() {
   return (neuron0x295cd90()*-0.0442494);
}

double NNfunction_ss_sLsL::synapse0x296ff50() {
   return (neuron0x295d0d0()*0.0246109);
}

double NNfunction_ss_sLsL::synapse0x296ff90() {
   return (neuron0x295d410()*-0.00301266);
}

double NNfunction_ss_sLsL::synapse0x296ffd0() {
   return (neuron0x295d750()*-0.00410602);
}

double NNfunction_ss_sLsL::synapse0x2970010() {
   return (neuron0x295da90()*-0.036354);
}

double NNfunction_ss_sLsL::synapse0x2970050() {
   return (neuron0x295ddd0()*-0.102334);
}

double NNfunction_ss_sLsL::synapse0x2970090() {
   return (neuron0x295e110()*-0.118962);
}

double NNfunction_ss_sLsL::synapse0x29700d0() {
   return (neuron0x295e450()*0.050837);
}

double NNfunction_ss_sLsL::synapse0x2970110() {
   return (neuron0x295e790()*0.856358);
}

double NNfunction_ss_sLsL::synapse0x2970150() {
   return (neuron0x295ead0()*-0.0694082);
}

double NNfunction_ss_sLsL::synapse0x2970190() {
   return (neuron0x295ee10()*0.0711036);
}

double NNfunction_ss_sLsL::synapse0x29701d0() {
   return (neuron0x295f150()*0.152172);
}

double NNfunction_ss_sLsL::synapse0x296fc60() {
   return (neuron0x295f490()*-0.0260218);
}

double NNfunction_ss_sLsL::synapse0x296fca0() {
   return (neuron0x295f9f0()*0.0435651);
}

double NNfunction_ss_sLsL::synapse0x2970320() {
   return (neuron0x295fc10()*0.0122334);
}

double NNfunction_ss_sLsL::synapse0x2970360() {
   return (neuron0x295ff50()*0.0326707);
}

double NNfunction_ss_sLsL::synapse0x29703a0() {
   return (neuron0x2960290()*-0.0474501);
}

double NNfunction_ss_sLsL::synapse0x29703e0() {
   return (neuron0x29605d0()*-0.0546612);
}

double NNfunction_ss_sLsL::synapse0x2970420() {
   return (neuron0x2960910()*0.0120789);
}

double NNfunction_ss_sLsL::synapse0x2970460() {
   return (neuron0x2960c50()*0.0289319);
}

double NNfunction_ss_sLsL::synapse0x29707e0() {
   return (neuron0x295c120()*-0.0150852);
}

double NNfunction_ss_sLsL::synapse0x2970820() {
   return (neuron0x295c3d0()*-0.0851162);
}

double NNfunction_ss_sLsL::synapse0x2970860() {
   return (neuron0x295c710()*-0.392405);
}

double NNfunction_ss_sLsL::synapse0x29708a0() {
   return (neuron0x295ca50()*-0.389841);
}

double NNfunction_ss_sLsL::synapse0x29708e0() {
   return (neuron0x295cd90()*-0.0421479);
}

double NNfunction_ss_sLsL::synapse0x2970920() {
   return (neuron0x295d0d0()*-0.114989);
}

double NNfunction_ss_sLsL::synapse0x2970960() {
   return (neuron0x295d410()*-0.0774791);
}

double NNfunction_ss_sLsL::synapse0x29709a0() {
   return (neuron0x295d750()*0.0023724);
}

double NNfunction_ss_sLsL::synapse0x29709e0() {
   return (neuron0x295da90()*0.0228205);
}

double NNfunction_ss_sLsL::synapse0x2970a20() {
   return (neuron0x295ddd0()*-0.00279496);
}

double NNfunction_ss_sLsL::synapse0x2970a60() {
   return (neuron0x295e110()*0.023228);
}

double NNfunction_ss_sLsL::synapse0x2970aa0() {
   return (neuron0x295e450()*-0.0579536);
}

double NNfunction_ss_sLsL::synapse0x2970ae0() {
   return (neuron0x295e790()*-0.426835);
}

double NNfunction_ss_sLsL::synapse0x2970b20() {
   return (neuron0x295ead0()*0.0310543);
}

double NNfunction_ss_sLsL::synapse0x2970b60() {
   return (neuron0x295ee10()*-0.191485);
}

double NNfunction_ss_sLsL::synapse0x2970ba0() {
   return (neuron0x295f150()*-0.167198);
}

double NNfunction_ss_sLsL::synapse0x2970630() {
   return (neuron0x295f490()*0.0809695);
}

double NNfunction_ss_sLsL::synapse0x2970670() {
   return (neuron0x295f9f0()*-0.0128197);
}

double NNfunction_ss_sLsL::synapse0x2970cf0() {
   return (neuron0x295fc10()*0.00695014);
}

double NNfunction_ss_sLsL::synapse0x2970d30() {
   return (neuron0x295ff50()*-0.017837);
}

double NNfunction_ss_sLsL::synapse0x2970d70() {
   return (neuron0x2960290()*0.00303681);
}

double NNfunction_ss_sLsL::synapse0x2970db0() {
   return (neuron0x29605d0()*-0.000683337);
}

double NNfunction_ss_sLsL::synapse0x2970df0() {
   return (neuron0x2960910()*-0.0187797);
}

double NNfunction_ss_sLsL::synapse0x2970e30() {
   return (neuron0x2960c50()*0.0352111);
}

double NNfunction_ss_sLsL::synapse0x29711b0() {
   return (neuron0x295c120()*0.0124003);
}

double NNfunction_ss_sLsL::synapse0x29711f0() {
   return (neuron0x295c3d0()*-0.594057);
}

double NNfunction_ss_sLsL::synapse0x2971230() {
   return (neuron0x295c710()*0.130996);
}

double NNfunction_ss_sLsL::synapse0x2971270() {
   return (neuron0x295ca50()*-0.550797);
}

double NNfunction_ss_sLsL::synapse0x29712b0() {
   return (neuron0x295cd90()*-0.204528);
}

double NNfunction_ss_sLsL::synapse0x29712f0() {
   return (neuron0x295d0d0()*0.14892);
}

double NNfunction_ss_sLsL::synapse0x2971330() {
   return (neuron0x295d410()*0.0647797);
}

double NNfunction_ss_sLsL::synapse0x2971370() {
   return (neuron0x295d750()*0.497211);
}

double NNfunction_ss_sLsL::synapse0x29713b0() {
   return (neuron0x295da90()*-0.486451);
}

double NNfunction_ss_sLsL::synapse0x29713f0() {
   return (neuron0x295ddd0()*-1.21972);
}

double NNfunction_ss_sLsL::synapse0x2971430() {
   return (neuron0x295e110()*-0.91378);
}

double NNfunction_ss_sLsL::synapse0x2971470() {
   return (neuron0x295e450()*0.0454921);
}

double NNfunction_ss_sLsL::synapse0x29714b0() {
   return (neuron0x295e790()*-0.743135);
}

double NNfunction_ss_sLsL::synapse0x29714f0() {
   return (neuron0x295ead0()*0.410812);
}

double NNfunction_ss_sLsL::synapse0x2971530() {
   return (neuron0x295ee10()*0.953416);
}

double NNfunction_ss_sLsL::synapse0x2971570() {
   return (neuron0x295f150()*0.496923);
}

double NNfunction_ss_sLsL::synapse0x2971000() {
   return (neuron0x295f490()*0.0428958);
}

double NNfunction_ss_sLsL::synapse0x2971040() {
   return (neuron0x295f9f0()*-0.804382);
}

double NNfunction_ss_sLsL::synapse0x29716c0() {
   return (neuron0x295fc10()*0.748648);
}

double NNfunction_ss_sLsL::synapse0x2971700() {
   return (neuron0x295ff50()*0.650979);
}

double NNfunction_ss_sLsL::synapse0x2971740() {
   return (neuron0x2960290()*-0.328588);
}

double NNfunction_ss_sLsL::synapse0x2971780() {
   return (neuron0x29605d0()*0.0973134);
}

double NNfunction_ss_sLsL::synapse0x29717c0() {
   return (neuron0x2960910()*0.17615);
}

double NNfunction_ss_sLsL::synapse0x2971800() {
   return (neuron0x2960c50()*-0.00134142);
}

double NNfunction_ss_sLsL::synapse0x29836d0() {
   return (neuron0x295c120()*0.015107);
}

double NNfunction_ss_sLsL::synapse0x2983710() {
   return (neuron0x295c3d0()*-0.000488796);
}

double NNfunction_ss_sLsL::synapse0x2983750() {
   return (neuron0x295c710()*0.0185834);
}

double NNfunction_ss_sLsL::synapse0x2983790() {
   return (neuron0x295ca50()*0.0260046);
}

double NNfunction_ss_sLsL::synapse0x29837d0() {
   return (neuron0x295cd90()*0.000928726);
}

double NNfunction_ss_sLsL::synapse0x2983810() {
   return (neuron0x295d0d0()*-0.00384662);
}

double NNfunction_ss_sLsL::synapse0x2983850() {
   return (neuron0x295d410()*-0.00499511);
}

double NNfunction_ss_sLsL::synapse0x2983890() {
   return (neuron0x295d750()*-0.00374289);
}

double NNfunction_ss_sLsL::synapse0x29838d0() {
   return (neuron0x295da90()*0.00350738);
}

double NNfunction_ss_sLsL::synapse0x2983910() {
   return (neuron0x295ddd0()*-0.0207336);
}

double NNfunction_ss_sLsL::synapse0x2983950() {
   return (neuron0x295e110()*0.0191254);
}

double NNfunction_ss_sLsL::synapse0x2983990() {
   return (neuron0x295e450()*0.383611);
}

double NNfunction_ss_sLsL::synapse0x29839d0() {
   return (neuron0x295e790()*-0.142089);
}

double NNfunction_ss_sLsL::synapse0x2983a10() {
   return (neuron0x295ead0()*-0.0344866);
}

double NNfunction_ss_sLsL::synapse0x2983a50() {
   return (neuron0x295ee10()*0.210674);
}

double NNfunction_ss_sLsL::synapse0x2983a90() {
   return (neuron0x295f150()*0.236274);
}

double NNfunction_ss_sLsL::synapse0x2971840() {
   return (neuron0x295f490()*-0.0187394);
}

double NNfunction_ss_sLsL::synapse0x2971880() {
   return (neuron0x295f9f0()*0.213057);
}

double NNfunction_ss_sLsL::synapse0x2983be0() {
   return (neuron0x295fc10()*0.216709);
}

double NNfunction_ss_sLsL::synapse0x2983c20() {
   return (neuron0x295ff50()*-0.00950678);
}

double NNfunction_ss_sLsL::synapse0x2983c60() {
   return (neuron0x2960290()*-0.000338383);
}

double NNfunction_ss_sLsL::synapse0x2983ca0() {
   return (neuron0x29605d0()*-0.0144018);
}

double NNfunction_ss_sLsL::synapse0x2983ce0() {
   return (neuron0x2960910()*-0.0161902);
}

double NNfunction_ss_sLsL::synapse0x2983d20() {
   return (neuron0x2960c50()*0.00199048);
}

double NNfunction_ss_sLsL::synapse0x29840a0() {
   return (neuron0x295c120()*-0.111183);
}

double NNfunction_ss_sLsL::synapse0x29840e0() {
   return (neuron0x295c3d0()*-0.0243357);
}

double NNfunction_ss_sLsL::synapse0x2984120() {
   return (neuron0x295c710()*-0.622917);
}

double NNfunction_ss_sLsL::synapse0x2984160() {
   return (neuron0x295ca50()*-0.26119);
}

double NNfunction_ss_sLsL::synapse0x29841a0() {
   return (neuron0x295cd90()*0.189545);
}

double NNfunction_ss_sLsL::synapse0x29841e0() {
   return (neuron0x295d0d0()*0.541062);
}

double NNfunction_ss_sLsL::synapse0x2984220() {
   return (neuron0x295d410()*-0.160766);
}

double NNfunction_ss_sLsL::synapse0x2984260() {
   return (neuron0x295d750()*0.636626);
}

double NNfunction_ss_sLsL::synapse0x29842a0() {
   return (neuron0x295da90()*0.0578948);
}

double NNfunction_ss_sLsL::synapse0x29842e0() {
   return (neuron0x295ddd0()*-0.0143983);
}

double NNfunction_ss_sLsL::synapse0x2984320() {
   return (neuron0x295e110()*-0.137296);
}

double NNfunction_ss_sLsL::synapse0x2984360() {
   return (neuron0x295e450()*0.153071);
}

double NNfunction_ss_sLsL::synapse0x29843a0() {
   return (neuron0x295e790()*-0.0426747);
}

double NNfunction_ss_sLsL::synapse0x29843e0() {
   return (neuron0x295ead0()*-0.231576);
}

double NNfunction_ss_sLsL::synapse0x2984420() {
   return (neuron0x295ee10()*0.586373);
}

double NNfunction_ss_sLsL::synapse0x2984460() {
   return (neuron0x295f150()*0.279097);
}

double NNfunction_ss_sLsL::synapse0x2983ef0() {
   return (neuron0x295f490()*-0.42805);
}

double NNfunction_ss_sLsL::synapse0x2983f30() {
   return (neuron0x295f9f0()*0.0607388);
}

double NNfunction_ss_sLsL::synapse0x29845b0() {
   return (neuron0x295fc10()*-0.17787);
}

double NNfunction_ss_sLsL::synapse0x29845f0() {
   return (neuron0x295ff50()*-0.34008);
}

double NNfunction_ss_sLsL::synapse0x2984630() {
   return (neuron0x2960290()*-0.325431);
}

double NNfunction_ss_sLsL::synapse0x2984670() {
   return (neuron0x29605d0()*-0.142754);
}

double NNfunction_ss_sLsL::synapse0x29846b0() {
   return (neuron0x2960910()*0.216167);
}

double NNfunction_ss_sLsL::synapse0x29846f0() {
   return (neuron0x2960c50()*0.735144);
}

double NNfunction_ss_sLsL::synapse0x2984a70() {
   return (neuron0x295c120()*0.0249261);
}

double NNfunction_ss_sLsL::synapse0x2984ab0() {
   return (neuron0x295c3d0()*0.0558342);
}

double NNfunction_ss_sLsL::synapse0x2984af0() {
   return (neuron0x295c710()*-0.462983);
}

double NNfunction_ss_sLsL::synapse0x2984b30() {
   return (neuron0x295ca50()*-0.0171734);
}

double NNfunction_ss_sLsL::synapse0x2984b70() {
   return (neuron0x295cd90()*0.829563);
}

double NNfunction_ss_sLsL::synapse0x2984bb0() {
   return (neuron0x295d0d0()*0.122474);
}

double NNfunction_ss_sLsL::synapse0x2984bf0() {
   return (neuron0x295d410()*-1.20227);
}

double NNfunction_ss_sLsL::synapse0x2984c30() {
   return (neuron0x295d750()*-0.196341);
}

double NNfunction_ss_sLsL::synapse0x2984c70() {
   return (neuron0x295da90()*-0.157586);
}

double NNfunction_ss_sLsL::synapse0x2984cb0() {
   return (neuron0x295ddd0()*0.133284);
}

double NNfunction_ss_sLsL::synapse0x2984cf0() {
   return (neuron0x295e110()*0.0189755);
}

double NNfunction_ss_sLsL::synapse0x2984d30() {
   return (neuron0x295e450()*-0.471571);
}

double NNfunction_ss_sLsL::synapse0x2984d70() {
   return (neuron0x295e790()*0.930048);
}

double NNfunction_ss_sLsL::synapse0x2984db0() {
   return (neuron0x295ead0()*1.39897);
}

double NNfunction_ss_sLsL::synapse0x2984df0() {
   return (neuron0x295ee10()*-0.775327);
}

double NNfunction_ss_sLsL::synapse0x2984e30() {
   return (neuron0x295f150()*-1.1165);
}

double NNfunction_ss_sLsL::synapse0x29848c0() {
   return (neuron0x295f490()*-0.577773);
}

double NNfunction_ss_sLsL::synapse0x2984900() {
   return (neuron0x295f9f0()*-0.165623);
}

double NNfunction_ss_sLsL::synapse0x2984f80() {
   return (neuron0x295fc10()*-0.745023);
}

double NNfunction_ss_sLsL::synapse0x2984fc0() {
   return (neuron0x295ff50()*0.19421);
}

double NNfunction_ss_sLsL::synapse0x2985000() {
   return (neuron0x2960290()*-0.235644);
}

double NNfunction_ss_sLsL::synapse0x2985040() {
   return (neuron0x29605d0()*0.145368);
}

double NNfunction_ss_sLsL::synapse0x2985080() {
   return (neuron0x2960910()*0.0664456);
}

double NNfunction_ss_sLsL::synapse0x29850c0() {
   return (neuron0x2960c50()*-0.412169);
}

double NNfunction_ss_sLsL::synapse0x2985440() {
   return (neuron0x295c120()*-0.00552081);
}

double NNfunction_ss_sLsL::synapse0x2985480() {
   return (neuron0x295c3d0()*0.00937529);
}

double NNfunction_ss_sLsL::synapse0x29854c0() {
   return (neuron0x295c710()*-0.0993024);
}

double NNfunction_ss_sLsL::synapse0x2985500() {
   return (neuron0x295ca50()*0.00798118);
}

double NNfunction_ss_sLsL::synapse0x2985540() {
   return (neuron0x295cd90()*-0.00864226);
}

double NNfunction_ss_sLsL::synapse0x2985580() {
   return (neuron0x295d0d0()*0.00442746);
}

double NNfunction_ss_sLsL::synapse0x29855c0() {
   return (neuron0x295d410()*-0.00500789);
}

double NNfunction_ss_sLsL::synapse0x2985600() {
   return (neuron0x295d750()*-0.0166525);
}

double NNfunction_ss_sLsL::synapse0x2985640() {
   return (neuron0x295da90()*0.0222776);
}

double NNfunction_ss_sLsL::synapse0x2985680() {
   return (neuron0x295ddd0()*0.0012071);
}

double NNfunction_ss_sLsL::synapse0x29856c0() {
   return (neuron0x295e110()*-0.0278108);
}

double NNfunction_ss_sLsL::synapse0x2985700() {
   return (neuron0x295e450()*-0.0134863);
}

double NNfunction_ss_sLsL::synapse0x2985740() {
   return (neuron0x295e790()*3.38573);
}

double NNfunction_ss_sLsL::synapse0x2985780() {
   return (neuron0x295ead0()*0.01962);
}

double NNfunction_ss_sLsL::synapse0x29857c0() {
   return (neuron0x295ee10()*-0.00271069);
}

double NNfunction_ss_sLsL::synapse0x2985800() {
   return (neuron0x295f150()*-0.0378494);
}

double NNfunction_ss_sLsL::synapse0x2985290() {
   return (neuron0x295f490()*0.0161971);
}

double NNfunction_ss_sLsL::synapse0x29852d0() {
   return (neuron0x295f9f0()*-0.00995195);
}

double NNfunction_ss_sLsL::synapse0x2985950() {
   return (neuron0x295fc10()*-0.0161556);
}

double NNfunction_ss_sLsL::synapse0x2985990() {
   return (neuron0x295ff50()*0.0070178);
}

double NNfunction_ss_sLsL::synapse0x29859d0() {
   return (neuron0x2960290()*-0.00148624);
}

double NNfunction_ss_sLsL::synapse0x2985a10() {
   return (neuron0x29605d0()*0.00566069);
}

double NNfunction_ss_sLsL::synapse0x2985a50() {
   return (neuron0x2960910()*-0.00108081);
}

double NNfunction_ss_sLsL::synapse0x2985a90() {
   return (neuron0x2960c50()*0.00236295);
}

double NNfunction_ss_sLsL::synapse0x2962020() {
   return (neuron0x29610c0()*-1.17693);
}

double NNfunction_ss_sLsL::synapse0x2962060() {
   return (neuron0x2961a10()*1.78673);
}

double NNfunction_ss_sLsL::synapse0x2963540() {
   return (neuron0x29624f0()*0.32406);
}

double NNfunction_ss_sLsL::synapse0x2963580() {
   return (neuron0x2725840()*-1.06169);
}

double NNfunction_ss_sLsL::synapse0x2963f10() {
   return (neuron0x2963290()*1.57241);
}

double NNfunction_ss_sLsL::synapse0x2963f50() {
   return (neuron0x2963c60()*2.49633);
}

double NNfunction_ss_sLsL::synapse0x2964ce0() {
   return (neuron0x2964a30()*-1.51507);
}

double NNfunction_ss_sLsL::synapse0x2964d20() {
   return (neuron0x2965400()*0.185011);
}

double NNfunction_ss_sLsL::synapse0x29656b0() {
   return (neuron0x2965dd0()*-1.46817);
}

double NNfunction_ss_sLsL::synapse0x29656f0() {
   return (neuron0x29668b0()*-0.248432);
}

double NNfunction_ss_sLsL::synapse0x2966080() {
   return (neuron0x2967280()*0.979231);
}

double NNfunction_ss_sLsL::synapse0x29660c0() {
   return (neuron0x2964360()*3.45257);
}

double NNfunction_ss_sLsL::synapse0x2966b60() {
   return (neuron0x2968e30()*0.889575);
}

double NNfunction_ss_sLsL::synapse0x2966ba0() {
   return (neuron0x2969800()*2.05699);
}

double NNfunction_ss_sLsL::synapse0x2967530() {
   return (neuron0x296a1d0()*-0.0339469);
}

double NNfunction_ss_sLsL::synapse0x2967570() {
   return (neuron0x296aba0()*1.82516);
}

double NNfunction_ss_sLsL::synapse0x2964610() {
   return (neuron0x296c9b0()*0.114282);
}

double NNfunction_ss_sLsL::synapse0x2964650() {
   return (neuron0x296cc90()*0.375425);
}

double NNfunction_ss_sLsL::synapse0x29690e0() {
   return (neuron0x296d660()*-1.4346);
}

double NNfunction_ss_sLsL::synapse0x2969120() {
   return (neuron0x296e030()*-0.367368);
}

double NNfunction_ss_sLsL::synapse0x2969ab0() {
   return (neuron0x296ea00()*-2.16763);
}

double NNfunction_ss_sLsL::synapse0x2969af0() {
   return (neuron0x296f3d0()*-0.127262);
}

double NNfunction_ss_sLsL::synapse0x296a480() {
   return (neuron0x2967f20()*1.60591);
}

double NNfunction_ss_sLsL::synapse0x296a4c0() {
   return (neuron0x29688f0()*1.56417);
}

double NNfunction_ss_sLsL::synapse0x296ae50() {
   return (neuron0x2972160()*0.284624);
}

double NNfunction_ss_sLsL::synapse0x296ae90() {
   return (neuron0x2972b30()*1.52608);
}

double NNfunction_ss_sLsL::synapse0x295f030() {
   return (neuron0x2973500()*-1.69227);
}

double NNfunction_ss_sLsL::synapse0x295f070() {
   return (neuron0x2973ed0()*1.51709);
}

double NNfunction_ss_sLsL::synapse0x296cf40() {
   return (neuron0x29748a0()*1.01012);
}

double NNfunction_ss_sLsL::synapse0x296cf80() {
   return (neuron0x2975270()*1.53934);
}

double NNfunction_ss_sLsL::synapse0x296d910() {
   return (neuron0x2975c40()*-2.01187);
}

double NNfunction_ss_sLsL::synapse0x296d950() {
   return (neuron0x2976610()*-0.769713);
}

double NNfunction_ss_sLsL::synapse0x296e2e0() {
   return (neuron0x296c6a0()*-1.81747);
}

double NNfunction_ss_sLsL::synapse0x296e320() {
   return (neuron0x29791f0()*2.74878);
}

double NNfunction_ss_sLsL::synapse0x296ecb0() {
   return (neuron0x2979bc0()*2.80542);
}

double NNfunction_ss_sLsL::synapse0x296ecf0() {
   return (neuron0x297a590()*1.77863);
}

double NNfunction_ss_sLsL::synapse0x296f680() {
   return (neuron0x297af60()*-0.1218);
}

double NNfunction_ss_sLsL::synapse0x296f6c0() {
   return (neuron0x297b930()*1.38321);
}

double NNfunction_ss_sLsL::synapse0x29681d0() {
   return (neuron0x297c300()*-0.0805168);
}

double NNfunction_ss_sLsL::synapse0x2968210() {
   return (neuron0x297ccd0()*-0.399809);
}

double NNfunction_ss_sLsL::synapse0x2971a80() {
   return (neuron0x297d6a0()*1.57333);
}

double NNfunction_ss_sLsL::synapse0x2971ac0() {
   return (neuron0x297e280()*-0.386869);
}

double NNfunction_ss_sLsL::synapse0x2972410() {
   return (neuron0x297ec50()*0.148797);
}

double NNfunction_ss_sLsL::synapse0x2972450() {
   return (neuron0x296fad0()*1.1973);
}

double NNfunction_ss_sLsL::synapse0x2972de0() {
   return (neuron0x29704a0()*0.407613);
}

double NNfunction_ss_sLsL::synapse0x2972e20() {
   return (neuron0x2970e70()*2.04952);
}

double NNfunction_ss_sLsL::synapse0x29737b0() {
   return (neuron0x29834b0()*-0.639579);
}

double NNfunction_ss_sLsL::synapse0x29737f0() {
   return (neuron0x2983d60()*0.0041386);
}

double NNfunction_ss_sLsL::synapse0x2974180() {
   return (neuron0x2984730()*-1.24056);
}

double NNfunction_ss_sLsL::synapse0x29741c0() {
   return (neuron0x2985100()*0.605672);
}

double NNfunction_ss_sLsL::synapse0x29768c0() {
   return (neuron0x29610c0()*0.0378058);
}

double NNfunction_ss_sLsL::synapse0x2976900() {
   return (neuron0x2961a10()*0.110701);
}

double NNfunction_ss_sLsL::synapse0x296be80() {
   return (neuron0x29624f0()*1.96478);
}

double NNfunction_ss_sLsL::synapse0x296bec0() {
   return (neuron0x2725840()*0.265282);
}

double NNfunction_ss_sLsL::synapse0x29794a0() {
   return (neuron0x2963290()*0.21615);
}

double NNfunction_ss_sLsL::synapse0x29794e0() {
   return (neuron0x2963c60()*0.0245342);
}

double NNfunction_ss_sLsL::synapse0x2979e70() {
   return (neuron0x2964a30()*-0.302093);
}

double NNfunction_ss_sLsL::synapse0x2979eb0() {
   return (neuron0x2965400()*-0.255991);
}

double NNfunction_ss_sLsL::synapse0x297a840() {
   return (neuron0x2965dd0()*0.416272);
}

double NNfunction_ss_sLsL::synapse0x297a880() {
   return (neuron0x29668b0()*-1.62975);
}

double NNfunction_ss_sLsL::synapse0x297b210() {
   return (neuron0x2967280()*1.52374);
}

double NNfunction_ss_sLsL::synapse0x297b250() {
   return (neuron0x2964360()*1.01106);
}

double NNfunction_ss_sLsL::synapse0x297bbe0() {
   return (neuron0x2968e30()*-2.91701);
}

double NNfunction_ss_sLsL::synapse0x297bc20() {
   return (neuron0x2969800()*3.43556);
}

double NNfunction_ss_sLsL::synapse0x297c5b0() {
   return (neuron0x296a1d0()*1.54858);
}

double NNfunction_ss_sLsL::synapse0x297c5f0() {
   return (neuron0x296aba0()*-0.22022);
}

double NNfunction_ss_sLsL::synapse0x297cf80() {
   return (neuron0x296c9b0()*0.166401);
}

double NNfunction_ss_sLsL::synapse0x297cfc0() {
   return (neuron0x296cc90()*1.69422);
}

double NNfunction_ss_sLsL::synapse0x297d950() {
   return (neuron0x296d660()*0.311592);
}

double NNfunction_ss_sLsL::synapse0x297d990() {
   return (neuron0x296e030()*2.70148);
}

double NNfunction_ss_sLsL::synapse0x297e530() {
   return (neuron0x296ea00()*0.227677);
}

double NNfunction_ss_sLsL::synapse0x297e570() {
   return (neuron0x296f3d0()*-0.606742);
}

double NNfunction_ss_sLsL::synapse0x297ef00() {
   return (neuron0x2967f20()*-0.0104838);
}

double NNfunction_ss_sLsL::synapse0x297ef40() {
   return (neuron0x29688f0()*0.0433924);
}

double NNfunction_ss_sLsL::synapse0x296fd80() {
   return (neuron0x2972160()*0.128259);
}

double NNfunction_ss_sLsL::synapse0x296fdc0() {
   return (neuron0x2972b30()*-0.203301);
}

double NNfunction_ss_sLsL::synapse0x2970750() {
   return (neuron0x2973500()*-0.244943);
}

double NNfunction_ss_sLsL::synapse0x2970790() {
   return (neuron0x2973ed0()*-1.5581);
}

double NNfunction_ss_sLsL::synapse0x2971120() {
   return (neuron0x29748a0()*0.674737);
}

double NNfunction_ss_sLsL::synapse0x2971160() {
   return (neuron0x2975270()*0.346558);
}

double NNfunction_ss_sLsL::synapse0x2983640() {
   return (neuron0x2975c40()*0.00160719);
}

double NNfunction_ss_sLsL::synapse0x2983680() {
   return (neuron0x2976610()*0.0021902);
}

double NNfunction_ss_sLsL::synapse0x2984010() {
   return (neuron0x296c6a0()*0.00269736);
}

double NNfunction_ss_sLsL::synapse0x2984050() {
   return (neuron0x29791f0()*0.092027);
}

double NNfunction_ss_sLsL::synapse0x29849e0() {
   return (neuron0x2979bc0()*-0.104249);
}

double NNfunction_ss_sLsL::synapse0x2984a20() {
   return (neuron0x297a590()*0.0148947);
}

double NNfunction_ss_sLsL::synapse0x29853b0() {
   return (neuron0x297af60()*-0.0254242);
}

double NNfunction_ss_sLsL::synapse0x29853f0() {
   return (neuron0x297b930()*0.550107);
}

double NNfunction_ss_sLsL::synapse0x29612e0() {
   return (neuron0x297c300()*-0.312897);
}

double NNfunction_ss_sLsL::synapse0x2961320() {
   return (neuron0x297ccd0()*0.872402);
}

double NNfunction_ss_sLsL::synapse0x2974b50() {
   return (neuron0x297d6a0()*-0.265028);
}

double NNfunction_ss_sLsL::synapse0x2974b90() {
   return (neuron0x297e280()*-3.70356);
}

double NNfunction_ss_sLsL::synapse0x2985ad0() {
   return (neuron0x297ec50()*-0.918813);
}

double NNfunction_ss_sLsL::synapse0x2985b10() {
   return (neuron0x296fad0()*1.3923);
}

double NNfunction_ss_sLsL::synapse0x2985b50() {
   return (neuron0x29704a0()*-0.0938399);
}

double NNfunction_ss_sLsL::synapse0x2985b90() {
   return (neuron0x2970e70()*0.29478);
}

double NNfunction_ss_sLsL::synapse0x298ca40() {
   return (neuron0x29834b0()*-0.385019);
}

double NNfunction_ss_sLsL::synapse0x298ca80() {
   return (neuron0x2983d60()*0.593246);
}

double NNfunction_ss_sLsL::synapse0x298cac0() {
   return (neuron0x2984730()*0.215898);
}

double NNfunction_ss_sLsL::synapse0x298cb00() {
   return (neuron0x2985100()*1.57791);
}

double NNfunction_ss_sLsL::synapse0x298ce80() {
   return (neuron0x29610c0()*-0.0336452);
}

double NNfunction_ss_sLsL::synapse0x298cec0() {
   return (neuron0x2961a10()*0.0421845);
}

double NNfunction_ss_sLsL::synapse0x298cf00() {
   return (neuron0x29624f0()*-0.224007);
}

double NNfunction_ss_sLsL::synapse0x298cf40() {
   return (neuron0x2725840()*0.0745768);
}

double NNfunction_ss_sLsL::synapse0x298cf80() {
   return (neuron0x2963290()*0.00422215);
}

double NNfunction_ss_sLsL::synapse0x298cfc0() {
   return (neuron0x2963c60()*0.0262632);
}

double NNfunction_ss_sLsL::synapse0x298d000() {
   return (neuron0x2964a30()*0.0719797);
}

double NNfunction_ss_sLsL::synapse0x298d040() {
   return (neuron0x2965400()*0.00233071);
}

double NNfunction_ss_sLsL::synapse0x298d080() {
   return (neuron0x2965dd0()*0.0296032);
}

double NNfunction_ss_sLsL::synapse0x298d0c0() {
   return (neuron0x29668b0()*-0.00220336);
}

double NNfunction_ss_sLsL::synapse0x298d100() {
   return (neuron0x2967280()*-0.0337309);
}

double NNfunction_ss_sLsL::synapse0x298d140() {
   return (neuron0x2964360()*0.0371574);
}

double NNfunction_ss_sLsL::synapse0x298d180() {
   return (neuron0x2968e30()*0.369852);
}

double NNfunction_ss_sLsL::synapse0x298d1c0() {
   return (neuron0x2969800()*-0.317477);
}

double NNfunction_ss_sLsL::synapse0x298d200() {
   return (neuron0x296a1d0()*-0.410161);
}

double NNfunction_ss_sLsL::synapse0x298d240() {
   return (neuron0x296aba0()*0.00270709);
}

double NNfunction_ss_sLsL::synapse0x298ccd0() {
   return (neuron0x296c9b0()*0.0488429);
}

double NNfunction_ss_sLsL::synapse0x298cd10() {
   return (neuron0x296cc90()*0.0231448);
}

double NNfunction_ss_sLsL::synapse0x298d390() {
   return (neuron0x296d660()*0.0184407);
}

double NNfunction_ss_sLsL::synapse0x298d3d0() {
   return (neuron0x296e030()*-0.317763);
}

double NNfunction_ss_sLsL::synapse0x298d410() {
   return (neuron0x296ea00()*0.0126849);
}

double NNfunction_ss_sLsL::synapse0x298d450() {
   return (neuron0x296f3d0()*0.0517254);
}

double NNfunction_ss_sLsL::synapse0x298d490() {
   return (neuron0x2967f20()*0.206251);
}

double NNfunction_ss_sLsL::synapse0x298d4d0() {
   return (neuron0x29688f0()*-0.00645892);
}

double NNfunction_ss_sLsL::synapse0x298d510() {
   return (neuron0x2972160()*0.0623317);
}

double NNfunction_ss_sLsL::synapse0x298d550() {
   return (neuron0x2972b30()*0.0394654);
}

double NNfunction_ss_sLsL::synapse0x298d590() {
   return (neuron0x2973500()*-0.00495954);
}

double NNfunction_ss_sLsL::synapse0x298d5d0() {
   return (neuron0x2973ed0()*-0.0211708);
}

double NNfunction_ss_sLsL::synapse0x298d610() {
   return (neuron0x29748a0()*-0.745574);
}

double NNfunction_ss_sLsL::synapse0x298d650() {
   return (neuron0x2975270()*0.018987);
}

double NNfunction_ss_sLsL::synapse0x298d690() {
   return (neuron0x2975c40()*-0.000722287);
}

double NNfunction_ss_sLsL::synapse0x298d6d0() {
   return (neuron0x2976610()*0.0514243);
}

double NNfunction_ss_sLsL::synapse0x298d280() {
   return (neuron0x296c6a0()*-1.3288);
}

double NNfunction_ss_sLsL::synapse0x298d2c0() {
   return (neuron0x29791f0()*0.0449861);
}

double NNfunction_ss_sLsL::synapse0x298d300() {
   return (neuron0x2979bc0()*0.00341636);
}

double NNfunction_ss_sLsL::synapse0x298d340() {
   return (neuron0x297a590()*0.0298522);
}

double NNfunction_ss_sLsL::synapse0x298d920() {
   return (neuron0x297af60()*2.34143);
}

double NNfunction_ss_sLsL::synapse0x298d960() {
   return (neuron0x297b930()*0.495263);
}

double NNfunction_ss_sLsL::synapse0x298d9a0() {
   return (neuron0x297c300()*0.0476578);
}

double NNfunction_ss_sLsL::synapse0x298d9e0() {
   return (neuron0x297ccd0()*-0.242074);
}

double NNfunction_ss_sLsL::synapse0x298da20() {
   return (neuron0x297d6a0()*0.122562);
}

double NNfunction_ss_sLsL::synapse0x298da60() {
   return (neuron0x297e280()*0.264444);
}

double NNfunction_ss_sLsL::synapse0x298daa0() {
   return (neuron0x297ec50()*-0.077298);
}

double NNfunction_ss_sLsL::synapse0x298dae0() {
   return (neuron0x296fad0()*0.0720759);
}

double NNfunction_ss_sLsL::synapse0x298db20() {
   return (neuron0x29704a0()*-0.068621);
}

double NNfunction_ss_sLsL::synapse0x298db60() {
   return (neuron0x2970e70()*0.06042);
}

double NNfunction_ss_sLsL::synapse0x298dba0() {
   return (neuron0x29834b0()*-0.663212);
}

double NNfunction_ss_sLsL::synapse0x298dbe0() {
   return (neuron0x2983d60()*-0.0145831);
}

double NNfunction_ss_sLsL::synapse0x298dc20() {
   return (neuron0x2984730()*-0.0250014);
}

double NNfunction_ss_sLsL::synapse0x298dc60() {
   return (neuron0x2985100()*-1.07767);
}

double NNfunction_ss_sLsL::synapse0x298dfe0() {
   return (neuron0x29610c0()*0.0547824);
}

double NNfunction_ss_sLsL::synapse0x298e020() {
   return (neuron0x2961a10()*-0.0655127);
}

double NNfunction_ss_sLsL::synapse0x298e060() {
   return (neuron0x29624f0()*0.350703);
}

double NNfunction_ss_sLsL::synapse0x298e0a0() {
   return (neuron0x2725840()*0.402279);
}

double NNfunction_ss_sLsL::synapse0x298e0e0() {
   return (neuron0x2963290()*-0.0127841);
}

double NNfunction_ss_sLsL::synapse0x298e120() {
   return (neuron0x2963c60()*-0.039922);
}

double NNfunction_ss_sLsL::synapse0x298e160() {
   return (neuron0x2964a30()*-0.0849301);
}

double NNfunction_ss_sLsL::synapse0x298e1a0() {
   return (neuron0x2965400()*-0.0171116);
}

double NNfunction_ss_sLsL::synapse0x298e1e0() {
   return (neuron0x2965dd0()*-0.0311479);
}

double NNfunction_ss_sLsL::synapse0x298e220() {
   return (neuron0x29668b0()*-0.0355539);
}

double NNfunction_ss_sLsL::synapse0x298e260() {
   return (neuron0x2967280()*-0.250643);
}

double NNfunction_ss_sLsL::synapse0x298e2a0() {
   return (neuron0x2964360()*-0.535307);
}

double NNfunction_ss_sLsL::synapse0x298e2e0() {
   return (neuron0x2968e30()*-0.834702);
}

double NNfunction_ss_sLsL::synapse0x298e320() {
   return (neuron0x2969800()*-0.48444);
}

double NNfunction_ss_sLsL::synapse0x298e360() {
   return (neuron0x296a1d0()*0.652698);
}

double NNfunction_ss_sLsL::synapse0x298e3a0() {
   return (neuron0x296aba0()*-0.00228171);
}

double NNfunction_ss_sLsL::synapse0x298de30() {
   return (neuron0x296c9b0()*-0.0815011);
}

double NNfunction_ss_sLsL::synapse0x298de70() {
   return (neuron0x296cc90()*-0.732235);
}

double NNfunction_ss_sLsL::synapse0x298e4f0() {
   return (neuron0x296d660()*-0.0188634);
}

double NNfunction_ss_sLsL::synapse0x298e530() {
   return (neuron0x296e030()*0.415542);
}

double NNfunction_ss_sLsL::synapse0x298e570() {
   return (neuron0x296ea00()*-0.0163123);
}

double NNfunction_ss_sLsL::synapse0x298e5b0() {
   return (neuron0x296f3d0()*-0.0730565);
}

double NNfunction_ss_sLsL::synapse0x298e5f0() {
   return (neuron0x2967f20()*-0.280745);
}

double NNfunction_ss_sLsL::synapse0x298e630() {
   return (neuron0x29688f0()*-0.000362691);
}

double NNfunction_ss_sLsL::synapse0x298e670() {
   return (neuron0x2972160()*-0.10583);
}

double NNfunction_ss_sLsL::synapse0x298e6b0() {
   return (neuron0x2972b30()*-0.0637447);
}

double NNfunction_ss_sLsL::synapse0x298e6f0() {
   return (neuron0x2973500()*0.0164044);
}

double NNfunction_ss_sLsL::synapse0x298e730() {
   return (neuron0x2973ed0()*0.126668);
}

double NNfunction_ss_sLsL::synapse0x298e770() {
   return (neuron0x29748a0()*-0.0809576);
}

double NNfunction_ss_sLsL::synapse0x298e7b0() {
   return (neuron0x2975270()*-0.0362753);
}

double NNfunction_ss_sLsL::synapse0x298e7f0() {
   return (neuron0x2975c40()*0.0101368);
}

double NNfunction_ss_sLsL::synapse0x298e830() {
   return (neuron0x2976610()*-0.118461);
}

double NNfunction_ss_sLsL::synapse0x298e3e0() {
   return (neuron0x296c6a0()*-0.836207);
}

double NNfunction_ss_sLsL::synapse0x298e420() {
   return (neuron0x29791f0()*-0.0771976);
}

double NNfunction_ss_sLsL::synapse0x298e460() {
   return (neuron0x2979bc0()*-0.0125326);
}

double NNfunction_ss_sLsL::synapse0x298e4a0() {
   return (neuron0x297a590()*-0.046716);
}

double NNfunction_ss_sLsL::synapse0x298ea80() {
   return (neuron0x297af60()*1.39291);
}

double NNfunction_ss_sLsL::synapse0x298eac0() {
   return (neuron0x297b930()*-0.58271);
}

double NNfunction_ss_sLsL::synapse0x298eb00() {
   return (neuron0x297c300()*-0.0439301);
}

double NNfunction_ss_sLsL::synapse0x298eb40() {
   return (neuron0x297ccd0()*0.221335);
}

double NNfunction_ss_sLsL::synapse0x298eb80() {
   return (neuron0x297d6a0()*-0.191564);
}

double NNfunction_ss_sLsL::synapse0x298ebc0() {
   return (neuron0x297e280()*-0.261278);
}

double NNfunction_ss_sLsL::synapse0x298ec00() {
   return (neuron0x297ec50()*0.113965);
}

double NNfunction_ss_sLsL::synapse0x298ec40() {
   return (neuron0x296fad0()*0.0722071);
}

double NNfunction_ss_sLsL::synapse0x298ec80() {
   return (neuron0x29704a0()*-0.232999);
}

double NNfunction_ss_sLsL::synapse0x298ecc0() {
   return (neuron0x2970e70()*-0.113322);
}

double NNfunction_ss_sLsL::synapse0x298ed00() {
   return (neuron0x29834b0()*-0.545576);
}

double NNfunction_ss_sLsL::synapse0x298ed40() {
   return (neuron0x2983d60()*0.038765);
}

double NNfunction_ss_sLsL::synapse0x298ed80() {
   return (neuron0x2984730()*0.043356);
}

double NNfunction_ss_sLsL::synapse0x298edc0() {
   return (neuron0x2985100()*-0.04466);
}

double NNfunction_ss_sLsL::synapse0x298f140() {
   return (neuron0x29610c0()*0.0785643);
}

double NNfunction_ss_sLsL::synapse0x298f180() {
   return (neuron0x2961a10()*-0.0516004);
}

double NNfunction_ss_sLsL::synapse0x298f1c0() {
   return (neuron0x29624f0()*-1.04766);
}

double NNfunction_ss_sLsL::synapse0x298f200() {
   return (neuron0x2725840()*-2.60418);
}

double NNfunction_ss_sLsL::synapse0x298f240() {
   return (neuron0x2963290()*0.0101555);
}

double NNfunction_ss_sLsL::synapse0x298f280() {
   return (neuron0x2963c60()*-0.0901083);
}

double NNfunction_ss_sLsL::synapse0x298f2c0() {
   return (neuron0x2964a30()*-0.664214);
}

double NNfunction_ss_sLsL::synapse0x298f300() {
   return (neuron0x2965400()*0.840596);
}

double NNfunction_ss_sLsL::synapse0x298f340() {
   return (neuron0x2965dd0()*0.00559859);
}

double NNfunction_ss_sLsL::synapse0x298f380() {
   return (neuron0x29668b0()*-0.187283);
}

double NNfunction_ss_sLsL::synapse0x298f3c0() {
   return (neuron0x2967280()*0.90708);
}

double NNfunction_ss_sLsL::synapse0x298f400() {
   return (neuron0x2964360()*3.29657);
}

double NNfunction_ss_sLsL::synapse0x298f440() {
   return (neuron0x2968e30()*0.000222622);
}

double NNfunction_ss_sLsL::synapse0x298f480() {
   return (neuron0x2969800()*5.32448);
}

double NNfunction_ss_sLsL::synapse0x298f4c0() {
   return (neuron0x296a1d0()*1.32381);
}

double NNfunction_ss_sLsL::synapse0x298f500() {
   return (neuron0x296aba0()*-0.0862605);
}

double NNfunction_ss_sLsL::synapse0x298ef90() {
   return (neuron0x296c9b0()*-0.166919);
}

double NNfunction_ss_sLsL::synapse0x298efd0() {
   return (neuron0x296cc90()*2.35954);
}

double NNfunction_ss_sLsL::synapse0x298f650() {
   return (neuron0x296d660()*-0.0221756);
}

double NNfunction_ss_sLsL::synapse0x298f690() {
   return (neuron0x296e030()*1.17972);
}

double NNfunction_ss_sLsL::synapse0x298f6d0() {
   return (neuron0x296ea00()*0.0219238);
}

double NNfunction_ss_sLsL::synapse0x298f710() {
   return (neuron0x296f3d0()*-0.164263);
}

double NNfunction_ss_sLsL::synapse0x298f750() {
   return (neuron0x2967f20()*-0.84993);
}

double NNfunction_ss_sLsL::synapse0x298f790() {
   return (neuron0x29688f0()*0.0327809);
}

double NNfunction_ss_sLsL::synapse0x298f7d0() {
   return (neuron0x2972160()*-0.203227);
}

double NNfunction_ss_sLsL::synapse0x298f810() {
   return (neuron0x2972b30()*0.00125033);
}

double NNfunction_ss_sLsL::synapse0x298f850() {
   return (neuron0x2973500()*0.00418912);
}

double NNfunction_ss_sLsL::synapse0x298f890() {
   return (neuron0x2973ed0()*-1.27677);
}

double NNfunction_ss_sLsL::synapse0x298f8d0() {
   return (neuron0x29748a0()*2.38724);
}

double NNfunction_ss_sLsL::synapse0x298f910() {
   return (neuron0x2975270()*-0.0153244);
}

double NNfunction_ss_sLsL::synapse0x298f950() {
   return (neuron0x2975c40()*0.0621863);
}

double NNfunction_ss_sLsL::synapse0x298f990() {
   return (neuron0x2976610()*0.375331);
}

double NNfunction_ss_sLsL::synapse0x298f540() {
   return (neuron0x296c6a0()*0.541224);
}

double NNfunction_ss_sLsL::synapse0x298f580() {
   return (neuron0x29791f0()*-0.121547);
}

double NNfunction_ss_sLsL::synapse0x298f5c0() {
   return (neuron0x2979bc0()*-0.00968195);
}

double NNfunction_ss_sLsL::synapse0x298f600() {
   return (neuron0x297a590()*-0.0494233);
}

double NNfunction_ss_sLsL::synapse0x298fbe0() {
   return (neuron0x297af60()*-2.85057);
}

double NNfunction_ss_sLsL::synapse0x298fc20() {
   return (neuron0x297b930()*-4.67938);
}

double NNfunction_ss_sLsL::synapse0x298fc60() {
   return (neuron0x297c300()*0.0088247);
}

double NNfunction_ss_sLsL::synapse0x298fca0() {
   return (neuron0x297ccd0()*0.938356);
}

double NNfunction_ss_sLsL::synapse0x298fce0() {
   return (neuron0x297d6a0()*0.0824158);
}

double NNfunction_ss_sLsL::synapse0x298fd20() {
   return (neuron0x297e280()*-2.89059);
}

double NNfunction_ss_sLsL::synapse0x298fd60() {
   return (neuron0x297ec50()*0.322795);
}

double NNfunction_ss_sLsL::synapse0x298fda0() {
   return (neuron0x296fad0()*-1.74194);
}

double NNfunction_ss_sLsL::synapse0x298fde0() {
   return (neuron0x29704a0()*1.81384);
}

double NNfunction_ss_sLsL::synapse0x298fe20() {
   return (neuron0x2970e70()*-0.208704);
}

double NNfunction_ss_sLsL::synapse0x298fe60() {
   return (neuron0x29834b0()*-0.765691);
}

double NNfunction_ss_sLsL::synapse0x298fea0() {
   return (neuron0x2983d60()*0.148908);
}

double NNfunction_ss_sLsL::synapse0x298fee0() {
   return (neuron0x2984730()*-0.021086);
}

double NNfunction_ss_sLsL::synapse0x298ff20() {
   return (neuron0x2985100()*2.31497);
}

double NNfunction_ss_sLsL::synapse0x2990180() {
   return (neuron0x298c300()*6.94517);
}

double NNfunction_ss_sLsL::synapse0x29901c0() {
   return (neuron0x298c6a0()*-3.90053);
}

double NNfunction_ss_sLsL::synapse0x2990200() {
   return (neuron0x298cb40()*5.67765);
}

double NNfunction_ss_sLsL::synapse0x2990240() {
   return (neuron0x298dca0()*3.52477);
}

double NNfunction_ss_sLsL::synapse0x2990280() {
   return (neuron0x298ee00()*-8.40864);
}

