#include "NNfunction_ss_cLsL.h"
#include <cmath>

double NNfunction_ss_cLsL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.693)/15.3911;
   input1 = (in1 - 1.27278)/1157.88;
   input2 = (in2 - 665.165)/622.728;
   input3 = (in3 - -56.2045)/825.582;
   input4 = (in4 - 1057.36)/950.553;
   input5 = (in5 - 893.144)/947.412;
   input6 = (in6 - 903.054)/947.051;
   input7 = (in7 - 925.343)/934.192;
   input8 = (in8 - 925.457)/974.371;
   input9 = (in9 - 897.745)/951.987;
   input10 = (in10 - 995.745)/960.616;
   input11 = (in11 - 729.04)/877.187;
   input12 = (in12 - 223.959)/178.1;
   input13 = (in13 - 500.581)/519.433;
   input14 = (in14 - 722.999)/820.029;
   input15 = (in15 - 714.011)/818.218;
   input16 = (in16 - 530.758)/557.825;
   input17 = (in17 - 763.005)/904.733;
   input18 = (in18 - 761.975)/912.732;
   input19 = (in19 - 801.74)/883.192;
   input20 = (in20 - -5.0068)/484.868;
   input21 = (in21 - 2.92366)/1146.33;
   input22 = (in22 - -3.714)/1199.76;
   input23 = (in23 - -199.978)/599.209;
   switch(index) {
     case 0:
         return neuron0x25794b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLsL::Value(int index, double* input) {
   input0 = (input[0] - 23.693)/15.3911;
   input1 = (input[1] - 1.27278)/1157.88;
   input2 = (input[2] - 665.165)/622.728;
   input3 = (input[3] - -56.2045)/825.582;
   input4 = (input[4] - 1057.36)/950.553;
   input5 = (input[5] - 893.144)/947.412;
   input6 = (input[6] - 903.054)/947.051;
   input7 = (input[7] - 925.343)/934.192;
   input8 = (input[8] - 925.457)/974.371;
   input9 = (input[9] - 897.745)/951.987;
   input10 = (input[10] - 995.745)/960.616;
   input11 = (input[11] - 729.04)/877.187;
   input12 = (input[12] - 223.959)/178.1;
   input13 = (input[13] - 500.581)/519.433;
   input14 = (input[14] - 722.999)/820.029;
   input15 = (input[15] - 714.011)/818.218;
   input16 = (input[16] - 530.758)/557.825;
   input17 = (input[17] - 763.005)/904.733;
   input18 = (input[18] - 761.975)/912.732;
   input19 = (input[19] - 801.74)/883.192;
   input20 = (input[20] - -5.0068)/484.868;
   input21 = (input[21] - 2.92366)/1146.33;
   input22 = (input[22] - -3.714)/1199.76;
   input23 = (input[23] - -199.978)/599.209;
   switch(index) {
     case 0:
         return neuron0x25794b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLsL::neuron0x2545570() {
   return input0;
}

double NNfunction_ss_cLsL::neuron0x25458b0() {
   return input1;
}

double NNfunction_ss_cLsL::neuron0x2545bf0() {
   return input2;
}

double NNfunction_ss_cLsL::neuron0x2545f30() {
   return input3;
}

double NNfunction_ss_cLsL::neuron0x2546270() {
   return input4;
}

double NNfunction_ss_cLsL::neuron0x25465b0() {
   return input5;
}

double NNfunction_ss_cLsL::neuron0x25468f0() {
   return input6;
}

double NNfunction_ss_cLsL::neuron0x2546c30() {
   return input7;
}

double NNfunction_ss_cLsL::neuron0x2546f70() {
   return input8;
}

double NNfunction_ss_cLsL::neuron0x25472b0() {
   return input9;
}

double NNfunction_ss_cLsL::neuron0x25475f0() {
   return input10;
}

double NNfunction_ss_cLsL::neuron0x2547930() {
   return input11;
}

double NNfunction_ss_cLsL::neuron0x2547c70() {
   return input12;
}

double NNfunction_ss_cLsL::neuron0x2547fb0() {
   return input13;
}

double NNfunction_ss_cLsL::neuron0x25482f0() {
   return input14;
}

double NNfunction_ss_cLsL::neuron0x2548630() {
   return input15;
}

double NNfunction_ss_cLsL::neuron0x2548970() {
   return input16;
}

double NNfunction_ss_cLsL::neuron0x2548ed0() {
   return input17;
}

double NNfunction_ss_cLsL::neuron0x25490f0() {
   return input18;
}

double NNfunction_ss_cLsL::neuron0x2549430() {
   return input19;
}

double NNfunction_ss_cLsL::neuron0x2549770() {
   return input20;
}

double NNfunction_ss_cLsL::neuron0x2549ab0() {
   return input21;
}

double NNfunction_ss_cLsL::neuron0x2549df0() {
   return input22;
}

double NNfunction_ss_cLsL::neuron0x254a130() {
   return input23;
}

double NNfunction_ss_cLsL::input0x254a5d0() {
   double input = 1.10039;
   input += synapse0x23053e0();
   input += synapse0x2545430();
   input += synapse0x2545470();
   input += synapse0x254a880();
   input += synapse0x254a8c0();
   input += synapse0x254a900();
   input += synapse0x254a940();
   input += synapse0x254a980();
   input += synapse0x254a9c0();
   input += synapse0x254aa00();
   input += synapse0x254aa40();
   input += synapse0x254aa80();
   input += synapse0x254aac0();
   input += synapse0x254ab00();
   input += synapse0x254ab40();
   input += synapse0x254ab80();
   input += synapse0x25453a0();
   input += synapse0x25453e0();
   input += synapse0x22f6c80();
   input += synapse0x22f6cc0();
   input += synapse0x254ade0();
   input += synapse0x254ae20();
   input += synapse0x254ae60();
   input += synapse0x254aea0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x254a5d0() {
   double input = input0x254a5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x254aee0() {
   double input = 1.16183;
   input += synapse0x254b220();
   input += synapse0x254b260();
   input += synapse0x254b2a0();
   input += synapse0x254b2e0();
   input += synapse0x254b320();
   input += synapse0x254b360();
   input += synapse0x254b3a0();
   input += synapse0x254b3e0();
   input += synapse0x254b420();
   input += synapse0x254acd0();
   input += synapse0x254ad10();
   input += synapse0x254ad50();
   input += synapse0x254ad90();
   input += synapse0x254b670();
   input += synapse0x254b6b0();
   input += synapse0x254b6f0();
   input += synapse0x254b070();
   input += synapse0x254b0b0();
   input += synapse0x254b840();
   input += synapse0x254b880();
   input += synapse0x254b8c0();
   input += synapse0x254b900();
   input += synapse0x254b940();
   input += synapse0x254b980();
   return input;
}

double NNfunction_ss_cLsL::neuron0x254aee0() {
   double input = input0x254aee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x254b9c0() {
   double input = -0.888495;
   input += synapse0x254bd00();
   input += synapse0x254bd40();
   input += synapse0x254bd80();
   input += synapse0x254bdc0();
   input += synapse0x254be00();
   input += synapse0x254be40();
   input += synapse0x254be80();
   input += synapse0x254bec0();
   input += synapse0x254bf00();
   input += synapse0x254bf40();
   input += synapse0x254bf80();
   input += synapse0x254bfc0();
   input += synapse0x254c000();
   input += synapse0x254c040();
   input += synapse0x254c080();
   input += synapse0x254c0c0();
   input += synapse0x254bb50();
   input += synapse0x254bb90();
   input += synapse0x2304ad0();
   input += synapse0x2304b10();
   input += synapse0x2534600();
   input += synapse0x2534640();
   input += synapse0x2534680();
   input += synapse0x25454b0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x254b9c0() {
   double input = input0x254b9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2305250() {
   double input = -0.696924;
   input += synapse0x254b610();
   input += synapse0x25454f0();
   input += synapse0x2545530();
   input += synapse0x254c210();
   input += synapse0x254c250();
   input += synapse0x254c290();
   input += synapse0x254c2d0();
   input += synapse0x254c310();
   input += synapse0x254c350();
   input += synapse0x254c390();
   input += synapse0x254c3d0();
   input += synapse0x254c410();
   input += synapse0x254c450();
   input += synapse0x254c490();
   input += synapse0x254c4d0();
   input += synapse0x254c510();
   input += synapse0x254b460();
   input += synapse0x254b4a0();
   input += synapse0x254c660();
   input += synapse0x254c6a0();
   input += synapse0x254c6e0();
   input += synapse0x254c720();
   input += synapse0x254c760();
   input += synapse0x254c7a0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2305250() {
   double input = input0x2305250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x254c7e0() {
   double input = -0.862169;
   input += synapse0x254cb20();
   input += synapse0x254cb60();
   input += synapse0x254cba0();
   input += synapse0x254cbe0();
   input += synapse0x254cc20();
   input += synapse0x254cc60();
   input += synapse0x254cca0();
   input += synapse0x254cce0();
   input += synapse0x254cd20();
   input += synapse0x254cd60();
   input += synapse0x254cda0();
   input += synapse0x254cde0();
   input += synapse0x254ce20();
   input += synapse0x254ce60();
   input += synapse0x254cea0();
   input += synapse0x254cee0();
   input += synapse0x254c970();
   input += synapse0x254c9b0();
   input += synapse0x254d030();
   input += synapse0x254d070();
   input += synapse0x254d0b0();
   input += synapse0x254d0f0();
   input += synapse0x254d130();
   input += synapse0x254d170();
   return input;
}

double NNfunction_ss_cLsL::neuron0x254c7e0() {
   double input = input0x254c7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x254d1b0() {
   double input = -3.42752;
   input += synapse0x254d4f0();
   input += synapse0x254d530();
   input += synapse0x254d570();
   input += synapse0x254d5b0();
   input += synapse0x254d5f0();
   input += synapse0x254d630();
   input += synapse0x254d670();
   input += synapse0x254d6b0();
   input += synapse0x254d6f0();
   input += synapse0x2304e40();
   input += synapse0x2304e80();
   input += synapse0x2304ec0();
   input += synapse0x2304f00();
   input += synapse0x2304f40();
   input += synapse0x2304f80();
   input += synapse0x2304fc0();
   input += synapse0x254d340();
   input += synapse0x254d380();
   input += synapse0x2305110();
   input += synapse0x2305150();
   input += synapse0x2305190();
   input += synapse0x23051d0();
   input += synapse0x2305210();
   input += synapse0x254df40();
   return input;
}

double NNfunction_ss_cLsL::neuron0x254d1b0() {
   double input = input0x254d1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x254df80() {
   double input = 2.2377;
   input += synapse0x254e2c0();
   input += synapse0x254e300();
   input += synapse0x254e340();
   input += synapse0x254e380();
   input += synapse0x254e3c0();
   input += synapse0x254e400();
   input += synapse0x254e440();
   input += synapse0x254e480();
   input += synapse0x254e4c0();
   input += synapse0x254e500();
   input += synapse0x254e540();
   input += synapse0x254e580();
   input += synapse0x254e5c0();
   input += synapse0x254e600();
   input += synapse0x254e640();
   input += synapse0x254e680();
   input += synapse0x254e110();
   input += synapse0x254e150();
   input += synapse0x254e7d0();
   input += synapse0x254e810();
   input += synapse0x254e850();
   input += synapse0x254e890();
   input += synapse0x254e8d0();
   input += synapse0x254e910();
   return input;
}

double NNfunction_ss_cLsL::neuron0x254df80() {
   double input = input0x254df80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x254e950() {
   double input = -0.962663;
   input += synapse0x254ec90();
   input += synapse0x254ecd0();
   input += synapse0x254ed10();
   input += synapse0x254ed50();
   input += synapse0x254ed90();
   input += synapse0x254edd0();
   input += synapse0x254ee10();
   input += synapse0x254ee50();
   input += synapse0x254ee90();
   input += synapse0x254eed0();
   input += synapse0x254ef10();
   input += synapse0x254ef50();
   input += synapse0x254ef90();
   input += synapse0x254efd0();
   input += synapse0x254f010();
   input += synapse0x254f050();
   input += synapse0x254eae0();
   input += synapse0x254eb20();
   input += synapse0x254f1a0();
   input += synapse0x254f1e0();
   input += synapse0x254f220();
   input += synapse0x254f260();
   input += synapse0x254f2a0();
   input += synapse0x254f2e0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x254e950() {
   double input = input0x254e950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x254f320() {
   double input = 0.276946;
   input += synapse0x2548dc0();
   input += synapse0x2548e00();
   input += synapse0x2548e40();
   input += synapse0x2548e80();
   input += synapse0x254f870();
   input += synapse0x254f8b0();
   input += synapse0x254f8f0();
   input += synapse0x254f930();
   input += synapse0x254f970();
   input += synapse0x254f9b0();
   input += synapse0x254f9f0();
   input += synapse0x254fa30();
   input += synapse0x254fa70();
   input += synapse0x254fab0();
   input += synapse0x254faf0();
   input += synapse0x254fb30();
   input += synapse0x254f4b0();
   input += synapse0x254f4f0();
   input += synapse0x254fc80();
   input += synapse0x254fcc0();
   input += synapse0x254fd00();
   input += synapse0x254fd40();
   input += synapse0x254fd80();
   input += synapse0x254fdc0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x254f320() {
   double input = input0x254f320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x254fe00() {
   double input = 0.2621;
   input += synapse0x2550140();
   input += synapse0x2550180();
   input += synapse0x25501c0();
   input += synapse0x2550200();
   input += synapse0x2550240();
   input += synapse0x2550280();
   input += synapse0x25502c0();
   input += synapse0x2550300();
   input += synapse0x2550340();
   input += synapse0x2550380();
   input += synapse0x25503c0();
   input += synapse0x2550400();
   input += synapse0x2550440();
   input += synapse0x2550480();
   input += synapse0x25504c0();
   input += synapse0x2550500();
   input += synapse0x254ff90();
   input += synapse0x254ffd0();
   input += synapse0x2550650();
   input += synapse0x2550690();
   input += synapse0x25506d0();
   input += synapse0x2550710();
   input += synapse0x2550750();
   input += synapse0x2550790();
   return input;
}

double NNfunction_ss_cLsL::neuron0x254fe00() {
   double input = input0x254fe00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x25507d0() {
   double input = -2.58777;
   input += synapse0x2550b10();
   input += synapse0x2550b50();
   input += synapse0x2550b90();
   input += synapse0x2550bd0();
   input += synapse0x2550c10();
   input += synapse0x2550c50();
   input += synapse0x2550c90();
   input += synapse0x2550cd0();
   input += synapse0x2550d10();
   input += synapse0x2550d50();
   input += synapse0x2550d90();
   input += synapse0x2550dd0();
   input += synapse0x2550e10();
   input += synapse0x2550e50();
   input += synapse0x2550e90();
   input += synapse0x2550ed0();
   input += synapse0x2550960();
   input += synapse0x25509a0();
   input += synapse0x254d730();
   input += synapse0x254d770();
   input += synapse0x254d7b0();
   input += synapse0x254d7f0();
   input += synapse0x254d830();
   input += synapse0x254d870();
   return input;
}

double NNfunction_ss_cLsL::neuron0x25507d0() {
   double input = input0x25507d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x254d8b0() {
   double input = -1.41433;
   input += synapse0x254dbf0();
   input += synapse0x254dc30();
   input += synapse0x254dc70();
   input += synapse0x254dcb0();
   input += synapse0x254dcf0();
   input += synapse0x254dd30();
   input += synapse0x254dd70();
   input += synapse0x254ddb0();
   input += synapse0x254ddf0();
   input += synapse0x254de30();
   input += synapse0x254de70();
   input += synapse0x254deb0();
   input += synapse0x254def0();
   input += synapse0x2552030();
   input += synapse0x2552070();
   input += synapse0x25520b0();
   input += synapse0x254da40();
   input += synapse0x254da80();
   input += synapse0x2552200();
   input += synapse0x2552240();
   input += synapse0x2552280();
   input += synapse0x25522c0();
   input += synapse0x2552300();
   input += synapse0x2552340();
   return input;
}

double NNfunction_ss_cLsL::neuron0x254d8b0() {
   double input = input0x254d8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2552380() {
   double input = -0.109702;
   input += synapse0x25526c0();
   input += synapse0x2552700();
   input += synapse0x2552740();
   input += synapse0x2552780();
   input += synapse0x25527c0();
   input += synapse0x2552800();
   input += synapse0x2552840();
   input += synapse0x2552880();
   input += synapse0x25528c0();
   input += synapse0x2552900();
   input += synapse0x2552940();
   input += synapse0x2552980();
   input += synapse0x25529c0();
   input += synapse0x2552a00();
   input += synapse0x2552a40();
   input += synapse0x2552a80();
   input += synapse0x2552510();
   input += synapse0x2552550();
   input += synapse0x2552bd0();
   input += synapse0x2552c10();
   input += synapse0x2552c50();
   input += synapse0x2552c90();
   input += synapse0x2552cd0();
   input += synapse0x2552d10();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2552380() {
   double input = input0x2552380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2552d50() {
   double input = -0.780765;
   input += synapse0x2553090();
   input += synapse0x25530d0();
   input += synapse0x2553110();
   input += synapse0x2553150();
   input += synapse0x2553190();
   input += synapse0x25531d0();
   input += synapse0x2553210();
   input += synapse0x2553250();
   input += synapse0x2553290();
   input += synapse0x25532d0();
   input += synapse0x2553310();
   input += synapse0x2553350();
   input += synapse0x2553390();
   input += synapse0x25533d0();
   input += synapse0x2553410();
   input += synapse0x2553450();
   input += synapse0x2552ee0();
   input += synapse0x2552f20();
   input += synapse0x25535a0();
   input += synapse0x25535e0();
   input += synapse0x2553620();
   input += synapse0x2553660();
   input += synapse0x25536a0();
   input += synapse0x25536e0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2552d50() {
   double input = input0x2552d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2553720() {
   double input = 2.13552;
   input += synapse0x2553a60();
   input += synapse0x2553aa0();
   input += synapse0x2553ae0();
   input += synapse0x2553b20();
   input += synapse0x2553b60();
   input += synapse0x2553ba0();
   input += synapse0x2553be0();
   input += synapse0x2553c20();
   input += synapse0x2553c60();
   input += synapse0x2553ca0();
   input += synapse0x2553ce0();
   input += synapse0x2553d20();
   input += synapse0x2553d60();
   input += synapse0x2553da0();
   input += synapse0x2553de0();
   input += synapse0x2553e20();
   input += synapse0x25538b0();
   input += synapse0x25538f0();
   input += synapse0x2553f70();
   input += synapse0x2553fb0();
   input += synapse0x2553ff0();
   input += synapse0x2554030();
   input += synapse0x2554070();
   input += synapse0x25540b0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2553720() {
   double input = input0x2553720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x25540f0() {
   double input = -0.11603;
   input += synapse0x2554430();
   input += synapse0x2545790();
   input += synapse0x25457d0();
   input += synapse0x2545ad0();
   input += synapse0x2545b10();
   input += synapse0x2545e10();
   input += synapse0x2545e50();
   input += synapse0x2546150();
   input += synapse0x2546190();
   input += synapse0x2546490();
   input += synapse0x25464d0();
   input += synapse0x25467d0();
   input += synapse0x2546810();
   input += synapse0x2546b10();
   input += synapse0x2546b50();
   input += synapse0x2546e50();
   input += synapse0x2546e90();
   input += synapse0x2547190();
   input += synapse0x25471d0();
   input += synapse0x25474d0();
   input += synapse0x2547510();
   input += synapse0x2547810();
   input += synapse0x2547850();
   input += synapse0x2547b50();
   return input;
}

double NNfunction_ss_cLsL::neuron0x25540f0() {
   double input = input0x25540f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2555f00() {
   double input = 1.32612;
   input += synapse0x2547b90();
   input += synapse0x2548850();
   input += synapse0x2548890();
   input += synapse0x2554280();
   input += synapse0x25542c0();
   input += synapse0x2548b90();
   input += synapse0x2548bd0();
   input += synapse0x22f6b60();
   input += synapse0x22f6ba0();
   input += synapse0x2549310();
   input += synapse0x2549350();
   input += synapse0x2549650();
   input += synapse0x2549690();
   input += synapse0x2549990();
   input += synapse0x25499d0();
   input += synapse0x2549cd0();
   input += synapse0x2549d10();
   input += synapse0x254a010();
   input += synapse0x254a050();
   input += synapse0x254a350();
   input += synapse0x254a390();
   input += synapse0x2547e90();
   input += synapse0x2547ed0();
   input += synapse0x25561a0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2555f00() {
   double input = input0x2555f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x25561e0() {
   double input = 1.55989;
   input += synapse0x2556520();
   input += synapse0x2556560();
   input += synapse0x25565a0();
   input += synapse0x25565e0();
   input += synapse0x2556620();
   input += synapse0x2556660();
   input += synapse0x25566a0();
   input += synapse0x25566e0();
   input += synapse0x2556720();
   input += synapse0x2556760();
   input += synapse0x25567a0();
   input += synapse0x25567e0();
   input += synapse0x2556820();
   input += synapse0x2556860();
   input += synapse0x25568a0();
   input += synapse0x25568e0();
   input += synapse0x2556370();
   input += synapse0x25563b0();
   input += synapse0x2556a30();
   input += synapse0x2556a70();
   input += synapse0x2556ab0();
   input += synapse0x2556af0();
   input += synapse0x2556b30();
   input += synapse0x2556b70();
   return input;
}

double NNfunction_ss_cLsL::neuron0x25561e0() {
   double input = input0x25561e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2556bb0() {
   double input = 2.7386;
   input += synapse0x2556ef0();
   input += synapse0x2556f30();
   input += synapse0x2556f70();
   input += synapse0x2556fb0();
   input += synapse0x2556ff0();
   input += synapse0x2557030();
   input += synapse0x2557070();
   input += synapse0x25570b0();
   input += synapse0x25570f0();
   input += synapse0x2557130();
   input += synapse0x2557170();
   input += synapse0x25571b0();
   input += synapse0x25571f0();
   input += synapse0x2557230();
   input += synapse0x2557270();
   input += synapse0x25572b0();
   input += synapse0x2556d40();
   input += synapse0x2556d80();
   input += synapse0x2557400();
   input += synapse0x2557440();
   input += synapse0x2557480();
   input += synapse0x25574c0();
   input += synapse0x2557500();
   input += synapse0x2557540();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2556bb0() {
   double input = input0x2556bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2557580() {
   double input = 0.279688;
   input += synapse0x25578c0();
   input += synapse0x2557900();
   input += synapse0x2557940();
   input += synapse0x2557980();
   input += synapse0x25579c0();
   input += synapse0x2557a00();
   input += synapse0x2557a40();
   input += synapse0x2557a80();
   input += synapse0x2557ac0();
   input += synapse0x2557b00();
   input += synapse0x2557b40();
   input += synapse0x2557b80();
   input += synapse0x2557bc0();
   input += synapse0x2557c00();
   input += synapse0x2557c40();
   input += synapse0x2557c80();
   input += synapse0x2557710();
   input += synapse0x2557750();
   input += synapse0x2557dd0();
   input += synapse0x2557e10();
   input += synapse0x2557e50();
   input += synapse0x2557e90();
   input += synapse0x2557ed0();
   input += synapse0x2557f10();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2557580() {
   double input = input0x2557580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2557f50() {
   double input = -0.226229;
   input += synapse0x2558290();
   input += synapse0x25582d0();
   input += synapse0x2558310();
   input += synapse0x2558350();
   input += synapse0x2558390();
   input += synapse0x25583d0();
   input += synapse0x2558410();
   input += synapse0x2558450();
   input += synapse0x2558490();
   input += synapse0x25584d0();
   input += synapse0x2558510();
   input += synapse0x2558550();
   input += synapse0x2558590();
   input += synapse0x25585d0();
   input += synapse0x2558610();
   input += synapse0x2558650();
   input += synapse0x25580e0();
   input += synapse0x2558120();
   input += synapse0x25587a0();
   input += synapse0x25587e0();
   input += synapse0x2558820();
   input += synapse0x2558860();
   input += synapse0x25588a0();
   input += synapse0x25588e0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2557f50() {
   double input = input0x2557f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2558920() {
   double input = -0.228869;
   input += synapse0x2558c60();
   input += synapse0x2558ca0();
   input += synapse0x2558ce0();
   input += synapse0x2558d20();
   input += synapse0x2558d60();
   input += synapse0x2558da0();
   input += synapse0x2558de0();
   input += synapse0x2558e20();
   input += synapse0x2558e60();
   input += synapse0x2551020();
   input += synapse0x2551060();
   input += synapse0x25510a0();
   input += synapse0x25510e0();
   input += synapse0x2551120();
   input += synapse0x2551160();
   input += synapse0x25511a0();
   input += synapse0x2558ab0();
   input += synapse0x2558af0();
   input += synapse0x25512f0();
   input += synapse0x2551330();
   input += synapse0x2551370();
   input += synapse0x25513b0();
   input += synapse0x25513f0();
   input += synapse0x2551430();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2558920() {
   double input = input0x2558920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2551470() {
   double input = -1.26386;
   input += synapse0x25517b0();
   input += synapse0x25517f0();
   input += synapse0x2551830();
   input += synapse0x2551870();
   input += synapse0x25518b0();
   input += synapse0x25518f0();
   input += synapse0x2551930();
   input += synapse0x2551970();
   input += synapse0x25519b0();
   input += synapse0x25519f0();
   input += synapse0x2551a30();
   input += synapse0x2551a70();
   input += synapse0x2551ab0();
   input += synapse0x2551af0();
   input += synapse0x2551b30();
   input += synapse0x2551b70();
   input += synapse0x2551600();
   input += synapse0x2551640();
   input += synapse0x2551cc0();
   input += synapse0x2551d00();
   input += synapse0x2551d40();
   input += synapse0x2551d80();
   input += synapse0x2551dc0();
   input += synapse0x2551e00();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2551470() {
   double input = input0x2551470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2551e40() {
   double input = -0.352533;
   input += synapse0x2551fd0();
   input += synapse0x255b060();
   input += synapse0x255b0a0();
   input += synapse0x255b0e0();
   input += synapse0x255b120();
   input += synapse0x255b160();
   input += synapse0x255b1a0();
   input += synapse0x255b1e0();
   input += synapse0x255b220();
   input += synapse0x255b260();
   input += synapse0x255b2a0();
   input += synapse0x255b2e0();
   input += synapse0x255b320();
   input += synapse0x255b360();
   input += synapse0x255b3a0();
   input += synapse0x255b3e0();
   input += synapse0x255aeb0();
   input += synapse0x255aef0();
   input += synapse0x255b530();
   input += synapse0x255b570();
   input += synapse0x255b5b0();
   input += synapse0x255b5f0();
   input += synapse0x255b630();
   input += synapse0x255b670();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2551e40() {
   double input = input0x2551e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x255b6b0() {
   double input = 1.52776;
   input += synapse0x255b9f0();
   input += synapse0x255ba30();
   input += synapse0x255ba70();
   input += synapse0x255bab0();
   input += synapse0x255baf0();
   input += synapse0x255bb30();
   input += synapse0x255bb70();
   input += synapse0x255bbb0();
   input += synapse0x255bbf0();
   input += synapse0x255bc30();
   input += synapse0x255bc70();
   input += synapse0x255bcb0();
   input += synapse0x255bcf0();
   input += synapse0x255bd30();
   input += synapse0x255bd70();
   input += synapse0x255bdb0();
   input += synapse0x255b840();
   input += synapse0x255b880();
   input += synapse0x255bf00();
   input += synapse0x255bf40();
   input += synapse0x255bf80();
   input += synapse0x255bfc0();
   input += synapse0x255c000();
   input += synapse0x255c040();
   return input;
}

double NNfunction_ss_cLsL::neuron0x255b6b0() {
   double input = input0x255b6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x255c080() {
   double input = 1.2239;
   input += synapse0x255c3c0();
   input += synapse0x255c400();
   input += synapse0x255c440();
   input += synapse0x255c480();
   input += synapse0x255c4c0();
   input += synapse0x255c500();
   input += synapse0x255c540();
   input += synapse0x255c580();
   input += synapse0x255c5c0();
   input += synapse0x255c600();
   input += synapse0x255c640();
   input += synapse0x255c680();
   input += synapse0x255c6c0();
   input += synapse0x255c700();
   input += synapse0x255c740();
   input += synapse0x255c780();
   input += synapse0x255c210();
   input += synapse0x255c250();
   input += synapse0x255c8d0();
   input += synapse0x255c910();
   input += synapse0x255c950();
   input += synapse0x255c990();
   input += synapse0x255c9d0();
   input += synapse0x255ca10();
   return input;
}

double NNfunction_ss_cLsL::neuron0x255c080() {
   double input = input0x255c080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x255ca50() {
   double input = 2.84397;
   input += synapse0x255cd90();
   input += synapse0x255cdd0();
   input += synapse0x255ce10();
   input += synapse0x255ce50();
   input += synapse0x255ce90();
   input += synapse0x255ced0();
   input += synapse0x255cf10();
   input += synapse0x255cf50();
   input += synapse0x255cf90();
   input += synapse0x255cfd0();
   input += synapse0x255d010();
   input += synapse0x255d050();
   input += synapse0x255d090();
   input += synapse0x255d0d0();
   input += synapse0x255d110();
   input += synapse0x255d150();
   input += synapse0x255cbe0();
   input += synapse0x255cc20();
   input += synapse0x255d2a0();
   input += synapse0x255d2e0();
   input += synapse0x255d320();
   input += synapse0x255d360();
   input += synapse0x255d3a0();
   input += synapse0x255d3e0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x255ca50() {
   double input = input0x255ca50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x255d420() {
   double input = -1.40856;
   input += synapse0x255d760();
   input += synapse0x255d7a0();
   input += synapse0x255d7e0();
   input += synapse0x255d820();
   input += synapse0x255d860();
   input += synapse0x255d8a0();
   input += synapse0x255d8e0();
   input += synapse0x255d920();
   input += synapse0x255d960();
   input += synapse0x255d9a0();
   input += synapse0x255d9e0();
   input += synapse0x255da20();
   input += synapse0x255da60();
   input += synapse0x255daa0();
   input += synapse0x255dae0();
   input += synapse0x255db20();
   input += synapse0x255d5b0();
   input += synapse0x255d5f0();
   input += synapse0x255dc70();
   input += synapse0x255dcb0();
   input += synapse0x255dcf0();
   input += synapse0x255dd30();
   input += synapse0x255dd70();
   input += synapse0x255ddb0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x255d420() {
   double input = input0x255d420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x255ddf0() {
   double input = 0.237604;
   input += synapse0x255e130();
   input += synapse0x255e170();
   input += synapse0x255e1b0();
   input += synapse0x255e1f0();
   input += synapse0x255e230();
   input += synapse0x255e270();
   input += synapse0x255e2b0();
   input += synapse0x255e2f0();
   input += synapse0x255e330();
   input += synapse0x255e370();
   input += synapse0x255e3b0();
   input += synapse0x255e3f0();
   input += synapse0x255e430();
   input += synapse0x255e470();
   input += synapse0x255e4b0();
   input += synapse0x255e4f0();
   input += synapse0x255df80();
   input += synapse0x255dfc0();
   input += synapse0x255e640();
   input += synapse0x255e680();
   input += synapse0x255e6c0();
   input += synapse0x255e700();
   input += synapse0x255e740();
   input += synapse0x255e780();
   return input;
}

double NNfunction_ss_cLsL::neuron0x255ddf0() {
   double input = input0x255ddf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x255e7c0() {
   double input = 2.58598;
   input += synapse0x255eb00();
   input += synapse0x255eb40();
   input += synapse0x255eb80();
   input += synapse0x255ebc0();
   input += synapse0x255ec00();
   input += synapse0x255ec40();
   input += synapse0x255ec80();
   input += synapse0x255ecc0();
   input += synapse0x255ed00();
   input += synapse0x255ed40();
   input += synapse0x255ed80();
   input += synapse0x255edc0();
   input += synapse0x255ee00();
   input += synapse0x255ee40();
   input += synapse0x255ee80();
   input += synapse0x255eec0();
   input += synapse0x255e950();
   input += synapse0x255e990();
   input += synapse0x255f010();
   input += synapse0x255f050();
   input += synapse0x255f090();
   input += synapse0x255f0d0();
   input += synapse0x255f110();
   input += synapse0x255f150();
   return input;
}

double NNfunction_ss_cLsL::neuron0x255e7c0() {
   double input = input0x255e7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x255f190() {
   double input = -0.0826078;
   input += synapse0x255f4d0();
   input += synapse0x255f510();
   input += synapse0x255f550();
   input += synapse0x255f590();
   input += synapse0x255f5d0();
   input += synapse0x255f610();
   input += synapse0x255f650();
   input += synapse0x255f690();
   input += synapse0x255f6d0();
   input += synapse0x255f710();
   input += synapse0x255f750();
   input += synapse0x255f790();
   input += synapse0x255f7d0();
   input += synapse0x255f810();
   input += synapse0x255f850();
   input += synapse0x255f890();
   input += synapse0x255f320();
   input += synapse0x255f360();
   input += synapse0x255f9e0();
   input += synapse0x255fa20();
   input += synapse0x255fa60();
   input += synapse0x255faa0();
   input += synapse0x255fae0();
   input += synapse0x255fb20();
   return input;
}

double NNfunction_ss_cLsL::neuron0x255f190() {
   double input = input0x255f190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x255fb60() {
   double input = 2.80204;
   input += synapse0x255fea0();
   input += synapse0x2554470();
   input += synapse0x25544b0();
   input += synapse0x25544f0();
   input += synapse0x2554740();
   input += synapse0x2554780();
   input += synapse0x25547c0();
   input += synapse0x2554a10();
   input += synapse0x2554a50();
   input += synapse0x2554ca0();
   input += synapse0x2554ce0();
   input += synapse0x2554d20();
   input += synapse0x2554f70();
   input += synapse0x2554fb0();
   input += synapse0x2555200();
   input += synapse0x2555240();
   input += synapse0x255fcf0();
   input += synapse0x255fd30();
   input += synapse0x2555390();
   input += synapse0x25558a0();
   input += synapse0x25558e0();
   input += synapse0x2555920();
   input += synapse0x2555b70();
   input += synapse0x2555bb0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x255fb60() {
   double input = input0x255fb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2555bf0() {
   double input = -0.580078;
   input += synapse0x2555460();
   input += synapse0x25554a0();
   input += synapse0x25554e0();
   input += synapse0x2555520();
   input += synapse0x2555ea0();
   input += synapse0x25621f0();
   input += synapse0x2562230();
   input += synapse0x2562270();
   input += synapse0x25622b0();
   input += synapse0x25622f0();
   input += synapse0x2562330();
   input += synapse0x2562370();
   input += synapse0x25623b0();
   input += synapse0x25623f0();
   input += synapse0x2562430();
   input += synapse0x2562470();
   input += synapse0x2555d80();
   input += synapse0x2555dc0();
   input += synapse0x25625c0();
   input += synapse0x2562600();
   input += synapse0x2562640();
   input += synapse0x2562680();
   input += synapse0x25626c0();
   input += synapse0x2562700();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2555bf0() {
   double input = input0x2555bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2562740() {
   double input = 1.06342;
   input += synapse0x2562a80();
   input += synapse0x2562ac0();
   input += synapse0x2562b00();
   input += synapse0x2562b40();
   input += synapse0x2562b80();
   input += synapse0x2562bc0();
   input += synapse0x2562c00();
   input += synapse0x2562c40();
   input += synapse0x2562c80();
   input += synapse0x2562cc0();
   input += synapse0x2562d00();
   input += synapse0x2562d40();
   input += synapse0x2562d80();
   input += synapse0x2562dc0();
   input += synapse0x2562e00();
   input += synapse0x2562e40();
   input += synapse0x25628d0();
   input += synapse0x2562910();
   input += synapse0x2562f90();
   input += synapse0x2562fd0();
   input += synapse0x2563010();
   input += synapse0x2563050();
   input += synapse0x2563090();
   input += synapse0x25630d0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2562740() {
   double input = input0x2562740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2563110() {
   double input = -0.286086;
   input += synapse0x2563450();
   input += synapse0x2563490();
   input += synapse0x25634d0();
   input += synapse0x2563510();
   input += synapse0x2563550();
   input += synapse0x2563590();
   input += synapse0x25635d0();
   input += synapse0x2563610();
   input += synapse0x2563650();
   input += synapse0x2563690();
   input += synapse0x25636d0();
   input += synapse0x2563710();
   input += synapse0x2563750();
   input += synapse0x2563790();
   input += synapse0x25637d0();
   input += synapse0x2563810();
   input += synapse0x25632a0();
   input += synapse0x25632e0();
   input += synapse0x2563960();
   input += synapse0x25639a0();
   input += synapse0x25639e0();
   input += synapse0x2563a20();
   input += synapse0x2563a60();
   input += synapse0x2563aa0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2563110() {
   double input = input0x2563110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2563ae0() {
   double input = 0.10192;
   input += synapse0x2563e20();
   input += synapse0x2563e60();
   input += synapse0x2563ea0();
   input += synapse0x2563ee0();
   input += synapse0x2563f20();
   input += synapse0x2563f60();
   input += synapse0x2563fa0();
   input += synapse0x2563fe0();
   input += synapse0x2564020();
   input += synapse0x2564060();
   input += synapse0x25640a0();
   input += synapse0x25640e0();
   input += synapse0x2564120();
   input += synapse0x2564160();
   input += synapse0x25641a0();
   input += synapse0x25641e0();
   input += synapse0x2563c70();
   input += synapse0x2563cb0();
   input += synapse0x2564330();
   input += synapse0x2564370();
   input += synapse0x25643b0();
   input += synapse0x25643f0();
   input += synapse0x2564430();
   input += synapse0x2564470();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2563ae0() {
   double input = input0x2563ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x25644b0() {
   double input = -2.20792;
   input += synapse0x25647f0();
   input += synapse0x2564830();
   input += synapse0x2564870();
   input += synapse0x25648b0();
   input += synapse0x25648f0();
   input += synapse0x2564930();
   input += synapse0x2564970();
   input += synapse0x25649b0();
   input += synapse0x25649f0();
   input += synapse0x2564a30();
   input += synapse0x2564a70();
   input += synapse0x2564ab0();
   input += synapse0x2564af0();
   input += synapse0x2564b30();
   input += synapse0x2564b70();
   input += synapse0x2564bb0();
   input += synapse0x2564640();
   input += synapse0x2564680();
   input += synapse0x2564d00();
   input += synapse0x2564d40();
   input += synapse0x2564d80();
   input += synapse0x2564dc0();
   input += synapse0x2564e00();
   input += synapse0x2564e40();
   return input;
}

double NNfunction_ss_cLsL::neuron0x25644b0() {
   double input = input0x25644b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2564e80() {
   double input = 3.01891;
   input += synapse0x25651c0();
   input += synapse0x2565200();
   input += synapse0x2565240();
   input += synapse0x2565280();
   input += synapse0x25652c0();
   input += synapse0x2565300();
   input += synapse0x2565340();
   input += synapse0x2565380();
   input += synapse0x25653c0();
   input += synapse0x2565400();
   input += synapse0x2565440();
   input += synapse0x2565480();
   input += synapse0x25654c0();
   input += synapse0x2565500();
   input += synapse0x2565540();
   input += synapse0x2565580();
   input += synapse0x2565010();
   input += synapse0x2565050();
   input += synapse0x25656d0();
   input += synapse0x2565710();
   input += synapse0x2565750();
   input += synapse0x2565790();
   input += synapse0x25657d0();
   input += synapse0x2565810();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2564e80() {
   double input = input0x2564e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2565850() {
   double input = 2.72815;
   input += synapse0x2565b90();
   input += synapse0x2565bd0();
   input += synapse0x2565c10();
   input += synapse0x2565c50();
   input += synapse0x2565c90();
   input += synapse0x2565cd0();
   input += synapse0x2565d10();
   input += synapse0x2565d50();
   input += synapse0x2565d90();
   input += synapse0x2565dd0();
   input += synapse0x2565e10();
   input += synapse0x2565e50();
   input += synapse0x2565e90();
   input += synapse0x2565ed0();
   input += synapse0x2565f10();
   input += synapse0x2565f50();
   input += synapse0x25659e0();
   input += synapse0x2565a20();
   input += synapse0x25660a0();
   input += synapse0x25660e0();
   input += synapse0x2566120();
   input += synapse0x2566160();
   input += synapse0x25661a0();
   input += synapse0x25661e0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2565850() {
   double input = input0x2565850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2566220() {
   double input = 1.57059;
   input += synapse0x2566560();
   input += synapse0x25665a0();
   input += synapse0x25665e0();
   input += synapse0x2566620();
   input += synapse0x2566660();
   input += synapse0x25666a0();
   input += synapse0x25666e0();
   input += synapse0x2566720();
   input += synapse0x2566760();
   input += synapse0x25667a0();
   input += synapse0x25667e0();
   input += synapse0x2566820();
   input += synapse0x2566860();
   input += synapse0x25668a0();
   input += synapse0x25668e0();
   input += synapse0x2566920();
   input += synapse0x25663b0();
   input += synapse0x25663f0();
   input += synapse0x2566a70();
   input += synapse0x2566ab0();
   input += synapse0x2566af0();
   input += synapse0x2566b30();
   input += synapse0x2566b70();
   input += synapse0x2566bb0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2566220() {
   double input = input0x2566220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2566bf0() {
   double input = 1.56081;
   input += synapse0x254f660();
   input += synapse0x254f6a0();
   input += synapse0x254f6e0();
   input += synapse0x254f720();
   input += synapse0x254f760();
   input += synapse0x254f7a0();
   input += synapse0x254f7e0();
   input += synapse0x254f820();
   input += synapse0x2567340();
   input += synapse0x2567380();
   input += synapse0x25673c0();
   input += synapse0x2567400();
   input += synapse0x2567440();
   input += synapse0x2567480();
   input += synapse0x25674c0();
   input += synapse0x2567500();
   input += synapse0x2566d80();
   input += synapse0x2566dc0();
   input += synapse0x2567650();
   input += synapse0x2567690();
   input += synapse0x25676d0();
   input += synapse0x2567710();
   input += synapse0x2567750();
   input += synapse0x2567790();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2566bf0() {
   double input = input0x2566bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x25677d0() {
   double input = 0.486104;
   input += synapse0x2567b10();
   input += synapse0x2567b50();
   input += synapse0x2567b90();
   input += synapse0x2567bd0();
   input += synapse0x2567c10();
   input += synapse0x2567c50();
   input += synapse0x2567c90();
   input += synapse0x2567cd0();
   input += synapse0x2567d10();
   input += synapse0x2567d50();
   input += synapse0x2567d90();
   input += synapse0x2567dd0();
   input += synapse0x2567e10();
   input += synapse0x2567e50();
   input += synapse0x2567e90();
   input += synapse0x2567ed0();
   input += synapse0x2567960();
   input += synapse0x25679a0();
   input += synapse0x2568020();
   input += synapse0x2568060();
   input += synapse0x25680a0();
   input += synapse0x25680e0();
   input += synapse0x2568120();
   input += synapse0x2568160();
   return input;
}

double NNfunction_ss_cLsL::neuron0x25677d0() {
   double input = input0x25677d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x25681a0() {
   double input = -0.88055;
   input += synapse0x25684e0();
   input += synapse0x2568520();
   input += synapse0x2568560();
   input += synapse0x25685a0();
   input += synapse0x25685e0();
   input += synapse0x2568620();
   input += synapse0x2568660();
   input += synapse0x25686a0();
   input += synapse0x25686e0();
   input += synapse0x2568720();
   input += synapse0x2568760();
   input += synapse0x25687a0();
   input += synapse0x25687e0();
   input += synapse0x2568820();
   input += synapse0x2568860();
   input += synapse0x25688a0();
   input += synapse0x2568330();
   input += synapse0x2568370();
   input += synapse0x2558ea0();
   input += synapse0x2558ee0();
   input += synapse0x2558f20();
   input += synapse0x2558f60();
   input += synapse0x2558fa0();
   input += synapse0x2558fe0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x25681a0() {
   double input = input0x25681a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2559020() {
   double input = 1.05788;
   input += synapse0x2559360();
   input += synapse0x25593a0();
   input += synapse0x25593e0();
   input += synapse0x2559420();
   input += synapse0x2559460();
   input += synapse0x25594a0();
   input += synapse0x25594e0();
   input += synapse0x2559520();
   input += synapse0x2559560();
   input += synapse0x25595a0();
   input += synapse0x25595e0();
   input += synapse0x2559620();
   input += synapse0x2559660();
   input += synapse0x25596a0();
   input += synapse0x25596e0();
   input += synapse0x2559720();
   input += synapse0x25591b0();
   input += synapse0x25591f0();
   input += synapse0x2559870();
   input += synapse0x25598b0();
   input += synapse0x25598f0();
   input += synapse0x2559930();
   input += synapse0x2559970();
   input += synapse0x25599b0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2559020() {
   double input = input0x2559020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x25599f0() {
   double input = 0.242472;
   input += synapse0x2559d30();
   input += synapse0x2559d70();
   input += synapse0x2559db0();
   input += synapse0x2559df0();
   input += synapse0x2559e30();
   input += synapse0x2559e70();
   input += synapse0x2559eb0();
   input += synapse0x2559ef0();
   input += synapse0x2559f30();
   input += synapse0x2559f70();
   input += synapse0x2559fb0();
   input += synapse0x2559ff0();
   input += synapse0x255a030();
   input += synapse0x255a070();
   input += synapse0x255a0b0();
   input += synapse0x255a0f0();
   input += synapse0x2559b80();
   input += synapse0x2559bc0();
   input += synapse0x255a240();
   input += synapse0x255a280();
   input += synapse0x255a2c0();
   input += synapse0x255a300();
   input += synapse0x255a340();
   input += synapse0x255a380();
   return input;
}

double NNfunction_ss_cLsL::neuron0x25599f0() {
   double input = input0x25599f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x255a3c0() {
   double input = -1.23512;
   input += synapse0x255a700();
   input += synapse0x255a740();
   input += synapse0x255a780();
   input += synapse0x255a7c0();
   input += synapse0x255a800();
   input += synapse0x255a840();
   input += synapse0x255a880();
   input += synapse0x255a8c0();
   input += synapse0x255a900();
   input += synapse0x255a940();
   input += synapse0x255a980();
   input += synapse0x255a9c0();
   input += synapse0x255aa00();
   input += synapse0x255aa40();
   input += synapse0x255aa80();
   input += synapse0x255aac0();
   input += synapse0x255a550();
   input += synapse0x255a590();
   input += synapse0x255ac10();
   input += synapse0x255ac50();
   input += synapse0x255ac90();
   input += synapse0x255acd0();
   input += synapse0x255ad10();
   input += synapse0x255ad50();
   return input;
}

double NNfunction_ss_cLsL::neuron0x255a3c0() {
   double input = input0x255a3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x256ca00() {
   double input = 1.32651;
   input += synapse0x256cc20();
   input += synapse0x256cc60();
   input += synapse0x256cca0();
   input += synapse0x256cce0();
   input += synapse0x256cd20();
   input += synapse0x256cd60();
   input += synapse0x256cda0();
   input += synapse0x256cde0();
   input += synapse0x256ce20();
   input += synapse0x256ce60();
   input += synapse0x256cea0();
   input += synapse0x256cee0();
   input += synapse0x256cf20();
   input += synapse0x256cf60();
   input += synapse0x256cfa0();
   input += synapse0x256cfe0();
   input += synapse0x255ad90();
   input += synapse0x255add0();
   input += synapse0x256d130();
   input += synapse0x256d170();
   input += synapse0x256d1b0();
   input += synapse0x256d1f0();
   input += synapse0x256d230();
   input += synapse0x256d270();
   return input;
}

double NNfunction_ss_cLsL::neuron0x256ca00() {
   double input = input0x256ca00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x256d2b0() {
   double input = 0.348994;
   input += synapse0x256d5f0();
   input += synapse0x256d630();
   input += synapse0x256d670();
   input += synapse0x256d6b0();
   input += synapse0x256d6f0();
   input += synapse0x256d730();
   input += synapse0x256d770();
   input += synapse0x256d7b0();
   input += synapse0x256d7f0();
   input += synapse0x256d830();
   input += synapse0x256d870();
   input += synapse0x256d8b0();
   input += synapse0x256d8f0();
   input += synapse0x256d930();
   input += synapse0x256d970();
   input += synapse0x256d9b0();
   input += synapse0x256d440();
   input += synapse0x256d480();
   input += synapse0x256db00();
   input += synapse0x256db40();
   input += synapse0x256db80();
   input += synapse0x256dbc0();
   input += synapse0x256dc00();
   input += synapse0x256dc40();
   return input;
}

double NNfunction_ss_cLsL::neuron0x256d2b0() {
   double input = input0x256d2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x256dc80() {
   double input = 1.00254;
   input += synapse0x256dfc0();
   input += synapse0x256e000();
   input += synapse0x256e040();
   input += synapse0x256e080();
   input += synapse0x256e0c0();
   input += synapse0x256e100();
   input += synapse0x256e140();
   input += synapse0x256e180();
   input += synapse0x256e1c0();
   input += synapse0x256e200();
   input += synapse0x256e240();
   input += synapse0x256e280();
   input += synapse0x256e2c0();
   input += synapse0x256e300();
   input += synapse0x256e340();
   input += synapse0x256e380();
   input += synapse0x256de10();
   input += synapse0x256de50();
   input += synapse0x256e4d0();
   input += synapse0x256e510();
   input += synapse0x256e550();
   input += synapse0x256e590();
   input += synapse0x256e5d0();
   input += synapse0x256e610();
   return input;
}

double NNfunction_ss_cLsL::neuron0x256dc80() {
   double input = input0x256dc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x256e650() {
   double input = 0.384671;
   input += synapse0x256e990();
   input += synapse0x256e9d0();
   input += synapse0x256ea10();
   input += synapse0x256ea50();
   input += synapse0x256ea90();
   input += synapse0x256ead0();
   input += synapse0x256eb10();
   input += synapse0x256eb50();
   input += synapse0x256eb90();
   input += synapse0x256ebd0();
   input += synapse0x256ec10();
   input += synapse0x256ec50();
   input += synapse0x256ec90();
   input += synapse0x256ecd0();
   input += synapse0x256ed10();
   input += synapse0x256ed50();
   input += synapse0x256e7e0();
   input += synapse0x256e820();
   input += synapse0x256eea0();
   input += synapse0x256eee0();
   input += synapse0x256ef20();
   input += synapse0x256ef60();
   input += synapse0x256efa0();
   input += synapse0x256efe0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x256e650() {
   double input = input0x256e650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2575850() {
   double input = -1.96998;
   input += synapse0x254b580();
   input += synapse0x254b5c0();
   input += synapse0x254ca90();
   input += synapse0x254cad0();
   input += synapse0x254d460();
   input += synapse0x254d4a0();
   input += synapse0x254e230();
   input += synapse0x254e270();
   input += synapse0x254ec00();
   input += synapse0x254ec40();
   input += synapse0x254f5d0();
   input += synapse0x254f610();
   input += synapse0x25500b0();
   input += synapse0x25500f0();
   input += synapse0x2550a80();
   input += synapse0x2550ac0();
   input += synapse0x254db60();
   input += synapse0x254dba0();
   input += synapse0x2552630();
   input += synapse0x2552670();
   input += synapse0x2553000();
   input += synapse0x2553040();
   input += synapse0x25539d0();
   input += synapse0x2553a10();
   input += synapse0x25543a0();
   input += synapse0x25543e0();
   input += synapse0x2548510();
   input += synapse0x2548550();
   input += synapse0x2556490();
   input += synapse0x25564d0();
   input += synapse0x2556e60();
   input += synapse0x2556ea0();
   input += synapse0x2557830();
   input += synapse0x2557870();
   input += synapse0x2558200();
   input += synapse0x2558240();
   input += synapse0x2558bd0();
   input += synapse0x2558c10();
   input += synapse0x2551720();
   input += synapse0x2551760();
   input += synapse0x255afd0();
   input += synapse0x255b010();
   input += synapse0x255b960();
   input += synapse0x255b9a0();
   input += synapse0x255c330();
   input += synapse0x255c370();
   input += synapse0x255cd00();
   input += synapse0x255cd40();
   input += synapse0x255d6d0();
   input += synapse0x255d710();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2575850() {
   double input = input0x2575850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2575bf0() {
   double input = -0.587444;
   input += synapse0x255fe10();
   input += synapse0x255fe50();
   input += synapse0x25553d0();
   input += synapse0x2555410();
   input += synapse0x25629f0();
   input += synapse0x2562a30();
   input += synapse0x25633c0();
   input += synapse0x2563400();
   input += synapse0x2563d90();
   input += synapse0x2563dd0();
   input += synapse0x2564760();
   input += synapse0x25647a0();
   input += synapse0x2565130();
   input += synapse0x2565170();
   input += synapse0x2565b00();
   input += synapse0x2565b40();
   input += synapse0x25664d0();
   input += synapse0x2566510();
   input += synapse0x2566ea0();
   input += synapse0x2566ee0();
   input += synapse0x2567a80();
   input += synapse0x2567ac0();
   input += synapse0x2568450();
   input += synapse0x2568490();
   input += synapse0x25592d0();
   input += synapse0x2559310();
   input += synapse0x2559ca0();
   input += synapse0x2559ce0();
   input += synapse0x255a670();
   input += synapse0x255a6b0();
   input += synapse0x256cb90();
   input += synapse0x256cbd0();
   input += synapse0x256d560();
   input += synapse0x256d5a0();
   input += synapse0x256df30();
   input += synapse0x256df70();
   input += synapse0x256e900();
   input += synapse0x256e940();
   input += synapse0x254a7f0();
   input += synapse0x254a830();
   input += synapse0x255e0a0();
   input += synapse0x255e0e0();
   input += synapse0x256f020();
   input += synapse0x256f060();
   input += synapse0x256f0a0();
   input += synapse0x256f0e0();
   input += synapse0x2575f90();
   input += synapse0x2575fd0();
   input += synapse0x2576010();
   input += synapse0x2576050();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2575bf0() {
   double input = input0x2575bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2576090() {
   double input = 0.0329116;
   input += synapse0x25763d0();
   input += synapse0x2576410();
   input += synapse0x2576450();
   input += synapse0x2576490();
   input += synapse0x25764d0();
   input += synapse0x2576510();
   input += synapse0x2576550();
   input += synapse0x2576590();
   input += synapse0x25765d0();
   input += synapse0x2576610();
   input += synapse0x2576650();
   input += synapse0x2576690();
   input += synapse0x25766d0();
   input += synapse0x2576710();
   input += synapse0x2576750();
   input += synapse0x2576790();
   input += synapse0x2576220();
   input += synapse0x2576260();
   input += synapse0x25768e0();
   input += synapse0x2576920();
   input += synapse0x2576960();
   input += synapse0x25769a0();
   input += synapse0x25769e0();
   input += synapse0x2576a20();
   input += synapse0x2576a60();
   input += synapse0x2576aa0();
   input += synapse0x2576ae0();
   input += synapse0x2576b20();
   input += synapse0x2576b60();
   input += synapse0x2576ba0();
   input += synapse0x2576be0();
   input += synapse0x2576c20();
   input += synapse0x25767d0();
   input += synapse0x2576810();
   input += synapse0x2576850();
   input += synapse0x2576890();
   input += synapse0x2576e70();
   input += synapse0x2576eb0();
   input += synapse0x2576ef0();
   input += synapse0x2576f30();
   input += synapse0x2576f70();
   input += synapse0x2576fb0();
   input += synapse0x2576ff0();
   input += synapse0x2577030();
   input += synapse0x2577070();
   input += synapse0x25770b0();
   input += synapse0x25770f0();
   input += synapse0x2577130();
   input += synapse0x2577170();
   input += synapse0x25771b0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2576090() {
   double input = input0x2576090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x25771f0() {
   double input = -0.892733;
   input += synapse0x2577530();
   input += synapse0x2577570();
   input += synapse0x25775b0();
   input += synapse0x25775f0();
   input += synapse0x2577630();
   input += synapse0x2577670();
   input += synapse0x25776b0();
   input += synapse0x25776f0();
   input += synapse0x2577730();
   input += synapse0x2577770();
   input += synapse0x25777b0();
   input += synapse0x25777f0();
   input += synapse0x2577830();
   input += synapse0x2577870();
   input += synapse0x25778b0();
   input += synapse0x25778f0();
   input += synapse0x2577380();
   input += synapse0x25773c0();
   input += synapse0x2577a40();
   input += synapse0x2577a80();
   input += synapse0x2577ac0();
   input += synapse0x2577b00();
   input += synapse0x2577b40();
   input += synapse0x2577b80();
   input += synapse0x2577bc0();
   input += synapse0x2577c00();
   input += synapse0x2577c40();
   input += synapse0x2577c80();
   input += synapse0x2577cc0();
   input += synapse0x2577d00();
   input += synapse0x2577d40();
   input += synapse0x2577d80();
   input += synapse0x2577930();
   input += synapse0x2577970();
   input += synapse0x25779b0();
   input += synapse0x25779f0();
   input += synapse0x2577fd0();
   input += synapse0x2578010();
   input += synapse0x2578050();
   input += synapse0x2578090();
   input += synapse0x25780d0();
   input += synapse0x2578110();
   input += synapse0x2578150();
   input += synapse0x2578190();
   input += synapse0x25781d0();
   input += synapse0x2578210();
   input += synapse0x2578250();
   input += synapse0x2578290();
   input += synapse0x25782d0();
   input += synapse0x2578310();
   return input;
}

double NNfunction_ss_cLsL::neuron0x25771f0() {
   double input = input0x25771f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x2578350() {
   double input = 0.444331;
   input += synapse0x2578690();
   input += synapse0x25786d0();
   input += synapse0x2578710();
   input += synapse0x2578750();
   input += synapse0x2578790();
   input += synapse0x25787d0();
   input += synapse0x2578810();
   input += synapse0x2578850();
   input += synapse0x2578890();
   input += synapse0x25788d0();
   input += synapse0x2578910();
   input += synapse0x2578950();
   input += synapse0x2578990();
   input += synapse0x25789d0();
   input += synapse0x2578a10();
   input += synapse0x2578a50();
   input += synapse0x25784e0();
   input += synapse0x2578520();
   input += synapse0x2578ba0();
   input += synapse0x2578be0();
   input += synapse0x2578c20();
   input += synapse0x2578c60();
   input += synapse0x2578ca0();
   input += synapse0x2578ce0();
   input += synapse0x2578d20();
   input += synapse0x2578d60();
   input += synapse0x2578da0();
   input += synapse0x2578de0();
   input += synapse0x2578e20();
   input += synapse0x2578e60();
   input += synapse0x2578ea0();
   input += synapse0x2578ee0();
   input += synapse0x2578a90();
   input += synapse0x2578ad0();
   input += synapse0x2578b10();
   input += synapse0x2578b50();
   input += synapse0x2579130();
   input += synapse0x2579170();
   input += synapse0x25791b0();
   input += synapse0x25791f0();
   input += synapse0x2579230();
   input += synapse0x2579270();
   input += synapse0x25792b0();
   input += synapse0x25792f0();
   input += synapse0x2579330();
   input += synapse0x2579370();
   input += synapse0x25793b0();
   input += synapse0x25793f0();
   input += synapse0x2579430();
   input += synapse0x2579470();
   return input;
}

double NNfunction_ss_cLsL::neuron0x2578350() {
   double input = input0x2578350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x25794b0() {
   double input = 9.99127;
   input += synapse0x254a590();
   input += synapse0x25796d0();
   input += synapse0x2579710();
   input += synapse0x2579750();
   input += synapse0x2579790();
   return input;
}

double NNfunction_ss_cLsL::neuron0x25794b0() {
   double input = input0x25794b0();
   return (input * 1)+0;
}

double NNfunction_ss_cLsL::synapse0x23053e0() {
   return (neuron0x2545570()*0.0615121);
}

double NNfunction_ss_cLsL::synapse0x2545430() {
   return (neuron0x25458b0()*0.0531911);
}

double NNfunction_ss_cLsL::synapse0x2545470() {
   return (neuron0x2545bf0()*-0.773552);
}

double NNfunction_ss_cLsL::synapse0x254a880() {
   return (neuron0x2545f30()*-0.18516);
}

double NNfunction_ss_cLsL::synapse0x254a8c0() {
   return (neuron0x2546270()*-0.155126);
}

double NNfunction_ss_cLsL::synapse0x254a900() {
   return (neuron0x25465b0()*-0.0914733);
}

double NNfunction_ss_cLsL::synapse0x254a940() {
   return (neuron0x25468f0()*-0.109024);
}

double NNfunction_ss_cLsL::synapse0x254a980() {
   return (neuron0x2546c30()*-0.120138);
}

double NNfunction_ss_cLsL::synapse0x254a9c0() {
   return (neuron0x2546f70()*0.0693844);
}

double NNfunction_ss_cLsL::synapse0x254aa00() {
   return (neuron0x25472b0()*0.0137468);
}

double NNfunction_ss_cLsL::synapse0x254aa40() {
   return (neuron0x25475f0()*-0.0175418);
}

double NNfunction_ss_cLsL::synapse0x254aa80() {
   return (neuron0x2547930()*0.0677573);
}

double NNfunction_ss_cLsL::synapse0x254aac0() {
   return (neuron0x2547c70()*-0.558372);
}

double NNfunction_ss_cLsL::synapse0x254ab00() {
   return (neuron0x2547fb0()*-0.149303);
}

double NNfunction_ss_cLsL::synapse0x254ab40() {
   return (neuron0x25482f0()*0.0702974);
}

double NNfunction_ss_cLsL::synapse0x254ab80() {
   return (neuron0x2548630()*-0.148155);
}

double NNfunction_ss_cLsL::synapse0x25453a0() {
   return (neuron0x2548970()*-0.224025);
}

double NNfunction_ss_cLsL::synapse0x25453e0() {
   return (neuron0x2548ed0()*0.138518);
}

double NNfunction_ss_cLsL::synapse0x22f6c80() {
   return (neuron0x25490f0()*0.168695);
}

double NNfunction_ss_cLsL::synapse0x22f6cc0() {
   return (neuron0x2549430()*0.0904228);
}

double NNfunction_ss_cLsL::synapse0x254ade0() {
   return (neuron0x2549770()*-0.101994);
}

double NNfunction_ss_cLsL::synapse0x254ae20() {
   return (neuron0x2549ab0()*-0.013672);
}

double NNfunction_ss_cLsL::synapse0x254ae60() {
   return (neuron0x2549df0()*-0.0858792);
}

double NNfunction_ss_cLsL::synapse0x254aea0() {
   return (neuron0x254a130()*0.0665739);
}

double NNfunction_ss_cLsL::synapse0x254b220() {
   return (neuron0x2545570()*-0.405169);
}

double NNfunction_ss_cLsL::synapse0x254b260() {
   return (neuron0x25458b0()*-0.494918);
}

double NNfunction_ss_cLsL::synapse0x254b2a0() {
   return (neuron0x2545bf0()*-0.141795);
}

double NNfunction_ss_cLsL::synapse0x254b2e0() {
   return (neuron0x2545f30()*1.42284);
}

double NNfunction_ss_cLsL::synapse0x254b320() {
   return (neuron0x2546270()*0.032387);
}

double NNfunction_ss_cLsL::synapse0x254b360() {
   return (neuron0x25465b0()*0.181154);
}

double NNfunction_ss_cLsL::synapse0x254b3a0() {
   return (neuron0x25468f0()*-0.0580021);
}

double NNfunction_ss_cLsL::synapse0x254b3e0() {
   return (neuron0x2546c30()*0.0929659);
}

double NNfunction_ss_cLsL::synapse0x254b420() {
   return (neuron0x2546f70()*-0.374746);
}

double NNfunction_ss_cLsL::synapse0x254acd0() {
   return (neuron0x25472b0()*0.27382);
}

double NNfunction_ss_cLsL::synapse0x254ad10() {
   return (neuron0x25475f0()*-0.189658);
}

double NNfunction_ss_cLsL::synapse0x254ad50() {
   return (neuron0x2547930()*-0.230156);
}

double NNfunction_ss_cLsL::synapse0x254ad90() {
   return (neuron0x2547c70()*-1.87167);
}

double NNfunction_ss_cLsL::synapse0x254b670() {
   return (neuron0x2547fb0()*-0.0813649);
}

double NNfunction_ss_cLsL::synapse0x254b6b0() {
   return (neuron0x25482f0()*-0.028173);
}

double NNfunction_ss_cLsL::synapse0x254b6f0() {
   return (neuron0x2548630()*-0.574635);
}

double NNfunction_ss_cLsL::synapse0x254b070() {
   return (neuron0x2548970()*-0.598152);
}

double NNfunction_ss_cLsL::synapse0x254b0b0() {
   return (neuron0x2548ed0()*-0.359012);
}

double NNfunction_ss_cLsL::synapse0x254b840() {
   return (neuron0x25490f0()*0.0349338);
}

double NNfunction_ss_cLsL::synapse0x254b880() {
   return (neuron0x2549430()*-0.132266);
}

double NNfunction_ss_cLsL::synapse0x254b8c0() {
   return (neuron0x2549770()*0.1233);
}

double NNfunction_ss_cLsL::synapse0x254b900() {
   return (neuron0x2549ab0()*0.305283);
}

double NNfunction_ss_cLsL::synapse0x254b940() {
   return (neuron0x2549df0()*-0.229256);
}

double NNfunction_ss_cLsL::synapse0x254b980() {
   return (neuron0x254a130()*-0.00530303);
}

double NNfunction_ss_cLsL::synapse0x254bd00() {
   return (neuron0x2545570()*-0.0105238);
}

double NNfunction_ss_cLsL::synapse0x254bd40() {
   return (neuron0x25458b0()*-0.025824);
}

double NNfunction_ss_cLsL::synapse0x254bd80() {
   return (neuron0x2545bf0()*-0.0467449);
}

double NNfunction_ss_cLsL::synapse0x254bdc0() {
   return (neuron0x2545f30()*21.0229);
}

double NNfunction_ss_cLsL::synapse0x254be00() {
   return (neuron0x2546270()*-0.00342675);
}

double NNfunction_ss_cLsL::synapse0x254be40() {
   return (neuron0x25465b0()*0.00189072);
}

double NNfunction_ss_cLsL::synapse0x254be80() {
   return (neuron0x25468f0()*0.0102537);
}

double NNfunction_ss_cLsL::synapse0x254bec0() {
   return (neuron0x2546c30()*0.0275325);
}

double NNfunction_ss_cLsL::synapse0x254bf00() {
   return (neuron0x2546f70()*0.0167084);
}

double NNfunction_ss_cLsL::synapse0x254bf40() {
   return (neuron0x25472b0()*-0.0165769);
}

double NNfunction_ss_cLsL::synapse0x254bf80() {
   return (neuron0x25475f0()*-0.0296076);
}

double NNfunction_ss_cLsL::synapse0x254bfc0() {
   return (neuron0x2547930()*-0.0187036);
}

double NNfunction_ss_cLsL::synapse0x254c000() {
   return (neuron0x2547c70()*-0.0444862);
}

double NNfunction_ss_cLsL::synapse0x254c040() {
   return (neuron0x2547fb0()*-0.011466);
}

double NNfunction_ss_cLsL::synapse0x254c080() {
   return (neuron0x25482f0()*0.00185093);
}

double NNfunction_ss_cLsL::synapse0x254c0c0() {
   return (neuron0x2548630()*-7.44748e-05);
}

double NNfunction_ss_cLsL::synapse0x254bb50() {
   return (neuron0x2548970()*-0.0131702);
}

double NNfunction_ss_cLsL::synapse0x254bb90() {
   return (neuron0x2548ed0()*-0.00384187);
}

double NNfunction_ss_cLsL::synapse0x2304ad0() {
   return (neuron0x25490f0()*-0.0163956);
}

double NNfunction_ss_cLsL::synapse0x2304b10() {
   return (neuron0x2549430()*0.0284663);
}

double NNfunction_ss_cLsL::synapse0x2534600() {
   return (neuron0x2549770()*0.0130948);
}

double NNfunction_ss_cLsL::synapse0x2534640() {
   return (neuron0x2549ab0()*0.0587959);
}

double NNfunction_ss_cLsL::synapse0x2534680() {
   return (neuron0x2549df0()*0.0492088);
}

double NNfunction_ss_cLsL::synapse0x25454b0() {
   return (neuron0x254a130()*0.0244005);
}

double NNfunction_ss_cLsL::synapse0x254b610() {
   return (neuron0x2545570()*0.10153);
}

double NNfunction_ss_cLsL::synapse0x25454f0() {
   return (neuron0x25458b0()*-0.660577);
}

double NNfunction_ss_cLsL::synapse0x2545530() {
   return (neuron0x2545bf0()*0.533705);
}

double NNfunction_ss_cLsL::synapse0x254c210() {
   return (neuron0x2545f30()*0.330121);
}

double NNfunction_ss_cLsL::synapse0x254c250() {
   return (neuron0x2546270()*-0.213577);
}

double NNfunction_ss_cLsL::synapse0x254c290() {
   return (neuron0x25465b0()*-0.536385);
}

double NNfunction_ss_cLsL::synapse0x254c2d0() {
   return (neuron0x25468f0()*-1.02647);
}

double NNfunction_ss_cLsL::synapse0x254c310() {
   return (neuron0x2546c30()*-0.506275);
}

double NNfunction_ss_cLsL::synapse0x254c350() {
   return (neuron0x2546f70()*0.418024);
}

double NNfunction_ss_cLsL::synapse0x254c390() {
   return (neuron0x25472b0()*-0.0555676);
}

double NNfunction_ss_cLsL::synapse0x254c3d0() {
   return (neuron0x25475f0()*-0.245745);
}

double NNfunction_ss_cLsL::synapse0x254c410() {
   return (neuron0x2547930()*0.413004);
}

double NNfunction_ss_cLsL::synapse0x254c450() {
   return (neuron0x2547c70()*-0.0539373);
}

double NNfunction_ss_cLsL::synapse0x254c490() {
   return (neuron0x2547fb0()*0.33197);
}

double NNfunction_ss_cLsL::synapse0x254c4d0() {
   return (neuron0x25482f0()*-0.845675);
}

double NNfunction_ss_cLsL::synapse0x254c510() {
   return (neuron0x2548630()*-0.579101);
}

double NNfunction_ss_cLsL::synapse0x254b460() {
   return (neuron0x2548970()*0.210869);
}

double NNfunction_ss_cLsL::synapse0x254b4a0() {
   return (neuron0x2548ed0()*-0.432663);
}

double NNfunction_ss_cLsL::synapse0x254c660() {
   return (neuron0x25490f0()*0.02038);
}

double NNfunction_ss_cLsL::synapse0x254c6a0() {
   return (neuron0x2549430()*-0.601045);
}

double NNfunction_ss_cLsL::synapse0x254c6e0() {
   return (neuron0x2549770()*0.187988);
}

double NNfunction_ss_cLsL::synapse0x254c720() {
   return (neuron0x2549ab0()*0.263016);
}

double NNfunction_ss_cLsL::synapse0x254c760() {
   return (neuron0x2549df0()*-0.338457);
}

double NNfunction_ss_cLsL::synapse0x254c7a0() {
   return (neuron0x254a130()*0.338604);
}

double NNfunction_ss_cLsL::synapse0x254cb20() {
   return (neuron0x2545570()*-0.240128);
}

double NNfunction_ss_cLsL::synapse0x254cb60() {
   return (neuron0x25458b0()*0.0824244);
}

double NNfunction_ss_cLsL::synapse0x254cba0() {
   return (neuron0x2545bf0()*0.00439394);
}

double NNfunction_ss_cLsL::synapse0x254cbe0() {
   return (neuron0x2545f30()*-0.460597);
}

double NNfunction_ss_cLsL::synapse0x254cc20() {
   return (neuron0x2546270()*-0.0524158);
}

double NNfunction_ss_cLsL::synapse0x254cc60() {
   return (neuron0x25465b0()*-0.0314835);
}

double NNfunction_ss_cLsL::synapse0x254cca0() {
   return (neuron0x25468f0()*-0.321007);
}

double NNfunction_ss_cLsL::synapse0x254cce0() {
   return (neuron0x2546c30()*0.176898);
}

double NNfunction_ss_cLsL::synapse0x254cd20() {
   return (neuron0x2546f70()*1.05284);
}

double NNfunction_ss_cLsL::synapse0x254cd60() {
   return (neuron0x25472b0()*0.612453);
}

double NNfunction_ss_cLsL::synapse0x254cda0() {
   return (neuron0x25475f0()*0.267872);
}

double NNfunction_ss_cLsL::synapse0x254cde0() {
   return (neuron0x2547930()*-0.200414);
}

double NNfunction_ss_cLsL::synapse0x254ce20() {
   return (neuron0x2547c70()*0.536938);
}

double NNfunction_ss_cLsL::synapse0x254ce60() {
   return (neuron0x2547fb0()*0.243478);
}

double NNfunction_ss_cLsL::synapse0x254cea0() {
   return (neuron0x25482f0()*-0.1687);
}

double NNfunction_ss_cLsL::synapse0x254cee0() {
   return (neuron0x2548630()*0.0109336);
}

double NNfunction_ss_cLsL::synapse0x254c970() {
   return (neuron0x2548970()*-0.175312);
}

double NNfunction_ss_cLsL::synapse0x254c9b0() {
   return (neuron0x2548ed0()*0.399969);
}

double NNfunction_ss_cLsL::synapse0x254d030() {
   return (neuron0x25490f0()*-0.27929);
}

double NNfunction_ss_cLsL::synapse0x254d070() {
   return (neuron0x2549430()*-0.287993);
}

double NNfunction_ss_cLsL::synapse0x254d0b0() {
   return (neuron0x2549770()*-0.128287);
}

double NNfunction_ss_cLsL::synapse0x254d0f0() {
   return (neuron0x2549ab0()*-0.0944962);
}

double NNfunction_ss_cLsL::synapse0x254d130() {
   return (neuron0x2549df0()*0.0871686);
}

double NNfunction_ss_cLsL::synapse0x254d170() {
   return (neuron0x254a130()*0.341462);
}

double NNfunction_ss_cLsL::synapse0x254d4f0() {
   return (neuron0x2545570()*-0.00396956);
}

double NNfunction_ss_cLsL::synapse0x254d530() {
   return (neuron0x25458b0()*0.00207877);
}

double NNfunction_ss_cLsL::synapse0x254d570() {
   return (neuron0x2545bf0()*-0.0643917);
}

double NNfunction_ss_cLsL::synapse0x254d5b0() {
   return (neuron0x2545f30()*1.76918);
}

double NNfunction_ss_cLsL::synapse0x254d5f0() {
   return (neuron0x2546270()*0.108013);
}

double NNfunction_ss_cLsL::synapse0x254d630() {
   return (neuron0x25465b0()*-0.0215322);
}

double NNfunction_ss_cLsL::synapse0x254d670() {
   return (neuron0x25468f0()*0.147519);
}

double NNfunction_ss_cLsL::synapse0x254d6b0() {
   return (neuron0x2546c30()*-0.0721041);
}

double NNfunction_ss_cLsL::synapse0x254d6f0() {
   return (neuron0x2546f70()*-0.033255);
}

double NNfunction_ss_cLsL::synapse0x2304e40() {
   return (neuron0x25472b0()*-0.109242);
}

double NNfunction_ss_cLsL::synapse0x2304e80() {
   return (neuron0x25475f0()*0.0219041);
}

double NNfunction_ss_cLsL::synapse0x2304ec0() {
   return (neuron0x2547930()*-0.0713575);
}

double NNfunction_ss_cLsL::synapse0x2304f00() {
   return (neuron0x2547c70()*-1.00054);
}

double NNfunction_ss_cLsL::synapse0x2304f40() {
   return (neuron0x2547fb0()*-0.190691);
}

double NNfunction_ss_cLsL::synapse0x2304f80() {
   return (neuron0x25482f0()*-0.124617);
}

double NNfunction_ss_cLsL::synapse0x2304fc0() {
   return (neuron0x2548630()*0.0375862);
}

double NNfunction_ss_cLsL::synapse0x254d340() {
   return (neuron0x2548970()*-0.0427265);
}

double NNfunction_ss_cLsL::synapse0x254d380() {
   return (neuron0x2548ed0()*-0.149449);
}

double NNfunction_ss_cLsL::synapse0x2305110() {
   return (neuron0x25490f0()*-0.0736874);
}

double NNfunction_ss_cLsL::synapse0x2305150() {
   return (neuron0x2549430()*0.0719254);
}

double NNfunction_ss_cLsL::synapse0x2305190() {
   return (neuron0x2549770()*0.0761432);
}

double NNfunction_ss_cLsL::synapse0x23051d0() {
   return (neuron0x2549ab0()*0.0636013);
}

double NNfunction_ss_cLsL::synapse0x2305210() {
   return (neuron0x2549df0()*0.172003);
}

double NNfunction_ss_cLsL::synapse0x254df40() {
   return (neuron0x254a130()*-0.00661185);
}

double NNfunction_ss_cLsL::synapse0x254e2c0() {
   return (neuron0x2545570()*0.498756);
}

double NNfunction_ss_cLsL::synapse0x254e300() {
   return (neuron0x25458b0()*0.508355);
}

double NNfunction_ss_cLsL::synapse0x254e340() {
   return (neuron0x2545bf0()*0.78789);
}

double NNfunction_ss_cLsL::synapse0x254e380() {
   return (neuron0x2545f30()*1.9793);
}

double NNfunction_ss_cLsL::synapse0x254e3c0() {
   return (neuron0x2546270()*0.058138);
}

double NNfunction_ss_cLsL::synapse0x254e400() {
   return (neuron0x25465b0()*-0.195015);
}

double NNfunction_ss_cLsL::synapse0x254e440() {
   return (neuron0x25468f0()*0.0734045);
}

double NNfunction_ss_cLsL::synapse0x254e480() {
   return (neuron0x2546c30()*0.220865);
}

double NNfunction_ss_cLsL::synapse0x254e4c0() {
   return (neuron0x2546f70()*0.483249);
}

double NNfunction_ss_cLsL::synapse0x254e500() {
   return (neuron0x25472b0()*0.0308822);
}

double NNfunction_ss_cLsL::synapse0x254e540() {
   return (neuron0x25475f0()*-0.303548);
}

double NNfunction_ss_cLsL::synapse0x254e580() {
   return (neuron0x2547930()*0.502221);
}

double NNfunction_ss_cLsL::synapse0x254e5c0() {
   return (neuron0x2547c70()*-0.148339);
}

double NNfunction_ss_cLsL::synapse0x254e600() {
   return (neuron0x2547fb0()*-0.200676);
}

double NNfunction_ss_cLsL::synapse0x254e640() {
   return (neuron0x25482f0()*-0.107047);
}

double NNfunction_ss_cLsL::synapse0x254e680() {
   return (neuron0x2548630()*0.41746);
}

double NNfunction_ss_cLsL::synapse0x254e110() {
   return (neuron0x2548970()*-0.0402629);
}

double NNfunction_ss_cLsL::synapse0x254e150() {
   return (neuron0x2548ed0()*0.681497);
}

double NNfunction_ss_cLsL::synapse0x254e7d0() {
   return (neuron0x25490f0()*-0.34647);
}

double NNfunction_ss_cLsL::synapse0x254e810() {
   return (neuron0x2549430()*0.433692);
}

double NNfunction_ss_cLsL::synapse0x254e850() {
   return (neuron0x2549770()*-0.170012);
}

double NNfunction_ss_cLsL::synapse0x254e890() {
   return (neuron0x2549ab0()*-0.0995575);
}

double NNfunction_ss_cLsL::synapse0x254e8d0() {
   return (neuron0x2549df0()*-0.0875733);
}

double NNfunction_ss_cLsL::synapse0x254e910() {
   return (neuron0x254a130()*0.143856);
}

double NNfunction_ss_cLsL::synapse0x254ec90() {
   return (neuron0x2545570()*-0.124462);
}

double NNfunction_ss_cLsL::synapse0x254ecd0() {
   return (neuron0x25458b0()*0.0170714);
}

double NNfunction_ss_cLsL::synapse0x254ed10() {
   return (neuron0x2545bf0()*-0.155154);
}

double NNfunction_ss_cLsL::synapse0x254ed50() {
   return (neuron0x2545f30()*-0.935276);
}

double NNfunction_ss_cLsL::synapse0x254ed90() {
   return (neuron0x2546270()*-0.277289);
}

double NNfunction_ss_cLsL::synapse0x254edd0() {
   return (neuron0x25465b0()*0.0287663);
}

double NNfunction_ss_cLsL::synapse0x254ee10() {
   return (neuron0x25468f0()*-0.425212);
}

double NNfunction_ss_cLsL::synapse0x254ee50() {
   return (neuron0x2546c30()*0.249659);
}

double NNfunction_ss_cLsL::synapse0x254ee90() {
   return (neuron0x2546f70()*0.416338);
}

double NNfunction_ss_cLsL::synapse0x254eed0() {
   return (neuron0x25472b0()*-0.21586);
}

double NNfunction_ss_cLsL::synapse0x254ef10() {
   return (neuron0x25475f0()*-0.0100882);
}

double NNfunction_ss_cLsL::synapse0x254ef50() {
   return (neuron0x2547930()*-0.0354539);
}

double NNfunction_ss_cLsL::synapse0x254ef90() {
   return (neuron0x2547c70()*-0.272987);
}

double NNfunction_ss_cLsL::synapse0x254efd0() {
   return (neuron0x2547fb0()*0.042897);
}

double NNfunction_ss_cLsL::synapse0x254f010() {
   return (neuron0x25482f0()*-0.0311837);
}

double NNfunction_ss_cLsL::synapse0x254f050() {
   return (neuron0x2548630()*-0.102384);
}

double NNfunction_ss_cLsL::synapse0x254eae0() {
   return (neuron0x2548970()*-0.0443692);
}

double NNfunction_ss_cLsL::synapse0x254eb20() {
   return (neuron0x2548ed0()*-0.307227);
}

double NNfunction_ss_cLsL::synapse0x254f1a0() {
   return (neuron0x25490f0()*0.104905);
}

double NNfunction_ss_cLsL::synapse0x254f1e0() {
   return (neuron0x2549430()*-0.141049);
}

double NNfunction_ss_cLsL::synapse0x254f220() {
   return (neuron0x2549770()*-0.102581);
}

double NNfunction_ss_cLsL::synapse0x254f260() {
   return (neuron0x2549ab0()*-0.0281489);
}

double NNfunction_ss_cLsL::synapse0x254f2a0() {
   return (neuron0x2549df0()*-0.290834);
}

double NNfunction_ss_cLsL::synapse0x254f2e0() {
   return (neuron0x254a130()*0.0451715);
}

double NNfunction_ss_cLsL::synapse0x2548dc0() {
   return (neuron0x2545570()*0.48868);
}

double NNfunction_ss_cLsL::synapse0x2548e00() {
   return (neuron0x25458b0()*0.348445);
}

double NNfunction_ss_cLsL::synapse0x2548e40() {
   return (neuron0x2545bf0()*-0.569601);
}

double NNfunction_ss_cLsL::synapse0x2548e80() {
   return (neuron0x2545f30()*0.0693311);
}

double NNfunction_ss_cLsL::synapse0x254f870() {
   return (neuron0x2546270()*-0.0968417);
}

double NNfunction_ss_cLsL::synapse0x254f8b0() {
   return (neuron0x25465b0()*0.170308);
}

double NNfunction_ss_cLsL::synapse0x254f8f0() {
   return (neuron0x25468f0()*-0.121738);
}

double NNfunction_ss_cLsL::synapse0x254f930() {
   return (neuron0x2546c30()*-0.295538);
}

double NNfunction_ss_cLsL::synapse0x254f970() {
   return (neuron0x2546f70()*-0.212542);
}

double NNfunction_ss_cLsL::synapse0x254f9b0() {
   return (neuron0x25472b0()*-1.57111);
}

double NNfunction_ss_cLsL::synapse0x254f9f0() {
   return (neuron0x25475f0()*0.315852);
}

double NNfunction_ss_cLsL::synapse0x254fa30() {
   return (neuron0x2547930()*0.648532);
}

double NNfunction_ss_cLsL::synapse0x254fa70() {
   return (neuron0x2547c70()*0.169543);
}

double NNfunction_ss_cLsL::synapse0x254fab0() {
   return (neuron0x2547fb0()*0.0173846);
}

double NNfunction_ss_cLsL::synapse0x254faf0() {
   return (neuron0x25482f0()*-0.508877);
}

double NNfunction_ss_cLsL::synapse0x254fb30() {
   return (neuron0x2548630()*0.483233);
}

double NNfunction_ss_cLsL::synapse0x254f4b0() {
   return (neuron0x2548970()*-0.114385);
}

double NNfunction_ss_cLsL::synapse0x254f4f0() {
   return (neuron0x2548ed0()*1.00718);
}

double NNfunction_ss_cLsL::synapse0x254fc80() {
   return (neuron0x25490f0()*0.626736);
}

double NNfunction_ss_cLsL::synapse0x254fcc0() {
   return (neuron0x2549430()*-0.343744);
}

double NNfunction_ss_cLsL::synapse0x254fd00() {
   return (neuron0x2549770()*0.196435);
}

double NNfunction_ss_cLsL::synapse0x254fd40() {
   return (neuron0x2549ab0()*-0.639106);
}

double NNfunction_ss_cLsL::synapse0x254fd80() {
   return (neuron0x2549df0()*0.640366);
}

double NNfunction_ss_cLsL::synapse0x254fdc0() {
   return (neuron0x254a130()*-0.05321);
}

double NNfunction_ss_cLsL::synapse0x2550140() {
   return (neuron0x2545570()*-0.146744);
}

double NNfunction_ss_cLsL::synapse0x2550180() {
   return (neuron0x25458b0()*0.120571);
}

double NNfunction_ss_cLsL::synapse0x25501c0() {
   return (neuron0x2545bf0()*-0.725879);
}

double NNfunction_ss_cLsL::synapse0x2550200() {
   return (neuron0x2545f30()*1.19256);
}

double NNfunction_ss_cLsL::synapse0x2550240() {
   return (neuron0x2546270()*-0.129754);
}

double NNfunction_ss_cLsL::synapse0x2550280() {
   return (neuron0x25465b0()*-0.344756);
}

double NNfunction_ss_cLsL::synapse0x25502c0() {
   return (neuron0x25468f0()*-0.393846);
}

double NNfunction_ss_cLsL::synapse0x2550300() {
   return (neuron0x2546c30()*-0.189044);
}

double NNfunction_ss_cLsL::synapse0x2550340() {
   return (neuron0x2546f70()*0.102569);
}

double NNfunction_ss_cLsL::synapse0x2550380() {
   return (neuron0x25472b0()*-0.351917);
}

double NNfunction_ss_cLsL::synapse0x25503c0() {
   return (neuron0x25475f0()*0.126586);
}

double NNfunction_ss_cLsL::synapse0x2550400() {
   return (neuron0x2547930()*-0.296173);
}

double NNfunction_ss_cLsL::synapse0x2550440() {
   return (neuron0x2547c70()*0.48675);
}

double NNfunction_ss_cLsL::synapse0x2550480() {
   return (neuron0x2547fb0()*0.135775);
}

double NNfunction_ss_cLsL::synapse0x25504c0() {
   return (neuron0x25482f0()*0.288031);
}

double NNfunction_ss_cLsL::synapse0x2550500() {
   return (neuron0x2548630()*-0.171144);
}

double NNfunction_ss_cLsL::synapse0x254ff90() {
   return (neuron0x2548970()*0.127554);
}

double NNfunction_ss_cLsL::synapse0x254ffd0() {
   return (neuron0x2548ed0()*-0.310492);
}

double NNfunction_ss_cLsL::synapse0x2550650() {
   return (neuron0x25490f0()*-0.0924559);
}

double NNfunction_ss_cLsL::synapse0x2550690() {
   return (neuron0x2549430()*-0.149197);
}

double NNfunction_ss_cLsL::synapse0x25506d0() {
   return (neuron0x2549770()*0.192547);
}

double NNfunction_ss_cLsL::synapse0x2550710() {
   return (neuron0x2549ab0()*0.335388);
}

double NNfunction_ss_cLsL::synapse0x2550750() {
   return (neuron0x2549df0()*-0.182885);
}

double NNfunction_ss_cLsL::synapse0x2550790() {
   return (neuron0x254a130()*0.188559);
}

double NNfunction_ss_cLsL::synapse0x2550b10() {
   return (neuron0x2545570()*-0.0898902);
}

double NNfunction_ss_cLsL::synapse0x2550b50() {
   return (neuron0x25458b0()*0.0039538);
}

double NNfunction_ss_cLsL::synapse0x2550b90() {
   return (neuron0x2545bf0()*0.128328);
}

double NNfunction_ss_cLsL::synapse0x2550bd0() {
   return (neuron0x2545f30()*-0.121988);
}

double NNfunction_ss_cLsL::synapse0x2550c10() {
   return (neuron0x2546270()*-0.0149852);
}

double NNfunction_ss_cLsL::synapse0x2550c50() {
   return (neuron0x25465b0()*0.0316078);
}

double NNfunction_ss_cLsL::synapse0x2550c90() {
   return (neuron0x25468f0()*0.076271);
}

double NNfunction_ss_cLsL::synapse0x2550cd0() {
   return (neuron0x2546c30()*0.0598002);
}

double NNfunction_ss_cLsL::synapse0x2550d10() {
   return (neuron0x2546f70()*0.060104);
}

double NNfunction_ss_cLsL::synapse0x2550d50() {
   return (neuron0x25472b0()*-0.00113427);
}

double NNfunction_ss_cLsL::synapse0x2550d90() {
   return (neuron0x25475f0()*0.0137894);
}

double NNfunction_ss_cLsL::synapse0x2550dd0() {
   return (neuron0x2547930()*0.0272433);
}

double NNfunction_ss_cLsL::synapse0x2550e10() {
   return (neuron0x2547c70()*-4.04561);
}

double NNfunction_ss_cLsL::synapse0x2550e50() {
   return (neuron0x2547fb0()*-0.168575);
}

double NNfunction_ss_cLsL::synapse0x2550e90() {
   return (neuron0x25482f0()*0.0036782);
}

double NNfunction_ss_cLsL::synapse0x2550ed0() {
   return (neuron0x2548630()*0.0309605);
}

double NNfunction_ss_cLsL::synapse0x2550960() {
   return (neuron0x2548970()*-0.116946);
}

double NNfunction_ss_cLsL::synapse0x25509a0() {
   return (neuron0x2548ed0()*-0.0115729);
}

double NNfunction_ss_cLsL::synapse0x254d730() {
   return (neuron0x25490f0()*-0.0553648);
}

double NNfunction_ss_cLsL::synapse0x254d770() {
   return (neuron0x2549430()*0.0594768);
}

double NNfunction_ss_cLsL::synapse0x254d7b0() {
   return (neuron0x2549770()*0.050904);
}

double NNfunction_ss_cLsL::synapse0x254d7f0() {
   return (neuron0x2549ab0()*-0.00371104);
}

double NNfunction_ss_cLsL::synapse0x254d830() {
   return (neuron0x2549df0()*0.0404957);
}

double NNfunction_ss_cLsL::synapse0x254d870() {
   return (neuron0x254a130()*-0.0244473);
}

double NNfunction_ss_cLsL::synapse0x254dbf0() {
   return (neuron0x2545570()*-0.107788);
}

double NNfunction_ss_cLsL::synapse0x254dc30() {
   return (neuron0x25458b0()*0.154384);
}

double NNfunction_ss_cLsL::synapse0x254dc70() {
   return (neuron0x2545bf0()*0.188306);
}

double NNfunction_ss_cLsL::synapse0x254dcb0() {
   return (neuron0x2545f30()*0.13346);
}

double NNfunction_ss_cLsL::synapse0x254dcf0() {
   return (neuron0x2546270()*0.105017);
}

double NNfunction_ss_cLsL::synapse0x254dd30() {
   return (neuron0x25465b0()*-0.0421078);
}

double NNfunction_ss_cLsL::synapse0x254dd70() {
   return (neuron0x25468f0()*-0.0600056);
}

double NNfunction_ss_cLsL::synapse0x254ddb0() {
   return (neuron0x2546c30()*0.0295557);
}

double NNfunction_ss_cLsL::synapse0x254ddf0() {
   return (neuron0x2546f70()*0.107817);
}

double NNfunction_ss_cLsL::synapse0x254de30() {
   return (neuron0x25472b0()*-0.0932791);
}

double NNfunction_ss_cLsL::synapse0x254de70() {
   return (neuron0x25475f0()*-0.0961097);
}

double NNfunction_ss_cLsL::synapse0x254deb0() {
   return (neuron0x2547930()*-0.861545);
}

double NNfunction_ss_cLsL::synapse0x254def0() {
   return (neuron0x2547c70()*-0.231168);
}

double NNfunction_ss_cLsL::synapse0x2552030() {
   return (neuron0x2547fb0()*0.432627);
}

double NNfunction_ss_cLsL::synapse0x2552070() {
   return (neuron0x25482f0()*-1.68038);
}

double NNfunction_ss_cLsL::synapse0x25520b0() {
   return (neuron0x2548630()*-0.507712);
}

double NNfunction_ss_cLsL::synapse0x254da40() {
   return (neuron0x2548970()*0.376524);
}

double NNfunction_ss_cLsL::synapse0x254da80() {
   return (neuron0x2548ed0()*0.0540256);
}

double NNfunction_ss_cLsL::synapse0x2552200() {
   return (neuron0x25490f0()*-0.298672);
}

double NNfunction_ss_cLsL::synapse0x2552240() {
   return (neuron0x2549430()*-0.0611871);
}

double NNfunction_ss_cLsL::synapse0x2552280() {
   return (neuron0x2549770()*-0.535084);
}

double NNfunction_ss_cLsL::synapse0x25522c0() {
   return (neuron0x2549ab0()*-0.111591);
}

double NNfunction_ss_cLsL::synapse0x2552300() {
   return (neuron0x2549df0()*-0.113659);
}

double NNfunction_ss_cLsL::synapse0x2552340() {
   return (neuron0x254a130()*0.0179501);
}

double NNfunction_ss_cLsL::synapse0x25526c0() {
   return (neuron0x2545570()*-0.465762);
}

double NNfunction_ss_cLsL::synapse0x2552700() {
   return (neuron0x25458b0()*-0.0100341);
}

double NNfunction_ss_cLsL::synapse0x2552740() {
   return (neuron0x2545bf0()*0.197419);
}

double NNfunction_ss_cLsL::synapse0x2552780() {
   return (neuron0x2545f30()*0.381839);
}

double NNfunction_ss_cLsL::synapse0x25527c0() {
   return (neuron0x2546270()*0.148082);
}

double NNfunction_ss_cLsL::synapse0x2552800() {
   return (neuron0x25465b0()*0.118198);
}

double NNfunction_ss_cLsL::synapse0x2552840() {
   return (neuron0x25468f0()*-0.391127);
}

double NNfunction_ss_cLsL::synapse0x2552880() {
   return (neuron0x2546c30()*0.126239);
}

double NNfunction_ss_cLsL::synapse0x25528c0() {
   return (neuron0x2546f70()*0.442354);
}

double NNfunction_ss_cLsL::synapse0x2552900() {
   return (neuron0x25472b0()*-0.133673);
}

double NNfunction_ss_cLsL::synapse0x2552940() {
   return (neuron0x25475f0()*-0.359343);
}

double NNfunction_ss_cLsL::synapse0x2552980() {
   return (neuron0x2547930()*-0.618356);
}

double NNfunction_ss_cLsL::synapse0x25529c0() {
   return (neuron0x2547c70()*0.176985);
}

double NNfunction_ss_cLsL::synapse0x2552a00() {
   return (neuron0x2547fb0()*0.0265992);
}

double NNfunction_ss_cLsL::synapse0x2552a40() {
   return (neuron0x25482f0()*-0.0201689);
}

double NNfunction_ss_cLsL::synapse0x2552a80() {
   return (neuron0x2548630()*0.309671);
}

double NNfunction_ss_cLsL::synapse0x2552510() {
   return (neuron0x2548970()*0.254702);
}

double NNfunction_ss_cLsL::synapse0x2552550() {
   return (neuron0x2548ed0()*-0.647474);
}

double NNfunction_ss_cLsL::synapse0x2552bd0() {
   return (neuron0x25490f0()*0.684121);
}

double NNfunction_ss_cLsL::synapse0x2552c10() {
   return (neuron0x2549430()*-0.0589302);
}

double NNfunction_ss_cLsL::synapse0x2552c50() {
   return (neuron0x2549770()*-0.172979);
}

double NNfunction_ss_cLsL::synapse0x2552c90() {
   return (neuron0x2549ab0()*0.27471);
}

double NNfunction_ss_cLsL::synapse0x2552cd0() {
   return (neuron0x2549df0()*-0.0725582);
}

double NNfunction_ss_cLsL::synapse0x2552d10() {
   return (neuron0x254a130()*-0.00271588);
}

double NNfunction_ss_cLsL::synapse0x2553090() {
   return (neuron0x2545570()*0.962037);
}

double NNfunction_ss_cLsL::synapse0x25530d0() {
   return (neuron0x25458b0()*-0.676436);
}

double NNfunction_ss_cLsL::synapse0x2553110() {
   return (neuron0x2545bf0()*0.310597);
}

double NNfunction_ss_cLsL::synapse0x2553150() {
   return (neuron0x2545f30()*-0.676604);
}

double NNfunction_ss_cLsL::synapse0x2553190() {
   return (neuron0x2546270()*-0.134041);
}

double NNfunction_ss_cLsL::synapse0x25531d0() {
   return (neuron0x25465b0()*-0.161132);
}

double NNfunction_ss_cLsL::synapse0x2553210() {
   return (neuron0x25468f0()*-0.107196);
}

double NNfunction_ss_cLsL::synapse0x2553250() {
   return (neuron0x2546c30()*-0.354619);
}

double NNfunction_ss_cLsL::synapse0x2553290() {
   return (neuron0x2546f70()*-0.322834);
}

double NNfunction_ss_cLsL::synapse0x25532d0() {
   return (neuron0x25472b0()*-0.255242);
}

double NNfunction_ss_cLsL::synapse0x2553310() {
   return (neuron0x25475f0()*0.484898);
}

double NNfunction_ss_cLsL::synapse0x2553350() {
   return (neuron0x2547930()*0.920994);
}

double NNfunction_ss_cLsL::synapse0x2553390() {
   return (neuron0x2547c70()*-0.208266);
}

double NNfunction_ss_cLsL::synapse0x25533d0() {
   return (neuron0x2547fb0()*-0.510124);
}

double NNfunction_ss_cLsL::synapse0x2553410() {
   return (neuron0x25482f0()*-0.03174);
}

double NNfunction_ss_cLsL::synapse0x2553450() {
   return (neuron0x2548630()*-0.220739);
}

double NNfunction_ss_cLsL::synapse0x2552ee0() {
   return (neuron0x2548970()*0.31632);
}

double NNfunction_ss_cLsL::synapse0x2552f20() {
   return (neuron0x2548ed0()*0.163742);
}

double NNfunction_ss_cLsL::synapse0x25535a0() {
   return (neuron0x25490f0()*-1.09284);
}

double NNfunction_ss_cLsL::synapse0x25535e0() {
   return (neuron0x2549430()*-0.19624);
}

double NNfunction_ss_cLsL::synapse0x2553620() {
   return (neuron0x2549770()*0.0855796);
}

double NNfunction_ss_cLsL::synapse0x2553660() {
   return (neuron0x2549ab0()*0.0138541);
}

double NNfunction_ss_cLsL::synapse0x25536a0() {
   return (neuron0x2549df0()*0.229908);
}

double NNfunction_ss_cLsL::synapse0x25536e0() {
   return (neuron0x254a130()*0.733004);
}

double NNfunction_ss_cLsL::synapse0x2553a60() {
   return (neuron0x2545570()*0.027741);
}

double NNfunction_ss_cLsL::synapse0x2553aa0() {
   return (neuron0x25458b0()*-0.25945);
}

double NNfunction_ss_cLsL::synapse0x2553ae0() {
   return (neuron0x2545bf0()*-0.185914);
}

double NNfunction_ss_cLsL::synapse0x2553b20() {
   return (neuron0x2545f30()*-1.37919);
}

double NNfunction_ss_cLsL::synapse0x2553b60() {
   return (neuron0x2546270()*0.185558);
}

double NNfunction_ss_cLsL::synapse0x2553ba0() {
   return (neuron0x25465b0()*0.317997);
}

double NNfunction_ss_cLsL::synapse0x2553be0() {
   return (neuron0x25468f0()*0.159103);
}

double NNfunction_ss_cLsL::synapse0x2553c20() {
   return (neuron0x2546c30()*-0.123525);
}

double NNfunction_ss_cLsL::synapse0x2553c60() {
   return (neuron0x2546f70()*-0.269535);
}

double NNfunction_ss_cLsL::synapse0x2553ca0() {
   return (neuron0x25472b0()*0.0140842);
}

double NNfunction_ss_cLsL::synapse0x2553ce0() {
   return (neuron0x25475f0()*-0.16269);
}

double NNfunction_ss_cLsL::synapse0x2553d20() {
   return (neuron0x2547930()*0.100081);
}

double NNfunction_ss_cLsL::synapse0x2553d60() {
   return (neuron0x2547c70()*-0.552724);
}

double NNfunction_ss_cLsL::synapse0x2553da0() {
   return (neuron0x2547fb0()*0.075747);
}

double NNfunction_ss_cLsL::synapse0x2553de0() {
   return (neuron0x25482f0()*-0.11827);
}

double NNfunction_ss_cLsL::synapse0x2553e20() {
   return (neuron0x2548630()*0.0462409);
}

double NNfunction_ss_cLsL::synapse0x25538b0() {
   return (neuron0x2548970()*0.000467626);
}

double NNfunction_ss_cLsL::synapse0x25538f0() {
   return (neuron0x2548ed0()*-0.266869);
}

double NNfunction_ss_cLsL::synapse0x2553f70() {
   return (neuron0x25490f0()*0.281607);
}

double NNfunction_ss_cLsL::synapse0x2553fb0() {
   return (neuron0x2549430()*-0.0245077);
}

double NNfunction_ss_cLsL::synapse0x2553ff0() {
   return (neuron0x2549770()*0.0446888);
}

double NNfunction_ss_cLsL::synapse0x2554030() {
   return (neuron0x2549ab0()*0.078405);
}

double NNfunction_ss_cLsL::synapse0x2554070() {
   return (neuron0x2549df0()*0.168479);
}

double NNfunction_ss_cLsL::synapse0x25540b0() {
   return (neuron0x254a130()*-0.129543);
}

double NNfunction_ss_cLsL::synapse0x2554430() {
   return (neuron0x2545570()*0.31108);
}

double NNfunction_ss_cLsL::synapse0x2545790() {
   return (neuron0x25458b0()*-0.149336);
}

double NNfunction_ss_cLsL::synapse0x25457d0() {
   return (neuron0x2545bf0()*0.854309);
}

double NNfunction_ss_cLsL::synapse0x2545ad0() {
   return (neuron0x2545f30()*-0.0394809);
}

double NNfunction_ss_cLsL::synapse0x2545b10() {
   return (neuron0x2546270()*-0.0129281);
}

double NNfunction_ss_cLsL::synapse0x2545e10() {
   return (neuron0x25465b0()*0.111096);
}

double NNfunction_ss_cLsL::synapse0x2545e50() {
   return (neuron0x25468f0()*0.00777633);
}

double NNfunction_ss_cLsL::synapse0x2546150() {
   return (neuron0x2546c30()*0.451488);
}

double NNfunction_ss_cLsL::synapse0x2546190() {
   return (neuron0x2546f70()*-0.0267796);
}

double NNfunction_ss_cLsL::synapse0x2546490() {
   return (neuron0x25472b0()*-0.0938716);
}

double NNfunction_ss_cLsL::synapse0x25464d0() {
   return (neuron0x25475f0()*-0.133998);
}

double NNfunction_ss_cLsL::synapse0x25467d0() {
   return (neuron0x2547930()*-0.363718);
}

double NNfunction_ss_cLsL::synapse0x2546810() {
   return (neuron0x2547c70()*-0.378359);
}

double NNfunction_ss_cLsL::synapse0x2546b10() {
   return (neuron0x2547fb0()*-0.105928);
}

double NNfunction_ss_cLsL::synapse0x2546b50() {
   return (neuron0x25482f0()*-0.14713);
}

double NNfunction_ss_cLsL::synapse0x2546e50() {
   return (neuron0x2548630()*-0.360219);
}

double NNfunction_ss_cLsL::synapse0x2546e90() {
   return (neuron0x2548970()*0.101647);
}

double NNfunction_ss_cLsL::synapse0x2547190() {
   return (neuron0x2548ed0()*-0.392604);
}

double NNfunction_ss_cLsL::synapse0x25471d0() {
   return (neuron0x25490f0()*-0.358342);
}

double NNfunction_ss_cLsL::synapse0x25474d0() {
   return (neuron0x2549430()*0.260528);
}

double NNfunction_ss_cLsL::synapse0x2547510() {
   return (neuron0x2549770()*0.0290441);
}

double NNfunction_ss_cLsL::synapse0x2547810() {
   return (neuron0x2549ab0()*0.356075);
}

double NNfunction_ss_cLsL::synapse0x2547850() {
   return (neuron0x2549df0()*0.141148);
}

double NNfunction_ss_cLsL::synapse0x2547b50() {
   return (neuron0x254a130()*-0.0871774);
}

double NNfunction_ss_cLsL::synapse0x2547b90() {
   return (neuron0x2545570()*0.00891175);
}

double NNfunction_ss_cLsL::synapse0x2548850() {
   return (neuron0x25458b0()*0.0178762);
}

double NNfunction_ss_cLsL::synapse0x2548890() {
   return (neuron0x2545bf0()*0.0792719);
}

double NNfunction_ss_cLsL::synapse0x2554280() {
   return (neuron0x2545f30()*-15.6223);
}

double NNfunction_ss_cLsL::synapse0x25542c0() {
   return (neuron0x2546270()*-0.019491);
}

double NNfunction_ss_cLsL::synapse0x2548b90() {
   return (neuron0x25465b0()*-0.0338069);
}

double NNfunction_ss_cLsL::synapse0x2548bd0() {
   return (neuron0x25468f0()*-0.0151047);
}

double NNfunction_ss_cLsL::synapse0x22f6b60() {
   return (neuron0x2546c30()*-0.0385384);
}

double NNfunction_ss_cLsL::synapse0x22f6ba0() {
   return (neuron0x2546f70()*-0.00657677);
}

double NNfunction_ss_cLsL::synapse0x2549310() {
   return (neuron0x25472b0()*0.0359698);
}

double NNfunction_ss_cLsL::synapse0x2549350() {
   return (neuron0x25475f0()*0.0391522);
}

double NNfunction_ss_cLsL::synapse0x2549650() {
   return (neuron0x2547930()*0.0173104);
}

double NNfunction_ss_cLsL::synapse0x2549690() {
   return (neuron0x2547c70()*0.433345);
}

double NNfunction_ss_cLsL::synapse0x2549990() {
   return (neuron0x2547fb0()*0.0564101);
}

double NNfunction_ss_cLsL::synapse0x25499d0() {
   return (neuron0x25482f0()*-0.00835846);
}

double NNfunction_ss_cLsL::synapse0x2549cd0() {
   return (neuron0x2548630()*-0.0120758);
}

double NNfunction_ss_cLsL::synapse0x2549d10() {
   return (neuron0x2548970()*0.015468);
}

double NNfunction_ss_cLsL::synapse0x254a010() {
   return (neuron0x2548ed0()*-0.0202294);
}

double NNfunction_ss_cLsL::synapse0x254a050() {
   return (neuron0x25490f0()*0.0664997);
}

double NNfunction_ss_cLsL::synapse0x254a350() {
   return (neuron0x2549430()*-0.0411008);
}

double NNfunction_ss_cLsL::synapse0x254a390() {
   return (neuron0x2549770()*-0.0184541);
}

double NNfunction_ss_cLsL::synapse0x2547e90() {
   return (neuron0x2549ab0()*-0.05485);
}

double NNfunction_ss_cLsL::synapse0x2547ed0() {
   return (neuron0x2549df0()*-0.0506251);
}

double NNfunction_ss_cLsL::synapse0x25561a0() {
   return (neuron0x254a130()*-0.00596784);
}

double NNfunction_ss_cLsL::synapse0x2556520() {
   return (neuron0x2545570()*-0.0165124);
}

double NNfunction_ss_cLsL::synapse0x2556560() {
   return (neuron0x25458b0()*-0.830011);
}

double NNfunction_ss_cLsL::synapse0x25565a0() {
   return (neuron0x2545bf0()*-0.616755);
}

double NNfunction_ss_cLsL::synapse0x25565e0() {
   return (neuron0x2545f30()*0.229092);
}

double NNfunction_ss_cLsL::synapse0x2556620() {
   return (neuron0x2546270()*-0.387234);
}

double NNfunction_ss_cLsL::synapse0x2556660() {
   return (neuron0x25465b0()*0.231548);
}

double NNfunction_ss_cLsL::synapse0x25566a0() {
   return (neuron0x25468f0()*-0.0496082);
}

double NNfunction_ss_cLsL::synapse0x25566e0() {
   return (neuron0x2546c30()*-0.0326448);
}

double NNfunction_ss_cLsL::synapse0x2556720() {
   return (neuron0x2546f70()*-0.136976);
}

double NNfunction_ss_cLsL::synapse0x2556760() {
   return (neuron0x25472b0()*-0.0940558);
}

double NNfunction_ss_cLsL::synapse0x25567a0() {
   return (neuron0x25475f0()*0.22669);
}

double NNfunction_ss_cLsL::synapse0x25567e0() {
   return (neuron0x2547930()*-0.24721);
}

double NNfunction_ss_cLsL::synapse0x2556820() {
   return (neuron0x2547c70()*-0.444115);
}

double NNfunction_ss_cLsL::synapse0x2556860() {
   return (neuron0x2547fb0()*0.45012);
}

double NNfunction_ss_cLsL::synapse0x25568a0() {
   return (neuron0x25482f0()*-0.234183);
}

double NNfunction_ss_cLsL::synapse0x25568e0() {
   return (neuron0x2548630()*-0.576686);
}

double NNfunction_ss_cLsL::synapse0x2556370() {
   return (neuron0x2548970()*0.307007);
}

double NNfunction_ss_cLsL::synapse0x25563b0() {
   return (neuron0x2548ed0()*-0.302034);
}

double NNfunction_ss_cLsL::synapse0x2556a30() {
   return (neuron0x25490f0()*0.0329133);
}

double NNfunction_ss_cLsL::synapse0x2556a70() {
   return (neuron0x2549430()*-0.117516);
}

double NNfunction_ss_cLsL::synapse0x2556ab0() {
   return (neuron0x2549770()*-0.154117);
}

double NNfunction_ss_cLsL::synapse0x2556af0() {
   return (neuron0x2549ab0()*0.0198473);
}

double NNfunction_ss_cLsL::synapse0x2556b30() {
   return (neuron0x2549df0()*0.280867);
}

double NNfunction_ss_cLsL::synapse0x2556b70() {
   return (neuron0x254a130()*0.227252);
}

double NNfunction_ss_cLsL::synapse0x2556ef0() {
   return (neuron0x2545570()*0.0767109);
}

double NNfunction_ss_cLsL::synapse0x2556f30() {
   return (neuron0x25458b0()*-0.137537);
}

double NNfunction_ss_cLsL::synapse0x2556f70() {
   return (neuron0x2545bf0()*-0.301441);
}

double NNfunction_ss_cLsL::synapse0x2556fb0() {
   return (neuron0x2545f30()*1.77907);
}

double NNfunction_ss_cLsL::synapse0x2556ff0() {
   return (neuron0x2546270()*0.0818182);
}

double NNfunction_ss_cLsL::synapse0x2557030() {
   return (neuron0x25465b0()*-0.0120394);
}

double NNfunction_ss_cLsL::synapse0x2557070() {
   return (neuron0x25468f0()*-0.40829);
}

double NNfunction_ss_cLsL::synapse0x25570b0() {
   return (neuron0x2546c30()*-0.150959);
}

double NNfunction_ss_cLsL::synapse0x25570f0() {
   return (neuron0x2546f70()*-0.23812);
}

double NNfunction_ss_cLsL::synapse0x2557130() {
   return (neuron0x25472b0()*-0.088629);
}

double NNfunction_ss_cLsL::synapse0x2557170() {
   return (neuron0x25475f0()*-0.336977);
}

double NNfunction_ss_cLsL::synapse0x25571b0() {
   return (neuron0x2547930()*-0.360588);
}

double NNfunction_ss_cLsL::synapse0x25571f0() {
   return (neuron0x2547c70()*0.325491);
}

double NNfunction_ss_cLsL::synapse0x2557230() {
   return (neuron0x2547fb0()*-0.110113);
}

double NNfunction_ss_cLsL::synapse0x2557270() {
   return (neuron0x25482f0()*-0.382772);
}

double NNfunction_ss_cLsL::synapse0x25572b0() {
   return (neuron0x2548630()*-0.000566317);
}

double NNfunction_ss_cLsL::synapse0x2556d40() {
   return (neuron0x2548970()*-0.379);
}

double NNfunction_ss_cLsL::synapse0x2556d80() {
   return (neuron0x2548ed0()*-0.16783);
}

double NNfunction_ss_cLsL::synapse0x2557400() {
   return (neuron0x25490f0()*-0.290588);
}

double NNfunction_ss_cLsL::synapse0x2557440() {
   return (neuron0x2549430()*-0.258715);
}

double NNfunction_ss_cLsL::synapse0x2557480() {
   return (neuron0x2549770()*-0.167013);
}

double NNfunction_ss_cLsL::synapse0x25574c0() {
   return (neuron0x2549ab0()*0.228746);
}

double NNfunction_ss_cLsL::synapse0x2557500() {
   return (neuron0x2549df0()*0.0803552);
}

double NNfunction_ss_cLsL::synapse0x2557540() {
   return (neuron0x254a130()*0.116302);
}

double NNfunction_ss_cLsL::synapse0x25578c0() {
   return (neuron0x2545570()*-0.0521278);
}

double NNfunction_ss_cLsL::synapse0x2557900() {
   return (neuron0x25458b0()*0.583687);
}

double NNfunction_ss_cLsL::synapse0x2557940() {
   return (neuron0x2545bf0()*-0.408492);
}

double NNfunction_ss_cLsL::synapse0x2557980() {
   return (neuron0x2545f30()*-0.144377);
}

double NNfunction_ss_cLsL::synapse0x25579c0() {
   return (neuron0x2546270()*0.0921917);
}

double NNfunction_ss_cLsL::synapse0x2557a00() {
   return (neuron0x25465b0()*-0.270998);
}

double NNfunction_ss_cLsL::synapse0x2557a40() {
   return (neuron0x25468f0()*0.00385394);
}

double NNfunction_ss_cLsL::synapse0x2557a80() {
   return (neuron0x2546c30()*0.567783);
}

double NNfunction_ss_cLsL::synapse0x2557ac0() {
   return (neuron0x2546f70()*0.206778);
}

double NNfunction_ss_cLsL::synapse0x2557b00() {
   return (neuron0x25472b0()*-0.0506414);
}

double NNfunction_ss_cLsL::synapse0x2557b40() {
   return (neuron0x25475f0()*-0.0190083);
}

double NNfunction_ss_cLsL::synapse0x2557b80() {
   return (neuron0x2547930()*-0.493615);
}

double NNfunction_ss_cLsL::synapse0x2557bc0() {
   return (neuron0x2547c70()*0.23366);
}

double NNfunction_ss_cLsL::synapse0x2557c00() {
   return (neuron0x2547fb0()*-0.451534);
}

double NNfunction_ss_cLsL::synapse0x2557c40() {
   return (neuron0x25482f0()*0.484959);
}

double NNfunction_ss_cLsL::synapse0x2557c80() {
   return (neuron0x2548630()*-0.182191);
}

double NNfunction_ss_cLsL::synapse0x2557710() {
   return (neuron0x2548970()*0.0476827);
}

double NNfunction_ss_cLsL::synapse0x2557750() {
   return (neuron0x2548ed0()*-0.226911);
}

double NNfunction_ss_cLsL::synapse0x2557dd0() {
   return (neuron0x25490f0()*0.710673);
}

double NNfunction_ss_cLsL::synapse0x2557e10() {
   return (neuron0x2549430()*0.162203);
}

double NNfunction_ss_cLsL::synapse0x2557e50() {
   return (neuron0x2549770()*-0.0258473);
}

double NNfunction_ss_cLsL::synapse0x2557e90() {
   return (neuron0x2549ab0()*0.497509);
}

double NNfunction_ss_cLsL::synapse0x2557ed0() {
   return (neuron0x2549df0()*-0.63901);
}

double NNfunction_ss_cLsL::synapse0x2557f10() {
   return (neuron0x254a130()*0.0726027);
}

double NNfunction_ss_cLsL::synapse0x2558290() {
   return (neuron0x2545570()*0.170132);
}

double NNfunction_ss_cLsL::synapse0x25582d0() {
   return (neuron0x25458b0()*0.212603);
}

double NNfunction_ss_cLsL::synapse0x2558310() {
   return (neuron0x2545bf0()*-0.931209);
}

double NNfunction_ss_cLsL::synapse0x2558350() {
   return (neuron0x2545f30()*0.0179531);
}

double NNfunction_ss_cLsL::synapse0x2558390() {
   return (neuron0x2546270()*-0.487076);
}

double NNfunction_ss_cLsL::synapse0x25583d0() {
   return (neuron0x25465b0()*-0.35595);
}

double NNfunction_ss_cLsL::synapse0x2558410() {
   return (neuron0x25468f0()*0.2157);
}

double NNfunction_ss_cLsL::synapse0x2558450() {
   return (neuron0x2546c30()*-0.0754386);
}

double NNfunction_ss_cLsL::synapse0x2558490() {
   return (neuron0x2546f70()*-0.0565622);
}

double NNfunction_ss_cLsL::synapse0x25584d0() {
   return (neuron0x25472b0()*0.383776);
}

double NNfunction_ss_cLsL::synapse0x2558510() {
   return (neuron0x25475f0()*0.218481);
}

double NNfunction_ss_cLsL::synapse0x2558550() {
   return (neuron0x2547930()*0.198111);
}

double NNfunction_ss_cLsL::synapse0x2558590() {
   return (neuron0x2547c70()*0.695703);
}

double NNfunction_ss_cLsL::synapse0x25585d0() {
   return (neuron0x2547fb0()*0.0505284);
}

double NNfunction_ss_cLsL::synapse0x2558610() {
   return (neuron0x25482f0()*-0.797684);
}

double NNfunction_ss_cLsL::synapse0x2558650() {
   return (neuron0x2548630()*0.0136184);
}

double NNfunction_ss_cLsL::synapse0x25580e0() {
   return (neuron0x2548970()*-0.378891);
}

double NNfunction_ss_cLsL::synapse0x2558120() {
   return (neuron0x2548ed0()*0.469022);
}

double NNfunction_ss_cLsL::synapse0x25587a0() {
   return (neuron0x25490f0()*0.15071);
}

double NNfunction_ss_cLsL::synapse0x25587e0() {
   return (neuron0x2549430()*-0.20608);
}

double NNfunction_ss_cLsL::synapse0x2558820() {
   return (neuron0x2549770()*0.440963);
}

double NNfunction_ss_cLsL::synapse0x2558860() {
   return (neuron0x2549ab0()*0.998416);
}

double NNfunction_ss_cLsL::synapse0x25588a0() {
   return (neuron0x2549df0()*-0.197911);
}

double NNfunction_ss_cLsL::synapse0x25588e0() {
   return (neuron0x254a130()*-0.531474);
}

double NNfunction_ss_cLsL::synapse0x2558c60() {
   return (neuron0x2545570()*-0.00203464);
}

double NNfunction_ss_cLsL::synapse0x2558ca0() {
   return (neuron0x25458b0()*0.0077606);
}

double NNfunction_ss_cLsL::synapse0x2558ce0() {
   return (neuron0x2545bf0()*-0.106426);
}

double NNfunction_ss_cLsL::synapse0x2558d20() {
   return (neuron0x2545f30()*0.0893213);
}

double NNfunction_ss_cLsL::synapse0x2558d60() {
   return (neuron0x2546270()*0.007236);
}

double NNfunction_ss_cLsL::synapse0x2558da0() {
   return (neuron0x25465b0()*0.0080278);
}

double NNfunction_ss_cLsL::synapse0x2558de0() {
   return (neuron0x25468f0()*0.0171895);
}

double NNfunction_ss_cLsL::synapse0x2558e20() {
   return (neuron0x2546c30()*-0.0011735);
}

double NNfunction_ss_cLsL::synapse0x2558e60() {
   return (neuron0x2546f70()*-0.00692808);
}

double NNfunction_ss_cLsL::synapse0x2551020() {
   return (neuron0x25472b0()*-0.000343607);
}

double NNfunction_ss_cLsL::synapse0x2551060() {
   return (neuron0x25475f0()*-0.00536696);
}

double NNfunction_ss_cLsL::synapse0x25510a0() {
   return (neuron0x2547930()*0.0328402);
}

double NNfunction_ss_cLsL::synapse0x25510e0() {
   return (neuron0x2547c70()*2.49242);
}

double NNfunction_ss_cLsL::synapse0x2551120() {
   return (neuron0x2547fb0()*0.0353557);
}

double NNfunction_ss_cLsL::synapse0x2551160() {
   return (neuron0x25482f0()*0.0225902);
}

double NNfunction_ss_cLsL::synapse0x25511a0() {
   return (neuron0x2548630()*0.0280757);
}

double NNfunction_ss_cLsL::synapse0x2558ab0() {
   return (neuron0x2548970()*0.0485435);
}

double NNfunction_ss_cLsL::synapse0x2558af0() {
   return (neuron0x2548ed0()*0.0104092);
}

double NNfunction_ss_cLsL::synapse0x25512f0() {
   return (neuron0x25490f0()*-0.00033302);
}

double NNfunction_ss_cLsL::synapse0x2551330() {
   return (neuron0x2549430()*0.00588544);
}

double NNfunction_ss_cLsL::synapse0x2551370() {
   return (neuron0x2549770()*0.000154763);
}

double NNfunction_ss_cLsL::synapse0x25513b0() {
   return (neuron0x2549ab0()*-0.00291741);
}

double NNfunction_ss_cLsL::synapse0x25513f0() {
   return (neuron0x2549df0()*0.00244299);
}

double NNfunction_ss_cLsL::synapse0x2551430() {
   return (neuron0x254a130()*-0.00643116);
}

double NNfunction_ss_cLsL::synapse0x25517b0() {
   return (neuron0x2545570()*-0.298473);
}

double NNfunction_ss_cLsL::synapse0x25517f0() {
   return (neuron0x25458b0()*0.299164);
}

double NNfunction_ss_cLsL::synapse0x2551830() {
   return (neuron0x2545bf0()*0.477696);
}

double NNfunction_ss_cLsL::synapse0x2551870() {
   return (neuron0x2545f30()*-0.757874);
}

double NNfunction_ss_cLsL::synapse0x25518b0() {
   return (neuron0x2546270()*-0.0190295);
}

double NNfunction_ss_cLsL::synapse0x25518f0() {
   return (neuron0x25465b0()*-0.262193);
}

double NNfunction_ss_cLsL::synapse0x2551930() {
   return (neuron0x25468f0()*-0.374827);
}

double NNfunction_ss_cLsL::synapse0x2551970() {
   return (neuron0x2546c30()*0.235927);
}

double NNfunction_ss_cLsL::synapse0x25519b0() {
   return (neuron0x2546f70()*0.17539);
}

double NNfunction_ss_cLsL::synapse0x25519f0() {
   return (neuron0x25472b0()*0.13335);
}

double NNfunction_ss_cLsL::synapse0x2551a30() {
   return (neuron0x25475f0()*-0.0225617);
}

double NNfunction_ss_cLsL::synapse0x2551a70() {
   return (neuron0x2547930()*-0.234585);
}

double NNfunction_ss_cLsL::synapse0x2551ab0() {
   return (neuron0x2547c70()*-0.471579);
}

double NNfunction_ss_cLsL::synapse0x2551af0() {
   return (neuron0x2547fb0()*0.126312);
}

double NNfunction_ss_cLsL::synapse0x2551b30() {
   return (neuron0x25482f0()*0.142769);
}

double NNfunction_ss_cLsL::synapse0x2551b70() {
   return (neuron0x2548630()*0.103132);
}

double NNfunction_ss_cLsL::synapse0x2551600() {
   return (neuron0x2548970()*0.19572);
}

double NNfunction_ss_cLsL::synapse0x2551640() {
   return (neuron0x2548ed0()*0.278486);
}

double NNfunction_ss_cLsL::synapse0x2551cc0() {
   return (neuron0x25490f0()*-0.425605);
}

double NNfunction_ss_cLsL::synapse0x2551d00() {
   return (neuron0x2549430()*-0.219541);
}

double NNfunction_ss_cLsL::synapse0x2551d40() {
   return (neuron0x2549770()*-0.106598);
}

double NNfunction_ss_cLsL::synapse0x2551d80() {
   return (neuron0x2549ab0()*-0.0332422);
}

double NNfunction_ss_cLsL::synapse0x2551dc0() {
   return (neuron0x2549df0()*0.0889966);
}

double NNfunction_ss_cLsL::synapse0x2551e00() {
   return (neuron0x254a130()*0.124507);
}

double NNfunction_ss_cLsL::synapse0x2551fd0() {
   return (neuron0x2545570()*-0.148038);
}

double NNfunction_ss_cLsL::synapse0x255b060() {
   return (neuron0x25458b0()*-0.112486);
}

double NNfunction_ss_cLsL::synapse0x255b0a0() {
   return (neuron0x2545bf0()*-1.29299);
}

double NNfunction_ss_cLsL::synapse0x255b0e0() {
   return (neuron0x2545f30()*-0.17258);
}

double NNfunction_ss_cLsL::synapse0x255b120() {
   return (neuron0x2546270()*0.346016);
}

double NNfunction_ss_cLsL::synapse0x255b160() {
   return (neuron0x25465b0()*0.354529);
}

double NNfunction_ss_cLsL::synapse0x255b1a0() {
   return (neuron0x25468f0()*0.272375);
}

double NNfunction_ss_cLsL::synapse0x255b1e0() {
   return (neuron0x2546c30()*-0.0946265);
}

double NNfunction_ss_cLsL::synapse0x255b220() {
   return (neuron0x2546f70()*0.226528);
}

double NNfunction_ss_cLsL::synapse0x255b260() {
   return (neuron0x25472b0()*-0.189811);
}

double NNfunction_ss_cLsL::synapse0x255b2a0() {
   return (neuron0x25475f0()*-0.359776);
}

double NNfunction_ss_cLsL::synapse0x255b2e0() {
   return (neuron0x2547930()*-0.142238);
}

double NNfunction_ss_cLsL::synapse0x255b320() {
   return (neuron0x2547c70()*-1.33587);
}

double NNfunction_ss_cLsL::synapse0x255b360() {
   return (neuron0x2547fb0()*-0.0695367);
}

double NNfunction_ss_cLsL::synapse0x255b3a0() {
   return (neuron0x25482f0()*0.203402);
}

double NNfunction_ss_cLsL::synapse0x255b3e0() {
   return (neuron0x2548630()*0.314414);
}

double NNfunction_ss_cLsL::synapse0x255aeb0() {
   return (neuron0x2548970()*0.0473309);
}

double NNfunction_ss_cLsL::synapse0x255aef0() {
   return (neuron0x2548ed0()*0.321264);
}

double NNfunction_ss_cLsL::synapse0x255b530() {
   return (neuron0x25490f0()*-0.00504839);
}

double NNfunction_ss_cLsL::synapse0x255b570() {
   return (neuron0x2549430()*0.0451872);
}

double NNfunction_ss_cLsL::synapse0x255b5b0() {
   return (neuron0x2549770()*0.114659);
}

double NNfunction_ss_cLsL::synapse0x255b5f0() {
   return (neuron0x2549ab0()*-0.0114934);
}

double NNfunction_ss_cLsL::synapse0x255b630() {
   return (neuron0x2549df0()*-0.165765);
}

double NNfunction_ss_cLsL::synapse0x255b670() {
   return (neuron0x254a130()*-0.252823);
}

double NNfunction_ss_cLsL::synapse0x255b9f0() {
   return (neuron0x2545570()*-0.347085);
}

double NNfunction_ss_cLsL::synapse0x255ba30() {
   return (neuron0x25458b0()*-0.1027);
}

double NNfunction_ss_cLsL::synapse0x255ba70() {
   return (neuron0x2545bf0()*-0.22988);
}

double NNfunction_ss_cLsL::synapse0x255bab0() {
   return (neuron0x2545f30()*-0.253785);
}

double NNfunction_ss_cLsL::synapse0x255baf0() {
   return (neuron0x2546270()*0.267544);
}

double NNfunction_ss_cLsL::synapse0x255bb30() {
   return (neuron0x25465b0()*-0.405805);
}

double NNfunction_ss_cLsL::synapse0x255bb70() {
   return (neuron0x25468f0()*-0.490213);
}

double NNfunction_ss_cLsL::synapse0x255bbb0() {
   return (neuron0x2546c30()*-0.704979);
}

double NNfunction_ss_cLsL::synapse0x255bbf0() {
   return (neuron0x2546f70()*-0.368868);
}

double NNfunction_ss_cLsL::synapse0x255bc30() {
   return (neuron0x25472b0()*0.137621);
}

double NNfunction_ss_cLsL::synapse0x255bc70() {
   return (neuron0x25475f0()*0.26009);
}

double NNfunction_ss_cLsL::synapse0x255bcb0() {
   return (neuron0x2547930()*-0.576445);
}

double NNfunction_ss_cLsL::synapse0x255bcf0() {
   return (neuron0x2547c70()*0.257619);
}

double NNfunction_ss_cLsL::synapse0x255bd30() {
   return (neuron0x2547fb0()*-0.0431845);
}

double NNfunction_ss_cLsL::synapse0x255bd70() {
   return (neuron0x25482f0()*-0.325007);
}

double NNfunction_ss_cLsL::synapse0x255bdb0() {
   return (neuron0x2548630()*-0.24573);
}

double NNfunction_ss_cLsL::synapse0x255b840() {
   return (neuron0x2548970()*0.426651);
}

double NNfunction_ss_cLsL::synapse0x255b880() {
   return (neuron0x2548ed0()*0.039291);
}

double NNfunction_ss_cLsL::synapse0x255bf00() {
   return (neuron0x25490f0()*-0.117359);
}

double NNfunction_ss_cLsL::synapse0x255bf40() {
   return (neuron0x2549430()*-0.359101);
}

double NNfunction_ss_cLsL::synapse0x255bf80() {
   return (neuron0x2549770()*0.294939);
}

double NNfunction_ss_cLsL::synapse0x255bfc0() {
   return (neuron0x2549ab0()*0.247621);
}

double NNfunction_ss_cLsL::synapse0x255c000() {
   return (neuron0x2549df0()*-0.0400528);
}

double NNfunction_ss_cLsL::synapse0x255c040() {
   return (neuron0x254a130()*0.280962);
}

double NNfunction_ss_cLsL::synapse0x255c3c0() {
   return (neuron0x2545570()*-0.139883);
}

double NNfunction_ss_cLsL::synapse0x255c400() {
   return (neuron0x25458b0()*-0.28913);
}

double NNfunction_ss_cLsL::synapse0x255c440() {
   return (neuron0x2545bf0()*0.0945856);
}

double NNfunction_ss_cLsL::synapse0x255c480() {
   return (neuron0x2545f30()*1.66397);
}

double NNfunction_ss_cLsL::synapse0x255c4c0() {
   return (neuron0x2546270()*0.000857587);
}

double NNfunction_ss_cLsL::synapse0x255c500() {
   return (neuron0x25465b0()*0.16101);
}

double NNfunction_ss_cLsL::synapse0x255c540() {
   return (neuron0x25468f0()*0.122275);
}

double NNfunction_ss_cLsL::synapse0x255c580() {
   return (neuron0x2546c30()*-0.19218);
}

double NNfunction_ss_cLsL::synapse0x255c5c0() {
   return (neuron0x2546f70()*-0.272431);
}

double NNfunction_ss_cLsL::synapse0x255c600() {
   return (neuron0x25472b0()*-0.10585);
}

double NNfunction_ss_cLsL::synapse0x255c640() {
   return (neuron0x25475f0()*0.726813);
}

double NNfunction_ss_cLsL::synapse0x255c680() {
   return (neuron0x2547930()*-0.125578);
}

double NNfunction_ss_cLsL::synapse0x255c6c0() {
   return (neuron0x2547c70()*-1.09037);
}

double NNfunction_ss_cLsL::synapse0x255c700() {
   return (neuron0x2547fb0()*-0.323101);
}

double NNfunction_ss_cLsL::synapse0x255c740() {
   return (neuron0x25482f0()*-0.100712);
}

double NNfunction_ss_cLsL::synapse0x255c780() {
   return (neuron0x2548630()*-0.113948);
}

double NNfunction_ss_cLsL::synapse0x255c210() {
   return (neuron0x2548970()*-0.0558619);
}

double NNfunction_ss_cLsL::synapse0x255c250() {
   return (neuron0x2548ed0()*-0.528917);
}

double NNfunction_ss_cLsL::synapse0x255c8d0() {
   return (neuron0x25490f0()*-0.136625);
}

double NNfunction_ss_cLsL::synapse0x255c910() {
   return (neuron0x2549430()*-0.222711);
}

double NNfunction_ss_cLsL::synapse0x255c950() {
   return (neuron0x2549770()*0.0065968);
}

double NNfunction_ss_cLsL::synapse0x255c990() {
   return (neuron0x2549ab0()*0.192944);
}

double NNfunction_ss_cLsL::synapse0x255c9d0() {
   return (neuron0x2549df0()*-0.0243158);
}

double NNfunction_ss_cLsL::synapse0x255ca10() {
   return (neuron0x254a130()*0.24004);
}

double NNfunction_ss_cLsL::synapse0x255cd90() {
   return (neuron0x2545570()*0.0153231);
}

double NNfunction_ss_cLsL::synapse0x255cdd0() {
   return (neuron0x25458b0()*0.0158224);
}

double NNfunction_ss_cLsL::synapse0x255ce10() {
   return (neuron0x2545bf0()*-0.00385092);
}

double NNfunction_ss_cLsL::synapse0x255ce50() {
   return (neuron0x2545f30()*3.74889);
}

double NNfunction_ss_cLsL::synapse0x255ce90() {
   return (neuron0x2546270()*0.018985);
}

double NNfunction_ss_cLsL::synapse0x255ced0() {
   return (neuron0x25465b0()*0.0397739);
}

double NNfunction_ss_cLsL::synapse0x255cf10() {
   return (neuron0x25468f0()*-0.0187827);
}

double NNfunction_ss_cLsL::synapse0x255cf50() {
   return (neuron0x2546c30()*0.0226874);
}

double NNfunction_ss_cLsL::synapse0x255cf90() {
   return (neuron0x2546f70()*0.000265946);
}

double NNfunction_ss_cLsL::synapse0x255cfd0() {
   return (neuron0x25472b0()*-0.000288428);
}

double NNfunction_ss_cLsL::synapse0x255d010() {
   return (neuron0x25475f0()*-0.00166234);
}

double NNfunction_ss_cLsL::synapse0x255d050() {
   return (neuron0x2547930()*0.0645483);
}

double NNfunction_ss_cLsL::synapse0x255d090() {
   return (neuron0x2547c70()*0.258147);
}

double NNfunction_ss_cLsL::synapse0x255d0d0() {
   return (neuron0x2547fb0()*0.0731967);
}

double NNfunction_ss_cLsL::synapse0x255d110() {
   return (neuron0x25482f0()*0.0515828);
}

double NNfunction_ss_cLsL::synapse0x255d150() {
   return (neuron0x2548630()*0.047356);
}

double NNfunction_ss_cLsL::synapse0x255cbe0() {
   return (neuron0x2548970()*0.0107164);
}

double NNfunction_ss_cLsL::synapse0x255cc20() {
   return (neuron0x2548ed0()*0.0495793);
}

double NNfunction_ss_cLsL::synapse0x255d2a0() {
   return (neuron0x25490f0()*0.0169222);
}

double NNfunction_ss_cLsL::synapse0x255d2e0() {
   return (neuron0x2549430()*0.0204037);
}

double NNfunction_ss_cLsL::synapse0x255d320() {
   return (neuron0x2549770()*-0.0244383);
}

double NNfunction_ss_cLsL::synapse0x255d360() {
   return (neuron0x2549ab0()*-0.0069109);
}

double NNfunction_ss_cLsL::synapse0x255d3a0() {
   return (neuron0x2549df0()*-0.0309456);
}

double NNfunction_ss_cLsL::synapse0x255d3e0() {
   return (neuron0x254a130()*-0.0200528);
}

double NNfunction_ss_cLsL::synapse0x255d760() {
   return (neuron0x2545570()*-0.0307834);
}

double NNfunction_ss_cLsL::synapse0x255d7a0() {
   return (neuron0x25458b0()*-0.202148);
}

double NNfunction_ss_cLsL::synapse0x255d7e0() {
   return (neuron0x2545bf0()*-0.102834);
}

double NNfunction_ss_cLsL::synapse0x255d820() {
   return (neuron0x2545f30()*-0.586665);
}

double NNfunction_ss_cLsL::synapse0x255d860() {
   return (neuron0x2546270()*0.394271);
}

double NNfunction_ss_cLsL::synapse0x255d8a0() {
   return (neuron0x25465b0()*0.00546135);
}

double NNfunction_ss_cLsL::synapse0x255d8e0() {
   return (neuron0x25468f0()*-0.0815324);
}

double NNfunction_ss_cLsL::synapse0x255d920() {
   return (neuron0x2546c30()*0.0723092);
}

double NNfunction_ss_cLsL::synapse0x255d960() {
   return (neuron0x2546f70()*-0.321433);
}

double NNfunction_ss_cLsL::synapse0x255d9a0() {
   return (neuron0x25472b0()*0.0889812);
}

double NNfunction_ss_cLsL::synapse0x255d9e0() {
   return (neuron0x25475f0()*-0.101462);
}

double NNfunction_ss_cLsL::synapse0x255da20() {
   return (neuron0x2547930()*0.0590531);
}

double NNfunction_ss_cLsL::synapse0x255da60() {
   return (neuron0x2547c70()*-0.664915);
}

double NNfunction_ss_cLsL::synapse0x255daa0() {
   return (neuron0x2547fb0()*0.121517);
}

double NNfunction_ss_cLsL::synapse0x255dae0() {
   return (neuron0x25482f0()*-0.626171);
}

double NNfunction_ss_cLsL::synapse0x255db20() {
   return (neuron0x2548630()*-0.0170931);
}

double NNfunction_ss_cLsL::synapse0x255d5b0() {
   return (neuron0x2548970()*0.0775423);
}

double NNfunction_ss_cLsL::synapse0x255d5f0() {
   return (neuron0x2548ed0()*-0.196277);
}

double NNfunction_ss_cLsL::synapse0x255dc70() {
   return (neuron0x25490f0()*-0.181945);
}

double NNfunction_ss_cLsL::synapse0x255dcb0() {
   return (neuron0x2549430()*-0.111659);
}

double NNfunction_ss_cLsL::synapse0x255dcf0() {
   return (neuron0x2549770()*-0.106109);
}

double NNfunction_ss_cLsL::synapse0x255dd30() {
   return (neuron0x2549ab0()*0.0457082);
}

double NNfunction_ss_cLsL::synapse0x255dd70() {
   return (neuron0x2549df0()*0.298644);
}

double NNfunction_ss_cLsL::synapse0x255ddb0() {
   return (neuron0x254a130()*-0.066683);
}

double NNfunction_ss_cLsL::synapse0x255e130() {
   return (neuron0x2545570()*-0.094879);
}

double NNfunction_ss_cLsL::synapse0x255e170() {
   return (neuron0x25458b0()*0.343093);
}

double NNfunction_ss_cLsL::synapse0x255e1b0() {
   return (neuron0x2545bf0()*-0.640274);
}

double NNfunction_ss_cLsL::synapse0x255e1f0() {
   return (neuron0x2545f30()*0.548242);
}

double NNfunction_ss_cLsL::synapse0x255e230() {
   return (neuron0x2546270()*0.150688);
}

double NNfunction_ss_cLsL::synapse0x255e270() {
   return (neuron0x25465b0()*0.257805);
}

double NNfunction_ss_cLsL::synapse0x255e2b0() {
   return (neuron0x25468f0()*0.296587);
}

double NNfunction_ss_cLsL::synapse0x255e2f0() {
   return (neuron0x2546c30()*-0.0777657);
}

double NNfunction_ss_cLsL::synapse0x255e330() {
   return (neuron0x2546f70()*0.0448937);
}

double NNfunction_ss_cLsL::synapse0x255e370() {
   return (neuron0x25472b0()*0.0914589);
}

double NNfunction_ss_cLsL::synapse0x255e3b0() {
   return (neuron0x25475f0()*-0.0690538);
}

double NNfunction_ss_cLsL::synapse0x255e3f0() {
   return (neuron0x2547930()*-0.259083);
}

double NNfunction_ss_cLsL::synapse0x255e430() {
   return (neuron0x2547c70()*-0.0760134);
}

double NNfunction_ss_cLsL::synapse0x255e470() {
   return (neuron0x2547fb0()*0.0896473);
}

double NNfunction_ss_cLsL::synapse0x255e4b0() {
   return (neuron0x25482f0()*-0.0841836);
}

double NNfunction_ss_cLsL::synapse0x255e4f0() {
   return (neuron0x2548630()*-0.459883);
}

double NNfunction_ss_cLsL::synapse0x255df80() {
   return (neuron0x2548970()*0.431046);
}

double NNfunction_ss_cLsL::synapse0x255dfc0() {
   return (neuron0x2548ed0()*-0.179722);
}

double NNfunction_ss_cLsL::synapse0x255e640() {
   return (neuron0x25490f0()*-0.266287);
}

double NNfunction_ss_cLsL::synapse0x255e680() {
   return (neuron0x2549430()*0.070584);
}

double NNfunction_ss_cLsL::synapse0x255e6c0() {
   return (neuron0x2549770()*0.0886501);
}

double NNfunction_ss_cLsL::synapse0x255e700() {
   return (neuron0x2549ab0()*0.0291102);
}

double NNfunction_ss_cLsL::synapse0x255e740() {
   return (neuron0x2549df0()*0.0895766);
}

double NNfunction_ss_cLsL::synapse0x255e780() {
   return (neuron0x254a130()*-0.403961);
}

double NNfunction_ss_cLsL::synapse0x255eb00() {
   return (neuron0x2545570()*0.00528197);
}

double NNfunction_ss_cLsL::synapse0x255eb40() {
   return (neuron0x25458b0()*0.0232621);
}

double NNfunction_ss_cLsL::synapse0x255eb80() {
   return (neuron0x2545bf0()*0.0959157);
}

double NNfunction_ss_cLsL::synapse0x255ebc0() {
   return (neuron0x2545f30()*-0.0455851);
}

double NNfunction_ss_cLsL::synapse0x255ec00() {
   return (neuron0x2546270()*-0.0187407);
}

double NNfunction_ss_cLsL::synapse0x255ec40() {
   return (neuron0x25465b0()*-0.0181247);
}

double NNfunction_ss_cLsL::synapse0x255ec80() {
   return (neuron0x25468f0()*-0.0173079);
}

double NNfunction_ss_cLsL::synapse0x255ecc0() {
   return (neuron0x2546c30()*0.00122451);
}

double NNfunction_ss_cLsL::synapse0x255ed00() {
   return (neuron0x2546f70()*0.0167815);
}

double NNfunction_ss_cLsL::synapse0x255ed40() {
   return (neuron0x25472b0()*0.0204569);
}

double NNfunction_ss_cLsL::synapse0x255ed80() {
   return (neuron0x25475f0()*0.0170664);
}

double NNfunction_ss_cLsL::synapse0x255edc0() {
   return (neuron0x2547930()*-0.0383869);
}

double NNfunction_ss_cLsL::synapse0x255ee00() {
   return (neuron0x2547c70()*-1.35642);
}

double NNfunction_ss_cLsL::synapse0x255ee40() {
   return (neuron0x2547fb0()*-0.0124946);
}

double NNfunction_ss_cLsL::synapse0x255ee80() {
   return (neuron0x25482f0()*-0.0218215);
}

double NNfunction_ss_cLsL::synapse0x255eec0() {
   return (neuron0x2548630()*-0.035399);
}

double NNfunction_ss_cLsL::synapse0x255e950() {
   return (neuron0x2548970()*-0.00112931);
}

double NNfunction_ss_cLsL::synapse0x255e990() {
   return (neuron0x2548ed0()*0.00529406);
}

double NNfunction_ss_cLsL::synapse0x255f010() {
   return (neuron0x25490f0()*-0.0223178);
}

double NNfunction_ss_cLsL::synapse0x255f050() {
   return (neuron0x2549430()*-0.0101367);
}

double NNfunction_ss_cLsL::synapse0x255f090() {
   return (neuron0x2549770()*-0.00538973);
}

double NNfunction_ss_cLsL::synapse0x255f0d0() {
   return (neuron0x2549ab0()*-0.00808303);
}

double NNfunction_ss_cLsL::synapse0x255f110() {
   return (neuron0x2549df0()*-0.0055753);
}

double NNfunction_ss_cLsL::synapse0x255f150() {
   return (neuron0x254a130()*0.0126908);
}

double NNfunction_ss_cLsL::synapse0x255f4d0() {
   return (neuron0x2545570()*-0.0307676);
}

double NNfunction_ss_cLsL::synapse0x255f510() {
   return (neuron0x25458b0()*-0.148109);
}

double NNfunction_ss_cLsL::synapse0x255f550() {
   return (neuron0x2545bf0()*-0.274501);
}

double NNfunction_ss_cLsL::synapse0x255f590() {
   return (neuron0x2545f30()*0.612703);
}

double NNfunction_ss_cLsL::synapse0x255f5d0() {
   return (neuron0x2546270()*0.178992);
}

double NNfunction_ss_cLsL::synapse0x255f610() {
   return (neuron0x25465b0()*0.0199229);
}

double NNfunction_ss_cLsL::synapse0x255f650() {
   return (neuron0x25468f0()*-0.32734);
}

double NNfunction_ss_cLsL::synapse0x255f690() {
   return (neuron0x2546c30()*0.4332);
}

double NNfunction_ss_cLsL::synapse0x255f6d0() {
   return (neuron0x2546f70()*-0.0789255);
}

double NNfunction_ss_cLsL::synapse0x255f710() {
   return (neuron0x25472b0()*0.151177);
}

double NNfunction_ss_cLsL::synapse0x255f750() {
   return (neuron0x25475f0()*-0.153146);
}

double NNfunction_ss_cLsL::synapse0x255f790() {
   return (neuron0x2547930()*0.310496);
}

double NNfunction_ss_cLsL::synapse0x255f7d0() {
   return (neuron0x2547c70()*0.35752);
}

double NNfunction_ss_cLsL::synapse0x255f810() {
   return (neuron0x2547fb0()*0.0937445);
}

double NNfunction_ss_cLsL::synapse0x255f850() {
   return (neuron0x25482f0()*-0.126315);
}

double NNfunction_ss_cLsL::synapse0x255f890() {
   return (neuron0x2548630()*-0.067486);
}

double NNfunction_ss_cLsL::synapse0x255f320() {
   return (neuron0x2548970()*0.211548);
}

double NNfunction_ss_cLsL::synapse0x255f360() {
   return (neuron0x2548ed0()*0.12569);
}

double NNfunction_ss_cLsL::synapse0x255f9e0() {
   return (neuron0x25490f0()*0.163353);
}

double NNfunction_ss_cLsL::synapse0x255fa20() {
   return (neuron0x2549430()*-0.266989);
}

double NNfunction_ss_cLsL::synapse0x255fa60() {
   return (neuron0x2549770()*-0.0157543);
}

double NNfunction_ss_cLsL::synapse0x255faa0() {
   return (neuron0x2549ab0()*-0.0965562);
}

double NNfunction_ss_cLsL::synapse0x255fae0() {
   return (neuron0x2549df0()*-0.238561);
}

double NNfunction_ss_cLsL::synapse0x255fb20() {
   return (neuron0x254a130()*-0.148387);
}

double NNfunction_ss_cLsL::synapse0x255fea0() {
   return (neuron0x2545570()*-0.00656745);
}

double NNfunction_ss_cLsL::synapse0x2554470() {
   return (neuron0x25458b0()*-0.000476461);
}

double NNfunction_ss_cLsL::synapse0x25544b0() {
   return (neuron0x2545bf0()*0.00374405);
}

double NNfunction_ss_cLsL::synapse0x25544f0() {
   return (neuron0x2545f30()*-5.61839);
}

double NNfunction_ss_cLsL::synapse0x2554740() {
   return (neuron0x2546270()*0.0166026);
}

double NNfunction_ss_cLsL::synapse0x2554780() {
   return (neuron0x25465b0()*0.0108321);
}

double NNfunction_ss_cLsL::synapse0x25547c0() {
   return (neuron0x25468f0()*0.00376925);
}

double NNfunction_ss_cLsL::synapse0x2554a10() {
   return (neuron0x2546c30()*0.00101627);
}

double NNfunction_ss_cLsL::synapse0x2554a50() {
   return (neuron0x2546f70()*-0.00578853);
}

double NNfunction_ss_cLsL::synapse0x2554ca0() {
   return (neuron0x25472b0()*0.00341254);
}

double NNfunction_ss_cLsL::synapse0x2554ce0() {
   return (neuron0x25475f0()*-0.00464092);
}

double NNfunction_ss_cLsL::synapse0x2554d20() {
   return (neuron0x2547930()*0.0332329);
}

double NNfunction_ss_cLsL::synapse0x2554f70() {
   return (neuron0x2547c70()*-0.697632);
}

double NNfunction_ss_cLsL::synapse0x2554fb0() {
   return (neuron0x2547fb0()*-0.0186222);
}

double NNfunction_ss_cLsL::synapse0x2555200() {
   return (neuron0x25482f0()*0.00418676);
}

double NNfunction_ss_cLsL::synapse0x2555240() {
   return (neuron0x2548630()*0.0248332);
}

double NNfunction_ss_cLsL::synapse0x255fcf0() {
   return (neuron0x2548970()*-0.0235579);
}

double NNfunction_ss_cLsL::synapse0x255fd30() {
   return (neuron0x2548ed0()*0.0109818);
}

double NNfunction_ss_cLsL::synapse0x2555390() {
   return (neuron0x25490f0()*0.0145748);
}

double NNfunction_ss_cLsL::synapse0x25558a0() {
   return (neuron0x2549430()*0.0186735);
}

double NNfunction_ss_cLsL::synapse0x25558e0() {
   return (neuron0x2549770()*0.00982944);
}

double NNfunction_ss_cLsL::synapse0x2555920() {
   return (neuron0x2549ab0()*0.00358744);
}

double NNfunction_ss_cLsL::synapse0x2555b70() {
   return (neuron0x2549df0()*-0.0019647);
}

double NNfunction_ss_cLsL::synapse0x2555bb0() {
   return (neuron0x254a130()*-0.00629536);
}

double NNfunction_ss_cLsL::synapse0x2555460() {
   return (neuron0x2545570()*0.0633725);
}

double NNfunction_ss_cLsL::synapse0x25554a0() {
   return (neuron0x25458b0()*-0.637506);
}

double NNfunction_ss_cLsL::synapse0x25554e0() {
   return (neuron0x2545bf0()*0.546768);
}

double NNfunction_ss_cLsL::synapse0x2555520() {
   return (neuron0x2545f30()*-0.770396);
}

double NNfunction_ss_cLsL::synapse0x2555ea0() {
   return (neuron0x2546270()*0.20235);
}

double NNfunction_ss_cLsL::synapse0x25621f0() {
   return (neuron0x25465b0()*-0.034406);
}

double NNfunction_ss_cLsL::synapse0x2562230() {
   return (neuron0x25468f0()*0.132298);
}

double NNfunction_ss_cLsL::synapse0x2562270() {
   return (neuron0x2546c30()*-0.506934);
}

double NNfunction_ss_cLsL::synapse0x25622b0() {
   return (neuron0x2546f70()*-0.150129);
}

double NNfunction_ss_cLsL::synapse0x25622f0() {
   return (neuron0x25472b0()*-0.143301);
}

double NNfunction_ss_cLsL::synapse0x2562330() {
   return (neuron0x25475f0()*-0.257668);
}

double NNfunction_ss_cLsL::synapse0x2562370() {
   return (neuron0x2547930()*-0.232797);
}

double NNfunction_ss_cLsL::synapse0x25623b0() {
   return (neuron0x2547c70()*0.144478);
}

double NNfunction_ss_cLsL::synapse0x25623f0() {
   return (neuron0x2547fb0()*0.152697);
}

double NNfunction_ss_cLsL::synapse0x2562430() {
   return (neuron0x25482f0()*-0.0536188);
}

double NNfunction_ss_cLsL::synapse0x2562470() {
   return (neuron0x2548630()*-0.351937);
}

double NNfunction_ss_cLsL::synapse0x2555d80() {
   return (neuron0x2548970()*0.0627419);
}

double NNfunction_ss_cLsL::synapse0x2555dc0() {
   return (neuron0x2548ed0()*-0.12769);
}

double NNfunction_ss_cLsL::synapse0x25625c0() {
   return (neuron0x25490f0()*-0.319703);
}

double NNfunction_ss_cLsL::synapse0x2562600() {
   return (neuron0x2549430()*-0.211704);
}

double NNfunction_ss_cLsL::synapse0x2562640() {
   return (neuron0x2549770()*0.247212);
}

double NNfunction_ss_cLsL::synapse0x2562680() {
   return (neuron0x2549ab0()*0.370938);
}

double NNfunction_ss_cLsL::synapse0x25626c0() {
   return (neuron0x2549df0()*-0.382841);
}

double NNfunction_ss_cLsL::synapse0x2562700() {
   return (neuron0x254a130()*-0.0185481);
}

double NNfunction_ss_cLsL::synapse0x2562a80() {
   return (neuron0x2545570()*0.0595233);
}

double NNfunction_ss_cLsL::synapse0x2562ac0() {
   return (neuron0x25458b0()*-0.626866);
}

double NNfunction_ss_cLsL::synapse0x2562b00() {
   return (neuron0x2545bf0()*-0.482855);
}

double NNfunction_ss_cLsL::synapse0x2562b40() {
   return (neuron0x2545f30()*-0.156287);
}

double NNfunction_ss_cLsL::synapse0x2562b80() {
   return (neuron0x2546270()*0.149666);
}

double NNfunction_ss_cLsL::synapse0x2562bc0() {
   return (neuron0x25465b0()*-0.0728979);
}

double NNfunction_ss_cLsL::synapse0x2562c00() {
   return (neuron0x25468f0()*0.907718);
}

double NNfunction_ss_cLsL::synapse0x2562c40() {
   return (neuron0x2546c30()*-0.586905);
}

double NNfunction_ss_cLsL::synapse0x2562c80() {
   return (neuron0x2546f70()*-0.68622);
}

double NNfunction_ss_cLsL::synapse0x2562cc0() {
   return (neuron0x25472b0()*0.0511238);
}

double NNfunction_ss_cLsL::synapse0x2562d00() {
   return (neuron0x25475f0()*0.120695);
}

double NNfunction_ss_cLsL::synapse0x2562d40() {
   return (neuron0x2547930()*0.0961813);
}

double NNfunction_ss_cLsL::synapse0x2562d80() {
   return (neuron0x2547c70()*-1.17509);
}

double NNfunction_ss_cLsL::synapse0x2562dc0() {
   return (neuron0x2547fb0()*-0.0779476);
}

double NNfunction_ss_cLsL::synapse0x2562e00() {
   return (neuron0x25482f0()*-0.661227);
}

double NNfunction_ss_cLsL::synapse0x2562e40() {
   return (neuron0x2548630()*0.236289);
}

double NNfunction_ss_cLsL::synapse0x25628d0() {
   return (neuron0x2548970()*0.111755);
}

double NNfunction_ss_cLsL::synapse0x2562910() {
   return (neuron0x2548ed0()*-0.750245);
}

double NNfunction_ss_cLsL::synapse0x2562f90() {
   return (neuron0x25490f0()*-0.851204);
}

double NNfunction_ss_cLsL::synapse0x2562fd0() {
   return (neuron0x2549430()*-0.0181589);
}

double NNfunction_ss_cLsL::synapse0x2563010() {
   return (neuron0x2549770()*0.642783);
}

double NNfunction_ss_cLsL::synapse0x2563050() {
   return (neuron0x2549ab0()*0.65565);
}

double NNfunction_ss_cLsL::synapse0x2563090() {
   return (neuron0x2549df0()*-0.197089);
}

double NNfunction_ss_cLsL::synapse0x25630d0() {
   return (neuron0x254a130()*-0.31928);
}

double NNfunction_ss_cLsL::synapse0x2563450() {
   return (neuron0x2545570()*0.145211);
}

double NNfunction_ss_cLsL::synapse0x2563490() {
   return (neuron0x25458b0()*-0.224847);
}

double NNfunction_ss_cLsL::synapse0x25634d0() {
   return (neuron0x2545bf0()*0.115237);
}

double NNfunction_ss_cLsL::synapse0x2563510() {
   return (neuron0x2545f30()*-0.189937);
}

double NNfunction_ss_cLsL::synapse0x2563550() {
   return (neuron0x2546270()*0.0164416);
}

double NNfunction_ss_cLsL::synapse0x2563590() {
   return (neuron0x25465b0()*0.216712);
}

double NNfunction_ss_cLsL::synapse0x25635d0() {
   return (neuron0x25468f0()*0.354144);
}

double NNfunction_ss_cLsL::synapse0x2563610() {
   return (neuron0x2546c30()*-0.0490125);
}

double NNfunction_ss_cLsL::synapse0x2563650() {
   return (neuron0x2546f70()*-0.26194);
}

double NNfunction_ss_cLsL::synapse0x2563690() {
   return (neuron0x25472b0()*-0.160203);
}

double NNfunction_ss_cLsL::synapse0x25636d0() {
   return (neuron0x25475f0()*-0.0167149);
}

double NNfunction_ss_cLsL::synapse0x2563710() {
   return (neuron0x2547930()*0.0442541);
}

double NNfunction_ss_cLsL::synapse0x2563750() {
   return (neuron0x2547c70()*0.0454766);
}

double NNfunction_ss_cLsL::synapse0x2563790() {
   return (neuron0x2547fb0()*-0.0730642);
}

double NNfunction_ss_cLsL::synapse0x25637d0() {
   return (neuron0x25482f0()*0.360933);
}

double NNfunction_ss_cLsL::synapse0x2563810() {
   return (neuron0x2548630()*-1.28141);
}

double NNfunction_ss_cLsL::synapse0x25632a0() {
   return (neuron0x2548970()*-0.0409325);
}

double NNfunction_ss_cLsL::synapse0x25632e0() {
   return (neuron0x2548ed0()*-0.297016);
}

double NNfunction_ss_cLsL::synapse0x2563960() {
   return (neuron0x25490f0()*-0.255471);
}

double NNfunction_ss_cLsL::synapse0x25639a0() {
   return (neuron0x2549430()*0.130438);
}

double NNfunction_ss_cLsL::synapse0x25639e0() {
   return (neuron0x2549770()*0.361794);
}

double NNfunction_ss_cLsL::synapse0x2563a20() {
   return (neuron0x2549ab0()*-0.0179591);
}

double NNfunction_ss_cLsL::synapse0x2563a60() {
   return (neuron0x2549df0()*-0.0583847);
}

double NNfunction_ss_cLsL::synapse0x2563aa0() {
   return (neuron0x254a130()*-0.214527);
}

double NNfunction_ss_cLsL::synapse0x2563e20() {
   return (neuron0x2545570()*0.581554);
}

double NNfunction_ss_cLsL::synapse0x2563e60() {
   return (neuron0x25458b0()*0.587453);
}

double NNfunction_ss_cLsL::synapse0x2563ea0() {
   return (neuron0x2545bf0()*0.17129);
}

double NNfunction_ss_cLsL::synapse0x2563ee0() {
   return (neuron0x2545f30()*-0.085668);
}

double NNfunction_ss_cLsL::synapse0x2563f20() {
   return (neuron0x2546270()*0.0909457);
}

double NNfunction_ss_cLsL::synapse0x2563f60() {
   return (neuron0x25465b0()*-0.713012);
}

double NNfunction_ss_cLsL::synapse0x2563fa0() {
   return (neuron0x25468f0()*0.843923);
}

double NNfunction_ss_cLsL::synapse0x2563fe0() {
   return (neuron0x2546c30()*-0.408684);
}

double NNfunction_ss_cLsL::synapse0x2564020() {
   return (neuron0x2546f70()*0.185255);
}

double NNfunction_ss_cLsL::synapse0x2564060() {
   return (neuron0x25472b0()*-0.185001);
}

double NNfunction_ss_cLsL::synapse0x25640a0() {
   return (neuron0x25475f0()*0.318703);
}

double NNfunction_ss_cLsL::synapse0x25640e0() {
   return (neuron0x2547930()*-1.09193);
}

double NNfunction_ss_cLsL::synapse0x2564120() {
   return (neuron0x2547c70()*0.834286);
}

double NNfunction_ss_cLsL::synapse0x2564160() {
   return (neuron0x2547fb0()*-1.01739);
}

double NNfunction_ss_cLsL::synapse0x25641a0() {
   return (neuron0x25482f0()*-0.334776);
}

double NNfunction_ss_cLsL::synapse0x25641e0() {
   return (neuron0x2548630()*-0.163831);
}

double NNfunction_ss_cLsL::synapse0x2563c70() {
   return (neuron0x2548970()*0.218946);
}

double NNfunction_ss_cLsL::synapse0x2563cb0() {
   return (neuron0x2548ed0()*0.516938);
}

double NNfunction_ss_cLsL::synapse0x2564330() {
   return (neuron0x25490f0()*-0.925941);
}

double NNfunction_ss_cLsL::synapse0x2564370() {
   return (neuron0x2549430()*-0.449137);
}

double NNfunction_ss_cLsL::synapse0x25643b0() {
   return (neuron0x2549770()*0.335608);
}

double NNfunction_ss_cLsL::synapse0x25643f0() {
   return (neuron0x2549ab0()*-0.339403);
}

double NNfunction_ss_cLsL::synapse0x2564430() {
   return (neuron0x2549df0()*-0.0429518);
}

double NNfunction_ss_cLsL::synapse0x2564470() {
   return (neuron0x254a130()*0.304948);
}

double NNfunction_ss_cLsL::synapse0x25647f0() {
   return (neuron0x2545570()*-0.0168382);
}

double NNfunction_ss_cLsL::synapse0x2564830() {
   return (neuron0x25458b0()*0.0178687);
}

double NNfunction_ss_cLsL::synapse0x2564870() {
   return (neuron0x2545bf0()*-0.103091);
}

double NNfunction_ss_cLsL::synapse0x25648b0() {
   return (neuron0x2545f30()*10.1725);
}

double NNfunction_ss_cLsL::synapse0x25648f0() {
   return (neuron0x2546270()*0.00125836);
}

double NNfunction_ss_cLsL::synapse0x2564930() {
   return (neuron0x25465b0()*0.0488107);
}

double NNfunction_ss_cLsL::synapse0x2564970() {
   return (neuron0x25468f0()*-0.0157872);
}

double NNfunction_ss_cLsL::synapse0x25649b0() {
   return (neuron0x2546c30()*0.0174468);
}

double NNfunction_ss_cLsL::synapse0x25649f0() {
   return (neuron0x2546f70()*-0.00357763);
}

double NNfunction_ss_cLsL::synapse0x2564a30() {
   return (neuron0x25472b0()*-0.0370471);
}

double NNfunction_ss_cLsL::synapse0x2564a70() {
   return (neuron0x25475f0()*0.00872601);
}

double NNfunction_ss_cLsL::synapse0x2564ab0() {
   return (neuron0x2547930()*0.0339251);
}

double NNfunction_ss_cLsL::synapse0x2564af0() {
   return (neuron0x2547c70()*-0.69315);
}

double NNfunction_ss_cLsL::synapse0x2564b30() {
   return (neuron0x2547fb0()*-0.0109625);
}

double NNfunction_ss_cLsL::synapse0x2564b70() {
   return (neuron0x25482f0()*0.0339317);
}

double NNfunction_ss_cLsL::synapse0x2564bb0() {
   return (neuron0x2548630()*0.0102369);
}

double NNfunction_ss_cLsL::synapse0x2564640() {
   return (neuron0x2548970()*-0.0570045);
}

double NNfunction_ss_cLsL::synapse0x2564680() {
   return (neuron0x2548ed0()*0.0372836);
}

double NNfunction_ss_cLsL::synapse0x2564d00() {
   return (neuron0x25490f0()*-0.0427061);
}

double NNfunction_ss_cLsL::synapse0x2564d40() {
   return (neuron0x2549430()*0.0518068);
}

double NNfunction_ss_cLsL::synapse0x2564d80() {
   return (neuron0x2549770()*-0.0135317);
}

double NNfunction_ss_cLsL::synapse0x2564dc0() {
   return (neuron0x2549ab0()*0.0446434);
}

double NNfunction_ss_cLsL::synapse0x2564e00() {
   return (neuron0x2549df0()*0.0145386);
}

double NNfunction_ss_cLsL::synapse0x2564e40() {
   return (neuron0x254a130()*0.0297029);
}

double NNfunction_ss_cLsL::synapse0x25651c0() {
   return (neuron0x2545570()*-0.0672004);
}

double NNfunction_ss_cLsL::synapse0x2565200() {
   return (neuron0x25458b0()*0.0644023);
}

double NNfunction_ss_cLsL::synapse0x2565240() {
   return (neuron0x2545bf0()*-0.00227068);
}

double NNfunction_ss_cLsL::synapse0x2565280() {
   return (neuron0x2545f30()*-2.20872);
}

double NNfunction_ss_cLsL::synapse0x25652c0() {
   return (neuron0x2546270()*-0.0804716);
}

double NNfunction_ss_cLsL::synapse0x2565300() {
   return (neuron0x25465b0()*-0.0744798);
}

double NNfunction_ss_cLsL::synapse0x2565340() {
   return (neuron0x25468f0()*-0.0797213);
}

double NNfunction_ss_cLsL::synapse0x2565380() {
   return (neuron0x2546c30()*0.0911519);
}

double NNfunction_ss_cLsL::synapse0x25653c0() {
   return (neuron0x2546f70()*0.101698);
}

double NNfunction_ss_cLsL::synapse0x2565400() {
   return (neuron0x25472b0()*-0.0722822);
}

double NNfunction_ss_cLsL::synapse0x2565440() {
   return (neuron0x25475f0()*0.0604601);
}

double NNfunction_ss_cLsL::synapse0x2565480() {
   return (neuron0x2547930()*0.00207139);
}

double NNfunction_ss_cLsL::synapse0x25654c0() {
   return (neuron0x2547c70()*-0.961883);
}

double NNfunction_ss_cLsL::synapse0x2565500() {
   return (neuron0x2547fb0()*-0.00429226);
}

double NNfunction_ss_cLsL::synapse0x2565540() {
   return (neuron0x25482f0()*0.0400083);
}

double NNfunction_ss_cLsL::synapse0x2565580() {
   return (neuron0x2548630()*-0.00777659);
}

double NNfunction_ss_cLsL::synapse0x2565010() {
   return (neuron0x2548970()*-0.0631743);
}

double NNfunction_ss_cLsL::synapse0x2565050() {
   return (neuron0x2548ed0()*0.0432572);
}

double NNfunction_ss_cLsL::synapse0x25656d0() {
   return (neuron0x25490f0()*-0.0160708);
}

double NNfunction_ss_cLsL::synapse0x2565710() {
   return (neuron0x2549430()*-0.0705522);
}

double NNfunction_ss_cLsL::synapse0x2565750() {
   return (neuron0x2549770()*-0.070117);
}

double NNfunction_ss_cLsL::synapse0x2565790() {
   return (neuron0x2549ab0()*0.00855745);
}

double NNfunction_ss_cLsL::synapse0x25657d0() {
   return (neuron0x2549df0()*-0.0646665);
}

double NNfunction_ss_cLsL::synapse0x2565810() {
   return (neuron0x254a130()*0.0485945);
}

double NNfunction_ss_cLsL::synapse0x2565b90() {
   return (neuron0x2545570()*0.159796);
}

double NNfunction_ss_cLsL::synapse0x2565bd0() {
   return (neuron0x25458b0()*0.246839);
}

double NNfunction_ss_cLsL::synapse0x2565c10() {
   return (neuron0x2545bf0()*-0.200647);
}

double NNfunction_ss_cLsL::synapse0x2565c50() {
   return (neuron0x2545f30()*0.556863);
}

double NNfunction_ss_cLsL::synapse0x2565c90() {
   return (neuron0x2546270()*-0.155443);
}

double NNfunction_ss_cLsL::synapse0x2565cd0() {
   return (neuron0x25465b0()*-0.262068);
}

double NNfunction_ss_cLsL::synapse0x2565d10() {
   return (neuron0x25468f0()*-0.33442);
}

double NNfunction_ss_cLsL::synapse0x2565d50() {
   return (neuron0x2546c30()*0.105365);
}

double NNfunction_ss_cLsL::synapse0x2565d90() {
   return (neuron0x2546f70()*0.145751);
}

double NNfunction_ss_cLsL::synapse0x2565dd0() {
   return (neuron0x25472b0()*0.107023);
}

double NNfunction_ss_cLsL::synapse0x2565e10() {
   return (neuron0x25475f0()*-0.0718212);
}

double NNfunction_ss_cLsL::synapse0x2565e50() {
   return (neuron0x2547930()*-0.545095);
}

double NNfunction_ss_cLsL::synapse0x2565e90() {
   return (neuron0x2547c70()*0.280649);
}

double NNfunction_ss_cLsL::synapse0x2565ed0() {
   return (neuron0x2547fb0()*0.508862);
}

double NNfunction_ss_cLsL::synapse0x2565f10() {
   return (neuron0x25482f0()*0.233949);
}

double NNfunction_ss_cLsL::synapse0x2565f50() {
   return (neuron0x2548630()*-0.448199);
}

double NNfunction_ss_cLsL::synapse0x25659e0() {
   return (neuron0x2548970()*0.970794);
}

double NNfunction_ss_cLsL::synapse0x2565a20() {
   return (neuron0x2548ed0()*-0.194135);
}

double NNfunction_ss_cLsL::synapse0x25660a0() {
   return (neuron0x25490f0()*-0.133942);
}

double NNfunction_ss_cLsL::synapse0x25660e0() {
   return (neuron0x2549430()*-0.221511);
}

double NNfunction_ss_cLsL::synapse0x2566120() {
   return (neuron0x2549770()*0.146486);
}

double NNfunction_ss_cLsL::synapse0x2566160() {
   return (neuron0x2549ab0()*-0.0792017);
}

double NNfunction_ss_cLsL::synapse0x25661a0() {
   return (neuron0x2549df0()*-0.0197205);
}

double NNfunction_ss_cLsL::synapse0x25661e0() {
   return (neuron0x254a130()*-0.0275645);
}

double NNfunction_ss_cLsL::synapse0x2566560() {
   return (neuron0x2545570()*-0.353733);
}

double NNfunction_ss_cLsL::synapse0x25665a0() {
   return (neuron0x25458b0()*-0.339533);
}

double NNfunction_ss_cLsL::synapse0x25665e0() {
   return (neuron0x2545bf0()*0.277832);
}

double NNfunction_ss_cLsL::synapse0x2566620() {
   return (neuron0x2545f30()*1.49337);
}

double NNfunction_ss_cLsL::synapse0x2566660() {
   return (neuron0x2546270()*0.30234);
}

double NNfunction_ss_cLsL::synapse0x25666a0() {
   return (neuron0x25465b0()*-0.22006);
}

double NNfunction_ss_cLsL::synapse0x25666e0() {
   return (neuron0x25468f0()*0.0340434);
}

double NNfunction_ss_cLsL::synapse0x2566720() {
   return (neuron0x2546c30()*-0.0387701);
}

double NNfunction_ss_cLsL::synapse0x2566760() {
   return (neuron0x2546f70()*0.481611);
}

double NNfunction_ss_cLsL::synapse0x25667a0() {
   return (neuron0x25472b0()*-0.878477);
}

double NNfunction_ss_cLsL::synapse0x25667e0() {
   return (neuron0x25475f0()*0.0317844);
}

double NNfunction_ss_cLsL::synapse0x2566820() {
   return (neuron0x2547930()*-0.0552567);
}

double NNfunction_ss_cLsL::synapse0x2566860() {
   return (neuron0x2547c70()*-0.635766);
}

double NNfunction_ss_cLsL::synapse0x25668a0() {
   return (neuron0x2547fb0()*0.766128);
}

double NNfunction_ss_cLsL::synapse0x25668e0() {
   return (neuron0x25482f0()*0.420399);
}

double NNfunction_ss_cLsL::synapse0x2566920() {
   return (neuron0x2548630()*0.322151);
}

double NNfunction_ss_cLsL::synapse0x25663b0() {
   return (neuron0x2548970()*-0.480462);
}

double NNfunction_ss_cLsL::synapse0x25663f0() {
   return (neuron0x2548ed0()*0.457686);
}

double NNfunction_ss_cLsL::synapse0x2566a70() {
   return (neuron0x25490f0()*0.157664);
}

double NNfunction_ss_cLsL::synapse0x2566ab0() {
   return (neuron0x2549430()*0.586075);
}

double NNfunction_ss_cLsL::synapse0x2566af0() {
   return (neuron0x2549770()*0.935083);
}

double NNfunction_ss_cLsL::synapse0x2566b30() {
   return (neuron0x2549ab0()*0.730188);
}

double NNfunction_ss_cLsL::synapse0x2566b70() {
   return (neuron0x2549df0()*-0.138853);
}

double NNfunction_ss_cLsL::synapse0x2566bb0() {
   return (neuron0x254a130()*-0.0375657);
}

double NNfunction_ss_cLsL::synapse0x254f660() {
   return (neuron0x2545570()*-0.264161);
}

double NNfunction_ss_cLsL::synapse0x254f6a0() {
   return (neuron0x25458b0()*-0.286014);
}

double NNfunction_ss_cLsL::synapse0x254f6e0() {
   return (neuron0x2545bf0()*-0.834391);
}

double NNfunction_ss_cLsL::synapse0x254f720() {
   return (neuron0x2545f30()*1.74304);
}

double NNfunction_ss_cLsL::synapse0x254f760() {
   return (neuron0x2546270()*-0.0336114);
}

double NNfunction_ss_cLsL::synapse0x254f7a0() {
   return (neuron0x25465b0()*0.0309892);
}

double NNfunction_ss_cLsL::synapse0x254f7e0() {
   return (neuron0x25468f0()*0.122456);
}

double NNfunction_ss_cLsL::synapse0x254f820() {
   return (neuron0x2546c30()*-0.325596);
}

double NNfunction_ss_cLsL::synapse0x2567340() {
   return (neuron0x2546f70()*0.172465);
}

double NNfunction_ss_cLsL::synapse0x2567380() {
   return (neuron0x25472b0()*0.224612);
}

double NNfunction_ss_cLsL::synapse0x25673c0() {
   return (neuron0x25475f0()*-0.359994);
}

double NNfunction_ss_cLsL::synapse0x2567400() {
   return (neuron0x2547930()*0.0848073);
}

double NNfunction_ss_cLsL::synapse0x2567440() {
   return (neuron0x2547c70()*-1.17201);
}

double NNfunction_ss_cLsL::synapse0x2567480() {
   return (neuron0x2547fb0()*-0.125141);
}

double NNfunction_ss_cLsL::synapse0x25674c0() {
   return (neuron0x25482f0()*-0.793234);
}

double NNfunction_ss_cLsL::synapse0x2567500() {
   return (neuron0x2548630()*0.230227);
}

double NNfunction_ss_cLsL::synapse0x2566d80() {
   return (neuron0x2548970()*0.0762488);
}

double NNfunction_ss_cLsL::synapse0x2566dc0() {
   return (neuron0x2548ed0()*0.100344);
}

double NNfunction_ss_cLsL::synapse0x2567650() {
   return (neuron0x25490f0()*-0.36722);
}

double NNfunction_ss_cLsL::synapse0x2567690() {
   return (neuron0x2549430()*0.319904);
}

double NNfunction_ss_cLsL::synapse0x25676d0() {
   return (neuron0x2549770()*-0.403677);
}

double NNfunction_ss_cLsL::synapse0x2567710() {
   return (neuron0x2549ab0()*-0.490234);
}

double NNfunction_ss_cLsL::synapse0x2567750() {
   return (neuron0x2549df0()*0.275628);
}

double NNfunction_ss_cLsL::synapse0x2567790() {
   return (neuron0x254a130()*-0.233824);
}

double NNfunction_ss_cLsL::synapse0x2567b10() {
   return (neuron0x2545570()*0.410251);
}

double NNfunction_ss_cLsL::synapse0x2567b50() {
   return (neuron0x25458b0()*0.303604);
}

double NNfunction_ss_cLsL::synapse0x2567b90() {
   return (neuron0x2545bf0()*-0.308292);
}

double NNfunction_ss_cLsL::synapse0x2567bd0() {
   return (neuron0x2545f30()*0.295856);
}

double NNfunction_ss_cLsL::synapse0x2567c10() {
   return (neuron0x2546270()*-0.442452);
}

double NNfunction_ss_cLsL::synapse0x2567c50() {
   return (neuron0x25465b0()*-0.012394);
}

double NNfunction_ss_cLsL::synapse0x2567c90() {
   return (neuron0x25468f0()*0.232942);
}

double NNfunction_ss_cLsL::synapse0x2567cd0() {
   return (neuron0x2546c30()*-0.00661679);
}

double NNfunction_ss_cLsL::synapse0x2567d10() {
   return (neuron0x2546f70()*0.00864471);
}

double NNfunction_ss_cLsL::synapse0x2567d50() {
   return (neuron0x25472b0()*-0.723796);
}

double NNfunction_ss_cLsL::synapse0x2567d90() {
   return (neuron0x25475f0()*-1.46483);
}

double NNfunction_ss_cLsL::synapse0x2567dd0() {
   return (neuron0x2547930()*0.0422506);
}

double NNfunction_ss_cLsL::synapse0x2567e10() {
   return (neuron0x2547c70()*-0.287423);
}

double NNfunction_ss_cLsL::synapse0x2567e50() {
   return (neuron0x2547fb0()*-0.537981);
}

double NNfunction_ss_cLsL::synapse0x2567e90() {
   return (neuron0x25482f0()*-0.821464);
}

double NNfunction_ss_cLsL::synapse0x2567ed0() {
   return (neuron0x2548630()*0.411153);
}

double NNfunction_ss_cLsL::synapse0x2567960() {
   return (neuron0x2548970()*-0.401114);
}

double NNfunction_ss_cLsL::synapse0x25679a0() {
   return (neuron0x2548ed0()*-0.0419203);
}

double NNfunction_ss_cLsL::synapse0x2568020() {
   return (neuron0x25490f0()*0.110782);
}

double NNfunction_ss_cLsL::synapse0x2568060() {
   return (neuron0x2549430()*0.465644);
}

double NNfunction_ss_cLsL::synapse0x25680a0() {
   return (neuron0x2549770()*-0.155036);
}

double NNfunction_ss_cLsL::synapse0x25680e0() {
   return (neuron0x2549ab0()*-0.64372);
}

double NNfunction_ss_cLsL::synapse0x2568120() {
   return (neuron0x2549df0()*0.103156);
}

double NNfunction_ss_cLsL::synapse0x2568160() {
   return (neuron0x254a130()*0.255583);
}

double NNfunction_ss_cLsL::synapse0x25684e0() {
   return (neuron0x2545570()*0.109404);
}

double NNfunction_ss_cLsL::synapse0x2568520() {
   return (neuron0x25458b0()*-0.00305109);
}

double NNfunction_ss_cLsL::synapse0x2568560() {
   return (neuron0x2545bf0()*-0.0877435);
}

double NNfunction_ss_cLsL::synapse0x25685a0() {
   return (neuron0x2545f30()*-0.251575);
}

double NNfunction_ss_cLsL::synapse0x25685e0() {
   return (neuron0x2546270()*-0.128963);
}

double NNfunction_ss_cLsL::synapse0x2568620() {
   return (neuron0x25465b0()*0.0177423);
}

double NNfunction_ss_cLsL::synapse0x2568660() {
   return (neuron0x25468f0()*-0.26374);
}

double NNfunction_ss_cLsL::synapse0x25686a0() {
   return (neuron0x2546c30()*0.0142126);
}

double NNfunction_ss_cLsL::synapse0x25686e0() {
   return (neuron0x2546f70()*-0.0149304);
}

double NNfunction_ss_cLsL::synapse0x2568720() {
   return (neuron0x25472b0()*0.132465);
}

double NNfunction_ss_cLsL::synapse0x2568760() {
   return (neuron0x25475f0()*0.181532);
}

double NNfunction_ss_cLsL::synapse0x25687a0() {
   return (neuron0x2547930()*0.38984);
}

double NNfunction_ss_cLsL::synapse0x25687e0() {
   return (neuron0x2547c70()*0.875398);
}

double NNfunction_ss_cLsL::synapse0x2568820() {
   return (neuron0x2547fb0()*0.11456);
}

double NNfunction_ss_cLsL::synapse0x2568860() {
   return (neuron0x25482f0()*0.141491);
}

double NNfunction_ss_cLsL::synapse0x25688a0() {
   return (neuron0x2548630()*0.122597);
}

double NNfunction_ss_cLsL::synapse0x2568330() {
   return (neuron0x2548970()*0.268095);
}

double NNfunction_ss_cLsL::synapse0x2568370() {
   return (neuron0x2548ed0()*0.20428);
}

double NNfunction_ss_cLsL::synapse0x2558ea0() {
   return (neuron0x25490f0()*0.174711);
}

double NNfunction_ss_cLsL::synapse0x2558ee0() {
   return (neuron0x2549430()*-0.152674);
}

double NNfunction_ss_cLsL::synapse0x2558f20() {
   return (neuron0x2549770()*-0.142645);
}

double NNfunction_ss_cLsL::synapse0x2558f60() {
   return (neuron0x2549ab0()*-0.228108);
}

double NNfunction_ss_cLsL::synapse0x2558fa0() {
   return (neuron0x2549df0()*-0.000482897);
}

double NNfunction_ss_cLsL::synapse0x2558fe0() {
   return (neuron0x254a130()*0.164176);
}

double NNfunction_ss_cLsL::synapse0x2559360() {
   return (neuron0x2545570()*-0.0124198);
}

double NNfunction_ss_cLsL::synapse0x25593a0() {
   return (neuron0x25458b0()*-0.0270864);
}

double NNfunction_ss_cLsL::synapse0x25593e0() {
   return (neuron0x2545bf0()*0.0325393);
}

double NNfunction_ss_cLsL::synapse0x2559420() {
   return (neuron0x2545f30()*4.50245);
}

double NNfunction_ss_cLsL::synapse0x2559460() {
   return (neuron0x2546270()*-0.0133512);
}

double NNfunction_ss_cLsL::synapse0x25594a0() {
   return (neuron0x25465b0()*-0.0261238);
}

double NNfunction_ss_cLsL::synapse0x25594e0() {
   return (neuron0x25468f0()*0.0141709);
}

double NNfunction_ss_cLsL::synapse0x2559520() {
   return (neuron0x2546c30()*0.0051338);
}

double NNfunction_ss_cLsL::synapse0x2559560() {
   return (neuron0x2546f70()*0.0251926);
}

double NNfunction_ss_cLsL::synapse0x25595a0() {
   return (neuron0x25472b0()*0.0396249);
}

double NNfunction_ss_cLsL::synapse0x25595e0() {
   return (neuron0x25475f0()*-0.027013);
}

double NNfunction_ss_cLsL::synapse0x2559620() {
   return (neuron0x2547930()*-0.0125528);
}

double NNfunction_ss_cLsL::synapse0x2559660() {
   return (neuron0x2547c70()*-1.11568);
}

double NNfunction_ss_cLsL::synapse0x25596a0() {
   return (neuron0x2547fb0()*-0.00779625);
}

double NNfunction_ss_cLsL::synapse0x25596e0() {
   return (neuron0x25482f0()*-0.0456368);
}

double NNfunction_ss_cLsL::synapse0x2559720() {
   return (neuron0x2548630()*-0.0333399);
}

double NNfunction_ss_cLsL::synapse0x25591b0() {
   return (neuron0x2548970()*0.0564085);
}

double NNfunction_ss_cLsL::synapse0x25591f0() {
   return (neuron0x2548ed0()*-0.0296794);
}

double NNfunction_ss_cLsL::synapse0x2559870() {
   return (neuron0x25490f0()*0.0590058);
}

double NNfunction_ss_cLsL::synapse0x25598b0() {
   return (neuron0x2549430()*-0.00169117);
}

double NNfunction_ss_cLsL::synapse0x25598f0() {
   return (neuron0x2549770()*0.00891853);
}

double NNfunction_ss_cLsL::synapse0x2559930() {
   return (neuron0x2549ab0()*-0.040569);
}

double NNfunction_ss_cLsL::synapse0x2559970() {
   return (neuron0x2549df0()*0.0210627);
}

double NNfunction_ss_cLsL::synapse0x25599b0() {
   return (neuron0x254a130()*-0.000123301);
}

double NNfunction_ss_cLsL::synapse0x2559d30() {
   return (neuron0x2545570()*-0.464463);
}

double NNfunction_ss_cLsL::synapse0x2559d70() {
   return (neuron0x25458b0()*-0.622053);
}

double NNfunction_ss_cLsL::synapse0x2559db0() {
   return (neuron0x2545bf0()*-0.335719);
}

double NNfunction_ss_cLsL::synapse0x2559df0() {
   return (neuron0x2545f30()*0.549541);
}

double NNfunction_ss_cLsL::synapse0x2559e30() {
   return (neuron0x2546270()*-0.336391);
}

double NNfunction_ss_cLsL::synapse0x2559e70() {
   return (neuron0x25465b0()*-0.864897);
}

double NNfunction_ss_cLsL::synapse0x2559eb0() {
   return (neuron0x25468f0()*-0.785222);
}

double NNfunction_ss_cLsL::synapse0x2559ef0() {
   return (neuron0x2546c30()*0.375359);
}

double NNfunction_ss_cLsL::synapse0x2559f30() {
   return (neuron0x2546f70()*0.407107);
}

double NNfunction_ss_cLsL::synapse0x2559f70() {
   return (neuron0x25472b0()*0.294247);
}

double NNfunction_ss_cLsL::synapse0x2559fb0() {
   return (neuron0x25475f0()*0.374135);
}

double NNfunction_ss_cLsL::synapse0x2559ff0() {
   return (neuron0x2547930()*0.292278);
}

double NNfunction_ss_cLsL::synapse0x255a030() {
   return (neuron0x2547c70()*0.447928);
}

double NNfunction_ss_cLsL::synapse0x255a070() {
   return (neuron0x2547fb0()*0.0919438);
}

double NNfunction_ss_cLsL::synapse0x255a0b0() {
   return (neuron0x25482f0()*0.810831);
}

double NNfunction_ss_cLsL::synapse0x255a0f0() {
   return (neuron0x2548630()*-0.519606);
}

double NNfunction_ss_cLsL::synapse0x2559b80() {
   return (neuron0x2548970()*0.529106);
}

double NNfunction_ss_cLsL::synapse0x2559bc0() {
   return (neuron0x2548ed0()*-0.688017);
}

double NNfunction_ss_cLsL::synapse0x255a240() {
   return (neuron0x25490f0()*-0.0340492);
}

double NNfunction_ss_cLsL::synapse0x255a280() {
   return (neuron0x2549430()*-0.234377);
}

double NNfunction_ss_cLsL::synapse0x255a2c0() {
   return (neuron0x2549770()*0.0159696);
}

double NNfunction_ss_cLsL::synapse0x255a300() {
   return (neuron0x2549ab0()*-0.0134798);
}

double NNfunction_ss_cLsL::synapse0x255a340() {
   return (neuron0x2549df0()*-0.131347);
}

double NNfunction_ss_cLsL::synapse0x255a380() {
   return (neuron0x254a130()*0.0821505);
}

double NNfunction_ss_cLsL::synapse0x255a700() {
   return (neuron0x2545570()*-0.480347);
}

double NNfunction_ss_cLsL::synapse0x255a740() {
   return (neuron0x25458b0()*-0.592024);
}

double NNfunction_ss_cLsL::synapse0x255a780() {
   return (neuron0x2545bf0()*-1.04198);
}

double NNfunction_ss_cLsL::synapse0x255a7c0() {
   return (neuron0x2545f30()*-0.241905);
}

double NNfunction_ss_cLsL::synapse0x255a800() {
   return (neuron0x2546270()*0.50805);
}

double NNfunction_ss_cLsL::synapse0x255a840() {
   return (neuron0x25465b0()*-0.0895789);
}

double NNfunction_ss_cLsL::synapse0x255a880() {
   return (neuron0x25468f0()*-0.0949502);
}

double NNfunction_ss_cLsL::synapse0x255a8c0() {
   return (neuron0x2546c30()*-0.105775);
}

double NNfunction_ss_cLsL::synapse0x255a900() {
   return (neuron0x2546f70()*-0.127827);
}

double NNfunction_ss_cLsL::synapse0x255a940() {
   return (neuron0x25472b0()*-1.12571);
}

double NNfunction_ss_cLsL::synapse0x255a980() {
   return (neuron0x25475f0()*-0.188517);
}

double NNfunction_ss_cLsL::synapse0x255a9c0() {
   return (neuron0x2547930()*-1.17481);
}

double NNfunction_ss_cLsL::synapse0x255aa00() {
   return (neuron0x2547c70()*0.435853);
}

double NNfunction_ss_cLsL::synapse0x255aa40() {
   return (neuron0x2547fb0()*0.166294);
}

double NNfunction_ss_cLsL::synapse0x255aa80() {
   return (neuron0x25482f0()*0.957781);
}

double NNfunction_ss_cLsL::synapse0x255aac0() {
   return (neuron0x2548630()*0.1283);
}

double NNfunction_ss_cLsL::synapse0x255a550() {
   return (neuron0x2548970()*-0.805121);
}

double NNfunction_ss_cLsL::synapse0x255a590() {
   return (neuron0x2548ed0()*-0.78892);
}

double NNfunction_ss_cLsL::synapse0x255ac10() {
   return (neuron0x25490f0()*-0.274066);
}

double NNfunction_ss_cLsL::synapse0x255ac50() {
   return (neuron0x2549430()*0.814715);
}

double NNfunction_ss_cLsL::synapse0x255ac90() {
   return (neuron0x2549770()*0.39301);
}

double NNfunction_ss_cLsL::synapse0x255acd0() {
   return (neuron0x2549ab0()*0.402664);
}

double NNfunction_ss_cLsL::synapse0x255ad10() {
   return (neuron0x2549df0()*-0.104542);
}

double NNfunction_ss_cLsL::synapse0x255ad50() {
   return (neuron0x254a130()*-0.101479);
}

double NNfunction_ss_cLsL::synapse0x256cc20() {
   return (neuron0x2545570()*-0.173346);
}

double NNfunction_ss_cLsL::synapse0x256cc60() {
   return (neuron0x25458b0()*-9.50141e-06);
}

double NNfunction_ss_cLsL::synapse0x256cca0() {
   return (neuron0x2545bf0()*-0.867847);
}

double NNfunction_ss_cLsL::synapse0x256cce0() {
   return (neuron0x2545f30()*-0.0308581);
}

double NNfunction_ss_cLsL::synapse0x256cd20() {
   return (neuron0x2546270()*0.209338);
}

double NNfunction_ss_cLsL::synapse0x256cd60() {
   return (neuron0x25465b0()*0.009642);
}

double NNfunction_ss_cLsL::synapse0x256cda0() {
   return (neuron0x25468f0()*-0.342361);
}

double NNfunction_ss_cLsL::synapse0x256cde0() {
   return (neuron0x2546c30()*0.580613);
}

double NNfunction_ss_cLsL::synapse0x256ce20() {
   return (neuron0x2546f70()*-0.0735283);
}

double NNfunction_ss_cLsL::synapse0x256ce60() {
   return (neuron0x25472b0()*0.0514369);
}

double NNfunction_ss_cLsL::synapse0x256cea0() {
   return (neuron0x25475f0()*-0.0250806);
}

double NNfunction_ss_cLsL::synapse0x256cee0() {
   return (neuron0x2547930()*0.459724);
}

double NNfunction_ss_cLsL::synapse0x256cf20() {
   return (neuron0x2547c70()*-0.533016);
}

double NNfunction_ss_cLsL::synapse0x256cf60() {
   return (neuron0x2547fb0()*-0.000397711);
}

double NNfunction_ss_cLsL::synapse0x256cfa0() {
   return (neuron0x25482f0()*-0.364246);
}

double NNfunction_ss_cLsL::synapse0x256cfe0() {
   return (neuron0x2548630()*0.126852);
}

double NNfunction_ss_cLsL::synapse0x255ad90() {
   return (neuron0x2548970()*-0.25783);
}

double NNfunction_ss_cLsL::synapse0x255add0() {
   return (neuron0x2548ed0()*-0.336568);
}

double NNfunction_ss_cLsL::synapse0x256d130() {
   return (neuron0x25490f0()*-0.210794);
}

double NNfunction_ss_cLsL::synapse0x256d170() {
   return (neuron0x2549430()*-0.0179426);
}

double NNfunction_ss_cLsL::synapse0x256d1b0() {
   return (neuron0x2549770()*-0.0669566);
}

double NNfunction_ss_cLsL::synapse0x256d1f0() {
   return (neuron0x2549ab0()*-0.0502193);
}

double NNfunction_ss_cLsL::synapse0x256d230() {
   return (neuron0x2549df0()*0.219273);
}

double NNfunction_ss_cLsL::synapse0x256d270() {
   return (neuron0x254a130()*0.060534);
}

double NNfunction_ss_cLsL::synapse0x256d5f0() {
   return (neuron0x2545570()*-0.0374714);
}

double NNfunction_ss_cLsL::synapse0x256d630() {
   return (neuron0x25458b0()*0.0137398);
}

double NNfunction_ss_cLsL::synapse0x256d670() {
   return (neuron0x2545bf0()*1.77733);
}

double NNfunction_ss_cLsL::synapse0x256d6b0() {
   return (neuron0x2545f30()*-0.0521031);
}

double NNfunction_ss_cLsL::synapse0x256d6f0() {
   return (neuron0x2546270()*-0.00740187);
}

double NNfunction_ss_cLsL::synapse0x256d730() {
   return (neuron0x25465b0()*0.000887974);
}

double NNfunction_ss_cLsL::synapse0x256d770() {
   return (neuron0x25468f0()*-0.00908323);
}

double NNfunction_ss_cLsL::synapse0x256d7b0() {
   return (neuron0x2546c30()*0.015182);
}

double NNfunction_ss_cLsL::synapse0x256d7f0() {
   return (neuron0x2546f70()*0.0442306);
}

double NNfunction_ss_cLsL::synapse0x256d830() {
   return (neuron0x25472b0()*-0.0407644);
}

double NNfunction_ss_cLsL::synapse0x256d870() {
   return (neuron0x25475f0()*0.023996);
}

double NNfunction_ss_cLsL::synapse0x256d8b0() {
   return (neuron0x2547930()*0.0154998);
}

double NNfunction_ss_cLsL::synapse0x256d8f0() {
   return (neuron0x2547c70()*-0.17324);
}

double NNfunction_ss_cLsL::synapse0x256d930() {
   return (neuron0x2547fb0()*0.0655061);
}

double NNfunction_ss_cLsL::synapse0x256d970() {
   return (neuron0x25482f0()*-0.00178367);
}

double NNfunction_ss_cLsL::synapse0x256d9b0() {
   return (neuron0x2548630()*-0.070258);
}

double NNfunction_ss_cLsL::synapse0x256d440() {
   return (neuron0x2548970()*-0.00310947);
}

double NNfunction_ss_cLsL::synapse0x256d480() {
   return (neuron0x2548ed0()*0.00914816);
}

double NNfunction_ss_cLsL::synapse0x256db00() {
   return (neuron0x25490f0()*0.00682851);
}

double NNfunction_ss_cLsL::synapse0x256db40() {
   return (neuron0x2549430()*0.0322477);
}

double NNfunction_ss_cLsL::synapse0x256db80() {
   return (neuron0x2549770()*-0.011563);
}

double NNfunction_ss_cLsL::synapse0x256dbc0() {
   return (neuron0x2549ab0()*0.0353123);
}

double NNfunction_ss_cLsL::synapse0x256dc00() {
   return (neuron0x2549df0()*-0.0754348);
}

double NNfunction_ss_cLsL::synapse0x256dc40() {
   return (neuron0x254a130()*-0.0452694);
}

double NNfunction_ss_cLsL::synapse0x256dfc0() {
   return (neuron0x2545570()*0.0235684);
}

double NNfunction_ss_cLsL::synapse0x256e000() {
   return (neuron0x25458b0()*0.0450685);
}

double NNfunction_ss_cLsL::synapse0x256e040() {
   return (neuron0x2545bf0()*0.322605);
}

double NNfunction_ss_cLsL::synapse0x256e080() {
   return (neuron0x2545f30()*-1.77694);
}

double NNfunction_ss_cLsL::synapse0x256e0c0() {
   return (neuron0x2546270()*0.592909);
}

double NNfunction_ss_cLsL::synapse0x256e100() {
   return (neuron0x25465b0()*-0.312723);
}

double NNfunction_ss_cLsL::synapse0x256e140() {
   return (neuron0x25468f0()*0.146402);
}

double NNfunction_ss_cLsL::synapse0x256e180() {
   return (neuron0x2546c30()*-0.209803);
}

double NNfunction_ss_cLsL::synapse0x256e1c0() {
   return (neuron0x2546f70()*-0.111266);
}

double NNfunction_ss_cLsL::synapse0x256e200() {
   return (neuron0x25472b0()*-0.159165);
}

double NNfunction_ss_cLsL::synapse0x256e240() {
   return (neuron0x25475f0()*-0.120756);
}

double NNfunction_ss_cLsL::synapse0x256e280() {
   return (neuron0x2547930()*0.269583);
}

double NNfunction_ss_cLsL::synapse0x256e2c0() {
   return (neuron0x2547c70()*-0.91216);
}

double NNfunction_ss_cLsL::synapse0x256e300() {
   return (neuron0x2547fb0()*-0.685685);
}

double NNfunction_ss_cLsL::synapse0x256e340() {
   return (neuron0x25482f0()*-0.0544146);
}

double NNfunction_ss_cLsL::synapse0x256e380() {
   return (neuron0x2548630()*0.440483);
}

double NNfunction_ss_cLsL::synapse0x256de10() {
   return (neuron0x2548970()*-0.0415792);
}

double NNfunction_ss_cLsL::synapse0x256de50() {
   return (neuron0x2548ed0()*-0.0726923);
}

double NNfunction_ss_cLsL::synapse0x256e4d0() {
   return (neuron0x25490f0()*-0.11601);
}

double NNfunction_ss_cLsL::synapse0x256e510() {
   return (neuron0x2549430()*0.479842);
}

double NNfunction_ss_cLsL::synapse0x256e550() {
   return (neuron0x2549770()*0.127566);
}

double NNfunction_ss_cLsL::synapse0x256e590() {
   return (neuron0x2549ab0()*-0.0553196);
}

double NNfunction_ss_cLsL::synapse0x256e5d0() {
   return (neuron0x2549df0()*-0.0141502);
}

double NNfunction_ss_cLsL::synapse0x256e610() {
   return (neuron0x254a130()*-0.214894);
}

double NNfunction_ss_cLsL::synapse0x256e990() {
   return (neuron0x2545570()*0.513665);
}

double NNfunction_ss_cLsL::synapse0x256e9d0() {
   return (neuron0x25458b0()*0.144011);
}

double NNfunction_ss_cLsL::synapse0x256ea10() {
   return (neuron0x2545bf0()*-0.833927);
}

double NNfunction_ss_cLsL::synapse0x256ea50() {
   return (neuron0x2545f30()*-0.359584);
}

double NNfunction_ss_cLsL::synapse0x256ea90() {
   return (neuron0x2546270()*1.17638);
}

double NNfunction_ss_cLsL::synapse0x256ead0() {
   return (neuron0x25465b0()*0.372086);
}

double NNfunction_ss_cLsL::synapse0x256eb10() {
   return (neuron0x25468f0()*-0.309546);
}

double NNfunction_ss_cLsL::synapse0x256eb50() {
   return (neuron0x2546c30()*0.0704175);
}

double NNfunction_ss_cLsL::synapse0x256eb90() {
   return (neuron0x2546f70()*0.340898);
}

double NNfunction_ss_cLsL::synapse0x256ebd0() {
   return (neuron0x25472b0()*-0.129087);
}

double NNfunction_ss_cLsL::synapse0x256ec10() {
   return (neuron0x25475f0()*-0.119335);
}

double NNfunction_ss_cLsL::synapse0x256ec50() {
   return (neuron0x2547930()*0.527379);
}

double NNfunction_ss_cLsL::synapse0x256ec90() {
   return (neuron0x2547c70()*0.895655);
}

double NNfunction_ss_cLsL::synapse0x256ecd0() {
   return (neuron0x2547fb0()*-0.201707);
}

double NNfunction_ss_cLsL::synapse0x256ed10() {
   return (neuron0x25482f0()*-0.15147);
}

double NNfunction_ss_cLsL::synapse0x256ed50() {
   return (neuron0x2548630()*0.101923);
}

double NNfunction_ss_cLsL::synapse0x256e7e0() {
   return (neuron0x2548970()*0.224212);
}

double NNfunction_ss_cLsL::synapse0x256e820() {
   return (neuron0x2548ed0()*-0.200417);
}

double NNfunction_ss_cLsL::synapse0x256eea0() {
   return (neuron0x25490f0()*-0.546736);
}

double NNfunction_ss_cLsL::synapse0x256eee0() {
   return (neuron0x2549430()*-0.0573214);
}

double NNfunction_ss_cLsL::synapse0x256ef20() {
   return (neuron0x2549770()*-0.443383);
}

double NNfunction_ss_cLsL::synapse0x256ef60() {
   return (neuron0x2549ab0()*0.392031);
}

double NNfunction_ss_cLsL::synapse0x256efa0() {
   return (neuron0x2549df0()*-0.144578);
}

double NNfunction_ss_cLsL::synapse0x256efe0() {
   return (neuron0x254a130()*-0.363335);
}

double NNfunction_ss_cLsL::synapse0x254b580() {
   return (neuron0x254a5d0()*0.255873);
}

double NNfunction_ss_cLsL::synapse0x254b5c0() {
   return (neuron0x254aee0()*-0.0316078);
}

double NNfunction_ss_cLsL::synapse0x254ca90() {
   return (neuron0x254b9c0()*5.25928);
}

double NNfunction_ss_cLsL::synapse0x254cad0() {
   return (neuron0x2305250()*0.00107006);
}

double NNfunction_ss_cLsL::synapse0x254d460() {
   return (neuron0x254c7e0()*0.0111489);
}

double NNfunction_ss_cLsL::synapse0x254d4a0() {
   return (neuron0x254d1b0()*0.370469);
}

double NNfunction_ss_cLsL::synapse0x254e230() {
   return (neuron0x254df80()*0.0233929);
}

double NNfunction_ss_cLsL::synapse0x254e270() {
   return (neuron0x254e950()*-0.0449842);
}

double NNfunction_ss_cLsL::synapse0x254ec00() {
   return (neuron0x254f320()*-0.0115005);
}

double NNfunction_ss_cLsL::synapse0x254ec40() {
   return (neuron0x254fe00()*0.00654841);
}

double NNfunction_ss_cLsL::synapse0x254f5d0() {
   return (neuron0x25507d0()*-0.115517);
}

double NNfunction_ss_cLsL::synapse0x254f610() {
   return (neuron0x254d8b0()*-0.0569642);
}

double NNfunction_ss_cLsL::synapse0x25500b0() {
   return (neuron0x2552380()*-0.00128452);
}

double NNfunction_ss_cLsL::synapse0x25500f0() {
   return (neuron0x2552d50()*0.0157145);
}

double NNfunction_ss_cLsL::synapse0x2550a80() {
   return (neuron0x2553720()*-0.12586);
}

double NNfunction_ss_cLsL::synapse0x2550ac0() {
   return (neuron0x25540f0()*-0.0396851);
}

double NNfunction_ss_cLsL::synapse0x254db60() {
   return (neuron0x2555f00()*4.95167);
}

double NNfunction_ss_cLsL::synapse0x254dba0() {
   return (neuron0x25561e0()*0.0489535);
}

double NNfunction_ss_cLsL::synapse0x2552630() {
   return (neuron0x2556bb0()*0.000319528);
}

double NNfunction_ss_cLsL::synapse0x2552670() {
   return (neuron0x2557580()*-0.0212499);
}

double NNfunction_ss_cLsL::synapse0x2553000() {
   return (neuron0x2557f50()*-0.0179101);
}

double NNfunction_ss_cLsL::synapse0x2553040() {
   return (neuron0x2558920()*0.605437);
}

double NNfunction_ss_cLsL::synapse0x25539d0() {
   return (neuron0x2551470()*-0.0678299);
}

double NNfunction_ss_cLsL::synapse0x2553a10() {
   return (neuron0x2551e40()*0.0266389);
}

double NNfunction_ss_cLsL::synapse0x25543a0() {
   return (neuron0x255b6b0()*0.00791222);
}

double NNfunction_ss_cLsL::synapse0x25543e0() {
   return (neuron0x255c080()*0.012085);
}

double NNfunction_ss_cLsL::synapse0x2548510() {
   return (neuron0x255ca50()*-0.694716);
}

double NNfunction_ss_cLsL::synapse0x2548550() {
   return (neuron0x255d420()*-0.0248837);
}

double NNfunction_ss_cLsL::synapse0x2556490() {
   return (neuron0x255ddf0()*0.0213616);
}

double NNfunction_ss_cLsL::synapse0x25564d0() {
   return (neuron0x255e7c0()*-1.76424);
}

double NNfunction_ss_cLsL::synapse0x2556e60() {
   return (neuron0x255f190()*0.108271);
}

double NNfunction_ss_cLsL::synapse0x2556ea0() {
   return (neuron0x255fb60()*-0.735299);
}

double NNfunction_ss_cLsL::synapse0x2557830() {
   return (neuron0x2555bf0()*-0.0358072);
}

double NNfunction_ss_cLsL::synapse0x2557870() {
   return (neuron0x2562740()*0.0142912);
}

double NNfunction_ss_cLsL::synapse0x2558200() {
   return (neuron0x2563110()*-0.0710825);
}

double NNfunction_ss_cLsL::synapse0x2558240() {
   return (neuron0x2563ae0()*-0.00342797);
}

double NNfunction_ss_cLsL::synapse0x2558bd0() {
   return (neuron0x25644b0()*-0.439355);
}

double NNfunction_ss_cLsL::synapse0x2558c10() {
   return (neuron0x2564e80()*-0.137421);
}

double NNfunction_ss_cLsL::synapse0x2551720() {
   return (neuron0x2565850()*0.0941932);
}

double NNfunction_ss_cLsL::synapse0x2551760() {
   return (neuron0x2566220()*-0.00388296);
}

double NNfunction_ss_cLsL::synapse0x255afd0() {
   return (neuron0x2566bf0()*0.0135113);
}

double NNfunction_ss_cLsL::synapse0x255b010() {
   return (neuron0x25677d0()*-0.0194436);
}

double NNfunction_ss_cLsL::synapse0x255b960() {
   return (neuron0x25681a0()*-0.114451);
}

double NNfunction_ss_cLsL::synapse0x255b9a0() {
   return (neuron0x2559020()*-0.415645);
}

double NNfunction_ss_cLsL::synapse0x255c330() {
   return (neuron0x25599f0()*-0.0182719);
}

double NNfunction_ss_cLsL::synapse0x255c370() {
   return (neuron0x255a3c0()*0.000536453);
}

double NNfunction_ss_cLsL::synapse0x255cd00() {
   return (neuron0x256ca00()*0.0551356);
}

double NNfunction_ss_cLsL::synapse0x255cd40() {
   return (neuron0x256d2b0()*0.363464);
}

double NNfunction_ss_cLsL::synapse0x255d6d0() {
   return (neuron0x256dc80()*-0.0712393);
}

double NNfunction_ss_cLsL::synapse0x255d710() {
   return (neuron0x256e650()*-0.0159654);
}

double NNfunction_ss_cLsL::synapse0x255fe10() {
   return (neuron0x254a5d0()*-0.420067);
}

double NNfunction_ss_cLsL::synapse0x255fe50() {
   return (neuron0x254aee0()*0.057125);
}

double NNfunction_ss_cLsL::synapse0x25553d0() {
   return (neuron0x254b9c0()*-0.802853);
}

double NNfunction_ss_cLsL::synapse0x2555410() {
   return (neuron0x2305250()*-0.012005);
}

double NNfunction_ss_cLsL::synapse0x25629f0() {
   return (neuron0x254c7e0()*0.0440079);
}

double NNfunction_ss_cLsL::synapse0x2562a30() {
   return (neuron0x254d1b0()*0.00549504);
}

double NNfunction_ss_cLsL::synapse0x25633c0() {
   return (neuron0x254df80()*0.0827304);
}

double NNfunction_ss_cLsL::synapse0x2563400() {
   return (neuron0x254e950()*-0.108264);
}

double NNfunction_ss_cLsL::synapse0x2563d90() {
   return (neuron0x254f320()*0.0425989);
}

double NNfunction_ss_cLsL::synapse0x2563dd0() {
   return (neuron0x254fe00()*0.0936794);
}

double NNfunction_ss_cLsL::synapse0x2564760() {
   return (neuron0x25507d0()*-0.936894);
}

double NNfunction_ss_cLsL::synapse0x25647a0() {
   return (neuron0x254d8b0()*0.108012);
}

double NNfunction_ss_cLsL::synapse0x2565130() {
   return (neuron0x2552380()*0.061804);
}

double NNfunction_ss_cLsL::synapse0x2565170() {
   return (neuron0x2552d50()*0.0284504);
}

double NNfunction_ss_cLsL::synapse0x2565b00() {
   return (neuron0x2553720()*-0.209499);
}

double NNfunction_ss_cLsL::synapse0x2565b40() {
   return (neuron0x25540f0()*-0.128409);
}

double NNfunction_ss_cLsL::synapse0x25664d0() {
   return (neuron0x2555f00()*1.36814);
}

double NNfunction_ss_cLsL::synapse0x2566510() {
   return (neuron0x25561e0()*-0.0930453);
}

double NNfunction_ss_cLsL::synapse0x2566ea0() {
   return (neuron0x2556bb0()*0.0705107);
}

double NNfunction_ss_cLsL::synapse0x2566ee0() {
   return (neuron0x2557580()*0.0281228);
}

double NNfunction_ss_cLsL::synapse0x2567a80() {
   return (neuron0x2557f50()*0.0962189);
}

double NNfunction_ss_cLsL::synapse0x2567ac0() {
   return (neuron0x2558920()*1.14496);
}

double NNfunction_ss_cLsL::synapse0x2568450() {
   return (neuron0x2551470()*0.121111);
}

double NNfunction_ss_cLsL::synapse0x2568490() {
   return (neuron0x2551e40()*-0.276274);
}

double NNfunction_ss_cLsL::synapse0x25592d0() {
   return (neuron0x255b6b0()*-0.0100742);
}

double NNfunction_ss_cLsL::synapse0x2559310() {
   return (neuron0x255c080()*0.0962396);
}

double NNfunction_ss_cLsL::synapse0x2559ca0() {
   return (neuron0x255ca50()*-0.241151);
}

double NNfunction_ss_cLsL::synapse0x2559ce0() {
   return (neuron0x255d420()*-0.215019);
}

double NNfunction_ss_cLsL::synapse0x255a670() {
   return (neuron0x255ddf0()*-0.0136735);
}

double NNfunction_ss_cLsL::synapse0x255a6b0() {
   return (neuron0x255e7c0()*-1.79087);
}

double NNfunction_ss_cLsL::synapse0x256cb90() {
   return (neuron0x255f190()*0.0693783);
}

double NNfunction_ss_cLsL::synapse0x256cbd0() {
   return (neuron0x255fb60()*-0.624989);
}

double NNfunction_ss_cLsL::synapse0x256d560() {
   return (neuron0x2555bf0()*-0.0259684);
}

double NNfunction_ss_cLsL::synapse0x256d5a0() {
   return (neuron0x2562740()*-0.145497);
}

double NNfunction_ss_cLsL::synapse0x256df30() {
   return (neuron0x2563110()*0.160339);
}

double NNfunction_ss_cLsL::synapse0x256df70() {
   return (neuron0x2563ae0()*-0.000546412);
}

double NNfunction_ss_cLsL::synapse0x256e900() {
   return (neuron0x25644b0()*-0.306716);
}

double NNfunction_ss_cLsL::synapse0x256e940() {
   return (neuron0x2564e80()*-0.964084);
}

double NNfunction_ss_cLsL::synapse0x254a7f0() {
   return (neuron0x2565850()*-0.065602);
}

double NNfunction_ss_cLsL::synapse0x254a830() {
   return (neuron0x2566220()*-0.0200505);
}

double NNfunction_ss_cLsL::synapse0x255e0a0() {
   return (neuron0x2566bf0()*0.0325086);
}

double NNfunction_ss_cLsL::synapse0x255e0e0() {
   return (neuron0x25677d0()*0.0256801);
}

double NNfunction_ss_cLsL::synapse0x256f020() {
   return (neuron0x25681a0()*0.114382);
}

double NNfunction_ss_cLsL::synapse0x256f060() {
   return (neuron0x2559020()*0.742861);
}

double NNfunction_ss_cLsL::synapse0x256f0a0() {
   return (neuron0x25599f0()*0.0311231);
}

double NNfunction_ss_cLsL::synapse0x256f0e0() {
   return (neuron0x255a3c0()*-0.00313343);
}

double NNfunction_ss_cLsL::synapse0x2575f90() {
   return (neuron0x256ca00()*-0.18211);
}

double NNfunction_ss_cLsL::synapse0x2575fd0() {
   return (neuron0x256d2b0()*-0.177621);
}

double NNfunction_ss_cLsL::synapse0x2576010() {
   return (neuron0x256dc80()*0.0355891);
}

double NNfunction_ss_cLsL::synapse0x2576050() {
   return (neuron0x256e650()*0.0999555);
}

double NNfunction_ss_cLsL::synapse0x25763d0() {
   return (neuron0x254a5d0()*2.70841);
}

double NNfunction_ss_cLsL::synapse0x2576410() {
   return (neuron0x254aee0()*0.691723);
}

double NNfunction_ss_cLsL::synapse0x2576450() {
   return (neuron0x254b9c0()*0.383387);
}

double NNfunction_ss_cLsL::synapse0x2576490() {
   return (neuron0x2305250()*-1.92851);
}

double NNfunction_ss_cLsL::synapse0x25764d0() {
   return (neuron0x254c7e0()*1.10223);
}

double NNfunction_ss_cLsL::synapse0x2576510() {
   return (neuron0x254d1b0()*-0.643044);
}

double NNfunction_ss_cLsL::synapse0x2576550() {
   return (neuron0x254df80()*-0.243133);
}

double NNfunction_ss_cLsL::synapse0x2576590() {
   return (neuron0x254e950()*0.939497);
}

double NNfunction_ss_cLsL::synapse0x25765d0() {
   return (neuron0x254f320()*0.343212);
}

double NNfunction_ss_cLsL::synapse0x2576610() {
   return (neuron0x254fe00()*0.773293);
}

double NNfunction_ss_cLsL::synapse0x2576650() {
   return (neuron0x25507d0()*-1.38821);
}

double NNfunction_ss_cLsL::synapse0x2576690() {
   return (neuron0x254d8b0()*-0.91269);
}

double NNfunction_ss_cLsL::synapse0x25766d0() {
   return (neuron0x2552380()*-0.744508);
}

double NNfunction_ss_cLsL::synapse0x2576710() {
   return (neuron0x2552d50()*-0.869956);
}

double NNfunction_ss_cLsL::synapse0x2576750() {
   return (neuron0x2553720()*0.139603);
}

double NNfunction_ss_cLsL::synapse0x2576790() {
   return (neuron0x25540f0()*-0.999291);
}

double NNfunction_ss_cLsL::synapse0x2576220() {
   return (neuron0x2555f00()*0.867321);
}

double NNfunction_ss_cLsL::synapse0x2576260() {
   return (neuron0x25561e0()*1.91425);
}

double NNfunction_ss_cLsL::synapse0x25768e0() {
   return (neuron0x2556bb0()*0.406814);
}

double NNfunction_ss_cLsL::synapse0x2576920() {
   return (neuron0x2557580()*0.301481);
}

double NNfunction_ss_cLsL::synapse0x2576960() {
   return (neuron0x2557f50()*1.38842);
}

double NNfunction_ss_cLsL::synapse0x25769a0() {
   return (neuron0x2558920()*1.63079);
}

double NNfunction_ss_cLsL::synapse0x25769e0() {
   return (neuron0x2551470()*-1.3252);
}

double NNfunction_ss_cLsL::synapse0x2576a20() {
   return (neuron0x2551e40()*0.72127);
}

double NNfunction_ss_cLsL::synapse0x2576a60() {
   return (neuron0x255b6b0()*1.89275);
}

double NNfunction_ss_cLsL::synapse0x2576aa0() {
   return (neuron0x255c080()*-0.462235);
}

double NNfunction_ss_cLsL::synapse0x2576ae0() {
   return (neuron0x255ca50()*-0.303743);
}

double NNfunction_ss_cLsL::synapse0x2576b20() {
   return (neuron0x255d420()*-0.665368);
}

double NNfunction_ss_cLsL::synapse0x2576b60() {
   return (neuron0x255ddf0()*1.12151);
}

double NNfunction_ss_cLsL::synapse0x2576ba0() {
   return (neuron0x255e7c0()*-1.37341);
}

double NNfunction_ss_cLsL::synapse0x2576be0() {
   return (neuron0x255f190()*-0.389002);
}

double NNfunction_ss_cLsL::synapse0x2576c20() {
   return (neuron0x255fb60()*-1.41354);
}

double NNfunction_ss_cLsL::synapse0x25767d0() {
   return (neuron0x2555bf0()*0.490886);
}

double NNfunction_ss_cLsL::synapse0x2576810() {
   return (neuron0x2562740()*0.78179);
}

double NNfunction_ss_cLsL::synapse0x2576850() {
   return (neuron0x2563110()*-0.389049);
}

double NNfunction_ss_cLsL::synapse0x2576890() {
   return (neuron0x2563ae0()*0.58118);
}

double NNfunction_ss_cLsL::synapse0x2576e70() {
   return (neuron0x25644b0()*0.188559);
}

double NNfunction_ss_cLsL::synapse0x2576eb0() {
   return (neuron0x2564e80()*0.987929);
}

double NNfunction_ss_cLsL::synapse0x2576ef0() {
   return (neuron0x2565850()*0.471979);
}

double NNfunction_ss_cLsL::synapse0x2576f30() {
   return (neuron0x2566220()*0.213462);
}

double NNfunction_ss_cLsL::synapse0x2576f70() {
   return (neuron0x2566bf0()*0.489239);
}

double NNfunction_ss_cLsL::synapse0x2576fb0() {
   return (neuron0x25677d0()*1.53596);
}

double NNfunction_ss_cLsL::synapse0x2576ff0() {
   return (neuron0x25681a0()*1.43519);
}

double NNfunction_ss_cLsL::synapse0x2577030() {
   return (neuron0x2559020()*-1.18594);
}

double NNfunction_ss_cLsL::synapse0x2577070() {
   return (neuron0x25599f0()*0.89436);
}

double NNfunction_ss_cLsL::synapse0x25770b0() {
   return (neuron0x255a3c0()*0.0476714);
}

double NNfunction_ss_cLsL::synapse0x25770f0() {
   return (neuron0x256ca00()*2.15452);
}

double NNfunction_ss_cLsL::synapse0x2577130() {
   return (neuron0x256d2b0()*-0.780679);
}

double NNfunction_ss_cLsL::synapse0x2577170() {
   return (neuron0x256dc80()*-0.548641);
}

double NNfunction_ss_cLsL::synapse0x25771b0() {
   return (neuron0x256e650()*1.61444);
}

double NNfunction_ss_cLsL::synapse0x2577530() {
   return (neuron0x254a5d0()*-1.00719);
}

double NNfunction_ss_cLsL::synapse0x2577570() {
   return (neuron0x254aee0()*-0.622739);
}

double NNfunction_ss_cLsL::synapse0x25775b0() {
   return (neuron0x254b9c0()*-0.831686);
}

double NNfunction_ss_cLsL::synapse0x25775f0() {
   return (neuron0x2305250()*0.409925);
}

double NNfunction_ss_cLsL::synapse0x2577630() {
   return (neuron0x254c7e0()*-0.708956);
}

double NNfunction_ss_cLsL::synapse0x2577670() {
   return (neuron0x254d1b0()*4.49679);
}

double NNfunction_ss_cLsL::synapse0x25776b0() {
   return (neuron0x254df80()*0.823533);
}

double NNfunction_ss_cLsL::synapse0x25776f0() {
   return (neuron0x254e950()*-2.03974);
}

double NNfunction_ss_cLsL::synapse0x2577730() {
   return (neuron0x254f320()*-0.583201);
}

double NNfunction_ss_cLsL::synapse0x2577770() {
   return (neuron0x254fe00()*1.27634);
}

double NNfunction_ss_cLsL::synapse0x25777b0() {
   return (neuron0x25507d0()*1.91596);
}

double NNfunction_ss_cLsL::synapse0x25777f0() {
   return (neuron0x254d8b0()*0.726614);
}

double NNfunction_ss_cLsL::synapse0x2577830() {
   return (neuron0x2552380()*0.964758);
}

double NNfunction_ss_cLsL::synapse0x2577870() {
   return (neuron0x2552d50()*0.261428);
}

double NNfunction_ss_cLsL::synapse0x25778b0() {
   return (neuron0x2553720()*-2.68438);
}

double NNfunction_ss_cLsL::synapse0x25778f0() {
   return (neuron0x25540f0()*-1.30167);
}

double NNfunction_ss_cLsL::synapse0x2577380() {
   return (neuron0x2555f00()*-5.48611);
}

double NNfunction_ss_cLsL::synapse0x25773c0() {
   return (neuron0x25561e0()*-0.389212);
}

double NNfunction_ss_cLsL::synapse0x2577a40() {
   return (neuron0x2556bb0()*1.134);
}

double NNfunction_ss_cLsL::synapse0x2577a80() {
   return (neuron0x2557580()*-0.966893);
}

double NNfunction_ss_cLsL::synapse0x2577ac0() {
   return (neuron0x2557f50()*0.100999);
}

double NNfunction_ss_cLsL::synapse0x2577b00() {
   return (neuron0x2558920()*-0.657088);
}

double NNfunction_ss_cLsL::synapse0x2577b40() {
   return (neuron0x2551470()*-0.16746);
}

double NNfunction_ss_cLsL::synapse0x2577b80() {
   return (neuron0x2551e40()*-1.05404);
}

double NNfunction_ss_cLsL::synapse0x2577bc0() {
   return (neuron0x255b6b0()*-0.887456);
}

double NNfunction_ss_cLsL::synapse0x2577c00() {
   return (neuron0x255c080()*1.12104);
}

double NNfunction_ss_cLsL::synapse0x2577c40() {
   return (neuron0x255ca50()*1.28999);
}

double NNfunction_ss_cLsL::synapse0x2577c80() {
   return (neuron0x255d420()*-1.82402);
}

double NNfunction_ss_cLsL::synapse0x2577cc0() {
   return (neuron0x255ddf0()*-1.1719);
}

double NNfunction_ss_cLsL::synapse0x2577d00() {
   return (neuron0x255e7c0()*2.17876);
}

double NNfunction_ss_cLsL::synapse0x2577d40() {
   return (neuron0x255f190()*2.17068);
}

double NNfunction_ss_cLsL::synapse0x2577d80() {
   return (neuron0x255fb60()*9.07556);
}

double NNfunction_ss_cLsL::synapse0x2577930() {
   return (neuron0x2555bf0()*-1.39414);
}

double NNfunction_ss_cLsL::synapse0x2577970() {
   return (neuron0x2562740()*-0.460812);
}

double NNfunction_ss_cLsL::synapse0x25779b0() {
   return (neuron0x2563110()*0.997647);
}

double NNfunction_ss_cLsL::synapse0x25779f0() {
   return (neuron0x2563ae0()*-0.363247);
}

double NNfunction_ss_cLsL::synapse0x2577fd0() {
   return (neuron0x25644b0()*-6.61238);
}

double NNfunction_ss_cLsL::synapse0x2578010() {
   return (neuron0x2564e80()*-3.96871);
}

double NNfunction_ss_cLsL::synapse0x2578050() {
   return (neuron0x2565850()*-0.594614);
}

double NNfunction_ss_cLsL::synapse0x2578090() {
   return (neuron0x2566220()*0.101775);
}

double NNfunction_ss_cLsL::synapse0x25780d0() {
   return (neuron0x2566bf0()*0.370636);
}

double NNfunction_ss_cLsL::synapse0x2578110() {
   return (neuron0x25677d0()*-0.337813);
}

double NNfunction_ss_cLsL::synapse0x2578150() {
   return (neuron0x25681a0()*-2.25152);
}

double NNfunction_ss_cLsL::synapse0x2578190() {
   return (neuron0x2559020()*3.27139);
}

double NNfunction_ss_cLsL::synapse0x25781d0() {
   return (neuron0x25599f0()*-0.555877);
}

double NNfunction_ss_cLsL::synapse0x2578210() {
   return (neuron0x255a3c0()*0.335743);
}

double NNfunction_ss_cLsL::synapse0x2578250() {
   return (neuron0x256ca00()*-1.26295);
}

double NNfunction_ss_cLsL::synapse0x2578290() {
   return (neuron0x256d2b0()*-1.72211);
}

double NNfunction_ss_cLsL::synapse0x25782d0() {
   return (neuron0x256dc80()*-1.26033);
}

double NNfunction_ss_cLsL::synapse0x2578310() {
   return (neuron0x256e650()*0.493984);
}

double NNfunction_ss_cLsL::synapse0x2578690() {
   return (neuron0x254a5d0()*0.214685);
}

double NNfunction_ss_cLsL::synapse0x25786d0() {
   return (neuron0x254aee0()*3.62004);
}

double NNfunction_ss_cLsL::synapse0x2578710() {
   return (neuron0x254b9c0()*2.2158);
}

double NNfunction_ss_cLsL::synapse0x2578750() {
   return (neuron0x2305250()*-0.805414);
}

double NNfunction_ss_cLsL::synapse0x2578790() {
   return (neuron0x254c7e0()*-0.986557);
}

double NNfunction_ss_cLsL::synapse0x25787d0() {
   return (neuron0x254d1b0()*0.502034);
}

double NNfunction_ss_cLsL::synapse0x2578810() {
   return (neuron0x254df80()*3.49617);
}

double NNfunction_ss_cLsL::synapse0x2578850() {
   return (neuron0x254e950()*-1.88104);
}

double NNfunction_ss_cLsL::synapse0x2578890() {
   return (neuron0x254f320()*1.05708);
}

double NNfunction_ss_cLsL::synapse0x25788d0() {
   return (neuron0x254fe00()*2.25521);
}

double NNfunction_ss_cLsL::synapse0x2578910() {
   return (neuron0x25507d0()*-2.05101);
}

double NNfunction_ss_cLsL::synapse0x2578950() {
   return (neuron0x254d8b0()*-1.54458);
}

double NNfunction_ss_cLsL::synapse0x2578990() {
   return (neuron0x2552380()*0.305347);
}

double NNfunction_ss_cLsL::synapse0x25789d0() {
   return (neuron0x2552d50()*-2.42888);
}

double NNfunction_ss_cLsL::synapse0x2578a10() {
   return (neuron0x2553720()*-0.797092);
}

double NNfunction_ss_cLsL::synapse0x2578a50() {
   return (neuron0x25540f0()*-0.170883);
}

double NNfunction_ss_cLsL::synapse0x25784e0() {
   return (neuron0x2555f00()*2.88667);
}

double NNfunction_ss_cLsL::synapse0x2578520() {
   return (neuron0x25561e0()*1.89138);
}

double NNfunction_ss_cLsL::synapse0x2578ba0() {
   return (neuron0x2556bb0()*3.76908);
}

double NNfunction_ss_cLsL::synapse0x2578be0() {
   return (neuron0x2557580()*-0.354801);
}

double NNfunction_ss_cLsL::synapse0x2578c20() {
   return (neuron0x2557f50()*-1.61416);
}

double NNfunction_ss_cLsL::synapse0x2578c60() {
   return (neuron0x2558920()*1.40894);
}

double NNfunction_ss_cLsL::synapse0x2578ca0() {
   return (neuron0x2551470()*-2.41243);
}

double NNfunction_ss_cLsL::synapse0x2578ce0() {
   return (neuron0x2551e40()*-1.30986);
}

double NNfunction_ss_cLsL::synapse0x2578d20() {
   return (neuron0x255b6b0()*-0.19158);
}

double NNfunction_ss_cLsL::synapse0x2578d60() {
   return (neuron0x255c080()*2.69234);
}

double NNfunction_ss_cLsL::synapse0x2578da0() {
   return (neuron0x255ca50()*2.5616);
}

double NNfunction_ss_cLsL::synapse0x2578de0() {
   return (neuron0x255d420()*-3.22382);
}

double NNfunction_ss_cLsL::synapse0x2578e20() {
   return (neuron0x255ddf0()*0.541636);
}

double NNfunction_ss_cLsL::synapse0x2578e60() {
   return (neuron0x255e7c0()*-1.44809);
}

double NNfunction_ss_cLsL::synapse0x2578ea0() {
   return (neuron0x255f190()*1.26708);
}

double NNfunction_ss_cLsL::synapse0x2578ee0() {
   return (neuron0x255fb60()*-1.43531);
}

double NNfunction_ss_cLsL::synapse0x2578a90() {
   return (neuron0x2555bf0()*-1.78356);
}

double NNfunction_ss_cLsL::synapse0x2578ad0() {
   return (neuron0x2562740()*1.30777);
}

double NNfunction_ss_cLsL::synapse0x2578b10() {
   return (neuron0x2563110()*-0.945196);
}

double NNfunction_ss_cLsL::synapse0x2578b50() {
   return (neuron0x2563ae0()*1.31173);
}

double NNfunction_ss_cLsL::synapse0x2579130() {
   return (neuron0x25644b0()*0.457695);
}

double NNfunction_ss_cLsL::synapse0x2579170() {
   return (neuron0x2564e80()*-0.803301);
}

double NNfunction_ss_cLsL::synapse0x25791b0() {
   return (neuron0x2565850()*3.24384);
}

double NNfunction_ss_cLsL::synapse0x25791f0() {
   return (neuron0x2566220()*2.44013);
}

double NNfunction_ss_cLsL::synapse0x2579230() {
   return (neuron0x2566bf0()*2.72773);
}

double NNfunction_ss_cLsL::synapse0x2579270() {
   return (neuron0x25677d0()*-0.660241);
}

double NNfunction_ss_cLsL::synapse0x25792b0() {
   return (neuron0x25681a0()*0.845392);
}

double NNfunction_ss_cLsL::synapse0x25792f0() {
   return (neuron0x2559020()*-1.43166);
}

double NNfunction_ss_cLsL::synapse0x2579330() {
   return (neuron0x25599f0()*1.14994);
}

double NNfunction_ss_cLsL::synapse0x2579370() {
   return (neuron0x255a3c0()*-2.32864);
}

double NNfunction_ss_cLsL::synapse0x25793b0() {
   return (neuron0x256ca00()*0.177039);
}

double NNfunction_ss_cLsL::synapse0x25793f0() {
   return (neuron0x256d2b0()*2.12753);
}

double NNfunction_ss_cLsL::synapse0x2579430() {
   return (neuron0x256dc80()*-0.538219);
}

double NNfunction_ss_cLsL::synapse0x2579470() {
   return (neuron0x256e650()*1.17059);
}

double NNfunction_ss_cLsL::synapse0x254a590() {
   return (neuron0x2575850()*-6.90441);
}

double NNfunction_ss_cLsL::synapse0x25796d0() {
   return (neuron0x2575bf0()*-2.13643);
}

double NNfunction_ss_cLsL::synapse0x2579710() {
   return (neuron0x2576090()*-2.69922);
}

double NNfunction_ss_cLsL::synapse0x2579750() {
   return (neuron0x25771f0()*10.3942);
}

double NNfunction_ss_cLsL::synapse0x2579790() {
   return (neuron0x2578350()*-4.31921);
}

