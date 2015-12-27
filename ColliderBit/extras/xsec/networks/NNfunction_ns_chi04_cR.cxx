#include "NNfunction_ns_chi04_cR.h"
#include <cmath>

double NNfunction_ns_chi04_cR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.0071)/14.8672;
   input1 = (in1 - 15.5701)/509.689;
   input2 = (in2 - 164.538)/172.735;
   input3 = (in3 - 53.6328)/763.92;
   input4 = (in4 - 905.879)/891.941;
   input5 = (in5 - 791.201)/904.251;
   input6 = (in6 - 792.18)/902.265;
   input7 = (in7 - 789.797)/878.736;
   input8 = (in8 - 791.493)/911.049;
   input9 = (in9 - 765.078)/886.539;
   input10 = (in10 - 810.936)/892.187;
   input11 = (in11 - 624.418)/763.737;
   input12 = (in12 - 629.723)/774.705;
   input13 = (in13 - 450.699)/453.99;
   input14 = (in14 - 625.94)/728.587;
   input15 = (in15 - 205.472)/147.708;
   input16 = (in16 - 462.475)/506.734;
   input17 = (in17 - 658.884)/803.491;
   input18 = (in18 - 652.748)/796.941;
   input19 = (in19 - 660.083)/768.127;
   input20 = (in20 - -37.4205)/439.653;
   input21 = (in21 - -50.0431)/1060.56;
   input22 = (in22 - -12.0262)/1063.87;
   input23 = (in23 - -14.7733)/214.529;
   switch(index) {
     case 0:
         return neuron0x25635f0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi04_cR::Value(int index, double* input) {
   input0 = (input[0] - 23.0071)/14.8672;
   input1 = (input[1] - 15.5701)/509.689;
   input2 = (input[2] - 164.538)/172.735;
   input3 = (input[3] - 53.6328)/763.92;
   input4 = (input[4] - 905.879)/891.941;
   input5 = (input[5] - 791.201)/904.251;
   input6 = (input[6] - 792.18)/902.265;
   input7 = (input[7] - 789.797)/878.736;
   input8 = (input[8] - 791.493)/911.049;
   input9 = (input[9] - 765.078)/886.539;
   input10 = (input[10] - 810.936)/892.187;
   input11 = (input[11] - 624.418)/763.737;
   input12 = (input[12] - 629.723)/774.705;
   input13 = (input[13] - 450.699)/453.99;
   input14 = (input[14] - 625.94)/728.587;
   input15 = (input[15] - 205.472)/147.708;
   input16 = (input[16] - 462.475)/506.734;
   input17 = (input[17] - 658.884)/803.491;
   input18 = (input[18] - 652.748)/796.941;
   input19 = (input[19] - 660.083)/768.127;
   input20 = (input[20] - -37.4205)/439.653;
   input21 = (input[21] - -50.0431)/1060.56;
   input22 = (input[22] - -12.0262)/1063.87;
   input23 = (input[23] - -14.7733)/214.529;
   switch(index) {
     case 0:
         return neuron0x25635f0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi04_cR::neuron0x252f6e0() {
   return input0;
}

double NNfunction_ns_chi04_cR::neuron0x252fa20() {
   return input1;
}

double NNfunction_ns_chi04_cR::neuron0x252fd60() {
   return input2;
}

double NNfunction_ns_chi04_cR::neuron0x25300a0() {
   return input3;
}

double NNfunction_ns_chi04_cR::neuron0x25303e0() {
   return input4;
}

double NNfunction_ns_chi04_cR::neuron0x2530720() {
   return input5;
}

double NNfunction_ns_chi04_cR::neuron0x2530a60() {
   return input6;
}

double NNfunction_ns_chi04_cR::neuron0x2530da0() {
   return input7;
}

double NNfunction_ns_chi04_cR::neuron0x25310e0() {
   return input8;
}

double NNfunction_ns_chi04_cR::neuron0x2531420() {
   return input9;
}

double NNfunction_ns_chi04_cR::neuron0x2531760() {
   return input10;
}

double NNfunction_ns_chi04_cR::neuron0x2531aa0() {
   return input11;
}

double NNfunction_ns_chi04_cR::neuron0x2531de0() {
   return input12;
}

double NNfunction_ns_chi04_cR::neuron0x2532120() {
   return input13;
}

double NNfunction_ns_chi04_cR::neuron0x2532460() {
   return input14;
}

double NNfunction_ns_chi04_cR::neuron0x25327a0() {
   return input15;
}

double NNfunction_ns_chi04_cR::neuron0x2532ae0() {
   return input16;
}

double NNfunction_ns_chi04_cR::neuron0x2533040() {
   return input17;
}

double NNfunction_ns_chi04_cR::neuron0x2533260() {
   return input18;
}

double NNfunction_ns_chi04_cR::neuron0x25335a0() {
   return input19;
}

double NNfunction_ns_chi04_cR::neuron0x25338e0() {
   return input20;
}

double NNfunction_ns_chi04_cR::neuron0x2533c20() {
   return input21;
}

double NNfunction_ns_chi04_cR::neuron0x2533f60() {
   return input22;
}

double NNfunction_ns_chi04_cR::neuron0x25342a0() {
   return input23;
}

double NNfunction_ns_chi04_cR::input0x2534710() {
   double input = 0.407403;
   input += synapse0x252f5a0();
   input += synapse0x252f5e0();
   input += synapse0x25349c0();
   input += synapse0x2534a00();
   input += synapse0x2534a40();
   input += synapse0x2534a80();
   input += synapse0x2534ac0();
   input += synapse0x2534b00();
   input += synapse0x2534b40();
   input += synapse0x2534b80();
   input += synapse0x2534bc0();
   input += synapse0x2534c00();
   input += synapse0x2534c40();
   input += synapse0x2534c80();
   input += synapse0x2534cc0();
   input += synapse0x2534d00();
   input += synapse0x252f510();
   input += synapse0x252f550();
   input += synapse0x22ea880();
   input += synapse0x22ea8c0();
   input += synapse0x2534f60();
   input += synapse0x2534fa0();
   input += synapse0x2534fe0();
   input += synapse0x2535020();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2534710() {
   double input = input0x2534710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2535060() {
   double input = 0.215551;
   input += synapse0x25353a0();
   input += synapse0x25353e0();
   input += synapse0x2535420();
   input += synapse0x2535460();
   input += synapse0x25354a0();
   input += synapse0x25354e0();
   input += synapse0x2535520();
   input += synapse0x2535560();
   input += synapse0x25355a0();
   input += synapse0x2534e50();
   input += synapse0x2534e90();
   input += synapse0x2534ed0();
   input += synapse0x2534f10();
   input += synapse0x25357f0();
   input += synapse0x2535830();
   input += synapse0x2535870();
   input += synapse0x25351f0();
   input += synapse0x2535230();
   input += synapse0x25359c0();
   input += synapse0x2535a00();
   input += synapse0x2535a40();
   input += synapse0x2535a80();
   input += synapse0x2535ac0();
   input += synapse0x2535b00();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2535060() {
   double input = input0x2535060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2535b40() {
   double input = 1.13078;
   input += synapse0x2535e80();
   input += synapse0x2535ec0();
   input += synapse0x2535f00();
   input += synapse0x2535f40();
   input += synapse0x2535f80();
   input += synapse0x2535fc0();
   input += synapse0x2536000();
   input += synapse0x2536040();
   input += synapse0x2536080();
   input += synapse0x25360c0();
   input += synapse0x2536100();
   input += synapse0x2536140();
   input += synapse0x2536180();
   input += synapse0x25361c0();
   input += synapse0x2536200();
   input += synapse0x2536240();
   input += synapse0x2535cd0();
   input += synapse0x2535d10();
   input += synapse0x22eaf70();
   input += synapse0x22f8840();
   input += synapse0x22f8880();
   input += synapse0x251e770();
   input += synapse0x251e7b0();
   input += synapse0x251e7f0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2535b40() {
   double input = input0x2535b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x25355e0() {
   double input = -1.98692;
   input += synapse0x22f90c0();
   input += synapse0x2535770();
   input += synapse0x25357b0();
   input += synapse0x2536390();
   input += synapse0x25363d0();
   input += synapse0x2536410();
   input += synapse0x2536450();
   input += synapse0x2536490();
   input += synapse0x25364d0();
   input += synapse0x2536510();
   input += synapse0x2536550();
   input += synapse0x2536590();
   input += synapse0x25365d0();
   input += synapse0x2536610();
   input += synapse0x2536650();
   input += synapse0x2536690();
   input += synapse0x252f620();
   input += synapse0x252f660();
   input += synapse0x252f6a0();
   input += synapse0x25367e0();
   input += synapse0x2536820();
   input += synapse0x2536860();
   input += synapse0x25368a0();
   input += synapse0x25368e0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x25355e0() {
   double input = input0x25355e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2536920() {
   double input = -0.266555;
   input += synapse0x2536c60();
   input += synapse0x2536ca0();
   input += synapse0x2536ce0();
   input += synapse0x2536d20();
   input += synapse0x2536d60();
   input += synapse0x2536da0();
   input += synapse0x2536de0();
   input += synapse0x2536e20();
   input += synapse0x2536e60();
   input += synapse0x2536ea0();
   input += synapse0x2536ee0();
   input += synapse0x2536f20();
   input += synapse0x2536f60();
   input += synapse0x2536fa0();
   input += synapse0x2536fe0();
   input += synapse0x2537020();
   input += synapse0x2536ab0();
   input += synapse0x2536af0();
   input += synapse0x2537170();
   input += synapse0x25371b0();
   input += synapse0x25371f0();
   input += synapse0x2537230();
   input += synapse0x2537270();
   input += synapse0x25372b0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2536920() {
   double input = input0x2536920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x25372f0() {
   double input = 0.562964;
   input += synapse0x2537630();
   input += synapse0x2537670();
   input += synapse0x25376b0();
   input += synapse0x25376f0();
   input += synapse0x2537730();
   input += synapse0x2537770();
   input += synapse0x25377b0();
   input += synapse0x25377f0();
   input += synapse0x2537830();
   input += synapse0x22f8b90();
   input += synapse0x22f8bd0();
   input += synapse0x22f8c10();
   input += synapse0x22f8c50();
   input += synapse0x22f8c90();
   input += synapse0x22f8cd0();
   input += synapse0x22f8d10();
   input += synapse0x2537480();
   input += synapse0x25374c0();
   input += synapse0x22f8e60();
   input += synapse0x22f8ea0();
   input += synapse0x22f8ee0();
   input += synapse0x22f8f20();
   input += synapse0x22f8f60();
   input += synapse0x2538080();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x25372f0() {
   double input = input0x25372f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x25380c0() {
   double input = 0.0424221;
   input += synapse0x2538400();
   input += synapse0x2538440();
   input += synapse0x2538480();
   input += synapse0x25384c0();
   input += synapse0x2538500();
   input += synapse0x2538540();
   input += synapse0x2538580();
   input += synapse0x25385c0();
   input += synapse0x2538600();
   input += synapse0x2538640();
   input += synapse0x2538680();
   input += synapse0x25386c0();
   input += synapse0x2538700();
   input += synapse0x2538740();
   input += synapse0x2538780();
   input += synapse0x25387c0();
   input += synapse0x2538250();
   input += synapse0x2538290();
   input += synapse0x2538910();
   input += synapse0x2538950();
   input += synapse0x2538990();
   input += synapse0x25389d0();
   input += synapse0x2538a10();
   input += synapse0x2538a50();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x25380c0() {
   double input = input0x25380c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2538a90() {
   double input = 0.603555;
   input += synapse0x2538dd0();
   input += synapse0x2538e10();
   input += synapse0x2538e50();
   input += synapse0x2538e90();
   input += synapse0x2538ed0();
   input += synapse0x2538f10();
   input += synapse0x2538f50();
   input += synapse0x2538f90();
   input += synapse0x2538fd0();
   input += synapse0x2539010();
   input += synapse0x2539050();
   input += synapse0x2539090();
   input += synapse0x25390d0();
   input += synapse0x2539110();
   input += synapse0x2539150();
   input += synapse0x2539190();
   input += synapse0x2538c20();
   input += synapse0x2538c60();
   input += synapse0x25392e0();
   input += synapse0x2539320();
   input += synapse0x2539360();
   input += synapse0x25393a0();
   input += synapse0x25393e0();
   input += synapse0x2539420();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2538a90() {
   double input = input0x2538a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2539460() {
   double input = 1.63504;
   input += synapse0x2532f30();
   input += synapse0x2532f70();
   input += synapse0x2532fb0();
   input += synapse0x2532ff0();
   input += synapse0x25399b0();
   input += synapse0x25399f0();
   input += synapse0x2539a30();
   input += synapse0x2539a70();
   input += synapse0x2539ab0();
   input += synapse0x2539af0();
   input += synapse0x2539b30();
   input += synapse0x2539b70();
   input += synapse0x2539bb0();
   input += synapse0x2539bf0();
   input += synapse0x2539c30();
   input += synapse0x2539c70();
   input += synapse0x25395f0();
   input += synapse0x2539630();
   input += synapse0x2539dc0();
   input += synapse0x2539e00();
   input += synapse0x2539e40();
   input += synapse0x2539e80();
   input += synapse0x2539ec0();
   input += synapse0x2539f00();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2539460() {
   double input = input0x2539460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2539f40() {
   double input = 0.724407;
   input += synapse0x253a280();
   input += synapse0x253a2c0();
   input += synapse0x253a300();
   input += synapse0x253a340();
   input += synapse0x253a380();
   input += synapse0x253a3c0();
   input += synapse0x253a400();
   input += synapse0x253a440();
   input += synapse0x253a480();
   input += synapse0x253a4c0();
   input += synapse0x253a500();
   input += synapse0x253a540();
   input += synapse0x253a580();
   input += synapse0x253a5c0();
   input += synapse0x253a600();
   input += synapse0x253a640();
   input += synapse0x253a0d0();
   input += synapse0x253a110();
   input += synapse0x253a790();
   input += synapse0x253a7d0();
   input += synapse0x253a810();
   input += synapse0x253a850();
   input += synapse0x253a890();
   input += synapse0x253a8d0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2539f40() {
   double input = input0x2539f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x253a910() {
   double input = -1.31417;
   input += synapse0x253ac50();
   input += synapse0x253ac90();
   input += synapse0x253acd0();
   input += synapse0x253ad10();
   input += synapse0x253ad50();
   input += synapse0x253ad90();
   input += synapse0x253add0();
   input += synapse0x253ae10();
   input += synapse0x253ae50();
   input += synapse0x253ae90();
   input += synapse0x253aed0();
   input += synapse0x253af10();
   input += synapse0x253af50();
   input += synapse0x253af90();
   input += synapse0x253afd0();
   input += synapse0x253b010();
   input += synapse0x253aaa0();
   input += synapse0x253aae0();
   input += synapse0x2537870();
   input += synapse0x25378b0();
   input += synapse0x25378f0();
   input += synapse0x2537930();
   input += synapse0x2537970();
   input += synapse0x25379b0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x253a910() {
   double input = input0x253a910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x25379f0() {
   double input = -0.227235;
   input += synapse0x2537d30();
   input += synapse0x2537d70();
   input += synapse0x2537db0();
   input += synapse0x2537df0();
   input += synapse0x2537e30();
   input += synapse0x2537e70();
   input += synapse0x2537eb0();
   input += synapse0x2537ef0();
   input += synapse0x2537f30();
   input += synapse0x2537f70();
   input += synapse0x2537fb0();
   input += synapse0x2537ff0();
   input += synapse0x2538030();
   input += synapse0x253c170();
   input += synapse0x253c1b0();
   input += synapse0x253c1f0();
   input += synapse0x2537b80();
   input += synapse0x2537bc0();
   input += synapse0x253c340();
   input += synapse0x253c380();
   input += synapse0x253c3c0();
   input += synapse0x253c400();
   input += synapse0x253c440();
   input += synapse0x253c480();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x25379f0() {
   double input = input0x25379f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x253c4c0() {
   double input = -1.23866;
   input += synapse0x253c800();
   input += synapse0x253c840();
   input += synapse0x253c880();
   input += synapse0x253c8c0();
   input += synapse0x253c900();
   input += synapse0x253c940();
   input += synapse0x253c980();
   input += synapse0x253c9c0();
   input += synapse0x253ca00();
   input += synapse0x253ca40();
   input += synapse0x253ca80();
   input += synapse0x253cac0();
   input += synapse0x253cb00();
   input += synapse0x253cb40();
   input += synapse0x253cb80();
   input += synapse0x253cbc0();
   input += synapse0x253c650();
   input += synapse0x253c690();
   input += synapse0x253cd10();
   input += synapse0x253cd50();
   input += synapse0x253cd90();
   input += synapse0x253cdd0();
   input += synapse0x253ce10();
   input += synapse0x253ce50();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x253c4c0() {
   double input = input0x253c4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x253ce90() {
   double input = 1.39754;
   input += synapse0x253d1d0();
   input += synapse0x253d210();
   input += synapse0x253d250();
   input += synapse0x253d290();
   input += synapse0x253d2d0();
   input += synapse0x253d310();
   input += synapse0x253d350();
   input += synapse0x253d390();
   input += synapse0x253d3d0();
   input += synapse0x253d410();
   input += synapse0x253d450();
   input += synapse0x253d490();
   input += synapse0x253d4d0();
   input += synapse0x253d510();
   input += synapse0x253d550();
   input += synapse0x253d590();
   input += synapse0x253d020();
   input += synapse0x253d060();
   input += synapse0x253d6e0();
   input += synapse0x253d720();
   input += synapse0x253d760();
   input += synapse0x253d7a0();
   input += synapse0x253d7e0();
   input += synapse0x253d820();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x253ce90() {
   double input = input0x253ce90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x253d860() {
   double input = -0.254889;
   input += synapse0x253dba0();
   input += synapse0x253dbe0();
   input += synapse0x253dc20();
   input += synapse0x253dc60();
   input += synapse0x253dca0();
   input += synapse0x253dce0();
   input += synapse0x253dd20();
   input += synapse0x253dd60();
   input += synapse0x253dda0();
   input += synapse0x253dde0();
   input += synapse0x253de20();
   input += synapse0x253de60();
   input += synapse0x253dea0();
   input += synapse0x253dee0();
   input += synapse0x253df20();
   input += synapse0x253df60();
   input += synapse0x253d9f0();
   input += synapse0x253da30();
   input += synapse0x253e0b0();
   input += synapse0x253e0f0();
   input += synapse0x253e130();
   input += synapse0x253e170();
   input += synapse0x253e1b0();
   input += synapse0x253e1f0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x253d860() {
   double input = input0x253d860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x253e230() {
   double input = 1.41923;
   input += synapse0x253e570();
   input += synapse0x252f900();
   input += synapse0x252f940();
   input += synapse0x252fc40();
   input += synapse0x252fc80();
   input += synapse0x252ff80();
   input += synapse0x252ffc0();
   input += synapse0x25302c0();
   input += synapse0x2530300();
   input += synapse0x2530600();
   input += synapse0x2530640();
   input += synapse0x2530940();
   input += synapse0x2530980();
   input += synapse0x2530c80();
   input += synapse0x2530cc0();
   input += synapse0x2530fc0();
   input += synapse0x2531000();
   input += synapse0x2531300();
   input += synapse0x2531340();
   input += synapse0x2531640();
   input += synapse0x2531680();
   input += synapse0x2531980();
   input += synapse0x25319c0();
   input += synapse0x2531cc0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x253e230() {
   double input = input0x253e230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2540040() {
   double input = 0.710428;
   input += synapse0x2531d00();
   input += synapse0x25329c0();
   input += synapse0x2532a00();
   input += synapse0x253e3c0();
   input += synapse0x253e400();
   input += synapse0x2532d00();
   input += synapse0x2532d40();
   input += synapse0x22ea760();
   input += synapse0x22ea7a0();
   input += synapse0x2533480();
   input += synapse0x25334c0();
   input += synapse0x25337c0();
   input += synapse0x2533800();
   input += synapse0x2533b00();
   input += synapse0x2533b40();
   input += synapse0x2533e40();
   input += synapse0x2533e80();
   input += synapse0x2534180();
   input += synapse0x25341c0();
   input += synapse0x25344c0();
   input += synapse0x2534500();
   input += synapse0x2532000();
   input += synapse0x2532040();
   input += synapse0x25402e0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2540040() {
   double input = input0x2540040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2540320() {
   double input = -1.08977;
   input += synapse0x2540660();
   input += synapse0x25406a0();
   input += synapse0x25406e0();
   input += synapse0x2540720();
   input += synapse0x2540760();
   input += synapse0x25407a0();
   input += synapse0x25407e0();
   input += synapse0x2540820();
   input += synapse0x2540860();
   input += synapse0x25408a0();
   input += synapse0x25408e0();
   input += synapse0x2540920();
   input += synapse0x2540960();
   input += synapse0x25409a0();
   input += synapse0x25409e0();
   input += synapse0x2540a20();
   input += synapse0x25404b0();
   input += synapse0x25404f0();
   input += synapse0x2540b70();
   input += synapse0x2540bb0();
   input += synapse0x2540bf0();
   input += synapse0x2540c30();
   input += synapse0x2540c70();
   input += synapse0x2540cb0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2540320() {
   double input = input0x2540320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2540cf0() {
   double input = 1.28283;
   input += synapse0x2541030();
   input += synapse0x2541070();
   input += synapse0x25410b0();
   input += synapse0x25410f0();
   input += synapse0x2541130();
   input += synapse0x2541170();
   input += synapse0x25411b0();
   input += synapse0x25411f0();
   input += synapse0x2541230();
   input += synapse0x2541270();
   input += synapse0x25412b0();
   input += synapse0x25412f0();
   input += synapse0x2541330();
   input += synapse0x2541370();
   input += synapse0x25413b0();
   input += synapse0x25413f0();
   input += synapse0x2540e80();
   input += synapse0x2540ec0();
   input += synapse0x2541540();
   input += synapse0x2541580();
   input += synapse0x25415c0();
   input += synapse0x2541600();
   input += synapse0x2541640();
   input += synapse0x2541680();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2540cf0() {
   double input = input0x2540cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x25416c0() {
   double input = -0.935167;
   input += synapse0x2541a00();
   input += synapse0x2541a40();
   input += synapse0x2541a80();
   input += synapse0x2541ac0();
   input += synapse0x2541b00();
   input += synapse0x2541b40();
   input += synapse0x2541b80();
   input += synapse0x2541bc0();
   input += synapse0x2541c00();
   input += synapse0x2541c40();
   input += synapse0x2541c80();
   input += synapse0x2541cc0();
   input += synapse0x2541d00();
   input += synapse0x2541d40();
   input += synapse0x2541d80();
   input += synapse0x2541dc0();
   input += synapse0x2541850();
   input += synapse0x2541890();
   input += synapse0x2541f10();
   input += synapse0x2541f50();
   input += synapse0x2541f90();
   input += synapse0x2541fd0();
   input += synapse0x2542010();
   input += synapse0x2542050();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x25416c0() {
   double input = input0x25416c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2542090() {
   double input = -0.528033;
   input += synapse0x25423d0();
   input += synapse0x2542410();
   input += synapse0x2542450();
   input += synapse0x2542490();
   input += synapse0x25424d0();
   input += synapse0x2542510();
   input += synapse0x2542550();
   input += synapse0x2542590();
   input += synapse0x25425d0();
   input += synapse0x2542610();
   input += synapse0x2542650();
   input += synapse0x2542690();
   input += synapse0x25426d0();
   input += synapse0x2542710();
   input += synapse0x2542750();
   input += synapse0x2542790();
   input += synapse0x2542220();
   input += synapse0x2542260();
   input += synapse0x25428e0();
   input += synapse0x2542920();
   input += synapse0x2542960();
   input += synapse0x25429a0();
   input += synapse0x25429e0();
   input += synapse0x2542a20();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2542090() {
   double input = input0x2542090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2542a60() {
   double input = -0.191645;
   input += synapse0x2542da0();
   input += synapse0x2542de0();
   input += synapse0x2542e20();
   input += synapse0x2542e60();
   input += synapse0x2542ea0();
   input += synapse0x2542ee0();
   input += synapse0x2542f20();
   input += synapse0x2542f60();
   input += synapse0x2542fa0();
   input += synapse0x253b160();
   input += synapse0x253b1a0();
   input += synapse0x253b1e0();
   input += synapse0x253b220();
   input += synapse0x253b260();
   input += synapse0x253b2a0();
   input += synapse0x253b2e0();
   input += synapse0x2542bf0();
   input += synapse0x2542c30();
   input += synapse0x253b430();
   input += synapse0x253b470();
   input += synapse0x253b4b0();
   input += synapse0x253b4f0();
   input += synapse0x253b530();
   input += synapse0x253b570();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2542a60() {
   double input = input0x2542a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x253b5b0() {
   double input = 0.211912;
   input += synapse0x253b8f0();
   input += synapse0x253b930();
   input += synapse0x253b970();
   input += synapse0x253b9b0();
   input += synapse0x253b9f0();
   input += synapse0x253ba30();
   input += synapse0x253ba70();
   input += synapse0x253bab0();
   input += synapse0x253baf0();
   input += synapse0x253bb30();
   input += synapse0x253bb70();
   input += synapse0x253bbb0();
   input += synapse0x253bbf0();
   input += synapse0x253bc30();
   input += synapse0x253bc70();
   input += synapse0x253bcb0();
   input += synapse0x253b740();
   input += synapse0x253b780();
   input += synapse0x253be00();
   input += synapse0x253be40();
   input += synapse0x253be80();
   input += synapse0x253bec0();
   input += synapse0x253bf00();
   input += synapse0x253bf40();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x253b5b0() {
   double input = input0x253b5b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x253bf80() {
   double input = 1.71425;
   input += synapse0x253c110();
   input += synapse0x25451a0();
   input += synapse0x25451e0();
   input += synapse0x2545220();
   input += synapse0x2545260();
   input += synapse0x25452a0();
   input += synapse0x25452e0();
   input += synapse0x2545320();
   input += synapse0x2545360();
   input += synapse0x25453a0();
   input += synapse0x25453e0();
   input += synapse0x2545420();
   input += synapse0x2545460();
   input += synapse0x25454a0();
   input += synapse0x25454e0();
   input += synapse0x2545520();
   input += synapse0x2544ff0();
   input += synapse0x2545030();
   input += synapse0x2545670();
   input += synapse0x25456b0();
   input += synapse0x25456f0();
   input += synapse0x2545730();
   input += synapse0x2545770();
   input += synapse0x25457b0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x253bf80() {
   double input = input0x253bf80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x25457f0() {
   double input = 0.256236;
   input += synapse0x2545b30();
   input += synapse0x2545b70();
   input += synapse0x2545bb0();
   input += synapse0x2545bf0();
   input += synapse0x2545c30();
   input += synapse0x2545c70();
   input += synapse0x2545cb0();
   input += synapse0x2545cf0();
   input += synapse0x2545d30();
   input += synapse0x2545d70();
   input += synapse0x2545db0();
   input += synapse0x2545df0();
   input += synapse0x2545e30();
   input += synapse0x2545e70();
   input += synapse0x2545eb0();
   input += synapse0x2545ef0();
   input += synapse0x2545980();
   input += synapse0x25459c0();
   input += synapse0x2546040();
   input += synapse0x2546080();
   input += synapse0x25460c0();
   input += synapse0x2546100();
   input += synapse0x2546140();
   input += synapse0x2546180();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x25457f0() {
   double input = input0x25457f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x25461c0() {
   double input = 0.674078;
   input += synapse0x2546500();
   input += synapse0x2546540();
   input += synapse0x2546580();
   input += synapse0x25465c0();
   input += synapse0x2546600();
   input += synapse0x2546640();
   input += synapse0x2546680();
   input += synapse0x25466c0();
   input += synapse0x2546700();
   input += synapse0x2546740();
   input += synapse0x2546780();
   input += synapse0x25467c0();
   input += synapse0x2546800();
   input += synapse0x2546840();
   input += synapse0x2546880();
   input += synapse0x25468c0();
   input += synapse0x2546350();
   input += synapse0x2546390();
   input += synapse0x2546a10();
   input += synapse0x2546a50();
   input += synapse0x2546a90();
   input += synapse0x2546ad0();
   input += synapse0x2546b10();
   input += synapse0x2546b50();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x25461c0() {
   double input = input0x25461c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2546b90() {
   double input = 0.668972;
   input += synapse0x2546ed0();
   input += synapse0x2546f10();
   input += synapse0x2546f50();
   input += synapse0x2546f90();
   input += synapse0x2546fd0();
   input += synapse0x2547010();
   input += synapse0x2547050();
   input += synapse0x2547090();
   input += synapse0x25470d0();
   input += synapse0x2547110();
   input += synapse0x2547150();
   input += synapse0x2547190();
   input += synapse0x25471d0();
   input += synapse0x2547210();
   input += synapse0x2547250();
   input += synapse0x2547290();
   input += synapse0x2546d20();
   input += synapse0x2546d60();
   input += synapse0x25473e0();
   input += synapse0x2547420();
   input += synapse0x2547460();
   input += synapse0x25474a0();
   input += synapse0x25474e0();
   input += synapse0x2547520();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2546b90() {
   double input = input0x2546b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2547560() {
   double input = -0.235474;
   input += synapse0x25478a0();
   input += synapse0x25478e0();
   input += synapse0x2547920();
   input += synapse0x2547960();
   input += synapse0x25479a0();
   input += synapse0x25479e0();
   input += synapse0x2547a20();
   input += synapse0x2547a60();
   input += synapse0x2547aa0();
   input += synapse0x2547ae0();
   input += synapse0x2547b20();
   input += synapse0x2547b60();
   input += synapse0x2547ba0();
   input += synapse0x2547be0();
   input += synapse0x2547c20();
   input += synapse0x2547c60();
   input += synapse0x25476f0();
   input += synapse0x2547730();
   input += synapse0x2547db0();
   input += synapse0x2547df0();
   input += synapse0x2547e30();
   input += synapse0x2547e70();
   input += synapse0x2547eb0();
   input += synapse0x2547ef0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2547560() {
   double input = input0x2547560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2547f30() {
   double input = 0.396107;
   input += synapse0x2548270();
   input += synapse0x25482b0();
   input += synapse0x25482f0();
   input += synapse0x2548330();
   input += synapse0x2548370();
   input += synapse0x25483b0();
   input += synapse0x25483f0();
   input += synapse0x2548430();
   input += synapse0x2548470();
   input += synapse0x25484b0();
   input += synapse0x25484f0();
   input += synapse0x2548530();
   input += synapse0x2548570();
   input += synapse0x25485b0();
   input += synapse0x25485f0();
   input += synapse0x2548630();
   input += synapse0x25480c0();
   input += synapse0x2548100();
   input += synapse0x2548780();
   input += synapse0x25487c0();
   input += synapse0x2548800();
   input += synapse0x2548840();
   input += synapse0x2548880();
   input += synapse0x25488c0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2547f30() {
   double input = input0x2547f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2548900() {
   double input = -1.10161;
   input += synapse0x2548c40();
   input += synapse0x2548c80();
   input += synapse0x2548cc0();
   input += synapse0x2548d00();
   input += synapse0x2548d40();
   input += synapse0x2548d80();
   input += synapse0x2548dc0();
   input += synapse0x2548e00();
   input += synapse0x2548e40();
   input += synapse0x2548e80();
   input += synapse0x2548ec0();
   input += synapse0x2548f00();
   input += synapse0x2548f40();
   input += synapse0x2548f80();
   input += synapse0x2548fc0();
   input += synapse0x2549000();
   input += synapse0x2548a90();
   input += synapse0x2548ad0();
   input += synapse0x2549150();
   input += synapse0x2549190();
   input += synapse0x25491d0();
   input += synapse0x2549210();
   input += synapse0x2549250();
   input += synapse0x2549290();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2548900() {
   double input = input0x2548900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x25492d0() {
   double input = 0.166636;
   input += synapse0x2549610();
   input += synapse0x2549650();
   input += synapse0x2549690();
   input += synapse0x25496d0();
   input += synapse0x2549710();
   input += synapse0x2549750();
   input += synapse0x2549790();
   input += synapse0x25497d0();
   input += synapse0x2549810();
   input += synapse0x2549850();
   input += synapse0x2549890();
   input += synapse0x25498d0();
   input += synapse0x2549910();
   input += synapse0x2549950();
   input += synapse0x2549990();
   input += synapse0x25499d0();
   input += synapse0x2549460();
   input += synapse0x25494a0();
   input += synapse0x2549b20();
   input += synapse0x2549b60();
   input += synapse0x2549ba0();
   input += synapse0x2549be0();
   input += synapse0x2549c20();
   input += synapse0x2549c60();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x25492d0() {
   double input = input0x25492d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2549ca0() {
   double input = 2.25947;
   input += synapse0x2549fe0();
   input += synapse0x253e5b0();
   input += synapse0x253e5f0();
   input += synapse0x253e630();
   input += synapse0x253e880();
   input += synapse0x253e8c0();
   input += synapse0x253e900();
   input += synapse0x253eb50();
   input += synapse0x253eb90();
   input += synapse0x253ede0();
   input += synapse0x253ee20();
   input += synapse0x253ee60();
   input += synapse0x253f0b0();
   input += synapse0x253f0f0();
   input += synapse0x253f340();
   input += synapse0x253f380();
   input += synapse0x2549e30();
   input += synapse0x2549e70();
   input += synapse0x253f4d0();
   input += synapse0x253f9e0();
   input += synapse0x253fa20();
   input += synapse0x253fa60();
   input += synapse0x253fcb0();
   input += synapse0x253fcf0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2549ca0() {
   double input = input0x2549ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x253fd30() {
   double input = -0.343018;
   input += synapse0x253f5a0();
   input += synapse0x253f5e0();
   input += synapse0x253f620();
   input += synapse0x253f660();
   input += synapse0x253ffe0();
   input += synapse0x254c330();
   input += synapse0x254c370();
   input += synapse0x254c3b0();
   input += synapse0x254c3f0();
   input += synapse0x254c430();
   input += synapse0x254c470();
   input += synapse0x254c4b0();
   input += synapse0x254c4f0();
   input += synapse0x254c530();
   input += synapse0x254c570();
   input += synapse0x254c5b0();
   input += synapse0x253fec0();
   input += synapse0x253ff00();
   input += synapse0x254c700();
   input += synapse0x254c740();
   input += synapse0x254c780();
   input += synapse0x254c7c0();
   input += synapse0x254c800();
   input += synapse0x254c840();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x253fd30() {
   double input = input0x253fd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x254c880() {
   double input = 2.94716;
   input += synapse0x254cbc0();
   input += synapse0x254cc00();
   input += synapse0x254cc40();
   input += synapse0x254cc80();
   input += synapse0x254ccc0();
   input += synapse0x254cd00();
   input += synapse0x254cd40();
   input += synapse0x254cd80();
   input += synapse0x254cdc0();
   input += synapse0x254ce00();
   input += synapse0x254ce40();
   input += synapse0x254ce80();
   input += synapse0x254cec0();
   input += synapse0x254cf00();
   input += synapse0x254cf40();
   input += synapse0x254cf80();
   input += synapse0x254ca10();
   input += synapse0x254ca50();
   input += synapse0x254d0d0();
   input += synapse0x254d110();
   input += synapse0x254d150();
   input += synapse0x254d190();
   input += synapse0x254d1d0();
   input += synapse0x254d210();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x254c880() {
   double input = input0x254c880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x254d250() {
   double input = 0.769857;
   input += synapse0x254d590();
   input += synapse0x254d5d0();
   input += synapse0x254d610();
   input += synapse0x254d650();
   input += synapse0x254d690();
   input += synapse0x254d6d0();
   input += synapse0x254d710();
   input += synapse0x254d750();
   input += synapse0x254d790();
   input += synapse0x254d7d0();
   input += synapse0x254d810();
   input += synapse0x254d850();
   input += synapse0x254d890();
   input += synapse0x254d8d0();
   input += synapse0x254d910();
   input += synapse0x254d950();
   input += synapse0x254d3e0();
   input += synapse0x254d420();
   input += synapse0x254daa0();
   input += synapse0x254dae0();
   input += synapse0x254db20();
   input += synapse0x254db60();
   input += synapse0x254dba0();
   input += synapse0x254dbe0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x254d250() {
   double input = input0x254d250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x254dc20() {
   double input = 6.08769;
   input += synapse0x254df60();
   input += synapse0x254dfa0();
   input += synapse0x254dfe0();
   input += synapse0x254e020();
   input += synapse0x254e060();
   input += synapse0x254e0a0();
   input += synapse0x254e0e0();
   input += synapse0x254e120();
   input += synapse0x254e160();
   input += synapse0x254e1a0();
   input += synapse0x254e1e0();
   input += synapse0x254e220();
   input += synapse0x254e260();
   input += synapse0x254e2a0();
   input += synapse0x254e2e0();
   input += synapse0x254e320();
   input += synapse0x254ddb0();
   input += synapse0x254ddf0();
   input += synapse0x254e470();
   input += synapse0x254e4b0();
   input += synapse0x254e4f0();
   input += synapse0x254e530();
   input += synapse0x254e570();
   input += synapse0x254e5b0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x254dc20() {
   double input = input0x254dc20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x254e5f0() {
   double input = 0.701942;
   input += synapse0x254e930();
   input += synapse0x254e970();
   input += synapse0x254e9b0();
   input += synapse0x254e9f0();
   input += synapse0x254ea30();
   input += synapse0x254ea70();
   input += synapse0x254eab0();
   input += synapse0x254eaf0();
   input += synapse0x254eb30();
   input += synapse0x254eb70();
   input += synapse0x254ebb0();
   input += synapse0x254ebf0();
   input += synapse0x254ec30();
   input += synapse0x254ec70();
   input += synapse0x254ecb0();
   input += synapse0x254ecf0();
   input += synapse0x254e780();
   input += synapse0x254e7c0();
   input += synapse0x254ee40();
   input += synapse0x254ee80();
   input += synapse0x254eec0();
   input += synapse0x254ef00();
   input += synapse0x254ef40();
   input += synapse0x254ef80();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x254e5f0() {
   double input = input0x254e5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x254efc0() {
   double input = 0.175405;
   input += synapse0x254f300();
   input += synapse0x254f340();
   input += synapse0x254f380();
   input += synapse0x254f3c0();
   input += synapse0x254f400();
   input += synapse0x254f440();
   input += synapse0x254f480();
   input += synapse0x254f4c0();
   input += synapse0x254f500();
   input += synapse0x254f540();
   input += synapse0x254f580();
   input += synapse0x254f5c0();
   input += synapse0x254f600();
   input += synapse0x254f640();
   input += synapse0x254f680();
   input += synapse0x254f6c0();
   input += synapse0x254f150();
   input += synapse0x254f190();
   input += synapse0x254f810();
   input += synapse0x254f850();
   input += synapse0x254f890();
   input += synapse0x254f8d0();
   input += synapse0x254f910();
   input += synapse0x254f950();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x254efc0() {
   double input = input0x254efc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x254f990() {
   double input = -2.87776;
   input += synapse0x254fcd0();
   input += synapse0x254fd10();
   input += synapse0x254fd50();
   input += synapse0x254fd90();
   input += synapse0x254fdd0();
   input += synapse0x254fe10();
   input += synapse0x254fe50();
   input += synapse0x254fe90();
   input += synapse0x254fed0();
   input += synapse0x254ff10();
   input += synapse0x254ff50();
   input += synapse0x254ff90();
   input += synapse0x254ffd0();
   input += synapse0x2550010();
   input += synapse0x2550050();
   input += synapse0x2550090();
   input += synapse0x254fb20();
   input += synapse0x254fb60();
   input += synapse0x25501e0();
   input += synapse0x2550220();
   input += synapse0x2550260();
   input += synapse0x25502a0();
   input += synapse0x25502e0();
   input += synapse0x2550320();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x254f990() {
   double input = input0x254f990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2550360() {
   double input = -1.64363;
   input += synapse0x25506a0();
   input += synapse0x25506e0();
   input += synapse0x2550720();
   input += synapse0x2550760();
   input += synapse0x25507a0();
   input += synapse0x25507e0();
   input += synapse0x2550820();
   input += synapse0x2550860();
   input += synapse0x25508a0();
   input += synapse0x25508e0();
   input += synapse0x2550920();
   input += synapse0x2550960();
   input += synapse0x25509a0();
   input += synapse0x25509e0();
   input += synapse0x2550a20();
   input += synapse0x2550a60();
   input += synapse0x25504f0();
   input += synapse0x2550530();
   input += synapse0x2550bb0();
   input += synapse0x2550bf0();
   input += synapse0x2550c30();
   input += synapse0x2550c70();
   input += synapse0x2550cb0();
   input += synapse0x2550cf0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2550360() {
   double input = input0x2550360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2550d30() {
   double input = -0.714838;
   input += synapse0x25397a0();
   input += synapse0x25397e0();
   input += synapse0x2539820();
   input += synapse0x2539860();
   input += synapse0x25398a0();
   input += synapse0x25398e0();
   input += synapse0x2539920();
   input += synapse0x2539960();
   input += synapse0x2551480();
   input += synapse0x25514c0();
   input += synapse0x2551500();
   input += synapse0x2551540();
   input += synapse0x2551580();
   input += synapse0x25515c0();
   input += synapse0x2551600();
   input += synapse0x2551640();
   input += synapse0x2550ec0();
   input += synapse0x2550f00();
   input += synapse0x2551790();
   input += synapse0x25517d0();
   input += synapse0x2551810();
   input += synapse0x2551850();
   input += synapse0x2551890();
   input += synapse0x25518d0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2550d30() {
   double input = input0x2550d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2551910() {
   double input = 2.92772;
   input += synapse0x2551c50();
   input += synapse0x2551c90();
   input += synapse0x2551cd0();
   input += synapse0x2551d10();
   input += synapse0x2551d50();
   input += synapse0x2551d90();
   input += synapse0x2551dd0();
   input += synapse0x2551e10();
   input += synapse0x2551e50();
   input += synapse0x2551e90();
   input += synapse0x2551ed0();
   input += synapse0x2551f10();
   input += synapse0x2551f50();
   input += synapse0x2551f90();
   input += synapse0x2551fd0();
   input += synapse0x2552010();
   input += synapse0x2551aa0();
   input += synapse0x2551ae0();
   input += synapse0x2552160();
   input += synapse0x25521a0();
   input += synapse0x25521e0();
   input += synapse0x2552220();
   input += synapse0x2552260();
   input += synapse0x25522a0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2551910() {
   double input = input0x2551910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x25522e0() {
   double input = 1.01528;
   input += synapse0x2552620();
   input += synapse0x2552660();
   input += synapse0x25526a0();
   input += synapse0x25526e0();
   input += synapse0x2552720();
   input += synapse0x2552760();
   input += synapse0x25527a0();
   input += synapse0x25527e0();
   input += synapse0x2552820();
   input += synapse0x2552860();
   input += synapse0x25528a0();
   input += synapse0x25528e0();
   input += synapse0x2552920();
   input += synapse0x2552960();
   input += synapse0x25529a0();
   input += synapse0x25529e0();
   input += synapse0x2552470();
   input += synapse0x25524b0();
   input += synapse0x2542fe0();
   input += synapse0x2543020();
   input += synapse0x2543060();
   input += synapse0x25430a0();
   input += synapse0x25430e0();
   input += synapse0x2543120();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x25522e0() {
   double input = input0x25522e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2543160() {
   double input = 1.71273;
   input += synapse0x25434a0();
   input += synapse0x25434e0();
   input += synapse0x2543520();
   input += synapse0x2543560();
   input += synapse0x25435a0();
   input += synapse0x25435e0();
   input += synapse0x2543620();
   input += synapse0x2543660();
   input += synapse0x25436a0();
   input += synapse0x25436e0();
   input += synapse0x2543720();
   input += synapse0x2543760();
   input += synapse0x25437a0();
   input += synapse0x25437e0();
   input += synapse0x2543820();
   input += synapse0x2543860();
   input += synapse0x25432f0();
   input += synapse0x2543330();
   input += synapse0x25439b0();
   input += synapse0x25439f0();
   input += synapse0x2543a30();
   input += synapse0x2543a70();
   input += synapse0x2543ab0();
   input += synapse0x2543af0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2543160() {
   double input = input0x2543160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2543b30() {
   double input = 1.8767;
   input += synapse0x2543e70();
   input += synapse0x2543eb0();
   input += synapse0x2543ef0();
   input += synapse0x2543f30();
   input += synapse0x2543f70();
   input += synapse0x2543fb0();
   input += synapse0x2543ff0();
   input += synapse0x2544030();
   input += synapse0x2544070();
   input += synapse0x25440b0();
   input += synapse0x25440f0();
   input += synapse0x2544130();
   input += synapse0x2544170();
   input += synapse0x25441b0();
   input += synapse0x25441f0();
   input += synapse0x2544230();
   input += synapse0x2543cc0();
   input += synapse0x2543d00();
   input += synapse0x2544380();
   input += synapse0x25443c0();
   input += synapse0x2544400();
   input += synapse0x2544440();
   input += synapse0x2544480();
   input += synapse0x25444c0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2543b30() {
   double input = input0x2543b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2544500() {
   double input = 0.367574;
   input += synapse0x2544840();
   input += synapse0x2544880();
   input += synapse0x25448c0();
   input += synapse0x2544900();
   input += synapse0x2544940();
   input += synapse0x2544980();
   input += synapse0x25449c0();
   input += synapse0x2544a00();
   input += synapse0x2544a40();
   input += synapse0x2544a80();
   input += synapse0x2544ac0();
   input += synapse0x2544b00();
   input += synapse0x2544b40();
   input += synapse0x2544b80();
   input += synapse0x2544bc0();
   input += synapse0x2544c00();
   input += synapse0x2544690();
   input += synapse0x25446d0();
   input += synapse0x2544d50();
   input += synapse0x2544d90();
   input += synapse0x2544dd0();
   input += synapse0x2544e10();
   input += synapse0x2544e50();
   input += synapse0x2544e90();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2544500() {
   double input = input0x2544500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2556b40() {
   double input = 0.485776;
   input += synapse0x2556d60();
   input += synapse0x2556da0();
   input += synapse0x2556de0();
   input += synapse0x2556e20();
   input += synapse0x2556e60();
   input += synapse0x2556ea0();
   input += synapse0x2556ee0();
   input += synapse0x2556f20();
   input += synapse0x2556f60();
   input += synapse0x2556fa0();
   input += synapse0x2556fe0();
   input += synapse0x2557020();
   input += synapse0x2557060();
   input += synapse0x25570a0();
   input += synapse0x25570e0();
   input += synapse0x2557120();
   input += synapse0x2544ed0();
   input += synapse0x2544f10();
   input += synapse0x2557270();
   input += synapse0x25572b0();
   input += synapse0x25572f0();
   input += synapse0x2557330();
   input += synapse0x2557370();
   input += synapse0x25573b0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2556b40() {
   double input = input0x2556b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x25573f0() {
   double input = 0.776182;
   input += synapse0x2557730();
   input += synapse0x2557770();
   input += synapse0x25577b0();
   input += synapse0x25577f0();
   input += synapse0x2557830();
   input += synapse0x2557870();
   input += synapse0x25578b0();
   input += synapse0x25578f0();
   input += synapse0x2557930();
   input += synapse0x2557970();
   input += synapse0x25579b0();
   input += synapse0x25579f0();
   input += synapse0x2557a30();
   input += synapse0x2557a70();
   input += synapse0x2557ab0();
   input += synapse0x2557af0();
   input += synapse0x2557580();
   input += synapse0x25575c0();
   input += synapse0x2557c40();
   input += synapse0x2557c80();
   input += synapse0x2557cc0();
   input += synapse0x2557d00();
   input += synapse0x2557d40();
   input += synapse0x2557d80();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x25573f0() {
   double input = input0x25573f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2557dc0() {
   double input = -1.2278;
   input += synapse0x2558100();
   input += synapse0x2558140();
   input += synapse0x2558180();
   input += synapse0x25581c0();
   input += synapse0x2558200();
   input += synapse0x2558240();
   input += synapse0x2558280();
   input += synapse0x25582c0();
   input += synapse0x2558300();
   input += synapse0x2558340();
   input += synapse0x2558380();
   input += synapse0x25583c0();
   input += synapse0x2558400();
   input += synapse0x2558440();
   input += synapse0x2558480();
   input += synapse0x25584c0();
   input += synapse0x2557f50();
   input += synapse0x2557f90();
   input += synapse0x2558610();
   input += synapse0x2558650();
   input += synapse0x2558690();
   input += synapse0x25586d0();
   input += synapse0x2558710();
   input += synapse0x2558750();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2557dc0() {
   double input = input0x2557dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2558790() {
   double input = 0.480586;
   input += synapse0x2558ad0();
   input += synapse0x2558b10();
   input += synapse0x2558b50();
   input += synapse0x2558b90();
   input += synapse0x2558bd0();
   input += synapse0x2558c10();
   input += synapse0x2558c50();
   input += synapse0x2558c90();
   input += synapse0x2558cd0();
   input += synapse0x2558d10();
   input += synapse0x2558d50();
   input += synapse0x2558d90();
   input += synapse0x2558dd0();
   input += synapse0x2558e10();
   input += synapse0x2558e50();
   input += synapse0x2558e90();
   input += synapse0x2558920();
   input += synapse0x2558960();
   input += synapse0x2558fe0();
   input += synapse0x2559020();
   input += synapse0x2559060();
   input += synapse0x25590a0();
   input += synapse0x25590e0();
   input += synapse0x2559120();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2558790() {
   double input = input0x2558790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x255f990() {
   double input = -3.10102;
   input += synapse0x22f9030();
   input += synapse0x22f9070();
   input += synapse0x2536bd0();
   input += synapse0x2536c10();
   input += synapse0x25375a0();
   input += synapse0x25375e0();
   input += synapse0x2538370();
   input += synapse0x25383b0();
   input += synapse0x2538d40();
   input += synapse0x2538d80();
   input += synapse0x2539710();
   input += synapse0x2539750();
   input += synapse0x253a1f0();
   input += synapse0x253a230();
   input += synapse0x253abc0();
   input += synapse0x253ac00();
   input += synapse0x2537ca0();
   input += synapse0x2537ce0();
   input += synapse0x253c770();
   input += synapse0x253c7b0();
   input += synapse0x253d140();
   input += synapse0x253d180();
   input += synapse0x253db10();
   input += synapse0x253db50();
   input += synapse0x253e4e0();
   input += synapse0x253e520();
   input += synapse0x2532680();
   input += synapse0x25326c0();
   input += synapse0x25405d0();
   input += synapse0x2540610();
   input += synapse0x2540fa0();
   input += synapse0x2540fe0();
   input += synapse0x2541970();
   input += synapse0x25419b0();
   input += synapse0x2542340();
   input += synapse0x2542380();
   input += synapse0x2542d10();
   input += synapse0x2542d50();
   input += synapse0x253b860();
   input += synapse0x253b8a0();
   input += synapse0x2545110();
   input += synapse0x2545150();
   input += synapse0x2545aa0();
   input += synapse0x2545ae0();
   input += synapse0x2546470();
   input += synapse0x25464b0();
   input += synapse0x2546e40();
   input += synapse0x2546e80();
   input += synapse0x2547810();
   input += synapse0x2547850();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x255f990() {
   double input = input0x255f990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x255fd30() {
   double input = 1.09494;
   input += synapse0x2549f50();
   input += synapse0x2549f90();
   input += synapse0x253f510();
   input += synapse0x253f550();
   input += synapse0x254cb30();
   input += synapse0x254cb70();
   input += synapse0x254d500();
   input += synapse0x254d540();
   input += synapse0x254ded0();
   input += synapse0x254df10();
   input += synapse0x254e8a0();
   input += synapse0x254e8e0();
   input += synapse0x254f270();
   input += synapse0x254f2b0();
   input += synapse0x254fc40();
   input += synapse0x254fc80();
   input += synapse0x2550610();
   input += synapse0x2550650();
   input += synapse0x2550fe0();
   input += synapse0x2551020();
   input += synapse0x2551bc0();
   input += synapse0x2551c00();
   input += synapse0x2552590();
   input += synapse0x25525d0();
   input += synapse0x2543410();
   input += synapse0x2543450();
   input += synapse0x2543de0();
   input += synapse0x2543e20();
   input += synapse0x25447b0();
   input += synapse0x25447f0();
   input += synapse0x2556cd0();
   input += synapse0x2556d10();
   input += synapse0x25576a0();
   input += synapse0x25576e0();
   input += synapse0x2558070();
   input += synapse0x25580b0();
   input += synapse0x2558a40();
   input += synapse0x2558a80();
   input += synapse0x2534930();
   input += synapse0x2534970();
   input += synapse0x25481e0();
   input += synapse0x2548220();
   input += synapse0x2559160();
   input += synapse0x25591a0();
   input += synapse0x25591e0();
   input += synapse0x2559220();
   input += synapse0x25600d0();
   input += synapse0x2560110();
   input += synapse0x2560150();
   input += synapse0x2560190();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x255fd30() {
   double input = input0x255fd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x25601d0() {
   double input = 0.728835;
   input += synapse0x2560510();
   input += synapse0x2560550();
   input += synapse0x2560590();
   input += synapse0x25605d0();
   input += synapse0x2560610();
   input += synapse0x2560650();
   input += synapse0x2560690();
   input += synapse0x25606d0();
   input += synapse0x2560710();
   input += synapse0x2560750();
   input += synapse0x2560790();
   input += synapse0x25607d0();
   input += synapse0x2560810();
   input += synapse0x2560850();
   input += synapse0x2560890();
   input += synapse0x25608d0();
   input += synapse0x2560360();
   input += synapse0x25603a0();
   input += synapse0x2560a20();
   input += synapse0x2560a60();
   input += synapse0x2560aa0();
   input += synapse0x2560ae0();
   input += synapse0x2560b20();
   input += synapse0x2560b60();
   input += synapse0x2560ba0();
   input += synapse0x2560be0();
   input += synapse0x2560c20();
   input += synapse0x2560c60();
   input += synapse0x2560ca0();
   input += synapse0x2560ce0();
   input += synapse0x2560d20();
   input += synapse0x2560d60();
   input += synapse0x2560910();
   input += synapse0x2560950();
   input += synapse0x2560990();
   input += synapse0x25609d0();
   input += synapse0x2560fb0();
   input += synapse0x2560ff0();
   input += synapse0x2561030();
   input += synapse0x2561070();
   input += synapse0x25610b0();
   input += synapse0x25610f0();
   input += synapse0x2561130();
   input += synapse0x2561170();
   input += synapse0x25611b0();
   input += synapse0x25611f0();
   input += synapse0x2561230();
   input += synapse0x2561270();
   input += synapse0x25612b0();
   input += synapse0x25612f0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x25601d0() {
   double input = input0x25601d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2561330() {
   double input = 0.125856;
   input += synapse0x2561670();
   input += synapse0x25616b0();
   input += synapse0x25616f0();
   input += synapse0x2561730();
   input += synapse0x2561770();
   input += synapse0x25617b0();
   input += synapse0x25617f0();
   input += synapse0x2561830();
   input += synapse0x2561870();
   input += synapse0x25618b0();
   input += synapse0x25618f0();
   input += synapse0x2561930();
   input += synapse0x2561970();
   input += synapse0x25619b0();
   input += synapse0x25619f0();
   input += synapse0x2561a30();
   input += synapse0x25614c0();
   input += synapse0x2561500();
   input += synapse0x2561b80();
   input += synapse0x2561bc0();
   input += synapse0x2561c00();
   input += synapse0x2561c40();
   input += synapse0x2561c80();
   input += synapse0x2561cc0();
   input += synapse0x2561d00();
   input += synapse0x2561d40();
   input += synapse0x2561d80();
   input += synapse0x2561dc0();
   input += synapse0x2561e00();
   input += synapse0x2561e40();
   input += synapse0x2561e80();
   input += synapse0x2561ec0();
   input += synapse0x2561a70();
   input += synapse0x2561ab0();
   input += synapse0x2561af0();
   input += synapse0x2561b30();
   input += synapse0x2562110();
   input += synapse0x2562150();
   input += synapse0x2562190();
   input += synapse0x25621d0();
   input += synapse0x2562210();
   input += synapse0x2562250();
   input += synapse0x2562290();
   input += synapse0x25622d0();
   input += synapse0x2562310();
   input += synapse0x2562350();
   input += synapse0x2562390();
   input += synapse0x25623d0();
   input += synapse0x2562410();
   input += synapse0x2562450();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2561330() {
   double input = input0x2561330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x2562490() {
   double input = -2.83626;
   input += synapse0x25627d0();
   input += synapse0x2562810();
   input += synapse0x2562850();
   input += synapse0x2562890();
   input += synapse0x25628d0();
   input += synapse0x2562910();
   input += synapse0x2562950();
   input += synapse0x2562990();
   input += synapse0x25629d0();
   input += synapse0x2562a10();
   input += synapse0x2562a50();
   input += synapse0x2562a90();
   input += synapse0x2562ad0();
   input += synapse0x2562b10();
   input += synapse0x2562b50();
   input += synapse0x2562b90();
   input += synapse0x2562620();
   input += synapse0x2562660();
   input += synapse0x2562ce0();
   input += synapse0x2562d20();
   input += synapse0x2562d60();
   input += synapse0x2562da0();
   input += synapse0x2562de0();
   input += synapse0x2562e20();
   input += synapse0x2562e60();
   input += synapse0x2562ea0();
   input += synapse0x2562ee0();
   input += synapse0x2562f20();
   input += synapse0x2562f60();
   input += synapse0x2562fa0();
   input += synapse0x2562fe0();
   input += synapse0x2563020();
   input += synapse0x2562bd0();
   input += synapse0x2562c10();
   input += synapse0x2562c50();
   input += synapse0x2562c90();
   input += synapse0x2563270();
   input += synapse0x25632b0();
   input += synapse0x25632f0();
   input += synapse0x2563330();
   input += synapse0x2563370();
   input += synapse0x25633b0();
   input += synapse0x25633f0();
   input += synapse0x2563430();
   input += synapse0x2563470();
   input += synapse0x25634b0();
   input += synapse0x25634f0();
   input += synapse0x2563530();
   input += synapse0x2563570();
   input += synapse0x25635b0();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x2562490() {
   double input = input0x2562490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cR::input0x25635f0() {
   double input = 3.66773;
   input += synapse0x2563810();
   input += synapse0x2563850();
   input += synapse0x2563890();
   input += synapse0x25638d0();
   input += synapse0x2563910();
   return input;
}

double NNfunction_ns_chi04_cR::neuron0x25635f0() {
   double input = input0x25635f0();
   return (input * 1)+0;
}

double NNfunction_ns_chi04_cR::synapse0x252f5a0() {
   return (neuron0x252f6e0()*0.415452);
}

double NNfunction_ns_chi04_cR::synapse0x252f5e0() {
   return (neuron0x252fa20()*-1.5183);
}

double NNfunction_ns_chi04_cR::synapse0x25349c0() {
   return (neuron0x252fd60()*0.28411);
}

double NNfunction_ns_chi04_cR::synapse0x2534a00() {
   return (neuron0x25300a0()*0.898207);
}

double NNfunction_ns_chi04_cR::synapse0x2534a40() {
   return (neuron0x25303e0()*-0.413262);
}

double NNfunction_ns_chi04_cR::synapse0x2534a80() {
   return (neuron0x2530720()*2.28718);
}

double NNfunction_ns_chi04_cR::synapse0x2534ac0() {
   return (neuron0x2530a60()*-0.586228);
}

double NNfunction_ns_chi04_cR::synapse0x2534b00() {
   return (neuron0x2530da0()*-0.966853);
}

double NNfunction_ns_chi04_cR::synapse0x2534b40() {
   return (neuron0x25310e0()*-0.106377);
}

double NNfunction_ns_chi04_cR::synapse0x2534b80() {
   return (neuron0x2531420()*-0.408061);
}

double NNfunction_ns_chi04_cR::synapse0x2534bc0() {
   return (neuron0x2531760()*0.702025);
}

double NNfunction_ns_chi04_cR::synapse0x2534c00() {
   return (neuron0x2531aa0()*0.500008);
}

double NNfunction_ns_chi04_cR::synapse0x2534c40() {
   return (neuron0x2531de0()*0.801504);
}

double NNfunction_ns_chi04_cR::synapse0x2534c80() {
   return (neuron0x2532120()*1.24325);
}

double NNfunction_ns_chi04_cR::synapse0x2534cc0() {
   return (neuron0x2532460()*0.453371);
}

double NNfunction_ns_chi04_cR::synapse0x2534d00() {
   return (neuron0x25327a0()*0.324781);
}

double NNfunction_ns_chi04_cR::synapse0x252f510() {
   return (neuron0x2532ae0()*0.36819);
}

double NNfunction_ns_chi04_cR::synapse0x252f550() {
   return (neuron0x2533040()*1.20546);
}

double NNfunction_ns_chi04_cR::synapse0x22ea880() {
   return (neuron0x2533260()*0.170014);
}

double NNfunction_ns_chi04_cR::synapse0x22ea8c0() {
   return (neuron0x25335a0()*1.10982);
}

double NNfunction_ns_chi04_cR::synapse0x2534f60() {
   return (neuron0x25338e0()*-0.501868);
}

double NNfunction_ns_chi04_cR::synapse0x2534fa0() {
   return (neuron0x2533c20()*-0.278428);
}

double NNfunction_ns_chi04_cR::synapse0x2534fe0() {
   return (neuron0x2533f60()*-0.471966);
}

double NNfunction_ns_chi04_cR::synapse0x2535020() {
   return (neuron0x25342a0()*0.340955);
}

double NNfunction_ns_chi04_cR::synapse0x25353a0() {
   return (neuron0x252f6e0()*-0.239996);
}

double NNfunction_ns_chi04_cR::synapse0x25353e0() {
   return (neuron0x252fa20()*-0.128362);
}

double NNfunction_ns_chi04_cR::synapse0x2535420() {
   return (neuron0x252fd60()*0.454377);
}

double NNfunction_ns_chi04_cR::synapse0x2535460() {
   return (neuron0x25300a0()*0.653802);
}

double NNfunction_ns_chi04_cR::synapse0x25354a0() {
   return (neuron0x25303e0()*0.260333);
}

double NNfunction_ns_chi04_cR::synapse0x25354e0() {
   return (neuron0x2530720()*-0.0151262);
}

double NNfunction_ns_chi04_cR::synapse0x2535520() {
   return (neuron0x2530a60()*-0.266716);
}

double NNfunction_ns_chi04_cR::synapse0x2535560() {
   return (neuron0x2530da0()*0.283276);
}

double NNfunction_ns_chi04_cR::synapse0x25355a0() {
   return (neuron0x25310e0()*-0.4278);
}

double NNfunction_ns_chi04_cR::synapse0x2534e50() {
   return (neuron0x2531420()*-0.505489);
}

double NNfunction_ns_chi04_cR::synapse0x2534e90() {
   return (neuron0x2531760()*-0.31309);
}

double NNfunction_ns_chi04_cR::synapse0x2534ed0() {
   return (neuron0x2531aa0()*-0.277946);
}

double NNfunction_ns_chi04_cR::synapse0x2534f10() {
   return (neuron0x2531de0()*-0.0373414);
}

double NNfunction_ns_chi04_cR::synapse0x25357f0() {
   return (neuron0x2532120()*-0.354085);
}

double NNfunction_ns_chi04_cR::synapse0x2535830() {
   return (neuron0x2532460()*-0.380974);
}

double NNfunction_ns_chi04_cR::synapse0x2535870() {
   return (neuron0x25327a0()*-0.820428);
}

double NNfunction_ns_chi04_cR::synapse0x25351f0() {
   return (neuron0x2532ae0()*-0.113821);
}

double NNfunction_ns_chi04_cR::synapse0x2535230() {
   return (neuron0x2533040()*0.301412);
}

double NNfunction_ns_chi04_cR::synapse0x25359c0() {
   return (neuron0x2533260()*0.0870689);
}

double NNfunction_ns_chi04_cR::synapse0x2535a00() {
   return (neuron0x25335a0()*-0.396576);
}

double NNfunction_ns_chi04_cR::synapse0x2535a40() {
   return (neuron0x25338e0()*-0.573399);
}

double NNfunction_ns_chi04_cR::synapse0x2535a80() {
   return (neuron0x2533c20()*0.384548);
}

double NNfunction_ns_chi04_cR::synapse0x2535ac0() {
   return (neuron0x2533f60()*0.103263);
}

double NNfunction_ns_chi04_cR::synapse0x2535b00() {
   return (neuron0x25342a0()*0.257362);
}

double NNfunction_ns_chi04_cR::synapse0x2535e80() {
   return (neuron0x252f6e0()*0.345296);
}

double NNfunction_ns_chi04_cR::synapse0x2535ec0() {
   return (neuron0x252fa20()*0.895965);
}

double NNfunction_ns_chi04_cR::synapse0x2535f00() {
   return (neuron0x252fd60()*1.15516);
}

double NNfunction_ns_chi04_cR::synapse0x2535f40() {
   return (neuron0x25300a0()*-0.970139);
}

double NNfunction_ns_chi04_cR::synapse0x2535f80() {
   return (neuron0x25303e0()*0.552456);
}

double NNfunction_ns_chi04_cR::synapse0x2535fc0() {
   return (neuron0x2530720()*0.366136);
}

double NNfunction_ns_chi04_cR::synapse0x2536000() {
   return (neuron0x2530a60()*-0.780126);
}

double NNfunction_ns_chi04_cR::synapse0x2536040() {
   return (neuron0x2530da0()*-0.599141);
}

double NNfunction_ns_chi04_cR::synapse0x2536080() {
   return (neuron0x25310e0()*0.872865);
}

double NNfunction_ns_chi04_cR::synapse0x25360c0() {
   return (neuron0x2531420()*-0.490204);
}

double NNfunction_ns_chi04_cR::synapse0x2536100() {
   return (neuron0x2531760()*-0.872335);
}

double NNfunction_ns_chi04_cR::synapse0x2536140() {
   return (neuron0x2531aa0()*-0.186036);
}

double NNfunction_ns_chi04_cR::synapse0x2536180() {
   return (neuron0x2531de0()*-0.638494);
}

double NNfunction_ns_chi04_cR::synapse0x25361c0() {
   return (neuron0x2532120()*0.503705);
}

double NNfunction_ns_chi04_cR::synapse0x2536200() {
   return (neuron0x2532460()*-0.335901);
}

double NNfunction_ns_chi04_cR::synapse0x2536240() {
   return (neuron0x25327a0()*-0.749423);
}

double NNfunction_ns_chi04_cR::synapse0x2535cd0() {
   return (neuron0x2532ae0()*-0.989303);
}

double NNfunction_ns_chi04_cR::synapse0x2535d10() {
   return (neuron0x2533040()*0.00787122);
}

double NNfunction_ns_chi04_cR::synapse0x22eaf70() {
   return (neuron0x2533260()*0.169723);
}

double NNfunction_ns_chi04_cR::synapse0x22f8840() {
   return (neuron0x25335a0()*0.228679);
}

double NNfunction_ns_chi04_cR::synapse0x22f8880() {
   return (neuron0x25338e0()*-0.0920685);
}

double NNfunction_ns_chi04_cR::synapse0x251e770() {
   return (neuron0x2533c20()*1.1019);
}

double NNfunction_ns_chi04_cR::synapse0x251e7b0() {
   return (neuron0x2533f60()*0.635532);
}

double NNfunction_ns_chi04_cR::synapse0x251e7f0() {
   return (neuron0x25342a0()*-1.90826);
}

double NNfunction_ns_chi04_cR::synapse0x22f90c0() {
   return (neuron0x252f6e0()*0.0245185);
}

double NNfunction_ns_chi04_cR::synapse0x2535770() {
   return (neuron0x252fa20()*-5.10266);
}

double NNfunction_ns_chi04_cR::synapse0x25357b0() {
   return (neuron0x252fd60()*0.305325);
}

double NNfunction_ns_chi04_cR::synapse0x2536390() {
   return (neuron0x25300a0()*0.0181703);
}

double NNfunction_ns_chi04_cR::synapse0x25363d0() {
   return (neuron0x25303e0()*0.0379019);
}

double NNfunction_ns_chi04_cR::synapse0x2536410() {
   return (neuron0x2530720()*0.0169071);
}

double NNfunction_ns_chi04_cR::synapse0x2536450() {
   return (neuron0x2530a60()*0.0684044);
}

double NNfunction_ns_chi04_cR::synapse0x2536490() {
   return (neuron0x2530da0()*0.044707);
}

double NNfunction_ns_chi04_cR::synapse0x25364d0() {
   return (neuron0x25310e0()*-0.0210425);
}

double NNfunction_ns_chi04_cR::synapse0x2536510() {
   return (neuron0x2531420()*0.00395793);
}

double NNfunction_ns_chi04_cR::synapse0x2536550() {
   return (neuron0x2531760()*-0.0120295);
}

double NNfunction_ns_chi04_cR::synapse0x2536590() {
   return (neuron0x2531aa0()*-0.00617455);
}

double NNfunction_ns_chi04_cR::synapse0x25365d0() {
   return (neuron0x2531de0()*-0.0250656);
}

double NNfunction_ns_chi04_cR::synapse0x2536610() {
   return (neuron0x2532120()*0.00187658);
}

double NNfunction_ns_chi04_cR::synapse0x2536650() {
   return (neuron0x2532460()*0.031863);
}

double NNfunction_ns_chi04_cR::synapse0x2536690() {
   return (neuron0x25327a0()*0.274582);
}

double NNfunction_ns_chi04_cR::synapse0x252f620() {
   return (neuron0x2532ae0()*0.019436);
}

double NNfunction_ns_chi04_cR::synapse0x252f660() {
   return (neuron0x2533040()*-0.010736);
}

double NNfunction_ns_chi04_cR::synapse0x252f6a0() {
   return (neuron0x2533260()*-0.00305289);
}

double NNfunction_ns_chi04_cR::synapse0x25367e0() {
   return (neuron0x25335a0()*-0.0226437);
}

double NNfunction_ns_chi04_cR::synapse0x2536820() {
   return (neuron0x25338e0()*0.0362883);
}

double NNfunction_ns_chi04_cR::synapse0x2536860() {
   return (neuron0x2533c20()*0.0172936);
}

double NNfunction_ns_chi04_cR::synapse0x25368a0() {
   return (neuron0x2533f60()*0.0276518);
}

double NNfunction_ns_chi04_cR::synapse0x25368e0() {
   return (neuron0x25342a0()*0.402739);
}

double NNfunction_ns_chi04_cR::synapse0x2536c60() {
   return (neuron0x252f6e0()*-0.890842);
}

double NNfunction_ns_chi04_cR::synapse0x2536ca0() {
   return (neuron0x252fa20()*-0.0578265);
}

double NNfunction_ns_chi04_cR::synapse0x2536ce0() {
   return (neuron0x252fd60()*-1.02898);
}

double NNfunction_ns_chi04_cR::synapse0x2536d20() {
   return (neuron0x25300a0()*0.230011);
}

double NNfunction_ns_chi04_cR::synapse0x2536d60() {
   return (neuron0x25303e0()*-0.790782);
}

double NNfunction_ns_chi04_cR::synapse0x2536da0() {
   return (neuron0x2530720()*0.10411);
}

double NNfunction_ns_chi04_cR::synapse0x2536de0() {
   return (neuron0x2530a60()*-1.44767);
}

double NNfunction_ns_chi04_cR::synapse0x2536e20() {
   return (neuron0x2530da0()*-0.522206);
}

double NNfunction_ns_chi04_cR::synapse0x2536e60() {
   return (neuron0x25310e0()*-0.854571);
}

double NNfunction_ns_chi04_cR::synapse0x2536ea0() {
   return (neuron0x2531420()*-0.275504);
}

double NNfunction_ns_chi04_cR::synapse0x2536ee0() {
   return (neuron0x2531760()*0.124365);
}

double NNfunction_ns_chi04_cR::synapse0x2536f20() {
   return (neuron0x2531aa0()*-0.786075);
}

double NNfunction_ns_chi04_cR::synapse0x2536f60() {
   return (neuron0x2531de0()*1.6165);
}

double NNfunction_ns_chi04_cR::synapse0x2536fa0() {
   return (neuron0x2532120()*0.468064);
}

double NNfunction_ns_chi04_cR::synapse0x2536fe0() {
   return (neuron0x2532460()*1.7639);
}

double NNfunction_ns_chi04_cR::synapse0x2537020() {
   return (neuron0x25327a0()*0.437805);
}

double NNfunction_ns_chi04_cR::synapse0x2536ab0() {
   return (neuron0x2532ae0()*0.00314944);
}

double NNfunction_ns_chi04_cR::synapse0x2536af0() {
   return (neuron0x2533040()*-0.358992);
}

double NNfunction_ns_chi04_cR::synapse0x2537170() {
   return (neuron0x2533260()*-0.404103);
}

double NNfunction_ns_chi04_cR::synapse0x25371b0() {
   return (neuron0x25335a0()*0.322658);
}

double NNfunction_ns_chi04_cR::synapse0x25371f0() {
   return (neuron0x25338e0()*0.248387);
}

double NNfunction_ns_chi04_cR::synapse0x2537230() {
   return (neuron0x2533c20()*0.0147267);
}

double NNfunction_ns_chi04_cR::synapse0x2537270() {
   return (neuron0x2533f60()*-0.0479329);
}

double NNfunction_ns_chi04_cR::synapse0x25372b0() {
   return (neuron0x25342a0()*-1.31901);
}

double NNfunction_ns_chi04_cR::synapse0x2537630() {
   return (neuron0x252f6e0()*-0.134269);
}

double NNfunction_ns_chi04_cR::synapse0x2537670() {
   return (neuron0x252fa20()*0.575078);
}

double NNfunction_ns_chi04_cR::synapse0x25376b0() {
   return (neuron0x252fd60()*-1.13865);
}

double NNfunction_ns_chi04_cR::synapse0x25376f0() {
   return (neuron0x25300a0()*-0.0754741);
}

double NNfunction_ns_chi04_cR::synapse0x2537730() {
   return (neuron0x25303e0()*0.276431);
}

double NNfunction_ns_chi04_cR::synapse0x2537770() {
   return (neuron0x2530720()*-0.974764);
}

double NNfunction_ns_chi04_cR::synapse0x25377b0() {
   return (neuron0x2530a60()*0.572795);
}

double NNfunction_ns_chi04_cR::synapse0x25377f0() {
   return (neuron0x2530da0()*-0.434515);
}

double NNfunction_ns_chi04_cR::synapse0x2537830() {
   return (neuron0x25310e0()*-0.805712);
}

double NNfunction_ns_chi04_cR::synapse0x22f8b90() {
   return (neuron0x2531420()*0.0943382);
}

double NNfunction_ns_chi04_cR::synapse0x22f8bd0() {
   return (neuron0x2531760()*-2.15892);
}

double NNfunction_ns_chi04_cR::synapse0x22f8c10() {
   return (neuron0x2531aa0()*-0.967214);
}

double NNfunction_ns_chi04_cR::synapse0x22f8c50() {
   return (neuron0x2531de0()*0.401766);
}

double NNfunction_ns_chi04_cR::synapse0x22f8c90() {
   return (neuron0x2532120()*-0.149894);
}

double NNfunction_ns_chi04_cR::synapse0x22f8cd0() {
   return (neuron0x2532460()*-0.0470765);
}

double NNfunction_ns_chi04_cR::synapse0x22f8d10() {
   return (neuron0x25327a0()*0.792355);
}

double NNfunction_ns_chi04_cR::synapse0x2537480() {
   return (neuron0x2532ae0()*0.664164);
}

double NNfunction_ns_chi04_cR::synapse0x25374c0() {
   return (neuron0x2533040()*0.566618);
}

double NNfunction_ns_chi04_cR::synapse0x22f8e60() {
   return (neuron0x2533260()*-0.825295);
}

double NNfunction_ns_chi04_cR::synapse0x22f8ea0() {
   return (neuron0x25335a0()*-0.156805);
}

double NNfunction_ns_chi04_cR::synapse0x22f8ee0() {
   return (neuron0x25338e0()*-0.829693);
}

double NNfunction_ns_chi04_cR::synapse0x22f8f20() {
   return (neuron0x2533c20()*0.0328215);
}

double NNfunction_ns_chi04_cR::synapse0x22f8f60() {
   return (neuron0x2533f60()*-0.254336);
}

double NNfunction_ns_chi04_cR::synapse0x2538080() {
   return (neuron0x25342a0()*-0.534515);
}

double NNfunction_ns_chi04_cR::synapse0x2538400() {
   return (neuron0x252f6e0()*-0.255085);
}

double NNfunction_ns_chi04_cR::synapse0x2538440() {
   return (neuron0x252fa20()*0.308381);
}

double NNfunction_ns_chi04_cR::synapse0x2538480() {
   return (neuron0x252fd60()*-0.908882);
}

double NNfunction_ns_chi04_cR::synapse0x25384c0() {
   return (neuron0x25300a0()*-0.418978);
}

double NNfunction_ns_chi04_cR::synapse0x2538500() {
   return (neuron0x25303e0()*0.00453491);
}

double NNfunction_ns_chi04_cR::synapse0x2538540() {
   return (neuron0x2530720()*0.596861);
}

double NNfunction_ns_chi04_cR::synapse0x2538580() {
   return (neuron0x2530a60()*-0.628518);
}

double NNfunction_ns_chi04_cR::synapse0x25385c0() {
   return (neuron0x2530da0()*0.159366);
}

double NNfunction_ns_chi04_cR::synapse0x2538600() {
   return (neuron0x25310e0()*0.887134);
}

double NNfunction_ns_chi04_cR::synapse0x2538640() {
   return (neuron0x2531420()*0.410247);
}

double NNfunction_ns_chi04_cR::synapse0x2538680() {
   return (neuron0x2531760()*-0.0570921);
}

double NNfunction_ns_chi04_cR::synapse0x25386c0() {
   return (neuron0x2531aa0()*-2.70129);
}

double NNfunction_ns_chi04_cR::synapse0x2538700() {
   return (neuron0x2531de0()*-0.292276);
}

double NNfunction_ns_chi04_cR::synapse0x2538740() {
   return (neuron0x2532120()*0.547668);
}

double NNfunction_ns_chi04_cR::synapse0x2538780() {
   return (neuron0x2532460()*-0.432868);
}

double NNfunction_ns_chi04_cR::synapse0x25387c0() {
   return (neuron0x25327a0()*-0.243264);
}

double NNfunction_ns_chi04_cR::synapse0x2538250() {
   return (neuron0x2532ae0()*1.04061);
}

double NNfunction_ns_chi04_cR::synapse0x2538290() {
   return (neuron0x2533040()*-0.313181);
}

double NNfunction_ns_chi04_cR::synapse0x2538910() {
   return (neuron0x2533260()*-0.270338);
}

double NNfunction_ns_chi04_cR::synapse0x2538950() {
   return (neuron0x25335a0()*-0.574331);
}

double NNfunction_ns_chi04_cR::synapse0x2538990() {
   return (neuron0x25338e0()*0.535969);
}

double NNfunction_ns_chi04_cR::synapse0x25389d0() {
   return (neuron0x2533c20()*0.945245);
}

double NNfunction_ns_chi04_cR::synapse0x2538a10() {
   return (neuron0x2533f60()*-0.284813);
}

double NNfunction_ns_chi04_cR::synapse0x2538a50() {
   return (neuron0x25342a0()*0.609706);
}

double NNfunction_ns_chi04_cR::synapse0x2538dd0() {
   return (neuron0x252f6e0()*0.16094);
}

double NNfunction_ns_chi04_cR::synapse0x2538e10() {
   return (neuron0x252fa20()*0.691878);
}

double NNfunction_ns_chi04_cR::synapse0x2538e50() {
   return (neuron0x252fd60()*-0.59733);
}

double NNfunction_ns_chi04_cR::synapse0x2538e90() {
   return (neuron0x25300a0()*-0.599183);
}

double NNfunction_ns_chi04_cR::synapse0x2538ed0() {
   return (neuron0x25303e0()*-0.321234);
}

double NNfunction_ns_chi04_cR::synapse0x2538f10() {
   return (neuron0x2530720()*0.44245);
}

double NNfunction_ns_chi04_cR::synapse0x2538f50() {
   return (neuron0x2530a60()*-1.59228);
}

double NNfunction_ns_chi04_cR::synapse0x2538f90() {
   return (neuron0x2530da0()*0.910412);
}

double NNfunction_ns_chi04_cR::synapse0x2538fd0() {
   return (neuron0x25310e0()*-0.747329);
}

double NNfunction_ns_chi04_cR::synapse0x2539010() {
   return (neuron0x2531420()*1.39429);
}

double NNfunction_ns_chi04_cR::synapse0x2539050() {
   return (neuron0x2531760()*-0.943779);
}

double NNfunction_ns_chi04_cR::synapse0x2539090() {
   return (neuron0x2531aa0()*1.53311);
}

double NNfunction_ns_chi04_cR::synapse0x25390d0() {
   return (neuron0x2531de0()*-0.307077);
}

double NNfunction_ns_chi04_cR::synapse0x2539110() {
   return (neuron0x2532120()*0.0645057);
}

double NNfunction_ns_chi04_cR::synapse0x2539150() {
   return (neuron0x2532460()*0.478764);
}

double NNfunction_ns_chi04_cR::synapse0x2539190() {
   return (neuron0x25327a0()*-0.470087);
}

double NNfunction_ns_chi04_cR::synapse0x2538c20() {
   return (neuron0x2532ae0()*1.18147);
}

double NNfunction_ns_chi04_cR::synapse0x2538c60() {
   return (neuron0x2533040()*-0.0697309);
}

double NNfunction_ns_chi04_cR::synapse0x25392e0() {
   return (neuron0x2533260()*-0.0955984);
}

double NNfunction_ns_chi04_cR::synapse0x2539320() {
   return (neuron0x25335a0()*0.881749);
}

double NNfunction_ns_chi04_cR::synapse0x2539360() {
   return (neuron0x25338e0()*0.362108);
}

double NNfunction_ns_chi04_cR::synapse0x25393a0() {
   return (neuron0x2533c20()*-0.640037);
}

double NNfunction_ns_chi04_cR::synapse0x25393e0() {
   return (neuron0x2533f60()*-0.134837);
}

double NNfunction_ns_chi04_cR::synapse0x2539420() {
   return (neuron0x25342a0()*-0.660302);
}

double NNfunction_ns_chi04_cR::synapse0x2532f30() {
   return (neuron0x252f6e0()*-0.843923);
}

double NNfunction_ns_chi04_cR::synapse0x2532f70() {
   return (neuron0x252fa20()*2.2956);
}

double NNfunction_ns_chi04_cR::synapse0x2532fb0() {
   return (neuron0x252fd60()*0.597758);
}

double NNfunction_ns_chi04_cR::synapse0x2532ff0() {
   return (neuron0x25300a0()*-0.166373);
}

double NNfunction_ns_chi04_cR::synapse0x25399b0() {
   return (neuron0x25303e0()*0.470241);
}

double NNfunction_ns_chi04_cR::synapse0x25399f0() {
   return (neuron0x2530720()*0.0330826);
}

double NNfunction_ns_chi04_cR::synapse0x2539a30() {
   return (neuron0x2530a60()*0.357574);
}

double NNfunction_ns_chi04_cR::synapse0x2539a70() {
   return (neuron0x2530da0()*0.00620166);
}

double NNfunction_ns_chi04_cR::synapse0x2539ab0() {
   return (neuron0x25310e0()*-0.390634);
}

double NNfunction_ns_chi04_cR::synapse0x2539af0() {
   return (neuron0x2531420()*0.125601);
}

double NNfunction_ns_chi04_cR::synapse0x2539b30() {
   return (neuron0x2531760()*-0.0542842);
}

double NNfunction_ns_chi04_cR::synapse0x2539b70() {
   return (neuron0x2531aa0()*-0.45748);
}

double NNfunction_ns_chi04_cR::synapse0x2539bb0() {
   return (neuron0x2531de0()*-0.255105);
}

double NNfunction_ns_chi04_cR::synapse0x2539bf0() {
   return (neuron0x2532120()*-0.974607);
}

double NNfunction_ns_chi04_cR::synapse0x2539c30() {
   return (neuron0x2532460()*-0.0300765);
}

double NNfunction_ns_chi04_cR::synapse0x2539c70() {
   return (neuron0x25327a0()*-0.413895);
}

double NNfunction_ns_chi04_cR::synapse0x25395f0() {
   return (neuron0x2532ae0()*0.133613);
}

double NNfunction_ns_chi04_cR::synapse0x2539630() {
   return (neuron0x2533040()*0.22694);
}

double NNfunction_ns_chi04_cR::synapse0x2539dc0() {
   return (neuron0x2533260()*0.382191);
}

double NNfunction_ns_chi04_cR::synapse0x2539e00() {
   return (neuron0x25335a0()*0.174455);
}

double NNfunction_ns_chi04_cR::synapse0x2539e40() {
   return (neuron0x25338e0()*0.276771);
}

double NNfunction_ns_chi04_cR::synapse0x2539e80() {
   return (neuron0x2533c20()*-0.485513);
}

double NNfunction_ns_chi04_cR::synapse0x2539ec0() {
   return (neuron0x2533f60()*-0.104267);
}

double NNfunction_ns_chi04_cR::synapse0x2539f00() {
   return (neuron0x25342a0()*3.61975);
}

double NNfunction_ns_chi04_cR::synapse0x253a280() {
   return (neuron0x252f6e0()*-0.0173232);
}

double NNfunction_ns_chi04_cR::synapse0x253a2c0() {
   return (neuron0x252fa20()*0.0458588);
}

double NNfunction_ns_chi04_cR::synapse0x253a300() {
   return (neuron0x252fd60()*0.026612);
}

double NNfunction_ns_chi04_cR::synapse0x253a340() {
   return (neuron0x25300a0()*-0.85689);
}

double NNfunction_ns_chi04_cR::synapse0x253a380() {
   return (neuron0x25303e0()*-0.00492339);
}

double NNfunction_ns_chi04_cR::synapse0x253a3c0() {
   return (neuron0x2530720()*0.00578416);
}

double NNfunction_ns_chi04_cR::synapse0x253a400() {
   return (neuron0x2530a60()*-0.0171223);
}

double NNfunction_ns_chi04_cR::synapse0x253a440() {
   return (neuron0x2530da0()*0.00923301);
}

double NNfunction_ns_chi04_cR::synapse0x253a480() {
   return (neuron0x25310e0()*-0.010571);
}

double NNfunction_ns_chi04_cR::synapse0x253a4c0() {
   return (neuron0x2531420()*-0.0383877);
}

double NNfunction_ns_chi04_cR::synapse0x253a500() {
   return (neuron0x2531760()*0.00919026);
}

double NNfunction_ns_chi04_cR::synapse0x253a540() {
   return (neuron0x2531aa0()*-0.00541537);
}

double NNfunction_ns_chi04_cR::synapse0x253a580() {
   return (neuron0x2531de0()*-0.0413717);
}

double NNfunction_ns_chi04_cR::synapse0x253a5c0() {
   return (neuron0x2532120()*0.004371);
}

double NNfunction_ns_chi04_cR::synapse0x253a600() {
   return (neuron0x2532460()*0.0179646);
}

double NNfunction_ns_chi04_cR::synapse0x253a640() {
   return (neuron0x25327a0()*-0.324716);
}

double NNfunction_ns_chi04_cR::synapse0x253a0d0() {
   return (neuron0x2532ae0()*-0.00647076);
}

double NNfunction_ns_chi04_cR::synapse0x253a110() {
   return (neuron0x2533040()*-0.0338531);
}

double NNfunction_ns_chi04_cR::synapse0x253a790() {
   return (neuron0x2533260()*-0.0352787);
}

double NNfunction_ns_chi04_cR::synapse0x253a7d0() {
   return (neuron0x25335a0()*0.00703795);
}

double NNfunction_ns_chi04_cR::synapse0x253a810() {
   return (neuron0x25338e0()*-0.0239011);
}

double NNfunction_ns_chi04_cR::synapse0x253a850() {
   return (neuron0x2533c20()*-0.016505);
}

double NNfunction_ns_chi04_cR::synapse0x253a890() {
   return (neuron0x2533f60()*0.000925893);
}

double NNfunction_ns_chi04_cR::synapse0x253a8d0() {
   return (neuron0x25342a0()*-0.0625955);
}

double NNfunction_ns_chi04_cR::synapse0x253ac50() {
   return (neuron0x252f6e0()*-0.0557493);
}

double NNfunction_ns_chi04_cR::synapse0x253ac90() {
   return (neuron0x252fa20()*-3.61647);
}

double NNfunction_ns_chi04_cR::synapse0x253acd0() {
   return (neuron0x252fd60()*0.13438);
}

double NNfunction_ns_chi04_cR::synapse0x253ad10() {
   return (neuron0x25300a0()*0.0202106);
}

double NNfunction_ns_chi04_cR::synapse0x253ad50() {
   return (neuron0x25303e0()*0.0496122);
}

double NNfunction_ns_chi04_cR::synapse0x253ad90() {
   return (neuron0x2530720()*0.0325802);
}

double NNfunction_ns_chi04_cR::synapse0x253add0() {
   return (neuron0x2530a60()*0.00715551);
}

double NNfunction_ns_chi04_cR::synapse0x253ae10() {
   return (neuron0x2530da0()*0.00656314);
}

double NNfunction_ns_chi04_cR::synapse0x253ae50() {
   return (neuron0x25310e0()*0.0424048);
}

double NNfunction_ns_chi04_cR::synapse0x253ae90() {
   return (neuron0x2531420()*0.00999811);
}

double NNfunction_ns_chi04_cR::synapse0x253aed0() {
   return (neuron0x2531760()*0.0103272);
}

double NNfunction_ns_chi04_cR::synapse0x253af10() {
   return (neuron0x2531aa0()*0.00535416);
}

double NNfunction_ns_chi04_cR::synapse0x253af50() {
   return (neuron0x2531de0()*0.00945304);
}

double NNfunction_ns_chi04_cR::synapse0x253af90() {
   return (neuron0x2532120()*-0.0335069);
}

double NNfunction_ns_chi04_cR::synapse0x253afd0() {
   return (neuron0x2532460()*-0.0170387);
}

double NNfunction_ns_chi04_cR::synapse0x253b010() {
   return (neuron0x25327a0()*0.066982);
}

double NNfunction_ns_chi04_cR::synapse0x253aaa0() {
   return (neuron0x2532ae0()*0.0177467);
}

double NNfunction_ns_chi04_cR::synapse0x253aae0() {
   return (neuron0x2533040()*-0.00109838);
}

double NNfunction_ns_chi04_cR::synapse0x2537870() {
   return (neuron0x2533260()*-0.0193827);
}

double NNfunction_ns_chi04_cR::synapse0x25378b0() {
   return (neuron0x25335a0()*0.0097264);
}

double NNfunction_ns_chi04_cR::synapse0x25378f0() {
   return (neuron0x25338e0()*-0.0360289);
}

double NNfunction_ns_chi04_cR::synapse0x2537930() {
   return (neuron0x2533c20()*-0.000960091);
}

double NNfunction_ns_chi04_cR::synapse0x2537970() {
   return (neuron0x2533f60()*-0.0146331);
}

double NNfunction_ns_chi04_cR::synapse0x25379b0() {
   return (neuron0x25342a0()*1.85956);
}

double NNfunction_ns_chi04_cR::synapse0x2537d30() {
   return (neuron0x252f6e0()*0.021743);
}

double NNfunction_ns_chi04_cR::synapse0x2537d70() {
   return (neuron0x252fa20()*3.63574);
}

double NNfunction_ns_chi04_cR::synapse0x2537db0() {
   return (neuron0x252fd60()*-0.0284208);
}

double NNfunction_ns_chi04_cR::synapse0x2537df0() {
   return (neuron0x25300a0()*0.0146901);
}

double NNfunction_ns_chi04_cR::synapse0x2537e30() {
   return (neuron0x25303e0()*-0.0529718);
}

double NNfunction_ns_chi04_cR::synapse0x2537e70() {
   return (neuron0x2530720()*0.00145312);
}

double NNfunction_ns_chi04_cR::synapse0x2537eb0() {
   return (neuron0x2530a60()*-0.0152908);
}

double NNfunction_ns_chi04_cR::synapse0x2537ef0() {
   return (neuron0x2530da0()*-0.0029938);
}

double NNfunction_ns_chi04_cR::synapse0x2537f30() {
   return (neuron0x25310e0()*-0.00182601);
}

double NNfunction_ns_chi04_cR::synapse0x2537f70() {
   return (neuron0x2531420()*-0.0303177);
}

double NNfunction_ns_chi04_cR::synapse0x2537fb0() {
   return (neuron0x2531760()*-0.0284556);
}

double NNfunction_ns_chi04_cR::synapse0x2537ff0() {
   return (neuron0x2531aa0()*-0.0163386);
}

double NNfunction_ns_chi04_cR::synapse0x2538030() {
   return (neuron0x2531de0()*-0.00102197);
}

double NNfunction_ns_chi04_cR::synapse0x253c170() {
   return (neuron0x2532120()*0.00241646);
}

double NNfunction_ns_chi04_cR::synapse0x253c1b0() {
   return (neuron0x2532460()*0.00593681);
}

double NNfunction_ns_chi04_cR::synapse0x253c1f0() {
   return (neuron0x25327a0()*0.0539614);
}

double NNfunction_ns_chi04_cR::synapse0x2537b80() {
   return (neuron0x2532ae0()*-0.00536049);
}

double NNfunction_ns_chi04_cR::synapse0x2537bc0() {
   return (neuron0x2533040()*0.00372739);
}

double NNfunction_ns_chi04_cR::synapse0x253c340() {
   return (neuron0x2533260()*0.0212937);
}

double NNfunction_ns_chi04_cR::synapse0x253c380() {
   return (neuron0x25335a0()*-0.0365949);
}

double NNfunction_ns_chi04_cR::synapse0x253c3c0() {
   return (neuron0x25338e0()*-0.00292688);
}

double NNfunction_ns_chi04_cR::synapse0x253c400() {
   return (neuron0x2533c20()*0.0144306);
}

double NNfunction_ns_chi04_cR::synapse0x253c440() {
   return (neuron0x2533f60()*-0.00401249);
}

double NNfunction_ns_chi04_cR::synapse0x253c480() {
   return (neuron0x25342a0()*-1.65186);
}

double NNfunction_ns_chi04_cR::synapse0x253c800() {
   return (neuron0x252f6e0()*0.0104911);
}

double NNfunction_ns_chi04_cR::synapse0x253c840() {
   return (neuron0x252fa20()*-0.0334752);
}

double NNfunction_ns_chi04_cR::synapse0x253c880() {
   return (neuron0x252fd60()*-0.0655499);
}

double NNfunction_ns_chi04_cR::synapse0x253c8c0() {
   return (neuron0x25300a0()*-0.0147157);
}

double NNfunction_ns_chi04_cR::synapse0x253c900() {
   return (neuron0x25303e0()*0.0121922);
}

double NNfunction_ns_chi04_cR::synapse0x253c940() {
   return (neuron0x2530720()*0.0169358);
}

double NNfunction_ns_chi04_cR::synapse0x253c980() {
   return (neuron0x2530a60()*0.0111192);
}

double NNfunction_ns_chi04_cR::synapse0x253c9c0() {
   return (neuron0x2530da0()*0.00828792);
}

double NNfunction_ns_chi04_cR::synapse0x253ca00() {
   return (neuron0x25310e0()*-0.0191015);
}

double NNfunction_ns_chi04_cR::synapse0x253ca40() {
   return (neuron0x2531420()*-0.00304531);
}

double NNfunction_ns_chi04_cR::synapse0x253ca80() {
   return (neuron0x2531760()*-0.0199311);
}

double NNfunction_ns_chi04_cR::synapse0x253cac0() {
   return (neuron0x2531aa0()*-0.0172299);
}

double NNfunction_ns_chi04_cR::synapse0x253cb00() {
   return (neuron0x2531de0()*-0.0110058);
}

double NNfunction_ns_chi04_cR::synapse0x253cb40() {
   return (neuron0x2532120()*0.00679348);
}

double NNfunction_ns_chi04_cR::synapse0x253cb80() {
   return (neuron0x2532460()*-0.0110343);
}

double NNfunction_ns_chi04_cR::synapse0x253cbc0() {
   return (neuron0x25327a0()*0.0851101);
}

double NNfunction_ns_chi04_cR::synapse0x253c650() {
   return (neuron0x2532ae0()*-0.00333737);
}

double NNfunction_ns_chi04_cR::synapse0x253c690() {
   return (neuron0x2533040()*0.000985909);
}

double NNfunction_ns_chi04_cR::synapse0x253cd10() {
   return (neuron0x2533260()*-0.00305322);
}

double NNfunction_ns_chi04_cR::synapse0x253cd50() {
   return (neuron0x25335a0()*-0.0243499);
}

double NNfunction_ns_chi04_cR::synapse0x253cd90() {
   return (neuron0x25338e0()*0.010325);
}

double NNfunction_ns_chi04_cR::synapse0x253cdd0() {
   return (neuron0x2533c20()*0.00485594);
}

double NNfunction_ns_chi04_cR::synapse0x253ce10() {
   return (neuron0x2533f60()*0.000430618);
}

double NNfunction_ns_chi04_cR::synapse0x253ce50() {
   return (neuron0x25342a0()*-0.562685);
}

double NNfunction_ns_chi04_cR::synapse0x253d1d0() {
   return (neuron0x252f6e0()*-0.405226);
}

double NNfunction_ns_chi04_cR::synapse0x253d210() {
   return (neuron0x252fa20()*-0.037101);
}

double NNfunction_ns_chi04_cR::synapse0x253d250() {
   return (neuron0x252fd60()*0.184326);
}

double NNfunction_ns_chi04_cR::synapse0x253d290() {
   return (neuron0x25300a0()*-0.633834);
}

double NNfunction_ns_chi04_cR::synapse0x253d2d0() {
   return (neuron0x25303e0()*-0.164899);
}

double NNfunction_ns_chi04_cR::synapse0x253d310() {
   return (neuron0x2530720()*0.390578);
}

double NNfunction_ns_chi04_cR::synapse0x253d350() {
   return (neuron0x2530a60()*0.213368);
}

double NNfunction_ns_chi04_cR::synapse0x253d390() {
   return (neuron0x2530da0()*0.265717);
}

double NNfunction_ns_chi04_cR::synapse0x253d3d0() {
   return (neuron0x25310e0()*0.841335);
}

double NNfunction_ns_chi04_cR::synapse0x253d410() {
   return (neuron0x2531420()*0.811358);
}

double NNfunction_ns_chi04_cR::synapse0x253d450() {
   return (neuron0x2531760()*-0.352985);
}

double NNfunction_ns_chi04_cR::synapse0x253d490() {
   return (neuron0x2531aa0()*-0.673018);
}

double NNfunction_ns_chi04_cR::synapse0x253d4d0() {
   return (neuron0x2531de0()*0.246132);
}

double NNfunction_ns_chi04_cR::synapse0x253d510() {
   return (neuron0x2532120()*0.007467);
}

double NNfunction_ns_chi04_cR::synapse0x253d550() {
   return (neuron0x2532460()*-0.2715);
}

double NNfunction_ns_chi04_cR::synapse0x253d590() {
   return (neuron0x25327a0()*0.0972093);
}

double NNfunction_ns_chi04_cR::synapse0x253d020() {
   return (neuron0x2532ae0()*-0.0391886);
}

double NNfunction_ns_chi04_cR::synapse0x253d060() {
   return (neuron0x2533040()*-0.333225);
}

double NNfunction_ns_chi04_cR::synapse0x253d6e0() {
   return (neuron0x2533260()*-0.0802148);
}

double NNfunction_ns_chi04_cR::synapse0x253d720() {
   return (neuron0x25335a0()*-0.639671);
}

double NNfunction_ns_chi04_cR::synapse0x253d760() {
   return (neuron0x25338e0()*0.51064);
}

double NNfunction_ns_chi04_cR::synapse0x253d7a0() {
   return (neuron0x2533c20()*0.203657);
}

double NNfunction_ns_chi04_cR::synapse0x253d7e0() {
   return (neuron0x2533f60()*-0.0702861);
}

double NNfunction_ns_chi04_cR::synapse0x253d820() {
   return (neuron0x25342a0()*0.0663254);
}

double NNfunction_ns_chi04_cR::synapse0x253dba0() {
   return (neuron0x252f6e0()*-0.112456);
}

double NNfunction_ns_chi04_cR::synapse0x253dbe0() {
   return (neuron0x252fa20()*-1.19347);
}

double NNfunction_ns_chi04_cR::synapse0x253dc20() {
   return (neuron0x252fd60()*-1.42888);
}

double NNfunction_ns_chi04_cR::synapse0x253dc60() {
   return (neuron0x25300a0()*1.30322);
}

double NNfunction_ns_chi04_cR::synapse0x253dca0() {
   return (neuron0x25303e0()*0.82148);
}

double NNfunction_ns_chi04_cR::synapse0x253dce0() {
   return (neuron0x2530720()*1.16627);
}

double NNfunction_ns_chi04_cR::synapse0x253dd20() {
   return (neuron0x2530a60()*-0.0214196);
}

double NNfunction_ns_chi04_cR::synapse0x253dd60() {
   return (neuron0x2530da0()*-0.30827);
}

double NNfunction_ns_chi04_cR::synapse0x253dda0() {
   return (neuron0x25310e0()*0.388526);
}

double NNfunction_ns_chi04_cR::synapse0x253dde0() {
   return (neuron0x2531420()*-0.296034);
}

double NNfunction_ns_chi04_cR::synapse0x253de20() {
   return (neuron0x2531760()*1.06891);
}

double NNfunction_ns_chi04_cR::synapse0x253de60() {
   return (neuron0x2531aa0()*1.62535);
}

double NNfunction_ns_chi04_cR::synapse0x253dea0() {
   return (neuron0x2531de0()*-0.574654);
}

double NNfunction_ns_chi04_cR::synapse0x253dee0() {
   return (neuron0x2532120()*-0.22669);
}

double NNfunction_ns_chi04_cR::synapse0x253df20() {
   return (neuron0x2532460()*-0.908256);
}

double NNfunction_ns_chi04_cR::synapse0x253df60() {
   return (neuron0x25327a0()*-0.734302);
}

double NNfunction_ns_chi04_cR::synapse0x253d9f0() {
   return (neuron0x2532ae0()*-0.311354);
}

double NNfunction_ns_chi04_cR::synapse0x253da30() {
   return (neuron0x2533040()*-1.05516);
}

double NNfunction_ns_chi04_cR::synapse0x253e0b0() {
   return (neuron0x2533260()*0.525358);
}

double NNfunction_ns_chi04_cR::synapse0x253e0f0() {
   return (neuron0x25335a0()*-0.28268);
}

double NNfunction_ns_chi04_cR::synapse0x253e130() {
   return (neuron0x25338e0()*0.0258321);
}

double NNfunction_ns_chi04_cR::synapse0x253e170() {
   return (neuron0x2533c20()*-1.44356);
}

double NNfunction_ns_chi04_cR::synapse0x253e1b0() {
   return (neuron0x2533f60()*-0.442512);
}

double NNfunction_ns_chi04_cR::synapse0x253e1f0() {
   return (neuron0x25342a0()*0.200145);
}

double NNfunction_ns_chi04_cR::synapse0x253e570() {
   return (neuron0x252f6e0()*0.447224);
}

double NNfunction_ns_chi04_cR::synapse0x252f900() {
   return (neuron0x252fa20()*0.429388);
}

double NNfunction_ns_chi04_cR::synapse0x252f940() {
   return (neuron0x252fd60()*1.78947);
}

double NNfunction_ns_chi04_cR::synapse0x252fc40() {
   return (neuron0x25300a0()*0.0223163);
}

double NNfunction_ns_chi04_cR::synapse0x252fc80() {
   return (neuron0x25303e0()*-0.178788);
}

double NNfunction_ns_chi04_cR::synapse0x252ff80() {
   return (neuron0x2530720()*-0.443121);
}

double NNfunction_ns_chi04_cR::synapse0x252ffc0() {
   return (neuron0x2530a60()*-0.694041);
}

double NNfunction_ns_chi04_cR::synapse0x25302c0() {
   return (neuron0x2530da0()*0.676615);
}

double NNfunction_ns_chi04_cR::synapse0x2530300() {
   return (neuron0x25310e0()*-0.138524);
}

double NNfunction_ns_chi04_cR::synapse0x2530600() {
   return (neuron0x2531420()*0.497664);
}

double NNfunction_ns_chi04_cR::synapse0x2530640() {
   return (neuron0x2531760()*-0.272669);
}

double NNfunction_ns_chi04_cR::synapse0x2530940() {
   return (neuron0x2531aa0()*0.962181);
}

double NNfunction_ns_chi04_cR::synapse0x2530980() {
   return (neuron0x2531de0()*0.325903);
}

double NNfunction_ns_chi04_cR::synapse0x2530c80() {
   return (neuron0x2532120()*-0.405685);
}

double NNfunction_ns_chi04_cR::synapse0x2530cc0() {
   return (neuron0x2532460()*0.0804347);
}

double NNfunction_ns_chi04_cR::synapse0x2530fc0() {
   return (neuron0x25327a0()*-0.0980733);
}

double NNfunction_ns_chi04_cR::synapse0x2531000() {
   return (neuron0x2532ae0()*0.494065);
}

double NNfunction_ns_chi04_cR::synapse0x2531300() {
   return (neuron0x2533040()*0.128793);
}

double NNfunction_ns_chi04_cR::synapse0x2531340() {
   return (neuron0x2533260()*0.0539089);
}

double NNfunction_ns_chi04_cR::synapse0x2531640() {
   return (neuron0x25335a0()*0.359509);
}

double NNfunction_ns_chi04_cR::synapse0x2531680() {
   return (neuron0x25338e0()*-0.0175775);
}

double NNfunction_ns_chi04_cR::synapse0x2531980() {
   return (neuron0x2533c20()*0.376994);
}

double NNfunction_ns_chi04_cR::synapse0x25319c0() {
   return (neuron0x2533f60()*0.201957);
}

double NNfunction_ns_chi04_cR::synapse0x2531cc0() {
   return (neuron0x25342a0()*-0.268281);
}

double NNfunction_ns_chi04_cR::synapse0x2531d00() {
   return (neuron0x252f6e0()*-0.00493815);
}

double NNfunction_ns_chi04_cR::synapse0x25329c0() {
   return (neuron0x252fa20()*-5.12013);
}

double NNfunction_ns_chi04_cR::synapse0x2532a00() {
   return (neuron0x252fd60()*1.86361);
}

double NNfunction_ns_chi04_cR::synapse0x253e3c0() {
   return (neuron0x25300a0()*0.00833597);
}

double NNfunction_ns_chi04_cR::synapse0x253e400() {
   return (neuron0x25303e0()*0.00792176);
}

double NNfunction_ns_chi04_cR::synapse0x2532d00() {
   return (neuron0x2530720()*-0.0257879);
}

double NNfunction_ns_chi04_cR::synapse0x2532d40() {
   return (neuron0x2530a60()*-0.00183314);
}

double NNfunction_ns_chi04_cR::synapse0x22ea760() {
   return (neuron0x2530da0()*0.0567347);
}

double NNfunction_ns_chi04_cR::synapse0x22ea7a0() {
   return (neuron0x25310e0()*-0.0387782);
}

double NNfunction_ns_chi04_cR::synapse0x2533480() {
   return (neuron0x2531420()*0.0501141);
}

double NNfunction_ns_chi04_cR::synapse0x25334c0() {
   return (neuron0x2531760()*-0.0042637);
}

double NNfunction_ns_chi04_cR::synapse0x25337c0() {
   return (neuron0x2531aa0()*0.0673214);
}

double NNfunction_ns_chi04_cR::synapse0x2533800() {
   return (neuron0x2531de0()*-0.00857099);
}

double NNfunction_ns_chi04_cR::synapse0x2533b00() {
   return (neuron0x2532120()*-0.0145042);
}

double NNfunction_ns_chi04_cR::synapse0x2533b40() {
   return (neuron0x2532460()*-0.0256542);
}

double NNfunction_ns_chi04_cR::synapse0x2533e40() {
   return (neuron0x25327a0()*0.0504519);
}

double NNfunction_ns_chi04_cR::synapse0x2533e80() {
   return (neuron0x2532ae0()*0.0103167);
}

double NNfunction_ns_chi04_cR::synapse0x2534180() {
   return (neuron0x2533040()*-0.0165098);
}

double NNfunction_ns_chi04_cR::synapse0x25341c0() {
   return (neuron0x2533260()*0.027806);
}

double NNfunction_ns_chi04_cR::synapse0x25344c0() {
   return (neuron0x25335a0()*-0.00536701);
}

double NNfunction_ns_chi04_cR::synapse0x2534500() {
   return (neuron0x25338e0()*0.0178057);
}

double NNfunction_ns_chi04_cR::synapse0x2532000() {
   return (neuron0x2533c20()*0.0408544);
}

double NNfunction_ns_chi04_cR::synapse0x2532040() {
   return (neuron0x2533f60()*0.0434746);
}

double NNfunction_ns_chi04_cR::synapse0x25402e0() {
   return (neuron0x25342a0()*-1.71053);
}

double NNfunction_ns_chi04_cR::synapse0x2540660() {
   return (neuron0x252f6e0()*-0.00975415);
}

double NNfunction_ns_chi04_cR::synapse0x25406a0() {
   return (neuron0x252fa20()*0.0980525);
}

double NNfunction_ns_chi04_cR::synapse0x25406e0() {
   return (neuron0x252fd60()*0.00451712);
}

double NNfunction_ns_chi04_cR::synapse0x2540720() {
   return (neuron0x25300a0()*0.0107824);
}

double NNfunction_ns_chi04_cR::synapse0x2540760() {
   return (neuron0x25303e0()*-0.00314706);
}

double NNfunction_ns_chi04_cR::synapse0x25407a0() {
   return (neuron0x2530720()*-0.0295032);
}

double NNfunction_ns_chi04_cR::synapse0x25407e0() {
   return (neuron0x2530a60()*-0.0103246);
}

double NNfunction_ns_chi04_cR::synapse0x2540820() {
   return (neuron0x2530da0()*-0.00779045);
}

double NNfunction_ns_chi04_cR::synapse0x2540860() {
   return (neuron0x25310e0()*0.00397161);
}

double NNfunction_ns_chi04_cR::synapse0x25408a0() {
   return (neuron0x2531420()*0.0308583);
}

double NNfunction_ns_chi04_cR::synapse0x25408e0() {
   return (neuron0x2531760()*0.0139798);
}

double NNfunction_ns_chi04_cR::synapse0x2540920() {
   return (neuron0x2531aa0()*0.0347088);
}

double NNfunction_ns_chi04_cR::synapse0x2540960() {
   return (neuron0x2531de0()*0.0312303);
}

double NNfunction_ns_chi04_cR::synapse0x25409a0() {
   return (neuron0x2532120()*0.00426284);
}

double NNfunction_ns_chi04_cR::synapse0x25409e0() {
   return (neuron0x2532460()*0.0387317);
}

double NNfunction_ns_chi04_cR::synapse0x2540a20() {
   return (neuron0x25327a0()*0.611135);
}

double NNfunction_ns_chi04_cR::synapse0x25404b0() {
   return (neuron0x2532ae0()*0.0450434);
}

double NNfunction_ns_chi04_cR::synapse0x25404f0() {
   return (neuron0x2533040()*0.0205405);
}

double NNfunction_ns_chi04_cR::synapse0x2540b70() {
   return (neuron0x2533260()*0.01631);
}

double NNfunction_ns_chi04_cR::synapse0x2540bb0() {
   return (neuron0x25335a0()*0.0296003);
}

double NNfunction_ns_chi04_cR::synapse0x2540bf0() {
   return (neuron0x25338e0()*0.000598628);
}

double NNfunction_ns_chi04_cR::synapse0x2540c30() {
   return (neuron0x2533c20()*0.00877048);
}

double NNfunction_ns_chi04_cR::synapse0x2540c70() {
   return (neuron0x2533f60()*0.00947359);
}

double NNfunction_ns_chi04_cR::synapse0x2540cb0() {
   return (neuron0x25342a0()*-0.0621605);
}

double NNfunction_ns_chi04_cR::synapse0x2541030() {
   return (neuron0x252f6e0()*-0.0100804);
}

double NNfunction_ns_chi04_cR::synapse0x2541070() {
   return (neuron0x252fa20()*3.25309);
}

double NNfunction_ns_chi04_cR::synapse0x25410b0() {
   return (neuron0x252fd60()*0.17129);
}

double NNfunction_ns_chi04_cR::synapse0x25410f0() {
   return (neuron0x25300a0()*0.0025515);
}

double NNfunction_ns_chi04_cR::synapse0x2541130() {
   return (neuron0x25303e0()*0.00266275);
}

double NNfunction_ns_chi04_cR::synapse0x2541170() {
   return (neuron0x2530720()*0.00309735);
}

double NNfunction_ns_chi04_cR::synapse0x25411b0() {
   return (neuron0x2530a60()*-0.0262934);
}

double NNfunction_ns_chi04_cR::synapse0x25411f0() {
   return (neuron0x2530da0()*0.00328486);
}

double NNfunction_ns_chi04_cR::synapse0x2541230() {
   return (neuron0x25310e0()*0.00808257);
}

double NNfunction_ns_chi04_cR::synapse0x2541270() {
   return (neuron0x2531420()*-0.0119084);
}

double NNfunction_ns_chi04_cR::synapse0x25412b0() {
   return (neuron0x2531760()*0.0164399);
}

double NNfunction_ns_chi04_cR::synapse0x25412f0() {
   return (neuron0x2531aa0()*0.00442537);
}

double NNfunction_ns_chi04_cR::synapse0x2541330() {
   return (neuron0x2531de0()*-0.00265301);
}

double NNfunction_ns_chi04_cR::synapse0x2541370() {
   return (neuron0x2532120()*-0.00172068);
}

double NNfunction_ns_chi04_cR::synapse0x25413b0() {
   return (neuron0x2532460()*-0.0112894);
}

double NNfunction_ns_chi04_cR::synapse0x25413f0() {
   return (neuron0x25327a0()*-0.118033);
}

double NNfunction_ns_chi04_cR::synapse0x2540e80() {
   return (neuron0x2532ae0()*0.00587249);
}

double NNfunction_ns_chi04_cR::synapse0x2540ec0() {
   return (neuron0x2533040()*-0.00167559);
}

double NNfunction_ns_chi04_cR::synapse0x2541540() {
   return (neuron0x2533260()*-0.017217);
}

double NNfunction_ns_chi04_cR::synapse0x2541580() {
   return (neuron0x25335a0()*-0.0141652);
}

double NNfunction_ns_chi04_cR::synapse0x25415c0() {
   return (neuron0x25338e0()*-0.00926981);
}

double NNfunction_ns_chi04_cR::synapse0x2541600() {
   return (neuron0x2533c20()*0.00652706);
}

double NNfunction_ns_chi04_cR::synapse0x2541640() {
   return (neuron0x2533f60()*0.00900859);
}

double NNfunction_ns_chi04_cR::synapse0x2541680() {
   return (neuron0x25342a0()*1.42013);
}

double NNfunction_ns_chi04_cR::synapse0x2541a00() {
   return (neuron0x252f6e0()*-0.55476);
}

double NNfunction_ns_chi04_cR::synapse0x2541a40() {
   return (neuron0x252fa20()*-0.739378);
}

double NNfunction_ns_chi04_cR::synapse0x2541a80() {
   return (neuron0x252fd60()*0.434993);
}

double NNfunction_ns_chi04_cR::synapse0x2541ac0() {
   return (neuron0x25300a0()*0.561722);
}

double NNfunction_ns_chi04_cR::synapse0x2541b00() {
   return (neuron0x25303e0()*-0.755532);
}

double NNfunction_ns_chi04_cR::synapse0x2541b40() {
   return (neuron0x2530720()*0.229818);
}

double NNfunction_ns_chi04_cR::synapse0x2541b80() {
   return (neuron0x2530a60()*0.148464);
}

double NNfunction_ns_chi04_cR::synapse0x2541bc0() {
   return (neuron0x2530da0()*-0.620409);
}

double NNfunction_ns_chi04_cR::synapse0x2541c00() {
   return (neuron0x25310e0()*-2.54942);
}

double NNfunction_ns_chi04_cR::synapse0x2541c40() {
   return (neuron0x2531420()*1.00407);
}

double NNfunction_ns_chi04_cR::synapse0x2541c80() {
   return (neuron0x2531760()*-0.00752379);
}

double NNfunction_ns_chi04_cR::synapse0x2541cc0() {
   return (neuron0x2531aa0()*-1.47837);
}

double NNfunction_ns_chi04_cR::synapse0x2541d00() {
   return (neuron0x2531de0()*0.359668);
}

double NNfunction_ns_chi04_cR::synapse0x2541d40() {
   return (neuron0x2532120()*0.359356);
}

double NNfunction_ns_chi04_cR::synapse0x2541d80() {
   return (neuron0x2532460()*-0.914193);
}

double NNfunction_ns_chi04_cR::synapse0x2541dc0() {
   return (neuron0x25327a0()*1.02941);
}

double NNfunction_ns_chi04_cR::synapse0x2541850() {
   return (neuron0x2532ae0()*-0.644372);
}

double NNfunction_ns_chi04_cR::synapse0x2541890() {
   return (neuron0x2533040()*0.394546);
}

double NNfunction_ns_chi04_cR::synapse0x2541f10() {
   return (neuron0x2533260()*0.280368);
}

double NNfunction_ns_chi04_cR::synapse0x2541f50() {
   return (neuron0x25335a0()*-0.0588356);
}

double NNfunction_ns_chi04_cR::synapse0x2541f90() {
   return (neuron0x25338e0()*0.931134);
}

double NNfunction_ns_chi04_cR::synapse0x2541fd0() {
   return (neuron0x2533c20()*0.178992);
}

double NNfunction_ns_chi04_cR::synapse0x2542010() {
   return (neuron0x2533f60()*-0.491484);
}

double NNfunction_ns_chi04_cR::synapse0x2542050() {
   return (neuron0x25342a0()*-0.236844);
}

double NNfunction_ns_chi04_cR::synapse0x25423d0() {
   return (neuron0x252f6e0()*-0.00795351);
}

double NNfunction_ns_chi04_cR::synapse0x2542410() {
   return (neuron0x252fa20()*-0.0100861);
}

double NNfunction_ns_chi04_cR::synapse0x2542450() {
   return (neuron0x252fd60()*-0.0114948);
}

double NNfunction_ns_chi04_cR::synapse0x2542490() {
   return (neuron0x25300a0()*-2.31052);
}

double NNfunction_ns_chi04_cR::synapse0x25424d0() {
   return (neuron0x25303e0()*0.016249);
}

double NNfunction_ns_chi04_cR::synapse0x2542510() {
   return (neuron0x2530720()*-0.00413842);
}

double NNfunction_ns_chi04_cR::synapse0x2542550() {
   return (neuron0x2530a60()*-0.00100538);
}

double NNfunction_ns_chi04_cR::synapse0x2542590() {
   return (neuron0x2530da0()*0.00296025);
}

double NNfunction_ns_chi04_cR::synapse0x25425d0() {
   return (neuron0x25310e0()*-0.0107618);
}

double NNfunction_ns_chi04_cR::synapse0x2542610() {
   return (neuron0x2531420()*0.0106618);
}

double NNfunction_ns_chi04_cR::synapse0x2542650() {
   return (neuron0x2531760()*-0.00509062);
}

double NNfunction_ns_chi04_cR::synapse0x2542690() {
   return (neuron0x2531aa0()*0.000531869);
}

double NNfunction_ns_chi04_cR::synapse0x25426d0() {
   return (neuron0x2531de0()*0.0112211);
}

double NNfunction_ns_chi04_cR::synapse0x2542710() {
   return (neuron0x2532120()*0.0121906);
}

double NNfunction_ns_chi04_cR::synapse0x2542750() {
   return (neuron0x2532460()*0.00220541);
}

double NNfunction_ns_chi04_cR::synapse0x2542790() {
   return (neuron0x25327a0()*0.142547);
}

double NNfunction_ns_chi04_cR::synapse0x2542220() {
   return (neuron0x2532ae0()*0.00734547);
}

double NNfunction_ns_chi04_cR::synapse0x2542260() {
   return (neuron0x2533040()*-0.000576183);
}

double NNfunction_ns_chi04_cR::synapse0x25428e0() {
   return (neuron0x2533260()*-0.0154622);
}

double NNfunction_ns_chi04_cR::synapse0x2542920() {
   return (neuron0x25335a0()*-0.0102405);
}

double NNfunction_ns_chi04_cR::synapse0x2542960() {
   return (neuron0x25338e0()*-0.00481167);
}

double NNfunction_ns_chi04_cR::synapse0x25429a0() {
   return (neuron0x2533c20()*-0.00690863);
}

double NNfunction_ns_chi04_cR::synapse0x25429e0() {
   return (neuron0x2533f60()*0.0146072);
}

double NNfunction_ns_chi04_cR::synapse0x2542a20() {
   return (neuron0x25342a0()*0.00504321);
}

double NNfunction_ns_chi04_cR::synapse0x2542da0() {
   return (neuron0x252f6e0()*-1.07601);
}

double NNfunction_ns_chi04_cR::synapse0x2542de0() {
   return (neuron0x252fa20()*0.308708);
}

double NNfunction_ns_chi04_cR::synapse0x2542e20() {
   return (neuron0x252fd60()*0.0316534);
}

double NNfunction_ns_chi04_cR::synapse0x2542e60() {
   return (neuron0x25300a0()*-0.353238);
}

double NNfunction_ns_chi04_cR::synapse0x2542ea0() {
   return (neuron0x25303e0()*-0.639479);
}

double NNfunction_ns_chi04_cR::synapse0x2542ee0() {
   return (neuron0x2530720()*-0.435096);
}

double NNfunction_ns_chi04_cR::synapse0x2542f20() {
   return (neuron0x2530a60()*-0.506451);
}

double NNfunction_ns_chi04_cR::synapse0x2542f60() {
   return (neuron0x2530da0()*0.889905);
}

double NNfunction_ns_chi04_cR::synapse0x2542fa0() {
   return (neuron0x25310e0()*0.236711);
}

double NNfunction_ns_chi04_cR::synapse0x253b160() {
   return (neuron0x2531420()*0.036904);
}

double NNfunction_ns_chi04_cR::synapse0x253b1a0() {
   return (neuron0x2531760()*1.02543);
}

double NNfunction_ns_chi04_cR::synapse0x253b1e0() {
   return (neuron0x2531aa0()*0.695522);
}

double NNfunction_ns_chi04_cR::synapse0x253b220() {
   return (neuron0x2531de0()*-0.0294735);
}

double NNfunction_ns_chi04_cR::synapse0x253b260() {
   return (neuron0x2532120()*0.0509911);
}

double NNfunction_ns_chi04_cR::synapse0x253b2a0() {
   return (neuron0x2532460()*-0.612365);
}

double NNfunction_ns_chi04_cR::synapse0x253b2e0() {
   return (neuron0x25327a0()*1.08621);
}

double NNfunction_ns_chi04_cR::synapse0x2542bf0() {
   return (neuron0x2532ae0()*-0.322784);
}

double NNfunction_ns_chi04_cR::synapse0x2542c30() {
   return (neuron0x2533040()*-0.398935);
}

double NNfunction_ns_chi04_cR::synapse0x253b430() {
   return (neuron0x2533260()*0.690438);
}

double NNfunction_ns_chi04_cR::synapse0x253b470() {
   return (neuron0x25335a0()*0.214596);
}

double NNfunction_ns_chi04_cR::synapse0x253b4b0() {
   return (neuron0x25338e0()*-0.600127);
}

double NNfunction_ns_chi04_cR::synapse0x253b4f0() {
   return (neuron0x2533c20()*0.468934);
}

double NNfunction_ns_chi04_cR::synapse0x253b530() {
   return (neuron0x2533f60()*0.685538);
}

double NNfunction_ns_chi04_cR::synapse0x253b570() {
   return (neuron0x25342a0()*0.634077);
}

double NNfunction_ns_chi04_cR::synapse0x253b8f0() {
   return (neuron0x252f6e0()*-0.0187032);
}

double NNfunction_ns_chi04_cR::synapse0x253b930() {
   return (neuron0x252fa20()*0.0227511);
}

double NNfunction_ns_chi04_cR::synapse0x253b970() {
   return (neuron0x252fd60()*0.00932781);
}

double NNfunction_ns_chi04_cR::synapse0x253b9b0() {
   return (neuron0x25300a0()*-2.31923);
}

double NNfunction_ns_chi04_cR::synapse0x253b9f0() {
   return (neuron0x25303e0()*0.00280607);
}

double NNfunction_ns_chi04_cR::synapse0x253ba30() {
   return (neuron0x2530720()*-0.00716961);
}

double NNfunction_ns_chi04_cR::synapse0x253ba70() {
   return (neuron0x2530a60()*-0.0080169);
}

double NNfunction_ns_chi04_cR::synapse0x253bab0() {
   return (neuron0x2530da0()*0.00237824);
}

double NNfunction_ns_chi04_cR::synapse0x253baf0() {
   return (neuron0x25310e0()*-0.00606514);
}

double NNfunction_ns_chi04_cR::synapse0x253bb30() {
   return (neuron0x2531420()*-0.00348907);
}

double NNfunction_ns_chi04_cR::synapse0x253bb70() {
   return (neuron0x2531760()*-0.00257778);
}

double NNfunction_ns_chi04_cR::synapse0x253bbb0() {
   return (neuron0x2531aa0()*-0.00534264);
}

double NNfunction_ns_chi04_cR::synapse0x253bbf0() {
   return (neuron0x2531de0()*-0.00549468);
}

double NNfunction_ns_chi04_cR::synapse0x253bc30() {
   return (neuron0x2532120()*-0.00628149);
}

double NNfunction_ns_chi04_cR::synapse0x253bc70() {
   return (neuron0x2532460()*0.0195813);
}

double NNfunction_ns_chi04_cR::synapse0x253bcb0() {
   return (neuron0x25327a0()*-0.119227);
}

double NNfunction_ns_chi04_cR::synapse0x253b740() {
   return (neuron0x2532ae0()*-0.0041392);
}

double NNfunction_ns_chi04_cR::synapse0x253b780() {
   return (neuron0x2533040()*-0.00880639);
}

double NNfunction_ns_chi04_cR::synapse0x253be00() {
   return (neuron0x2533260()*-0.0152731);
}

double NNfunction_ns_chi04_cR::synapse0x253be40() {
   return (neuron0x25335a0()*-0.00160725);
}

double NNfunction_ns_chi04_cR::synapse0x253be80() {
   return (neuron0x25338e0()*-0.0159074);
}

double NNfunction_ns_chi04_cR::synapse0x253bec0() {
   return (neuron0x2533c20()*-0.0160996);
}

double NNfunction_ns_chi04_cR::synapse0x253bf00() {
   return (neuron0x2533f60()*0.00320739);
}

double NNfunction_ns_chi04_cR::synapse0x253bf40() {
   return (neuron0x25342a0()*-0.0287486);
}

double NNfunction_ns_chi04_cR::synapse0x253c110() {
   return (neuron0x252f6e0()*-0.0741228);
}

double NNfunction_ns_chi04_cR::synapse0x25451a0() {
   return (neuron0x252fa20()*3.67085);
}

double NNfunction_ns_chi04_cR::synapse0x25451e0() {
   return (neuron0x252fd60()*0.0366027);
}

double NNfunction_ns_chi04_cR::synapse0x2545220() {
   return (neuron0x25300a0()*-0.0248955);
}

double NNfunction_ns_chi04_cR::synapse0x2545260() {
   return (neuron0x25303e0()*-0.0363165);
}

double NNfunction_ns_chi04_cR::synapse0x25452a0() {
   return (neuron0x2530720()*-0.0469767);
}

double NNfunction_ns_chi04_cR::synapse0x25452e0() {
   return (neuron0x2530a60()*-0.0457617);
}

double NNfunction_ns_chi04_cR::synapse0x2545320() {
   return (neuron0x2530da0()*-0.0134705);
}

double NNfunction_ns_chi04_cR::synapse0x2545360() {
   return (neuron0x25310e0()*-0.00305507);
}

double NNfunction_ns_chi04_cR::synapse0x25453a0() {
   return (neuron0x2531420()*0.0106372);
}

double NNfunction_ns_chi04_cR::synapse0x25453e0() {
   return (neuron0x2531760()*0.0365531);
}

double NNfunction_ns_chi04_cR::synapse0x2545420() {
   return (neuron0x2531aa0()*0.0278916);
}

double NNfunction_ns_chi04_cR::synapse0x2545460() {
   return (neuron0x2531de0()*-0.0185587);
}

double NNfunction_ns_chi04_cR::synapse0x25454a0() {
   return (neuron0x2532120()*0.00676403);
}

double NNfunction_ns_chi04_cR::synapse0x25454e0() {
   return (neuron0x2532460()*-0.012882);
}

double NNfunction_ns_chi04_cR::synapse0x2545520() {
   return (neuron0x25327a0()*-0.19828);
}

double NNfunction_ns_chi04_cR::synapse0x2544ff0() {
   return (neuron0x2532ae0()*-0.0254385);
}

double NNfunction_ns_chi04_cR::synapse0x2545030() {
   return (neuron0x2533040()*-0.00624299);
}

double NNfunction_ns_chi04_cR::synapse0x2545670() {
   return (neuron0x2533260()*0.0172066);
}

double NNfunction_ns_chi04_cR::synapse0x25456b0() {
   return (neuron0x25335a0()*0.0209719);
}

double NNfunction_ns_chi04_cR::synapse0x25456f0() {
   return (neuron0x25338e0()*-0.0200137);
}

double NNfunction_ns_chi04_cR::synapse0x2545730() {
   return (neuron0x2533c20()*0.0110713);
}

double NNfunction_ns_chi04_cR::synapse0x2545770() {
   return (neuron0x2533f60()*-0.0170631);
}

double NNfunction_ns_chi04_cR::synapse0x25457b0() {
   return (neuron0x25342a0()*-0.66112);
}

double NNfunction_ns_chi04_cR::synapse0x2545b30() {
   return (neuron0x252f6e0()*0.00109957);
}

double NNfunction_ns_chi04_cR::synapse0x2545b70() {
   return (neuron0x252fa20()*-1.98866);
}

double NNfunction_ns_chi04_cR::synapse0x2545bb0() {
   return (neuron0x252fd60()*0.244842);
}

double NNfunction_ns_chi04_cR::synapse0x2545bf0() {
   return (neuron0x25300a0()*0.121921);
}

double NNfunction_ns_chi04_cR::synapse0x2545c30() {
   return (neuron0x25303e0()*-0.155503);
}

double NNfunction_ns_chi04_cR::synapse0x2545c70() {
   return (neuron0x2530720()*0.477202);
}

double NNfunction_ns_chi04_cR::synapse0x2545cb0() {
   return (neuron0x2530a60()*-0.156725);
}

double NNfunction_ns_chi04_cR::synapse0x2545cf0() {
   return (neuron0x2530da0()*-0.126624);
}

double NNfunction_ns_chi04_cR::synapse0x2545d30() {
   return (neuron0x25310e0()*-0.171258);
}

double NNfunction_ns_chi04_cR::synapse0x2545d70() {
   return (neuron0x2531420()*0.0802209);
}

double NNfunction_ns_chi04_cR::synapse0x2545db0() {
   return (neuron0x2531760()*-0.009964);
}

double NNfunction_ns_chi04_cR::synapse0x2545df0() {
   return (neuron0x2531aa0()*0.633863);
}

double NNfunction_ns_chi04_cR::synapse0x2545e30() {
   return (neuron0x2531de0()*0.591114);
}

double NNfunction_ns_chi04_cR::synapse0x2545e70() {
   return (neuron0x2532120()*0.634215);
}

double NNfunction_ns_chi04_cR::synapse0x2545eb0() {
   return (neuron0x2532460()*2.75863);
}

double NNfunction_ns_chi04_cR::synapse0x2545ef0() {
   return (neuron0x25327a0()*-0.347157);
}

double NNfunction_ns_chi04_cR::synapse0x2545980() {
   return (neuron0x2532ae0()*-0.798797);
}

double NNfunction_ns_chi04_cR::synapse0x25459c0() {
   return (neuron0x2533040()*-0.0804531);
}

double NNfunction_ns_chi04_cR::synapse0x2546040() {
   return (neuron0x2533260()*-0.153322);
}

double NNfunction_ns_chi04_cR::synapse0x2546080() {
   return (neuron0x25335a0()*0.228547);
}

double NNfunction_ns_chi04_cR::synapse0x25460c0() {
   return (neuron0x25338e0()*-0.385082);
}

double NNfunction_ns_chi04_cR::synapse0x2546100() {
   return (neuron0x2533c20()*-0.642558);
}

double NNfunction_ns_chi04_cR::synapse0x2546140() {
   return (neuron0x2533f60()*-0.178276);
}

double NNfunction_ns_chi04_cR::synapse0x2546180() {
   return (neuron0x25342a0()*0.804932);
}

double NNfunction_ns_chi04_cR::synapse0x2546500() {
   return (neuron0x252f6e0()*-0.138091);
}

double NNfunction_ns_chi04_cR::synapse0x2546540() {
   return (neuron0x252fa20()*-2.65852);
}

double NNfunction_ns_chi04_cR::synapse0x2546580() {
   return (neuron0x252fd60()*-1.65552);
}

double NNfunction_ns_chi04_cR::synapse0x25465c0() {
   return (neuron0x25300a0()*0.175825);
}

double NNfunction_ns_chi04_cR::synapse0x2546600() {
   return (neuron0x25303e0()*-0.577379);
}

double NNfunction_ns_chi04_cR::synapse0x2546640() {
   return (neuron0x2530720()*-0.150813);
}

double NNfunction_ns_chi04_cR::synapse0x2546680() {
   return (neuron0x2530a60()*-0.0175894);
}

double NNfunction_ns_chi04_cR::synapse0x25466c0() {
   return (neuron0x2530da0()*0.446221);
}

double NNfunction_ns_chi04_cR::synapse0x2546700() {
   return (neuron0x25310e0()*0.217436);
}

double NNfunction_ns_chi04_cR::synapse0x2546740() {
   return (neuron0x2531420()*-0.409033);
}

double NNfunction_ns_chi04_cR::synapse0x2546780() {
   return (neuron0x2531760()*-0.364546);
}

double NNfunction_ns_chi04_cR::synapse0x25467c0() {
   return (neuron0x2531aa0()*0.278392);
}

double NNfunction_ns_chi04_cR::synapse0x2546800() {
   return (neuron0x2531de0()*-0.445634);
}

double NNfunction_ns_chi04_cR::synapse0x2546840() {
   return (neuron0x2532120()*-0.117977);
}

double NNfunction_ns_chi04_cR::synapse0x2546880() {
   return (neuron0x2532460()*-0.703345);
}

double NNfunction_ns_chi04_cR::synapse0x25468c0() {
   return (neuron0x25327a0()*-0.0717633);
}

double NNfunction_ns_chi04_cR::synapse0x2546350() {
   return (neuron0x2532ae0()*1.15537);
}

double NNfunction_ns_chi04_cR::synapse0x2546390() {
   return (neuron0x2533040()*-0.288864);
}

double NNfunction_ns_chi04_cR::synapse0x2546a10() {
   return (neuron0x2533260()*-0.141039);
}

double NNfunction_ns_chi04_cR::synapse0x2546a50() {
   return (neuron0x25335a0()*0.200757);
}

double NNfunction_ns_chi04_cR::synapse0x2546a90() {
   return (neuron0x25338e0()*0.742678);
}

double NNfunction_ns_chi04_cR::synapse0x2546ad0() {
   return (neuron0x2533c20()*0.705596);
}

double NNfunction_ns_chi04_cR::synapse0x2546b10() {
   return (neuron0x2533f60()*-0.179789);
}

double NNfunction_ns_chi04_cR::synapse0x2546b50() {
   return (neuron0x25342a0()*1.26655);
}

double NNfunction_ns_chi04_cR::synapse0x2546ed0() {
   return (neuron0x252f6e0()*-0.0292122);
}

double NNfunction_ns_chi04_cR::synapse0x2546f10() {
   return (neuron0x252fa20()*-1.39178);
}

double NNfunction_ns_chi04_cR::synapse0x2546f50() {
   return (neuron0x252fd60()*-0.130476);
}

double NNfunction_ns_chi04_cR::synapse0x2546f90() {
   return (neuron0x25300a0()*-0.234241);
}

double NNfunction_ns_chi04_cR::synapse0x2546fd0() {
   return (neuron0x25303e0()*0.14107);
}

double NNfunction_ns_chi04_cR::synapse0x2547010() {
   return (neuron0x2530720()*-0.0144522);
}

double NNfunction_ns_chi04_cR::synapse0x2547050() {
   return (neuron0x2530a60()*0.117847);
}

double NNfunction_ns_chi04_cR::synapse0x2547090() {
   return (neuron0x2530da0()*-0.150114);
}

double NNfunction_ns_chi04_cR::synapse0x25470d0() {
   return (neuron0x25310e0()*-0.07241);
}

double NNfunction_ns_chi04_cR::synapse0x2547110() {
   return (neuron0x2531420()*-0.168939);
}

double NNfunction_ns_chi04_cR::synapse0x2547150() {
   return (neuron0x2531760()*0.124406);
}

double NNfunction_ns_chi04_cR::synapse0x2547190() {
   return (neuron0x2531aa0()*-0.244077);
}

double NNfunction_ns_chi04_cR::synapse0x25471d0() {
   return (neuron0x2531de0()*0.188965);
}

double NNfunction_ns_chi04_cR::synapse0x2547210() {
   return (neuron0x2532120()*-0.207885);
}

double NNfunction_ns_chi04_cR::synapse0x2547250() {
   return (neuron0x2532460()*0.320692);
}

double NNfunction_ns_chi04_cR::synapse0x2547290() {
   return (neuron0x25327a0()*-0.624381);
}

double NNfunction_ns_chi04_cR::synapse0x2546d20() {
   return (neuron0x2532ae0()*0.226557);
}

double NNfunction_ns_chi04_cR::synapse0x2546d60() {
   return (neuron0x2533040()*-0.00922074);
}

double NNfunction_ns_chi04_cR::synapse0x25473e0() {
   return (neuron0x2533260()*-0.0242424);
}

double NNfunction_ns_chi04_cR::synapse0x2547420() {
   return (neuron0x25335a0()*0.073612);
}

double NNfunction_ns_chi04_cR::synapse0x2547460() {
   return (neuron0x25338e0()*0.00390836);
}

double NNfunction_ns_chi04_cR::synapse0x25474a0() {
   return (neuron0x2533c20()*-0.164995);
}

double NNfunction_ns_chi04_cR::synapse0x25474e0() {
   return (neuron0x2533f60()*0.283656);
}

double NNfunction_ns_chi04_cR::synapse0x2547520() {
   return (neuron0x25342a0()*2.3259);
}

double NNfunction_ns_chi04_cR::synapse0x25478a0() {
   return (neuron0x252f6e0()*-0.00546947);
}

double NNfunction_ns_chi04_cR::synapse0x25478e0() {
   return (neuron0x252fa20()*2.35892);
}

double NNfunction_ns_chi04_cR::synapse0x2547920() {
   return (neuron0x252fd60()*0.0773158);
}

double NNfunction_ns_chi04_cR::synapse0x2547960() {
   return (neuron0x25300a0()*-0.0120888);
}

double NNfunction_ns_chi04_cR::synapse0x25479a0() {
   return (neuron0x25303e0()*0.0179586);
}

double NNfunction_ns_chi04_cR::synapse0x25479e0() {
   return (neuron0x2530720()*0.0115287);
}

double NNfunction_ns_chi04_cR::synapse0x2547a20() {
   return (neuron0x2530a60()*0.00134469);
}

double NNfunction_ns_chi04_cR::synapse0x2547a60() {
   return (neuron0x2530da0()*0.00134722);
}

double NNfunction_ns_chi04_cR::synapse0x2547aa0() {
   return (neuron0x25310e0()*0.00315202);
}

double NNfunction_ns_chi04_cR::synapse0x2547ae0() {
   return (neuron0x2531420()*-0.00820545);
}

double NNfunction_ns_chi04_cR::synapse0x2547b20() {
   return (neuron0x2531760()*0.0070076);
}

double NNfunction_ns_chi04_cR::synapse0x2547b60() {
   return (neuron0x2531aa0()*-0.021334);
}

double NNfunction_ns_chi04_cR::synapse0x2547ba0() {
   return (neuron0x2531de0()*0.00572162);
}

double NNfunction_ns_chi04_cR::synapse0x2547be0() {
   return (neuron0x2532120()*-0.0255943);
}

double NNfunction_ns_chi04_cR::synapse0x2547c20() {
   return (neuron0x2532460()*-0.00490065);
}

double NNfunction_ns_chi04_cR::synapse0x2547c60() {
   return (neuron0x25327a0()*0.0170458);
}

double NNfunction_ns_chi04_cR::synapse0x25476f0() {
   return (neuron0x2532ae0()*0.013245);
}

double NNfunction_ns_chi04_cR::synapse0x2547730() {
   return (neuron0x2533040()*0.00722017);
}

double NNfunction_ns_chi04_cR::synapse0x2547db0() {
   return (neuron0x2533260()*-0.00290307);
}

double NNfunction_ns_chi04_cR::synapse0x2547df0() {
   return (neuron0x25335a0()*-0.0304969);
}

double NNfunction_ns_chi04_cR::synapse0x2547e30() {
   return (neuron0x25338e0()*0.00487275);
}

double NNfunction_ns_chi04_cR::synapse0x2547e70() {
   return (neuron0x2533c20()*0.00211605);
}

double NNfunction_ns_chi04_cR::synapse0x2547eb0() {
   return (neuron0x2533f60()*0.0117336);
}

double NNfunction_ns_chi04_cR::synapse0x2547ef0() {
   return (neuron0x25342a0()*1.39484);
}

double NNfunction_ns_chi04_cR::synapse0x2548270() {
   return (neuron0x252f6e0()*-0.331675);
}

double NNfunction_ns_chi04_cR::synapse0x25482b0() {
   return (neuron0x252fa20()*0.522671);
}

double NNfunction_ns_chi04_cR::synapse0x25482f0() {
   return (neuron0x252fd60()*0.0223723);
}

double NNfunction_ns_chi04_cR::synapse0x2548330() {
   return (neuron0x25300a0()*-0.935256);
}

double NNfunction_ns_chi04_cR::synapse0x2548370() {
   return (neuron0x25303e0()*0.0965098);
}

double NNfunction_ns_chi04_cR::synapse0x25483b0() {
   return (neuron0x2530720()*-0.880028);
}

double NNfunction_ns_chi04_cR::synapse0x25483f0() {
   return (neuron0x2530a60()*-0.359712);
}

double NNfunction_ns_chi04_cR::synapse0x2548430() {
   return (neuron0x2530da0()*0.569906);
}

double NNfunction_ns_chi04_cR::synapse0x2548470() {
   return (neuron0x25310e0()*0.214177);
}

double NNfunction_ns_chi04_cR::synapse0x25484b0() {
   return (neuron0x2531420()*-0.999474);
}

double NNfunction_ns_chi04_cR::synapse0x25484f0() {
   return (neuron0x2531760()*1.06357);
}

double NNfunction_ns_chi04_cR::synapse0x2548530() {
   return (neuron0x2531aa0()*0.0890355);
}

double NNfunction_ns_chi04_cR::synapse0x2548570() {
   return (neuron0x2531de0()*-1.06565);
}

double NNfunction_ns_chi04_cR::synapse0x25485b0() {
   return (neuron0x2532120()*-0.316005);
}

double NNfunction_ns_chi04_cR::synapse0x25485f0() {
   return (neuron0x2532460()*0.620217);
}

double NNfunction_ns_chi04_cR::synapse0x2548630() {
   return (neuron0x25327a0()*0.59378);
}

double NNfunction_ns_chi04_cR::synapse0x25480c0() {
   return (neuron0x2532ae0()*-0.294938);
}

double NNfunction_ns_chi04_cR::synapse0x2548100() {
   return (neuron0x2533040()*0.301555);
}

double NNfunction_ns_chi04_cR::synapse0x2548780() {
   return (neuron0x2533260()*1.29866);
}

double NNfunction_ns_chi04_cR::synapse0x25487c0() {
   return (neuron0x25335a0()*-0.755412);
}

double NNfunction_ns_chi04_cR::synapse0x2548800() {
   return (neuron0x25338e0()*-0.182967);
}

double NNfunction_ns_chi04_cR::synapse0x2548840() {
   return (neuron0x2533c20()*-0.821042);
}

double NNfunction_ns_chi04_cR::synapse0x2548880() {
   return (neuron0x2533f60()*0.0358643);
}

double NNfunction_ns_chi04_cR::synapse0x25488c0() {
   return (neuron0x25342a0()*1.57927);
}

double NNfunction_ns_chi04_cR::synapse0x2548c40() {
   return (neuron0x252f6e0()*0.327932);
}

double NNfunction_ns_chi04_cR::synapse0x2548c80() {
   return (neuron0x252fa20()*1.06158);
}

double NNfunction_ns_chi04_cR::synapse0x2548cc0() {
   return (neuron0x252fd60()*3.23168);
}

double NNfunction_ns_chi04_cR::synapse0x2548d00() {
   return (neuron0x25300a0()*0.320822);
}

double NNfunction_ns_chi04_cR::synapse0x2548d40() {
   return (neuron0x25303e0()*0.383282);
}

double NNfunction_ns_chi04_cR::synapse0x2548d80() {
   return (neuron0x2530720()*0.132781);
}

double NNfunction_ns_chi04_cR::synapse0x2548dc0() {
   return (neuron0x2530a60()*-0.151479);
}

double NNfunction_ns_chi04_cR::synapse0x2548e00() {
   return (neuron0x2530da0()*-0.36322);
}

double NNfunction_ns_chi04_cR::synapse0x2548e40() {
   return (neuron0x25310e0()*-0.185484);
}

double NNfunction_ns_chi04_cR::synapse0x2548e80() {
   return (neuron0x2531420()*-0.29179);
}

double NNfunction_ns_chi04_cR::synapse0x2548ec0() {
   return (neuron0x2531760()*0.262806);
}

double NNfunction_ns_chi04_cR::synapse0x2548f00() {
   return (neuron0x2531aa0()*0.0111904);
}

double NNfunction_ns_chi04_cR::synapse0x2548f40() {
   return (neuron0x2531de0()*-0.00940559);
}

double NNfunction_ns_chi04_cR::synapse0x2548f80() {
   return (neuron0x2532120()*0.485707);
}

double NNfunction_ns_chi04_cR::synapse0x2548fc0() {
   return (neuron0x2532460()*-0.00208735);
}

double NNfunction_ns_chi04_cR::synapse0x2549000() {
   return (neuron0x25327a0()*-0.194412);
}

double NNfunction_ns_chi04_cR::synapse0x2548a90() {
   return (neuron0x2532ae0()*-0.311791);
}

double NNfunction_ns_chi04_cR::synapse0x2548ad0() {
   return (neuron0x2533040()*0.22971);
}

double NNfunction_ns_chi04_cR::synapse0x2549150() {
   return (neuron0x2533260()*-0.0148479);
}

double NNfunction_ns_chi04_cR::synapse0x2549190() {
   return (neuron0x25335a0()*-0.154114);
}

double NNfunction_ns_chi04_cR::synapse0x25491d0() {
   return (neuron0x25338e0()*-0.0548202);
}

double NNfunction_ns_chi04_cR::synapse0x2549210() {
   return (neuron0x2533c20()*-0.322749);
}

double NNfunction_ns_chi04_cR::synapse0x2549250() {
   return (neuron0x2533f60()*0.141776);
}

double NNfunction_ns_chi04_cR::synapse0x2549290() {
   return (neuron0x25342a0()*-1.74549);
}

double NNfunction_ns_chi04_cR::synapse0x2549610() {
   return (neuron0x252f6e0()*1.07703);
}

double NNfunction_ns_chi04_cR::synapse0x2549650() {
   return (neuron0x252fa20()*1.98031);
}

double NNfunction_ns_chi04_cR::synapse0x2549690() {
   return (neuron0x252fd60()*-0.507878);
}

double NNfunction_ns_chi04_cR::synapse0x25496d0() {
   return (neuron0x25300a0()*-0.161239);
}

double NNfunction_ns_chi04_cR::synapse0x2549710() {
   return (neuron0x25303e0()*1.19483);
}

double NNfunction_ns_chi04_cR::synapse0x2549750() {
   return (neuron0x2530720()*0.0310089);
}

double NNfunction_ns_chi04_cR::synapse0x2549790() {
   return (neuron0x2530a60()*0.832499);
}

double NNfunction_ns_chi04_cR::synapse0x25497d0() {
   return (neuron0x2530da0()*0.199371);
}

double NNfunction_ns_chi04_cR::synapse0x2549810() {
   return (neuron0x25310e0()*-0.275734);
}

double NNfunction_ns_chi04_cR::synapse0x2549850() {
   return (neuron0x2531420()*-0.960471);
}

double NNfunction_ns_chi04_cR::synapse0x2549890() {
   return (neuron0x2531760()*0.0717673);
}

double NNfunction_ns_chi04_cR::synapse0x25498d0() {
   return (neuron0x2531aa0()*-0.961085);
}

double NNfunction_ns_chi04_cR::synapse0x2549910() {
   return (neuron0x2531de0()*0.144002);
}

double NNfunction_ns_chi04_cR::synapse0x2549950() {
   return (neuron0x2532120()*-0.221137);
}

double NNfunction_ns_chi04_cR::synapse0x2549990() {
   return (neuron0x2532460()*0.209559);
}

double NNfunction_ns_chi04_cR::synapse0x25499d0() {
   return (neuron0x25327a0()*-0.775657);
}

double NNfunction_ns_chi04_cR::synapse0x2549460() {
   return (neuron0x2532ae0()*-0.0605476);
}

double NNfunction_ns_chi04_cR::synapse0x25494a0() {
   return (neuron0x2533040()*-0.058605);
}

double NNfunction_ns_chi04_cR::synapse0x2549b20() {
   return (neuron0x2533260()*0.387427);
}

double NNfunction_ns_chi04_cR::synapse0x2549b60() {
   return (neuron0x25335a0()*0.149316);
}

double NNfunction_ns_chi04_cR::synapse0x2549ba0() {
   return (neuron0x25338e0()*0.199205);
}

double NNfunction_ns_chi04_cR::synapse0x2549be0() {
   return (neuron0x2533c20()*-0.599904);
}

double NNfunction_ns_chi04_cR::synapse0x2549c20() {
   return (neuron0x2533f60()*-0.0711358);
}

double NNfunction_ns_chi04_cR::synapse0x2549c60() {
   return (neuron0x25342a0()*-1.54164);
}

double NNfunction_ns_chi04_cR::synapse0x2549fe0() {
   return (neuron0x252f6e0()*-0.0341064);
}

double NNfunction_ns_chi04_cR::synapse0x253e5b0() {
   return (neuron0x252fa20()*2.64485);
}

double NNfunction_ns_chi04_cR::synapse0x253e5f0() {
   return (neuron0x252fd60()*1.43679);
}

double NNfunction_ns_chi04_cR::synapse0x253e630() {
   return (neuron0x25300a0()*0.0145852);
}

double NNfunction_ns_chi04_cR::synapse0x253e880() {
   return (neuron0x25303e0()*-0.0263168);
}

double NNfunction_ns_chi04_cR::synapse0x253e8c0() {
   return (neuron0x2530720()*-0.0586531);
}

double NNfunction_ns_chi04_cR::synapse0x253e900() {
   return (neuron0x2530a60()*-0.0434454);
}

double NNfunction_ns_chi04_cR::synapse0x253eb50() {
   return (neuron0x2530da0()*-0.105093);
}

double NNfunction_ns_chi04_cR::synapse0x253eb90() {
   return (neuron0x25310e0()*0.0762756);
}

double NNfunction_ns_chi04_cR::synapse0x253ede0() {
   return (neuron0x2531420()*-0.0495897);
}

double NNfunction_ns_chi04_cR::synapse0x253ee20() {
   return (neuron0x2531760()*0.0213665);
}

double NNfunction_ns_chi04_cR::synapse0x253ee60() {
   return (neuron0x2531aa0()*-0.00753601);
}

double NNfunction_ns_chi04_cR::synapse0x253f0b0() {
   return (neuron0x2531de0()*0.179605);
}

double NNfunction_ns_chi04_cR::synapse0x253f0f0() {
   return (neuron0x2532120()*0.0275365);
}

double NNfunction_ns_chi04_cR::synapse0x253f340() {
   return (neuron0x2532460()*-0.00621816);
}

double NNfunction_ns_chi04_cR::synapse0x253f380() {
   return (neuron0x25327a0()*-0.548162);
}

double NNfunction_ns_chi04_cR::synapse0x2549e30() {
   return (neuron0x2532ae0()*0.0904291);
}

double NNfunction_ns_chi04_cR::synapse0x2549e70() {
   return (neuron0x2533040()*0.0646146);
}

double NNfunction_ns_chi04_cR::synapse0x253f4d0() {
   return (neuron0x2533260()*0.0344299);
}

double NNfunction_ns_chi04_cR::synapse0x253f9e0() {
   return (neuron0x25335a0()*0.0516371);
}

double NNfunction_ns_chi04_cR::synapse0x253fa20() {
   return (neuron0x25338e0()*-0.0252901);
}

double NNfunction_ns_chi04_cR::synapse0x253fa60() {
   return (neuron0x2533c20()*-0.0686057);
}

double NNfunction_ns_chi04_cR::synapse0x253fcb0() {
   return (neuron0x2533f60()*-0.121987);
}

double NNfunction_ns_chi04_cR::synapse0x253fcf0() {
   return (neuron0x25342a0()*0.303322);
}

double NNfunction_ns_chi04_cR::synapse0x253f5a0() {
   return (neuron0x252f6e0()*-0.0139049);
}

double NNfunction_ns_chi04_cR::synapse0x253f5e0() {
   return (neuron0x252fa20()*4.33506);
}

double NNfunction_ns_chi04_cR::synapse0x253f620() {
   return (neuron0x252fd60()*-0.108329);
}

double NNfunction_ns_chi04_cR::synapse0x253f660() {
   return (neuron0x25300a0()*0.019071);
}

double NNfunction_ns_chi04_cR::synapse0x253ffe0() {
   return (neuron0x25303e0()*-0.0388884);
}

double NNfunction_ns_chi04_cR::synapse0x254c330() {
   return (neuron0x2530720()*-0.00696922);
}

double NNfunction_ns_chi04_cR::synapse0x254c370() {
   return (neuron0x2530a60()*-0.0304896);
}

double NNfunction_ns_chi04_cR::synapse0x254c3b0() {
   return (neuron0x2530da0()*-0.0286549);
}

double NNfunction_ns_chi04_cR::synapse0x254c3f0() {
   return (neuron0x25310e0()*0.0325294);
}

double NNfunction_ns_chi04_cR::synapse0x254c430() {
   return (neuron0x2531420()*-0.0353712);
}

double NNfunction_ns_chi04_cR::synapse0x254c470() {
   return (neuron0x2531760()*-0.0110288);
}

double NNfunction_ns_chi04_cR::synapse0x254c4b0() {
   return (neuron0x2531aa0()*-0.0427521);
}

double NNfunction_ns_chi04_cR::synapse0x254c4f0() {
   return (neuron0x2531de0()*-0.00679299);
}

double NNfunction_ns_chi04_cR::synapse0x254c530() {
   return (neuron0x2532120()*-0.0326642);
}

double NNfunction_ns_chi04_cR::synapse0x254c570() {
   return (neuron0x2532460()*0.0109096);
}

double NNfunction_ns_chi04_cR::synapse0x254c5b0() {
   return (neuron0x25327a0()*0.0579679);
}

double NNfunction_ns_chi04_cR::synapse0x253fec0() {
   return (neuron0x2532ae0()*0.00051001);
}

double NNfunction_ns_chi04_cR::synapse0x253ff00() {
   return (neuron0x2533040()*-0.000298373);
}

double NNfunction_ns_chi04_cR::synapse0x254c700() {
   return (neuron0x2533260()*0.0255448);
}

double NNfunction_ns_chi04_cR::synapse0x254c740() {
   return (neuron0x25335a0()*-0.0339752);
}

double NNfunction_ns_chi04_cR::synapse0x254c780() {
   return (neuron0x25338e0()*-0.0257065);
}

double NNfunction_ns_chi04_cR::synapse0x254c7c0() {
   return (neuron0x2533c20()*0.027625);
}

double NNfunction_ns_chi04_cR::synapse0x254c800() {
   return (neuron0x2533f60()*-0.0228406);
}

double NNfunction_ns_chi04_cR::synapse0x254c840() {
   return (neuron0x25342a0()*-1.09633);
}

double NNfunction_ns_chi04_cR::synapse0x254cbc0() {
   return (neuron0x252f6e0()*-0.0184439);
}

double NNfunction_ns_chi04_cR::synapse0x254cc00() {
   return (neuron0x252fa20()*-1.4687);
}

double NNfunction_ns_chi04_cR::synapse0x254cc40() {
   return (neuron0x252fd60()*-0.055345);
}

double NNfunction_ns_chi04_cR::synapse0x254cc80() {
   return (neuron0x25300a0()*0.0410213);
}

double NNfunction_ns_chi04_cR::synapse0x254ccc0() {
   return (neuron0x25303e0()*-0.0160373);
}

double NNfunction_ns_chi04_cR::synapse0x254cd00() {
   return (neuron0x2530720()*-0.0157581);
}

double NNfunction_ns_chi04_cR::synapse0x254cd40() {
   return (neuron0x2530a60()*-0.0214718);
}

double NNfunction_ns_chi04_cR::synapse0x254cd80() {
   return (neuron0x2530da0()*0.00493535);
}

double NNfunction_ns_chi04_cR::synapse0x254cdc0() {
   return (neuron0x25310e0()*0.00154811);
}

double NNfunction_ns_chi04_cR::synapse0x254ce00() {
   return (neuron0x2531420()*0.00126347);
}

double NNfunction_ns_chi04_cR::synapse0x254ce40() {
   return (neuron0x2531760()*0.0208733);
}

double NNfunction_ns_chi04_cR::synapse0x254ce80() {
   return (neuron0x2531aa0()*0.0358553);
}

double NNfunction_ns_chi04_cR::synapse0x254cec0() {
   return (neuron0x2531de0()*-0.0103903);
}

double NNfunction_ns_chi04_cR::synapse0x254cf00() {
   return (neuron0x2532120()*0.0179217);
}

double NNfunction_ns_chi04_cR::synapse0x254cf40() {
   return (neuron0x2532460()*0.0128323);
}

double NNfunction_ns_chi04_cR::synapse0x254cf80() {
   return (neuron0x25327a0()*-0.14507);
}

double NNfunction_ns_chi04_cR::synapse0x254ca10() {
   return (neuron0x2532ae0()*0.00760352);
}

double NNfunction_ns_chi04_cR::synapse0x254ca50() {
   return (neuron0x2533040()*-0.0119892);
}

double NNfunction_ns_chi04_cR::synapse0x254d0d0() {
   return (neuron0x2533260()*0.0124412);
}

double NNfunction_ns_chi04_cR::synapse0x254d110() {
   return (neuron0x25335a0()*0.0286974);
}

double NNfunction_ns_chi04_cR::synapse0x254d150() {
   return (neuron0x25338e0()*-0.0148423);
}

double NNfunction_ns_chi04_cR::synapse0x254d190() {
   return (neuron0x2533c20()*-0.00142816);
}

double NNfunction_ns_chi04_cR::synapse0x254d1d0() {
   return (neuron0x2533f60()*-0.0127416);
}

double NNfunction_ns_chi04_cR::synapse0x254d210() {
   return (neuron0x25342a0()*-0.673557);
}

double NNfunction_ns_chi04_cR::synapse0x254d590() {
   return (neuron0x252f6e0()*0.235161);
}

double NNfunction_ns_chi04_cR::synapse0x254d5d0() {
   return (neuron0x252fa20()*-0.190175);
}

double NNfunction_ns_chi04_cR::synapse0x254d610() {
   return (neuron0x252fd60()*-0.0480262);
}

double NNfunction_ns_chi04_cR::synapse0x254d650() {
   return (neuron0x25300a0()*-0.203977);
}

double NNfunction_ns_chi04_cR::synapse0x254d690() {
   return (neuron0x25303e0()*0.700862);
}

double NNfunction_ns_chi04_cR::synapse0x254d6d0() {
   return (neuron0x2530720()*-0.0202774);
}

double NNfunction_ns_chi04_cR::synapse0x254d710() {
   return (neuron0x2530a60()*0.0266341);
}

double NNfunction_ns_chi04_cR::synapse0x254d750() {
   return (neuron0x2530da0()*-0.687642);
}

double NNfunction_ns_chi04_cR::synapse0x254d790() {
   return (neuron0x25310e0()*0.0400661);
}

double NNfunction_ns_chi04_cR::synapse0x254d7d0() {
   return (neuron0x2531420()*-0.121588);
}

double NNfunction_ns_chi04_cR::synapse0x254d810() {
   return (neuron0x2531760()*-0.131489);
}

double NNfunction_ns_chi04_cR::synapse0x254d850() {
   return (neuron0x2531aa0()*-0.120284);
}

double NNfunction_ns_chi04_cR::synapse0x254d890() {
   return (neuron0x2531de0()*-0.104638);
}

double NNfunction_ns_chi04_cR::synapse0x254d8d0() {
   return (neuron0x2532120()*0.0106436);
}

double NNfunction_ns_chi04_cR::synapse0x254d910() {
   return (neuron0x2532460()*1.04016);
}

double NNfunction_ns_chi04_cR::synapse0x254d950() {
   return (neuron0x25327a0()*-1.96911);
}

double NNfunction_ns_chi04_cR::synapse0x254d3e0() {
   return (neuron0x2532ae0()*1.03906);
}

double NNfunction_ns_chi04_cR::synapse0x254d420() {
   return (neuron0x2533040()*-0.100672);
}

double NNfunction_ns_chi04_cR::synapse0x254daa0() {
   return (neuron0x2533260()*-0.193167);
}

double NNfunction_ns_chi04_cR::synapse0x254dae0() {
   return (neuron0x25335a0()*0.132156);
}

double NNfunction_ns_chi04_cR::synapse0x254db20() {
   return (neuron0x25338e0()*0.442978);
}

double NNfunction_ns_chi04_cR::synapse0x254db60() {
   return (neuron0x2533c20()*0.0183784);
}

double NNfunction_ns_chi04_cR::synapse0x254dba0() {
   return (neuron0x2533f60()*0.0344012);
}

double NNfunction_ns_chi04_cR::synapse0x254dbe0() {
   return (neuron0x25342a0()*-0.699209);
}

double NNfunction_ns_chi04_cR::synapse0x254df60() {
   return (neuron0x252f6e0()*-0.0425862);
}

double NNfunction_ns_chi04_cR::synapse0x254dfa0() {
   return (neuron0x252fa20()*17.3443);
}

double NNfunction_ns_chi04_cR::synapse0x254dfe0() {
   return (neuron0x252fd60()*3.93963);
}

double NNfunction_ns_chi04_cR::synapse0x254e020() {
   return (neuron0x25300a0()*-0.0737033);
}

double NNfunction_ns_chi04_cR::synapse0x254e060() {
   return (neuron0x25303e0()*0.126862);
}

double NNfunction_ns_chi04_cR::synapse0x254e0a0() {
   return (neuron0x2530720()*0.0597395);
}

double NNfunction_ns_chi04_cR::synapse0x254e0e0() {
   return (neuron0x2530a60()*0.024605);
}

double NNfunction_ns_chi04_cR::synapse0x254e120() {
   return (neuron0x2530da0()*0.0173235);
}

double NNfunction_ns_chi04_cR::synapse0x254e160() {
   return (neuron0x25310e0()*0.00676149);
}

double NNfunction_ns_chi04_cR::synapse0x254e1a0() {
   return (neuron0x2531420()*-0.105456);
}

double NNfunction_ns_chi04_cR::synapse0x254e1e0() {
   return (neuron0x2531760()*-0.0613627);
}

double NNfunction_ns_chi04_cR::synapse0x254e220() {
   return (neuron0x2531aa0()*-0.0337881);
}

double NNfunction_ns_chi04_cR::synapse0x254e260() {
   return (neuron0x2531de0()*-0.028923);
}

double NNfunction_ns_chi04_cR::synapse0x254e2a0() {
   return (neuron0x2532120()*0.0474927);
}

double NNfunction_ns_chi04_cR::synapse0x254e2e0() {
   return (neuron0x2532460()*0.0552632);
}

double NNfunction_ns_chi04_cR::synapse0x254e320() {
   return (neuron0x25327a0()*-0.295784);
}

double NNfunction_ns_chi04_cR::synapse0x254ddb0() {
   return (neuron0x2532ae0()*0.0737132);
}

double NNfunction_ns_chi04_cR::synapse0x254ddf0() {
   return (neuron0x2533040()*0.0157051);
}

double NNfunction_ns_chi04_cR::synapse0x254e470() {
   return (neuron0x2533260()*-0.0368812);
}

double NNfunction_ns_chi04_cR::synapse0x254e4b0() {
   return (neuron0x25335a0()*-0.108608);
}

double NNfunction_ns_chi04_cR::synapse0x254e4f0() {
   return (neuron0x25338e0()*0.019243);
}

double NNfunction_ns_chi04_cR::synapse0x254e530() {
   return (neuron0x2533c20()*0.00578042);
}

double NNfunction_ns_chi04_cR::synapse0x254e570() {
   return (neuron0x2533f60()*-0.0398869);
}

double NNfunction_ns_chi04_cR::synapse0x254e5b0() {
   return (neuron0x25342a0()*0.874061);
}

double NNfunction_ns_chi04_cR::synapse0x254e930() {
   return (neuron0x252f6e0()*-0.0118003);
}

double NNfunction_ns_chi04_cR::synapse0x254e970() {
   return (neuron0x252fa20()*0.54514);
}

double NNfunction_ns_chi04_cR::synapse0x254e9b0() {
   return (neuron0x252fd60()*0.348018);
}

double NNfunction_ns_chi04_cR::synapse0x254e9f0() {
   return (neuron0x25300a0()*-1.33201);
}

double NNfunction_ns_chi04_cR::synapse0x254ea30() {
   return (neuron0x25303e0()*0.289226);
}

double NNfunction_ns_chi04_cR::synapse0x254ea70() {
   return (neuron0x2530720()*-0.106792);
}

double NNfunction_ns_chi04_cR::synapse0x254eab0() {
   return (neuron0x2530a60()*0.565718);
}

double NNfunction_ns_chi04_cR::synapse0x254eaf0() {
   return (neuron0x2530da0()*0.370261);
}

double NNfunction_ns_chi04_cR::synapse0x254eb30() {
   return (neuron0x25310e0()*-0.392096);
}

double NNfunction_ns_chi04_cR::synapse0x254eb70() {
   return (neuron0x2531420()*0.231675);
}

double NNfunction_ns_chi04_cR::synapse0x254ebb0() {
   return (neuron0x2531760()*-0.0850529);
}

double NNfunction_ns_chi04_cR::synapse0x254ebf0() {
   return (neuron0x2531aa0()*-0.431128);
}

double NNfunction_ns_chi04_cR::synapse0x254ec30() {
   return (neuron0x2531de0()*-0.247447);
}

double NNfunction_ns_chi04_cR::synapse0x254ec70() {
   return (neuron0x2532120()*-0.27387);
}

double NNfunction_ns_chi04_cR::synapse0x254ecb0() {
   return (neuron0x2532460()*0.0408565);
}

double NNfunction_ns_chi04_cR::synapse0x254ecf0() {
   return (neuron0x25327a0()*-1.18778);
}

double NNfunction_ns_chi04_cR::synapse0x254e780() {
   return (neuron0x2532ae0()*-0.481925);
}

double NNfunction_ns_chi04_cR::synapse0x254e7c0() {
   return (neuron0x2533040()*-0.367696);
}

double NNfunction_ns_chi04_cR::synapse0x254ee40() {
   return (neuron0x2533260()*1.36848);
}

double NNfunction_ns_chi04_cR::synapse0x254ee80() {
   return (neuron0x25335a0()*0.528761);
}

double NNfunction_ns_chi04_cR::synapse0x254eec0() {
   return (neuron0x25338e0()*-0.648174);
}

double NNfunction_ns_chi04_cR::synapse0x254ef00() {
   return (neuron0x2533c20()*0.30956);
}

double NNfunction_ns_chi04_cR::synapse0x254ef40() {
   return (neuron0x2533f60()*-0.47019);
}

double NNfunction_ns_chi04_cR::synapse0x254ef80() {
   return (neuron0x25342a0()*-0.69751);
}

double NNfunction_ns_chi04_cR::synapse0x254f300() {
   return (neuron0x252f6e0()*-0.863873);
}

double NNfunction_ns_chi04_cR::synapse0x254f340() {
   return (neuron0x252fa20()*-0.709478);
}

double NNfunction_ns_chi04_cR::synapse0x254f380() {
   return (neuron0x252fd60()*-1.37508);
}

double NNfunction_ns_chi04_cR::synapse0x254f3c0() {
   return (neuron0x25300a0()*0.58318);
}

double NNfunction_ns_chi04_cR::synapse0x254f400() {
   return (neuron0x25303e0()*0.602606);
}

double NNfunction_ns_chi04_cR::synapse0x254f440() {
   return (neuron0x2530720()*-0.413458);
}

double NNfunction_ns_chi04_cR::synapse0x254f480() {
   return (neuron0x2530a60()*-0.199993);
}

double NNfunction_ns_chi04_cR::synapse0x254f4c0() {
   return (neuron0x2530da0()*-0.163712);
}

double NNfunction_ns_chi04_cR::synapse0x254f500() {
   return (neuron0x25310e0()*-0.677994);
}

double NNfunction_ns_chi04_cR::synapse0x254f540() {
   return (neuron0x2531420()*-0.674349);
}

double NNfunction_ns_chi04_cR::synapse0x254f580() {
   return (neuron0x2531760()*-0.653738);
}

double NNfunction_ns_chi04_cR::synapse0x254f5c0() {
   return (neuron0x2531aa0()*-0.870771);
}

double NNfunction_ns_chi04_cR::synapse0x254f600() {
   return (neuron0x2531de0()*-0.951425);
}

double NNfunction_ns_chi04_cR::synapse0x254f640() {
   return (neuron0x2532120()*0.463026);
}

double NNfunction_ns_chi04_cR::synapse0x254f680() {
   return (neuron0x2532460()*-0.529417);
}

double NNfunction_ns_chi04_cR::synapse0x254f6c0() {
   return (neuron0x25327a0()*0.853779);
}

double NNfunction_ns_chi04_cR::synapse0x254f150() {
   return (neuron0x2532ae0()*-0.869768);
}

double NNfunction_ns_chi04_cR::synapse0x254f190() {
   return (neuron0x2533040()*-0.295428);
}

double NNfunction_ns_chi04_cR::synapse0x254f810() {
   return (neuron0x2533260()*0.470831);
}

double NNfunction_ns_chi04_cR::synapse0x254f850() {
   return (neuron0x25335a0()*-1.6181);
}

double NNfunction_ns_chi04_cR::synapse0x254f890() {
   return (neuron0x25338e0()*-0.568526);
}

double NNfunction_ns_chi04_cR::synapse0x254f8d0() {
   return (neuron0x2533c20()*0.00957885);
}

double NNfunction_ns_chi04_cR::synapse0x254f910() {
   return (neuron0x2533f60()*0.572652);
}

double NNfunction_ns_chi04_cR::synapse0x254f950() {
   return (neuron0x25342a0()*0.178537);
}

double NNfunction_ns_chi04_cR::synapse0x254fcd0() {
   return (neuron0x252f6e0()*0.00851491);
}

double NNfunction_ns_chi04_cR::synapse0x254fd10() {
   return (neuron0x252fa20()*7.50805);
}

double NNfunction_ns_chi04_cR::synapse0x254fd50() {
   return (neuron0x252fd60()*-2.92297);
}

double NNfunction_ns_chi04_cR::synapse0x254fd90() {
   return (neuron0x25300a0()*0.016006);
}

double NNfunction_ns_chi04_cR::synapse0x254fdd0() {
   return (neuron0x25303e0()*-0.0577393);
}

double NNfunction_ns_chi04_cR::synapse0x254fe10() {
   return (neuron0x2530720()*-0.037698);
}

double NNfunction_ns_chi04_cR::synapse0x254fe50() {
   return (neuron0x2530a60()*0.00376133);
}

double NNfunction_ns_chi04_cR::synapse0x254fe90() {
   return (neuron0x2530da0()*-0.0589681);
}

double NNfunction_ns_chi04_cR::synapse0x254fed0() {
   return (neuron0x25310e0()*-0.0188416);
}

double NNfunction_ns_chi04_cR::synapse0x254ff10() {
   return (neuron0x2531420()*-0.0142158);
}

double NNfunction_ns_chi04_cR::synapse0x254ff50() {
   return (neuron0x2531760()*0.00565126);
}

double NNfunction_ns_chi04_cR::synapse0x254ff90() {
   return (neuron0x2531aa0()*-0.0879551);
}

double NNfunction_ns_chi04_cR::synapse0x254ffd0() {
   return (neuron0x2531de0()*-0.0367892);
}

double NNfunction_ns_chi04_cR::synapse0x2550010() {
   return (neuron0x2532120()*-0.0344135);
}

double NNfunction_ns_chi04_cR::synapse0x2550050() {
   return (neuron0x2532460()*0.0113395);
}

double NNfunction_ns_chi04_cR::synapse0x2550090() {
   return (neuron0x25327a0()*-0.0256454);
}

double NNfunction_ns_chi04_cR::synapse0x254fb20() {
   return (neuron0x2532ae0()*0.00677323);
}

double NNfunction_ns_chi04_cR::synapse0x254fb60() {
   return (neuron0x2533040()*-0.00618061);
}

double NNfunction_ns_chi04_cR::synapse0x25501e0() {
   return (neuron0x2533260()*-0.0139087);
}

double NNfunction_ns_chi04_cR::synapse0x2550220() {
   return (neuron0x25335a0()*-0.0321776);
}

double NNfunction_ns_chi04_cR::synapse0x2550260() {
   return (neuron0x25338e0()*-0.0224377);
}

double NNfunction_ns_chi04_cR::synapse0x25502a0() {
   return (neuron0x2533c20()*-0.0480844);
}

double NNfunction_ns_chi04_cR::synapse0x25502e0() {
   return (neuron0x2533f60()*-0.0295393);
}

double NNfunction_ns_chi04_cR::synapse0x2550320() {
   return (neuron0x25342a0()*-0.0588606);
}

double NNfunction_ns_chi04_cR::synapse0x25506a0() {
   return (neuron0x252f6e0()*-0.438801);
}

double NNfunction_ns_chi04_cR::synapse0x25506e0() {
   return (neuron0x252fa20()*-0.711475);
}

double NNfunction_ns_chi04_cR::synapse0x2550720() {
   return (neuron0x252fd60()*-0.993335);
}

double NNfunction_ns_chi04_cR::synapse0x2550760() {
   return (neuron0x25300a0()*-0.200537);
}

double NNfunction_ns_chi04_cR::synapse0x25507a0() {
   return (neuron0x25303e0()*0.935056);
}

double NNfunction_ns_chi04_cR::synapse0x25507e0() {
   return (neuron0x2530720()*-1.20026);
}

double NNfunction_ns_chi04_cR::synapse0x2550820() {
   return (neuron0x2530a60()*-0.276224);
}

double NNfunction_ns_chi04_cR::synapse0x2550860() {
   return (neuron0x2530da0()*0.523776);
}

double NNfunction_ns_chi04_cR::synapse0x25508a0() {
   return (neuron0x25310e0()*0.134447);
}

double NNfunction_ns_chi04_cR::synapse0x25508e0() {
   return (neuron0x2531420()*0.287404);
}

double NNfunction_ns_chi04_cR::synapse0x2550920() {
   return (neuron0x2531760()*-0.284123);
}

double NNfunction_ns_chi04_cR::synapse0x2550960() {
   return (neuron0x2531aa0()*-0.37729);
}

double NNfunction_ns_chi04_cR::synapse0x25509a0() {
   return (neuron0x2531de0()*-0.242569);
}

double NNfunction_ns_chi04_cR::synapse0x25509e0() {
   return (neuron0x2532120()*-0.31187);
}

double NNfunction_ns_chi04_cR::synapse0x2550a20() {
   return (neuron0x2532460()*-0.378001);
}

double NNfunction_ns_chi04_cR::synapse0x2550a60() {
   return (neuron0x25327a0()*-0.298536);
}

double NNfunction_ns_chi04_cR::synapse0x25504f0() {
   return (neuron0x2532ae0()*-0.47577);
}

double NNfunction_ns_chi04_cR::synapse0x2550530() {
   return (neuron0x2533040()*-0.383813);
}

double NNfunction_ns_chi04_cR::synapse0x2550bb0() {
   return (neuron0x2533260()*-0.353474);
}

double NNfunction_ns_chi04_cR::synapse0x2550bf0() {
   return (neuron0x25335a0()*-0.391582);
}

double NNfunction_ns_chi04_cR::synapse0x2550c30() {
   return (neuron0x25338e0()*0.180861);
}

double NNfunction_ns_chi04_cR::synapse0x2550c70() {
   return (neuron0x2533c20()*-0.0469309);
}

double NNfunction_ns_chi04_cR::synapse0x2550cb0() {
   return (neuron0x2533f60()*-0.330275);
}

double NNfunction_ns_chi04_cR::synapse0x2550cf0() {
   return (neuron0x25342a0()*-0.50505);
}

double NNfunction_ns_chi04_cR::synapse0x25397a0() {
   return (neuron0x252f6e0()*0.00949636);
}

double NNfunction_ns_chi04_cR::synapse0x25397e0() {
   return (neuron0x252fa20()*5.03641);
}

double NNfunction_ns_chi04_cR::synapse0x2539820() {
   return (neuron0x252fd60()*-2.36867);
}

double NNfunction_ns_chi04_cR::synapse0x2539860() {
   return (neuron0x25300a0()*-0.0211965);
}

double NNfunction_ns_chi04_cR::synapse0x25398a0() {
   return (neuron0x25303e0()*-0.110686);
}

double NNfunction_ns_chi04_cR::synapse0x25398e0() {
   return (neuron0x2530720()*-0.0737856);
}

double NNfunction_ns_chi04_cR::synapse0x2539920() {
   return (neuron0x2530a60()*-0.0536702);
}

double NNfunction_ns_chi04_cR::synapse0x2539960() {
   return (neuron0x2530da0()*0.0253223);
}

double NNfunction_ns_chi04_cR::synapse0x2551480() {
   return (neuron0x25310e0()*0.00820266);
}

double NNfunction_ns_chi04_cR::synapse0x25514c0() {
   return (neuron0x2531420()*0.024205);
}

double NNfunction_ns_chi04_cR::synapse0x2551500() {
   return (neuron0x2531760()*-0.048491);
}

double NNfunction_ns_chi04_cR::synapse0x2551540() {
   return (neuron0x2531aa0()*-0.029795);
}

double NNfunction_ns_chi04_cR::synapse0x2551580() {
   return (neuron0x2531de0()*-0.0192248);
}

double NNfunction_ns_chi04_cR::synapse0x25515c0() {
   return (neuron0x2532120()*-0.0522724);
}

double NNfunction_ns_chi04_cR::synapse0x2551600() {
   return (neuron0x2532460()*-0.018292);
}

double NNfunction_ns_chi04_cR::synapse0x2551640() {
   return (neuron0x25327a0()*-0.209817);
}

double NNfunction_ns_chi04_cR::synapse0x2550ec0() {
   return (neuron0x2532ae0()*-0.0334763);
}

double NNfunction_ns_chi04_cR::synapse0x2550f00() {
   return (neuron0x2533040()*-0.00679329);
}

double NNfunction_ns_chi04_cR::synapse0x2551790() {
   return (neuron0x2533260()*0.0283557);
}

double NNfunction_ns_chi04_cR::synapse0x25517d0() {
   return (neuron0x25335a0()*0.027434);
}

double NNfunction_ns_chi04_cR::synapse0x2551810() {
   return (neuron0x25338e0()*0.0111731);
}

double NNfunction_ns_chi04_cR::synapse0x2551850() {
   return (neuron0x2533c20()*0.0117845);
}

double NNfunction_ns_chi04_cR::synapse0x2551890() {
   return (neuron0x2533f60()*0.0330484);
}

double NNfunction_ns_chi04_cR::synapse0x25518d0() {
   return (neuron0x25342a0()*-1.79772);
}

double NNfunction_ns_chi04_cR::synapse0x2551c50() {
   return (neuron0x252f6e0()*0.0104612);
}

double NNfunction_ns_chi04_cR::synapse0x2551c90() {
   return (neuron0x252fa20()*-12.8517);
}

double NNfunction_ns_chi04_cR::synapse0x2551cd0() {
   return (neuron0x252fd60()*3.98878);
}

double NNfunction_ns_chi04_cR::synapse0x2551d10() {
   return (neuron0x25300a0()*-0.0391441);
}

double NNfunction_ns_chi04_cR::synapse0x2551d50() {
   return (neuron0x25303e0()*0.0444452);
}

double NNfunction_ns_chi04_cR::synapse0x2551d90() {
   return (neuron0x2530720()*0.020433);
}

double NNfunction_ns_chi04_cR::synapse0x2551dd0() {
   return (neuron0x2530a60()*0.0131782);
}

double NNfunction_ns_chi04_cR::synapse0x2551e10() {
   return (neuron0x2530da0()*0.0546381);
}

double NNfunction_ns_chi04_cR::synapse0x2551e50() {
   return (neuron0x25310e0()*0.0397905);
}

double NNfunction_ns_chi04_cR::synapse0x2551e90() {
   return (neuron0x2531420()*-0.00715571);
}

double NNfunction_ns_chi04_cR::synapse0x2551ed0() {
   return (neuron0x2531760()*-0.0385145);
}

double NNfunction_ns_chi04_cR::synapse0x2551f10() {
   return (neuron0x2531aa0()*0.0463317);
}

double NNfunction_ns_chi04_cR::synapse0x2551f50() {
   return (neuron0x2531de0()*0.07618);
}

double NNfunction_ns_chi04_cR::synapse0x2551f90() {
   return (neuron0x2532120()*0.0378485);
}

double NNfunction_ns_chi04_cR::synapse0x2551fd0() {
   return (neuron0x2532460()*-0.0186513);
}

double NNfunction_ns_chi04_cR::synapse0x2552010() {
   return (neuron0x25327a0()*-0.0176613);
}

double NNfunction_ns_chi04_cR::synapse0x2551aa0() {
   return (neuron0x2532ae0()*-0.00863242);
}

double NNfunction_ns_chi04_cR::synapse0x2551ae0() {
   return (neuron0x2533040()*0.0218275);
}

double NNfunction_ns_chi04_cR::synapse0x2552160() {
   return (neuron0x2533260()*0.0133998);
}

double NNfunction_ns_chi04_cR::synapse0x25521a0() {
   return (neuron0x25335a0()*0.0139052);
}

double NNfunction_ns_chi04_cR::synapse0x25521e0() {
   return (neuron0x25338e0()*0.00959168);
}

double NNfunction_ns_chi04_cR::synapse0x2552220() {
   return (neuron0x2533c20()*0.0454471);
}

double NNfunction_ns_chi04_cR::synapse0x2552260() {
   return (neuron0x2533f60()*-0.00273152);
}

double NNfunction_ns_chi04_cR::synapse0x25522a0() {
   return (neuron0x25342a0()*-0.0832889);
}

double NNfunction_ns_chi04_cR::synapse0x2552620() {
   return (neuron0x252f6e0()*0.281092);
}

double NNfunction_ns_chi04_cR::synapse0x2552660() {
   return (neuron0x252fa20()*-0.101673);
}

double NNfunction_ns_chi04_cR::synapse0x25526a0() {
   return (neuron0x252fd60()*-0.268679);
}

double NNfunction_ns_chi04_cR::synapse0x25526e0() {
   return (neuron0x25300a0()*-0.590024);
}

double NNfunction_ns_chi04_cR::synapse0x2552720() {
   return (neuron0x25303e0()*0.170068);
}

double NNfunction_ns_chi04_cR::synapse0x2552760() {
   return (neuron0x2530720()*-1.89635);
}

double NNfunction_ns_chi04_cR::synapse0x25527a0() {
   return (neuron0x2530a60()*0.6551);
}

double NNfunction_ns_chi04_cR::synapse0x25527e0() {
   return (neuron0x2530da0()*-1.11974);
}

double NNfunction_ns_chi04_cR::synapse0x2552820() {
   return (neuron0x25310e0()*-0.361805);
}

double NNfunction_ns_chi04_cR::synapse0x2552860() {
   return (neuron0x2531420()*0.172225);
}

double NNfunction_ns_chi04_cR::synapse0x25528a0() {
   return (neuron0x2531760()*-0.267214);
}

double NNfunction_ns_chi04_cR::synapse0x25528e0() {
   return (neuron0x2531aa0()*0.0023635);
}

double NNfunction_ns_chi04_cR::synapse0x2552920() {
   return (neuron0x2531de0()*-0.197215);
}

double NNfunction_ns_chi04_cR::synapse0x2552960() {
   return (neuron0x2532120()*-0.455918);
}

double NNfunction_ns_chi04_cR::synapse0x25529a0() {
   return (neuron0x2532460()*0.500846);
}

double NNfunction_ns_chi04_cR::synapse0x25529e0() {
   return (neuron0x25327a0()*2.11835);
}

double NNfunction_ns_chi04_cR::synapse0x2552470() {
   return (neuron0x2532ae0()*0.544318);
}

double NNfunction_ns_chi04_cR::synapse0x25524b0() {
   return (neuron0x2533040()*0.038661);
}

double NNfunction_ns_chi04_cR::synapse0x2542fe0() {
   return (neuron0x2533260()*-0.213099);
}

double NNfunction_ns_chi04_cR::synapse0x2543020() {
   return (neuron0x25335a0()*-0.147845);
}

double NNfunction_ns_chi04_cR::synapse0x2543060() {
   return (neuron0x25338e0()*-0.292078);
}

double NNfunction_ns_chi04_cR::synapse0x25430a0() {
   return (neuron0x2533c20()*0.117007);
}

double NNfunction_ns_chi04_cR::synapse0x25430e0() {
   return (neuron0x2533f60()*-0.0916262);
}

double NNfunction_ns_chi04_cR::synapse0x2543120() {
   return (neuron0x25342a0()*0.873383);
}

double NNfunction_ns_chi04_cR::synapse0x25434a0() {
   return (neuron0x252f6e0()*-0.117107);
}

double NNfunction_ns_chi04_cR::synapse0x25434e0() {
   return (neuron0x252fa20()*0.826062);
}

double NNfunction_ns_chi04_cR::synapse0x2543520() {
   return (neuron0x252fd60()*0.19137);
}

double NNfunction_ns_chi04_cR::synapse0x2543560() {
   return (neuron0x25300a0()*0.918889);
}

double NNfunction_ns_chi04_cR::synapse0x25435a0() {
   return (neuron0x25303e0()*-0.947763);
}

double NNfunction_ns_chi04_cR::synapse0x25435e0() {
   return (neuron0x2530720()*0.0808102);
}

double NNfunction_ns_chi04_cR::synapse0x2543620() {
   return (neuron0x2530a60()*0.316566);
}

double NNfunction_ns_chi04_cR::synapse0x2543660() {
   return (neuron0x2530da0()*-0.369847);
}

double NNfunction_ns_chi04_cR::synapse0x25436a0() {
   return (neuron0x25310e0()*-0.386482);
}

double NNfunction_ns_chi04_cR::synapse0x25436e0() {
   return (neuron0x2531420()*-1.61628);
}

double NNfunction_ns_chi04_cR::synapse0x2543720() {
   return (neuron0x2531760()*-1.86374);
}

double NNfunction_ns_chi04_cR::synapse0x2543760() {
   return (neuron0x2531aa0()*0.575219);
}

double NNfunction_ns_chi04_cR::synapse0x25437a0() {
   return (neuron0x2531de0()*-0.0262211);
}

double NNfunction_ns_chi04_cR::synapse0x25437e0() {
   return (neuron0x2532120()*0.257166);
}

double NNfunction_ns_chi04_cR::synapse0x2543820() {
   return (neuron0x2532460()*-0.000115894);
}

double NNfunction_ns_chi04_cR::synapse0x2543860() {
   return (neuron0x25327a0()*-1.03978);
}

double NNfunction_ns_chi04_cR::synapse0x25432f0() {
   return (neuron0x2532ae0()*1.4275);
}

double NNfunction_ns_chi04_cR::synapse0x2543330() {
   return (neuron0x2533040()*-1.19628);
}

double NNfunction_ns_chi04_cR::synapse0x25439b0() {
   return (neuron0x2533260()*-0.148077);
}

double NNfunction_ns_chi04_cR::synapse0x25439f0() {
   return (neuron0x25335a0()*0.609798);
}

double NNfunction_ns_chi04_cR::synapse0x2543a30() {
   return (neuron0x25338e0()*0.911689);
}

double NNfunction_ns_chi04_cR::synapse0x2543a70() {
   return (neuron0x2533c20()*-0.545795);
}

double NNfunction_ns_chi04_cR::synapse0x2543ab0() {
   return (neuron0x2533f60()*-0.609969);
}

double NNfunction_ns_chi04_cR::synapse0x2543af0() {
   return (neuron0x25342a0()*0.333663);
}

double NNfunction_ns_chi04_cR::synapse0x2543e70() {
   return (neuron0x252f6e0()*-0.016151);
}

double NNfunction_ns_chi04_cR::synapse0x2543eb0() {
   return (neuron0x252fa20()*1.24402);
}

double NNfunction_ns_chi04_cR::synapse0x2543ef0() {
   return (neuron0x252fd60()*-0.0392664);
}

double NNfunction_ns_chi04_cR::synapse0x2543f30() {
   return (neuron0x25300a0()*0.00152696);
}

double NNfunction_ns_chi04_cR::synapse0x2543f70() {
   return (neuron0x25303e0()*-0.0103555);
}

double NNfunction_ns_chi04_cR::synapse0x2543fb0() {
   return (neuron0x2530720()*-0.0054729);
}

double NNfunction_ns_chi04_cR::synapse0x2543ff0() {
   return (neuron0x2530a60()*-0.0100278);
}

double NNfunction_ns_chi04_cR::synapse0x2544030() {
   return (neuron0x2530da0()*0.0121705);
}

double NNfunction_ns_chi04_cR::synapse0x2544070() {
   return (neuron0x25310e0()*0.00052977);
}

double NNfunction_ns_chi04_cR::synapse0x25440b0() {
   return (neuron0x2531420()*-0.00134586);
}

double NNfunction_ns_chi04_cR::synapse0x25440f0() {
   return (neuron0x2531760()*0.0026203);
}

double NNfunction_ns_chi04_cR::synapse0x2544130() {
   return (neuron0x2531aa0()*0.0193831);
}

double NNfunction_ns_chi04_cR::synapse0x2544170() {
   return (neuron0x2531de0()*-0.0198125);
}

double NNfunction_ns_chi04_cR::synapse0x25441b0() {
   return (neuron0x2532120()*0.0163585);
}

double NNfunction_ns_chi04_cR::synapse0x25441f0() {
   return (neuron0x2532460()*0.00972257);
}

double NNfunction_ns_chi04_cR::synapse0x2544230() {
   return (neuron0x25327a0()*-0.177161);
}

double NNfunction_ns_chi04_cR::synapse0x2543cc0() {
   return (neuron0x2532ae0()*-0.0021484);
}

double NNfunction_ns_chi04_cR::synapse0x2543d00() {
   return (neuron0x2533040()*-0.0189605);
}

double NNfunction_ns_chi04_cR::synapse0x2544380() {
   return (neuron0x2533260()*0.00334601);
}

double NNfunction_ns_chi04_cR::synapse0x25443c0() {
   return (neuron0x25335a0()*0.029241);
}

double NNfunction_ns_chi04_cR::synapse0x2544400() {
   return (neuron0x25338e0()*-0.0105149);
}

double NNfunction_ns_chi04_cR::synapse0x2544440() {
   return (neuron0x2533c20()*0.000901251);
}

double NNfunction_ns_chi04_cR::synapse0x2544480() {
   return (neuron0x2533f60()*-0.0039443);
}

double NNfunction_ns_chi04_cR::synapse0x25444c0() {
   return (neuron0x25342a0()*-0.66149);
}

double NNfunction_ns_chi04_cR::synapse0x2544840() {
   return (neuron0x252f6e0()*0.0790616);
}

double NNfunction_ns_chi04_cR::synapse0x2544880() {
   return (neuron0x252fa20()*0.892073);
}

double NNfunction_ns_chi04_cR::synapse0x25448c0() {
   return (neuron0x252fd60()*0.45396);
}

double NNfunction_ns_chi04_cR::synapse0x2544900() {
   return (neuron0x25300a0()*-0.0599393);
}

double NNfunction_ns_chi04_cR::synapse0x2544940() {
   return (neuron0x25303e0()*0.00478677);
}

double NNfunction_ns_chi04_cR::synapse0x2544980() {
   return (neuron0x2530720()*-0.0284621);
}

double NNfunction_ns_chi04_cR::synapse0x25449c0() {
   return (neuron0x2530a60()*0.0812286);
}

double NNfunction_ns_chi04_cR::synapse0x2544a00() {
   return (neuron0x2530da0()*0.085432);
}

double NNfunction_ns_chi04_cR::synapse0x2544a40() {
   return (neuron0x25310e0()*0.00240794);
}

double NNfunction_ns_chi04_cR::synapse0x2544a80() {
   return (neuron0x2531420()*-0.0501558);
}

double NNfunction_ns_chi04_cR::synapse0x2544ac0() {
   return (neuron0x2531760()*-0.0628989);
}

double NNfunction_ns_chi04_cR::synapse0x2544b00() {
   return (neuron0x2531aa0()*-0.0707652);
}

double NNfunction_ns_chi04_cR::synapse0x2544b40() {
   return (neuron0x2531de0()*-0.0508931);
}

double NNfunction_ns_chi04_cR::synapse0x2544b80() {
   return (neuron0x2532120()*0.0761953);
}

double NNfunction_ns_chi04_cR::synapse0x2544bc0() {
   return (neuron0x2532460()*-0.085909);
}

double NNfunction_ns_chi04_cR::synapse0x2544c00() {
   return (neuron0x25327a0()*0.99175);
}

double NNfunction_ns_chi04_cR::synapse0x2544690() {
   return (neuron0x2532ae0()*-0.0626202);
}

double NNfunction_ns_chi04_cR::synapse0x25446d0() {
   return (neuron0x2533040()*0.0424238);
}

double NNfunction_ns_chi04_cR::synapse0x2544d50() {
   return (neuron0x2533260()*0.0238828);
}

double NNfunction_ns_chi04_cR::synapse0x2544d90() {
   return (neuron0x25335a0()*-0.00749319);
}

double NNfunction_ns_chi04_cR::synapse0x2544dd0() {
   return (neuron0x25338e0()*0.113978);
}

double NNfunction_ns_chi04_cR::synapse0x2544e10() {
   return (neuron0x2533c20()*0.0257033);
}

double NNfunction_ns_chi04_cR::synapse0x2544e50() {
   return (neuron0x2533f60()*-0.0655298);
}

double NNfunction_ns_chi04_cR::synapse0x2544e90() {
   return (neuron0x25342a0()*-0.122177);
}

double NNfunction_ns_chi04_cR::synapse0x2556d60() {
   return (neuron0x252f6e0()*-0.88474);
}

double NNfunction_ns_chi04_cR::synapse0x2556da0() {
   return (neuron0x252fa20()*-0.242135);
}

double NNfunction_ns_chi04_cR::synapse0x2556de0() {
   return (neuron0x252fd60()*0.717259);
}

double NNfunction_ns_chi04_cR::synapse0x2556e20() {
   return (neuron0x25300a0()*0.599981);
}

double NNfunction_ns_chi04_cR::synapse0x2556e60() {
   return (neuron0x25303e0()*0.33693);
}

double NNfunction_ns_chi04_cR::synapse0x2556ea0() {
   return (neuron0x2530720()*-0.450645);
}

double NNfunction_ns_chi04_cR::synapse0x2556ee0() {
   return (neuron0x2530a60()*-0.896069);
}

double NNfunction_ns_chi04_cR::synapse0x2556f20() {
   return (neuron0x2530da0()*-0.446971);
}

double NNfunction_ns_chi04_cR::synapse0x2556f60() {
   return (neuron0x25310e0()*-0.141219);
}

double NNfunction_ns_chi04_cR::synapse0x2556fa0() {
   return (neuron0x2531420()*-1.01858);
}

double NNfunction_ns_chi04_cR::synapse0x2556fe0() {
   return (neuron0x2531760()*1.41113);
}

double NNfunction_ns_chi04_cR::synapse0x2557020() {
   return (neuron0x2531aa0()*-0.596699);
}

double NNfunction_ns_chi04_cR::synapse0x2557060() {
   return (neuron0x2531de0()*-0.108649);
}

double NNfunction_ns_chi04_cR::synapse0x25570a0() {
   return (neuron0x2532120()*-0.84202);
}

double NNfunction_ns_chi04_cR::synapse0x25570e0() {
   return (neuron0x2532460()*-0.424134);
}

double NNfunction_ns_chi04_cR::synapse0x2557120() {
   return (neuron0x25327a0()*0.201844);
}

double NNfunction_ns_chi04_cR::synapse0x2544ed0() {
   return (neuron0x2532ae0()*0.0602737);
}

double NNfunction_ns_chi04_cR::synapse0x2544f10() {
   return (neuron0x2533040()*1.06794);
}

double NNfunction_ns_chi04_cR::synapse0x2557270() {
   return (neuron0x2533260()*-0.489479);
}

double NNfunction_ns_chi04_cR::synapse0x25572b0() {
   return (neuron0x25335a0()*-0.535205);
}

double NNfunction_ns_chi04_cR::synapse0x25572f0() {
   return (neuron0x25338e0()*-0.985757);
}

double NNfunction_ns_chi04_cR::synapse0x2557330() {
   return (neuron0x2533c20()*-1.52186);
}

double NNfunction_ns_chi04_cR::synapse0x2557370() {
   return (neuron0x2533f60()*-1.15983);
}

double NNfunction_ns_chi04_cR::synapse0x25573b0() {
   return (neuron0x25342a0()*-0.623134);
}

double NNfunction_ns_chi04_cR::synapse0x2557730() {
   return (neuron0x252f6e0()*-0.0146192);
}

double NNfunction_ns_chi04_cR::synapse0x2557770() {
   return (neuron0x252fa20()*0.030371);
}

double NNfunction_ns_chi04_cR::synapse0x25577b0() {
   return (neuron0x252fd60()*0.0345937);
}

double NNfunction_ns_chi04_cR::synapse0x25577f0() {
   return (neuron0x25300a0()*0.862369);
}

double NNfunction_ns_chi04_cR::synapse0x2557830() {
   return (neuron0x25303e0()*-0.0131979);
}

double NNfunction_ns_chi04_cR::synapse0x2557870() {
   return (neuron0x2530720()*0.0100036);
}

double NNfunction_ns_chi04_cR::synapse0x25578b0() {
   return (neuron0x2530a60()*-0.00271989);
}

double NNfunction_ns_chi04_cR::synapse0x25578f0() {
   return (neuron0x2530da0()*0.00222514);
}

double NNfunction_ns_chi04_cR::synapse0x2557930() {
   return (neuron0x25310e0()*0.00709024);
}

double NNfunction_ns_chi04_cR::synapse0x2557970() {
   return (neuron0x2531420()*-0.0168059);
}

double NNfunction_ns_chi04_cR::synapse0x25579b0() {
   return (neuron0x2531760()*0.00839575);
}

double NNfunction_ns_chi04_cR::synapse0x25579f0() {
   return (neuron0x2531aa0()*-0.00196803);
}

double NNfunction_ns_chi04_cR::synapse0x2557a30() {
   return (neuron0x2531de0()*-0.0230012);
}

double NNfunction_ns_chi04_cR::synapse0x2557a70() {
   return (neuron0x2532120()*-0.00220086);
}

double NNfunction_ns_chi04_cR::synapse0x2557ab0() {
   return (neuron0x2532460()*0.010871);
}

double NNfunction_ns_chi04_cR::synapse0x2557af0() {
   return (neuron0x25327a0()*-0.328694);
}

double NNfunction_ns_chi04_cR::synapse0x2557580() {
   return (neuron0x2532ae0()*-0.0167375);
}

double NNfunction_ns_chi04_cR::synapse0x25575c0() {
   return (neuron0x2533040()*-0.025891);
}

double NNfunction_ns_chi04_cR::synapse0x2557c40() {
   return (neuron0x2533260()*0.00460646);
}

double NNfunction_ns_chi04_cR::synapse0x2557c80() {
   return (neuron0x25335a0()*0.0272824);
}

double NNfunction_ns_chi04_cR::synapse0x2557cc0() {
   return (neuron0x25338e0()*-0.0151274);
}

double NNfunction_ns_chi04_cR::synapse0x2557d00() {
   return (neuron0x2533c20()*-0.00561684);
}

double NNfunction_ns_chi04_cR::synapse0x2557d40() {
   return (neuron0x2533f60()*-0.0167451);
}

double NNfunction_ns_chi04_cR::synapse0x2557d80() {
   return (neuron0x25342a0()*-0.0554611);
}

double NNfunction_ns_chi04_cR::synapse0x2558100() {
   return (neuron0x252f6e0()*0.741278);
}

double NNfunction_ns_chi04_cR::synapse0x2558140() {
   return (neuron0x252fa20()*3.39145);
}

double NNfunction_ns_chi04_cR::synapse0x2558180() {
   return (neuron0x252fd60()*0.0827655);
}

double NNfunction_ns_chi04_cR::synapse0x25581c0() {
   return (neuron0x25300a0()*-1.0806);
}

double NNfunction_ns_chi04_cR::synapse0x2558200() {
   return (neuron0x25303e0()*0.998504);
}

double NNfunction_ns_chi04_cR::synapse0x2558240() {
   return (neuron0x2530720()*0.599178);
}

double NNfunction_ns_chi04_cR::synapse0x2558280() {
   return (neuron0x2530a60()*0.0744793);
}

double NNfunction_ns_chi04_cR::synapse0x25582c0() {
   return (neuron0x2530da0()*1.62129);
}

double NNfunction_ns_chi04_cR::synapse0x2558300() {
   return (neuron0x25310e0()*0.298446);
}

double NNfunction_ns_chi04_cR::synapse0x2558340() {
   return (neuron0x2531420()*-0.430751);
}

double NNfunction_ns_chi04_cR::synapse0x2558380() {
   return (neuron0x2531760()*0.82334);
}

double NNfunction_ns_chi04_cR::synapse0x25583c0() {
   return (neuron0x2531aa0()*-0.0515078);
}

double NNfunction_ns_chi04_cR::synapse0x2558400() {
   return (neuron0x2531de0()*-0.725966);
}

double NNfunction_ns_chi04_cR::synapse0x2558440() {
   return (neuron0x2532120()*0.484239);
}

double NNfunction_ns_chi04_cR::synapse0x2558480() {
   return (neuron0x2532460()*1.29434);
}

double NNfunction_ns_chi04_cR::synapse0x25584c0() {
   return (neuron0x25327a0()*-0.123998);
}

double NNfunction_ns_chi04_cR::synapse0x2557f50() {
   return (neuron0x2532ae0()*0.519451);
}

double NNfunction_ns_chi04_cR::synapse0x2557f90() {
   return (neuron0x2533040()*0.382112);
}

double NNfunction_ns_chi04_cR::synapse0x2558610() {
   return (neuron0x2533260()*-0.748437);
}

double NNfunction_ns_chi04_cR::synapse0x2558650() {
   return (neuron0x25335a0()*-1.56548);
}

double NNfunction_ns_chi04_cR::synapse0x2558690() {
   return (neuron0x25338e0()*-0.513744);
}

double NNfunction_ns_chi04_cR::synapse0x25586d0() {
   return (neuron0x2533c20()*0.464504);
}

double NNfunction_ns_chi04_cR::synapse0x2558710() {
   return (neuron0x2533f60()*-0.107329);
}

double NNfunction_ns_chi04_cR::synapse0x2558750() {
   return (neuron0x25342a0()*0.685366);
}

double NNfunction_ns_chi04_cR::synapse0x2558ad0() {
   return (neuron0x252f6e0()*-0.377278);
}

double NNfunction_ns_chi04_cR::synapse0x2558b10() {
   return (neuron0x252fa20()*1.04699);
}

double NNfunction_ns_chi04_cR::synapse0x2558b50() {
   return (neuron0x252fd60()*0.496067);
}

double NNfunction_ns_chi04_cR::synapse0x2558b90() {
   return (neuron0x25300a0()*0.706164);
}

double NNfunction_ns_chi04_cR::synapse0x2558bd0() {
   return (neuron0x25303e0()*-0.0619827);
}

double NNfunction_ns_chi04_cR::synapse0x2558c10() {
   return (neuron0x2530720()*0.521204);
}

double NNfunction_ns_chi04_cR::synapse0x2558c50() {
   return (neuron0x2530a60()*-0.633713);
}

double NNfunction_ns_chi04_cR::synapse0x2558c90() {
   return (neuron0x2530da0()*-2.1496);
}

double NNfunction_ns_chi04_cR::synapse0x2558cd0() {
   return (neuron0x25310e0()*-0.315351);
}

double NNfunction_ns_chi04_cR::synapse0x2558d10() {
   return (neuron0x2531420()*0.0567614);
}

double NNfunction_ns_chi04_cR::synapse0x2558d50() {
   return (neuron0x2531760()*-0.176799);
}

double NNfunction_ns_chi04_cR::synapse0x2558d90() {
   return (neuron0x2531aa0()*-0.285455);
}

double NNfunction_ns_chi04_cR::synapse0x2558dd0() {
   return (neuron0x2531de0()*-0.209225);
}

double NNfunction_ns_chi04_cR::synapse0x2558e10() {
   return (neuron0x2532120()*0.662848);
}

double NNfunction_ns_chi04_cR::synapse0x2558e50() {
   return (neuron0x2532460()*-1.95872);
}

double NNfunction_ns_chi04_cR::synapse0x2558e90() {
   return (neuron0x25327a0()*1.20742);
}

double NNfunction_ns_chi04_cR::synapse0x2558920() {
   return (neuron0x2532ae0()*-1.403);
}

double NNfunction_ns_chi04_cR::synapse0x2558960() {
   return (neuron0x2533040()*-0.0588782);
}

double NNfunction_ns_chi04_cR::synapse0x2558fe0() {
   return (neuron0x2533260()*-0.0138015);
}

double NNfunction_ns_chi04_cR::synapse0x2559020() {
   return (neuron0x25335a0()*-0.256878);
}

double NNfunction_ns_chi04_cR::synapse0x2559060() {
   return (neuron0x25338e0()*0.255341);
}

double NNfunction_ns_chi04_cR::synapse0x25590a0() {
   return (neuron0x2533c20()*0.266608);
}

double NNfunction_ns_chi04_cR::synapse0x25590e0() {
   return (neuron0x2533f60()*0.467021);
}

double NNfunction_ns_chi04_cR::synapse0x2559120() {
   return (neuron0x25342a0()*-0.263377);
}

double NNfunction_ns_chi04_cR::synapse0x22f9030() {
   return (neuron0x2534710()*-0.00970105);
}

double NNfunction_ns_chi04_cR::synapse0x22f9070() {
   return (neuron0x2535060()*-0.0374298);
}

double NNfunction_ns_chi04_cR::synapse0x2536bd0() {
   return (neuron0x2535b40()*0.0116509);
}

double NNfunction_ns_chi04_cR::synapse0x2536c10() {
   return (neuron0x25355e0()*-1.53574);
}

double NNfunction_ns_chi04_cR::synapse0x25375a0() {
   return (neuron0x2536920()*-0.0193645);
}

double NNfunction_ns_chi04_cR::synapse0x25375e0() {
   return (neuron0x25372f0()*-0.00530273);
}

double NNfunction_ns_chi04_cR::synapse0x2538370() {
   return (neuron0x25380c0()*0.0157482);
}

double NNfunction_ns_chi04_cR::synapse0x25383b0() {
   return (neuron0x2538a90()*-0.00435077);
}

double NNfunction_ns_chi04_cR::synapse0x2538d40() {
   return (neuron0x2539460()*-0.117823);
}

double NNfunction_ns_chi04_cR::synapse0x2538d80() {
   return (neuron0x2539f40()*0.499842);
}

double NNfunction_ns_chi04_cR::synapse0x2539710() {
   return (neuron0x253a910()*1.71183);
}

double NNfunction_ns_chi04_cR::synapse0x2539750() {
   return (neuron0x25379f0()*2.47091);
}

double NNfunction_ns_chi04_cR::synapse0x253a1f0() {
   return (neuron0x253c4c0()*2.85485);
}

double NNfunction_ns_chi04_cR::synapse0x253a230() {
   return (neuron0x253ce90()*-0.0701549);
}

double NNfunction_ns_chi04_cR::synapse0x253abc0() {
   return (neuron0x253d860()*-0.00841083);
}

double NNfunction_ns_chi04_cR::synapse0x253ac00() {
   return (neuron0x253e230()*-0.078601);
}

double NNfunction_ns_chi04_cR::synapse0x2537ca0() {
   return (neuron0x2540040()*-0.431056);
}

double NNfunction_ns_chi04_cR::synapse0x2537ce0() {
   return (neuron0x2540320()*1.34589);
}

double NNfunction_ns_chi04_cR::synapse0x253c770() {
   return (neuron0x2540cf0()*-2.52704);
}

double NNfunction_ns_chi04_cR::synapse0x253c7b0() {
   return (neuron0x25416c0()*0.0152249);
}

double NNfunction_ns_chi04_cR::synapse0x253d140() {
   return (neuron0x2542090()*0.356806);
}

double NNfunction_ns_chi04_cR::synapse0x253d180() {
   return (neuron0x2542a60()*-0.00987553);
}

double NNfunction_ns_chi04_cR::synapse0x253db10() {
   return (neuron0x253b5b0()*-0.438173);
}

double NNfunction_ns_chi04_cR::synapse0x253db50() {
   return (neuron0x253bf80()*2.07427);
}

double NNfunction_ns_chi04_cR::synapse0x253e4e0() {
   return (neuron0x25457f0()*0.0116159);
}

double NNfunction_ns_chi04_cR::synapse0x253e520() {
   return (neuron0x25461c0()*0.0282393);
}

double NNfunction_ns_chi04_cR::synapse0x2532680() {
   return (neuron0x2546b90()*-0.3083);
}

double NNfunction_ns_chi04_cR::synapse0x25326c0() {
   return (neuron0x2547560()*1.51332);
}

double NNfunction_ns_chi04_cR::synapse0x25405d0() {
   return (neuron0x2547f30()*0.0310195);
}

double NNfunction_ns_chi04_cR::synapse0x2540610() {
   return (neuron0x2548900()*-0.105063);
}

double NNfunction_ns_chi04_cR::synapse0x2540fa0() {
   return (neuron0x25492d0()*0.097724);
}

double NNfunction_ns_chi04_cR::synapse0x2540fe0() {
   return (neuron0x2549ca0()*0.390684);
}

double NNfunction_ns_chi04_cR::synapse0x2541970() {
   return (neuron0x253fd30()*-2.6326);
}

double NNfunction_ns_chi04_cR::synapse0x25419b0() {
   return (neuron0x254c880()*-1.74011);
}

double NNfunction_ns_chi04_cR::synapse0x2542340() {
   return (neuron0x254d250()*-0.0326012);
}

double NNfunction_ns_chi04_cR::synapse0x2542380() {
   return (neuron0x254dc20()*7.16679);
}

double NNfunction_ns_chi04_cR::synapse0x2542d10() {
   return (neuron0x254e5f0()*-0.0202879);
}

double NNfunction_ns_chi04_cR::synapse0x2542d50() {
   return (neuron0x254efc0()*-0.00286648);
}

double NNfunction_ns_chi04_cR::synapse0x253b860() {
   return (neuron0x254f990()*-0.672172);
}

double NNfunction_ns_chi04_cR::synapse0x253b8a0() {
   return (neuron0x2550360()*0.0246294);
}

double NNfunction_ns_chi04_cR::synapse0x2545110() {
   return (neuron0x2550d30()*0.405253);
}

double NNfunction_ns_chi04_cR::synapse0x2545150() {
   return (neuron0x2551910()*3.78285);
}

double NNfunction_ns_chi04_cR::synapse0x2545aa0() {
   return (neuron0x25522e0()*-0.0093263);
}

double NNfunction_ns_chi04_cR::synapse0x2545ae0() {
   return (neuron0x2543160()*-0.0145291);
}

double NNfunction_ns_chi04_cR::synapse0x2546470() {
   return (neuron0x2543b30()*-2.98677);
}

double NNfunction_ns_chi04_cR::synapse0x25464b0() {
   return (neuron0x2544500()*-0.674327);
}

double NNfunction_ns_chi04_cR::synapse0x2546e40() {
   return (neuron0x2556b40()*-0.0148934);
}

double NNfunction_ns_chi04_cR::synapse0x2546e80() {
   return (neuron0x25573f0()*0.385482);
}

double NNfunction_ns_chi04_cR::synapse0x2547810() {
   return (neuron0x2557dc0()*-0.0372229);
}

double NNfunction_ns_chi04_cR::synapse0x2547850() {
   return (neuron0x2558790()*-0.0374866);
}

double NNfunction_ns_chi04_cR::synapse0x2549f50() {
   return (neuron0x2534710()*1.26851);
}

double NNfunction_ns_chi04_cR::synapse0x2549f90() {
   return (neuron0x2535060()*1.73701);
}

double NNfunction_ns_chi04_cR::synapse0x253f510() {
   return (neuron0x2535b40()*-1.12771);
}

double NNfunction_ns_chi04_cR::synapse0x253f550() {
   return (neuron0x25355e0()*1.08089);
}

double NNfunction_ns_chi04_cR::synapse0x254cb30() {
   return (neuron0x2536920()*0.74966);
}

double NNfunction_ns_chi04_cR::synapse0x254cb70() {
   return (neuron0x25372f0()*-0.871948);
}

double NNfunction_ns_chi04_cR::synapse0x254d500() {
   return (neuron0x25380c0()*-0.836743);
}

double NNfunction_ns_chi04_cR::synapse0x254d540() {
   return (neuron0x2538a90()*0.936619);
}

double NNfunction_ns_chi04_cR::synapse0x254ded0() {
   return (neuron0x2539460()*-1.49285);
}

double NNfunction_ns_chi04_cR::synapse0x254df10() {
   return (neuron0x2539f40()*1.41558);
}

double NNfunction_ns_chi04_cR::synapse0x254e8a0() {
   return (neuron0x253a910()*2.76084);
}

double NNfunction_ns_chi04_cR::synapse0x254e8e0() {
   return (neuron0x25379f0()*-1.35505);
}

double NNfunction_ns_chi04_cR::synapse0x254f270() {
   return (neuron0x253c4c0()*2.77371);
}

double NNfunction_ns_chi04_cR::synapse0x254f2b0() {
   return (neuron0x253ce90()*1.30947);
}

double NNfunction_ns_chi04_cR::synapse0x254fc40() {
   return (neuron0x253d860()*-0.885721);
}

double NNfunction_ns_chi04_cR::synapse0x254fc80() {
   return (neuron0x253e230()*-1.86837);
}

double NNfunction_ns_chi04_cR::synapse0x2550610() {
   return (neuron0x2540040()*1.45813);
}

double NNfunction_ns_chi04_cR::synapse0x2550650() {
   return (neuron0x2540320()*0.628755);
}

double NNfunction_ns_chi04_cR::synapse0x2550fe0() {
   return (neuron0x2540cf0()*-2.18148);
}

double NNfunction_ns_chi04_cR::synapse0x2551020() {
   return (neuron0x25416c0()*-1.1044);
}

double NNfunction_ns_chi04_cR::synapse0x2551bc0() {
   return (neuron0x2542090()*1.07083);
}

double NNfunction_ns_chi04_cR::synapse0x2551c00() {
   return (neuron0x2542a60()*-1.18545);
}

double NNfunction_ns_chi04_cR::synapse0x2552590() {
   return (neuron0x253b5b0()*-1.3896);
}

double NNfunction_ns_chi04_cR::synapse0x25525d0() {
   return (neuron0x253bf80()*-1.03318);
}

double NNfunction_ns_chi04_cR::synapse0x2543410() {
   return (neuron0x25457f0()*-0.925945);
}

double NNfunction_ns_chi04_cR::synapse0x2543450() {
   return (neuron0x25461c0()*1.39718);
}

double NNfunction_ns_chi04_cR::synapse0x2543de0() {
   return (neuron0x2546b90()*1.98135);
}

double NNfunction_ns_chi04_cR::synapse0x2543e20() {
   return (neuron0x2547560()*-1.02119);
}

double NNfunction_ns_chi04_cR::synapse0x25447b0() {
   return (neuron0x2547f30()*1.109);
}

double NNfunction_ns_chi04_cR::synapse0x25447f0() {
   return (neuron0x2548900()*1.91914);
}

double NNfunction_ns_chi04_cR::synapse0x2556cd0() {
   return (neuron0x25492d0()*-0.515112);
}

double NNfunction_ns_chi04_cR::synapse0x2556d10() {
   return (neuron0x2549ca0()*-3.29131);
}

double NNfunction_ns_chi04_cR::synapse0x25576a0() {
   return (neuron0x253fd30()*-2.27221);
}

double NNfunction_ns_chi04_cR::synapse0x25576e0() {
   return (neuron0x254c880()*3.33898);
}

double NNfunction_ns_chi04_cR::synapse0x2558070() {
   return (neuron0x254d250()*-0.897201);
}

double NNfunction_ns_chi04_cR::synapse0x25580b0() {
   return (neuron0x254dc20()*-4.71999);
}

double NNfunction_ns_chi04_cR::synapse0x2558a40() {
   return (neuron0x254e5f0()*0.873523);
}

double NNfunction_ns_chi04_cR::synapse0x2558a80() {
   return (neuron0x254efc0()*-1.05255);
}

double NNfunction_ns_chi04_cR::synapse0x2534930() {
   return (neuron0x254f990()*0.216545);
}

double NNfunction_ns_chi04_cR::synapse0x2534970() {
   return (neuron0x2550360()*1.28323);
}

double NNfunction_ns_chi04_cR::synapse0x25481e0() {
   return (neuron0x2550d30()*2.70089);
}

double NNfunction_ns_chi04_cR::synapse0x2548220() {
   return (neuron0x2551910()*-3.50844);
}

double NNfunction_ns_chi04_cR::synapse0x2559160() {
   return (neuron0x25522e0()*0.944423);
}

double NNfunction_ns_chi04_cR::synapse0x25591a0() {
   return (neuron0x2543160()*-0.687514);
}

double NNfunction_ns_chi04_cR::synapse0x25591e0() {
   return (neuron0x2543b30()*-0.75509);
}

double NNfunction_ns_chi04_cR::synapse0x2559220() {
   return (neuron0x2544500()*-0.442868);
}

double NNfunction_ns_chi04_cR::synapse0x25600d0() {
   return (neuron0x2556b40()*-0.797668);
}

double NNfunction_ns_chi04_cR::synapse0x2560110() {
   return (neuron0x25573f0()*2.2457);
}

double NNfunction_ns_chi04_cR::synapse0x2560150() {
   return (neuron0x2557dc0()*-1.10871);
}

double NNfunction_ns_chi04_cR::synapse0x2560190() {
   return (neuron0x2558790()*0.320504);
}

double NNfunction_ns_chi04_cR::synapse0x2560510() {
   return (neuron0x2534710()*0.0720914);
}

double NNfunction_ns_chi04_cR::synapse0x2560550() {
   return (neuron0x2535060()*-0.102002);
}

double NNfunction_ns_chi04_cR::synapse0x2560590() {
   return (neuron0x2535b40()*0.179107);
}

double NNfunction_ns_chi04_cR::synapse0x25605d0() {
   return (neuron0x25355e0()*1.21697);
}

double NNfunction_ns_chi04_cR::synapse0x2560610() {
   return (neuron0x2536920()*0.228868);
}

double NNfunction_ns_chi04_cR::synapse0x2560650() {
   return (neuron0x25372f0()*-0.0266783);
}

double NNfunction_ns_chi04_cR::synapse0x2560690() {
   return (neuron0x25380c0()*0.136893);
}

double NNfunction_ns_chi04_cR::synapse0x25606d0() {
   return (neuron0x2538a90()*-0.0550651);
}

double NNfunction_ns_chi04_cR::synapse0x2560710() {
   return (neuron0x2539460()*0.0709051);
}

double NNfunction_ns_chi04_cR::synapse0x2560750() {
   return (neuron0x2539f40()*-0.0799049);
}

double NNfunction_ns_chi04_cR::synapse0x2560790() {
   return (neuron0x253a910()*-1.48503);
}

double NNfunction_ns_chi04_cR::synapse0x25607d0() {
   return (neuron0x25379f0()*0.601278);
}

double NNfunction_ns_chi04_cR::synapse0x2560810() {
   return (neuron0x253c4c0()*-0.89407);
}

double NNfunction_ns_chi04_cR::synapse0x2560850() {
   return (neuron0x253ce90()*0.278201);
}

double NNfunction_ns_chi04_cR::synapse0x2560890() {
   return (neuron0x253d860()*0.16793);
}

double NNfunction_ns_chi04_cR::synapse0x25608d0() {
   return (neuron0x253e230()*0.395115);
}

double NNfunction_ns_chi04_cR::synapse0x2560360() {
   return (neuron0x2540040()*2.60944);
}

double NNfunction_ns_chi04_cR::synapse0x25603a0() {
   return (neuron0x2540320()*-1.00735);
}

double NNfunction_ns_chi04_cR::synapse0x2560a20() {
   return (neuron0x2540cf0()*-0.469052);
}

double NNfunction_ns_chi04_cR::synapse0x2560a60() {
   return (neuron0x25416c0()*-0.291698);
}

double NNfunction_ns_chi04_cR::synapse0x2560aa0() {
   return (neuron0x2542090()*0.61316);
}

double NNfunction_ns_chi04_cR::synapse0x2560ae0() {
   return (neuron0x2542a60()*-0.368017);
}

double NNfunction_ns_chi04_cR::synapse0x2560b20() {
   return (neuron0x253b5b0()*-0.825687);
}

double NNfunction_ns_chi04_cR::synapse0x2560b60() {
   return (neuron0x253bf80()*0.133894);
}

double NNfunction_ns_chi04_cR::synapse0x2560ba0() {
   return (neuron0x25457f0()*-0.156716);
}

double NNfunction_ns_chi04_cR::synapse0x2560be0() {
   return (neuron0x25461c0()*-0.407909);
}

double NNfunction_ns_chi04_cR::synapse0x2560c20() {
   return (neuron0x2546b90()*0.634319);
}

double NNfunction_ns_chi04_cR::synapse0x2560c60() {
   return (neuron0x2547560()*-1.39464);
}

double NNfunction_ns_chi04_cR::synapse0x2560ca0() {
   return (neuron0x2547f30()*-0.0462019);
}

double NNfunction_ns_chi04_cR::synapse0x2560ce0() {
   return (neuron0x2548900()*0.716481);
}

double NNfunction_ns_chi04_cR::synapse0x2560d20() {
   return (neuron0x25492d0()*-0.572852);
}

double NNfunction_ns_chi04_cR::synapse0x2560d60() {
   return (neuron0x2549ca0()*-1.67799);
}

double NNfunction_ns_chi04_cR::synapse0x2560910() {
   return (neuron0x253fd30()*1.88556);
}

double NNfunction_ns_chi04_cR::synapse0x2560950() {
   return (neuron0x254c880()*0.085658);
}

double NNfunction_ns_chi04_cR::synapse0x2560990() {
   return (neuron0x254d250()*-0.448218);
}

double NNfunction_ns_chi04_cR::synapse0x25609d0() {
   return (neuron0x254dc20()*3.46201);
}

double NNfunction_ns_chi04_cR::synapse0x2560fb0() {
   return (neuron0x254e5f0()*0.547208);
}

double NNfunction_ns_chi04_cR::synapse0x2560ff0() {
   return (neuron0x254efc0()*-0.352735);
}

double NNfunction_ns_chi04_cR::synapse0x2561030() {
   return (neuron0x254f990()*2.39409);
}

double NNfunction_ns_chi04_cR::synapse0x2561070() {
   return (neuron0x2550360()*0.223578);
}

double NNfunction_ns_chi04_cR::synapse0x25610b0() {
   return (neuron0x2550d30()*-2.17698);
}

double NNfunction_ns_chi04_cR::synapse0x25610f0() {
   return (neuron0x2551910()*0.793142);
}

double NNfunction_ns_chi04_cR::synapse0x2561130() {
   return (neuron0x25522e0()*-0.021341);
}

double NNfunction_ns_chi04_cR::synapse0x2561170() {
   return (neuron0x2543160()*0.242565);
}

double NNfunction_ns_chi04_cR::synapse0x25611b0() {
   return (neuron0x2543b30()*0.575685);
}

double NNfunction_ns_chi04_cR::synapse0x25611f0() {
   return (neuron0x2544500()*0.618493);
}

double NNfunction_ns_chi04_cR::synapse0x2561230() {
   return (neuron0x2556b40()*0.300671);
}

double NNfunction_ns_chi04_cR::synapse0x2561270() {
   return (neuron0x25573f0()*0.0422232);
}

double NNfunction_ns_chi04_cR::synapse0x25612b0() {
   return (neuron0x2557dc0()*-0.343029);
}

double NNfunction_ns_chi04_cR::synapse0x25612f0() {
   return (neuron0x2558790()*-0.0731513);
}

double NNfunction_ns_chi04_cR::synapse0x2561670() {
   return (neuron0x2534710()*0.668136);
}

double NNfunction_ns_chi04_cR::synapse0x25616b0() {
   return (neuron0x2535060()*0.211269);
}

double NNfunction_ns_chi04_cR::synapse0x25616f0() {
   return (neuron0x2535b40()*0.22764);
}

double NNfunction_ns_chi04_cR::synapse0x2561730() {
   return (neuron0x25355e0()*0.258474);
}

double NNfunction_ns_chi04_cR::synapse0x2561770() {
   return (neuron0x2536920()*1.0336);
}

double NNfunction_ns_chi04_cR::synapse0x25617b0() {
   return (neuron0x25372f0()*-0.116702);
}

double NNfunction_ns_chi04_cR::synapse0x25617f0() {
   return (neuron0x25380c0()*0.111292);
}

double NNfunction_ns_chi04_cR::synapse0x2561830() {
   return (neuron0x2538a90()*0.765723);
}

double NNfunction_ns_chi04_cR::synapse0x2561870() {
   return (neuron0x2539460()*0.156607);
}

double NNfunction_ns_chi04_cR::synapse0x25618b0() {
   return (neuron0x2539f40()*-0.00215721);
}

double NNfunction_ns_chi04_cR::synapse0x25618f0() {
   return (neuron0x253a910()*0.738096);
}

double NNfunction_ns_chi04_cR::synapse0x2561930() {
   return (neuron0x25379f0()*0.0390767);
}

double NNfunction_ns_chi04_cR::synapse0x2561970() {
   return (neuron0x253c4c0()*0.392369);
}

double NNfunction_ns_chi04_cR::synapse0x25619b0() {
   return (neuron0x253ce90()*-0.287341);
}

double NNfunction_ns_chi04_cR::synapse0x25619f0() {
   return (neuron0x253d860()*0.370561);
}

double NNfunction_ns_chi04_cR::synapse0x2561a30() {
   return (neuron0x253e230()*0.201814);
}

double NNfunction_ns_chi04_cR::synapse0x25614c0() {
   return (neuron0x2540040()*-0.599387);
}

double NNfunction_ns_chi04_cR::synapse0x2561500() {
   return (neuron0x2540320()*0.421045);
}

double NNfunction_ns_chi04_cR::synapse0x2561b80() {
   return (neuron0x2540cf0()*-0.174436);
}

double NNfunction_ns_chi04_cR::synapse0x2561bc0() {
   return (neuron0x25416c0()*-0.238863);
}

double NNfunction_ns_chi04_cR::synapse0x2561c00() {
   return (neuron0x2542090()*-0.176735);
}

double NNfunction_ns_chi04_cR::synapse0x2561c40() {
   return (neuron0x2542a60()*-0.233416);
}

double NNfunction_ns_chi04_cR::synapse0x2561c80() {
   return (neuron0x253b5b0()*-0.188432);
}

double NNfunction_ns_chi04_cR::synapse0x2561cc0() {
   return (neuron0x253bf80()*-0.290411);
}

double NNfunction_ns_chi04_cR::synapse0x2561d00() {
   return (neuron0x25457f0()*-0.0183937);
}

double NNfunction_ns_chi04_cR::synapse0x2561d40() {
   return (neuron0x25461c0()*-0.393626);
}

double NNfunction_ns_chi04_cR::synapse0x2561d80() {
   return (neuron0x2546b90()*0.425127);
}

double NNfunction_ns_chi04_cR::synapse0x2561dc0() {
   return (neuron0x2547560()*0.189491);
}

double NNfunction_ns_chi04_cR::synapse0x2561e00() {
   return (neuron0x2547f30()*0.558121);
}

double NNfunction_ns_chi04_cR::synapse0x2561e40() {
   return (neuron0x2548900()*0.450769);
}

double NNfunction_ns_chi04_cR::synapse0x2561e80() {
   return (neuron0x25492d0()*-0.193578);
}

double NNfunction_ns_chi04_cR::synapse0x2561ec0() {
   return (neuron0x2549ca0()*0.21172);
}

double NNfunction_ns_chi04_cR::synapse0x2561a70() {
   return (neuron0x253fd30()*0.286661);
}

double NNfunction_ns_chi04_cR::synapse0x2561ab0() {
   return (neuron0x254c880()*-0.129407);
}

double NNfunction_ns_chi04_cR::synapse0x2561af0() {
   return (neuron0x254d250()*0.359117);
}

double NNfunction_ns_chi04_cR::synapse0x2561b30() {
   return (neuron0x254dc20()*0.0730726);
}

double NNfunction_ns_chi04_cR::synapse0x2562110() {
   return (neuron0x254e5f0()*0.368385);
}

double NNfunction_ns_chi04_cR::synapse0x2562150() {
   return (neuron0x254efc0()*0.199306);
}

double NNfunction_ns_chi04_cR::synapse0x2562190() {
   return (neuron0x254f990()*0.61795);
}

double NNfunction_ns_chi04_cR::synapse0x25621d0() {
   return (neuron0x2550360()*0.330617);
}

double NNfunction_ns_chi04_cR::synapse0x2562210() {
   return (neuron0x2550d30()*-0.34789);
}

double NNfunction_ns_chi04_cR::synapse0x2562250() {
   return (neuron0x2551910()*0.261629);
}

double NNfunction_ns_chi04_cR::synapse0x2562290() {
   return (neuron0x25522e0()*1.08588);
}

double NNfunction_ns_chi04_cR::synapse0x25622d0() {
   return (neuron0x2543160()*0.0240905);
}

double NNfunction_ns_chi04_cR::synapse0x2562310() {
   return (neuron0x2543b30()*0.636599);
}

double NNfunction_ns_chi04_cR::synapse0x2562350() {
   return (neuron0x2544500()*0.0890689);
}

double NNfunction_ns_chi04_cR::synapse0x2562390() {
   return (neuron0x2556b40()*0.0602697);
}

double NNfunction_ns_chi04_cR::synapse0x25623d0() {
   return (neuron0x25573f0()*0.477887);
}

double NNfunction_ns_chi04_cR::synapse0x2562410() {
   return (neuron0x2557dc0()*0.249596);
}

double NNfunction_ns_chi04_cR::synapse0x2562450() {
   return (neuron0x2558790()*0.413393);
}

double NNfunction_ns_chi04_cR::synapse0x25627d0() {
   return (neuron0x2534710()*0.0360641);
}

double NNfunction_ns_chi04_cR::synapse0x2562810() {
   return (neuron0x2535060()*0.0564676);
}

double NNfunction_ns_chi04_cR::synapse0x2562850() {
   return (neuron0x2535b40()*0.0155632);
}

double NNfunction_ns_chi04_cR::synapse0x2562890() {
   return (neuron0x25355e0()*-1.17121);
}

double NNfunction_ns_chi04_cR::synapse0x25628d0() {
   return (neuron0x2536920()*0.0724535);
}

double NNfunction_ns_chi04_cR::synapse0x2562910() {
   return (neuron0x25372f0()*-0.0420603);
}

double NNfunction_ns_chi04_cR::synapse0x2562950() {
   return (neuron0x25380c0()*-0.032794);
}

double NNfunction_ns_chi04_cR::synapse0x2562990() {
   return (neuron0x2538a90()*0.0473837);
}

double NNfunction_ns_chi04_cR::synapse0x25629d0() {
   return (neuron0x2539460()*0.0647276);
}

double NNfunction_ns_chi04_cR::synapse0x2562a10() {
   return (neuron0x2539f40()*3.16091);
}

double NNfunction_ns_chi04_cR::synapse0x2562a50() {
   return (neuron0x253a910()*-0.0124382);
}

double NNfunction_ns_chi04_cR::synapse0x2562a90() {
   return (neuron0x25379f0()*0.195997);
}

double NNfunction_ns_chi04_cR::synapse0x2562ad0() {
   return (neuron0x253c4c0()*1.93082);
}

double NNfunction_ns_chi04_cR::synapse0x2562b10() {
   return (neuron0x253ce90()*0.155646);
}

double NNfunction_ns_chi04_cR::synapse0x2562b50() {
   return (neuron0x253d860()*0.0249348);
}

double NNfunction_ns_chi04_cR::synapse0x2562b90() {
   return (neuron0x253e230()*0.0888861);
}

double NNfunction_ns_chi04_cR::synapse0x2562620() {
   return (neuron0x2540040()*1.21387);
}

double NNfunction_ns_chi04_cR::synapse0x2562660() {
   return (neuron0x2540320()*2.70286);
}

double NNfunction_ns_chi04_cR::synapse0x2562ce0() {
   return (neuron0x2540cf0()*-0.723996);
}

double NNfunction_ns_chi04_cR::synapse0x2562d20() {
   return (neuron0x25416c0()*-0.0747941);
}

double NNfunction_ns_chi04_cR::synapse0x2562d60() {
   return (neuron0x2542090()*4.16237);
}

double NNfunction_ns_chi04_cR::synapse0x2562da0() {
   return (neuron0x2542a60()*-0.0553715);
}

double NNfunction_ns_chi04_cR::synapse0x2562de0() {
   return (neuron0x253b5b0()*-4.05445);
}

double NNfunction_ns_chi04_cR::synapse0x2562e20() {
   return (neuron0x253bf80()*-1.91045);
}

double NNfunction_ns_chi04_cR::synapse0x2562e60() {
   return (neuron0x25457f0()*-0.0516932);
}

double NNfunction_ns_chi04_cR::synapse0x2562ea0() {
   return (neuron0x25461c0()*-0.0475143);
}

double NNfunction_ns_chi04_cR::synapse0x2562ee0() {
   return (neuron0x2546b90()*0.304889);
}

double NNfunction_ns_chi04_cR::synapse0x2562f20() {
   return (neuron0x2547560()*1.17953);
}

double NNfunction_ns_chi04_cR::synapse0x2562f60() {
   return (neuron0x2547f30()*-0.00159619);
}

double NNfunction_ns_chi04_cR::synapse0x2562fa0() {
   return (neuron0x2548900()*0.147371);
}

double NNfunction_ns_chi04_cR::synapse0x2562fe0() {
   return (neuron0x25492d0()*-0.135529);
}

double NNfunction_ns_chi04_cR::synapse0x2563020() {
   return (neuron0x2549ca0()*-0.56146);
}

double NNfunction_ns_chi04_cR::synapse0x2562bd0() {
   return (neuron0x253fd30()*0.417898);
}

double NNfunction_ns_chi04_cR::synapse0x2562c10() {
   return (neuron0x254c880()*-1.15337);
}

double NNfunction_ns_chi04_cR::synapse0x2562c50() {
   return (neuron0x254d250()*-0.0814289);
}

double NNfunction_ns_chi04_cR::synapse0x2562c90() {
   return (neuron0x254dc20()*0.588943);
}

double NNfunction_ns_chi04_cR::synapse0x2563270() {
   return (neuron0x254e5f0()*0.115111);
}

double NNfunction_ns_chi04_cR::synapse0x25632b0() {
   return (neuron0x254efc0()*-0.0376769);
}

double NNfunction_ns_chi04_cR::synapse0x25632f0() {
   return (neuron0x254f990()*1.91303);
}

double NNfunction_ns_chi04_cR::synapse0x2563330() {
   return (neuron0x2550360()*0.0395637);
}

double NNfunction_ns_chi04_cR::synapse0x2563370() {
   return (neuron0x2550d30()*-0.960169);
}

double NNfunction_ns_chi04_cR::synapse0x25633b0() {
   return (neuron0x2551910()*0.492036);
}

double NNfunction_ns_chi04_cR::synapse0x25633f0() {
   return (neuron0x25522e0()*0.094254);
}

double NNfunction_ns_chi04_cR::synapse0x2563430() {
   return (neuron0x2543160()*0.0323581);
}

double NNfunction_ns_chi04_cR::synapse0x2563470() {
   return (neuron0x2543b30()*-0.844182);
}

double NNfunction_ns_chi04_cR::synapse0x25634b0() {
   return (neuron0x2544500()*0.883642);
}

double NNfunction_ns_chi04_cR::synapse0x25634f0() {
   return (neuron0x2556b40()*0.0491103);
}

double NNfunction_ns_chi04_cR::synapse0x2563530() {
   return (neuron0x25573f0()*3.49083);
}

double NNfunction_ns_chi04_cR::synapse0x2563570() {
   return (neuron0x2557dc0()*0.000244998);
}

double NNfunction_ns_chi04_cR::synapse0x25635b0() {
   return (neuron0x2558790()*0.082498);
}

double NNfunction_ns_chi04_cR::synapse0x2563810() {
   return (neuron0x255f990()*-8.80316);
}

double NNfunction_ns_chi04_cR::synapse0x2563850() {
   return (neuron0x255fd30()*-6.24072);
}

double NNfunction_ns_chi04_cR::synapse0x2563890() {
   return (neuron0x25601d0()*5.30808);
}

double NNfunction_ns_chi04_cR::synapse0x25638d0() {
   return (neuron0x2561330()*3.82962);
}

double NNfunction_ns_chi04_cR::synapse0x2563910() {
   return (neuron0x2562490()*-9.87227);
}

