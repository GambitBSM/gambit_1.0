#include "NNfunction_ss_cLdR.h"
#include <cmath>

double NNfunction_ss_cLdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9821)/15.0383;
   input1 = (in1 - 41.6388)/787.044;
   input2 = (in2 - 388.746)/500.436;
   input3 = (in3 - 208.543)/624.53;
   input4 = (in4 - 728.922)/722.678;
   input5 = (in5 - 633.114)/690.985;
   input6 = (in6 - 637.86)/694.634;
   input7 = (in7 - 641.844)/697.454;
   input8 = (in8 - 643.596)/735.296;
   input9 = (in9 - 630.534)/715.828;
   input10 = (in10 - 651.799)/742.648;
   input11 = (in11 - 651.273)/620.793;
   input12 = (in12 - 480.883)/302.532;
   input13 = (in13 - 490.04)/367.934;
   input14 = (in14 - 633.069)/566.087;
   input15 = (in15 - 632.276)/564.628;
   input16 = (in16 - 449.459)/394.837;
   input17 = (in17 - 478.019)/303.775;
   input18 = (in18 - 658.545)/643.931;
   input19 = (in19 - 664.839)/631;
   input20 = (in20 - -167.744)/393.982;
   input21 = (in21 - -215.515)/878.403;
   input22 = (in22 - 2.03094)/898.531;
   input23 = (in23 - -41.0515)/496.449;
   switch(index) {
     case 0:
         return neuron0x318c210();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLdR::Value(int index, double* input) {
   input0 = (input[0] - 22.9821)/15.0383;
   input1 = (input[1] - 41.6388)/787.044;
   input2 = (input[2] - 388.746)/500.436;
   input3 = (input[3] - 208.543)/624.53;
   input4 = (input[4] - 728.922)/722.678;
   input5 = (input[5] - 633.114)/690.985;
   input6 = (input[6] - 637.86)/694.634;
   input7 = (input[7] - 641.844)/697.454;
   input8 = (input[8] - 643.596)/735.296;
   input9 = (input[9] - 630.534)/715.828;
   input10 = (input[10] - 651.799)/742.648;
   input11 = (input[11] - 651.273)/620.793;
   input12 = (input[12] - 480.883)/302.532;
   input13 = (input[13] - 490.04)/367.934;
   input14 = (input[14] - 633.069)/566.087;
   input15 = (input[15] - 632.276)/564.628;
   input16 = (input[16] - 449.459)/394.837;
   input17 = (input[17] - 478.019)/303.775;
   input18 = (input[18] - 658.545)/643.931;
   input19 = (input[19] - 664.839)/631;
   input20 = (input[20] - -167.744)/393.982;
   input21 = (input[21] - -215.515)/878.403;
   input22 = (input[22] - 2.03094)/898.531;
   input23 = (input[23] - -41.0515)/496.449;
   switch(index) {
     case 0:
         return neuron0x318c210();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLdR::neuron0x3158300() {
   return input0;
}

double NNfunction_ss_cLdR::neuron0x3158640() {
   return input1;
}

double NNfunction_ss_cLdR::neuron0x3158980() {
   return input2;
}

double NNfunction_ss_cLdR::neuron0x3158cc0() {
   return input3;
}

double NNfunction_ss_cLdR::neuron0x3159000() {
   return input4;
}

double NNfunction_ss_cLdR::neuron0x3159340() {
   return input5;
}

double NNfunction_ss_cLdR::neuron0x3159680() {
   return input6;
}

double NNfunction_ss_cLdR::neuron0x31599c0() {
   return input7;
}

double NNfunction_ss_cLdR::neuron0x3159d00() {
   return input8;
}

double NNfunction_ss_cLdR::neuron0x315a040() {
   return input9;
}

double NNfunction_ss_cLdR::neuron0x315a380() {
   return input10;
}

double NNfunction_ss_cLdR::neuron0x315a6c0() {
   return input11;
}

double NNfunction_ss_cLdR::neuron0x315aa00() {
   return input12;
}

double NNfunction_ss_cLdR::neuron0x315ad40() {
   return input13;
}

double NNfunction_ss_cLdR::neuron0x315b080() {
   return input14;
}

double NNfunction_ss_cLdR::neuron0x315b3c0() {
   return input15;
}

double NNfunction_ss_cLdR::neuron0x315b700() {
   return input16;
}

double NNfunction_ss_cLdR::neuron0x315bc60() {
   return input17;
}

double NNfunction_ss_cLdR::neuron0x315be80() {
   return input18;
}

double NNfunction_ss_cLdR::neuron0x315c1c0() {
   return input19;
}

double NNfunction_ss_cLdR::neuron0x315c500() {
   return input20;
}

double NNfunction_ss_cLdR::neuron0x315c840() {
   return input21;
}

double NNfunction_ss_cLdR::neuron0x315cb80() {
   return input22;
}

double NNfunction_ss_cLdR::neuron0x315cec0() {
   return input23;
}

double NNfunction_ss_cLdR::input0x315d330() {
   double input = -0.379093;
   input += synapse0x31581c0();
   input += synapse0x3158200();
   input += synapse0x315d5e0();
   input += synapse0x315d620();
   input += synapse0x315d660();
   input += synapse0x315d6a0();
   input += synapse0x315d6e0();
   input += synapse0x315d720();
   input += synapse0x315d760();
   input += synapse0x315d7a0();
   input += synapse0x315d7e0();
   input += synapse0x315d820();
   input += synapse0x315d860();
   input += synapse0x315d8a0();
   input += synapse0x315d8e0();
   input += synapse0x315d920();
   input += synapse0x3158130();
   input += synapse0x3158170();
   input += synapse0x2f134f0();
   input += synapse0x2f13530();
   input += synapse0x315db80();
   input += synapse0x315dbc0();
   input += synapse0x315dc00();
   input += synapse0x315dc40();
   return input;
}

double NNfunction_ss_cLdR::neuron0x315d330() {
   double input = input0x315d330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x315dc80() {
   double input = -0.934854;
   input += synapse0x315dfc0();
   input += synapse0x315e000();
   input += synapse0x315e040();
   input += synapse0x315e080();
   input += synapse0x315e0c0();
   input += synapse0x315e100();
   input += synapse0x315e140();
   input += synapse0x315e180();
   input += synapse0x315e1c0();
   input += synapse0x315da70();
   input += synapse0x315dab0();
   input += synapse0x315daf0();
   input += synapse0x315db30();
   input += synapse0x315e410();
   input += synapse0x315e450();
   input += synapse0x315e490();
   input += synapse0x315de10();
   input += synapse0x315de50();
   input += synapse0x315e5e0();
   input += synapse0x315e620();
   input += synapse0x315e660();
   input += synapse0x315e6a0();
   input += synapse0x315e6e0();
   input += synapse0x315e720();
   return input;
}

double NNfunction_ss_cLdR::neuron0x315dc80() {
   double input = input0x315dc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x315e760() {
   double input = 2.53802;
   input += synapse0x315eaa0();
   input += synapse0x315eae0();
   input += synapse0x315eb20();
   input += synapse0x315eb60();
   input += synapse0x315eba0();
   input += synapse0x315ebe0();
   input += synapse0x315ec20();
   input += synapse0x315ec60();
   input += synapse0x315eca0();
   input += synapse0x315ece0();
   input += synapse0x315ed20();
   input += synapse0x315ed60();
   input += synapse0x315eda0();
   input += synapse0x315ede0();
   input += synapse0x315ee20();
   input += synapse0x315ee60();
   input += synapse0x315e8f0();
   input += synapse0x315e930();
   input += synapse0x2f13b90();
   input += synapse0x2f21460();
   input += synapse0x2f214a0();
   input += synapse0x3147390();
   input += synapse0x31473d0();
   input += synapse0x3147410();
   return input;
}

double NNfunction_ss_cLdR::neuron0x315e760() {
   double input = input0x315e760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x315e200() {
   double input = 0.133781;
   input += synapse0x2f21ce0();
   input += synapse0x315e390();
   input += synapse0x315e3d0();
   input += synapse0x315efb0();
   input += synapse0x315eff0();
   input += synapse0x315f030();
   input += synapse0x315f070();
   input += synapse0x315f0b0();
   input += synapse0x315f0f0();
   input += synapse0x315f130();
   input += synapse0x315f170();
   input += synapse0x315f1b0();
   input += synapse0x315f1f0();
   input += synapse0x315f230();
   input += synapse0x315f270();
   input += synapse0x315f2b0();
   input += synapse0x3158240();
   input += synapse0x3158280();
   input += synapse0x31582c0();
   input += synapse0x315f400();
   input += synapse0x315f440();
   input += synapse0x315f480();
   input += synapse0x315f4c0();
   input += synapse0x315f500();
   return input;
}

double NNfunction_ss_cLdR::neuron0x315e200() {
   double input = input0x315e200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x315f540() {
   double input = 2.04658;
   input += synapse0x315f880();
   input += synapse0x315f8c0();
   input += synapse0x315f900();
   input += synapse0x315f940();
   input += synapse0x315f980();
   input += synapse0x315f9c0();
   input += synapse0x315fa00();
   input += synapse0x315fa40();
   input += synapse0x315fa80();
   input += synapse0x315fac0();
   input += synapse0x315fb00();
   input += synapse0x315fb40();
   input += synapse0x315fb80();
   input += synapse0x315fbc0();
   input += synapse0x315fc00();
   input += synapse0x315fc40();
   input += synapse0x315f6d0();
   input += synapse0x315f710();
   input += synapse0x315fd90();
   input += synapse0x315fdd0();
   input += synapse0x315fe10();
   input += synapse0x315fe50();
   input += synapse0x315fe90();
   input += synapse0x315fed0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x315f540() {
   double input = input0x315f540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x315ff10() {
   double input = 0.233481;
   input += synapse0x3160250();
   input += synapse0x3160290();
   input += synapse0x31602d0();
   input += synapse0x3160310();
   input += synapse0x3160350();
   input += synapse0x3160390();
   input += synapse0x31603d0();
   input += synapse0x3160410();
   input += synapse0x3160450();
   input += synapse0x2f217b0();
   input += synapse0x2f217f0();
   input += synapse0x2f21830();
   input += synapse0x2f21870();
   input += synapse0x2f218b0();
   input += synapse0x2f218f0();
   input += synapse0x2f21930();
   input += synapse0x31600a0();
   input += synapse0x31600e0();
   input += synapse0x2f21a80();
   input += synapse0x2f21ac0();
   input += synapse0x2f21b00();
   input += synapse0x2f21b40();
   input += synapse0x2f21b80();
   input += synapse0x3160ca0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x315ff10() {
   double input = input0x315ff10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3160ce0() {
   double input = -0.249251;
   input += synapse0x3161020();
   input += synapse0x3161060();
   input += synapse0x31610a0();
   input += synapse0x31610e0();
   input += synapse0x3161120();
   input += synapse0x3161160();
   input += synapse0x31611a0();
   input += synapse0x31611e0();
   input += synapse0x3161220();
   input += synapse0x3161260();
   input += synapse0x31612a0();
   input += synapse0x31612e0();
   input += synapse0x3161320();
   input += synapse0x3161360();
   input += synapse0x31613a0();
   input += synapse0x31613e0();
   input += synapse0x3160e70();
   input += synapse0x3160eb0();
   input += synapse0x3161530();
   input += synapse0x3161570();
   input += synapse0x31615b0();
   input += synapse0x31615f0();
   input += synapse0x3161630();
   input += synapse0x3161670();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3160ce0() {
   double input = input0x3160ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x31616b0() {
   double input = 0.270604;
   input += synapse0x31619f0();
   input += synapse0x3161a30();
   input += synapse0x3161a70();
   input += synapse0x3161ab0();
   input += synapse0x3161af0();
   input += synapse0x3161b30();
   input += synapse0x3161b70();
   input += synapse0x3161bb0();
   input += synapse0x3161bf0();
   input += synapse0x3161c30();
   input += synapse0x3161c70();
   input += synapse0x3161cb0();
   input += synapse0x3161cf0();
   input += synapse0x3161d30();
   input += synapse0x3161d70();
   input += synapse0x3161db0();
   input += synapse0x3161840();
   input += synapse0x3161880();
   input += synapse0x3161f00();
   input += synapse0x3161f40();
   input += synapse0x3161f80();
   input += synapse0x3161fc0();
   input += synapse0x3162000();
   input += synapse0x3162040();
   return input;
}

double NNfunction_ss_cLdR::neuron0x31616b0() {
   double input = input0x31616b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3162080() {
   double input = -0.689838;
   input += synapse0x315bb50();
   input += synapse0x315bb90();
   input += synapse0x315bbd0();
   input += synapse0x315bc10();
   input += synapse0x31625d0();
   input += synapse0x3162610();
   input += synapse0x3162650();
   input += synapse0x3162690();
   input += synapse0x31626d0();
   input += synapse0x3162710();
   input += synapse0x3162750();
   input += synapse0x3162790();
   input += synapse0x31627d0();
   input += synapse0x3162810();
   input += synapse0x3162850();
   input += synapse0x3162890();
   input += synapse0x3162210();
   input += synapse0x3162250();
   input += synapse0x31629e0();
   input += synapse0x3162a20();
   input += synapse0x3162a60();
   input += synapse0x3162aa0();
   input += synapse0x3162ae0();
   input += synapse0x3162b20();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3162080() {
   double input = input0x3162080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3162b60() {
   double input = 0.749336;
   input += synapse0x3162ea0();
   input += synapse0x3162ee0();
   input += synapse0x3162f20();
   input += synapse0x3162f60();
   input += synapse0x3162fa0();
   input += synapse0x3162fe0();
   input += synapse0x3163020();
   input += synapse0x3163060();
   input += synapse0x31630a0();
   input += synapse0x31630e0();
   input += synapse0x3163120();
   input += synapse0x3163160();
   input += synapse0x31631a0();
   input += synapse0x31631e0();
   input += synapse0x3163220();
   input += synapse0x3163260();
   input += synapse0x3162cf0();
   input += synapse0x3162d30();
   input += synapse0x31633b0();
   input += synapse0x31633f0();
   input += synapse0x3163430();
   input += synapse0x3163470();
   input += synapse0x31634b0();
   input += synapse0x31634f0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3162b60() {
   double input = input0x3162b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3163530() {
   double input = -0.535475;
   input += synapse0x3163870();
   input += synapse0x31638b0();
   input += synapse0x31638f0();
   input += synapse0x3163930();
   input += synapse0x3163970();
   input += synapse0x31639b0();
   input += synapse0x31639f0();
   input += synapse0x3163a30();
   input += synapse0x3163a70();
   input += synapse0x3163ab0();
   input += synapse0x3163af0();
   input += synapse0x3163b30();
   input += synapse0x3163b70();
   input += synapse0x3163bb0();
   input += synapse0x3163bf0();
   input += synapse0x3163c30();
   input += synapse0x31636c0();
   input += synapse0x3163700();
   input += synapse0x3160490();
   input += synapse0x31604d0();
   input += synapse0x3160510();
   input += synapse0x3160550();
   input += synapse0x3160590();
   input += synapse0x31605d0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3163530() {
   double input = input0x3163530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3160610() {
   double input = 0.86162;
   input += synapse0x3160950();
   input += synapse0x3160990();
   input += synapse0x31609d0();
   input += synapse0x3160a10();
   input += synapse0x3160a50();
   input += synapse0x3160a90();
   input += synapse0x3160ad0();
   input += synapse0x3160b10();
   input += synapse0x3160b50();
   input += synapse0x3160b90();
   input += synapse0x3160bd0();
   input += synapse0x3160c10();
   input += synapse0x3160c50();
   input += synapse0x3164d90();
   input += synapse0x3164dd0();
   input += synapse0x3164e10();
   input += synapse0x31607a0();
   input += synapse0x31607e0();
   input += synapse0x3164f60();
   input += synapse0x3164fa0();
   input += synapse0x3164fe0();
   input += synapse0x3165020();
   input += synapse0x3165060();
   input += synapse0x31650a0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3160610() {
   double input = input0x3160610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x31650e0() {
   double input = -0.450691;
   input += synapse0x3165420();
   input += synapse0x3165460();
   input += synapse0x31654a0();
   input += synapse0x31654e0();
   input += synapse0x3165520();
   input += synapse0x3165560();
   input += synapse0x31655a0();
   input += synapse0x31655e0();
   input += synapse0x3165620();
   input += synapse0x3165660();
   input += synapse0x31656a0();
   input += synapse0x31656e0();
   input += synapse0x3165720();
   input += synapse0x3165760();
   input += synapse0x31657a0();
   input += synapse0x31657e0();
   input += synapse0x3165270();
   input += synapse0x31652b0();
   input += synapse0x3165930();
   input += synapse0x3165970();
   input += synapse0x31659b0();
   input += synapse0x31659f0();
   input += synapse0x3165a30();
   input += synapse0x3165a70();
   return input;
}

double NNfunction_ss_cLdR::neuron0x31650e0() {
   double input = input0x31650e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3165ab0() {
   double input = -1.0679;
   input += synapse0x3165df0();
   input += synapse0x3165e30();
   input += synapse0x3165e70();
   input += synapse0x3165eb0();
   input += synapse0x3165ef0();
   input += synapse0x3165f30();
   input += synapse0x3165f70();
   input += synapse0x3165fb0();
   input += synapse0x3165ff0();
   input += synapse0x3166030();
   input += synapse0x3166070();
   input += synapse0x31660b0();
   input += synapse0x31660f0();
   input += synapse0x3166130();
   input += synapse0x3166170();
   input += synapse0x31661b0();
   input += synapse0x3165c40();
   input += synapse0x3165c80();
   input += synapse0x3166300();
   input += synapse0x3166340();
   input += synapse0x3166380();
   input += synapse0x31663c0();
   input += synapse0x3166400();
   input += synapse0x3166440();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3165ab0() {
   double input = input0x3165ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3166480() {
   double input = -3.5116;
   input += synapse0x31667c0();
   input += synapse0x3166800();
   input += synapse0x3166840();
   input += synapse0x3166880();
   input += synapse0x31668c0();
   input += synapse0x3166900();
   input += synapse0x3166940();
   input += synapse0x3166980();
   input += synapse0x31669c0();
   input += synapse0x3166a00();
   input += synapse0x3166a40();
   input += synapse0x3166a80();
   input += synapse0x3166ac0();
   input += synapse0x3166b00();
   input += synapse0x3166b40();
   input += synapse0x3166b80();
   input += synapse0x3166610();
   input += synapse0x3166650();
   input += synapse0x3166cd0();
   input += synapse0x3166d10();
   input += synapse0x3166d50();
   input += synapse0x3166d90();
   input += synapse0x3166dd0();
   input += synapse0x3166e10();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3166480() {
   double input = input0x3166480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3166e50() {
   double input = 2.06782;
   input += synapse0x3167190();
   input += synapse0x3158520();
   input += synapse0x3158560();
   input += synapse0x3158860();
   input += synapse0x31588a0();
   input += synapse0x3158ba0();
   input += synapse0x3158be0();
   input += synapse0x3158ee0();
   input += synapse0x3158f20();
   input += synapse0x3159220();
   input += synapse0x3159260();
   input += synapse0x3159560();
   input += synapse0x31595a0();
   input += synapse0x31598a0();
   input += synapse0x31598e0();
   input += synapse0x3159be0();
   input += synapse0x3159c20();
   input += synapse0x3159f20();
   input += synapse0x3159f60();
   input += synapse0x315a260();
   input += synapse0x315a2a0();
   input += synapse0x315a5a0();
   input += synapse0x315a5e0();
   input += synapse0x315a8e0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3166e50() {
   double input = input0x3166e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3168c60() {
   double input = 1.12037;
   input += synapse0x315a920();
   input += synapse0x315b5e0();
   input += synapse0x315b620();
   input += synapse0x3166fe0();
   input += synapse0x3167020();
   input += synapse0x315b920();
   input += synapse0x315b960();
   input += synapse0x2f133d0();
   input += synapse0x2f13410();
   input += synapse0x315c0a0();
   input += synapse0x315c0e0();
   input += synapse0x315c3e0();
   input += synapse0x315c420();
   input += synapse0x315c720();
   input += synapse0x315c760();
   input += synapse0x315ca60();
   input += synapse0x315caa0();
   input += synapse0x315cda0();
   input += synapse0x315cde0();
   input += synapse0x315d0e0();
   input += synapse0x315d120();
   input += synapse0x315ac20();
   input += synapse0x315ac60();
   input += synapse0x3168f00();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3168c60() {
   double input = input0x3168c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3168f40() {
   double input = -2.56847;
   input += synapse0x3169280();
   input += synapse0x31692c0();
   input += synapse0x3169300();
   input += synapse0x3169340();
   input += synapse0x3169380();
   input += synapse0x31693c0();
   input += synapse0x3169400();
   input += synapse0x3169440();
   input += synapse0x3169480();
   input += synapse0x31694c0();
   input += synapse0x3169500();
   input += synapse0x3169540();
   input += synapse0x3169580();
   input += synapse0x31695c0();
   input += synapse0x3169600();
   input += synapse0x3169640();
   input += synapse0x31690d0();
   input += synapse0x3169110();
   input += synapse0x3169790();
   input += synapse0x31697d0();
   input += synapse0x3169810();
   input += synapse0x3169850();
   input += synapse0x3169890();
   input += synapse0x31698d0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3168f40() {
   double input = input0x3168f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3169910() {
   double input = 0.550615;
   input += synapse0x3169c50();
   input += synapse0x3169c90();
   input += synapse0x3169cd0();
   input += synapse0x3169d10();
   input += synapse0x3169d50();
   input += synapse0x3169d90();
   input += synapse0x3169dd0();
   input += synapse0x3169e10();
   input += synapse0x3169e50();
   input += synapse0x3169e90();
   input += synapse0x3169ed0();
   input += synapse0x3169f10();
   input += synapse0x3169f50();
   input += synapse0x3169f90();
   input += synapse0x3169fd0();
   input += synapse0x316a010();
   input += synapse0x3169aa0();
   input += synapse0x3169ae0();
   input += synapse0x316a160();
   input += synapse0x316a1a0();
   input += synapse0x316a1e0();
   input += synapse0x316a220();
   input += synapse0x316a260();
   input += synapse0x316a2a0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3169910() {
   double input = input0x3169910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x316a2e0() {
   double input = 1.1527;
   input += synapse0x316a620();
   input += synapse0x316a660();
   input += synapse0x316a6a0();
   input += synapse0x316a6e0();
   input += synapse0x316a720();
   input += synapse0x316a760();
   input += synapse0x316a7a0();
   input += synapse0x316a7e0();
   input += synapse0x316a820();
   input += synapse0x316a860();
   input += synapse0x316a8a0();
   input += synapse0x316a8e0();
   input += synapse0x316a920();
   input += synapse0x316a960();
   input += synapse0x316a9a0();
   input += synapse0x316a9e0();
   input += synapse0x316a470();
   input += synapse0x316a4b0();
   input += synapse0x316ab30();
   input += synapse0x316ab70();
   input += synapse0x316abb0();
   input += synapse0x316abf0();
   input += synapse0x316ac30();
   input += synapse0x316ac70();
   return input;
}

double NNfunction_ss_cLdR::neuron0x316a2e0() {
   double input = input0x316a2e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x316acb0() {
   double input = 1.73449;
   input += synapse0x316aff0();
   input += synapse0x316b030();
   input += synapse0x316b070();
   input += synapse0x316b0b0();
   input += synapse0x316b0f0();
   input += synapse0x316b130();
   input += synapse0x316b170();
   input += synapse0x316b1b0();
   input += synapse0x316b1f0();
   input += synapse0x316b230();
   input += synapse0x316b270();
   input += synapse0x316b2b0();
   input += synapse0x316b2f0();
   input += synapse0x316b330();
   input += synapse0x316b370();
   input += synapse0x316b3b0();
   input += synapse0x316ae40();
   input += synapse0x316ae80();
   input += synapse0x316b500();
   input += synapse0x316b540();
   input += synapse0x316b580();
   input += synapse0x316b5c0();
   input += synapse0x316b600();
   input += synapse0x316b640();
   return input;
}

double NNfunction_ss_cLdR::neuron0x316acb0() {
   double input = input0x316acb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x316b680() {
   double input = 0.592593;
   input += synapse0x316b9c0();
   input += synapse0x316ba00();
   input += synapse0x316ba40();
   input += synapse0x316ba80();
   input += synapse0x316bac0();
   input += synapse0x316bb00();
   input += synapse0x316bb40();
   input += synapse0x316bb80();
   input += synapse0x316bbc0();
   input += synapse0x3163d80();
   input += synapse0x3163dc0();
   input += synapse0x3163e00();
   input += synapse0x3163e40();
   input += synapse0x3163e80();
   input += synapse0x3163ec0();
   input += synapse0x3163f00();
   input += synapse0x316b810();
   input += synapse0x316b850();
   input += synapse0x3164050();
   input += synapse0x3164090();
   input += synapse0x31640d0();
   input += synapse0x3164110();
   input += synapse0x3164150();
   input += synapse0x3164190();
   return input;
}

double NNfunction_ss_cLdR::neuron0x316b680() {
   double input = input0x316b680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x31641d0() {
   double input = -0.129587;
   input += synapse0x3164510();
   input += synapse0x3164550();
   input += synapse0x3164590();
   input += synapse0x31645d0();
   input += synapse0x3164610();
   input += synapse0x3164650();
   input += synapse0x3164690();
   input += synapse0x31646d0();
   input += synapse0x3164710();
   input += synapse0x3164750();
   input += synapse0x3164790();
   input += synapse0x31647d0();
   input += synapse0x3164810();
   input += synapse0x3164850();
   input += synapse0x3164890();
   input += synapse0x31648d0();
   input += synapse0x3164360();
   input += synapse0x31643a0();
   input += synapse0x3164a20();
   input += synapse0x3164a60();
   input += synapse0x3164aa0();
   input += synapse0x3164ae0();
   input += synapse0x3164b20();
   input += synapse0x3164b60();
   return input;
}

double NNfunction_ss_cLdR::neuron0x31641d0() {
   double input = input0x31641d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3164ba0() {
   double input = -0.50046;
   input += synapse0x3164d30();
   input += synapse0x316ddc0();
   input += synapse0x316de00();
   input += synapse0x316de40();
   input += synapse0x316de80();
   input += synapse0x316dec0();
   input += synapse0x316df00();
   input += synapse0x316df40();
   input += synapse0x316df80();
   input += synapse0x316dfc0();
   input += synapse0x316e000();
   input += synapse0x316e040();
   input += synapse0x316e080();
   input += synapse0x316e0c0();
   input += synapse0x316e100();
   input += synapse0x316e140();
   input += synapse0x316dc10();
   input += synapse0x316dc50();
   input += synapse0x316e290();
   input += synapse0x316e2d0();
   input += synapse0x316e310();
   input += synapse0x316e350();
   input += synapse0x316e390();
   input += synapse0x316e3d0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3164ba0() {
   double input = input0x3164ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x316e410() {
   double input = -0.679471;
   input += synapse0x316e750();
   input += synapse0x316e790();
   input += synapse0x316e7d0();
   input += synapse0x316e810();
   input += synapse0x316e850();
   input += synapse0x316e890();
   input += synapse0x316e8d0();
   input += synapse0x316e910();
   input += synapse0x316e950();
   input += synapse0x316e990();
   input += synapse0x316e9d0();
   input += synapse0x316ea10();
   input += synapse0x316ea50();
   input += synapse0x316ea90();
   input += synapse0x316ead0();
   input += synapse0x316eb10();
   input += synapse0x316e5a0();
   input += synapse0x316e5e0();
   input += synapse0x316ec60();
   input += synapse0x316eca0();
   input += synapse0x316ece0();
   input += synapse0x316ed20();
   input += synapse0x316ed60();
   input += synapse0x316eda0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x316e410() {
   double input = input0x316e410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x316ede0() {
   double input = -0.881846;
   input += synapse0x316f120();
   input += synapse0x316f160();
   input += synapse0x316f1a0();
   input += synapse0x316f1e0();
   input += synapse0x316f220();
   input += synapse0x316f260();
   input += synapse0x316f2a0();
   input += synapse0x316f2e0();
   input += synapse0x316f320();
   input += synapse0x316f360();
   input += synapse0x316f3a0();
   input += synapse0x316f3e0();
   input += synapse0x316f420();
   input += synapse0x316f460();
   input += synapse0x316f4a0();
   input += synapse0x316f4e0();
   input += synapse0x316ef70();
   input += synapse0x316efb0();
   input += synapse0x316f630();
   input += synapse0x316f670();
   input += synapse0x316f6b0();
   input += synapse0x316f6f0();
   input += synapse0x316f730();
   input += synapse0x316f770();
   return input;
}

double NNfunction_ss_cLdR::neuron0x316ede0() {
   double input = input0x316ede0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x316f7b0() {
   double input = 1.30746;
   input += synapse0x316faf0();
   input += synapse0x316fb30();
   input += synapse0x316fb70();
   input += synapse0x316fbb0();
   input += synapse0x316fbf0();
   input += synapse0x316fc30();
   input += synapse0x316fc70();
   input += synapse0x316fcb0();
   input += synapse0x316fcf0();
   input += synapse0x316fd30();
   input += synapse0x316fd70();
   input += synapse0x316fdb0();
   input += synapse0x316fdf0();
   input += synapse0x316fe30();
   input += synapse0x316fe70();
   input += synapse0x316feb0();
   input += synapse0x316f940();
   input += synapse0x316f980();
   input += synapse0x3170000();
   input += synapse0x3170040();
   input += synapse0x3170080();
   input += synapse0x31700c0();
   input += synapse0x3170100();
   input += synapse0x3170140();
   return input;
}

double NNfunction_ss_cLdR::neuron0x316f7b0() {
   double input = input0x316f7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3170180() {
   double input = -0.168249;
   input += synapse0x31704c0();
   input += synapse0x3170500();
   input += synapse0x3170540();
   input += synapse0x3170580();
   input += synapse0x31705c0();
   input += synapse0x3170600();
   input += synapse0x3170640();
   input += synapse0x3170680();
   input += synapse0x31706c0();
   input += synapse0x3170700();
   input += synapse0x3170740();
   input += synapse0x3170780();
   input += synapse0x31707c0();
   input += synapse0x3170800();
   input += synapse0x3170840();
   input += synapse0x3170880();
   input += synapse0x3170310();
   input += synapse0x3170350();
   input += synapse0x31709d0();
   input += synapse0x3170a10();
   input += synapse0x3170a50();
   input += synapse0x3170a90();
   input += synapse0x3170ad0();
   input += synapse0x3170b10();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3170180() {
   double input = input0x3170180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3170b50() {
   double input = 0.155057;
   input += synapse0x3170e90();
   input += synapse0x3170ed0();
   input += synapse0x3170f10();
   input += synapse0x3170f50();
   input += synapse0x3170f90();
   input += synapse0x3170fd0();
   input += synapse0x3171010();
   input += synapse0x3171050();
   input += synapse0x3171090();
   input += synapse0x31710d0();
   input += synapse0x3171110();
   input += synapse0x3171150();
   input += synapse0x3171190();
   input += synapse0x31711d0();
   input += synapse0x3171210();
   input += synapse0x3171250();
   input += synapse0x3170ce0();
   input += synapse0x3170d20();
   input += synapse0x31713a0();
   input += synapse0x31713e0();
   input += synapse0x3171420();
   input += synapse0x3171460();
   input += synapse0x31714a0();
   input += synapse0x31714e0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3170b50() {
   double input = input0x3170b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3171520() {
   double input = 0.758047;
   input += synapse0x3171860();
   input += synapse0x31718a0();
   input += synapse0x31718e0();
   input += synapse0x3171920();
   input += synapse0x3171960();
   input += synapse0x31719a0();
   input += synapse0x31719e0();
   input += synapse0x3171a20();
   input += synapse0x3171a60();
   input += synapse0x3171aa0();
   input += synapse0x3171ae0();
   input += synapse0x3171b20();
   input += synapse0x3171b60();
   input += synapse0x3171ba0();
   input += synapse0x3171be0();
   input += synapse0x3171c20();
   input += synapse0x31716b0();
   input += synapse0x31716f0();
   input += synapse0x3171d70();
   input += synapse0x3171db0();
   input += synapse0x3171df0();
   input += synapse0x3171e30();
   input += synapse0x3171e70();
   input += synapse0x3171eb0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3171520() {
   double input = input0x3171520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3171ef0() {
   double input = -0.802932;
   input += synapse0x3172230();
   input += synapse0x3172270();
   input += synapse0x31722b0();
   input += synapse0x31722f0();
   input += synapse0x3172330();
   input += synapse0x3172370();
   input += synapse0x31723b0();
   input += synapse0x31723f0();
   input += synapse0x3172430();
   input += synapse0x3172470();
   input += synapse0x31724b0();
   input += synapse0x31724f0();
   input += synapse0x3172530();
   input += synapse0x3172570();
   input += synapse0x31725b0();
   input += synapse0x31725f0();
   input += synapse0x3172080();
   input += synapse0x31720c0();
   input += synapse0x3172740();
   input += synapse0x3172780();
   input += synapse0x31727c0();
   input += synapse0x3172800();
   input += synapse0x3172840();
   input += synapse0x3172880();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3171ef0() {
   double input = input0x3171ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x31728c0() {
   double input = 0.907473;
   input += synapse0x3172c00();
   input += synapse0x31671d0();
   input += synapse0x3167210();
   input += synapse0x3167250();
   input += synapse0x31674a0();
   input += synapse0x31674e0();
   input += synapse0x3167520();
   input += synapse0x3167770();
   input += synapse0x31677b0();
   input += synapse0x3167a00();
   input += synapse0x3167a40();
   input += synapse0x3167a80();
   input += synapse0x3167cd0();
   input += synapse0x3167d10();
   input += synapse0x3167f60();
   input += synapse0x3167fa0();
   input += synapse0x3172a50();
   input += synapse0x3172a90();
   input += synapse0x31680f0();
   input += synapse0x3168600();
   input += synapse0x3168640();
   input += synapse0x3168680();
   input += synapse0x31688d0();
   input += synapse0x3168910();
   return input;
}

double NNfunction_ss_cLdR::neuron0x31728c0() {
   double input = input0x31728c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3168950() {
   double input = -1.51495;
   input += synapse0x31681c0();
   input += synapse0x3168200();
   input += synapse0x3168240();
   input += synapse0x3168280();
   input += synapse0x3168c00();
   input += synapse0x3174f50();
   input += synapse0x3174f90();
   input += synapse0x3174fd0();
   input += synapse0x3175010();
   input += synapse0x3175050();
   input += synapse0x3175090();
   input += synapse0x31750d0();
   input += synapse0x3175110();
   input += synapse0x3175150();
   input += synapse0x3175190();
   input += synapse0x31751d0();
   input += synapse0x3168ae0();
   input += synapse0x3168b20();
   input += synapse0x3175320();
   input += synapse0x3175360();
   input += synapse0x31753a0();
   input += synapse0x31753e0();
   input += synapse0x3175420();
   input += synapse0x3175460();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3168950() {
   double input = input0x3168950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x31754a0() {
   double input = 0.614513;
   input += synapse0x31757e0();
   input += synapse0x3175820();
   input += synapse0x3175860();
   input += synapse0x31758a0();
   input += synapse0x31758e0();
   input += synapse0x3175920();
   input += synapse0x3175960();
   input += synapse0x31759a0();
   input += synapse0x31759e0();
   input += synapse0x3175a20();
   input += synapse0x3175a60();
   input += synapse0x3175aa0();
   input += synapse0x3175ae0();
   input += synapse0x3175b20();
   input += synapse0x3175b60();
   input += synapse0x3175ba0();
   input += synapse0x3175630();
   input += synapse0x3175670();
   input += synapse0x3175cf0();
   input += synapse0x3175d30();
   input += synapse0x3175d70();
   input += synapse0x3175db0();
   input += synapse0x3175df0();
   input += synapse0x3175e30();
   return input;
}

double NNfunction_ss_cLdR::neuron0x31754a0() {
   double input = input0x31754a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3175e70() {
   double input = -0.486993;
   input += synapse0x31761b0();
   input += synapse0x31761f0();
   input += synapse0x3176230();
   input += synapse0x3176270();
   input += synapse0x31762b0();
   input += synapse0x31762f0();
   input += synapse0x3176330();
   input += synapse0x3176370();
   input += synapse0x31763b0();
   input += synapse0x31763f0();
   input += synapse0x3176430();
   input += synapse0x3176470();
   input += synapse0x31764b0();
   input += synapse0x31764f0();
   input += synapse0x3176530();
   input += synapse0x3176570();
   input += synapse0x3176000();
   input += synapse0x3176040();
   input += synapse0x31766c0();
   input += synapse0x3176700();
   input += synapse0x3176740();
   input += synapse0x3176780();
   input += synapse0x31767c0();
   input += synapse0x3176800();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3175e70() {
   double input = input0x3175e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3176840() {
   double input = -1.65166;
   input += synapse0x3176b80();
   input += synapse0x3176bc0();
   input += synapse0x3176c00();
   input += synapse0x3176c40();
   input += synapse0x3176c80();
   input += synapse0x3176cc0();
   input += synapse0x3176d00();
   input += synapse0x3176d40();
   input += synapse0x3176d80();
   input += synapse0x3176dc0();
   input += synapse0x3176e00();
   input += synapse0x3176e40();
   input += synapse0x3176e80();
   input += synapse0x3176ec0();
   input += synapse0x3176f00();
   input += synapse0x3176f40();
   input += synapse0x31769d0();
   input += synapse0x3176a10();
   input += synapse0x3177090();
   input += synapse0x31770d0();
   input += synapse0x3177110();
   input += synapse0x3177150();
   input += synapse0x3177190();
   input += synapse0x31771d0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3176840() {
   double input = input0x3176840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3177210() {
   double input = 0.449151;
   input += synapse0x3177550();
   input += synapse0x3177590();
   input += synapse0x31775d0();
   input += synapse0x3177610();
   input += synapse0x3177650();
   input += synapse0x3177690();
   input += synapse0x31776d0();
   input += synapse0x3177710();
   input += synapse0x3177750();
   input += synapse0x3177790();
   input += synapse0x31777d0();
   input += synapse0x3177810();
   input += synapse0x3177850();
   input += synapse0x3177890();
   input += synapse0x31778d0();
   input += synapse0x3177910();
   input += synapse0x31773a0();
   input += synapse0x31773e0();
   input += synapse0x3177a60();
   input += synapse0x3177aa0();
   input += synapse0x3177ae0();
   input += synapse0x3177b20();
   input += synapse0x3177b60();
   input += synapse0x3177ba0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3177210() {
   double input = input0x3177210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3177be0() {
   double input = 0.00373756;
   input += synapse0x3177f20();
   input += synapse0x3177f60();
   input += synapse0x3177fa0();
   input += synapse0x3177fe0();
   input += synapse0x3178020();
   input += synapse0x3178060();
   input += synapse0x31780a0();
   input += synapse0x31780e0();
   input += synapse0x3178120();
   input += synapse0x3178160();
   input += synapse0x31781a0();
   input += synapse0x31781e0();
   input += synapse0x3178220();
   input += synapse0x3178260();
   input += synapse0x31782a0();
   input += synapse0x31782e0();
   input += synapse0x3177d70();
   input += synapse0x3177db0();
   input += synapse0x3178430();
   input += synapse0x3178470();
   input += synapse0x31784b0();
   input += synapse0x31784f0();
   input += synapse0x3178530();
   input += synapse0x3178570();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3177be0() {
   double input = input0x3177be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x31785b0() {
   double input = -0.709048;
   input += synapse0x31788f0();
   input += synapse0x3178930();
   input += synapse0x3178970();
   input += synapse0x31789b0();
   input += synapse0x31789f0();
   input += synapse0x3178a30();
   input += synapse0x3178a70();
   input += synapse0x3178ab0();
   input += synapse0x3178af0();
   input += synapse0x3178b30();
   input += synapse0x3178b70();
   input += synapse0x3178bb0();
   input += synapse0x3178bf0();
   input += synapse0x3178c30();
   input += synapse0x3178c70();
   input += synapse0x3178cb0();
   input += synapse0x3178740();
   input += synapse0x3178780();
   input += synapse0x3178e00();
   input += synapse0x3178e40();
   input += synapse0x3178e80();
   input += synapse0x3178ec0();
   input += synapse0x3178f00();
   input += synapse0x3178f40();
   return input;
}

double NNfunction_ss_cLdR::neuron0x31785b0() {
   double input = input0x31785b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3178f80() {
   double input = -0.413846;
   input += synapse0x31792c0();
   input += synapse0x3179300();
   input += synapse0x3179340();
   input += synapse0x3179380();
   input += synapse0x31793c0();
   input += synapse0x3179400();
   input += synapse0x3179440();
   input += synapse0x3179480();
   input += synapse0x31794c0();
   input += synapse0x3179500();
   input += synapse0x3179540();
   input += synapse0x3179580();
   input += synapse0x31795c0();
   input += synapse0x3179600();
   input += synapse0x3179640();
   input += synapse0x3179680();
   input += synapse0x3179110();
   input += synapse0x3179150();
   input += synapse0x31797d0();
   input += synapse0x3179810();
   input += synapse0x3179850();
   input += synapse0x3179890();
   input += synapse0x31798d0();
   input += synapse0x3179910();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3178f80() {
   double input = input0x3178f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3179950() {
   double input = -1.5959;
   input += synapse0x31623c0();
   input += synapse0x3162400();
   input += synapse0x3162440();
   input += synapse0x3162480();
   input += synapse0x31624c0();
   input += synapse0x3162500();
   input += synapse0x3162540();
   input += synapse0x3162580();
   input += synapse0x317a0a0();
   input += synapse0x317a0e0();
   input += synapse0x317a120();
   input += synapse0x317a160();
   input += synapse0x317a1a0();
   input += synapse0x317a1e0();
   input += synapse0x317a220();
   input += synapse0x317a260();
   input += synapse0x3179ae0();
   input += synapse0x3179b20();
   input += synapse0x317a3b0();
   input += synapse0x317a3f0();
   input += synapse0x317a430();
   input += synapse0x317a470();
   input += synapse0x317a4b0();
   input += synapse0x317a4f0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3179950() {
   double input = input0x3179950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x317a530() {
   double input = 0.637248;
   input += synapse0x317a870();
   input += synapse0x317a8b0();
   input += synapse0x317a8f0();
   input += synapse0x317a930();
   input += synapse0x317a970();
   input += synapse0x317a9b0();
   input += synapse0x317a9f0();
   input += synapse0x317aa30();
   input += synapse0x317aa70();
   input += synapse0x317aab0();
   input += synapse0x317aaf0();
   input += synapse0x317ab30();
   input += synapse0x317ab70();
   input += synapse0x317abb0();
   input += synapse0x317abf0();
   input += synapse0x317ac30();
   input += synapse0x317a6c0();
   input += synapse0x317a700();
   input += synapse0x317ad80();
   input += synapse0x317adc0();
   input += synapse0x317ae00();
   input += synapse0x317ae40();
   input += synapse0x317ae80();
   input += synapse0x317aec0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x317a530() {
   double input = input0x317a530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x317af00() {
   double input = 0.458227;
   input += synapse0x317b240();
   input += synapse0x317b280();
   input += synapse0x317b2c0();
   input += synapse0x317b300();
   input += synapse0x317b340();
   input += synapse0x317b380();
   input += synapse0x317b3c0();
   input += synapse0x317b400();
   input += synapse0x317b440();
   input += synapse0x317b480();
   input += synapse0x317b4c0();
   input += synapse0x317b500();
   input += synapse0x317b540();
   input += synapse0x317b580();
   input += synapse0x317b5c0();
   input += synapse0x317b600();
   input += synapse0x317b090();
   input += synapse0x317b0d0();
   input += synapse0x316bc00();
   input += synapse0x316bc40();
   input += synapse0x316bc80();
   input += synapse0x316bcc0();
   input += synapse0x316bd00();
   input += synapse0x316bd40();
   return input;
}

double NNfunction_ss_cLdR::neuron0x317af00() {
   double input = input0x317af00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x316bd80() {
   double input = 0.544288;
   input += synapse0x316c0c0();
   input += synapse0x316c100();
   input += synapse0x316c140();
   input += synapse0x316c180();
   input += synapse0x316c1c0();
   input += synapse0x316c200();
   input += synapse0x316c240();
   input += synapse0x316c280();
   input += synapse0x316c2c0();
   input += synapse0x316c300();
   input += synapse0x316c340();
   input += synapse0x316c380();
   input += synapse0x316c3c0();
   input += synapse0x316c400();
   input += synapse0x316c440();
   input += synapse0x316c480();
   input += synapse0x316bf10();
   input += synapse0x316bf50();
   input += synapse0x316c5d0();
   input += synapse0x316c610();
   input += synapse0x316c650();
   input += synapse0x316c690();
   input += synapse0x316c6d0();
   input += synapse0x316c710();
   return input;
}

double NNfunction_ss_cLdR::neuron0x316bd80() {
   double input = input0x316bd80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x316c750() {
   double input = 2.11147;
   input += synapse0x316ca90();
   input += synapse0x316cad0();
   input += synapse0x316cb10();
   input += synapse0x316cb50();
   input += synapse0x316cb90();
   input += synapse0x316cbd0();
   input += synapse0x316cc10();
   input += synapse0x316cc50();
   input += synapse0x316cc90();
   input += synapse0x316ccd0();
   input += synapse0x316cd10();
   input += synapse0x316cd50();
   input += synapse0x316cd90();
   input += synapse0x316cdd0();
   input += synapse0x316ce10();
   input += synapse0x316ce50();
   input += synapse0x316c8e0();
   input += synapse0x316c920();
   input += synapse0x316cfa0();
   input += synapse0x316cfe0();
   input += synapse0x316d020();
   input += synapse0x316d060();
   input += synapse0x316d0a0();
   input += synapse0x316d0e0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x316c750() {
   double input = input0x316c750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x316d120() {
   double input = 0.201421;
   input += synapse0x316d460();
   input += synapse0x316d4a0();
   input += synapse0x316d4e0();
   input += synapse0x316d520();
   input += synapse0x316d560();
   input += synapse0x316d5a0();
   input += synapse0x316d5e0();
   input += synapse0x316d620();
   input += synapse0x316d660();
   input += synapse0x316d6a0();
   input += synapse0x316d6e0();
   input += synapse0x316d720();
   input += synapse0x316d760();
   input += synapse0x316d7a0();
   input += synapse0x316d7e0();
   input += synapse0x316d820();
   input += synapse0x316d2b0();
   input += synapse0x316d2f0();
   input += synapse0x316d970();
   input += synapse0x316d9b0();
   input += synapse0x316d9f0();
   input += synapse0x316da30();
   input += synapse0x316da70();
   input += synapse0x316dab0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x316d120() {
   double input = input0x316d120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x317f760() {
   double input = 0.313363;
   input += synapse0x317f980();
   input += synapse0x317f9c0();
   input += synapse0x317fa00();
   input += synapse0x317fa40();
   input += synapse0x317fa80();
   input += synapse0x317fac0();
   input += synapse0x317fb00();
   input += synapse0x317fb40();
   input += synapse0x317fb80();
   input += synapse0x317fbc0();
   input += synapse0x317fc00();
   input += synapse0x317fc40();
   input += synapse0x317fc80();
   input += synapse0x317fcc0();
   input += synapse0x317fd00();
   input += synapse0x317fd40();
   input += synapse0x316daf0();
   input += synapse0x316db30();
   input += synapse0x317fe90();
   input += synapse0x317fed0();
   input += synapse0x317ff10();
   input += synapse0x317ff50();
   input += synapse0x317ff90();
   input += synapse0x317ffd0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x317f760() {
   double input = input0x317f760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3180010() {
   double input = 0.526518;
   input += synapse0x3180350();
   input += synapse0x3180390();
   input += synapse0x31803d0();
   input += synapse0x3180410();
   input += synapse0x3180450();
   input += synapse0x3180490();
   input += synapse0x31804d0();
   input += synapse0x3180510();
   input += synapse0x3180550();
   input += synapse0x3180590();
   input += synapse0x31805d0();
   input += synapse0x3180610();
   input += synapse0x3180650();
   input += synapse0x3180690();
   input += synapse0x31806d0();
   input += synapse0x3180710();
   input += synapse0x31801a0();
   input += synapse0x31801e0();
   input += synapse0x3180860();
   input += synapse0x31808a0();
   input += synapse0x31808e0();
   input += synapse0x3180920();
   input += synapse0x3180960();
   input += synapse0x31809a0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3180010() {
   double input = input0x3180010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x31809e0() {
   double input = -1.96444;
   input += synapse0x3180d20();
   input += synapse0x3180d60();
   input += synapse0x3180da0();
   input += synapse0x3180de0();
   input += synapse0x3180e20();
   input += synapse0x3180e60();
   input += synapse0x3180ea0();
   input += synapse0x3180ee0();
   input += synapse0x3180f20();
   input += synapse0x3180f60();
   input += synapse0x3180fa0();
   input += synapse0x3180fe0();
   input += synapse0x3181020();
   input += synapse0x3181060();
   input += synapse0x31810a0();
   input += synapse0x31810e0();
   input += synapse0x3180b70();
   input += synapse0x3180bb0();
   input += synapse0x3181230();
   input += synapse0x3181270();
   input += synapse0x31812b0();
   input += synapse0x31812f0();
   input += synapse0x3181330();
   input += synapse0x3181370();
   return input;
}

double NNfunction_ss_cLdR::neuron0x31809e0() {
   double input = input0x31809e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x31813b0() {
   double input = -1.76023;
   input += synapse0x31816f0();
   input += synapse0x3181730();
   input += synapse0x3181770();
   input += synapse0x31817b0();
   input += synapse0x31817f0();
   input += synapse0x3181830();
   input += synapse0x3181870();
   input += synapse0x31818b0();
   input += synapse0x31818f0();
   input += synapse0x3181930();
   input += synapse0x3181970();
   input += synapse0x31819b0();
   input += synapse0x31819f0();
   input += synapse0x3181a30();
   input += synapse0x3181a70();
   input += synapse0x3181ab0();
   input += synapse0x3181540();
   input += synapse0x3181580();
   input += synapse0x3181c00();
   input += synapse0x3181c40();
   input += synapse0x3181c80();
   input += synapse0x3181cc0();
   input += synapse0x3181d00();
   input += synapse0x3181d40();
   return input;
}

double NNfunction_ss_cLdR::neuron0x31813b0() {
   double input = input0x31813b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x31885b0() {
   double input = -0.851891;
   input += synapse0x2f21c50();
   input += synapse0x2f21c90();
   input += synapse0x315f7f0();
   input += synapse0x315f830();
   input += synapse0x31601c0();
   input += synapse0x3160200();
   input += synapse0x3160f90();
   input += synapse0x3160fd0();
   input += synapse0x3161960();
   input += synapse0x31619a0();
   input += synapse0x3162330();
   input += synapse0x3162370();
   input += synapse0x3162e10();
   input += synapse0x3162e50();
   input += synapse0x31637e0();
   input += synapse0x3163820();
   input += synapse0x31608c0();
   input += synapse0x3160900();
   input += synapse0x3165390();
   input += synapse0x31653d0();
   input += synapse0x3165d60();
   input += synapse0x3165da0();
   input += synapse0x3166730();
   input += synapse0x3166770();
   input += synapse0x3167100();
   input += synapse0x3167140();
   input += synapse0x315b2a0();
   input += synapse0x315b2e0();
   input += synapse0x31691f0();
   input += synapse0x3169230();
   input += synapse0x3169bc0();
   input += synapse0x3169c00();
   input += synapse0x316a590();
   input += synapse0x316a5d0();
   input += synapse0x316af60();
   input += synapse0x316afa0();
   input += synapse0x316b930();
   input += synapse0x316b970();
   input += synapse0x3164480();
   input += synapse0x31644c0();
   input += synapse0x316dd30();
   input += synapse0x316dd70();
   input += synapse0x316e6c0();
   input += synapse0x316e700();
   input += synapse0x316f090();
   input += synapse0x316f0d0();
   input += synapse0x316fa60();
   input += synapse0x316faa0();
   input += synapse0x3170430();
   input += synapse0x3170470();
   return input;
}

double NNfunction_ss_cLdR::neuron0x31885b0() {
   double input = input0x31885b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3188950() {
   double input = 1.10455;
   input += synapse0x3172b70();
   input += synapse0x3172bb0();
   input += synapse0x3168130();
   input += synapse0x3168170();
   input += synapse0x3175750();
   input += synapse0x3175790();
   input += synapse0x3176120();
   input += synapse0x3176160();
   input += synapse0x3176af0();
   input += synapse0x3176b30();
   input += synapse0x31774c0();
   input += synapse0x3177500();
   input += synapse0x3177e90();
   input += synapse0x3177ed0();
   input += synapse0x3178860();
   input += synapse0x31788a0();
   input += synapse0x3179230();
   input += synapse0x3179270();
   input += synapse0x3179c00();
   input += synapse0x3179c40();
   input += synapse0x317a7e0();
   input += synapse0x317a820();
   input += synapse0x317b1b0();
   input += synapse0x317b1f0();
   input += synapse0x316c030();
   input += synapse0x316c070();
   input += synapse0x316ca00();
   input += synapse0x316ca40();
   input += synapse0x316d3d0();
   input += synapse0x316d410();
   input += synapse0x317f8f0();
   input += synapse0x317f930();
   input += synapse0x31802c0();
   input += synapse0x3180300();
   input += synapse0x3180c90();
   input += synapse0x3180cd0();
   input += synapse0x3181660();
   input += synapse0x31816a0();
   input += synapse0x315d550();
   input += synapse0x315d590();
   input += synapse0x3170e00();
   input += synapse0x3170e40();
   input += synapse0x3181d80();
   input += synapse0x3181dc0();
   input += synapse0x3181e00();
   input += synapse0x3181e40();
   input += synapse0x3188cf0();
   input += synapse0x3188d30();
   input += synapse0x3188d70();
   input += synapse0x3188db0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3188950() {
   double input = input0x3188950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3188df0() {
   double input = -0.696692;
   input += synapse0x3189130();
   input += synapse0x3189170();
   input += synapse0x31891b0();
   input += synapse0x31891f0();
   input += synapse0x3189230();
   input += synapse0x3189270();
   input += synapse0x31892b0();
   input += synapse0x31892f0();
   input += synapse0x3189330();
   input += synapse0x3189370();
   input += synapse0x31893b0();
   input += synapse0x31893f0();
   input += synapse0x3189430();
   input += synapse0x3189470();
   input += synapse0x31894b0();
   input += synapse0x31894f0();
   input += synapse0x3188f80();
   input += synapse0x3188fc0();
   input += synapse0x3189640();
   input += synapse0x3189680();
   input += synapse0x31896c0();
   input += synapse0x3189700();
   input += synapse0x3189740();
   input += synapse0x3189780();
   input += synapse0x31897c0();
   input += synapse0x3189800();
   input += synapse0x3189840();
   input += synapse0x3189880();
   input += synapse0x31898c0();
   input += synapse0x3189900();
   input += synapse0x3189940();
   input += synapse0x3189980();
   input += synapse0x3189530();
   input += synapse0x3189570();
   input += synapse0x31895b0();
   input += synapse0x31895f0();
   input += synapse0x3189bd0();
   input += synapse0x3189c10();
   input += synapse0x3189c50();
   input += synapse0x3189c90();
   input += synapse0x3189cd0();
   input += synapse0x3189d10();
   input += synapse0x3189d50();
   input += synapse0x3189d90();
   input += synapse0x3189dd0();
   input += synapse0x3189e10();
   input += synapse0x3189e50();
   input += synapse0x3189e90();
   input += synapse0x3189ed0();
   input += synapse0x3189f10();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3188df0() {
   double input = input0x3188df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x3189f50() {
   double input = -0.37899;
   input += synapse0x318a290();
   input += synapse0x318a2d0();
   input += synapse0x318a310();
   input += synapse0x318a350();
   input += synapse0x318a390();
   input += synapse0x318a3d0();
   input += synapse0x318a410();
   input += synapse0x318a450();
   input += synapse0x318a490();
   input += synapse0x318a4d0();
   input += synapse0x318a510();
   input += synapse0x318a550();
   input += synapse0x318a590();
   input += synapse0x318a5d0();
   input += synapse0x318a610();
   input += synapse0x318a650();
   input += synapse0x318a0e0();
   input += synapse0x318a120();
   input += synapse0x318a7a0();
   input += synapse0x318a7e0();
   input += synapse0x318a820();
   input += synapse0x318a860();
   input += synapse0x318a8a0();
   input += synapse0x318a8e0();
   input += synapse0x318a920();
   input += synapse0x318a960();
   input += synapse0x318a9a0();
   input += synapse0x318a9e0();
   input += synapse0x318aa20();
   input += synapse0x318aa60();
   input += synapse0x318aaa0();
   input += synapse0x318aae0();
   input += synapse0x318a690();
   input += synapse0x318a6d0();
   input += synapse0x318a710();
   input += synapse0x318a750();
   input += synapse0x318ad30();
   input += synapse0x318ad70();
   input += synapse0x318adb0();
   input += synapse0x318adf0();
   input += synapse0x318ae30();
   input += synapse0x318ae70();
   input += synapse0x318aeb0();
   input += synapse0x318aef0();
   input += synapse0x318af30();
   input += synapse0x318af70();
   input += synapse0x318afb0();
   input += synapse0x318aff0();
   input += synapse0x318b030();
   input += synapse0x318b070();
   return input;
}

double NNfunction_ss_cLdR::neuron0x3189f50() {
   double input = input0x3189f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x318b0b0() {
   double input = 0.530147;
   input += synapse0x318b3f0();
   input += synapse0x318b430();
   input += synapse0x318b470();
   input += synapse0x318b4b0();
   input += synapse0x318b4f0();
   input += synapse0x318b530();
   input += synapse0x318b570();
   input += synapse0x318b5b0();
   input += synapse0x318b5f0();
   input += synapse0x318b630();
   input += synapse0x318b670();
   input += synapse0x318b6b0();
   input += synapse0x318b6f0();
   input += synapse0x318b730();
   input += synapse0x318b770();
   input += synapse0x318b7b0();
   input += synapse0x318b240();
   input += synapse0x318b280();
   input += synapse0x318b900();
   input += synapse0x318b940();
   input += synapse0x318b980();
   input += synapse0x318b9c0();
   input += synapse0x318ba00();
   input += synapse0x318ba40();
   input += synapse0x318ba80();
   input += synapse0x318bac0();
   input += synapse0x318bb00();
   input += synapse0x318bb40();
   input += synapse0x318bb80();
   input += synapse0x318bbc0();
   input += synapse0x318bc00();
   input += synapse0x318bc40();
   input += synapse0x318b7f0();
   input += synapse0x318b830();
   input += synapse0x318b870();
   input += synapse0x318b8b0();
   input += synapse0x318be90();
   input += synapse0x318bed0();
   input += synapse0x318bf10();
   input += synapse0x318bf50();
   input += synapse0x318bf90();
   input += synapse0x318bfd0();
   input += synapse0x318c010();
   input += synapse0x318c050();
   input += synapse0x318c090();
   input += synapse0x318c0d0();
   input += synapse0x318c110();
   input += synapse0x318c150();
   input += synapse0x318c190();
   input += synapse0x318c1d0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x318b0b0() {
   double input = input0x318b0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x318c210() {
   double input = 1.48415;
   input += synapse0x318c430();
   input += synapse0x318c470();
   input += synapse0x318c4b0();
   input += synapse0x318c4f0();
   input += synapse0x318c530();
   return input;
}

double NNfunction_ss_cLdR::neuron0x318c210() {
   double input = input0x318c210();
   return (input * 1)+0;
}

double NNfunction_ss_cLdR::synapse0x31581c0() {
   return (neuron0x3158300()*0.320758);
}

double NNfunction_ss_cLdR::synapse0x3158200() {
   return (neuron0x3158640()*-0.156852);
}

double NNfunction_ss_cLdR::synapse0x315d5e0() {
   return (neuron0x3158980()*-0.552305);
}

double NNfunction_ss_cLdR::synapse0x315d620() {
   return (neuron0x3158cc0()*0.463141);
}

double NNfunction_ss_cLdR::synapse0x315d660() {
   return (neuron0x3159000()*-0.267391);
}

double NNfunction_ss_cLdR::synapse0x315d6a0() {
   return (neuron0x3159340()*0.155265);
}

double NNfunction_ss_cLdR::synapse0x315d6e0() {
   return (neuron0x3159680()*-0.241001);
}

double NNfunction_ss_cLdR::synapse0x315d720() {
   return (neuron0x31599c0()*0.654076);
}

double NNfunction_ss_cLdR::synapse0x315d760() {
   return (neuron0x3159d00()*0.655082);
}

double NNfunction_ss_cLdR::synapse0x315d7a0() {
   return (neuron0x315a040()*0.0286315);
}

double NNfunction_ss_cLdR::synapse0x315d7e0() {
   return (neuron0x315a380()*-0.720945);
}

double NNfunction_ss_cLdR::synapse0x315d820() {
   return (neuron0x315a6c0()*-0.544583);
}

double NNfunction_ss_cLdR::synapse0x315d860() {
   return (neuron0x315aa00()*0.905173);
}

double NNfunction_ss_cLdR::synapse0x315d8a0() {
   return (neuron0x315ad40()*0.567464);
}

double NNfunction_ss_cLdR::synapse0x315d8e0() {
   return (neuron0x315b080()*-0.149609);
}

double NNfunction_ss_cLdR::synapse0x315d920() {
   return (neuron0x315b3c0()*0.563249);
}

double NNfunction_ss_cLdR::synapse0x3158130() {
   return (neuron0x315b700()*-0.595991);
}

double NNfunction_ss_cLdR::synapse0x3158170() {
   return (neuron0x315bc60()*0.369399);
}

double NNfunction_ss_cLdR::synapse0x2f134f0() {
   return (neuron0x315be80()*0.263857);
}

double NNfunction_ss_cLdR::synapse0x2f13530() {
   return (neuron0x315c1c0()*-0.637422);
}

double NNfunction_ss_cLdR::synapse0x315db80() {
   return (neuron0x315c500()*-0.677211);
}

double NNfunction_ss_cLdR::synapse0x315dbc0() {
   return (neuron0x315c840()*-0.572639);
}

double NNfunction_ss_cLdR::synapse0x315dc00() {
   return (neuron0x315cb80()*0.330826);
}

double NNfunction_ss_cLdR::synapse0x315dc40() {
   return (neuron0x315cec0()*-0.277766);
}

double NNfunction_ss_cLdR::synapse0x315dfc0() {
   return (neuron0x3158300()*0.0899191);
}

double NNfunction_ss_cLdR::synapse0x315e000() {
   return (neuron0x3158640()*0.0273481);
}

double NNfunction_ss_cLdR::synapse0x315e040() {
   return (neuron0x3158980()*0.115244);
}

double NNfunction_ss_cLdR::synapse0x315e080() {
   return (neuron0x3158cc0()*0.25653);
}

double NNfunction_ss_cLdR::synapse0x315e0c0() {
   return (neuron0x3159000()*0.0251717);
}

double NNfunction_ss_cLdR::synapse0x315e100() {
   return (neuron0x3159340()*-0.0377426);
}

double NNfunction_ss_cLdR::synapse0x315e140() {
   return (neuron0x3159680()*-0.00774251);
}

double NNfunction_ss_cLdR::synapse0x315e180() {
   return (neuron0x31599c0()*0.0148166);
}

double NNfunction_ss_cLdR::synapse0x315e1c0() {
   return (neuron0x3159d00()*0.00713563);
}

double NNfunction_ss_cLdR::synapse0x315da70() {
   return (neuron0x315a040()*-0.010154);
}

double NNfunction_ss_cLdR::synapse0x315dab0() {
   return (neuron0x315a380()*-0.0298656);
}

double NNfunction_ss_cLdR::synapse0x315daf0() {
   return (neuron0x315a6c0()*-0.0676801);
}

double NNfunction_ss_cLdR::synapse0x315db30() {
   return (neuron0x315aa00()*-0.780362);
}

double NNfunction_ss_cLdR::synapse0x315e410() {
   return (neuron0x315ad40()*-0.0231645);
}

double NNfunction_ss_cLdR::synapse0x315e450() {
   return (neuron0x315b080()*-0.0420294);
}

double NNfunction_ss_cLdR::synapse0x315e490() {
   return (neuron0x315b3c0()*0.0168974);
}

double NNfunction_ss_cLdR::synapse0x315de10() {
   return (neuron0x315b700()*-0.0424559);
}

double NNfunction_ss_cLdR::synapse0x315de50() {
   return (neuron0x315bc60()*-0.735346);
}

double NNfunction_ss_cLdR::synapse0x315e5e0() {
   return (neuron0x315be80()*-0.0866424);
}

double NNfunction_ss_cLdR::synapse0x315e620() {
   return (neuron0x315c1c0()*0.0261719);
}

double NNfunction_ss_cLdR::synapse0x315e660() {
   return (neuron0x315c500()*0.0227814);
}

double NNfunction_ss_cLdR::synapse0x315e6a0() {
   return (neuron0x315c840()*0.00490942);
}

double NNfunction_ss_cLdR::synapse0x315e6e0() {
   return (neuron0x315cb80()*0.0341059);
}

double NNfunction_ss_cLdR::synapse0x315e720() {
   return (neuron0x315cec0()*0.0791488);
}

double NNfunction_ss_cLdR::synapse0x315eaa0() {
   return (neuron0x3158300()*-0.28128);
}

double NNfunction_ss_cLdR::synapse0x315eae0() {
   return (neuron0x3158640()*0.24632);
}

double NNfunction_ss_cLdR::synapse0x315eb20() {
   return (neuron0x3158980()*-0.428131);
}

double NNfunction_ss_cLdR::synapse0x315eb60() {
   return (neuron0x3158cc0()*0.169249);
}

double NNfunction_ss_cLdR::synapse0x315eba0() {
   return (neuron0x3159000()*1.10439);
}

double NNfunction_ss_cLdR::synapse0x315ebe0() {
   return (neuron0x3159340()*1.33757);
}

double NNfunction_ss_cLdR::synapse0x315ec20() {
   return (neuron0x3159680()*0.381727);
}

double NNfunction_ss_cLdR::synapse0x315ec60() {
   return (neuron0x31599c0()*-0.00550429);
}

double NNfunction_ss_cLdR::synapse0x315eca0() {
   return (neuron0x3159d00()*1.44417);
}

double NNfunction_ss_cLdR::synapse0x315ece0() {
   return (neuron0x315a040()*0.652471);
}

double NNfunction_ss_cLdR::synapse0x315ed20() {
   return (neuron0x315a380()*0.119728);
}

double NNfunction_ss_cLdR::synapse0x315ed60() {
   return (neuron0x315a6c0()*-0.283758);
}

double NNfunction_ss_cLdR::synapse0x315eda0() {
   return (neuron0x315aa00()*-1.49061);
}

double NNfunction_ss_cLdR::synapse0x315ede0() {
   return (neuron0x315ad40()*-0.0685029);
}

double NNfunction_ss_cLdR::synapse0x315ee20() {
   return (neuron0x315b080()*0.185021);
}

double NNfunction_ss_cLdR::synapse0x315ee60() {
   return (neuron0x315b3c0()*0.0561928);
}

double NNfunction_ss_cLdR::synapse0x315e8f0() {
   return (neuron0x315b700()*0.123868);
}

double NNfunction_ss_cLdR::synapse0x315e930() {
   return (neuron0x315bc60()*-1.8788);
}

double NNfunction_ss_cLdR::synapse0x2f13b90() {
   return (neuron0x315be80()*-0.405993);
}

double NNfunction_ss_cLdR::synapse0x2f21460() {
   return (neuron0x315c1c0()*0.878866);
}

double NNfunction_ss_cLdR::synapse0x2f214a0() {
   return (neuron0x315c500()*0.298263);
}

double NNfunction_ss_cLdR::synapse0x3147390() {
   return (neuron0x315c840()*0.0794345);
}

double NNfunction_ss_cLdR::synapse0x31473d0() {
   return (neuron0x315cb80()*-0.158675);
}

double NNfunction_ss_cLdR::synapse0x3147410() {
   return (neuron0x315cec0()*0.373564);
}

double NNfunction_ss_cLdR::synapse0x2f21ce0() {
   return (neuron0x3158300()*0.0354077);
}

double NNfunction_ss_cLdR::synapse0x315e390() {
   return (neuron0x3158640()*-0.0186413);
}

double NNfunction_ss_cLdR::synapse0x315e3d0() {
   return (neuron0x3158980()*0.602676);
}

double NNfunction_ss_cLdR::synapse0x315efb0() {
   return (neuron0x3158cc0()*0.679356);
}

double NNfunction_ss_cLdR::synapse0x315eff0() {
   return (neuron0x3159000()*0.394525);
}

double NNfunction_ss_cLdR::synapse0x315f030() {
   return (neuron0x3159340()*-0.132436);
}

double NNfunction_ss_cLdR::synapse0x315f070() {
   return (neuron0x3159680()*0.811645);
}

double NNfunction_ss_cLdR::synapse0x315f0b0() {
   return (neuron0x31599c0()*-0.570228);
}

double NNfunction_ss_cLdR::synapse0x315f0f0() {
   return (neuron0x3159d00()*0.393909);
}

double NNfunction_ss_cLdR::synapse0x315f130() {
   return (neuron0x315a040()*-0.110445);
}

double NNfunction_ss_cLdR::synapse0x315f170() {
   return (neuron0x315a380()*-1.28298);
}

double NNfunction_ss_cLdR::synapse0x315f1b0() {
   return (neuron0x315a6c0()*0.409039);
}

double NNfunction_ss_cLdR::synapse0x315f1f0() {
   return (neuron0x315aa00()*0.34678);
}

double NNfunction_ss_cLdR::synapse0x315f230() {
   return (neuron0x315ad40()*1.02187);
}

double NNfunction_ss_cLdR::synapse0x315f270() {
   return (neuron0x315b080()*-1.15017);
}

double NNfunction_ss_cLdR::synapse0x315f2b0() {
   return (neuron0x315b3c0()*0.361263);
}

double NNfunction_ss_cLdR::synapse0x3158240() {
   return (neuron0x315b700()*-0.0926109);
}

double NNfunction_ss_cLdR::synapse0x3158280() {
   return (neuron0x315bc60()*0.0108193);
}

double NNfunction_ss_cLdR::synapse0x31582c0() {
   return (neuron0x315be80()*0.881758);
}

double NNfunction_ss_cLdR::synapse0x315f400() {
   return (neuron0x315c1c0()*-0.170293);
}

double NNfunction_ss_cLdR::synapse0x315f440() {
   return (neuron0x315c500()*-0.34366);
}

double NNfunction_ss_cLdR::synapse0x315f480() {
   return (neuron0x315c840()*0.137782);
}

double NNfunction_ss_cLdR::synapse0x315f4c0() {
   return (neuron0x315cb80()*-0.787829);
}

double NNfunction_ss_cLdR::synapse0x315f500() {
   return (neuron0x315cec0()*0.357491);
}

double NNfunction_ss_cLdR::synapse0x315f880() {
   return (neuron0x3158300()*-0.0103328);
}

double NNfunction_ss_cLdR::synapse0x315f8c0() {
   return (neuron0x3158640()*0.0244609);
}

double NNfunction_ss_cLdR::synapse0x315f900() {
   return (neuron0x3158980()*-0.00553465);
}

double NNfunction_ss_cLdR::synapse0x315f940() {
   return (neuron0x3158cc0()*0.966501);
}

double NNfunction_ss_cLdR::synapse0x315f980() {
   return (neuron0x3159000()*-0.0116643);
}

double NNfunction_ss_cLdR::synapse0x315f9c0() {
   return (neuron0x3159340()*0.0151953);
}

double NNfunction_ss_cLdR::synapse0x315fa00() {
   return (neuron0x3159680()*-0.0281726);
}

double NNfunction_ss_cLdR::synapse0x315fa40() {
   return (neuron0x31599c0()*-0.0319683);
}

double NNfunction_ss_cLdR::synapse0x315fa80() {
   return (neuron0x3159d00()*0.000383293);
}

double NNfunction_ss_cLdR::synapse0x315fac0() {
   return (neuron0x315a040()*-0.010131);
}

double NNfunction_ss_cLdR::synapse0x315fb00() {
   return (neuron0x315a380()*0.0385934);
}

double NNfunction_ss_cLdR::synapse0x315fb40() {
   return (neuron0x315a6c0()*-0.0764028);
}

double NNfunction_ss_cLdR::synapse0x315fb80() {
   return (neuron0x315aa00()*0.265396);
}

double NNfunction_ss_cLdR::synapse0x315fbc0() {
   return (neuron0x315ad40()*0.0425545);
}

double NNfunction_ss_cLdR::synapse0x315fc00() {
   return (neuron0x315b080()*-0.0255436);
}

double NNfunction_ss_cLdR::synapse0x315fc40() {
   return (neuron0x315b3c0()*0.0163682);
}

double NNfunction_ss_cLdR::synapse0x315f6d0() {
   return (neuron0x315b700()*-0.0122532);
}

double NNfunction_ss_cLdR::synapse0x315f710() {
   return (neuron0x315bc60()*-0.517801);
}

double NNfunction_ss_cLdR::synapse0x315fd90() {
   return (neuron0x315be80()*-0.0444774);
}

double NNfunction_ss_cLdR::synapse0x315fdd0() {
   return (neuron0x315c1c0()*0.0458606);
}

double NNfunction_ss_cLdR::synapse0x315fe10() {
   return (neuron0x315c500()*0.0246804);
}

double NNfunction_ss_cLdR::synapse0x315fe50() {
   return (neuron0x315c840()*-0.0409622);
}

double NNfunction_ss_cLdR::synapse0x315fe90() {
   return (neuron0x315cb80()*-0.0168778);
}

double NNfunction_ss_cLdR::synapse0x315fed0() {
   return (neuron0x315cec0()*-0.00499749);
}

double NNfunction_ss_cLdR::synapse0x3160250() {
   return (neuron0x3158300()*-0.00730342);
}

double NNfunction_ss_cLdR::synapse0x3160290() {
   return (neuron0x3158640()*0.0123511);
}

double NNfunction_ss_cLdR::synapse0x31602d0() {
   return (neuron0x3158980()*0.184919);
}

double NNfunction_ss_cLdR::synapse0x3160310() {
   return (neuron0x3158cc0()*-0.0742491);
}

double NNfunction_ss_cLdR::synapse0x3160350() {
   return (neuron0x3159000()*0.0355233);
}

double NNfunction_ss_cLdR::synapse0x3160390() {
   return (neuron0x3159340()*0.146306);
}

double NNfunction_ss_cLdR::synapse0x31603d0() {
   return (neuron0x3159680()*0.0503361);
}

double NNfunction_ss_cLdR::synapse0x3160410() {
   return (neuron0x31599c0()*0.00208405);
}

double NNfunction_ss_cLdR::synapse0x3160450() {
   return (neuron0x3159d00()*0.0289023);
}

double NNfunction_ss_cLdR::synapse0x2f217b0() {
   return (neuron0x315a040()*0.090034);
}

double NNfunction_ss_cLdR::synapse0x2f217f0() {
   return (neuron0x315a380()*0.0657643);
}

double NNfunction_ss_cLdR::synapse0x2f21830() {
   return (neuron0x315a6c0()*0.0401526);
}

double NNfunction_ss_cLdR::synapse0x2f21870() {
   return (neuron0x315aa00()*-0.0411422);
}

double NNfunction_ss_cLdR::synapse0x2f218b0() {
   return (neuron0x315ad40()*0.0443511);
}

double NNfunction_ss_cLdR::synapse0x2f218f0() {
   return (neuron0x315b080()*0.0349735);
}

double NNfunction_ss_cLdR::synapse0x2f21930() {
   return (neuron0x315b3c0()*0.0479292);
}

double NNfunction_ss_cLdR::synapse0x31600a0() {
   return (neuron0x315b700()*0.0227738);
}

double NNfunction_ss_cLdR::synapse0x31600e0() {
   return (neuron0x315bc60()*-0.235325);
}

double NNfunction_ss_cLdR::synapse0x2f21a80() {
   return (neuron0x315be80()*0.0559618);
}

double NNfunction_ss_cLdR::synapse0x2f21ac0() {
   return (neuron0x315c1c0()*0.0584451);
}

double NNfunction_ss_cLdR::synapse0x2f21b00() {
   return (neuron0x315c500()*0.0384305);
}

double NNfunction_ss_cLdR::synapse0x2f21b40() {
   return (neuron0x315c840()*-0.0540871);
}

double NNfunction_ss_cLdR::synapse0x2f21b80() {
   return (neuron0x315cb80()*0.10364);
}

double NNfunction_ss_cLdR::synapse0x3160ca0() {
   return (neuron0x315cec0()*-0.0335322);
}

double NNfunction_ss_cLdR::synapse0x3161020() {
   return (neuron0x3158300()*0.155942);
}

double NNfunction_ss_cLdR::synapse0x3161060() {
   return (neuron0x3158640()*0.171128);
}

double NNfunction_ss_cLdR::synapse0x31610a0() {
   return (neuron0x3158980()*-0.308062);
}

double NNfunction_ss_cLdR::synapse0x31610e0() {
   return (neuron0x3158cc0()*0.171795);
}

double NNfunction_ss_cLdR::synapse0x3161120() {
   return (neuron0x3159000()*-0.412092);
}

double NNfunction_ss_cLdR::synapse0x3161160() {
   return (neuron0x3159340()*-0.620047);
}

double NNfunction_ss_cLdR::synapse0x31611a0() {
   return (neuron0x3159680()*-0.576366);
}

double NNfunction_ss_cLdR::synapse0x31611e0() {
   return (neuron0x31599c0()*0.450027);
}

double NNfunction_ss_cLdR::synapse0x3161220() {
   return (neuron0x3159d00()*0.0306083);
}

double NNfunction_ss_cLdR::synapse0x3161260() {
   return (neuron0x315a040()*0.288665);
}

double NNfunction_ss_cLdR::synapse0x31612a0() {
   return (neuron0x315a380()*0.135345);
}

double NNfunction_ss_cLdR::synapse0x31612e0() {
   return (neuron0x315a6c0()*0.0779769);
}

double NNfunction_ss_cLdR::synapse0x3161320() {
   return (neuron0x315aa00()*-0.321494);
}

double NNfunction_ss_cLdR::synapse0x3161360() {
   return (neuron0x315ad40()*-0.23493);
}

double NNfunction_ss_cLdR::synapse0x31613a0() {
   return (neuron0x315b080()*-0.279041);
}

double NNfunction_ss_cLdR::synapse0x31613e0() {
   return (neuron0x315b3c0()*-0.097331);
}

double NNfunction_ss_cLdR::synapse0x3160e70() {
   return (neuron0x315b700()*-0.587663);
}

double NNfunction_ss_cLdR::synapse0x3160eb0() {
   return (neuron0x315bc60()*-0.418893);
}

double NNfunction_ss_cLdR::synapse0x3161530() {
   return (neuron0x315be80()*0.727423);
}

double NNfunction_ss_cLdR::synapse0x3161570() {
   return (neuron0x315c1c0()*-0.412161);
}

double NNfunction_ss_cLdR::synapse0x31615b0() {
   return (neuron0x315c500()*0.774264);
}

double NNfunction_ss_cLdR::synapse0x31615f0() {
   return (neuron0x315c840()*0.386748);
}

double NNfunction_ss_cLdR::synapse0x3161630() {
   return (neuron0x315cb80()*0.407452);
}

double NNfunction_ss_cLdR::synapse0x3161670() {
   return (neuron0x315cec0()*0.202943);
}

double NNfunction_ss_cLdR::synapse0x31619f0() {
   return (neuron0x3158300()*-0.171244);
}

double NNfunction_ss_cLdR::synapse0x3161a30() {
   return (neuron0x3158640()*-0.105037);
}

double NNfunction_ss_cLdR::synapse0x3161a70() {
   return (neuron0x3158980()*-0.311172);
}

double NNfunction_ss_cLdR::synapse0x3161ab0() {
   return (neuron0x3158cc0()*-0.777964);
}

double NNfunction_ss_cLdR::synapse0x3161af0() {
   return (neuron0x3159000()*0.434044);
}

double NNfunction_ss_cLdR::synapse0x3161b30() {
   return (neuron0x3159340()*0.475596);
}

double NNfunction_ss_cLdR::synapse0x3161b70() {
   return (neuron0x3159680()*-0.113439);
}

double NNfunction_ss_cLdR::synapse0x3161bb0() {
   return (neuron0x31599c0()*0.0955321);
}

double NNfunction_ss_cLdR::synapse0x3161bf0() {
   return (neuron0x3159d00()*-0.0362204);
}

double NNfunction_ss_cLdR::synapse0x3161c30() {
   return (neuron0x315a040()*0.510535);
}

double NNfunction_ss_cLdR::synapse0x3161c70() {
   return (neuron0x315a380()*0.043766);
}

double NNfunction_ss_cLdR::synapse0x3161cb0() {
   return (neuron0x315a6c0()*0.201702);
}

double NNfunction_ss_cLdR::synapse0x3161cf0() {
   return (neuron0x315aa00()*-0.684799);
}

double NNfunction_ss_cLdR::synapse0x3161d30() {
   return (neuron0x315ad40()*0.304477);
}

double NNfunction_ss_cLdR::synapse0x3161d70() {
   return (neuron0x315b080()*-0.0138483);
}

double NNfunction_ss_cLdR::synapse0x3161db0() {
   return (neuron0x315b3c0()*0.403043);
}

double NNfunction_ss_cLdR::synapse0x3161840() {
   return (neuron0x315b700()*0.0438473);
}

double NNfunction_ss_cLdR::synapse0x3161880() {
   return (neuron0x315bc60()*0.59871);
}

double NNfunction_ss_cLdR::synapse0x3161f00() {
   return (neuron0x315be80()*0.042653);
}

double NNfunction_ss_cLdR::synapse0x3161f40() {
   return (neuron0x315c1c0()*-0.0812516);
}

double NNfunction_ss_cLdR::synapse0x3161f80() {
   return (neuron0x315c500()*-0.307166);
}

double NNfunction_ss_cLdR::synapse0x3161fc0() {
   return (neuron0x315c840()*-0.0507833);
}

double NNfunction_ss_cLdR::synapse0x3162000() {
   return (neuron0x315cb80()*-0.390274);
}

double NNfunction_ss_cLdR::synapse0x3162040() {
   return (neuron0x315cec0()*0.300149);
}

double NNfunction_ss_cLdR::synapse0x315bb50() {
   return (neuron0x3158300()*-0.475259);
}

double NNfunction_ss_cLdR::synapse0x315bb90() {
   return (neuron0x3158640()*-0.579026);
}

double NNfunction_ss_cLdR::synapse0x315bbd0() {
   return (neuron0x3158980()*0.25493);
}

double NNfunction_ss_cLdR::synapse0x315bc10() {
   return (neuron0x3158cc0()*0.358386);
}

double NNfunction_ss_cLdR::synapse0x31625d0() {
   return (neuron0x3159000()*-0.131209);
}

double NNfunction_ss_cLdR::synapse0x3162610() {
   return (neuron0x3159340()*-0.069116);
}

double NNfunction_ss_cLdR::synapse0x3162650() {
   return (neuron0x3159680()*-0.709004);
}

double NNfunction_ss_cLdR::synapse0x3162690() {
   return (neuron0x31599c0()*0.48224);
}

double NNfunction_ss_cLdR::synapse0x31626d0() {
   return (neuron0x3159d00()*-0.195547);
}

double NNfunction_ss_cLdR::synapse0x3162710() {
   return (neuron0x315a040()*0.0288778);
}

double NNfunction_ss_cLdR::synapse0x3162750() {
   return (neuron0x315a380()*-0.622419);
}

double NNfunction_ss_cLdR::synapse0x3162790() {
   return (neuron0x315a6c0()*-0.605145);
}

double NNfunction_ss_cLdR::synapse0x31627d0() {
   return (neuron0x315aa00()*-1.30917);
}

double NNfunction_ss_cLdR::synapse0x3162810() {
   return (neuron0x315ad40()*0.171156);
}

double NNfunction_ss_cLdR::synapse0x3162850() {
   return (neuron0x315b080()*0.505892);
}

double NNfunction_ss_cLdR::synapse0x3162890() {
   return (neuron0x315b3c0()*0.249671);
}

double NNfunction_ss_cLdR::synapse0x3162210() {
   return (neuron0x315b700()*0.583147);
}

double NNfunction_ss_cLdR::synapse0x3162250() {
   return (neuron0x315bc60()*0.905159);
}

double NNfunction_ss_cLdR::synapse0x31629e0() {
   return (neuron0x315be80()*0.0266678);
}

double NNfunction_ss_cLdR::synapse0x3162a20() {
   return (neuron0x315c1c0()*0.33508);
}

double NNfunction_ss_cLdR::synapse0x3162a60() {
   return (neuron0x315c500()*-0.00678932);
}

double NNfunction_ss_cLdR::synapse0x3162aa0() {
   return (neuron0x315c840()*0.0859469);
}

double NNfunction_ss_cLdR::synapse0x3162ae0() {
   return (neuron0x315cb80()*0.128194);
}

double NNfunction_ss_cLdR::synapse0x3162b20() {
   return (neuron0x315cec0()*-0.322704);
}

double NNfunction_ss_cLdR::synapse0x3162ea0() {
   return (neuron0x3158300()*0.0314817);
}

double NNfunction_ss_cLdR::synapse0x3162ee0() {
   return (neuron0x3158640()*0.0367681);
}

double NNfunction_ss_cLdR::synapse0x3162f20() {
   return (neuron0x3158980()*-0.0837903);
}

double NNfunction_ss_cLdR::synapse0x3162f60() {
   return (neuron0x3158cc0()*-1.15498);
}

double NNfunction_ss_cLdR::synapse0x3162fa0() {
   return (neuron0x3159000()*0.0460806);
}

double NNfunction_ss_cLdR::synapse0x3162fe0() {
   return (neuron0x3159340()*0.0823038);
}

double NNfunction_ss_cLdR::synapse0x3163020() {
   return (neuron0x3159680()*-0.0258102);
}

double NNfunction_ss_cLdR::synapse0x3163060() {
   return (neuron0x31599c0()*0.0256855);
}

double NNfunction_ss_cLdR::synapse0x31630a0() {
   return (neuron0x3159d00()*0.0376223);
}

double NNfunction_ss_cLdR::synapse0x31630e0() {
   return (neuron0x315a040()*0.132852);
}

double NNfunction_ss_cLdR::synapse0x3163120() {
   return (neuron0x315a380()*-0.00127101);
}

double NNfunction_ss_cLdR::synapse0x3163160() {
   return (neuron0x315a6c0()*0.0378444);
}

double NNfunction_ss_cLdR::synapse0x31631a0() {
   return (neuron0x315aa00()*-1.04395);
}

double NNfunction_ss_cLdR::synapse0x31631e0() {
   return (neuron0x315ad40()*-0.0850439);
}

double NNfunction_ss_cLdR::synapse0x3163220() {
   return (neuron0x315b080()*-0.0376906);
}

double NNfunction_ss_cLdR::synapse0x3163260() {
   return (neuron0x315b3c0()*0.0546217);
}

double NNfunction_ss_cLdR::synapse0x3162cf0() {
   return (neuron0x315b700()*-0.0427397);
}

double NNfunction_ss_cLdR::synapse0x3162d30() {
   return (neuron0x315bc60()*-0.262624);
}

double NNfunction_ss_cLdR::synapse0x31633b0() {
   return (neuron0x315be80()*-0.100728);
}

double NNfunction_ss_cLdR::synapse0x31633f0() {
   return (neuron0x315c1c0()*0.045202);
}

double NNfunction_ss_cLdR::synapse0x3163430() {
   return (neuron0x315c500()*0.00589881);
}

double NNfunction_ss_cLdR::synapse0x3163470() {
   return (neuron0x315c840()*-0.0258363);
}

double NNfunction_ss_cLdR::synapse0x31634b0() {
   return (neuron0x315cb80()*0.0604256);
}

double NNfunction_ss_cLdR::synapse0x31634f0() {
   return (neuron0x315cec0()*0.0378114);
}

double NNfunction_ss_cLdR::synapse0x3163870() {
   return (neuron0x3158300()*-0.260597);
}

double NNfunction_ss_cLdR::synapse0x31638b0() {
   return (neuron0x3158640()*0.213655);
}

double NNfunction_ss_cLdR::synapse0x31638f0() {
   return (neuron0x3158980()*-0.152655);
}

double NNfunction_ss_cLdR::synapse0x3163930() {
   return (neuron0x3158cc0()*-0.623727);
}

double NNfunction_ss_cLdR::synapse0x3163970() {
   return (neuron0x3159000()*-0.0973406);
}

double NNfunction_ss_cLdR::synapse0x31639b0() {
   return (neuron0x3159340()*0.148762);
}

double NNfunction_ss_cLdR::synapse0x31639f0() {
   return (neuron0x3159680()*0.18829);
}

double NNfunction_ss_cLdR::synapse0x3163a30() {
   return (neuron0x31599c0()*0.0300317);
}

double NNfunction_ss_cLdR::synapse0x3163a70() {
   return (neuron0x3159d00()*-0.233857);
}

double NNfunction_ss_cLdR::synapse0x3163ab0() {
   return (neuron0x315a040()*-0.136342);
}

double NNfunction_ss_cLdR::synapse0x3163af0() {
   return (neuron0x315a380()*0.148072);
}

double NNfunction_ss_cLdR::synapse0x3163b30() {
   return (neuron0x315a6c0()*-0.0429211);
}

double NNfunction_ss_cLdR::synapse0x3163b70() {
   return (neuron0x315aa00()*0.205362);
}

double NNfunction_ss_cLdR::synapse0x3163bb0() {
   return (neuron0x315ad40()*0.116594);
}

double NNfunction_ss_cLdR::synapse0x3163bf0() {
   return (neuron0x315b080()*-0.190515);
}

double NNfunction_ss_cLdR::synapse0x3163c30() {
   return (neuron0x315b3c0()*-0.0485051);
}

double NNfunction_ss_cLdR::synapse0x31636c0() {
   return (neuron0x315b700()*-0.0893654);
}

double NNfunction_ss_cLdR::synapse0x3163700() {
   return (neuron0x315bc60()*0.3535);
}

double NNfunction_ss_cLdR::synapse0x3160490() {
   return (neuron0x315be80()*-0.117511);
}

double NNfunction_ss_cLdR::synapse0x31604d0() {
   return (neuron0x315c1c0()*-0.0239812);
}

double NNfunction_ss_cLdR::synapse0x3160510() {
   return (neuron0x315c500()*-0.229792);
}

double NNfunction_ss_cLdR::synapse0x3160550() {
   return (neuron0x315c840()*-0.170966);
}

double NNfunction_ss_cLdR::synapse0x3160590() {
   return (neuron0x315cb80()*0.341596);
}

double NNfunction_ss_cLdR::synapse0x31605d0() {
   return (neuron0x315cec0()*0.217284);
}

double NNfunction_ss_cLdR::synapse0x3160950() {
   return (neuron0x3158300()*-0.166952);
}

double NNfunction_ss_cLdR::synapse0x3160990() {
   return (neuron0x3158640()*0.218609);
}

double NNfunction_ss_cLdR::synapse0x31609d0() {
   return (neuron0x3158980()*-0.548311);
}

double NNfunction_ss_cLdR::synapse0x3160a10() {
   return (neuron0x3158cc0()*0.912167);
}

double NNfunction_ss_cLdR::synapse0x3160a50() {
   return (neuron0x3159000()*0.0635697);
}

double NNfunction_ss_cLdR::synapse0x3160a90() {
   return (neuron0x3159340()*-0.941339);
}

double NNfunction_ss_cLdR::synapse0x3160ad0() {
   return (neuron0x3159680()*0.0120994);
}

double NNfunction_ss_cLdR::synapse0x3160b10() {
   return (neuron0x31599c0()*-0.401667);
}

double NNfunction_ss_cLdR::synapse0x3160b50() {
   return (neuron0x3159d00()*-0.2608);
}

double NNfunction_ss_cLdR::synapse0x3160b90() {
   return (neuron0x315a040()*-0.42417);
}

double NNfunction_ss_cLdR::synapse0x3160bd0() {
   return (neuron0x315a380()*-0.378911);
}

double NNfunction_ss_cLdR::synapse0x3160c10() {
   return (neuron0x315a6c0()*-0.193651);
}

double NNfunction_ss_cLdR::synapse0x3160c50() {
   return (neuron0x315aa00()*0.421413);
}

double NNfunction_ss_cLdR::synapse0x3164d90() {
   return (neuron0x315ad40()*-0.750025);
}

double NNfunction_ss_cLdR::synapse0x3164dd0() {
   return (neuron0x315b080()*-0.426456);
}

double NNfunction_ss_cLdR::synapse0x3164e10() {
   return (neuron0x315b3c0()*-0.380439);
}

double NNfunction_ss_cLdR::synapse0x31607a0() {
   return (neuron0x315b700()*-0.22218);
}

double NNfunction_ss_cLdR::synapse0x31607e0() {
   return (neuron0x315bc60()*1.06221);
}

double NNfunction_ss_cLdR::synapse0x3164f60() {
   return (neuron0x315be80()*-0.0210329);
}

double NNfunction_ss_cLdR::synapse0x3164fa0() {
   return (neuron0x315c1c0()*-0.0655967);
}

double NNfunction_ss_cLdR::synapse0x3164fe0() {
   return (neuron0x315c500()*-0.172124);
}

double NNfunction_ss_cLdR::synapse0x3165020() {
   return (neuron0x315c840()*0.551519);
}

double NNfunction_ss_cLdR::synapse0x3165060() {
   return (neuron0x315cb80()*-0.0581595);
}

double NNfunction_ss_cLdR::synapse0x31650a0() {
   return (neuron0x315cec0()*-0.133399);
}

double NNfunction_ss_cLdR::synapse0x3165420() {
   return (neuron0x3158300()*-0.264391);
}

double NNfunction_ss_cLdR::synapse0x3165460() {
   return (neuron0x3158640()*-0.505535);
}

double NNfunction_ss_cLdR::synapse0x31654a0() {
   return (neuron0x3158980()*0.26854);
}

double NNfunction_ss_cLdR::synapse0x31654e0() {
   return (neuron0x3158cc0()*0.779556);
}

double NNfunction_ss_cLdR::synapse0x3165520() {
   return (neuron0x3159000()*-0.40105);
}

double NNfunction_ss_cLdR::synapse0x3165560() {
   return (neuron0x3159340()*0.0120033);
}

double NNfunction_ss_cLdR::synapse0x31655a0() {
   return (neuron0x3159680()*0.223538);
}

double NNfunction_ss_cLdR::synapse0x31655e0() {
   return (neuron0x31599c0()*0.431685);
}

double NNfunction_ss_cLdR::synapse0x3165620() {
   return (neuron0x3159d00()*-0.267144);
}

double NNfunction_ss_cLdR::synapse0x3165660() {
   return (neuron0x315a040()*0.371296);
}

double NNfunction_ss_cLdR::synapse0x31656a0() {
   return (neuron0x315a380()*0.339764);
}

double NNfunction_ss_cLdR::synapse0x31656e0() {
   return (neuron0x315a6c0()*0.260503);
}

double NNfunction_ss_cLdR::synapse0x3165720() {
   return (neuron0x315aa00()*0.753245);
}

double NNfunction_ss_cLdR::synapse0x3165760() {
   return (neuron0x315ad40()*-0.133198);
}

double NNfunction_ss_cLdR::synapse0x31657a0() {
   return (neuron0x315b080()*-0.241774);
}

double NNfunction_ss_cLdR::synapse0x31657e0() {
   return (neuron0x315b3c0()*0.390324);
}

double NNfunction_ss_cLdR::synapse0x3165270() {
   return (neuron0x315b700()*-0.182822);
}

double NNfunction_ss_cLdR::synapse0x31652b0() {
   return (neuron0x315bc60()*1.38789);
}

double NNfunction_ss_cLdR::synapse0x3165930() {
   return (neuron0x315be80()*-0.161393);
}

double NNfunction_ss_cLdR::synapse0x3165970() {
   return (neuron0x315c1c0()*-0.0868654);
}

double NNfunction_ss_cLdR::synapse0x31659b0() {
   return (neuron0x315c500()*-0.580397);
}

double NNfunction_ss_cLdR::synapse0x31659f0() {
   return (neuron0x315c840()*0.767751);
}

double NNfunction_ss_cLdR::synapse0x3165a30() {
   return (neuron0x315cb80()*-0.246977);
}

double NNfunction_ss_cLdR::synapse0x3165a70() {
   return (neuron0x315cec0()*0.371277);
}

double NNfunction_ss_cLdR::synapse0x3165df0() {
   return (neuron0x3158300()*-0.547036);
}

double NNfunction_ss_cLdR::synapse0x3165e30() {
   return (neuron0x3158640()*-0.0504114);
}

double NNfunction_ss_cLdR::synapse0x3165e70() {
   return (neuron0x3158980()*-0.201546);
}

double NNfunction_ss_cLdR::synapse0x3165eb0() {
   return (neuron0x3158cc0()*0.12807);
}

double NNfunction_ss_cLdR::synapse0x3165ef0() {
   return (neuron0x3159000()*0.472189);
}

double NNfunction_ss_cLdR::synapse0x3165f30() {
   return (neuron0x3159340()*-0.0412606);
}

double NNfunction_ss_cLdR::synapse0x3165f70() {
   return (neuron0x3159680()*0.605481);
}

double NNfunction_ss_cLdR::synapse0x3165fb0() {
   return (neuron0x31599c0()*-0.00203873);
}

double NNfunction_ss_cLdR::synapse0x3165ff0() {
   return (neuron0x3159d00()*0.198073);
}

double NNfunction_ss_cLdR::synapse0x3166030() {
   return (neuron0x315a040()*0.131753);
}

double NNfunction_ss_cLdR::synapse0x3166070() {
   return (neuron0x315a380()*0.421123);
}

double NNfunction_ss_cLdR::synapse0x31660b0() {
   return (neuron0x315a6c0()*0.0473218);
}

double NNfunction_ss_cLdR::synapse0x31660f0() {
   return (neuron0x315aa00()*0.871948);
}

double NNfunction_ss_cLdR::synapse0x3166130() {
   return (neuron0x315ad40()*-0.466619);
}

double NNfunction_ss_cLdR::synapse0x3166170() {
   return (neuron0x315b080()*0.347655);
}

double NNfunction_ss_cLdR::synapse0x31661b0() {
   return (neuron0x315b3c0()*0.403152);
}

double NNfunction_ss_cLdR::synapse0x3165c40() {
   return (neuron0x315b700()*0.117002);
}

double NNfunction_ss_cLdR::synapse0x3165c80() {
   return (neuron0x315bc60()*0.547789);
}

double NNfunction_ss_cLdR::synapse0x3166300() {
   return (neuron0x315be80()*-0.302449);
}

double NNfunction_ss_cLdR::synapse0x3166340() {
   return (neuron0x315c1c0()*-0.983309);
}

double NNfunction_ss_cLdR::synapse0x3166380() {
   return (neuron0x315c500()*-1.00175);
}

double NNfunction_ss_cLdR::synapse0x31663c0() {
   return (neuron0x315c840()*0.614789);
}

double NNfunction_ss_cLdR::synapse0x3166400() {
   return (neuron0x315cb80()*-0.0643523);
}

double NNfunction_ss_cLdR::synapse0x3166440() {
   return (neuron0x315cec0()*0.515753);
}

double NNfunction_ss_cLdR::synapse0x31667c0() {
   return (neuron0x3158300()*0.00474346);
}

double NNfunction_ss_cLdR::synapse0x3166800() {
   return (neuron0x3158640()*0.00300872);
}

double NNfunction_ss_cLdR::synapse0x3166840() {
   return (neuron0x3158980()*-0.0117355);
}

double NNfunction_ss_cLdR::synapse0x3166880() {
   return (neuron0x3158cc0()*-1.98897);
}

double NNfunction_ss_cLdR::synapse0x31668c0() {
   return (neuron0x3159000()*0.0183378);
}

double NNfunction_ss_cLdR::synapse0x3166900() {
   return (neuron0x3159340()*0.00321773);
}

double NNfunction_ss_cLdR::synapse0x3166940() {
   return (neuron0x3159680()*0.0147795);
}

double NNfunction_ss_cLdR::synapse0x3166980() {
   return (neuron0x31599c0()*0.0117507);
}

double NNfunction_ss_cLdR::synapse0x31669c0() {
   return (neuron0x3159d00()*0.00335713);
}

double NNfunction_ss_cLdR::synapse0x3166a00() {
   return (neuron0x315a040()*0.0217437);
}

double NNfunction_ss_cLdR::synapse0x3166a40() {
   return (neuron0x315a380()*-0.0170507);
}

double NNfunction_ss_cLdR::synapse0x3166a80() {
   return (neuron0x315a6c0()*0.0234672);
}

double NNfunction_ss_cLdR::synapse0x3166ac0() {
   return (neuron0x315aa00()*-0.324195);
}

double NNfunction_ss_cLdR::synapse0x3166b00() {
   return (neuron0x315ad40()*-0.0518525);
}

double NNfunction_ss_cLdR::synapse0x3166b40() {
   return (neuron0x315b080()*0.0010605);
}

double NNfunction_ss_cLdR::synapse0x3166b80() {
   return (neuron0x315b3c0()*0.00742996);
}

double NNfunction_ss_cLdR::synapse0x3166610() {
   return (neuron0x315b700()*-0.0249535);
}

double NNfunction_ss_cLdR::synapse0x3166650() {
   return (neuron0x315bc60()*-0.201939);
}

double NNfunction_ss_cLdR::synapse0x3166cd0() {
   return (neuron0x315be80()*-0.028869);
}

double NNfunction_ss_cLdR::synapse0x3166d10() {
   return (neuron0x315c1c0()*0.000542465);
}

double NNfunction_ss_cLdR::synapse0x3166d50() {
   return (neuron0x315c500()*-0.0224531);
}

double NNfunction_ss_cLdR::synapse0x3166d90() {
   return (neuron0x315c840()*-0.00332026);
}

double NNfunction_ss_cLdR::synapse0x3166dd0() {
   return (neuron0x315cb80()*0.0115985);
}

double NNfunction_ss_cLdR::synapse0x3166e10() {
   return (neuron0x315cec0()*0.0240186);
}

double NNfunction_ss_cLdR::synapse0x3167190() {
   return (neuron0x3158300()*0.353663);
}

double NNfunction_ss_cLdR::synapse0x3158520() {
   return (neuron0x3158640()*-0.152757);
}

double NNfunction_ss_cLdR::synapse0x3158560() {
   return (neuron0x3158980()*0.808716);
}

double NNfunction_ss_cLdR::synapse0x3158860() {
   return (neuron0x3158cc0()*-1.40539);
}

double NNfunction_ss_cLdR::synapse0x31588a0() {
   return (neuron0x3159000()*0.373022);
}

double NNfunction_ss_cLdR::synapse0x3158ba0() {
   return (neuron0x3159340()*0.156242);
}

double NNfunction_ss_cLdR::synapse0x3158be0() {
   return (neuron0x3159680()*0.453172);
}

double NNfunction_ss_cLdR::synapse0x3158ee0() {
   return (neuron0x31599c0()*0.62875);
}

double NNfunction_ss_cLdR::synapse0x3158f20() {
   return (neuron0x3159d00()*0.361415);
}

double NNfunction_ss_cLdR::synapse0x3159220() {
   return (neuron0x315a040()*1.29187);
}

double NNfunction_ss_cLdR::synapse0x3159260() {
   return (neuron0x315a380()*0.160622);
}

double NNfunction_ss_cLdR::synapse0x3159560() {
   return (neuron0x315a6c0()*0.4937);
}

double NNfunction_ss_cLdR::synapse0x31595a0() {
   return (neuron0x315aa00()*-1.29115);
}

double NNfunction_ss_cLdR::synapse0x31598a0() {
   return (neuron0x315ad40()*-0.596558);
}

double NNfunction_ss_cLdR::synapse0x31598e0() {
   return (neuron0x315b080()*-0.26681);
}

double NNfunction_ss_cLdR::synapse0x3159be0() {
   return (neuron0x315b3c0()*0.134178);
}

double NNfunction_ss_cLdR::synapse0x3159c20() {
   return (neuron0x315b700()*-0.0240584);
}

double NNfunction_ss_cLdR::synapse0x3159f20() {
   return (neuron0x315bc60()*1.13602);
}

double NNfunction_ss_cLdR::synapse0x3159f60() {
   return (neuron0x315be80()*0.202868);
}

double NNfunction_ss_cLdR::synapse0x315a260() {
   return (neuron0x315c1c0()*-0.0761308);
}

double NNfunction_ss_cLdR::synapse0x315a2a0() {
   return (neuron0x315c500()*0.00210118);
}

double NNfunction_ss_cLdR::synapse0x315a5a0() {
   return (neuron0x315c840()*0.404968);
}

double NNfunction_ss_cLdR::synapse0x315a5e0() {
   return (neuron0x315cb80()*-0.0492259);
}

double NNfunction_ss_cLdR::synapse0x315a8e0() {
   return (neuron0x315cec0()*-0.270534);
}

double NNfunction_ss_cLdR::synapse0x315a920() {
   return (neuron0x3158300()*0.130664);
}

double NNfunction_ss_cLdR::synapse0x315b5e0() {
   return (neuron0x3158640()*0.60528);
}

double NNfunction_ss_cLdR::synapse0x315b620() {
   return (neuron0x3158980()*-0.345296);
}

double NNfunction_ss_cLdR::synapse0x3166fe0() {
   return (neuron0x3158cc0()*-0.856353);
}

double NNfunction_ss_cLdR::synapse0x3167020() {
   return (neuron0x3159000()*-0.747182);
}

double NNfunction_ss_cLdR::synapse0x315b920() {
   return (neuron0x3159340()*0.819891);
}

double NNfunction_ss_cLdR::synapse0x315b960() {
   return (neuron0x3159680()*0.595799);
}

double NNfunction_ss_cLdR::synapse0x2f133d0() {
   return (neuron0x31599c0()*1.21938);
}

double NNfunction_ss_cLdR::synapse0x2f13410() {
   return (neuron0x3159d00()*1.378);
}

double NNfunction_ss_cLdR::synapse0x315c0a0() {
   return (neuron0x315a040()*-0.0763531);
}

double NNfunction_ss_cLdR::synapse0x315c0e0() {
   return (neuron0x315a380()*2.34587);
}

double NNfunction_ss_cLdR::synapse0x315c3e0() {
   return (neuron0x315a6c0()*-0.348843);
}

double NNfunction_ss_cLdR::synapse0x315c420() {
   return (neuron0x315aa00()*-0.35545);
}

double NNfunction_ss_cLdR::synapse0x315c720() {
   return (neuron0x315ad40()*0.334784);
}

double NNfunction_ss_cLdR::synapse0x315c760() {
   return (neuron0x315b080()*-0.7171);
}

double NNfunction_ss_cLdR::synapse0x315ca60() {
   return (neuron0x315b3c0()*-0.170392);
}

double NNfunction_ss_cLdR::synapse0x315caa0() {
   return (neuron0x315b700()*-1.46696);
}

double NNfunction_ss_cLdR::synapse0x315cda0() {
   return (neuron0x315bc60()*1.45095);
}

double NNfunction_ss_cLdR::synapse0x315cde0() {
   return (neuron0x315be80()*0.00915173);
}

double NNfunction_ss_cLdR::synapse0x315d0e0() {
   return (neuron0x315c1c0()*-0.538114);
}

double NNfunction_ss_cLdR::synapse0x315d120() {
   return (neuron0x315c500()*0.745128);
}

double NNfunction_ss_cLdR::synapse0x315ac20() {
   return (neuron0x315c840()*-0.0486171);
}

double NNfunction_ss_cLdR::synapse0x315ac60() {
   return (neuron0x315cb80()*-0.540948);
}

double NNfunction_ss_cLdR::synapse0x3168f00() {
   return (neuron0x315cec0()*0.185025);
}

double NNfunction_ss_cLdR::synapse0x3169280() {
   return (neuron0x3158300()*-0.0122617);
}

double NNfunction_ss_cLdR::synapse0x31692c0() {
   return (neuron0x3158640()*-0.000268522);
}

double NNfunction_ss_cLdR::synapse0x3169300() {
   return (neuron0x3158980()*-0.0119015);
}

double NNfunction_ss_cLdR::synapse0x3169340() {
   return (neuron0x3158cc0()*2.7183);
}

double NNfunction_ss_cLdR::synapse0x3169380() {
   return (neuron0x3159000()*-0.00804098);
}

double NNfunction_ss_cLdR::synapse0x31693c0() {
   return (neuron0x3159340()*0.00122989);
}

double NNfunction_ss_cLdR::synapse0x3169400() {
   return (neuron0x3159680()*0.0235287);
}

double NNfunction_ss_cLdR::synapse0x3169440() {
   return (neuron0x31599c0()*-0.000309201);
}

double NNfunction_ss_cLdR::synapse0x3169480() {
   return (neuron0x3159d00()*-0.0287162);
}

double NNfunction_ss_cLdR::synapse0x31694c0() {
   return (neuron0x315a040()*-0.0201465);
}

double NNfunction_ss_cLdR::synapse0x3169500() {
   return (neuron0x315a380()*-0.0169307);
}

double NNfunction_ss_cLdR::synapse0x3169540() {
   return (neuron0x315a6c0()*-0.0228216);
}

double NNfunction_ss_cLdR::synapse0x3169580() {
   return (neuron0x315aa00()*-0.524129);
}

double NNfunction_ss_cLdR::synapse0x31695c0() {
   return (neuron0x315ad40()*-0.0596793);
}

double NNfunction_ss_cLdR::synapse0x3169600() {
   return (neuron0x315b080()*-0.00486703);
}

double NNfunction_ss_cLdR::synapse0x3169640() {
   return (neuron0x315b3c0()*-0.00550159);
}

double NNfunction_ss_cLdR::synapse0x31690d0() {
   return (neuron0x315b700()*-0.0590974);
}

double NNfunction_ss_cLdR::synapse0x3169110() {
   return (neuron0x315bc60()*-0.56966);
}

double NNfunction_ss_cLdR::synapse0x3169790() {
   return (neuron0x315be80()*-0.037783);
}

double NNfunction_ss_cLdR::synapse0x31697d0() {
   return (neuron0x315c1c0()*-0.0102881);
}

double NNfunction_ss_cLdR::synapse0x3169810() {
   return (neuron0x315c500()*-0.0104284);
}

double NNfunction_ss_cLdR::synapse0x3169850() {
   return (neuron0x315c840()*-0.0312653);
}

double NNfunction_ss_cLdR::synapse0x3169890() {
   return (neuron0x315cb80()*0.0232713);
}

double NNfunction_ss_cLdR::synapse0x31698d0() {
   return (neuron0x315cec0()*0.0330994);
}

double NNfunction_ss_cLdR::synapse0x3169c50() {
   return (neuron0x3158300()*-0.402729);
}

double NNfunction_ss_cLdR::synapse0x3169c90() {
   return (neuron0x3158640()*-0.124934);
}

double NNfunction_ss_cLdR::synapse0x3169cd0() {
   return (neuron0x3158980()*0.380163);
}

double NNfunction_ss_cLdR::synapse0x3169d10() {
   return (neuron0x3158cc0()*-0.472368);
}

double NNfunction_ss_cLdR::synapse0x3169d50() {
   return (neuron0x3159000()*0.0409796);
}

double NNfunction_ss_cLdR::synapse0x3169d90() {
   return (neuron0x3159340()*-0.637746);
}

double NNfunction_ss_cLdR::synapse0x3169dd0() {
   return (neuron0x3159680()*0.0644483);
}

double NNfunction_ss_cLdR::synapse0x3169e10() {
   return (neuron0x31599c0()*-0.527914);
}

double NNfunction_ss_cLdR::synapse0x3169e50() {
   return (neuron0x3159d00()*0.137536);
}

double NNfunction_ss_cLdR::synapse0x3169e90() {
   return (neuron0x315a040()*-0.778699);
}

double NNfunction_ss_cLdR::synapse0x3169ed0() {
   return (neuron0x315a380()*-0.260497);
}

double NNfunction_ss_cLdR::synapse0x3169f10() {
   return (neuron0x315a6c0()*-0.676783);
}

double NNfunction_ss_cLdR::synapse0x3169f50() {
   return (neuron0x315aa00()*0.500057);
}

double NNfunction_ss_cLdR::synapse0x3169f90() {
   return (neuron0x315ad40()*-0.12216);
}

double NNfunction_ss_cLdR::synapse0x3169fd0() {
   return (neuron0x315b080()*-0.0602924);
}

double NNfunction_ss_cLdR::synapse0x316a010() {
   return (neuron0x315b3c0()*-0.00982961);
}

double NNfunction_ss_cLdR::synapse0x3169aa0() {
   return (neuron0x315b700()*0.777825);
}

double NNfunction_ss_cLdR::synapse0x3169ae0() {
   return (neuron0x315bc60()*-1.22409);
}

double NNfunction_ss_cLdR::synapse0x316a160() {
   return (neuron0x315be80()*0.0415167);
}

double NNfunction_ss_cLdR::synapse0x316a1a0() {
   return (neuron0x315c1c0()*-0.494323);
}

double NNfunction_ss_cLdR::synapse0x316a1e0() {
   return (neuron0x315c500()*0.692128);
}

double NNfunction_ss_cLdR::synapse0x316a220() {
   return (neuron0x315c840()*0.281191);
}

double NNfunction_ss_cLdR::synapse0x316a260() {
   return (neuron0x315cb80()*-0.139828);
}

double NNfunction_ss_cLdR::synapse0x316a2a0() {
   return (neuron0x315cec0()*0.445926);
}

double NNfunction_ss_cLdR::synapse0x316a620() {
   return (neuron0x3158300()*0.0634557);
}

double NNfunction_ss_cLdR::synapse0x316a660() {
   return (neuron0x3158640()*-0.181611);
}

double NNfunction_ss_cLdR::synapse0x316a6a0() {
   return (neuron0x3158980()*-0.098469);
}

double NNfunction_ss_cLdR::synapse0x316a6e0() {
   return (neuron0x3158cc0()*0.324861);
}

double NNfunction_ss_cLdR::synapse0x316a720() {
   return (neuron0x3159000()*0.111807);
}

double NNfunction_ss_cLdR::synapse0x316a760() {
   return (neuron0x3159340()*-0.18176);
}

double NNfunction_ss_cLdR::synapse0x316a7a0() {
   return (neuron0x3159680()*0.0864136);
}

double NNfunction_ss_cLdR::synapse0x316a7e0() {
   return (neuron0x31599c0()*0.0520788);
}

double NNfunction_ss_cLdR::synapse0x316a820() {
   return (neuron0x3159d00()*-0.432794);
}

double NNfunction_ss_cLdR::synapse0x316a860() {
   return (neuron0x315a040()*-0.0408036);
}

double NNfunction_ss_cLdR::synapse0x316a8a0() {
   return (neuron0x315a380()*-0.0867386);
}

double NNfunction_ss_cLdR::synapse0x316a8e0() {
   return (neuron0x315a6c0()*0.0469162);
}

double NNfunction_ss_cLdR::synapse0x316a920() {
   return (neuron0x315aa00()*-0.405593);
}

double NNfunction_ss_cLdR::synapse0x316a960() {
   return (neuron0x315ad40()*-0.093955);
}

double NNfunction_ss_cLdR::synapse0x316a9a0() {
   return (neuron0x315b080()*0.134455);
}

double NNfunction_ss_cLdR::synapse0x316a9e0() {
   return (neuron0x315b3c0()*0.138679);
}

double NNfunction_ss_cLdR::synapse0x316a470() {
   return (neuron0x315b700()*0.0421407);
}

double NNfunction_ss_cLdR::synapse0x316a4b0() {
   return (neuron0x315bc60()*-0.461697);
}

double NNfunction_ss_cLdR::synapse0x316ab30() {
   return (neuron0x315be80()*-0.0712493);
}

double NNfunction_ss_cLdR::synapse0x316ab70() {
   return (neuron0x315c1c0()*-0.123349);
}

double NNfunction_ss_cLdR::synapse0x316abb0() {
   return (neuron0x315c500()*-0.395915);
}

double NNfunction_ss_cLdR::synapse0x316abf0() {
   return (neuron0x315c840()*0.0338455);
}

double NNfunction_ss_cLdR::synapse0x316ac30() {
   return (neuron0x315cb80()*0.0589712);
}

double NNfunction_ss_cLdR::synapse0x316ac70() {
   return (neuron0x315cec0()*0.0134021);
}

double NNfunction_ss_cLdR::synapse0x316aff0() {
   return (neuron0x3158300()*0.0542338);
}

double NNfunction_ss_cLdR::synapse0x316b030() {
   return (neuron0x3158640()*0.0842201);
}

double NNfunction_ss_cLdR::synapse0x316b070() {
   return (neuron0x3158980()*-0.0635693);
}

double NNfunction_ss_cLdR::synapse0x316b0b0() {
   return (neuron0x3158cc0()*-0.353926);
}

double NNfunction_ss_cLdR::synapse0x316b0f0() {
   return (neuron0x3159000()*-0.0220995);
}

double NNfunction_ss_cLdR::synapse0x316b130() {
   return (neuron0x3159340()*0.0660269);
}

double NNfunction_ss_cLdR::synapse0x316b170() {
   return (neuron0x3159680()*0.115629);
}

double NNfunction_ss_cLdR::synapse0x316b1b0() {
   return (neuron0x31599c0()*-0.0123463);
}

double NNfunction_ss_cLdR::synapse0x316b1f0() {
   return (neuron0x3159d00()*0.03345);
}

double NNfunction_ss_cLdR::synapse0x316b230() {
   return (neuron0x315a040()*0.0747161);
}

double NNfunction_ss_cLdR::synapse0x316b270() {
   return (neuron0x315a380()*0.100064);
}

double NNfunction_ss_cLdR::synapse0x316b2b0() {
   return (neuron0x315a6c0()*-0.022532);
}

double NNfunction_ss_cLdR::synapse0x316b2f0() {
   return (neuron0x315aa00()*1.1356);
}

double NNfunction_ss_cLdR::synapse0x316b330() {
   return (neuron0x315ad40()*0.0185978);
}

double NNfunction_ss_cLdR::synapse0x316b370() {
   return (neuron0x315b080()*-0.0199046);
}

double NNfunction_ss_cLdR::synapse0x316b3b0() {
   return (neuron0x315b3c0()*0.0850731);
}

double NNfunction_ss_cLdR::synapse0x316ae40() {
   return (neuron0x315b700()*-0.0982119);
}

double NNfunction_ss_cLdR::synapse0x316ae80() {
   return (neuron0x315bc60()*1.39331);
}

double NNfunction_ss_cLdR::synapse0x316b500() {
   return (neuron0x315be80()*-0.201239);
}

double NNfunction_ss_cLdR::synapse0x316b540() {
   return (neuron0x315c1c0()*0.118351);
}

double NNfunction_ss_cLdR::synapse0x316b580() {
   return (neuron0x315c500()*-0.0552814);
}

double NNfunction_ss_cLdR::synapse0x316b5c0() {
   return (neuron0x315c840()*-0.0698493);
}

double NNfunction_ss_cLdR::synapse0x316b600() {
   return (neuron0x315cb80()*0.0108022);
}

double NNfunction_ss_cLdR::synapse0x316b640() {
   return (neuron0x315cec0()*0.129725);
}

double NNfunction_ss_cLdR::synapse0x316b9c0() {
   return (neuron0x3158300()*-0.10002);
}

double NNfunction_ss_cLdR::synapse0x316ba00() {
   return (neuron0x3158640()*0.114849);
}

double NNfunction_ss_cLdR::synapse0x316ba40() {
   return (neuron0x3158980()*-0.198257);
}

double NNfunction_ss_cLdR::synapse0x316ba80() {
   return (neuron0x3158cc0()*-0.0227381);
}

double NNfunction_ss_cLdR::synapse0x316bac0() {
   return (neuron0x3159000()*0.502189);
}

double NNfunction_ss_cLdR::synapse0x316bb00() {
   return (neuron0x3159340()*0.101235);
}

double NNfunction_ss_cLdR::synapse0x316bb40() {
   return (neuron0x3159680()*0.118016);
}

double NNfunction_ss_cLdR::synapse0x316bb80() {
   return (neuron0x31599c0()*0.279517);
}

double NNfunction_ss_cLdR::synapse0x316bbc0() {
   return (neuron0x3159d00()*-0.516485);
}

double NNfunction_ss_cLdR::synapse0x3163d80() {
   return (neuron0x315a040()*-0.469281);
}

double NNfunction_ss_cLdR::synapse0x3163dc0() {
   return (neuron0x315a380()*0.326834);
}

double NNfunction_ss_cLdR::synapse0x3163e00() {
   return (neuron0x315a6c0()*1.05697);
}

double NNfunction_ss_cLdR::synapse0x3163e40() {
   return (neuron0x315aa00()*0.700473);
}

double NNfunction_ss_cLdR::synapse0x3163e80() {
   return (neuron0x315ad40()*0.152463);
}

double NNfunction_ss_cLdR::synapse0x3163ec0() {
   return (neuron0x315b080()*1.12753);
}

double NNfunction_ss_cLdR::synapse0x3163f00() {
   return (neuron0x315b3c0()*0.315892);
}

double NNfunction_ss_cLdR::synapse0x316b810() {
   return (neuron0x315b700()*-0.549063);
}

double NNfunction_ss_cLdR::synapse0x316b850() {
   return (neuron0x315bc60()*0.469703);
}

double NNfunction_ss_cLdR::synapse0x3164050() {
   return (neuron0x315be80()*0.44459);
}

double NNfunction_ss_cLdR::synapse0x3164090() {
   return (neuron0x315c1c0()*0.6364);
}

double NNfunction_ss_cLdR::synapse0x31640d0() {
   return (neuron0x315c500()*-0.892538);
}

double NNfunction_ss_cLdR::synapse0x3164110() {
   return (neuron0x315c840()*-0.366944);
}

double NNfunction_ss_cLdR::synapse0x3164150() {
   return (neuron0x315cb80()*-0.605012);
}

double NNfunction_ss_cLdR::synapse0x3164190() {
   return (neuron0x315cec0()*0.510873);
}

double NNfunction_ss_cLdR::synapse0x3164510() {
   return (neuron0x3158300()*0.0471436);
}

double NNfunction_ss_cLdR::synapse0x3164550() {
   return (neuron0x3158640()*-0.00518883);
}

double NNfunction_ss_cLdR::synapse0x3164590() {
   return (neuron0x3158980()*0.917621);
}

double NNfunction_ss_cLdR::synapse0x31645d0() {
   return (neuron0x3158cc0()*-0.0119598);
}

double NNfunction_ss_cLdR::synapse0x3164610() {
   return (neuron0x3159000()*-0.0880635);
}

double NNfunction_ss_cLdR::synapse0x3164650() {
   return (neuron0x3159340()*-0.0338214);
}

double NNfunction_ss_cLdR::synapse0x3164690() {
   return (neuron0x3159680()*-0.0107991);
}

double NNfunction_ss_cLdR::synapse0x31646d0() {
   return (neuron0x31599c0()*-0.00749001);
}

double NNfunction_ss_cLdR::synapse0x3164710() {
   return (neuron0x3159d00()*-0.168036);
}

double NNfunction_ss_cLdR::synapse0x3164750() {
   return (neuron0x315a040()*-0.027177);
}

double NNfunction_ss_cLdR::synapse0x3164790() {
   return (neuron0x315a380()*-0.0635831);
}

double NNfunction_ss_cLdR::synapse0x31647d0() {
   return (neuron0x315a6c0()*-0.00508469);
}

double NNfunction_ss_cLdR::synapse0x3164810() {
   return (neuron0x315aa00()*-0.540151);
}

double NNfunction_ss_cLdR::synapse0x3164850() {
   return (neuron0x315ad40()*-0.052752);
}

double NNfunction_ss_cLdR::synapse0x3164890() {
   return (neuron0x315b080()*0.0739774);
}

double NNfunction_ss_cLdR::synapse0x31648d0() {
   return (neuron0x315b3c0()*0.0487338);
}

double NNfunction_ss_cLdR::synapse0x3164360() {
   return (neuron0x315b700()*0.0197697);
}

double NNfunction_ss_cLdR::synapse0x31643a0() {
   return (neuron0x315bc60()*0.234684);
}

double NNfunction_ss_cLdR::synapse0x3164a20() {
   return (neuron0x315be80()*-0.0409796);
}

double NNfunction_ss_cLdR::synapse0x3164a60() {
   return (neuron0x315c1c0()*0.059523);
}

double NNfunction_ss_cLdR::synapse0x3164aa0() {
   return (neuron0x315c500()*-0.0106142);
}

double NNfunction_ss_cLdR::synapse0x3164ae0() {
   return (neuron0x315c840()*-0.0360926);
}

double NNfunction_ss_cLdR::synapse0x3164b20() {
   return (neuron0x315cb80()*0.147378);
}

double NNfunction_ss_cLdR::synapse0x3164b60() {
   return (neuron0x315cec0()*0.0777046);
}

double NNfunction_ss_cLdR::synapse0x3164d30() {
   return (neuron0x3158300()*0.219661);
}

double NNfunction_ss_cLdR::synapse0x316ddc0() {
   return (neuron0x3158640()*-0.275974);
}

double NNfunction_ss_cLdR::synapse0x316de00() {
   return (neuron0x3158980()*0.529222);
}

double NNfunction_ss_cLdR::synapse0x316de40() {
   return (neuron0x3158cc0()*-1.06159);
}

double NNfunction_ss_cLdR::synapse0x316de80() {
   return (neuron0x3159000()*0.308272);
}

double NNfunction_ss_cLdR::synapse0x316dec0() {
   return (neuron0x3159340()*0.310566);
}

double NNfunction_ss_cLdR::synapse0x316df00() {
   return (neuron0x3159680()*0.209496);
}

double NNfunction_ss_cLdR::synapse0x316df40() {
   return (neuron0x31599c0()*-0.0325133);
}

double NNfunction_ss_cLdR::synapse0x316df80() {
   return (neuron0x3159d00()*0.108118);
}

double NNfunction_ss_cLdR::synapse0x316dfc0() {
   return (neuron0x315a040()*0.0176635);
}

double NNfunction_ss_cLdR::synapse0x316e000() {
   return (neuron0x315a380()*0.217038);
}

double NNfunction_ss_cLdR::synapse0x316e040() {
   return (neuron0x315a6c0()*0.11963);
}

double NNfunction_ss_cLdR::synapse0x316e080() {
   return (neuron0x315aa00()*-0.384235);
}

double NNfunction_ss_cLdR::synapse0x316e0c0() {
   return (neuron0x315ad40()*0.248044);
}

double NNfunction_ss_cLdR::synapse0x316e100() {
   return (neuron0x315b080()*-0.223134);
}

double NNfunction_ss_cLdR::synapse0x316e140() {
   return (neuron0x315b3c0()*-0.20915);
}

double NNfunction_ss_cLdR::synapse0x316dc10() {
   return (neuron0x315b700()*-0.0471846);
}

double NNfunction_ss_cLdR::synapse0x316dc50() {
   return (neuron0x315bc60()*0.395689);
}

double NNfunction_ss_cLdR::synapse0x316e290() {
   return (neuron0x315be80()*0.260206);
}

double NNfunction_ss_cLdR::synapse0x316e2d0() {
   return (neuron0x315c1c0()*0.402935);
}

double NNfunction_ss_cLdR::synapse0x316e310() {
   return (neuron0x315c500()*-0.165556);
}

double NNfunction_ss_cLdR::synapse0x316e350() {
   return (neuron0x315c840()*0.0457236);
}

double NNfunction_ss_cLdR::synapse0x316e390() {
   return (neuron0x315cb80()*-0.131345);
}

double NNfunction_ss_cLdR::synapse0x316e3d0() {
   return (neuron0x315cec0()*-0.0334103);
}

double NNfunction_ss_cLdR::synapse0x316e750() {
   return (neuron0x3158300()*0.0952713);
}

double NNfunction_ss_cLdR::synapse0x316e790() {
   return (neuron0x3158640()*0.348496);
}

double NNfunction_ss_cLdR::synapse0x316e7d0() {
   return (neuron0x3158980()*1.29507);
}

double NNfunction_ss_cLdR::synapse0x316e810() {
   return (neuron0x3158cc0()*-0.0370258);
}

double NNfunction_ss_cLdR::synapse0x316e850() {
   return (neuron0x3159000()*0.523297);
}

double NNfunction_ss_cLdR::synapse0x316e890() {
   return (neuron0x3159340()*0.459595);
}

double NNfunction_ss_cLdR::synapse0x316e8d0() {
   return (neuron0x3159680()*0.256228);
}

double NNfunction_ss_cLdR::synapse0x316e910() {
   return (neuron0x31599c0()*0.403684);
}

double NNfunction_ss_cLdR::synapse0x316e950() {
   return (neuron0x3159d00()*0.28275);
}

double NNfunction_ss_cLdR::synapse0x316e990() {
   return (neuron0x315a040()*0.571331);
}

double NNfunction_ss_cLdR::synapse0x316e9d0() {
   return (neuron0x315a380()*0.210853);
}

double NNfunction_ss_cLdR::synapse0x316ea10() {
   return (neuron0x315a6c0()*0.0368049);
}

double NNfunction_ss_cLdR::synapse0x316ea50() {
   return (neuron0x315aa00()*-0.894726);
}

double NNfunction_ss_cLdR::synapse0x316ea90() {
   return (neuron0x315ad40()*-0.16672);
}

double NNfunction_ss_cLdR::synapse0x316ead0() {
   return (neuron0x315b080()*-0.547711);
}

double NNfunction_ss_cLdR::synapse0x316eb10() {
   return (neuron0x315b3c0()*0.72231);
}

double NNfunction_ss_cLdR::synapse0x316e5a0() {
   return (neuron0x315b700()*-0.409887);
}

double NNfunction_ss_cLdR::synapse0x316e5e0() {
   return (neuron0x315bc60()*0.33272);
}

double NNfunction_ss_cLdR::synapse0x316ec60() {
   return (neuron0x315be80()*0.265416);
}

double NNfunction_ss_cLdR::synapse0x316eca0() {
   return (neuron0x315c1c0()*-0.204511);
}

double NNfunction_ss_cLdR::synapse0x316ece0() {
   return (neuron0x315c500()*-0.210064);
}

double NNfunction_ss_cLdR::synapse0x316ed20() {
   return (neuron0x315c840()*-0.135283);
}

double NNfunction_ss_cLdR::synapse0x316ed60() {
   return (neuron0x315cb80()*0.4064);
}

double NNfunction_ss_cLdR::synapse0x316eda0() {
   return (neuron0x315cec0()*-0.139006);
}

double NNfunction_ss_cLdR::synapse0x316f120() {
   return (neuron0x3158300()*-0.0590894);
}

double NNfunction_ss_cLdR::synapse0x316f160() {
   return (neuron0x3158640()*0.360621);
}

double NNfunction_ss_cLdR::synapse0x316f1a0() {
   return (neuron0x3158980()*-1.19149);
}

double NNfunction_ss_cLdR::synapse0x316f1e0() {
   return (neuron0x3158cc0()*-0.686674);
}

double NNfunction_ss_cLdR::synapse0x316f220() {
   return (neuron0x3159000()*-0.823802);
}

double NNfunction_ss_cLdR::synapse0x316f260() {
   return (neuron0x3159340()*0.419258);
}

double NNfunction_ss_cLdR::synapse0x316f2a0() {
   return (neuron0x3159680()*0.435427);
}

double NNfunction_ss_cLdR::synapse0x316f2e0() {
   return (neuron0x31599c0()*0.170956);
}

double NNfunction_ss_cLdR::synapse0x316f320() {
   return (neuron0x3159d00()*0.228328);
}

double NNfunction_ss_cLdR::synapse0x316f360() {
   return (neuron0x315a040()*-0.617697);
}

double NNfunction_ss_cLdR::synapse0x316f3a0() {
   return (neuron0x315a380()*0.188548);
}

double NNfunction_ss_cLdR::synapse0x316f3e0() {
   return (neuron0x315a6c0()*0.0694963);
}

double NNfunction_ss_cLdR::synapse0x316f420() {
   return (neuron0x315aa00()*-0.173765);
}

double NNfunction_ss_cLdR::synapse0x316f460() {
   return (neuron0x315ad40()*-0.70951);
}

double NNfunction_ss_cLdR::synapse0x316f4a0() {
   return (neuron0x315b080()*-0.868156);
}

double NNfunction_ss_cLdR::synapse0x316f4e0() {
   return (neuron0x315b3c0()*-0.333379);
}

double NNfunction_ss_cLdR::synapse0x316ef70() {
   return (neuron0x315b700()*0.290487);
}

double NNfunction_ss_cLdR::synapse0x316efb0() {
   return (neuron0x315bc60()*0.363988);
}

double NNfunction_ss_cLdR::synapse0x316f630() {
   return (neuron0x315be80()*0.108117);
}

double NNfunction_ss_cLdR::synapse0x316f670() {
   return (neuron0x315c1c0()*0.508883);
}

double NNfunction_ss_cLdR::synapse0x316f6b0() {
   return (neuron0x315c500()*0.835168);
}

double NNfunction_ss_cLdR::synapse0x316f6f0() {
   return (neuron0x315c840()*-0.428603);
}

double NNfunction_ss_cLdR::synapse0x316f730() {
   return (neuron0x315cb80()*0.296158);
}

double NNfunction_ss_cLdR::synapse0x316f770() {
   return (neuron0x315cec0()*0.374276);
}

double NNfunction_ss_cLdR::synapse0x316faf0() {
   return (neuron0x3158300()*-0.0721362);
}

double NNfunction_ss_cLdR::synapse0x316fb30() {
   return (neuron0x3158640()*-0.239466);
}

double NNfunction_ss_cLdR::synapse0x316fb70() {
   return (neuron0x3158980()*-0.00103492);
}

double NNfunction_ss_cLdR::synapse0x316fbb0() {
   return (neuron0x3158cc0()*-0.562502);
}

double NNfunction_ss_cLdR::synapse0x316fbf0() {
   return (neuron0x3159000()*0.163323);
}

double NNfunction_ss_cLdR::synapse0x316fc30() {
   return (neuron0x3159340()*-0.258906);
}

double NNfunction_ss_cLdR::synapse0x316fc70() {
   return (neuron0x3159680()*-0.113921);
}

double NNfunction_ss_cLdR::synapse0x316fcb0() {
   return (neuron0x31599c0()*-0.0263124);
}

double NNfunction_ss_cLdR::synapse0x316fcf0() {
   return (neuron0x3159d00()*0.0540804);
}

double NNfunction_ss_cLdR::synapse0x316fd30() {
   return (neuron0x315a040()*-0.00191908);
}

double NNfunction_ss_cLdR::synapse0x316fd70() {
   return (neuron0x315a380()*-0.139572);
}

double NNfunction_ss_cLdR::synapse0x316fdb0() {
   return (neuron0x315a6c0()*-0.07092);
}

double NNfunction_ss_cLdR::synapse0x316fdf0() {
   return (neuron0x315aa00()*0.590555);
}

double NNfunction_ss_cLdR::synapse0x316fe30() {
   return (neuron0x315ad40()*-0.0585926);
}

double NNfunction_ss_cLdR::synapse0x316fe70() {
   return (neuron0x315b080()*0.00403336);
}

double NNfunction_ss_cLdR::synapse0x316feb0() {
   return (neuron0x315b3c0()*0.130423);
}

double NNfunction_ss_cLdR::synapse0x316f940() {
   return (neuron0x315b700()*0.558989);
}

double NNfunction_ss_cLdR::synapse0x316f980() {
   return (neuron0x315bc60()*0.628526);
}

double NNfunction_ss_cLdR::synapse0x3170000() {
   return (neuron0x315be80()*-0.0529842);
}

double NNfunction_ss_cLdR::synapse0x3170040() {
   return (neuron0x315c1c0()*0.185986);
}

double NNfunction_ss_cLdR::synapse0x3170080() {
   return (neuron0x315c500()*-0.0132573);
}

double NNfunction_ss_cLdR::synapse0x31700c0() {
   return (neuron0x315c840()*-0.00773318);
}

double NNfunction_ss_cLdR::synapse0x3170100() {
   return (neuron0x315cb80()*0.152284);
}

double NNfunction_ss_cLdR::synapse0x3170140() {
   return (neuron0x315cec0()*-0.147623);
}

double NNfunction_ss_cLdR::synapse0x31704c0() {
   return (neuron0x3158300()*-0.139087);
}

double NNfunction_ss_cLdR::synapse0x3170500() {
   return (neuron0x3158640()*-0.0862359);
}

double NNfunction_ss_cLdR::synapse0x3170540() {
   return (neuron0x3158980()*0.246867);
}

double NNfunction_ss_cLdR::synapse0x3170580() {
   return (neuron0x3158cc0()*0.116495);
}

double NNfunction_ss_cLdR::synapse0x31705c0() {
   return (neuron0x3159000()*-0.0712756);
}

double NNfunction_ss_cLdR::synapse0x3170600() {
   return (neuron0x3159340()*0.613784);
}

double NNfunction_ss_cLdR::synapse0x3170640() {
   return (neuron0x3159680()*-0.112558);
}

double NNfunction_ss_cLdR::synapse0x3170680() {
   return (neuron0x31599c0()*0.687702);
}

double NNfunction_ss_cLdR::synapse0x31706c0() {
   return (neuron0x3159d00()*-0.239882);
}

double NNfunction_ss_cLdR::synapse0x3170700() {
   return (neuron0x315a040()*1.01415);
}

double NNfunction_ss_cLdR::synapse0x3170740() {
   return (neuron0x315a380()*0.947888);
}

double NNfunction_ss_cLdR::synapse0x3170780() {
   return (neuron0x315a6c0()*0.0998541);
}

double NNfunction_ss_cLdR::synapse0x31707c0() {
   return (neuron0x315aa00()*-1.17198);
}

double NNfunction_ss_cLdR::synapse0x3170800() {
   return (neuron0x315ad40()*0.413294);
}

double NNfunction_ss_cLdR::synapse0x3170840() {
   return (neuron0x315b080()*-0.131759);
}

double NNfunction_ss_cLdR::synapse0x3170880() {
   return (neuron0x315b3c0()*0.101659);
}

double NNfunction_ss_cLdR::synapse0x3170310() {
   return (neuron0x315b700()*-0.34095);
}

double NNfunction_ss_cLdR::synapse0x3170350() {
   return (neuron0x315bc60()*-1.87647);
}

double NNfunction_ss_cLdR::synapse0x31709d0() {
   return (neuron0x315be80()*0.175343);
}

double NNfunction_ss_cLdR::synapse0x3170a10() {
   return (neuron0x315c1c0()*-0.509865);
}

double NNfunction_ss_cLdR::synapse0x3170a50() {
   return (neuron0x315c500()*-0.199632);
}

double NNfunction_ss_cLdR::synapse0x3170a90() {
   return (neuron0x315c840()*-0.0808453);
}

double NNfunction_ss_cLdR::synapse0x3170ad0() {
   return (neuron0x315cb80()*-0.00557988);
}

double NNfunction_ss_cLdR::synapse0x3170b10() {
   return (neuron0x315cec0()*-0.124887);
}

double NNfunction_ss_cLdR::synapse0x3170e90() {
   return (neuron0x3158300()*0.37133);
}

double NNfunction_ss_cLdR::synapse0x3170ed0() {
   return (neuron0x3158640()*-0.207362);
}

double NNfunction_ss_cLdR::synapse0x3170f10() {
   return (neuron0x3158980()*0.3306);
}

double NNfunction_ss_cLdR::synapse0x3170f50() {
   return (neuron0x3158cc0()*0.448207);
}

double NNfunction_ss_cLdR::synapse0x3170f90() {
   return (neuron0x3159000()*-0.229905);
}

double NNfunction_ss_cLdR::synapse0x3170fd0() {
   return (neuron0x3159340()*-0.112001);
}

double NNfunction_ss_cLdR::synapse0x3171010() {
   return (neuron0x3159680()*-0.0150933);
}

double NNfunction_ss_cLdR::synapse0x3171050() {
   return (neuron0x31599c0()*0.0726964);
}

double NNfunction_ss_cLdR::synapse0x3171090() {
   return (neuron0x3159d00()*0.28846);
}

double NNfunction_ss_cLdR::synapse0x31710d0() {
   return (neuron0x315a040()*0.742222);
}

double NNfunction_ss_cLdR::synapse0x3171110() {
   return (neuron0x315a380()*0.220371);
}

double NNfunction_ss_cLdR::synapse0x3171150() {
   return (neuron0x315a6c0()*0.737319);
}

double NNfunction_ss_cLdR::synapse0x3171190() {
   return (neuron0x315aa00()*0.743063);
}

double NNfunction_ss_cLdR::synapse0x31711d0() {
   return (neuron0x315ad40()*0.144061);
}

double NNfunction_ss_cLdR::synapse0x3171210() {
   return (neuron0x315b080()*0.218863);
}

double NNfunction_ss_cLdR::synapse0x3171250() {
   return (neuron0x315b3c0()*0.803828);
}

double NNfunction_ss_cLdR::synapse0x3170ce0() {
   return (neuron0x315b700()*-0.145643);
}

double NNfunction_ss_cLdR::synapse0x3170d20() {
   return (neuron0x315bc60()*0.924588);
}

double NNfunction_ss_cLdR::synapse0x31713a0() {
   return (neuron0x315be80()*0.217974);
}

double NNfunction_ss_cLdR::synapse0x31713e0() {
   return (neuron0x315c1c0()*0.82593);
}

double NNfunction_ss_cLdR::synapse0x3171420() {
   return (neuron0x315c500()*-0.0484955);
}

double NNfunction_ss_cLdR::synapse0x3171460() {
   return (neuron0x315c840()*0.246529);
}

double NNfunction_ss_cLdR::synapse0x31714a0() {
   return (neuron0x315cb80()*-0.463345);
}

double NNfunction_ss_cLdR::synapse0x31714e0() {
   return (neuron0x315cec0()*-0.393784);
}

double NNfunction_ss_cLdR::synapse0x3171860() {
   return (neuron0x3158300()*-0.0398189);
}

double NNfunction_ss_cLdR::synapse0x31718a0() {
   return (neuron0x3158640()*0.559947);
}

double NNfunction_ss_cLdR::synapse0x31718e0() {
   return (neuron0x3158980()*0.910568);
}

double NNfunction_ss_cLdR::synapse0x3171920() {
   return (neuron0x3158cc0()*0.680395);
}

double NNfunction_ss_cLdR::synapse0x3171960() {
   return (neuron0x3159000()*-0.273542);
}

double NNfunction_ss_cLdR::synapse0x31719a0() {
   return (neuron0x3159340()*0.678684);
}

double NNfunction_ss_cLdR::synapse0x31719e0() {
   return (neuron0x3159680()*0.130876);
}

double NNfunction_ss_cLdR::synapse0x3171a20() {
   return (neuron0x31599c0()*0.0848819);
}

double NNfunction_ss_cLdR::synapse0x3171a60() {
   return (neuron0x3159d00()*0.327259);
}

double NNfunction_ss_cLdR::synapse0x3171aa0() {
   return (neuron0x315a040()*0.264745);
}

double NNfunction_ss_cLdR::synapse0x3171ae0() {
   return (neuron0x315a380()*0.12831);
}

double NNfunction_ss_cLdR::synapse0x3171b20() {
   return (neuron0x315a6c0()*-0.0568664);
}

double NNfunction_ss_cLdR::synapse0x3171b60() {
   return (neuron0x315aa00()*-0.418347);
}

double NNfunction_ss_cLdR::synapse0x3171ba0() {
   return (neuron0x315ad40()*0.0723624);
}

double NNfunction_ss_cLdR::synapse0x3171be0() {
   return (neuron0x315b080()*-0.521148);
}

double NNfunction_ss_cLdR::synapse0x3171c20() {
   return (neuron0x315b3c0()*-0.554771);
}

double NNfunction_ss_cLdR::synapse0x31716b0() {
   return (neuron0x315b700()*0.199602);
}

double NNfunction_ss_cLdR::synapse0x31716f0() {
   return (neuron0x315bc60()*-0.098492);
}

double NNfunction_ss_cLdR::synapse0x3171d70() {
   return (neuron0x315be80()*0.185391);
}

double NNfunction_ss_cLdR::synapse0x3171db0() {
   return (neuron0x315c1c0()*0.196053);
}

double NNfunction_ss_cLdR::synapse0x3171df0() {
   return (neuron0x315c500()*0.440087);
}

double NNfunction_ss_cLdR::synapse0x3171e30() {
   return (neuron0x315c840()*0.101636);
}

double NNfunction_ss_cLdR::synapse0x3171e70() {
   return (neuron0x315cb80()*-0.0513469);
}

double NNfunction_ss_cLdR::synapse0x3171eb0() {
   return (neuron0x315cec0()*-0.548513);
}

double NNfunction_ss_cLdR::synapse0x3172230() {
   return (neuron0x3158300()*-0.0395399);
}

double NNfunction_ss_cLdR::synapse0x3172270() {
   return (neuron0x3158640()*0.026972);
}

double NNfunction_ss_cLdR::synapse0x31722b0() {
   return (neuron0x3158980()*-0.0823404);
}

double NNfunction_ss_cLdR::synapse0x31722f0() {
   return (neuron0x3158cc0()*0.168041);
}

double NNfunction_ss_cLdR::synapse0x3172330() {
   return (neuron0x3159000()*0.0533743);
}

double NNfunction_ss_cLdR::synapse0x3172370() {
   return (neuron0x3159340()*-0.0155325);
}

double NNfunction_ss_cLdR::synapse0x31723b0() {
   return (neuron0x3159680()*0.0711016);
}

double NNfunction_ss_cLdR::synapse0x31723f0() {
   return (neuron0x31599c0()*-0.0407195);
}

double NNfunction_ss_cLdR::synapse0x3172430() {
   return (neuron0x3159d00()*0.00434424);
}

double NNfunction_ss_cLdR::synapse0x3172470() {
   return (neuron0x315a040()*0.00356905);
}

double NNfunction_ss_cLdR::synapse0x31724b0() {
   return (neuron0x315a380()*0.0192597);
}

double NNfunction_ss_cLdR::synapse0x31724f0() {
   return (neuron0x315a6c0()*-0.0233731);
}

double NNfunction_ss_cLdR::synapse0x3172530() {
   return (neuron0x315aa00()*-1.50712);
}

double NNfunction_ss_cLdR::synapse0x3172570() {
   return (neuron0x315ad40()*0.0902367);
}

double NNfunction_ss_cLdR::synapse0x31725b0() {
   return (neuron0x315b080()*-0.0536684);
}

double NNfunction_ss_cLdR::synapse0x31725f0() {
   return (neuron0x315b3c0()*-0.000364877);
}

double NNfunction_ss_cLdR::synapse0x3172080() {
   return (neuron0x315b700()*0.0899645);
}

double NNfunction_ss_cLdR::synapse0x31720c0() {
   return (neuron0x315bc60()*1.67387);
}

double NNfunction_ss_cLdR::synapse0x3172740() {
   return (neuron0x315be80()*0.0724062);
}

double NNfunction_ss_cLdR::synapse0x3172780() {
   return (neuron0x315c1c0()*0.0218327);
}

double NNfunction_ss_cLdR::synapse0x31727c0() {
   return (neuron0x315c500()*0.00535592);
}

double NNfunction_ss_cLdR::synapse0x3172800() {
   return (neuron0x315c840()*0.00952966);
}

double NNfunction_ss_cLdR::synapse0x3172840() {
   return (neuron0x315cb80()*0.100075);
}

double NNfunction_ss_cLdR::synapse0x3172880() {
   return (neuron0x315cec0()*-0.0289657);
}

double NNfunction_ss_cLdR::synapse0x3172c00() {
   return (neuron0x3158300()*0.283839);
}

double NNfunction_ss_cLdR::synapse0x31671d0() {
   return (neuron0x3158640()*-1.2181);
}

double NNfunction_ss_cLdR::synapse0x3167210() {
   return (neuron0x3158980()*0.205192);
}

double NNfunction_ss_cLdR::synapse0x3167250() {
   return (neuron0x3158cc0()*-0.108294);
}

double NNfunction_ss_cLdR::synapse0x31674a0() {
   return (neuron0x3159000()*-0.363177);
}

double NNfunction_ss_cLdR::synapse0x31674e0() {
   return (neuron0x3159340()*-0.215647);
}

double NNfunction_ss_cLdR::synapse0x3167520() {
   return (neuron0x3159680()*-0.127354);
}

double NNfunction_ss_cLdR::synapse0x3167770() {
   return (neuron0x31599c0()*0.257008);
}

double NNfunction_ss_cLdR::synapse0x31677b0() {
   return (neuron0x3159d00()*-0.164483);
}

double NNfunction_ss_cLdR::synapse0x3167a00() {
   return (neuron0x315a040()*0.461959);
}

double NNfunction_ss_cLdR::synapse0x3167a40() {
   return (neuron0x315a380()*-0.481711);
}

double NNfunction_ss_cLdR::synapse0x3167a80() {
   return (neuron0x315a6c0()*0.433957);
}

double NNfunction_ss_cLdR::synapse0x3167cd0() {
   return (neuron0x315aa00()*0.42545);
}

double NNfunction_ss_cLdR::synapse0x3167d10() {
   return (neuron0x315ad40()*0.618523);
}

double NNfunction_ss_cLdR::synapse0x3167f60() {
   return (neuron0x315b080()*0.265822);
}

double NNfunction_ss_cLdR::synapse0x3167fa0() {
   return (neuron0x315b3c0()*-0.21822);
}

double NNfunction_ss_cLdR::synapse0x3172a50() {
   return (neuron0x315b700()*0.237284);
}

double NNfunction_ss_cLdR::synapse0x3172a90() {
   return (neuron0x315bc60()*0.181902);
}

double NNfunction_ss_cLdR::synapse0x31680f0() {
   return (neuron0x315be80()*-0.062181);
}

double NNfunction_ss_cLdR::synapse0x3168600() {
   return (neuron0x315c1c0()*0.278041);
}

double NNfunction_ss_cLdR::synapse0x3168640() {
   return (neuron0x315c500()*1.0015);
}

double NNfunction_ss_cLdR::synapse0x3168680() {
   return (neuron0x315c840()*0.58356);
}

double NNfunction_ss_cLdR::synapse0x31688d0() {
   return (neuron0x315cb80()*0.32487);
}

double NNfunction_ss_cLdR::synapse0x3168910() {
   return (neuron0x315cec0()*-0.446535);
}

double NNfunction_ss_cLdR::synapse0x31681c0() {
   return (neuron0x3158300()*0.30941);
}

double NNfunction_ss_cLdR::synapse0x3168200() {
   return (neuron0x3158640()*-0.265687);
}

double NNfunction_ss_cLdR::synapse0x3168240() {
   return (neuron0x3158980()*0.284724);
}

double NNfunction_ss_cLdR::synapse0x3168280() {
   return (neuron0x3158cc0()*0.341612);
}

double NNfunction_ss_cLdR::synapse0x3168c00() {
   return (neuron0x3159000()*0.252833);
}

double NNfunction_ss_cLdR::synapse0x3174f50() {
   return (neuron0x3159340()*0.158364);
}

double NNfunction_ss_cLdR::synapse0x3174f90() {
   return (neuron0x3159680()*0.365205);
}

double NNfunction_ss_cLdR::synapse0x3174fd0() {
   return (neuron0x31599c0()*0.239698);
}

double NNfunction_ss_cLdR::synapse0x3175010() {
   return (neuron0x3159d00()*0.0971728);
}

double NNfunction_ss_cLdR::synapse0x3175050() {
   return (neuron0x315a040()*0.383351);
}

double NNfunction_ss_cLdR::synapse0x3175090() {
   return (neuron0x315a380()*0.418787);
}

double NNfunction_ss_cLdR::synapse0x31750d0() {
   return (neuron0x315a6c0()*0.290276);
}

double NNfunction_ss_cLdR::synapse0x3175110() {
   return (neuron0x315aa00()*0.305177);
}

double NNfunction_ss_cLdR::synapse0x3175150() {
   return (neuron0x315ad40()*0.117985);
}

double NNfunction_ss_cLdR::synapse0x3175190() {
   return (neuron0x315b080()*0.0528428);
}

double NNfunction_ss_cLdR::synapse0x31751d0() {
   return (neuron0x315b3c0()*0.211075);
}

double NNfunction_ss_cLdR::synapse0x3168ae0() {
   return (neuron0x315b700()*0.0709077);
}

double NNfunction_ss_cLdR::synapse0x3168b20() {
   return (neuron0x315bc60()*0.140138);
}

double NNfunction_ss_cLdR::synapse0x3175320() {
   return (neuron0x315be80()*-0.0108264);
}

double NNfunction_ss_cLdR::synapse0x3175360() {
   return (neuron0x315c1c0()*0.083945);
}

double NNfunction_ss_cLdR::synapse0x31753a0() {
   return (neuron0x315c500()*-0.0895536);
}

double NNfunction_ss_cLdR::synapse0x31753e0() {
   return (neuron0x315c840()*0.156644);
}

double NNfunction_ss_cLdR::synapse0x3175420() {
   return (neuron0x315cb80()*0.0711776);
}

double NNfunction_ss_cLdR::synapse0x3175460() {
   return (neuron0x315cec0()*-0.0316241);
}

double NNfunction_ss_cLdR::synapse0x31757e0() {
   return (neuron0x3158300()*0.037743);
}

double NNfunction_ss_cLdR::synapse0x3175820() {
   return (neuron0x3158640()*0.00486959);
}

double NNfunction_ss_cLdR::synapse0x3175860() {
   return (neuron0x3158980()*0.101603);
}

double NNfunction_ss_cLdR::synapse0x31758a0() {
   return (neuron0x3158cc0()*-0.09897);
}

double NNfunction_ss_cLdR::synapse0x31758e0() {
   return (neuron0x3159000()*0.0172081);
}

double NNfunction_ss_cLdR::synapse0x3175920() {
   return (neuron0x3159340()*0.0326179);
}

double NNfunction_ss_cLdR::synapse0x3175960() {
   return (neuron0x3159680()*0.0228184);
}

double NNfunction_ss_cLdR::synapse0x31759a0() {
   return (neuron0x31599c0()*0.0486398);
}

double NNfunction_ss_cLdR::synapse0x31759e0() {
   return (neuron0x3159d00()*-0.000169121);
}

double NNfunction_ss_cLdR::synapse0x3175a20() {
   return (neuron0x315a040()*0.0598744);
}

double NNfunction_ss_cLdR::synapse0x3175a60() {
   return (neuron0x315a380()*-0.0124102);
}

double NNfunction_ss_cLdR::synapse0x3175aa0() {
   return (neuron0x315a6c0()*0.0182087);
}

double NNfunction_ss_cLdR::synapse0x3175ae0() {
   return (neuron0x315aa00()*-0.861861);
}

double NNfunction_ss_cLdR::synapse0x3175b20() {
   return (neuron0x315ad40()*-0.0323743);
}

double NNfunction_ss_cLdR::synapse0x3175b60() {
   return (neuron0x315b080()*0.0206011);
}

double NNfunction_ss_cLdR::synapse0x3175ba0() {
   return (neuron0x315b3c0()*0.0145638);
}

double NNfunction_ss_cLdR::synapse0x3175630() {
   return (neuron0x315b700()*-0.0276158);
}

double NNfunction_ss_cLdR::synapse0x3175670() {
   return (neuron0x315bc60()*0.579767);
}

double NNfunction_ss_cLdR::synapse0x3175cf0() {
   return (neuron0x315be80()*-0.0135948);
}

double NNfunction_ss_cLdR::synapse0x3175d30() {
   return (neuron0x315c1c0()*-0.0185315);
}

double NNfunction_ss_cLdR::synapse0x3175d70() {
   return (neuron0x315c500()*-0.0291252);
}

double NNfunction_ss_cLdR::synapse0x3175db0() {
   return (neuron0x315c840()*-0.00855869);
}

double NNfunction_ss_cLdR::synapse0x3175df0() {
   return (neuron0x315cb80()*0.0484782);
}

double NNfunction_ss_cLdR::synapse0x3175e30() {
   return (neuron0x315cec0()*0.0331922);
}

double NNfunction_ss_cLdR::synapse0x31761b0() {
   return (neuron0x3158300()*-0.196993);
}

double NNfunction_ss_cLdR::synapse0x31761f0() {
   return (neuron0x3158640()*-1.00449);
}

double NNfunction_ss_cLdR::synapse0x3176230() {
   return (neuron0x3158980()*0.0441174);
}

double NNfunction_ss_cLdR::synapse0x3176270() {
   return (neuron0x3158cc0()*0.3351);
}

double NNfunction_ss_cLdR::synapse0x31762b0() {
   return (neuron0x3159000()*0.535682);
}

double NNfunction_ss_cLdR::synapse0x31762f0() {
   return (neuron0x3159340()*-0.348194);
}

double NNfunction_ss_cLdR::synapse0x3176330() {
   return (neuron0x3159680()*0.131364);
}

double NNfunction_ss_cLdR::synapse0x3176370() {
   return (neuron0x31599c0()*0.166706);
}

double NNfunction_ss_cLdR::synapse0x31763b0() {
   return (neuron0x3159d00()*0.417074);
}

double NNfunction_ss_cLdR::synapse0x31763f0() {
   return (neuron0x315a040()*-0.461346);
}

double NNfunction_ss_cLdR::synapse0x3176430() {
   return (neuron0x315a380()*-0.870581);
}

double NNfunction_ss_cLdR::synapse0x3176470() {
   return (neuron0x315a6c0()*-0.308318);
}

double NNfunction_ss_cLdR::synapse0x31764b0() {
   return (neuron0x315aa00()*-0.569942);
}

double NNfunction_ss_cLdR::synapse0x31764f0() {
   return (neuron0x315ad40()*-1.15532);
}

double NNfunction_ss_cLdR::synapse0x3176530() {
   return (neuron0x315b080()*0.276946);
}

double NNfunction_ss_cLdR::synapse0x3176570() {
   return (neuron0x315b3c0()*-0.165079);
}

double NNfunction_ss_cLdR::synapse0x3176000() {
   return (neuron0x315b700()*-1.19147);
}

double NNfunction_ss_cLdR::synapse0x3176040() {
   return (neuron0x315bc60()*-0.0648683);
}

double NNfunction_ss_cLdR::synapse0x31766c0() {
   return (neuron0x315be80()*-0.158448);
}

double NNfunction_ss_cLdR::synapse0x3176700() {
   return (neuron0x315c1c0()*0.255944);
}

double NNfunction_ss_cLdR::synapse0x3176740() {
   return (neuron0x315c500()*0.715557);
}

double NNfunction_ss_cLdR::synapse0x3176780() {
   return (neuron0x315c840()*1.01839);
}

double NNfunction_ss_cLdR::synapse0x31767c0() {
   return (neuron0x315cb80()*-0.400724);
}

double NNfunction_ss_cLdR::synapse0x3176800() {
   return (neuron0x315cec0()*0.421957);
}

double NNfunction_ss_cLdR::synapse0x3176b80() {
   return (neuron0x3158300()*-0.209118);
}

double NNfunction_ss_cLdR::synapse0x3176bc0() {
   return (neuron0x3158640()*-0.0092784);
}

double NNfunction_ss_cLdR::synapse0x3176c00() {
   return (neuron0x3158980()*-0.133662);
}

double NNfunction_ss_cLdR::synapse0x3176c40() {
   return (neuron0x3158cc0()*0.381853);
}

double NNfunction_ss_cLdR::synapse0x3176c80() {
   return (neuron0x3159000()*-0.046152);
}

double NNfunction_ss_cLdR::synapse0x3176cc0() {
   return (neuron0x3159340()*0.103089);
}

double NNfunction_ss_cLdR::synapse0x3176d00() {
   return (neuron0x3159680()*0.0739643);
}

double NNfunction_ss_cLdR::synapse0x3176d40() {
   return (neuron0x31599c0()*-0.211254);
}

double NNfunction_ss_cLdR::synapse0x3176d80() {
   return (neuron0x3159d00()*0.0964712);
}

double NNfunction_ss_cLdR::synapse0x3176dc0() {
   return (neuron0x315a040()*-0.0359648);
}

double NNfunction_ss_cLdR::synapse0x3176e00() {
   return (neuron0x315a380()*5.53537e-05);
}

double NNfunction_ss_cLdR::synapse0x3176e40() {
   return (neuron0x315a6c0()*0.0835749);
}

double NNfunction_ss_cLdR::synapse0x3176e80() {
   return (neuron0x315aa00()*-1.0798);
}

double NNfunction_ss_cLdR::synapse0x3176ec0() {
   return (neuron0x315ad40()*-0.178331);
}

double NNfunction_ss_cLdR::synapse0x3176f00() {
   return (neuron0x315b080()*0.0905238);
}

double NNfunction_ss_cLdR::synapse0x3176f40() {
   return (neuron0x315b3c0()*0.0450835);
}

double NNfunction_ss_cLdR::synapse0x31769d0() {
   return (neuron0x315b700()*0.0622596);
}

double NNfunction_ss_cLdR::synapse0x3176a10() {
   return (neuron0x315bc60()*-1.27832);
}

double NNfunction_ss_cLdR::synapse0x3177090() {
   return (neuron0x315be80()*-0.179611);
}

double NNfunction_ss_cLdR::synapse0x31770d0() {
   return (neuron0x315c1c0()*0.216049);
}

double NNfunction_ss_cLdR::synapse0x3177110() {
   return (neuron0x315c500()*-0.0441127);
}

double NNfunction_ss_cLdR::synapse0x3177150() {
   return (neuron0x315c840()*-0.0946695);
}

double NNfunction_ss_cLdR::synapse0x3177190() {
   return (neuron0x315cb80()*0.0478485);
}

double NNfunction_ss_cLdR::synapse0x31771d0() {
   return (neuron0x315cec0()*0.0515631);
}

double NNfunction_ss_cLdR::synapse0x3177550() {
   return (neuron0x3158300()*-0.428024);
}

double NNfunction_ss_cLdR::synapse0x3177590() {
   return (neuron0x3158640()*0.567121);
}

double NNfunction_ss_cLdR::synapse0x31775d0() {
   return (neuron0x3158980()*0.723582);
}

double NNfunction_ss_cLdR::synapse0x3177610() {
   return (neuron0x3158cc0()*-0.366472);
}

double NNfunction_ss_cLdR::synapse0x3177650() {
   return (neuron0x3159000()*-0.153526);
}

double NNfunction_ss_cLdR::synapse0x3177690() {
   return (neuron0x3159340()*-0.446913);
}

double NNfunction_ss_cLdR::synapse0x31776d0() {
   return (neuron0x3159680()*-0.194913);
}

double NNfunction_ss_cLdR::synapse0x3177710() {
   return (neuron0x31599c0()*-0.401041);
}

double NNfunction_ss_cLdR::synapse0x3177750() {
   return (neuron0x3159d00()*0.491972);
}

double NNfunction_ss_cLdR::synapse0x3177790() {
   return (neuron0x315a040()*-0.034416);
}

double NNfunction_ss_cLdR::synapse0x31777d0() {
   return (neuron0x315a380()*-0.299362);
}

double NNfunction_ss_cLdR::synapse0x3177810() {
   return (neuron0x315a6c0()*-0.125526);
}

double NNfunction_ss_cLdR::synapse0x3177850() {
   return (neuron0x315aa00()*-0.0489971);
}

double NNfunction_ss_cLdR::synapse0x3177890() {
   return (neuron0x315ad40()*0.318895);
}

double NNfunction_ss_cLdR::synapse0x31778d0() {
   return (neuron0x315b080()*0.821453);
}

double NNfunction_ss_cLdR::synapse0x3177910() {
   return (neuron0x315b3c0()*0.564193);
}

double NNfunction_ss_cLdR::synapse0x31773a0() {
   return (neuron0x315b700()*0.141826);
}

double NNfunction_ss_cLdR::synapse0x31773e0() {
   return (neuron0x315bc60()*0.738603);
}

double NNfunction_ss_cLdR::synapse0x3177a60() {
   return (neuron0x315be80()*-0.100895);
}

double NNfunction_ss_cLdR::synapse0x3177aa0() {
   return (neuron0x315c1c0()*0.819304);
}

double NNfunction_ss_cLdR::synapse0x3177ae0() {
   return (neuron0x315c500()*0.0356623);
}

double NNfunction_ss_cLdR::synapse0x3177b20() {
   return (neuron0x315c840()*-0.00506827);
}

double NNfunction_ss_cLdR::synapse0x3177b60() {
   return (neuron0x315cb80()*0.137978);
}

double NNfunction_ss_cLdR::synapse0x3177ba0() {
   return (neuron0x315cec0()*-0.428939);
}

double NNfunction_ss_cLdR::synapse0x3177f20() {
   return (neuron0x3158300()*0.0733425);
}

double NNfunction_ss_cLdR::synapse0x3177f60() {
   return (neuron0x3158640()*0.0739301);
}

double NNfunction_ss_cLdR::synapse0x3177fa0() {
   return (neuron0x3158980()*-0.259174);
}

double NNfunction_ss_cLdR::synapse0x3177fe0() {
   return (neuron0x3158cc0()*0.779249);
}

double NNfunction_ss_cLdR::synapse0x3178020() {
   return (neuron0x3159000()*-0.24137);
}

double NNfunction_ss_cLdR::synapse0x3178060() {
   return (neuron0x3159340()*0.692895);
}

double NNfunction_ss_cLdR::synapse0x31780a0() {
   return (neuron0x3159680()*-0.122354);
}

double NNfunction_ss_cLdR::synapse0x31780e0() {
   return (neuron0x31599c0()*-0.583343);
}

double NNfunction_ss_cLdR::synapse0x3178120() {
   return (neuron0x3159d00()*0.101884);
}

double NNfunction_ss_cLdR::synapse0x3178160() {
   return (neuron0x315a040()*-0.933443);
}

double NNfunction_ss_cLdR::synapse0x31781a0() {
   return (neuron0x315a380()*-0.00989276);
}

double NNfunction_ss_cLdR::synapse0x31781e0() {
   return (neuron0x315a6c0()*0.0333405);
}

double NNfunction_ss_cLdR::synapse0x3178220() {
   return (neuron0x315aa00()*-0.0483119);
}

double NNfunction_ss_cLdR::synapse0x3178260() {
   return (neuron0x315ad40()*-0.559728);
}

double NNfunction_ss_cLdR::synapse0x31782a0() {
   return (neuron0x315b080()*0.564873);
}

double NNfunction_ss_cLdR::synapse0x31782e0() {
   return (neuron0x315b3c0()*-0.216996);
}

double NNfunction_ss_cLdR::synapse0x3177d70() {
   return (neuron0x315b700()*0.357869);
}

double NNfunction_ss_cLdR::synapse0x3177db0() {
   return (neuron0x315bc60()*-1.41333);
}

double NNfunction_ss_cLdR::synapse0x3178430() {
   return (neuron0x315be80()*0.0365907);
}

double NNfunction_ss_cLdR::synapse0x3178470() {
   return (neuron0x315c1c0()*0.377867);
}

double NNfunction_ss_cLdR::synapse0x31784b0() {
   return (neuron0x315c500()*0.287092);
}

double NNfunction_ss_cLdR::synapse0x31784f0() {
   return (neuron0x315c840()*-0.0478404);
}

double NNfunction_ss_cLdR::synapse0x3178530() {
   return (neuron0x315cb80()*0.384603);
}

double NNfunction_ss_cLdR::synapse0x3178570() {
   return (neuron0x315cec0()*0.35331);
}

double NNfunction_ss_cLdR::synapse0x31788f0() {
   return (neuron0x3158300()*0.380567);
}

double NNfunction_ss_cLdR::synapse0x3178930() {
   return (neuron0x3158640()*0.173836);
}

double NNfunction_ss_cLdR::synapse0x3178970() {
   return (neuron0x3158980()*-0.0535887);
}

double NNfunction_ss_cLdR::synapse0x31789b0() {
   return (neuron0x3158cc0()*0.33274);
}

double NNfunction_ss_cLdR::synapse0x31789f0() {
   return (neuron0x3159000()*0.474975);
}

double NNfunction_ss_cLdR::synapse0x3178a30() {
   return (neuron0x3159340()*0.552863);
}

double NNfunction_ss_cLdR::synapse0x3178a70() {
   return (neuron0x3159680()*-0.589389);
}

double NNfunction_ss_cLdR::synapse0x3178ab0() {
   return (neuron0x31599c0()*-0.287748);
}

double NNfunction_ss_cLdR::synapse0x3178af0() {
   return (neuron0x3159d00()*0.1241);
}

double NNfunction_ss_cLdR::synapse0x3178b30() {
   return (neuron0x315a040()*0.21867);
}

double NNfunction_ss_cLdR::synapse0x3178b70() {
   return (neuron0x315a380()*0.254191);
}

double NNfunction_ss_cLdR::synapse0x3178bb0() {
   return (neuron0x315a6c0()*0.349523);
}

double NNfunction_ss_cLdR::synapse0x3178bf0() {
   return (neuron0x315aa00()*-1.25024);
}

double NNfunction_ss_cLdR::synapse0x3178c30() {
   return (neuron0x315ad40()*0.463476);
}

double NNfunction_ss_cLdR::synapse0x3178c70() {
   return (neuron0x315b080()*-0.135661);
}

double NNfunction_ss_cLdR::synapse0x3178cb0() {
   return (neuron0x315b3c0()*-0.935827);
}

double NNfunction_ss_cLdR::synapse0x3178740() {
   return (neuron0x315b700()*0.852299);
}

double NNfunction_ss_cLdR::synapse0x3178780() {
   return (neuron0x315bc60()*-0.216115);
}

double NNfunction_ss_cLdR::synapse0x3178e00() {
   return (neuron0x315be80()*-0.260255);
}

double NNfunction_ss_cLdR::synapse0x3178e40() {
   return (neuron0x315c1c0()*0.250018);
}

double NNfunction_ss_cLdR::synapse0x3178e80() {
   return (neuron0x315c500()*-0.541933);
}

double NNfunction_ss_cLdR::synapse0x3178ec0() {
   return (neuron0x315c840()*0.515191);
}

double NNfunction_ss_cLdR::synapse0x3178f00() {
   return (neuron0x315cb80()*0.929363);
}

double NNfunction_ss_cLdR::synapse0x3178f40() {
   return (neuron0x315cec0()*0.491396);
}

double NNfunction_ss_cLdR::synapse0x31792c0() {
   return (neuron0x3158300()*0.534554);
}

double NNfunction_ss_cLdR::synapse0x3179300() {
   return (neuron0x3158640()*0.0663594);
}

double NNfunction_ss_cLdR::synapse0x3179340() {
   return (neuron0x3158980()*-0.312929);
}

double NNfunction_ss_cLdR::synapse0x3179380() {
   return (neuron0x3158cc0()*0.0807449);
}

double NNfunction_ss_cLdR::synapse0x31793c0() {
   return (neuron0x3159000()*-0.441707);
}

double NNfunction_ss_cLdR::synapse0x3179400() {
   return (neuron0x3159340()*-0.281945);
}

double NNfunction_ss_cLdR::synapse0x3179440() {
   return (neuron0x3159680()*0.229768);
}

double NNfunction_ss_cLdR::synapse0x3179480() {
   return (neuron0x31599c0()*-0.255486);
}

double NNfunction_ss_cLdR::synapse0x31794c0() {
   return (neuron0x3159d00()*-0.0491597);
}

double NNfunction_ss_cLdR::synapse0x3179500() {
   return (neuron0x315a040()*-0.715077);
}

double NNfunction_ss_cLdR::synapse0x3179540() {
   return (neuron0x315a380()*-0.290598);
}

double NNfunction_ss_cLdR::synapse0x3179580() {
   return (neuron0x315a6c0()*-0.429679);
}

double NNfunction_ss_cLdR::synapse0x31795c0() {
   return (neuron0x315aa00()*-0.199336);
}

double NNfunction_ss_cLdR::synapse0x3179600() {
   return (neuron0x315ad40()*-0.737067);
}

double NNfunction_ss_cLdR::synapse0x3179640() {
   return (neuron0x315b080()*-0.662601);
}

double NNfunction_ss_cLdR::synapse0x3179680() {
   return (neuron0x315b3c0()*-0.51311);
}

double NNfunction_ss_cLdR::synapse0x3179110() {
   return (neuron0x315b700()*0.0618515);
}

double NNfunction_ss_cLdR::synapse0x3179150() {
   return (neuron0x315bc60()*0.304254);
}

double NNfunction_ss_cLdR::synapse0x31797d0() {
   return (neuron0x315be80()*-0.0731578);
}

double NNfunction_ss_cLdR::synapse0x3179810() {
   return (neuron0x315c1c0()*0.0202625);
}

double NNfunction_ss_cLdR::synapse0x3179850() {
   return (neuron0x315c500()*-0.222102);
}

double NNfunction_ss_cLdR::synapse0x3179890() {
   return (neuron0x315c840()*0.408914);
}

double NNfunction_ss_cLdR::synapse0x31798d0() {
   return (neuron0x315cb80()*0.290147);
}

double NNfunction_ss_cLdR::synapse0x3179910() {
   return (neuron0x315cec0()*-0.520423);
}

double NNfunction_ss_cLdR::synapse0x31623c0() {
   return (neuron0x3158300()*0.0371909);
}

double NNfunction_ss_cLdR::synapse0x3162400() {
   return (neuron0x3158640()*-0.0205252);
}

double NNfunction_ss_cLdR::synapse0x3162440() {
   return (neuron0x3158980()*-0.0137056);
}

double NNfunction_ss_cLdR::synapse0x3162480() {
   return (neuron0x3158cc0()*-0.11069);
}

double NNfunction_ss_cLdR::synapse0x31624c0() {
   return (neuron0x3159000()*-0.00186459);
}

double NNfunction_ss_cLdR::synapse0x3162500() {
   return (neuron0x3159340()*-0.0499173);
}

double NNfunction_ss_cLdR::synapse0x3162540() {
   return (neuron0x3159680()*-0.0440935);
}

double NNfunction_ss_cLdR::synapse0x3162580() {
   return (neuron0x31599c0()*-0.00248906);
}

double NNfunction_ss_cLdR::synapse0x317a0a0() {
   return (neuron0x3159d00()*-0.0120202);
}

double NNfunction_ss_cLdR::synapse0x317a0e0() {
   return (neuron0x315a040()*-0.0917869);
}

double NNfunction_ss_cLdR::synapse0x317a120() {
   return (neuron0x315a380()*-0.00531289);
}

double NNfunction_ss_cLdR::synapse0x317a160() {
   return (neuron0x315a6c0()*-0.283881);
}

double NNfunction_ss_cLdR::synapse0x317a1a0() {
   return (neuron0x315aa00()*-0.157282);
}

double NNfunction_ss_cLdR::synapse0x317a1e0() {
   return (neuron0x315ad40()*0.0358442);
}

double NNfunction_ss_cLdR::synapse0x317a220() {
   return (neuron0x315b080()*-0.270842);
}

double NNfunction_ss_cLdR::synapse0x317a260() {
   return (neuron0x315b3c0()*-0.191598);
}

double NNfunction_ss_cLdR::synapse0x3179ae0() {
   return (neuron0x315b700()*0.0753494);
}

double NNfunction_ss_cLdR::synapse0x3179b20() {
   return (neuron0x315bc60()*-0.179469);
}

double NNfunction_ss_cLdR::synapse0x317a3b0() {
   return (neuron0x315be80()*-0.13689);
}

double NNfunction_ss_cLdR::synapse0x317a3f0() {
   return (neuron0x315c1c0()*-0.0013082);
}

double NNfunction_ss_cLdR::synapse0x317a430() {
   return (neuron0x315c500()*-0.0449902);
}

double NNfunction_ss_cLdR::synapse0x317a470() {
   return (neuron0x315c840()*0.00611455);
}

double NNfunction_ss_cLdR::synapse0x317a4b0() {
   return (neuron0x315cb80()*-0.0749126);
}

double NNfunction_ss_cLdR::synapse0x317a4f0() {
   return (neuron0x315cec0()*0.00223312);
}

double NNfunction_ss_cLdR::synapse0x317a870() {
   return (neuron0x3158300()*-0.455439);
}

double NNfunction_ss_cLdR::synapse0x317a8b0() {
   return (neuron0x3158640()*0.0549046);
}

double NNfunction_ss_cLdR::synapse0x317a8f0() {
   return (neuron0x3158980()*0.360668);
}

double NNfunction_ss_cLdR::synapse0x317a930() {
   return (neuron0x3158cc0()*0.0251246);
}

double NNfunction_ss_cLdR::synapse0x317a970() {
   return (neuron0x3159000()*0.142546);
}

double NNfunction_ss_cLdR::synapse0x317a9b0() {
   return (neuron0x3159340()*-0.0812632);
}

double NNfunction_ss_cLdR::synapse0x317a9f0() {
   return (neuron0x3159680()*0.167267);
}

double NNfunction_ss_cLdR::synapse0x317aa30() {
   return (neuron0x31599c0()*-0.159261);
}

double NNfunction_ss_cLdR::synapse0x317aa70() {
   return (neuron0x3159d00()*0.173336);
}

double NNfunction_ss_cLdR::synapse0x317aab0() {
   return (neuron0x315a040()*-0.76432);
}

double NNfunction_ss_cLdR::synapse0x317aaf0() {
   return (neuron0x315a380()*-0.0679898);
}

double NNfunction_ss_cLdR::synapse0x317ab30() {
   return (neuron0x315a6c0()*-0.391585);
}

double NNfunction_ss_cLdR::synapse0x317ab70() {
   return (neuron0x315aa00()*-0.0422881);
}

double NNfunction_ss_cLdR::synapse0x317abb0() {
   return (neuron0x315ad40()*-0.0722375);
}

double NNfunction_ss_cLdR::synapse0x317abf0() {
   return (neuron0x315b080()*0.1587);
}

double NNfunction_ss_cLdR::synapse0x317ac30() {
   return (neuron0x315b3c0()*-0.0297853);
}

double NNfunction_ss_cLdR::synapse0x317a6c0() {
   return (neuron0x315b700()*0.345909);
}

double NNfunction_ss_cLdR::synapse0x317a700() {
   return (neuron0x315bc60()*-1.5871);
}

double NNfunction_ss_cLdR::synapse0x317ad80() {
   return (neuron0x315be80()*0.00333034);
}

double NNfunction_ss_cLdR::synapse0x317adc0() {
   return (neuron0x315c1c0()*-0.122275);
}

double NNfunction_ss_cLdR::synapse0x317ae00() {
   return (neuron0x315c500()*0.271355);
}

double NNfunction_ss_cLdR::synapse0x317ae40() {
   return (neuron0x315c840()*-0.125409);
}

double NNfunction_ss_cLdR::synapse0x317ae80() {
   return (neuron0x315cb80()*-0.0572157);
}

double NNfunction_ss_cLdR::synapse0x317aec0() {
   return (neuron0x315cec0()*0.131152);
}

double NNfunction_ss_cLdR::synapse0x317b240() {
   return (neuron0x3158300()*0.190082);
}

double NNfunction_ss_cLdR::synapse0x317b280() {
   return (neuron0x3158640()*-0.411908);
}

double NNfunction_ss_cLdR::synapse0x317b2c0() {
   return (neuron0x3158980()*-1.09325);
}

double NNfunction_ss_cLdR::synapse0x317b300() {
   return (neuron0x3158cc0()*-1.03645);
}

double NNfunction_ss_cLdR::synapse0x317b340() {
   return (neuron0x3159000()*-0.214401);
}

double NNfunction_ss_cLdR::synapse0x317b380() {
   return (neuron0x3159340()*1.06249);
}

double NNfunction_ss_cLdR::synapse0x317b3c0() {
   return (neuron0x3159680()*-0.348227);
}

double NNfunction_ss_cLdR::synapse0x317b400() {
   return (neuron0x31599c0()*0.2696);
}

double NNfunction_ss_cLdR::synapse0x317b440() {
   return (neuron0x3159d00()*-0.655846);
}

double NNfunction_ss_cLdR::synapse0x317b480() {
   return (neuron0x315a040()*-0.624456);
}

double NNfunction_ss_cLdR::synapse0x317b4c0() {
   return (neuron0x315a380()*-0.0938245);
}

double NNfunction_ss_cLdR::synapse0x317b500() {
   return (neuron0x315a6c0()*0.19512);
}

double NNfunction_ss_cLdR::synapse0x317b540() {
   return (neuron0x315aa00()*-0.663564);
}

double NNfunction_ss_cLdR::synapse0x317b580() {
   return (neuron0x315ad40()*0.422124);
}

double NNfunction_ss_cLdR::synapse0x317b5c0() {
   return (neuron0x315b080()*-0.550883);
}

double NNfunction_ss_cLdR::synapse0x317b600() {
   return (neuron0x315b3c0()*-0.904005);
}

double NNfunction_ss_cLdR::synapse0x317b090() {
   return (neuron0x315b700()*-0.79615);
}

double NNfunction_ss_cLdR::synapse0x317b0d0() {
   return (neuron0x315bc60()*-0.11007);
}

double NNfunction_ss_cLdR::synapse0x316bc00() {
   return (neuron0x315be80()*0.130652);
}

double NNfunction_ss_cLdR::synapse0x316bc40() {
   return (neuron0x315c1c0()*-0.657579);
}

double NNfunction_ss_cLdR::synapse0x316bc80() {
   return (neuron0x315c500()*0.470684);
}

double NNfunction_ss_cLdR::synapse0x316bcc0() {
   return (neuron0x315c840()*0.123553);
}

double NNfunction_ss_cLdR::synapse0x316bd00() {
   return (neuron0x315cb80()*-0.0916565);
}

double NNfunction_ss_cLdR::synapse0x316bd40() {
   return (neuron0x315cec0()*0.0377656);
}

double NNfunction_ss_cLdR::synapse0x316c0c0() {
   return (neuron0x3158300()*0.228454);
}

double NNfunction_ss_cLdR::synapse0x316c100() {
   return (neuron0x3158640()*-0.193277);
}

double NNfunction_ss_cLdR::synapse0x316c140() {
   return (neuron0x3158980()*-0.835656);
}

double NNfunction_ss_cLdR::synapse0x316c180() {
   return (neuron0x3158cc0()*1.00439);
}

double NNfunction_ss_cLdR::synapse0x316c1c0() {
   return (neuron0x3159000()*-0.517575);
}

double NNfunction_ss_cLdR::synapse0x316c200() {
   return (neuron0x3159340()*-0.276419);
}

double NNfunction_ss_cLdR::synapse0x316c240() {
   return (neuron0x3159680()*0.0742557);
}

double NNfunction_ss_cLdR::synapse0x316c280() {
   return (neuron0x31599c0()*-0.363381);
}

double NNfunction_ss_cLdR::synapse0x316c2c0() {
   return (neuron0x3159d00()*0.58632);
}

double NNfunction_ss_cLdR::synapse0x316c300() {
   return (neuron0x315a040()*-0.829042);
}

double NNfunction_ss_cLdR::synapse0x316c340() {
   return (neuron0x315a380()*-0.554747);
}

double NNfunction_ss_cLdR::synapse0x316c380() {
   return (neuron0x315a6c0()*-0.435756);
}

double NNfunction_ss_cLdR::synapse0x316c3c0() {
   return (neuron0x315aa00()*0.649051);
}

double NNfunction_ss_cLdR::synapse0x316c400() {
   return (neuron0x315ad40()*0.851905);
}

double NNfunction_ss_cLdR::synapse0x316c440() {
   return (neuron0x315b080()*-0.945824);
}

double NNfunction_ss_cLdR::synapse0x316c480() {
   return (neuron0x315b3c0()*0.813577);
}

double NNfunction_ss_cLdR::synapse0x316bf10() {
   return (neuron0x315b700()*-0.799754);
}

double NNfunction_ss_cLdR::synapse0x316bf50() {
   return (neuron0x315bc60()*0.723229);
}

double NNfunction_ss_cLdR::synapse0x316c5d0() {
   return (neuron0x315be80()*-0.129054);
}

double NNfunction_ss_cLdR::synapse0x316c610() {
   return (neuron0x315c1c0()*0.0527007);
}

double NNfunction_ss_cLdR::synapse0x316c650() {
   return (neuron0x315c500()*-0.45277);
}

double NNfunction_ss_cLdR::synapse0x316c690() {
   return (neuron0x315c840()*-0.247087);
}

double NNfunction_ss_cLdR::synapse0x316c6d0() {
   return (neuron0x315cb80()*0.407634);
}

double NNfunction_ss_cLdR::synapse0x316c710() {
   return (neuron0x315cec0()*0.111789);
}

double NNfunction_ss_cLdR::synapse0x316ca90() {
   return (neuron0x3158300()*0.0459585);
}

double NNfunction_ss_cLdR::synapse0x316cad0() {
   return (neuron0x3158640()*0.0316601);
}

double NNfunction_ss_cLdR::synapse0x316cb10() {
   return (neuron0x3158980()*0.304016);
}

double NNfunction_ss_cLdR::synapse0x316cb50() {
   return (neuron0x3158cc0()*-3.33389);
}

double NNfunction_ss_cLdR::synapse0x316cb90() {
   return (neuron0x3159000()*-0.280624);
}

double NNfunction_ss_cLdR::synapse0x316cbd0() {
   return (neuron0x3159340()*1.49972);
}

double NNfunction_ss_cLdR::synapse0x316cc10() {
   return (neuron0x3159680()*1.13375);
}

double NNfunction_ss_cLdR::synapse0x316cc50() {
   return (neuron0x31599c0()*1.20733);
}

double NNfunction_ss_cLdR::synapse0x316cc90() {
   return (neuron0x3159d00()*1.29293);
}

double NNfunction_ss_cLdR::synapse0x316ccd0() {
   return (neuron0x315a040()*0.925824);
}

double NNfunction_ss_cLdR::synapse0x316cd10() {
   return (neuron0x315a380()*1.24361);
}

double NNfunction_ss_cLdR::synapse0x316cd50() {
   return (neuron0x315a6c0()*-0.100085);
}

double NNfunction_ss_cLdR::synapse0x316cd90() {
   return (neuron0x315aa00()*0.555221);
}

double NNfunction_ss_cLdR::synapse0x316cdd0() {
   return (neuron0x315ad40()*-0.230582);
}

double NNfunction_ss_cLdR::synapse0x316ce10() {
   return (neuron0x315b080()*-0.419292);
}

double NNfunction_ss_cLdR::synapse0x316ce50() {
   return (neuron0x315b3c0()*-0.566207);
}

double NNfunction_ss_cLdR::synapse0x316c8e0() {
   return (neuron0x315b700()*-0.33812);
}

double NNfunction_ss_cLdR::synapse0x316c920() {
   return (neuron0x315bc60()*-1.34084);
}

double NNfunction_ss_cLdR::synapse0x316cfa0() {
   return (neuron0x315be80()*-0.951498);
}

double NNfunction_ss_cLdR::synapse0x316cfe0() {
   return (neuron0x315c1c0()*-0.277474);
}

double NNfunction_ss_cLdR::synapse0x316d020() {
   return (neuron0x315c500()*0.918275);
}

double NNfunction_ss_cLdR::synapse0x316d060() {
   return (neuron0x315c840()*1.0959);
}

double NNfunction_ss_cLdR::synapse0x316d0a0() {
   return (neuron0x315cb80()*-1.70951);
}

double NNfunction_ss_cLdR::synapse0x316d0e0() {
   return (neuron0x315cec0()*-0.00776187);
}

double NNfunction_ss_cLdR::synapse0x316d460() {
   return (neuron0x3158300()*-0.451592);
}

double NNfunction_ss_cLdR::synapse0x316d4a0() {
   return (neuron0x3158640()*0.201635);
}

double NNfunction_ss_cLdR::synapse0x316d4e0() {
   return (neuron0x3158980()*-0.422565);
}

double NNfunction_ss_cLdR::synapse0x316d520() {
   return (neuron0x3158cc0()*-0.140529);
}

double NNfunction_ss_cLdR::synapse0x316d560() {
   return (neuron0x3159000()*0.474065);
}

double NNfunction_ss_cLdR::synapse0x316d5a0() {
   return (neuron0x3159340()*0.255561);
}

double NNfunction_ss_cLdR::synapse0x316d5e0() {
   return (neuron0x3159680()*0.0949711);
}

double NNfunction_ss_cLdR::synapse0x316d620() {
   return (neuron0x31599c0()*-0.214513);
}

double NNfunction_ss_cLdR::synapse0x316d660() {
   return (neuron0x3159d00()*-0.241019);
}

double NNfunction_ss_cLdR::synapse0x316d6a0() {
   return (neuron0x315a040()*-0.252547);
}

double NNfunction_ss_cLdR::synapse0x316d6e0() {
   return (neuron0x315a380()*0.0480184);
}

double NNfunction_ss_cLdR::synapse0x316d720() {
   return (neuron0x315a6c0()*0.935244);
}

double NNfunction_ss_cLdR::synapse0x316d760() {
   return (neuron0x315aa00()*1.06125);
}

double NNfunction_ss_cLdR::synapse0x316d7a0() {
   return (neuron0x315ad40()*0.14428);
}

double NNfunction_ss_cLdR::synapse0x316d7e0() {
   return (neuron0x315b080()*0.41769);
}

double NNfunction_ss_cLdR::synapse0x316d820() {
   return (neuron0x315b3c0()*0.231807);
}

double NNfunction_ss_cLdR::synapse0x316d2b0() {
   return (neuron0x315b700()*-0.425527);
}

double NNfunction_ss_cLdR::synapse0x316d2f0() {
   return (neuron0x315bc60()*-0.0732127);
}

double NNfunction_ss_cLdR::synapse0x316d970() {
   return (neuron0x315be80()*0.658133);
}

double NNfunction_ss_cLdR::synapse0x316d9b0() {
   return (neuron0x315c1c0()*0.683217);
}

double NNfunction_ss_cLdR::synapse0x316d9f0() {
   return (neuron0x315c500()*-0.034502);
}

double NNfunction_ss_cLdR::synapse0x316da30() {
   return (neuron0x315c840()*0.0631);
}

double NNfunction_ss_cLdR::synapse0x316da70() {
   return (neuron0x315cb80()*-0.0616329);
}

double NNfunction_ss_cLdR::synapse0x316dab0() {
   return (neuron0x315cec0()*0.377348);
}

double NNfunction_ss_cLdR::synapse0x317f980() {
   return (neuron0x3158300()*-0.0311187);
}

double NNfunction_ss_cLdR::synapse0x317f9c0() {
   return (neuron0x3158640()*0.0151303);
}

double NNfunction_ss_cLdR::synapse0x317fa00() {
   return (neuron0x3158980()*1.23082);
}

double NNfunction_ss_cLdR::synapse0x317fa40() {
   return (neuron0x3158cc0()*-2.5218);
}

double NNfunction_ss_cLdR::synapse0x317fa80() {
   return (neuron0x3159000()*-0.020585);
}

double NNfunction_ss_cLdR::synapse0x317fac0() {
   return (neuron0x3159340()*1.41067);
}

double NNfunction_ss_cLdR::synapse0x317fb00() {
   return (neuron0x3159680()*0.97475);
}

double NNfunction_ss_cLdR::synapse0x317fb40() {
   return (neuron0x31599c0()*1.17674);
}

double NNfunction_ss_cLdR::synapse0x317fb80() {
   return (neuron0x3159d00()*0.989341);
}

double NNfunction_ss_cLdR::synapse0x317fbc0() {
   return (neuron0x315a040()*0.975731);
}

double NNfunction_ss_cLdR::synapse0x317fc00() {
   return (neuron0x315a380()*1.13723);
}

double NNfunction_ss_cLdR::synapse0x317fc40() {
   return (neuron0x315a6c0()*-0.133296);
}

double NNfunction_ss_cLdR::synapse0x317fc80() {
   return (neuron0x315aa00()*-0.413718);
}

double NNfunction_ss_cLdR::synapse0x317fcc0() {
   return (neuron0x315ad40()*-0.070312);
}

double NNfunction_ss_cLdR::synapse0x317fd00() {
   return (neuron0x315b080()*-0.444181);
}

double NNfunction_ss_cLdR::synapse0x317fd40() {
   return (neuron0x315b3c0()*-0.669151);
}

double NNfunction_ss_cLdR::synapse0x316daf0() {
   return (neuron0x315b700()*-0.242255);
}

double NNfunction_ss_cLdR::synapse0x316db30() {
   return (neuron0x315bc60()*-1.18028);
}

double NNfunction_ss_cLdR::synapse0x317fe90() {
   return (neuron0x315be80()*-0.527049);
}

double NNfunction_ss_cLdR::synapse0x317fed0() {
   return (neuron0x315c1c0()*-0.298123);
}

double NNfunction_ss_cLdR::synapse0x317ff10() {
   return (neuron0x315c500()*0.706782);
}

double NNfunction_ss_cLdR::synapse0x317ff50() {
   return (neuron0x315c840()*0.616188);
}

double NNfunction_ss_cLdR::synapse0x317ff90() {
   return (neuron0x315cb80()*-0.866413);
}

double NNfunction_ss_cLdR::synapse0x317ffd0() {
   return (neuron0x315cec0()*-0.0599136);
}

double NNfunction_ss_cLdR::synapse0x3180350() {
   return (neuron0x3158300()*-0.747908);
}

double NNfunction_ss_cLdR::synapse0x3180390() {
   return (neuron0x3158640()*0.0899389);
}

double NNfunction_ss_cLdR::synapse0x31803d0() {
   return (neuron0x3158980()*-0.00663536);
}

double NNfunction_ss_cLdR::synapse0x3180410() {
   return (neuron0x3158cc0()*-0.387648);
}

double NNfunction_ss_cLdR::synapse0x3180450() {
   return (neuron0x3159000()*0.0919536);
}

double NNfunction_ss_cLdR::synapse0x3180490() {
   return (neuron0x3159340()*0.180054);
}

double NNfunction_ss_cLdR::synapse0x31804d0() {
   return (neuron0x3159680()*0.318921);
}

double NNfunction_ss_cLdR::synapse0x3180510() {
   return (neuron0x31599c0()*0.235657);
}

double NNfunction_ss_cLdR::synapse0x3180550() {
   return (neuron0x3159d00()*0.0279795);
}

double NNfunction_ss_cLdR::synapse0x3180590() {
   return (neuron0x315a040()*0.0896816);
}

double NNfunction_ss_cLdR::synapse0x31805d0() {
   return (neuron0x315a380()*0.0810823);
}

double NNfunction_ss_cLdR::synapse0x3180610() {
   return (neuron0x315a6c0()*-0.461433);
}

double NNfunction_ss_cLdR::synapse0x3180650() {
   return (neuron0x315aa00()*-0.310067);
}

double NNfunction_ss_cLdR::synapse0x3180690() {
   return (neuron0x315ad40()*0.169502);
}

double NNfunction_ss_cLdR::synapse0x31806d0() {
   return (neuron0x315b080()*-0.06055);
}

double NNfunction_ss_cLdR::synapse0x3180710() {
   return (neuron0x315b3c0()*-0.695876);
}

double NNfunction_ss_cLdR::synapse0x31801a0() {
   return (neuron0x315b700()*-0.389513);
}

double NNfunction_ss_cLdR::synapse0x31801e0() {
   return (neuron0x315bc60()*-0.371811);
}

double NNfunction_ss_cLdR::synapse0x3180860() {
   return (neuron0x315be80()*-0.656773);
}

double NNfunction_ss_cLdR::synapse0x31808a0() {
   return (neuron0x315c1c0()*0.199889);
}

double NNfunction_ss_cLdR::synapse0x31808e0() {
   return (neuron0x315c500()*-0.676026);
}

double NNfunction_ss_cLdR::synapse0x3180920() {
   return (neuron0x315c840()*0.164424);
}

double NNfunction_ss_cLdR::synapse0x3180960() {
   return (neuron0x315cb80()*0.553092);
}

double NNfunction_ss_cLdR::synapse0x31809a0() {
   return (neuron0x315cec0()*0.51737);
}

double NNfunction_ss_cLdR::synapse0x3180d20() {
   return (neuron0x3158300()*8.33753e-05);
}

double NNfunction_ss_cLdR::synapse0x3180d60() {
   return (neuron0x3158640()*0.00645751);
}

double NNfunction_ss_cLdR::synapse0x3180da0() {
   return (neuron0x3158980()*0.0206106);
}

double NNfunction_ss_cLdR::synapse0x3180de0() {
   return (neuron0x3158cc0()*-0.977944);
}

double NNfunction_ss_cLdR::synapse0x3180e20() {
   return (neuron0x3159000()*-0.0028374);
}

double NNfunction_ss_cLdR::synapse0x3180e60() {
   return (neuron0x3159340()*-0.0125366);
}

double NNfunction_ss_cLdR::synapse0x3180ea0() {
   return (neuron0x3159680()*0.00296818);
}

double NNfunction_ss_cLdR::synapse0x3180ee0() {
   return (neuron0x31599c0()*-0.0370877);
}

double NNfunction_ss_cLdR::synapse0x3180f20() {
   return (neuron0x3159d00()*0.0074403);
}

double NNfunction_ss_cLdR::synapse0x3180f60() {
   return (neuron0x315a040()*0.00339766);
}

double NNfunction_ss_cLdR::synapse0x3180fa0() {
   return (neuron0x315a380()*0.00588503);
}

double NNfunction_ss_cLdR::synapse0x3180fe0() {
   return (neuron0x315a6c0()*0.0106178);
}

double NNfunction_ss_cLdR::synapse0x3181020() {
   return (neuron0x315aa00()*0.648929);
}

double NNfunction_ss_cLdR::synapse0x3181060() {
   return (neuron0x315ad40()*0.00326668);
}

double NNfunction_ss_cLdR::synapse0x31810a0() {
   return (neuron0x315b080()*0.0196969);
}

double NNfunction_ss_cLdR::synapse0x31810e0() {
   return (neuron0x315b3c0()*0.0352326);
}

double NNfunction_ss_cLdR::synapse0x3180b70() {
   return (neuron0x315b700()*-0.0189107);
}

double NNfunction_ss_cLdR::synapse0x3180bb0() {
   return (neuron0x315bc60()*-0.149899);
}

double NNfunction_ss_cLdR::synapse0x3181230() {
   return (neuron0x315be80()*-0.00362936);
}

double NNfunction_ss_cLdR::synapse0x3181270() {
   return (neuron0x315c1c0()*0.0260061);
}

double NNfunction_ss_cLdR::synapse0x31812b0() {
   return (neuron0x315c500()*0.00556286);
}

double NNfunction_ss_cLdR::synapse0x31812f0() {
   return (neuron0x315c840()*0.0110352);
}

double NNfunction_ss_cLdR::synapse0x3181330() {
   return (neuron0x315cb80()*-0.0466754);
}

double NNfunction_ss_cLdR::synapse0x3181370() {
   return (neuron0x315cec0()*-0.0323161);
}

double NNfunction_ss_cLdR::synapse0x31816f0() {
   return (neuron0x3158300()*0.0197888);
}

double NNfunction_ss_cLdR::synapse0x3181730() {
   return (neuron0x3158640()*-0.0228413);
}

double NNfunction_ss_cLdR::synapse0x3181770() {
   return (neuron0x3158980()*0.00957171);
}

double NNfunction_ss_cLdR::synapse0x31817b0() {
   return (neuron0x3158cc0()*-0.133809);
}

double NNfunction_ss_cLdR::synapse0x31817f0() {
   return (neuron0x3159000()*0.0152043);
}

double NNfunction_ss_cLdR::synapse0x3181830() {
   return (neuron0x3159340()*0.0172897);
}

double NNfunction_ss_cLdR::synapse0x3181870() {
   return (neuron0x3159680()*0.0153079);
}

double NNfunction_ss_cLdR::synapse0x31818b0() {
   return (neuron0x31599c0()*0.00261714);
}

double NNfunction_ss_cLdR::synapse0x31818f0() {
   return (neuron0x3159d00()*0.0100118);
}

double NNfunction_ss_cLdR::synapse0x3181930() {
   return (neuron0x315a040()*0.027438);
}

double NNfunction_ss_cLdR::synapse0x3181970() {
   return (neuron0x315a380()*0.0196661);
}

double NNfunction_ss_cLdR::synapse0x31819b0() {
   return (neuron0x315a6c0()*0.00179579);
}

double NNfunction_ss_cLdR::synapse0x31819f0() {
   return (neuron0x315aa00()*0.78459);
}

double NNfunction_ss_cLdR::synapse0x3181a30() {
   return (neuron0x315ad40()*-0.0124519);
}

double NNfunction_ss_cLdR::synapse0x3181a70() {
   return (neuron0x315b080()*0.0198989);
}

double NNfunction_ss_cLdR::synapse0x3181ab0() {
   return (neuron0x315b3c0()*0.00891279);
}

double NNfunction_ss_cLdR::synapse0x3181540() {
   return (neuron0x315b700()*0.024939);
}

double NNfunction_ss_cLdR::synapse0x3181580() {
   return (neuron0x315bc60()*0.517702);
}

double NNfunction_ss_cLdR::synapse0x3181c00() {
   return (neuron0x315be80()*0.0335667);
}

double NNfunction_ss_cLdR::synapse0x3181c40() {
   return (neuron0x315c1c0()*0.00654767);
}

double NNfunction_ss_cLdR::synapse0x3181c80() {
   return (neuron0x315c500()*0.00828792);
}

double NNfunction_ss_cLdR::synapse0x3181cc0() {
   return (neuron0x315c840()*0.0157493);
}

double NNfunction_ss_cLdR::synapse0x3181d00() {
   return (neuron0x315cb80()*-0.0188892);
}

double NNfunction_ss_cLdR::synapse0x3181d40() {
   return (neuron0x315cec0()*-0.0467581);
}

double NNfunction_ss_cLdR::synapse0x2f21c50() {
   return (neuron0x315d330()*0.0575025);
}

double NNfunction_ss_cLdR::synapse0x2f21c90() {
   return (neuron0x315dc80()*1.67048);
}

double NNfunction_ss_cLdR::synapse0x315f7f0() {
   return (neuron0x315e760()*0.109458);
}

double NNfunction_ss_cLdR::synapse0x315f830() {
   return (neuron0x315e200()*-0.0770069);
}

double NNfunction_ss_cLdR::synapse0x31601c0() {
   return (neuron0x315f540()*-2.27576);
}

double NNfunction_ss_cLdR::synapse0x3160200() {
   return (neuron0x315ff10()*1.66032);
}

double NNfunction_ss_cLdR::synapse0x3160f90() {
   return (neuron0x3160ce0()*-0.00243693);
}

double NNfunction_ss_cLdR::synapse0x3160fd0() {
   return (neuron0x31616b0()*0.0950399);
}

double NNfunction_ss_cLdR::synapse0x3161960() {
   return (neuron0x3162080()*-0.036702);
}

double NNfunction_ss_cLdR::synapse0x31619a0() {
   return (neuron0x3162b60()*-1.03951);
}

double NNfunction_ss_cLdR::synapse0x3162330() {
   return (neuron0x3163530()*0.287318);
}

double NNfunction_ss_cLdR::synapse0x3162370() {
   return (neuron0x3160610()*0.122663);
}

double NNfunction_ss_cLdR::synapse0x3162e10() {
   return (neuron0x31650e0()*0.073695);
}

double NNfunction_ss_cLdR::synapse0x3162e50() {
   return (neuron0x3165ab0()*0.0448412);
}

double NNfunction_ss_cLdR::synapse0x31637e0() {
   return (neuron0x3166480()*-3.1183);
}

double NNfunction_ss_cLdR::synapse0x3163820() {
   return (neuron0x3166e50()*0.0793145);
}

double NNfunction_ss_cLdR::synapse0x31608c0() {
   return (neuron0x3168c60()*0.0100112);
}

double NNfunction_ss_cLdR::synapse0x3160900() {
   return (neuron0x3168f40()*-1.031);
}

double NNfunction_ss_cLdR::synapse0x3165390() {
   return (neuron0x3169910()*-0.0414919);
}

double NNfunction_ss_cLdR::synapse0x31653d0() {
   return (neuron0x316a2e0()*0.0826554);
}

double NNfunction_ss_cLdR::synapse0x3165d60() {
   return (neuron0x316acb0()*-0.441837);
}

double NNfunction_ss_cLdR::synapse0x3165da0() {
   return (neuron0x316b680()*0.0104986);
}

double NNfunction_ss_cLdR::synapse0x3166730() {
   return (neuron0x31641d0()*-0.590477);
}

double NNfunction_ss_cLdR::synapse0x3166770() {
   return (neuron0x3164ba0()*-0.0367368);
}

double NNfunction_ss_cLdR::synapse0x3167100() {
   return (neuron0x316e410()*-0.189925);
}

double NNfunction_ss_cLdR::synapse0x3167140() {
   return (neuron0x316ede0()*0.0539501);
}

double NNfunction_ss_cLdR::synapse0x315b2a0() {
   return (neuron0x316f7b0()*-0.0368693);
}

double NNfunction_ss_cLdR::synapse0x315b2e0() {
   return (neuron0x3170180()*0.0716831);
}

double NNfunction_ss_cLdR::synapse0x31691f0() {
   return (neuron0x3170b50()*-0.115295);
}

double NNfunction_ss_cLdR::synapse0x3169230() {
   return (neuron0x3171520()*-0.0581731);
}

double NNfunction_ss_cLdR::synapse0x3169bc0() {
   return (neuron0x3171ef0()*-0.48475);
}

double NNfunction_ss_cLdR::synapse0x3169c00() {
   return (neuron0x31728c0()*0.0655849);
}

double NNfunction_ss_cLdR::synapse0x316a590() {
   return (neuron0x3168950()*-0.12538);
}

double NNfunction_ss_cLdR::synapse0x316a5d0() {
   return (neuron0x31754a0()*2.02843);
}

double NNfunction_ss_cLdR::synapse0x316af60() {
   return (neuron0x3175e70()*-0.041778);
}

double NNfunction_ss_cLdR::synapse0x316afa0() {
   return (neuron0x3176840()*0.31467);
}

double NNfunction_ss_cLdR::synapse0x316b930() {
   return (neuron0x3177210()*0.10907);
}

double NNfunction_ss_cLdR::synapse0x316b970() {
   return (neuron0x3177be0()*-0.104819);
}

double NNfunction_ss_cLdR::synapse0x3164480() {
   return (neuron0x31785b0()*-0.0762575);
}

double NNfunction_ss_cLdR::synapse0x31644c0() {
   return (neuron0x3178f80()*-0.0107502);
}

double NNfunction_ss_cLdR::synapse0x316dd30() {
   return (neuron0x3179950()*1.16055);
}

double NNfunction_ss_cLdR::synapse0x316dd70() {
   return (neuron0x317a530()*-0.107683);
}

double NNfunction_ss_cLdR::synapse0x316e6c0() {
   return (neuron0x317af00()*-0.00911688);
}

double NNfunction_ss_cLdR::synapse0x316e700() {
   return (neuron0x316bd80()*-0.0151949);
}

double NNfunction_ss_cLdR::synapse0x316f090() {
   return (neuron0x316c750()*0.194087);
}

double NNfunction_ss_cLdR::synapse0x316f0d0() {
   return (neuron0x316d120()*0.0998883);
}

double NNfunction_ss_cLdR::synapse0x316fa60() {
   return (neuron0x317f760()*-0.244353);
}

double NNfunction_ss_cLdR::synapse0x316faa0() {
   return (neuron0x3180010()*-0.110521);
}

double NNfunction_ss_cLdR::synapse0x3170430() {
   return (neuron0x31809e0()*2.60534);
}

double NNfunction_ss_cLdR::synapse0x3170470() {
   return (neuron0x31813b0()*-2.83114);
}

double NNfunction_ss_cLdR::synapse0x3172b70() {
   return (neuron0x315d330()*0.106596);
}

double NNfunction_ss_cLdR::synapse0x3172bb0() {
   return (neuron0x315dc80()*-0.46331);
}

double NNfunction_ss_cLdR::synapse0x3168130() {
   return (neuron0x315e760()*0.757583);
}

double NNfunction_ss_cLdR::synapse0x3168170() {
   return (neuron0x315e200()*0.718139);
}

double NNfunction_ss_cLdR::synapse0x3175750() {
   return (neuron0x315f540()*0.597703);
}

double NNfunction_ss_cLdR::synapse0x3175790() {
   return (neuron0x315ff10()*-0.0677322);
}

double NNfunction_ss_cLdR::synapse0x3176120() {
   return (neuron0x3160ce0()*-0.0878396);
}

double NNfunction_ss_cLdR::synapse0x3176160() {
   return (neuron0x31616b0()*1.13829);
}

double NNfunction_ss_cLdR::synapse0x3176af0() {
   return (neuron0x3162080()*0.730501);
}

double NNfunction_ss_cLdR::synapse0x3176b30() {
   return (neuron0x3162b60()*-0.205316);
}

double NNfunction_ss_cLdR::synapse0x31774c0() {
   return (neuron0x3163530()*1.19146);
}

double NNfunction_ss_cLdR::synapse0x3177500() {
   return (neuron0x3160610()*-0.480247);
}

double NNfunction_ss_cLdR::synapse0x3177e90() {
   return (neuron0x31650e0()*0.656808);
}

double NNfunction_ss_cLdR::synapse0x3177ed0() {
   return (neuron0x3165ab0()*0.184398);
}

double NNfunction_ss_cLdR::synapse0x3178860() {
   return (neuron0x3166480()*2.00796);
}

double NNfunction_ss_cLdR::synapse0x31788a0() {
   return (neuron0x3166e50()*0.250085);
}

double NNfunction_ss_cLdR::synapse0x3179230() {
   return (neuron0x3168c60()*-0.412896);
}

double NNfunction_ss_cLdR::synapse0x3179270() {
   return (neuron0x3168f40()*1.44616);
}

double NNfunction_ss_cLdR::synapse0x3179c00() {
   return (neuron0x3169910()*0.923694);
}

double NNfunction_ss_cLdR::synapse0x3179c40() {
   return (neuron0x316a2e0()*-0.0959101);
}

double NNfunction_ss_cLdR::synapse0x317a7e0() {
   return (neuron0x316acb0()*1.38682);
}

double NNfunction_ss_cLdR::synapse0x317a820() {
   return (neuron0x316b680()*0.189062);
}

double NNfunction_ss_cLdR::synapse0x317b1b0() {
   return (neuron0x31641d0()*0.870424);
}

double NNfunction_ss_cLdR::synapse0x317b1f0() {
   return (neuron0x3164ba0()*0.635948);
}

double NNfunction_ss_cLdR::synapse0x316c030() {
   return (neuron0x316e410()*0.898636);
}

double NNfunction_ss_cLdR::synapse0x316c070() {
   return (neuron0x316ede0()*-0.230505);
}

double NNfunction_ss_cLdR::synapse0x316ca00() {
   return (neuron0x316f7b0()*0.413001);
}

double NNfunction_ss_cLdR::synapse0x316ca40() {
   return (neuron0x3170180()*-0.142696);
}

double NNfunction_ss_cLdR::synapse0x316d3d0() {
   return (neuron0x3170b50()*0.659013);
}

double NNfunction_ss_cLdR::synapse0x316d410() {
   return (neuron0x3171520()*0.739941);
}

double NNfunction_ss_cLdR::synapse0x317f8f0() {
   return (neuron0x3171ef0()*0.619269);
}

double NNfunction_ss_cLdR::synapse0x317f930() {
   return (neuron0x31728c0()*0.431051);
}

double NNfunction_ss_cLdR::synapse0x31802c0() {
   return (neuron0x3168950()*0.764295);
}

double NNfunction_ss_cLdR::synapse0x3180300() {
   return (neuron0x31754a0()*0.584284);
}

double NNfunction_ss_cLdR::synapse0x3180c90() {
   return (neuron0x3175e70()*0.0998044);
}

double NNfunction_ss_cLdR::synapse0x3180cd0() {
   return (neuron0x3176840()*-0.72097);
}

double NNfunction_ss_cLdR::synapse0x3181660() {
   return (neuron0x3177210()*1.05939);
}

double NNfunction_ss_cLdR::synapse0x31816a0() {
   return (neuron0x3177be0()*0.593931);
}

double NNfunction_ss_cLdR::synapse0x315d550() {
   return (neuron0x31785b0()*-0.681744);
}

double NNfunction_ss_cLdR::synapse0x315d590() {
   return (neuron0x3178f80()*0.473523);
}

double NNfunction_ss_cLdR::synapse0x3170e00() {
   return (neuron0x3179950()*-0.155069);
}

double NNfunction_ss_cLdR::synapse0x3170e40() {
   return (neuron0x317a530()*-0.864821);
}

double NNfunction_ss_cLdR::synapse0x3181d80() {
   return (neuron0x317af00()*-1.00081);
}

double NNfunction_ss_cLdR::synapse0x3181dc0() {
   return (neuron0x316bd80()*0.829504);
}

double NNfunction_ss_cLdR::synapse0x3181e00() {
   return (neuron0x316c750()*-0.0479979);
}

double NNfunction_ss_cLdR::synapse0x3181e40() {
   return (neuron0x316d120()*0.774506);
}

double NNfunction_ss_cLdR::synapse0x3188cf0() {
   return (neuron0x317f760()*-0.100546);
}

double NNfunction_ss_cLdR::synapse0x3188d30() {
   return (neuron0x3180010()*-0.234808);
}

double NNfunction_ss_cLdR::synapse0x3188d70() {
   return (neuron0x31809e0()*0.720293);
}

double NNfunction_ss_cLdR::synapse0x3188db0() {
   return (neuron0x31813b0()*1.31926);
}

double NNfunction_ss_cLdR::synapse0x3189130() {
   return (neuron0x315d330()*0.163187);
}

double NNfunction_ss_cLdR::synapse0x3189170() {
   return (neuron0x315dc80()*-0.518146);
}

double NNfunction_ss_cLdR::synapse0x31891b0() {
   return (neuron0x315e760()*0.0121912);
}

double NNfunction_ss_cLdR::synapse0x31891f0() {
   return (neuron0x315e200()*0.0292003);
}

double NNfunction_ss_cLdR::synapse0x3189230() {
   return (neuron0x315f540()*-0.534099);
}

double NNfunction_ss_cLdR::synapse0x3189270() {
   return (neuron0x315ff10()*-1.57592);
}

double NNfunction_ss_cLdR::synapse0x31892b0() {
   return (neuron0x3160ce0()*-0.0361562);
}

double NNfunction_ss_cLdR::synapse0x31892f0() {
   return (neuron0x31616b0()*-0.0256275);
}

double NNfunction_ss_cLdR::synapse0x3189330() {
   return (neuron0x3162080()*0.0121433);
}

double NNfunction_ss_cLdR::synapse0x3189370() {
   return (neuron0x3162b60()*0.104114);
}

double NNfunction_ss_cLdR::synapse0x31893b0() {
   return (neuron0x3163530()*1.11788);
}

double NNfunction_ss_cLdR::synapse0x31893f0() {
   return (neuron0x3160610()*-0.131533);
}

double NNfunction_ss_cLdR::synapse0x3189430() {
   return (neuron0x31650e0()*-0.080256);
}

double NNfunction_ss_cLdR::synapse0x3189470() {
   return (neuron0x3165ab0()*0.0924917);
}

double NNfunction_ss_cLdR::synapse0x31894b0() {
   return (neuron0x3166480()*-1.7607);
}

double NNfunction_ss_cLdR::synapse0x31894f0() {
   return (neuron0x3166e50()*-0.244528);
}

double NNfunction_ss_cLdR::synapse0x3188f80() {
   return (neuron0x3168c60()*-0.176645);
}

double NNfunction_ss_cLdR::synapse0x3188fc0() {
   return (neuron0x3168f40()*0.0043008);
}

double NNfunction_ss_cLdR::synapse0x3189640() {
   return (neuron0x3169910()*0.151764);
}

double NNfunction_ss_cLdR::synapse0x3189680() {
   return (neuron0x316a2e0()*-0.607454);
}

double NNfunction_ss_cLdR::synapse0x31896c0() {
   return (neuron0x316acb0()*0.930702);
}

double NNfunction_ss_cLdR::synapse0x3189700() {
   return (neuron0x316b680()*-0.0317281);
}

double NNfunction_ss_cLdR::synapse0x3189740() {
   return (neuron0x31641d0()*0.10276);
}

double NNfunction_ss_cLdR::synapse0x3189780() {
   return (neuron0x3164ba0()*0.109583);
}

double NNfunction_ss_cLdR::synapse0x31897c0() {
   return (neuron0x316e410()*-0.109145);
}

double NNfunction_ss_cLdR::synapse0x3189800() {
   return (neuron0x316ede0()*-0.0974182);
}

double NNfunction_ss_cLdR::synapse0x3189840() {
   return (neuron0x316f7b0()*0.311048);
}

double NNfunction_ss_cLdR::synapse0x3189880() {
   return (neuron0x3170180()*0.0879037);
}

double NNfunction_ss_cLdR::synapse0x31898c0() {
   return (neuron0x3170b50()*-0.0028913);
}

double NNfunction_ss_cLdR::synapse0x3189900() {
   return (neuron0x3171520()*-0.0504293);
}

double NNfunction_ss_cLdR::synapse0x3189940() {
   return (neuron0x3171ef0()*-0.437762);
}

double NNfunction_ss_cLdR::synapse0x3189980() {
   return (neuron0x31728c0()*0.0518194);
}

double NNfunction_ss_cLdR::synapse0x3189530() {
   return (neuron0x3168950()*0.0543897);
}

double NNfunction_ss_cLdR::synapse0x3189570() {
   return (neuron0x31754a0()*1.0088);
}

double NNfunction_ss_cLdR::synapse0x31895b0() {
   return (neuron0x3175e70()*0.0477719);
}

double NNfunction_ss_cLdR::synapse0x31895f0() {
   return (neuron0x3176840()*-0.745201);
}

double NNfunction_ss_cLdR::synapse0x3189bd0() {
   return (neuron0x3177210()*0.10863);
}

double NNfunction_ss_cLdR::synapse0x3189c10() {
   return (neuron0x3177be0()*-0.0951233);
}

double NNfunction_ss_cLdR::synapse0x3189c50() {
   return (neuron0x31785b0()*0.0023359);
}

double NNfunction_ss_cLdR::synapse0x3189c90() {
   return (neuron0x3178f80()*0.134979);
}

double NNfunction_ss_cLdR::synapse0x3189cd0() {
   return (neuron0x3179950()*-0.539594);
}

double NNfunction_ss_cLdR::synapse0x3189d10() {
   return (neuron0x317a530()*-0.377641);
}

double NNfunction_ss_cLdR::synapse0x3189d50() {
   return (neuron0x317af00()*-0.0753316);
}

double NNfunction_ss_cLdR::synapse0x3189d90() {
   return (neuron0x316bd80()*-0.125649);
}

double NNfunction_ss_cLdR::synapse0x3189dd0() {
   return (neuron0x316c750()*-0.25604);
}

double NNfunction_ss_cLdR::synapse0x3189e10() {
   return (neuron0x316d120()*0.299492);
}

double NNfunction_ss_cLdR::synapse0x3189e50() {
   return (neuron0x317f760()*0.215945);
}

double NNfunction_ss_cLdR::synapse0x3189e90() {
   return (neuron0x3180010()*-0.229228);
}

double NNfunction_ss_cLdR::synapse0x3189ed0() {
   return (neuron0x31809e0()*0.127328);
}

double NNfunction_ss_cLdR::synapse0x3189f10() {
   return (neuron0x31813b0()*1.9692);
}

double NNfunction_ss_cLdR::synapse0x318a290() {
   return (neuron0x315d330()*-0.702004);
}

double NNfunction_ss_cLdR::synapse0x318a2d0() {
   return (neuron0x315dc80()*-0.274492);
}

double NNfunction_ss_cLdR::synapse0x318a310() {
   return (neuron0x315e760()*-0.314384);
}

double NNfunction_ss_cLdR::synapse0x318a350() {
   return (neuron0x315e200()*-0.0570309);
}

double NNfunction_ss_cLdR::synapse0x318a390() {
   return (neuron0x315f540()*0.177497);
}

double NNfunction_ss_cLdR::synapse0x318a3d0() {
   return (neuron0x315ff10()*-0.522168);
}

double NNfunction_ss_cLdR::synapse0x318a410() {
   return (neuron0x3160ce0()*-0.399549);
}

double NNfunction_ss_cLdR::synapse0x318a450() {
   return (neuron0x31616b0()*-0.000695242);
}

double NNfunction_ss_cLdR::synapse0x318a490() {
   return (neuron0x3162080()*-0.490828);
}

double NNfunction_ss_cLdR::synapse0x318a4d0() {
   return (neuron0x3162b60()*-0.38431);
}

double NNfunction_ss_cLdR::synapse0x318a510() {
   return (neuron0x3163530()*0.197224);
}

double NNfunction_ss_cLdR::synapse0x318a550() {
   return (neuron0x3160610()*0.0305101);
}

double NNfunction_ss_cLdR::synapse0x318a590() {
   return (neuron0x31650e0()*0.0299897);
}

double NNfunction_ss_cLdR::synapse0x318a5d0() {
   return (neuron0x3165ab0()*-0.49517);
}

double NNfunction_ss_cLdR::synapse0x318a610() {
   return (neuron0x3166480()*0.161451);
}

double NNfunction_ss_cLdR::synapse0x318a650() {
   return (neuron0x3166e50()*0.0447547);
}

double NNfunction_ss_cLdR::synapse0x318a0e0() {
   return (neuron0x3168c60()*-0.309333);
}

double NNfunction_ss_cLdR::synapse0x318a120() {
   return (neuron0x3168f40()*-0.590805);
}

double NNfunction_ss_cLdR::synapse0x318a7a0() {
   return (neuron0x3169910()*-0.280092);
}

double NNfunction_ss_cLdR::synapse0x318a7e0() {
   return (neuron0x316a2e0()*-0.0989841);
}

double NNfunction_ss_cLdR::synapse0x318a820() {
   return (neuron0x316acb0()*0.285324);
}

double NNfunction_ss_cLdR::synapse0x318a860() {
   return (neuron0x316b680()*-0.132978);
}

double NNfunction_ss_cLdR::synapse0x318a8a0() {
   return (neuron0x31641d0()*-0.243342);
}

double NNfunction_ss_cLdR::synapse0x318a8e0() {
   return (neuron0x3164ba0()*-0.0759467);
}

double NNfunction_ss_cLdR::synapse0x318a920() {
   return (neuron0x316e410()*-0.333262);
}

double NNfunction_ss_cLdR::synapse0x318a960() {
   return (neuron0x316ede0()*-0.169196);
}

double NNfunction_ss_cLdR::synapse0x318a9a0() {
   return (neuron0x316f7b0()*0.00869085);
}

double NNfunction_ss_cLdR::synapse0x318a9e0() {
   return (neuron0x3170180()*0.0677786);
}

double NNfunction_ss_cLdR::synapse0x318aa20() {
   return (neuron0x3170b50()*-0.681969);
}

double NNfunction_ss_cLdR::synapse0x318aa60() {
   return (neuron0x3171520()*-0.16986);
}

double NNfunction_ss_cLdR::synapse0x318aaa0() {
   return (neuron0x3171ef0()*-0.296558);
}

double NNfunction_ss_cLdR::synapse0x318aae0() {
   return (neuron0x31728c0()*-0.339681);
}

double NNfunction_ss_cLdR::synapse0x318a690() {
   return (neuron0x3168950()*-0.0784696);
}

double NNfunction_ss_cLdR::synapse0x318a6d0() {
   return (neuron0x31754a0()*-0.0885153);
}

double NNfunction_ss_cLdR::synapse0x318a710() {
   return (neuron0x3175e70()*-0.395798);
}

double NNfunction_ss_cLdR::synapse0x318a750() {
   return (neuron0x3176840()*0.0849198);
}

double NNfunction_ss_cLdR::synapse0x318ad30() {
   return (neuron0x3177210()*0.00319032);
}

double NNfunction_ss_cLdR::synapse0x318ad70() {
   return (neuron0x3177be0()*-0.626247);
}

double NNfunction_ss_cLdR::synapse0x318adb0() {
   return (neuron0x31785b0()*-0.474498);
}

double NNfunction_ss_cLdR::synapse0x318adf0() {
   return (neuron0x3178f80()*0.216993);
}

double NNfunction_ss_cLdR::synapse0x318ae30() {
   return (neuron0x3179950()*-0.0720447);
}

double NNfunction_ss_cLdR::synapse0x318ae70() {
   return (neuron0x317a530()*-0.0516551);
}

double NNfunction_ss_cLdR::synapse0x318aeb0() {
   return (neuron0x317af00()*0.130486);
}

double NNfunction_ss_cLdR::synapse0x318aef0() {
   return (neuron0x316bd80()*-0.712392);
}

double NNfunction_ss_cLdR::synapse0x318af30() {
   return (neuron0x316c750()*-0.180353);
}

double NNfunction_ss_cLdR::synapse0x318af70() {
   return (neuron0x316d120()*-0.0349653);
}

double NNfunction_ss_cLdR::synapse0x318afb0() {
   return (neuron0x317f760()*-0.399941);
}

double NNfunction_ss_cLdR::synapse0x318aff0() {
   return (neuron0x3180010()*0.114127);
}

double NNfunction_ss_cLdR::synapse0x318b030() {
   return (neuron0x31809e0()*0.348974);
}

double NNfunction_ss_cLdR::synapse0x318b070() {
   return (neuron0x31813b0()*-0.0254984);
}

double NNfunction_ss_cLdR::synapse0x318b3f0() {
   return (neuron0x315d330()*1.27494);
}

double NNfunction_ss_cLdR::synapse0x318b430() {
   return (neuron0x315dc80()*-0.642927);
}

double NNfunction_ss_cLdR::synapse0x318b470() {
   return (neuron0x315e760()*-2.65838);
}

double NNfunction_ss_cLdR::synapse0x318b4b0() {
   return (neuron0x315e200()*-0.704424);
}

double NNfunction_ss_cLdR::synapse0x318b4f0() {
   return (neuron0x315f540()*2.93283);
}

double NNfunction_ss_cLdR::synapse0x318b530() {
   return (neuron0x315ff10()*-0.715939);
}

double NNfunction_ss_cLdR::synapse0x318b570() {
   return (neuron0x3160ce0()*1.42808);
}

double NNfunction_ss_cLdR::synapse0x318b5b0() {
   return (neuron0x31616b0()*2.9014);
}

double NNfunction_ss_cLdR::synapse0x318b5f0() {
   return (neuron0x3162080()*-1.75725);
}

double NNfunction_ss_cLdR::synapse0x318b630() {
   return (neuron0x3162b60()*-0.0883903);
}

double NNfunction_ss_cLdR::synapse0x318b670() {
   return (neuron0x3163530()*1.7155);
}

double NNfunction_ss_cLdR::synapse0x318b6b0() {
   return (neuron0x3160610()*-0.642321);
}

double NNfunction_ss_cLdR::synapse0x318b6f0() {
   return (neuron0x31650e0()*-0.438802);
}

double NNfunction_ss_cLdR::synapse0x318b730() {
   return (neuron0x3165ab0()*1.49197);
}

double NNfunction_ss_cLdR::synapse0x318b770() {
   return (neuron0x3166480()*4.47081);
}

double NNfunction_ss_cLdR::synapse0x318b7b0() {
   return (neuron0x3166e50()*-0.144423);
}

double NNfunction_ss_cLdR::synapse0x318b240() {
   return (neuron0x3168c60()*-0.105279);
}

double NNfunction_ss_cLdR::synapse0x318b280() {
   return (neuron0x3168f40()*6.97878);
}

double NNfunction_ss_cLdR::synapse0x318b900() {
   return (neuron0x3169910()*1.03378);
}

double NNfunction_ss_cLdR::synapse0x318b940() {
   return (neuron0x316a2e0()*-1.28762);
}

double NNfunction_ss_cLdR::synapse0x318b980() {
   return (neuron0x316acb0()*2.71425);
}

double NNfunction_ss_cLdR::synapse0x318b9c0() {
   return (neuron0x316b680()*1.19389);
}

double NNfunction_ss_cLdR::synapse0x318ba00() {
   return (neuron0x31641d0()*0.689678);
}

double NNfunction_ss_cLdR::synapse0x318ba40() {
   return (neuron0x3164ba0()*1.95507);
}

double NNfunction_ss_cLdR::synapse0x318ba80() {
   return (neuron0x316e410()*-0.308199);
}

double NNfunction_ss_cLdR::synapse0x318bac0() {
   return (neuron0x316ede0()*-0.282645);
}

double NNfunction_ss_cLdR::synapse0x318bb00() {
   return (neuron0x316f7b0()*3.21729);
}

double NNfunction_ss_cLdR::synapse0x318bb40() {
   return (neuron0x3170180()*-1.90165);
}

double NNfunction_ss_cLdR::synapse0x318bb80() {
   return (neuron0x3170b50()*-0.0494096);
}

double NNfunction_ss_cLdR::synapse0x318bbc0() {
   return (neuron0x3171520()*1.59663);
}

double NNfunction_ss_cLdR::synapse0x318bc00() {
   return (neuron0x3171ef0()*-0.24391);
}

double NNfunction_ss_cLdR::synapse0x318bc40() {
   return (neuron0x31728c0()*1.21681);
}

double NNfunction_ss_cLdR::synapse0x318b7f0() {
   return (neuron0x3168950()*-1.97988);
}

double NNfunction_ss_cLdR::synapse0x318b830() {
   return (neuron0x31754a0()*-1.30253);
}

double NNfunction_ss_cLdR::synapse0x318b870() {
   return (neuron0x3175e70()*-0.69258);
}

double NNfunction_ss_cLdR::synapse0x318b8b0() {
   return (neuron0x3176840()*-1.87952);
}

double NNfunction_ss_cLdR::synapse0x318be90() {
   return (neuron0x3177210()*1.31359);
}

double NNfunction_ss_cLdR::synapse0x318bed0() {
   return (neuron0x3177be0()*0.591981);
}

double NNfunction_ss_cLdR::synapse0x318bf10() {
   return (neuron0x31785b0()*-1.17129);
}

double NNfunction_ss_cLdR::synapse0x318bf50() {
   return (neuron0x3178f80()*1.36732);
}

double NNfunction_ss_cLdR::synapse0x318bf90() {
   return (neuron0x3179950()*-0.697314);
}

double NNfunction_ss_cLdR::synapse0x318bfd0() {
   return (neuron0x317a530()*-2.10065);
}

double NNfunction_ss_cLdR::synapse0x318c010() {
   return (neuron0x317af00()*0.843466);
}

double NNfunction_ss_cLdR::synapse0x318c050() {
   return (neuron0x316bd80()*-0.925045);
}

double NNfunction_ss_cLdR::synapse0x318c090() {
   return (neuron0x316c750()*1.16636);
}

double NNfunction_ss_cLdR::synapse0x318c0d0() {
   return (neuron0x316d120()*-1.09024);
}

double NNfunction_ss_cLdR::synapse0x318c110() {
   return (neuron0x317f760()*-1.21456);
}

double NNfunction_ss_cLdR::synapse0x318c150() {
   return (neuron0x3180010()*0.701036);
}

double NNfunction_ss_cLdR::synapse0x318c190() {
   return (neuron0x31809e0()*-0.854627);
}

double NNfunction_ss_cLdR::synapse0x318c1d0() {
   return (neuron0x31813b0()*2.17411);
}

double NNfunction_ss_cLdR::synapse0x318c430() {
   return (neuron0x31885b0()*7.4074);
}

double NNfunction_ss_cLdR::synapse0x318c470() {
   return (neuron0x3188950()*3.16731);
}

double NNfunction_ss_cLdR::synapse0x318c4b0() {
   return (neuron0x3188df0()*-3.13469);
}

double NNfunction_ss_cLdR::synapse0x318c4f0() {
   return (neuron0x3189f50()*0.309649);
}

double NNfunction_ss_cLdR::synapse0x318c530() {
   return (neuron0x318b0b0()*-7.28693);
}

