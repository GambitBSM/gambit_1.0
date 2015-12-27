#include "NNfunction_ss_cLcR.h"
#include <cmath>

double NNfunction_ss_cLcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9959)/15.0912;
   input1 = (in1 - 29.9183)/886.429;
   input2 = (in2 - 432.758)/543.226;
   input3 = (in3 - 107.478)/661.562;
   input4 = (in4 - 763.735)/823.624;
   input5 = (in5 - 647.917)/789.957;
   input6 = (in6 - 652.116)/793.737;
   input7 = (in7 - 661.143)/794.317;
   input8 = (in8 - 648.774)/799.529;
   input9 = (in9 - 634.951)/779.569;
   input10 = (in10 - 681.647)/810.546;
   input11 = (in11 - 588.586)/667.433;
   input12 = (in12 - 330.462)/209.895;
   input13 = (in13 - 439.657)/400.231;
   input14 = (in14 - 596.039)/651.773;
   input15 = (in15 - 334.307)/210.34;
   input16 = (in16 - 425.354)/441.219;
   input17 = (in17 - 611.774)/696.756;
   input18 = (in18 - 604.578)/696.579;
   input19 = (in19 - 628.028)/695.425;
   input20 = (in20 - -100.47)/402.985;
   input21 = (in21 - -123.375)/926.298;
   input22 = (in22 - 14.4345)/957.019;
   input23 = (in23 - -82.847)/508.464;
   switch(index) {
     case 0:
         return neuron0x245bea0();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLcR::Value(int index, double* input) {
   input0 = (input[0] - 22.9959)/15.0912;
   input1 = (input[1] - 29.9183)/886.429;
   input2 = (input[2] - 432.758)/543.226;
   input3 = (input[3] - 107.478)/661.562;
   input4 = (input[4] - 763.735)/823.624;
   input5 = (input[5] - 647.917)/789.957;
   input6 = (input[6] - 652.116)/793.737;
   input7 = (input[7] - 661.143)/794.317;
   input8 = (input[8] - 648.774)/799.529;
   input9 = (input[9] - 634.951)/779.569;
   input10 = (input[10] - 681.647)/810.546;
   input11 = (input[11] - 588.586)/667.433;
   input12 = (input[12] - 330.462)/209.895;
   input13 = (input[13] - 439.657)/400.231;
   input14 = (input[14] - 596.039)/651.773;
   input15 = (input[15] - 334.307)/210.34;
   input16 = (input[16] - 425.354)/441.219;
   input17 = (input[17] - 611.774)/696.756;
   input18 = (input[18] - 604.578)/696.579;
   input19 = (input[19] - 628.028)/695.425;
   input20 = (input[20] - -100.47)/402.985;
   input21 = (input[21] - -123.375)/926.298;
   input22 = (input[22] - 14.4345)/957.019;
   input23 = (input[23] - -82.847)/508.464;
   switch(index) {
     case 0:
         return neuron0x245bea0();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLcR::neuron0x2427f60() {
   return input0;
}

double NNfunction_ss_cLcR::neuron0x24282a0() {
   return input1;
}

double NNfunction_ss_cLcR::neuron0x24285e0() {
   return input2;
}

double NNfunction_ss_cLcR::neuron0x2428920() {
   return input3;
}

double NNfunction_ss_cLcR::neuron0x2428c60() {
   return input4;
}

double NNfunction_ss_cLcR::neuron0x2428fa0() {
   return input5;
}

double NNfunction_ss_cLcR::neuron0x24292e0() {
   return input6;
}

double NNfunction_ss_cLcR::neuron0x2429620() {
   return input7;
}

double NNfunction_ss_cLcR::neuron0x2429960() {
   return input8;
}

double NNfunction_ss_cLcR::neuron0x2429ca0() {
   return input9;
}

double NNfunction_ss_cLcR::neuron0x2429fe0() {
   return input10;
}

double NNfunction_ss_cLcR::neuron0x242a320() {
   return input11;
}

double NNfunction_ss_cLcR::neuron0x242a660() {
   return input12;
}

double NNfunction_ss_cLcR::neuron0x242a9a0() {
   return input13;
}

double NNfunction_ss_cLcR::neuron0x242ace0() {
   return input14;
}

double NNfunction_ss_cLcR::neuron0x242b020() {
   return input15;
}

double NNfunction_ss_cLcR::neuron0x242b360() {
   return input16;
}

double NNfunction_ss_cLcR::neuron0x242b8c0() {
   return input17;
}

double NNfunction_ss_cLcR::neuron0x242bae0() {
   return input18;
}

double NNfunction_ss_cLcR::neuron0x242be20() {
   return input19;
}

double NNfunction_ss_cLcR::neuron0x242c160() {
   return input20;
}

double NNfunction_ss_cLcR::neuron0x242c4a0() {
   return input21;
}

double NNfunction_ss_cLcR::neuron0x242c7e0() {
   return input22;
}

double NNfunction_ss_cLcR::neuron0x242cb20() {
   return input23;
}

double NNfunction_ss_cLcR::input0x242cfc0() {
   double input = -1.55788;
   input += synapse0x21f1910();
   input += synapse0x2427e20();
   input += synapse0x2427e60();
   input += synapse0x242d270();
   input += synapse0x242d2b0();
   input += synapse0x242d2f0();
   input += synapse0x242d330();
   input += synapse0x242d370();
   input += synapse0x242d3b0();
   input += synapse0x242d3f0();
   input += synapse0x242d430();
   input += synapse0x242d470();
   input += synapse0x242d4b0();
   input += synapse0x242d4f0();
   input += synapse0x242d530();
   input += synapse0x242d570();
   input += synapse0x2427d90();
   input += synapse0x2427dd0();
   input += synapse0x21e3110();
   input += synapse0x21e3150();
   input += synapse0x242d7d0();
   input += synapse0x242d810();
   input += synapse0x242d850();
   input += synapse0x242d890();
   return input;
}

double NNfunction_ss_cLcR::neuron0x242cfc0() {
   double input = input0x242cfc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x242d8d0() {
   double input = 0.292009;
   input += synapse0x242dc10();
   input += synapse0x242dc50();
   input += synapse0x242dc90();
   input += synapse0x242dcd0();
   input += synapse0x242dd10();
   input += synapse0x242dd50();
   input += synapse0x242dd90();
   input += synapse0x242ddd0();
   input += synapse0x242de10();
   input += synapse0x242d6c0();
   input += synapse0x242d700();
   input += synapse0x242d740();
   input += synapse0x242d780();
   input += synapse0x242e060();
   input += synapse0x242e0a0();
   input += synapse0x242e0e0();
   input += synapse0x242da60();
   input += synapse0x242daa0();
   input += synapse0x242e230();
   input += synapse0x242e270();
   input += synapse0x242e2b0();
   input += synapse0x242e2f0();
   input += synapse0x242e330();
   input += synapse0x242e370();
   return input;
}

double NNfunction_ss_cLcR::neuron0x242d8d0() {
   double input = input0x242d8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x242e3b0() {
   double input = 0.186887;
   input += synapse0x242e6f0();
   input += synapse0x242e730();
   input += synapse0x242e770();
   input += synapse0x242e7b0();
   input += synapse0x242e7f0();
   input += synapse0x242e830();
   input += synapse0x242e870();
   input += synapse0x242e8b0();
   input += synapse0x242e8f0();
   input += synapse0x242e930();
   input += synapse0x242e970();
   input += synapse0x242e9b0();
   input += synapse0x242e9f0();
   input += synapse0x242ea30();
   input += synapse0x242ea70();
   input += synapse0x242eab0();
   input += synapse0x242e540();
   input += synapse0x242e580();
   input += synapse0x21f1020();
   input += synapse0x21f1060();
   input += synapse0x2416ff0();
   input += synapse0x2417030();
   input += synapse0x2417070();
   input += synapse0x2427ea0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x242e3b0() {
   double input = input0x242e3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x21f1780() {
   double input = 0.592077;
   input += synapse0x242e000();
   input += synapse0x2427ee0();
   input += synapse0x2427f20();
   input += synapse0x242ec00();
   input += synapse0x242ec40();
   input += synapse0x242ec80();
   input += synapse0x242ecc0();
   input += synapse0x242ed00();
   input += synapse0x242ed40();
   input += synapse0x242ed80();
   input += synapse0x242edc0();
   input += synapse0x242ee00();
   input += synapse0x242ee40();
   input += synapse0x242ee80();
   input += synapse0x242eec0();
   input += synapse0x242ef00();
   input += synapse0x242de50();
   input += synapse0x242de90();
   input += synapse0x242f050();
   input += synapse0x242f090();
   input += synapse0x242f0d0();
   input += synapse0x242f110();
   input += synapse0x242f150();
   input += synapse0x242f190();
   return input;
}

double NNfunction_ss_cLcR::neuron0x21f1780() {
   double input = input0x21f1780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x242f1d0() {
   double input = 1.45563;
   input += synapse0x242f510();
   input += synapse0x242f550();
   input += synapse0x242f590();
   input += synapse0x242f5d0();
   input += synapse0x242f610();
   input += synapse0x242f650();
   input += synapse0x242f690();
   input += synapse0x242f6d0();
   input += synapse0x242f710();
   input += synapse0x242f750();
   input += synapse0x242f790();
   input += synapse0x242f7d0();
   input += synapse0x242f810();
   input += synapse0x242f850();
   input += synapse0x242f890();
   input += synapse0x242f8d0();
   input += synapse0x242f360();
   input += synapse0x242f3a0();
   input += synapse0x242fa20();
   input += synapse0x242fa60();
   input += synapse0x242faa0();
   input += synapse0x242fae0();
   input += synapse0x242fb20();
   input += synapse0x242fb60();
   return input;
}

double NNfunction_ss_cLcR::neuron0x242f1d0() {
   double input = input0x242f1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x242fba0() {
   double input = 0.404843;
   input += synapse0x242fee0();
   input += synapse0x242ff20();
   input += synapse0x242ff60();
   input += synapse0x242ffa0();
   input += synapse0x242ffe0();
   input += synapse0x2430020();
   input += synapse0x2430060();
   input += synapse0x24300a0();
   input += synapse0x24300e0();
   input += synapse0x21f1370();
   input += synapse0x21f13b0();
   input += synapse0x21f13f0();
   input += synapse0x21f1430();
   input += synapse0x21f1470();
   input += synapse0x21f14b0();
   input += synapse0x21f14f0();
   input += synapse0x242fd30();
   input += synapse0x242fd70();
   input += synapse0x21f1640();
   input += synapse0x21f1680();
   input += synapse0x21f16c0();
   input += synapse0x21f1700();
   input += synapse0x21f1740();
   input += synapse0x2430930();
   return input;
}

double NNfunction_ss_cLcR::neuron0x242fba0() {
   double input = input0x242fba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2430970() {
   double input = -1.90559;
   input += synapse0x2430cb0();
   input += synapse0x2430cf0();
   input += synapse0x2430d30();
   input += synapse0x2430d70();
   input += synapse0x2430db0();
   input += synapse0x2430df0();
   input += synapse0x2430e30();
   input += synapse0x2430e70();
   input += synapse0x2430eb0();
   input += synapse0x2430ef0();
   input += synapse0x2430f30();
   input += synapse0x2430f70();
   input += synapse0x2430fb0();
   input += synapse0x2430ff0();
   input += synapse0x2431030();
   input += synapse0x2431070();
   input += synapse0x2430b00();
   input += synapse0x2430b40();
   input += synapse0x24311c0();
   input += synapse0x2431200();
   input += synapse0x2431240();
   input += synapse0x2431280();
   input += synapse0x24312c0();
   input += synapse0x2431300();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2430970() {
   double input = input0x2430970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2431340() {
   double input = -0.101638;
   input += synapse0x2431680();
   input += synapse0x24316c0();
   input += synapse0x2431700();
   input += synapse0x2431740();
   input += synapse0x2431780();
   input += synapse0x24317c0();
   input += synapse0x2431800();
   input += synapse0x2431840();
   input += synapse0x2431880();
   input += synapse0x24318c0();
   input += synapse0x2431900();
   input += synapse0x2431940();
   input += synapse0x2431980();
   input += synapse0x24319c0();
   input += synapse0x2431a00();
   input += synapse0x2431a40();
   input += synapse0x24314d0();
   input += synapse0x2431510();
   input += synapse0x2431b90();
   input += synapse0x2431bd0();
   input += synapse0x2431c10();
   input += synapse0x2431c50();
   input += synapse0x2431c90();
   input += synapse0x2431cd0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2431340() {
   double input = input0x2431340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2431d10() {
   double input = 0.144814;
   input += synapse0x242b7b0();
   input += synapse0x242b7f0();
   input += synapse0x242b830();
   input += synapse0x242b870();
   input += synapse0x2432260();
   input += synapse0x24322a0();
   input += synapse0x24322e0();
   input += synapse0x2432320();
   input += synapse0x2432360();
   input += synapse0x24323a0();
   input += synapse0x24323e0();
   input += synapse0x2432420();
   input += synapse0x2432460();
   input += synapse0x24324a0();
   input += synapse0x24324e0();
   input += synapse0x2432520();
   input += synapse0x2431ea0();
   input += synapse0x2431ee0();
   input += synapse0x2432670();
   input += synapse0x24326b0();
   input += synapse0x24326f0();
   input += synapse0x2432730();
   input += synapse0x2432770();
   input += synapse0x24327b0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2431d10() {
   double input = input0x2431d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x24327f0() {
   double input = -3.49827;
   input += synapse0x2432b30();
   input += synapse0x2432b70();
   input += synapse0x2432bb0();
   input += synapse0x2432bf0();
   input += synapse0x2432c30();
   input += synapse0x2432c70();
   input += synapse0x2432cb0();
   input += synapse0x2432cf0();
   input += synapse0x2432d30();
   input += synapse0x2432d70();
   input += synapse0x2432db0();
   input += synapse0x2432df0();
   input += synapse0x2432e30();
   input += synapse0x2432e70();
   input += synapse0x2432eb0();
   input += synapse0x2432ef0();
   input += synapse0x2432980();
   input += synapse0x24329c0();
   input += synapse0x2433040();
   input += synapse0x2433080();
   input += synapse0x24330c0();
   input += synapse0x2433100();
   input += synapse0x2433140();
   input += synapse0x2433180();
   return input;
}

double NNfunction_ss_cLcR::neuron0x24327f0() {
   double input = input0x24327f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x24331c0() {
   double input = -0.121632;
   input += synapse0x2433500();
   input += synapse0x2433540();
   input += synapse0x2433580();
   input += synapse0x24335c0();
   input += synapse0x2433600();
   input += synapse0x2433640();
   input += synapse0x2433680();
   input += synapse0x24336c0();
   input += synapse0x2433700();
   input += synapse0x2433740();
   input += synapse0x2433780();
   input += synapse0x24337c0();
   input += synapse0x2433800();
   input += synapse0x2433840();
   input += synapse0x2433880();
   input += synapse0x24338c0();
   input += synapse0x2433350();
   input += synapse0x2433390();
   input += synapse0x2430120();
   input += synapse0x2430160();
   input += synapse0x24301a0();
   input += synapse0x24301e0();
   input += synapse0x2430220();
   input += synapse0x2430260();
   return input;
}

double NNfunction_ss_cLcR::neuron0x24331c0() {
   double input = input0x24331c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x24302a0() {
   double input = 1.81966;
   input += synapse0x24305e0();
   input += synapse0x2430620();
   input += synapse0x2430660();
   input += synapse0x24306a0();
   input += synapse0x24306e0();
   input += synapse0x2430720();
   input += synapse0x2430760();
   input += synapse0x24307a0();
   input += synapse0x24307e0();
   input += synapse0x2430820();
   input += synapse0x2430860();
   input += synapse0x24308a0();
   input += synapse0x24308e0();
   input += synapse0x2434a20();
   input += synapse0x2434a60();
   input += synapse0x2434aa0();
   input += synapse0x2430430();
   input += synapse0x2430470();
   input += synapse0x2434bf0();
   input += synapse0x2434c30();
   input += synapse0x2434c70();
   input += synapse0x2434cb0();
   input += synapse0x2434cf0();
   input += synapse0x2434d30();
   return input;
}

double NNfunction_ss_cLcR::neuron0x24302a0() {
   double input = input0x24302a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2434d70() {
   double input = 1.0089;
   input += synapse0x24350b0();
   input += synapse0x24350f0();
   input += synapse0x2435130();
   input += synapse0x2435170();
   input += synapse0x24351b0();
   input += synapse0x24351f0();
   input += synapse0x2435230();
   input += synapse0x2435270();
   input += synapse0x24352b0();
   input += synapse0x24352f0();
   input += synapse0x2435330();
   input += synapse0x2435370();
   input += synapse0x24353b0();
   input += synapse0x24353f0();
   input += synapse0x2435430();
   input += synapse0x2435470();
   input += synapse0x2434f00();
   input += synapse0x2434f40();
   input += synapse0x24355c0();
   input += synapse0x2435600();
   input += synapse0x2435640();
   input += synapse0x2435680();
   input += synapse0x24356c0();
   input += synapse0x2435700();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2434d70() {
   double input = input0x2434d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2435740() {
   double input = -0.664518;
   input += synapse0x2435a80();
   input += synapse0x2435ac0();
   input += synapse0x2435b00();
   input += synapse0x2435b40();
   input += synapse0x2435b80();
   input += synapse0x2435bc0();
   input += synapse0x2435c00();
   input += synapse0x2435c40();
   input += synapse0x2435c80();
   input += synapse0x2435cc0();
   input += synapse0x2435d00();
   input += synapse0x2435d40();
   input += synapse0x2435d80();
   input += synapse0x2435dc0();
   input += synapse0x2435e00();
   input += synapse0x2435e40();
   input += synapse0x24358d0();
   input += synapse0x2435910();
   input += synapse0x2435f90();
   input += synapse0x2435fd0();
   input += synapse0x2436010();
   input += synapse0x2436050();
   input += synapse0x2436090();
   input += synapse0x24360d0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2435740() {
   double input = input0x2435740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2436110() {
   double input = -0.216316;
   input += synapse0x2436450();
   input += synapse0x2436490();
   input += synapse0x24364d0();
   input += synapse0x2436510();
   input += synapse0x2436550();
   input += synapse0x2436590();
   input += synapse0x24365d0();
   input += synapse0x2436610();
   input += synapse0x2436650();
   input += synapse0x2436690();
   input += synapse0x24366d0();
   input += synapse0x2436710();
   input += synapse0x2436750();
   input += synapse0x2436790();
   input += synapse0x24367d0();
   input += synapse0x2436810();
   input += synapse0x24362a0();
   input += synapse0x24362e0();
   input += synapse0x2436960();
   input += synapse0x24369a0();
   input += synapse0x24369e0();
   input += synapse0x2436a20();
   input += synapse0x2436a60();
   input += synapse0x2436aa0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2436110() {
   double input = input0x2436110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2436ae0() {
   double input = 0.879805;
   input += synapse0x2436e20();
   input += synapse0x2428180();
   input += synapse0x24281c0();
   input += synapse0x24284c0();
   input += synapse0x2428500();
   input += synapse0x2428800();
   input += synapse0x2428840();
   input += synapse0x2428b40();
   input += synapse0x2428b80();
   input += synapse0x2428e80();
   input += synapse0x2428ec0();
   input += synapse0x24291c0();
   input += synapse0x2429200();
   input += synapse0x2429500();
   input += synapse0x2429540();
   input += synapse0x2429840();
   input += synapse0x2429880();
   input += synapse0x2429b80();
   input += synapse0x2429bc0();
   input += synapse0x2429ec0();
   input += synapse0x2429f00();
   input += synapse0x242a200();
   input += synapse0x242a240();
   input += synapse0x242a540();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2436ae0() {
   double input = input0x2436ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x24388f0() {
   double input = 0.265687;
   input += synapse0x242a580();
   input += synapse0x242b240();
   input += synapse0x242b280();
   input += synapse0x2436c70();
   input += synapse0x2436cb0();
   input += synapse0x242b580();
   input += synapse0x242b5c0();
   input += synapse0x21e2ff0();
   input += synapse0x21e3030();
   input += synapse0x242bd00();
   input += synapse0x242bd40();
   input += synapse0x242c040();
   input += synapse0x242c080();
   input += synapse0x242c380();
   input += synapse0x242c3c0();
   input += synapse0x242c6c0();
   input += synapse0x242c700();
   input += synapse0x242ca00();
   input += synapse0x242ca40();
   input += synapse0x242cd40();
   input += synapse0x242cd80();
   input += synapse0x242a880();
   input += synapse0x242a8c0();
   input += synapse0x2438b90();
   return input;
}

double NNfunction_ss_cLcR::neuron0x24388f0() {
   double input = input0x24388f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2438bd0() {
   double input = -0.566632;
   input += synapse0x2438f10();
   input += synapse0x2438f50();
   input += synapse0x2438f90();
   input += synapse0x2438fd0();
   input += synapse0x2439010();
   input += synapse0x2439050();
   input += synapse0x2439090();
   input += synapse0x24390d0();
   input += synapse0x2439110();
   input += synapse0x2439150();
   input += synapse0x2439190();
   input += synapse0x24391d0();
   input += synapse0x2439210();
   input += synapse0x2439250();
   input += synapse0x2439290();
   input += synapse0x24392d0();
   input += synapse0x2438d60();
   input += synapse0x2438da0();
   input += synapse0x2439420();
   input += synapse0x2439460();
   input += synapse0x24394a0();
   input += synapse0x24394e0();
   input += synapse0x2439520();
   input += synapse0x2439560();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2438bd0() {
   double input = input0x2438bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x24395a0() {
   double input = -0.288097;
   input += synapse0x24398e0();
   input += synapse0x2439920();
   input += synapse0x2439960();
   input += synapse0x24399a0();
   input += synapse0x24399e0();
   input += synapse0x2439a20();
   input += synapse0x2439a60();
   input += synapse0x2439aa0();
   input += synapse0x2439ae0();
   input += synapse0x2439b20();
   input += synapse0x2439b60();
   input += synapse0x2439ba0();
   input += synapse0x2439be0();
   input += synapse0x2439c20();
   input += synapse0x2439c60();
   input += synapse0x2439ca0();
   input += synapse0x2439730();
   input += synapse0x2439770();
   input += synapse0x2439df0();
   input += synapse0x2439e30();
   input += synapse0x2439e70();
   input += synapse0x2439eb0();
   input += synapse0x2439ef0();
   input += synapse0x2439f30();
   return input;
}

double NNfunction_ss_cLcR::neuron0x24395a0() {
   double input = input0x24395a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2439f70() {
   double input = 1.33722;
   input += synapse0x243a2b0();
   input += synapse0x243a2f0();
   input += synapse0x243a330();
   input += synapse0x243a370();
   input += synapse0x243a3b0();
   input += synapse0x243a3f0();
   input += synapse0x243a430();
   input += synapse0x243a470();
   input += synapse0x243a4b0();
   input += synapse0x243a4f0();
   input += synapse0x243a530();
   input += synapse0x243a570();
   input += synapse0x243a5b0();
   input += synapse0x243a5f0();
   input += synapse0x243a630();
   input += synapse0x243a670();
   input += synapse0x243a100();
   input += synapse0x243a140();
   input += synapse0x243a7c0();
   input += synapse0x243a800();
   input += synapse0x243a840();
   input += synapse0x243a880();
   input += synapse0x243a8c0();
   input += synapse0x243a900();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2439f70() {
   double input = input0x2439f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x243a940() {
   double input = -0.425432;
   input += synapse0x243ac80();
   input += synapse0x243acc0();
   input += synapse0x243ad00();
   input += synapse0x243ad40();
   input += synapse0x243ad80();
   input += synapse0x243adc0();
   input += synapse0x243ae00();
   input += synapse0x243ae40();
   input += synapse0x243ae80();
   input += synapse0x243aec0();
   input += synapse0x243af00();
   input += synapse0x243af40();
   input += synapse0x243af80();
   input += synapse0x243afc0();
   input += synapse0x243b000();
   input += synapse0x243b040();
   input += synapse0x243aad0();
   input += synapse0x243ab10();
   input += synapse0x243b190();
   input += synapse0x243b1d0();
   input += synapse0x243b210();
   input += synapse0x243b250();
   input += synapse0x243b290();
   input += synapse0x243b2d0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x243a940() {
   double input = input0x243a940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x243b310() {
   double input = 0.0388931;
   input += synapse0x243b650();
   input += synapse0x243b690();
   input += synapse0x243b6d0();
   input += synapse0x243b710();
   input += synapse0x243b750();
   input += synapse0x243b790();
   input += synapse0x243b7d0();
   input += synapse0x243b810();
   input += synapse0x243b850();
   input += synapse0x2433a10();
   input += synapse0x2433a50();
   input += synapse0x2433a90();
   input += synapse0x2433ad0();
   input += synapse0x2433b10();
   input += synapse0x2433b50();
   input += synapse0x2433b90();
   input += synapse0x243b4a0();
   input += synapse0x243b4e0();
   input += synapse0x2433ce0();
   input += synapse0x2433d20();
   input += synapse0x2433d60();
   input += synapse0x2433da0();
   input += synapse0x2433de0();
   input += synapse0x2433e20();
   return input;
}

double NNfunction_ss_cLcR::neuron0x243b310() {
   double input = input0x243b310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2433e60() {
   double input = 1.56646;
   input += synapse0x24341a0();
   input += synapse0x24341e0();
   input += synapse0x2434220();
   input += synapse0x2434260();
   input += synapse0x24342a0();
   input += synapse0x24342e0();
   input += synapse0x2434320();
   input += synapse0x2434360();
   input += synapse0x24343a0();
   input += synapse0x24343e0();
   input += synapse0x2434420();
   input += synapse0x2434460();
   input += synapse0x24344a0();
   input += synapse0x24344e0();
   input += synapse0x2434520();
   input += synapse0x2434560();
   input += synapse0x2433ff0();
   input += synapse0x2434030();
   input += synapse0x24346b0();
   input += synapse0x24346f0();
   input += synapse0x2434730();
   input += synapse0x2434770();
   input += synapse0x24347b0();
   input += synapse0x24347f0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2433e60() {
   double input = input0x2433e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2434830() {
   double input = -0.622819;
   input += synapse0x24349c0();
   input += synapse0x243da50();
   input += synapse0x243da90();
   input += synapse0x243dad0();
   input += synapse0x243db10();
   input += synapse0x243db50();
   input += synapse0x243db90();
   input += synapse0x243dbd0();
   input += synapse0x243dc10();
   input += synapse0x243dc50();
   input += synapse0x243dc90();
   input += synapse0x243dcd0();
   input += synapse0x243dd10();
   input += synapse0x243dd50();
   input += synapse0x243dd90();
   input += synapse0x243ddd0();
   input += synapse0x243d8a0();
   input += synapse0x243d8e0();
   input += synapse0x243df20();
   input += synapse0x243df60();
   input += synapse0x243dfa0();
   input += synapse0x243dfe0();
   input += synapse0x243e020();
   input += synapse0x243e060();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2434830() {
   double input = input0x2434830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x243e0a0() {
   double input = 0.30673;
   input += synapse0x243e3e0();
   input += synapse0x243e420();
   input += synapse0x243e460();
   input += synapse0x243e4a0();
   input += synapse0x243e4e0();
   input += synapse0x243e520();
   input += synapse0x243e560();
   input += synapse0x243e5a0();
   input += synapse0x243e5e0();
   input += synapse0x243e620();
   input += synapse0x243e660();
   input += synapse0x243e6a0();
   input += synapse0x243e6e0();
   input += synapse0x243e720();
   input += synapse0x243e760();
   input += synapse0x243e7a0();
   input += synapse0x243e230();
   input += synapse0x243e270();
   input += synapse0x243e8f0();
   input += synapse0x243e930();
   input += synapse0x243e970();
   input += synapse0x243e9b0();
   input += synapse0x243e9f0();
   input += synapse0x243ea30();
   return input;
}

double NNfunction_ss_cLcR::neuron0x243e0a0() {
   double input = input0x243e0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x243ea70() {
   double input = 0.0923225;
   input += synapse0x243edb0();
   input += synapse0x243edf0();
   input += synapse0x243ee30();
   input += synapse0x243ee70();
   input += synapse0x243eeb0();
   input += synapse0x243eef0();
   input += synapse0x243ef30();
   input += synapse0x243ef70();
   input += synapse0x243efb0();
   input += synapse0x243eff0();
   input += synapse0x243f030();
   input += synapse0x243f070();
   input += synapse0x243f0b0();
   input += synapse0x243f0f0();
   input += synapse0x243f130();
   input += synapse0x243f170();
   input += synapse0x243ec00();
   input += synapse0x243ec40();
   input += synapse0x243f2c0();
   input += synapse0x243f300();
   input += synapse0x243f340();
   input += synapse0x243f380();
   input += synapse0x243f3c0();
   input += synapse0x243f400();
   return input;
}

double NNfunction_ss_cLcR::neuron0x243ea70() {
   double input = input0x243ea70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x243f440() {
   double input = 2.2113;
   input += synapse0x243f780();
   input += synapse0x243f7c0();
   input += synapse0x243f800();
   input += synapse0x243f840();
   input += synapse0x243f880();
   input += synapse0x243f8c0();
   input += synapse0x243f900();
   input += synapse0x243f940();
   input += synapse0x243f980();
   input += synapse0x243f9c0();
   input += synapse0x243fa00();
   input += synapse0x243fa40();
   input += synapse0x243fa80();
   input += synapse0x243fac0();
   input += synapse0x243fb00();
   input += synapse0x243fb40();
   input += synapse0x243f5d0();
   input += synapse0x243f610();
   input += synapse0x243fc90();
   input += synapse0x243fcd0();
   input += synapse0x243fd10();
   input += synapse0x243fd50();
   input += synapse0x243fd90();
   input += synapse0x243fdd0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x243f440() {
   double input = input0x243f440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x243fe10() {
   double input = 1.18695;
   input += synapse0x2440150();
   input += synapse0x2440190();
   input += synapse0x24401d0();
   input += synapse0x2440210();
   input += synapse0x2440250();
   input += synapse0x2440290();
   input += synapse0x24402d0();
   input += synapse0x2440310();
   input += synapse0x2440350();
   input += synapse0x2440390();
   input += synapse0x24403d0();
   input += synapse0x2440410();
   input += synapse0x2440450();
   input += synapse0x2440490();
   input += synapse0x24404d0();
   input += synapse0x2440510();
   input += synapse0x243ffa0();
   input += synapse0x243ffe0();
   input += synapse0x2440660();
   input += synapse0x24406a0();
   input += synapse0x24406e0();
   input += synapse0x2440720();
   input += synapse0x2440760();
   input += synapse0x24407a0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x243fe10() {
   double input = input0x243fe10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x24407e0() {
   double input = -0.0761544;
   input += synapse0x2440b20();
   input += synapse0x2440b60();
   input += synapse0x2440ba0();
   input += synapse0x2440be0();
   input += synapse0x2440c20();
   input += synapse0x2440c60();
   input += synapse0x2440ca0();
   input += synapse0x2440ce0();
   input += synapse0x2440d20();
   input += synapse0x2440d60();
   input += synapse0x2440da0();
   input += synapse0x2440de0();
   input += synapse0x2440e20();
   input += synapse0x2440e60();
   input += synapse0x2440ea0();
   input += synapse0x2440ee0();
   input += synapse0x2440970();
   input += synapse0x24409b0();
   input += synapse0x2441030();
   input += synapse0x2441070();
   input += synapse0x24410b0();
   input += synapse0x24410f0();
   input += synapse0x2441130();
   input += synapse0x2441170();
   return input;
}

double NNfunction_ss_cLcR::neuron0x24407e0() {
   double input = input0x24407e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x24411b0() {
   double input = -0.490644;
   input += synapse0x24414f0();
   input += synapse0x2441530();
   input += synapse0x2441570();
   input += synapse0x24415b0();
   input += synapse0x24415f0();
   input += synapse0x2441630();
   input += synapse0x2441670();
   input += synapse0x24416b0();
   input += synapse0x24416f0();
   input += synapse0x2441730();
   input += synapse0x2441770();
   input += synapse0x24417b0();
   input += synapse0x24417f0();
   input += synapse0x2441830();
   input += synapse0x2441870();
   input += synapse0x24418b0();
   input += synapse0x2441340();
   input += synapse0x2441380();
   input += synapse0x2441a00();
   input += synapse0x2441a40();
   input += synapse0x2441a80();
   input += synapse0x2441ac0();
   input += synapse0x2441b00();
   input += synapse0x2441b40();
   return input;
}

double NNfunction_ss_cLcR::neuron0x24411b0() {
   double input = input0x24411b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2441b80() {
   double input = -0.206636;
   input += synapse0x2441ec0();
   input += synapse0x2441f00();
   input += synapse0x2441f40();
   input += synapse0x2441f80();
   input += synapse0x2441fc0();
   input += synapse0x2442000();
   input += synapse0x2442040();
   input += synapse0x2442080();
   input += synapse0x24420c0();
   input += synapse0x2442100();
   input += synapse0x2442140();
   input += synapse0x2442180();
   input += synapse0x24421c0();
   input += synapse0x2442200();
   input += synapse0x2442240();
   input += synapse0x2442280();
   input += synapse0x2441d10();
   input += synapse0x2441d50();
   input += synapse0x24423d0();
   input += synapse0x2442410();
   input += synapse0x2442450();
   input += synapse0x2442490();
   input += synapse0x24424d0();
   input += synapse0x2442510();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2441b80() {
   double input = input0x2441b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2442550() {
   double input = 0.270764;
   input += synapse0x2442890();
   input += synapse0x2436e60();
   input += synapse0x2436ea0();
   input += synapse0x2436ee0();
   input += synapse0x2437130();
   input += synapse0x2437170();
   input += synapse0x24371b0();
   input += synapse0x2437400();
   input += synapse0x2437440();
   input += synapse0x2437690();
   input += synapse0x24376d0();
   input += synapse0x2437710();
   input += synapse0x2437960();
   input += synapse0x24379a0();
   input += synapse0x2437bf0();
   input += synapse0x2437c30();
   input += synapse0x24426e0();
   input += synapse0x2442720();
   input += synapse0x2437d80();
   input += synapse0x2438290();
   input += synapse0x24382d0();
   input += synapse0x2438310();
   input += synapse0x2438560();
   input += synapse0x24385a0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2442550() {
   double input = input0x2442550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x24385e0() {
   double input = -1.44171;
   input += synapse0x2437e50();
   input += synapse0x2437e90();
   input += synapse0x2437ed0();
   input += synapse0x2437f10();
   input += synapse0x2438890();
   input += synapse0x2444be0();
   input += synapse0x2444c20();
   input += synapse0x2444c60();
   input += synapse0x2444ca0();
   input += synapse0x2444ce0();
   input += synapse0x2444d20();
   input += synapse0x2444d60();
   input += synapse0x2444da0();
   input += synapse0x2444de0();
   input += synapse0x2444e20();
   input += synapse0x2444e60();
   input += synapse0x2438770();
   input += synapse0x24387b0();
   input += synapse0x2444fb0();
   input += synapse0x2444ff0();
   input += synapse0x2445030();
   input += synapse0x2445070();
   input += synapse0x24450b0();
   input += synapse0x24450f0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x24385e0() {
   double input = input0x24385e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2445130() {
   double input = 0.390031;
   input += synapse0x2445470();
   input += synapse0x24454b0();
   input += synapse0x24454f0();
   input += synapse0x2445530();
   input += synapse0x2445570();
   input += synapse0x24455b0();
   input += synapse0x24455f0();
   input += synapse0x2445630();
   input += synapse0x2445670();
   input += synapse0x24456b0();
   input += synapse0x24456f0();
   input += synapse0x2445730();
   input += synapse0x2445770();
   input += synapse0x24457b0();
   input += synapse0x24457f0();
   input += synapse0x2445830();
   input += synapse0x24452c0();
   input += synapse0x2445300();
   input += synapse0x2445980();
   input += synapse0x24459c0();
   input += synapse0x2445a00();
   input += synapse0x2445a40();
   input += synapse0x2445a80();
   input += synapse0x2445ac0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2445130() {
   double input = input0x2445130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2445b00() {
   double input = 0.0670633;
   input += synapse0x2445e40();
   input += synapse0x2445e80();
   input += synapse0x2445ec0();
   input += synapse0x2445f00();
   input += synapse0x2445f40();
   input += synapse0x2445f80();
   input += synapse0x2445fc0();
   input += synapse0x2446000();
   input += synapse0x2446040();
   input += synapse0x2446080();
   input += synapse0x24460c0();
   input += synapse0x2446100();
   input += synapse0x2446140();
   input += synapse0x2446180();
   input += synapse0x24461c0();
   input += synapse0x2446200();
   input += synapse0x2445c90();
   input += synapse0x2445cd0();
   input += synapse0x2446350();
   input += synapse0x2446390();
   input += synapse0x24463d0();
   input += synapse0x2446410();
   input += synapse0x2446450();
   input += synapse0x2446490();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2445b00() {
   double input = input0x2445b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x24464d0() {
   double input = -1.26988;
   input += synapse0x2446810();
   input += synapse0x2446850();
   input += synapse0x2446890();
   input += synapse0x24468d0();
   input += synapse0x2446910();
   input += synapse0x2446950();
   input += synapse0x2446990();
   input += synapse0x24469d0();
   input += synapse0x2446a10();
   input += synapse0x2446a50();
   input += synapse0x2446a90();
   input += synapse0x2446ad0();
   input += synapse0x2446b10();
   input += synapse0x2446b50();
   input += synapse0x2446b90();
   input += synapse0x2446bd0();
   input += synapse0x2446660();
   input += synapse0x24466a0();
   input += synapse0x2446d20();
   input += synapse0x2446d60();
   input += synapse0x2446da0();
   input += synapse0x2446de0();
   input += synapse0x2446e20();
   input += synapse0x2446e60();
   return input;
}

double NNfunction_ss_cLcR::neuron0x24464d0() {
   double input = input0x24464d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2446ea0() {
   double input = 0.924647;
   input += synapse0x24471e0();
   input += synapse0x2447220();
   input += synapse0x2447260();
   input += synapse0x24472a0();
   input += synapse0x24472e0();
   input += synapse0x2447320();
   input += synapse0x2447360();
   input += synapse0x24473a0();
   input += synapse0x24473e0();
   input += synapse0x2447420();
   input += synapse0x2447460();
   input += synapse0x24474a0();
   input += synapse0x24474e0();
   input += synapse0x2447520();
   input += synapse0x2447560();
   input += synapse0x24475a0();
   input += synapse0x2447030();
   input += synapse0x2447070();
   input += synapse0x24476f0();
   input += synapse0x2447730();
   input += synapse0x2447770();
   input += synapse0x24477b0();
   input += synapse0x24477f0();
   input += synapse0x2447830();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2446ea0() {
   double input = input0x2446ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2447870() {
   double input = -1.13739;
   input += synapse0x2447bb0();
   input += synapse0x2447bf0();
   input += synapse0x2447c30();
   input += synapse0x2447c70();
   input += synapse0x2447cb0();
   input += synapse0x2447cf0();
   input += synapse0x2447d30();
   input += synapse0x2447d70();
   input += synapse0x2447db0();
   input += synapse0x2447df0();
   input += synapse0x2447e30();
   input += synapse0x2447e70();
   input += synapse0x2447eb0();
   input += synapse0x2447ef0();
   input += synapse0x2447f30();
   input += synapse0x2447f70();
   input += synapse0x2447a00();
   input += synapse0x2447a40();
   input += synapse0x24480c0();
   input += synapse0x2448100();
   input += synapse0x2448140();
   input += synapse0x2448180();
   input += synapse0x24481c0();
   input += synapse0x2448200();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2447870() {
   double input = input0x2447870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2448240() {
   double input = -1.13047;
   input += synapse0x2448580();
   input += synapse0x24485c0();
   input += synapse0x2448600();
   input += synapse0x2448640();
   input += synapse0x2448680();
   input += synapse0x24486c0();
   input += synapse0x2448700();
   input += synapse0x2448740();
   input += synapse0x2448780();
   input += synapse0x24487c0();
   input += synapse0x2448800();
   input += synapse0x2448840();
   input += synapse0x2448880();
   input += synapse0x24488c0();
   input += synapse0x2448900();
   input += synapse0x2448940();
   input += synapse0x24483d0();
   input += synapse0x2448410();
   input += synapse0x2448a90();
   input += synapse0x2448ad0();
   input += synapse0x2448b10();
   input += synapse0x2448b50();
   input += synapse0x2448b90();
   input += synapse0x2448bd0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2448240() {
   double input = input0x2448240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2448c10() {
   double input = -0.751531;
   input += synapse0x2448f50();
   input += synapse0x2448f90();
   input += synapse0x2448fd0();
   input += synapse0x2449010();
   input += synapse0x2449050();
   input += synapse0x2449090();
   input += synapse0x24490d0();
   input += synapse0x2449110();
   input += synapse0x2449150();
   input += synapse0x2449190();
   input += synapse0x24491d0();
   input += synapse0x2449210();
   input += synapse0x2449250();
   input += synapse0x2449290();
   input += synapse0x24492d0();
   input += synapse0x2449310();
   input += synapse0x2448da0();
   input += synapse0x2448de0();
   input += synapse0x2449460();
   input += synapse0x24494a0();
   input += synapse0x24494e0();
   input += synapse0x2449520();
   input += synapse0x2449560();
   input += synapse0x24495a0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2448c10() {
   double input = input0x2448c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x24495e0() {
   double input = -0.0239247;
   input += synapse0x2432050();
   input += synapse0x2432090();
   input += synapse0x24320d0();
   input += synapse0x2432110();
   input += synapse0x2432150();
   input += synapse0x2432190();
   input += synapse0x24321d0();
   input += synapse0x2432210();
   input += synapse0x2449d30();
   input += synapse0x2449d70();
   input += synapse0x2449db0();
   input += synapse0x2449df0();
   input += synapse0x2449e30();
   input += synapse0x2449e70();
   input += synapse0x2449eb0();
   input += synapse0x2449ef0();
   input += synapse0x2449770();
   input += synapse0x24497b0();
   input += synapse0x244a040();
   input += synapse0x244a080();
   input += synapse0x244a0c0();
   input += synapse0x244a100();
   input += synapse0x244a140();
   input += synapse0x244a180();
   return input;
}

double NNfunction_ss_cLcR::neuron0x24495e0() {
   double input = input0x24495e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x244a1c0() {
   double input = -0.44008;
   input += synapse0x244a500();
   input += synapse0x244a540();
   input += synapse0x244a580();
   input += synapse0x244a5c0();
   input += synapse0x244a600();
   input += synapse0x244a640();
   input += synapse0x244a680();
   input += synapse0x244a6c0();
   input += synapse0x244a700();
   input += synapse0x244a740();
   input += synapse0x244a780();
   input += synapse0x244a7c0();
   input += synapse0x244a800();
   input += synapse0x244a840();
   input += synapse0x244a880();
   input += synapse0x244a8c0();
   input += synapse0x244a350();
   input += synapse0x244a390();
   input += synapse0x244aa10();
   input += synapse0x244aa50();
   input += synapse0x244aa90();
   input += synapse0x244aad0();
   input += synapse0x244ab10();
   input += synapse0x244ab50();
   return input;
}

double NNfunction_ss_cLcR::neuron0x244a1c0() {
   double input = input0x244a1c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x244ab90() {
   double input = 1.37735;
   input += synapse0x244aed0();
   input += synapse0x244af10();
   input += synapse0x244af50();
   input += synapse0x244af90();
   input += synapse0x244afd0();
   input += synapse0x244b010();
   input += synapse0x244b050();
   input += synapse0x244b090();
   input += synapse0x244b0d0();
   input += synapse0x244b110();
   input += synapse0x244b150();
   input += synapse0x244b190();
   input += synapse0x244b1d0();
   input += synapse0x244b210();
   input += synapse0x244b250();
   input += synapse0x244b290();
   input += synapse0x244ad20();
   input += synapse0x244ad60();
   input += synapse0x243b890();
   input += synapse0x243b8d0();
   input += synapse0x243b910();
   input += synapse0x243b950();
   input += synapse0x243b990();
   input += synapse0x243b9d0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x244ab90() {
   double input = input0x244ab90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x243ba10() {
   double input = 1.09767;
   input += synapse0x243bd50();
   input += synapse0x243bd90();
   input += synapse0x243bdd0();
   input += synapse0x243be10();
   input += synapse0x243be50();
   input += synapse0x243be90();
   input += synapse0x243bed0();
   input += synapse0x243bf10();
   input += synapse0x243bf50();
   input += synapse0x243bf90();
   input += synapse0x243bfd0();
   input += synapse0x243c010();
   input += synapse0x243c050();
   input += synapse0x243c090();
   input += synapse0x243c0d0();
   input += synapse0x243c110();
   input += synapse0x243bba0();
   input += synapse0x243bbe0();
   input += synapse0x243c260();
   input += synapse0x243c2a0();
   input += synapse0x243c2e0();
   input += synapse0x243c320();
   input += synapse0x243c360();
   input += synapse0x243c3a0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x243ba10() {
   double input = input0x243ba10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x243c3e0() {
   double input = 1.75767;
   input += synapse0x243c720();
   input += synapse0x243c760();
   input += synapse0x243c7a0();
   input += synapse0x243c7e0();
   input += synapse0x243c820();
   input += synapse0x243c860();
   input += synapse0x243c8a0();
   input += synapse0x243c8e0();
   input += synapse0x243c920();
   input += synapse0x243c960();
   input += synapse0x243c9a0();
   input += synapse0x243c9e0();
   input += synapse0x243ca20();
   input += synapse0x243ca60();
   input += synapse0x243caa0();
   input += synapse0x243cae0();
   input += synapse0x243c570();
   input += synapse0x243c5b0();
   input += synapse0x243cc30();
   input += synapse0x243cc70();
   input += synapse0x243ccb0();
   input += synapse0x243ccf0();
   input += synapse0x243cd30();
   input += synapse0x243cd70();
   return input;
}

double NNfunction_ss_cLcR::neuron0x243c3e0() {
   double input = input0x243c3e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x243cdb0() {
   double input = -0.119018;
   input += synapse0x243d0f0();
   input += synapse0x243d130();
   input += synapse0x243d170();
   input += synapse0x243d1b0();
   input += synapse0x243d1f0();
   input += synapse0x243d230();
   input += synapse0x243d270();
   input += synapse0x243d2b0();
   input += synapse0x243d2f0();
   input += synapse0x243d330();
   input += synapse0x243d370();
   input += synapse0x243d3b0();
   input += synapse0x243d3f0();
   input += synapse0x243d430();
   input += synapse0x243d470();
   input += synapse0x243d4b0();
   input += synapse0x243cf40();
   input += synapse0x243cf80();
   input += synapse0x243d600();
   input += synapse0x243d640();
   input += synapse0x243d680();
   input += synapse0x243d6c0();
   input += synapse0x243d700();
   input += synapse0x243d740();
   return input;
}

double NNfunction_ss_cLcR::neuron0x243cdb0() {
   double input = input0x243cdb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x244f3f0() {
   double input = -1.72854;
   input += synapse0x244f610();
   input += synapse0x244f650();
   input += synapse0x244f690();
   input += synapse0x244f6d0();
   input += synapse0x244f710();
   input += synapse0x244f750();
   input += synapse0x244f790();
   input += synapse0x244f7d0();
   input += synapse0x244f810();
   input += synapse0x244f850();
   input += synapse0x244f890();
   input += synapse0x244f8d0();
   input += synapse0x244f910();
   input += synapse0x244f950();
   input += synapse0x244f990();
   input += synapse0x244f9d0();
   input += synapse0x243d780();
   input += synapse0x243d7c0();
   input += synapse0x244fb20();
   input += synapse0x244fb60();
   input += synapse0x244fba0();
   input += synapse0x244fbe0();
   input += synapse0x244fc20();
   input += synapse0x244fc60();
   return input;
}

double NNfunction_ss_cLcR::neuron0x244f3f0() {
   double input = input0x244f3f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x244fca0() {
   double input = -1.74826;
   input += synapse0x244ffe0();
   input += synapse0x2450020();
   input += synapse0x2450060();
   input += synapse0x24500a0();
   input += synapse0x24500e0();
   input += synapse0x2450120();
   input += synapse0x2450160();
   input += synapse0x24501a0();
   input += synapse0x24501e0();
   input += synapse0x2450220();
   input += synapse0x2450260();
   input += synapse0x24502a0();
   input += synapse0x24502e0();
   input += synapse0x2450320();
   input += synapse0x2450360();
   input += synapse0x24503a0();
   input += synapse0x244fe30();
   input += synapse0x244fe70();
   input += synapse0x24504f0();
   input += synapse0x2450530();
   input += synapse0x2450570();
   input += synapse0x24505b0();
   input += synapse0x24505f0();
   input += synapse0x2450630();
   return input;
}

double NNfunction_ss_cLcR::neuron0x244fca0() {
   double input = input0x244fca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2450670() {
   double input = -0.0636226;
   input += synapse0x24509b0();
   input += synapse0x24509f0();
   input += synapse0x2450a30();
   input += synapse0x2450a70();
   input += synapse0x2450ab0();
   input += synapse0x2450af0();
   input += synapse0x2450b30();
   input += synapse0x2450b70();
   input += synapse0x2450bb0();
   input += synapse0x2450bf0();
   input += synapse0x2450c30();
   input += synapse0x2450c70();
   input += synapse0x2450cb0();
   input += synapse0x2450cf0();
   input += synapse0x2450d30();
   input += synapse0x2450d70();
   input += synapse0x2450800();
   input += synapse0x2450840();
   input += synapse0x2450ec0();
   input += synapse0x2450f00();
   input += synapse0x2450f40();
   input += synapse0x2450f80();
   input += synapse0x2450fc0();
   input += synapse0x2451000();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2450670() {
   double input = input0x2450670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2451040() {
   double input = -0.119037;
   input += synapse0x2451380();
   input += synapse0x24513c0();
   input += synapse0x2451400();
   input += synapse0x2451440();
   input += synapse0x2451480();
   input += synapse0x24514c0();
   input += synapse0x2451500();
   input += synapse0x2451540();
   input += synapse0x2451580();
   input += synapse0x24515c0();
   input += synapse0x2451600();
   input += synapse0x2451640();
   input += synapse0x2451680();
   input += synapse0x24516c0();
   input += synapse0x2451700();
   input += synapse0x2451740();
   input += synapse0x24511d0();
   input += synapse0x2451210();
   input += synapse0x2451890();
   input += synapse0x24518d0();
   input += synapse0x2451910();
   input += synapse0x2451950();
   input += synapse0x2451990();
   input += synapse0x24519d0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2451040() {
   double input = input0x2451040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2458240() {
   double input = -0.604481;
   input += synapse0x242df70();
   input += synapse0x242dfb0();
   input += synapse0x242f480();
   input += synapse0x242f4c0();
   input += synapse0x242fe50();
   input += synapse0x242fe90();
   input += synapse0x2430c20();
   input += synapse0x2430c60();
   input += synapse0x24315f0();
   input += synapse0x2431630();
   input += synapse0x2431fc0();
   input += synapse0x2432000();
   input += synapse0x2432aa0();
   input += synapse0x2432ae0();
   input += synapse0x2433470();
   input += synapse0x24334b0();
   input += synapse0x2430550();
   input += synapse0x2430590();
   input += synapse0x2435020();
   input += synapse0x2435060();
   input += synapse0x24359f0();
   input += synapse0x2435a30();
   input += synapse0x24363c0();
   input += synapse0x2436400();
   input += synapse0x2436d90();
   input += synapse0x2436dd0();
   input += synapse0x242af00();
   input += synapse0x242af40();
   input += synapse0x2438e80();
   input += synapse0x2438ec0();
   input += synapse0x2439850();
   input += synapse0x2439890();
   input += synapse0x243a220();
   input += synapse0x243a260();
   input += synapse0x243abf0();
   input += synapse0x243ac30();
   input += synapse0x243b5c0();
   input += synapse0x243b600();
   input += synapse0x2434110();
   input += synapse0x2434150();
   input += synapse0x243d9c0();
   input += synapse0x243da00();
   input += synapse0x243e350();
   input += synapse0x243e390();
   input += synapse0x243ed20();
   input += synapse0x243ed60();
   input += synapse0x243f6f0();
   input += synapse0x243f730();
   input += synapse0x24400c0();
   input += synapse0x2440100();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2458240() {
   double input = input0x2458240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x24585e0() {
   double input = -0.862891;
   input += synapse0x2442800();
   input += synapse0x2442840();
   input += synapse0x2437dc0();
   input += synapse0x2437e00();
   input += synapse0x24453e0();
   input += synapse0x2445420();
   input += synapse0x2445db0();
   input += synapse0x2445df0();
   input += synapse0x2446780();
   input += synapse0x24467c0();
   input += synapse0x2447150();
   input += synapse0x2447190();
   input += synapse0x2447b20();
   input += synapse0x2447b60();
   input += synapse0x24484f0();
   input += synapse0x2448530();
   input += synapse0x2448ec0();
   input += synapse0x2448f00();
   input += synapse0x2449890();
   input += synapse0x24498d0();
   input += synapse0x244a470();
   input += synapse0x244a4b0();
   input += synapse0x244ae40();
   input += synapse0x244ae80();
   input += synapse0x243bcc0();
   input += synapse0x243bd00();
   input += synapse0x243c690();
   input += synapse0x243c6d0();
   input += synapse0x243d060();
   input += synapse0x243d0a0();
   input += synapse0x244f580();
   input += synapse0x244f5c0();
   input += synapse0x244ff50();
   input += synapse0x244ff90();
   input += synapse0x2450920();
   input += synapse0x2450960();
   input += synapse0x24512f0();
   input += synapse0x2451330();
   input += synapse0x242d1e0();
   input += synapse0x242d220();
   input += synapse0x2440a90();
   input += synapse0x2440ad0();
   input += synapse0x2451a10();
   input += synapse0x2451a50();
   input += synapse0x2451a90();
   input += synapse0x2451ad0();
   input += synapse0x2458980();
   input += synapse0x24589c0();
   input += synapse0x2458a00();
   input += synapse0x2458a40();
   return input;
}

double NNfunction_ss_cLcR::neuron0x24585e0() {
   double input = input0x24585e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2458a80() {
   double input = 0.696741;
   input += synapse0x2458dc0();
   input += synapse0x2458e00();
   input += synapse0x2458e40();
   input += synapse0x2458e80();
   input += synapse0x2458ec0();
   input += synapse0x2458f00();
   input += synapse0x2458f40();
   input += synapse0x2458f80();
   input += synapse0x2458fc0();
   input += synapse0x2459000();
   input += synapse0x2459040();
   input += synapse0x2459080();
   input += synapse0x24590c0();
   input += synapse0x2459100();
   input += synapse0x2459140();
   input += synapse0x2459180();
   input += synapse0x2458c10();
   input += synapse0x2458c50();
   input += synapse0x24592d0();
   input += synapse0x2459310();
   input += synapse0x2459350();
   input += synapse0x2459390();
   input += synapse0x24593d0();
   input += synapse0x2459410();
   input += synapse0x2459450();
   input += synapse0x2459490();
   input += synapse0x24594d0();
   input += synapse0x2459510();
   input += synapse0x2459550();
   input += synapse0x2459590();
   input += synapse0x24595d0();
   input += synapse0x2459610();
   input += synapse0x24591c0();
   input += synapse0x2459200();
   input += synapse0x2459240();
   input += synapse0x2459280();
   input += synapse0x2459860();
   input += synapse0x24598a0();
   input += synapse0x24598e0();
   input += synapse0x2459920();
   input += synapse0x2459960();
   input += synapse0x24599a0();
   input += synapse0x24599e0();
   input += synapse0x2459a20();
   input += synapse0x2459a60();
   input += synapse0x2459aa0();
   input += synapse0x2459ae0();
   input += synapse0x2459b20();
   input += synapse0x2459b60();
   input += synapse0x2459ba0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2458a80() {
   double input = input0x2458a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2459be0() {
   double input = 0.33646;
   input += synapse0x2459f20();
   input += synapse0x2459f60();
   input += synapse0x2459fa0();
   input += synapse0x2459fe0();
   input += synapse0x245a020();
   input += synapse0x245a060();
   input += synapse0x245a0a0();
   input += synapse0x245a0e0();
   input += synapse0x245a120();
   input += synapse0x245a160();
   input += synapse0x245a1a0();
   input += synapse0x245a1e0();
   input += synapse0x245a220();
   input += synapse0x245a260();
   input += synapse0x245a2a0();
   input += synapse0x245a2e0();
   input += synapse0x2459d70();
   input += synapse0x2459db0();
   input += synapse0x245a430();
   input += synapse0x245a470();
   input += synapse0x245a4b0();
   input += synapse0x245a4f0();
   input += synapse0x245a530();
   input += synapse0x245a570();
   input += synapse0x245a5b0();
   input += synapse0x245a5f0();
   input += synapse0x245a630();
   input += synapse0x245a670();
   input += synapse0x245a6b0();
   input += synapse0x245a6f0();
   input += synapse0x245a730();
   input += synapse0x245a770();
   input += synapse0x245a320();
   input += synapse0x245a360();
   input += synapse0x245a3a0();
   input += synapse0x245a3e0();
   input += synapse0x245a9c0();
   input += synapse0x245aa00();
   input += synapse0x245aa40();
   input += synapse0x245aa80();
   input += synapse0x245aac0();
   input += synapse0x245ab00();
   input += synapse0x245ab40();
   input += synapse0x245ab80();
   input += synapse0x245abc0();
   input += synapse0x245ac00();
   input += synapse0x245ac40();
   input += synapse0x245ac80();
   input += synapse0x245acc0();
   input += synapse0x245ad00();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2459be0() {
   double input = input0x2459be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x245ad40() {
   double input = 0.695766;
   input += synapse0x245b080();
   input += synapse0x245b0c0();
   input += synapse0x245b100();
   input += synapse0x245b140();
   input += synapse0x245b180();
   input += synapse0x245b1c0();
   input += synapse0x245b200();
   input += synapse0x245b240();
   input += synapse0x245b280();
   input += synapse0x245b2c0();
   input += synapse0x245b300();
   input += synapse0x245b340();
   input += synapse0x245b380();
   input += synapse0x245b3c0();
   input += synapse0x245b400();
   input += synapse0x245b440();
   input += synapse0x245aed0();
   input += synapse0x245af10();
   input += synapse0x245b590();
   input += synapse0x245b5d0();
   input += synapse0x245b610();
   input += synapse0x245b650();
   input += synapse0x245b690();
   input += synapse0x245b6d0();
   input += synapse0x245b710();
   input += synapse0x245b750();
   input += synapse0x245b790();
   input += synapse0x245b7d0();
   input += synapse0x245b810();
   input += synapse0x245b850();
   input += synapse0x245b890();
   input += synapse0x245b8d0();
   input += synapse0x245b480();
   input += synapse0x245b4c0();
   input += synapse0x245b500();
   input += synapse0x245b540();
   input += synapse0x245bb20();
   input += synapse0x245bb60();
   input += synapse0x245bba0();
   input += synapse0x245bbe0();
   input += synapse0x245bc20();
   input += synapse0x245bc60();
   input += synapse0x245bca0();
   input += synapse0x245bce0();
   input += synapse0x245bd20();
   input += synapse0x245bd60();
   input += synapse0x245bda0();
   input += synapse0x245bde0();
   input += synapse0x245be20();
   input += synapse0x245be60();
   return input;
}

double NNfunction_ss_cLcR::neuron0x245ad40() {
   double input = input0x245ad40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x245bea0() {
   double input = 6.25374;
   input += synapse0x242cf80();
   input += synapse0x245c0c0();
   input += synapse0x245c100();
   input += synapse0x245c140();
   input += synapse0x245c180();
   return input;
}

double NNfunction_ss_cLcR::neuron0x245bea0() {
   double input = input0x245bea0();
   return (input * 1)+0;
}

double NNfunction_ss_cLcR::synapse0x21f1910() {
   return (neuron0x2427f60()*0.0107285);
}

double NNfunction_ss_cLcR::synapse0x2427e20() {
   return (neuron0x24282a0()*0.135171);
}

double NNfunction_ss_cLcR::synapse0x2427e60() {
   return (neuron0x24285e0()*0.00505941);
}

double NNfunction_ss_cLcR::synapse0x242d270() {
   return (neuron0x2428920()*-5.22379);
}

double NNfunction_ss_cLcR::synapse0x242d2b0() {
   return (neuron0x2428c60()*0.0358687);
}

double NNfunction_ss_cLcR::synapse0x242d2f0() {
   return (neuron0x2428fa0()*-0.0314742);
}

double NNfunction_ss_cLcR::synapse0x242d330() {
   return (neuron0x24292e0()*-0.104814);
}

double NNfunction_ss_cLcR::synapse0x242d370() {
   return (neuron0x2429620()*-0.00634476);
}

double NNfunction_ss_cLcR::synapse0x242d3b0() {
   return (neuron0x2429960()*0.0476066);
}

double NNfunction_ss_cLcR::synapse0x242d3f0() {
   return (neuron0x2429ca0()*-0.0248071);
}

double NNfunction_ss_cLcR::synapse0x242d430() {
   return (neuron0x2429fe0()*-0.0887215);
}

double NNfunction_ss_cLcR::synapse0x242d470() {
   return (neuron0x242a320()*-0.0609922);
}

double NNfunction_ss_cLcR::synapse0x242d4b0() {
   return (neuron0x242a660()*0.0759434);
}

double NNfunction_ss_cLcR::synapse0x242d4f0() {
   return (neuron0x242a9a0()*0.00828554);
}

double NNfunction_ss_cLcR::synapse0x242d530() {
   return (neuron0x242ace0()*-0.0634184);
}

double NNfunction_ss_cLcR::synapse0x242d570() {
   return (neuron0x242b020()*0.0754981);
}

double NNfunction_ss_cLcR::synapse0x2427d90() {
   return (neuron0x242b360()*-0.0753562);
}

double NNfunction_ss_cLcR::synapse0x2427dd0() {
   return (neuron0x242b8c0()*0.0942243);
}

double NNfunction_ss_cLcR::synapse0x21e3110() {
   return (neuron0x242bae0()*-0.084165);
}

double NNfunction_ss_cLcR::synapse0x21e3150() {
   return (neuron0x242be20()*-0.0570562);
}

double NNfunction_ss_cLcR::synapse0x242d7d0() {
   return (neuron0x242c160()*-0.0380616);
}

double NNfunction_ss_cLcR::synapse0x242d810() {
   return (neuron0x242c4a0()*-0.00813188);
}

double NNfunction_ss_cLcR::synapse0x242d850() {
   return (neuron0x242c7e0()*0.00109455);
}

double NNfunction_ss_cLcR::synapse0x242d890() {
   return (neuron0x242cb20()*-0.021874);
}

double NNfunction_ss_cLcR::synapse0x242dc10() {
   return (neuron0x2427f60()*-0.390713);
}

double NNfunction_ss_cLcR::synapse0x242dc50() {
   return (neuron0x24282a0()*0.847587);
}

double NNfunction_ss_cLcR::synapse0x242dc90() {
   return (neuron0x24285e0()*-0.461241);
}

double NNfunction_ss_cLcR::synapse0x242dcd0() {
   return (neuron0x2428920()*-0.02141);
}

double NNfunction_ss_cLcR::synapse0x242dd10() {
   return (neuron0x2428c60()*0.440169);
}

double NNfunction_ss_cLcR::synapse0x242dd50() {
   return (neuron0x2428fa0()*-0.631534);
}

double NNfunction_ss_cLcR::synapse0x242dd90() {
   return (neuron0x24292e0()*0.406532);
}

double NNfunction_ss_cLcR::synapse0x242ddd0() {
   return (neuron0x2429620()*0.483996);
}

double NNfunction_ss_cLcR::synapse0x242de10() {
   return (neuron0x2429960()*0.661721);
}

double NNfunction_ss_cLcR::synapse0x242d6c0() {
   return (neuron0x2429ca0()*0.0639734);
}

double NNfunction_ss_cLcR::synapse0x242d700() {
   return (neuron0x2429fe0()*-0.360566);
}

double NNfunction_ss_cLcR::synapse0x242d740() {
   return (neuron0x242a320()*-0.410076);
}

double NNfunction_ss_cLcR::synapse0x242d780() {
   return (neuron0x242a660()*-0.467476);
}

double NNfunction_ss_cLcR::synapse0x242e060() {
   return (neuron0x242a9a0()*-0.688429);
}

double NNfunction_ss_cLcR::synapse0x242e0a0() {
   return (neuron0x242ace0()*0.0240101);
}

double NNfunction_ss_cLcR::synapse0x242e0e0() {
   return (neuron0x242b020()*-0.742713);
}

double NNfunction_ss_cLcR::synapse0x242da60() {
   return (neuron0x242b360()*-0.119403);
}

double NNfunction_ss_cLcR::synapse0x242daa0() {
   return (neuron0x242b8c0()*-0.674488);
}

double NNfunction_ss_cLcR::synapse0x242e230() {
   return (neuron0x242bae0()*1.65653);
}

double NNfunction_ss_cLcR::synapse0x242e270() {
   return (neuron0x242be20()*-0.231641);
}

double NNfunction_ss_cLcR::synapse0x242e2b0() {
   return (neuron0x242c160()*0.728383);
}

double NNfunction_ss_cLcR::synapse0x242e2f0() {
   return (neuron0x242c4a0()*-0.105156);
}

double NNfunction_ss_cLcR::synapse0x242e330() {
   return (neuron0x242c7e0()*-0.246157);
}

double NNfunction_ss_cLcR::synapse0x242e370() {
   return (neuron0x242cb20()*-0.1812);
}

double NNfunction_ss_cLcR::synapse0x242e6f0() {
   return (neuron0x2427f60()*-0.0168447);
}

double NNfunction_ss_cLcR::synapse0x242e730() {
   return (neuron0x24282a0()*-0.0786319);
}

double NNfunction_ss_cLcR::synapse0x242e770() {
   return (neuron0x24285e0()*0.0168819);
}

double NNfunction_ss_cLcR::synapse0x242e7b0() {
   return (neuron0x2428920()*-0.155271);
}

double NNfunction_ss_cLcR::synapse0x242e7f0() {
   return (neuron0x2428c60()*0.0446318);
}

double NNfunction_ss_cLcR::synapse0x242e830() {
   return (neuron0x2428fa0()*0.316531);
}

double NNfunction_ss_cLcR::synapse0x242e870() {
   return (neuron0x24292e0()*0.0451594);
}

double NNfunction_ss_cLcR::synapse0x242e8b0() {
   return (neuron0x2429620()*-0.00705255);
}

double NNfunction_ss_cLcR::synapse0x242e8f0() {
   return (neuron0x2429960()*0.0280581);
}

double NNfunction_ss_cLcR::synapse0x242e930() {
   return (neuron0x2429ca0()*0.0193328);
}

double NNfunction_ss_cLcR::synapse0x242e970() {
   return (neuron0x2429fe0()*-0.0296374);
}

double NNfunction_ss_cLcR::synapse0x242e9b0() {
   return (neuron0x242a320()*0.00292248);
}

double NNfunction_ss_cLcR::synapse0x242e9f0() {
   return (neuron0x242a660()*0.306882);
}

double NNfunction_ss_cLcR::synapse0x242ea30() {
   return (neuron0x242a9a0()*0.0287429);
}

double NNfunction_ss_cLcR::synapse0x242ea70() {
   return (neuron0x242ace0()*0.00717132);
}

double NNfunction_ss_cLcR::synapse0x242eab0() {
   return (neuron0x242b020()*-2.03223);
}

double NNfunction_ss_cLcR::synapse0x242e540() {
   return (neuron0x242b360()*0.0583302);
}

double NNfunction_ss_cLcR::synapse0x242e580() {
   return (neuron0x242b8c0()*-0.0213425);
}

double NNfunction_ss_cLcR::synapse0x21f1020() {
   return (neuron0x242bae0()*-0.00269573);
}

double NNfunction_ss_cLcR::synapse0x21f1060() {
   return (neuron0x242be20()*-0.0149999);
}

double NNfunction_ss_cLcR::synapse0x2416ff0() {
   return (neuron0x242c160()*0.0589763);
}

double NNfunction_ss_cLcR::synapse0x2417030() {
   return (neuron0x242c4a0()*0.0924673);
}

double NNfunction_ss_cLcR::synapse0x2417070() {
   return (neuron0x242c7e0()*0.0270927);
}

double NNfunction_ss_cLcR::synapse0x2427ea0() {
   return (neuron0x242cb20()*-0.00294764);
}

double NNfunction_ss_cLcR::synapse0x242e000() {
   return (neuron0x2427f60()*0.168441);
}

double NNfunction_ss_cLcR::synapse0x2427ee0() {
   return (neuron0x24282a0()*-0.204034);
}

double NNfunction_ss_cLcR::synapse0x2427f20() {
   return (neuron0x24285e0()*-0.323918);
}

double NNfunction_ss_cLcR::synapse0x242ec00() {
   return (neuron0x2428920()*-0.0454996);
}

double NNfunction_ss_cLcR::synapse0x242ec40() {
   return (neuron0x2428c60()*-0.0218045);
}

double NNfunction_ss_cLcR::synapse0x242ec80() {
   return (neuron0x2428fa0()*0.761229);
}

double NNfunction_ss_cLcR::synapse0x242ecc0() {
   return (neuron0x24292e0()*0.881423);
}

double NNfunction_ss_cLcR::synapse0x242ed00() {
   return (neuron0x2429620()*-1.25012);
}

double NNfunction_ss_cLcR::synapse0x242ed40() {
   return (neuron0x2429960()*0.267265);
}

double NNfunction_ss_cLcR::synapse0x242ed80() {
   return (neuron0x2429ca0()*0.397504);
}

double NNfunction_ss_cLcR::synapse0x242edc0() {
   return (neuron0x2429fe0()*-0.615202);
}

double NNfunction_ss_cLcR::synapse0x242ee00() {
   return (neuron0x242a320()*0.421676);
}

double NNfunction_ss_cLcR::synapse0x242ee40() {
   return (neuron0x242a660()*-0.236986);
}

double NNfunction_ss_cLcR::synapse0x242ee80() {
   return (neuron0x242a9a0()*0.951241);
}

double NNfunction_ss_cLcR::synapse0x242eec0() {
   return (neuron0x242ace0()*0.31479);
}

double NNfunction_ss_cLcR::synapse0x242ef00() {
   return (neuron0x242b020()*0.0256253);
}

double NNfunction_ss_cLcR::synapse0x242de50() {
   return (neuron0x242b360()*-0.0862974);
}

double NNfunction_ss_cLcR::synapse0x242de90() {
   return (neuron0x242b8c0()*0.235276);
}

double NNfunction_ss_cLcR::synapse0x242f050() {
   return (neuron0x242bae0()*0.0892125);
}

double NNfunction_ss_cLcR::synapse0x242f090() {
   return (neuron0x242be20()*-0.430539);
}

double NNfunction_ss_cLcR::synapse0x242f0d0() {
   return (neuron0x242c160()*0.103363);
}

double NNfunction_ss_cLcR::synapse0x242f110() {
   return (neuron0x242c4a0()*0.29623);
}

double NNfunction_ss_cLcR::synapse0x242f150() {
   return (neuron0x242c7e0()*-0.551356);
}

double NNfunction_ss_cLcR::synapse0x242f190() {
   return (neuron0x242cb20()*-0.180787);
}

double NNfunction_ss_cLcR::synapse0x242f510() {
   return (neuron0x2427f60()*-0.0104003);
}

double NNfunction_ss_cLcR::synapse0x242f550() {
   return (neuron0x24282a0()*0.0156366);
}

double NNfunction_ss_cLcR::synapse0x242f590() {
   return (neuron0x24285e0()*-0.0209997);
}

double NNfunction_ss_cLcR::synapse0x242f5d0() {
   return (neuron0x2428920()*2.15421);
}

double NNfunction_ss_cLcR::synapse0x242f610() {
   return (neuron0x2428c60()*-0.0285312);
}

double NNfunction_ss_cLcR::synapse0x242f650() {
   return (neuron0x2428fa0()*-0.0235852);
}

double NNfunction_ss_cLcR::synapse0x242f690() {
   return (neuron0x24292e0()*-0.0654577);
}

double NNfunction_ss_cLcR::synapse0x242f6d0() {
   return (neuron0x2429620()*-0.0308614);
}

double NNfunction_ss_cLcR::synapse0x242f710() {
   return (neuron0x2429960()*-0.00793033);
}

double NNfunction_ss_cLcR::synapse0x242f750() {
   return (neuron0x2429ca0()*-0.033842);
}

double NNfunction_ss_cLcR::synapse0x242f790() {
   return (neuron0x2429fe0()*-0.00932523);
}

double NNfunction_ss_cLcR::synapse0x242f7d0() {
   return (neuron0x242a320()*0.00675669);
}

double NNfunction_ss_cLcR::synapse0x242f810() {
   return (neuron0x242a660()*-0.212056);
}

double NNfunction_ss_cLcR::synapse0x242f850() {
   return (neuron0x242a9a0()*-0.0205696);
}

double NNfunction_ss_cLcR::synapse0x242f890() {
   return (neuron0x242ace0()*0.00201782);
}

double NNfunction_ss_cLcR::synapse0x242f8d0() {
   return (neuron0x242b020()*-0.214144);
}

double NNfunction_ss_cLcR::synapse0x242f360() {
   return (neuron0x242b360()*-0.0390852);
}

double NNfunction_ss_cLcR::synapse0x242f3a0() {
   return (neuron0x242b8c0()*0.0050181);
}

double NNfunction_ss_cLcR::synapse0x242fa20() {
   return (neuron0x242bae0()*-0.0161562);
}

double NNfunction_ss_cLcR::synapse0x242fa60() {
   return (neuron0x242be20()*0.000137889);
}

double NNfunction_ss_cLcR::synapse0x242faa0() {
   return (neuron0x242c160()*-0.0192098);
}

double NNfunction_ss_cLcR::synapse0x242fae0() {
   return (neuron0x242c4a0()*-0.0101549);
}

double NNfunction_ss_cLcR::synapse0x242fb20() {
   return (neuron0x242c7e0()*0.00390885);
}

double NNfunction_ss_cLcR::synapse0x242fb60() {
   return (neuron0x242cb20()*-0.00411336);
}

double NNfunction_ss_cLcR::synapse0x242fee0() {
   return (neuron0x2427f60()*0.0190585);
}

double NNfunction_ss_cLcR::synapse0x242ff20() {
   return (neuron0x24282a0()*0.0753316);
}

double NNfunction_ss_cLcR::synapse0x242ff60() {
   return (neuron0x24285e0()*-1.33452);
}

double NNfunction_ss_cLcR::synapse0x242ffa0() {
   return (neuron0x2428920()*0.0619903);
}

double NNfunction_ss_cLcR::synapse0x242ffe0() {
   return (neuron0x2428c60()*0.114229);
}

double NNfunction_ss_cLcR::synapse0x2430020() {
   return (neuron0x2428fa0()*-0.00954504);
}

double NNfunction_ss_cLcR::synapse0x2430060() {
   return (neuron0x24292e0()*0.0337604);
}

double NNfunction_ss_cLcR::synapse0x24300a0() {
   return (neuron0x2429620()*-0.0781274);
}

double NNfunction_ss_cLcR::synapse0x24300e0() {
   return (neuron0x2429960()*0.0782489);
}

double NNfunction_ss_cLcR::synapse0x21f1370() {
   return (neuron0x2429ca0()*0.0341685);
}

double NNfunction_ss_cLcR::synapse0x21f13b0() {
   return (neuron0x2429fe0()*0.0534703);
}

double NNfunction_ss_cLcR::synapse0x21f13f0() {
   return (neuron0x242a320()*-0.00500154);
}

double NNfunction_ss_cLcR::synapse0x21f1430() {
   return (neuron0x242a660()*0.339402);
}

double NNfunction_ss_cLcR::synapse0x21f1470() {
   return (neuron0x242a9a0()*-0.0312892);
}

double NNfunction_ss_cLcR::synapse0x21f14b0() {
   return (neuron0x242ace0()*0.00742582);
}

double NNfunction_ss_cLcR::synapse0x21f14f0() {
   return (neuron0x242b020()*-0.146125);
}

double NNfunction_ss_cLcR::synapse0x242fd30() {
   return (neuron0x242b360()*-0.0553187);
}

double NNfunction_ss_cLcR::synapse0x242fd70() {
   return (neuron0x242b8c0()*0.0186196);
}

double NNfunction_ss_cLcR::synapse0x21f1640() {
   return (neuron0x242bae0()*0.0187064);
}

double NNfunction_ss_cLcR::synapse0x21f1680() {
   return (neuron0x242be20()*-0.0273817);
}

double NNfunction_ss_cLcR::synapse0x21f16c0() {
   return (neuron0x242c160()*-0.0465137);
}

double NNfunction_ss_cLcR::synapse0x21f1700() {
   return (neuron0x242c4a0()*-0.0308237);
}

double NNfunction_ss_cLcR::synapse0x21f1740() {
   return (neuron0x242c7e0()*-0.0362521);
}

double NNfunction_ss_cLcR::synapse0x2430930() {
   return (neuron0x242cb20()*-0.0429698);
}

double NNfunction_ss_cLcR::synapse0x2430cb0() {
   return (neuron0x2427f60()*0.0390361);
}

double NNfunction_ss_cLcR::synapse0x2430cf0() {
   return (neuron0x24282a0()*-0.00356368);
}

double NNfunction_ss_cLcR::synapse0x2430d30() {
   return (neuron0x24285e0()*0.33786);
}

double NNfunction_ss_cLcR::synapse0x2430d70() {
   return (neuron0x2428920()*-0.709043);
}

double NNfunction_ss_cLcR::synapse0x2430db0() {
   return (neuron0x2428c60()*0.180491);
}

double NNfunction_ss_cLcR::synapse0x2430df0() {
   return (neuron0x2428fa0()*0.0281955);
}

double NNfunction_ss_cLcR::synapse0x2430e30() {
   return (neuron0x24292e0()*0.0914255);
}

double NNfunction_ss_cLcR::synapse0x2430e70() {
   return (neuron0x2429620()*0.127463);
}

double NNfunction_ss_cLcR::synapse0x2430eb0() {
   return (neuron0x2429960()*0.0428698);
}

double NNfunction_ss_cLcR::synapse0x2430ef0() {
   return (neuron0x2429ca0()*0.0260372);
}

double NNfunction_ss_cLcR::synapse0x2430f30() {
   return (neuron0x2429fe0()*-0.123419);
}

double NNfunction_ss_cLcR::synapse0x2430f70() {
   return (neuron0x242a320()*0.297439);
}

double NNfunction_ss_cLcR::synapse0x2430fb0() {
   return (neuron0x242a660()*-0.0793462);
}

double NNfunction_ss_cLcR::synapse0x2430ff0() {
   return (neuron0x242a9a0()*-0.426242);
}

double NNfunction_ss_cLcR::synapse0x2431030() {
   return (neuron0x242ace0()*0.249943);
}

double NNfunction_ss_cLcR::synapse0x2431070() {
   return (neuron0x242b020()*-0.231366);
}

double NNfunction_ss_cLcR::synapse0x2430b00() {
   return (neuron0x242b360()*0.0814307);
}

double NNfunction_ss_cLcR::synapse0x2430b40() {
   return (neuron0x242b8c0()*0.429505);
}

double NNfunction_ss_cLcR::synapse0x24311c0() {
   return (neuron0x242bae0()*0.0740892);
}

double NNfunction_ss_cLcR::synapse0x2431200() {
   return (neuron0x242be20()*0.148093);
}

double NNfunction_ss_cLcR::synapse0x2431240() {
   return (neuron0x242c160()*0.212823);
}

double NNfunction_ss_cLcR::synapse0x2431280() {
   return (neuron0x242c4a0()*0.204105);
}

double NNfunction_ss_cLcR::synapse0x24312c0() {
   return (neuron0x242c7e0()*0.131857);
}

double NNfunction_ss_cLcR::synapse0x2431300() {
   return (neuron0x242cb20()*0.131311);
}

double NNfunction_ss_cLcR::synapse0x2431680() {
   return (neuron0x2427f60()*0.0209318);
}

double NNfunction_ss_cLcR::synapse0x24316c0() {
   return (neuron0x24282a0()*-0.162158);
}

double NNfunction_ss_cLcR::synapse0x2431700() {
   return (neuron0x24285e0()*0.757161);
}

double NNfunction_ss_cLcR::synapse0x2431740() {
   return (neuron0x2428920()*0.0396173);
}

double NNfunction_ss_cLcR::synapse0x2431780() {
   return (neuron0x2428c60()*0.424397);
}

double NNfunction_ss_cLcR::synapse0x24317c0() {
   return (neuron0x2428fa0()*0.261513);
}

double NNfunction_ss_cLcR::synapse0x2431800() {
   return (neuron0x24292e0()*0.440088);
}

double NNfunction_ss_cLcR::synapse0x2431840() {
   return (neuron0x2429620()*0.237464);
}

double NNfunction_ss_cLcR::synapse0x2431880() {
   return (neuron0x2429960()*0.394701);
}

double NNfunction_ss_cLcR::synapse0x24318c0() {
   return (neuron0x2429ca0()*0.524848);
}

double NNfunction_ss_cLcR::synapse0x2431900() {
   return (neuron0x2429fe0()*0.53077);
}

double NNfunction_ss_cLcR::synapse0x2431940() {
   return (neuron0x242a320()*0.191625);
}

double NNfunction_ss_cLcR::synapse0x2431980() {
   return (neuron0x242a660()*-0.313971);
}

double NNfunction_ss_cLcR::synapse0x24319c0() {
   return (neuron0x242a9a0()*0.140415);
}

double NNfunction_ss_cLcR::synapse0x2431a00() {
   return (neuron0x242ace0()*0.0817345);
}

double NNfunction_ss_cLcR::synapse0x2431a40() {
   return (neuron0x242b020()*-0.418942);
}

double NNfunction_ss_cLcR::synapse0x24314d0() {
   return (neuron0x242b360()*0.182136);
}

double NNfunction_ss_cLcR::synapse0x2431510() {
   return (neuron0x242b8c0()*0.254426);
}

double NNfunction_ss_cLcR::synapse0x2431b90() {
   return (neuron0x242bae0()*0.213688);
}

double NNfunction_ss_cLcR::synapse0x2431bd0() {
   return (neuron0x242be20()*0.268573);
}

double NNfunction_ss_cLcR::synapse0x2431c10() {
   return (neuron0x242c160()*0.254748);
}

double NNfunction_ss_cLcR::synapse0x2431c50() {
   return (neuron0x242c4a0()*0.0510683);
}

double NNfunction_ss_cLcR::synapse0x2431c90() {
   return (neuron0x242c7e0()*-0.187818);
}

double NNfunction_ss_cLcR::synapse0x2431cd0() {
   return (neuron0x242cb20()*0.0535727);
}

double NNfunction_ss_cLcR::synapse0x242b7b0() {
   return (neuron0x2427f60()*0.157551);
}

double NNfunction_ss_cLcR::synapse0x242b7f0() {
   return (neuron0x24282a0()*-0.584796);
}

double NNfunction_ss_cLcR::synapse0x242b830() {
   return (neuron0x24285e0()*0.188244);
}

double NNfunction_ss_cLcR::synapse0x242b870() {
   return (neuron0x2428920()*0.464862);
}

double NNfunction_ss_cLcR::synapse0x2432260() {
   return (neuron0x2428c60()*-0.265405);
}

double NNfunction_ss_cLcR::synapse0x24322a0() {
   return (neuron0x2428fa0()*0.915414);
}

double NNfunction_ss_cLcR::synapse0x24322e0() {
   return (neuron0x24292e0()*-0.554831);
}

double NNfunction_ss_cLcR::synapse0x2432320() {
   return (neuron0x2429620()*0.258094);
}

double NNfunction_ss_cLcR::synapse0x2432360() {
   return (neuron0x2429960()*-0.482335);
}

double NNfunction_ss_cLcR::synapse0x24323a0() {
   return (neuron0x2429ca0()*-0.228039);
}

double NNfunction_ss_cLcR::synapse0x24323e0() {
   return (neuron0x2429fe0()*-0.266878);
}

double NNfunction_ss_cLcR::synapse0x2432420() {
   return (neuron0x242a320()*-0.542218);
}

double NNfunction_ss_cLcR::synapse0x2432460() {
   return (neuron0x242a660()*-0.0773271);
}

double NNfunction_ss_cLcR::synapse0x24324a0() {
   return (neuron0x242a9a0()*-0.0579055);
}

double NNfunction_ss_cLcR::synapse0x24324e0() {
   return (neuron0x242ace0()*-0.336856);
}

double NNfunction_ss_cLcR::synapse0x2432520() {
   return (neuron0x242b020()*-0.407807);
}

double NNfunction_ss_cLcR::synapse0x2431ea0() {
   return (neuron0x242b360()*-0.248094);
}

double NNfunction_ss_cLcR::synapse0x2431ee0() {
   return (neuron0x242b8c0()*0.682309);
}

double NNfunction_ss_cLcR::synapse0x2432670() {
   return (neuron0x242bae0()*-0.660344);
}

double NNfunction_ss_cLcR::synapse0x24326b0() {
   return (neuron0x242be20()*-0.0327974);
}

double NNfunction_ss_cLcR::synapse0x24326f0() {
   return (neuron0x242c160()*-0.362706);
}

double NNfunction_ss_cLcR::synapse0x2432730() {
   return (neuron0x242c4a0()*-0.784998);
}

double NNfunction_ss_cLcR::synapse0x2432770() {
   return (neuron0x242c7e0()*0.224409);
}

double NNfunction_ss_cLcR::synapse0x24327b0() {
   return (neuron0x242cb20()*0.173528);
}

double NNfunction_ss_cLcR::synapse0x2432b30() {
   return (neuron0x2427f60()*0.0309523);
}

double NNfunction_ss_cLcR::synapse0x2432b70() {
   return (neuron0x24282a0()*-0.0727841);
}

double NNfunction_ss_cLcR::synapse0x2432bb0() {
   return (neuron0x24285e0()*-0.0927506);
}

double NNfunction_ss_cLcR::synapse0x2432bf0() {
   return (neuron0x2428920()*-1.49284);
}

double NNfunction_ss_cLcR::synapse0x2432c30() {
   return (neuron0x2428c60()*-0.0511237);
}

double NNfunction_ss_cLcR::synapse0x2432c70() {
   return (neuron0x2428fa0()*-0.0647999);
}

double NNfunction_ss_cLcR::synapse0x2432cb0() {
   return (neuron0x24292e0()*0.03489);
}

double NNfunction_ss_cLcR::synapse0x2432cf0() {
   return (neuron0x2429620()*0.0386983);
}

double NNfunction_ss_cLcR::synapse0x2432d30() {
   return (neuron0x2429960()*0.0108455);
}

double NNfunction_ss_cLcR::synapse0x2432d70() {
   return (neuron0x2429ca0()*-0.0870881);
}

double NNfunction_ss_cLcR::synapse0x2432db0() {
   return (neuron0x2429fe0()*0.0895144);
}

double NNfunction_ss_cLcR::synapse0x2432df0() {
   return (neuron0x242a320()*0.118501);
}

double NNfunction_ss_cLcR::synapse0x2432e30() {
   return (neuron0x242a660()*0.243629);
}

double NNfunction_ss_cLcR::synapse0x2432e70() {
   return (neuron0x242a9a0()*0.167241);
}

double NNfunction_ss_cLcR::synapse0x2432eb0() {
   return (neuron0x242ace0()*-0.00934421);
}

double NNfunction_ss_cLcR::synapse0x2432ef0() {
   return (neuron0x242b020()*0.205067);
}

double NNfunction_ss_cLcR::synapse0x2432980() {
   return (neuron0x242b360()*-0.0264584);
}

double NNfunction_ss_cLcR::synapse0x24329c0() {
   return (neuron0x242b8c0()*0.0148002);
}

double NNfunction_ss_cLcR::synapse0x2433040() {
   return (neuron0x242bae0()*0.0499832);
}

double NNfunction_ss_cLcR::synapse0x2433080() {
   return (neuron0x242be20()*0.0491719);
}

double NNfunction_ss_cLcR::synapse0x24330c0() {
   return (neuron0x242c160()*0.0720642);
}

double NNfunction_ss_cLcR::synapse0x2433100() {
   return (neuron0x242c4a0()*-0.0607931);
}

double NNfunction_ss_cLcR::synapse0x2433140() {
   return (neuron0x242c7e0()*-0.0380172);
}

double NNfunction_ss_cLcR::synapse0x2433180() {
   return (neuron0x242cb20()*-0.0688759);
}

double NNfunction_ss_cLcR::synapse0x2433500() {
   return (neuron0x2427f60()*-0.407284);
}

double NNfunction_ss_cLcR::synapse0x2433540() {
   return (neuron0x24282a0()*0.0388314);
}

double NNfunction_ss_cLcR::synapse0x2433580() {
   return (neuron0x24285e0()*0.9681);
}

double NNfunction_ss_cLcR::synapse0x24335c0() {
   return (neuron0x2428920()*0.391341);
}

double NNfunction_ss_cLcR::synapse0x2433600() {
   return (neuron0x2428c60()*-0.362315);
}

double NNfunction_ss_cLcR::synapse0x2433640() {
   return (neuron0x2428fa0()*-0.34133);
}

double NNfunction_ss_cLcR::synapse0x2433680() {
   return (neuron0x24292e0()*1.76433);
}

double NNfunction_ss_cLcR::synapse0x24336c0() {
   return (neuron0x2429620()*-0.225617);
}

double NNfunction_ss_cLcR::synapse0x2433700() {
   return (neuron0x2429960()*-0.696048);
}

double NNfunction_ss_cLcR::synapse0x2433740() {
   return (neuron0x2429ca0()*0.183339);
}

double NNfunction_ss_cLcR::synapse0x2433780() {
   return (neuron0x2429fe0()*0.00547869);
}

double NNfunction_ss_cLcR::synapse0x24337c0() {
   return (neuron0x242a320()*-0.257287);
}

double NNfunction_ss_cLcR::synapse0x2433800() {
   return (neuron0x242a660()*-0.259873);
}

double NNfunction_ss_cLcR::synapse0x2433840() {
   return (neuron0x242a9a0()*0.394112);
}

double NNfunction_ss_cLcR::synapse0x2433880() {
   return (neuron0x242ace0()*-1.46356);
}

double NNfunction_ss_cLcR::synapse0x24338c0() {
   return (neuron0x242b020()*0.20138);
}

double NNfunction_ss_cLcR::synapse0x2433350() {
   return (neuron0x242b360()*-0.352074);
}

double NNfunction_ss_cLcR::synapse0x2433390() {
   return (neuron0x242b8c0()*-0.125903);
}

double NNfunction_ss_cLcR::synapse0x2430120() {
   return (neuron0x242bae0()*-0.902055);
}

double NNfunction_ss_cLcR::synapse0x2430160() {
   return (neuron0x242be20()*0.745316);
}

double NNfunction_ss_cLcR::synapse0x24301a0() {
   return (neuron0x242c160()*-0.323641);
}

double NNfunction_ss_cLcR::synapse0x24301e0() {
   return (neuron0x242c4a0()*0.508566);
}

double NNfunction_ss_cLcR::synapse0x2430220() {
   return (neuron0x242c7e0()*-1.26073);
}

double NNfunction_ss_cLcR::synapse0x2430260() {
   return (neuron0x242cb20()*-0.450799);
}

double NNfunction_ss_cLcR::synapse0x24305e0() {
   return (neuron0x2427f60()*-0.456024);
}

double NNfunction_ss_cLcR::synapse0x2430620() {
   return (neuron0x24282a0()*0.581792);
}

double NNfunction_ss_cLcR::synapse0x2430660() {
   return (neuron0x24285e0()*-0.474806);
}

double NNfunction_ss_cLcR::synapse0x24306a0() {
   return (neuron0x2428920()*-1.03627);
}

double NNfunction_ss_cLcR::synapse0x24306e0() {
   return (neuron0x2428c60()*0.309111);
}

double NNfunction_ss_cLcR::synapse0x2430720() {
   return (neuron0x2428fa0()*-0.0283099);
}

double NNfunction_ss_cLcR::synapse0x2430760() {
   return (neuron0x24292e0()*-0.101615);
}

double NNfunction_ss_cLcR::synapse0x24307a0() {
   return (neuron0x2429620()*-0.0197289);
}

double NNfunction_ss_cLcR::synapse0x24307e0() {
   return (neuron0x2429960()*-0.368027);
}

double NNfunction_ss_cLcR::synapse0x2430820() {
   return (neuron0x2429ca0()*-0.0448238);
}

double NNfunction_ss_cLcR::synapse0x2430860() {
   return (neuron0x2429fe0()*-0.380162);
}

double NNfunction_ss_cLcR::synapse0x24308a0() {
   return (neuron0x242a320()*-0.0395003);
}

double NNfunction_ss_cLcR::synapse0x24308e0() {
   return (neuron0x242a660()*-0.477893);
}

double NNfunction_ss_cLcR::synapse0x2434a20() {
   return (neuron0x242a9a0()*-0.2427);
}

double NNfunction_ss_cLcR::synapse0x2434a60() {
   return (neuron0x242ace0()*0.00890929);
}

double NNfunction_ss_cLcR::synapse0x2434aa0() {
   return (neuron0x242b020()*-0.822698);
}

double NNfunction_ss_cLcR::synapse0x2430430() {
   return (neuron0x242b360()*0.162553);
}

double NNfunction_ss_cLcR::synapse0x2430470() {
   return (neuron0x242b8c0()*-0.306282);
}

double NNfunction_ss_cLcR::synapse0x2434bf0() {
   return (neuron0x242bae0()*-0.0253103);
}

double NNfunction_ss_cLcR::synapse0x2434c30() {
   return (neuron0x242be20()*-0.163729);
}

double NNfunction_ss_cLcR::synapse0x2434c70() {
   return (neuron0x242c160()*-0.0922125);
}

double NNfunction_ss_cLcR::synapse0x2434cb0() {
   return (neuron0x242c4a0()*0.0871033);
}

double NNfunction_ss_cLcR::synapse0x2434cf0() {
   return (neuron0x242c7e0()*0.0611396);
}

double NNfunction_ss_cLcR::synapse0x2434d30() {
   return (neuron0x242cb20()*0.317025);
}

double NNfunction_ss_cLcR::synapse0x24350b0() {
   return (neuron0x2427f60()*0.710223);
}

double NNfunction_ss_cLcR::synapse0x24350f0() {
   return (neuron0x24282a0()*-0.313552);
}

double NNfunction_ss_cLcR::synapse0x2435130() {
   return (neuron0x24285e0()*-0.743097);
}

double NNfunction_ss_cLcR::synapse0x2435170() {
   return (neuron0x2428920()*0.179138);
}

double NNfunction_ss_cLcR::synapse0x24351b0() {
   return (neuron0x2428c60()*-0.0285069);
}

double NNfunction_ss_cLcR::synapse0x24351f0() {
   return (neuron0x2428fa0()*-0.17998);
}

double NNfunction_ss_cLcR::synapse0x2435230() {
   return (neuron0x24292e0()*0.274833);
}

double NNfunction_ss_cLcR::synapse0x2435270() {
   return (neuron0x2429620()*1.0503);
}

double NNfunction_ss_cLcR::synapse0x24352b0() {
   return (neuron0x2429960()*-0.453318);
}

double NNfunction_ss_cLcR::synapse0x24352f0() {
   return (neuron0x2429ca0()*0.170855);
}

double NNfunction_ss_cLcR::synapse0x2435330() {
   return (neuron0x2429fe0()*0.258439);
}

double NNfunction_ss_cLcR::synapse0x2435370() {
   return (neuron0x242a320()*0.0384908);
}

double NNfunction_ss_cLcR::synapse0x24353b0() {
   return (neuron0x242a660()*0.258718);
}

double NNfunction_ss_cLcR::synapse0x24353f0() {
   return (neuron0x242a9a0()*0.497447);
}

double NNfunction_ss_cLcR::synapse0x2435430() {
   return (neuron0x242ace0()*-0.383522);
}

double NNfunction_ss_cLcR::synapse0x2435470() {
   return (neuron0x242b020()*-0.0359474);
}

double NNfunction_ss_cLcR::synapse0x2434f00() {
   return (neuron0x242b360()*0.249442);
}

double NNfunction_ss_cLcR::synapse0x2434f40() {
   return (neuron0x242b8c0()*-0.265487);
}

double NNfunction_ss_cLcR::synapse0x24355c0() {
   return (neuron0x242bae0()*0.269093);
}

double NNfunction_ss_cLcR::synapse0x2435600() {
   return (neuron0x242be20()*-0.0629072);
}

double NNfunction_ss_cLcR::synapse0x2435640() {
   return (neuron0x242c160()*-1.00148);
}

double NNfunction_ss_cLcR::synapse0x2435680() {
   return (neuron0x242c4a0()*0.954358);
}

double NNfunction_ss_cLcR::synapse0x24356c0() {
   return (neuron0x242c7e0()*1.04264);
}

double NNfunction_ss_cLcR::synapse0x2435700() {
   return (neuron0x242cb20()*0.118771);
}

double NNfunction_ss_cLcR::synapse0x2435a80() {
   return (neuron0x2427f60()*-0.448756);
}

double NNfunction_ss_cLcR::synapse0x2435ac0() {
   return (neuron0x24282a0()*0.279838);
}

double NNfunction_ss_cLcR::synapse0x2435b00() {
   return (neuron0x24285e0()*0.00902625);
}

double NNfunction_ss_cLcR::synapse0x2435b40() {
   return (neuron0x2428920()*0.308821);
}

double NNfunction_ss_cLcR::synapse0x2435b80() {
   return (neuron0x2428c60()*0.301319);
}

double NNfunction_ss_cLcR::synapse0x2435bc0() {
   return (neuron0x2428fa0()*0.534258);
}

double NNfunction_ss_cLcR::synapse0x2435c00() {
   return (neuron0x24292e0()*-0.241732);
}

double NNfunction_ss_cLcR::synapse0x2435c40() {
   return (neuron0x2429620()*-0.130012);
}

double NNfunction_ss_cLcR::synapse0x2435c80() {
   return (neuron0x2429960()*0.0166214);
}

double NNfunction_ss_cLcR::synapse0x2435cc0() {
   return (neuron0x2429ca0()*-0.0194799);
}

double NNfunction_ss_cLcR::synapse0x2435d00() {
   return (neuron0x2429fe0()*0.11979);
}

double NNfunction_ss_cLcR::synapse0x2435d40() {
   return (neuron0x242a320()*-0.0541125);
}

double NNfunction_ss_cLcR::synapse0x2435d80() {
   return (neuron0x242a660()*0.29802);
}

double NNfunction_ss_cLcR::synapse0x2435dc0() {
   return (neuron0x242a9a0()*0.0196658);
}

double NNfunction_ss_cLcR::synapse0x2435e00() {
   return (neuron0x242ace0()*-0.421869);
}

double NNfunction_ss_cLcR::synapse0x2435e40() {
   return (neuron0x242b020()*0.969021);
}

double NNfunction_ss_cLcR::synapse0x24358d0() {
   return (neuron0x242b360()*0.0873412);
}

double NNfunction_ss_cLcR::synapse0x2435910() {
   return (neuron0x242b8c0()*-0.0853339);
}

double NNfunction_ss_cLcR::synapse0x2435f90() {
   return (neuron0x242bae0()*-0.138243);
}

double NNfunction_ss_cLcR::synapse0x2435fd0() {
   return (neuron0x242be20()*-0.0368909);
}

double NNfunction_ss_cLcR::synapse0x2436010() {
   return (neuron0x242c160()*0.291014);
}

double NNfunction_ss_cLcR::synapse0x2436050() {
   return (neuron0x242c4a0()*-0.11154);
}

double NNfunction_ss_cLcR::synapse0x2436090() {
   return (neuron0x242c7e0()*0.0460258);
}

double NNfunction_ss_cLcR::synapse0x24360d0() {
   return (neuron0x242cb20()*-0.0458876);
}

double NNfunction_ss_cLcR::synapse0x2436450() {
   return (neuron0x2427f60()*0.0577723);
}

double NNfunction_ss_cLcR::synapse0x2436490() {
   return (neuron0x24282a0()*-0.448395);
}

double NNfunction_ss_cLcR::synapse0x24364d0() {
   return (neuron0x24285e0()*0.265285);
}

double NNfunction_ss_cLcR::synapse0x2436510() {
   return (neuron0x2428920()*-1.17899);
}

double NNfunction_ss_cLcR::synapse0x2436550() {
   return (neuron0x2428c60()*-0.271847);
}

double NNfunction_ss_cLcR::synapse0x2436590() {
   return (neuron0x2428fa0()*0.415975);
}

double NNfunction_ss_cLcR::synapse0x24365d0() {
   return (neuron0x24292e0()*0.751975);
}

double NNfunction_ss_cLcR::synapse0x2436610() {
   return (neuron0x2429620()*0.489995);
}

double NNfunction_ss_cLcR::synapse0x2436650() {
   return (neuron0x2429960()*-0.0184021);
}

double NNfunction_ss_cLcR::synapse0x2436690() {
   return (neuron0x2429ca0()*0.661251);
}

double NNfunction_ss_cLcR::synapse0x24366d0() {
   return (neuron0x2429fe0()*-0.636851);
}

double NNfunction_ss_cLcR::synapse0x2436710() {
   return (neuron0x242a320()*0.634687);
}

double NNfunction_ss_cLcR::synapse0x2436750() {
   return (neuron0x242a660()*1.84414);
}

double NNfunction_ss_cLcR::synapse0x2436790() {
   return (neuron0x242a9a0()*0.218845);
}

double NNfunction_ss_cLcR::synapse0x24367d0() {
   return (neuron0x242ace0()*-0.113808);
}

double NNfunction_ss_cLcR::synapse0x2436810() {
   return (neuron0x242b020()*-0.459134);
}

double NNfunction_ss_cLcR::synapse0x24362a0() {
   return (neuron0x242b360()*0.0320933);
}

double NNfunction_ss_cLcR::synapse0x24362e0() {
   return (neuron0x242b8c0()*-0.47346);
}

double NNfunction_ss_cLcR::synapse0x2436960() {
   return (neuron0x242bae0()*1.0692);
}

double NNfunction_ss_cLcR::synapse0x24369a0() {
   return (neuron0x242be20()*-0.339474);
}

double NNfunction_ss_cLcR::synapse0x24369e0() {
   return (neuron0x242c160()*-0.501908);
}

double NNfunction_ss_cLcR::synapse0x2436a20() {
   return (neuron0x242c4a0()*-0.163542);
}

double NNfunction_ss_cLcR::synapse0x2436a60() {
   return (neuron0x242c7e0()*-0.182003);
}

double NNfunction_ss_cLcR::synapse0x2436aa0() {
   return (neuron0x242cb20()*-0.329587);
}

double NNfunction_ss_cLcR::synapse0x2436e20() {
   return (neuron0x2427f60()*-0.00494613);
}

double NNfunction_ss_cLcR::synapse0x2428180() {
   return (neuron0x24282a0()*-0.000637694);
}

double NNfunction_ss_cLcR::synapse0x24281c0() {
   return (neuron0x24285e0()*0.0428898);
}

double NNfunction_ss_cLcR::synapse0x24284c0() {
   return (neuron0x2428920()*-0.00421123);
}

double NNfunction_ss_cLcR::synapse0x2428500() {
   return (neuron0x2428c60()*-0.0179621);
}

double NNfunction_ss_cLcR::synapse0x2428800() {
   return (neuron0x2428fa0()*-0.00201502);
}

double NNfunction_ss_cLcR::synapse0x2428840() {
   return (neuron0x24292e0()*0.00845655);
}

double NNfunction_ss_cLcR::synapse0x2428b40() {
   return (neuron0x2429620()*0.0864399);
}

double NNfunction_ss_cLcR::synapse0x2428b80() {
   return (neuron0x2429960()*0.0936247);
}

double NNfunction_ss_cLcR::synapse0x2428e80() {
   return (neuron0x2429ca0()*0.01963);
}

double NNfunction_ss_cLcR::synapse0x2428ec0() {
   return (neuron0x2429fe0()*0.173086);
}

double NNfunction_ss_cLcR::synapse0x24291c0() {
   return (neuron0x242a320()*0.0172754);
}

double NNfunction_ss_cLcR::synapse0x2429200() {
   return (neuron0x242a660()*-1.26041);
}

double NNfunction_ss_cLcR::synapse0x2429500() {
   return (neuron0x242a9a0()*0.0246292);
}

double NNfunction_ss_cLcR::synapse0x2429540() {
   return (neuron0x242ace0()*0.0516267);
}

double NNfunction_ss_cLcR::synapse0x2429840() {
   return (neuron0x242b020()*0.577345);
}

double NNfunction_ss_cLcR::synapse0x2429880() {
   return (neuron0x242b360()*0.0125125);
}

double NNfunction_ss_cLcR::synapse0x2429b80() {
   return (neuron0x242b8c0()*0.0219857);
}

double NNfunction_ss_cLcR::synapse0x2429bc0() {
   return (neuron0x242bae0()*-0.0178221);
}

double NNfunction_ss_cLcR::synapse0x2429ec0() {
   return (neuron0x242be20()*0.0122133);
}

double NNfunction_ss_cLcR::synapse0x2429f00() {
   return (neuron0x242c160()*0.0363047);
}

double NNfunction_ss_cLcR::synapse0x242a200() {
   return (neuron0x242c4a0()*-0.013009);
}

double NNfunction_ss_cLcR::synapse0x242a240() {
   return (neuron0x242c7e0()*-0.0355544);
}

double NNfunction_ss_cLcR::synapse0x242a540() {
   return (neuron0x242cb20()*-0.00405671);
}

double NNfunction_ss_cLcR::synapse0x242a580() {
   return (neuron0x2427f60()*0.233552);
}

double NNfunction_ss_cLcR::synapse0x242b240() {
   return (neuron0x24282a0()*0.67344);
}

double NNfunction_ss_cLcR::synapse0x242b280() {
   return (neuron0x24285e0()*-0.197188);
}

double NNfunction_ss_cLcR::synapse0x2436c70() {
   return (neuron0x2428920()*1.91918);
}

double NNfunction_ss_cLcR::synapse0x2436cb0() {
   return (neuron0x2428c60()*-0.772135);
}

double NNfunction_ss_cLcR::synapse0x242b580() {
   return (neuron0x2428fa0()*-0.201323);
}

double NNfunction_ss_cLcR::synapse0x242b5c0() {
   return (neuron0x24292e0()*-0.0580452);
}

double NNfunction_ss_cLcR::synapse0x21e2ff0() {
   return (neuron0x2429620()*0.311698);
}

double NNfunction_ss_cLcR::synapse0x21e3030() {
   return (neuron0x2429960()*-0.117723);
}

double NNfunction_ss_cLcR::synapse0x242bd00() {
   return (neuron0x2429ca0()*-0.0329017);
}

double NNfunction_ss_cLcR::synapse0x242bd40() {
   return (neuron0x2429fe0()*-0.410186);
}

double NNfunction_ss_cLcR::synapse0x242c040() {
   return (neuron0x242a320()*0.529225);
}

double NNfunction_ss_cLcR::synapse0x242c080() {
   return (neuron0x242a660()*-0.624429);
}

double NNfunction_ss_cLcR::synapse0x242c380() {
   return (neuron0x242a9a0()*0.0819163);
}

double NNfunction_ss_cLcR::synapse0x242c3c0() {
   return (neuron0x242ace0()*0.122783);
}

double NNfunction_ss_cLcR::synapse0x242c6c0() {
   return (neuron0x242b020()*-1.48739);
}

double NNfunction_ss_cLcR::synapse0x242c700() {
   return (neuron0x242b360()*-0.105326);
}

double NNfunction_ss_cLcR::synapse0x242ca00() {
   return (neuron0x242b8c0()*0.23948);
}

double NNfunction_ss_cLcR::synapse0x242ca40() {
   return (neuron0x242bae0()*-0.141729);
}

double NNfunction_ss_cLcR::synapse0x242cd40() {
   return (neuron0x242be20()*-0.46783);
}

double NNfunction_ss_cLcR::synapse0x242cd80() {
   return (neuron0x242c160()*-0.586425);
}

double NNfunction_ss_cLcR::synapse0x242a880() {
   return (neuron0x242c4a0()*-0.31216);
}

double NNfunction_ss_cLcR::synapse0x242a8c0() {
   return (neuron0x242c7e0()*-0.262543);
}

double NNfunction_ss_cLcR::synapse0x2438b90() {
   return (neuron0x242cb20()*0.00416209);
}

double NNfunction_ss_cLcR::synapse0x2438f10() {
   return (neuron0x2427f60()*-0.0820967);
}

double NNfunction_ss_cLcR::synapse0x2438f50() {
   return (neuron0x24282a0()*-0.0838823);
}

double NNfunction_ss_cLcR::synapse0x2438f90() {
   return (neuron0x24285e0()*0.0503341);
}

double NNfunction_ss_cLcR::synapse0x2438fd0() {
   return (neuron0x2428920()*8.01437);
}

double NNfunction_ss_cLcR::synapse0x2439010() {
   return (neuron0x2428c60()*0.0204852);
}

double NNfunction_ss_cLcR::synapse0x2439050() {
   return (neuron0x2428fa0()*0.0442599);
}

double NNfunction_ss_cLcR::synapse0x2439090() {
   return (neuron0x24292e0()*-0.10166);
}

double NNfunction_ss_cLcR::synapse0x24390d0() {
   return (neuron0x2429620()*-0.0665861);
}

double NNfunction_ss_cLcR::synapse0x2439110() {
   return (neuron0x2429960()*-0.0256361);
}

double NNfunction_ss_cLcR::synapse0x2439150() {
   return (neuron0x2429ca0()*-0.0380103);
}

double NNfunction_ss_cLcR::synapse0x2439190() {
   return (neuron0x2429fe0()*-0.0176338);
}

double NNfunction_ss_cLcR::synapse0x24391d0() {
   return (neuron0x242a320()*-0.0652294);
}

double NNfunction_ss_cLcR::synapse0x2439210() {
   return (neuron0x242a660()*0.209503);
}

double NNfunction_ss_cLcR::synapse0x2439250() {
   return (neuron0x242a9a0()*-0.0268828);
}

double NNfunction_ss_cLcR::synapse0x2439290() {
   return (neuron0x242ace0()*-0.0611363);
}

double NNfunction_ss_cLcR::synapse0x24392d0() {
   return (neuron0x242b020()*0.173766);
}

double NNfunction_ss_cLcR::synapse0x2438d60() {
   return (neuron0x242b360()*0.0168275);
}

double NNfunction_ss_cLcR::synapse0x2438da0() {
   return (neuron0x242b8c0()*-0.0999341);
}

double NNfunction_ss_cLcR::synapse0x2439420() {
   return (neuron0x242bae0()*0.00205998);
}

double NNfunction_ss_cLcR::synapse0x2439460() {
   return (neuron0x242be20()*0.017847);
}

double NNfunction_ss_cLcR::synapse0x24394a0() {
   return (neuron0x242c160()*-0.0136776);
}

double NNfunction_ss_cLcR::synapse0x24394e0() {
   return (neuron0x242c4a0()*-0.0692082);
}

double NNfunction_ss_cLcR::synapse0x2439520() {
   return (neuron0x242c7e0()*0.0303487);
}

double NNfunction_ss_cLcR::synapse0x2439560() {
   return (neuron0x242cb20()*0.0511368);
}

double NNfunction_ss_cLcR::synapse0x24398e0() {
   return (neuron0x2427f60()*-1.01083);
}

double NNfunction_ss_cLcR::synapse0x2439920() {
   return (neuron0x24282a0()*-0.521834);
}

double NNfunction_ss_cLcR::synapse0x2439960() {
   return (neuron0x24285e0()*-0.458436);
}

double NNfunction_ss_cLcR::synapse0x24399a0() {
   return (neuron0x2428920()*-0.0881192);
}

double NNfunction_ss_cLcR::synapse0x24399e0() {
   return (neuron0x2428c60()*0.633299);
}

double NNfunction_ss_cLcR::synapse0x2439a20() {
   return (neuron0x2428fa0()*0.299014);
}

double NNfunction_ss_cLcR::synapse0x2439a60() {
   return (neuron0x24292e0()*0.573988);
}

double NNfunction_ss_cLcR::synapse0x2439aa0() {
   return (neuron0x2429620()*-0.126243);
}

double NNfunction_ss_cLcR::synapse0x2439ae0() {
   return (neuron0x2429960()*0.791548);
}

double NNfunction_ss_cLcR::synapse0x2439b20() {
   return (neuron0x2429ca0()*0.47015);
}

double NNfunction_ss_cLcR::synapse0x2439b60() {
   return (neuron0x2429fe0()*0.171253);
}

double NNfunction_ss_cLcR::synapse0x2439ba0() {
   return (neuron0x242a320()*-0.318738);
}

double NNfunction_ss_cLcR::synapse0x2439be0() {
   return (neuron0x242a660()*0.251133);
}

double NNfunction_ss_cLcR::synapse0x2439c20() {
   return (neuron0x242a9a0()*0.337411);
}

double NNfunction_ss_cLcR::synapse0x2439c60() {
   return (neuron0x242ace0()*0.508543);
}

double NNfunction_ss_cLcR::synapse0x2439ca0() {
   return (neuron0x242b020()*-0.728744);
}

double NNfunction_ss_cLcR::synapse0x2439730() {
   return (neuron0x242b360()*0.392069);
}

double NNfunction_ss_cLcR::synapse0x2439770() {
   return (neuron0x242b8c0()*1.38627);
}

double NNfunction_ss_cLcR::synapse0x2439df0() {
   return (neuron0x242bae0()*0.0805876);
}

double NNfunction_ss_cLcR::synapse0x2439e30() {
   return (neuron0x242be20()*0.377303);
}

double NNfunction_ss_cLcR::synapse0x2439e70() {
   return (neuron0x242c160()*0.758072);
}

double NNfunction_ss_cLcR::synapse0x2439eb0() {
   return (neuron0x242c4a0()*-0.358753);
}

double NNfunction_ss_cLcR::synapse0x2439ef0() {
   return (neuron0x242c7e0()*0.0759254);
}

double NNfunction_ss_cLcR::synapse0x2439f30() {
   return (neuron0x242cb20()*0.133443);
}

double NNfunction_ss_cLcR::synapse0x243a2b0() {
   return (neuron0x2427f60()*0.0560736);
}

double NNfunction_ss_cLcR::synapse0x243a2f0() {
   return (neuron0x24282a0()*-0.013399);
}

double NNfunction_ss_cLcR::synapse0x243a330() {
   return (neuron0x24285e0()*0.154949);
}

double NNfunction_ss_cLcR::synapse0x243a370() {
   return (neuron0x2428920()*0.827194);
}

double NNfunction_ss_cLcR::synapse0x243a3b0() {
   return (neuron0x2428c60()*0.0403395);
}

double NNfunction_ss_cLcR::synapse0x243a3f0() {
   return (neuron0x2428fa0()*-0.0496438);
}

double NNfunction_ss_cLcR::synapse0x243a430() {
   return (neuron0x24292e0()*0.442085);
}

double NNfunction_ss_cLcR::synapse0x243a470() {
   return (neuron0x2429620()*0.137048);
}

double NNfunction_ss_cLcR::synapse0x243a4b0() {
   return (neuron0x2429960()*-0.211576);
}

double NNfunction_ss_cLcR::synapse0x243a4f0() {
   return (neuron0x2429ca0()*-0.336615);
}

double NNfunction_ss_cLcR::synapse0x243a530() {
   return (neuron0x2429fe0()*-0.126115);
}

double NNfunction_ss_cLcR::synapse0x243a570() {
   return (neuron0x242a320()*0.347494);
}

double NNfunction_ss_cLcR::synapse0x243a5b0() {
   return (neuron0x242a660()*-0.192299);
}

double NNfunction_ss_cLcR::synapse0x243a5f0() {
   return (neuron0x242a9a0()*0.0684081);
}

double NNfunction_ss_cLcR::synapse0x243a630() {
   return (neuron0x242ace0()*-0.108749);
}

double NNfunction_ss_cLcR::synapse0x243a670() {
   return (neuron0x242b020()*-0.106899);
}

double NNfunction_ss_cLcR::synapse0x243a100() {
   return (neuron0x242b360()*-0.0307721);
}

double NNfunction_ss_cLcR::synapse0x243a140() {
   return (neuron0x242b8c0()*-0.241671);
}

double NNfunction_ss_cLcR::synapse0x243a7c0() {
   return (neuron0x242bae0()*0.494343);
}

double NNfunction_ss_cLcR::synapse0x243a800() {
   return (neuron0x242be20()*-0.109313);
}

double NNfunction_ss_cLcR::synapse0x243a840() {
   return (neuron0x242c160()*0.0303566);
}

double NNfunction_ss_cLcR::synapse0x243a880() {
   return (neuron0x242c4a0()*0.164928);
}

double NNfunction_ss_cLcR::synapse0x243a8c0() {
   return (neuron0x242c7e0()*0.251835);
}

double NNfunction_ss_cLcR::synapse0x243a900() {
   return (neuron0x242cb20()*0.105281);
}

double NNfunction_ss_cLcR::synapse0x243ac80() {
   return (neuron0x2427f60()*-0.00243006);
}

double NNfunction_ss_cLcR::synapse0x243acc0() {
   return (neuron0x24282a0()*-0.00835171);
}

double NNfunction_ss_cLcR::synapse0x243ad00() {
   return (neuron0x24285e0()*0.0360476);
}

double NNfunction_ss_cLcR::synapse0x243ad40() {
   return (neuron0x2428920()*1.41915);
}

double NNfunction_ss_cLcR::synapse0x243ad80() {
   return (neuron0x2428c60()*-0.000442776);
}

double NNfunction_ss_cLcR::synapse0x243adc0() {
   return (neuron0x2428fa0()*0.00287535);
}

double NNfunction_ss_cLcR::synapse0x243ae00() {
   return (neuron0x24292e0()*-0.00312335);
}

double NNfunction_ss_cLcR::synapse0x243ae40() {
   return (neuron0x2429620()*-0.00815965);
}

double NNfunction_ss_cLcR::synapse0x243ae80() {
   return (neuron0x2429960()*-0.00116538);
}

double NNfunction_ss_cLcR::synapse0x243aec0() {
   return (neuron0x2429ca0()*0.00833365);
}

double NNfunction_ss_cLcR::synapse0x243af00() {
   return (neuron0x2429fe0()*0.00630664);
}

double NNfunction_ss_cLcR::synapse0x243af40() {
   return (neuron0x242a320()*-0.000793217);
}

double NNfunction_ss_cLcR::synapse0x243af80() {
   return (neuron0x242a660()*0.109657);
}

double NNfunction_ss_cLcR::synapse0x243afc0() {
   return (neuron0x242a9a0()*-0.00761302);
}

double NNfunction_ss_cLcR::synapse0x243b000() {
   return (neuron0x242ace0()*0.00850086);
}

double NNfunction_ss_cLcR::synapse0x243b040() {
   return (neuron0x242b020()*0.108489);
}

double NNfunction_ss_cLcR::synapse0x243aad0() {
   return (neuron0x242b360()*0.0150848);
}

double NNfunction_ss_cLcR::synapse0x243ab10() {
   return (neuron0x242b8c0()*-0.00330806);
}

double NNfunction_ss_cLcR::synapse0x243b190() {
   return (neuron0x242bae0()*-0.00831788);
}

double NNfunction_ss_cLcR::synapse0x243b1d0() {
   return (neuron0x242be20()*-0.00869939);
}

double NNfunction_ss_cLcR::synapse0x243b210() {
   return (neuron0x242c160()*-0.00794634);
}

double NNfunction_ss_cLcR::synapse0x243b250() {
   return (neuron0x242c4a0()*0.0165937);
}

double NNfunction_ss_cLcR::synapse0x243b290() {
   return (neuron0x242c7e0()*0.00918437);
}

double NNfunction_ss_cLcR::synapse0x243b2d0() {
   return (neuron0x242cb20()*-0.00214441);
}

double NNfunction_ss_cLcR::synapse0x243b650() {
   return (neuron0x2427f60()*-0.0655079);
}

double NNfunction_ss_cLcR::synapse0x243b690() {
   return (neuron0x24282a0()*0.487264);
}

double NNfunction_ss_cLcR::synapse0x243b6d0() {
   return (neuron0x24285e0()*-1.35007);
}

double NNfunction_ss_cLcR::synapse0x243b710() {
   return (neuron0x2428920()*0.804507);
}

double NNfunction_ss_cLcR::synapse0x243b750() {
   return (neuron0x2428c60()*-0.578777);
}

double NNfunction_ss_cLcR::synapse0x243b790() {
   return (neuron0x2428fa0()*0.221788);
}

double NNfunction_ss_cLcR::synapse0x243b7d0() {
   return (neuron0x24292e0()*0.145091);
}

double NNfunction_ss_cLcR::synapse0x243b810() {
   return (neuron0x2429620()*0.708103);
}

double NNfunction_ss_cLcR::synapse0x243b850() {
   return (neuron0x2429960()*0.359984);
}

double NNfunction_ss_cLcR::synapse0x2433a10() {
   return (neuron0x2429ca0()*0.89338);
}

double NNfunction_ss_cLcR::synapse0x2433a50() {
   return (neuron0x2429fe0()*0.428815);
}

double NNfunction_ss_cLcR::synapse0x2433a90() {
   return (neuron0x242a320()*1.49282);
}

double NNfunction_ss_cLcR::synapse0x2433ad0() {
   return (neuron0x242a660()*-0.295885);
}

double NNfunction_ss_cLcR::synapse0x2433b10() {
   return (neuron0x242a9a0()*-0.211335);
}

double NNfunction_ss_cLcR::synapse0x2433b50() {
   return (neuron0x242ace0()*0.67713);
}

double NNfunction_ss_cLcR::synapse0x2433b90() {
   return (neuron0x242b020()*0.112909);
}

double NNfunction_ss_cLcR::synapse0x243b4a0() {
   return (neuron0x242b360()*-0.69748);
}

double NNfunction_ss_cLcR::synapse0x243b4e0() {
   return (neuron0x242b8c0()*-0.0370698);
}

double NNfunction_ss_cLcR::synapse0x2433ce0() {
   return (neuron0x242bae0()*0.247024);
}

double NNfunction_ss_cLcR::synapse0x2433d20() {
   return (neuron0x242be20()*0.391375);
}

double NNfunction_ss_cLcR::synapse0x2433d60() {
   return (neuron0x242c160()*0.0570232);
}

double NNfunction_ss_cLcR::synapse0x2433da0() {
   return (neuron0x242c4a0()*-0.722115);
}

double NNfunction_ss_cLcR::synapse0x2433de0() {
   return (neuron0x242c7e0()*-0.481023);
}

double NNfunction_ss_cLcR::synapse0x2433e20() {
   return (neuron0x242cb20()*0.183078);
}

double NNfunction_ss_cLcR::synapse0x24341a0() {
   return (neuron0x2427f60()*-0.00617335);
}

double NNfunction_ss_cLcR::synapse0x24341e0() {
   return (neuron0x24282a0()*0.113762);
}

double NNfunction_ss_cLcR::synapse0x2434220() {
   return (neuron0x24285e0()*-0.158282);
}

double NNfunction_ss_cLcR::synapse0x2434260() {
   return (neuron0x2428920()*0.389752);
}

double NNfunction_ss_cLcR::synapse0x24342a0() {
   return (neuron0x2428c60()*0.0213465);
}

double NNfunction_ss_cLcR::synapse0x24342e0() {
   return (neuron0x2428fa0()*0.0286771);
}

double NNfunction_ss_cLcR::synapse0x2434320() {
   return (neuron0x24292e0()*0.0248854);
}

double NNfunction_ss_cLcR::synapse0x2434360() {
   return (neuron0x2429620()*0.0903791);
}

double NNfunction_ss_cLcR::synapse0x24343a0() {
   return (neuron0x2429960()*0.0207557);
}

double NNfunction_ss_cLcR::synapse0x24343e0() {
   return (neuron0x2429ca0()*-0.0290589);
}

double NNfunction_ss_cLcR::synapse0x2434420() {
   return (neuron0x2429fe0()*0.424308);
}

double NNfunction_ss_cLcR::synapse0x2434460() {
   return (neuron0x242a320()*0.448977);
}

double NNfunction_ss_cLcR::synapse0x24344a0() {
   return (neuron0x242a660()*0.323431);
}

double NNfunction_ss_cLcR::synapse0x24344e0() {
   return (neuron0x242a9a0()*-0.0544756);
}

double NNfunction_ss_cLcR::synapse0x2434520() {
   return (neuron0x242ace0()*0.236254);
}

double NNfunction_ss_cLcR::synapse0x2434560() {
   return (neuron0x242b020()*0.357088);
}

double NNfunction_ss_cLcR::synapse0x2433ff0() {
   return (neuron0x242b360()*0.0505349);
}

double NNfunction_ss_cLcR::synapse0x2434030() {
   return (neuron0x242b8c0()*0.114262);
}

double NNfunction_ss_cLcR::synapse0x24346b0() {
   return (neuron0x242bae0()*-0.112856);
}

double NNfunction_ss_cLcR::synapse0x24346f0() {
   return (neuron0x242be20()*-0.0718297);
}

double NNfunction_ss_cLcR::synapse0x2434730() {
   return (neuron0x242c160()*0.0227772);
}

double NNfunction_ss_cLcR::synapse0x2434770() {
   return (neuron0x242c4a0()*-0.0158048);
}

double NNfunction_ss_cLcR::synapse0x24347b0() {
   return (neuron0x242c7e0()*-0.0562936);
}

double NNfunction_ss_cLcR::synapse0x24347f0() {
   return (neuron0x242cb20()*-0.0347199);
}

double NNfunction_ss_cLcR::synapse0x24349c0() {
   return (neuron0x2427f60()*0.314836);
}

double NNfunction_ss_cLcR::synapse0x243da50() {
   return (neuron0x24282a0()*-0.495051);
}

double NNfunction_ss_cLcR::synapse0x243da90() {
   return (neuron0x24285e0()*0.507072);
}

double NNfunction_ss_cLcR::synapse0x243dad0() {
   return (neuron0x2428920()*0.189936);
}

double NNfunction_ss_cLcR::synapse0x243db10() {
   return (neuron0x2428c60()*-0.134935);
}

double NNfunction_ss_cLcR::synapse0x243db50() {
   return (neuron0x2428fa0()*-0.100312);
}

double NNfunction_ss_cLcR::synapse0x243db90() {
   return (neuron0x24292e0()*0.52969);
}

double NNfunction_ss_cLcR::synapse0x243dbd0() {
   return (neuron0x2429620()*-0.399545);
}

double NNfunction_ss_cLcR::synapse0x243dc10() {
   return (neuron0x2429960()*0.0845587);
}

double NNfunction_ss_cLcR::synapse0x243dc50() {
   return (neuron0x2429ca0()*0.517121);
}

double NNfunction_ss_cLcR::synapse0x243dc90() {
   return (neuron0x2429fe0()*-0.804193);
}

double NNfunction_ss_cLcR::synapse0x243dcd0() {
   return (neuron0x242a320()*0.638816);
}

double NNfunction_ss_cLcR::synapse0x243dd10() {
   return (neuron0x242a660()*0.59986);
}

double NNfunction_ss_cLcR::synapse0x243dd50() {
   return (neuron0x242a9a0()*0.840463);
}

double NNfunction_ss_cLcR::synapse0x243dd90() {
   return (neuron0x242ace0()*0.206026);
}

double NNfunction_ss_cLcR::synapse0x243ddd0() {
   return (neuron0x242b020()*-0.665721);
}

double NNfunction_ss_cLcR::synapse0x243d8a0() {
   return (neuron0x242b360()*0.394782);
}

double NNfunction_ss_cLcR::synapse0x243d8e0() {
   return (neuron0x242b8c0()*-0.391854);
}

double NNfunction_ss_cLcR::synapse0x243df20() {
   return (neuron0x242bae0()*0.633454);
}

double NNfunction_ss_cLcR::synapse0x243df60() {
   return (neuron0x242be20()*0.0109329);
}

double NNfunction_ss_cLcR::synapse0x243dfa0() {
   return (neuron0x242c160()*-0.199271);
}

double NNfunction_ss_cLcR::synapse0x243dfe0() {
   return (neuron0x242c4a0()*0.87362);
}

double NNfunction_ss_cLcR::synapse0x243e020() {
   return (neuron0x242c7e0()*-0.0259134);
}

double NNfunction_ss_cLcR::synapse0x243e060() {
   return (neuron0x242cb20()*0.804742);
}

double NNfunction_ss_cLcR::synapse0x243e3e0() {
   return (neuron0x2427f60()*0.90225);
}

double NNfunction_ss_cLcR::synapse0x243e420() {
   return (neuron0x24282a0()*-0.114912);
}

double NNfunction_ss_cLcR::synapse0x243e460() {
   return (neuron0x24285e0()*-0.0301454);
}

double NNfunction_ss_cLcR::synapse0x243e4a0() {
   return (neuron0x2428920()*-0.222026);
}

double NNfunction_ss_cLcR::synapse0x243e4e0() {
   return (neuron0x2428c60()*0.092844);
}

double NNfunction_ss_cLcR::synapse0x243e520() {
   return (neuron0x2428fa0()*0.0468545);
}

double NNfunction_ss_cLcR::synapse0x243e560() {
   return (neuron0x24292e0()*-0.748195);
}

double NNfunction_ss_cLcR::synapse0x243e5a0() {
   return (neuron0x2429620()*0.114805);
}

double NNfunction_ss_cLcR::synapse0x243e5e0() {
   return (neuron0x2429960()*-0.15847);
}

double NNfunction_ss_cLcR::synapse0x243e620() {
   return (neuron0x2429ca0()*-0.602047);
}

double NNfunction_ss_cLcR::synapse0x243e660() {
   return (neuron0x2429fe0()*-0.594761);
}

double NNfunction_ss_cLcR::synapse0x243e6a0() {
   return (neuron0x242a320()*0.342088);
}

double NNfunction_ss_cLcR::synapse0x243e6e0() {
   return (neuron0x242a660()*-0.159591);
}

double NNfunction_ss_cLcR::synapse0x243e720() {
   return (neuron0x242a9a0()*-0.506987);
}

double NNfunction_ss_cLcR::synapse0x243e760() {
   return (neuron0x242ace0()*-0.764607);
}

double NNfunction_ss_cLcR::synapse0x243e7a0() {
   return (neuron0x242b020()*-0.436611);
}

double NNfunction_ss_cLcR::synapse0x243e230() {
   return (neuron0x242b360()*-0.626129);
}

double NNfunction_ss_cLcR::synapse0x243e270() {
   return (neuron0x242b8c0()*-0.179963);
}

double NNfunction_ss_cLcR::synapse0x243e8f0() {
   return (neuron0x242bae0()*-0.22382);
}

double NNfunction_ss_cLcR::synapse0x243e930() {
   return (neuron0x242be20()*-0.225763);
}

double NNfunction_ss_cLcR::synapse0x243e970() {
   return (neuron0x242c160()*-0.536378);
}

double NNfunction_ss_cLcR::synapse0x243e9b0() {
   return (neuron0x242c4a0()*-0.107886);
}

double NNfunction_ss_cLcR::synapse0x243e9f0() {
   return (neuron0x242c7e0()*0.479541);
}

double NNfunction_ss_cLcR::synapse0x243ea30() {
   return (neuron0x242cb20()*-0.269786);
}

double NNfunction_ss_cLcR::synapse0x243edb0() {
   return (neuron0x2427f60()*0.133911);
}

double NNfunction_ss_cLcR::synapse0x243edf0() {
   return (neuron0x24282a0()*-0.266564);
}

double NNfunction_ss_cLcR::synapse0x243ee30() {
   return (neuron0x24285e0()*0.169708);
}

double NNfunction_ss_cLcR::synapse0x243ee70() {
   return (neuron0x2428920()*-0.466714);
}

double NNfunction_ss_cLcR::synapse0x243eeb0() {
   return (neuron0x2428c60()*0.143934);
}

double NNfunction_ss_cLcR::synapse0x243eef0() {
   return (neuron0x2428fa0()*0.730026);
}

double NNfunction_ss_cLcR::synapse0x243ef30() {
   return (neuron0x24292e0()*0.696334);
}

double NNfunction_ss_cLcR::synapse0x243ef70() {
   return (neuron0x2429620()*0.338277);
}

double NNfunction_ss_cLcR::synapse0x243efb0() {
   return (neuron0x2429960()*-0.107582);
}

double NNfunction_ss_cLcR::synapse0x243eff0() {
   return (neuron0x2429ca0()*-0.194636);
}

double NNfunction_ss_cLcR::synapse0x243f030() {
   return (neuron0x2429fe0()*0.561039);
}

double NNfunction_ss_cLcR::synapse0x243f070() {
   return (neuron0x242a320()*0.0857584);
}

double NNfunction_ss_cLcR::synapse0x243f0b0() {
   return (neuron0x242a660()*-0.0777213);
}

double NNfunction_ss_cLcR::synapse0x243f0f0() {
   return (neuron0x242a9a0()*-0.0131475);
}

double NNfunction_ss_cLcR::synapse0x243f130() {
   return (neuron0x242ace0()*-0.174092);
}

double NNfunction_ss_cLcR::synapse0x243f170() {
   return (neuron0x242b020()*0.513529);
}

double NNfunction_ss_cLcR::synapse0x243ec00() {
   return (neuron0x242b360()*0.8093);
}

double NNfunction_ss_cLcR::synapse0x243ec40() {
   return (neuron0x242b8c0()*0.414923);
}

double NNfunction_ss_cLcR::synapse0x243f2c0() {
   return (neuron0x242bae0()*0.567124);
}

double NNfunction_ss_cLcR::synapse0x243f300() {
   return (neuron0x242be20()*0.201291);
}

double NNfunction_ss_cLcR::synapse0x243f340() {
   return (neuron0x242c160()*-0.285387);
}

double NNfunction_ss_cLcR::synapse0x243f380() {
   return (neuron0x242c4a0()*-0.666054);
}

double NNfunction_ss_cLcR::synapse0x243f3c0() {
   return (neuron0x242c7e0()*0.446654);
}

double NNfunction_ss_cLcR::synapse0x243f400() {
   return (neuron0x242cb20()*0.0996953);
}

double NNfunction_ss_cLcR::synapse0x243f780() {
   return (neuron0x2427f60()*-0.244373);
}

double NNfunction_ss_cLcR::synapse0x243f7c0() {
   return (neuron0x24282a0()*-0.432904);
}

double NNfunction_ss_cLcR::synapse0x243f800() {
   return (neuron0x24285e0()*0.477195);
}

double NNfunction_ss_cLcR::synapse0x243f840() {
   return (neuron0x2428920()*-1.78688);
}

double NNfunction_ss_cLcR::synapse0x243f880() {
   return (neuron0x2428c60()*0.632214);
}

double NNfunction_ss_cLcR::synapse0x243f8c0() {
   return (neuron0x2428fa0()*0.054401);
}

double NNfunction_ss_cLcR::synapse0x243f900() {
   return (neuron0x24292e0()*0.221648);
}

double NNfunction_ss_cLcR::synapse0x243f940() {
   return (neuron0x2429620()*0.0473301);
}

double NNfunction_ss_cLcR::synapse0x243f980() {
   return (neuron0x2429960()*0.448208);
}

double NNfunction_ss_cLcR::synapse0x243f9c0() {
   return (neuron0x2429ca0()*0.388026);
}

double NNfunction_ss_cLcR::synapse0x243fa00() {
   return (neuron0x2429fe0()*0.780865);
}

double NNfunction_ss_cLcR::synapse0x243fa40() {
   return (neuron0x242a320()*-0.103885);
}

double NNfunction_ss_cLcR::synapse0x243fa80() {
   return (neuron0x242a660()*-1.02164);
}

double NNfunction_ss_cLcR::synapse0x243fac0() {
   return (neuron0x242a9a0()*0.683463);
}

double NNfunction_ss_cLcR::synapse0x243fb00() {
   return (neuron0x242ace0()*0.255276);
}

double NNfunction_ss_cLcR::synapse0x243fb40() {
   return (neuron0x242b020()*0.408415);
}

double NNfunction_ss_cLcR::synapse0x243f5d0() {
   return (neuron0x242b360()*0.173127);
}

double NNfunction_ss_cLcR::synapse0x243f610() {
   return (neuron0x242b8c0()*0.135098);
}

double NNfunction_ss_cLcR::synapse0x243fc90() {
   return (neuron0x242bae0()*-0.0850717);
}

double NNfunction_ss_cLcR::synapse0x243fcd0() {
   return (neuron0x242be20()*0.543962);
}

double NNfunction_ss_cLcR::synapse0x243fd10() {
   return (neuron0x242c160()*0.388334);
}

double NNfunction_ss_cLcR::synapse0x243fd50() {
   return (neuron0x242c4a0()*-0.0343064);
}

double NNfunction_ss_cLcR::synapse0x243fd90() {
   return (neuron0x242c7e0()*0.179332);
}

double NNfunction_ss_cLcR::synapse0x243fdd0() {
   return (neuron0x242cb20()*0.265641);
}

double NNfunction_ss_cLcR::synapse0x2440150() {
   return (neuron0x2427f60()*0.616112);
}

double NNfunction_ss_cLcR::synapse0x2440190() {
   return (neuron0x24282a0()*-1.09026);
}

double NNfunction_ss_cLcR::synapse0x24401d0() {
   return (neuron0x24285e0()*-0.38028);
}

double NNfunction_ss_cLcR::synapse0x2440210() {
   return (neuron0x2428920()*-0.611346);
}

double NNfunction_ss_cLcR::synapse0x2440250() {
   return (neuron0x2428c60()*-0.481538);
}

double NNfunction_ss_cLcR::synapse0x2440290() {
   return (neuron0x2428fa0()*0.468572);
}

double NNfunction_ss_cLcR::synapse0x24402d0() {
   return (neuron0x24292e0()*-0.59872);
}

double NNfunction_ss_cLcR::synapse0x2440310() {
   return (neuron0x2429620()*-0.467561);
}

double NNfunction_ss_cLcR::synapse0x2440350() {
   return (neuron0x2429960()*-0.357397);
}

double NNfunction_ss_cLcR::synapse0x2440390() {
   return (neuron0x2429ca0()*-1.15513);
}

double NNfunction_ss_cLcR::synapse0x24403d0() {
   return (neuron0x2429fe0()*-0.174006);
}

double NNfunction_ss_cLcR::synapse0x2440410() {
   return (neuron0x242a320()*-0.414575);
}

double NNfunction_ss_cLcR::synapse0x2440450() {
   return (neuron0x242a660()*-0.401472);
}

double NNfunction_ss_cLcR::synapse0x2440490() {
   return (neuron0x242a9a0()*-0.0934495);
}

double NNfunction_ss_cLcR::synapse0x24404d0() {
   return (neuron0x242ace0()*0.015099);
}

double NNfunction_ss_cLcR::synapse0x2440510() {
   return (neuron0x242b020()*-1.02576);
}

double NNfunction_ss_cLcR::synapse0x243ffa0() {
   return (neuron0x242b360()*-0.689464);
}

double NNfunction_ss_cLcR::synapse0x243ffe0() {
   return (neuron0x242b8c0()*-0.162137);
}

double NNfunction_ss_cLcR::synapse0x2440660() {
   return (neuron0x242bae0()*0.0354321);
}

double NNfunction_ss_cLcR::synapse0x24406a0() {
   return (neuron0x242be20()*-0.310344);
}

double NNfunction_ss_cLcR::synapse0x24406e0() {
   return (neuron0x242c160()*0.117153);
}

double NNfunction_ss_cLcR::synapse0x2440720() {
   return (neuron0x242c4a0()*0.203655);
}

double NNfunction_ss_cLcR::synapse0x2440760() {
   return (neuron0x242c7e0()*-0.390505);
}

double NNfunction_ss_cLcR::synapse0x24407a0() {
   return (neuron0x242cb20()*-0.345929);
}

double NNfunction_ss_cLcR::synapse0x2440b20() {
   return (neuron0x2427f60()*0.0842198);
}

double NNfunction_ss_cLcR::synapse0x2440b60() {
   return (neuron0x24282a0()*-0.0199312);
}

double NNfunction_ss_cLcR::synapse0x2440ba0() {
   return (neuron0x24285e0()*-0.0394356);
}

double NNfunction_ss_cLcR::synapse0x2440be0() {
   return (neuron0x2428920()*0.0185846);
}

double NNfunction_ss_cLcR::synapse0x2440c20() {
   return (neuron0x2428c60()*-0.0935515);
}

double NNfunction_ss_cLcR::synapse0x2440c60() {
   return (neuron0x2428fa0()*0.0370964);
}

double NNfunction_ss_cLcR::synapse0x2440ca0() {
   return (neuron0x24292e0()*0.0208615);
}

double NNfunction_ss_cLcR::synapse0x2440ce0() {
   return (neuron0x2429620()*0.0215183);
}

double NNfunction_ss_cLcR::synapse0x2440d20() {
   return (neuron0x2429960()*0.0158857);
}

double NNfunction_ss_cLcR::synapse0x2440d60() {
   return (neuron0x2429ca0()*-0.0289549);
}

double NNfunction_ss_cLcR::synapse0x2440da0() {
   return (neuron0x2429fe0()*0.0228606);
}

double NNfunction_ss_cLcR::synapse0x2440de0() {
   return (neuron0x242a320()*0.0335577);
}

double NNfunction_ss_cLcR::synapse0x2440e20() {
   return (neuron0x242a660()*0.509206);
}

double NNfunction_ss_cLcR::synapse0x2440e60() {
   return (neuron0x242a9a0()*0.0701577);
}

double NNfunction_ss_cLcR::synapse0x2440ea0() {
   return (neuron0x242ace0()*0.0115892);
}

double NNfunction_ss_cLcR::synapse0x2440ee0() {
   return (neuron0x242b020()*0.516282);
}

double NNfunction_ss_cLcR::synapse0x2440970() {
   return (neuron0x242b360()*-0.0263242);
}

double NNfunction_ss_cLcR::synapse0x24409b0() {
   return (neuron0x242b8c0()*0.0100861);
}

double NNfunction_ss_cLcR::synapse0x2441030() {
   return (neuron0x242bae0()*-0.0139755);
}

double NNfunction_ss_cLcR::synapse0x2441070() {
   return (neuron0x242be20()*-0.0205354);
}

double NNfunction_ss_cLcR::synapse0x24410b0() {
   return (neuron0x242c160()*0.00649967);
}

double NNfunction_ss_cLcR::synapse0x24410f0() {
   return (neuron0x242c4a0()*0.00610812);
}

double NNfunction_ss_cLcR::synapse0x2441130() {
   return (neuron0x242c7e0()*-0.0287747);
}

double NNfunction_ss_cLcR::synapse0x2441170() {
   return (neuron0x242cb20()*-0.0153451);
}

double NNfunction_ss_cLcR::synapse0x24414f0() {
   return (neuron0x2427f60()*0.0918205);
}

double NNfunction_ss_cLcR::synapse0x2441530() {
   return (neuron0x24282a0()*0.63741);
}

double NNfunction_ss_cLcR::synapse0x2441570() {
   return (neuron0x24285e0()*0.159398);
}

double NNfunction_ss_cLcR::synapse0x24415b0() {
   return (neuron0x2428920()*-0.0148123);
}

double NNfunction_ss_cLcR::synapse0x24415f0() {
   return (neuron0x2428c60()*0.0639919);
}

double NNfunction_ss_cLcR::synapse0x2441630() {
   return (neuron0x2428fa0()*0.236653);
}

double NNfunction_ss_cLcR::synapse0x2441670() {
   return (neuron0x24292e0()*0.815396);
}

double NNfunction_ss_cLcR::synapse0x24416b0() {
   return (neuron0x2429620()*0.645735);
}

double NNfunction_ss_cLcR::synapse0x24416f0() {
   return (neuron0x2429960()*0.347268);
}

double NNfunction_ss_cLcR::synapse0x2441730() {
   return (neuron0x2429ca0()*-0.18842);
}

double NNfunction_ss_cLcR::synapse0x2441770() {
   return (neuron0x2429fe0()*-0.397661);
}

double NNfunction_ss_cLcR::synapse0x24417b0() {
   return (neuron0x242a320()*0.3711);
}

double NNfunction_ss_cLcR::synapse0x24417f0() {
   return (neuron0x242a660()*0.676945);
}

double NNfunction_ss_cLcR::synapse0x2441830() {
   return (neuron0x242a9a0()*0.367566);
}

double NNfunction_ss_cLcR::synapse0x2441870() {
   return (neuron0x242ace0()*-0.599459);
}

double NNfunction_ss_cLcR::synapse0x24418b0() {
   return (neuron0x242b020()*-0.556272);
}

double NNfunction_ss_cLcR::synapse0x2441340() {
   return (neuron0x242b360()*-0.628014);
}

double NNfunction_ss_cLcR::synapse0x2441380() {
   return (neuron0x242b8c0()*0.0473944);
}

double NNfunction_ss_cLcR::synapse0x2441a00() {
   return (neuron0x242bae0()*-0.101352);
}

double NNfunction_ss_cLcR::synapse0x2441a40() {
   return (neuron0x242be20()*0.656239);
}

double NNfunction_ss_cLcR::synapse0x2441a80() {
   return (neuron0x242c160()*0.0119821);
}

double NNfunction_ss_cLcR::synapse0x2441ac0() {
   return (neuron0x242c4a0()*-1.21627);
}

double NNfunction_ss_cLcR::synapse0x2441b00() {
   return (neuron0x242c7e0()*-0.585967);
}

double NNfunction_ss_cLcR::synapse0x2441b40() {
   return (neuron0x242cb20()*-0.595599);
}

double NNfunction_ss_cLcR::synapse0x2441ec0() {
   return (neuron0x2427f60()*0.474727);
}

double NNfunction_ss_cLcR::synapse0x2441f00() {
   return (neuron0x24282a0()*-0.0468842);
}

double NNfunction_ss_cLcR::synapse0x2441f40() {
   return (neuron0x24285e0()*-0.763904);
}

double NNfunction_ss_cLcR::synapse0x2441f80() {
   return (neuron0x2428920()*0.191631);
}

double NNfunction_ss_cLcR::synapse0x2441fc0() {
   return (neuron0x2428c60()*0.409615);
}

double NNfunction_ss_cLcR::synapse0x2442000() {
   return (neuron0x2428fa0()*-0.849575);
}

double NNfunction_ss_cLcR::synapse0x2442040() {
   return (neuron0x24292e0()*0.147826);
}

double NNfunction_ss_cLcR::synapse0x2442080() {
   return (neuron0x2429620()*-0.959893);
}

double NNfunction_ss_cLcR::synapse0x24420c0() {
   return (neuron0x2429960()*0.00778155);
}

double NNfunction_ss_cLcR::synapse0x2442100() {
   return (neuron0x2429ca0()*-0.308825);
}

double NNfunction_ss_cLcR::synapse0x2442140() {
   return (neuron0x2429fe0()*0.011301);
}

double NNfunction_ss_cLcR::synapse0x2442180() {
   return (neuron0x242a320()*-0.275797);
}

double NNfunction_ss_cLcR::synapse0x24421c0() {
   return (neuron0x242a660()*-1.1386);
}

double NNfunction_ss_cLcR::synapse0x2442200() {
   return (neuron0x242a9a0()*1.03358);
}

double NNfunction_ss_cLcR::synapse0x2442240() {
   return (neuron0x242ace0()*-0.583547);
}

double NNfunction_ss_cLcR::synapse0x2442280() {
   return (neuron0x242b020()*0.719901);
}

double NNfunction_ss_cLcR::synapse0x2441d10() {
   return (neuron0x242b360()*0.59879);
}

double NNfunction_ss_cLcR::synapse0x2441d50() {
   return (neuron0x242b8c0()*0.446405);
}

double NNfunction_ss_cLcR::synapse0x24423d0() {
   return (neuron0x242bae0()*-0.260705);
}

double NNfunction_ss_cLcR::synapse0x2442410() {
   return (neuron0x242be20()*0.413463);
}

double NNfunction_ss_cLcR::synapse0x2442450() {
   return (neuron0x242c160()*-1.01064);
}

double NNfunction_ss_cLcR::synapse0x2442490() {
   return (neuron0x242c4a0()*0.0516012);
}

double NNfunction_ss_cLcR::synapse0x24424d0() {
   return (neuron0x242c7e0()*1.13967);
}

double NNfunction_ss_cLcR::synapse0x2442510() {
   return (neuron0x242cb20()*-0.299923);
}

double NNfunction_ss_cLcR::synapse0x2442890() {
   return (neuron0x2427f60()*0.281568);
}

double NNfunction_ss_cLcR::synapse0x2436e60() {
   return (neuron0x24282a0()*0.332535);
}

double NNfunction_ss_cLcR::synapse0x2436ea0() {
   return (neuron0x24285e0()*0.317111);
}

double NNfunction_ss_cLcR::synapse0x2436ee0() {
   return (neuron0x2428920()*-0.513426);
}

double NNfunction_ss_cLcR::synapse0x2437130() {
   return (neuron0x2428c60()*0.00888532);
}

double NNfunction_ss_cLcR::synapse0x2437170() {
   return (neuron0x2428fa0()*-0.539807);
}

double NNfunction_ss_cLcR::synapse0x24371b0() {
   return (neuron0x24292e0()*-1.09718);
}

double NNfunction_ss_cLcR::synapse0x2437400() {
   return (neuron0x2429620()*-0.0198474);
}

double NNfunction_ss_cLcR::synapse0x2437440() {
   return (neuron0x2429960()*-0.600284);
}

double NNfunction_ss_cLcR::synapse0x2437690() {
   return (neuron0x2429ca0()*-0.16228);
}

double NNfunction_ss_cLcR::synapse0x24376d0() {
   return (neuron0x2429fe0()*-0.23793);
}

double NNfunction_ss_cLcR::synapse0x2437710() {
   return (neuron0x242a320()*2.01927);
}

double NNfunction_ss_cLcR::synapse0x2437960() {
   return (neuron0x242a660()*0.657308);
}

double NNfunction_ss_cLcR::synapse0x24379a0() {
   return (neuron0x242a9a0()*-0.197715);
}

double NNfunction_ss_cLcR::synapse0x2437bf0() {
   return (neuron0x242ace0()*0.165779);
}

double NNfunction_ss_cLcR::synapse0x2437c30() {
   return (neuron0x242b020()*-0.0912099);
}

double NNfunction_ss_cLcR::synapse0x24426e0() {
   return (neuron0x242b360()*0.26138);
}

double NNfunction_ss_cLcR::synapse0x2442720() {
   return (neuron0x242b8c0()*-0.204061);
}

double NNfunction_ss_cLcR::synapse0x2437d80() {
   return (neuron0x242bae0()*0.0329889);
}

double NNfunction_ss_cLcR::synapse0x2438290() {
   return (neuron0x242be20()*-0.025146);
}

double NNfunction_ss_cLcR::synapse0x24382d0() {
   return (neuron0x242c160()*-0.0928477);
}

double NNfunction_ss_cLcR::synapse0x2438310() {
   return (neuron0x242c4a0()*0.128051);
}

double NNfunction_ss_cLcR::synapse0x2438560() {
   return (neuron0x242c7e0()*0.478585);
}

double NNfunction_ss_cLcR::synapse0x24385a0() {
   return (neuron0x242cb20()*-0.684184);
}

double NNfunction_ss_cLcR::synapse0x2437e50() {
   return (neuron0x2427f60()*-0.0617105);
}

double NNfunction_ss_cLcR::synapse0x2437e90() {
   return (neuron0x24282a0()*0.575984);
}

double NNfunction_ss_cLcR::synapse0x2437ed0() {
   return (neuron0x24285e0()*0.368658);
}

double NNfunction_ss_cLcR::synapse0x2437f10() {
   return (neuron0x2428920()*-0.815222);
}

double NNfunction_ss_cLcR::synapse0x2438890() {
   return (neuron0x2428c60()*0.15332);
}

double NNfunction_ss_cLcR::synapse0x2444be0() {
   return (neuron0x2428fa0()*0.130657);
}

double NNfunction_ss_cLcR::synapse0x2444c20() {
   return (neuron0x24292e0()*0.111939);
}

double NNfunction_ss_cLcR::synapse0x2444c60() {
   return (neuron0x2429620()*-0.0958054);
}

double NNfunction_ss_cLcR::synapse0x2444ca0() {
   return (neuron0x2429960()*-0.098098);
}

double NNfunction_ss_cLcR::synapse0x2444ce0() {
   return (neuron0x2429ca0()*-0.236394);
}

double NNfunction_ss_cLcR::synapse0x2444d20() {
   return (neuron0x2429fe0()*0.173403);
}

double NNfunction_ss_cLcR::synapse0x2444d60() {
   return (neuron0x242a320()*-0.267336);
}

double NNfunction_ss_cLcR::synapse0x2444da0() {
   return (neuron0x242a660()*0.283976);
}

double NNfunction_ss_cLcR::synapse0x2444de0() {
   return (neuron0x242a9a0()*0.0370669);
}

double NNfunction_ss_cLcR::synapse0x2444e20() {
   return (neuron0x242ace0()*-0.186427);
}

double NNfunction_ss_cLcR::synapse0x2444e60() {
   return (neuron0x242b020()*0.248825);
}

double NNfunction_ss_cLcR::synapse0x2438770() {
   return (neuron0x242b360()*-0.0446037);
}

double NNfunction_ss_cLcR::synapse0x24387b0() {
   return (neuron0x242b8c0()*-0.113128);
}

double NNfunction_ss_cLcR::synapse0x2444fb0() {
   return (neuron0x242bae0()*-0.205908);
}

double NNfunction_ss_cLcR::synapse0x2444ff0() {
   return (neuron0x242be20()*-0.290381);
}

double NNfunction_ss_cLcR::synapse0x2445030() {
   return (neuron0x242c160()*-0.20798);
}

double NNfunction_ss_cLcR::synapse0x2445070() {
   return (neuron0x242c4a0()*0.0725079);
}

double NNfunction_ss_cLcR::synapse0x24450b0() {
   return (neuron0x242c7e0()*0.102942);
}

double NNfunction_ss_cLcR::synapse0x24450f0() {
   return (neuron0x242cb20()*0.365461);
}

double NNfunction_ss_cLcR::synapse0x2445470() {
   return (neuron0x2427f60()*1.2527);
}

double NNfunction_ss_cLcR::synapse0x24454b0() {
   return (neuron0x24282a0()*0.00588591);
}

double NNfunction_ss_cLcR::synapse0x24454f0() {
   return (neuron0x24285e0()*-0.74402);
}

double NNfunction_ss_cLcR::synapse0x2445530() {
   return (neuron0x2428920()*0.186644);
}

double NNfunction_ss_cLcR::synapse0x2445570() {
   return (neuron0x2428c60()*0.0417553);
}

double NNfunction_ss_cLcR::synapse0x24455b0() {
   return (neuron0x2428fa0()*-0.0822527);
}

double NNfunction_ss_cLcR::synapse0x24455f0() {
   return (neuron0x24292e0()*0.585573);
}

double NNfunction_ss_cLcR::synapse0x2445630() {
   return (neuron0x2429620()*-0.176205);
}

double NNfunction_ss_cLcR::synapse0x2445670() {
   return (neuron0x2429960()*-0.118627);
}

double NNfunction_ss_cLcR::synapse0x24456b0() {
   return (neuron0x2429ca0()*-0.569129);
}

double NNfunction_ss_cLcR::synapse0x24456f0() {
   return (neuron0x2429fe0()*-0.359489);
}

double NNfunction_ss_cLcR::synapse0x2445730() {
   return (neuron0x242a320()*-0.34769);
}

double NNfunction_ss_cLcR::synapse0x2445770() {
   return (neuron0x242a660()*-1.44906);
}

double NNfunction_ss_cLcR::synapse0x24457b0() {
   return (neuron0x242a9a0()*0.341916);
}

double NNfunction_ss_cLcR::synapse0x24457f0() {
   return (neuron0x242ace0()*0.586154);
}

double NNfunction_ss_cLcR::synapse0x2445830() {
   return (neuron0x242b020()*0.771251);
}

double NNfunction_ss_cLcR::synapse0x24452c0() {
   return (neuron0x242b360()*-0.0595484);
}

double NNfunction_ss_cLcR::synapse0x2445300() {
   return (neuron0x242b8c0()*0.363679);
}

double NNfunction_ss_cLcR::synapse0x2445980() {
   return (neuron0x242bae0()*0.373274);
}

double NNfunction_ss_cLcR::synapse0x24459c0() {
   return (neuron0x242be20()*-0.499043);
}

double NNfunction_ss_cLcR::synapse0x2445a00() {
   return (neuron0x242c160()*0.483826);
}

double NNfunction_ss_cLcR::synapse0x2445a40() {
   return (neuron0x242c4a0()*-0.834633);
}

double NNfunction_ss_cLcR::synapse0x2445a80() {
   return (neuron0x242c7e0()*0.567688);
}

double NNfunction_ss_cLcR::synapse0x2445ac0() {
   return (neuron0x242cb20()*-0.725732);
}

double NNfunction_ss_cLcR::synapse0x2445e40() {
   return (neuron0x2427f60()*-0.426524);
}

double NNfunction_ss_cLcR::synapse0x2445e80() {
   return (neuron0x24282a0()*0.293319);
}

double NNfunction_ss_cLcR::synapse0x2445ec0() {
   return (neuron0x24285e0()*0.971925);
}

double NNfunction_ss_cLcR::synapse0x2445f00() {
   return (neuron0x2428920()*-0.075259);
}

double NNfunction_ss_cLcR::synapse0x2445f40() {
   return (neuron0x2428c60()*0.0776591);
}

double NNfunction_ss_cLcR::synapse0x2445f80() {
   return (neuron0x2428fa0()*-0.768912);
}

double NNfunction_ss_cLcR::synapse0x2445fc0() {
   return (neuron0x24292e0()*-0.43472);
}

double NNfunction_ss_cLcR::synapse0x2446000() {
   return (neuron0x2429620()*-0.597769);
}

double NNfunction_ss_cLcR::synapse0x2446040() {
   return (neuron0x2429960()*-0.0216928);
}

double NNfunction_ss_cLcR::synapse0x2446080() {
   return (neuron0x2429ca0()*0.640573);
}

double NNfunction_ss_cLcR::synapse0x24460c0() {
   return (neuron0x2429fe0()*-0.62855);
}

double NNfunction_ss_cLcR::synapse0x2446100() {
   return (neuron0x242a320()*-0.68295);
}

double NNfunction_ss_cLcR::synapse0x2446140() {
   return (neuron0x242a660()*-0.0701874);
}

double NNfunction_ss_cLcR::synapse0x2446180() {
   return (neuron0x242a9a0()*-0.531591);
}

double NNfunction_ss_cLcR::synapse0x24461c0() {
   return (neuron0x242ace0()*0.487791);
}

double NNfunction_ss_cLcR::synapse0x2446200() {
   return (neuron0x242b020()*-0.648881);
}

double NNfunction_ss_cLcR::synapse0x2445c90() {
   return (neuron0x242b360()*-0.65644);
}

double NNfunction_ss_cLcR::synapse0x2445cd0() {
   return (neuron0x242b8c0()*0.76076);
}

double NNfunction_ss_cLcR::synapse0x2446350() {
   return (neuron0x242bae0()*-0.696472);
}

double NNfunction_ss_cLcR::synapse0x2446390() {
   return (neuron0x242be20()*-0.548553);
}

double NNfunction_ss_cLcR::synapse0x24463d0() {
   return (neuron0x242c160()*-0.00475921);
}

double NNfunction_ss_cLcR::synapse0x2446410() {
   return (neuron0x242c4a0()*0.140052);
}

double NNfunction_ss_cLcR::synapse0x2446450() {
   return (neuron0x242c7e0()*0.644429);
}

double NNfunction_ss_cLcR::synapse0x2446490() {
   return (neuron0x242cb20()*0.585432);
}

double NNfunction_ss_cLcR::synapse0x2446810() {
   return (neuron0x2427f60()*0.0389495);
}

double NNfunction_ss_cLcR::synapse0x2446850() {
   return (neuron0x24282a0()*0.0589453);
}

double NNfunction_ss_cLcR::synapse0x2446890() {
   return (neuron0x24285e0()*0.308653);
}

double NNfunction_ss_cLcR::synapse0x24468d0() {
   return (neuron0x2428920()*0.24515);
}

double NNfunction_ss_cLcR::synapse0x2446910() {
   return (neuron0x2428c60()*0.1258);
}

double NNfunction_ss_cLcR::synapse0x2446950() {
   return (neuron0x2428fa0()*0.0737172);
}

double NNfunction_ss_cLcR::synapse0x2446990() {
   return (neuron0x24292e0()*0.0811386);
}

double NNfunction_ss_cLcR::synapse0x24469d0() {
   return (neuron0x2429620()*0.0814236);
}

double NNfunction_ss_cLcR::synapse0x2446a10() {
   return (neuron0x2429960()*0.0798165);
}

double NNfunction_ss_cLcR::synapse0x2446a50() {
   return (neuron0x2429ca0()*0.0501543);
}

double NNfunction_ss_cLcR::synapse0x2446a90() {
   return (neuron0x2429fe0()*0.162571);
}

double NNfunction_ss_cLcR::synapse0x2446ad0() {
   return (neuron0x242a320()*-0.606237);
}

double NNfunction_ss_cLcR::synapse0x2446b10() {
   return (neuron0x242a660()*0.0265009);
}

double NNfunction_ss_cLcR::synapse0x2446b50() {
   return (neuron0x242a9a0()*0.0486081);
}

double NNfunction_ss_cLcR::synapse0x2446b90() {
   return (neuron0x242ace0()*-0.210254);
}

double NNfunction_ss_cLcR::synapse0x2446bd0() {
   return (neuron0x242b020()*-0.00794095);
}

double NNfunction_ss_cLcR::synapse0x2446660() {
   return (neuron0x242b360()*0.284373);
}

double NNfunction_ss_cLcR::synapse0x24466a0() {
   return (neuron0x242b8c0()*-0.235385);
}

double NNfunction_ss_cLcR::synapse0x2446d20() {
   return (neuron0x242bae0()*-0.489465);
}

double NNfunction_ss_cLcR::synapse0x2446d60() {
   return (neuron0x242be20()*0.119779);
}

double NNfunction_ss_cLcR::synapse0x2446da0() {
   return (neuron0x242c160()*0.0686253);
}

double NNfunction_ss_cLcR::synapse0x2446de0() {
   return (neuron0x242c4a0()*0.00863164);
}

double NNfunction_ss_cLcR::synapse0x2446e20() {
   return (neuron0x242c7e0()*-0.0850947);
}

double NNfunction_ss_cLcR::synapse0x2446e60() {
   return (neuron0x242cb20()*-0.119867);
}

double NNfunction_ss_cLcR::synapse0x24471e0() {
   return (neuron0x2427f60()*0.521129);
}

double NNfunction_ss_cLcR::synapse0x2447220() {
   return (neuron0x24282a0()*0.55926);
}

double NNfunction_ss_cLcR::synapse0x2447260() {
   return (neuron0x24285e0()*-0.422484);
}

double NNfunction_ss_cLcR::synapse0x24472a0() {
   return (neuron0x2428920()*-0.572362);
}

double NNfunction_ss_cLcR::synapse0x24472e0() {
   return (neuron0x2428c60()*-1.26828);
}

double NNfunction_ss_cLcR::synapse0x2447320() {
   return (neuron0x2428fa0()*-0.109719);
}

double NNfunction_ss_cLcR::synapse0x2447360() {
   return (neuron0x24292e0()*0.259687);
}

double NNfunction_ss_cLcR::synapse0x24473a0() {
   return (neuron0x2429620()*0.246533);
}

double NNfunction_ss_cLcR::synapse0x24473e0() {
   return (neuron0x2429960()*-0.516366);
}

double NNfunction_ss_cLcR::synapse0x2447420() {
   return (neuron0x2429ca0()*0.383763);
}

double NNfunction_ss_cLcR::synapse0x2447460() {
   return (neuron0x2429fe0()*0.0949247);
}

double NNfunction_ss_cLcR::synapse0x24474a0() {
   return (neuron0x242a320()*-0.582576);
}

double NNfunction_ss_cLcR::synapse0x24474e0() {
   return (neuron0x242a660()*-0.493499);
}

double NNfunction_ss_cLcR::synapse0x2447520() {
   return (neuron0x242a9a0()*0.104763);
}

double NNfunction_ss_cLcR::synapse0x2447560() {
   return (neuron0x242ace0()*0.377433);
}

double NNfunction_ss_cLcR::synapse0x24475a0() {
   return (neuron0x242b020()*0.0825757);
}

double NNfunction_ss_cLcR::synapse0x2447030() {
   return (neuron0x242b360()*0.0366014);
}

double NNfunction_ss_cLcR::synapse0x2447070() {
   return (neuron0x242b8c0()*0.437777);
}

double NNfunction_ss_cLcR::synapse0x24476f0() {
   return (neuron0x242bae0()*0.252901);
}

double NNfunction_ss_cLcR::synapse0x2447730() {
   return (neuron0x242be20()*0.740168);
}

double NNfunction_ss_cLcR::synapse0x2447770() {
   return (neuron0x242c160()*-0.632234);
}

double NNfunction_ss_cLcR::synapse0x24477b0() {
   return (neuron0x242c4a0()*0.401169);
}

double NNfunction_ss_cLcR::synapse0x24477f0() {
   return (neuron0x242c7e0()*-0.358565);
}

double NNfunction_ss_cLcR::synapse0x2447830() {
   return (neuron0x242cb20()*0.0835595);
}

double NNfunction_ss_cLcR::synapse0x2447bb0() {
   return (neuron0x2427f60()*-0.144027);
}

double NNfunction_ss_cLcR::synapse0x2447bf0() {
   return (neuron0x24282a0()*-0.105187);
}

double NNfunction_ss_cLcR::synapse0x2447c30() {
   return (neuron0x24285e0()*-0.574744);
}

double NNfunction_ss_cLcR::synapse0x2447c70() {
   return (neuron0x2428920()*1.09502);
}

double NNfunction_ss_cLcR::synapse0x2447cb0() {
   return (neuron0x2428c60()*0.167846);
}

double NNfunction_ss_cLcR::synapse0x2447cf0() {
   return (neuron0x2428fa0()*-0.0212695);
}

double NNfunction_ss_cLcR::synapse0x2447d30() {
   return (neuron0x24292e0()*0.250226);
}

double NNfunction_ss_cLcR::synapse0x2447d70() {
   return (neuron0x2429620()*0.179528);
}

double NNfunction_ss_cLcR::synapse0x2447db0() {
   return (neuron0x2429960()*-0.346833);
}

double NNfunction_ss_cLcR::synapse0x2447df0() {
   return (neuron0x2429ca0()*-0.251564);
}

double NNfunction_ss_cLcR::synapse0x2447e30() {
   return (neuron0x2429fe0()*-0.582813);
}

double NNfunction_ss_cLcR::synapse0x2447e70() {
   return (neuron0x242a320()*0.271253);
}

double NNfunction_ss_cLcR::synapse0x2447eb0() {
   return (neuron0x242a660()*-0.615499);
}

double NNfunction_ss_cLcR::synapse0x2447ef0() {
   return (neuron0x242a9a0()*-0.0297004);
}

double NNfunction_ss_cLcR::synapse0x2447f30() {
   return (neuron0x242ace0()*0.111769);
}

double NNfunction_ss_cLcR::synapse0x2447f70() {
   return (neuron0x242b020()*1.10407);
}

double NNfunction_ss_cLcR::synapse0x2447a00() {
   return (neuron0x242b360()*-0.414053);
}

double NNfunction_ss_cLcR::synapse0x2447a40() {
   return (neuron0x242b8c0()*-0.471299);
}

double NNfunction_ss_cLcR::synapse0x24480c0() {
   return (neuron0x242bae0()*0.777326);
}

double NNfunction_ss_cLcR::synapse0x2448100() {
   return (neuron0x242be20()*-0.086488);
}

double NNfunction_ss_cLcR::synapse0x2448140() {
   return (neuron0x242c160()*0.10584);
}

double NNfunction_ss_cLcR::synapse0x2448180() {
   return (neuron0x242c4a0()*0.111364);
}

double NNfunction_ss_cLcR::synapse0x24481c0() {
   return (neuron0x242c7e0()*0.353469);
}

double NNfunction_ss_cLcR::synapse0x2448200() {
   return (neuron0x242cb20()*0.254596);
}

double NNfunction_ss_cLcR::synapse0x2448580() {
   return (neuron0x2427f60()*0.00275409);
}

double NNfunction_ss_cLcR::synapse0x24485c0() {
   return (neuron0x24282a0()*-0.175904);
}

double NNfunction_ss_cLcR::synapse0x2448600() {
   return (neuron0x24285e0()*0.652387);
}

double NNfunction_ss_cLcR::synapse0x2448640() {
   return (neuron0x2428920()*-0.690119);
}

double NNfunction_ss_cLcR::synapse0x2448680() {
   return (neuron0x2428c60()*-0.0414476);
}

double NNfunction_ss_cLcR::synapse0x24486c0() {
   return (neuron0x2428fa0()*0.506152);
}

double NNfunction_ss_cLcR::synapse0x2448700() {
   return (neuron0x24292e0()*0.13642);
}

double NNfunction_ss_cLcR::synapse0x2448740() {
   return (neuron0x2429620()*-0.260105);
}

double NNfunction_ss_cLcR::synapse0x2448780() {
   return (neuron0x2429960()*-0.308684);
}

double NNfunction_ss_cLcR::synapse0x24487c0() {
   return (neuron0x2429ca0()*-0.118324);
}

double NNfunction_ss_cLcR::synapse0x2448800() {
   return (neuron0x2429fe0()*0.464649);
}

double NNfunction_ss_cLcR::synapse0x2448840() {
   return (neuron0x242a320()*-0.0548979);
}

double NNfunction_ss_cLcR::synapse0x2448880() {
   return (neuron0x242a660()*-1.22846);
}

double NNfunction_ss_cLcR::synapse0x24488c0() {
   return (neuron0x242a9a0()*0.229312);
}

double NNfunction_ss_cLcR::synapse0x2448900() {
   return (neuron0x242ace0()*0.155348);
}

double NNfunction_ss_cLcR::synapse0x2448940() {
   return (neuron0x242b020()*0.271479);
}

double NNfunction_ss_cLcR::synapse0x24483d0() {
   return (neuron0x242b360()*0.409652);
}

double NNfunction_ss_cLcR::synapse0x2448410() {
   return (neuron0x242b8c0()*-0.0571473);
}

double NNfunction_ss_cLcR::synapse0x2448a90() {
   return (neuron0x242bae0()*0.131565);
}

double NNfunction_ss_cLcR::synapse0x2448ad0() {
   return (neuron0x242be20()*0.059547);
}

double NNfunction_ss_cLcR::synapse0x2448b10() {
   return (neuron0x242c160()*-0.170781);
}

double NNfunction_ss_cLcR::synapse0x2448b50() {
   return (neuron0x242c4a0()*0.35536);
}

double NNfunction_ss_cLcR::synapse0x2448b90() {
   return (neuron0x242c7e0()*0.0963712);
}

double NNfunction_ss_cLcR::synapse0x2448bd0() {
   return (neuron0x242cb20()*0.000483892);
}

double NNfunction_ss_cLcR::synapse0x2448f50() {
   return (neuron0x2427f60()*0.0860941);
}

double NNfunction_ss_cLcR::synapse0x2448f90() {
   return (neuron0x24282a0()*0.0399316);
}

double NNfunction_ss_cLcR::synapse0x2448fd0() {
   return (neuron0x24285e0()*-0.210839);
}

double NNfunction_ss_cLcR::synapse0x2449010() {
   return (neuron0x2428920()*0.0766043);
}

double NNfunction_ss_cLcR::synapse0x2449050() {
   return (neuron0x2428c60()*-0.304521);
}

double NNfunction_ss_cLcR::synapse0x2449090() {
   return (neuron0x2428fa0()*0.152758);
}

double NNfunction_ss_cLcR::synapse0x24490d0() {
   return (neuron0x24292e0()*-0.515445);
}

double NNfunction_ss_cLcR::synapse0x2449110() {
   return (neuron0x2429620()*-0.677137);
}

double NNfunction_ss_cLcR::synapse0x2449150() {
   return (neuron0x2429960()*-0.137974);
}

double NNfunction_ss_cLcR::synapse0x2449190() {
   return (neuron0x2429ca0()*-0.15898);
}

double NNfunction_ss_cLcR::synapse0x24491d0() {
   return (neuron0x2429fe0()*-0.481913);
}

double NNfunction_ss_cLcR::synapse0x2449210() {
   return (neuron0x242a320()*-0.0225687);
}

double NNfunction_ss_cLcR::synapse0x2449250() {
   return (neuron0x242a660()*-1.12444);
}

double NNfunction_ss_cLcR::synapse0x2449290() {
   return (neuron0x242a9a0()*-0.267157);
}

double NNfunction_ss_cLcR::synapse0x24492d0() {
   return (neuron0x242ace0()*-0.0580491);
}

double NNfunction_ss_cLcR::synapse0x2449310() {
   return (neuron0x242b020()*0.93368);
}

double NNfunction_ss_cLcR::synapse0x2448da0() {
   return (neuron0x242b360()*0.0869188);
}

double NNfunction_ss_cLcR::synapse0x2448de0() {
   return (neuron0x242b8c0()*-0.0891965);
}

double NNfunction_ss_cLcR::synapse0x2449460() {
   return (neuron0x242bae0()*0.139132);
}

double NNfunction_ss_cLcR::synapse0x24494a0() {
   return (neuron0x242be20()*-0.139014);
}

double NNfunction_ss_cLcR::synapse0x24494e0() {
   return (neuron0x242c160()*-0.248004);
}

double NNfunction_ss_cLcR::synapse0x2449520() {
   return (neuron0x242c4a0()*0.0898531);
}

double NNfunction_ss_cLcR::synapse0x2449560() {
   return (neuron0x242c7e0()*-0.20522);
}

double NNfunction_ss_cLcR::synapse0x24495a0() {
   return (neuron0x242cb20()*-0.0703096);
}

double NNfunction_ss_cLcR::synapse0x2432050() {
   return (neuron0x2427f60()*0.0528118);
}

double NNfunction_ss_cLcR::synapse0x2432090() {
   return (neuron0x24282a0()*-0.0941401);
}

double NNfunction_ss_cLcR::synapse0x24320d0() {
   return (neuron0x24285e0()*0.499736);
}

double NNfunction_ss_cLcR::synapse0x2432110() {
   return (neuron0x2428920()*-0.428412);
}

double NNfunction_ss_cLcR::synapse0x2432150() {
   return (neuron0x2428c60()*0.350058);
}

double NNfunction_ss_cLcR::synapse0x2432190() {
   return (neuron0x2428fa0()*0.19435);
}

double NNfunction_ss_cLcR::synapse0x24321d0() {
   return (neuron0x24292e0()*-0.343465);
}

double NNfunction_ss_cLcR::synapse0x2432210() {
   return (neuron0x2429620()*0.588974);
}

double NNfunction_ss_cLcR::synapse0x2449d30() {
   return (neuron0x2429960()*0.348707);
}

double NNfunction_ss_cLcR::synapse0x2449d70() {
   return (neuron0x2429ca0()*0.725928);
}

double NNfunction_ss_cLcR::synapse0x2449db0() {
   return (neuron0x2429fe0()*0.856129);
}

double NNfunction_ss_cLcR::synapse0x2449df0() {
   return (neuron0x242a320()*-0.258066);
}

double NNfunction_ss_cLcR::synapse0x2449e30() {
   return (neuron0x242a660()*0.887055);
}

double NNfunction_ss_cLcR::synapse0x2449e70() {
   return (neuron0x242a9a0()*-0.361834);
}

double NNfunction_ss_cLcR::synapse0x2449eb0() {
   return (neuron0x242ace0()*-0.902626);
}

double NNfunction_ss_cLcR::synapse0x2449ef0() {
   return (neuron0x242b020()*0.797877);
}

double NNfunction_ss_cLcR::synapse0x2449770() {
   return (neuron0x242b360()*0.644445);
}

double NNfunction_ss_cLcR::synapse0x24497b0() {
   return (neuron0x242b8c0()*-0.624393);
}

double NNfunction_ss_cLcR::synapse0x244a040() {
   return (neuron0x242bae0()*0.472871);
}

double NNfunction_ss_cLcR::synapse0x244a080() {
   return (neuron0x242be20()*-0.282284);
}

double NNfunction_ss_cLcR::synapse0x244a0c0() {
   return (neuron0x242c160()*0.0604778);
}

double NNfunction_ss_cLcR::synapse0x244a100() {
   return (neuron0x242c4a0()*0.704551);
}

double NNfunction_ss_cLcR::synapse0x244a140() {
   return (neuron0x242c7e0()*0.255288);
}

double NNfunction_ss_cLcR::synapse0x244a180() {
   return (neuron0x242cb20()*0.155301);
}

double NNfunction_ss_cLcR::synapse0x244a500() {
   return (neuron0x2427f60()*0.0313029);
}

double NNfunction_ss_cLcR::synapse0x244a540() {
   return (neuron0x24282a0()*-0.0224927);
}

double NNfunction_ss_cLcR::synapse0x244a580() {
   return (neuron0x24285e0()*0.121143);
}

double NNfunction_ss_cLcR::synapse0x244a5c0() {
   return (neuron0x2428920()*0.479368);
}

double NNfunction_ss_cLcR::synapse0x244a600() {
   return (neuron0x2428c60()*0.0259578);
}

double NNfunction_ss_cLcR::synapse0x244a640() {
   return (neuron0x2428fa0()*0.064137);
}

double NNfunction_ss_cLcR::synapse0x244a680() {
   return (neuron0x24292e0()*0.0599403);
}

double NNfunction_ss_cLcR::synapse0x244a6c0() {
   return (neuron0x2429620()*0.0329118);
}

double NNfunction_ss_cLcR::synapse0x244a700() {
   return (neuron0x2429960()*0.0398393);
}

double NNfunction_ss_cLcR::synapse0x244a740() {
   return (neuron0x2429ca0()*0.0577449);
}

double NNfunction_ss_cLcR::synapse0x244a780() {
   return (neuron0x2429fe0()*0.0427363);
}

double NNfunction_ss_cLcR::synapse0x244a7c0() {
   return (neuron0x242a320()*0.0481759);
}

double NNfunction_ss_cLcR::synapse0x244a800() {
   return (neuron0x242a660()*-0.139691);
}

double NNfunction_ss_cLcR::synapse0x244a840() {
   return (neuron0x242a9a0()*0.0190649);
}

double NNfunction_ss_cLcR::synapse0x244a880() {
   return (neuron0x242ace0()*0.0201836);
}

double NNfunction_ss_cLcR::synapse0x244a8c0() {
   return (neuron0x242b020()*-0.171069);
}

double NNfunction_ss_cLcR::synapse0x244a350() {
   return (neuron0x242b360()*0.0314534);
}

double NNfunction_ss_cLcR::synapse0x244a390() {
   return (neuron0x242b8c0()*0.032615);
}

double NNfunction_ss_cLcR::synapse0x244aa10() {
   return (neuron0x242bae0()*0.0302119);
}

double NNfunction_ss_cLcR::synapse0x244aa50() {
   return (neuron0x242be20()*0.00319498);
}

double NNfunction_ss_cLcR::synapse0x244aa90() {
   return (neuron0x242c160()*0.0224651);
}

double NNfunction_ss_cLcR::synapse0x244aad0() {
   return (neuron0x242c4a0()*0.0300366);
}

double NNfunction_ss_cLcR::synapse0x244ab10() {
   return (neuron0x242c7e0()*-0.0123557);
}

double NNfunction_ss_cLcR::synapse0x244ab50() {
   return (neuron0x242cb20()*0.000556217);
}

double NNfunction_ss_cLcR::synapse0x244aed0() {
   return (neuron0x2427f60()*-0.164935);
}

double NNfunction_ss_cLcR::synapse0x244af10() {
   return (neuron0x24282a0()*-0.185226);
}

double NNfunction_ss_cLcR::synapse0x244af50() {
   return (neuron0x24285e0()*-0.165943);
}

double NNfunction_ss_cLcR::synapse0x244af90() {
   return (neuron0x2428920()*-0.851095);
}

double NNfunction_ss_cLcR::synapse0x244afd0() {
   return (neuron0x2428c60()*-0.773661);
}

double NNfunction_ss_cLcR::synapse0x244b010() {
   return (neuron0x2428fa0()*-0.681222);
}

double NNfunction_ss_cLcR::synapse0x244b050() {
   return (neuron0x24292e0()*-0.838912);
}

double NNfunction_ss_cLcR::synapse0x244b090() {
   return (neuron0x2429620()*0.419005);
}

double NNfunction_ss_cLcR::synapse0x244b0d0() {
   return (neuron0x2429960()*0.328745);
}

double NNfunction_ss_cLcR::synapse0x244b110() {
   return (neuron0x2429ca0()*-0.112099);
}

double NNfunction_ss_cLcR::synapse0x244b150() {
   return (neuron0x2429fe0()*-0.282848);
}

double NNfunction_ss_cLcR::synapse0x244b190() {
   return (neuron0x242a320()*-0.00566996);
}

double NNfunction_ss_cLcR::synapse0x244b1d0() {
   return (neuron0x242a660()*-0.447561);
}

double NNfunction_ss_cLcR::synapse0x244b210() {
   return (neuron0x242a9a0()*-0.200661);
}

double NNfunction_ss_cLcR::synapse0x244b250() {
   return (neuron0x242ace0()*-1.10252);
}

double NNfunction_ss_cLcR::synapse0x244b290() {
   return (neuron0x242b020()*-0.896009);
}

double NNfunction_ss_cLcR::synapse0x244ad20() {
   return (neuron0x242b360()*-0.0812769);
}

double NNfunction_ss_cLcR::synapse0x244ad60() {
   return (neuron0x242b8c0()*-0.336036);
}

double NNfunction_ss_cLcR::synapse0x243b890() {
   return (neuron0x242bae0()*0.653794);
}

double NNfunction_ss_cLcR::synapse0x243b8d0() {
   return (neuron0x242be20()*-0.362122);
}

double NNfunction_ss_cLcR::synapse0x243b910() {
   return (neuron0x242c160()*0.660088);
}

double NNfunction_ss_cLcR::synapse0x243b950() {
   return (neuron0x242c4a0()*-0.328406);
}

double NNfunction_ss_cLcR::synapse0x243b990() {
   return (neuron0x242c7e0()*-0.271287);
}

double NNfunction_ss_cLcR::synapse0x243b9d0() {
   return (neuron0x242cb20()*-0.530248);
}

double NNfunction_ss_cLcR::synapse0x243bd50() {
   return (neuron0x2427f60()*0.00769114);
}

double NNfunction_ss_cLcR::synapse0x243bd90() {
   return (neuron0x24282a0()*-0.111937);
}

double NNfunction_ss_cLcR::synapse0x243bdd0() {
   return (neuron0x24285e0()*-0.0969801);
}

double NNfunction_ss_cLcR::synapse0x243be10() {
   return (neuron0x2428920()*0.346021);
}

double NNfunction_ss_cLcR::synapse0x243be50() {
   return (neuron0x2428c60()*-0.0742372);
}

double NNfunction_ss_cLcR::synapse0x243be90() {
   return (neuron0x2428fa0()*-0.608971);
}

double NNfunction_ss_cLcR::synapse0x243bed0() {
   return (neuron0x24292e0()*0.175288);
}

double NNfunction_ss_cLcR::synapse0x243bf10() {
   return (neuron0x2429620()*0.0036411);
}

double NNfunction_ss_cLcR::synapse0x243bf50() {
   return (neuron0x2429960()*0.17723);
}

double NNfunction_ss_cLcR::synapse0x243bf90() {
   return (neuron0x2429ca0()*0.0871327);
}

double NNfunction_ss_cLcR::synapse0x243bfd0() {
   return (neuron0x2429fe0()*-0.0292202);
}

double NNfunction_ss_cLcR::synapse0x243c010() {
   return (neuron0x242a320()*0.269253);
}

double NNfunction_ss_cLcR::synapse0x243c050() {
   return (neuron0x242a660()*0.508829);
}

double NNfunction_ss_cLcR::synapse0x243c090() {
   return (neuron0x242a9a0()*0.427553);
}

double NNfunction_ss_cLcR::synapse0x243c0d0() {
   return (neuron0x242ace0()*-0.107812);
}

double NNfunction_ss_cLcR::synapse0x243c110() {
   return (neuron0x242b020()*2.4276);
}

double NNfunction_ss_cLcR::synapse0x243bba0() {
   return (neuron0x242b360()*-0.0584169);
}

double NNfunction_ss_cLcR::synapse0x243bbe0() {
   return (neuron0x242b8c0()*0.274085);
}

double NNfunction_ss_cLcR::synapse0x243c260() {
   return (neuron0x242bae0()*0.221519);
}

double NNfunction_ss_cLcR::synapse0x243c2a0() {
   return (neuron0x242be20()*0.159054);
}

double NNfunction_ss_cLcR::synapse0x243c2e0() {
   return (neuron0x242c160()*-0.0417739);
}

double NNfunction_ss_cLcR::synapse0x243c320() {
   return (neuron0x242c4a0()*-0.245644);
}

double NNfunction_ss_cLcR::synapse0x243c360() {
   return (neuron0x242c7e0()*-0.0212379);
}

double NNfunction_ss_cLcR::synapse0x243c3a0() {
   return (neuron0x242cb20()*0.0350676);
}

double NNfunction_ss_cLcR::synapse0x243c720() {
   return (neuron0x2427f60()*-0.00247323);
}

double NNfunction_ss_cLcR::synapse0x243c760() {
   return (neuron0x24282a0()*-0.857033);
}

double NNfunction_ss_cLcR::synapse0x243c7a0() {
   return (neuron0x24285e0()*-0.714859);
}

double NNfunction_ss_cLcR::synapse0x243c7e0() {
   return (neuron0x2428920()*-0.984093);
}

double NNfunction_ss_cLcR::synapse0x243c820() {
   return (neuron0x2428c60()*-0.112968);
}

double NNfunction_ss_cLcR::synapse0x243c860() {
   return (neuron0x2428fa0()*0.0850998);
}

double NNfunction_ss_cLcR::synapse0x243c8a0() {
   return (neuron0x24292e0()*0.409144);
}

double NNfunction_ss_cLcR::synapse0x243c8e0() {
   return (neuron0x2429620()*0.49028);
}

double NNfunction_ss_cLcR::synapse0x243c920() {
   return (neuron0x2429960()*0.0983067);
}

double NNfunction_ss_cLcR::synapse0x243c960() {
   return (neuron0x2429ca0()*0.232047);
}

double NNfunction_ss_cLcR::synapse0x243c9a0() {
   return (neuron0x2429fe0()*-0.172815);
}

double NNfunction_ss_cLcR::synapse0x243c9e0() {
   return (neuron0x242a320()*-0.0594333);
}

double NNfunction_ss_cLcR::synapse0x243ca20() {
   return (neuron0x242a660()*0.497477);
}

double NNfunction_ss_cLcR::synapse0x243ca60() {
   return (neuron0x242a9a0()*0.0268584);
}

double NNfunction_ss_cLcR::synapse0x243caa0() {
   return (neuron0x242ace0()*0.240505);
}

double NNfunction_ss_cLcR::synapse0x243cae0() {
   return (neuron0x242b020()*-0.465187);
}

double NNfunction_ss_cLcR::synapse0x243c570() {
   return (neuron0x242b360()*0.386518);
}

double NNfunction_ss_cLcR::synapse0x243c5b0() {
   return (neuron0x242b8c0()*-0.0127471);
}

double NNfunction_ss_cLcR::synapse0x243cc30() {
   return (neuron0x242bae0()*-0.215759);
}

double NNfunction_ss_cLcR::synapse0x243cc70() {
   return (neuron0x242be20()*0.163726);
}

double NNfunction_ss_cLcR::synapse0x243ccb0() {
   return (neuron0x242c160()*-0.0342885);
}

double NNfunction_ss_cLcR::synapse0x243ccf0() {
   return (neuron0x242c4a0()*0.27718);
}

double NNfunction_ss_cLcR::synapse0x243cd30() {
   return (neuron0x242c7e0()*-0.0170981);
}

double NNfunction_ss_cLcR::synapse0x243cd70() {
   return (neuron0x242cb20()*0.48537);
}

double NNfunction_ss_cLcR::synapse0x243d0f0() {
   return (neuron0x2427f60()*-0.611891);
}

double NNfunction_ss_cLcR::synapse0x243d130() {
   return (neuron0x24282a0()*0.269869);
}

double NNfunction_ss_cLcR::synapse0x243d170() {
   return (neuron0x24285e0()*-0.157976);
}

double NNfunction_ss_cLcR::synapse0x243d1b0() {
   return (neuron0x2428920()*-0.639832);
}

double NNfunction_ss_cLcR::synapse0x243d1f0() {
   return (neuron0x2428c60()*0.14398);
}

double NNfunction_ss_cLcR::synapse0x243d230() {
   return (neuron0x2428fa0()*0.227235);
}

double NNfunction_ss_cLcR::synapse0x243d270() {
   return (neuron0x24292e0()*0.284267);
}

double NNfunction_ss_cLcR::synapse0x243d2b0() {
   return (neuron0x2429620()*0.150828);
}

double NNfunction_ss_cLcR::synapse0x243d2f0() {
   return (neuron0x2429960()*-0.212755);
}

double NNfunction_ss_cLcR::synapse0x243d330() {
   return (neuron0x2429ca0()*-0.208814);
}

double NNfunction_ss_cLcR::synapse0x243d370() {
   return (neuron0x2429fe0()*0.087746);
}

double NNfunction_ss_cLcR::synapse0x243d3b0() {
   return (neuron0x242a320()*-0.184463);
}

double NNfunction_ss_cLcR::synapse0x243d3f0() {
   return (neuron0x242a660()*0.182354);
}

double NNfunction_ss_cLcR::synapse0x243d430() {
   return (neuron0x242a9a0()*0.0277289);
}

double NNfunction_ss_cLcR::synapse0x243d470() {
   return (neuron0x242ace0()*-0.449029);
}

double NNfunction_ss_cLcR::synapse0x243d4b0() {
   return (neuron0x242b020()*0.311395);
}

double NNfunction_ss_cLcR::synapse0x243cf40() {
   return (neuron0x242b360()*0.318799);
}

double NNfunction_ss_cLcR::synapse0x243cf80() {
   return (neuron0x242b8c0()*-0.0621276);
}

double NNfunction_ss_cLcR::synapse0x243d600() {
   return (neuron0x242bae0()*-0.224388);
}

double NNfunction_ss_cLcR::synapse0x243d640() {
   return (neuron0x242be20()*-0.365645);
}

double NNfunction_ss_cLcR::synapse0x243d680() {
   return (neuron0x242c160()*-0.262276);
}

double NNfunction_ss_cLcR::synapse0x243d6c0() {
   return (neuron0x242c4a0()*0.498341);
}

double NNfunction_ss_cLcR::synapse0x243d700() {
   return (neuron0x242c7e0()*0.0466562);
}

double NNfunction_ss_cLcR::synapse0x243d740() {
   return (neuron0x242cb20()*0.64996);
}

double NNfunction_ss_cLcR::synapse0x244f610() {
   return (neuron0x2427f60()*0.0597508);
}

double NNfunction_ss_cLcR::synapse0x244f650() {
   return (neuron0x24282a0()*-0.0359329);
}

double NNfunction_ss_cLcR::synapse0x244f690() {
   return (neuron0x24285e0()*0.192596);
}

double NNfunction_ss_cLcR::synapse0x244f6d0() {
   return (neuron0x2428920()*0.408783);
}

double NNfunction_ss_cLcR::synapse0x244f710() {
   return (neuron0x2428c60()*0.176937);
}

double NNfunction_ss_cLcR::synapse0x244f750() {
   return (neuron0x2428fa0()*0.161977);
}

double NNfunction_ss_cLcR::synapse0x244f790() {
   return (neuron0x24292e0()*0.193497);
}

double NNfunction_ss_cLcR::synapse0x244f7d0() {
   return (neuron0x2429620()*0.11097);
}

double NNfunction_ss_cLcR::synapse0x244f810() {
   return (neuron0x2429960()*0.157057);
}

double NNfunction_ss_cLcR::synapse0x244f850() {
   return (neuron0x2429ca0()*0.177227);
}

double NNfunction_ss_cLcR::synapse0x244f890() {
   return (neuron0x2429fe0()*0.15888);
}

double NNfunction_ss_cLcR::synapse0x244f8d0() {
   return (neuron0x242a320()*0.0116317);
}

double NNfunction_ss_cLcR::synapse0x244f910() {
   return (neuron0x242a660()*-0.180618);
}

double NNfunction_ss_cLcR::synapse0x244f950() {
   return (neuron0x242a9a0()*0.0442419);
}

double NNfunction_ss_cLcR::synapse0x244f990() {
   return (neuron0x242ace0()*0.0423475);
}

double NNfunction_ss_cLcR::synapse0x244f9d0() {
   return (neuron0x242b020()*-0.196191);
}

double NNfunction_ss_cLcR::synapse0x243d780() {
   return (neuron0x242b360()*0.118856);
}

double NNfunction_ss_cLcR::synapse0x243d7c0() {
   return (neuron0x242b8c0()*0.0719147);
}

double NNfunction_ss_cLcR::synapse0x244fb20() {
   return (neuron0x242bae0()*0.0239975);
}

double NNfunction_ss_cLcR::synapse0x244fb60() {
   return (neuron0x242be20()*0.0538976);
}

double NNfunction_ss_cLcR::synapse0x244fba0() {
   return (neuron0x242c160()*0.0862987);
}

double NNfunction_ss_cLcR::synapse0x244fbe0() {
   return (neuron0x242c4a0()*0.0417491);
}

double NNfunction_ss_cLcR::synapse0x244fc20() {
   return (neuron0x242c7e0()*-0.0525672);
}

double NNfunction_ss_cLcR::synapse0x244fc60() {
   return (neuron0x242cb20()*-0.032444);
}

double NNfunction_ss_cLcR::synapse0x244ffe0() {
   return (neuron0x2427f60()*-0.709167);
}

double NNfunction_ss_cLcR::synapse0x2450020() {
   return (neuron0x24282a0()*-0.147921);
}

double NNfunction_ss_cLcR::synapse0x2450060() {
   return (neuron0x24285e0()*0.230908);
}

double NNfunction_ss_cLcR::synapse0x24500a0() {
   return (neuron0x2428920()*-0.780496);
}

double NNfunction_ss_cLcR::synapse0x24500e0() {
   return (neuron0x2428c60()*0.557751);
}

double NNfunction_ss_cLcR::synapse0x2450120() {
   return (neuron0x2428fa0()*-0.111263);
}

double NNfunction_ss_cLcR::synapse0x2450160() {
   return (neuron0x24292e0()*0.371858);
}

double NNfunction_ss_cLcR::synapse0x24501a0() {
   return (neuron0x2429620()*0.476539);
}

double NNfunction_ss_cLcR::synapse0x24501e0() {
   return (neuron0x2429960()*0.605839);
}

double NNfunction_ss_cLcR::synapse0x2450220() {
   return (neuron0x2429ca0()*0.554255);
}

double NNfunction_ss_cLcR::synapse0x2450260() {
   return (neuron0x2429fe0()*0.0486238);
}

double NNfunction_ss_cLcR::synapse0x24502a0() {
   return (neuron0x242a320()*-0.488506);
}

double NNfunction_ss_cLcR::synapse0x24502e0() {
   return (neuron0x242a660()*-0.671958);
}

double NNfunction_ss_cLcR::synapse0x2450320() {
   return (neuron0x242a9a0()*0.251399);
}

double NNfunction_ss_cLcR::synapse0x2450360() {
   return (neuron0x242ace0()*0.314502);
}

double NNfunction_ss_cLcR::synapse0x24503a0() {
   return (neuron0x242b020()*-2.11805);
}

double NNfunction_ss_cLcR::synapse0x244fe30() {
   return (neuron0x242b360()*0.0900506);
}

double NNfunction_ss_cLcR::synapse0x244fe70() {
   return (neuron0x242b8c0()*0.704104);
}

double NNfunction_ss_cLcR::synapse0x24504f0() {
   return (neuron0x242bae0()*0.17217);
}

double NNfunction_ss_cLcR::synapse0x2450530() {
   return (neuron0x242be20()*0.333372);
}

double NNfunction_ss_cLcR::synapse0x2450570() {
   return (neuron0x242c160()*0.335791);
}

double NNfunction_ss_cLcR::synapse0x24505b0() {
   return (neuron0x242c4a0()*-0.476541);
}

double NNfunction_ss_cLcR::synapse0x24505f0() {
   return (neuron0x242c7e0()*0.594791);
}

double NNfunction_ss_cLcR::synapse0x2450630() {
   return (neuron0x242cb20()*0.0476426);
}

double NNfunction_ss_cLcR::synapse0x24509b0() {
   return (neuron0x2427f60()*0.339294);
}

double NNfunction_ss_cLcR::synapse0x24509f0() {
   return (neuron0x24282a0()*0.902703);
}

double NNfunction_ss_cLcR::synapse0x2450a30() {
   return (neuron0x24285e0()*0.848544);
}

double NNfunction_ss_cLcR::synapse0x2450a70() {
   return (neuron0x2428920()*0.37252);
}

double NNfunction_ss_cLcR::synapse0x2450ab0() {
   return (neuron0x2428c60()*0.379839);
}

double NNfunction_ss_cLcR::synapse0x2450af0() {
   return (neuron0x2428fa0()*-0.507865);
}

double NNfunction_ss_cLcR::synapse0x2450b30() {
   return (neuron0x24292e0()*-0.096706);
}

double NNfunction_ss_cLcR::synapse0x2450b70() {
   return (neuron0x2429620()*0.178283);
}

double NNfunction_ss_cLcR::synapse0x2450bb0() {
   return (neuron0x2429960()*-0.113711);
}

double NNfunction_ss_cLcR::synapse0x2450bf0() {
   return (neuron0x2429ca0()*-0.61801);
}

double NNfunction_ss_cLcR::synapse0x2450c30() {
   return (neuron0x2429fe0()*-0.282021);
}

double NNfunction_ss_cLcR::synapse0x2450c70() {
   return (neuron0x242a320()*-0.809339);
}

double NNfunction_ss_cLcR::synapse0x2450cb0() {
   return (neuron0x242a660()*0.734166);
}

double NNfunction_ss_cLcR::synapse0x2450cf0() {
   return (neuron0x242a9a0()*0.233405);
}

double NNfunction_ss_cLcR::synapse0x2450d30() {
   return (neuron0x242ace0()*0.484516);
}

double NNfunction_ss_cLcR::synapse0x2450d70() {
   return (neuron0x242b020()*-0.422338);
}

double NNfunction_ss_cLcR::synapse0x2450800() {
   return (neuron0x242b360()*-0.800136);
}

double NNfunction_ss_cLcR::synapse0x2450840() {
   return (neuron0x242b8c0()*-0.624045);
}

double NNfunction_ss_cLcR::synapse0x2450ec0() {
   return (neuron0x242bae0()*0.410296);
}

double NNfunction_ss_cLcR::synapse0x2450f00() {
   return (neuron0x242be20()*1.27984);
}

double NNfunction_ss_cLcR::synapse0x2450f40() {
   return (neuron0x242c160()*-0.222096);
}

double NNfunction_ss_cLcR::synapse0x2450f80() {
   return (neuron0x242c4a0()*-0.546087);
}

double NNfunction_ss_cLcR::synapse0x2450fc0() {
   return (neuron0x242c7e0()*0.0162478);
}

double NNfunction_ss_cLcR::synapse0x2451000() {
   return (neuron0x242cb20()*-0.164421);
}

double NNfunction_ss_cLcR::synapse0x2451380() {
   return (neuron0x2427f60()*0.42124);
}

double NNfunction_ss_cLcR::synapse0x24513c0() {
   return (neuron0x24282a0()*-0.853113);
}

double NNfunction_ss_cLcR::synapse0x2451400() {
   return (neuron0x24285e0()*1.47293);
}

double NNfunction_ss_cLcR::synapse0x2451440() {
   return (neuron0x2428920()*-0.18811);
}

double NNfunction_ss_cLcR::synapse0x2451480() {
   return (neuron0x2428c60()*-0.846761);
}

double NNfunction_ss_cLcR::synapse0x24514c0() {
   return (neuron0x2428fa0()*0.600563);
}

double NNfunction_ss_cLcR::synapse0x2451500() {
   return (neuron0x24292e0()*-0.429186);
}

double NNfunction_ss_cLcR::synapse0x2451540() {
   return (neuron0x2429620()*-0.425071);
}

double NNfunction_ss_cLcR::synapse0x2451580() {
   return (neuron0x2429960()*-0.657895);
}

double NNfunction_ss_cLcR::synapse0x24515c0() {
   return (neuron0x2429ca0()*-0.215283);
}

double NNfunction_ss_cLcR::synapse0x2451600() {
   return (neuron0x2429fe0()*0.614013);
}

double NNfunction_ss_cLcR::synapse0x2451640() {
   return (neuron0x242a320()*0.0786018);
}

double NNfunction_ss_cLcR::synapse0x2451680() {
   return (neuron0x242a660()*0.839492);
}

double NNfunction_ss_cLcR::synapse0x24516c0() {
   return (neuron0x242a9a0()*1.38537);
}

double NNfunction_ss_cLcR::synapse0x2451700() {
   return (neuron0x242ace0()*-0.15912);
}

double NNfunction_ss_cLcR::synapse0x2451740() {
   return (neuron0x242b020()*1.16815);
}

double NNfunction_ss_cLcR::synapse0x24511d0() {
   return (neuron0x242b360()*0.719974);
}

double NNfunction_ss_cLcR::synapse0x2451210() {
   return (neuron0x242b8c0()*0.645468);
}

double NNfunction_ss_cLcR::synapse0x2451890() {
   return (neuron0x242bae0()*-1.03252);
}

double NNfunction_ss_cLcR::synapse0x24518d0() {
   return (neuron0x242be20()*-0.230979);
}

double NNfunction_ss_cLcR::synapse0x2451910() {
   return (neuron0x242c160()*-0.917946);
}

double NNfunction_ss_cLcR::synapse0x2451950() {
   return (neuron0x242c4a0()*0.223185);
}

double NNfunction_ss_cLcR::synapse0x2451990() {
   return (neuron0x242c7e0()*0.562495);
}

double NNfunction_ss_cLcR::synapse0x24519d0() {
   return (neuron0x242cb20()*0.137771);
}

double NNfunction_ss_cLcR::synapse0x242df70() {
   return (neuron0x242cfc0()*-0.0406013);
}

double NNfunction_ss_cLcR::synapse0x242dfb0() {
   return (neuron0x242d8d0()*-0.1165);
}

double NNfunction_ss_cLcR::synapse0x242f480() {
   return (neuron0x242e3b0()*-0.167192);
}

double NNfunction_ss_cLcR::synapse0x242f4c0() {
   return (neuron0x21f1780()*0.104397);
}

double NNfunction_ss_cLcR::synapse0x242fe50() {
   return (neuron0x242f1d0()*0.217316);
}

double NNfunction_ss_cLcR::synapse0x242fe90() {
   return (neuron0x242fba0()*0.584759);
}

double NNfunction_ss_cLcR::synapse0x2430c20() {
   return (neuron0x2430970()*-0.673422);
}

double NNfunction_ss_cLcR::synapse0x2430c60() {
   return (neuron0x2431340()*0.471541);
}

double NNfunction_ss_cLcR::synapse0x24315f0() {
   return (neuron0x2431d10()*-0.228916);
}

double NNfunction_ss_cLcR::synapse0x2431630() {
   return (neuron0x24327f0()*-0.467235);
}

double NNfunction_ss_cLcR::synapse0x2431fc0() {
   return (neuron0x24331c0()*-0.087635);
}

double NNfunction_ss_cLcR::synapse0x2432000() {
   return (neuron0x24302a0()*0.152596);
}

double NNfunction_ss_cLcR::synapse0x2432aa0() {
   return (neuron0x2434d70()*0.313116);
}

double NNfunction_ss_cLcR::synapse0x2432ae0() {
   return (neuron0x2435740()*-0.298647);
}

double NNfunction_ss_cLcR::synapse0x2433470() {
   return (neuron0x2436110()*-0.7341);
}

double NNfunction_ss_cLcR::synapse0x24334b0() {
   return (neuron0x2436ae0()*-0.039591);
}

double NNfunction_ss_cLcR::synapse0x2430550() {
   return (neuron0x24388f0()*-0.0592038);
}

double NNfunction_ss_cLcR::synapse0x2430590() {
   return (neuron0x2438bd0()*-0.2401);
}

double NNfunction_ss_cLcR::synapse0x2435020() {
   return (neuron0x24395a0()*0.134161);
}

double NNfunction_ss_cLcR::synapse0x2435060() {
   return (neuron0x2439f70()*0.138278);
}

double NNfunction_ss_cLcR::synapse0x24359f0() {
   return (neuron0x243a940()*-0.777191);
}

double NNfunction_ss_cLcR::synapse0x2435a30() {
   return (neuron0x243b310()*-0.0641465);
}

double NNfunction_ss_cLcR::synapse0x24363c0() {
   return (neuron0x2433e60()*-0.263688);
}

double NNfunction_ss_cLcR::synapse0x2436400() {
   return (neuron0x2434830()*-0.1415);
}

double NNfunction_ss_cLcR::synapse0x2436d90() {
   return (neuron0x243e0a0()*-0.256811);
}

double NNfunction_ss_cLcR::synapse0x2436dd0() {
   return (neuron0x243ea70()*0.0715273);
}

double NNfunction_ss_cLcR::synapse0x242af00() {
   return (neuron0x243f440()*-0.044794);
}

double NNfunction_ss_cLcR::synapse0x242af40() {
   return (neuron0x243fe10()*0.0301635);
}

double NNfunction_ss_cLcR::synapse0x2438e80() {
   return (neuron0x24407e0()*-0.160538);
}

double NNfunction_ss_cLcR::synapse0x2438ec0() {
   return (neuron0x24411b0()*0.011678);
}

double NNfunction_ss_cLcR::synapse0x2439850() {
   return (neuron0x2441b80()*0.0984287);
}

double NNfunction_ss_cLcR::synapse0x2439890() {
   return (neuron0x2442550()*-0.344091);
}

double NNfunction_ss_cLcR::synapse0x243a220() {
   return (neuron0x24385e0()*-0.757384);
}

double NNfunction_ss_cLcR::synapse0x243a260() {
   return (neuron0x2445130()*-0.0773157);
}

double NNfunction_ss_cLcR::synapse0x243abf0() {
   return (neuron0x2445b00()*-0.101881);
}

double NNfunction_ss_cLcR::synapse0x243ac30() {
   return (neuron0x24464d0()*0.248552);
}

double NNfunction_ss_cLcR::synapse0x243b5c0() {
   return (neuron0x2446ea0()*-0.0777847);
}

double NNfunction_ss_cLcR::synapse0x243b600() {
   return (neuron0x2447870()*0.21622);
}

double NNfunction_ss_cLcR::synapse0x2434110() {
   return (neuron0x2448240()*0.329502);
}

double NNfunction_ss_cLcR::synapse0x2434150() {
   return (neuron0x2448c10()*0.10124);
}

double NNfunction_ss_cLcR::synapse0x243d9c0() {
   return (neuron0x24495e0()*-0.00290453);
}

double NNfunction_ss_cLcR::synapse0x243da00() {
   return (neuron0x244a1c0()*0.0746302);
}

double NNfunction_ss_cLcR::synapse0x243e350() {
   return (neuron0x244ab90()*0.374848);
}

double NNfunction_ss_cLcR::synapse0x243e390() {
   return (neuron0x243ba10()*-0.687943);
}

double NNfunction_ss_cLcR::synapse0x243ed20() {
   return (neuron0x243c3e0()*0.267344);
}

double NNfunction_ss_cLcR::synapse0x243ed60() {
   return (neuron0x243cdb0()*0.210167);
}

double NNfunction_ss_cLcR::synapse0x243f6f0() {
   return (neuron0x244f3f0()*-0.512981);
}

double NNfunction_ss_cLcR::synapse0x243f730() {
   return (neuron0x244fca0()*0.281424);
}

double NNfunction_ss_cLcR::synapse0x24400c0() {
   return (neuron0x2450670()*-0.118506);
}

double NNfunction_ss_cLcR::synapse0x2440100() {
   return (neuron0x2451040()*0.208326);
}

double NNfunction_ss_cLcR::synapse0x2442800() {
   return (neuron0x242cfc0()*1.70405);
}

double NNfunction_ss_cLcR::synapse0x2442840() {
   return (neuron0x242d8d0()*0.736618);
}

double NNfunction_ss_cLcR::synapse0x2437dc0() {
   return (neuron0x242e3b0()*-0.334037);
}

double NNfunction_ss_cLcR::synapse0x2437e00() {
   return (neuron0x21f1780()*1.56269);
}

double NNfunction_ss_cLcR::synapse0x24453e0() {
   return (neuron0x242f1d0()*-3.9002);
}

double NNfunction_ss_cLcR::synapse0x2445420() {
   return (neuron0x242fba0()*-2.60125);
}

double NNfunction_ss_cLcR::synapse0x2445db0() {
   return (neuron0x2430970()*-0.988802);
}

double NNfunction_ss_cLcR::synapse0x2445df0() {
   return (neuron0x2431340()*-0.213629);
}

double NNfunction_ss_cLcR::synapse0x2446780() {
   return (neuron0x2431d10()*-1.44589);
}

double NNfunction_ss_cLcR::synapse0x24467c0() {
   return (neuron0x24327f0()*0.339489);
}

double NNfunction_ss_cLcR::synapse0x2447150() {
   return (neuron0x24331c0()*0.0656809);
}

double NNfunction_ss_cLcR::synapse0x2447190() {
   return (neuron0x24302a0()*2.8095);
}

double NNfunction_ss_cLcR::synapse0x2447b20() {
   return (neuron0x2434d70()*0.902066);
}

double NNfunction_ss_cLcR::synapse0x2447b60() {
   return (neuron0x2435740()*0.309809);
}

double NNfunction_ss_cLcR::synapse0x24484f0() {
   return (neuron0x2436110()*0.888141);
}

double NNfunction_ss_cLcR::synapse0x2448530() {
   return (neuron0x2436ae0()*-1.26231);
}

double NNfunction_ss_cLcR::synapse0x2448ec0() {
   return (neuron0x24388f0()*-2.45322);
}

double NNfunction_ss_cLcR::synapse0x2448f00() {
   return (neuron0x2438bd0()*9.0062);
}

double NNfunction_ss_cLcR::synapse0x2449890() {
   return (neuron0x24395a0()*0.316318);
}

double NNfunction_ss_cLcR::synapse0x24498d0() {
   return (neuron0x2439f70()*-1.66288);
}

double NNfunction_ss_cLcR::synapse0x244a470() {
   return (neuron0x243a940()*-0.603725);
}

double NNfunction_ss_cLcR::synapse0x244a4b0() {
   return (neuron0x243b310()*0.820382);
}

double NNfunction_ss_cLcR::synapse0x244ae40() {
   return (neuron0x2433e60()*-0.580431);
}

double NNfunction_ss_cLcR::synapse0x244ae80() {
   return (neuron0x2434830()*-1.35532);
}

double NNfunction_ss_cLcR::synapse0x243bcc0() {
   return (neuron0x243e0a0()*0.789022);
}

double NNfunction_ss_cLcR::synapse0x243bd00() {
   return (neuron0x243ea70()*1.16628);
}

double NNfunction_ss_cLcR::synapse0x243c690() {
   return (neuron0x243f440()*2.22722);
}

double NNfunction_ss_cLcR::synapse0x243c6d0() {
   return (neuron0x243fe10()*1.5982);
}

double NNfunction_ss_cLcR::synapse0x243d060() {
   return (neuron0x24407e0()*1.79773);
}

double NNfunction_ss_cLcR::synapse0x243d0a0() {
   return (neuron0x24411b0()*0.112523);
}

double NNfunction_ss_cLcR::synapse0x244f580() {
   return (neuron0x2441b80()*-0.782094);
}

double NNfunction_ss_cLcR::synapse0x244f5c0() {
   return (neuron0x2442550()*1.01308);
}

double NNfunction_ss_cLcR::synapse0x244ff50() {
   return (neuron0x24385e0()*0.229696);
}

double NNfunction_ss_cLcR::synapse0x244ff90() {
   return (neuron0x2445130()*0.793292);
}

double NNfunction_ss_cLcR::synapse0x2450920() {
   return (neuron0x2445b00()*1.03677);
}

double NNfunction_ss_cLcR::synapse0x2450960() {
   return (neuron0x24464d0()*-0.429435);
}

double NNfunction_ss_cLcR::synapse0x24512f0() {
   return (neuron0x2446ea0()*0.715559);
}

double NNfunction_ss_cLcR::synapse0x2451330() {
   return (neuron0x2447870()*-2.19971);
}

double NNfunction_ss_cLcR::synapse0x242d1e0() {
   return (neuron0x2448240()*-1.09271);
}

double NNfunction_ss_cLcR::synapse0x242d220() {
   return (neuron0x2448c10()*0.46853);
}

double NNfunction_ss_cLcR::synapse0x2440a90() {
   return (neuron0x24495e0()*0.612263);
}

double NNfunction_ss_cLcR::synapse0x2440ad0() {
   return (neuron0x244a1c0()*-2.09806);
}

double NNfunction_ss_cLcR::synapse0x2451a10() {
   return (neuron0x244ab90()*0.106191);
}

double NNfunction_ss_cLcR::synapse0x2451a50() {
   return (neuron0x243ba10()*1.70392);
}

double NNfunction_ss_cLcR::synapse0x2451a90() {
   return (neuron0x243c3e0()*1.82256);
}

double NNfunction_ss_cLcR::synapse0x2451ad0() {
   return (neuron0x243cdb0()*1.62601);
}

double NNfunction_ss_cLcR::synapse0x2458980() {
   return (neuron0x244f3f0()*-1.83901);
}

double NNfunction_ss_cLcR::synapse0x24589c0() {
   return (neuron0x244fca0()*-0.349928);
}

double NNfunction_ss_cLcR::synapse0x2458a00() {
   return (neuron0x2450670()*0.683573);
}

double NNfunction_ss_cLcR::synapse0x2458a40() {
   return (neuron0x2451040()*0.878584);
}

double NNfunction_ss_cLcR::synapse0x2458dc0() {
   return (neuron0x242cfc0()*2.73622);
}

double NNfunction_ss_cLcR::synapse0x2458e00() {
   return (neuron0x242d8d0()*0.861417);
}

double NNfunction_ss_cLcR::synapse0x2458e40() {
   return (neuron0x242e3b0()*1.03416);
}

double NNfunction_ss_cLcR::synapse0x2458e80() {
   return (neuron0x21f1780()*-0.185401);
}

double NNfunction_ss_cLcR::synapse0x2458ec0() {
   return (neuron0x242f1d0()*-2.94902);
}

double NNfunction_ss_cLcR::synapse0x2458f00() {
   return (neuron0x242fba0()*-1.38835);
}

double NNfunction_ss_cLcR::synapse0x2458f40() {
   return (neuron0x2430970()*-1.9121);
}

double NNfunction_ss_cLcR::synapse0x2458f80() {
   return (neuron0x2431340()*0.364435);
}

double NNfunction_ss_cLcR::synapse0x2458fc0() {
   return (neuron0x2431d10()*0.219161);
}

double NNfunction_ss_cLcR::synapse0x2459000() {
   return (neuron0x24327f0()*-4.20683);
}

double NNfunction_ss_cLcR::synapse0x2459040() {
   return (neuron0x24331c0()*0.320795);
}

double NNfunction_ss_cLcR::synapse0x2459080() {
   return (neuron0x24302a0()*0.346729);
}

double NNfunction_ss_cLcR::synapse0x24590c0() {
   return (neuron0x2434d70()*-0.466276);
}

double NNfunction_ss_cLcR::synapse0x2459100() {
   return (neuron0x2435740()*1.48129);
}

double NNfunction_ss_cLcR::synapse0x2459140() {
   return (neuron0x2436110()*-0.342002);
}

double NNfunction_ss_cLcR::synapse0x2459180() {
   return (neuron0x2436ae0()*-1.50351);
}

double NNfunction_ss_cLcR::synapse0x2458c10() {
   return (neuron0x24388f0()*0.217075);
}

double NNfunction_ss_cLcR::synapse0x2458c50() {
   return (neuron0x2438bd0()*-0.318711);
}

double NNfunction_ss_cLcR::synapse0x24592d0() {
   return (neuron0x24395a0()*0.699513);
}

double NNfunction_ss_cLcR::synapse0x2459310() {
   return (neuron0x2439f70()*0.931254);
}

double NNfunction_ss_cLcR::synapse0x2459350() {
   return (neuron0x243a940()*3.46916);
}

double NNfunction_ss_cLcR::synapse0x2459390() {
   return (neuron0x243b310()*-0.0872395);
}

double NNfunction_ss_cLcR::synapse0x24593d0() {
   return (neuron0x2433e60()*2.12389);
}

double NNfunction_ss_cLcR::synapse0x2459410() {
   return (neuron0x2434830()*0.0874265);
}

double NNfunction_ss_cLcR::synapse0x2459450() {
   return (neuron0x243e0a0()*0.80343);
}

double NNfunction_ss_cLcR::synapse0x2459490() {
   return (neuron0x243ea70()*-0.395417);
}

double NNfunction_ss_cLcR::synapse0x24594d0() {
   return (neuron0x243f440()*0.269835);
}

double NNfunction_ss_cLcR::synapse0x2459510() {
   return (neuron0x243fe10()*-0.0943294);
}

double NNfunction_ss_cLcR::synapse0x2459550() {
   return (neuron0x24407e0()*0.86697);
}

double NNfunction_ss_cLcR::synapse0x2459590() {
   return (neuron0x24411b0()*-0.636057);
}

double NNfunction_ss_cLcR::synapse0x24595d0() {
   return (neuron0x2441b80()*0.0365128);
}

double NNfunction_ss_cLcR::synapse0x2459610() {
   return (neuron0x2442550()*-0.251192);
}

double NNfunction_ss_cLcR::synapse0x24591c0() {
   return (neuron0x24385e0()*-2.19228);
}

double NNfunction_ss_cLcR::synapse0x2459200() {
   return (neuron0x2445130()*0.633414);
}

double NNfunction_ss_cLcR::synapse0x2459240() {
   return (neuron0x2445b00()*-0.156865);
}

double NNfunction_ss_cLcR::synapse0x2459280() {
   return (neuron0x24464d0()*-0.458223);
}

double NNfunction_ss_cLcR::synapse0x2459860() {
   return (neuron0x2446ea0()*0.804813);
}

double NNfunction_ss_cLcR::synapse0x24598a0() {
   return (neuron0x2447870()*0.352873);
}

double NNfunction_ss_cLcR::synapse0x24598e0() {
   return (neuron0x2448240()*-1.0487);
}

double NNfunction_ss_cLcR::synapse0x2459920() {
   return (neuron0x2448c10()*-0.349813);
}

double NNfunction_ss_cLcR::synapse0x2459960() {
   return (neuron0x24495e0()*0.308936);
}

double NNfunction_ss_cLcR::synapse0x24599a0() {
   return (neuron0x244a1c0()*-0.573332);
}

double NNfunction_ss_cLcR::synapse0x24599e0() {
   return (neuron0x244ab90()*-0.720659);
}

double NNfunction_ss_cLcR::synapse0x2459a20() {
   return (neuron0x243ba10()*1.36479);
}

double NNfunction_ss_cLcR::synapse0x2459a60() {
   return (neuron0x243c3e0()*0.535874);
}

double NNfunction_ss_cLcR::synapse0x2459aa0() {
   return (neuron0x243cdb0()*0.846204);
}

double NNfunction_ss_cLcR::synapse0x2459ae0() {
   return (neuron0x244f3f0()*1.29319);
}

double NNfunction_ss_cLcR::synapse0x2459b20() {
   return (neuron0x244fca0()*-0.712506);
}

double NNfunction_ss_cLcR::synapse0x2459b60() {
   return (neuron0x2450670()*0.390264);
}

double NNfunction_ss_cLcR::synapse0x2459ba0() {
   return (neuron0x2451040()*0.618922);
}

double NNfunction_ss_cLcR::synapse0x2459f20() {
   return (neuron0x242cfc0()*1.2787);
}

double NNfunction_ss_cLcR::synapse0x2459f60() {
   return (neuron0x242d8d0()*-0.452568);
}

double NNfunction_ss_cLcR::synapse0x2459fa0() {
   return (neuron0x242e3b0()*-0.808582);
}

double NNfunction_ss_cLcR::synapse0x2459fe0() {
   return (neuron0x21f1780()*0.103062);
}

double NNfunction_ss_cLcR::synapse0x245a020() {
   return (neuron0x242f1d0()*0.0560428);
}

double NNfunction_ss_cLcR::synapse0x245a060() {
   return (neuron0x242fba0()*0.147376);
}

double NNfunction_ss_cLcR::synapse0x245a0a0() {
   return (neuron0x2430970()*0.0104459);
}

double NNfunction_ss_cLcR::synapse0x245a0e0() {
   return (neuron0x2431340()*0.292033);
}

double NNfunction_ss_cLcR::synapse0x245a120() {
   return (neuron0x2431d10()*-0.0148228);
}

double NNfunction_ss_cLcR::synapse0x245a160() {
   return (neuron0x24327f0()*-0.220378);
}

double NNfunction_ss_cLcR::synapse0x245a1a0() {
   return (neuron0x24331c0()*-0.310381);
}

double NNfunction_ss_cLcR::synapse0x245a1e0() {
   return (neuron0x24302a0()*0.182045);
}

double NNfunction_ss_cLcR::synapse0x245a220() {
   return (neuron0x2434d70()*0.263754);
}

double NNfunction_ss_cLcR::synapse0x245a260() {
   return (neuron0x2435740()*-0.454219);
}

double NNfunction_ss_cLcR::synapse0x245a2a0() {
   return (neuron0x2436110()*-0.223189);
}

double NNfunction_ss_cLcR::synapse0x245a2e0() {
   return (neuron0x2436ae0()*-1.007);
}

double NNfunction_ss_cLcR::synapse0x2459d70() {
   return (neuron0x24388f0()*-0.00655667);
}

double NNfunction_ss_cLcR::synapse0x2459db0() {
   return (neuron0x2438bd0()*1.54574);
}

double NNfunction_ss_cLcR::synapse0x245a430() {
   return (neuron0x24395a0()*-0.320473);
}

double NNfunction_ss_cLcR::synapse0x245a470() {
   return (neuron0x2439f70()*0.579926);
}

double NNfunction_ss_cLcR::synapse0x245a4b0() {
   return (neuron0x243a940()*-1.27627);
}

double NNfunction_ss_cLcR::synapse0x245a4f0() {
   return (neuron0x243b310()*0.219087);
}

double NNfunction_ss_cLcR::synapse0x245a530() {
   return (neuron0x2433e60()*-0.520177);
}

double NNfunction_ss_cLcR::synapse0x245a570() {
   return (neuron0x2434830()*-0.228374);
}

double NNfunction_ss_cLcR::synapse0x245a5b0() {
   return (neuron0x243e0a0()*-0.34692);
}

double NNfunction_ss_cLcR::synapse0x245a5f0() {
   return (neuron0x243ea70()*-0.17359);
}

double NNfunction_ss_cLcR::synapse0x245a630() {
   return (neuron0x243f440()*-0.261327);
}

double NNfunction_ss_cLcR::synapse0x245a670() {
   return (neuron0x243fe10()*0.188646);
}

double NNfunction_ss_cLcR::synapse0x245a6b0() {
   return (neuron0x24407e0()*-0.858533);
}

double NNfunction_ss_cLcR::synapse0x245a6f0() {
   return (neuron0x24411b0()*0.327479);
}

double NNfunction_ss_cLcR::synapse0x245a730() {
   return (neuron0x2441b80()*0.133798);
}

double NNfunction_ss_cLcR::synapse0x245a770() {
   return (neuron0x2442550()*-0.046441);
}

double NNfunction_ss_cLcR::synapse0x245a320() {
   return (neuron0x24385e0()*0.270333);
}

double NNfunction_ss_cLcR::synapse0x245a360() {
   return (neuron0x2445130()*-0.237367);
}

double NNfunction_ss_cLcR::synapse0x245a3a0() {
   return (neuron0x2445b00()*0.0693445);
}

double NNfunction_ss_cLcR::synapse0x245a3e0() {
   return (neuron0x24464d0()*0.458813);
}

double NNfunction_ss_cLcR::synapse0x245a9c0() {
   return (neuron0x2446ea0()*-0.131265);
}

double NNfunction_ss_cLcR::synapse0x245aa00() {
   return (neuron0x2447870()*0.0873868);
}

double NNfunction_ss_cLcR::synapse0x245aa40() {
   return (neuron0x2448240()*0.429867);
}

double NNfunction_ss_cLcR::synapse0x245aa80() {
   return (neuron0x2448c10()*0.404362);
}

double NNfunction_ss_cLcR::synapse0x245aac0() {
   return (neuron0x24495e0()*-0.255358);
}

double NNfunction_ss_cLcR::synapse0x245ab00() {
   return (neuron0x244a1c0()*2.07281);
}

double NNfunction_ss_cLcR::synapse0x245ab40() {
   return (neuron0x244ab90()*0.41089);
}

double NNfunction_ss_cLcR::synapse0x245ab80() {
   return (neuron0x243ba10()*-0.230682);
}

double NNfunction_ss_cLcR::synapse0x245abc0() {
   return (neuron0x243c3e0()*-0.0259012);
}

double NNfunction_ss_cLcR::synapse0x245ac00() {
   return (neuron0x243cdb0()*-0.173682);
}

double NNfunction_ss_cLcR::synapse0x245ac40() {
   return (neuron0x244f3f0()*-0.0777226);
}

double NNfunction_ss_cLcR::synapse0x245ac80() {
   return (neuron0x244fca0()*0.479183);
}

double NNfunction_ss_cLcR::synapse0x245acc0() {
   return (neuron0x2450670()*-0.275658);
}

double NNfunction_ss_cLcR::synapse0x245ad00() {
   return (neuron0x2451040()*-0.308845);
}

double NNfunction_ss_cLcR::synapse0x245b080() {
   return (neuron0x242cfc0()*3.13625);
}

double NNfunction_ss_cLcR::synapse0x245b0c0() {
   return (neuron0x242d8d0()*-0.952947);
}

double NNfunction_ss_cLcR::synapse0x245b100() {
   return (neuron0x242e3b0()*-2.03519);
}

double NNfunction_ss_cLcR::synapse0x245b140() {
   return (neuron0x21f1780()*0.197244);
}

double NNfunction_ss_cLcR::synapse0x245b180() {
   return (neuron0x242f1d0()*-1.50711);
}

double NNfunction_ss_cLcR::synapse0x245b1c0() {
   return (neuron0x242fba0()*0.0989971);
}

double NNfunction_ss_cLcR::synapse0x245b200() {
   return (neuron0x2430970()*-0.00318922);
}

double NNfunction_ss_cLcR::synapse0x245b240() {
   return (neuron0x2431340()*0.987234);
}

double NNfunction_ss_cLcR::synapse0x245b280() {
   return (neuron0x2431d10()*-0.0475897);
}

double NNfunction_ss_cLcR::synapse0x245b2c0() {
   return (neuron0x24327f0()*-0.670746);
}

double NNfunction_ss_cLcR::synapse0x245b300() {
   return (neuron0x24331c0()*-0.641846);
}

double NNfunction_ss_cLcR::synapse0x245b340() {
   return (neuron0x24302a0()*0.437919);
}

double NNfunction_ss_cLcR::synapse0x245b380() {
   return (neuron0x2434d70()*0.602458);
}

double NNfunction_ss_cLcR::synapse0x245b3c0() {
   return (neuron0x2435740()*-0.93812);
}

double NNfunction_ss_cLcR::synapse0x245b400() {
   return (neuron0x2436110()*-0.558129);
}

double NNfunction_ss_cLcR::synapse0x245b440() {
   return (neuron0x2436ae0()*-2.65413);
}

double NNfunction_ss_cLcR::synapse0x245aed0() {
   return (neuron0x24388f0()*0.00232662);
}

double NNfunction_ss_cLcR::synapse0x245af10() {
   return (neuron0x2438bd0()*3.75036);
}

double NNfunction_ss_cLcR::synapse0x245b590() {
   return (neuron0x24395a0()*-0.643343);
}

double NNfunction_ss_cLcR::synapse0x245b5d0() {
   return (neuron0x2439f70()*1.15866);
}

double NNfunction_ss_cLcR::synapse0x245b610() {
   return (neuron0x243a940()*0.750689);
}

double NNfunction_ss_cLcR::synapse0x245b650() {
   return (neuron0x243b310()*0.384462);
}

double NNfunction_ss_cLcR::synapse0x245b690() {
   return (neuron0x2433e60()*-0.857909);
}

double NNfunction_ss_cLcR::synapse0x245b6d0() {
   return (neuron0x2434830()*-0.467789);
}

double NNfunction_ss_cLcR::synapse0x245b710() {
   return (neuron0x243e0a0()*-0.752208);
}

double NNfunction_ss_cLcR::synapse0x245b750() {
   return (neuron0x243ea70()*-0.326616);
}

double NNfunction_ss_cLcR::synapse0x245b790() {
   return (neuron0x243f440()*-0.652784);
}

double NNfunction_ss_cLcR::synapse0x245b7d0() {
   return (neuron0x243fe10()*0.360048);
}

double NNfunction_ss_cLcR::synapse0x245b810() {
   return (neuron0x24407e0()*-0.0885762);
}

double NNfunction_ss_cLcR::synapse0x245b850() {
   return (neuron0x24411b0()*0.678363);
}

double NNfunction_ss_cLcR::synapse0x245b890() {
   return (neuron0x2441b80()*0.305131);
}

double NNfunction_ss_cLcR::synapse0x245b8d0() {
   return (neuron0x2442550()*-0.121055);
}

double NNfunction_ss_cLcR::synapse0x245b480() {
   return (neuron0x24385e0()*0.4618);
}

double NNfunction_ss_cLcR::synapse0x245b4c0() {
   return (neuron0x2445130()*-0.533362);
}

double NNfunction_ss_cLcR::synapse0x245b500() {
   return (neuron0x2445b00()*0.140328);
}

double NNfunction_ss_cLcR::synapse0x245b540() {
   return (neuron0x24464d0()*0.546704);
}

double NNfunction_ss_cLcR::synapse0x245bb20() {
   return (neuron0x2446ea0()*-0.328899);
}

double NNfunction_ss_cLcR::synapse0x245bb60() {
   return (neuron0x2447870()*0.271841);
}

double NNfunction_ss_cLcR::synapse0x245bba0() {
   return (neuron0x2448240()*0.999019);
}

double NNfunction_ss_cLcR::synapse0x245bbe0() {
   return (neuron0x2448c10()*0.988256);
}

double NNfunction_ss_cLcR::synapse0x245bc20() {
   return (neuron0x24495e0()*-0.540937);
}

double NNfunction_ss_cLcR::synapse0x245bc60() {
   return (neuron0x244a1c0()*-0.749258);
}

double NNfunction_ss_cLcR::synapse0x245bca0() {
   return (neuron0x244ab90()*0.916076);
}

double NNfunction_ss_cLcR::synapse0x245bce0() {
   return (neuron0x243ba10()*-0.70917);
}

double NNfunction_ss_cLcR::synapse0x245bd20() {
   return (neuron0x243c3e0()*-0.0158623);
}

double NNfunction_ss_cLcR::synapse0x245bd60() {
   return (neuron0x243cdb0()*-0.357625);
}

double NNfunction_ss_cLcR::synapse0x245bda0() {
   return (neuron0x244f3f0()*1.4172);
}

double NNfunction_ss_cLcR::synapse0x245bde0() {
   return (neuron0x244fca0()*1.06943);
}

double NNfunction_ss_cLcR::synapse0x245be20() {
   return (neuron0x2450670()*-0.585065);
}

double NNfunction_ss_cLcR::synapse0x245be60() {
   return (neuron0x2451040()*-0.637214);
}

double NNfunction_ss_cLcR::synapse0x242cf80() {
   return (neuron0x2458240()*1.06164);
}

double NNfunction_ss_cLcR::synapse0x245c0c0() {
   return (neuron0x24585e0()*-6.07098);
}

double NNfunction_ss_cLcR::synapse0x245c100() {
   return (neuron0x2458a80()*-6.38377);
}

double NNfunction_ss_cLcR::synapse0x245c140() {
   return (neuron0x2459be0()*10.3102);
}

double NNfunction_ss_cLcR::synapse0x245c180() {
   return (neuron0x245ad40()*-5.2737);
}

