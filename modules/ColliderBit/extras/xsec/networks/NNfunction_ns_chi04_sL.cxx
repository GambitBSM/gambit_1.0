#include "NNfunction_ns_chi04_sL.h"
#include <cmath>

double NNfunction_ns_chi04_sL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5815)/15.0917;
   input1 = (in1 - 22.2581)/293.016;
   input2 = (in2 - 365.18)/372.741;
   input3 = (in3 - 96.1341)/713.343;
   input4 = (in4 - 825.109)/830.469;
   input5 = (in5 - 726.512)/833.975;
   input6 = (in6 - 726.085)/832.222;
   input7 = (in7 - 722.608)/809.707;
   input8 = (in8 - 734.461)/857.531;
   input9 = (in9 - 722.182)/840.946;
   input10 = (in10 - 751.868)/851.422;
   input11 = (in11 - 635.191)/718.813;
   input12 = (in12 - 285.984)/208.44;
   input13 = (in13 - 450.949)/415.261;
   input14 = (in14 - 634.95)/671.679;
   input15 = (in15 - 637.745)/677.935;
   input16 = (in16 - 457.428)/461.754;
   input17 = (in17 - 661.735)/754.327;
   input18 = (in18 - 661.95)/758.769;
   input19 = (in19 - 660.803)/728.022;
   input20 = (in20 - -77.0531)/420.637;
   input21 = (in21 - -104.141)/973.667;
   input22 = (in22 - 17.3612)/996.337;
   input23 = (in23 - -26.0235)/256.651;
   switch(index) {
     case 0:
         return neuron0x2b7e770();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi04_sL::Value(int index, double* input) {
   input0 = (input[0] - 23.5815)/15.0917;
   input1 = (input[1] - 22.2581)/293.016;
   input2 = (input[2] - 365.18)/372.741;
   input3 = (input[3] - 96.1341)/713.343;
   input4 = (input[4] - 825.109)/830.469;
   input5 = (input[5] - 726.512)/833.975;
   input6 = (input[6] - 726.085)/832.222;
   input7 = (input[7] - 722.608)/809.707;
   input8 = (input[8] - 734.461)/857.531;
   input9 = (input[9] - 722.182)/840.946;
   input10 = (input[10] - 751.868)/851.422;
   input11 = (input[11] - 635.191)/718.813;
   input12 = (input[12] - 285.984)/208.44;
   input13 = (input[13] - 450.949)/415.261;
   input14 = (input[14] - 634.95)/671.679;
   input15 = (input[15] - 637.745)/677.935;
   input16 = (input[16] - 457.428)/461.754;
   input17 = (input[17] - 661.735)/754.327;
   input18 = (input[18] - 661.95)/758.769;
   input19 = (input[19] - 660.803)/728.022;
   input20 = (input[20] - -77.0531)/420.637;
   input21 = (input[21] - -104.141)/973.667;
   input22 = (input[22] - 17.3612)/996.337;
   input23 = (input[23] - -26.0235)/256.651;
   switch(index) {
     case 0:
         return neuron0x2b7e770();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi04_sL::neuron0x2b4a860() {
   return input0;
}

double NNfunction_ns_chi04_sL::neuron0x2b4aba0() {
   return input1;
}

double NNfunction_ns_chi04_sL::neuron0x2b4aee0() {
   return input2;
}

double NNfunction_ns_chi04_sL::neuron0x2b4b220() {
   return input3;
}

double NNfunction_ns_chi04_sL::neuron0x2b4b560() {
   return input4;
}

double NNfunction_ns_chi04_sL::neuron0x2b4b8a0() {
   return input5;
}

double NNfunction_ns_chi04_sL::neuron0x2b4bbe0() {
   return input6;
}

double NNfunction_ns_chi04_sL::neuron0x2b4bf20() {
   return input7;
}

double NNfunction_ns_chi04_sL::neuron0x2b4c260() {
   return input8;
}

double NNfunction_ns_chi04_sL::neuron0x2b4c5a0() {
   return input9;
}

double NNfunction_ns_chi04_sL::neuron0x2b4c8e0() {
   return input10;
}

double NNfunction_ns_chi04_sL::neuron0x2b4cc20() {
   return input11;
}

double NNfunction_ns_chi04_sL::neuron0x2b4cf60() {
   return input12;
}

double NNfunction_ns_chi04_sL::neuron0x2b4d2a0() {
   return input13;
}

double NNfunction_ns_chi04_sL::neuron0x2b4d5e0() {
   return input14;
}

double NNfunction_ns_chi04_sL::neuron0x2b4d920() {
   return input15;
}

double NNfunction_ns_chi04_sL::neuron0x2b4dc60() {
   return input16;
}

double NNfunction_ns_chi04_sL::neuron0x2b4e1c0() {
   return input17;
}

double NNfunction_ns_chi04_sL::neuron0x2b4e3e0() {
   return input18;
}

double NNfunction_ns_chi04_sL::neuron0x2b4e720() {
   return input19;
}

double NNfunction_ns_chi04_sL::neuron0x2b4ea60() {
   return input20;
}

double NNfunction_ns_chi04_sL::neuron0x2b4eda0() {
   return input21;
}

double NNfunction_ns_chi04_sL::neuron0x2b4f0e0() {
   return input22;
}

double NNfunction_ns_chi04_sL::neuron0x2b4f420() {
   return input23;
}

double NNfunction_ns_chi04_sL::input0x2b4f890() {
   double input = -1.0275;
   input += synapse0x2b4a720();
   input += synapse0x2b4a760();
   input += synapse0x2b4fb40();
   input += synapse0x2b4fb80();
   input += synapse0x2b4fbc0();
   input += synapse0x2b4fc00();
   input += synapse0x2b4fc40();
   input += synapse0x2b4fc80();
   input += synapse0x2b4fcc0();
   input += synapse0x2b4fd00();
   input += synapse0x2b4fd40();
   input += synapse0x2b4fd80();
   input += synapse0x2b4fdc0();
   input += synapse0x2b4fe00();
   input += synapse0x2b4fe40();
   input += synapse0x2b4fe80();
   input += synapse0x2b4a690();
   input += synapse0x2b4a6d0();
   input += synapse0x2905a00();
   input += synapse0x2905a40();
   input += synapse0x2b500e0();
   input += synapse0x2b50120();
   input += synapse0x2b50160();
   input += synapse0x2b501a0();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b4f890() {
   double input = input0x2b4f890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b501e0() {
   double input = -11.8164;
   input += synapse0x2b50520();
   input += synapse0x2b50560();
   input += synapse0x2b505a0();
   input += synapse0x2b505e0();
   input += synapse0x2b50620();
   input += synapse0x2b50660();
   input += synapse0x2b506a0();
   input += synapse0x2b506e0();
   input += synapse0x2b50720();
   input += synapse0x2b4ffd0();
   input += synapse0x2b50010();
   input += synapse0x2b50050();
   input += synapse0x2b50090();
   input += synapse0x2b50970();
   input += synapse0x2b509b0();
   input += synapse0x2b509f0();
   input += synapse0x2b50370();
   input += synapse0x2b503b0();
   input += synapse0x2b50b40();
   input += synapse0x2b50b80();
   input += synapse0x2b50bc0();
   input += synapse0x2b50c00();
   input += synapse0x2b50c40();
   input += synapse0x2b50c80();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b501e0() {
   double input = input0x2b501e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b50cc0() {
   double input = 2.98882;
   input += synapse0x2b51000();
   input += synapse0x2b51040();
   input += synapse0x2b51080();
   input += synapse0x2b510c0();
   input += synapse0x2b51100();
   input += synapse0x2b51140();
   input += synapse0x2b51180();
   input += synapse0x2b511c0();
   input += synapse0x2b51200();
   input += synapse0x2b51240();
   input += synapse0x2b51280();
   input += synapse0x2b512c0();
   input += synapse0x2b51300();
   input += synapse0x2b51340();
   input += synapse0x2b51380();
   input += synapse0x2b513c0();
   input += synapse0x2b50e50();
   input += synapse0x2b50e90();
   input += synapse0x29060f0();
   input += synapse0x29139c0();
   input += synapse0x2913a00();
   input += synapse0x2b398f0();
   input += synapse0x2b39930();
   input += synapse0x2b39970();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b50cc0() {
   double input = input0x2b50cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b50760() {
   double input = 0.909711;
   input += synapse0x2914240();
   input += synapse0x2b508f0();
   input += synapse0x2b50930();
   input += synapse0x2b51510();
   input += synapse0x2b51550();
   input += synapse0x2b51590();
   input += synapse0x2b515d0();
   input += synapse0x2b51610();
   input += synapse0x2b51650();
   input += synapse0x2b51690();
   input += synapse0x2b516d0();
   input += synapse0x2b51710();
   input += synapse0x2b51750();
   input += synapse0x2b51790();
   input += synapse0x2b517d0();
   input += synapse0x2b51810();
   input += synapse0x2b4a7a0();
   input += synapse0x2b4a7e0();
   input += synapse0x2b4a820();
   input += synapse0x2b51960();
   input += synapse0x2b519a0();
   input += synapse0x2b519e0();
   input += synapse0x2b51a20();
   input += synapse0x2b51a60();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b50760() {
   double input = input0x2b50760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b51aa0() {
   double input = -0.691563;
   input += synapse0x2b51de0();
   input += synapse0x2b51e20();
   input += synapse0x2b51e60();
   input += synapse0x2b51ea0();
   input += synapse0x2b51ee0();
   input += synapse0x2b51f20();
   input += synapse0x2b51f60();
   input += synapse0x2b51fa0();
   input += synapse0x2b51fe0();
   input += synapse0x2b52020();
   input += synapse0x2b52060();
   input += synapse0x2b520a0();
   input += synapse0x2b520e0();
   input += synapse0x2b52120();
   input += synapse0x2b52160();
   input += synapse0x2b521a0();
   input += synapse0x2b51c30();
   input += synapse0x2b51c70();
   input += synapse0x2b522f0();
   input += synapse0x2b52330();
   input += synapse0x2b52370();
   input += synapse0x2b523b0();
   input += synapse0x2b523f0();
   input += synapse0x2b52430();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b51aa0() {
   double input = input0x2b51aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b52470() {
   double input = 1.29619;
   input += synapse0x2b527b0();
   input += synapse0x2b527f0();
   input += synapse0x2b52830();
   input += synapse0x2b52870();
   input += synapse0x2b528b0();
   input += synapse0x2b528f0();
   input += synapse0x2b52930();
   input += synapse0x2b52970();
   input += synapse0x2b529b0();
   input += synapse0x2913d10();
   input += synapse0x2913d50();
   input += synapse0x2913d90();
   input += synapse0x2913dd0();
   input += synapse0x2913e10();
   input += synapse0x2913e50();
   input += synapse0x2913e90();
   input += synapse0x2b52600();
   input += synapse0x2b52640();
   input += synapse0x2913fe0();
   input += synapse0x2914020();
   input += synapse0x2914060();
   input += synapse0x29140a0();
   input += synapse0x29140e0();
   input += synapse0x2b53200();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b52470() {
   double input = input0x2b52470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b53240() {
   double input = -0.389214;
   input += synapse0x2b53580();
   input += synapse0x2b535c0();
   input += synapse0x2b53600();
   input += synapse0x2b53640();
   input += synapse0x2b53680();
   input += synapse0x2b536c0();
   input += synapse0x2b53700();
   input += synapse0x2b53740();
   input += synapse0x2b53780();
   input += synapse0x2b537c0();
   input += synapse0x2b53800();
   input += synapse0x2b53840();
   input += synapse0x2b53880();
   input += synapse0x2b538c0();
   input += synapse0x2b53900();
   input += synapse0x2b53940();
   input += synapse0x2b533d0();
   input += synapse0x2b53410();
   input += synapse0x2b53a90();
   input += synapse0x2b53ad0();
   input += synapse0x2b53b10();
   input += synapse0x2b53b50();
   input += synapse0x2b53b90();
   input += synapse0x2b53bd0();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b53240() {
   double input = input0x2b53240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b53c10() {
   double input = -0.717536;
   input += synapse0x2b53f50();
   input += synapse0x2b53f90();
   input += synapse0x2b53fd0();
   input += synapse0x2b54010();
   input += synapse0x2b54050();
   input += synapse0x2b54090();
   input += synapse0x2b540d0();
   input += synapse0x2b54110();
   input += synapse0x2b54150();
   input += synapse0x2b54190();
   input += synapse0x2b541d0();
   input += synapse0x2b54210();
   input += synapse0x2b54250();
   input += synapse0x2b54290();
   input += synapse0x2b542d0();
   input += synapse0x2b54310();
   input += synapse0x2b53da0();
   input += synapse0x2b53de0();
   input += synapse0x2b54460();
   input += synapse0x2b544a0();
   input += synapse0x2b544e0();
   input += synapse0x2b54520();
   input += synapse0x2b54560();
   input += synapse0x2b545a0();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b53c10() {
   double input = input0x2b53c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b545e0() {
   double input = 0.600156;
   input += synapse0x2b4e0b0();
   input += synapse0x2b4e0f0();
   input += synapse0x2b4e130();
   input += synapse0x2b4e170();
   input += synapse0x2b54b30();
   input += synapse0x2b54b70();
   input += synapse0x2b54bb0();
   input += synapse0x2b54bf0();
   input += synapse0x2b54c30();
   input += synapse0x2b54c70();
   input += synapse0x2b54cb0();
   input += synapse0x2b54cf0();
   input += synapse0x2b54d30();
   input += synapse0x2b54d70();
   input += synapse0x2b54db0();
   input += synapse0x2b54df0();
   input += synapse0x2b54770();
   input += synapse0x2b547b0();
   input += synapse0x2b54f40();
   input += synapse0x2b54f80();
   input += synapse0x2b54fc0();
   input += synapse0x2b55000();
   input += synapse0x2b55040();
   input += synapse0x2b55080();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b545e0() {
   double input = input0x2b545e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b550c0() {
   double input = 0.0947647;
   input += synapse0x2b55400();
   input += synapse0x2b55440();
   input += synapse0x2b55480();
   input += synapse0x2b554c0();
   input += synapse0x2b55500();
   input += synapse0x2b55540();
   input += synapse0x2b55580();
   input += synapse0x2b555c0();
   input += synapse0x2b55600();
   input += synapse0x2b55640();
   input += synapse0x2b55680();
   input += synapse0x2b556c0();
   input += synapse0x2b55700();
   input += synapse0x2b55740();
   input += synapse0x2b55780();
   input += synapse0x2b557c0();
   input += synapse0x2b55250();
   input += synapse0x2b55290();
   input += synapse0x2b55910();
   input += synapse0x2b55950();
   input += synapse0x2b55990();
   input += synapse0x2b559d0();
   input += synapse0x2b55a10();
   input += synapse0x2b55a50();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b550c0() {
   double input = input0x2b550c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b55a90() {
   double input = -1.92254;
   input += synapse0x2b55dd0();
   input += synapse0x2b55e10();
   input += synapse0x2b55e50();
   input += synapse0x2b55e90();
   input += synapse0x2b55ed0();
   input += synapse0x2b55f10();
   input += synapse0x2b55f50();
   input += synapse0x2b55f90();
   input += synapse0x2b55fd0();
   input += synapse0x2b56010();
   input += synapse0x2b56050();
   input += synapse0x2b56090();
   input += synapse0x2b560d0();
   input += synapse0x2b56110();
   input += synapse0x2b56150();
   input += synapse0x2b56190();
   input += synapse0x2b55c20();
   input += synapse0x2b55c60();
   input += synapse0x2b529f0();
   input += synapse0x2b52a30();
   input += synapse0x2b52a70();
   input += synapse0x2b52ab0();
   input += synapse0x2b52af0();
   input += synapse0x2b52b30();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b55a90() {
   double input = input0x2b55a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b52b70() {
   double input = -0.680244;
   input += synapse0x2b52eb0();
   input += synapse0x2b52ef0();
   input += synapse0x2b52f30();
   input += synapse0x2b52f70();
   input += synapse0x2b52fb0();
   input += synapse0x2b52ff0();
   input += synapse0x2b53030();
   input += synapse0x2b53070();
   input += synapse0x2b530b0();
   input += synapse0x2b530f0();
   input += synapse0x2b53130();
   input += synapse0x2b53170();
   input += synapse0x2b531b0();
   input += synapse0x2b572f0();
   input += synapse0x2b57330();
   input += synapse0x2b57370();
   input += synapse0x2b52d00();
   input += synapse0x2b52d40();
   input += synapse0x2b574c0();
   input += synapse0x2b57500();
   input += synapse0x2b57540();
   input += synapse0x2b57580();
   input += synapse0x2b575c0();
   input += synapse0x2b57600();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b52b70() {
   double input = input0x2b52b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b57640() {
   double input = -1.52387;
   input += synapse0x2b57980();
   input += synapse0x2b579c0();
   input += synapse0x2b57a00();
   input += synapse0x2b57a40();
   input += synapse0x2b57a80();
   input += synapse0x2b57ac0();
   input += synapse0x2b57b00();
   input += synapse0x2b57b40();
   input += synapse0x2b57b80();
   input += synapse0x2b57bc0();
   input += synapse0x2b57c00();
   input += synapse0x2b57c40();
   input += synapse0x2b57c80();
   input += synapse0x2b57cc0();
   input += synapse0x2b57d00();
   input += synapse0x2b57d40();
   input += synapse0x2b577d0();
   input += synapse0x2b57810();
   input += synapse0x2b57e90();
   input += synapse0x2b57ed0();
   input += synapse0x2b57f10();
   input += synapse0x2b57f50();
   input += synapse0x2b57f90();
   input += synapse0x2b57fd0();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b57640() {
   double input = input0x2b57640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b58010() {
   double input = 0.79029;
   input += synapse0x2b58350();
   input += synapse0x2b58390();
   input += synapse0x2b583d0();
   input += synapse0x2b58410();
   input += synapse0x2b58450();
   input += synapse0x2b58490();
   input += synapse0x2b584d0();
   input += synapse0x2b58510();
   input += synapse0x2b58550();
   input += synapse0x2b58590();
   input += synapse0x2b585d0();
   input += synapse0x2b58610();
   input += synapse0x2b58650();
   input += synapse0x2b58690();
   input += synapse0x2b586d0();
   input += synapse0x2b58710();
   input += synapse0x2b581a0();
   input += synapse0x2b581e0();
   input += synapse0x2b58860();
   input += synapse0x2b588a0();
   input += synapse0x2b588e0();
   input += synapse0x2b58920();
   input += synapse0x2b58960();
   input += synapse0x2b589a0();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b58010() {
   double input = input0x2b58010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b589e0() {
   double input = 0.674778;
   input += synapse0x2b58d20();
   input += synapse0x2b58d60();
   input += synapse0x2b58da0();
   input += synapse0x2b58de0();
   input += synapse0x2b58e20();
   input += synapse0x2b58e60();
   input += synapse0x2b58ea0();
   input += synapse0x2b58ee0();
   input += synapse0x2b58f20();
   input += synapse0x2b58f60();
   input += synapse0x2b58fa0();
   input += synapse0x2b58fe0();
   input += synapse0x2b59020();
   input += synapse0x2b59060();
   input += synapse0x2b590a0();
   input += synapse0x2b590e0();
   input += synapse0x2b58b70();
   input += synapse0x2b58bb0();
   input += synapse0x2b59230();
   input += synapse0x2b59270();
   input += synapse0x2b592b0();
   input += synapse0x2b592f0();
   input += synapse0x2b59330();
   input += synapse0x2b59370();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b589e0() {
   double input = input0x2b589e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b593b0() {
   double input = 0.149124;
   input += synapse0x2b596f0();
   input += synapse0x2b4aa80();
   input += synapse0x2b4aac0();
   input += synapse0x2b4adc0();
   input += synapse0x2b4ae00();
   input += synapse0x2b4b100();
   input += synapse0x2b4b140();
   input += synapse0x2b4b440();
   input += synapse0x2b4b480();
   input += synapse0x2b4b780();
   input += synapse0x2b4b7c0();
   input += synapse0x2b4bac0();
   input += synapse0x2b4bb00();
   input += synapse0x2b4be00();
   input += synapse0x2b4be40();
   input += synapse0x2b4c140();
   input += synapse0x2b4c180();
   input += synapse0x2b4c480();
   input += synapse0x2b4c4c0();
   input += synapse0x2b4c7c0();
   input += synapse0x2b4c800();
   input += synapse0x2b4cb00();
   input += synapse0x2b4cb40();
   input += synapse0x2b4ce40();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b593b0() {
   double input = input0x2b593b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b5b1c0() {
   double input = -0.0998794;
   input += synapse0x2b4ce80();
   input += synapse0x2b4db40();
   input += synapse0x2b4db80();
   input += synapse0x2b59540();
   input += synapse0x2b59580();
   input += synapse0x2b4de80();
   input += synapse0x2b4dec0();
   input += synapse0x29058e0();
   input += synapse0x2905920();
   input += synapse0x2b4e600();
   input += synapse0x2b4e640();
   input += synapse0x2b4e940();
   input += synapse0x2b4e980();
   input += synapse0x2b4ec80();
   input += synapse0x2b4ecc0();
   input += synapse0x2b4efc0();
   input += synapse0x2b4f000();
   input += synapse0x2b4f300();
   input += synapse0x2b4f340();
   input += synapse0x2b4f640();
   input += synapse0x2b4f680();
   input += synapse0x2b4d180();
   input += synapse0x2b4d1c0();
   input += synapse0x2b5b460();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b5b1c0() {
   double input = input0x2b5b1c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b5b4a0() {
   double input = -0.0226454;
   input += synapse0x2b5b7e0();
   input += synapse0x2b5b820();
   input += synapse0x2b5b860();
   input += synapse0x2b5b8a0();
   input += synapse0x2b5b8e0();
   input += synapse0x2b5b920();
   input += synapse0x2b5b960();
   input += synapse0x2b5b9a0();
   input += synapse0x2b5b9e0();
   input += synapse0x2b5ba20();
   input += synapse0x2b5ba60();
   input += synapse0x2b5baa0();
   input += synapse0x2b5bae0();
   input += synapse0x2b5bb20();
   input += synapse0x2b5bb60();
   input += synapse0x2b5bba0();
   input += synapse0x2b5b630();
   input += synapse0x2b5b670();
   input += synapse0x2b5bcf0();
   input += synapse0x2b5bd30();
   input += synapse0x2b5bd70();
   input += synapse0x2b5bdb0();
   input += synapse0x2b5bdf0();
   input += synapse0x2b5be30();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b5b4a0() {
   double input = input0x2b5b4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b5be70() {
   double input = -1.25394;
   input += synapse0x2b5c1b0();
   input += synapse0x2b5c1f0();
   input += synapse0x2b5c230();
   input += synapse0x2b5c270();
   input += synapse0x2b5c2b0();
   input += synapse0x2b5c2f0();
   input += synapse0x2b5c330();
   input += synapse0x2b5c370();
   input += synapse0x2b5c3b0();
   input += synapse0x2b5c3f0();
   input += synapse0x2b5c430();
   input += synapse0x2b5c470();
   input += synapse0x2b5c4b0();
   input += synapse0x2b5c4f0();
   input += synapse0x2b5c530();
   input += synapse0x2b5c570();
   input += synapse0x2b5c000();
   input += synapse0x2b5c040();
   input += synapse0x2b5c6c0();
   input += synapse0x2b5c700();
   input += synapse0x2b5c740();
   input += synapse0x2b5c780();
   input += synapse0x2b5c7c0();
   input += synapse0x2b5c800();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b5be70() {
   double input = input0x2b5be70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b5c840() {
   double input = 0.674516;
   input += synapse0x2b5cb80();
   input += synapse0x2b5cbc0();
   input += synapse0x2b5cc00();
   input += synapse0x2b5cc40();
   input += synapse0x2b5cc80();
   input += synapse0x2b5ccc0();
   input += synapse0x2b5cd00();
   input += synapse0x2b5cd40();
   input += synapse0x2b5cd80();
   input += synapse0x2b5cdc0();
   input += synapse0x2b5ce00();
   input += synapse0x2b5ce40();
   input += synapse0x2b5ce80();
   input += synapse0x2b5cec0();
   input += synapse0x2b5cf00();
   input += synapse0x2b5cf40();
   input += synapse0x2b5c9d0();
   input += synapse0x2b5ca10();
   input += synapse0x2b5d090();
   input += synapse0x2b5d0d0();
   input += synapse0x2b5d110();
   input += synapse0x2b5d150();
   input += synapse0x2b5d190();
   input += synapse0x2b5d1d0();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b5c840() {
   double input = input0x2b5c840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b5d210() {
   double input = -4.45846;
   input += synapse0x2b5d550();
   input += synapse0x2b5d590();
   input += synapse0x2b5d5d0();
   input += synapse0x2b5d610();
   input += synapse0x2b5d650();
   input += synapse0x2b5d690();
   input += synapse0x2b5d6d0();
   input += synapse0x2b5d710();
   input += synapse0x2b5d750();
   input += synapse0x2b5d790();
   input += synapse0x2b5d7d0();
   input += synapse0x2b5d810();
   input += synapse0x2b5d850();
   input += synapse0x2b5d890();
   input += synapse0x2b5d8d0();
   input += synapse0x2b5d910();
   input += synapse0x2b5d3a0();
   input += synapse0x2b5d3e0();
   input += synapse0x2b5da60();
   input += synapse0x2b5daa0();
   input += synapse0x2b5dae0();
   input += synapse0x2b5db20();
   input += synapse0x2b5db60();
   input += synapse0x2b5dba0();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b5d210() {
   double input = input0x2b5d210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b5dbe0() {
   double input = -3.12266;
   input += synapse0x2b5df20();
   input += synapse0x2b5df60();
   input += synapse0x2b5dfa0();
   input += synapse0x2b5dfe0();
   input += synapse0x2b5e020();
   input += synapse0x2b5e060();
   input += synapse0x2b5e0a0();
   input += synapse0x2b5e0e0();
   input += synapse0x2b5e120();
   input += synapse0x2b562e0();
   input += synapse0x2b56320();
   input += synapse0x2b56360();
   input += synapse0x2b563a0();
   input += synapse0x2b563e0();
   input += synapse0x2b56420();
   input += synapse0x2b56460();
   input += synapse0x2b5dd70();
   input += synapse0x2b5ddb0();
   input += synapse0x2b565b0();
   input += synapse0x2b565f0();
   input += synapse0x2b56630();
   input += synapse0x2b56670();
   input += synapse0x2b566b0();
   input += synapse0x2b566f0();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b5dbe0() {
   double input = input0x2b5dbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b56730() {
   double input = 1.18055;
   input += synapse0x2b56a70();
   input += synapse0x2b56ab0();
   input += synapse0x2b56af0();
   input += synapse0x2b56b30();
   input += synapse0x2b56b70();
   input += synapse0x2b56bb0();
   input += synapse0x2b56bf0();
   input += synapse0x2b56c30();
   input += synapse0x2b56c70();
   input += synapse0x2b56cb0();
   input += synapse0x2b56cf0();
   input += synapse0x2b56d30();
   input += synapse0x2b56d70();
   input += synapse0x2b56db0();
   input += synapse0x2b56df0();
   input += synapse0x2b56e30();
   input += synapse0x2b568c0();
   input += synapse0x2b56900();
   input += synapse0x2b56f80();
   input += synapse0x2b56fc0();
   input += synapse0x2b57000();
   input += synapse0x2b57040();
   input += synapse0x2b57080();
   input += synapse0x2b570c0();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b56730() {
   double input = input0x2b56730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b57100() {
   double input = 0.72852;
   input += synapse0x2b57290();
   input += synapse0x2b60320();
   input += synapse0x2b60360();
   input += synapse0x2b603a0();
   input += synapse0x2b603e0();
   input += synapse0x2b60420();
   input += synapse0x2b60460();
   input += synapse0x2b604a0();
   input += synapse0x2b604e0();
   input += synapse0x2b60520();
   input += synapse0x2b60560();
   input += synapse0x2b605a0();
   input += synapse0x2b605e0();
   input += synapse0x2b60620();
   input += synapse0x2b60660();
   input += synapse0x2b606a0();
   input += synapse0x2b60170();
   input += synapse0x2b601b0();
   input += synapse0x2b607f0();
   input += synapse0x2b60830();
   input += synapse0x2b60870();
   input += synapse0x2b608b0();
   input += synapse0x2b608f0();
   input += synapse0x2b60930();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b57100() {
   double input = input0x2b57100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b60970() {
   double input = 1.35539;
   input += synapse0x2b60cb0();
   input += synapse0x2b60cf0();
   input += synapse0x2b60d30();
   input += synapse0x2b60d70();
   input += synapse0x2b60db0();
   input += synapse0x2b60df0();
   input += synapse0x2b60e30();
   input += synapse0x2b60e70();
   input += synapse0x2b60eb0();
   input += synapse0x2b60ef0();
   input += synapse0x2b60f30();
   input += synapse0x2b60f70();
   input += synapse0x2b60fb0();
   input += synapse0x2b60ff0();
   input += synapse0x2b61030();
   input += synapse0x2b61070();
   input += synapse0x2b60b00();
   input += synapse0x2b60b40();
   input += synapse0x2b611c0();
   input += synapse0x2b61200();
   input += synapse0x2b61240();
   input += synapse0x2b61280();
   input += synapse0x2b612c0();
   input += synapse0x2b61300();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b60970() {
   double input = input0x2b60970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b61340() {
   double input = -3.88689;
   input += synapse0x2b61680();
   input += synapse0x2b616c0();
   input += synapse0x2b61700();
   input += synapse0x2b61740();
   input += synapse0x2b61780();
   input += synapse0x2b617c0();
   input += synapse0x2b61800();
   input += synapse0x2b61840();
   input += synapse0x2b61880();
   input += synapse0x2b618c0();
   input += synapse0x2b61900();
   input += synapse0x2b61940();
   input += synapse0x2b61980();
   input += synapse0x2b619c0();
   input += synapse0x2b61a00();
   input += synapse0x2b61a40();
   input += synapse0x2b614d0();
   input += synapse0x2b61510();
   input += synapse0x2b61b90();
   input += synapse0x2b61bd0();
   input += synapse0x2b61c10();
   input += synapse0x2b61c50();
   input += synapse0x2b61c90();
   input += synapse0x2b61cd0();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b61340() {
   double input = input0x2b61340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b61d10() {
   double input = 1.66366;
   input += synapse0x2b62050();
   input += synapse0x2b62090();
   input += synapse0x2b620d0();
   input += synapse0x2b62110();
   input += synapse0x2b62150();
   input += synapse0x2b62190();
   input += synapse0x2b621d0();
   input += synapse0x2b62210();
   input += synapse0x2b62250();
   input += synapse0x2b62290();
   input += synapse0x2b622d0();
   input += synapse0x2b62310();
   input += synapse0x2b62350();
   input += synapse0x2b62390();
   input += synapse0x2b623d0();
   input += synapse0x2b62410();
   input += synapse0x2b61ea0();
   input += synapse0x2b61ee0();
   input += synapse0x2b62560();
   input += synapse0x2b625a0();
   input += synapse0x2b625e0();
   input += synapse0x2b62620();
   input += synapse0x2b62660();
   input += synapse0x2b626a0();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b61d10() {
   double input = input0x2b61d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b626e0() {
   double input = 0.426183;
   input += synapse0x2b62a20();
   input += synapse0x2b62a60();
   input += synapse0x2b62aa0();
   input += synapse0x2b62ae0();
   input += synapse0x2b62b20();
   input += synapse0x2b62b60();
   input += synapse0x2b62ba0();
   input += synapse0x2b62be0();
   input += synapse0x2b62c20();
   input += synapse0x2b62c60();
   input += synapse0x2b62ca0();
   input += synapse0x2b62ce0();
   input += synapse0x2b62d20();
   input += synapse0x2b62d60();
   input += synapse0x2b62da0();
   input += synapse0x2b62de0();
   input += synapse0x2b62870();
   input += synapse0x2b628b0();
   input += synapse0x2b62f30();
   input += synapse0x2b62f70();
   input += synapse0x2b62fb0();
   input += synapse0x2b62ff0();
   input += synapse0x2b63030();
   input += synapse0x2b63070();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b626e0() {
   double input = input0x2b626e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b630b0() {
   double input = -0.361033;
   input += synapse0x2b633f0();
   input += synapse0x2b63430();
   input += synapse0x2b63470();
   input += synapse0x2b634b0();
   input += synapse0x2b634f0();
   input += synapse0x2b63530();
   input += synapse0x2b63570();
   input += synapse0x2b635b0();
   input += synapse0x2b635f0();
   input += synapse0x2b63630();
   input += synapse0x2b63670();
   input += synapse0x2b636b0();
   input += synapse0x2b636f0();
   input += synapse0x2b63730();
   input += synapse0x2b63770();
   input += synapse0x2b637b0();
   input += synapse0x2b63240();
   input += synapse0x2b63280();
   input += synapse0x2b63900();
   input += synapse0x2b63940();
   input += synapse0x2b63980();
   input += synapse0x2b639c0();
   input += synapse0x2b63a00();
   input += synapse0x2b63a40();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b630b0() {
   double input = input0x2b630b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b63a80() {
   double input = -0.0413491;
   input += synapse0x2b63dc0();
   input += synapse0x2b63e00();
   input += synapse0x2b63e40();
   input += synapse0x2b63e80();
   input += synapse0x2b63ec0();
   input += synapse0x2b63f00();
   input += synapse0x2b63f40();
   input += synapse0x2b63f80();
   input += synapse0x2b63fc0();
   input += synapse0x2b64000();
   input += synapse0x2b64040();
   input += synapse0x2b64080();
   input += synapse0x2b640c0();
   input += synapse0x2b64100();
   input += synapse0x2b64140();
   input += synapse0x2b64180();
   input += synapse0x2b63c10();
   input += synapse0x2b63c50();
   input += synapse0x2b642d0();
   input += synapse0x2b64310();
   input += synapse0x2b64350();
   input += synapse0x2b64390();
   input += synapse0x2b643d0();
   input += synapse0x2b64410();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b63a80() {
   double input = input0x2b63a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b64450() {
   double input = 5.89921;
   input += synapse0x2b64790();
   input += synapse0x2b647d0();
   input += synapse0x2b64810();
   input += synapse0x2b64850();
   input += synapse0x2b64890();
   input += synapse0x2b648d0();
   input += synapse0x2b64910();
   input += synapse0x2b64950();
   input += synapse0x2b64990();
   input += synapse0x2b649d0();
   input += synapse0x2b64a10();
   input += synapse0x2b64a50();
   input += synapse0x2b64a90();
   input += synapse0x2b64ad0();
   input += synapse0x2b64b10();
   input += synapse0x2b64b50();
   input += synapse0x2b645e0();
   input += synapse0x2b64620();
   input += synapse0x2b64ca0();
   input += synapse0x2b64ce0();
   input += synapse0x2b64d20();
   input += synapse0x2b64d60();
   input += synapse0x2b64da0();
   input += synapse0x2b64de0();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b64450() {
   double input = input0x2b64450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b64e20() {
   double input = 0.367671;
   input += synapse0x2b65160();
   input += synapse0x2b59730();
   input += synapse0x2b59770();
   input += synapse0x2b597b0();
   input += synapse0x2b59a00();
   input += synapse0x2b59a40();
   input += synapse0x2b59a80();
   input += synapse0x2b59cd0();
   input += synapse0x2b59d10();
   input += synapse0x2b59f60();
   input += synapse0x2b59fa0();
   input += synapse0x2b59fe0();
   input += synapse0x2b5a230();
   input += synapse0x2b5a270();
   input += synapse0x2b5a4c0();
   input += synapse0x2b5a500();
   input += synapse0x2b64fb0();
   input += synapse0x2b64ff0();
   input += synapse0x2b5a650();
   input += synapse0x2b5ab60();
   input += synapse0x2b5aba0();
   input += synapse0x2b5abe0();
   input += synapse0x2b5ae30();
   input += synapse0x2b5ae70();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b64e20() {
   double input = input0x2b64e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b5aeb0() {
   double input = -0.60632;
   input += synapse0x2b5a720();
   input += synapse0x2b5a760();
   input += synapse0x2b5a7a0();
   input += synapse0x2b5a7e0();
   input += synapse0x2b5b160();
   input += synapse0x2b674b0();
   input += synapse0x2b674f0();
   input += synapse0x2b67530();
   input += synapse0x2b67570();
   input += synapse0x2b675b0();
   input += synapse0x2b675f0();
   input += synapse0x2b67630();
   input += synapse0x2b67670();
   input += synapse0x2b676b0();
   input += synapse0x2b676f0();
   input += synapse0x2b67730();
   input += synapse0x2b5b040();
   input += synapse0x2b5b080();
   input += synapse0x2b67880();
   input += synapse0x2b678c0();
   input += synapse0x2b67900();
   input += synapse0x2b67940();
   input += synapse0x2b67980();
   input += synapse0x2b679c0();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b5aeb0() {
   double input = input0x2b5aeb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b67a00() {
   double input = 8.30296;
   input += synapse0x2b67d40();
   input += synapse0x2b67d80();
   input += synapse0x2b67dc0();
   input += synapse0x2b67e00();
   input += synapse0x2b67e40();
   input += synapse0x2b67e80();
   input += synapse0x2b67ec0();
   input += synapse0x2b67f00();
   input += synapse0x2b67f40();
   input += synapse0x2b67f80();
   input += synapse0x2b67fc0();
   input += synapse0x2b68000();
   input += synapse0x2b68040();
   input += synapse0x2b68080();
   input += synapse0x2b680c0();
   input += synapse0x2b68100();
   input += synapse0x2b67b90();
   input += synapse0x2b67bd0();
   input += synapse0x2b68250();
   input += synapse0x2b68290();
   input += synapse0x2b682d0();
   input += synapse0x2b68310();
   input += synapse0x2b68350();
   input += synapse0x2b68390();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b67a00() {
   double input = input0x2b67a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b683d0() {
   double input = 2.94323;
   input += synapse0x2b68710();
   input += synapse0x2b68750();
   input += synapse0x2b68790();
   input += synapse0x2b687d0();
   input += synapse0x2b68810();
   input += synapse0x2b68850();
   input += synapse0x2b68890();
   input += synapse0x2b688d0();
   input += synapse0x2b68910();
   input += synapse0x2b68950();
   input += synapse0x2b68990();
   input += synapse0x2b689d0();
   input += synapse0x2b68a10();
   input += synapse0x2b68a50();
   input += synapse0x2b68a90();
   input += synapse0x2b68ad0();
   input += synapse0x2b68560();
   input += synapse0x2b685a0();
   input += synapse0x2b68c20();
   input += synapse0x2b68c60();
   input += synapse0x2b68ca0();
   input += synapse0x2b68ce0();
   input += synapse0x2b68d20();
   input += synapse0x2b68d60();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b683d0() {
   double input = input0x2b683d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b68da0() {
   double input = -0.132521;
   input += synapse0x2b690e0();
   input += synapse0x2b69120();
   input += synapse0x2b69160();
   input += synapse0x2b691a0();
   input += synapse0x2b691e0();
   input += synapse0x2b69220();
   input += synapse0x2b69260();
   input += synapse0x2b692a0();
   input += synapse0x2b692e0();
   input += synapse0x2b69320();
   input += synapse0x2b69360();
   input += synapse0x2b693a0();
   input += synapse0x2b693e0();
   input += synapse0x2b69420();
   input += synapse0x2b69460();
   input += synapse0x2b694a0();
   input += synapse0x2b68f30();
   input += synapse0x2b68f70();
   input += synapse0x2b695f0();
   input += synapse0x2b69630();
   input += synapse0x2b69670();
   input += synapse0x2b696b0();
   input += synapse0x2b696f0();
   input += synapse0x2b69730();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b68da0() {
   double input = input0x2b68da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b69770() {
   double input = 2.21541;
   input += synapse0x2b69ab0();
   input += synapse0x2b69af0();
   input += synapse0x2b69b30();
   input += synapse0x2b69b70();
   input += synapse0x2b69bb0();
   input += synapse0x2b69bf0();
   input += synapse0x2b69c30();
   input += synapse0x2b69c70();
   input += synapse0x2b69cb0();
   input += synapse0x2b69cf0();
   input += synapse0x2b69d30();
   input += synapse0x2b69d70();
   input += synapse0x2b69db0();
   input += synapse0x2b69df0();
   input += synapse0x2b69e30();
   input += synapse0x2b69e70();
   input += synapse0x2b69900();
   input += synapse0x2b69940();
   input += synapse0x2b69fc0();
   input += synapse0x2b6a000();
   input += synapse0x2b6a040();
   input += synapse0x2b6a080();
   input += synapse0x2b6a0c0();
   input += synapse0x2b6a100();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b69770() {
   double input = input0x2b69770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b6a140() {
   double input = 2.00187;
   input += synapse0x2b6a480();
   input += synapse0x2b6a4c0();
   input += synapse0x2b6a500();
   input += synapse0x2b6a540();
   input += synapse0x2b6a580();
   input += synapse0x2b6a5c0();
   input += synapse0x2b6a600();
   input += synapse0x2b6a640();
   input += synapse0x2b6a680();
   input += synapse0x2b6a6c0();
   input += synapse0x2b6a700();
   input += synapse0x2b6a740();
   input += synapse0x2b6a780();
   input += synapse0x2b6a7c0();
   input += synapse0x2b6a800();
   input += synapse0x2b6a840();
   input += synapse0x2b6a2d0();
   input += synapse0x2b6a310();
   input += synapse0x2b6a990();
   input += synapse0x2b6a9d0();
   input += synapse0x2b6aa10();
   input += synapse0x2b6aa50();
   input += synapse0x2b6aa90();
   input += synapse0x2b6aad0();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b6a140() {
   double input = input0x2b6a140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b6ab10() {
   double input = -1.74378;
   input += synapse0x2b6ae50();
   input += synapse0x2b6ae90();
   input += synapse0x2b6aed0();
   input += synapse0x2b6af10();
   input += synapse0x2b6af50();
   input += synapse0x2b6af90();
   input += synapse0x2b6afd0();
   input += synapse0x2b6b010();
   input += synapse0x2b6b050();
   input += synapse0x2b6b090();
   input += synapse0x2b6b0d0();
   input += synapse0x2b6b110();
   input += synapse0x2b6b150();
   input += synapse0x2b6b190();
   input += synapse0x2b6b1d0();
   input += synapse0x2b6b210();
   input += synapse0x2b6aca0();
   input += synapse0x2b6ace0();
   input += synapse0x2b6b360();
   input += synapse0x2b6b3a0();
   input += synapse0x2b6b3e0();
   input += synapse0x2b6b420();
   input += synapse0x2b6b460();
   input += synapse0x2b6b4a0();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b6ab10() {
   double input = input0x2b6ab10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b6b4e0() {
   double input = 0.130893;
   input += synapse0x2b6b820();
   input += synapse0x2b6b860();
   input += synapse0x2b6b8a0();
   input += synapse0x2b6b8e0();
   input += synapse0x2b6b920();
   input += synapse0x2b6b960();
   input += synapse0x2b6b9a0();
   input += synapse0x2b6b9e0();
   input += synapse0x2b6ba20();
   input += synapse0x2b6ba60();
   input += synapse0x2b6baa0();
   input += synapse0x2b6bae0();
   input += synapse0x2b6bb20();
   input += synapse0x2b6bb60();
   input += synapse0x2b6bba0();
   input += synapse0x2b6bbe0();
   input += synapse0x2b6b670();
   input += synapse0x2b6b6b0();
   input += synapse0x2b6bd30();
   input += synapse0x2b6bd70();
   input += synapse0x2b6bdb0();
   input += synapse0x2b6bdf0();
   input += synapse0x2b6be30();
   input += synapse0x2b6be70();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b6b4e0() {
   double input = input0x2b6b4e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b6beb0() {
   double input = -2.72368;
   input += synapse0x2b54920();
   input += synapse0x2b54960();
   input += synapse0x2b549a0();
   input += synapse0x2b549e0();
   input += synapse0x2b54a20();
   input += synapse0x2b54a60();
   input += synapse0x2b54aa0();
   input += synapse0x2b54ae0();
   input += synapse0x2b6c600();
   input += synapse0x2b6c640();
   input += synapse0x2b6c680();
   input += synapse0x2b6c6c0();
   input += synapse0x2b6c700();
   input += synapse0x2b6c740();
   input += synapse0x2b6c780();
   input += synapse0x2b6c7c0();
   input += synapse0x2b6c040();
   input += synapse0x2b6c080();
   input += synapse0x2b6c910();
   input += synapse0x2b6c950();
   input += synapse0x2b6c990();
   input += synapse0x2b6c9d0();
   input += synapse0x2b6ca10();
   input += synapse0x2b6ca50();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b6beb0() {
   double input = input0x2b6beb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b6ca90() {
   double input = -2.04379;
   input += synapse0x2b6cdd0();
   input += synapse0x2b6ce10();
   input += synapse0x2b6ce50();
   input += synapse0x2b6ce90();
   input += synapse0x2b6ced0();
   input += synapse0x2b6cf10();
   input += synapse0x2b6cf50();
   input += synapse0x2b6cf90();
   input += synapse0x2b6cfd0();
   input += synapse0x2b6d010();
   input += synapse0x2b6d050();
   input += synapse0x2b6d090();
   input += synapse0x2b6d0d0();
   input += synapse0x2b6d110();
   input += synapse0x2b6d150();
   input += synapse0x2b6d190();
   input += synapse0x2b6cc20();
   input += synapse0x2b6cc60();
   input += synapse0x2b6d2e0();
   input += synapse0x2b6d320();
   input += synapse0x2b6d360();
   input += synapse0x2b6d3a0();
   input += synapse0x2b6d3e0();
   input += synapse0x2b6d420();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b6ca90() {
   double input = input0x2b6ca90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b6d460() {
   double input = -1.2741;
   input += synapse0x2b6d7a0();
   input += synapse0x2b6d7e0();
   input += synapse0x2b6d820();
   input += synapse0x2b6d860();
   input += synapse0x2b6d8a0();
   input += synapse0x2b6d8e0();
   input += synapse0x2b6d920();
   input += synapse0x2b6d960();
   input += synapse0x2b6d9a0();
   input += synapse0x2b6d9e0();
   input += synapse0x2b6da20();
   input += synapse0x2b6da60();
   input += synapse0x2b6daa0();
   input += synapse0x2b6dae0();
   input += synapse0x2b6db20();
   input += synapse0x2b6db60();
   input += synapse0x2b6d5f0();
   input += synapse0x2b6d630();
   input += synapse0x2b5e160();
   input += synapse0x2b5e1a0();
   input += synapse0x2b5e1e0();
   input += synapse0x2b5e220();
   input += synapse0x2b5e260();
   input += synapse0x2b5e2a0();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b6d460() {
   double input = input0x2b6d460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b5e2e0() {
   double input = 1.10229;
   input += synapse0x2b5e620();
   input += synapse0x2b5e660();
   input += synapse0x2b5e6a0();
   input += synapse0x2b5e6e0();
   input += synapse0x2b5e720();
   input += synapse0x2b5e760();
   input += synapse0x2b5e7a0();
   input += synapse0x2b5e7e0();
   input += synapse0x2b5e820();
   input += synapse0x2b5e860();
   input += synapse0x2b5e8a0();
   input += synapse0x2b5e8e0();
   input += synapse0x2b5e920();
   input += synapse0x2b5e960();
   input += synapse0x2b5e9a0();
   input += synapse0x2b5e9e0();
   input += synapse0x2b5e470();
   input += synapse0x2b5e4b0();
   input += synapse0x2b5eb30();
   input += synapse0x2b5eb70();
   input += synapse0x2b5ebb0();
   input += synapse0x2b5ebf0();
   input += synapse0x2b5ec30();
   input += synapse0x2b5ec70();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b5e2e0() {
   double input = input0x2b5e2e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b5ecb0() {
   double input = -0.307147;
   input += synapse0x2b5eff0();
   input += synapse0x2b5f030();
   input += synapse0x2b5f070();
   input += synapse0x2b5f0b0();
   input += synapse0x2b5f0f0();
   input += synapse0x2b5f130();
   input += synapse0x2b5f170();
   input += synapse0x2b5f1b0();
   input += synapse0x2b5f1f0();
   input += synapse0x2b5f230();
   input += synapse0x2b5f270();
   input += synapse0x2b5f2b0();
   input += synapse0x2b5f2f0();
   input += synapse0x2b5f330();
   input += synapse0x2b5f370();
   input += synapse0x2b5f3b0();
   input += synapse0x2b5ee40();
   input += synapse0x2b5ee80();
   input += synapse0x2b5f500();
   input += synapse0x2b5f540();
   input += synapse0x2b5f580();
   input += synapse0x2b5f5c0();
   input += synapse0x2b5f600();
   input += synapse0x2b5f640();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b5ecb0() {
   double input = input0x2b5ecb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b5f680() {
   double input = 1.80571;
   input += synapse0x2b5f9c0();
   input += synapse0x2b5fa00();
   input += synapse0x2b5fa40();
   input += synapse0x2b5fa80();
   input += synapse0x2b5fac0();
   input += synapse0x2b5fb00();
   input += synapse0x2b5fb40();
   input += synapse0x2b5fb80();
   input += synapse0x2b5fbc0();
   input += synapse0x2b5fc00();
   input += synapse0x2b5fc40();
   input += synapse0x2b5fc80();
   input += synapse0x2b5fcc0();
   input += synapse0x2b5fd00();
   input += synapse0x2b5fd40();
   input += synapse0x2b5fd80();
   input += synapse0x2b5f810();
   input += synapse0x2b5f850();
   input += synapse0x2b5fed0();
   input += synapse0x2b5ff10();
   input += synapse0x2b5ff50();
   input += synapse0x2b5ff90();
   input += synapse0x2b5ffd0();
   input += synapse0x2b60010();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b5f680() {
   double input = input0x2b5f680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b71cc0() {
   double input = 0.272484;
   input += synapse0x2b71ee0();
   input += synapse0x2b71f20();
   input += synapse0x2b71f60();
   input += synapse0x2b71fa0();
   input += synapse0x2b71fe0();
   input += synapse0x2b72020();
   input += synapse0x2b72060();
   input += synapse0x2b720a0();
   input += synapse0x2b720e0();
   input += synapse0x2b72120();
   input += synapse0x2b72160();
   input += synapse0x2b721a0();
   input += synapse0x2b721e0();
   input += synapse0x2b72220();
   input += synapse0x2b72260();
   input += synapse0x2b722a0();
   input += synapse0x2b60050();
   input += synapse0x2b60090();
   input += synapse0x2b723f0();
   input += synapse0x2b72430();
   input += synapse0x2b72470();
   input += synapse0x2b724b0();
   input += synapse0x2b724f0();
   input += synapse0x2b72530();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b71cc0() {
   double input = input0x2b71cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b72570() {
   double input = -0.215973;
   input += synapse0x2b728b0();
   input += synapse0x2b728f0();
   input += synapse0x2b72930();
   input += synapse0x2b72970();
   input += synapse0x2b729b0();
   input += synapse0x2b729f0();
   input += synapse0x2b72a30();
   input += synapse0x2b72a70();
   input += synapse0x2b72ab0();
   input += synapse0x2b72af0();
   input += synapse0x2b72b30();
   input += synapse0x2b72b70();
   input += synapse0x2b72bb0();
   input += synapse0x2b72bf0();
   input += synapse0x2b72c30();
   input += synapse0x2b72c70();
   input += synapse0x2b72700();
   input += synapse0x2b72740();
   input += synapse0x2b72dc0();
   input += synapse0x2b72e00();
   input += synapse0x2b72e40();
   input += synapse0x2b72e80();
   input += synapse0x2b72ec0();
   input += synapse0x2b72f00();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b72570() {
   double input = input0x2b72570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b72f40() {
   double input = -0.815208;
   input += synapse0x2b73280();
   input += synapse0x2b732c0();
   input += synapse0x2b73300();
   input += synapse0x2b73340();
   input += synapse0x2b73380();
   input += synapse0x2b733c0();
   input += synapse0x2b73400();
   input += synapse0x2b73440();
   input += synapse0x2b73480();
   input += synapse0x2b734c0();
   input += synapse0x2b73500();
   input += synapse0x2b73540();
   input += synapse0x2b73580();
   input += synapse0x2b735c0();
   input += synapse0x2b73600();
   input += synapse0x2b73640();
   input += synapse0x2b730d0();
   input += synapse0x2b73110();
   input += synapse0x2b73790();
   input += synapse0x2b737d0();
   input += synapse0x2b73810();
   input += synapse0x2b73850();
   input += synapse0x2b73890();
   input += synapse0x2b738d0();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b72f40() {
   double input = input0x2b72f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b73910() {
   double input = -1.50741;
   input += synapse0x2b73c50();
   input += synapse0x2b73c90();
   input += synapse0x2b73cd0();
   input += synapse0x2b73d10();
   input += synapse0x2b73d50();
   input += synapse0x2b73d90();
   input += synapse0x2b73dd0();
   input += synapse0x2b73e10();
   input += synapse0x2b73e50();
   input += synapse0x2b73e90();
   input += synapse0x2b73ed0();
   input += synapse0x2b73f10();
   input += synapse0x2b73f50();
   input += synapse0x2b73f90();
   input += synapse0x2b73fd0();
   input += synapse0x2b74010();
   input += synapse0x2b73aa0();
   input += synapse0x2b73ae0();
   input += synapse0x2b74160();
   input += synapse0x2b741a0();
   input += synapse0x2b741e0();
   input += synapse0x2b74220();
   input += synapse0x2b74260();
   input += synapse0x2b742a0();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b73910() {
   double input = input0x2b73910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b7ab10() {
   double input = -1.03701;
   input += synapse0x29141b0();
   input += synapse0x29141f0();
   input += synapse0x2b51d50();
   input += synapse0x2b51d90();
   input += synapse0x2b52720();
   input += synapse0x2b52760();
   input += synapse0x2b534f0();
   input += synapse0x2b53530();
   input += synapse0x2b53ec0();
   input += synapse0x2b53f00();
   input += synapse0x2b54890();
   input += synapse0x2b548d0();
   input += synapse0x2b55370();
   input += synapse0x2b553b0();
   input += synapse0x2b55d40();
   input += synapse0x2b55d80();
   input += synapse0x2b52e20();
   input += synapse0x2b52e60();
   input += synapse0x2b578f0();
   input += synapse0x2b57930();
   input += synapse0x2b582c0();
   input += synapse0x2b58300();
   input += synapse0x2b58c90();
   input += synapse0x2b58cd0();
   input += synapse0x2b59660();
   input += synapse0x2b596a0();
   input += synapse0x2b4d800();
   input += synapse0x2b4d840();
   input += synapse0x2b5b750();
   input += synapse0x2b5b790();
   input += synapse0x2b5c120();
   input += synapse0x2b5c160();
   input += synapse0x2b5caf0();
   input += synapse0x2b5cb30();
   input += synapse0x2b5d4c0();
   input += synapse0x2b5d500();
   input += synapse0x2b5de90();
   input += synapse0x2b5ded0();
   input += synapse0x2b569e0();
   input += synapse0x2b56a20();
   input += synapse0x2b60290();
   input += synapse0x2b602d0();
   input += synapse0x2b60c20();
   input += synapse0x2b60c60();
   input += synapse0x2b615f0();
   input += synapse0x2b61630();
   input += synapse0x2b61fc0();
   input += synapse0x2b62000();
   input += synapse0x2b62990();
   input += synapse0x2b629d0();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b7ab10() {
   double input = input0x2b7ab10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b7aeb0() {
   double input = 0.540864;
   input += synapse0x2b650d0();
   input += synapse0x2b65110();
   input += synapse0x2b5a690();
   input += synapse0x2b5a6d0();
   input += synapse0x2b67cb0();
   input += synapse0x2b67cf0();
   input += synapse0x2b68680();
   input += synapse0x2b686c0();
   input += synapse0x2b69050();
   input += synapse0x2b69090();
   input += synapse0x2b69a20();
   input += synapse0x2b69a60();
   input += synapse0x2b6a3f0();
   input += synapse0x2b6a430();
   input += synapse0x2b6adc0();
   input += synapse0x2b6ae00();
   input += synapse0x2b6b790();
   input += synapse0x2b6b7d0();
   input += synapse0x2b6c160();
   input += synapse0x2b6c1a0();
   input += synapse0x2b6cd40();
   input += synapse0x2b6cd80();
   input += synapse0x2b6d710();
   input += synapse0x2b6d750();
   input += synapse0x2b5e590();
   input += synapse0x2b5e5d0();
   input += synapse0x2b5ef60();
   input += synapse0x2b5efa0();
   input += synapse0x2b5f930();
   input += synapse0x2b5f970();
   input += synapse0x2b71e50();
   input += synapse0x2b71e90();
   input += synapse0x2b72820();
   input += synapse0x2b72860();
   input += synapse0x2b731f0();
   input += synapse0x2b73230();
   input += synapse0x2b73bc0();
   input += synapse0x2b73c00();
   input += synapse0x2b4fab0();
   input += synapse0x2b4faf0();
   input += synapse0x2b63360();
   input += synapse0x2b633a0();
   input += synapse0x2b742e0();
   input += synapse0x2b74320();
   input += synapse0x2b74360();
   input += synapse0x2b743a0();
   input += synapse0x2b7b250();
   input += synapse0x2b7b290();
   input += synapse0x2b7b2d0();
   input += synapse0x2b7b310();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b7aeb0() {
   double input = input0x2b7aeb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b7b350() {
   double input = 0.465218;
   input += synapse0x2b7b690();
   input += synapse0x2b7b6d0();
   input += synapse0x2b7b710();
   input += synapse0x2b7b750();
   input += synapse0x2b7b790();
   input += synapse0x2b7b7d0();
   input += synapse0x2b7b810();
   input += synapse0x2b7b850();
   input += synapse0x2b7b890();
   input += synapse0x2b7b8d0();
   input += synapse0x2b7b910();
   input += synapse0x2b7b950();
   input += synapse0x2b7b990();
   input += synapse0x2b7b9d0();
   input += synapse0x2b7ba10();
   input += synapse0x2b7ba50();
   input += synapse0x2b7b4e0();
   input += synapse0x2b7b520();
   input += synapse0x2b7bba0();
   input += synapse0x2b7bbe0();
   input += synapse0x2b7bc20();
   input += synapse0x2b7bc60();
   input += synapse0x2b7bca0();
   input += synapse0x2b7bce0();
   input += synapse0x2b7bd20();
   input += synapse0x2b7bd60();
   input += synapse0x2b7bda0();
   input += synapse0x2b7bde0();
   input += synapse0x2b7be20();
   input += synapse0x2b7be60();
   input += synapse0x2b7bea0();
   input += synapse0x2b7bee0();
   input += synapse0x2b7ba90();
   input += synapse0x2b7bad0();
   input += synapse0x2b7bb10();
   input += synapse0x2b7bb50();
   input += synapse0x2b7c130();
   input += synapse0x2b7c170();
   input += synapse0x2b7c1b0();
   input += synapse0x2b7c1f0();
   input += synapse0x2b7c230();
   input += synapse0x2b7c270();
   input += synapse0x2b7c2b0();
   input += synapse0x2b7c2f0();
   input += synapse0x2b7c330();
   input += synapse0x2b7c370();
   input += synapse0x2b7c3b0();
   input += synapse0x2b7c3f0();
   input += synapse0x2b7c430();
   input += synapse0x2b7c470();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b7b350() {
   double input = input0x2b7b350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b7c4b0() {
   double input = 0.238417;
   input += synapse0x2b7c7f0();
   input += synapse0x2b7c830();
   input += synapse0x2b7c870();
   input += synapse0x2b7c8b0();
   input += synapse0x2b7c8f0();
   input += synapse0x2b7c930();
   input += synapse0x2b7c970();
   input += synapse0x2b7c9b0();
   input += synapse0x2b7c9f0();
   input += synapse0x2b7ca30();
   input += synapse0x2b7ca70();
   input += synapse0x2b7cab0();
   input += synapse0x2b7caf0();
   input += synapse0x2b7cb30();
   input += synapse0x2b7cb70();
   input += synapse0x2b7cbb0();
   input += synapse0x2b7c640();
   input += synapse0x2b7c680();
   input += synapse0x2b7cd00();
   input += synapse0x2b7cd40();
   input += synapse0x2b7cd80();
   input += synapse0x2b7cdc0();
   input += synapse0x2b7ce00();
   input += synapse0x2b7ce40();
   input += synapse0x2b7ce80();
   input += synapse0x2b7cec0();
   input += synapse0x2b7cf00();
   input += synapse0x2b7cf40();
   input += synapse0x2b7cf80();
   input += synapse0x2b7cfc0();
   input += synapse0x2b7d000();
   input += synapse0x2b7d040();
   input += synapse0x2b7cbf0();
   input += synapse0x2b7cc30();
   input += synapse0x2b7cc70();
   input += synapse0x2b7ccb0();
   input += synapse0x2b7d290();
   input += synapse0x2b7d2d0();
   input += synapse0x2b7d310();
   input += synapse0x2b7d350();
   input += synapse0x2b7d390();
   input += synapse0x2b7d3d0();
   input += synapse0x2b7d410();
   input += synapse0x2b7d450();
   input += synapse0x2b7d490();
   input += synapse0x2b7d4d0();
   input += synapse0x2b7d510();
   input += synapse0x2b7d550();
   input += synapse0x2b7d590();
   input += synapse0x2b7d5d0();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b7c4b0() {
   double input = input0x2b7c4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b7d610() {
   double input = 0.718039;
   input += synapse0x2b7d950();
   input += synapse0x2b7d990();
   input += synapse0x2b7d9d0();
   input += synapse0x2b7da10();
   input += synapse0x2b7da50();
   input += synapse0x2b7da90();
   input += synapse0x2b7dad0();
   input += synapse0x2b7db10();
   input += synapse0x2b7db50();
   input += synapse0x2b7db90();
   input += synapse0x2b7dbd0();
   input += synapse0x2b7dc10();
   input += synapse0x2b7dc50();
   input += synapse0x2b7dc90();
   input += synapse0x2b7dcd0();
   input += synapse0x2b7dd10();
   input += synapse0x2b7d7a0();
   input += synapse0x2b7d7e0();
   input += synapse0x2b7de60();
   input += synapse0x2b7dea0();
   input += synapse0x2b7dee0();
   input += synapse0x2b7df20();
   input += synapse0x2b7df60();
   input += synapse0x2b7dfa0();
   input += synapse0x2b7dfe0();
   input += synapse0x2b7e020();
   input += synapse0x2b7e060();
   input += synapse0x2b7e0a0();
   input += synapse0x2b7e0e0();
   input += synapse0x2b7e120();
   input += synapse0x2b7e160();
   input += synapse0x2b7e1a0();
   input += synapse0x2b7dd50();
   input += synapse0x2b7dd90();
   input += synapse0x2b7ddd0();
   input += synapse0x2b7de10();
   input += synapse0x2b7e3f0();
   input += synapse0x2b7e430();
   input += synapse0x2b7e470();
   input += synapse0x2b7e4b0();
   input += synapse0x2b7e4f0();
   input += synapse0x2b7e530();
   input += synapse0x2b7e570();
   input += synapse0x2b7e5b0();
   input += synapse0x2b7e5f0();
   input += synapse0x2b7e630();
   input += synapse0x2b7e670();
   input += synapse0x2b7e6b0();
   input += synapse0x2b7e6f0();
   input += synapse0x2b7e730();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b7d610() {
   double input = input0x2b7d610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_sL::input0x2b7e770() {
   double input = 2.76802;
   input += synapse0x2b7e990();
   input += synapse0x2b7e9d0();
   input += synapse0x2b7ea10();
   input += synapse0x2b7ea50();
   input += synapse0x2b7ea90();
   return input;
}

double NNfunction_ns_chi04_sL::neuron0x2b7e770() {
   double input = input0x2b7e770();
   return (input * 1)+0;
}

double NNfunction_ns_chi04_sL::synapse0x2b4a720() {
   return (neuron0x2b4a860()*0.0167393);
}

double NNfunction_ns_chi04_sL::synapse0x2b4a760() {
   return (neuron0x2b4aba0()*-3.33226);
}

double NNfunction_ns_chi04_sL::synapse0x2b4fb40() {
   return (neuron0x2b4aee0()*0.458097);
}

double NNfunction_ns_chi04_sL::synapse0x2b4fb80() {
   return (neuron0x2b4b220()*0.0176934);
}

double NNfunction_ns_chi04_sL::synapse0x2b4fbc0() {
   return (neuron0x2b4b560()*-0.0197072);
}

double NNfunction_ns_chi04_sL::synapse0x2b4fc00() {
   return (neuron0x2b4b8a0()*0.000573001);
}

double NNfunction_ns_chi04_sL::synapse0x2b4fc40() {
   return (neuron0x2b4bbe0()*0.0114541);
}

double NNfunction_ns_chi04_sL::synapse0x2b4fc80() {
   return (neuron0x2b4bf20()*-0.0172143);
}

double NNfunction_ns_chi04_sL::synapse0x2b4fcc0() {
   return (neuron0x2b4c260()*-0.00708594);
}

double NNfunction_ns_chi04_sL::synapse0x2b4fd00() {
   return (neuron0x2b4c5a0()*0.025123);
}

double NNfunction_ns_chi04_sL::synapse0x2b4fd40() {
   return (neuron0x2b4c8e0()*-0.0097444);
}

double NNfunction_ns_chi04_sL::synapse0x2b4fd80() {
   return (neuron0x2b4cc20()*-0.0245958);
}

double NNfunction_ns_chi04_sL::synapse0x2b4fdc0() {
   return (neuron0x2b4cf60()*0.0525591);
}

double NNfunction_ns_chi04_sL::synapse0x2b4fe00() {
   return (neuron0x2b4d2a0()*0.0036378);
}

double NNfunction_ns_chi04_sL::synapse0x2b4fe40() {
   return (neuron0x2b4d5e0()*-0.0240766);
}

double NNfunction_ns_chi04_sL::synapse0x2b4fe80() {
   return (neuron0x2b4d920()*-0.0190463);
}

double NNfunction_ns_chi04_sL::synapse0x2b4a690() {
   return (neuron0x2b4dc60()*-0.0109531);
}

double NNfunction_ns_chi04_sL::synapse0x2b4a6d0() {
   return (neuron0x2b4e1c0()*0.0111655);
}

double NNfunction_ns_chi04_sL::synapse0x2905a00() {
   return (neuron0x2b4e3e0()*0.00831097);
}

double NNfunction_ns_chi04_sL::synapse0x2905a40() {
   return (neuron0x2b4e720()*0.0365499);
}

double NNfunction_ns_chi04_sL::synapse0x2b500e0() {
   return (neuron0x2b4ea60()*-0.0209102);
}

double NNfunction_ns_chi04_sL::synapse0x2b50120() {
   return (neuron0x2b4eda0()*0.00750935);
}

double NNfunction_ns_chi04_sL::synapse0x2b50160() {
   return (neuron0x2b4f0e0()*0.0145734);
}

double NNfunction_ns_chi04_sL::synapse0x2b501a0() {
   return (neuron0x2b4f420()*3.12947);
}

double NNfunction_ns_chi04_sL::synapse0x2b50520() {
   return (neuron0x2b4a860()*-0.0232218);
}

double NNfunction_ns_chi04_sL::synapse0x2b50560() {
   return (neuron0x2b4aba0()*-8.05525);
}

double NNfunction_ns_chi04_sL::synapse0x2b505a0() {
   return (neuron0x2b4aee0()*-9.64495);
}

double NNfunction_ns_chi04_sL::synapse0x2b505e0() {
   return (neuron0x2b4b220()*0.0309214);
}

double NNfunction_ns_chi04_sL::synapse0x2b50620() {
   return (neuron0x2b4b560()*-0.0234921);
}

double NNfunction_ns_chi04_sL::synapse0x2b50660() {
   return (neuron0x2b4b8a0()*-0.0345119);
}

double NNfunction_ns_chi04_sL::synapse0x2b506a0() {
   return (neuron0x2b4bbe0()*0.0130117);
}

double NNfunction_ns_chi04_sL::synapse0x2b506e0() {
   return (neuron0x2b4bf20()*-0.00725581);
}

double NNfunction_ns_chi04_sL::synapse0x2b50720() {
   return (neuron0x2b4c260()*0.00794034);
}

double NNfunction_ns_chi04_sL::synapse0x2b4ffd0() {
   return (neuron0x2b4c5a0()*0.0639385);
}

double NNfunction_ns_chi04_sL::synapse0x2b50010() {
   return (neuron0x2b4c8e0()*0.0641846);
}

double NNfunction_ns_chi04_sL::synapse0x2b50050() {
   return (neuron0x2b4cc20()*-0.0534482);
}

double NNfunction_ns_chi04_sL::synapse0x2b50090() {
   return (neuron0x2b4cf60()*-0.107229);
}

double NNfunction_ns_chi04_sL::synapse0x2b50970() {
   return (neuron0x2b4d2a0()*-0.0891326);
}

double NNfunction_ns_chi04_sL::synapse0x2b509b0() {
   return (neuron0x2b4d5e0()*0.0476894);
}

double NNfunction_ns_chi04_sL::synapse0x2b509f0() {
   return (neuron0x2b4d920()*0.0249281);
}

double NNfunction_ns_chi04_sL::synapse0x2b50370() {
   return (neuron0x2b4dc60()*0.0194146);
}

double NNfunction_ns_chi04_sL::synapse0x2b503b0() {
   return (neuron0x2b4e1c0()*0.0334441);
}

double NNfunction_ns_chi04_sL::synapse0x2b50b40() {
   return (neuron0x2b4e3e0()*0.0412282);
}

double NNfunction_ns_chi04_sL::synapse0x2b50b80() {
   return (neuron0x2b4e720()*-0.00749611);
}

double NNfunction_ns_chi04_sL::synapse0x2b50bc0() {
   return (neuron0x2b4ea60()*-0.00499729);
}

double NNfunction_ns_chi04_sL::synapse0x2b50c00() {
   return (neuron0x2b4eda0()*0.00348992);
}

double NNfunction_ns_chi04_sL::synapse0x2b50c40() {
   return (neuron0x2b4f0e0()*-0.0352016);
}

double NNfunction_ns_chi04_sL::synapse0x2b50c80() {
   return (neuron0x2b4f420()*-0.070737);
}

double NNfunction_ns_chi04_sL::synapse0x2b51000() {
   return (neuron0x2b4a860()*0.030237);
}

double NNfunction_ns_chi04_sL::synapse0x2b51040() {
   return (neuron0x2b4aba0()*0.991185);
}

double NNfunction_ns_chi04_sL::synapse0x2b51080() {
   return (neuron0x2b4aee0()*0.772543);
}

double NNfunction_ns_chi04_sL::synapse0x2b510c0() {
   return (neuron0x2b4b220()*-0.0396723);
}

double NNfunction_ns_chi04_sL::synapse0x2b51100() {
   return (neuron0x2b4b560()*0.0124201);
}

double NNfunction_ns_chi04_sL::synapse0x2b51140() {
   return (neuron0x2b4b8a0()*-0.0380727);
}

double NNfunction_ns_chi04_sL::synapse0x2b51180() {
   return (neuron0x2b4bbe0()*0.0085823);
}

double NNfunction_ns_chi04_sL::synapse0x2b511c0() {
   return (neuron0x2b4bf20()*0.0168722);
}

double NNfunction_ns_chi04_sL::synapse0x2b51200() {
   return (neuron0x2b4c260()*-0.0291847);
}

double NNfunction_ns_chi04_sL::synapse0x2b51240() {
   return (neuron0x2b4c5a0()*-0.00677361);
}

double NNfunction_ns_chi04_sL::synapse0x2b51280() {
   return (neuron0x2b4c8e0()*-0.0199728);
}

double NNfunction_ns_chi04_sL::synapse0x2b512c0() {
   return (neuron0x2b4cc20()*-0.0186734);
}

double NNfunction_ns_chi04_sL::synapse0x2b51300() {
   return (neuron0x2b4cf60()*0.194275);
}

double NNfunction_ns_chi04_sL::synapse0x2b51340() {
   return (neuron0x2b4d2a0()*-0.0453905);
}

double NNfunction_ns_chi04_sL::synapse0x2b51380() {
   return (neuron0x2b4d5e0()*0.00629271);
}

double NNfunction_ns_chi04_sL::synapse0x2b513c0() {
   return (neuron0x2b4d920()*-0.0103182);
}

double NNfunction_ns_chi04_sL::synapse0x2b50e50() {
   return (neuron0x2b4dc60()*-0.0810414);
}

double NNfunction_ns_chi04_sL::synapse0x2b50e90() {
   return (neuron0x2b4e1c0()*-0.0111058);
}

double NNfunction_ns_chi04_sL::synapse0x29060f0() {
   return (neuron0x2b4e3e0()*0.0151715);
}

double NNfunction_ns_chi04_sL::synapse0x29139c0() {
   return (neuron0x2b4e720()*-0.0329888);
}

double NNfunction_ns_chi04_sL::synapse0x2913a00() {
   return (neuron0x2b4ea60()*0.0068235);
}

double NNfunction_ns_chi04_sL::synapse0x2b398f0() {
   return (neuron0x2b4eda0()*-0.0114605);
}

double NNfunction_ns_chi04_sL::synapse0x2b39930() {
   return (neuron0x2b4f0e0()*-0.00962136);
}

double NNfunction_ns_chi04_sL::synapse0x2b39970() {
   return (neuron0x2b4f420()*-0.857669);
}

double NNfunction_ns_chi04_sL::synapse0x2914240() {
   return (neuron0x2b4a860()*0.0490134);
}

double NNfunction_ns_chi04_sL::synapse0x2b508f0() {
   return (neuron0x2b4aba0()*-0.121651);
}

double NNfunction_ns_chi04_sL::synapse0x2b50930() {
   return (neuron0x2b4aee0()*-0.910754);
}

double NNfunction_ns_chi04_sL::synapse0x2b51510() {
   return (neuron0x2b4b220()*0.0516655);
}

double NNfunction_ns_chi04_sL::synapse0x2b51550() {
   return (neuron0x2b4b560()*-0.0396757);
}

double NNfunction_ns_chi04_sL::synapse0x2b51590() {
   return (neuron0x2b4b8a0()*-0.112575);
}

double NNfunction_ns_chi04_sL::synapse0x2b515d0() {
   return (neuron0x2b4bbe0()*-0.0341955);
}

double NNfunction_ns_chi04_sL::synapse0x2b51610() {
   return (neuron0x2b4bf20()*-0.0577108);
}

double NNfunction_ns_chi04_sL::synapse0x2b51650() {
   return (neuron0x2b4c260()*0.0214862);
}

double NNfunction_ns_chi04_sL::synapse0x2b51690() {
   return (neuron0x2b4c5a0()*0.011669);
}

double NNfunction_ns_chi04_sL::synapse0x2b516d0() {
   return (neuron0x2b4c8e0()*-0.0321498);
}

double NNfunction_ns_chi04_sL::synapse0x2b51710() {
   return (neuron0x2b4cc20()*0.135918);
}

double NNfunction_ns_chi04_sL::synapse0x2b51750() {
   return (neuron0x2b4cf60()*0.0570164);
}

double NNfunction_ns_chi04_sL::synapse0x2b51790() {
   return (neuron0x2b4d2a0()*-0.260323);
}

double NNfunction_ns_chi04_sL::synapse0x2b517d0() {
   return (neuron0x2b4d5e0()*0.2897);
}

double NNfunction_ns_chi04_sL::synapse0x2b51810() {
   return (neuron0x2b4d920()*0.27246);
}

double NNfunction_ns_chi04_sL::synapse0x2b4a7a0() {
   return (neuron0x2b4dc60()*-0.346191);
}

double NNfunction_ns_chi04_sL::synapse0x2b4a7e0() {
   return (neuron0x2b4e1c0()*0.00922546);
}

double NNfunction_ns_chi04_sL::synapse0x2b4a820() {
   return (neuron0x2b4e3e0()*0.0686265);
}

double NNfunction_ns_chi04_sL::synapse0x2b51960() {
   return (neuron0x2b4e720()*0.0652391);
}

double NNfunction_ns_chi04_sL::synapse0x2b519a0() {
   return (neuron0x2b4ea60()*-0.0356623);
}

double NNfunction_ns_chi04_sL::synapse0x2b519e0() {
   return (neuron0x2b4eda0()*0.0111839);
}

double NNfunction_ns_chi04_sL::synapse0x2b51a20() {
   return (neuron0x2b4f0e0()*0.0170618);
}

double NNfunction_ns_chi04_sL::synapse0x2b51a60() {
   return (neuron0x2b4f420()*0.036576);
}

double NNfunction_ns_chi04_sL::synapse0x2b51de0() {
   return (neuron0x2b4a860()*0.00725976);
}

double NNfunction_ns_chi04_sL::synapse0x2b51e20() {
   return (neuron0x2b4aba0()*0.00492946);
}

double NNfunction_ns_chi04_sL::synapse0x2b51e60() {
   return (neuron0x2b4aee0()*-0.00736642);
}

double NNfunction_ns_chi04_sL::synapse0x2b51ea0() {
   return (neuron0x2b4b220()*-3.29222);
}

double NNfunction_ns_chi04_sL::synapse0x2b51ee0() {
   return (neuron0x2b4b560()*0.0115018);
}

double NNfunction_ns_chi04_sL::synapse0x2b51f20() {
   return (neuron0x2b4b8a0()*0.00385321);
}

double NNfunction_ns_chi04_sL::synapse0x2b51f60() {
   return (neuron0x2b4bbe0()*-0.00126325);
}

double NNfunction_ns_chi04_sL::synapse0x2b51fa0() {
   return (neuron0x2b4bf20()*0.0147082);
}

double NNfunction_ns_chi04_sL::synapse0x2b51fe0() {
   return (neuron0x2b4c260()*-0.00206155);
}

double NNfunction_ns_chi04_sL::synapse0x2b52020() {
   return (neuron0x2b4c5a0()*-0.00318239);
}

double NNfunction_ns_chi04_sL::synapse0x2b52060() {
   return (neuron0x2b4c8e0()*-0.00125329);
}

double NNfunction_ns_chi04_sL::synapse0x2b520a0() {
   return (neuron0x2b4cc20()*-0.0128398);
}

double NNfunction_ns_chi04_sL::synapse0x2b520e0() {
   return (neuron0x2b4cf60()*0.0967053);
}

double NNfunction_ns_chi04_sL::synapse0x2b52120() {
   return (neuron0x2b4d2a0()*0.00377333);
}

double NNfunction_ns_chi04_sL::synapse0x2b52160() {
   return (neuron0x2b4d5e0()*-0.00403234);
}

double NNfunction_ns_chi04_sL::synapse0x2b521a0() {
   return (neuron0x2b4d920()*-0.00590438);
}

double NNfunction_ns_chi04_sL::synapse0x2b51c30() {
   return (neuron0x2b4dc60()*0.0115796);
}

double NNfunction_ns_chi04_sL::synapse0x2b51c70() {
   return (neuron0x2b4e1c0()*-0.00243441);
}

double NNfunction_ns_chi04_sL::synapse0x2b522f0() {
   return (neuron0x2b4e3e0()*0.00370004);
}

double NNfunction_ns_chi04_sL::synapse0x2b52330() {
   return (neuron0x2b4e720()*-0.00500906);
}

double NNfunction_ns_chi04_sL::synapse0x2b52370() {
   return (neuron0x2b4ea60()*0.0056909);
}

double NNfunction_ns_chi04_sL::synapse0x2b523b0() {
   return (neuron0x2b4eda0()*0.00603775);
}

double NNfunction_ns_chi04_sL::synapse0x2b523f0() {
   return (neuron0x2b4f0e0()*0.0111222);
}

double NNfunction_ns_chi04_sL::synapse0x2b52430() {
   return (neuron0x2b4f420()*0.0097534);
}

double NNfunction_ns_chi04_sL::synapse0x2b527b0() {
   return (neuron0x2b4a860()*0.0166019);
}

double NNfunction_ns_chi04_sL::synapse0x2b527f0() {
   return (neuron0x2b4aba0()*-0.00545844);
}

double NNfunction_ns_chi04_sL::synapse0x2b52830() {
   return (neuron0x2b4aee0()*-0.0728381);
}

double NNfunction_ns_chi04_sL::synapse0x2b52870() {
   return (neuron0x2b4b220()*-0.0319117);
}

double NNfunction_ns_chi04_sL::synapse0x2b528b0() {
   return (neuron0x2b4b560()*-0.0165573);
}

double NNfunction_ns_chi04_sL::synapse0x2b528f0() {
   return (neuron0x2b4b8a0()*-0.0136379);
}

double NNfunction_ns_chi04_sL::synapse0x2b52930() {
   return (neuron0x2b4bbe0()*-0.0251262);
}

double NNfunction_ns_chi04_sL::synapse0x2b52970() {
   return (neuron0x2b4bf20()*-0.00855602);
}

double NNfunction_ns_chi04_sL::synapse0x2b529b0() {
   return (neuron0x2b4c260()*-0.0216176);
}

double NNfunction_ns_chi04_sL::synapse0x2913d10() {
   return (neuron0x2b4c5a0()*0.00795214);
}

double NNfunction_ns_chi04_sL::synapse0x2913d50() {
   return (neuron0x2b4c8e0()*-0.00990596);
}

double NNfunction_ns_chi04_sL::synapse0x2913d90() {
   return (neuron0x2b4cc20()*0.014234);
}

double NNfunction_ns_chi04_sL::synapse0x2913dd0() {
   return (neuron0x2b4cf60()*2.11942);
}

double NNfunction_ns_chi04_sL::synapse0x2913e10() {
   return (neuron0x2b4d2a0()*-4.53944e-06);
}

double NNfunction_ns_chi04_sL::synapse0x2913e50() {
   return (neuron0x2b4d5e0()*-0.00226917);
}

double NNfunction_ns_chi04_sL::synapse0x2913e90() {
   return (neuron0x2b4d920()*-0.00859021);
}

double NNfunction_ns_chi04_sL::synapse0x2b52600() {
   return (neuron0x2b4dc60()*-0.00655283);
}

double NNfunction_ns_chi04_sL::synapse0x2b52640() {
   return (neuron0x2b4e1c0()*0.0137665);
}

double NNfunction_ns_chi04_sL::synapse0x2913fe0() {
   return (neuron0x2b4e3e0()*0.0129601);
}

double NNfunction_ns_chi04_sL::synapse0x2914020() {
   return (neuron0x2b4e720()*0.0180344);
}

double NNfunction_ns_chi04_sL::synapse0x2914060() {
   return (neuron0x2b4ea60()*-0.0125966);
}

double NNfunction_ns_chi04_sL::synapse0x29140a0() {
   return (neuron0x2b4eda0()*-0.00275843);
}

double NNfunction_ns_chi04_sL::synapse0x29140e0() {
   return (neuron0x2b4f0e0()*0.0136838);
}

double NNfunction_ns_chi04_sL::synapse0x2b53200() {
   return (neuron0x2b4f420()*0.0339998);
}

double NNfunction_ns_chi04_sL::synapse0x2b53580() {
   return (neuron0x2b4a860()*0.00640958);
}

double NNfunction_ns_chi04_sL::synapse0x2b535c0() {
   return (neuron0x2b4aba0()*0.00357808);
}

double NNfunction_ns_chi04_sL::synapse0x2b53600() {
   return (neuron0x2b4aee0()*0.0136372);
}

double NNfunction_ns_chi04_sL::synapse0x2b53640() {
   return (neuron0x2b4b220()*-3.46085);
}

double NNfunction_ns_chi04_sL::synapse0x2b53680() {
   return (neuron0x2b4b560()*0.0110374);
}

double NNfunction_ns_chi04_sL::synapse0x2b536c0() {
   return (neuron0x2b4b8a0()*0.0083826);
}

double NNfunction_ns_chi04_sL::synapse0x2b53700() {
   return (neuron0x2b4bbe0()*-0.00452489);
}

double NNfunction_ns_chi04_sL::synapse0x2b53740() {
   return (neuron0x2b4bf20()*0.0149979);
}

double NNfunction_ns_chi04_sL::synapse0x2b53780() {
   return (neuron0x2b4c260()*-0.0104747);
}

double NNfunction_ns_chi04_sL::synapse0x2b537c0() {
   return (neuron0x2b4c5a0()*-0.00807655);
}

double NNfunction_ns_chi04_sL::synapse0x2b53800() {
   return (neuron0x2b4c8e0()*-0.0051932);
}

double NNfunction_ns_chi04_sL::synapse0x2b53840() {
   return (neuron0x2b4cc20()*-0.00500756);
}

double NNfunction_ns_chi04_sL::synapse0x2b53880() {
   return (neuron0x2b4cf60()*-0.170177);
}

double NNfunction_ns_chi04_sL::synapse0x2b538c0() {
   return (neuron0x2b4d2a0()*-0.0147303);
}

double NNfunction_ns_chi04_sL::synapse0x2b53900() {
   return (neuron0x2b4d5e0()*-0.00659368);
}

double NNfunction_ns_chi04_sL::synapse0x2b53940() {
   return (neuron0x2b4d920()*-0.00185709);
}

double NNfunction_ns_chi04_sL::synapse0x2b533d0() {
   return (neuron0x2b4dc60()*-0.00382058);
}

double NNfunction_ns_chi04_sL::synapse0x2b53410() {
   return (neuron0x2b4e1c0()*0.00232353);
}

double NNfunction_ns_chi04_sL::synapse0x2b53a90() {
   return (neuron0x2b4e3e0()*0.0112073);
}

double NNfunction_ns_chi04_sL::synapse0x2b53ad0() {
   return (neuron0x2b4e720()*-0.00463381);
}

double NNfunction_ns_chi04_sL::synapse0x2b53b10() {
   return (neuron0x2b4ea60()*0.00594685);
}

double NNfunction_ns_chi04_sL::synapse0x2b53b50() {
   return (neuron0x2b4eda0()*0.00832893);
}

double NNfunction_ns_chi04_sL::synapse0x2b53b90() {
   return (neuron0x2b4f0e0()*0.0163241);
}

double NNfunction_ns_chi04_sL::synapse0x2b53bd0() {
   return (neuron0x2b4f420()*0.0134523);
}

double NNfunction_ns_chi04_sL::synapse0x2b53f50() {
   return (neuron0x2b4a860()*-0.07909);
}

double NNfunction_ns_chi04_sL::synapse0x2b53f90() {
   return (neuron0x2b4aba0()*-0.745284);
}

double NNfunction_ns_chi04_sL::synapse0x2b53fd0() {
   return (neuron0x2b4aee0()*-0.291337);
}

double NNfunction_ns_chi04_sL::synapse0x2b54010() {
   return (neuron0x2b4b220()*-0.345225);
}

double NNfunction_ns_chi04_sL::synapse0x2b54050() {
   return (neuron0x2b4b560()*0.434996);
}

double NNfunction_ns_chi04_sL::synapse0x2b54090() {
   return (neuron0x2b4b8a0()*0.119684);
}

double NNfunction_ns_chi04_sL::synapse0x2b540d0() {
   return (neuron0x2b4bbe0()*0.412643);
}

double NNfunction_ns_chi04_sL::synapse0x2b54110() {
   return (neuron0x2b4bf20()*0.711832);
}

double NNfunction_ns_chi04_sL::synapse0x2b54150() {
   return (neuron0x2b4c260()*-0.0809937);
}

double NNfunction_ns_chi04_sL::synapse0x2b54190() {
   return (neuron0x2b4c5a0()*0.616251);
}

double NNfunction_ns_chi04_sL::synapse0x2b541d0() {
   return (neuron0x2b4c8e0()*-0.324198);
}

double NNfunction_ns_chi04_sL::synapse0x2b54210() {
   return (neuron0x2b4cc20()*0.161683);
}

double NNfunction_ns_chi04_sL::synapse0x2b54250() {
   return (neuron0x2b4cf60()*0.447257);
}

double NNfunction_ns_chi04_sL::synapse0x2b54290() {
   return (neuron0x2b4d2a0()*-0.359164);
}

double NNfunction_ns_chi04_sL::synapse0x2b542d0() {
   return (neuron0x2b4d5e0()*-0.199965);
}

double NNfunction_ns_chi04_sL::synapse0x2b54310() {
   return (neuron0x2b4d920()*0.223216);
}

double NNfunction_ns_chi04_sL::synapse0x2b53da0() {
   return (neuron0x2b4dc60()*0.212167);
}

double NNfunction_ns_chi04_sL::synapse0x2b53de0() {
   return (neuron0x2b4e1c0()*-0.482447);
}

double NNfunction_ns_chi04_sL::synapse0x2b54460() {
   return (neuron0x2b4e3e0()*0.154585);
}

double NNfunction_ns_chi04_sL::synapse0x2b544a0() {
   return (neuron0x2b4e720()*-0.346821);
}

double NNfunction_ns_chi04_sL::synapse0x2b544e0() {
   return (neuron0x2b4ea60()*0.300437);
}

double NNfunction_ns_chi04_sL::synapse0x2b54520() {
   return (neuron0x2b4eda0()*-0.128802);
}

double NNfunction_ns_chi04_sL::synapse0x2b54560() {
   return (neuron0x2b4f0e0()*0.0696159);
}

double NNfunction_ns_chi04_sL::synapse0x2b545a0() {
   return (neuron0x2b4f420()*-0.869854);
}

double NNfunction_ns_chi04_sL::synapse0x2b4e0b0() {
   return (neuron0x2b4a860()*0.236721);
}

double NNfunction_ns_chi04_sL::synapse0x2b4e0f0() {
   return (neuron0x2b4aba0()*0.161967);
}

double NNfunction_ns_chi04_sL::synapse0x2b4e130() {
   return (neuron0x2b4aee0()*-2.04795);
}

double NNfunction_ns_chi04_sL::synapse0x2b4e170() {
   return (neuron0x2b4b220()*-0.319042);
}

double NNfunction_ns_chi04_sL::synapse0x2b54b30() {
   return (neuron0x2b4b560()*-0.0989847);
}

double NNfunction_ns_chi04_sL::synapse0x2b54b70() {
   return (neuron0x2b4b8a0()*-0.0222378);
}

double NNfunction_ns_chi04_sL::synapse0x2b54bb0() {
   return (neuron0x2b4bbe0()*0.106159);
}

double NNfunction_ns_chi04_sL::synapse0x2b54bf0() {
   return (neuron0x2b4bf20()*-0.070254);
}

double NNfunction_ns_chi04_sL::synapse0x2b54c30() {
   return (neuron0x2b4c260()*0.0387172);
}

double NNfunction_ns_chi04_sL::synapse0x2b54c70() {
   return (neuron0x2b4c5a0()*0.0266526);
}

double NNfunction_ns_chi04_sL::synapse0x2b54cb0() {
   return (neuron0x2b4c8e0()*0.106346);
}

double NNfunction_ns_chi04_sL::synapse0x2b54cf0() {
   return (neuron0x2b4cc20()*-0.152562);
}

double NNfunction_ns_chi04_sL::synapse0x2b54d30() {
   return (neuron0x2b4cf60()*-0.20884);
}

double NNfunction_ns_chi04_sL::synapse0x2b54d70() {
   return (neuron0x2b4d2a0()*-0.061118);
}

double NNfunction_ns_chi04_sL::synapse0x2b54db0() {
   return (neuron0x2b4d5e0()*-0.148744);
}

double NNfunction_ns_chi04_sL::synapse0x2b54df0() {
   return (neuron0x2b4d920()*0.0900063);
}

double NNfunction_ns_chi04_sL::synapse0x2b54770() {
   return (neuron0x2b4dc60()*0.0130681);
}

double NNfunction_ns_chi04_sL::synapse0x2b547b0() {
   return (neuron0x2b4e1c0()*0.180962);
}

double NNfunction_ns_chi04_sL::synapse0x2b54f40() {
   return (neuron0x2b4e3e0()*0.0808589);
}

double NNfunction_ns_chi04_sL::synapse0x2b54f80() {
   return (neuron0x2b4e720()*0.0662625);
}

double NNfunction_ns_chi04_sL::synapse0x2b54fc0() {
   return (neuron0x2b4ea60()*0.0242193);
}

double NNfunction_ns_chi04_sL::synapse0x2b55000() {
   return (neuron0x2b4eda0()*0.0330177);
}

double NNfunction_ns_chi04_sL::synapse0x2b55040() {
   return (neuron0x2b4f0e0()*0.0659864);
}

double NNfunction_ns_chi04_sL::synapse0x2b55080() {
   return (neuron0x2b4f420()*-0.750464);
}

double NNfunction_ns_chi04_sL::synapse0x2b55400() {
   return (neuron0x2b4a860()*-0.549216);
}

double NNfunction_ns_chi04_sL::synapse0x2b55440() {
   return (neuron0x2b4aba0()*0.900976);
}

double NNfunction_ns_chi04_sL::synapse0x2b55480() {
   return (neuron0x2b4aee0()*-0.760104);
}

double NNfunction_ns_chi04_sL::synapse0x2b554c0() {
   return (neuron0x2b4b220()*-0.508026);
}

double NNfunction_ns_chi04_sL::synapse0x2b55500() {
   return (neuron0x2b4b560()*-0.0364522);
}

double NNfunction_ns_chi04_sL::synapse0x2b55540() {
   return (neuron0x2b4b8a0()*0.00899948);
}

double NNfunction_ns_chi04_sL::synapse0x2b55580() {
   return (neuron0x2b4bbe0()*-0.511841);
}

double NNfunction_ns_chi04_sL::synapse0x2b555c0() {
   return (neuron0x2b4bf20()*0.211981);
}

double NNfunction_ns_chi04_sL::synapse0x2b55600() {
   return (neuron0x2b4c260()*-0.0269388);
}

double NNfunction_ns_chi04_sL::synapse0x2b55640() {
   return (neuron0x2b4c5a0()*0.463484);
}

double NNfunction_ns_chi04_sL::synapse0x2b55680() {
   return (neuron0x2b4c8e0()*0.157004);
}

double NNfunction_ns_chi04_sL::synapse0x2b556c0() {
   return (neuron0x2b4cc20()*-0.371128);
}

double NNfunction_ns_chi04_sL::synapse0x2b55700() {
   return (neuron0x2b4cf60()*0.950267);
}

double NNfunction_ns_chi04_sL::synapse0x2b55740() {
   return (neuron0x2b4d2a0()*-0.115021);
}

double NNfunction_ns_chi04_sL::synapse0x2b55780() {
   return (neuron0x2b4d5e0()*-0.197619);
}

double NNfunction_ns_chi04_sL::synapse0x2b557c0() {
   return (neuron0x2b4d920()*0.0732793);
}

double NNfunction_ns_chi04_sL::synapse0x2b55250() {
   return (neuron0x2b4dc60()*-0.184615);
}

double NNfunction_ns_chi04_sL::synapse0x2b55290() {
   return (neuron0x2b4e1c0()*-0.498343);
}

double NNfunction_ns_chi04_sL::synapse0x2b55910() {
   return (neuron0x2b4e3e0()*-0.0963873);
}

double NNfunction_ns_chi04_sL::synapse0x2b55950() {
   return (neuron0x2b4e720()*0.190027);
}

double NNfunction_ns_chi04_sL::synapse0x2b55990() {
   return (neuron0x2b4ea60()*-0.0372442);
}

double NNfunction_ns_chi04_sL::synapse0x2b559d0() {
   return (neuron0x2b4eda0()*-0.163751);
}

double NNfunction_ns_chi04_sL::synapse0x2b55a10() {
   return (neuron0x2b4f0e0()*-0.392874);
}

double NNfunction_ns_chi04_sL::synapse0x2b55a50() {
   return (neuron0x2b4f420()*1.90809);
}

double NNfunction_ns_chi04_sL::synapse0x2b55dd0() {
   return (neuron0x2b4a860()*-2.58199);
}

double NNfunction_ns_chi04_sL::synapse0x2b55e10() {
   return (neuron0x2b4aba0()*-1.07644);
}

double NNfunction_ns_chi04_sL::synapse0x2b55e50() {
   return (neuron0x2b4aee0()*-0.224873);
}

double NNfunction_ns_chi04_sL::synapse0x2b55e90() {
   return (neuron0x2b4b220()*-0.232318);
}

double NNfunction_ns_chi04_sL::synapse0x2b55ed0() {
   return (neuron0x2b4b560()*0.111322);
}

double NNfunction_ns_chi04_sL::synapse0x2b55f10() {
   return (neuron0x2b4b8a0()*0.11708);
}

double NNfunction_ns_chi04_sL::synapse0x2b55f50() {
   return (neuron0x2b4bbe0()*0.325747);
}

double NNfunction_ns_chi04_sL::synapse0x2b55f90() {
   return (neuron0x2b4bf20()*-0.120247);
}

double NNfunction_ns_chi04_sL::synapse0x2b55fd0() {
   return (neuron0x2b4c260()*0.155803);
}

double NNfunction_ns_chi04_sL::synapse0x2b56010() {
   return (neuron0x2b4c5a0()*0.021382);
}

double NNfunction_ns_chi04_sL::synapse0x2b56050() {
   return (neuron0x2b4c8e0()*0.210237);
}

double NNfunction_ns_chi04_sL::synapse0x2b56090() {
   return (neuron0x2b4cc20()*0.208803);
}

double NNfunction_ns_chi04_sL::synapse0x2b560d0() {
   return (neuron0x2b4cf60()*-0.198567);
}

double NNfunction_ns_chi04_sL::synapse0x2b56110() {
   return (neuron0x2b4d2a0()*-0.127649);
}

double NNfunction_ns_chi04_sL::synapse0x2b56150() {
   return (neuron0x2b4d5e0()*0.0661115);
}

double NNfunction_ns_chi04_sL::synapse0x2b56190() {
   return (neuron0x2b4d920()*-0.168168);
}

double NNfunction_ns_chi04_sL::synapse0x2b55c20() {
   return (neuron0x2b4dc60()*-0.226458);
}

double NNfunction_ns_chi04_sL::synapse0x2b55c60() {
   return (neuron0x2b4e1c0()*-0.134448);
}

double NNfunction_ns_chi04_sL::synapse0x2b529f0() {
   return (neuron0x2b4e3e0()*-0.353509);
}

double NNfunction_ns_chi04_sL::synapse0x2b52a30() {
   return (neuron0x2b4e720()*-0.0544639);
}

double NNfunction_ns_chi04_sL::synapse0x2b52a70() {
   return (neuron0x2b4ea60()*-0.0046629);
}

double NNfunction_ns_chi04_sL::synapse0x2b52ab0() {
   return (neuron0x2b4eda0()*-0.204222);
}

double NNfunction_ns_chi04_sL::synapse0x2b52af0() {
   return (neuron0x2b4f0e0()*0.137061);
}

double NNfunction_ns_chi04_sL::synapse0x2b52b30() {
   return (neuron0x2b4f420()*1.20097);
}

double NNfunction_ns_chi04_sL::synapse0x2b52eb0() {
   return (neuron0x2b4a860()*-1.58754);
}

double NNfunction_ns_chi04_sL::synapse0x2b52ef0() {
   return (neuron0x2b4aba0()*-0.414678);
}

double NNfunction_ns_chi04_sL::synapse0x2b52f30() {
   return (neuron0x2b4aee0()*0.750013);
}

double NNfunction_ns_chi04_sL::synapse0x2b52f70() {
   return (neuron0x2b4b220()*0.410241);
}

double NNfunction_ns_chi04_sL::synapse0x2b52fb0() {
   return (neuron0x2b4b560()*0.183033);
}

double NNfunction_ns_chi04_sL::synapse0x2b52ff0() {
   return (neuron0x2b4b8a0()*0.429972);
}

double NNfunction_ns_chi04_sL::synapse0x2b53030() {
   return (neuron0x2b4bbe0()*0.572131);
}

double NNfunction_ns_chi04_sL::synapse0x2b53070() {
   return (neuron0x2b4bf20()*0.592008);
}

double NNfunction_ns_chi04_sL::synapse0x2b530b0() {
   return (neuron0x2b4c260()*0.0934479);
}

double NNfunction_ns_chi04_sL::synapse0x2b530f0() {
   return (neuron0x2b4c5a0()*-0.0570902);
}

double NNfunction_ns_chi04_sL::synapse0x2b53130() {
   return (neuron0x2b4c8e0()*0.0936816);
}

double NNfunction_ns_chi04_sL::synapse0x2b53170() {
   return (neuron0x2b4cc20()*-0.0280885);
}

double NNfunction_ns_chi04_sL::synapse0x2b531b0() {
   return (neuron0x2b4cf60()*-1.50791);
}

double NNfunction_ns_chi04_sL::synapse0x2b572f0() {
   return (neuron0x2b4d2a0()*0.0180482);
}

double NNfunction_ns_chi04_sL::synapse0x2b57330() {
   return (neuron0x2b4d5e0()*-0.501551);
}

double NNfunction_ns_chi04_sL::synapse0x2b57370() {
   return (neuron0x2b4d920()*0.182332);
}

double NNfunction_ns_chi04_sL::synapse0x2b52d00() {
   return (neuron0x2b4dc60()*-0.499348);
}

double NNfunction_ns_chi04_sL::synapse0x2b52d40() {
   return (neuron0x2b4e1c0()*-0.126144);
}

double NNfunction_ns_chi04_sL::synapse0x2b574c0() {
   return (neuron0x2b4e3e0()*0.175581);
}

double NNfunction_ns_chi04_sL::synapse0x2b57500() {
   return (neuron0x2b4e720()*-0.0338711);
}

double NNfunction_ns_chi04_sL::synapse0x2b57540() {
   return (neuron0x2b4ea60()*-0.163847);
}

double NNfunction_ns_chi04_sL::synapse0x2b57580() {
   return (neuron0x2b4eda0()*-0.0134566);
}

double NNfunction_ns_chi04_sL::synapse0x2b575c0() {
   return (neuron0x2b4f0e0()*0.422246);
}

double NNfunction_ns_chi04_sL::synapse0x2b57600() {
   return (neuron0x2b4f420()*-0.0424159);
}

double NNfunction_ns_chi04_sL::synapse0x2b57980() {
   return (neuron0x2b4a860()*-0.95562);
}

double NNfunction_ns_chi04_sL::synapse0x2b579c0() {
   return (neuron0x2b4aba0()*-0.112957);
}

double NNfunction_ns_chi04_sL::synapse0x2b57a00() {
   return (neuron0x2b4aee0()*0.51017);
}

double NNfunction_ns_chi04_sL::synapse0x2b57a40() {
   return (neuron0x2b4b220()*0.500041);
}

double NNfunction_ns_chi04_sL::synapse0x2b57a80() {
   return (neuron0x2b4b560()*-0.190359);
}

double NNfunction_ns_chi04_sL::synapse0x2b57ac0() {
   return (neuron0x2b4b8a0()*0.0979212);
}

double NNfunction_ns_chi04_sL::synapse0x2b57b00() {
   return (neuron0x2b4bbe0()*-0.211844);
}

double NNfunction_ns_chi04_sL::synapse0x2b57b40() {
   return (neuron0x2b4bf20()*0.0503494);
}

double NNfunction_ns_chi04_sL::synapse0x2b57b80() {
   return (neuron0x2b4c260()*0.181203);
}

double NNfunction_ns_chi04_sL::synapse0x2b57bc0() {
   return (neuron0x2b4c5a0()*-0.10213);
}

double NNfunction_ns_chi04_sL::synapse0x2b57c00() {
   return (neuron0x2b4c8e0()*-0.228206);
}

double NNfunction_ns_chi04_sL::synapse0x2b57c40() {
   return (neuron0x2b4cc20()*-0.256822);
}

double NNfunction_ns_chi04_sL::synapse0x2b57c80() {
   return (neuron0x2b4cf60()*0.514448);
}

double NNfunction_ns_chi04_sL::synapse0x2b57cc0() {
   return (neuron0x2b4d2a0()*0.223123);
}

double NNfunction_ns_chi04_sL::synapse0x2b57d00() {
   return (neuron0x2b4d5e0()*0.186964);
}

double NNfunction_ns_chi04_sL::synapse0x2b57d40() {
   return (neuron0x2b4d920()*0.334054);
}

double NNfunction_ns_chi04_sL::synapse0x2b577d0() {
   return (neuron0x2b4dc60()*-0.0400194);
}

double NNfunction_ns_chi04_sL::synapse0x2b57810() {
   return (neuron0x2b4e1c0()*0.0419408);
}

double NNfunction_ns_chi04_sL::synapse0x2b57e90() {
   return (neuron0x2b4e3e0()*-0.0333129);
}

double NNfunction_ns_chi04_sL::synapse0x2b57ed0() {
   return (neuron0x2b4e720()*-0.219774);
}

double NNfunction_ns_chi04_sL::synapse0x2b57f10() {
   return (neuron0x2b4ea60()*-0.244459);
}

double NNfunction_ns_chi04_sL::synapse0x2b57f50() {
   return (neuron0x2b4eda0()*-3.51548e-05);
}

double NNfunction_ns_chi04_sL::synapse0x2b57f90() {
   return (neuron0x2b4f0e0()*0.248206);
}

double NNfunction_ns_chi04_sL::synapse0x2b57fd0() {
   return (neuron0x2b4f420()*-0.304613);
}

double NNfunction_ns_chi04_sL::synapse0x2b58350() {
   return (neuron0x2b4a860()*-0.468008);
}

double NNfunction_ns_chi04_sL::synapse0x2b58390() {
   return (neuron0x2b4aba0()*-0.477834);
}

double NNfunction_ns_chi04_sL::synapse0x2b583d0() {
   return (neuron0x2b4aee0()*0.295423);
}

double NNfunction_ns_chi04_sL::synapse0x2b58410() {
   return (neuron0x2b4b220()*-0.374176);
}

double NNfunction_ns_chi04_sL::synapse0x2b58450() {
   return (neuron0x2b4b560()*0.164639);
}

double NNfunction_ns_chi04_sL::synapse0x2b58490() {
   return (neuron0x2b4b8a0()*0.0432044);
}

double NNfunction_ns_chi04_sL::synapse0x2b584d0() {
   return (neuron0x2b4bbe0()*0.101026);
}

double NNfunction_ns_chi04_sL::synapse0x2b58510() {
   return (neuron0x2b4bf20()*0.132709);
}

double NNfunction_ns_chi04_sL::synapse0x2b58550() {
   return (neuron0x2b4c260()*-0.879034);
}

double NNfunction_ns_chi04_sL::synapse0x2b58590() {
   return (neuron0x2b4c5a0()*0.317429);
}

double NNfunction_ns_chi04_sL::synapse0x2b585d0() {
   return (neuron0x2b4c8e0()*-0.0124802);
}

double NNfunction_ns_chi04_sL::synapse0x2b58610() {
   return (neuron0x2b4cc20()*-0.640648);
}

double NNfunction_ns_chi04_sL::synapse0x2b58650() {
   return (neuron0x2b4cf60()*0.0841718);
}

double NNfunction_ns_chi04_sL::synapse0x2b58690() {
   return (neuron0x2b4d2a0()*0.0706233);
}

double NNfunction_ns_chi04_sL::synapse0x2b586d0() {
   return (neuron0x2b4d5e0()*0.211259);
}

double NNfunction_ns_chi04_sL::synapse0x2b58710() {
   return (neuron0x2b4d920()*0.0714903);
}

double NNfunction_ns_chi04_sL::synapse0x2b581a0() {
   return (neuron0x2b4dc60()*0.156515);
}

double NNfunction_ns_chi04_sL::synapse0x2b581e0() {
   return (neuron0x2b4e1c0()*-0.170944);
}

double NNfunction_ns_chi04_sL::synapse0x2b58860() {
   return (neuron0x2b4e3e0()*-0.0164309);
}

double NNfunction_ns_chi04_sL::synapse0x2b588a0() {
   return (neuron0x2b4e720()*-0.158254);
}

double NNfunction_ns_chi04_sL::synapse0x2b588e0() {
   return (neuron0x2b4ea60()*0.461111);
}

double NNfunction_ns_chi04_sL::synapse0x2b58920() {
   return (neuron0x2b4eda0()*0.0560155);
}

double NNfunction_ns_chi04_sL::synapse0x2b58960() {
   return (neuron0x2b4f0e0()*-0.235258);
}

double NNfunction_ns_chi04_sL::synapse0x2b589a0() {
   return (neuron0x2b4f420()*0.200421);
}

double NNfunction_ns_chi04_sL::synapse0x2b58d20() {
   return (neuron0x2b4a860()*-0.012325);
}

double NNfunction_ns_chi04_sL::synapse0x2b58d60() {
   return (neuron0x2b4aba0()*-0.0397084);
}

double NNfunction_ns_chi04_sL::synapse0x2b58da0() {
   return (neuron0x2b4aee0()*-0.281735);
}

double NNfunction_ns_chi04_sL::synapse0x2b58de0() {
   return (neuron0x2b4b220()*0.222886);
}

double NNfunction_ns_chi04_sL::synapse0x2b58e20() {
   return (neuron0x2b4b560()*-0.00809504);
}

double NNfunction_ns_chi04_sL::synapse0x2b58e60() {
   return (neuron0x2b4b8a0()*0.012072);
}

double NNfunction_ns_chi04_sL::synapse0x2b58ea0() {
   return (neuron0x2b4bbe0()*0.00563976);
}

double NNfunction_ns_chi04_sL::synapse0x2b58ee0() {
   return (neuron0x2b4bf20()*0.00670596);
}

double NNfunction_ns_chi04_sL::synapse0x2b58f20() {
   return (neuron0x2b4c260()*0.0109209);
}

double NNfunction_ns_chi04_sL::synapse0x2b58f60() {
   return (neuron0x2b4c5a0()*-0.0145151);
}

double NNfunction_ns_chi04_sL::synapse0x2b58fa0() {
   return (neuron0x2b4c8e0()*0.00358014);
}

double NNfunction_ns_chi04_sL::synapse0x2b58fe0() {
   return (neuron0x2b4cc20()*-0.0387232);
}

double NNfunction_ns_chi04_sL::synapse0x2b59020() {
   return (neuron0x2b4cf60()*-0.0731052);
}

double NNfunction_ns_chi04_sL::synapse0x2b59060() {
   return (neuron0x2b4d2a0()*0.0258121);
}

double NNfunction_ns_chi04_sL::synapse0x2b590a0() {
   return (neuron0x2b4d5e0()*-0.0250904);
}

double NNfunction_ns_chi04_sL::synapse0x2b590e0() {
   return (neuron0x2b4d920()*-0.00613283);
}

double NNfunction_ns_chi04_sL::synapse0x2b58b70() {
   return (neuron0x2b4dc60()*0.0404762);
}

double NNfunction_ns_chi04_sL::synapse0x2b58bb0() {
   return (neuron0x2b4e1c0()*-0.0167198);
}

double NNfunction_ns_chi04_sL::synapse0x2b59230() {
   return (neuron0x2b4e3e0()*-0.0272552);
}

double NNfunction_ns_chi04_sL::synapse0x2b59270() {
   return (neuron0x2b4e720()*-0.0264972);
}

double NNfunction_ns_chi04_sL::synapse0x2b592b0() {
   return (neuron0x2b4ea60()*-0.000955108);
}

double NNfunction_ns_chi04_sL::synapse0x2b592f0() {
   return (neuron0x2b4eda0()*-0.00228803);
}

double NNfunction_ns_chi04_sL::synapse0x2b59330() {
   return (neuron0x2b4f0e0()*0.0211111);
}

double NNfunction_ns_chi04_sL::synapse0x2b59370() {
   return (neuron0x2b4f420()*0.0517008);
}

double NNfunction_ns_chi04_sL::synapse0x2b596f0() {
   return (neuron0x2b4a860()*-0.289863);
}

double NNfunction_ns_chi04_sL::synapse0x2b4aa80() {
   return (neuron0x2b4aba0()*-1.12103);
}

double NNfunction_ns_chi04_sL::synapse0x2b4aac0() {
   return (neuron0x2b4aee0()*0.795711);
}

double NNfunction_ns_chi04_sL::synapse0x2b4adc0() {
   return (neuron0x2b4b220()*-0.219133);
}

double NNfunction_ns_chi04_sL::synapse0x2b4ae00() {
   return (neuron0x2b4b560()*0.0301639);
}

double NNfunction_ns_chi04_sL::synapse0x2b4b100() {
   return (neuron0x2b4b8a0()*-0.201284);
}

double NNfunction_ns_chi04_sL::synapse0x2b4b140() {
   return (neuron0x2b4bbe0()*0.209497);
}

double NNfunction_ns_chi04_sL::synapse0x2b4b440() {
   return (neuron0x2b4bf20()*-0.0357988);
}

double NNfunction_ns_chi04_sL::synapse0x2b4b480() {
   return (neuron0x2b4c260()*0.300243);
}

double NNfunction_ns_chi04_sL::synapse0x2b4b780() {
   return (neuron0x2b4c5a0()*-0.361514);
}

double NNfunction_ns_chi04_sL::synapse0x2b4b7c0() {
   return (neuron0x2b4c8e0()*-0.301212);
}

double NNfunction_ns_chi04_sL::synapse0x2b4bac0() {
   return (neuron0x2b4cc20()*-0.291415);
}

double NNfunction_ns_chi04_sL::synapse0x2b4bb00() {
   return (neuron0x2b4cf60()*2.00381);
}

double NNfunction_ns_chi04_sL::synapse0x2b4be00() {
   return (neuron0x2b4d2a0()*-0.0532038);
}

double NNfunction_ns_chi04_sL::synapse0x2b4be40() {
   return (neuron0x2b4d5e0()*0.3998);
}

double NNfunction_ns_chi04_sL::synapse0x2b4c140() {
   return (neuron0x2b4d920()*-0.28803);
}

double NNfunction_ns_chi04_sL::synapse0x2b4c180() {
   return (neuron0x2b4dc60()*-0.194185);
}

double NNfunction_ns_chi04_sL::synapse0x2b4c480() {
   return (neuron0x2b4e1c0()*0.350814);
}

double NNfunction_ns_chi04_sL::synapse0x2b4c4c0() {
   return (neuron0x2b4e3e0()*0.172634);
}

double NNfunction_ns_chi04_sL::synapse0x2b4c7c0() {
   return (neuron0x2b4e720()*0.058257);
}

double NNfunction_ns_chi04_sL::synapse0x2b4c800() {
   return (neuron0x2b4ea60()*0.669794);
}

double NNfunction_ns_chi04_sL::synapse0x2b4cb00() {
   return (neuron0x2b4eda0()*-0.480724);
}

double NNfunction_ns_chi04_sL::synapse0x2b4cb40() {
   return (neuron0x2b4f0e0()*-0.0594438);
}

double NNfunction_ns_chi04_sL::synapse0x2b4ce40() {
   return (neuron0x2b4f420()*-0.817932);
}

double NNfunction_ns_chi04_sL::synapse0x2b4ce80() {
   return (neuron0x2b4a860()*-0.159177);
}

double NNfunction_ns_chi04_sL::synapse0x2b4db40() {
   return (neuron0x2b4aba0()*1.04774);
}

double NNfunction_ns_chi04_sL::synapse0x2b4db80() {
   return (neuron0x2b4aee0()*2.84714);
}

double NNfunction_ns_chi04_sL::synapse0x2b59540() {
   return (neuron0x2b4b220()*-0.0889365);
}

double NNfunction_ns_chi04_sL::synapse0x2b59580() {
   return (neuron0x2b4b560()*0.0227527);
}

double NNfunction_ns_chi04_sL::synapse0x2b4de80() {
   return (neuron0x2b4b8a0()*0.00238257);
}

double NNfunction_ns_chi04_sL::synapse0x2b4dec0() {
   return (neuron0x2b4bbe0()*0.0387033);
}

double NNfunction_ns_chi04_sL::synapse0x29058e0() {
   return (neuron0x2b4bf20()*0.0375101);
}

double NNfunction_ns_chi04_sL::synapse0x2905920() {
   return (neuron0x2b4c260()*0.0610299);
}

double NNfunction_ns_chi04_sL::synapse0x2b4e600() {
   return (neuron0x2b4c5a0()*-0.0708591);
}

double NNfunction_ns_chi04_sL::synapse0x2b4e640() {
   return (neuron0x2b4c8e0()*-0.0430684);
}

double NNfunction_ns_chi04_sL::synapse0x2b4e940() {
   return (neuron0x2b4cc20()*-0.0636133);
}

double NNfunction_ns_chi04_sL::synapse0x2b4e980() {
   return (neuron0x2b4cf60()*0.109654);
}

double NNfunction_ns_chi04_sL::synapse0x2b4ec80() {
   return (neuron0x2b4d2a0()*0.0284218);
}

double NNfunction_ns_chi04_sL::synapse0x2b4ecc0() {
   return (neuron0x2b4d5e0()*-0.0481207);
}

double NNfunction_ns_chi04_sL::synapse0x2b4efc0() {
   return (neuron0x2b4d920()*-0.0510725);
}

double NNfunction_ns_chi04_sL::synapse0x2b4f000() {
   return (neuron0x2b4dc60()*0.05938);
}

double NNfunction_ns_chi04_sL::synapse0x2b4f300() {
   return (neuron0x2b4e1c0()*-0.0187802);
}

double NNfunction_ns_chi04_sL::synapse0x2b4f340() {
   return (neuron0x2b4e3e0()*-0.0580517);
}

double NNfunction_ns_chi04_sL::synapse0x2b4f640() {
   return (neuron0x2b4e720()*-0.0039341);
}

double NNfunction_ns_chi04_sL::synapse0x2b4f680() {
   return (neuron0x2b4ea60()*-0.00271892);
}

double NNfunction_ns_chi04_sL::synapse0x2b4d180() {
   return (neuron0x2b4eda0()*-0.0177683);
}

double NNfunction_ns_chi04_sL::synapse0x2b4d1c0() {
   return (neuron0x2b4f0e0()*-0.00193516);
}

double NNfunction_ns_chi04_sL::synapse0x2b5b460() {
   return (neuron0x2b4f420()*-0.411979);
}

double NNfunction_ns_chi04_sL::synapse0x2b5b7e0() {
   return (neuron0x2b4a860()*-0.457709);
}

double NNfunction_ns_chi04_sL::synapse0x2b5b820() {
   return (neuron0x2b4aba0()*1.00195);
}

double NNfunction_ns_chi04_sL::synapse0x2b5b860() {
   return (neuron0x2b4aee0()*0.634875);
}

double NNfunction_ns_chi04_sL::synapse0x2b5b8a0() {
   return (neuron0x2b4b220()*0.0715437);
}

double NNfunction_ns_chi04_sL::synapse0x2b5b8e0() {
   return (neuron0x2b4b560()*-0.116343);
}

double NNfunction_ns_chi04_sL::synapse0x2b5b920() {
   return (neuron0x2b4b8a0()*-0.13374);
}

double NNfunction_ns_chi04_sL::synapse0x2b5b960() {
   return (neuron0x2b4bbe0()*-0.285932);
}

double NNfunction_ns_chi04_sL::synapse0x2b5b9a0() {
   return (neuron0x2b4bf20()*-0.288066);
}

double NNfunction_ns_chi04_sL::synapse0x2b5b9e0() {
   return (neuron0x2b4c260()*-0.386743);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ba20() {
   return (neuron0x2b4c5a0()*-0.23999);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ba60() {
   return (neuron0x2b4c8e0()*-0.753564);
}

double NNfunction_ns_chi04_sL::synapse0x2b5baa0() {
   return (neuron0x2b4cc20()*-0.279885);
}

double NNfunction_ns_chi04_sL::synapse0x2b5bae0() {
   return (neuron0x2b4cf60()*1.22766);
}

double NNfunction_ns_chi04_sL::synapse0x2b5bb20() {
   return (neuron0x2b4d2a0()*-0.177994);
}

double NNfunction_ns_chi04_sL::synapse0x2b5bb60() {
   return (neuron0x2b4d5e0()*0.411191);
}

double NNfunction_ns_chi04_sL::synapse0x2b5bba0() {
   return (neuron0x2b4d920()*-0.304544);
}

double NNfunction_ns_chi04_sL::synapse0x2b5b630() {
   return (neuron0x2b4dc60()*0.103752);
}

double NNfunction_ns_chi04_sL::synapse0x2b5b670() {
   return (neuron0x2b4e1c0()*0.0409059);
}

double NNfunction_ns_chi04_sL::synapse0x2b5bcf0() {
   return (neuron0x2b4e3e0()*-0.308448);
}

double NNfunction_ns_chi04_sL::synapse0x2b5bd30() {
   return (neuron0x2b4e720()*-0.227485);
}

double NNfunction_ns_chi04_sL::synapse0x2b5bd70() {
   return (neuron0x2b4ea60()*-0.216649);
}

double NNfunction_ns_chi04_sL::synapse0x2b5bdb0() {
   return (neuron0x2b4eda0()*0.282583);
}

double NNfunction_ns_chi04_sL::synapse0x2b5bdf0() {
   return (neuron0x2b4f0e0()*-0.245139);
}

double NNfunction_ns_chi04_sL::synapse0x2b5be30() {
   return (neuron0x2b4f420()*-0.341242);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c1b0() {
   return (neuron0x2b4a860()*-1.42187);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c1f0() {
   return (neuron0x2b4aba0()*-0.364192);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c230() {
   return (neuron0x2b4aee0()*0.0229302);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c270() {
   return (neuron0x2b4b220()*0.373668);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c2b0() {
   return (neuron0x2b4b560()*-0.337248);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c2f0() {
   return (neuron0x2b4b8a0()*0.405985);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c330() {
   return (neuron0x2b4bbe0()*-0.179803);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c370() {
   return (neuron0x2b4bf20()*-0.113093);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c3b0() {
   return (neuron0x2b4c260()*-0.244641);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c3f0() {
   return (neuron0x2b4c5a0()*-0.289557);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c430() {
   return (neuron0x2b4c8e0()*0.476001);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c470() {
   return (neuron0x2b4cc20()*0.00164698);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c4b0() {
   return (neuron0x2b4cf60()*-0.177362);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c4f0() {
   return (neuron0x2b4d2a0()*0.303872);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c530() {
   return (neuron0x2b4d5e0()*0.182465);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c570() {
   return (neuron0x2b4d920()*0.438978);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c000() {
   return (neuron0x2b4dc60()*-0.500141);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c040() {
   return (neuron0x2b4e1c0()*-0.254506);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c6c0() {
   return (neuron0x2b4e3e0()*-0.529238);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c700() {
   return (neuron0x2b4e720()*-0.0941678);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c740() {
   return (neuron0x2b4ea60()*-0.0646537);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c780() {
   return (neuron0x2b4eda0()*-0.0567544);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c7c0() {
   return (neuron0x2b4f0e0()*0.377073);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c800() {
   return (neuron0x2b4f420()*-0.202822);
}

double NNfunction_ns_chi04_sL::synapse0x2b5cb80() {
   return (neuron0x2b4a860()*0.116375);
}

double NNfunction_ns_chi04_sL::synapse0x2b5cbc0() {
   return (neuron0x2b4aba0()*0.214729);
}

double NNfunction_ns_chi04_sL::synapse0x2b5cc00() {
   return (neuron0x2b4aee0()*-0.472544);
}

double NNfunction_ns_chi04_sL::synapse0x2b5cc40() {
   return (neuron0x2b4b220()*1.07753);
}

double NNfunction_ns_chi04_sL::synapse0x2b5cc80() {
   return (neuron0x2b4b560()*-0.794135);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ccc0() {
   return (neuron0x2b4b8a0()*0.108544);
}

double NNfunction_ns_chi04_sL::synapse0x2b5cd00() {
   return (neuron0x2b4bbe0()*0.204264);
}

double NNfunction_ns_chi04_sL::synapse0x2b5cd40() {
   return (neuron0x2b4bf20()*-0.281694);
}

double NNfunction_ns_chi04_sL::synapse0x2b5cd80() {
   return (neuron0x2b4c260()*-0.493778);
}

double NNfunction_ns_chi04_sL::synapse0x2b5cdc0() {
   return (neuron0x2b4c5a0()*-0.418504);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ce00() {
   return (neuron0x2b4c8e0()*0.46695);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ce40() {
   return (neuron0x2b4cc20()*-0.121717);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ce80() {
   return (neuron0x2b4cf60()*0.025676);
}

double NNfunction_ns_chi04_sL::synapse0x2b5cec0() {
   return (neuron0x2b4d2a0()*0.671298);
}

double NNfunction_ns_chi04_sL::synapse0x2b5cf00() {
   return (neuron0x2b4d5e0()*0.279197);
}

double NNfunction_ns_chi04_sL::synapse0x2b5cf40() {
   return (neuron0x2b4d920()*0.823673);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c9d0() {
   return (neuron0x2b4dc60()*0.411708);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ca10() {
   return (neuron0x2b4e1c0()*0.85301);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d090() {
   return (neuron0x2b4e3e0()*0.306344);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d0d0() {
   return (neuron0x2b4e720()*-0.466903);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d110() {
   return (neuron0x2b4ea60()*-0.0455993);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d150() {
   return (neuron0x2b4eda0()*0.280151);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d190() {
   return (neuron0x2b4f0e0()*-0.348298);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d1d0() {
   return (neuron0x2b4f420()*-1.62958);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d550() {
   return (neuron0x2b4a860()*-0.229476);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d590() {
   return (neuron0x2b4aba0()*-0.126164);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d5d0() {
   return (neuron0x2b4aee0()*-1.22138);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d610() {
   return (neuron0x2b4b220()*0.0125147);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d650() {
   return (neuron0x2b4b560()*-0.0278349);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d690() {
   return (neuron0x2b4b8a0()*0.0167594);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d6d0() {
   return (neuron0x2b4bbe0()*-0.0272941);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d710() {
   return (neuron0x2b4bf20()*0.0114406);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d750() {
   return (neuron0x2b4c260()*-0.0349497);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d790() {
   return (neuron0x2b4c5a0()*-0.0294979);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d7d0() {
   return (neuron0x2b4c8e0()*0.0375836);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d810() {
   return (neuron0x2b4cc20()*-0.00965374);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d850() {
   return (neuron0x2b4cf60()*0.0586434);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d890() {
   return (neuron0x2b4d2a0()*0.0907446);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d8d0() {
   return (neuron0x2b4d5e0()*-0.014975);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d910() {
   return (neuron0x2b4d920()*-0.0204831);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d3a0() {
   return (neuron0x2b4dc60()*0.023191);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d3e0() {
   return (neuron0x2b4e1c0()*-0.00605391);
}

double NNfunction_ns_chi04_sL::synapse0x2b5da60() {
   return (neuron0x2b4e3e0()*-0.0260066);
}

double NNfunction_ns_chi04_sL::synapse0x2b5daa0() {
   return (neuron0x2b4e720()*0.0223044);
}

double NNfunction_ns_chi04_sL::synapse0x2b5dae0() {
   return (neuron0x2b4ea60()*-0.0137772);
}

double NNfunction_ns_chi04_sL::synapse0x2b5db20() {
   return (neuron0x2b4eda0()*0.0223177);
}

double NNfunction_ns_chi04_sL::synapse0x2b5db60() {
   return (neuron0x2b4f0e0()*0.00271189);
}

double NNfunction_ns_chi04_sL::synapse0x2b5dba0() {
   return (neuron0x2b4f420()*-1.66112);
}

double NNfunction_ns_chi04_sL::synapse0x2b5df20() {
   return (neuron0x2b4a860()*-0.120417);
}

double NNfunction_ns_chi04_sL::synapse0x2b5df60() {
   return (neuron0x2b4aba0()*0.132904);
}

double NNfunction_ns_chi04_sL::synapse0x2b5dfa0() {
   return (neuron0x2b4aee0()*-3.81789);
}

double NNfunction_ns_chi04_sL::synapse0x2b5dfe0() {
   return (neuron0x2b4b220()*-0.0297558);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e020() {
   return (neuron0x2b4b560()*-0.0183318);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e060() {
   return (neuron0x2b4b8a0()*-0.0274767);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e0a0() {
   return (neuron0x2b4bbe0()*-0.0457262);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e0e0() {
   return (neuron0x2b4bf20()*0.00187916);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e120() {
   return (neuron0x2b4c260()*0.00152589);
}

double NNfunction_ns_chi04_sL::synapse0x2b562e0() {
   return (neuron0x2b4c5a0()*0.0240061);
}

double NNfunction_ns_chi04_sL::synapse0x2b56320() {
   return (neuron0x2b4c8e0()*0.0366902);
}

double NNfunction_ns_chi04_sL::synapse0x2b56360() {
   return (neuron0x2b4cc20()*-0.0370127);
}

double NNfunction_ns_chi04_sL::synapse0x2b563a0() {
   return (neuron0x2b4cf60()*-0.128353);
}

double NNfunction_ns_chi04_sL::synapse0x2b563e0() {
   return (neuron0x2b4d2a0()*-0.059482);
}

double NNfunction_ns_chi04_sL::synapse0x2b56420() {
   return (neuron0x2b4d5e0()*-0.00903996);
}

double NNfunction_ns_chi04_sL::synapse0x2b56460() {
   return (neuron0x2b4d920()*0.0512398);
}

double NNfunction_ns_chi04_sL::synapse0x2b5dd70() {
   return (neuron0x2b4dc60()*0.00685198);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ddb0() {
   return (neuron0x2b4e1c0()*0.00787024);
}

double NNfunction_ns_chi04_sL::synapse0x2b565b0() {
   return (neuron0x2b4e3e0()*0.014216);
}

double NNfunction_ns_chi04_sL::synapse0x2b565f0() {
   return (neuron0x2b4e720()*-0.0187152);
}

double NNfunction_ns_chi04_sL::synapse0x2b56630() {
   return (neuron0x2b4ea60()*-0.0610616);
}

double NNfunction_ns_chi04_sL::synapse0x2b56670() {
   return (neuron0x2b4eda0()*0.0269983);
}

double NNfunction_ns_chi04_sL::synapse0x2b566b0() {
   return (neuron0x2b4f0e0()*0.0602184);
}

double NNfunction_ns_chi04_sL::synapse0x2b566f0() {
   return (neuron0x2b4f420()*1.93193);
}

double NNfunction_ns_chi04_sL::synapse0x2b56a70() {
   return (neuron0x2b4a860()*-0.0696213);
}

double NNfunction_ns_chi04_sL::synapse0x2b56ab0() {
   return (neuron0x2b4aba0()*0.0719608);
}

double NNfunction_ns_chi04_sL::synapse0x2b56af0() {
   return (neuron0x2b4aee0()*-0.122619);
}

double NNfunction_ns_chi04_sL::synapse0x2b56b30() {
   return (neuron0x2b4b220()*-1.07574);
}

double NNfunction_ns_chi04_sL::synapse0x2b56b70() {
   return (neuron0x2b4b560()*-0.00403764);
}

double NNfunction_ns_chi04_sL::synapse0x2b56bb0() {
   return (neuron0x2b4b8a0()*0.0353535);
}

double NNfunction_ns_chi04_sL::synapse0x2b56bf0() {
   return (neuron0x2b4bbe0()*0.00730464);
}

double NNfunction_ns_chi04_sL::synapse0x2b56c30() {
   return (neuron0x2b4bf20()*0.0248623);
}

double NNfunction_ns_chi04_sL::synapse0x2b56c70() {
   return (neuron0x2b4c260()*0.0243429);
}

double NNfunction_ns_chi04_sL::synapse0x2b56cb0() {
   return (neuron0x2b4c5a0()*0.0286199);
}

double NNfunction_ns_chi04_sL::synapse0x2b56cf0() {
   return (neuron0x2b4c8e0()*-0.00969624);
}

double NNfunction_ns_chi04_sL::synapse0x2b56d30() {
   return (neuron0x2b4cc20()*0.0255751);
}

double NNfunction_ns_chi04_sL::synapse0x2b56d70() {
   return (neuron0x2b4cf60()*-0.565645);
}

double NNfunction_ns_chi04_sL::synapse0x2b56db0() {
   return (neuron0x2b4d2a0()*-0.0177411);
}

double NNfunction_ns_chi04_sL::synapse0x2b56df0() {
   return (neuron0x2b4d5e0()*0.0176033);
}

double NNfunction_ns_chi04_sL::synapse0x2b56e30() {
   return (neuron0x2b4d920()*0.0210561);
}

double NNfunction_ns_chi04_sL::synapse0x2b568c0() {
   return (neuron0x2b4dc60()*-0.0350403);
}

double NNfunction_ns_chi04_sL::synapse0x2b56900() {
   return (neuron0x2b4e1c0()*0.0300305);
}

double NNfunction_ns_chi04_sL::synapse0x2b56f80() {
   return (neuron0x2b4e3e0()*0.0371049);
}

double NNfunction_ns_chi04_sL::synapse0x2b56fc0() {
   return (neuron0x2b4e720()*-0.0144684);
}

double NNfunction_ns_chi04_sL::synapse0x2b57000() {
   return (neuron0x2b4ea60()*0.00381707);
}

double NNfunction_ns_chi04_sL::synapse0x2b57040() {
   return (neuron0x2b4eda0()*-0.00916872);
}

double NNfunction_ns_chi04_sL::synapse0x2b57080() {
   return (neuron0x2b4f0e0()*0.0443932);
}

double NNfunction_ns_chi04_sL::synapse0x2b570c0() {
   return (neuron0x2b4f420()*0.0336826);
}

double NNfunction_ns_chi04_sL::synapse0x2b57290() {
   return (neuron0x2b4a860()*-0.394685);
}

double NNfunction_ns_chi04_sL::synapse0x2b60320() {
   return (neuron0x2b4aba0()*0.644862);
}

double NNfunction_ns_chi04_sL::synapse0x2b60360() {
   return (neuron0x2b4aee0()*0.0266958);
}

double NNfunction_ns_chi04_sL::synapse0x2b603a0() {
   return (neuron0x2b4b220()*-0.254042);
}

double NNfunction_ns_chi04_sL::synapse0x2b603e0() {
   return (neuron0x2b4b560()*0.0628219);
}

double NNfunction_ns_chi04_sL::synapse0x2b60420() {
   return (neuron0x2b4b8a0()*0.750565);
}

double NNfunction_ns_chi04_sL::synapse0x2b60460() {
   return (neuron0x2b4bbe0()*-0.343199);
}

double NNfunction_ns_chi04_sL::synapse0x2b604a0() {
   return (neuron0x2b4bf20()*-0.163265);
}

double NNfunction_ns_chi04_sL::synapse0x2b604e0() {
   return (neuron0x2b4c260()*-0.353726);
}

double NNfunction_ns_chi04_sL::synapse0x2b60520() {
   return (neuron0x2b4c5a0()*-0.0439143);
}

double NNfunction_ns_chi04_sL::synapse0x2b60560() {
   return (neuron0x2b4c8e0()*0.00631649);
}

double NNfunction_ns_chi04_sL::synapse0x2b605a0() {
   return (neuron0x2b4cc20()*0.139733);
}

double NNfunction_ns_chi04_sL::synapse0x2b605e0() {
   return (neuron0x2b4cf60()*0.724672);
}

double NNfunction_ns_chi04_sL::synapse0x2b60620() {
   return (neuron0x2b4d2a0()*-0.116567);
}

double NNfunction_ns_chi04_sL::synapse0x2b60660() {
   return (neuron0x2b4d5e0()*0.243795);
}

double NNfunction_ns_chi04_sL::synapse0x2b606a0() {
   return (neuron0x2b4d920()*0.632833);
}

double NNfunction_ns_chi04_sL::synapse0x2b60170() {
   return (neuron0x2b4dc60()*-0.132996);
}

double NNfunction_ns_chi04_sL::synapse0x2b601b0() {
   return (neuron0x2b4e1c0()*-0.325019);
}

double NNfunction_ns_chi04_sL::synapse0x2b607f0() {
   return (neuron0x2b4e3e0()*-0.187184);
}

double NNfunction_ns_chi04_sL::synapse0x2b60830() {
   return (neuron0x2b4e720()*0.218758);
}

double NNfunction_ns_chi04_sL::synapse0x2b60870() {
   return (neuron0x2b4ea60()*-0.104277);
}

double NNfunction_ns_chi04_sL::synapse0x2b608b0() {
   return (neuron0x2b4eda0()*-0.143289);
}

double NNfunction_ns_chi04_sL::synapse0x2b608f0() {
   return (neuron0x2b4f0e0()*0.688425);
}

double NNfunction_ns_chi04_sL::synapse0x2b60930() {
   return (neuron0x2b4f420()*0.444607);
}

double NNfunction_ns_chi04_sL::synapse0x2b60cb0() {
   return (neuron0x2b4a860()*-0.0374701);
}

double NNfunction_ns_chi04_sL::synapse0x2b60cf0() {
   return (neuron0x2b4aba0()*-3.71598);
}

double NNfunction_ns_chi04_sL::synapse0x2b60d30() {
   return (neuron0x2b4aee0()*0.524091);
}

double NNfunction_ns_chi04_sL::synapse0x2b60d70() {
   return (neuron0x2b4b220()*0.00272151);
}

double NNfunction_ns_chi04_sL::synapse0x2b60db0() {
   return (neuron0x2b4b560()*-0.0100806);
}

double NNfunction_ns_chi04_sL::synapse0x2b60df0() {
   return (neuron0x2b4b8a0()*0.00874024);
}

double NNfunction_ns_chi04_sL::synapse0x2b60e30() {
   return (neuron0x2b4bbe0()*-0.00278492);
}

double NNfunction_ns_chi04_sL::synapse0x2b60e70() {
   return (neuron0x2b4bf20()*-0.0075422);
}

double NNfunction_ns_chi04_sL::synapse0x2b60eb0() {
   return (neuron0x2b4c260()*-0.0151373);
}

double NNfunction_ns_chi04_sL::synapse0x2b60ef0() {
   return (neuron0x2b4c5a0()*0.0139472);
}

double NNfunction_ns_chi04_sL::synapse0x2b60f30() {
   return (neuron0x2b4c8e0()*7.36386e-05);
}

double NNfunction_ns_chi04_sL::synapse0x2b60f70() {
   return (neuron0x2b4cc20()*0.00411618);
}

double NNfunction_ns_chi04_sL::synapse0x2b60fb0() {
   return (neuron0x2b4cf60()*0.0273787);
}

double NNfunction_ns_chi04_sL::synapse0x2b60ff0() {
   return (neuron0x2b4d2a0()*0.000834333);
}

double NNfunction_ns_chi04_sL::synapse0x2b61030() {
   return (neuron0x2b4d5e0()*-0.00502327);
}

double NNfunction_ns_chi04_sL::synapse0x2b61070() {
   return (neuron0x2b4d920()*-0.0105517);
}

double NNfunction_ns_chi04_sL::synapse0x2b60b00() {
   return (neuron0x2b4dc60()*0.0121521);
}

double NNfunction_ns_chi04_sL::synapse0x2b60b40() {
   return (neuron0x2b4e1c0()*-0.0148752);
}

double NNfunction_ns_chi04_sL::synapse0x2b611c0() {
   return (neuron0x2b4e3e0()*-0.0188728);
}

double NNfunction_ns_chi04_sL::synapse0x2b61200() {
   return (neuron0x2b4e720()*0.0159264);
}

double NNfunction_ns_chi04_sL::synapse0x2b61240() {
   return (neuron0x2b4ea60()*0.010541);
}

double NNfunction_ns_chi04_sL::synapse0x2b61280() {
   return (neuron0x2b4eda0()*0.00836889);
}

double NNfunction_ns_chi04_sL::synapse0x2b612c0() {
   return (neuron0x2b4f0e0()*-0.0191099);
}

double NNfunction_ns_chi04_sL::synapse0x2b61300() {
   return (neuron0x2b4f420()*-3.26757);
}

double NNfunction_ns_chi04_sL::synapse0x2b61680() {
   return (neuron0x2b4a860()*-0.104545);
}

double NNfunction_ns_chi04_sL::synapse0x2b616c0() {
   return (neuron0x2b4aba0()*-3.06039);
}

double NNfunction_ns_chi04_sL::synapse0x2b61700() {
   return (neuron0x2b4aee0()*-3.9762);
}

double NNfunction_ns_chi04_sL::synapse0x2b61740() {
   return (neuron0x2b4b220()*0.0507768);
}

double NNfunction_ns_chi04_sL::synapse0x2b61780() {
   return (neuron0x2b4b560()*-0.0866157);
}

double NNfunction_ns_chi04_sL::synapse0x2b617c0() {
   return (neuron0x2b4b8a0()*-0.0370822);
}

double NNfunction_ns_chi04_sL::synapse0x2b61800() {
   return (neuron0x2b4bbe0()*0.091294);
}

double NNfunction_ns_chi04_sL::synapse0x2b61840() {
   return (neuron0x2b4bf20()*0.0218499);
}

double NNfunction_ns_chi04_sL::synapse0x2b61880() {
   return (neuron0x2b4c260()*-0.0482239);
}

double NNfunction_ns_chi04_sL::synapse0x2b618c0() {
   return (neuron0x2b4c5a0()*-0.0198143);
}

double NNfunction_ns_chi04_sL::synapse0x2b61900() {
   return (neuron0x2b4c8e0()*-0.0132955);
}

double NNfunction_ns_chi04_sL::synapse0x2b61940() {
   return (neuron0x2b4cc20()*-0.0175016);
}

double NNfunction_ns_chi04_sL::synapse0x2b61980() {
   return (neuron0x2b4cf60()*-0.394132);
}

double NNfunction_ns_chi04_sL::synapse0x2b619c0() {
   return (neuron0x2b4d2a0()*-0.0634895);
}

double NNfunction_ns_chi04_sL::synapse0x2b61a00() {
   return (neuron0x2b4d5e0()*-0.0456425);
}

double NNfunction_ns_chi04_sL::synapse0x2b61a40() {
   return (neuron0x2b4d920()*0.0150125);
}

double NNfunction_ns_chi04_sL::synapse0x2b614d0() {
   return (neuron0x2b4dc60()*-0.161219);
}

double NNfunction_ns_chi04_sL::synapse0x2b61510() {
   return (neuron0x2b4e1c0()*0.161699);
}

double NNfunction_ns_chi04_sL::synapse0x2b61b90() {
   return (neuron0x2b4e3e0()*0.0464223);
}

double NNfunction_ns_chi04_sL::synapse0x2b61bd0() {
   return (neuron0x2b4e720()*0.00887768);
}

double NNfunction_ns_chi04_sL::synapse0x2b61c10() {
   return (neuron0x2b4ea60()*-0.146274);
}

double NNfunction_ns_chi04_sL::synapse0x2b61c50() {
   return (neuron0x2b4eda0()*0.0301104);
}

double NNfunction_ns_chi04_sL::synapse0x2b61c90() {
   return (neuron0x2b4f0e0()*0.0208578);
}

double NNfunction_ns_chi04_sL::synapse0x2b61cd0() {
   return (neuron0x2b4f420()*2.2763);
}

double NNfunction_ns_chi04_sL::synapse0x2b62050() {
   return (neuron0x2b4a860()*-0.0340254);
}

double NNfunction_ns_chi04_sL::synapse0x2b62090() {
   return (neuron0x2b4aba0()*0.0675487);
}

double NNfunction_ns_chi04_sL::synapse0x2b620d0() {
   return (neuron0x2b4aee0()*-0.106938);
}

double NNfunction_ns_chi04_sL::synapse0x2b62110() {
   return (neuron0x2b4b220()*-0.380591);
}

double NNfunction_ns_chi04_sL::synapse0x2b62150() {
   return (neuron0x2b4b560()*0.00151045);
}

double NNfunction_ns_chi04_sL::synapse0x2b62190() {
   return (neuron0x2b4b8a0()*0.00706629);
}

double NNfunction_ns_chi04_sL::synapse0x2b621d0() {
   return (neuron0x2b4bbe0()*0.00475635);
}

double NNfunction_ns_chi04_sL::synapse0x2b62210() {
   return (neuron0x2b4bf20()*0.00575198);
}

double NNfunction_ns_chi04_sL::synapse0x2b62250() {
   return (neuron0x2b4c260()*0.00418155);
}

double NNfunction_ns_chi04_sL::synapse0x2b62290() {
   return (neuron0x2b4c5a0()*0.0039184);
}

double NNfunction_ns_chi04_sL::synapse0x2b622d0() {
   return (neuron0x2b4c8e0()*-0.0103695);
}

double NNfunction_ns_chi04_sL::synapse0x2b62310() {
   return (neuron0x2b4cc20()*0.0177107);
}

double NNfunction_ns_chi04_sL::synapse0x2b62350() {
   return (neuron0x2b4cf60()*0.815519);
}

double NNfunction_ns_chi04_sL::synapse0x2b62390() {
   return (neuron0x2b4d2a0()*0.0131488);
}

double NNfunction_ns_chi04_sL::synapse0x2b623d0() {
   return (neuron0x2b4d5e0()*0.0033338);
}

double NNfunction_ns_chi04_sL::synapse0x2b62410() {
   return (neuron0x2b4d920()*0.00791599);
}

double NNfunction_ns_chi04_sL::synapse0x2b61ea0() {
   return (neuron0x2b4dc60()*0.00695511);
}

double NNfunction_ns_chi04_sL::synapse0x2b61ee0() {
   return (neuron0x2b4e1c0()*0.00559997);
}

double NNfunction_ns_chi04_sL::synapse0x2b62560() {
   return (neuron0x2b4e3e0()*0.00347758);
}

double NNfunction_ns_chi04_sL::synapse0x2b625a0() {
   return (neuron0x2b4e720()*0.00938445);
}

double NNfunction_ns_chi04_sL::synapse0x2b625e0() {
   return (neuron0x2b4ea60()*-0.00739547);
}

double NNfunction_ns_chi04_sL::synapse0x2b62620() {
   return (neuron0x2b4eda0()*0.00854358);
}

double NNfunction_ns_chi04_sL::synapse0x2b62660() {
   return (neuron0x2b4f0e0()*0.00883074);
}

double NNfunction_ns_chi04_sL::synapse0x2b626a0() {
   return (neuron0x2b4f420()*0.0322075);
}

double NNfunction_ns_chi04_sL::synapse0x2b62a20() {
   return (neuron0x2b4a860()*-0.0319153);
}

double NNfunction_ns_chi04_sL::synapse0x2b62a60() {
   return (neuron0x2b4aba0()*-0.559483);
}

double NNfunction_ns_chi04_sL::synapse0x2b62aa0() {
   return (neuron0x2b4aee0()*2.44732);
}

double NNfunction_ns_chi04_sL::synapse0x2b62ae0() {
   return (neuron0x2b4b220()*0.0991797);
}

double NNfunction_ns_chi04_sL::synapse0x2b62b20() {
   return (neuron0x2b4b560()*-0.162293);
}

double NNfunction_ns_chi04_sL::synapse0x2b62b60() {
   return (neuron0x2b4b8a0()*0.00770224);
}

double NNfunction_ns_chi04_sL::synapse0x2b62ba0() {
   return (neuron0x2b4bbe0()*0.0819918);
}

double NNfunction_ns_chi04_sL::synapse0x2b62be0() {
   return (neuron0x2b4bf20()*0.119357);
}

double NNfunction_ns_chi04_sL::synapse0x2b62c20() {
   return (neuron0x2b4c260()*-0.0542618);
}

double NNfunction_ns_chi04_sL::synapse0x2b62c60() {
   return (neuron0x2b4c5a0()*0.0382447);
}

double NNfunction_ns_chi04_sL::synapse0x2b62ca0() {
   return (neuron0x2b4c8e0()*0.0509354);
}

double NNfunction_ns_chi04_sL::synapse0x2b62ce0() {
   return (neuron0x2b4cc20()*-0.107451);
}

double NNfunction_ns_chi04_sL::synapse0x2b62d20() {
   return (neuron0x2b4cf60()*-0.465912);
}

double NNfunction_ns_chi04_sL::synapse0x2b62d60() {
   return (neuron0x2b4d2a0()*-0.146243);
}

double NNfunction_ns_chi04_sL::synapse0x2b62da0() {
   return (neuron0x2b4d5e0()*-0.0129316);
}

double NNfunction_ns_chi04_sL::synapse0x2b62de0() {
   return (neuron0x2b4d920()*-0.0579001);
}

double NNfunction_ns_chi04_sL::synapse0x2b62870() {
   return (neuron0x2b4dc60()*0.113195);
}

double NNfunction_ns_chi04_sL::synapse0x2b628b0() {
   return (neuron0x2b4e1c0()*-0.0450132);
}

double NNfunction_ns_chi04_sL::synapse0x2b62f30() {
   return (neuron0x2b4e3e0()*0.0717543);
}

double NNfunction_ns_chi04_sL::synapse0x2b62f70() {
   return (neuron0x2b4e720()*-0.0051377);
}

double NNfunction_ns_chi04_sL::synapse0x2b62fb0() {
   return (neuron0x2b4ea60()*0.0463506);
}

double NNfunction_ns_chi04_sL::synapse0x2b62ff0() {
   return (neuron0x2b4eda0()*0.0327054);
}

double NNfunction_ns_chi04_sL::synapse0x2b63030() {
   return (neuron0x2b4f0e0()*0.0777891);
}

double NNfunction_ns_chi04_sL::synapse0x2b63070() {
   return (neuron0x2b4f420()*0.731455);
}

double NNfunction_ns_chi04_sL::synapse0x2b633f0() {
   return (neuron0x2b4a860()*-0.0449412);
}

double NNfunction_ns_chi04_sL::synapse0x2b63430() {
   return (neuron0x2b4aba0()*-0.175183);
}

double NNfunction_ns_chi04_sL::synapse0x2b63470() {
   return (neuron0x2b4aee0()*-0.0735536);
}

double NNfunction_ns_chi04_sL::synapse0x2b634b0() {
   return (neuron0x2b4b220()*-0.153667);
}

double NNfunction_ns_chi04_sL::synapse0x2b634f0() {
   return (neuron0x2b4b560()*0.0207501);
}

double NNfunction_ns_chi04_sL::synapse0x2b63530() {
   return (neuron0x2b4b8a0()*-0.386381);
}

double NNfunction_ns_chi04_sL::synapse0x2b63570() {
   return (neuron0x2b4bbe0()*0.194982);
}

double NNfunction_ns_chi04_sL::synapse0x2b635b0() {
   return (neuron0x2b4bf20()*0.127437);
}

double NNfunction_ns_chi04_sL::synapse0x2b635f0() {
   return (neuron0x2b4c260()*0.184103);
}

double NNfunction_ns_chi04_sL::synapse0x2b63630() {
   return (neuron0x2b4c5a0()*-0.192676);
}

double NNfunction_ns_chi04_sL::synapse0x2b63670() {
   return (neuron0x2b4c8e0()*-0.0289973);
}

double NNfunction_ns_chi04_sL::synapse0x2b636b0() {
   return (neuron0x2b4cc20()*-0.251966);
}

double NNfunction_ns_chi04_sL::synapse0x2b636f0() {
   return (neuron0x2b4cf60()*1.27915);
}

double NNfunction_ns_chi04_sL::synapse0x2b63730() {
   return (neuron0x2b4d2a0()*0.0573427);
}

double NNfunction_ns_chi04_sL::synapse0x2b63770() {
   return (neuron0x2b4d5e0()*0.246237);
}

double NNfunction_ns_chi04_sL::synapse0x2b637b0() {
   return (neuron0x2b4d920()*-0.201565);
}

double NNfunction_ns_chi04_sL::synapse0x2b63240() {
   return (neuron0x2b4dc60()*-0.252581);
}

double NNfunction_ns_chi04_sL::synapse0x2b63280() {
   return (neuron0x2b4e1c0()*0.278713);
}

double NNfunction_ns_chi04_sL::synapse0x2b63900() {
   return (neuron0x2b4e3e0()*0.349327);
}

double NNfunction_ns_chi04_sL::synapse0x2b63940() {
   return (neuron0x2b4e720()*0.0483065);
}

double NNfunction_ns_chi04_sL::synapse0x2b63980() {
   return (neuron0x2b4ea60()*0.405922);
}

double NNfunction_ns_chi04_sL::synapse0x2b639c0() {
   return (neuron0x2b4eda0()*-0.328954);
}

double NNfunction_ns_chi04_sL::synapse0x2b63a00() {
   return (neuron0x2b4f0e0()*-0.0929295);
}

double NNfunction_ns_chi04_sL::synapse0x2b63a40() {
   return (neuron0x2b4f420()*-0.638968);
}

double NNfunction_ns_chi04_sL::synapse0x2b63dc0() {
   return (neuron0x2b4a860()*-0.0283421);
}

double NNfunction_ns_chi04_sL::synapse0x2b63e00() {
   return (neuron0x2b4aba0()*-0.318664);
}

double NNfunction_ns_chi04_sL::synapse0x2b63e40() {
   return (neuron0x2b4aee0()*0.610756);
}

double NNfunction_ns_chi04_sL::synapse0x2b63e80() {
   return (neuron0x2b4b220()*0.00932898);
}

double NNfunction_ns_chi04_sL::synapse0x2b63ec0() {
   return (neuron0x2b4b560()*0.0131243);
}

double NNfunction_ns_chi04_sL::synapse0x2b63f00() {
   return (neuron0x2b4b8a0()*-0.00479645);
}

double NNfunction_ns_chi04_sL::synapse0x2b63f40() {
   return (neuron0x2b4bbe0()*0.00808226);
}

double NNfunction_ns_chi04_sL::synapse0x2b63f80() {
   return (neuron0x2b4bf20()*-0.00462691);
}

double NNfunction_ns_chi04_sL::synapse0x2b63fc0() {
   return (neuron0x2b4c260()*-0.00203597);
}

double NNfunction_ns_chi04_sL::synapse0x2b64000() {
   return (neuron0x2b4c5a0()*0.0117562);
}

double NNfunction_ns_chi04_sL::synapse0x2b64040() {
   return (neuron0x2b4c8e0()*-0.00636061);
}

double NNfunction_ns_chi04_sL::synapse0x2b64080() {
   return (neuron0x2b4cc20()*0.0129265);
}

double NNfunction_ns_chi04_sL::synapse0x2b640c0() {
   return (neuron0x2b4cf60()*0.152185);
}

double NNfunction_ns_chi04_sL::synapse0x2b64100() {
   return (neuron0x2b4d2a0()*0.00302347);
}

double NNfunction_ns_chi04_sL::synapse0x2b64140() {
   return (neuron0x2b4d5e0()*-0.0134101);
}

double NNfunction_ns_chi04_sL::synapse0x2b64180() {
   return (neuron0x2b4d920()*-0.00345164);
}

double NNfunction_ns_chi04_sL::synapse0x2b63c10() {
   return (neuron0x2b4dc60()*-0.0031921);
}

double NNfunction_ns_chi04_sL::synapse0x2b63c50() {
   return (neuron0x2b4e1c0()*0.0107068);
}

double NNfunction_ns_chi04_sL::synapse0x2b642d0() {
   return (neuron0x2b4e3e0()*0.0154386);
}

double NNfunction_ns_chi04_sL::synapse0x2b64310() {
   return (neuron0x2b4e720()*-0.0034996);
}

double NNfunction_ns_chi04_sL::synapse0x2b64350() {
   return (neuron0x2b4ea60()*-0.0145676);
}

double NNfunction_ns_chi04_sL::synapse0x2b64390() {
   return (neuron0x2b4eda0()*0.00537598);
}

double NNfunction_ns_chi04_sL::synapse0x2b643d0() {
   return (neuron0x2b4f0e0()*-0.00839646);
}

double NNfunction_ns_chi04_sL::synapse0x2b64410() {
   return (neuron0x2b4f420()*-0.616955);
}

double NNfunction_ns_chi04_sL::synapse0x2b64790() {
   return (neuron0x2b4a860()*0.00873292);
}

double NNfunction_ns_chi04_sL::synapse0x2b647d0() {
   return (neuron0x2b4aba0()*-0.0129523);
}

double NNfunction_ns_chi04_sL::synapse0x2b64810() {
   return (neuron0x2b4aee0()*-0.0675924);
}

double NNfunction_ns_chi04_sL::synapse0x2b64850() {
   return (neuron0x2b4b220()*-2.00963);
}

double NNfunction_ns_chi04_sL::synapse0x2b64890() {
   return (neuron0x2b4b560()*0.000426123);
}

double NNfunction_ns_chi04_sL::synapse0x2b648d0() {
   return (neuron0x2b4b8a0()*0.00286765);
}

double NNfunction_ns_chi04_sL::synapse0x2b64910() {
   return (neuron0x2b4bbe0()*-0.00287396);
}

double NNfunction_ns_chi04_sL::synapse0x2b64950() {
   return (neuron0x2b4bf20()*-0.00714327);
}

double NNfunction_ns_chi04_sL::synapse0x2b64990() {
   return (neuron0x2b4c260()*0.0199005);
}

double NNfunction_ns_chi04_sL::synapse0x2b649d0() {
   return (neuron0x2b4c5a0()*0.00977681);
}

double NNfunction_ns_chi04_sL::synapse0x2b64a10() {
   return (neuron0x2b4c8e0()*0.0174878);
}

double NNfunction_ns_chi04_sL::synapse0x2b64a50() {
   return (neuron0x2b4cc20()*0.00315156);
}

double NNfunction_ns_chi04_sL::synapse0x2b64a90() {
   return (neuron0x2b4cf60()*0.285852);
}

double NNfunction_ns_chi04_sL::synapse0x2b64ad0() {
   return (neuron0x2b4d2a0()*-0.00293694);
}

double NNfunction_ns_chi04_sL::synapse0x2b64b10() {
   return (neuron0x2b4d5e0()*0.0151184);
}

double NNfunction_ns_chi04_sL::synapse0x2b64b50() {
   return (neuron0x2b4d920()*0.00182544);
}

double NNfunction_ns_chi04_sL::synapse0x2b645e0() {
   return (neuron0x2b4dc60()*-0.00238537);
}

double NNfunction_ns_chi04_sL::synapse0x2b64620() {
   return (neuron0x2b4e1c0()*0.00959418);
}

double NNfunction_ns_chi04_sL::synapse0x2b64ca0() {
   return (neuron0x2b4e3e0()*0.0061515);
}

double NNfunction_ns_chi04_sL::synapse0x2b64ce0() {
   return (neuron0x2b4e720()*0.00503952);
}

double NNfunction_ns_chi04_sL::synapse0x2b64d20() {
   return (neuron0x2b4ea60()*0.00601065);
}

double NNfunction_ns_chi04_sL::synapse0x2b64d60() {
   return (neuron0x2b4eda0()*0.0028513);
}

double NNfunction_ns_chi04_sL::synapse0x2b64da0() {
   return (neuron0x2b4f0e0()*0.00616034);
}

double NNfunction_ns_chi04_sL::synapse0x2b64de0() {
   return (neuron0x2b4f420()*-0.0190588);
}

double NNfunction_ns_chi04_sL::synapse0x2b65160() {
   return (neuron0x2b4a860()*-0.0613924);
}

double NNfunction_ns_chi04_sL::synapse0x2b59730() {
   return (neuron0x2b4aba0()*1.17074);
}

double NNfunction_ns_chi04_sL::synapse0x2b59770() {
   return (neuron0x2b4aee0()*0.0545038);
}

double NNfunction_ns_chi04_sL::synapse0x2b597b0() {
   return (neuron0x2b4b220()*0.464727);
}

double NNfunction_ns_chi04_sL::synapse0x2b59a00() {
   return (neuron0x2b4b560()*-0.555469);
}

double NNfunction_ns_chi04_sL::synapse0x2b59a40() {
   return (neuron0x2b4b8a0()*0.0577676);
}

double NNfunction_ns_chi04_sL::synapse0x2b59a80() {
   return (neuron0x2b4bbe0()*-0.2687);
}

double NNfunction_ns_chi04_sL::synapse0x2b59cd0() {
   return (neuron0x2b4bf20()*-0.622077);
}

double NNfunction_ns_chi04_sL::synapse0x2b59d10() {
   return (neuron0x2b4c260()*0.533584);
}

double NNfunction_ns_chi04_sL::synapse0x2b59f60() {
   return (neuron0x2b4c5a0()*-1.08448);
}

double NNfunction_ns_chi04_sL::synapse0x2b59fa0() {
   return (neuron0x2b4c8e0()*0.256781);
}

double NNfunction_ns_chi04_sL::synapse0x2b59fe0() {
   return (neuron0x2b4cc20()*0.0217089);
}

double NNfunction_ns_chi04_sL::synapse0x2b5a230() {
   return (neuron0x2b4cf60()*-0.241081);
}

double NNfunction_ns_chi04_sL::synapse0x2b5a270() {
   return (neuron0x2b4d2a0()*0.216608);
}

double NNfunction_ns_chi04_sL::synapse0x2b5a4c0() {
   return (neuron0x2b4d5e0()*0.190791);
}

double NNfunction_ns_chi04_sL::synapse0x2b5a500() {
   return (neuron0x2b4d920()*-0.168969);
}

double NNfunction_ns_chi04_sL::synapse0x2b64fb0() {
   return (neuron0x2b4dc60()*-0.144546);
}

double NNfunction_ns_chi04_sL::synapse0x2b64ff0() {
   return (neuron0x2b4e1c0()*0.789418);
}

double NNfunction_ns_chi04_sL::synapse0x2b5a650() {
   return (neuron0x2b4e3e0()*-0.349014);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ab60() {
   return (neuron0x2b4e720()*0.433309);
}

double NNfunction_ns_chi04_sL::synapse0x2b5aba0() {
   return (neuron0x2b4ea60()*-0.432794);
}

double NNfunction_ns_chi04_sL::synapse0x2b5abe0() {
   return (neuron0x2b4eda0()*0.0889629);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ae30() {
   return (neuron0x2b4f0e0()*0.0944849);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ae70() {
   return (neuron0x2b4f420()*0.891748);
}

double NNfunction_ns_chi04_sL::synapse0x2b5a720() {
   return (neuron0x2b4a860()*-2.21635);
}

double NNfunction_ns_chi04_sL::synapse0x2b5a760() {
   return (neuron0x2b4aba0()*-0.187179);
}

double NNfunction_ns_chi04_sL::synapse0x2b5a7a0() {
   return (neuron0x2b4aee0()*0.019442);
}

double NNfunction_ns_chi04_sL::synapse0x2b5a7e0() {
   return (neuron0x2b4b220()*0.206522);
}

double NNfunction_ns_chi04_sL::synapse0x2b5b160() {
   return (neuron0x2b4b560()*0.240006);
}

double NNfunction_ns_chi04_sL::synapse0x2b674b0() {
   return (neuron0x2b4b8a0()*0.193943);
}

double NNfunction_ns_chi04_sL::synapse0x2b674f0() {
   return (neuron0x2b4bbe0()*0.624637);
}

double NNfunction_ns_chi04_sL::synapse0x2b67530() {
   return (neuron0x2b4bf20()*0.0386297);
}

double NNfunction_ns_chi04_sL::synapse0x2b67570() {
   return (neuron0x2b4c260()*0.0897479);
}

double NNfunction_ns_chi04_sL::synapse0x2b675b0() {
   return (neuron0x2b4c5a0()*-0.155822);
}

double NNfunction_ns_chi04_sL::synapse0x2b675f0() {
   return (neuron0x2b4c8e0()*0.0407398);
}

double NNfunction_ns_chi04_sL::synapse0x2b67630() {
   return (neuron0x2b4cc20()*0.0375827);
}

double NNfunction_ns_chi04_sL::synapse0x2b67670() {
   return (neuron0x2b4cf60()*-0.0933376);
}

double NNfunction_ns_chi04_sL::synapse0x2b676b0() {
   return (neuron0x2b4d2a0()*-0.0760703);
}

double NNfunction_ns_chi04_sL::synapse0x2b676f0() {
   return (neuron0x2b4d5e0()*-0.147798);
}

double NNfunction_ns_chi04_sL::synapse0x2b67730() {
   return (neuron0x2b4d920()*-0.0170589);
}

double NNfunction_ns_chi04_sL::synapse0x2b5b040() {
   return (neuron0x2b4dc60()*-0.263561);
}

double NNfunction_ns_chi04_sL::synapse0x2b5b080() {
   return (neuron0x2b4e1c0()*-0.0147363);
}

double NNfunction_ns_chi04_sL::synapse0x2b67880() {
   return (neuron0x2b4e3e0()*-0.0886242);
}

double NNfunction_ns_chi04_sL::synapse0x2b678c0() {
   return (neuron0x2b4e720()*-0.0859353);
}

double NNfunction_ns_chi04_sL::synapse0x2b67900() {
   return (neuron0x2b4ea60()*-0.138415);
}

double NNfunction_ns_chi04_sL::synapse0x2b67940() {
   return (neuron0x2b4eda0()*-0.17742);
}

double NNfunction_ns_chi04_sL::synapse0x2b67980() {
   return (neuron0x2b4f0e0()*0.109155);
}

double NNfunction_ns_chi04_sL::synapse0x2b679c0() {
   return (neuron0x2b4f420()*-0.45826);
}

double NNfunction_ns_chi04_sL::synapse0x2b67d40() {
   return (neuron0x2b4a860()*-0.0328891);
}

double NNfunction_ns_chi04_sL::synapse0x2b67d80() {
   return (neuron0x2b4aba0()*-5.91397);
}

double NNfunction_ns_chi04_sL::synapse0x2b67dc0() {
   return (neuron0x2b4aee0()*6.89356);
}

double NNfunction_ns_chi04_sL::synapse0x2b67e00() {
   return (neuron0x2b4b220()*0.0237293);
}

double NNfunction_ns_chi04_sL::synapse0x2b67e40() {
   return (neuron0x2b4b560()*0.0885207);
}

double NNfunction_ns_chi04_sL::synapse0x2b67e80() {
   return (neuron0x2b4b8a0()*0.00461099);
}

double NNfunction_ns_chi04_sL::synapse0x2b67ec0() {
   return (neuron0x2b4bbe0()*0.00936754);
}

double NNfunction_ns_chi04_sL::synapse0x2b67f00() {
   return (neuron0x2b4bf20()*0.00337271);
}

double NNfunction_ns_chi04_sL::synapse0x2b67f40() {
   return (neuron0x2b4c260()*-0.0574497);
}

double NNfunction_ns_chi04_sL::synapse0x2b67f80() {
   return (neuron0x2b4c5a0()*0.0084327);
}

double NNfunction_ns_chi04_sL::synapse0x2b67fc0() {
   return (neuron0x2b4c8e0()*0.00227215);
}

double NNfunction_ns_chi04_sL::synapse0x2b68000() {
   return (neuron0x2b4cc20()*0.0660213);
}

double NNfunction_ns_chi04_sL::synapse0x2b68040() {
   return (neuron0x2b4cf60()*0.172925);
}

double NNfunction_ns_chi04_sL::synapse0x2b68080() {
   return (neuron0x2b4d2a0()*0.0272503);
}

double NNfunction_ns_chi04_sL::synapse0x2b680c0() {
   return (neuron0x2b4d5e0()*0.00430023);
}

double NNfunction_ns_chi04_sL::synapse0x2b68100() {
   return (neuron0x2b4d920()*-0.0112831);
}

double NNfunction_ns_chi04_sL::synapse0x2b67b90() {
   return (neuron0x2b4dc60()*-0.0288593);
}

double NNfunction_ns_chi04_sL::synapse0x2b67bd0() {
   return (neuron0x2b4e1c0()*-0.0107717);
}

double NNfunction_ns_chi04_sL::synapse0x2b68250() {
   return (neuron0x2b4e3e0()*-0.00481517);
}

double NNfunction_ns_chi04_sL::synapse0x2b68290() {
   return (neuron0x2b4e720()*-0.0510747);
}

double NNfunction_ns_chi04_sL::synapse0x2b682d0() {
   return (neuron0x2b4ea60()*0.0145746);
}

double NNfunction_ns_chi04_sL::synapse0x2b68310() {
   return (neuron0x2b4eda0()*0.0161);
}

double NNfunction_ns_chi04_sL::synapse0x2b68350() {
   return (neuron0x2b4f0e0()*0.0112644);
}

double NNfunction_ns_chi04_sL::synapse0x2b68390() {
   return (neuron0x2b4f420()*-0.256076);
}

double NNfunction_ns_chi04_sL::synapse0x2b68710() {
   return (neuron0x2b4a860()*0.000661122);
}

double NNfunction_ns_chi04_sL::synapse0x2b68750() {
   return (neuron0x2b4aba0()*-0.0469659);
}

double NNfunction_ns_chi04_sL::synapse0x2b68790() {
   return (neuron0x2b4aee0()*0.0261466);
}

double NNfunction_ns_chi04_sL::synapse0x2b687d0() {
   return (neuron0x2b4b220()*2.16221);
}

double NNfunction_ns_chi04_sL::synapse0x2b68810() {
   return (neuron0x2b4b560()*-0.0276688);
}

double NNfunction_ns_chi04_sL::synapse0x2b68850() {
   return (neuron0x2b4b8a0()*-0.000991665);
}

double NNfunction_ns_chi04_sL::synapse0x2b68890() {
   return (neuron0x2b4bbe0()*-0.0124286);
}

double NNfunction_ns_chi04_sL::synapse0x2b688d0() {
   return (neuron0x2b4bf20()*-0.00318672);
}

double NNfunction_ns_chi04_sL::synapse0x2b68910() {
   return (neuron0x2b4c260()*-0.00515743);
}

double NNfunction_ns_chi04_sL::synapse0x2b68950() {
   return (neuron0x2b4c5a0()*-0.0041971);
}

double NNfunction_ns_chi04_sL::synapse0x2b68990() {
   return (neuron0x2b4c8e0()*0.00986505);
}

double NNfunction_ns_chi04_sL::synapse0x2b689d0() {
   return (neuron0x2b4cc20()*0.00895928);
}

double NNfunction_ns_chi04_sL::synapse0x2b68a10() {
   return (neuron0x2b4cf60()*-0.20975);
}

double NNfunction_ns_chi04_sL::synapse0x2b68a50() {
   return (neuron0x2b4d2a0()*-0.0133601);
}

double NNfunction_ns_chi04_sL::synapse0x2b68a90() {
   return (neuron0x2b4d5e0()*-0.00792738);
}

double NNfunction_ns_chi04_sL::synapse0x2b68ad0() {
   return (neuron0x2b4d920()*0.0058155);
}

double NNfunction_ns_chi04_sL::synapse0x2b68560() {
   return (neuron0x2b4dc60()*-0.00430555);
}

double NNfunction_ns_chi04_sL::synapse0x2b685a0() {
   return (neuron0x2b4e1c0()*0.0232802);
}

double NNfunction_ns_chi04_sL::synapse0x2b68c20() {
   return (neuron0x2b4e3e0()*0.00147317);
}

double NNfunction_ns_chi04_sL::synapse0x2b68c60() {
   return (neuron0x2b4e720()*0.00286933);
}

double NNfunction_ns_chi04_sL::synapse0x2b68ca0() {
   return (neuron0x2b4ea60()*0.00185091);
}

double NNfunction_ns_chi04_sL::synapse0x2b68ce0() {
   return (neuron0x2b4eda0()*-0.00762164);
}

double NNfunction_ns_chi04_sL::synapse0x2b68d20() {
   return (neuron0x2b4f0e0()*0.00417977);
}

double NNfunction_ns_chi04_sL::synapse0x2b68d60() {
   return (neuron0x2b4f420()*0.0215806);
}

double NNfunction_ns_chi04_sL::synapse0x2b690e0() {
   return (neuron0x2b4a860()*0.011551);
}

double NNfunction_ns_chi04_sL::synapse0x2b69120() {
   return (neuron0x2b4aba0()*1.74371);
}

double NNfunction_ns_chi04_sL::synapse0x2b69160() {
   return (neuron0x2b4aee0()*1.23876);
}

double NNfunction_ns_chi04_sL::synapse0x2b691a0() {
   return (neuron0x2b4b220()*0.00328935);
}

double NNfunction_ns_chi04_sL::synapse0x2b691e0() {
   return (neuron0x2b4b560()*-0.0517025);
}

double NNfunction_ns_chi04_sL::synapse0x2b69220() {
   return (neuron0x2b4b8a0()*0.0344622);
}

double NNfunction_ns_chi04_sL::synapse0x2b69260() {
   return (neuron0x2b4bbe0()*-0.0384304);
}

double NNfunction_ns_chi04_sL::synapse0x2b692a0() {
   return (neuron0x2b4bf20()*-0.0445355);
}

double NNfunction_ns_chi04_sL::synapse0x2b692e0() {
   return (neuron0x2b4c260()*0.0210767);
}

double NNfunction_ns_chi04_sL::synapse0x2b69320() {
   return (neuron0x2b4c5a0()*0.017767);
}

double NNfunction_ns_chi04_sL::synapse0x2b69360() {
   return (neuron0x2b4c8e0()*-0.0862436);
}

double NNfunction_ns_chi04_sL::synapse0x2b693a0() {
   return (neuron0x2b4cc20()*0.0208155);
}

double NNfunction_ns_chi04_sL::synapse0x2b693e0() {
   return (neuron0x2b4cf60()*0.211893);
}

double NNfunction_ns_chi04_sL::synapse0x2b69420() {
   return (neuron0x2b4d2a0()*0.0291022);
}

double NNfunction_ns_chi04_sL::synapse0x2b69460() {
   return (neuron0x2b4d5e0()*-0.0619685);
}

double NNfunction_ns_chi04_sL::synapse0x2b694a0() {
   return (neuron0x2b4d920()*-0.0224993);
}

double NNfunction_ns_chi04_sL::synapse0x2b68f30() {
   return (neuron0x2b4dc60()*-0.0456897);
}

double NNfunction_ns_chi04_sL::synapse0x2b68f70() {
   return (neuron0x2b4e1c0()*-0.00484015);
}

double NNfunction_ns_chi04_sL::synapse0x2b695f0() {
   return (neuron0x2b4e3e0()*0.00591604);
}

double NNfunction_ns_chi04_sL::synapse0x2b69630() {
   return (neuron0x2b4e720()*0.0727292);
}

double NNfunction_ns_chi04_sL::synapse0x2b69670() {
   return (neuron0x2b4ea60()*-0.0169102);
}

double NNfunction_ns_chi04_sL::synapse0x2b696b0() {
   return (neuron0x2b4eda0()*-0.0271717);
}

double NNfunction_ns_chi04_sL::synapse0x2b696f0() {
   return (neuron0x2b4f0e0()*0.0499725);
}

double NNfunction_ns_chi04_sL::synapse0x2b69730() {
   return (neuron0x2b4f420()*-0.013791);
}

double NNfunction_ns_chi04_sL::synapse0x2b69ab0() {
   return (neuron0x2b4a860()*-0.0373328);
}

double NNfunction_ns_chi04_sL::synapse0x2b69af0() {
   return (neuron0x2b4aba0()*1.72985);
}

double NNfunction_ns_chi04_sL::synapse0x2b69b30() {
   return (neuron0x2b4aee0()*2.54635);
}

double NNfunction_ns_chi04_sL::synapse0x2b69b70() {
   return (neuron0x2b4b220()*-0.0227361);
}

double NNfunction_ns_chi04_sL::synapse0x2b69bb0() {
   return (neuron0x2b4b560()*0.00055469);
}

double NNfunction_ns_chi04_sL::synapse0x2b69bf0() {
   return (neuron0x2b4b8a0()*0.0287073);
}

double NNfunction_ns_chi04_sL::synapse0x2b69c30() {
   return (neuron0x2b4bbe0()*0.0375627);
}

double NNfunction_ns_chi04_sL::synapse0x2b69c70() {
   return (neuron0x2b4bf20()*0.0286163);
}

double NNfunction_ns_chi04_sL::synapse0x2b69cb0() {
   return (neuron0x2b4c260()*-0.0110592);
}

double NNfunction_ns_chi04_sL::synapse0x2b69cf0() {
   return (neuron0x2b4c5a0()*-0.00229953);
}

double NNfunction_ns_chi04_sL::synapse0x2b69d30() {
   return (neuron0x2b4c8e0()*-0.0577478);
}

double NNfunction_ns_chi04_sL::synapse0x2b69d70() {
   return (neuron0x2b4cc20()*-0.0361265);
}

double NNfunction_ns_chi04_sL::synapse0x2b69db0() {
   return (neuron0x2b4cf60()*0.0294029);
}

double NNfunction_ns_chi04_sL::synapse0x2b69df0() {
   return (neuron0x2b4d2a0()*-0.0223255);
}

double NNfunction_ns_chi04_sL::synapse0x2b69e30() {
   return (neuron0x2b4d5e0()*-0.0292548);
}

double NNfunction_ns_chi04_sL::synapse0x2b69e70() {
   return (neuron0x2b4d920()*-0.00264674);
}

double NNfunction_ns_chi04_sL::synapse0x2b69900() {
   return (neuron0x2b4dc60()*0.0021069);
}

double NNfunction_ns_chi04_sL::synapse0x2b69940() {
   return (neuron0x2b4e1c0()*0.0198711);
}

double NNfunction_ns_chi04_sL::synapse0x2b69fc0() {
   return (neuron0x2b4e3e0()*-0.0665916);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a000() {
   return (neuron0x2b4e720()*-0.0650872);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a040() {
   return (neuron0x2b4ea60()*-0.0779552);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a080() {
   return (neuron0x2b4eda0()*0.0243719);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a0c0() {
   return (neuron0x2b4f0e0()*0.0166757);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a100() {
   return (neuron0x2b4f420()*1.80269);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a480() {
   return (neuron0x2b4a860()*0.0411295);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a4c0() {
   return (neuron0x2b4aba0()*-0.0832946);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a500() {
   return (neuron0x2b4aee0()*-1.30659);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a540() {
   return (neuron0x2b4b220()*-0.0196729);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a580() {
   return (neuron0x2b4b560()*0.00366944);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a5c0() {
   return (neuron0x2b4b8a0()*0.00429422);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a600() {
   return (neuron0x2b4bbe0()*-0.0160273);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a640() {
   return (neuron0x2b4bf20()*-0.0227463);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a680() {
   return (neuron0x2b4c260()*-0.0170119);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a6c0() {
   return (neuron0x2b4c5a0()*-0.010046);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a700() {
   return (neuron0x2b4c8e0()*0.0148582);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a740() {
   return (neuron0x2b4cc20()*0.00347872);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a780() {
   return (neuron0x2b4cf60()*-0.363865);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a7c0() {
   return (neuron0x2b4d2a0()*0.0011727);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a800() {
   return (neuron0x2b4d5e0()*-0.00171603);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a840() {
   return (neuron0x2b4d920()*0.00326802);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a2d0() {
   return (neuron0x2b4dc60()*-0.002652);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a310() {
   return (neuron0x2b4e1c0()*0.0175766);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a990() {
   return (neuron0x2b4e3e0()*0.00371028);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a9d0() {
   return (neuron0x2b4e720()*0.0106629);
}

double NNfunction_ns_chi04_sL::synapse0x2b6aa10() {
   return (neuron0x2b4ea60()*0.00283324);
}

double NNfunction_ns_chi04_sL::synapse0x2b6aa50() {
   return (neuron0x2b4eda0()*-0.0059737);
}

double NNfunction_ns_chi04_sL::synapse0x2b6aa90() {
   return (neuron0x2b4f0e0()*-0.00617916);
}

double NNfunction_ns_chi04_sL::synapse0x2b6aad0() {
   return (neuron0x2b4f420()*-0.212208);
}

double NNfunction_ns_chi04_sL::synapse0x2b6ae50() {
   return (neuron0x2b4a860()*0.0175053);
}

double NNfunction_ns_chi04_sL::synapse0x2b6ae90() {
   return (neuron0x2b4aba0()*0.914162);
}

double NNfunction_ns_chi04_sL::synapse0x2b6aed0() {
   return (neuron0x2b4aee0()*-0.0576348);
}

double NNfunction_ns_chi04_sL::synapse0x2b6af10() {
   return (neuron0x2b4b220()*-0.00904987);
}

double NNfunction_ns_chi04_sL::synapse0x2b6af50() {
   return (neuron0x2b4b560()*0.000262686);
}

double NNfunction_ns_chi04_sL::synapse0x2b6af90() {
   return (neuron0x2b4b8a0()*0.0187841);
}

double NNfunction_ns_chi04_sL::synapse0x2b6afd0() {
   return (neuron0x2b4bbe0()*0.00293048);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b010() {
   return (neuron0x2b4bf20()*-0.0110674);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b050() {
   return (neuron0x2b4c260()*-0.010389);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b090() {
   return (neuron0x2b4c5a0()*-0.00835737);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b0d0() {
   return (neuron0x2b4c8e0()*0.0101296);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b110() {
   return (neuron0x2b4cc20()*0.0152812);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b150() {
   return (neuron0x2b4cf60()*0.0558912);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b190() {
   return (neuron0x2b4d2a0()*0.0297996);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b1d0() {
   return (neuron0x2b4d5e0()*-0.0113408);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b210() {
   return (neuron0x2b4d920()*-0.00554067);
}

double NNfunction_ns_chi04_sL::synapse0x2b6aca0() {
   return (neuron0x2b4dc60()*0.021538);
}

double NNfunction_ns_chi04_sL::synapse0x2b6ace0() {
   return (neuron0x2b4e1c0()*0.0162496);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b360() {
   return (neuron0x2b4e3e0()*-0.00924619);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b3a0() {
   return (neuron0x2b4e720()*0.0144916);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b3e0() {
   return (neuron0x2b4ea60()*0.00560092);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b420() {
   return (neuron0x2b4eda0()*0.00737557);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b460() {
   return (neuron0x2b4f0e0()*0.00363278);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b4a0() {
   return (neuron0x2b4f420()*0.766623);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b820() {
   return (neuron0x2b4a860()*0.00482744);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b860() {
   return (neuron0x2b4aba0()*-3.65054);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b8a0() {
   return (neuron0x2b4aee0()*0.776878);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b8e0() {
   return (neuron0x2b4b220()*0.00642913);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b920() {
   return (neuron0x2b4b560()*-0.01458);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b960() {
   return (neuron0x2b4b8a0()*-0.00201897);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b9a0() {
   return (neuron0x2b4bbe0()*0.0100752);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b9e0() {
   return (neuron0x2b4bf20()*-0.0112802);
}

double NNfunction_ns_chi04_sL::synapse0x2b6ba20() {
   return (neuron0x2b4c260()*-0.0322947);
}

double NNfunction_ns_chi04_sL::synapse0x2b6ba60() {
   return (neuron0x2b4c5a0()*0.0189114);
}

double NNfunction_ns_chi04_sL::synapse0x2b6baa0() {
   return (neuron0x2b4c8e0()*-0.0368237);
}

double NNfunction_ns_chi04_sL::synapse0x2b6bae0() {
   return (neuron0x2b4cc20()*0.0186181);
}

double NNfunction_ns_chi04_sL::synapse0x2b6bb20() {
   return (neuron0x2b4cf60()*0.0118397);
}

double NNfunction_ns_chi04_sL::synapse0x2b6bb60() {
   return (neuron0x2b4d2a0()*0.0138519);
}

double NNfunction_ns_chi04_sL::synapse0x2b6bba0() {
   return (neuron0x2b4d5e0()*-0.0306575);
}

double NNfunction_ns_chi04_sL::synapse0x2b6bbe0() {
   return (neuron0x2b4d920()*-0.0410239);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b670() {
   return (neuron0x2b4dc60()*0.00152438);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b6b0() {
   return (neuron0x2b4e1c0()*-0.0246535);
}

double NNfunction_ns_chi04_sL::synapse0x2b6bd30() {
   return (neuron0x2b4e3e0()*-0.041005);
}

double NNfunction_ns_chi04_sL::synapse0x2b6bd70() {
   return (neuron0x2b4e720()*0.00222786);
}

double NNfunction_ns_chi04_sL::synapse0x2b6bdb0() {
   return (neuron0x2b4ea60()*0.0133493);
}

double NNfunction_ns_chi04_sL::synapse0x2b6bdf0() {
   return (neuron0x2b4eda0()*0.0270582);
}

double NNfunction_ns_chi04_sL::synapse0x2b6be30() {
   return (neuron0x2b4f0e0()*-0.00779721);
}

double NNfunction_ns_chi04_sL::synapse0x2b6be70() {
   return (neuron0x2b4f420()*-3.21381);
}

double NNfunction_ns_chi04_sL::synapse0x2b54920() {
   return (neuron0x2b4a860()*-0.0124587);
}

double NNfunction_ns_chi04_sL::synapse0x2b54960() {
   return (neuron0x2b4aba0()*1.41701);
}

double NNfunction_ns_chi04_sL::synapse0x2b549a0() {
   return (neuron0x2b4aee0()*-0.506385);
}

double NNfunction_ns_chi04_sL::synapse0x2b549e0() {
   return (neuron0x2b4b220()*0.0258884);
}

double NNfunction_ns_chi04_sL::synapse0x2b54a20() {
   return (neuron0x2b4b560()*-0.033655);
}

double NNfunction_ns_chi04_sL::synapse0x2b54a60() {
   return (neuron0x2b4b8a0()*-0.000171844);
}

double NNfunction_ns_chi04_sL::synapse0x2b54aa0() {
   return (neuron0x2b4bbe0()*-0.0542106);
}

double NNfunction_ns_chi04_sL::synapse0x2b54ae0() {
   return (neuron0x2b4bf20()*-0.0215313);
}

double NNfunction_ns_chi04_sL::synapse0x2b6c600() {
   return (neuron0x2b4c260()*0.0707395);
}

double NNfunction_ns_chi04_sL::synapse0x2b6c640() {
   return (neuron0x2b4c5a0()*0.0355264);
}

double NNfunction_ns_chi04_sL::synapse0x2b6c680() {
   return (neuron0x2b4c8e0()*-0.0309858);
}

double NNfunction_ns_chi04_sL::synapse0x2b6c6c0() {
   return (neuron0x2b4cc20()*0.0122112);
}

double NNfunction_ns_chi04_sL::synapse0x2b6c700() {
   return (neuron0x2b4cf60()*-0.00778561);
}

double NNfunction_ns_chi04_sL::synapse0x2b6c740() {
   return (neuron0x2b4d2a0()*0.00608278);
}

double NNfunction_ns_chi04_sL::synapse0x2b6c780() {
   return (neuron0x2b4d5e0()*-0.0187709);
}

double NNfunction_ns_chi04_sL::synapse0x2b6c7c0() {
   return (neuron0x2b4d920()*-0.0197172);
}

double NNfunction_ns_chi04_sL::synapse0x2b6c040() {
   return (neuron0x2b4dc60()*0.0393416);
}

double NNfunction_ns_chi04_sL::synapse0x2b6c080() {
   return (neuron0x2b4e1c0()*-0.0221895);
}

double NNfunction_ns_chi04_sL::synapse0x2b6c910() {
   return (neuron0x2b4e3e0()*0.0473126);
}

double NNfunction_ns_chi04_sL::synapse0x2b6c950() {
   return (neuron0x2b4e720()*0.0795255);
}

double NNfunction_ns_chi04_sL::synapse0x2b6c990() {
   return (neuron0x2b4ea60()*-0.0102875);
}

double NNfunction_ns_chi04_sL::synapse0x2b6c9d0() {
   return (neuron0x2b4eda0()*-0.0102071);
}

double NNfunction_ns_chi04_sL::synapse0x2b6ca10() {
   return (neuron0x2b4f0e0()*-0.00923629);
}

double NNfunction_ns_chi04_sL::synapse0x2b6ca50() {
   return (neuron0x2b4f420()*-0.734092);
}

double NNfunction_ns_chi04_sL::synapse0x2b6cdd0() {
   return (neuron0x2b4a860()*0.189694);
}

double NNfunction_ns_chi04_sL::synapse0x2b6ce10() {
   return (neuron0x2b4aba0()*-1.17929);
}

double NNfunction_ns_chi04_sL::synapse0x2b6ce50() {
   return (neuron0x2b4aee0()*1.54406);
}

double NNfunction_ns_chi04_sL::synapse0x2b6ce90() {
   return (neuron0x2b4b220()*0.0667603);
}

double NNfunction_ns_chi04_sL::synapse0x2b6ced0() {
   return (neuron0x2b4b560()*-0.0423062);
}

double NNfunction_ns_chi04_sL::synapse0x2b6cf10() {
   return (neuron0x2b4b8a0()*-0.024992);
}

double NNfunction_ns_chi04_sL::synapse0x2b6cf50() {
   return (neuron0x2b4bbe0()*-0.0612684);
}

double NNfunction_ns_chi04_sL::synapse0x2b6cf90() {
   return (neuron0x2b4bf20()*0.0967125);
}

double NNfunction_ns_chi04_sL::synapse0x2b6cfd0() {
   return (neuron0x2b4c260()*0.0534704);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d010() {
   return (neuron0x2b4c5a0()*0.0558557);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d050() {
   return (neuron0x2b4c8e0()*-0.0400345);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d090() {
   return (neuron0x2b4cc20()*0.0756834);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d0d0() {
   return (neuron0x2b4cf60()*0.385427);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d110() {
   return (neuron0x2b4d2a0()*0.0212693);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d150() {
   return (neuron0x2b4d5e0()*-0.00512766);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d190() {
   return (neuron0x2b4d920()*-0.0440023);
}

double NNfunction_ns_chi04_sL::synapse0x2b6cc20() {
   return (neuron0x2b4dc60()*-0.0528254);
}

double NNfunction_ns_chi04_sL::synapse0x2b6cc60() {
   return (neuron0x2b4e1c0()*-0.200615);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d2e0() {
   return (neuron0x2b4e3e0()*0.0916794);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d320() {
   return (neuron0x2b4e720()*0.0710084);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d360() {
   return (neuron0x2b4ea60()*0.00654044);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d3a0() {
   return (neuron0x2b4eda0()*-0.0236873);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d3e0() {
   return (neuron0x2b4f0e0()*-0.067947);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d420() {
   return (neuron0x2b4f420()*1.65183);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d7a0() {
   return (neuron0x2b4a860()*-0.0303662);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d7e0() {
   return (neuron0x2b4aba0()*-0.063731);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d820() {
   return (neuron0x2b4aee0()*-0.875962);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d860() {
   return (neuron0x2b4b220()*0.0701621);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d8a0() {
   return (neuron0x2b4b560()*-0.022179);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d8e0() {
   return (neuron0x2b4b8a0()*-0.0490873);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d920() {
   return (neuron0x2b4bbe0()*-0.0261257);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d960() {
   return (neuron0x2b4bf20()*0.0226245);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d9a0() {
   return (neuron0x2b4c260()*0.00366479);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d9e0() {
   return (neuron0x2b4c5a0()*-0.000247458);
}

double NNfunction_ns_chi04_sL::synapse0x2b6da20() {
   return (neuron0x2b4c8e0()*-0.0425943);
}

double NNfunction_ns_chi04_sL::synapse0x2b6da60() {
   return (neuron0x2b4cc20()*-0.0385589);
}

double NNfunction_ns_chi04_sL::synapse0x2b6daa0() {
   return (neuron0x2b4cf60()*0.686494);
}

double NNfunction_ns_chi04_sL::synapse0x2b6dae0() {
   return (neuron0x2b4d2a0()*-0.0813059);
}

double NNfunction_ns_chi04_sL::synapse0x2b6db20() {
   return (neuron0x2b4d5e0()*0.0158254);
}

double NNfunction_ns_chi04_sL::synapse0x2b6db60() {
   return (neuron0x2b4d920()*0.00552231);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d5f0() {
   return (neuron0x2b4dc60()*-0.0864644);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d630() {
   return (neuron0x2b4e1c0()*-0.0348794);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e160() {
   return (neuron0x2b4e3e0()*-0.00126431);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e1a0() {
   return (neuron0x2b4e720()*-0.0279065);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e1e0() {
   return (neuron0x2b4ea60()*-0.0176165);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e220() {
   return (neuron0x2b4eda0()*-0.0134478);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e260() {
   return (neuron0x2b4f0e0()*0.00951902);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e2a0() {
   return (neuron0x2b4f420()*0.418135);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e620() {
   return (neuron0x2b4a860()*-0.0392988);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e660() {
   return (neuron0x2b4aba0()*0.0680125);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e6a0() {
   return (neuron0x2b4aee0()*-0.00352054);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e6e0() {
   return (neuron0x2b4b220()*-0.050642);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e720() {
   return (neuron0x2b4b560()*-0.0210827);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e760() {
   return (neuron0x2b4b8a0()*0.00326586);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e7a0() {
   return (neuron0x2b4bbe0()*-0.00145445);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e7e0() {
   return (neuron0x2b4bf20()*0.0122548);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e820() {
   return (neuron0x2b4c260()*0.0147113);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e860() {
   return (neuron0x2b4c5a0()*0.0169865);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e8a0() {
   return (neuron0x2b4c8e0()*-0.0126241);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e8e0() {
   return (neuron0x2b4cc20()*-0.0104137);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e920() {
   return (neuron0x2b4cf60()*-0.719263);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e960() {
   return (neuron0x2b4d2a0()*-0.0144777);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e9a0() {
   return (neuron0x2b4d5e0()*-0.00691593);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e9e0() {
   return (neuron0x2b4d920()*0.000697657);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e470() {
   return (neuron0x2b4dc60()*-0.00865986);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e4b0() {
   return (neuron0x2b4e1c0()*-0.00761834);
}

double NNfunction_ns_chi04_sL::synapse0x2b5eb30() {
   return (neuron0x2b4e3e0()*0.00334839);
}

double NNfunction_ns_chi04_sL::synapse0x2b5eb70() {
   return (neuron0x2b4e720()*-0.00775743);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ebb0() {
   return (neuron0x2b4ea60()*-0.00646464);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ebf0() {
   return (neuron0x2b4eda0()*-0.00424998);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ec30() {
   return (neuron0x2b4f0e0()*0.0205452);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ec70() {
   return (neuron0x2b4f420()*0.101924);
}

double NNfunction_ns_chi04_sL::synapse0x2b5eff0() {
   return (neuron0x2b4a860()*0.0235339);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f030() {
   return (neuron0x2b4aba0()*2.97112);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f070() {
   return (neuron0x2b4aee0()*-0.0384637);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f0b0() {
   return (neuron0x2b4b220()*0.0199881);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f0f0() {
   return (neuron0x2b4b560()*-0.0133637);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f130() {
   return (neuron0x2b4b8a0()*0.00879471);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f170() {
   return (neuron0x2b4bbe0()*0.00790995);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f1b0() {
   return (neuron0x2b4bf20()*0.0159019);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f1f0() {
   return (neuron0x2b4c260()*0.0347167);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f230() {
   return (neuron0x2b4c5a0()*-0.0189618);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f270() {
   return (neuron0x2b4c8e0()*-0.0026547);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f2b0() {
   return (neuron0x2b4cc20()*0.0298537);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f2f0() {
   return (neuron0x2b4cf60()*0.034447);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f330() {
   return (neuron0x2b4d2a0()*0.00543036);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f370() {
   return (neuron0x2b4d5e0()*0.00395572);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f3b0() {
   return (neuron0x2b4d920()*0.0123317);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ee40() {
   return (neuron0x2b4dc60()*-0.0228766);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ee80() {
   return (neuron0x2b4e1c0()*-0.0168138);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f500() {
   return (neuron0x2b4e3e0()*0.0147734);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f540() {
   return (neuron0x2b4e720()*-0.00579739);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f580() {
   return (neuron0x2b4ea60()*0.000496923);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f5c0() {
   return (neuron0x2b4eda0()*0.00573669);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f600() {
   return (neuron0x2b4f0e0()*-0.0144403);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f640() {
   return (neuron0x2b4f420()*-2.69952);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f9c0() {
   return (neuron0x2b4a860()*0.00605192);
}

double NNfunction_ns_chi04_sL::synapse0x2b5fa00() {
   return (neuron0x2b4aba0()*-0.0486425);
}

double NNfunction_ns_chi04_sL::synapse0x2b5fa40() {
   return (neuron0x2b4aee0()*0.0411642);
}

double NNfunction_ns_chi04_sL::synapse0x2b5fa80() {
   return (neuron0x2b4b220()*1.29655);
}

double NNfunction_ns_chi04_sL::synapse0x2b5fac0() {
   return (neuron0x2b4b560()*-0.0239548);
}

double NNfunction_ns_chi04_sL::synapse0x2b5fb00() {
   return (neuron0x2b4b8a0()*-0.00279568);
}

double NNfunction_ns_chi04_sL::synapse0x2b5fb40() {
   return (neuron0x2b4bbe0()*-0.00516926);
}

double NNfunction_ns_chi04_sL::synapse0x2b5fb80() {
   return (neuron0x2b4bf20()*-0.00211379);
}

double NNfunction_ns_chi04_sL::synapse0x2b5fbc0() {
   return (neuron0x2b4c260()*0.000631406);
}

double NNfunction_ns_chi04_sL::synapse0x2b5fc00() {
   return (neuron0x2b4c5a0()*0.0087842);
}

double NNfunction_ns_chi04_sL::synapse0x2b5fc40() {
   return (neuron0x2b4c8e0()*0.0118162);
}

double NNfunction_ns_chi04_sL::synapse0x2b5fc80() {
   return (neuron0x2b4cc20()*0.0129302);
}

double NNfunction_ns_chi04_sL::synapse0x2b5fcc0() {
   return (neuron0x2b4cf60()*-0.450326);
}

double NNfunction_ns_chi04_sL::synapse0x2b5fd00() {
   return (neuron0x2b4d2a0()*-0.0226212);
}

double NNfunction_ns_chi04_sL::synapse0x2b5fd40() {
   return (neuron0x2b4d5e0()*0.00238031);
}

double NNfunction_ns_chi04_sL::synapse0x2b5fd80() {
   return (neuron0x2b4d920()*0.0114347);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f810() {
   return (neuron0x2b4dc60()*-0.0240956);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f850() {
   return (neuron0x2b4e1c0()*0.0255464);
}

double NNfunction_ns_chi04_sL::synapse0x2b5fed0() {
   return (neuron0x2b4e3e0()*0.0106466);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ff10() {
   return (neuron0x2b4e720()*0.00339839);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ff50() {
   return (neuron0x2b4ea60()*0.00757616);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ff90() {
   return (neuron0x2b4eda0()*-0.0120147);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ffd0() {
   return (neuron0x2b4f0e0()*0.00642627);
}

double NNfunction_ns_chi04_sL::synapse0x2b60010() {
   return (neuron0x2b4f420()*-0.00340899);
}

double NNfunction_ns_chi04_sL::synapse0x2b71ee0() {
   return (neuron0x2b4a860()*0.65696);
}

double NNfunction_ns_chi04_sL::synapse0x2b71f20() {
   return (neuron0x2b4aba0()*-0.192707);
}

double NNfunction_ns_chi04_sL::synapse0x2b71f60() {
   return (neuron0x2b4aee0()*0.0812447);
}

double NNfunction_ns_chi04_sL::synapse0x2b71fa0() {
   return (neuron0x2b4b220()*0.698833);
}

double NNfunction_ns_chi04_sL::synapse0x2b71fe0() {
   return (neuron0x2b4b560()*0.112377);
}

double NNfunction_ns_chi04_sL::synapse0x2b72020() {
   return (neuron0x2b4b8a0()*0.0134472);
}

double NNfunction_ns_chi04_sL::synapse0x2b72060() {
   return (neuron0x2b4bbe0()*-0.661646);
}

double NNfunction_ns_chi04_sL::synapse0x2b720a0() {
   return (neuron0x2b4bf20()*-0.259907);
}

double NNfunction_ns_chi04_sL::synapse0x2b720e0() {
   return (neuron0x2b4c260()*0.439291);
}

double NNfunction_ns_chi04_sL::synapse0x2b72120() {
   return (neuron0x2b4c5a0()*-0.543373);
}

double NNfunction_ns_chi04_sL::synapse0x2b72160() {
   return (neuron0x2b4c8e0()*-0.0728828);
}

double NNfunction_ns_chi04_sL::synapse0x2b721a0() {
   return (neuron0x2b4cc20()*0.42496);
}

double NNfunction_ns_chi04_sL::synapse0x2b721e0() {
   return (neuron0x2b4cf60()*-0.0060897);
}

double NNfunction_ns_chi04_sL::synapse0x2b72220() {
   return (neuron0x2b4d2a0()*-0.204388);
}

double NNfunction_ns_chi04_sL::synapse0x2b72260() {
   return (neuron0x2b4d5e0()*-0.462323);
}

double NNfunction_ns_chi04_sL::synapse0x2b722a0() {
   return (neuron0x2b4d920()*-0.0253266);
}

double NNfunction_ns_chi04_sL::synapse0x2b60050() {
   return (neuron0x2b4dc60()*-0.227621);
}

double NNfunction_ns_chi04_sL::synapse0x2b60090() {
   return (neuron0x2b4e1c0()*0.118664);
}

double NNfunction_ns_chi04_sL::synapse0x2b723f0() {
   return (neuron0x2b4e3e0()*-0.354717);
}

double NNfunction_ns_chi04_sL::synapse0x2b72430() {
   return (neuron0x2b4e720()*0.0420567);
}

double NNfunction_ns_chi04_sL::synapse0x2b72470() {
   return (neuron0x2b4ea60()*-0.327018);
}

double NNfunction_ns_chi04_sL::synapse0x2b724b0() {
   return (neuron0x2b4eda0()*-0.123141);
}

double NNfunction_ns_chi04_sL::synapse0x2b724f0() {
   return (neuron0x2b4f0e0()*0.836912);
}

double NNfunction_ns_chi04_sL::synapse0x2b72530() {
   return (neuron0x2b4f420()*-0.630569);
}

double NNfunction_ns_chi04_sL::synapse0x2b728b0() {
   return (neuron0x2b4a860()*0.325688);
}

double NNfunction_ns_chi04_sL::synapse0x2b728f0() {
   return (neuron0x2b4aba0()*0.645961);
}

double NNfunction_ns_chi04_sL::synapse0x2b72930() {
   return (neuron0x2b4aee0()*0.312824);
}

double NNfunction_ns_chi04_sL::synapse0x2b72970() {
   return (neuron0x2b4b220()*0.186265);
}

double NNfunction_ns_chi04_sL::synapse0x2b729b0() {
   return (neuron0x2b4b560()*0.0913772);
}

double NNfunction_ns_chi04_sL::synapse0x2b729f0() {
   return (neuron0x2b4b8a0()*-0.0375619);
}

double NNfunction_ns_chi04_sL::synapse0x2b72a30() {
   return (neuron0x2b4bbe0()*-0.93782);
}

double NNfunction_ns_chi04_sL::synapse0x2b72a70() {
   return (neuron0x2b4bf20()*-0.150125);
}

double NNfunction_ns_chi04_sL::synapse0x2b72ab0() {
   return (neuron0x2b4c260()*-0.222815);
}

double NNfunction_ns_chi04_sL::synapse0x2b72af0() {
   return (neuron0x2b4c5a0()*0.0798122);
}

double NNfunction_ns_chi04_sL::synapse0x2b72b30() {
   return (neuron0x2b4c8e0()*-0.0622178);
}

double NNfunction_ns_chi04_sL::synapse0x2b72b70() {
   return (neuron0x2b4cc20()*0.406488);
}

double NNfunction_ns_chi04_sL::synapse0x2b72bb0() {
   return (neuron0x2b4cf60()*-0.0804247);
}

double NNfunction_ns_chi04_sL::synapse0x2b72bf0() {
   return (neuron0x2b4d2a0()*0.140638);
}

double NNfunction_ns_chi04_sL::synapse0x2b72c30() {
   return (neuron0x2b4d5e0()*-0.43511);
}

double NNfunction_ns_chi04_sL::synapse0x2b72c70() {
   return (neuron0x2b4d920()*0.219087);
}

double NNfunction_ns_chi04_sL::synapse0x2b72700() {
   return (neuron0x2b4dc60()*-0.0417252);
}

double NNfunction_ns_chi04_sL::synapse0x2b72740() {
   return (neuron0x2b4e1c0()*0.00012413);
}

double NNfunction_ns_chi04_sL::synapse0x2b72dc0() {
   return (neuron0x2b4e3e0()*0.461494);
}

double NNfunction_ns_chi04_sL::synapse0x2b72e00() {
   return (neuron0x2b4e720()*0.289637);
}

double NNfunction_ns_chi04_sL::synapse0x2b72e40() {
   return (neuron0x2b4ea60()*0.22595);
}

double NNfunction_ns_chi04_sL::synapse0x2b72e80() {
   return (neuron0x2b4eda0()*-0.0342297);
}

double NNfunction_ns_chi04_sL::synapse0x2b72ec0() {
   return (neuron0x2b4f0e0()*-0.0234491);
}

double NNfunction_ns_chi04_sL::synapse0x2b72f00() {
   return (neuron0x2b4f420()*-0.430865);
}

double NNfunction_ns_chi04_sL::synapse0x2b73280() {
   return (neuron0x2b4a860()*0.153664);
}

double NNfunction_ns_chi04_sL::synapse0x2b732c0() {
   return (neuron0x2b4aba0()*-0.0623794);
}

double NNfunction_ns_chi04_sL::synapse0x2b73300() {
   return (neuron0x2b4aee0()*1.98514);
}

double NNfunction_ns_chi04_sL::synapse0x2b73340() {
   return (neuron0x2b4b220()*-0.322443);
}

double NNfunction_ns_chi04_sL::synapse0x2b73380() {
   return (neuron0x2b4b560()*-0.130704);
}

double NNfunction_ns_chi04_sL::synapse0x2b733c0() {
   return (neuron0x2b4b8a0()*0.123929);
}

double NNfunction_ns_chi04_sL::synapse0x2b73400() {
   return (neuron0x2b4bbe0()*0.0860295);
}

double NNfunction_ns_chi04_sL::synapse0x2b73440() {
   return (neuron0x2b4bf20()*-0.0330008);
}

double NNfunction_ns_chi04_sL::synapse0x2b73480() {
   return (neuron0x2b4c260()*0.192017);
}

double NNfunction_ns_chi04_sL::synapse0x2b734c0() {
   return (neuron0x2b4c5a0()*0.218027);
}

double NNfunction_ns_chi04_sL::synapse0x2b73500() {
   return (neuron0x2b4c8e0()*-0.115103);
}

double NNfunction_ns_chi04_sL::synapse0x2b73540() {
   return (neuron0x2b4cc20()*0.139992);
}

double NNfunction_ns_chi04_sL::synapse0x2b73580() {
   return (neuron0x2b4cf60()*0.122124);
}

double NNfunction_ns_chi04_sL::synapse0x2b735c0() {
   return (neuron0x2b4d2a0()*0.00563294);
}

double NNfunction_ns_chi04_sL::synapse0x2b73600() {
   return (neuron0x2b4d5e0()*-0.0836268);
}

double NNfunction_ns_chi04_sL::synapse0x2b73640() {
   return (neuron0x2b4d920()*0.397391);
}

double NNfunction_ns_chi04_sL::synapse0x2b730d0() {
   return (neuron0x2b4dc60()*-0.11748);
}

double NNfunction_ns_chi04_sL::synapse0x2b73110() {
   return (neuron0x2b4e1c0()*0.0753491);
}

double NNfunction_ns_chi04_sL::synapse0x2b73790() {
   return (neuron0x2b4e3e0()*-0.057764);
}

double NNfunction_ns_chi04_sL::synapse0x2b737d0() {
   return (neuron0x2b4e720()*0.162532);
}

double NNfunction_ns_chi04_sL::synapse0x2b73810() {
   return (neuron0x2b4ea60()*0.0189802);
}

double NNfunction_ns_chi04_sL::synapse0x2b73850() {
   return (neuron0x2b4eda0()*0.0743478);
}

double NNfunction_ns_chi04_sL::synapse0x2b73890() {
   return (neuron0x2b4f0e0()*0.0989041);
}

double NNfunction_ns_chi04_sL::synapse0x2b738d0() {
   return (neuron0x2b4f420()*0.422999);
}

double NNfunction_ns_chi04_sL::synapse0x2b73c50() {
   return (neuron0x2b4a860()*-0.493683);
}

double NNfunction_ns_chi04_sL::synapse0x2b73c90() {
   return (neuron0x2b4aba0()*1.39902);
}

double NNfunction_ns_chi04_sL::synapse0x2b73cd0() {
   return (neuron0x2b4aee0()*-0.0757716);
}

double NNfunction_ns_chi04_sL::synapse0x2b73d10() {
   return (neuron0x2b4b220()*0.526276);
}

double NNfunction_ns_chi04_sL::synapse0x2b73d50() {
   return (neuron0x2b4b560()*0.249256);
}

double NNfunction_ns_chi04_sL::synapse0x2b73d90() {
   return (neuron0x2b4b8a0()*-0.136374);
}

double NNfunction_ns_chi04_sL::synapse0x2b73dd0() {
   return (neuron0x2b4bbe0()*-0.288695);
}

double NNfunction_ns_chi04_sL::synapse0x2b73e10() {
   return (neuron0x2b4bf20()*-0.138323);
}

double NNfunction_ns_chi04_sL::synapse0x2b73e50() {
   return (neuron0x2b4c260()*-0.439558);
}

double NNfunction_ns_chi04_sL::synapse0x2b73e90() {
   return (neuron0x2b4c5a0()*-0.0844957);
}

double NNfunction_ns_chi04_sL::synapse0x2b73ed0() {
   return (neuron0x2b4c8e0()*-0.123482);
}

double NNfunction_ns_chi04_sL::synapse0x2b73f10() {
   return (neuron0x2b4cc20()*0.0426666);
}

double NNfunction_ns_chi04_sL::synapse0x2b73f50() {
   return (neuron0x2b4cf60()*0.624168);
}

double NNfunction_ns_chi04_sL::synapse0x2b73f90() {
   return (neuron0x2b4d2a0()*0.0489228);
}

double NNfunction_ns_chi04_sL::synapse0x2b73fd0() {
   return (neuron0x2b4d5e0()*0.24137);
}

double NNfunction_ns_chi04_sL::synapse0x2b74010() {
   return (neuron0x2b4d920()*-0.192945);
}

double NNfunction_ns_chi04_sL::synapse0x2b73aa0() {
   return (neuron0x2b4dc60()*-0.012142);
}

double NNfunction_ns_chi04_sL::synapse0x2b73ae0() {
   return (neuron0x2b4e1c0()*-0.333785);
}

double NNfunction_ns_chi04_sL::synapse0x2b74160() {
   return (neuron0x2b4e3e0()*-0.314516);
}

double NNfunction_ns_chi04_sL::synapse0x2b741a0() {
   return (neuron0x2b4e720()*-0.347352);
}

double NNfunction_ns_chi04_sL::synapse0x2b741e0() {
   return (neuron0x2b4ea60()*0.170853);
}

double NNfunction_ns_chi04_sL::synapse0x2b74220() {
   return (neuron0x2b4eda0()*-0.0466922);
}

double NNfunction_ns_chi04_sL::synapse0x2b74260() {
   return (neuron0x2b4f0e0()*-0.0948095);
}

double NNfunction_ns_chi04_sL::synapse0x2b742a0() {
   return (neuron0x2b4f420()*0.636255);
}

double NNfunction_ns_chi04_sL::synapse0x29141b0() {
   return (neuron0x2b4f890()*-1.22);
}

double NNfunction_ns_chi04_sL::synapse0x29141f0() {
   return (neuron0x2b501e0()*-4.43407);
}

double NNfunction_ns_chi04_sL::synapse0x2b51d50() {
   return (neuron0x2b50cc0()*0.849068);
}

double NNfunction_ns_chi04_sL::synapse0x2b51d90() {
   return (neuron0x2b50760()*-0.440198);
}

double NNfunction_ns_chi04_sL::synapse0x2b52720() {
   return (neuron0x2b51aa0()*0.774079);
}

double NNfunction_ns_chi04_sL::synapse0x2b52760() {
   return (neuron0x2b52470()*0.262431);
}

double NNfunction_ns_chi04_sL::synapse0x2b534f0() {
   return (neuron0x2b53240()*-0.609974);
}

double NNfunction_ns_chi04_sL::synapse0x2b53530() {
   return (neuron0x2b53c10()*-0.187716);
}

double NNfunction_ns_chi04_sL::synapse0x2b53ec0() {
   return (neuron0x2b545e0()*-0.573936);
}

double NNfunction_ns_chi04_sL::synapse0x2b53f00() {
   return (neuron0x2b550c0()*-0.115781);
}

double NNfunction_ns_chi04_sL::synapse0x2b54890() {
   return (neuron0x2b55a90()*-0.142995);
}

double NNfunction_ns_chi04_sL::synapse0x2b548d0() {
   return (neuron0x2b52b70()*-0.144028);
}

double NNfunction_ns_chi04_sL::synapse0x2b55370() {
   return (neuron0x2b57640()*-0.166828);
}

double NNfunction_ns_chi04_sL::synapse0x2b553b0() {
   return (neuron0x2b58010()*-0.164638);
}

double NNfunction_ns_chi04_sL::synapse0x2b55d40() {
   return (neuron0x2b589e0()*-0.290375);
}

double NNfunction_ns_chi04_sL::synapse0x2b55d80() {
   return (neuron0x2b593b0()*-0.198235);
}

double NNfunction_ns_chi04_sL::synapse0x2b52e20() {
   return (neuron0x2b5b1c0()*0.417782);
}

double NNfunction_ns_chi04_sL::synapse0x2b52e60() {
   return (neuron0x2b5b4a0()*0.0841517);
}

double NNfunction_ns_chi04_sL::synapse0x2b578f0() {
   return (neuron0x2b5be70()*0.115227);
}

double NNfunction_ns_chi04_sL::synapse0x2b57930() {
   return (neuron0x2b5c840()*-0.0853099);
}

double NNfunction_ns_chi04_sL::synapse0x2b582c0() {
   return (neuron0x2b5d210()*-0.65875);
}

double NNfunction_ns_chi04_sL::synapse0x2b58300() {
   return (neuron0x2b5dbe0()*0.370489);
}

double NNfunction_ns_chi04_sL::synapse0x2b58c90() {
   return (neuron0x2b56730()*0.0953929);
}

double NNfunction_ns_chi04_sL::synapse0x2b58cd0() {
   return (neuron0x2b57100()*0.0734477);
}

double NNfunction_ns_chi04_sL::synapse0x2b59660() {
   return (neuron0x2b60970()*1.65861);
}

double NNfunction_ns_chi04_sL::synapse0x2b596a0() {
   return (neuron0x2b61340()*-0.134261);
}

double NNfunction_ns_chi04_sL::synapse0x2b4d800() {
   return (neuron0x2b61d10()*-1.30517);
}

double NNfunction_ns_chi04_sL::synapse0x2b4d840() {
   return (neuron0x2b626e0()*0.414754);
}

double NNfunction_ns_chi04_sL::synapse0x2b5b750() {
   return (neuron0x2b630b0()*0.221678);
}

double NNfunction_ns_chi04_sL::synapse0x2b5b790() {
   return (neuron0x2b63a80()*-0.930688);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c120() {
   return (neuron0x2b64450()*0.999712);
}

double NNfunction_ns_chi04_sL::synapse0x2b5c160() {
   return (neuron0x2b64e20()*-0.109223);
}

double NNfunction_ns_chi04_sL::synapse0x2b5caf0() {
   return (neuron0x2b5aeb0()*0.182808);
}

double NNfunction_ns_chi04_sL::synapse0x2b5cb30() {
   return (neuron0x2b67a00()*3.4918);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d4c0() {
   return (neuron0x2b683d0()*-0.540432);
}

double NNfunction_ns_chi04_sL::synapse0x2b5d500() {
   return (neuron0x2b68da0()*0.303357);
}

double NNfunction_ns_chi04_sL::synapse0x2b5de90() {
   return (neuron0x2b69770()*0.391532);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ded0() {
   return (neuron0x2b6a140()*-0.299774);
}

double NNfunction_ns_chi04_sL::synapse0x2b569e0() {
   return (neuron0x2b6ab10()*-1.7471);
}

double NNfunction_ns_chi04_sL::synapse0x2b56a20() {
   return (neuron0x2b6b4e0()*-1.57683);
}

double NNfunction_ns_chi04_sL::synapse0x2b60290() {
   return (neuron0x2b6beb0()*-0.917425);
}

double NNfunction_ns_chi04_sL::synapse0x2b602d0() {
   return (neuron0x2b6ca90()*-0.541937);
}

double NNfunction_ns_chi04_sL::synapse0x2b60c20() {
   return (neuron0x2b6d460()*0.398113);
}

double NNfunction_ns_chi04_sL::synapse0x2b60c60() {
   return (neuron0x2b5e2e0()*-1.68802);
}

double NNfunction_ns_chi04_sL::synapse0x2b615f0() {
   return (neuron0x2b5ecb0()*-1.32975);
}

double NNfunction_ns_chi04_sL::synapse0x2b61630() {
   return (neuron0x2b5f680()*0.822365);
}

double NNfunction_ns_chi04_sL::synapse0x2b61fc0() {
   return (neuron0x2b71cc0()*-0.134054);
}

double NNfunction_ns_chi04_sL::synapse0x2b62000() {
   return (neuron0x2b72570()*0.151663);
}

double NNfunction_ns_chi04_sL::synapse0x2b62990() {
   return (neuron0x2b72f40()*0.373537);
}

double NNfunction_ns_chi04_sL::synapse0x2b629d0() {
   return (neuron0x2b73910()*-0.209068);
}

double NNfunction_ns_chi04_sL::synapse0x2b650d0() {
   return (neuron0x2b4f890()*1.2053);
}

double NNfunction_ns_chi04_sL::synapse0x2b65110() {
   return (neuron0x2b501e0()*2.6218);
}

double NNfunction_ns_chi04_sL::synapse0x2b5a690() {
   return (neuron0x2b50cc0()*-0.858262);
}

double NNfunction_ns_chi04_sL::synapse0x2b5a6d0() {
   return (neuron0x2b50760()*0.282193);
}

double NNfunction_ns_chi04_sL::synapse0x2b67cb0() {
   return (neuron0x2b51aa0()*1.23365);
}

double NNfunction_ns_chi04_sL::synapse0x2b67cf0() {
   return (neuron0x2b52470()*0.208231);
}

double NNfunction_ns_chi04_sL::synapse0x2b68680() {
   return (neuron0x2b53240()*-1.02684);
}

double NNfunction_ns_chi04_sL::synapse0x2b686c0() {
   return (neuron0x2b53c10()*0.217605);
}

double NNfunction_ns_chi04_sL::synapse0x2b69050() {
   return (neuron0x2b545e0()*0.640164);
}

double NNfunction_ns_chi04_sL::synapse0x2b69090() {
   return (neuron0x2b550c0()*0.161465);
}

double NNfunction_ns_chi04_sL::synapse0x2b69a20() {
   return (neuron0x2b55a90()*0.169922);
}

double NNfunction_ns_chi04_sL::synapse0x2b69a60() {
   return (neuron0x2b52b70()*0.144894);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a3f0() {
   return (neuron0x2b57640()*0.217709);
}

double NNfunction_ns_chi04_sL::synapse0x2b6a430() {
   return (neuron0x2b58010()*0.15305);
}

double NNfunction_ns_chi04_sL::synapse0x2b6adc0() {
   return (neuron0x2b589e0()*-0.196304);
}

double NNfunction_ns_chi04_sL::synapse0x2b6ae00() {
   return (neuron0x2b593b0()*0.213624);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b790() {
   return (neuron0x2b5b1c0()*-0.729923);
}

double NNfunction_ns_chi04_sL::synapse0x2b6b7d0() {
   return (neuron0x2b5b4a0()*-0.0869212);
}

double NNfunction_ns_chi04_sL::synapse0x2b6c160() {
   return (neuron0x2b5be70()*-0.131039);
}

double NNfunction_ns_chi04_sL::synapse0x2b6c1a0() {
   return (neuron0x2b5c840()*0.104016);
}

double NNfunction_ns_chi04_sL::synapse0x2b6cd40() {
   return (neuron0x2b5d210()*0.923324);
}

double NNfunction_ns_chi04_sL::synapse0x2b6cd80() {
   return (neuron0x2b5dbe0()*-0.0578749);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d710() {
   return (neuron0x2b56730()*0.119439);
}

double NNfunction_ns_chi04_sL::synapse0x2b6d750() {
   return (neuron0x2b57100()*-0.033918);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e590() {
   return (neuron0x2b60970()*-1.63045);
}

double NNfunction_ns_chi04_sL::synapse0x2b5e5d0() {
   return (neuron0x2b61340()*0.466128);
}

double NNfunction_ns_chi04_sL::synapse0x2b5ef60() {
   return (neuron0x2b61d10()*-0.562771);
}

double NNfunction_ns_chi04_sL::synapse0x2b5efa0() {
   return (neuron0x2b626e0()*-0.21648);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f930() {
   return (neuron0x2b630b0()*-0.25336);
}

double NNfunction_ns_chi04_sL::synapse0x2b5f970() {
   return (neuron0x2b63a80()*1.76951);
}

double NNfunction_ns_chi04_sL::synapse0x2b71e50() {
   return (neuron0x2b64450()*0.664093);
}

double NNfunction_ns_chi04_sL::synapse0x2b71e90() {
   return (neuron0x2b64e20()*0.139419);
}

double NNfunction_ns_chi04_sL::synapse0x2b72820() {
   return (neuron0x2b5aeb0()*-0.167887);
}

double NNfunction_ns_chi04_sL::synapse0x2b72860() {
   return (neuron0x2b67a00()*-2.12232);
}

double NNfunction_ns_chi04_sL::synapse0x2b731f0() {
   return (neuron0x2b683d0()*-0.521367);
}

double NNfunction_ns_chi04_sL::synapse0x2b73230() {
   return (neuron0x2b68da0()*0.0270097);
}

double NNfunction_ns_chi04_sL::synapse0x2b73bc0() {
   return (neuron0x2b69770()*-0.479983);
}

double NNfunction_ns_chi04_sL::synapse0x2b73c00() {
   return (neuron0x2b6a140()*-1.45772);
}

double NNfunction_ns_chi04_sL::synapse0x2b4fab0() {
   return (neuron0x2b6ab10()*1.97881);
}

double NNfunction_ns_chi04_sL::synapse0x2b4faf0() {
   return (neuron0x2b6b4e0()*1.62865);
}

double NNfunction_ns_chi04_sL::synapse0x2b63360() {
   return (neuron0x2b6beb0()*0.803232);
}

double NNfunction_ns_chi04_sL::synapse0x2b633a0() {
   return (neuron0x2b6ca90()*0.643431);
}

double NNfunction_ns_chi04_sL::synapse0x2b742e0() {
   return (neuron0x2b6d460()*-0.269585);
}

double NNfunction_ns_chi04_sL::synapse0x2b74320() {
   return (neuron0x2b5e2e0()*-0.905949);
}

double NNfunction_ns_chi04_sL::synapse0x2b74360() {
   return (neuron0x2b5ecb0()*1.36068);
}

double NNfunction_ns_chi04_sL::synapse0x2b743a0() {
   return (neuron0x2b5f680()*0.834338);
}

double NNfunction_ns_chi04_sL::synapse0x2b7b250() {
   return (neuron0x2b71cc0()*0.174842);
}

double NNfunction_ns_chi04_sL::synapse0x2b7b290() {
   return (neuron0x2b72570()*-0.17221);
}

double NNfunction_ns_chi04_sL::synapse0x2b7b2d0() {
   return (neuron0x2b72f40()*-0.326473);
}

double NNfunction_ns_chi04_sL::synapse0x2b7b310() {
   return (neuron0x2b73910()*0.274159);
}

double NNfunction_ns_chi04_sL::synapse0x2b7b690() {
   return (neuron0x2b4f890()*-2.05786);
}

double NNfunction_ns_chi04_sL::synapse0x2b7b6d0() {
   return (neuron0x2b501e0()*-6.13967);
}

double NNfunction_ns_chi04_sL::synapse0x2b7b710() {
   return (neuron0x2b50cc0()*3.17481);
}

double NNfunction_ns_chi04_sL::synapse0x2b7b750() {
   return (neuron0x2b50760()*-1.09825);
}

double NNfunction_ns_chi04_sL::synapse0x2b7b790() {
   return (neuron0x2b51aa0()*-0.21018);
}

double NNfunction_ns_chi04_sL::synapse0x2b7b7d0() {
   return (neuron0x2b52470()*-0.597041);
}

double NNfunction_ns_chi04_sL::synapse0x2b7b810() {
   return (neuron0x2b53240()*0.0751816);
}

double NNfunction_ns_chi04_sL::synapse0x2b7b850() {
   return (neuron0x2b53c10()*-1.10014);
}

double NNfunction_ns_chi04_sL::synapse0x2b7b890() {
   return (neuron0x2b545e0()*-1.97333);
}

double NNfunction_ns_chi04_sL::synapse0x2b7b8d0() {
   return (neuron0x2b550c0()*-0.411316);
}

double NNfunction_ns_chi04_sL::synapse0x2b7b910() {
   return (neuron0x2b55a90()*-0.722222);
}

double NNfunction_ns_chi04_sL::synapse0x2b7b950() {
   return (neuron0x2b52b70()*-0.505684);
}

double NNfunction_ns_chi04_sL::synapse0x2b7b990() {
   return (neuron0x2b57640()*-0.865141);
}

double NNfunction_ns_chi04_sL::synapse0x2b7b9d0() {
   return (neuron0x2b58010()*-0.805966);
}

double NNfunction_ns_chi04_sL::synapse0x2b7ba10() {
   return (neuron0x2b589e0()*0.88253);
}

double NNfunction_ns_chi04_sL::synapse0x2b7ba50() {
   return (neuron0x2b593b0()*-0.834321);
}

double NNfunction_ns_chi04_sL::synapse0x2b7b4e0() {
   return (neuron0x2b5b1c0()*0.604884);
}

double NNfunction_ns_chi04_sL::synapse0x2b7b520() {
   return (neuron0x2b5b4a0()*0.350664);
}

double NNfunction_ns_chi04_sL::synapse0x2b7bba0() {
   return (neuron0x2b5be70()*0.647422);
}

double NNfunction_ns_chi04_sL::synapse0x2b7bbe0() {
   return (neuron0x2b5c840()*-0.362226);
}

double NNfunction_ns_chi04_sL::synapse0x2b7bc20() {
   return (neuron0x2b5d210()*-4.45286);
}

double NNfunction_ns_chi04_sL::synapse0x2b7bc60() {
   return (neuron0x2b5dbe0()*-1.46107);
}

double NNfunction_ns_chi04_sL::synapse0x2b7bca0() {
   return (neuron0x2b56730()*0.0896287);
}

double NNfunction_ns_chi04_sL::synapse0x2b7bce0() {
   return (neuron0x2b57100()*0.357066);
}

double NNfunction_ns_chi04_sL::synapse0x2b7bd20() {
   return (neuron0x2b60970()*3.43656);
}

double NNfunction_ns_chi04_sL::synapse0x2b7bd60() {
   return (neuron0x2b61340()*-0.642038);
}

double NNfunction_ns_chi04_sL::synapse0x2b7bda0() {
   return (neuron0x2b61d10()*0.906055);
}

double NNfunction_ns_chi04_sL::synapse0x2b7bde0() {
   return (neuron0x2b626e0()*1.62207);
}

double NNfunction_ns_chi04_sL::synapse0x2b7be20() {
   return (neuron0x2b630b0()*1.28116);
}

double NNfunction_ns_chi04_sL::synapse0x2b7be60() {
   return (neuron0x2b63a80()*-0.779915);
}

double NNfunction_ns_chi04_sL::synapse0x2b7bea0() {
   return (neuron0x2b64450()*-1.394);
}

double NNfunction_ns_chi04_sL::synapse0x2b7bee0() {
   return (neuron0x2b64e20()*-0.824949);
}

double NNfunction_ns_chi04_sL::synapse0x2b7ba90() {
   return (neuron0x2b5aeb0()*0.836902);
}

double NNfunction_ns_chi04_sL::synapse0x2b7bad0() {
   return (neuron0x2b67a00()*5.10278);
}

double NNfunction_ns_chi04_sL::synapse0x2b7bb10() {
   return (neuron0x2b683d0()*0.460772);
}

double NNfunction_ns_chi04_sL::synapse0x2b7bb50() {
   return (neuron0x2b68da0()*-1.3765);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c130() {
   return (neuron0x2b69770()*3.23038);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c170() {
   return (neuron0x2b6a140()*-1.94558);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c1b0() {
   return (neuron0x2b6ab10()*-3.35576);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c1f0() {
   return (neuron0x2b6b4e0()*-2.49187);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c230() {
   return (neuron0x2b6beb0()*-3.08433);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c270() {
   return (neuron0x2b6ca90()*-2.9083);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c2b0() {
   return (neuron0x2b6d460()*1.40287);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c2f0() {
   return (neuron0x2b5e2e0()*-0.191752);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c330() {
   return (neuron0x2b5ecb0()*-3.14093);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c370() {
   return (neuron0x2b5f680()*-0.567508);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c3b0() {
   return (neuron0x2b71cc0()*-0.403377);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c3f0() {
   return (neuron0x2b72570()*0.656853);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c430() {
   return (neuron0x2b72f40()*1.3401);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c470() {
   return (neuron0x2b73910()*-0.763838);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c7f0() {
   return (neuron0x2b4f890()*0.691221);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c830() {
   return (neuron0x2b501e0()*-0.759959);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c870() {
   return (neuron0x2b50cc0()*-1.41377);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c8b0() {
   return (neuron0x2b50760()*0.307182);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c8f0() {
   return (neuron0x2b51aa0()*3.0428);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c930() {
   return (neuron0x2b52470()*0.673857);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c970() {
   return (neuron0x2b53240()*-2.45538);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c9b0() {
   return (neuron0x2b53c10()*-0.0269819);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c9f0() {
   return (neuron0x2b545e0()*-0.0386952);
}

double NNfunction_ns_chi04_sL::synapse0x2b7ca30() {
   return (neuron0x2b550c0()*-0.00961552);
}

double NNfunction_ns_chi04_sL::synapse0x2b7ca70() {
   return (neuron0x2b55a90()*-0.0204449);
}

double NNfunction_ns_chi04_sL::synapse0x2b7cab0() {
   return (neuron0x2b52b70()*0.0262613);
}

double NNfunction_ns_chi04_sL::synapse0x2b7caf0() {
   return (neuron0x2b57640()*-0.0764799);
}

double NNfunction_ns_chi04_sL::synapse0x2b7cb30() {
   return (neuron0x2b58010()*0.0297428);
}

double NNfunction_ns_chi04_sL::synapse0x2b7cb70() {
   return (neuron0x2b589e0()*2.60431);
}

double NNfunction_ns_chi04_sL::synapse0x2b7cbb0() {
   return (neuron0x2b593b0()*0.0112725);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c640() {
   return (neuron0x2b5b1c0()*0.363233);
}

double NNfunction_ns_chi04_sL::synapse0x2b7c680() {
   return (neuron0x2b5b4a0()*0.0119722);
}

double NNfunction_ns_chi04_sL::synapse0x2b7cd00() {
   return (neuron0x2b5be70()*0.0172571);
}

double NNfunction_ns_chi04_sL::synapse0x2b7cd40() {
   return (neuron0x2b5c840()*-0.0129963);
}

double NNfunction_ns_chi04_sL::synapse0x2b7cd80() {
   return (neuron0x2b5d210()*0.565992);
}

double NNfunction_ns_chi04_sL::synapse0x2b7cdc0() {
   return (neuron0x2b5dbe0()*-0.198519);
}

double NNfunction_ns_chi04_sL::synapse0x2b7ce00() {
   return (neuron0x2b56730()*0.913691);
}

double NNfunction_ns_chi04_sL::synapse0x2b7ce40() {
   return (neuron0x2b57100()*-0.0221234);
}

double NNfunction_ns_chi04_sL::synapse0x2b7ce80() {
   return (neuron0x2b60970()*-0.661459);
}

double NNfunction_ns_chi04_sL::synapse0x2b7cec0() {
   return (neuron0x2b61340()*-0.298274);
}

double NNfunction_ns_chi04_sL::synapse0x2b7cf00() {
   return (neuron0x2b61d10()*-2.22028);
}

double NNfunction_ns_chi04_sL::synapse0x2b7cf40() {
   return (neuron0x2b626e0()*0.0273412);
}

double NNfunction_ns_chi04_sL::synapse0x2b7cf80() {
   return (neuron0x2b630b0()*-0.0149603);
}

double NNfunction_ns_chi04_sL::synapse0x2b7cfc0() {
   return (neuron0x2b63a80()*2.19605);
}

double NNfunction_ns_chi04_sL::synapse0x2b7d000() {
   return (neuron0x2b64450()*2.50066);
}

double NNfunction_ns_chi04_sL::synapse0x2b7d040() {
   return (neuron0x2b64e20()*-0.0150915);
}

double NNfunction_ns_chi04_sL::synapse0x2b7cbf0() {
   return (neuron0x2b5aeb0()*-0.0248705);
}

double NNfunction_ns_chi04_sL::synapse0x2b7cc30() {
   return (neuron0x2b67a00()*0.609666);
}

double NNfunction_ns_chi04_sL::synapse0x2b7cc70() {
   return (neuron0x2b683d0()*-2.09895);
}

double NNfunction_ns_chi04_sL::synapse0x2b7ccb0() {
   return (neuron0x2b68da0()*-0.315517);
}

double NNfunction_ns_chi04_sL::synapse0x2b7d290() {
   return (neuron0x2b69770()*0.102095);
}

double NNfunction_ns_chi04_sL::synapse0x2b7d2d0() {
   return (neuron0x2b6a140()*-2.20658);
}

double NNfunction_ns_chi04_sL::synapse0x2b7d310() {
   return (neuron0x2b6ab10()*2.20206);
}

double NNfunction_ns_chi04_sL::synapse0x2b7d350() {
   return (neuron0x2b6b4e0()*0.592074);
}

double NNfunction_ns_chi04_sL::synapse0x2b7d390() {
   return (neuron0x2b6beb0()*0.809499);
}

double NNfunction_ns_chi04_sL::synapse0x2b7d3d0() {
   return (neuron0x2b6ca90()*0.0744839);
}

double NNfunction_ns_chi04_sL::synapse0x2b7d410() {
   return (neuron0x2b6d460()*1.24616);
}

double NNfunction_ns_chi04_sL::synapse0x2b7d450() {
   return (neuron0x2b5e2e0()*-3.27351);
}

double NNfunction_ns_chi04_sL::synapse0x2b7d490() {
   return (neuron0x2b5ecb0()*0.643638);
}

double NNfunction_ns_chi04_sL::synapse0x2b7d4d0() {
   return (neuron0x2b5f680()*2.88492);
}

double NNfunction_ns_chi04_sL::synapse0x2b7d510() {
   return (neuron0x2b71cc0()*-0.0195247);
}

double NNfunction_ns_chi04_sL::synapse0x2b7d550() {
   return (neuron0x2b72570()*0.00492645);
}

double NNfunction_ns_chi04_sL::synapse0x2b7d590() {
   return (neuron0x2b72f40()*-0.0264866);
}

double NNfunction_ns_chi04_sL::synapse0x2b7d5d0() {
   return (neuron0x2b73910()*-0.0153666);
}

double NNfunction_ns_chi04_sL::synapse0x2b7d950() {
   return (neuron0x2b4f890()*0.818355);
}

double NNfunction_ns_chi04_sL::synapse0x2b7d990() {
   return (neuron0x2b501e0()*0.39445);
}

double NNfunction_ns_chi04_sL::synapse0x2b7d9d0() {
   return (neuron0x2b50cc0()*0.886984);
}

double NNfunction_ns_chi04_sL::synapse0x2b7da10() {
   return (neuron0x2b50760()*0.397392);
}

double NNfunction_ns_chi04_sL::synapse0x2b7da50() {
   return (neuron0x2b51aa0()*0.0239781);
}

double NNfunction_ns_chi04_sL::synapse0x2b7da90() {
   return (neuron0x2b52470()*0.420776);
}

double NNfunction_ns_chi04_sL::synapse0x2b7dad0() {
   return (neuron0x2b53240()*0.534918);
}

double NNfunction_ns_chi04_sL::synapse0x2b7db10() {
   return (neuron0x2b53c10()*-0.0344888);
}

double NNfunction_ns_chi04_sL::synapse0x2b7db50() {
   return (neuron0x2b545e0()*-0.066145);
}

double NNfunction_ns_chi04_sL::synapse0x2b7db90() {
   return (neuron0x2b550c0()*0.981158);
}

double NNfunction_ns_chi04_sL::synapse0x2b7dbd0() {
   return (neuron0x2b55a90()*-0.208876);
}

double NNfunction_ns_chi04_sL::synapse0x2b7dc10() {
   return (neuron0x2b52b70()*-0.155573);
}

double NNfunction_ns_chi04_sL::synapse0x2b7dc50() {
   return (neuron0x2b57640()*0.254522);
}

double NNfunction_ns_chi04_sL::synapse0x2b7dc90() {
   return (neuron0x2b58010()*0.380753);
}

double NNfunction_ns_chi04_sL::synapse0x2b7dcd0() {
   return (neuron0x2b589e0()*-0.456661);
}

double NNfunction_ns_chi04_sL::synapse0x2b7dd10() {
   return (neuron0x2b593b0()*0.683202);
}

double NNfunction_ns_chi04_sL::synapse0x2b7d7a0() {
   return (neuron0x2b5b1c0()*0.465557);
}

double NNfunction_ns_chi04_sL::synapse0x2b7d7e0() {
   return (neuron0x2b5b4a0()*0.713934);
}

double NNfunction_ns_chi04_sL::synapse0x2b7de60() {
   return (neuron0x2b5be70()*0.598866);
}

double NNfunction_ns_chi04_sL::synapse0x2b7dea0() {
   return (neuron0x2b5c840()*0.229409);
}

double NNfunction_ns_chi04_sL::synapse0x2b7dee0() {
   return (neuron0x2b5d210()*0.0685538);
}

double NNfunction_ns_chi04_sL::synapse0x2b7df20() {
   return (neuron0x2b5dbe0()*0.140737);
}

double NNfunction_ns_chi04_sL::synapse0x2b7df60() {
   return (neuron0x2b56730()*0.705691);
}

double NNfunction_ns_chi04_sL::synapse0x2b7dfa0() {
   return (neuron0x2b57100()*0.805486);
}

double NNfunction_ns_chi04_sL::synapse0x2b7dfe0() {
   return (neuron0x2b60970()*-0.0273525);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e020() {
   return (neuron0x2b61340()*-0.163565);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e060() {
   return (neuron0x2b61d10()*0.148276);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e0a0() {
   return (neuron0x2b626e0()*0.224027);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e0e0() {
   return (neuron0x2b630b0()*-0.0574634);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e120() {
   return (neuron0x2b63a80()*0.168272);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e160() {
   return (neuron0x2b64450()*0.212434);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e1a0() {
   return (neuron0x2b64e20()*0.399115);
}

double NNfunction_ns_chi04_sL::synapse0x2b7dd50() {
   return (neuron0x2b5aeb0()*0.379457);
}

double NNfunction_ns_chi04_sL::synapse0x2b7dd90() {
   return (neuron0x2b67a00()*0.0320974);
}

double NNfunction_ns_chi04_sL::synapse0x2b7ddd0() {
   return (neuron0x2b683d0()*0.609656);
}

double NNfunction_ns_chi04_sL::synapse0x2b7de10() {
   return (neuron0x2b68da0()*0.275066);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e3f0() {
   return (neuron0x2b69770()*0.922835);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e430() {
   return (neuron0x2b6a140()*0.16332);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e470() {
   return (neuron0x2b6ab10()*0.713182);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e4b0() {
   return (neuron0x2b6b4e0()*0.892932);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e4f0() {
   return (neuron0x2b6beb0()*0.299615);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e530() {
   return (neuron0x2b6ca90()*1.21722);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e570() {
   return (neuron0x2b6d460()*-0.00545407);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e5b0() {
   return (neuron0x2b5e2e0()*0.245865);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e5f0() {
   return (neuron0x2b5ecb0()*0.526258);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e630() {
   return (neuron0x2b5f680()*-0.17237);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e670() {
   return (neuron0x2b71cc0()*-0.0857521);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e6b0() {
   return (neuron0x2b72570()*0.690958);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e6f0() {
   return (neuron0x2b72f40()*0.146391);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e730() {
   return (neuron0x2b73910()*0.553124);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e990() {
   return (neuron0x2b7ab10()*-4.65404);
}

double NNfunction_ns_chi04_sL::synapse0x2b7e9d0() {
   return (neuron0x2b7aeb0()*-3.8125);
}

double NNfunction_ns_chi04_sL::synapse0x2b7ea10() {
   return (neuron0x2b7b350()*2.19976);
}

double NNfunction_ns_chi04_sL::synapse0x2b7ea50() {
   return (neuron0x2b7c4b0()*-7.55891);
}

double NNfunction_ns_chi04_sL::synapse0x2b7ea90() {
   return (neuron0x2b7d610()*3.08638);
}

