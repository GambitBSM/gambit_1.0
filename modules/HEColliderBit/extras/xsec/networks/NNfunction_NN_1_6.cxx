#include "NNfunction_NN_1_6.h"
#include <cmath>

double NNfunction_NN_1_6::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.3576)/15.1512;
   input1 = (in1 - -15.9162)/1176.61;
   input2 = (in2 - 263.322)/242.243;
   input3 = (in3 - -25.5182)/842;
   input4 = (in4 - 1070.47)/926.979;
   input5 = (in5 - 915.628)/950.754;
   input6 = (in6 - 922.455)/948.884;
   input7 = (in7 - 940.298)/931.555;
   input8 = (in8 - 931.982)/975.611;
   input9 = (in9 - 917.152)/965.314;
   input10 = (in10 - 968.866)/952.83;
   input11 = (in11 - 637.321)/834.315;
   input12 = (in12 - 730.458)/872.322;
   input13 = (in13 - 499.403)/519.674;
   input14 = (in14 - 703.378)/800.553;
   input15 = (in15 - 706.862)/804.487;
   input16 = (in16 - 525.657)/561.341;
   input17 = (in17 - 760.803)/902.957;
   input18 = (in18 - 760.821)/904.726;
   input19 = (in19 - 774.851)/864.96;
   input20 = (in20 - -5.65668)/487.049;
   input21 = (in21 - -9.8369)/1137.17;
   input22 = (in22 - 2.63816)/1193.95;
   input23 = (in23 - -47.162)/242.796;
   switch(index) {
     case 0:
         return neuron0x266b960();
     default:
         return 0.;
   }
}

double NNfunction_NN_1_6::Value(int index, double* input) {
   input0 = (input[0] - 23.3576)/15.1512;
   input1 = (input[1] - -15.9162)/1176.61;
   input2 = (input[2] - 263.322)/242.243;
   input3 = (input[3] - -25.5182)/842;
   input4 = (input[4] - 1070.47)/926.979;
   input5 = (input[5] - 915.628)/950.754;
   input6 = (input[6] - 922.455)/948.884;
   input7 = (input[7] - 940.298)/931.555;
   input8 = (input[8] - 931.982)/975.611;
   input9 = (input[9] - 917.152)/965.314;
   input10 = (input[10] - 968.866)/952.83;
   input11 = (input[11] - 637.321)/834.315;
   input12 = (input[12] - 730.458)/872.322;
   input13 = (input[13] - 499.403)/519.674;
   input14 = (input[14] - 703.378)/800.553;
   input15 = (input[15] - 706.862)/804.487;
   input16 = (input[16] - 525.657)/561.341;
   input17 = (input[17] - 760.803)/902.957;
   input18 = (input[18] - 760.821)/904.726;
   input19 = (input[19] - 774.851)/864.96;
   input20 = (input[20] - -5.65668)/487.049;
   input21 = (input[21] - -9.8369)/1137.17;
   input22 = (input[22] - 2.63816)/1193.95;
   input23 = (input[23] - -47.162)/242.796;
   switch(index) {
     case 0:
         return neuron0x266b960();
     default:
         return 0.;
   }
}

double NNfunction_NN_1_6::neuron0x2637a20() {
   return input0;
}

double NNfunction_NN_1_6::neuron0x2637d60() {
   return input1;
}

double NNfunction_NN_1_6::neuron0x26380a0() {
   return input2;
}

double NNfunction_NN_1_6::neuron0x26383e0() {
   return input3;
}

double NNfunction_NN_1_6::neuron0x2638720() {
   return input4;
}

double NNfunction_NN_1_6::neuron0x2638a60() {
   return input5;
}

double NNfunction_NN_1_6::neuron0x2638da0() {
   return input6;
}

double NNfunction_NN_1_6::neuron0x26390e0() {
   return input7;
}

double NNfunction_NN_1_6::neuron0x2639420() {
   return input8;
}

double NNfunction_NN_1_6::neuron0x2639760() {
   return input9;
}

double NNfunction_NN_1_6::neuron0x2639aa0() {
   return input10;
}

double NNfunction_NN_1_6::neuron0x2639de0() {
   return input11;
}

double NNfunction_NN_1_6::neuron0x263a120() {
   return input12;
}

double NNfunction_NN_1_6::neuron0x263a460() {
   return input13;
}

double NNfunction_NN_1_6::neuron0x263a7a0() {
   return input14;
}

double NNfunction_NN_1_6::neuron0x263aae0() {
   return input15;
}

double NNfunction_NN_1_6::neuron0x263ae20() {
   return input16;
}

double NNfunction_NN_1_6::neuron0x263b380() {
   return input17;
}

double NNfunction_NN_1_6::neuron0x263b5a0() {
   return input18;
}

double NNfunction_NN_1_6::neuron0x263b8e0() {
   return input19;
}

double NNfunction_NN_1_6::neuron0x263bc20() {
   return input20;
}

double NNfunction_NN_1_6::neuron0x263bf60() {
   return input21;
}

double NNfunction_NN_1_6::neuron0x263c2a0() {
   return input22;
}

double NNfunction_NN_1_6::neuron0x263c5e0() {
   return input23;
}

double NNfunction_NN_1_6::input0x263ca80() {
   double input = 0.0860946;
   input += synapse0x23f7890();
   input += synapse0x26378e0();
   input += synapse0x2637920();
   input += synapse0x263cd30();
   input += synapse0x263cd70();
   input += synapse0x263cdb0();
   input += synapse0x263cdf0();
   input += synapse0x263ce30();
   input += synapse0x263ce70();
   input += synapse0x263ceb0();
   input += synapse0x263cef0();
   input += synapse0x263cf30();
   input += synapse0x263cf70();
   input += synapse0x263cfb0();
   input += synapse0x263cff0();
   input += synapse0x263d030();
   input += synapse0x2637850();
   input += synapse0x2637890();
   input += synapse0x23e9150();
   input += synapse0x23e9190();
   input += synapse0x263d290();
   input += synapse0x263d2d0();
   input += synapse0x263d310();
   input += synapse0x263d350();
   return input;
}

double NNfunction_NN_1_6::neuron0x263ca80() {
   double input = input0x263ca80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x263d390() {
   double input = 3.52558;
   input += synapse0x263d6d0();
   input += synapse0x263d710();
   input += synapse0x263d750();
   input += synapse0x263d790();
   input += synapse0x263d7d0();
   input += synapse0x263d810();
   input += synapse0x263d850();
   input += synapse0x263d890();
   input += synapse0x263d8d0();
   input += synapse0x263d180();
   input += synapse0x263d1c0();
   input += synapse0x263d200();
   input += synapse0x263d240();
   input += synapse0x263db20();
   input += synapse0x263db60();
   input += synapse0x263dba0();
   input += synapse0x263d520();
   input += synapse0x263d560();
   input += synapse0x263dcf0();
   input += synapse0x263dd30();
   input += synapse0x263dd70();
   input += synapse0x263ddb0();
   input += synapse0x263ddf0();
   input += synapse0x263de30();
   return input;
}

double NNfunction_NN_1_6::neuron0x263d390() {
   double input = input0x263d390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x263de70() {
   double input = -2.24245;
   input += synapse0x263e1b0();
   input += synapse0x263e1f0();
   input += synapse0x263e230();
   input += synapse0x263e270();
   input += synapse0x263e2b0();
   input += synapse0x263e2f0();
   input += synapse0x263e330();
   input += synapse0x263e370();
   input += synapse0x263e3b0();
   input += synapse0x263e3f0();
   input += synapse0x263e430();
   input += synapse0x263e470();
   input += synapse0x263e4b0();
   input += synapse0x263e4f0();
   input += synapse0x263e530();
   input += synapse0x263e570();
   input += synapse0x263e000();
   input += synapse0x263e040();
   input += synapse0x23f6f60();
   input += synapse0x23f6fa0();
   input += synapse0x2626ab0();
   input += synapse0x2626af0();
   input += synapse0x2626b30();
   input += synapse0x2637960();
   return input;
}

double NNfunction_NN_1_6::neuron0x263de70() {
   double input = input0x263de70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x23f7700() {
   double input = -0.802564;
   input += synapse0x263dac0();
   input += synapse0x26379a0();
   input += synapse0x26379e0();
   input += synapse0x263e6c0();
   input += synapse0x263e700();
   input += synapse0x263e740();
   input += synapse0x263e780();
   input += synapse0x263e7c0();
   input += synapse0x263e800();
   input += synapse0x263e840();
   input += synapse0x263e880();
   input += synapse0x263e8c0();
   input += synapse0x263e900();
   input += synapse0x263e940();
   input += synapse0x263e980();
   input += synapse0x263e9c0();
   input += synapse0x263d910();
   input += synapse0x263d950();
   input += synapse0x263eb10();
   input += synapse0x263eb50();
   input += synapse0x263eb90();
   input += synapse0x263ebd0();
   input += synapse0x263ec10();
   input += synapse0x263ec50();
   return input;
}

double NNfunction_NN_1_6::neuron0x23f7700() {
   double input = input0x23f7700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x263ec90() {
   double input = -0.58589;
   input += synapse0x263efd0();
   input += synapse0x263f010();
   input += synapse0x263f050();
   input += synapse0x263f090();
   input += synapse0x263f0d0();
   input += synapse0x263f110();
   input += synapse0x263f150();
   input += synapse0x263f190();
   input += synapse0x263f1d0();
   input += synapse0x263f210();
   input += synapse0x263f250();
   input += synapse0x263f290();
   input += synapse0x263f2d0();
   input += synapse0x263f310();
   input += synapse0x263f350();
   input += synapse0x263f390();
   input += synapse0x263ee20();
   input += synapse0x263ee60();
   input += synapse0x263f4e0();
   input += synapse0x263f520();
   input += synapse0x263f560();
   input += synapse0x263f5a0();
   input += synapse0x263f5e0();
   input += synapse0x263f620();
   return input;
}

double NNfunction_NN_1_6::neuron0x263ec90() {
   double input = input0x263ec90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x263f660() {
   double input = -0.899179;
   input += synapse0x263f9a0();
   input += synapse0x263f9e0();
   input += synapse0x263fa20();
   input += synapse0x263fa60();
   input += synapse0x263faa0();
   input += synapse0x263fae0();
   input += synapse0x263fb20();
   input += synapse0x263fb60();
   input += synapse0x263fba0();
   input += synapse0x23f72f0();
   input += synapse0x23f7330();
   input += synapse0x23f7370();
   input += synapse0x23f73b0();
   input += synapse0x23f73f0();
   input += synapse0x23f7430();
   input += synapse0x23f7470();
   input += synapse0x263f7f0();
   input += synapse0x263f830();
   input += synapse0x23f75c0();
   input += synapse0x23f7600();
   input += synapse0x23f7640();
   input += synapse0x23f7680();
   input += synapse0x23f76c0();
   input += synapse0x26403f0();
   return input;
}

double NNfunction_NN_1_6::neuron0x263f660() {
   double input = input0x263f660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2640430() {
   double input = 0.577103;
   input += synapse0x2640770();
   input += synapse0x26407b0();
   input += synapse0x26407f0();
   input += synapse0x2640830();
   input += synapse0x2640870();
   input += synapse0x26408b0();
   input += synapse0x26408f0();
   input += synapse0x2640930();
   input += synapse0x2640970();
   input += synapse0x26409b0();
   input += synapse0x26409f0();
   input += synapse0x2640a30();
   input += synapse0x2640a70();
   input += synapse0x2640ab0();
   input += synapse0x2640af0();
   input += synapse0x2640b30();
   input += synapse0x26405c0();
   input += synapse0x2640600();
   input += synapse0x2640c80();
   input += synapse0x2640cc0();
   input += synapse0x2640d00();
   input += synapse0x2640d40();
   input += synapse0x2640d80();
   input += synapse0x2640dc0();
   return input;
}

double NNfunction_NN_1_6::neuron0x2640430() {
   double input = input0x2640430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2640e00() {
   double input = 0.556866;
   input += synapse0x2641140();
   input += synapse0x2641180();
   input += synapse0x26411c0();
   input += synapse0x2641200();
   input += synapse0x2641240();
   input += synapse0x2641280();
   input += synapse0x26412c0();
   input += synapse0x2641300();
   input += synapse0x2641340();
   input += synapse0x2641380();
   input += synapse0x26413c0();
   input += synapse0x2641400();
   input += synapse0x2641440();
   input += synapse0x2641480();
   input += synapse0x26414c0();
   input += synapse0x2641500();
   input += synapse0x2640f90();
   input += synapse0x2640fd0();
   input += synapse0x2641650();
   input += synapse0x2641690();
   input += synapse0x26416d0();
   input += synapse0x2641710();
   input += synapse0x2641750();
   input += synapse0x2641790();
   return input;
}

double NNfunction_NN_1_6::neuron0x2640e00() {
   double input = input0x2640e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x26417d0() {
   double input = -1.61779;
   input += synapse0x263b270();
   input += synapse0x263b2b0();
   input += synapse0x263b2f0();
   input += synapse0x263b330();
   input += synapse0x2641d20();
   input += synapse0x2641d60();
   input += synapse0x2641da0();
   input += synapse0x2641de0();
   input += synapse0x2641e20();
   input += synapse0x2641e60();
   input += synapse0x2641ea0();
   input += synapse0x2641ee0();
   input += synapse0x2641f20();
   input += synapse0x2641f60();
   input += synapse0x2641fa0();
   input += synapse0x2641fe0();
   input += synapse0x2641960();
   input += synapse0x26419a0();
   input += synapse0x2642130();
   input += synapse0x2642170();
   input += synapse0x26421b0();
   input += synapse0x26421f0();
   input += synapse0x2642230();
   input += synapse0x2642270();
   return input;
}

double NNfunction_NN_1_6::neuron0x26417d0() {
   double input = input0x26417d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x26422b0() {
   double input = 0.609497;
   input += synapse0x26425f0();
   input += synapse0x2642630();
   input += synapse0x2642670();
   input += synapse0x26426b0();
   input += synapse0x26426f0();
   input += synapse0x2642730();
   input += synapse0x2642770();
   input += synapse0x26427b0();
   input += synapse0x26427f0();
   input += synapse0x2642830();
   input += synapse0x2642870();
   input += synapse0x26428b0();
   input += synapse0x26428f0();
   input += synapse0x2642930();
   input += synapse0x2642970();
   input += synapse0x26429b0();
   input += synapse0x2642440();
   input += synapse0x2642480();
   input += synapse0x2642b00();
   input += synapse0x2642b40();
   input += synapse0x2642b80();
   input += synapse0x2642bc0();
   input += synapse0x2642c00();
   input += synapse0x2642c40();
   return input;
}

double NNfunction_NN_1_6::neuron0x26422b0() {
   double input = input0x26422b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2642c80() {
   double input = 3.21363;
   input += synapse0x2642fc0();
   input += synapse0x2643000();
   input += synapse0x2643040();
   input += synapse0x2643080();
   input += synapse0x26430c0();
   input += synapse0x2643100();
   input += synapse0x2643140();
   input += synapse0x2643180();
   input += synapse0x26431c0();
   input += synapse0x2643200();
   input += synapse0x2643240();
   input += synapse0x2643280();
   input += synapse0x26432c0();
   input += synapse0x2643300();
   input += synapse0x2643340();
   input += synapse0x2643380();
   input += synapse0x2642e10();
   input += synapse0x2642e50();
   input += synapse0x263fbe0();
   input += synapse0x263fc20();
   input += synapse0x263fc60();
   input += synapse0x263fca0();
   input += synapse0x263fce0();
   input += synapse0x263fd20();
   return input;
}

double NNfunction_NN_1_6::neuron0x2642c80() {
   double input = input0x2642c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x263fd60() {
   double input = -0.0569091;
   input += synapse0x26400a0();
   input += synapse0x26400e0();
   input += synapse0x2640120();
   input += synapse0x2640160();
   input += synapse0x26401a0();
   input += synapse0x26401e0();
   input += synapse0x2640220();
   input += synapse0x2640260();
   input += synapse0x26402a0();
   input += synapse0x26402e0();
   input += synapse0x2640320();
   input += synapse0x2640360();
   input += synapse0x26403a0();
   input += synapse0x26444e0();
   input += synapse0x2644520();
   input += synapse0x2644560();
   input += synapse0x263fef0();
   input += synapse0x263ff30();
   input += synapse0x26446b0();
   input += synapse0x26446f0();
   input += synapse0x2644730();
   input += synapse0x2644770();
   input += synapse0x26447b0();
   input += synapse0x26447f0();
   return input;
}

double NNfunction_NN_1_6::neuron0x263fd60() {
   double input = input0x263fd60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2644830() {
   double input = 0.482025;
   input += synapse0x2644b70();
   input += synapse0x2644bb0();
   input += synapse0x2644bf0();
   input += synapse0x2644c30();
   input += synapse0x2644c70();
   input += synapse0x2644cb0();
   input += synapse0x2644cf0();
   input += synapse0x2644d30();
   input += synapse0x2644d70();
   input += synapse0x2644db0();
   input += synapse0x2644df0();
   input += synapse0x2644e30();
   input += synapse0x2644e70();
   input += synapse0x2644eb0();
   input += synapse0x2644ef0();
   input += synapse0x2644f30();
   input += synapse0x26449c0();
   input += synapse0x2644a00();
   input += synapse0x2645080();
   input += synapse0x26450c0();
   input += synapse0x2645100();
   input += synapse0x2645140();
   input += synapse0x2645180();
   input += synapse0x26451c0();
   return input;
}

double NNfunction_NN_1_6::neuron0x2644830() {
   double input = input0x2644830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2645200() {
   double input = -2.27663;
   input += synapse0x2645540();
   input += synapse0x2645580();
   input += synapse0x26455c0();
   input += synapse0x2645600();
   input += synapse0x2645640();
   input += synapse0x2645680();
   input += synapse0x26456c0();
   input += synapse0x2645700();
   input += synapse0x2645740();
   input += synapse0x2645780();
   input += synapse0x26457c0();
   input += synapse0x2645800();
   input += synapse0x2645840();
   input += synapse0x2645880();
   input += synapse0x26458c0();
   input += synapse0x2645900();
   input += synapse0x2645390();
   input += synapse0x26453d0();
   input += synapse0x2645a50();
   input += synapse0x2645a90();
   input += synapse0x2645ad0();
   input += synapse0x2645b10();
   input += synapse0x2645b50();
   input += synapse0x2645b90();
   return input;
}

double NNfunction_NN_1_6::neuron0x2645200() {
   double input = input0x2645200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2645bd0() {
   double input = -0.377238;
   input += synapse0x2645f10();
   input += synapse0x2645f50();
   input += synapse0x2645f90();
   input += synapse0x2645fd0();
   input += synapse0x2646010();
   input += synapse0x2646050();
   input += synapse0x2646090();
   input += synapse0x26460d0();
   input += synapse0x2646110();
   input += synapse0x2646150();
   input += synapse0x2646190();
   input += synapse0x26461d0();
   input += synapse0x2646210();
   input += synapse0x2646250();
   input += synapse0x2646290();
   input += synapse0x26462d0();
   input += synapse0x2645d60();
   input += synapse0x2645da0();
   input += synapse0x2646420();
   input += synapse0x2646460();
   input += synapse0x26464a0();
   input += synapse0x26464e0();
   input += synapse0x2646520();
   input += synapse0x2646560();
   return input;
}

double NNfunction_NN_1_6::neuron0x2645bd0() {
   double input = input0x2645bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x26465a0() {
   double input = 0.21017;
   input += synapse0x26468e0();
   input += synapse0x2637c40();
   input += synapse0x2637c80();
   input += synapse0x2637f80();
   input += synapse0x2637fc0();
   input += synapse0x26382c0();
   input += synapse0x2638300();
   input += synapse0x2638600();
   input += synapse0x2638640();
   input += synapse0x2638940();
   input += synapse0x2638980();
   input += synapse0x2638c80();
   input += synapse0x2638cc0();
   input += synapse0x2638fc0();
   input += synapse0x2639000();
   input += synapse0x2639300();
   input += synapse0x2639340();
   input += synapse0x2639640();
   input += synapse0x2639680();
   input += synapse0x2639980();
   input += synapse0x26399c0();
   input += synapse0x2639cc0();
   input += synapse0x2639d00();
   input += synapse0x263a000();
   return input;
}

double NNfunction_NN_1_6::neuron0x26465a0() {
   double input = input0x26465a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x26483b0() {
   double input = 0.91484;
   input += synapse0x263a040();
   input += synapse0x263ad00();
   input += synapse0x263ad40();
   input += synapse0x2646730();
   input += synapse0x2646770();
   input += synapse0x263b040();
   input += synapse0x263b080();
   input += synapse0x23e9030();
   input += synapse0x23e9070();
   input += synapse0x263b7c0();
   input += synapse0x263b800();
   input += synapse0x263bb00();
   input += synapse0x263bb40();
   input += synapse0x263be40();
   input += synapse0x263be80();
   input += synapse0x263c180();
   input += synapse0x263c1c0();
   input += synapse0x263c4c0();
   input += synapse0x263c500();
   input += synapse0x263c800();
   input += synapse0x263c840();
   input += synapse0x263a340();
   input += synapse0x263a380();
   input += synapse0x2648650();
   return input;
}

double NNfunction_NN_1_6::neuron0x26483b0() {
   double input = input0x26483b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2648690() {
   double input = 0.483466;
   input += synapse0x26489d0();
   input += synapse0x2648a10();
   input += synapse0x2648a50();
   input += synapse0x2648a90();
   input += synapse0x2648ad0();
   input += synapse0x2648b10();
   input += synapse0x2648b50();
   input += synapse0x2648b90();
   input += synapse0x2648bd0();
   input += synapse0x2648c10();
   input += synapse0x2648c50();
   input += synapse0x2648c90();
   input += synapse0x2648cd0();
   input += synapse0x2648d10();
   input += synapse0x2648d50();
   input += synapse0x2648d90();
   input += synapse0x2648820();
   input += synapse0x2648860();
   input += synapse0x2648ee0();
   input += synapse0x2648f20();
   input += synapse0x2648f60();
   input += synapse0x2648fa0();
   input += synapse0x2648fe0();
   input += synapse0x2649020();
   return input;
}

double NNfunction_NN_1_6::neuron0x2648690() {
   double input = input0x2648690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2649060() {
   double input = 0.556605;
   input += synapse0x26493a0();
   input += synapse0x26493e0();
   input += synapse0x2649420();
   input += synapse0x2649460();
   input += synapse0x26494a0();
   input += synapse0x26494e0();
   input += synapse0x2649520();
   input += synapse0x2649560();
   input += synapse0x26495a0();
   input += synapse0x26495e0();
   input += synapse0x2649620();
   input += synapse0x2649660();
   input += synapse0x26496a0();
   input += synapse0x26496e0();
   input += synapse0x2649720();
   input += synapse0x2649760();
   input += synapse0x26491f0();
   input += synapse0x2649230();
   input += synapse0x26498b0();
   input += synapse0x26498f0();
   input += synapse0x2649930();
   input += synapse0x2649970();
   input += synapse0x26499b0();
   input += synapse0x26499f0();
   return input;
}

double NNfunction_NN_1_6::neuron0x2649060() {
   double input = input0x2649060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2649a30() {
   double input = -0.11362;
   input += synapse0x2649d70();
   input += synapse0x2649db0();
   input += synapse0x2649df0();
   input += synapse0x2649e30();
   input += synapse0x2649e70();
   input += synapse0x2649eb0();
   input += synapse0x2649ef0();
   input += synapse0x2649f30();
   input += synapse0x2649f70();
   input += synapse0x2649fb0();
   input += synapse0x2649ff0();
   input += synapse0x264a030();
   input += synapse0x264a070();
   input += synapse0x264a0b0();
   input += synapse0x264a0f0();
   input += synapse0x264a130();
   input += synapse0x2649bc0();
   input += synapse0x2649c00();
   input += synapse0x264a280();
   input += synapse0x264a2c0();
   input += synapse0x264a300();
   input += synapse0x264a340();
   input += synapse0x264a380();
   input += synapse0x264a3c0();
   return input;
}

double NNfunction_NN_1_6::neuron0x2649a30() {
   double input = input0x2649a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x264a400() {
   double input = -0.396291;
   input += synapse0x264a740();
   input += synapse0x264a780();
   input += synapse0x264a7c0();
   input += synapse0x264a800();
   input += synapse0x264a840();
   input += synapse0x264a880();
   input += synapse0x264a8c0();
   input += synapse0x264a900();
   input += synapse0x264a940();
   input += synapse0x264a980();
   input += synapse0x264a9c0();
   input += synapse0x264aa00();
   input += synapse0x264aa40();
   input += synapse0x264aa80();
   input += synapse0x264aac0();
   input += synapse0x264ab00();
   input += synapse0x264a590();
   input += synapse0x264a5d0();
   input += synapse0x264ac50();
   input += synapse0x264ac90();
   input += synapse0x264acd0();
   input += synapse0x264ad10();
   input += synapse0x264ad50();
   input += synapse0x264ad90();
   return input;
}

double NNfunction_NN_1_6::neuron0x264a400() {
   double input = input0x264a400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x264add0() {
   double input = 0.32506;
   input += synapse0x264b110();
   input += synapse0x264b150();
   input += synapse0x264b190();
   input += synapse0x264b1d0();
   input += synapse0x264b210();
   input += synapse0x264b250();
   input += synapse0x264b290();
   input += synapse0x264b2d0();
   input += synapse0x264b310();
   input += synapse0x26434d0();
   input += synapse0x2643510();
   input += synapse0x2643550();
   input += synapse0x2643590();
   input += synapse0x26435d0();
   input += synapse0x2643610();
   input += synapse0x2643650();
   input += synapse0x264af60();
   input += synapse0x264afa0();
   input += synapse0x26437a0();
   input += synapse0x26437e0();
   input += synapse0x2643820();
   input += synapse0x2643860();
   input += synapse0x26438a0();
   input += synapse0x26438e0();
   return input;
}

double NNfunction_NN_1_6::neuron0x264add0() {
   double input = input0x264add0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2643920() {
   double input = -3.32212;
   input += synapse0x2643c60();
   input += synapse0x2643ca0();
   input += synapse0x2643ce0();
   input += synapse0x2643d20();
   input += synapse0x2643d60();
   input += synapse0x2643da0();
   input += synapse0x2643de0();
   input += synapse0x2643e20();
   input += synapse0x2643e60();
   input += synapse0x2643ea0();
   input += synapse0x2643ee0();
   input += synapse0x2643f20();
   input += synapse0x2643f60();
   input += synapse0x2643fa0();
   input += synapse0x2643fe0();
   input += synapse0x2644020();
   input += synapse0x2643ab0();
   input += synapse0x2643af0();
   input += synapse0x2644170();
   input += synapse0x26441b0();
   input += synapse0x26441f0();
   input += synapse0x2644230();
   input += synapse0x2644270();
   input += synapse0x26442b0();
   return input;
}

double NNfunction_NN_1_6::neuron0x2643920() {
   double input = input0x2643920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x26442f0() {
   double input = -2.04868;
   input += synapse0x2644480();
   input += synapse0x264d510();
   input += synapse0x264d550();
   input += synapse0x264d590();
   input += synapse0x264d5d0();
   input += synapse0x264d610();
   input += synapse0x264d650();
   input += synapse0x264d690();
   input += synapse0x264d6d0();
   input += synapse0x264d710();
   input += synapse0x264d750();
   input += synapse0x264d790();
   input += synapse0x264d7d0();
   input += synapse0x264d810();
   input += synapse0x264d850();
   input += synapse0x264d890();
   input += synapse0x264d360();
   input += synapse0x264d3a0();
   input += synapse0x264d9e0();
   input += synapse0x264da20();
   input += synapse0x264da60();
   input += synapse0x264daa0();
   input += synapse0x264dae0();
   input += synapse0x264db20();
   return input;
}

double NNfunction_NN_1_6::neuron0x26442f0() {
   double input = input0x26442f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x264db60() {
   double input = -0.626127;
   input += synapse0x264dea0();
   input += synapse0x264dee0();
   input += synapse0x264df20();
   input += synapse0x264df60();
   input += synapse0x264dfa0();
   input += synapse0x264dfe0();
   input += synapse0x264e020();
   input += synapse0x264e060();
   input += synapse0x264e0a0();
   input += synapse0x264e0e0();
   input += synapse0x264e120();
   input += synapse0x264e160();
   input += synapse0x264e1a0();
   input += synapse0x264e1e0();
   input += synapse0x264e220();
   input += synapse0x264e260();
   input += synapse0x264dcf0();
   input += synapse0x264dd30();
   input += synapse0x264e3b0();
   input += synapse0x264e3f0();
   input += synapse0x264e430();
   input += synapse0x264e470();
   input += synapse0x264e4b0();
   input += synapse0x264e4f0();
   return input;
}

double NNfunction_NN_1_6::neuron0x264db60() {
   double input = input0x264db60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x264e530() {
   double input = -0.119795;
   input += synapse0x264e870();
   input += synapse0x264e8b0();
   input += synapse0x264e8f0();
   input += synapse0x264e930();
   input += synapse0x264e970();
   input += synapse0x264e9b0();
   input += synapse0x264e9f0();
   input += synapse0x264ea30();
   input += synapse0x264ea70();
   input += synapse0x264eab0();
   input += synapse0x264eaf0();
   input += synapse0x264eb30();
   input += synapse0x264eb70();
   input += synapse0x264ebb0();
   input += synapse0x264ebf0();
   input += synapse0x264ec30();
   input += synapse0x264e6c0();
   input += synapse0x264e700();
   input += synapse0x264ed80();
   input += synapse0x264edc0();
   input += synapse0x264ee00();
   input += synapse0x264ee40();
   input += synapse0x264ee80();
   input += synapse0x264eec0();
   return input;
}

double NNfunction_NN_1_6::neuron0x264e530() {
   double input = input0x264e530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x264ef00() {
   double input = 0.589113;
   input += synapse0x264f240();
   input += synapse0x264f280();
   input += synapse0x264f2c0();
   input += synapse0x264f300();
   input += synapse0x264f340();
   input += synapse0x264f380();
   input += synapse0x264f3c0();
   input += synapse0x264f400();
   input += synapse0x264f440();
   input += synapse0x264f480();
   input += synapse0x264f4c0();
   input += synapse0x264f500();
   input += synapse0x264f540();
   input += synapse0x264f580();
   input += synapse0x264f5c0();
   input += synapse0x264f600();
   input += synapse0x264f090();
   input += synapse0x264f0d0();
   input += synapse0x264f750();
   input += synapse0x264f790();
   input += synapse0x264f7d0();
   input += synapse0x264f810();
   input += synapse0x264f850();
   input += synapse0x264f890();
   return input;
}

double NNfunction_NN_1_6::neuron0x264ef00() {
   double input = input0x264ef00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x264f8d0() {
   double input = 0.681252;
   input += synapse0x264fc10();
   input += synapse0x264fc50();
   input += synapse0x264fc90();
   input += synapse0x264fcd0();
   input += synapse0x264fd10();
   input += synapse0x264fd50();
   input += synapse0x264fd90();
   input += synapse0x264fdd0();
   input += synapse0x264fe10();
   input += synapse0x264fe50();
   input += synapse0x264fe90();
   input += synapse0x264fed0();
   input += synapse0x264ff10();
   input += synapse0x264ff50();
   input += synapse0x264ff90();
   input += synapse0x264ffd0();
   input += synapse0x264fa60();
   input += synapse0x264faa0();
   input += synapse0x2650120();
   input += synapse0x2650160();
   input += synapse0x26501a0();
   input += synapse0x26501e0();
   input += synapse0x2650220();
   input += synapse0x2650260();
   return input;
}

double NNfunction_NN_1_6::neuron0x264f8d0() {
   double input = input0x264f8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x26502a0() {
   double input = 1.92632;
   input += synapse0x26505e0();
   input += synapse0x2650620();
   input += synapse0x2650660();
   input += synapse0x26506a0();
   input += synapse0x26506e0();
   input += synapse0x2650720();
   input += synapse0x2650760();
   input += synapse0x26507a0();
   input += synapse0x26507e0();
   input += synapse0x2650820();
   input += synapse0x2650860();
   input += synapse0x26508a0();
   input += synapse0x26508e0();
   input += synapse0x2650920();
   input += synapse0x2650960();
   input += synapse0x26509a0();
   input += synapse0x2650430();
   input += synapse0x2650470();
   input += synapse0x2650af0();
   input += synapse0x2650b30();
   input += synapse0x2650b70();
   input += synapse0x2650bb0();
   input += synapse0x2650bf0();
   input += synapse0x2650c30();
   return input;
}

double NNfunction_NN_1_6::neuron0x26502a0() {
   double input = input0x26502a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2650c70() {
   double input = -1.71682;
   input += synapse0x2650fb0();
   input += synapse0x2650ff0();
   input += synapse0x2651030();
   input += synapse0x2651070();
   input += synapse0x26510b0();
   input += synapse0x26510f0();
   input += synapse0x2651130();
   input += synapse0x2651170();
   input += synapse0x26511b0();
   input += synapse0x26511f0();
   input += synapse0x2651230();
   input += synapse0x2651270();
   input += synapse0x26512b0();
   input += synapse0x26512f0();
   input += synapse0x2651330();
   input += synapse0x2651370();
   input += synapse0x2650e00();
   input += synapse0x2650e40();
   input += synapse0x26514c0();
   input += synapse0x2651500();
   input += synapse0x2651540();
   input += synapse0x2651580();
   input += synapse0x26515c0();
   input += synapse0x2651600();
   return input;
}

double NNfunction_NN_1_6::neuron0x2650c70() {
   double input = input0x2650c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2651640() {
   double input = 1.06006;
   input += synapse0x2651980();
   input += synapse0x26519c0();
   input += synapse0x2651a00();
   input += synapse0x2651a40();
   input += synapse0x2651a80();
   input += synapse0x2651ac0();
   input += synapse0x2651b00();
   input += synapse0x2651b40();
   input += synapse0x2651b80();
   input += synapse0x2651bc0();
   input += synapse0x2651c00();
   input += synapse0x2651c40();
   input += synapse0x2651c80();
   input += synapse0x2651cc0();
   input += synapse0x2651d00();
   input += synapse0x2651d40();
   input += synapse0x26517d0();
   input += synapse0x2651810();
   input += synapse0x2651e90();
   input += synapse0x2651ed0();
   input += synapse0x2651f10();
   input += synapse0x2651f50();
   input += synapse0x2651f90();
   input += synapse0x2651fd0();
   return input;
}

double NNfunction_NN_1_6::neuron0x2651640() {
   double input = input0x2651640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2652010() {
   double input = 0.246911;
   input += synapse0x2652350();
   input += synapse0x2646920();
   input += synapse0x2646960();
   input += synapse0x26469a0();
   input += synapse0x2646bf0();
   input += synapse0x2646c30();
   input += synapse0x2646c70();
   input += synapse0x2646ec0();
   input += synapse0x2646f00();
   input += synapse0x2647150();
   input += synapse0x2647190();
   input += synapse0x26471d0();
   input += synapse0x2647420();
   input += synapse0x2647460();
   input += synapse0x26476b0();
   input += synapse0x26476f0();
   input += synapse0x26521a0();
   input += synapse0x26521e0();
   input += synapse0x2647840();
   input += synapse0x2647d50();
   input += synapse0x2647d90();
   input += synapse0x2647dd0();
   input += synapse0x2648020();
   input += synapse0x2648060();
   return input;
}

double NNfunction_NN_1_6::neuron0x2652010() {
   double input = input0x2652010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x26480a0() {
   double input = -3.20281;
   input += synapse0x2647910();
   input += synapse0x2647950();
   input += synapse0x2647990();
   input += synapse0x26479d0();
   input += synapse0x2648350();
   input += synapse0x26546a0();
   input += synapse0x26546e0();
   input += synapse0x2654720();
   input += synapse0x2654760();
   input += synapse0x26547a0();
   input += synapse0x26547e0();
   input += synapse0x2654820();
   input += synapse0x2654860();
   input += synapse0x26548a0();
   input += synapse0x26548e0();
   input += synapse0x2654920();
   input += synapse0x2648230();
   input += synapse0x2648270();
   input += synapse0x2654a70();
   input += synapse0x2654ab0();
   input += synapse0x2654af0();
   input += synapse0x2654b30();
   input += synapse0x2654b70();
   input += synapse0x2654bb0();
   return input;
}

double NNfunction_NN_1_6::neuron0x26480a0() {
   double input = input0x26480a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2654bf0() {
   double input = -1.9591;
   input += synapse0x2654f30();
   input += synapse0x2654f70();
   input += synapse0x2654fb0();
   input += synapse0x2654ff0();
   input += synapse0x2655030();
   input += synapse0x2655070();
   input += synapse0x26550b0();
   input += synapse0x26550f0();
   input += synapse0x2655130();
   input += synapse0x2655170();
   input += synapse0x26551b0();
   input += synapse0x26551f0();
   input += synapse0x2655230();
   input += synapse0x2655270();
   input += synapse0x26552b0();
   input += synapse0x26552f0();
   input += synapse0x2654d80();
   input += synapse0x2654dc0();
   input += synapse0x2655440();
   input += synapse0x2655480();
   input += synapse0x26554c0();
   input += synapse0x2655500();
   input += synapse0x2655540();
   input += synapse0x2655580();
   return input;
}

double NNfunction_NN_1_6::neuron0x2654bf0() {
   double input = input0x2654bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x26555c0() {
   double input = 0.0683165;
   input += synapse0x2655900();
   input += synapse0x2655940();
   input += synapse0x2655980();
   input += synapse0x26559c0();
   input += synapse0x2655a00();
   input += synapse0x2655a40();
   input += synapse0x2655a80();
   input += synapse0x2655ac0();
   input += synapse0x2655b00();
   input += synapse0x2655b40();
   input += synapse0x2655b80();
   input += synapse0x2655bc0();
   input += synapse0x2655c00();
   input += synapse0x2655c40();
   input += synapse0x2655c80();
   input += synapse0x2655cc0();
   input += synapse0x2655750();
   input += synapse0x2655790();
   input += synapse0x2655e10();
   input += synapse0x2655e50();
   input += synapse0x2655e90();
   input += synapse0x2655ed0();
   input += synapse0x2655f10();
   input += synapse0x2655f50();
   return input;
}

double NNfunction_NN_1_6::neuron0x26555c0() {
   double input = input0x26555c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2655f90() {
   double input = -3.23373;
   input += synapse0x26562d0();
   input += synapse0x2656310();
   input += synapse0x2656350();
   input += synapse0x2656390();
   input += synapse0x26563d0();
   input += synapse0x2656410();
   input += synapse0x2656450();
   input += synapse0x2656490();
   input += synapse0x26564d0();
   input += synapse0x2656510();
   input += synapse0x2656550();
   input += synapse0x2656590();
   input += synapse0x26565d0();
   input += synapse0x2656610();
   input += synapse0x2656650();
   input += synapse0x2656690();
   input += synapse0x2656120();
   input += synapse0x2656160();
   input += synapse0x26567e0();
   input += synapse0x2656820();
   input += synapse0x2656860();
   input += synapse0x26568a0();
   input += synapse0x26568e0();
   input += synapse0x2656920();
   return input;
}

double NNfunction_NN_1_6::neuron0x2655f90() {
   double input = input0x2655f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2656960() {
   double input = 2.07728;
   input += synapse0x2656ca0();
   input += synapse0x2656ce0();
   input += synapse0x2656d20();
   input += synapse0x2656d60();
   input += synapse0x2656da0();
   input += synapse0x2656de0();
   input += synapse0x2656e20();
   input += synapse0x2656e60();
   input += synapse0x2656ea0();
   input += synapse0x2656ee0();
   input += synapse0x2656f20();
   input += synapse0x2656f60();
   input += synapse0x2656fa0();
   input += synapse0x2656fe0();
   input += synapse0x2657020();
   input += synapse0x2657060();
   input += synapse0x2656af0();
   input += synapse0x2656b30();
   input += synapse0x26571b0();
   input += synapse0x26571f0();
   input += synapse0x2657230();
   input += synapse0x2657270();
   input += synapse0x26572b0();
   input += synapse0x26572f0();
   return input;
}

double NNfunction_NN_1_6::neuron0x2656960() {
   double input = input0x2656960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2657330() {
   double input = 0.566653;
   input += synapse0x2657670();
   input += synapse0x26576b0();
   input += synapse0x26576f0();
   input += synapse0x2657730();
   input += synapse0x2657770();
   input += synapse0x26577b0();
   input += synapse0x26577f0();
   input += synapse0x2657830();
   input += synapse0x2657870();
   input += synapse0x26578b0();
   input += synapse0x26578f0();
   input += synapse0x2657930();
   input += synapse0x2657970();
   input += synapse0x26579b0();
   input += synapse0x26579f0();
   input += synapse0x2657a30();
   input += synapse0x26574c0();
   input += synapse0x2657500();
   input += synapse0x2657b80();
   input += synapse0x2657bc0();
   input += synapse0x2657c00();
   input += synapse0x2657c40();
   input += synapse0x2657c80();
   input += synapse0x2657cc0();
   return input;
}

double NNfunction_NN_1_6::neuron0x2657330() {
   double input = input0x2657330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2657d00() {
   double input = -1.39023;
   input += synapse0x2658040();
   input += synapse0x2658080();
   input += synapse0x26580c0();
   input += synapse0x2658100();
   input += synapse0x2658140();
   input += synapse0x2658180();
   input += synapse0x26581c0();
   input += synapse0x2658200();
   input += synapse0x2658240();
   input += synapse0x2658280();
   input += synapse0x26582c0();
   input += synapse0x2658300();
   input += synapse0x2658340();
   input += synapse0x2658380();
   input += synapse0x26583c0();
   input += synapse0x2658400();
   input += synapse0x2657e90();
   input += synapse0x2657ed0();
   input += synapse0x2658550();
   input += synapse0x2658590();
   input += synapse0x26585d0();
   input += synapse0x2658610();
   input += synapse0x2658650();
   input += synapse0x2658690();
   return input;
}

double NNfunction_NN_1_6::neuron0x2657d00() {
   double input = input0x2657d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x26586d0() {
   double input = -2.12808;
   input += synapse0x2658a10();
   input += synapse0x2658a50();
   input += synapse0x2658a90();
   input += synapse0x2658ad0();
   input += synapse0x2658b10();
   input += synapse0x2658b50();
   input += synapse0x2658b90();
   input += synapse0x2658bd0();
   input += synapse0x2658c10();
   input += synapse0x2658c50();
   input += synapse0x2658c90();
   input += synapse0x2658cd0();
   input += synapse0x2658d10();
   input += synapse0x2658d50();
   input += synapse0x2658d90();
   input += synapse0x2658dd0();
   input += synapse0x2658860();
   input += synapse0x26588a0();
   input += synapse0x2658f20();
   input += synapse0x2658f60();
   input += synapse0x2658fa0();
   input += synapse0x2658fe0();
   input += synapse0x2659020();
   input += synapse0x2659060();
   return input;
}

double NNfunction_NN_1_6::neuron0x26586d0() {
   double input = input0x26586d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x26590a0() {
   double input = -0.57908;
   input += synapse0x2641b10();
   input += synapse0x2641b50();
   input += synapse0x2641b90();
   input += synapse0x2641bd0();
   input += synapse0x2641c10();
   input += synapse0x2641c50();
   input += synapse0x2641c90();
   input += synapse0x2641cd0();
   input += synapse0x26597f0();
   input += synapse0x2659830();
   input += synapse0x2659870();
   input += synapse0x26598b0();
   input += synapse0x26598f0();
   input += synapse0x2659930();
   input += synapse0x2659970();
   input += synapse0x26599b0();
   input += synapse0x2659230();
   input += synapse0x2659270();
   input += synapse0x2659b00();
   input += synapse0x2659b40();
   input += synapse0x2659b80();
   input += synapse0x2659bc0();
   input += synapse0x2659c00();
   input += synapse0x2659c40();
   return input;
}

double NNfunction_NN_1_6::neuron0x26590a0() {
   double input = input0x26590a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2659c80() {
   double input = -0.918116;
   input += synapse0x2659fc0();
   input += synapse0x265a000();
   input += synapse0x265a040();
   input += synapse0x265a080();
   input += synapse0x265a0c0();
   input += synapse0x265a100();
   input += synapse0x265a140();
   input += synapse0x265a180();
   input += synapse0x265a1c0();
   input += synapse0x265a200();
   input += synapse0x265a240();
   input += synapse0x265a280();
   input += synapse0x265a2c0();
   input += synapse0x265a300();
   input += synapse0x265a340();
   input += synapse0x265a380();
   input += synapse0x2659e10();
   input += synapse0x2659e50();
   input += synapse0x265a4d0();
   input += synapse0x265a510();
   input += synapse0x265a550();
   input += synapse0x265a590();
   input += synapse0x265a5d0();
   input += synapse0x265a610();
   return input;
}

double NNfunction_NN_1_6::neuron0x2659c80() {
   double input = input0x2659c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x265a650() {
   double input = 0.451665;
   input += synapse0x265a990();
   input += synapse0x265a9d0();
   input += synapse0x265aa10();
   input += synapse0x265aa50();
   input += synapse0x265aa90();
   input += synapse0x265aad0();
   input += synapse0x265ab10();
   input += synapse0x265ab50();
   input += synapse0x265ab90();
   input += synapse0x265abd0();
   input += synapse0x265ac10();
   input += synapse0x265ac50();
   input += synapse0x265ac90();
   input += synapse0x265acd0();
   input += synapse0x265ad10();
   input += synapse0x265ad50();
   input += synapse0x265a7e0();
   input += synapse0x265a820();
   input += synapse0x264b350();
   input += synapse0x264b390();
   input += synapse0x264b3d0();
   input += synapse0x264b410();
   input += synapse0x264b450();
   input += synapse0x264b490();
   return input;
}

double NNfunction_NN_1_6::neuron0x265a650() {
   double input = input0x265a650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x264b4d0() {
   double input = 0.22735;
   input += synapse0x264b810();
   input += synapse0x264b850();
   input += synapse0x264b890();
   input += synapse0x264b8d0();
   input += synapse0x264b910();
   input += synapse0x264b950();
   input += synapse0x264b990();
   input += synapse0x264b9d0();
   input += synapse0x264ba10();
   input += synapse0x264ba50();
   input += synapse0x264ba90();
   input += synapse0x264bad0();
   input += synapse0x264bb10();
   input += synapse0x264bb50();
   input += synapse0x264bb90();
   input += synapse0x264bbd0();
   input += synapse0x264b660();
   input += synapse0x264b6a0();
   input += synapse0x264bd20();
   input += synapse0x264bd60();
   input += synapse0x264bda0();
   input += synapse0x264bde0();
   input += synapse0x264be20();
   input += synapse0x264be60();
   return input;
}

double NNfunction_NN_1_6::neuron0x264b4d0() {
   double input = input0x264b4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x264bea0() {
   double input = -0.437983;
   input += synapse0x264c1e0();
   input += synapse0x264c220();
   input += synapse0x264c260();
   input += synapse0x264c2a0();
   input += synapse0x264c2e0();
   input += synapse0x264c320();
   input += synapse0x264c360();
   input += synapse0x264c3a0();
   input += synapse0x264c3e0();
   input += synapse0x264c420();
   input += synapse0x264c460();
   input += synapse0x264c4a0();
   input += synapse0x264c4e0();
   input += synapse0x264c520();
   input += synapse0x264c560();
   input += synapse0x264c5a0();
   input += synapse0x264c030();
   input += synapse0x264c070();
   input += synapse0x264c6f0();
   input += synapse0x264c730();
   input += synapse0x264c770();
   input += synapse0x264c7b0();
   input += synapse0x264c7f0();
   input += synapse0x264c830();
   return input;
}

double NNfunction_NN_1_6::neuron0x264bea0() {
   double input = input0x264bea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x264c870() {
   double input = 2.08885;
   input += synapse0x264cbb0();
   input += synapse0x264cbf0();
   input += synapse0x264cc30();
   input += synapse0x264cc70();
   input += synapse0x264ccb0();
   input += synapse0x264ccf0();
   input += synapse0x264cd30();
   input += synapse0x264cd70();
   input += synapse0x264cdb0();
   input += synapse0x264cdf0();
   input += synapse0x264ce30();
   input += synapse0x264ce70();
   input += synapse0x264ceb0();
   input += synapse0x264cef0();
   input += synapse0x264cf30();
   input += synapse0x264cf70();
   input += synapse0x264ca00();
   input += synapse0x264ca40();
   input += synapse0x264d0c0();
   input += synapse0x264d100();
   input += synapse0x264d140();
   input += synapse0x264d180();
   input += synapse0x264d1c0();
   input += synapse0x264d200();
   return input;
}

double NNfunction_NN_1_6::neuron0x264c870() {
   double input = input0x264c870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x265eeb0() {
   double input = 0.396565;
   input += synapse0x265f0d0();
   input += synapse0x265f110();
   input += synapse0x265f150();
   input += synapse0x265f190();
   input += synapse0x265f1d0();
   input += synapse0x265f210();
   input += synapse0x265f250();
   input += synapse0x265f290();
   input += synapse0x265f2d0();
   input += synapse0x265f310();
   input += synapse0x265f350();
   input += synapse0x265f390();
   input += synapse0x265f3d0();
   input += synapse0x265f410();
   input += synapse0x265f450();
   input += synapse0x265f490();
   input += synapse0x264d240();
   input += synapse0x264d280();
   input += synapse0x265f5e0();
   input += synapse0x265f620();
   input += synapse0x265f660();
   input += synapse0x265f6a0();
   input += synapse0x265f6e0();
   input += synapse0x265f720();
   return input;
}

double NNfunction_NN_1_6::neuron0x265eeb0() {
   double input = input0x265eeb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x265f760() {
   double input = -2.52004;
   input += synapse0x265faa0();
   input += synapse0x265fae0();
   input += synapse0x265fb20();
   input += synapse0x265fb60();
   input += synapse0x265fba0();
   input += synapse0x265fbe0();
   input += synapse0x265fc20();
   input += synapse0x265fc60();
   input += synapse0x265fca0();
   input += synapse0x265fce0();
   input += synapse0x265fd20();
   input += synapse0x265fd60();
   input += synapse0x265fda0();
   input += synapse0x265fde0();
   input += synapse0x265fe20();
   input += synapse0x265fe60();
   input += synapse0x265f8f0();
   input += synapse0x265f930();
   input += synapse0x265ffb0();
   input += synapse0x265fff0();
   input += synapse0x2660030();
   input += synapse0x2660070();
   input += synapse0x26600b0();
   input += synapse0x26600f0();
   return input;
}

double NNfunction_NN_1_6::neuron0x265f760() {
   double input = input0x265f760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2660130() {
   double input = -0.839143;
   input += synapse0x2660470();
   input += synapse0x26604b0();
   input += synapse0x26604f0();
   input += synapse0x2660530();
   input += synapse0x2660570();
   input += synapse0x26605b0();
   input += synapse0x26605f0();
   input += synapse0x2660630();
   input += synapse0x2660670();
   input += synapse0x26606b0();
   input += synapse0x26606f0();
   input += synapse0x2660730();
   input += synapse0x2660770();
   input += synapse0x26607b0();
   input += synapse0x26607f0();
   input += synapse0x2660830();
   input += synapse0x26602c0();
   input += synapse0x2660300();
   input += synapse0x2660980();
   input += synapse0x26609c0();
   input += synapse0x2660a00();
   input += synapse0x2660a40();
   input += synapse0x2660a80();
   input += synapse0x2660ac0();
   return input;
}

double NNfunction_NN_1_6::neuron0x2660130() {
   double input = input0x2660130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2660b00() {
   double input = -0.23257;
   input += synapse0x2660e40();
   input += synapse0x2660e80();
   input += synapse0x2660ec0();
   input += synapse0x2660f00();
   input += synapse0x2660f40();
   input += synapse0x2660f80();
   input += synapse0x2660fc0();
   input += synapse0x2661000();
   input += synapse0x2661040();
   input += synapse0x2661080();
   input += synapse0x26610c0();
   input += synapse0x2661100();
   input += synapse0x2661140();
   input += synapse0x2661180();
   input += synapse0x26611c0();
   input += synapse0x2661200();
   input += synapse0x2660c90();
   input += synapse0x2660cd0();
   input += synapse0x2661350();
   input += synapse0x2661390();
   input += synapse0x26613d0();
   input += synapse0x2661410();
   input += synapse0x2661450();
   input += synapse0x2661490();
   return input;
}

double NNfunction_NN_1_6::neuron0x2660b00() {
   double input = input0x2660b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2667d00() {
   double input = -0.289219;
   input += synapse0x263da30();
   input += synapse0x263da70();
   input += synapse0x263ef40();
   input += synapse0x263ef80();
   input += synapse0x263f910();
   input += synapse0x263f950();
   input += synapse0x26406e0();
   input += synapse0x2640720();
   input += synapse0x26410b0();
   input += synapse0x26410f0();
   input += synapse0x2641a80();
   input += synapse0x2641ac0();
   input += synapse0x2642560();
   input += synapse0x26425a0();
   input += synapse0x2642f30();
   input += synapse0x2642f70();
   input += synapse0x2640010();
   input += synapse0x2640050();
   input += synapse0x2644ae0();
   input += synapse0x2644b20();
   input += synapse0x26454b0();
   input += synapse0x26454f0();
   input += synapse0x2645e80();
   input += synapse0x2645ec0();
   input += synapse0x2646850();
   input += synapse0x2646890();
   input += synapse0x263a9c0();
   input += synapse0x263aa00();
   input += synapse0x2648940();
   input += synapse0x2648980();
   input += synapse0x2649310();
   input += synapse0x2649350();
   input += synapse0x2649ce0();
   input += synapse0x2649d20();
   input += synapse0x264a6b0();
   input += synapse0x264a6f0();
   input += synapse0x264b080();
   input += synapse0x264b0c0();
   input += synapse0x2643bd0();
   input += synapse0x2643c10();
   input += synapse0x264d480();
   input += synapse0x264d4c0();
   input += synapse0x264de10();
   input += synapse0x264de50();
   input += synapse0x264e7e0();
   input += synapse0x264e820();
   input += synapse0x264f1b0();
   input += synapse0x264f1f0();
   input += synapse0x264fb80();
   input += synapse0x264fbc0();
   return input;
}

double NNfunction_NN_1_6::neuron0x2667d00() {
   double input = input0x2667d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x26680a0() {
   double input = -1.04155;
   input += synapse0x26522c0();
   input += synapse0x2652300();
   input += synapse0x2647880();
   input += synapse0x26478c0();
   input += synapse0x2654ea0();
   input += synapse0x2654ee0();
   input += synapse0x2655870();
   input += synapse0x26558b0();
   input += synapse0x2656240();
   input += synapse0x2656280();
   input += synapse0x2656c10();
   input += synapse0x2656c50();
   input += synapse0x26575e0();
   input += synapse0x2657620();
   input += synapse0x2657fb0();
   input += synapse0x2657ff0();
   input += synapse0x2658980();
   input += synapse0x26589c0();
   input += synapse0x2659350();
   input += synapse0x2659390();
   input += synapse0x2659f30();
   input += synapse0x2659f70();
   input += synapse0x265a900();
   input += synapse0x265a940();
   input += synapse0x264b780();
   input += synapse0x264b7c0();
   input += synapse0x264c150();
   input += synapse0x264c190();
   input += synapse0x264cb20();
   input += synapse0x264cb60();
   input += synapse0x265f040();
   input += synapse0x265f080();
   input += synapse0x265fa10();
   input += synapse0x265fa50();
   input += synapse0x26603e0();
   input += synapse0x2660420();
   input += synapse0x2660db0();
   input += synapse0x2660df0();
   input += synapse0x263cca0();
   input += synapse0x263cce0();
   input += synapse0x2650550();
   input += synapse0x2650590();
   input += synapse0x26614d0();
   input += synapse0x2661510();
   input += synapse0x2661550();
   input += synapse0x2661590();
   input += synapse0x2668440();
   input += synapse0x2668480();
   input += synapse0x26684c0();
   input += synapse0x2668500();
   return input;
}

double NNfunction_NN_1_6::neuron0x26680a0() {
   double input = input0x26680a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x2668540() {
   double input = -1.44458;
   input += synapse0x2668880();
   input += synapse0x26688c0();
   input += synapse0x2668900();
   input += synapse0x2668940();
   input += synapse0x2668980();
   input += synapse0x26689c0();
   input += synapse0x2668a00();
   input += synapse0x2668a40();
   input += synapse0x2668a80();
   input += synapse0x2668ac0();
   input += synapse0x2668b00();
   input += synapse0x2668b40();
   input += synapse0x2668b80();
   input += synapse0x2668bc0();
   input += synapse0x2668c00();
   input += synapse0x2668c40();
   input += synapse0x26686d0();
   input += synapse0x2668710();
   input += synapse0x2668d90();
   input += synapse0x2668dd0();
   input += synapse0x2668e10();
   input += synapse0x2668e50();
   input += synapse0x2668e90();
   input += synapse0x2668ed0();
   input += synapse0x2668f10();
   input += synapse0x2668f50();
   input += synapse0x2668f90();
   input += synapse0x2668fd0();
   input += synapse0x2669010();
   input += synapse0x2669050();
   input += synapse0x2669090();
   input += synapse0x26690d0();
   input += synapse0x2668c80();
   input += synapse0x2668cc0();
   input += synapse0x2668d00();
   input += synapse0x2668d40();
   input += synapse0x2669320();
   input += synapse0x2669360();
   input += synapse0x26693a0();
   input += synapse0x26693e0();
   input += synapse0x2669420();
   input += synapse0x2669460();
   input += synapse0x26694a0();
   input += synapse0x26694e0();
   input += synapse0x2669520();
   input += synapse0x2669560();
   input += synapse0x26695a0();
   input += synapse0x26695e0();
   input += synapse0x2669620();
   input += synapse0x2669660();
   return input;
}

double NNfunction_NN_1_6::neuron0x2668540() {
   double input = input0x2668540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x26696a0() {
   double input = 0.808541;
   input += synapse0x26699e0();
   input += synapse0x2669a20();
   input += synapse0x2669a60();
   input += synapse0x2669aa0();
   input += synapse0x2669ae0();
   input += synapse0x2669b20();
   input += synapse0x2669b60();
   input += synapse0x2669ba0();
   input += synapse0x2669be0();
   input += synapse0x2669c20();
   input += synapse0x2669c60();
   input += synapse0x2669ca0();
   input += synapse0x2669ce0();
   input += synapse0x2669d20();
   input += synapse0x2669d60();
   input += synapse0x2669da0();
   input += synapse0x2669830();
   input += synapse0x2669870();
   input += synapse0x2669ef0();
   input += synapse0x2669f30();
   input += synapse0x2669f70();
   input += synapse0x2669fb0();
   input += synapse0x2669ff0();
   input += synapse0x266a030();
   input += synapse0x266a070();
   input += synapse0x266a0b0();
   input += synapse0x266a0f0();
   input += synapse0x266a130();
   input += synapse0x266a170();
   input += synapse0x266a1b0();
   input += synapse0x266a1f0();
   input += synapse0x266a230();
   input += synapse0x2669de0();
   input += synapse0x2669e20();
   input += synapse0x2669e60();
   input += synapse0x2669ea0();
   input += synapse0x266a480();
   input += synapse0x266a4c0();
   input += synapse0x266a500();
   input += synapse0x266a540();
   input += synapse0x266a580();
   input += synapse0x266a5c0();
   input += synapse0x266a600();
   input += synapse0x266a640();
   input += synapse0x266a680();
   input += synapse0x266a6c0();
   input += synapse0x266a700();
   input += synapse0x266a740();
   input += synapse0x266a780();
   input += synapse0x266a7c0();
   return input;
}

double NNfunction_NN_1_6::neuron0x26696a0() {
   double input = input0x26696a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x266a800() {
   double input = -1.09522;
   input += synapse0x266ab40();
   input += synapse0x266ab80();
   input += synapse0x266abc0();
   input += synapse0x266ac00();
   input += synapse0x266ac40();
   input += synapse0x266ac80();
   input += synapse0x266acc0();
   input += synapse0x266ad00();
   input += synapse0x266ad40();
   input += synapse0x266ad80();
   input += synapse0x266adc0();
   input += synapse0x266ae00();
   input += synapse0x266ae40();
   input += synapse0x266ae80();
   input += synapse0x266aec0();
   input += synapse0x266af00();
   input += synapse0x266a990();
   input += synapse0x266a9d0();
   input += synapse0x266b050();
   input += synapse0x266b090();
   input += synapse0x266b0d0();
   input += synapse0x266b110();
   input += synapse0x266b150();
   input += synapse0x266b190();
   input += synapse0x266b1d0();
   input += synapse0x266b210();
   input += synapse0x266b250();
   input += synapse0x266b290();
   input += synapse0x266b2d0();
   input += synapse0x266b310();
   input += synapse0x266b350();
   input += synapse0x266b390();
   input += synapse0x266af40();
   input += synapse0x266af80();
   input += synapse0x266afc0();
   input += synapse0x266b000();
   input += synapse0x266b5e0();
   input += synapse0x266b620();
   input += synapse0x266b660();
   input += synapse0x266b6a0();
   input += synapse0x266b6e0();
   input += synapse0x266b720();
   input += synapse0x266b760();
   input += synapse0x266b7a0();
   input += synapse0x266b7e0();
   input += synapse0x266b820();
   input += synapse0x266b860();
   input += synapse0x266b8a0();
   input += synapse0x266b8e0();
   input += synapse0x266b920();
   return input;
}

double NNfunction_NN_1_6::neuron0x266a800() {
   double input = input0x266a800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_6::input0x266b960() {
   double input = 1.31892;
   input += synapse0x263ca40();
   input += synapse0x266bb80();
   input += synapse0x266bbc0();
   input += synapse0x266bc00();
   input += synapse0x266bc40();
   return input;
}

double NNfunction_NN_1_6::neuron0x266b960() {
   double input = input0x266b960();
   return (input * 1)+0;
}

double NNfunction_NN_1_6::synapse0x23f7890() {
   return (neuron0x2637a20()*0.013002);
}

double NNfunction_NN_1_6::synapse0x26378e0() {
   return (neuron0x2637d60()*-0.00276968);
}

double NNfunction_NN_1_6::synapse0x2637920() {
   return (neuron0x26380a0()*-0.26348);
}

double NNfunction_NN_1_6::synapse0x263cd30() {
   return (neuron0x26383e0()*-3.0991);
}

double NNfunction_NN_1_6::synapse0x263cd70() {
   return (neuron0x2638720()*-0.00764872);
}

double NNfunction_NN_1_6::synapse0x263cdb0() {
   return (neuron0x2638a60()*-0.00929066);
}

double NNfunction_NN_1_6::synapse0x263cdf0() {
   return (neuron0x2638da0()*-0.00825249);
}

double NNfunction_NN_1_6::synapse0x263ce30() {
   return (neuron0x26390e0()*0.0117936);
}

double NNfunction_NN_1_6::synapse0x263ce70() {
   return (neuron0x2639420()*0.0101831);
}

double NNfunction_NN_1_6::synapse0x263ceb0() {
   return (neuron0x2639760()*0.0124562);
}

double NNfunction_NN_1_6::synapse0x263cef0() {
   return (neuron0x2639aa0()*-0.00301915);
}

double NNfunction_NN_1_6::synapse0x263cf30() {
   return (neuron0x2639de0()*-1.7769);
}

double NNfunction_NN_1_6::synapse0x263cf70() {
   return (neuron0x263a120()*0.0688492);
}

double NNfunction_NN_1_6::synapse0x263cfb0() {
   return (neuron0x263a460()*0.0134765);
}

double NNfunction_NN_1_6::synapse0x263cff0() {
   return (neuron0x263a7a0()*-0.01708);
}

double NNfunction_NN_1_6::synapse0x263d030() {
   return (neuron0x263aae0()*0.061829);
}

double NNfunction_NN_1_6::synapse0x2637850() {
   return (neuron0x263ae20()*-0.0489473);
}

double NNfunction_NN_1_6::synapse0x2637890() {
   return (neuron0x263b380()*0.00731857);
}

double NNfunction_NN_1_6::synapse0x23e9150() {
   return (neuron0x263b5a0()*0.0197354);
}

double NNfunction_NN_1_6::synapse0x23e9190() {
   return (neuron0x263b8e0()*0.0024663);
}

double NNfunction_NN_1_6::synapse0x263d290() {
   return (neuron0x263bc20()*0.0141811);
}

double NNfunction_NN_1_6::synapse0x263d2d0() {
   return (neuron0x263bf60()*0.00459199);
}

double NNfunction_NN_1_6::synapse0x263d310() {
   return (neuron0x263c2a0()*0.0028904);
}

double NNfunction_NN_1_6::synapse0x263d350() {
   return (neuron0x263c5e0()*0.0945201);
}

double NNfunction_NN_1_6::synapse0x263d6d0() {
   return (neuron0x2637a20()*0.0887156);
}

double NNfunction_NN_1_6::synapse0x263d710() {
   return (neuron0x2637d60()*-0.0004774);
}

double NNfunction_NN_1_6::synapse0x263d750() {
   return (neuron0x26380a0()*2.51761);
}

double NNfunction_NN_1_6::synapse0x263d790() {
   return (neuron0x26383e0()*-0.0154658);
}

double NNfunction_NN_1_6::synapse0x263d7d0() {
   return (neuron0x2638720()*0.0300234);
}

double NNfunction_NN_1_6::synapse0x263d810() {
   return (neuron0x2638a60()*-0.00769208);
}

double NNfunction_NN_1_6::synapse0x263d850() {
   return (neuron0x2638da0()*0.00358485);
}

double NNfunction_NN_1_6::synapse0x263d890() {
   return (neuron0x26390e0()*0.02611);
}

double NNfunction_NN_1_6::synapse0x263d8d0() {
   return (neuron0x2639420()*0.00757207);
}

double NNfunction_NN_1_6::synapse0x263d180() {
   return (neuron0x2639760()*0.0063059);
}

double NNfunction_NN_1_6::synapse0x263d1c0() {
   return (neuron0x2639aa0()*0.00257994);
}

double NNfunction_NN_1_6::synapse0x263d200() {
   return (neuron0x2639de0()*0.0056369);
}

double NNfunction_NN_1_6::synapse0x263d240() {
   return (neuron0x263a120()*0.0552409);
}

double NNfunction_NN_1_6::synapse0x263db20() {
   return (neuron0x263a460()*-0.000564964);
}

double NNfunction_NN_1_6::synapse0x263db60() {
   return (neuron0x263a7a0()*0.0253473);
}

double NNfunction_NN_1_6::synapse0x263dba0() {
   return (neuron0x263aae0()*0.0143943);
}

double NNfunction_NN_1_6::synapse0x263d520() {
   return (neuron0x263ae20()*-0.0386666);
}

double NNfunction_NN_1_6::synapse0x263d560() {
   return (neuron0x263b380()*0.0116672);
}

double NNfunction_NN_1_6::synapse0x263dcf0() {
   return (neuron0x263b5a0()*0.00196985);
}

double NNfunction_NN_1_6::synapse0x263dd30() {
   return (neuron0x263b8e0()*0.00381895);
}

double NNfunction_NN_1_6::synapse0x263dd70() {
   return (neuron0x263bc20()*0.0112008);
}

double NNfunction_NN_1_6::synapse0x263ddb0() {
   return (neuron0x263bf60()*-0.0223797);
}

double NNfunction_NN_1_6::synapse0x263ddf0() {
   return (neuron0x263c2a0()*0.00527852);
}

double NNfunction_NN_1_6::synapse0x263de30() {
   return (neuron0x263c5e0()*-4.31923);
}

double NNfunction_NN_1_6::synapse0x263e1b0() {
   return (neuron0x2637a20()*-0.150514);
}

double NNfunction_NN_1_6::synapse0x263e1f0() {
   return (neuron0x2637d60()*-0.00308009);
}

double NNfunction_NN_1_6::synapse0x263e230() {
   return (neuron0x26380a0()*0.258631);
}

double NNfunction_NN_1_6::synapse0x263e270() {
   return (neuron0x26383e0()*0.0155288);
}

double NNfunction_NN_1_6::synapse0x263e2b0() {
   return (neuron0x2638720()*0.00397463);
}

double NNfunction_NN_1_6::synapse0x263e2f0() {
   return (neuron0x2638a60()*-0.000993339);
}

double NNfunction_NN_1_6::synapse0x263e330() {
   return (neuron0x2638da0()*0.00473418);
}

double NNfunction_NN_1_6::synapse0x263e370() {
   return (neuron0x26390e0()*0.0101475);
}

double NNfunction_NN_1_6::synapse0x263e3b0() {
   return (neuron0x2639420()*0.0143287);
}

double NNfunction_NN_1_6::synapse0x263e3f0() {
   return (neuron0x2639760()*-0.00110566);
}

double NNfunction_NN_1_6::synapse0x263e430() {
   return (neuron0x2639aa0()*-0.0176369);
}

double NNfunction_NN_1_6::synapse0x263e470() {
   return (neuron0x2639de0()*0.317285);
}

double NNfunction_NN_1_6::synapse0x263e4b0() {
   return (neuron0x263a120()*0.0240143);
}

double NNfunction_NN_1_6::synapse0x263e4f0() {
   return (neuron0x263a460()*-0.0075566);
}

double NNfunction_NN_1_6::synapse0x263e530() {
   return (neuron0x263a7a0()*-0.00523569);
}

double NNfunction_NN_1_6::synapse0x263e570() {
   return (neuron0x263aae0()*-1.61261e-05);
}

double NNfunction_NN_1_6::synapse0x263e000() {
   return (neuron0x263ae20()*-0.00980024);
}

double NNfunction_NN_1_6::synapse0x263e040() {
   return (neuron0x263b380()*-0.00536742);
}

double NNfunction_NN_1_6::synapse0x23f6f60() {
   return (neuron0x263b5a0()*0.0103336);
}

double NNfunction_NN_1_6::synapse0x23f6fa0() {
   return (neuron0x263b8e0()*0.0175768);
}

double NNfunction_NN_1_6::synapse0x2626ab0() {
   return (neuron0x263bc20()*0.00111028);
}

double NNfunction_NN_1_6::synapse0x2626af0() {
   return (neuron0x263bf60()*-0.00284541);
}

double NNfunction_NN_1_6::synapse0x2626b30() {
   return (neuron0x263c2a0()*0.0022113);
}

double NNfunction_NN_1_6::synapse0x2637960() {
   return (neuron0x263c5e0()*-0.701224);
}

double NNfunction_NN_1_6::synapse0x263dac0() {
   return (neuron0x2637a20()*0.00831475);
}

double NNfunction_NN_1_6::synapse0x26379a0() {
   return (neuron0x2637d60()*0.0100108);
}

double NNfunction_NN_1_6::synapse0x26379e0() {
   return (neuron0x26380a0()*0.20824);
}

double NNfunction_NN_1_6::synapse0x263e6c0() {
   return (neuron0x26383e0()*0.0870627);
}

double NNfunction_NN_1_6::synapse0x263e700() {
   return (neuron0x2638720()*-0.117439);
}

double NNfunction_NN_1_6::synapse0x263e740() {
   return (neuron0x2638a60()*0.0627838);
}

double NNfunction_NN_1_6::synapse0x263e780() {
   return (neuron0x2638da0()*-0.0365402);
}

double NNfunction_NN_1_6::synapse0x263e7c0() {
   return (neuron0x26390e0()*-0.0145604);
}

double NNfunction_NN_1_6::synapse0x263e800() {
   return (neuron0x2639420()*-0.00501871);
}

double NNfunction_NN_1_6::synapse0x263e840() {
   return (neuron0x2639760()*-0.000179359);
}

double NNfunction_NN_1_6::synapse0x263e880() {
   return (neuron0x2639aa0()*0.021876);
}

double NNfunction_NN_1_6::synapse0x263e8c0() {
   return (neuron0x2639de0()*-0.345905);
}

double NNfunction_NN_1_6::synapse0x263e900() {
   return (neuron0x263a120()*-0.202026);
}

double NNfunction_NN_1_6::synapse0x263e940() {
   return (neuron0x263a460()*0.137382);
}

double NNfunction_NN_1_6::synapse0x263e980() {
   return (neuron0x263a7a0()*-0.0132877);
}

double NNfunction_NN_1_6::synapse0x263e9c0() {
   return (neuron0x263aae0()*-0.0494843);
}

double NNfunction_NN_1_6::synapse0x263d910() {
   return (neuron0x263ae20()*0.0459946);
}

double NNfunction_NN_1_6::synapse0x263d950() {
   return (neuron0x263b380()*-0.122325);
}

double NNfunction_NN_1_6::synapse0x263eb10() {
   return (neuron0x263b5a0()*-0.0847092);
}

double NNfunction_NN_1_6::synapse0x263eb50() {
   return (neuron0x263b8e0()*-0.0254209);
}

double NNfunction_NN_1_6::synapse0x263eb90() {
   return (neuron0x263bc20()*0.0168819);
}

double NNfunction_NN_1_6::synapse0x263ebd0() {
   return (neuron0x263bf60()*0.00623625);
}

double NNfunction_NN_1_6::synapse0x263ec10() {
   return (neuron0x263c2a0()*0.00397477);
}

double NNfunction_NN_1_6::synapse0x263ec50() {
   return (neuron0x263c5e0()*1.25566);
}

double NNfunction_NN_1_6::synapse0x263efd0() {
   return (neuron0x2637a20()*-0.0350704);
}

double NNfunction_NN_1_6::synapse0x263f010() {
   return (neuron0x2637d60()*-0.00337054);
}

double NNfunction_NN_1_6::synapse0x263f050() {
   return (neuron0x26380a0()*0.190199);
}

double NNfunction_NN_1_6::synapse0x263f090() {
   return (neuron0x26383e0()*-0.0250297);
}

double NNfunction_NN_1_6::synapse0x263f0d0() {
   return (neuron0x2638720()*-0.00744018);
}

double NNfunction_NN_1_6::synapse0x263f110() {
   return (neuron0x2638a60()*-0.00720034);
}

double NNfunction_NN_1_6::synapse0x263f150() {
   return (neuron0x2638da0()*-0.0176454);
}

double NNfunction_NN_1_6::synapse0x263f190() {
   return (neuron0x26390e0()*-0.0131855);
}

double NNfunction_NN_1_6::synapse0x263f1d0() {
   return (neuron0x2639420()*0.016783);
}

double NNfunction_NN_1_6::synapse0x263f210() {
   return (neuron0x2639760()*-0.0187971);
}

double NNfunction_NN_1_6::synapse0x263f250() {
   return (neuron0x2639aa0()*-0.0241985);
}

double NNfunction_NN_1_6::synapse0x263f290() {
   return (neuron0x2639de0()*-0.2021);
}

double NNfunction_NN_1_6::synapse0x263f2d0() {
   return (neuron0x263a120()*-0.0605431);
}

double NNfunction_NN_1_6::synapse0x263f310() {
   return (neuron0x263a460()*0.0105228);
}

double NNfunction_NN_1_6::synapse0x263f350() {
   return (neuron0x263a7a0()*-0.0248182);
}

double NNfunction_NN_1_6::synapse0x263f390() {
   return (neuron0x263aae0()*-0.0172517);
}

double NNfunction_NN_1_6::synapse0x263ee20() {
   return (neuron0x263ae20()*-0.00392236);
}

double NNfunction_NN_1_6::synapse0x263ee60() {
   return (neuron0x263b380()*-0.0364476);
}

double NNfunction_NN_1_6::synapse0x263f4e0() {
   return (neuron0x263b5a0()*-0.00413255);
}

double NNfunction_NN_1_6::synapse0x263f520() {
   return (neuron0x263b8e0()*-0.0183234);
}

double NNfunction_NN_1_6::synapse0x263f560() {
   return (neuron0x263bc20()*-0.00308159);
}

double NNfunction_NN_1_6::synapse0x263f5a0() {
   return (neuron0x263bf60()*0.0481033);
}

double NNfunction_NN_1_6::synapse0x263f5e0() {
   return (neuron0x263c2a0()*-0.0279961);
}

double NNfunction_NN_1_6::synapse0x263f620() {
   return (neuron0x263c5e0()*4.1483);
}

double NNfunction_NN_1_6::synapse0x263f9a0() {
   return (neuron0x2637a20()*0.0674821);
}

double NNfunction_NN_1_6::synapse0x263f9e0() {
   return (neuron0x2637d60()*-0.0662553);
}

double NNfunction_NN_1_6::synapse0x263fa20() {
   return (neuron0x26380a0()*0.230092);
}

double NNfunction_NN_1_6::synapse0x263fa60() {
   return (neuron0x26383e0()*-1.11038);
}

double NNfunction_NN_1_6::synapse0x263faa0() {
   return (neuron0x2638720()*0.130022);
}

double NNfunction_NN_1_6::synapse0x263fae0() {
   return (neuron0x2638a60()*-0.11495);
}

double NNfunction_NN_1_6::synapse0x263fb20() {
   return (neuron0x2638da0()*0.148574);
}

double NNfunction_NN_1_6::synapse0x263fb60() {
   return (neuron0x26390e0()*0.08314);
}

double NNfunction_NN_1_6::synapse0x263fba0() {
   return (neuron0x2639420()*0.019777);
}

double NNfunction_NN_1_6::synapse0x23f72f0() {
   return (neuron0x2639760()*0.0542633);
}

double NNfunction_NN_1_6::synapse0x23f7330() {
   return (neuron0x2639aa0()*-0.127966);
}

double NNfunction_NN_1_6::synapse0x23f7370() {
   return (neuron0x2639de0()*-1.00498);
}

double NNfunction_NN_1_6::synapse0x23f73b0() {
   return (neuron0x263a120()*-0.343924);
}

double NNfunction_NN_1_6::synapse0x23f73f0() {
   return (neuron0x263a460()*-0.0966108);
}

double NNfunction_NN_1_6::synapse0x23f7430() {
   return (neuron0x263a7a0()*0.0688666);
}

double NNfunction_NN_1_6::synapse0x23f7470() {
   return (neuron0x263aae0()*-0.0436146);
}

double NNfunction_NN_1_6::synapse0x263f7f0() {
   return (neuron0x263ae20()*-0.079904);
}

double NNfunction_NN_1_6::synapse0x263f830() {
   return (neuron0x263b380()*0.0488012);
}

double NNfunction_NN_1_6::synapse0x23f75c0() {
   return (neuron0x263b5a0()*-0.284789);
}

double NNfunction_NN_1_6::synapse0x23f7600() {
   return (neuron0x263b8e0()*-0.0338095);
}

double NNfunction_NN_1_6::synapse0x23f7640() {
   return (neuron0x263bc20()*-0.0292387);
}

double NNfunction_NN_1_6::synapse0x23f7680() {
   return (neuron0x263bf60()*-0.197767);
}

double NNfunction_NN_1_6::synapse0x23f76c0() {
   return (neuron0x263c2a0()*-0.196029);
}

double NNfunction_NN_1_6::synapse0x26403f0() {
   return (neuron0x263c5e0()*-0.611386);
}

double NNfunction_NN_1_6::synapse0x2640770() {
   return (neuron0x2637a20()*0.709326);
}

double NNfunction_NN_1_6::synapse0x26407b0() {
   return (neuron0x2637d60()*0.00201348);
}

double NNfunction_NN_1_6::synapse0x26407f0() {
   return (neuron0x26380a0()*-0.354944);
}

double NNfunction_NN_1_6::synapse0x2640830() {
   return (neuron0x26383e0()*-0.0275531);
}

double NNfunction_NN_1_6::synapse0x2640870() {
   return (neuron0x2638720()*-0.00426818);
}

double NNfunction_NN_1_6::synapse0x26408b0() {
   return (neuron0x2638a60()*-0.0300096);
}

double NNfunction_NN_1_6::synapse0x26408f0() {
   return (neuron0x2638da0()*0.0305405);
}

double NNfunction_NN_1_6::synapse0x2640930() {
   return (neuron0x26390e0()*-0.0369463);
}

double NNfunction_NN_1_6::synapse0x2640970() {
   return (neuron0x2639420()*-0.0176901);
}

double NNfunction_NN_1_6::synapse0x26409b0() {
   return (neuron0x2639760()*0.0166176);
}

double NNfunction_NN_1_6::synapse0x26409f0() {
   return (neuron0x2639aa0()*-0.00193548);
}

double NNfunction_NN_1_6::synapse0x2640a30() {
   return (neuron0x2639de0()*-0.00460728);
}

double NNfunction_NN_1_6::synapse0x2640a70() {
   return (neuron0x263a120()*0.0193205);
}

double NNfunction_NN_1_6::synapse0x2640ab0() {
   return (neuron0x263a460()*-0.0317482);
}

double NNfunction_NN_1_6::synapse0x2640af0() {
   return (neuron0x263a7a0()*-0.0136454);
}

double NNfunction_NN_1_6::synapse0x2640b30() {
   return (neuron0x263aae0()*-0.018107);
}

double NNfunction_NN_1_6::synapse0x26405c0() {
   return (neuron0x263ae20()*-0.0546814);
}

double NNfunction_NN_1_6::synapse0x2640600() {
   return (neuron0x263b380()*-0.0073984);
}

double NNfunction_NN_1_6::synapse0x2640c80() {
   return (neuron0x263b5a0()*0.0407292);
}

double NNfunction_NN_1_6::synapse0x2640cc0() {
   return (neuron0x263b8e0()*0.0444396);
}

double NNfunction_NN_1_6::synapse0x2640d00() {
   return (neuron0x263bc20()*-0.0179307);
}

double NNfunction_NN_1_6::synapse0x2640d40() {
   return (neuron0x263bf60()*-0.0206196);
}

double NNfunction_NN_1_6::synapse0x2640d80() {
   return (neuron0x263c2a0()*-0.0118778);
}

double NNfunction_NN_1_6::synapse0x2640dc0() {
   return (neuron0x263c5e0()*0.0610269);
}

double NNfunction_NN_1_6::synapse0x2641140() {
   return (neuron0x2637a20()*0.00896149);
}

double NNfunction_NN_1_6::synapse0x2641180() {
   return (neuron0x2637d60()*-15.8884);
}

double NNfunction_NN_1_6::synapse0x26411c0() {
   return (neuron0x26380a0()*0.135262);
}

double NNfunction_NN_1_6::synapse0x2641200() {
   return (neuron0x26383e0()*0.00662501);
}

double NNfunction_NN_1_6::synapse0x2641240() {
   return (neuron0x2638720()*-0.00137402);
}

double NNfunction_NN_1_6::synapse0x2641280() {
   return (neuron0x2638a60()*-0.0202922);
}

double NNfunction_NN_1_6::synapse0x26412c0() {
   return (neuron0x2638da0()*0.0074508);
}

double NNfunction_NN_1_6::synapse0x2641300() {
   return (neuron0x26390e0()*0.0301257);
}

double NNfunction_NN_1_6::synapse0x2641340() {
   return (neuron0x2639420()*-0.0055455);
}

double NNfunction_NN_1_6::synapse0x2641380() {
   return (neuron0x2639760()*0.00025685);
}

double NNfunction_NN_1_6::synapse0x26413c0() {
   return (neuron0x2639aa0()*-0.00316614);
}

double NNfunction_NN_1_6::synapse0x2641400() {
   return (neuron0x2639de0()*0.104973);
}

double NNfunction_NN_1_6::synapse0x2641440() {
   return (neuron0x263a120()*-0.0095953);
}

double NNfunction_NN_1_6::synapse0x2641480() {
   return (neuron0x263a460()*0.00598374);
}

double NNfunction_NN_1_6::synapse0x26414c0() {
   return (neuron0x263a7a0()*-0.00619792);
}

double NNfunction_NN_1_6::synapse0x2641500() {
   return (neuron0x263aae0()*-0.0139006);
}

double NNfunction_NN_1_6::synapse0x2640f90() {
   return (neuron0x263ae20()*-0.00268883);
}

double NNfunction_NN_1_6::synapse0x2640fd0() {
   return (neuron0x263b380()*-0.0169566);
}

double NNfunction_NN_1_6::synapse0x2641650() {
   return (neuron0x263b5a0()*0.00583184);
}

double NNfunction_NN_1_6::synapse0x2641690() {
   return (neuron0x263b8e0()*-0.00544304);
}

double NNfunction_NN_1_6::synapse0x26416d0() {
   return (neuron0x263bc20()*-0.0196356);
}

double NNfunction_NN_1_6::synapse0x2641710() {
   return (neuron0x263bf60()*0.00167834);
}

double NNfunction_NN_1_6::synapse0x2641750() {
   return (neuron0x263c2a0()*-0.0243719);
}

double NNfunction_NN_1_6::synapse0x2641790() {
   return (neuron0x263c5e0()*-0.0599507);
}

double NNfunction_NN_1_6::synapse0x263b270() {
   return (neuron0x2637a20()*-0.0926932);
}

double NNfunction_NN_1_6::synapse0x263b2b0() {
   return (neuron0x2637d60()*-0.0210186);
}

double NNfunction_NN_1_6::synapse0x263b2f0() {
   return (neuron0x26380a0()*-0.599751);
}

double NNfunction_NN_1_6::synapse0x263b330() {
   return (neuron0x26383e0()*0.0385763);
}

double NNfunction_NN_1_6::synapse0x2641d20() {
   return (neuron0x2638720()*0.033359);
}

double NNfunction_NN_1_6::synapse0x2641d60() {
   return (neuron0x2638a60()*-0.00339597);
}

double NNfunction_NN_1_6::synapse0x2641da0() {
   return (neuron0x2638da0()*0.00833338);
}

double NNfunction_NN_1_6::synapse0x2641de0() {
   return (neuron0x26390e0()*-0.000859548);
}

double NNfunction_NN_1_6::synapse0x2641e20() {
   return (neuron0x2639420()*0.0389036);
}

double NNfunction_NN_1_6::synapse0x2641e60() {
   return (neuron0x2639760()*-0.0214298);
}

double NNfunction_NN_1_6::synapse0x2641ea0() {
   return (neuron0x2639aa0()*-0.0222263);
}

double NNfunction_NN_1_6::synapse0x2641ee0() {
   return (neuron0x2639de0()*-0.106252);
}

double NNfunction_NN_1_6::synapse0x2641f20() {
   return (neuron0x263a120()*-0.0820025);
}

double NNfunction_NN_1_6::synapse0x2641f60() {
   return (neuron0x263a460()*-0.0352123);
}

double NNfunction_NN_1_6::synapse0x2641fa0() {
   return (neuron0x263a7a0()*-0.0119181);
}

double NNfunction_NN_1_6::synapse0x2641fe0() {
   return (neuron0x263aae0()*-0.0227757);
}

double NNfunction_NN_1_6::synapse0x2641960() {
   return (neuron0x263ae20()*-0.0557179);
}

double NNfunction_NN_1_6::synapse0x26419a0() {
   return (neuron0x263b380()*-0.0089099);
}

double NNfunction_NN_1_6::synapse0x2642130() {
   return (neuron0x263b5a0()*-0.0140244);
}

double NNfunction_NN_1_6::synapse0x2642170() {
   return (neuron0x263b8e0()*-0.0678529);
}

double NNfunction_NN_1_6::synapse0x26421b0() {
   return (neuron0x263bc20()*-0.0179269);
}

double NNfunction_NN_1_6::synapse0x26421f0() {
   return (neuron0x263bf60()*-0.000941452);
}

double NNfunction_NN_1_6::synapse0x2642230() {
   return (neuron0x263c2a0()*0.032237);
}

double NNfunction_NN_1_6::synapse0x2642270() {
   return (neuron0x263c5e0()*1.51062);
}

double NNfunction_NN_1_6::synapse0x26425f0() {
   return (neuron0x2637a20()*-0.00861958);
}

double NNfunction_NN_1_6::synapse0x2642630() {
   return (neuron0x2637d60()*-20.3835);
}

double NNfunction_NN_1_6::synapse0x2642670() {
   return (neuron0x26380a0()*0.200092);
}

double NNfunction_NN_1_6::synapse0x26426b0() {
   return (neuron0x26383e0()*-0.00243866);
}

double NNfunction_NN_1_6::synapse0x26426f0() {
   return (neuron0x2638720()*0.0103959);
}

double NNfunction_NN_1_6::synapse0x2642730() {
   return (neuron0x2638a60()*-0.0277035);
}

double NNfunction_NN_1_6::synapse0x2642770() {
   return (neuron0x2638da0()*0.00783479);
}

double NNfunction_NN_1_6::synapse0x26427b0() {
   return (neuron0x26390e0()*0.028938);
}

double NNfunction_NN_1_6::synapse0x26427f0() {
   return (neuron0x2639420()*-0.00748078);
}

double NNfunction_NN_1_6::synapse0x2642830() {
   return (neuron0x2639760()*-0.00948522);
}

double NNfunction_NN_1_6::synapse0x2642870() {
   return (neuron0x2639aa0()*-0.00218913);
}

double NNfunction_NN_1_6::synapse0x26428b0() {
   return (neuron0x2639de0()*-0.160627);
}

double NNfunction_NN_1_6::synapse0x26428f0() {
   return (neuron0x263a120()*-0.017164);
}

double NNfunction_NN_1_6::synapse0x2642930() {
   return (neuron0x263a460()*0.00775015);
}

double NNfunction_NN_1_6::synapse0x2642970() {
   return (neuron0x263a7a0()*0.00377041);
}

double NNfunction_NN_1_6::synapse0x26429b0() {
   return (neuron0x263aae0()*-0.0105292);
}

double NNfunction_NN_1_6::synapse0x2642440() {
   return (neuron0x263ae20()*-0.0083032);
}

double NNfunction_NN_1_6::synapse0x2642480() {
   return (neuron0x263b380()*-0.0169321);
}

double NNfunction_NN_1_6::synapse0x2642b00() {
   return (neuron0x263b5a0()*0.0119474);
}

double NNfunction_NN_1_6::synapse0x2642b40() {
   return (neuron0x263b8e0()*0.00242099);
}

double NNfunction_NN_1_6::synapse0x2642b80() {
   return (neuron0x263bc20()*-0.0168854);
}

double NNfunction_NN_1_6::synapse0x2642bc0() {
   return (neuron0x263bf60()*0.00659683);
}

double NNfunction_NN_1_6::synapse0x2642c00() {
   return (neuron0x263c2a0()*-0.0181094);
}

double NNfunction_NN_1_6::synapse0x2642c40() {
   return (neuron0x263c5e0()*-0.0667555);
}

double NNfunction_NN_1_6::synapse0x2642fc0() {
   return (neuron0x2637a20()*-0.0471727);
}

double NNfunction_NN_1_6::synapse0x2643000() {
   return (neuron0x2637d60()*0.00628239);
}

double NNfunction_NN_1_6::synapse0x2643040() {
   return (neuron0x26380a0()*2.70834);
}

double NNfunction_NN_1_6::synapse0x2643080() {
   return (neuron0x26383e0()*-0.027567);
}

double NNfunction_NN_1_6::synapse0x26430c0() {
   return (neuron0x2638720()*0.0147301);
}

double NNfunction_NN_1_6::synapse0x2643100() {
   return (neuron0x2638a60()*0.0229423);
}

double NNfunction_NN_1_6::synapse0x2643140() {
   return (neuron0x2638da0()*-0.00294159);
}

double NNfunction_NN_1_6::synapse0x2643180() {
   return (neuron0x26390e0()*0.00226643);
}

double NNfunction_NN_1_6::synapse0x26431c0() {
   return (neuron0x2639420()*-0.00271955);
}

double NNfunction_NN_1_6::synapse0x2643200() {
   return (neuron0x2639760()*0.00493208);
}

double NNfunction_NN_1_6::synapse0x2643240() {
   return (neuron0x2639aa0()*0.00123318);
}

double NNfunction_NN_1_6::synapse0x2643280() {
   return (neuron0x2639de0()*0.160629);
}

double NNfunction_NN_1_6::synapse0x26432c0() {
   return (neuron0x263a120()*0.0296355);
}

double NNfunction_NN_1_6::synapse0x2643300() {
   return (neuron0x263a460()*0.0280421);
}

double NNfunction_NN_1_6::synapse0x2643340() {
   return (neuron0x263a7a0()*-0.0138675);
}

double NNfunction_NN_1_6::synapse0x2643380() {
   return (neuron0x263aae0()*-0.0160821);
}

double NNfunction_NN_1_6::synapse0x2642e10() {
   return (neuron0x263ae20()*-0.0324653);
}

double NNfunction_NN_1_6::synapse0x2642e50() {
   return (neuron0x263b380()*0.0124768);
}

double NNfunction_NN_1_6::synapse0x263fbe0() {
   return (neuron0x263b5a0()*0.00112824);
}

double NNfunction_NN_1_6::synapse0x263fc20() {
   return (neuron0x263b8e0()*-0.0103693);
}

double NNfunction_NN_1_6::synapse0x263fc60() {
   return (neuron0x263bc20()*-0.0107845);
}

double NNfunction_NN_1_6::synapse0x263fca0() {
   return (neuron0x263bf60()*-0.0184182);
}

double NNfunction_NN_1_6::synapse0x263fce0() {
   return (neuron0x263c2a0()*0.00110782);
}

double NNfunction_NN_1_6::synapse0x263fd20() {
   return (neuron0x263c5e0()*2.80812);
}

double NNfunction_NN_1_6::synapse0x26400a0() {
   return (neuron0x2637a20()*-0.850441);
}

double NNfunction_NN_1_6::synapse0x26400e0() {
   return (neuron0x2637d60()*0.0236105);
}

double NNfunction_NN_1_6::synapse0x2640120() {
   return (neuron0x26380a0()*-0.0624617);
}

double NNfunction_NN_1_6::synapse0x2640160() {
   return (neuron0x26383e0()*-0.0664696);
}

double NNfunction_NN_1_6::synapse0x26401a0() {
   return (neuron0x2638720()*0.151799);
}

double NNfunction_NN_1_6::synapse0x26401e0() {
   return (neuron0x2638a60()*-0.274166);
}

double NNfunction_NN_1_6::synapse0x2640220() {
   return (neuron0x2638da0()*0.217474);
}

double NNfunction_NN_1_6::synapse0x2640260() {
   return (neuron0x26390e0()*-0.224581);
}

double NNfunction_NN_1_6::synapse0x26402a0() {
   return (neuron0x2639420()*0.321862);
}

double NNfunction_NN_1_6::synapse0x26402e0() {
   return (neuron0x2639760()*-0.237335);
}

double NNfunction_NN_1_6::synapse0x2640320() {
   return (neuron0x2639aa0()*0.0492562);
}

double NNfunction_NN_1_6::synapse0x2640360() {
   return (neuron0x2639de0()*0.151662);
}

double NNfunction_NN_1_6::synapse0x26403a0() {
   return (neuron0x263a120()*0.00992333);
}

double NNfunction_NN_1_6::synapse0x26444e0() {
   return (neuron0x263a460()*-0.0465984);
}

double NNfunction_NN_1_6::synapse0x2644520() {
   return (neuron0x263a7a0()*0.00476885);
}

double NNfunction_NN_1_6::synapse0x2644560() {
   return (neuron0x263aae0()*0.0999447);
}

double NNfunction_NN_1_6::synapse0x263fef0() {
   return (neuron0x263ae20()*-0.159223);
}

double NNfunction_NN_1_6::synapse0x263ff30() {
   return (neuron0x263b380()*0.253257);
}

double NNfunction_NN_1_6::synapse0x26446b0() {
   return (neuron0x263b5a0()*0.241236);
}

double NNfunction_NN_1_6::synapse0x26446f0() {
   return (neuron0x263b8e0()*-0.0322734);
}

double NNfunction_NN_1_6::synapse0x2644730() {
   return (neuron0x263bc20()*0.260237);
}

double NNfunction_NN_1_6::synapse0x2644770() {
   return (neuron0x263bf60()*0.518669);
}

double NNfunction_NN_1_6::synapse0x26447b0() {
   return (neuron0x263c2a0()*0.202333);
}

double NNfunction_NN_1_6::synapse0x26447f0() {
   return (neuron0x263c5e0()*0.258534);
}

double NNfunction_NN_1_6::synapse0x2644b70() {
   return (neuron0x2637a20()*-0.00195666);
}

double NNfunction_NN_1_6::synapse0x2644bb0() {
   return (neuron0x2637d60()*-0.0139062);
}

double NNfunction_NN_1_6::synapse0x2644bf0() {
   return (neuron0x26380a0()*-0.535177);
}

double NNfunction_NN_1_6::synapse0x2644c30() {
   return (neuron0x26383e0()*5.53578);
}

double NNfunction_NN_1_6::synapse0x2644c70() {
   return (neuron0x2638720()*-0.0365142);
}

double NNfunction_NN_1_6::synapse0x2644cb0() {
   return (neuron0x2638a60()*-0.00763962);
}

double NNfunction_NN_1_6::synapse0x2644cf0() {
   return (neuron0x2638da0()*-0.0106567);
}

double NNfunction_NN_1_6::synapse0x2644d30() {
   return (neuron0x26390e0()*-0.0125459);
}

double NNfunction_NN_1_6::synapse0x2644d70() {
   return (neuron0x2639420()*0.0249327);
}

double NNfunction_NN_1_6::synapse0x2644db0() {
   return (neuron0x2639760()*-0.0321563);
}

double NNfunction_NN_1_6::synapse0x2644df0() {
   return (neuron0x2639aa0()*0.0576469);
}

double NNfunction_NN_1_6::synapse0x2644e30() {
   return (neuron0x2639de0()*-0.696442);
}

double NNfunction_NN_1_6::synapse0x2644e70() {
   return (neuron0x263a120()*0.0431537);
}

double NNfunction_NN_1_6::synapse0x2644eb0() {
   return (neuron0x263a460()*-0.109462);
}

double NNfunction_NN_1_6::synapse0x2644ef0() {
   return (neuron0x263a7a0()*0.0569761);
}

double NNfunction_NN_1_6::synapse0x2644f30() {
   return (neuron0x263aae0()*-0.0313929);
}

double NNfunction_NN_1_6::synapse0x26449c0() {
   return (neuron0x263ae20()*-0.0450064);
}

double NNfunction_NN_1_6::synapse0x2644a00() {
   return (neuron0x263b380()*0.0216402);
}

double NNfunction_NN_1_6::synapse0x2645080() {
   return (neuron0x263b5a0()*0.0762353);
}

double NNfunction_NN_1_6::synapse0x26450c0() {
   return (neuron0x263b8e0()*-0.015143);
}

double NNfunction_NN_1_6::synapse0x2645100() {
   return (neuron0x263bc20()*0.0213047);
}

double NNfunction_NN_1_6::synapse0x2645140() {
   return (neuron0x263bf60()*0.0153655);
}

double NNfunction_NN_1_6::synapse0x2645180() {
   return (neuron0x263c2a0()*0.00730406);
}

double NNfunction_NN_1_6::synapse0x26451c0() {
   return (neuron0x263c5e0()*0.217254);
}

double NNfunction_NN_1_6::synapse0x2645540() {
   return (neuron0x2637a20()*-0.00557622);
}

double NNfunction_NN_1_6::synapse0x2645580() {
   return (neuron0x2637d60()*-0.00436285);
}

double NNfunction_NN_1_6::synapse0x26455c0() {
   return (neuron0x26380a0()*2.29425);
}

double NNfunction_NN_1_6::synapse0x2645600() {
   return (neuron0x26383e0()*-0.0136574);
}

double NNfunction_NN_1_6::synapse0x2645640() {
   return (neuron0x2638720()*0.00852634);
}

double NNfunction_NN_1_6::synapse0x2645680() {
   return (neuron0x2638a60()*0.026226);
}

double NNfunction_NN_1_6::synapse0x26456c0() {
   return (neuron0x2638da0()*0.0392124);
}

double NNfunction_NN_1_6::synapse0x2645700() {
   return (neuron0x26390e0()*0.00859534);
}

double NNfunction_NN_1_6::synapse0x2645740() {
   return (neuron0x2639420()*-0.00644243);
}

double NNfunction_NN_1_6::synapse0x2645780() {
   return (neuron0x2639760()*-0.0170043);
}

double NNfunction_NN_1_6::synapse0x26457c0() {
   return (neuron0x2639aa0()*-0.00328004);
}

double NNfunction_NN_1_6::synapse0x2645800() {
   return (neuron0x2639de0()*-7.32734);
}

double NNfunction_NN_1_6::synapse0x2645840() {
   return (neuron0x263a120()*0.00787169);
}

double NNfunction_NN_1_6::synapse0x2645880() {
   return (neuron0x263a460()*0.0166534);
}

double NNfunction_NN_1_6::synapse0x26458c0() {
   return (neuron0x263a7a0()*0.0297674);
}

double NNfunction_NN_1_6::synapse0x2645900() {
   return (neuron0x263aae0()*0.0107216);
}

double NNfunction_NN_1_6::synapse0x2645390() {
   return (neuron0x263ae20()*-0.0182118);
}

double NNfunction_NN_1_6::synapse0x26453d0() {
   return (neuron0x263b380()*-0.0381005);
}

double NNfunction_NN_1_6::synapse0x2645a50() {
   return (neuron0x263b5a0()*-0.0293741);
}

double NNfunction_NN_1_6::synapse0x2645a90() {
   return (neuron0x263b8e0()*-0.00198498);
}

double NNfunction_NN_1_6::synapse0x2645ad0() {
   return (neuron0x263bc20()*-0.0121972);
}

double NNfunction_NN_1_6::synapse0x2645b10() {
   return (neuron0x263bf60()*0.00247489);
}

double NNfunction_NN_1_6::synapse0x2645b50() {
   return (neuron0x263c2a0()*-0.00397989);
}

double NNfunction_NN_1_6::synapse0x2645b90() {
   return (neuron0x263c5e0()*-3.15693);
}

double NNfunction_NN_1_6::synapse0x2645f10() {
   return (neuron0x2637a20()*-0.00497989);
}

double NNfunction_NN_1_6::synapse0x2645f50() {
   return (neuron0x2637d60()*-0.0105125);
}

double NNfunction_NN_1_6::synapse0x2645f90() {
   return (neuron0x26380a0()*-0.301087);
}

double NNfunction_NN_1_6::synapse0x2645fd0() {
   return (neuron0x26383e0()*-0.0306037);
}

double NNfunction_NN_1_6::synapse0x2646010() {
   return (neuron0x2638720()*0.00879138);
}

double NNfunction_NN_1_6::synapse0x2646050() {
   return (neuron0x2638a60()*-0.013562);
}

double NNfunction_NN_1_6::synapse0x2646090() {
   return (neuron0x2638da0()*-0.0193833);
}

double NNfunction_NN_1_6::synapse0x26460d0() {
   return (neuron0x26390e0()*-0.0166511);
}

double NNfunction_NN_1_6::synapse0x2646110() {
   return (neuron0x2639420()*0.00856742);
}

double NNfunction_NN_1_6::synapse0x2646150() {
   return (neuron0x2639760()*-0.0490364);
}

double NNfunction_NN_1_6::synapse0x2646190() {
   return (neuron0x2639aa0()*-0.0187387);
}

double NNfunction_NN_1_6::synapse0x26461d0() {
   return (neuron0x2639de0()*0.0358298);
}

double NNfunction_NN_1_6::synapse0x2646210() {
   return (neuron0x263a120()*-0.0104333);
}

double NNfunction_NN_1_6::synapse0x2646250() {
   return (neuron0x263a460()*0.00852613);
}

double NNfunction_NN_1_6::synapse0x2646290() {
   return (neuron0x263a7a0()*-0.00436224);
}

double NNfunction_NN_1_6::synapse0x26462d0() {
   return (neuron0x263aae0()*-0.0149291);
}

double NNfunction_NN_1_6::synapse0x2645d60() {
   return (neuron0x263ae20()*-0.028963);
}

double NNfunction_NN_1_6::synapse0x2645da0() {
   return (neuron0x263b380()*-0.0195938);
}

double NNfunction_NN_1_6::synapse0x2646420() {
   return (neuron0x263b5a0()*0.00978626);
}

double NNfunction_NN_1_6::synapse0x2646460() {
   return (neuron0x263b8e0()*-0.0408451);
}

double NNfunction_NN_1_6::synapse0x26464a0() {
   return (neuron0x263bc20()*-0.0112945);
}

double NNfunction_NN_1_6::synapse0x26464e0() {
   return (neuron0x263bf60()*0.0375315);
}

double NNfunction_NN_1_6::synapse0x2646520() {
   return (neuron0x263c2a0()*-0.0101837);
}

double NNfunction_NN_1_6::synapse0x2646560() {
   return (neuron0x263c5e0()*5.09593);
}

double NNfunction_NN_1_6::synapse0x26468e0() {
   return (neuron0x2637a20()*-0.838238);
}

double NNfunction_NN_1_6::synapse0x2637c40() {
   return (neuron0x2637d60()*-0.0677765);
}

double NNfunction_NN_1_6::synapse0x2637c80() {
   return (neuron0x26380a0()*-0.248937);
}

double NNfunction_NN_1_6::synapse0x2637f80() {
   return (neuron0x26383e0()*0.0202172);
}

double NNfunction_NN_1_6::synapse0x2637fc0() {
   return (neuron0x2638720()*0.221867);
}

double NNfunction_NN_1_6::synapse0x26382c0() {
   return (neuron0x2638a60()*-0.107934);
}

double NNfunction_NN_1_6::synapse0x2638300() {
   return (neuron0x2638da0()*0.106001);
}

double NNfunction_NN_1_6::synapse0x2638600() {
   return (neuron0x26390e0()*-0.0988338);
}

double NNfunction_NN_1_6::synapse0x2638640() {
   return (neuron0x2639420()*-0.081212);
}

double NNfunction_NN_1_6::synapse0x2638940() {
   return (neuron0x2639760()*-0.0208772);
}

double NNfunction_NN_1_6::synapse0x2638980() {
   return (neuron0x2639aa0()*-0.0472487);
}

double NNfunction_NN_1_6::synapse0x2638c80() {
   return (neuron0x2639de0()*-0.0395477);
}

double NNfunction_NN_1_6::synapse0x2638cc0() {
   return (neuron0x263a120()*-0.0118258);
}

double NNfunction_NN_1_6::synapse0x2638fc0() {
   return (neuron0x263a460()*0.363517);
}

double NNfunction_NN_1_6::synapse0x2639000() {
   return (neuron0x263a7a0()*0.221738);
}

double NNfunction_NN_1_6::synapse0x2639300() {
   return (neuron0x263aae0()*0.0824859);
}

double NNfunction_NN_1_6::synapse0x2639340() {
   return (neuron0x263ae20()*-0.824404);
}

double NNfunction_NN_1_6::synapse0x2639640() {
   return (neuron0x263b380()*-0.16807);
}

double NNfunction_NN_1_6::synapse0x2639680() {
   return (neuron0x263b5a0()*-0.274964);
}

double NNfunction_NN_1_6::synapse0x2639980() {
   return (neuron0x263b8e0()*-0.306201);
}

double NNfunction_NN_1_6::synapse0x26399c0() {
   return (neuron0x263bc20()*-0.288796);
}

double NNfunction_NN_1_6::synapse0x2639cc0() {
   return (neuron0x263bf60()*-0.117705);
}

double NNfunction_NN_1_6::synapse0x2639d00() {
   return (neuron0x263c2a0()*-0.225511);
}

double NNfunction_NN_1_6::synapse0x263a000() {
   return (neuron0x263c5e0()*-0.27793);
}

double NNfunction_NN_1_6::synapse0x263a040() {
   return (neuron0x2637a20()*0.0106338);
}

double NNfunction_NN_1_6::synapse0x263ad00() {
   return (neuron0x2637d60()*-0.00495209);
}

double NNfunction_NN_1_6::synapse0x263ad40() {
   return (neuron0x26380a0()*0.0861064);
}

double NNfunction_NN_1_6::synapse0x2646730() {
   return (neuron0x26383e0()*0.0137507);
}

double NNfunction_NN_1_6::synapse0x2646770() {
   return (neuron0x2638720()*-0.00171525);
}

double NNfunction_NN_1_6::synapse0x263b040() {
   return (neuron0x2638a60()*-0.00298078);
}

double NNfunction_NN_1_6::synapse0x263b080() {
   return (neuron0x2638da0()*-0.00912291);
}

double NNfunction_NN_1_6::synapse0x23e9030() {
   return (neuron0x26390e0()*0.0634602);
}

double NNfunction_NN_1_6::synapse0x23e9070() {
   return (neuron0x2639420()*0.00497076);
}

double NNfunction_NN_1_6::synapse0x263b7c0() {
   return (neuron0x2639760()*0.0533957);
}

double NNfunction_NN_1_6::synapse0x263b800() {
   return (neuron0x2639aa0()*-0.06682);
}

double NNfunction_NN_1_6::synapse0x263bb00() {
   return (neuron0x2639de0()*-2.45494);
}

double NNfunction_NN_1_6::synapse0x263bb40() {
   return (neuron0x263a120()*0.151007);
}

double NNfunction_NN_1_6::synapse0x263be40() {
   return (neuron0x263a460()*-0.00391698);
}

double NNfunction_NN_1_6::synapse0x263be80() {
   return (neuron0x263a7a0()*-0.00551183);
}

double NNfunction_NN_1_6::synapse0x263c180() {
   return (neuron0x263aae0()*0.0342342);
}

double NNfunction_NN_1_6::synapse0x263c1c0() {
   return (neuron0x263ae20()*-0.0366436);
}

double NNfunction_NN_1_6::synapse0x263c4c0() {
   return (neuron0x263b380()*-0.0179812);
}

double NNfunction_NN_1_6::synapse0x263c500() {
   return (neuron0x263b5a0()*-0.0161841);
}

double NNfunction_NN_1_6::synapse0x263c800() {
   return (neuron0x263b8e0()*0.00590378);
}

double NNfunction_NN_1_6::synapse0x263c840() {
   return (neuron0x263bc20()*-0.0515074);
}

double NNfunction_NN_1_6::synapse0x263a340() {
   return (neuron0x263bf60()*-0.0202476);
}

double NNfunction_NN_1_6::synapse0x263a380() {
   return (neuron0x263c2a0()*-0.0379656);
}

double NNfunction_NN_1_6::synapse0x2648650() {
   return (neuron0x263c5e0()*-0.801135);
}

double NNfunction_NN_1_6::synapse0x26489d0() {
   return (neuron0x2637a20()*-0.0505421);
}

double NNfunction_NN_1_6::synapse0x2648a10() {
   return (neuron0x2637d60()*7.68095);
}

double NNfunction_NN_1_6::synapse0x2648a50() {
   return (neuron0x26380a0()*0.697442);
}

double NNfunction_NN_1_6::synapse0x2648a90() {
   return (neuron0x26383e0()*-0.016359);
}

double NNfunction_NN_1_6::synapse0x2648ad0() {
   return (neuron0x2638720()*0.0392452);
}

double NNfunction_NN_1_6::synapse0x2648b10() {
   return (neuron0x2638a60()*-0.0137741);
}

double NNfunction_NN_1_6::synapse0x2648b50() {
   return (neuron0x2638da0()*0.0034101);
}

double NNfunction_NN_1_6::synapse0x2648b90() {
   return (neuron0x26390e0()*-0.0210777);
}

double NNfunction_NN_1_6::synapse0x2648bd0() {
   return (neuron0x2639420()*0.000505895);
}

double NNfunction_NN_1_6::synapse0x2648c10() {
   return (neuron0x2639760()*-0.00535837);
}

double NNfunction_NN_1_6::synapse0x2648c50() {
   return (neuron0x2639aa0()*-0.0199828);
}

double NNfunction_NN_1_6::synapse0x2648c90() {
   return (neuron0x2639de0()*-0.345713);
}

double NNfunction_NN_1_6::synapse0x2648cd0() {
   return (neuron0x263a120()*-0.00509298);
}

double NNfunction_NN_1_6::synapse0x2648d10() {
   return (neuron0x263a460()*0.016549);
}

double NNfunction_NN_1_6::synapse0x2648d50() {
   return (neuron0x263a7a0()*0.0542393);
}

double NNfunction_NN_1_6::synapse0x2648d90() {
   return (neuron0x263aae0()*0.0196723);
}

double NNfunction_NN_1_6::synapse0x2648820() {
   return (neuron0x263ae20()*-0.0183694);
}

double NNfunction_NN_1_6::synapse0x2648860() {
   return (neuron0x263b380()*6.74046e-05);
}

double NNfunction_NN_1_6::synapse0x2648ee0() {
   return (neuron0x263b5a0()*-0.0129134);
}

double NNfunction_NN_1_6::synapse0x2648f20() {
   return (neuron0x263b8e0()*0.0211136);
}

double NNfunction_NN_1_6::synapse0x2648f60() {
   return (neuron0x263bc20()*0.0402549);
}

double NNfunction_NN_1_6::synapse0x2648fa0() {
   return (neuron0x263bf60()*0.00959844);
}

double NNfunction_NN_1_6::synapse0x2648fe0() {
   return (neuron0x263c2a0()*0.025207);
}

double NNfunction_NN_1_6::synapse0x2649020() {
   return (neuron0x263c5e0()*0.0505963);
}

double NNfunction_NN_1_6::synapse0x26493a0() {
   return (neuron0x2637a20()*0.0960028);
}

double NNfunction_NN_1_6::synapse0x26493e0() {
   return (neuron0x2637d60()*0.00496274);
}

double NNfunction_NN_1_6::synapse0x2649420() {
   return (neuron0x26380a0()*0.936437);
}

double NNfunction_NN_1_6::synapse0x2649460() {
   return (neuron0x26383e0()*0.0302958);
}

double NNfunction_NN_1_6::synapse0x26494a0() {
   return (neuron0x2638720()*-0.0286184);
}

double NNfunction_NN_1_6::synapse0x26494e0() {
   return (neuron0x2638a60()*0.0175363);
}

double NNfunction_NN_1_6::synapse0x2649520() {
   return (neuron0x2638da0()*0.0254226);
}

double NNfunction_NN_1_6::synapse0x2649560() {
   return (neuron0x26390e0()*-0.013252);
}

double NNfunction_NN_1_6::synapse0x26495a0() {
   return (neuron0x2639420()*-0.054473);
}

double NNfunction_NN_1_6::synapse0x26495e0() {
   return (neuron0x2639760()*-0.0317634);
}

double NNfunction_NN_1_6::synapse0x2649620() {
   return (neuron0x2639aa0()*0.00798003);
}

double NNfunction_NN_1_6::synapse0x2649660() {
   return (neuron0x2639de0()*-0.0999789);
}

double NNfunction_NN_1_6::synapse0x26496a0() {
   return (neuron0x263a120()*0.0805565);
}

double NNfunction_NN_1_6::synapse0x26496e0() {
   return (neuron0x263a460()*-0.0232594);
}

double NNfunction_NN_1_6::synapse0x2649720() {
   return (neuron0x263a7a0()*0.0569467);
}

double NNfunction_NN_1_6::synapse0x2649760() {
   return (neuron0x263aae0()*0.0354286);
}

double NNfunction_NN_1_6::synapse0x26491f0() {
   return (neuron0x263ae20()*0.0202018);
}

double NNfunction_NN_1_6::synapse0x2649230() {
   return (neuron0x263b380()*-0.00740891);
}

double NNfunction_NN_1_6::synapse0x26498b0() {
   return (neuron0x263b5a0()*0.0790119);
}

double NNfunction_NN_1_6::synapse0x26498f0() {
   return (neuron0x263b8e0()*0.0610534);
}

double NNfunction_NN_1_6::synapse0x2649930() {
   return (neuron0x263bc20()*0.00755598);
}

double NNfunction_NN_1_6::synapse0x2649970() {
   return (neuron0x263bf60()*0.00994509);
}

double NNfunction_NN_1_6::synapse0x26499b0() {
   return (neuron0x263c2a0()*-0.010743);
}

double NNfunction_NN_1_6::synapse0x26499f0() {
   return (neuron0x263c5e0()*-1.25009);
}

double NNfunction_NN_1_6::synapse0x2649d70() {
   return (neuron0x2637a20()*0.0208014);
}

double NNfunction_NN_1_6::synapse0x2649db0() {
   return (neuron0x2637d60()*-0.00525704);
}

double NNfunction_NN_1_6::synapse0x2649df0() {
   return (neuron0x26380a0()*-0.120759);
}

double NNfunction_NN_1_6::synapse0x2649e30() {
   return (neuron0x26383e0()*-0.11909);
}

double NNfunction_NN_1_6::synapse0x2649e70() {
   return (neuron0x2638720()*-0.100455);
}

double NNfunction_NN_1_6::synapse0x2649eb0() {
   return (neuron0x2638a60()*-0.153438);
}

double NNfunction_NN_1_6::synapse0x2649ef0() {
   return (neuron0x2638da0()*-0.252707);
}

double NNfunction_NN_1_6::synapse0x2649f30() {
   return (neuron0x26390e0()*-0.12382);
}

double NNfunction_NN_1_6::synapse0x2649f70() {
   return (neuron0x2639420()*-0.0301827);
}

double NNfunction_NN_1_6::synapse0x2649fb0() {
   return (neuron0x2639760()*-0.148604);
}

double NNfunction_NN_1_6::synapse0x2649ff0() {
   return (neuron0x2639aa0()*-0.0455438);
}

double NNfunction_NN_1_6::synapse0x264a030() {
   return (neuron0x2639de0()*0.239932);
}

double NNfunction_NN_1_6::synapse0x264a070() {
   return (neuron0x263a120()*0.0296884);
}

double NNfunction_NN_1_6::synapse0x264a0b0() {
   return (neuron0x263a460()*0.250424);
}

double NNfunction_NN_1_6::synapse0x264a0f0() {
   return (neuron0x263a7a0()*0.0787902);
}

double NNfunction_NN_1_6::synapse0x264a130() {
   return (neuron0x263aae0()*-0.0794617);
}

double NNfunction_NN_1_6::synapse0x2649bc0() {
   return (neuron0x263ae20()*-0.429859);
}

double NNfunction_NN_1_6::synapse0x2649c00() {
   return (neuron0x263b380()*-0.0144889);
}

double NNfunction_NN_1_6::synapse0x264a280() {
   return (neuron0x263b5a0()*-0.236796);
}

double NNfunction_NN_1_6::synapse0x264a2c0() {
   return (neuron0x263b8e0()*-0.299097);
}

double NNfunction_NN_1_6::synapse0x264a300() {
   return (neuron0x263bc20()*-0.00862021);
}

double NNfunction_NN_1_6::synapse0x264a340() {
   return (neuron0x263bf60()*-0.133067);
}

double NNfunction_NN_1_6::synapse0x264a380() {
   return (neuron0x263c2a0()*-0.101206);
}

double NNfunction_NN_1_6::synapse0x264a3c0() {
   return (neuron0x263c5e0()*-0.528134);
}

double NNfunction_NN_1_6::synapse0x264a740() {
   return (neuron0x2637a20()*0.154008);
}

double NNfunction_NN_1_6::synapse0x264a780() {
   return (neuron0x2637d60()*-0.0075318);
}

double NNfunction_NN_1_6::synapse0x264a7c0() {
   return (neuron0x26380a0()*1.29548);
}

double NNfunction_NN_1_6::synapse0x264a800() {
   return (neuron0x26383e0()*0.0243187);
}

double NNfunction_NN_1_6::synapse0x264a840() {
   return (neuron0x2638720()*-0.0164565);
}

double NNfunction_NN_1_6::synapse0x264a880() {
   return (neuron0x2638a60()*-0.011548);
}

double NNfunction_NN_1_6::synapse0x264a8c0() {
   return (neuron0x2638da0()*-0.0138624);
}

double NNfunction_NN_1_6::synapse0x264a900() {
   return (neuron0x26390e0()*0.0118942);
}

double NNfunction_NN_1_6::synapse0x264a940() {
   return (neuron0x2639420()*-0.019542);
}

double NNfunction_NN_1_6::synapse0x264a980() {
   return (neuron0x2639760()*-0.00972983);
}

double NNfunction_NN_1_6::synapse0x264a9c0() {
   return (neuron0x2639aa0()*-0.0224333);
}

double NNfunction_NN_1_6::synapse0x264aa00() {
   return (neuron0x2639de0()*0.0806423);
}

double NNfunction_NN_1_6::synapse0x264aa40() {
   return (neuron0x263a120()*0.0317236);
}

double NNfunction_NN_1_6::synapse0x264aa80() {
   return (neuron0x263a460()*0.0307857);
}

double NNfunction_NN_1_6::synapse0x264aac0() {
   return (neuron0x263a7a0()*0.0424993);
}

double NNfunction_NN_1_6::synapse0x264ab00() {
   return (neuron0x263aae0()*0.0125469);
}

double NNfunction_NN_1_6::synapse0x264a590() {
   return (neuron0x263ae20()*-0.031632);
}

double NNfunction_NN_1_6::synapse0x264a5d0() {
   return (neuron0x263b380()*-0.0410387);
}

double NNfunction_NN_1_6::synapse0x264ac50() {
   return (neuron0x263b5a0()*0.00122144);
}

double NNfunction_NN_1_6::synapse0x264ac90() {
   return (neuron0x263b8e0()*-0.00250732);
}

double NNfunction_NN_1_6::synapse0x264acd0() {
   return (neuron0x263bc20()*0.00685812);
}

double NNfunction_NN_1_6::synapse0x264ad10() {
   return (neuron0x263bf60()*0.024864);
}

double NNfunction_NN_1_6::synapse0x264ad50() {
   return (neuron0x263c2a0()*0.0158687);
}

double NNfunction_NN_1_6::synapse0x264ad90() {
   return (neuron0x263c5e0()*2.44228);
}

double NNfunction_NN_1_6::synapse0x264b110() {
   return (neuron0x2637a20()*0.255735);
}

double NNfunction_NN_1_6::synapse0x264b150() {
   return (neuron0x2637d60()*0.0910466);
}

double NNfunction_NN_1_6::synapse0x264b190() {
   return (neuron0x26380a0()*1.51295);
}

double NNfunction_NN_1_6::synapse0x264b1d0() {
   return (neuron0x26383e0()*-0.279603);
}

double NNfunction_NN_1_6::synapse0x264b210() {
   return (neuron0x2638720()*-0.0567676);
}

double NNfunction_NN_1_6::synapse0x264b250() {
   return (neuron0x2638a60()*0.0304028);
}

double NNfunction_NN_1_6::synapse0x264b290() {
   return (neuron0x2638da0()*-0.145043);
}

double NNfunction_NN_1_6::synapse0x264b2d0() {
   return (neuron0x26390e0()*-0.294109);
}

double NNfunction_NN_1_6::synapse0x264b310() {
   return (neuron0x2639420()*-0.493722);
}

double NNfunction_NN_1_6::synapse0x26434d0() {
   return (neuron0x2639760()*-0.0811264);
}

double NNfunction_NN_1_6::synapse0x2643510() {
   return (neuron0x2639aa0()*0.185253);
}

double NNfunction_NN_1_6::synapse0x2643550() {
   return (neuron0x2639de0()*0.160691);
}

double NNfunction_NN_1_6::synapse0x2643590() {
   return (neuron0x263a120()*-0.0069308);
}

double NNfunction_NN_1_6::synapse0x26435d0() {
   return (neuron0x263a460()*0.217125);
}

double NNfunction_NN_1_6::synapse0x2643610() {
   return (neuron0x263a7a0()*-0.262341);
}

double NNfunction_NN_1_6::synapse0x2643650() {
   return (neuron0x263aae0()*0.152295);
}

double NNfunction_NN_1_6::synapse0x264af60() {
   return (neuron0x263ae20()*-0.371657);
}

double NNfunction_NN_1_6::synapse0x264afa0() {
   return (neuron0x263b380()*-0.337005);
}

double NNfunction_NN_1_6::synapse0x26437a0() {
   return (neuron0x263b5a0()*-0.0424131);
}

double NNfunction_NN_1_6::synapse0x26437e0() {
   return (neuron0x263b8e0()*0.352384);
}

double NNfunction_NN_1_6::synapse0x2643820() {
   return (neuron0x263bc20()*0.35668);
}

double NNfunction_NN_1_6::synapse0x2643860() {
   return (neuron0x263bf60()*0.13146);
}

double NNfunction_NN_1_6::synapse0x26438a0() {
   return (neuron0x263c2a0()*-0.466565);
}

double NNfunction_NN_1_6::synapse0x26438e0() {
   return (neuron0x263c5e0()*0.189366);
}

double NNfunction_NN_1_6::synapse0x2643c60() {
   return (neuron0x2637a20()*-0.104322);
}

double NNfunction_NN_1_6::synapse0x2643ca0() {
   return (neuron0x2637d60()*0.00142084);
}

double NNfunction_NN_1_6::synapse0x2643ce0() {
   return (neuron0x26380a0()*2.19174);
}

double NNfunction_NN_1_6::synapse0x2643d20() {
   return (neuron0x26383e0()*-0.0152381);
}

double NNfunction_NN_1_6::synapse0x2643d60() {
   return (neuron0x2638720()*0.0153089);
}

double NNfunction_NN_1_6::synapse0x2643da0() {
   return (neuron0x2638a60()*0.0374527);
}

double NNfunction_NN_1_6::synapse0x2643de0() {
   return (neuron0x2638da0()*0.0157188);
}

double NNfunction_NN_1_6::synapse0x2643e20() {
   return (neuron0x26390e0()*0.0106469);
}

double NNfunction_NN_1_6::synapse0x2643e60() {
   return (neuron0x2639420()*-0.0243496);
}

double NNfunction_NN_1_6::synapse0x2643ea0() {
   return (neuron0x2639760()*-0.0333241);
}

double NNfunction_NN_1_6::synapse0x2643ee0() {
   return (neuron0x2639aa0()*0.00648018);
}

double NNfunction_NN_1_6::synapse0x2643f20() {
   return (neuron0x2639de0()*-7.25944);
}

double NNfunction_NN_1_6::synapse0x2643f60() {
   return (neuron0x263a120()*-0.032351);
}

double NNfunction_NN_1_6::synapse0x2643fa0() {
   return (neuron0x263a460()*0.00795927);
}

double NNfunction_NN_1_6::synapse0x2643fe0() {
   return (neuron0x263a7a0()*0.0179706);
}

double NNfunction_NN_1_6::synapse0x2644020() {
   return (neuron0x263aae0()*1.79631e-06);
}

double NNfunction_NN_1_6::synapse0x2643ab0() {
   return (neuron0x263ae20()*-0.00491511);
}

double NNfunction_NN_1_6::synapse0x2643af0() {
   return (neuron0x263b380()*-0.0363055);
}

double NNfunction_NN_1_6::synapse0x2644170() {
   return (neuron0x263b5a0()*-0.0179289);
}

double NNfunction_NN_1_6::synapse0x26441b0() {
   return (neuron0x263b8e0()*-0.0132103);
}

double NNfunction_NN_1_6::synapse0x26441f0() {
   return (neuron0x263bc20()*0.00854221);
}

double NNfunction_NN_1_6::synapse0x2644230() {
   return (neuron0x263bf60()*0.0176915);
}

double NNfunction_NN_1_6::synapse0x2644270() {
   return (neuron0x263c2a0()*-0.0149106);
}

double NNfunction_NN_1_6::synapse0x26442b0() {
   return (neuron0x263c5e0()*-2.07885);
}

double NNfunction_NN_1_6::synapse0x2644480() {
   return (neuron0x2637a20()*-0.026464);
}

double NNfunction_NN_1_6::synapse0x264d510() {
   return (neuron0x2637d60()*0.0414506);
}

double NNfunction_NN_1_6::synapse0x264d550() {
   return (neuron0x26380a0()*1.20861);
}

double NNfunction_NN_1_6::synapse0x264d590() {
   return (neuron0x26383e0()*0.0269225);
}

double NNfunction_NN_1_6::synapse0x264d5d0() {
   return (neuron0x2638720()*0.0404259);
}

double NNfunction_NN_1_6::synapse0x264d610() {
   return (neuron0x2638a60()*0.00926846);
}

double NNfunction_NN_1_6::synapse0x264d650() {
   return (neuron0x2638da0()*0.0186207);
}

double NNfunction_NN_1_6::synapse0x264d690() {
   return (neuron0x26390e0()*0.0363048);
}

double NNfunction_NN_1_6::synapse0x264d6d0() {
   return (neuron0x2639420()*-0.0293924);
}

double NNfunction_NN_1_6::synapse0x264d710() {
   return (neuron0x2639760()*-0.015941);
}

double NNfunction_NN_1_6::synapse0x264d750() {
   return (neuron0x2639aa0()*-0.00877675);
}

double NNfunction_NN_1_6::synapse0x264d790() {
   return (neuron0x2639de0()*-4.13716);
}

double NNfunction_NN_1_6::synapse0x264d7d0() {
   return (neuron0x263a120()*-0.0169166);
}

double NNfunction_NN_1_6::synapse0x264d810() {
   return (neuron0x263a460()*-0.0375007);
}

double NNfunction_NN_1_6::synapse0x264d850() {
   return (neuron0x263a7a0()*0.01845);
}

double NNfunction_NN_1_6::synapse0x264d890() {
   return (neuron0x263aae0()*0.0179021);
}

double NNfunction_NN_1_6::synapse0x264d360() {
   return (neuron0x263ae20()*-0.000721179);
}

double NNfunction_NN_1_6::synapse0x264d3a0() {
   return (neuron0x263b380()*-0.0104206);
}

double NNfunction_NN_1_6::synapse0x264d9e0() {
   return (neuron0x263b5a0()*-0.00853507);
}

double NNfunction_NN_1_6::synapse0x264da20() {
   return (neuron0x263b8e0()*-0.000715464);
}

double NNfunction_NN_1_6::synapse0x264da60() {
   return (neuron0x263bc20()*-0.00450372);
}

double NNfunction_NN_1_6::synapse0x264daa0() {
   return (neuron0x263bf60()*-0.0120162);
}

double NNfunction_NN_1_6::synapse0x264dae0() {
   return (neuron0x263c2a0()*-0.017986);
}

double NNfunction_NN_1_6::synapse0x264db20() {
   return (neuron0x263c5e0()*1.30608);
}

double NNfunction_NN_1_6::synapse0x264dea0() {
   return (neuron0x2637a20()*-0.12096);
}

double NNfunction_NN_1_6::synapse0x264dee0() {
   return (neuron0x2637d60()*0.113643);
}

double NNfunction_NN_1_6::synapse0x264df20() {
   return (neuron0x26380a0()*-1.06364);
}

double NNfunction_NN_1_6::synapse0x264df60() {
   return (neuron0x26383e0()*-0.140647);
}

double NNfunction_NN_1_6::synapse0x264dfa0() {
   return (neuron0x2638720()*-0.0863184);
}

double NNfunction_NN_1_6::synapse0x264dfe0() {
   return (neuron0x2638a60()*0.0220687);
}

double NNfunction_NN_1_6::synapse0x264e020() {
   return (neuron0x2638da0()*0.0165893);
}

double NNfunction_NN_1_6::synapse0x264e060() {
   return (neuron0x26390e0()*-0.0990802);
}

double NNfunction_NN_1_6::synapse0x264e0a0() {
   return (neuron0x2639420()*-0.177267);
}

double NNfunction_NN_1_6::synapse0x264e0e0() {
   return (neuron0x2639760()*-0.0225792);
}

double NNfunction_NN_1_6::synapse0x264e120() {
   return (neuron0x2639aa0()*-0.0277923);
}

double NNfunction_NN_1_6::synapse0x264e160() {
   return (neuron0x2639de0()*-1.10419);
}

double NNfunction_NN_1_6::synapse0x264e1a0() {
   return (neuron0x263a120()*0.208565);
}

double NNfunction_NN_1_6::synapse0x264e1e0() {
   return (neuron0x263a460()*-0.0613914);
}

double NNfunction_NN_1_6::synapse0x264e220() {
   return (neuron0x263a7a0()*-0.0279678);
}

double NNfunction_NN_1_6::synapse0x264e260() {
   return (neuron0x263aae0()*-0.0238164);
}

double NNfunction_NN_1_6::synapse0x264dcf0() {
   return (neuron0x263ae20()*0.257984);
}

double NNfunction_NN_1_6::synapse0x264dd30() {
   return (neuron0x263b380()*0.0314334);
}

double NNfunction_NN_1_6::synapse0x264e3b0() {
   return (neuron0x263b5a0()*-0.166156);
}

double NNfunction_NN_1_6::synapse0x264e3f0() {
   return (neuron0x263b8e0()*0.141141);
}

double NNfunction_NN_1_6::synapse0x264e430() {
   return (neuron0x263bc20()*0.315886);
}

double NNfunction_NN_1_6::synapse0x264e470() {
   return (neuron0x263bf60()*0.241875);
}

double NNfunction_NN_1_6::synapse0x264e4b0() {
   return (neuron0x263c2a0()*0.249436);
}

double NNfunction_NN_1_6::synapse0x264e4f0() {
   return (neuron0x263c5e0()*-0.501597);
}

double NNfunction_NN_1_6::synapse0x264e870() {
   return (neuron0x2637a20()*0.0170984);
}

double NNfunction_NN_1_6::synapse0x264e8b0() {
   return (neuron0x2637d60()*-0.0807932);
}

double NNfunction_NN_1_6::synapse0x264e8f0() {
   return (neuron0x26380a0()*-1.3968);
}

double NNfunction_NN_1_6::synapse0x264e930() {
   return (neuron0x26383e0()*-0.167975);
}

double NNfunction_NN_1_6::synapse0x264e970() {
   return (neuron0x2638720()*0.0227966);
}

double NNfunction_NN_1_6::synapse0x264e9b0() {
   return (neuron0x2638a60()*-0.00473229);
}

double NNfunction_NN_1_6::synapse0x264e9f0() {
   return (neuron0x2638da0()*-0.0382832);
}

double NNfunction_NN_1_6::synapse0x264ea30() {
   return (neuron0x26390e0()*-0.032956);
}

double NNfunction_NN_1_6::synapse0x264ea70() {
   return (neuron0x2639420()*0.0837374);
}

double NNfunction_NN_1_6::synapse0x264eab0() {
   return (neuron0x2639760()*-0.00687439);
}

double NNfunction_NN_1_6::synapse0x264eaf0() {
   return (neuron0x2639aa0()*-0.0485828);
}

double NNfunction_NN_1_6::synapse0x264eb30() {
   return (neuron0x2639de0()*0.247381);
}

double NNfunction_NN_1_6::synapse0x264eb70() {
   return (neuron0x263a120()*0.0411459);
}

double NNfunction_NN_1_6::synapse0x264ebb0() {
   return (neuron0x263a460()*0.0102551);
}

double NNfunction_NN_1_6::synapse0x264ebf0() {
   return (neuron0x263a7a0()*-0.0195831);
}

double NNfunction_NN_1_6::synapse0x264ec30() {
   return (neuron0x263aae0()*-0.0334317);
}

double NNfunction_NN_1_6::synapse0x264e6c0() {
   return (neuron0x263ae20()*-0.0894252);
}

double NNfunction_NN_1_6::synapse0x264e700() {
   return (neuron0x263b380()*-0.00933506);
}

double NNfunction_NN_1_6::synapse0x264ed80() {
   return (neuron0x263b5a0()*-0.0288848);
}

double NNfunction_NN_1_6::synapse0x264edc0() {
   return (neuron0x263b8e0()*-0.0389418);
}

double NNfunction_NN_1_6::synapse0x264ee00() {
   return (neuron0x263bc20()*-0.0240498);
}

double NNfunction_NN_1_6::synapse0x264ee40() {
   return (neuron0x263bf60()*-0.0426322);
}

double NNfunction_NN_1_6::synapse0x264ee80() {
   return (neuron0x263c2a0()*-0.0392701);
}

double NNfunction_NN_1_6::synapse0x264eec0() {
   return (neuron0x263c5e0()*-0.876398);
}

double NNfunction_NN_1_6::synapse0x264f240() {
   return (neuron0x2637a20()*0.0314036);
}

double NNfunction_NN_1_6::synapse0x264f280() {
   return (neuron0x2637d60()*-0.00016561);
}

double NNfunction_NN_1_6::synapse0x264f2c0() {
   return (neuron0x26380a0()*-0.555635);
}

double NNfunction_NN_1_6::synapse0x264f300() {
   return (neuron0x26383e0()*-0.0150455);
}

double NNfunction_NN_1_6::synapse0x264f340() {
   return (neuron0x2638720()*-0.0277777);
}

double NNfunction_NN_1_6::synapse0x264f380() {
   return (neuron0x2638a60()*-0.00792375);
}

double NNfunction_NN_1_6::synapse0x264f3c0() {
   return (neuron0x2638da0()*-0.0131073);
}

double NNfunction_NN_1_6::synapse0x264f400() {
   return (neuron0x26390e0()*0.0316701);
}

double NNfunction_NN_1_6::synapse0x264f440() {
   return (neuron0x2639420()*-0.00251392);
}

double NNfunction_NN_1_6::synapse0x264f480() {
   return (neuron0x2639760()*0.00715438);
}

double NNfunction_NN_1_6::synapse0x264f4c0() {
   return (neuron0x2639aa0()*-0.0433806);
}

double NNfunction_NN_1_6::synapse0x264f500() {
   return (neuron0x2639de0()*-1.88688);
}

double NNfunction_NN_1_6::synapse0x264f540() {
   return (neuron0x263a120()*0.0288953);
}

double NNfunction_NN_1_6::synapse0x264f580() {
   return (neuron0x263a460()*-0.0292069);
}

double NNfunction_NN_1_6::synapse0x264f5c0() {
   return (neuron0x263a7a0()*-0.0107286);
}

double NNfunction_NN_1_6::synapse0x264f600() {
   return (neuron0x263aae0()*-0.00585336);
}

double NNfunction_NN_1_6::synapse0x264f090() {
   return (neuron0x263ae20()*-0.0126613);
}

double NNfunction_NN_1_6::synapse0x264f0d0() {
   return (neuron0x263b380()*-0.00913392);
}

double NNfunction_NN_1_6::synapse0x264f750() {
   return (neuron0x263b5a0()*-0.0229594);
}

double NNfunction_NN_1_6::synapse0x264f790() {
   return (neuron0x263b8e0()*0.0102322);
}

double NNfunction_NN_1_6::synapse0x264f7d0() {
   return (neuron0x263bc20()*-0.0366057);
}

double NNfunction_NN_1_6::synapse0x264f810() {
   return (neuron0x263bf60()*-0.00872508);
}

double NNfunction_NN_1_6::synapse0x264f850() {
   return (neuron0x263c2a0()*-0.0143048);
}

double NNfunction_NN_1_6::synapse0x264f890() {
   return (neuron0x263c5e0()*-0.0542575);
}

double NNfunction_NN_1_6::synapse0x264fc10() {
   return (neuron0x2637a20()*0.170877);
}

double NNfunction_NN_1_6::synapse0x264fc50() {
   return (neuron0x2637d60()*-0.0134791);
}

double NNfunction_NN_1_6::synapse0x264fc90() {
   return (neuron0x26380a0()*0.378212);
}

double NNfunction_NN_1_6::synapse0x264fcd0() {
   return (neuron0x26383e0()*0.164995);
}

double NNfunction_NN_1_6::synapse0x264fd10() {
   return (neuron0x2638720()*-0.112392);
}

double NNfunction_NN_1_6::synapse0x264fd50() {
   return (neuron0x2638a60()*-0.447266);
}

double NNfunction_NN_1_6::synapse0x264fd90() {
   return (neuron0x2638da0()*0.074428);
}

double NNfunction_NN_1_6::synapse0x264fdd0() {
   return (neuron0x26390e0()*0.0152015);
}

double NNfunction_NN_1_6::synapse0x264fe10() {
   return (neuron0x2639420()*0.0352804);
}

double NNfunction_NN_1_6::synapse0x264fe50() {
   return (neuron0x2639760()*-0.0866816);
}

double NNfunction_NN_1_6::synapse0x264fe90() {
   return (neuron0x2639aa0()*-0.157125);
}

double NNfunction_NN_1_6::synapse0x264fed0() {
   return (neuron0x2639de0()*-0.618483);
}

double NNfunction_NN_1_6::synapse0x264ff10() {
   return (neuron0x263a120()*-0.4506);
}

double NNfunction_NN_1_6::synapse0x264ff50() {
   return (neuron0x263a460()*0.273618);
}

double NNfunction_NN_1_6::synapse0x264ff90() {
   return (neuron0x263a7a0()*-0.333405);
}

double NNfunction_NN_1_6::synapse0x264ffd0() {
   return (neuron0x263aae0()*-0.564961);
}

double NNfunction_NN_1_6::synapse0x264fa60() {
   return (neuron0x263ae20()*-0.171129);
}

double NNfunction_NN_1_6::synapse0x264faa0() {
   return (neuron0x263b380()*-0.263664);
}

double NNfunction_NN_1_6::synapse0x2650120() {
   return (neuron0x263b5a0()*-0.564368);
}

double NNfunction_NN_1_6::synapse0x2650160() {
   return (neuron0x263b8e0()*-0.0156362);
}

double NNfunction_NN_1_6::synapse0x26501a0() {
   return (neuron0x263bc20()*-0.186385);
}

double NNfunction_NN_1_6::synapse0x26501e0() {
   return (neuron0x263bf60()*-0.108087);
}

double NNfunction_NN_1_6::synapse0x2650220() {
   return (neuron0x263c2a0()*0.0529137);
}

double NNfunction_NN_1_6::synapse0x2650260() {
   return (neuron0x263c5e0()*0.680554);
}

double NNfunction_NN_1_6::synapse0x26505e0() {
   return (neuron0x2637a20()*-0.0238445);
}

double NNfunction_NN_1_6::synapse0x2650620() {
   return (neuron0x2637d60()*-0.0228015);
}

double NNfunction_NN_1_6::synapse0x2650660() {
   return (neuron0x26380a0()*-0.426552);
}

double NNfunction_NN_1_6::synapse0x26506a0() {
   return (neuron0x26383e0()*2.01577);
}

double NNfunction_NN_1_6::synapse0x26506e0() {
   return (neuron0x2638720()*0.0504223);
}

double NNfunction_NN_1_6::synapse0x2650720() {
   return (neuron0x2638a60()*0.0394899);
}

double NNfunction_NN_1_6::synapse0x2650760() {
   return (neuron0x2638da0()*-0.0528955);
}

double NNfunction_NN_1_6::synapse0x26507a0() {
   return (neuron0x26390e0()*0.0289147);
}

double NNfunction_NN_1_6::synapse0x26507e0() {
   return (neuron0x2639420()*0.00934813);
}

double NNfunction_NN_1_6::synapse0x2650820() {
   return (neuron0x2639760()*0.00273662);
}

double NNfunction_NN_1_6::synapse0x2650860() {
   return (neuron0x2639aa0()*-0.029123);
}

double NNfunction_NN_1_6::synapse0x26508a0() {
   return (neuron0x2639de0()*-0.726004);
}

double NNfunction_NN_1_6::synapse0x26508e0() {
   return (neuron0x263a120()*0.038223);
}

double NNfunction_NN_1_6::synapse0x2650920() {
   return (neuron0x263a460()*-0.044359);
}

double NNfunction_NN_1_6::synapse0x2650960() {
   return (neuron0x263a7a0()*0.0245171);
}

double NNfunction_NN_1_6::synapse0x26509a0() {
   return (neuron0x263aae0()*0.0551692);
}

double NNfunction_NN_1_6::synapse0x2650430() {
   return (neuron0x263ae20()*-0.0581816);
}

double NNfunction_NN_1_6::synapse0x2650470() {
   return (neuron0x263b380()*0.0317041);
}

double NNfunction_NN_1_6::synapse0x2650af0() {
   return (neuron0x263b5a0()*0.0285325);
}

double NNfunction_NN_1_6::synapse0x2650b30() {
   return (neuron0x263b8e0()*-0.00106329);
}

double NNfunction_NN_1_6::synapse0x2650b70() {
   return (neuron0x263bc20()*0.00496339);
}

double NNfunction_NN_1_6::synapse0x2650bb0() {
   return (neuron0x263bf60()*-0.0562735);
}

double NNfunction_NN_1_6::synapse0x2650bf0() {
   return (neuron0x263c2a0()*0.0295612);
}

double NNfunction_NN_1_6::synapse0x2650c30() {
   return (neuron0x263c5e0()*0.127834);
}

double NNfunction_NN_1_6::synapse0x2650fb0() {
   return (neuron0x2637a20()*0.0756102);
}

double NNfunction_NN_1_6::synapse0x2650ff0() {
   return (neuron0x2637d60()*0.031163);
}

double NNfunction_NN_1_6::synapse0x2651030() {
   return (neuron0x26380a0()*2.20952);
}

double NNfunction_NN_1_6::synapse0x2651070() {
   return (neuron0x26383e0()*0.0154947);
}

double NNfunction_NN_1_6::synapse0x26510b0() {
   return (neuron0x2638720()*0.0812739);
}

double NNfunction_NN_1_6::synapse0x26510f0() {
   return (neuron0x2638a60()*0.00403435);
}

double NNfunction_NN_1_6::synapse0x2651130() {
   return (neuron0x2638da0()*0.0536266);
}

double NNfunction_NN_1_6::synapse0x2651170() {
   return (neuron0x26390e0()*0.0369891);
}

double NNfunction_NN_1_6::synapse0x26511b0() {
   return (neuron0x2639420()*-0.000316659);
}

double NNfunction_NN_1_6::synapse0x26511f0() {
   return (neuron0x2639760()*-0.0406485);
}

double NNfunction_NN_1_6::synapse0x2651230() {
   return (neuron0x2639aa0()*-0.0683347);
}

double NNfunction_NN_1_6::synapse0x2651270() {
   return (neuron0x2639de0()*-2.58265);
}

double NNfunction_NN_1_6::synapse0x26512b0() {
   return (neuron0x263a120()*0.172771);
}

double NNfunction_NN_1_6::synapse0x26512f0() {
   return (neuron0x263a460()*-0.010449);
}

double NNfunction_NN_1_6::synapse0x2651330() {
   return (neuron0x263a7a0()*0.0763101);
}

double NNfunction_NN_1_6::synapse0x2651370() {
   return (neuron0x263aae0()*0.000267166);
}

double NNfunction_NN_1_6::synapse0x2650e00() {
   return (neuron0x263ae20()*-0.0476318);
}

double NNfunction_NN_1_6::synapse0x2650e40() {
   return (neuron0x263b380()*-0.0839102);
}

double NNfunction_NN_1_6::synapse0x26514c0() {
   return (neuron0x263b5a0()*0.0481188);
}

double NNfunction_NN_1_6::synapse0x2651500() {
   return (neuron0x263b8e0()*0.00964997);
}

double NNfunction_NN_1_6::synapse0x2651540() {
   return (neuron0x263bc20()*-0.0300732);
}

double NNfunction_NN_1_6::synapse0x2651580() {
   return (neuron0x263bf60()*-0.0185862);
}

double NNfunction_NN_1_6::synapse0x26515c0() {
   return (neuron0x263c2a0()*0.034345);
}

double NNfunction_NN_1_6::synapse0x2651600() {
   return (neuron0x263c5e0()*-5.36755);
}

double NNfunction_NN_1_6::synapse0x2651980() {
   return (neuron0x2637a20()*0.00677268);
}

double NNfunction_NN_1_6::synapse0x26519c0() {
   return (neuron0x2637d60()*-0.0384546);
}

double NNfunction_NN_1_6::synapse0x2651a00() {
   return (neuron0x26380a0()*2.82615);
}

double NNfunction_NN_1_6::synapse0x2651a40() {
   return (neuron0x26383e0()*-0.056473);
}

double NNfunction_NN_1_6::synapse0x2651a80() {
   return (neuron0x2638720()*-0.0509633);
}

double NNfunction_NN_1_6::synapse0x2651ac0() {
   return (neuron0x2638a60()*0.0111527);
}

double NNfunction_NN_1_6::synapse0x2651b00() {
   return (neuron0x2638da0()*-0.00532887);
}

double NNfunction_NN_1_6::synapse0x2651b40() {
   return (neuron0x26390e0()*0.0674994);
}

double NNfunction_NN_1_6::synapse0x2651b80() {
   return (neuron0x2639420()*0.00429387);
}

double NNfunction_NN_1_6::synapse0x2651bc0() {
   return (neuron0x2639760()*-0.0156599);
}

double NNfunction_NN_1_6::synapse0x2651c00() {
   return (neuron0x2639aa0()*-0.0260182);
}

double NNfunction_NN_1_6::synapse0x2651c40() {
   return (neuron0x2639de0()*-1.67766);
}

double NNfunction_NN_1_6::synapse0x2651c80() {
   return (neuron0x263a120()*-0.0355389);
}

double NNfunction_NN_1_6::synapse0x2651cc0() {
   return (neuron0x263a460()*-0.0193605);
}

double NNfunction_NN_1_6::synapse0x2651d00() {
   return (neuron0x263a7a0()*-0.0119275);
}

double NNfunction_NN_1_6::synapse0x2651d40() {
   return (neuron0x263aae0()*-0.00607463);
}

double NNfunction_NN_1_6::synapse0x26517d0() {
   return (neuron0x263ae20()*0.0362402);
}

double NNfunction_NN_1_6::synapse0x2651810() {
   return (neuron0x263b380()*-0.0413797);
}

double NNfunction_NN_1_6::synapse0x2651e90() {
   return (neuron0x263b5a0()*-0.0226121);
}

double NNfunction_NN_1_6::synapse0x2651ed0() {
   return (neuron0x263b8e0()*0.0471307);
}

double NNfunction_NN_1_6::synapse0x2651f10() {
   return (neuron0x263bc20()*-0.0247765);
}

double NNfunction_NN_1_6::synapse0x2651f50() {
   return (neuron0x263bf60()*-0.0367825);
}

double NNfunction_NN_1_6::synapse0x2651f90() {
   return (neuron0x263c2a0()*-0.00178698);
}

double NNfunction_NN_1_6::synapse0x2651fd0() {
   return (neuron0x263c5e0()*0.840349);
}

double NNfunction_NN_1_6::synapse0x2652350() {
   return (neuron0x2637a20()*-0.0436032);
}

double NNfunction_NN_1_6::synapse0x2646920() {
   return (neuron0x2637d60()*-0.175729);
}

double NNfunction_NN_1_6::synapse0x2646960() {
   return (neuron0x26380a0()*0.845104);
}

double NNfunction_NN_1_6::synapse0x26469a0() {
   return (neuron0x26383e0()*-0.0200932);
}

double NNfunction_NN_1_6::synapse0x2646bf0() {
   return (neuron0x2638720()*-0.252653);
}

double NNfunction_NN_1_6::synapse0x2646c30() {
   return (neuron0x2638a60()*-0.0464498);
}

double NNfunction_NN_1_6::synapse0x2646c70() {
   return (neuron0x2638da0()*-0.339311);
}

double NNfunction_NN_1_6::synapse0x2646ec0() {
   return (neuron0x26390e0()*-0.281613);
}

double NNfunction_NN_1_6::synapse0x2646f00() {
   return (neuron0x2639420()*-0.0788081);
}

double NNfunction_NN_1_6::synapse0x2647150() {
   return (neuron0x2639760()*-0.133812);
}

double NNfunction_NN_1_6::synapse0x2647190() {
   return (neuron0x2639aa0()*0.657205);
}

double NNfunction_NN_1_6::synapse0x26471d0() {
   return (neuron0x2639de0()*-1.0283);
}

double NNfunction_NN_1_6::synapse0x2647420() {
   return (neuron0x263a120()*0.278776);
}

double NNfunction_NN_1_6::synapse0x2647460() {
   return (neuron0x263a460()*-0.0122148);
}

double NNfunction_NN_1_6::synapse0x26476b0() {
   return (neuron0x263a7a0()*0.129714);
}

double NNfunction_NN_1_6::synapse0x26476f0() {
   return (neuron0x263aae0()*0.420231);
}

double NNfunction_NN_1_6::synapse0x26521a0() {
   return (neuron0x263ae20()*0.0506483);
}

double NNfunction_NN_1_6::synapse0x26521e0() {
   return (neuron0x263b380()*0.211629);
}

double NNfunction_NN_1_6::synapse0x2647840() {
   return (neuron0x263b5a0()*0.316826);
}

double NNfunction_NN_1_6::synapse0x2647d50() {
   return (neuron0x263b8e0()*0.384166);
}

double NNfunction_NN_1_6::synapse0x2647d90() {
   return (neuron0x263bc20()*0.300802);
}

double NNfunction_NN_1_6::synapse0x2647dd0() {
   return (neuron0x263bf60()*0.0863618);
}

double NNfunction_NN_1_6::synapse0x2648020() {
   return (neuron0x263c2a0()*-0.341974);
}

double NNfunction_NN_1_6::synapse0x2648060() {
   return (neuron0x263c5e0()*-0.191658);
}

double NNfunction_NN_1_6::synapse0x2647910() {
   return (neuron0x2637a20()*0.022135);
}

double NNfunction_NN_1_6::synapse0x2647950() {
   return (neuron0x2637d60()*0.00541312);
}

double NNfunction_NN_1_6::synapse0x2647990() {
   return (neuron0x26380a0()*0.0782977);
}

double NNfunction_NN_1_6::synapse0x26479d0() {
   return (neuron0x26383e0()*-3.9562);
}

double NNfunction_NN_1_6::synapse0x2648350() {
   return (neuron0x2638720()*-0.0693801);
}

double NNfunction_NN_1_6::synapse0x26546a0() {
   return (neuron0x2638a60()*-0.00346561);
}

double NNfunction_NN_1_6::synapse0x26546e0() {
   return (neuron0x2638da0()*0.0570543);
}

double NNfunction_NN_1_6::synapse0x2654720() {
   return (neuron0x26390e0()*0.0230013);
}

double NNfunction_NN_1_6::synapse0x2654760() {
   return (neuron0x2639420()*-0.00250579);
}

double NNfunction_NN_1_6::synapse0x26547a0() {
   return (neuron0x2639760()*-0.0182867);
}

double NNfunction_NN_1_6::synapse0x26547e0() {
   return (neuron0x2639aa0()*0.0253959);
}

double NNfunction_NN_1_6::synapse0x2654820() {
   return (neuron0x2639de0()*-0.415872);
}

double NNfunction_NN_1_6::synapse0x2654860() {
   return (neuron0x263a120()*-0.126532);
}

double NNfunction_NN_1_6::synapse0x26548a0() {
   return (neuron0x263a460()*0.00277795);
}

double NNfunction_NN_1_6::synapse0x26548e0() {
   return (neuron0x263a7a0()*-0.0115728);
}

double NNfunction_NN_1_6::synapse0x2654920() {
   return (neuron0x263aae0()*-0.0234259);
}

double NNfunction_NN_1_6::synapse0x2648230() {
   return (neuron0x263ae20()*0.00316342);
}

double NNfunction_NN_1_6::synapse0x2648270() {
   return (neuron0x263b380()*-0.0503207);
}

double NNfunction_NN_1_6::synapse0x2654a70() {
   return (neuron0x263b5a0()*-0.054003);
}

double NNfunction_NN_1_6::synapse0x2654ab0() {
   return (neuron0x263b8e0()*-0.00994001);
}

double NNfunction_NN_1_6::synapse0x2654af0() {
   return (neuron0x263bc20()*-0.000797149);
}

double NNfunction_NN_1_6::synapse0x2654b30() {
   return (neuron0x263bf60()*0.0510896);
}

double NNfunction_NN_1_6::synapse0x2654b70() {
   return (neuron0x263c2a0()*-0.0674904);
}

double NNfunction_NN_1_6::synapse0x2654bb0() {
   return (neuron0x263c5e0()*-0.0296018);
}

double NNfunction_NN_1_6::synapse0x2654f30() {
   return (neuron0x2637a20()*0.144439);
}

double NNfunction_NN_1_6::synapse0x2654f70() {
   return (neuron0x2637d60()*-0.0271858);
}

double NNfunction_NN_1_6::synapse0x2654fb0() {
   return (neuron0x26380a0()*-1.19947);
}

double NNfunction_NN_1_6::synapse0x2654ff0() {
   return (neuron0x26383e0()*-0.00196586);
}

double NNfunction_NN_1_6::synapse0x2655030() {
   return (neuron0x2638720()*0.0210784);
}

double NNfunction_NN_1_6::synapse0x2655070() {
   return (neuron0x2638a60()*0.00103359);
}

double NNfunction_NN_1_6::synapse0x26550b0() {
   return (neuron0x2638da0()*-0.0110769);
}

double NNfunction_NN_1_6::synapse0x26550f0() {
   return (neuron0x26390e0()*-0.0560083);
}

double NNfunction_NN_1_6::synapse0x2655130() {
   return (neuron0x2639420()*-0.0104912);
}

double NNfunction_NN_1_6::synapse0x2655170() {
   return (neuron0x2639760()*0.0206868);
}

double NNfunction_NN_1_6::synapse0x26551b0() {
   return (neuron0x2639aa0()*0.0228808);
}

double NNfunction_NN_1_6::synapse0x26551f0() {
   return (neuron0x2639de0()*-3.87738);
}

double NNfunction_NN_1_6::synapse0x2655230() {
   return (neuron0x263a120()*-0.00156505);
}

double NNfunction_NN_1_6::synapse0x2655270() {
   return (neuron0x263a460()*0.0181203);
}

double NNfunction_NN_1_6::synapse0x26552b0() {
   return (neuron0x263a7a0()*0.00690765);
}

double NNfunction_NN_1_6::synapse0x26552f0() {
   return (neuron0x263aae0()*-0.0370305);
}

double NNfunction_NN_1_6::synapse0x2654d80() {
   return (neuron0x263ae20()*-0.0871781);
}

double NNfunction_NN_1_6::synapse0x2654dc0() {
   return (neuron0x263b380()*0.0274074);
}

double NNfunction_NN_1_6::synapse0x2655440() {
   return (neuron0x263b5a0()*0.0515482);
}

double NNfunction_NN_1_6::synapse0x2655480() {
   return (neuron0x263b8e0()*0.0178837);
}

double NNfunction_NN_1_6::synapse0x26554c0() {
   return (neuron0x263bc20()*-0.0348946);
}

double NNfunction_NN_1_6::synapse0x2655500() {
   return (neuron0x263bf60()*-0.0126678);
}

double NNfunction_NN_1_6::synapse0x2655540() {
   return (neuron0x263c2a0()*-0.0126605);
}

double NNfunction_NN_1_6::synapse0x2655580() {
   return (neuron0x263c5e0()*0.206344);
}

double NNfunction_NN_1_6::synapse0x2655900() {
   return (neuron0x2637a20()*0.0617719);
}

double NNfunction_NN_1_6::synapse0x2655940() {
   return (neuron0x2637d60()*0.0165715);
}

double NNfunction_NN_1_6::synapse0x2655980() {
   return (neuron0x26380a0()*-0.833603);
}

double NNfunction_NN_1_6::synapse0x26559c0() {
   return (neuron0x26383e0()*-0.214838);
}

double NNfunction_NN_1_6::synapse0x2655a00() {
   return (neuron0x2638720()*0.00425333);
}

double NNfunction_NN_1_6::synapse0x2655a40() {
   return (neuron0x2638a60()*-0.000459833);
}

double NNfunction_NN_1_6::synapse0x2655a80() {
   return (neuron0x2638da0()*0.139346);
}

double NNfunction_NN_1_6::synapse0x2655ac0() {
   return (neuron0x26390e0()*-0.101634);
}

double NNfunction_NN_1_6::synapse0x2655b00() {
   return (neuron0x2639420()*-0.0776476);
}

double NNfunction_NN_1_6::synapse0x2655b40() {
   return (neuron0x2639760()*0.0508667);
}

double NNfunction_NN_1_6::synapse0x2655b80() {
   return (neuron0x2639aa0()*0.121621);
}

double NNfunction_NN_1_6::synapse0x2655bc0() {
   return (neuron0x2639de0()*0.0666715);
}

double NNfunction_NN_1_6::synapse0x2655c00() {
   return (neuron0x263a120()*0.190199);
}

double NNfunction_NN_1_6::synapse0x2655c40() {
   return (neuron0x263a460()*-0.0148237);
}

double NNfunction_NN_1_6::synapse0x2655c80() {
   return (neuron0x263a7a0()*0.0892522);
}

double NNfunction_NN_1_6::synapse0x2655cc0() {
   return (neuron0x263aae0()*0.0456591);
}

double NNfunction_NN_1_6::synapse0x2655750() {
   return (neuron0x263ae20()*0.00835202);
}

double NNfunction_NN_1_6::synapse0x2655790() {
   return (neuron0x263b380()*0.197799);
}

double NNfunction_NN_1_6::synapse0x2655e10() {
   return (neuron0x263b5a0()*0.087618);
}

double NNfunction_NN_1_6::synapse0x2655e50() {
   return (neuron0x263b8e0()*0.0967028);
}

double NNfunction_NN_1_6::synapse0x2655e90() {
   return (neuron0x263bc20()*-0.123646);
}

double NNfunction_NN_1_6::synapse0x2655ed0() {
   return (neuron0x263bf60()*0.124255);
}

double NNfunction_NN_1_6::synapse0x2655f10() {
   return (neuron0x263c2a0()*-0.0901592);
}

double NNfunction_NN_1_6::synapse0x2655f50() {
   return (neuron0x263c5e0()*0.259679);
}

double NNfunction_NN_1_6::synapse0x26562d0() {
   return (neuron0x2637a20()*0.00149805);
}

double NNfunction_NN_1_6::synapse0x2656310() {
   return (neuron0x2637d60()*0.0326985);
}

double NNfunction_NN_1_6::synapse0x2656350() {
   return (neuron0x26380a0()*2.3134);
}

double NNfunction_NN_1_6::synapse0x2656390() {
   return (neuron0x26383e0()*0.0224016);
}

double NNfunction_NN_1_6::synapse0x26563d0() {
   return (neuron0x2638720()*0.0258626);
}

double NNfunction_NN_1_6::synapse0x2656410() {
   return (neuron0x2638a60()*0.0124919);
}

double NNfunction_NN_1_6::synapse0x2656450() {
   return (neuron0x2638da0()*0.0261733);
}

double NNfunction_NN_1_6::synapse0x2656490() {
   return (neuron0x26390e0()*0.0465196);
}

double NNfunction_NN_1_6::synapse0x26564d0() {
   return (neuron0x2639420()*-0.0295537);
}

double NNfunction_NN_1_6::synapse0x2656510() {
   return (neuron0x2639760()*-0.0202237);
}

double NNfunction_NN_1_6::synapse0x2656550() {
   return (neuron0x2639aa0()*-0.00192208);
}

double NNfunction_NN_1_6::synapse0x2656590() {
   return (neuron0x2639de0()*-7.17164);
}

double NNfunction_NN_1_6::synapse0x26565d0() {
   return (neuron0x263a120()*-0.0291913);
}

double NNfunction_NN_1_6::synapse0x2656610() {
   return (neuron0x263a460()*0.000571691);
}

double NNfunction_NN_1_6::synapse0x2656650() {
   return (neuron0x263a7a0()*0.0438836);
}

double NNfunction_NN_1_6::synapse0x2656690() {
   return (neuron0x263aae0()*0.0244909);
}

double NNfunction_NN_1_6::synapse0x2656120() {
   return (neuron0x263ae20()*-0.00933004);
}

double NNfunction_NN_1_6::synapse0x2656160() {
   return (neuron0x263b380()*-0.00540536);
}

double NNfunction_NN_1_6::synapse0x26567e0() {
   return (neuron0x263b5a0()*-0.0138837);
}

double NNfunction_NN_1_6::synapse0x2656820() {
   return (neuron0x263b8e0()*-0.0120635);
}

double NNfunction_NN_1_6::synapse0x2656860() {
   return (neuron0x263bc20()*-0.0144764);
}

double NNfunction_NN_1_6::synapse0x26568a0() {
   return (neuron0x263bf60()*-0.0236957);
}

double NNfunction_NN_1_6::synapse0x26568e0() {
   return (neuron0x263c2a0()*-0.0209393);
}

double NNfunction_NN_1_6::synapse0x2656920() {
   return (neuron0x263c5e0()*3.22216);
}

double NNfunction_NN_1_6::synapse0x2656ca0() {
   return (neuron0x2637a20()*-0.168427);
}

double NNfunction_NN_1_6::synapse0x2656ce0() {
   return (neuron0x2637d60()*0.00540099);
}

double NNfunction_NN_1_6::synapse0x2656d20() {
   return (neuron0x26380a0()*0.383054);
}

double NNfunction_NN_1_6::synapse0x2656d60() {
   return (neuron0x26383e0()*-0.035894);
}

double NNfunction_NN_1_6::synapse0x2656da0() {
   return (neuron0x2638720()*-0.0231835);
}

double NNfunction_NN_1_6::synapse0x2656de0() {
   return (neuron0x2638a60()*-0.0148404);
}

double NNfunction_NN_1_6::synapse0x2656e20() {
   return (neuron0x2638da0()*-0.0157952);
}

double NNfunction_NN_1_6::synapse0x2656e60() {
   return (neuron0x26390e0()*0.0111309);
}

double NNfunction_NN_1_6::synapse0x2656ea0() {
   return (neuron0x2639420()*0.00117938);
}

double NNfunction_NN_1_6::synapse0x2656ee0() {
   return (neuron0x2639760()*0.0392638);
}

double NNfunction_NN_1_6::synapse0x2656f20() {
   return (neuron0x2639aa0()*0.00796594);
}

double NNfunction_NN_1_6::synapse0x2656f60() {
   return (neuron0x2639de0()*0.0141964);
}

double NNfunction_NN_1_6::synapse0x2656fa0() {
   return (neuron0x263a120()*-0.0172246);
}

double NNfunction_NN_1_6::synapse0x2656fe0() {
   return (neuron0x263a460()*-0.000597706);
}

double NNfunction_NN_1_6::synapse0x2657020() {
   return (neuron0x263a7a0()*0.00306629);
}

double NNfunction_NN_1_6::synapse0x2657060() {
   return (neuron0x263aae0()*-0.000719568);
}

double NNfunction_NN_1_6::synapse0x2656af0() {
   return (neuron0x263ae20()*0.0266317);
}

double NNfunction_NN_1_6::synapse0x2656b30() {
   return (neuron0x263b380()*0.00143654);
}

double NNfunction_NN_1_6::synapse0x26571b0() {
   return (neuron0x263b5a0()*-0.00102173);
}

double NNfunction_NN_1_6::synapse0x26571f0() {
   return (neuron0x263b8e0()*0.0456575);
}

double NNfunction_NN_1_6::synapse0x2657230() {
   return (neuron0x263bc20()*0.020007);
}

double NNfunction_NN_1_6::synapse0x2657270() {
   return (neuron0x263bf60()*-0.00922024);
}

double NNfunction_NN_1_6::synapse0x26572b0() {
   return (neuron0x263c2a0()*-0.0411153);
}

double NNfunction_NN_1_6::synapse0x26572f0() {
   return (neuron0x263c5e0()*-12.9442);
}

double NNfunction_NN_1_6::synapse0x2657670() {
   return (neuron0x2637a20()*0.0558942);
}

double NNfunction_NN_1_6::synapse0x26576b0() {
   return (neuron0x2637d60()*-0.0133244);
}

double NNfunction_NN_1_6::synapse0x26576f0() {
   return (neuron0x26380a0()*-1.08271);
}

double NNfunction_NN_1_6::synapse0x2657730() {
   return (neuron0x26383e0()*0.0135107);
}

double NNfunction_NN_1_6::synapse0x2657770() {
   return (neuron0x2638720()*-0.000267003);
}

double NNfunction_NN_1_6::synapse0x26577b0() {
   return (neuron0x2638a60()*-0.0262333);
}

double NNfunction_NN_1_6::synapse0x26577f0() {
   return (neuron0x2638da0()*0.00152845);
}

double NNfunction_NN_1_6::synapse0x2657830() {
   return (neuron0x26390e0()*0.0264371);
}

double NNfunction_NN_1_6::synapse0x2657870() {
   return (neuron0x2639420()*0.0256442);
}

double NNfunction_NN_1_6::synapse0x26578b0() {
   return (neuron0x2639760()*-0.0366509);
}

double NNfunction_NN_1_6::synapse0x26578f0() {
   return (neuron0x2639aa0()*0.0119317);
}

double NNfunction_NN_1_6::synapse0x2657930() {
   return (neuron0x2639de0()*4.44166);
}

double NNfunction_NN_1_6::synapse0x2657970() {
   return (neuron0x263a120()*-0.0974691);
}

double NNfunction_NN_1_6::synapse0x26579b0() {
   return (neuron0x263a460()*0.0365545);
}

double NNfunction_NN_1_6::synapse0x26579f0() {
   return (neuron0x263a7a0()*0.0380082);
}

double NNfunction_NN_1_6::synapse0x2657a30() {
   return (neuron0x263aae0()*0.000432708);
}

double NNfunction_NN_1_6::synapse0x26574c0() {
   return (neuron0x263ae20()*-0.0196801);
}

double NNfunction_NN_1_6::synapse0x2657500() {
   return (neuron0x263b380()*0.0299131);
}

double NNfunction_NN_1_6::synapse0x2657b80() {
   return (neuron0x263b5a0()*0.0113523);
}

double NNfunction_NN_1_6::synapse0x2657bc0() {
   return (neuron0x263b8e0()*-0.00737622);
}

double NNfunction_NN_1_6::synapse0x2657c00() {
   return (neuron0x263bc20()*-0.0147209);
}

double NNfunction_NN_1_6::synapse0x2657c40() {
   return (neuron0x263bf60()*-0.0255323);
}

double NNfunction_NN_1_6::synapse0x2657c80() {
   return (neuron0x263c2a0()*0.032183);
}

double NNfunction_NN_1_6::synapse0x2657cc0() {
   return (neuron0x263c5e0()*-2.25997);
}

double NNfunction_NN_1_6::synapse0x2658040() {
   return (neuron0x2637a20()*-0.0134684);
}

double NNfunction_NN_1_6::synapse0x2658080() {
   return (neuron0x2637d60()*-0.00222495);
}

double NNfunction_NN_1_6::synapse0x26580c0() {
   return (neuron0x26380a0()*0.619625);
}

double NNfunction_NN_1_6::synapse0x2658100() {
   return (neuron0x26383e0()*2.39781);
}

double NNfunction_NN_1_6::synapse0x2658140() {
   return (neuron0x2638720()*0.000681387);
}

double NNfunction_NN_1_6::synapse0x2658180() {
   return (neuron0x2638a60()*-0.0302156);
}

double NNfunction_NN_1_6::synapse0x26581c0() {
   return (neuron0x2638da0()*0.0100513);
}

double NNfunction_NN_1_6::synapse0x2658200() {
   return (neuron0x26390e0()*-0.057029);
}

double NNfunction_NN_1_6::synapse0x2658240() {
   return (neuron0x2639420()*-0.022229);
}

double NNfunction_NN_1_6::synapse0x2658280() {
   return (neuron0x2639760()*-0.0105932);
}

double NNfunction_NN_1_6::synapse0x26582c0() {
   return (neuron0x2639aa0()*0.000559744);
}

double NNfunction_NN_1_6::synapse0x2658300() {
   return (neuron0x2639de0()*2.47012);
}

double NNfunction_NN_1_6::synapse0x2658340() {
   return (neuron0x263a120()*0.00144608);
}

double NNfunction_NN_1_6::synapse0x2658380() {
   return (neuron0x263a460()*-0.00983415);
}

double NNfunction_NN_1_6::synapse0x26583c0() {
   return (neuron0x263a7a0()*-0.0135439);
}

double NNfunction_NN_1_6::synapse0x2658400() {
   return (neuron0x263aae0()*-0.0857266);
}

double NNfunction_NN_1_6::synapse0x2657e90() {
   return (neuron0x263ae20()*0.0572155);
}

double NNfunction_NN_1_6::synapse0x2657ed0() {
   return (neuron0x263b380()*0.0119525);
}

double NNfunction_NN_1_6::synapse0x2658550() {
   return (neuron0x263b5a0()*-0.0254811);
}

double NNfunction_NN_1_6::synapse0x2658590() {
   return (neuron0x263b8e0()*-0.00779536);
}

double NNfunction_NN_1_6::synapse0x26585d0() {
   return (neuron0x263bc20()*-0.0229456);
}

double NNfunction_NN_1_6::synapse0x2658610() {
   return (neuron0x263bf60()*-0.0147227);
}

double NNfunction_NN_1_6::synapse0x2658650() {
   return (neuron0x263c2a0()*0.0216799);
}

double NNfunction_NN_1_6::synapse0x2658690() {
   return (neuron0x263c5e0()*-0.17467);
}

double NNfunction_NN_1_6::synapse0x2658a10() {
   return (neuron0x2637a20()*-0.0253162);
}

double NNfunction_NN_1_6::synapse0x2658a50() {
   return (neuron0x2637d60()*-0.0278876);
}

double NNfunction_NN_1_6::synapse0x2658a90() {
   return (neuron0x26380a0()*0.217126);
}

double NNfunction_NN_1_6::synapse0x2658ad0() {
   return (neuron0x26383e0()*-0.0145235);
}

double NNfunction_NN_1_6::synapse0x2658b10() {
   return (neuron0x2638720()*-0.0059032);
}

double NNfunction_NN_1_6::synapse0x2658b50() {
   return (neuron0x2638a60()*0.00691709);
}

double NNfunction_NN_1_6::synapse0x2658b90() {
   return (neuron0x2638da0()*-0.00809935);
}

double NNfunction_NN_1_6::synapse0x2658bd0() {
   return (neuron0x26390e0()*0.0175032);
}

double NNfunction_NN_1_6::synapse0x2658c10() {
   return (neuron0x2639420()*0.00565047);
}

double NNfunction_NN_1_6::synapse0x2658c50() {
   return (neuron0x2639760()*-0.00926381);
}

double NNfunction_NN_1_6::synapse0x2658c90() {
   return (neuron0x2639aa0()*-0.00633654);
}

double NNfunction_NN_1_6::synapse0x2658cd0() {
   return (neuron0x2639de0()*0.583831);
}

double NNfunction_NN_1_6::synapse0x2658d10() {
   return (neuron0x263a120()*0.0482474);
}

double NNfunction_NN_1_6::synapse0x2658d50() {
   return (neuron0x263a460()*0.0404864);
}

double NNfunction_NN_1_6::synapse0x2658d90() {
   return (neuron0x263a7a0()*-0.0041055);
}

double NNfunction_NN_1_6::synapse0x2658dd0() {
   return (neuron0x263aae0()*0.0178723);
}

double NNfunction_NN_1_6::synapse0x2658860() {
   return (neuron0x263ae20()*0.0265001);
}

double NNfunction_NN_1_6::synapse0x26588a0() {
   return (neuron0x263b380()*0.00811754);
}

double NNfunction_NN_1_6::synapse0x2658f20() {
   return (neuron0x263b5a0()*0.0094916);
}

double NNfunction_NN_1_6::synapse0x2658f60() {
   return (neuron0x263b8e0()*-0.00939396);
}

double NNfunction_NN_1_6::synapse0x2658fa0() {
   return (neuron0x263bc20()*0.0147977);
}

double NNfunction_NN_1_6::synapse0x2658fe0() {
   return (neuron0x263bf60()*0.0276525);
}

double NNfunction_NN_1_6::synapse0x2659020() {
   return (neuron0x263c2a0()*0.0195234);
}

double NNfunction_NN_1_6::synapse0x2659060() {
   return (neuron0x263c5e0()*0.63331);
}

double NNfunction_NN_1_6::synapse0x2641b10() {
   return (neuron0x2637a20()*1.4944);
}

double NNfunction_NN_1_6::synapse0x2641b50() {
   return (neuron0x2637d60()*-0.0154849);
}

double NNfunction_NN_1_6::synapse0x2641b90() {
   return (neuron0x26380a0()*0.20369);
}

double NNfunction_NN_1_6::synapse0x2641bd0() {
   return (neuron0x26383e0()*0.121709);
}

double NNfunction_NN_1_6::synapse0x2641c10() {
   return (neuron0x2638720()*-0.151111);
}

double NNfunction_NN_1_6::synapse0x2641c50() {
   return (neuron0x2638a60()*0.0270531);
}

double NNfunction_NN_1_6::synapse0x2641c90() {
   return (neuron0x2638da0()*0.000672305);
}

double NNfunction_NN_1_6::synapse0x2641cd0() {
   return (neuron0x26390e0()*-0.0187697);
}

double NNfunction_NN_1_6::synapse0x26597f0() {
   return (neuron0x2639420()*0.00631532);
}

double NNfunction_NN_1_6::synapse0x2659830() {
   return (neuron0x2639760()*0.00439446);
}

double NNfunction_NN_1_6::synapse0x2659870() {
   return (neuron0x2639aa0()*-0.0381521);
}

double NNfunction_NN_1_6::synapse0x26598b0() {
   return (neuron0x2639de0()*-0.0408175);
}

double NNfunction_NN_1_6::synapse0x26598f0() {
   return (neuron0x263a120()*0.0538924);
}

double NNfunction_NN_1_6::synapse0x2659930() {
   return (neuron0x263a460()*-0.0493123);
}

double NNfunction_NN_1_6::synapse0x2659970() {
   return (neuron0x263a7a0()*0.0711507);
}

double NNfunction_NN_1_6::synapse0x26599b0() {
   return (neuron0x263aae0()*-0.0206657);
}

double NNfunction_NN_1_6::synapse0x2659230() {
   return (neuron0x263ae20()*0.0934495);
}

double NNfunction_NN_1_6::synapse0x2659270() {
   return (neuron0x263b380()*-0.0265351);
}

double NNfunction_NN_1_6::synapse0x2659b00() {
   return (neuron0x263b5a0()*-0.000981114);
}

double NNfunction_NN_1_6::synapse0x2659b40() {
   return (neuron0x263b8e0()*0.0877059);
}

double NNfunction_NN_1_6::synapse0x2659b80() {
   return (neuron0x263bc20()*-0.0135511);
}

double NNfunction_NN_1_6::synapse0x2659bc0() {
   return (neuron0x263bf60()*-0.0144365);
}

double NNfunction_NN_1_6::synapse0x2659c00() {
   return (neuron0x263c2a0()*0.0049425);
}

double NNfunction_NN_1_6::synapse0x2659c40() {
   return (neuron0x263c5e0()*0.0949356);
}

double NNfunction_NN_1_6::synapse0x2659fc0() {
   return (neuron0x2637a20()*0.092191);
}

double NNfunction_NN_1_6::synapse0x265a000() {
   return (neuron0x2637d60()*0.0199921);
}

double NNfunction_NN_1_6::synapse0x265a040() {
   return (neuron0x26380a0()*-0.668955);
}

double NNfunction_NN_1_6::synapse0x265a080() {
   return (neuron0x26383e0()*-0.00944033);
}

double NNfunction_NN_1_6::synapse0x265a0c0() {
   return (neuron0x2638720()*-0.0269807);
}

double NNfunction_NN_1_6::synapse0x265a100() {
   return (neuron0x2638a60()*-0.00365481);
}

double NNfunction_NN_1_6::synapse0x265a140() {
   return (neuron0x2638da0()*0.0115224);
}

double NNfunction_NN_1_6::synapse0x265a180() {
   return (neuron0x26390e0()*-0.00648723);
}

double NNfunction_NN_1_6::synapse0x265a1c0() {
   return (neuron0x2639420()*-0.0351417);
}

double NNfunction_NN_1_6::synapse0x265a200() {
   return (neuron0x2639760()*-0.00093904);
}

double NNfunction_NN_1_6::synapse0x265a240() {
   return (neuron0x2639aa0()*-0.0135475);
}

double NNfunction_NN_1_6::synapse0x265a280() {
   return (neuron0x2639de0()*0.41749);
}

double NNfunction_NN_1_6::synapse0x265a2c0() {
   return (neuron0x263a120()*0.114195);
}

double NNfunction_NN_1_6::synapse0x265a300() {
   return (neuron0x263a460()*-0.0510638);
}

double NNfunction_NN_1_6::synapse0x265a340() {
   return (neuron0x263a7a0()*0.0540106);
}

double NNfunction_NN_1_6::synapse0x265a380() {
   return (neuron0x263aae0()*0.0265398);
}

double NNfunction_NN_1_6::synapse0x2659e10() {
   return (neuron0x263ae20()*-0.0130883);
}

double NNfunction_NN_1_6::synapse0x2659e50() {
   return (neuron0x263b380()*0.0155473);
}

double NNfunction_NN_1_6::synapse0x265a4d0() {
   return (neuron0x263b5a0()*0.0609485);
}

double NNfunction_NN_1_6::synapse0x265a510() {
   return (neuron0x263b8e0()*0.0463293);
}

double NNfunction_NN_1_6::synapse0x265a550() {
   return (neuron0x263bc20()*-0.0222363);
}

double NNfunction_NN_1_6::synapse0x265a590() {
   return (neuron0x263bf60()*0.0172208);
}

double NNfunction_NN_1_6::synapse0x265a5d0() {
   return (neuron0x263c2a0()*0.00364881);
}

double NNfunction_NN_1_6::synapse0x265a610() {
   return (neuron0x263c5e0()*0.618458);
}

double NNfunction_NN_1_6::synapse0x265a990() {
   return (neuron0x2637a20()*-0.42551);
}

double NNfunction_NN_1_6::synapse0x265a9d0() {
   return (neuron0x2637d60()*0.154679);
}

double NNfunction_NN_1_6::synapse0x265aa10() {
   return (neuron0x26380a0()*-0.236309);
}

double NNfunction_NN_1_6::synapse0x265aa50() {
   return (neuron0x26383e0()*0.250113);
}

double NNfunction_NN_1_6::synapse0x265aa90() {
   return (neuron0x2638720()*-0.229844);
}

double NNfunction_NN_1_6::synapse0x265aad0() {
   return (neuron0x2638a60()*0.106871);
}

double NNfunction_NN_1_6::synapse0x265ab10() {
   return (neuron0x2638da0()*-0.225939);
}

double NNfunction_NN_1_6::synapse0x265ab50() {
   return (neuron0x26390e0()*-0.176913);
}

double NNfunction_NN_1_6::synapse0x265ab90() {
   return (neuron0x2639420()*0.401178);
}

double NNfunction_NN_1_6::synapse0x265abd0() {
   return (neuron0x2639760()*-0.0681304);
}

double NNfunction_NN_1_6::synapse0x265ac10() {
   return (neuron0x2639aa0()*0.116035);
}

double NNfunction_NN_1_6::synapse0x265ac50() {
   return (neuron0x2639de0()*-0.464194);
}

double NNfunction_NN_1_6::synapse0x265ac90() {
   return (neuron0x263a120()*-0.840808);
}

double NNfunction_NN_1_6::synapse0x265acd0() {
   return (neuron0x263a460()*-0.188032);
}

double NNfunction_NN_1_6::synapse0x265ad10() {
   return (neuron0x263a7a0()*-0.143002);
}

double NNfunction_NN_1_6::synapse0x265ad50() {
   return (neuron0x263aae0()*-0.0768829);
}

double NNfunction_NN_1_6::synapse0x265a7e0() {
   return (neuron0x263ae20()*0.212021);
}

double NNfunction_NN_1_6::synapse0x265a820() {
   return (neuron0x263b380()*-0.361779);
}

double NNfunction_NN_1_6::synapse0x264b350() {
   return (neuron0x263b5a0()*0.0865742);
}

double NNfunction_NN_1_6::synapse0x264b390() {
   return (neuron0x263b8e0()*0.283754);
}

double NNfunction_NN_1_6::synapse0x264b3d0() {
   return (neuron0x263bc20()*0.143429);
}

double NNfunction_NN_1_6::synapse0x264b410() {
   return (neuron0x263bf60()*0.529959);
}

double NNfunction_NN_1_6::synapse0x264b450() {
   return (neuron0x263c2a0()*-0.158627);
}

double NNfunction_NN_1_6::synapse0x264b490() {
   return (neuron0x263c5e0()*-0.773209);
}

double NNfunction_NN_1_6::synapse0x264b810() {
   return (neuron0x2637a20()*0.163535);
}

double NNfunction_NN_1_6::synapse0x264b850() {
   return (neuron0x2637d60()*-0.200595);
}

double NNfunction_NN_1_6::synapse0x264b890() {
   return (neuron0x26380a0()*-1.02298);
}

double NNfunction_NN_1_6::synapse0x264b8d0() {
   return (neuron0x26383e0()*0.152315);
}

double NNfunction_NN_1_6::synapse0x264b910() {
   return (neuron0x2638720()*0.0317355);
}

double NNfunction_NN_1_6::synapse0x264b950() {
   return (neuron0x2638a60()*0.0685559);
}

double NNfunction_NN_1_6::synapse0x264b990() {
   return (neuron0x2638da0()*0.0117452);
}

double NNfunction_NN_1_6::synapse0x264b9d0() {
   return (neuron0x26390e0()*0.458757);
}

double NNfunction_NN_1_6::synapse0x264ba10() {
   return (neuron0x2639420()*-0.119075);
}

double NNfunction_NN_1_6::synapse0x264ba50() {
   return (neuron0x2639760()*-0.426822);
}

double NNfunction_NN_1_6::synapse0x264ba90() {
   return (neuron0x2639aa0()*-0.122227);
}

double NNfunction_NN_1_6::synapse0x264bad0() {
   return (neuron0x2639de0()*-0.21685);
}

double NNfunction_NN_1_6::synapse0x264bb10() {
   return (neuron0x263a120()*-0.35083);
}

double NNfunction_NN_1_6::synapse0x264bb50() {
   return (neuron0x263a460()*0.208185);
}

double NNfunction_NN_1_6::synapse0x264bb90() {
   return (neuron0x263a7a0()*-0.309643);
}

double NNfunction_NN_1_6::synapse0x264bbd0() {
   return (neuron0x263aae0()*0.212401);
}

double NNfunction_NN_1_6::synapse0x264b660() {
   return (neuron0x263ae20()*0.00385012);
}

double NNfunction_NN_1_6::synapse0x264b6a0() {
   return (neuron0x263b380()*-0.102712);
}

double NNfunction_NN_1_6::synapse0x264bd20() {
   return (neuron0x263b5a0()*0.349418);
}

double NNfunction_NN_1_6::synapse0x264bd60() {
   return (neuron0x263b8e0()*-0.362129);
}

double NNfunction_NN_1_6::synapse0x264bda0() {
   return (neuron0x263bc20()*0.152372);
}

double NNfunction_NN_1_6::synapse0x264bde0() {
   return (neuron0x263bf60()*0.424879);
}

double NNfunction_NN_1_6::synapse0x264be20() {
   return (neuron0x263c2a0()*0.125152);
}

double NNfunction_NN_1_6::synapse0x264be60() {
   return (neuron0x263c5e0()*-0.317446);
}

double NNfunction_NN_1_6::synapse0x264c1e0() {
   return (neuron0x2637a20()*-0.00815308);
}

double NNfunction_NN_1_6::synapse0x264c220() {
   return (neuron0x2637d60()*-5.3514);
}

double NNfunction_NN_1_6::synapse0x264c260() {
   return (neuron0x26380a0()*-0.478646);
}

double NNfunction_NN_1_6::synapse0x264c2a0() {
   return (neuron0x26383e0()*0.005949);
}

double NNfunction_NN_1_6::synapse0x264c2e0() {
   return (neuron0x2638720()*-0.0271481);
}

double NNfunction_NN_1_6::synapse0x264c320() {
   return (neuron0x2638a60()*0.0318673);
}

double NNfunction_NN_1_6::synapse0x264c360() {
   return (neuron0x2638da0()*-0.0316676);
}

double NNfunction_NN_1_6::synapse0x264c3a0() {
   return (neuron0x26390e0()*0.0166586);
}

double NNfunction_NN_1_6::synapse0x264c3e0() {
   return (neuron0x2639420()*-0.00438717);
}

double NNfunction_NN_1_6::synapse0x264c420() {
   return (neuron0x2639760()*-0.00460404);
}

double NNfunction_NN_1_6::synapse0x264c460() {
   return (neuron0x2639aa0()*0.0217513);
}

double NNfunction_NN_1_6::synapse0x264c4a0() {
   return (neuron0x2639de0()*0.119891);
}

double NNfunction_NN_1_6::synapse0x264c4e0() {
   return (neuron0x263a120()*-0.0148574);
}

double NNfunction_NN_1_6::synapse0x264c520() {
   return (neuron0x263a460()*0.000957829);
}

double NNfunction_NN_1_6::synapse0x264c560() {
   return (neuron0x263a7a0()*-0.0362465);
}

double NNfunction_NN_1_6::synapse0x264c5a0() {
   return (neuron0x263aae0()*-0.0160148);
}

double NNfunction_NN_1_6::synapse0x264c030() {
   return (neuron0x263ae20()*0.0134306);
}

double NNfunction_NN_1_6::synapse0x264c070() {
   return (neuron0x263b380()*0.0278772);
}

double NNfunction_NN_1_6::synapse0x264c6f0() {
   return (neuron0x263b5a0()*0.0269983);
}

double NNfunction_NN_1_6::synapse0x264c730() {
   return (neuron0x263b8e0()*-0.0390667);
}

double NNfunction_NN_1_6::synapse0x264c770() {
   return (neuron0x263bc20()*-0.040944);
}

double NNfunction_NN_1_6::synapse0x264c7b0() {
   return (neuron0x263bf60()*-0.0177006);
}

double NNfunction_NN_1_6::synapse0x264c7f0() {
   return (neuron0x263c2a0()*-0.00770938);
}

double NNfunction_NN_1_6::synapse0x264c830() {
   return (neuron0x263c5e0()*-1.04631);
}

double NNfunction_NN_1_6::synapse0x264cbb0() {
   return (neuron0x2637a20()*-0.000915707);
}

double NNfunction_NN_1_6::synapse0x264cbf0() {
   return (neuron0x2637d60()*0.0080779);
}

double NNfunction_NN_1_6::synapse0x264cc30() {
   return (neuron0x26380a0()*2.42437);
}

double NNfunction_NN_1_6::synapse0x264cc70() {
   return (neuron0x26383e0()*-0.0434242);
}

double NNfunction_NN_1_6::synapse0x264ccb0() {
   return (neuron0x2638720()*0.0182043);
}

double NNfunction_NN_1_6::synapse0x264ccf0() {
   return (neuron0x2638a60()*0.0107772);
}

double NNfunction_NN_1_6::synapse0x264cd30() {
   return (neuron0x2638da0()*-0.00736779);
}

double NNfunction_NN_1_6::synapse0x264cd70() {
   return (neuron0x26390e0()*0.00368555);
}

double NNfunction_NN_1_6::synapse0x264cdb0() {
   return (neuron0x2639420()*-0.0061887);
}

double NNfunction_NN_1_6::synapse0x264cdf0() {
   return (neuron0x2639760()*0.0112996);
}

double NNfunction_NN_1_6::synapse0x264ce30() {
   return (neuron0x2639aa0()*-0.00335276);
}

double NNfunction_NN_1_6::synapse0x264ce70() {
   return (neuron0x2639de0()*0.140531);
}

double NNfunction_NN_1_6::synapse0x264ceb0() {
   return (neuron0x263a120()*0.0155387);
}

double NNfunction_NN_1_6::synapse0x264cef0() {
   return (neuron0x263a460()*0.0101144);
}

double NNfunction_NN_1_6::synapse0x264cf30() {
   return (neuron0x263a7a0()*-0.0129496);
}

double NNfunction_NN_1_6::synapse0x264cf70() {
   return (neuron0x263aae0()*-0.0121431);
}

double NNfunction_NN_1_6::synapse0x264ca00() {
   return (neuron0x263ae20()*-0.0297219);
}

double NNfunction_NN_1_6::synapse0x264ca40() {
   return (neuron0x263b380()*0.0152685);
}

double NNfunction_NN_1_6::synapse0x264d0c0() {
   return (neuron0x263b5a0()*-6.2988e-06);
}

double NNfunction_NN_1_6::synapse0x264d100() {
   return (neuron0x263b8e0()*0.00106138);
}

double NNfunction_NN_1_6::synapse0x264d140() {
   return (neuron0x263bc20()*-0.00527418);
}

double NNfunction_NN_1_6::synapse0x264d180() {
   return (neuron0x263bf60()*-0.0170754);
}

double NNfunction_NN_1_6::synapse0x264d1c0() {
   return (neuron0x263c2a0()*-0.00238371);
}

double NNfunction_NN_1_6::synapse0x264d200() {
   return (neuron0x263c5e0()*2.7557);
}

double NNfunction_NN_1_6::synapse0x265f0d0() {
   return (neuron0x2637a20()*0.0857701);
}

double NNfunction_NN_1_6::synapse0x265f110() {
   return (neuron0x2637d60()*-6.78807);
}

double NNfunction_NN_1_6::synapse0x265f150() {
   return (neuron0x26380a0()*0.805351);
}

double NNfunction_NN_1_6::synapse0x265f190() {
   return (neuron0x26383e0()*0.0223328);
}

double NNfunction_NN_1_6::synapse0x265f1d0() {
   return (neuron0x2638720()*-0.0369039);
}

double NNfunction_NN_1_6::synapse0x265f210() {
   return (neuron0x2638a60()*0.0189214);
}

double NNfunction_NN_1_6::synapse0x265f250() {
   return (neuron0x2638da0()*-0.0425113);
}

double NNfunction_NN_1_6::synapse0x265f290() {
   return (neuron0x26390e0()*-0.0258808);
}

double NNfunction_NN_1_6::synapse0x265f2d0() {
   return (neuron0x2639420()*-0.00150641);
}

double NNfunction_NN_1_6::synapse0x265f310() {
   return (neuron0x2639760()*-0.00910445);
}

double NNfunction_NN_1_6::synapse0x265f350() {
   return (neuron0x2639aa0()*0.0700055);
}

double NNfunction_NN_1_6::synapse0x265f390() {
   return (neuron0x2639de0()*-0.810439);
}

double NNfunction_NN_1_6::synapse0x265f3d0() {
   return (neuron0x263a120()*-0.026556);
}

double NNfunction_NN_1_6::synapse0x265f410() {
   return (neuron0x263a460()*0.0362911);
}

double NNfunction_NN_1_6::synapse0x265f450() {
   return (neuron0x263a7a0()*-0.0253495);
}

double NNfunction_NN_1_6::synapse0x265f490() {
   return (neuron0x263aae0()*-0.0251315);
}

double NNfunction_NN_1_6::synapse0x264d240() {
   return (neuron0x263ae20()*0.0173437);
}

double NNfunction_NN_1_6::synapse0x264d280() {
   return (neuron0x263b380()*-0.0319684);
}

double NNfunction_NN_1_6::synapse0x265f5e0() {
   return (neuron0x263b5a0()*-0.00789424);
}

double NNfunction_NN_1_6::synapse0x265f620() {
   return (neuron0x263b8e0()*0.0224448);
}

double NNfunction_NN_1_6::synapse0x265f660() {
   return (neuron0x263bc20()*-0.0400034);
}

double NNfunction_NN_1_6::synapse0x265f6a0() {
   return (neuron0x263bf60()*-0.0244787);
}

double NNfunction_NN_1_6::synapse0x265f6e0() {
   return (neuron0x263c2a0()*-0.0187585);
}

double NNfunction_NN_1_6::synapse0x265f720() {
   return (neuron0x263c5e0()*0.036918);
}

double NNfunction_NN_1_6::synapse0x265faa0() {
   return (neuron0x2637a20()*-0.00439769);
}

double NNfunction_NN_1_6::synapse0x265fae0() {
   return (neuron0x2637d60()*0.00989639);
}

double NNfunction_NN_1_6::synapse0x265fb20() {
   return (neuron0x26380a0()*-1.55933);
}

double NNfunction_NN_1_6::synapse0x265fb60() {
   return (neuron0x26383e0()*0.0648692);
}

double NNfunction_NN_1_6::synapse0x265fba0() {
   return (neuron0x2638720()*0.0148453);
}

double NNfunction_NN_1_6::synapse0x265fbe0() {
   return (neuron0x2638a60()*0.0144925);
}

double NNfunction_NN_1_6::synapse0x265fc20() {
   return (neuron0x2638da0()*0.0130975);
}

double NNfunction_NN_1_6::synapse0x265fc60() {
   return (neuron0x26390e0()*-0.00382668);
}

double NNfunction_NN_1_6::synapse0x265fca0() {
   return (neuron0x2639420()*-0.0276696);
}

double NNfunction_NN_1_6::synapse0x265fce0() {
   return (neuron0x2639760()*0.0117939);
}

double NNfunction_NN_1_6::synapse0x265fd20() {
   return (neuron0x2639aa0()*-0.0225869);
}

double NNfunction_NN_1_6::synapse0x265fd60() {
   return (neuron0x2639de0()*-0.548877);
}

double NNfunction_NN_1_6::synapse0x265fda0() {
   return (neuron0x263a120()*0.0666828);
}

double NNfunction_NN_1_6::synapse0x265fde0() {
   return (neuron0x263a460()*-0.0372793);
}

double NNfunction_NN_1_6::synapse0x265fe20() {
   return (neuron0x263a7a0()*0.0383915);
}

double NNfunction_NN_1_6::synapse0x265fe60() {
   return (neuron0x263aae0()*0.0409276);
}

double NNfunction_NN_1_6::synapse0x265f8f0() {
   return (neuron0x263ae20()*-0.00596148);
}

double NNfunction_NN_1_6::synapse0x265f930() {
   return (neuron0x263b380()*-0.00998257);
}

double NNfunction_NN_1_6::synapse0x265ffb0() {
   return (neuron0x263b5a0()*0.0185494);
}

double NNfunction_NN_1_6::synapse0x265fff0() {
   return (neuron0x263b8e0()*0.0180636);
}

double NNfunction_NN_1_6::synapse0x2660030() {
   return (neuron0x263bc20()*0.0205822);
}

double NNfunction_NN_1_6::synapse0x2660070() {
   return (neuron0x263bf60()*-0.000272033);
}

double NNfunction_NN_1_6::synapse0x26600b0() {
   return (neuron0x263c2a0()*-0.0114049);
}

double NNfunction_NN_1_6::synapse0x26600f0() {
   return (neuron0x263c5e0()*1.25693);
}

double NNfunction_NN_1_6::synapse0x2660470() {
   return (neuron0x2637a20()*0.0409964);
}

double NNfunction_NN_1_6::synapse0x26604b0() {
   return (neuron0x2637d60()*-0.0797671);
}

double NNfunction_NN_1_6::synapse0x26604f0() {
   return (neuron0x26380a0()*0.673397);
}

double NNfunction_NN_1_6::synapse0x2660530() {
   return (neuron0x26383e0()*-0.304669);
}

double NNfunction_NN_1_6::synapse0x2660570() {
   return (neuron0x2638720()*0.160862);
}

double NNfunction_NN_1_6::synapse0x26605b0() {
   return (neuron0x2638a60()*-0.0639532);
}

double NNfunction_NN_1_6::synapse0x26605f0() {
   return (neuron0x2638da0()*-0.0388939);
}

double NNfunction_NN_1_6::synapse0x2660630() {
   return (neuron0x26390e0()*0.026179);
}

double NNfunction_NN_1_6::synapse0x2660670() {
   return (neuron0x2639420()*0.035842);
}

double NNfunction_NN_1_6::synapse0x26606b0() {
   return (neuron0x2639760()*-0.0816232);
}

double NNfunction_NN_1_6::synapse0x26606f0() {
   return (neuron0x2639aa0()*-0.0358276);
}

double NNfunction_NN_1_6::synapse0x2660730() {
   return (neuron0x2639de0()*-0.558182);
}

double NNfunction_NN_1_6::synapse0x2660770() {
   return (neuron0x263a120()*0.233732);
}

double NNfunction_NN_1_6::synapse0x26607b0() {
   return (neuron0x263a460()*-0.110988);
}

double NNfunction_NN_1_6::synapse0x26607f0() {
   return (neuron0x263a7a0()*0.000950212);
}

double NNfunction_NN_1_6::synapse0x2660830() {
   return (neuron0x263aae0()*0.15914);
}

double NNfunction_NN_1_6::synapse0x26602c0() {
   return (neuron0x263ae20()*-0.0984034);
}

double NNfunction_NN_1_6::synapse0x2660300() {
   return (neuron0x263b380()*0.116516);
}

double NNfunction_NN_1_6::synapse0x2660980() {
   return (neuron0x263b5a0()*0.099699);
}

double NNfunction_NN_1_6::synapse0x26609c0() {
   return (neuron0x263b8e0()*0.0434567);
}

double NNfunction_NN_1_6::synapse0x2660a00() {
   return (neuron0x263bc20()*0.0879626);
}

double NNfunction_NN_1_6::synapse0x2660a40() {
   return (neuron0x263bf60()*0.104602);
}

double NNfunction_NN_1_6::synapse0x2660a80() {
   return (neuron0x263c2a0()*-0.0088393);
}

double NNfunction_NN_1_6::synapse0x2660ac0() {
   return (neuron0x263c5e0()*1.19549);
}

double NNfunction_NN_1_6::synapse0x2660e40() {
   return (neuron0x2637a20()*-1.20574);
}

double NNfunction_NN_1_6::synapse0x2660e80() {
   return (neuron0x2637d60()*0.0400367);
}

double NNfunction_NN_1_6::synapse0x2660ec0() {
   return (neuron0x26380a0()*-0.65882);
}

double NNfunction_NN_1_6::synapse0x2660f00() {
   return (neuron0x26383e0()*0.0514523);
}

double NNfunction_NN_1_6::synapse0x2660f40() {
   return (neuron0x2638720()*0.0634346);
}

double NNfunction_NN_1_6::synapse0x2660f80() {
   return (neuron0x2638a60()*-5.1511e-05);
}

double NNfunction_NN_1_6::synapse0x2660fc0() {
   return (neuron0x2638da0()*-0.0575233);
}

double NNfunction_NN_1_6::synapse0x2661000() {
   return (neuron0x26390e0()*-0.00650253);
}

double NNfunction_NN_1_6::synapse0x2661040() {
   return (neuron0x2639420()*0.0336463);
}

double NNfunction_NN_1_6::synapse0x2661080() {
   return (neuron0x2639760()*-0.0268158);
}

double NNfunction_NN_1_6::synapse0x26610c0() {
   return (neuron0x2639aa0()*0.0541685);
}

double NNfunction_NN_1_6::synapse0x2661100() {
   return (neuron0x2639de0()*-0.347057);
}

double NNfunction_NN_1_6::synapse0x2661140() {
   return (neuron0x263a120()*-0.195928);
}

double NNfunction_NN_1_6::synapse0x2661180() {
   return (neuron0x263a460()*0.0701354);
}

double NNfunction_NN_1_6::synapse0x26611c0() {
   return (neuron0x263a7a0()*-0.0751589);
}

double NNfunction_NN_1_6::synapse0x2661200() {
   return (neuron0x263aae0()*-0.0307883);
}

double NNfunction_NN_1_6::synapse0x2660c90() {
   return (neuron0x263ae20()*-0.0317502);
}

double NNfunction_NN_1_6::synapse0x2660cd0() {
   return (neuron0x263b380()*0.0130503);
}

double NNfunction_NN_1_6::synapse0x2661350() {
   return (neuron0x263b5a0()*-0.0708285);
}

double NNfunction_NN_1_6::synapse0x2661390() {
   return (neuron0x263b8e0()*-0.139128);
}

double NNfunction_NN_1_6::synapse0x26613d0() {
   return (neuron0x263bc20()*0.0144127);
}

double NNfunction_NN_1_6::synapse0x2661410() {
   return (neuron0x263bf60()*0.025438);
}

double NNfunction_NN_1_6::synapse0x2661450() {
   return (neuron0x263c2a0()*0.0253451);
}

double NNfunction_NN_1_6::synapse0x2661490() {
   return (neuron0x263c5e0()*1.28395);
}

double NNfunction_NN_1_6::synapse0x263da30() {
   return (neuron0x263ca80()*3.41171);
}

double NNfunction_NN_1_6::synapse0x263da70() {
   return (neuron0x263d390()*0.538184);
}

double NNfunction_NN_1_6::synapse0x263ef40() {
   return (neuron0x263de70()*0.227717);
}

double NNfunction_NN_1_6::synapse0x263ef80() {
   return (neuron0x23f7700()*0.661109);
}

double NNfunction_NN_1_6::synapse0x263f910() {
   return (neuron0x263ec90()*0.133418);
}

double NNfunction_NN_1_6::synapse0x263f950() {
   return (neuron0x263f660()*0.506959);
}

double NNfunction_NN_1_6::synapse0x26406e0() {
   return (neuron0x2640430()*-0.228684);
}

double NNfunction_NN_1_6::synapse0x2640720() {
   return (neuron0x2640e00()*0.522375);
}

double NNfunction_NN_1_6::synapse0x26410b0() {
   return (neuron0x26417d0()*0.64562);
}

double NNfunction_NN_1_6::synapse0x26410f0() {
   return (neuron0x26422b0()*-2.06083);
}

double NNfunction_NN_1_6::synapse0x2641a80() {
   return (neuron0x2642c80()*0.0123786);
}

double NNfunction_NN_1_6::synapse0x2641ac0() {
   return (neuron0x263fd60()*-0.1966);
}

double NNfunction_NN_1_6::synapse0x2642560() {
   return (neuron0x2644830()*1.91316);
}

double NNfunction_NN_1_6::synapse0x26425a0() {
   return (neuron0x2645200()*-1.18772);
}

double NNfunction_NN_1_6::synapse0x2642f30() {
   return (neuron0x2645bd0()*-0.631903);
}

double NNfunction_NN_1_6::synapse0x2642f70() {
   return (neuron0x26465a0()*0.0332149);
}

double NNfunction_NN_1_6::synapse0x2640010() {
   return (neuron0x26483b0()*-0.656514);
}

double NNfunction_NN_1_6::synapse0x2640050() {
   return (neuron0x2648690()*-3.44959);
}

double NNfunction_NN_1_6::synapse0x2644ae0() {
   return (neuron0x2649060()*-0.451225);
}

double NNfunction_NN_1_6::synapse0x2644b20() {
   return (neuron0x2649a30()*-0.13046);
}

double NNfunction_NN_1_6::synapse0x26454b0() {
   return (neuron0x264a400()*1.28459);
}

double NNfunction_NN_1_6::synapse0x26454f0() {
   return (neuron0x264add0()*-0.171122);
}

double NNfunction_NN_1_6::synapse0x2645e80() {
   return (neuron0x2643920()*1.60902);
}

double NNfunction_NN_1_6::synapse0x2645ec0() {
   return (neuron0x26442f0()*1.25286);
}

double NNfunction_NN_1_6::synapse0x2646850() {
   return (neuron0x264db60()*0.493255);
}

double NNfunction_NN_1_6::synapse0x2646890() {
   return (neuron0x264e530()*0.690648);
}

double NNfunction_NN_1_6::synapse0x263a9c0() {
   return (neuron0x264ef00()*-0.289985);
}

double NNfunction_NN_1_6::synapse0x263aa00() {
   return (neuron0x264f8d0()*-0.151615);
}

double NNfunction_NN_1_6::synapse0x2648940() {
   return (neuron0x26502a0()*-2.96539);
}

double NNfunction_NN_1_6::synapse0x2648980() {
   return (neuron0x2650c70()*0.952834);
}

double NNfunction_NN_1_6::synapse0x2649310() {
   return (neuron0x2651640()*1.6038);
}

double NNfunction_NN_1_6::synapse0x2649350() {
   return (neuron0x2652010()*0.140621);
}

double NNfunction_NN_1_6::synapse0x2649ce0() {
   return (neuron0x26480a0()*-2.34158);
}

double NNfunction_NN_1_6::synapse0x2649d20() {
   return (neuron0x2654bf0()*2.46731);
}

double NNfunction_NN_1_6::synapse0x264a6b0() {
   return (neuron0x26555c0()*0.0639944);
}

double NNfunction_NN_1_6::synapse0x264a6f0() {
   return (neuron0x2655f90()*0.464463);
}

double NNfunction_NN_1_6::synapse0x264b080() {
   return (neuron0x2656960()*0.448682);
}

double NNfunction_NN_1_6::synapse0x264b0c0() {
   return (neuron0x2657330()*1.75558);
}

double NNfunction_NN_1_6::synapse0x2643bd0() {
   return (neuron0x2657d00()*2.20366);
}

double NNfunction_NN_1_6::synapse0x2643c10() {
   return (neuron0x26586d0()*0.595232);
}

double NNfunction_NN_1_6::synapse0x264d480() {
   return (neuron0x26590a0()*-0.0314587);
}

double NNfunction_NN_1_6::synapse0x264d4c0() {
   return (neuron0x2659c80()*-0.130843);
}

double NNfunction_NN_1_6::synapse0x264de10() {
   return (neuron0x265a650()*0.117981);
}

double NNfunction_NN_1_6::synapse0x264de50() {
   return (neuron0x264b4d0()*0.0998073);
}

double NNfunction_NN_1_6::synapse0x264e7e0() {
   return (neuron0x264bea0()*-0.801207);
}

double NNfunction_NN_1_6::synapse0x264e820() {
   return (neuron0x264c870()*-0.907155);
}

double NNfunction_NN_1_6::synapse0x264f1b0() {
   return (neuron0x265eeb0()*-1.27468);
}

double NNfunction_NN_1_6::synapse0x264f1f0() {
   return (neuron0x265f760()*1.42235);
}

double NNfunction_NN_1_6::synapse0x264fb80() {
   return (neuron0x2660130()*0.521667);
}

double NNfunction_NN_1_6::synapse0x264fbc0() {
   return (neuron0x2660b00()*0.0605779);
}

double NNfunction_NN_1_6::synapse0x26522c0() {
   return (neuron0x263ca80()*0.73672);
}

double NNfunction_NN_1_6::synapse0x2652300() {
   return (neuron0x263d390()*-1.27367);
}

double NNfunction_NN_1_6::synapse0x2647880() {
   return (neuron0x263de70()*0.5612);
}

double NNfunction_NN_1_6::synapse0x26478c0() {
   return (neuron0x23f7700()*-0.833107);
}

double NNfunction_NN_1_6::synapse0x2654ea0() {
   return (neuron0x263ec90()*-1.64885);
}

double NNfunction_NN_1_6::synapse0x2654ee0() {
   return (neuron0x263f660()*0.145453);
}

double NNfunction_NN_1_6::synapse0x2655870() {
   return (neuron0x2640430()*-0.541154);
}

double NNfunction_NN_1_6::synapse0x26558b0() {
   return (neuron0x2640e00()*-1.69511);
}

double NNfunction_NN_1_6::synapse0x2656240() {
   return (neuron0x26417d0()*-0.723275);
}

double NNfunction_NN_1_6::synapse0x2656280() {
   return (neuron0x26422b0()*1.0565);
}

double NNfunction_NN_1_6::synapse0x2656c10() {
   return (neuron0x2642c80()*0.363166);
}

double NNfunction_NN_1_6::synapse0x2656c50() {
   return (neuron0x263fd60()*0.0144842);
}

double NNfunction_NN_1_6::synapse0x26575e0() {
   return (neuron0x2644830()*0.376952);
}

double NNfunction_NN_1_6::synapse0x2657620() {
   return (neuron0x2645200()*1.79635);
}

double NNfunction_NN_1_6::synapse0x2657fb0() {
   return (neuron0x2645bd0()*2.09658);
}

double NNfunction_NN_1_6::synapse0x2657ff0() {
   return (neuron0x26465a0()*0.14746);
}

double NNfunction_NN_1_6::synapse0x2658980() {
   return (neuron0x26483b0()*0.614818);
}

double NNfunction_NN_1_6::synapse0x26589c0() {
   return (neuron0x2648690()*-0.994822);
}

double NNfunction_NN_1_6::synapse0x2659350() {
   return (neuron0x2649060()*0.110769);
}

double NNfunction_NN_1_6::synapse0x2659390() {
   return (neuron0x2649a30()*-0.12871);
}

double NNfunction_NN_1_6::synapse0x2659f30() {
   return (neuron0x264a400()*1.5394);
}

double NNfunction_NN_1_6::synapse0x2659f70() {
   return (neuron0x264add0()*-0.0552606);
}

double NNfunction_NN_1_6::synapse0x265a900() {
   return (neuron0x2643920()*-1.8399);
}

double NNfunction_NN_1_6::synapse0x265a940() {
   return (neuron0x26442f0()*2.4754);
}

double NNfunction_NN_1_6::synapse0x264b780() {
   return (neuron0x264db60()*0.294706);
}

double NNfunction_NN_1_6::synapse0x264b7c0() {
   return (neuron0x264e530()*1.01691);
}

double NNfunction_NN_1_6::synapse0x264c150() {
   return (neuron0x264ef00()*-0.315113);
}

double NNfunction_NN_1_6::synapse0x264c190() {
   return (neuron0x264f8d0()*-0.138575);
}

double NNfunction_NN_1_6::synapse0x264cb20() {
   return (neuron0x26502a0()*-0.71824);
}

double NNfunction_NN_1_6::synapse0x264cb60() {
   return (neuron0x2650c70()*-0.19585);
}

double NNfunction_NN_1_6::synapse0x265f040() {
   return (neuron0x2651640()*-0.0632555);
}

double NNfunction_NN_1_6::synapse0x265f080() {
   return (neuron0x2652010()*0.102942);
}

double NNfunction_NN_1_6::synapse0x265fa10() {
   return (neuron0x26480a0()*-0.554836);
}

double NNfunction_NN_1_6::synapse0x265fa50() {
   return (neuron0x2654bf0()*0.715145);
}

double NNfunction_NN_1_6::synapse0x26603e0() {
   return (neuron0x26555c0()*-0.179598);
}

double NNfunction_NN_1_6::synapse0x2660420() {
   return (neuron0x2655f90()*-1.42493);
}

double NNfunction_NN_1_6::synapse0x2660db0() {
   return (neuron0x2656960()*3.85041);
}

double NNfunction_NN_1_6::synapse0x2660df0() {
   return (neuron0x2657330()*0.910558);
}

double NNfunction_NN_1_6::synapse0x263cca0() {
   return (neuron0x2657d00()*0.498784);
}

double NNfunction_NN_1_6::synapse0x263cce0() {
   return (neuron0x26586d0()*-2.11354);
}

double NNfunction_NN_1_6::synapse0x2650550() {
   return (neuron0x26590a0()*0.367423);
}

double NNfunction_NN_1_6::synapse0x2650590() {
   return (neuron0x2659c80()*-0.365777);
}

double NNfunction_NN_1_6::synapse0x26614d0() {
   return (neuron0x265a650()*0.0547369);
}

double NNfunction_NN_1_6::synapse0x2661510() {
   return (neuron0x264b4d0()*0.190969);
}

double NNfunction_NN_1_6::synapse0x2661550() {
   return (neuron0x264bea0()*-0.285128);
}

double NNfunction_NN_1_6::synapse0x2661590() {
   return (neuron0x264c870()*0.128486);
}

double NNfunction_NN_1_6::synapse0x2668440() {
   return (neuron0x265eeb0()*-0.0774422);
}

double NNfunction_NN_1_6::synapse0x2668480() {
   return (neuron0x265f760()*-1.40386);
}

double NNfunction_NN_1_6::synapse0x26684c0() {
   return (neuron0x2660130()*-0.574889);
}

double NNfunction_NN_1_6::synapse0x2668500() {
   return (neuron0x2660b00()*0.335464);
}

double NNfunction_NN_1_6::synapse0x2668880() {
   return (neuron0x263ca80()*-1.56725);
}

double NNfunction_NN_1_6::synapse0x26688c0() {
   return (neuron0x263d390()*-0.793068);
}

double NNfunction_NN_1_6::synapse0x2668900() {
   return (neuron0x263de70()*2.27197);
}

double NNfunction_NN_1_6::synapse0x2668940() {
   return (neuron0x23f7700()*-1.13234);
}

double NNfunction_NN_1_6::synapse0x2668980() {
   return (neuron0x263ec90()*0.397925);
}

double NNfunction_NN_1_6::synapse0x26689c0() {
   return (neuron0x263f660()*-0.210419);
}

double NNfunction_NN_1_6::synapse0x2668a00() {
   return (neuron0x2640430()*-0.202968);
}

double NNfunction_NN_1_6::synapse0x2668a40() {
   return (neuron0x2640e00()*2.44607);
}

double NNfunction_NN_1_6::synapse0x2668a80() {
   return (neuron0x26417d0()*0.552278);
}

double NNfunction_NN_1_6::synapse0x2668ac0() {
   return (neuron0x26422b0()*-2.32042);
}

double NNfunction_NN_1_6::synapse0x2668b00() {
   return (neuron0x2642c80()*-2.04708);
}

double NNfunction_NN_1_6::synapse0x2668b40() {
   return (neuron0x263fd60()*0.0455689);
}

double NNfunction_NN_1_6::synapse0x2668b80() {
   return (neuron0x2644830()*-0.906311);
}

double NNfunction_NN_1_6::synapse0x2668bc0() {
   return (neuron0x2645200()*1.69833);
}

double NNfunction_NN_1_6::synapse0x2668c00() {
   return (neuron0x2645bd0()*0.414749);
}

double NNfunction_NN_1_6::synapse0x2668c40() {
   return (neuron0x26465a0()*0.105466);
}

double NNfunction_NN_1_6::synapse0x26686d0() {
   return (neuron0x26483b0()*1.53269);
}

double NNfunction_NN_1_6::synapse0x2668710() {
   return (neuron0x2648690()*0.600933);
}

double NNfunction_NN_1_6::synapse0x2668d90() {
   return (neuron0x2649060()*1.51109);
}

double NNfunction_NN_1_6::synapse0x2668dd0() {
   return (neuron0x2649a30()*0.00931574);
}

double NNfunction_NN_1_6::synapse0x2668e10() {
   return (neuron0x264a400()*0.820598);
}

double NNfunction_NN_1_6::synapse0x2668e50() {
   return (neuron0x264add0()*-0.0169889);
}

double NNfunction_NN_1_6::synapse0x2668e90() {
   return (neuron0x2643920()*-2.08323);
}

double NNfunction_NN_1_6::synapse0x2668ed0() {
   return (neuron0x26442f0()*0.613644);
}

double NNfunction_NN_1_6::synapse0x2668f10() {
   return (neuron0x264db60()*0.0655973);
}

double NNfunction_NN_1_6::synapse0x2668f50() {
   return (neuron0x264e530()*0.152879);
}

double NNfunction_NN_1_6::synapse0x2668f90() {
   return (neuron0x264ef00()*-1.28928);
}

double NNfunction_NN_1_6::synapse0x2668fd0() {
   return (neuron0x264f8d0()*0.0472001);
}

double NNfunction_NN_1_6::synapse0x2669010() {
   return (neuron0x26502a0()*1.30759);
}

double NNfunction_NN_1_6::synapse0x2669050() {
   return (neuron0x2650c70()*-0.506535);
}

double NNfunction_NN_1_6::synapse0x2669090() {
   return (neuron0x2651640()*-0.393518);
}

double NNfunction_NN_1_6::synapse0x26690d0() {
   return (neuron0x2652010()*0.0900752);
}

double NNfunction_NN_1_6::synapse0x2668c80() {
   return (neuron0x26480a0()*1.13457);
}

double NNfunction_NN_1_6::synapse0x2668cc0() {
   return (neuron0x2654bf0()*-0.565594);
}

double NNfunction_NN_1_6::synapse0x2668d00() {
   return (neuron0x26555c0()*-0.00697299);
}

double NNfunction_NN_1_6::synapse0x2668d40() {
   return (neuron0x2655f90()*-0.960817);
}

double NNfunction_NN_1_6::synapse0x2669320() {
   return (neuron0x2656960()*1.58212);
}

double NNfunction_NN_1_6::synapse0x2669360() {
   return (neuron0x2657330()*-0.0507588);
}

double NNfunction_NN_1_6::synapse0x26693a0() {
   return (neuron0x2657d00()*-0.949422);
}

double NNfunction_NN_1_6::synapse0x26693e0() {
   return (neuron0x26586d0()*-0.765123);
}

double NNfunction_NN_1_6::synapse0x2669420() {
   return (neuron0x26590a0()*0.405878);
}

double NNfunction_NN_1_6::synapse0x2669460() {
   return (neuron0x2659c80()*-1.659);
}

double NNfunction_NN_1_6::synapse0x26694a0() {
   return (neuron0x265a650()*-0.0490385);
}

double NNfunction_NN_1_6::synapse0x26694e0() {
   return (neuron0x264b4d0()*0.0259447);
}

double NNfunction_NN_1_6::synapse0x2669520() {
   return (neuron0x264bea0()*0.557438);
}

double NNfunction_NN_1_6::synapse0x2669560() {
   return (neuron0x264c870()*2.40277);
}

double NNfunction_NN_1_6::synapse0x26695a0() {
   return (neuron0x265eeb0()*-0.0683416);
}

double NNfunction_NN_1_6::synapse0x26695e0() {
   return (neuron0x265f760()*-1.39446);
}

double NNfunction_NN_1_6::synapse0x2669620() {
   return (neuron0x2660130()*-0.609128);
}

double NNfunction_NN_1_6::synapse0x2669660() {
   return (neuron0x2660b00()*0.336849);
}

double NNfunction_NN_1_6::synapse0x26699e0() {
   return (neuron0x263ca80()*0.807539);
}

double NNfunction_NN_1_6::synapse0x2669a20() {
   return (neuron0x263d390()*4.16793);
}

double NNfunction_NN_1_6::synapse0x2669a60() {
   return (neuron0x263de70()*0.512356);
}

double NNfunction_NN_1_6::synapse0x2669aa0() {
   return (neuron0x23f7700()*-1.99872);
}

double NNfunction_NN_1_6::synapse0x2669ae0() {
   return (neuron0x263ec90()*-2.44176);
}

double NNfunction_NN_1_6::synapse0x2669b20() {
   return (neuron0x263f660()*0.215556);
}

double NNfunction_NN_1_6::synapse0x2669b60() {
   return (neuron0x2640430()*1.34102);
}

double NNfunction_NN_1_6::synapse0x2669ba0() {
   return (neuron0x2640e00()*-0.7701);
}

double NNfunction_NN_1_6::synapse0x2669be0() {
   return (neuron0x26417d0()*-1.90848);
}

double NNfunction_NN_1_6::synapse0x2669c20() {
   return (neuron0x26422b0()*-0.0540482);
}

double NNfunction_NN_1_6::synapse0x2669c60() {
   return (neuron0x2642c80()*-1.19888);
}

double NNfunction_NN_1_6::synapse0x2669ca0() {
   return (neuron0x263fd60()*-0.31951);
}

double NNfunction_NN_1_6::synapse0x2669ce0() {
   return (neuron0x2644830()*0.449877);
}

double NNfunction_NN_1_6::synapse0x2669d20() {
   return (neuron0x2645200()*-0.41223);
}

double NNfunction_NN_1_6::synapse0x2669d60() {
   return (neuron0x2645bd0()*-2.09304);
}

double NNfunction_NN_1_6::synapse0x2669da0() {
   return (neuron0x26465a0()*0.0685766);
}

double NNfunction_NN_1_6::synapse0x2669830() {
   return (neuron0x26483b0()*0.883543);
}

double NNfunction_NN_1_6::synapse0x2669870() {
   return (neuron0x2648690()*1.04894);
}

double NNfunction_NN_1_6::synapse0x2669ef0() {
   return (neuron0x2649060()*2.08295);
}

double NNfunction_NN_1_6::synapse0x2669f30() {
   return (neuron0x2649a30()*1.10917);
}

double NNfunction_NN_1_6::synapse0x2669f70() {
   return (neuron0x264a400()*-1.2031);
}

double NNfunction_NN_1_6::synapse0x2669fb0() {
   return (neuron0x264add0()*-0.203119);
}

double NNfunction_NN_1_6::synapse0x2669ff0() {
   return (neuron0x2643920()*-0.988016);
}

double NNfunction_NN_1_6::synapse0x266a030() {
   return (neuron0x26442f0()*-0.00277048);
}

double NNfunction_NN_1_6::synapse0x266a070() {
   return (neuron0x264db60()*0.733266);
}

double NNfunction_NN_1_6::synapse0x266a0b0() {
   return (neuron0x264e530()*1.28484);
}

double NNfunction_NN_1_6::synapse0x266a0f0() {
   return (neuron0x264ef00()*-0.685441);
}

double NNfunction_NN_1_6::synapse0x266a130() {
   return (neuron0x264f8d0()*-0.213436);
}

double NNfunction_NN_1_6::synapse0x266a170() {
   return (neuron0x26502a0()*-0.798444);
}

double NNfunction_NN_1_6::synapse0x266a1b0() {
   return (neuron0x2650c70()*1.28813);
}

double NNfunction_NN_1_6::synapse0x266a1f0() {
   return (neuron0x2651640()*0.0786442);
}

double NNfunction_NN_1_6::synapse0x266a230() {
   return (neuron0x2652010()*-0.355838);
}

double NNfunction_NN_1_6::synapse0x2669de0() {
   return (neuron0x26480a0()*-0.751603);
}

double NNfunction_NN_1_6::synapse0x2669e20() {
   return (neuron0x2654bf0()*0.353387);
}

double NNfunction_NN_1_6::synapse0x2669e60() {
   return (neuron0x26555c0()*0.496638);
}

double NNfunction_NN_1_6::synapse0x2669ea0() {
   return (neuron0x2655f90()*1.11551);
}

double NNfunction_NN_1_6::synapse0x266a480() {
   return (neuron0x2656960()*5.7784);
}

double NNfunction_NN_1_6::synapse0x266a4c0() {
   return (neuron0x2657330()*0.263405);
}

double NNfunction_NN_1_6::synapse0x266a500() {
   return (neuron0x2657d00()*0.616293);
}

double NNfunction_NN_1_6::synapse0x266a540() {
   return (neuron0x26586d0()*-0.496743);
}

double NNfunction_NN_1_6::synapse0x266a580() {
   return (neuron0x26590a0()*-0.488185);
}

double NNfunction_NN_1_6::synapse0x266a5c0() {
   return (neuron0x2659c80()*-0.544844);
}

double NNfunction_NN_1_6::synapse0x266a600() {
   return (neuron0x265a650()*0.915642);
}

double NNfunction_NN_1_6::synapse0x266a640() {
   return (neuron0x264b4d0()*0.570078);
}

double NNfunction_NN_1_6::synapse0x266a680() {
   return (neuron0x264bea0()*1.49989);
}

double NNfunction_NN_1_6::synapse0x266a6c0() {
   return (neuron0x264c870()*-5.29653);
}

double NNfunction_NN_1_6::synapse0x266a700() {
   return (neuron0x265eeb0()*0.500625);
}

double NNfunction_NN_1_6::synapse0x266a740() {
   return (neuron0x265f760()*-1.82193);
}

double NNfunction_NN_1_6::synapse0x266a780() {
   return (neuron0x2660130()*-0.79121);
}

double NNfunction_NN_1_6::synapse0x266a7c0() {
   return (neuron0x2660b00()*0.738206);
}

double NNfunction_NN_1_6::synapse0x266ab40() {
   return (neuron0x263ca80()*1.40324);
}

double NNfunction_NN_1_6::synapse0x266ab80() {
   return (neuron0x263d390()*-0.294488);
}

double NNfunction_NN_1_6::synapse0x266abc0() {
   return (neuron0x263de70()*0.787063);
}

double NNfunction_NN_1_6::synapse0x266ac00() {
   return (neuron0x23f7700()*0.149867);
}

double NNfunction_NN_1_6::synapse0x266ac40() {
   return (neuron0x263ec90()*0.169243);
}

double NNfunction_NN_1_6::synapse0x266ac80() {
   return (neuron0x263f660()*-0.119058);
}

double NNfunction_NN_1_6::synapse0x266acc0() {
   return (neuron0x2640430()*1.50274);
}

double NNfunction_NN_1_6::synapse0x266ad00() {
   return (neuron0x2640e00()*-0.764989);
}

double NNfunction_NN_1_6::synapse0x266ad40() {
   return (neuron0x26417d0()*-0.260984);
}

double NNfunction_NN_1_6::synapse0x266ad80() {
   return (neuron0x26422b0()*2.78825);
}

double NNfunction_NN_1_6::synapse0x266adc0() {
   return (neuron0x2642c80()*0.331246);
}

double NNfunction_NN_1_6::synapse0x266ae00() {
   return (neuron0x263fd60()*-0.299731);
}

double NNfunction_NN_1_6::synapse0x266ae40() {
   return (neuron0x2644830()*0.814733);
}

double NNfunction_NN_1_6::synapse0x266ae80() {
   return (neuron0x2645200()*0.871373);
}

double NNfunction_NN_1_6::synapse0x266aec0() {
   return (neuron0x2645bd0()*-1.97418);
}

double NNfunction_NN_1_6::synapse0x266af00() {
   return (neuron0x26465a0()*-0.419966);
}

double NNfunction_NN_1_6::synapse0x266a990() {
   return (neuron0x26483b0()*-0.22213);
}

double NNfunction_NN_1_6::synapse0x266a9d0() {
   return (neuron0x2648690()*3.05173);
}

double NNfunction_NN_1_6::synapse0x266b050() {
   return (neuron0x2649060()*0.659682);
}

double NNfunction_NN_1_6::synapse0x266b090() {
   return (neuron0x2649a30()*0.486606);
}

double NNfunction_NN_1_6::synapse0x266b0d0() {
   return (neuron0x264a400()*0.640796);
}

double NNfunction_NN_1_6::synapse0x266b110() {
   return (neuron0x264add0()*-0.123523);
}

double NNfunction_NN_1_6::synapse0x266b150() {
   return (neuron0x2643920()*-0.346027);
}

double NNfunction_NN_1_6::synapse0x266b190() {
   return (neuron0x26442f0()*-0.706635);
}

double NNfunction_NN_1_6::synapse0x266b1d0() {
   return (neuron0x264db60()*-0.291675);
}

double NNfunction_NN_1_6::synapse0x266b210() {
   return (neuron0x264e530()*0.312415);
}

double NNfunction_NN_1_6::synapse0x266b250() {
   return (neuron0x264ef00()*0.0266236);
}

double NNfunction_NN_1_6::synapse0x266b290() {
   return (neuron0x264f8d0()*-0.0206635);
}

double NNfunction_NN_1_6::synapse0x266b2d0() {
   return (neuron0x26502a0()*-1.12208);
}

double NNfunction_NN_1_6::synapse0x266b310() {
   return (neuron0x2650c70()*0.303775);
}

double NNfunction_NN_1_6::synapse0x266b350() {
   return (neuron0x2651640()*-0.942037);
}

double NNfunction_NN_1_6::synapse0x266b390() {
   return (neuron0x2652010()*-0.248502);
}

double NNfunction_NN_1_6::synapse0x266af40() {
   return (neuron0x26480a0()*-1.1164);
}

double NNfunction_NN_1_6::synapse0x266af80() {
   return (neuron0x2654bf0()*-1.07241);
}

double NNfunction_NN_1_6::synapse0x266afc0() {
   return (neuron0x26555c0()*0.803625);
}

double NNfunction_NN_1_6::synapse0x266b000() {
   return (neuron0x2655f90()*1.33743);
}

double NNfunction_NN_1_6::synapse0x266b5e0() {
   return (neuron0x2656960()*-1.01268);
}

double NNfunction_NN_1_6::synapse0x266b620() {
   return (neuron0x2657330()*-1.05948);
}

double NNfunction_NN_1_6::synapse0x266b660() {
   return (neuron0x2657d00()*0.55238);
}

double NNfunction_NN_1_6::synapse0x266b6a0() {
   return (neuron0x26586d0()*0.274931);
}

double NNfunction_NN_1_6::synapse0x266b6e0() {
   return (neuron0x26590a0()*-0.834334);
}

double NNfunction_NN_1_6::synapse0x266b720() {
   return (neuron0x2659c80()*0.0964713);
}

double NNfunction_NN_1_6::synapse0x266b760() {
   return (neuron0x265a650()*0.226223);
}

double NNfunction_NN_1_6::synapse0x266b7a0() {
   return (neuron0x264b4d0()*0.102801);
}

double NNfunction_NN_1_6::synapse0x266b7e0() {
   return (neuron0x264bea0()*-1.36306);
}

double NNfunction_NN_1_6::synapse0x266b820() {
   return (neuron0x264c870()*0.545901);
}

double NNfunction_NN_1_6::synapse0x266b860() {
   return (neuron0x265eeb0()*2.46693);
}

double NNfunction_NN_1_6::synapse0x266b8a0() {
   return (neuron0x265f760()*-0.0673938);
}

double NNfunction_NN_1_6::synapse0x266b8e0() {
   return (neuron0x2660130()*0.150029);
}

double NNfunction_NN_1_6::synapse0x266b920() {
   return (neuron0x2660b00()*0.286425);
}

double NNfunction_NN_1_6::synapse0x263ca40() {
   return (neuron0x2667d00()*-3.10157);
}

double NNfunction_NN_1_6::synapse0x266bb80() {
   return (neuron0x26680a0()*8.60158);
}

double NNfunction_NN_1_6::synapse0x266bbc0() {
   return (neuron0x2668540()*-6.5776);
}

double NNfunction_NN_1_6::synapse0x266bc00() {
   return (neuron0x26696a0()*-3.21919);
}

double NNfunction_NN_1_6::synapse0x266bc40() {
   return (neuron0x266a800()*-2.97164);
}

