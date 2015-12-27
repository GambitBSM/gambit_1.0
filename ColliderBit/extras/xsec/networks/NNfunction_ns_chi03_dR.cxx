#include "NNfunction_ns_chi03_dR.h"
#include <cmath>

double NNfunction_ns_chi03_dR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.1729)/15.2962;
   input1 = (in1 - 26.6833)/464.972;
   input2 = (in2 - 699.358)/663.759;
   input3 = (in3 - 20.4812)/792.153;
   input4 = (in4 - 928.114)/912.504;
   input5 = (in5 - 836.227)/931.474;
   input6 = (in6 - 832.987)/923.01;
   input7 = (in7 - 826.189)/896.295;
   input8 = (in8 - 838.19)/943.107;
   input9 = (in9 - 820.544)/923.725;
   input10 = (in10 - 872.052)/927.008;
   input11 = (in11 - 671.703)/812.067;
   input12 = (in12 - 665.259)/806.707;
   input13 = (in13 - 455.663)/470.134;
   input14 = (in14 - 688.799)/781.011;
   input15 = (in15 - 701.495)/794.225;
   input16 = (in16 - 510.813)/544.214;
   input17 = (in17 - 235.463)/203.801;
   input18 = (in18 - 693.722)/845.044;
   input19 = (in19 - 707.088)/808.464;
   input20 = (in20 - -19.4369)/471.365;
   input21 = (in21 - -38.2641)/1079.62;
   input22 = (in22 - 8.2691)/1110.45;
   input23 = (in23 - -57.1235)/188.669;
   switch(index) {
     case 0:
         return neuron0x259d970();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi03_dR::Value(int index, double* input) {
   input0 = (input[0] - 24.1729)/15.2962;
   input1 = (input[1] - 26.6833)/464.972;
   input2 = (input[2] - 699.358)/663.759;
   input3 = (input[3] - 20.4812)/792.153;
   input4 = (input[4] - 928.114)/912.504;
   input5 = (input[5] - 836.227)/931.474;
   input6 = (input[6] - 832.987)/923.01;
   input7 = (input[7] - 826.189)/896.295;
   input8 = (input[8] - 838.19)/943.107;
   input9 = (input[9] - 820.544)/923.725;
   input10 = (input[10] - 872.052)/927.008;
   input11 = (input[11] - 671.703)/812.067;
   input12 = (input[12] - 665.259)/806.707;
   input13 = (input[13] - 455.663)/470.134;
   input14 = (input[14] - 688.799)/781.011;
   input15 = (input[15] - 701.495)/794.225;
   input16 = (input[16] - 510.813)/544.214;
   input17 = (input[17] - 235.463)/203.801;
   input18 = (input[18] - 693.722)/845.044;
   input19 = (input[19] - 707.088)/808.464;
   input20 = (input[20] - -19.4369)/471.365;
   input21 = (input[21] - -38.2641)/1079.62;
   input22 = (input[22] - 8.2691)/1110.45;
   input23 = (input[23] - -57.1235)/188.669;
   switch(index) {
     case 0:
         return neuron0x259d970();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi03_dR::neuron0x25689e0() {
   return input0;
}

double NNfunction_ns_chi03_dR::neuron0x2568c90() {
   return input1;
}

double NNfunction_ns_chi03_dR::neuron0x2568fd0() {
   return input2;
}

double NNfunction_ns_chi03_dR::neuron0x2569310() {
   return input3;
}

double NNfunction_ns_chi03_dR::neuron0x2569650() {
   return input4;
}

double NNfunction_ns_chi03_dR::neuron0x2569990() {
   return input5;
}

double NNfunction_ns_chi03_dR::neuron0x2569cd0() {
   return input6;
}

double NNfunction_ns_chi03_dR::neuron0x256a010() {
   return input7;
}

double NNfunction_ns_chi03_dR::neuron0x256a350() {
   return input8;
}

double NNfunction_ns_chi03_dR::neuron0x256a690() {
   return input9;
}

double NNfunction_ns_chi03_dR::neuron0x256a9d0() {
   return input10;
}

double NNfunction_ns_chi03_dR::neuron0x256ad10() {
   return input11;
}

double NNfunction_ns_chi03_dR::neuron0x256b050() {
   return input12;
}

double NNfunction_ns_chi03_dR::neuron0x256b390() {
   return input13;
}

double NNfunction_ns_chi03_dR::neuron0x256b6d0() {
   return input14;
}

double NNfunction_ns_chi03_dR::neuron0x256ba10() {
   return input15;
}

double NNfunction_ns_chi03_dR::neuron0x256bd50() {
   return input16;
}

double NNfunction_ns_chi03_dR::neuron0x256c2b0() {
   return input17;
}

double NNfunction_ns_chi03_dR::neuron0x256c5f0() {
   return input18;
}

double NNfunction_ns_chi03_dR::neuron0x256c930() {
   return input19;
}

double NNfunction_ns_chi03_dR::neuron0x256cc70() {
   return input20;
}

double NNfunction_ns_chi03_dR::neuron0x256cfb0() {
   return input21;
}

double NNfunction_ns_chi03_dR::neuron0x256d2f0() {
   return input22;
}

double NNfunction_ns_chi03_dR::neuron0x256d630() {
   return input23;
}

double NNfunction_ns_chi03_dR::input0x256daa0() {
   double input = -0.267554;
   input += synapse0x256dde0();
   input += synapse0x256de20();
   input += synapse0x256de60();
   input += synapse0x256dea0();
   input += synapse0x256dee0();
   input += synapse0x256df20();
   input += synapse0x256df60();
   input += synapse0x256dfa0();
   input += synapse0x256dfe0();
   input += synapse0x256e020();
   input += synapse0x256e060();
   input += synapse0x256e0a0();
   input += synapse0x256e0e0();
   input += synapse0x256e120();
   input += synapse0x256e160();
   input += synapse0x256e1a0();
   input += synapse0x256dc30();
   input += synapse0x256dc70();
   input += synapse0x2324b60();
   input += synapse0x2324ba0();
   input += synapse0x256e1e0();
   input += synapse0x256e220();
   input += synapse0x256e260();
   input += synapse0x256e2a0();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x256daa0() {
   double input = input0x256daa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x256e2e0() {
   double input = -1.20066;
   input += synapse0x256e620();
   input += synapse0x256e660();
   input += synapse0x256e6a0();
   input += synapse0x256e6e0();
   input += synapse0x256e720();
   input += synapse0x256e760();
   input += synapse0x256e7a0();
   input += synapse0x256e7e0();
   input += synapse0x256e820();
   input += synapse0x23249b0();
   input += synapse0x23249f0();
   input += synapse0x2324a30();
   input += synapse0x2324a70();
   input += synapse0x256ea70();
   input += synapse0x256eab0();
   input += synapse0x256eaf0();
   input += synapse0x256e470();
   input += synapse0x256e4b0();
   input += synapse0x256ec40();
   input += synapse0x256ec80();
   input += synapse0x256ecc0();
   input += synapse0x256ed00();
   input += synapse0x256ed40();
   input += synapse0x256ed80();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x256e2e0() {
   double input = input0x256e2e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x256edc0() {
   double input = -0.660777;
   input += synapse0x256f100();
   input += synapse0x256f140();
   input += synapse0x256f180();
   input += synapse0x256f1c0();
   input += synapse0x256f200();
   input += synapse0x256f240();
   input += synapse0x256f280();
   input += synapse0x256f2c0();
   input += synapse0x256f300();
   input += synapse0x256f340();
   input += synapse0x256f380();
   input += synapse0x256f3c0();
   input += synapse0x256f400();
   input += synapse0x256f440();
   input += synapse0x256f480();
   input += synapse0x256f4c0();
   input += synapse0x256ef50();
   input += synapse0x256ef90();
   input += synapse0x2325250();
   input += synapse0x2332b20();
   input += synapse0x2332b60();
   input += synapse0x25713f0();
   input += synapse0x2571430();
   input += synapse0x2568720();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x256edc0() {
   double input = input0x256edc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x256e860() {
   double input = -0.0257985;
   input += synapse0x25687f0();
   input += synapse0x23333a0();
   input += synapse0x256e9f0();
   input += synapse0x256ea30();
   input += synapse0x256f610();
   input += synapse0x256f650();
   input += synapse0x256f690();
   input += synapse0x256f6d0();
   input += synapse0x256f710();
   input += synapse0x256f750();
   input += synapse0x256f790();
   input += synapse0x256f7d0();
   input += synapse0x256f810();
   input += synapse0x256f850();
   input += synapse0x256f890();
   input += synapse0x256f8d0();
   input += synapse0x2568760();
   input += synapse0x25687a0();
   input += synapse0x256fa20();
   input += synapse0x256fa60();
   input += synapse0x256faa0();
   input += synapse0x256fae0();
   input += synapse0x256fb20();
   input += synapse0x256fb60();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x256e860() {
   double input = input0x256e860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x256fba0() {
   double input = 1.44116;
   input += synapse0x256fee0();
   input += synapse0x256ff20();
   input += synapse0x256ff60();
   input += synapse0x256ffa0();
   input += synapse0x256ffe0();
   input += synapse0x2570020();
   input += synapse0x2570060();
   input += synapse0x25700a0();
   input += synapse0x25700e0();
   input += synapse0x2570120();
   input += synapse0x2570160();
   input += synapse0x25701a0();
   input += synapse0x25701e0();
   input += synapse0x2570220();
   input += synapse0x2570260();
   input += synapse0x25702a0();
   input += synapse0x25703f0();
   input += synapse0x256fd30();
   input += synapse0x256fd70();
   input += synapse0x2571530();
   input += synapse0x2571570();
   input += synapse0x25715b0();
   input += synapse0x25715f0();
   input += synapse0x2571630();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x256fba0() {
   double input = input0x256fba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2571670() {
   double input = -0.622942;
   input += synapse0x25719b0();
   input += synapse0x25719f0();
   input += synapse0x2571a30();
   input += synapse0x2571a70();
   input += synapse0x2571ab0();
   input += synapse0x2571af0();
   input += synapse0x2571b30();
   input += synapse0x2571b70();
   input += synapse0x2571bb0();
   input += synapse0x2332e70();
   input += synapse0x2332eb0();
   input += synapse0x2332ef0();
   input += synapse0x2332f30();
   input += synapse0x2332f70();
   input += synapse0x2332fb0();
   input += synapse0x2332ff0();
   input += synapse0x2571800();
   input += synapse0x2571840();
   input += synapse0x2333140();
   input += synapse0x2333180();
   input += synapse0x23331c0();
   input += synapse0x2333200();
   input += synapse0x2333240();
   input += synapse0x2572400();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2571670() {
   double input = input0x2571670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2572440() {
   double input = 0.415388;
   input += synapse0x2572780();
   input += synapse0x25727c0();
   input += synapse0x2572800();
   input += synapse0x2572840();
   input += synapse0x2572880();
   input += synapse0x25728c0();
   input += synapse0x2572900();
   input += synapse0x2572940();
   input += synapse0x2572980();
   input += synapse0x25729c0();
   input += synapse0x2572a00();
   input += synapse0x2572a40();
   input += synapse0x2572a80();
   input += synapse0x2572ac0();
   input += synapse0x2572b00();
   input += synapse0x2572b40();
   input += synapse0x25725d0();
   input += synapse0x2572610();
   input += synapse0x2572c90();
   input += synapse0x2572cd0();
   input += synapse0x2572d10();
   input += synapse0x2572d50();
   input += synapse0x2572d90();
   input += synapse0x2572dd0();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2572440() {
   double input = input0x2572440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2572e10() {
   double input = 0.851464;
   input += synapse0x2573150();
   input += synapse0x2573190();
   input += synapse0x25731d0();
   input += synapse0x2573210();
   input += synapse0x2573250();
   input += synapse0x2573290();
   input += synapse0x25732d0();
   input += synapse0x2573310();
   input += synapse0x2573350();
   input += synapse0x2573390();
   input += synapse0x25733d0();
   input += synapse0x2573410();
   input += synapse0x2573450();
   input += synapse0x2573490();
   input += synapse0x25734d0();
   input += synapse0x2573510();
   input += synapse0x2572fa0();
   input += synapse0x2572fe0();
   input += synapse0x2573660();
   input += synapse0x25736a0();
   input += synapse0x25736e0();
   input += synapse0x2573720();
   input += synapse0x2573760();
   input += synapse0x25737a0();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2572e10() {
   double input = input0x2572e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x25737e0() {
   double input = -0.467533;
   input += synapse0x256c1a0();
   input += synapse0x256c1e0();
   input += synapse0x256c220();
   input += synapse0x256c260();
   input += synapse0x2573d30();
   input += synapse0x2573d70();
   input += synapse0x2573db0();
   input += synapse0x2573df0();
   input += synapse0x2573e30();
   input += synapse0x2573e70();
   input += synapse0x2573eb0();
   input += synapse0x2573ef0();
   input += synapse0x2573f30();
   input += synapse0x2573f70();
   input += synapse0x2573fb0();
   input += synapse0x2573ff0();
   input += synapse0x2573970();
   input += synapse0x25739b0();
   input += synapse0x2574140();
   input += synapse0x2574180();
   input += synapse0x25741c0();
   input += synapse0x2574200();
   input += synapse0x2574240();
   input += synapse0x2574280();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x25737e0() {
   double input = input0x25737e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x25742c0() {
   double input = -0.263042;
   input += synapse0x2574600();
   input += synapse0x2574640();
   input += synapse0x2574680();
   input += synapse0x25746c0();
   input += synapse0x2574700();
   input += synapse0x2574740();
   input += synapse0x2574780();
   input += synapse0x25747c0();
   input += synapse0x2574800();
   input += synapse0x2574840();
   input += synapse0x2574880();
   input += synapse0x25748c0();
   input += synapse0x2574900();
   input += synapse0x2574940();
   input += synapse0x2574980();
   input += synapse0x25749c0();
   input += synapse0x2574450();
   input += synapse0x2574490();
   input += synapse0x2574b10();
   input += synapse0x2574b50();
   input += synapse0x2574b90();
   input += synapse0x2574bd0();
   input += synapse0x2574c10();
   input += synapse0x2574c50();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x25742c0() {
   double input = input0x25742c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2574c90() {
   double input = -2.56689;
   input += synapse0x2574fd0();
   input += synapse0x2575010();
   input += synapse0x2575050();
   input += synapse0x2575090();
   input += synapse0x25750d0();
   input += synapse0x2575110();
   input += synapse0x2575150();
   input += synapse0x2575190();
   input += synapse0x25751d0();
   input += synapse0x2575210();
   input += synapse0x2575250();
   input += synapse0x2575290();
   input += synapse0x25752d0();
   input += synapse0x2575310();
   input += synapse0x2575350();
   input += synapse0x2575390();
   input += synapse0x2574e20();
   input += synapse0x2574e60();
   input += synapse0x2571bf0();
   input += synapse0x2571c30();
   input += synapse0x2571c70();
   input += synapse0x2571cb0();
   input += synapse0x2571cf0();
   input += synapse0x2571d30();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2574c90() {
   double input = input0x2574c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2571d70() {
   double input = 0.110509;
   input += synapse0x25720b0();
   input += synapse0x25720f0();
   input += synapse0x2572130();
   input += synapse0x2572170();
   input += synapse0x25721b0();
   input += synapse0x25721f0();
   input += synapse0x2572230();
   input += synapse0x2572270();
   input += synapse0x25722b0();
   input += synapse0x25722f0();
   input += synapse0x2572330();
   input += synapse0x2572370();
   input += synapse0x25723b0();
   input += synapse0x25764f0();
   input += synapse0x2576530();
   input += synapse0x2576570();
   input += synapse0x2571f00();
   input += synapse0x2571f40();
   input += synapse0x25766c0();
   input += synapse0x2576700();
   input += synapse0x2576740();
   input += synapse0x2576780();
   input += synapse0x25767c0();
   input += synapse0x2576800();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2571d70() {
   double input = input0x2571d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2576840() {
   double input = -0.498236;
   input += synapse0x2576b80();
   input += synapse0x2576bc0();
   input += synapse0x2576c00();
   input += synapse0x2576c40();
   input += synapse0x2576c80();
   input += synapse0x2576cc0();
   input += synapse0x2576d00();
   input += synapse0x2576d40();
   input += synapse0x2576d80();
   input += synapse0x2576dc0();
   input += synapse0x2576e00();
   input += synapse0x2576e40();
   input += synapse0x2576e80();
   input += synapse0x2576ec0();
   input += synapse0x2576f00();
   input += synapse0x2576f40();
   input += synapse0x25769d0();
   input += synapse0x2576a10();
   input += synapse0x2577090();
   input += synapse0x25770d0();
   input += synapse0x2577110();
   input += synapse0x2577150();
   input += synapse0x2577190();
   input += synapse0x25771d0();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2576840() {
   double input = input0x2576840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2577210() {
   double input = -1.23075;
   input += synapse0x2577550();
   input += synapse0x2577590();
   input += synapse0x25775d0();
   input += synapse0x2577610();
   input += synapse0x2577650();
   input += synapse0x2577690();
   input += synapse0x25776d0();
   input += synapse0x2577710();
   input += synapse0x2577750();
   input += synapse0x2577790();
   input += synapse0x25777d0();
   input += synapse0x2577810();
   input += synapse0x2577850();
   input += synapse0x2577890();
   input += synapse0x25778d0();
   input += synapse0x2577910();
   input += synapse0x25773a0();
   input += synapse0x25773e0();
   input += synapse0x2577a60();
   input += synapse0x2577aa0();
   input += synapse0x2577ae0();
   input += synapse0x2577b20();
   input += synapse0x2577b60();
   input += synapse0x2577ba0();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2577210() {
   double input = input0x2577210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2577be0() {
   double input = 6.92904;
   input += synapse0x2577f20();
   input += synapse0x2577f60();
   input += synapse0x2577fa0();
   input += synapse0x2577fe0();
   input += synapse0x2578020();
   input += synapse0x2578060();
   input += synapse0x25780a0();
   input += synapse0x25780e0();
   input += synapse0x2578120();
   input += synapse0x2578160();
   input += synapse0x25781a0();
   input += synapse0x25781e0();
   input += synapse0x2578220();
   input += synapse0x2578260();
   input += synapse0x25782a0();
   input += synapse0x25782e0();
   input += synapse0x2577d70();
   input += synapse0x2577db0();
   input += synapse0x2578430();
   input += synapse0x2578470();
   input += synapse0x25784b0();
   input += synapse0x25784f0();
   input += synapse0x2578530();
   input += synapse0x2578570();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2577be0() {
   double input = input0x2577be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x25785b0() {
   double input = 1.27355;
   input += synapse0x25788f0();
   input += synapse0x2568b70();
   input += synapse0x2568bb0();
   input += synapse0x2568eb0();
   input += synapse0x2568ef0();
   input += synapse0x25691f0();
   input += synapse0x2569230();
   input += synapse0x2569530();
   input += synapse0x2569570();
   input += synapse0x2569870();
   input += synapse0x25698b0();
   input += synapse0x2569bb0();
   input += synapse0x2569bf0();
   input += synapse0x2569ef0();
   input += synapse0x2569f30();
   input += synapse0x256a230();
   input += synapse0x256a270();
   input += synapse0x256a570();
   input += synapse0x256a5b0();
   input += synapse0x256a8b0();
   input += synapse0x256a8f0();
   input += synapse0x256abf0();
   input += synapse0x256ac30();
   input += synapse0x256af30();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x25785b0() {
   double input = input0x25785b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x257a3c0() {
   double input = -0.294502;
   input += synapse0x256af70();
   input += synapse0x256bc30();
   input += synapse0x256bc70();
   input += synapse0x2578740();
   input += synapse0x2578780();
   input += synapse0x256bf70();
   input += synapse0x256bfb0();
   input += synapse0x256c4d0();
   input += synapse0x256c510();
   input += synapse0x256c810();
   input += synapse0x256c850();
   input += synapse0x256cb50();
   input += synapse0x256cb90();
   input += synapse0x256ce90();
   input += synapse0x256ced0();
   input += synapse0x256d1d0();
   input += synapse0x256d210();
   input += synapse0x256d510();
   input += synapse0x256d550();
   input += synapse0x256d850();
   input += synapse0x256d890();
   input += synapse0x256b270();
   input += synapse0x256b2b0();
   input += synapse0x257a660();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x257a3c0() {
   double input = input0x257a3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x257a6a0() {
   double input = -0.021358;
   input += synapse0x257a9e0();
   input += synapse0x257aa20();
   input += synapse0x257aa60();
   input += synapse0x257aaa0();
   input += synapse0x257aae0();
   input += synapse0x257ab20();
   input += synapse0x257ab60();
   input += synapse0x257aba0();
   input += synapse0x257abe0();
   input += synapse0x257ac20();
   input += synapse0x257ac60();
   input += synapse0x257aca0();
   input += synapse0x257ace0();
   input += synapse0x257ad20();
   input += synapse0x257ad60();
   input += synapse0x257ada0();
   input += synapse0x257a830();
   input += synapse0x257a870();
   input += synapse0x257aef0();
   input += synapse0x257af30();
   input += synapse0x257af70();
   input += synapse0x257afb0();
   input += synapse0x257aff0();
   input += synapse0x257b030();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x257a6a0() {
   double input = input0x257a6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x257b070() {
   double input = 0.584951;
   input += synapse0x257b3b0();
   input += synapse0x257b3f0();
   input += synapse0x257b430();
   input += synapse0x257b470();
   input += synapse0x257b4b0();
   input += synapse0x257b4f0();
   input += synapse0x257b530();
   input += synapse0x257b570();
   input += synapse0x257b5b0();
   input += synapse0x257b5f0();
   input += synapse0x257b630();
   input += synapse0x257b670();
   input += synapse0x257b6b0();
   input += synapse0x257b6f0();
   input += synapse0x257b730();
   input += synapse0x257b770();
   input += synapse0x257b200();
   input += synapse0x257b240();
   input += synapse0x257b8c0();
   input += synapse0x257b900();
   input += synapse0x257b940();
   input += synapse0x257b980();
   input += synapse0x257b9c0();
   input += synapse0x257ba00();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x257b070() {
   double input = input0x257b070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x257ba40() {
   double input = 0.683919;
   input += synapse0x257bd80();
   input += synapse0x257bdc0();
   input += synapse0x257be00();
   input += synapse0x257be40();
   input += synapse0x257be80();
   input += synapse0x257bec0();
   input += synapse0x257bf00();
   input += synapse0x257bf40();
   input += synapse0x257bf80();
   input += synapse0x257bfc0();
   input += synapse0x257c000();
   input += synapse0x257c040();
   input += synapse0x257c080();
   input += synapse0x257c0c0();
   input += synapse0x257c100();
   input += synapse0x257c140();
   input += synapse0x257bbd0();
   input += synapse0x257bc10();
   input += synapse0x257c290();
   input += synapse0x257c2d0();
   input += synapse0x257c310();
   input += synapse0x257c350();
   input += synapse0x257c390();
   input += synapse0x257c3d0();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x257ba40() {
   double input = input0x257ba40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x257c410() {
   double input = 1.38107;
   input += synapse0x257c750();
   input += synapse0x257c790();
   input += synapse0x257c7d0();
   input += synapse0x257c810();
   input += synapse0x257c850();
   input += synapse0x257c890();
   input += synapse0x257c8d0();
   input += synapse0x257c910();
   input += synapse0x257c950();
   input += synapse0x257c990();
   input += synapse0x257c9d0();
   input += synapse0x257ca10();
   input += synapse0x257ca50();
   input += synapse0x257ca90();
   input += synapse0x257cad0();
   input += synapse0x257cb10();
   input += synapse0x257c5a0();
   input += synapse0x257c5e0();
   input += synapse0x257cc60();
   input += synapse0x257cca0();
   input += synapse0x257cce0();
   input += synapse0x257cd20();
   input += synapse0x257cd60();
   input += synapse0x257cda0();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x257c410() {
   double input = input0x257c410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x257cde0() {
   double input = 1.78042;
   input += synapse0x257d120();
   input += synapse0x257d160();
   input += synapse0x257d1a0();
   input += synapse0x257d1e0();
   input += synapse0x257d220();
   input += synapse0x257d260();
   input += synapse0x257d2a0();
   input += synapse0x257d2e0();
   input += synapse0x257d320();
   input += synapse0x25754e0();
   input += synapse0x2575520();
   input += synapse0x2575560();
   input += synapse0x25755a0();
   input += synapse0x25755e0();
   input += synapse0x2575620();
   input += synapse0x2575660();
   input += synapse0x257cf70();
   input += synapse0x257cfb0();
   input += synapse0x25757b0();
   input += synapse0x25757f0();
   input += synapse0x2575830();
   input += synapse0x2575870();
   input += synapse0x25758b0();
   input += synapse0x25758f0();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x257cde0() {
   double input = input0x257cde0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2575930() {
   double input = 1.84989;
   input += synapse0x2575c70();
   input += synapse0x2575cb0();
   input += synapse0x2575cf0();
   input += synapse0x2575d30();
   input += synapse0x2575d70();
   input += synapse0x2575db0();
   input += synapse0x2575df0();
   input += synapse0x2575e30();
   input += synapse0x2575e70();
   input += synapse0x2575eb0();
   input += synapse0x2575ef0();
   input += synapse0x2575f30();
   input += synapse0x2575f70();
   input += synapse0x2575fb0();
   input += synapse0x2575ff0();
   input += synapse0x2576030();
   input += synapse0x2575ac0();
   input += synapse0x2575b00();
   input += synapse0x2576180();
   input += synapse0x25761c0();
   input += synapse0x2576200();
   input += synapse0x2576240();
   input += synapse0x2576280();
   input += synapse0x25762c0();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2575930() {
   double input = input0x2575930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2576300() {
   double input = 1.8516;
   input += synapse0x2576490();
   input += synapse0x257f520();
   input += synapse0x257f560();
   input += synapse0x257f5a0();
   input += synapse0x257f5e0();
   input += synapse0x257f620();
   input += synapse0x257f660();
   input += synapse0x257f6a0();
   input += synapse0x257f6e0();
   input += synapse0x257f720();
   input += synapse0x257f760();
   input += synapse0x257f7a0();
   input += synapse0x257f7e0();
   input += synapse0x257f820();
   input += synapse0x257f860();
   input += synapse0x257f8a0();
   input += synapse0x257f370();
   input += synapse0x257f3b0();
   input += synapse0x257f9f0();
   input += synapse0x257fa30();
   input += synapse0x257fa70();
   input += synapse0x257fab0();
   input += synapse0x257faf0();
   input += synapse0x257fb30();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2576300() {
   double input = input0x2576300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x257fb70() {
   double input = 0.0905423;
   input += synapse0x257feb0();
   input += synapse0x257fef0();
   input += synapse0x257ff30();
   input += synapse0x257ff70();
   input += synapse0x257ffb0();
   input += synapse0x257fff0();
   input += synapse0x2580030();
   input += synapse0x2580070();
   input += synapse0x25800b0();
   input += synapse0x25800f0();
   input += synapse0x2580130();
   input += synapse0x2580170();
   input += synapse0x25801b0();
   input += synapse0x25801f0();
   input += synapse0x2580230();
   input += synapse0x2580270();
   input += synapse0x257fd00();
   input += synapse0x257fd40();
   input += synapse0x25803c0();
   input += synapse0x2580400();
   input += synapse0x2580440();
   input += synapse0x2580480();
   input += synapse0x25804c0();
   input += synapse0x2580500();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x257fb70() {
   double input = input0x257fb70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2580540() {
   double input = -2.87407;
   input += synapse0x2580880();
   input += synapse0x25808c0();
   input += synapse0x2580900();
   input += synapse0x2580940();
   input += synapse0x2580980();
   input += synapse0x25809c0();
   input += synapse0x2580a00();
   input += synapse0x2580a40();
   input += synapse0x2580a80();
   input += synapse0x2580ac0();
   input += synapse0x2580b00();
   input += synapse0x2580b40();
   input += synapse0x2580b80();
   input += synapse0x2580bc0();
   input += synapse0x2580c00();
   input += synapse0x2580c40();
   input += synapse0x25806d0();
   input += synapse0x2580710();
   input += synapse0x2580d90();
   input += synapse0x2580dd0();
   input += synapse0x2580e10();
   input += synapse0x2580e50();
   input += synapse0x2580e90();
   input += synapse0x2580ed0();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2580540() {
   double input = input0x2580540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2580f10() {
   double input = 0.84963;
   input += synapse0x2581250();
   input += synapse0x2581290();
   input += synapse0x25812d0();
   input += synapse0x2581310();
   input += synapse0x2581350();
   input += synapse0x2581390();
   input += synapse0x25813d0();
   input += synapse0x2581410();
   input += synapse0x2581450();
   input += synapse0x2581490();
   input += synapse0x25814d0();
   input += synapse0x2581510();
   input += synapse0x2581550();
   input += synapse0x2581590();
   input += synapse0x25815d0();
   input += synapse0x2581610();
   input += synapse0x25810a0();
   input += synapse0x25810e0();
   input += synapse0x2581760();
   input += synapse0x25817a0();
   input += synapse0x25817e0();
   input += synapse0x2581820();
   input += synapse0x2581860();
   input += synapse0x25818a0();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2580f10() {
   double input = input0x2580f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x25818e0() {
   double input = -1.17073;
   input += synapse0x2581c20();
   input += synapse0x2581c60();
   input += synapse0x2581ca0();
   input += synapse0x2581ce0();
   input += synapse0x2581d20();
   input += synapse0x2581d60();
   input += synapse0x2581da0();
   input += synapse0x2581de0();
   input += synapse0x2581e20();
   input += synapse0x2581e60();
   input += synapse0x2581ea0();
   input += synapse0x2581ee0();
   input += synapse0x2581f20();
   input += synapse0x2581f60();
   input += synapse0x2581fa0();
   input += synapse0x2581fe0();
   input += synapse0x2581a70();
   input += synapse0x2581ab0();
   input += synapse0x2582130();
   input += synapse0x2582170();
   input += synapse0x25821b0();
   input += synapse0x25821f0();
   input += synapse0x2582230();
   input += synapse0x2582270();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x25818e0() {
   double input = input0x25818e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x25822b0() {
   double input = 0.575613;
   input += synapse0x25825f0();
   input += synapse0x2582630();
   input += synapse0x2582670();
   input += synapse0x25826b0();
   input += synapse0x25826f0();
   input += synapse0x2582730();
   input += synapse0x2582770();
   input += synapse0x25827b0();
   input += synapse0x25827f0();
   input += synapse0x2582830();
   input += synapse0x2582870();
   input += synapse0x25828b0();
   input += synapse0x25828f0();
   input += synapse0x2582930();
   input += synapse0x2582970();
   input += synapse0x25829b0();
   input += synapse0x2582440();
   input += synapse0x2582480();
   input += synapse0x2582b00();
   input += synapse0x2582b40();
   input += synapse0x2582b80();
   input += synapse0x2582bc0();
   input += synapse0x2582c00();
   input += synapse0x2582c40();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x25822b0() {
   double input = input0x25822b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2582c80() {
   double input = 1.34796;
   input += synapse0x2582fc0();
   input += synapse0x2583000();
   input += synapse0x2583040();
   input += synapse0x2583080();
   input += synapse0x25830c0();
   input += synapse0x2583100();
   input += synapse0x2583140();
   input += synapse0x2583180();
   input += synapse0x25831c0();
   input += synapse0x2583200();
   input += synapse0x2583240();
   input += synapse0x2583280();
   input += synapse0x25832c0();
   input += synapse0x2583300();
   input += synapse0x2583340();
   input += synapse0x2583380();
   input += synapse0x2582e10();
   input += synapse0x2582e50();
   input += synapse0x25834d0();
   input += synapse0x2583510();
   input += synapse0x2583550();
   input += synapse0x2583590();
   input += synapse0x25835d0();
   input += synapse0x2583610();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2582c80() {
   double input = input0x2582c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2583650() {
   double input = 0.09672;
   input += synapse0x2583990();
   input += synapse0x25839d0();
   input += synapse0x2583a10();
   input += synapse0x2583a50();
   input += synapse0x2583a90();
   input += synapse0x2583ad0();
   input += synapse0x2583b10();
   input += synapse0x2583b50();
   input += synapse0x2583b90();
   input += synapse0x2583bd0();
   input += synapse0x2583c10();
   input += synapse0x2583c50();
   input += synapse0x2583c90();
   input += synapse0x2583cd0();
   input += synapse0x2583d10();
   input += synapse0x2583d50();
   input += synapse0x25837e0();
   input += synapse0x2583820();
   input += synapse0x2583ea0();
   input += synapse0x2583ee0();
   input += synapse0x2583f20();
   input += synapse0x2583f60();
   input += synapse0x2583fa0();
   input += synapse0x2583fe0();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2583650() {
   double input = input0x2583650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2584020() {
   double input = -0.476582;
   input += synapse0x2584360();
   input += synapse0x2578930();
   input += synapse0x2578970();
   input += synapse0x25789b0();
   input += synapse0x2578c00();
   input += synapse0x2578c40();
   input += synapse0x2578c80();
   input += synapse0x2578ed0();
   input += synapse0x2578f10();
   input += synapse0x2579160();
   input += synapse0x25791a0();
   input += synapse0x25791e0();
   input += synapse0x2579430();
   input += synapse0x2579470();
   input += synapse0x25796c0();
   input += synapse0x2579700();
   input += synapse0x25841b0();
   input += synapse0x25841f0();
   input += synapse0x2579850();
   input += synapse0x2579d60();
   input += synapse0x2579da0();
   input += synapse0x2579de0();
   input += synapse0x257a030();
   input += synapse0x257a070();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2584020() {
   double input = input0x2584020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x257a0b0() {
   double input = -1.44341;
   input += synapse0x2579920();
   input += synapse0x2579960();
   input += synapse0x25799a0();
   input += synapse0x25799e0();
   input += synapse0x257a360();
   input += synapse0x25866b0();
   input += synapse0x25866f0();
   input += synapse0x2586730();
   input += synapse0x2586770();
   input += synapse0x25867b0();
   input += synapse0x25867f0();
   input += synapse0x2586830();
   input += synapse0x2586870();
   input += synapse0x25868b0();
   input += synapse0x25868f0();
   input += synapse0x2586930();
   input += synapse0x257a240();
   input += synapse0x257a280();
   input += synapse0x2586a80();
   input += synapse0x2586ac0();
   input += synapse0x2586b00();
   input += synapse0x2586b40();
   input += synapse0x2586b80();
   input += synapse0x2586bc0();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x257a0b0() {
   double input = input0x257a0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2586c00() {
   double input = 1.48364;
   input += synapse0x2586f40();
   input += synapse0x2586f80();
   input += synapse0x2586fc0();
   input += synapse0x2587000();
   input += synapse0x2587040();
   input += synapse0x2587080();
   input += synapse0x25870c0();
   input += synapse0x2587100();
   input += synapse0x2587140();
   input += synapse0x2587180();
   input += synapse0x25871c0();
   input += synapse0x2587200();
   input += synapse0x2587240();
   input += synapse0x2587280();
   input += synapse0x25872c0();
   input += synapse0x2587300();
   input += synapse0x2586d90();
   input += synapse0x2586dd0();
   input += synapse0x2587450();
   input += synapse0x2587490();
   input += synapse0x25874d0();
   input += synapse0x2587510();
   input += synapse0x2587550();
   input += synapse0x2587590();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2586c00() {
   double input = input0x2586c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x25875d0() {
   double input = 1.22685;
   input += synapse0x2587910();
   input += synapse0x2587950();
   input += synapse0x2587990();
   input += synapse0x25879d0();
   input += synapse0x2587a10();
   input += synapse0x2587a50();
   input += synapse0x2587a90();
   input += synapse0x2587ad0();
   input += synapse0x2587b10();
   input += synapse0x2587b50();
   input += synapse0x2587b90();
   input += synapse0x2587bd0();
   input += synapse0x2587c10();
   input += synapse0x2587c50();
   input += synapse0x2587c90();
   input += synapse0x2587cd0();
   input += synapse0x2587760();
   input += synapse0x25877a0();
   input += synapse0x2587e20();
   input += synapse0x2587e60();
   input += synapse0x2587ea0();
   input += synapse0x2587ee0();
   input += synapse0x2587f20();
   input += synapse0x2587f60();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x25875d0() {
   double input = input0x25875d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2587fa0() {
   double input = 1.70471;
   input += synapse0x25882e0();
   input += synapse0x2588320();
   input += synapse0x2588360();
   input += synapse0x25883a0();
   input += synapse0x25883e0();
   input += synapse0x2588420();
   input += synapse0x2588460();
   input += synapse0x25884a0();
   input += synapse0x25884e0();
   input += synapse0x2588520();
   input += synapse0x2588560();
   input += synapse0x25885a0();
   input += synapse0x25885e0();
   input += synapse0x2588620();
   input += synapse0x2588660();
   input += synapse0x25886a0();
   input += synapse0x2588130();
   input += synapse0x2588170();
   input += synapse0x25887f0();
   input += synapse0x2588830();
   input += synapse0x2588870();
   input += synapse0x25888b0();
   input += synapse0x25888f0();
   input += synapse0x2588930();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2587fa0() {
   double input = input0x2587fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2588970() {
   double input = -9.08687;
   input += synapse0x2588cb0();
   input += synapse0x2588cf0();
   input += synapse0x2588d30();
   input += synapse0x2588d70();
   input += synapse0x2588db0();
   input += synapse0x2588df0();
   input += synapse0x2588e30();
   input += synapse0x2588e70();
   input += synapse0x2588eb0();
   input += synapse0x2588ef0();
   input += synapse0x2588f30();
   input += synapse0x2588f70();
   input += synapse0x2588fb0();
   input += synapse0x2588ff0();
   input += synapse0x2589030();
   input += synapse0x2589070();
   input += synapse0x2588b00();
   input += synapse0x2588b40();
   input += synapse0x25891c0();
   input += synapse0x2589200();
   input += synapse0x2589240();
   input += synapse0x2589280();
   input += synapse0x25892c0();
   input += synapse0x2589300();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2588970() {
   double input = input0x2588970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2589340() {
   double input = -1.66578;
   input += synapse0x2589680();
   input += synapse0x25896c0();
   input += synapse0x2589700();
   input += synapse0x2589740();
   input += synapse0x2589780();
   input += synapse0x25897c0();
   input += synapse0x2589800();
   input += synapse0x2589840();
   input += synapse0x2589880();
   input += synapse0x25898c0();
   input += synapse0x2589900();
   input += synapse0x2589940();
   input += synapse0x2589980();
   input += synapse0x25899c0();
   input += synapse0x2589a00();
   input += synapse0x2589a40();
   input += synapse0x25894d0();
   input += synapse0x2589510();
   input += synapse0x2589b90();
   input += synapse0x2589bd0();
   input += synapse0x2589c10();
   input += synapse0x2589c50();
   input += synapse0x2589c90();
   input += synapse0x2589cd0();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2589340() {
   double input = input0x2589340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2589d10() {
   double input = 0.982651;
   input += synapse0x258a050();
   input += synapse0x258a090();
   input += synapse0x258a0d0();
   input += synapse0x258a110();
   input += synapse0x258a150();
   input += synapse0x258a190();
   input += synapse0x258a1d0();
   input += synapse0x258a210();
   input += synapse0x258a250();
   input += synapse0x258a290();
   input += synapse0x258a2d0();
   input += synapse0x258a310();
   input += synapse0x258a350();
   input += synapse0x258a390();
   input += synapse0x258a3d0();
   input += synapse0x258a410();
   input += synapse0x2589ea0();
   input += synapse0x2589ee0();
   input += synapse0x258a560();
   input += synapse0x258a5a0();
   input += synapse0x258a5e0();
   input += synapse0x258a620();
   input += synapse0x258a660();
   input += synapse0x258a6a0();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2589d10() {
   double input = input0x2589d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x258a6e0() {
   double input = 8.60688;
   input += synapse0x258aa20();
   input += synapse0x258aa60();
   input += synapse0x258aaa0();
   input += synapse0x258aae0();
   input += synapse0x258ab20();
   input += synapse0x258ab60();
   input += synapse0x258aba0();
   input += synapse0x258abe0();
   input += synapse0x258ac20();
   input += synapse0x258ac60();
   input += synapse0x258aca0();
   input += synapse0x258ace0();
   input += synapse0x258ad20();
   input += synapse0x258ad60();
   input += synapse0x258ada0();
   input += synapse0x258ade0();
   input += synapse0x258a870();
   input += synapse0x258a8b0();
   input += synapse0x258af30();
   input += synapse0x258af70();
   input += synapse0x258afb0();
   input += synapse0x258aff0();
   input += synapse0x258b030();
   input += synapse0x258b070();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x258a6e0() {
   double input = input0x258a6e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x258b0b0() {
   double input = 0.592574;
   input += synapse0x2573b20();
   input += synapse0x2573b60();
   input += synapse0x2573ba0();
   input += synapse0x2573be0();
   input += synapse0x2573c20();
   input += synapse0x2573c60();
   input += synapse0x2573ca0();
   input += synapse0x2573ce0();
   input += synapse0x258b800();
   input += synapse0x258b840();
   input += synapse0x258b880();
   input += synapse0x258b8c0();
   input += synapse0x258b900();
   input += synapse0x258b940();
   input += synapse0x258b980();
   input += synapse0x258b9c0();
   input += synapse0x258b240();
   input += synapse0x258b280();
   input += synapse0x258bb10();
   input += synapse0x258bb50();
   input += synapse0x258bb90();
   input += synapse0x258bbd0();
   input += synapse0x258bc10();
   input += synapse0x258bc50();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x258b0b0() {
   double input = input0x258b0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x258bc90() {
   double input = 0.918016;
   input += synapse0x258bfd0();
   input += synapse0x258c010();
   input += synapse0x258c050();
   input += synapse0x258c090();
   input += synapse0x258c0d0();
   input += synapse0x258c110();
   input += synapse0x258c150();
   input += synapse0x258c190();
   input += synapse0x258c1d0();
   input += synapse0x258c210();
   input += synapse0x258c250();
   input += synapse0x258c290();
   input += synapse0x258c2d0();
   input += synapse0x258c310();
   input += synapse0x258c350();
   input += synapse0x258c390();
   input += synapse0x258be20();
   input += synapse0x258be60();
   input += synapse0x258c4e0();
   input += synapse0x258c520();
   input += synapse0x258c560();
   input += synapse0x258c5a0();
   input += synapse0x258c5e0();
   input += synapse0x258c620();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x258bc90() {
   double input = input0x258bc90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x258c660() {
   double input = 0.42829;
   input += synapse0x258c9a0();
   input += synapse0x258c9e0();
   input += synapse0x258ca20();
   input += synapse0x258ca60();
   input += synapse0x258caa0();
   input += synapse0x258cae0();
   input += synapse0x258cb20();
   input += synapse0x258cb60();
   input += synapse0x258cba0();
   input += synapse0x258cbe0();
   input += synapse0x258cc20();
   input += synapse0x258cc60();
   input += synapse0x258cca0();
   input += synapse0x258cce0();
   input += synapse0x258cd20();
   input += synapse0x258cd60();
   input += synapse0x258c7f0();
   input += synapse0x258c830();
   input += synapse0x257d360();
   input += synapse0x257d3a0();
   input += synapse0x257d3e0();
   input += synapse0x257d420();
   input += synapse0x257d460();
   input += synapse0x257d4a0();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x258c660() {
   double input = input0x258c660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x257d4e0() {
   double input = -2.45013;
   input += synapse0x257d820();
   input += synapse0x257d860();
   input += synapse0x257d8a0();
   input += synapse0x257d8e0();
   input += synapse0x257d920();
   input += synapse0x257d960();
   input += synapse0x257d9a0();
   input += synapse0x257d9e0();
   input += synapse0x257da20();
   input += synapse0x257da60();
   input += synapse0x257daa0();
   input += synapse0x257dae0();
   input += synapse0x257db20();
   input += synapse0x257db60();
   input += synapse0x257dba0();
   input += synapse0x257dbe0();
   input += synapse0x257d670();
   input += synapse0x257d6b0();
   input += synapse0x257dd30();
   input += synapse0x257dd70();
   input += synapse0x257ddb0();
   input += synapse0x257ddf0();
   input += synapse0x257de30();
   input += synapse0x257de70();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x257d4e0() {
   double input = input0x257d4e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x257deb0() {
   double input = -1.38354;
   input += synapse0x257e1f0();
   input += synapse0x257e230();
   input += synapse0x257e270();
   input += synapse0x257e2b0();
   input += synapse0x257e2f0();
   input += synapse0x257e330();
   input += synapse0x257e370();
   input += synapse0x257e3b0();
   input += synapse0x257e3f0();
   input += synapse0x257e430();
   input += synapse0x257e470();
   input += synapse0x257e4b0();
   input += synapse0x257e4f0();
   input += synapse0x257e530();
   input += synapse0x257e570();
   input += synapse0x257e5b0();
   input += synapse0x257e040();
   input += synapse0x257e080();
   input += synapse0x257e700();
   input += synapse0x257e740();
   input += synapse0x257e780();
   input += synapse0x257e7c0();
   input += synapse0x257e800();
   input += synapse0x257e840();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x257deb0() {
   double input = input0x257deb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x257e880() {
   double input = 0.952298;
   input += synapse0x257ebc0();
   input += synapse0x257ec00();
   input += synapse0x257ec40();
   input += synapse0x257ec80();
   input += synapse0x257ecc0();
   input += synapse0x257ed00();
   input += synapse0x257ed40();
   input += synapse0x257ed80();
   input += synapse0x257edc0();
   input += synapse0x257ee00();
   input += synapse0x257ee40();
   input += synapse0x257ee80();
   input += synapse0x257eec0();
   input += synapse0x257ef00();
   input += synapse0x257ef40();
   input += synapse0x257ef80();
   input += synapse0x257ea10();
   input += synapse0x257ea50();
   input += synapse0x257f0d0();
   input += synapse0x257f110();
   input += synapse0x257f150();
   input += synapse0x257f190();
   input += synapse0x257f1d0();
   input += synapse0x257f210();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x257e880() {
   double input = input0x257e880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2590ec0() {
   double input = -0.460346;
   input += synapse0x25910e0();
   input += synapse0x2591120();
   input += synapse0x2591160();
   input += synapse0x25911a0();
   input += synapse0x25911e0();
   input += synapse0x2591220();
   input += synapse0x2591260();
   input += synapse0x25912a0();
   input += synapse0x25912e0();
   input += synapse0x2591320();
   input += synapse0x2591360();
   input += synapse0x25913a0();
   input += synapse0x25913e0();
   input += synapse0x2591420();
   input += synapse0x2591460();
   input += synapse0x25914a0();
   input += synapse0x257f250();
   input += synapse0x257f290();
   input += synapse0x25915f0();
   input += synapse0x2591630();
   input += synapse0x2591670();
   input += synapse0x25916b0();
   input += synapse0x25916f0();
   input += synapse0x2591730();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2590ec0() {
   double input = input0x2590ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2591770() {
   double input = -8.71486;
   input += synapse0x2591ab0();
   input += synapse0x2591af0();
   input += synapse0x2591b30();
   input += synapse0x2591b70();
   input += synapse0x2591bb0();
   input += synapse0x2591bf0();
   input += synapse0x2591c30();
   input += synapse0x2591c70();
   input += synapse0x2591cb0();
   input += synapse0x2591cf0();
   input += synapse0x2591d30();
   input += synapse0x2591d70();
   input += synapse0x2591db0();
   input += synapse0x2591df0();
   input += synapse0x2591e30();
   input += synapse0x2591e70();
   input += synapse0x2591900();
   input += synapse0x2591940();
   input += synapse0x2591fc0();
   input += synapse0x2592000();
   input += synapse0x2592040();
   input += synapse0x2592080();
   input += synapse0x25920c0();
   input += synapse0x2592100();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2591770() {
   double input = input0x2591770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2592140() {
   double input = -2.13582;
   input += synapse0x2592480();
   input += synapse0x25924c0();
   input += synapse0x2592500();
   input += synapse0x2592540();
   input += synapse0x2592580();
   input += synapse0x25925c0();
   input += synapse0x2592600();
   input += synapse0x2592640();
   input += synapse0x2592680();
   input += synapse0x25926c0();
   input += synapse0x2592700();
   input += synapse0x2592740();
   input += synapse0x2592780();
   input += synapse0x25927c0();
   input += synapse0x2592800();
   input += synapse0x2592840();
   input += synapse0x25922d0();
   input += synapse0x2592310();
   input += synapse0x2592990();
   input += synapse0x25929d0();
   input += synapse0x2592a10();
   input += synapse0x2592a50();
   input += synapse0x2592a90();
   input += synapse0x2592ad0();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2592140() {
   double input = input0x2592140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2592b10() {
   double input = -0.565251;
   input += synapse0x2592e50();
   input += synapse0x2592e90();
   input += synapse0x2592ed0();
   input += synapse0x2592f10();
   input += synapse0x2592f50();
   input += synapse0x2592f90();
   input += synapse0x2592fd0();
   input += synapse0x2593010();
   input += synapse0x2593050();
   input += synapse0x2593090();
   input += synapse0x25930d0();
   input += synapse0x2593110();
   input += synapse0x2593150();
   input += synapse0x2593190();
   input += synapse0x25931d0();
   input += synapse0x2593210();
   input += synapse0x2592ca0();
   input += synapse0x2592ce0();
   input += synapse0x2593360();
   input += synapse0x25933a0();
   input += synapse0x25933e0();
   input += synapse0x2593420();
   input += synapse0x2593460();
   input += synapse0x25934a0();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2592b10() {
   double input = input0x2592b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x2599d10() {
   double input = 1.17121;
   input += synapse0x2333310();
   input += synapse0x2333350();
   input += synapse0x256fe50();
   input += synapse0x256fe90();
   input += synapse0x2571920();
   input += synapse0x2571960();
   input += synapse0x25726f0();
   input += synapse0x2572730();
   input += synapse0x25730c0();
   input += synapse0x2573100();
   input += synapse0x2573a90();
   input += synapse0x2573ad0();
   input += synapse0x2574570();
   input += synapse0x25745b0();
   input += synapse0x2574f40();
   input += synapse0x2574f80();
   input += synapse0x2572020();
   input += synapse0x2572060();
   input += synapse0x2576af0();
   input += synapse0x2576b30();
   input += synapse0x25774c0();
   input += synapse0x2577500();
   input += synapse0x2577e90();
   input += synapse0x2577ed0();
   input += synapse0x2578860();
   input += synapse0x25788a0();
   input += synapse0x256b8f0();
   input += synapse0x256b930();
   input += synapse0x257a950();
   input += synapse0x257a990();
   input += synapse0x257b320();
   input += synapse0x257b360();
   input += synapse0x257bcf0();
   input += synapse0x257bd30();
   input += synapse0x257c6c0();
   input += synapse0x257c700();
   input += synapse0x257d090();
   input += synapse0x257d0d0();
   input += synapse0x2575be0();
   input += synapse0x2575c20();
   input += synapse0x257f490();
   input += synapse0x257f4d0();
   input += synapse0x257fe20();
   input += synapse0x257fe60();
   input += synapse0x25807f0();
   input += synapse0x2580830();
   input += synapse0x25811c0();
   input += synapse0x2581200();
   input += synapse0x2581b90();
   input += synapse0x2581bd0();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x2599d10() {
   double input = input0x2599d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x259a0b0() {
   double input = -0.468049;
   input += synapse0x25842d0();
   input += synapse0x2584310();
   input += synapse0x2579890();
   input += synapse0x25798d0();
   input += synapse0x2586eb0();
   input += synapse0x2586ef0();
   input += synapse0x2587880();
   input += synapse0x25878c0();
   input += synapse0x2588250();
   input += synapse0x2588290();
   input += synapse0x2588c20();
   input += synapse0x2588c60();
   input += synapse0x25895f0();
   input += synapse0x2589630();
   input += synapse0x2589fc0();
   input += synapse0x258a000();
   input += synapse0x258a990();
   input += synapse0x258a9d0();
   input += synapse0x258b360();
   input += synapse0x258b3a0();
   input += synapse0x258bf40();
   input += synapse0x258bf80();
   input += synapse0x258c910();
   input += synapse0x258c950();
   input += synapse0x257d790();
   input += synapse0x257d7d0();
   input += synapse0x257e160();
   input += synapse0x257e1a0();
   input += synapse0x257eb30();
   input += synapse0x257eb70();
   input += synapse0x2591050();
   input += synapse0x2591090();
   input += synapse0x2591a20();
   input += synapse0x2591a60();
   input += synapse0x25923f0();
   input += synapse0x2592430();
   input += synapse0x2592dc0();
   input += synapse0x2592e00();
   input += synapse0x256dd50();
   input += synapse0x256dd90();
   input += synapse0x2582560();
   input += synapse0x25825a0();
   input += synapse0x25934e0();
   input += synapse0x2593520();
   input += synapse0x2593560();
   input += synapse0x25935a0();
   input += synapse0x259a450();
   input += synapse0x259a490();
   input += synapse0x259a4d0();
   input += synapse0x259a510();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x259a0b0() {
   double input = input0x259a0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x259a550() {
   double input = -0.738757;
   input += synapse0x259a890();
   input += synapse0x259a8d0();
   input += synapse0x259a910();
   input += synapse0x259a950();
   input += synapse0x259a990();
   input += synapse0x259a9d0();
   input += synapse0x259aa10();
   input += synapse0x259aa50();
   input += synapse0x259aa90();
   input += synapse0x259aad0();
   input += synapse0x259ab10();
   input += synapse0x259ab50();
   input += synapse0x259ab90();
   input += synapse0x259abd0();
   input += synapse0x259ac10();
   input += synapse0x259ac50();
   input += synapse0x259a6e0();
   input += synapse0x259a720();
   input += synapse0x259ada0();
   input += synapse0x259ade0();
   input += synapse0x259ae20();
   input += synapse0x259ae60();
   input += synapse0x259aea0();
   input += synapse0x259aee0();
   input += synapse0x259af20();
   input += synapse0x259af60();
   input += synapse0x259afa0();
   input += synapse0x259afe0();
   input += synapse0x259b020();
   input += synapse0x259b060();
   input += synapse0x259b0a0();
   input += synapse0x259b0e0();
   input += synapse0x259ac90();
   input += synapse0x259acd0();
   input += synapse0x259ad10();
   input += synapse0x259ad50();
   input += synapse0x259b330();
   input += synapse0x259b370();
   input += synapse0x259b3b0();
   input += synapse0x259b3f0();
   input += synapse0x259b430();
   input += synapse0x259b470();
   input += synapse0x259b4b0();
   input += synapse0x259b4f0();
   input += synapse0x259b530();
   input += synapse0x259b570();
   input += synapse0x259b5b0();
   input += synapse0x259b5f0();
   input += synapse0x259b630();
   input += synapse0x259b670();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x259a550() {
   double input = input0x259a550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x259b6b0() {
   double input = -0.509762;
   input += synapse0x259b9f0();
   input += synapse0x259ba30();
   input += synapse0x259ba70();
   input += synapse0x259bab0();
   input += synapse0x259baf0();
   input += synapse0x259bb30();
   input += synapse0x259bb70();
   input += synapse0x259bbb0();
   input += synapse0x259bbf0();
   input += synapse0x259bc30();
   input += synapse0x259bc70();
   input += synapse0x259bcb0();
   input += synapse0x259bcf0();
   input += synapse0x259bd30();
   input += synapse0x259bd70();
   input += synapse0x259bdb0();
   input += synapse0x259b840();
   input += synapse0x259b880();
   input += synapse0x259bf00();
   input += synapse0x259bf40();
   input += synapse0x259bf80();
   input += synapse0x259bfc0();
   input += synapse0x259c000();
   input += synapse0x259c040();
   input += synapse0x259c080();
   input += synapse0x259c0c0();
   input += synapse0x259c100();
   input += synapse0x259c140();
   input += synapse0x259c180();
   input += synapse0x259c1c0();
   input += synapse0x259c200();
   input += synapse0x259c240();
   input += synapse0x259bdf0();
   input += synapse0x259be30();
   input += synapse0x259be70();
   input += synapse0x259beb0();
   input += synapse0x259c490();
   input += synapse0x259c4d0();
   input += synapse0x259c510();
   input += synapse0x259c550();
   input += synapse0x259c590();
   input += synapse0x259c5d0();
   input += synapse0x259c610();
   input += synapse0x259c650();
   input += synapse0x259c690();
   input += synapse0x259c6d0();
   input += synapse0x259c710();
   input += synapse0x259c750();
   input += synapse0x259c790();
   input += synapse0x259c7d0();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x259b6b0() {
   double input = input0x259b6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x259c810() {
   double input = -0.396946;
   input += synapse0x259cb50();
   input += synapse0x259cb90();
   input += synapse0x259cbd0();
   input += synapse0x259cc10();
   input += synapse0x259cc50();
   input += synapse0x259cc90();
   input += synapse0x259ccd0();
   input += synapse0x259cd10();
   input += synapse0x259cd50();
   input += synapse0x259cd90();
   input += synapse0x259cdd0();
   input += synapse0x259ce10();
   input += synapse0x259ce50();
   input += synapse0x259ce90();
   input += synapse0x259ced0();
   input += synapse0x259cf10();
   input += synapse0x259c9a0();
   input += synapse0x259c9e0();
   input += synapse0x259d060();
   input += synapse0x259d0a0();
   input += synapse0x259d0e0();
   input += synapse0x259d120();
   input += synapse0x259d160();
   input += synapse0x259d1a0();
   input += synapse0x259d1e0();
   input += synapse0x259d220();
   input += synapse0x259d260();
   input += synapse0x259d2a0();
   input += synapse0x259d2e0();
   input += synapse0x259d320();
   input += synapse0x259d360();
   input += synapse0x259d3a0();
   input += synapse0x259cf50();
   input += synapse0x259cf90();
   input += synapse0x259cfd0();
   input += synapse0x259d010();
   input += synapse0x259d5f0();
   input += synapse0x259d630();
   input += synapse0x259d670();
   input += synapse0x259d6b0();
   input += synapse0x259d6f0();
   input += synapse0x259d730();
   input += synapse0x259d770();
   input += synapse0x259d7b0();
   input += synapse0x259d7f0();
   input += synapse0x259d830();
   input += synapse0x259d870();
   input += synapse0x259d8b0();
   input += synapse0x259d8f0();
   input += synapse0x259d930();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x259c810() {
   double input = input0x259c810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dR::input0x259d970() {
   double input = 11.8868;
   input += synapse0x259db90();
   input += synapse0x259dbd0();
   input += synapse0x259dc10();
   input += synapse0x259dc50();
   input += synapse0x259dc90();
   return input;
}

double NNfunction_ns_chi03_dR::neuron0x259d970() {
   double input = input0x259d970();
   return (input * 1)+0;
}

double NNfunction_ns_chi03_dR::synapse0x256dde0() {
   return (neuron0x25689e0()*0.0579295);
}

double NNfunction_ns_chi03_dR::synapse0x256de20() {
   return (neuron0x2568c90()*0.482817);
}

double NNfunction_ns_chi03_dR::synapse0x256de60() {
   return (neuron0x2568fd0()*1.49974);
}

double NNfunction_ns_chi03_dR::synapse0x256dea0() {
   return (neuron0x2569310()*1.08367);
}

double NNfunction_ns_chi03_dR::synapse0x256dee0() {
   return (neuron0x2569650()*-0.611171);
}

double NNfunction_ns_chi03_dR::synapse0x256df20() {
   return (neuron0x2569990()*0.741428);
}

double NNfunction_ns_chi03_dR::synapse0x256df60() {
   return (neuron0x2569cd0()*0.481967);
}

double NNfunction_ns_chi03_dR::synapse0x256dfa0() {
   return (neuron0x256a010()*0.872044);
}

double NNfunction_ns_chi03_dR::synapse0x256dfe0() {
   return (neuron0x256a350()*-0.168169);
}

double NNfunction_ns_chi03_dR::synapse0x256e020() {
   return (neuron0x256a690()*-0.0766068);
}

double NNfunction_ns_chi03_dR::synapse0x256e060() {
   return (neuron0x256a9d0()*0.466178);
}

double NNfunction_ns_chi03_dR::synapse0x256e0a0() {
   return (neuron0x256ad10()*0.313366);
}

double NNfunction_ns_chi03_dR::synapse0x256e0e0() {
   return (neuron0x256b050()*0.721643);
}

double NNfunction_ns_chi03_dR::synapse0x256e120() {
   return (neuron0x256b390()*0.807339);
}

double NNfunction_ns_chi03_dR::synapse0x256e160() {
   return (neuron0x256b6d0()*1.12805);
}

double NNfunction_ns_chi03_dR::synapse0x256e1a0() {
   return (neuron0x256ba10()*-0.498954);
}

double NNfunction_ns_chi03_dR::synapse0x256dc30() {
   return (neuron0x256bd50()*0.490893);
}

double NNfunction_ns_chi03_dR::synapse0x256dc70() {
   return (neuron0x256c2b0()*0.290946);
}

double NNfunction_ns_chi03_dR::synapse0x2324b60() {
   return (neuron0x256c5f0()*0.122311);
}

double NNfunction_ns_chi03_dR::synapse0x2324ba0() {
   return (neuron0x256c930()*0.590002);
}

double NNfunction_ns_chi03_dR::synapse0x256e1e0() {
   return (neuron0x256cc70()*0.776715);
}

double NNfunction_ns_chi03_dR::synapse0x256e220() {
   return (neuron0x256cfb0()*0.456028);
}

double NNfunction_ns_chi03_dR::synapse0x256e260() {
   return (neuron0x256d2f0()*-0.311624);
}

double NNfunction_ns_chi03_dR::synapse0x256e2a0() {
   return (neuron0x256d630()*-0.192806);
}

double NNfunction_ns_chi03_dR::synapse0x256e620() {
   return (neuron0x25689e0()*-0.281877);
}

double NNfunction_ns_chi03_dR::synapse0x256e660() {
   return (neuron0x2568c90()*1.03571);
}

double NNfunction_ns_chi03_dR::synapse0x256e6a0() {
   return (neuron0x2568fd0()*0.252455);
}

double NNfunction_ns_chi03_dR::synapse0x256e6e0() {
   return (neuron0x2569310()*1.22881);
}

double NNfunction_ns_chi03_dR::synapse0x256e720() {
   return (neuron0x2569650()*-0.825586);
}

double NNfunction_ns_chi03_dR::synapse0x256e760() {
   return (neuron0x2569990()*-0.432296);
}

double NNfunction_ns_chi03_dR::synapse0x256e7a0() {
   return (neuron0x2569cd0()*-0.447441);
}

double NNfunction_ns_chi03_dR::synapse0x256e7e0() {
   return (neuron0x256a010()*-0.48312);
}

double NNfunction_ns_chi03_dR::synapse0x256e820() {
   return (neuron0x256a350()*0.491265);
}

double NNfunction_ns_chi03_dR::synapse0x23249b0() {
   return (neuron0x256a690()*-0.506881);
}

double NNfunction_ns_chi03_dR::synapse0x23249f0() {
   return (neuron0x256a9d0()*1.27517);
}

double NNfunction_ns_chi03_dR::synapse0x2324a30() {
   return (neuron0x256ad10()*0.678415);
}

double NNfunction_ns_chi03_dR::synapse0x2324a70() {
   return (neuron0x256b050()*0.698231);
}

double NNfunction_ns_chi03_dR::synapse0x256ea70() {
   return (neuron0x256b390()*1.69967);
}

double NNfunction_ns_chi03_dR::synapse0x256eab0() {
   return (neuron0x256b6d0()*0.601008);
}

double NNfunction_ns_chi03_dR::synapse0x256eaf0() {
   return (neuron0x256ba10()*0.337845);
}

double NNfunction_ns_chi03_dR::synapse0x256e470() {
   return (neuron0x256bd50()*-0.452229);
}

double NNfunction_ns_chi03_dR::synapse0x256e4b0() {
   return (neuron0x256c2b0()*-1.06932);
}

double NNfunction_ns_chi03_dR::synapse0x256ec40() {
   return (neuron0x256c5f0()*0.448966);
}

double NNfunction_ns_chi03_dR::synapse0x256ec80() {
   return (neuron0x256c930()*0.195913);
}

double NNfunction_ns_chi03_dR::synapse0x256ecc0() {
   return (neuron0x256cc70()*-0.395066);
}

double NNfunction_ns_chi03_dR::synapse0x256ed00() {
   return (neuron0x256cfb0()*-0.635506);
}

double NNfunction_ns_chi03_dR::synapse0x256ed40() {
   return (neuron0x256d2f0()*-0.522512);
}

double NNfunction_ns_chi03_dR::synapse0x256ed80() {
   return (neuron0x256d630()*0.672397);
}

double NNfunction_ns_chi03_dR::synapse0x256f100() {
   return (neuron0x25689e0()*-0.220731);
}

double NNfunction_ns_chi03_dR::synapse0x256f140() {
   return (neuron0x2568c90()*0.0176594);
}

double NNfunction_ns_chi03_dR::synapse0x256f180() {
   return (neuron0x2568fd0()*-1.37013);
}

double NNfunction_ns_chi03_dR::synapse0x256f1c0() {
   return (neuron0x2569310()*-0.451879);
}

double NNfunction_ns_chi03_dR::synapse0x256f200() {
   return (neuron0x2569650()*0.173264);
}

double NNfunction_ns_chi03_dR::synapse0x256f240() {
   return (neuron0x2569990()*-0.205129);
}

double NNfunction_ns_chi03_dR::synapse0x256f280() {
   return (neuron0x2569cd0()*0.748779);
}

double NNfunction_ns_chi03_dR::synapse0x256f2c0() {
   return (neuron0x256a010()*-0.952914);
}

double NNfunction_ns_chi03_dR::synapse0x256f300() {
   return (neuron0x256a350()*-0.467886);
}

double NNfunction_ns_chi03_dR::synapse0x256f340() {
   return (neuron0x256a690()*0.0358178);
}

double NNfunction_ns_chi03_dR::synapse0x256f380() {
   return (neuron0x256a9d0()*0.139254);
}

double NNfunction_ns_chi03_dR::synapse0x256f3c0() {
   return (neuron0x256ad10()*0.0624193);
}

double NNfunction_ns_chi03_dR::synapse0x256f400() {
   return (neuron0x256b050()*0.91935);
}

double NNfunction_ns_chi03_dR::synapse0x256f440() {
   return (neuron0x256b390()*-0.255453);
}

double NNfunction_ns_chi03_dR::synapse0x256f480() {
   return (neuron0x256b6d0()*1.37573);
}

double NNfunction_ns_chi03_dR::synapse0x256f4c0() {
   return (neuron0x256ba10()*-0.0186223);
}

double NNfunction_ns_chi03_dR::synapse0x256ef50() {
   return (neuron0x256bd50()*-0.61374);
}

double NNfunction_ns_chi03_dR::synapse0x256ef90() {
   return (neuron0x256c2b0()*-0.31279);
}

double NNfunction_ns_chi03_dR::synapse0x2325250() {
   return (neuron0x256c5f0()*0.566031);
}

double NNfunction_ns_chi03_dR::synapse0x2332b20() {
   return (neuron0x256c930()*0.343557);
}

double NNfunction_ns_chi03_dR::synapse0x2332b60() {
   return (neuron0x256cc70()*-0.465196);
}

double NNfunction_ns_chi03_dR::synapse0x25713f0() {
   return (neuron0x256cfb0()*0.168134);
}

double NNfunction_ns_chi03_dR::synapse0x2571430() {
   return (neuron0x256d2f0()*0.682666);
}

double NNfunction_ns_chi03_dR::synapse0x2568720() {
   return (neuron0x256d630()*1.07417);
}

double NNfunction_ns_chi03_dR::synapse0x25687f0() {
   return (neuron0x25689e0()*1.35646);
}

double NNfunction_ns_chi03_dR::synapse0x23333a0() {
   return (neuron0x2568c90()*1.94677);
}

double NNfunction_ns_chi03_dR::synapse0x256e9f0() {
   return (neuron0x2568fd0()*0.0953298);
}

double NNfunction_ns_chi03_dR::synapse0x256ea30() {
   return (neuron0x2569310()*0.417349);
}

double NNfunction_ns_chi03_dR::synapse0x256f610() {
   return (neuron0x2569650()*1.03404);
}

double NNfunction_ns_chi03_dR::synapse0x256f650() {
   return (neuron0x2569990()*-0.915807);
}

double NNfunction_ns_chi03_dR::synapse0x256f690() {
   return (neuron0x2569cd0()*0.197079);
}

double NNfunction_ns_chi03_dR::synapse0x256f6d0() {
   return (neuron0x256a010()*0.374076);
}

double NNfunction_ns_chi03_dR::synapse0x256f710() {
   return (neuron0x256a350()*0.612532);
}

double NNfunction_ns_chi03_dR::synapse0x256f750() {
   return (neuron0x256a690()*-0.58696);
}

double NNfunction_ns_chi03_dR::synapse0x256f790() {
   return (neuron0x256a9d0()*-1.46832);
}

double NNfunction_ns_chi03_dR::synapse0x256f7d0() {
   return (neuron0x256ad10()*-0.288107);
}

double NNfunction_ns_chi03_dR::synapse0x256f810() {
   return (neuron0x256b050()*-0.237326);
}

double NNfunction_ns_chi03_dR::synapse0x256f850() {
   return (neuron0x256b390()*-0.28739);
}

double NNfunction_ns_chi03_dR::synapse0x256f890() {
   return (neuron0x256b6d0()*0.21628);
}

double NNfunction_ns_chi03_dR::synapse0x256f8d0() {
   return (neuron0x256ba10()*0.894091);
}

double NNfunction_ns_chi03_dR::synapse0x2568760() {
   return (neuron0x256bd50()*-0.0197147);
}

double NNfunction_ns_chi03_dR::synapse0x25687a0() {
   return (neuron0x256c2b0()*-0.15342);
}

double NNfunction_ns_chi03_dR::synapse0x256fa20() {
   return (neuron0x256c5f0()*-0.309892);
}

double NNfunction_ns_chi03_dR::synapse0x256fa60() {
   return (neuron0x256c930()*0.850703);
}

double NNfunction_ns_chi03_dR::synapse0x256faa0() {
   return (neuron0x256cc70()*-0.74631);
}

double NNfunction_ns_chi03_dR::synapse0x256fae0() {
   return (neuron0x256cfb0()*0.325461);
}

double NNfunction_ns_chi03_dR::synapse0x256fb20() {
   return (neuron0x256d2f0()*-0.287355);
}

double NNfunction_ns_chi03_dR::synapse0x256fb60() {
   return (neuron0x256d630()*-0.80589);
}

double NNfunction_ns_chi03_dR::synapse0x256fee0() {
   return (neuron0x25689e0()*0.361131);
}

double NNfunction_ns_chi03_dR::synapse0x256ff20() {
   return (neuron0x2568c90()*-0.790649);
}

double NNfunction_ns_chi03_dR::synapse0x256ff60() {
   return (neuron0x2568fd0()*1.49931);
}

double NNfunction_ns_chi03_dR::synapse0x256ffa0() {
   return (neuron0x2569310()*-1.22037);
}

double NNfunction_ns_chi03_dR::synapse0x256ffe0() {
   return (neuron0x2569650()*-0.682997);
}

double NNfunction_ns_chi03_dR::synapse0x2570020() {
   return (neuron0x2569990()*1.10561);
}

double NNfunction_ns_chi03_dR::synapse0x2570060() {
   return (neuron0x2569cd0()*-0.0716275);
}

double NNfunction_ns_chi03_dR::synapse0x25700a0() {
   return (neuron0x256a010()*0.0537223);
}

double NNfunction_ns_chi03_dR::synapse0x25700e0() {
   return (neuron0x256a350()*0.5021);
}

double NNfunction_ns_chi03_dR::synapse0x2570120() {
   return (neuron0x256a690()*-0.112102);
}

double NNfunction_ns_chi03_dR::synapse0x2570160() {
   return (neuron0x256a9d0()*-0.143661);
}

double NNfunction_ns_chi03_dR::synapse0x25701a0() {
   return (neuron0x256ad10()*0.28643);
}

double NNfunction_ns_chi03_dR::synapse0x25701e0() {
   return (neuron0x256b050()*-0.255507);
}

double NNfunction_ns_chi03_dR::synapse0x2570220() {
   return (neuron0x256b390()*0.366236);
}

double NNfunction_ns_chi03_dR::synapse0x2570260() {
   return (neuron0x256b6d0()*0.202394);
}

double NNfunction_ns_chi03_dR::synapse0x25702a0() {
   return (neuron0x256ba10()*1.21016);
}

double NNfunction_ns_chi03_dR::synapse0x25703f0() {
   return (neuron0x256bd50()*-0.429114);
}

double NNfunction_ns_chi03_dR::synapse0x256fd30() {
   return (neuron0x256c2b0()*0.276397);
}

double NNfunction_ns_chi03_dR::synapse0x256fd70() {
   return (neuron0x256c5f0()*-0.190008);
}

double NNfunction_ns_chi03_dR::synapse0x2571530() {
   return (neuron0x256c930()*-0.495971);
}

double NNfunction_ns_chi03_dR::synapse0x2571570() {
   return (neuron0x256cc70()*0.240058);
}

double NNfunction_ns_chi03_dR::synapse0x25715b0() {
   return (neuron0x256cfb0()*-0.343355);
}

double NNfunction_ns_chi03_dR::synapse0x25715f0() {
   return (neuron0x256d2f0()*-0.208393);
}

double NNfunction_ns_chi03_dR::synapse0x2571630() {
   return (neuron0x256d630()*0.422161);
}

double NNfunction_ns_chi03_dR::synapse0x25719b0() {
   return (neuron0x25689e0()*0.00573727);
}

double NNfunction_ns_chi03_dR::synapse0x25719f0() {
   return (neuron0x2568c90()*1.25122);
}

double NNfunction_ns_chi03_dR::synapse0x2571a30() {
   return (neuron0x2568fd0()*0.422395);
}

double NNfunction_ns_chi03_dR::synapse0x2571a70() {
   return (neuron0x2569310()*0.0167477);
}

double NNfunction_ns_chi03_dR::synapse0x2571ab0() {
   return (neuron0x2569650()*0.00574723);
}

double NNfunction_ns_chi03_dR::synapse0x2571af0() {
   return (neuron0x2569990()*-0.00256497);
}

double NNfunction_ns_chi03_dR::synapse0x2571b30() {
   return (neuron0x2569cd0()*0.0137895);
}

double NNfunction_ns_chi03_dR::synapse0x2571b70() {
   return (neuron0x256a010()*0.0164087);
}

double NNfunction_ns_chi03_dR::synapse0x2571bb0() {
   return (neuron0x256a350()*0.030805);
}

double NNfunction_ns_chi03_dR::synapse0x2332e70() {
   return (neuron0x256a690()*0.0129964);
}

double NNfunction_ns_chi03_dR::synapse0x2332eb0() {
   return (neuron0x256a9d0()*-0.0147062);
}

double NNfunction_ns_chi03_dR::synapse0x2332ef0() {
   return (neuron0x256ad10()*-0.0040505);
}

double NNfunction_ns_chi03_dR::synapse0x2332f30() {
   return (neuron0x256b050()*-0.00567801);
}

double NNfunction_ns_chi03_dR::synapse0x2332f70() {
   return (neuron0x256b390()*-0.00440323);
}

double NNfunction_ns_chi03_dR::synapse0x2332fb0() {
   return (neuron0x256b6d0()*-0.00246335);
}

double NNfunction_ns_chi03_dR::synapse0x2332ff0() {
   return (neuron0x256ba10()*-0.0136692);
}

double NNfunction_ns_chi03_dR::synapse0x2571800() {
   return (neuron0x256bd50()*0.0103432);
}

double NNfunction_ns_chi03_dR::synapse0x2571840() {
   return (neuron0x256c2b0()*0.236023);
}

double NNfunction_ns_chi03_dR::synapse0x2333140() {
   return (neuron0x256c5f0()*-0.00678179);
}

double NNfunction_ns_chi03_dR::synapse0x2333180() {
   return (neuron0x256c930()*-0.00851242);
}

double NNfunction_ns_chi03_dR::synapse0x23331c0() {
   return (neuron0x256cc70()*0.0105657);
}

double NNfunction_ns_chi03_dR::synapse0x2333200() {
   return (neuron0x256cfb0()*0.000296837);
}

double NNfunction_ns_chi03_dR::synapse0x2333240() {
   return (neuron0x256d2f0()*-0.00187379);
}

double NNfunction_ns_chi03_dR::synapse0x2572400() {
   return (neuron0x256d630()*-0.469847);
}

double NNfunction_ns_chi03_dR::synapse0x2572780() {
   return (neuron0x25689e0()*0.105845);
}

double NNfunction_ns_chi03_dR::synapse0x25727c0() {
   return (neuron0x2568c90()*-1.47429);
}

double NNfunction_ns_chi03_dR::synapse0x2572800() {
   return (neuron0x2568fd0()*0.789686);
}

double NNfunction_ns_chi03_dR::synapse0x2572840() {
   return (neuron0x2569310()*0.0236559);
}

double NNfunction_ns_chi03_dR::synapse0x2572880() {
   return (neuron0x2569650()*-0.00259858);
}

double NNfunction_ns_chi03_dR::synapse0x25728c0() {
   return (neuron0x2569990()*-0.179363);
}

double NNfunction_ns_chi03_dR::synapse0x2572900() {
   return (neuron0x2569cd0()*-0.0790508);
}

double NNfunction_ns_chi03_dR::synapse0x2572940() {
   return (neuron0x256a010()*-0.0389185);
}

double NNfunction_ns_chi03_dR::synapse0x2572980() {
   return (neuron0x256a350()*-0.0776798);
}

double NNfunction_ns_chi03_dR::synapse0x25729c0() {
   return (neuron0x256a690()*0.0106346);
}

double NNfunction_ns_chi03_dR::synapse0x2572a00() {
   return (neuron0x256a9d0()*-0.0128665);
}

double NNfunction_ns_chi03_dR::synapse0x2572a40() {
   return (neuron0x256ad10()*0.0211895);
}

double NNfunction_ns_chi03_dR::synapse0x2572a80() {
   return (neuron0x256b050()*-0.035395);
}

double NNfunction_ns_chi03_dR::synapse0x2572ac0() {
   return (neuron0x256b390()*0.0125269);
}

double NNfunction_ns_chi03_dR::synapse0x2572b00() {
   return (neuron0x256b6d0()*0.0033914);
}

double NNfunction_ns_chi03_dR::synapse0x2572b40() {
   return (neuron0x256ba10()*-0.0340064);
}

double NNfunction_ns_chi03_dR::synapse0x25725d0() {
   return (neuron0x256bd50()*0.0115891);
}

double NNfunction_ns_chi03_dR::synapse0x2572610() {
   return (neuron0x256c2b0()*-1.61879);
}

double NNfunction_ns_chi03_dR::synapse0x2572c90() {
   return (neuron0x256c5f0()*0.121267);
}

double NNfunction_ns_chi03_dR::synapse0x2572cd0() {
   return (neuron0x256c930()*0.0450958);
}

double NNfunction_ns_chi03_dR::synapse0x2572d10() {
   return (neuron0x256cc70()*-0.120641);
}

double NNfunction_ns_chi03_dR::synapse0x2572d50() {
   return (neuron0x256cfb0()*-0.0879363);
}

double NNfunction_ns_chi03_dR::synapse0x2572d90() {
   return (neuron0x256d2f0()*0.181045);
}

double NNfunction_ns_chi03_dR::synapse0x2572dd0() {
   return (neuron0x256d630()*2.15609);
}

double NNfunction_ns_chi03_dR::synapse0x2573150() {
   return (neuron0x25689e0()*-0.177167);
}

double NNfunction_ns_chi03_dR::synapse0x2573190() {
   return (neuron0x2568c90()*-14.0387);
}

double NNfunction_ns_chi03_dR::synapse0x25731d0() {
   return (neuron0x2568fd0()*-0.322428);
}

double NNfunction_ns_chi03_dR::synapse0x2573210() {
   return (neuron0x2569310()*-0.0271072);
}

double NNfunction_ns_chi03_dR::synapse0x2573250() {
   return (neuron0x2569650()*-0.0264197);
}

double NNfunction_ns_chi03_dR::synapse0x2573290() {
   return (neuron0x2569990()*0.00215783);
}

double NNfunction_ns_chi03_dR::synapse0x25732d0() {
   return (neuron0x2569cd0()*-0.0219719);
}

double NNfunction_ns_chi03_dR::synapse0x2573310() {
   return (neuron0x256a010()*0.0013246);
}

double NNfunction_ns_chi03_dR::synapse0x2573350() {
   return (neuron0x256a350()*0.045737);
}

double NNfunction_ns_chi03_dR::synapse0x2573390() {
   return (neuron0x256a690()*-0.01342);
}

double NNfunction_ns_chi03_dR::synapse0x25733d0() {
   return (neuron0x256a9d0()*0.0361557);
}

double NNfunction_ns_chi03_dR::synapse0x2573410() {
   return (neuron0x256ad10()*0.0328704);
}

double NNfunction_ns_chi03_dR::synapse0x2573450() {
   return (neuron0x256b050()*-0.0112478);
}

double NNfunction_ns_chi03_dR::synapse0x2573490() {
   return (neuron0x256b390()*0.0547461);
}

double NNfunction_ns_chi03_dR::synapse0x25734d0() {
   return (neuron0x256b6d0()*-0.0932672);
}

double NNfunction_ns_chi03_dR::synapse0x2573510() {
   return (neuron0x256ba10()*-0.0461138);
}

double NNfunction_ns_chi03_dR::synapse0x2572fa0() {
   return (neuron0x256bd50()*0.0475423);
}

double NNfunction_ns_chi03_dR::synapse0x2572fe0() {
   return (neuron0x256c2b0()*-0.0627768);
}

double NNfunction_ns_chi03_dR::synapse0x2573660() {
   return (neuron0x256c5f0()*-0.0360056);
}

double NNfunction_ns_chi03_dR::synapse0x25736a0() {
   return (neuron0x256c930()*0.00589967);
}

double NNfunction_ns_chi03_dR::synapse0x25736e0() {
   return (neuron0x256cc70()*-0.00210469);
}

double NNfunction_ns_chi03_dR::synapse0x2573720() {
   return (neuron0x256cfb0()*0.000668865);
}

double NNfunction_ns_chi03_dR::synapse0x2573760() {
   return (neuron0x256d2f0()*0.00679491);
}

double NNfunction_ns_chi03_dR::synapse0x25737a0() {
   return (neuron0x256d630()*-5.31826);
}

double NNfunction_ns_chi03_dR::synapse0x256c1a0() {
   return (neuron0x25689e0()*0.0483036);
}

double NNfunction_ns_chi03_dR::synapse0x256c1e0() {
   return (neuron0x2568c90()*-0.211346);
}

double NNfunction_ns_chi03_dR::synapse0x256c220() {
   return (neuron0x2568fd0()*-0.330862);
}

double NNfunction_ns_chi03_dR::synapse0x256c260() {
   return (neuron0x2569310()*0.551991);
}

double NNfunction_ns_chi03_dR::synapse0x2573d30() {
   return (neuron0x2569650()*-0.0539088);
}

double NNfunction_ns_chi03_dR::synapse0x2573d70() {
   return (neuron0x2569990()*-0.63365);
}

double NNfunction_ns_chi03_dR::synapse0x2573db0() {
   return (neuron0x2569cd0()*-0.238247);
}

double NNfunction_ns_chi03_dR::synapse0x2573df0() {
   return (neuron0x256a010()*0.0587596);
}

double NNfunction_ns_chi03_dR::synapse0x2573e30() {
   return (neuron0x256a350()*-0.188796);
}

double NNfunction_ns_chi03_dR::synapse0x2573e70() {
   return (neuron0x256a690()*-0.0817071);
}

double NNfunction_ns_chi03_dR::synapse0x2573eb0() {
   return (neuron0x256a9d0()*-0.337226);
}

double NNfunction_ns_chi03_dR::synapse0x2573ef0() {
   return (neuron0x256ad10()*0.200179);
}

double NNfunction_ns_chi03_dR::synapse0x2573f30() {
   return (neuron0x256b050()*1.10543);
}

double NNfunction_ns_chi03_dR::synapse0x2573f70() {
   return (neuron0x256b390()*0.487026);
}

double NNfunction_ns_chi03_dR::synapse0x2573fb0() {
   return (neuron0x256b6d0()*1.26423);
}

double NNfunction_ns_chi03_dR::synapse0x2573ff0() {
   return (neuron0x256ba10()*0.35466);
}

double NNfunction_ns_chi03_dR::synapse0x2573970() {
   return (neuron0x256bd50()*-1.50644);
}

double NNfunction_ns_chi03_dR::synapse0x25739b0() {
   return (neuron0x256c2b0()*0.417997);
}

double NNfunction_ns_chi03_dR::synapse0x2574140() {
   return (neuron0x256c5f0()*-0.588046);
}

double NNfunction_ns_chi03_dR::synapse0x2574180() {
   return (neuron0x256c930()*1.10364);
}

double NNfunction_ns_chi03_dR::synapse0x25741c0() {
   return (neuron0x256cc70()*-1.03153);
}

double NNfunction_ns_chi03_dR::synapse0x2574200() {
   return (neuron0x256cfb0()*0.0506245);
}

double NNfunction_ns_chi03_dR::synapse0x2574240() {
   return (neuron0x256d2f0()*0.00831425);
}

double NNfunction_ns_chi03_dR::synapse0x2574280() {
   return (neuron0x256d630()*-0.215845);
}

double NNfunction_ns_chi03_dR::synapse0x2574600() {
   return (neuron0x25689e0()*0.0020457);
}

double NNfunction_ns_chi03_dR::synapse0x2574640() {
   return (neuron0x2568c90()*0.015413);
}

double NNfunction_ns_chi03_dR::synapse0x2574680() {
   return (neuron0x2568fd0()*-0.0152186);
}

double NNfunction_ns_chi03_dR::synapse0x25746c0() {
   return (neuron0x2569310()*-2.98275);
}

double NNfunction_ns_chi03_dR::synapse0x2574700() {
   return (neuron0x2569650()*-0.00482101);
}

double NNfunction_ns_chi03_dR::synapse0x2574740() {
   return (neuron0x2569990()*-0.00369383);
}

double NNfunction_ns_chi03_dR::synapse0x2574780() {
   return (neuron0x2569cd0()*-0.00941291);
}

double NNfunction_ns_chi03_dR::synapse0x25747c0() {
   return (neuron0x256a010()*-0.0156519);
}

double NNfunction_ns_chi03_dR::synapse0x2574800() {
   return (neuron0x256a350()*-0.000937035);
}

double NNfunction_ns_chi03_dR::synapse0x2574840() {
   return (neuron0x256a690()*0.00725409);
}

double NNfunction_ns_chi03_dR::synapse0x2574880() {
   return (neuron0x256a9d0()*-0.00327811);
}

double NNfunction_ns_chi03_dR::synapse0x25748c0() {
   return (neuron0x256ad10()*0.00391839);
}

double NNfunction_ns_chi03_dR::synapse0x2574900() {
   return (neuron0x256b050()*-0.000475605);
}

double NNfunction_ns_chi03_dR::synapse0x2574940() {
   return (neuron0x256b390()*-0.00830518);
}

double NNfunction_ns_chi03_dR::synapse0x2574980() {
   return (neuron0x256b6d0()*-0.00970653);
}

double NNfunction_ns_chi03_dR::synapse0x25749c0() {
   return (neuron0x256ba10()*-0.0157755);
}

double NNfunction_ns_chi03_dR::synapse0x2574450() {
   return (neuron0x256bd50()*0.0178435);
}

double NNfunction_ns_chi03_dR::synapse0x2574490() {
   return (neuron0x256c2b0()*0.179052);
}

double NNfunction_ns_chi03_dR::synapse0x2574b10() {
   return (neuron0x256c5f0()*0.0104261);
}

double NNfunction_ns_chi03_dR::synapse0x2574b50() {
   return (neuron0x256c930()*0.00573074);
}

double NNfunction_ns_chi03_dR::synapse0x2574b90() {
   return (neuron0x256cc70()*-0.00380736);
}

double NNfunction_ns_chi03_dR::synapse0x2574bd0() {
   return (neuron0x256cfb0()*-0.00360981);
}

double NNfunction_ns_chi03_dR::synapse0x2574c10() {
   return (neuron0x256d2f0()*0.00723691);
}

double NNfunction_ns_chi03_dR::synapse0x2574c50() {
   return (neuron0x256d630()*-0.0207117);
}

double NNfunction_ns_chi03_dR::synapse0x2574fd0() {
   return (neuron0x25689e0()*0.0176513);
}

double NNfunction_ns_chi03_dR::synapse0x2575010() {
   return (neuron0x2568c90()*0.0265309);
}

double NNfunction_ns_chi03_dR::synapse0x2575050() {
   return (neuron0x2568fd0()*-1.68399);
}

double NNfunction_ns_chi03_dR::synapse0x2575090() {
   return (neuron0x2569310()*-0.0603706);
}

double NNfunction_ns_chi03_dR::synapse0x25750d0() {
   return (neuron0x2569650()*-0.00478354);
}

double NNfunction_ns_chi03_dR::synapse0x2575110() {
   return (neuron0x2569990()*0.0286593);
}

double NNfunction_ns_chi03_dR::synapse0x2575150() {
   return (neuron0x2569cd0()*-0.0271772);
}

double NNfunction_ns_chi03_dR::synapse0x2575190() {
   return (neuron0x256a010()*-0.0137466);
}

double NNfunction_ns_chi03_dR::synapse0x25751d0() {
   return (neuron0x256a350()*0.0277751);
}

double NNfunction_ns_chi03_dR::synapse0x2575210() {
   return (neuron0x256a690()*0.00470617);
}

double NNfunction_ns_chi03_dR::synapse0x2575250() {
   return (neuron0x256a9d0()*0.00172939);
}

double NNfunction_ns_chi03_dR::synapse0x2575290() {
   return (neuron0x256ad10()*-0.00245863);
}

double NNfunction_ns_chi03_dR::synapse0x25752d0() {
   return (neuron0x256b050()*-0.0345691);
}

double NNfunction_ns_chi03_dR::synapse0x2575310() {
   return (neuron0x256b390()*-0.0432403);
}

double NNfunction_ns_chi03_dR::synapse0x2575350() {
   return (neuron0x256b6d0()*-0.0611225);
}

double NNfunction_ns_chi03_dR::synapse0x2575390() {
   return (neuron0x256ba10()*0.00803796);
}

double NNfunction_ns_chi03_dR::synapse0x2574e20() {
   return (neuron0x256bd50()*0.0226166);
}

double NNfunction_ns_chi03_dR::synapse0x2574e60() {
   return (neuron0x256c2b0()*-0.137778);
}

double NNfunction_ns_chi03_dR::synapse0x2571bf0() {
   return (neuron0x256c5f0()*0.0313765);
}

double NNfunction_ns_chi03_dR::synapse0x2571c30() {
   return (neuron0x256c930()*0.0103711);
}

double NNfunction_ns_chi03_dR::synapse0x2571c70() {
   return (neuron0x256cc70()*0.0121334);
}

double NNfunction_ns_chi03_dR::synapse0x2571cb0() {
   return (neuron0x256cfb0()*0.0153624);
}

double NNfunction_ns_chi03_dR::synapse0x2571cf0() {
   return (neuron0x256d2f0()*-0.009786);
}

double NNfunction_ns_chi03_dR::synapse0x2571d30() {
   return (neuron0x256d630()*-1.04473);
}

double NNfunction_ns_chi03_dR::synapse0x25720b0() {
   return (neuron0x25689e0()*0.00639103);
}

double NNfunction_ns_chi03_dR::synapse0x25720f0() {
   return (neuron0x2568c90()*0.00244642);
}

double NNfunction_ns_chi03_dR::synapse0x2572130() {
   return (neuron0x2568fd0()*-0.00513861);
}

double NNfunction_ns_chi03_dR::synapse0x2572170() {
   return (neuron0x2569310()*-2.7679);
}

double NNfunction_ns_chi03_dR::synapse0x25721b0() {
   return (neuron0x2569650()*-0.00202835);
}

double NNfunction_ns_chi03_dR::synapse0x25721f0() {
   return (neuron0x2569990()*-0.000851646);
}

double NNfunction_ns_chi03_dR::synapse0x2572230() {
   return (neuron0x2569cd0()*-0.00239653);
}

double NNfunction_ns_chi03_dR::synapse0x2572270() {
   return (neuron0x256a010()*-0.0160385);
}

double NNfunction_ns_chi03_dR::synapse0x25722b0() {
   return (neuron0x256a350()*-0.00551872);
}

double NNfunction_ns_chi03_dR::synapse0x25722f0() {
   return (neuron0x256a690()*8.42159e-05);
}

double NNfunction_ns_chi03_dR::synapse0x2572330() {
   return (neuron0x256a9d0()*-0.00524111);
}

double NNfunction_ns_chi03_dR::synapse0x2572370() {
   return (neuron0x256ad10()*0.012182);
}

double NNfunction_ns_chi03_dR::synapse0x25723b0() {
   return (neuron0x256b050()*0.00417966);
}

double NNfunction_ns_chi03_dR::synapse0x25764f0() {
   return (neuron0x256b390()*-0.0168408);
}

double NNfunction_ns_chi03_dR::synapse0x2576530() {
   return (neuron0x256b6d0()*-0.00327033);
}

double NNfunction_ns_chi03_dR::synapse0x2576570() {
   return (neuron0x256ba10()*-0.0102892);
}

double NNfunction_ns_chi03_dR::synapse0x2571f00() {
   return (neuron0x256bd50()*0.00178109);
}

double NNfunction_ns_chi03_dR::synapse0x2571f40() {
   return (neuron0x256c2b0()*-0.0418297);
}

double NNfunction_ns_chi03_dR::synapse0x25766c0() {
   return (neuron0x256c5f0()*0.00956893);
}

double NNfunction_ns_chi03_dR::synapse0x2576700() {
   return (neuron0x256c930()*0.00258662);
}

double NNfunction_ns_chi03_dR::synapse0x2576740() {
   return (neuron0x256cc70()*-0.00304626);
}

double NNfunction_ns_chi03_dR::synapse0x2576780() {
   return (neuron0x256cfb0()*-0.00400515);
}

double NNfunction_ns_chi03_dR::synapse0x25767c0() {
   return (neuron0x256d2f0()*0.00225679);
}

double NNfunction_ns_chi03_dR::synapse0x2576800() {
   return (neuron0x256d630()*-0.00688889);
}

double NNfunction_ns_chi03_dR::synapse0x2576b80() {
   return (neuron0x25689e0()*-0.937438);
}

double NNfunction_ns_chi03_dR::synapse0x2576bc0() {
   return (neuron0x2568c90()*0.365664);
}

double NNfunction_ns_chi03_dR::synapse0x2576c00() {
   return (neuron0x2568fd0()*-1.54779);
}

double NNfunction_ns_chi03_dR::synapse0x2576c40() {
   return (neuron0x2569310()*0.00993353);
}

double NNfunction_ns_chi03_dR::synapse0x2576c80() {
   return (neuron0x2569650()*0.623934);
}

double NNfunction_ns_chi03_dR::synapse0x2576cc0() {
   return (neuron0x2569990()*0.375975);
}

double NNfunction_ns_chi03_dR::synapse0x2576d00() {
   return (neuron0x2569cd0()*-0.305703);
}

double NNfunction_ns_chi03_dR::synapse0x2576d40() {
   return (neuron0x256a010()*0.802604);
}

double NNfunction_ns_chi03_dR::synapse0x2576d80() {
   return (neuron0x256a350()*0.435319);
}

double NNfunction_ns_chi03_dR::synapse0x2576dc0() {
   return (neuron0x256a690()*-1.18998);
}

double NNfunction_ns_chi03_dR::synapse0x2576e00() {
   return (neuron0x256a9d0()*0.041078);
}

double NNfunction_ns_chi03_dR::synapse0x2576e40() {
   return (neuron0x256ad10()*0.0392991);
}

double NNfunction_ns_chi03_dR::synapse0x2576e80() {
   return (neuron0x256b050()*-0.907503);
}

double NNfunction_ns_chi03_dR::synapse0x2576ec0() {
   return (neuron0x256b390()*1.75338);
}

double NNfunction_ns_chi03_dR::synapse0x2576f00() {
   return (neuron0x256b6d0()*-0.495259);
}

double NNfunction_ns_chi03_dR::synapse0x2576f40() {
   return (neuron0x256ba10()*-0.354654);
}

double NNfunction_ns_chi03_dR::synapse0x25769d0() {
   return (neuron0x256bd50()*0.800355);
}

double NNfunction_ns_chi03_dR::synapse0x2576a10() {
   return (neuron0x256c2b0()*-0.664061);
}

double NNfunction_ns_chi03_dR::synapse0x2577090() {
   return (neuron0x256c5f0()*0.666291);
}

double NNfunction_ns_chi03_dR::synapse0x25770d0() {
   return (neuron0x256c930()*0.367424);
}

double NNfunction_ns_chi03_dR::synapse0x2577110() {
   return (neuron0x256cc70()*1.2748);
}

double NNfunction_ns_chi03_dR::synapse0x2577150() {
   return (neuron0x256cfb0()*-0.39045);
}

double NNfunction_ns_chi03_dR::synapse0x2577190() {
   return (neuron0x256d2f0()*-0.265805);
}

double NNfunction_ns_chi03_dR::synapse0x25771d0() {
   return (neuron0x256d630()*-0.804912);
}

double NNfunction_ns_chi03_dR::synapse0x2577550() {
   return (neuron0x25689e0()*-0.661576);
}

double NNfunction_ns_chi03_dR::synapse0x2577590() {
   return (neuron0x2568c90()*-5.55209);
}

double NNfunction_ns_chi03_dR::synapse0x25775d0() {
   return (neuron0x2568fd0()*-0.575276);
}

double NNfunction_ns_chi03_dR::synapse0x2577610() {
   return (neuron0x2569310()*0.264653);
}

double NNfunction_ns_chi03_dR::synapse0x2577650() {
   return (neuron0x2569650()*-0.0405576);
}

double NNfunction_ns_chi03_dR::synapse0x2577690() {
   return (neuron0x2569990()*-0.0984321);
}

double NNfunction_ns_chi03_dR::synapse0x25776d0() {
   return (neuron0x2569cd0()*0.580951);
}

double NNfunction_ns_chi03_dR::synapse0x2577710() {
   return (neuron0x256a010()*-0.140766);
}

double NNfunction_ns_chi03_dR::synapse0x2577750() {
   return (neuron0x256a350()*0.124768);
}

double NNfunction_ns_chi03_dR::synapse0x2577790() {
   return (neuron0x256a690()*-0.100874);
}

double NNfunction_ns_chi03_dR::synapse0x25777d0() {
   return (neuron0x256a9d0()*0.26392);
}

double NNfunction_ns_chi03_dR::synapse0x2577810() {
   return (neuron0x256ad10()*-0.0941613);
}

double NNfunction_ns_chi03_dR::synapse0x2577850() {
   return (neuron0x256b050()*0.100668);
}

double NNfunction_ns_chi03_dR::synapse0x2577890() {
   return (neuron0x256b390()*0.413297);
}

double NNfunction_ns_chi03_dR::synapse0x25778d0() {
   return (neuron0x256b6d0()*-0.380197);
}

double NNfunction_ns_chi03_dR::synapse0x2577910() {
   return (neuron0x256ba10()*-0.324713);
}

double NNfunction_ns_chi03_dR::synapse0x25773a0() {
   return (neuron0x256bd50()*-0.299305);
}

double NNfunction_ns_chi03_dR::synapse0x25773e0() {
   return (neuron0x256c2b0()*1.1808);
}

double NNfunction_ns_chi03_dR::synapse0x2577a60() {
   return (neuron0x256c5f0()*0.0173117);
}

double NNfunction_ns_chi03_dR::synapse0x2577aa0() {
   return (neuron0x256c930()*-0.32294);
}

double NNfunction_ns_chi03_dR::synapse0x2577ae0() {
   return (neuron0x256cc70()*0.229987);
}

double NNfunction_ns_chi03_dR::synapse0x2577b20() {
   return (neuron0x256cfb0()*-0.462064);
}

double NNfunction_ns_chi03_dR::synapse0x2577b60() {
   return (neuron0x256d2f0()*0.126303);
}

double NNfunction_ns_chi03_dR::synapse0x2577ba0() {
   return (neuron0x256d630()*0.640275);
}

double NNfunction_ns_chi03_dR::synapse0x2577f20() {
   return (neuron0x25689e0()*-0.00107411);
}

double NNfunction_ns_chi03_dR::synapse0x2577f60() {
   return (neuron0x2568c90()*-0.334515);
}

double NNfunction_ns_chi03_dR::synapse0x2577fa0() {
   return (neuron0x2568fd0()*7.99346);
}

double NNfunction_ns_chi03_dR::synapse0x2577fe0() {
   return (neuron0x2569310()*0.0376195);
}

double NNfunction_ns_chi03_dR::synapse0x2578020() {
   return (neuron0x2569650()*0.0558069);
}

double NNfunction_ns_chi03_dR::synapse0x2578060() {
   return (neuron0x2569990()*-0.0363871);
}

double NNfunction_ns_chi03_dR::synapse0x25780a0() {
   return (neuron0x2569cd0()*-0.0181724);
}

double NNfunction_ns_chi03_dR::synapse0x25780e0() {
   return (neuron0x256a010()*0.0182665);
}

double NNfunction_ns_chi03_dR::synapse0x2578120() {
   return (neuron0x256a350()*0.0531024);
}

double NNfunction_ns_chi03_dR::synapse0x2578160() {
   return (neuron0x256a690()*0.0234874);
}

double NNfunction_ns_chi03_dR::synapse0x25781a0() {
   return (neuron0x256a9d0()*0.0285822);
}

double NNfunction_ns_chi03_dR::synapse0x25781e0() {
   return (neuron0x256ad10()*-0.00430941);
}

double NNfunction_ns_chi03_dR::synapse0x2578220() {
   return (neuron0x256b050()*0.0642513);
}

double NNfunction_ns_chi03_dR::synapse0x2578260() {
   return (neuron0x256b390()*-0.00735437);
}

double NNfunction_ns_chi03_dR::synapse0x25782a0() {
   return (neuron0x256b6d0()*-0.0222815);
}

double NNfunction_ns_chi03_dR::synapse0x25782e0() {
   return (neuron0x256ba10()*-0.00343861);
}

double NNfunction_ns_chi03_dR::synapse0x2577d70() {
   return (neuron0x256bd50()*-0.0216251);
}

double NNfunction_ns_chi03_dR::synapse0x2577db0() {
   return (neuron0x256c2b0()*0.17121);
}

double NNfunction_ns_chi03_dR::synapse0x2578430() {
   return (neuron0x256c5f0()*-0.0153277);
}

double NNfunction_ns_chi03_dR::synapse0x2578470() {
   return (neuron0x256c930()*-0.024058);
}

double NNfunction_ns_chi03_dR::synapse0x25784b0() {
   return (neuron0x256cc70()*-0.0315786);
}

double NNfunction_ns_chi03_dR::synapse0x25784f0() {
   return (neuron0x256cfb0()*-0.0224656);
}

double NNfunction_ns_chi03_dR::synapse0x2578530() {
   return (neuron0x256d2f0()*0.0238567);
}

double NNfunction_ns_chi03_dR::synapse0x2578570() {
   return (neuron0x256d630()*1.45841);
}

double NNfunction_ns_chi03_dR::synapse0x25788f0() {
   return (neuron0x25689e0()*-0.0155648);
}

double NNfunction_ns_chi03_dR::synapse0x2568b70() {
   return (neuron0x2568c90()*-0.0311127);
}

double NNfunction_ns_chi03_dR::synapse0x2568bb0() {
   return (neuron0x2568fd0()*-0.757072);
}

double NNfunction_ns_chi03_dR::synapse0x2568eb0() {
   return (neuron0x2569310()*0.00626564);
}

double NNfunction_ns_chi03_dR::synapse0x2568ef0() {
   return (neuron0x2569650()*-0.0299335);
}

double NNfunction_ns_chi03_dR::synapse0x25691f0() {
   return (neuron0x2569990()*0.0195839);
}

double NNfunction_ns_chi03_dR::synapse0x2569230() {
   return (neuron0x2569cd0()*0.0192592);
}

double NNfunction_ns_chi03_dR::synapse0x2569530() {
   return (neuron0x256a010()*0.00117279);
}

double NNfunction_ns_chi03_dR::synapse0x2569570() {
   return (neuron0x256a350()*-0.077504);
}

double NNfunction_ns_chi03_dR::synapse0x2569870() {
   return (neuron0x256a690()*-0.0156366);
}

double NNfunction_ns_chi03_dR::synapse0x25698b0() {
   return (neuron0x256a9d0()*-0.0355878);
}

double NNfunction_ns_chi03_dR::synapse0x2569bb0() {
   return (neuron0x256ad10()*0.0224589);
}

double NNfunction_ns_chi03_dR::synapse0x2569bf0() {
   return (neuron0x256b050()*-0.0331998);
}

double NNfunction_ns_chi03_dR::synapse0x2569ef0() {
   return (neuron0x256b390()*0.0157524);
}

double NNfunction_ns_chi03_dR::synapse0x2569f30() {
   return (neuron0x256b6d0()*0.0555576);
}

double NNfunction_ns_chi03_dR::synapse0x256a230() {
   return (neuron0x256ba10()*0.00471676);
}

double NNfunction_ns_chi03_dR::synapse0x256a270() {
   return (neuron0x256bd50()*0.0278023);
}

double NNfunction_ns_chi03_dR::synapse0x256a570() {
   return (neuron0x256c2b0()*-0.243861);
}

double NNfunction_ns_chi03_dR::synapse0x256a5b0() {
   return (neuron0x256c5f0()*0.0262456);
}

double NNfunction_ns_chi03_dR::synapse0x256a8b0() {
   return (neuron0x256c930()*0.0189585);
}

double NNfunction_ns_chi03_dR::synapse0x256a8f0() {
   return (neuron0x256cc70()*-0.00314549);
}

double NNfunction_ns_chi03_dR::synapse0x256abf0() {
   return (neuron0x256cfb0()*-0.0096824);
}

double NNfunction_ns_chi03_dR::synapse0x256ac30() {
   return (neuron0x256d2f0()*-0.0260316);
}

double NNfunction_ns_chi03_dR::synapse0x256af30() {
   return (neuron0x256d630()*-0.11008);
}

double NNfunction_ns_chi03_dR::synapse0x256af70() {
   return (neuron0x25689e0()*-1.02307);
}

double NNfunction_ns_chi03_dR::synapse0x256bc30() {
   return (neuron0x2568c90()*0.165989);
}

double NNfunction_ns_chi03_dR::synapse0x256bc70() {
   return (neuron0x2568fd0()*-0.455766);
}

double NNfunction_ns_chi03_dR::synapse0x2578740() {
   return (neuron0x2569310()*-0.42507);
}

double NNfunction_ns_chi03_dR::synapse0x2578780() {
   return (neuron0x2569650()*-0.871815);
}

double NNfunction_ns_chi03_dR::synapse0x256bf70() {
   return (neuron0x2569990()*-0.388224);
}

double NNfunction_ns_chi03_dR::synapse0x256bfb0() {
   return (neuron0x2569cd0()*1.0917);
}

double NNfunction_ns_chi03_dR::synapse0x256c4d0() {
   return (neuron0x256a010()*0.911846);
}

double NNfunction_ns_chi03_dR::synapse0x256c510() {
   return (neuron0x256a350()*-0.645407);
}

double NNfunction_ns_chi03_dR::synapse0x256c810() {
   return (neuron0x256a690()*-0.427085);
}

double NNfunction_ns_chi03_dR::synapse0x256c850() {
   return (neuron0x256a9d0()*-0.267792);
}

double NNfunction_ns_chi03_dR::synapse0x256cb50() {
   return (neuron0x256ad10()*-0.272888);
}

double NNfunction_ns_chi03_dR::synapse0x256cb90() {
   return (neuron0x256b050()*0.215026);
}

double NNfunction_ns_chi03_dR::synapse0x256ce90() {
   return (neuron0x256b390()*1.71562);
}

double NNfunction_ns_chi03_dR::synapse0x256ced0() {
   return (neuron0x256b6d0()*0.168003);
}

double NNfunction_ns_chi03_dR::synapse0x256d1d0() {
   return (neuron0x256ba10()*-1.45466);
}

double NNfunction_ns_chi03_dR::synapse0x256d210() {
   return (neuron0x256bd50()*0.3987);
}

double NNfunction_ns_chi03_dR::synapse0x256d510() {
   return (neuron0x256c2b0()*0.260139);
}

double NNfunction_ns_chi03_dR::synapse0x256d550() {
   return (neuron0x256c5f0()*-0.277691);
}

double NNfunction_ns_chi03_dR::synapse0x256d850() {
   return (neuron0x256c930()*-0.896433);
}

double NNfunction_ns_chi03_dR::synapse0x256d890() {
   return (neuron0x256cc70()*-0.297784);
}

double NNfunction_ns_chi03_dR::synapse0x256b270() {
   return (neuron0x256cfb0()*0.664112);
}

double NNfunction_ns_chi03_dR::synapse0x256b2b0() {
   return (neuron0x256d2f0()*2.2615);
}

double NNfunction_ns_chi03_dR::synapse0x257a660() {
   return (neuron0x256d630()*1.03453);
}

double NNfunction_ns_chi03_dR::synapse0x257a9e0() {
   return (neuron0x25689e0()*0.156668);
}

double NNfunction_ns_chi03_dR::synapse0x257aa20() {
   return (neuron0x2568c90()*-1.8512);
}

double NNfunction_ns_chi03_dR::synapse0x257aa60() {
   return (neuron0x2568fd0()*1.24627);
}

double NNfunction_ns_chi03_dR::synapse0x257aaa0() {
   return (neuron0x2569310()*0.0263153);
}

double NNfunction_ns_chi03_dR::synapse0x257aae0() {
   return (neuron0x2569650()*-0.0309874);
}

double NNfunction_ns_chi03_dR::synapse0x257ab20() {
   return (neuron0x2569990()*-0.149179);
}

double NNfunction_ns_chi03_dR::synapse0x257ab60() {
   return (neuron0x2569cd0()*-0.0105519);
}

double NNfunction_ns_chi03_dR::synapse0x257aba0() {
   return (neuron0x256a010()*-0.0627844);
}

double NNfunction_ns_chi03_dR::synapse0x257abe0() {
   return (neuron0x256a350()*0.100738);
}

double NNfunction_ns_chi03_dR::synapse0x257ac20() {
   return (neuron0x256a690()*0.020043);
}

double NNfunction_ns_chi03_dR::synapse0x257ac60() {
   return (neuron0x256a9d0()*-0.0501472);
}

double NNfunction_ns_chi03_dR::synapse0x257aca0() {
   return (neuron0x256ad10()*0.0172058);
}

double NNfunction_ns_chi03_dR::synapse0x257ace0() {
   return (neuron0x256b050()*-0.0312191);
}

double NNfunction_ns_chi03_dR::synapse0x257ad20() {
   return (neuron0x256b390()*-0.0560192);
}

double NNfunction_ns_chi03_dR::synapse0x257ad60() {
   return (neuron0x256b6d0()*0.038302);
}

double NNfunction_ns_chi03_dR::synapse0x257ada0() {
   return (neuron0x256ba10()*-0.0157038);
}

double NNfunction_ns_chi03_dR::synapse0x257a830() {
   return (neuron0x256bd50()*0.0653218);
}

double NNfunction_ns_chi03_dR::synapse0x257a870() {
   return (neuron0x256c2b0()*-1.70036);
}

double NNfunction_ns_chi03_dR::synapse0x257aef0() {
   return (neuron0x256c5f0()*0.200546);
}

double NNfunction_ns_chi03_dR::synapse0x257af30() {
   return (neuron0x256c930()*-0.00698054);
}

double NNfunction_ns_chi03_dR::synapse0x257af70() {
   return (neuron0x256cc70()*-0.021777);
}

double NNfunction_ns_chi03_dR::synapse0x257afb0() {
   return (neuron0x256cfb0()*0.00519172);
}

double NNfunction_ns_chi03_dR::synapse0x257aff0() {
   return (neuron0x256d2f0()*0.103399);
}

double NNfunction_ns_chi03_dR::synapse0x257b030() {
   return (neuron0x256d630()*1.71897);
}

double NNfunction_ns_chi03_dR::synapse0x257b3b0() {
   return (neuron0x25689e0()*0.0488648);
}

double NNfunction_ns_chi03_dR::synapse0x257b3f0() {
   return (neuron0x2568c90()*0.494309);
}

double NNfunction_ns_chi03_dR::synapse0x257b430() {
   return (neuron0x2568fd0()*-0.373386);
}

double NNfunction_ns_chi03_dR::synapse0x257b470() {
   return (neuron0x2569310()*-1.70799);
}

double NNfunction_ns_chi03_dR::synapse0x257b4b0() {
   return (neuron0x2569650()*0.773902);
}

double NNfunction_ns_chi03_dR::synapse0x257b4f0() {
   return (neuron0x2569990()*0.894948);
}

double NNfunction_ns_chi03_dR::synapse0x257b530() {
   return (neuron0x2569cd0()*-0.262319);
}

double NNfunction_ns_chi03_dR::synapse0x257b570() {
   return (neuron0x256a010()*-0.212573);
}

double NNfunction_ns_chi03_dR::synapse0x257b5b0() {
   return (neuron0x256a350()*-0.920073);
}

double NNfunction_ns_chi03_dR::synapse0x257b5f0() {
   return (neuron0x256a690()*0.693333);
}

double NNfunction_ns_chi03_dR::synapse0x257b630() {
   return (neuron0x256a9d0()*-0.458877);
}

double NNfunction_ns_chi03_dR::synapse0x257b670() {
   return (neuron0x256ad10()*0.11701);
}

double NNfunction_ns_chi03_dR::synapse0x257b6b0() {
   return (neuron0x256b050()*0.474051);
}

double NNfunction_ns_chi03_dR::synapse0x257b6f0() {
   return (neuron0x256b390()*-0.000605678);
}

double NNfunction_ns_chi03_dR::synapse0x257b730() {
   return (neuron0x256b6d0()*0.00833387);
}

double NNfunction_ns_chi03_dR::synapse0x257b770() {
   return (neuron0x256ba10()*0.217474);
}

double NNfunction_ns_chi03_dR::synapse0x257b200() {
   return (neuron0x256bd50()*0.824187);
}

double NNfunction_ns_chi03_dR::synapse0x257b240() {
   return (neuron0x256c2b0()*1.23866);
}

double NNfunction_ns_chi03_dR::synapse0x257b8c0() {
   return (neuron0x256c5f0()*1.16197);
}

double NNfunction_ns_chi03_dR::synapse0x257b900() {
   return (neuron0x256c930()*1.09851);
}

double NNfunction_ns_chi03_dR::synapse0x257b940() {
   return (neuron0x256cc70()*-0.575411);
}

double NNfunction_ns_chi03_dR::synapse0x257b980() {
   return (neuron0x256cfb0()*-0.184081);
}

double NNfunction_ns_chi03_dR::synapse0x257b9c0() {
   return (neuron0x256d2f0()*-0.797349);
}

double NNfunction_ns_chi03_dR::synapse0x257ba00() {
   return (neuron0x256d630()*0.186986);
}

double NNfunction_ns_chi03_dR::synapse0x257bd80() {
   return (neuron0x25689e0()*-0.0536151);
}

double NNfunction_ns_chi03_dR::synapse0x257bdc0() {
   return (neuron0x2568c90()*6.09094);
}

double NNfunction_ns_chi03_dR::synapse0x257be00() {
   return (neuron0x2568fd0()*-0.440668);
}

double NNfunction_ns_chi03_dR::synapse0x257be40() {
   return (neuron0x2569310()*-0.00174771);
}

double NNfunction_ns_chi03_dR::synapse0x257be80() {
   return (neuron0x2569650()*-0.035937);
}

double NNfunction_ns_chi03_dR::synapse0x257bec0() {
   return (neuron0x2569990()*-0.00279833);
}

double NNfunction_ns_chi03_dR::synapse0x257bf00() {
   return (neuron0x2569cd0()*0.0184546);
}

double NNfunction_ns_chi03_dR::synapse0x257bf40() {
   return (neuron0x256a010()*-0.0292107);
}

double NNfunction_ns_chi03_dR::synapse0x257bf80() {
   return (neuron0x256a350()*-0.0622483);
}

double NNfunction_ns_chi03_dR::synapse0x257bfc0() {
   return (neuron0x256a690()*0.0819596);
}

double NNfunction_ns_chi03_dR::synapse0x257c000() {
   return (neuron0x256a9d0()*0.043228);
}

double NNfunction_ns_chi03_dR::synapse0x257c040() {
   return (neuron0x256ad10()*0.0619237);
}

double NNfunction_ns_chi03_dR::synapse0x257c080() {
   return (neuron0x256b050()*-0.0675319);
}

double NNfunction_ns_chi03_dR::synapse0x257c0c0() {
   return (neuron0x256b390()*0.0152761);
}

double NNfunction_ns_chi03_dR::synapse0x257c100() {
   return (neuron0x256b6d0()*-0.0611638);
}

double NNfunction_ns_chi03_dR::synapse0x257c140() {
   return (neuron0x256ba10()*0.00194263);
}

double NNfunction_ns_chi03_dR::synapse0x257bbd0() {
   return (neuron0x256bd50()*0.014297);
}

double NNfunction_ns_chi03_dR::synapse0x257bc10() {
   return (neuron0x256c2b0()*0.0231982);
}

double NNfunction_ns_chi03_dR::synapse0x257c290() {
   return (neuron0x256c5f0()*0.0279026);
}

double NNfunction_ns_chi03_dR::synapse0x257c2d0() {
   return (neuron0x256c930()*-0.00261656);
}

double NNfunction_ns_chi03_dR::synapse0x257c310() {
   return (neuron0x256cc70()*-0.0676304);
}

double NNfunction_ns_chi03_dR::synapse0x257c350() {
   return (neuron0x256cfb0()*0.0188289);
}

double NNfunction_ns_chi03_dR::synapse0x257c390() {
   return (neuron0x256d2f0()*0.00446002);
}

double NNfunction_ns_chi03_dR::synapse0x257c3d0() {
   return (neuron0x256d630()*-2.67986);
}

double NNfunction_ns_chi03_dR::synapse0x257c750() {
   return (neuron0x25689e0()*0.126815);
}

double NNfunction_ns_chi03_dR::synapse0x257c790() {
   return (neuron0x2568c90()*7.35686);
}

double NNfunction_ns_chi03_dR::synapse0x257c7d0() {
   return (neuron0x2568fd0()*1.1876);
}

double NNfunction_ns_chi03_dR::synapse0x257c810() {
   return (neuron0x2569310()*-0.0201329);
}

double NNfunction_ns_chi03_dR::synapse0x257c850() {
   return (neuron0x2569650()*-0.0101987);
}

double NNfunction_ns_chi03_dR::synapse0x257c890() {
   return (neuron0x2569990()*-0.0984314);
}

double NNfunction_ns_chi03_dR::synapse0x257c8d0() {
   return (neuron0x2569cd0()*-0.0395011);
}

double NNfunction_ns_chi03_dR::synapse0x257c910() {
   return (neuron0x256a010()*-0.0770854);
}

double NNfunction_ns_chi03_dR::synapse0x257c950() {
   return (neuron0x256a350()*-0.0395557);
}

double NNfunction_ns_chi03_dR::synapse0x257c990() {
   return (neuron0x256a690()*-0.0423128);
}

double NNfunction_ns_chi03_dR::synapse0x257c9d0() {
   return (neuron0x256a9d0()*0.0377503);
}

double NNfunction_ns_chi03_dR::synapse0x257ca10() {
   return (neuron0x256ad10()*0.0398464);
}

double NNfunction_ns_chi03_dR::synapse0x257ca50() {
   return (neuron0x256b050()*0.0502872);
}

double NNfunction_ns_chi03_dR::synapse0x257ca90() {
   return (neuron0x256b390()*-0.0292023);
}

double NNfunction_ns_chi03_dR::synapse0x257cad0() {
   return (neuron0x256b6d0()*0.0579323);
}

double NNfunction_ns_chi03_dR::synapse0x257cb10() {
   return (neuron0x256ba10()*0.034083);
}

double NNfunction_ns_chi03_dR::synapse0x257c5a0() {
   return (neuron0x256bd50()*0.0410832);
}

double NNfunction_ns_chi03_dR::synapse0x257c5e0() {
   return (neuron0x256c2b0()*0.0704206);
}

double NNfunction_ns_chi03_dR::synapse0x257cc60() {
   return (neuron0x256c5f0()*0.0437804);
}

double NNfunction_ns_chi03_dR::synapse0x257cca0() {
   return (neuron0x256c930()*-0.012606);
}

double NNfunction_ns_chi03_dR::synapse0x257cce0() {
   return (neuron0x256cc70()*0.120126);
}

double NNfunction_ns_chi03_dR::synapse0x257cd20() {
   return (neuron0x256cfb0()*0.0217683);
}

double NNfunction_ns_chi03_dR::synapse0x257cd60() {
   return (neuron0x256d2f0()*0.00287556);
}

double NNfunction_ns_chi03_dR::synapse0x257cda0() {
   return (neuron0x256d630()*-4.71907);
}

double NNfunction_ns_chi03_dR::synapse0x257d120() {
   return (neuron0x25689e0()*-0.0581609);
}

double NNfunction_ns_chi03_dR::synapse0x257d160() {
   return (neuron0x2568c90()*-8.38586);
}

double NNfunction_ns_chi03_dR::synapse0x257d1a0() {
   return (neuron0x2568fd0()*0.00983866);
}

double NNfunction_ns_chi03_dR::synapse0x257d1e0() {
   return (neuron0x2569310()*0.01512);
}

double NNfunction_ns_chi03_dR::synapse0x257d220() {
   return (neuron0x2569650()*-0.0073041);
}

double NNfunction_ns_chi03_dR::synapse0x257d260() {
   return (neuron0x2569990()*0.0560963);
}

double NNfunction_ns_chi03_dR::synapse0x257d2a0() {
   return (neuron0x2569cd0()*-0.110569);
}

double NNfunction_ns_chi03_dR::synapse0x257d2e0() {
   return (neuron0x256a010()*0.0160098);
}

double NNfunction_ns_chi03_dR::synapse0x257d320() {
   return (neuron0x256a350()*0.0431247);
}

double NNfunction_ns_chi03_dR::synapse0x25754e0() {
   return (neuron0x256a690()*-0.0231289);
}

double NNfunction_ns_chi03_dR::synapse0x2575520() {
   return (neuron0x256a9d0()*-0.0355608);
}

double NNfunction_ns_chi03_dR::synapse0x2575560() {
   return (neuron0x256ad10()*0.00473353);
}

double NNfunction_ns_chi03_dR::synapse0x25755a0() {
   return (neuron0x256b050()*0.0667242);
}

double NNfunction_ns_chi03_dR::synapse0x25755e0() {
   return (neuron0x256b390()*-0.056901);
}

double NNfunction_ns_chi03_dR::synapse0x2575620() {
   return (neuron0x256b6d0()*-0.0571257);
}

double NNfunction_ns_chi03_dR::synapse0x2575660() {
   return (neuron0x256ba10()*0.048272);
}

double NNfunction_ns_chi03_dR::synapse0x257cf70() {
   return (neuron0x256bd50()*0.137657);
}

double NNfunction_ns_chi03_dR::synapse0x257cfb0() {
   return (neuron0x256c2b0()*-0.320701);
}

double NNfunction_ns_chi03_dR::synapse0x25757b0() {
   return (neuron0x256c5f0()*-0.0471088);
}

double NNfunction_ns_chi03_dR::synapse0x25757f0() {
   return (neuron0x256c930()*0.0142778);
}

double NNfunction_ns_chi03_dR::synapse0x2575830() {
   return (neuron0x256cc70()*-0.00875436);
}

double NNfunction_ns_chi03_dR::synapse0x2575870() {
   return (neuron0x256cfb0()*0.0634186);
}

double NNfunction_ns_chi03_dR::synapse0x25758b0() {
   return (neuron0x256d2f0()*0.058349);
}

double NNfunction_ns_chi03_dR::synapse0x25758f0() {
   return (neuron0x256d630()*-4.721);
}

double NNfunction_ns_chi03_dR::synapse0x2575c70() {
   return (neuron0x25689e0()*0.137017);
}

double NNfunction_ns_chi03_dR::synapse0x2575cb0() {
   return (neuron0x2568c90()*0.841931);
}

double NNfunction_ns_chi03_dR::synapse0x2575cf0() {
   return (neuron0x2568fd0()*0.326576);
}

double NNfunction_ns_chi03_dR::synapse0x2575d30() {
   return (neuron0x2569310()*-0.0515605);
}

double NNfunction_ns_chi03_dR::synapse0x2575d70() {
   return (neuron0x2569650()*-0.0984713);
}

double NNfunction_ns_chi03_dR::synapse0x2575db0() {
   return (neuron0x2569990()*0.0835228);
}

double NNfunction_ns_chi03_dR::synapse0x2575df0() {
   return (neuron0x2569cd0()*0.0473812);
}

double NNfunction_ns_chi03_dR::synapse0x2575e30() {
   return (neuron0x256a010()*0.0416036);
}

double NNfunction_ns_chi03_dR::synapse0x2575e70() {
   return (neuron0x256a350()*0.518477);
}

double NNfunction_ns_chi03_dR::synapse0x2575eb0() {
   return (neuron0x256a690()*0.14634);
}

double NNfunction_ns_chi03_dR::synapse0x2575ef0() {
   return (neuron0x256a9d0()*-0.0278911);
}

double NNfunction_ns_chi03_dR::synapse0x2575f30() {
   return (neuron0x256ad10()*0.0456133);
}

double NNfunction_ns_chi03_dR::synapse0x2575f70() {
   return (neuron0x256b050()*-0.0929108);
}

double NNfunction_ns_chi03_dR::synapse0x2575fb0() {
   return (neuron0x256b390()*-0.0298763);
}

double NNfunction_ns_chi03_dR::synapse0x2575ff0() {
   return (neuron0x256b6d0()*0.0928619);
}

double NNfunction_ns_chi03_dR::synapse0x2576030() {
   return (neuron0x256ba10()*-0.0314793);
}

double NNfunction_ns_chi03_dR::synapse0x2575ac0() {
   return (neuron0x256bd50()*0.0394176);
}

double NNfunction_ns_chi03_dR::synapse0x2575b00() {
   return (neuron0x256c2b0()*0.266867);
}

double NNfunction_ns_chi03_dR::synapse0x2576180() {
   return (neuron0x256c5f0()*0.0530594);
}

double NNfunction_ns_chi03_dR::synapse0x25761c0() {
   return (neuron0x256c930()*-0.0599674);
}

double NNfunction_ns_chi03_dR::synapse0x2576200() {
   return (neuron0x256cc70()*0.111737);
}

double NNfunction_ns_chi03_dR::synapse0x2576240() {
   return (neuron0x256cfb0()*0.0118743);
}

double NNfunction_ns_chi03_dR::synapse0x2576280() {
   return (neuron0x256d2f0()*0.02832);
}

double NNfunction_ns_chi03_dR::synapse0x25762c0() {
   return (neuron0x256d630()*1.38529);
}

double NNfunction_ns_chi03_dR::synapse0x2576490() {
   return (neuron0x25689e0()*0.0900197);
}

double NNfunction_ns_chi03_dR::synapse0x257f520() {
   return (neuron0x2568c90()*-1.91786);
}

double NNfunction_ns_chi03_dR::synapse0x257f560() {
   return (neuron0x2568fd0()*0.328018);
}

double NNfunction_ns_chi03_dR::synapse0x257f5a0() {
   return (neuron0x2569310()*0.00161835);
}

double NNfunction_ns_chi03_dR::synapse0x257f5e0() {
   return (neuron0x2569650()*0.011487);
}

double NNfunction_ns_chi03_dR::synapse0x257f620() {
   return (neuron0x2569990()*0.00396688);
}

double NNfunction_ns_chi03_dR::synapse0x257f660() {
   return (neuron0x2569cd0()*0.0253117);
}

double NNfunction_ns_chi03_dR::synapse0x257f6a0() {
   return (neuron0x256a010()*0.00416608);
}

double NNfunction_ns_chi03_dR::synapse0x257f6e0() {
   return (neuron0x256a350()*-0.0431582);
}

double NNfunction_ns_chi03_dR::synapse0x257f720() {
   return (neuron0x256a690()*-0.00034149);
}

double NNfunction_ns_chi03_dR::synapse0x257f760() {
   return (neuron0x256a9d0()*0.0313893);
}

double NNfunction_ns_chi03_dR::synapse0x257f7a0() {
   return (neuron0x256ad10()*-0.00949953);
}

double NNfunction_ns_chi03_dR::synapse0x257f7e0() {
   return (neuron0x256b050()*-0.0169007);
}

double NNfunction_ns_chi03_dR::synapse0x257f820() {
   return (neuron0x256b390()*-0.0301861);
}

double NNfunction_ns_chi03_dR::synapse0x257f860() {
   return (neuron0x256b6d0()*0.0182601);
}

double NNfunction_ns_chi03_dR::synapse0x257f8a0() {
   return (neuron0x256ba10()*0.00258542);
}

double NNfunction_ns_chi03_dR::synapse0x257f370() {
   return (neuron0x256bd50()*-0.0260597);
}

double NNfunction_ns_chi03_dR::synapse0x257f3b0() {
   return (neuron0x256c2b0()*-0.0366995);
}

double NNfunction_ns_chi03_dR::synapse0x257f9f0() {
   return (neuron0x256c5f0()*-0.0217135);
}

double NNfunction_ns_chi03_dR::synapse0x257fa30() {
   return (neuron0x256c930()*0.0235926);
}

double NNfunction_ns_chi03_dR::synapse0x257fa70() {
   return (neuron0x256cc70()*0.0152235);
}

double NNfunction_ns_chi03_dR::synapse0x257fab0() {
   return (neuron0x256cfb0()*-0.016891);
}

double NNfunction_ns_chi03_dR::synapse0x257faf0() {
   return (neuron0x256d2f0()*-6.24954e-05);
}

double NNfunction_ns_chi03_dR::synapse0x257fb30() {
   return (neuron0x256d630()*-0.900433);
}

double NNfunction_ns_chi03_dR::synapse0x257feb0() {
   return (neuron0x25689e0()*0.028206);
}

double NNfunction_ns_chi03_dR::synapse0x257fef0() {
   return (neuron0x2568c90()*0.0378053);
}

double NNfunction_ns_chi03_dR::synapse0x257ff30() {
   return (neuron0x2568fd0()*-0.0526774);
}

double NNfunction_ns_chi03_dR::synapse0x257ff70() {
   return (neuron0x2569310()*0.0901976);
}

double NNfunction_ns_chi03_dR::synapse0x257ffb0() {
   return (neuron0x2569650()*-0.0134578);
}

double NNfunction_ns_chi03_dR::synapse0x257fff0() {
   return (neuron0x2569990()*-0.00531777);
}

double NNfunction_ns_chi03_dR::synapse0x2580030() {
   return (neuron0x2569cd0()*-0.0226782);
}

double NNfunction_ns_chi03_dR::synapse0x2580070() {
   return (neuron0x256a010()*0.0224432);
}

double NNfunction_ns_chi03_dR::synapse0x25800b0() {
   return (neuron0x256a350()*-0.0214478);
}

double NNfunction_ns_chi03_dR::synapse0x25800f0() {
   return (neuron0x256a690()*-0.0040226);
}

double NNfunction_ns_chi03_dR::synapse0x2580130() {
   return (neuron0x256a9d0()*-0.0312245);
}

double NNfunction_ns_chi03_dR::synapse0x2580170() {
   return (neuron0x256ad10()*-0.00452924);
}

double NNfunction_ns_chi03_dR::synapse0x25801b0() {
   return (neuron0x256b050()*-0.00255762);
}

double NNfunction_ns_chi03_dR::synapse0x25801f0() {
   return (neuron0x256b390()*0.0320091);
}

double NNfunction_ns_chi03_dR::synapse0x2580230() {
   return (neuron0x256b6d0()*0.0103114);
}

double NNfunction_ns_chi03_dR::synapse0x2580270() {
   return (neuron0x256ba10()*0.0265948);
}

double NNfunction_ns_chi03_dR::synapse0x257fd00() {
   return (neuron0x256bd50()*0.000780107);
}

double NNfunction_ns_chi03_dR::synapse0x257fd40() {
   return (neuron0x256c2b0()*1.31914);
}

double NNfunction_ns_chi03_dR::synapse0x25803c0() {
   return (neuron0x256c5f0()*0.037083);
}

double NNfunction_ns_chi03_dR::synapse0x2580400() {
   return (neuron0x256c930()*-0.0138623);
}

double NNfunction_ns_chi03_dR::synapse0x2580440() {
   return (neuron0x256cc70()*0.030501);
}

double NNfunction_ns_chi03_dR::synapse0x2580480() {
   return (neuron0x256cfb0()*0.0284446);
}

double NNfunction_ns_chi03_dR::synapse0x25804c0() {
   return (neuron0x256d2f0()*0.0280232);
}

double NNfunction_ns_chi03_dR::synapse0x2580500() {
   return (neuron0x256d630()*0.0236651);
}

double NNfunction_ns_chi03_dR::synapse0x2580880() {
   return (neuron0x25689e0()*0.0283461);
}

double NNfunction_ns_chi03_dR::synapse0x25808c0() {
   return (neuron0x2568c90()*-0.0967496);
}

double NNfunction_ns_chi03_dR::synapse0x2580900() {
   return (neuron0x2568fd0()*-0.00140919);
}

double NNfunction_ns_chi03_dR::synapse0x2580940() {
   return (neuron0x2569310()*0.0602801);
}

double NNfunction_ns_chi03_dR::synapse0x2580980() {
   return (neuron0x2569650()*0.000862074);
}

double NNfunction_ns_chi03_dR::synapse0x25809c0() {
   return (neuron0x2569990()*0.00883938);
}

double NNfunction_ns_chi03_dR::synapse0x2580a00() {
   return (neuron0x2569cd0()*-0.00750711);
}

double NNfunction_ns_chi03_dR::synapse0x2580a40() {
   return (neuron0x256a010()*0.0345013);
}

double NNfunction_ns_chi03_dR::synapse0x2580a80() {
   return (neuron0x256a350()*-0.000568144);
}

double NNfunction_ns_chi03_dR::synapse0x2580ac0() {
   return (neuron0x256a690()*0.00315704);
}

double NNfunction_ns_chi03_dR::synapse0x2580b00() {
   return (neuron0x256a9d0()*-0.0242779);
}

double NNfunction_ns_chi03_dR::synapse0x2580b40() {
   return (neuron0x256ad10()*0.0184821);
}

double NNfunction_ns_chi03_dR::synapse0x2580b80() {
   return (neuron0x256b050()*0.00263804);
}

double NNfunction_ns_chi03_dR::synapse0x2580bc0() {
   return (neuron0x256b390()*0.0143518);
}

double NNfunction_ns_chi03_dR::synapse0x2580c00() {
   return (neuron0x256b6d0()*0.0134192);
}

double NNfunction_ns_chi03_dR::synapse0x2580c40() {
   return (neuron0x256ba10()*0.0265196);
}

double NNfunction_ns_chi03_dR::synapse0x25806d0() {
   return (neuron0x256bd50()*-0.00617474);
}

double NNfunction_ns_chi03_dR::synapse0x2580710() {
   return (neuron0x256c2b0()*0.995264);
}

double NNfunction_ns_chi03_dR::synapse0x2580d90() {
   return (neuron0x256c5f0()*0.0206988);
}

double NNfunction_ns_chi03_dR::synapse0x2580dd0() {
   return (neuron0x256c930()*-0.0109266);
}

double NNfunction_ns_chi03_dR::synapse0x2580e10() {
   return (neuron0x256cc70()*0.014695);
}

double NNfunction_ns_chi03_dR::synapse0x2580e50() {
   return (neuron0x256cfb0()*0.0224081);
}

double NNfunction_ns_chi03_dR::synapse0x2580e90() {
   return (neuron0x256d2f0()*0.016053);
}

double NNfunction_ns_chi03_dR::synapse0x2580ed0() {
   return (neuron0x256d630()*-0.0617284);
}

double NNfunction_ns_chi03_dR::synapse0x2581250() {
   return (neuron0x25689e0()*0.256705);
}

double NNfunction_ns_chi03_dR::synapse0x2581290() {
   return (neuron0x2568c90()*1.16888);
}

double NNfunction_ns_chi03_dR::synapse0x25812d0() {
   return (neuron0x2568fd0()*0.567336);
}

double NNfunction_ns_chi03_dR::synapse0x2581310() {
   return (neuron0x2569310()*-1.19749);
}

double NNfunction_ns_chi03_dR::synapse0x2581350() {
   return (neuron0x2569650()*0.0410779);
}

double NNfunction_ns_chi03_dR::synapse0x2581390() {
   return (neuron0x2569990()*0.19985);
}

double NNfunction_ns_chi03_dR::synapse0x25813d0() {
   return (neuron0x2569cd0()*-0.403364);
}

double NNfunction_ns_chi03_dR::synapse0x2581410() {
   return (neuron0x256a010()*-0.246496);
}

double NNfunction_ns_chi03_dR::synapse0x2581450() {
   return (neuron0x256a350()*-0.0494851);
}

double NNfunction_ns_chi03_dR::synapse0x2581490() {
   return (neuron0x256a690()*-0.153685);
}

double NNfunction_ns_chi03_dR::synapse0x25814d0() {
   return (neuron0x256a9d0()*1.03643);
}

double NNfunction_ns_chi03_dR::synapse0x2581510() {
   return (neuron0x256ad10()*0.675786);
}

double NNfunction_ns_chi03_dR::synapse0x2581550() {
   return (neuron0x256b050()*1.14248);
}

double NNfunction_ns_chi03_dR::synapse0x2581590() {
   return (neuron0x256b390()*-0.029659);
}

double NNfunction_ns_chi03_dR::synapse0x25815d0() {
   return (neuron0x256b6d0()*-0.273633);
}

double NNfunction_ns_chi03_dR::synapse0x2581610() {
   return (neuron0x256ba10()*-0.530164);
}

double NNfunction_ns_chi03_dR::synapse0x25810a0() {
   return (neuron0x256bd50()*0.392294);
}

double NNfunction_ns_chi03_dR::synapse0x25810e0() {
   return (neuron0x256c2b0()*-0.54355);
}

double NNfunction_ns_chi03_dR::synapse0x2581760() {
   return (neuron0x256c5f0()*1.08638);
}

double NNfunction_ns_chi03_dR::synapse0x25817a0() {
   return (neuron0x256c930()*0.145237);
}

double NNfunction_ns_chi03_dR::synapse0x25817e0() {
   return (neuron0x256cc70()*1.28279);
}

double NNfunction_ns_chi03_dR::synapse0x2581820() {
   return (neuron0x256cfb0()*-0.544133);
}

double NNfunction_ns_chi03_dR::synapse0x2581860() {
   return (neuron0x256d2f0()*-0.346446);
}

double NNfunction_ns_chi03_dR::synapse0x25818a0() {
   return (neuron0x256d630()*-0.972438);
}

double NNfunction_ns_chi03_dR::synapse0x2581c20() {
   return (neuron0x25689e0()*0.0717292);
}

double NNfunction_ns_chi03_dR::synapse0x2581c60() {
   return (neuron0x2568c90()*0.956512);
}

double NNfunction_ns_chi03_dR::synapse0x2581ca0() {
   return (neuron0x2568fd0()*-0.737764);
}

double NNfunction_ns_chi03_dR::synapse0x2581ce0() {
   return (neuron0x2569310()*0.138587);
}

double NNfunction_ns_chi03_dR::synapse0x2581d20() {
   return (neuron0x2569650()*0.0460186);
}

double NNfunction_ns_chi03_dR::synapse0x2581d60() {
   return (neuron0x2569990()*0.00467828);
}

double NNfunction_ns_chi03_dR::synapse0x2581da0() {
   return (neuron0x2569cd0()*0.0520709);
}

double NNfunction_ns_chi03_dR::synapse0x2581de0() {
   return (neuron0x256a010()*-0.0085421);
}

double NNfunction_ns_chi03_dR::synapse0x2581e20() {
   return (neuron0x256a350()*-0.226355);
}

double NNfunction_ns_chi03_dR::synapse0x2581e60() {
   return (neuron0x256a690()*0.0212685);
}

double NNfunction_ns_chi03_dR::synapse0x2581ea0() {
   return (neuron0x256a9d0()*0.142007);
}

double NNfunction_ns_chi03_dR::synapse0x2581ee0() {
   return (neuron0x256ad10()*-0.120514);
}

double NNfunction_ns_chi03_dR::synapse0x2581f20() {
   return (neuron0x256b050()*-0.0863784);
}

double NNfunction_ns_chi03_dR::synapse0x2581f60() {
   return (neuron0x256b390()*-0.163982);
}

double NNfunction_ns_chi03_dR::synapse0x2581fa0() {
   return (neuron0x256b6d0()*-0.0314433);
}

double NNfunction_ns_chi03_dR::synapse0x2581fe0() {
   return (neuron0x256ba10()*0.00731945);
}

double NNfunction_ns_chi03_dR::synapse0x2581a70() {
   return (neuron0x256bd50()*-0.116275);
}

double NNfunction_ns_chi03_dR::synapse0x2581ab0() {
   return (neuron0x256c2b0()*0.282272);
}

double NNfunction_ns_chi03_dR::synapse0x2582130() {
   return (neuron0x256c5f0()*-0.16103);
}

double NNfunction_ns_chi03_dR::synapse0x2582170() {
   return (neuron0x256c930()*0.095308);
}

double NNfunction_ns_chi03_dR::synapse0x25821b0() {
   return (neuron0x256cc70()*-0.00312);
}

double NNfunction_ns_chi03_dR::synapse0x25821f0() {
   return (neuron0x256cfb0()*-0.0615904);
}

double NNfunction_ns_chi03_dR::synapse0x2582230() {
   return (neuron0x256d2f0()*-0.0158952);
}

double NNfunction_ns_chi03_dR::synapse0x2582270() {
   return (neuron0x256d630()*0.269642);
}

double NNfunction_ns_chi03_dR::synapse0x25825f0() {
   return (neuron0x25689e0()*-0.996124);
}

double NNfunction_ns_chi03_dR::synapse0x2582630() {
   return (neuron0x2568c90()*-4.16859);
}

double NNfunction_ns_chi03_dR::synapse0x2582670() {
   return (neuron0x2568fd0()*-1.37204);
}

double NNfunction_ns_chi03_dR::synapse0x25826b0() {
   return (neuron0x2569310()*-0.00646561);
}

double NNfunction_ns_chi03_dR::synapse0x25826f0() {
   return (neuron0x2569650()*0.381811);
}

double NNfunction_ns_chi03_dR::synapse0x2582730() {
   return (neuron0x2569990()*-0.207854);
}

double NNfunction_ns_chi03_dR::synapse0x2582770() {
   return (neuron0x2569cd0()*-0.561694);
}

double NNfunction_ns_chi03_dR::synapse0x25827b0() {
   return (neuron0x256a010()*0.782053);
}

double NNfunction_ns_chi03_dR::synapse0x25827f0() {
   return (neuron0x256a350()*-0.119534);
}

double NNfunction_ns_chi03_dR::synapse0x2582830() {
   return (neuron0x256a690()*-0.188468);
}

double NNfunction_ns_chi03_dR::synapse0x2582870() {
   return (neuron0x256a9d0()*-0.669866);
}

double NNfunction_ns_chi03_dR::synapse0x25828b0() {
   return (neuron0x256ad10()*0.0525929);
}

double NNfunction_ns_chi03_dR::synapse0x25828f0() {
   return (neuron0x256b050()*0.163831);
}

double NNfunction_ns_chi03_dR::synapse0x2582930() {
   return (neuron0x256b390()*-0.20329);
}

double NNfunction_ns_chi03_dR::synapse0x2582970() {
   return (neuron0x256b6d0()*0.385372);
}

double NNfunction_ns_chi03_dR::synapse0x25829b0() {
   return (neuron0x256ba10()*0.161665);
}

double NNfunction_ns_chi03_dR::synapse0x2582440() {
   return (neuron0x256bd50()*0.615363);
}

double NNfunction_ns_chi03_dR::synapse0x2582480() {
   return (neuron0x256c2b0()*2.46609);
}

double NNfunction_ns_chi03_dR::synapse0x2582b00() {
   return (neuron0x256c5f0()*0.40475);
}

double NNfunction_ns_chi03_dR::synapse0x2582b40() {
   return (neuron0x256c930()*0.24565);
}

double NNfunction_ns_chi03_dR::synapse0x2582b80() {
   return (neuron0x256cc70()*-0.125727);
}

double NNfunction_ns_chi03_dR::synapse0x2582bc0() {
   return (neuron0x256cfb0()*0.976654);
}

double NNfunction_ns_chi03_dR::synapse0x2582c00() {
   return (neuron0x256d2f0()*0.190619);
}

double NNfunction_ns_chi03_dR::synapse0x2582c40() {
   return (neuron0x256d630()*1.50676);
}

double NNfunction_ns_chi03_dR::synapse0x2582fc0() {
   return (neuron0x25689e0()*0.684974);
}

double NNfunction_ns_chi03_dR::synapse0x2583000() {
   return (neuron0x2568c90()*-3.67679);
}

double NNfunction_ns_chi03_dR::synapse0x2583040() {
   return (neuron0x2568fd0()*-0.00205603);
}

double NNfunction_ns_chi03_dR::synapse0x2583080() {
   return (neuron0x2569310()*-1.27149);
}

double NNfunction_ns_chi03_dR::synapse0x25830c0() {
   return (neuron0x2569650()*0.189251);
}

double NNfunction_ns_chi03_dR::synapse0x2583100() {
   return (neuron0x2569990()*-0.85813);
}

double NNfunction_ns_chi03_dR::synapse0x2583140() {
   return (neuron0x2569cd0()*-0.431664);
}

double NNfunction_ns_chi03_dR::synapse0x2583180() {
   return (neuron0x256a010()*0.242734);
}

double NNfunction_ns_chi03_dR::synapse0x25831c0() {
   return (neuron0x256a350()*0.218149);
}

double NNfunction_ns_chi03_dR::synapse0x2583200() {
   return (neuron0x256a690()*0.677297);
}

double NNfunction_ns_chi03_dR::synapse0x2583240() {
   return (neuron0x256a9d0()*0.499073);
}

double NNfunction_ns_chi03_dR::synapse0x2583280() {
   return (neuron0x256ad10()*-1.6);
}

double NNfunction_ns_chi03_dR::synapse0x25832c0() {
   return (neuron0x256b050()*1.58645);
}

double NNfunction_ns_chi03_dR::synapse0x2583300() {
   return (neuron0x256b390()*-0.924294);
}

double NNfunction_ns_chi03_dR::synapse0x2583340() {
   return (neuron0x256b6d0()*0.58156);
}

double NNfunction_ns_chi03_dR::synapse0x2583380() {
   return (neuron0x256ba10()*0.789429);
}

double NNfunction_ns_chi03_dR::synapse0x2582e10() {
   return (neuron0x256bd50()*-0.0536495);
}

double NNfunction_ns_chi03_dR::synapse0x2582e50() {
   return (neuron0x256c2b0()*0.630831);
}

double NNfunction_ns_chi03_dR::synapse0x25834d0() {
   return (neuron0x256c5f0()*-0.272688);
}

double NNfunction_ns_chi03_dR::synapse0x2583510() {
   return (neuron0x256c930()*0.709593);
}

double NNfunction_ns_chi03_dR::synapse0x2583550() {
   return (neuron0x256cc70()*-0.938849);
}

double NNfunction_ns_chi03_dR::synapse0x2583590() {
   return (neuron0x256cfb0()*-0.345651);
}

double NNfunction_ns_chi03_dR::synapse0x25835d0() {
   return (neuron0x256d2f0()*-0.40746);
}

double NNfunction_ns_chi03_dR::synapse0x2583610() {
   return (neuron0x256d630()*-0.790019);
}

double NNfunction_ns_chi03_dR::synapse0x2583990() {
   return (neuron0x25689e0()*-0.00399012);
}

double NNfunction_ns_chi03_dR::synapse0x25839d0() {
   return (neuron0x2568c90()*-0.312327);
}

double NNfunction_ns_chi03_dR::synapse0x2583a10() {
   return (neuron0x2568fd0()*-0.134559);
}

double NNfunction_ns_chi03_dR::synapse0x2583a50() {
   return (neuron0x2569310()*-0.00281188);
}

double NNfunction_ns_chi03_dR::synapse0x2583a90() {
   return (neuron0x2569650()*0.0308502);
}

double NNfunction_ns_chi03_dR::synapse0x2583ad0() {
   return (neuron0x2569990()*-0.0139569);
}

double NNfunction_ns_chi03_dR::synapse0x2583b10() {
   return (neuron0x2569cd0()*0.0113046);
}

double NNfunction_ns_chi03_dR::synapse0x2583b50() {
   return (neuron0x256a010()*-0.0168495);
}

double NNfunction_ns_chi03_dR::synapse0x2583b90() {
   return (neuron0x256a350()*0.0303311);
}

double NNfunction_ns_chi03_dR::synapse0x2583bd0() {
   return (neuron0x256a690()*0.0125101);
}

double NNfunction_ns_chi03_dR::synapse0x2583c10() {
   return (neuron0x256a9d0()*-0.0465561);
}

double NNfunction_ns_chi03_dR::synapse0x2583c50() {
   return (neuron0x256ad10()*-0.0508796);
}

double NNfunction_ns_chi03_dR::synapse0x2583c90() {
   return (neuron0x256b050()*0.0665186);
}

double NNfunction_ns_chi03_dR::synapse0x2583cd0() {
   return (neuron0x256b390()*-0.0114603);
}

double NNfunction_ns_chi03_dR::synapse0x2583d10() {
   return (neuron0x256b6d0()*0.0105354);
}

double NNfunction_ns_chi03_dR::synapse0x2583d50() {
   return (neuron0x256ba10()*-0.0500987);
}

double NNfunction_ns_chi03_dR::synapse0x25837e0() {
   return (neuron0x256bd50()*-0.0395351);
}

double NNfunction_ns_chi03_dR::synapse0x2583820() {
   return (neuron0x256c2b0()*0.262148);
}

double NNfunction_ns_chi03_dR::synapse0x2583ea0() {
   return (neuron0x256c5f0()*-0.016499);
}

double NNfunction_ns_chi03_dR::synapse0x2583ee0() {
   return (neuron0x256c930()*-0.0333976);
}

double NNfunction_ns_chi03_dR::synapse0x2583f20() {
   return (neuron0x256cc70()*0.00571337);
}

double NNfunction_ns_chi03_dR::synapse0x2583f60() {
   return (neuron0x256cfb0()*0.0121089);
}

double NNfunction_ns_chi03_dR::synapse0x2583fa0() {
   return (neuron0x256d2f0()*-0.0183701);
}

double NNfunction_ns_chi03_dR::synapse0x2583fe0() {
   return (neuron0x256d630()*-3.86592);
}

double NNfunction_ns_chi03_dR::synapse0x2584360() {
   return (neuron0x25689e0()*0.037787);
}

double NNfunction_ns_chi03_dR::synapse0x2578930() {
   return (neuron0x2568c90()*-0.987871);
}

double NNfunction_ns_chi03_dR::synapse0x2578970() {
   return (neuron0x2568fd0()*-0.499597);
}

double NNfunction_ns_chi03_dR::synapse0x25789b0() {
   return (neuron0x2569310()*0.0297194);
}

double NNfunction_ns_chi03_dR::synapse0x2578c00() {
   return (neuron0x2569650()*-0.00699246);
}

double NNfunction_ns_chi03_dR::synapse0x2578c40() {
   return (neuron0x2569990()*-0.0178298);
}

double NNfunction_ns_chi03_dR::synapse0x2578c80() {
   return (neuron0x2569cd0()*0.01632);
}

double NNfunction_ns_chi03_dR::synapse0x2578ed0() {
   return (neuron0x256a010()*-0.00152299);
}

double NNfunction_ns_chi03_dR::synapse0x2578f10() {
   return (neuron0x256a350()*0.0314272);
}

double NNfunction_ns_chi03_dR::synapse0x2579160() {
   return (neuron0x256a690()*0.0107332);
}

double NNfunction_ns_chi03_dR::synapse0x25791a0() {
   return (neuron0x256a9d0()*-0.0370906);
}

double NNfunction_ns_chi03_dR::synapse0x25791e0() {
   return (neuron0x256ad10()*-0.0323826);
}

double NNfunction_ns_chi03_dR::synapse0x2579430() {
   return (neuron0x256b050()*-0.0348835);
}

double NNfunction_ns_chi03_dR::synapse0x2579470() {
   return (neuron0x256b390()*-0.00095049);
}

double NNfunction_ns_chi03_dR::synapse0x25796c0() {
   return (neuron0x256b6d0()*-0.00314948);
}

double NNfunction_ns_chi03_dR::synapse0x2579700() {
   return (neuron0x256ba10()*0.00717658);
}

double NNfunction_ns_chi03_dR::synapse0x25841b0() {
   return (neuron0x256bd50()*0.0360753);
}

double NNfunction_ns_chi03_dR::synapse0x25841f0() {
   return (neuron0x256c2b0()*-0.313363);
}

double NNfunction_ns_chi03_dR::synapse0x2579850() {
   return (neuron0x256c5f0()*-0.0086577);
}

double NNfunction_ns_chi03_dR::synapse0x2579d60() {
   return (neuron0x256c930()*-0.0103311);
}

double NNfunction_ns_chi03_dR::synapse0x2579da0() {
   return (neuron0x256cc70()*0.00436162);
}

double NNfunction_ns_chi03_dR::synapse0x2579de0() {
   return (neuron0x256cfb0()*0.0278141);
}

double NNfunction_ns_chi03_dR::synapse0x257a030() {
   return (neuron0x256d2f0()*-0.000177549);
}

double NNfunction_ns_chi03_dR::synapse0x257a070() {
   return (neuron0x256d630()*-0.321164);
}

double NNfunction_ns_chi03_dR::synapse0x2579920() {
   return (neuron0x25689e0()*0.190616);
}

double NNfunction_ns_chi03_dR::synapse0x2579960() {
   return (neuron0x2568c90()*4.60666);
}

double NNfunction_ns_chi03_dR::synapse0x25799a0() {
   return (neuron0x2568fd0()*0.388771);
}

double NNfunction_ns_chi03_dR::synapse0x25799e0() {
   return (neuron0x2569310()*-0.0402317);
}

double NNfunction_ns_chi03_dR::synapse0x257a360() {
   return (neuron0x2569650()*0.0348857);
}

double NNfunction_ns_chi03_dR::synapse0x25866b0() {
   return (neuron0x2569990()*-0.0610881);
}

double NNfunction_ns_chi03_dR::synapse0x25866f0() {
   return (neuron0x2569cd0()*-0.0488165);
}

double NNfunction_ns_chi03_dR::synapse0x2586730() {
   return (neuron0x256a010()*0.0412985);
}

double NNfunction_ns_chi03_dR::synapse0x2586770() {
   return (neuron0x256a350()*-0.0577368);
}

double NNfunction_ns_chi03_dR::synapse0x25867b0() {
   return (neuron0x256a690()*-0.0481806);
}

double NNfunction_ns_chi03_dR::synapse0x25867f0() {
   return (neuron0x256a9d0()*0.0154658);
}

double NNfunction_ns_chi03_dR::synapse0x2586830() {
   return (neuron0x256ad10()*0.0369095);
}

double NNfunction_ns_chi03_dR::synapse0x2586870() {
   return (neuron0x256b050()*0.0169927);
}

double NNfunction_ns_chi03_dR::synapse0x25868b0() {
   return (neuron0x256b390()*-0.0608509);
}

double NNfunction_ns_chi03_dR::synapse0x25868f0() {
   return (neuron0x256b6d0()*-0.0291448);
}

double NNfunction_ns_chi03_dR::synapse0x2586930() {
   return (neuron0x256ba10()*0.0200974);
}

double NNfunction_ns_chi03_dR::synapse0x257a240() {
   return (neuron0x256bd50()*0.013646);
}

double NNfunction_ns_chi03_dR::synapse0x257a280() {
   return (neuron0x256c2b0()*-0.00174978);
}

double NNfunction_ns_chi03_dR::synapse0x2586a80() {
   return (neuron0x256c5f0()*0.0692304);
}

double NNfunction_ns_chi03_dR::synapse0x2586ac0() {
   return (neuron0x256c930()*-0.0468005);
}

double NNfunction_ns_chi03_dR::synapse0x2586b00() {
   return (neuron0x256cc70()*0.164385);
}

double NNfunction_ns_chi03_dR::synapse0x2586b40() {
   return (neuron0x256cfb0()*0.00930446);
}

double NNfunction_ns_chi03_dR::synapse0x2586b80() {
   return (neuron0x256d2f0()*0.0509613);
}

double NNfunction_ns_chi03_dR::synapse0x2586bc0() {
   return (neuron0x256d630()*0.356461);
}

double NNfunction_ns_chi03_dR::synapse0x2586f40() {
   return (neuron0x25689e0()*-0.864184);
}

double NNfunction_ns_chi03_dR::synapse0x2586f80() {
   return (neuron0x2568c90()*2.28536);
}

double NNfunction_ns_chi03_dR::synapse0x2586fc0() {
   return (neuron0x2568fd0()*0.0759493);
}

double NNfunction_ns_chi03_dR::synapse0x2587000() {
   return (neuron0x2569310()*-0.2797);
}

double NNfunction_ns_chi03_dR::synapse0x2587040() {
   return (neuron0x2569650()*-0.368845);
}

double NNfunction_ns_chi03_dR::synapse0x2587080() {
   return (neuron0x2569990()*0.499339);
}

double NNfunction_ns_chi03_dR::synapse0x25870c0() {
   return (neuron0x2569cd0()*0.0917175);
}

double NNfunction_ns_chi03_dR::synapse0x2587100() {
   return (neuron0x256a010()*0.498363);
}

double NNfunction_ns_chi03_dR::synapse0x2587140() {
   return (neuron0x256a350()*-0.0779094);
}

double NNfunction_ns_chi03_dR::synapse0x2587180() {
   return (neuron0x256a690()*-0.434189);
}

double NNfunction_ns_chi03_dR::synapse0x25871c0() {
   return (neuron0x256a9d0()*0.212011);
}

double NNfunction_ns_chi03_dR::synapse0x2587200() {
   return (neuron0x256ad10()*0.304097);
}

double NNfunction_ns_chi03_dR::synapse0x2587240() {
   return (neuron0x256b050()*-0.0476337);
}

double NNfunction_ns_chi03_dR::synapse0x2587280() {
   return (neuron0x256b390()*-0.52155);
}

double NNfunction_ns_chi03_dR::synapse0x25872c0() {
   return (neuron0x256b6d0()*-0.00960072);
}

double NNfunction_ns_chi03_dR::synapse0x2587300() {
   return (neuron0x256ba10()*1.04646);
}

double NNfunction_ns_chi03_dR::synapse0x2586d90() {
   return (neuron0x256bd50()*-0.0383045);
}

double NNfunction_ns_chi03_dR::synapse0x2586dd0() {
   return (neuron0x256c2b0()*-0.757108);
}

double NNfunction_ns_chi03_dR::synapse0x2587450() {
   return (neuron0x256c5f0()*0.129142);
}

double NNfunction_ns_chi03_dR::synapse0x2587490() {
   return (neuron0x256c930()*0.322483);
}

double NNfunction_ns_chi03_dR::synapse0x25874d0() {
   return (neuron0x256cc70()*0.439465);
}

double NNfunction_ns_chi03_dR::synapse0x2587510() {
   return (neuron0x256cfb0()*-0.00256525);
}

double NNfunction_ns_chi03_dR::synapse0x2587550() {
   return (neuron0x256d2f0()*0.0399607);
}

double NNfunction_ns_chi03_dR::synapse0x2587590() {
   return (neuron0x256d630()*-0.38542);
}

double NNfunction_ns_chi03_dR::synapse0x2587910() {
   return (neuron0x25689e0()*0.0014852);
}

double NNfunction_ns_chi03_dR::synapse0x2587950() {
   return (neuron0x2568c90()*0.075082);
}

double NNfunction_ns_chi03_dR::synapse0x2587990() {
   return (neuron0x2568fd0()*1.77264);
}

double NNfunction_ns_chi03_dR::synapse0x25879d0() {
   return (neuron0x2569310()*0.00739689);
}

double NNfunction_ns_chi03_dR::synapse0x2587a10() {
   return (neuron0x2569650()*-0.00369005);
}

double NNfunction_ns_chi03_dR::synapse0x2587a50() {
   return (neuron0x2569990()*-0.0186105);
}

double NNfunction_ns_chi03_dR::synapse0x2587a90() {
   return (neuron0x2569cd0()*-0.014247);
}

double NNfunction_ns_chi03_dR::synapse0x2587ad0() {
   return (neuron0x256a010()*0.00411406);
}

double NNfunction_ns_chi03_dR::synapse0x2587b10() {
   return (neuron0x256a350()*0.0413534);
}

double NNfunction_ns_chi03_dR::synapse0x2587b50() {
   return (neuron0x256a690()*0.00719791);
}

double NNfunction_ns_chi03_dR::synapse0x2587b90() {
   return (neuron0x256a9d0()*0.00517047);
}

double NNfunction_ns_chi03_dR::synapse0x2587bd0() {
   return (neuron0x256ad10()*0.00907958);
}

double NNfunction_ns_chi03_dR::synapse0x2587c10() {
   return (neuron0x256b050()*0.0337498);
}

double NNfunction_ns_chi03_dR::synapse0x2587c50() {
   return (neuron0x256b390()*0.0146458);
}

double NNfunction_ns_chi03_dR::synapse0x2587c90() {
   return (neuron0x256b6d0()*-0.00992786);
}

double NNfunction_ns_chi03_dR::synapse0x2587cd0() {
   return (neuron0x256ba10()*-0.014817);
}

double NNfunction_ns_chi03_dR::synapse0x2587760() {
   return (neuron0x256bd50()*-0.00115064);
}

double NNfunction_ns_chi03_dR::synapse0x25877a0() {
   return (neuron0x256c2b0()*0.199889);
}

double NNfunction_ns_chi03_dR::synapse0x2587e20() {
   return (neuron0x256c5f0()*-0.0200511);
}

double NNfunction_ns_chi03_dR::synapse0x2587e60() {
   return (neuron0x256c930()*-0.0150893);
}

double NNfunction_ns_chi03_dR::synapse0x2587ea0() {
   return (neuron0x256cc70()*0.00409798);
}

double NNfunction_ns_chi03_dR::synapse0x2587ee0() {
   return (neuron0x256cfb0()*0.00119648);
}

double NNfunction_ns_chi03_dR::synapse0x2587f20() {
   return (neuron0x256d2f0()*0.0224727);
}

double NNfunction_ns_chi03_dR::synapse0x2587f60() {
   return (neuron0x256d630()*0.536081);
}

double NNfunction_ns_chi03_dR::synapse0x25882e0() {
   return (neuron0x25689e0()*-0.0143238);
}

double NNfunction_ns_chi03_dR::synapse0x2588320() {
   return (neuron0x2568c90()*-1.06408);
}

double NNfunction_ns_chi03_dR::synapse0x2588360() {
   return (neuron0x2568fd0()*0.315257);
}

double NNfunction_ns_chi03_dR::synapse0x25883a0() {
   return (neuron0x2569310()*0.00475391);
}

double NNfunction_ns_chi03_dR::synapse0x25883e0() {
   return (neuron0x2569650()*0.00214553);
}

double NNfunction_ns_chi03_dR::synapse0x2588420() {
   return (neuron0x2569990()*0.0181243);
}

double NNfunction_ns_chi03_dR::synapse0x2588460() {
   return (neuron0x2569cd0()*-0.00943755);
}

double NNfunction_ns_chi03_dR::synapse0x25884a0() {
   return (neuron0x256a010()*-0.0121923);
}

double NNfunction_ns_chi03_dR::synapse0x25884e0() {
   return (neuron0x256a350()*-0.00327866);
}

double NNfunction_ns_chi03_dR::synapse0x2588520() {
   return (neuron0x256a690()*-0.0114111);
}

double NNfunction_ns_chi03_dR::synapse0x2588560() {
   return (neuron0x256a9d0()*0.0087533);
}

double NNfunction_ns_chi03_dR::synapse0x25885a0() {
   return (neuron0x256ad10()*-0.00302192);
}

double NNfunction_ns_chi03_dR::synapse0x25885e0() {
   return (neuron0x256b050()*0.00461578);
}

double NNfunction_ns_chi03_dR::synapse0x2588620() {
   return (neuron0x256b390()*-0.0225609);
}

double NNfunction_ns_chi03_dR::synapse0x2588660() {
   return (neuron0x256b6d0()*-0.00749546);
}

double NNfunction_ns_chi03_dR::synapse0x25886a0() {
   return (neuron0x256ba10()*-0.00333199);
}

double NNfunction_ns_chi03_dR::synapse0x2588130() {
   return (neuron0x256bd50()*0.000632358);
}

double NNfunction_ns_chi03_dR::synapse0x2588170() {
   return (neuron0x256c2b0()*-0.0276112);
}

double NNfunction_ns_chi03_dR::synapse0x25887f0() {
   return (neuron0x256c5f0()*0.003034);
}

double NNfunction_ns_chi03_dR::synapse0x2588830() {
   return (neuron0x256c930()*0.00614144);
}

double NNfunction_ns_chi03_dR::synapse0x2588870() {
   return (neuron0x256cc70()*0.0123918);
}

double NNfunction_ns_chi03_dR::synapse0x25888b0() {
   return (neuron0x256cfb0()*-0.0141736);
}

double NNfunction_ns_chi03_dR::synapse0x25888f0() {
   return (neuron0x256d2f0()*-0.00539221);
}

double NNfunction_ns_chi03_dR::synapse0x2588930() {
   return (neuron0x256d630()*0.615887);
}

double NNfunction_ns_chi03_dR::synapse0x2588cb0() {
   return (neuron0x25689e0()*0.0340272);
}

double NNfunction_ns_chi03_dR::synapse0x2588cf0() {
   return (neuron0x2568c90()*5.80046);
}

double NNfunction_ns_chi03_dR::synapse0x2588d30() {
   return (neuron0x2568fd0()*-8.20669);
}

double NNfunction_ns_chi03_dR::synapse0x2588d70() {
   return (neuron0x2569310()*-0.0219178);
}

double NNfunction_ns_chi03_dR::synapse0x2588db0() {
   return (neuron0x2569650()*0.00878742);
}

double NNfunction_ns_chi03_dR::synapse0x2588df0() {
   return (neuron0x2569990()*-0.0132389);
}

double NNfunction_ns_chi03_dR::synapse0x2588e30() {
   return (neuron0x2569cd0()*-0.00992714);
}

double NNfunction_ns_chi03_dR::synapse0x2588e70() {
   return (neuron0x256a010()*-0.0220563);
}

double NNfunction_ns_chi03_dR::synapse0x2588eb0() {
   return (neuron0x256a350()*0.00869253);
}

double NNfunction_ns_chi03_dR::synapse0x2588ef0() {
   return (neuron0x256a690()*-0.0224618);
}

double NNfunction_ns_chi03_dR::synapse0x2588f30() {
   return (neuron0x256a9d0()*0.0334058);
}

double NNfunction_ns_chi03_dR::synapse0x2588f70() {
   return (neuron0x256ad10()*-0.0195675);
}

double NNfunction_ns_chi03_dR::synapse0x2588fb0() {
   return (neuron0x256b050()*-0.0404519);
}

double NNfunction_ns_chi03_dR::synapse0x2588ff0() {
   return (neuron0x256b390()*0.0160499);
}

double NNfunction_ns_chi03_dR::synapse0x2589030() {
   return (neuron0x256b6d0()*-0.0129983);
}

double NNfunction_ns_chi03_dR::synapse0x2589070() {
   return (neuron0x256ba10()*0.026577);
}

double NNfunction_ns_chi03_dR::synapse0x2588b00() {
   return (neuron0x256bd50()*0.0173695);
}

double NNfunction_ns_chi03_dR::synapse0x2588b40() {
   return (neuron0x256c2b0()*-0.116508);
}

double NNfunction_ns_chi03_dR::synapse0x25891c0() {
   return (neuron0x256c5f0()*-0.0198865);
}

double NNfunction_ns_chi03_dR::synapse0x2589200() {
   return (neuron0x256c930()*0.0151604);
}

double NNfunction_ns_chi03_dR::synapse0x2589240() {
   return (neuron0x256cc70()*0.0417251);
}

double NNfunction_ns_chi03_dR::synapse0x2589280() {
   return (neuron0x256cfb0()*-0.00930016);
}

double NNfunction_ns_chi03_dR::synapse0x25892c0() {
   return (neuron0x256d2f0()*0.00589022);
}

double NNfunction_ns_chi03_dR::synapse0x2589300() {
   return (neuron0x256d630()*-0.18289);
}

double NNfunction_ns_chi03_dR::synapse0x2589680() {
   return (neuron0x25689e0()*-0.0214078);
}

double NNfunction_ns_chi03_dR::synapse0x25896c0() {
   return (neuron0x2568c90()*-2.25919);
}

double NNfunction_ns_chi03_dR::synapse0x2589700() {
   return (neuron0x2568fd0()*-2.69874);
}

double NNfunction_ns_chi03_dR::synapse0x2589740() {
   return (neuron0x2569310()*-0.00448744);
}

double NNfunction_ns_chi03_dR::synapse0x2589780() {
   return (neuron0x2569650()*0.0721831);
}

double NNfunction_ns_chi03_dR::synapse0x25897c0() {
   return (neuron0x2569990()*-0.0437958);
}

double NNfunction_ns_chi03_dR::synapse0x2589800() {
   return (neuron0x2569cd0()*0.0156846);
}

double NNfunction_ns_chi03_dR::synapse0x2589840() {
   return (neuron0x256a010()*0.0165442);
}

double NNfunction_ns_chi03_dR::synapse0x2589880() {
   return (neuron0x256a350()*-0.0257125);
}

double NNfunction_ns_chi03_dR::synapse0x25898c0() {
   return (neuron0x256a690()*-0.0226605);
}

double NNfunction_ns_chi03_dR::synapse0x2589900() {
   return (neuron0x256a9d0()*0.0223116);
}

double NNfunction_ns_chi03_dR::synapse0x2589940() {
   return (neuron0x256ad10()*0.0210559);
}

double NNfunction_ns_chi03_dR::synapse0x2589980() {
   return (neuron0x256b050()*0.0365111);
}

double NNfunction_ns_chi03_dR::synapse0x25899c0() {
   return (neuron0x256b390()*0.0106395);
}

double NNfunction_ns_chi03_dR::synapse0x2589a00() {
   return (neuron0x256b6d0()*-0.0210455);
}

double NNfunction_ns_chi03_dR::synapse0x2589a40() {
   return (neuron0x256ba10()*-0.0161906);
}

double NNfunction_ns_chi03_dR::synapse0x25894d0() {
   return (neuron0x256bd50()*-0.101885);
}

double NNfunction_ns_chi03_dR::synapse0x2589510() {
   return (neuron0x256c2b0()*-0.158019);
}

double NNfunction_ns_chi03_dR::synapse0x2589b90() {
   return (neuron0x256c5f0()*0.0276942);
}

double NNfunction_ns_chi03_dR::synapse0x2589bd0() {
   return (neuron0x256c930()*-0.0180257);
}

double NNfunction_ns_chi03_dR::synapse0x2589c10() {
   return (neuron0x256cc70()*-0.035482);
}

double NNfunction_ns_chi03_dR::synapse0x2589c50() {
   return (neuron0x256cfb0()*-0.0265097);
}

double NNfunction_ns_chi03_dR::synapse0x2589c90() {
   return (neuron0x256d2f0()*-0.00276528);
}

double NNfunction_ns_chi03_dR::synapse0x2589cd0() {
   return (neuron0x256d630()*0.0338385);
}

double NNfunction_ns_chi03_dR::synapse0x258a050() {
   return (neuron0x25689e0()*0.0145991);
}

double NNfunction_ns_chi03_dR::synapse0x258a090() {
   return (neuron0x2568c90()*3.15802);
}

double NNfunction_ns_chi03_dR::synapse0x258a0d0() {
   return (neuron0x2568fd0()*0.417658);
}

double NNfunction_ns_chi03_dR::synapse0x258a110() {
   return (neuron0x2569310()*-0.0107569);
}

double NNfunction_ns_chi03_dR::synapse0x258a150() {
   return (neuron0x2569650()*0.0531069);
}

double NNfunction_ns_chi03_dR::synapse0x258a190() {
   return (neuron0x2569990()*0.0722097);
}

double NNfunction_ns_chi03_dR::synapse0x258a1d0() {
   return (neuron0x2569cd0()*-0.000972236);
}

double NNfunction_ns_chi03_dR::synapse0x258a210() {
   return (neuron0x256a010()*0.0685292);
}

double NNfunction_ns_chi03_dR::synapse0x258a250() {
   return (neuron0x256a350()*0.0524852);
}

double NNfunction_ns_chi03_dR::synapse0x258a290() {
   return (neuron0x256a690()*0.0710913);
}

double NNfunction_ns_chi03_dR::synapse0x258a2d0() {
   return (neuron0x256a9d0()*0.0406868);
}

double NNfunction_ns_chi03_dR::synapse0x258a310() {
   return (neuron0x256ad10()*0.0631192);
}

double NNfunction_ns_chi03_dR::synapse0x258a350() {
   return (neuron0x256b050()*-0.0257673);
}

double NNfunction_ns_chi03_dR::synapse0x258a390() {
   return (neuron0x256b390()*0.0123907);
}

double NNfunction_ns_chi03_dR::synapse0x258a3d0() {
   return (neuron0x256b6d0()*0.0273991);
}

double NNfunction_ns_chi03_dR::synapse0x258a410() {
   return (neuron0x256ba10()*-0.0287752);
}

double NNfunction_ns_chi03_dR::synapse0x2589ea0() {
   return (neuron0x256bd50()*-0.0123252);
}

double NNfunction_ns_chi03_dR::synapse0x2589ee0() {
   return (neuron0x256c2b0()*1.3289);
}

double NNfunction_ns_chi03_dR::synapse0x258a560() {
   return (neuron0x256c5f0()*-0.0403992);
}

double NNfunction_ns_chi03_dR::synapse0x258a5a0() {
   return (neuron0x256c930()*0.0167089);
}

double NNfunction_ns_chi03_dR::synapse0x258a5e0() {
   return (neuron0x256cc70()*-0.0173894);
}

double NNfunction_ns_chi03_dR::synapse0x258a620() {
   return (neuron0x256cfb0()*-0.0318058);
}

double NNfunction_ns_chi03_dR::synapse0x258a660() {
   return (neuron0x256d2f0()*0.0325512);
}

double NNfunction_ns_chi03_dR::synapse0x258a6a0() {
   return (neuron0x256d630()*-0.293846);
}

double NNfunction_ns_chi03_dR::synapse0x258aa20() {
   return (neuron0x25689e0()*-0.0183926);
}

double NNfunction_ns_chi03_dR::synapse0x258aa60() {
   return (neuron0x2568c90()*3.35296);
}

double NNfunction_ns_chi03_dR::synapse0x258aaa0() {
   return (neuron0x2568fd0()*9.31608);
}

double NNfunction_ns_chi03_dR::synapse0x258aae0() {
   return (neuron0x2569310()*0.0554985);
}

double NNfunction_ns_chi03_dR::synapse0x258ab20() {
   return (neuron0x2569650()*-0.0812647);
}

double NNfunction_ns_chi03_dR::synapse0x258ab60() {
   return (neuron0x2569990()*0.0187331);
}

double NNfunction_ns_chi03_dR::synapse0x258aba0() {
   return (neuron0x2569cd0()*-0.102322);
}

double NNfunction_ns_chi03_dR::synapse0x258abe0() {
   return (neuron0x256a010()*0.000325971);
}

double NNfunction_ns_chi03_dR::synapse0x258ac20() {
   return (neuron0x256a350()*0.0934319);
}

double NNfunction_ns_chi03_dR::synapse0x258ac60() {
   return (neuron0x256a690()*0.0398821);
}

double NNfunction_ns_chi03_dR::synapse0x258aca0() {
   return (neuron0x256a9d0()*0.0710814);
}

double NNfunction_ns_chi03_dR::synapse0x258ace0() {
   return (neuron0x256ad10()*0.048831);
}

double NNfunction_ns_chi03_dR::synapse0x258ad20() {
   return (neuron0x256b050()*-8.69353e-05);
}

double NNfunction_ns_chi03_dR::synapse0x258ad60() {
   return (neuron0x256b390()*0.0194464);
}

double NNfunction_ns_chi03_dR::synapse0x258ada0() {
   return (neuron0x256b6d0()*-0.098563);
}

double NNfunction_ns_chi03_dR::synapse0x258ade0() {
   return (neuron0x256ba10()*-0.00228201);
}

double NNfunction_ns_chi03_dR::synapse0x258a870() {
   return (neuron0x256bd50()*-0.0144345);
}

double NNfunction_ns_chi03_dR::synapse0x258a8b0() {
   return (neuron0x256c2b0()*0.726153);
}

double NNfunction_ns_chi03_dR::synapse0x258af30() {
   return (neuron0x256c5f0()*0.0887118);
}

double NNfunction_ns_chi03_dR::synapse0x258af70() {
   return (neuron0x256c930()*0.0141223);
}

double NNfunction_ns_chi03_dR::synapse0x258afb0() {
   return (neuron0x256cc70()*-0.0295962);
}

double NNfunction_ns_chi03_dR::synapse0x258aff0() {
   return (neuron0x256cfb0()*-0.0661165);
}

double NNfunction_ns_chi03_dR::synapse0x258b030() {
   return (neuron0x256d2f0()*0.0181815);
}

double NNfunction_ns_chi03_dR::synapse0x258b070() {
   return (neuron0x256d630()*0.0199738);
}

double NNfunction_ns_chi03_dR::synapse0x2573b20() {
   return (neuron0x25689e0()*-0.0350353);
}

double NNfunction_ns_chi03_dR::synapse0x2573b60() {
   return (neuron0x2568c90()*-0.0291411);
}

double NNfunction_ns_chi03_dR::synapse0x2573ba0() {
   return (neuron0x2568fd0()*0.0119598);
}

double NNfunction_ns_chi03_dR::synapse0x2573be0() {
   return (neuron0x2569310()*-0.491635);
}

double NNfunction_ns_chi03_dR::synapse0x2573c20() {
   return (neuron0x2569650()*-0.0124237);
}

double NNfunction_ns_chi03_dR::synapse0x2573c60() {
   return (neuron0x2569990()*0.00845232);
}

double NNfunction_ns_chi03_dR::synapse0x2573ca0() {
   return (neuron0x2569cd0()*0.022737);
}

double NNfunction_ns_chi03_dR::synapse0x2573ce0() {
   return (neuron0x256a010()*-0.0291665);
}

double NNfunction_ns_chi03_dR::synapse0x258b800() {
   return (neuron0x256a350()*-0.0144185);
}

double NNfunction_ns_chi03_dR::synapse0x258b840() {
   return (neuron0x256a690()*-0.00294941);
}

double NNfunction_ns_chi03_dR::synapse0x258b880() {
   return (neuron0x256a9d0()*0.0125621);
}

double NNfunction_ns_chi03_dR::synapse0x258b8c0() {
   return (neuron0x256ad10()*0.00840968);
}

double NNfunction_ns_chi03_dR::synapse0x258b900() {
   return (neuron0x256b050()*-0.00241398);
}

double NNfunction_ns_chi03_dR::synapse0x258b940() {
   return (neuron0x256b390()*-0.011171);
}

double NNfunction_ns_chi03_dR::synapse0x258b980() {
   return (neuron0x256b6d0()*-0.00987382);
}

double NNfunction_ns_chi03_dR::synapse0x258b9c0() {
   return (neuron0x256ba10()*-0.038661);
}

double NNfunction_ns_chi03_dR::synapse0x258b240() {
   return (neuron0x256bd50()*0.0189469);
}

double NNfunction_ns_chi03_dR::synapse0x258b280() {
   return (neuron0x256c2b0()*-0.450243);
}

double NNfunction_ns_chi03_dR::synapse0x258bb10() {
   return (neuron0x256c5f0()*-0.00204521);
}

double NNfunction_ns_chi03_dR::synapse0x258bb50() {
   return (neuron0x256c930()*0.0196931);
}

double NNfunction_ns_chi03_dR::synapse0x258bb90() {
   return (neuron0x256cc70()*-0.0225456);
}

double NNfunction_ns_chi03_dR::synapse0x258bbd0() {
   return (neuron0x256cfb0()*-0.0244244);
}

double NNfunction_ns_chi03_dR::synapse0x258bc10() {
   return (neuron0x256d2f0()*-0.0240912);
}

double NNfunction_ns_chi03_dR::synapse0x258bc50() {
   return (neuron0x256d630()*-0.0207262);
}

double NNfunction_ns_chi03_dR::synapse0x258bfd0() {
   return (neuron0x25689e0()*-0.0338096);
}

double NNfunction_ns_chi03_dR::synapse0x258c010() {
   return (neuron0x2568c90()*-0.0859166);
}

double NNfunction_ns_chi03_dR::synapse0x258c050() {
   return (neuron0x2568fd0()*0.0450083);
}

double NNfunction_ns_chi03_dR::synapse0x258c090() {
   return (neuron0x2569310()*0.662383);
}

double NNfunction_ns_chi03_dR::synapse0x258c0d0() {
   return (neuron0x2569650()*0.0130296);
}

double NNfunction_ns_chi03_dR::synapse0x258c110() {
   return (neuron0x2569990()*0.00956942);
}

double NNfunction_ns_chi03_dR::synapse0x258c150() {
   return (neuron0x2569cd0()*0.0380902);
}

double NNfunction_ns_chi03_dR::synapse0x258c190() {
   return (neuron0x256a010()*-0.0333551);
}

double NNfunction_ns_chi03_dR::synapse0x258c1d0() {
   return (neuron0x256a350()*-0.0466781);
}

double NNfunction_ns_chi03_dR::synapse0x258c210() {
   return (neuron0x256a690()*0.000238843);
}

double NNfunction_ns_chi03_dR::synapse0x258c250() {
   return (neuron0x256a9d0()*0.00742945);
}

double NNfunction_ns_chi03_dR::synapse0x258c290() {
   return (neuron0x256ad10()*0.0135131);
}

double NNfunction_ns_chi03_dR::synapse0x258c2d0() {
   return (neuron0x256b050()*-0.0101429);
}

double NNfunction_ns_chi03_dR::synapse0x258c310() {
   return (neuron0x256b390()*-0.00530352);
}

double NNfunction_ns_chi03_dR::synapse0x258c350() {
   return (neuron0x256b6d0()*0.0188633);
}

double NNfunction_ns_chi03_dR::synapse0x258c390() {
   return (neuron0x256ba10()*-0.00604184);
}

double NNfunction_ns_chi03_dR::synapse0x258be20() {
   return (neuron0x256bd50()*0.0046185);
}

double NNfunction_ns_chi03_dR::synapse0x258be60() {
   return (neuron0x256c2b0()*-0.699061);
}

double NNfunction_ns_chi03_dR::synapse0x258c4e0() {
   return (neuron0x256c5f0()*-0.0177306);
}

double NNfunction_ns_chi03_dR::synapse0x258c520() {
   return (neuron0x256c930()*0.0111092);
}

double NNfunction_ns_chi03_dR::synapse0x258c560() {
   return (neuron0x256cc70()*-0.0279508);
}

double NNfunction_ns_chi03_dR::synapse0x258c5a0() {
   return (neuron0x256cfb0()*-0.043974);
}

double NNfunction_ns_chi03_dR::synapse0x258c5e0() {
   return (neuron0x256d2f0()*-0.0543856);
}

double NNfunction_ns_chi03_dR::synapse0x258c620() {
   return (neuron0x256d630()*0.0371973);
}

double NNfunction_ns_chi03_dR::synapse0x258c9a0() {
   return (neuron0x25689e0()*0.408373);
}

double NNfunction_ns_chi03_dR::synapse0x258c9e0() {
   return (neuron0x2568c90()*-4.45562);
}

double NNfunction_ns_chi03_dR::synapse0x258ca20() {
   return (neuron0x2568fd0()*0.0563828);
}

double NNfunction_ns_chi03_dR::synapse0x258ca60() {
   return (neuron0x2569310()*0.0560361);
}

double NNfunction_ns_chi03_dR::synapse0x258caa0() {
   return (neuron0x2569650()*-0.462979);
}

double NNfunction_ns_chi03_dR::synapse0x258cae0() {
   return (neuron0x2569990()*0.238374);
}

double NNfunction_ns_chi03_dR::synapse0x258cb20() {
   return (neuron0x2569cd0()*-0.58772);
}

double NNfunction_ns_chi03_dR::synapse0x258cb60() {
   return (neuron0x256a010()*0.00409128);
}

double NNfunction_ns_chi03_dR::synapse0x258cba0() {
   return (neuron0x256a350()*0.282999);
}

double NNfunction_ns_chi03_dR::synapse0x258cbe0() {
   return (neuron0x256a690()*0.24473);
}

double NNfunction_ns_chi03_dR::synapse0x258cc20() {
   return (neuron0x256a9d0()*0.222901);
}

double NNfunction_ns_chi03_dR::synapse0x258cc60() {
   return (neuron0x256ad10()*0.397177);
}

double NNfunction_ns_chi03_dR::synapse0x258cca0() {
   return (neuron0x256b050()*-0.133659);
}

double NNfunction_ns_chi03_dR::synapse0x258cce0() {
   return (neuron0x256b390()*-0.0904479);
}

double NNfunction_ns_chi03_dR::synapse0x258cd20() {
   return (neuron0x256b6d0()*-0.102236);
}

double NNfunction_ns_chi03_dR::synapse0x258cd60() {
   return (neuron0x256ba10()*0.122008);
}

double NNfunction_ns_chi03_dR::synapse0x258c7f0() {
   return (neuron0x256bd50()*-0.0615616);
}

double NNfunction_ns_chi03_dR::synapse0x258c830() {
   return (neuron0x256c2b0()*0.965694);
}

double NNfunction_ns_chi03_dR::synapse0x257d360() {
   return (neuron0x256c5f0()*0.216884);
}

double NNfunction_ns_chi03_dR::synapse0x257d3a0() {
   return (neuron0x256c930()*0.190591);
}

double NNfunction_ns_chi03_dR::synapse0x257d3e0() {
   return (neuron0x256cc70()*0.206741);
}

double NNfunction_ns_chi03_dR::synapse0x257d420() {
   return (neuron0x256cfb0()*0.0977916);
}

double NNfunction_ns_chi03_dR::synapse0x257d460() {
   return (neuron0x256d2f0()*0.177311);
}

double NNfunction_ns_chi03_dR::synapse0x257d4a0() {
   return (neuron0x256d630()*-2.24381);
}

double NNfunction_ns_chi03_dR::synapse0x257d820() {
   return (neuron0x25689e0()*-0.0311274);
}

double NNfunction_ns_chi03_dR::synapse0x257d860() {
   return (neuron0x2568c90()*-0.448786);
}

double NNfunction_ns_chi03_dR::synapse0x257d8a0() {
   return (neuron0x2568fd0()*0.111194);
}

double NNfunction_ns_chi03_dR::synapse0x257d8e0() {
   return (neuron0x2569310()*0.0328527);
}

double NNfunction_ns_chi03_dR::synapse0x257d920() {
   return (neuron0x2569650()*0.108455);
}

double NNfunction_ns_chi03_dR::synapse0x257d960() {
   return (neuron0x2569990()*0.0143186);
}

double NNfunction_ns_chi03_dR::synapse0x257d9a0() {
   return (neuron0x2569cd0()*0.00588569);
}

double NNfunction_ns_chi03_dR::synapse0x257d9e0() {
   return (neuron0x256a010()*-0.0267667);
}

double NNfunction_ns_chi03_dR::synapse0x257da20() {
   return (neuron0x256a350()*0.000747737);
}

double NNfunction_ns_chi03_dR::synapse0x257da60() {
   return (neuron0x256a690()*-0.107829);
}

double NNfunction_ns_chi03_dR::synapse0x257daa0() {
   return (neuron0x256a9d0()*-0.00207521);
}

double NNfunction_ns_chi03_dR::synapse0x257dae0() {
   return (neuron0x256ad10()*-0.0888796);
}

double NNfunction_ns_chi03_dR::synapse0x257db20() {
   return (neuron0x256b050()*0.122914);
}

double NNfunction_ns_chi03_dR::synapse0x257db60() {
   return (neuron0x256b390()*-0.00424126);
}

double NNfunction_ns_chi03_dR::synapse0x257dba0() {
   return (neuron0x256b6d0()*-0.0488891);
}

double NNfunction_ns_chi03_dR::synapse0x257dbe0() {
   return (neuron0x256ba10()*0.0214079);
}

double NNfunction_ns_chi03_dR::synapse0x257d670() {
   return (neuron0x256bd50()*0.0453732);
}

double NNfunction_ns_chi03_dR::synapse0x257d6b0() {
   return (neuron0x256c2b0()*-0.0130136);
}

double NNfunction_ns_chi03_dR::synapse0x257dd30() {
   return (neuron0x256c5f0()*-0.0388017);
}

double NNfunction_ns_chi03_dR::synapse0x257dd70() {
   return (neuron0x256c930()*-0.0299534);
}

double NNfunction_ns_chi03_dR::synapse0x257ddb0() {
   return (neuron0x256cc70()*0.00647169);
}

double NNfunction_ns_chi03_dR::synapse0x257ddf0() {
   return (neuron0x256cfb0()*-0.0176369);
}

double NNfunction_ns_chi03_dR::synapse0x257de30() {
   return (neuron0x256d2f0()*0.114101);
}

double NNfunction_ns_chi03_dR::synapse0x257de70() {
   return (neuron0x256d630()*3.69092);
}

double NNfunction_ns_chi03_dR::synapse0x257e1f0() {
   return (neuron0x25689e0()*0.027617);
}

double NNfunction_ns_chi03_dR::synapse0x257e230() {
   return (neuron0x2568c90()*2.63841);
}

double NNfunction_ns_chi03_dR::synapse0x257e270() {
   return (neuron0x2568fd0()*0.322868);
}

double NNfunction_ns_chi03_dR::synapse0x257e2b0() {
   return (neuron0x2569310()*0.0249283);
}

double NNfunction_ns_chi03_dR::synapse0x257e2f0() {
   return (neuron0x2569650()*0.0104644);
}

double NNfunction_ns_chi03_dR::synapse0x257e330() {
   return (neuron0x2569990()*0.00353729);
}

double NNfunction_ns_chi03_dR::synapse0x257e370() {
   return (neuron0x2569cd0()*-0.00236965);
}

double NNfunction_ns_chi03_dR::synapse0x257e3b0() {
   return (neuron0x256a010()*0.0303185);
}

double NNfunction_ns_chi03_dR::synapse0x257e3f0() {
   return (neuron0x256a350()*0.0153666);
}

double NNfunction_ns_chi03_dR::synapse0x257e430() {
   return (neuron0x256a690()*-0.0105622);
}

double NNfunction_ns_chi03_dR::synapse0x257e470() {
   return (neuron0x256a9d0()*-0.0330974);
}

double NNfunction_ns_chi03_dR::synapse0x257e4b0() {
   return (neuron0x256ad10()*-0.0176563);
}

double NNfunction_ns_chi03_dR::synapse0x257e4f0() {
   return (neuron0x256b050()*0.0087902);
}

double NNfunction_ns_chi03_dR::synapse0x257e530() {
   return (neuron0x256b390()*-0.0034238);
}

double NNfunction_ns_chi03_dR::synapse0x257e570() {
   return (neuron0x256b6d0()*-0.0210731);
}

double NNfunction_ns_chi03_dR::synapse0x257e5b0() {
   return (neuron0x256ba10()*-0.0316204);
}

double NNfunction_ns_chi03_dR::synapse0x257e040() {
   return (neuron0x256bd50()*-0.0120686);
}

double NNfunction_ns_chi03_dR::synapse0x257e080() {
   return (neuron0x256c2b0()*0.194997);
}

double NNfunction_ns_chi03_dR::synapse0x257e700() {
   return (neuron0x256c5f0()*-0.0128528);
}

double NNfunction_ns_chi03_dR::synapse0x257e740() {
   return (neuron0x256c930()*-0.0120682);
}

double NNfunction_ns_chi03_dR::synapse0x257e780() {
   return (neuron0x256cc70()*0.0312122);
}

double NNfunction_ns_chi03_dR::synapse0x257e7c0() {
   return (neuron0x256cfb0()*-0.0176384);
}

double NNfunction_ns_chi03_dR::synapse0x257e800() {
   return (neuron0x256d2f0()*0.000247719);
}

double NNfunction_ns_chi03_dR::synapse0x257e840() {
   return (neuron0x256d630()*-1.28804);
}

double NNfunction_ns_chi03_dR::synapse0x257ebc0() {
   return (neuron0x25689e0()*-0.695435);
}

double NNfunction_ns_chi03_dR::synapse0x257ec00() {
   return (neuron0x2568c90()*-1.29958);
}

double NNfunction_ns_chi03_dR::synapse0x257ec40() {
   return (neuron0x2568fd0()*0.859576);
}

double NNfunction_ns_chi03_dR::synapse0x257ec80() {
   return (neuron0x2569310()*-0.677542);
}

double NNfunction_ns_chi03_dR::synapse0x257ecc0() {
   return (neuron0x2569650()*-0.165557);
}

double NNfunction_ns_chi03_dR::synapse0x257ed00() {
   return (neuron0x2569990()*0.61329);
}

double NNfunction_ns_chi03_dR::synapse0x257ed40() {
   return (neuron0x2569cd0()*0.0350733);
}

double NNfunction_ns_chi03_dR::synapse0x257ed80() {
   return (neuron0x256a010()*0.259092);
}

double NNfunction_ns_chi03_dR::synapse0x257edc0() {
   return (neuron0x256a350()*0.465263);
}

double NNfunction_ns_chi03_dR::synapse0x257ee00() {
   return (neuron0x256a690()*1.18627);
}

double NNfunction_ns_chi03_dR::synapse0x257ee40() {
   return (neuron0x256a9d0()*0.569526);
}

double NNfunction_ns_chi03_dR::synapse0x257ee80() {
   return (neuron0x256ad10()*-1.06007);
}

double NNfunction_ns_chi03_dR::synapse0x257eec0() {
   return (neuron0x256b050()*-0.838344);
}

double NNfunction_ns_chi03_dR::synapse0x257ef00() {
   return (neuron0x256b390()*-0.38572);
}

double NNfunction_ns_chi03_dR::synapse0x257ef40() {
   return (neuron0x256b6d0()*0.894275);
}

double NNfunction_ns_chi03_dR::synapse0x257ef80() {
   return (neuron0x256ba10()*-2.05789);
}

double NNfunction_ns_chi03_dR::synapse0x257ea10() {
   return (neuron0x256bd50()*-0.0572333);
}

double NNfunction_ns_chi03_dR::synapse0x257ea50() {
   return (neuron0x256c2b0()*0.364991);
}

double NNfunction_ns_chi03_dR::synapse0x257f0d0() {
   return (neuron0x256c5f0()*-0.460579);
}

double NNfunction_ns_chi03_dR::synapse0x257f110() {
   return (neuron0x256c930()*-0.662412);
}

double NNfunction_ns_chi03_dR::synapse0x257f150() {
   return (neuron0x256cc70()*1.56155);
}

double NNfunction_ns_chi03_dR::synapse0x257f190() {
   return (neuron0x256cfb0()*0.315958);
}

double NNfunction_ns_chi03_dR::synapse0x257f1d0() {
   return (neuron0x256d2f0()*0.379424);
}

double NNfunction_ns_chi03_dR::synapse0x257f210() {
   return (neuron0x256d630()*-0.494521);
}

double NNfunction_ns_chi03_dR::synapse0x25910e0() {
   return (neuron0x25689e0()*0.191648);
}

double NNfunction_ns_chi03_dR::synapse0x2591120() {
   return (neuron0x2568c90()*0.04927);
}

double NNfunction_ns_chi03_dR::synapse0x2591160() {
   return (neuron0x2568fd0()*0.0412856);
}

double NNfunction_ns_chi03_dR::synapse0x25911a0() {
   return (neuron0x2569310()*-0.0400754);
}

double NNfunction_ns_chi03_dR::synapse0x25911e0() {
   return (neuron0x2569650()*0.0455601);
}

double NNfunction_ns_chi03_dR::synapse0x2591220() {
   return (neuron0x2569990()*-0.0565135);
}

double NNfunction_ns_chi03_dR::synapse0x2591260() {
   return (neuron0x2569cd0()*-0.11638);
}

double NNfunction_ns_chi03_dR::synapse0x25912a0() {
   return (neuron0x256a010()*0.0169788);
}

double NNfunction_ns_chi03_dR::synapse0x25912e0() {
   return (neuron0x256a350()*0.0888439);
}

double NNfunction_ns_chi03_dR::synapse0x2591320() {
   return (neuron0x256a690()*-0.340503);
}

double NNfunction_ns_chi03_dR::synapse0x2591360() {
   return (neuron0x256a9d0()*-0.136613);
}

double NNfunction_ns_chi03_dR::synapse0x25913a0() {
   return (neuron0x256ad10()*-0.0171576);
}

double NNfunction_ns_chi03_dR::synapse0x25913e0() {
   return (neuron0x256b050()*-0.0227133);
}

double NNfunction_ns_chi03_dR::synapse0x2591420() {
   return (neuron0x256b390()*0.012256);
}

double NNfunction_ns_chi03_dR::synapse0x2591460() {
   return (neuron0x256b6d0()*1.44346);
}

double NNfunction_ns_chi03_dR::synapse0x25914a0() {
   return (neuron0x256ba10()*-0.0225352);
}

double NNfunction_ns_chi03_dR::synapse0x257f250() {
   return (neuron0x256bd50()*-0.224324);
}

double NNfunction_ns_chi03_dR::synapse0x257f290() {
   return (neuron0x256c2b0()*-0.28822);
}

double NNfunction_ns_chi03_dR::synapse0x25915f0() {
   return (neuron0x256c5f0()*-0.0385668);
}

double NNfunction_ns_chi03_dR::synapse0x2591630() {
   return (neuron0x256c930()*-0.00561385);
}

double NNfunction_ns_chi03_dR::synapse0x2591670() {
   return (neuron0x256cc70()*0.262094);
}

double NNfunction_ns_chi03_dR::synapse0x25916b0() {
   return (neuron0x256cfb0()*0.0324319);
}

double NNfunction_ns_chi03_dR::synapse0x25916f0() {
   return (neuron0x256d2f0()*0.0743208);
}

double NNfunction_ns_chi03_dR::synapse0x2591730() {
   return (neuron0x256d630()*0.447635);
}

double NNfunction_ns_chi03_dR::synapse0x2591ab0() {
   return (neuron0x25689e0()*0.0476408);
}

double NNfunction_ns_chi03_dR::synapse0x2591af0() {
   return (neuron0x2568c90()*-0.035081);
}

double NNfunction_ns_chi03_dR::synapse0x2591b30() {
   return (neuron0x2568fd0()*0.0929188);
}

double NNfunction_ns_chi03_dR::synapse0x2591b70() {
   return (neuron0x2569310()*-2.94304);
}

double NNfunction_ns_chi03_dR::synapse0x2591bb0() {
   return (neuron0x2569650()*0.0795212);
}

double NNfunction_ns_chi03_dR::synapse0x2591bf0() {
   return (neuron0x2569990()*-0.021362);
}

double NNfunction_ns_chi03_dR::synapse0x2591c30() {
   return (neuron0x2569cd0()*0.00499045);
}

double NNfunction_ns_chi03_dR::synapse0x2591c70() {
   return (neuron0x256a010()*0.0075623);
}

double NNfunction_ns_chi03_dR::synapse0x2591cb0() {
   return (neuron0x256a350()*-0.0304584);
}

double NNfunction_ns_chi03_dR::synapse0x2591cf0() {
   return (neuron0x256a690()*0.00501848);
}

double NNfunction_ns_chi03_dR::synapse0x2591d30() {
   return (neuron0x256a9d0()*-0.0334724);
}

double NNfunction_ns_chi03_dR::synapse0x2591d70() {
   return (neuron0x256ad10()*0.0288608);
}

double NNfunction_ns_chi03_dR::synapse0x2591db0() {
   return (neuron0x256b050()*0.042894);
}

double NNfunction_ns_chi03_dR::synapse0x2591df0() {
   return (neuron0x256b390()*-0.0223497);
}

double NNfunction_ns_chi03_dR::synapse0x2591e30() {
   return (neuron0x256b6d0()*0.0123754);
}

double NNfunction_ns_chi03_dR::synapse0x2591e70() {
   return (neuron0x256ba10()*0.0316489);
}

double NNfunction_ns_chi03_dR::synapse0x2591900() {
   return (neuron0x256bd50()*-0.0986914);
}

double NNfunction_ns_chi03_dR::synapse0x2591940() {
   return (neuron0x256c2b0()*-0.626947);
}

double NNfunction_ns_chi03_dR::synapse0x2591fc0() {
   return (neuron0x256c5f0()*-0.00772953);
}

double NNfunction_ns_chi03_dR::synapse0x2592000() {
   return (neuron0x256c930()*-0.0502276);
}

double NNfunction_ns_chi03_dR::synapse0x2592040() {
   return (neuron0x256cc70()*0.0320037);
}

double NNfunction_ns_chi03_dR::synapse0x2592080() {
   return (neuron0x256cfb0()*-0.00370097);
}

double NNfunction_ns_chi03_dR::synapse0x25920c0() {
   return (neuron0x256d2f0()*-0.0489798);
}

double NNfunction_ns_chi03_dR::synapse0x2592100() {
   return (neuron0x256d630()*0.0569394);
}

double NNfunction_ns_chi03_dR::synapse0x2592480() {
   return (neuron0x25689e0()*0.00874447);
}

double NNfunction_ns_chi03_dR::synapse0x25924c0() {
   return (neuron0x2568c90()*-11.3352);
}

double NNfunction_ns_chi03_dR::synapse0x2592500() {
   return (neuron0x2568fd0()*-0.633216);
}

double NNfunction_ns_chi03_dR::synapse0x2592540() {
   return (neuron0x2569310()*0.0217273);
}

double NNfunction_ns_chi03_dR::synapse0x2592580() {
   return (neuron0x2569650()*-0.0705265);
}

double NNfunction_ns_chi03_dR::synapse0x25925c0() {
   return (neuron0x2569990()*0.0684743);
}

double NNfunction_ns_chi03_dR::synapse0x2592600() {
   return (neuron0x2569cd0()*-0.01388);
}

double NNfunction_ns_chi03_dR::synapse0x2592640() {
   return (neuron0x256a010()*0.0656842);
}

double NNfunction_ns_chi03_dR::synapse0x2592680() {
   return (neuron0x256a350()*-0.0175907);
}

double NNfunction_ns_chi03_dR::synapse0x25926c0() {
   return (neuron0x256a690()*0.0517235);
}

double NNfunction_ns_chi03_dR::synapse0x2592700() {
   return (neuron0x256a9d0()*0.0441768);
}

double NNfunction_ns_chi03_dR::synapse0x2592740() {
   return (neuron0x256ad10()*0.0194557);
}

double NNfunction_ns_chi03_dR::synapse0x2592780() {
   return (neuron0x256b050()*-0.00723635);
}

double NNfunction_ns_chi03_dR::synapse0x25927c0() {
   return (neuron0x256b390()*0.0357297);
}

double NNfunction_ns_chi03_dR::synapse0x2592800() {
   return (neuron0x256b6d0()*-0.109037);
}

double NNfunction_ns_chi03_dR::synapse0x2592840() {
   return (neuron0x256ba10()*-0.0582655);
}

double NNfunction_ns_chi03_dR::synapse0x25922d0() {
   return (neuron0x256bd50()*-0.0464596);
}

double NNfunction_ns_chi03_dR::synapse0x2592310() {
   return (neuron0x256c2b0()*0.0728342);
}

double NNfunction_ns_chi03_dR::synapse0x2592990() {
   return (neuron0x256c5f0()*-0.0654682);
}

double NNfunction_ns_chi03_dR::synapse0x25929d0() {
   return (neuron0x256c930()*0.00851411);
}

double NNfunction_ns_chi03_dR::synapse0x2592a10() {
   return (neuron0x256cc70()*-0.0529152);
}

double NNfunction_ns_chi03_dR::synapse0x2592a50() {
   return (neuron0x256cfb0()*0.0207421);
}

double NNfunction_ns_chi03_dR::synapse0x2592a90() {
   return (neuron0x256d2f0()*0.0174151);
}

double NNfunction_ns_chi03_dR::synapse0x2592ad0() {
   return (neuron0x256d630()*4.44743);
}

double NNfunction_ns_chi03_dR::synapse0x2592e50() {
   return (neuron0x25689e0()*0.134286);
}

double NNfunction_ns_chi03_dR::synapse0x2592e90() {
   return (neuron0x2568c90()*-0.141732);
}

double NNfunction_ns_chi03_dR::synapse0x2592ed0() {
   return (neuron0x2568fd0()*0.553144);
}

double NNfunction_ns_chi03_dR::synapse0x2592f10() {
   return (neuron0x2569310()*0.0847323);
}

double NNfunction_ns_chi03_dR::synapse0x2592f50() {
   return (neuron0x2569650()*-0.253488);
}

double NNfunction_ns_chi03_dR::synapse0x2592f90() {
   return (neuron0x2569990()*0.092291);
}

double NNfunction_ns_chi03_dR::synapse0x2592fd0() {
   return (neuron0x2569cd0()*-0.307075);
}

double NNfunction_ns_chi03_dR::synapse0x2593010() {
   return (neuron0x256a010()*0.676348);
}

double NNfunction_ns_chi03_dR::synapse0x2593050() {
   return (neuron0x256a350()*-0.200493);
}

double NNfunction_ns_chi03_dR::synapse0x2593090() {
   return (neuron0x256a690()*0.414545);
}

double NNfunction_ns_chi03_dR::synapse0x25930d0() {
   return (neuron0x256a9d0()*-0.377848);
}

double NNfunction_ns_chi03_dR::synapse0x2593110() {
   return (neuron0x256ad10()*0.418093);
}

double NNfunction_ns_chi03_dR::synapse0x2593150() {
   return (neuron0x256b050()*-0.123253);
}

double NNfunction_ns_chi03_dR::synapse0x2593190() {
   return (neuron0x256b390()*-0.300186);
}

double NNfunction_ns_chi03_dR::synapse0x25931d0() {
   return (neuron0x256b6d0()*-0.546261);
}

double NNfunction_ns_chi03_dR::synapse0x2593210() {
   return (neuron0x256ba10()*0.0623674);
}

double NNfunction_ns_chi03_dR::synapse0x2592ca0() {
   return (neuron0x256bd50()*0.158037);
}

double NNfunction_ns_chi03_dR::synapse0x2592ce0() {
   return (neuron0x256c2b0()*0.0121071);
}

double NNfunction_ns_chi03_dR::synapse0x2593360() {
   return (neuron0x256c5f0()*0.414643);
}

double NNfunction_ns_chi03_dR::synapse0x25933a0() {
   return (neuron0x256c930()*0.0503623);
}

double NNfunction_ns_chi03_dR::synapse0x25933e0() {
   return (neuron0x256cc70()*0.141643);
}

double NNfunction_ns_chi03_dR::synapse0x2593420() {
   return (neuron0x256cfb0()*-0.126799);
}

double NNfunction_ns_chi03_dR::synapse0x2593460() {
   return (neuron0x256d2f0()*-0.0465897);
}

double NNfunction_ns_chi03_dR::synapse0x25934a0() {
   return (neuron0x256d630()*1.19437);
}

double NNfunction_ns_chi03_dR::synapse0x2333310() {
   return (neuron0x256daa0()*-0.0334239);
}

double NNfunction_ns_chi03_dR::synapse0x2333350() {
   return (neuron0x256e2e0()*0.030163);
}

double NNfunction_ns_chi03_dR::synapse0x256fe50() {
   return (neuron0x256edc0()*-0.280803);
}

double NNfunction_ns_chi03_dR::synapse0x256fe90() {
   return (neuron0x256e860()*0.0723871);
}

double NNfunction_ns_chi03_dR::synapse0x2571920() {
   return (neuron0x256fba0()*-0.0781093);
}

double NNfunction_ns_chi03_dR::synapse0x2571960() {
   return (neuron0x2571670()*0.149947);
}

double NNfunction_ns_chi03_dR::synapse0x25726f0() {
   return (neuron0x2572440()*0.964222);
}

double NNfunction_ns_chi03_dR::synapse0x2572730() {
   return (neuron0x2572e10()*-3.66427);
}

double NNfunction_ns_chi03_dR::synapse0x25730c0() {
   return (neuron0x25737e0()*0.201243);
}

double NNfunction_ns_chi03_dR::synapse0x2573100() {
   return (neuron0x25742c0()*0.928278);
}

double NNfunction_ns_chi03_dR::synapse0x2573a90() {
   return (neuron0x2574c90()*-1.90703);
}

double NNfunction_ns_chi03_dR::synapse0x2573ad0() {
   return (neuron0x2571d70()*-1.02177);
}

double NNfunction_ns_chi03_dR::synapse0x2574570() {
   return (neuron0x2576840()*-0.100821);
}

double NNfunction_ns_chi03_dR::synapse0x25745b0() {
   return (neuron0x2577210()*-0.035065);
}

double NNfunction_ns_chi03_dR::synapse0x2574f40() {
   return (neuron0x2577be0()*-1.55936);
}

double NNfunction_ns_chi03_dR::synapse0x2574f80() {
   return (neuron0x25785b0()*0.761352);
}

double NNfunction_ns_chi03_dR::synapse0x2572020() {
   return (neuron0x257a3c0()*0.0922366);
}

double NNfunction_ns_chi03_dR::synapse0x2572060() {
   return (neuron0x257a6a0()*-0.999792);
}

double NNfunction_ns_chi03_dR::synapse0x2576af0() {
   return (neuron0x257b070()*0.0654143);
}

double NNfunction_ns_chi03_dR::synapse0x2576b30() {
   return (neuron0x257ba40()*2.04253);
}

double NNfunction_ns_chi03_dR::synapse0x25774c0() {
   return (neuron0x257c410()*-1.51135);
}

double NNfunction_ns_chi03_dR::synapse0x2577500() {
   return (neuron0x257cde0()*-0.0941107);
}

double NNfunction_ns_chi03_dR::synapse0x2577e90() {
   return (neuron0x2575930()*1.03627);
}

double NNfunction_ns_chi03_dR::synapse0x2577ed0() {
   return (neuron0x2576300()*-1.7974);
}

double NNfunction_ns_chi03_dR::synapse0x2578860() {
   return (neuron0x257fb70()*0.196678);
}

double NNfunction_ns_chi03_dR::synapse0x25788a0() {
   return (neuron0x2580540()*0.831965);
}

double NNfunction_ns_chi03_dR::synapse0x256b8f0() {
   return (neuron0x2580f10()*0.172052);
}

double NNfunction_ns_chi03_dR::synapse0x256b930() {
   return (neuron0x25818e0()*-0.343494);
}

double NNfunction_ns_chi03_dR::synapse0x257a950() {
   return (neuron0x25822b0()*-0.00100126);
}

double NNfunction_ns_chi03_dR::synapse0x257a990() {
   return (neuron0x2582c80()*0.0111822);
}

double NNfunction_ns_chi03_dR::synapse0x257b320() {
   return (neuron0x2583650()*2.35748);
}

double NNfunction_ns_chi03_dR::synapse0x257b360() {
   return (neuron0x2584020()*0.00916575);
}

double NNfunction_ns_chi03_dR::synapse0x257bcf0() {
   return (neuron0x257a0b0()*2.19744);
}

double NNfunction_ns_chi03_dR::synapse0x257bd30() {
   return (neuron0x2586c00()*0.21299);
}

double NNfunction_ns_chi03_dR::synapse0x257c6c0() {
   return (neuron0x25875d0()*-0.701675);
}

double NNfunction_ns_chi03_dR::synapse0x257c700() {
   return (neuron0x2587fa0()*1.23596);
}

double NNfunction_ns_chi03_dR::synapse0x257d090() {
   return (neuron0x2588970()*-0.818345);
}

double NNfunction_ns_chi03_dR::synapse0x257d0d0() {
   return (neuron0x2589340()*-0.478235);
}

double NNfunction_ns_chi03_dR::synapse0x2575be0() {
   return (neuron0x2589d10()*-0.351867);
}

double NNfunction_ns_chi03_dR::synapse0x2575c20() {
   return (neuron0x258a6e0()*0.511268);
}

double NNfunction_ns_chi03_dR::synapse0x257f490() {
   return (neuron0x258b0b0()*1.08362);
}

double NNfunction_ns_chi03_dR::synapse0x257f4d0() {
   return (neuron0x258bc90()*0.70921);
}

double NNfunction_ns_chi03_dR::synapse0x257fe20() {
   return (neuron0x258c660()*0.201757);
}

double NNfunction_ns_chi03_dR::synapse0x257fe60() {
   return (neuron0x257d4e0()*1.46204);
}

double NNfunction_ns_chi03_dR::synapse0x25807f0() {
   return (neuron0x257deb0()*1.30116);
}

double NNfunction_ns_chi03_dR::synapse0x2580830() {
   return (neuron0x257e880()*0.0717095);
}

double NNfunction_ns_chi03_dR::synapse0x25811c0() {
   return (neuron0x2590ec0()*-0.222387);
}

double NNfunction_ns_chi03_dR::synapse0x2581200() {
   return (neuron0x2591770()*-0.047742);
}

double NNfunction_ns_chi03_dR::synapse0x2581b90() {
   return (neuron0x2592140()*-2.85573);
}

double NNfunction_ns_chi03_dR::synapse0x2581bd0() {
   return (neuron0x2592b10()*-0.450727);
}

double NNfunction_ns_chi03_dR::synapse0x25842d0() {
   return (neuron0x256daa0()*0.0155577);
}

double NNfunction_ns_chi03_dR::synapse0x2584310() {
   return (neuron0x256e2e0()*0.279361);
}

double NNfunction_ns_chi03_dR::synapse0x2579890() {
   return (neuron0x256edc0()*0.665965);
}

double NNfunction_ns_chi03_dR::synapse0x25798d0() {
   return (neuron0x256e860()*0.0248201);
}

double NNfunction_ns_chi03_dR::synapse0x2586eb0() {
   return (neuron0x256fba0()*0.0250573);
}

double NNfunction_ns_chi03_dR::synapse0x2586ef0() {
   return (neuron0x2571670()*-1.81882);
}

double NNfunction_ns_chi03_dR::synapse0x2587880() {
   return (neuron0x2572440()*-1.3764);
}

double NNfunction_ns_chi03_dR::synapse0x25878c0() {
   return (neuron0x2572e10()*6.22762);
}

double NNfunction_ns_chi03_dR::synapse0x2588250() {
   return (neuron0x25737e0()*-0.596801);
}

double NNfunction_ns_chi03_dR::synapse0x2588290() {
   return (neuron0x25742c0()*0.271417);
}

double NNfunction_ns_chi03_dR::synapse0x2588c20() {
   return (neuron0x2574c90()*1.18312);
}

double NNfunction_ns_chi03_dR::synapse0x2588c60() {
   return (neuron0x2571d70()*-0.114291);
}

double NNfunction_ns_chi03_dR::synapse0x25895f0() {
   return (neuron0x2576840()*0.14373);
}

double NNfunction_ns_chi03_dR::synapse0x2589630() {
   return (neuron0x2577210()*-0.490646);
}

double NNfunction_ns_chi03_dR::synapse0x2589fc0() {
   return (neuron0x2577be0()*0.208773);
}

double NNfunction_ns_chi03_dR::synapse0x258a000() {
   return (neuron0x25785b0()*-1.37125);
}

double NNfunction_ns_chi03_dR::synapse0x258a990() {
   return (neuron0x257a3c0()*-0.156539);
}

double NNfunction_ns_chi03_dR::synapse0x258a9d0() {
   return (neuron0x257a6a0()*0.847312);
}

double NNfunction_ns_chi03_dR::synapse0x258b360() {
   return (neuron0x257b070()*-0.0733199);
}

double NNfunction_ns_chi03_dR::synapse0x258b3a0() {
   return (neuron0x257ba40()*-2.0989);
}

double NNfunction_ns_chi03_dR::synapse0x258bf40() {
   return (neuron0x257c410()*3.99724);
}

double NNfunction_ns_chi03_dR::synapse0x258bf80() {
   return (neuron0x257cde0()*-2.04993);
}

double NNfunction_ns_chi03_dR::synapse0x258c910() {
   return (neuron0x2575930()*-1.62943);
}

double NNfunction_ns_chi03_dR::synapse0x258c950() {
   return (neuron0x2576300()*-1.50009);
}

double NNfunction_ns_chi03_dR::synapse0x257d790() {
   return (neuron0x257fb70()*0.365052);
}

double NNfunction_ns_chi03_dR::synapse0x257d7d0() {
   return (neuron0x2580540()*-0.904172);
}

double NNfunction_ns_chi03_dR::synapse0x257e160() {
   return (neuron0x2580f10()*-0.42116);
}

double NNfunction_ns_chi03_dR::synapse0x257e1a0() {
   return (neuron0x25818e0()*0.119225);
}

double NNfunction_ns_chi03_dR::synapse0x257eb30() {
   return (neuron0x25822b0()*-0.09495);
}

double NNfunction_ns_chi03_dR::synapse0x257eb70() {
   return (neuron0x2582c80()*0.143839);
}

double NNfunction_ns_chi03_dR::synapse0x2591050() {
   return (neuron0x2583650()*-0.386782);
}

double NNfunction_ns_chi03_dR::synapse0x2591090() {
   return (neuron0x2584020()*0.930359);
}

double NNfunction_ns_chi03_dR::synapse0x2591a20() {
   return (neuron0x257a0b0()*-2.41405);
}

double NNfunction_ns_chi03_dR::synapse0x2591a60() {
   return (neuron0x2586c00()*-0.11715);
}

double NNfunction_ns_chi03_dR::synapse0x25923f0() {
   return (neuron0x25875d0()*-0.736853);
}

double NNfunction_ns_chi03_dR::synapse0x2592430() {
   return (neuron0x2587fa0()*-0.86335);
}

double NNfunction_ns_chi03_dR::synapse0x2592dc0() {
   return (neuron0x2588970()*5.71691);
}

double NNfunction_ns_chi03_dR::synapse0x2592e00() {
   return (neuron0x2589340()*-0.224702);
}

double NNfunction_ns_chi03_dR::synapse0x256dd50() {
   return (neuron0x2589d10()*1.3459);
}

double NNfunction_ns_chi03_dR::synapse0x256dd90() {
   return (neuron0x258a6e0()*-0.253047);
}

double NNfunction_ns_chi03_dR::synapse0x2582560() {
   return (neuron0x258b0b0()*0.34688);
}

double NNfunction_ns_chi03_dR::synapse0x25825a0() {
   return (neuron0x258bc90()*0.733187);
}

double NNfunction_ns_chi03_dR::synapse0x25934e0() {
   return (neuron0x258c660()*-0.34411);
}

double NNfunction_ns_chi03_dR::synapse0x2593520() {
   return (neuron0x257d4e0()*1.45541);
}

double NNfunction_ns_chi03_dR::synapse0x2593560() {
   return (neuron0x257deb0()*0.859418);
}

double NNfunction_ns_chi03_dR::synapse0x25935a0() {
   return (neuron0x257e880()*-0.0286248);
}

double NNfunction_ns_chi03_dR::synapse0x259a450() {
   return (neuron0x2590ec0()*0.431174);
}

double NNfunction_ns_chi03_dR::synapse0x259a490() {
   return (neuron0x2591770()*0.0796389);
}

double NNfunction_ns_chi03_dR::synapse0x259a4d0() {
   return (neuron0x2592140()*5.26998);
}

double NNfunction_ns_chi03_dR::synapse0x259a510() {
   return (neuron0x2592b10()*0.883145);
}

double NNfunction_ns_chi03_dR::synapse0x259a890() {
   return (neuron0x256daa0()*-0.566595);
}

double NNfunction_ns_chi03_dR::synapse0x259a8d0() {
   return (neuron0x256e2e0()*0.0904395);
}

double NNfunction_ns_chi03_dR::synapse0x259a910() {
   return (neuron0x256edc0()*0.0830293);
}

double NNfunction_ns_chi03_dR::synapse0x259a950() {
   return (neuron0x256e860()*-0.28477);
}

double NNfunction_ns_chi03_dR::synapse0x259a990() {
   return (neuron0x256fba0()*-0.573133);
}

double NNfunction_ns_chi03_dR::synapse0x259a9d0() {
   return (neuron0x2571670()*-0.382867);
}

double NNfunction_ns_chi03_dR::synapse0x259aa10() {
   return (neuron0x2572440()*0.398355);
}

double NNfunction_ns_chi03_dR::synapse0x259aa50() {
   return (neuron0x2572e10()*-0.0865383);
}

double NNfunction_ns_chi03_dR::synapse0x259aa90() {
   return (neuron0x25737e0()*-0.0321079);
}

double NNfunction_ns_chi03_dR::synapse0x259aad0() {
   return (neuron0x25742c0()*-0.38115);
}

double NNfunction_ns_chi03_dR::synapse0x259ab10() {
   return (neuron0x2574c90()*-0.760319);
}

double NNfunction_ns_chi03_dR::synapse0x259ab50() {
   return (neuron0x2571d70()*-0.683258);
}

double NNfunction_ns_chi03_dR::synapse0x259ab90() {
   return (neuron0x2576840()*-0.90876);
}

double NNfunction_ns_chi03_dR::synapse0x259abd0() {
   return (neuron0x2577210()*-0.736418);
}

double NNfunction_ns_chi03_dR::synapse0x259ac10() {
   return (neuron0x2577be0()*0.427699);
}

double NNfunction_ns_chi03_dR::synapse0x259ac50() {
   return (neuron0x25785b0()*-0.772228);
}

double NNfunction_ns_chi03_dR::synapse0x259a6e0() {
   return (neuron0x257a3c0()*0.605258);
}

double NNfunction_ns_chi03_dR::synapse0x259a720() {
   return (neuron0x257a6a0()*-0.115936);
}

double NNfunction_ns_chi03_dR::synapse0x259ada0() {
   return (neuron0x257b070()*-0.102718);
}

double NNfunction_ns_chi03_dR::synapse0x259ade0() {
   return (neuron0x257ba40()*-0.478768);
}

double NNfunction_ns_chi03_dR::synapse0x259ae20() {
   return (neuron0x257c410()*0.134678);
}

double NNfunction_ns_chi03_dR::synapse0x259ae60() {
   return (neuron0x257cde0()*-0.191244);
}

double NNfunction_ns_chi03_dR::synapse0x259aea0() {
   return (neuron0x2575930()*-0.800299);
}

double NNfunction_ns_chi03_dR::synapse0x259aee0() {
   return (neuron0x2576300()*-0.851571);
}

double NNfunction_ns_chi03_dR::synapse0x259af20() {
   return (neuron0x257fb70()*-0.632557);
}

double NNfunction_ns_chi03_dR::synapse0x259af60() {
   return (neuron0x2580540()*-0.519189);
}

double NNfunction_ns_chi03_dR::synapse0x259afa0() {
   return (neuron0x2580f10()*-0.282977);
}

double NNfunction_ns_chi03_dR::synapse0x259afe0() {
   return (neuron0x25818e0()*-0.556095);
}

double NNfunction_ns_chi03_dR::synapse0x259b020() {
   return (neuron0x25822b0()*0.0511209);
}

double NNfunction_ns_chi03_dR::synapse0x259b060() {
   return (neuron0x2582c80()*-0.668963);
}

double NNfunction_ns_chi03_dR::synapse0x259b0a0() {
   return (neuron0x2583650()*-0.483842);
}

double NNfunction_ns_chi03_dR::synapse0x259b0e0() {
   return (neuron0x2584020()*-1.11122);
}

double NNfunction_ns_chi03_dR::synapse0x259ac90() {
   return (neuron0x257a0b0()*-0.55011);
}

double NNfunction_ns_chi03_dR::synapse0x259acd0() {
   return (neuron0x2586c00()*-0.581574);
}

double NNfunction_ns_chi03_dR::synapse0x259ad10() {
   return (neuron0x25875d0()*-0.148418);
}

double NNfunction_ns_chi03_dR::synapse0x259ad50() {
   return (neuron0x2587fa0()*-0.75515);
}

double NNfunction_ns_chi03_dR::synapse0x259b330() {
   return (neuron0x2588970()*-0.246166);
}

double NNfunction_ns_chi03_dR::synapse0x259b370() {
   return (neuron0x2589340()*-0.142834);
}

double NNfunction_ns_chi03_dR::synapse0x259b3b0() {
   return (neuron0x2589d10()*-1.09331);
}

double NNfunction_ns_chi03_dR::synapse0x259b3f0() {
   return (neuron0x258a6e0()*-0.658459);
}

double NNfunction_ns_chi03_dR::synapse0x259b430() {
   return (neuron0x258b0b0()*-0.467215);
}

double NNfunction_ns_chi03_dR::synapse0x259b470() {
   return (neuron0x258bc90()*-0.0739447);
}

double NNfunction_ns_chi03_dR::synapse0x259b4b0() {
   return (neuron0x258c660()*-0.229689);
}

double NNfunction_ns_chi03_dR::synapse0x259b4f0() {
   return (neuron0x257d4e0()*-0.078079);
}

double NNfunction_ns_chi03_dR::synapse0x259b530() {
   return (neuron0x257deb0()*-0.943902);
}

double NNfunction_ns_chi03_dR::synapse0x259b570() {
   return (neuron0x257e880()*-0.293626);
}

double NNfunction_ns_chi03_dR::synapse0x259b5b0() {
   return (neuron0x2590ec0()*0.266819);
}

double NNfunction_ns_chi03_dR::synapse0x259b5f0() {
   return (neuron0x2591770()*0.111248);
}

double NNfunction_ns_chi03_dR::synapse0x259b630() {
   return (neuron0x2592140()*0.916591);
}

double NNfunction_ns_chi03_dR::synapse0x259b670() {
   return (neuron0x2592b10()*-0.537016);
}

double NNfunction_ns_chi03_dR::synapse0x259b9f0() {
   return (neuron0x256daa0()*2.07296);
}

double NNfunction_ns_chi03_dR::synapse0x259ba30() {
   return (neuron0x256e2e0()*-1.98634);
}

double NNfunction_ns_chi03_dR::synapse0x259ba70() {
   return (neuron0x256edc0()*1.31316);
}

double NNfunction_ns_chi03_dR::synapse0x259bab0() {
   return (neuron0x256e860()*-2.62725);
}

double NNfunction_ns_chi03_dR::synapse0x259baf0() {
   return (neuron0x256fba0()*1.48208);
}

double NNfunction_ns_chi03_dR::synapse0x259bb30() {
   return (neuron0x2571670()*-2.75471);
}

double NNfunction_ns_chi03_dR::synapse0x259bb70() {
   return (neuron0x2572440()*0.486663);
}

double NNfunction_ns_chi03_dR::synapse0x259bbb0() {
   return (neuron0x2572e10()*3.25557);
}

double NNfunction_ns_chi03_dR::synapse0x259bbf0() {
   return (neuron0x25737e0()*-0.958392);
}

double NNfunction_ns_chi03_dR::synapse0x259bc30() {
   return (neuron0x25742c0()*0.238343);
}

double NNfunction_ns_chi03_dR::synapse0x259bc70() {
   return (neuron0x2574c90()*1.50518);
}

double NNfunction_ns_chi03_dR::synapse0x259bcb0() {
   return (neuron0x2571d70()*0.453614);
}

double NNfunction_ns_chi03_dR::synapse0x259bcf0() {
   return (neuron0x2576840()*1.54254);
}

double NNfunction_ns_chi03_dR::synapse0x259bd30() {
   return (neuron0x2577210()*4.46847);
}

double NNfunction_ns_chi03_dR::synapse0x259bd70() {
   return (neuron0x2577be0()*-7.83774);
}

double NNfunction_ns_chi03_dR::synapse0x259bdb0() {
   return (neuron0x25785b0()*-2.79495);
}

double NNfunction_ns_chi03_dR::synapse0x259b840() {
   return (neuron0x257a3c0()*-2.23686);
}

double NNfunction_ns_chi03_dR::synapse0x259b880() {
   return (neuron0x257a6a0()*0.946046);
}

double NNfunction_ns_chi03_dR::synapse0x259bf00() {
   return (neuron0x257b070()*-2.06819);
}

double NNfunction_ns_chi03_dR::synapse0x259bf40() {
   return (neuron0x257ba40()*-4.6909);
}

double NNfunction_ns_chi03_dR::synapse0x259bf80() {
   return (neuron0x257c410()*-1.76501);
}

double NNfunction_ns_chi03_dR::synapse0x259bfc0() {
   return (neuron0x257cde0()*1.07267);
}

double NNfunction_ns_chi03_dR::synapse0x259c000() {
   return (neuron0x2575930()*-2.30943);
}

double NNfunction_ns_chi03_dR::synapse0x259c040() {
   return (neuron0x2576300()*1.03462);
}

double NNfunction_ns_chi03_dR::synapse0x259c080() {
   return (neuron0x257fb70()*-1.23395);
}

double NNfunction_ns_chi03_dR::synapse0x259c0c0() {
   return (neuron0x2580540()*2.93292);
}

double NNfunction_ns_chi03_dR::synapse0x259c100() {
   return (neuron0x2580f10()*-1.70951);
}

double NNfunction_ns_chi03_dR::synapse0x259c140() {
   return (neuron0x25818e0()*0.619511);
}

double NNfunction_ns_chi03_dR::synapse0x259c180() {
   return (neuron0x25822b0()*4.47156);
}

double NNfunction_ns_chi03_dR::synapse0x259c1c0() {
   return (neuron0x2582c80()*2.80812);
}

double NNfunction_ns_chi03_dR::synapse0x259c200() {
   return (neuron0x2583650()*-0.922225);
}

double NNfunction_ns_chi03_dR::synapse0x259c240() {
   return (neuron0x2584020()*1.25744);
}

double NNfunction_ns_chi03_dR::synapse0x259bdf0() {
   return (neuron0x257a0b0()*-2.28831);
}

double NNfunction_ns_chi03_dR::synapse0x259be30() {
   return (neuron0x2586c00()*-3.53365);
}

double NNfunction_ns_chi03_dR::synapse0x259be70() {
   return (neuron0x25875d0()*-1.4538);
}

double NNfunction_ns_chi03_dR::synapse0x259beb0() {
   return (neuron0x2587fa0()*-1.10037);
}

double NNfunction_ns_chi03_dR::synapse0x259c490() {
   return (neuron0x2588970()*2.02062);
}

double NNfunction_ns_chi03_dR::synapse0x259c4d0() {
   return (neuron0x2589340()*1.61475);
}

double NNfunction_ns_chi03_dR::synapse0x259c510() {
   return (neuron0x2589d10()*-0.586874);
}

double NNfunction_ns_chi03_dR::synapse0x259c550() {
   return (neuron0x258a6e0()*-13.3718);
}

double NNfunction_ns_chi03_dR::synapse0x259c590() {
   return (neuron0x258b0b0()*0.677841);
}

double NNfunction_ns_chi03_dR::synapse0x259c5d0() {
   return (neuron0x258bc90()*-0.776727);
}

double NNfunction_ns_chi03_dR::synapse0x259c610() {
   return (neuron0x258c660()*4.8022);
}

double NNfunction_ns_chi03_dR::synapse0x259c650() {
   return (neuron0x257d4e0()*1.78298);
}

double NNfunction_ns_chi03_dR::synapse0x259c690() {
   return (neuron0x257deb0()*-1.4931);
}

double NNfunction_ns_chi03_dR::synapse0x259c6d0() {
   return (neuron0x257e880()*-2.86775);
}

double NNfunction_ns_chi03_dR::synapse0x259c710() {
   return (neuron0x2590ec0()*0.0300401);
}

double NNfunction_ns_chi03_dR::synapse0x259c750() {
   return (neuron0x2591770()*1.37575);
}

double NNfunction_ns_chi03_dR::synapse0x259c790() {
   return (neuron0x2592140()*1.10872);
}

double NNfunction_ns_chi03_dR::synapse0x259c7d0() {
   return (neuron0x2592b10()*-0.127882);
}

double NNfunction_ns_chi03_dR::synapse0x259cb50() {
   return (neuron0x256daa0()*0.0176413);
}

double NNfunction_ns_chi03_dR::synapse0x259cb90() {
   return (neuron0x256e2e0()*-0.0268375);
}

double NNfunction_ns_chi03_dR::synapse0x259cbd0() {
   return (neuron0x256edc0()*0.00416811);
}

double NNfunction_ns_chi03_dR::synapse0x259cc10() {
   return (neuron0x256e860()*-0.0068004);
}

double NNfunction_ns_chi03_dR::synapse0x259cc50() {
   return (neuron0x256fba0()*0.0382411);
}

double NNfunction_ns_chi03_dR::synapse0x259cc90() {
   return (neuron0x2571670()*-2.70588);
}

double NNfunction_ns_chi03_dR::synapse0x259ccd0() {
   return (neuron0x2572440()*-0.212703);
}

double NNfunction_ns_chi03_dR::synapse0x259cd10() {
   return (neuron0x2572e10()*0.0317049);
}

double NNfunction_ns_chi03_dR::synapse0x259cd50() {
   return (neuron0x25737e0()*-0.0183865);
}

double NNfunction_ns_chi03_dR::synapse0x259cd90() {
   return (neuron0x25742c0()*3.67386);
}

double NNfunction_ns_chi03_dR::synapse0x259cdd0() {
   return (neuron0x2574c90()*1.48424);
}

double NNfunction_ns_chi03_dR::synapse0x259ce10() {
   return (neuron0x2571d70()*-4.13148);
}

double NNfunction_ns_chi03_dR::synapse0x259ce50() {
   return (neuron0x2576840()*0.0160935);
}

double NNfunction_ns_chi03_dR::synapse0x259ce90() {
   return (neuron0x2577210()*0.0391809);
}

double NNfunction_ns_chi03_dR::synapse0x259ced0() {
   return (neuron0x2577be0()*0.672872);
}

double NNfunction_ns_chi03_dR::synapse0x259cf10() {
   return (neuron0x25785b0()*-2.2007);
}

double NNfunction_ns_chi03_dR::synapse0x259c9a0() {
   return (neuron0x257a3c0()*-0.0104004);
}

double NNfunction_ns_chi03_dR::synapse0x259c9e0() {
   return (neuron0x257a6a0()*0.253799);
}

double NNfunction_ns_chi03_dR::synapse0x259d060() {
   return (neuron0x257b070()*-0.00982222);
}

double NNfunction_ns_chi03_dR::synapse0x259d0a0() {
   return (neuron0x257ba40()*0.125853);
}

double NNfunction_ns_chi03_dR::synapse0x259d0e0() {
   return (neuron0x257c410()*-0.0678594);
}

double NNfunction_ns_chi03_dR::synapse0x259d120() {
   return (neuron0x257cde0()*-0.062889);
}

double NNfunction_ns_chi03_dR::synapse0x259d160() {
   return (neuron0x2575930()*-0.179035);
}

double NNfunction_ns_chi03_dR::synapse0x259d1a0() {
   return (neuron0x2576300()*-1.04676);
}

double NNfunction_ns_chi03_dR::synapse0x259d1e0() {
   return (neuron0x257fb70()*1.88935);
}

double NNfunction_ns_chi03_dR::synapse0x259d220() {
   return (neuron0x2580540()*4.30111);
}

double NNfunction_ns_chi03_dR::synapse0x259d260() {
   return (neuron0x2580f10()*-0.0109001);
}

double NNfunction_ns_chi03_dR::synapse0x259d2a0() {
   return (neuron0x25818e0()*0.47616);
}

double NNfunction_ns_chi03_dR::synapse0x259d2e0() {
   return (neuron0x25822b0()*0.00917795);
}

double NNfunction_ns_chi03_dR::synapse0x259d320() {
   return (neuron0x2582c80()*-0.000682446);
}

double NNfunction_ns_chi03_dR::synapse0x259d360() {
   return (neuron0x2583650()*-0.0288918);
}

double NNfunction_ns_chi03_dR::synapse0x259d3a0() {
   return (neuron0x2584020()*1.30028);
}

double NNfunction_ns_chi03_dR::synapse0x259cf50() {
   return (neuron0x257a0b0()*0.0262808);
}

double NNfunction_ns_chi03_dR::synapse0x259cf90() {
   return (neuron0x2586c00()*0.0167709);
}

double NNfunction_ns_chi03_dR::synapse0x259cfd0() {
   return (neuron0x25875d0()*1.94022);
}

double NNfunction_ns_chi03_dR::synapse0x259d010() {
   return (neuron0x2587fa0()*-2.35973);
}

double NNfunction_ns_chi03_dR::synapse0x259d5f0() {
   return (neuron0x2588970()*-0.239424);
}

double NNfunction_ns_chi03_dR::synapse0x259d630() {
   return (neuron0x2589340()*0.506644);
}

double NNfunction_ns_chi03_dR::synapse0x259d670() {
   return (neuron0x2589d10()*0.281068);
}

double NNfunction_ns_chi03_dR::synapse0x259d6b0() {
   return (neuron0x258a6e0()*-0.28822);
}

double NNfunction_ns_chi03_dR::synapse0x259d6f0() {
   return (neuron0x258b0b0()*3.53094);
}

double NNfunction_ns_chi03_dR::synapse0x259d730() {
   return (neuron0x258bc90()*1.32615);
}

double NNfunction_ns_chi03_dR::synapse0x259d770() {
   return (neuron0x258c660()*0.0619731);
}

double NNfunction_ns_chi03_dR::synapse0x259d7b0() {
   return (neuron0x257d4e0()*-0.201339);
}

double NNfunction_ns_chi03_dR::synapse0x259d7f0() {
   return (neuron0x257deb0()*1.01701);
}

double NNfunction_ns_chi03_dR::synapse0x259d830() {
   return (neuron0x257e880()*-0.0133295);
}

double NNfunction_ns_chi03_dR::synapse0x259d870() {
   return (neuron0x2590ec0()*0.132682);
}

double NNfunction_ns_chi03_dR::synapse0x259d8b0() {
   return (neuron0x2591770()*-2.37495);
}

double NNfunction_ns_chi03_dR::synapse0x259d8f0() {
   return (neuron0x2592140()*-0.00517806);
}

double NNfunction_ns_chi03_dR::synapse0x259d930() {
   return (neuron0x2592b10()*0.0499264);
}

double NNfunction_ns_chi03_dR::synapse0x259db90() {
   return (neuron0x2599d10()*-3.0265);
}

double NNfunction_ns_chi03_dR::synapse0x259dbd0() {
   return (neuron0x259a0b0()*-2.96654);
}

double NNfunction_ns_chi03_dR::synapse0x259dc10() {
   return (neuron0x259a550()*-2.3365);
}

double NNfunction_ns_chi03_dR::synapse0x259dc50() {
   return (neuron0x259b6b0()*-2.40859);
}

double NNfunction_ns_chi03_dR::synapse0x259dc90() {
   return (neuron0x259c810()*-13.2008);
}

