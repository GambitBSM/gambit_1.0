#include "NNfunction_sb_cLcR.h"
#include <cmath>

double NNfunction_sb_cLcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.7714)/15.0206;
   input1 = (in1 - 34.0958)/860.034;
   input2 = (in2 - 418.345)/530.07;
   input3 = (in3 - 134.079)/650.358;
   input4 = (in4 - 744.229)/803.019;
   input5 = (in5 - 627.933)/770.571;
   input6 = (in6 - 631.882)/774.321;
   input7 = (in7 - 639.744)/775.362;
   input8 = (in8 - 626.721)/780.769;
   input9 = (in9 - 613.709)/761.171;
   input10 = (in10 - 656.126)/793.028;
   input11 = (in11 - 587.571)/647.467;
   input12 = (in12 - 344.68)/211.421;
   input13 = (in13 - 443.272)/388.551;
   input14 = (in14 - 593.662)/632.335;
   input15 = (in15 - 347.376)/210.653;
   input16 = (in16 - 424.707)/428.15;
   input17 = (in17 - 608.359)/676.036;
   input18 = (in18 - 601.586)/675.832;
   input19 = (in19 - 622.681)/674.956;
   input20 = (in20 - -118.089)/399.205;
   input21 = (in21 - -147.45)/909.794;
   input22 = (in22 - 13.0475)/935.904;
   input23 = (in23 - -71.3045)/502.537;
   switch(index) {
     case 0:
         return neuron0x275bea0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLcR::Value(int index, double* input) {
   input0 = (input[0] - 22.7714)/15.0206;
   input1 = (input[1] - 34.0958)/860.034;
   input2 = (input[2] - 418.345)/530.07;
   input3 = (input[3] - 134.079)/650.358;
   input4 = (input[4] - 744.229)/803.019;
   input5 = (input[5] - 627.933)/770.571;
   input6 = (input[6] - 631.882)/774.321;
   input7 = (input[7] - 639.744)/775.362;
   input8 = (input[8] - 626.721)/780.769;
   input9 = (input[9] - 613.709)/761.171;
   input10 = (input[10] - 656.126)/793.028;
   input11 = (input[11] - 587.571)/647.467;
   input12 = (input[12] - 344.68)/211.421;
   input13 = (input[13] - 443.272)/388.551;
   input14 = (input[14] - 593.662)/632.335;
   input15 = (input[15] - 347.376)/210.653;
   input16 = (input[16] - 424.707)/428.15;
   input17 = (input[17] - 608.359)/676.036;
   input18 = (input[18] - 601.586)/675.832;
   input19 = (input[19] - 622.681)/674.956;
   input20 = (input[20] - -118.089)/399.205;
   input21 = (input[21] - -147.45)/909.794;
   input22 = (input[22] - 13.0475)/935.904;
   input23 = (input[23] - -71.3045)/502.537;
   switch(index) {
     case 0:
         return neuron0x275bea0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLcR::neuron0x2727f60() {
   return input0;
}

double NNfunction_sb_cLcR::neuron0x27282a0() {
   return input1;
}

double NNfunction_sb_cLcR::neuron0x27285e0() {
   return input2;
}

double NNfunction_sb_cLcR::neuron0x2728920() {
   return input3;
}

double NNfunction_sb_cLcR::neuron0x2728c60() {
   return input4;
}

double NNfunction_sb_cLcR::neuron0x2728fa0() {
   return input5;
}

double NNfunction_sb_cLcR::neuron0x27292e0() {
   return input6;
}

double NNfunction_sb_cLcR::neuron0x2729620() {
   return input7;
}

double NNfunction_sb_cLcR::neuron0x2729960() {
   return input8;
}

double NNfunction_sb_cLcR::neuron0x2729ca0() {
   return input9;
}

double NNfunction_sb_cLcR::neuron0x2729fe0() {
   return input10;
}

double NNfunction_sb_cLcR::neuron0x272a320() {
   return input11;
}

double NNfunction_sb_cLcR::neuron0x272a660() {
   return input12;
}

double NNfunction_sb_cLcR::neuron0x272a9a0() {
   return input13;
}

double NNfunction_sb_cLcR::neuron0x272ace0() {
   return input14;
}

double NNfunction_sb_cLcR::neuron0x272b020() {
   return input15;
}

double NNfunction_sb_cLcR::neuron0x272b360() {
   return input16;
}

double NNfunction_sb_cLcR::neuron0x272b8c0() {
   return input17;
}

double NNfunction_sb_cLcR::neuron0x272bae0() {
   return input18;
}

double NNfunction_sb_cLcR::neuron0x272be20() {
   return input19;
}

double NNfunction_sb_cLcR::neuron0x272c160() {
   return input20;
}

double NNfunction_sb_cLcR::neuron0x272c4a0() {
   return input21;
}

double NNfunction_sb_cLcR::neuron0x272c7e0() {
   return input22;
}

double NNfunction_sb_cLcR::neuron0x272cb20() {
   return input23;
}

double NNfunction_sb_cLcR::input0x272cfc0() {
   double input = -0.420242;
   input += synapse0x24f1910();
   input += synapse0x2727e20();
   input += synapse0x2727e60();
   input += synapse0x272d270();
   input += synapse0x272d2b0();
   input += synapse0x272d2f0();
   input += synapse0x272d330();
   input += synapse0x272d370();
   input += synapse0x272d3b0();
   input += synapse0x272d3f0();
   input += synapse0x272d430();
   input += synapse0x272d470();
   input += synapse0x272d4b0();
   input += synapse0x272d4f0();
   input += synapse0x272d530();
   input += synapse0x272d570();
   input += synapse0x2727d90();
   input += synapse0x2727dd0();
   input += synapse0x24e3120();
   input += synapse0x24e3160();
   input += synapse0x272d7d0();
   input += synapse0x272d810();
   input += synapse0x272d850();
   input += synapse0x272d890();
   return input;
}

double NNfunction_sb_cLcR::neuron0x272cfc0() {
   double input = input0x272cfc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x272d8d0() {
   double input = -2.5962;
   input += synapse0x272dc10();
   input += synapse0x272dc50();
   input += synapse0x272dc90();
   input += synapse0x272dcd0();
   input += synapse0x272dd10();
   input += synapse0x272dd50();
   input += synapse0x272dd90();
   input += synapse0x272ddd0();
   input += synapse0x272de10();
   input += synapse0x272d6c0();
   input += synapse0x272d700();
   input += synapse0x272d740();
   input += synapse0x272d780();
   input += synapse0x272e060();
   input += synapse0x272e0a0();
   input += synapse0x272e0e0();
   input += synapse0x272da60();
   input += synapse0x272daa0();
   input += synapse0x272e230();
   input += synapse0x272e270();
   input += synapse0x272e2b0();
   input += synapse0x272e2f0();
   input += synapse0x272e330();
   input += synapse0x272e370();
   return input;
}

double NNfunction_sb_cLcR::neuron0x272d8d0() {
   double input = input0x272d8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x272e3b0() {
   double input = -1.20097;
   input += synapse0x272e6f0();
   input += synapse0x272e730();
   input += synapse0x272e770();
   input += synapse0x272e7b0();
   input += synapse0x272e7f0();
   input += synapse0x272e830();
   input += synapse0x272e870();
   input += synapse0x272e8b0();
   input += synapse0x272e8f0();
   input += synapse0x272e930();
   input += synapse0x272e970();
   input += synapse0x272e9b0();
   input += synapse0x272e9f0();
   input += synapse0x272ea30();
   input += synapse0x272ea70();
   input += synapse0x272eab0();
   input += synapse0x272e540();
   input += synapse0x272e580();
   input += synapse0x24f1020();
   input += synapse0x24f1060();
   input += synapse0x2716ff0();
   input += synapse0x2717030();
   input += synapse0x2717070();
   input += synapse0x2727ea0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x272e3b0() {
   double input = input0x272e3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x24f1780() {
   double input = 0.763526;
   input += synapse0x272e000();
   input += synapse0x2727ee0();
   input += synapse0x2727f20();
   input += synapse0x272ec00();
   input += synapse0x272ec40();
   input += synapse0x272ec80();
   input += synapse0x272ecc0();
   input += synapse0x272ed00();
   input += synapse0x272ed40();
   input += synapse0x272ed80();
   input += synapse0x272edc0();
   input += synapse0x272ee00();
   input += synapse0x272ee40();
   input += synapse0x272ee80();
   input += synapse0x272eec0();
   input += synapse0x272ef00();
   input += synapse0x272de50();
   input += synapse0x272de90();
   input += synapse0x272f050();
   input += synapse0x272f090();
   input += synapse0x272f0d0();
   input += synapse0x272f110();
   input += synapse0x272f150();
   input += synapse0x272f190();
   return input;
}

double NNfunction_sb_cLcR::neuron0x24f1780() {
   double input = input0x24f1780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x272f1d0() {
   double input = 1.17684;
   input += synapse0x272f510();
   input += synapse0x272f550();
   input += synapse0x272f590();
   input += synapse0x272f5d0();
   input += synapse0x272f610();
   input += synapse0x272f650();
   input += synapse0x272f690();
   input += synapse0x272f6d0();
   input += synapse0x272f710();
   input += synapse0x272f750();
   input += synapse0x272f790();
   input += synapse0x272f7d0();
   input += synapse0x272f810();
   input += synapse0x272f850();
   input += synapse0x272f890();
   input += synapse0x272f8d0();
   input += synapse0x272f360();
   input += synapse0x272f3a0();
   input += synapse0x272fa20();
   input += synapse0x272fa60();
   input += synapse0x272faa0();
   input += synapse0x272fae0();
   input += synapse0x272fb20();
   input += synapse0x272fb60();
   return input;
}

double NNfunction_sb_cLcR::neuron0x272f1d0() {
   double input = input0x272f1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x272fba0() {
   double input = -2.58185;
   input += synapse0x272fee0();
   input += synapse0x272ff20();
   input += synapse0x272ff60();
   input += synapse0x272ffa0();
   input += synapse0x272ffe0();
   input += synapse0x2730020();
   input += synapse0x2730060();
   input += synapse0x27300a0();
   input += synapse0x27300e0();
   input += synapse0x24f1370();
   input += synapse0x24f13b0();
   input += synapse0x24f13f0();
   input += synapse0x24f1430();
   input += synapse0x24f1470();
   input += synapse0x24f14b0();
   input += synapse0x24f14f0();
   input += synapse0x272fd30();
   input += synapse0x272fd70();
   input += synapse0x24f1640();
   input += synapse0x24f1680();
   input += synapse0x24f16c0();
   input += synapse0x24f1700();
   input += synapse0x24f1740();
   input += synapse0x2730930();
   return input;
}

double NNfunction_sb_cLcR::neuron0x272fba0() {
   double input = input0x272fba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2730970() {
   double input = 0.334238;
   input += synapse0x2730cb0();
   input += synapse0x2730cf0();
   input += synapse0x2730d30();
   input += synapse0x2730d70();
   input += synapse0x2730db0();
   input += synapse0x2730df0();
   input += synapse0x2730e30();
   input += synapse0x2730e70();
   input += synapse0x2730eb0();
   input += synapse0x2730ef0();
   input += synapse0x2730f30();
   input += synapse0x2730f70();
   input += synapse0x2730fb0();
   input += synapse0x2730ff0();
   input += synapse0x2731030();
   input += synapse0x2731070();
   input += synapse0x2730b00();
   input += synapse0x2730b40();
   input += synapse0x27311c0();
   input += synapse0x2731200();
   input += synapse0x2731240();
   input += synapse0x2731280();
   input += synapse0x27312c0();
   input += synapse0x2731300();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2730970() {
   double input = input0x2730970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2731340() {
   double input = -0.123356;
   input += synapse0x2731680();
   input += synapse0x27316c0();
   input += synapse0x2731700();
   input += synapse0x2731740();
   input += synapse0x2731780();
   input += synapse0x27317c0();
   input += synapse0x2731800();
   input += synapse0x2731840();
   input += synapse0x2731880();
   input += synapse0x27318c0();
   input += synapse0x2731900();
   input += synapse0x2731940();
   input += synapse0x2731980();
   input += synapse0x27319c0();
   input += synapse0x2731a00();
   input += synapse0x2731a40();
   input += synapse0x27314d0();
   input += synapse0x2731510();
   input += synapse0x2731b90();
   input += synapse0x2731bd0();
   input += synapse0x2731c10();
   input += synapse0x2731c50();
   input += synapse0x2731c90();
   input += synapse0x2731cd0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2731340() {
   double input = input0x2731340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2731d10() {
   double input = -0.712043;
   input += synapse0x272b7b0();
   input += synapse0x272b7f0();
   input += synapse0x272b830();
   input += synapse0x272b870();
   input += synapse0x2732260();
   input += synapse0x27322a0();
   input += synapse0x27322e0();
   input += synapse0x2732320();
   input += synapse0x2732360();
   input += synapse0x27323a0();
   input += synapse0x27323e0();
   input += synapse0x2732420();
   input += synapse0x2732460();
   input += synapse0x27324a0();
   input += synapse0x27324e0();
   input += synapse0x2732520();
   input += synapse0x2731ea0();
   input += synapse0x2731ee0();
   input += synapse0x2732670();
   input += synapse0x27326b0();
   input += synapse0x27326f0();
   input += synapse0x2732730();
   input += synapse0x2732770();
   input += synapse0x27327b0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2731d10() {
   double input = input0x2731d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x27327f0() {
   double input = -0.0952166;
   input += synapse0x2732b30();
   input += synapse0x2732b70();
   input += synapse0x2732bb0();
   input += synapse0x2732bf0();
   input += synapse0x2732c30();
   input += synapse0x2732c70();
   input += synapse0x2732cb0();
   input += synapse0x2732cf0();
   input += synapse0x2732d30();
   input += synapse0x2732d70();
   input += synapse0x2732db0();
   input += synapse0x2732df0();
   input += synapse0x2732e30();
   input += synapse0x2732e70();
   input += synapse0x2732eb0();
   input += synapse0x2732ef0();
   input += synapse0x2732980();
   input += synapse0x27329c0();
   input += synapse0x2733040();
   input += synapse0x2733080();
   input += synapse0x27330c0();
   input += synapse0x2733100();
   input += synapse0x2733140();
   input += synapse0x2733180();
   return input;
}

double NNfunction_sb_cLcR::neuron0x27327f0() {
   double input = input0x27327f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x27331c0() {
   double input = 0.784639;
   input += synapse0x2733500();
   input += synapse0x2733540();
   input += synapse0x2733580();
   input += synapse0x27335c0();
   input += synapse0x2733600();
   input += synapse0x2733640();
   input += synapse0x2733680();
   input += synapse0x27336c0();
   input += synapse0x2733700();
   input += synapse0x2733740();
   input += synapse0x2733780();
   input += synapse0x27337c0();
   input += synapse0x2733800();
   input += synapse0x2733840();
   input += synapse0x2733880();
   input += synapse0x27338c0();
   input += synapse0x2733350();
   input += synapse0x2733390();
   input += synapse0x2730120();
   input += synapse0x2730160();
   input += synapse0x27301a0();
   input += synapse0x27301e0();
   input += synapse0x2730220();
   input += synapse0x2730260();
   return input;
}

double NNfunction_sb_cLcR::neuron0x27331c0() {
   double input = input0x27331c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x27302a0() {
   double input = 0.254108;
   input += synapse0x27305e0();
   input += synapse0x2730620();
   input += synapse0x2730660();
   input += synapse0x27306a0();
   input += synapse0x27306e0();
   input += synapse0x2730720();
   input += synapse0x2730760();
   input += synapse0x27307a0();
   input += synapse0x27307e0();
   input += synapse0x2730820();
   input += synapse0x2730860();
   input += synapse0x27308a0();
   input += synapse0x27308e0();
   input += synapse0x2734a20();
   input += synapse0x2734a60();
   input += synapse0x2734aa0();
   input += synapse0x2730430();
   input += synapse0x2730470();
   input += synapse0x2734bf0();
   input += synapse0x2734c30();
   input += synapse0x2734c70();
   input += synapse0x2734cb0();
   input += synapse0x2734cf0();
   input += synapse0x2734d30();
   return input;
}

double NNfunction_sb_cLcR::neuron0x27302a0() {
   double input = input0x27302a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2734d70() {
   double input = -0.645771;
   input += synapse0x27350b0();
   input += synapse0x27350f0();
   input += synapse0x2735130();
   input += synapse0x2735170();
   input += synapse0x27351b0();
   input += synapse0x27351f0();
   input += synapse0x2735230();
   input += synapse0x2735270();
   input += synapse0x27352b0();
   input += synapse0x27352f0();
   input += synapse0x2735330();
   input += synapse0x2735370();
   input += synapse0x27353b0();
   input += synapse0x27353f0();
   input += synapse0x2735430();
   input += synapse0x2735470();
   input += synapse0x2734f00();
   input += synapse0x2734f40();
   input += synapse0x27355c0();
   input += synapse0x2735600();
   input += synapse0x2735640();
   input += synapse0x2735680();
   input += synapse0x27356c0();
   input += synapse0x2735700();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2734d70() {
   double input = input0x2734d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2735740() {
   double input = -2.15915;
   input += synapse0x2735a80();
   input += synapse0x2735ac0();
   input += synapse0x2735b00();
   input += synapse0x2735b40();
   input += synapse0x2735b80();
   input += synapse0x2735bc0();
   input += synapse0x2735c00();
   input += synapse0x2735c40();
   input += synapse0x2735c80();
   input += synapse0x2735cc0();
   input += synapse0x2735d00();
   input += synapse0x2735d40();
   input += synapse0x2735d80();
   input += synapse0x2735dc0();
   input += synapse0x2735e00();
   input += synapse0x2735e40();
   input += synapse0x27358d0();
   input += synapse0x2735910();
   input += synapse0x2735f90();
   input += synapse0x2735fd0();
   input += synapse0x2736010();
   input += synapse0x2736050();
   input += synapse0x2736090();
   input += synapse0x27360d0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2735740() {
   double input = input0x2735740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2736110() {
   double input = -0.161632;
   input += synapse0x2736450();
   input += synapse0x2736490();
   input += synapse0x27364d0();
   input += synapse0x2736510();
   input += synapse0x2736550();
   input += synapse0x2736590();
   input += synapse0x27365d0();
   input += synapse0x2736610();
   input += synapse0x2736650();
   input += synapse0x2736690();
   input += synapse0x27366d0();
   input += synapse0x2736710();
   input += synapse0x2736750();
   input += synapse0x2736790();
   input += synapse0x27367d0();
   input += synapse0x2736810();
   input += synapse0x27362a0();
   input += synapse0x27362e0();
   input += synapse0x2736960();
   input += synapse0x27369a0();
   input += synapse0x27369e0();
   input += synapse0x2736a20();
   input += synapse0x2736a60();
   input += synapse0x2736aa0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2736110() {
   double input = input0x2736110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2736ae0() {
   double input = 1.21954;
   input += synapse0x2736e20();
   input += synapse0x2728180();
   input += synapse0x27281c0();
   input += synapse0x27284c0();
   input += synapse0x2728500();
   input += synapse0x2728800();
   input += synapse0x2728840();
   input += synapse0x2728b40();
   input += synapse0x2728b80();
   input += synapse0x2728e80();
   input += synapse0x2728ec0();
   input += synapse0x27291c0();
   input += synapse0x2729200();
   input += synapse0x2729500();
   input += synapse0x2729540();
   input += synapse0x2729840();
   input += synapse0x2729880();
   input += synapse0x2729b80();
   input += synapse0x2729bc0();
   input += synapse0x2729ec0();
   input += synapse0x2729f00();
   input += synapse0x272a200();
   input += synapse0x272a240();
   input += synapse0x272a540();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2736ae0() {
   double input = input0x2736ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x27388f0() {
   double input = 5.20934;
   input += synapse0x272a580();
   input += synapse0x272b240();
   input += synapse0x272b280();
   input += synapse0x2736c70();
   input += synapse0x2736cb0();
   input += synapse0x272b580();
   input += synapse0x272b5c0();
   input += synapse0x24e3000();
   input += synapse0x24e3040();
   input += synapse0x272bd00();
   input += synapse0x272bd40();
   input += synapse0x272c040();
   input += synapse0x272c080();
   input += synapse0x272c380();
   input += synapse0x272c3c0();
   input += synapse0x272c6c0();
   input += synapse0x272c700();
   input += synapse0x272ca00();
   input += synapse0x272ca40();
   input += synapse0x272cd40();
   input += synapse0x272cd80();
   input += synapse0x272a880();
   input += synapse0x272a8c0();
   input += synapse0x2738b90();
   return input;
}

double NNfunction_sb_cLcR::neuron0x27388f0() {
   double input = input0x27388f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2738bd0() {
   double input = 0.944529;
   input += synapse0x2738f10();
   input += synapse0x2738f50();
   input += synapse0x2738f90();
   input += synapse0x2738fd0();
   input += synapse0x2739010();
   input += synapse0x2739050();
   input += synapse0x2739090();
   input += synapse0x27390d0();
   input += synapse0x2739110();
   input += synapse0x2739150();
   input += synapse0x2739190();
   input += synapse0x27391d0();
   input += synapse0x2739210();
   input += synapse0x2739250();
   input += synapse0x2739290();
   input += synapse0x27392d0();
   input += synapse0x2738d60();
   input += synapse0x2738da0();
   input += synapse0x2739420();
   input += synapse0x2739460();
   input += synapse0x27394a0();
   input += synapse0x27394e0();
   input += synapse0x2739520();
   input += synapse0x2739560();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2738bd0() {
   double input = input0x2738bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x27395a0() {
   double input = -0.94384;
   input += synapse0x27398e0();
   input += synapse0x2739920();
   input += synapse0x2739960();
   input += synapse0x27399a0();
   input += synapse0x27399e0();
   input += synapse0x2739a20();
   input += synapse0x2739a60();
   input += synapse0x2739aa0();
   input += synapse0x2739ae0();
   input += synapse0x2739b20();
   input += synapse0x2739b60();
   input += synapse0x2739ba0();
   input += synapse0x2739be0();
   input += synapse0x2739c20();
   input += synapse0x2739c60();
   input += synapse0x2739ca0();
   input += synapse0x2739730();
   input += synapse0x2739770();
   input += synapse0x2739df0();
   input += synapse0x2739e30();
   input += synapse0x2739e70();
   input += synapse0x2739eb0();
   input += synapse0x2739ef0();
   input += synapse0x2739f30();
   return input;
}

double NNfunction_sb_cLcR::neuron0x27395a0() {
   double input = input0x27395a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2739f70() {
   double input = -0.450225;
   input += synapse0x273a2b0();
   input += synapse0x273a2f0();
   input += synapse0x273a330();
   input += synapse0x273a370();
   input += synapse0x273a3b0();
   input += synapse0x273a3f0();
   input += synapse0x273a430();
   input += synapse0x273a470();
   input += synapse0x273a4b0();
   input += synapse0x273a4f0();
   input += synapse0x273a530();
   input += synapse0x273a570();
   input += synapse0x273a5b0();
   input += synapse0x273a5f0();
   input += synapse0x273a630();
   input += synapse0x273a670();
   input += synapse0x273a100();
   input += synapse0x273a140();
   input += synapse0x273a7c0();
   input += synapse0x273a800();
   input += synapse0x273a840();
   input += synapse0x273a880();
   input += synapse0x273a8c0();
   input += synapse0x273a900();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2739f70() {
   double input = input0x2739f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x273a940() {
   double input = 0.314344;
   input += synapse0x273ac80();
   input += synapse0x273acc0();
   input += synapse0x273ad00();
   input += synapse0x273ad40();
   input += synapse0x273ad80();
   input += synapse0x273adc0();
   input += synapse0x273ae00();
   input += synapse0x273ae40();
   input += synapse0x273ae80();
   input += synapse0x273aec0();
   input += synapse0x273af00();
   input += synapse0x273af40();
   input += synapse0x273af80();
   input += synapse0x273afc0();
   input += synapse0x273b000();
   input += synapse0x273b040();
   input += synapse0x273aad0();
   input += synapse0x273ab10();
   input += synapse0x273b190();
   input += synapse0x273b1d0();
   input += synapse0x273b210();
   input += synapse0x273b250();
   input += synapse0x273b290();
   input += synapse0x273b2d0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x273a940() {
   double input = input0x273a940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x273b310() {
   double input = -1.23364;
   input += synapse0x273b650();
   input += synapse0x273b690();
   input += synapse0x273b6d0();
   input += synapse0x273b710();
   input += synapse0x273b750();
   input += synapse0x273b790();
   input += synapse0x273b7d0();
   input += synapse0x273b810();
   input += synapse0x273b850();
   input += synapse0x2733a10();
   input += synapse0x2733a50();
   input += synapse0x2733a90();
   input += synapse0x2733ad0();
   input += synapse0x2733b10();
   input += synapse0x2733b50();
   input += synapse0x2733b90();
   input += synapse0x273b4a0();
   input += synapse0x273b4e0();
   input += synapse0x2733ce0();
   input += synapse0x2733d20();
   input += synapse0x2733d60();
   input += synapse0x2733da0();
   input += synapse0x2733de0();
   input += synapse0x2733e20();
   return input;
}

double NNfunction_sb_cLcR::neuron0x273b310() {
   double input = input0x273b310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2733e60() {
   double input = 2.67398;
   input += synapse0x27341a0();
   input += synapse0x27341e0();
   input += synapse0x2734220();
   input += synapse0x2734260();
   input += synapse0x27342a0();
   input += synapse0x27342e0();
   input += synapse0x2734320();
   input += synapse0x2734360();
   input += synapse0x27343a0();
   input += synapse0x27343e0();
   input += synapse0x2734420();
   input += synapse0x2734460();
   input += synapse0x27344a0();
   input += synapse0x27344e0();
   input += synapse0x2734520();
   input += synapse0x2734560();
   input += synapse0x2733ff0();
   input += synapse0x2734030();
   input += synapse0x27346b0();
   input += synapse0x27346f0();
   input += synapse0x2734730();
   input += synapse0x2734770();
   input += synapse0x27347b0();
   input += synapse0x27347f0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2733e60() {
   double input = input0x2733e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2734830() {
   double input = -1.37226;
   input += synapse0x27349c0();
   input += synapse0x273da50();
   input += synapse0x273da90();
   input += synapse0x273dad0();
   input += synapse0x273db10();
   input += synapse0x273db50();
   input += synapse0x273db90();
   input += synapse0x273dbd0();
   input += synapse0x273dc10();
   input += synapse0x273dc50();
   input += synapse0x273dc90();
   input += synapse0x273dcd0();
   input += synapse0x273dd10();
   input += synapse0x273dd50();
   input += synapse0x273dd90();
   input += synapse0x273ddd0();
   input += synapse0x273d8a0();
   input += synapse0x273d8e0();
   input += synapse0x273df20();
   input += synapse0x273df60();
   input += synapse0x273dfa0();
   input += synapse0x273dfe0();
   input += synapse0x273e020();
   input += synapse0x273e060();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2734830() {
   double input = input0x2734830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x273e0a0() {
   double input = -0.726053;
   input += synapse0x273e3e0();
   input += synapse0x273e420();
   input += synapse0x273e460();
   input += synapse0x273e4a0();
   input += synapse0x273e4e0();
   input += synapse0x273e520();
   input += synapse0x273e560();
   input += synapse0x273e5a0();
   input += synapse0x273e5e0();
   input += synapse0x273e620();
   input += synapse0x273e660();
   input += synapse0x273e6a0();
   input += synapse0x273e6e0();
   input += synapse0x273e720();
   input += synapse0x273e760();
   input += synapse0x273e7a0();
   input += synapse0x273e230();
   input += synapse0x273e270();
   input += synapse0x273e8f0();
   input += synapse0x273e930();
   input += synapse0x273e970();
   input += synapse0x273e9b0();
   input += synapse0x273e9f0();
   input += synapse0x273ea30();
   return input;
}

double NNfunction_sb_cLcR::neuron0x273e0a0() {
   double input = input0x273e0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x273ea70() {
   double input = -0.379768;
   input += synapse0x273edb0();
   input += synapse0x273edf0();
   input += synapse0x273ee30();
   input += synapse0x273ee70();
   input += synapse0x273eeb0();
   input += synapse0x273eef0();
   input += synapse0x273ef30();
   input += synapse0x273ef70();
   input += synapse0x273efb0();
   input += synapse0x273eff0();
   input += synapse0x273f030();
   input += synapse0x273f070();
   input += synapse0x273f0b0();
   input += synapse0x273f0f0();
   input += synapse0x273f130();
   input += synapse0x273f170();
   input += synapse0x273ec00();
   input += synapse0x273ec40();
   input += synapse0x273f2c0();
   input += synapse0x273f300();
   input += synapse0x273f340();
   input += synapse0x273f380();
   input += synapse0x273f3c0();
   input += synapse0x273f400();
   return input;
}

double NNfunction_sb_cLcR::neuron0x273ea70() {
   double input = input0x273ea70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x273f440() {
   double input = 0.153873;
   input += synapse0x273f780();
   input += synapse0x273f7c0();
   input += synapse0x273f800();
   input += synapse0x273f840();
   input += synapse0x273f880();
   input += synapse0x273f8c0();
   input += synapse0x273f900();
   input += synapse0x273f940();
   input += synapse0x273f980();
   input += synapse0x273f9c0();
   input += synapse0x273fa00();
   input += synapse0x273fa40();
   input += synapse0x273fa80();
   input += synapse0x273fac0();
   input += synapse0x273fb00();
   input += synapse0x273fb40();
   input += synapse0x273f5d0();
   input += synapse0x273f610();
   input += synapse0x273fc90();
   input += synapse0x273fcd0();
   input += synapse0x273fd10();
   input += synapse0x273fd50();
   input += synapse0x273fd90();
   input += synapse0x273fdd0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x273f440() {
   double input = input0x273f440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x273fe10() {
   double input = 0.328055;
   input += synapse0x2740150();
   input += synapse0x2740190();
   input += synapse0x27401d0();
   input += synapse0x2740210();
   input += synapse0x2740250();
   input += synapse0x2740290();
   input += synapse0x27402d0();
   input += synapse0x2740310();
   input += synapse0x2740350();
   input += synapse0x2740390();
   input += synapse0x27403d0();
   input += synapse0x2740410();
   input += synapse0x2740450();
   input += synapse0x2740490();
   input += synapse0x27404d0();
   input += synapse0x2740510();
   input += synapse0x273ffa0();
   input += synapse0x273ffe0();
   input += synapse0x2740660();
   input += synapse0x27406a0();
   input += synapse0x27406e0();
   input += synapse0x2740720();
   input += synapse0x2740760();
   input += synapse0x27407a0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x273fe10() {
   double input = input0x273fe10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x27407e0() {
   double input = 0.221009;
   input += synapse0x2740b20();
   input += synapse0x2740b60();
   input += synapse0x2740ba0();
   input += synapse0x2740be0();
   input += synapse0x2740c20();
   input += synapse0x2740c60();
   input += synapse0x2740ca0();
   input += synapse0x2740ce0();
   input += synapse0x2740d20();
   input += synapse0x2740d60();
   input += synapse0x2740da0();
   input += synapse0x2740de0();
   input += synapse0x2740e20();
   input += synapse0x2740e60();
   input += synapse0x2740ea0();
   input += synapse0x2740ee0();
   input += synapse0x2740970();
   input += synapse0x27409b0();
   input += synapse0x2741030();
   input += synapse0x2741070();
   input += synapse0x27410b0();
   input += synapse0x27410f0();
   input += synapse0x2741130();
   input += synapse0x2741170();
   return input;
}

double NNfunction_sb_cLcR::neuron0x27407e0() {
   double input = input0x27407e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x27411b0() {
   double input = 0.339541;
   input += synapse0x27414f0();
   input += synapse0x2741530();
   input += synapse0x2741570();
   input += synapse0x27415b0();
   input += synapse0x27415f0();
   input += synapse0x2741630();
   input += synapse0x2741670();
   input += synapse0x27416b0();
   input += synapse0x27416f0();
   input += synapse0x2741730();
   input += synapse0x2741770();
   input += synapse0x27417b0();
   input += synapse0x27417f0();
   input += synapse0x2741830();
   input += synapse0x2741870();
   input += synapse0x27418b0();
   input += synapse0x2741340();
   input += synapse0x2741380();
   input += synapse0x2741a00();
   input += synapse0x2741a40();
   input += synapse0x2741a80();
   input += synapse0x2741ac0();
   input += synapse0x2741b00();
   input += synapse0x2741b40();
   return input;
}

double NNfunction_sb_cLcR::neuron0x27411b0() {
   double input = input0x27411b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2741b80() {
   double input = 1.14762;
   input += synapse0x2741ec0();
   input += synapse0x2741f00();
   input += synapse0x2741f40();
   input += synapse0x2741f80();
   input += synapse0x2741fc0();
   input += synapse0x2742000();
   input += synapse0x2742040();
   input += synapse0x2742080();
   input += synapse0x27420c0();
   input += synapse0x2742100();
   input += synapse0x2742140();
   input += synapse0x2742180();
   input += synapse0x27421c0();
   input += synapse0x2742200();
   input += synapse0x2742240();
   input += synapse0x2742280();
   input += synapse0x2741d10();
   input += synapse0x2741d50();
   input += synapse0x27423d0();
   input += synapse0x2742410();
   input += synapse0x2742450();
   input += synapse0x2742490();
   input += synapse0x27424d0();
   input += synapse0x2742510();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2741b80() {
   double input = input0x2741b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2742550() {
   double input = 0.872216;
   input += synapse0x2742890();
   input += synapse0x2736e60();
   input += synapse0x2736ea0();
   input += synapse0x2736ee0();
   input += synapse0x2737130();
   input += synapse0x2737170();
   input += synapse0x27371b0();
   input += synapse0x2737400();
   input += synapse0x2737440();
   input += synapse0x2737690();
   input += synapse0x27376d0();
   input += synapse0x2737710();
   input += synapse0x2737960();
   input += synapse0x27379a0();
   input += synapse0x2737bf0();
   input += synapse0x2737c30();
   input += synapse0x27426e0();
   input += synapse0x2742720();
   input += synapse0x2737d80();
   input += synapse0x2738290();
   input += synapse0x27382d0();
   input += synapse0x2738310();
   input += synapse0x2738560();
   input += synapse0x27385a0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2742550() {
   double input = input0x2742550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x27385e0() {
   double input = -0.848747;
   input += synapse0x2737e50();
   input += synapse0x2737e90();
   input += synapse0x2737ed0();
   input += synapse0x2737f10();
   input += synapse0x2738890();
   input += synapse0x2744be0();
   input += synapse0x2744c20();
   input += synapse0x2744c60();
   input += synapse0x2744ca0();
   input += synapse0x2744ce0();
   input += synapse0x2744d20();
   input += synapse0x2744d60();
   input += synapse0x2744da0();
   input += synapse0x2744de0();
   input += synapse0x2744e20();
   input += synapse0x2744e60();
   input += synapse0x2738770();
   input += synapse0x27387b0();
   input += synapse0x2744fb0();
   input += synapse0x2744ff0();
   input += synapse0x2745030();
   input += synapse0x2745070();
   input += synapse0x27450b0();
   input += synapse0x27450f0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x27385e0() {
   double input = input0x27385e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2745130() {
   double input = 1.18756;
   input += synapse0x2745470();
   input += synapse0x27454b0();
   input += synapse0x27454f0();
   input += synapse0x2745530();
   input += synapse0x2745570();
   input += synapse0x27455b0();
   input += synapse0x27455f0();
   input += synapse0x2745630();
   input += synapse0x2745670();
   input += synapse0x27456b0();
   input += synapse0x27456f0();
   input += synapse0x2745730();
   input += synapse0x2745770();
   input += synapse0x27457b0();
   input += synapse0x27457f0();
   input += synapse0x2745830();
   input += synapse0x27452c0();
   input += synapse0x2745300();
   input += synapse0x2745980();
   input += synapse0x27459c0();
   input += synapse0x2745a00();
   input += synapse0x2745a40();
   input += synapse0x2745a80();
   input += synapse0x2745ac0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2745130() {
   double input = input0x2745130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2745b00() {
   double input = 0.828236;
   input += synapse0x2745e40();
   input += synapse0x2745e80();
   input += synapse0x2745ec0();
   input += synapse0x2745f00();
   input += synapse0x2745f40();
   input += synapse0x2745f80();
   input += synapse0x2745fc0();
   input += synapse0x2746000();
   input += synapse0x2746040();
   input += synapse0x2746080();
   input += synapse0x27460c0();
   input += synapse0x2746100();
   input += synapse0x2746140();
   input += synapse0x2746180();
   input += synapse0x27461c0();
   input += synapse0x2746200();
   input += synapse0x2745c90();
   input += synapse0x2745cd0();
   input += synapse0x2746350();
   input += synapse0x2746390();
   input += synapse0x27463d0();
   input += synapse0x2746410();
   input += synapse0x2746450();
   input += synapse0x2746490();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2745b00() {
   double input = input0x2745b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x27464d0() {
   double input = -1.02521;
   input += synapse0x2746810();
   input += synapse0x2746850();
   input += synapse0x2746890();
   input += synapse0x27468d0();
   input += synapse0x2746910();
   input += synapse0x2746950();
   input += synapse0x2746990();
   input += synapse0x27469d0();
   input += synapse0x2746a10();
   input += synapse0x2746a50();
   input += synapse0x2746a90();
   input += synapse0x2746ad0();
   input += synapse0x2746b10();
   input += synapse0x2746b50();
   input += synapse0x2746b90();
   input += synapse0x2746bd0();
   input += synapse0x2746660();
   input += synapse0x27466a0();
   input += synapse0x2746d20();
   input += synapse0x2746d60();
   input += synapse0x2746da0();
   input += synapse0x2746de0();
   input += synapse0x2746e20();
   input += synapse0x2746e60();
   return input;
}

double NNfunction_sb_cLcR::neuron0x27464d0() {
   double input = input0x27464d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2746ea0() {
   double input = -1.67398;
   input += synapse0x27471e0();
   input += synapse0x2747220();
   input += synapse0x2747260();
   input += synapse0x27472a0();
   input += synapse0x27472e0();
   input += synapse0x2747320();
   input += synapse0x2747360();
   input += synapse0x27473a0();
   input += synapse0x27473e0();
   input += synapse0x2747420();
   input += synapse0x2747460();
   input += synapse0x27474a0();
   input += synapse0x27474e0();
   input += synapse0x2747520();
   input += synapse0x2747560();
   input += synapse0x27475a0();
   input += synapse0x2747030();
   input += synapse0x2747070();
   input += synapse0x27476f0();
   input += synapse0x2747730();
   input += synapse0x2747770();
   input += synapse0x27477b0();
   input += synapse0x27477f0();
   input += synapse0x2747830();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2746ea0() {
   double input = input0x2746ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2747870() {
   double input = 2.05193;
   input += synapse0x2747bb0();
   input += synapse0x2747bf0();
   input += synapse0x2747c30();
   input += synapse0x2747c70();
   input += synapse0x2747cb0();
   input += synapse0x2747cf0();
   input += synapse0x2747d30();
   input += synapse0x2747d70();
   input += synapse0x2747db0();
   input += synapse0x2747df0();
   input += synapse0x2747e30();
   input += synapse0x2747e70();
   input += synapse0x2747eb0();
   input += synapse0x2747ef0();
   input += synapse0x2747f30();
   input += synapse0x2747f70();
   input += synapse0x2747a00();
   input += synapse0x2747a40();
   input += synapse0x27480c0();
   input += synapse0x2748100();
   input += synapse0x2748140();
   input += synapse0x2748180();
   input += synapse0x27481c0();
   input += synapse0x2748200();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2747870() {
   double input = input0x2747870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2748240() {
   double input = 1.13492;
   input += synapse0x2748580();
   input += synapse0x27485c0();
   input += synapse0x2748600();
   input += synapse0x2748640();
   input += synapse0x2748680();
   input += synapse0x27486c0();
   input += synapse0x2748700();
   input += synapse0x2748740();
   input += synapse0x2748780();
   input += synapse0x27487c0();
   input += synapse0x2748800();
   input += synapse0x2748840();
   input += synapse0x2748880();
   input += synapse0x27488c0();
   input += synapse0x2748900();
   input += synapse0x2748940();
   input += synapse0x27483d0();
   input += synapse0x2748410();
   input += synapse0x2748a90();
   input += synapse0x2748ad0();
   input += synapse0x2748b10();
   input += synapse0x2748b50();
   input += synapse0x2748b90();
   input += synapse0x2748bd0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2748240() {
   double input = input0x2748240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2748c10() {
   double input = -0.437746;
   input += synapse0x2748f50();
   input += synapse0x2748f90();
   input += synapse0x2748fd0();
   input += synapse0x2749010();
   input += synapse0x2749050();
   input += synapse0x2749090();
   input += synapse0x27490d0();
   input += synapse0x2749110();
   input += synapse0x2749150();
   input += synapse0x2749190();
   input += synapse0x27491d0();
   input += synapse0x2749210();
   input += synapse0x2749250();
   input += synapse0x2749290();
   input += synapse0x27492d0();
   input += synapse0x2749310();
   input += synapse0x2748da0();
   input += synapse0x2748de0();
   input += synapse0x2749460();
   input += synapse0x27494a0();
   input += synapse0x27494e0();
   input += synapse0x2749520();
   input += synapse0x2749560();
   input += synapse0x27495a0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2748c10() {
   double input = input0x2748c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x27495e0() {
   double input = -0.0371526;
   input += synapse0x2732050();
   input += synapse0x2732090();
   input += synapse0x27320d0();
   input += synapse0x2732110();
   input += synapse0x2732150();
   input += synapse0x2732190();
   input += synapse0x27321d0();
   input += synapse0x2732210();
   input += synapse0x2749d30();
   input += synapse0x2749d70();
   input += synapse0x2749db0();
   input += synapse0x2749df0();
   input += synapse0x2749e30();
   input += synapse0x2749e70();
   input += synapse0x2749eb0();
   input += synapse0x2749ef0();
   input += synapse0x2749770();
   input += synapse0x27497b0();
   input += synapse0x274a040();
   input += synapse0x274a080();
   input += synapse0x274a0c0();
   input += synapse0x274a100();
   input += synapse0x274a140();
   input += synapse0x274a180();
   return input;
}

double NNfunction_sb_cLcR::neuron0x27495e0() {
   double input = input0x27495e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x274a1c0() {
   double input = -0.658884;
   input += synapse0x274a500();
   input += synapse0x274a540();
   input += synapse0x274a580();
   input += synapse0x274a5c0();
   input += synapse0x274a600();
   input += synapse0x274a640();
   input += synapse0x274a680();
   input += synapse0x274a6c0();
   input += synapse0x274a700();
   input += synapse0x274a740();
   input += synapse0x274a780();
   input += synapse0x274a7c0();
   input += synapse0x274a800();
   input += synapse0x274a840();
   input += synapse0x274a880();
   input += synapse0x274a8c0();
   input += synapse0x274a350();
   input += synapse0x274a390();
   input += synapse0x274aa10();
   input += synapse0x274aa50();
   input += synapse0x274aa90();
   input += synapse0x274aad0();
   input += synapse0x274ab10();
   input += synapse0x274ab50();
   return input;
}

double NNfunction_sb_cLcR::neuron0x274a1c0() {
   double input = input0x274a1c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x274ab90() {
   double input = 0.0124466;
   input += synapse0x274aed0();
   input += synapse0x274af10();
   input += synapse0x274af50();
   input += synapse0x274af90();
   input += synapse0x274afd0();
   input += synapse0x274b010();
   input += synapse0x274b050();
   input += synapse0x274b090();
   input += synapse0x274b0d0();
   input += synapse0x274b110();
   input += synapse0x274b150();
   input += synapse0x274b190();
   input += synapse0x274b1d0();
   input += synapse0x274b210();
   input += synapse0x274b250();
   input += synapse0x274b290();
   input += synapse0x274ad20();
   input += synapse0x274ad60();
   input += synapse0x273b890();
   input += synapse0x273b8d0();
   input += synapse0x273b910();
   input += synapse0x273b950();
   input += synapse0x273b990();
   input += synapse0x273b9d0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x274ab90() {
   double input = input0x274ab90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x273ba10() {
   double input = 1.56158;
   input += synapse0x273bd50();
   input += synapse0x273bd90();
   input += synapse0x273bdd0();
   input += synapse0x273be10();
   input += synapse0x273be50();
   input += synapse0x273be90();
   input += synapse0x273bed0();
   input += synapse0x273bf10();
   input += synapse0x273bf50();
   input += synapse0x273bf90();
   input += synapse0x273bfd0();
   input += synapse0x273c010();
   input += synapse0x273c050();
   input += synapse0x273c090();
   input += synapse0x273c0d0();
   input += synapse0x273c110();
   input += synapse0x273bba0();
   input += synapse0x273bbe0();
   input += synapse0x273c260();
   input += synapse0x273c2a0();
   input += synapse0x273c2e0();
   input += synapse0x273c320();
   input += synapse0x273c360();
   input += synapse0x273c3a0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x273ba10() {
   double input = input0x273ba10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x273c3e0() {
   double input = 1.81957;
   input += synapse0x273c720();
   input += synapse0x273c760();
   input += synapse0x273c7a0();
   input += synapse0x273c7e0();
   input += synapse0x273c820();
   input += synapse0x273c860();
   input += synapse0x273c8a0();
   input += synapse0x273c8e0();
   input += synapse0x273c920();
   input += synapse0x273c960();
   input += synapse0x273c9a0();
   input += synapse0x273c9e0();
   input += synapse0x273ca20();
   input += synapse0x273ca60();
   input += synapse0x273caa0();
   input += synapse0x273cae0();
   input += synapse0x273c570();
   input += synapse0x273c5b0();
   input += synapse0x273cc30();
   input += synapse0x273cc70();
   input += synapse0x273ccb0();
   input += synapse0x273ccf0();
   input += synapse0x273cd30();
   input += synapse0x273cd70();
   return input;
}

double NNfunction_sb_cLcR::neuron0x273c3e0() {
   double input = input0x273c3e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x273cdb0() {
   double input = 2.49195;
   input += synapse0x273d0f0();
   input += synapse0x273d130();
   input += synapse0x273d170();
   input += synapse0x273d1b0();
   input += synapse0x273d1f0();
   input += synapse0x273d230();
   input += synapse0x273d270();
   input += synapse0x273d2b0();
   input += synapse0x273d2f0();
   input += synapse0x273d330();
   input += synapse0x273d370();
   input += synapse0x273d3b0();
   input += synapse0x273d3f0();
   input += synapse0x273d430();
   input += synapse0x273d470();
   input += synapse0x273d4b0();
   input += synapse0x273cf40();
   input += synapse0x273cf80();
   input += synapse0x273d600();
   input += synapse0x273d640();
   input += synapse0x273d680();
   input += synapse0x273d6c0();
   input += synapse0x273d700();
   input += synapse0x273d740();
   return input;
}

double NNfunction_sb_cLcR::neuron0x273cdb0() {
   double input = input0x273cdb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x274f3f0() {
   double input = 3.03784;
   input += synapse0x274f610();
   input += synapse0x274f650();
   input += synapse0x274f690();
   input += synapse0x274f6d0();
   input += synapse0x274f710();
   input += synapse0x274f750();
   input += synapse0x274f790();
   input += synapse0x274f7d0();
   input += synapse0x274f810();
   input += synapse0x274f850();
   input += synapse0x274f890();
   input += synapse0x274f8d0();
   input += synapse0x274f910();
   input += synapse0x274f950();
   input += synapse0x274f990();
   input += synapse0x274f9d0();
   input += synapse0x273d780();
   input += synapse0x273d7c0();
   input += synapse0x274fb20();
   input += synapse0x274fb60();
   input += synapse0x274fba0();
   input += synapse0x274fbe0();
   input += synapse0x274fc20();
   input += synapse0x274fc60();
   return input;
}

double NNfunction_sb_cLcR::neuron0x274f3f0() {
   double input = input0x274f3f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x274fca0() {
   double input = 0.941156;
   input += synapse0x274ffe0();
   input += synapse0x2750020();
   input += synapse0x2750060();
   input += synapse0x27500a0();
   input += synapse0x27500e0();
   input += synapse0x2750120();
   input += synapse0x2750160();
   input += synapse0x27501a0();
   input += synapse0x27501e0();
   input += synapse0x2750220();
   input += synapse0x2750260();
   input += synapse0x27502a0();
   input += synapse0x27502e0();
   input += synapse0x2750320();
   input += synapse0x2750360();
   input += synapse0x27503a0();
   input += synapse0x274fe30();
   input += synapse0x274fe70();
   input += synapse0x27504f0();
   input += synapse0x2750530();
   input += synapse0x2750570();
   input += synapse0x27505b0();
   input += synapse0x27505f0();
   input += synapse0x2750630();
   return input;
}

double NNfunction_sb_cLcR::neuron0x274fca0() {
   double input = input0x274fca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2750670() {
   double input = 0.752197;
   input += synapse0x27509b0();
   input += synapse0x27509f0();
   input += synapse0x2750a30();
   input += synapse0x2750a70();
   input += synapse0x2750ab0();
   input += synapse0x2750af0();
   input += synapse0x2750b30();
   input += synapse0x2750b70();
   input += synapse0x2750bb0();
   input += synapse0x2750bf0();
   input += synapse0x2750c30();
   input += synapse0x2750c70();
   input += synapse0x2750cb0();
   input += synapse0x2750cf0();
   input += synapse0x2750d30();
   input += synapse0x2750d70();
   input += synapse0x2750800();
   input += synapse0x2750840();
   input += synapse0x2750ec0();
   input += synapse0x2750f00();
   input += synapse0x2750f40();
   input += synapse0x2750f80();
   input += synapse0x2750fc0();
   input += synapse0x2751000();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2750670() {
   double input = input0x2750670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2751040() {
   double input = -0.0635715;
   input += synapse0x2751380();
   input += synapse0x27513c0();
   input += synapse0x2751400();
   input += synapse0x2751440();
   input += synapse0x2751480();
   input += synapse0x27514c0();
   input += synapse0x2751500();
   input += synapse0x2751540();
   input += synapse0x2751580();
   input += synapse0x27515c0();
   input += synapse0x2751600();
   input += synapse0x2751640();
   input += synapse0x2751680();
   input += synapse0x27516c0();
   input += synapse0x2751700();
   input += synapse0x2751740();
   input += synapse0x27511d0();
   input += synapse0x2751210();
   input += synapse0x2751890();
   input += synapse0x27518d0();
   input += synapse0x2751910();
   input += synapse0x2751950();
   input += synapse0x2751990();
   input += synapse0x27519d0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2751040() {
   double input = input0x2751040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2758240() {
   double input = -0.973882;
   input += synapse0x272df70();
   input += synapse0x272dfb0();
   input += synapse0x272f480();
   input += synapse0x272f4c0();
   input += synapse0x272fe50();
   input += synapse0x272fe90();
   input += synapse0x2730c20();
   input += synapse0x2730c60();
   input += synapse0x27315f0();
   input += synapse0x2731630();
   input += synapse0x2731fc0();
   input += synapse0x2732000();
   input += synapse0x2732aa0();
   input += synapse0x2732ae0();
   input += synapse0x2733470();
   input += synapse0x27334b0();
   input += synapse0x2730550();
   input += synapse0x2730590();
   input += synapse0x2735020();
   input += synapse0x2735060();
   input += synapse0x27359f0();
   input += synapse0x2735a30();
   input += synapse0x27363c0();
   input += synapse0x2736400();
   input += synapse0x2736d90();
   input += synapse0x2736dd0();
   input += synapse0x272af00();
   input += synapse0x272af40();
   input += synapse0x2738e80();
   input += synapse0x2738ec0();
   input += synapse0x2739850();
   input += synapse0x2739890();
   input += synapse0x273a220();
   input += synapse0x273a260();
   input += synapse0x273abf0();
   input += synapse0x273ac30();
   input += synapse0x273b5c0();
   input += synapse0x273b600();
   input += synapse0x2734110();
   input += synapse0x2734150();
   input += synapse0x273d9c0();
   input += synapse0x273da00();
   input += synapse0x273e350();
   input += synapse0x273e390();
   input += synapse0x273ed20();
   input += synapse0x273ed60();
   input += synapse0x273f6f0();
   input += synapse0x273f730();
   input += synapse0x27400c0();
   input += synapse0x2740100();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2758240() {
   double input = input0x2758240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x27585e0() {
   double input = -0.370862;
   input += synapse0x2742800();
   input += synapse0x2742840();
   input += synapse0x2737dc0();
   input += synapse0x2737e00();
   input += synapse0x27453e0();
   input += synapse0x2745420();
   input += synapse0x2745db0();
   input += synapse0x2745df0();
   input += synapse0x2746780();
   input += synapse0x27467c0();
   input += synapse0x2747150();
   input += synapse0x2747190();
   input += synapse0x2747b20();
   input += synapse0x2747b60();
   input += synapse0x27484f0();
   input += synapse0x2748530();
   input += synapse0x2748ec0();
   input += synapse0x2748f00();
   input += synapse0x2749890();
   input += synapse0x27498d0();
   input += synapse0x274a470();
   input += synapse0x274a4b0();
   input += synapse0x274ae40();
   input += synapse0x274ae80();
   input += synapse0x273bcc0();
   input += synapse0x273bd00();
   input += synapse0x273c690();
   input += synapse0x273c6d0();
   input += synapse0x273d060();
   input += synapse0x273d0a0();
   input += synapse0x274f580();
   input += synapse0x274f5c0();
   input += synapse0x274ff50();
   input += synapse0x274ff90();
   input += synapse0x2750920();
   input += synapse0x2750960();
   input += synapse0x27512f0();
   input += synapse0x2751330();
   input += synapse0x272d1e0();
   input += synapse0x272d220();
   input += synapse0x2740a90();
   input += synapse0x2740ad0();
   input += synapse0x2751a10();
   input += synapse0x2751a50();
   input += synapse0x2751a90();
   input += synapse0x2751ad0();
   input += synapse0x2758980();
   input += synapse0x27589c0();
   input += synapse0x2758a00();
   input += synapse0x2758a40();
   return input;
}

double NNfunction_sb_cLcR::neuron0x27585e0() {
   double input = input0x27585e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2758a80() {
   double input = 1.27627;
   input += synapse0x2758dc0();
   input += synapse0x2758e00();
   input += synapse0x2758e40();
   input += synapse0x2758e80();
   input += synapse0x2758ec0();
   input += synapse0x2758f00();
   input += synapse0x2758f40();
   input += synapse0x2758f80();
   input += synapse0x2758fc0();
   input += synapse0x2759000();
   input += synapse0x2759040();
   input += synapse0x2759080();
   input += synapse0x27590c0();
   input += synapse0x2759100();
   input += synapse0x2759140();
   input += synapse0x2759180();
   input += synapse0x2758c10();
   input += synapse0x2758c50();
   input += synapse0x27592d0();
   input += synapse0x2759310();
   input += synapse0x2759350();
   input += synapse0x2759390();
   input += synapse0x27593d0();
   input += synapse0x2759410();
   input += synapse0x2759450();
   input += synapse0x2759490();
   input += synapse0x27594d0();
   input += synapse0x2759510();
   input += synapse0x2759550();
   input += synapse0x2759590();
   input += synapse0x27595d0();
   input += synapse0x2759610();
   input += synapse0x27591c0();
   input += synapse0x2759200();
   input += synapse0x2759240();
   input += synapse0x2759280();
   input += synapse0x2759860();
   input += synapse0x27598a0();
   input += synapse0x27598e0();
   input += synapse0x2759920();
   input += synapse0x2759960();
   input += synapse0x27599a0();
   input += synapse0x27599e0();
   input += synapse0x2759a20();
   input += synapse0x2759a60();
   input += synapse0x2759aa0();
   input += synapse0x2759ae0();
   input += synapse0x2759b20();
   input += synapse0x2759b60();
   input += synapse0x2759ba0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2758a80() {
   double input = input0x2758a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2759be0() {
   double input = -0.0141991;
   input += synapse0x2759f20();
   input += synapse0x2759f60();
   input += synapse0x2759fa0();
   input += synapse0x2759fe0();
   input += synapse0x275a020();
   input += synapse0x275a060();
   input += synapse0x275a0a0();
   input += synapse0x275a0e0();
   input += synapse0x275a120();
   input += synapse0x275a160();
   input += synapse0x275a1a0();
   input += synapse0x275a1e0();
   input += synapse0x275a220();
   input += synapse0x275a260();
   input += synapse0x275a2a0();
   input += synapse0x275a2e0();
   input += synapse0x2759d70();
   input += synapse0x2759db0();
   input += synapse0x275a430();
   input += synapse0x275a470();
   input += synapse0x275a4b0();
   input += synapse0x275a4f0();
   input += synapse0x275a530();
   input += synapse0x275a570();
   input += synapse0x275a5b0();
   input += synapse0x275a5f0();
   input += synapse0x275a630();
   input += synapse0x275a670();
   input += synapse0x275a6b0();
   input += synapse0x275a6f0();
   input += synapse0x275a730();
   input += synapse0x275a770();
   input += synapse0x275a320();
   input += synapse0x275a360();
   input += synapse0x275a3a0();
   input += synapse0x275a3e0();
   input += synapse0x275a9c0();
   input += synapse0x275aa00();
   input += synapse0x275aa40();
   input += synapse0x275aa80();
   input += synapse0x275aac0();
   input += synapse0x275ab00();
   input += synapse0x275ab40();
   input += synapse0x275ab80();
   input += synapse0x275abc0();
   input += synapse0x275ac00();
   input += synapse0x275ac40();
   input += synapse0x275ac80();
   input += synapse0x275acc0();
   input += synapse0x275ad00();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2759be0() {
   double input = input0x2759be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x275ad40() {
   double input = 0.178982;
   input += synapse0x275b080();
   input += synapse0x275b0c0();
   input += synapse0x275b100();
   input += synapse0x275b140();
   input += synapse0x275b180();
   input += synapse0x275b1c0();
   input += synapse0x275b200();
   input += synapse0x275b240();
   input += synapse0x275b280();
   input += synapse0x275b2c0();
   input += synapse0x275b300();
   input += synapse0x275b340();
   input += synapse0x275b380();
   input += synapse0x275b3c0();
   input += synapse0x275b400();
   input += synapse0x275b440();
   input += synapse0x275aed0();
   input += synapse0x275af10();
   input += synapse0x275b590();
   input += synapse0x275b5d0();
   input += synapse0x275b610();
   input += synapse0x275b650();
   input += synapse0x275b690();
   input += synapse0x275b6d0();
   input += synapse0x275b710();
   input += synapse0x275b750();
   input += synapse0x275b790();
   input += synapse0x275b7d0();
   input += synapse0x275b810();
   input += synapse0x275b850();
   input += synapse0x275b890();
   input += synapse0x275b8d0();
   input += synapse0x275b480();
   input += synapse0x275b4c0();
   input += synapse0x275b500();
   input += synapse0x275b540();
   input += synapse0x275bb20();
   input += synapse0x275bb60();
   input += synapse0x275bba0();
   input += synapse0x275bbe0();
   input += synapse0x275bc20();
   input += synapse0x275bc60();
   input += synapse0x275bca0();
   input += synapse0x275bce0();
   input += synapse0x275bd20();
   input += synapse0x275bd60();
   input += synapse0x275bda0();
   input += synapse0x275bde0();
   input += synapse0x275be20();
   input += synapse0x275be60();
   return input;
}

double NNfunction_sb_cLcR::neuron0x275ad40() {
   double input = input0x275ad40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x275bea0() {
   double input = 5.22324;
   input += synapse0x272cf80();
   input += synapse0x275c0c0();
   input += synapse0x275c100();
   input += synapse0x275c140();
   input += synapse0x275c180();
   return input;
}

double NNfunction_sb_cLcR::neuron0x275bea0() {
   double input = input0x275bea0();
   return (input * 1)+0;
}

double NNfunction_sb_cLcR::synapse0x24f1910() {
   return (neuron0x2727f60()*-0.0227144);
}

double NNfunction_sb_cLcR::synapse0x2727e20() {
   return (neuron0x27282a0()*-0.0110256);
}

double NNfunction_sb_cLcR::synapse0x2727e60() {
   return (neuron0x27285e0()*1.06303);
}

double NNfunction_sb_cLcR::synapse0x272d270() {
   return (neuron0x2728920()*-0.0499414);
}

double NNfunction_sb_cLcR::synapse0x272d2b0() {
   return (neuron0x2728c60()*-0.0046347);
}

double NNfunction_sb_cLcR::synapse0x272d2f0() {
   return (neuron0x2728fa0()*0.0205386);
}

double NNfunction_sb_cLcR::synapse0x272d330() {
   return (neuron0x27292e0()*0.0145641);
}

double NNfunction_sb_cLcR::synapse0x272d370() {
   return (neuron0x2729620()*0.0419807);
}

double NNfunction_sb_cLcR::synapse0x272d3b0() {
   return (neuron0x2729960()*-0.0431891);
}

double NNfunction_sb_cLcR::synapse0x272d3f0() {
   return (neuron0x2729ca0()*-0.00192039);
}

double NNfunction_sb_cLcR::synapse0x272d430() {
   return (neuron0x2729fe0()*0.0141535);
}

double NNfunction_sb_cLcR::synapse0x272d470() {
   return (neuron0x272a320()*-0.0125969);
}

double NNfunction_sb_cLcR::synapse0x272d4b0() {
   return (neuron0x272a660()*-0.33644);
}

double NNfunction_sb_cLcR::synapse0x272d4f0() {
   return (neuron0x272a9a0()*0.0402132);
}

double NNfunction_sb_cLcR::synapse0x272d530() {
   return (neuron0x272ace0()*-0.0150444);
}

double NNfunction_sb_cLcR::synapse0x272d570() {
   return (neuron0x272b020()*0.047396);
}

double NNfunction_sb_cLcR::synapse0x2727d90() {
   return (neuron0x272b360()*0.000588926);
}

double NNfunction_sb_cLcR::synapse0x2727dd0() {
   return (neuron0x272b8c0()*-0.0509199);
}

double NNfunction_sb_cLcR::synapse0x24e3120() {
   return (neuron0x272bae0()*0.00531351);
}

double NNfunction_sb_cLcR::synapse0x24e3160() {
   return (neuron0x272be20()*0.0349941);
}

double NNfunction_sb_cLcR::synapse0x272d7d0() {
   return (neuron0x272c160()*-0.0116107);
}

double NNfunction_sb_cLcR::synapse0x272d810() {
   return (neuron0x272c4a0()*-0.00663181);
}

double NNfunction_sb_cLcR::synapse0x272d850() {
   return (neuron0x272c7e0()*-0.00158838);
}

double NNfunction_sb_cLcR::synapse0x272d890() {
   return (neuron0x272cb20()*0.024027);
}

double NNfunction_sb_cLcR::synapse0x272dc10() {
   return (neuron0x2727f60()*0.0127239);
}

double NNfunction_sb_cLcR::synapse0x272dc50() {
   return (neuron0x27282a0()*0.0228627);
}

double NNfunction_sb_cLcR::synapse0x272dc90() {
   return (neuron0x27285e0()*-0.136444);
}

double NNfunction_sb_cLcR::synapse0x272dcd0() {
   return (neuron0x2728920()*-1.9938);
}

double NNfunction_sb_cLcR::synapse0x272dd10() {
   return (neuron0x2728c60()*-0.0198106);
}

double NNfunction_sb_cLcR::synapse0x272dd50() {
   return (neuron0x2728fa0()*-0.0148147);
}

double NNfunction_sb_cLcR::synapse0x272dd90() {
   return (neuron0x27292e0()*0.0281642);
}

double NNfunction_sb_cLcR::synapse0x272ddd0() {
   return (neuron0x2729620()*0.00103);
}

double NNfunction_sb_cLcR::synapse0x272de10() {
   return (neuron0x2729960()*-0.00381806);
}

double NNfunction_sb_cLcR::synapse0x272d6c0() {
   return (neuron0x2729ca0()*0.0120345);
}

double NNfunction_sb_cLcR::synapse0x272d700() {
   return (neuron0x2729fe0()*0.00530926);
}

double NNfunction_sb_cLcR::synapse0x272d740() {
   return (neuron0x272a320()*-0.0234167);
}

double NNfunction_sb_cLcR::synapse0x272d780() {
   return (neuron0x272a660()*-0.0168429);
}

double NNfunction_sb_cLcR::synapse0x272e060() {
   return (neuron0x272a9a0()*-0.0110485);
}

double NNfunction_sb_cLcR::synapse0x272e0a0() {
   return (neuron0x272ace0()*0.0120731);
}

double NNfunction_sb_cLcR::synapse0x272e0e0() {
   return (neuron0x272b020()*-0.0873456);
}

double NNfunction_sb_cLcR::synapse0x272da60() {
   return (neuron0x272b360()*0.00139925);
}

double NNfunction_sb_cLcR::synapse0x272daa0() {
   return (neuron0x272b8c0()*0.00501559);
}

double NNfunction_sb_cLcR::synapse0x272e230() {
   return (neuron0x272bae0()*-0.0289175);
}

double NNfunction_sb_cLcR::synapse0x272e270() {
   return (neuron0x272be20()*-0.00465363);
}

double NNfunction_sb_cLcR::synapse0x272e2b0() {
   return (neuron0x272c160()*0.0276949);
}

double NNfunction_sb_cLcR::synapse0x272e2f0() {
   return (neuron0x272c4a0()*0.0088534);
}

double NNfunction_sb_cLcR::synapse0x272e330() {
   return (neuron0x272c7e0()*-0.00964906);
}

double NNfunction_sb_cLcR::synapse0x272e370() {
   return (neuron0x272cb20()*-0.00629469);
}

double NNfunction_sb_cLcR::synapse0x272e6f0() {
   return (neuron0x2727f60()*0.144969);
}

double NNfunction_sb_cLcR::synapse0x272e730() {
   return (neuron0x27282a0()*0.279802);
}

double NNfunction_sb_cLcR::synapse0x272e770() {
   return (neuron0x27285e0()*-0.764536);
}

double NNfunction_sb_cLcR::synapse0x272e7b0() {
   return (neuron0x2728920()*-0.582166);
}

double NNfunction_sb_cLcR::synapse0x272e7f0() {
   return (neuron0x2728c60()*-0.305255);
}

double NNfunction_sb_cLcR::synapse0x272e830() {
   return (neuron0x2728fa0()*0.0363037);
}

double NNfunction_sb_cLcR::synapse0x272e870() {
   return (neuron0x27292e0()*-0.0854294);
}

double NNfunction_sb_cLcR::synapse0x272e8b0() {
   return (neuron0x2729620()*0.525934);
}

double NNfunction_sb_cLcR::synapse0x272e8f0() {
   return (neuron0x2729960()*-0.0722679);
}

double NNfunction_sb_cLcR::synapse0x272e930() {
   return (neuron0x2729ca0()*0.179585);
}

double NNfunction_sb_cLcR::synapse0x272e970() {
   return (neuron0x2729fe0()*0.0567473);
}

double NNfunction_sb_cLcR::synapse0x272e9b0() {
   return (neuron0x272a320()*0.754498);
}

double NNfunction_sb_cLcR::synapse0x272e9f0() {
   return (neuron0x272a660()*0.00216687);
}

double NNfunction_sb_cLcR::synapse0x272ea30() {
   return (neuron0x272a9a0()*-0.215393);
}

double NNfunction_sb_cLcR::synapse0x272ea70() {
   return (neuron0x272ace0()*-0.0528037);
}

double NNfunction_sb_cLcR::synapse0x272eab0() {
   return (neuron0x272b020()*0.353452);
}

double NNfunction_sb_cLcR::synapse0x272e540() {
   return (neuron0x272b360()*-0.443776);
}

double NNfunction_sb_cLcR::synapse0x272e580() {
   return (neuron0x272b8c0()*0.592152);
}

double NNfunction_sb_cLcR::synapse0x24f1020() {
   return (neuron0x272bae0()*-0.197905);
}

double NNfunction_sb_cLcR::synapse0x24f1060() {
   return (neuron0x272be20()*0.876865);
}

double NNfunction_sb_cLcR::synapse0x2716ff0() {
   return (neuron0x272c160()*-0.0454794);
}

double NNfunction_sb_cLcR::synapse0x2717030() {
   return (neuron0x272c4a0()*-0.0378139);
}

double NNfunction_sb_cLcR::synapse0x2717070() {
   return (neuron0x272c7e0()*0.194276);
}

double NNfunction_sb_cLcR::synapse0x2727ea0() {
   return (neuron0x272cb20()*-0.118855);
}

double NNfunction_sb_cLcR::synapse0x272e000() {
   return (neuron0x2727f60()*0.0266691);
}

double NNfunction_sb_cLcR::synapse0x2727ee0() {
   return (neuron0x27282a0()*0.0138464);
}

double NNfunction_sb_cLcR::synapse0x2727f20() {
   return (neuron0x27285e0()*0.0940596);
}

double NNfunction_sb_cLcR::synapse0x272ec00() {
   return (neuron0x2728920()*-0.107338);
}

double NNfunction_sb_cLcR::synapse0x272ec40() {
   return (neuron0x2728c60()*-0.107813);
}

double NNfunction_sb_cLcR::synapse0x272ec80() {
   return (neuron0x2728fa0()*-0.0259702);
}

double NNfunction_sb_cLcR::synapse0x272ecc0() {
   return (neuron0x27292e0()*-0.0319832);
}

double NNfunction_sb_cLcR::synapse0x272ed00() {
   return (neuron0x2729620()*0.0144954);
}

double NNfunction_sb_cLcR::synapse0x272ed40() {
   return (neuron0x2729960()*-0.0131229);
}

double NNfunction_sb_cLcR::synapse0x272ed80() {
   return (neuron0x2729ca0()*-0.0391074);
}

double NNfunction_sb_cLcR::synapse0x272edc0() {
   return (neuron0x2729fe0()*0.101195);
}

double NNfunction_sb_cLcR::synapse0x272ee00() {
   return (neuron0x272a320()*0.565911);
}

double NNfunction_sb_cLcR::synapse0x272ee40() {
   return (neuron0x272a660()*-0.213415);
}

double NNfunction_sb_cLcR::synapse0x272ee80() {
   return (neuron0x272a9a0()*-0.146479);
}

double NNfunction_sb_cLcR::synapse0x272eec0() {
   return (neuron0x272ace0()*0.112291);
}

double NNfunction_sb_cLcR::synapse0x272ef00() {
   return (neuron0x272b020()*-0.0514932);
}

double NNfunction_sb_cLcR::synapse0x272de50() {
   return (neuron0x272b360()*-0.164181);
}

double NNfunction_sb_cLcR::synapse0x272de90() {
   return (neuron0x272b8c0()*0.360287);
}

double NNfunction_sb_cLcR::synapse0x272f050() {
   return (neuron0x272bae0()*0.204033);
}

double NNfunction_sb_cLcR::synapse0x272f090() {
   return (neuron0x272be20()*0.0277032);
}

double NNfunction_sb_cLcR::synapse0x272f0d0() {
   return (neuron0x272c160()*-0.00971869);
}

double NNfunction_sb_cLcR::synapse0x272f110() {
   return (neuron0x272c4a0()*0.0248125);
}

double NNfunction_sb_cLcR::synapse0x272f150() {
   return (neuron0x272c7e0()*-0.0178534);
}

double NNfunction_sb_cLcR::synapse0x272f190() {
   return (neuron0x272cb20()*0.00977062);
}

double NNfunction_sb_cLcR::synapse0x272f510() {
   return (neuron0x2727f60()*0.00887485);
}

double NNfunction_sb_cLcR::synapse0x272f550() {
   return (neuron0x27282a0()*-0.247824);
}

double NNfunction_sb_cLcR::synapse0x272f590() {
   return (neuron0x27285e0()*-0.269857);
}

double NNfunction_sb_cLcR::synapse0x272f5d0() {
   return (neuron0x2728920()*0.675365);
}

double NNfunction_sb_cLcR::synapse0x272f610() {
   return (neuron0x2728c60()*0.0497038);
}

double NNfunction_sb_cLcR::synapse0x272f650() {
   return (neuron0x2728fa0()*0.317433);
}

double NNfunction_sb_cLcR::synapse0x272f690() {
   return (neuron0x27292e0()*-0.144636);
}

double NNfunction_sb_cLcR::synapse0x272f6d0() {
   return (neuron0x2729620()*0.291851);
}

double NNfunction_sb_cLcR::synapse0x272f710() {
   return (neuron0x2729960()*-0.0474229);
}

double NNfunction_sb_cLcR::synapse0x272f750() {
   return (neuron0x2729ca0()*0.218552);
}

double NNfunction_sb_cLcR::synapse0x272f790() {
   return (neuron0x2729fe0()*-0.47143);
}

double NNfunction_sb_cLcR::synapse0x272f7d0() {
   return (neuron0x272a320()*0.101728);
}

double NNfunction_sb_cLcR::synapse0x272f810() {
   return (neuron0x272a660()*0.702053);
}

double NNfunction_sb_cLcR::synapse0x272f850() {
   return (neuron0x272a9a0()*-0.366689);
}

double NNfunction_sb_cLcR::synapse0x272f890() {
   return (neuron0x272ace0()*0.0329197);
}

double NNfunction_sb_cLcR::synapse0x272f8d0() {
   return (neuron0x272b020()*-1.13013);
}

double NNfunction_sb_cLcR::synapse0x272f360() {
   return (neuron0x272b360()*0.286796);
}

double NNfunction_sb_cLcR::synapse0x272f3a0() {
   return (neuron0x272b8c0()*0.205578);
}

double NNfunction_sb_cLcR::synapse0x272fa20() {
   return (neuron0x272bae0()*-0.218801);
}

double NNfunction_sb_cLcR::synapse0x272fa60() {
   return (neuron0x272be20()*0.270765);
}

double NNfunction_sb_cLcR::synapse0x272faa0() {
   return (neuron0x272c160()*-0.000157918);
}

double NNfunction_sb_cLcR::synapse0x272fae0() {
   return (neuron0x272c4a0()*0.182486);
}

double NNfunction_sb_cLcR::synapse0x272fb20() {
   return (neuron0x272c7e0()*-0.0254097);
}

double NNfunction_sb_cLcR::synapse0x272fb60() {
   return (neuron0x272cb20()*-0.308245);
}

double NNfunction_sb_cLcR::synapse0x272fee0() {
   return (neuron0x2727f60()*0.0048315);
}

double NNfunction_sb_cLcR::synapse0x272ff20() {
   return (neuron0x27282a0()*-0.215616);
}

double NNfunction_sb_cLcR::synapse0x272ff60() {
   return (neuron0x27285e0()*-0.629321);
}

double NNfunction_sb_cLcR::synapse0x272ffa0() {
   return (neuron0x2728920()*-1.08783);
}

double NNfunction_sb_cLcR::synapse0x272ffe0() {
   return (neuron0x2728c60()*-0.0603701);
}

double NNfunction_sb_cLcR::synapse0x2730020() {
   return (neuron0x2728fa0()*-0.0716696);
}

double NNfunction_sb_cLcR::synapse0x2730060() {
   return (neuron0x27292e0()*0.231455);
}

double NNfunction_sb_cLcR::synapse0x27300a0() {
   return (neuron0x2729620()*0.248525);
}

double NNfunction_sb_cLcR::synapse0x27300e0() {
   return (neuron0x2729960()*-0.0374464);
}

double NNfunction_sb_cLcR::synapse0x24f1370() {
   return (neuron0x2729ca0()*-0.0840857);
}

double NNfunction_sb_cLcR::synapse0x24f13b0() {
   return (neuron0x2729fe0()*-0.257911);
}

double NNfunction_sb_cLcR::synapse0x24f13f0() {
   return (neuron0x272a320()*0.170985);
}

double NNfunction_sb_cLcR::synapse0x24f1430() {
   return (neuron0x272a660()*-1.43948);
}

double NNfunction_sb_cLcR::synapse0x24f1470() {
   return (neuron0x272a9a0()*-0.310794);
}

double NNfunction_sb_cLcR::synapse0x24f14b0() {
   return (neuron0x272ace0()*0.0154217);
}

double NNfunction_sb_cLcR::synapse0x24f14f0() {
   return (neuron0x272b020()*1.24033);
}

double NNfunction_sb_cLcR::synapse0x272fd30() {
   return (neuron0x272b360()*0.15814);
}

double NNfunction_sb_cLcR::synapse0x272fd70() {
   return (neuron0x272b8c0()*-0.231012);
}

double NNfunction_sb_cLcR::synapse0x24f1640() {
   return (neuron0x272bae0()*0.203494);
}

double NNfunction_sb_cLcR::synapse0x24f1680() {
   return (neuron0x272be20()*0.368056);
}

double NNfunction_sb_cLcR::synapse0x24f16c0() {
   return (neuron0x272c160()*0.207757);
}

double NNfunction_sb_cLcR::synapse0x24f1700() {
   return (neuron0x272c4a0()*0.260986);
}

double NNfunction_sb_cLcR::synapse0x24f1740() {
   return (neuron0x272c7e0()*0.113878);
}

double NNfunction_sb_cLcR::synapse0x2730930() {
   return (neuron0x272cb20()*-0.0729404);
}

double NNfunction_sb_cLcR::synapse0x2730cb0() {
   return (neuron0x2727f60()*0.0455456);
}

double NNfunction_sb_cLcR::synapse0x2730cf0() {
   return (neuron0x27282a0()*-0.682131);
}

double NNfunction_sb_cLcR::synapse0x2730d30() {
   return (neuron0x27285e0()*-0.248954);
}

double NNfunction_sb_cLcR::synapse0x2730d70() {
   return (neuron0x2728920()*-0.304822);
}

double NNfunction_sb_cLcR::synapse0x2730db0() {
   return (neuron0x2728c60()*0.171366);
}

double NNfunction_sb_cLcR::synapse0x2730df0() {
   return (neuron0x2728fa0()*0.346749);
}

double NNfunction_sb_cLcR::synapse0x2730e30() {
   return (neuron0x27292e0()*-0.604156);
}

double NNfunction_sb_cLcR::synapse0x2730e70() {
   return (neuron0x2729620()*-0.0910898);
}

double NNfunction_sb_cLcR::synapse0x2730eb0() {
   return (neuron0x2729960()*-0.310752);
}

double NNfunction_sb_cLcR::synapse0x2730ef0() {
   return (neuron0x2729ca0()*-0.709983);
}

double NNfunction_sb_cLcR::synapse0x2730f30() {
   return (neuron0x2729fe0()*-0.00960326);
}

double NNfunction_sb_cLcR::synapse0x2730f70() {
   return (neuron0x272a320()*0.501047);
}

double NNfunction_sb_cLcR::synapse0x2730fb0() {
   return (neuron0x272a660()*-0.603815);
}

double NNfunction_sb_cLcR::synapse0x2730ff0() {
   return (neuron0x272a9a0()*0.625331);
}

double NNfunction_sb_cLcR::synapse0x2731030() {
   return (neuron0x272ace0()*-0.0447243);
}

double NNfunction_sb_cLcR::synapse0x2731070() {
   return (neuron0x272b020()*-0.975843);
}

double NNfunction_sb_cLcR::synapse0x2730b00() {
   return (neuron0x272b360()*-0.38332);
}

double NNfunction_sb_cLcR::synapse0x2730b40() {
   return (neuron0x272b8c0()*-0.232513);
}

double NNfunction_sb_cLcR::synapse0x27311c0() {
   return (neuron0x272bae0()*-0.170931);
}

double NNfunction_sb_cLcR::synapse0x2731200() {
   return (neuron0x272be20()*0.309297);
}

double NNfunction_sb_cLcR::synapse0x2731240() {
   return (neuron0x272c160()*-0.568869);
}

double NNfunction_sb_cLcR::synapse0x2731280() {
   return (neuron0x272c4a0()*0.308322);
}

double NNfunction_sb_cLcR::synapse0x27312c0() {
   return (neuron0x272c7e0()*-0.388038);
}

double NNfunction_sb_cLcR::synapse0x2731300() {
   return (neuron0x272cb20()*-0.0625748);
}

double NNfunction_sb_cLcR::synapse0x2731680() {
   return (neuron0x2727f60()*-0.0148681);
}

double NNfunction_sb_cLcR::synapse0x27316c0() {
   return (neuron0x27282a0()*0.314018);
}

double NNfunction_sb_cLcR::synapse0x2731700() {
   return (neuron0x27285e0()*-0.133579);
}

double NNfunction_sb_cLcR::synapse0x2731740() {
   return (neuron0x2728920()*-0.552063);
}

double NNfunction_sb_cLcR::synapse0x2731780() {
   return (neuron0x2728c60()*-0.258567);
}

double NNfunction_sb_cLcR::synapse0x27317c0() {
   return (neuron0x2728fa0()*0.92165);
}

double NNfunction_sb_cLcR::synapse0x2731800() {
   return (neuron0x27292e0()*0.221301);
}

double NNfunction_sb_cLcR::synapse0x2731840() {
   return (neuron0x2729620()*-0.38569);
}

double NNfunction_sb_cLcR::synapse0x2731880() {
   return (neuron0x2729960()*-0.537693);
}

double NNfunction_sb_cLcR::synapse0x27318c0() {
   return (neuron0x2729ca0()*0.312374);
}

double NNfunction_sb_cLcR::synapse0x2731900() {
   return (neuron0x2729fe0()*-0.429731);
}

double NNfunction_sb_cLcR::synapse0x2731940() {
   return (neuron0x272a320()*-0.0395301);
}

double NNfunction_sb_cLcR::synapse0x2731980() {
   return (neuron0x272a660()*0.056394);
}

double NNfunction_sb_cLcR::synapse0x27319c0() {
   return (neuron0x272a9a0()*0.133528);
}

double NNfunction_sb_cLcR::synapse0x2731a00() {
   return (neuron0x272ace0()*-0.0791416);
}

double NNfunction_sb_cLcR::synapse0x2731a40() {
   return (neuron0x272b020()*-0.483069);
}

double NNfunction_sb_cLcR::synapse0x27314d0() {
   return (neuron0x272b360()*-0.369579);
}

double NNfunction_sb_cLcR::synapse0x2731510() {
   return (neuron0x272b8c0()*-0.0109848);
}

double NNfunction_sb_cLcR::synapse0x2731b90() {
   return (neuron0x272bae0()*0.0271422);
}

double NNfunction_sb_cLcR::synapse0x2731bd0() {
   return (neuron0x272be20()*-0.655704);
}

double NNfunction_sb_cLcR::synapse0x2731c10() {
   return (neuron0x272c160()*-0.827091);
}

double NNfunction_sb_cLcR::synapse0x2731c50() {
   return (neuron0x272c4a0()*-0.312844);
}

double NNfunction_sb_cLcR::synapse0x2731c90() {
   return (neuron0x272c7e0()*-0.130197);
}

double NNfunction_sb_cLcR::synapse0x2731cd0() {
   return (neuron0x272cb20()*0.00346279);
}

double NNfunction_sb_cLcR::synapse0x272b7b0() {
   return (neuron0x2727f60()*0.0961672);
}

double NNfunction_sb_cLcR::synapse0x272b7f0() {
   return (neuron0x27282a0()*0.0238467);
}

double NNfunction_sb_cLcR::synapse0x272b830() {
   return (neuron0x27285e0()*-0.131377);
}

double NNfunction_sb_cLcR::synapse0x272b870() {
   return (neuron0x2728920()*5.03065);
}

double NNfunction_sb_cLcR::synapse0x2732260() {
   return (neuron0x2728c60()*-0.0554085);
}

double NNfunction_sb_cLcR::synapse0x27322a0() {
   return (neuron0x2728fa0()*-0.0478373);
}

double NNfunction_sb_cLcR::synapse0x27322e0() {
   return (neuron0x27292e0()*0.0633223);
}

double NNfunction_sb_cLcR::synapse0x2732320() {
   return (neuron0x2729620()*-0.0399332);
}

double NNfunction_sb_cLcR::synapse0x2732360() {
   return (neuron0x2729960()*-0.102702);
}

double NNfunction_sb_cLcR::synapse0x27323a0() {
   return (neuron0x2729ca0()*-0.0856603);
}

double NNfunction_sb_cLcR::synapse0x27323e0() {
   return (neuron0x2729fe0()*0.0574791);
}

double NNfunction_sb_cLcR::synapse0x2732420() {
   return (neuron0x272a320()*0.0102098);
}

double NNfunction_sb_cLcR::synapse0x2732460() {
   return (neuron0x272a660()*0.370065);
}

double NNfunction_sb_cLcR::synapse0x27324a0() {
   return (neuron0x272a9a0()*0.0639222);
}

double NNfunction_sb_cLcR::synapse0x27324e0() {
   return (neuron0x272ace0()*0.0273317);
}

double NNfunction_sb_cLcR::synapse0x2732520() {
   return (neuron0x272b020()*0.170661);
}

double NNfunction_sb_cLcR::synapse0x2731ea0() {
   return (neuron0x272b360()*-0.00749581);
}

double NNfunction_sb_cLcR::synapse0x2731ee0() {
   return (neuron0x272b8c0()*0.0486049);
}

double NNfunction_sb_cLcR::synapse0x2732670() {
   return (neuron0x272bae0()*-0.0670979);
}

double NNfunction_sb_cLcR::synapse0x27326b0() {
   return (neuron0x272be20()*0.0128056);
}

double NNfunction_sb_cLcR::synapse0x27326f0() {
   return (neuron0x272c160()*0.0274195);
}

double NNfunction_sb_cLcR::synapse0x2732730() {
   return (neuron0x272c4a0()*-0.0325237);
}

double NNfunction_sb_cLcR::synapse0x2732770() {
   return (neuron0x272c7e0()*0.00140112);
}

double NNfunction_sb_cLcR::synapse0x27327b0() {
   return (neuron0x272cb20()*0.0183224);
}

double NNfunction_sb_cLcR::synapse0x2732b30() {
   return (neuron0x2727f60()*0.199827);
}

double NNfunction_sb_cLcR::synapse0x2732b70() {
   return (neuron0x27282a0()*0.00358311);
}

double NNfunction_sb_cLcR::synapse0x2732bb0() {
   return (neuron0x27285e0()*-0.0975708);
}

double NNfunction_sb_cLcR::synapse0x2732bf0() {
   return (neuron0x2728920()*0.179002);
}

double NNfunction_sb_cLcR::synapse0x2732c30() {
   return (neuron0x2728c60()*-0.445459);
}

double NNfunction_sb_cLcR::synapse0x2732c70() {
   return (neuron0x2728fa0()*-0.141368);
}

double NNfunction_sb_cLcR::synapse0x2732cb0() {
   return (neuron0x27292e0()*-1.23015);
}

double NNfunction_sb_cLcR::synapse0x2732cf0() {
   return (neuron0x2729620()*-0.79373);
}

double NNfunction_sb_cLcR::synapse0x2732d30() {
   return (neuron0x2729960()*-0.294144);
}

double NNfunction_sb_cLcR::synapse0x2732d70() {
   return (neuron0x2729ca0()*-1.7569);
}

double NNfunction_sb_cLcR::synapse0x2732db0() {
   return (neuron0x2729fe0()*-1.2027);
}

double NNfunction_sb_cLcR::synapse0x2732df0() {
   return (neuron0x272a320()*-0.44744);
}

double NNfunction_sb_cLcR::synapse0x2732e30() {
   return (neuron0x272a660()*-0.62959);
}

double NNfunction_sb_cLcR::synapse0x2732e70() {
   return (neuron0x272a9a0()*0.566626);
}

double NNfunction_sb_cLcR::synapse0x2732eb0() {
   return (neuron0x272ace0()*1.30143);
}

double NNfunction_sb_cLcR::synapse0x2732ef0() {
   return (neuron0x272b020()*0.239408);
}

double NNfunction_sb_cLcR::synapse0x2732980() {
   return (neuron0x272b360()*0.598464);
}

double NNfunction_sb_cLcR::synapse0x27329c0() {
   return (neuron0x272b8c0()*0.403886);
}

double NNfunction_sb_cLcR::synapse0x2733040() {
   return (neuron0x272bae0()*-0.963249);
}

double NNfunction_sb_cLcR::synapse0x2733080() {
   return (neuron0x272be20()*0.463368);
}

double NNfunction_sb_cLcR::synapse0x27330c0() {
   return (neuron0x272c160()*1.17502);
}

double NNfunction_sb_cLcR::synapse0x2733100() {
   return (neuron0x272c4a0()*0.0232973);
}

double NNfunction_sb_cLcR::synapse0x2733140() {
   return (neuron0x272c7e0()*0.204246);
}

double NNfunction_sb_cLcR::synapse0x2733180() {
   return (neuron0x272cb20()*-0.136767);
}

double NNfunction_sb_cLcR::synapse0x2733500() {
   return (neuron0x2727f60()*-0.0421895);
}

double NNfunction_sb_cLcR::synapse0x2733540() {
   return (neuron0x27282a0()*-0.0379234);
}

double NNfunction_sb_cLcR::synapse0x2733580() {
   return (neuron0x27285e0()*-0.00642026);
}

double NNfunction_sb_cLcR::synapse0x27335c0() {
   return (neuron0x2728920()*0.0425872);
}

double NNfunction_sb_cLcR::synapse0x2733600() {
   return (neuron0x2728c60()*0.159618);
}

double NNfunction_sb_cLcR::synapse0x2733640() {
   return (neuron0x2728fa0()*-0.00720306);
}

double NNfunction_sb_cLcR::synapse0x2733680() {
   return (neuron0x27292e0()*0.0889875);
}

double NNfunction_sb_cLcR::synapse0x27336c0() {
   return (neuron0x2729620()*-0.0125366);
}

double NNfunction_sb_cLcR::synapse0x2733700() {
   return (neuron0x2729960()*0.0272571);
}

double NNfunction_sb_cLcR::synapse0x2733740() {
   return (neuron0x2729ca0()*0.0479503);
}

double NNfunction_sb_cLcR::synapse0x2733780() {
   return (neuron0x2729fe0()*-0.112195);
}

double NNfunction_sb_cLcR::synapse0x27337c0() {
   return (neuron0x272a320()*-0.129971);
}

double NNfunction_sb_cLcR::synapse0x2733800() {
   return (neuron0x272a660()*-0.953134);
}

double NNfunction_sb_cLcR::synapse0x2733840() {
   return (neuron0x272a9a0()*0.042552);
}

double NNfunction_sb_cLcR::synapse0x2733880() {
   return (neuron0x272ace0()*0.0673919);
}

double NNfunction_sb_cLcR::synapse0x27338c0() {
   return (neuron0x272b020()*-0.0308499);
}

double NNfunction_sb_cLcR::synapse0x2733350() {
   return (neuron0x272b360()*0.128414);
}

double NNfunction_sb_cLcR::synapse0x2733390() {
   return (neuron0x272b8c0()*-0.117192);
}

double NNfunction_sb_cLcR::synapse0x2730120() {
   return (neuron0x272bae0()*-0.0153829);
}

double NNfunction_sb_cLcR::synapse0x2730160() {
   return (neuron0x272be20()*-0.0309743);
}

double NNfunction_sb_cLcR::synapse0x27301a0() {
   return (neuron0x272c160()*-0.0342368);
}

double NNfunction_sb_cLcR::synapse0x27301e0() {
   return (neuron0x272c4a0()*0.0420906);
}

double NNfunction_sb_cLcR::synapse0x2730220() {
   return (neuron0x272c7e0()*0.0269616);
}

double NNfunction_sb_cLcR::synapse0x2730260() {
   return (neuron0x272cb20()*-0.0173495);
}

double NNfunction_sb_cLcR::synapse0x27305e0() {
   return (neuron0x2727f60()*-0.337879);
}

double NNfunction_sb_cLcR::synapse0x2730620() {
   return (neuron0x27282a0()*0.230054);
}

double NNfunction_sb_cLcR::synapse0x2730660() {
   return (neuron0x27285e0()*0.11784);
}

double NNfunction_sb_cLcR::synapse0x27306a0() {
   return (neuron0x2728920()*0.708566);
}

double NNfunction_sb_cLcR::synapse0x27306e0() {
   return (neuron0x2728c60()*0.316805);
}

double NNfunction_sb_cLcR::synapse0x2730720() {
   return (neuron0x2728fa0()*1.4269);
}

double NNfunction_sb_cLcR::synapse0x2730760() {
   return (neuron0x27292e0()*-0.105567);
}

double NNfunction_sb_cLcR::synapse0x27307a0() {
   return (neuron0x2729620()*1.16666);
}

double NNfunction_sb_cLcR::synapse0x27307e0() {
   return (neuron0x2729960()*-0.735819);
}

double NNfunction_sb_cLcR::synapse0x2730820() {
   return (neuron0x2729ca0()*-0.203634);
}

double NNfunction_sb_cLcR::synapse0x2730860() {
   return (neuron0x2729fe0()*-0.0186023);
}

double NNfunction_sb_cLcR::synapse0x27308a0() {
   return (neuron0x272a320()*-0.441423);
}

double NNfunction_sb_cLcR::synapse0x27308e0() {
   return (neuron0x272a660()*-0.241183);
}

double NNfunction_sb_cLcR::synapse0x2734a20() {
   return (neuron0x272a9a0()*0.265992);
}

double NNfunction_sb_cLcR::synapse0x2734a60() {
   return (neuron0x272ace0()*-0.283132);
}

double NNfunction_sb_cLcR::synapse0x2734aa0() {
   return (neuron0x272b020()*-0.01469);
}

double NNfunction_sb_cLcR::synapse0x2730430() {
   return (neuron0x272b360()*-0.341376);
}

double NNfunction_sb_cLcR::synapse0x2730470() {
   return (neuron0x272b8c0()*0.0406857);
}

double NNfunction_sb_cLcR::synapse0x2734bf0() {
   return (neuron0x272bae0()*0.183927);
}

double NNfunction_sb_cLcR::synapse0x2734c30() {
   return (neuron0x272be20()*-0.0909224);
}

double NNfunction_sb_cLcR::synapse0x2734c70() {
   return (neuron0x272c160()*-0.47539);
}

double NNfunction_sb_cLcR::synapse0x2734cb0() {
   return (neuron0x272c4a0()*-0.133155);
}

double NNfunction_sb_cLcR::synapse0x2734cf0() {
   return (neuron0x272c7e0()*0.454879);
}

double NNfunction_sb_cLcR::synapse0x2734d30() {
   return (neuron0x272cb20()*-0.684271);
}

double NNfunction_sb_cLcR::synapse0x27350b0() {
   return (neuron0x2727f60()*-0.00285621);
}

double NNfunction_sb_cLcR::synapse0x27350f0() {
   return (neuron0x27282a0()*-0.0110748);
}

double NNfunction_sb_cLcR::synapse0x2735130() {
   return (neuron0x27285e0()*-0.0630185);
}

double NNfunction_sb_cLcR::synapse0x2735170() {
   return (neuron0x2728920()*-0.0818474);
}

double NNfunction_sb_cLcR::synapse0x27351b0() {
   return (neuron0x2728c60()*0.0358866);
}

double NNfunction_sb_cLcR::synapse0x27351f0() {
   return (neuron0x2728fa0()*0.00929101);
}

double NNfunction_sb_cLcR::synapse0x2735230() {
   return (neuron0x27292e0()*0.0233699);
}

double NNfunction_sb_cLcR::synapse0x2735270() {
   return (neuron0x2729620()*0.0139531);
}

double NNfunction_sb_cLcR::synapse0x27352b0() {
   return (neuron0x2729960()*-0.00409019);
}

double NNfunction_sb_cLcR::synapse0x27352f0() {
   return (neuron0x2729ca0()*0.00250052);
}

double NNfunction_sb_cLcR::synapse0x2735330() {
   return (neuron0x2729fe0()*-0.066565);
}

double NNfunction_sb_cLcR::synapse0x2735370() {
   return (neuron0x272a320()*-0.0423525);
}

double NNfunction_sb_cLcR::synapse0x27353b0() {
   return (neuron0x272a660()*0.629208);
}

double NNfunction_sb_cLcR::synapse0x27353f0() {
   return (neuron0x272a9a0()*0.0250038);
}

double NNfunction_sb_cLcR::synapse0x2735430() {
   return (neuron0x272ace0()*0.0273477);
}

double NNfunction_sb_cLcR::synapse0x2735470() {
   return (neuron0x272b020()*-0.294309);
}

double NNfunction_sb_cLcR::synapse0x2734f00() {
   return (neuron0x272b360()*0.0288364);
}

double NNfunction_sb_cLcR::synapse0x2734f40() {
   return (neuron0x272b8c0()*-0.0522771);
}

double NNfunction_sb_cLcR::synapse0x27355c0() {
   return (neuron0x272bae0()*-0.00346385);
}

double NNfunction_sb_cLcR::synapse0x2735600() {
   return (neuron0x272be20()*-0.0163979);
}

double NNfunction_sb_cLcR::synapse0x2735640() {
   return (neuron0x272c160()*0.00283688);
}

double NNfunction_sb_cLcR::synapse0x2735680() {
   return (neuron0x272c4a0()*0.0156669);
}

double NNfunction_sb_cLcR::synapse0x27356c0() {
   return (neuron0x272c7e0()*0.0440204);
}

double NNfunction_sb_cLcR::synapse0x2735700() {
   return (neuron0x272cb20()*-0.00439253);
}

double NNfunction_sb_cLcR::synapse0x2735a80() {
   return (neuron0x2727f60()*0.0135466);
}

double NNfunction_sb_cLcR::synapse0x2735ac0() {
   return (neuron0x27282a0()*-0.0287137);
}

double NNfunction_sb_cLcR::synapse0x2735b00() {
   return (neuron0x27285e0()*0.0308373);
}

double NNfunction_sb_cLcR::synapse0x2735b40() {
   return (neuron0x2728920()*-1.73093);
}

double NNfunction_sb_cLcR::synapse0x2735b80() {
   return (neuron0x2728c60()*-0.0694572);
}

double NNfunction_sb_cLcR::synapse0x2735bc0() {
   return (neuron0x2728fa0()*-0.0117566);
}

double NNfunction_sb_cLcR::synapse0x2735c00() {
   return (neuron0x27292e0()*-0.00182171);
}

double NNfunction_sb_cLcR::synapse0x2735c40() {
   return (neuron0x2729620()*0.0413605);
}

double NNfunction_sb_cLcR::synapse0x2735c80() {
   return (neuron0x2729960()*0.0553148);
}

double NNfunction_sb_cLcR::synapse0x2735cc0() {
   return (neuron0x2729ca0()*0.0607695);
}

double NNfunction_sb_cLcR::synapse0x2735d00() {
   return (neuron0x2729fe0()*-0.116775);
}

double NNfunction_sb_cLcR::synapse0x2735d40() {
   return (neuron0x272a320()*0.0760886);
}

double NNfunction_sb_cLcR::synapse0x2735d80() {
   return (neuron0x272a660()*1.21785);
}

double NNfunction_sb_cLcR::synapse0x2735dc0() {
   return (neuron0x272a9a0()*0.0104266);
}

double NNfunction_sb_cLcR::synapse0x2735e00() {
   return (neuron0x272ace0()*0.0409256);
}

double NNfunction_sb_cLcR::synapse0x2735e40() {
   return (neuron0x272b020()*-0.290701);
}

double NNfunction_sb_cLcR::synapse0x27358d0() {
   return (neuron0x272b360()*-0.0244823);
}

double NNfunction_sb_cLcR::synapse0x2735910() {
   return (neuron0x272b8c0()*-0.0546175);
}

double NNfunction_sb_cLcR::synapse0x2735f90() {
   return (neuron0x272bae0()*0.0663748);
}

double NNfunction_sb_cLcR::synapse0x2735fd0() {
   return (neuron0x272be20()*0.00280802);
}

double NNfunction_sb_cLcR::synapse0x2736010() {
   return (neuron0x272c160()*0.0725793);
}

double NNfunction_sb_cLcR::synapse0x2736050() {
   return (neuron0x272c4a0()*0.0417115);
}

double NNfunction_sb_cLcR::synapse0x2736090() {
   return (neuron0x272c7e0()*0.0888499);
}

double NNfunction_sb_cLcR::synapse0x27360d0() {
   return (neuron0x272cb20()*0.0350102);
}

double NNfunction_sb_cLcR::synapse0x2736450() {
   return (neuron0x2727f60()*-0.0611038);
}

double NNfunction_sb_cLcR::synapse0x2736490() {
   return (neuron0x27282a0()*0.665457);
}

double NNfunction_sb_cLcR::synapse0x27364d0() {
   return (neuron0x27285e0()*-0.0363045);
}

double NNfunction_sb_cLcR::synapse0x2736510() {
   return (neuron0x2728920()*-0.459509);
}

double NNfunction_sb_cLcR::synapse0x2736550() {
   return (neuron0x2728c60()*-0.403549);
}

double NNfunction_sb_cLcR::synapse0x2736590() {
   return (neuron0x2728fa0()*0.0973756);
}

double NNfunction_sb_cLcR::synapse0x27365d0() {
   return (neuron0x27292e0()*-0.250192);
}

double NNfunction_sb_cLcR::synapse0x2736610() {
   return (neuron0x2729620()*-0.445497);
}

double NNfunction_sb_cLcR::synapse0x2736650() {
   return (neuron0x2729960()*0.16494);
}

double NNfunction_sb_cLcR::synapse0x2736690() {
   return (neuron0x2729ca0()*-0.158295);
}

double NNfunction_sb_cLcR::synapse0x27366d0() {
   return (neuron0x2729fe0()*-0.343249);
}

double NNfunction_sb_cLcR::synapse0x2736710() {
   return (neuron0x272a320()*0.0751177);
}

double NNfunction_sb_cLcR::synapse0x2736750() {
   return (neuron0x272a660()*-0.766508);
}

double NNfunction_sb_cLcR::synapse0x2736790() {
   return (neuron0x272a9a0()*-0.169178);
}

double NNfunction_sb_cLcR::synapse0x27367d0() {
   return (neuron0x272ace0()*0.000798725);
}

double NNfunction_sb_cLcR::synapse0x2736810() {
   return (neuron0x272b020()*0.300931);
}

double NNfunction_sb_cLcR::synapse0x27362a0() {
   return (neuron0x272b360()*-0.0936117);
}

double NNfunction_sb_cLcR::synapse0x27362e0() {
   return (neuron0x272b8c0()*0.0859275);
}

double NNfunction_sb_cLcR::synapse0x2736960() {
   return (neuron0x272bae0()*-0.676213);
}

double NNfunction_sb_cLcR::synapse0x27369a0() {
   return (neuron0x272be20()*-0.151012);
}

double NNfunction_sb_cLcR::synapse0x27369e0() {
   return (neuron0x272c160()*0.0934473);
}

double NNfunction_sb_cLcR::synapse0x2736a20() {
   return (neuron0x272c4a0()*0.165303);
}

double NNfunction_sb_cLcR::synapse0x2736a60() {
   return (neuron0x272c7e0()*0.10924);
}

double NNfunction_sb_cLcR::synapse0x2736aa0() {
   return (neuron0x272cb20()*0.133138);
}

double NNfunction_sb_cLcR::synapse0x2736e20() {
   return (neuron0x2727f60()*-0.125481);
}

double NNfunction_sb_cLcR::synapse0x2728180() {
   return (neuron0x27282a0()*0.00279319);
}

double NNfunction_sb_cLcR::synapse0x27281c0() {
   return (neuron0x27285e0()*-0.739745);
}

double NNfunction_sb_cLcR::synapse0x27284c0() {
   return (neuron0x2728920()*-0.460791);
}

double NNfunction_sb_cLcR::synapse0x2728500() {
   return (neuron0x2728c60()*0.133846);
}

double NNfunction_sb_cLcR::synapse0x2728800() {
   return (neuron0x2728fa0()*0.535678);
}

double NNfunction_sb_cLcR::synapse0x2728840() {
   return (neuron0x27292e0()*0.142966);
}

double NNfunction_sb_cLcR::synapse0x2728b40() {
   return (neuron0x2729620()*0.0647515);
}

double NNfunction_sb_cLcR::synapse0x2728b80() {
   return (neuron0x2729960()*-0.136921);
}

double NNfunction_sb_cLcR::synapse0x2728e80() {
   return (neuron0x2729ca0()*0.621703);
}

double NNfunction_sb_cLcR::synapse0x2728ec0() {
   return (neuron0x2729fe0()*-0.457211);
}

double NNfunction_sb_cLcR::synapse0x27291c0() {
   return (neuron0x272a320()*0.131813);
}

double NNfunction_sb_cLcR::synapse0x2729200() {
   return (neuron0x272a660()*0.886424);
}

double NNfunction_sb_cLcR::synapse0x2729500() {
   return (neuron0x272a9a0()*-0.298572);
}

double NNfunction_sb_cLcR::synapse0x2729540() {
   return (neuron0x272ace0()*0.138068);
}

double NNfunction_sb_cLcR::synapse0x2729840() {
   return (neuron0x272b020()*-0.0283956);
}

double NNfunction_sb_cLcR::synapse0x2729880() {
   return (neuron0x272b360()*0.0837068);
}

double NNfunction_sb_cLcR::synapse0x2729b80() {
   return (neuron0x272b8c0()*0.299395);
}

double NNfunction_sb_cLcR::synapse0x2729bc0() {
   return (neuron0x272bae0()*-0.664676);
}

double NNfunction_sb_cLcR::synapse0x2729ec0() {
   return (neuron0x272be20()*0.189821);
}

double NNfunction_sb_cLcR::synapse0x2729f00() {
   return (neuron0x272c160()*-0.380113);
}

double NNfunction_sb_cLcR::synapse0x272a200() {
   return (neuron0x272c4a0()*0.12716);
}

double NNfunction_sb_cLcR::synapse0x272a240() {
   return (neuron0x272c7e0()*0.139306);
}

double NNfunction_sb_cLcR::synapse0x272a540() {
   return (neuron0x272cb20()*0.123983);
}

double NNfunction_sb_cLcR::synapse0x272a580() {
   return (neuron0x2727f60()*0.026974);
}

double NNfunction_sb_cLcR::synapse0x272b240() {
   return (neuron0x27282a0()*0.0698995);
}

double NNfunction_sb_cLcR::synapse0x272b280() {
   return (neuron0x27285e0()*-0.174986);
}

double NNfunction_sb_cLcR::synapse0x2736c70() {
   return (neuron0x2728920()*1.84958);
}

double NNfunction_sb_cLcR::synapse0x2736cb0() {
   return (neuron0x2728c60()*-0.0517413);
}

double NNfunction_sb_cLcR::synapse0x272b580() {
   return (neuron0x2728fa0()*0.00743048);
}

double NNfunction_sb_cLcR::synapse0x272b5c0() {
   return (neuron0x27292e0()*0.0598386);
}

double NNfunction_sb_cLcR::synapse0x24e3000() {
   return (neuron0x2729620()*-0.0414709);
}

double NNfunction_sb_cLcR::synapse0x24e3040() {
   return (neuron0x2729960()*-0.0467785);
}

double NNfunction_sb_cLcR::synapse0x272bd00() {
   return (neuron0x2729ca0()*-0.0857329);
}

double NNfunction_sb_cLcR::synapse0x272bd40() {
   return (neuron0x2729fe0()*0.032021);
}

double NNfunction_sb_cLcR::synapse0x272c040() {
   return (neuron0x272a320()*0.0042916);
}

double NNfunction_sb_cLcR::synapse0x272c080() {
   return (neuron0x272a660()*-0.0558568);
}

double NNfunction_sb_cLcR::synapse0x272c380() {
   return (neuron0x272a9a0()*0.0305528);
}

double NNfunction_sb_cLcR::synapse0x272c3c0() {
   return (neuron0x272ace0()*0.0051116);
}

double NNfunction_sb_cLcR::synapse0x272c6c0() {
   return (neuron0x272b020()*-0.00182547);
}

double NNfunction_sb_cLcR::synapse0x272c700() {
   return (neuron0x272b360()*0.0325062);
}

double NNfunction_sb_cLcR::synapse0x272ca00() {
   return (neuron0x272b8c0()*0.0256143);
}

double NNfunction_sb_cLcR::synapse0x272ca40() {
   return (neuron0x272bae0()*-0.0128805);
}

double NNfunction_sb_cLcR::synapse0x272cd40() {
   return (neuron0x272be20()*-0.0045892);
}

double NNfunction_sb_cLcR::synapse0x272cd80() {
   return (neuron0x272c160()*0.0185798);
}

double NNfunction_sb_cLcR::synapse0x272a880() {
   return (neuron0x272c4a0()*0.0157603);
}

double NNfunction_sb_cLcR::synapse0x272a8c0() {
   return (neuron0x272c7e0()*-0.00292106);
}

double NNfunction_sb_cLcR::synapse0x2738b90() {
   return (neuron0x272cb20()*0.00560419);
}

double NNfunction_sb_cLcR::synapse0x2738f10() {
   return (neuron0x2727f60()*0.241731);
}

double NNfunction_sb_cLcR::synapse0x2738f50() {
   return (neuron0x27282a0()*-0.320609);
}

double NNfunction_sb_cLcR::synapse0x2738f90() {
   return (neuron0x27285e0()*0.0370487);
}

double NNfunction_sb_cLcR::synapse0x2738fd0() {
   return (neuron0x2728920()*1.71502);
}

double NNfunction_sb_cLcR::synapse0x2739010() {
   return (neuron0x2728c60()*0.032391);
}

double NNfunction_sb_cLcR::synapse0x2739050() {
   return (neuron0x2728fa0()*-0.40643);
}

double NNfunction_sb_cLcR::synapse0x2739090() {
   return (neuron0x27292e0()*0.131522);
}

double NNfunction_sb_cLcR::synapse0x27390d0() {
   return (neuron0x2729620()*-0.0235662);
}

double NNfunction_sb_cLcR::synapse0x2739110() {
   return (neuron0x2729960()*-0.301505);
}

double NNfunction_sb_cLcR::synapse0x2739150() {
   return (neuron0x2729ca0()*0.213296);
}

double NNfunction_sb_cLcR::synapse0x2739190() {
   return (neuron0x2729fe0()*0.0544852);
}

double NNfunction_sb_cLcR::synapse0x27391d0() {
   return (neuron0x272a320()*0.0351509);
}

double NNfunction_sb_cLcR::synapse0x2739210() {
   return (neuron0x272a660()*0.517468);
}

double NNfunction_sb_cLcR::synapse0x2739250() {
   return (neuron0x272a9a0()*0.0156043);
}

double NNfunction_sb_cLcR::synapse0x2739290() {
   return (neuron0x272ace0()*0.0630293);
}

double NNfunction_sb_cLcR::synapse0x27392d0() {
   return (neuron0x272b020()*0.0374236);
}

double NNfunction_sb_cLcR::synapse0x2738d60() {
   return (neuron0x272b360()*0.146711);
}

double NNfunction_sb_cLcR::synapse0x2738da0() {
   return (neuron0x272b8c0()*-0.126259);
}

double NNfunction_sb_cLcR::synapse0x2739420() {
   return (neuron0x272bae0()*0.426023);
}

double NNfunction_sb_cLcR::synapse0x2739460() {
   return (neuron0x272be20()*-0.0458937);
}

double NNfunction_sb_cLcR::synapse0x27394a0() {
   return (neuron0x272c160()*0.55047);
}

double NNfunction_sb_cLcR::synapse0x27394e0() {
   return (neuron0x272c4a0()*-0.150022);
}

double NNfunction_sb_cLcR::synapse0x2739520() {
   return (neuron0x272c7e0()*0.251619);
}

double NNfunction_sb_cLcR::synapse0x2739560() {
   return (neuron0x272cb20()*-0.141893);
}

double NNfunction_sb_cLcR::synapse0x27398e0() {
   return (neuron0x2727f60()*-0.137576);
}

double NNfunction_sb_cLcR::synapse0x2739920() {
   return (neuron0x27282a0()*0.0457401);
}

double NNfunction_sb_cLcR::synapse0x2739960() {
   return (neuron0x27285e0()*-0.252384);
}

double NNfunction_sb_cLcR::synapse0x27399a0() {
   return (neuron0x2728920()*0.0967086);
}

double NNfunction_sb_cLcR::synapse0x27399e0() {
   return (neuron0x2728c60()*0.228281);
}

double NNfunction_sb_cLcR::synapse0x2739a20() {
   return (neuron0x2728fa0()*0.516298);
}

double NNfunction_sb_cLcR::synapse0x2739a60() {
   return (neuron0x27292e0()*-0.278559);
}

double NNfunction_sb_cLcR::synapse0x2739aa0() {
   return (neuron0x2729620()*-0.335633);
}

double NNfunction_sb_cLcR::synapse0x2739ae0() {
   return (neuron0x2729960()*-0.0609975);
}

double NNfunction_sb_cLcR::synapse0x2739b20() {
   return (neuron0x2729ca0()*-0.0617014);
}

double NNfunction_sb_cLcR::synapse0x2739b60() {
   return (neuron0x2729fe0()*-0.0152855);
}

double NNfunction_sb_cLcR::synapse0x2739ba0() {
   return (neuron0x272a320()*-0.2243);
}

double NNfunction_sb_cLcR::synapse0x2739be0() {
   return (neuron0x272a660()*0.289469);
}

double NNfunction_sb_cLcR::synapse0x2739c20() {
   return (neuron0x272a9a0()*0.0683783);
}

double NNfunction_sb_cLcR::synapse0x2739c60() {
   return (neuron0x272ace0()*-0.178761);
}

double NNfunction_sb_cLcR::synapse0x2739ca0() {
   return (neuron0x272b020()*-0.00156467);
}

double NNfunction_sb_cLcR::synapse0x2739730() {
   return (neuron0x272b360()*0.198017);
}

double NNfunction_sb_cLcR::synapse0x2739770() {
   return (neuron0x272b8c0()*-0.0942213);
}

double NNfunction_sb_cLcR::synapse0x2739df0() {
   return (neuron0x272bae0()*-0.264036);
}

double NNfunction_sb_cLcR::synapse0x2739e30() {
   return (neuron0x272be20()*-0.135782);
}

double NNfunction_sb_cLcR::synapse0x2739e70() {
   return (neuron0x272c160()*0.0566473);
}

double NNfunction_sb_cLcR::synapse0x2739eb0() {
   return (neuron0x272c4a0()*-0.112193);
}

double NNfunction_sb_cLcR::synapse0x2739ef0() {
   return (neuron0x272c7e0()*-0.218161);
}

double NNfunction_sb_cLcR::synapse0x2739f30() {
   return (neuron0x272cb20()*0.0759163);
}

double NNfunction_sb_cLcR::synapse0x273a2b0() {
   return (neuron0x2727f60()*0.47018);
}

double NNfunction_sb_cLcR::synapse0x273a2f0() {
   return (neuron0x27282a0()*-0.350428);
}

double NNfunction_sb_cLcR::synapse0x273a330() {
   return (neuron0x27285e0()*-0.5923);
}

double NNfunction_sb_cLcR::synapse0x273a370() {
   return (neuron0x2728920()*0.280992);
}

double NNfunction_sb_cLcR::synapse0x273a3b0() {
   return (neuron0x2728c60()*0.17732);
}

double NNfunction_sb_cLcR::synapse0x273a3f0() {
   return (neuron0x2728fa0()*-0.4529);
}

double NNfunction_sb_cLcR::synapse0x273a430() {
   return (neuron0x27292e0()*-0.232243);
}

double NNfunction_sb_cLcR::synapse0x273a470() {
   return (neuron0x2729620()*0.204876);
}

double NNfunction_sb_cLcR::synapse0x273a4b0() {
   return (neuron0x2729960()*0.598459);
}

double NNfunction_sb_cLcR::synapse0x273a4f0() {
   return (neuron0x2729ca0()*-0.161851);
}

double NNfunction_sb_cLcR::synapse0x273a530() {
   return (neuron0x2729fe0()*0.0792169);
}

double NNfunction_sb_cLcR::synapse0x273a570() {
   return (neuron0x272a320()*-0.29644);
}

double NNfunction_sb_cLcR::synapse0x273a5b0() {
   return (neuron0x272a660()*-0.557185);
}

double NNfunction_sb_cLcR::synapse0x273a5f0() {
   return (neuron0x272a9a0()*-0.193806);
}

double NNfunction_sb_cLcR::synapse0x273a630() {
   return (neuron0x272ace0()*-0.386826);
}

double NNfunction_sb_cLcR::synapse0x273a670() {
   return (neuron0x272b020()*-0.321199);
}

double NNfunction_sb_cLcR::synapse0x273a100() {
   return (neuron0x272b360()*-0.231387);
}

double NNfunction_sb_cLcR::synapse0x273a140() {
   return (neuron0x272b8c0()*0.208958);
}

double NNfunction_sb_cLcR::synapse0x273a7c0() {
   return (neuron0x272bae0()*-0.407799);
}

double NNfunction_sb_cLcR::synapse0x273a800() {
   return (neuron0x272be20()*0.154482);
}

double NNfunction_sb_cLcR::synapse0x273a840() {
   return (neuron0x272c160()*-0.456876);
}

double NNfunction_sb_cLcR::synapse0x273a880() {
   return (neuron0x272c4a0()*0.0608204);
}

double NNfunction_sb_cLcR::synapse0x273a8c0() {
   return (neuron0x272c7e0()*0.192626);
}

double NNfunction_sb_cLcR::synapse0x273a900() {
   return (neuron0x272cb20()*-0.0745202);
}

double NNfunction_sb_cLcR::synapse0x273ac80() {
   return (neuron0x2727f60()*-0.25996);
}

double NNfunction_sb_cLcR::synapse0x273acc0() {
   return (neuron0x27282a0()*-0.230998);
}

double NNfunction_sb_cLcR::synapse0x273ad00() {
   return (neuron0x27285e0()*-0.144743);
}

double NNfunction_sb_cLcR::synapse0x273ad40() {
   return (neuron0x2728920()*0.27836);
}

double NNfunction_sb_cLcR::synapse0x273ad80() {
   return (neuron0x2728c60()*-0.159499);
}

double NNfunction_sb_cLcR::synapse0x273adc0() {
   return (neuron0x2728fa0()*0.12345);
}

double NNfunction_sb_cLcR::synapse0x273ae00() {
   return (neuron0x27292e0()*0.155592);
}

double NNfunction_sb_cLcR::synapse0x273ae40() {
   return (neuron0x2729620()*-0.153208);
}

double NNfunction_sb_cLcR::synapse0x273ae80() {
   return (neuron0x2729960()*-0.00716758);
}

double NNfunction_sb_cLcR::synapse0x273aec0() {
   return (neuron0x2729ca0()*0.428205);
}

double NNfunction_sb_cLcR::synapse0x273af00() {
   return (neuron0x2729fe0()*0.486215);
}

double NNfunction_sb_cLcR::synapse0x273af40() {
   return (neuron0x272a320()*0.416712);
}

double NNfunction_sb_cLcR::synapse0x273af80() {
   return (neuron0x272a660()*-0.531673);
}

double NNfunction_sb_cLcR::synapse0x273afc0() {
   return (neuron0x272a9a0()*0.251339);
}

double NNfunction_sb_cLcR::synapse0x273b000() {
   return (neuron0x272ace0()*0.101425);
}

double NNfunction_sb_cLcR::synapse0x273b040() {
   return (neuron0x272b020()*-0.586494);
}

double NNfunction_sb_cLcR::synapse0x273aad0() {
   return (neuron0x272b360()*-0.243253);
}

double NNfunction_sb_cLcR::synapse0x273ab10() {
   return (neuron0x272b8c0()*-0.175695);
}

double NNfunction_sb_cLcR::synapse0x273b190() {
   return (neuron0x272bae0()*0.143921);
}

double NNfunction_sb_cLcR::synapse0x273b1d0() {
   return (neuron0x272be20()*0.658448);
}

double NNfunction_sb_cLcR::synapse0x273b210() {
   return (neuron0x272c160()*-0.22029);
}

double NNfunction_sb_cLcR::synapse0x273b250() {
   return (neuron0x272c4a0()*0.167376);
}

double NNfunction_sb_cLcR::synapse0x273b290() {
   return (neuron0x272c7e0()*0.0543311);
}

double NNfunction_sb_cLcR::synapse0x273b2d0() {
   return (neuron0x272cb20()*0.437036);
}

double NNfunction_sb_cLcR::synapse0x273b650() {
   return (neuron0x2727f60()*-0.00255303);
}

double NNfunction_sb_cLcR::synapse0x273b690() {
   return (neuron0x27282a0()*0.0534139);
}

double NNfunction_sb_cLcR::synapse0x273b6d0() {
   return (neuron0x27285e0()*-0.0818503);
}

double NNfunction_sb_cLcR::synapse0x273b710() {
   return (neuron0x2728920()*1.68829);
}

double NNfunction_sb_cLcR::synapse0x273b750() {
   return (neuron0x2728c60()*-0.00405211);
}

double NNfunction_sb_cLcR::synapse0x273b790() {
   return (neuron0x2728fa0()*0.00553507);
}

double NNfunction_sb_cLcR::synapse0x273b7d0() {
   return (neuron0x27292e0()*0.00895665);
}

double NNfunction_sb_cLcR::synapse0x273b810() {
   return (neuron0x2729620()*-0.00715841);
}

double NNfunction_sb_cLcR::synapse0x273b850() {
   return (neuron0x2729960()*-0.00929425);
}

double NNfunction_sb_cLcR::synapse0x2733a10() {
   return (neuron0x2729ca0()*-0.00436581);
}

double NNfunction_sb_cLcR::synapse0x2733a50() {
   return (neuron0x2729fe0()*0.0300279);
}

double NNfunction_sb_cLcR::synapse0x2733a90() {
   return (neuron0x272a320()*-0.0377472);
}

double NNfunction_sb_cLcR::synapse0x2733ad0() {
   return (neuron0x272a660()*-0.101122);
}

double NNfunction_sb_cLcR::synapse0x2733b10() {
   return (neuron0x272a9a0()*0.00700728);
}

double NNfunction_sb_cLcR::synapse0x2733b50() {
   return (neuron0x272ace0()*-0.0164565);
}

double NNfunction_sb_cLcR::synapse0x2733b90() {
   return (neuron0x272b020()*0.0327017);
}

double NNfunction_sb_cLcR::synapse0x273b4a0() {
   return (neuron0x272b360()*0.0204368);
}

double NNfunction_sb_cLcR::synapse0x273b4e0() {
   return (neuron0x272b8c0()*-0.00643223);
}

double NNfunction_sb_cLcR::synapse0x2733ce0() {
   return (neuron0x272bae0()*-0.0284696);
}

double NNfunction_sb_cLcR::synapse0x2733d20() {
   return (neuron0x272be20()*0.000585231);
}

double NNfunction_sb_cLcR::synapse0x2733d60() {
   return (neuron0x272c160()*0.0232375);
}

double NNfunction_sb_cLcR::synapse0x2733da0() {
   return (neuron0x272c4a0()*-0.000178688);
}

double NNfunction_sb_cLcR::synapse0x2733de0() {
   return (neuron0x272c7e0()*-0.0163344);
}

double NNfunction_sb_cLcR::synapse0x2733e20() {
   return (neuron0x272cb20()*-0.00262525);
}

double NNfunction_sb_cLcR::synapse0x27341a0() {
   return (neuron0x2727f60()*-0.0505293);
}

double NNfunction_sb_cLcR::synapse0x27341e0() {
   return (neuron0x27282a0()*-0.0844995);
}

double NNfunction_sb_cLcR::synapse0x2734220() {
   return (neuron0x27285e0()*0.0387427);
}

double NNfunction_sb_cLcR::synapse0x2734260() {
   return (neuron0x2728920()*6.02989);
}

double NNfunction_sb_cLcR::synapse0x27342a0() {
   return (neuron0x2728c60()*0.0441341);
}

double NNfunction_sb_cLcR::synapse0x27342e0() {
   return (neuron0x2728fa0()*-0.0147366);
}

double NNfunction_sb_cLcR::synapse0x2734320() {
   return (neuron0x27292e0()*-0.0404638);
}

double NNfunction_sb_cLcR::synapse0x2734360() {
   return (neuron0x2729620()*0.00490177);
}

double NNfunction_sb_cLcR::synapse0x27343a0() {
   return (neuron0x2729960()*0.0469758);
}

double NNfunction_sb_cLcR::synapse0x27343e0() {
   return (neuron0x2729ca0()*0.0830468);
}

double NNfunction_sb_cLcR::synapse0x2734420() {
   return (neuron0x2729fe0()*0.00358735);
}

double NNfunction_sb_cLcR::synapse0x2734460() {
   return (neuron0x272a320()*0.00849432);
}

double NNfunction_sb_cLcR::synapse0x27344a0() {
   return (neuron0x272a660()*-0.273236);
}

double NNfunction_sb_cLcR::synapse0x27344e0() {
   return (neuron0x272a9a0()*-0.0588496);
}

double NNfunction_sb_cLcR::synapse0x2734520() {
   return (neuron0x272ace0()*0.0113309);
}

double NNfunction_sb_cLcR::synapse0x2734560() {
   return (neuron0x272b020()*-0.224369);
}

double NNfunction_sb_cLcR::synapse0x2733ff0() {
   return (neuron0x272b360()*-0.0425511);
}

double NNfunction_sb_cLcR::synapse0x2734030() {
   return (neuron0x272b8c0()*-0.0294636);
}

double NNfunction_sb_cLcR::synapse0x27346b0() {
   return (neuron0x272bae0()*0.0677323);
}

double NNfunction_sb_cLcR::synapse0x27346f0() {
   return (neuron0x272be20()*-0.00447268);
}

double NNfunction_sb_cLcR::synapse0x2734730() {
   return (neuron0x272c160()*-0.0372982);
}

double NNfunction_sb_cLcR::synapse0x2734770() {
   return (neuron0x272c4a0()*-0.0073787);
}

double NNfunction_sb_cLcR::synapse0x27347b0() {
   return (neuron0x272c7e0()*-0.00255764);
}

double NNfunction_sb_cLcR::synapse0x27347f0() {
   return (neuron0x272cb20()*0.0471498);
}

double NNfunction_sb_cLcR::synapse0x27349c0() {
   return (neuron0x2727f60()*0.0249985);
}

double NNfunction_sb_cLcR::synapse0x273da50() {
   return (neuron0x27282a0()*-0.0174592);
}

double NNfunction_sb_cLcR::synapse0x273da90() {
   return (neuron0x27285e0()*-0.0659076);
}

double NNfunction_sb_cLcR::synapse0x273dad0() {
   return (neuron0x2728920()*0.0128171);
}

double NNfunction_sb_cLcR::synapse0x273db10() {
   return (neuron0x2728c60()*0.00825135);
}

double NNfunction_sb_cLcR::synapse0x273db50() {
   return (neuron0x2728fa0()*-0.0537907);
}

double NNfunction_sb_cLcR::synapse0x273db90() {
   return (neuron0x27292e0()*0.0163618);
}

double NNfunction_sb_cLcR::synapse0x273dbd0() {
   return (neuron0x2729620()*0.0781813);
}

double NNfunction_sb_cLcR::synapse0x273dc10() {
   return (neuron0x2729960()*-0.051325);
}

double NNfunction_sb_cLcR::synapse0x273dc50() {
   return (neuron0x2729ca0()*-0.0412064);
}

double NNfunction_sb_cLcR::synapse0x273dc90() {
   return (neuron0x2729fe0()*-0.0188347);
}

double NNfunction_sb_cLcR::synapse0x273dcd0() {
   return (neuron0x272a320()*0.045942);
}

double NNfunction_sb_cLcR::synapse0x273dd10() {
   return (neuron0x272a660()*0.216622);
}

double NNfunction_sb_cLcR::synapse0x273dd50() {
   return (neuron0x272a9a0()*0.00704889);
}

double NNfunction_sb_cLcR::synapse0x273dd90() {
   return (neuron0x272ace0()*0.0193559);
}

double NNfunction_sb_cLcR::synapse0x273ddd0() {
   return (neuron0x272b020()*-2.17568);
}

double NNfunction_sb_cLcR::synapse0x273d8a0() {
   return (neuron0x272b360()*0.00569486);
}

double NNfunction_sb_cLcR::synapse0x273d8e0() {
   return (neuron0x272b8c0()*0.0218657);
}

double NNfunction_sb_cLcR::synapse0x273df20() {
   return (neuron0x272bae0()*-0.0056369);
}

double NNfunction_sb_cLcR::synapse0x273df60() {
   return (neuron0x272be20()*0.0278816);
}

double NNfunction_sb_cLcR::synapse0x273dfa0() {
   return (neuron0x272c160()*0.106203);
}

double NNfunction_sb_cLcR::synapse0x273dfe0() {
   return (neuron0x272c4a0()*0.040905);
}

double NNfunction_sb_cLcR::synapse0x273e020() {
   return (neuron0x272c7e0()*0.0708324);
}

double NNfunction_sb_cLcR::synapse0x273e060() {
   return (neuron0x272cb20()*-0.00418844);
}

double NNfunction_sb_cLcR::synapse0x273e3e0() {
   return (neuron0x2727f60()*-0.0582728);
}

double NNfunction_sb_cLcR::synapse0x273e420() {
   return (neuron0x27282a0()*-0.0183651);
}

double NNfunction_sb_cLcR::synapse0x273e460() {
   return (neuron0x27285e0()*-0.00845421);
}

double NNfunction_sb_cLcR::synapse0x273e4a0() {
   return (neuron0x2728920()*-0.033873);
}

double NNfunction_sb_cLcR::synapse0x273e4e0() {
   return (neuron0x2728c60()*0.129764);
}

double NNfunction_sb_cLcR::synapse0x273e520() {
   return (neuron0x2728fa0()*-0.0467525);
}

double NNfunction_sb_cLcR::synapse0x273e560() {
   return (neuron0x27292e0()*-0.227763);
}

double NNfunction_sb_cLcR::synapse0x273e5a0() {
   return (neuron0x2729620()*0.257618);
}

double NNfunction_sb_cLcR::synapse0x273e5e0() {
   return (neuron0x2729960()*0.0623719);
}

double NNfunction_sb_cLcR::synapse0x273e620() {
   return (neuron0x2729ca0()*0.00974422);
}

double NNfunction_sb_cLcR::synapse0x273e660() {
   return (neuron0x2729fe0()*-0.0273941);
}

double NNfunction_sb_cLcR::synapse0x273e6a0() {
   return (neuron0x272a320()*-0.0547182);
}

double NNfunction_sb_cLcR::synapse0x273e6e0() {
   return (neuron0x272a660()*0.010605);
}

double NNfunction_sb_cLcR::synapse0x273e720() {
   return (neuron0x272a9a0()*-0.00301198);
}

double NNfunction_sb_cLcR::synapse0x273e760() {
   return (neuron0x272ace0()*-0.0561295);
}

double NNfunction_sb_cLcR::synapse0x273e7a0() {
   return (neuron0x272b020()*0.721482);
}

double NNfunction_sb_cLcR::synapse0x273e230() {
   return (neuron0x272b360()*0.0603567);
}

double NNfunction_sb_cLcR::synapse0x273e270() {
   return (neuron0x272b8c0()*-0.0114432);
}

double NNfunction_sb_cLcR::synapse0x273e8f0() {
   return (neuron0x272bae0()*0.0350984);
}

double NNfunction_sb_cLcR::synapse0x273e930() {
   return (neuron0x272be20()*-0.0247205);
}

double NNfunction_sb_cLcR::synapse0x273e970() {
   return (neuron0x272c160()*0.0132423);
}

double NNfunction_sb_cLcR::synapse0x273e9b0() {
   return (neuron0x272c4a0()*0.0191701);
}

double NNfunction_sb_cLcR::synapse0x273e9f0() {
   return (neuron0x272c7e0()*0.0194878);
}

double NNfunction_sb_cLcR::synapse0x273ea30() {
   return (neuron0x272cb20()*0.00484855);
}

double NNfunction_sb_cLcR::synapse0x273edb0() {
   return (neuron0x2727f60()*-0.331509);
}

double NNfunction_sb_cLcR::synapse0x273edf0() {
   return (neuron0x27282a0()*-0.788993);
}

double NNfunction_sb_cLcR::synapse0x273ee30() {
   return (neuron0x27285e0()*0.32045);
}

double NNfunction_sb_cLcR::synapse0x273ee70() {
   return (neuron0x2728920()*-0.259373);
}

double NNfunction_sb_cLcR::synapse0x273eeb0() {
   return (neuron0x2728c60()*0.407842);
}

double NNfunction_sb_cLcR::synapse0x273eef0() {
   return (neuron0x2728fa0()*0.284924);
}

double NNfunction_sb_cLcR::synapse0x273ef30() {
   return (neuron0x27292e0()*-0.0705119);
}

double NNfunction_sb_cLcR::synapse0x273ef70() {
   return (neuron0x2729620()*0.649771);
}

double NNfunction_sb_cLcR::synapse0x273efb0() {
   return (neuron0x2729960()*-0.924841);
}

double NNfunction_sb_cLcR::synapse0x273eff0() {
   return (neuron0x2729ca0()*0.123053);
}

double NNfunction_sb_cLcR::synapse0x273f030() {
   return (neuron0x2729fe0()*0.0115641);
}

double NNfunction_sb_cLcR::synapse0x273f070() {
   return (neuron0x272a320()*0.458166);
}

double NNfunction_sb_cLcR::synapse0x273f0b0() {
   return (neuron0x272a660()*-0.0901922);
}

double NNfunction_sb_cLcR::synapse0x273f0f0() {
   return (neuron0x272a9a0()*0.352976);
}

double NNfunction_sb_cLcR::synapse0x273f130() {
   return (neuron0x272ace0()*-0.105798);
}

double NNfunction_sb_cLcR::synapse0x273f170() {
   return (neuron0x272b020()*0.11008);
}

double NNfunction_sb_cLcR::synapse0x273ec00() {
   return (neuron0x272b360()*0.1895);
}

double NNfunction_sb_cLcR::synapse0x273ec40() {
   return (neuron0x272b8c0()*-0.874687);
}

double NNfunction_sb_cLcR::synapse0x273f2c0() {
   return (neuron0x272bae0()*0.205902);
}

double NNfunction_sb_cLcR::synapse0x273f300() {
   return (neuron0x272be20()*0.2374);
}

double NNfunction_sb_cLcR::synapse0x273f340() {
   return (neuron0x272c160()*-0.236289);
}

double NNfunction_sb_cLcR::synapse0x273f380() {
   return (neuron0x272c4a0()*-0.184552);
}

double NNfunction_sb_cLcR::synapse0x273f3c0() {
   return (neuron0x272c7e0()*0.186556);
}

double NNfunction_sb_cLcR::synapse0x273f400() {
   return (neuron0x272cb20()*0.396346);
}

double NNfunction_sb_cLcR::synapse0x273f780() {
   return (neuron0x2727f60()*-0.327354);
}

double NNfunction_sb_cLcR::synapse0x273f7c0() {
   return (neuron0x27282a0()*-0.158064);
}

double NNfunction_sb_cLcR::synapse0x273f800() {
   return (neuron0x27285e0()*0.166922);
}

double NNfunction_sb_cLcR::synapse0x273f840() {
   return (neuron0x2728920()*-0.651798);
}

double NNfunction_sb_cLcR::synapse0x273f880() {
   return (neuron0x2728c60()*-0.312058);
}

double NNfunction_sb_cLcR::synapse0x273f8c0() {
   return (neuron0x2728fa0()*0.911856);
}

double NNfunction_sb_cLcR::synapse0x273f900() {
   return (neuron0x27292e0()*-0.412125);
}

double NNfunction_sb_cLcR::synapse0x273f940() {
   return (neuron0x2729620()*-0.665965);
}

double NNfunction_sb_cLcR::synapse0x273f980() {
   return (neuron0x2729960()*-0.432506);
}

double NNfunction_sb_cLcR::synapse0x273f9c0() {
   return (neuron0x2729ca0()*-0.726302);
}

double NNfunction_sb_cLcR::synapse0x273fa00() {
   return (neuron0x2729fe0()*-0.473215);
}

double NNfunction_sb_cLcR::synapse0x273fa40() {
   return (neuron0x272a320()*0.190299);
}

double NNfunction_sb_cLcR::synapse0x273fa80() {
   return (neuron0x272a660()*-0.74881);
}

double NNfunction_sb_cLcR::synapse0x273fac0() {
   return (neuron0x272a9a0()*0.914751);
}

double NNfunction_sb_cLcR::synapse0x273fb00() {
   return (neuron0x272ace0()*-0.0830219);
}

double NNfunction_sb_cLcR::synapse0x273fb40() {
   return (neuron0x272b020()*0.446156);
}

double NNfunction_sb_cLcR::synapse0x273f5d0() {
   return (neuron0x272b360()*0.0604163);
}

double NNfunction_sb_cLcR::synapse0x273f610() {
   return (neuron0x272b8c0()*-0.581024);
}

double NNfunction_sb_cLcR::synapse0x273fc90() {
   return (neuron0x272bae0()*0.669343);
}

double NNfunction_sb_cLcR::synapse0x273fcd0() {
   return (neuron0x272be20()*-0.308886);
}

double NNfunction_sb_cLcR::synapse0x273fd10() {
   return (neuron0x272c160()*-0.242832);
}

double NNfunction_sb_cLcR::synapse0x273fd50() {
   return (neuron0x272c4a0()*-0.099328);
}

double NNfunction_sb_cLcR::synapse0x273fd90() {
   return (neuron0x272c7e0()*0.677901);
}

double NNfunction_sb_cLcR::synapse0x273fdd0() {
   return (neuron0x272cb20()*-0.393417);
}

double NNfunction_sb_cLcR::synapse0x2740150() {
   return (neuron0x2727f60()*0.283821);
}

double NNfunction_sb_cLcR::synapse0x2740190() {
   return (neuron0x27282a0()*-0.0961131);
}

double NNfunction_sb_cLcR::synapse0x27401d0() {
   return (neuron0x27285e0()*0.391533);
}

double NNfunction_sb_cLcR::synapse0x2740210() {
   return (neuron0x2728920()*0.893095);
}

double NNfunction_sb_cLcR::synapse0x2740250() {
   return (neuron0x2728c60()*-0.60402);
}

double NNfunction_sb_cLcR::synapse0x2740290() {
   return (neuron0x2728fa0()*-0.167139);
}

double NNfunction_sb_cLcR::synapse0x27402d0() {
   return (neuron0x27292e0()*-0.197583);
}

double NNfunction_sb_cLcR::synapse0x2740310() {
   return (neuron0x2729620()*-0.151047);
}

double NNfunction_sb_cLcR::synapse0x2740350() {
   return (neuron0x2729960()*0.159835);
}

double NNfunction_sb_cLcR::synapse0x2740390() {
   return (neuron0x2729ca0()*-0.370577);
}

double NNfunction_sb_cLcR::synapse0x27403d0() {
   return (neuron0x2729fe0()*-0.746112);
}

double NNfunction_sb_cLcR::synapse0x2740410() {
   return (neuron0x272a320()*0.496605);
}

double NNfunction_sb_cLcR::synapse0x2740450() {
   return (neuron0x272a660()*-0.661573);
}

double NNfunction_sb_cLcR::synapse0x2740490() {
   return (neuron0x272a9a0()*0.0837632);
}

double NNfunction_sb_cLcR::synapse0x27404d0() {
   return (neuron0x272ace0()*0.882361);
}

double NNfunction_sb_cLcR::synapse0x2740510() {
   return (neuron0x272b020()*0.0891893);
}

double NNfunction_sb_cLcR::synapse0x273ffa0() {
   return (neuron0x272b360()*0.310086);
}

double NNfunction_sb_cLcR::synapse0x273ffe0() {
   return (neuron0x272b8c0()*0.259197);
}

double NNfunction_sb_cLcR::synapse0x2740660() {
   return (neuron0x272bae0()*-0.746884);
}

double NNfunction_sb_cLcR::synapse0x27406a0() {
   return (neuron0x272be20()*0.205255);
}

double NNfunction_sb_cLcR::synapse0x27406e0() {
   return (neuron0x272c160()*0.0192289);
}

double NNfunction_sb_cLcR::synapse0x2740720() {
   return (neuron0x272c4a0()*0.415976);
}

double NNfunction_sb_cLcR::synapse0x2740760() {
   return (neuron0x272c7e0()*0.413019);
}

double NNfunction_sb_cLcR::synapse0x27407a0() {
   return (neuron0x272cb20()*0.0987709);
}

double NNfunction_sb_cLcR::synapse0x2740b20() {
   return (neuron0x2727f60()*-0.542678);
}

double NNfunction_sb_cLcR::synapse0x2740b60() {
   return (neuron0x27282a0()*1.22353);
}

double NNfunction_sb_cLcR::synapse0x2740ba0() {
   return (neuron0x27285e0()*0.706378);
}

double NNfunction_sb_cLcR::synapse0x2740be0() {
   return (neuron0x2728920()*-0.0783438);
}

double NNfunction_sb_cLcR::synapse0x2740c20() {
   return (neuron0x2728c60()*-0.611031);
}

double NNfunction_sb_cLcR::synapse0x2740c60() {
   return (neuron0x2728fa0()*0.310796);
}

double NNfunction_sb_cLcR::synapse0x2740ca0() {
   return (neuron0x27292e0()*-0.538955);
}

double NNfunction_sb_cLcR::synapse0x2740ce0() {
   return (neuron0x2729620()*0.000932141);
}

double NNfunction_sb_cLcR::synapse0x2740d20() {
   return (neuron0x2729960()*-0.955308);
}

double NNfunction_sb_cLcR::synapse0x2740d60() {
   return (neuron0x2729ca0()*0.32622);
}

double NNfunction_sb_cLcR::synapse0x2740da0() {
   return (neuron0x2729fe0()*-0.613365);
}

double NNfunction_sb_cLcR::synapse0x2740de0() {
   return (neuron0x272a320()*-0.733291);
}

double NNfunction_sb_cLcR::synapse0x2740e20() {
   return (neuron0x272a660()*0.508167);
}

double NNfunction_sb_cLcR::synapse0x2740e60() {
   return (neuron0x272a9a0()*-0.149735);
}

double NNfunction_sb_cLcR::synapse0x2740ea0() {
   return (neuron0x272ace0()*0.202112);
}

double NNfunction_sb_cLcR::synapse0x2740ee0() {
   return (neuron0x272b020()*-0.329143);
}

double NNfunction_sb_cLcR::synapse0x2740970() {
   return (neuron0x272b360()*-0.00983398);
}

double NNfunction_sb_cLcR::synapse0x27409b0() {
   return (neuron0x272b8c0()*-0.36494);
}

double NNfunction_sb_cLcR::synapse0x2741030() {
   return (neuron0x272bae0()*1.4398);
}

double NNfunction_sb_cLcR::synapse0x2741070() {
   return (neuron0x272be20()*0.195226);
}

double NNfunction_sb_cLcR::synapse0x27410b0() {
   return (neuron0x272c160()*-0.164044);
}

double NNfunction_sb_cLcR::synapse0x27410f0() {
   return (neuron0x272c4a0()*0.579576);
}

double NNfunction_sb_cLcR::synapse0x2741130() {
   return (neuron0x272c7e0()*-0.529027);
}

double NNfunction_sb_cLcR::synapse0x2741170() {
   return (neuron0x272cb20()*-0.148931);
}

double NNfunction_sb_cLcR::synapse0x27414f0() {
   return (neuron0x2727f60()*0.169293);
}

double NNfunction_sb_cLcR::synapse0x2741530() {
   return (neuron0x27282a0()*-0.238215);
}

double NNfunction_sb_cLcR::synapse0x2741570() {
   return (neuron0x27285e0()*-0.155137);
}

double NNfunction_sb_cLcR::synapse0x27415b0() {
   return (neuron0x2728920()*0.131863);
}

double NNfunction_sb_cLcR::synapse0x27415f0() {
   return (neuron0x2728c60()*0.123387);
}

double NNfunction_sb_cLcR::synapse0x2741630() {
   return (neuron0x2728fa0()*0.645373);
}

double NNfunction_sb_cLcR::synapse0x2741670() {
   return (neuron0x27292e0()*-0.721813);
}

double NNfunction_sb_cLcR::synapse0x27416b0() {
   return (neuron0x2729620()*-0.136493);
}

double NNfunction_sb_cLcR::synapse0x27416f0() {
   return (neuron0x2729960()*0.014266);
}

double NNfunction_sb_cLcR::synapse0x2741730() {
   return (neuron0x2729ca0()*-0.154462);
}

double NNfunction_sb_cLcR::synapse0x2741770() {
   return (neuron0x2729fe0()*0.174927);
}

double NNfunction_sb_cLcR::synapse0x27417b0() {
   return (neuron0x272a320()*0.156469);
}

double NNfunction_sb_cLcR::synapse0x27417f0() {
   return (neuron0x272a660()*-0.156441);
}

double NNfunction_sb_cLcR::synapse0x2741830() {
   return (neuron0x272a9a0()*0.0250924);
}

double NNfunction_sb_cLcR::synapse0x2741870() {
   return (neuron0x272ace0()*-0.208726);
}

double NNfunction_sb_cLcR::synapse0x27418b0() {
   return (neuron0x272b020()*-0.415737);
}

double NNfunction_sb_cLcR::synapse0x2741340() {
   return (neuron0x272b360()*0.0758583);
}

double NNfunction_sb_cLcR::synapse0x2741380() {
   return (neuron0x272b8c0()*0.386246);
}

double NNfunction_sb_cLcR::synapse0x2741a00() {
   return (neuron0x272bae0()*0.0552213);
}

double NNfunction_sb_cLcR::synapse0x2741a40() {
   return (neuron0x272be20()*0.124807);
}

double NNfunction_sb_cLcR::synapse0x2741a80() {
   return (neuron0x272c160()*-0.529286);
}

double NNfunction_sb_cLcR::synapse0x2741ac0() {
   return (neuron0x272c4a0()*0.258458);
}

double NNfunction_sb_cLcR::synapse0x2741b00() {
   return (neuron0x272c7e0()*-0.0848906);
}

double NNfunction_sb_cLcR::synapse0x2741b40() {
   return (neuron0x272cb20()*0.144957);
}

double NNfunction_sb_cLcR::synapse0x2741ec0() {
   return (neuron0x2727f60()*-0.295212);
}

double NNfunction_sb_cLcR::synapse0x2741f00() {
   return (neuron0x27282a0()*-0.236269);
}

double NNfunction_sb_cLcR::synapse0x2741f40() {
   return (neuron0x27285e0()*-0.0324332);
}

double NNfunction_sb_cLcR::synapse0x2741f80() {
   return (neuron0x2728920()*-0.157511);
}

double NNfunction_sb_cLcR::synapse0x2741fc0() {
   return (neuron0x2728c60()*-0.127764);
}

double NNfunction_sb_cLcR::synapse0x2742000() {
   return (neuron0x2728fa0()*0.294873);
}

double NNfunction_sb_cLcR::synapse0x2742040() {
   return (neuron0x27292e0()*0.57811);
}

double NNfunction_sb_cLcR::synapse0x2742080() {
   return (neuron0x2729620()*-0.0513277);
}

double NNfunction_sb_cLcR::synapse0x27420c0() {
   return (neuron0x2729960()*-0.251678);
}

double NNfunction_sb_cLcR::synapse0x2742100() {
   return (neuron0x2729ca0()*-0.383068);
}

double NNfunction_sb_cLcR::synapse0x2742140() {
   return (neuron0x2729fe0()*1.0065);
}

double NNfunction_sb_cLcR::synapse0x2742180() {
   return (neuron0x272a320()*0.608628);
}

double NNfunction_sb_cLcR::synapse0x27421c0() {
   return (neuron0x272a660()*0.603218);
}

double NNfunction_sb_cLcR::synapse0x2742200() {
   return (neuron0x272a9a0()*-0.586008);
}

double NNfunction_sb_cLcR::synapse0x2742240() {
   return (neuron0x272ace0()*-0.304831);
}

double NNfunction_sb_cLcR::synapse0x2742280() {
   return (neuron0x272b020()*-0.608065);
}

double NNfunction_sb_cLcR::synapse0x2741d10() {
   return (neuron0x272b360()*-0.173873);
}

double NNfunction_sb_cLcR::synapse0x2741d50() {
   return (neuron0x272b8c0()*-0.2204);
}

double NNfunction_sb_cLcR::synapse0x27423d0() {
   return (neuron0x272bae0()*-0.579539);
}

double NNfunction_sb_cLcR::synapse0x2742410() {
   return (neuron0x272be20()*0.0416149);
}

double NNfunction_sb_cLcR::synapse0x2742450() {
   return (neuron0x272c160()*0.470421);
}

double NNfunction_sb_cLcR::synapse0x2742490() {
   return (neuron0x272c4a0()*-0.468171);
}

double NNfunction_sb_cLcR::synapse0x27424d0() {
   return (neuron0x272c7e0()*-0.199742);
}

double NNfunction_sb_cLcR::synapse0x2742510() {
   return (neuron0x272cb20()*0.173552);
}

double NNfunction_sb_cLcR::synapse0x2742890() {
   return (neuron0x2727f60()*0.0829436);
}

double NNfunction_sb_cLcR::synapse0x2736e60() {
   return (neuron0x27282a0()*0.571841);
}

double NNfunction_sb_cLcR::synapse0x2736ea0() {
   return (neuron0x27285e0()*0.206023);
}

double NNfunction_sb_cLcR::synapse0x2736ee0() {
   return (neuron0x2728920()*-0.609866);
}

double NNfunction_sb_cLcR::synapse0x2737130() {
   return (neuron0x2728c60()*0.251911);
}

double NNfunction_sb_cLcR::synapse0x2737170() {
   return (neuron0x2728fa0()*0.286536);
}

double NNfunction_sb_cLcR::synapse0x27371b0() {
   return (neuron0x27292e0()*-0.00404057);
}

double NNfunction_sb_cLcR::synapse0x2737400() {
   return (neuron0x2729620()*-0.192072);
}

double NNfunction_sb_cLcR::synapse0x2737440() {
   return (neuron0x2729960()*-0.141261);
}

double NNfunction_sb_cLcR::synapse0x2737690() {
   return (neuron0x2729ca0()*0.612417);
}

double NNfunction_sb_cLcR::synapse0x27376d0() {
   return (neuron0x2729fe0()*-0.438488);
}

double NNfunction_sb_cLcR::synapse0x2737710() {
   return (neuron0x272a320()*0.0963488);
}

double NNfunction_sb_cLcR::synapse0x2737960() {
   return (neuron0x272a660()*-0.733541);
}

double NNfunction_sb_cLcR::synapse0x27379a0() {
   return (neuron0x272a9a0()*0.273944);
}

double NNfunction_sb_cLcR::synapse0x2737bf0() {
   return (neuron0x272ace0()*-0.228364);
}

double NNfunction_sb_cLcR::synapse0x2737c30() {
   return (neuron0x272b020()*-0.075947);
}

double NNfunction_sb_cLcR::synapse0x27426e0() {
   return (neuron0x272b360()*0.623735);
}

double NNfunction_sb_cLcR::synapse0x2742720() {
   return (neuron0x272b8c0()*-0.55608);
}

double NNfunction_sb_cLcR::synapse0x2737d80() {
   return (neuron0x272bae0()*-0.145473);
}

double NNfunction_sb_cLcR::synapse0x2738290() {
   return (neuron0x272be20()*-0.545495);
}

double NNfunction_sb_cLcR::synapse0x27382d0() {
   return (neuron0x272c160()*-0.0943554);
}

double NNfunction_sb_cLcR::synapse0x2738310() {
   return (neuron0x272c4a0()*0.00758983);
}

double NNfunction_sb_cLcR::synapse0x2738560() {
   return (neuron0x272c7e0()*-0.271439);
}

double NNfunction_sb_cLcR::synapse0x27385a0() {
   return (neuron0x272cb20()*-0.048342);
}

double NNfunction_sb_cLcR::synapse0x2737e50() {
   return (neuron0x2727f60()*-0.436202);
}

double NNfunction_sb_cLcR::synapse0x2737e90() {
   return (neuron0x27282a0()*-0.645518);
}

double NNfunction_sb_cLcR::synapse0x2737ed0() {
   return (neuron0x27285e0()*-0.208962);
}

double NNfunction_sb_cLcR::synapse0x2737f10() {
   return (neuron0x2728920()*-0.196568);
}

double NNfunction_sb_cLcR::synapse0x2738890() {
   return (neuron0x2728c60()*0.175225);
}

double NNfunction_sb_cLcR::synapse0x2744be0() {
   return (neuron0x2728fa0()*0.919);
}

double NNfunction_sb_cLcR::synapse0x2744c20() {
   return (neuron0x27292e0()*0.204473);
}

double NNfunction_sb_cLcR::synapse0x2744c60() {
   return (neuron0x2729620()*-0.0988094);
}

double NNfunction_sb_cLcR::synapse0x2744ca0() {
   return (neuron0x2729960()*0.574782);
}

double NNfunction_sb_cLcR::synapse0x2744ce0() {
   return (neuron0x2729ca0()*0.331082);
}

double NNfunction_sb_cLcR::synapse0x2744d20() {
   return (neuron0x2729fe0()*-0.377589);
}

double NNfunction_sb_cLcR::synapse0x2744d60() {
   return (neuron0x272a320()*0.258535);
}

double NNfunction_sb_cLcR::synapse0x2744da0() {
   return (neuron0x272a660()*-0.563909);
}

double NNfunction_sb_cLcR::synapse0x2744de0() {
   return (neuron0x272a9a0()*0.196587);
}

double NNfunction_sb_cLcR::synapse0x2744e20() {
   return (neuron0x272ace0()*-0.0114598);
}

double NNfunction_sb_cLcR::synapse0x2744e60() {
   return (neuron0x272b020()*-0.221);
}

double NNfunction_sb_cLcR::synapse0x2738770() {
   return (neuron0x272b360()*-0.0375098);
}

double NNfunction_sb_cLcR::synapse0x27387b0() {
   return (neuron0x272b8c0()*-0.0423545);
}

double NNfunction_sb_cLcR::synapse0x2744fb0() {
   return (neuron0x272bae0()*-0.422079);
}

double NNfunction_sb_cLcR::synapse0x2744ff0() {
   return (neuron0x272be20()*0.373058);
}

double NNfunction_sb_cLcR::synapse0x2745030() {
   return (neuron0x272c160()*0.744439);
}

double NNfunction_sb_cLcR::synapse0x2745070() {
   return (neuron0x272c4a0()*-0.622312);
}

double NNfunction_sb_cLcR::synapse0x27450b0() {
   return (neuron0x272c7e0()*-0.342184);
}

double NNfunction_sb_cLcR::synapse0x27450f0() {
   return (neuron0x272cb20()*0.0328749);
}

double NNfunction_sb_cLcR::synapse0x2745470() {
   return (neuron0x2727f60()*-0.0181936);
}

double NNfunction_sb_cLcR::synapse0x27454b0() {
   return (neuron0x27282a0()*0.0217572);
}

double NNfunction_sb_cLcR::synapse0x27454f0() {
   return (neuron0x27285e0()*0.0155436);
}

double NNfunction_sb_cLcR::synapse0x2745530() {
   return (neuron0x2728920()*-0.0542835);
}

double NNfunction_sb_cLcR::synapse0x2745570() {
   return (neuron0x2728c60()*-0.0823832);
}

double NNfunction_sb_cLcR::synapse0x27455b0() {
   return (neuron0x2728fa0()*-3.35228e-05);
}

double NNfunction_sb_cLcR::synapse0x27455f0() {
   return (neuron0x27292e0()*-0.0198537);
}

double NNfunction_sb_cLcR::synapse0x2745630() {
   return (neuron0x2729620()*0.0278522);
}

double NNfunction_sb_cLcR::synapse0x2745670() {
   return (neuron0x2729960()*-0.0266531);
}

double NNfunction_sb_cLcR::synapse0x27456b0() {
   return (neuron0x2729ca0()*-0.00944683);
}

double NNfunction_sb_cLcR::synapse0x27456f0() {
   return (neuron0x2729fe0()*0.0313377);
}

double NNfunction_sb_cLcR::synapse0x2745730() {
   return (neuron0x272a320()*0.107398);
}

double NNfunction_sb_cLcR::synapse0x2745770() {
   return (neuron0x272a660()*-0.750457);
}

double NNfunction_sb_cLcR::synapse0x27457b0() {
   return (neuron0x272a9a0()*-0.0197955);
}

double NNfunction_sb_cLcR::synapse0x27457f0() {
   return (neuron0x272ace0()*0.0204449);
}

double NNfunction_sb_cLcR::synapse0x2745830() {
   return (neuron0x272b020()*-0.6399);
}

double NNfunction_sb_cLcR::synapse0x27452c0() {
   return (neuron0x272b360()*-0.0613785);
}

double NNfunction_sb_cLcR::synapse0x2745300() {
   return (neuron0x272b8c0()*0.0599463);
}

double NNfunction_sb_cLcR::synapse0x2745980() {
   return (neuron0x272bae0()*0.0346643);
}

double NNfunction_sb_cLcR::synapse0x27459c0() {
   return (neuron0x272be20()*0.0179692);
}

double NNfunction_sb_cLcR::synapse0x2745a00() {
   return (neuron0x272c160()*0.030022);
}

double NNfunction_sb_cLcR::synapse0x2745a40() {
   return (neuron0x272c4a0()*0.00870819);
}

double NNfunction_sb_cLcR::synapse0x2745a80() {
   return (neuron0x272c7e0()*0.00949814);
}

double NNfunction_sb_cLcR::synapse0x2745ac0() {
   return (neuron0x272cb20()*0.0378626);
}

double NNfunction_sb_cLcR::synapse0x2745e40() {
   return (neuron0x2727f60()*0.00330407);
}

double NNfunction_sb_cLcR::synapse0x2745e80() {
   return (neuron0x27282a0()*-0.0152669);
}

double NNfunction_sb_cLcR::synapse0x2745ec0() {
   return (neuron0x27285e0()*0.0730821);
}

double NNfunction_sb_cLcR::synapse0x2745f00() {
   return (neuron0x2728920()*-0.015517);
}

double NNfunction_sb_cLcR::synapse0x2745f40() {
   return (neuron0x2728c60()*0.0529876);
}

double NNfunction_sb_cLcR::synapse0x2745f80() {
   return (neuron0x2728fa0()*0.0026718);
}

double NNfunction_sb_cLcR::synapse0x2745fc0() {
   return (neuron0x27292e0()*-0.0340384);
}

double NNfunction_sb_cLcR::synapse0x2746000() {
   return (neuron0x2729620()*0.0863573);
}

double NNfunction_sb_cLcR::synapse0x2746040() {
   return (neuron0x2729960()*0.000198278);
}

double NNfunction_sb_cLcR::synapse0x2746080() {
   return (neuron0x2729ca0()*-0.00188748);
}

double NNfunction_sb_cLcR::synapse0x27460c0() {
   return (neuron0x2729fe0()*-0.00748687);
}

double NNfunction_sb_cLcR::synapse0x2746100() {
   return (neuron0x272a320()*-0.00114248);
}

double NNfunction_sb_cLcR::synapse0x2746140() {
   return (neuron0x272a660()*0.00539046);
}

double NNfunction_sb_cLcR::synapse0x2746180() {
   return (neuron0x272a9a0()*-0.021207);
}

double NNfunction_sb_cLcR::synapse0x27461c0() {
   return (neuron0x272ace0()*-0.00812407);
}

double NNfunction_sb_cLcR::synapse0x2746200() {
   return (neuron0x272b020()*-0.937847);
}

double NNfunction_sb_cLcR::synapse0x2745c90() {
   return (neuron0x272b360()*0.00606056);
}

double NNfunction_sb_cLcR::synapse0x2745cd0() {
   return (neuron0x272b8c0()*-0.00021224);
}

double NNfunction_sb_cLcR::synapse0x2746350() {
   return (neuron0x272bae0()*-0.010211);
}

double NNfunction_sb_cLcR::synapse0x2746390() {
   return (neuron0x272be20()*-0.000305103);
}

double NNfunction_sb_cLcR::synapse0x27463d0() {
   return (neuron0x272c160()*0.0119824);
}

double NNfunction_sb_cLcR::synapse0x2746410() {
   return (neuron0x272c4a0()*0.0116943);
}

double NNfunction_sb_cLcR::synapse0x2746450() {
   return (neuron0x272c7e0()*-0.00193138);
}

double NNfunction_sb_cLcR::synapse0x2746490() {
   return (neuron0x272cb20()*-0.0131393);
}

double NNfunction_sb_cLcR::synapse0x2746810() {
   return (neuron0x2727f60()*-0.0801948);
}

double NNfunction_sb_cLcR::synapse0x2746850() {
   return (neuron0x27282a0()*-0.160365);
}

double NNfunction_sb_cLcR::synapse0x2746890() {
   return (neuron0x27285e0()*-0.711652);
}

double NNfunction_sb_cLcR::synapse0x27468d0() {
   return (neuron0x2728920()*1.0535);
}

double NNfunction_sb_cLcR::synapse0x2746910() {
   return (neuron0x2728c60()*0.0305379);
}

double NNfunction_sb_cLcR::synapse0x2746950() {
   return (neuron0x2728fa0()*0.190935);
}

double NNfunction_sb_cLcR::synapse0x2746990() {
   return (neuron0x27292e0()*-0.00970211);
}

double NNfunction_sb_cLcR::synapse0x27469d0() {
   return (neuron0x2729620()*-0.00806508);
}

double NNfunction_sb_cLcR::synapse0x2746a10() {
   return (neuron0x2729960()*-0.135256);
}

double NNfunction_sb_cLcR::synapse0x2746a50() {
   return (neuron0x2729ca0()*0.195891);
}

double NNfunction_sb_cLcR::synapse0x2746a90() {
   return (neuron0x2729fe0()*-0.230453);
}

double NNfunction_sb_cLcR::synapse0x2746ad0() {
   return (neuron0x272a320()*-0.206015);
}

double NNfunction_sb_cLcR::synapse0x2746b10() {
   return (neuron0x272a660()*-0.0268108);
}

double NNfunction_sb_cLcR::synapse0x2746b50() {
   return (neuron0x272a9a0()*0.0861868);
}

double NNfunction_sb_cLcR::synapse0x2746b90() {
   return (neuron0x272ace0()*0.150319);
}

double NNfunction_sb_cLcR::synapse0x2746bd0() {
   return (neuron0x272b020()*0.101746);
}

double NNfunction_sb_cLcR::synapse0x2746660() {
   return (neuron0x272b360()*-0.300098);
}

double NNfunction_sb_cLcR::synapse0x27466a0() {
   return (neuron0x272b8c0()*-0.301262);
}

double NNfunction_sb_cLcR::synapse0x2746d20() {
   return (neuron0x272bae0()*0.0455461);
}

double NNfunction_sb_cLcR::synapse0x2746d60() {
   return (neuron0x272be20()*-0.297893);
}

double NNfunction_sb_cLcR::synapse0x2746da0() {
   return (neuron0x272c160()*0.027398);
}

double NNfunction_sb_cLcR::synapse0x2746de0() {
   return (neuron0x272c4a0()*-0.0375034);
}

double NNfunction_sb_cLcR::synapse0x2746e20() {
   return (neuron0x272c7e0()*-0.0887713);
}

double NNfunction_sb_cLcR::synapse0x2746e60() {
   return (neuron0x272cb20()*-0.05495);
}

double NNfunction_sb_cLcR::synapse0x27471e0() {
   return (neuron0x2727f60()*0.210533);
}

double NNfunction_sb_cLcR::synapse0x2747220() {
   return (neuron0x27282a0()*-0.419102);
}

double NNfunction_sb_cLcR::synapse0x2747260() {
   return (neuron0x27285e0()*0.400746);
}

double NNfunction_sb_cLcR::synapse0x27472a0() {
   return (neuron0x2728920()*0.992564);
}

double NNfunction_sb_cLcR::synapse0x27472e0() {
   return (neuron0x2728c60()*-0.116993);
}

double NNfunction_sb_cLcR::synapse0x2747320() {
   return (neuron0x2728fa0()*-0.102314);
}

double NNfunction_sb_cLcR::synapse0x2747360() {
   return (neuron0x27292e0()*-0.0993698);
}

double NNfunction_sb_cLcR::synapse0x27473a0() {
   return (neuron0x2729620()*-0.28728);
}

double NNfunction_sb_cLcR::synapse0x27473e0() {
   return (neuron0x2729960()*0.0881213);
}

double NNfunction_sb_cLcR::synapse0x2747420() {
   return (neuron0x2729ca0()*0.183183);
}

double NNfunction_sb_cLcR::synapse0x2747460() {
   return (neuron0x2729fe0()*-0.0330614);
}

double NNfunction_sb_cLcR::synapse0x27474a0() {
   return (neuron0x272a320()*0.249019);
}

double NNfunction_sb_cLcR::synapse0x27474e0() {
   return (neuron0x272a660()*-0.0982476);
}

double NNfunction_sb_cLcR::synapse0x2747520() {
   return (neuron0x272a9a0()*0.189588);
}

double NNfunction_sb_cLcR::synapse0x2747560() {
   return (neuron0x272ace0()*-0.0634438);
}

double NNfunction_sb_cLcR::synapse0x27475a0() {
   return (neuron0x272b020()*-0.0495895);
}

double NNfunction_sb_cLcR::synapse0x2747030() {
   return (neuron0x272b360()*-0.195801);
}

double NNfunction_sb_cLcR::synapse0x2747070() {
   return (neuron0x272b8c0()*0.0345504);
}

double NNfunction_sb_cLcR::synapse0x27476f0() {
   return (neuron0x272bae0()*-0.334903);
}

double NNfunction_sb_cLcR::synapse0x2747730() {
   return (neuron0x272be20()*-0.42327);
}

double NNfunction_sb_cLcR::synapse0x2747770() {
   return (neuron0x272c160()*0.08628);
}

double NNfunction_sb_cLcR::synapse0x27477b0() {
   return (neuron0x272c4a0()*-0.0124996);
}

double NNfunction_sb_cLcR::synapse0x27477f0() {
   return (neuron0x272c7e0()*-0.198586);
}

double NNfunction_sb_cLcR::synapse0x2747830() {
   return (neuron0x272cb20()*-0.131424);
}

double NNfunction_sb_cLcR::synapse0x2747bb0() {
   return (neuron0x2727f60()*-0.0418819);
}

double NNfunction_sb_cLcR::synapse0x2747bf0() {
   return (neuron0x27282a0()*-0.0418783);
}

double NNfunction_sb_cLcR::synapse0x2747c30() {
   return (neuron0x27285e0()*-0.0100029);
}

double NNfunction_sb_cLcR::synapse0x2747c70() {
   return (neuron0x2728920()*12.7776);
}

double NNfunction_sb_cLcR::synapse0x2747cb0() {
   return (neuron0x2728c60()*0.0473127);
}

double NNfunction_sb_cLcR::synapse0x2747cf0() {
   return (neuron0x2728fa0()*-0.00121052);
}

double NNfunction_sb_cLcR::synapse0x2747d30() {
   return (neuron0x27292e0()*-0.0910612);
}

double NNfunction_sb_cLcR::synapse0x2747d70() {
   return (neuron0x2729620()*-0.0189661);
}

double NNfunction_sb_cLcR::synapse0x2747db0() {
   return (neuron0x2729960()*0.0476291);
}

double NNfunction_sb_cLcR::synapse0x2747df0() {
   return (neuron0x2729ca0()*0.0851317);
}

double NNfunction_sb_cLcR::synapse0x2747e30() {
   return (neuron0x2729fe0()*-0.0504042);
}

double NNfunction_sb_cLcR::synapse0x2747e70() {
   return (neuron0x272a320()*0.0506749);
}

double NNfunction_sb_cLcR::synapse0x2747eb0() {
   return (neuron0x272a660()*-0.234749);
}

double NNfunction_sb_cLcR::synapse0x2747ef0() {
   return (neuron0x272a9a0()*0.000309671);
}

double NNfunction_sb_cLcR::synapse0x2747f30() {
   return (neuron0x272ace0()*0.0279618);
}

double NNfunction_sb_cLcR::synapse0x2747f70() {
   return (neuron0x272b020()*-0.178026);
}

double NNfunction_sb_cLcR::synapse0x2747a00() {
   return (neuron0x272b360()*-0.099478);
}

double NNfunction_sb_cLcR::synapse0x2747a40() {
   return (neuron0x272b8c0()*0.018542);
}

double NNfunction_sb_cLcR::synapse0x27480c0() {
   return (neuron0x272bae0()*-0.0357617);
}

double NNfunction_sb_cLcR::synapse0x2748100() {
   return (neuron0x272be20()*-0.00242383);
}

double NNfunction_sb_cLcR::synapse0x2748140() {
   return (neuron0x272c160()*-0.0763365);
}

double NNfunction_sb_cLcR::synapse0x2748180() {
   return (neuron0x272c4a0()*0.0111979);
}

double NNfunction_sb_cLcR::synapse0x27481c0() {
   return (neuron0x272c7e0()*0.00942437);
}

double NNfunction_sb_cLcR::synapse0x2748200() {
   return (neuron0x272cb20()*0.118611);
}

double NNfunction_sb_cLcR::synapse0x2748580() {
   return (neuron0x2727f60()*-0.149151);
}

double NNfunction_sb_cLcR::synapse0x27485c0() {
   return (neuron0x27282a0()*-0.511256);
}

double NNfunction_sb_cLcR::synapse0x2748600() {
   return (neuron0x27285e0()*-0.195475);
}

double NNfunction_sb_cLcR::synapse0x2748640() {
   return (neuron0x2728920()*-0.61443);
}

double NNfunction_sb_cLcR::synapse0x2748680() {
   return (neuron0x2728c60()*0.126704);
}

double NNfunction_sb_cLcR::synapse0x27486c0() {
   return (neuron0x2728fa0()*-0.145286);
}

double NNfunction_sb_cLcR::synapse0x2748700() {
   return (neuron0x27292e0()*-1.15611);
}

double NNfunction_sb_cLcR::synapse0x2748740() {
   return (neuron0x2729620()*0.0685076);
}

double NNfunction_sb_cLcR::synapse0x2748780() {
   return (neuron0x2729960()*0.100815);
}

double NNfunction_sb_cLcR::synapse0x27487c0() {
   return (neuron0x2729ca0()*1.25718);
}

double NNfunction_sb_cLcR::synapse0x2748800() {
   return (neuron0x2729fe0()*-0.111098);
}

double NNfunction_sb_cLcR::synapse0x2748840() {
   return (neuron0x272a320()*-0.78482);
}

double NNfunction_sb_cLcR::synapse0x2748880() {
   return (neuron0x272a660()*-0.261564);
}

double NNfunction_sb_cLcR::synapse0x27488c0() {
   return (neuron0x272a9a0()*-0.237185);
}

double NNfunction_sb_cLcR::synapse0x2748900() {
   return (neuron0x272ace0()*-0.215627);
}

double NNfunction_sb_cLcR::synapse0x2748940() {
   return (neuron0x272b020()*-0.891026);
}

double NNfunction_sb_cLcR::synapse0x27483d0() {
   return (neuron0x272b360()*-0.18933);
}

double NNfunction_sb_cLcR::synapse0x2748410() {
   return (neuron0x272b8c0()*1.37525);
}

double NNfunction_sb_cLcR::synapse0x2748a90() {
   return (neuron0x272bae0()*0.560919);
}

double NNfunction_sb_cLcR::synapse0x2748ad0() {
   return (neuron0x272be20()*0.353149);
}

double NNfunction_sb_cLcR::synapse0x2748b10() {
   return (neuron0x272c160()*0.755462);
}

double NNfunction_sb_cLcR::synapse0x2748b50() {
   return (neuron0x272c4a0()*-0.137333);
}

double NNfunction_sb_cLcR::synapse0x2748b90() {
   return (neuron0x272c7e0()*-0.175149);
}

double NNfunction_sb_cLcR::synapse0x2748bd0() {
   return (neuron0x272cb20()*0.118273);
}

double NNfunction_sb_cLcR::synapse0x2748f50() {
   return (neuron0x2727f60()*-0.106175);
}

double NNfunction_sb_cLcR::synapse0x2748f90() {
   return (neuron0x27282a0()*-0.347942);
}

double NNfunction_sb_cLcR::synapse0x2748fd0() {
   return (neuron0x27285e0()*-0.559604);
}

double NNfunction_sb_cLcR::synapse0x2749010() {
   return (neuron0x2728920()*0.16716);
}

double NNfunction_sb_cLcR::synapse0x2749050() {
   return (neuron0x2728c60()*-0.0857471);
}

double NNfunction_sb_cLcR::synapse0x2749090() {
   return (neuron0x2728fa0()*0.645006);
}

double NNfunction_sb_cLcR::synapse0x27490d0() {
   return (neuron0x27292e0()*-0.437927);
}

double NNfunction_sb_cLcR::synapse0x2749110() {
   return (neuron0x2729620()*0.651779);
}

double NNfunction_sb_cLcR::synapse0x2749150() {
   return (neuron0x2729960()*-0.0191025);
}

double NNfunction_sb_cLcR::synapse0x2749190() {
   return (neuron0x2729ca0()*0.0797955);
}

double NNfunction_sb_cLcR::synapse0x27491d0() {
   return (neuron0x2729fe0()*-0.166564);
}

double NNfunction_sb_cLcR::synapse0x2749210() {
   return (neuron0x272a320()*-0.642381);
}

double NNfunction_sb_cLcR::synapse0x2749250() {
   return (neuron0x272a660()*0.564167);
}

double NNfunction_sb_cLcR::synapse0x2749290() {
   return (neuron0x272a9a0()*-0.229236);
}

double NNfunction_sb_cLcR::synapse0x27492d0() {
   return (neuron0x272ace0()*-0.116264);
}

double NNfunction_sb_cLcR::synapse0x2749310() {
   return (neuron0x272b020()*0.831393);
}

double NNfunction_sb_cLcR::synapse0x2748da0() {
   return (neuron0x272b360()*-0.156311);
}

double NNfunction_sb_cLcR::synapse0x2748de0() {
   return (neuron0x272b8c0()*0.661545);
}

double NNfunction_sb_cLcR::synapse0x2749460() {
   return (neuron0x272bae0()*-0.0151817);
}

double NNfunction_sb_cLcR::synapse0x27494a0() {
   return (neuron0x272be20()*-0.0633382);
}

double NNfunction_sb_cLcR::synapse0x27494e0() {
   return (neuron0x272c160()*-0.628091);
}

double NNfunction_sb_cLcR::synapse0x2749520() {
   return (neuron0x272c4a0()*0.127796);
}

double NNfunction_sb_cLcR::synapse0x2749560() {
   return (neuron0x272c7e0()*0.631839);
}

double NNfunction_sb_cLcR::synapse0x27495a0() {
   return (neuron0x272cb20()*-0.430971);
}

double NNfunction_sb_cLcR::synapse0x2732050() {
   return (neuron0x2727f60()*0.139732);
}

double NNfunction_sb_cLcR::synapse0x2732090() {
   return (neuron0x27282a0()*0.15064);
}

double NNfunction_sb_cLcR::synapse0x27320d0() {
   return (neuron0x27285e0()*0.225344);
}

double NNfunction_sb_cLcR::synapse0x2732110() {
   return (neuron0x2728920()*0.535349);
}

double NNfunction_sb_cLcR::synapse0x2732150() {
   return (neuron0x2728c60()*0.533796);
}

double NNfunction_sb_cLcR::synapse0x2732190() {
   return (neuron0x2728fa0()*-0.570538);
}

double NNfunction_sb_cLcR::synapse0x27321d0() {
   return (neuron0x27292e0()*0.361879);
}

double NNfunction_sb_cLcR::synapse0x2732210() {
   return (neuron0x2729620()*-0.539224);
}

double NNfunction_sb_cLcR::synapse0x2749d30() {
   return (neuron0x2729960()*-0.71241);
}

double NNfunction_sb_cLcR::synapse0x2749d70() {
   return (neuron0x2729ca0()*-0.236958);
}

double NNfunction_sb_cLcR::synapse0x2749db0() {
   return (neuron0x2729fe0()*-0.218469);
}

double NNfunction_sb_cLcR::synapse0x2749df0() {
   return (neuron0x272a320()*0.85106);
}

double NNfunction_sb_cLcR::synapse0x2749e30() {
   return (neuron0x272a660()*0.115892);
}

double NNfunction_sb_cLcR::synapse0x2749e70() {
   return (neuron0x272a9a0()*-0.338504);
}

double NNfunction_sb_cLcR::synapse0x2749eb0() {
   return (neuron0x272ace0()*0.174357);
}

double NNfunction_sb_cLcR::synapse0x2749ef0() {
   return (neuron0x272b020()*-0.156396);
}

double NNfunction_sb_cLcR::synapse0x2749770() {
   return (neuron0x272b360()*-0.289044);
}

double NNfunction_sb_cLcR::synapse0x27497b0() {
   return (neuron0x272b8c0()*-0.350803);
}

double NNfunction_sb_cLcR::synapse0x274a040() {
   return (neuron0x272bae0()*0.253826);
}

double NNfunction_sb_cLcR::synapse0x274a080() {
   return (neuron0x272be20()*-0.475142);
}

double NNfunction_sb_cLcR::synapse0x274a0c0() {
   return (neuron0x272c160()*-0.231693);
}

double NNfunction_sb_cLcR::synapse0x274a100() {
   return (neuron0x272c4a0()*0.316543);
}

double NNfunction_sb_cLcR::synapse0x274a140() {
   return (neuron0x272c7e0()*0.14782);
}

double NNfunction_sb_cLcR::synapse0x274a180() {
   return (neuron0x272cb20()*0.739226);
}

double NNfunction_sb_cLcR::synapse0x274a500() {
   return (neuron0x2727f60()*-0.822304);
}

double NNfunction_sb_cLcR::synapse0x274a540() {
   return (neuron0x27282a0()*-0.191712);
}

double NNfunction_sb_cLcR::synapse0x274a580() {
   return (neuron0x27285e0()*-0.0296253);
}

double NNfunction_sb_cLcR::synapse0x274a5c0() {
   return (neuron0x2728920()*0.0639226);
}

double NNfunction_sb_cLcR::synapse0x274a600() {
   return (neuron0x2728c60()*-0.192575);
}

double NNfunction_sb_cLcR::synapse0x274a640() {
   return (neuron0x2728fa0()*0.524667);
}

double NNfunction_sb_cLcR::synapse0x274a680() {
   return (neuron0x27292e0()*-0.127466);
}

double NNfunction_sb_cLcR::synapse0x274a6c0() {
   return (neuron0x2729620()*0.363704);
}

double NNfunction_sb_cLcR::synapse0x274a700() {
   return (neuron0x2729960()*-0.358216);
}

double NNfunction_sb_cLcR::synapse0x274a740() {
   return (neuron0x2729ca0()*0.259826);
}

double NNfunction_sb_cLcR::synapse0x274a780() {
   return (neuron0x2729fe0()*1.07507);
}

double NNfunction_sb_cLcR::synapse0x274a7c0() {
   return (neuron0x272a320()*-0.328969);
}

double NNfunction_sb_cLcR::synapse0x274a800() {
   return (neuron0x272a660()*0.394532);
}

double NNfunction_sb_cLcR::synapse0x274a840() {
   return (neuron0x272a9a0()*0.120682);
}

double NNfunction_sb_cLcR::synapse0x274a880() {
   return (neuron0x272ace0()*-0.485798);
}

double NNfunction_sb_cLcR::synapse0x274a8c0() {
   return (neuron0x272b020()*-0.249944);
}

double NNfunction_sb_cLcR::synapse0x274a350() {
   return (neuron0x272b360()*0.0972468);
}

double NNfunction_sb_cLcR::synapse0x274a390() {
   return (neuron0x272b8c0()*-0.893955);
}

double NNfunction_sb_cLcR::synapse0x274aa10() {
   return (neuron0x272bae0()*0.678885);
}

double NNfunction_sb_cLcR::synapse0x274aa50() {
   return (neuron0x272be20()*-0.304532);
}

double NNfunction_sb_cLcR::synapse0x274aa90() {
   return (neuron0x272c160()*0.709692);
}

double NNfunction_sb_cLcR::synapse0x274aad0() {
   return (neuron0x272c4a0()*-0.403114);
}

double NNfunction_sb_cLcR::synapse0x274ab10() {
   return (neuron0x272c7e0()*0.139092);
}

double NNfunction_sb_cLcR::synapse0x274ab50() {
   return (neuron0x272cb20()*0.291408);
}

double NNfunction_sb_cLcR::synapse0x274aed0() {
   return (neuron0x2727f60()*0.91753);
}

double NNfunction_sb_cLcR::synapse0x274af10() {
   return (neuron0x27282a0()*-0.0146175);
}

double NNfunction_sb_cLcR::synapse0x274af50() {
   return (neuron0x27285e0()*-0.000895179);
}

double NNfunction_sb_cLcR::synapse0x274af90() {
   return (neuron0x2728920()*-1.51537);
}

double NNfunction_sb_cLcR::synapse0x274afd0() {
   return (neuron0x2728c60()*0.349159);
}

double NNfunction_sb_cLcR::synapse0x274b010() {
   return (neuron0x2728fa0()*-0.0195888);
}

double NNfunction_sb_cLcR::synapse0x274b050() {
   return (neuron0x27292e0()*-0.0249752);
}

double NNfunction_sb_cLcR::synapse0x274b090() {
   return (neuron0x2729620()*1.15284);
}

double NNfunction_sb_cLcR::synapse0x274b0d0() {
   return (neuron0x2729960()*-0.184505);
}

double NNfunction_sb_cLcR::synapse0x274b110() {
   return (neuron0x2729ca0()*0.322036);
}

double NNfunction_sb_cLcR::synapse0x274b150() {
   return (neuron0x2729fe0()*0.102324);
}

double NNfunction_sb_cLcR::synapse0x274b190() {
   return (neuron0x272a320()*0.0144292);
}

double NNfunction_sb_cLcR::synapse0x274b1d0() {
   return (neuron0x272a660()*0.258133);
}

double NNfunction_sb_cLcR::synapse0x274b210() {
   return (neuron0x272a9a0()*0.536417);
}

double NNfunction_sb_cLcR::synapse0x274b250() {
   return (neuron0x272ace0()*0.231888);
}

double NNfunction_sb_cLcR::synapse0x274b290() {
   return (neuron0x272b020()*0.450554);
}

double NNfunction_sb_cLcR::synapse0x274ad20() {
   return (neuron0x272b360()*-1.08694);
}

double NNfunction_sb_cLcR::synapse0x274ad60() {
   return (neuron0x272b8c0()*0.250131);
}

double NNfunction_sb_cLcR::synapse0x273b890() {
   return (neuron0x272bae0()*0.15923);
}

double NNfunction_sb_cLcR::synapse0x273b8d0() {
   return (neuron0x272be20()*-0.495922);
}

double NNfunction_sb_cLcR::synapse0x273b910() {
   return (neuron0x272c160()*-0.112197);
}

double NNfunction_sb_cLcR::synapse0x273b950() {
   return (neuron0x272c4a0()*-0.816349);
}

double NNfunction_sb_cLcR::synapse0x273b990() {
   return (neuron0x272c7e0()*0.695697);
}

double NNfunction_sb_cLcR::synapse0x273b9d0() {
   return (neuron0x272cb20()*-0.39751);
}

double NNfunction_sb_cLcR::synapse0x273bd50() {
   return (neuron0x2727f60()*-0.0493726);
}

double NNfunction_sb_cLcR::synapse0x273bd90() {
   return (neuron0x27282a0()*-0.0564354);
}

double NNfunction_sb_cLcR::synapse0x273bdd0() {
   return (neuron0x27285e0()*-0.42275);
}

double NNfunction_sb_cLcR::synapse0x273be10() {
   return (neuron0x2728920()*-0.0450984);
}

double NNfunction_sb_cLcR::synapse0x273be50() {
   return (neuron0x2728c60()*0.233709);
}

double NNfunction_sb_cLcR::synapse0x273be90() {
   return (neuron0x2728fa0()*-0.134688);
}

double NNfunction_sb_cLcR::synapse0x273bed0() {
   return (neuron0x27292e0()*0.0401465);
}

double NNfunction_sb_cLcR::synapse0x273bf10() {
   return (neuron0x2729620()*0.0131918);
}

double NNfunction_sb_cLcR::synapse0x273bf50() {
   return (neuron0x2729960()*-0.176542);
}

double NNfunction_sb_cLcR::synapse0x273bf90() {
   return (neuron0x2729ca0()*0.231762);
}

double NNfunction_sb_cLcR::synapse0x273bfd0() {
   return (neuron0x2729fe0()*-0.465256);
}

double NNfunction_sb_cLcR::synapse0x273c010() {
   return (neuron0x272a320()*0.736977);
}

double NNfunction_sb_cLcR::synapse0x273c050() {
   return (neuron0x272a660()*-0.107174);
}

double NNfunction_sb_cLcR::synapse0x273c090() {
   return (neuron0x272a9a0()*-0.092336);
}

double NNfunction_sb_cLcR::synapse0x273c0d0() {
   return (neuron0x272ace0()*0.529885);
}

double NNfunction_sb_cLcR::synapse0x273c110() {
   return (neuron0x272b020()*-0.372132);
}

double NNfunction_sb_cLcR::synapse0x273bba0() {
   return (neuron0x272b360()*-0.424215);
}

double NNfunction_sb_cLcR::synapse0x273bbe0() {
   return (neuron0x272b8c0()*-0.570032);
}

double NNfunction_sb_cLcR::synapse0x273c260() {
   return (neuron0x272bae0()*0.804405);
}

double NNfunction_sb_cLcR::synapse0x273c2a0() {
   return (neuron0x272be20()*-0.45259);
}

double NNfunction_sb_cLcR::synapse0x273c2e0() {
   return (neuron0x272c160()*0.193503);
}

double NNfunction_sb_cLcR::synapse0x273c320() {
   return (neuron0x272c4a0()*0.0590786);
}

double NNfunction_sb_cLcR::synapse0x273c360() {
   return (neuron0x272c7e0()*0.142541);
}

double NNfunction_sb_cLcR::synapse0x273c3a0() {
   return (neuron0x272cb20()*0.114494);
}

double NNfunction_sb_cLcR::synapse0x273c720() {
   return (neuron0x2727f60()*0.0545387);
}

double NNfunction_sb_cLcR::synapse0x273c760() {
   return (neuron0x27282a0()*-0.734885);
}

double NNfunction_sb_cLcR::synapse0x273c7a0() {
   return (neuron0x27285e0()*-0.241699);
}

double NNfunction_sb_cLcR::synapse0x273c7e0() {
   return (neuron0x2728920()*-0.67615);
}

double NNfunction_sb_cLcR::synapse0x273c820() {
   return (neuron0x2728c60()*0.0103696);
}

double NNfunction_sb_cLcR::synapse0x273c860() {
   return (neuron0x2728fa0()*0.0265557);
}

double NNfunction_sb_cLcR::synapse0x273c8a0() {
   return (neuron0x27292e0()*0.0568533);
}

double NNfunction_sb_cLcR::synapse0x273c8e0() {
   return (neuron0x2729620()*0.0570355);
}

double NNfunction_sb_cLcR::synapse0x273c920() {
   return (neuron0x2729960()*-0.0291254);
}

double NNfunction_sb_cLcR::synapse0x273c960() {
   return (neuron0x2729ca0()*-0.100861);
}

double NNfunction_sb_cLcR::synapse0x273c9a0() {
   return (neuron0x2729fe0()*-0.165016);
}

double NNfunction_sb_cLcR::synapse0x273c9e0() {
   return (neuron0x272a320()*-0.0730203);
}

double NNfunction_sb_cLcR::synapse0x273ca20() {
   return (neuron0x272a660()*-0.0807726);
}

double NNfunction_sb_cLcR::synapse0x273ca60() {
   return (neuron0x272a9a0()*0.0174076);
}

double NNfunction_sb_cLcR::synapse0x273caa0() {
   return (neuron0x272ace0()*0.0414276);
}

double NNfunction_sb_cLcR::synapse0x273cae0() {
   return (neuron0x272b020()*-0.159031);
}

double NNfunction_sb_cLcR::synapse0x273c570() {
   return (neuron0x272b360()*0.144098);
}

double NNfunction_sb_cLcR::synapse0x273c5b0() {
   return (neuron0x272b8c0()*0.0836983);
}

double NNfunction_sb_cLcR::synapse0x273cc30() {
   return (neuron0x272bae0()*-0.097351);
}

double NNfunction_sb_cLcR::synapse0x273cc70() {
   return (neuron0x272be20()*-0.0887794);
}

double NNfunction_sb_cLcR::synapse0x273ccb0() {
   return (neuron0x272c160()*-0.0143815);
}

double NNfunction_sb_cLcR::synapse0x273ccf0() {
   return (neuron0x272c4a0()*0.0241503);
}

double NNfunction_sb_cLcR::synapse0x273cd30() {
   return (neuron0x272c7e0()*0.0566486);
}

double NNfunction_sb_cLcR::synapse0x273cd70() {
   return (neuron0x272cb20()*0.0233642);
}

double NNfunction_sb_cLcR::synapse0x273d0f0() {
   return (neuron0x2727f60()*0.0273884);
}

double NNfunction_sb_cLcR::synapse0x273d130() {
   return (neuron0x27282a0()*0.0452026);
}

double NNfunction_sb_cLcR::synapse0x273d170() {
   return (neuron0x27285e0()*-0.258558);
}

double NNfunction_sb_cLcR::synapse0x273d1b0() {
   return (neuron0x2728920()*-1.5412);
}

double NNfunction_sb_cLcR::synapse0x273d1f0() {
   return (neuron0x2728c60()*-0.0657829);
}

double NNfunction_sb_cLcR::synapse0x273d230() {
   return (neuron0x2728fa0()*-0.0602519);
}

double NNfunction_sb_cLcR::synapse0x273d270() {
   return (neuron0x27292e0()*0.0947528);
}

double NNfunction_sb_cLcR::synapse0x273d2b0() {
   return (neuron0x2729620()*-0.0508889);
}

double NNfunction_sb_cLcR::synapse0x273d2f0() {
   return (neuron0x2729960()*-6.80451e-05);
}

double NNfunction_sb_cLcR::synapse0x273d330() {
   return (neuron0x2729ca0()*-0.0266435);
}

double NNfunction_sb_cLcR::synapse0x273d370() {
   return (neuron0x2729fe0()*-0.0111002);
}

double NNfunction_sb_cLcR::synapse0x273d3b0() {
   return (neuron0x272a320()*-0.0207271);
}

double NNfunction_sb_cLcR::synapse0x273d3f0() {
   return (neuron0x272a660()*-0.295324);
}

double NNfunction_sb_cLcR::synapse0x273d430() {
   return (neuron0x272a9a0()*-0.00411291);
}

double NNfunction_sb_cLcR::synapse0x273d470() {
   return (neuron0x272ace0()*0.0696804);
}

double NNfunction_sb_cLcR::synapse0x273d4b0() {
   return (neuron0x272b020()*-0.476618);
}

double NNfunction_sb_cLcR::synapse0x273cf40() {
   return (neuron0x272b360()*-0.0501181);
}

double NNfunction_sb_cLcR::synapse0x273cf80() {
   return (neuron0x272b8c0()*0.0200035);
}

double NNfunction_sb_cLcR::synapse0x273d600() {
   return (neuron0x272bae0()*-0.0830194);
}

double NNfunction_sb_cLcR::synapse0x273d640() {
   return (neuron0x272be20()*-0.0186538);
}

double NNfunction_sb_cLcR::synapse0x273d680() {
   return (neuron0x272c160()*0.001261);
}

double NNfunction_sb_cLcR::synapse0x273d6c0() {
   return (neuron0x272c4a0()*0.050412);
}

double NNfunction_sb_cLcR::synapse0x273d700() {
   return (neuron0x272c7e0()*-0.0122433);
}

double NNfunction_sb_cLcR::synapse0x273d740() {
   return (neuron0x272cb20()*-0.0460226);
}

double NNfunction_sb_cLcR::synapse0x274f610() {
   return (neuron0x2727f60()*-0.00267732);
}

double NNfunction_sb_cLcR::synapse0x274f650() {
   return (neuron0x27282a0()*-0.0255567);
}

double NNfunction_sb_cLcR::synapse0x274f690() {
   return (neuron0x27285e0()*-0.0363055);
}

double NNfunction_sb_cLcR::synapse0x274f6d0() {
   return (neuron0x2728920()*11.4769);
}

double NNfunction_sb_cLcR::synapse0x274f710() {
   return (neuron0x2728c60()*-0.00553272);
}

double NNfunction_sb_cLcR::synapse0x274f750() {
   return (neuron0x2728fa0()*-0.0554048);
}

double NNfunction_sb_cLcR::synapse0x274f790() {
   return (neuron0x27292e0()*0.0687642);
}

double NNfunction_sb_cLcR::synapse0x274f7d0() {
   return (neuron0x2729620()*-0.0509512);
}

double NNfunction_sb_cLcR::synapse0x274f810() {
   return (neuron0x2729960()*-0.0209708);
}

double NNfunction_sb_cLcR::synapse0x274f850() {
   return (neuron0x2729ca0()*0.0395012);
}

double NNfunction_sb_cLcR::synapse0x274f890() {
   return (neuron0x2729fe0()*-0.00313048);
}

double NNfunction_sb_cLcR::synapse0x274f8d0() {
   return (neuron0x272a320()*0.030586);
}

double NNfunction_sb_cLcR::synapse0x274f910() {
   return (neuron0x272a660()*0.263708);
}

double NNfunction_sb_cLcR::synapse0x274f950() {
   return (neuron0x272a9a0()*-0.0058233);
}

double NNfunction_sb_cLcR::synapse0x274f990() {
   return (neuron0x272ace0()*0.00789651);
}

double NNfunction_sb_cLcR::synapse0x274f9d0() {
   return (neuron0x272b020()*0.0602955);
}

double NNfunction_sb_cLcR::synapse0x273d780() {
   return (neuron0x272b360()*-0.015226);
}

double NNfunction_sb_cLcR::synapse0x273d7c0() {
   return (neuron0x272b8c0()*-0.0314499);
}

double NNfunction_sb_cLcR::synapse0x274fb20() {
   return (neuron0x272bae0()*0.0788426);
}

double NNfunction_sb_cLcR::synapse0x274fb60() {
   return (neuron0x272be20()*0.0271572);
}

double NNfunction_sb_cLcR::synapse0x274fba0() {
   return (neuron0x272c160()*0.00482334);
}

double NNfunction_sb_cLcR::synapse0x274fbe0() {
   return (neuron0x272c4a0()*-0.0303846);
}

double NNfunction_sb_cLcR::synapse0x274fc20() {
   return (neuron0x272c7e0()*0.0546784);
}

double NNfunction_sb_cLcR::synapse0x274fc60() {
   return (neuron0x272cb20()*0.0937215);
}

double NNfunction_sb_cLcR::synapse0x274ffe0() {
   return (neuron0x2727f60()*0.458086);
}

double NNfunction_sb_cLcR::synapse0x2750020() {
   return (neuron0x27282a0()*0.332662);
}

double NNfunction_sb_cLcR::synapse0x2750060() {
   return (neuron0x27285e0()*-0.460076);
}

double NNfunction_sb_cLcR::synapse0x27500a0() {
   return (neuron0x2728920()*-0.0637936);
}

double NNfunction_sb_cLcR::synapse0x27500e0() {
   return (neuron0x2728c60()*-0.141376);
}

double NNfunction_sb_cLcR::synapse0x2750120() {
   return (neuron0x2728fa0()*0.368129);
}

double NNfunction_sb_cLcR::synapse0x2750160() {
   return (neuron0x27292e0()*0.452453);
}

double NNfunction_sb_cLcR::synapse0x27501a0() {
   return (neuron0x2729620()*0.036712);
}

double NNfunction_sb_cLcR::synapse0x27501e0() {
   return (neuron0x2729960()*-0.0322041);
}

double NNfunction_sb_cLcR::synapse0x2750220() {
   return (neuron0x2729ca0()*-0.163561);
}

double NNfunction_sb_cLcR::synapse0x2750260() {
   return (neuron0x2729fe0()*-0.931943);
}

double NNfunction_sb_cLcR::synapse0x27502a0() {
   return (neuron0x272a320()*0.554859);
}

double NNfunction_sb_cLcR::synapse0x27502e0() {
   return (neuron0x272a660()*-0.266839);
}

double NNfunction_sb_cLcR::synapse0x2750320() {
   return (neuron0x272a9a0()*-0.881775);
}

double NNfunction_sb_cLcR::synapse0x2750360() {
   return (neuron0x272ace0()*-0.0514362);
}

double NNfunction_sb_cLcR::synapse0x27503a0() {
   return (neuron0x272b020()*-0.938059);
}

double NNfunction_sb_cLcR::synapse0x274fe30() {
   return (neuron0x272b360()*-0.848731);
}

double NNfunction_sb_cLcR::synapse0x274fe70() {
   return (neuron0x272b8c0()*0.421021);
}

double NNfunction_sb_cLcR::synapse0x27504f0() {
   return (neuron0x272bae0()*-0.113867);
}

double NNfunction_sb_cLcR::synapse0x2750530() {
   return (neuron0x272be20()*-0.551913);
}

double NNfunction_sb_cLcR::synapse0x2750570() {
   return (neuron0x272c160()*0.123053);
}

double NNfunction_sb_cLcR::synapse0x27505b0() {
   return (neuron0x272c4a0()*0.423465);
}

double NNfunction_sb_cLcR::synapse0x27505f0() {
   return (neuron0x272c7e0()*0.0857373);
}

double NNfunction_sb_cLcR::synapse0x2750630() {
   return (neuron0x272cb20()*1.08689);
}

double NNfunction_sb_cLcR::synapse0x27509b0() {
   return (neuron0x2727f60()*0.271224);
}

double NNfunction_sb_cLcR::synapse0x27509f0() {
   return (neuron0x27282a0()*0.190959);
}

double NNfunction_sb_cLcR::synapse0x2750a30() {
   return (neuron0x27285e0()*1.21024);
}

double NNfunction_sb_cLcR::synapse0x2750a70() {
   return (neuron0x2728920()*0.0351439);
}

double NNfunction_sb_cLcR::synapse0x2750ab0() {
   return (neuron0x2728c60()*-0.805746);
}

double NNfunction_sb_cLcR::synapse0x2750af0() {
   return (neuron0x2728fa0()*-0.282402);
}

double NNfunction_sb_cLcR::synapse0x2750b30() {
   return (neuron0x27292e0()*0.803419);
}

double NNfunction_sb_cLcR::synapse0x2750b70() {
   return (neuron0x2729620()*-0.0557647);
}

double NNfunction_sb_cLcR::synapse0x2750bb0() {
   return (neuron0x2729960()*-0.469225);
}

double NNfunction_sb_cLcR::synapse0x2750bf0() {
   return (neuron0x2729ca0()*0.99386);
}

double NNfunction_sb_cLcR::synapse0x2750c30() {
   return (neuron0x2729fe0()*-0.535861);
}

double NNfunction_sb_cLcR::synapse0x2750c70() {
   return (neuron0x272a320()*-0.248411);
}

double NNfunction_sb_cLcR::synapse0x2750cb0() {
   return (neuron0x272a660()*-0.433973);
}

double NNfunction_sb_cLcR::synapse0x2750cf0() {
   return (neuron0x272a9a0()*-0.843954);
}

double NNfunction_sb_cLcR::synapse0x2750d30() {
   return (neuron0x272ace0()*0.111102);
}

double NNfunction_sb_cLcR::synapse0x2750d70() {
   return (neuron0x272b020()*0.249971);
}

double NNfunction_sb_cLcR::synapse0x2750800() {
   return (neuron0x272b360()*-0.440766);
}

double NNfunction_sb_cLcR::synapse0x2750840() {
   return (neuron0x272b8c0()*0.639288);
}

double NNfunction_sb_cLcR::synapse0x2750ec0() {
   return (neuron0x272bae0()*0.367236);
}

double NNfunction_sb_cLcR::synapse0x2750f00() {
   return (neuron0x272be20()*0.818028);
}

double NNfunction_sb_cLcR::synapse0x2750f40() {
   return (neuron0x272c160()*0.0110381);
}

double NNfunction_sb_cLcR::synapse0x2750f80() {
   return (neuron0x272c4a0()*0.0531189);
}

double NNfunction_sb_cLcR::synapse0x2750fc0() {
   return (neuron0x272c7e0()*-0.797062);
}

double NNfunction_sb_cLcR::synapse0x2751000() {
   return (neuron0x272cb20()*0.46138);
}

double NNfunction_sb_cLcR::synapse0x2751380() {
   return (neuron0x2727f60()*-0.344523);
}

double NNfunction_sb_cLcR::synapse0x27513c0() {
   return (neuron0x27282a0()*0.0874839);
}

double NNfunction_sb_cLcR::synapse0x2751400() {
   return (neuron0x27285e0()*0.375546);
}

double NNfunction_sb_cLcR::synapse0x2751440() {
   return (neuron0x2728920()*-0.0969797);
}

double NNfunction_sb_cLcR::synapse0x2751480() {
   return (neuron0x2728c60()*-0.0648748);
}

double NNfunction_sb_cLcR::synapse0x27514c0() {
   return (neuron0x2728fa0()*0.732437);
}

double NNfunction_sb_cLcR::synapse0x2751500() {
   return (neuron0x27292e0()*0.910032);
}

double NNfunction_sb_cLcR::synapse0x2751540() {
   return (neuron0x2729620()*0.256218);
}

double NNfunction_sb_cLcR::synapse0x2751580() {
   return (neuron0x2729960()*-0.183914);
}

double NNfunction_sb_cLcR::synapse0x27515c0() {
   return (neuron0x2729ca0()*0.162723);
}

double NNfunction_sb_cLcR::synapse0x2751600() {
   return (neuron0x2729fe0()*0.301827);
}

double NNfunction_sb_cLcR::synapse0x2751640() {
   return (neuron0x272a320()*0.183148);
}

double NNfunction_sb_cLcR::synapse0x2751680() {
   return (neuron0x272a660()*0.252126);
}

double NNfunction_sb_cLcR::synapse0x27516c0() {
   return (neuron0x272a9a0()*-0.363672);
}

double NNfunction_sb_cLcR::synapse0x2751700() {
   return (neuron0x272ace0()*-0.0842);
}

double NNfunction_sb_cLcR::synapse0x2751740() {
   return (neuron0x272b020()*-0.335791);
}

double NNfunction_sb_cLcR::synapse0x27511d0() {
   return (neuron0x272b360()*0.0235315);
}

double NNfunction_sb_cLcR::synapse0x2751210() {
   return (neuron0x272b8c0()*-0.22833);
}

double NNfunction_sb_cLcR::synapse0x2751890() {
   return (neuron0x272bae0()*0.13058);
}

double NNfunction_sb_cLcR::synapse0x27518d0() {
   return (neuron0x272be20()*0.183126);
}

double NNfunction_sb_cLcR::synapse0x2751910() {
   return (neuron0x272c160()*0.360852);
}

double NNfunction_sb_cLcR::synapse0x2751950() {
   return (neuron0x272c4a0()*-0.176454);
}

double NNfunction_sb_cLcR::synapse0x2751990() {
   return (neuron0x272c7e0()*-0.0804642);
}

double NNfunction_sb_cLcR::synapse0x27519d0() {
   return (neuron0x272cb20()*0.677525);
}

double NNfunction_sb_cLcR::synapse0x272df70() {
   return (neuron0x272cfc0()*0.596803);
}

double NNfunction_sb_cLcR::synapse0x272dfb0() {
   return (neuron0x272d8d0()*2.34335);
}

double NNfunction_sb_cLcR::synapse0x272f480() {
   return (neuron0x272e3b0()*-1.08483);
}

double NNfunction_sb_cLcR::synapse0x272f4c0() {
   return (neuron0x24f1780()*0.3499);
}

double NNfunction_sb_cLcR::synapse0x272fe50() {
   return (neuron0x272f1d0()*1.71045);
}

double NNfunction_sb_cLcR::synapse0x272fe90() {
   return (neuron0x272fba0()*-1.52609);
}

double NNfunction_sb_cLcR::synapse0x2730c20() {
   return (neuron0x2730970()*0.0748073);
}

double NNfunction_sb_cLcR::synapse0x2730c60() {
   return (neuron0x2731340()*-1.37693);
}

double NNfunction_sb_cLcR::synapse0x27315f0() {
   return (neuron0x2731d10()*4.42592);
}

double NNfunction_sb_cLcR::synapse0x2731630() {
   return (neuron0x27327f0()*-0.939347);
}

double NNfunction_sb_cLcR::synapse0x2731fc0() {
   return (neuron0x27331c0()*-0.891358);
}

double NNfunction_sb_cLcR::synapse0x2732000() {
   return (neuron0x27302a0()*-0.0905715);
}

double NNfunction_sb_cLcR::synapse0x2732aa0() {
   return (neuron0x2734d70()*0.903066);
}

double NNfunction_sb_cLcR::synapse0x2732ae0() {
   return (neuron0x2735740()*-2.32402);
}

double NNfunction_sb_cLcR::synapse0x2733470() {
   return (neuron0x2736110()*-1.24723);
}

double NNfunction_sb_cLcR::synapse0x27334b0() {
   return (neuron0x2736ae0()*-0.11128);
}

double NNfunction_sb_cLcR::synapse0x2730550() {
   return (neuron0x27388f0()*5.45817);
}

double NNfunction_sb_cLcR::synapse0x2730590() {
   return (neuron0x2738bd0()*-1.72934);
}

double NNfunction_sb_cLcR::synapse0x2735020() {
   return (neuron0x27395a0()*2.11896);
}

double NNfunction_sb_cLcR::synapse0x2735060() {
   return (neuron0x2739f70()*0.743727);
}

double NNfunction_sb_cLcR::synapse0x27359f0() {
   return (neuron0x273a940()*1.19182);
}

double NNfunction_sb_cLcR::synapse0x2735a30() {
   return (neuron0x273b310()*1.64965);
}

double NNfunction_sb_cLcR::synapse0x27363c0() {
   return (neuron0x2733e60()*-6.14933);
}

double NNfunction_sb_cLcR::synapse0x2736400() {
   return (neuron0x2734830()*-1.96296);
}

double NNfunction_sb_cLcR::synapse0x2736d90() {
   return (neuron0x273e0a0()*1.11846);
}

double NNfunction_sb_cLcR::synapse0x2736dd0() {
   return (neuron0x273ea70()*-0.470439);
}

double NNfunction_sb_cLcR::synapse0x272af00() {
   return (neuron0x273f440()*0.471542);
}

double NNfunction_sb_cLcR::synapse0x272af40() {
   return (neuron0x273fe10()*1.47872);
}

double NNfunction_sb_cLcR::synapse0x2738e80() {
   return (neuron0x27407e0()*0.697162);
}

double NNfunction_sb_cLcR::synapse0x2738ec0() {
   return (neuron0x27411b0()*-1.25687);
}

double NNfunction_sb_cLcR::synapse0x2739850() {
   return (neuron0x2741b80()*0.590089);
}

double NNfunction_sb_cLcR::synapse0x2739890() {
   return (neuron0x2742550()*0.737518);
}

double NNfunction_sb_cLcR::synapse0x273a220() {
   return (neuron0x27385e0()*0.830044);
}

double NNfunction_sb_cLcR::synapse0x273a260() {
   return (neuron0x2745130()*-0.880394);
}

double NNfunction_sb_cLcR::synapse0x273abf0() {
   return (neuron0x2745b00()*-0.745473);
}

double NNfunction_sb_cLcR::synapse0x273ac30() {
   return (neuron0x27464d0()*-1.31678);
}

double NNfunction_sb_cLcR::synapse0x273b5c0() {
   return (neuron0x2746ea0()*-0.463462);
}

double NNfunction_sb_cLcR::synapse0x273b600() {
   return (neuron0x2747870()*0.744493);
}

double NNfunction_sb_cLcR::synapse0x2734110() {
   return (neuron0x2748240()*0.137499);
}

double NNfunction_sb_cLcR::synapse0x2734150() {
   return (neuron0x2748c10()*1.0949);
}

double NNfunction_sb_cLcR::synapse0x273d9c0() {
   return (neuron0x27495e0()*0.776873);
}

double NNfunction_sb_cLcR::synapse0x273da00() {
   return (neuron0x274a1c0()*1.08972);
}

double NNfunction_sb_cLcR::synapse0x273e350() {
   return (neuron0x274ab90()*0.607325);
}

double NNfunction_sb_cLcR::synapse0x273e390() {
   return (neuron0x273ba10()*0.657842);
}

double NNfunction_sb_cLcR::synapse0x273ed20() {
   return (neuron0x273c3e0()*0.00111044);
}

double NNfunction_sb_cLcR::synapse0x273ed60() {
   return (neuron0x273cdb0()*0.0979902);
}

double NNfunction_sb_cLcR::synapse0x273f6f0() {
   return (neuron0x274f3f0()*0.60548);
}

double NNfunction_sb_cLcR::synapse0x273f730() {
   return (neuron0x274fca0()*0.525891);
}

double NNfunction_sb_cLcR::synapse0x27400c0() {
   return (neuron0x2750670()*0.788815);
}

double NNfunction_sb_cLcR::synapse0x2740100() {
   return (neuron0x2751040()*-1.67883);
}

double NNfunction_sb_cLcR::synapse0x2742800() {
   return (neuron0x272cfc0()*0.11666);
}

double NNfunction_sb_cLcR::synapse0x2742840() {
   return (neuron0x272d8d0()*0.251957);
}

double NNfunction_sb_cLcR::synapse0x2737dc0() {
   return (neuron0x272e3b0()*-0.336904);
}

double NNfunction_sb_cLcR::synapse0x2737e00() {
   return (neuron0x24f1780()*0.459538);
}

double NNfunction_sb_cLcR::synapse0x27453e0() {
   return (neuron0x272f1d0()*0.21273);
}

double NNfunction_sb_cLcR::synapse0x2745420() {
   return (neuron0x272fba0()*-0.401504);
}

double NNfunction_sb_cLcR::synapse0x2745db0() {
   return (neuron0x2730970()*0.028791);
}

double NNfunction_sb_cLcR::synapse0x2745df0() {
   return (neuron0x2731340()*-0.20524);
}

double NNfunction_sb_cLcR::synapse0x2746780() {
   return (neuron0x2731d10()*-0.993582);
}

double NNfunction_sb_cLcR::synapse0x27467c0() {
   return (neuron0x27327f0()*-0.249123);
}

double NNfunction_sb_cLcR::synapse0x2747150() {
   return (neuron0x27331c0()*-0.335052);
}

double NNfunction_sb_cLcR::synapse0x2747190() {
   return (neuron0x27302a0()*0.19833);
}

double NNfunction_sb_cLcR::synapse0x2747b20() {
   return (neuron0x2734d70()*-0.576866);
}

double NNfunction_sb_cLcR::synapse0x2747b60() {
   return (neuron0x2735740()*-0.612278);
}

double NNfunction_sb_cLcR::synapse0x27484f0() {
   return (neuron0x2736110()*0.0318773);
}

double NNfunction_sb_cLcR::synapse0x2748530() {
   return (neuron0x2736ae0()*-0.45036);
}

double NNfunction_sb_cLcR::synapse0x2748ec0() {
   return (neuron0x27388f0()*0.0303231);
}

double NNfunction_sb_cLcR::synapse0x2748f00() {
   return (neuron0x2738bd0()*-0.11263);
}

double NNfunction_sb_cLcR::synapse0x2749890() {
   return (neuron0x27395a0()*0.0282424);
}

double NNfunction_sb_cLcR::synapse0x27498d0() {
   return (neuron0x2739f70()*0.24299);
}

double NNfunction_sb_cLcR::synapse0x274a470() {
   return (neuron0x273a940()*0.295992);
}

double NNfunction_sb_cLcR::synapse0x274a4b0() {
   return (neuron0x273b310()*0.182839);
}

double NNfunction_sb_cLcR::synapse0x274ae40() {
   return (neuron0x2733e60()*0.0376724);
}

double NNfunction_sb_cLcR::synapse0x274ae80() {
   return (neuron0x2734830()*0.147919);
}

double NNfunction_sb_cLcR::synapse0x273bcc0() {
   return (neuron0x273e0a0()*0.287741);
}

double NNfunction_sb_cLcR::synapse0x273bd00() {
   return (neuron0x273ea70()*-0.360376);
}

double NNfunction_sb_cLcR::synapse0x273c690() {
   return (neuron0x273f440()*-0.14212);
}

double NNfunction_sb_cLcR::synapse0x273c6d0() {
   return (neuron0x273fe10()*0.61787);
}

double NNfunction_sb_cLcR::synapse0x273d060() {
   return (neuron0x27407e0()*0.22613);
}

double NNfunction_sb_cLcR::synapse0x273d0a0() {
   return (neuron0x27411b0()*0.265196);
}

double NNfunction_sb_cLcR::synapse0x274f580() {
   return (neuron0x2741b80()*0.227186);
}

double NNfunction_sb_cLcR::synapse0x274f5c0() {
   return (neuron0x2742550()*0.338289);
}

double NNfunction_sb_cLcR::synapse0x274ff50() {
   return (neuron0x27385e0()*0.562008);
}

double NNfunction_sb_cLcR::synapse0x274ff90() {
   return (neuron0x2745130()*-0.717181);
}

double NNfunction_sb_cLcR::synapse0x2750920() {
   return (neuron0x2745b00()*-0.95425);
}

double NNfunction_sb_cLcR::synapse0x2750960() {
   return (neuron0x27464d0()*-0.139442);
}

double NNfunction_sb_cLcR::synapse0x27512f0() {
   return (neuron0x2746ea0()*-0.0156377);
}

double NNfunction_sb_cLcR::synapse0x2751330() {
   return (neuron0x2747870()*-1.22213);
}

double NNfunction_sb_cLcR::synapse0x272d1e0() {
   return (neuron0x2748240()*-0.0145752);
}

double NNfunction_sb_cLcR::synapse0x272d220() {
   return (neuron0x2748c10()*0.389003);
}

double NNfunction_sb_cLcR::synapse0x2740a90() {
   return (neuron0x27495e0()*0.477589);
}

double NNfunction_sb_cLcR::synapse0x2740ad0() {
   return (neuron0x274a1c0()*0.189937);
}

double NNfunction_sb_cLcR::synapse0x2751a10() {
   return (neuron0x274ab90()*0.206059);
}

double NNfunction_sb_cLcR::synapse0x2751a50() {
   return (neuron0x273ba10()*0.199948);
}

double NNfunction_sb_cLcR::synapse0x2751a90() {
   return (neuron0x273c3e0()*-0.464014);
}

double NNfunction_sb_cLcR::synapse0x2751ad0() {
   return (neuron0x273cdb0()*0.0569836);
}

double NNfunction_sb_cLcR::synapse0x2758980() {
   return (neuron0x274f3f0()*1.59064);
}

double NNfunction_sb_cLcR::synapse0x27589c0() {
   return (neuron0x274fca0()*-0.253219);
}

double NNfunction_sb_cLcR::synapse0x2758a00() {
   return (neuron0x2750670()*0.294673);
}

double NNfunction_sb_cLcR::synapse0x2758a40() {
   return (neuron0x2751040()*-0.00435569);
}

double NNfunction_sb_cLcR::synapse0x2758dc0() {
   return (neuron0x272cfc0()*-0.365383);
}

double NNfunction_sb_cLcR::synapse0x2758e00() {
   return (neuron0x272d8d0()*-0.0949164);
}

double NNfunction_sb_cLcR::synapse0x2758e40() {
   return (neuron0x272e3b0()*-0.380974);
}

double NNfunction_sb_cLcR::synapse0x2758e80() {
   return (neuron0x24f1780()*-0.13173);
}

double NNfunction_sb_cLcR::synapse0x2758ec0() {
   return (neuron0x272f1d0()*0.311489);
}

double NNfunction_sb_cLcR::synapse0x2758f00() {
   return (neuron0x272fba0()*-0.476196);
}

double NNfunction_sb_cLcR::synapse0x2758f40() {
   return (neuron0x2730970()*-0.0345359);
}

double NNfunction_sb_cLcR::synapse0x2758f80() {
   return (neuron0x2731340()*-0.260075);
}

double NNfunction_sb_cLcR::synapse0x2758fc0() {
   return (neuron0x2731d10()*-0.0234732);
}

double NNfunction_sb_cLcR::synapse0x2759000() {
   return (neuron0x27327f0()*-0.197499);
}

double NNfunction_sb_cLcR::synapse0x2759040() {
   return (neuron0x27331c0()*0.404061);
}

double NNfunction_sb_cLcR::synapse0x2759080() {
   return (neuron0x27302a0()*0.153239);
}

double NNfunction_sb_cLcR::synapse0x27590c0() {
   return (neuron0x2734d70()*-1.36777);
}

double NNfunction_sb_cLcR::synapse0x2759100() {
   return (neuron0x2735740()*-0.387995);
}

double NNfunction_sb_cLcR::synapse0x2759140() {
   return (neuron0x2736110()*-0.0493914);
}

double NNfunction_sb_cLcR::synapse0x2759180() {
   return (neuron0x2736ae0()*-0.395681);
}

double NNfunction_sb_cLcR::synapse0x2758c10() {
   return (neuron0x27388f0()*-0.320273);
}

double NNfunction_sb_cLcR::synapse0x2758c50() {
   return (neuron0x2738bd0()*-0.116227);
}

double NNfunction_sb_cLcR::synapse0x27592d0() {
   return (neuron0x27395a0()*0.158031);
}

double NNfunction_sb_cLcR::synapse0x2759310() {
   return (neuron0x2739f70()*0.503709);
}

double NNfunction_sb_cLcR::synapse0x2759350() {
   return (neuron0x273a940()*0.276509);
}

double NNfunction_sb_cLcR::synapse0x2759390() {
   return (neuron0x273b310()*-0.0117246);
}

double NNfunction_sb_cLcR::synapse0x27593d0() {
   return (neuron0x2733e60()*-0.0845189);
}

double NNfunction_sb_cLcR::synapse0x2759410() {
   return (neuron0x2734830()*-0.207769);
}

double NNfunction_sb_cLcR::synapse0x2759450() {
   return (neuron0x273e0a0()*-0.365031);
}

double NNfunction_sb_cLcR::synapse0x2759490() {
   return (neuron0x273ea70()*-0.153143);
}

double NNfunction_sb_cLcR::synapse0x27594d0() {
   return (neuron0x273f440()*0.036609);
}

double NNfunction_sb_cLcR::synapse0x2759510() {
   return (neuron0x273fe10()*0.484128);
}

double NNfunction_sb_cLcR::synapse0x2759550() {
   return (neuron0x27407e0()*0.295592);
}

double NNfunction_sb_cLcR::synapse0x2759590() {
   return (neuron0x27411b0()*0.100581);
}

double NNfunction_sb_cLcR::synapse0x27595d0() {
   return (neuron0x2741b80()*0.274408);
}

double NNfunction_sb_cLcR::synapse0x2759610() {
   return (neuron0x2742550()*0.342239);
}

double NNfunction_sb_cLcR::synapse0x27591c0() {
   return (neuron0x27385e0()*0.463341);
}

double NNfunction_sb_cLcR::synapse0x2759200() {
   return (neuron0x2745130()*1.04129);
}

double NNfunction_sb_cLcR::synapse0x2759240() {
   return (neuron0x2745b00()*0.982732);
}

double NNfunction_sb_cLcR::synapse0x2759280() {
   return (neuron0x27464d0()*-0.250005);
}

double NNfunction_sb_cLcR::synapse0x2759860() {
   return (neuron0x2746ea0()*0.0970118);
}

double NNfunction_sb_cLcR::synapse0x27598a0() {
   return (neuron0x2747870()*-1.03326);
}

double NNfunction_sb_cLcR::synapse0x27598e0() {
   return (neuron0x2748240()*-0.000105466);
}

double NNfunction_sb_cLcR::synapse0x2759920() {
   return (neuron0x2748c10()*0.313661);
}

double NNfunction_sb_cLcR::synapse0x2759960() {
   return (neuron0x27495e0()*0.421135);
}

double NNfunction_sb_cLcR::synapse0x27599a0() {
   return (neuron0x274a1c0()*0.141);
}

double NNfunction_sb_cLcR::synapse0x27599e0() {
   return (neuron0x274ab90()*0.170364);
}

double NNfunction_sb_cLcR::synapse0x2759a20() {
   return (neuron0x273ba10()*0.0327279);
}

double NNfunction_sb_cLcR::synapse0x2759a60() {
   return (neuron0x273c3e0()*-0.430801);
}

double NNfunction_sb_cLcR::synapse0x2759aa0() {
   return (neuron0x273cdb0()*0.433958);
}

double NNfunction_sb_cLcR::synapse0x2759ae0() {
   return (neuron0x274f3f0()*0.72747);
}

double NNfunction_sb_cLcR::synapse0x2759b20() {
   return (neuron0x274fca0()*-0.168009);
}

double NNfunction_sb_cLcR::synapse0x2759b60() {
   return (neuron0x2750670()*0.273201);
}

double NNfunction_sb_cLcR::synapse0x2759ba0() {
   return (neuron0x2751040()*-0.138294);
}

double NNfunction_sb_cLcR::synapse0x2759f20() {
   return (neuron0x272cfc0()*1.83046);
}

double NNfunction_sb_cLcR::synapse0x2759f60() {
   return (neuron0x272d8d0()*-0.0333129);
}

double NNfunction_sb_cLcR::synapse0x2759fa0() {
   return (neuron0x272e3b0()*-0.492219);
}

double NNfunction_sb_cLcR::synapse0x2759fe0() {
   return (neuron0x24f1780()*0.00636778);
}

double NNfunction_sb_cLcR::synapse0x275a020() {
   return (neuron0x272f1d0()*-0.641745);
}

double NNfunction_sb_cLcR::synapse0x275a060() {
   return (neuron0x272fba0()*1.67828);
}

double NNfunction_sb_cLcR::synapse0x275a0a0() {
   return (neuron0x2730970()*2.181);
}

double NNfunction_sb_cLcR::synapse0x275a0e0() {
   return (neuron0x2731340()*-0.0357234);
}

double NNfunction_sb_cLcR::synapse0x275a120() {
   return (neuron0x2731d10()*6.62299);
}

double NNfunction_sb_cLcR::synapse0x275a160() {
   return (neuron0x27327f0()*-0.0819698);
}

double NNfunction_sb_cLcR::synapse0x275a1a0() {
   return (neuron0x27331c0()*-0.393061);
}

double NNfunction_sb_cLcR::synapse0x275a1e0() {
   return (neuron0x27302a0()*-1.20953);
}

double NNfunction_sb_cLcR::synapse0x275a220() {
   return (neuron0x2734d70()*1.33644);
}

double NNfunction_sb_cLcR::synapse0x275a260() {
   return (neuron0x2735740()*2.08585);
}

double NNfunction_sb_cLcR::synapse0x275a2a0() {
   return (neuron0x2736110()*-0.557346);
}

double NNfunction_sb_cLcR::synapse0x275a2e0() {
   return (neuron0x2736ae0()*2.39843);
}

double NNfunction_sb_cLcR::synapse0x2759d70() {
   return (neuron0x27388f0()*1.12132);
}

double NNfunction_sb_cLcR::synapse0x2759db0() {
   return (neuron0x2738bd0()*-0.0426963);
}

double NNfunction_sb_cLcR::synapse0x275a430() {
   return (neuron0x27395a0()*0.205655);
}

double NNfunction_sb_cLcR::synapse0x275a470() {
   return (neuron0x2739f70()*-1.29165);
}

double NNfunction_sb_cLcR::synapse0x275a4b0() {
   return (neuron0x273a940()*-0.346317);
}

double NNfunction_sb_cLcR::synapse0x275a4f0() {
   return (neuron0x273b310()*-0.729061);
}

double NNfunction_sb_cLcR::synapse0x275a530() {
   return (neuron0x2733e60()*-0.00319267);
}

double NNfunction_sb_cLcR::synapse0x275a570() {
   return (neuron0x2734830()*-1.65096);
}

double NNfunction_sb_cLcR::synapse0x275a5b0() {
   return (neuron0x273e0a0()*1.43028);
}

double NNfunction_sb_cLcR::synapse0x275a5f0() {
   return (neuron0x273ea70()*-1.11768);
}

double NNfunction_sb_cLcR::synapse0x275a630() {
   return (neuron0x273f440()*0.849763);
}

double NNfunction_sb_cLcR::synapse0x275a670() {
   return (neuron0x273fe10()*-1.0138);
}

double NNfunction_sb_cLcR::synapse0x275a6b0() {
   return (neuron0x27407e0()*-0.43732);
}

double NNfunction_sb_cLcR::synapse0x275a6f0() {
   return (neuron0x27411b0()*-1.03419);
}

double NNfunction_sb_cLcR::synapse0x275a730() {
   return (neuron0x2741b80()*1.03178);
}

double NNfunction_sb_cLcR::synapse0x275a770() {
   return (neuron0x2742550()*1.23326);
}

double NNfunction_sb_cLcR::synapse0x275a320() {
   return (neuron0x27385e0()*-1.43912);
}

double NNfunction_sb_cLcR::synapse0x275a360() {
   return (neuron0x2745130()*-1.41073);
}

double NNfunction_sb_cLcR::synapse0x275a3a0() {
   return (neuron0x2745b00()*-1.46141);
}

double NNfunction_sb_cLcR::synapse0x275a3e0() {
   return (neuron0x27464d0()*-1.66327);
}

double NNfunction_sb_cLcR::synapse0x275a9c0() {
   return (neuron0x2746ea0()*-2.48954);
}

double NNfunction_sb_cLcR::synapse0x275aa00() {
   return (neuron0x2747870()*-4.06244);
}

double NNfunction_sb_cLcR::synapse0x275aa40() {
   return (neuron0x2748240()*1.01051);
}

double NNfunction_sb_cLcR::synapse0x275aa80() {
   return (neuron0x2748c10()*-0.913293);
}

double NNfunction_sb_cLcR::synapse0x275aac0() {
   return (neuron0x27495e0()*-1.45069);
}

double NNfunction_sb_cLcR::synapse0x275ab00() {
   return (neuron0x274a1c0()*0.656483);
}

double NNfunction_sb_cLcR::synapse0x275ab40() {
   return (neuron0x274ab90()*0.901089);
}

double NNfunction_sb_cLcR::synapse0x275ab80() {
   return (neuron0x273ba10()*-0.0566914);
}

double NNfunction_sb_cLcR::synapse0x275abc0() {
   return (neuron0x273c3e0()*1.86564);
}

double NNfunction_sb_cLcR::synapse0x275ac00() {
   return (neuron0x273cdb0()*2.86957);
}

double NNfunction_sb_cLcR::synapse0x275ac40() {
   return (neuron0x274f3f0()*3.95304);
}

double NNfunction_sb_cLcR::synapse0x275ac80() {
   return (neuron0x274fca0()*1.01554);
}

double NNfunction_sb_cLcR::synapse0x275acc0() {
   return (neuron0x2750670()*-0.265806);
}

double NNfunction_sb_cLcR::synapse0x275ad00() {
   return (neuron0x2751040()*-0.898499);
}

double NNfunction_sb_cLcR::synapse0x275b080() {
   return (neuron0x272cfc0()*-0.572829);
}

double NNfunction_sb_cLcR::synapse0x275b0c0() {
   return (neuron0x272d8d0()*-1.53774);
}

double NNfunction_sb_cLcR::synapse0x275b100() {
   return (neuron0x272e3b0()*-0.114354);
}

double NNfunction_sb_cLcR::synapse0x275b140() {
   return (neuron0x24f1780()*-0.570402);
}

double NNfunction_sb_cLcR::synapse0x275b180() {
   return (neuron0x272f1d0()*0.0306395);
}

double NNfunction_sb_cLcR::synapse0x275b1c0() {
   return (neuron0x272fba0()*-0.0934953);
}

double NNfunction_sb_cLcR::synapse0x275b200() {
   return (neuron0x2730970()*0.0549431);
}

double NNfunction_sb_cLcR::synapse0x275b240() {
   return (neuron0x2731340()*-0.0792187);
}

double NNfunction_sb_cLcR::synapse0x275b280() {
   return (neuron0x2731d10()*-0.258316);
}

double NNfunction_sb_cLcR::synapse0x275b2c0() {
   return (neuron0x27327f0()*-0.0842946);
}

double NNfunction_sb_cLcR::synapse0x275b300() {
   return (neuron0x27331c0()*0.565673);
}

double NNfunction_sb_cLcR::synapse0x275b340() {
   return (neuron0x27302a0()*0.0405663);
}

double NNfunction_sb_cLcR::synapse0x275b380() {
   return (neuron0x2734d70()*-2.86357);
}

double NNfunction_sb_cLcR::synapse0x275b3c0() {
   return (neuron0x2735740()*0.213761);
}

double NNfunction_sb_cLcR::synapse0x275b400() {
   return (neuron0x2736110()*-0.0116778);
}

double NNfunction_sb_cLcR::synapse0x275b440() {
   return (neuron0x2736ae0()*-0.0680894);
}

double NNfunction_sb_cLcR::synapse0x275aed0() {
   return (neuron0x27388f0()*-0.786908);
}

double NNfunction_sb_cLcR::synapse0x275af10() {
   return (neuron0x2738bd0()*-0.0752748);
}

double NNfunction_sb_cLcR::synapse0x275b590() {
   return (neuron0x27395a0()*-0.0704777);
}

double NNfunction_sb_cLcR::synapse0x275b5d0() {
   return (neuron0x2739f70()*-0.0354227);
}

double NNfunction_sb_cLcR::synapse0x275b610() {
   return (neuron0x273a940()*0.0147347);
}

double NNfunction_sb_cLcR::synapse0x275b650() {
   return (neuron0x273b310()*-1.92825);
}

double NNfunction_sb_cLcR::synapse0x275b690() {
   return (neuron0x2733e60()*0.431454);
}

double NNfunction_sb_cLcR::synapse0x275b6d0() {
   return (neuron0x2734830()*0.452012);
}

double NNfunction_sb_cLcR::synapse0x275b710() {
   return (neuron0x273e0a0()*-0.45637);
}

double NNfunction_sb_cLcR::synapse0x275b750() {
   return (neuron0x273ea70()*-0.117765);
}

double NNfunction_sb_cLcR::synapse0x275b790() {
   return (neuron0x273f440()*-0.0350535);
}

double NNfunction_sb_cLcR::synapse0x275b7d0() {
   return (neuron0x273fe10()*0.199952);
}

double NNfunction_sb_cLcR::synapse0x275b810() {
   return (neuron0x27407e0()*0.0554054);
}

double NNfunction_sb_cLcR::synapse0x275b850() {
   return (neuron0x27411b0()*0.0574734);
}

double NNfunction_sb_cLcR::synapse0x275b890() {
   return (neuron0x2741b80()*0.0289563);
}

double NNfunction_sb_cLcR::synapse0x275b8d0() {
   return (neuron0x2742550()*0.0905196);
}

double NNfunction_sb_cLcR::synapse0x275b480() {
   return (neuron0x27385e0()*0.11252);
}

double NNfunction_sb_cLcR::synapse0x275b4c0() {
   return (neuron0x2745130()*1.09501);
}

double NNfunction_sb_cLcR::synapse0x275b500() {
   return (neuron0x2745b00()*1.20517);
}

double NNfunction_sb_cLcR::synapse0x275b540() {
   return (neuron0x27464d0()*-0.117182);
}

double NNfunction_sb_cLcR::synapse0x275bb20() {
   return (neuron0x2746ea0()*0.0198671);
}

double NNfunction_sb_cLcR::synapse0x275bb60() {
   return (neuron0x2747870()*3.46124);
}

double NNfunction_sb_cLcR::synapse0x275bba0() {
   return (neuron0x2748240()*-0.00905726);
}

double NNfunction_sb_cLcR::synapse0x275bbe0() {
   return (neuron0x2748c10()*0.128765);
}

double NNfunction_sb_cLcR::synapse0x275bc20() {
   return (neuron0x27495e0()*0.0968118);
}

double NNfunction_sb_cLcR::synapse0x275bc60() {
   return (neuron0x274a1c0()*0.0918655);
}

double NNfunction_sb_cLcR::synapse0x275bca0() {
   return (neuron0x274ab90()*0.072321);
}

double NNfunction_sb_cLcR::synapse0x275bce0() {
   return (neuron0x273ba10()*0.00799718);
}

double NNfunction_sb_cLcR::synapse0x275bd20() {
   return (neuron0x273c3e0()*-0.327593);
}

double NNfunction_sb_cLcR::synapse0x275bd60() {
   return (neuron0x273cdb0()*-0.640515);
}

double NNfunction_sb_cLcR::synapse0x275bda0() {
   return (neuron0x274f3f0()*-3.54333);
}

double NNfunction_sb_cLcR::synapse0x275bde0() {
   return (neuron0x274fca0()*-0.0367173);
}

double NNfunction_sb_cLcR::synapse0x275be20() {
   return (neuron0x2750670()*0.0658087);
}

double NNfunction_sb_cLcR::synapse0x275be60() {
   return (neuron0x2751040()*0.00494761);
}

double NNfunction_sb_cLcR::synapse0x272cf80() {
   return (neuron0x2758240()*-6.48895);
}

double NNfunction_sb_cLcR::synapse0x275c0c0() {
   return (neuron0x27585e0()*-2.19198);
}

double NNfunction_sb_cLcR::synapse0x275c100() {
   return (neuron0x2758a80()*4.36572);
}

double NNfunction_sb_cLcR::synapse0x275c140() {
   return (neuron0x2759be0()*-6.09627);
}

double NNfunction_sb_cLcR::synapse0x275c180() {
   return (neuron0x275ad40()*7.84822);
}

