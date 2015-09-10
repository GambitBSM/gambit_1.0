#include "NNfunction_ns_chi04_cL.h"
#include <cmath>

double NNfunction_ns_chi04_cL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5925)/15.0638;
   input1 = (in1 - 15.9688)/264.068;
   input2 = (in2 - 349.089)/343.604;
   input3 = (in3 - 80.5346)/713.919;
   input4 = (in4 - 820.634)/836.6;
   input5 = (in5 - 722.382)/842.909;
   input6 = (in6 - 725.179)/843.369;
   input7 = (in7 - 722.815)/819.592;
   input8 = (in8 - 730.177)/864.775;
   input9 = (in9 - 717.814)/847.457;
   input10 = (in10 - 750.988)/861.554;
   input11 = (in11 - 623.25)/725.348;
   input12 = (in12 - 254.642)/184.873;
   input13 = (in13 - 441.434)/419.44;
   input14 = (in14 - 621.078)/674.709;
   input15 = (in15 - 626.554)/683.792;
   input16 = (in16 - 450.549)/463.934;
   input17 = (in17 - 652.512)/763.027;
   input18 = (in18 - 649.765)/763.173;
   input19 = (in19 - 651.688)/735.165;
   input20 = (in20 - -68.6564)/421.935;
   input21 = (in21 - -90.1214)/977.035;
   input22 = (in22 - 18.1038)/1000.43;
   input23 = (in23 - -23.7429)/236.067;
   switch(index) {
     case 0:
         return neuron0x2a596c0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi04_cL::Value(int index, double* input) {
   input0 = (input[0] - 23.5925)/15.0638;
   input1 = (input[1] - 15.9688)/264.068;
   input2 = (input[2] - 349.089)/343.604;
   input3 = (input[3] - 80.5346)/713.919;
   input4 = (input[4] - 820.634)/836.6;
   input5 = (input[5] - 722.382)/842.909;
   input6 = (input[6] - 725.179)/843.369;
   input7 = (input[7] - 722.815)/819.592;
   input8 = (input[8] - 730.177)/864.775;
   input9 = (input[9] - 717.814)/847.457;
   input10 = (input[10] - 750.988)/861.554;
   input11 = (input[11] - 623.25)/725.348;
   input12 = (input[12] - 254.642)/184.873;
   input13 = (input[13] - 441.434)/419.44;
   input14 = (input[14] - 621.078)/674.709;
   input15 = (input[15] - 626.554)/683.792;
   input16 = (input[16] - 450.549)/463.934;
   input17 = (input[17] - 652.512)/763.027;
   input18 = (input[18] - 649.765)/763.173;
   input19 = (input[19] - 651.688)/735.165;
   input20 = (input[20] - -68.6564)/421.935;
   input21 = (input[21] - -90.1214)/977.035;
   input22 = (input[22] - 18.1038)/1000.43;
   input23 = (input[23] - -23.7429)/236.067;
   switch(index) {
     case 0:
         return neuron0x2a596c0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi04_cL::neuron0x2a257b0() {
   return input0;
}

double NNfunction_ns_chi04_cL::neuron0x2a25af0() {
   return input1;
}

double NNfunction_ns_chi04_cL::neuron0x2a25e30() {
   return input2;
}

double NNfunction_ns_chi04_cL::neuron0x2a26170() {
   return input3;
}

double NNfunction_ns_chi04_cL::neuron0x2a264b0() {
   return input4;
}

double NNfunction_ns_chi04_cL::neuron0x2a267f0() {
   return input5;
}

double NNfunction_ns_chi04_cL::neuron0x2a26b30() {
   return input6;
}

double NNfunction_ns_chi04_cL::neuron0x2a26e70() {
   return input7;
}

double NNfunction_ns_chi04_cL::neuron0x2a271b0() {
   return input8;
}

double NNfunction_ns_chi04_cL::neuron0x2a274f0() {
   return input9;
}

double NNfunction_ns_chi04_cL::neuron0x2a27830() {
   return input10;
}

double NNfunction_ns_chi04_cL::neuron0x2a27b70() {
   return input11;
}

double NNfunction_ns_chi04_cL::neuron0x2a27eb0() {
   return input12;
}

double NNfunction_ns_chi04_cL::neuron0x2a281f0() {
   return input13;
}

double NNfunction_ns_chi04_cL::neuron0x2a28530() {
   return input14;
}

double NNfunction_ns_chi04_cL::neuron0x2a28870() {
   return input15;
}

double NNfunction_ns_chi04_cL::neuron0x2a28bb0() {
   return input16;
}

double NNfunction_ns_chi04_cL::neuron0x2a29110() {
   return input17;
}

double NNfunction_ns_chi04_cL::neuron0x2a29330() {
   return input18;
}

double NNfunction_ns_chi04_cL::neuron0x2a29670() {
   return input19;
}

double NNfunction_ns_chi04_cL::neuron0x2a299b0() {
   return input20;
}

double NNfunction_ns_chi04_cL::neuron0x2a29cf0() {
   return input21;
}

double NNfunction_ns_chi04_cL::neuron0x2a2a030() {
   return input22;
}

double NNfunction_ns_chi04_cL::neuron0x2a2a370() {
   return input23;
}

double NNfunction_ns_chi04_cL::input0x2a2a7e0() {
   double input = 0.694376;
   input += synapse0x2a25670();
   input += synapse0x2a256b0();
   input += synapse0x2a2aa90();
   input += synapse0x2a2aad0();
   input += synapse0x2a2ab10();
   input += synapse0x2a2ab50();
   input += synapse0x2a2ab90();
   input += synapse0x2a2abd0();
   input += synapse0x2a2ac10();
   input += synapse0x2a2ac50();
   input += synapse0x2a2ac90();
   input += synapse0x2a2acd0();
   input += synapse0x2a2ad10();
   input += synapse0x2a2ad50();
   input += synapse0x2a2ad90();
   input += synapse0x2a2add0();
   input += synapse0x2a255e0();
   input += synapse0x2a25620();
   input += synapse0x27e0950();
   input += synapse0x27e0990();
   input += synapse0x2a2b030();
   input += synapse0x2a2b070();
   input += synapse0x2a2b0b0();
   input += synapse0x2a2b0f0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a2a7e0() {
   double input = input0x2a2a7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a2b130() {
   double input = 5.6259;
   input += synapse0x2a2b470();
   input += synapse0x2a2b4b0();
   input += synapse0x2a2b4f0();
   input += synapse0x2a2b530();
   input += synapse0x2a2b570();
   input += synapse0x2a2b5b0();
   input += synapse0x2a2b5f0();
   input += synapse0x2a2b630();
   input += synapse0x2a2b670();
   input += synapse0x2a2af20();
   input += synapse0x2a2af60();
   input += synapse0x2a2afa0();
   input += synapse0x2a2afe0();
   input += synapse0x2a2b8c0();
   input += synapse0x2a2b900();
   input += synapse0x2a2b940();
   input += synapse0x2a2b2c0();
   input += synapse0x2a2b300();
   input += synapse0x2a2ba90();
   input += synapse0x2a2bad0();
   input += synapse0x2a2bb10();
   input += synapse0x2a2bb50();
   input += synapse0x2a2bb90();
   input += synapse0x2a2bbd0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a2b130() {
   double input = input0x2a2b130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a2bc10() {
   double input = 3.74117;
   input += synapse0x2a2bf50();
   input += synapse0x2a2bf90();
   input += synapse0x2a2bfd0();
   input += synapse0x2a2c010();
   input += synapse0x2a2c050();
   input += synapse0x2a2c090();
   input += synapse0x2a2c0d0();
   input += synapse0x2a2c110();
   input += synapse0x2a2c150();
   input += synapse0x2a2c190();
   input += synapse0x2a2c1d0();
   input += synapse0x2a2c210();
   input += synapse0x2a2c250();
   input += synapse0x2a2c290();
   input += synapse0x2a2c2d0();
   input += synapse0x2a2c310();
   input += synapse0x2a2bda0();
   input += synapse0x2a2bde0();
   input += synapse0x27e1040();
   input += synapse0x27ee910();
   input += synapse0x27ee950();
   input += synapse0x2a14840();
   input += synapse0x2a14880();
   input += synapse0x2a148c0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a2bc10() {
   double input = input0x2a2bc10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a2b6b0() {
   double input = 0.782169;
   input += synapse0x27ef190();
   input += synapse0x2a2b840();
   input += synapse0x2a2b880();
   input += synapse0x2a2c460();
   input += synapse0x2a2c4a0();
   input += synapse0x2a2c4e0();
   input += synapse0x2a2c520();
   input += synapse0x2a2c560();
   input += synapse0x2a2c5a0();
   input += synapse0x2a2c5e0();
   input += synapse0x2a2c620();
   input += synapse0x2a2c660();
   input += synapse0x2a2c6a0();
   input += synapse0x2a2c6e0();
   input += synapse0x2a2c720();
   input += synapse0x2a2c760();
   input += synapse0x2a256f0();
   input += synapse0x2a25730();
   input += synapse0x2a25770();
   input += synapse0x2a2c8b0();
   input += synapse0x2a2c8f0();
   input += synapse0x2a2c930();
   input += synapse0x2a2c970();
   input += synapse0x2a2c9b0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a2b6b0() {
   double input = input0x2a2b6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a2c9f0() {
   double input = 0.381695;
   input += synapse0x2a2cd30();
   input += synapse0x2a2cd70();
   input += synapse0x2a2cdb0();
   input += synapse0x2a2cdf0();
   input += synapse0x2a2ce30();
   input += synapse0x2a2ce70();
   input += synapse0x2a2ceb0();
   input += synapse0x2a2cef0();
   input += synapse0x2a2cf30();
   input += synapse0x2a2cf70();
   input += synapse0x2a2cfb0();
   input += synapse0x2a2cff0();
   input += synapse0x2a2d030();
   input += synapse0x2a2d070();
   input += synapse0x2a2d0b0();
   input += synapse0x2a2d0f0();
   input += synapse0x2a2cb80();
   input += synapse0x2a2cbc0();
   input += synapse0x2a2d240();
   input += synapse0x2a2d280();
   input += synapse0x2a2d2c0();
   input += synapse0x2a2d300();
   input += synapse0x2a2d340();
   input += synapse0x2a2d380();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a2c9f0() {
   double input = input0x2a2c9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a2d3c0() {
   double input = -0.739452;
   input += synapse0x2a2d700();
   input += synapse0x2a2d740();
   input += synapse0x2a2d780();
   input += synapse0x2a2d7c0();
   input += synapse0x2a2d800();
   input += synapse0x2a2d840();
   input += synapse0x2a2d880();
   input += synapse0x2a2d8c0();
   input += synapse0x2a2d900();
   input += synapse0x27eec60();
   input += synapse0x27eeca0();
   input += synapse0x27eece0();
   input += synapse0x27eed20();
   input += synapse0x27eed60();
   input += synapse0x27eeda0();
   input += synapse0x27eede0();
   input += synapse0x2a2d550();
   input += synapse0x2a2d590();
   input += synapse0x27eef30();
   input += synapse0x27eef70();
   input += synapse0x27eefb0();
   input += synapse0x27eeff0();
   input += synapse0x27ef030();
   input += synapse0x2a2e150();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a2d3c0() {
   double input = input0x2a2d3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a2e190() {
   double input = 1.23414;
   input += synapse0x2a2e4d0();
   input += synapse0x2a2e510();
   input += synapse0x2a2e550();
   input += synapse0x2a2e590();
   input += synapse0x2a2e5d0();
   input += synapse0x2a2e610();
   input += synapse0x2a2e650();
   input += synapse0x2a2e690();
   input += synapse0x2a2e6d0();
   input += synapse0x2a2e710();
   input += synapse0x2a2e750();
   input += synapse0x2a2e790();
   input += synapse0x2a2e7d0();
   input += synapse0x2a2e810();
   input += synapse0x2a2e850();
   input += synapse0x2a2e890();
   input += synapse0x2a2e320();
   input += synapse0x2a2e360();
   input += synapse0x2a2e9e0();
   input += synapse0x2a2ea20();
   input += synapse0x2a2ea60();
   input += synapse0x2a2eaa0();
   input += synapse0x2a2eae0();
   input += synapse0x2a2eb20();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a2e190() {
   double input = input0x2a2e190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a2eb60() {
   double input = -0.835261;
   input += synapse0x2a2eea0();
   input += synapse0x2a2eee0();
   input += synapse0x2a2ef20();
   input += synapse0x2a2ef60();
   input += synapse0x2a2efa0();
   input += synapse0x2a2efe0();
   input += synapse0x2a2f020();
   input += synapse0x2a2f060();
   input += synapse0x2a2f0a0();
   input += synapse0x2a2f0e0();
   input += synapse0x2a2f120();
   input += synapse0x2a2f160();
   input += synapse0x2a2f1a0();
   input += synapse0x2a2f1e0();
   input += synapse0x2a2f220();
   input += synapse0x2a2f260();
   input += synapse0x2a2ecf0();
   input += synapse0x2a2ed30();
   input += synapse0x2a2f3b0();
   input += synapse0x2a2f3f0();
   input += synapse0x2a2f430();
   input += synapse0x2a2f470();
   input += synapse0x2a2f4b0();
   input += synapse0x2a2f4f0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a2eb60() {
   double input = input0x2a2eb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a2f530() {
   double input = -1.33931;
   input += synapse0x2a29000();
   input += synapse0x2a29040();
   input += synapse0x2a29080();
   input += synapse0x2a290c0();
   input += synapse0x2a2fa80();
   input += synapse0x2a2fac0();
   input += synapse0x2a2fb00();
   input += synapse0x2a2fb40();
   input += synapse0x2a2fb80();
   input += synapse0x2a2fbc0();
   input += synapse0x2a2fc00();
   input += synapse0x2a2fc40();
   input += synapse0x2a2fc80();
   input += synapse0x2a2fcc0();
   input += synapse0x2a2fd00();
   input += synapse0x2a2fd40();
   input += synapse0x2a2f6c0();
   input += synapse0x2a2f700();
   input += synapse0x2a2fe90();
   input += synapse0x2a2fed0();
   input += synapse0x2a2ff10();
   input += synapse0x2a2ff50();
   input += synapse0x2a2ff90();
   input += synapse0x2a2ffd0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a2f530() {
   double input = input0x2a2f530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a30010() {
   double input = 0.404118;
   input += synapse0x2a30350();
   input += synapse0x2a30390();
   input += synapse0x2a303d0();
   input += synapse0x2a30410();
   input += synapse0x2a30450();
   input += synapse0x2a30490();
   input += synapse0x2a304d0();
   input += synapse0x2a30510();
   input += synapse0x2a30550();
   input += synapse0x2a30590();
   input += synapse0x2a305d0();
   input += synapse0x2a30610();
   input += synapse0x2a30650();
   input += synapse0x2a30690();
   input += synapse0x2a306d0();
   input += synapse0x2a30710();
   input += synapse0x2a301a0();
   input += synapse0x2a301e0();
   input += synapse0x2a30860();
   input += synapse0x2a308a0();
   input += synapse0x2a308e0();
   input += synapse0x2a30920();
   input += synapse0x2a30960();
   input += synapse0x2a309a0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a30010() {
   double input = input0x2a30010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a309e0() {
   double input = -0.408981;
   input += synapse0x2a30d20();
   input += synapse0x2a30d60();
   input += synapse0x2a30da0();
   input += synapse0x2a30de0();
   input += synapse0x2a30e20();
   input += synapse0x2a30e60();
   input += synapse0x2a30ea0();
   input += synapse0x2a30ee0();
   input += synapse0x2a30f20();
   input += synapse0x2a30f60();
   input += synapse0x2a30fa0();
   input += synapse0x2a30fe0();
   input += synapse0x2a31020();
   input += synapse0x2a31060();
   input += synapse0x2a310a0();
   input += synapse0x2a310e0();
   input += synapse0x2a30b70();
   input += synapse0x2a30bb0();
   input += synapse0x2a2d940();
   input += synapse0x2a2d980();
   input += synapse0x2a2d9c0();
   input += synapse0x2a2da00();
   input += synapse0x2a2da40();
   input += synapse0x2a2da80();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a309e0() {
   double input = input0x2a309e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a2dac0() {
   double input = 2.72168;
   input += synapse0x2a2de00();
   input += synapse0x2a2de40();
   input += synapse0x2a2de80();
   input += synapse0x2a2dec0();
   input += synapse0x2a2df00();
   input += synapse0x2a2df40();
   input += synapse0x2a2df80();
   input += synapse0x2a2dfc0();
   input += synapse0x2a2e000();
   input += synapse0x2a2e040();
   input += synapse0x2a2e080();
   input += synapse0x2a2e0c0();
   input += synapse0x2a2e100();
   input += synapse0x2a32240();
   input += synapse0x2a32280();
   input += synapse0x2a322c0();
   input += synapse0x2a2dc50();
   input += synapse0x2a2dc90();
   input += synapse0x2a32410();
   input += synapse0x2a32450();
   input += synapse0x2a32490();
   input += synapse0x2a324d0();
   input += synapse0x2a32510();
   input += synapse0x2a32550();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a2dac0() {
   double input = input0x2a2dac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a32590() {
   double input = 1.3294;
   input += synapse0x2a328d0();
   input += synapse0x2a32910();
   input += synapse0x2a32950();
   input += synapse0x2a32990();
   input += synapse0x2a329d0();
   input += synapse0x2a32a10();
   input += synapse0x2a32a50();
   input += synapse0x2a32a90();
   input += synapse0x2a32ad0();
   input += synapse0x2a32b10();
   input += synapse0x2a32b50();
   input += synapse0x2a32b90();
   input += synapse0x2a32bd0();
   input += synapse0x2a32c10();
   input += synapse0x2a32c50();
   input += synapse0x2a32c90();
   input += synapse0x2a32720();
   input += synapse0x2a32760();
   input += synapse0x2a32de0();
   input += synapse0x2a32e20();
   input += synapse0x2a32e60();
   input += synapse0x2a32ea0();
   input += synapse0x2a32ee0();
   input += synapse0x2a32f20();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a32590() {
   double input = input0x2a32590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a32f60() {
   double input = 2.1282;
   input += synapse0x2a332a0();
   input += synapse0x2a332e0();
   input += synapse0x2a33320();
   input += synapse0x2a33360();
   input += synapse0x2a333a0();
   input += synapse0x2a333e0();
   input += synapse0x2a33420();
   input += synapse0x2a33460();
   input += synapse0x2a334a0();
   input += synapse0x2a334e0();
   input += synapse0x2a33520();
   input += synapse0x2a33560();
   input += synapse0x2a335a0();
   input += synapse0x2a335e0();
   input += synapse0x2a33620();
   input += synapse0x2a33660();
   input += synapse0x2a330f0();
   input += synapse0x2a33130();
   input += synapse0x2a337b0();
   input += synapse0x2a337f0();
   input += synapse0x2a33830();
   input += synapse0x2a33870();
   input += synapse0x2a338b0();
   input += synapse0x2a338f0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a32f60() {
   double input = input0x2a32f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a33930() {
   double input = -0.525956;
   input += synapse0x2a33c70();
   input += synapse0x2a33cb0();
   input += synapse0x2a33cf0();
   input += synapse0x2a33d30();
   input += synapse0x2a33d70();
   input += synapse0x2a33db0();
   input += synapse0x2a33df0();
   input += synapse0x2a33e30();
   input += synapse0x2a33e70();
   input += synapse0x2a33eb0();
   input += synapse0x2a33ef0();
   input += synapse0x2a33f30();
   input += synapse0x2a33f70();
   input += synapse0x2a33fb0();
   input += synapse0x2a33ff0();
   input += synapse0x2a34030();
   input += synapse0x2a33ac0();
   input += synapse0x2a33b00();
   input += synapse0x2a34180();
   input += synapse0x2a341c0();
   input += synapse0x2a34200();
   input += synapse0x2a34240();
   input += synapse0x2a34280();
   input += synapse0x2a342c0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a33930() {
   double input = input0x2a33930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a34300() {
   double input = -0.316421;
   input += synapse0x2a34640();
   input += synapse0x2a259d0();
   input += synapse0x2a25a10();
   input += synapse0x2a25d10();
   input += synapse0x2a25d50();
   input += synapse0x2a26050();
   input += synapse0x2a26090();
   input += synapse0x2a26390();
   input += synapse0x2a263d0();
   input += synapse0x2a266d0();
   input += synapse0x2a26710();
   input += synapse0x2a26a10();
   input += synapse0x2a26a50();
   input += synapse0x2a26d50();
   input += synapse0x2a26d90();
   input += synapse0x2a27090();
   input += synapse0x2a270d0();
   input += synapse0x2a273d0();
   input += synapse0x2a27410();
   input += synapse0x2a27710();
   input += synapse0x2a27750();
   input += synapse0x2a27a50();
   input += synapse0x2a27a90();
   input += synapse0x2a27d90();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a34300() {
   double input = input0x2a34300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a36110() {
   double input = 0.131896;
   input += synapse0x2a27dd0();
   input += synapse0x2a28a90();
   input += synapse0x2a28ad0();
   input += synapse0x2a34490();
   input += synapse0x2a344d0();
   input += synapse0x2a28dd0();
   input += synapse0x2a28e10();
   input += synapse0x27e0830();
   input += synapse0x27e0870();
   input += synapse0x2a29550();
   input += synapse0x2a29590();
   input += synapse0x2a29890();
   input += synapse0x2a298d0();
   input += synapse0x2a29bd0();
   input += synapse0x2a29c10();
   input += synapse0x2a29f10();
   input += synapse0x2a29f50();
   input += synapse0x2a2a250();
   input += synapse0x2a2a290();
   input += synapse0x2a2a590();
   input += synapse0x2a2a5d0();
   input += synapse0x2a280d0();
   input += synapse0x2a28110();
   input += synapse0x2a363b0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a36110() {
   double input = input0x2a36110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a363f0() {
   double input = -5.26674;
   input += synapse0x2a36730();
   input += synapse0x2a36770();
   input += synapse0x2a367b0();
   input += synapse0x2a367f0();
   input += synapse0x2a36830();
   input += synapse0x2a36870();
   input += synapse0x2a368b0();
   input += synapse0x2a368f0();
   input += synapse0x2a36930();
   input += synapse0x2a36970();
   input += synapse0x2a369b0();
   input += synapse0x2a369f0();
   input += synapse0x2a36a30();
   input += synapse0x2a36a70();
   input += synapse0x2a36ab0();
   input += synapse0x2a36af0();
   input += synapse0x2a36580();
   input += synapse0x2a365c0();
   input += synapse0x2a36c40();
   input += synapse0x2a36c80();
   input += synapse0x2a36cc0();
   input += synapse0x2a36d00();
   input += synapse0x2a36d40();
   input += synapse0x2a36d80();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a363f0() {
   double input = input0x2a363f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a36dc0() {
   double input = -14.4134;
   input += synapse0x2a37100();
   input += synapse0x2a37140();
   input += synapse0x2a37180();
   input += synapse0x2a371c0();
   input += synapse0x2a37200();
   input += synapse0x2a37240();
   input += synapse0x2a37280();
   input += synapse0x2a372c0();
   input += synapse0x2a37300();
   input += synapse0x2a37340();
   input += synapse0x2a37380();
   input += synapse0x2a373c0();
   input += synapse0x2a37400();
   input += synapse0x2a37440();
   input += synapse0x2a37480();
   input += synapse0x2a374c0();
   input += synapse0x2a36f50();
   input += synapse0x2a36f90();
   input += synapse0x2a37610();
   input += synapse0x2a37650();
   input += synapse0x2a37690();
   input += synapse0x2a376d0();
   input += synapse0x2a37710();
   input += synapse0x2a37750();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a36dc0() {
   double input = input0x2a36dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a37790() {
   double input = 0.661024;
   input += synapse0x2a37ad0();
   input += synapse0x2a37b10();
   input += synapse0x2a37b50();
   input += synapse0x2a37b90();
   input += synapse0x2a37bd0();
   input += synapse0x2a37c10();
   input += synapse0x2a37c50();
   input += synapse0x2a37c90();
   input += synapse0x2a37cd0();
   input += synapse0x2a37d10();
   input += synapse0x2a37d50();
   input += synapse0x2a37d90();
   input += synapse0x2a37dd0();
   input += synapse0x2a37e10();
   input += synapse0x2a37e50();
   input += synapse0x2a37e90();
   input += synapse0x2a37920();
   input += synapse0x2a37960();
   input += synapse0x2a37fe0();
   input += synapse0x2a38020();
   input += synapse0x2a38060();
   input += synapse0x2a380a0();
   input += synapse0x2a380e0();
   input += synapse0x2a38120();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a37790() {
   double input = input0x2a37790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a38160() {
   double input = -0.540772;
   input += synapse0x2a384a0();
   input += synapse0x2a384e0();
   input += synapse0x2a38520();
   input += synapse0x2a38560();
   input += synapse0x2a385a0();
   input += synapse0x2a385e0();
   input += synapse0x2a38620();
   input += synapse0x2a38660();
   input += synapse0x2a386a0();
   input += synapse0x2a386e0();
   input += synapse0x2a38720();
   input += synapse0x2a38760();
   input += synapse0x2a387a0();
   input += synapse0x2a387e0();
   input += synapse0x2a38820();
   input += synapse0x2a38860();
   input += synapse0x2a382f0();
   input += synapse0x2a38330();
   input += synapse0x2a389b0();
   input += synapse0x2a389f0();
   input += synapse0x2a38a30();
   input += synapse0x2a38a70();
   input += synapse0x2a38ab0();
   input += synapse0x2a38af0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a38160() {
   double input = input0x2a38160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a38b30() {
   double input = 2.1607;
   input += synapse0x2a38e70();
   input += synapse0x2a38eb0();
   input += synapse0x2a38ef0();
   input += synapse0x2a38f30();
   input += synapse0x2a38f70();
   input += synapse0x2a38fb0();
   input += synapse0x2a38ff0();
   input += synapse0x2a39030();
   input += synapse0x2a39070();
   input += synapse0x2a31230();
   input += synapse0x2a31270();
   input += synapse0x2a312b0();
   input += synapse0x2a312f0();
   input += synapse0x2a31330();
   input += synapse0x2a31370();
   input += synapse0x2a313b0();
   input += synapse0x2a38cc0();
   input += synapse0x2a38d00();
   input += synapse0x2a31500();
   input += synapse0x2a31540();
   input += synapse0x2a31580();
   input += synapse0x2a315c0();
   input += synapse0x2a31600();
   input += synapse0x2a31640();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a38b30() {
   double input = input0x2a38b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a31680() {
   double input = 1.38695;
   input += synapse0x2a319c0();
   input += synapse0x2a31a00();
   input += synapse0x2a31a40();
   input += synapse0x2a31a80();
   input += synapse0x2a31ac0();
   input += synapse0x2a31b00();
   input += synapse0x2a31b40();
   input += synapse0x2a31b80();
   input += synapse0x2a31bc0();
   input += synapse0x2a31c00();
   input += synapse0x2a31c40();
   input += synapse0x2a31c80();
   input += synapse0x2a31cc0();
   input += synapse0x2a31d00();
   input += synapse0x2a31d40();
   input += synapse0x2a31d80();
   input += synapse0x2a31810();
   input += synapse0x2a31850();
   input += synapse0x2a31ed0();
   input += synapse0x2a31f10();
   input += synapse0x2a31f50();
   input += synapse0x2a31f90();
   input += synapse0x2a31fd0();
   input += synapse0x2a32010();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a31680() {
   double input = input0x2a31680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a32050() {
   double input = -3.4532;
   input += synapse0x2a321e0();
   input += synapse0x2a3b270();
   input += synapse0x2a3b2b0();
   input += synapse0x2a3b2f0();
   input += synapse0x2a3b330();
   input += synapse0x2a3b370();
   input += synapse0x2a3b3b0();
   input += synapse0x2a3b3f0();
   input += synapse0x2a3b430();
   input += synapse0x2a3b470();
   input += synapse0x2a3b4b0();
   input += synapse0x2a3b4f0();
   input += synapse0x2a3b530();
   input += synapse0x2a3b570();
   input += synapse0x2a3b5b0();
   input += synapse0x2a3b5f0();
   input += synapse0x2a3b0c0();
   input += synapse0x2a3b100();
   input += synapse0x2a3b740();
   input += synapse0x2a3b780();
   input += synapse0x2a3b7c0();
   input += synapse0x2a3b800();
   input += synapse0x2a3b840();
   input += synapse0x2a3b880();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a32050() {
   double input = input0x2a32050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a3b8c0() {
   double input = 0.0708186;
   input += synapse0x2a3bc00();
   input += synapse0x2a3bc40();
   input += synapse0x2a3bc80();
   input += synapse0x2a3bcc0();
   input += synapse0x2a3bd00();
   input += synapse0x2a3bd40();
   input += synapse0x2a3bd80();
   input += synapse0x2a3bdc0();
   input += synapse0x2a3be00();
   input += synapse0x2a3be40();
   input += synapse0x2a3be80();
   input += synapse0x2a3bec0();
   input += synapse0x2a3bf00();
   input += synapse0x2a3bf40();
   input += synapse0x2a3bf80();
   input += synapse0x2a3bfc0();
   input += synapse0x2a3ba50();
   input += synapse0x2a3ba90();
   input += synapse0x2a3c110();
   input += synapse0x2a3c150();
   input += synapse0x2a3c190();
   input += synapse0x2a3c1d0();
   input += synapse0x2a3c210();
   input += synapse0x2a3c250();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a3b8c0() {
   double input = input0x2a3b8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a3c290() {
   double input = -0.978263;
   input += synapse0x2a3c5d0();
   input += synapse0x2a3c610();
   input += synapse0x2a3c650();
   input += synapse0x2a3c690();
   input += synapse0x2a3c6d0();
   input += synapse0x2a3c710();
   input += synapse0x2a3c750();
   input += synapse0x2a3c790();
   input += synapse0x2a3c7d0();
   input += synapse0x2a3c810();
   input += synapse0x2a3c850();
   input += synapse0x2a3c890();
   input += synapse0x2a3c8d0();
   input += synapse0x2a3c910();
   input += synapse0x2a3c950();
   input += synapse0x2a3c990();
   input += synapse0x2a3c420();
   input += synapse0x2a3c460();
   input += synapse0x2a3cae0();
   input += synapse0x2a3cb20();
   input += synapse0x2a3cb60();
   input += synapse0x2a3cba0();
   input += synapse0x2a3cbe0();
   input += synapse0x2a3cc20();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a3c290() {
   double input = input0x2a3c290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a3cc60() {
   double input = 0.0346033;
   input += synapse0x2a3cfa0();
   input += synapse0x2a3cfe0();
   input += synapse0x2a3d020();
   input += synapse0x2a3d060();
   input += synapse0x2a3d0a0();
   input += synapse0x2a3d0e0();
   input += synapse0x2a3d120();
   input += synapse0x2a3d160();
   input += synapse0x2a3d1a0();
   input += synapse0x2a3d1e0();
   input += synapse0x2a3d220();
   input += synapse0x2a3d260();
   input += synapse0x2a3d2a0();
   input += synapse0x2a3d2e0();
   input += synapse0x2a3d320();
   input += synapse0x2a3d360();
   input += synapse0x2a3cdf0();
   input += synapse0x2a3ce30();
   input += synapse0x2a3d4b0();
   input += synapse0x2a3d4f0();
   input += synapse0x2a3d530();
   input += synapse0x2a3d570();
   input += synapse0x2a3d5b0();
   input += synapse0x2a3d5f0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a3cc60() {
   double input = input0x2a3cc60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a3d630() {
   double input = 6.55476;
   input += synapse0x2a3d970();
   input += synapse0x2a3d9b0();
   input += synapse0x2a3d9f0();
   input += synapse0x2a3da30();
   input += synapse0x2a3da70();
   input += synapse0x2a3dab0();
   input += synapse0x2a3daf0();
   input += synapse0x2a3db30();
   input += synapse0x2a3db70();
   input += synapse0x2a3dbb0();
   input += synapse0x2a3dbf0();
   input += synapse0x2a3dc30();
   input += synapse0x2a3dc70();
   input += synapse0x2a3dcb0();
   input += synapse0x2a3dcf0();
   input += synapse0x2a3dd30();
   input += synapse0x2a3d7c0();
   input += synapse0x2a3d800();
   input += synapse0x2a3de80();
   input += synapse0x2a3dec0();
   input += synapse0x2a3df00();
   input += synapse0x2a3df40();
   input += synapse0x2a3df80();
   input += synapse0x2a3dfc0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a3d630() {
   double input = input0x2a3d630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a3e000() {
   double input = 0.629769;
   input += synapse0x2a3e340();
   input += synapse0x2a3e380();
   input += synapse0x2a3e3c0();
   input += synapse0x2a3e400();
   input += synapse0x2a3e440();
   input += synapse0x2a3e480();
   input += synapse0x2a3e4c0();
   input += synapse0x2a3e500();
   input += synapse0x2a3e540();
   input += synapse0x2a3e580();
   input += synapse0x2a3e5c0();
   input += synapse0x2a3e600();
   input += synapse0x2a3e640();
   input += synapse0x2a3e680();
   input += synapse0x2a3e6c0();
   input += synapse0x2a3e700();
   input += synapse0x2a3e190();
   input += synapse0x2a3e1d0();
   input += synapse0x2a3e850();
   input += synapse0x2a3e890();
   input += synapse0x2a3e8d0();
   input += synapse0x2a3e910();
   input += synapse0x2a3e950();
   input += synapse0x2a3e990();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a3e000() {
   double input = input0x2a3e000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a3e9d0() {
   double input = -0.855827;
   input += synapse0x2a3ed10();
   input += synapse0x2a3ed50();
   input += synapse0x2a3ed90();
   input += synapse0x2a3edd0();
   input += synapse0x2a3ee10();
   input += synapse0x2a3ee50();
   input += synapse0x2a3ee90();
   input += synapse0x2a3eed0();
   input += synapse0x2a3ef10();
   input += synapse0x2a3ef50();
   input += synapse0x2a3ef90();
   input += synapse0x2a3efd0();
   input += synapse0x2a3f010();
   input += synapse0x2a3f050();
   input += synapse0x2a3f090();
   input += synapse0x2a3f0d0();
   input += synapse0x2a3eb60();
   input += synapse0x2a3eba0();
   input += synapse0x2a3f220();
   input += synapse0x2a3f260();
   input += synapse0x2a3f2a0();
   input += synapse0x2a3f2e0();
   input += synapse0x2a3f320();
   input += synapse0x2a3f360();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a3e9d0() {
   double input = input0x2a3e9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a3f3a0() {
   double input = -3.32935;
   input += synapse0x2a3f6e0();
   input += synapse0x2a3f720();
   input += synapse0x2a3f760();
   input += synapse0x2a3f7a0();
   input += synapse0x2a3f7e0();
   input += synapse0x2a3f820();
   input += synapse0x2a3f860();
   input += synapse0x2a3f8a0();
   input += synapse0x2a3f8e0();
   input += synapse0x2a3f920();
   input += synapse0x2a3f960();
   input += synapse0x2a3f9a0();
   input += synapse0x2a3f9e0();
   input += synapse0x2a3fa20();
   input += synapse0x2a3fa60();
   input += synapse0x2a3faa0();
   input += synapse0x2a3f530();
   input += synapse0x2a3f570();
   input += synapse0x2a3fbf0();
   input += synapse0x2a3fc30();
   input += synapse0x2a3fc70();
   input += synapse0x2a3fcb0();
   input += synapse0x2a3fcf0();
   input += synapse0x2a3fd30();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a3f3a0() {
   double input = input0x2a3f3a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a3fd70() {
   double input = 4.06555;
   input += synapse0x2a400b0();
   input += synapse0x2a34680();
   input += synapse0x2a346c0();
   input += synapse0x2a34700();
   input += synapse0x2a34950();
   input += synapse0x2a34990();
   input += synapse0x2a349d0();
   input += synapse0x2a34c20();
   input += synapse0x2a34c60();
   input += synapse0x2a34eb0();
   input += synapse0x2a34ef0();
   input += synapse0x2a34f30();
   input += synapse0x2a35180();
   input += synapse0x2a351c0();
   input += synapse0x2a35410();
   input += synapse0x2a35450();
   input += synapse0x2a3ff00();
   input += synapse0x2a3ff40();
   input += synapse0x2a355a0();
   input += synapse0x2a35ab0();
   input += synapse0x2a35af0();
   input += synapse0x2a35b30();
   input += synapse0x2a35d80();
   input += synapse0x2a35dc0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a3fd70() {
   double input = input0x2a3fd70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a35e00() {
   double input = -0.0454488;
   input += synapse0x2a35670();
   input += synapse0x2a356b0();
   input += synapse0x2a356f0();
   input += synapse0x2a35730();
   input += synapse0x2a360b0();
   input += synapse0x2a42400();
   input += synapse0x2a42440();
   input += synapse0x2a42480();
   input += synapse0x2a424c0();
   input += synapse0x2a42500();
   input += synapse0x2a42540();
   input += synapse0x2a42580();
   input += synapse0x2a425c0();
   input += synapse0x2a42600();
   input += synapse0x2a42640();
   input += synapse0x2a42680();
   input += synapse0x2a35f90();
   input += synapse0x2a35fd0();
   input += synapse0x2a427d0();
   input += synapse0x2a42810();
   input += synapse0x2a42850();
   input += synapse0x2a42890();
   input += synapse0x2a428d0();
   input += synapse0x2a42910();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a35e00() {
   double input = input0x2a35e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a42950() {
   double input = -0.860106;
   input += synapse0x2a42c90();
   input += synapse0x2a42cd0();
   input += synapse0x2a42d10();
   input += synapse0x2a42d50();
   input += synapse0x2a42d90();
   input += synapse0x2a42dd0();
   input += synapse0x2a42e10();
   input += synapse0x2a42e50();
   input += synapse0x2a42e90();
   input += synapse0x2a42ed0();
   input += synapse0x2a42f10();
   input += synapse0x2a42f50();
   input += synapse0x2a42f90();
   input += synapse0x2a42fd0();
   input += synapse0x2a43010();
   input += synapse0x2a43050();
   input += synapse0x2a42ae0();
   input += synapse0x2a42b20();
   input += synapse0x2a431a0();
   input += synapse0x2a431e0();
   input += synapse0x2a43220();
   input += synapse0x2a43260();
   input += synapse0x2a432a0();
   input += synapse0x2a432e0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a42950() {
   double input = input0x2a42950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a43320() {
   double input = 0.241701;
   input += synapse0x2a43660();
   input += synapse0x2a436a0();
   input += synapse0x2a436e0();
   input += synapse0x2a43720();
   input += synapse0x2a43760();
   input += synapse0x2a437a0();
   input += synapse0x2a437e0();
   input += synapse0x2a43820();
   input += synapse0x2a43860();
   input += synapse0x2a438a0();
   input += synapse0x2a438e0();
   input += synapse0x2a43920();
   input += synapse0x2a43960();
   input += synapse0x2a439a0();
   input += synapse0x2a439e0();
   input += synapse0x2a43a20();
   input += synapse0x2a434b0();
   input += synapse0x2a434f0();
   input += synapse0x2a43b70();
   input += synapse0x2a43bb0();
   input += synapse0x2a43bf0();
   input += synapse0x2a43c30();
   input += synapse0x2a43c70();
   input += synapse0x2a43cb0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a43320() {
   double input = input0x2a43320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a43cf0() {
   double input = 0.626766;
   input += synapse0x2a44030();
   input += synapse0x2a44070();
   input += synapse0x2a440b0();
   input += synapse0x2a440f0();
   input += synapse0x2a44130();
   input += synapse0x2a44170();
   input += synapse0x2a441b0();
   input += synapse0x2a441f0();
   input += synapse0x2a44230();
   input += synapse0x2a44270();
   input += synapse0x2a442b0();
   input += synapse0x2a442f0();
   input += synapse0x2a44330();
   input += synapse0x2a44370();
   input += synapse0x2a443b0();
   input += synapse0x2a443f0();
   input += synapse0x2a43e80();
   input += synapse0x2a43ec0();
   input += synapse0x2a44540();
   input += synapse0x2a44580();
   input += synapse0x2a445c0();
   input += synapse0x2a44600();
   input += synapse0x2a44640();
   input += synapse0x2a44680();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a43cf0() {
   double input = input0x2a43cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a446c0() {
   double input = -1.86749;
   input += synapse0x2a44a00();
   input += synapse0x2a44a40();
   input += synapse0x2a44a80();
   input += synapse0x2a44ac0();
   input += synapse0x2a44b00();
   input += synapse0x2a44b40();
   input += synapse0x2a44b80();
   input += synapse0x2a44bc0();
   input += synapse0x2a44c00();
   input += synapse0x2a44c40();
   input += synapse0x2a44c80();
   input += synapse0x2a44cc0();
   input += synapse0x2a44d00();
   input += synapse0x2a44d40();
   input += synapse0x2a44d80();
   input += synapse0x2a44dc0();
   input += synapse0x2a44850();
   input += synapse0x2a44890();
   input += synapse0x2a44f10();
   input += synapse0x2a44f50();
   input += synapse0x2a44f90();
   input += synapse0x2a44fd0();
   input += synapse0x2a45010();
   input += synapse0x2a45050();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a446c0() {
   double input = input0x2a446c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a45090() {
   double input = -3.093;
   input += synapse0x2a453d0();
   input += synapse0x2a45410();
   input += synapse0x2a45450();
   input += synapse0x2a45490();
   input += synapse0x2a454d0();
   input += synapse0x2a45510();
   input += synapse0x2a45550();
   input += synapse0x2a45590();
   input += synapse0x2a455d0();
   input += synapse0x2a45610();
   input += synapse0x2a45650();
   input += synapse0x2a45690();
   input += synapse0x2a456d0();
   input += synapse0x2a45710();
   input += synapse0x2a45750();
   input += synapse0x2a45790();
   input += synapse0x2a45220();
   input += synapse0x2a45260();
   input += synapse0x2a458e0();
   input += synapse0x2a45920();
   input += synapse0x2a45960();
   input += synapse0x2a459a0();
   input += synapse0x2a459e0();
   input += synapse0x2a45a20();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a45090() {
   double input = input0x2a45090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a45a60() {
   double input = -0.591168;
   input += synapse0x2a45da0();
   input += synapse0x2a45de0();
   input += synapse0x2a45e20();
   input += synapse0x2a45e60();
   input += synapse0x2a45ea0();
   input += synapse0x2a45ee0();
   input += synapse0x2a45f20();
   input += synapse0x2a45f60();
   input += synapse0x2a45fa0();
   input += synapse0x2a45fe0();
   input += synapse0x2a46020();
   input += synapse0x2a46060();
   input += synapse0x2a460a0();
   input += synapse0x2a460e0();
   input += synapse0x2a46120();
   input += synapse0x2a46160();
   input += synapse0x2a45bf0();
   input += synapse0x2a45c30();
   input += synapse0x2a462b0();
   input += synapse0x2a462f0();
   input += synapse0x2a46330();
   input += synapse0x2a46370();
   input += synapse0x2a463b0();
   input += synapse0x2a463f0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a45a60() {
   double input = input0x2a45a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a46430() {
   double input = -2.24863;
   input += synapse0x2a46770();
   input += synapse0x2a467b0();
   input += synapse0x2a467f0();
   input += synapse0x2a46830();
   input += synapse0x2a46870();
   input += synapse0x2a468b0();
   input += synapse0x2a468f0();
   input += synapse0x2a46930();
   input += synapse0x2a46970();
   input += synapse0x2a469b0();
   input += synapse0x2a469f0();
   input += synapse0x2a46a30();
   input += synapse0x2a46a70();
   input += synapse0x2a46ab0();
   input += synapse0x2a46af0();
   input += synapse0x2a46b30();
   input += synapse0x2a465c0();
   input += synapse0x2a46600();
   input += synapse0x2a46c80();
   input += synapse0x2a46cc0();
   input += synapse0x2a46d00();
   input += synapse0x2a46d40();
   input += synapse0x2a46d80();
   input += synapse0x2a46dc0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a46430() {
   double input = input0x2a46430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a46e00() {
   double input = 3.1243;
   input += synapse0x2a2f870();
   input += synapse0x2a2f8b0();
   input += synapse0x2a2f8f0();
   input += synapse0x2a2f930();
   input += synapse0x2a2f970();
   input += synapse0x2a2f9b0();
   input += synapse0x2a2f9f0();
   input += synapse0x2a2fa30();
   input += synapse0x2a47550();
   input += synapse0x2a47590();
   input += synapse0x2a475d0();
   input += synapse0x2a47610();
   input += synapse0x2a47650();
   input += synapse0x2a47690();
   input += synapse0x2a476d0();
   input += synapse0x2a47710();
   input += synapse0x2a46f90();
   input += synapse0x2a46fd0();
   input += synapse0x2a47860();
   input += synapse0x2a478a0();
   input += synapse0x2a478e0();
   input += synapse0x2a47920();
   input += synapse0x2a47960();
   input += synapse0x2a479a0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a46e00() {
   double input = input0x2a46e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a479e0() {
   double input = 1.38202;
   input += synapse0x2a47d20();
   input += synapse0x2a47d60();
   input += synapse0x2a47da0();
   input += synapse0x2a47de0();
   input += synapse0x2a47e20();
   input += synapse0x2a47e60();
   input += synapse0x2a47ea0();
   input += synapse0x2a47ee0();
   input += synapse0x2a47f20();
   input += synapse0x2a47f60();
   input += synapse0x2a47fa0();
   input += synapse0x2a47fe0();
   input += synapse0x2a48020();
   input += synapse0x2a48060();
   input += synapse0x2a480a0();
   input += synapse0x2a480e0();
   input += synapse0x2a47b70();
   input += synapse0x2a47bb0();
   input += synapse0x2a48230();
   input += synapse0x2a48270();
   input += synapse0x2a482b0();
   input += synapse0x2a482f0();
   input += synapse0x2a48330();
   input += synapse0x2a48370();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a479e0() {
   double input = input0x2a479e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a483b0() {
   double input = 0.201598;
   input += synapse0x2a486f0();
   input += synapse0x2a48730();
   input += synapse0x2a48770();
   input += synapse0x2a487b0();
   input += synapse0x2a487f0();
   input += synapse0x2a48830();
   input += synapse0x2a48870();
   input += synapse0x2a488b0();
   input += synapse0x2a488f0();
   input += synapse0x2a48930();
   input += synapse0x2a48970();
   input += synapse0x2a489b0();
   input += synapse0x2a489f0();
   input += synapse0x2a48a30();
   input += synapse0x2a48a70();
   input += synapse0x2a48ab0();
   input += synapse0x2a48540();
   input += synapse0x2a48580();
   input += synapse0x2a390b0();
   input += synapse0x2a390f0();
   input += synapse0x2a39130();
   input += synapse0x2a39170();
   input += synapse0x2a391b0();
   input += synapse0x2a391f0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a483b0() {
   double input = input0x2a483b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a39230() {
   double input = -0.700079;
   input += synapse0x2a39570();
   input += synapse0x2a395b0();
   input += synapse0x2a395f0();
   input += synapse0x2a39630();
   input += synapse0x2a39670();
   input += synapse0x2a396b0();
   input += synapse0x2a396f0();
   input += synapse0x2a39730();
   input += synapse0x2a39770();
   input += synapse0x2a397b0();
   input += synapse0x2a397f0();
   input += synapse0x2a39830();
   input += synapse0x2a39870();
   input += synapse0x2a398b0();
   input += synapse0x2a398f0();
   input += synapse0x2a39930();
   input += synapse0x2a393c0();
   input += synapse0x2a39400();
   input += synapse0x2a39a80();
   input += synapse0x2a39ac0();
   input += synapse0x2a39b00();
   input += synapse0x2a39b40();
   input += synapse0x2a39b80();
   input += synapse0x2a39bc0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a39230() {
   double input = input0x2a39230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a39c00() {
   double input = -1.32948;
   input += synapse0x2a39f40();
   input += synapse0x2a39f80();
   input += synapse0x2a39fc0();
   input += synapse0x2a3a000();
   input += synapse0x2a3a040();
   input += synapse0x2a3a080();
   input += synapse0x2a3a0c0();
   input += synapse0x2a3a100();
   input += synapse0x2a3a140();
   input += synapse0x2a3a180();
   input += synapse0x2a3a1c0();
   input += synapse0x2a3a200();
   input += synapse0x2a3a240();
   input += synapse0x2a3a280();
   input += synapse0x2a3a2c0();
   input += synapse0x2a3a300();
   input += synapse0x2a39d90();
   input += synapse0x2a39dd0();
   input += synapse0x2a3a450();
   input += synapse0x2a3a490();
   input += synapse0x2a3a4d0();
   input += synapse0x2a3a510();
   input += synapse0x2a3a550();
   input += synapse0x2a3a590();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a39c00() {
   double input = input0x2a39c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a3a5d0() {
   double input = -0.210814;
   input += synapse0x2a3a910();
   input += synapse0x2a3a950();
   input += synapse0x2a3a990();
   input += synapse0x2a3a9d0();
   input += synapse0x2a3aa10();
   input += synapse0x2a3aa50();
   input += synapse0x2a3aa90();
   input += synapse0x2a3aad0();
   input += synapse0x2a3ab10();
   input += synapse0x2a3ab50();
   input += synapse0x2a3ab90();
   input += synapse0x2a3abd0();
   input += synapse0x2a3ac10();
   input += synapse0x2a3ac50();
   input += synapse0x2a3ac90();
   input += synapse0x2a3acd0();
   input += synapse0x2a3a760();
   input += synapse0x2a3a7a0();
   input += synapse0x2a3ae20();
   input += synapse0x2a3ae60();
   input += synapse0x2a3aea0();
   input += synapse0x2a3aee0();
   input += synapse0x2a3af20();
   input += synapse0x2a3af60();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a3a5d0() {
   double input = input0x2a3a5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a4cc10() {
   double input = 0.37724;
   input += synapse0x2a4ce30();
   input += synapse0x2a4ce70();
   input += synapse0x2a4ceb0();
   input += synapse0x2a4cef0();
   input += synapse0x2a4cf30();
   input += synapse0x2a4cf70();
   input += synapse0x2a4cfb0();
   input += synapse0x2a4cff0();
   input += synapse0x2a4d030();
   input += synapse0x2a4d070();
   input += synapse0x2a4d0b0();
   input += synapse0x2a4d0f0();
   input += synapse0x2a4d130();
   input += synapse0x2a4d170();
   input += synapse0x2a4d1b0();
   input += synapse0x2a4d1f0();
   input += synapse0x2a3afa0();
   input += synapse0x2a3afe0();
   input += synapse0x2a4d340();
   input += synapse0x2a4d380();
   input += synapse0x2a4d3c0();
   input += synapse0x2a4d400();
   input += synapse0x2a4d440();
   input += synapse0x2a4d480();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a4cc10() {
   double input = input0x2a4cc10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a4d4c0() {
   double input = -6.67152;
   input += synapse0x2a4d800();
   input += synapse0x2a4d840();
   input += synapse0x2a4d880();
   input += synapse0x2a4d8c0();
   input += synapse0x2a4d900();
   input += synapse0x2a4d940();
   input += synapse0x2a4d980();
   input += synapse0x2a4d9c0();
   input += synapse0x2a4da00();
   input += synapse0x2a4da40();
   input += synapse0x2a4da80();
   input += synapse0x2a4dac0();
   input += synapse0x2a4db00();
   input += synapse0x2a4db40();
   input += synapse0x2a4db80();
   input += synapse0x2a4dbc0();
   input += synapse0x2a4d650();
   input += synapse0x2a4d690();
   input += synapse0x2a4dd10();
   input += synapse0x2a4dd50();
   input += synapse0x2a4dd90();
   input += synapse0x2a4ddd0();
   input += synapse0x2a4de10();
   input += synapse0x2a4de50();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a4d4c0() {
   double input = input0x2a4d4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a4de90() {
   double input = 0.770713;
   input += synapse0x2a4e1d0();
   input += synapse0x2a4e210();
   input += synapse0x2a4e250();
   input += synapse0x2a4e290();
   input += synapse0x2a4e2d0();
   input += synapse0x2a4e310();
   input += synapse0x2a4e350();
   input += synapse0x2a4e390();
   input += synapse0x2a4e3d0();
   input += synapse0x2a4e410();
   input += synapse0x2a4e450();
   input += synapse0x2a4e490();
   input += synapse0x2a4e4d0();
   input += synapse0x2a4e510();
   input += synapse0x2a4e550();
   input += synapse0x2a4e590();
   input += synapse0x2a4e020();
   input += synapse0x2a4e060();
   input += synapse0x2a4e6e0();
   input += synapse0x2a4e720();
   input += synapse0x2a4e760();
   input += synapse0x2a4e7a0();
   input += synapse0x2a4e7e0();
   input += synapse0x2a4e820();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a4de90() {
   double input = input0x2a4de90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a4e860() {
   double input = -0.0723086;
   input += synapse0x2a4eba0();
   input += synapse0x2a4ebe0();
   input += synapse0x2a4ec20();
   input += synapse0x2a4ec60();
   input += synapse0x2a4eca0();
   input += synapse0x2a4ece0();
   input += synapse0x2a4ed20();
   input += synapse0x2a4ed60();
   input += synapse0x2a4eda0();
   input += synapse0x2a4ede0();
   input += synapse0x2a4ee20();
   input += synapse0x2a4ee60();
   input += synapse0x2a4eea0();
   input += synapse0x2a4eee0();
   input += synapse0x2a4ef20();
   input += synapse0x2a4ef60();
   input += synapse0x2a4e9f0();
   input += synapse0x2a4ea30();
   input += synapse0x2a4f0b0();
   input += synapse0x2a4f0f0();
   input += synapse0x2a4f130();
   input += synapse0x2a4f170();
   input += synapse0x2a4f1b0();
   input += synapse0x2a4f1f0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a4e860() {
   double input = input0x2a4e860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a55a60() {
   double input = 2.37202;
   input += synapse0x27ef100();
   input += synapse0x27ef140();
   input += synapse0x2a2cca0();
   input += synapse0x2a2cce0();
   input += synapse0x2a2d670();
   input += synapse0x2a2d6b0();
   input += synapse0x2a2e440();
   input += synapse0x2a2e480();
   input += synapse0x2a2ee10();
   input += synapse0x2a2ee50();
   input += synapse0x2a2f7e0();
   input += synapse0x2a2f820();
   input += synapse0x2a302c0();
   input += synapse0x2a30300();
   input += synapse0x2a30c90();
   input += synapse0x2a30cd0();
   input += synapse0x2a2dd70();
   input += synapse0x2a2ddb0();
   input += synapse0x2a32840();
   input += synapse0x2a32880();
   input += synapse0x2a33210();
   input += synapse0x2a33250();
   input += synapse0x2a33be0();
   input += synapse0x2a33c20();
   input += synapse0x2a345b0();
   input += synapse0x2a345f0();
   input += synapse0x2a28750();
   input += synapse0x2a28790();
   input += synapse0x2a366a0();
   input += synapse0x2a366e0();
   input += synapse0x2a37070();
   input += synapse0x2a370b0();
   input += synapse0x2a37a40();
   input += synapse0x2a37a80();
   input += synapse0x2a38410();
   input += synapse0x2a38450();
   input += synapse0x2a38de0();
   input += synapse0x2a38e20();
   input += synapse0x2a31930();
   input += synapse0x2a31970();
   input += synapse0x2a3b1e0();
   input += synapse0x2a3b220();
   input += synapse0x2a3bb70();
   input += synapse0x2a3bbb0();
   input += synapse0x2a3c540();
   input += synapse0x2a3c580();
   input += synapse0x2a3cf10();
   input += synapse0x2a3cf50();
   input += synapse0x2a3d8e0();
   input += synapse0x2a3d920();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a55a60() {
   double input = input0x2a55a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a55e00() {
   double input = -0.893174;
   input += synapse0x2a40020();
   input += synapse0x2a40060();
   input += synapse0x2a355e0();
   input += synapse0x2a35620();
   input += synapse0x2a42c00();
   input += synapse0x2a42c40();
   input += synapse0x2a435d0();
   input += synapse0x2a43610();
   input += synapse0x2a43fa0();
   input += synapse0x2a43fe0();
   input += synapse0x2a44970();
   input += synapse0x2a449b0();
   input += synapse0x2a45340();
   input += synapse0x2a45380();
   input += synapse0x2a45d10();
   input += synapse0x2a45d50();
   input += synapse0x2a466e0();
   input += synapse0x2a46720();
   input += synapse0x2a470b0();
   input += synapse0x2a470f0();
   input += synapse0x2a47c90();
   input += synapse0x2a47cd0();
   input += synapse0x2a48660();
   input += synapse0x2a486a0();
   input += synapse0x2a394e0();
   input += synapse0x2a39520();
   input += synapse0x2a39eb0();
   input += synapse0x2a39ef0();
   input += synapse0x2a3a880();
   input += synapse0x2a3a8c0();
   input += synapse0x2a4cda0();
   input += synapse0x2a4cde0();
   input += synapse0x2a4d770();
   input += synapse0x2a4d7b0();
   input += synapse0x2a4e140();
   input += synapse0x2a4e180();
   input += synapse0x2a4eb10();
   input += synapse0x2a4eb50();
   input += synapse0x2a2aa00();
   input += synapse0x2a2aa40();
   input += synapse0x2a3e2b0();
   input += synapse0x2a3e2f0();
   input += synapse0x2a4f230();
   input += synapse0x2a4f270();
   input += synapse0x2a4f2b0();
   input += synapse0x2a4f2f0();
   input += synapse0x2a561a0();
   input += synapse0x2a561e0();
   input += synapse0x2a56220();
   input += synapse0x2a56260();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a55e00() {
   double input = input0x2a55e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a562a0() {
   double input = -0.35615;
   input += synapse0x2a565e0();
   input += synapse0x2a56620();
   input += synapse0x2a56660();
   input += synapse0x2a566a0();
   input += synapse0x2a566e0();
   input += synapse0x2a56720();
   input += synapse0x2a56760();
   input += synapse0x2a567a0();
   input += synapse0x2a567e0();
   input += synapse0x2a56820();
   input += synapse0x2a56860();
   input += synapse0x2a568a0();
   input += synapse0x2a568e0();
   input += synapse0x2a56920();
   input += synapse0x2a56960();
   input += synapse0x2a569a0();
   input += synapse0x2a56430();
   input += synapse0x2a56470();
   input += synapse0x2a56af0();
   input += synapse0x2a56b30();
   input += synapse0x2a56b70();
   input += synapse0x2a56bb0();
   input += synapse0x2a56bf0();
   input += synapse0x2a56c30();
   input += synapse0x2a56c70();
   input += synapse0x2a56cb0();
   input += synapse0x2a56cf0();
   input += synapse0x2a56d30();
   input += synapse0x2a56d70();
   input += synapse0x2a56db0();
   input += synapse0x2a56df0();
   input += synapse0x2a56e30();
   input += synapse0x2a569e0();
   input += synapse0x2a56a20();
   input += synapse0x2a56a60();
   input += synapse0x2a56aa0();
   input += synapse0x2a57080();
   input += synapse0x2a570c0();
   input += synapse0x2a57100();
   input += synapse0x2a57140();
   input += synapse0x2a57180();
   input += synapse0x2a571c0();
   input += synapse0x2a57200();
   input += synapse0x2a57240();
   input += synapse0x2a57280();
   input += synapse0x2a572c0();
   input += synapse0x2a57300();
   input += synapse0x2a57340();
   input += synapse0x2a57380();
   input += synapse0x2a573c0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a562a0() {
   double input = input0x2a562a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a57400() {
   double input = -0.0730639;
   input += synapse0x2a57740();
   input += synapse0x2a57780();
   input += synapse0x2a577c0();
   input += synapse0x2a57800();
   input += synapse0x2a57840();
   input += synapse0x2a57880();
   input += synapse0x2a578c0();
   input += synapse0x2a57900();
   input += synapse0x2a57940();
   input += synapse0x2a57980();
   input += synapse0x2a579c0();
   input += synapse0x2a57a00();
   input += synapse0x2a57a40();
   input += synapse0x2a57a80();
   input += synapse0x2a57ac0();
   input += synapse0x2a57b00();
   input += synapse0x2a57590();
   input += synapse0x2a575d0();
   input += synapse0x2a57c50();
   input += synapse0x2a57c90();
   input += synapse0x2a57cd0();
   input += synapse0x2a57d10();
   input += synapse0x2a57d50();
   input += synapse0x2a57d90();
   input += synapse0x2a57dd0();
   input += synapse0x2a57e10();
   input += synapse0x2a57e50();
   input += synapse0x2a57e90();
   input += synapse0x2a57ed0();
   input += synapse0x2a57f10();
   input += synapse0x2a57f50();
   input += synapse0x2a57f90();
   input += synapse0x2a57b40();
   input += synapse0x2a57b80();
   input += synapse0x2a57bc0();
   input += synapse0x2a57c00();
   input += synapse0x2a581e0();
   input += synapse0x2a58220();
   input += synapse0x2a58260();
   input += synapse0x2a582a0();
   input += synapse0x2a582e0();
   input += synapse0x2a58320();
   input += synapse0x2a58360();
   input += synapse0x2a583a0();
   input += synapse0x2a583e0();
   input += synapse0x2a58420();
   input += synapse0x2a58460();
   input += synapse0x2a584a0();
   input += synapse0x2a584e0();
   input += synapse0x2a58520();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a57400() {
   double input = input0x2a57400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a58560() {
   double input = 0.201521;
   input += synapse0x2a588a0();
   input += synapse0x2a588e0();
   input += synapse0x2a58920();
   input += synapse0x2a58960();
   input += synapse0x2a589a0();
   input += synapse0x2a589e0();
   input += synapse0x2a58a20();
   input += synapse0x2a58a60();
   input += synapse0x2a58aa0();
   input += synapse0x2a58ae0();
   input += synapse0x2a58b20();
   input += synapse0x2a58b60();
   input += synapse0x2a58ba0();
   input += synapse0x2a58be0();
   input += synapse0x2a58c20();
   input += synapse0x2a58c60();
   input += synapse0x2a586f0();
   input += synapse0x2a58730();
   input += synapse0x2a58db0();
   input += synapse0x2a58df0();
   input += synapse0x2a58e30();
   input += synapse0x2a58e70();
   input += synapse0x2a58eb0();
   input += synapse0x2a58ef0();
   input += synapse0x2a58f30();
   input += synapse0x2a58f70();
   input += synapse0x2a58fb0();
   input += synapse0x2a58ff0();
   input += synapse0x2a59030();
   input += synapse0x2a59070();
   input += synapse0x2a590b0();
   input += synapse0x2a590f0();
   input += synapse0x2a58ca0();
   input += synapse0x2a58ce0();
   input += synapse0x2a58d20();
   input += synapse0x2a58d60();
   input += synapse0x2a59340();
   input += synapse0x2a59380();
   input += synapse0x2a593c0();
   input += synapse0x2a59400();
   input += synapse0x2a59440();
   input += synapse0x2a59480();
   input += synapse0x2a594c0();
   input += synapse0x2a59500();
   input += synapse0x2a59540();
   input += synapse0x2a59580();
   input += synapse0x2a595c0();
   input += synapse0x2a59600();
   input += synapse0x2a59640();
   input += synapse0x2a59680();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a58560() {
   double input = input0x2a58560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_cL::input0x2a596c0() {
   double input = 7.85688;
   input += synapse0x2a598e0();
   input += synapse0x2a59920();
   input += synapse0x2a59960();
   input += synapse0x2a599a0();
   input += synapse0x2a599e0();
   return input;
}

double NNfunction_ns_chi04_cL::neuron0x2a596c0() {
   double input = input0x2a596c0();
   return (input * 1)+0;
}

double NNfunction_ns_chi04_cL::synapse0x2a25670() {
   return (neuron0x2a257b0()*-0.676197);
}

double NNfunction_ns_chi04_cL::synapse0x2a256b0() {
   return (neuron0x2a25af0()*-0.0539597);
}

double NNfunction_ns_chi04_cL::synapse0x2a2aa90() {
   return (neuron0x2a25e30()*0.0962515);
}

double NNfunction_ns_chi04_cL::synapse0x2a2aad0() {
   return (neuron0x2a26170()*0.0662227);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ab10() {
   return (neuron0x2a264b0()*0.838799);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ab50() {
   return (neuron0x2a267f0()*-0.392543);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ab90() {
   return (neuron0x2a26b30()*0.162497);
}

double NNfunction_ns_chi04_cL::synapse0x2a2abd0() {
   return (neuron0x2a26e70()*0.391861);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ac10() {
   return (neuron0x2a271b0()*0.583343);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ac50() {
   return (neuron0x2a274f0()*0.504952);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ac90() {
   return (neuron0x2a27830()*-0.359873);
}

double NNfunction_ns_chi04_cL::synapse0x2a2acd0() {
   return (neuron0x2a27b70()*0.252544);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ad10() {
   return (neuron0x2a27eb0()*0.601177);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ad50() {
   return (neuron0x2a281f0()*-1.35566);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ad90() {
   return (neuron0x2a28530()*-1.53375);
}

double NNfunction_ns_chi04_cL::synapse0x2a2add0() {
   return (neuron0x2a28870()*0.561924);
}

double NNfunction_ns_chi04_cL::synapse0x2a255e0() {
   return (neuron0x2a28bb0()*0.758491);
}

double NNfunction_ns_chi04_cL::synapse0x2a25620() {
   return (neuron0x2a29110()*0.600715);
}

double NNfunction_ns_chi04_cL::synapse0x27e0950() {
   return (neuron0x2a29330()*0.330147);
}

double NNfunction_ns_chi04_cL::synapse0x27e0990() {
   return (neuron0x2a29670()*-0.237963);
}

double NNfunction_ns_chi04_cL::synapse0x2a2b030() {
   return (neuron0x2a299b0()*0.560194);
}

double NNfunction_ns_chi04_cL::synapse0x2a2b070() {
   return (neuron0x2a29cf0()*-0.240192);
}

double NNfunction_ns_chi04_cL::synapse0x2a2b0b0() {
   return (neuron0x2a2a030()*0.589947);
}

double NNfunction_ns_chi04_cL::synapse0x2a2b0f0() {
   return (neuron0x2a2a370()*-0.0432284);
}

double NNfunction_ns_chi04_cL::synapse0x2a2b470() {
   return (neuron0x2a257b0()*-0.334501);
}

double NNfunction_ns_chi04_cL::synapse0x2a2b4b0() {
   return (neuron0x2a25af0()*3.71065);
}

double NNfunction_ns_chi04_cL::synapse0x2a2b4f0() {
   return (neuron0x2a25e30()*3.50374);
}

double NNfunction_ns_chi04_cL::synapse0x2a2b530() {
   return (neuron0x2a26170()*-0.0210388);
}

double NNfunction_ns_chi04_cL::synapse0x2a2b570() {
   return (neuron0x2a264b0()*0.0572353);
}

double NNfunction_ns_chi04_cL::synapse0x2a2b5b0() {
   return (neuron0x2a267f0()*-0.131022);
}

double NNfunction_ns_chi04_cL::synapse0x2a2b5f0() {
   return (neuron0x2a26b30()*0.0578422);
}

double NNfunction_ns_chi04_cL::synapse0x2a2b630() {
   return (neuron0x2a26e70()*-0.112428);
}

double NNfunction_ns_chi04_cL::synapse0x2a2b670() {
   return (neuron0x2a271b0()*-0.222111);
}

double NNfunction_ns_chi04_cL::synapse0x2a2af20() {
   return (neuron0x2a274f0()*0.0138468);
}

double NNfunction_ns_chi04_cL::synapse0x2a2af60() {
   return (neuron0x2a27830()*0.103011);
}

double NNfunction_ns_chi04_cL::synapse0x2a2afa0() {
   return (neuron0x2a27b70()*0.0473493);
}

double NNfunction_ns_chi04_cL::synapse0x2a2afe0() {
   return (neuron0x2a27eb0()*0.144447);
}

double NNfunction_ns_chi04_cL::synapse0x2a2b8c0() {
   return (neuron0x2a281f0()*0.0169475);
}

double NNfunction_ns_chi04_cL::synapse0x2a2b900() {
   return (neuron0x2a28530()*-0.0177102);
}

double NNfunction_ns_chi04_cL::synapse0x2a2b940() {
   return (neuron0x2a28870()*0.0408097);
}

double NNfunction_ns_chi04_cL::synapse0x2a2b2c0() {
   return (neuron0x2a28bb0()*0.0931912);
}

double NNfunction_ns_chi04_cL::synapse0x2a2b300() {
   return (neuron0x2a29110()*-0.0348985);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ba90() {
   return (neuron0x2a29330()*0.0528475);
}

double NNfunction_ns_chi04_cL::synapse0x2a2bad0() {
   return (neuron0x2a29670()*-0.0549917);
}

double NNfunction_ns_chi04_cL::synapse0x2a2bb10() {
   return (neuron0x2a299b0()*0.21279);
}

double NNfunction_ns_chi04_cL::synapse0x2a2bb50() {
   return (neuron0x2a29cf0()*-0.0204184);
}

double NNfunction_ns_chi04_cL::synapse0x2a2bb90() {
   return (neuron0x2a2a030()*-0.164988);
}

double NNfunction_ns_chi04_cL::synapse0x2a2bbd0() {
   return (neuron0x2a2a370()*-1.26001);
}

double NNfunction_ns_chi04_cL::synapse0x2a2bf50() {
   return (neuron0x2a257b0()*0.0518873);
}

double NNfunction_ns_chi04_cL::synapse0x2a2bf90() {
   return (neuron0x2a25af0()*0.0894278);
}

double NNfunction_ns_chi04_cL::synapse0x2a2bfd0() {
   return (neuron0x2a25e30()*3.57996);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c010() {
   return (neuron0x2a26170()*-0.00254277);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c050() {
   return (neuron0x2a264b0()*0.00586959);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c090() {
   return (neuron0x2a267f0()*0.0231497);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c0d0() {
   return (neuron0x2a26b30()*-0.00548796);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c110() {
   return (neuron0x2a26e70()*-0.00386975);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c150() {
   return (neuron0x2a271b0()*-0.00108841);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c190() {
   return (neuron0x2a274f0()*0.00223435);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c1d0() {
   return (neuron0x2a27830()*-0.00728023);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c210() {
   return (neuron0x2a27b70()*0.0163227);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c250() {
   return (neuron0x2a27eb0()*0.025048);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c290() {
   return (neuron0x2a281f0()*0.0178007);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c2d0() {
   return (neuron0x2a28530()*-0.00108948);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c310() {
   return (neuron0x2a28870()*-0.0023045);
}

double NNfunction_ns_chi04_cL::synapse0x2a2bda0() {
   return (neuron0x2a28bb0()*0.0025046);
}

double NNfunction_ns_chi04_cL::synapse0x2a2bde0() {
   return (neuron0x2a29110()*-0.00570379);
}

double NNfunction_ns_chi04_cL::synapse0x27e1040() {
   return (neuron0x2a29330()*0.0109093);
}

double NNfunction_ns_chi04_cL::synapse0x27ee910() {
   return (neuron0x2a29670()*0.0217588);
}

double NNfunction_ns_chi04_cL::synapse0x27ee950() {
   return (neuron0x2a299b0()*-0.00946427);
}

double NNfunction_ns_chi04_cL::synapse0x2a14840() {
   return (neuron0x2a29cf0()*-0.0242016);
}

double NNfunction_ns_chi04_cL::synapse0x2a14880() {
   return (neuron0x2a2a030()*-0.00762647);
}

double NNfunction_ns_chi04_cL::synapse0x2a148c0() {
   return (neuron0x2a2a370()*2.42039);
}

double NNfunction_ns_chi04_cL::synapse0x27ef190() {
   return (neuron0x2a257b0()*0.0160284);
}

double NNfunction_ns_chi04_cL::synapse0x2a2b840() {
   return (neuron0x2a25af0()*-0.058574);
}

double NNfunction_ns_chi04_cL::synapse0x2a2b880() {
   return (neuron0x2a25e30()*0.00181101);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c460() {
   return (neuron0x2a26170()*-0.00411429);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c4a0() {
   return (neuron0x2a264b0()*-0.00281413);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c4e0() {
   return (neuron0x2a267f0()*0.0160921);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c520() {
   return (neuron0x2a26b30()*0.00148966);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c560() {
   return (neuron0x2a26e70()*0.0115825);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c5a0() {
   return (neuron0x2a271b0()*-0.00370297);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c5e0() {
   return (neuron0x2a274f0()*-0.00888654);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c620() {
   return (neuron0x2a27830()*-0.0190854);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c660() {
   return (neuron0x2a27b70()*0.0134742);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c6a0() {
   return (neuron0x2a27eb0()*1.18793);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c6e0() {
   return (neuron0x2a281f0()*0.0131575);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c720() {
   return (neuron0x2a28530()*0.00595875);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c760() {
   return (neuron0x2a28870()*-0.00289195);
}

double NNfunction_ns_chi04_cL::synapse0x2a256f0() {
   return (neuron0x2a28bb0()*-0.00170805);
}

double NNfunction_ns_chi04_cL::synapse0x2a25730() {
   return (neuron0x2a29110()*0.00827979);
}

double NNfunction_ns_chi04_cL::synapse0x2a25770() {
   return (neuron0x2a29330()*0.0135377);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c8b0() {
   return (neuron0x2a29670()*-0.00850545);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c8f0() {
   return (neuron0x2a299b0()*-0.00481303);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c930() {
   return (neuron0x2a29cf0()*-0.00738748);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c970() {
   return (neuron0x2a2a030()*0.00314908);
}

double NNfunction_ns_chi04_cL::synapse0x2a2c9b0() {
   return (neuron0x2a2a370()*-0.082051);
}

double NNfunction_ns_chi04_cL::synapse0x2a2cd30() {
   return (neuron0x2a257b0()*0.333562);
}

double NNfunction_ns_chi04_cL::synapse0x2a2cd70() {
   return (neuron0x2a25af0()*0.685581);
}

double NNfunction_ns_chi04_cL::synapse0x2a2cdb0() {
   return (neuron0x2a25e30()*-0.123755);
}

double NNfunction_ns_chi04_cL::synapse0x2a2cdf0() {
   return (neuron0x2a26170()*1.2531);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ce30() {
   return (neuron0x2a264b0()*0.274309);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ce70() {
   return (neuron0x2a267f0()*-0.175457);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ceb0() {
   return (neuron0x2a26b30()*1.14629);
}

double NNfunction_ns_chi04_cL::synapse0x2a2cef0() {
   return (neuron0x2a26e70()*0.590509);
}

double NNfunction_ns_chi04_cL::synapse0x2a2cf30() {
   return (neuron0x2a271b0()*0.68018);
}

double NNfunction_ns_chi04_cL::synapse0x2a2cf70() {
   return (neuron0x2a274f0()*0.178927);
}

double NNfunction_ns_chi04_cL::synapse0x2a2cfb0() {
   return (neuron0x2a27830()*-0.140605);
}

double NNfunction_ns_chi04_cL::synapse0x2a2cff0() {
   return (neuron0x2a27b70()*-0.321823);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d030() {
   return (neuron0x2a27eb0()*-0.230559);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d070() {
   return (neuron0x2a281f0()*0.687787);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d0b0() {
   return (neuron0x2a28530()*0.482877);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d0f0() {
   return (neuron0x2a28870()*-0.200974);
}

double NNfunction_ns_chi04_cL::synapse0x2a2cb80() {
   return (neuron0x2a28bb0()*-0.727214);
}

double NNfunction_ns_chi04_cL::synapse0x2a2cbc0() {
   return (neuron0x2a29110()*-0.166752);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d240() {
   return (neuron0x2a29330()*0.119811);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d280() {
   return (neuron0x2a29670()*-0.502742);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d2c0() {
   return (neuron0x2a299b0()*-0.371492);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d300() {
   return (neuron0x2a29cf0()*0.0891069);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d340() {
   return (neuron0x2a2a030()*-0.334323);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d380() {
   return (neuron0x2a2a370()*0.325418);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d700() {
   return (neuron0x2a257b0()*0.181389);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d740() {
   return (neuron0x2a25af0()*0.155942);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d780() {
   return (neuron0x2a25e30()*1.14433);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d7c0() {
   return (neuron0x2a26170()*-0.0199297);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d800() {
   return (neuron0x2a264b0()*0.554607);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d840() {
   return (neuron0x2a267f0()*-0.756041);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d880() {
   return (neuron0x2a26b30()*0.405151);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d8c0() {
   return (neuron0x2a26e70()*0.413709);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d900() {
   return (neuron0x2a271b0()*1.50049);
}

double NNfunction_ns_chi04_cL::synapse0x27eec60() {
   return (neuron0x2a274f0()*0.294801);
}

double NNfunction_ns_chi04_cL::synapse0x27eeca0() {
   return (neuron0x2a27830()*0.0673802);
}

double NNfunction_ns_chi04_cL::synapse0x27eece0() {
   return (neuron0x2a27b70()*0.211026);
}

double NNfunction_ns_chi04_cL::synapse0x27eed20() {
   return (neuron0x2a27eb0()*0.402157);
}

double NNfunction_ns_chi04_cL::synapse0x27eed60() {
   return (neuron0x2a281f0()*0.0883289);
}

double NNfunction_ns_chi04_cL::synapse0x27eeda0() {
   return (neuron0x2a28530()*-0.174456);
}

double NNfunction_ns_chi04_cL::synapse0x27eede0() {
   return (neuron0x2a28870()*-0.958201);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d550() {
   return (neuron0x2a28bb0()*-0.762924);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d590() {
   return (neuron0x2a29110()*0.159002);
}

double NNfunction_ns_chi04_cL::synapse0x27eef30() {
   return (neuron0x2a29330()*1.0693);
}

double NNfunction_ns_chi04_cL::synapse0x27eef70() {
   return (neuron0x2a29670()*0.317764);
}

double NNfunction_ns_chi04_cL::synapse0x27eefb0() {
   return (neuron0x2a299b0()*0.533967);
}

double NNfunction_ns_chi04_cL::synapse0x27eeff0() {
   return (neuron0x2a29cf0()*-0.990632);
}

double NNfunction_ns_chi04_cL::synapse0x27ef030() {
   return (neuron0x2a2a030()*-0.296081);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e150() {
   return (neuron0x2a2a370()*-0.00834101);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e4d0() {
   return (neuron0x2a257b0()*0.0241539);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e510() {
   return (neuron0x2a25af0()*-0.0702109);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e550() {
   return (neuron0x2a25e30()*-0.33971);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e590() {
   return (neuron0x2a26170()*-0.0237574);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e5d0() {
   return (neuron0x2a264b0()*-0.00595266);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e610() {
   return (neuron0x2a267f0()*0.0307318);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e650() {
   return (neuron0x2a26b30()*0.0106596);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e690() {
   return (neuron0x2a26e70()*0.00789482);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e6d0() {
   return (neuron0x2a271b0()*-0.0115596);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e710() {
   return (neuron0x2a274f0()*-0.0164215);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e750() {
   return (neuron0x2a27830()*-0.0191283);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e790() {
   return (neuron0x2a27b70()*0.0265003);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e7d0() {
   return (neuron0x2a27eb0()*0.689936);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e810() {
   return (neuron0x2a281f0()*0.0136813);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e850() {
   return (neuron0x2a28530()*0.0212693);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e890() {
   return (neuron0x2a28870()*0.0142871);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e320() {
   return (neuron0x2a28bb0()*-0.00139163);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e360() {
   return (neuron0x2a29110()*-0.00323374);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e9e0() {
   return (neuron0x2a29330()*0.0142619);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ea20() {
   return (neuron0x2a29670()*0.00744416);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ea60() {
   return (neuron0x2a299b0()*-0.00582132);
}

double NNfunction_ns_chi04_cL::synapse0x2a2eaa0() {
   return (neuron0x2a29cf0()*-0.0101683);
}

double NNfunction_ns_chi04_cL::synapse0x2a2eae0() {
   return (neuron0x2a2a030()*-0.00778979);
}

double NNfunction_ns_chi04_cL::synapse0x2a2eb20() {
   return (neuron0x2a2a370()*-0.051947);
}

double NNfunction_ns_chi04_cL::synapse0x2a2eea0() {
   return (neuron0x2a257b0()*-0.0118869);
}

double NNfunction_ns_chi04_cL::synapse0x2a2eee0() {
   return (neuron0x2a25af0()*1.19674);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ef20() {
   return (neuron0x2a25e30()*-0.30214);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ef60() {
   return (neuron0x2a26170()*0.376086);
}

double NNfunction_ns_chi04_cL::synapse0x2a2efa0() {
   return (neuron0x2a264b0()*-0.171344);
}

double NNfunction_ns_chi04_cL::synapse0x2a2efe0() {
   return (neuron0x2a267f0()*-0.332664);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f020() {
   return (neuron0x2a26b30()*-0.132998);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f060() {
   return (neuron0x2a26e70()*-0.220033);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f0a0() {
   return (neuron0x2a271b0()*-0.0214512);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f0e0() {
   return (neuron0x2a274f0()*-0.29884);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f120() {
   return (neuron0x2a27830()*0.00324483);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f160() {
   return (neuron0x2a27b70()*-0.204998);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f1a0() {
   return (neuron0x2a27eb0()*-0.427954);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f1e0() {
   return (neuron0x2a281f0()*0.0580489);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f220() {
   return (neuron0x2a28530()*0.330998);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f260() {
   return (neuron0x2a28870()*0.192619);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ecf0() {
   return (neuron0x2a28bb0()*-0.497366);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ed30() {
   return (neuron0x2a29110()*-0.44154);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f3b0() {
   return (neuron0x2a29330()*-0.00021993);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f3f0() {
   return (neuron0x2a29670()*0.134793);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f430() {
   return (neuron0x2a299b0()*-0.304621);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f470() {
   return (neuron0x2a29cf0()*-0.310299);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f4b0() {
   return (neuron0x2a2a030()*0.357123);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f4f0() {
   return (neuron0x2a2a370()*-1.57295);
}

double NNfunction_ns_chi04_cL::synapse0x2a29000() {
   return (neuron0x2a257b0()*1.7024);
}

double NNfunction_ns_chi04_cL::synapse0x2a29040() {
   return (neuron0x2a25af0()*-0.466497);
}

double NNfunction_ns_chi04_cL::synapse0x2a29080() {
   return (neuron0x2a25e30()*-1.57348);
}

double NNfunction_ns_chi04_cL::synapse0x2a290c0() {
   return (neuron0x2a26170()*-0.649404);
}

double NNfunction_ns_chi04_cL::synapse0x2a2fa80() {
   return (neuron0x2a264b0()*-0.378145);
}

double NNfunction_ns_chi04_cL::synapse0x2a2fac0() {
   return (neuron0x2a267f0()*0.419494);
}

double NNfunction_ns_chi04_cL::synapse0x2a2fb00() {
   return (neuron0x2a26b30()*0.172621);
}

double NNfunction_ns_chi04_cL::synapse0x2a2fb40() {
   return (neuron0x2a26e70()*-0.0552415);
}

double NNfunction_ns_chi04_cL::synapse0x2a2fb80() {
   return (neuron0x2a271b0()*0.347024);
}

double NNfunction_ns_chi04_cL::synapse0x2a2fbc0() {
   return (neuron0x2a274f0()*0.330273);
}

double NNfunction_ns_chi04_cL::synapse0x2a2fc00() {
   return (neuron0x2a27830()*-0.601313);
}

double NNfunction_ns_chi04_cL::synapse0x2a2fc40() {
   return (neuron0x2a27b70()*0.340512);
}

double NNfunction_ns_chi04_cL::synapse0x2a2fc80() {
   return (neuron0x2a27eb0()*1.48963);
}

double NNfunction_ns_chi04_cL::synapse0x2a2fcc0() {
   return (neuron0x2a281f0()*-0.281131);
}

double NNfunction_ns_chi04_cL::synapse0x2a2fd00() {
   return (neuron0x2a28530()*-0.785923);
}

double NNfunction_ns_chi04_cL::synapse0x2a2fd40() {
   return (neuron0x2a28870()*-0.489038);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f6c0() {
   return (neuron0x2a28bb0()*-0.917659);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f700() {
   return (neuron0x2a29110()*-0.34698);
}

double NNfunction_ns_chi04_cL::synapse0x2a2fe90() {
   return (neuron0x2a29330()*0.426848);
}

double NNfunction_ns_chi04_cL::synapse0x2a2fed0() {
   return (neuron0x2a29670()*0.416806);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ff10() {
   return (neuron0x2a299b0()*0.77762);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ff50() {
   return (neuron0x2a29cf0()*-1.03332);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ff90() {
   return (neuron0x2a2a030()*0.232286);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ffd0() {
   return (neuron0x2a2a370()*1.40955);
}

double NNfunction_ns_chi04_cL::synapse0x2a30350() {
   return (neuron0x2a257b0()*0.775827);
}

double NNfunction_ns_chi04_cL::synapse0x2a30390() {
   return (neuron0x2a25af0()*-1.37757);
}

double NNfunction_ns_chi04_cL::synapse0x2a303d0() {
   return (neuron0x2a25e30()*-0.0913289);
}

double NNfunction_ns_chi04_cL::synapse0x2a30410() {
   return (neuron0x2a26170()*0.0197274);
}

double NNfunction_ns_chi04_cL::synapse0x2a30450() {
   return (neuron0x2a264b0()*0.114527);
}

double NNfunction_ns_chi04_cL::synapse0x2a30490() {
   return (neuron0x2a267f0()*-0.329472);
}

double NNfunction_ns_chi04_cL::synapse0x2a304d0() {
   return (neuron0x2a26b30()*1.32999);
}

double NNfunction_ns_chi04_cL::synapse0x2a30510() {
   return (neuron0x2a26e70()*0.518849);
}

double NNfunction_ns_chi04_cL::synapse0x2a30550() {
   return (neuron0x2a271b0()*0.367979);
}

double NNfunction_ns_chi04_cL::synapse0x2a30590() {
   return (neuron0x2a274f0()*0.143246);
}

double NNfunction_ns_chi04_cL::synapse0x2a305d0() {
   return (neuron0x2a27830()*1.24296);
}

double NNfunction_ns_chi04_cL::synapse0x2a30610() {
   return (neuron0x2a27b70()*0.324291);
}

double NNfunction_ns_chi04_cL::synapse0x2a30650() {
   return (neuron0x2a27eb0()*-1.49194);
}

double NNfunction_ns_chi04_cL::synapse0x2a30690() {
   return (neuron0x2a281f0()*-0.0211535);
}

double NNfunction_ns_chi04_cL::synapse0x2a306d0() {
   return (neuron0x2a28530()*0.653507);
}

double NNfunction_ns_chi04_cL::synapse0x2a30710() {
   return (neuron0x2a28870()*0.683094);
}

double NNfunction_ns_chi04_cL::synapse0x2a301a0() {
   return (neuron0x2a28bb0()*1.3576);
}

double NNfunction_ns_chi04_cL::synapse0x2a301e0() {
   return (neuron0x2a29110()*-0.35511);
}

double NNfunction_ns_chi04_cL::synapse0x2a30860() {
   return (neuron0x2a29330()*0.522948);
}

double NNfunction_ns_chi04_cL::synapse0x2a308a0() {
   return (neuron0x2a29670()*-2.09701);
}

double NNfunction_ns_chi04_cL::synapse0x2a308e0() {
   return (neuron0x2a299b0()*0.592818);
}

double NNfunction_ns_chi04_cL::synapse0x2a30920() {
   return (neuron0x2a29cf0()*-0.479151);
}

double NNfunction_ns_chi04_cL::synapse0x2a30960() {
   return (neuron0x2a2a030()*-0.161862);
}

double NNfunction_ns_chi04_cL::synapse0x2a309a0() {
   return (neuron0x2a2a370()*-0.579689);
}

double NNfunction_ns_chi04_cL::synapse0x2a30d20() {
   return (neuron0x2a257b0()*-0.01292);
}

double NNfunction_ns_chi04_cL::synapse0x2a30d60() {
   return (neuron0x2a25af0()*0.120967);
}

double NNfunction_ns_chi04_cL::synapse0x2a30da0() {
   return (neuron0x2a25e30()*-0.152094);
}

double NNfunction_ns_chi04_cL::synapse0x2a30de0() {
   return (neuron0x2a26170()*0.131998);
}

double NNfunction_ns_chi04_cL::synapse0x2a30e20() {
   return (neuron0x2a264b0()*0.00571628);
}

double NNfunction_ns_chi04_cL::synapse0x2a30e60() {
   return (neuron0x2a267f0()*-0.00990338);
}

double NNfunction_ns_chi04_cL::synapse0x2a30ea0() {
   return (neuron0x2a26b30()*0.0144461);
}

double NNfunction_ns_chi04_cL::synapse0x2a30ee0() {
   return (neuron0x2a26e70()*0.0100649);
}

double NNfunction_ns_chi04_cL::synapse0x2a30f20() {
   return (neuron0x2a271b0()*0.0020443);
}

double NNfunction_ns_chi04_cL::synapse0x2a30f60() {
   return (neuron0x2a274f0()*0.0260622);
}

double NNfunction_ns_chi04_cL::synapse0x2a30fa0() {
   return (neuron0x2a27830()*0.0151818);
}

double NNfunction_ns_chi04_cL::synapse0x2a30fe0() {
   return (neuron0x2a27b70()*0.00310215);
}

double NNfunction_ns_chi04_cL::synapse0x2a31020() {
   return (neuron0x2a27eb0()*0.428401);
}

double NNfunction_ns_chi04_cL::synapse0x2a31060() {
   return (neuron0x2a281f0()*0.0109041);
}

double NNfunction_ns_chi04_cL::synapse0x2a310a0() {
   return (neuron0x2a28530()*0.00992417);
}

double NNfunction_ns_chi04_cL::synapse0x2a310e0() {
   return (neuron0x2a28870()*0.00700907);
}

double NNfunction_ns_chi04_cL::synapse0x2a30b70() {
   return (neuron0x2a28bb0()*-0.00181711);
}

double NNfunction_ns_chi04_cL::synapse0x2a30bb0() {
   return (neuron0x2a29110()*0.00101882);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d940() {
   return (neuron0x2a29330()*0.0193149);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d980() {
   return (neuron0x2a29670()*0.00891767);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d9c0() {
   return (neuron0x2a299b0()*-0.011144);
}

double NNfunction_ns_chi04_cL::synapse0x2a2da00() {
   return (neuron0x2a29cf0()*-0.0132447);
}

double NNfunction_ns_chi04_cL::synapse0x2a2da40() {
   return (neuron0x2a2a030()*-0.0198314);
}

double NNfunction_ns_chi04_cL::synapse0x2a2da80() {
   return (neuron0x2a2a370()*0.36269);
}

double NNfunction_ns_chi04_cL::synapse0x2a2de00() {
   return (neuron0x2a257b0()*0.0262228);
}

double NNfunction_ns_chi04_cL::synapse0x2a2de40() {
   return (neuron0x2a25af0()*-0.816912);
}

double NNfunction_ns_chi04_cL::synapse0x2a2de80() {
   return (neuron0x2a25e30()*1.29135);
}

double NNfunction_ns_chi04_cL::synapse0x2a2dec0() {
   return (neuron0x2a26170()*0.0589664);
}

double NNfunction_ns_chi04_cL::synapse0x2a2df00() {
   return (neuron0x2a264b0()*0.0530826);
}

double NNfunction_ns_chi04_cL::synapse0x2a2df40() {
   return (neuron0x2a267f0()*0.0436734);
}

double NNfunction_ns_chi04_cL::synapse0x2a2df80() {
   return (neuron0x2a26b30()*0.0545268);
}

double NNfunction_ns_chi04_cL::synapse0x2a2dfc0() {
   return (neuron0x2a26e70()*0.0639327);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e000() {
   return (neuron0x2a271b0()*-0.0437904);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e040() {
   return (neuron0x2a274f0()*-0.0429669);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e080() {
   return (neuron0x2a27830()*0.0383748);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e0c0() {
   return (neuron0x2a27b70()*-0.01604);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e100() {
   return (neuron0x2a27eb0()*-0.192096);
}

double NNfunction_ns_chi04_cL::synapse0x2a32240() {
   return (neuron0x2a281f0()*-0.139194);
}

double NNfunction_ns_chi04_cL::synapse0x2a32280() {
   return (neuron0x2a28530()*0.0526831);
}

double NNfunction_ns_chi04_cL::synapse0x2a322c0() {
   return (neuron0x2a28870()*0.0620766);
}

double NNfunction_ns_chi04_cL::synapse0x2a2dc50() {
   return (neuron0x2a28bb0()*-0.0886215);
}

double NNfunction_ns_chi04_cL::synapse0x2a2dc90() {
   return (neuron0x2a29110()*-0.0432011);
}

double NNfunction_ns_chi04_cL::synapse0x2a32410() {
   return (neuron0x2a29330()*-0.0897462);
}

double NNfunction_ns_chi04_cL::synapse0x2a32450() {
   return (neuron0x2a29670()*-0.0710103);
}

double NNfunction_ns_chi04_cL::synapse0x2a32490() {
   return (neuron0x2a299b0()*-0.0355295);
}

double NNfunction_ns_chi04_cL::synapse0x2a324d0() {
   return (neuron0x2a29cf0()*0.0475359);
}

double NNfunction_ns_chi04_cL::synapse0x2a32510() {
   return (neuron0x2a2a030()*-0.0366182);
}

double NNfunction_ns_chi04_cL::synapse0x2a32550() {
   return (neuron0x2a2a370()*0.672035);
}

double NNfunction_ns_chi04_cL::synapse0x2a328d0() {
   return (neuron0x2a257b0()*0.034886);
}

double NNfunction_ns_chi04_cL::synapse0x2a32910() {
   return (neuron0x2a25af0()*1.33333);
}

double NNfunction_ns_chi04_cL::synapse0x2a32950() {
   return (neuron0x2a25e30()*2.06784);
}

double NNfunction_ns_chi04_cL::synapse0x2a32990() {
   return (neuron0x2a26170()*0.0144215);
}

double NNfunction_ns_chi04_cL::synapse0x2a329d0() {
   return (neuron0x2a264b0()*0.336154);
}

double NNfunction_ns_chi04_cL::synapse0x2a32a10() {
   return (neuron0x2a267f0()*0.147888);
}

double NNfunction_ns_chi04_cL::synapse0x2a32a50() {
   return (neuron0x2a26b30()*0.104019);
}

double NNfunction_ns_chi04_cL::synapse0x2a32a90() {
   return (neuron0x2a26e70()*-0.159284);
}

double NNfunction_ns_chi04_cL::synapse0x2a32ad0() {
   return (neuron0x2a271b0()*0.0444681);
}

double NNfunction_ns_chi04_cL::synapse0x2a32b10() {
   return (neuron0x2a274f0()*0.0533667);
}

double NNfunction_ns_chi04_cL::synapse0x2a32b50() {
   return (neuron0x2a27830()*0.0364025);
}

double NNfunction_ns_chi04_cL::synapse0x2a32b90() {
   return (neuron0x2a27b70()*-0.0698083);
}

double NNfunction_ns_chi04_cL::synapse0x2a32bd0() {
   return (neuron0x2a27eb0()*-1.18072);
}

double NNfunction_ns_chi04_cL::synapse0x2a32c10() {
   return (neuron0x2a281f0()*-0.0779742);
}

double NNfunction_ns_chi04_cL::synapse0x2a32c50() {
   return (neuron0x2a28530()*-0.130402);
}

double NNfunction_ns_chi04_cL::synapse0x2a32c90() {
   return (neuron0x2a28870()*-0.0879812);
}

double NNfunction_ns_chi04_cL::synapse0x2a32720() {
   return (neuron0x2a28bb0()*-0.0768206);
}

double NNfunction_ns_chi04_cL::synapse0x2a32760() {
   return (neuron0x2a29110()*0.100407);
}

double NNfunction_ns_chi04_cL::synapse0x2a32de0() {
   return (neuron0x2a29330()*0.0949291);
}

double NNfunction_ns_chi04_cL::synapse0x2a32e20() {
   return (neuron0x2a29670()*-0.258688);
}

double NNfunction_ns_chi04_cL::synapse0x2a32e60() {
   return (neuron0x2a299b0()*0.204642);
}

double NNfunction_ns_chi04_cL::synapse0x2a32ea0() {
   return (neuron0x2a29cf0()*0.103992);
}

double NNfunction_ns_chi04_cL::synapse0x2a32ee0() {
   return (neuron0x2a2a030()*-0.0656565);
}

double NNfunction_ns_chi04_cL::synapse0x2a32f20() {
   return (neuron0x2a2a370()*4.30384);
}

double NNfunction_ns_chi04_cL::synapse0x2a332a0() {
   return (neuron0x2a257b0()*-0.00599981);
}

double NNfunction_ns_chi04_cL::synapse0x2a332e0() {
   return (neuron0x2a25af0()*0.024207);
}

double NNfunction_ns_chi04_cL::synapse0x2a33320() {
   return (neuron0x2a25e30()*-0.206126);
}

double NNfunction_ns_chi04_cL::synapse0x2a33360() {
   return (neuron0x2a26170()*-0.0737195);
}

double NNfunction_ns_chi04_cL::synapse0x2a333a0() {
   return (neuron0x2a264b0()*-0.00465137);
}

double NNfunction_ns_chi04_cL::synapse0x2a333e0() {
   return (neuron0x2a267f0()*0.0113064);
}

double NNfunction_ns_chi04_cL::synapse0x2a33420() {
   return (neuron0x2a26b30()*0.0162289);
}

double NNfunction_ns_chi04_cL::synapse0x2a33460() {
   return (neuron0x2a26e70()*-0.0150836);
}

double NNfunction_ns_chi04_cL::synapse0x2a334a0() {
   return (neuron0x2a271b0()*-0.00616889);
}

double NNfunction_ns_chi04_cL::synapse0x2a334e0() {
   return (neuron0x2a274f0()*0.00267136);
}

double NNfunction_ns_chi04_cL::synapse0x2a33520() {
   return (neuron0x2a27830()*0.00766731);
}

double NNfunction_ns_chi04_cL::synapse0x2a33560() {
   return (neuron0x2a27b70()*0.00703214);
}

double NNfunction_ns_chi04_cL::synapse0x2a335a0() {
   return (neuron0x2a27eb0()*-0.969268);
}

double NNfunction_ns_chi04_cL::synapse0x2a335e0() {
   return (neuron0x2a281f0()*0.0141788);
}

double NNfunction_ns_chi04_cL::synapse0x2a33620() {
   return (neuron0x2a28530()*0.00579456);
}

double NNfunction_ns_chi04_cL::synapse0x2a33660() {
   return (neuron0x2a28870()*0.0123711);
}

double NNfunction_ns_chi04_cL::synapse0x2a330f0() {
   return (neuron0x2a28bb0()*0.0086935);
}

double NNfunction_ns_chi04_cL::synapse0x2a33130() {
   return (neuron0x2a29110()*-0.0199505);
}

double NNfunction_ns_chi04_cL::synapse0x2a337b0() {
   return (neuron0x2a29330()*-0.00475723);
}

double NNfunction_ns_chi04_cL::synapse0x2a337f0() {
   return (neuron0x2a29670()*0.0227049);
}

double NNfunction_ns_chi04_cL::synapse0x2a33830() {
   return (neuron0x2a299b0()*0.00111855);
}

double NNfunction_ns_chi04_cL::synapse0x2a33870() {
   return (neuron0x2a29cf0()*-0.00145678);
}

double NNfunction_ns_chi04_cL::synapse0x2a338b0() {
   return (neuron0x2a2a030()*-0.0168096);
}

double NNfunction_ns_chi04_cL::synapse0x2a338f0() {
   return (neuron0x2a2a370()*0.150541);
}

double NNfunction_ns_chi04_cL::synapse0x2a33c70() {
   return (neuron0x2a257b0()*-0.410129);
}

double NNfunction_ns_chi04_cL::synapse0x2a33cb0() {
   return (neuron0x2a25af0()*-1.48283);
}

double NNfunction_ns_chi04_cL::synapse0x2a33cf0() {
   return (neuron0x2a25e30()*-2.85895);
}

double NNfunction_ns_chi04_cL::synapse0x2a33d30() {
   return (neuron0x2a26170()*0.107514);
}

double NNfunction_ns_chi04_cL::synapse0x2a33d70() {
   return (neuron0x2a264b0()*-0.0578688);
}

double NNfunction_ns_chi04_cL::synapse0x2a33db0() {
   return (neuron0x2a267f0()*-0.365955);
}

double NNfunction_ns_chi04_cL::synapse0x2a33df0() {
   return (neuron0x2a26b30()*-0.116462);
}

double NNfunction_ns_chi04_cL::synapse0x2a33e30() {
   return (neuron0x2a26e70()*-0.303786);
}

double NNfunction_ns_chi04_cL::synapse0x2a33e70() {
   return (neuron0x2a271b0()*-0.0462046);
}

double NNfunction_ns_chi04_cL::synapse0x2a33eb0() {
   return (neuron0x2a274f0()*0.107569);
}

double NNfunction_ns_chi04_cL::synapse0x2a33ef0() {
   return (neuron0x2a27830()*0.0903902);
}

double NNfunction_ns_chi04_cL::synapse0x2a33f30() {
   return (neuron0x2a27b70()*-0.150935);
}

double NNfunction_ns_chi04_cL::synapse0x2a33f70() {
   return (neuron0x2a27eb0()*-1.56832);
}

double NNfunction_ns_chi04_cL::synapse0x2a33fb0() {
   return (neuron0x2a281f0()*0.334719);
}

double NNfunction_ns_chi04_cL::synapse0x2a33ff0() {
   return (neuron0x2a28530()*0.0593776);
}

double NNfunction_ns_chi04_cL::synapse0x2a34030() {
   return (neuron0x2a28870()*-0.388358);
}

double NNfunction_ns_chi04_cL::synapse0x2a33ac0() {
   return (neuron0x2a28bb0()*0.332462);
}

double NNfunction_ns_chi04_cL::synapse0x2a33b00() {
   return (neuron0x2a29110()*0.0538368);
}

double NNfunction_ns_chi04_cL::synapse0x2a34180() {
   return (neuron0x2a29330()*0.0682599);
}

double NNfunction_ns_chi04_cL::synapse0x2a341c0() {
   return (neuron0x2a29670()*-0.134578);
}

double NNfunction_ns_chi04_cL::synapse0x2a34200() {
   return (neuron0x2a299b0()*0.245394);
}

double NNfunction_ns_chi04_cL::synapse0x2a34240() {
   return (neuron0x2a29cf0()*-0.00992321);
}

double NNfunction_ns_chi04_cL::synapse0x2a34280() {
   return (neuron0x2a2a030()*0.0916137);
}

double NNfunction_ns_chi04_cL::synapse0x2a342c0() {
   return (neuron0x2a2a370()*1.32299);
}

double NNfunction_ns_chi04_cL::synapse0x2a34640() {
   return (neuron0x2a257b0()*1.23998);
}

double NNfunction_ns_chi04_cL::synapse0x2a259d0() {
   return (neuron0x2a25af0()*-0.416206);
}

double NNfunction_ns_chi04_cL::synapse0x2a25a10() {
   return (neuron0x2a25e30()*2.10957);
}

double NNfunction_ns_chi04_cL::synapse0x2a25d10() {
   return (neuron0x2a26170()*-0.82427);
}

double NNfunction_ns_chi04_cL::synapse0x2a25d50() {
   return (neuron0x2a264b0()*1.77683);
}

double NNfunction_ns_chi04_cL::synapse0x2a26050() {
   return (neuron0x2a267f0()*-0.136009);
}

double NNfunction_ns_chi04_cL::synapse0x2a26090() {
   return (neuron0x2a26b30()*-0.064775);
}

double NNfunction_ns_chi04_cL::synapse0x2a26390() {
   return (neuron0x2a26e70()*-0.348552);
}

double NNfunction_ns_chi04_cL::synapse0x2a263d0() {
   return (neuron0x2a271b0()*0.0949162);
}

double NNfunction_ns_chi04_cL::synapse0x2a266d0() {
   return (neuron0x2a274f0()*0.275548);
}

double NNfunction_ns_chi04_cL::synapse0x2a26710() {
   return (neuron0x2a27830()*0.0664909);
}

double NNfunction_ns_chi04_cL::synapse0x2a26a10() {
   return (neuron0x2a27b70()*1.01616);
}

double NNfunction_ns_chi04_cL::synapse0x2a26a50() {
   return (neuron0x2a27eb0()*-0.309239);
}

double NNfunction_ns_chi04_cL::synapse0x2a26d50() {
   return (neuron0x2a281f0()*-0.701988);
}

double NNfunction_ns_chi04_cL::synapse0x2a26d90() {
   return (neuron0x2a28530()*1.48844);
}

double NNfunction_ns_chi04_cL::synapse0x2a27090() {
   return (neuron0x2a28870()*-0.173155);
}

double NNfunction_ns_chi04_cL::synapse0x2a270d0() {
   return (neuron0x2a28bb0()*-0.223919);
}

double NNfunction_ns_chi04_cL::synapse0x2a273d0() {
   return (neuron0x2a29110()*0.168286);
}

double NNfunction_ns_chi04_cL::synapse0x2a27410() {
   return (neuron0x2a29330()*-0.22966);
}

double NNfunction_ns_chi04_cL::synapse0x2a27710() {
   return (neuron0x2a29670()*-0.862484);
}

double NNfunction_ns_chi04_cL::synapse0x2a27750() {
   return (neuron0x2a299b0()*0.617689);
}

double NNfunction_ns_chi04_cL::synapse0x2a27a50() {
   return (neuron0x2a29cf0()*0.819978);
}

double NNfunction_ns_chi04_cL::synapse0x2a27a90() {
   return (neuron0x2a2a030()*-0.0614058);
}

double NNfunction_ns_chi04_cL::synapse0x2a27d90() {
   return (neuron0x2a2a370()*-0.374951);
}

double NNfunction_ns_chi04_cL::synapse0x2a27dd0() {
   return (neuron0x2a257b0()*-0.589262);
}

double NNfunction_ns_chi04_cL::synapse0x2a28a90() {
   return (neuron0x2a25af0()*2.13808);
}

double NNfunction_ns_chi04_cL::synapse0x2a28ad0() {
   return (neuron0x2a25e30()*0.962537);
}

double NNfunction_ns_chi04_cL::synapse0x2a34490() {
   return (neuron0x2a26170()*-0.135773);
}

double NNfunction_ns_chi04_cL::synapse0x2a344d0() {
   return (neuron0x2a264b0()*0.844439);
}

double NNfunction_ns_chi04_cL::synapse0x2a28dd0() {
   return (neuron0x2a267f0()*0.322259);
}

double NNfunction_ns_chi04_cL::synapse0x2a28e10() {
   return (neuron0x2a26b30()*0.307213);
}

double NNfunction_ns_chi04_cL::synapse0x27e0830() {
   return (neuron0x2a26e70()*0.459299);
}

double NNfunction_ns_chi04_cL::synapse0x27e0870() {
   return (neuron0x2a271b0()*0.384282);
}

double NNfunction_ns_chi04_cL::synapse0x2a29550() {
   return (neuron0x2a274f0()*-0.233458);
}

double NNfunction_ns_chi04_cL::synapse0x2a29590() {
   return (neuron0x2a27830()*-0.450124);
}

double NNfunction_ns_chi04_cL::synapse0x2a29890() {
   return (neuron0x2a27b70()*-0.0195304);
}

double NNfunction_ns_chi04_cL::synapse0x2a298d0() {
   return (neuron0x2a27eb0()*-1.81166);
}

double NNfunction_ns_chi04_cL::synapse0x2a29bd0() {
   return (neuron0x2a281f0()*0.201799);
}

double NNfunction_ns_chi04_cL::synapse0x2a29c10() {
   return (neuron0x2a28530()*-0.270814);
}

double NNfunction_ns_chi04_cL::synapse0x2a29f10() {
   return (neuron0x2a28870()*0.342692);
}

double NNfunction_ns_chi04_cL::synapse0x2a29f50() {
   return (neuron0x2a28bb0()*0.499345);
}

double NNfunction_ns_chi04_cL::synapse0x2a2a250() {
   return (neuron0x2a29110()*1.01914);
}

double NNfunction_ns_chi04_cL::synapse0x2a2a290() {
   return (neuron0x2a29330()*-0.0468454);
}

double NNfunction_ns_chi04_cL::synapse0x2a2a590() {
   return (neuron0x2a29670()*0.19582);
}

double NNfunction_ns_chi04_cL::synapse0x2a2a5d0() {
   return (neuron0x2a299b0()*-0.0942904);
}

double NNfunction_ns_chi04_cL::synapse0x2a280d0() {
   return (neuron0x2a29cf0()*-0.621277);
}

double NNfunction_ns_chi04_cL::synapse0x2a28110() {
   return (neuron0x2a2a030()*0.320747);
}

double NNfunction_ns_chi04_cL::synapse0x2a363b0() {
   return (neuron0x2a2a370()*0.354919);
}

double NNfunction_ns_chi04_cL::synapse0x2a36730() {
   return (neuron0x2a257b0()*-0.116415);
}

double NNfunction_ns_chi04_cL::synapse0x2a36770() {
   return (neuron0x2a25af0()*-3.59019);
}

double NNfunction_ns_chi04_cL::synapse0x2a367b0() {
   return (neuron0x2a25e30()*-4.27062);
}

double NNfunction_ns_chi04_cL::synapse0x2a367f0() {
   return (neuron0x2a26170()*0.134732);
}

double NNfunction_ns_chi04_cL::synapse0x2a36830() {
   return (neuron0x2a264b0()*0.122527);
}

double NNfunction_ns_chi04_cL::synapse0x2a36870() {
   return (neuron0x2a267f0()*0.202892);
}

double NNfunction_ns_chi04_cL::synapse0x2a368b0() {
   return (neuron0x2a26b30()*0.0828175);
}

double NNfunction_ns_chi04_cL::synapse0x2a368f0() {
   return (neuron0x2a26e70()*-0.008296);
}

double NNfunction_ns_chi04_cL::synapse0x2a36930() {
   return (neuron0x2a271b0()*0.188031);
}

double NNfunction_ns_chi04_cL::synapse0x2a36970() {
   return (neuron0x2a274f0()*0.0933256);
}

double NNfunction_ns_chi04_cL::synapse0x2a369b0() {
   return (neuron0x2a27830()*0.184333);
}

double NNfunction_ns_chi04_cL::synapse0x2a369f0() {
   return (neuron0x2a27b70()*-0.0550499);
}

double NNfunction_ns_chi04_cL::synapse0x2a36a30() {
   return (neuron0x2a27eb0()*-0.113808);
}

double NNfunction_ns_chi04_cL::synapse0x2a36a70() {
   return (neuron0x2a281f0()*0.00113628);
}

double NNfunction_ns_chi04_cL::synapse0x2a36ab0() {
   return (neuron0x2a28530()*0.180326);
}

double NNfunction_ns_chi04_cL::synapse0x2a36af0() {
   return (neuron0x2a28870()*-0.143999);
}

double NNfunction_ns_chi04_cL::synapse0x2a36580() {
   return (neuron0x2a28bb0()*0.167967);
}

double NNfunction_ns_chi04_cL::synapse0x2a365c0() {
   return (neuron0x2a29110()*-0.0502134);
}

double NNfunction_ns_chi04_cL::synapse0x2a36c40() {
   return (neuron0x2a29330()*0.0952577);
}

double NNfunction_ns_chi04_cL::synapse0x2a36c80() {
   return (neuron0x2a29670()*-0.131781);
}

double NNfunction_ns_chi04_cL::synapse0x2a36cc0() {
   return (neuron0x2a299b0()*-0.0646772);
}

double NNfunction_ns_chi04_cL::synapse0x2a36d00() {
   return (neuron0x2a29cf0()*0.0832122);
}

double NNfunction_ns_chi04_cL::synapse0x2a36d40() {
   return (neuron0x2a2a030()*-0.246143);
}

double NNfunction_ns_chi04_cL::synapse0x2a36d80() {
   return (neuron0x2a2a370()*4.2763);
}

double NNfunction_ns_chi04_cL::synapse0x2a37100() {
   return (neuron0x2a257b0()*-0.0246788);
}

double NNfunction_ns_chi04_cL::synapse0x2a37140() {
   return (neuron0x2a25af0()*10.4647);
}

double NNfunction_ns_chi04_cL::synapse0x2a37180() {
   return (neuron0x2a25e30()*-12.1516);
}

double NNfunction_ns_chi04_cL::synapse0x2a371c0() {
   return (neuron0x2a26170()*0.0076434);
}

double NNfunction_ns_chi04_cL::synapse0x2a37200() {
   return (neuron0x2a264b0()*-0.101563);
}

double NNfunction_ns_chi04_cL::synapse0x2a37240() {
   return (neuron0x2a267f0()*0.0231959);
}

double NNfunction_ns_chi04_cL::synapse0x2a37280() {
   return (neuron0x2a26b30()*-0.00470791);
}

double NNfunction_ns_chi04_cL::synapse0x2a372c0() {
   return (neuron0x2a26e70()*-0.0696926);
}

double NNfunction_ns_chi04_cL::synapse0x2a37300() {
   return (neuron0x2a271b0()*-0.0023854);
}

double NNfunction_ns_chi04_cL::synapse0x2a37340() {
   return (neuron0x2a274f0()*0.0113852);
}

double NNfunction_ns_chi04_cL::synapse0x2a37380() {
   return (neuron0x2a27830()*0.0477639);
}

double NNfunction_ns_chi04_cL::synapse0x2a373c0() {
   return (neuron0x2a27b70()*-0.0906408);
}

double NNfunction_ns_chi04_cL::synapse0x2a37400() {
   return (neuron0x2a27eb0()*0.0702615);
}

double NNfunction_ns_chi04_cL::synapse0x2a37440() {
   return (neuron0x2a281f0()*-0.00082519);
}

double NNfunction_ns_chi04_cL::synapse0x2a37480() {
   return (neuron0x2a28530()*0.00841623);
}

double NNfunction_ns_chi04_cL::synapse0x2a374c0() {
   return (neuron0x2a28870()*-0.00707051);
}

double NNfunction_ns_chi04_cL::synapse0x2a36f50() {
   return (neuron0x2a28bb0()*0.0236796);
}

double NNfunction_ns_chi04_cL::synapse0x2a36f90() {
   return (neuron0x2a29110()*0.00122414);
}

double NNfunction_ns_chi04_cL::synapse0x2a37610() {
   return (neuron0x2a29330()*0.0555739);
}

double NNfunction_ns_chi04_cL::synapse0x2a37650() {
   return (neuron0x2a29670()*0.0523182);
}

double NNfunction_ns_chi04_cL::synapse0x2a37690() {
   return (neuron0x2a299b0()*0.0226256);
}

double NNfunction_ns_chi04_cL::synapse0x2a376d0() {
   return (neuron0x2a29cf0()*-0.0106434);
}

double NNfunction_ns_chi04_cL::synapse0x2a37710() {
   return (neuron0x2a2a030()*-0.0239209);
}

double NNfunction_ns_chi04_cL::synapse0x2a37750() {
   return (neuron0x2a2a370()*-0.0923838);
}

double NNfunction_ns_chi04_cL::synapse0x2a37ad0() {
   return (neuron0x2a257b0()*-0.189002);
}

double NNfunction_ns_chi04_cL::synapse0x2a37b10() {
   return (neuron0x2a25af0()*0.912885);
}

double NNfunction_ns_chi04_cL::synapse0x2a37b50() {
   return (neuron0x2a25e30()*-0.759449);
}

double NNfunction_ns_chi04_cL::synapse0x2a37b90() {
   return (neuron0x2a26170()*0.909157);
}

double NNfunction_ns_chi04_cL::synapse0x2a37bd0() {
   return (neuron0x2a264b0()*-0.26279);
}

double NNfunction_ns_chi04_cL::synapse0x2a37c10() {
   return (neuron0x2a267f0()*-0.162323);
}

double NNfunction_ns_chi04_cL::synapse0x2a37c50() {
   return (neuron0x2a26b30()*-0.127058);
}

double NNfunction_ns_chi04_cL::synapse0x2a37c90() {
   return (neuron0x2a26e70()*0.604822);
}

double NNfunction_ns_chi04_cL::synapse0x2a37cd0() {
   return (neuron0x2a271b0()*0.0282984);
}

double NNfunction_ns_chi04_cL::synapse0x2a37d10() {
   return (neuron0x2a274f0()*0.0993769);
}

double NNfunction_ns_chi04_cL::synapse0x2a37d50() {
   return (neuron0x2a27830()*0.392924);
}

double NNfunction_ns_chi04_cL::synapse0x2a37d90() {
   return (neuron0x2a27b70()*-0.365945);
}

double NNfunction_ns_chi04_cL::synapse0x2a37dd0() {
   return (neuron0x2a27eb0()*-1.04259);
}

double NNfunction_ns_chi04_cL::synapse0x2a37e10() {
   return (neuron0x2a281f0()*-0.214704);
}

double NNfunction_ns_chi04_cL::synapse0x2a37e50() {
   return (neuron0x2a28530()*1.48954);
}

double NNfunction_ns_chi04_cL::synapse0x2a37e90() {
   return (neuron0x2a28870()*-0.365588);
}

double NNfunction_ns_chi04_cL::synapse0x2a37920() {
   return (neuron0x2a28bb0()*1.05168);
}

double NNfunction_ns_chi04_cL::synapse0x2a37960() {
   return (neuron0x2a29110()*-0.067871);
}

double NNfunction_ns_chi04_cL::synapse0x2a37fe0() {
   return (neuron0x2a29330()*-0.559836);
}

double NNfunction_ns_chi04_cL::synapse0x2a38020() {
   return (neuron0x2a29670()*0.0147517);
}

double NNfunction_ns_chi04_cL::synapse0x2a38060() {
   return (neuron0x2a299b0()*-0.284093);
}

double NNfunction_ns_chi04_cL::synapse0x2a380a0() {
   return (neuron0x2a29cf0()*-0.18227);
}

double NNfunction_ns_chi04_cL::synapse0x2a380e0() {
   return (neuron0x2a2a030()*0.461617);
}

double NNfunction_ns_chi04_cL::synapse0x2a38120() {
   return (neuron0x2a2a370()*0.502023);
}

double NNfunction_ns_chi04_cL::synapse0x2a384a0() {
   return (neuron0x2a257b0()*-0.0092864);
}

double NNfunction_ns_chi04_cL::synapse0x2a384e0() {
   return (neuron0x2a25af0()*0.0156826);
}

double NNfunction_ns_chi04_cL::synapse0x2a38520() {
   return (neuron0x2a25e30()*0.0522496);
}

double NNfunction_ns_chi04_cL::synapse0x2a38560() {
   return (neuron0x2a26170()*2.30582);
}

double NNfunction_ns_chi04_cL::synapse0x2a385a0() {
   return (neuron0x2a264b0()*-0.00774139);
}

double NNfunction_ns_chi04_cL::synapse0x2a385e0() {
   return (neuron0x2a267f0()*0.00710859);
}

double NNfunction_ns_chi04_cL::synapse0x2a38620() {
   return (neuron0x2a26b30()*0.000301347);
}

double NNfunction_ns_chi04_cL::synapse0x2a38660() {
   return (neuron0x2a26e70()*0.00631304);
}

double NNfunction_ns_chi04_cL::synapse0x2a386a0() {
   return (neuron0x2a271b0()*0.000324036);
}

double NNfunction_ns_chi04_cL::synapse0x2a386e0() {
   return (neuron0x2a274f0()*0.00690965);
}

double NNfunction_ns_chi04_cL::synapse0x2a38720() {
   return (neuron0x2a27830()*0.0135211);
}

double NNfunction_ns_chi04_cL::synapse0x2a38760() {
   return (neuron0x2a27b70()*0.0160115);
}

double NNfunction_ns_chi04_cL::synapse0x2a387a0() {
   return (neuron0x2a27eb0()*0.285791);
}

double NNfunction_ns_chi04_cL::synapse0x2a387e0() {
   return (neuron0x2a281f0()*0.00453889);
}

double NNfunction_ns_chi04_cL::synapse0x2a38820() {
   return (neuron0x2a28530()*-0.00985147);
}

double NNfunction_ns_chi04_cL::synapse0x2a38860() {
   return (neuron0x2a28870()*-0.00171664);
}

double NNfunction_ns_chi04_cL::synapse0x2a382f0() {
   return (neuron0x2a28bb0()*0.00337038);
}

double NNfunction_ns_chi04_cL::synapse0x2a38330() {
   return (neuron0x2a29110()*-0.0195315);
}

double NNfunction_ns_chi04_cL::synapse0x2a389b0() {
   return (neuron0x2a29330()*-0.00129719);
}

double NNfunction_ns_chi04_cL::synapse0x2a389f0() {
   return (neuron0x2a29670()*0.0160131);
}

double NNfunction_ns_chi04_cL::synapse0x2a38a30() {
   return (neuron0x2a299b0()*-0.00125566);
}

double NNfunction_ns_chi04_cL::synapse0x2a38a70() {
   return (neuron0x2a29cf0()*-0.00524806);
}

double NNfunction_ns_chi04_cL::synapse0x2a38ab0() {
   return (neuron0x2a2a030()*0.00167492);
}

double NNfunction_ns_chi04_cL::synapse0x2a38af0() {
   return (neuron0x2a2a370()*0.0246909);
}

double NNfunction_ns_chi04_cL::synapse0x2a38e70() {
   return (neuron0x2a257b0()*0.679345);
}

double NNfunction_ns_chi04_cL::synapse0x2a38eb0() {
   return (neuron0x2a25af0()*1.03349);
}

double NNfunction_ns_chi04_cL::synapse0x2a38ef0() {
   return (neuron0x2a25e30()*1.75957);
}

double NNfunction_ns_chi04_cL::synapse0x2a38f30() {
   return (neuron0x2a26170()*0.584286);
}

double NNfunction_ns_chi04_cL::synapse0x2a38f70() {
   return (neuron0x2a264b0()*0.176071);
}

double NNfunction_ns_chi04_cL::synapse0x2a38fb0() {
   return (neuron0x2a267f0()*0.719689);
}

double NNfunction_ns_chi04_cL::synapse0x2a38ff0() {
   return (neuron0x2a26b30()*-0.297074);
}

double NNfunction_ns_chi04_cL::synapse0x2a39030() {
   return (neuron0x2a26e70()*0.399423);
}

double NNfunction_ns_chi04_cL::synapse0x2a39070() {
   return (neuron0x2a271b0()*-0.205981);
}

double NNfunction_ns_chi04_cL::synapse0x2a31230() {
   return (neuron0x2a274f0()*0.265695);
}

double NNfunction_ns_chi04_cL::synapse0x2a31270() {
   return (neuron0x2a27830()*-0.20317);
}

double NNfunction_ns_chi04_cL::synapse0x2a312b0() {
   return (neuron0x2a27b70()*-0.0476822);
}

double NNfunction_ns_chi04_cL::synapse0x2a312f0() {
   return (neuron0x2a27eb0()*0.742827);
}

double NNfunction_ns_chi04_cL::synapse0x2a31330() {
   return (neuron0x2a281f0()*-0.0247032);
}

double NNfunction_ns_chi04_cL::synapse0x2a31370() {
   return (neuron0x2a28530()*0.0606698);
}

double NNfunction_ns_chi04_cL::synapse0x2a313b0() {
   return (neuron0x2a28870()*-0.356966);
}

double NNfunction_ns_chi04_cL::synapse0x2a38cc0() {
   return (neuron0x2a28bb0()*0.211339);
}

double NNfunction_ns_chi04_cL::synapse0x2a38d00() {
   return (neuron0x2a29110()*0.213023);
}

double NNfunction_ns_chi04_cL::synapse0x2a31500() {
   return (neuron0x2a29330()*-0.182072);
}

double NNfunction_ns_chi04_cL::synapse0x2a31540() {
   return (neuron0x2a29670()*-0.338753);
}

double NNfunction_ns_chi04_cL::synapse0x2a31580() {
   return (neuron0x2a299b0()*-0.015868);
}

double NNfunction_ns_chi04_cL::synapse0x2a315c0() {
   return (neuron0x2a29cf0()*0.228099);
}

double NNfunction_ns_chi04_cL::synapse0x2a31600() {
   return (neuron0x2a2a030()*-0.309232);
}

double NNfunction_ns_chi04_cL::synapse0x2a31640() {
   return (neuron0x2a2a370()*-2.10484);
}

double NNfunction_ns_chi04_cL::synapse0x2a319c0() {
   return (neuron0x2a257b0()*0.226412);
}

double NNfunction_ns_chi04_cL::synapse0x2a31a00() {
   return (neuron0x2a25af0()*-0.0205009);
}

double NNfunction_ns_chi04_cL::synapse0x2a31a40() {
   return (neuron0x2a25e30()*-0.234532);
}

double NNfunction_ns_chi04_cL::synapse0x2a31a80() {
   return (neuron0x2a26170()*-0.537321);
}

double NNfunction_ns_chi04_cL::synapse0x2a31ac0() {
   return (neuron0x2a264b0()*-1.1851);
}

double NNfunction_ns_chi04_cL::synapse0x2a31b00() {
   return (neuron0x2a267f0()*0.284641);
}

double NNfunction_ns_chi04_cL::synapse0x2a31b40() {
   return (neuron0x2a26b30()*0.634877);
}

double NNfunction_ns_chi04_cL::synapse0x2a31b80() {
   return (neuron0x2a26e70()*0.103493);
}

double NNfunction_ns_chi04_cL::synapse0x2a31bc0() {
   return (neuron0x2a271b0()*-1.19205);
}

double NNfunction_ns_chi04_cL::synapse0x2a31c00() {
   return (neuron0x2a274f0()*0.341405);
}

double NNfunction_ns_chi04_cL::synapse0x2a31c40() {
   return (neuron0x2a27830()*0.431935);
}

double NNfunction_ns_chi04_cL::synapse0x2a31c80() {
   return (neuron0x2a27b70()*-1.04289);
}

double NNfunction_ns_chi04_cL::synapse0x2a31cc0() {
   return (neuron0x2a27eb0()*-0.624618);
}

double NNfunction_ns_chi04_cL::synapse0x2a31d00() {
   return (neuron0x2a281f0()*-1.07939);
}

double NNfunction_ns_chi04_cL::synapse0x2a31d40() {
   return (neuron0x2a28530()*1.03167);
}

double NNfunction_ns_chi04_cL::synapse0x2a31d80() {
   return (neuron0x2a28870()*-1.27802);
}

double NNfunction_ns_chi04_cL::synapse0x2a31810() {
   return (neuron0x2a28bb0()*-0.741656);
}

double NNfunction_ns_chi04_cL::synapse0x2a31850() {
   return (neuron0x2a29110()*-0.28429);
}

double NNfunction_ns_chi04_cL::synapse0x2a31ed0() {
   return (neuron0x2a29330()*0.432771);
}

double NNfunction_ns_chi04_cL::synapse0x2a31f10() {
   return (neuron0x2a29670()*-1.02626);
}

double NNfunction_ns_chi04_cL::synapse0x2a31f50() {
   return (neuron0x2a299b0()*0.908113);
}

double NNfunction_ns_chi04_cL::synapse0x2a31f90() {
   return (neuron0x2a29cf0()*0.666467);
}

double NNfunction_ns_chi04_cL::synapse0x2a31fd0() {
   return (neuron0x2a2a030()*0.17821);
}

double NNfunction_ns_chi04_cL::synapse0x2a32010() {
   return (neuron0x2a2a370()*0.532096);
}

double NNfunction_ns_chi04_cL::synapse0x2a321e0() {
   return (neuron0x2a257b0()*-0.00805802);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b270() {
   return (neuron0x2a25af0()*0.340554);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b2b0() {
   return (neuron0x2a25e30()*-2.12248);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b2f0() {
   return (neuron0x2a26170()*0.0332177);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b330() {
   return (neuron0x2a264b0()*0.0180163);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b370() {
   return (neuron0x2a267f0()*0.00475473);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b3b0() {
   return (neuron0x2a26b30()*-0.00999461);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b3f0() {
   return (neuron0x2a26e70()*-0.00131358);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b430() {
   return (neuron0x2a271b0()*0.00109964);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b470() {
   return (neuron0x2a274f0()*-0.0224579);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b4b0() {
   return (neuron0x2a27830()*-0.0127275);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b4f0() {
   return (neuron0x2a27b70()*-0.0129825);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b530() {
   return (neuron0x2a27eb0()*0.0559215);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b570() {
   return (neuron0x2a281f0()*0.00491606);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b5b0() {
   return (neuron0x2a28530()*0.0112583);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b5f0() {
   return (neuron0x2a28870()*-0.00844502);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b0c0() {
   return (neuron0x2a28bb0()*0.000688089);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b100() {
   return (neuron0x2a29110()*-0.00496075);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b740() {
   return (neuron0x2a29330()*-0.000713014);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b780() {
   return (neuron0x2a29670()*-0.0048016);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b7c0() {
   return (neuron0x2a299b0()*0.00702232);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b800() {
   return (neuron0x2a29cf0()*0.021389);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b840() {
   return (neuron0x2a2a030()*-0.0106655);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b880() {
   return (neuron0x2a2a370()*1.43537);
}

double NNfunction_ns_chi04_cL::synapse0x2a3bc00() {
   return (neuron0x2a257b0()*0.663492);
}

double NNfunction_ns_chi04_cL::synapse0x2a3bc40() {
   return (neuron0x2a25af0()*-1.50441);
}

double NNfunction_ns_chi04_cL::synapse0x2a3bc80() {
   return (neuron0x2a25e30()*-0.476787);
}

double NNfunction_ns_chi04_cL::synapse0x2a3bcc0() {
   return (neuron0x2a26170()*0.271263);
}

double NNfunction_ns_chi04_cL::synapse0x2a3bd00() {
   return (neuron0x2a264b0()*0.518297);
}

double NNfunction_ns_chi04_cL::synapse0x2a3bd40() {
   return (neuron0x2a267f0()*-0.247583);
}

double NNfunction_ns_chi04_cL::synapse0x2a3bd80() {
   return (neuron0x2a26b30()*-1.59727);
}

double NNfunction_ns_chi04_cL::synapse0x2a3bdc0() {
   return (neuron0x2a26e70()*-0.0165831);
}

double NNfunction_ns_chi04_cL::synapse0x2a3be00() {
   return (neuron0x2a271b0()*0.345134);
}

double NNfunction_ns_chi04_cL::synapse0x2a3be40() {
   return (neuron0x2a274f0()*0.80085);
}

double NNfunction_ns_chi04_cL::synapse0x2a3be80() {
   return (neuron0x2a27830()*-0.0707739);
}

double NNfunction_ns_chi04_cL::synapse0x2a3bec0() {
   return (neuron0x2a27b70()*-0.647142);
}

double NNfunction_ns_chi04_cL::synapse0x2a3bf00() {
   return (neuron0x2a27eb0()*0.0314607);
}

double NNfunction_ns_chi04_cL::synapse0x2a3bf40() {
   return (neuron0x2a281f0()*-0.103833);
}

double NNfunction_ns_chi04_cL::synapse0x2a3bf80() {
   return (neuron0x2a28530()*0.0963561);
}

double NNfunction_ns_chi04_cL::synapse0x2a3bfc0() {
   return (neuron0x2a28870()*0.786978);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ba50() {
   return (neuron0x2a28bb0()*-0.921219);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ba90() {
   return (neuron0x2a29110()*0.513326);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c110() {
   return (neuron0x2a29330()*0.840034);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c150() {
   return (neuron0x2a29670()*0.670517);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c190() {
   return (neuron0x2a299b0()*-0.18832);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c1d0() {
   return (neuron0x2a29cf0()*0.0495037);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c210() {
   return (neuron0x2a2a030()*-1.21351);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c250() {
   return (neuron0x2a2a370()*1.46107);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c5d0() {
   return (neuron0x2a257b0()*-0.0758045);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c610() {
   return (neuron0x2a25af0()*-0.862369);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c650() {
   return (neuron0x2a25e30()*0.753769);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c690() {
   return (neuron0x2a26170()*-0.00887206);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c6d0() {
   return (neuron0x2a264b0()*0.106452);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c710() {
   return (neuron0x2a267f0()*-0.013274);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c750() {
   return (neuron0x2a26b30()*-0.0134138);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c790() {
   return (neuron0x2a26e70()*-0.0076056);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c7d0() {
   return (neuron0x2a271b0()*0.0503729);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c810() {
   return (neuron0x2a274f0()*-0.0253764);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c850() {
   return (neuron0x2a27830()*-0.0198798);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c890() {
   return (neuron0x2a27b70()*0.0081269);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c8d0() {
   return (neuron0x2a27eb0()*0.347476);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c910() {
   return (neuron0x2a281f0()*0.0221111);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c950() {
   return (neuron0x2a28530()*-0.00130348);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c990() {
   return (neuron0x2a28870()*-0.0893365);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c420() {
   return (neuron0x2a28bb0()*-0.0171358);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c460() {
   return (neuron0x2a29110()*0.026214);
}

double NNfunction_ns_chi04_cL::synapse0x2a3cae0() {
   return (neuron0x2a29330()*0.0115893);
}

double NNfunction_ns_chi04_cL::synapse0x2a3cb20() {
   return (neuron0x2a29670()*0.00328091);
}

double NNfunction_ns_chi04_cL::synapse0x2a3cb60() {
   return (neuron0x2a299b0()*0.00761981);
}

double NNfunction_ns_chi04_cL::synapse0x2a3cba0() {
   return (neuron0x2a29cf0()*0.00690486);
}

double NNfunction_ns_chi04_cL::synapse0x2a3cbe0() {
   return (neuron0x2a2a030()*-0.0295502);
}

double NNfunction_ns_chi04_cL::synapse0x2a3cc20() {
   return (neuron0x2a2a370()*0.921441);
}

double NNfunction_ns_chi04_cL::synapse0x2a3cfa0() {
   return (neuron0x2a257b0()*0.594168);
}

double NNfunction_ns_chi04_cL::synapse0x2a3cfe0() {
   return (neuron0x2a25af0()*1.01215);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d020() {
   return (neuron0x2a25e30()*-0.359435);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d060() {
   return (neuron0x2a26170()*-0.927031);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d0a0() {
   return (neuron0x2a264b0()*1.10245);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d0e0() {
   return (neuron0x2a267f0()*0.53027);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d120() {
   return (neuron0x2a26b30()*-0.656164);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d160() {
   return (neuron0x2a26e70()*0.699389);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d1a0() {
   return (neuron0x2a271b0()*0.694176);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d1e0() {
   return (neuron0x2a274f0()*0.0832464);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d220() {
   return (neuron0x2a27830()*-1.30993);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d260() {
   return (neuron0x2a27b70()*1.01607);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d2a0() {
   return (neuron0x2a27eb0()*-0.750587);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d2e0() {
   return (neuron0x2a281f0()*-0.329852);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d320() {
   return (neuron0x2a28530()*-0.120389);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d360() {
   return (neuron0x2a28870()*-0.625955);
}

double NNfunction_ns_chi04_cL::synapse0x2a3cdf0() {
   return (neuron0x2a28bb0()*-0.0805381);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ce30() {
   return (neuron0x2a29110()*-0.188745);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d4b0() {
   return (neuron0x2a29330()*-0.54796);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d4f0() {
   return (neuron0x2a29670()*0.207826);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d530() {
   return (neuron0x2a299b0()*1.10021);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d570() {
   return (neuron0x2a29cf0()*-0.452832);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d5b0() {
   return (neuron0x2a2a030()*-0.866554);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d5f0() {
   return (neuron0x2a2a370()*1.38196);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d970() {
   return (neuron0x2a257b0()*-0.0115911);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d9b0() {
   return (neuron0x2a25af0()*3.50143);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d9f0() {
   return (neuron0x2a25e30()*4.76855);
}

double NNfunction_ns_chi04_cL::synapse0x2a3da30() {
   return (neuron0x2a26170()*-0.0227471);
}

double NNfunction_ns_chi04_cL::synapse0x2a3da70() {
   return (neuron0x2a264b0()*0.0478155);
}

double NNfunction_ns_chi04_cL::synapse0x2a3dab0() {
   return (neuron0x2a267f0()*0.0360213);
}

double NNfunction_ns_chi04_cL::synapse0x2a3daf0() {
   return (neuron0x2a26b30()*-0.0419514);
}

double NNfunction_ns_chi04_cL::synapse0x2a3db30() {
   return (neuron0x2a26e70()*0.107743);
}

double NNfunction_ns_chi04_cL::synapse0x2a3db70() {
   return (neuron0x2a271b0()*-0.0577567);
}

double NNfunction_ns_chi04_cL::synapse0x2a3dbb0() {
   return (neuron0x2a274f0()*-0.00726034);
}

double NNfunction_ns_chi04_cL::synapse0x2a3dbf0() {
   return (neuron0x2a27830()*-0.0316103);
}

double NNfunction_ns_chi04_cL::synapse0x2a3dc30() {
   return (neuron0x2a27b70()*0.0302495);
}

double NNfunction_ns_chi04_cL::synapse0x2a3dc70() {
   return (neuron0x2a27eb0()*0.439481);
}

double NNfunction_ns_chi04_cL::synapse0x2a3dcb0() {
   return (neuron0x2a281f0()*0.0484752);
}

double NNfunction_ns_chi04_cL::synapse0x2a3dcf0() {
   return (neuron0x2a28530()*-0.0306018);
}

double NNfunction_ns_chi04_cL::synapse0x2a3dd30() {
   return (neuron0x2a28870()*-0.00856399);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d7c0() {
   return (neuron0x2a28bb0()*0.0357242);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d800() {
   return (neuron0x2a29110()*0.0567593);
}

double NNfunction_ns_chi04_cL::synapse0x2a3de80() {
   return (neuron0x2a29330()*-0.000559187);
}

double NNfunction_ns_chi04_cL::synapse0x2a3dec0() {
   return (neuron0x2a29670()*0.0138964);
}

double NNfunction_ns_chi04_cL::synapse0x2a3df00() {
   return (neuron0x2a299b0()*0.016418);
}

double NNfunction_ns_chi04_cL::synapse0x2a3df40() {
   return (neuron0x2a29cf0()*0.0221893);
}

double NNfunction_ns_chi04_cL::synapse0x2a3df80() {
   return (neuron0x2a2a030()*0.0173813);
}

double NNfunction_ns_chi04_cL::synapse0x2a3dfc0() {
   return (neuron0x2a2a370()*0.0619061);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e340() {
   return (neuron0x2a257b0()*0.00722873);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e380() {
   return (neuron0x2a25af0()*0.00466041);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e3c0() {
   return (neuron0x2a25e30()*-0.100025);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e400() {
   return (neuron0x2a26170()*-0.72581);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e440() {
   return (neuron0x2a264b0()*0.0047509);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e480() {
   return (neuron0x2a267f0()*0.00412956);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e4c0() {
   return (neuron0x2a26b30()*0.00517829);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e500() {
   return (neuron0x2a26e70()*-0.0114892);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e540() {
   return (neuron0x2a271b0()*-0.00809371);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e580() {
   return (neuron0x2a274f0()*-0.000113085);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e5c0() {
   return (neuron0x2a27830()*0.00190306);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e600() {
   return (neuron0x2a27b70()*0.00477913);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e640() {
   return (neuron0x2a27eb0()*-0.347697);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e680() {
   return (neuron0x2a281f0()*0.00135244);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e6c0() {
   return (neuron0x2a28530()*0.00767435);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e700() {
   return (neuron0x2a28870()*0.00370697);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e190() {
   return (neuron0x2a28bb0()*-0.000526461);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e1d0() {
   return (neuron0x2a29110()*-0.00631199);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e850() {
   return (neuron0x2a29330()*-0.00145063);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e890() {
   return (neuron0x2a29670()*0.00204119);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e8d0() {
   return (neuron0x2a299b0()*0.00131461);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e910() {
   return (neuron0x2a29cf0()*0.00037929);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e950() {
   return (neuron0x2a2a030()*-0.00868601);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e990() {
   return (neuron0x2a2a370()*-0.0200684);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ed10() {
   return (neuron0x2a257b0()*-0.644936);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ed50() {
   return (neuron0x2a25af0()*0.547022);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ed90() {
   return (neuron0x2a25e30()*0.477706);
}

double NNfunction_ns_chi04_cL::synapse0x2a3edd0() {
   return (neuron0x2a26170()*-0.227425);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ee10() {
   return (neuron0x2a264b0()*-0.355557);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ee50() {
   return (neuron0x2a267f0()*-0.0564833);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ee90() {
   return (neuron0x2a26b30()*-0.0184508);
}

double NNfunction_ns_chi04_cL::synapse0x2a3eed0() {
   return (neuron0x2a26e70()*-0.521428);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ef10() {
   return (neuron0x2a271b0()*0.55809);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ef50() {
   return (neuron0x2a274f0()*0.561725);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ef90() {
   return (neuron0x2a27830()*-0.30414);
}

double NNfunction_ns_chi04_cL::synapse0x2a3efd0() {
   return (neuron0x2a27b70()*-0.577587);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f010() {
   return (neuron0x2a27eb0()*-0.209705);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f050() {
   return (neuron0x2a281f0()*-0.366493);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f090() {
   return (neuron0x2a28530()*0.453868);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f0d0() {
   return (neuron0x2a28870()*-0.121608);
}

double NNfunction_ns_chi04_cL::synapse0x2a3eb60() {
   return (neuron0x2a28bb0()*-0.0860001);
}

double NNfunction_ns_chi04_cL::synapse0x2a3eba0() {
   return (neuron0x2a29110()*-0.216787);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f220() {
   return (neuron0x2a29330()*-0.0324415);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f260() {
   return (neuron0x2a29670()*0.773762);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f2a0() {
   return (neuron0x2a299b0()*0.574092);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f2e0() {
   return (neuron0x2a29cf0()*0.184631);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f320() {
   return (neuron0x2a2a030()*0.886489);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f360() {
   return (neuron0x2a2a370()*3.26429);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f6e0() {
   return (neuron0x2a257b0()*0.0102464);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f720() {
   return (neuron0x2a25af0()*-0.575494);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f760() {
   return (neuron0x2a25e30()*-2.27867);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f7a0() {
   return (neuron0x2a26170()*-0.0396027);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f7e0() {
   return (neuron0x2a264b0()*-0.0981639);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f820() {
   return (neuron0x2a267f0()*0.0257541);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f860() {
   return (neuron0x2a26b30()*-0.0173788);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f8a0() {
   return (neuron0x2a26e70()*-0.0147404);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f8e0() {
   return (neuron0x2a271b0()*-0.0461864);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f920() {
   return (neuron0x2a274f0()*0.0314404);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f960() {
   return (neuron0x2a27830()*0.0202087);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f9a0() {
   return (neuron0x2a27b70()*-0.063422);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f9e0() {
   return (neuron0x2a27eb0()*-0.0510645);
}

double NNfunction_ns_chi04_cL::synapse0x2a3fa20() {
   return (neuron0x2a281f0()*-0.0148281);
}

double NNfunction_ns_chi04_cL::synapse0x2a3fa60() {
   return (neuron0x2a28530()*0.00554247);
}

double NNfunction_ns_chi04_cL::synapse0x2a3faa0() {
   return (neuron0x2a28870()*-0.00479043);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f530() {
   return (neuron0x2a28bb0()*0.0380262);
}

double NNfunction_ns_chi04_cL::synapse0x2a3f570() {
   return (neuron0x2a29110()*-0.0490847);
}

double NNfunction_ns_chi04_cL::synapse0x2a3fbf0() {
   return (neuron0x2a29330()*0.00433486);
}

double NNfunction_ns_chi04_cL::synapse0x2a3fc30() {
   return (neuron0x2a29670()*0.0403368);
}

double NNfunction_ns_chi04_cL::synapse0x2a3fc70() {
   return (neuron0x2a299b0()*0.0307357);
}

double NNfunction_ns_chi04_cL::synapse0x2a3fcb0() {
   return (neuron0x2a29cf0()*-0.0220322);
}

double NNfunction_ns_chi04_cL::synapse0x2a3fcf0() {
   return (neuron0x2a2a030()*0.0213223);
}

double NNfunction_ns_chi04_cL::synapse0x2a3fd30() {
   return (neuron0x2a2a370()*1.45934);
}

double NNfunction_ns_chi04_cL::synapse0x2a400b0() {
   return (neuron0x2a257b0()*0.0963313);
}

double NNfunction_ns_chi04_cL::synapse0x2a34680() {
   return (neuron0x2a25af0()*-3.63683);
}

double NNfunction_ns_chi04_cL::synapse0x2a346c0() {
   return (neuron0x2a25e30()*1.81856);
}

double NNfunction_ns_chi04_cL::synapse0x2a34700() {
   return (neuron0x2a26170()*-0.160062);
}

double NNfunction_ns_chi04_cL::synapse0x2a34950() {
   return (neuron0x2a264b0()*0.128475);
}

double NNfunction_ns_chi04_cL::synapse0x2a34990() {
   return (neuron0x2a267f0()*-0.0488523);
}

double NNfunction_ns_chi04_cL::synapse0x2a349d0() {
   return (neuron0x2a26b30()*-0.014662);
}

double NNfunction_ns_chi04_cL::synapse0x2a34c20() {
   return (neuron0x2a26e70()*-0.0495816);
}

double NNfunction_ns_chi04_cL::synapse0x2a34c60() {
   return (neuron0x2a271b0()*0.0832083);
}

double NNfunction_ns_chi04_cL::synapse0x2a34eb0() {
   return (neuron0x2a274f0()*0.0555207);
}

double NNfunction_ns_chi04_cL::synapse0x2a34ef0() {
   return (neuron0x2a27830()*0.0658032);
}

double NNfunction_ns_chi04_cL::synapse0x2a34f30() {
   return (neuron0x2a27b70()*0.080456);
}

double NNfunction_ns_chi04_cL::synapse0x2a35180() {
   return (neuron0x2a27eb0()*-0.422526);
}

double NNfunction_ns_chi04_cL::synapse0x2a351c0() {
   return (neuron0x2a281f0()*-0.00562233);
}

double NNfunction_ns_chi04_cL::synapse0x2a35410() {
   return (neuron0x2a28530()*-0.0678456);
}

double NNfunction_ns_chi04_cL::synapse0x2a35450() {
   return (neuron0x2a28870()*0.111254);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ff00() {
   return (neuron0x2a28bb0()*0.0797467);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ff40() {
   return (neuron0x2a29110()*0.0920274);
}

double NNfunction_ns_chi04_cL::synapse0x2a355a0() {
   return (neuron0x2a29330()*-0.0467898);
}

double NNfunction_ns_chi04_cL::synapse0x2a35ab0() {
   return (neuron0x2a29670()*0.00468699);
}

double NNfunction_ns_chi04_cL::synapse0x2a35af0() {
   return (neuron0x2a299b0()*0.183494);
}

double NNfunction_ns_chi04_cL::synapse0x2a35b30() {
   return (neuron0x2a29cf0()*0.116999);
}

double NNfunction_ns_chi04_cL::synapse0x2a35d80() {
   return (neuron0x2a2a030()*-0.0376068);
}

double NNfunction_ns_chi04_cL::synapse0x2a35dc0() {
   return (neuron0x2a2a370()*2.49366);
}

double NNfunction_ns_chi04_cL::synapse0x2a35670() {
   return (neuron0x2a257b0()*-0.108258);
}

double NNfunction_ns_chi04_cL::synapse0x2a356b0() {
   return (neuron0x2a25af0()*0.140506);
}

double NNfunction_ns_chi04_cL::synapse0x2a356f0() {
   return (neuron0x2a25e30()*0.811836);
}

double NNfunction_ns_chi04_cL::synapse0x2a35730() {
   return (neuron0x2a26170()*0.00149346);
}

double NNfunction_ns_chi04_cL::synapse0x2a360b0() {
   return (neuron0x2a264b0()*-0.611586);
}

double NNfunction_ns_chi04_cL::synapse0x2a42400() {
   return (neuron0x2a267f0()*0.733058);
}

double NNfunction_ns_chi04_cL::synapse0x2a42440() {
   return (neuron0x2a26b30()*0.173122);
}

double NNfunction_ns_chi04_cL::synapse0x2a42480() {
   return (neuron0x2a26e70()*-0.690868);
}

double NNfunction_ns_chi04_cL::synapse0x2a424c0() {
   return (neuron0x2a271b0()*-1.39386);
}

double NNfunction_ns_chi04_cL::synapse0x2a42500() {
   return (neuron0x2a274f0()*0.361614);
}

double NNfunction_ns_chi04_cL::synapse0x2a42540() {
   return (neuron0x2a27830()*0.225078);
}

double NNfunction_ns_chi04_cL::synapse0x2a42580() {
   return (neuron0x2a27b70()*-0.132839);
}

double NNfunction_ns_chi04_cL::synapse0x2a425c0() {
   return (neuron0x2a27eb0()*0.0965307);
}

double NNfunction_ns_chi04_cL::synapse0x2a42600() {
   return (neuron0x2a281f0()*0.340654);
}

double NNfunction_ns_chi04_cL::synapse0x2a42640() {
   return (neuron0x2a28530()*-0.436278);
}

double NNfunction_ns_chi04_cL::synapse0x2a42680() {
   return (neuron0x2a28870()*0.269595);
}

double NNfunction_ns_chi04_cL::synapse0x2a35f90() {
   return (neuron0x2a28bb0()*-0.295983);
}

double NNfunction_ns_chi04_cL::synapse0x2a35fd0() {
   return (neuron0x2a29110()*0.438088);
}

double NNfunction_ns_chi04_cL::synapse0x2a427d0() {
   return (neuron0x2a29330()*0.459255);
}

double NNfunction_ns_chi04_cL::synapse0x2a42810() {
   return (neuron0x2a29670()*0.292027);
}

double NNfunction_ns_chi04_cL::synapse0x2a42850() {
   return (neuron0x2a299b0()*0.680111);
}

double NNfunction_ns_chi04_cL::synapse0x2a42890() {
   return (neuron0x2a29cf0()*-0.14954);
}

double NNfunction_ns_chi04_cL::synapse0x2a428d0() {
   return (neuron0x2a2a030()*0.487138);
}

double NNfunction_ns_chi04_cL::synapse0x2a42910() {
   return (neuron0x2a2a370()*1.12344);
}

double NNfunction_ns_chi04_cL::synapse0x2a42c90() {
   return (neuron0x2a257b0()*0.451061);
}

double NNfunction_ns_chi04_cL::synapse0x2a42cd0() {
   return (neuron0x2a25af0()*-0.842111);
}

double NNfunction_ns_chi04_cL::synapse0x2a42d10() {
   return (neuron0x2a25e30()*-1.41009);
}

double NNfunction_ns_chi04_cL::synapse0x2a42d50() {
   return (neuron0x2a26170()*0.204307);
}

double NNfunction_ns_chi04_cL::synapse0x2a42d90() {
   return (neuron0x2a264b0()*-0.926518);
}

double NNfunction_ns_chi04_cL::synapse0x2a42dd0() {
   return (neuron0x2a267f0()*0.138316);
}

double NNfunction_ns_chi04_cL::synapse0x2a42e10() {
   return (neuron0x2a26b30()*-0.494646);
}

double NNfunction_ns_chi04_cL::synapse0x2a42e50() {
   return (neuron0x2a26e70()*-0.158108);
}

double NNfunction_ns_chi04_cL::synapse0x2a42e90() {
   return (neuron0x2a271b0()*0.169157);
}

double NNfunction_ns_chi04_cL::synapse0x2a42ed0() {
   return (neuron0x2a274f0()*-1.1888);
}

double NNfunction_ns_chi04_cL::synapse0x2a42f10() {
   return (neuron0x2a27830()*-0.390477);
}

double NNfunction_ns_chi04_cL::synapse0x2a42f50() {
   return (neuron0x2a27b70()*0.21702);
}

double NNfunction_ns_chi04_cL::synapse0x2a42f90() {
   return (neuron0x2a27eb0()*-0.112098);
}

double NNfunction_ns_chi04_cL::synapse0x2a42fd0() {
   return (neuron0x2a281f0()*0.410338);
}

double NNfunction_ns_chi04_cL::synapse0x2a43010() {
   return (neuron0x2a28530()*-1.00043);
}

double NNfunction_ns_chi04_cL::synapse0x2a43050() {
   return (neuron0x2a28870()*-0.959922);
}

double NNfunction_ns_chi04_cL::synapse0x2a42ae0() {
   return (neuron0x2a28bb0()*-0.396074);
}

double NNfunction_ns_chi04_cL::synapse0x2a42b20() {
   return (neuron0x2a29110()*0.0111337);
}

double NNfunction_ns_chi04_cL::synapse0x2a431a0() {
   return (neuron0x2a29330()*0.327873);
}

double NNfunction_ns_chi04_cL::synapse0x2a431e0() {
   return (neuron0x2a29670()*-0.336552);
}

double NNfunction_ns_chi04_cL::synapse0x2a43220() {
   return (neuron0x2a299b0()*1.19004);
}

double NNfunction_ns_chi04_cL::synapse0x2a43260() {
   return (neuron0x2a29cf0()*-1.0343);
}

double NNfunction_ns_chi04_cL::synapse0x2a432a0() {
   return (neuron0x2a2a030()*0.00990054);
}

double NNfunction_ns_chi04_cL::synapse0x2a432e0() {
   return (neuron0x2a2a370()*-0.983479);
}

double NNfunction_ns_chi04_cL::synapse0x2a43660() {
   return (neuron0x2a257b0()*0.257976);
}

double NNfunction_ns_chi04_cL::synapse0x2a436a0() {
   return (neuron0x2a25af0()*-0.831944);
}

double NNfunction_ns_chi04_cL::synapse0x2a436e0() {
   return (neuron0x2a25e30()*-0.598183);
}

double NNfunction_ns_chi04_cL::synapse0x2a43720() {
   return (neuron0x2a26170()*0.457883);
}

double NNfunction_ns_chi04_cL::synapse0x2a43760() {
   return (neuron0x2a264b0()*-0.133671);
}

double NNfunction_ns_chi04_cL::synapse0x2a437a0() {
   return (neuron0x2a267f0()*0.363539);
}

double NNfunction_ns_chi04_cL::synapse0x2a437e0() {
   return (neuron0x2a26b30()*-0.686436);
}

double NNfunction_ns_chi04_cL::synapse0x2a43820() {
   return (neuron0x2a26e70()*0.0169386);
}

double NNfunction_ns_chi04_cL::synapse0x2a43860() {
   return (neuron0x2a271b0()*-0.0412565);
}

double NNfunction_ns_chi04_cL::synapse0x2a438a0() {
   return (neuron0x2a274f0()*0.514642);
}

double NNfunction_ns_chi04_cL::synapse0x2a438e0() {
   return (neuron0x2a27830()*0.27894);
}

double NNfunction_ns_chi04_cL::synapse0x2a43920() {
   return (neuron0x2a27b70()*-0.138752);
}

double NNfunction_ns_chi04_cL::synapse0x2a43960() {
   return (neuron0x2a27eb0()*0.420244);
}

double NNfunction_ns_chi04_cL::synapse0x2a439a0() {
   return (neuron0x2a281f0()*-0.019721);
}

double NNfunction_ns_chi04_cL::synapse0x2a439e0() {
   return (neuron0x2a28530()*-0.529781);
}

double NNfunction_ns_chi04_cL::synapse0x2a43a20() {
   return (neuron0x2a28870()*0.0277167);
}

double NNfunction_ns_chi04_cL::synapse0x2a434b0() {
   return (neuron0x2a28bb0()*0.192723);
}

double NNfunction_ns_chi04_cL::synapse0x2a434f0() {
   return (neuron0x2a29110()*0.628512);
}

double NNfunction_ns_chi04_cL::synapse0x2a43b70() {
   return (neuron0x2a29330()*-0.55469);
}

double NNfunction_ns_chi04_cL::synapse0x2a43bb0() {
   return (neuron0x2a29670()*-0.0550685);
}

double NNfunction_ns_chi04_cL::synapse0x2a43bf0() {
   return (neuron0x2a299b0()*-0.0697223);
}

double NNfunction_ns_chi04_cL::synapse0x2a43c30() {
   return (neuron0x2a29cf0()*-0.102527);
}

double NNfunction_ns_chi04_cL::synapse0x2a43c70() {
   return (neuron0x2a2a030()*-0.644789);
}

double NNfunction_ns_chi04_cL::synapse0x2a43cb0() {
   return (neuron0x2a2a370()*-0.678016);
}

double NNfunction_ns_chi04_cL::synapse0x2a44030() {
   return (neuron0x2a257b0()*0.734214);
}

double NNfunction_ns_chi04_cL::synapse0x2a44070() {
   return (neuron0x2a25af0()*-0.016536);
}

double NNfunction_ns_chi04_cL::synapse0x2a440b0() {
   return (neuron0x2a25e30()*-0.355116);
}

double NNfunction_ns_chi04_cL::synapse0x2a440f0() {
   return (neuron0x2a26170()*-0.67338);
}

double NNfunction_ns_chi04_cL::synapse0x2a44130() {
   return (neuron0x2a264b0()*0.824848);
}

double NNfunction_ns_chi04_cL::synapse0x2a44170() {
   return (neuron0x2a267f0()*1.12167);
}

double NNfunction_ns_chi04_cL::synapse0x2a441b0() {
   return (neuron0x2a26b30()*-0.602275);
}

double NNfunction_ns_chi04_cL::synapse0x2a441f0() {
   return (neuron0x2a26e70()*0.820688);
}

double NNfunction_ns_chi04_cL::synapse0x2a44230() {
   return (neuron0x2a271b0()*1.14876);
}

double NNfunction_ns_chi04_cL::synapse0x2a44270() {
   return (neuron0x2a274f0()*-0.10829);
}

double NNfunction_ns_chi04_cL::synapse0x2a442b0() {
   return (neuron0x2a27830()*0.383726);
}

double NNfunction_ns_chi04_cL::synapse0x2a442f0() {
   return (neuron0x2a27b70()*0.711472);
}

double NNfunction_ns_chi04_cL::synapse0x2a44330() {
   return (neuron0x2a27eb0()*0.484374);
}

double NNfunction_ns_chi04_cL::synapse0x2a44370() {
   return (neuron0x2a281f0()*-0.0109949);
}

double NNfunction_ns_chi04_cL::synapse0x2a443b0() {
   return (neuron0x2a28530()*-1.74678);
}

double NNfunction_ns_chi04_cL::synapse0x2a443f0() {
   return (neuron0x2a28870()*-0.88936);
}

double NNfunction_ns_chi04_cL::synapse0x2a43e80() {
   return (neuron0x2a28bb0()*-0.15072);
}

double NNfunction_ns_chi04_cL::synapse0x2a43ec0() {
   return (neuron0x2a29110()*0.935429);
}

double NNfunction_ns_chi04_cL::synapse0x2a44540() {
   return (neuron0x2a29330()*-0.519077);
}

double NNfunction_ns_chi04_cL::synapse0x2a44580() {
   return (neuron0x2a29670()*0.184632);
}

double NNfunction_ns_chi04_cL::synapse0x2a445c0() {
   return (neuron0x2a299b0()*-1.04517);
}

double NNfunction_ns_chi04_cL::synapse0x2a44600() {
   return (neuron0x2a29cf0()*-0.891962);
}

double NNfunction_ns_chi04_cL::synapse0x2a44640() {
   return (neuron0x2a2a030()*-0.0808626);
}

double NNfunction_ns_chi04_cL::synapse0x2a44680() {
   return (neuron0x2a2a370()*-0.0440366);
}

double NNfunction_ns_chi04_cL::synapse0x2a44a00() {
   return (neuron0x2a257b0()*1.24099);
}

double NNfunction_ns_chi04_cL::synapse0x2a44a40() {
   return (neuron0x2a25af0()*-1.36993);
}

double NNfunction_ns_chi04_cL::synapse0x2a44a80() {
   return (neuron0x2a25e30()*-1.25773);
}

double NNfunction_ns_chi04_cL::synapse0x2a44ac0() {
   return (neuron0x2a26170()*-1.25387);
}

double NNfunction_ns_chi04_cL::synapse0x2a44b00() {
   return (neuron0x2a264b0()*0.59292);
}

double NNfunction_ns_chi04_cL::synapse0x2a44b40() {
   return (neuron0x2a267f0()*0.654229);
}

double NNfunction_ns_chi04_cL::synapse0x2a44b80() {
   return (neuron0x2a26b30()*0.0967022);
}

double NNfunction_ns_chi04_cL::synapse0x2a44bc0() {
   return (neuron0x2a26e70()*0.638613);
}

double NNfunction_ns_chi04_cL::synapse0x2a44c00() {
   return (neuron0x2a271b0()*1.56028);
}

double NNfunction_ns_chi04_cL::synapse0x2a44c40() {
   return (neuron0x2a274f0()*-0.323316);
}

double NNfunction_ns_chi04_cL::synapse0x2a44c80() {
   return (neuron0x2a27830()*0.312978);
}

double NNfunction_ns_chi04_cL::synapse0x2a44cc0() {
   return (neuron0x2a27b70()*0.543907);
}

double NNfunction_ns_chi04_cL::synapse0x2a44d00() {
   return (neuron0x2a27eb0()*-0.41437);
}

double NNfunction_ns_chi04_cL::synapse0x2a44d40() {
   return (neuron0x2a281f0()*0.0925853);
}

double NNfunction_ns_chi04_cL::synapse0x2a44d80() {
   return (neuron0x2a28530()*0.188917);
}

double NNfunction_ns_chi04_cL::synapse0x2a44dc0() {
   return (neuron0x2a28870()*0.68295);
}

double NNfunction_ns_chi04_cL::synapse0x2a44850() {
   return (neuron0x2a28bb0()*-0.603828);
}

double NNfunction_ns_chi04_cL::synapse0x2a44890() {
   return (neuron0x2a29110()*0.571893);
}

double NNfunction_ns_chi04_cL::synapse0x2a44f10() {
   return (neuron0x2a29330()*-0.860429);
}

double NNfunction_ns_chi04_cL::synapse0x2a44f50() {
   return (neuron0x2a29670()*-0.303222);
}

double NNfunction_ns_chi04_cL::synapse0x2a44f90() {
   return (neuron0x2a299b0()*0.170806);
}

double NNfunction_ns_chi04_cL::synapse0x2a44fd0() {
   return (neuron0x2a29cf0()*-0.252847);
}

double NNfunction_ns_chi04_cL::synapse0x2a45010() {
   return (neuron0x2a2a030()*-0.904915);
}

double NNfunction_ns_chi04_cL::synapse0x2a45050() {
   return (neuron0x2a2a370()*-0.649464);
}

double NNfunction_ns_chi04_cL::synapse0x2a453d0() {
   return (neuron0x2a257b0()*0.0953275);
}

double NNfunction_ns_chi04_cL::synapse0x2a45410() {
   return (neuron0x2a25af0()*3.73282);
}

double NNfunction_ns_chi04_cL::synapse0x2a45450() {
   return (neuron0x2a25e30()*-3.22354);
}

double NNfunction_ns_chi04_cL::synapse0x2a45490() {
   return (neuron0x2a26170()*-0.0271901);
}

double NNfunction_ns_chi04_cL::synapse0x2a454d0() {
   return (neuron0x2a264b0()*-0.216863);
}

double NNfunction_ns_chi04_cL::synapse0x2a45510() {
   return (neuron0x2a267f0()*0.118469);
}

double NNfunction_ns_chi04_cL::synapse0x2a45550() {
   return (neuron0x2a26b30()*-0.0263531);
}

double NNfunction_ns_chi04_cL::synapse0x2a45590() {
   return (neuron0x2a26e70()*-0.0912466);
}

double NNfunction_ns_chi04_cL::synapse0x2a455d0() {
   return (neuron0x2a271b0()*0.0605089);
}

double NNfunction_ns_chi04_cL::synapse0x2a45610() {
   return (neuron0x2a274f0()*-0.139335);
}

double NNfunction_ns_chi04_cL::synapse0x2a45650() {
   return (neuron0x2a27830()*0.32001);
}

double NNfunction_ns_chi04_cL::synapse0x2a45690() {
   return (neuron0x2a27b70()*0.17898);
}

double NNfunction_ns_chi04_cL::synapse0x2a456d0() {
   return (neuron0x2a27eb0()*-0.195504);
}

double NNfunction_ns_chi04_cL::synapse0x2a45710() {
   return (neuron0x2a281f0()*0.0177948);
}

double NNfunction_ns_chi04_cL::synapse0x2a45750() {
   return (neuron0x2a28530()*0.0125968);
}

double NNfunction_ns_chi04_cL::synapse0x2a45790() {
   return (neuron0x2a28870()*0.343501);
}

double NNfunction_ns_chi04_cL::synapse0x2a45220() {
   return (neuron0x2a28bb0()*-0.0542627);
}

double NNfunction_ns_chi04_cL::synapse0x2a45260() {
   return (neuron0x2a29110()*0.263899);
}

double NNfunction_ns_chi04_cL::synapse0x2a458e0() {
   return (neuron0x2a29330()*0.288434);
}

double NNfunction_ns_chi04_cL::synapse0x2a45920() {
   return (neuron0x2a29670()*0.0976137);
}

double NNfunction_ns_chi04_cL::synapse0x2a45960() {
   return (neuron0x2a299b0()*0.560407);
}

double NNfunction_ns_chi04_cL::synapse0x2a459a0() {
   return (neuron0x2a29cf0()*-0.242104);
}

double NNfunction_ns_chi04_cL::synapse0x2a459e0() {
   return (neuron0x2a2a030()*-0.073343);
}

double NNfunction_ns_chi04_cL::synapse0x2a45a20() {
   return (neuron0x2a2a370()*1.51575);
}

double NNfunction_ns_chi04_cL::synapse0x2a45da0() {
   return (neuron0x2a257b0()*0.000730228);
}

double NNfunction_ns_chi04_cL::synapse0x2a45de0() {
   return (neuron0x2a25af0()*-0.0372004);
}

double NNfunction_ns_chi04_cL::synapse0x2a45e20() {
   return (neuron0x2a25e30()*0.177634);
}

double NNfunction_ns_chi04_cL::synapse0x2a45e60() {
   return (neuron0x2a26170()*-0.701239);
}

double NNfunction_ns_chi04_cL::synapse0x2a45ea0() {
   return (neuron0x2a264b0()*0.00428008);
}

double NNfunction_ns_chi04_cL::synapse0x2a45ee0() {
   return (neuron0x2a267f0()*-0.00651642);
}

double NNfunction_ns_chi04_cL::synapse0x2a45f20() {
   return (neuron0x2a26b30()*-0.0146904);
}

double NNfunction_ns_chi04_cL::synapse0x2a45f60() {
   return (neuron0x2a26e70()*0.00513059);
}

double NNfunction_ns_chi04_cL::synapse0x2a45fa0() {
   return (neuron0x2a271b0()*0.001759);
}

double NNfunction_ns_chi04_cL::synapse0x2a45fe0() {
   return (neuron0x2a274f0()*0.00190913);
}

double NNfunction_ns_chi04_cL::synapse0x2a46020() {
   return (neuron0x2a27830()*-0.00667191);
}

double NNfunction_ns_chi04_cL::synapse0x2a46060() {
   return (neuron0x2a27b70()*-0.0132907);
}

double NNfunction_ns_chi04_cL::synapse0x2a460a0() {
   return (neuron0x2a27eb0()*0.372333);
}

double NNfunction_ns_chi04_cL::synapse0x2a460e0() {
   return (neuron0x2a281f0()*0.00320617);
}

double NNfunction_ns_chi04_cL::synapse0x2a46120() {
   return (neuron0x2a28530()*-0.011839);
}

double NNfunction_ns_chi04_cL::synapse0x2a46160() {
   return (neuron0x2a28870()*-0.0151747);
}

double NNfunction_ns_chi04_cL::synapse0x2a45bf0() {
   return (neuron0x2a28bb0()*0.00841976);
}

double NNfunction_ns_chi04_cL::synapse0x2a45c30() {
   return (neuron0x2a29110()*0.0123253);
}

double NNfunction_ns_chi04_cL::synapse0x2a462b0() {
   return (neuron0x2a29330()*0.00101488);
}

double NNfunction_ns_chi04_cL::synapse0x2a462f0() {
   return (neuron0x2a29670()*-0.0141446);
}

double NNfunction_ns_chi04_cL::synapse0x2a46330() {
   return (neuron0x2a299b0()*-0.00233257);
}

double NNfunction_ns_chi04_cL::synapse0x2a46370() {
   return (neuron0x2a29cf0()*0.00725534);
}

double NNfunction_ns_chi04_cL::synapse0x2a463b0() {
   return (neuron0x2a2a030()*0.0113103);
}

double NNfunction_ns_chi04_cL::synapse0x2a463f0() {
   return (neuron0x2a2a370()*-0.0389889);
}

double NNfunction_ns_chi04_cL::synapse0x2a46770() {
   return (neuron0x2a257b0()*0.00117126);
}

double NNfunction_ns_chi04_cL::synapse0x2a467b0() {
   return (neuron0x2a25af0()*0.232924);
}

double NNfunction_ns_chi04_cL::synapse0x2a467f0() {
   return (neuron0x2a25e30()*-2.06328);
}

double NNfunction_ns_chi04_cL::synapse0x2a46830() {
   return (neuron0x2a26170()*0.00158691);
}

double NNfunction_ns_chi04_cL::synapse0x2a46870() {
   return (neuron0x2a264b0()*-0.0113702);
}

double NNfunction_ns_chi04_cL::synapse0x2a468b0() {
   return (neuron0x2a267f0()*0.0157346);
}

double NNfunction_ns_chi04_cL::synapse0x2a468f0() {
   return (neuron0x2a26b30()*-0.00928488);
}

double NNfunction_ns_chi04_cL::synapse0x2a46930() {
   return (neuron0x2a26e70()*-0.00776516);
}

double NNfunction_ns_chi04_cL::synapse0x2a46970() {
   return (neuron0x2a271b0()*-0.021396);
}

double NNfunction_ns_chi04_cL::synapse0x2a469b0() {
   return (neuron0x2a274f0()*-0.00931836);
}

double NNfunction_ns_chi04_cL::synapse0x2a469f0() {
   return (neuron0x2a27830()*-0.0131926);
}

double NNfunction_ns_chi04_cL::synapse0x2a46a30() {
   return (neuron0x2a27b70()*-0.0134012);
}

double NNfunction_ns_chi04_cL::synapse0x2a46a70() {
   return (neuron0x2a27eb0()*-0.0480382);
}

double NNfunction_ns_chi04_cL::synapse0x2a46ab0() {
   return (neuron0x2a281f0()*0.0257198);
}

double NNfunction_ns_chi04_cL::synapse0x2a46af0() {
   return (neuron0x2a28530()*0.0219753);
}

double NNfunction_ns_chi04_cL::synapse0x2a46b30() {
   return (neuron0x2a28870()*-0.00877662);
}

double NNfunction_ns_chi04_cL::synapse0x2a465c0() {
   return (neuron0x2a28bb0()*0.0180299);
}

double NNfunction_ns_chi04_cL::synapse0x2a46600() {
   return (neuron0x2a29110()*-0.0233776);
}

double NNfunction_ns_chi04_cL::synapse0x2a46c80() {
   return (neuron0x2a29330()*0.0165916);
}

double NNfunction_ns_chi04_cL::synapse0x2a46cc0() {
   return (neuron0x2a29670()*0.0305891);
}

double NNfunction_ns_chi04_cL::synapse0x2a46d00() {
   return (neuron0x2a299b0()*0.0130907);
}

double NNfunction_ns_chi04_cL::synapse0x2a46d40() {
   return (neuron0x2a29cf0()*0.00798542);
}

double NNfunction_ns_chi04_cL::synapse0x2a46d80() {
   return (neuron0x2a2a030()*-0.0171179);
}

double NNfunction_ns_chi04_cL::synapse0x2a46dc0() {
   return (neuron0x2a2a370()*1.20918);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f870() {
   return (neuron0x2a257b0()*0.0730383);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f8b0() {
   return (neuron0x2a25af0()*-0.120224);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f8f0() {
   return (neuron0x2a25e30()*3.67591);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f930() {
   return (neuron0x2a26170()*0.0149281);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f970() {
   return (neuron0x2a264b0()*0.00949078);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f9b0() {
   return (neuron0x2a267f0()*0.0350388);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f9f0() {
   return (neuron0x2a26b30()*-0.00127255);
}

double NNfunction_ns_chi04_cL::synapse0x2a2fa30() {
   return (neuron0x2a26e70()*-0.00742748);
}

double NNfunction_ns_chi04_cL::synapse0x2a47550() {
   return (neuron0x2a271b0()*-0.0107218);
}

double NNfunction_ns_chi04_cL::synapse0x2a47590() {
   return (neuron0x2a274f0()*0.00942543);
}

double NNfunction_ns_chi04_cL::synapse0x2a475d0() {
   return (neuron0x2a27830()*-0.00143723);
}

double NNfunction_ns_chi04_cL::synapse0x2a47610() {
   return (neuron0x2a27b70()*-0.0101024);
}

double NNfunction_ns_chi04_cL::synapse0x2a47650() {
   return (neuron0x2a27eb0()*0.03752);
}

double NNfunction_ns_chi04_cL::synapse0x2a47690() {
   return (neuron0x2a281f0()*-0.013201);
}

double NNfunction_ns_chi04_cL::synapse0x2a476d0() {
   return (neuron0x2a28530()*0.0113391);
}

double NNfunction_ns_chi04_cL::synapse0x2a47710() {
   return (neuron0x2a28870()*-0.0133138);
}

double NNfunction_ns_chi04_cL::synapse0x2a46f90() {
   return (neuron0x2a28bb0()*-0.0154579);
}

double NNfunction_ns_chi04_cL::synapse0x2a46fd0() {
   return (neuron0x2a29110()*-0.04308);
}

double NNfunction_ns_chi04_cL::synapse0x2a47860() {
   return (neuron0x2a29330()*-0.00267619);
}

double NNfunction_ns_chi04_cL::synapse0x2a478a0() {
   return (neuron0x2a29670()*0.0227954);
}

double NNfunction_ns_chi04_cL::synapse0x2a478e0() {
   return (neuron0x2a299b0()*-0.020137);
}

double NNfunction_ns_chi04_cL::synapse0x2a47920() {
   return (neuron0x2a29cf0()*-0.0305991);
}

double NNfunction_ns_chi04_cL::synapse0x2a47960() {
   return (neuron0x2a2a030()*-0.0180635);
}

double NNfunction_ns_chi04_cL::synapse0x2a479a0() {
   return (neuron0x2a2a370()*2.58413);
}

double NNfunction_ns_chi04_cL::synapse0x2a47d20() {
   return (neuron0x2a257b0()*0.0227677);
}

double NNfunction_ns_chi04_cL::synapse0x2a47d60() {
   return (neuron0x2a25af0()*-0.0336037);
}

double NNfunction_ns_chi04_cL::synapse0x2a47da0() {
   return (neuron0x2a25e30()*-0.199356);
}

double NNfunction_ns_chi04_cL::synapse0x2a47de0() {
   return (neuron0x2a26170()*-3.40707);
}

double NNfunction_ns_chi04_cL::synapse0x2a47e20() {
   return (neuron0x2a264b0()*0.00125129);
}

double NNfunction_ns_chi04_cL::synapse0x2a47e60() {
   return (neuron0x2a267f0()*-0.0141815);
}

double NNfunction_ns_chi04_cL::synapse0x2a47ea0() {
   return (neuron0x2a26b30()*-0.00384752);
}

double NNfunction_ns_chi04_cL::synapse0x2a47ee0() {
   return (neuron0x2a26e70()*-0.00323043);
}

double NNfunction_ns_chi04_cL::synapse0x2a47f20() {
   return (neuron0x2a271b0()*0.00734273);
}

double NNfunction_ns_chi04_cL::synapse0x2a47f60() {
   return (neuron0x2a274f0()*-0.032064);
}

double NNfunction_ns_chi04_cL::synapse0x2a47fa0() {
   return (neuron0x2a27830()*-0.0387772);
}

double NNfunction_ns_chi04_cL::synapse0x2a47fe0() {
   return (neuron0x2a27b70()*-0.0451523);
}

double NNfunction_ns_chi04_cL::synapse0x2a48020() {
   return (neuron0x2a27eb0()*-0.831703);
}

double NNfunction_ns_chi04_cL::synapse0x2a48060() {
   return (neuron0x2a281f0()*-0.0198315);
}

double NNfunction_ns_chi04_cL::synapse0x2a480a0() {
   return (neuron0x2a28530()*0.0300939);
}

double NNfunction_ns_chi04_cL::synapse0x2a480e0() {
   return (neuron0x2a28870()*0.0234802);
}

double NNfunction_ns_chi04_cL::synapse0x2a47b70() {
   return (neuron0x2a28bb0()*-0.0125618);
}

double NNfunction_ns_chi04_cL::synapse0x2a47bb0() {
   return (neuron0x2a29110()*0.0508066);
}

double NNfunction_ns_chi04_cL::synapse0x2a48230() {
   return (neuron0x2a29330()*0.0104855);
}

double NNfunction_ns_chi04_cL::synapse0x2a48270() {
   return (neuron0x2a29670()*-0.0343186);
}

double NNfunction_ns_chi04_cL::synapse0x2a482b0() {
   return (neuron0x2a299b0()*0.000300885);
}

double NNfunction_ns_chi04_cL::synapse0x2a482f0() {
   return (neuron0x2a29cf0()*-0.000918567);
}

double NNfunction_ns_chi04_cL::synapse0x2a48330() {
   return (neuron0x2a2a030()*0.0131666);
}

double NNfunction_ns_chi04_cL::synapse0x2a48370() {
   return (neuron0x2a2a370()*-0.0479244);
}

double NNfunction_ns_chi04_cL::synapse0x2a486f0() {
   return (neuron0x2a257b0()*-0.00518739);
}

double NNfunction_ns_chi04_cL::synapse0x2a48730() {
   return (neuron0x2a25af0()*0.0261618);
}

double NNfunction_ns_chi04_cL::synapse0x2a48770() {
   return (neuron0x2a25e30()*-0.0846568);
}

double NNfunction_ns_chi04_cL::synapse0x2a487b0() {
   return (neuron0x2a26170()*2.05488);
}

double NNfunction_ns_chi04_cL::synapse0x2a487f0() {
   return (neuron0x2a264b0()*-0.00947765);
}

double NNfunction_ns_chi04_cL::synapse0x2a48830() {
   return (neuron0x2a267f0()*0.0101793);
}

double NNfunction_ns_chi04_cL::synapse0x2a48870() {
   return (neuron0x2a26b30()*0.00456801);
}

double NNfunction_ns_chi04_cL::synapse0x2a488b0() {
   return (neuron0x2a26e70()*0.00092654);
}

double NNfunction_ns_chi04_cL::synapse0x2a488f0() {
   return (neuron0x2a271b0()*-0.00444282);
}

double NNfunction_ns_chi04_cL::synapse0x2a48930() {
   return (neuron0x2a274f0()*-8.35939e-07);
}

double NNfunction_ns_chi04_cL::synapse0x2a48970() {
   return (neuron0x2a27830()*0.0113143);
}

double NNfunction_ns_chi04_cL::synapse0x2a489b0() {
   return (neuron0x2a27b70()*0.0169384);
}

double NNfunction_ns_chi04_cL::synapse0x2a489f0() {
   return (neuron0x2a27eb0()*-0.121149);
}

double NNfunction_ns_chi04_cL::synapse0x2a48a30() {
   return (neuron0x2a281f0()*-0.00770864);
}

double NNfunction_ns_chi04_cL::synapse0x2a48a70() {
   return (neuron0x2a28530()*-5.45101e-05);
}

double NNfunction_ns_chi04_cL::synapse0x2a48ab0() {
   return (neuron0x2a28870()*0.00739053);
}

double NNfunction_ns_chi04_cL::synapse0x2a48540() {
   return (neuron0x2a28bb0()*-0.00743856);
}

double NNfunction_ns_chi04_cL::synapse0x2a48580() {
   return (neuron0x2a29110()*-0.0155066);
}

double NNfunction_ns_chi04_cL::synapse0x2a390b0() {
   return (neuron0x2a29330()*0.00359589);
}

double NNfunction_ns_chi04_cL::synapse0x2a390f0() {
   return (neuron0x2a29670()*0.0173527);
}

double NNfunction_ns_chi04_cL::synapse0x2a39130() {
   return (neuron0x2a299b0()*-0.000481165);
}

double NNfunction_ns_chi04_cL::synapse0x2a39170() {
   return (neuron0x2a29cf0()*-0.00739875);
}

double NNfunction_ns_chi04_cL::synapse0x2a391b0() {
   return (neuron0x2a2a030()*0.000680422);
}

double NNfunction_ns_chi04_cL::synapse0x2a391f0() {
   return (neuron0x2a2a370()*0.0286225);
}

double NNfunction_ns_chi04_cL::synapse0x2a39570() {
   return (neuron0x2a257b0()*0.26181);
}

double NNfunction_ns_chi04_cL::synapse0x2a395b0() {
   return (neuron0x2a25af0()*0.542447);
}

double NNfunction_ns_chi04_cL::synapse0x2a395f0() {
   return (neuron0x2a25e30()*0.0102385);
}

double NNfunction_ns_chi04_cL::synapse0x2a39630() {
   return (neuron0x2a26170()*0.526825);
}

double NNfunction_ns_chi04_cL::synapse0x2a39670() {
   return (neuron0x2a264b0()*0.957294);
}

double NNfunction_ns_chi04_cL::synapse0x2a396b0() {
   return (neuron0x2a267f0()*0.960344);
}

double NNfunction_ns_chi04_cL::synapse0x2a396f0() {
   return (neuron0x2a26b30()*-1.05084);
}

double NNfunction_ns_chi04_cL::synapse0x2a39730() {
   return (neuron0x2a26e70()*-1.28412);
}

double NNfunction_ns_chi04_cL::synapse0x2a39770() {
   return (neuron0x2a271b0()*-0.825604);
}

double NNfunction_ns_chi04_cL::synapse0x2a397b0() {
   return (neuron0x2a274f0()*0.0966029);
}

double NNfunction_ns_chi04_cL::synapse0x2a397f0() {
   return (neuron0x2a27830()*-0.685478);
}

double NNfunction_ns_chi04_cL::synapse0x2a39830() {
   return (neuron0x2a27b70()*0.0299216);
}

double NNfunction_ns_chi04_cL::synapse0x2a39870() {
   return (neuron0x2a27eb0()*-0.805012);
}

double NNfunction_ns_chi04_cL::synapse0x2a398b0() {
   return (neuron0x2a281f0()*0.404026);
}

double NNfunction_ns_chi04_cL::synapse0x2a398f0() {
   return (neuron0x2a28530()*1.24332);
}

double NNfunction_ns_chi04_cL::synapse0x2a39930() {
   return (neuron0x2a28870()*0.699317);
}

double NNfunction_ns_chi04_cL::synapse0x2a393c0() {
   return (neuron0x2a28bb0()*-1.65901);
}

double NNfunction_ns_chi04_cL::synapse0x2a39400() {
   return (neuron0x2a29110()*0.914688);
}

double NNfunction_ns_chi04_cL::synapse0x2a39a80() {
   return (neuron0x2a29330()*-0.472259);
}

double NNfunction_ns_chi04_cL::synapse0x2a39ac0() {
   return (neuron0x2a29670()*-0.566492);
}

double NNfunction_ns_chi04_cL::synapse0x2a39b00() {
   return (neuron0x2a299b0()*-0.0323929);
}

double NNfunction_ns_chi04_cL::synapse0x2a39b40() {
   return (neuron0x2a29cf0()*0.0462066);
}

double NNfunction_ns_chi04_cL::synapse0x2a39b80() {
   return (neuron0x2a2a030()*-0.180215);
}

double NNfunction_ns_chi04_cL::synapse0x2a39bc0() {
   return (neuron0x2a2a370()*1.5121);
}

double NNfunction_ns_chi04_cL::synapse0x2a39f40() {
   return (neuron0x2a257b0()*-2.56689);
}

double NNfunction_ns_chi04_cL::synapse0x2a39f80() {
   return (neuron0x2a25af0()*0.261779);
}

double NNfunction_ns_chi04_cL::synapse0x2a39fc0() {
   return (neuron0x2a25e30()*0.145266);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a000() {
   return (neuron0x2a26170()*-0.630475);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a040() {
   return (neuron0x2a264b0()*1.25904);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a080() {
   return (neuron0x2a267f0()*0.41339);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a0c0() {
   return (neuron0x2a26b30()*0.699708);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a100() {
   return (neuron0x2a26e70()*0.184764);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a140() {
   return (neuron0x2a271b0()*0.278022);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a180() {
   return (neuron0x2a274f0()*-0.253291);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a1c0() {
   return (neuron0x2a27830()*-0.347164);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a200() {
   return (neuron0x2a27b70()*-0.192953);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a240() {
   return (neuron0x2a27eb0()*-0.486246);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a280() {
   return (neuron0x2a281f0()*-0.0716602);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a2c0() {
   return (neuron0x2a28530()*0.0481029);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a300() {
   return (neuron0x2a28870()*-0.186757);
}

double NNfunction_ns_chi04_cL::synapse0x2a39d90() {
   return (neuron0x2a28bb0()*-0.931593);
}

double NNfunction_ns_chi04_cL::synapse0x2a39dd0() {
   return (neuron0x2a29110()*0.433265);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a450() {
   return (neuron0x2a29330()*0.519247);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a490() {
   return (neuron0x2a29670()*-0.316397);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a4d0() {
   return (neuron0x2a299b0()*-0.237833);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a510() {
   return (neuron0x2a29cf0()*-0.691719);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a550() {
   return (neuron0x2a2a030()*-0.603309);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a590() {
   return (neuron0x2a2a370()*0.341905);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a910() {
   return (neuron0x2a257b0()*-0.415914);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a950() {
   return (neuron0x2a25af0()*-0.330989);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a990() {
   return (neuron0x2a25e30()*-2.01221);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a9d0() {
   return (neuron0x2a26170()*0.213652);
}

double NNfunction_ns_chi04_cL::synapse0x2a3aa10() {
   return (neuron0x2a264b0()*-0.0278587);
}

double NNfunction_ns_chi04_cL::synapse0x2a3aa50() {
   return (neuron0x2a267f0()*-0.0806414);
}

double NNfunction_ns_chi04_cL::synapse0x2a3aa90() {
   return (neuron0x2a26b30()*0.821414);
}

double NNfunction_ns_chi04_cL::synapse0x2a3aad0() {
   return (neuron0x2a26e70()*-0.14274);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ab10() {
   return (neuron0x2a271b0()*0.0187988);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ab50() {
   return (neuron0x2a274f0()*0.188522);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ab90() {
   return (neuron0x2a27830()*-0.101675);
}

double NNfunction_ns_chi04_cL::synapse0x2a3abd0() {
   return (neuron0x2a27b70()*-0.0917716);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ac10() {
   return (neuron0x2a27eb0()*-0.430707);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ac50() {
   return (neuron0x2a281f0()*-0.533322);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ac90() {
   return (neuron0x2a28530()*0.241843);
}

double NNfunction_ns_chi04_cL::synapse0x2a3acd0() {
   return (neuron0x2a28870()*0.131428);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a760() {
   return (neuron0x2a28bb0()*-0.290616);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a7a0() {
   return (neuron0x2a29110()*-0.0535671);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ae20() {
   return (neuron0x2a29330()*0.44685);
}

double NNfunction_ns_chi04_cL::synapse0x2a3ae60() {
   return (neuron0x2a29670()*-0.0299509);
}

double NNfunction_ns_chi04_cL::synapse0x2a3aea0() {
   return (neuron0x2a299b0()*0.527826);
}

double NNfunction_ns_chi04_cL::synapse0x2a3aee0() {
   return (neuron0x2a29cf0()*0.725966);
}

double NNfunction_ns_chi04_cL::synapse0x2a3af20() {
   return (neuron0x2a2a030()*0.112369);
}

double NNfunction_ns_chi04_cL::synapse0x2a3af60() {
   return (neuron0x2a2a370()*-3.23159);
}

double NNfunction_ns_chi04_cL::synapse0x2a4ce30() {
   return (neuron0x2a257b0()*-0.0133383);
}

double NNfunction_ns_chi04_cL::synapse0x2a4ce70() {
   return (neuron0x2a25af0()*0.133607);
}

double NNfunction_ns_chi04_cL::synapse0x2a4ceb0() {
   return (neuron0x2a25e30()*-0.599685);
}

double NNfunction_ns_chi04_cL::synapse0x2a4cef0() {
   return (neuron0x2a26170()*0.0320461);
}

double NNfunction_ns_chi04_cL::synapse0x2a4cf30() {
   return (neuron0x2a264b0()*0.0183376);
}

double NNfunction_ns_chi04_cL::synapse0x2a4cf70() {
   return (neuron0x2a267f0()*-0.0233096);
}

double NNfunction_ns_chi04_cL::synapse0x2a4cfb0() {
   return (neuron0x2a26b30()*0.0119289);
}

double NNfunction_ns_chi04_cL::synapse0x2a4cff0() {
   return (neuron0x2a26e70()*-0.00326061);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d030() {
   return (neuron0x2a271b0()*0.00796391);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d070() {
   return (neuron0x2a274f0()*0.032246);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d0b0() {
   return (neuron0x2a27830()*0.0231703);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d0f0() {
   return (neuron0x2a27b70()*0.0012394);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d130() {
   return (neuron0x2a27eb0()*0.052924);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d170() {
   return (neuron0x2a281f0()*0.000544759);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d1b0() {
   return (neuron0x2a28530()*0.0203577);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d1f0() {
   return (neuron0x2a28870()*-0.00271524);
}

double NNfunction_ns_chi04_cL::synapse0x2a3afa0() {
   return (neuron0x2a28bb0()*-0.0102177);
}

double NNfunction_ns_chi04_cL::synapse0x2a3afe0() {
   return (neuron0x2a29110()*0.00280611);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d340() {
   return (neuron0x2a29330()*0.00765643);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d380() {
   return (neuron0x2a29670()*-0.000234332);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d3c0() {
   return (neuron0x2a299b0()*-0.00389022);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d400() {
   return (neuron0x2a29cf0()*-0.0147735);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d440() {
   return (neuron0x2a2a030()*-0.016694);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d480() {
   return (neuron0x2a2a370()*0.273322);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d800() {
   return (neuron0x2a257b0()*0.166079);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d840() {
   return (neuron0x2a25af0()*-6.53133);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d880() {
   return (neuron0x2a25e30()*-2.12762);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d8c0() {
   return (neuron0x2a26170()*0.0212923);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d900() {
   return (neuron0x2a264b0()*0.0362139);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d940() {
   return (neuron0x2a267f0()*0.126332);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d980() {
   return (neuron0x2a26b30()*0.0439462);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d9c0() {
   return (neuron0x2a26e70()*0.087261);
}

double NNfunction_ns_chi04_cL::synapse0x2a4da00() {
   return (neuron0x2a271b0()*-0.12841);
}

double NNfunction_ns_chi04_cL::synapse0x2a4da40() {
   return (neuron0x2a274f0()*0.0839043);
}

double NNfunction_ns_chi04_cL::synapse0x2a4da80() {
   return (neuron0x2a27830()*-0.124615);
}

double NNfunction_ns_chi04_cL::synapse0x2a4dac0() {
   return (neuron0x2a27b70()*-0.178687);
}

double NNfunction_ns_chi04_cL::synapse0x2a4db00() {
   return (neuron0x2a27eb0()*0.000580443);
}

double NNfunction_ns_chi04_cL::synapse0x2a4db40() {
   return (neuron0x2a281f0()*-0.107748);
}

double NNfunction_ns_chi04_cL::synapse0x2a4db80() {
   return (neuron0x2a28530()*0.0413178);
}

double NNfunction_ns_chi04_cL::synapse0x2a4dbc0() {
   return (neuron0x2a28870()*0.0435076);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d650() {
   return (neuron0x2a28bb0()*-0.0482705);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d690() {
   return (neuron0x2a29110()*0.0125062);
}

double NNfunction_ns_chi04_cL::synapse0x2a4dd10() {
   return (neuron0x2a29330()*0.0913669);
}

double NNfunction_ns_chi04_cL::synapse0x2a4dd50() {
   return (neuron0x2a29670()*0.121053);
}

double NNfunction_ns_chi04_cL::synapse0x2a4dd90() {
   return (neuron0x2a299b0()*-0.0385487);
}

double NNfunction_ns_chi04_cL::synapse0x2a4ddd0() {
   return (neuron0x2a29cf0()*-0.0798265);
}

double NNfunction_ns_chi04_cL::synapse0x2a4de10() {
   return (neuron0x2a2a030()*0.0840077);
}

double NNfunction_ns_chi04_cL::synapse0x2a4de50() {
   return (neuron0x2a2a370()*-0.31728);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e1d0() {
   return (neuron0x2a257b0()*0.909492);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e210() {
   return (neuron0x2a25af0()*0.540733);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e250() {
   return (neuron0x2a25e30()*1.11451);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e290() {
   return (neuron0x2a26170()*-0.0247582);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e2d0() {
   return (neuron0x2a264b0()*0.240946);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e310() {
   return (neuron0x2a267f0()*-1.24344);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e350() {
   return (neuron0x2a26b30()*0.0546724);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e390() {
   return (neuron0x2a26e70()*-0.767223);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e3d0() {
   return (neuron0x2a271b0()*0.41455);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e410() {
   return (neuron0x2a274f0()*0.072545);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e450() {
   return (neuron0x2a27830()*-1.03921);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e490() {
   return (neuron0x2a27b70()*-0.801427);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e4d0() {
   return (neuron0x2a27eb0()*1.38172);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e510() {
   return (neuron0x2a281f0()*-0.37287);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e550() {
   return (neuron0x2a28530()*1.36406);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e590() {
   return (neuron0x2a28870()*0.807637);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e020() {
   return (neuron0x2a28bb0()*-0.690173);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e060() {
   return (neuron0x2a29110()*0.0248516);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e6e0() {
   return (neuron0x2a29330()*-0.331076);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e720() {
   return (neuron0x2a29670()*-0.0159815);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e760() {
   return (neuron0x2a299b0()*-0.707239);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e7a0() {
   return (neuron0x2a29cf0()*0.763834);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e7e0() {
   return (neuron0x2a2a030()*-0.381967);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e820() {
   return (neuron0x2a2a370()*-0.0636357);
}

double NNfunction_ns_chi04_cL::synapse0x2a4eba0() {
   return (neuron0x2a257b0()*0.0451255);
}

double NNfunction_ns_chi04_cL::synapse0x2a4ebe0() {
   return (neuron0x2a25af0()*-1.06099);
}

double NNfunction_ns_chi04_cL::synapse0x2a4ec20() {
   return (neuron0x2a25e30()*-1.61651);
}

double NNfunction_ns_chi04_cL::synapse0x2a4ec60() {
   return (neuron0x2a26170()*0.0708552);
}

double NNfunction_ns_chi04_cL::synapse0x2a4eca0() {
   return (neuron0x2a264b0()*0.244579);
}

double NNfunction_ns_chi04_cL::synapse0x2a4ece0() {
   return (neuron0x2a267f0()*-0.314878);
}

double NNfunction_ns_chi04_cL::synapse0x2a4ed20() {
   return (neuron0x2a26b30()*-0.849466);
}

double NNfunction_ns_chi04_cL::synapse0x2a4ed60() {
   return (neuron0x2a26e70()*-0.85912);
}

double NNfunction_ns_chi04_cL::synapse0x2a4eda0() {
   return (neuron0x2a271b0()*0.0262968);
}

double NNfunction_ns_chi04_cL::synapse0x2a4ede0() {
   return (neuron0x2a274f0()*0.335056);
}

double NNfunction_ns_chi04_cL::synapse0x2a4ee20() {
   return (neuron0x2a27830()*-0.0772865);
}

double NNfunction_ns_chi04_cL::synapse0x2a4ee60() {
   return (neuron0x2a27b70()*-0.215345);
}

double NNfunction_ns_chi04_cL::synapse0x2a4eea0() {
   return (neuron0x2a27eb0()*-0.675852);
}

double NNfunction_ns_chi04_cL::synapse0x2a4eee0() {
   return (neuron0x2a281f0()*-0.00452797);
}

double NNfunction_ns_chi04_cL::synapse0x2a4ef20() {
   return (neuron0x2a28530()*-0.507174);
}

double NNfunction_ns_chi04_cL::synapse0x2a4ef60() {
   return (neuron0x2a28870()*-0.421113);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e9f0() {
   return (neuron0x2a28bb0()*-0.153493);
}

double NNfunction_ns_chi04_cL::synapse0x2a4ea30() {
   return (neuron0x2a29110()*-0.00497692);
}

double NNfunction_ns_chi04_cL::synapse0x2a4f0b0() {
   return (neuron0x2a29330()*-0.262823);
}

double NNfunction_ns_chi04_cL::synapse0x2a4f0f0() {
   return (neuron0x2a29670()*-0.0581772);
}

double NNfunction_ns_chi04_cL::synapse0x2a4f130() {
   return (neuron0x2a299b0()*0.124084);
}

double NNfunction_ns_chi04_cL::synapse0x2a4f170() {
   return (neuron0x2a29cf0()*-0.547374);
}

double NNfunction_ns_chi04_cL::synapse0x2a4f1b0() {
   return (neuron0x2a2a030()*-0.0778247);
}

double NNfunction_ns_chi04_cL::synapse0x2a4f1f0() {
   return (neuron0x2a2a370()*-3.30308);
}

double NNfunction_ns_chi04_cL::synapse0x27ef100() {
   return (neuron0x2a2a7e0()*0.0328438);
}

double NNfunction_ns_chi04_cL::synapse0x27ef140() {
   return (neuron0x2a2b130()*-0.236368);
}

double NNfunction_ns_chi04_cL::synapse0x2a2cca0() {
   return (neuron0x2a2bc10()*-1.32177);
}

double NNfunction_ns_chi04_cL::synapse0x2a2cce0() {
   return (neuron0x2a2b6b0()*2.39803);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d670() {
   return (neuron0x2a2c9f0()*0.0750718);
}

double NNfunction_ns_chi04_cL::synapse0x2a2d6b0() {
   return (neuron0x2a2d3c0()*0.00159383);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e440() {
   return (neuron0x2a2e190()*-2.8956);
}

double NNfunction_ns_chi04_cL::synapse0x2a2e480() {
   return (neuron0x2a2eb60()*0.104741);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ee10() {
   return (neuron0x2a2f530()*-0.0235134);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ee50() {
   return (neuron0x2a30010()*-0.074226);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f7e0() {
   return (neuron0x2a309e0()*1.32396);
}

double NNfunction_ns_chi04_cL::synapse0x2a2f820() {
   return (neuron0x2a2dac0()*-0.737176);
}

double NNfunction_ns_chi04_cL::synapse0x2a302c0() {
   return (neuron0x2a32590()*-0.225681);
}

double NNfunction_ns_chi04_cL::synapse0x2a30300() {
   return (neuron0x2a32f60()*-1.86468);
}

double NNfunction_ns_chi04_cL::synapse0x2a30c90() {
   return (neuron0x2a33930()*0.41093);
}

double NNfunction_ns_chi04_cL::synapse0x2a30cd0() {
   return (neuron0x2a34300()*0.0505877);
}

double NNfunction_ns_chi04_cL::synapse0x2a2dd70() {
   return (neuron0x2a36110()*0.0195195);
}

double NNfunction_ns_chi04_cL::synapse0x2a2ddb0() {
   return (neuron0x2a363f0()*-0.0323895);
}

double NNfunction_ns_chi04_cL::synapse0x2a32840() {
   return (neuron0x2a36dc0()*1.34452);
}

double NNfunction_ns_chi04_cL::synapse0x2a32880() {
   return (neuron0x2a37790()*-0.00357027);
}

double NNfunction_ns_chi04_cL::synapse0x2a33210() {
   return (neuron0x2a38160()*4.70398);
}

double NNfunction_ns_chi04_cL::synapse0x2a33250() {
   return (neuron0x2a38b30()*0.139203);
}

double NNfunction_ns_chi04_cL::synapse0x2a33be0() {
   return (neuron0x2a31680()*-0.0461446);
}

double NNfunction_ns_chi04_cL::synapse0x2a33c20() {
   return (neuron0x2a32050()*1.33043);
}

double NNfunction_ns_chi04_cL::synapse0x2a345b0() {
   return (neuron0x2a3b8c0()*-0.0178755);
}

double NNfunction_ns_chi04_cL::synapse0x2a345f0() {
   return (neuron0x2a3c290()*0.920303);
}

double NNfunction_ns_chi04_cL::synapse0x2a28750() {
   return (neuron0x2a3cc60()*0.00180336);
}

double NNfunction_ns_chi04_cL::synapse0x2a28790() {
   return (neuron0x2a3d630()*-0.4033);
}

double NNfunction_ns_chi04_cL::synapse0x2a366a0() {
   return (neuron0x2a3e000()*3.8356);
}

double NNfunction_ns_chi04_cL::synapse0x2a366e0() {
   return (neuron0x2a3e9d0()*-0.0536751);
}

double NNfunction_ns_chi04_cL::synapse0x2a37070() {
   return (neuron0x2a3f3a0()*1.05693);
}

double NNfunction_ns_chi04_cL::synapse0x2a370b0() {
   return (neuron0x2a3fd70()*-0.413721);
}

double NNfunction_ns_chi04_cL::synapse0x2a37a40() {
   return (neuron0x2a35e00()*0.0345866);
}

double NNfunction_ns_chi04_cL::synapse0x2a37a80() {
   return (neuron0x2a42950()*0.0474674);
}

double NNfunction_ns_chi04_cL::synapse0x2a38410() {
   return (neuron0x2a43320()*0.0906468);
}

double NNfunction_ns_chi04_cL::synapse0x2a38450() {
   return (neuron0x2a43cf0()*-0.0195447);
}

double NNfunction_ns_chi04_cL::synapse0x2a38de0() {
   return (neuron0x2a446c0()*-0.0629055);
}

double NNfunction_ns_chi04_cL::synapse0x2a38e20() {
   return (neuron0x2a45090()*0.16215);
}

double NNfunction_ns_chi04_cL::synapse0x2a31930() {
   return (neuron0x2a45a60()*-3.20445);
}

double NNfunction_ns_chi04_cL::synapse0x2a31970() {
   return (neuron0x2a46430()*-2.016);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b1e0() {
   return (neuron0x2a46e00()*1.23942);
}

double NNfunction_ns_chi04_cL::synapse0x2a3b220() {
   return (neuron0x2a479e0()*1.10503);
}

double NNfunction_ns_chi04_cL::synapse0x2a3bb70() {
   return (neuron0x2a483b0()*-3.56248);
}

double NNfunction_ns_chi04_cL::synapse0x2a3bbb0() {
   return (neuron0x2a39230()*-0.0143536);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c540() {
   return (neuron0x2a39c00()*-0.04652);
}

double NNfunction_ns_chi04_cL::synapse0x2a3c580() {
   return (neuron0x2a3a5d0()*0.0803245);
}

double NNfunction_ns_chi04_cL::synapse0x2a3cf10() {
   return (neuron0x2a4cc10()*-1.27535);
}

double NNfunction_ns_chi04_cL::synapse0x2a3cf50() {
   return (neuron0x2a4d4c0()*-1.42396);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d8e0() {
   return (neuron0x2a4de90()*0.00641877);
}

double NNfunction_ns_chi04_cL::synapse0x2a3d920() {
   return (neuron0x2a4e860()*-0.0418902);
}

double NNfunction_ns_chi04_cL::synapse0x2a40020() {
   return (neuron0x2a2a7e0()*-0.0282112);
}

double NNfunction_ns_chi04_cL::synapse0x2a40060() {
   return (neuron0x2a2b130()*-0.203428);
}

double NNfunction_ns_chi04_cL::synapse0x2a355e0() {
   return (neuron0x2a2bc10()*0.869356);
}

double NNfunction_ns_chi04_cL::synapse0x2a35620() {
   return (neuron0x2a2b6b0()*1.26199);
}

double NNfunction_ns_chi04_cL::synapse0x2a42c00() {
   return (neuron0x2a2c9f0()*-0.0902748);
}

double NNfunction_ns_chi04_cL::synapse0x2a42c40() {
   return (neuron0x2a2d3c0()*-0.0369282);
}

double NNfunction_ns_chi04_cL::synapse0x2a435d0() {
   return (neuron0x2a2e190()*-1.53327);
}

double NNfunction_ns_chi04_cL::synapse0x2a43610() {
   return (neuron0x2a2eb60()*0.425082);
}

double NNfunction_ns_chi04_cL::synapse0x2a43fa0() {
   return (neuron0x2a2f530()*0.0235841);
}

double NNfunction_ns_chi04_cL::synapse0x2a43fe0() {
   return (neuron0x2a30010()*0.0808835);
}

double NNfunction_ns_chi04_cL::synapse0x2a44970() {
   return (neuron0x2a309e0()*1.1137);
}

double NNfunction_ns_chi04_cL::synapse0x2a449b0() {
   return (neuron0x2a2dac0()*-0.94476);
}

double NNfunction_ns_chi04_cL::synapse0x2a45340() {
   return (neuron0x2a32590()*0.52114);
}

double NNfunction_ns_chi04_cL::synapse0x2a45380() {
   return (neuron0x2a32f60()*-2.19665);
}

double NNfunction_ns_chi04_cL::synapse0x2a45d10() {
   return (neuron0x2a33930()*-0.701895);
}

double NNfunction_ns_chi04_cL::synapse0x2a45d50() {
   return (neuron0x2a34300()*-0.0128942);
}

double NNfunction_ns_chi04_cL::synapse0x2a466e0() {
   return (neuron0x2a36110()*-0.0379797);
}

double NNfunction_ns_chi04_cL::synapse0x2a46720() {
   return (neuron0x2a363f0()*-0.730188);
}

double NNfunction_ns_chi04_cL::synapse0x2a470b0() {
   return (neuron0x2a36dc0()*1.32608);
}

double NNfunction_ns_chi04_cL::synapse0x2a470f0() {
   return (neuron0x2a37790()*-0.0874063);
}

double NNfunction_ns_chi04_cL::synapse0x2a47c90() {
   return (neuron0x2a38160()*2.20928);
}

double NNfunction_ns_chi04_cL::synapse0x2a47cd0() {
   return (neuron0x2a38b30()*0.084296);
}

double NNfunction_ns_chi04_cL::synapse0x2a48660() {
   return (neuron0x2a31680()*0.115984);
}

double NNfunction_ns_chi04_cL::synapse0x2a486a0() {
   return (neuron0x2a32050()*0.189336);
}

double NNfunction_ns_chi04_cL::synapse0x2a394e0() {
   return (neuron0x2a3b8c0()*-0.13741);
}

double NNfunction_ns_chi04_cL::synapse0x2a39520() {
   return (neuron0x2a3c290()*-0.348151);
}

double NNfunction_ns_chi04_cL::synapse0x2a39eb0() {
   return (neuron0x2a3cc60()*0.0352127);
}

double NNfunction_ns_chi04_cL::synapse0x2a39ef0() {
   return (neuron0x2a3d630()*1.90712);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a880() {
   return (neuron0x2a3e000()*2.00751);
}

double NNfunction_ns_chi04_cL::synapse0x2a3a8c0() {
   return (neuron0x2a3e9d0()*0.173475);
}

double NNfunction_ns_chi04_cL::synapse0x2a4cda0() {
   return (neuron0x2a3f3a0()*-2.06097);
}

double NNfunction_ns_chi04_cL::synapse0x2a4cde0() {
   return (neuron0x2a3fd70()*1.27565);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d770() {
   return (neuron0x2a35e00()*-0.206415);
}

double NNfunction_ns_chi04_cL::synapse0x2a4d7b0() {
   return (neuron0x2a42950()*-0.0270283);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e140() {
   return (neuron0x2a43320()*0.326276);
}

double NNfunction_ns_chi04_cL::synapse0x2a4e180() {
   return (neuron0x2a43cf0()*-0.0554417);
}

double NNfunction_ns_chi04_cL::synapse0x2a4eb10() {
   return (neuron0x2a446c0()*-0.0646331);
}

double NNfunction_ns_chi04_cL::synapse0x2a4eb50() {
   return (neuron0x2a45090()*-0.308402);
}

double NNfunction_ns_chi04_cL::synapse0x2a2aa00() {
   return (neuron0x2a45a60()*-1.43192);
}

double NNfunction_ns_chi04_cL::synapse0x2a2aa40() {
   return (neuron0x2a46430()*0.965374);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e2b0() {
   return (neuron0x2a46e00()*-0.767081);
}

double NNfunction_ns_chi04_cL::synapse0x2a3e2f0() {
   return (neuron0x2a479e0()*0.418778);
}

double NNfunction_ns_chi04_cL::synapse0x2a4f230() {
   return (neuron0x2a483b0()*-1.68609);
}

double NNfunction_ns_chi04_cL::synapse0x2a4f270() {
   return (neuron0x2a39230()*0.0112178);
}

double NNfunction_ns_chi04_cL::synapse0x2a4f2b0() {
   return (neuron0x2a39c00()*0.0723825);
}

double NNfunction_ns_chi04_cL::synapse0x2a4f2f0() {
   return (neuron0x2a3a5d0()*-0.0486861);
}

double NNfunction_ns_chi04_cL::synapse0x2a561a0() {
   return (neuron0x2a4cc10()*-0.388381);
}

double NNfunction_ns_chi04_cL::synapse0x2a561e0() {
   return (neuron0x2a4d4c0()*0.565645);
}

double NNfunction_ns_chi04_cL::synapse0x2a56220() {
   return (neuron0x2a4de90()*-0.0831882);
}

double NNfunction_ns_chi04_cL::synapse0x2a56260() {
   return (neuron0x2a4e860()*-0.244655);
}

double NNfunction_ns_chi04_cL::synapse0x2a565e0() {
   return (neuron0x2a2a7e0()*-0.0231481);
}

double NNfunction_ns_chi04_cL::synapse0x2a56620() {
   return (neuron0x2a2b130()*0.525403);
}

double NNfunction_ns_chi04_cL::synapse0x2a56660() {
   return (neuron0x2a2bc10()*-2.60531);
}

double NNfunction_ns_chi04_cL::synapse0x2a566a0() {
   return (neuron0x2a2b6b0()*0.590934);
}

double NNfunction_ns_chi04_cL::synapse0x2a566e0() {
   return (neuron0x2a2c9f0()*-0.00544535);
}

double NNfunction_ns_chi04_cL::synapse0x2a56720() {
   return (neuron0x2a2d3c0()*0.0295196);
}

double NNfunction_ns_chi04_cL::synapse0x2a56760() {
   return (neuron0x2a2e190()*-0.132978);
}

double NNfunction_ns_chi04_cL::synapse0x2a567a0() {
   return (neuron0x2a2eb60()*-0.662156);
}

double NNfunction_ns_chi04_cL::synapse0x2a567e0() {
   return (neuron0x2a2f530()*0.00399042);
}

double NNfunction_ns_chi04_cL::synapse0x2a56820() {
   return (neuron0x2a30010()*0.018388);
}

double NNfunction_ns_chi04_cL::synapse0x2a56860() {
   return (neuron0x2a309e0()*0.855457);
}

double NNfunction_ns_chi04_cL::synapse0x2a568a0() {
   return (neuron0x2a2dac0()*1.47923);
}

double NNfunction_ns_chi04_cL::synapse0x2a568e0() {
   return (neuron0x2a32590()*-0.288765);
}

double NNfunction_ns_chi04_cL::synapse0x2a56920() {
   return (neuron0x2a32f60()*1.0066);
}

double NNfunction_ns_chi04_cL::synapse0x2a56960() {
   return (neuron0x2a33930()*0.316171);
}

double NNfunction_ns_chi04_cL::synapse0x2a569a0() {
   return (neuron0x2a34300()*-0.0569569);
}

double NNfunction_ns_chi04_cL::synapse0x2a56430() {
   return (neuron0x2a36110()*0.0333535);
}

double NNfunction_ns_chi04_cL::synapse0x2a56470() {
   return (neuron0x2a363f0()*0.864101);
}

double NNfunction_ns_chi04_cL::synapse0x2a56af0() {
   return (neuron0x2a36dc0()*-3.5653);
}

double NNfunction_ns_chi04_cL::synapse0x2a56b30() {
   return (neuron0x2a37790()*0.131287);
}

double NNfunction_ns_chi04_cL::synapse0x2a56b70() {
   return (neuron0x2a38160()*0.56588);
}

double NNfunction_ns_chi04_cL::synapse0x2a56bb0() {
   return (neuron0x2a38b30()*-0.35084);
}

double NNfunction_ns_chi04_cL::synapse0x2a56bf0() {
   return (neuron0x2a31680()*-0.0688882);
}

double NNfunction_ns_chi04_cL::synapse0x2a56c30() {
   return (neuron0x2a32050()*3.04972);
}

double NNfunction_ns_chi04_cL::synapse0x2a56c70() {
   return (neuron0x2a3b8c0()*0.19429);
}

double NNfunction_ns_chi04_cL::synapse0x2a56cb0() {
   return (neuron0x2a3c290()*-0.662688);
}

double NNfunction_ns_chi04_cL::synapse0x2a56cf0() {
   return (neuron0x2a3cc60()*-0.0255936);
}

double NNfunction_ns_chi04_cL::synapse0x2a56d30() {
   return (neuron0x2a3d630()*-0.11156);
}

double NNfunction_ns_chi04_cL::synapse0x2a56d70() {
   return (neuron0x2a3e000()*0.468234);
}

double NNfunction_ns_chi04_cL::synapse0x2a56db0() {
   return (neuron0x2a3e9d0()*-0.129461);
}

double NNfunction_ns_chi04_cL::synapse0x2a56df0() {
   return (neuron0x2a3f3a0()*2.14727);
}

double NNfunction_ns_chi04_cL::synapse0x2a56e30() {
   return (neuron0x2a3fd70()*-1.01909);
}

double NNfunction_ns_chi04_cL::synapse0x2a569e0() {
   return (neuron0x2a35e00()*0.206831);
}

double NNfunction_ns_chi04_cL::synapse0x2a56a20() {
   return (neuron0x2a42950()*-0.0744252);
}

double NNfunction_ns_chi04_cL::synapse0x2a56a60() {
   return (neuron0x2a43320()*-0.532602);
}

double NNfunction_ns_chi04_cL::synapse0x2a56aa0() {
   return (neuron0x2a43cf0()*0.105711);
}

double NNfunction_ns_chi04_cL::synapse0x2a57080() {
   return (neuron0x2a446c0()*0.16484);
}

double NNfunction_ns_chi04_cL::synapse0x2a570c0() {
   return (neuron0x2a45090()*0.142507);
}

double NNfunction_ns_chi04_cL::synapse0x2a57100() {
   return (neuron0x2a45a60()*-0.249182);
}

double NNfunction_ns_chi04_cL::synapse0x2a57140() {
   return (neuron0x2a46430()*-1.4308);
}

double NNfunction_ns_chi04_cL::synapse0x2a57180() {
   return (neuron0x2a46e00()*1.01679);
}

double NNfunction_ns_chi04_cL::synapse0x2a571c0() {
   return (neuron0x2a479e0()*0.113101);
}

double NNfunction_ns_chi04_cL::synapse0x2a57200() {
   return (neuron0x2a483b0()*-0.213989);
}

double NNfunction_ns_chi04_cL::synapse0x2a57240() {
   return (neuron0x2a39230()*-0.00729156);
}

double NNfunction_ns_chi04_cL::synapse0x2a57280() {
   return (neuron0x2a39c00()*-0.0558752);
}

double NNfunction_ns_chi04_cL::synapse0x2a572c0() {
   return (neuron0x2a3a5d0()*-0.0918876);
}

double NNfunction_ns_chi04_cL::synapse0x2a57300() {
   return (neuron0x2a4cc10()*-2.22289);
}

double NNfunction_ns_chi04_cL::synapse0x2a57340() {
   return (neuron0x2a4d4c0()*1.46601);
}

double NNfunction_ns_chi04_cL::synapse0x2a57380() {
   return (neuron0x2a4de90()*0.0983706);
}

double NNfunction_ns_chi04_cL::synapse0x2a573c0() {
   return (neuron0x2a4e860()*0.375763);
}

double NNfunction_ns_chi04_cL::synapse0x2a57740() {
   return (neuron0x2a2a7e0()*0.33172);
}

double NNfunction_ns_chi04_cL::synapse0x2a57780() {
   return (neuron0x2a2b130()*0.0875161);
}

double NNfunction_ns_chi04_cL::synapse0x2a577c0() {
   return (neuron0x2a2bc10()*0.136893);
}

double NNfunction_ns_chi04_cL::synapse0x2a57800() {
   return (neuron0x2a2b6b0()*-0.277399);
}

double NNfunction_ns_chi04_cL::synapse0x2a57840() {
   return (neuron0x2a2c9f0()*-0.00847994);
}

double NNfunction_ns_chi04_cL::synapse0x2a57880() {
   return (neuron0x2a2d3c0()*-0.382003);
}

double NNfunction_ns_chi04_cL::synapse0x2a578c0() {
   return (neuron0x2a2e190()*-0.693655);
}

double NNfunction_ns_chi04_cL::synapse0x2a57900() {
   return (neuron0x2a2eb60()*0.304905);
}

double NNfunction_ns_chi04_cL::synapse0x2a57940() {
   return (neuron0x2a2f530()*0.0537215);
}

double NNfunction_ns_chi04_cL::synapse0x2a57980() {
   return (neuron0x2a30010()*-0.291413);
}

double NNfunction_ns_chi04_cL::synapse0x2a579c0() {
   return (neuron0x2a309e0()*-0.0530662);
}

double NNfunction_ns_chi04_cL::synapse0x2a57a00() {
   return (neuron0x2a2dac0()*-0.30805);
}

double NNfunction_ns_chi04_cL::synapse0x2a57a40() {
   return (neuron0x2a32590()*-0.227474);
}

double NNfunction_ns_chi04_cL::synapse0x2a57a80() {
   return (neuron0x2a32f60()*-0.0679601);
}

double NNfunction_ns_chi04_cL::synapse0x2a57ac0() {
   return (neuron0x2a33930()*0.328438);
}

double NNfunction_ns_chi04_cL::synapse0x2a57b00() {
   return (neuron0x2a34300()*-0.274302);
}

double NNfunction_ns_chi04_cL::synapse0x2a57590() {
   return (neuron0x2a36110()*-0.00594547);
}

double NNfunction_ns_chi04_cL::synapse0x2a575d0() {
   return (neuron0x2a363f0()*-0.0064104);
}

double NNfunction_ns_chi04_cL::synapse0x2a57c50() {
   return (neuron0x2a36dc0()*-0.155491);
}

double NNfunction_ns_chi04_cL::synapse0x2a57c90() {
   return (neuron0x2a37790()*-0.167387);
}

double NNfunction_ns_chi04_cL::synapse0x2a57cd0() {
   return (neuron0x2a38160()*0.0378631);
}

double NNfunction_ns_chi04_cL::synapse0x2a57d10() {
   return (neuron0x2a38b30()*0.0183586);
}

double NNfunction_ns_chi04_cL::synapse0x2a57d50() {
   return (neuron0x2a31680()*-0.168252);
}

double NNfunction_ns_chi04_cL::synapse0x2a57d90() {
   return (neuron0x2a32050()*0.142197);
}

double NNfunction_ns_chi04_cL::synapse0x2a57dd0() {
   return (neuron0x2a3b8c0()*-0.183353);
}

double NNfunction_ns_chi04_cL::synapse0x2a57e10() {
   return (neuron0x2a3c290()*-0.130608);
}

double NNfunction_ns_chi04_cL::synapse0x2a57e50() {
   return (neuron0x2a3cc60()*0.230466);
}

double NNfunction_ns_chi04_cL::synapse0x2a57e90() {
   return (neuron0x2a3d630()*-0.105583);
}

double NNfunction_ns_chi04_cL::synapse0x2a57ed0() {
   return (neuron0x2a3e000()*-0.0216932);
}

double NNfunction_ns_chi04_cL::synapse0x2a57f10() {
   return (neuron0x2a3e9d0()*-0.366746);
}

double NNfunction_ns_chi04_cL::synapse0x2a57f50() {
   return (neuron0x2a3f3a0()*-0.110825);
}

double NNfunction_ns_chi04_cL::synapse0x2a57f90() {
   return (neuron0x2a3fd70()*-0.16115);
}

double NNfunction_ns_chi04_cL::synapse0x2a57b40() {
   return (neuron0x2a35e00()*-0.241251);
}

double NNfunction_ns_chi04_cL::synapse0x2a57b80() {
   return (neuron0x2a42950()*-0.240688);
}

double NNfunction_ns_chi04_cL::synapse0x2a57bc0() {
   return (neuron0x2a43320()*-0.0200495);
}

double NNfunction_ns_chi04_cL::synapse0x2a57c00() {
   return (neuron0x2a43cf0()*-0.462187);
}

double NNfunction_ns_chi04_cL::synapse0x2a581e0() {
   return (neuron0x2a446c0()*-0.414761);
}

double NNfunction_ns_chi04_cL::synapse0x2a58220() {
   return (neuron0x2a45090()*-0.218374);
}

double NNfunction_ns_chi04_cL::synapse0x2a58260() {
   return (neuron0x2a45a60()*0.187643);
}

double NNfunction_ns_chi04_cL::synapse0x2a582a0() {
   return (neuron0x2a46430()*-0.438287);
}

double NNfunction_ns_chi04_cL::synapse0x2a582e0() {
   return (neuron0x2a46e00()*0.596167);
}

double NNfunction_ns_chi04_cL::synapse0x2a58320() {
   return (neuron0x2a479e0()*-0.231582);
}

double NNfunction_ns_chi04_cL::synapse0x2a58360() {
   return (neuron0x2a483b0()*-0.0097286);
}

double NNfunction_ns_chi04_cL::synapse0x2a583a0() {
   return (neuron0x2a39230()*-0.334994);
}

double NNfunction_ns_chi04_cL::synapse0x2a583e0() {
   return (neuron0x2a39c00()*-0.541689);
}

double NNfunction_ns_chi04_cL::synapse0x2a58420() {
   return (neuron0x2a3a5d0()*-0.567221);
}

double NNfunction_ns_chi04_cL::synapse0x2a58460() {
   return (neuron0x2a4cc10()*0.0530239);
}

double NNfunction_ns_chi04_cL::synapse0x2a584a0() {
   return (neuron0x2a4d4c0()*0.132884);
}

double NNfunction_ns_chi04_cL::synapse0x2a584e0() {
   return (neuron0x2a4de90()*0.0713364);
}

double NNfunction_ns_chi04_cL::synapse0x2a58520() {
   return (neuron0x2a4e860()*-0.0396377);
}

double NNfunction_ns_chi04_cL::synapse0x2a588a0() {
   return (neuron0x2a2a7e0()*1.73901);
}

double NNfunction_ns_chi04_cL::synapse0x2a588e0() {
   return (neuron0x2a2b130()*-6.18288);
}

double NNfunction_ns_chi04_cL::synapse0x2a58920() {
   return (neuron0x2a2bc10()*-2.40955);
}

double NNfunction_ns_chi04_cL::synapse0x2a58960() {
   return (neuron0x2a2b6b0()*-0.657579);
}

double NNfunction_ns_chi04_cL::synapse0x2a589a0() {
   return (neuron0x2a2c9f0()*2.24515);
}

double NNfunction_ns_chi04_cL::synapse0x2a589e0() {
   return (neuron0x2a2d3c0()*-2.49029);
}

double NNfunction_ns_chi04_cL::synapse0x2a58a20() {
   return (neuron0x2a2e190()*1.63905);
}

double NNfunction_ns_chi04_cL::synapse0x2a58a60() {
   return (neuron0x2a2eb60()*-0.700523);
}

double NNfunction_ns_chi04_cL::synapse0x2a58aa0() {
   return (neuron0x2a2f530()*1.86854);
}

double NNfunction_ns_chi04_cL::synapse0x2a58ae0() {
   return (neuron0x2a30010()*-2.01213);
}

double NNfunction_ns_chi04_cL::synapse0x2a58b20() {
   return (neuron0x2a309e0()*-0.176332);
}

double NNfunction_ns_chi04_cL::synapse0x2a58b60() {
   return (neuron0x2a2dac0()*-2.65182);
}

double NNfunction_ns_chi04_cL::synapse0x2a58ba0() {
   return (neuron0x2a32590()*-4.04369);
}

double NNfunction_ns_chi04_cL::synapse0x2a58be0() {
   return (neuron0x2a32f60()*1.03099);
}

double NNfunction_ns_chi04_cL::synapse0x2a58c20() {
   return (neuron0x2a33930()*1.97602);
}

double NNfunction_ns_chi04_cL::synapse0x2a58c60() {
   return (neuron0x2a34300()*2.40995);
}

double NNfunction_ns_chi04_cL::synapse0x2a586f0() {
   return (neuron0x2a36110()*-1.61989);
}

double NNfunction_ns_chi04_cL::synapse0x2a58730() {
   return (neuron0x2a363f0()*5.62284);
}

double NNfunction_ns_chi04_cL::synapse0x2a58db0() {
   return (neuron0x2a36dc0()*-0.27589);
}

double NNfunction_ns_chi04_cL::synapse0x2a58df0() {
   return (neuron0x2a37790()*2.20717);
}

double NNfunction_ns_chi04_cL::synapse0x2a58e30() {
   return (neuron0x2a38160()*1.03593);
}

double NNfunction_ns_chi04_cL::synapse0x2a58e70() {
   return (neuron0x2a38b30()*-2.8622);
}

double NNfunction_ns_chi04_cL::synapse0x2a58eb0() {
   return (neuron0x2a31680()*-1.61563);
}

double NNfunction_ns_chi04_cL::synapse0x2a58ef0() {
   return (neuron0x2a32050()*-0.920421);
}

double NNfunction_ns_chi04_cL::synapse0x2a58f30() {
   return (neuron0x2a3b8c0()*1.75102);
}

double NNfunction_ns_chi04_cL::synapse0x2a58f70() {
   return (neuron0x2a3c290()*-1.29794);
}

double NNfunction_ns_chi04_cL::synapse0x2a58fb0() {
   return (neuron0x2a3cc60()*-1.70849);
}

double NNfunction_ns_chi04_cL::synapse0x2a58ff0() {
   return (neuron0x2a3d630()*-0.736738);
}

double NNfunction_ns_chi04_cL::synapse0x2a59030() {
   return (neuron0x2a3e000()*0.387848);
}

double NNfunction_ns_chi04_cL::synapse0x2a59070() {
   return (neuron0x2a3e9d0()*-2.72401);
}

double NNfunction_ns_chi04_cL::synapse0x2a590b0() {
   return (neuron0x2a3f3a0()*2.97134);
}

double NNfunction_ns_chi04_cL::synapse0x2a590f0() {
   return (neuron0x2a3fd70()*-3.70971);
}

double NNfunction_ns_chi04_cL::synapse0x2a58ca0() {
   return (neuron0x2a35e00()*0.953305);
}

double NNfunction_ns_chi04_cL::synapse0x2a58ce0() {
   return (neuron0x2a42950()*1.71478);
}

double NNfunction_ns_chi04_cL::synapse0x2a58d20() {
   return (neuron0x2a43320()*0.481999);
}

double NNfunction_ns_chi04_cL::synapse0x2a58d60() {
   return (neuron0x2a43cf0()*-2.01887);
}

double NNfunction_ns_chi04_cL::synapse0x2a59340() {
   return (neuron0x2a446c0()*2.13253);
}

double NNfunction_ns_chi04_cL::synapse0x2a59380() {
   return (neuron0x2a45090()*-3.09666);
}

double NNfunction_ns_chi04_cL::synapse0x2a593c0() {
   return (neuron0x2a45a60()*-0.12801);
}

double NNfunction_ns_chi04_cL::synapse0x2a59400() {
   return (neuron0x2a46430()*0.0389147);
}

double NNfunction_ns_chi04_cL::synapse0x2a59440() {
   return (neuron0x2a46e00()*-0.0913757);
}

double NNfunction_ns_chi04_cL::synapse0x2a59480() {
   return (neuron0x2a479e0()*0.640928);
}

double NNfunction_ns_chi04_cL::synapse0x2a594c0() {
   return (neuron0x2a483b0()*-1.20791);
}

double NNfunction_ns_chi04_cL::synapse0x2a59500() {
   return (neuron0x2a39230()*-1.52015);
}

double NNfunction_ns_chi04_cL::synapse0x2a59540() {
   return (neuron0x2a39c00()*1.95164);
}

double NNfunction_ns_chi04_cL::synapse0x2a59580() {
   return (neuron0x2a3a5d0()*3.32916);
}

double NNfunction_ns_chi04_cL::synapse0x2a595c0() {
   return (neuron0x2a4cc10()*0.406397);
}

double NNfunction_ns_chi04_cL::synapse0x2a59600() {
   return (neuron0x2a4d4c0()*2.99333);
}

double NNfunction_ns_chi04_cL::synapse0x2a59640() {
   return (neuron0x2a4de90()*-1.9094);
}

double NNfunction_ns_chi04_cL::synapse0x2a59680() {
   return (neuron0x2a4e860()*2.91504);
}

double NNfunction_ns_chi04_cL::synapse0x2a598e0() {
   return (neuron0x2a55a60()*-8.05729);
}

double NNfunction_ns_chi04_cL::synapse0x2a59920() {
   return (neuron0x2a55e00()*-6.20314);
}

double NNfunction_ns_chi04_cL::synapse0x2a59960() {
   return (neuron0x2a562a0()*-5.2499);
}

double NNfunction_ns_chi04_cL::synapse0x2a599a0() {
   return (neuron0x2a57400()*0.457206);
}

double NNfunction_ns_chi04_cL::synapse0x2a599e0() {
   return (neuron0x2a58560()*-2.61665);
}

