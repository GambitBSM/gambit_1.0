#include "NNfunction_gg.h"
#include <cmath>

double NNfunction_gg::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.592)/15.3426;
   input1 = (in1 - -0.671481)/1168.13;
   input2 = (in2 - 662.043)/630.991;
   input3 = (in3 - -42.958)/818.206;
   input4 = (in4 - 1076.88)/969.62;
   input5 = (in5 - 911.975)/962.984;
   input6 = (in6 - 919.998)/963.98;
   input7 = (in7 - 939.035)/943.506;
   input8 = (in8 - 929.733)/974.556;
   input9 = (in9 - 915.424)/960.07;
   input10 = (in10 - 986.788)/953.475;
   input11 = (in11 - 725.35)/870.318;
   input12 = (in12 - 733.729)/875.321;
   input13 = (in13 - 503.732)/517.945;
   input14 = (in14 - 736.165)/833.331;
   input15 = (in15 - 741.919)/835.255;
   input16 = (in16 - 545.449)/575.773;
   input17 = (in17 - 761.443)/903.013;
   input18 = (in18 - 759.806)/905.155;
   input19 = (in19 - 804.682)/878.318;
   input20 = (in20 - -3.81619)/494.875;
   input21 = (in21 - 0.849728)/1155.3;
   input22 = (in22 - -0.449566)/1203.69;
   input23 = (in23 - -203.538)/611.079;
   switch(index) {
     case 0:
         return neuron0x3533d80();
     default:
         return 0.;
   }
}

double NNfunction_gg::Value(int index, double* input) {
   input0 = (input[0] - 23.592)/15.3426;
   input1 = (input[1] - -0.671481)/1168.13;
   input2 = (input[2] - 662.043)/630.991;
   input3 = (input[3] - -42.958)/818.206;
   input4 = (input[4] - 1076.88)/969.62;
   input5 = (input[5] - 911.975)/962.984;
   input6 = (input[6] - 919.998)/963.98;
   input7 = (input[7] - 939.035)/943.506;
   input8 = (input[8] - 929.733)/974.556;
   input9 = (input[9] - 915.424)/960.07;
   input10 = (input[10] - 986.788)/953.475;
   input11 = (input[11] - 725.35)/870.318;
   input12 = (input[12] - 733.729)/875.321;
   input13 = (input[13] - 503.732)/517.945;
   input14 = (input[14] - 736.165)/833.331;
   input15 = (input[15] - 741.919)/835.255;
   input16 = (input[16] - 545.449)/575.773;
   input17 = (input[17] - 761.443)/903.013;
   input18 = (input[18] - 759.806)/905.155;
   input19 = (input[19] - 804.682)/878.318;
   input20 = (input[20] - -3.81619)/494.875;
   input21 = (input[21] - 0.849728)/1155.3;
   input22 = (input[22] - -0.449566)/1203.69;
   input23 = (input[23] - -203.538)/611.079;
   switch(index) {
     case 0:
         return neuron0x3533d80();
     default:
         return 0.;
   }
}

double NNfunction_gg::neuron0x34ffe70() {
   return input0;
}

double NNfunction_gg::neuron0x35001b0() {
   return input1;
}

double NNfunction_gg::neuron0x35004f0() {
   return input2;
}

double NNfunction_gg::neuron0x3500830() {
   return input3;
}

double NNfunction_gg::neuron0x3500b70() {
   return input4;
}

double NNfunction_gg::neuron0x3500eb0() {
   return input5;
}

double NNfunction_gg::neuron0x35011f0() {
   return input6;
}

double NNfunction_gg::neuron0x3501530() {
   return input7;
}

double NNfunction_gg::neuron0x3501870() {
   return input8;
}

double NNfunction_gg::neuron0x3501bb0() {
   return input9;
}

double NNfunction_gg::neuron0x3501ef0() {
   return input10;
}

double NNfunction_gg::neuron0x3502230() {
   return input11;
}

double NNfunction_gg::neuron0x3502570() {
   return input12;
}

double NNfunction_gg::neuron0x35028b0() {
   return input13;
}

double NNfunction_gg::neuron0x3502bf0() {
   return input14;
}

double NNfunction_gg::neuron0x3502f30() {
   return input15;
}

double NNfunction_gg::neuron0x3503270() {
   return input16;
}

double NNfunction_gg::neuron0x35037d0() {
   return input17;
}

double NNfunction_gg::neuron0x35039f0() {
   return input18;
}

double NNfunction_gg::neuron0x3503d30() {
   return input19;
}

double NNfunction_gg::neuron0x3504070() {
   return input20;
}

double NNfunction_gg::neuron0x35043b0() {
   return input21;
}

double NNfunction_gg::neuron0x35046f0() {
   return input22;
}

double NNfunction_gg::neuron0x3504a30() {
   return input23;
}

double NNfunction_gg::input0x3504ea0() {
   double input = 0.739264;
   input += synapse0x34ffd30();
   input += synapse0x34ffd70();
   input += synapse0x3505150();
   input += synapse0x3505190();
   input += synapse0x35051d0();
   input += synapse0x3505210();
   input += synapse0x3505250();
   input += synapse0x3505290();
   input += synapse0x35052d0();
   input += synapse0x3505310();
   input += synapse0x3505350();
   input += synapse0x3505390();
   input += synapse0x35053d0();
   input += synapse0x3505410();
   input += synapse0x3505450();
   input += synapse0x3505490();
   input += synapse0x34ffca0();
   input += synapse0x34ffce0();
   input += synapse0x32b1920();
   input += synapse0x32b1960();
   input += synapse0x35056f0();
   input += synapse0x3505730();
   input += synapse0x3505770();
   input += synapse0x35057b0();
   return input;
}

double NNfunction_gg::neuron0x3504ea0() {
   double input = input0x3504ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x35057f0() {
   double input = 1.14105;
   input += synapse0x3505b30();
   input += synapse0x3505b70();
   input += synapse0x3505bb0();
   input += synapse0x3505bf0();
   input += synapse0x3505c30();
   input += synapse0x3505c70();
   input += synapse0x3505cb0();
   input += synapse0x3505cf0();
   input += synapse0x3505d30();
   input += synapse0x35055e0();
   input += synapse0x3505620();
   input += synapse0x3505660();
   input += synapse0x35056a0();
   input += synapse0x3505f80();
   input += synapse0x3505fc0();
   input += synapse0x3506000();
   input += synapse0x3505980();
   input += synapse0x35059c0();
   input += synapse0x3506150();
   input += synapse0x3506190();
   input += synapse0x35061d0();
   input += synapse0x3506210();
   input += synapse0x3506250();
   input += synapse0x3506290();
   return input;
}

double NNfunction_gg::neuron0x35057f0() {
   double input = input0x35057f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x35062d0() {
   double input = 0.750732;
   input += synapse0x3506610();
   input += synapse0x3506650();
   input += synapse0x3506690();
   input += synapse0x35066d0();
   input += synapse0x3506710();
   input += synapse0x3506750();
   input += synapse0x3506790();
   input += synapse0x35067d0();
   input += synapse0x3506810();
   input += synapse0x3506850();
   input += synapse0x3506890();
   input += synapse0x35068d0();
   input += synapse0x3506910();
   input += synapse0x3506950();
   input += synapse0x3506990();
   input += synapse0x35069d0();
   input += synapse0x3506460();
   input += synapse0x35064a0();
   input += synapse0x32b1d50();
   input += synapse0x32bf470();
   input += synapse0x32bf4b0();
   input += synapse0x34eef00();
   input += synapse0x34eef40();
   input += synapse0x34eef80();
   return input;
}

double NNfunction_gg::neuron0x35062d0() {
   double input = input0x35062d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3505d70() {
   double input = 0.290716;
   input += synapse0x32bfd10();
   input += synapse0x3505f00();
   input += synapse0x3505f40();
   input += synapse0x3506b20();
   input += synapse0x3506b60();
   input += synapse0x3506ba0();
   input += synapse0x3506be0();
   input += synapse0x3506c20();
   input += synapse0x3506c60();
   input += synapse0x3506ca0();
   input += synapse0x3506ce0();
   input += synapse0x3506d20();
   input += synapse0x3506d60();
   input += synapse0x3506da0();
   input += synapse0x3506de0();
   input += synapse0x3506e20();
   input += synapse0x34ffdb0();
   input += synapse0x34ffdf0();
   input += synapse0x34ffe30();
   input += synapse0x3506f70();
   input += synapse0x3506fb0();
   input += synapse0x3506ff0();
   input += synapse0x3507030();
   input += synapse0x3507070();
   return input;
}

double NNfunction_gg::neuron0x3505d70() {
   double input = input0x3505d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x35070b0() {
   double input = -0.380793;
   input += synapse0x35073f0();
   input += synapse0x3507430();
   input += synapse0x3507470();
   input += synapse0x35074b0();
   input += synapse0x35074f0();
   input += synapse0x3507530();
   input += synapse0x3507570();
   input += synapse0x35075b0();
   input += synapse0x35075f0();
   input += synapse0x3507630();
   input += synapse0x3507670();
   input += synapse0x35076b0();
   input += synapse0x35076f0();
   input += synapse0x3507730();
   input += synapse0x3507770();
   input += synapse0x35077b0();
   input += synapse0x3507240();
   input += synapse0x3507280();
   input += synapse0x3507900();
   input += synapse0x3507940();
   input += synapse0x3507980();
   input += synapse0x35079c0();
   input += synapse0x3507a00();
   input += synapse0x3507a40();
   return input;
}

double NNfunction_gg::neuron0x35070b0() {
   double input = input0x35070b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3507a80() {
   double input = 0.855863;
   input += synapse0x3507dc0();
   input += synapse0x3507e00();
   input += synapse0x3507e40();
   input += synapse0x3507e80();
   input += synapse0x3507ec0();
   input += synapse0x3507f00();
   input += synapse0x3507f40();
   input += synapse0x3507f80();
   input += synapse0x3507fc0();
   input += synapse0x32bf7e0();
   input += synapse0x32bf820();
   input += synapse0x32bf860();
   input += synapse0x32bf8a0();
   input += synapse0x32bf8e0();
   input += synapse0x32bf920();
   input += synapse0x32bf960();
   input += synapse0x3507c10();
   input += synapse0x3507c50();
   input += synapse0x32bfab0();
   input += synapse0x32bfaf0();
   input += synapse0x32bfb30();
   input += synapse0x32bfb70();
   input += synapse0x32bfbb0();
   input += synapse0x3508810();
   return input;
}

double NNfunction_gg::neuron0x3507a80() {
   double input = input0x3507a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3508850() {
   double input = -1.89122;
   input += synapse0x3508b90();
   input += synapse0x3508bd0();
   input += synapse0x3508c10();
   input += synapse0x3508c50();
   input += synapse0x3508c90();
   input += synapse0x3508cd0();
   input += synapse0x3508d10();
   input += synapse0x3508d50();
   input += synapse0x3508d90();
   input += synapse0x3508dd0();
   input += synapse0x3508e10();
   input += synapse0x3508e50();
   input += synapse0x3508e90();
   input += synapse0x3508ed0();
   input += synapse0x3508f10();
   input += synapse0x3508f50();
   input += synapse0x35089e0();
   input += synapse0x3508a20();
   input += synapse0x35090a0();
   input += synapse0x35090e0();
   input += synapse0x3509120();
   input += synapse0x3509160();
   input += synapse0x35091a0();
   input += synapse0x35091e0();
   return input;
}

double NNfunction_gg::neuron0x3508850() {
   double input = input0x3508850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3509220() {
   double input = 2.11087;
   input += synapse0x3509560();
   input += synapse0x35095a0();
   input += synapse0x35095e0();
   input += synapse0x3509620();
   input += synapse0x3509660();
   input += synapse0x35096a0();
   input += synapse0x35096e0();
   input += synapse0x3509720();
   input += synapse0x3509760();
   input += synapse0x35097a0();
   input += synapse0x35097e0();
   input += synapse0x3509820();
   input += synapse0x3509860();
   input += synapse0x35098a0();
   input += synapse0x35098e0();
   input += synapse0x3509920();
   input += synapse0x35093b0();
   input += synapse0x35093f0();
   input += synapse0x3509a70();
   input += synapse0x3509ab0();
   input += synapse0x3509af0();
   input += synapse0x3509b30();
   input += synapse0x3509b70();
   input += synapse0x3509bb0();
   return input;
}

double NNfunction_gg::neuron0x3509220() {
   double input = input0x3509220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3509bf0() {
   double input = -0.529671;
   input += synapse0x35036c0();
   input += synapse0x3503700();
   input += synapse0x3503740();
   input += synapse0x3503780();
   input += synapse0x350a140();
   input += synapse0x350a180();
   input += synapse0x350a1c0();
   input += synapse0x350a200();
   input += synapse0x350a240();
   input += synapse0x350a280();
   input += synapse0x350a2c0();
   input += synapse0x350a300();
   input += synapse0x350a340();
   input += synapse0x350a380();
   input += synapse0x350a3c0();
   input += synapse0x350a400();
   input += synapse0x3509d80();
   input += synapse0x3509dc0();
   input += synapse0x350a550();
   input += synapse0x350a590();
   input += synapse0x350a5d0();
   input += synapse0x350a610();
   input += synapse0x350a650();
   input += synapse0x350a690();
   return input;
}

double NNfunction_gg::neuron0x3509bf0() {
   double input = input0x3509bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x350a6d0() {
   double input = 2.39497;
   input += synapse0x350aa10();
   input += synapse0x350aa50();
   input += synapse0x350aa90();
   input += synapse0x350aad0();
   input += synapse0x350ab10();
   input += synapse0x350ab50();
   input += synapse0x350ab90();
   input += synapse0x350abd0();
   input += synapse0x350ac10();
   input += synapse0x350ac50();
   input += synapse0x350ac90();
   input += synapse0x350acd0();
   input += synapse0x350ad10();
   input += synapse0x350ad50();
   input += synapse0x350ad90();
   input += synapse0x350add0();
   input += synapse0x350a860();
   input += synapse0x350a8a0();
   input += synapse0x350af20();
   input += synapse0x350af60();
   input += synapse0x350afa0();
   input += synapse0x350afe0();
   input += synapse0x350b020();
   input += synapse0x350b060();
   return input;
}

double NNfunction_gg::neuron0x350a6d0() {
   double input = input0x350a6d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x350b0a0() {
   double input = -0.722994;
   input += synapse0x350b3e0();
   input += synapse0x350b420();
   input += synapse0x350b460();
   input += synapse0x350b4a0();
   input += synapse0x350b4e0();
   input += synapse0x350b520();
   input += synapse0x350b560();
   input += synapse0x350b5a0();
   input += synapse0x350b5e0();
   input += synapse0x350b620();
   input += synapse0x350b660();
   input += synapse0x350b6a0();
   input += synapse0x350b6e0();
   input += synapse0x350b720();
   input += synapse0x350b760();
   input += synapse0x350b7a0();
   input += synapse0x350b230();
   input += synapse0x350b270();
   input += synapse0x3508000();
   input += synapse0x3508040();
   input += synapse0x3508080();
   input += synapse0x35080c0();
   input += synapse0x3508100();
   input += synapse0x3508140();
   return input;
}

double NNfunction_gg::neuron0x350b0a0() {
   double input = input0x350b0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3508180() {
   double input = -0.878394;
   input += synapse0x35084c0();
   input += synapse0x3508500();
   input += synapse0x3508540();
   input += synapse0x3508580();
   input += synapse0x35085c0();
   input += synapse0x3508600();
   input += synapse0x3508640();
   input += synapse0x3508680();
   input += synapse0x35086c0();
   input += synapse0x3508700();
   input += synapse0x3508740();
   input += synapse0x3508780();
   input += synapse0x35087c0();
   input += synapse0x350c900();
   input += synapse0x350c940();
   input += synapse0x350c980();
   input += synapse0x3508310();
   input += synapse0x3508350();
   input += synapse0x350cad0();
   input += synapse0x350cb10();
   input += synapse0x350cb50();
   input += synapse0x350cb90();
   input += synapse0x350cbd0();
   input += synapse0x350cc10();
   return input;
}

double NNfunction_gg::neuron0x3508180() {
   double input = input0x3508180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x350cc50() {
   double input = -0.989414;
   input += synapse0x350cf90();
   input += synapse0x350cfd0();
   input += synapse0x350d010();
   input += synapse0x350d050();
   input += synapse0x350d090();
   input += synapse0x350d0d0();
   input += synapse0x350d110();
   input += synapse0x350d150();
   input += synapse0x350d190();
   input += synapse0x350d1d0();
   input += synapse0x350d210();
   input += synapse0x350d250();
   input += synapse0x350d290();
   input += synapse0x350d2d0();
   input += synapse0x350d310();
   input += synapse0x350d350();
   input += synapse0x350cde0();
   input += synapse0x350ce20();
   input += synapse0x350d4a0();
   input += synapse0x350d4e0();
   input += synapse0x350d520();
   input += synapse0x350d560();
   input += synapse0x350d5a0();
   input += synapse0x350d5e0();
   return input;
}

double NNfunction_gg::neuron0x350cc50() {
   double input = input0x350cc50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x350d620() {
   double input = -1.18225;
   input += synapse0x350d960();
   input += synapse0x350d9a0();
   input += synapse0x350d9e0();
   input += synapse0x350da20();
   input += synapse0x350da60();
   input += synapse0x350daa0();
   input += synapse0x350dae0();
   input += synapse0x350db20();
   input += synapse0x350db60();
   input += synapse0x350dba0();
   input += synapse0x350dbe0();
   input += synapse0x350dc20();
   input += synapse0x350dc60();
   input += synapse0x350dca0();
   input += synapse0x350dce0();
   input += synapse0x350dd20();
   input += synapse0x350d7b0();
   input += synapse0x350d7f0();
   input += synapse0x350de70();
   input += synapse0x350deb0();
   input += synapse0x350def0();
   input += synapse0x350df30();
   input += synapse0x350df70();
   input += synapse0x350dfb0();
   return input;
}

double NNfunction_gg::neuron0x350d620() {
   double input = input0x350d620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x350dff0() {
   double input = -0.0688286;
   input += synapse0x350e330();
   input += synapse0x350e370();
   input += synapse0x350e3b0();
   input += synapse0x350e3f0();
   input += synapse0x350e430();
   input += synapse0x350e470();
   input += synapse0x350e4b0();
   input += synapse0x350e4f0();
   input += synapse0x350e530();
   input += synapse0x350e570();
   input += synapse0x350e5b0();
   input += synapse0x350e5f0();
   input += synapse0x350e630();
   input += synapse0x350e670();
   input += synapse0x350e6b0();
   input += synapse0x350e6f0();
   input += synapse0x350e180();
   input += synapse0x350e1c0();
   input += synapse0x350e840();
   input += synapse0x350e880();
   input += synapse0x350e8c0();
   input += synapse0x350e900();
   input += synapse0x350e940();
   input += synapse0x350e980();
   return input;
}

double NNfunction_gg::neuron0x350dff0() {
   double input = input0x350dff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x350e9c0() {
   double input = -0.251604;
   input += synapse0x350ed00();
   input += synapse0x3500090();
   input += synapse0x35000d0();
   input += synapse0x35003d0();
   input += synapse0x3500410();
   input += synapse0x3500710();
   input += synapse0x3500750();
   input += synapse0x3500a50();
   input += synapse0x3500a90();
   input += synapse0x3500d90();
   input += synapse0x3500dd0();
   input += synapse0x35010d0();
   input += synapse0x3501110();
   input += synapse0x3501410();
   input += synapse0x3501450();
   input += synapse0x3501750();
   input += synapse0x3501790();
   input += synapse0x3501a90();
   input += synapse0x3501ad0();
   input += synapse0x3501dd0();
   input += synapse0x3501e10();
   input += synapse0x3502110();
   input += synapse0x3502150();
   input += synapse0x3502450();
   return input;
}

double NNfunction_gg::neuron0x350e9c0() {
   double input = input0x350e9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x35107d0() {
   double input = 0.434594;
   input += synapse0x3502490();
   input += synapse0x3503150();
   input += synapse0x3503190();
   input += synapse0x350eb50();
   input += synapse0x350eb90();
   input += synapse0x3503490();
   input += synapse0x35034d0();
   input += synapse0x32b1800();
   input += synapse0x32b1840();
   input += synapse0x3503c10();
   input += synapse0x3503c50();
   input += synapse0x3503f50();
   input += synapse0x3503f90();
   input += synapse0x3504290();
   input += synapse0x35042d0();
   input += synapse0x35045d0();
   input += synapse0x3504610();
   input += synapse0x3504910();
   input += synapse0x3504950();
   input += synapse0x3504c50();
   input += synapse0x3504c90();
   input += synapse0x3502790();
   input += synapse0x35027d0();
   input += synapse0x3510a70();
   return input;
}

double NNfunction_gg::neuron0x35107d0() {
   double input = input0x35107d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3510ab0() {
   double input = 0.520928;
   input += synapse0x3510df0();
   input += synapse0x3510e30();
   input += synapse0x3510e70();
   input += synapse0x3510eb0();
   input += synapse0x3510ef0();
   input += synapse0x3510f30();
   input += synapse0x3510f70();
   input += synapse0x3510fb0();
   input += synapse0x3510ff0();
   input += synapse0x3511030();
   input += synapse0x3511070();
   input += synapse0x35110b0();
   input += synapse0x35110f0();
   input += synapse0x3511130();
   input += synapse0x3511170();
   input += synapse0x35111b0();
   input += synapse0x3510c40();
   input += synapse0x3510c80();
   input += synapse0x3511300();
   input += synapse0x3511340();
   input += synapse0x3511380();
   input += synapse0x35113c0();
   input += synapse0x3511400();
   input += synapse0x3511440();
   return input;
}

double NNfunction_gg::neuron0x3510ab0() {
   double input = input0x3510ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3511480() {
   double input = -1.54826;
   input += synapse0x35117c0();
   input += synapse0x3511800();
   input += synapse0x3511840();
   input += synapse0x3511880();
   input += synapse0x35118c0();
   input += synapse0x3511900();
   input += synapse0x3511940();
   input += synapse0x3511980();
   input += synapse0x35119c0();
   input += synapse0x3511a00();
   input += synapse0x3511a40();
   input += synapse0x3511a80();
   input += synapse0x3511ac0();
   input += synapse0x3511b00();
   input += synapse0x3511b40();
   input += synapse0x3511b80();
   input += synapse0x3511610();
   input += synapse0x3511650();
   input += synapse0x3511cd0();
   input += synapse0x3511d10();
   input += synapse0x3511d50();
   input += synapse0x3511d90();
   input += synapse0x3511dd0();
   input += synapse0x3511e10();
   return input;
}

double NNfunction_gg::neuron0x3511480() {
   double input = input0x3511480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3511e50() {
   double input = 1.43815;
   input += synapse0x3512190();
   input += synapse0x35121d0();
   input += synapse0x3512210();
   input += synapse0x3512250();
   input += synapse0x3512290();
   input += synapse0x35122d0();
   input += synapse0x3512310();
   input += synapse0x3512350();
   input += synapse0x3512390();
   input += synapse0x35123d0();
   input += synapse0x3512410();
   input += synapse0x3512450();
   input += synapse0x3512490();
   input += synapse0x35124d0();
   input += synapse0x3512510();
   input += synapse0x3512550();
   input += synapse0x3511fe0();
   input += synapse0x3512020();
   input += synapse0x35126a0();
   input += synapse0x35126e0();
   input += synapse0x3512720();
   input += synapse0x3512760();
   input += synapse0x35127a0();
   input += synapse0x35127e0();
   return input;
}

double NNfunction_gg::neuron0x3511e50() {
   double input = input0x3511e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3512820() {
   double input = 0.214001;
   input += synapse0x3512b60();
   input += synapse0x3512ba0();
   input += synapse0x3512be0();
   input += synapse0x3512c20();
   input += synapse0x3512c60();
   input += synapse0x3512ca0();
   input += synapse0x3512ce0();
   input += synapse0x3512d20();
   input += synapse0x3512d60();
   input += synapse0x3512da0();
   input += synapse0x3512de0();
   input += synapse0x3512e20();
   input += synapse0x3512e60();
   input += synapse0x3512ea0();
   input += synapse0x3512ee0();
   input += synapse0x3512f20();
   input += synapse0x35129b0();
   input += synapse0x35129f0();
   input += synapse0x3513070();
   input += synapse0x35130b0();
   input += synapse0x35130f0();
   input += synapse0x3513130();
   input += synapse0x3513170();
   input += synapse0x35131b0();
   return input;
}

double NNfunction_gg::neuron0x3512820() {
   double input = input0x3512820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x35131f0() {
   double input = 0.182348;
   input += synapse0x3513530();
   input += synapse0x3513570();
   input += synapse0x35135b0();
   input += synapse0x35135f0();
   input += synapse0x3513630();
   input += synapse0x3513670();
   input += synapse0x35136b0();
   input += synapse0x35136f0();
   input += synapse0x3513730();
   input += synapse0x350b8f0();
   input += synapse0x350b930();
   input += synapse0x350b970();
   input += synapse0x350b9b0();
   input += synapse0x350b9f0();
   input += synapse0x350ba30();
   input += synapse0x350ba70();
   input += synapse0x3513380();
   input += synapse0x35133c0();
   input += synapse0x350bbc0();
   input += synapse0x350bc00();
   input += synapse0x350bc40();
   input += synapse0x350bc80();
   input += synapse0x350bcc0();
   input += synapse0x350bd00();
   return input;
}

double NNfunction_gg::neuron0x35131f0() {
   double input = input0x35131f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x350bd40() {
   double input = 0.796261;
   input += synapse0x350c080();
   input += synapse0x350c0c0();
   input += synapse0x350c100();
   input += synapse0x350c140();
   input += synapse0x350c180();
   input += synapse0x350c1c0();
   input += synapse0x350c200();
   input += synapse0x350c240();
   input += synapse0x350c280();
   input += synapse0x350c2c0();
   input += synapse0x350c300();
   input += synapse0x350c340();
   input += synapse0x350c380();
   input += synapse0x350c3c0();
   input += synapse0x350c400();
   input += synapse0x350c440();
   input += synapse0x350bed0();
   input += synapse0x350bf10();
   input += synapse0x350c590();
   input += synapse0x350c5d0();
   input += synapse0x350c610();
   input += synapse0x350c650();
   input += synapse0x350c690();
   input += synapse0x350c6d0();
   return input;
}

double NNfunction_gg::neuron0x350bd40() {
   double input = input0x350bd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x350c710() {
   double input = 0.0342745;
   input += synapse0x350c8a0();
   input += synapse0x3515930();
   input += synapse0x3515970();
   input += synapse0x35159b0();
   input += synapse0x35159f0();
   input += synapse0x3515a30();
   input += synapse0x3515a70();
   input += synapse0x3515ab0();
   input += synapse0x3515af0();
   input += synapse0x3515b30();
   input += synapse0x3515b70();
   input += synapse0x3515bb0();
   input += synapse0x3515bf0();
   input += synapse0x3515c30();
   input += synapse0x3515c70();
   input += synapse0x3515cb0();
   input += synapse0x3515780();
   input += synapse0x35157c0();
   input += synapse0x3515e00();
   input += synapse0x3515e40();
   input += synapse0x3515e80();
   input += synapse0x3515ec0();
   input += synapse0x3515f00();
   input += synapse0x3515f40();
   return input;
}

double NNfunction_gg::neuron0x350c710() {
   double input = input0x350c710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3515f80() {
   double input = 1.64496;
   input += synapse0x35162c0();
   input += synapse0x3516300();
   input += synapse0x3516340();
   input += synapse0x3516380();
   input += synapse0x35163c0();
   input += synapse0x3516400();
   input += synapse0x3516440();
   input += synapse0x3516480();
   input += synapse0x35164c0();
   input += synapse0x3516500();
   input += synapse0x3516540();
   input += synapse0x3516580();
   input += synapse0x35165c0();
   input += synapse0x3516600();
   input += synapse0x3516640();
   input += synapse0x3516680();
   input += synapse0x3516110();
   input += synapse0x3516150();
   input += synapse0x35167d0();
   input += synapse0x3516810();
   input += synapse0x3516850();
   input += synapse0x3516890();
   input += synapse0x35168d0();
   input += synapse0x3516910();
   return input;
}

double NNfunction_gg::neuron0x3515f80() {
   double input = input0x3515f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3516950() {
   double input = 0.636173;
   input += synapse0x3516c90();
   input += synapse0x3516cd0();
   input += synapse0x3516d10();
   input += synapse0x3516d50();
   input += synapse0x3516d90();
   input += synapse0x3516dd0();
   input += synapse0x3516e10();
   input += synapse0x3516e50();
   input += synapse0x3516e90();
   input += synapse0x3516ed0();
   input += synapse0x3516f10();
   input += synapse0x3516f50();
   input += synapse0x3516f90();
   input += synapse0x3516fd0();
   input += synapse0x3517010();
   input += synapse0x3517050();
   input += synapse0x3516ae0();
   input += synapse0x3516b20();
   input += synapse0x35171a0();
   input += synapse0x35171e0();
   input += synapse0x3517220();
   input += synapse0x3517260();
   input += synapse0x35172a0();
   input += synapse0x35172e0();
   return input;
}

double NNfunction_gg::neuron0x3516950() {
   double input = input0x3516950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3517320() {
   double input = -0.151914;
   input += synapse0x3517660();
   input += synapse0x35176a0();
   input += synapse0x35176e0();
   input += synapse0x3517720();
   input += synapse0x3517760();
   input += synapse0x35177a0();
   input += synapse0x35177e0();
   input += synapse0x3517820();
   input += synapse0x3517860();
   input += synapse0x35178a0();
   input += synapse0x35178e0();
   input += synapse0x3517920();
   input += synapse0x3517960();
   input += synapse0x35179a0();
   input += synapse0x35179e0();
   input += synapse0x3517a20();
   input += synapse0x35174b0();
   input += synapse0x35174f0();
   input += synapse0x3517b70();
   input += synapse0x3517bb0();
   input += synapse0x3517bf0();
   input += synapse0x3517c30();
   input += synapse0x3517c70();
   input += synapse0x3517cb0();
   return input;
}

double NNfunction_gg::neuron0x3517320() {
   double input = input0x3517320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3517cf0() {
   double input = 0.47553;
   input += synapse0x3518030();
   input += synapse0x3518070();
   input += synapse0x35180b0();
   input += synapse0x35180f0();
   input += synapse0x3518130();
   input += synapse0x3518170();
   input += synapse0x35181b0();
   input += synapse0x35181f0();
   input += synapse0x3518230();
   input += synapse0x3518270();
   input += synapse0x35182b0();
   input += synapse0x35182f0();
   input += synapse0x3518330();
   input += synapse0x3518370();
   input += synapse0x35183b0();
   input += synapse0x35183f0();
   input += synapse0x3517e80();
   input += synapse0x3517ec0();
   input += synapse0x3518540();
   input += synapse0x3518580();
   input += synapse0x35185c0();
   input += synapse0x3518600();
   input += synapse0x3518640();
   input += synapse0x3518680();
   return input;
}

double NNfunction_gg::neuron0x3517cf0() {
   double input = input0x3517cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x35186c0() {
   double input = 0.191646;
   input += synapse0x3518a00();
   input += synapse0x3518a40();
   input += synapse0x3518a80();
   input += synapse0x3518ac0();
   input += synapse0x3518b00();
   input += synapse0x3518b40();
   input += synapse0x3518b80();
   input += synapse0x3518bc0();
   input += synapse0x3518c00();
   input += synapse0x3518c40();
   input += synapse0x3518c80();
   input += synapse0x3518cc0();
   input += synapse0x3518d00();
   input += synapse0x3518d40();
   input += synapse0x3518d80();
   input += synapse0x3518dc0();
   input += synapse0x3518850();
   input += synapse0x3518890();
   input += synapse0x3518f10();
   input += synapse0x3518f50();
   input += synapse0x3518f90();
   input += synapse0x3518fd0();
   input += synapse0x3519010();
   input += synapse0x3519050();
   return input;
}

double NNfunction_gg::neuron0x35186c0() {
   double input = input0x35186c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3519090() {
   double input = 3.25082;
   input += synapse0x35193d0();
   input += synapse0x3519410();
   input += synapse0x3519450();
   input += synapse0x3519490();
   input += synapse0x35194d0();
   input += synapse0x3519510();
   input += synapse0x3519550();
   input += synapse0x3519590();
   input += synapse0x35195d0();
   input += synapse0x3519610();
   input += synapse0x3519650();
   input += synapse0x3519690();
   input += synapse0x35196d0();
   input += synapse0x3519710();
   input += synapse0x3519750();
   input += synapse0x3519790();
   input += synapse0x3519220();
   input += synapse0x3519260();
   input += synapse0x35198e0();
   input += synapse0x3519920();
   input += synapse0x3519960();
   input += synapse0x35199a0();
   input += synapse0x35199e0();
   input += synapse0x3519a20();
   return input;
}

double NNfunction_gg::neuron0x3519090() {
   double input = input0x3519090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3519a60() {
   double input = 0.903665;
   input += synapse0x3519da0();
   input += synapse0x3519de0();
   input += synapse0x3519e20();
   input += synapse0x3519e60();
   input += synapse0x3519ea0();
   input += synapse0x3519ee0();
   input += synapse0x3519f20();
   input += synapse0x3519f60();
   input += synapse0x3519fa0();
   input += synapse0x3519fe0();
   input += synapse0x351a020();
   input += synapse0x351a060();
   input += synapse0x351a0a0();
   input += synapse0x351a0e0();
   input += synapse0x351a120();
   input += synapse0x351a160();
   input += synapse0x3519bf0();
   input += synapse0x3519c30();
   input += synapse0x351a2b0();
   input += synapse0x351a2f0();
   input += synapse0x351a330();
   input += synapse0x351a370();
   input += synapse0x351a3b0();
   input += synapse0x351a3f0();
   return input;
}

double NNfunction_gg::neuron0x3519a60() {
   double input = input0x3519a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x351a430() {
   double input = 0.908127;
   input += synapse0x351a770();
   input += synapse0x350ed40();
   input += synapse0x350ed80();
   input += synapse0x350edc0();
   input += synapse0x350f010();
   input += synapse0x350f050();
   input += synapse0x350f090();
   input += synapse0x350f2e0();
   input += synapse0x350f320();
   input += synapse0x350f570();
   input += synapse0x350f5b0();
   input += synapse0x350f5f0();
   input += synapse0x350f840();
   input += synapse0x350f880();
   input += synapse0x350fad0();
   input += synapse0x350fb10();
   input += synapse0x351a5c0();
   input += synapse0x351a600();
   input += synapse0x350fc60();
   input += synapse0x3510170();
   input += synapse0x35101b0();
   input += synapse0x35101f0();
   input += synapse0x3510440();
   input += synapse0x3510480();
   return input;
}

double NNfunction_gg::neuron0x351a430() {
   double input = input0x351a430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x35104c0() {
   double input = 0.653779;
   input += synapse0x350fd30();
   input += synapse0x350fd70();
   input += synapse0x350fdb0();
   input += synapse0x350fdf0();
   input += synapse0x3510770();
   input += synapse0x351cac0();
   input += synapse0x351cb00();
   input += synapse0x351cb40();
   input += synapse0x351cb80();
   input += synapse0x351cbc0();
   input += synapse0x351cc00();
   input += synapse0x351cc40();
   input += synapse0x351cc80();
   input += synapse0x351ccc0();
   input += synapse0x351cd00();
   input += synapse0x351cd40();
   input += synapse0x3510650();
   input += synapse0x3510690();
   input += synapse0x351ce90();
   input += synapse0x351ced0();
   input += synapse0x351cf10();
   input += synapse0x351cf50();
   input += synapse0x351cf90();
   input += synapse0x351cfd0();
   return input;
}

double NNfunction_gg::neuron0x35104c0() {
   double input = input0x35104c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x351d010() {
   double input = -0.366597;
   input += synapse0x351d350();
   input += synapse0x351d390();
   input += synapse0x351d3d0();
   input += synapse0x351d410();
   input += synapse0x351d450();
   input += synapse0x351d490();
   input += synapse0x351d4d0();
   input += synapse0x351d510();
   input += synapse0x351d550();
   input += synapse0x351d590();
   input += synapse0x351d5d0();
   input += synapse0x351d610();
   input += synapse0x351d650();
   input += synapse0x351d690();
   input += synapse0x351d6d0();
   input += synapse0x351d710();
   input += synapse0x351d1a0();
   input += synapse0x351d1e0();
   input += synapse0x351d860();
   input += synapse0x351d8a0();
   input += synapse0x351d8e0();
   input += synapse0x351d920();
   input += synapse0x351d960();
   input += synapse0x351d9a0();
   return input;
}

double NNfunction_gg::neuron0x351d010() {
   double input = input0x351d010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x351d9e0() {
   double input = 0.668115;
   input += synapse0x351dd20();
   input += synapse0x351dd60();
   input += synapse0x351dda0();
   input += synapse0x351dde0();
   input += synapse0x351de20();
   input += synapse0x351de60();
   input += synapse0x351dea0();
   input += synapse0x351dee0();
   input += synapse0x351df20();
   input += synapse0x351df60();
   input += synapse0x351dfa0();
   input += synapse0x351dfe0();
   input += synapse0x351e020();
   input += synapse0x351e060();
   input += synapse0x351e0a0();
   input += synapse0x351e0e0();
   input += synapse0x351db70();
   input += synapse0x351dbb0();
   input += synapse0x351e230();
   input += synapse0x351e270();
   input += synapse0x351e2b0();
   input += synapse0x351e2f0();
   input += synapse0x351e330();
   input += synapse0x351e370();
   return input;
}

double NNfunction_gg::neuron0x351d9e0() {
   double input = input0x351d9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x351e3b0() {
   double input = 0.362537;
   input += synapse0x351e6f0();
   input += synapse0x351e730();
   input += synapse0x351e770();
   input += synapse0x351e7b0();
   input += synapse0x351e7f0();
   input += synapse0x351e830();
   input += synapse0x351e870();
   input += synapse0x351e8b0();
   input += synapse0x351e8f0();
   input += synapse0x351e930();
   input += synapse0x351e970();
   input += synapse0x351e9b0();
   input += synapse0x351e9f0();
   input += synapse0x351ea30();
   input += synapse0x351ea70();
   input += synapse0x351eab0();
   input += synapse0x351e540();
   input += synapse0x351e580();
   input += synapse0x351ec00();
   input += synapse0x351ec40();
   input += synapse0x351ec80();
   input += synapse0x351ecc0();
   input += synapse0x351ed00();
   input += synapse0x351ed40();
   return input;
}

double NNfunction_gg::neuron0x351e3b0() {
   double input = input0x351e3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x351ed80() {
   double input = -0.156503;
   input += synapse0x351f0c0();
   input += synapse0x351f100();
   input += synapse0x351f140();
   input += synapse0x351f180();
   input += synapse0x351f1c0();
   input += synapse0x351f200();
   input += synapse0x351f240();
   input += synapse0x351f280();
   input += synapse0x351f2c0();
   input += synapse0x351f300();
   input += synapse0x351f340();
   input += synapse0x351f380();
   input += synapse0x351f3c0();
   input += synapse0x351f400();
   input += synapse0x351f440();
   input += synapse0x351f480();
   input += synapse0x351ef10();
   input += synapse0x351ef50();
   input += synapse0x351f5d0();
   input += synapse0x351f610();
   input += synapse0x351f650();
   input += synapse0x351f690();
   input += synapse0x351f6d0();
   input += synapse0x351f710();
   return input;
}

double NNfunction_gg::neuron0x351ed80() {
   double input = input0x351ed80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x351f750() {
   double input = 0.726718;
   input += synapse0x351fa90();
   input += synapse0x351fad0();
   input += synapse0x351fb10();
   input += synapse0x351fb50();
   input += synapse0x351fb90();
   input += synapse0x351fbd0();
   input += synapse0x351fc10();
   input += synapse0x351fc50();
   input += synapse0x351fc90();
   input += synapse0x351fcd0();
   input += synapse0x351fd10();
   input += synapse0x351fd50();
   input += synapse0x351fd90();
   input += synapse0x351fdd0();
   input += synapse0x351fe10();
   input += synapse0x351fe50();
   input += synapse0x351f8e0();
   input += synapse0x351f920();
   input += synapse0x351ffa0();
   input += synapse0x351ffe0();
   input += synapse0x3520020();
   input += synapse0x3520060();
   input += synapse0x35200a0();
   input += synapse0x35200e0();
   return input;
}

double NNfunction_gg::neuron0x351f750() {
   double input = input0x351f750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3520120() {
   double input = -0.0308349;
   input += synapse0x3520460();
   input += synapse0x35204a0();
   input += synapse0x35204e0();
   input += synapse0x3520520();
   input += synapse0x3520560();
   input += synapse0x35205a0();
   input += synapse0x35205e0();
   input += synapse0x3520620();
   input += synapse0x3520660();
   input += synapse0x35206a0();
   input += synapse0x35206e0();
   input += synapse0x3520720();
   input += synapse0x3520760();
   input += synapse0x35207a0();
   input += synapse0x35207e0();
   input += synapse0x3520820();
   input += synapse0x35202b0();
   input += synapse0x35202f0();
   input += synapse0x3520970();
   input += synapse0x35209b0();
   input += synapse0x35209f0();
   input += synapse0x3520a30();
   input += synapse0x3520a70();
   input += synapse0x3520ab0();
   return input;
}

double NNfunction_gg::neuron0x3520120() {
   double input = input0x3520120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3520af0() {
   double input = -2.67688;
   input += synapse0x3520e30();
   input += synapse0x3520e70();
   input += synapse0x3520eb0();
   input += synapse0x3520ef0();
   input += synapse0x3520f30();
   input += synapse0x3520f70();
   input += synapse0x3520fb0();
   input += synapse0x3520ff0();
   input += synapse0x3521030();
   input += synapse0x3521070();
   input += synapse0x35210b0();
   input += synapse0x35210f0();
   input += synapse0x3521130();
   input += synapse0x3521170();
   input += synapse0x35211b0();
   input += synapse0x35211f0();
   input += synapse0x3520c80();
   input += synapse0x3520cc0();
   input += synapse0x3521340();
   input += synapse0x3521380();
   input += synapse0x35213c0();
   input += synapse0x3521400();
   input += synapse0x3521440();
   input += synapse0x3521480();
   return input;
}

double NNfunction_gg::neuron0x3520af0() {
   double input = input0x3520af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x35214c0() {
   double input = -1.206;
   input += synapse0x3509f30();
   input += synapse0x3509f70();
   input += synapse0x3509fb0();
   input += synapse0x3509ff0();
   input += synapse0x350a030();
   input += synapse0x350a070();
   input += synapse0x350a0b0();
   input += synapse0x350a0f0();
   input += synapse0x3521c10();
   input += synapse0x3521c50();
   input += synapse0x3521c90();
   input += synapse0x3521cd0();
   input += synapse0x3521d10();
   input += synapse0x3521d50();
   input += synapse0x3521d90();
   input += synapse0x3521dd0();
   input += synapse0x3521650();
   input += synapse0x3521690();
   input += synapse0x3521f20();
   input += synapse0x3521f60();
   input += synapse0x3521fa0();
   input += synapse0x3521fe0();
   input += synapse0x3522020();
   input += synapse0x3522060();
   return input;
}

double NNfunction_gg::neuron0x35214c0() {
   double input = input0x35214c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x35220a0() {
   double input = 0.336156;
   input += synapse0x35223e0();
   input += synapse0x3522420();
   input += synapse0x3522460();
   input += synapse0x35224a0();
   input += synapse0x35224e0();
   input += synapse0x3522520();
   input += synapse0x3522560();
   input += synapse0x35225a0();
   input += synapse0x35225e0();
   input += synapse0x3522620();
   input += synapse0x3522660();
   input += synapse0x35226a0();
   input += synapse0x35226e0();
   input += synapse0x3522720();
   input += synapse0x3522760();
   input += synapse0x35227a0();
   input += synapse0x3522230();
   input += synapse0x3522270();
   input += synapse0x35228f0();
   input += synapse0x3522930();
   input += synapse0x3522970();
   input += synapse0x35229b0();
   input += synapse0x35229f0();
   input += synapse0x3522a30();
   return input;
}

double NNfunction_gg::neuron0x35220a0() {
   double input = input0x35220a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3522a70() {
   double input = -0.24622;
   input += synapse0x3522db0();
   input += synapse0x3522df0();
   input += synapse0x3522e30();
   input += synapse0x3522e70();
   input += synapse0x3522eb0();
   input += synapse0x3522ef0();
   input += synapse0x3522f30();
   input += synapse0x3522f70();
   input += synapse0x3522fb0();
   input += synapse0x3522ff0();
   input += synapse0x3523030();
   input += synapse0x3523070();
   input += synapse0x35230b0();
   input += synapse0x35230f0();
   input += synapse0x3523130();
   input += synapse0x3523170();
   input += synapse0x3522c00();
   input += synapse0x3522c40();
   input += synapse0x3513770();
   input += synapse0x35137b0();
   input += synapse0x35137f0();
   input += synapse0x3513830();
   input += synapse0x3513870();
   input += synapse0x35138b0();
   return input;
}

double NNfunction_gg::neuron0x3522a70() {
   double input = input0x3522a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x35138f0() {
   double input = 0.106153;
   input += synapse0x3513c30();
   input += synapse0x3513c70();
   input += synapse0x3513cb0();
   input += synapse0x3513cf0();
   input += synapse0x3513d30();
   input += synapse0x3513d70();
   input += synapse0x3513db0();
   input += synapse0x3513df0();
   input += synapse0x3513e30();
   input += synapse0x3513e70();
   input += synapse0x3513eb0();
   input += synapse0x3513ef0();
   input += synapse0x3513f30();
   input += synapse0x3513f70();
   input += synapse0x3513fb0();
   input += synapse0x3513ff0();
   input += synapse0x3513a80();
   input += synapse0x3513ac0();
   input += synapse0x3514140();
   input += synapse0x3514180();
   input += synapse0x35141c0();
   input += synapse0x3514200();
   input += synapse0x3514240();
   input += synapse0x3514280();
   return input;
}

double NNfunction_gg::neuron0x35138f0() {
   double input = input0x35138f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x35142c0() {
   double input = -0.353021;
   input += synapse0x3514600();
   input += synapse0x3514640();
   input += synapse0x3514680();
   input += synapse0x35146c0();
   input += synapse0x3514700();
   input += synapse0x3514740();
   input += synapse0x3514780();
   input += synapse0x35147c0();
   input += synapse0x3514800();
   input += synapse0x3514840();
   input += synapse0x3514880();
   input += synapse0x35148c0();
   input += synapse0x3514900();
   input += synapse0x3514940();
   input += synapse0x3514980();
   input += synapse0x35149c0();
   input += synapse0x3514450();
   input += synapse0x3514490();
   input += synapse0x3514b10();
   input += synapse0x3514b50();
   input += synapse0x3514b90();
   input += synapse0x3514bd0();
   input += synapse0x3514c10();
   input += synapse0x3514c50();
   return input;
}

double NNfunction_gg::neuron0x35142c0() {
   double input = input0x35142c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3514c90() {
   double input = -1.51467;
   input += synapse0x3514fd0();
   input += synapse0x3515010();
   input += synapse0x3515050();
   input += synapse0x3515090();
   input += synapse0x35150d0();
   input += synapse0x3515110();
   input += synapse0x3515150();
   input += synapse0x3515190();
   input += synapse0x35151d0();
   input += synapse0x3515210();
   input += synapse0x3515250();
   input += synapse0x3515290();
   input += synapse0x35152d0();
   input += synapse0x3515310();
   input += synapse0x3515350();
   input += synapse0x3515390();
   input += synapse0x3514e20();
   input += synapse0x3514e60();
   input += synapse0x35154e0();
   input += synapse0x3515520();
   input += synapse0x3515560();
   input += synapse0x35155a0();
   input += synapse0x35155e0();
   input += synapse0x3515620();
   return input;
}

double NNfunction_gg::neuron0x3514c90() {
   double input = input0x3514c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x35272d0() {
   double input = 0.432999;
   input += synapse0x35274f0();
   input += synapse0x3527530();
   input += synapse0x3527570();
   input += synapse0x35275b0();
   input += synapse0x35275f0();
   input += synapse0x3527630();
   input += synapse0x3527670();
   input += synapse0x35276b0();
   input += synapse0x35276f0();
   input += synapse0x3527730();
   input += synapse0x3527770();
   input += synapse0x35277b0();
   input += synapse0x35277f0();
   input += synapse0x3527830();
   input += synapse0x3527870();
   input += synapse0x35278b0();
   input += synapse0x3515660();
   input += synapse0x35156a0();
   input += synapse0x3527a00();
   input += synapse0x3527a40();
   input += synapse0x3527a80();
   input += synapse0x3527ac0();
   input += synapse0x3527b00();
   input += synapse0x3527b40();
   return input;
}

double NNfunction_gg::neuron0x35272d0() {
   double input = input0x35272d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3527b80() {
   double input = 0.455599;
   input += synapse0x3527ec0();
   input += synapse0x3527f00();
   input += synapse0x3527f40();
   input += synapse0x3527f80();
   input += synapse0x3527fc0();
   input += synapse0x3528000();
   input += synapse0x3528040();
   input += synapse0x3528080();
   input += synapse0x35280c0();
   input += synapse0x3528100();
   input += synapse0x3528140();
   input += synapse0x3528180();
   input += synapse0x35281c0();
   input += synapse0x3528200();
   input += synapse0x3528240();
   input += synapse0x3528280();
   input += synapse0x3527d10();
   input += synapse0x3527d50();
   input += synapse0x35283d0();
   input += synapse0x3528410();
   input += synapse0x3528450();
   input += synapse0x3528490();
   input += synapse0x35284d0();
   input += synapse0x3528510();
   return input;
}

double NNfunction_gg::neuron0x3527b80() {
   double input = input0x3527b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3528550() {
   double input = 0.467855;
   input += synapse0x3528890();
   input += synapse0x35288d0();
   input += synapse0x3528910();
   input += synapse0x3528950();
   input += synapse0x3528990();
   input += synapse0x35289d0();
   input += synapse0x3528a10();
   input += synapse0x3528a50();
   input += synapse0x3528a90();
   input += synapse0x3528ad0();
   input += synapse0x3528b10();
   input += synapse0x3528b50();
   input += synapse0x3528b90();
   input += synapse0x3528bd0();
   input += synapse0x3528c10();
   input += synapse0x3528c50();
   input += synapse0x35286e0();
   input += synapse0x3528720();
   input += synapse0x3528da0();
   input += synapse0x3528de0();
   input += synapse0x3528e20();
   input += synapse0x3528e60();
   input += synapse0x3528ea0();
   input += synapse0x3528ee0();
   return input;
}

double NNfunction_gg::neuron0x3528550() {
   double input = input0x3528550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3528f20() {
   double input = 0.243722;
   input += synapse0x3529260();
   input += synapse0x35292a0();
   input += synapse0x35292e0();
   input += synapse0x3529320();
   input += synapse0x3529360();
   input += synapse0x35293a0();
   input += synapse0x35293e0();
   input += synapse0x3529420();
   input += synapse0x3529460();
   input += synapse0x35294a0();
   input += synapse0x35294e0();
   input += synapse0x3529520();
   input += synapse0x3529560();
   input += synapse0x35295a0();
   input += synapse0x35295e0();
   input += synapse0x3529620();
   input += synapse0x35290b0();
   input += synapse0x35290f0();
   input += synapse0x3529770();
   input += synapse0x35297b0();
   input += synapse0x35297f0();
   input += synapse0x3529830();
   input += synapse0x3529870();
   input += synapse0x35298b0();
   return input;
}

double NNfunction_gg::neuron0x3528f20() {
   double input = input0x3528f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3530120() {
   double input = -1.81516;
   input += synapse0x32bfc80();
   input += synapse0x32bfcc0();
   input += synapse0x3507360();
   input += synapse0x35073a0();
   input += synapse0x3507d30();
   input += synapse0x3507d70();
   input += synapse0x3508b00();
   input += synapse0x3508b40();
   input += synapse0x35094d0();
   input += synapse0x3509510();
   input += synapse0x3509ea0();
   input += synapse0x3509ee0();
   input += synapse0x350a980();
   input += synapse0x350a9c0();
   input += synapse0x350b350();
   input += synapse0x350b390();
   input += synapse0x3508430();
   input += synapse0x3508470();
   input += synapse0x350cf00();
   input += synapse0x350cf40();
   input += synapse0x350d8d0();
   input += synapse0x350d910();
   input += synapse0x350e2a0();
   input += synapse0x350e2e0();
   input += synapse0x350ec70();
   input += synapse0x350ecb0();
   input += synapse0x3502e10();
   input += synapse0x3502e50();
   input += synapse0x3510d60();
   input += synapse0x3510da0();
   input += synapse0x3511730();
   input += synapse0x3511770();
   input += synapse0x3512100();
   input += synapse0x3512140();
   input += synapse0x3512ad0();
   input += synapse0x3512b10();
   input += synapse0x35134a0();
   input += synapse0x35134e0();
   input += synapse0x350bff0();
   input += synapse0x350c030();
   input += synapse0x35158a0();
   input += synapse0x35158e0();
   input += synapse0x3516230();
   input += synapse0x3516270();
   input += synapse0x3516c00();
   input += synapse0x3516c40();
   input += synapse0x35175d0();
   input += synapse0x3517610();
   input += synapse0x3517fa0();
   input += synapse0x3517fe0();
   return input;
}

double NNfunction_gg::neuron0x3530120() {
   double input = input0x3530120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x35304c0() {
   double input = 0.237148;
   input += synapse0x351a6e0();
   input += synapse0x351a720();
   input += synapse0x350fca0();
   input += synapse0x350fce0();
   input += synapse0x351d2c0();
   input += synapse0x351d300();
   input += synapse0x351dc90();
   input += synapse0x351dcd0();
   input += synapse0x351e660();
   input += synapse0x351e6a0();
   input += synapse0x351f030();
   input += synapse0x351f070();
   input += synapse0x351fa00();
   input += synapse0x351fa40();
   input += synapse0x35203d0();
   input += synapse0x3520410();
   input += synapse0x3520da0();
   input += synapse0x3520de0();
   input += synapse0x3521770();
   input += synapse0x35217b0();
   input += synapse0x3522350();
   input += synapse0x3522390();
   input += synapse0x3522d20();
   input += synapse0x3522d60();
   input += synapse0x3513ba0();
   input += synapse0x3513be0();
   input += synapse0x3514570();
   input += synapse0x35145b0();
   input += synapse0x3514f40();
   input += synapse0x3514f80();
   input += synapse0x3527460();
   input += synapse0x35274a0();
   input += synapse0x3527e30();
   input += synapse0x3527e70();
   input += synapse0x3528800();
   input += synapse0x3528840();
   input += synapse0x35291d0();
   input += synapse0x3529210();
   input += synapse0x35050c0();
   input += synapse0x3505100();
   input += synapse0x3518970();
   input += synapse0x35189b0();
   input += synapse0x35298f0();
   input += synapse0x3529930();
   input += synapse0x3529970();
   input += synapse0x35299b0();
   input += synapse0x3530860();
   input += synapse0x35308a0();
   input += synapse0x35308e0();
   input += synapse0x3530920();
   return input;
}

double NNfunction_gg::neuron0x35304c0() {
   double input = input0x35304c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3530960() {
   double input = -1.47166;
   input += synapse0x3530ca0();
   input += synapse0x3530ce0();
   input += synapse0x3530d20();
   input += synapse0x3530d60();
   input += synapse0x3530da0();
   input += synapse0x3530de0();
   input += synapse0x3530e20();
   input += synapse0x3530e60();
   input += synapse0x3530ea0();
   input += synapse0x3530ee0();
   input += synapse0x3530f20();
   input += synapse0x3530f60();
   input += synapse0x3530fa0();
   input += synapse0x3530fe0();
   input += synapse0x3531020();
   input += synapse0x3531060();
   input += synapse0x3530af0();
   input += synapse0x3530b30();
   input += synapse0x35311b0();
   input += synapse0x35311f0();
   input += synapse0x3531230();
   input += synapse0x3531270();
   input += synapse0x35312b0();
   input += synapse0x35312f0();
   input += synapse0x3531330();
   input += synapse0x3531370();
   input += synapse0x35313b0();
   input += synapse0x35313f0();
   input += synapse0x3531430();
   input += synapse0x3531470();
   input += synapse0x35314b0();
   input += synapse0x35314f0();
   input += synapse0x35310a0();
   input += synapse0x35310e0();
   input += synapse0x3531120();
   input += synapse0x3531160();
   input += synapse0x3531740();
   input += synapse0x3531780();
   input += synapse0x35317c0();
   input += synapse0x3531800();
   input += synapse0x3531840();
   input += synapse0x3531880();
   input += synapse0x35318c0();
   input += synapse0x3531900();
   input += synapse0x3531940();
   input += synapse0x3531980();
   input += synapse0x35319c0();
   input += synapse0x3531a00();
   input += synapse0x3531a40();
   input += synapse0x3531a80();
   return input;
}

double NNfunction_gg::neuron0x3530960() {
   double input = input0x3530960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3531ac0() {
   double input = -0.124299;
   input += synapse0x3531e00();
   input += synapse0x3531e40();
   input += synapse0x3531e80();
   input += synapse0x3531ec0();
   input += synapse0x3531f00();
   input += synapse0x3531f40();
   input += synapse0x3531f80();
   input += synapse0x3531fc0();
   input += synapse0x3532000();
   input += synapse0x3532040();
   input += synapse0x3532080();
   input += synapse0x35320c0();
   input += synapse0x3532100();
   input += synapse0x3532140();
   input += synapse0x3532180();
   input += synapse0x35321c0();
   input += synapse0x3531c50();
   input += synapse0x3531c90();
   input += synapse0x3532310();
   input += synapse0x3532350();
   input += synapse0x3532390();
   input += synapse0x35323d0();
   input += synapse0x3532410();
   input += synapse0x3532450();
   input += synapse0x3532490();
   input += synapse0x35324d0();
   input += synapse0x3532510();
   input += synapse0x3532550();
   input += synapse0x3532590();
   input += synapse0x35325d0();
   input += synapse0x3532610();
   input += synapse0x3532650();
   input += synapse0x3532200();
   input += synapse0x3532240();
   input += synapse0x3532280();
   input += synapse0x35322c0();
   input += synapse0x35328a0();
   input += synapse0x35328e0();
   input += synapse0x3532920();
   input += synapse0x3532960();
   input += synapse0x35329a0();
   input += synapse0x35329e0();
   input += synapse0x3532a20();
   input += synapse0x3532a60();
   input += synapse0x3532aa0();
   input += synapse0x3532ae0();
   input += synapse0x3532b20();
   input += synapse0x3532b60();
   input += synapse0x3532ba0();
   input += synapse0x3532be0();
   return input;
}

double NNfunction_gg::neuron0x3531ac0() {
   double input = input0x3531ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3532c20() {
   double input = -1.25983;
   input += synapse0x3532f60();
   input += synapse0x3532fa0();
   input += synapse0x3532fe0();
   input += synapse0x3533020();
   input += synapse0x3533060();
   input += synapse0x35330a0();
   input += synapse0x35330e0();
   input += synapse0x3533120();
   input += synapse0x3533160();
   input += synapse0x35331a0();
   input += synapse0x35331e0();
   input += synapse0x3533220();
   input += synapse0x3533260();
   input += synapse0x35332a0();
   input += synapse0x35332e0();
   input += synapse0x3533320();
   input += synapse0x3532db0();
   input += synapse0x3532df0();
   input += synapse0x3533470();
   input += synapse0x35334b0();
   input += synapse0x35334f0();
   input += synapse0x3533530();
   input += synapse0x3533570();
   input += synapse0x35335b0();
   input += synapse0x35335f0();
   input += synapse0x3533630();
   input += synapse0x3533670();
   input += synapse0x35336b0();
   input += synapse0x35336f0();
   input += synapse0x3533730();
   input += synapse0x3533770();
   input += synapse0x35337b0();
   input += synapse0x3533360();
   input += synapse0x35333a0();
   input += synapse0x35333e0();
   input += synapse0x3533420();
   input += synapse0x3533a00();
   input += synapse0x3533a40();
   input += synapse0x3533a80();
   input += synapse0x3533ac0();
   input += synapse0x3533b00();
   input += synapse0x3533b40();
   input += synapse0x3533b80();
   input += synapse0x3533bc0();
   input += synapse0x3533c00();
   input += synapse0x3533c40();
   input += synapse0x3533c80();
   input += synapse0x3533cc0();
   input += synapse0x3533d00();
   input += synapse0x3533d40();
   return input;
}

double NNfunction_gg::neuron0x3532c20() {
   double input = input0x3532c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_gg::input0x3533d80() {
   double input = 13.2091;
   input += synapse0x3533fa0();
   input += synapse0x3533fe0();
   input += synapse0x3534020();
   input += synapse0x3534060();
   input += synapse0x35340a0();
   return input;
}

double NNfunction_gg::neuron0x3533d80() {
   double input = input0x3533d80();
   return (input * 1)+0;
}

double NNfunction_gg::synapse0x34ffd30() {
   return (neuron0x34ffe70()*-0.153218);
}

double NNfunction_gg::synapse0x34ffd70() {
   return (neuron0x35001b0()*0.0958204);
}

double NNfunction_gg::synapse0x3505150() {
   return (neuron0x35004f0()*-0.0160215);
}

double NNfunction_gg::synapse0x3505190() {
   return (neuron0x3500830()*0.894348);
}

double NNfunction_gg::synapse0x35051d0() {
   return (neuron0x3500b70()*-1.55322);
}

double NNfunction_gg::synapse0x3505210() {
   return (neuron0x3500eb0()*-0.503272);
}

double NNfunction_gg::synapse0x3505250() {
   return (neuron0x35011f0()*-0.899073);
}

double NNfunction_gg::synapse0x3505290() {
   return (neuron0x3501530()*-0.574528);
}

double NNfunction_gg::synapse0x35052d0() {
   return (neuron0x3501870()*-0.278374);
}

double NNfunction_gg::synapse0x3505310() {
   return (neuron0x3501bb0()*-0.241272);
}

double NNfunction_gg::synapse0x3505350() {
   return (neuron0x3501ef0()*-0.937436);
}

double NNfunction_gg::synapse0x3505390() {
   return (neuron0x3502230()*-0.113459);
}

double NNfunction_gg::synapse0x35053d0() {
   return (neuron0x3502570()*-0.197539);
}

double NNfunction_gg::synapse0x3505410() {
   return (neuron0x35028b0()*0.0512828);
}

double NNfunction_gg::synapse0x3505450() {
   return (neuron0x3502bf0()*0.158143);
}

double NNfunction_gg::synapse0x3505490() {
   return (neuron0x3502f30()*0.200732);
}

double NNfunction_gg::synapse0x34ffca0() {
   return (neuron0x3503270()*0.786344);
}

double NNfunction_gg::synapse0x34ffce0() {
   return (neuron0x35037d0()*-0.557539);
}

double NNfunction_gg::synapse0x32b1920() {
   return (neuron0x35039f0()*-0.578563);
}

double NNfunction_gg::synapse0x32b1960() {
   return (neuron0x3503d30()*0.316101);
}

double NNfunction_gg::synapse0x35056f0() {
   return (neuron0x3504070()*-0.0274751);
}

double NNfunction_gg::synapse0x3505730() {
   return (neuron0x35043b0()*-0.560367);
}

double NNfunction_gg::synapse0x3505770() {
   return (neuron0x35046f0()*-0.621823);
}

double NNfunction_gg::synapse0x35057b0() {
   return (neuron0x3504a30()*-0.367577);
}

double NNfunction_gg::synapse0x3505b30() {
   return (neuron0x34ffe70()*-0.114652);
}

double NNfunction_gg::synapse0x3505b70() {
   return (neuron0x35001b0()*0.110491);
}

double NNfunction_gg::synapse0x3505bb0() {
   return (neuron0x35004f0()*-0.0993005);
}

double NNfunction_gg::synapse0x3505bf0() {
   return (neuron0x3500830()*1.74055);
}

double NNfunction_gg::synapse0x3505c30() {
   return (neuron0x3500b70()*-0.0457517);
}

double NNfunction_gg::synapse0x3505c70() {
   return (neuron0x3500eb0()*0.0108438);
}

double NNfunction_gg::synapse0x3505cb0() {
   return (neuron0x35011f0()*0.11552);
}

double NNfunction_gg::synapse0x3505cf0() {
   return (neuron0x3501530()*-0.0861308);
}

double NNfunction_gg::synapse0x3505d30() {
   return (neuron0x3501870()*0.0333444);
}

double NNfunction_gg::synapse0x35055e0() {
   return (neuron0x3501bb0()*0.0153073);
}

double NNfunction_gg::synapse0x3505620() {
   return (neuron0x3501ef0()*0.0163215);
}

double NNfunction_gg::synapse0x3505660() {
   return (neuron0x3502230()*-0.166791);
}

double NNfunction_gg::synapse0x35056a0() {
   return (neuron0x3502570()*-0.200151);
}

double NNfunction_gg::synapse0x3505f80() {
   return (neuron0x35028b0()*-0.233503);
}

double NNfunction_gg::synapse0x3505fc0() {
   return (neuron0x3502bf0()*-0.112514);
}

double NNfunction_gg::synapse0x3506000() {
   return (neuron0x3502f30()*-0.198218);
}

double NNfunction_gg::synapse0x3505980() {
   return (neuron0x3503270()*-0.0521117);
}

double NNfunction_gg::synapse0x35059c0() {
   return (neuron0x35037d0()*0.00913255);
}

double NNfunction_gg::synapse0x3506150() {
   return (neuron0x35039f0()*-0.0719938);
}

double NNfunction_gg::synapse0x3506190() {
   return (neuron0x3503d30()*-0.0165828);
}

double NNfunction_gg::synapse0x35061d0() {
   return (neuron0x3504070()*-0.00604329);
}

double NNfunction_gg::synapse0x3506210() {
   return (neuron0x35043b0()*-0.0396822);
}

double NNfunction_gg::synapse0x3506250() {
   return (neuron0x35046f0()*-0.0654247);
}

double NNfunction_gg::synapse0x3506290() {
   return (neuron0x3504a30()*0.0571464);
}

double NNfunction_gg::synapse0x3506610() {
   return (neuron0x34ffe70()*-0.329969);
}

double NNfunction_gg::synapse0x3506650() {
   return (neuron0x35001b0()*-0.0181914);
}

double NNfunction_gg::synapse0x3506690() {
   return (neuron0x35004f0()*0.0146597);
}

double NNfunction_gg::synapse0x35066d0() {
   return (neuron0x3500830()*-0.412306);
}

double NNfunction_gg::synapse0x3506710() {
   return (neuron0x3500b70()*-0.558733);
}

double NNfunction_gg::synapse0x3506750() {
   return (neuron0x3500eb0()*-0.282881);
}

double NNfunction_gg::synapse0x3506790() {
   return (neuron0x35011f0()*-0.212882);
}

double NNfunction_gg::synapse0x35067d0() {
   return (neuron0x3501530()*-0.189993);
}

double NNfunction_gg::synapse0x3506810() {
   return (neuron0x3501870()*-0.17631);
}

double NNfunction_gg::synapse0x3506850() {
   return (neuron0x3501bb0()*-0.133723);
}

double NNfunction_gg::synapse0x3506890() {
   return (neuron0x3501ef0()*0.110006);
}

double NNfunction_gg::synapse0x35068d0() {
   return (neuron0x3502230()*-0.201014);
}

double NNfunction_gg::synapse0x3506910() {
   return (neuron0x3502570()*-0.237642);
}

double NNfunction_gg::synapse0x3506950() {
   return (neuron0x35028b0()*0.0762985);
}

double NNfunction_gg::synapse0x3506990() {
   return (neuron0x3502bf0()*-0.111776);
}

double NNfunction_gg::synapse0x35069d0() {
   return (neuron0x3502f30()*-0.108868);
}

double NNfunction_gg::synapse0x3506460() {
   return (neuron0x3503270()*0.22496);
}

double NNfunction_gg::synapse0x35064a0() {
   return (neuron0x35037d0()*0.0507042);
}

double NNfunction_gg::synapse0x32b1d50() {
   return (neuron0x35039f0()*-0.140377);
}

double NNfunction_gg::synapse0x32bf470() {
   return (neuron0x3503d30()*-0.16727);
}

double NNfunction_gg::synapse0x32bf4b0() {
   return (neuron0x3504070()*-0.170613);
}

double NNfunction_gg::synapse0x34eef00() {
   return (neuron0x35043b0()*0.0331821);
}

double NNfunction_gg::synapse0x34eef40() {
   return (neuron0x35046f0()*-0.143134);
}

double NNfunction_gg::synapse0x34eef80() {
   return (neuron0x3504a30()*-0.0446607);
}

double NNfunction_gg::synapse0x32bfd10() {
   return (neuron0x34ffe70()*-0.00185599);
}

double NNfunction_gg::synapse0x3505f00() {
   return (neuron0x35001b0()*0.0126959);
}

double NNfunction_gg::synapse0x3505f40() {
   return (neuron0x35004f0()*-0.0109904);
}

double NNfunction_gg::synapse0x3506b20() {
   return (neuron0x3500830()*0.749366);
}

double NNfunction_gg::synapse0x3506b60() {
   return (neuron0x3500b70()*-0.0126712);
}

double NNfunction_gg::synapse0x3506ba0() {
   return (neuron0x3500eb0()*0.0093984);
}

double NNfunction_gg::synapse0x3506be0() {
   return (neuron0x35011f0()*-0.000838265);
}

double NNfunction_gg::synapse0x3506c20() {
   return (neuron0x3501530()*-0.0005905);
}

double NNfunction_gg::synapse0x3506c60() {
   return (neuron0x3501870()*-0.00223957);
}

double NNfunction_gg::synapse0x3506ca0() {
   return (neuron0x3501bb0()*0.00459186);
}

double NNfunction_gg::synapse0x3506ce0() {
   return (neuron0x3501ef0()*0.00545716);
}

double NNfunction_gg::synapse0x3506d20() {
   return (neuron0x3502230()*-0.168336);
}

double NNfunction_gg::synapse0x3506d60() {
   return (neuron0x3502570()*0.0840709);
}

double NNfunction_gg::synapse0x3506da0() {
   return (neuron0x35028b0()*0.00246985);
}

double NNfunction_gg::synapse0x3506de0() {
   return (neuron0x3502bf0()*-0.605307);
}

double NNfunction_gg::synapse0x3506e20() {
   return (neuron0x3502f30()*0.0220068);
}

double NNfunction_gg::synapse0x34ffdb0() {
   return (neuron0x3503270()*-0.00460576);
}

double NNfunction_gg::synapse0x34ffdf0() {
   return (neuron0x35037d0()*0.0898691);
}

double NNfunction_gg::synapse0x34ffe30() {
   return (neuron0x35039f0()*0.0316226);
}

double NNfunction_gg::synapse0x3506f70() {
   return (neuron0x3503d30()*-0.00440958);
}

double NNfunction_gg::synapse0x3506fb0() {
   return (neuron0x3504070()*-0.0114915);
}

double NNfunction_gg::synapse0x3506ff0() {
   return (neuron0x35043b0()*0.000648308);
}

double NNfunction_gg::synapse0x3507030() {
   return (neuron0x35046f0()*-0.00661723);
}

double NNfunction_gg::synapse0x3507070() {
   return (neuron0x3504a30()*0.00897571);
}

double NNfunction_gg::synapse0x35073f0() {
   return (neuron0x34ffe70()*0.397608);
}

double NNfunction_gg::synapse0x3507430() {
   return (neuron0x35001b0()*-0.234811);
}

double NNfunction_gg::synapse0x3507470() {
   return (neuron0x35004f0()*-0.336917);
}

double NNfunction_gg::synapse0x35074b0() {
   return (neuron0x3500830()*-0.348036);
}

double NNfunction_gg::synapse0x35074f0() {
   return (neuron0x3500b70()*1.46025);
}

double NNfunction_gg::synapse0x3507530() {
   return (neuron0x3500eb0()*0.170212);
}

double NNfunction_gg::synapse0x3507570() {
   return (neuron0x35011f0()*0.0731031);
}

double NNfunction_gg::synapse0x35075b0() {
   return (neuron0x3501530()*0.0347589);
}

double NNfunction_gg::synapse0x35075f0() {
   return (neuron0x3501870()*0.749873);
}

double NNfunction_gg::synapse0x3507630() {
   return (neuron0x3501bb0()*0.199009);
}

double NNfunction_gg::synapse0x3507670() {
   return (neuron0x3501ef0()*1.0053);
}

double NNfunction_gg::synapse0x35076b0() {
   return (neuron0x3502230()*0.744111);
}

double NNfunction_gg::synapse0x35076f0() {
   return (neuron0x3502570()*0.381453);
}

double NNfunction_gg::synapse0x3507730() {
   return (neuron0x35028b0()*-0.27559);
}

double NNfunction_gg::synapse0x3507770() {
   return (neuron0x3502bf0()*0.177029);
}

double NNfunction_gg::synapse0x35077b0() {
   return (neuron0x3502f30()*0.350457);
}

double NNfunction_gg::synapse0x3507240() {
   return (neuron0x3503270()*-0.614119);
}

double NNfunction_gg::synapse0x3507280() {
   return (neuron0x35037d0()*0.190046);
}

double NNfunction_gg::synapse0x3507900() {
   return (neuron0x35039f0()*0.589401);
}

double NNfunction_gg::synapse0x3507940() {
   return (neuron0x3503d30()*0.169192);
}

double NNfunction_gg::synapse0x3507980() {
   return (neuron0x3504070()*0.0936955);
}

double NNfunction_gg::synapse0x35079c0() {
   return (neuron0x35043b0()*0.0776338);
}

double NNfunction_gg::synapse0x3507a00() {
   return (neuron0x35046f0()*0.295136);
}

double NNfunction_gg::synapse0x3507a40() {
   return (neuron0x3504a30()*0.0247217);
}

double NNfunction_gg::synapse0x3507dc0() {
   return (neuron0x34ffe70()*-0.0230636);
}

double NNfunction_gg::synapse0x3507e00() {
   return (neuron0x35001b0()*0.00354411);
}

double NNfunction_gg::synapse0x3507e40() {
   return (neuron0x35004f0()*-0.012065);
}

double NNfunction_gg::synapse0x3507e80() {
   return (neuron0x3500830()*-0.469731);
}

double NNfunction_gg::synapse0x3507ec0() {
   return (neuron0x3500b70()*-0.0151824);
}

double NNfunction_gg::synapse0x3507f00() {
   return (neuron0x3500eb0()*-0.00497595);
}

double NNfunction_gg::synapse0x3507f40() {
   return (neuron0x35011f0()*0.0196937);
}

double NNfunction_gg::synapse0x3507f80() {
   return (neuron0x3501530()*-0.0120521);
}

double NNfunction_gg::synapse0x3507fc0() {
   return (neuron0x3501870()*-0.00333507);
}

double NNfunction_gg::synapse0x32bf7e0() {
   return (neuron0x3501bb0()*-0.00485251);
}

double NNfunction_gg::synapse0x32bf820() {
   return (neuron0x3501ef0()*-0.000757522);
}

double NNfunction_gg::synapse0x32bf860() {
   return (neuron0x3502230()*-0.564043);
}

double NNfunction_gg::synapse0x32bf8a0() {
   return (neuron0x3502570()*0.0532283);
}

double NNfunction_gg::synapse0x32bf8e0() {
   return (neuron0x35028b0()*-0.000110936);
}

double NNfunction_gg::synapse0x32bf920() {
   return (neuron0x3502bf0()*-0.00861574);
}

double NNfunction_gg::synapse0x32bf960() {
   return (neuron0x3502f30()*0.029249);
}

double NNfunction_gg::synapse0x3507c10() {
   return (neuron0x3503270()*-0.0116681);
}

double NNfunction_gg::synapse0x3507c50() {
   return (neuron0x35037d0()*0.0737431);
}

double NNfunction_gg::synapse0x32bfab0() {
   return (neuron0x35039f0()*0.0509739);
}

double NNfunction_gg::synapse0x32bfaf0() {
   return (neuron0x3503d30()*-0.00483889);
}

double NNfunction_gg::synapse0x32bfb30() {
   return (neuron0x3504070()*0.0105872);
}

double NNfunction_gg::synapse0x32bfb70() {
   return (neuron0x35043b0()*-0.0116311);
}

double NNfunction_gg::synapse0x32bfbb0() {
   return (neuron0x35046f0()*-0.00157115);
}

double NNfunction_gg::synapse0x3508810() {
   return (neuron0x3504a30()*0.0162722);
}

double NNfunction_gg::synapse0x3508b90() {
   return (neuron0x34ffe70()*0.655921);
}

double NNfunction_gg::synapse0x3508bd0() {
   return (neuron0x35001b0()*0.196655);
}

double NNfunction_gg::synapse0x3508c10() {
   return (neuron0x35004f0()*-0.12039);
}

double NNfunction_gg::synapse0x3508c50() {
   return (neuron0x3500830()*-1.37494);
}

double NNfunction_gg::synapse0x3508c90() {
   return (neuron0x3500b70()*0.481977);
}

double NNfunction_gg::synapse0x3508cd0() {
   return (neuron0x3500eb0()*0.327913);
}

double NNfunction_gg::synapse0x3508d10() {
   return (neuron0x35011f0()*-0.0659091);
}

double NNfunction_gg::synapse0x3508d50() {
   return (neuron0x3501530()*0.314116);
}

double NNfunction_gg::synapse0x3508d90() {
   return (neuron0x3501870()*0.480881);
}

double NNfunction_gg::synapse0x3508dd0() {
   return (neuron0x3501bb0()*0.0805361);
}

double NNfunction_gg::synapse0x3508e10() {
   return (neuron0x3501ef0()*0.146386);
}

double NNfunction_gg::synapse0x3508e50() {
   return (neuron0x3502230()*0.246685);
}

double NNfunction_gg::synapse0x3508e90() {
   return (neuron0x3502570()*0.273188);
}

double NNfunction_gg::synapse0x3508ed0() {
   return (neuron0x35028b0()*-0.134204);
}

double NNfunction_gg::synapse0x3508f10() {
   return (neuron0x3502bf0()*0.360189);
}

double NNfunction_gg::synapse0x3508f50() {
   return (neuron0x3502f30()*-0.0478365);
}

double NNfunction_gg::synapse0x35089e0() {
   return (neuron0x3503270()*-0.250461);
}

double NNfunction_gg::synapse0x3508a20() {
   return (neuron0x35037d0()*0.518871);
}

double NNfunction_gg::synapse0x35090a0() {
   return (neuron0x35039f0()*0.558981);
}

double NNfunction_gg::synapse0x35090e0() {
   return (neuron0x3503d30()*-0.103866);
}

double NNfunction_gg::synapse0x3509120() {
   return (neuron0x3504070()*-0.0550409);
}

double NNfunction_gg::synapse0x3509160() {
   return (neuron0x35043b0()*0.0306967);
}

double NNfunction_gg::synapse0x35091a0() {
   return (neuron0x35046f0()*0.340645);
}

double NNfunction_gg::synapse0x35091e0() {
   return (neuron0x3504a30()*0.548743);
}

double NNfunction_gg::synapse0x3509560() {
   return (neuron0x34ffe70()*0.00353283);
}

double NNfunction_gg::synapse0x35095a0() {
   return (neuron0x35001b0()*0.0137314);
}

double NNfunction_gg::synapse0x35095e0() {
   return (neuron0x35004f0()*-0.0125012);
}

double NNfunction_gg::synapse0x3509620() {
   return (neuron0x3500830()*0.684294);
}

double NNfunction_gg::synapse0x3509660() {
   return (neuron0x3500b70()*0.000826324);
}

double NNfunction_gg::synapse0x35096a0() {
   return (neuron0x3500eb0()*0.00467406);
}

double NNfunction_gg::synapse0x35096e0() {
   return (neuron0x35011f0()*-0.00077307);
}

double NNfunction_gg::synapse0x3509720() {
   return (neuron0x3501530()*0.0183622);
}

double NNfunction_gg::synapse0x3509760() {
   return (neuron0x3501870()*-0.00680804);
}

double NNfunction_gg::synapse0x35097a0() {
   return (neuron0x3501bb0()*0.00556192);
}

double NNfunction_gg::synapse0x35097e0() {
   return (neuron0x3501ef0()*0.0207309);
}

double NNfunction_gg::synapse0x3509820() {
   return (neuron0x3502230()*-0.0194404);
}

double NNfunction_gg::synapse0x3509860() {
   return (neuron0x3502570()*0.028584);
}

double NNfunction_gg::synapse0x35098a0() {
   return (neuron0x35028b0()*0.0125036);
}

double NNfunction_gg::synapse0x35098e0() {
   return (neuron0x3502bf0()*-0.0410823);
}

double NNfunction_gg::synapse0x3509920() {
   return (neuron0x3502f30()*0.0144705);
}

double NNfunction_gg::synapse0x35093b0() {
   return (neuron0x3503270()*-0.0105597);
}

double NNfunction_gg::synapse0x35093f0() {
   return (neuron0x35037d0()*-0.00735766);
}

double NNfunction_gg::synapse0x3509a70() {
   return (neuron0x35039f0()*0.0185436);
}

double NNfunction_gg::synapse0x3509ab0() {
   return (neuron0x3503d30()*-0.0128912);
}

double NNfunction_gg::synapse0x3509af0() {
   return (neuron0x3504070()*-0.0179258);
}

double NNfunction_gg::synapse0x3509b30() {
   return (neuron0x35043b0()*-0.00577383);
}

double NNfunction_gg::synapse0x3509b70() {
   return (neuron0x35046f0()*0.00313971);
}

double NNfunction_gg::synapse0x3509bb0() {
   return (neuron0x3504a30()*0.0147119);
}

double NNfunction_gg::synapse0x35036c0() {
   return (neuron0x34ffe70()*0.0810583);
}

double NNfunction_gg::synapse0x3503700() {
   return (neuron0x35001b0()*-0.0655695);
}

double NNfunction_gg::synapse0x3503740() {
   return (neuron0x35004f0()*0.0546869);
}

double NNfunction_gg::synapse0x3503780() {
   return (neuron0x3500830()*-0.478563);
}

double NNfunction_gg::synapse0x350a140() {
   return (neuron0x3500b70()*0.0612216);
}

double NNfunction_gg::synapse0x350a180() {
   return (neuron0x3500eb0()*0.00529352);
}

double NNfunction_gg::synapse0x350a1c0() {
   return (neuron0x35011f0()*-0.0681149);
}

double NNfunction_gg::synapse0x350a200() {
   return (neuron0x3501530()*0.0528784);
}

double NNfunction_gg::synapse0x350a240() {
   return (neuron0x3501870()*-0.0169915);
}

double NNfunction_gg::synapse0x350a280() {
   return (neuron0x3501bb0()*-0.0189199);
}

double NNfunction_gg::synapse0x350a2c0() {
   return (neuron0x3501ef0()*-0.0121766);
}

double NNfunction_gg::synapse0x350a300() {
   return (neuron0x3502230()*0.119776);
}

double NNfunction_gg::synapse0x350a340() {
   return (neuron0x3502570()*0.149534);
}

double NNfunction_gg::synapse0x350a380() {
   return (neuron0x35028b0()*0.0653314);
}

double NNfunction_gg::synapse0x350a3c0() {
   return (neuron0x3502bf0()*0.106218);
}

double NNfunction_gg::synapse0x350a400() {
   return (neuron0x3502f30()*0.149276);
}

double NNfunction_gg::synapse0x3509d80() {
   return (neuron0x3503270()*-0.0699189);
}

double NNfunction_gg::synapse0x3509dc0() {
   return (neuron0x35037d0()*-0.00378007);
}

double NNfunction_gg::synapse0x350a550() {
   return (neuron0x35039f0()*0.0730334);
}

double NNfunction_gg::synapse0x350a590() {
   return (neuron0x3503d30()*-0.00829518);
}

double NNfunction_gg::synapse0x350a5d0() {
   return (neuron0x3504070()*-0.00504792);
}

double NNfunction_gg::synapse0x350a610() {
   return (neuron0x35043b0()*0.0353116);
}

double NNfunction_gg::synapse0x350a650() {
   return (neuron0x35046f0()*0.0514136);
}

double NNfunction_gg::synapse0x350a690() {
   return (neuron0x3504a30()*-0.0364094);
}

double NNfunction_gg::synapse0x350aa10() {
   return (neuron0x34ffe70()*-0.00347871);
}

double NNfunction_gg::synapse0x350aa50() {
   return (neuron0x35001b0()*0.0115398);
}

double NNfunction_gg::synapse0x350aa90() {
   return (neuron0x35004f0()*-0.00487944);
}

double NNfunction_gg::synapse0x350aad0() {
   return (neuron0x3500830()*-24.3531);
}

double NNfunction_gg::synapse0x350ab10() {
   return (neuron0x3500b70()*0.00164311);
}

double NNfunction_gg::synapse0x350ab50() {
   return (neuron0x3500eb0()*0.0124257);
}

double NNfunction_gg::synapse0x350ab90() {
   return (neuron0x35011f0()*0.0107607);
}

double NNfunction_gg::synapse0x350abd0() {
   return (neuron0x3501530()*-0.00128886);
}

double NNfunction_gg::synapse0x350ac10() {
   return (neuron0x3501870()*0.00470065);
}

double NNfunction_gg::synapse0x350ac50() {
   return (neuron0x3501bb0()*0.00215977);
}

double NNfunction_gg::synapse0x350ac90() {
   return (neuron0x3501ef0()*0.000374201);
}

double NNfunction_gg::synapse0x350acd0() {
   return (neuron0x3502230()*-0.0140221);
}

double NNfunction_gg::synapse0x350ad10() {
   return (neuron0x3502570()*-0.00557227);
}

double NNfunction_gg::synapse0x350ad50() {
   return (neuron0x35028b0()*-0.00600784);
}

double NNfunction_gg::synapse0x350ad90() {
   return (neuron0x3502bf0()*-0.00357663);
}

double NNfunction_gg::synapse0x350add0() {
   return (neuron0x3502f30()*-0.00238545);
}

double NNfunction_gg::synapse0x350a860() {
   return (neuron0x3503270()*0.00122873);
}

double NNfunction_gg::synapse0x350a8a0() {
   return (neuron0x35037d0()*0.00319273);
}

double NNfunction_gg::synapse0x350af20() {
   return (neuron0x35039f0()*0.00498081);
}

double NNfunction_gg::synapse0x350af60() {
   return (neuron0x3503d30()*-0.00417507);
}

double NNfunction_gg::synapse0x350afa0() {
   return (neuron0x3504070()*-0.00791352);
}

double NNfunction_gg::synapse0x350afe0() {
   return (neuron0x35043b0()*0.00441172);
}

double NNfunction_gg::synapse0x350b020() {
   return (neuron0x35046f0()*0.0109322);
}

double NNfunction_gg::synapse0x350b060() {
   return (neuron0x3504a30()*-0.00517363);
}

double NNfunction_gg::synapse0x350b3e0() {
   return (neuron0x34ffe70()*-0.0203751);
}

double NNfunction_gg::synapse0x350b420() {
   return (neuron0x35001b0()*0.000800472);
}

double NNfunction_gg::synapse0x350b460() {
   return (neuron0x35004f0()*9.13778e-05);
}

double NNfunction_gg::synapse0x350b4a0() {
   return (neuron0x3500830()*0.670839);
}

double NNfunction_gg::synapse0x350b4e0() {
   return (neuron0x3500b70()*-0.0169842);
}

double NNfunction_gg::synapse0x350b520() {
   return (neuron0x3500eb0()*0.00505562);
}

double NNfunction_gg::synapse0x350b560() {
   return (neuron0x35011f0()*0.00783985);
}

double NNfunction_gg::synapse0x350b5a0() {
   return (neuron0x3501530()*-0.0106288);
}

double NNfunction_gg::synapse0x350b5e0() {
   return (neuron0x3501870()*0.0034282);
}

double NNfunction_gg::synapse0x350b620() {
   return (neuron0x3501bb0()*0.0232657);
}

double NNfunction_gg::synapse0x350b660() {
   return (neuron0x3501ef0()*-0.000976236);
}

double NNfunction_gg::synapse0x350b6a0() {
   return (neuron0x3502230()*0.0529926);
}

double NNfunction_gg::synapse0x350b6e0() {
   return (neuron0x3502570()*-0.000211601);
}

double NNfunction_gg::synapse0x350b720() {
   return (neuron0x35028b0()*0.0748274);
}

double NNfunction_gg::synapse0x350b760() {
   return (neuron0x3502bf0()*0.0295616);
}

double NNfunction_gg::synapse0x350b7a0() {
   return (neuron0x3502f30()*0.0148063);
}

double NNfunction_gg::synapse0x350b230() {
   return (neuron0x3503270()*0.0888197);
}

double NNfunction_gg::synapse0x350b270() {
   return (neuron0x35037d0()*0.132429);
}

double NNfunction_gg::synapse0x3508000() {
   return (neuron0x35039f0()*-0.00782372);
}

double NNfunction_gg::synapse0x3508040() {
   return (neuron0x3503d30()*0.0246748);
}

double NNfunction_gg::synapse0x3508080() {
   return (neuron0x3504070()*0.038811);
}

double NNfunction_gg::synapse0x35080c0() {
   return (neuron0x35043b0()*-0.00535944);
}

double NNfunction_gg::synapse0x3508100() {
   return (neuron0x35046f0()*-0.00635145);
}

double NNfunction_gg::synapse0x3508140() {
   return (neuron0x3504a30()*0.000851391);
}

double NNfunction_gg::synapse0x35084c0() {
   return (neuron0x34ffe70()*0.0873157);
}

double NNfunction_gg::synapse0x3508500() {
   return (neuron0x35001b0()*-0.0831713);
}

double NNfunction_gg::synapse0x3508540() {
   return (neuron0x35004f0()*-0.0283149);
}

double NNfunction_gg::synapse0x3508580() {
   return (neuron0x3500830()*-1.53693);
}

double NNfunction_gg::synapse0x35085c0() {
   return (neuron0x3500b70()*0.157641);
}

double NNfunction_gg::synapse0x3508600() {
   return (neuron0x3500eb0()*-0.0297893);
}

double NNfunction_gg::synapse0x3508640() {
   return (neuron0x35011f0()*-0.0854745);
}

double NNfunction_gg::synapse0x3508680() {
   return (neuron0x3501530()*0.0614814);
}

double NNfunction_gg::synapse0x35086c0() {
   return (neuron0x3501870()*0.100782);
}

double NNfunction_gg::synapse0x3508700() {
   return (neuron0x3501bb0()*0.0339259);
}

double NNfunction_gg::synapse0x3508740() {
   return (neuron0x3501ef0()*0.0321392);
}

double NNfunction_gg::synapse0x3508780() {
   return (neuron0x3502230()*-0.300077);
}

double NNfunction_gg::synapse0x35087c0() {
   return (neuron0x3502570()*-0.292239);
}

double NNfunction_gg::synapse0x350c900() {
   return (neuron0x35028b0()*-0.0179862);
}

double NNfunction_gg::synapse0x350c940() {
   return (neuron0x3502bf0()*-0.0390964);
}

double NNfunction_gg::synapse0x350c980() {
   return (neuron0x3502f30()*-0.0281389);
}

double NNfunction_gg::synapse0x3508310() {
   return (neuron0x3503270()*-0.0892378);
}

double NNfunction_gg::synapse0x3508350() {
   return (neuron0x35037d0()*0.190116);
}

double NNfunction_gg::synapse0x350cad0() {
   return (neuron0x35039f0()*-0.218074);
}

double NNfunction_gg::synapse0x350cb10() {
   return (neuron0x3503d30()*-0.0400085);
}

double NNfunction_gg::synapse0x350cb50() {
   return (neuron0x3504070()*-0.0492584);
}

double NNfunction_gg::synapse0x350cb90() {
   return (neuron0x35043b0()*0.0608847);
}

double NNfunction_gg::synapse0x350cbd0() {
   return (neuron0x35046f0()*0.0594015);
}

double NNfunction_gg::synapse0x350cc10() {
   return (neuron0x3504a30()*-0.0384848);
}

double NNfunction_gg::synapse0x350cf90() {
   return (neuron0x34ffe70()*0.0530076);
}

double NNfunction_gg::synapse0x350cfd0() {
   return (neuron0x35001b0()*-0.0349663);
}

double NNfunction_gg::synapse0x350d010() {
   return (neuron0x35004f0()*-0.120108);
}

double NNfunction_gg::synapse0x350d050() {
   return (neuron0x3500830()*-0.422711);
}

double NNfunction_gg::synapse0x350d090() {
   return (neuron0x3500b70()*0.118667);
}

double NNfunction_gg::synapse0x350d0d0() {
   return (neuron0x3500eb0()*0.108832);
}

double NNfunction_gg::synapse0x350d110() {
   return (neuron0x35011f0()*-0.082015);
}

double NNfunction_gg::synapse0x350d150() {
   return (neuron0x3501530()*0.123327);
}

double NNfunction_gg::synapse0x350d190() {
   return (neuron0x3501870()*0.0142088);
}

double NNfunction_gg::synapse0x350d1d0() {
   return (neuron0x3501bb0()*0.0243314);
}

double NNfunction_gg::synapse0x350d210() {
   return (neuron0x3501ef0()*0.028932);
}

double NNfunction_gg::synapse0x350d250() {
   return (neuron0x3502230()*0.246169);
}

double NNfunction_gg::synapse0x350d290() {
   return (neuron0x3502570()*-0.137215);
}

double NNfunction_gg::synapse0x350d2d0() {
   return (neuron0x35028b0()*-0.47986);
}

double NNfunction_gg::synapse0x350d310() {
   return (neuron0x3502bf0()*0.103909);
}

double NNfunction_gg::synapse0x350d350() {
   return (neuron0x3502f30()*0.268819);
}

double NNfunction_gg::synapse0x350cde0() {
   return (neuron0x3503270()*-0.525955);
}

double NNfunction_gg::synapse0x350ce20() {
   return (neuron0x35037d0()*-0.442962);
}

double NNfunction_gg::synapse0x350d4a0() {
   return (neuron0x35039f0()*0.0629191);
}

double NNfunction_gg::synapse0x350d4e0() {
   return (neuron0x3503d30()*-0.102692);
}

double NNfunction_gg::synapse0x350d520() {
   return (neuron0x3504070()*0.0752652);
}

double NNfunction_gg::synapse0x350d560() {
   return (neuron0x35043b0()*0.0143754);
}

double NNfunction_gg::synapse0x350d5a0() {
   return (neuron0x35046f0()*0.0709046);
}

double NNfunction_gg::synapse0x350d5e0() {
   return (neuron0x3504a30()*0.0098074);
}

double NNfunction_gg::synapse0x350d960() {
   return (neuron0x34ffe70()*-0.00711038);
}

double NNfunction_gg::synapse0x350d9a0() {
   return (neuron0x35001b0()*-0.0186698);
}

double NNfunction_gg::synapse0x350d9e0() {
   return (neuron0x35004f0()*0.0154147);
}

double NNfunction_gg::synapse0x350da20() {
   return (neuron0x3500830()*12.6174);
}

double NNfunction_gg::synapse0x350da60() {
   return (neuron0x3500b70()*-0.0120153);
}

double NNfunction_gg::synapse0x350daa0() {
   return (neuron0x3500eb0()*-0.0236897);
}

double NNfunction_gg::synapse0x350dae0() {
   return (neuron0x35011f0()*-0.0181328);
}

double NNfunction_gg::synapse0x350db20() {
   return (neuron0x3501530()*-0.00078486);
}

double NNfunction_gg::synapse0x350db60() {
   return (neuron0x3501870()*-0.00595421);
}

double NNfunction_gg::synapse0x350dba0() {
   return (neuron0x3501bb0()*0.00104387);
}

double NNfunction_gg::synapse0x350dbe0() {
   return (neuron0x3501ef0()*0.00318295);
}

double NNfunction_gg::synapse0x350dc20() {
   return (neuron0x3502230()*0.0141843);
}

double NNfunction_gg::synapse0x350dc60() {
   return (neuron0x3502570()*-0.00693969);
}

double NNfunction_gg::synapse0x350dca0() {
   return (neuron0x35028b0()*0.0277936);
}

double NNfunction_gg::synapse0x350dce0() {
   return (neuron0x3502bf0()*0.0046453);
}

double NNfunction_gg::synapse0x350dd20() {
   return (neuron0x3502f30()*0.000991921);
}

double NNfunction_gg::synapse0x350d7b0() {
   return (neuron0x3503270()*-0.00608379);
}

double NNfunction_gg::synapse0x350d7f0() {
   return (neuron0x35037d0()*0.00422481);
}

double NNfunction_gg::synapse0x350de70() {
   return (neuron0x35039f0()*-0.0152999);
}

double NNfunction_gg::synapse0x350deb0() {
   return (neuron0x3503d30()*0.0136061);
}

double NNfunction_gg::synapse0x350def0() {
   return (neuron0x3504070()*0.020053);
}

double NNfunction_gg::synapse0x350df30() {
   return (neuron0x35043b0()*-0.00456885);
}

double NNfunction_gg::synapse0x350df70() {
   return (neuron0x35046f0()*-0.0181162);
}

double NNfunction_gg::synapse0x350dfb0() {
   return (neuron0x3504a30()*0.0120289);
}

double NNfunction_gg::synapse0x350e330() {
   return (neuron0x34ffe70()*-0.0154533);
}

double NNfunction_gg::synapse0x350e370() {
   return (neuron0x35001b0()*0.012725);
}

double NNfunction_gg::synapse0x350e3b0() {
   return (neuron0x35004f0()*-0.0176496);
}

double NNfunction_gg::synapse0x350e3f0() {
   return (neuron0x3500830()*0.593557);
}

double NNfunction_gg::synapse0x350e430() {
   return (neuron0x3500b70()*0.000187177);
}

double NNfunction_gg::synapse0x350e470() {
   return (neuron0x3500eb0()*-0.0108096);
}

double NNfunction_gg::synapse0x350e4b0() {
   return (neuron0x35011f0()*0.0153878);
}

double NNfunction_gg::synapse0x350e4f0() {
   return (neuron0x3501530()*-0.0218865);
}

double NNfunction_gg::synapse0x350e530() {
   return (neuron0x3501870()*0.00178928);
}

double NNfunction_gg::synapse0x350e570() {
   return (neuron0x3501bb0()*-0.0183856);
}

double NNfunction_gg::synapse0x350e5b0() {
   return (neuron0x3501ef0()*-0.00897131);
}

double NNfunction_gg::synapse0x350e5f0() {
   return (neuron0x3502230()*0.0270232);
}

double NNfunction_gg::synapse0x350e630() {
   return (neuron0x3502570()*-0.179426);
}

double NNfunction_gg::synapse0x350e670() {
   return (neuron0x35028b0()*-0.0202188);
}

double NNfunction_gg::synapse0x350e6b0() {
   return (neuron0x3502bf0()*0.0793156);
}

double NNfunction_gg::synapse0x350e6f0() {
   return (neuron0x3502f30()*0.044783);
}

double NNfunction_gg::synapse0x350e180() {
   return (neuron0x3503270()*-0.0194333);
}

double NNfunction_gg::synapse0x350e1c0() {
   return (neuron0x35037d0()*0.124834);
}

double NNfunction_gg::synapse0x350e840() {
   return (neuron0x35039f0()*0.100406);
}

double NNfunction_gg::synapse0x350e880() {
   return (neuron0x3503d30()*0.0330979);
}

double NNfunction_gg::synapse0x350e8c0() {
   return (neuron0x3504070()*-0.0124881);
}

double NNfunction_gg::synapse0x350e900() {
   return (neuron0x35043b0()*-0.00909761);
}

double NNfunction_gg::synapse0x350e940() {
   return (neuron0x35046f0()*-0.0220852);
}

double NNfunction_gg::synapse0x350e980() {
   return (neuron0x3504a30()*0.0129986);
}

double NNfunction_gg::synapse0x350ed00() {
   return (neuron0x34ffe70()*0.180824);
}

double NNfunction_gg::synapse0x3500090() {
   return (neuron0x35001b0()*-0.2318);
}

double NNfunction_gg::synapse0x35000d0() {
   return (neuron0x35004f0()*0.286039);
}

double NNfunction_gg::synapse0x35003d0() {
   return (neuron0x3500830()*0.854763);
}

double NNfunction_gg::synapse0x3500410() {
   return (neuron0x3500b70()*0.43619);
}

double NNfunction_gg::synapse0x3500710() {
   return (neuron0x3500eb0()*0.731178);
}

double NNfunction_gg::synapse0x3500750() {
   return (neuron0x35011f0()*-0.0907617);
}

double NNfunction_gg::synapse0x3500a50() {
   return (neuron0x3501530()*0.3526);
}

double NNfunction_gg::synapse0x3500a90() {
   return (neuron0x3501870()*0.0412035);
}

double NNfunction_gg::synapse0x3500d90() {
   return (neuron0x3501bb0()*-0.0197317);
}

double NNfunction_gg::synapse0x3500dd0() {
   return (neuron0x3501ef0()*0.22985);
}

double NNfunction_gg::synapse0x35010d0() {
   return (neuron0x3502230()*-0.0714706);
}

double NNfunction_gg::synapse0x3501110() {
   return (neuron0x3502570()*0.0163724);
}

double NNfunction_gg::synapse0x3501410() {
   return (neuron0x35028b0()*0.193129);
}

double NNfunction_gg::synapse0x3501450() {
   return (neuron0x3502bf0()*-0.0716439);
}

double NNfunction_gg::synapse0x3501750() {
   return (neuron0x3502f30()*0.0321479);
}

double NNfunction_gg::synapse0x3501790() {
   return (neuron0x3503270()*0.105373);
}

double NNfunction_gg::synapse0x3501a90() {
   return (neuron0x35037d0()*-0.0890011);
}

double NNfunction_gg::synapse0x3501ad0() {
   return (neuron0x35039f0()*-0.235236);
}

double NNfunction_gg::synapse0x3501dd0() {
   return (neuron0x3503d30()*0.391983);
}

double NNfunction_gg::synapse0x3501e10() {
   return (neuron0x3504070()*0.046037);
}

double NNfunction_gg::synapse0x3502110() {
   return (neuron0x35043b0()*0.0505757);
}

double NNfunction_gg::synapse0x3502150() {
   return (neuron0x35046f0()*0.130761);
}

double NNfunction_gg::synapse0x3502450() {
   return (neuron0x3504a30()*-0.0612699);
}

double NNfunction_gg::synapse0x3502490() {
   return (neuron0x34ffe70()*-0.358221);
}

double NNfunction_gg::synapse0x3503150() {
   return (neuron0x35001b0()*-0.00285465);
}

double NNfunction_gg::synapse0x3503190() {
   return (neuron0x35004f0()*0.504687);
}

double NNfunction_gg::synapse0x350eb50() {
   return (neuron0x3500830()*0.16155);
}

double NNfunction_gg::synapse0x350eb90() {
   return (neuron0x3500b70()*-0.863504);
}

double NNfunction_gg::synapse0x3503490() {
   return (neuron0x3500eb0()*-0.248871);
}

double NNfunction_gg::synapse0x35034d0() {
   return (neuron0x35011f0()*-0.520488);
}

double NNfunction_gg::synapse0x32b1800() {
   return (neuron0x3501530()*-0.39499);
}

double NNfunction_gg::synapse0x32b1840() {
   return (neuron0x3501870()*-0.018618);
}

double NNfunction_gg::synapse0x3503c10() {
   return (neuron0x3501bb0()*-0.173714);
}

double NNfunction_gg::synapse0x3503c50() {
   return (neuron0x3501ef0()*-0.0260608);
}

double NNfunction_gg::synapse0x3503f50() {
   return (neuron0x3502230()*-0.362645);
}

double NNfunction_gg::synapse0x3503f90() {
   return (neuron0x3502570()*-0.551436);
}

double NNfunction_gg::synapse0x3504290() {
   return (neuron0x35028b0()*0.3337);
}

double NNfunction_gg::synapse0x35042d0() {
   return (neuron0x3502bf0()*0.112221);
}

double NNfunction_gg::synapse0x35045d0() {
   return (neuron0x3502f30()*0.309836);
}

double NNfunction_gg::synapse0x3504610() {
   return (neuron0x3503270()*0.519187);
}

double NNfunction_gg::synapse0x3504910() {
   return (neuron0x35037d0()*-0.223621);
}

double NNfunction_gg::synapse0x3504950() {
   return (neuron0x35039f0()*-0.254408);
}

double NNfunction_gg::synapse0x3504c50() {
   return (neuron0x3503d30()*-0.195811);
}

double NNfunction_gg::synapse0x3504c90() {
   return (neuron0x3504070()*0.186617);
}

double NNfunction_gg::synapse0x3502790() {
   return (neuron0x35043b0()*-0.0983403);
}

double NNfunction_gg::synapse0x35027d0() {
   return (neuron0x35046f0()*-0.192489);
}

double NNfunction_gg::synapse0x3510a70() {
   return (neuron0x3504a30()*-0.301119);
}

double NNfunction_gg::synapse0x3510df0() {
   return (neuron0x34ffe70()*0.256146);
}

double NNfunction_gg::synapse0x3510e30() {
   return (neuron0x35001b0()*0.115566);
}

double NNfunction_gg::synapse0x3510e70() {
   return (neuron0x35004f0()*-0.15899);
}

double NNfunction_gg::synapse0x3510eb0() {
   return (neuron0x3500830()*-1.52142);
}

double NNfunction_gg::synapse0x3510ef0() {
   return (neuron0x3500b70()*-0.066028);
}

double NNfunction_gg::synapse0x3510f30() {
   return (neuron0x3500eb0()*0.215229);
}

double NNfunction_gg::synapse0x3510f70() {
   return (neuron0x35011f0()*0.134965);
}

double NNfunction_gg::synapse0x3510fb0() {
   return (neuron0x3501530()*0.252844);
}

double NNfunction_gg::synapse0x3510ff0() {
   return (neuron0x3501870()*0.14481);
}

double NNfunction_gg::synapse0x3511030() {
   return (neuron0x3501bb0()*0.357219);
}

double NNfunction_gg::synapse0x3511070() {
   return (neuron0x3501ef0()*0.0945318);
}

double NNfunction_gg::synapse0x35110b0() {
   return (neuron0x3502230()*0.429156);
}

double NNfunction_gg::synapse0x35110f0() {
   return (neuron0x3502570()*0.126544);
}

double NNfunction_gg::synapse0x3511130() {
   return (neuron0x35028b0()*0.23078);
}

double NNfunction_gg::synapse0x3511170() {
   return (neuron0x3502bf0()*0.173588);
}

double NNfunction_gg::synapse0x35111b0() {
   return (neuron0x3502f30()*0.582314);
}

double NNfunction_gg::synapse0x3510c40() {
   return (neuron0x3503270()*-0.165844);
}

double NNfunction_gg::synapse0x3510c80() {
   return (neuron0x35037d0()*0.263564);
}

double NNfunction_gg::synapse0x3511300() {
   return (neuron0x35039f0()*0.0498);
}

double NNfunction_gg::synapse0x3511340() {
   return (neuron0x3503d30()*0.0657128);
}

double NNfunction_gg::synapse0x3511380() {
   return (neuron0x3504070()*-0.0588054);
}

double NNfunction_gg::synapse0x35113c0() {
   return (neuron0x35043b0()*-0.0650359);
}

double NNfunction_gg::synapse0x3511400() {
   return (neuron0x35046f0()*-0.13287);
}

double NNfunction_gg::synapse0x3511440() {
   return (neuron0x3504a30()*0.426694);
}

double NNfunction_gg::synapse0x35117c0() {
   return (neuron0x34ffe70()*-0.0169758);
}

double NNfunction_gg::synapse0x3511800() {
   return (neuron0x35001b0()*0.0072191);
}

double NNfunction_gg::synapse0x3511840() {
   return (neuron0x35004f0()*0.00911505);
}

double NNfunction_gg::synapse0x3511880() {
   return (neuron0x3500830()*-1.52987);
}

double NNfunction_gg::synapse0x35118c0() {
   return (neuron0x3500b70()*-0.0158551);
}

double NNfunction_gg::synapse0x3511900() {
   return (neuron0x3500eb0()*-0.0065163);
}

double NNfunction_gg::synapse0x3511940() {
   return (neuron0x35011f0()*0.0134072);
}

double NNfunction_gg::synapse0x3511980() {
   return (neuron0x3501530()*-0.00426183);
}

double NNfunction_gg::synapse0x35119c0() {
   return (neuron0x3501870()*-0.015153);
}

double NNfunction_gg::synapse0x3511a00() {
   return (neuron0x3501bb0()*0.00114058);
}

double NNfunction_gg::synapse0x3511a40() {
   return (neuron0x3501ef0()*0.000963793);
}

double NNfunction_gg::synapse0x3511a80() {
   return (neuron0x3502230()*0.0442919);
}

double NNfunction_gg::synapse0x3511ac0() {
   return (neuron0x3502570()*-0.157357);
}

double NNfunction_gg::synapse0x3511b00() {
   return (neuron0x35028b0()*0.0323704);
}

double NNfunction_gg::synapse0x3511b40() {
   return (neuron0x3502bf0()*0.0322572);
}

double NNfunction_gg::synapse0x3511b80() {
   return (neuron0x3502f30()*-0.0546768);
}

double NNfunction_gg::synapse0x3511610() {
   return (neuron0x3503270()*0.0382156);
}

double NNfunction_gg::synapse0x3511650() {
   return (neuron0x35037d0()*-0.0687168);
}

double NNfunction_gg::synapse0x3511cd0() {
   return (neuron0x35039f0()*-0.0685238);
}

double NNfunction_gg::synapse0x3511d10() {
   return (neuron0x3503d30()*0.025361);
}

double NNfunction_gg::synapse0x3511d50() {
   return (neuron0x3504070()*0.00767666);
}

double NNfunction_gg::synapse0x3511d90() {
   return (neuron0x35043b0()*-0.00672163);
}

double NNfunction_gg::synapse0x3511dd0() {
   return (neuron0x35046f0()*-0.0125352);
}

double NNfunction_gg::synapse0x3511e10() {
   return (neuron0x3504a30()*0.0011406);
}

double NNfunction_gg::synapse0x3512190() {
   return (neuron0x34ffe70()*-0.389084);
}

double NNfunction_gg::synapse0x35121d0() {
   return (neuron0x35001b0()*-0.11892);
}

double NNfunction_gg::synapse0x3512210() {
   return (neuron0x35004f0()*0.37169);
}

double NNfunction_gg::synapse0x3512250() {
   return (neuron0x3500830()*0.129081);
}

double NNfunction_gg::synapse0x3512290() {
   return (neuron0x3500b70()*-0.660218);
}

double NNfunction_gg::synapse0x35122d0() {
   return (neuron0x3500eb0()*-0.378879);
}

double NNfunction_gg::synapse0x3512310() {
   return (neuron0x35011f0()*-0.0816294);
}

double NNfunction_gg::synapse0x3512350() {
   return (neuron0x3501530()*-0.0799974);
}

double NNfunction_gg::synapse0x3512390() {
   return (neuron0x3501870()*0.0567714);
}

double NNfunction_gg::synapse0x35123d0() {
   return (neuron0x3501bb0()*-0.344893);
}

double NNfunction_gg::synapse0x3512410() {
   return (neuron0x3501ef0()*-0.165811);
}

double NNfunction_gg::synapse0x3512450() {
   return (neuron0x3502230()*-1.03632);
}

double NNfunction_gg::synapse0x3512490() {
   return (neuron0x3502570()*-1.10547);
}

double NNfunction_gg::synapse0x35124d0() {
   return (neuron0x35028b0()*0.113024);
}

double NNfunction_gg::synapse0x3512510() {
   return (neuron0x3502bf0()*-0.431413);
}

double NNfunction_gg::synapse0x3512550() {
   return (neuron0x3502f30()*-0.318629);
}

double NNfunction_gg::synapse0x3511fe0() {
   return (neuron0x3503270()*0.545454);
}

double NNfunction_gg::synapse0x3512020() {
   return (neuron0x35037d0()*-0.114304);
}

double NNfunction_gg::synapse0x35126a0() {
   return (neuron0x35039f0()*-0.441261);
}

double NNfunction_gg::synapse0x35126e0() {
   return (neuron0x3503d30()*-0.117037);
}

double NNfunction_gg::synapse0x3512720() {
   return (neuron0x3504070()*0.127747);
}

double NNfunction_gg::synapse0x3512760() {
   return (neuron0x35043b0()*0.000401239);
}

double NNfunction_gg::synapse0x35127a0() {
   return (neuron0x35046f0()*0.0404484);
}

double NNfunction_gg::synapse0x35127e0() {
   return (neuron0x3504a30()*-0.171878);
}

double NNfunction_gg::synapse0x3512b60() {
   return (neuron0x34ffe70()*0.00432608);
}

double NNfunction_gg::synapse0x3512ba0() {
   return (neuron0x35001b0()*0.0106267);
}

double NNfunction_gg::synapse0x3512be0() {
   return (neuron0x35004f0()*0.0139382);
}

double NNfunction_gg::synapse0x3512c20() {
   return (neuron0x3500830()*-0.642558);
}

double NNfunction_gg::synapse0x3512c60() {
   return (neuron0x3500b70()*-0.0161786);
}

double NNfunction_gg::synapse0x3512ca0() {
   return (neuron0x3500eb0()*0.0140954);
}

double NNfunction_gg::synapse0x3512ce0() {
   return (neuron0x35011f0()*-0.0076598);
}

double NNfunction_gg::synapse0x3512d20() {
   return (neuron0x3501530()*0.023712);
}

double NNfunction_gg::synapse0x3512d60() {
   return (neuron0x3501870()*-0.011823);
}

double NNfunction_gg::synapse0x3512da0() {
   return (neuron0x3501bb0()*-0.0132504);
}

double NNfunction_gg::synapse0x3512de0() {
   return (neuron0x3501ef0()*0.00514753);
}

double NNfunction_gg::synapse0x3512e20() {
   return (neuron0x3502230()*-0.274046);
}

double NNfunction_gg::synapse0x3512e60() {
   return (neuron0x3502570()*0.00399193);
}

double NNfunction_gg::synapse0x3512ea0() {
   return (neuron0x35028b0()*0.00279166);
}

double NNfunction_gg::synapse0x3512ee0() {
   return (neuron0x3502bf0()*0.744031);
}

double NNfunction_gg::synapse0x3512f20() {
   return (neuron0x3502f30()*0.00591393);
}

double NNfunction_gg::synapse0x35129b0() {
   return (neuron0x3503270()*-0.0125301);
}

double NNfunction_gg::synapse0x35129f0() {
   return (neuron0x35037d0()*-0.00974006);
}

double NNfunction_gg::synapse0x3513070() {
   return (neuron0x35039f0()*-0.000734734);
}

double NNfunction_gg::synapse0x35130b0() {
   return (neuron0x3503d30()*-0.00877736);
}

double NNfunction_gg::synapse0x35130f0() {
   return (neuron0x3504070()*-0.00886158);
}

double NNfunction_gg::synapse0x3513130() {
   return (neuron0x35043b0()*0.0173769);
}

double NNfunction_gg::synapse0x3513170() {
   return (neuron0x35046f0()*-0.00391778);
}

double NNfunction_gg::synapse0x35131b0() {
   return (neuron0x3504a30()*0.000510631);
}

double NNfunction_gg::synapse0x3513530() {
   return (neuron0x34ffe70()*0.00748489);
}

double NNfunction_gg::synapse0x3513570() {
   return (neuron0x35001b0()*-0.00900779);
}

double NNfunction_gg::synapse0x35135b0() {
   return (neuron0x35004f0()*-0.0135248);
}

double NNfunction_gg::synapse0x35135f0() {
   return (neuron0x3500830()*-0.786678);
}

double NNfunction_gg::synapse0x3513630() {
   return (neuron0x3500b70()*0.0024153);
}

double NNfunction_gg::synapse0x3513670() {
   return (neuron0x3500eb0()*-0.00528541);
}

double NNfunction_gg::synapse0x35136b0() {
   return (neuron0x35011f0()*0.000290024);
}

double NNfunction_gg::synapse0x35136f0() {
   return (neuron0x3501530()*-0.0196176);
}

double NNfunction_gg::synapse0x3513730() {
   return (neuron0x3501870()*0.0166503);
}

double NNfunction_gg::synapse0x350b8f0() {
   return (neuron0x3501bb0()*0.0125778);
}

double NNfunction_gg::synapse0x350b930() {
   return (neuron0x3501ef0()*0.00488411);
}

double NNfunction_gg::synapse0x350b970() {
   return (neuron0x3502230()*0.106624);
}

double NNfunction_gg::synapse0x350b9b0() {
   return (neuron0x3502570()*0.0547194);
}

double NNfunction_gg::synapse0x350b9f0() {
   return (neuron0x35028b0()*-0.00173946);
}

double NNfunction_gg::synapse0x350ba30() {
   return (neuron0x3502bf0()*-0.844214);
}

double NNfunction_gg::synapse0x350ba70() {
   return (neuron0x3502f30()*0.013146);
}

double NNfunction_gg::synapse0x3513380() {
   return (neuron0x3503270()*-0.00551193);
}

double NNfunction_gg::synapse0x35133c0() {
   return (neuron0x35037d0()*0.0683373);
}

double NNfunction_gg::synapse0x350bbc0() {
   return (neuron0x35039f0()*0.00793172);
}

double NNfunction_gg::synapse0x350bc00() {
   return (neuron0x3503d30()*-0.0001915);
}

double NNfunction_gg::synapse0x350bc40() {
   return (neuron0x3504070()*-0.0160943);
}

double NNfunction_gg::synapse0x350bc80() {
   return (neuron0x35043b0()*-0.0164642);
}

double NNfunction_gg::synapse0x350bcc0() {
   return (neuron0x35046f0()*-0.000810839);
}

double NNfunction_gg::synapse0x350bd00() {
   return (neuron0x3504a30()*-0.000941231);
}

double NNfunction_gg::synapse0x350c080() {
   return (neuron0x34ffe70()*0.00271643);
}

double NNfunction_gg::synapse0x350c0c0() {
   return (neuron0x35001b0()*0.00917933);
}

double NNfunction_gg::synapse0x350c100() {
   return (neuron0x35004f0()*-0.00874681);
}

double NNfunction_gg::synapse0x350c140() {
   return (neuron0x3500830()*-6.31911);
}

double NNfunction_gg::synapse0x350c180() {
   return (neuron0x3500b70()*0.0042823);
}

double NNfunction_gg::synapse0x350c1c0() {
   return (neuron0x3500eb0()*0.00987701);
}

double NNfunction_gg::synapse0x350c200() {
   return (neuron0x35011f0()*0.0077159);
}

double NNfunction_gg::synapse0x350c240() {
   return (neuron0x3501530()*-0.000768647);
}

double NNfunction_gg::synapse0x350c280() {
   return (neuron0x3501870()*0.00351438);
}

double NNfunction_gg::synapse0x350c2c0() {
   return (neuron0x3501bb0()*-0.00144298);
}

double NNfunction_gg::synapse0x350c300() {
   return (neuron0x3501ef0()*-0.00307552);
}

double NNfunction_gg::synapse0x350c340() {
   return (neuron0x3502230()*0.00393863);
}

double NNfunction_gg::synapse0x350c380() {
   return (neuron0x3502570()*0.0187598);
}

double NNfunction_gg::synapse0x350c3c0() {
   return (neuron0x35028b0()*-0.0270607);
}

double NNfunction_gg::synapse0x350c400() {
   return (neuron0x3502bf0()*-0.00340511);
}

double NNfunction_gg::synapse0x350c440() {
   return (neuron0x3502f30()*-0.00103682);
}

double NNfunction_gg::synapse0x350bed0() {
   return (neuron0x3503270()*-0.00515021);
}

double NNfunction_gg::synapse0x350bf10() {
   return (neuron0x35037d0()*0.00361206);
}

double NNfunction_gg::synapse0x350c590() {
   return (neuron0x35039f0()*0.0118991);
}

double NNfunction_gg::synapse0x350c5d0() {
   return (neuron0x3503d30()*-0.00925605);
}

double NNfunction_gg::synapse0x350c610() {
   return (neuron0x3504070()*-0.00681044);
}

double NNfunction_gg::synapse0x350c650() {
   return (neuron0x35043b0()*-0.000789904);
}

double NNfunction_gg::synapse0x350c690() {
   return (neuron0x35046f0()*0.00325664);
}

double NNfunction_gg::synapse0x350c6d0() {
   return (neuron0x3504a30()*-0.00291686);
}

double NNfunction_gg::synapse0x350c8a0() {
   return (neuron0x34ffe70()*0.0509946);
}

double NNfunction_gg::synapse0x3515930() {
   return (neuron0x35001b0()*-0.0588883);
}

double NNfunction_gg::synapse0x3515970() {
   return (neuron0x35004f0()*0.0280395);
}

double NNfunction_gg::synapse0x35159b0() {
   return (neuron0x3500830()*-0.769516);
}

double NNfunction_gg::synapse0x35159f0() {
   return (neuron0x3500b70()*0.0844179);
}

double NNfunction_gg::synapse0x3515a30() {
   return (neuron0x3500eb0()*-0.0161601);
}

double NNfunction_gg::synapse0x3515a70() {
   return (neuron0x35011f0()*-0.0533445);
}

double NNfunction_gg::synapse0x3515ab0() {
   return (neuron0x3501530()*0.0464645);
}

double NNfunction_gg::synapse0x3515af0() {
   return (neuron0x3501870()*0.03578);
}

double NNfunction_gg::synapse0x3515b30() {
   return (neuron0x3501bb0()*-0.00527916);
}

double NNfunction_gg::synapse0x3515b70() {
   return (neuron0x3501ef0()*0.0358992);
}

double NNfunction_gg::synapse0x3515bb0() {
   return (neuron0x3502230()*-0.219219);
}

double NNfunction_gg::synapse0x3515bf0() {
   return (neuron0x3502570()*-0.160671);
}

double NNfunction_gg::synapse0x3515c30() {
   return (neuron0x35028b0()*-0.043509);
}

double NNfunction_gg::synapse0x3515c70() {
   return (neuron0x3502bf0()*-0.0307109);
}

double NNfunction_gg::synapse0x3515cb0() {
   return (neuron0x3502f30()*-0.023287);
}

double NNfunction_gg::synapse0x3515780() {
   return (neuron0x3503270()*-0.125555);
}

double NNfunction_gg::synapse0x35157c0() {
   return (neuron0x35037d0()*0.364651);
}

double NNfunction_gg::synapse0x3515e00() {
   return (neuron0x35039f0()*-0.147085);
}

double NNfunction_gg::synapse0x3515e40() {
   return (neuron0x3503d30()*0.00305854);
}

double NNfunction_gg::synapse0x3515e80() {
   return (neuron0x3504070()*-0.00819344);
}

double NNfunction_gg::synapse0x3515ec0() {
   return (neuron0x35043b0()*0.0182244);
}

double NNfunction_gg::synapse0x3515f00() {
   return (neuron0x35046f0()*0.0433701);
}

double NNfunction_gg::synapse0x3515f40() {
   return (neuron0x3504a30()*-0.048473);
}

double NNfunction_gg::synapse0x35162c0() {
   return (neuron0x34ffe70()*0.00984816);
}

double NNfunction_gg::synapse0x3516300() {
   return (neuron0x35001b0()*-0.000837829);
}

double NNfunction_gg::synapse0x3516340() {
   return (neuron0x35004f0()*-0.00724145);
}

double NNfunction_gg::synapse0x3516380() {
   return (neuron0x3500830()*0.535337);
}

double NNfunction_gg::synapse0x35163c0() {
   return (neuron0x3500b70()*-0.0151319);
}

double NNfunction_gg::synapse0x3516400() {
   return (neuron0x3500eb0()*0.00302382);
}

double NNfunction_gg::synapse0x3516440() {
   return (neuron0x35011f0()*0.000512424);
}

double NNfunction_gg::synapse0x3516480() {
   return (neuron0x3501530()*-0.00962215);
}

double NNfunction_gg::synapse0x35164c0() {
   return (neuron0x3501870()*0.00905198);
}

double NNfunction_gg::synapse0x3516500() {
   return (neuron0x3501bb0()*0.00400557);
}

double NNfunction_gg::synapse0x3516540() {
   return (neuron0x3501ef0()*-0.0218014);
}

double NNfunction_gg::synapse0x3516580() {
   return (neuron0x3502230()*0.0212406);
}

double NNfunction_gg::synapse0x35165c0() {
   return (neuron0x3502570()*0.0449071);
}

double NNfunction_gg::synapse0x3516600() {
   return (neuron0x35028b0()*-0.0173814);
}

double NNfunction_gg::synapse0x3516640() {
   return (neuron0x3502bf0()*-0.0334401);
}

double NNfunction_gg::synapse0x3516680() {
   return (neuron0x3502f30()*0.003609);
}

double NNfunction_gg::synapse0x3516110() {
   return (neuron0x3503270()*0.010151);
}

double NNfunction_gg::synapse0x3516150() {
   return (neuron0x35037d0()*-0.029662);
}

double NNfunction_gg::synapse0x35167d0() {
   return (neuron0x35039f0()*0.010203);
}

double NNfunction_gg::synapse0x3516810() {
   return (neuron0x3503d30()*-0.0109137);
}

double NNfunction_gg::synapse0x3516850() {
   return (neuron0x3504070()*0.00168171);
}

double NNfunction_gg::synapse0x3516890() {
   return (neuron0x35043b0()*0.0094025);
}

double NNfunction_gg::synapse0x35168d0() {
   return (neuron0x35046f0()*-0.0049721);
}

double NNfunction_gg::synapse0x3516910() {
   return (neuron0x3504a30()*0.00190202);
}

double NNfunction_gg::synapse0x3516c90() {
   return (neuron0x34ffe70()*0.0223729);
}

double NNfunction_gg::synapse0x3516cd0() {
   return (neuron0x35001b0()*0.0253275);
}

double NNfunction_gg::synapse0x3516d10() {
   return (neuron0x35004f0()*0.0143575);
}

double NNfunction_gg::synapse0x3516d50() {
   return (neuron0x3500830()*-0.814328);
}

double NNfunction_gg::synapse0x3516d90() {
   return (neuron0x3500b70()*-0.0187349);
}

double NNfunction_gg::synapse0x3516dd0() {
   return (neuron0x3500eb0()*0.0189336);
}

double NNfunction_gg::synapse0x3516e10() {
   return (neuron0x35011f0()*-0.00125309);
}

double NNfunction_gg::synapse0x3516e50() {
   return (neuron0x3501530()*0.0575438);
}

double NNfunction_gg::synapse0x3516e90() {
   return (neuron0x3501870()*-0.0355024);
}

double NNfunction_gg::synapse0x3516ed0() {
   return (neuron0x3501bb0()*-0.0595037);
}

double NNfunction_gg::synapse0x3516f10() {
   return (neuron0x3501ef0()*0.0176864);
}

double NNfunction_gg::synapse0x3516f50() {
   return (neuron0x3502230()*0.0894213);
}

double NNfunction_gg::synapse0x3516f90() {
   return (neuron0x3502570()*-0.0630508);
}

double NNfunction_gg::synapse0x3516fd0() {
   return (neuron0x35028b0()*-0.0162126);
}

double NNfunction_gg::synapse0x3517010() {
   return (neuron0x3502bf0()*0.366102);
}

double NNfunction_gg::synapse0x3517050() {
   return (neuron0x3502f30()*-0.116314);
}

double NNfunction_gg::synapse0x3516ae0() {
   return (neuron0x3503270()*-0.00359825);
}

double NNfunction_gg::synapse0x3516b20() {
   return (neuron0x35037d0()*-0.0870518);
}

double NNfunction_gg::synapse0x35171a0() {
   return (neuron0x35039f0()*-0.116741);
}

double NNfunction_gg::synapse0x35171e0() {
   return (neuron0x3503d30()*-0.0222311);
}

double NNfunction_gg::synapse0x3517220() {
   return (neuron0x3504070()*-0.0444156);
}

double NNfunction_gg::synapse0x3517260() {
   return (neuron0x35043b0()*0.0225361);
}

double NNfunction_gg::synapse0x35172a0() {
   return (neuron0x35046f0()*0.0106767);
}

double NNfunction_gg::synapse0x35172e0() {
   return (neuron0x3504a30()*0.0109148);
}

double NNfunction_gg::synapse0x3517660() {
   return (neuron0x34ffe70()*0.0364696);
}

double NNfunction_gg::synapse0x35176a0() {
   return (neuron0x35001b0()*-0.0239587);
}

double NNfunction_gg::synapse0x35176e0() {
   return (neuron0x35004f0()*-0.00899618);
}

double NNfunction_gg::synapse0x3517720() {
   return (neuron0x3500830()*-1.20448);
}

double NNfunction_gg::synapse0x3517760() {
   return (neuron0x3500b70()*0.0244624);
}

double NNfunction_gg::synapse0x35177a0() {
   return (neuron0x3500eb0()*-0.0178539);
}

double NNfunction_gg::synapse0x35177e0() {
   return (neuron0x35011f0()*-0.0311286);
}

double NNfunction_gg::synapse0x3517820() {
   return (neuron0x3501530()*0.00629613);
}

double NNfunction_gg::synapse0x3517860() {
   return (neuron0x3501870()*0.0168571);
}

double NNfunction_gg::synapse0x35178a0() {
   return (neuron0x3501bb0()*0.00914993);
}

double NNfunction_gg::synapse0x35178e0() {
   return (neuron0x3501ef0()*0.0159216);
}

double NNfunction_gg::synapse0x3517920() {
   return (neuron0x3502230()*1.34443);
}

double NNfunction_gg::synapse0x3517960() {
   return (neuron0x3502570()*-0.0305205);
}

double NNfunction_gg::synapse0x35179a0() {
   return (neuron0x35028b0()*-0.0124626);
}

double NNfunction_gg::synapse0x35179e0() {
   return (neuron0x3502bf0()*-0.140113);
}

double NNfunction_gg::synapse0x3517a20() {
   return (neuron0x3502f30()*-0.0114502);
}

double NNfunction_gg::synapse0x35174b0() {
   return (neuron0x3503270()*0.0230178);
}

double NNfunction_gg::synapse0x35174f0() {
   return (neuron0x35037d0()*-0.0385538);
}

double NNfunction_gg::synapse0x3517b70() {
   return (neuron0x35039f0()*-0.0530189);
}

double NNfunction_gg::synapse0x3517bb0() {
   return (neuron0x3503d30()*-0.007649);
}

double NNfunction_gg::synapse0x3517bf0() {
   return (neuron0x3504070()*-0.00721751);
}

double NNfunction_gg::synapse0x3517c30() {
   return (neuron0x35043b0()*0.0133945);
}

double NNfunction_gg::synapse0x3517c70() {
   return (neuron0x35046f0()*0.0104989);
}

double NNfunction_gg::synapse0x3517cb0() {
   return (neuron0x3504a30()*-0.0283667);
}

double NNfunction_gg::synapse0x3518030() {
   return (neuron0x34ffe70()*-0.00481355);
}

double NNfunction_gg::synapse0x3518070() {
   return (neuron0x35001b0()*0.00661066);
}

double NNfunction_gg::synapse0x35180b0() {
   return (neuron0x35004f0()*0.0133074);
}

double NNfunction_gg::synapse0x35180f0() {
   return (neuron0x3500830()*0.791759);
}

double NNfunction_gg::synapse0x3518130() {
   return (neuron0x3500b70()*-0.000351933);
}

double NNfunction_gg::synapse0x3518170() {
   return (neuron0x3500eb0()*-0.00340185);
}

double NNfunction_gg::synapse0x35181b0() {
   return (neuron0x35011f0()*0.00941588);
}

double NNfunction_gg::synapse0x35181f0() {
   return (neuron0x3501530()*-0.00418053);
}

double NNfunction_gg::synapse0x3518230() {
   return (neuron0x3501870()*0.00239002);
}

double NNfunction_gg::synapse0x3518270() {
   return (neuron0x3501bb0()*-0.00539288);
}

double NNfunction_gg::synapse0x35182b0() {
   return (neuron0x3501ef0()*0.00247171);
}

double NNfunction_gg::synapse0x35182f0() {
   return (neuron0x3502230()*-0.0634366);
}

double NNfunction_gg::synapse0x3518330() {
   return (neuron0x3502570()*0.069617);
}

double NNfunction_gg::synapse0x3518370() {
   return (neuron0x35028b0()*0.0147505);
}

double NNfunction_gg::synapse0x35183b0() {
   return (neuron0x3502bf0()*0.0173744);
}

double NNfunction_gg::synapse0x35183f0() {
   return (neuron0x3502f30()*0.0122233);
}

double NNfunction_gg::synapse0x3517e80() {
   return (neuron0x3503270()*0.00893415);
}

double NNfunction_gg::synapse0x3517ec0() {
   return (neuron0x35037d0()*-0.30411);
}

double NNfunction_gg::synapse0x3518540() {
   return (neuron0x35039f0()*0.0270511);
}

double NNfunction_gg::synapse0x3518580() {
   return (neuron0x3503d30()*0.0232007);
}

double NNfunction_gg::synapse0x35185c0() {
   return (neuron0x3504070()*-0.00863574);
}

double NNfunction_gg::synapse0x3518600() {
   return (neuron0x35043b0()*-0.00357965);
}

double NNfunction_gg::synapse0x3518640() {
   return (neuron0x35046f0()*-0.00122001);
}

double NNfunction_gg::synapse0x3518680() {
   return (neuron0x3504a30()*0.00389148);
}

double NNfunction_gg::synapse0x3518a00() {
   return (neuron0x34ffe70()*-0.606143);
}

double NNfunction_gg::synapse0x3518a40() {
   return (neuron0x35001b0()*0.269622);
}

double NNfunction_gg::synapse0x3518a80() {
   return (neuron0x35004f0()*-0.211771);
}

double NNfunction_gg::synapse0x3518ac0() {
   return (neuron0x3500830()*-0.0593416);
}

double NNfunction_gg::synapse0x3518b00() {
   return (neuron0x3500b70()*-0.493978);
}

double NNfunction_gg::synapse0x3518b40() {
   return (neuron0x3500eb0()*-0.0808848);
}

double NNfunction_gg::synapse0x3518b80() {
   return (neuron0x35011f0()*-0.533796);
}

double NNfunction_gg::synapse0x3518bc0() {
   return (neuron0x3501530()*0.26269);
}

double NNfunction_gg::synapse0x3518c00() {
   return (neuron0x3501870()*-0.745529);
}

double NNfunction_gg::synapse0x3518c40() {
   return (neuron0x3501bb0()*-0.19228);
}

double NNfunction_gg::synapse0x3518c80() {
   return (neuron0x3501ef0()*-0.40909);
}

double NNfunction_gg::synapse0x3518cc0() {
   return (neuron0x3502230()*-0.558131);
}

double NNfunction_gg::synapse0x3518d00() {
   return (neuron0x3502570()*-0.42312);
}

double NNfunction_gg::synapse0x3518d40() {
   return (neuron0x35028b0()*0.0468697);
}

double NNfunction_gg::synapse0x3518d80() {
   return (neuron0x3502bf0()*-0.117457);
}

double NNfunction_gg::synapse0x3518dc0() {
   return (neuron0x3502f30()*-0.15893);
}

double NNfunction_gg::synapse0x3518850() {
   return (neuron0x3503270()*-0.239713);
}

double NNfunction_gg::synapse0x3518890() {
   return (neuron0x35037d0()*-0.131247);
}

double NNfunction_gg::synapse0x3518f10() {
   return (neuron0x35039f0()*-0.252616);
}

double NNfunction_gg::synapse0x3518f50() {
   return (neuron0x3503d30()*-0.318261);
}

double NNfunction_gg::synapse0x3518f90() {
   return (neuron0x3504070()*-0.514255);
}

double NNfunction_gg::synapse0x3518fd0() {
   return (neuron0x35043b0()*-0.215909);
}

double NNfunction_gg::synapse0x3519010() {
   return (neuron0x35046f0()*0.188579);
}

double NNfunction_gg::synapse0x3519050() {
   return (neuron0x3504a30()*0.104724);
}

double NNfunction_gg::synapse0x35193d0() {
   return (neuron0x34ffe70()*0.0089862);
}

double NNfunction_gg::synapse0x3519410() {
   return (neuron0x35001b0()*-0.00400028);
}

double NNfunction_gg::synapse0x3519450() {
   return (neuron0x35004f0()*0.0077276);
}

double NNfunction_gg::synapse0x3519490() {
   return (neuron0x3500830()*-1.1609);
}

double NNfunction_gg::synapse0x35194d0() {
   return (neuron0x3500b70()*0.00134157);
}

double NNfunction_gg::synapse0x3519510() {
   return (neuron0x3500eb0()*7.36107e-05);
}

double NNfunction_gg::synapse0x3519550() {
   return (neuron0x35011f0()*-0.00734126);
}

double NNfunction_gg::synapse0x3519590() {
   return (neuron0x3501530()*0.00495593);
}

double NNfunction_gg::synapse0x35195d0() {
   return (neuron0x3501870()*-0.000402474);
}

double NNfunction_gg::synapse0x3519610() {
   return (neuron0x3501bb0()*0.0048976);
}

double NNfunction_gg::synapse0x3519650() {
   return (neuron0x3501ef0()*-0.00248722);
}

double NNfunction_gg::synapse0x3519690() {
   return (neuron0x3502230()*-0.038103);
}

double NNfunction_gg::synapse0x35196d0() {
   return (neuron0x3502570()*0.0334927);
}

double NNfunction_gg::synapse0x3519710() {
   return (neuron0x35028b0()*0.00576651);
}

double NNfunction_gg::synapse0x3519750() {
   return (neuron0x3502bf0()*-0.0981674);
}

double NNfunction_gg::synapse0x3519790() {
   return (neuron0x3502f30()*0.0244422);
}

double NNfunction_gg::synapse0x3519220() {
   return (neuron0x3503270()*0.00296269);
}

double NNfunction_gg::synapse0x3519260() {
   return (neuron0x35037d0()*0.0308097);
}

double NNfunction_gg::synapse0x35198e0() {
   return (neuron0x35039f0()*0.0134865);
}

double NNfunction_gg::synapse0x3519920() {
   return (neuron0x3503d30()*-0.00527834);
}

double NNfunction_gg::synapse0x3519960() {
   return (neuron0x3504070()*0.000360404);
}

double NNfunction_gg::synapse0x35199a0() {
   return (neuron0x35043b0()*0.00229889);
}

double NNfunction_gg::synapse0x35199e0() {
   return (neuron0x35046f0()*0.00279155);
}

double NNfunction_gg::synapse0x3519a20() {
   return (neuron0x3504a30()*-0.00951308);
}

double NNfunction_gg::synapse0x3519da0() {
   return (neuron0x34ffe70()*-0.349126);
}

double NNfunction_gg::synapse0x3519de0() {
   return (neuron0x35001b0()*-0.151765);
}

double NNfunction_gg::synapse0x3519e20() {
   return (neuron0x35004f0()*-0.0999072);
}

double NNfunction_gg::synapse0x3519e60() {
   return (neuron0x3500830()*-0.164196);
}

double NNfunction_gg::synapse0x3519ea0() {
   return (neuron0x3500b70()*-0.734039);
}

double NNfunction_gg::synapse0x3519ee0() {
   return (neuron0x3500eb0()*-0.382594);
}

double NNfunction_gg::synapse0x3519f20() {
   return (neuron0x35011f0()*-0.353442);
}

double NNfunction_gg::synapse0x3519f60() {
   return (neuron0x3501530()*-0.234497);
}

double NNfunction_gg::synapse0x3519fa0() {
   return (neuron0x3501870()*-0.28508);
}

double NNfunction_gg::synapse0x3519fe0() {
   return (neuron0x3501bb0()*-0.166958);
}

double NNfunction_gg::synapse0x351a020() {
   return (neuron0x3501ef0()*-0.147251);
}

double NNfunction_gg::synapse0x351a060() {
   return (neuron0x3502230()*-0.252958);
}

double NNfunction_gg::synapse0x351a0a0() {
   return (neuron0x3502570()*-0.104197);
}

double NNfunction_gg::synapse0x351a0e0() {
   return (neuron0x35028b0()*-0.00505149);
}

double NNfunction_gg::synapse0x351a120() {
   return (neuron0x3502bf0()*-0.144915);
}

double NNfunction_gg::synapse0x351a160() {
   return (neuron0x3502f30()*-0.411558);
}

double NNfunction_gg::synapse0x3519bf0() {
   return (neuron0x3503270()*0.225663);
}

double NNfunction_gg::synapse0x3519c30() {
   return (neuron0x35037d0()*-0.00940027);
}

double NNfunction_gg::synapse0x351a2b0() {
   return (neuron0x35039f0()*-0.140173);
}

double NNfunction_gg::synapse0x351a2f0() {
   return (neuron0x3503d30()*-0.108132);
}

double NNfunction_gg::synapse0x351a330() {
   return (neuron0x3504070()*-0.0915792);
}

double NNfunction_gg::synapse0x351a370() {
   return (neuron0x35043b0()*-0.0126271);
}

double NNfunction_gg::synapse0x351a3b0() {
   return (neuron0x35046f0()*0.0165611);
}

double NNfunction_gg::synapse0x351a3f0() {
   return (neuron0x3504a30()*-0.0963806);
}

double NNfunction_gg::synapse0x351a770() {
   return (neuron0x34ffe70()*-0.381671);
}

double NNfunction_gg::synapse0x350ed40() {
   return (neuron0x35001b0()*0.415368);
}

double NNfunction_gg::synapse0x350ed80() {
   return (neuron0x35004f0()*-0.115242);
}

double NNfunction_gg::synapse0x350edc0() {
   return (neuron0x3500830()*-0.274253);
}

double NNfunction_gg::synapse0x350f010() {
   return (neuron0x3500b70()*-0.646045);
}

double NNfunction_gg::synapse0x350f050() {
   return (neuron0x3500eb0()*-0.458);
}

double NNfunction_gg::synapse0x350f090() {
   return (neuron0x35011f0()*-0.00860539);
}

double NNfunction_gg::synapse0x350f2e0() {
   return (neuron0x3501530()*0.020096);
}

double NNfunction_gg::synapse0x350f320() {
   return (neuron0x3501870()*-0.0569071);
}

double NNfunction_gg::synapse0x350f570() {
   return (neuron0x3501bb0()*-0.247862);
}

double NNfunction_gg::synapse0x350f5b0() {
   return (neuron0x3501ef0()*-0.337357);
}

double NNfunction_gg::synapse0x350f5f0() {
   return (neuron0x3502230()*0.0653592);
}

double NNfunction_gg::synapse0x350f840() {
   return (neuron0x3502570()*-0.364027);
}

double NNfunction_gg::synapse0x350f880() {
   return (neuron0x35028b0()*-0.0619084);
}

double NNfunction_gg::synapse0x350fad0() {
   return (neuron0x3502bf0()*-0.0821262);
}

double NNfunction_gg::synapse0x350fb10() {
   return (neuron0x3502f30()*-0.0643615);
}

double NNfunction_gg::synapse0x351a5c0() {
   return (neuron0x3503270()*0.435537);
}

double NNfunction_gg::synapse0x351a600() {
   return (neuron0x35037d0()*0.281586);
}

double NNfunction_gg::synapse0x350fc60() {
   return (neuron0x35039f0()*-0.164594);
}

double NNfunction_gg::synapse0x3510170() {
   return (neuron0x3503d30()*0.62505);
}

double NNfunction_gg::synapse0x35101b0() {
   return (neuron0x3504070()*-0.0234573);
}

double NNfunction_gg::synapse0x35101f0() {
   return (neuron0x35043b0()*-0.0282311);
}

double NNfunction_gg::synapse0x3510440() {
   return (neuron0x35046f0()*0.069127);
}

double NNfunction_gg::synapse0x3510480() {
   return (neuron0x3504a30()*-0.0930555);
}

double NNfunction_gg::synapse0x350fd30() {
   return (neuron0x34ffe70()*0.0183133);
}

double NNfunction_gg::synapse0x350fd70() {
   return (neuron0x35001b0()*0.362786);
}

double NNfunction_gg::synapse0x350fdb0() {
   return (neuron0x35004f0()*-0.602332);
}

double NNfunction_gg::synapse0x350fdf0() {
   return (neuron0x3500830()*0.458045);
}

double NNfunction_gg::synapse0x3510770() {
   return (neuron0x3500b70()*0.0346835);
}

double NNfunction_gg::synapse0x351cac0() {
   return (neuron0x3500eb0()*-0.309897);
}

double NNfunction_gg::synapse0x351cb00() {
   return (neuron0x35011f0()*-0.04828);
}

double NNfunction_gg::synapse0x351cb40() {
   return (neuron0x3501530()*0.182009);
}

double NNfunction_gg::synapse0x351cb80() {
   return (neuron0x3501870()*-0.154768);
}

double NNfunction_gg::synapse0x351cbc0() {
   return (neuron0x3501bb0()*-0.195893);
}

double NNfunction_gg::synapse0x351cc00() {
   return (neuron0x3501ef0()*0.175948);
}

double NNfunction_gg::synapse0x351cc40() {
   return (neuron0x3502230()*-0.234246);
}

double NNfunction_gg::synapse0x351cc80() {
   return (neuron0x3502570()*-0.607585);
}

double NNfunction_gg::synapse0x351ccc0() {
   return (neuron0x35028b0()*0.03563);
}

double NNfunction_gg::synapse0x351cd00() {
   return (neuron0x3502bf0()*-0.341313);
}

double NNfunction_gg::synapse0x351cd40() {
   return (neuron0x3502f30()*-0.273281);
}

double NNfunction_gg::synapse0x3510650() {
   return (neuron0x3503270()*0.132876);
}

double NNfunction_gg::synapse0x3510690() {
   return (neuron0x35037d0()*0.248446);
}

double NNfunction_gg::synapse0x351ce90() {
   return (neuron0x35039f0()*0.576499);
}

double NNfunction_gg::synapse0x351ced0() {
   return (neuron0x3503d30()*-0.239554);
}

double NNfunction_gg::synapse0x351cf10() {
   return (neuron0x3504070()*-0.353292);
}

double NNfunction_gg::synapse0x351cf50() {
   return (neuron0x35043b0()*0.103695);
}

double NNfunction_gg::synapse0x351cf90() {
   return (neuron0x35046f0()*-0.107023);
}

double NNfunction_gg::synapse0x351cfd0() {
   return (neuron0x3504a30()*-0.373241);
}

double NNfunction_gg::synapse0x351d350() {
   return (neuron0x34ffe70()*0.553696);
}

double NNfunction_gg::synapse0x351d390() {
   return (neuron0x35001b0()*-0.166776);
}

double NNfunction_gg::synapse0x351d3d0() {
   return (neuron0x35004f0()*-0.119762);
}

double NNfunction_gg::synapse0x351d410() {
   return (neuron0x3500830()*-0.428912);
}

double NNfunction_gg::synapse0x351d450() {
   return (neuron0x3500b70()*0.789139);
}

double NNfunction_gg::synapse0x351d490() {
   return (neuron0x3500eb0()*0.424779);
}

double NNfunction_gg::synapse0x351d4d0() {
   return (neuron0x35011f0()*-0.193512);
}

double NNfunction_gg::synapse0x351d510() {
   return (neuron0x3501530()*-0.0804768);
}

double NNfunction_gg::synapse0x351d550() {
   return (neuron0x3501870()*-0.0292265);
}

double NNfunction_gg::synapse0x351d590() {
   return (neuron0x3501bb0()*-0.0373338);
}

double NNfunction_gg::synapse0x351d5d0() {
   return (neuron0x3501ef0()*0.0322607);
}

double NNfunction_gg::synapse0x351d610() {
   return (neuron0x3502230()*0.511304);
}

double NNfunction_gg::synapse0x351d650() {
   return (neuron0x3502570()*0.532445);
}

double NNfunction_gg::synapse0x351d690() {
   return (neuron0x35028b0()*0.24922);
}

double NNfunction_gg::synapse0x351d6d0() {
   return (neuron0x3502bf0()*0.497117);
}

double NNfunction_gg::synapse0x351d710() {
   return (neuron0x3502f30()*-0.090581);
}

double NNfunction_gg::synapse0x351d1a0() {
   return (neuron0x3503270()*-0.463274);
}

double NNfunction_gg::synapse0x351d1e0() {
   return (neuron0x35037d0()*0.313337);
}

double NNfunction_gg::synapse0x351d860() {
   return (neuron0x35039f0()*0.070431);
}

double NNfunction_gg::synapse0x351d8a0() {
   return (neuron0x3503d30()*0.327414);
}

double NNfunction_gg::synapse0x351d8e0() {
   return (neuron0x3504070()*0.31349);
}

double NNfunction_gg::synapse0x351d920() {
   return (neuron0x35043b0()*0.0145958);
}

double NNfunction_gg::synapse0x351d960() {
   return (neuron0x35046f0()*-0.27502);
}

double NNfunction_gg::synapse0x351d9a0() {
   return (neuron0x3504a30()*0.0347431);
}

double NNfunction_gg::synapse0x351dd20() {
   return (neuron0x34ffe70()*-0.921204);
}

double NNfunction_gg::synapse0x351dd60() {
   return (neuron0x35001b0()*-0.0938795);
}

double NNfunction_gg::synapse0x351dda0() {
   return (neuron0x35004f0()*-0.0757297);
}

double NNfunction_gg::synapse0x351dde0() {
   return (neuron0x3500830()*-0.0158483);
}

double NNfunction_gg::synapse0x351de20() {
   return (neuron0x3500b70()*-0.96993);
}

double NNfunction_gg::synapse0x351de60() {
   return (neuron0x3500eb0()*-0.404343);
}

double NNfunction_gg::synapse0x351dea0() {
   return (neuron0x35011f0()*-0.343044);
}

double NNfunction_gg::synapse0x351dee0() {
   return (neuron0x3501530()*-0.141955);
}

double NNfunction_gg::synapse0x351df20() {
   return (neuron0x3501870()*-0.00988327);
}

double NNfunction_gg::synapse0x351df60() {
   return (neuron0x3501bb0()*0.193159);
}

double NNfunction_gg::synapse0x351dfa0() {
   return (neuron0x3501ef0()*-0.11414);
}

double NNfunction_gg::synapse0x351dfe0() {
   return (neuron0x3502230()*-0.431944);
}

double NNfunction_gg::synapse0x351e020() {
   return (neuron0x3502570()*-0.22047);
}

double NNfunction_gg::synapse0x351e060() {
   return (neuron0x35028b0()*0.0817425);
}

double NNfunction_gg::synapse0x351e0a0() {
   return (neuron0x3502bf0()*0.0508632);
}

double NNfunction_gg::synapse0x351e0e0() {
   return (neuron0x3502f30()*-0.260124);
}

double NNfunction_gg::synapse0x351db70() {
   return (neuron0x3503270()*0.538281);
}

double NNfunction_gg::synapse0x351dbb0() {
   return (neuron0x35037d0()*-0.575109);
}

double NNfunction_gg::synapse0x351e230() {
   return (neuron0x35039f0()*0.234084);
}

double NNfunction_gg::synapse0x351e270() {
   return (neuron0x3503d30()*0.247146);
}

double NNfunction_gg::synapse0x351e2b0() {
   return (neuron0x3504070()*0.35576);
}

double NNfunction_gg::synapse0x351e2f0() {
   return (neuron0x35043b0()*-0.198331);
}

double NNfunction_gg::synapse0x351e330() {
   return (neuron0x35046f0()*0.36337);
}

double NNfunction_gg::synapse0x351e370() {
   return (neuron0x3504a30()*-0.621275);
}

double NNfunction_gg::synapse0x351e6f0() {
   return (neuron0x34ffe70()*0.200735);
}

double NNfunction_gg::synapse0x351e730() {
   return (neuron0x35001b0()*0.0558762);
}

double NNfunction_gg::synapse0x351e770() {
   return (neuron0x35004f0()*-0.128497);
}

double NNfunction_gg::synapse0x351e7b0() {
   return (neuron0x3500830()*-0.255157);
}

double NNfunction_gg::synapse0x351e7f0() {
   return (neuron0x3500b70()*-0.457359);
}

double NNfunction_gg::synapse0x351e830() {
   return (neuron0x3500eb0()*-0.373723);
}

double NNfunction_gg::synapse0x351e870() {
   return (neuron0x35011f0()*-0.121306);
}

double NNfunction_gg::synapse0x351e8b0() {
   return (neuron0x3501530()*-0.20733);
}

double NNfunction_gg::synapse0x351e8f0() {
   return (neuron0x3501870()*-0.102219);
}

double NNfunction_gg::synapse0x351e930() {
   return (neuron0x3501bb0()*-0.0829737);
}

double NNfunction_gg::synapse0x351e970() {
   return (neuron0x3501ef0()*-0.285065);
}

double NNfunction_gg::synapse0x351e9b0() {
   return (neuron0x3502230()*0.194484);
}

double NNfunction_gg::synapse0x351e9f0() {
   return (neuron0x3502570()*0.056004);
}

double NNfunction_gg::synapse0x351ea30() {
   return (neuron0x35028b0()*-0.190907);
}

double NNfunction_gg::synapse0x351ea70() {
   return (neuron0x3502bf0()*-0.561125);
}

double NNfunction_gg::synapse0x351eab0() {
   return (neuron0x3502f30()*-0.204441);
}

double NNfunction_gg::synapse0x351e540() {
   return (neuron0x3503270()*-0.191086);
}

double NNfunction_gg::synapse0x351e580() {
   return (neuron0x35037d0()*-0.530899);
}

double NNfunction_gg::synapse0x351ec00() {
   return (neuron0x35039f0()*-0.513096);
}

double NNfunction_gg::synapse0x351ec40() {
   return (neuron0x3503d30()*-0.0189157);
}

double NNfunction_gg::synapse0x351ec80() {
   return (neuron0x3504070()*0.0847721);
}

double NNfunction_gg::synapse0x351ecc0() {
   return (neuron0x35043b0()*0.00375612);
}

double NNfunction_gg::synapse0x351ed00() {
   return (neuron0x35046f0()*-0.104858);
}

double NNfunction_gg::synapse0x351ed40() {
   return (neuron0x3504a30()*-0.393682);
}

double NNfunction_gg::synapse0x351f0c0() {
   return (neuron0x34ffe70()*0.107062);
}

double NNfunction_gg::synapse0x351f100() {
   return (neuron0x35001b0()*0.181187);
}

double NNfunction_gg::synapse0x351f140() {
   return (neuron0x35004f0()*-0.0194142);
}

double NNfunction_gg::synapse0x351f180() {
   return (neuron0x3500830()*-1.22029);
}

double NNfunction_gg::synapse0x351f1c0() {
   return (neuron0x3500b70()*0.0621052);
}

double NNfunction_gg::synapse0x351f200() {
   return (neuron0x3500eb0()*-0.00891931);
}

double NNfunction_gg::synapse0x351f240() {
   return (neuron0x35011f0()*-0.0807718);
}

double NNfunction_gg::synapse0x351f280() {
   return (neuron0x3501530()*0.107964);
}

double NNfunction_gg::synapse0x351f2c0() {
   return (neuron0x3501870()*-0.138975);
}

double NNfunction_gg::synapse0x351f300() {
   return (neuron0x3501bb0()*-0.186835);
}

double NNfunction_gg::synapse0x351f340() {
   return (neuron0x3501ef0()*0.230527);
}

double NNfunction_gg::synapse0x351f380() {
   return (neuron0x3502230()*0.145204);
}

double NNfunction_gg::synapse0x351f3c0() {
   return (neuron0x3502570()*0.275135);
}

double NNfunction_gg::synapse0x351f400() {
   return (neuron0x35028b0()*-0.0496719);
}

double NNfunction_gg::synapse0x351f440() {
   return (neuron0x3502bf0()*-0.847687);
}

double NNfunction_gg::synapse0x351f480() {
   return (neuron0x3502f30()*-0.378081);
}

double NNfunction_gg::synapse0x351ef10() {
   return (neuron0x3503270()*0.115369);
}

double NNfunction_gg::synapse0x351ef50() {
   return (neuron0x35037d0()*-0.0631557);
}

double NNfunction_gg::synapse0x351f5d0() {
   return (neuron0x35039f0()*0.118805);
}

double NNfunction_gg::synapse0x351f610() {
   return (neuron0x3503d30()*0.372037);
}

double NNfunction_gg::synapse0x351f650() {
   return (neuron0x3504070()*0.0112306);
}

double NNfunction_gg::synapse0x351f690() {
   return (neuron0x35043b0()*-0.00152644);
}

double NNfunction_gg::synapse0x351f6d0() {
   return (neuron0x35046f0()*-0.10046);
}

double NNfunction_gg::synapse0x351f710() {
   return (neuron0x3504a30()*-0.261327);
}

double NNfunction_gg::synapse0x351fa90() {
   return (neuron0x34ffe70()*-0.304897);
}

double NNfunction_gg::synapse0x351fad0() {
   return (neuron0x35001b0()*0.0213292);
}

double NNfunction_gg::synapse0x351fb10() {
   return (neuron0x35004f0()*-0.00101802);
}

double NNfunction_gg::synapse0x351fb50() {
   return (neuron0x3500830()*-0.916963);
}

double NNfunction_gg::synapse0x351fb90() {
   return (neuron0x3500b70()*-0.405995);
}

double NNfunction_gg::synapse0x351fbd0() {
   return (neuron0x3500eb0()*-0.156535);
}

double NNfunction_gg::synapse0x351fc10() {
   return (neuron0x35011f0()*-0.132971);
}

double NNfunction_gg::synapse0x351fc50() {
   return (neuron0x3501530()*-0.0409343);
}

double NNfunction_gg::synapse0x351fc90() {
   return (neuron0x3501870()*-0.290533);
}

double NNfunction_gg::synapse0x351fcd0() {
   return (neuron0x3501bb0()*-0.147272);
}

double NNfunction_gg::synapse0x351fd10() {
   return (neuron0x3501ef0()*0.318311);
}

double NNfunction_gg::synapse0x351fd50() {
   return (neuron0x3502230()*0.0517603);
}

double NNfunction_gg::synapse0x351fd90() {
   return (neuron0x3502570()*-0.377593);
}

double NNfunction_gg::synapse0x351fdd0() {
   return (neuron0x35028b0()*0.150195);
}

double NNfunction_gg::synapse0x351fe10() {
   return (neuron0x3502bf0()*0.0206139);
}

double NNfunction_gg::synapse0x351fe50() {
   return (neuron0x3502f30()*-0.16013);
}

double NNfunction_gg::synapse0x351f8e0() {
   return (neuron0x3503270()*0.150038);
}

double NNfunction_gg::synapse0x351f920() {
   return (neuron0x35037d0()*0.206205);
}

double NNfunction_gg::synapse0x351ffa0() {
   return (neuron0x35039f0()*-0.248186);
}

double NNfunction_gg::synapse0x351ffe0() {
   return (neuron0x3503d30()*-0.127746);
}

double NNfunction_gg::synapse0x3520020() {
   return (neuron0x3504070()*-0.13437);
}

double NNfunction_gg::synapse0x3520060() {
   return (neuron0x35043b0()*0.0465338);
}

double NNfunction_gg::synapse0x35200a0() {
   return (neuron0x35046f0()*-0.212905);
}

double NNfunction_gg::synapse0x35200e0() {
   return (neuron0x3504a30()*0.0352115);
}

double NNfunction_gg::synapse0x3520460() {
   return (neuron0x34ffe70()*0.0358571);
}

double NNfunction_gg::synapse0x35204a0() {
   return (neuron0x35001b0()*-0.0171195);
}

double NNfunction_gg::synapse0x35204e0() {
   return (neuron0x35004f0()*0.0165065);
}

double NNfunction_gg::synapse0x3520520() {
   return (neuron0x3500830()*-1.72341);
}

double NNfunction_gg::synapse0x3520560() {
   return (neuron0x3500b70()*0.0438667);
}

double NNfunction_gg::synapse0x35205a0() {
   return (neuron0x3500eb0()*-0.0113569);
}

double NNfunction_gg::synapse0x35205e0() {
   return (neuron0x35011f0()*-0.0200565);
}

double NNfunction_gg::synapse0x3520620() {
   return (neuron0x3501530()*-0.00202778);
}

double NNfunction_gg::synapse0x3520660() {
   return (neuron0x3501870()*0.0131735);
}

double NNfunction_gg::synapse0x35206a0() {
   return (neuron0x3501bb0()*0.00598884);
}

double NNfunction_gg::synapse0x35206e0() {
   return (neuron0x3501ef0()*-0.00488157);
}

double NNfunction_gg::synapse0x3520720() {
   return (neuron0x3502230()*-1.58877);
}

double NNfunction_gg::synapse0x3520760() {
   return (neuron0x3502570()*0.0463865);
}

double NNfunction_gg::synapse0x35207a0() {
   return (neuron0x35028b0()*-0.0224761);
}

double NNfunction_gg::synapse0x35207e0() {
   return (neuron0x3502bf0()*0.0506877);
}

double NNfunction_gg::synapse0x3520820() {
   return (neuron0x3502f30()*0.0252962);
}

double NNfunction_gg::synapse0x35202b0() {
   return (neuron0x3503270()*-0.0128601);
}

double NNfunction_gg::synapse0x35202f0() {
   return (neuron0x35037d0()*0.0440581);
}

double NNfunction_gg::synapse0x3520970() {
   return (neuron0x35039f0()*-0.013106);
}

double NNfunction_gg::synapse0x35209b0() {
   return (neuron0x3503d30()*0.0198238);
}

double NNfunction_gg::synapse0x35209f0() {
   return (neuron0x3504070()*0.0213826);
}

double NNfunction_gg::synapse0x3520a30() {
   return (neuron0x35043b0()*0.0324662);
}

double NNfunction_gg::synapse0x3520a70() {
   return (neuron0x35046f0()*0.0118785);
}

double NNfunction_gg::synapse0x3520ab0() {
   return (neuron0x3504a30()*0.00018837);
}

double NNfunction_gg::synapse0x3520e30() {
   return (neuron0x34ffe70()*0.0163795);
}

double NNfunction_gg::synapse0x3520e70() {
   return (neuron0x35001b0()*0.0118472);
}

double NNfunction_gg::synapse0x3520eb0() {
   return (neuron0x35004f0()*-0.0135088);
}

double NNfunction_gg::synapse0x3520ef0() {
   return (neuron0x3500830()*-0.950682);
}

double NNfunction_gg::synapse0x3520f30() {
   return (neuron0x3500b70()*0.000604698);
}

double NNfunction_gg::synapse0x3520f70() {
   return (neuron0x3500eb0()*0.00670467);
}

double NNfunction_gg::synapse0x3520fb0() {
   return (neuron0x35011f0()*-0.00849052);
}

double NNfunction_gg::synapse0x3520ff0() {
   return (neuron0x3501530()*0.00327554);
}

double NNfunction_gg::synapse0x3521030() {
   return (neuron0x3501870()*0.0121045);
}

double NNfunction_gg::synapse0x3521070() {
   return (neuron0x3501bb0()*0.0207853);
}

double NNfunction_gg::synapse0x35210b0() {
   return (neuron0x3501ef0()*0.00648076);
}

double NNfunction_gg::synapse0x35210f0() {
   return (neuron0x3502230()*0.0345657);
}

double NNfunction_gg::synapse0x3521130() {
   return (neuron0x3502570()*0.0540322);
}

double NNfunction_gg::synapse0x3521170() {
   return (neuron0x35028b0()*-0.0329758);
}

double NNfunction_gg::synapse0x35211b0() {
   return (neuron0x3502bf0()*0.210351);
}

double NNfunction_gg::synapse0x35211f0() {
   return (neuron0x3502f30()*0.0284195);
}

double NNfunction_gg::synapse0x3520c80() {
   return (neuron0x3503270()*-0.0459764);
}

double NNfunction_gg::synapse0x3520cc0() {
   return (neuron0x35037d0()*-0.025333);
}

double NNfunction_gg::synapse0x3521340() {
   return (neuron0x35039f0()*0.0401529);
}

double NNfunction_gg::synapse0x3521380() {
   return (neuron0x3503d30()*-0.015808);
}

double NNfunction_gg::synapse0x35213c0() {
   return (neuron0x3504070()*-0.0086708);
}

double NNfunction_gg::synapse0x3521400() {
   return (neuron0x35043b0()*0.000843196);
}

double NNfunction_gg::synapse0x3521440() {
   return (neuron0x35046f0()*0.00723129);
}

double NNfunction_gg::synapse0x3521480() {
   return (neuron0x3504a30()*0.0148958);
}

double NNfunction_gg::synapse0x3509f30() {
   return (neuron0x34ffe70()*-0.0199243);
}

double NNfunction_gg::synapse0x3509f70() {
   return (neuron0x35001b0()*0.0262478);
}

double NNfunction_gg::synapse0x3509fb0() {
   return (neuron0x35004f0()*-0.0553602);
}

double NNfunction_gg::synapse0x3509ff0() {
   return (neuron0x3500830()*-0.64211);
}

double NNfunction_gg::synapse0x350a030() {
   return (neuron0x3500b70()*-0.036963);
}

double NNfunction_gg::synapse0x350a070() {
   return (neuron0x3500eb0()*-0.00039308);
}

double NNfunction_gg::synapse0x350a0b0() {
   return (neuron0x35011f0()*0.0249324);
}

double NNfunction_gg::synapse0x350a0f0() {
   return (neuron0x3501530()*-0.00971152);
}

double NNfunction_gg::synapse0x3521c10() {
   return (neuron0x3501870()*-0.0032432);
}

double NNfunction_gg::synapse0x3521c50() {
   return (neuron0x3501bb0()*0.0104936);
}

double NNfunction_gg::synapse0x3521c90() {
   return (neuron0x3501ef0()*-0.0023806);
}

double NNfunction_gg::synapse0x3521cd0() {
   return (neuron0x3502230()*-0.00211548);
}

double NNfunction_gg::synapse0x3521d10() {
   return (neuron0x3502570()*-0.0236703);
}

double NNfunction_gg::synapse0x3521d50() {
   return (neuron0x35028b0()*0.0661459);
}

double NNfunction_gg::synapse0x3521d90() {
   return (neuron0x3502bf0()*0.0539128);
}

double NNfunction_gg::synapse0x3521dd0() {
   return (neuron0x3502f30()*-0.0144755);
}

double NNfunction_gg::synapse0x3521650() {
   return (neuron0x3503270()*0.117971);
}

double NNfunction_gg::synapse0x3521690() {
   return (neuron0x35037d0()*0.0141772);
}

double NNfunction_gg::synapse0x3521f20() {
   return (neuron0x35039f0()*0.00764825);
}

double NNfunction_gg::synapse0x3521f60() {
   return (neuron0x3503d30()*0.0253849);
}

double NNfunction_gg::synapse0x3521fa0() {
   return (neuron0x3504070()*-0.0382141);
}

double NNfunction_gg::synapse0x3521fe0() {
   return (neuron0x35043b0()*-0.0109059);
}

double NNfunction_gg::synapse0x3522020() {
   return (neuron0x35046f0()*-0.02676);
}

double NNfunction_gg::synapse0x3522060() {
   return (neuron0x3504a30()*0.0362638);
}

double NNfunction_gg::synapse0x35223e0() {
   return (neuron0x34ffe70()*0.0341028);
}

double NNfunction_gg::synapse0x3522420() {
   return (neuron0x35001b0()*0.00451146);
}

double NNfunction_gg::synapse0x3522460() {
   return (neuron0x35004f0()*-0.0277752);
}

double NNfunction_gg::synapse0x35224a0() {
   return (neuron0x3500830()*-1.33016);
}

double NNfunction_gg::synapse0x35224e0() {
   return (neuron0x3500b70()*0.05603);
}

double NNfunction_gg::synapse0x3522520() {
   return (neuron0x3500eb0()*0.0108204);
}

double NNfunction_gg::synapse0x3522560() {
   return (neuron0x35011f0()*-0.00914112);
}

double NNfunction_gg::synapse0x35225a0() {
   return (neuron0x3501530()*0.00741784);
}

double NNfunction_gg::synapse0x35225e0() {
   return (neuron0x3501870()*0.0221916);
}

double NNfunction_gg::synapse0x3522620() {
   return (neuron0x3501bb0()*0.0137915);
}

double NNfunction_gg::synapse0x3522660() {
   return (neuron0x3501ef0()*0.0286961);
}

double NNfunction_gg::synapse0x35226a0() {
   return (neuron0x3502230()*0.256145);
}

double NNfunction_gg::synapse0x35226e0() {
   return (neuron0x3502570()*0.0361878);
}

double NNfunction_gg::synapse0x3522720() {
   return (neuron0x35028b0()*-0.00933462);
}

double NNfunction_gg::synapse0x3522760() {
   return (neuron0x3502bf0()*-0.479751);
}

double NNfunction_gg::synapse0x35227a0() {
   return (neuron0x3502f30()*0.0421051);
}

double NNfunction_gg::synapse0x3522230() {
   return (neuron0x3503270()*0.0510013);
}

double NNfunction_gg::synapse0x3522270() {
   return (neuron0x35037d0()*-0.0431811);
}

double NNfunction_gg::synapse0x35228f0() {
   return (neuron0x35039f0()*0.0103291);
}

double NNfunction_gg::synapse0x3522930() {
   return (neuron0x3503d30()*0.0246391);
}

double NNfunction_gg::synapse0x3522970() {
   return (neuron0x3504070()*-0.0121898);
}

double NNfunction_gg::synapse0x35229b0() {
   return (neuron0x35043b0()*-0.0125366);
}

double NNfunction_gg::synapse0x35229f0() {
   return (neuron0x35046f0()*-0.00367073);
}

double NNfunction_gg::synapse0x3522a30() {
   return (neuron0x3504a30()*-0.021944);
}

double NNfunction_gg::synapse0x3522db0() {
   return (neuron0x34ffe70()*-0.00898632);
}

double NNfunction_gg::synapse0x3522df0() {
   return (neuron0x35001b0()*0.0153115);
}

double NNfunction_gg::synapse0x3522e30() {
   return (neuron0x35004f0()*-0.0180179);
}

double NNfunction_gg::synapse0x3522e70() {
   return (neuron0x3500830()*0.912346);
}

double NNfunction_gg::synapse0x3522eb0() {
   return (neuron0x3500b70()*-0.0434686);
}

double NNfunction_gg::synapse0x3522ef0() {
   return (neuron0x3500eb0()*0.0038756);
}

double NNfunction_gg::synapse0x3522f30() {
   return (neuron0x35011f0()*0.0187057);
}

double NNfunction_gg::synapse0x3522f70() {
   return (neuron0x3501530()*-0.00592726);
}

double NNfunction_gg::synapse0x3522fb0() {
   return (neuron0x3501870()*-0.0211694);
}

double NNfunction_gg::synapse0x3522ff0() {
   return (neuron0x3501bb0()*-0.0234051);
}

double NNfunction_gg::synapse0x3523030() {
   return (neuron0x3501ef0()*-0.0191705);
}

double NNfunction_gg::synapse0x3523070() {
   return (neuron0x3502230()*0.0448544);
}

double NNfunction_gg::synapse0x35230b0() {
   return (neuron0x3502570()*0.0149933);
}

double NNfunction_gg::synapse0x35230f0() {
   return (neuron0x35028b0()*-0.0468486);
}

double NNfunction_gg::synapse0x3523130() {
   return (neuron0x3502bf0()*0.307351);
}

double NNfunction_gg::synapse0x3523170() {
   return (neuron0x3502f30()*-0.128589);
}

double NNfunction_gg::synapse0x3522c00() {
   return (neuron0x3503270()*-0.0686566);
}

double NNfunction_gg::synapse0x3522c40() {
   return (neuron0x35037d0()*0.0484895);
}

double NNfunction_gg::synapse0x3513770() {
   return (neuron0x35039f0()*-0.0833021);
}

double NNfunction_gg::synapse0x35137b0() {
   return (neuron0x3503d30()*-0.049323);
}

double NNfunction_gg::synapse0x35137f0() {
   return (neuron0x3504070()*-0.0331133);
}

double NNfunction_gg::synapse0x3513830() {
   return (neuron0x35043b0()*-0.00301103);
}

double NNfunction_gg::synapse0x3513870() {
   return (neuron0x35046f0()*0.00719016);
}

double NNfunction_gg::synapse0x35138b0() {
   return (neuron0x3504a30()*0.0306316);
}

double NNfunction_gg::synapse0x3513c30() {
   return (neuron0x34ffe70()*1.24129);
}

double NNfunction_gg::synapse0x3513c70() {
   return (neuron0x35001b0()*0.536088);
}

double NNfunction_gg::synapse0x3513cb0() {
   return (neuron0x35004f0()*-0.155438);
}

double NNfunction_gg::synapse0x3513cf0() {
   return (neuron0x3500830()*-1.18635);
}

double NNfunction_gg::synapse0x3513d30() {
   return (neuron0x3500b70()*2.07886);
}

double NNfunction_gg::synapse0x3513d70() {
   return (neuron0x3500eb0()*0.598164);
}

double NNfunction_gg::synapse0x3513db0() {
   return (neuron0x35011f0()*0.655394);
}

double NNfunction_gg::synapse0x3513df0() {
   return (neuron0x3501530()*0.321424);
}

double NNfunction_gg::synapse0x3513e30() {
   return (neuron0x3501870()*0.160447);
}

double NNfunction_gg::synapse0x3513e70() {
   return (neuron0x3501bb0()*0.74026);
}

double NNfunction_gg::synapse0x3513eb0() {
   return (neuron0x3501ef0()*0.594137);
}

double NNfunction_gg::synapse0x3513ef0() {
   return (neuron0x3502230()*0.972982);
}

double NNfunction_gg::synapse0x3513f30() {
   return (neuron0x3502570()*0.780737);
}

double NNfunction_gg::synapse0x3513f70() {
   return (neuron0x35028b0()*-0.155555);
}

double NNfunction_gg::synapse0x3513fb0() {
   return (neuron0x3502bf0()*0.228485);
}

double NNfunction_gg::synapse0x3513ff0() {
   return (neuron0x3502f30()*0.201061);
}

double NNfunction_gg::synapse0x3513a80() {
   return (neuron0x3503270()*-0.75099);
}

double NNfunction_gg::synapse0x3513ac0() {
   return (neuron0x35037d0()*0.210135);
}

double NNfunction_gg::synapse0x3514140() {
   return (neuron0x35039f0()*0.177496);
}

double NNfunction_gg::synapse0x3514180() {
   return (neuron0x3503d30()*-0.144488);
}

double NNfunction_gg::synapse0x35141c0() {
   return (neuron0x3504070()*0.16246);
}

double NNfunction_gg::synapse0x3514200() {
   return (neuron0x35043b0()*0.0662532);
}

double NNfunction_gg::synapse0x3514240() {
   return (neuron0x35046f0()*-0.20242);
}

double NNfunction_gg::synapse0x3514280() {
   return (neuron0x3504a30()*0.572503);
}

double NNfunction_gg::synapse0x3514600() {
   return (neuron0x34ffe70()*0.233253);
}

double NNfunction_gg::synapse0x3514640() {
   return (neuron0x35001b0()*-0.00800128);
}

double NNfunction_gg::synapse0x3514680() {
   return (neuron0x35004f0()*-0.162107);
}

double NNfunction_gg::synapse0x35146c0() {
   return (neuron0x3500830()*-0.692563);
}

double NNfunction_gg::synapse0x3514700() {
   return (neuron0x3500b70()*-0.0287587);
}

double NNfunction_gg::synapse0x3514740() {
   return (neuron0x3500eb0()*-0.0193665);
}

double NNfunction_gg::synapse0x3514780() {
   return (neuron0x35011f0()*-0.0755412);
}

double NNfunction_gg::synapse0x35147c0() {
   return (neuron0x3501530()*0.137951);
}

double NNfunction_gg::synapse0x3514800() {
   return (neuron0x3501870()*-0.0157838);
}

double NNfunction_gg::synapse0x3514840() {
   return (neuron0x3501bb0()*0.272596);
}

double NNfunction_gg::synapse0x3514880() {
   return (neuron0x3501ef0()*0.200984);
}

double NNfunction_gg::synapse0x35148c0() {
   return (neuron0x3502230()*0.165577);
}

double NNfunction_gg::synapse0x3514900() {
   return (neuron0x3502570()*0.690104);
}

double NNfunction_gg::synapse0x3514940() {
   return (neuron0x35028b0()*-0.339663);
}

double NNfunction_gg::synapse0x3514980() {
   return (neuron0x3502bf0()*0.129254);
}

double NNfunction_gg::synapse0x35149c0() {
   return (neuron0x3502f30()*0.294491);
}

double NNfunction_gg::synapse0x3514450() {
   return (neuron0x3503270()*-0.382003);
}

double NNfunction_gg::synapse0x3514490() {
   return (neuron0x35037d0()*0.105379);
}

double NNfunction_gg::synapse0x3514b10() {
   return (neuron0x35039f0()*0.235589);
}

double NNfunction_gg::synapse0x3514b50() {
   return (neuron0x3503d30()*-0.288992);
}

double NNfunction_gg::synapse0x3514b90() {
   return (neuron0x3504070()*-0.263167);
}

double NNfunction_gg::synapse0x3514bd0() {
   return (neuron0x35043b0()*-0.120817);
}

double NNfunction_gg::synapse0x3514c10() {
   return (neuron0x35046f0()*0.0758048);
}

double NNfunction_gg::synapse0x3514c50() {
   return (neuron0x3504a30()*-0.0159445);
}

double NNfunction_gg::synapse0x3514fd0() {
   return (neuron0x34ffe70()*-0.0121615);
}

double NNfunction_gg::synapse0x3515010() {
   return (neuron0x35001b0()*-0.0242331);
}

double NNfunction_gg::synapse0x3515050() {
   return (neuron0x35004f0()*0.0175937);
}

double NNfunction_gg::synapse0x3515090() {
   return (neuron0x3500830()*13.7805);
}

double NNfunction_gg::synapse0x35150d0() {
   return (neuron0x3500b70()*-0.0194758);
}

double NNfunction_gg::synapse0x3515110() {
   return (neuron0x3500eb0()*-0.0394913);
}

double NNfunction_gg::synapse0x3515150() {
   return (neuron0x35011f0()*-0.0220506);
}

double NNfunction_gg::synapse0x3515190() {
   return (neuron0x3501530()*-0.00236875);
}

double NNfunction_gg::synapse0x35151d0() {
   return (neuron0x3501870()*-0.00914426);
}

double NNfunction_gg::synapse0x3515210() {
   return (neuron0x3501bb0()*0.00389415);
}

double NNfunction_gg::synapse0x3515250() {
   return (neuron0x3501ef0()*0.00209202);
}

double NNfunction_gg::synapse0x3515290() {
   return (neuron0x3502230()*-0.00771525);
}

double NNfunction_gg::synapse0x35152d0() {
   return (neuron0x3502570()*-0.00221549);
}

double NNfunction_gg::synapse0x3515310() {
   return (neuron0x35028b0()*0.0575755);
}

double NNfunction_gg::synapse0x3515350() {
   return (neuron0x3502bf0()*-0.00310772);
}

double NNfunction_gg::synapse0x3515390() {
   return (neuron0x3502f30()*0.00544495);
}

double NNfunction_gg::synapse0x3514e20() {
   return (neuron0x3503270()*0.0123471);
}

double NNfunction_gg::synapse0x3514e60() {
   return (neuron0x35037d0()*-0.0130841);
}

double NNfunction_gg::synapse0x35154e0() {
   return (neuron0x35039f0()*-0.0203701);
}

double NNfunction_gg::synapse0x3515520() {
   return (neuron0x3503d30()*0.0135229);
}

double NNfunction_gg::synapse0x3515560() {
   return (neuron0x3504070()*0.0296311);
}

double NNfunction_gg::synapse0x35155a0() {
   return (neuron0x35043b0()*-0.00868663);
}

double NNfunction_gg::synapse0x35155e0() {
   return (neuron0x35046f0()*-0.0200897);
}

double NNfunction_gg::synapse0x3515620() {
   return (neuron0x3504a30()*0.0079983);
}

double NNfunction_gg::synapse0x35274f0() {
   return (neuron0x34ffe70()*-0.000495242);
}

double NNfunction_gg::synapse0x3527530() {
   return (neuron0x35001b0()*-0.00835107);
}

double NNfunction_gg::synapse0x3527570() {
   return (neuron0x35004f0()*-0.00485982);
}

double NNfunction_gg::synapse0x35275b0() {
   return (neuron0x3500830()*0.456419);
}

double NNfunction_gg::synapse0x35275f0() {
   return (neuron0x3500b70()*0.00991404);
}

double NNfunction_gg::synapse0x3527630() {
   return (neuron0x3500eb0()*-0.00759463);
}

double NNfunction_gg::synapse0x3527670() {
   return (neuron0x35011f0()*-0.00479338);
}

double NNfunction_gg::synapse0x35276b0() {
   return (neuron0x3501530()*-0.00318525);
}

double NNfunction_gg::synapse0x35276f0() {
   return (neuron0x3501870()*0.00765065);
}

double NNfunction_gg::synapse0x3527730() {
   return (neuron0x3501bb0()*0.00594843);
}

double NNfunction_gg::synapse0x3527770() {
   return (neuron0x3501ef0()*0.00890123);
}

double NNfunction_gg::synapse0x35277b0() {
   return (neuron0x3502230()*-0.251564);
}

double NNfunction_gg::synapse0x35277f0() {
   return (neuron0x3502570()*0.0564293);
}

double NNfunction_gg::synapse0x3527830() {
   return (neuron0x35028b0()*-0.0112864);
}

double NNfunction_gg::synapse0x3527870() {
   return (neuron0x3502bf0()*0.0707522);
}

double NNfunction_gg::synapse0x35278b0() {
   return (neuron0x3502f30()*0.0261378);
}

double NNfunction_gg::synapse0x3515660() {
   return (neuron0x3503270()*-0.00571615);
}

double NNfunction_gg::synapse0x35156a0() {
   return (neuron0x35037d0()*0.0928443);
}

double NNfunction_gg::synapse0x3527a00() {
   return (neuron0x35039f0()*0.018575);
}

double NNfunction_gg::synapse0x3527a40() {
   return (neuron0x3503d30()*-0.00472043);
}

double NNfunction_gg::synapse0x3527a80() {
   return (neuron0x3504070()*-0.00459934);
}

double NNfunction_gg::synapse0x3527ac0() {
   return (neuron0x35043b0()*-0.00354729);
}

double NNfunction_gg::synapse0x3527b00() {
   return (neuron0x35046f0()*0.00324564);
}

double NNfunction_gg::synapse0x3527b40() {
   return (neuron0x3504a30()*-0.00801917);
}

double NNfunction_gg::synapse0x3527ec0() {
   return (neuron0x34ffe70()*-0.49779);
}

double NNfunction_gg::synapse0x3527f00() {
   return (neuron0x35001b0()*-0.405791);
}

double NNfunction_gg::synapse0x3527f40() {
   return (neuron0x35004f0()*0.325612);
}

double NNfunction_gg::synapse0x3527f80() {
   return (neuron0x3500830()*0.236466);
}

double NNfunction_gg::synapse0x3527fc0() {
   return (neuron0x3500b70()*-0.599705);
}

double NNfunction_gg::synapse0x3528000() {
   return (neuron0x3500eb0()*-0.133084);
}

double NNfunction_gg::synapse0x3528040() {
   return (neuron0x35011f0()*-0.316545);
}

double NNfunction_gg::synapse0x3528080() {
   return (neuron0x3501530()*-0.612869);
}

double NNfunction_gg::synapse0x35280c0() {
   return (neuron0x3501870()*-0.187479);
}

double NNfunction_gg::synapse0x3528100() {
   return (neuron0x3501bb0()*-0.263255);
}

double NNfunction_gg::synapse0x3528140() {
   return (neuron0x3501ef0()*-0.242496);
}

double NNfunction_gg::synapse0x3528180() {
   return (neuron0x3502230()*-0.0202125);
}

double NNfunction_gg::synapse0x35281c0() {
   return (neuron0x3502570()*-0.279774);
}

double NNfunction_gg::synapse0x3528200() {
   return (neuron0x35028b0()*-0.18851);
}

double NNfunction_gg::synapse0x3528240() {
   return (neuron0x3502bf0()*-0.0649073);
}

double NNfunction_gg::synapse0x3528280() {
   return (neuron0x3502f30()*0.27258);
}

double NNfunction_gg::synapse0x3527d10() {
   return (neuron0x3503270()*-0.0167266);
}

double NNfunction_gg::synapse0x3527d50() {
   return (neuron0x35037d0()*-0.306363);
}

double NNfunction_gg::synapse0x35283d0() {
   return (neuron0x35039f0()*-0.254579);
}

double NNfunction_gg::synapse0x3528410() {
   return (neuron0x3503d30()*-0.0135902);
}

double NNfunction_gg::synapse0x3528450() {
   return (neuron0x3504070()*0.333454);
}

double NNfunction_gg::synapse0x3528490() {
   return (neuron0x35043b0()*-0.156371);
}

double NNfunction_gg::synapse0x35284d0() {
   return (neuron0x35046f0()*-0.276401);
}

double NNfunction_gg::synapse0x3528510() {
   return (neuron0x3504a30()*-0.335488);
}

double NNfunction_gg::synapse0x3528890() {
   return (neuron0x34ffe70()*-0.044768);
}

double NNfunction_gg::synapse0x35288d0() {
   return (neuron0x35001b0()*0.255994);
}

double NNfunction_gg::synapse0x3528910() {
   return (neuron0x35004f0()*-0.0437188);
}

double NNfunction_gg::synapse0x3528950() {
   return (neuron0x3500830()*-0.491986);
}

double NNfunction_gg::synapse0x3528990() {
   return (neuron0x3500b70()*-0.165678);
}

double NNfunction_gg::synapse0x35289d0() {
   return (neuron0x3500eb0()*0.0789477);
}

double NNfunction_gg::synapse0x3528a10() {
   return (neuron0x35011f0()*0.231338);
}

double NNfunction_gg::synapse0x3528a50() {
   return (neuron0x3501530()*0.144484);
}

double NNfunction_gg::synapse0x3528a90() {
   return (neuron0x3501870()*-0.182909);
}

double NNfunction_gg::synapse0x3528ad0() {
   return (neuron0x3501bb0()*-0.228303);
}

double NNfunction_gg::synapse0x3528b10() {
   return (neuron0x3501ef0()*0.175533);
}

double NNfunction_gg::synapse0x3528b50() {
   return (neuron0x3502230()*0.439612);
}

double NNfunction_gg::synapse0x3528b90() {
   return (neuron0x3502570()*0.227464);
}

double NNfunction_gg::synapse0x3528bd0() {
   return (neuron0x35028b0()*0.665522);
}

double NNfunction_gg::synapse0x3528c10() {
   return (neuron0x3502bf0()*0.277886);
}

double NNfunction_gg::synapse0x3528c50() {
   return (neuron0x3502f30()*0.0466499);
}

double NNfunction_gg::synapse0x35286e0() {
   return (neuron0x3503270()*0.279318);
}

double NNfunction_gg::synapse0x3528720() {
   return (neuron0x35037d0()*-0.0474625);
}

double NNfunction_gg::synapse0x3528da0() {
   return (neuron0x35039f0()*0.0912867);
}

double NNfunction_gg::synapse0x3528de0() {
   return (neuron0x3503d30()*0.284885);
}

double NNfunction_gg::synapse0x3528e20() {
   return (neuron0x3504070()*-0.194452);
}

double NNfunction_gg::synapse0x3528e60() {
   return (neuron0x35043b0()*-0.134178);
}

double NNfunction_gg::synapse0x3528ea0() {
   return (neuron0x35046f0()*-0.186304);
}

double NNfunction_gg::synapse0x3528ee0() {
   return (neuron0x3504a30()*0.0318904);
}

double NNfunction_gg::synapse0x3529260() {
   return (neuron0x34ffe70()*-0.152741);
}

double NNfunction_gg::synapse0x35292a0() {
   return (neuron0x35001b0()*0.314117);
}

double NNfunction_gg::synapse0x35292e0() {
   return (neuron0x35004f0()*0.0572179);
}

double NNfunction_gg::synapse0x3529320() {
   return (neuron0x3500830()*0.867892);
}

double NNfunction_gg::synapse0x3529360() {
   return (neuron0x3500b70()*-0.434624);
}

double NNfunction_gg::synapse0x35293a0() {
   return (neuron0x3500eb0()*-0.257342);
}

double NNfunction_gg::synapse0x35293e0() {
   return (neuron0x35011f0()*-0.39475);
}

double NNfunction_gg::synapse0x3529420() {
   return (neuron0x3501530()*-0.621987);
}

double NNfunction_gg::synapse0x3529460() {
   return (neuron0x3501870()*0.0412323);
}

double NNfunction_gg::synapse0x35294a0() {
   return (neuron0x3501bb0()*-0.245141);
}

double NNfunction_gg::synapse0x35294e0() {
   return (neuron0x3501ef0()*-0.383432);
}

double NNfunction_gg::synapse0x3529520() {
   return (neuron0x3502230()*-0.181532);
}

double NNfunction_gg::synapse0x3529560() {
   return (neuron0x3502570()*-0.452537);
}

double NNfunction_gg::synapse0x35295a0() {
   return (neuron0x35028b0()*-0.00419937);
}

double NNfunction_gg::synapse0x35295e0() {
   return (neuron0x3502bf0()*-0.0016622);
}

double NNfunction_gg::synapse0x3529620() {
   return (neuron0x3502f30()*-0.148826);
}

double NNfunction_gg::synapse0x35290b0() {
   return (neuron0x3503270()*0.611984);
}

double NNfunction_gg::synapse0x35290f0() {
   return (neuron0x35037d0()*0.288947);
}

double NNfunction_gg::synapse0x3529770() {
   return (neuron0x35039f0()*-0.252977);
}

double NNfunction_gg::synapse0x35297b0() {
   return (neuron0x3503d30()*-0.0589995);
}

double NNfunction_gg::synapse0x35297f0() {
   return (neuron0x3504070()*-0.213493);
}

double NNfunction_gg::synapse0x3529830() {
   return (neuron0x35043b0()*0.165983);
}

double NNfunction_gg::synapse0x3529870() {
   return (neuron0x35046f0()*0.272463);
}

double NNfunction_gg::synapse0x35298b0() {
   return (neuron0x3504a30()*0.143859);
}

double NNfunction_gg::synapse0x32bfc80() {
   return (neuron0x3504ea0()*-0.000386638);
}

double NNfunction_gg::synapse0x32bfcc0() {
   return (neuron0x35057f0()*0.0616035);
}

double NNfunction_gg::synapse0x3507360() {
   return (neuron0x35062d0()*0.00367901);
}

double NNfunction_gg::synapse0x35073a0() {
   return (neuron0x3505d70()*-0.353222);
}

double NNfunction_gg::synapse0x3507d30() {
   return (neuron0x35070b0()*-0.00153246);
}

double NNfunction_gg::synapse0x3507d70() {
   return (neuron0x3507a80()*0.417371);
}

double NNfunction_gg::synapse0x3508b00() {
   return (neuron0x3508850()*-0.00293032);
}

double NNfunction_gg::synapse0x3508b40() {
   return (neuron0x3509220()*-2.15983);
}

double NNfunction_gg::synapse0x35094d0() {
   return (neuron0x3509bf0()*0.0910314);
}

double NNfunction_gg::synapse0x3509510() {
   return (neuron0x350a6d0()*5.6547);
}

double NNfunction_gg::synapse0x3509ea0() {
   return (neuron0x350b0a0()*-0.646742);
}

double NNfunction_gg::synapse0x3509ee0() {
   return (neuron0x3508180()*-0.157749);
}

double NNfunction_gg::synapse0x350a980() {
   return (neuron0x350cc50()*-0.0317555);
}

double NNfunction_gg::synapse0x350a9c0() {
   return (neuron0x350d620()*2.34202);
}

double NNfunction_gg::synapse0x350b350() {
   return (neuron0x350dff0()*-0.574774);
}

double NNfunction_gg::synapse0x350b390() {
   return (neuron0x350e9c0()*-0.00125231);
}

double NNfunction_gg::synapse0x3508430() {
   return (neuron0x35107d0()*0.00151142);
}

double NNfunction_gg::synapse0x3508470() {
   return (neuron0x3510ab0()*0.0053338);
}

double NNfunction_gg::synapse0x350cf00() {
   return (neuron0x3511480()*-0.948878);
}

double NNfunction_gg::synapse0x350cf40() {
   return (neuron0x3511e50()*0.00324026);
}

double NNfunction_gg::synapse0x350d8d0() {
   return (neuron0x3512820()*0.348527);
}

double NNfunction_gg::synapse0x350d910() {
   return (neuron0x35131f0()*0.363373);
}

double NNfunction_gg::synapse0x350e2a0() {
   return (neuron0x350bd40()*2.46192);
}

double NNfunction_gg::synapse0x350e2e0() {
   return (neuron0x350c710()*0.224587);
}

double NNfunction_gg::synapse0x350ec70() {
   return (neuron0x3515f80()*-2.12205);
}

double NNfunction_gg::synapse0x350ecb0() {
   return (neuron0x3516950()*-0.316904);
}

double NNfunction_gg::synapse0x3502e10() {
   return (neuron0x3517320()*0.104755);
}

double NNfunction_gg::synapse0x3502e50() {
   return (neuron0x3517cf0()*-0.42091);
}

double NNfunction_gg::synapse0x3510d60() {
   return (neuron0x35186c0()*-0.000576725);
}

double NNfunction_gg::synapse0x3510da0() {
   return (neuron0x3519090()*-0.787223);
}

double NNfunction_gg::synapse0x3511730() {
   return (neuron0x3519a60()*-0.00679184);
}

double NNfunction_gg::synapse0x3511770() {
   return (neuron0x351a430()*0.0029104);
}

double NNfunction_gg::synapse0x3512100() {
   return (neuron0x35104c0()*0.00539615);
}

double NNfunction_gg::synapse0x3512140() {
   return (neuron0x351d010()*-0.00144419);
}

double NNfunction_gg::synapse0x3512ad0() {
   return (neuron0x351d9e0()*-0.00258652);
}

double NNfunction_gg::synapse0x3512b10() {
   return (neuron0x351e3b0()*0.00573386);
}

double NNfunction_gg::synapse0x35134a0() {
   return (neuron0x351ed80()*0.00896029);
}

double NNfunction_gg::synapse0x35134e0() {
   return (neuron0x351f750()*0.00144084);
}

double NNfunction_gg::synapse0x350bff0() {
   return (neuron0x3520120()*0.108895);
}

double NNfunction_gg::synapse0x350c030() {
   return (neuron0x3520af0()*0.842036);
}

double NNfunction_gg::synapse0x35158a0() {
   return (neuron0x35214c0()*0.858886);
}

double NNfunction_gg::synapse0x35158e0() {
   return (neuron0x35220a0()*-0.353075);
}

double NNfunction_gg::synapse0x3516230() {
   return (neuron0x3522a70()*-0.513941);
}

double NNfunction_gg::synapse0x3516270() {
   return (neuron0x35138f0()*0.000339406);
}

double NNfunction_gg::synapse0x3516c00() {
   return (neuron0x35142c0()*0.0010132);
}

double NNfunction_gg::synapse0x3516c40() {
   return (neuron0x3514c90()*-0.374769);
}

double NNfunction_gg::synapse0x35175d0() {
   return (neuron0x35272d0()*-1.6897);
}

double NNfunction_gg::synapse0x3517610() {
   return (neuron0x3527b80()*-0.00615547);
}

double NNfunction_gg::synapse0x3517fa0() {
   return (neuron0x3528550()*0.00960039);
}

double NNfunction_gg::synapse0x3517fe0() {
   return (neuron0x3528f20()*0.00234199);
}

double NNfunction_gg::synapse0x351a6e0() {
   return (neuron0x3504ea0()*0.00150709);
}

double NNfunction_gg::synapse0x351a720() {
   return (neuron0x35057f0()*1.75924);
}

double NNfunction_gg::synapse0x350fca0() {
   return (neuron0x35062d0()*-0.347409);
}

double NNfunction_gg::synapse0x350fce0() {
   return (neuron0x3505d70()*1.8007);
}

double NNfunction_gg::synapse0x351d2c0() {
   return (neuron0x35070b0()*0.0968984);
}

double NNfunction_gg::synapse0x351d300() {
   return (neuron0x3507a80()*-2.05423);
}

double NNfunction_gg::synapse0x351dc90() {
   return (neuron0x3508850()*-0.868458);
}

double NNfunction_gg::synapse0x351dcd0() {
   return (neuron0x3509220()*1.46561);
}

double NNfunction_gg::synapse0x351e660() {
   return (neuron0x3509bf0()*-0.19234);
}

double NNfunction_gg::synapse0x351e6a0() {
   return (neuron0x350a6d0()*-7.85211);
}

double NNfunction_gg::synapse0x351f030() {
   return (neuron0x350b0a0()*1.21984);
}

double NNfunction_gg::synapse0x351f070() {
   return (neuron0x3508180()*-1.46331);
}

double NNfunction_gg::synapse0x351fa00() {
   return (neuron0x350cc50()*0.143093);
}

double NNfunction_gg::synapse0x351fa40() {
   return (neuron0x350d620()*5.92149);
}

double NNfunction_gg::synapse0x35203d0() {
   return (neuron0x350dff0()*0.931951);
}

double NNfunction_gg::synapse0x3520410() {
   return (neuron0x350e9c0()*1.7348);
}

double NNfunction_gg::synapse0x3520da0() {
   return (neuron0x35107d0()*0.0456924);
}

double NNfunction_gg::synapse0x3520de0() {
   return (neuron0x3510ab0()*-0.663254);
}

double NNfunction_gg::synapse0x3521770() {
   return (neuron0x3511480()*-1.10435);
}

double NNfunction_gg::synapse0x35217b0() {
   return (neuron0x3511e50()*0.0867264);
}

double NNfunction_gg::synapse0x3522350() {
   return (neuron0x3512820()*-1.23901);
}

double NNfunction_gg::synapse0x3522390() {
   return (neuron0x35131f0()*-0.948842);
}

double NNfunction_gg::synapse0x3522d20() {
   return (neuron0x350bd40()*-1.28635);
}

double NNfunction_gg::synapse0x3522d60() {
   return (neuron0x350c710()*-0.610218);
}

double NNfunction_gg::synapse0x3513ba0() {
   return (neuron0x3515f80()*1.51343);
}

double NNfunction_gg::synapse0x3513be0() {
   return (neuron0x3516950()*-1.58596);
}

double NNfunction_gg::synapse0x3514570() {
   return (neuron0x3517320()*-0.912615);
}

double NNfunction_gg::synapse0x35145b0() {
   return (neuron0x3517cf0()*0.916776);
}

double NNfunction_gg::synapse0x3514f40() {
   return (neuron0x35186c0()*-0.0937773);
}

double NNfunction_gg::synapse0x3514f80() {
   return (neuron0x3519090()*-2.12257);
}

double NNfunction_gg::synapse0x3527460() {
   return (neuron0x3519a60()*-0.284204);
}

double NNfunction_gg::synapse0x35274a0() {
   return (neuron0x351a430()*0.298833);
}

double NNfunction_gg::synapse0x3527e30() {
   return (neuron0x35104c0()*1.00662);
}

double NNfunction_gg::synapse0x3527e70() {
   return (neuron0x351d010()*-0.273554);
}

double NNfunction_gg::synapse0x3528800() {
   return (neuron0x351d9e0()*-0.456401);
}

double NNfunction_gg::synapse0x3528840() {
   return (neuron0x351e3b0()*0.485982);
}

double NNfunction_gg::synapse0x35291d0() {
   return (neuron0x351ed80()*-0.978187);
}

double NNfunction_gg::synapse0x3529210() {
   return (neuron0x351f750()*-0.485983);
}

double NNfunction_gg::synapse0x35050c0() {
   return (neuron0x3520120()*-1.13195);
}

double NNfunction_gg::synapse0x3505100() {
   return (neuron0x3520af0()*-0.647578);
}

double NNfunction_gg::synapse0x3518970() {
   return (neuron0x35214c0()*-1.45926);
}

double NNfunction_gg::synapse0x35189b0() {
   return (neuron0x35220a0()*-2.03613);
}

double NNfunction_gg::synapse0x35298f0() {
   return (neuron0x3522a70()*1.86798);
}

double NNfunction_gg::synapse0x3529930() {
   return (neuron0x35138f0()*-0.0755683);
}

double NNfunction_gg::synapse0x3529970() {
   return (neuron0x35142c0()*1.19948);
}

double NNfunction_gg::synapse0x35299b0() {
   return (neuron0x3514c90()*6.77106);
}

double NNfunction_gg::synapse0x3530860() {
   return (neuron0x35272d0()*2.57146);
}

double NNfunction_gg::synapse0x35308a0() {
   return (neuron0x3527b80()*-0.605659);
}

double NNfunction_gg::synapse0x35308e0() {
   return (neuron0x3528550()*-0.0198398);
}

double NNfunction_gg::synapse0x3530920() {
   return (neuron0x3528f20()*0.741753);
}

double NNfunction_gg::synapse0x3530ca0() {
   return (neuron0x3504ea0()*-0.0683422);
}

double NNfunction_gg::synapse0x3530ce0() {
   return (neuron0x35057f0()*-1.65855);
}

double NNfunction_gg::synapse0x3530d20() {
   return (neuron0x35062d0()*0.347834);
}

double NNfunction_gg::synapse0x3530d60() {
   return (neuron0x3505d70()*-0.616425);
}

double NNfunction_gg::synapse0x3530da0() {
   return (neuron0x35070b0()*-0.055499);
}

double NNfunction_gg::synapse0x3530de0() {
   return (neuron0x3507a80()*0.369033);
}

double NNfunction_gg::synapse0x3530e20() {
   return (neuron0x3508850()*0.24023);
}

double NNfunction_gg::synapse0x3530e60() {
   return (neuron0x3509220()*-0.493032);
}

double NNfunction_gg::synapse0x3530ea0() {
   return (neuron0x3509bf0()*0.546484);
}

double NNfunction_gg::synapse0x3530ee0() {
   return (neuron0x350a6d0()*-0.206339);
}

double NNfunction_gg::synapse0x3530f20() {
   return (neuron0x350b0a0()*-0.422691);
}

double NNfunction_gg::synapse0x3530f60() {
   return (neuron0x3508180()*-0.410915);
}

double NNfunction_gg::synapse0x3530fa0() {
   return (neuron0x350cc50()*0.212286);
}

double NNfunction_gg::synapse0x3530fe0() {
   return (neuron0x350d620()*-0.841589);
}

double NNfunction_gg::synapse0x3531020() {
   return (neuron0x350dff0()*-1.06016);
}

double NNfunction_gg::synapse0x3531060() {
   return (neuron0x350e9c0()*-0.365493);
}

double NNfunction_gg::synapse0x3530af0() {
   return (neuron0x35107d0()*-1.12272);
}

double NNfunction_gg::synapse0x3530b30() {
   return (neuron0x3510ab0()*-1.27784);
}

double NNfunction_gg::synapse0x35311b0() {
   return (neuron0x3511480()*-0.500269);
}

double NNfunction_gg::synapse0x35311f0() {
   return (neuron0x3511e50()*-0.195105);
}

double NNfunction_gg::synapse0x3531230() {
   return (neuron0x3512820()*-0.902117);
}

double NNfunction_gg::synapse0x3531270() {
   return (neuron0x35131f0()*-1.02253);
}

double NNfunction_gg::synapse0x35312b0() {
   return (neuron0x350bd40()*-1.33192);
}

double NNfunction_gg::synapse0x35312f0() {
   return (neuron0x350c710()*-0.172589);
}

double NNfunction_gg::synapse0x3531330() {
   return (neuron0x3515f80()*-0.408957);
}

double NNfunction_gg::synapse0x3531370() {
   return (neuron0x3516950()*-0.420718);
}

double NNfunction_gg::synapse0x35313b0() {
   return (neuron0x3517320()*0.150989);
}

double NNfunction_gg::synapse0x35313f0() {
   return (neuron0x3517cf0()*-0.455839);
}

double NNfunction_gg::synapse0x3531430() {
   return (neuron0x35186c0()*-1.09999);
}

double NNfunction_gg::synapse0x3531470() {
   return (neuron0x3519090()*-0.376815);
}

double NNfunction_gg::synapse0x35314b0() {
   return (neuron0x3519a60()*-0.639749);
}

double NNfunction_gg::synapse0x35314f0() {
   return (neuron0x351a430()*-0.654495);
}

double NNfunction_gg::synapse0x35310a0() {
   return (neuron0x35104c0()*-1.16738);
}

double NNfunction_gg::synapse0x35310e0() {
   return (neuron0x351d010()*-0.8545);
}

double NNfunction_gg::synapse0x3531120() {
   return (neuron0x351d9e0()*-0.349287);
}

double NNfunction_gg::synapse0x3531160() {
   return (neuron0x351e3b0()*-0.805804);
}

double NNfunction_gg::synapse0x3531740() {
   return (neuron0x351ed80()*-0.801112);
}

double NNfunction_gg::synapse0x3531780() {
   return (neuron0x351f750()*-1.75203);
}

double NNfunction_gg::synapse0x35317c0() {
   return (neuron0x3520120()*0.0127608);
}

double NNfunction_gg::synapse0x3531800() {
   return (neuron0x3520af0()*0.27689);
}

double NNfunction_gg::synapse0x3531840() {
   return (neuron0x35214c0()*-0.026988);
}

double NNfunction_gg::synapse0x3531880() {
   return (neuron0x35220a0()*-0.374832);
}

double NNfunction_gg::synapse0x35318c0() {
   return (neuron0x3522a70()*-1.49014);
}

double NNfunction_gg::synapse0x3531900() {
   return (neuron0x35138f0()*-0.142666);
}

double NNfunction_gg::synapse0x3531940() {
   return (neuron0x35142c0()*-2.02019);
}

double NNfunction_gg::synapse0x3531980() {
   return (neuron0x3514c90()*-0.62445);
}

double NNfunction_gg::synapse0x35319c0() {
   return (neuron0x35272d0()*-1.17444);
}

double NNfunction_gg::synapse0x3531a00() {
   return (neuron0x3527b80()*-0.294994);
}

double NNfunction_gg::synapse0x3531a40() {
   return (neuron0x3528550()*-0.936439);
}

double NNfunction_gg::synapse0x3531a80() {
   return (neuron0x3528f20()*-0.197836);
}

double NNfunction_gg::synapse0x3531e00() {
   return (neuron0x3504ea0()*-0.000816019);
}

double NNfunction_gg::synapse0x3531e40() {
   return (neuron0x35057f0()*0.224406);
}

double NNfunction_gg::synapse0x3531e80() {
   return (neuron0x35062d0()*-0.0185612);
}

double NNfunction_gg::synapse0x3531ec0() {
   return (neuron0x3505d70()*0.406426);
}

double NNfunction_gg::synapse0x3531f00() {
   return (neuron0x35070b0()*0.000189068);
}

double NNfunction_gg::synapse0x3531f40() {
   return (neuron0x3507a80()*-0.610095);
}

double NNfunction_gg::synapse0x3531f80() {
   return (neuron0x3508850()*-0.000983964);
}

double NNfunction_gg::synapse0x3531fc0() {
   return (neuron0x3509220()*0.298693);
}

double NNfunction_gg::synapse0x3532000() {
   return (neuron0x3509bf0()*0.374947);
}

double NNfunction_gg::synapse0x3532040() {
   return (neuron0x350a6d0()*-2.5417);
}

double NNfunction_gg::synapse0x3532080() {
   return (neuron0x350b0a0()*0.756404);
}

double NNfunction_gg::synapse0x35320c0() {
   return (neuron0x3508180()*0.00176584);
}

double NNfunction_gg::synapse0x3532100() {
   return (neuron0x350cc50()*-0.0314851);
}

double NNfunction_gg::synapse0x3532140() {
   return (neuron0x350d620()*0.308477);
}

double NNfunction_gg::synapse0x3532180() {
   return (neuron0x350dff0()*0.332653);
}

double NNfunction_gg::synapse0x35321c0() {
   return (neuron0x350e9c0()*0.00271032);
}

double NNfunction_gg::synapse0x3531c50() {
   return (neuron0x35107d0()*0.000268085);
}

double NNfunction_gg::synapse0x3531c90() {
   return (neuron0x3510ab0()*0.00833812);
}

double NNfunction_gg::synapse0x3532310() {
   return (neuron0x3511480()*-0.0843581);
}

double NNfunction_gg::synapse0x3532350() {
   return (neuron0x3511e50()*0.0115522);
}

double NNfunction_gg::synapse0x3532390() {
   return (neuron0x3512820()*-0.298255);
}

double NNfunction_gg::synapse0x35323d0() {
   return (neuron0x35131f0()*-0.274877);
}

double NNfunction_gg::synapse0x3532410() {
   return (neuron0x350bd40()*-1.55969);
}

double NNfunction_gg::synapse0x3532450() {
   return (neuron0x350c710()*0.0387571);
}

double NNfunction_gg::synapse0x3532490() {
   return (neuron0x3515f80()*0.922762);
}

double NNfunction_gg::synapse0x35324d0() {
   return (neuron0x3516950()*0.0853515);
}

double NNfunction_gg::synapse0x3532510() {
   return (neuron0x3517320()*-0.202216);
}

double NNfunction_gg::synapse0x3532550() {
   return (neuron0x3517cf0()*0.664872);
}

double NNfunction_gg::synapse0x3532590() {
   return (neuron0x35186c0()*0.00087428);
}

double NNfunction_gg::synapse0x35325d0() {
   return (neuron0x3519090()*-2.03698);
}

double NNfunction_gg::synapse0x3532610() {
   return (neuron0x3519a60()*0.0114726);
}

double NNfunction_gg::synapse0x3532650() {
   return (neuron0x351a430()*0.00384604);
}

double NNfunction_gg::synapse0x3532200() {
   return (neuron0x35104c0()*0.00648942);
}

double NNfunction_gg::synapse0x3532240() {
   return (neuron0x351d010()*0.00152892);
}

double NNfunction_gg::synapse0x3532280() {
   return (neuron0x351d9e0()*0.000491825);
}

double NNfunction_gg::synapse0x35322c0() {
   return (neuron0x351e3b0()*0.00358723);
}

double NNfunction_gg::synapse0x35328a0() {
   return (neuron0x351ed80()*-0.00855749);
}

double NNfunction_gg::synapse0x35328e0() {
   return (neuron0x351f750()*0.0116381);
}

double NNfunction_gg::synapse0x3532920() {
   return (neuron0x3520120()*-0.110204);
}

double NNfunction_gg::synapse0x3532960() {
   return (neuron0x3520af0()*-0.0165785);
}

double NNfunction_gg::synapse0x35329a0() {
   return (neuron0x35214c0()*-0.24813);
}

double NNfunction_gg::synapse0x35329e0() {
   return (neuron0x35220a0()*0.139371);
}

double NNfunction_gg::synapse0x3532a20() {
   return (neuron0x3522a70()*0.291452);
}

double NNfunction_gg::synapse0x3532a60() {
   return (neuron0x35138f0()*0.00240081);
}

double NNfunction_gg::synapse0x3532aa0() {
   return (neuron0x35142c0()*0.0110454);
}

double NNfunction_gg::synapse0x3532ae0() {
   return (neuron0x3514c90()*-1.154);
}

double NNfunction_gg::synapse0x3532b20() {
   return (neuron0x35272d0()*1.06361);
}

double NNfunction_gg::synapse0x3532b60() {
   return (neuron0x3527b80()*-0.000628236);
}

double NNfunction_gg::synapse0x3532ba0() {
   return (neuron0x3528550()*0.0107411);
}

double NNfunction_gg::synapse0x3532be0() {
   return (neuron0x3528f20()*-0.00235329);
}

double NNfunction_gg::synapse0x3532f60() {
   return (neuron0x3504ea0()*-0.832589);
}

double NNfunction_gg::synapse0x3532fa0() {
   return (neuron0x35057f0()*-1.05998);
}

double NNfunction_gg::synapse0x3532fe0() {
   return (neuron0x35062d0()*-0.598964);
}

double NNfunction_gg::synapse0x3533020() {
   return (neuron0x3505d70()*-0.379853);
}

double NNfunction_gg::synapse0x3533060() {
   return (neuron0x35070b0()*-0.0637813);
}

double NNfunction_gg::synapse0x35330a0() {
   return (neuron0x3507a80()*-0.454411);
}

double NNfunction_gg::synapse0x35330e0() {
   return (neuron0x3508850()*-0.450118);
}

double NNfunction_gg::synapse0x3533120() {
   return (neuron0x3509220()*-0.544428);
}

double NNfunction_gg::synapse0x3533160() {
   return (neuron0x3509bf0()*0.437939);
}

double NNfunction_gg::synapse0x35331a0() {
   return (neuron0x350a6d0()*-0.352882);
}

double NNfunction_gg::synapse0x35331e0() {
   return (neuron0x350b0a0()*-0.324332);
}

double NNfunction_gg::synapse0x3533220() {
   return (neuron0x3508180()*-0.0917362);
}

double NNfunction_gg::synapse0x3533260() {
   return (neuron0x350cc50()*-0.530969);
}

double NNfunction_gg::synapse0x35332a0() {
   return (neuron0x350d620()*-0.364659);
}

double NNfunction_gg::synapse0x35332e0() {
   return (neuron0x350dff0()*-1.14403);
}

double NNfunction_gg::synapse0x3533320() {
   return (neuron0x350e9c0()*-1.31552);
}

double NNfunction_gg::synapse0x3532db0() {
   return (neuron0x35107d0()*-1.07781);
}

double NNfunction_gg::synapse0x3532df0() {
   return (neuron0x3510ab0()*-0.897463);
}

double NNfunction_gg::synapse0x3533470() {
   return (neuron0x3511480()*-0.259717);
}

double NNfunction_gg::synapse0x35334b0() {
   return (neuron0x3511e50()*-0.785823);
}

double NNfunction_gg::synapse0x35334f0() {
   return (neuron0x3512820()*-0.470171);
}

double NNfunction_gg::synapse0x3533530() {
   return (neuron0x35131f0()*-0.443759);
}

double NNfunction_gg::synapse0x3533570() {
   return (neuron0x350bd40()*-1.64411);
}

double NNfunction_gg::synapse0x35335b0() {
   return (neuron0x350c710()*-0.934221);
}

double NNfunction_gg::synapse0x35335f0() {
   return (neuron0x3515f80()*-1.23479);
}

double NNfunction_gg::synapse0x3533630() {
   return (neuron0x3516950()*-0.465295);
}

double NNfunction_gg::synapse0x3533670() {
   return (neuron0x3517320()*-1.03755);
}

double NNfunction_gg::synapse0x35336b0() {
   return (neuron0x3517cf0()*-0.511846);
}

double NNfunction_gg::synapse0x35336f0() {
   return (neuron0x35186c0()*-1.05344);
}

double NNfunction_gg::synapse0x3533730() {
   return (neuron0x3519090()*-0.502849);
}

double NNfunction_gg::synapse0x3533770() {
   return (neuron0x3519a60()*-1.31185);
}

double NNfunction_gg::synapse0x35337b0() {
   return (neuron0x351a430()*-1.28731);
}

double NNfunction_gg::synapse0x3533360() {
   return (neuron0x35104c0()*-1.26731);
}

double NNfunction_gg::synapse0x35333a0() {
   return (neuron0x351d010()*-0.988237);
}

double NNfunction_gg::synapse0x35333e0() {
   return (neuron0x351d9e0()*-1.09455);
}

double NNfunction_gg::synapse0x3533420() {
   return (neuron0x351e3b0()*-0.832223);
}

double NNfunction_gg::synapse0x3533a00() {
   return (neuron0x351ed80()*-0.411592);
}

double NNfunction_gg::synapse0x3533a40() {
   return (neuron0x351f750()*-1.00379);
}

double NNfunction_gg::synapse0x3533a80() {
   return (neuron0x3520120()*0.245136);
}

double NNfunction_gg::synapse0x3533ac0() {
   return (neuron0x3520af0()*-0.720274);
}

double NNfunction_gg::synapse0x3533b00() {
   return (neuron0x35214c0()*-0.364205);
}

double NNfunction_gg::synapse0x3533b40() {
   return (neuron0x35220a0()*-0.671429);
}

double NNfunction_gg::synapse0x3533b80() {
   return (neuron0x3522a70()*-0.652157);
}

double NNfunction_gg::synapse0x3533bc0() {
   return (neuron0x35138f0()*-0.600942);
}

double NNfunction_gg::synapse0x3533c00() {
   return (neuron0x35142c0()*-1.20166);
}

double NNfunction_gg::synapse0x3533c40() {
   return (neuron0x3514c90()*-0.457419);
}

double NNfunction_gg::synapse0x3533c80() {
   return (neuron0x35272d0()*-0.644857);
}

double NNfunction_gg::synapse0x3533cc0() {
   return (neuron0x3527b80()*-0.682812);
}

double NNfunction_gg::synapse0x3533d00() {
   return (neuron0x3528550()*-0.609329);
}

double NNfunction_gg::synapse0x3533d40() {
   return (neuron0x3528f20()*-0.419816);
}

double NNfunction_gg::synapse0x3533fa0() {
   return (neuron0x3530120()*-19.1203);
}

double NNfunction_gg::synapse0x3533fe0() {
   return (neuron0x35304c0()*-5.72658);
}

double NNfunction_gg::synapse0x3534020() {
   return (neuron0x3530960()*3.52859);
}

double NNfunction_gg::synapse0x3534060() {
   return (neuron0x3531ac0()*-14.1247);
}

double NNfunction_gg::synapse0x35340a0() {
   return (neuron0x3532c20()*2.8289);
}

