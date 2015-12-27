#include "NNfunction_ns_chi03_sR.h"
#include <cmath>

double NNfunction_ns_chi03_sR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.3436)/15.3895;
   input1 = (in1 - 19.1199)/365.204;
   input2 = (in2 - 763.147)/651.938;
   input3 = (in3 - -6.23432)/817.359;
   input4 = (in4 - 971.415)/925.265;
   input5 = (in5 - 866.361)/942.831;
   input6 = (in6 - 864.256)/937.161;
   input7 = (in7 - 861.892)/914.465;
   input8 = (in8 - 871.939)/953.796;
   input9 = (in9 - 858.493)/942.041;
   input10 = (in10 - 913.328)/936.074;
   input11 = (in11 - 682.134)/824.203;
   input12 = (in12 - 676.307)/824.647;
   input13 = (in13 - 455.976)/476.939;
   input14 = (in14 - 714.824)/809.974;
   input15 = (in15 - 717.697)/810.128;
   input16 = (in16 - 537.129)/563.54;
   input17 = (in17 - 709.163)/865.615;
   input18 = (in18 - 184.751)/153.68;
   input19 = (in19 - 727.733)/830.045;
   input20 = (in20 - -6.49549)/483.872;
   input21 = (in21 - -13.1542)/1116.2;
   input22 = (in22 - 5.52072)/1138.46;
   input23 = (in23 - -53.7707)/153.05;
   switch(index) {
     case 0:
         return neuron0x37b06b0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi03_sR::Value(int index, double* input) {
   input0 = (input[0] - 24.3436)/15.3895;
   input1 = (input[1] - 19.1199)/365.204;
   input2 = (input[2] - 763.147)/651.938;
   input3 = (input[3] - -6.23432)/817.359;
   input4 = (input[4] - 971.415)/925.265;
   input5 = (input[5] - 866.361)/942.831;
   input6 = (input[6] - 864.256)/937.161;
   input7 = (input[7] - 861.892)/914.465;
   input8 = (input[8] - 871.939)/953.796;
   input9 = (input[9] - 858.493)/942.041;
   input10 = (input[10] - 913.328)/936.074;
   input11 = (input[11] - 682.134)/824.203;
   input12 = (input[12] - 676.307)/824.647;
   input13 = (input[13] - 455.976)/476.939;
   input14 = (input[14] - 714.824)/809.974;
   input15 = (input[15] - 717.697)/810.128;
   input16 = (input[16] - 537.129)/563.54;
   input17 = (input[17] - 709.163)/865.615;
   input18 = (input[18] - 184.751)/153.68;
   input19 = (input[19] - 727.733)/830.045;
   input20 = (input[20] - -6.49549)/483.872;
   input21 = (input[21] - -13.1542)/1116.2;
   input22 = (input[22] - 5.52072)/1138.46;
   input23 = (input[23] - -53.7707)/153.05;
   switch(index) {
     case 0:
         return neuron0x37b06b0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi03_sR::neuron0x377c7a0() {
   return input0;
}

double NNfunction_ns_chi03_sR::neuron0x377cae0() {
   return input1;
}

double NNfunction_ns_chi03_sR::neuron0x377ce20() {
   return input2;
}

double NNfunction_ns_chi03_sR::neuron0x377d160() {
   return input3;
}

double NNfunction_ns_chi03_sR::neuron0x377d4a0() {
   return input4;
}

double NNfunction_ns_chi03_sR::neuron0x377d7e0() {
   return input5;
}

double NNfunction_ns_chi03_sR::neuron0x377db20() {
   return input6;
}

double NNfunction_ns_chi03_sR::neuron0x377de60() {
   return input7;
}

double NNfunction_ns_chi03_sR::neuron0x377e1a0() {
   return input8;
}

double NNfunction_ns_chi03_sR::neuron0x377e4e0() {
   return input9;
}

double NNfunction_ns_chi03_sR::neuron0x377e820() {
   return input10;
}

double NNfunction_ns_chi03_sR::neuron0x377eb60() {
   return input11;
}

double NNfunction_ns_chi03_sR::neuron0x377eea0() {
   return input12;
}

double NNfunction_ns_chi03_sR::neuron0x377f1e0() {
   return input13;
}

double NNfunction_ns_chi03_sR::neuron0x377f520() {
   return input14;
}

double NNfunction_ns_chi03_sR::neuron0x377f860() {
   return input15;
}

double NNfunction_ns_chi03_sR::neuron0x377fba0() {
   return input16;
}

double NNfunction_ns_chi03_sR::neuron0x3780100() {
   return input17;
}

double NNfunction_ns_chi03_sR::neuron0x3780320() {
   return input18;
}

double NNfunction_ns_chi03_sR::neuron0x3780660() {
   return input19;
}

double NNfunction_ns_chi03_sR::neuron0x37809a0() {
   return input20;
}

double NNfunction_ns_chi03_sR::neuron0x3780ce0() {
   return input21;
}

double NNfunction_ns_chi03_sR::neuron0x3781020() {
   return input22;
}

double NNfunction_ns_chi03_sR::neuron0x3781360() {
   return input23;
}

double NNfunction_ns_chi03_sR::input0x37817d0() {
   double input = 0.32583;
   input += synapse0x377c660();
   input += synapse0x377c6a0();
   input += synapse0x3781a80();
   input += synapse0x3781ac0();
   input += synapse0x3781b00();
   input += synapse0x3781b40();
   input += synapse0x3781b80();
   input += synapse0x3781bc0();
   input += synapse0x3781c00();
   input += synapse0x3781c40();
   input += synapse0x3781c80();
   input += synapse0x3781cc0();
   input += synapse0x3781d00();
   input += synapse0x3781d40();
   input += synapse0x3781d80();
   input += synapse0x3781dc0();
   input += synapse0x377c5d0();
   input += synapse0x377c610();
   input += synapse0x3537940();
   input += synapse0x3537980();
   input += synapse0x3782020();
   input += synapse0x3782060();
   input += synapse0x37820a0();
   input += synapse0x37820e0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x37817d0() {
   double input = input0x37817d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x3782120() {
   double input = -1.49319;
   input += synapse0x3782460();
   input += synapse0x37824a0();
   input += synapse0x37824e0();
   input += synapse0x3782520();
   input += synapse0x3782560();
   input += synapse0x37825a0();
   input += synapse0x37825e0();
   input += synapse0x3782620();
   input += synapse0x3782660();
   input += synapse0x3781f10();
   input += synapse0x3781f50();
   input += synapse0x3781f90();
   input += synapse0x3781fd0();
   input += synapse0x37828b0();
   input += synapse0x37828f0();
   input += synapse0x3782930();
   input += synapse0x37822b0();
   input += synapse0x37822f0();
   input += synapse0x3782a80();
   input += synapse0x3782ac0();
   input += synapse0x3782b00();
   input += synapse0x3782b40();
   input += synapse0x3782b80();
   input += synapse0x3782bc0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x3782120() {
   double input = input0x3782120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x3782c00() {
   double input = 4.96336;
   input += synapse0x3782f40();
   input += synapse0x3782f80();
   input += synapse0x3782fc0();
   input += synapse0x3783000();
   input += synapse0x3783040();
   input += synapse0x3783080();
   input += synapse0x37830c0();
   input += synapse0x3783100();
   input += synapse0x3783140();
   input += synapse0x3783180();
   input += synapse0x37831c0();
   input += synapse0x3783200();
   input += synapse0x3783240();
   input += synapse0x3783280();
   input += synapse0x37832c0();
   input += synapse0x3783300();
   input += synapse0x3782d90();
   input += synapse0x3782dd0();
   input += synapse0x3538030();
   input += synapse0x3545900();
   input += synapse0x3545940();
   input += synapse0x376b830();
   input += synapse0x376b870();
   input += synapse0x376b8b0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x3782c00() {
   double input = input0x3782c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x37826a0() {
   double input = 1.01664;
   input += synapse0x3546180();
   input += synapse0x3782830();
   input += synapse0x3782870();
   input += synapse0x3783450();
   input += synapse0x3783490();
   input += synapse0x37834d0();
   input += synapse0x3783510();
   input += synapse0x3783550();
   input += synapse0x3783590();
   input += synapse0x37835d0();
   input += synapse0x3783610();
   input += synapse0x3783650();
   input += synapse0x3783690();
   input += synapse0x37836d0();
   input += synapse0x3783710();
   input += synapse0x3783750();
   input += synapse0x377c6e0();
   input += synapse0x377c720();
   input += synapse0x377c760();
   input += synapse0x37838a0();
   input += synapse0x37838e0();
   input += synapse0x3783920();
   input += synapse0x3783960();
   input += synapse0x37839a0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x37826a0() {
   double input = input0x37826a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x37839e0() {
   double input = 0.0166151;
   input += synapse0x3783d20();
   input += synapse0x3783d60();
   input += synapse0x3783da0();
   input += synapse0x3783de0();
   input += synapse0x3783e20();
   input += synapse0x3783e60();
   input += synapse0x3783ea0();
   input += synapse0x3783ee0();
   input += synapse0x3783f20();
   input += synapse0x3783f60();
   input += synapse0x3783fa0();
   input += synapse0x3783fe0();
   input += synapse0x3784020();
   input += synapse0x3784060();
   input += synapse0x37840a0();
   input += synapse0x37840e0();
   input += synapse0x3783b70();
   input += synapse0x3783bb0();
   input += synapse0x3784230();
   input += synapse0x3784270();
   input += synapse0x37842b0();
   input += synapse0x37842f0();
   input += synapse0x3784330();
   input += synapse0x3784370();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x37839e0() {
   double input = input0x37839e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x37843b0() {
   double input = 0.30205;
   input += synapse0x37846f0();
   input += synapse0x3784730();
   input += synapse0x3784770();
   input += synapse0x37847b0();
   input += synapse0x37847f0();
   input += synapse0x3784830();
   input += synapse0x3784870();
   input += synapse0x37848b0();
   input += synapse0x37848f0();
   input += synapse0x3545c50();
   input += synapse0x3545c90();
   input += synapse0x3545cd0();
   input += synapse0x3545d10();
   input += synapse0x3545d50();
   input += synapse0x3545d90();
   input += synapse0x3545dd0();
   input += synapse0x3784540();
   input += synapse0x3784580();
   input += synapse0x3545f20();
   input += synapse0x3545f60();
   input += synapse0x3545fa0();
   input += synapse0x3545fe0();
   input += synapse0x3546020();
   input += synapse0x3785140();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x37843b0() {
   double input = input0x37843b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x3785180() {
   double input = -1.35162;
   input += synapse0x37854c0();
   input += synapse0x3785500();
   input += synapse0x3785540();
   input += synapse0x3785580();
   input += synapse0x37855c0();
   input += synapse0x3785600();
   input += synapse0x3785640();
   input += synapse0x3785680();
   input += synapse0x37856c0();
   input += synapse0x3785700();
   input += synapse0x3785740();
   input += synapse0x3785780();
   input += synapse0x37857c0();
   input += synapse0x3785800();
   input += synapse0x3785840();
   input += synapse0x3785880();
   input += synapse0x3785310();
   input += synapse0x3785350();
   input += synapse0x37859d0();
   input += synapse0x3785a10();
   input += synapse0x3785a50();
   input += synapse0x3785a90();
   input += synapse0x3785ad0();
   input += synapse0x3785b10();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x3785180() {
   double input = input0x3785180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x3785b50() {
   double input = -0.739931;
   input += synapse0x3785e90();
   input += synapse0x3785ed0();
   input += synapse0x3785f10();
   input += synapse0x3785f50();
   input += synapse0x3785f90();
   input += synapse0x3785fd0();
   input += synapse0x3786010();
   input += synapse0x3786050();
   input += synapse0x3786090();
   input += synapse0x37860d0();
   input += synapse0x3786110();
   input += synapse0x3786150();
   input += synapse0x3786190();
   input += synapse0x37861d0();
   input += synapse0x3786210();
   input += synapse0x3786250();
   input += synapse0x3785ce0();
   input += synapse0x3785d20();
   input += synapse0x37863a0();
   input += synapse0x37863e0();
   input += synapse0x3786420();
   input += synapse0x3786460();
   input += synapse0x37864a0();
   input += synapse0x37864e0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x3785b50() {
   double input = input0x3785b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x3786520() {
   double input = -0.517463;
   input += synapse0x377fff0();
   input += synapse0x3780030();
   input += synapse0x3780070();
   input += synapse0x37800b0();
   input += synapse0x3786a70();
   input += synapse0x3786ab0();
   input += synapse0x3786af0();
   input += synapse0x3786b30();
   input += synapse0x3786b70();
   input += synapse0x3786bb0();
   input += synapse0x3786bf0();
   input += synapse0x3786c30();
   input += synapse0x3786c70();
   input += synapse0x3786cb0();
   input += synapse0x3786cf0();
   input += synapse0x3786d30();
   input += synapse0x37866b0();
   input += synapse0x37866f0();
   input += synapse0x3786e80();
   input += synapse0x3786ec0();
   input += synapse0x3786f00();
   input += synapse0x3786f40();
   input += synapse0x3786f80();
   input += synapse0x3786fc0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x3786520() {
   double input = input0x3786520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x3787000() {
   double input = 0.765992;
   input += synapse0x3787340();
   input += synapse0x3787380();
   input += synapse0x37873c0();
   input += synapse0x3787400();
   input += synapse0x3787440();
   input += synapse0x3787480();
   input += synapse0x37874c0();
   input += synapse0x3787500();
   input += synapse0x3787540();
   input += synapse0x3787580();
   input += synapse0x37875c0();
   input += synapse0x3787600();
   input += synapse0x3787640();
   input += synapse0x3787680();
   input += synapse0x37876c0();
   input += synapse0x3787700();
   input += synapse0x3787190();
   input += synapse0x37871d0();
   input += synapse0x3787850();
   input += synapse0x3787890();
   input += synapse0x37878d0();
   input += synapse0x3787910();
   input += synapse0x3787950();
   input += synapse0x3787990();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x3787000() {
   double input = input0x3787000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x37879d0() {
   double input = -0.39481;
   input += synapse0x3787d10();
   input += synapse0x3787d50();
   input += synapse0x3787d90();
   input += synapse0x3787dd0();
   input += synapse0x3787e10();
   input += synapse0x3787e50();
   input += synapse0x3787e90();
   input += synapse0x3787ed0();
   input += synapse0x3787f10();
   input += synapse0x3787f50();
   input += synapse0x3787f90();
   input += synapse0x3787fd0();
   input += synapse0x3788010();
   input += synapse0x3788050();
   input += synapse0x3788090();
   input += synapse0x37880d0();
   input += synapse0x3787b60();
   input += synapse0x3787ba0();
   input += synapse0x3784930();
   input += synapse0x3784970();
   input += synapse0x37849b0();
   input += synapse0x37849f0();
   input += synapse0x3784a30();
   input += synapse0x3784a70();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x37879d0() {
   double input = input0x37879d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x3784ab0() {
   double input = -0.17629;
   input += synapse0x3784df0();
   input += synapse0x3784e30();
   input += synapse0x3784e70();
   input += synapse0x3784eb0();
   input += synapse0x3784ef0();
   input += synapse0x3784f30();
   input += synapse0x3784f70();
   input += synapse0x3784fb0();
   input += synapse0x3784ff0();
   input += synapse0x3785030();
   input += synapse0x3785070();
   input += synapse0x37850b0();
   input += synapse0x37850f0();
   input += synapse0x3789230();
   input += synapse0x3789270();
   input += synapse0x37892b0();
   input += synapse0x3784c40();
   input += synapse0x3784c80();
   input += synapse0x3789400();
   input += synapse0x3789440();
   input += synapse0x3789480();
   input += synapse0x37894c0();
   input += synapse0x3789500();
   input += synapse0x3789540();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x3784ab0() {
   double input = input0x3784ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x3789580() {
   double input = 0.21082;
   input += synapse0x37898c0();
   input += synapse0x3789900();
   input += synapse0x3789940();
   input += synapse0x3789980();
   input += synapse0x37899c0();
   input += synapse0x3789a00();
   input += synapse0x3789a40();
   input += synapse0x3789a80();
   input += synapse0x3789ac0();
   input += synapse0x3789b00();
   input += synapse0x3789b40();
   input += synapse0x3789b80();
   input += synapse0x3789bc0();
   input += synapse0x3789c00();
   input += synapse0x3789c40();
   input += synapse0x3789c80();
   input += synapse0x3789710();
   input += synapse0x3789750();
   input += synapse0x3789dd0();
   input += synapse0x3789e10();
   input += synapse0x3789e50();
   input += synapse0x3789e90();
   input += synapse0x3789ed0();
   input += synapse0x3789f10();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x3789580() {
   double input = input0x3789580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x3789f50() {
   double input = 0.617764;
   input += synapse0x378a290();
   input += synapse0x378a2d0();
   input += synapse0x378a310();
   input += synapse0x378a350();
   input += synapse0x378a390();
   input += synapse0x378a3d0();
   input += synapse0x378a410();
   input += synapse0x378a450();
   input += synapse0x378a490();
   input += synapse0x378a4d0();
   input += synapse0x378a510();
   input += synapse0x378a550();
   input += synapse0x378a590();
   input += synapse0x378a5d0();
   input += synapse0x378a610();
   input += synapse0x378a650();
   input += synapse0x378a0e0();
   input += synapse0x378a120();
   input += synapse0x378a7a0();
   input += synapse0x378a7e0();
   input += synapse0x378a820();
   input += synapse0x378a860();
   input += synapse0x378a8a0();
   input += synapse0x378a8e0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x3789f50() {
   double input = input0x3789f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x378a920() {
   double input = -8.25574;
   input += synapse0x378ac60();
   input += synapse0x378aca0();
   input += synapse0x378ace0();
   input += synapse0x378ad20();
   input += synapse0x378ad60();
   input += synapse0x378ada0();
   input += synapse0x378ade0();
   input += synapse0x378ae20();
   input += synapse0x378ae60();
   input += synapse0x378aea0();
   input += synapse0x378aee0();
   input += synapse0x378af20();
   input += synapse0x378af60();
   input += synapse0x378afa0();
   input += synapse0x378afe0();
   input += synapse0x378b020();
   input += synapse0x378aab0();
   input += synapse0x378aaf0();
   input += synapse0x378b170();
   input += synapse0x378b1b0();
   input += synapse0x378b1f0();
   input += synapse0x378b230();
   input += synapse0x378b270();
   input += synapse0x378b2b0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x378a920() {
   double input = input0x378a920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x378b2f0() {
   double input = 1.1885;
   input += synapse0x378b630();
   input += synapse0x377c9c0();
   input += synapse0x377ca00();
   input += synapse0x377cd00();
   input += synapse0x377cd40();
   input += synapse0x377d040();
   input += synapse0x377d080();
   input += synapse0x377d380();
   input += synapse0x377d3c0();
   input += synapse0x377d6c0();
   input += synapse0x377d700();
   input += synapse0x377da00();
   input += synapse0x377da40();
   input += synapse0x377dd40();
   input += synapse0x377dd80();
   input += synapse0x377e080();
   input += synapse0x377e0c0();
   input += synapse0x377e3c0();
   input += synapse0x377e400();
   input += synapse0x377e700();
   input += synapse0x377e740();
   input += synapse0x377ea40();
   input += synapse0x377ea80();
   input += synapse0x377ed80();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x378b2f0() {
   double input = input0x378b2f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x378d100() {
   double input = -9.14072;
   input += synapse0x377edc0();
   input += synapse0x377fa80();
   input += synapse0x377fac0();
   input += synapse0x378b480();
   input += synapse0x378b4c0();
   input += synapse0x377fdc0();
   input += synapse0x377fe00();
   input += synapse0x3537820();
   input += synapse0x3537860();
   input += synapse0x3780540();
   input += synapse0x3780580();
   input += synapse0x3780880();
   input += synapse0x37808c0();
   input += synapse0x3780bc0();
   input += synapse0x3780c00();
   input += synapse0x3780f00();
   input += synapse0x3780f40();
   input += synapse0x3781240();
   input += synapse0x3781280();
   input += synapse0x3781580();
   input += synapse0x37815c0();
   input += synapse0x377f0c0();
   input += synapse0x377f100();
   input += synapse0x378d3a0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x378d100() {
   double input = input0x378d100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x378d3e0() {
   double input = 4.21632;
   input += synapse0x378d720();
   input += synapse0x378d760();
   input += synapse0x378d7a0();
   input += synapse0x378d7e0();
   input += synapse0x378d820();
   input += synapse0x378d860();
   input += synapse0x378d8a0();
   input += synapse0x378d8e0();
   input += synapse0x378d920();
   input += synapse0x378d960();
   input += synapse0x378d9a0();
   input += synapse0x378d9e0();
   input += synapse0x378da20();
   input += synapse0x378da60();
   input += synapse0x378daa0();
   input += synapse0x378dae0();
   input += synapse0x378d570();
   input += synapse0x378d5b0();
   input += synapse0x378dc30();
   input += synapse0x378dc70();
   input += synapse0x378dcb0();
   input += synapse0x378dcf0();
   input += synapse0x378dd30();
   input += synapse0x378dd70();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x378d3e0() {
   double input = input0x378d3e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x378ddb0() {
   double input = 1.24654;
   input += synapse0x378e0f0();
   input += synapse0x378e130();
   input += synapse0x378e170();
   input += synapse0x378e1b0();
   input += synapse0x378e1f0();
   input += synapse0x378e230();
   input += synapse0x378e270();
   input += synapse0x378e2b0();
   input += synapse0x378e2f0();
   input += synapse0x378e330();
   input += synapse0x378e370();
   input += synapse0x378e3b0();
   input += synapse0x378e3f0();
   input += synapse0x378e430();
   input += synapse0x378e470();
   input += synapse0x378e4b0();
   input += synapse0x378df40();
   input += synapse0x378df80();
   input += synapse0x378e600();
   input += synapse0x378e640();
   input += synapse0x378e680();
   input += synapse0x378e6c0();
   input += synapse0x378e700();
   input += synapse0x378e740();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x378ddb0() {
   double input = input0x378ddb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x378e780() {
   double input = 1.07527;
   input += synapse0x378eac0();
   input += synapse0x378eb00();
   input += synapse0x378eb40();
   input += synapse0x378eb80();
   input += synapse0x378ebc0();
   input += synapse0x378ec00();
   input += synapse0x378ec40();
   input += synapse0x378ec80();
   input += synapse0x378ecc0();
   input += synapse0x378ed00();
   input += synapse0x378ed40();
   input += synapse0x378ed80();
   input += synapse0x378edc0();
   input += synapse0x378ee00();
   input += synapse0x378ee40();
   input += synapse0x378ee80();
   input += synapse0x378e910();
   input += synapse0x378e950();
   input += synapse0x378efd0();
   input += synapse0x378f010();
   input += synapse0x378f050();
   input += synapse0x378f090();
   input += synapse0x378f0d0();
   input += synapse0x378f110();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x378e780() {
   double input = input0x378e780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x378f150() {
   double input = -4.47133;
   input += synapse0x378f490();
   input += synapse0x378f4d0();
   input += synapse0x378f510();
   input += synapse0x378f550();
   input += synapse0x378f590();
   input += synapse0x378f5d0();
   input += synapse0x378f610();
   input += synapse0x378f650();
   input += synapse0x378f690();
   input += synapse0x378f6d0();
   input += synapse0x378f710();
   input += synapse0x378f750();
   input += synapse0x378f790();
   input += synapse0x378f7d0();
   input += synapse0x378f810();
   input += synapse0x378f850();
   input += synapse0x378f2e0();
   input += synapse0x378f320();
   input += synapse0x378f9a0();
   input += synapse0x378f9e0();
   input += synapse0x378fa20();
   input += synapse0x378fa60();
   input += synapse0x378faa0();
   input += synapse0x378fae0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x378f150() {
   double input = input0x378f150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x378fb20() {
   double input = 1.49024;
   input += synapse0x378fe60();
   input += synapse0x378fea0();
   input += synapse0x378fee0();
   input += synapse0x378ff20();
   input += synapse0x378ff60();
   input += synapse0x378ffa0();
   input += synapse0x378ffe0();
   input += synapse0x3790020();
   input += synapse0x3790060();
   input += synapse0x3788220();
   input += synapse0x3788260();
   input += synapse0x37882a0();
   input += synapse0x37882e0();
   input += synapse0x3788320();
   input += synapse0x3788360();
   input += synapse0x37883a0();
   input += synapse0x378fcb0();
   input += synapse0x378fcf0();
   input += synapse0x37884f0();
   input += synapse0x3788530();
   input += synapse0x3788570();
   input += synapse0x37885b0();
   input += synapse0x37885f0();
   input += synapse0x3788630();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x378fb20() {
   double input = input0x378fb20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x3788670() {
   double input = 0.592335;
   input += synapse0x37889b0();
   input += synapse0x37889f0();
   input += synapse0x3788a30();
   input += synapse0x3788a70();
   input += synapse0x3788ab0();
   input += synapse0x3788af0();
   input += synapse0x3788b30();
   input += synapse0x3788b70();
   input += synapse0x3788bb0();
   input += synapse0x3788bf0();
   input += synapse0x3788c30();
   input += synapse0x3788c70();
   input += synapse0x3788cb0();
   input += synapse0x3788cf0();
   input += synapse0x3788d30();
   input += synapse0x3788d70();
   input += synapse0x3788800();
   input += synapse0x3788840();
   input += synapse0x3788ec0();
   input += synapse0x3788f00();
   input += synapse0x3788f40();
   input += synapse0x3788f80();
   input += synapse0x3788fc0();
   input += synapse0x3789000();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x3788670() {
   double input = input0x3788670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x3789040() {
   double input = -3.12497;
   input += synapse0x37891d0();
   input += synapse0x3792260();
   input += synapse0x37922a0();
   input += synapse0x37922e0();
   input += synapse0x3792320();
   input += synapse0x3792360();
   input += synapse0x37923a0();
   input += synapse0x37923e0();
   input += synapse0x3792420();
   input += synapse0x3792460();
   input += synapse0x37924a0();
   input += synapse0x37924e0();
   input += synapse0x3792520();
   input += synapse0x3792560();
   input += synapse0x37925a0();
   input += synapse0x37925e0();
   input += synapse0x37920b0();
   input += synapse0x37920f0();
   input += synapse0x3792730();
   input += synapse0x3792770();
   input += synapse0x37927b0();
   input += synapse0x37927f0();
   input += synapse0x3792830();
   input += synapse0x3792870();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x3789040() {
   double input = input0x3789040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x37928b0() {
   double input = -2.28996;
   input += synapse0x3792bf0();
   input += synapse0x3792c30();
   input += synapse0x3792c70();
   input += synapse0x3792cb0();
   input += synapse0x3792cf0();
   input += synapse0x3792d30();
   input += synapse0x3792d70();
   input += synapse0x3792db0();
   input += synapse0x3792df0();
   input += synapse0x3792e30();
   input += synapse0x3792e70();
   input += synapse0x3792eb0();
   input += synapse0x3792ef0();
   input += synapse0x3792f30();
   input += synapse0x3792f70();
   input += synapse0x3792fb0();
   input += synapse0x3792a40();
   input += synapse0x3792a80();
   input += synapse0x3793100();
   input += synapse0x3793140();
   input += synapse0x3793180();
   input += synapse0x37931c0();
   input += synapse0x3793200();
   input += synapse0x3793240();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x37928b0() {
   double input = input0x37928b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x3793280() {
   double input = -0.153341;
   input += synapse0x37935c0();
   input += synapse0x3793600();
   input += synapse0x3793640();
   input += synapse0x3793680();
   input += synapse0x37936c0();
   input += synapse0x3793700();
   input += synapse0x3793740();
   input += synapse0x3793780();
   input += synapse0x37937c0();
   input += synapse0x3793800();
   input += synapse0x3793840();
   input += synapse0x3793880();
   input += synapse0x37938c0();
   input += synapse0x3793900();
   input += synapse0x3793940();
   input += synapse0x3793980();
   input += synapse0x3793410();
   input += synapse0x3793450();
   input += synapse0x3793ad0();
   input += synapse0x3793b10();
   input += synapse0x3793b50();
   input += synapse0x3793b90();
   input += synapse0x3793bd0();
   input += synapse0x3793c10();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x3793280() {
   double input = input0x3793280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x3793c50() {
   double input = -1.30211;
   input += synapse0x3793f90();
   input += synapse0x3793fd0();
   input += synapse0x3794010();
   input += synapse0x3794050();
   input += synapse0x3794090();
   input += synapse0x37940d0();
   input += synapse0x3794110();
   input += synapse0x3794150();
   input += synapse0x3794190();
   input += synapse0x37941d0();
   input += synapse0x3794210();
   input += synapse0x3794250();
   input += synapse0x3794290();
   input += synapse0x37942d0();
   input += synapse0x3794310();
   input += synapse0x3794350();
   input += synapse0x3793de0();
   input += synapse0x3793e20();
   input += synapse0x37944a0();
   input += synapse0x37944e0();
   input += synapse0x3794520();
   input += synapse0x3794560();
   input += synapse0x37945a0();
   input += synapse0x37945e0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x3793c50() {
   double input = input0x3793c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x3794620() {
   double input = -0.24478;
   input += synapse0x3794960();
   input += synapse0x37949a0();
   input += synapse0x37949e0();
   input += synapse0x3794a20();
   input += synapse0x3794a60();
   input += synapse0x3794aa0();
   input += synapse0x3794ae0();
   input += synapse0x3794b20();
   input += synapse0x3794b60();
   input += synapse0x3794ba0();
   input += synapse0x3794be0();
   input += synapse0x3794c20();
   input += synapse0x3794c60();
   input += synapse0x3794ca0();
   input += synapse0x3794ce0();
   input += synapse0x3794d20();
   input += synapse0x37947b0();
   input += synapse0x37947f0();
   input += synapse0x3794e70();
   input += synapse0x3794eb0();
   input += synapse0x3794ef0();
   input += synapse0x3794f30();
   input += synapse0x3794f70();
   input += synapse0x3794fb0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x3794620() {
   double input = input0x3794620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x3794ff0() {
   double input = -0.282655;
   input += synapse0x3795330();
   input += synapse0x3795370();
   input += synapse0x37953b0();
   input += synapse0x37953f0();
   input += synapse0x3795430();
   input += synapse0x3795470();
   input += synapse0x37954b0();
   input += synapse0x37954f0();
   input += synapse0x3795530();
   input += synapse0x3795570();
   input += synapse0x37955b0();
   input += synapse0x37955f0();
   input += synapse0x3795630();
   input += synapse0x3795670();
   input += synapse0x37956b0();
   input += synapse0x37956f0();
   input += synapse0x3795180();
   input += synapse0x37951c0();
   input += synapse0x3795840();
   input += synapse0x3795880();
   input += synapse0x37958c0();
   input += synapse0x3795900();
   input += synapse0x3795940();
   input += synapse0x3795980();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x3794ff0() {
   double input = input0x3794ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x37959c0() {
   double input = 0.195818;
   input += synapse0x3795d00();
   input += synapse0x3795d40();
   input += synapse0x3795d80();
   input += synapse0x3795dc0();
   input += synapse0x3795e00();
   input += synapse0x3795e40();
   input += synapse0x3795e80();
   input += synapse0x3795ec0();
   input += synapse0x3795f00();
   input += synapse0x3795f40();
   input += synapse0x3795f80();
   input += synapse0x3795fc0();
   input += synapse0x3796000();
   input += synapse0x3796040();
   input += synapse0x3796080();
   input += synapse0x37960c0();
   input += synapse0x3795b50();
   input += synapse0x3795b90();
   input += synapse0x3796210();
   input += synapse0x3796250();
   input += synapse0x3796290();
   input += synapse0x37962d0();
   input += synapse0x3796310();
   input += synapse0x3796350();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x37959c0() {
   double input = input0x37959c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x3796390() {
   double input = -0.593378;
   input += synapse0x37966d0();
   input += synapse0x3796710();
   input += synapse0x3796750();
   input += synapse0x3796790();
   input += synapse0x37967d0();
   input += synapse0x3796810();
   input += synapse0x3796850();
   input += synapse0x3796890();
   input += synapse0x37968d0();
   input += synapse0x3796910();
   input += synapse0x3796950();
   input += synapse0x3796990();
   input += synapse0x37969d0();
   input += synapse0x3796a10();
   input += synapse0x3796a50();
   input += synapse0x3796a90();
   input += synapse0x3796520();
   input += synapse0x3796560();
   input += synapse0x3796be0();
   input += synapse0x3796c20();
   input += synapse0x3796c60();
   input += synapse0x3796ca0();
   input += synapse0x3796ce0();
   input += synapse0x3796d20();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x3796390() {
   double input = input0x3796390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x3796d60() {
   double input = 1.23375;
   input += synapse0x37970a0();
   input += synapse0x378b670();
   input += synapse0x378b6b0();
   input += synapse0x378b6f0();
   input += synapse0x378b940();
   input += synapse0x378b980();
   input += synapse0x378b9c0();
   input += synapse0x378bc10();
   input += synapse0x378bc50();
   input += synapse0x378bea0();
   input += synapse0x378bee0();
   input += synapse0x378bf20();
   input += synapse0x378c170();
   input += synapse0x378c1b0();
   input += synapse0x378c400();
   input += synapse0x378c440();
   input += synapse0x3796ef0();
   input += synapse0x3796f30();
   input += synapse0x378c590();
   input += synapse0x378caa0();
   input += synapse0x378cae0();
   input += synapse0x378cb20();
   input += synapse0x378cd70();
   input += synapse0x378cdb0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x3796d60() {
   double input = input0x3796d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x378cdf0() {
   double input = 0.811192;
   input += synapse0x378c660();
   input += synapse0x378c6a0();
   input += synapse0x378c6e0();
   input += synapse0x378c720();
   input += synapse0x378d0a0();
   input += synapse0x37993f0();
   input += synapse0x3799430();
   input += synapse0x3799470();
   input += synapse0x37994b0();
   input += synapse0x37994f0();
   input += synapse0x3799530();
   input += synapse0x3799570();
   input += synapse0x37995b0();
   input += synapse0x37995f0();
   input += synapse0x3799630();
   input += synapse0x3799670();
   input += synapse0x378cf80();
   input += synapse0x378cfc0();
   input += synapse0x37997c0();
   input += synapse0x3799800();
   input += synapse0x3799840();
   input += synapse0x3799880();
   input += synapse0x37998c0();
   input += synapse0x3799900();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x378cdf0() {
   double input = input0x378cdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x3799940() {
   double input = -1.78678;
   input += synapse0x3799c80();
   input += synapse0x3799cc0();
   input += synapse0x3799d00();
   input += synapse0x3799d40();
   input += synapse0x3799d80();
   input += synapse0x3799dc0();
   input += synapse0x3799e00();
   input += synapse0x3799e40();
   input += synapse0x3799e80();
   input += synapse0x3799ec0();
   input += synapse0x3799f00();
   input += synapse0x3799f40();
   input += synapse0x3799f80();
   input += synapse0x3799fc0();
   input += synapse0x379a000();
   input += synapse0x379a040();
   input += synapse0x3799ad0();
   input += synapse0x3799b10();
   input += synapse0x379a190();
   input += synapse0x379a1d0();
   input += synapse0x379a210();
   input += synapse0x379a250();
   input += synapse0x379a290();
   input += synapse0x379a2d0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x3799940() {
   double input = input0x3799940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x379a310() {
   double input = 0.859451;
   input += synapse0x379a650();
   input += synapse0x379a690();
   input += synapse0x379a6d0();
   input += synapse0x379a710();
   input += synapse0x379a750();
   input += synapse0x379a790();
   input += synapse0x379a7d0();
   input += synapse0x379a810();
   input += synapse0x379a850();
   input += synapse0x379a890();
   input += synapse0x379a8d0();
   input += synapse0x379a910();
   input += synapse0x379a950();
   input += synapse0x379a990();
   input += synapse0x379a9d0();
   input += synapse0x379aa10();
   input += synapse0x379a4a0();
   input += synapse0x379a4e0();
   input += synapse0x379ab60();
   input += synapse0x379aba0();
   input += synapse0x379abe0();
   input += synapse0x379ac20();
   input += synapse0x379ac60();
   input += synapse0x379aca0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x379a310() {
   double input = input0x379a310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x379ace0() {
   double input = -0.146304;
   input += synapse0x379b020();
   input += synapse0x379b060();
   input += synapse0x379b0a0();
   input += synapse0x379b0e0();
   input += synapse0x379b120();
   input += synapse0x379b160();
   input += synapse0x379b1a0();
   input += synapse0x379b1e0();
   input += synapse0x379b220();
   input += synapse0x379b260();
   input += synapse0x379b2a0();
   input += synapse0x379b2e0();
   input += synapse0x379b320();
   input += synapse0x379b360();
   input += synapse0x379b3a0();
   input += synapse0x379b3e0();
   input += synapse0x379ae70();
   input += synapse0x379aeb0();
   input += synapse0x379b530();
   input += synapse0x379b570();
   input += synapse0x379b5b0();
   input += synapse0x379b5f0();
   input += synapse0x379b630();
   input += synapse0x379b670();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x379ace0() {
   double input = input0x379ace0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x379b6b0() {
   double input = 0.88588;
   input += synapse0x379b9f0();
   input += synapse0x379ba30();
   input += synapse0x379ba70();
   input += synapse0x379bab0();
   input += synapse0x379baf0();
   input += synapse0x379bb30();
   input += synapse0x379bb70();
   input += synapse0x379bbb0();
   input += synapse0x379bbf0();
   input += synapse0x379bc30();
   input += synapse0x379bc70();
   input += synapse0x379bcb0();
   input += synapse0x379bcf0();
   input += synapse0x379bd30();
   input += synapse0x379bd70();
   input += synapse0x379bdb0();
   input += synapse0x379b840();
   input += synapse0x379b880();
   input += synapse0x379bf00();
   input += synapse0x379bf40();
   input += synapse0x379bf80();
   input += synapse0x379bfc0();
   input += synapse0x379c000();
   input += synapse0x379c040();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x379b6b0() {
   double input = input0x379b6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x379c080() {
   double input = -0.0534973;
   input += synapse0x379c3c0();
   input += synapse0x379c400();
   input += synapse0x379c440();
   input += synapse0x379c480();
   input += synapse0x379c4c0();
   input += synapse0x379c500();
   input += synapse0x379c540();
   input += synapse0x379c580();
   input += synapse0x379c5c0();
   input += synapse0x379c600();
   input += synapse0x379c640();
   input += synapse0x379c680();
   input += synapse0x379c6c0();
   input += synapse0x379c700();
   input += synapse0x379c740();
   input += synapse0x379c780();
   input += synapse0x379c210();
   input += synapse0x379c250();
   input += synapse0x379c8d0();
   input += synapse0x379c910();
   input += synapse0x379c950();
   input += synapse0x379c990();
   input += synapse0x379c9d0();
   input += synapse0x379ca10();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x379c080() {
   double input = input0x379c080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x379ca50() {
   double input = -0.35918;
   input += synapse0x379cd90();
   input += synapse0x379cdd0();
   input += synapse0x379ce10();
   input += synapse0x379ce50();
   input += synapse0x379ce90();
   input += synapse0x379ced0();
   input += synapse0x379cf10();
   input += synapse0x379cf50();
   input += synapse0x379cf90();
   input += synapse0x379cfd0();
   input += synapse0x379d010();
   input += synapse0x379d050();
   input += synapse0x379d090();
   input += synapse0x379d0d0();
   input += synapse0x379d110();
   input += synapse0x379d150();
   input += synapse0x379cbe0();
   input += synapse0x379cc20();
   input += synapse0x379d2a0();
   input += synapse0x379d2e0();
   input += synapse0x379d320();
   input += synapse0x379d360();
   input += synapse0x379d3a0();
   input += synapse0x379d3e0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x379ca50() {
   double input = input0x379ca50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x379d420() {
   double input = 0.119908;
   input += synapse0x379d760();
   input += synapse0x379d7a0();
   input += synapse0x379d7e0();
   input += synapse0x379d820();
   input += synapse0x379d860();
   input += synapse0x379d8a0();
   input += synapse0x379d8e0();
   input += synapse0x379d920();
   input += synapse0x379d960();
   input += synapse0x379d9a0();
   input += synapse0x379d9e0();
   input += synapse0x379da20();
   input += synapse0x379da60();
   input += synapse0x379daa0();
   input += synapse0x379dae0();
   input += synapse0x379db20();
   input += synapse0x379d5b0();
   input += synapse0x379d5f0();
   input += synapse0x379dc70();
   input += synapse0x379dcb0();
   input += synapse0x379dcf0();
   input += synapse0x379dd30();
   input += synapse0x379dd70();
   input += synapse0x379ddb0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x379d420() {
   double input = input0x379d420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x379ddf0() {
   double input = 0.0392208;
   input += synapse0x3786860();
   input += synapse0x37868a0();
   input += synapse0x37868e0();
   input += synapse0x3786920();
   input += synapse0x3786960();
   input += synapse0x37869a0();
   input += synapse0x37869e0();
   input += synapse0x3786a20();
   input += synapse0x379e540();
   input += synapse0x379e580();
   input += synapse0x379e5c0();
   input += synapse0x379e600();
   input += synapse0x379e640();
   input += synapse0x379e680();
   input += synapse0x379e6c0();
   input += synapse0x379e700();
   input += synapse0x379df80();
   input += synapse0x379dfc0();
   input += synapse0x379e850();
   input += synapse0x379e890();
   input += synapse0x379e8d0();
   input += synapse0x379e910();
   input += synapse0x379e950();
   input += synapse0x379e990();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x379ddf0() {
   double input = input0x379ddf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x379e9d0() {
   double input = -4.19289;
   input += synapse0x379ed10();
   input += synapse0x379ed50();
   input += synapse0x379ed90();
   input += synapse0x379edd0();
   input += synapse0x379ee10();
   input += synapse0x379ee50();
   input += synapse0x379ee90();
   input += synapse0x379eed0();
   input += synapse0x379ef10();
   input += synapse0x379ef50();
   input += synapse0x379ef90();
   input += synapse0x379efd0();
   input += synapse0x379f010();
   input += synapse0x379f050();
   input += synapse0x379f090();
   input += synapse0x379f0d0();
   input += synapse0x379eb60();
   input += synapse0x379eba0();
   input += synapse0x379f220();
   input += synapse0x379f260();
   input += synapse0x379f2a0();
   input += synapse0x379f2e0();
   input += synapse0x379f320();
   input += synapse0x379f360();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x379e9d0() {
   double input = input0x379e9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x379f3a0() {
   double input = 0.268513;
   input += synapse0x379f6e0();
   input += synapse0x379f720();
   input += synapse0x379f760();
   input += synapse0x379f7a0();
   input += synapse0x379f7e0();
   input += synapse0x379f820();
   input += synapse0x379f860();
   input += synapse0x379f8a0();
   input += synapse0x379f8e0();
   input += synapse0x379f920();
   input += synapse0x379f960();
   input += synapse0x379f9a0();
   input += synapse0x379f9e0();
   input += synapse0x379fa20();
   input += synapse0x379fa60();
   input += synapse0x379faa0();
   input += synapse0x379f530();
   input += synapse0x379f570();
   input += synapse0x37900a0();
   input += synapse0x37900e0();
   input += synapse0x3790120();
   input += synapse0x3790160();
   input += synapse0x37901a0();
   input += synapse0x37901e0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x379f3a0() {
   double input = input0x379f3a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x3790220() {
   double input = 1.11356;
   input += synapse0x3790560();
   input += synapse0x37905a0();
   input += synapse0x37905e0();
   input += synapse0x3790620();
   input += synapse0x3790660();
   input += synapse0x37906a0();
   input += synapse0x37906e0();
   input += synapse0x3790720();
   input += synapse0x3790760();
   input += synapse0x37907a0();
   input += synapse0x37907e0();
   input += synapse0x3790820();
   input += synapse0x3790860();
   input += synapse0x37908a0();
   input += synapse0x37908e0();
   input += synapse0x3790920();
   input += synapse0x37903b0();
   input += synapse0x37903f0();
   input += synapse0x3790a70();
   input += synapse0x3790ab0();
   input += synapse0x3790af0();
   input += synapse0x3790b30();
   input += synapse0x3790b70();
   input += synapse0x3790bb0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x3790220() {
   double input = input0x3790220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x3790bf0() {
   double input = -0.0166406;
   input += synapse0x3790f30();
   input += synapse0x3790f70();
   input += synapse0x3790fb0();
   input += synapse0x3790ff0();
   input += synapse0x3791030();
   input += synapse0x3791070();
   input += synapse0x37910b0();
   input += synapse0x37910f0();
   input += synapse0x3791130();
   input += synapse0x3791170();
   input += synapse0x37911b0();
   input += synapse0x37911f0();
   input += synapse0x3791230();
   input += synapse0x3791270();
   input += synapse0x37912b0();
   input += synapse0x37912f0();
   input += synapse0x3790d80();
   input += synapse0x3790dc0();
   input += synapse0x3791440();
   input += synapse0x3791480();
   input += synapse0x37914c0();
   input += synapse0x3791500();
   input += synapse0x3791540();
   input += synapse0x3791580();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x3790bf0() {
   double input = input0x3790bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x37915c0() {
   double input = 0.629738;
   input += synapse0x3791900();
   input += synapse0x3791940();
   input += synapse0x3791980();
   input += synapse0x37919c0();
   input += synapse0x3791a00();
   input += synapse0x3791a40();
   input += synapse0x3791a80();
   input += synapse0x3791ac0();
   input += synapse0x3791b00();
   input += synapse0x3791b40();
   input += synapse0x3791b80();
   input += synapse0x3791bc0();
   input += synapse0x3791c00();
   input += synapse0x3791c40();
   input += synapse0x3791c80();
   input += synapse0x3791cc0();
   input += synapse0x3791750();
   input += synapse0x3791790();
   input += synapse0x3791e10();
   input += synapse0x3791e50();
   input += synapse0x3791e90();
   input += synapse0x3791ed0();
   input += synapse0x3791f10();
   input += synapse0x3791f50();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x37915c0() {
   double input = input0x37915c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x37a3c00() {
   double input = -2.44783;
   input += synapse0x37a3e20();
   input += synapse0x37a3e60();
   input += synapse0x37a3ea0();
   input += synapse0x37a3ee0();
   input += synapse0x37a3f20();
   input += synapse0x37a3f60();
   input += synapse0x37a3fa0();
   input += synapse0x37a3fe0();
   input += synapse0x37a4020();
   input += synapse0x37a4060();
   input += synapse0x37a40a0();
   input += synapse0x37a40e0();
   input += synapse0x37a4120();
   input += synapse0x37a4160();
   input += synapse0x37a41a0();
   input += synapse0x37a41e0();
   input += synapse0x3791f90();
   input += synapse0x3791fd0();
   input += synapse0x37a4330();
   input += synapse0x37a4370();
   input += synapse0x37a43b0();
   input += synapse0x37a43f0();
   input += synapse0x37a4430();
   input += synapse0x37a4470();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x37a3c00() {
   double input = input0x37a3c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x37a44b0() {
   double input = 1.22894;
   input += synapse0x37a47f0();
   input += synapse0x37a4830();
   input += synapse0x37a4870();
   input += synapse0x37a48b0();
   input += synapse0x37a48f0();
   input += synapse0x37a4930();
   input += synapse0x37a4970();
   input += synapse0x37a49b0();
   input += synapse0x37a49f0();
   input += synapse0x37a4a30();
   input += synapse0x37a4a70();
   input += synapse0x37a4ab0();
   input += synapse0x37a4af0();
   input += synapse0x37a4b30();
   input += synapse0x37a4b70();
   input += synapse0x37a4bb0();
   input += synapse0x37a4640();
   input += synapse0x37a4680();
   input += synapse0x37a4d00();
   input += synapse0x37a4d40();
   input += synapse0x37a4d80();
   input += synapse0x37a4dc0();
   input += synapse0x37a4e00();
   input += synapse0x37a4e40();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x37a44b0() {
   double input = input0x37a44b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x37a4e80() {
   double input = -1.13559;
   input += synapse0x37a51c0();
   input += synapse0x37a5200();
   input += synapse0x37a5240();
   input += synapse0x37a5280();
   input += synapse0x37a52c0();
   input += synapse0x37a5300();
   input += synapse0x37a5340();
   input += synapse0x37a5380();
   input += synapse0x37a53c0();
   input += synapse0x37a5400();
   input += synapse0x37a5440();
   input += synapse0x37a5480();
   input += synapse0x37a54c0();
   input += synapse0x37a5500();
   input += synapse0x37a5540();
   input += synapse0x37a5580();
   input += synapse0x37a5010();
   input += synapse0x37a5050();
   input += synapse0x37a56d0();
   input += synapse0x37a5710();
   input += synapse0x37a5750();
   input += synapse0x37a5790();
   input += synapse0x37a57d0();
   input += synapse0x37a5810();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x37a4e80() {
   double input = input0x37a4e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x37a5850() {
   double input = -2.37967;
   input += synapse0x37a5b90();
   input += synapse0x37a5bd0();
   input += synapse0x37a5c10();
   input += synapse0x37a5c50();
   input += synapse0x37a5c90();
   input += synapse0x37a5cd0();
   input += synapse0x37a5d10();
   input += synapse0x37a5d50();
   input += synapse0x37a5d90();
   input += synapse0x37a5dd0();
   input += synapse0x37a5e10();
   input += synapse0x37a5e50();
   input += synapse0x37a5e90();
   input += synapse0x37a5ed0();
   input += synapse0x37a5f10();
   input += synapse0x37a5f50();
   input += synapse0x37a59e0();
   input += synapse0x37a5a20();
   input += synapse0x37a60a0();
   input += synapse0x37a60e0();
   input += synapse0x37a6120();
   input += synapse0x37a6160();
   input += synapse0x37a61a0();
   input += synapse0x37a61e0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x37a5850() {
   double input = input0x37a5850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x37aca50() {
   double input = -0.209907;
   input += synapse0x35460f0();
   input += synapse0x3546130();
   input += synapse0x3783c90();
   input += synapse0x3783cd0();
   input += synapse0x3784660();
   input += synapse0x37846a0();
   input += synapse0x3785430();
   input += synapse0x3785470();
   input += synapse0x3785e00();
   input += synapse0x3785e40();
   input += synapse0x37867d0();
   input += synapse0x3786810();
   input += synapse0x37872b0();
   input += synapse0x37872f0();
   input += synapse0x3787c80();
   input += synapse0x3787cc0();
   input += synapse0x3784d60();
   input += synapse0x3784da0();
   input += synapse0x3789830();
   input += synapse0x3789870();
   input += synapse0x378a200();
   input += synapse0x378a240();
   input += synapse0x378abd0();
   input += synapse0x378ac10();
   input += synapse0x378b5a0();
   input += synapse0x378b5e0();
   input += synapse0x377f740();
   input += synapse0x377f780();
   input += synapse0x378d690();
   input += synapse0x378d6d0();
   input += synapse0x378e060();
   input += synapse0x378e0a0();
   input += synapse0x378ea30();
   input += synapse0x378ea70();
   input += synapse0x378f400();
   input += synapse0x378f440();
   input += synapse0x378fdd0();
   input += synapse0x378fe10();
   input += synapse0x3788920();
   input += synapse0x3788960();
   input += synapse0x37921d0();
   input += synapse0x3792210();
   input += synapse0x3792b60();
   input += synapse0x3792ba0();
   input += synapse0x3793530();
   input += synapse0x3793570();
   input += synapse0x3793f00();
   input += synapse0x3793f40();
   input += synapse0x37948d0();
   input += synapse0x3794910();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x37aca50() {
   double input = input0x37aca50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x37acdf0() {
   double input = 0.591968;
   input += synapse0x3797010();
   input += synapse0x3797050();
   input += synapse0x378c5d0();
   input += synapse0x378c610();
   input += synapse0x3799bf0();
   input += synapse0x3799c30();
   input += synapse0x379a5c0();
   input += synapse0x379a600();
   input += synapse0x379af90();
   input += synapse0x379afd0();
   input += synapse0x379b960();
   input += synapse0x379b9a0();
   input += synapse0x379c330();
   input += synapse0x379c370();
   input += synapse0x379cd00();
   input += synapse0x379cd40();
   input += synapse0x379d6d0();
   input += synapse0x379d710();
   input += synapse0x379e0a0();
   input += synapse0x379e0e0();
   input += synapse0x379ec80();
   input += synapse0x379ecc0();
   input += synapse0x379f650();
   input += synapse0x379f690();
   input += synapse0x37904d0();
   input += synapse0x3790510();
   input += synapse0x3790ea0();
   input += synapse0x3790ee0();
   input += synapse0x3791870();
   input += synapse0x37918b0();
   input += synapse0x37a3d90();
   input += synapse0x37a3dd0();
   input += synapse0x37a4760();
   input += synapse0x37a47a0();
   input += synapse0x37a5130();
   input += synapse0x37a5170();
   input += synapse0x37a5b00();
   input += synapse0x37a5b40();
   input += synapse0x37819f0();
   input += synapse0x3781a30();
   input += synapse0x37952a0();
   input += synapse0x37952e0();
   input += synapse0x37a6220();
   input += synapse0x37a6260();
   input += synapse0x37a62a0();
   input += synapse0x37a62e0();
   input += synapse0x37ad190();
   input += synapse0x37ad1d0();
   input += synapse0x37ad210();
   input += synapse0x37ad250();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x37acdf0() {
   double input = input0x37acdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x37ad290() {
   double input = -0.959351;
   input += synapse0x37ad5d0();
   input += synapse0x37ad610();
   input += synapse0x37ad650();
   input += synapse0x37ad690();
   input += synapse0x37ad6d0();
   input += synapse0x37ad710();
   input += synapse0x37ad750();
   input += synapse0x37ad790();
   input += synapse0x37ad7d0();
   input += synapse0x37ad810();
   input += synapse0x37ad850();
   input += synapse0x37ad890();
   input += synapse0x37ad8d0();
   input += synapse0x37ad910();
   input += synapse0x37ad950();
   input += synapse0x37ad990();
   input += synapse0x37ad420();
   input += synapse0x37ad460();
   input += synapse0x37adae0();
   input += synapse0x37adb20();
   input += synapse0x37adb60();
   input += synapse0x37adba0();
   input += synapse0x37adbe0();
   input += synapse0x37adc20();
   input += synapse0x37adc60();
   input += synapse0x37adca0();
   input += synapse0x37adce0();
   input += synapse0x37add20();
   input += synapse0x37add60();
   input += synapse0x37adda0();
   input += synapse0x37adde0();
   input += synapse0x37ade20();
   input += synapse0x37ad9d0();
   input += synapse0x37ada10();
   input += synapse0x37ada50();
   input += synapse0x37ada90();
   input += synapse0x37ae070();
   input += synapse0x37ae0b0();
   input += synapse0x37ae0f0();
   input += synapse0x37ae130();
   input += synapse0x37ae170();
   input += synapse0x37ae1b0();
   input += synapse0x37ae1f0();
   input += synapse0x37ae230();
   input += synapse0x37ae270();
   input += synapse0x37ae2b0();
   input += synapse0x37ae2f0();
   input += synapse0x37ae330();
   input += synapse0x37ae370();
   input += synapse0x37ae3b0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x37ad290() {
   double input = input0x37ad290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x37ae3f0() {
   double input = 3.13562;
   input += synapse0x37ae730();
   input += synapse0x37ae770();
   input += synapse0x37ae7b0();
   input += synapse0x37ae7f0();
   input += synapse0x37ae830();
   input += synapse0x37ae870();
   input += synapse0x37ae8b0();
   input += synapse0x37ae8f0();
   input += synapse0x37ae930();
   input += synapse0x37ae970();
   input += synapse0x37ae9b0();
   input += synapse0x37ae9f0();
   input += synapse0x37aea30();
   input += synapse0x37aea70();
   input += synapse0x37aeab0();
   input += synapse0x37aeaf0();
   input += synapse0x37ae580();
   input += synapse0x37ae5c0();
   input += synapse0x37aec40();
   input += synapse0x37aec80();
   input += synapse0x37aecc0();
   input += synapse0x37aed00();
   input += synapse0x37aed40();
   input += synapse0x37aed80();
   input += synapse0x37aedc0();
   input += synapse0x37aee00();
   input += synapse0x37aee40();
   input += synapse0x37aee80();
   input += synapse0x37aeec0();
   input += synapse0x37aef00();
   input += synapse0x37aef40();
   input += synapse0x37aef80();
   input += synapse0x37aeb30();
   input += synapse0x37aeb70();
   input += synapse0x37aebb0();
   input += synapse0x37aebf0();
   input += synapse0x37af1d0();
   input += synapse0x37af210();
   input += synapse0x37af250();
   input += synapse0x37af290();
   input += synapse0x37af2d0();
   input += synapse0x37af310();
   input += synapse0x37af350();
   input += synapse0x37af390();
   input += synapse0x37af3d0();
   input += synapse0x37af410();
   input += synapse0x37af450();
   input += synapse0x37af490();
   input += synapse0x37af4d0();
   input += synapse0x37af510();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x37ae3f0() {
   double input = input0x37ae3f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x37af550() {
   double input = -0.743442;
   input += synapse0x37af890();
   input += synapse0x37af8d0();
   input += synapse0x37af910();
   input += synapse0x37af950();
   input += synapse0x37af990();
   input += synapse0x37af9d0();
   input += synapse0x37afa10();
   input += synapse0x37afa50();
   input += synapse0x37afa90();
   input += synapse0x37afad0();
   input += synapse0x37afb10();
   input += synapse0x37afb50();
   input += synapse0x37afb90();
   input += synapse0x37afbd0();
   input += synapse0x37afc10();
   input += synapse0x37afc50();
   input += synapse0x37af6e0();
   input += synapse0x37af720();
   input += synapse0x37afda0();
   input += synapse0x37afde0();
   input += synapse0x37afe20();
   input += synapse0x37afe60();
   input += synapse0x37afea0();
   input += synapse0x37afee0();
   input += synapse0x37aff20();
   input += synapse0x37aff60();
   input += synapse0x37affa0();
   input += synapse0x37affe0();
   input += synapse0x37b0020();
   input += synapse0x37b0060();
   input += synapse0x37b00a0();
   input += synapse0x37b00e0();
   input += synapse0x37afc90();
   input += synapse0x37afcd0();
   input += synapse0x37afd10();
   input += synapse0x37afd50();
   input += synapse0x37b0330();
   input += synapse0x37b0370();
   input += synapse0x37b03b0();
   input += synapse0x37b03f0();
   input += synapse0x37b0430();
   input += synapse0x37b0470();
   input += synapse0x37b04b0();
   input += synapse0x37b04f0();
   input += synapse0x37b0530();
   input += synapse0x37b0570();
   input += synapse0x37b05b0();
   input += synapse0x37b05f0();
   input += synapse0x37b0630();
   input += synapse0x37b0670();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x37af550() {
   double input = input0x37af550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sR::input0x37b06b0() {
   double input = 2.53807;
   input += synapse0x37b08d0();
   input += synapse0x37b0910();
   input += synapse0x37b0950();
   input += synapse0x37b0990();
   input += synapse0x37b09d0();
   return input;
}

double NNfunction_ns_chi03_sR::neuron0x37b06b0() {
   double input = input0x37b06b0();
   return (input * 1)+0;
}

double NNfunction_ns_chi03_sR::synapse0x377c660() {
   return (neuron0x377c7a0()*0.121963);
}

double NNfunction_ns_chi03_sR::synapse0x377c6a0() {
   return (neuron0x377cae0()*7.18135);
}

double NNfunction_ns_chi03_sR::synapse0x3781a80() {
   return (neuron0x377ce20()*0.0236282);
}

double NNfunction_ns_chi03_sR::synapse0x3781ac0() {
   return (neuron0x377d160()*-0.0080602);
}

double NNfunction_ns_chi03_sR::synapse0x3781b00() {
   return (neuron0x377d4a0()*0.0263278);
}

double NNfunction_ns_chi03_sR::synapse0x3781b40() {
   return (neuron0x377d7e0()*0.0542842);
}

double NNfunction_ns_chi03_sR::synapse0x3781b80() {
   return (neuron0x377db20()*-0.0413195);
}

double NNfunction_ns_chi03_sR::synapse0x3781bc0() {
   return (neuron0x377de60()*-0.0746781);
}

double NNfunction_ns_chi03_sR::synapse0x3781c00() {
   return (neuron0x377e1a0()*-0.00813594);
}

double NNfunction_ns_chi03_sR::synapse0x3781c40() {
   return (neuron0x377e4e0()*-0.0254874);
}

double NNfunction_ns_chi03_sR::synapse0x3781c80() {
   return (neuron0x377e820()*-0.0404225);
}

double NNfunction_ns_chi03_sR::synapse0x3781cc0() {
   return (neuron0x377eb60()*-0.0746269);
}

double NNfunction_ns_chi03_sR::synapse0x3781d00() {
   return (neuron0x377eea0()*-0.0206646);
}

double NNfunction_ns_chi03_sR::synapse0x3781d40() {
   return (neuron0x377f1e0()*0.00780065);
}

double NNfunction_ns_chi03_sR::synapse0x3781d80() {
   return (neuron0x377f520()*0.0438611);
}

double NNfunction_ns_chi03_sR::synapse0x3781dc0() {
   return (neuron0x377f860()*-0.0265564);
}

double NNfunction_ns_chi03_sR::synapse0x377c5d0() {
   return (neuron0x377fba0()*-0.0201963);
}

double NNfunction_ns_chi03_sR::synapse0x377c610() {
   return (neuron0x3780100()*0.0113984);
}

double NNfunction_ns_chi03_sR::synapse0x3537940() {
   return (neuron0x3780320()*-0.0347784);
}

double NNfunction_ns_chi03_sR::synapse0x3537980() {
   return (neuron0x3780660()*0.0240634);
}

double NNfunction_ns_chi03_sR::synapse0x3782020() {
   return (neuron0x37809a0()*0.057992);
}

double NNfunction_ns_chi03_sR::synapse0x3782060() {
   return (neuron0x3780ce0()*0.0318968);
}

double NNfunction_ns_chi03_sR::synapse0x37820a0() {
   return (neuron0x3781020()*0.00465369);
}

double NNfunction_ns_chi03_sR::synapse0x37820e0() {
   return (neuron0x3781360()*-2.87514);
}

double NNfunction_ns_chi03_sR::synapse0x3782460() {
   return (neuron0x377c7a0()*0.210944);
}

double NNfunction_ns_chi03_sR::synapse0x37824a0() {
   return (neuron0x377cae0()*14.4484);
}

double NNfunction_ns_chi03_sR::synapse0x37824e0() {
   return (neuron0x377ce20()*0.444041);
}

double NNfunction_ns_chi03_sR::synapse0x3782520() {
   return (neuron0x377d160()*-0.0790034);
}

double NNfunction_ns_chi03_sR::synapse0x3782560() {
   return (neuron0x377d4a0()*-0.0295565);
}

double NNfunction_ns_chi03_sR::synapse0x37825a0() {
   return (neuron0x377d7e0()*0.0552882);
}

double NNfunction_ns_chi03_sR::synapse0x37825e0() {
   return (neuron0x377db20()*-0.0330102);
}

double NNfunction_ns_chi03_sR::synapse0x3782620() {
   return (neuron0x377de60()*-0.0277848);
}

double NNfunction_ns_chi03_sR::synapse0x3782660() {
   return (neuron0x377e1a0()*0.0594242);
}

double NNfunction_ns_chi03_sR::synapse0x3781f10() {
   return (neuron0x377e4e0()*-0.00792299);
}

double NNfunction_ns_chi03_sR::synapse0x3781f50() {
   return (neuron0x377e820()*-0.00642494);
}

double NNfunction_ns_chi03_sR::synapse0x3781f90() {
   return (neuron0x377eb60()*-0.02977);
}

double NNfunction_ns_chi03_sR::synapse0x3781fd0() {
   return (neuron0x377eea0()*-0.0145804);
}

double NNfunction_ns_chi03_sR::synapse0x37828b0() {
   return (neuron0x377f1e0()*-0.0244381);
}

double NNfunction_ns_chi03_sR::synapse0x37828f0() {
   return (neuron0x377f520()*0.0152624);
}

double NNfunction_ns_chi03_sR::synapse0x3782930() {
   return (neuron0x377f860()*0.0013645);
}

double NNfunction_ns_chi03_sR::synapse0x37822b0() {
   return (neuron0x377fba0()*-0.0776596);
}

double NNfunction_ns_chi03_sR::synapse0x37822f0() {
   return (neuron0x3780100()*-0.000112467);
}

double NNfunction_ns_chi03_sR::synapse0x3782a80() {
   return (neuron0x3780320()*0.107045);
}

double NNfunction_ns_chi03_sR::synapse0x3782ac0() {
   return (neuron0x3780660()*0.0138783);
}

double NNfunction_ns_chi03_sR::synapse0x3782b00() {
   return (neuron0x37809a0()*0.00647529);
}

double NNfunction_ns_chi03_sR::synapse0x3782b40() {
   return (neuron0x3780ce0()*-0.0341578);
}

double NNfunction_ns_chi03_sR::synapse0x3782b80() {
   return (neuron0x3781020()*-0.0198217);
}

double NNfunction_ns_chi03_sR::synapse0x3782bc0() {
   return (neuron0x3781360()*4.48784);
}

double NNfunction_ns_chi03_sR::synapse0x3782f40() {
   return (neuron0x377c7a0()*0.148015);
}

double NNfunction_ns_chi03_sR::synapse0x3782f80() {
   return (neuron0x377cae0()*5.76067);
}

double NNfunction_ns_chi03_sR::synapse0x3782fc0() {
   return (neuron0x377ce20()*2.40793);
}

double NNfunction_ns_chi03_sR::synapse0x3783000() {
   return (neuron0x377d160()*0.115745);
}

double NNfunction_ns_chi03_sR::synapse0x3783040() {
   return (neuron0x377d4a0()*-0.00559443);
}

double NNfunction_ns_chi03_sR::synapse0x3783080() {
   return (neuron0x377d7e0()*-0.0301572);
}

double NNfunction_ns_chi03_sR::synapse0x37830c0() {
   return (neuron0x377db20()*0.00436763);
}

double NNfunction_ns_chi03_sR::synapse0x3783100() {
   return (neuron0x377de60()*-0.0126623);
}

double NNfunction_ns_chi03_sR::synapse0x3783140() {
   return (neuron0x377e1a0()*0.0215236);
}

double NNfunction_ns_chi03_sR::synapse0x3783180() {
   return (neuron0x377e4e0()*0.120338);
}

double NNfunction_ns_chi03_sR::synapse0x37831c0() {
   return (neuron0x377e820()*-0.149302);
}

double NNfunction_ns_chi03_sR::synapse0x3783200() {
   return (neuron0x377eb60()*0.0174719);
}

double NNfunction_ns_chi03_sR::synapse0x3783240() {
   return (neuron0x377eea0()*0.0180568);
}

double NNfunction_ns_chi03_sR::synapse0x3783280() {
   return (neuron0x377f1e0()*-0.049572);
}

double NNfunction_ns_chi03_sR::synapse0x37832c0() {
   return (neuron0x377f520()*0.153225);
}

double NNfunction_ns_chi03_sR::synapse0x3783300() {
   return (neuron0x377f860()*0.0557942);
}

double NNfunction_ns_chi03_sR::synapse0x3782d90() {
   return (neuron0x377fba0()*0.00316084);
}

double NNfunction_ns_chi03_sR::synapse0x3782dd0() {
   return (neuron0x3780100()*0.0240236);
}

double NNfunction_ns_chi03_sR::synapse0x3538030() {
   return (neuron0x3780320()*-0.0843454);
}

double NNfunction_ns_chi03_sR::synapse0x3545900() {
   return (neuron0x3780660()*0.0226764);
}

double NNfunction_ns_chi03_sR::synapse0x3545940() {
   return (neuron0x37809a0()*-0.00166426);
}

double NNfunction_ns_chi03_sR::synapse0x376b830() {
   return (neuron0x3780ce0()*0.0230486);
}

double NNfunction_ns_chi03_sR::synapse0x376b870() {
   return (neuron0x3781020()*0.0837883);
}

double NNfunction_ns_chi03_sR::synapse0x376b8b0() {
   return (neuron0x3781360()*0.835667);
}

double NNfunction_ns_chi03_sR::synapse0x3546180() {
   return (neuron0x377c7a0()*-0.446038);
}

double NNfunction_ns_chi03_sR::synapse0x3782830() {
   return (neuron0x377cae0()*0.800941);
}

double NNfunction_ns_chi03_sR::synapse0x3782870() {
   return (neuron0x377ce20()*-1.93071);
}

double NNfunction_ns_chi03_sR::synapse0x3783450() {
   return (neuron0x377d160()*0.0286891);
}

double NNfunction_ns_chi03_sR::synapse0x3783490() {
   return (neuron0x377d4a0()*0.0382185);
}

double NNfunction_ns_chi03_sR::synapse0x37834d0() {
   return (neuron0x377d7e0()*0.143039);
}

double NNfunction_ns_chi03_sR::synapse0x3783510() {
   return (neuron0x377db20()*0.113323);
}

double NNfunction_ns_chi03_sR::synapse0x3783550() {
   return (neuron0x377de60()*0.169893);
}

double NNfunction_ns_chi03_sR::synapse0x3783590() {
   return (neuron0x377e1a0()*0.240226);
}

double NNfunction_ns_chi03_sR::synapse0x37835d0() {
   return (neuron0x377e4e0()*-0.201727);
}

double NNfunction_ns_chi03_sR::synapse0x3783610() {
   return (neuron0x377e820()*-0.15735);
}

double NNfunction_ns_chi03_sR::synapse0x3783650() {
   return (neuron0x377eb60()*0.0685654);
}

double NNfunction_ns_chi03_sR::synapse0x3783690() {
   return (neuron0x377eea0()*-0.0237134);
}

double NNfunction_ns_chi03_sR::synapse0x37836d0() {
   return (neuron0x377f1e0()*0.523529);
}

double NNfunction_ns_chi03_sR::synapse0x3783710() {
   return (neuron0x377f520()*0.0126841);
}

double NNfunction_ns_chi03_sR::synapse0x3783750() {
   return (neuron0x377f860()*0.0985147);
}

double NNfunction_ns_chi03_sR::synapse0x377c6e0() {
   return (neuron0x377fba0()*0.215159);
}

double NNfunction_ns_chi03_sR::synapse0x377c720() {
   return (neuron0x3780100()*0.0586648);
}

double NNfunction_ns_chi03_sR::synapse0x377c760() {
   return (neuron0x3780320()*-0.197449);
}

double NNfunction_ns_chi03_sR::synapse0x37838a0() {
   return (neuron0x3780660()*0.153295);
}

double NNfunction_ns_chi03_sR::synapse0x37838e0() {
   return (neuron0x37809a0()*-0.0830611);
}

double NNfunction_ns_chi03_sR::synapse0x3783920() {
   return (neuron0x3780ce0()*-0.260459);
}

double NNfunction_ns_chi03_sR::synapse0x3783960() {
   return (neuron0x3781020()*-0.231193);
}

double NNfunction_ns_chi03_sR::synapse0x37839a0() {
   return (neuron0x3781360()*-3.78719);
}

double NNfunction_ns_chi03_sR::synapse0x3783d20() {
   return (neuron0x377c7a0()*0.051071);
}

double NNfunction_ns_chi03_sR::synapse0x3783d60() {
   return (neuron0x377cae0()*0.445697);
}

double NNfunction_ns_chi03_sR::synapse0x3783da0() {
   return (neuron0x377ce20()*-0.452747);
}

double NNfunction_ns_chi03_sR::synapse0x3783de0() {
   return (neuron0x377d160()*1.17956);
}

double NNfunction_ns_chi03_sR::synapse0x3783e20() {
   return (neuron0x377d4a0()*0.868519);
}

double NNfunction_ns_chi03_sR::synapse0x3783e60() {
   return (neuron0x377d7e0()*-1.10919);
}

double NNfunction_ns_chi03_sR::synapse0x3783ea0() {
   return (neuron0x377db20()*-0.317218);
}

double NNfunction_ns_chi03_sR::synapse0x3783ee0() {
   return (neuron0x377de60()*-1.5274);
}

double NNfunction_ns_chi03_sR::synapse0x3783f20() {
   return (neuron0x377e1a0()*0.458967);
}

double NNfunction_ns_chi03_sR::synapse0x3783f60() {
   return (neuron0x377e4e0()*1.19181);
}

double NNfunction_ns_chi03_sR::synapse0x3783fa0() {
   return (neuron0x377e820()*0.878863);
}

double NNfunction_ns_chi03_sR::synapse0x3783fe0() {
   return (neuron0x377eb60()*2.00682);
}

double NNfunction_ns_chi03_sR::synapse0x3784020() {
   return (neuron0x377eea0()*-0.43422);
}

double NNfunction_ns_chi03_sR::synapse0x3784060() {
   return (neuron0x377f1e0()*0.880157);
}

double NNfunction_ns_chi03_sR::synapse0x37840a0() {
   return (neuron0x377f520()*-0.527903);
}

double NNfunction_ns_chi03_sR::synapse0x37840e0() {
   return (neuron0x377f860()*-1.05189);
}

double NNfunction_ns_chi03_sR::synapse0x3783b70() {
   return (neuron0x377fba0()*0.178494);
}

double NNfunction_ns_chi03_sR::synapse0x3783bb0() {
   return (neuron0x3780100()*-0.0595319);
}

double NNfunction_ns_chi03_sR::synapse0x3784230() {
   return (neuron0x3780320()*0.397875);
}

double NNfunction_ns_chi03_sR::synapse0x3784270() {
   return (neuron0x3780660()*0.0286046);
}

double NNfunction_ns_chi03_sR::synapse0x37842b0() {
   return (neuron0x37809a0()*-0.600545);
}

double NNfunction_ns_chi03_sR::synapse0x37842f0() {
   return (neuron0x3780ce0()*1.09003);
}

double NNfunction_ns_chi03_sR::synapse0x3784330() {
   return (neuron0x3781020()*-0.661733);
}

double NNfunction_ns_chi03_sR::synapse0x3784370() {
   return (neuron0x3781360()*0.68981);
}

double NNfunction_ns_chi03_sR::synapse0x37846f0() {
   return (neuron0x377c7a0()*0.43879);
}

double NNfunction_ns_chi03_sR::synapse0x3784730() {
   return (neuron0x377cae0()*0.240499);
}

double NNfunction_ns_chi03_sR::synapse0x3784770() {
   return (neuron0x377ce20()*0.810933);
}

double NNfunction_ns_chi03_sR::synapse0x37847b0() {
   return (neuron0x377d160()*0.72961);
}

double NNfunction_ns_chi03_sR::synapse0x37847f0() {
   return (neuron0x377d4a0()*0.0624747);
}

double NNfunction_ns_chi03_sR::synapse0x3784830() {
   return (neuron0x377d7e0()*-0.236194);
}

double NNfunction_ns_chi03_sR::synapse0x3784870() {
   return (neuron0x377db20()*-0.217749);
}

double NNfunction_ns_chi03_sR::synapse0x37848b0() {
   return (neuron0x377de60()*0.368103);
}

double NNfunction_ns_chi03_sR::synapse0x37848f0() {
   return (neuron0x377e1a0()*-0.33033);
}

double NNfunction_ns_chi03_sR::synapse0x3545c50() {
   return (neuron0x377e4e0()*-0.663401);
}

double NNfunction_ns_chi03_sR::synapse0x3545c90() {
   return (neuron0x377e820()*0.554677);
}

double NNfunction_ns_chi03_sR::synapse0x3545cd0() {
   return (neuron0x377eb60()*0.630459);
}

double NNfunction_ns_chi03_sR::synapse0x3545d10() {
   return (neuron0x377eea0()*-0.107132);
}

double NNfunction_ns_chi03_sR::synapse0x3545d50() {
   return (neuron0x377f1e0()*-0.201015);
}

double NNfunction_ns_chi03_sR::synapse0x3545d90() {
   return (neuron0x377f520()*0.569772);
}

double NNfunction_ns_chi03_sR::synapse0x3545dd0() {
   return (neuron0x377f860()*-0.676142);
}

double NNfunction_ns_chi03_sR::synapse0x3784540() {
   return (neuron0x377fba0()*-0.429153);
}

double NNfunction_ns_chi03_sR::synapse0x3784580() {
   return (neuron0x3780100()*0.914181);
}

double NNfunction_ns_chi03_sR::synapse0x3545f20() {
   return (neuron0x3780320()*-0.196396);
}

double NNfunction_ns_chi03_sR::synapse0x3545f60() {
   return (neuron0x3780660()*0.384141);
}

double NNfunction_ns_chi03_sR::synapse0x3545fa0() {
   return (neuron0x37809a0()*0.0430627);
}

double NNfunction_ns_chi03_sR::synapse0x3545fe0() {
   return (neuron0x3780ce0()*-0.48461);
}

double NNfunction_ns_chi03_sR::synapse0x3546020() {
   return (neuron0x3781020()*-0.776364);
}

double NNfunction_ns_chi03_sR::synapse0x3785140() {
   return (neuron0x3781360()*-0.0588699);
}

double NNfunction_ns_chi03_sR::synapse0x37854c0() {
   return (neuron0x377c7a0()*-0.0574044);
}

double NNfunction_ns_chi03_sR::synapse0x3785500() {
   return (neuron0x377cae0()*0.336997);
}

double NNfunction_ns_chi03_sR::synapse0x3785540() {
   return (neuron0x377ce20()*-0.153555);
}

double NNfunction_ns_chi03_sR::synapse0x3785580() {
   return (neuron0x377d160()*0.0513109);
}

double NNfunction_ns_chi03_sR::synapse0x37855c0() {
   return (neuron0x377d4a0()*0.0198336);
}

double NNfunction_ns_chi03_sR::synapse0x3785600() {
   return (neuron0x377d7e0()*0.0291365);
}

double NNfunction_ns_chi03_sR::synapse0x3785640() {
   return (neuron0x377db20()*0.00710081);
}

double NNfunction_ns_chi03_sR::synapse0x3785680() {
   return (neuron0x377de60()*0.0279358);
}

double NNfunction_ns_chi03_sR::synapse0x37856c0() {
   return (neuron0x377e1a0()*-0.00766365);
}

double NNfunction_ns_chi03_sR::synapse0x3785700() {
   return (neuron0x377e4e0()*-0.0188041);
}

double NNfunction_ns_chi03_sR::synapse0x3785740() {
   return (neuron0x377e820()*-0.027386);
}

double NNfunction_ns_chi03_sR::synapse0x3785780() {
   return (neuron0x377eb60()*-0.0139778);
}

double NNfunction_ns_chi03_sR::synapse0x37857c0() {
   return (neuron0x377eea0()*0.0251419);
}

double NNfunction_ns_chi03_sR::synapse0x3785800() {
   return (neuron0x377f1e0()*-0.0347273);
}

double NNfunction_ns_chi03_sR::synapse0x3785840() {
   return (neuron0x377f520()*0.087409);
}

double NNfunction_ns_chi03_sR::synapse0x3785880() {
   return (neuron0x377f860()*0.0997081);
}

double NNfunction_ns_chi03_sR::synapse0x3785310() {
   return (neuron0x377fba0()*-0.0289957);
}

double NNfunction_ns_chi03_sR::synapse0x3785350() {
   return (neuron0x3780100()*-0.0478838);
}

double NNfunction_ns_chi03_sR::synapse0x37859d0() {
   return (neuron0x3780320()*-0.656132);
}

double NNfunction_ns_chi03_sR::synapse0x3785a10() {
   return (neuron0x3780660()*-0.0363972);
}

double NNfunction_ns_chi03_sR::synapse0x3785a50() {
   return (neuron0x37809a0()*-0.0114036);
}

double NNfunction_ns_chi03_sR::synapse0x3785a90() {
   return (neuron0x3780ce0()*0.0184594);
}

double NNfunction_ns_chi03_sR::synapse0x3785ad0() {
   return (neuron0x3781020()*0.0222121);
}

double NNfunction_ns_chi03_sR::synapse0x3785b10() {
   return (neuron0x3781360()*0.581398);
}

double NNfunction_ns_chi03_sR::synapse0x3785e90() {
   return (neuron0x377c7a0()*-0.00640026);
}

double NNfunction_ns_chi03_sR::synapse0x3785ed0() {
   return (neuron0x377cae0()*0.011284);
}

double NNfunction_ns_chi03_sR::synapse0x3785f10() {
   return (neuron0x377ce20()*0.020816);
}

double NNfunction_ns_chi03_sR::synapse0x3785f50() {
   return (neuron0x377d160()*2.04247);
}

double NNfunction_ns_chi03_sR::synapse0x3785f90() {
   return (neuron0x377d4a0()*-0.0117938);
}

double NNfunction_ns_chi03_sR::synapse0x3785fd0() {
   return (neuron0x377d7e0()*0.00795208);
}

double NNfunction_ns_chi03_sR::synapse0x3786010() {
   return (neuron0x377db20()*0.00576674);
}

double NNfunction_ns_chi03_sR::synapse0x3786050() {
   return (neuron0x377de60()*-0.00476767);
}

double NNfunction_ns_chi03_sR::synapse0x3786090() {
   return (neuron0x377e1a0()*0.0088707);
}

double NNfunction_ns_chi03_sR::synapse0x37860d0() {
   return (neuron0x377e4e0()*0.00585563);
}

double NNfunction_ns_chi03_sR::synapse0x3786110() {
   return (neuron0x377e820()*-0.0133999);
}

double NNfunction_ns_chi03_sR::synapse0x3786150() {
   return (neuron0x377eb60()*-0.0180468);
}

double NNfunction_ns_chi03_sR::synapse0x3786190() {
   return (neuron0x377eea0()*-0.0232448);
}

double NNfunction_ns_chi03_sR::synapse0x37861d0() {
   return (neuron0x377f1e0()*0.015174);
}

double NNfunction_ns_chi03_sR::synapse0x3786210() {
   return (neuron0x377f520()*0.0043493);
}

double NNfunction_ns_chi03_sR::synapse0x3786250() {
   return (neuron0x377f860()*-0.0251031);
}

double NNfunction_ns_chi03_sR::synapse0x3785ce0() {
   return (neuron0x377fba0()*0.0203028);
}

double NNfunction_ns_chi03_sR::synapse0x3785d20() {
   return (neuron0x3780100()*-0.00812747);
}

double NNfunction_ns_chi03_sR::synapse0x37863a0() {
   return (neuron0x3780320()*-0.0215346);
}

double NNfunction_ns_chi03_sR::synapse0x37863e0() {
   return (neuron0x3780660()*0.0113045);
}

double NNfunction_ns_chi03_sR::synapse0x3786420() {
   return (neuron0x37809a0()*-0.0184419);
}

double NNfunction_ns_chi03_sR::synapse0x3786460() {
   return (neuron0x3780ce0()*-0.0064326);
}

double NNfunction_ns_chi03_sR::synapse0x37864a0() {
   return (neuron0x3781020()*-0.0116226);
}

double NNfunction_ns_chi03_sR::synapse0x37864e0() {
   return (neuron0x3781360()*-0.0194545);
}

double NNfunction_ns_chi03_sR::synapse0x377fff0() {
   return (neuron0x377c7a0()*0.00319824);
}

double NNfunction_ns_chi03_sR::synapse0x3780030() {
   return (neuron0x377cae0()*-0.0123927);
}

double NNfunction_ns_chi03_sR::synapse0x3780070() {
   return (neuron0x377ce20()*0.00875586);
}

double NNfunction_ns_chi03_sR::synapse0x37800b0() {
   return (neuron0x377d160()*-0.593637);
}

double NNfunction_ns_chi03_sR::synapse0x3786a70() {
   return (neuron0x377d4a0()*0.00130065);
}

double NNfunction_ns_chi03_sR::synapse0x3786ab0() {
   return (neuron0x377d7e0()*0.00456732);
}

double NNfunction_ns_chi03_sR::synapse0x3786af0() {
   return (neuron0x377db20()*0.00833746);
}

double NNfunction_ns_chi03_sR::synapse0x3786b30() {
   return (neuron0x377de60()*0.000576718);
}

double NNfunction_ns_chi03_sR::synapse0x3786b70() {
   return (neuron0x377e1a0()*-0.00622456);
}

double NNfunction_ns_chi03_sR::synapse0x3786bb0() {
   return (neuron0x377e4e0()*0.00561786);
}

double NNfunction_ns_chi03_sR::synapse0x3786bf0() {
   return (neuron0x377e820()*0.00571835);
}

double NNfunction_ns_chi03_sR::synapse0x3786c30() {
   return (neuron0x377eb60()*0.013545);
}

double NNfunction_ns_chi03_sR::synapse0x3786c70() {
   return (neuron0x377eea0()*0.00727776);
}

double NNfunction_ns_chi03_sR::synapse0x3786cb0() {
   return (neuron0x377f1e0()*-0.00662424);
}

double NNfunction_ns_chi03_sR::synapse0x3786cf0() {
   return (neuron0x377f520()*-0.00415398);
}

double NNfunction_ns_chi03_sR::synapse0x3786d30() {
   return (neuron0x377f860()*-0.00447237);
}

double NNfunction_ns_chi03_sR::synapse0x37866b0() {
   return (neuron0x377fba0()*0.00161185);
}

double NNfunction_ns_chi03_sR::synapse0x37866f0() {
   return (neuron0x3780100()*0.0150045);
}

double NNfunction_ns_chi03_sR::synapse0x3786e80() {
   return (neuron0x3780320()*0.284651);
}

double NNfunction_ns_chi03_sR::synapse0x3786ec0() {
   return (neuron0x3780660()*-0.00165325);
}

double NNfunction_ns_chi03_sR::synapse0x3786f00() {
   return (neuron0x37809a0()*0.00803192);
}

double NNfunction_ns_chi03_sR::synapse0x3786f40() {
   return (neuron0x3780ce0()*0.00314323);
}

double NNfunction_ns_chi03_sR::synapse0x3786f80() {
   return (neuron0x3781020()*-0.000573086);
}

double NNfunction_ns_chi03_sR::synapse0x3786fc0() {
   return (neuron0x3781360()*0.0460657);
}

double NNfunction_ns_chi03_sR::synapse0x3787340() {
   return (neuron0x377c7a0()*-0.00409722);
}

double NNfunction_ns_chi03_sR::synapse0x3787380() {
   return (neuron0x377cae0()*-0.0154629);
}

double NNfunction_ns_chi03_sR::synapse0x37873c0() {
   return (neuron0x377ce20()*-0.0209857);
}

double NNfunction_ns_chi03_sR::synapse0x3787400() {
   return (neuron0x377d160()*-0.84042);
}

double NNfunction_ns_chi03_sR::synapse0x3787440() {
   return (neuron0x377d4a0()*0.0115299);
}

double NNfunction_ns_chi03_sR::synapse0x3787480() {
   return (neuron0x377d7e0()*-0.00537721);
}

double NNfunction_ns_chi03_sR::synapse0x37874c0() {
   return (neuron0x377db20()*-0.00855061);
}

double NNfunction_ns_chi03_sR::synapse0x3787500() {
   return (neuron0x377de60()*0.00286281);
}

double NNfunction_ns_chi03_sR::synapse0x3787540() {
   return (neuron0x377e1a0()*0.00220902);
}

double NNfunction_ns_chi03_sR::synapse0x3787580() {
   return (neuron0x377e4e0()*-0.00945149);
}

double NNfunction_ns_chi03_sR::synapse0x37875c0() {
   return (neuron0x377e820()*0.00623901);
}

double NNfunction_ns_chi03_sR::synapse0x3787600() {
   return (neuron0x377eb60()*0.000351921);
}

double NNfunction_ns_chi03_sR::synapse0x3787640() {
   return (neuron0x377eea0()*0.00127856);
}

double NNfunction_ns_chi03_sR::synapse0x3787680() {
   return (neuron0x377f1e0()*-0.0100814);
}

double NNfunction_ns_chi03_sR::synapse0x37876c0() {
   return (neuron0x377f520()*0.00386741);
}

double NNfunction_ns_chi03_sR::synapse0x3787700() {
   return (neuron0x377f860()*0.0289389);
}

double NNfunction_ns_chi03_sR::synapse0x3787190() {
   return (neuron0x377fba0()*-0.0222932);
}

double NNfunction_ns_chi03_sR::synapse0x37871d0() {
   return (neuron0x3780100()*-0.0112378);
}

double NNfunction_ns_chi03_sR::synapse0x3787850() {
   return (neuron0x3780320()*-0.253403);
}

double NNfunction_ns_chi03_sR::synapse0x3787890() {
   return (neuron0x3780660()*-0.00566866);
}

double NNfunction_ns_chi03_sR::synapse0x37878d0() {
   return (neuron0x37809a0()*-0.00351259);
}

double NNfunction_ns_chi03_sR::synapse0x3787910() {
   return (neuron0x3780ce0()*0.00722409);
}

double NNfunction_ns_chi03_sR::synapse0x3787950() {
   return (neuron0x3781020()*0.0077619);
}

double NNfunction_ns_chi03_sR::synapse0x3787990() {
   return (neuron0x3781360()*-0.00551485);
}

double NNfunction_ns_chi03_sR::synapse0x3787d10() {
   return (neuron0x377c7a0()*-0.472547);
}

double NNfunction_ns_chi03_sR::synapse0x3787d50() {
   return (neuron0x377cae0()*0.338824);
}

double NNfunction_ns_chi03_sR::synapse0x3787d90() {
   return (neuron0x377ce20()*0.895279);
}

double NNfunction_ns_chi03_sR::synapse0x3787dd0() {
   return (neuron0x377d160()*-0.367164);
}

double NNfunction_ns_chi03_sR::synapse0x3787e10() {
   return (neuron0x377d4a0()*-0.00544256);
}

double NNfunction_ns_chi03_sR::synapse0x3787e50() {
   return (neuron0x377d7e0()*-0.977199);
}

double NNfunction_ns_chi03_sR::synapse0x3787e90() {
   return (neuron0x377db20()*0.470028);
}

double NNfunction_ns_chi03_sR::synapse0x3787ed0() {
   return (neuron0x377de60()*-0.0300869);
}

double NNfunction_ns_chi03_sR::synapse0x3787f10() {
   return (neuron0x377e1a0()*0.530157);
}

double NNfunction_ns_chi03_sR::synapse0x3787f50() {
   return (neuron0x377e4e0()*0.352466);
}

double NNfunction_ns_chi03_sR::synapse0x3787f90() {
   return (neuron0x377e820()*-0.435606);
}

double NNfunction_ns_chi03_sR::synapse0x3787fd0() {
   return (neuron0x377eb60()*0.238116);
}

double NNfunction_ns_chi03_sR::synapse0x3788010() {
   return (neuron0x377eea0()*0.515117);
}

double NNfunction_ns_chi03_sR::synapse0x3788050() {
   return (neuron0x377f1e0()*0.159774);
}

double NNfunction_ns_chi03_sR::synapse0x3788090() {
   return (neuron0x377f520()*-0.328504);
}

double NNfunction_ns_chi03_sR::synapse0x37880d0() {
   return (neuron0x377f860()*-0.0404619);
}

double NNfunction_ns_chi03_sR::synapse0x3787b60() {
   return (neuron0x377fba0()*-0.184222);
}

double NNfunction_ns_chi03_sR::synapse0x3787ba0() {
   return (neuron0x3780100()*0.775485);
}

double NNfunction_ns_chi03_sR::synapse0x3784930() {
   return (neuron0x3780320()*-0.149921);
}

double NNfunction_ns_chi03_sR::synapse0x3784970() {
   return (neuron0x3780660()*0.271935);
}

double NNfunction_ns_chi03_sR::synapse0x37849b0() {
   return (neuron0x37809a0()*0.135192);
}

double NNfunction_ns_chi03_sR::synapse0x37849f0() {
   return (neuron0x3780ce0()*-1.05126);
}

double NNfunction_ns_chi03_sR::synapse0x3784a30() {
   return (neuron0x3781020()*0.279289);
}

double NNfunction_ns_chi03_sR::synapse0x3784a70() {
   return (neuron0x3781360()*-0.740566);
}

double NNfunction_ns_chi03_sR::synapse0x3784df0() {
   return (neuron0x377c7a0()*-0.00926129);
}

double NNfunction_ns_chi03_sR::synapse0x3784e30() {
   return (neuron0x377cae0()*0.012296);
}

double NNfunction_ns_chi03_sR::synapse0x3784e70() {
   return (neuron0x377ce20()*0.0157912);
}

double NNfunction_ns_chi03_sR::synapse0x3784eb0() {
   return (neuron0x377d160()*1.89076);
}

double NNfunction_ns_chi03_sR::synapse0x3784ef0() {
   return (neuron0x377d4a0()*-0.00145898);
}

double NNfunction_ns_chi03_sR::synapse0x3784f30() {
   return (neuron0x377d7e0()*0.00480434);
}

double NNfunction_ns_chi03_sR::synapse0x3784f70() {
   return (neuron0x377db20()*0.00672714);
}

double NNfunction_ns_chi03_sR::synapse0x3784fb0() {
   return (neuron0x377de60()*-0.00234483);
}

double NNfunction_ns_chi03_sR::synapse0x3784ff0() {
   return (neuron0x377e1a0()*0.0118776);
}

double NNfunction_ns_chi03_sR::synapse0x3785030() {
   return (neuron0x377e4e0()*-0.000915708);
}

double NNfunction_ns_chi03_sR::synapse0x3785070() {
   return (neuron0x377e820()*-0.0184088);
}

double NNfunction_ns_chi03_sR::synapse0x37850b0() {
   return (neuron0x377eb60()*-0.0196464);
}

double NNfunction_ns_chi03_sR::synapse0x37850f0() {
   return (neuron0x377eea0()*-0.0207601);
}

double NNfunction_ns_chi03_sR::synapse0x3789230() {
   return (neuron0x377f1e0()*0.0131757);
}

double NNfunction_ns_chi03_sR::synapse0x3789270() {
   return (neuron0x377f520()*0.00505728);
}

double NNfunction_ns_chi03_sR::synapse0x37892b0() {
   return (neuron0x377f860()*-0.00871869);
}

double NNfunction_ns_chi03_sR::synapse0x3784c40() {
   return (neuron0x377fba0()*0.00203807);
}

double NNfunction_ns_chi03_sR::synapse0x3784c80() {
   return (neuron0x3780100()*-0.00942867);
}

double NNfunction_ns_chi03_sR::synapse0x3789400() {
   return (neuron0x3780320()*-0.235043);
}

double NNfunction_ns_chi03_sR::synapse0x3789440() {
   return (neuron0x3780660()*0.0122778);
}

double NNfunction_ns_chi03_sR::synapse0x3789480() {
   return (neuron0x37809a0()*-0.0242501);
}

double NNfunction_ns_chi03_sR::synapse0x37894c0() {
   return (neuron0x3780ce0()*-0.005915);
}

double NNfunction_ns_chi03_sR::synapse0x3789500() {
   return (neuron0x3781020()*-0.0143327);
}

double NNfunction_ns_chi03_sR::synapse0x3789540() {
   return (neuron0x3781360()*-0.0325811);
}

double NNfunction_ns_chi03_sR::synapse0x37898c0() {
   return (neuron0x377c7a0()*-0.542838);
}

double NNfunction_ns_chi03_sR::synapse0x3789900() {
   return (neuron0x377cae0()*-0.255378);
}

double NNfunction_ns_chi03_sR::synapse0x3789940() {
   return (neuron0x377ce20()*-0.396389);
}

double NNfunction_ns_chi03_sR::synapse0x3789980() {
   return (neuron0x377d160()*1.41513);
}

double NNfunction_ns_chi03_sR::synapse0x37899c0() {
   return (neuron0x377d4a0()*0.0538222);
}

double NNfunction_ns_chi03_sR::synapse0x3789a00() {
   return (neuron0x377d7e0()*-0.621867);
}

double NNfunction_ns_chi03_sR::synapse0x3789a40() {
   return (neuron0x377db20()*-0.596499);
}

double NNfunction_ns_chi03_sR::synapse0x3789a80() {
   return (neuron0x377de60()*-0.901448);
}

double NNfunction_ns_chi03_sR::synapse0x3789ac0() {
   return (neuron0x377e1a0()*-0.0682464);
}

double NNfunction_ns_chi03_sR::synapse0x3789b00() {
   return (neuron0x377e4e0()*0.479717);
}

double NNfunction_ns_chi03_sR::synapse0x3789b40() {
   return (neuron0x377e820()*0.897057);
}

double NNfunction_ns_chi03_sR::synapse0x3789b80() {
   return (neuron0x377eb60()*1.07831);
}

double NNfunction_ns_chi03_sR::synapse0x3789bc0() {
   return (neuron0x377eea0()*-0.802722);
}

double NNfunction_ns_chi03_sR::synapse0x3789c00() {
   return (neuron0x377f1e0()*0.682409);
}

double NNfunction_ns_chi03_sR::synapse0x3789c40() {
   return (neuron0x377f520()*-0.565543);
}

double NNfunction_ns_chi03_sR::synapse0x3789c80() {
   return (neuron0x377f860()*-0.575984);
}

double NNfunction_ns_chi03_sR::synapse0x3789710() {
   return (neuron0x377fba0()*0.536671);
}

double NNfunction_ns_chi03_sR::synapse0x3789750() {
   return (neuron0x3780100()*0.0379871);
}

double NNfunction_ns_chi03_sR::synapse0x3789dd0() {
   return (neuron0x3780320()*0.217822);
}

double NNfunction_ns_chi03_sR::synapse0x3789e10() {
   return (neuron0x3780660()*0.20115);
}

double NNfunction_ns_chi03_sR::synapse0x3789e50() {
   return (neuron0x37809a0()*-0.142047);
}

double NNfunction_ns_chi03_sR::synapse0x3789e90() {
   return (neuron0x3780ce0()*0.635228);
}

double NNfunction_ns_chi03_sR::synapse0x3789ed0() {
   return (neuron0x3781020()*-0.786267);
}

double NNfunction_ns_chi03_sR::synapse0x3789f10() {
   return (neuron0x3781360()*0.442738);
}

double NNfunction_ns_chi03_sR::synapse0x378a290() {
   return (neuron0x377c7a0()*0.917839);
}

double NNfunction_ns_chi03_sR::synapse0x378a2d0() {
   return (neuron0x377cae0()*0.167979);
}

double NNfunction_ns_chi03_sR::synapse0x378a310() {
   return (neuron0x377ce20()*0.396172);
}

double NNfunction_ns_chi03_sR::synapse0x378a350() {
   return (neuron0x377d160()*0.923666);
}

double NNfunction_ns_chi03_sR::synapse0x378a390() {
   return (neuron0x377d4a0()*0.455013);
}

double NNfunction_ns_chi03_sR::synapse0x378a3d0() {
   return (neuron0x377d7e0()*-0.0345995);
}

double NNfunction_ns_chi03_sR::synapse0x378a410() {
   return (neuron0x377db20()*0.0184927);
}

double NNfunction_ns_chi03_sR::synapse0x378a450() {
   return (neuron0x377de60()*0.22846);
}

double NNfunction_ns_chi03_sR::synapse0x378a490() {
   return (neuron0x377e1a0()*-0.367614);
}

double NNfunction_ns_chi03_sR::synapse0x378a4d0() {
   return (neuron0x377e4e0()*-0.404761);
}

double NNfunction_ns_chi03_sR::synapse0x378a510() {
   return (neuron0x377e820()*0.827605);
}

double NNfunction_ns_chi03_sR::synapse0x378a550() {
   return (neuron0x377eb60()*-0.39037);
}

double NNfunction_ns_chi03_sR::synapse0x378a590() {
   return (neuron0x377eea0()*-0.948718);
}

double NNfunction_ns_chi03_sR::synapse0x378a5d0() {
   return (neuron0x377f1e0()*-0.782092);
}

double NNfunction_ns_chi03_sR::synapse0x378a610() {
   return (neuron0x377f520()*-0.140208);
}

double NNfunction_ns_chi03_sR::synapse0x378a650() {
   return (neuron0x377f860()*0.770799);
}

double NNfunction_ns_chi03_sR::synapse0x378a0e0() {
   return (neuron0x377fba0()*-0.220978);
}

double NNfunction_ns_chi03_sR::synapse0x378a120() {
   return (neuron0x3780100()*-0.880352);
}

double NNfunction_ns_chi03_sR::synapse0x378a7a0() {
   return (neuron0x3780320()*-0.544857);
}

double NNfunction_ns_chi03_sR::synapse0x378a7e0() {
   return (neuron0x3780660()*-0.459951);
}

double NNfunction_ns_chi03_sR::synapse0x378a820() {
   return (neuron0x37809a0()*-0.513966);
}

double NNfunction_ns_chi03_sR::synapse0x378a860() {
   return (neuron0x3780ce0()*0.709688);
}

double NNfunction_ns_chi03_sR::synapse0x378a8a0() {
   return (neuron0x3781020()*-0.331555);
}

double NNfunction_ns_chi03_sR::synapse0x378a8e0() {
   return (neuron0x3781360()*1.32049);
}

double NNfunction_ns_chi03_sR::synapse0x378ac60() {
   return (neuron0x377c7a0()*0.00688839);
}

double NNfunction_ns_chi03_sR::synapse0x378aca0() {
   return (neuron0x377cae0()*-0.467653);
}

double NNfunction_ns_chi03_sR::synapse0x378ace0() {
   return (neuron0x377ce20()*-7.54623);
}

double NNfunction_ns_chi03_sR::synapse0x378ad20() {
   return (neuron0x377d160()*0.0812822);
}

double NNfunction_ns_chi03_sR::synapse0x378ad60() {
   return (neuron0x377d4a0()*0.00833355);
}

double NNfunction_ns_chi03_sR::synapse0x378ada0() {
   return (neuron0x377d7e0()*-0.0264154);
}

double NNfunction_ns_chi03_sR::synapse0x378ade0() {
   return (neuron0x377db20()*0.0097374);
}

double NNfunction_ns_chi03_sR::synapse0x378ae20() {
   return (neuron0x377de60()*-0.014192);
}

double NNfunction_ns_chi03_sR::synapse0x378ae60() {
   return (neuron0x377e1a0()*0.0472738);
}

double NNfunction_ns_chi03_sR::synapse0x378aea0() {
   return (neuron0x377e4e0()*0.00456579);
}

double NNfunction_ns_chi03_sR::synapse0x378aee0() {
   return (neuron0x377e820()*-0.0246556);
}

double NNfunction_ns_chi03_sR::synapse0x378af20() {
   return (neuron0x377eb60()*0.0440678);
}

double NNfunction_ns_chi03_sR::synapse0x378af60() {
   return (neuron0x377eea0()*0.0192498);
}

double NNfunction_ns_chi03_sR::synapse0x378afa0() {
   return (neuron0x377f1e0()*0.0129638);
}

double NNfunction_ns_chi03_sR::synapse0x378afe0() {
   return (neuron0x377f520()*0.0290222);
}

double NNfunction_ns_chi03_sR::synapse0x378b020() {
   return (neuron0x377f860()*-0.0176263);
}

double NNfunction_ns_chi03_sR::synapse0x378aab0() {
   return (neuron0x377fba0()*-0.00378602);
}

double NNfunction_ns_chi03_sR::synapse0x378aaf0() {
   return (neuron0x3780100()*0.0163213);
}

double NNfunction_ns_chi03_sR::synapse0x378b170() {
   return (neuron0x3780320()*-0.373389);
}

double NNfunction_ns_chi03_sR::synapse0x378b1b0() {
   return (neuron0x3780660()*-0.0156714);
}

double NNfunction_ns_chi03_sR::synapse0x378b1f0() {
   return (neuron0x37809a0()*0.0225524);
}

double NNfunction_ns_chi03_sR::synapse0x378b230() {
   return (neuron0x3780ce0()*-0.0169212);
}

double NNfunction_ns_chi03_sR::synapse0x378b270() {
   return (neuron0x3781020()*0.0026109);
}

double NNfunction_ns_chi03_sR::synapse0x378b2b0() {
   return (neuron0x3781360()*-0.441848);
}

double NNfunction_ns_chi03_sR::synapse0x378b630() {
   return (neuron0x377c7a0()*-0.00289743);
}

double NNfunction_ns_chi03_sR::synapse0x377c9c0() {
   return (neuron0x377cae0()*0.546882);
}

double NNfunction_ns_chi03_sR::synapse0x377ca00() {
   return (neuron0x377ce20()*1.01879);
}

double NNfunction_ns_chi03_sR::synapse0x377cd00() {
   return (neuron0x377d160()*0.262569);
}

double NNfunction_ns_chi03_sR::synapse0x377cd40() {
   return (neuron0x377d4a0()*-0.177077);
}

double NNfunction_ns_chi03_sR::synapse0x377d040() {
   return (neuron0x377d7e0()*-0.133544);
}

double NNfunction_ns_chi03_sR::synapse0x377d080() {
   return (neuron0x377db20()*-0.405216);
}

double NNfunction_ns_chi03_sR::synapse0x377d380() {
   return (neuron0x377de60()*-0.349839);
}

double NNfunction_ns_chi03_sR::synapse0x377d3c0() {
   return (neuron0x377e1a0()*0.871379);
}

double NNfunction_ns_chi03_sR::synapse0x377d6c0() {
   return (neuron0x377e4e0()*0.524878);
}

double NNfunction_ns_chi03_sR::synapse0x377d700() {
   return (neuron0x377e820()*-0.929517);
}

double NNfunction_ns_chi03_sR::synapse0x377da00() {
   return (neuron0x377eb60()*0.201793);
}

double NNfunction_ns_chi03_sR::synapse0x377da40() {
   return (neuron0x377eea0()*0.207026);
}

double NNfunction_ns_chi03_sR::synapse0x377dd40() {
   return (neuron0x377f1e0()*-0.362318);
}

double NNfunction_ns_chi03_sR::synapse0x377dd80() {
   return (neuron0x377f520()*-0.194386);
}

double NNfunction_ns_chi03_sR::synapse0x377e080() {
   return (neuron0x377f860()*0.241792);
}

double NNfunction_ns_chi03_sR::synapse0x377e0c0() {
   return (neuron0x377fba0()*-0.339885);
}

double NNfunction_ns_chi03_sR::synapse0x377e3c0() {
   return (neuron0x3780100()*-0.051703);
}

double NNfunction_ns_chi03_sR::synapse0x377e400() {
   return (neuron0x3780320()*-1.29904);
}

double NNfunction_ns_chi03_sR::synapse0x377e700() {
   return (neuron0x3780660()*-0.0659528);
}

double NNfunction_ns_chi03_sR::synapse0x377e740() {
   return (neuron0x37809a0()*-0.122843);
}

double NNfunction_ns_chi03_sR::synapse0x377ea40() {
   return (neuron0x3780ce0()*-0.0701779);
}

double NNfunction_ns_chi03_sR::synapse0x377ea80() {
   return (neuron0x3781020()*0.0976689);
}

double NNfunction_ns_chi03_sR::synapse0x377ed80() {
   return (neuron0x3781360()*0.386298);
}

double NNfunction_ns_chi03_sR::synapse0x377edc0() {
   return (neuron0x377c7a0()*0.0663251);
}

double NNfunction_ns_chi03_sR::synapse0x377fa80() {
   return (neuron0x377cae0()*3.94857);
}

double NNfunction_ns_chi03_sR::synapse0x377fac0() {
   return (neuron0x377ce20()*-8.0602);
}

double NNfunction_ns_chi03_sR::synapse0x378b480() {
   return (neuron0x377d160()*-0.0306692);
}

double NNfunction_ns_chi03_sR::synapse0x378b4c0() {
   return (neuron0x377d4a0()*0.0184645);
}

double NNfunction_ns_chi03_sR::synapse0x377fdc0() {
   return (neuron0x377d7e0()*0.0200133);
}

double NNfunction_ns_chi03_sR::synapse0x377fe00() {
   return (neuron0x377db20()*-0.0765198);
}

double NNfunction_ns_chi03_sR::synapse0x3537820() {
   return (neuron0x377de60()*-0.0123526);
}

double NNfunction_ns_chi03_sR::synapse0x3537860() {
   return (neuron0x377e1a0()*-0.0046352);
}

double NNfunction_ns_chi03_sR::synapse0x3780540() {
   return (neuron0x377e4e0()*-0.0127446);
}

double NNfunction_ns_chi03_sR::synapse0x3780580() {
   return (neuron0x377e820()*-0.0538294);
}

double NNfunction_ns_chi03_sR::synapse0x3780880() {
   return (neuron0x377eb60()*-0.0459272);
}

double NNfunction_ns_chi03_sR::synapse0x37808c0() {
   return (neuron0x377eea0()*-0.0292808);
}

double NNfunction_ns_chi03_sR::synapse0x3780bc0() {
   return (neuron0x377f1e0()*0.0453688);
}

double NNfunction_ns_chi03_sR::synapse0x3780c00() {
   return (neuron0x377f520()*-0.0101012);
}

double NNfunction_ns_chi03_sR::synapse0x3780f00() {
   return (neuron0x377f860()*0.0495043);
}

double NNfunction_ns_chi03_sR::synapse0x3780f40() {
   return (neuron0x377fba0()*0.0370131);
}

double NNfunction_ns_chi03_sR::synapse0x3781240() {
   return (neuron0x3780100()*-0.0370272);
}

double NNfunction_ns_chi03_sR::synapse0x3781280() {
   return (neuron0x3780320()*-0.313805);
}

double NNfunction_ns_chi03_sR::synapse0x3781580() {
   return (neuron0x3780660()*0.00927506);
}

double NNfunction_ns_chi03_sR::synapse0x37815c0() {
   return (neuron0x37809a0()*0.130744);
}

double NNfunction_ns_chi03_sR::synapse0x377f0c0() {
   return (neuron0x3780ce0()*0.00759947);
}

double NNfunction_ns_chi03_sR::synapse0x377f100() {
   return (neuron0x3781020()*-0.099745);
}

double NNfunction_ns_chi03_sR::synapse0x378d3a0() {
   return (neuron0x3781360()*0.283985);
}

double NNfunction_ns_chi03_sR::synapse0x378d720() {
   return (neuron0x377c7a0()*-0.0333459);
}

double NNfunction_ns_chi03_sR::synapse0x378d760() {
   return (neuron0x377cae0()*7.22542);
}

double NNfunction_ns_chi03_sR::synapse0x378d7a0() {
   return (neuron0x377ce20()*3.56872);
}

double NNfunction_ns_chi03_sR::synapse0x378d7e0() {
   return (neuron0x377d160()*-0.0404989);
}

double NNfunction_ns_chi03_sR::synapse0x378d820() {
   return (neuron0x377d4a0()*0.0527147);
}

double NNfunction_ns_chi03_sR::synapse0x378d860() {
   return (neuron0x377d7e0()*0.0830502);
}

double NNfunction_ns_chi03_sR::synapse0x378d8a0() {
   return (neuron0x377db20()*0.0180621);
}

double NNfunction_ns_chi03_sR::synapse0x378d8e0() {
   return (neuron0x377de60()*-0.0540328);
}

double NNfunction_ns_chi03_sR::synapse0x378d920() {
   return (neuron0x377e1a0()*-0.0742925);
}

double NNfunction_ns_chi03_sR::synapse0x378d960() {
   return (neuron0x377e4e0()*-0.072079);
}

double NNfunction_ns_chi03_sR::synapse0x378d9a0() {
   return (neuron0x377e820()*-0.0220746);
}

double NNfunction_ns_chi03_sR::synapse0x378d9e0() {
   return (neuron0x377eb60()*0.014231);
}

double NNfunction_ns_chi03_sR::synapse0x378da20() {
   return (neuron0x377eea0()*0.0105452);
}

double NNfunction_ns_chi03_sR::synapse0x378da60() {
   return (neuron0x377f1e0()*0.0247767);
}

double NNfunction_ns_chi03_sR::synapse0x378daa0() {
   return (neuron0x377f520()*-0.0563328);
}

double NNfunction_ns_chi03_sR::synapse0x378dae0() {
   return (neuron0x377f860()*0.145311);
}

double NNfunction_ns_chi03_sR::synapse0x378d570() {
   return (neuron0x377fba0()*0.0764614);
}

double NNfunction_ns_chi03_sR::synapse0x378d5b0() {
   return (neuron0x3780100()*-0.00701924);
}

double NNfunction_ns_chi03_sR::synapse0x378dc30() {
   return (neuron0x3780320()*0.394562);
}

double NNfunction_ns_chi03_sR::synapse0x378dc70() {
   return (neuron0x3780660()*-0.0894157);
}

double NNfunction_ns_chi03_sR::synapse0x378dcb0() {
   return (neuron0x37809a0()*-0.0288384);
}

double NNfunction_ns_chi03_sR::synapse0x378dcf0() {
   return (neuron0x3780ce0()*0.0772413);
}

double NNfunction_ns_chi03_sR::synapse0x378dd30() {
   return (neuron0x3781020()*-0.0260956);
}

double NNfunction_ns_chi03_sR::synapse0x378dd70() {
   return (neuron0x3781360()*-0.429241);
}

double NNfunction_ns_chi03_sR::synapse0x378e0f0() {
   return (neuron0x377c7a0()*0.483528);
}

double NNfunction_ns_chi03_sR::synapse0x378e130() {
   return (neuron0x377cae0()*0.788563);
}

double NNfunction_ns_chi03_sR::synapse0x378e170() {
   return (neuron0x377ce20()*1.41365);
}

double NNfunction_ns_chi03_sR::synapse0x378e1b0() {
   return (neuron0x377d160()*-0.446642);
}

double NNfunction_ns_chi03_sR::synapse0x378e1f0() {
   return (neuron0x377d4a0()*-1.24837);
}

double NNfunction_ns_chi03_sR::synapse0x378e230() {
   return (neuron0x377d7e0()*-0.195998);
}

double NNfunction_ns_chi03_sR::synapse0x378e270() {
   return (neuron0x377db20()*-0.443567);
}

double NNfunction_ns_chi03_sR::synapse0x378e2b0() {
   return (neuron0x377de60()*-0.146147);
}

double NNfunction_ns_chi03_sR::synapse0x378e2f0() {
   return (neuron0x377e1a0()*0.511392);
}

double NNfunction_ns_chi03_sR::synapse0x378e330() {
   return (neuron0x377e4e0()*0.867763);
}

double NNfunction_ns_chi03_sR::synapse0x378e370() {
   return (neuron0x377e820()*0.944266);
}

double NNfunction_ns_chi03_sR::synapse0x378e3b0() {
   return (neuron0x377eb60()*1.05263);
}

double NNfunction_ns_chi03_sR::synapse0x378e3f0() {
   return (neuron0x377eea0()*0.374705);
}

double NNfunction_ns_chi03_sR::synapse0x378e430() {
   return (neuron0x377f1e0()*-0.511719);
}

double NNfunction_ns_chi03_sR::synapse0x378e470() {
   return (neuron0x377f520()*-0.400909);
}

double NNfunction_ns_chi03_sR::synapse0x378e4b0() {
   return (neuron0x377f860()*0.0595958);
}

double NNfunction_ns_chi03_sR::synapse0x378df40() {
   return (neuron0x377fba0()*-0.0137016);
}

double NNfunction_ns_chi03_sR::synapse0x378df80() {
   return (neuron0x3780100()*0.940852);
}

double NNfunction_ns_chi03_sR::synapse0x378e600() {
   return (neuron0x3780320()*-0.82227);
}

double NNfunction_ns_chi03_sR::synapse0x378e640() {
   return (neuron0x3780660()*0.188678);
}

double NNfunction_ns_chi03_sR::synapse0x378e680() {
   return (neuron0x37809a0()*0.318838);
}

double NNfunction_ns_chi03_sR::synapse0x378e6c0() {
   return (neuron0x3780ce0()*0.0175666);
}

double NNfunction_ns_chi03_sR::synapse0x378e700() {
   return (neuron0x3781020()*0.513689);
}

double NNfunction_ns_chi03_sR::synapse0x378e740() {
   return (neuron0x3781360()*0.454096);
}

double NNfunction_ns_chi03_sR::synapse0x378eac0() {
   return (neuron0x377c7a0()*-0.232798);
}

double NNfunction_ns_chi03_sR::synapse0x378eb00() {
   return (neuron0x377cae0()*-0.785627);
}

double NNfunction_ns_chi03_sR::synapse0x378eb40() {
   return (neuron0x377ce20()*0.0740321);
}

double NNfunction_ns_chi03_sR::synapse0x378eb80() {
   return (neuron0x377d160()*-0.660757);
}

double NNfunction_ns_chi03_sR::synapse0x378ebc0() {
   return (neuron0x377d4a0()*-1.43571);
}

double NNfunction_ns_chi03_sR::synapse0x378ec00() {
   return (neuron0x377d7e0()*0.331135);
}

double NNfunction_ns_chi03_sR::synapse0x378ec40() {
   return (neuron0x377db20()*-0.244987);
}

double NNfunction_ns_chi03_sR::synapse0x378ec80() {
   return (neuron0x377de60()*-0.22053);
}

double NNfunction_ns_chi03_sR::synapse0x378ecc0() {
   return (neuron0x377e1a0()*0.859351);
}

double NNfunction_ns_chi03_sR::synapse0x378ed00() {
   return (neuron0x377e4e0()*-0.518477);
}

double NNfunction_ns_chi03_sR::synapse0x378ed40() {
   return (neuron0x377e820()*-0.37854);
}

double NNfunction_ns_chi03_sR::synapse0x378ed80() {
   return (neuron0x377eb60()*-0.293222);
}

double NNfunction_ns_chi03_sR::synapse0x378edc0() {
   return (neuron0x377eea0()*-0.179414);
}

double NNfunction_ns_chi03_sR::synapse0x378ee00() {
   return (neuron0x377f1e0()*0.457897);
}

double NNfunction_ns_chi03_sR::synapse0x378ee40() {
   return (neuron0x377f520()*0.786185);
}

double NNfunction_ns_chi03_sR::synapse0x378ee80() {
   return (neuron0x377f860()*0.113916);
}

double NNfunction_ns_chi03_sR::synapse0x378e910() {
   return (neuron0x377fba0()*0.0191315);
}

double NNfunction_ns_chi03_sR::synapse0x378e950() {
   return (neuron0x3780100()*0.44832);
}

double NNfunction_ns_chi03_sR::synapse0x378efd0() {
   return (neuron0x3780320()*-0.0583606);
}

double NNfunction_ns_chi03_sR::synapse0x378f010() {
   return (neuron0x3780660()*0.696402);
}

double NNfunction_ns_chi03_sR::synapse0x378f050() {
   return (neuron0x37809a0()*0.00110922);
}

double NNfunction_ns_chi03_sR::synapse0x378f090() {
   return (neuron0x3780ce0()*0.314076);
}

double NNfunction_ns_chi03_sR::synapse0x378f0d0() {
   return (neuron0x3781020()*0.195115);
}

double NNfunction_ns_chi03_sR::synapse0x378f110() {
   return (neuron0x3781360()*0.699482);
}

double NNfunction_ns_chi03_sR::synapse0x378f490() {
   return (neuron0x377c7a0()*-0.0186399);
}

double NNfunction_ns_chi03_sR::synapse0x378f4d0() {
   return (neuron0x377cae0()*0.762001);
}

double NNfunction_ns_chi03_sR::synapse0x378f510() {
   return (neuron0x377ce20()*-5.49094);
}

double NNfunction_ns_chi03_sR::synapse0x378f550() {
   return (neuron0x377d160()*0.0663741);
}

double NNfunction_ns_chi03_sR::synapse0x378f590() {
   return (neuron0x377d4a0()*-0.00747627);
}

double NNfunction_ns_chi03_sR::synapse0x378f5d0() {
   return (neuron0x377d7e0()*-0.00308564);
}

double NNfunction_ns_chi03_sR::synapse0x378f610() {
   return (neuron0x377db20()*-0.0328468);
}

double NNfunction_ns_chi03_sR::synapse0x378f650() {
   return (neuron0x377de60()*-0.0295608);
}

double NNfunction_ns_chi03_sR::synapse0x378f690() {
   return (neuron0x377e1a0()*0.04126);
}

double NNfunction_ns_chi03_sR::synapse0x378f6d0() {
   return (neuron0x377e4e0()*0.0135878);
}

double NNfunction_ns_chi03_sR::synapse0x378f710() {
   return (neuron0x377e820()*-0.0334712);
}

double NNfunction_ns_chi03_sR::synapse0x378f750() {
   return (neuron0x377eb60()*-0.00135749);
}

double NNfunction_ns_chi03_sR::synapse0x378f790() {
   return (neuron0x377eea0()*-0.0191112);
}

double NNfunction_ns_chi03_sR::synapse0x378f7d0() {
   return (neuron0x377f1e0()*0.0385344);
}

double NNfunction_ns_chi03_sR::synapse0x378f810() {
   return (neuron0x377f520()*0.0458844);
}

double NNfunction_ns_chi03_sR::synapse0x378f850() {
   return (neuron0x377f860()*0.00733447);
}

double NNfunction_ns_chi03_sR::synapse0x378f2e0() {
   return (neuron0x377fba0()*0.00863081);
}

double NNfunction_ns_chi03_sR::synapse0x378f320() {
   return (neuron0x3780100()*-0.0150108);
}

double NNfunction_ns_chi03_sR::synapse0x378f9a0() {
   return (neuron0x3780320()*-0.377588);
}

double NNfunction_ns_chi03_sR::synapse0x378f9e0() {
   return (neuron0x3780660()*0.0287691);
}

double NNfunction_ns_chi03_sR::synapse0x378fa20() {
   return (neuron0x37809a0()*-0.00399768);
}

double NNfunction_ns_chi03_sR::synapse0x378fa60() {
   return (neuron0x3780ce0()*0.0244465);
}

double NNfunction_ns_chi03_sR::synapse0x378faa0() {
   return (neuron0x3781020()*-0.0370686);
}

double NNfunction_ns_chi03_sR::synapse0x378fae0() {
   return (neuron0x3781360()*-0.11313);
}

double NNfunction_ns_chi03_sR::synapse0x378fe60() {
   return (neuron0x377c7a0()*0.107942);
}

double NNfunction_ns_chi03_sR::synapse0x378fea0() {
   return (neuron0x377cae0()*4.13938);
}

double NNfunction_ns_chi03_sR::synapse0x378fee0() {
   return (neuron0x377ce20()*0.0366768);
}

double NNfunction_ns_chi03_sR::synapse0x378ff20() {
   return (neuron0x377d160()*0.0325217);
}

double NNfunction_ns_chi03_sR::synapse0x378ff60() {
   return (neuron0x377d4a0()*0.0299655);
}

double NNfunction_ns_chi03_sR::synapse0x378ffa0() {
   return (neuron0x377d7e0()*0.0267414);
}

double NNfunction_ns_chi03_sR::synapse0x378ffe0() {
   return (neuron0x377db20()*-0.0110728);
}

double NNfunction_ns_chi03_sR::synapse0x3790020() {
   return (neuron0x377de60()*-0.0124958);
}

double NNfunction_ns_chi03_sR::synapse0x3790060() {
   return (neuron0x377e1a0()*0.00904832);
}

double NNfunction_ns_chi03_sR::synapse0x3788220() {
   return (neuron0x377e4e0()*-0.00487243);
}

double NNfunction_ns_chi03_sR::synapse0x3788260() {
   return (neuron0x377e820()*-0.014085);
}

double NNfunction_ns_chi03_sR::synapse0x37882a0() {
   return (neuron0x377eb60()*-0.0328236);
}

double NNfunction_ns_chi03_sR::synapse0x37882e0() {
   return (neuron0x377eea0()*-0.0121183);
}

double NNfunction_ns_chi03_sR::synapse0x3788320() {
   return (neuron0x377f1e0()*-0.00434061);
}

double NNfunction_ns_chi03_sR::synapse0x3788360() {
   return (neuron0x377f520()*0.0183645);
}

double NNfunction_ns_chi03_sR::synapse0x37883a0() {
   return (neuron0x377f860()*-0.0185823);
}

double NNfunction_ns_chi03_sR::synapse0x378fcb0() {
   return (neuron0x377fba0()*0.0215192);
}

double NNfunction_ns_chi03_sR::synapse0x378fcf0() {
   return (neuron0x3780100()*0.0112158);
}

double NNfunction_ns_chi03_sR::synapse0x37884f0() {
   return (neuron0x3780320()*-0.103338);
}

double NNfunction_ns_chi03_sR::synapse0x3788530() {
   return (neuron0x3780660()*0.0023932);
}

double NNfunction_ns_chi03_sR::synapse0x3788570() {
   return (neuron0x37809a0()*-0.00113456);
}

double NNfunction_ns_chi03_sR::synapse0x37885b0() {
   return (neuron0x3780ce0()*-0.00886771);
}

double NNfunction_ns_chi03_sR::synapse0x37885f0() {
   return (neuron0x3781020()*0.0409383);
}

double NNfunction_ns_chi03_sR::synapse0x3788630() {
   return (neuron0x3781360()*-1.78346);
}

double NNfunction_ns_chi03_sR::synapse0x37889b0() {
   return (neuron0x377c7a0()*-0.262668);
}

double NNfunction_ns_chi03_sR::synapse0x37889f0() {
   return (neuron0x377cae0()*0.0842031);
}

double NNfunction_ns_chi03_sR::synapse0x3788a30() {
   return (neuron0x377ce20()*0.0402172);
}

double NNfunction_ns_chi03_sR::synapse0x3788a70() {
   return (neuron0x377d160()*0.0635743);
}

double NNfunction_ns_chi03_sR::synapse0x3788ab0() {
   return (neuron0x377d4a0()*-0.19645);
}

double NNfunction_ns_chi03_sR::synapse0x3788af0() {
   return (neuron0x377d7e0()*0.117084);
}

double NNfunction_ns_chi03_sR::synapse0x3788b30() {
   return (neuron0x377db20()*-0.442671);
}

double NNfunction_ns_chi03_sR::synapse0x3788b70() {
   return (neuron0x377de60()*0.302513);
}

double NNfunction_ns_chi03_sR::synapse0x3788bb0() {
   return (neuron0x377e1a0()*0.636483);
}

double NNfunction_ns_chi03_sR::synapse0x3788bf0() {
   return (neuron0x377e4e0()*0.0596804);
}

double NNfunction_ns_chi03_sR::synapse0x3788c30() {
   return (neuron0x377e820()*-0.119007);
}

double NNfunction_ns_chi03_sR::synapse0x3788c70() {
   return (neuron0x377eb60()*-0.551794);
}

double NNfunction_ns_chi03_sR::synapse0x3788cb0() {
   return (neuron0x377eea0()*-0.18498);
}

double NNfunction_ns_chi03_sR::synapse0x3788cf0() {
   return (neuron0x377f1e0()*-0.341599);
}

double NNfunction_ns_chi03_sR::synapse0x3788d30() {
   return (neuron0x377f520()*2.33111);
}

double NNfunction_ns_chi03_sR::synapse0x3788d70() {
   return (neuron0x377f860()*0.0243661);
}

double NNfunction_ns_chi03_sR::synapse0x3788800() {
   return (neuron0x377fba0()*0.0387157);
}

double NNfunction_ns_chi03_sR::synapse0x3788840() {
   return (neuron0x3780100()*0.701427);
}

double NNfunction_ns_chi03_sR::synapse0x3788ec0() {
   return (neuron0x3780320()*0.274771);
}

double NNfunction_ns_chi03_sR::synapse0x3788f00() {
   return (neuron0x3780660()*0.512539);
}

double NNfunction_ns_chi03_sR::synapse0x3788f40() {
   return (neuron0x37809a0()*0.680188);
}

double NNfunction_ns_chi03_sR::synapse0x3788f80() {
   return (neuron0x3780ce0()*-0.175845);
}

double NNfunction_ns_chi03_sR::synapse0x3788fc0() {
   return (neuron0x3781020()*0.6774);
}

double NNfunction_ns_chi03_sR::synapse0x3789000() {
   return (neuron0x3781360()*0.409798);
}

double NNfunction_ns_chi03_sR::synapse0x37891d0() {
   return (neuron0x377c7a0()*-0.153953);
}

double NNfunction_ns_chi03_sR::synapse0x3792260() {
   return (neuron0x377cae0()*6.90327);
}

double NNfunction_ns_chi03_sR::synapse0x37922a0() {
   return (neuron0x377ce20()*-0.345693);
}

double NNfunction_ns_chi03_sR::synapse0x37922e0() {
   return (neuron0x377d160()*-0.130452);
}

double NNfunction_ns_chi03_sR::synapse0x3792320() {
   return (neuron0x377d4a0()*-0.0647587);
}

double NNfunction_ns_chi03_sR::synapse0x3792360() {
   return (neuron0x377d7e0()*0.15101);
}

double NNfunction_ns_chi03_sR::synapse0x37923a0() {
   return (neuron0x377db20()*0.0191172);
}

double NNfunction_ns_chi03_sR::synapse0x37923e0() {
   return (neuron0x377de60()*0.0376638);
}

double NNfunction_ns_chi03_sR::synapse0x3792420() {
   return (neuron0x377e1a0()*0.0373673);
}

double NNfunction_ns_chi03_sR::synapse0x3792460() {
   return (neuron0x377e4e0()*0.155408);
}

double NNfunction_ns_chi03_sR::synapse0x37924a0() {
   return (neuron0x377e820()*0.129689);
}

double NNfunction_ns_chi03_sR::synapse0x37924e0() {
   return (neuron0x377eb60()*-0.107297);
}

double NNfunction_ns_chi03_sR::synapse0x3792520() {
   return (neuron0x377eea0()*-0.114217);
}

double NNfunction_ns_chi03_sR::synapse0x3792560() {
   return (neuron0x377f1e0()*-0.110668);
}

double NNfunction_ns_chi03_sR::synapse0x37925a0() {
   return (neuron0x377f520()*0.0731567);
}

double NNfunction_ns_chi03_sR::synapse0x37925e0() {
   return (neuron0x377f860()*-0.0110692);
}

double NNfunction_ns_chi03_sR::synapse0x37920b0() {
   return (neuron0x377fba0()*-0.125293);
}

double NNfunction_ns_chi03_sR::synapse0x37920f0() {
   return (neuron0x3780100()*0.0244636);
}

double NNfunction_ns_chi03_sR::synapse0x3792730() {
   return (neuron0x3780320()*-0.0496561);
}

double NNfunction_ns_chi03_sR::synapse0x3792770() {
   return (neuron0x3780660()*-0.0663806);
}

double NNfunction_ns_chi03_sR::synapse0x37927b0() {
   return (neuron0x37809a0()*-0.0397771);
}

double NNfunction_ns_chi03_sR::synapse0x37927f0() {
   return (neuron0x3780ce0()*0.0635471);
}

double NNfunction_ns_chi03_sR::synapse0x3792830() {
   return (neuron0x3781020()*0.0636017);
}

double NNfunction_ns_chi03_sR::synapse0x3792870() {
   return (neuron0x3781360()*4.26705);
}

double NNfunction_ns_chi03_sR::synapse0x3792bf0() {
   return (neuron0x377c7a0()*0.0778057);
}

double NNfunction_ns_chi03_sR::synapse0x3792c30() {
   return (neuron0x377cae0()*0.0854601);
}

double NNfunction_ns_chi03_sR::synapse0x3792c70() {
   return (neuron0x377ce20()*0.0463731);
}

double NNfunction_ns_chi03_sR::synapse0x3792cb0() {
   return (neuron0x377d160()*0.00247958);
}

double NNfunction_ns_chi03_sR::synapse0x3792cf0() {
   return (neuron0x377d4a0()*-0.060537);
}

double NNfunction_ns_chi03_sR::synapse0x3792d30() {
   return (neuron0x377d7e0()*0.00984677);
}

double NNfunction_ns_chi03_sR::synapse0x3792d70() {
   return (neuron0x377db20()*-0.00916514);
}

double NNfunction_ns_chi03_sR::synapse0x3792db0() {
   return (neuron0x377de60()*-0.00610061);
}

double NNfunction_ns_chi03_sR::synapse0x3792df0() {
   return (neuron0x377e1a0()*-0.0139829);
}

double NNfunction_ns_chi03_sR::synapse0x3792e30() {
   return (neuron0x377e4e0()*-0.0361292);
}

double NNfunction_ns_chi03_sR::synapse0x3792e70() {
   return (neuron0x377e820()*-0.0157641);
}

double NNfunction_ns_chi03_sR::synapse0x3792eb0() {
   return (neuron0x377eb60()*0.0560551);
}

double NNfunction_ns_chi03_sR::synapse0x3792ef0() {
   return (neuron0x377eea0()*-0.00931852);
}

double NNfunction_ns_chi03_sR::synapse0x3792f30() {
   return (neuron0x377f1e0()*0.0220239);
}

double NNfunction_ns_chi03_sR::synapse0x3792f70() {
   return (neuron0x377f520()*0.0322667);
}

double NNfunction_ns_chi03_sR::synapse0x3792fb0() {
   return (neuron0x377f860()*0.0225662);
}

double NNfunction_ns_chi03_sR::synapse0x3792a40() {
   return (neuron0x377fba0()*0.0254424);
}

double NNfunction_ns_chi03_sR::synapse0x3792a80() {
   return (neuron0x3780100()*-0.0538367);
}

double NNfunction_ns_chi03_sR::synapse0x3793100() {
   return (neuron0x3780320()*0.122309);
}

double NNfunction_ns_chi03_sR::synapse0x3793140() {
   return (neuron0x3780660()*-0.0183143);
}

double NNfunction_ns_chi03_sR::synapse0x3793180() {
   return (neuron0x37809a0()*-0.00483411);
}

double NNfunction_ns_chi03_sR::synapse0x37931c0() {
   return (neuron0x3780ce0()*-0.00896252);
}

double NNfunction_ns_chi03_sR::synapse0x3793200() {
   return (neuron0x3781020()*0.0243693);
}

double NNfunction_ns_chi03_sR::synapse0x3793240() {
   return (neuron0x3781360()*0.937641);
}

double NNfunction_ns_chi03_sR::synapse0x37935c0() {
   return (neuron0x377c7a0()*-0.576716);
}

double NNfunction_ns_chi03_sR::synapse0x3793600() {
   return (neuron0x377cae0()*-0.424736);
}

double NNfunction_ns_chi03_sR::synapse0x3793640() {
   return (neuron0x377ce20()*-0.212746);
}

double NNfunction_ns_chi03_sR::synapse0x3793680() {
   return (neuron0x377d160()*-1.2664);
}

double NNfunction_ns_chi03_sR::synapse0x37936c0() {
   return (neuron0x377d4a0()*0.0205289);
}

double NNfunction_ns_chi03_sR::synapse0x3793700() {
   return (neuron0x377d7e0()*0.0166154);
}

double NNfunction_ns_chi03_sR::synapse0x3793740() {
   return (neuron0x377db20()*-0.899508);
}

double NNfunction_ns_chi03_sR::synapse0x3793780() {
   return (neuron0x377de60()*-0.219002);
}

double NNfunction_ns_chi03_sR::synapse0x37937c0() {
   return (neuron0x377e1a0()*0.285219);
}

double NNfunction_ns_chi03_sR::synapse0x3793800() {
   return (neuron0x377e4e0()*0.259508);
}

double NNfunction_ns_chi03_sR::synapse0x3793840() {
   return (neuron0x377e820()*-0.990958);
}

double NNfunction_ns_chi03_sR::synapse0x3793880() {
   return (neuron0x377eb60()*0.0575448);
}

double NNfunction_ns_chi03_sR::synapse0x37938c0() {
   return (neuron0x377eea0()*-0.0337042);
}

double NNfunction_ns_chi03_sR::synapse0x3793900() {
   return (neuron0x377f1e0()*-1.4088);
}

double NNfunction_ns_chi03_sR::synapse0x3793940() {
   return (neuron0x377f520()*-0.0181544);
}

double NNfunction_ns_chi03_sR::synapse0x3793980() {
   return (neuron0x377f860()*0.344352);
}

double NNfunction_ns_chi03_sR::synapse0x3793410() {
   return (neuron0x377fba0()*1.05596);
}

double NNfunction_ns_chi03_sR::synapse0x3793450() {
   return (neuron0x3780100()*-1.05725);
}

double NNfunction_ns_chi03_sR::synapse0x3793ad0() {
   return (neuron0x3780320()*0.992897);
}

double NNfunction_ns_chi03_sR::synapse0x3793b10() {
   return (neuron0x3780660()*-0.672084);
}

double NNfunction_ns_chi03_sR::synapse0x3793b50() {
   return (neuron0x37809a0()*-0.168052);
}

double NNfunction_ns_chi03_sR::synapse0x3793b90() {
   return (neuron0x3780ce0()*0.794598);
}

double NNfunction_ns_chi03_sR::synapse0x3793bd0() {
   return (neuron0x3781020()*-0.181168);
}

double NNfunction_ns_chi03_sR::synapse0x3793c10() {
   return (neuron0x3781360()*0.0185965);
}

double NNfunction_ns_chi03_sR::synapse0x3793f90() {
   return (neuron0x377c7a0()*-0.501576);
}

double NNfunction_ns_chi03_sR::synapse0x3793fd0() {
   return (neuron0x377cae0()*1.09277);
}

double NNfunction_ns_chi03_sR::synapse0x3794010() {
   return (neuron0x377ce20()*-0.543134);
}

double NNfunction_ns_chi03_sR::synapse0x3794050() {
   return (neuron0x377d160()*0.0161897);
}

double NNfunction_ns_chi03_sR::synapse0x3794090() {
   return (neuron0x377d4a0()*-0.160702);
}

double NNfunction_ns_chi03_sR::synapse0x37940d0() {
   return (neuron0x377d7e0()*-0.331652);
}

double NNfunction_ns_chi03_sR::synapse0x3794110() {
   return (neuron0x377db20()*0.257877);
}

double NNfunction_ns_chi03_sR::synapse0x3794150() {
   return (neuron0x377de60()*-0.493592);
}

double NNfunction_ns_chi03_sR::synapse0x3794190() {
   return (neuron0x377e1a0()*-0.0377565);
}

double NNfunction_ns_chi03_sR::synapse0x37941d0() {
   return (neuron0x377e4e0()*-0.887721);
}

double NNfunction_ns_chi03_sR::synapse0x3794210() {
   return (neuron0x377e820()*0.523913);
}

double NNfunction_ns_chi03_sR::synapse0x3794250() {
   return (neuron0x377eb60()*0.275301);
}

double NNfunction_ns_chi03_sR::synapse0x3794290() {
   return (neuron0x377eea0()*-0.471289);
}

double NNfunction_ns_chi03_sR::synapse0x37942d0() {
   return (neuron0x377f1e0()*0.764103);
}

double NNfunction_ns_chi03_sR::synapse0x3794310() {
   return (neuron0x377f520()*0.117136);
}

double NNfunction_ns_chi03_sR::synapse0x3794350() {
   return (neuron0x377f860()*-0.180838);
}

double NNfunction_ns_chi03_sR::synapse0x3793de0() {
   return (neuron0x377fba0()*-0.203794);
}

double NNfunction_ns_chi03_sR::synapse0x3793e20() {
   return (neuron0x3780100()*0.0697013);
}

double NNfunction_ns_chi03_sR::synapse0x37944a0() {
   return (neuron0x3780320()*0.459857);
}

double NNfunction_ns_chi03_sR::synapse0x37944e0() {
   return (neuron0x3780660()*0.121832);
}

double NNfunction_ns_chi03_sR::synapse0x3794520() {
   return (neuron0x37809a0()*0.105062);
}

double NNfunction_ns_chi03_sR::synapse0x3794560() {
   return (neuron0x3780ce0()*0.637821);
}

double NNfunction_ns_chi03_sR::synapse0x37945a0() {
   return (neuron0x3781020()*-0.783165);
}

double NNfunction_ns_chi03_sR::synapse0x37945e0() {
   return (neuron0x3781360()*-0.503541);
}

double NNfunction_ns_chi03_sR::synapse0x3794960() {
   return (neuron0x377c7a0()*-0.022629);
}

double NNfunction_ns_chi03_sR::synapse0x37949a0() {
   return (neuron0x377cae0()*2.05406);
}

double NNfunction_ns_chi03_sR::synapse0x37949e0() {
   return (neuron0x377ce20()*-0.170456);
}

double NNfunction_ns_chi03_sR::synapse0x3794a20() {
   return (neuron0x377d160()*-0.0600835);
}

double NNfunction_ns_chi03_sR::synapse0x3794a60() {
   return (neuron0x377d4a0()*-0.0185955);
}

double NNfunction_ns_chi03_sR::synapse0x3794aa0() {
   return (neuron0x377d7e0()*-0.0107881);
}

double NNfunction_ns_chi03_sR::synapse0x3794ae0() {
   return (neuron0x377db20()*0.00917914);
}

double NNfunction_ns_chi03_sR::synapse0x3794b20() {
   return (neuron0x377de60()*0.0465036);
}

double NNfunction_ns_chi03_sR::synapse0x3794b60() {
   return (neuron0x377e1a0()*0.0207469);
}

double NNfunction_ns_chi03_sR::synapse0x3794ba0() {
   return (neuron0x377e4e0()*0.0194063);
}

double NNfunction_ns_chi03_sR::synapse0x3794be0() {
   return (neuron0x377e820()*0.0361901);
}

double NNfunction_ns_chi03_sR::synapse0x3794c20() {
   return (neuron0x377eb60()*0.0169271);
}

double NNfunction_ns_chi03_sR::synapse0x3794c60() {
   return (neuron0x377eea0()*-0.00349012);
}

double NNfunction_ns_chi03_sR::synapse0x3794ca0() {
   return (neuron0x377f1e0()*-0.0145144);
}

double NNfunction_ns_chi03_sR::synapse0x3794ce0() {
   return (neuron0x377f520()*-0.0285176);
}

double NNfunction_ns_chi03_sR::synapse0x3794d20() {
   return (neuron0x377f860()*-0.0683759);
}

double NNfunction_ns_chi03_sR::synapse0x37947b0() {
   return (neuron0x377fba0()*0.00130102);
}

double NNfunction_ns_chi03_sR::synapse0x37947f0() {
   return (neuron0x3780100()*-0.0287209);
}

double NNfunction_ns_chi03_sR::synapse0x3794e70() {
   return (neuron0x3780320()*0.384499);
}

double NNfunction_ns_chi03_sR::synapse0x3794eb0() {
   return (neuron0x3780660()*-0.0216737);
}

double NNfunction_ns_chi03_sR::synapse0x3794ef0() {
   return (neuron0x37809a0()*-0.0797869);
}

double NNfunction_ns_chi03_sR::synapse0x3794f30() {
   return (neuron0x3780ce0()*-0.0370251);
}

double NNfunction_ns_chi03_sR::synapse0x3794f70() {
   return (neuron0x3781020()*0.0399187);
}

double NNfunction_ns_chi03_sR::synapse0x3794fb0() {
   return (neuron0x3781360()*-1.18628);
}

double NNfunction_ns_chi03_sR::synapse0x3795330() {
   return (neuron0x377c7a0()*0.686978);
}

double NNfunction_ns_chi03_sR::synapse0x3795370() {
   return (neuron0x377cae0()*-0.63798);
}

double NNfunction_ns_chi03_sR::synapse0x37953b0() {
   return (neuron0x377ce20()*0.393611);
}

double NNfunction_ns_chi03_sR::synapse0x37953f0() {
   return (neuron0x377d160()*-0.527591);
}

double NNfunction_ns_chi03_sR::synapse0x3795430() {
   return (neuron0x377d4a0()*-0.667975);
}

double NNfunction_ns_chi03_sR::synapse0x3795470() {
   return (neuron0x377d7e0()*0.770445);
}

double NNfunction_ns_chi03_sR::synapse0x37954b0() {
   return (neuron0x377db20()*-0.216911);
}

double NNfunction_ns_chi03_sR::synapse0x37954f0() {
   return (neuron0x377de60()*1.30587);
}

double NNfunction_ns_chi03_sR::synapse0x3795530() {
   return (neuron0x377e1a0()*-0.194778);
}

double NNfunction_ns_chi03_sR::synapse0x3795570() {
   return (neuron0x377e4e0()*1.25757);
}

double NNfunction_ns_chi03_sR::synapse0x37955b0() {
   return (neuron0x377e820()*0.618933);
}

double NNfunction_ns_chi03_sR::synapse0x37955f0() {
   return (neuron0x377eb60()*0.131373);
}

double NNfunction_ns_chi03_sR::synapse0x3795630() {
   return (neuron0x377eea0()*0.1355);
}

double NNfunction_ns_chi03_sR::synapse0x3795670() {
   return (neuron0x377f1e0()*0.826506);
}

double NNfunction_ns_chi03_sR::synapse0x37956b0() {
   return (neuron0x377f520()*-1.25899);
}

double NNfunction_ns_chi03_sR::synapse0x37956f0() {
   return (neuron0x377f860()*1.58892);
}

double NNfunction_ns_chi03_sR::synapse0x3795180() {
   return (neuron0x377fba0()*0.267434);
}

double NNfunction_ns_chi03_sR::synapse0x37951c0() {
   return (neuron0x3780100()*0.34409);
}

double NNfunction_ns_chi03_sR::synapse0x3795840() {
   return (neuron0x3780320()*-0.42144);
}

double NNfunction_ns_chi03_sR::synapse0x3795880() {
   return (neuron0x3780660()*-0.635125);
}

double NNfunction_ns_chi03_sR::synapse0x37958c0() {
   return (neuron0x37809a0()*-0.00396897);
}

double NNfunction_ns_chi03_sR::synapse0x3795900() {
   return (neuron0x3780ce0()*0.557176);
}

double NNfunction_ns_chi03_sR::synapse0x3795940() {
   return (neuron0x3781020()*-0.874946);
}

double NNfunction_ns_chi03_sR::synapse0x3795980() {
   return (neuron0x3781360()*-0.122329);
}

double NNfunction_ns_chi03_sR::synapse0x3795d00() {
   return (neuron0x377c7a0()*-0.761739);
}

double NNfunction_ns_chi03_sR::synapse0x3795d40() {
   return (neuron0x377cae0()*0.587716);
}

double NNfunction_ns_chi03_sR::synapse0x3795d80() {
   return (neuron0x377ce20()*0.851639);
}

double NNfunction_ns_chi03_sR::synapse0x3795dc0() {
   return (neuron0x377d160()*-0.106687);
}

double NNfunction_ns_chi03_sR::synapse0x3795e00() {
   return (neuron0x377d4a0()*-0.333559);
}

double NNfunction_ns_chi03_sR::synapse0x3795e40() {
   return (neuron0x377d7e0()*-1.04962);
}

double NNfunction_ns_chi03_sR::synapse0x3795e80() {
   return (neuron0x377db20()*-0.00395107);
}

double NNfunction_ns_chi03_sR::synapse0x3795ec0() {
   return (neuron0x377de60()*-0.70302);
}

double NNfunction_ns_chi03_sR::synapse0x3795f00() {
   return (neuron0x377e1a0()*0.434906);
}

double NNfunction_ns_chi03_sR::synapse0x3795f40() {
   return (neuron0x377e4e0()*-0.342221);
}

double NNfunction_ns_chi03_sR::synapse0x3795f80() {
   return (neuron0x377e820()*0.217653);
}

double NNfunction_ns_chi03_sR::synapse0x3795fc0() {
   return (neuron0x377eb60()*-0.274728);
}

double NNfunction_ns_chi03_sR::synapse0x3796000() {
   return (neuron0x377eea0()*0.891003);
}

double NNfunction_ns_chi03_sR::synapse0x3796040() {
   return (neuron0x377f1e0()*0.0826614);
}

double NNfunction_ns_chi03_sR::synapse0x3796080() {
   return (neuron0x377f520()*-0.993122);
}

double NNfunction_ns_chi03_sR::synapse0x37960c0() {
   return (neuron0x377f860()*0.489692);
}

double NNfunction_ns_chi03_sR::synapse0x3795b50() {
   return (neuron0x377fba0()*-0.307442);
}

double NNfunction_ns_chi03_sR::synapse0x3795b90() {
   return (neuron0x3780100()*-0.131319);
}

double NNfunction_ns_chi03_sR::synapse0x3796210() {
   return (neuron0x3780320()*-0.426021);
}

double NNfunction_ns_chi03_sR::synapse0x3796250() {
   return (neuron0x3780660()*-0.218619);
}

double NNfunction_ns_chi03_sR::synapse0x3796290() {
   return (neuron0x37809a0()*0.343299);
}

double NNfunction_ns_chi03_sR::synapse0x37962d0() {
   return (neuron0x3780ce0()*-0.441347);
}

double NNfunction_ns_chi03_sR::synapse0x3796310() {
   return (neuron0x3781020()*0.502734);
}

double NNfunction_ns_chi03_sR::synapse0x3796350() {
   return (neuron0x3781360()*-0.250694);
}

double NNfunction_ns_chi03_sR::synapse0x37966d0() {
   return (neuron0x377c7a0()*0.724843);
}

double NNfunction_ns_chi03_sR::synapse0x3796710() {
   return (neuron0x377cae0()*0.394824);
}

double NNfunction_ns_chi03_sR::synapse0x3796750() {
   return (neuron0x377ce20()*0.131762);
}

double NNfunction_ns_chi03_sR::synapse0x3796790() {
   return (neuron0x377d160()*0.585678);
}

double NNfunction_ns_chi03_sR::synapse0x37967d0() {
   return (neuron0x377d4a0()*-0.587084);
}

double NNfunction_ns_chi03_sR::synapse0x3796810() {
   return (neuron0x377d7e0()*0.478761);
}

double NNfunction_ns_chi03_sR::synapse0x3796850() {
   return (neuron0x377db20()*0.815013);
}

double NNfunction_ns_chi03_sR::synapse0x3796890() {
   return (neuron0x377de60()*-1.39371);
}

double NNfunction_ns_chi03_sR::synapse0x37968d0() {
   return (neuron0x377e1a0()*-0.0604209);
}

double NNfunction_ns_chi03_sR::synapse0x3796910() {
   return (neuron0x377e4e0()*-0.0915279);
}

double NNfunction_ns_chi03_sR::synapse0x3796950() {
   return (neuron0x377e820()*0.366911);
}

double NNfunction_ns_chi03_sR::synapse0x3796990() {
   return (neuron0x377eb60()*0.529879);
}

double NNfunction_ns_chi03_sR::synapse0x37969d0() {
   return (neuron0x377eea0()*-0.612973);
}

double NNfunction_ns_chi03_sR::synapse0x3796a10() {
   return (neuron0x377f1e0()*-0.843087);
}

double NNfunction_ns_chi03_sR::synapse0x3796a50() {
   return (neuron0x377f520()*0.112843);
}

double NNfunction_ns_chi03_sR::synapse0x3796a90() {
   return (neuron0x377f860()*0.723554);
}

double NNfunction_ns_chi03_sR::synapse0x3796520() {
   return (neuron0x377fba0()*0.196953);
}

double NNfunction_ns_chi03_sR::synapse0x3796560() {
   return (neuron0x3780100()*0.0410293);
}

double NNfunction_ns_chi03_sR::synapse0x3796be0() {
   return (neuron0x3780320()*0.577643);
}

double NNfunction_ns_chi03_sR::synapse0x3796c20() {
   return (neuron0x3780660()*0.190674);
}

double NNfunction_ns_chi03_sR::synapse0x3796c60() {
   return (neuron0x37809a0()*0.598687);
}

double NNfunction_ns_chi03_sR::synapse0x3796ca0() {
   return (neuron0x3780ce0()*0.864576);
}

double NNfunction_ns_chi03_sR::synapse0x3796ce0() {
   return (neuron0x3781020()*-0.62959);
}

double NNfunction_ns_chi03_sR::synapse0x3796d20() {
   return (neuron0x3781360()*-0.653302);
}

double NNfunction_ns_chi03_sR::synapse0x37970a0() {
   return (neuron0x377c7a0()*-0.00849239);
}

double NNfunction_ns_chi03_sR::synapse0x378b670() {
   return (neuron0x377cae0()*0.0188851);
}

double NNfunction_ns_chi03_sR::synapse0x378b6b0() {
   return (neuron0x377ce20()*-0.043867);
}

double NNfunction_ns_chi03_sR::synapse0x378b6f0() {
   return (neuron0x377d160()*-0.0278979);
}

double NNfunction_ns_chi03_sR::synapse0x378b940() {
   return (neuron0x377d4a0()*-0.00254973);
}

double NNfunction_ns_chi03_sR::synapse0x378b980() {
   return (neuron0x377d7e0()*-0.00184206);
}

double NNfunction_ns_chi03_sR::synapse0x378b9c0() {
   return (neuron0x377db20()*-0.0133124);
}

double NNfunction_ns_chi03_sR::synapse0x378bc10() {
   return (neuron0x377de60()*0.00198948);
}

double NNfunction_ns_chi03_sR::synapse0x378bc50() {
   return (neuron0x377e1a0()*0.00155303);
}

double NNfunction_ns_chi03_sR::synapse0x378bea0() {
   return (neuron0x377e4e0()*-0.0122088);
}

double NNfunction_ns_chi03_sR::synapse0x378bee0() {
   return (neuron0x377e820()*0.00505971);
}

double NNfunction_ns_chi03_sR::synapse0x378bf20() {
   return (neuron0x377eb60()*-0.0142166);
}

double NNfunction_ns_chi03_sR::synapse0x378c170() {
   return (neuron0x377eea0()*-0.00961347);
}

double NNfunction_ns_chi03_sR::synapse0x378c1b0() {
   return (neuron0x377f1e0()*-0.0119002);
}

double NNfunction_ns_chi03_sR::synapse0x378c400() {
   return (neuron0x377f520()*0.00795743);
}

double NNfunction_ns_chi03_sR::synapse0x378c440() {
   return (neuron0x377f860()*0.0229969);
}

double NNfunction_ns_chi03_sR::synapse0x3796ef0() {
   return (neuron0x377fba0()*-0.0137883);
}

double NNfunction_ns_chi03_sR::synapse0x3796f30() {
   return (neuron0x3780100()*-0.0295439);
}

double NNfunction_ns_chi03_sR::synapse0x378c590() {
   return (neuron0x3780320()*-0.580477);
}

double NNfunction_ns_chi03_sR::synapse0x378caa0() {
   return (neuron0x3780660()*-0.0135647);
}

double NNfunction_ns_chi03_sR::synapse0x378cae0() {
   return (neuron0x37809a0()*-0.00716882);
}

double NNfunction_ns_chi03_sR::synapse0x378cb20() {
   return (neuron0x3780ce0()*0.00461891);
}

double NNfunction_ns_chi03_sR::synapse0x378cd70() {
   return (neuron0x3781020()*0.00706453);
}

double NNfunction_ns_chi03_sR::synapse0x378cdb0() {
   return (neuron0x3781360()*0.129573);
}

double NNfunction_ns_chi03_sR::synapse0x378c660() {
   return (neuron0x377c7a0()*0.0163622);
}

double NNfunction_ns_chi03_sR::synapse0x378c6a0() {
   return (neuron0x377cae0()*-0.0466884);
}

double NNfunction_ns_chi03_sR::synapse0x378c6e0() {
   return (neuron0x377ce20()*0.613721);
}

double NNfunction_ns_chi03_sR::synapse0x378c720() {
   return (neuron0x377d160()*-0.762354);
}

double NNfunction_ns_chi03_sR::synapse0x378d0a0() {
   return (neuron0x377d4a0()*-0.429439);
}

double NNfunction_ns_chi03_sR::synapse0x37993f0() {
   return (neuron0x377d7e0()*-0.443188);
}

double NNfunction_ns_chi03_sR::synapse0x3799430() {
   return (neuron0x377db20()*-0.203557);
}

double NNfunction_ns_chi03_sR::synapse0x3799470() {
   return (neuron0x377de60()*-0.907468);
}

double NNfunction_ns_chi03_sR::synapse0x37994b0() {
   return (neuron0x377e1a0()*-0.420771);
}

double NNfunction_ns_chi03_sR::synapse0x37994f0() {
   return (neuron0x377e4e0()*-0.814424);
}

double NNfunction_ns_chi03_sR::synapse0x3799530() {
   return (neuron0x377e820()*-0.35074);
}

double NNfunction_ns_chi03_sR::synapse0x3799570() {
   return (neuron0x377eb60()*0.88659);
}

double NNfunction_ns_chi03_sR::synapse0x37995b0() {
   return (neuron0x377eea0()*1.03322);
}

double NNfunction_ns_chi03_sR::synapse0x37995f0() {
   return (neuron0x377f1e0()*-0.842462);
}

double NNfunction_ns_chi03_sR::synapse0x3799630() {
   return (neuron0x377f520()*-1.30781);
}

double NNfunction_ns_chi03_sR::synapse0x3799670() {
   return (neuron0x377f860()*-0.152175);
}

double NNfunction_ns_chi03_sR::synapse0x378cf80() {
   return (neuron0x377fba0()*-0.426867);
}

double NNfunction_ns_chi03_sR::synapse0x378cfc0() {
   return (neuron0x3780100()*-1.03665);
}

double NNfunction_ns_chi03_sR::synapse0x37997c0() {
   return (neuron0x3780320()*-2.12023);
}

double NNfunction_ns_chi03_sR::synapse0x3799800() {
   return (neuron0x3780660()*-0.269528);
}

double NNfunction_ns_chi03_sR::synapse0x3799840() {
   return (neuron0x37809a0()*0.343463);
}

double NNfunction_ns_chi03_sR::synapse0x3799880() {
   return (neuron0x3780ce0()*-0.466865);
}

double NNfunction_ns_chi03_sR::synapse0x37998c0() {
   return (neuron0x3781020()*0.622784);
}

double NNfunction_ns_chi03_sR::synapse0x3799900() {
   return (neuron0x3781360()*1.14723);
}

double NNfunction_ns_chi03_sR::synapse0x3799c80() {
   return (neuron0x377c7a0()*-0.165592);
}

double NNfunction_ns_chi03_sR::synapse0x3799cc0() {
   return (neuron0x377cae0()*-0.207813);
}

double NNfunction_ns_chi03_sR::synapse0x3799d00() {
   return (neuron0x377ce20()*-1.59321);
}

double NNfunction_ns_chi03_sR::synapse0x3799d40() {
   return (neuron0x377d160()*0.468138);
}

double NNfunction_ns_chi03_sR::synapse0x3799d80() {
   return (neuron0x377d4a0()*0.00243019);
}

double NNfunction_ns_chi03_sR::synapse0x3799dc0() {
   return (neuron0x377d7e0()*0.202175);
}

double NNfunction_ns_chi03_sR::synapse0x3799e00() {
   return (neuron0x377db20()*-0.114181);
}

double NNfunction_ns_chi03_sR::synapse0x3799e40() {
   return (neuron0x377de60()*-0.314376);
}

double NNfunction_ns_chi03_sR::synapse0x3799e80() {
   return (neuron0x377e1a0()*-0.13325);
}

double NNfunction_ns_chi03_sR::synapse0x3799ec0() {
   return (neuron0x377e4e0()*-1.05988);
}

double NNfunction_ns_chi03_sR::synapse0x3799f00() {
   return (neuron0x377e820()*0.938669);
}

double NNfunction_ns_chi03_sR::synapse0x3799f40() {
   return (neuron0x377eb60()*0.428131);
}

double NNfunction_ns_chi03_sR::synapse0x3799f80() {
   return (neuron0x377eea0()*-0.0174929);
}

double NNfunction_ns_chi03_sR::synapse0x3799fc0() {
   return (neuron0x377f1e0()*0.0987387);
}

double NNfunction_ns_chi03_sR::synapse0x379a000() {
   return (neuron0x377f520()*0.389785);
}

double NNfunction_ns_chi03_sR::synapse0x379a040() {
   return (neuron0x377f860()*-0.508968);
}

double NNfunction_ns_chi03_sR::synapse0x3799ad0() {
   return (neuron0x377fba0()*-0.818369);
}

double NNfunction_ns_chi03_sR::synapse0x3799b10() {
   return (neuron0x3780100()*0.44956);
}

double NNfunction_ns_chi03_sR::synapse0x379a190() {
   return (neuron0x3780320()*0.0504487);
}

double NNfunction_ns_chi03_sR::synapse0x379a1d0() {
   return (neuron0x3780660()*0.288165);
}

double NNfunction_ns_chi03_sR::synapse0x379a210() {
   return (neuron0x37809a0()*-0.479804);
}

double NNfunction_ns_chi03_sR::synapse0x379a250() {
   return (neuron0x3780ce0()*-1.18018);
}

double NNfunction_ns_chi03_sR::synapse0x379a290() {
   return (neuron0x3781020()*-0.87291);
}

double NNfunction_ns_chi03_sR::synapse0x379a2d0() {
   return (neuron0x3781360()*-1.07457);
}

double NNfunction_ns_chi03_sR::synapse0x379a650() {
   return (neuron0x377c7a0()*1.02246);
}

double NNfunction_ns_chi03_sR::synapse0x379a690() {
   return (neuron0x377cae0()*0.31234);
}

double NNfunction_ns_chi03_sR::synapse0x379a6d0() {
   return (neuron0x377ce20()*0.802764);
}

double NNfunction_ns_chi03_sR::synapse0x379a710() {
   return (neuron0x377d160()*0.567191);
}

double NNfunction_ns_chi03_sR::synapse0x379a750() {
   return (neuron0x377d4a0()*0.0623532);
}

double NNfunction_ns_chi03_sR::synapse0x379a790() {
   return (neuron0x377d7e0()*-0.164229);
}

double NNfunction_ns_chi03_sR::synapse0x379a7d0() {
   return (neuron0x377db20()*-0.512752);
}

double NNfunction_ns_chi03_sR::synapse0x379a810() {
   return (neuron0x377de60()*-0.482476);
}

double NNfunction_ns_chi03_sR::synapse0x379a850() {
   return (neuron0x377e1a0()*-0.7756);
}

double NNfunction_ns_chi03_sR::synapse0x379a890() {
   return (neuron0x377e4e0()*0.172996);
}

double NNfunction_ns_chi03_sR::synapse0x379a8d0() {
   return (neuron0x377e820()*-0.265056);
}

double NNfunction_ns_chi03_sR::synapse0x379a910() {
   return (neuron0x377eb60()*0.879061);
}

double NNfunction_ns_chi03_sR::synapse0x379a950() {
   return (neuron0x377eea0()*-0.00558892);
}

double NNfunction_ns_chi03_sR::synapse0x379a990() {
   return (neuron0x377f1e0()*-0.390592);
}

double NNfunction_ns_chi03_sR::synapse0x379a9d0() {
   return (neuron0x377f520()*0.114606);
}

double NNfunction_ns_chi03_sR::synapse0x379aa10() {
   return (neuron0x377f860()*-0.0143319);
}

double NNfunction_ns_chi03_sR::synapse0x379a4a0() {
   return (neuron0x377fba0()*-0.341013);
}

double NNfunction_ns_chi03_sR::synapse0x379a4e0() {
   return (neuron0x3780100()*0.638189);
}

double NNfunction_ns_chi03_sR::synapse0x379ab60() {
   return (neuron0x3780320()*-0.713074);
}

double NNfunction_ns_chi03_sR::synapse0x379aba0() {
   return (neuron0x3780660()*-0.808011);
}

double NNfunction_ns_chi03_sR::synapse0x379abe0() {
   return (neuron0x37809a0()*1.00807);
}

double NNfunction_ns_chi03_sR::synapse0x379ac20() {
   return (neuron0x3780ce0()*-0.750389);
}

double NNfunction_ns_chi03_sR::synapse0x379ac60() {
   return (neuron0x3781020()*-0.560518);
}

double NNfunction_ns_chi03_sR::synapse0x379aca0() {
   return (neuron0x3781360()*-0.345086);
}

double NNfunction_ns_chi03_sR::synapse0x379b020() {
   return (neuron0x377c7a0()*0.170954);
}

double NNfunction_ns_chi03_sR::synapse0x379b060() {
   return (neuron0x377cae0()*-0.514252);
}

double NNfunction_ns_chi03_sR::synapse0x379b0a0() {
   return (neuron0x377ce20()*0.596603);
}

double NNfunction_ns_chi03_sR::synapse0x379b0e0() {
   return (neuron0x377d160()*-0.335352);
}

double NNfunction_ns_chi03_sR::synapse0x379b120() {
   return (neuron0x377d4a0()*-0.0715309);
}

double NNfunction_ns_chi03_sR::synapse0x379b160() {
   return (neuron0x377d7e0()*0.268508);
}

double NNfunction_ns_chi03_sR::synapse0x379b1a0() {
   return (neuron0x377db20()*-0.237259);
}

double NNfunction_ns_chi03_sR::synapse0x379b1e0() {
   return (neuron0x377de60()*-0.302992);
}

double NNfunction_ns_chi03_sR::synapse0x379b220() {
   return (neuron0x377e1a0()*-0.164997);
}

double NNfunction_ns_chi03_sR::synapse0x379b260() {
   return (neuron0x377e4e0()*-0.0136527);
}

double NNfunction_ns_chi03_sR::synapse0x379b2a0() {
   return (neuron0x377e820()*0.251349);
}

double NNfunction_ns_chi03_sR::synapse0x379b2e0() {
   return (neuron0x377eb60()*0.32008);
}

double NNfunction_ns_chi03_sR::synapse0x379b320() {
   return (neuron0x377eea0()*-0.147145);
}

double NNfunction_ns_chi03_sR::synapse0x379b360() {
   return (neuron0x377f1e0()*0.517297);
}

double NNfunction_ns_chi03_sR::synapse0x379b3a0() {
   return (neuron0x377f520()*-0.327785);
}

double NNfunction_ns_chi03_sR::synapse0x379b3e0() {
   return (neuron0x377f860()*-0.429077);
}

double NNfunction_ns_chi03_sR::synapse0x379ae70() {
   return (neuron0x377fba0()*0.0888533);
}

double NNfunction_ns_chi03_sR::synapse0x379aeb0() {
   return (neuron0x3780100()*0.692352);
}

double NNfunction_ns_chi03_sR::synapse0x379b530() {
   return (neuron0x3780320()*1.00048);
}

double NNfunction_ns_chi03_sR::synapse0x379b570() {
   return (neuron0x3780660()*0.202392);
}

double NNfunction_ns_chi03_sR::synapse0x379b5b0() {
   return (neuron0x37809a0()*0.118041);
}

double NNfunction_ns_chi03_sR::synapse0x379b5f0() {
   return (neuron0x3780ce0()*-0.0509467);
}

double NNfunction_ns_chi03_sR::synapse0x379b630() {
   return (neuron0x3781020()*-0.337031);
}

double NNfunction_ns_chi03_sR::synapse0x379b670() {
   return (neuron0x3781360()*-1.02838);
}

double NNfunction_ns_chi03_sR::synapse0x379b9f0() {
   return (neuron0x377c7a0()*-0.0106253);
}

double NNfunction_ns_chi03_sR::synapse0x379ba30() {
   return (neuron0x377cae0()*-0.176814);
}

double NNfunction_ns_chi03_sR::synapse0x379ba70() {
   return (neuron0x377ce20()*-0.0474906);
}

double NNfunction_ns_chi03_sR::synapse0x379bab0() {
   return (neuron0x377d160()*4.70604);
}

double NNfunction_ns_chi03_sR::synapse0x379baf0() {
   return (neuron0x377d4a0()*-0.00920824);
}

double NNfunction_ns_chi03_sR::synapse0x379bb30() {
   return (neuron0x377d7e0()*0.00958099);
}

double NNfunction_ns_chi03_sR::synapse0x379bb70() {
   return (neuron0x377db20()*-0.0846298);
}

double NNfunction_ns_chi03_sR::synapse0x379bbb0() {
   return (neuron0x377de60()*0.017518);
}

double NNfunction_ns_chi03_sR::synapse0x379bbf0() {
   return (neuron0x377e1a0()*-0.0815327);
}

double NNfunction_ns_chi03_sR::synapse0x379bc30() {
   return (neuron0x377e4e0()*0.00220069);
}

double NNfunction_ns_chi03_sR::synapse0x379bc70() {
   return (neuron0x377e820()*0.0445991);
}

double NNfunction_ns_chi03_sR::synapse0x379bcb0() {
   return (neuron0x377eb60()*0.0282134);
}

double NNfunction_ns_chi03_sR::synapse0x379bcf0() {
   return (neuron0x377eea0()*0.180524);
}

double NNfunction_ns_chi03_sR::synapse0x379bd30() {
   return (neuron0x377f1e0()*-0.0662978);
}

double NNfunction_ns_chi03_sR::synapse0x379bd70() {
   return (neuron0x377f520()*0.0289834);
}

double NNfunction_ns_chi03_sR::synapse0x379bdb0() {
   return (neuron0x377f860()*0.0545409);
}

double NNfunction_ns_chi03_sR::synapse0x379b840() {
   return (neuron0x377fba0()*0.00177251);
}

double NNfunction_ns_chi03_sR::synapse0x379b880() {
   return (neuron0x3780100()*0.0297586);
}

double NNfunction_ns_chi03_sR::synapse0x379bf00() {
   return (neuron0x3780320()*0.113479);
}

double NNfunction_ns_chi03_sR::synapse0x379bf40() {
   return (neuron0x3780660()*-0.0208511);
}

double NNfunction_ns_chi03_sR::synapse0x379bf80() {
   return (neuron0x37809a0()*0.103858);
}

double NNfunction_ns_chi03_sR::synapse0x379bfc0() {
   return (neuron0x3780ce0()*-0.00353335);
}

double NNfunction_ns_chi03_sR::synapse0x379c000() {
   return (neuron0x3781020()*0.0402651);
}

double NNfunction_ns_chi03_sR::synapse0x379c040() {
   return (neuron0x3781360()*0.174982);
}

double NNfunction_ns_chi03_sR::synapse0x379c3c0() {
   return (neuron0x377c7a0()*0.0131132);
}

double NNfunction_ns_chi03_sR::synapse0x379c400() {
   return (neuron0x377cae0()*-0.106496);
}

double NNfunction_ns_chi03_sR::synapse0x379c440() {
   return (neuron0x377ce20()*-0.0161919);
}

double NNfunction_ns_chi03_sR::synapse0x379c480() {
   return (neuron0x377d160()*-5.52475);
}

double NNfunction_ns_chi03_sR::synapse0x379c4c0() {
   return (neuron0x377d4a0()*-0.00471126);
}

double NNfunction_ns_chi03_sR::synapse0x379c500() {
   return (neuron0x377d7e0()*-0.00255775);
}

double NNfunction_ns_chi03_sR::synapse0x379c540() {
   return (neuron0x377db20()*0.0958867);
}

double NNfunction_ns_chi03_sR::synapse0x379c580() {
   return (neuron0x377de60()*-0.00733287);
}

double NNfunction_ns_chi03_sR::synapse0x379c5c0() {
   return (neuron0x377e1a0()*0.0483105);
}

double NNfunction_ns_chi03_sR::synapse0x379c600() {
   return (neuron0x377e4e0()*-0.0493768);
}

double NNfunction_ns_chi03_sR::synapse0x379c640() {
   return (neuron0x377e820()*-0.0506767);
}

double NNfunction_ns_chi03_sR::synapse0x379c680() {
   return (neuron0x377eb60()*-0.0178841);
}

double NNfunction_ns_chi03_sR::synapse0x379c6c0() {
   return (neuron0x377eea0()*-0.119736);
}

double NNfunction_ns_chi03_sR::synapse0x379c700() {
   return (neuron0x377f1e0()*0.0156978);
}

double NNfunction_ns_chi03_sR::synapse0x379c740() {
   return (neuron0x377f520()*0.0501512);
}

double NNfunction_ns_chi03_sR::synapse0x379c780() {
   return (neuron0x377f860()*-0.0358786);
}

double NNfunction_ns_chi03_sR::synapse0x379c210() {
   return (neuron0x377fba0()*-0.0671919);
}

double NNfunction_ns_chi03_sR::synapse0x379c250() {
   return (neuron0x3780100()*0.00504292);
}

double NNfunction_ns_chi03_sR::synapse0x379c8d0() {
   return (neuron0x3780320()*-1.02222);
}

double NNfunction_ns_chi03_sR::synapse0x379c910() {
   return (neuron0x3780660()*-0.00820624);
}

double NNfunction_ns_chi03_sR::synapse0x379c950() {
   return (neuron0x37809a0()*-0.0901232);
}

double NNfunction_ns_chi03_sR::synapse0x379c990() {
   return (neuron0x3780ce0()*0.0107846);
}

double NNfunction_ns_chi03_sR::synapse0x379c9d0() {
   return (neuron0x3781020()*-0.00502912);
}

double NNfunction_ns_chi03_sR::synapse0x379ca10() {
   return (neuron0x3781360()*-0.0550845);
}

double NNfunction_ns_chi03_sR::synapse0x379cd90() {
   return (neuron0x377c7a0()*0.856078);
}

double NNfunction_ns_chi03_sR::synapse0x379cdd0() {
   return (neuron0x377cae0()*-0.889129);
}

double NNfunction_ns_chi03_sR::synapse0x379ce10() {
   return (neuron0x377ce20()*-1.43684);
}

double NNfunction_ns_chi03_sR::synapse0x379ce50() {
   return (neuron0x377d160()*-0.4198);
}

double NNfunction_ns_chi03_sR::synapse0x379ce90() {
   return (neuron0x377d4a0()*-0.334934);
}

double NNfunction_ns_chi03_sR::synapse0x379ced0() {
   return (neuron0x377d7e0()*1.41831);
}

double NNfunction_ns_chi03_sR::synapse0x379cf10() {
   return (neuron0x377db20()*-0.328911);
}

double NNfunction_ns_chi03_sR::synapse0x379cf50() {
   return (neuron0x377de60()*0.497959);
}

double NNfunction_ns_chi03_sR::synapse0x379cf90() {
   return (neuron0x377e1a0()*-0.224961);
}

double NNfunction_ns_chi03_sR::synapse0x379cfd0() {
   return (neuron0x377e4e0()*1.24206);
}

double NNfunction_ns_chi03_sR::synapse0x379d010() {
   return (neuron0x377e820()*-0.814889);
}

double NNfunction_ns_chi03_sR::synapse0x379d050() {
   return (neuron0x377eb60()*0.520602);
}

double NNfunction_ns_chi03_sR::synapse0x379d090() {
   return (neuron0x377eea0()*-0.606529);
}

double NNfunction_ns_chi03_sR::synapse0x379d0d0() {
   return (neuron0x377f1e0()*-0.672422);
}

double NNfunction_ns_chi03_sR::synapse0x379d110() {
   return (neuron0x377f520()*0.841692);
}

double NNfunction_ns_chi03_sR::synapse0x379d150() {
   return (neuron0x377f860()*-0.356251);
}

double NNfunction_ns_chi03_sR::synapse0x379cbe0() {
   return (neuron0x377fba0()*0.903716);
}

double NNfunction_ns_chi03_sR::synapse0x379cc20() {
   return (neuron0x3780100()*0.263765);
}

double NNfunction_ns_chi03_sR::synapse0x379d2a0() {
   return (neuron0x3780320()*0.403936);
}

double NNfunction_ns_chi03_sR::synapse0x379d2e0() {
   return (neuron0x3780660()*0.169795);
}

double NNfunction_ns_chi03_sR::synapse0x379d320() {
   return (neuron0x37809a0()*-1.03977);
}

double NNfunction_ns_chi03_sR::synapse0x379d360() {
   return (neuron0x3780ce0()*0.421111);
}

double NNfunction_ns_chi03_sR::synapse0x379d3a0() {
   return (neuron0x3781020()*-0.533474);
}

double NNfunction_ns_chi03_sR::synapse0x379d3e0() {
   return (neuron0x3781360()*0.180188);
}

double NNfunction_ns_chi03_sR::synapse0x379d760() {
   return (neuron0x377c7a0()*0.417123);
}

double NNfunction_ns_chi03_sR::synapse0x379d7a0() {
   return (neuron0x377cae0()*-0.000426769);
}

double NNfunction_ns_chi03_sR::synapse0x379d7e0() {
   return (neuron0x377ce20()*-0.0169763);
}

double NNfunction_ns_chi03_sR::synapse0x379d820() {
   return (neuron0x377d160()*1.37166);
}

double NNfunction_ns_chi03_sR::synapse0x379d860() {
   return (neuron0x377d4a0()*0.00853013);
}

double NNfunction_ns_chi03_sR::synapse0x379d8a0() {
   return (neuron0x377d7e0()*0.0453015);
}

double NNfunction_ns_chi03_sR::synapse0x379d8e0() {
   return (neuron0x377db20()*0.906865);
}

double NNfunction_ns_chi03_sR::synapse0x379d920() {
   return (neuron0x377de60()*0.298413);
}

double NNfunction_ns_chi03_sR::synapse0x379d960() {
   return (neuron0x377e1a0()*-0.0842725);
}

double NNfunction_ns_chi03_sR::synapse0x379d9a0() {
   return (neuron0x377e4e0()*-0.532296);
}

double NNfunction_ns_chi03_sR::synapse0x379d9e0() {
   return (neuron0x377e820()*1.07509);
}

double NNfunction_ns_chi03_sR::synapse0x379da20() {
   return (neuron0x377eb60()*-0.580823);
}

double NNfunction_ns_chi03_sR::synapse0x379da60() {
   return (neuron0x377eea0()*-0.225881);
}

double NNfunction_ns_chi03_sR::synapse0x379daa0() {
   return (neuron0x377f1e0()*1.05567);
}

double NNfunction_ns_chi03_sR::synapse0x379dae0() {
   return (neuron0x377f520()*-0.272523);
}

double NNfunction_ns_chi03_sR::synapse0x379db20() {
   return (neuron0x377f860()*-0.0734606);
}

double NNfunction_ns_chi03_sR::synapse0x379d5b0() {
   return (neuron0x377fba0()*-1.07747);
}

double NNfunction_ns_chi03_sR::synapse0x379d5f0() {
   return (neuron0x3780100()*0.687411);
}

double NNfunction_ns_chi03_sR::synapse0x379dc70() {
   return (neuron0x3780320()*-0.78131);
}

double NNfunction_ns_chi03_sR::synapse0x379dcb0() {
   return (neuron0x3780660()*0.389352);
}

double NNfunction_ns_chi03_sR::synapse0x379dcf0() {
   return (neuron0x37809a0()*-0.0454187);
}

double NNfunction_ns_chi03_sR::synapse0x379dd30() {
   return (neuron0x3780ce0()*-0.952699);
}

double NNfunction_ns_chi03_sR::synapse0x379dd70() {
   return (neuron0x3781020()*0.0436989);
}

double NNfunction_ns_chi03_sR::synapse0x379ddb0() {
   return (neuron0x3781360()*-0.173109);
}

double NNfunction_ns_chi03_sR::synapse0x3786860() {
   return (neuron0x377c7a0()*-0.180381);
}

double NNfunction_ns_chi03_sR::synapse0x37868a0() {
   return (neuron0x377cae0()*0.416922);
}

double NNfunction_ns_chi03_sR::synapse0x37868e0() {
   return (neuron0x377ce20()*0.081716);
}

double NNfunction_ns_chi03_sR::synapse0x3786920() {
   return (neuron0x377d160()*0.00373912);
}

double NNfunction_ns_chi03_sR::synapse0x3786960() {
   return (neuron0x377d4a0()*-0.144279);
}

double NNfunction_ns_chi03_sR::synapse0x37869a0() {
   return (neuron0x377d7e0()*-0.0288143);
}

double NNfunction_ns_chi03_sR::synapse0x37869e0() {
   return (neuron0x377db20()*-0.025942);
}

double NNfunction_ns_chi03_sR::synapse0x3786a20() {
   return (neuron0x377de60()*-0.0730922);
}

double NNfunction_ns_chi03_sR::synapse0x379e540() {
   return (neuron0x377e1a0()*-0.0977313);
}

double NNfunction_ns_chi03_sR::synapse0x379e580() {
   return (neuron0x377e4e0()*-0.0476113);
}

double NNfunction_ns_chi03_sR::synapse0x379e5c0() {
   return (neuron0x377e820()*-0.00270245);
}

double NNfunction_ns_chi03_sR::synapse0x379e600() {
   return (neuron0x377eb60()*0.0818709);
}

double NNfunction_ns_chi03_sR::synapse0x379e640() {
   return (neuron0x377eea0()*0.114006);
}

double NNfunction_ns_chi03_sR::synapse0x379e680() {
   return (neuron0x377f1e0()*0.0309669);
}

double NNfunction_ns_chi03_sR::synapse0x379e6c0() {
   return (neuron0x377f520()*0.0977553);
}

double NNfunction_ns_chi03_sR::synapse0x379e700() {
   return (neuron0x377f860()*0.0720875);
}

double NNfunction_ns_chi03_sR::synapse0x379df80() {
   return (neuron0x377fba0()*0.0206459);
}

double NNfunction_ns_chi03_sR::synapse0x379dfc0() {
   return (neuron0x3780100()*-0.216921);
}

double NNfunction_ns_chi03_sR::synapse0x379e850() {
   return (neuron0x3780320()*3.18028);
}

double NNfunction_ns_chi03_sR::synapse0x379e890() {
   return (neuron0x3780660()*-0.0142121);
}

double NNfunction_ns_chi03_sR::synapse0x379e8d0() {
   return (neuron0x37809a0()*0.0586594);
}

double NNfunction_ns_chi03_sR::synapse0x379e910() {
   return (neuron0x3780ce0()*0.0221243);
}

double NNfunction_ns_chi03_sR::synapse0x379e950() {
   return (neuron0x3781020()*-0.0602301);
}

double NNfunction_ns_chi03_sR::synapse0x379e990() {
   return (neuron0x3781360()*0.705138);
}

double NNfunction_ns_chi03_sR::synapse0x379ed10() {
   return (neuron0x377c7a0()*-0.030085);
}

double NNfunction_ns_chi03_sR::synapse0x379ed50() {
   return (neuron0x377cae0()*0.661056);
}

double NNfunction_ns_chi03_sR::synapse0x379ed90() {
   return (neuron0x377ce20()*-3.52491);
}

double NNfunction_ns_chi03_sR::synapse0x379edd0() {
   return (neuron0x377d160()*0.0103272);
}

double NNfunction_ns_chi03_sR::synapse0x379ee10() {
   return (neuron0x377d4a0()*-0.0226021);
}

double NNfunction_ns_chi03_sR::synapse0x379ee50() {
   return (neuron0x377d7e0()*-0.00134395);
}

double NNfunction_ns_chi03_sR::synapse0x379ee90() {
   return (neuron0x377db20()*-0.0222939);
}

double NNfunction_ns_chi03_sR::synapse0x379eed0() {
   return (neuron0x377de60()*-0.0161107);
}

double NNfunction_ns_chi03_sR::synapse0x379ef10() {
   return (neuron0x377e1a0()*0.00158743);
}

double NNfunction_ns_chi03_sR::synapse0x379ef50() {
   return (neuron0x377e4e0()*0.0127113);
}

double NNfunction_ns_chi03_sR::synapse0x379ef90() {
   return (neuron0x377e820()*-0.00565043);
}

double NNfunction_ns_chi03_sR::synapse0x379efd0() {
   return (neuron0x377eb60()*-0.0162942);
}

double NNfunction_ns_chi03_sR::synapse0x379f010() {
   return (neuron0x377eea0()*-0.0277031);
}

double NNfunction_ns_chi03_sR::synapse0x379f050() {
   return (neuron0x377f1e0()*0.00171512);
}

double NNfunction_ns_chi03_sR::synapse0x379f090() {
   return (neuron0x377f520()*0.00529711);
}

double NNfunction_ns_chi03_sR::synapse0x379f0d0() {
   return (neuron0x377f860()*0.0252988);
}

double NNfunction_ns_chi03_sR::synapse0x379eb60() {
   return (neuron0x377fba0()*0.0153482);
}

double NNfunction_ns_chi03_sR::synapse0x379eba0() {
   return (neuron0x3780100()*-0.0404665);
}

double NNfunction_ns_chi03_sR::synapse0x379f220() {
   return (neuron0x3780320()*-0.310951);
}

double NNfunction_ns_chi03_sR::synapse0x379f260() {
   return (neuron0x3780660()*0.0114262);
}

double NNfunction_ns_chi03_sR::synapse0x379f2a0() {
   return (neuron0x37809a0()*0.00113873);
}

double NNfunction_ns_chi03_sR::synapse0x379f2e0() {
   return (neuron0x3780ce0()*0.0496923);
}

double NNfunction_ns_chi03_sR::synapse0x379f320() {
   return (neuron0x3781020()*-0.0210446);
}

double NNfunction_ns_chi03_sR::synapse0x379f360() {
   return (neuron0x3781360()*-0.0315903);
}

double NNfunction_ns_chi03_sR::synapse0x379f6e0() {
   return (neuron0x377c7a0()*0.252067);
}

double NNfunction_ns_chi03_sR::synapse0x379f720() {
   return (neuron0x377cae0()*0.778251);
}

double NNfunction_ns_chi03_sR::synapse0x379f760() {
   return (neuron0x377ce20()*-0.243771);
}

double NNfunction_ns_chi03_sR::synapse0x379f7a0() {
   return (neuron0x377d160()*-0.105308);
}

double NNfunction_ns_chi03_sR::synapse0x379f7e0() {
   return (neuron0x377d4a0()*-0.478051);
}

double NNfunction_ns_chi03_sR::synapse0x379f820() {
   return (neuron0x377d7e0()*0.865772);
}

double NNfunction_ns_chi03_sR::synapse0x379f860() {
   return (neuron0x377db20()*-0.0823419);
}

double NNfunction_ns_chi03_sR::synapse0x379f8a0() {
   return (neuron0x377de60()*-0.429451);
}

double NNfunction_ns_chi03_sR::synapse0x379f8e0() {
   return (neuron0x377e1a0()*-0.142552);
}

double NNfunction_ns_chi03_sR::synapse0x379f920() {
   return (neuron0x377e4e0()*0.156234);
}

double NNfunction_ns_chi03_sR::synapse0x379f960() {
   return (neuron0x377e820()*-0.343322);
}

double NNfunction_ns_chi03_sR::synapse0x379f9a0() {
   return (neuron0x377eb60()*-0.250939);
}

double NNfunction_ns_chi03_sR::synapse0x379f9e0() {
   return (neuron0x377eea0()*0.192621);
}

double NNfunction_ns_chi03_sR::synapse0x379fa20() {
   return (neuron0x377f1e0()*-0.820219);
}

double NNfunction_ns_chi03_sR::synapse0x379fa60() {
   return (neuron0x377f520()*-0.11354);
}

double NNfunction_ns_chi03_sR::synapse0x379faa0() {
   return (neuron0x377f860()*0.300524);
}

double NNfunction_ns_chi03_sR::synapse0x379f530() {
   return (neuron0x377fba0()*0.509366);
}

double NNfunction_ns_chi03_sR::synapse0x379f570() {
   return (neuron0x3780100()*0.243741);
}

double NNfunction_ns_chi03_sR::synapse0x37900a0() {
   return (neuron0x3780320()*0.756985);
}

double NNfunction_ns_chi03_sR::synapse0x37900e0() {
   return (neuron0x3780660()*-0.745049);
}

double NNfunction_ns_chi03_sR::synapse0x3790120() {
   return (neuron0x37809a0()*-0.0455693);
}

double NNfunction_ns_chi03_sR::synapse0x3790160() {
   return (neuron0x3780ce0()*0.177104);
}

double NNfunction_ns_chi03_sR::synapse0x37901a0() {
   return (neuron0x3781020()*-0.454764);
}

double NNfunction_ns_chi03_sR::synapse0x37901e0() {
   return (neuron0x3781360()*-0.918866);
}

double NNfunction_ns_chi03_sR::synapse0x3790560() {
   return (neuron0x377c7a0()*1.1771);
}

double NNfunction_ns_chi03_sR::synapse0x37905a0() {
   return (neuron0x377cae0()*0.614715);
}

double NNfunction_ns_chi03_sR::synapse0x37905e0() {
   return (neuron0x377ce20()*0.269465);
}

double NNfunction_ns_chi03_sR::synapse0x3790620() {
   return (neuron0x377d160()*0.198941);
}

double NNfunction_ns_chi03_sR::synapse0x3790660() {
   return (neuron0x377d4a0()*0.366968);
}

double NNfunction_ns_chi03_sR::synapse0x37906a0() {
   return (neuron0x377d7e0()*-1.01489);
}

double NNfunction_ns_chi03_sR::synapse0x37906e0() {
   return (neuron0x377db20()*0.220086);
}

double NNfunction_ns_chi03_sR::synapse0x3790720() {
   return (neuron0x377de60()*-1.02987);
}

double NNfunction_ns_chi03_sR::synapse0x3790760() {
   return (neuron0x377e1a0()*-0.830846);
}

double NNfunction_ns_chi03_sR::synapse0x37907a0() {
   return (neuron0x377e4e0()*-0.246469);
}

double NNfunction_ns_chi03_sR::synapse0x37907e0() {
   return (neuron0x377e820()*-0.0328626);
}

double NNfunction_ns_chi03_sR::synapse0x3790820() {
   return (neuron0x377eb60()*1.20242);
}

double NNfunction_ns_chi03_sR::synapse0x3790860() {
   return (neuron0x377eea0()*-0.29369);
}

double NNfunction_ns_chi03_sR::synapse0x37908a0() {
   return (neuron0x377f1e0()*0.494011);
}

double NNfunction_ns_chi03_sR::synapse0x37908e0() {
   return (neuron0x377f520()*0.0796681);
}

double NNfunction_ns_chi03_sR::synapse0x3790920() {
   return (neuron0x377f860()*-0.326517);
}

double NNfunction_ns_chi03_sR::synapse0x37903b0() {
   return (neuron0x377fba0()*-0.101914);
}

double NNfunction_ns_chi03_sR::synapse0x37903f0() {
   return (neuron0x3780100()*0.221876);
}

double NNfunction_ns_chi03_sR::synapse0x3790a70() {
   return (neuron0x3780320()*-1.89942);
}

double NNfunction_ns_chi03_sR::synapse0x3790ab0() {
   return (neuron0x3780660()*-0.120794);
}

double NNfunction_ns_chi03_sR::synapse0x3790af0() {
   return (neuron0x37809a0()*0.805406);
}

double NNfunction_ns_chi03_sR::synapse0x3790b30() {
   return (neuron0x3780ce0()*-0.936652);
}

double NNfunction_ns_chi03_sR::synapse0x3790b70() {
   return (neuron0x3781020()*0.366169);
}

double NNfunction_ns_chi03_sR::synapse0x3790bb0() {
   return (neuron0x3781360()*-0.283223);
}

double NNfunction_ns_chi03_sR::synapse0x3790f30() {
   return (neuron0x377c7a0()*0.0548721);
}

double NNfunction_ns_chi03_sR::synapse0x3790f70() {
   return (neuron0x377cae0()*-1.8739);
}

double NNfunction_ns_chi03_sR::synapse0x3790fb0() {
   return (neuron0x377ce20()*-0.0845457);
}

double NNfunction_ns_chi03_sR::synapse0x3790ff0() {
   return (neuron0x377d160()*0.67756);
}

double NNfunction_ns_chi03_sR::synapse0x3791030() {
   return (neuron0x377d4a0()*0.194153);
}

double NNfunction_ns_chi03_sR::synapse0x3791070() {
   return (neuron0x377d7e0()*-0.134607);
}

double NNfunction_ns_chi03_sR::synapse0x37910b0() {
   return (neuron0x377db20()*0.488694);
}

double NNfunction_ns_chi03_sR::synapse0x37910f0() {
   return (neuron0x377de60()*0.32684);
}

double NNfunction_ns_chi03_sR::synapse0x3791130() {
   return (neuron0x377e1a0()*-0.432412);
}

double NNfunction_ns_chi03_sR::synapse0x3791170() {
   return (neuron0x377e4e0()*-0.198465);
}

double NNfunction_ns_chi03_sR::synapse0x37911b0() {
   return (neuron0x377e820()*-0.18684);
}

double NNfunction_ns_chi03_sR::synapse0x37911f0() {
   return (neuron0x377eb60()*0.111209);
}

double NNfunction_ns_chi03_sR::synapse0x3791230() {
   return (neuron0x377eea0()*0.0128397);
}

double NNfunction_ns_chi03_sR::synapse0x3791270() {
   return (neuron0x377f1e0()*0.0840516);
}

double NNfunction_ns_chi03_sR::synapse0x37912b0() {
   return (neuron0x377f520()*0.348053);
}

double NNfunction_ns_chi03_sR::synapse0x37912f0() {
   return (neuron0x377f860()*0.519105);
}

double NNfunction_ns_chi03_sR::synapse0x3790d80() {
   return (neuron0x377fba0()*-0.0716742);
}

double NNfunction_ns_chi03_sR::synapse0x3790dc0() {
   return (neuron0x3780100()*-0.00935708);
}

double NNfunction_ns_chi03_sR::synapse0x3791440() {
   return (neuron0x3780320()*0.354771);
}

double NNfunction_ns_chi03_sR::synapse0x3791480() {
   return (neuron0x3780660()*-0.0216403);
}

double NNfunction_ns_chi03_sR::synapse0x37914c0() {
   return (neuron0x37809a0()*0.191836);
}

double NNfunction_ns_chi03_sR::synapse0x3791500() {
   return (neuron0x3780ce0()*0.337318);
}

double NNfunction_ns_chi03_sR::synapse0x3791540() {
   return (neuron0x3781020()*-0.180859);
}

double NNfunction_ns_chi03_sR::synapse0x3791580() {
   return (neuron0x3781360()*-0.735069);
}

double NNfunction_ns_chi03_sR::synapse0x3791900() {
   return (neuron0x377c7a0()*-0.0808675);
}

double NNfunction_ns_chi03_sR::synapse0x3791940() {
   return (neuron0x377cae0()*-0.864323);
}

double NNfunction_ns_chi03_sR::synapse0x3791980() {
   return (neuron0x377ce20()*0.789904);
}

double NNfunction_ns_chi03_sR::synapse0x37919c0() {
   return (neuron0x377d160()*-0.634424);
}

double NNfunction_ns_chi03_sR::synapse0x3791a00() {
   return (neuron0x377d4a0()*0.152557);
}

double NNfunction_ns_chi03_sR::synapse0x3791a40() {
   return (neuron0x377d7e0()*-0.16619);
}

double NNfunction_ns_chi03_sR::synapse0x3791a80() {
   return (neuron0x377db20()*0.336624);
}

double NNfunction_ns_chi03_sR::synapse0x3791ac0() {
   return (neuron0x377de60()*-0.600387);
}

double NNfunction_ns_chi03_sR::synapse0x3791b00() {
   return (neuron0x377e1a0()*0.980988);
}

double NNfunction_ns_chi03_sR::synapse0x3791b40() {
   return (neuron0x377e4e0()*-0.58562);
}

double NNfunction_ns_chi03_sR::synapse0x3791b80() {
   return (neuron0x377e820()*1.23319);
}

double NNfunction_ns_chi03_sR::synapse0x3791bc0() {
   return (neuron0x377eb60()*0.199705);
}

double NNfunction_ns_chi03_sR::synapse0x3791c00() {
   return (neuron0x377eea0()*0.0938555);
}

double NNfunction_ns_chi03_sR::synapse0x3791c40() {
   return (neuron0x377f1e0()*-0.0166777);
}

double NNfunction_ns_chi03_sR::synapse0x3791c80() {
   return (neuron0x377f520()*0.100027);
}

double NNfunction_ns_chi03_sR::synapse0x3791cc0() {
   return (neuron0x377f860()*-0.0750769);
}

double NNfunction_ns_chi03_sR::synapse0x3791750() {
   return (neuron0x377fba0()*0.100945);
}

double NNfunction_ns_chi03_sR::synapse0x3791790() {
   return (neuron0x3780100()*-1.00137);
}

double NNfunction_ns_chi03_sR::synapse0x3791e10() {
   return (neuron0x3780320()*-0.0737822);
}

double NNfunction_ns_chi03_sR::synapse0x3791e50() {
   return (neuron0x3780660()*0.836763);
}

double NNfunction_ns_chi03_sR::synapse0x3791e90() {
   return (neuron0x37809a0()*-0.230902);
}

double NNfunction_ns_chi03_sR::synapse0x3791ed0() {
   return (neuron0x3780ce0()*-0.214041);
}

double NNfunction_ns_chi03_sR::synapse0x3791f10() {
   return (neuron0x3781020()*0.348863);
}

double NNfunction_ns_chi03_sR::synapse0x3791f50() {
   return (neuron0x3781360()*0.525393);
}

double NNfunction_ns_chi03_sR::synapse0x37a3e20() {
   return (neuron0x377c7a0()*-0.0641505);
}

double NNfunction_ns_chi03_sR::synapse0x37a3e60() {
   return (neuron0x377cae0()*1.30002);
}

double NNfunction_ns_chi03_sR::synapse0x37a3ea0() {
   return (neuron0x377ce20()*-0.221275);
}

double NNfunction_ns_chi03_sR::synapse0x37a3ee0() {
   return (neuron0x377d160()*0.0109525);
}

double NNfunction_ns_chi03_sR::synapse0x37a3f20() {
   return (neuron0x377d4a0()*0.027995);
}

double NNfunction_ns_chi03_sR::synapse0x37a3f60() {
   return (neuron0x377d7e0()*0.0235244);
}

double NNfunction_ns_chi03_sR::synapse0x37a3fa0() {
   return (neuron0x377db20()*0.0227997);
}

double NNfunction_ns_chi03_sR::synapse0x37a3fe0() {
   return (neuron0x377de60()*0.00760573);
}

double NNfunction_ns_chi03_sR::synapse0x37a4020() {
   return (neuron0x377e1a0()*-0.00608619);
}

double NNfunction_ns_chi03_sR::synapse0x37a4060() {
   return (neuron0x377e4e0()*0.0111339);
}

double NNfunction_ns_chi03_sR::synapse0x37a40a0() {
   return (neuron0x377e820()*-0.0230334);
}

double NNfunction_ns_chi03_sR::synapse0x37a40e0() {
   return (neuron0x377eb60()*-0.0222757);
}

double NNfunction_ns_chi03_sR::synapse0x37a4120() {
   return (neuron0x377eea0()*0.018641);
}

double NNfunction_ns_chi03_sR::synapse0x37a4160() {
   return (neuron0x377f1e0()*-0.0184855);
}

double NNfunction_ns_chi03_sR::synapse0x37a41a0() {
   return (neuron0x377f520()*0.0521458);
}

double NNfunction_ns_chi03_sR::synapse0x37a41e0() {
   return (neuron0x377f860()*0.0408209);
}

double NNfunction_ns_chi03_sR::synapse0x3791f90() {
   return (neuron0x377fba0()*-0.00679322);
}

double NNfunction_ns_chi03_sR::synapse0x3791fd0() {
   return (neuron0x3780100()*-0.0056916);
}

double NNfunction_ns_chi03_sR::synapse0x37a4330() {
   return (neuron0x3780320()*-0.364706);
}

double NNfunction_ns_chi03_sR::synapse0x37a4370() {
   return (neuron0x3780660()*-0.0340183);
}

double NNfunction_ns_chi03_sR::synapse0x37a43b0() {
   return (neuron0x37809a0()*-0.0125074);
}

double NNfunction_ns_chi03_sR::synapse0x37a43f0() {
   return (neuron0x3780ce0()*0.0271435);
}

double NNfunction_ns_chi03_sR::synapse0x37a4430() {
   return (neuron0x3781020()*0.0196164);
}

double NNfunction_ns_chi03_sR::synapse0x37a4470() {
   return (neuron0x3781360()*0.833053);
}

double NNfunction_ns_chi03_sR::synapse0x37a47f0() {
   return (neuron0x377c7a0()*0.358212);
}

double NNfunction_ns_chi03_sR::synapse0x37a4830() {
   return (neuron0x377cae0()*0.172982);
}

double NNfunction_ns_chi03_sR::synapse0x37a4870() {
   return (neuron0x377ce20()*0.554325);
}

double NNfunction_ns_chi03_sR::synapse0x37a48b0() {
   return (neuron0x377d160()*0.245387);
}

double NNfunction_ns_chi03_sR::synapse0x37a48f0() {
   return (neuron0x377d4a0()*-0.589757);
}

double NNfunction_ns_chi03_sR::synapse0x37a4930() {
   return (neuron0x377d7e0()*-0.0519087);
}

double NNfunction_ns_chi03_sR::synapse0x37a4970() {
   return (neuron0x377db20()*-0.189196);
}

double NNfunction_ns_chi03_sR::synapse0x37a49b0() {
   return (neuron0x377de60()*-0.298442);
}

double NNfunction_ns_chi03_sR::synapse0x37a49f0() {
   return (neuron0x377e1a0()*0.0825567);
}

double NNfunction_ns_chi03_sR::synapse0x37a4a30() {
   return (neuron0x377e4e0()*0.145969);
}

double NNfunction_ns_chi03_sR::synapse0x37a4a70() {
   return (neuron0x377e820()*-0.10422);
}

double NNfunction_ns_chi03_sR::synapse0x37a4ab0() {
   return (neuron0x377eb60()*0.457971);
}

double NNfunction_ns_chi03_sR::synapse0x37a4af0() {
   return (neuron0x377eea0()*0.0884658);
}

double NNfunction_ns_chi03_sR::synapse0x37a4b30() {
   return (neuron0x377f1e0()*-0.702636);
}

double NNfunction_ns_chi03_sR::synapse0x37a4b70() {
   return (neuron0x377f520()*-0.1713);
}

double NNfunction_ns_chi03_sR::synapse0x37a4bb0() {
   return (neuron0x377f860()*0.617698);
}

double NNfunction_ns_chi03_sR::synapse0x37a4640() {
   return (neuron0x377fba0()*-0.381779);
}

double NNfunction_ns_chi03_sR::synapse0x37a4680() {
   return (neuron0x3780100()*-0.0265613);
}

double NNfunction_ns_chi03_sR::synapse0x37a4d00() {
   return (neuron0x3780320()*-0.601769);
}

double NNfunction_ns_chi03_sR::synapse0x37a4d40() {
   return (neuron0x3780660()*0.0280601);
}

double NNfunction_ns_chi03_sR::synapse0x37a4d80() {
   return (neuron0x37809a0()*0.29626);
}

double NNfunction_ns_chi03_sR::synapse0x37a4dc0() {
   return (neuron0x3780ce0()*-0.0705428);
}

double NNfunction_ns_chi03_sR::synapse0x37a4e00() {
   return (neuron0x3781020()*0.031405);
}

double NNfunction_ns_chi03_sR::synapse0x37a4e40() {
   return (neuron0x3781360()*0.28045);
}

double NNfunction_ns_chi03_sR::synapse0x37a51c0() {
   return (neuron0x377c7a0()*0.0923785);
}

double NNfunction_ns_chi03_sR::synapse0x37a5200() {
   return (neuron0x377cae0()*-0.273128);
}

double NNfunction_ns_chi03_sR::synapse0x37a5240() {
   return (neuron0x377ce20()*0.255485);
}

double NNfunction_ns_chi03_sR::synapse0x37a5280() {
   return (neuron0x377d160()*1.03821);
}

double NNfunction_ns_chi03_sR::synapse0x37a52c0() {
   return (neuron0x377d4a0()*-1.18291);
}

double NNfunction_ns_chi03_sR::synapse0x37a5300() {
   return (neuron0x377d7e0()*-0.463347);
}

double NNfunction_ns_chi03_sR::synapse0x37a5340() {
   return (neuron0x377db20()*0.132605);
}

double NNfunction_ns_chi03_sR::synapse0x37a5380() {
   return (neuron0x377de60()*-0.920135);
}

double NNfunction_ns_chi03_sR::synapse0x37a53c0() {
   return (neuron0x377e1a0()*0.0791521);
}

double NNfunction_ns_chi03_sR::synapse0x37a5400() {
   return (neuron0x377e4e0()*-0.202662);
}

double NNfunction_ns_chi03_sR::synapse0x37a5440() {
   return (neuron0x377e820()*0.610411);
}

double NNfunction_ns_chi03_sR::synapse0x37a5480() {
   return (neuron0x377eb60()*0.0694756);
}

double NNfunction_ns_chi03_sR::synapse0x37a54c0() {
   return (neuron0x377eea0()*-0.711689);
}

double NNfunction_ns_chi03_sR::synapse0x37a5500() {
   return (neuron0x377f1e0()*-0.131175);
}

double NNfunction_ns_chi03_sR::synapse0x37a5540() {
   return (neuron0x377f520()*1.01216);
}

double NNfunction_ns_chi03_sR::synapse0x37a5580() {
   return (neuron0x377f860()*0.755499);
}

double NNfunction_ns_chi03_sR::synapse0x37a5010() {
   return (neuron0x377fba0()*0.163016);
}

double NNfunction_ns_chi03_sR::synapse0x37a5050() {
   return (neuron0x3780100()*-0.796326);
}

double NNfunction_ns_chi03_sR::synapse0x37a56d0() {
   return (neuron0x3780320()*2.33101);
}

double NNfunction_ns_chi03_sR::synapse0x37a5710() {
   return (neuron0x3780660()*-0.343178);
}

double NNfunction_ns_chi03_sR::synapse0x37a5750() {
   return (neuron0x37809a0()*-0.585151);
}

double NNfunction_ns_chi03_sR::synapse0x37a5790() {
   return (neuron0x3780ce0()*0.5746);
}

double NNfunction_ns_chi03_sR::synapse0x37a57d0() {
   return (neuron0x3781020()*-0.24168);
}

double NNfunction_ns_chi03_sR::synapse0x37a5810() {
   return (neuron0x3781360()*0.669017);
}

double NNfunction_ns_chi03_sR::synapse0x37a5b90() {
   return (neuron0x377c7a0()*-0.0851953);
}

double NNfunction_ns_chi03_sR::synapse0x37a5bd0() {
   return (neuron0x377cae0()*-1.21471);
}

double NNfunction_ns_chi03_sR::synapse0x37a5c10() {
   return (neuron0x377ce20()*-0.0655212);
}

double NNfunction_ns_chi03_sR::synapse0x37a5c50() {
   return (neuron0x377d160()*-0.0957045);
}

double NNfunction_ns_chi03_sR::synapse0x37a5c90() {
   return (neuron0x377d4a0()*0.00221342);
}

double NNfunction_ns_chi03_sR::synapse0x37a5cd0() {
   return (neuron0x377d7e0()*0.0273353);
}

double NNfunction_ns_chi03_sR::synapse0x37a5d10() {
   return (neuron0x377db20()*0.00291343);
}

double NNfunction_ns_chi03_sR::synapse0x37a5d50() {
   return (neuron0x377de60()*-0.0212257);
}

double NNfunction_ns_chi03_sR::synapse0x37a5d90() {
   return (neuron0x377e1a0()*0.0262316);
}

double NNfunction_ns_chi03_sR::synapse0x37a5dd0() {
   return (neuron0x377e4e0()*0.0181044);
}

double NNfunction_ns_chi03_sR::synapse0x37a5e10() {
   return (neuron0x377e820()*0.029505);
}

double NNfunction_ns_chi03_sR::synapse0x37a5e50() {
   return (neuron0x377eb60()*-0.00195388);
}

double NNfunction_ns_chi03_sR::synapse0x37a5e90() {
   return (neuron0x377eea0()*0.0199932);
}

double NNfunction_ns_chi03_sR::synapse0x37a5ed0() {
   return (neuron0x377f1e0()*-0.0414921);
}

double NNfunction_ns_chi03_sR::synapse0x37a5f10() {
   return (neuron0x377f520()*-0.0253004);
}

double NNfunction_ns_chi03_sR::synapse0x37a5f50() {
   return (neuron0x377f860()*0.00405565);
}

double NNfunction_ns_chi03_sR::synapse0x37a59e0() {
   return (neuron0x377fba0()*-0.000446019);
}

double NNfunction_ns_chi03_sR::synapse0x37a5a20() {
   return (neuron0x3780100()*0.0136863);
}

double NNfunction_ns_chi03_sR::synapse0x37a60a0() {
   return (neuron0x3780320()*0.0609693);
}

double NNfunction_ns_chi03_sR::synapse0x37a60e0() {
   return (neuron0x3780660()*-0.0429331);
}

double NNfunction_ns_chi03_sR::synapse0x37a6120() {
   return (neuron0x37809a0()*-0.00205243);
}

double NNfunction_ns_chi03_sR::synapse0x37a6160() {
   return (neuron0x3780ce0()*0.0164771);
}

double NNfunction_ns_chi03_sR::synapse0x37a61a0() {
   return (neuron0x3781020()*-0.0146075);
}

double NNfunction_ns_chi03_sR::synapse0x37a61e0() {
   return (neuron0x3781360()*0.536266);
}

double NNfunction_ns_chi03_sR::synapse0x35460f0() {
   return (neuron0x37817d0()*-1.92754);
}

double NNfunction_ns_chi03_sR::synapse0x3546130() {
   return (neuron0x3782120()*-3.25354);
}

double NNfunction_ns_chi03_sR::synapse0x3783c90() {
   return (neuron0x3782c00()*-0.311235);
}

double NNfunction_ns_chi03_sR::synapse0x3783cd0() {
   return (neuron0x37826a0()*0.0475927);
}

double NNfunction_ns_chi03_sR::synapse0x3784660() {
   return (neuron0x37839e0()*0.0402993);
}

double NNfunction_ns_chi03_sR::synapse0x37846a0() {
   return (neuron0x37843b0()*0.081755);
}

double NNfunction_ns_chi03_sR::synapse0x3785430() {
   return (neuron0x3785180()*-0.115441);
}

double NNfunction_ns_chi03_sR::synapse0x3785470() {
   return (neuron0x3785b50()*0.0953573);
}

double NNfunction_ns_chi03_sR::synapse0x3785e00() {
   return (neuron0x3786520()*-0.801406);
}

double NNfunction_ns_chi03_sR::synapse0x3785e40() {
   return (neuron0x3787000()*0.546124);
}

double NNfunction_ns_chi03_sR::synapse0x37867d0() {
   return (neuron0x37879d0()*0.00127205);
}

double NNfunction_ns_chi03_sR::synapse0x3786810() {
   return (neuron0x3784ab0()*0.0736702);
}

double NNfunction_ns_chi03_sR::synapse0x37872b0() {
   return (neuron0x3789580()*-0.0830337);
}

double NNfunction_ns_chi03_sR::synapse0x37872f0() {
   return (neuron0x3789f50()*-0.0551757);
}

double NNfunction_ns_chi03_sR::synapse0x3787c80() {
   return (neuron0x378a920()*1.00364);
}

double NNfunction_ns_chi03_sR::synapse0x3787cc0() {
   return (neuron0x378b2f0()*-0.0939606);
}

double NNfunction_ns_chi03_sR::synapse0x3784d60() {
   return (neuron0x378d100()*2.12536);
}

double NNfunction_ns_chi03_sR::synapse0x3784da0() {
   return (neuron0x378d3e0()*0.0180796);
}

double NNfunction_ns_chi03_sR::synapse0x3789830() {
   return (neuron0x378ddb0()*-0.0396245);
}

double NNfunction_ns_chi03_sR::synapse0x3789870() {
   return (neuron0x378e780()*-0.163464);
}

double NNfunction_ns_chi03_sR::synapse0x378a200() {
   return (neuron0x378f150()*-0.199204);
}

double NNfunction_ns_chi03_sR::synapse0x378a240() {
   return (neuron0x378fb20()*-0.681546);
}

double NNfunction_ns_chi03_sR::synapse0x378abd0() {
   return (neuron0x3788670()*0.0719606);
}

double NNfunction_ns_chi03_sR::synapse0x378ac10() {
   return (neuron0x3789040()*-0.0354329);
}

double NNfunction_ns_chi03_sR::synapse0x378b5a0() {
   return (neuron0x37928b0()*-0.078618);
}

double NNfunction_ns_chi03_sR::synapse0x378b5e0() {
   return (neuron0x3793280()*0.0868504);
}

double NNfunction_ns_chi03_sR::synapse0x377f740() {
   return (neuron0x3793c50()*0.170578);
}

double NNfunction_ns_chi03_sR::synapse0x377f780() {
   return (neuron0x3794620()*0.216045);
}

double NNfunction_ns_chi03_sR::synapse0x378d690() {
   return (neuron0x3794ff0()*0.0589562);
}

double NNfunction_ns_chi03_sR::synapse0x378d6d0() {
   return (neuron0x37959c0()*0.0770248);
}

double NNfunction_ns_chi03_sR::synapse0x378e060() {
   return (neuron0x3796390()*0.0829209);
}

double NNfunction_ns_chi03_sR::synapse0x378e0a0() {
   return (neuron0x3796d60()*0.765614);
}

double NNfunction_ns_chi03_sR::synapse0x378ea30() {
   return (neuron0x378cdf0()*0.00496153);
}

double NNfunction_ns_chi03_sR::synapse0x378ea70() {
   return (neuron0x3799940()*0.0239032);
}

double NNfunction_ns_chi03_sR::synapse0x378f400() {
   return (neuron0x379a310()*-0.11451);
}

double NNfunction_ns_chi03_sR::synapse0x378f440() {
   return (neuron0x379ace0()*0.0493473);
}

double NNfunction_ns_chi03_sR::synapse0x378fdd0() {
   return (neuron0x379b6b0()*-0.755179);
}

double NNfunction_ns_chi03_sR::synapse0x378fe10() {
   return (neuron0x379c080()*-0.64899);
}

double NNfunction_ns_chi03_sR::synapse0x3788920() {
   return (neuron0x379ca50()*0.0542348);
}

double NNfunction_ns_chi03_sR::synapse0x3788960() {
   return (neuron0x379d420()*0.0499151);
}

double NNfunction_ns_chi03_sR::synapse0x37921d0() {
   return (neuron0x379ddf0()*0.225064);
}

double NNfunction_ns_chi03_sR::synapse0x3792210() {
   return (neuron0x379e9d0()*-0.122034);
}

double NNfunction_ns_chi03_sR::synapse0x3792b60() {
   return (neuron0x379f3a0()*0.00534619);
}

double NNfunction_ns_chi03_sR::synapse0x3792ba0() {
   return (neuron0x3790220()*-0.0184612);
}

double NNfunction_ns_chi03_sR::synapse0x3793530() {
   return (neuron0x3790bf0()*-0.290603);
}

double NNfunction_ns_chi03_sR::synapse0x3793570() {
   return (neuron0x37915c0()*-0.0363917);
}

double NNfunction_ns_chi03_sR::synapse0x3793f00() {
   return (neuron0x37a3c00()*0.802848);
}

double NNfunction_ns_chi03_sR::synapse0x3793f40() {
   return (neuron0x37a44b0()*0.236414);
}

double NNfunction_ns_chi03_sR::synapse0x37948d0() {
   return (neuron0x37a4e80()*-0.0842119);
}

double NNfunction_ns_chi03_sR::synapse0x3794910() {
   return (neuron0x37a5850()*-0.0142209);
}

double NNfunction_ns_chi03_sR::synapse0x3797010() {
   return (neuron0x37817d0()*0.319701);
}

double NNfunction_ns_chi03_sR::synapse0x3797050() {
   return (neuron0x3782120()*-3.29478);
}

double NNfunction_ns_chi03_sR::synapse0x378c5d0() {
   return (neuron0x3782c00()*-0.102104);
}

double NNfunction_ns_chi03_sR::synapse0x378c610() {
   return (neuron0x37826a0()*0.0287098);
}

double NNfunction_ns_chi03_sR::synapse0x3799bf0() {
   return (neuron0x37839e0()*0.112521);
}

double NNfunction_ns_chi03_sR::synapse0x3799c30() {
   return (neuron0x37843b0()*0.107243);
}

double NNfunction_ns_chi03_sR::synapse0x379a5c0() {
   return (neuron0x3785180()*1.02813);
}

double NNfunction_ns_chi03_sR::synapse0x379a600() {
   return (neuron0x3785b50()*-0.00261873);
}

double NNfunction_ns_chi03_sR::synapse0x379af90() {
   return (neuron0x3786520()*-0.114855);
}

double NNfunction_ns_chi03_sR::synapse0x379afd0() {
   return (neuron0x3787000()*0.54991);
}

double NNfunction_ns_chi03_sR::synapse0x379b960() {
   return (neuron0x37879d0()*-0.0228307);
}

double NNfunction_ns_chi03_sR::synapse0x379b9a0() {
   return (neuron0x3784ab0()*0.757196);
}

double NNfunction_ns_chi03_sR::synapse0x379c330() {
   return (neuron0x3789580()*-0.0765373);
}

double NNfunction_ns_chi03_sR::synapse0x379c370() {
   return (neuron0x3789f50()*-0.110891);
}

double NNfunction_ns_chi03_sR::synapse0x379cd00() {
   return (neuron0x378a920()*1.96927);
}

double NNfunction_ns_chi03_sR::synapse0x379cd40() {
   return (neuron0x378b2f0()*-0.22309);
}

double NNfunction_ns_chi03_sR::synapse0x379d6d0() {
   return (neuron0x378d100()*4.10812);
}

double NNfunction_ns_chi03_sR::synapse0x379d710() {
   return (neuron0x378d3e0()*0.224501);
}

double NNfunction_ns_chi03_sR::synapse0x379e0a0() {
   return (neuron0x378ddb0()*0.00827131);
}

double NNfunction_ns_chi03_sR::synapse0x379e0e0() {
   return (neuron0x378e780()*-0.266577);
}

double NNfunction_ns_chi03_sR::synapse0x379ec80() {
   return (neuron0x378f150()*1.35004);
}

double NNfunction_ns_chi03_sR::synapse0x379ecc0() {
   return (neuron0x378fb20()*0.183442);
}

double NNfunction_ns_chi03_sR::synapse0x379f650() {
   return (neuron0x3788670()*0.154354);
}

double NNfunction_ns_chi03_sR::synapse0x379f690() {
   return (neuron0x3789040()*0.714451);
}

double NNfunction_ns_chi03_sR::synapse0x37904d0() {
   return (neuron0x37928b0()*1.89799);
}

double NNfunction_ns_chi03_sR::synapse0x3790510() {
   return (neuron0x3793280()*0.297101);
}

double NNfunction_ns_chi03_sR::synapse0x3790ea0() {
   return (neuron0x3793c50()*0.297689);
}

double NNfunction_ns_chi03_sR::synapse0x3790ee0() {
   return (neuron0x3794620()*2.16523);
}

double NNfunction_ns_chi03_sR::synapse0x3791870() {
   return (neuron0x3794ff0()*-0.0269438);
}

double NNfunction_ns_chi03_sR::synapse0x37918b0() {
   return (neuron0x37959c0()*0.247587);
}

double NNfunction_ns_chi03_sR::synapse0x37a3d90() {
   return (neuron0x3796390()*-0.106787);
}

double NNfunction_ns_chi03_sR::synapse0x37a3dd0() {
   return (neuron0x3796d60()*0.310043);
}

double NNfunction_ns_chi03_sR::synapse0x37a4760() {
   return (neuron0x378cdf0()*-0.091536);
}

double NNfunction_ns_chi03_sR::synapse0x37a47a0() {
   return (neuron0x3799940()*-0.277166);
}

double NNfunction_ns_chi03_sR::synapse0x37a5130() {
   return (neuron0x379a310()*-0.173971);
}

double NNfunction_ns_chi03_sR::synapse0x37a5170() {
   return (neuron0x379ace0()*0.236543);
}

double NNfunction_ns_chi03_sR::synapse0x37a5b00() {
   return (neuron0x379b6b0()*-1.25544);
}

double NNfunction_ns_chi03_sR::synapse0x37a5b40() {
   return (neuron0x379c080()*-0.837151);
}

double NNfunction_ns_chi03_sR::synapse0x37819f0() {
   return (neuron0x379ca50()*0.168351);
}

double NNfunction_ns_chi03_sR::synapse0x3781a30() {
   return (neuron0x379d420()*0.325294);
}

double NNfunction_ns_chi03_sR::synapse0x37952a0() {
   return (neuron0x379ddf0()*0.107725);
}

double NNfunction_ns_chi03_sR::synapse0x37952e0() {
   return (neuron0x379e9d0()*-2.4288);
}

double NNfunction_ns_chi03_sR::synapse0x37a6220() {
   return (neuron0x379f3a0()*0.260988);
}

double NNfunction_ns_chi03_sR::synapse0x37a6260() {
   return (neuron0x3790220()*0.0246267);
}

double NNfunction_ns_chi03_sR::synapse0x37a62a0() {
   return (neuron0x3790bf0()*0.0687799);
}

double NNfunction_ns_chi03_sR::synapse0x37a62e0() {
   return (neuron0x37915c0()*0.0291968);
}

double NNfunction_ns_chi03_sR::synapse0x37ad190() {
   return (neuron0x37a3c00()*-0.66373);
}

double NNfunction_ns_chi03_sR::synapse0x37ad1d0() {
   return (neuron0x37a44b0()*0.463303);
}

double NNfunction_ns_chi03_sR::synapse0x37ad210() {
   return (neuron0x37a4e80()*-0.0464746);
}

double NNfunction_ns_chi03_sR::synapse0x37ad250() {
   return (neuron0x37a5850()*-1.22527);
}

double NNfunction_ns_chi03_sR::synapse0x37ad5d0() {
   return (neuron0x37817d0()*-4.96278);
}

double NNfunction_ns_chi03_sR::synapse0x37ad610() {
   return (neuron0x3782120()*4.11991);
}

double NNfunction_ns_chi03_sR::synapse0x37ad650() {
   return (neuron0x3782c00()*-5.89156);
}

double NNfunction_ns_chi03_sR::synapse0x37ad690() {
   return (neuron0x37826a0()*-1.2576);
}

double NNfunction_ns_chi03_sR::synapse0x37ad6d0() {
   return (neuron0x37839e0()*1.01283);
}

double NNfunction_ns_chi03_sR::synapse0x37ad710() {
   return (neuron0x37843b0()*0.990025);
}

double NNfunction_ns_chi03_sR::synapse0x37ad750() {
   return (neuron0x3785180()*-0.546617);
}

double NNfunction_ns_chi03_sR::synapse0x37ad790() {
   return (neuron0x3785b50()*-0.173192);
}

double NNfunction_ns_chi03_sR::synapse0x37ad7d0() {
   return (neuron0x3786520()*-0.618612);
}

double NNfunction_ns_chi03_sR::synapse0x37ad810() {
   return (neuron0x3787000()*-0.0214837);
}

double NNfunction_ns_chi03_sR::synapse0x37ad850() {
   return (neuron0x37879d0()*-1.36445);
}

double NNfunction_ns_chi03_sR::synapse0x37ad890() {
   return (neuron0x3784ab0()*-0.552013);
}

double NNfunction_ns_chi03_sR::synapse0x37ad8d0() {
   return (neuron0x3789580()*-1.05432);
}

double NNfunction_ns_chi03_sR::synapse0x37ad910() {
   return (neuron0x3789f50()*-1.06278);
}

double NNfunction_ns_chi03_sR::synapse0x37ad950() {
   return (neuron0x378a920()*7.33956);
}

double NNfunction_ns_chi03_sR::synapse0x37ad990() {
   return (neuron0x378b2f0()*-0.895395);
}

double NNfunction_ns_chi03_sR::synapse0x37ad420() {
   return (neuron0x378d100()*-2.98681);
}

double NNfunction_ns_chi03_sR::synapse0x37ad460() {
   return (neuron0x378d3e0()*4.62152);
}

double NNfunction_ns_chi03_sR::synapse0x37adae0() {
   return (neuron0x378ddb0()*-1.1318);
}

double NNfunction_ns_chi03_sR::synapse0x37adb20() {
   return (neuron0x378e780()*-0.319225);
}

double NNfunction_ns_chi03_sR::synapse0x37adb60() {
   return (neuron0x378f150()*3.60525);
}

double NNfunction_ns_chi03_sR::synapse0x37adba0() {
   return (neuron0x378fb20()*-0.98745);
}

double NNfunction_ns_chi03_sR::synapse0x37adbe0() {
   return (neuron0x3788670()*0.764123);
}

double NNfunction_ns_chi03_sR::synapse0x37adc20() {
   return (neuron0x3789040()*-2.85469);
}

double NNfunction_ns_chi03_sR::synapse0x37adc60() {
   return (neuron0x37928b0()*2.28785);
}

double NNfunction_ns_chi03_sR::synapse0x37adca0() {
   return (neuron0x3793280()*1.46527);
}

double NNfunction_ns_chi03_sR::synapse0x37adce0() {
   return (neuron0x3793c50()*0.341499);
}

double NNfunction_ns_chi03_sR::synapse0x37add20() {
   return (neuron0x3794620()*-0.0569689);
}

double NNfunction_ns_chi03_sR::synapse0x37add60() {
   return (neuron0x3794ff0()*0.776473);
}

double NNfunction_ns_chi03_sR::synapse0x37adda0() {
   return (neuron0x37959c0()*1.80055);
}

double NNfunction_ns_chi03_sR::synapse0x37adde0() {
   return (neuron0x3796390()*1.23684);
}

double NNfunction_ns_chi03_sR::synapse0x37ade20() {
   return (neuron0x3796d60()*0.703154);
}

double NNfunction_ns_chi03_sR::synapse0x37ad9d0() {
   return (neuron0x378cdf0()*-0.898774);
}

double NNfunction_ns_chi03_sR::synapse0x37ada10() {
   return (neuron0x3799940()*-0.0455037);
}

double NNfunction_ns_chi03_sR::synapse0x37ada50() {
   return (neuron0x379a310()*-1.06659);
}

double NNfunction_ns_chi03_sR::synapse0x37ada90() {
   return (neuron0x379ace0()*-1.86201);
}

double NNfunction_ns_chi03_sR::synapse0x37ae070() {
   return (neuron0x379b6b0()*0.361916);
}

double NNfunction_ns_chi03_sR::synapse0x37ae0b0() {
   return (neuron0x379c080()*-0.269153);
}

double NNfunction_ns_chi03_sR::synapse0x37ae0f0() {
   return (neuron0x379ca50()*1.20229);
}

double NNfunction_ns_chi03_sR::synapse0x37ae130() {
   return (neuron0x379d420()*1.45289);
}

double NNfunction_ns_chi03_sR::synapse0x37ae170() {
   return (neuron0x379ddf0()*0.394802);
}

double NNfunction_ns_chi03_sR::synapse0x37ae1b0() {
   return (neuron0x379e9d0()*1.71666);
}

double NNfunction_ns_chi03_sR::synapse0x37ae1f0() {
   return (neuron0x379f3a0()*-1.22919);
}

double NNfunction_ns_chi03_sR::synapse0x37ae230() {
   return (neuron0x3790220()*1.03775);
}

double NNfunction_ns_chi03_sR::synapse0x37ae270() {
   return (neuron0x3790bf0()*-2.35588);
}

double NNfunction_ns_chi03_sR::synapse0x37ae2b0() {
   return (neuron0x37915c0()*-1.08908);
}

double NNfunction_ns_chi03_sR::synapse0x37ae2f0() {
   return (neuron0x37a3c00()*-0.593481);
}

double NNfunction_ns_chi03_sR::synapse0x37ae330() {
   return (neuron0x37a44b0()*1.36381);
}

double NNfunction_ns_chi03_sR::synapse0x37ae370() {
   return (neuron0x37a4e80()*-1.11123);
}

double NNfunction_ns_chi03_sR::synapse0x37ae3b0() {
   return (neuron0x37a5850()*0.51794);
}

double NNfunction_ns_chi03_sR::synapse0x37ae730() {
   return (neuron0x37817d0()*0.384722);
}

double NNfunction_ns_chi03_sR::synapse0x37ae770() {
   return (neuron0x3782120()*-1.34392);
}

double NNfunction_ns_chi03_sR::synapse0x37ae7b0() {
   return (neuron0x3782c00()*-0.0625497);
}

double NNfunction_ns_chi03_sR::synapse0x37ae7f0() {
   return (neuron0x37826a0()*0.00949579);
}

double NNfunction_ns_chi03_sR::synapse0x37ae830() {
   return (neuron0x37839e0()*0.029927);
}

double NNfunction_ns_chi03_sR::synapse0x37ae870() {
   return (neuron0x37843b0()*0.0390605);
}

double NNfunction_ns_chi03_sR::synapse0x37ae8b0() {
   return (neuron0x3785180()*-1.03795);
}

double NNfunction_ns_chi03_sR::synapse0x37ae8f0() {
   return (neuron0x3785b50()*3.87509);
}

double NNfunction_ns_chi03_sR::synapse0x37ae930() {
   return (neuron0x3786520()*-4.87927);
}

double NNfunction_ns_chi03_sR::synapse0x37ae970() {
   return (neuron0x3787000()*4.59133);
}

double NNfunction_ns_chi03_sR::synapse0x37ae9b0() {
   return (neuron0x37879d0()*-0.00405648);
}

double NNfunction_ns_chi03_sR::synapse0x37ae9f0() {
   return (neuron0x3784ab0()*-3.21234);
}

double NNfunction_ns_chi03_sR::synapse0x37aea30() {
   return (neuron0x3789580()*-0.0430307);
}

double NNfunction_ns_chi03_sR::synapse0x37aea70() {
   return (neuron0x3789f50()*-0.0300377);
}

double NNfunction_ns_chi03_sR::synapse0x37aeab0() {
   return (neuron0x378a920()*-0.353879);
}

double NNfunction_ns_chi03_sR::synapse0x37aeaf0() {
   return (neuron0x378b2f0()*-0.0912429);
}

double NNfunction_ns_chi03_sR::synapse0x37ae580() {
   return (neuron0x378d100()*1.02284);
}

double NNfunction_ns_chi03_sR::synapse0x37ae5c0() {
   return (neuron0x378d3e0()*-0.0197203);
}

double NNfunction_ns_chi03_sR::synapse0x37aec40() {
   return (neuron0x378ddb0()*-0.00351657);
}

double NNfunction_ns_chi03_sR::synapse0x37aec80() {
   return (neuron0x378e780()*-0.124607);
}

double NNfunction_ns_chi03_sR::synapse0x37aecc0() {
   return (neuron0x378f150()*0.890203);
}

double NNfunction_ns_chi03_sR::synapse0x37aed00() {
   return (neuron0x378fb20()*-0.660952);
}

double NNfunction_ns_chi03_sR::synapse0x37aed40() {
   return (neuron0x3788670()*0.0799619);
}

double NNfunction_ns_chi03_sR::synapse0x37aed80() {
   return (neuron0x3789040()*0.402626);
}

double NNfunction_ns_chi03_sR::synapse0x37aedc0() {
   return (neuron0x37928b0()*1.31896);
}

double NNfunction_ns_chi03_sR::synapse0x37aee00() {
   return (neuron0x3793280()*0.0990473);
}

double NNfunction_ns_chi03_sR::synapse0x37aee40() {
   return (neuron0x3793c50()*0.122546);
}

double NNfunction_ns_chi03_sR::synapse0x37aee80() {
   return (neuron0x3794620()*1.03912);
}

double NNfunction_ns_chi03_sR::synapse0x37aeec0() {
   return (neuron0x3794ff0()*-0.00483121);
}

double NNfunction_ns_chi03_sR::synapse0x37aef00() {
   return (neuron0x37959c0()*0.0691189);
}

double NNfunction_ns_chi03_sR::synapse0x37aef40() {
   return (neuron0x3796390()*-0.0283763);
}

double NNfunction_ns_chi03_sR::synapse0x37aef80() {
   return (neuron0x3796d60()*-3.83038);
}

double NNfunction_ns_chi03_sR::synapse0x37aeb30() {
   return (neuron0x378cdf0()*-0.0111348);
}

double NNfunction_ns_chi03_sR::synapse0x37aeb70() {
   return (neuron0x3799940()*-0.088581);
}

double NNfunction_ns_chi03_sR::synapse0x37aebb0() {
   return (neuron0x379a310()*-0.0604205);
}

double NNfunction_ns_chi03_sR::synapse0x37aebf0() {
   return (neuron0x379ace0()*0.0801205);
}

double NNfunction_ns_chi03_sR::synapse0x37af1d0() {
   return (neuron0x379b6b0()*-0.832896);
}

double NNfunction_ns_chi03_sR::synapse0x37af210() {
   return (neuron0x379c080()*-0.641027);
}

double NNfunction_ns_chi03_sR::synapse0x37af250() {
   return (neuron0x379ca50()*0.0464282);
}

double NNfunction_ns_chi03_sR::synapse0x37af290() {
   return (neuron0x379d420()*0.114461);
}

double NNfunction_ns_chi03_sR::synapse0x37af2d0() {
   return (neuron0x379ddf0()*0.170222);
}

double NNfunction_ns_chi03_sR::synapse0x37af310() {
   return (neuron0x379e9d0()*-1.6394);
}

double NNfunction_ns_chi03_sR::synapse0x37af350() {
   return (neuron0x379f3a0()*0.113466);
}

double NNfunction_ns_chi03_sR::synapse0x37af390() {
   return (neuron0x3790220()*-0.00822965);
}

double NNfunction_ns_chi03_sR::synapse0x37af3d0() {
   return (neuron0x3790bf0()*0.0294738);
}

double NNfunction_ns_chi03_sR::synapse0x37af410() {
   return (neuron0x37915c0()*-0.00343848);
}

double NNfunction_ns_chi03_sR::synapse0x37af450() {
   return (neuron0x37a3c00()*1.10053);
}

double NNfunction_ns_chi03_sR::synapse0x37af490() {
   return (neuron0x37a44b0()*0.203509);
}

double NNfunction_ns_chi03_sR::synapse0x37af4d0() {
   return (neuron0x37a4e80()*-0.0246183);
}

double NNfunction_ns_chi03_sR::synapse0x37af510() {
   return (neuron0x37a5850()*0.478432);
}

double NNfunction_ns_chi03_sR::synapse0x37af890() {
   return (neuron0x37817d0()*0.130114);
}

double NNfunction_ns_chi03_sR::synapse0x37af8d0() {
   return (neuron0x3782120()*-0.220408);
}

double NNfunction_ns_chi03_sR::synapse0x37af910() {
   return (neuron0x3782c00()*-0.264754);
}

double NNfunction_ns_chi03_sR::synapse0x37af950() {
   return (neuron0x37826a0()*-0.282541);
}

double NNfunction_ns_chi03_sR::synapse0x37af990() {
   return (neuron0x37839e0()*-0.624866);
}

double NNfunction_ns_chi03_sR::synapse0x37af9d0() {
   return (neuron0x37843b0()*-0.578157);
}

double NNfunction_ns_chi03_sR::synapse0x37afa10() {
   return (neuron0x3785180()*-0.248284);
}

double NNfunction_ns_chi03_sR::synapse0x37afa50() {
   return (neuron0x3785b50()*0.314015);
}

double NNfunction_ns_chi03_sR::synapse0x37afa90() {
   return (neuron0x3786520()*0.205484);
}

double NNfunction_ns_chi03_sR::synapse0x37afad0() {
   return (neuron0x3787000()*0.305366);
}

double NNfunction_ns_chi03_sR::synapse0x37afb10() {
   return (neuron0x37879d0()*-0.485266);
}

double NNfunction_ns_chi03_sR::synapse0x37afb50() {
   return (neuron0x3784ab0()*-0.0662964);
}

double NNfunction_ns_chi03_sR::synapse0x37afb90() {
   return (neuron0x3789580()*-0.637799);
}

double NNfunction_ns_chi03_sR::synapse0x37afbd0() {
   return (neuron0x3789f50()*-0.722679);
}

double NNfunction_ns_chi03_sR::synapse0x37afc10() {
   return (neuron0x378a920()*0.289973);
}

double NNfunction_ns_chi03_sR::synapse0x37afc50() {
   return (neuron0x378b2f0()*-0.0936665);
}

double NNfunction_ns_chi03_sR::synapse0x37af6e0() {
   return (neuron0x378d100()*0.0546708);
}

double NNfunction_ns_chi03_sR::synapse0x37af720() {
   return (neuron0x378d3e0()*0.10986);
}

double NNfunction_ns_chi03_sR::synapse0x37afda0() {
   return (neuron0x378ddb0()*0.174523);
}

double NNfunction_ns_chi03_sR::synapse0x37afde0() {
   return (neuron0x378e780()*-0.155395);
}

double NNfunction_ns_chi03_sR::synapse0x37afe20() {
   return (neuron0x378f150()*-0.623472);
}

double NNfunction_ns_chi03_sR::synapse0x37afe60() {
   return (neuron0x378fb20()*0.232502);
}

double NNfunction_ns_chi03_sR::synapse0x37afea0() {
   return (neuron0x3788670()*-0.444723);
}

double NNfunction_ns_chi03_sR::synapse0x37afee0() {
   return (neuron0x3789040()*-0.486579);
}

double NNfunction_ns_chi03_sR::synapse0x37aff20() {
   return (neuron0x37928b0()*-0.135129);
}

double NNfunction_ns_chi03_sR::synapse0x37aff60() {
   return (neuron0x3793280()*-0.0620691);
}

double NNfunction_ns_chi03_sR::synapse0x37affa0() {
   return (neuron0x3793c50()*-0.562141);
}

double NNfunction_ns_chi03_sR::synapse0x37affe0() {
   return (neuron0x3794620()*-0.652721);
}

double NNfunction_ns_chi03_sR::synapse0x37b0020() {
   return (neuron0x3794ff0()*0.0352726);
}

double NNfunction_ns_chi03_sR::synapse0x37b0060() {
   return (neuron0x37959c0()*-0.417089);
}

double NNfunction_ns_chi03_sR::synapse0x37b00a0() {
   return (neuron0x3796390()*-0.2177);
}

double NNfunction_ns_chi03_sR::synapse0x37b00e0() {
   return (neuron0x3796d60()*0.112284);
}

double NNfunction_ns_chi03_sR::synapse0x37afc90() {
   return (neuron0x378cdf0()*-0.239397);
}

double NNfunction_ns_chi03_sR::synapse0x37afcd0() {
   return (neuron0x3799940()*0.236653);
}

double NNfunction_ns_chi03_sR::synapse0x37afd10() {
   return (neuron0x379a310()*0.095683);
}

double NNfunction_ns_chi03_sR::synapse0x37afd50() {
   return (neuron0x379ace0()*-0.222275);
}

double NNfunction_ns_chi03_sR::synapse0x37b0330() {
   return (neuron0x379b6b0()*0.181762);
}

double NNfunction_ns_chi03_sR::synapse0x37b0370() {
   return (neuron0x379c080()*-0.43812);
}

double NNfunction_ns_chi03_sR::synapse0x37b03b0() {
   return (neuron0x379ca50()*-0.34691);
}

double NNfunction_ns_chi03_sR::synapse0x37b03f0() {
   return (neuron0x379d420()*-0.45975);
}

double NNfunction_ns_chi03_sR::synapse0x37b0430() {
   return (neuron0x379ddf0()*-0.422723);
}

double NNfunction_ns_chi03_sR::synapse0x37b0470() {
   return (neuron0x379e9d0()*-0.0442651);
}

double NNfunction_ns_chi03_sR::synapse0x37b04b0() {
   return (neuron0x379f3a0()*-0.00534083);
}

double NNfunction_ns_chi03_sR::synapse0x37b04f0() {
   return (neuron0x3790220()*-0.332885);
}

double NNfunction_ns_chi03_sR::synapse0x37b0530() {
   return (neuron0x3790bf0()*0.161321);
}

double NNfunction_ns_chi03_sR::synapse0x37b0570() {
   return (neuron0x37915c0()*0.15213);
}

double NNfunction_ns_chi03_sR::synapse0x37b05b0() {
   return (neuron0x37a3c00()*-0.432654);
}

double NNfunction_ns_chi03_sR::synapse0x37b05f0() {
   return (neuron0x37a44b0()*-0.282936);
}

double NNfunction_ns_chi03_sR::synapse0x37b0630() {
   return (neuron0x37a4e80()*-0.448902);
}

double NNfunction_ns_chi03_sR::synapse0x37b0670() {
   return (neuron0x37a5850()*-0.437012);
}

double NNfunction_ns_chi03_sR::synapse0x37b08d0() {
   return (neuron0x37aca50()*3.31356);
}

double NNfunction_ns_chi03_sR::synapse0x37b0910() {
   return (neuron0x37acdf0()*5.93804);
}

double NNfunction_ns_chi03_sR::synapse0x37b0950() {
   return (neuron0x37ad290()*-3.41422);
}

double NNfunction_ns_chi03_sR::synapse0x37b0990() {
   return (neuron0x37ae3f0()*-14.7762);
}

double NNfunction_ns_chi03_sR::synapse0x37b09d0() {
   return (neuron0x37af550()*0.119008);
}

