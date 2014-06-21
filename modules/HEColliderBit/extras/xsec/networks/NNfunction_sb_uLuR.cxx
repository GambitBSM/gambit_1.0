#include "NNfunction_sb_uLuR.h"
#include <cmath>

double NNfunction_sb_uLuR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.8178)/15.0471;
   input1 = (in1 - 67.2113)/712.803;
   input2 = (in2 - 375.197)/448.424;
   input3 = (in3 - 351.909)/646.819;
   input4 = (in4 - 787.438)/670.265;
   input5 = (in5 - 685.206)/645.644;
   input6 = (in6 - 690.96)/649.454;
   input7 = (in7 - 680.664)/642.777;
   input8 = (in8 - 672.229)/660.806;
   input9 = (in9 - 663.113)/646.921;
   input10 = (in10 - 663.535)/668.415;
   input11 = (in11 - 669.387)/423.07;
   input12 = (in12 - 762.565)/580.429;
   input13 = (in13 - 599.509)/380.265;
   input14 = (in14 - 678.448)/428.476;
   input15 = (in15 - 756.276)/555.122;
   input16 = (in16 - 527.007)/384.711;
   input17 = (in17 - 764.867)/588.688;
   input18 = (in18 - 761.747)/591.285;
   input19 = (in19 - 756.531)/578.674;
   input20 = (in20 - -268.304)/442.855;
   input21 = (in21 - -349.697)/926.326;
   input22 = (in22 - -6.29589)/906.996;
   input23 = (in23 - 21.5292)/526.638;
   switch(index) {
     case 0:
         return neuron0x31772c0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uLuR::Value(int index, double* input) {
   input0 = (input[0] - 22.8178)/15.0471;
   input1 = (input[1] - 67.2113)/712.803;
   input2 = (input[2] - 375.197)/448.424;
   input3 = (input[3] - 351.909)/646.819;
   input4 = (input[4] - 787.438)/670.265;
   input5 = (input[5] - 685.206)/645.644;
   input6 = (input[6] - 690.96)/649.454;
   input7 = (input[7] - 680.664)/642.777;
   input8 = (input[8] - 672.229)/660.806;
   input9 = (input[9] - 663.113)/646.921;
   input10 = (input[10] - 663.535)/668.415;
   input11 = (input[11] - 669.387)/423.07;
   input12 = (input[12] - 762.565)/580.429;
   input13 = (input[13] - 599.509)/380.265;
   input14 = (input[14] - 678.448)/428.476;
   input15 = (input[15] - 756.276)/555.122;
   input16 = (input[16] - 527.007)/384.711;
   input17 = (input[17] - 764.867)/588.688;
   input18 = (input[18] - 761.747)/591.285;
   input19 = (input[19] - 756.531)/578.674;
   input20 = (input[20] - -268.304)/442.855;
   input21 = (input[21] - -349.697)/926.326;
   input22 = (input[22] - -6.29589)/906.996;
   input23 = (input[23] - 21.5292)/526.638;
   switch(index) {
     case 0:
         return neuron0x31772c0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uLuR::neuron0x31433b0() {
   return input0;
}

double NNfunction_sb_uLuR::neuron0x31436f0() {
   return input1;
}

double NNfunction_sb_uLuR::neuron0x3143a30() {
   return input2;
}

double NNfunction_sb_uLuR::neuron0x3143d70() {
   return input3;
}

double NNfunction_sb_uLuR::neuron0x31440b0() {
   return input4;
}

double NNfunction_sb_uLuR::neuron0x31443f0() {
   return input5;
}

double NNfunction_sb_uLuR::neuron0x3144730() {
   return input6;
}

double NNfunction_sb_uLuR::neuron0x3144a70() {
   return input7;
}

double NNfunction_sb_uLuR::neuron0x3144db0() {
   return input8;
}

double NNfunction_sb_uLuR::neuron0x31450f0() {
   return input9;
}

double NNfunction_sb_uLuR::neuron0x3145430() {
   return input10;
}

double NNfunction_sb_uLuR::neuron0x3145770() {
   return input11;
}

double NNfunction_sb_uLuR::neuron0x3145ab0() {
   return input12;
}

double NNfunction_sb_uLuR::neuron0x3145df0() {
   return input13;
}

double NNfunction_sb_uLuR::neuron0x3146130() {
   return input14;
}

double NNfunction_sb_uLuR::neuron0x3146470() {
   return input15;
}

double NNfunction_sb_uLuR::neuron0x31467b0() {
   return input16;
}

double NNfunction_sb_uLuR::neuron0x3146d10() {
   return input17;
}

double NNfunction_sb_uLuR::neuron0x3146f30() {
   return input18;
}

double NNfunction_sb_uLuR::neuron0x3147270() {
   return input19;
}

double NNfunction_sb_uLuR::neuron0x31475b0() {
   return input20;
}

double NNfunction_sb_uLuR::neuron0x31478f0() {
   return input21;
}

double NNfunction_sb_uLuR::neuron0x3147c30() {
   return input22;
}

double NNfunction_sb_uLuR::neuron0x3147f70() {
   return input23;
}

double NNfunction_sb_uLuR::input0x31483e0() {
   double input = 0.380048;
   input += synapse0x3143270();
   input += synapse0x31432b0();
   input += synapse0x3148690();
   input += synapse0x31486d0();
   input += synapse0x3148710();
   input += synapse0x3148750();
   input += synapse0x3148790();
   input += synapse0x31487d0();
   input += synapse0x3148810();
   input += synapse0x3148850();
   input += synapse0x3148890();
   input += synapse0x31488d0();
   input += synapse0x3148910();
   input += synapse0x3148950();
   input += synapse0x3148990();
   input += synapse0x31489d0();
   input += synapse0x31431e0();
   input += synapse0x3143220();
   input += synapse0x2efe590();
   input += synapse0x2efe5d0();
   input += synapse0x3148c30();
   input += synapse0x3148c70();
   input += synapse0x3148cb0();
   input += synapse0x3148cf0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x31483e0() {
   double input = input0x31483e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3148d30() {
   double input = -0.395945;
   input += synapse0x3149070();
   input += synapse0x31490b0();
   input += synapse0x31490f0();
   input += synapse0x3149130();
   input += synapse0x3149170();
   input += synapse0x31491b0();
   input += synapse0x31491f0();
   input += synapse0x3149230();
   input += synapse0x3149270();
   input += synapse0x3148b20();
   input += synapse0x3148b60();
   input += synapse0x3148ba0();
   input += synapse0x3148be0();
   input += synapse0x31494c0();
   input += synapse0x3149500();
   input += synapse0x3149540();
   input += synapse0x3148ec0();
   input += synapse0x3148f00();
   input += synapse0x3149690();
   input += synapse0x31496d0();
   input += synapse0x3149710();
   input += synapse0x3149750();
   input += synapse0x3149790();
   input += synapse0x31497d0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3148d30() {
   double input = input0x3148d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3149810() {
   double input = 0.567289;
   input += synapse0x3149b50();
   input += synapse0x3149b90();
   input += synapse0x3149bd0();
   input += synapse0x3149c10();
   input += synapse0x3149c50();
   input += synapse0x3149c90();
   input += synapse0x3149cd0();
   input += synapse0x3149d10();
   input += synapse0x3149d50();
   input += synapse0x3149d90();
   input += synapse0x3149dd0();
   input += synapse0x3149e10();
   input += synapse0x3149e50();
   input += synapse0x3149e90();
   input += synapse0x3149ed0();
   input += synapse0x3149f10();
   input += synapse0x31499a0();
   input += synapse0x31499e0();
   input += synapse0x2efec40();
   input += synapse0x2f0c510();
   input += synapse0x2f0c550();
   input += synapse0x3132440();
   input += synapse0x3132480();
   input += synapse0x31324c0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3149810() {
   double input = input0x3149810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x31492b0() {
   double input = 1.70331;
   input += synapse0x2f0cd90();
   input += synapse0x3149440();
   input += synapse0x3149480();
   input += synapse0x314a060();
   input += synapse0x314a0a0();
   input += synapse0x314a0e0();
   input += synapse0x314a120();
   input += synapse0x314a160();
   input += synapse0x314a1a0();
   input += synapse0x314a1e0();
   input += synapse0x314a220();
   input += synapse0x314a260();
   input += synapse0x314a2a0();
   input += synapse0x314a2e0();
   input += synapse0x314a320();
   input += synapse0x314a360();
   input += synapse0x31432f0();
   input += synapse0x3143330();
   input += synapse0x3143370();
   input += synapse0x314a4b0();
   input += synapse0x314a4f0();
   input += synapse0x314a530();
   input += synapse0x314a570();
   input += synapse0x314a5b0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x31492b0() {
   double input = input0x31492b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x314a5f0() {
   double input = 2.04158;
   input += synapse0x314a930();
   input += synapse0x314a970();
   input += synapse0x314a9b0();
   input += synapse0x314a9f0();
   input += synapse0x314aa30();
   input += synapse0x314aa70();
   input += synapse0x314aab0();
   input += synapse0x314aaf0();
   input += synapse0x314ab30();
   input += synapse0x314ab70();
   input += synapse0x314abb0();
   input += synapse0x314abf0();
   input += synapse0x314ac30();
   input += synapse0x314ac70();
   input += synapse0x314acb0();
   input += synapse0x314acf0();
   input += synapse0x314a780();
   input += synapse0x314a7c0();
   input += synapse0x314ae40();
   input += synapse0x314ae80();
   input += synapse0x314aec0();
   input += synapse0x314af00();
   input += synapse0x314af40();
   input += synapse0x314af80();
   return input;
}

double NNfunction_sb_uLuR::neuron0x314a5f0() {
   double input = input0x314a5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x314afc0() {
   double input = -0.343328;
   input += synapse0x314b300();
   input += synapse0x314b340();
   input += synapse0x314b380();
   input += synapse0x314b3c0();
   input += synapse0x314b400();
   input += synapse0x314b440();
   input += synapse0x314b480();
   input += synapse0x314b4c0();
   input += synapse0x314b500();
   input += synapse0x2f0c860();
   input += synapse0x2f0c8a0();
   input += synapse0x2f0c8e0();
   input += synapse0x2f0c920();
   input += synapse0x2f0c960();
   input += synapse0x2f0c9a0();
   input += synapse0x2f0c9e0();
   input += synapse0x314b150();
   input += synapse0x314b190();
   input += synapse0x2f0cb30();
   input += synapse0x2f0cb70();
   input += synapse0x2f0cbb0();
   input += synapse0x2f0cbf0();
   input += synapse0x2f0cc30();
   input += synapse0x314bd50();
   return input;
}

double NNfunction_sb_uLuR::neuron0x314afc0() {
   double input = input0x314afc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x314bd90() {
   double input = -0.194882;
   input += synapse0x314c0d0();
   input += synapse0x314c110();
   input += synapse0x314c150();
   input += synapse0x314c190();
   input += synapse0x314c1d0();
   input += synapse0x314c210();
   input += synapse0x314c250();
   input += synapse0x314c290();
   input += synapse0x314c2d0();
   input += synapse0x314c310();
   input += synapse0x314c350();
   input += synapse0x314c390();
   input += synapse0x314c3d0();
   input += synapse0x314c410();
   input += synapse0x314c450();
   input += synapse0x314c490();
   input += synapse0x314bf20();
   input += synapse0x314bf60();
   input += synapse0x314c5e0();
   input += synapse0x314c620();
   input += synapse0x314c660();
   input += synapse0x314c6a0();
   input += synapse0x314c6e0();
   input += synapse0x314c720();
   return input;
}

double NNfunction_sb_uLuR::neuron0x314bd90() {
   double input = input0x314bd90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x314c760() {
   double input = 0.689535;
   input += synapse0x314caa0();
   input += synapse0x314cae0();
   input += synapse0x314cb20();
   input += synapse0x314cb60();
   input += synapse0x314cba0();
   input += synapse0x314cbe0();
   input += synapse0x314cc20();
   input += synapse0x314cc60();
   input += synapse0x314cca0();
   input += synapse0x314cce0();
   input += synapse0x314cd20();
   input += synapse0x314cd60();
   input += synapse0x314cda0();
   input += synapse0x314cde0();
   input += synapse0x314ce20();
   input += synapse0x314ce60();
   input += synapse0x314c8f0();
   input += synapse0x314c930();
   input += synapse0x314cfb0();
   input += synapse0x314cff0();
   input += synapse0x314d030();
   input += synapse0x314d070();
   input += synapse0x314d0b0();
   input += synapse0x314d0f0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x314c760() {
   double input = input0x314c760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x314d130() {
   double input = -0.674835;
   input += synapse0x3146c00();
   input += synapse0x3146c40();
   input += synapse0x3146c80();
   input += synapse0x3146cc0();
   input += synapse0x314d680();
   input += synapse0x314d6c0();
   input += synapse0x314d700();
   input += synapse0x314d740();
   input += synapse0x314d780();
   input += synapse0x314d7c0();
   input += synapse0x314d800();
   input += synapse0x314d840();
   input += synapse0x314d880();
   input += synapse0x314d8c0();
   input += synapse0x314d900();
   input += synapse0x314d940();
   input += synapse0x314d2c0();
   input += synapse0x314d300();
   input += synapse0x314da90();
   input += synapse0x314dad0();
   input += synapse0x314db10();
   input += synapse0x314db50();
   input += synapse0x314db90();
   input += synapse0x314dbd0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x314d130() {
   double input = input0x314d130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x314dc10() {
   double input = -0.376735;
   input += synapse0x314df50();
   input += synapse0x314df90();
   input += synapse0x314dfd0();
   input += synapse0x314e010();
   input += synapse0x314e050();
   input += synapse0x314e090();
   input += synapse0x314e0d0();
   input += synapse0x314e110();
   input += synapse0x314e150();
   input += synapse0x314e190();
   input += synapse0x314e1d0();
   input += synapse0x314e210();
   input += synapse0x314e250();
   input += synapse0x314e290();
   input += synapse0x314e2d0();
   input += synapse0x314e310();
   input += synapse0x314dda0();
   input += synapse0x314dde0();
   input += synapse0x314e460();
   input += synapse0x314e4a0();
   input += synapse0x314e4e0();
   input += synapse0x314e520();
   input += synapse0x314e560();
   input += synapse0x314e5a0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x314dc10() {
   double input = input0x314dc10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x314e5e0() {
   double input = -0.474378;
   input += synapse0x314e920();
   input += synapse0x314e960();
   input += synapse0x314e9a0();
   input += synapse0x314e9e0();
   input += synapse0x314ea20();
   input += synapse0x314ea60();
   input += synapse0x314eaa0();
   input += synapse0x314eae0();
   input += synapse0x314eb20();
   input += synapse0x314eb60();
   input += synapse0x314eba0();
   input += synapse0x314ebe0();
   input += synapse0x314ec20();
   input += synapse0x314ec60();
   input += synapse0x314eca0();
   input += synapse0x314ece0();
   input += synapse0x314e770();
   input += synapse0x314e7b0();
   input += synapse0x314b540();
   input += synapse0x314b580();
   input += synapse0x314b5c0();
   input += synapse0x314b600();
   input += synapse0x314b640();
   input += synapse0x314b680();
   return input;
}

double NNfunction_sb_uLuR::neuron0x314e5e0() {
   double input = input0x314e5e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x314b6c0() {
   double input = -0.961331;
   input += synapse0x314ba00();
   input += synapse0x314ba40();
   input += synapse0x314ba80();
   input += synapse0x314bac0();
   input += synapse0x314bb00();
   input += synapse0x314bb40();
   input += synapse0x314bb80();
   input += synapse0x314bbc0();
   input += synapse0x314bc00();
   input += synapse0x314bc40();
   input += synapse0x314bc80();
   input += synapse0x314bcc0();
   input += synapse0x314bd00();
   input += synapse0x314fe40();
   input += synapse0x314fe80();
   input += synapse0x314fec0();
   input += synapse0x314b850();
   input += synapse0x314b890();
   input += synapse0x3150010();
   input += synapse0x3150050();
   input += synapse0x3150090();
   input += synapse0x31500d0();
   input += synapse0x3150110();
   input += synapse0x3150150();
   return input;
}

double NNfunction_sb_uLuR::neuron0x314b6c0() {
   double input = input0x314b6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3150190() {
   double input = 0.139851;
   input += synapse0x31504d0();
   input += synapse0x3150510();
   input += synapse0x3150550();
   input += synapse0x3150590();
   input += synapse0x31505d0();
   input += synapse0x3150610();
   input += synapse0x3150650();
   input += synapse0x3150690();
   input += synapse0x31506d0();
   input += synapse0x3150710();
   input += synapse0x3150750();
   input += synapse0x3150790();
   input += synapse0x31507d0();
   input += synapse0x3150810();
   input += synapse0x3150850();
   input += synapse0x3150890();
   input += synapse0x3150320();
   input += synapse0x3150360();
   input += synapse0x31509e0();
   input += synapse0x3150a20();
   input += synapse0x3150a60();
   input += synapse0x3150aa0();
   input += synapse0x3150ae0();
   input += synapse0x3150b20();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3150190() {
   double input = input0x3150190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3150b60() {
   double input = 0.496554;
   input += synapse0x3150ea0();
   input += synapse0x3150ee0();
   input += synapse0x3150f20();
   input += synapse0x3150f60();
   input += synapse0x3150fa0();
   input += synapse0x3150fe0();
   input += synapse0x3151020();
   input += synapse0x3151060();
   input += synapse0x31510a0();
   input += synapse0x31510e0();
   input += synapse0x3151120();
   input += synapse0x3151160();
   input += synapse0x31511a0();
   input += synapse0x31511e0();
   input += synapse0x3151220();
   input += synapse0x3151260();
   input += synapse0x3150cf0();
   input += synapse0x3150d30();
   input += synapse0x31513b0();
   input += synapse0x31513f0();
   input += synapse0x3151430();
   input += synapse0x3151470();
   input += synapse0x31514b0();
   input += synapse0x31514f0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3150b60() {
   double input = input0x3150b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3151530() {
   double input = -0.332937;
   input += synapse0x3151870();
   input += synapse0x31518b0();
   input += synapse0x31518f0();
   input += synapse0x3151930();
   input += synapse0x3151970();
   input += synapse0x31519b0();
   input += synapse0x31519f0();
   input += synapse0x3151a30();
   input += synapse0x3151a70();
   input += synapse0x3151ab0();
   input += synapse0x3151af0();
   input += synapse0x3151b30();
   input += synapse0x3151b70();
   input += synapse0x3151bb0();
   input += synapse0x3151bf0();
   input += synapse0x3151c30();
   input += synapse0x31516c0();
   input += synapse0x3151700();
   input += synapse0x3151d80();
   input += synapse0x3151dc0();
   input += synapse0x3151e00();
   input += synapse0x3151e40();
   input += synapse0x3151e80();
   input += synapse0x3151ec0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3151530() {
   double input = input0x3151530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3151f00() {
   double input = 3.48289;
   input += synapse0x3152240();
   input += synapse0x31435d0();
   input += synapse0x3143610();
   input += synapse0x3143910();
   input += synapse0x3143950();
   input += synapse0x3143c50();
   input += synapse0x3143c90();
   input += synapse0x3143f90();
   input += synapse0x3143fd0();
   input += synapse0x31442d0();
   input += synapse0x3144310();
   input += synapse0x3144610();
   input += synapse0x3144650();
   input += synapse0x3144950();
   input += synapse0x3144990();
   input += synapse0x3144c90();
   input += synapse0x3144cd0();
   input += synapse0x3144fd0();
   input += synapse0x3145010();
   input += synapse0x3145310();
   input += synapse0x3145350();
   input += synapse0x3145650();
   input += synapse0x3145690();
   input += synapse0x3145990();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3151f00() {
   double input = input0x3151f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3153d10() {
   double input = -1.2102;
   input += synapse0x31459d0();
   input += synapse0x3146690();
   input += synapse0x31466d0();
   input += synapse0x3152090();
   input += synapse0x31520d0();
   input += synapse0x31469d0();
   input += synapse0x3146a10();
   input += synapse0x2efe470();
   input += synapse0x2efe4b0();
   input += synapse0x3147150();
   input += synapse0x3147190();
   input += synapse0x3147490();
   input += synapse0x31474d0();
   input += synapse0x31477d0();
   input += synapse0x3147810();
   input += synapse0x3147b10();
   input += synapse0x3147b50();
   input += synapse0x3147e50();
   input += synapse0x3147e90();
   input += synapse0x3148190();
   input += synapse0x31481d0();
   input += synapse0x3145cd0();
   input += synapse0x3145d10();
   input += synapse0x3153fb0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3153d10() {
   double input = input0x3153d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3153ff0() {
   double input = 1.12318;
   input += synapse0x3154330();
   input += synapse0x3154370();
   input += synapse0x31543b0();
   input += synapse0x31543f0();
   input += synapse0x3154430();
   input += synapse0x3154470();
   input += synapse0x31544b0();
   input += synapse0x31544f0();
   input += synapse0x3154530();
   input += synapse0x3154570();
   input += synapse0x31545b0();
   input += synapse0x31545f0();
   input += synapse0x3154630();
   input += synapse0x3154670();
   input += synapse0x31546b0();
   input += synapse0x31546f0();
   input += synapse0x3154180();
   input += synapse0x31541c0();
   input += synapse0x3154840();
   input += synapse0x3154880();
   input += synapse0x31548c0();
   input += synapse0x3154900();
   input += synapse0x3154940();
   input += synapse0x3154980();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3153ff0() {
   double input = input0x3153ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x31549c0() {
   double input = 0.219987;
   input += synapse0x3154d00();
   input += synapse0x3154d40();
   input += synapse0x3154d80();
   input += synapse0x3154dc0();
   input += synapse0x3154e00();
   input += synapse0x3154e40();
   input += synapse0x3154e80();
   input += synapse0x3154ec0();
   input += synapse0x3154f00();
   input += synapse0x3154f40();
   input += synapse0x3154f80();
   input += synapse0x3154fc0();
   input += synapse0x3155000();
   input += synapse0x3155040();
   input += synapse0x3155080();
   input += synapse0x31550c0();
   input += synapse0x3154b50();
   input += synapse0x3154b90();
   input += synapse0x3155210();
   input += synapse0x3155250();
   input += synapse0x3155290();
   input += synapse0x31552d0();
   input += synapse0x3155310();
   input += synapse0x3155350();
   return input;
}

double NNfunction_sb_uLuR::neuron0x31549c0() {
   double input = input0x31549c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3155390() {
   double input = 1.43337;
   input += synapse0x31556d0();
   input += synapse0x3155710();
   input += synapse0x3155750();
   input += synapse0x3155790();
   input += synapse0x31557d0();
   input += synapse0x3155810();
   input += synapse0x3155850();
   input += synapse0x3155890();
   input += synapse0x31558d0();
   input += synapse0x3155910();
   input += synapse0x3155950();
   input += synapse0x3155990();
   input += synapse0x31559d0();
   input += synapse0x3155a10();
   input += synapse0x3155a50();
   input += synapse0x3155a90();
   input += synapse0x3155520();
   input += synapse0x3155560();
   input += synapse0x3155be0();
   input += synapse0x3155c20();
   input += synapse0x3155c60();
   input += synapse0x3155ca0();
   input += synapse0x3155ce0();
   input += synapse0x3155d20();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3155390() {
   double input = input0x3155390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3155d60() {
   double input = 1.12609;
   input += synapse0x31560a0();
   input += synapse0x31560e0();
   input += synapse0x3156120();
   input += synapse0x3156160();
   input += synapse0x31561a0();
   input += synapse0x31561e0();
   input += synapse0x3156220();
   input += synapse0x3156260();
   input += synapse0x31562a0();
   input += synapse0x31562e0();
   input += synapse0x3156320();
   input += synapse0x3156360();
   input += synapse0x31563a0();
   input += synapse0x31563e0();
   input += synapse0x3156420();
   input += synapse0x3156460();
   input += synapse0x3155ef0();
   input += synapse0x3155f30();
   input += synapse0x31565b0();
   input += synapse0x31565f0();
   input += synapse0x3156630();
   input += synapse0x3156670();
   input += synapse0x31566b0();
   input += synapse0x31566f0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3155d60() {
   double input = input0x3155d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3156730() {
   double input = 0.0572037;
   input += synapse0x3156a70();
   input += synapse0x3156ab0();
   input += synapse0x3156af0();
   input += synapse0x3156b30();
   input += synapse0x3156b70();
   input += synapse0x3156bb0();
   input += synapse0x3156bf0();
   input += synapse0x3156c30();
   input += synapse0x3156c70();
   input += synapse0x314ee30();
   input += synapse0x314ee70();
   input += synapse0x314eeb0();
   input += synapse0x314eef0();
   input += synapse0x314ef30();
   input += synapse0x314ef70();
   input += synapse0x314efb0();
   input += synapse0x31568c0();
   input += synapse0x3156900();
   input += synapse0x314f100();
   input += synapse0x314f140();
   input += synapse0x314f180();
   input += synapse0x314f1c0();
   input += synapse0x314f200();
   input += synapse0x314f240();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3156730() {
   double input = input0x3156730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x314f280() {
   double input = -0.151029;
   input += synapse0x314f5c0();
   input += synapse0x314f600();
   input += synapse0x314f640();
   input += synapse0x314f680();
   input += synapse0x314f6c0();
   input += synapse0x314f700();
   input += synapse0x314f740();
   input += synapse0x314f780();
   input += synapse0x314f7c0();
   input += synapse0x314f800();
   input += synapse0x314f840();
   input += synapse0x314f880();
   input += synapse0x314f8c0();
   input += synapse0x314f900();
   input += synapse0x314f940();
   input += synapse0x314f980();
   input += synapse0x314f410();
   input += synapse0x314f450();
   input += synapse0x314fad0();
   input += synapse0x314fb10();
   input += synapse0x314fb50();
   input += synapse0x314fb90();
   input += synapse0x314fbd0();
   input += synapse0x314fc10();
   return input;
}

double NNfunction_sb_uLuR::neuron0x314f280() {
   double input = input0x314f280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x314fc50() {
   double input = 1.53104;
   input += synapse0x314fde0();
   input += synapse0x3158e70();
   input += synapse0x3158eb0();
   input += synapse0x3158ef0();
   input += synapse0x3158f30();
   input += synapse0x3158f70();
   input += synapse0x3158fb0();
   input += synapse0x3158ff0();
   input += synapse0x3159030();
   input += synapse0x3159070();
   input += synapse0x31590b0();
   input += synapse0x31590f0();
   input += synapse0x3159130();
   input += synapse0x3159170();
   input += synapse0x31591b0();
   input += synapse0x31591f0();
   input += synapse0x3158cc0();
   input += synapse0x3158d00();
   input += synapse0x3159340();
   input += synapse0x3159380();
   input += synapse0x31593c0();
   input += synapse0x3159400();
   input += synapse0x3159440();
   input += synapse0x3159480();
   return input;
}

double NNfunction_sb_uLuR::neuron0x314fc50() {
   double input = input0x314fc50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x31594c0() {
   double input = 1.07758;
   input += synapse0x3159800();
   input += synapse0x3159840();
   input += synapse0x3159880();
   input += synapse0x31598c0();
   input += synapse0x3159900();
   input += synapse0x3159940();
   input += synapse0x3159980();
   input += synapse0x31599c0();
   input += synapse0x3159a00();
   input += synapse0x3159a40();
   input += synapse0x3159a80();
   input += synapse0x3159ac0();
   input += synapse0x3159b00();
   input += synapse0x3159b40();
   input += synapse0x3159b80();
   input += synapse0x3159bc0();
   input += synapse0x3159650();
   input += synapse0x3159690();
   input += synapse0x3159d10();
   input += synapse0x3159d50();
   input += synapse0x3159d90();
   input += synapse0x3159dd0();
   input += synapse0x3159e10();
   input += synapse0x3159e50();
   return input;
}

double NNfunction_sb_uLuR::neuron0x31594c0() {
   double input = input0x31594c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3159e90() {
   double input = 0.0933779;
   input += synapse0x315a1d0();
   input += synapse0x315a210();
   input += synapse0x315a250();
   input += synapse0x315a290();
   input += synapse0x315a2d0();
   input += synapse0x315a310();
   input += synapse0x315a350();
   input += synapse0x315a390();
   input += synapse0x315a3d0();
   input += synapse0x315a410();
   input += synapse0x315a450();
   input += synapse0x315a490();
   input += synapse0x315a4d0();
   input += synapse0x315a510();
   input += synapse0x315a550();
   input += synapse0x315a590();
   input += synapse0x315a020();
   input += synapse0x315a060();
   input += synapse0x315a6e0();
   input += synapse0x315a720();
   input += synapse0x315a760();
   input += synapse0x315a7a0();
   input += synapse0x315a7e0();
   input += synapse0x315a820();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3159e90() {
   double input = input0x3159e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x315a860() {
   double input = 3.93772;
   input += synapse0x315aba0();
   input += synapse0x315abe0();
   input += synapse0x315ac20();
   input += synapse0x315ac60();
   input += synapse0x315aca0();
   input += synapse0x315ace0();
   input += synapse0x315ad20();
   input += synapse0x315ad60();
   input += synapse0x315ada0();
   input += synapse0x315ade0();
   input += synapse0x315ae20();
   input += synapse0x315ae60();
   input += synapse0x315aea0();
   input += synapse0x315aee0();
   input += synapse0x315af20();
   input += synapse0x315af60();
   input += synapse0x315a9f0();
   input += synapse0x315aa30();
   input += synapse0x315b0b0();
   input += synapse0x315b0f0();
   input += synapse0x315b130();
   input += synapse0x315b170();
   input += synapse0x315b1b0();
   input += synapse0x315b1f0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x315a860() {
   double input = input0x315a860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x315b230() {
   double input = 0.704728;
   input += synapse0x315b570();
   input += synapse0x315b5b0();
   input += synapse0x315b5f0();
   input += synapse0x315b630();
   input += synapse0x315b670();
   input += synapse0x315b6b0();
   input += synapse0x315b6f0();
   input += synapse0x315b730();
   input += synapse0x315b770();
   input += synapse0x315b7b0();
   input += synapse0x315b7f0();
   input += synapse0x315b830();
   input += synapse0x315b870();
   input += synapse0x315b8b0();
   input += synapse0x315b8f0();
   input += synapse0x315b930();
   input += synapse0x315b3c0();
   input += synapse0x315b400();
   input += synapse0x315ba80();
   input += synapse0x315bac0();
   input += synapse0x315bb00();
   input += synapse0x315bb40();
   input += synapse0x315bb80();
   input += synapse0x315bbc0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x315b230() {
   double input = input0x315b230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x315bc00() {
   double input = -3.15366;
   input += synapse0x315bf40();
   input += synapse0x315bf80();
   input += synapse0x315bfc0();
   input += synapse0x315c000();
   input += synapse0x315c040();
   input += synapse0x315c080();
   input += synapse0x315c0c0();
   input += synapse0x315c100();
   input += synapse0x315c140();
   input += synapse0x315c180();
   input += synapse0x315c1c0();
   input += synapse0x315c200();
   input += synapse0x315c240();
   input += synapse0x315c280();
   input += synapse0x315c2c0();
   input += synapse0x315c300();
   input += synapse0x315bd90();
   input += synapse0x315bdd0();
   input += synapse0x315c450();
   input += synapse0x315c490();
   input += synapse0x315c4d0();
   input += synapse0x315c510();
   input += synapse0x315c550();
   input += synapse0x315c590();
   return input;
}

double NNfunction_sb_uLuR::neuron0x315bc00() {
   double input = input0x315bc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x315c5d0() {
   double input = 0.440174;
   input += synapse0x315c910();
   input += synapse0x315c950();
   input += synapse0x315c990();
   input += synapse0x315c9d0();
   input += synapse0x315ca10();
   input += synapse0x315ca50();
   input += synapse0x315ca90();
   input += synapse0x315cad0();
   input += synapse0x315cb10();
   input += synapse0x315cb50();
   input += synapse0x315cb90();
   input += synapse0x315cbd0();
   input += synapse0x315cc10();
   input += synapse0x315cc50();
   input += synapse0x315cc90();
   input += synapse0x315ccd0();
   input += synapse0x315c760();
   input += synapse0x315c7a0();
   input += synapse0x315ce20();
   input += synapse0x315ce60();
   input += synapse0x315cea0();
   input += synapse0x315cee0();
   input += synapse0x315cf20();
   input += synapse0x315cf60();
   return input;
}

double NNfunction_sb_uLuR::neuron0x315c5d0() {
   double input = input0x315c5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x315cfa0() {
   double input = -0.147548;
   input += synapse0x315d2e0();
   input += synapse0x315d320();
   input += synapse0x315d360();
   input += synapse0x315d3a0();
   input += synapse0x315d3e0();
   input += synapse0x315d420();
   input += synapse0x315d460();
   input += synapse0x315d4a0();
   input += synapse0x315d4e0();
   input += synapse0x315d520();
   input += synapse0x315d560();
   input += synapse0x315d5a0();
   input += synapse0x315d5e0();
   input += synapse0x315d620();
   input += synapse0x315d660();
   input += synapse0x315d6a0();
   input += synapse0x315d130();
   input += synapse0x315d170();
   input += synapse0x315d7f0();
   input += synapse0x315d830();
   input += synapse0x315d870();
   input += synapse0x315d8b0();
   input += synapse0x315d8f0();
   input += synapse0x315d930();
   return input;
}

double NNfunction_sb_uLuR::neuron0x315cfa0() {
   double input = input0x315cfa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x315d970() {
   double input = 0.223793;
   input += synapse0x315dcb0();
   input += synapse0x3152280();
   input += synapse0x31522c0();
   input += synapse0x3152300();
   input += synapse0x3152550();
   input += synapse0x3152590();
   input += synapse0x31525d0();
   input += synapse0x3152820();
   input += synapse0x3152860();
   input += synapse0x3152ab0();
   input += synapse0x3152af0();
   input += synapse0x3152b30();
   input += synapse0x3152d80();
   input += synapse0x3152dc0();
   input += synapse0x3153010();
   input += synapse0x3153050();
   input += synapse0x315db00();
   input += synapse0x315db40();
   input += synapse0x31531a0();
   input += synapse0x31536b0();
   input += synapse0x31536f0();
   input += synapse0x3153730();
   input += synapse0x3153980();
   input += synapse0x31539c0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x315d970() {
   double input = input0x315d970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3153a00() {
   double input = 0.115619;
   input += synapse0x3153270();
   input += synapse0x31532b0();
   input += synapse0x31532f0();
   input += synapse0x3153330();
   input += synapse0x3153cb0();
   input += synapse0x3160000();
   input += synapse0x3160040();
   input += synapse0x3160080();
   input += synapse0x31600c0();
   input += synapse0x3160100();
   input += synapse0x3160140();
   input += synapse0x3160180();
   input += synapse0x31601c0();
   input += synapse0x3160200();
   input += synapse0x3160240();
   input += synapse0x3160280();
   input += synapse0x3153b90();
   input += synapse0x3153bd0();
   input += synapse0x31603d0();
   input += synapse0x3160410();
   input += synapse0x3160450();
   input += synapse0x3160490();
   input += synapse0x31604d0();
   input += synapse0x3160510();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3153a00() {
   double input = input0x3153a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3160550() {
   double input = 0.0510583;
   input += synapse0x3160890();
   input += synapse0x31608d0();
   input += synapse0x3160910();
   input += synapse0x3160950();
   input += synapse0x3160990();
   input += synapse0x31609d0();
   input += synapse0x3160a10();
   input += synapse0x3160a50();
   input += synapse0x3160a90();
   input += synapse0x3160ad0();
   input += synapse0x3160b10();
   input += synapse0x3160b50();
   input += synapse0x3160b90();
   input += synapse0x3160bd0();
   input += synapse0x3160c10();
   input += synapse0x3160c50();
   input += synapse0x31606e0();
   input += synapse0x3160720();
   input += synapse0x3160da0();
   input += synapse0x3160de0();
   input += synapse0x3160e20();
   input += synapse0x3160e60();
   input += synapse0x3160ea0();
   input += synapse0x3160ee0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3160550() {
   double input = input0x3160550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3160f20() {
   double input = 0.695311;
   input += synapse0x3161260();
   input += synapse0x31612a0();
   input += synapse0x31612e0();
   input += synapse0x3161320();
   input += synapse0x3161360();
   input += synapse0x31613a0();
   input += synapse0x31613e0();
   input += synapse0x3161420();
   input += synapse0x3161460();
   input += synapse0x31614a0();
   input += synapse0x31614e0();
   input += synapse0x3161520();
   input += synapse0x3161560();
   input += synapse0x31615a0();
   input += synapse0x31615e0();
   input += synapse0x3161620();
   input += synapse0x31610b0();
   input += synapse0x31610f0();
   input += synapse0x3161770();
   input += synapse0x31617b0();
   input += synapse0x31617f0();
   input += synapse0x3161830();
   input += synapse0x3161870();
   input += synapse0x31618b0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3160f20() {
   double input = input0x3160f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x31618f0() {
   double input = -0.83631;
   input += synapse0x3161c30();
   input += synapse0x3161c70();
   input += synapse0x3161cb0();
   input += synapse0x3161cf0();
   input += synapse0x3161d30();
   input += synapse0x3161d70();
   input += synapse0x3161db0();
   input += synapse0x3161df0();
   input += synapse0x3161e30();
   input += synapse0x3161e70();
   input += synapse0x3161eb0();
   input += synapse0x3161ef0();
   input += synapse0x3161f30();
   input += synapse0x3161f70();
   input += synapse0x3161fb0();
   input += synapse0x3161ff0();
   input += synapse0x3161a80();
   input += synapse0x3161ac0();
   input += synapse0x3162140();
   input += synapse0x3162180();
   input += synapse0x31621c0();
   input += synapse0x3162200();
   input += synapse0x3162240();
   input += synapse0x3162280();
   return input;
}

double NNfunction_sb_uLuR::neuron0x31618f0() {
   double input = input0x31618f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x31622c0() {
   double input = -0.534547;
   input += synapse0x3162600();
   input += synapse0x3162640();
   input += synapse0x3162680();
   input += synapse0x31626c0();
   input += synapse0x3162700();
   input += synapse0x3162740();
   input += synapse0x3162780();
   input += synapse0x31627c0();
   input += synapse0x3162800();
   input += synapse0x3162840();
   input += synapse0x3162880();
   input += synapse0x31628c0();
   input += synapse0x3162900();
   input += synapse0x3162940();
   input += synapse0x3162980();
   input += synapse0x31629c0();
   input += synapse0x3162450();
   input += synapse0x3162490();
   input += synapse0x3162b10();
   input += synapse0x3162b50();
   input += synapse0x3162b90();
   input += synapse0x3162bd0();
   input += synapse0x3162c10();
   input += synapse0x3162c50();
   return input;
}

double NNfunction_sb_uLuR::neuron0x31622c0() {
   double input = input0x31622c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3162c90() {
   double input = 0.218349;
   input += synapse0x3162fd0();
   input += synapse0x3163010();
   input += synapse0x3163050();
   input += synapse0x3163090();
   input += synapse0x31630d0();
   input += synapse0x3163110();
   input += synapse0x3163150();
   input += synapse0x3163190();
   input += synapse0x31631d0();
   input += synapse0x3163210();
   input += synapse0x3163250();
   input += synapse0x3163290();
   input += synapse0x31632d0();
   input += synapse0x3163310();
   input += synapse0x3163350();
   input += synapse0x3163390();
   input += synapse0x3162e20();
   input += synapse0x3162e60();
   input += synapse0x31634e0();
   input += synapse0x3163520();
   input += synapse0x3163560();
   input += synapse0x31635a0();
   input += synapse0x31635e0();
   input += synapse0x3163620();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3162c90() {
   double input = input0x3162c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3163660() {
   double input = 0.129052;
   input += synapse0x31639a0();
   input += synapse0x31639e0();
   input += synapse0x3163a20();
   input += synapse0x3163a60();
   input += synapse0x3163aa0();
   input += synapse0x3163ae0();
   input += synapse0x3163b20();
   input += synapse0x3163b60();
   input += synapse0x3163ba0();
   input += synapse0x3163be0();
   input += synapse0x3163c20();
   input += synapse0x3163c60();
   input += synapse0x3163ca0();
   input += synapse0x3163ce0();
   input += synapse0x3163d20();
   input += synapse0x3163d60();
   input += synapse0x31637f0();
   input += synapse0x3163830();
   input += synapse0x3163eb0();
   input += synapse0x3163ef0();
   input += synapse0x3163f30();
   input += synapse0x3163f70();
   input += synapse0x3163fb0();
   input += synapse0x3163ff0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3163660() {
   double input = input0x3163660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3164030() {
   double input = -0.741428;
   input += synapse0x3164370();
   input += synapse0x31643b0();
   input += synapse0x31643f0();
   input += synapse0x3164430();
   input += synapse0x3164470();
   input += synapse0x31644b0();
   input += synapse0x31644f0();
   input += synapse0x3164530();
   input += synapse0x3164570();
   input += synapse0x31645b0();
   input += synapse0x31645f0();
   input += synapse0x3164630();
   input += synapse0x3164670();
   input += synapse0x31646b0();
   input += synapse0x31646f0();
   input += synapse0x3164730();
   input += synapse0x31641c0();
   input += synapse0x3164200();
   input += synapse0x3164880();
   input += synapse0x31648c0();
   input += synapse0x3164900();
   input += synapse0x3164940();
   input += synapse0x3164980();
   input += synapse0x31649c0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3164030() {
   double input = input0x3164030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3164a00() {
   double input = -0.107538;
   input += synapse0x314d470();
   input += synapse0x314d4b0();
   input += synapse0x314d4f0();
   input += synapse0x314d530();
   input += synapse0x314d570();
   input += synapse0x314d5b0();
   input += synapse0x314d5f0();
   input += synapse0x314d630();
   input += synapse0x3165150();
   input += synapse0x3165190();
   input += synapse0x31651d0();
   input += synapse0x3165210();
   input += synapse0x3165250();
   input += synapse0x3165290();
   input += synapse0x31652d0();
   input += synapse0x3165310();
   input += synapse0x3164b90();
   input += synapse0x3164bd0();
   input += synapse0x3165460();
   input += synapse0x31654a0();
   input += synapse0x31654e0();
   input += synapse0x3165520();
   input += synapse0x3165560();
   input += synapse0x31655a0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3164a00() {
   double input = input0x3164a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x31655e0() {
   double input = 0.0775175;
   input += synapse0x3165920();
   input += synapse0x3165960();
   input += synapse0x31659a0();
   input += synapse0x31659e0();
   input += synapse0x3165a20();
   input += synapse0x3165a60();
   input += synapse0x3165aa0();
   input += synapse0x3165ae0();
   input += synapse0x3165b20();
   input += synapse0x3165b60();
   input += synapse0x3165ba0();
   input += synapse0x3165be0();
   input += synapse0x3165c20();
   input += synapse0x3165c60();
   input += synapse0x3165ca0();
   input += synapse0x3165ce0();
   input += synapse0x3165770();
   input += synapse0x31657b0();
   input += synapse0x3165e30();
   input += synapse0x3165e70();
   input += synapse0x3165eb0();
   input += synapse0x3165ef0();
   input += synapse0x3165f30();
   input += synapse0x3165f70();
   return input;
}

double NNfunction_sb_uLuR::neuron0x31655e0() {
   double input = input0x31655e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3165fb0() {
   double input = 0.656877;
   input += synapse0x31662f0();
   input += synapse0x3166330();
   input += synapse0x3166370();
   input += synapse0x31663b0();
   input += synapse0x31663f0();
   input += synapse0x3166430();
   input += synapse0x3166470();
   input += synapse0x31664b0();
   input += synapse0x31664f0();
   input += synapse0x3166530();
   input += synapse0x3166570();
   input += synapse0x31665b0();
   input += synapse0x31665f0();
   input += synapse0x3166630();
   input += synapse0x3166670();
   input += synapse0x31666b0();
   input += synapse0x3166140();
   input += synapse0x3166180();
   input += synapse0x3156cb0();
   input += synapse0x3156cf0();
   input += synapse0x3156d30();
   input += synapse0x3156d70();
   input += synapse0x3156db0();
   input += synapse0x3156df0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3165fb0() {
   double input = input0x3165fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3156e30() {
   double input = -6.79312;
   input += synapse0x3157170();
   input += synapse0x31571b0();
   input += synapse0x31571f0();
   input += synapse0x3157230();
   input += synapse0x3157270();
   input += synapse0x31572b0();
   input += synapse0x31572f0();
   input += synapse0x3157330();
   input += synapse0x3157370();
   input += synapse0x31573b0();
   input += synapse0x31573f0();
   input += synapse0x3157430();
   input += synapse0x3157470();
   input += synapse0x31574b0();
   input += synapse0x31574f0();
   input += synapse0x3157530();
   input += synapse0x3156fc0();
   input += synapse0x3157000();
   input += synapse0x3157680();
   input += synapse0x31576c0();
   input += synapse0x3157700();
   input += synapse0x3157740();
   input += synapse0x3157780();
   input += synapse0x31577c0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3156e30() {
   double input = input0x3156e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3157800() {
   double input = 0.256893;
   input += synapse0x3157b40();
   input += synapse0x3157b80();
   input += synapse0x3157bc0();
   input += synapse0x3157c00();
   input += synapse0x3157c40();
   input += synapse0x3157c80();
   input += synapse0x3157cc0();
   input += synapse0x3157d00();
   input += synapse0x3157d40();
   input += synapse0x3157d80();
   input += synapse0x3157dc0();
   input += synapse0x3157e00();
   input += synapse0x3157e40();
   input += synapse0x3157e80();
   input += synapse0x3157ec0();
   input += synapse0x3157f00();
   input += synapse0x3157990();
   input += synapse0x31579d0();
   input += synapse0x3158050();
   input += synapse0x3158090();
   input += synapse0x31580d0();
   input += synapse0x3158110();
   input += synapse0x3158150();
   input += synapse0x3158190();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3157800() {
   double input = input0x3157800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x31581d0() {
   double input = 0.763688;
   input += synapse0x3158510();
   input += synapse0x3158550();
   input += synapse0x3158590();
   input += synapse0x31585d0();
   input += synapse0x3158610();
   input += synapse0x3158650();
   input += synapse0x3158690();
   input += synapse0x31586d0();
   input += synapse0x3158710();
   input += synapse0x3158750();
   input += synapse0x3158790();
   input += synapse0x31587d0();
   input += synapse0x3158810();
   input += synapse0x3158850();
   input += synapse0x3158890();
   input += synapse0x31588d0();
   input += synapse0x3158360();
   input += synapse0x31583a0();
   input += synapse0x3158a20();
   input += synapse0x3158a60();
   input += synapse0x3158aa0();
   input += synapse0x3158ae0();
   input += synapse0x3158b20();
   input += synapse0x3158b60();
   return input;
}

double NNfunction_sb_uLuR::neuron0x31581d0() {
   double input = input0x31581d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x316a810() {
   double input = -0.278459;
   input += synapse0x316aa30();
   input += synapse0x316aa70();
   input += synapse0x316aab0();
   input += synapse0x316aaf0();
   input += synapse0x316ab30();
   input += synapse0x316ab70();
   input += synapse0x316abb0();
   input += synapse0x316abf0();
   input += synapse0x316ac30();
   input += synapse0x316ac70();
   input += synapse0x316acb0();
   input += synapse0x316acf0();
   input += synapse0x316ad30();
   input += synapse0x316ad70();
   input += synapse0x316adb0();
   input += synapse0x316adf0();
   input += synapse0x3158ba0();
   input += synapse0x3158be0();
   input += synapse0x316af40();
   input += synapse0x316af80();
   input += synapse0x316afc0();
   input += synapse0x316b000();
   input += synapse0x316b040();
   input += synapse0x316b080();
   return input;
}

double NNfunction_sb_uLuR::neuron0x316a810() {
   double input = input0x316a810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x316b0c0() {
   double input = 0.665238;
   input += synapse0x316b400();
   input += synapse0x316b440();
   input += synapse0x316b480();
   input += synapse0x316b4c0();
   input += synapse0x316b500();
   input += synapse0x316b540();
   input += synapse0x316b580();
   input += synapse0x316b5c0();
   input += synapse0x316b600();
   input += synapse0x316b640();
   input += synapse0x316b680();
   input += synapse0x316b6c0();
   input += synapse0x316b700();
   input += synapse0x316b740();
   input += synapse0x316b780();
   input += synapse0x316b7c0();
   input += synapse0x316b250();
   input += synapse0x316b290();
   input += synapse0x316b910();
   input += synapse0x316b950();
   input += synapse0x316b990();
   input += synapse0x316b9d0();
   input += synapse0x316ba10();
   input += synapse0x316ba50();
   return input;
}

double NNfunction_sb_uLuR::neuron0x316b0c0() {
   double input = input0x316b0c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x316ba90() {
   double input = 0.673342;
   input += synapse0x316bdd0();
   input += synapse0x316be10();
   input += synapse0x316be50();
   input += synapse0x316be90();
   input += synapse0x316bed0();
   input += synapse0x316bf10();
   input += synapse0x316bf50();
   input += synapse0x316bf90();
   input += synapse0x316bfd0();
   input += synapse0x316c010();
   input += synapse0x316c050();
   input += synapse0x316c090();
   input += synapse0x316c0d0();
   input += synapse0x316c110();
   input += synapse0x316c150();
   input += synapse0x316c190();
   input += synapse0x316bc20();
   input += synapse0x316bc60();
   input += synapse0x316c2e0();
   input += synapse0x316c320();
   input += synapse0x316c360();
   input += synapse0x316c3a0();
   input += synapse0x316c3e0();
   input += synapse0x316c420();
   return input;
}

double NNfunction_sb_uLuR::neuron0x316ba90() {
   double input = input0x316ba90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x316c460() {
   double input = 1.15047;
   input += synapse0x316c7a0();
   input += synapse0x316c7e0();
   input += synapse0x316c820();
   input += synapse0x316c860();
   input += synapse0x316c8a0();
   input += synapse0x316c8e0();
   input += synapse0x316c920();
   input += synapse0x316c960();
   input += synapse0x316c9a0();
   input += synapse0x316c9e0();
   input += synapse0x316ca20();
   input += synapse0x316ca60();
   input += synapse0x316caa0();
   input += synapse0x316cae0();
   input += synapse0x316cb20();
   input += synapse0x316cb60();
   input += synapse0x316c5f0();
   input += synapse0x316c630();
   input += synapse0x316ccb0();
   input += synapse0x316ccf0();
   input += synapse0x316cd30();
   input += synapse0x316cd70();
   input += synapse0x316cdb0();
   input += synapse0x316cdf0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x316c460() {
   double input = input0x316c460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3173660() {
   double input = -0.349494;
   input += synapse0x2f0cd00();
   input += synapse0x2f0cd40();
   input += synapse0x314a8a0();
   input += synapse0x314a8e0();
   input += synapse0x314b270();
   input += synapse0x314b2b0();
   input += synapse0x314c040();
   input += synapse0x314c080();
   input += synapse0x314ca10();
   input += synapse0x314ca50();
   input += synapse0x314d3e0();
   input += synapse0x314d420();
   input += synapse0x314dec0();
   input += synapse0x314df00();
   input += synapse0x314e890();
   input += synapse0x314e8d0();
   input += synapse0x314b970();
   input += synapse0x314b9b0();
   input += synapse0x3150440();
   input += synapse0x3150480();
   input += synapse0x3150e10();
   input += synapse0x3150e50();
   input += synapse0x31517e0();
   input += synapse0x3151820();
   input += synapse0x31521b0();
   input += synapse0x31521f0();
   input += synapse0x3146350();
   input += synapse0x3146390();
   input += synapse0x31542a0();
   input += synapse0x31542e0();
   input += synapse0x3154c70();
   input += synapse0x3154cb0();
   input += synapse0x3155640();
   input += synapse0x3155680();
   input += synapse0x3156010();
   input += synapse0x3156050();
   input += synapse0x31569e0();
   input += synapse0x3156a20();
   input += synapse0x314f530();
   input += synapse0x314f570();
   input += synapse0x3158de0();
   input += synapse0x3158e20();
   input += synapse0x3159770();
   input += synapse0x31597b0();
   input += synapse0x315a140();
   input += synapse0x315a180();
   input += synapse0x315ab10();
   input += synapse0x315ab50();
   input += synapse0x315b4e0();
   input += synapse0x315b520();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3173660() {
   double input = input0x3173660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3173a00() {
   double input = 0.331647;
   input += synapse0x315dc20();
   input += synapse0x315dc60();
   input += synapse0x31531e0();
   input += synapse0x3153220();
   input += synapse0x3160800();
   input += synapse0x3160840();
   input += synapse0x31611d0();
   input += synapse0x3161210();
   input += synapse0x3161ba0();
   input += synapse0x3161be0();
   input += synapse0x3162570();
   input += synapse0x31625b0();
   input += synapse0x3162f40();
   input += synapse0x3162f80();
   input += synapse0x3163910();
   input += synapse0x3163950();
   input += synapse0x31642e0();
   input += synapse0x3164320();
   input += synapse0x3164cb0();
   input += synapse0x3164cf0();
   input += synapse0x3165890();
   input += synapse0x31658d0();
   input += synapse0x3166260();
   input += synapse0x31662a0();
   input += synapse0x31570e0();
   input += synapse0x3157120();
   input += synapse0x3157ab0();
   input += synapse0x3157af0();
   input += synapse0x3158480();
   input += synapse0x31584c0();
   input += synapse0x316a9a0();
   input += synapse0x316a9e0();
   input += synapse0x316b370();
   input += synapse0x316b3b0();
   input += synapse0x316bd40();
   input += synapse0x316bd80();
   input += synapse0x316c710();
   input += synapse0x316c750();
   input += synapse0x3148600();
   input += synapse0x3148640();
   input += synapse0x315beb0();
   input += synapse0x315bef0();
   input += synapse0x316ce30();
   input += synapse0x316ce70();
   input += synapse0x316ceb0();
   input += synapse0x316cef0();
   input += synapse0x3173da0();
   input += synapse0x3173de0();
   input += synapse0x3173e20();
   input += synapse0x3173e60();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3173a00() {
   double input = input0x3173a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3173ea0() {
   double input = 0.110045;
   input += synapse0x31741e0();
   input += synapse0x3174220();
   input += synapse0x3174260();
   input += synapse0x31742a0();
   input += synapse0x31742e0();
   input += synapse0x3174320();
   input += synapse0x3174360();
   input += synapse0x31743a0();
   input += synapse0x31743e0();
   input += synapse0x3174420();
   input += synapse0x3174460();
   input += synapse0x31744a0();
   input += synapse0x31744e0();
   input += synapse0x3174520();
   input += synapse0x3174560();
   input += synapse0x31745a0();
   input += synapse0x3174030();
   input += synapse0x3174070();
   input += synapse0x31746f0();
   input += synapse0x3174730();
   input += synapse0x3174770();
   input += synapse0x31747b0();
   input += synapse0x31747f0();
   input += synapse0x3174830();
   input += synapse0x3174870();
   input += synapse0x31748b0();
   input += synapse0x31748f0();
   input += synapse0x3174930();
   input += synapse0x3174970();
   input += synapse0x31749b0();
   input += synapse0x31749f0();
   input += synapse0x3174a30();
   input += synapse0x31745e0();
   input += synapse0x3174620();
   input += synapse0x3174660();
   input += synapse0x31746a0();
   input += synapse0x3174c80();
   input += synapse0x3174cc0();
   input += synapse0x3174d00();
   input += synapse0x3174d40();
   input += synapse0x3174d80();
   input += synapse0x3174dc0();
   input += synapse0x3174e00();
   input += synapse0x3174e40();
   input += synapse0x3174e80();
   input += synapse0x3174ec0();
   input += synapse0x3174f00();
   input += synapse0x3174f40();
   input += synapse0x3174f80();
   input += synapse0x3174fc0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3173ea0() {
   double input = input0x3173ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3175000() {
   double input = 0.234742;
   input += synapse0x3175340();
   input += synapse0x3175380();
   input += synapse0x31753c0();
   input += synapse0x3175400();
   input += synapse0x3175440();
   input += synapse0x3175480();
   input += synapse0x31754c0();
   input += synapse0x3175500();
   input += synapse0x3175540();
   input += synapse0x3175580();
   input += synapse0x31755c0();
   input += synapse0x3175600();
   input += synapse0x3175640();
   input += synapse0x3175680();
   input += synapse0x31756c0();
   input += synapse0x3175700();
   input += synapse0x3175190();
   input += synapse0x31751d0();
   input += synapse0x3175850();
   input += synapse0x3175890();
   input += synapse0x31758d0();
   input += synapse0x3175910();
   input += synapse0x3175950();
   input += synapse0x3175990();
   input += synapse0x31759d0();
   input += synapse0x3175a10();
   input += synapse0x3175a50();
   input += synapse0x3175a90();
   input += synapse0x3175ad0();
   input += synapse0x3175b10();
   input += synapse0x3175b50();
   input += synapse0x3175b90();
   input += synapse0x3175740();
   input += synapse0x3175780();
   input += synapse0x31757c0();
   input += synapse0x3175800();
   input += synapse0x3175de0();
   input += synapse0x3175e20();
   input += synapse0x3175e60();
   input += synapse0x3175ea0();
   input += synapse0x3175ee0();
   input += synapse0x3175f20();
   input += synapse0x3175f60();
   input += synapse0x3175fa0();
   input += synapse0x3175fe0();
   input += synapse0x3176020();
   input += synapse0x3176060();
   input += synapse0x31760a0();
   input += synapse0x31760e0();
   input += synapse0x3176120();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3175000() {
   double input = input0x3175000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x3176160() {
   double input = -0.468551;
   input += synapse0x31764a0();
   input += synapse0x31764e0();
   input += synapse0x3176520();
   input += synapse0x3176560();
   input += synapse0x31765a0();
   input += synapse0x31765e0();
   input += synapse0x3176620();
   input += synapse0x3176660();
   input += synapse0x31766a0();
   input += synapse0x31766e0();
   input += synapse0x3176720();
   input += synapse0x3176760();
   input += synapse0x31767a0();
   input += synapse0x31767e0();
   input += synapse0x3176820();
   input += synapse0x3176860();
   input += synapse0x31762f0();
   input += synapse0x3176330();
   input += synapse0x31769b0();
   input += synapse0x31769f0();
   input += synapse0x3176a30();
   input += synapse0x3176a70();
   input += synapse0x3176ab0();
   input += synapse0x3176af0();
   input += synapse0x3176b30();
   input += synapse0x3176b70();
   input += synapse0x3176bb0();
   input += synapse0x3176bf0();
   input += synapse0x3176c30();
   input += synapse0x3176c70();
   input += synapse0x3176cb0();
   input += synapse0x3176cf0();
   input += synapse0x31768a0();
   input += synapse0x31768e0();
   input += synapse0x3176920();
   input += synapse0x3176960();
   input += synapse0x3176f40();
   input += synapse0x3176f80();
   input += synapse0x3176fc0();
   input += synapse0x3177000();
   input += synapse0x3177040();
   input += synapse0x3177080();
   input += synapse0x31770c0();
   input += synapse0x3177100();
   input += synapse0x3177140();
   input += synapse0x3177180();
   input += synapse0x31771c0();
   input += synapse0x3177200();
   input += synapse0x3177240();
   input += synapse0x3177280();
   return input;
}

double NNfunction_sb_uLuR::neuron0x3176160() {
   double input = input0x3176160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x31772c0() {
   double input = 0.971125;
   input += synapse0x31774e0();
   input += synapse0x3177520();
   input += synapse0x3177560();
   input += synapse0x31775a0();
   input += synapse0x31775e0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x31772c0() {
   double input = input0x31772c0();
   return (input * 1)+0;
}

double NNfunction_sb_uLuR::synapse0x3143270() {
   return (neuron0x31433b0()*-0.659406);
}

double NNfunction_sb_uLuR::synapse0x31432b0() {
   return (neuron0x31436f0()*0.169577);
}

double NNfunction_sb_uLuR::synapse0x3148690() {
   return (neuron0x3143a30()*0.0629084);
}

double NNfunction_sb_uLuR::synapse0x31486d0() {
   return (neuron0x3143d70()*0.776838);
}

double NNfunction_sb_uLuR::synapse0x3148710() {
   return (neuron0x31440b0()*0.17168);
}

double NNfunction_sb_uLuR::synapse0x3148750() {
   return (neuron0x31443f0()*-0.161197);
}

double NNfunction_sb_uLuR::synapse0x3148790() {
   return (neuron0x3144730()*0.674823);
}

double NNfunction_sb_uLuR::synapse0x31487d0() {
   return (neuron0x3144a70()*-0.30259);
}

double NNfunction_sb_uLuR::synapse0x3148810() {
   return (neuron0x3144db0()*0.710224);
}

double NNfunction_sb_uLuR::synapse0x3148850() {
   return (neuron0x31450f0()*0.266228);
}

double NNfunction_sb_uLuR::synapse0x3148890() {
   return (neuron0x3145430()*0.0549977);
}

double NNfunction_sb_uLuR::synapse0x31488d0() {
   return (neuron0x3145770()*-0.694954);
}

double NNfunction_sb_uLuR::synapse0x3148910() {
   return (neuron0x3145ab0()*-0.117957);
}

double NNfunction_sb_uLuR::synapse0x3148950() {
   return (neuron0x3145df0()*0.581454);
}

double NNfunction_sb_uLuR::synapse0x3148990() {
   return (neuron0x3146130()*0.000410382);
}

double NNfunction_sb_uLuR::synapse0x31489d0() {
   return (neuron0x3146470()*-0.207894);
}

double NNfunction_sb_uLuR::synapse0x31431e0() {
   return (neuron0x31467b0()*0.127875);
}

double NNfunction_sb_uLuR::synapse0x3143220() {
   return (neuron0x3146d10()*-0.597654);
}

double NNfunction_sb_uLuR::synapse0x2efe590() {
   return (neuron0x3146f30()*0.108559);
}

double NNfunction_sb_uLuR::synapse0x2efe5d0() {
   return (neuron0x3147270()*-0.476043);
}

double NNfunction_sb_uLuR::synapse0x3148c30() {
   return (neuron0x31475b0()*0.188201);
}

double NNfunction_sb_uLuR::synapse0x3148c70() {
   return (neuron0x31478f0()*0.110344);
}

double NNfunction_sb_uLuR::synapse0x3148cb0() {
   return (neuron0x3147c30()*-0.114991);
}

double NNfunction_sb_uLuR::synapse0x3148cf0() {
   return (neuron0x3147f70()*-0.588973);
}

double NNfunction_sb_uLuR::synapse0x3149070() {
   return (neuron0x31433b0()*-0.110065);
}

double NNfunction_sb_uLuR::synapse0x31490b0() {
   return (neuron0x31436f0()*0.0259841);
}

double NNfunction_sb_uLuR::synapse0x31490f0() {
   return (neuron0x3143a30()*0.00832907);
}

double NNfunction_sb_uLuR::synapse0x3149130() {
   return (neuron0x3143d70()*-0.175656);
}

double NNfunction_sb_uLuR::synapse0x3149170() {
   return (neuron0x31440b0()*-0.0390858);
}

double NNfunction_sb_uLuR::synapse0x31491b0() {
   return (neuron0x31443f0()*-0.1347);
}

double NNfunction_sb_uLuR::synapse0x31491f0() {
   return (neuron0x3144730()*-0.179581);
}

double NNfunction_sb_uLuR::synapse0x3149230() {
   return (neuron0x3144a70()*0.00817837);
}

double NNfunction_sb_uLuR::synapse0x3149270() {
   return (neuron0x3144db0()*0.003852);
}

double NNfunction_sb_uLuR::synapse0x3148b20() {
   return (neuron0x31450f0()*0.0350584);
}

double NNfunction_sb_uLuR::synapse0x3148b60() {
   return (neuron0x3145430()*-0.010709);
}

double NNfunction_sb_uLuR::synapse0x3148ba0() {
   return (neuron0x3145770()*-0.305627);
}

double NNfunction_sb_uLuR::synapse0x3148be0() {
   return (neuron0x3145ab0()*0.00575423);
}

double NNfunction_sb_uLuR::synapse0x31494c0() {
   return (neuron0x3145df0()*0.012612);
}

double NNfunction_sb_uLuR::synapse0x3149500() {
   return (neuron0x3146130()*-0.993554);
}

double NNfunction_sb_uLuR::synapse0x3149540() {
   return (neuron0x3146470()*0.0257256);
}

double NNfunction_sb_uLuR::synapse0x3148ec0() {
   return (neuron0x31467b0()*-0.00282415);
}

double NNfunction_sb_uLuR::synapse0x3148f00() {
   return (neuron0x3146d10()*0.048428);
}

double NNfunction_sb_uLuR::synapse0x3149690() {
   return (neuron0x3146f30()*-0.00305408);
}

double NNfunction_sb_uLuR::synapse0x31496d0() {
   return (neuron0x3147270()*0.0471549);
}

double NNfunction_sb_uLuR::synapse0x3149710() {
   return (neuron0x31475b0()*-0.00963809);
}

double NNfunction_sb_uLuR::synapse0x3149750() {
   return (neuron0x31478f0()*0.0786828);
}

double NNfunction_sb_uLuR::synapse0x3149790() {
   return (neuron0x3147c30()*-0.0106458);
}

double NNfunction_sb_uLuR::synapse0x31497d0() {
   return (neuron0x3147f70()*0.0157418);
}

double NNfunction_sb_uLuR::synapse0x3149b50() {
   return (neuron0x31433b0()*0.117158);
}

double NNfunction_sb_uLuR::synapse0x3149b90() {
   return (neuron0x31436f0()*-0.627713);
}

double NNfunction_sb_uLuR::synapse0x3149bd0() {
   return (neuron0x3143a30()*0.414707);
}

double NNfunction_sb_uLuR::synapse0x3149c10() {
   return (neuron0x3143d70()*-0.486462);
}

double NNfunction_sb_uLuR::synapse0x3149c50() {
   return (neuron0x31440b0()*-0.322977);
}

double NNfunction_sb_uLuR::synapse0x3149c90() {
   return (neuron0x31443f0()*-0.116609);
}

double NNfunction_sb_uLuR::synapse0x3149cd0() {
   return (neuron0x3144730()*-0.0207835);
}

double NNfunction_sb_uLuR::synapse0x3149d10() {
   return (neuron0x3144a70()*-0.456495);
}

double NNfunction_sb_uLuR::synapse0x3149d50() {
   return (neuron0x3144db0()*0.661331);
}

double NNfunction_sb_uLuR::synapse0x3149d90() {
   return (neuron0x31450f0()*0.131271);
}

double NNfunction_sb_uLuR::synapse0x3149dd0() {
   return (neuron0x3145430()*0.228591);
}

double NNfunction_sb_uLuR::synapse0x3149e10() {
   return (neuron0x3145770()*-0.212472);
}

double NNfunction_sb_uLuR::synapse0x3149e50() {
   return (neuron0x3145ab0()*-0.425712);
}

double NNfunction_sb_uLuR::synapse0x3149e90() {
   return (neuron0x3145df0()*-0.156748);
}

double NNfunction_sb_uLuR::synapse0x3149ed0() {
   return (neuron0x3146130()*0.351026);
}

double NNfunction_sb_uLuR::synapse0x3149f10() {
   return (neuron0x3146470()*-0.745667);
}

double NNfunction_sb_uLuR::synapse0x31499a0() {
   return (neuron0x31467b0()*0.187054);
}

double NNfunction_sb_uLuR::synapse0x31499e0() {
   return (neuron0x3146d10()*-0.273065);
}

double NNfunction_sb_uLuR::synapse0x2efec40() {
   return (neuron0x3146f30()*0.149352);
}

double NNfunction_sb_uLuR::synapse0x2f0c510() {
   return (neuron0x3147270()*-0.369034);
}

double NNfunction_sb_uLuR::synapse0x2f0c550() {
   return (neuron0x31475b0()*-0.796625);
}

double NNfunction_sb_uLuR::synapse0x3132440() {
   return (neuron0x31478f0()*0.0942872);
}

double NNfunction_sb_uLuR::synapse0x3132480() {
   return (neuron0x3147c30()*-0.0702303);
}

double NNfunction_sb_uLuR::synapse0x31324c0() {
   return (neuron0x3147f70()*0.181261);
}

double NNfunction_sb_uLuR::synapse0x2f0cd90() {
   return (neuron0x31433b0()*-0.0685372);
}

double NNfunction_sb_uLuR::synapse0x3149440() {
   return (neuron0x31436f0()*0.000532101);
}

double NNfunction_sb_uLuR::synapse0x3149480() {
   return (neuron0x3143a30()*0.0690699);
}

double NNfunction_sb_uLuR::synapse0x314a060() {
   return (neuron0x3143d70()*-3.50867);
}

double NNfunction_sb_uLuR::synapse0x314a0a0() {
   return (neuron0x31440b0()*-0.0506443);
}

double NNfunction_sb_uLuR::synapse0x314a0e0() {
   return (neuron0x31443f0()*0.00103355);
}

double NNfunction_sb_uLuR::synapse0x314a120() {
   return (neuron0x3144730()*0.0231771);
}

double NNfunction_sb_uLuR::synapse0x314a160() {
   return (neuron0x3144a70()*-0.0165968);
}

double NNfunction_sb_uLuR::synapse0x314a1a0() {
   return (neuron0x3144db0()*-0.04079);
}

double NNfunction_sb_uLuR::synapse0x314a1e0() {
   return (neuron0x31450f0()*0.0396149);
}

double NNfunction_sb_uLuR::synapse0x314a220() {
   return (neuron0x3145430()*-0.00276209);
}

double NNfunction_sb_uLuR::synapse0x314a260() {
   return (neuron0x3145770()*2.15612);
}

double NNfunction_sb_uLuR::synapse0x314a2a0() {
   return (neuron0x3145ab0()*0.0103496);
}

double NNfunction_sb_uLuR::synapse0x314a2e0() {
   return (neuron0x3145df0()*0.0191156);
}

double NNfunction_sb_uLuR::synapse0x314a320() {
   return (neuron0x3146130()*-0.511591);
}

double NNfunction_sb_uLuR::synapse0x314a360() {
   return (neuron0x3146470()*-0.0196856);
}

double NNfunction_sb_uLuR::synapse0x31432f0() {
   return (neuron0x31467b0()*0.0614819);
}

double NNfunction_sb_uLuR::synapse0x3143330() {
   return (neuron0x3146d10()*0.0669199);
}

double NNfunction_sb_uLuR::synapse0x3143370() {
   return (neuron0x3146f30()*0.000778215);
}

double NNfunction_sb_uLuR::synapse0x314a4b0() {
   return (neuron0x3147270()*-0.0231838);
}

double NNfunction_sb_uLuR::synapse0x314a4f0() {
   return (neuron0x31475b0()*0.0250505);
}

double NNfunction_sb_uLuR::synapse0x314a530() {
   return (neuron0x31478f0()*-0.0394567);
}

double NNfunction_sb_uLuR::synapse0x314a570() {
   return (neuron0x3147c30()*0.0228002);
}

double NNfunction_sb_uLuR::synapse0x314a5b0() {
   return (neuron0x3147f70()*0.0412869);
}

double NNfunction_sb_uLuR::synapse0x314a930() {
   return (neuron0x31433b0()*-0.00479912);
}

double NNfunction_sb_uLuR::synapse0x314a970() {
   return (neuron0x31436f0()*0.0379491);
}

double NNfunction_sb_uLuR::synapse0x314a9b0() {
   return (neuron0x3143a30()*-0.115789);
}

double NNfunction_sb_uLuR::synapse0x314a9f0() {
   return (neuron0x3143d70()*1.321);
}

double NNfunction_sb_uLuR::synapse0x314aa30() {
   return (neuron0x31440b0()*0.0321718);
}

double NNfunction_sb_uLuR::synapse0x314aa70() {
   return (neuron0x31443f0()*0.0321081);
}

double NNfunction_sb_uLuR::synapse0x314aab0() {
   return (neuron0x3144730()*-0.0116267);
}

double NNfunction_sb_uLuR::synapse0x314aaf0() {
   return (neuron0x3144a70()*-0.0359845);
}

double NNfunction_sb_uLuR::synapse0x314ab30() {
   return (neuron0x3144db0()*-0.00324061);
}

double NNfunction_sb_uLuR::synapse0x314ab70() {
   return (neuron0x31450f0()*-0.0119523);
}

double NNfunction_sb_uLuR::synapse0x314abb0() {
   return (neuron0x3145430()*-0.0377446);
}

double NNfunction_sb_uLuR::synapse0x314abf0() {
   return (neuron0x3145770()*-0.574207);
}

double NNfunction_sb_uLuR::synapse0x314ac30() {
   return (neuron0x3145ab0()*0.0913166);
}

double NNfunction_sb_uLuR::synapse0x314ac70() {
   return (neuron0x3145df0()*0.0288371);
}

double NNfunction_sb_uLuR::synapse0x314acb0() {
   return (neuron0x3146130()*-0.816709);
}

double NNfunction_sb_uLuR::synapse0x314acf0() {
   return (neuron0x3146470()*0.00289328);
}

double NNfunction_sb_uLuR::synapse0x314a780() {
   return (neuron0x31467b0()*-0.0772237);
}

double NNfunction_sb_uLuR::synapse0x314a7c0() {
   return (neuron0x3146d10()*0.0625545);
}

double NNfunction_sb_uLuR::synapse0x314ae40() {
   return (neuron0x3146f30()*-0.000898336);
}

double NNfunction_sb_uLuR::synapse0x314ae80() {
   return (neuron0x3147270()*0.0172236);
}

double NNfunction_sb_uLuR::synapse0x314aec0() {
   return (neuron0x31475b0()*0.00207225);
}

double NNfunction_sb_uLuR::synapse0x314af00() {
   return (neuron0x31478f0()*-0.0471025);
}

double NNfunction_sb_uLuR::synapse0x314af40() {
   return (neuron0x3147c30()*0.00700797);
}

double NNfunction_sb_uLuR::synapse0x314af80() {
   return (neuron0x3147f70()*0.0104982);
}

double NNfunction_sb_uLuR::synapse0x314b300() {
   return (neuron0x31433b0()*-0.043296);
}

double NNfunction_sb_uLuR::synapse0x314b340() {
   return (neuron0x31436f0()*-0.0022368);
}

double NNfunction_sb_uLuR::synapse0x314b380() {
   return (neuron0x3143a30()*-0.0105041);
}

double NNfunction_sb_uLuR::synapse0x314b3c0() {
   return (neuron0x3143d70()*0.172192);
}

double NNfunction_sb_uLuR::synapse0x314b400() {
   return (neuron0x31440b0()*0.000823172);
}

double NNfunction_sb_uLuR::synapse0x314b440() {
   return (neuron0x31443f0()*-0.0304645);
}

double NNfunction_sb_uLuR::synapse0x314b480() {
   return (neuron0x3144730()*0.0271515);
}

double NNfunction_sb_uLuR::synapse0x314b4c0() {
   return (neuron0x3144a70()*0.00209731);
}

double NNfunction_sb_uLuR::synapse0x314b500() {
   return (neuron0x3144db0()*-0.0297984);
}

double NNfunction_sb_uLuR::synapse0x2f0c860() {
   return (neuron0x31450f0()*-0.0611085);
}

double NNfunction_sb_uLuR::synapse0x2f0c8a0() {
   return (neuron0x3145430()*-0.0576608);
}

double NNfunction_sb_uLuR::synapse0x2f0c8e0() {
   return (neuron0x3145770()*0.555722);
}

double NNfunction_sb_uLuR::synapse0x2f0c920() {
   return (neuron0x3145ab0()*-0.0242507);
}

double NNfunction_sb_uLuR::synapse0x2f0c960() {
   return (neuron0x3145df0()*0.0122142);
}

double NNfunction_sb_uLuR::synapse0x2f0c9a0() {
   return (neuron0x3146130()*-0.2333);
}

double NNfunction_sb_uLuR::synapse0x2f0c9e0() {
   return (neuron0x3146470()*-0.00281707);
}

double NNfunction_sb_uLuR::synapse0x314b150() {
   return (neuron0x31467b0()*0.000807665);
}

double NNfunction_sb_uLuR::synapse0x314b190() {
   return (neuron0x3146d10()*0.0171863);
}

double NNfunction_sb_uLuR::synapse0x2f0cb30() {
   return (neuron0x3146f30()*-0.0154127);
}

double NNfunction_sb_uLuR::synapse0x2f0cb70() {
   return (neuron0x3147270()*0.00948755);
}

double NNfunction_sb_uLuR::synapse0x2f0cbb0() {
   return (neuron0x31475b0()*0.00435307);
}

double NNfunction_sb_uLuR::synapse0x2f0cbf0() {
   return (neuron0x31478f0()*-0.00618973);
}

double NNfunction_sb_uLuR::synapse0x2f0cc30() {
   return (neuron0x3147c30()*0.0172846);
}

double NNfunction_sb_uLuR::synapse0x314bd50() {
   return (neuron0x3147f70()*-0.0137936);
}

double NNfunction_sb_uLuR::synapse0x314c0d0() {
   return (neuron0x31433b0()*0.159228);
}

double NNfunction_sb_uLuR::synapse0x314c110() {
   return (neuron0x31436f0()*0.0405205);
}

double NNfunction_sb_uLuR::synapse0x314c150() {
   return (neuron0x3143a30()*0.147953);
}

double NNfunction_sb_uLuR::synapse0x314c190() {
   return (neuron0x3143d70()*0.0914451);
}

double NNfunction_sb_uLuR::synapse0x314c1d0() {
   return (neuron0x31440b0()*0.0248065);
}

double NNfunction_sb_uLuR::synapse0x314c210() {
   return (neuron0x31443f0()*-0.077635);
}

double NNfunction_sb_uLuR::synapse0x314c250() {
   return (neuron0x3144730()*-0.18821);
}

double NNfunction_sb_uLuR::synapse0x314c290() {
   return (neuron0x3144a70()*-0.523008);
}

double NNfunction_sb_uLuR::synapse0x314c2d0() {
   return (neuron0x3144db0()*0.0575358);
}

double NNfunction_sb_uLuR::synapse0x314c310() {
   return (neuron0x31450f0()*-0.0641971);
}

double NNfunction_sb_uLuR::synapse0x314c350() {
   return (neuron0x3145430()*0.0318025);
}

double NNfunction_sb_uLuR::synapse0x314c390() {
   return (neuron0x3145770()*-0.368747);
}

double NNfunction_sb_uLuR::synapse0x314c3d0() {
   return (neuron0x3145ab0()*0.13563);
}

double NNfunction_sb_uLuR::synapse0x314c410() {
   return (neuron0x3145df0()*0.0511205);
}

double NNfunction_sb_uLuR::synapse0x314c450() {
   return (neuron0x3146130()*1.05756);
}

double NNfunction_sb_uLuR::synapse0x314c490() {
   return (neuron0x3146470()*0.0156429);
}

double NNfunction_sb_uLuR::synapse0x314bf20() {
   return (neuron0x31467b0()*-0.349935);
}

double NNfunction_sb_uLuR::synapse0x314bf60() {
   return (neuron0x3146d10()*0.284963);
}

double NNfunction_sb_uLuR::synapse0x314c5e0() {
   return (neuron0x3146f30()*0.0535533);
}

double NNfunction_sb_uLuR::synapse0x314c620() {
   return (neuron0x3147270()*0.112422);
}

double NNfunction_sb_uLuR::synapse0x314c660() {
   return (neuron0x31475b0()*0.0437709);
}

double NNfunction_sb_uLuR::synapse0x314c6a0() {
   return (neuron0x31478f0()*0.0252499);
}

double NNfunction_sb_uLuR::synapse0x314c6e0() {
   return (neuron0x3147c30()*0.22058);
}

double NNfunction_sb_uLuR::synapse0x314c720() {
   return (neuron0x3147f70()*-0.0623876);
}

double NNfunction_sb_uLuR::synapse0x314caa0() {
   return (neuron0x31433b0()*-0.208168);
}

double NNfunction_sb_uLuR::synapse0x314cae0() {
   return (neuron0x31436f0()*0.00481533);
}

double NNfunction_sb_uLuR::synapse0x314cb20() {
   return (neuron0x3143a30()*0.155027);
}

double NNfunction_sb_uLuR::synapse0x314cb60() {
   return (neuron0x3143d70()*-0.394947);
}

double NNfunction_sb_uLuR::synapse0x314cba0() {
   return (neuron0x31440b0()*0.0650323);
}

double NNfunction_sb_uLuR::synapse0x314cbe0() {
   return (neuron0x31443f0()*0.180328);
}

double NNfunction_sb_uLuR::synapse0x314cc20() {
   return (neuron0x3144730()*-0.0240983);
}

double NNfunction_sb_uLuR::synapse0x314cc60() {
   return (neuron0x3144a70()*-0.100582);
}

double NNfunction_sb_uLuR::synapse0x314cca0() {
   return (neuron0x3144db0()*-0.201973);
}

double NNfunction_sb_uLuR::synapse0x314cce0() {
   return (neuron0x31450f0()*0.151921);
}

double NNfunction_sb_uLuR::synapse0x314cd20() {
   return (neuron0x3145430()*0.065108);
}

double NNfunction_sb_uLuR::synapse0x314cd60() {
   return (neuron0x3145770()*0.288334);
}

double NNfunction_sb_uLuR::synapse0x314cda0() {
   return (neuron0x3145ab0()*0.0629964);
}

double NNfunction_sb_uLuR::synapse0x314cde0() {
   return (neuron0x3145df0()*0.007992);
}

double NNfunction_sb_uLuR::synapse0x314ce20() {
   return (neuron0x3146130()*0.0697313);
}

double NNfunction_sb_uLuR::synapse0x314ce60() {
   return (neuron0x3146470()*0.084255);
}

double NNfunction_sb_uLuR::synapse0x314c8f0() {
   return (neuron0x31467b0()*-0.0716684);
}

double NNfunction_sb_uLuR::synapse0x314c930() {
   return (neuron0x3146d10()*-0.00340446);
}

double NNfunction_sb_uLuR::synapse0x314cfb0() {
   return (neuron0x3146f30()*0.0270478);
}

double NNfunction_sb_uLuR::synapse0x314cff0() {
   return (neuron0x3147270()*-0.0349432);
}

double NNfunction_sb_uLuR::synapse0x314d030() {
   return (neuron0x31475b0()*0.0123602);
}

double NNfunction_sb_uLuR::synapse0x314d070() {
   return (neuron0x31478f0()*0.0523072);
}

double NNfunction_sb_uLuR::synapse0x314d0b0() {
   return (neuron0x3147c30()*-0.0622896);
}

double NNfunction_sb_uLuR::synapse0x314d0f0() {
   return (neuron0x3147f70()*-0.0594027);
}

double NNfunction_sb_uLuR::synapse0x3146c00() {
   return (neuron0x31433b0()*0.0266021);
}

double NNfunction_sb_uLuR::synapse0x3146c40() {
   return (neuron0x31436f0()*-0.0156415);
}

double NNfunction_sb_uLuR::synapse0x3146c80() {
   return (neuron0x3143a30()*0.347505);
}

double NNfunction_sb_uLuR::synapse0x3146cc0() {
   return (neuron0x3143d70()*0.447064);
}

double NNfunction_sb_uLuR::synapse0x314d680() {
   return (neuron0x31440b0()*0.407685);
}

double NNfunction_sb_uLuR::synapse0x314d6c0() {
   return (neuron0x31443f0()*0.500896);
}

double NNfunction_sb_uLuR::synapse0x314d700() {
   return (neuron0x3144730()*-0.261301);
}

double NNfunction_sb_uLuR::synapse0x314d740() {
   return (neuron0x3144a70()*-0.592428);
}

double NNfunction_sb_uLuR::synapse0x314d780() {
   return (neuron0x3144db0()*-0.551228);
}

double NNfunction_sb_uLuR::synapse0x314d7c0() {
   return (neuron0x31450f0()*0.31108);
}

double NNfunction_sb_uLuR::synapse0x314d800() {
   return (neuron0x3145430()*0.356753);
}

double NNfunction_sb_uLuR::synapse0x314d840() {
   return (neuron0x3145770()*-0.271386);
}

double NNfunction_sb_uLuR::synapse0x314d880() {
   return (neuron0x3145ab0()*-0.469023);
}

double NNfunction_sb_uLuR::synapse0x314d8c0() {
   return (neuron0x3145df0()*0.06386);
}

double NNfunction_sb_uLuR::synapse0x314d900() {
   return (neuron0x3146130()*-0.0811832);
}

double NNfunction_sb_uLuR::synapse0x314d940() {
   return (neuron0x3146470()*-1.35134);
}

double NNfunction_sb_uLuR::synapse0x314d2c0() {
   return (neuron0x31467b0()*-0.582039);
}

double NNfunction_sb_uLuR::synapse0x314d300() {
   return (neuron0x3146d10()*-0.178143);
}

double NNfunction_sb_uLuR::synapse0x314da90() {
   return (neuron0x3146f30()*-0.375833);
}

double NNfunction_sb_uLuR::synapse0x314dad0() {
   return (neuron0x3147270()*0.514863);
}

double NNfunction_sb_uLuR::synapse0x314db10() {
   return (neuron0x31475b0()*-0.105442);
}

double NNfunction_sb_uLuR::synapse0x314db50() {
   return (neuron0x31478f0()*0.403023);
}

double NNfunction_sb_uLuR::synapse0x314db90() {
   return (neuron0x3147c30()*0.245699);
}

double NNfunction_sb_uLuR::synapse0x314dbd0() {
   return (neuron0x3147f70()*-0.310376);
}

double NNfunction_sb_uLuR::synapse0x314df50() {
   return (neuron0x31433b0()*-0.627703);
}

double NNfunction_sb_uLuR::synapse0x314df90() {
   return (neuron0x31436f0()*-0.679764);
}

double NNfunction_sb_uLuR::synapse0x314dfd0() {
   return (neuron0x3143a30()*-0.202618);
}

double NNfunction_sb_uLuR::synapse0x314e010() {
   return (neuron0x3143d70()*0.0420323);
}

double NNfunction_sb_uLuR::synapse0x314e050() {
   return (neuron0x31440b0()*-0.216556);
}

double NNfunction_sb_uLuR::synapse0x314e090() {
   return (neuron0x31443f0()*-0.025702);
}

double NNfunction_sb_uLuR::synapse0x314e0d0() {
   return (neuron0x3144730()*-0.0757014);
}

double NNfunction_sb_uLuR::synapse0x314e110() {
   return (neuron0x3144a70()*0.411646);
}

double NNfunction_sb_uLuR::synapse0x314e150() {
   return (neuron0x3144db0()*-0.367014);
}

double NNfunction_sb_uLuR::synapse0x314e190() {
   return (neuron0x31450f0()*-0.473058);
}

double NNfunction_sb_uLuR::synapse0x314e1d0() {
   return (neuron0x3145430()*-0.451745);
}

double NNfunction_sb_uLuR::synapse0x314e210() {
   return (neuron0x3145770()*0.574673);
}

double NNfunction_sb_uLuR::synapse0x314e250() {
   return (neuron0x3145ab0()*0.0823288);
}

double NNfunction_sb_uLuR::synapse0x314e290() {
   return (neuron0x3145df0()*0.434429);
}

double NNfunction_sb_uLuR::synapse0x314e2d0() {
   return (neuron0x3146130()*-0.351252);
}

double NNfunction_sb_uLuR::synapse0x314e310() {
   return (neuron0x3146470()*-0.133274);
}

double NNfunction_sb_uLuR::synapse0x314dda0() {
   return (neuron0x31467b0()*-0.201569);
}

double NNfunction_sb_uLuR::synapse0x314dde0() {
   return (neuron0x3146d10()*-0.512396);
}

double NNfunction_sb_uLuR::synapse0x314e460() {
   return (neuron0x3146f30()*-0.214724);
}

double NNfunction_sb_uLuR::synapse0x314e4a0() {
   return (neuron0x3147270()*0.241519);
}

double NNfunction_sb_uLuR::synapse0x314e4e0() {
   return (neuron0x31475b0()*-0.525563);
}

double NNfunction_sb_uLuR::synapse0x314e520() {
   return (neuron0x31478f0()*0.557085);
}

double NNfunction_sb_uLuR::synapse0x314e560() {
   return (neuron0x3147c30()*-0.539576);
}

double NNfunction_sb_uLuR::synapse0x314e5a0() {
   return (neuron0x3147f70()*-0.1545);
}

double NNfunction_sb_uLuR::synapse0x314e920() {
   return (neuron0x31433b0()*0.109065);
}

double NNfunction_sb_uLuR::synapse0x314e960() {
   return (neuron0x31436f0()*0.301953);
}

double NNfunction_sb_uLuR::synapse0x314e9a0() {
   return (neuron0x3143a30()*0.0797823);
}

double NNfunction_sb_uLuR::synapse0x314e9e0() {
   return (neuron0x3143d70()*0.789528);
}

double NNfunction_sb_uLuR::synapse0x314ea20() {
   return (neuron0x31440b0()*0.0419828);
}

double NNfunction_sb_uLuR::synapse0x314ea60() {
   return (neuron0x31443f0()*0.116161);
}

double NNfunction_sb_uLuR::synapse0x314eaa0() {
   return (neuron0x3144730()*0.0332856);
}

double NNfunction_sb_uLuR::synapse0x314eae0() {
   return (neuron0x3144a70()*-0.12314);
}

double NNfunction_sb_uLuR::synapse0x314eb20() {
   return (neuron0x3144db0()*-0.403867);
}

double NNfunction_sb_uLuR::synapse0x314eb60() {
   return (neuron0x31450f0()*0.0650394);
}

double NNfunction_sb_uLuR::synapse0x314eba0() {
   return (neuron0x3145430()*0.151245);
}

double NNfunction_sb_uLuR::synapse0x314ebe0() {
   return (neuron0x3145770()*0.0404468);
}

double NNfunction_sb_uLuR::synapse0x314ec20() {
   return (neuron0x3145ab0()*0.173331);
}

double NNfunction_sb_uLuR::synapse0x314ec60() {
   return (neuron0x3145df0()*-0.024094);
}

double NNfunction_sb_uLuR::synapse0x314eca0() {
   return (neuron0x3146130()*0.94755);
}

double NNfunction_sb_uLuR::synapse0x314ece0() {
   return (neuron0x3146470()*-0.0263882);
}

double NNfunction_sb_uLuR::synapse0x314e770() {
   return (neuron0x31467b0()*-0.116772);
}

double NNfunction_sb_uLuR::synapse0x314e7b0() {
   return (neuron0x3146d10()*0.00231573);
}

double NNfunction_sb_uLuR::synapse0x314b540() {
   return (neuron0x3146f30()*0.180966);
}

double NNfunction_sb_uLuR::synapse0x314b580() {
   return (neuron0x3147270()*-0.176194);
}

double NNfunction_sb_uLuR::synapse0x314b5c0() {
   return (neuron0x31475b0()*-0.0476566);
}

double NNfunction_sb_uLuR::synapse0x314b600() {
   return (neuron0x31478f0()*-0.00305494);
}

double NNfunction_sb_uLuR::synapse0x314b640() {
   return (neuron0x3147c30()*-0.0368599);
}

double NNfunction_sb_uLuR::synapse0x314b680() {
   return (neuron0x3147f70()*0.00989828);
}

double NNfunction_sb_uLuR::synapse0x314ba00() {
   return (neuron0x31433b0()*0.168021);
}

double NNfunction_sb_uLuR::synapse0x314ba40() {
   return (neuron0x31436f0()*0.2213);
}

double NNfunction_sb_uLuR::synapse0x314ba80() {
   return (neuron0x3143a30()*0.0513962);
}

double NNfunction_sb_uLuR::synapse0x314bac0() {
   return (neuron0x3143d70()*0.86745);
}

double NNfunction_sb_uLuR::synapse0x314bb00() {
   return (neuron0x31440b0()*-0.0665527);
}

double NNfunction_sb_uLuR::synapse0x314bb40() {
   return (neuron0x31443f0()*0.00200624);
}

double NNfunction_sb_uLuR::synapse0x314bb80() {
   return (neuron0x3144730()*0.0753879);
}

double NNfunction_sb_uLuR::synapse0x314bbc0() {
   return (neuron0x3144a70()*0.108631);
}

double NNfunction_sb_uLuR::synapse0x314bc00() {
   return (neuron0x3144db0()*-0.110407);
}

double NNfunction_sb_uLuR::synapse0x314bc40() {
   return (neuron0x31450f0()*-0.279612);
}

double NNfunction_sb_uLuR::synapse0x314bc80() {
   return (neuron0x3145430()*-0.0169073);
}

double NNfunction_sb_uLuR::synapse0x314bcc0() {
   return (neuron0x3145770()*-0.415113);
}

double NNfunction_sb_uLuR::synapse0x314bd00() {
   return (neuron0x3145ab0()*-0.444193);
}

double NNfunction_sb_uLuR::synapse0x314fe40() {
   return (neuron0x3145df0()*-0.299242);
}

double NNfunction_sb_uLuR::synapse0x314fe80() {
   return (neuron0x3146130()*0.454467);
}

double NNfunction_sb_uLuR::synapse0x314fec0() {
   return (neuron0x3146470()*0.0703103);
}

double NNfunction_sb_uLuR::synapse0x314b850() {
   return (neuron0x31467b0()*0.260441);
}

double NNfunction_sb_uLuR::synapse0x314b890() {
   return (neuron0x3146d10()*-0.392063);
}

double NNfunction_sb_uLuR::synapse0x3150010() {
   return (neuron0x3146f30()*0.00705102);
}

double NNfunction_sb_uLuR::synapse0x3150050() {
   return (neuron0x3147270()*-0.0462246);
}

double NNfunction_sb_uLuR::synapse0x3150090() {
   return (neuron0x31475b0()*-0.0471274);
}

double NNfunction_sb_uLuR::synapse0x31500d0() {
   return (neuron0x31478f0()*0.0705562);
}

double NNfunction_sb_uLuR::synapse0x3150110() {
   return (neuron0x3147c30()*0.0847961);
}

double NNfunction_sb_uLuR::synapse0x3150150() {
   return (neuron0x3147f70()*-0.207248);
}

double NNfunction_sb_uLuR::synapse0x31504d0() {
   return (neuron0x31433b0()*0.00827692);
}

double NNfunction_sb_uLuR::synapse0x3150510() {
   return (neuron0x31436f0()*0.029372);
}

double NNfunction_sb_uLuR::synapse0x3150550() {
   return (neuron0x3143a30()*-0.000746428);
}

double NNfunction_sb_uLuR::synapse0x3150590() {
   return (neuron0x3143d70()*0.689292);
}

double NNfunction_sb_uLuR::synapse0x31505d0() {
   return (neuron0x31440b0()*0.0345757);
}

double NNfunction_sb_uLuR::synapse0x3150610() {
   return (neuron0x31443f0()*0.0257288);
}

double NNfunction_sb_uLuR::synapse0x3150650() {
   return (neuron0x3144730()*0.0272105);
}

double NNfunction_sb_uLuR::synapse0x3150690() {
   return (neuron0x3144a70()*-0.00109094);
}

double NNfunction_sb_uLuR::synapse0x31506d0() {
   return (neuron0x3144db0()*-0.016933);
}

double NNfunction_sb_uLuR::synapse0x3150710() {
   return (neuron0x31450f0()*0.0134122);
}

double NNfunction_sb_uLuR::synapse0x3150750() {
   return (neuron0x3145430()*0.016809);
}

double NNfunction_sb_uLuR::synapse0x3150790() {
   return (neuron0x3145770()*-0.0623413);
}

double NNfunction_sb_uLuR::synapse0x31507d0() {
   return (neuron0x3145ab0()*-0.0187089);
}

double NNfunction_sb_uLuR::synapse0x3150810() {
   return (neuron0x3145df0()*0.0139646);
}

double NNfunction_sb_uLuR::synapse0x3150850() {
   return (neuron0x3146130()*-0.0253396);
}

double NNfunction_sb_uLuR::synapse0x3150890() {
   return (neuron0x3146470()*0.00288268);
}

double NNfunction_sb_uLuR::synapse0x3150320() {
   return (neuron0x31467b0()*0.0113011);
}

double NNfunction_sb_uLuR::synapse0x3150360() {
   return (neuron0x3146d10()*-0.0370545);
}

double NNfunction_sb_uLuR::synapse0x31509e0() {
   return (neuron0x3146f30()*-0.0247524);
}

double NNfunction_sb_uLuR::synapse0x3150a20() {
   return (neuron0x3147270()*-0.00360878);
}

double NNfunction_sb_uLuR::synapse0x3150a60() {
   return (neuron0x31475b0()*0.013229);
}

double NNfunction_sb_uLuR::synapse0x3150aa0() {
   return (neuron0x31478f0()*0.0220644);
}

double NNfunction_sb_uLuR::synapse0x3150ae0() {
   return (neuron0x3147c30()*-0.00354044);
}

double NNfunction_sb_uLuR::synapse0x3150b20() {
   return (neuron0x3147f70()*-0.00806273);
}

double NNfunction_sb_uLuR::synapse0x3150ea0() {
   return (neuron0x31433b0()*-0.269761);
}

double NNfunction_sb_uLuR::synapse0x3150ee0() {
   return (neuron0x31436f0()*-0.325741);
}

double NNfunction_sb_uLuR::synapse0x3150f20() {
   return (neuron0x3143a30()*-0.422394);
}

double NNfunction_sb_uLuR::synapse0x3150f60() {
   return (neuron0x3143d70()*-0.176445);
}

double NNfunction_sb_uLuR::synapse0x3150fa0() {
   return (neuron0x31440b0()*-0.619516);
}

double NNfunction_sb_uLuR::synapse0x3150fe0() {
   return (neuron0x31443f0()*0.0987974);
}

double NNfunction_sb_uLuR::synapse0x3151020() {
   return (neuron0x3144730()*0.421851);
}

double NNfunction_sb_uLuR::synapse0x3151060() {
   return (neuron0x3144a70()*0.252157);
}

double NNfunction_sb_uLuR::synapse0x31510a0() {
   return (neuron0x3144db0()*-0.0849158);
}

double NNfunction_sb_uLuR::synapse0x31510e0() {
   return (neuron0x31450f0()*-0.936222);
}

double NNfunction_sb_uLuR::synapse0x3151120() {
   return (neuron0x3145430()*0.691786);
}

double NNfunction_sb_uLuR::synapse0x3151160() {
   return (neuron0x3145770()*-0.065602);
}

double NNfunction_sb_uLuR::synapse0x31511a0() {
   return (neuron0x3145ab0()*0.0208511);
}

double NNfunction_sb_uLuR::synapse0x31511e0() {
   return (neuron0x3145df0()*0.29395);
}

double NNfunction_sb_uLuR::synapse0x3151220() {
   return (neuron0x3146130()*0.265245);
}

double NNfunction_sb_uLuR::synapse0x3151260() {
   return (neuron0x3146470()*0.0520072);
}

double NNfunction_sb_uLuR::synapse0x3150cf0() {
   return (neuron0x31467b0()*-0.13297);
}

double NNfunction_sb_uLuR::synapse0x3150d30() {
   return (neuron0x3146d10()*0.504449);
}

double NNfunction_sb_uLuR::synapse0x31513b0() {
   return (neuron0x3146f30()*-0.023078);
}

double NNfunction_sb_uLuR::synapse0x31513f0() {
   return (neuron0x3147270()*0.114646);
}

double NNfunction_sb_uLuR::synapse0x3151430() {
   return (neuron0x31475b0()*-0.296481);
}

double NNfunction_sb_uLuR::synapse0x3151470() {
   return (neuron0x31478f0()*0.224074);
}

double NNfunction_sb_uLuR::synapse0x31514b0() {
   return (neuron0x3147c30()*0.223695);
}

double NNfunction_sb_uLuR::synapse0x31514f0() {
   return (neuron0x3147f70()*0.145071);
}

double NNfunction_sb_uLuR::synapse0x3151870() {
   return (neuron0x31433b0()*0.0782638);
}

double NNfunction_sb_uLuR::synapse0x31518b0() {
   return (neuron0x31436f0()*-0.18427);
}

double NNfunction_sb_uLuR::synapse0x31518f0() {
   return (neuron0x3143a30()*-0.747259);
}

double NNfunction_sb_uLuR::synapse0x3151930() {
   return (neuron0x3143d70()*0.00146959);
}

double NNfunction_sb_uLuR::synapse0x3151970() {
   return (neuron0x31440b0()*0.174834);
}

double NNfunction_sb_uLuR::synapse0x31519b0() {
   return (neuron0x31443f0()*-0.403756);
}

double NNfunction_sb_uLuR::synapse0x31519f0() {
   return (neuron0x3144730()*-0.455196);
}

double NNfunction_sb_uLuR::synapse0x3151a30() {
   return (neuron0x3144a70()*-0.0919991);
}

double NNfunction_sb_uLuR::synapse0x3151a70() {
   return (neuron0x3144db0()*0.474617);
}

double NNfunction_sb_uLuR::synapse0x3151ab0() {
   return (neuron0x31450f0()*-0.481569);
}

double NNfunction_sb_uLuR::synapse0x3151af0() {
   return (neuron0x3145430()*-0.202353);
}

double NNfunction_sb_uLuR::synapse0x3151b30() {
   return (neuron0x3145770()*-0.0275215);
}

double NNfunction_sb_uLuR::synapse0x3151b70() {
   return (neuron0x3145ab0()*-0.0879016);
}

double NNfunction_sb_uLuR::synapse0x3151bb0() {
   return (neuron0x3145df0()*0.379289);
}

double NNfunction_sb_uLuR::synapse0x3151bf0() {
   return (neuron0x3146130()*-0.465962);
}

double NNfunction_sb_uLuR::synapse0x3151c30() {
   return (neuron0x3146470()*-0.158859);
}

double NNfunction_sb_uLuR::synapse0x31516c0() {
   return (neuron0x31467b0()*-0.295939);
}

double NNfunction_sb_uLuR::synapse0x3151700() {
   return (neuron0x3146d10()*0.380552);
}

double NNfunction_sb_uLuR::synapse0x3151d80() {
   return (neuron0x3146f30()*0.215534);
}

double NNfunction_sb_uLuR::synapse0x3151dc0() {
   return (neuron0x3147270()*-0.379677);
}

double NNfunction_sb_uLuR::synapse0x3151e00() {
   return (neuron0x31475b0()*-0.020644);
}

double NNfunction_sb_uLuR::synapse0x3151e40() {
   return (neuron0x31478f0()*-0.037394);
}

double NNfunction_sb_uLuR::synapse0x3151e80() {
   return (neuron0x3147c30()*0.162647);
}

double NNfunction_sb_uLuR::synapse0x3151ec0() {
   return (neuron0x3147f70()*0.390919);
}

double NNfunction_sb_uLuR::synapse0x3152240() {
   return (neuron0x31433b0()*-0.00788514);
}

double NNfunction_sb_uLuR::synapse0x31435d0() {
   return (neuron0x31436f0()*0.0368794);
}

double NNfunction_sb_uLuR::synapse0x3143610() {
   return (neuron0x3143a30()*-0.00454402);
}

double NNfunction_sb_uLuR::synapse0x3143910() {
   return (neuron0x3143d70()*6.37728);
}

double NNfunction_sb_uLuR::synapse0x3143950() {
   return (neuron0x31440b0()*0.0307189);
}

double NNfunction_sb_uLuR::synapse0x3143c50() {
   return (neuron0x31443f0()*-0.00805862);
}

double NNfunction_sb_uLuR::synapse0x3143c90() {
   return (neuron0x3144730()*0.00368884);
}

double NNfunction_sb_uLuR::synapse0x3143f90() {
   return (neuron0x3144a70()*-0.00572927);
}

double NNfunction_sb_uLuR::synapse0x3143fd0() {
   return (neuron0x3144db0()*-0.0267526);
}

double NNfunction_sb_uLuR::synapse0x31442d0() {
   return (neuron0x31450f0()*-0.0441402);
}

double NNfunction_sb_uLuR::synapse0x3144310() {
   return (neuron0x3145430()*-0.0167596);
}

double NNfunction_sb_uLuR::synapse0x3144610() {
   return (neuron0x3145770()*0.459991);
}

double NNfunction_sb_uLuR::synapse0x3144650() {
   return (neuron0x3145ab0()*-0.00840206);
}

double NNfunction_sb_uLuR::synapse0x3144950() {
   return (neuron0x3145df0()*0.0332907);
}

double NNfunction_sb_uLuR::synapse0x3144990() {
   return (neuron0x3146130()*0.289577);
}

double NNfunction_sb_uLuR::synapse0x3144c90() {
   return (neuron0x3146470()*-0.0353602);
}

double NNfunction_sb_uLuR::synapse0x3144cd0() {
   return (neuron0x31467b0()*0.00246908);
}

double NNfunction_sb_uLuR::synapse0x3144fd0() {
   return (neuron0x3146d10()*-0.0225904);
}

double NNfunction_sb_uLuR::synapse0x3145010() {
   return (neuron0x3146f30()*-0.0535707);
}

double NNfunction_sb_uLuR::synapse0x3145310() {
   return (neuron0x3147270()*-0.00837466);
}

double NNfunction_sb_uLuR::synapse0x3145350() {
   return (neuron0x31475b0()*0.0435122);
}

double NNfunction_sb_uLuR::synapse0x3145650() {
   return (neuron0x31478f0()*0.00293329);
}

double NNfunction_sb_uLuR::synapse0x3145690() {
   return (neuron0x3147c30()*-0.0138272);
}

double NNfunction_sb_uLuR::synapse0x3145990() {
   return (neuron0x3147f70()*0.00665483);
}

double NNfunction_sb_uLuR::synapse0x31459d0() {
   return (neuron0x31433b0()*0.00433361);
}

double NNfunction_sb_uLuR::synapse0x3146690() {
   return (neuron0x31436f0()*-0.0267611);
}

double NNfunction_sb_uLuR::synapse0x31466d0() {
   return (neuron0x3143a30()*0.0148897);
}

double NNfunction_sb_uLuR::synapse0x3152090() {
   return (neuron0x3143d70()*-0.194735);
}

double NNfunction_sb_uLuR::synapse0x31520d0() {
   return (neuron0x31440b0()*0.00371453);
}

double NNfunction_sb_uLuR::synapse0x31469d0() {
   return (neuron0x31443f0()*0.0462947);
}

double NNfunction_sb_uLuR::synapse0x3146a10() {
   return (neuron0x3144730()*0.0294078);
}

double NNfunction_sb_uLuR::synapse0x2efe470() {
   return (neuron0x3144a70()*-0.0277414);
}

double NNfunction_sb_uLuR::synapse0x2efe4b0() {
   return (neuron0x3144db0()*0.0211619);
}

double NNfunction_sb_uLuR::synapse0x3147150() {
   return (neuron0x31450f0()*-0.0490281);
}

double NNfunction_sb_uLuR::synapse0x3147190() {
   return (neuron0x3145430()*-0.0340289);
}

double NNfunction_sb_uLuR::synapse0x3147490() {
   return (neuron0x3145770()*-1.01596);
}

double NNfunction_sb_uLuR::synapse0x31474d0() {
   return (neuron0x3145ab0()*-0.0378793);
}

double NNfunction_sb_uLuR::synapse0x31477d0() {
   return (neuron0x3145df0()*-0.0105678);
}

double NNfunction_sb_uLuR::synapse0x3147810() {
   return (neuron0x3146130()*-1.23027);
}

double NNfunction_sb_uLuR::synapse0x3147b10() {
   return (neuron0x3146470()*-0.0191676);
}

double NNfunction_sb_uLuR::synapse0x3147b50() {
   return (neuron0x31467b0()*-0.0117403);
}

double NNfunction_sb_uLuR::synapse0x3147e50() {
   return (neuron0x3146d10()*-0.0352104);
}

double NNfunction_sb_uLuR::synapse0x3147e90() {
   return (neuron0x3146f30()*-0.0524878);
}

double NNfunction_sb_uLuR::synapse0x3148190() {
   return (neuron0x3147270()*0.0152255);
}

double NNfunction_sb_uLuR::synapse0x31481d0() {
   return (neuron0x31475b0()*0.0101446);
}

double NNfunction_sb_uLuR::synapse0x3145cd0() {
   return (neuron0x31478f0()*-0.0232238);
}

double NNfunction_sb_uLuR::synapse0x3145d10() {
   return (neuron0x3147c30()*0.00560984);
}

double NNfunction_sb_uLuR::synapse0x3153fb0() {
   return (neuron0x3147f70()*-0.023403);
}

double NNfunction_sb_uLuR::synapse0x3154330() {
   return (neuron0x31433b0()*-0.00410289);
}

double NNfunction_sb_uLuR::synapse0x3154370() {
   return (neuron0x31436f0()*-0.0340595);
}

double NNfunction_sb_uLuR::synapse0x31543b0() {
   return (neuron0x3143a30()*-0.000917456);
}

double NNfunction_sb_uLuR::synapse0x31543f0() {
   return (neuron0x3143d70()*0.175139);
}

double NNfunction_sb_uLuR::synapse0x3154430() {
   return (neuron0x31440b0()*0.0129521);
}

double NNfunction_sb_uLuR::synapse0x3154470() {
   return (neuron0x31443f0()*0.0331036);
}

double NNfunction_sb_uLuR::synapse0x31544b0() {
   return (neuron0x3144730()*0.00561594);
}

double NNfunction_sb_uLuR::synapse0x31544f0() {
   return (neuron0x3144a70()*0.00380328);
}

double NNfunction_sb_uLuR::synapse0x3154530() {
   return (neuron0x3144db0()*0.0211745);
}

double NNfunction_sb_uLuR::synapse0x3154570() {
   return (neuron0x31450f0()*-0.0348089);
}

double NNfunction_sb_uLuR::synapse0x31545b0() {
   return (neuron0x3145430()*-0.0216259);
}

double NNfunction_sb_uLuR::synapse0x31545f0() {
   return (neuron0x3145770()*-0.359628);
}

double NNfunction_sb_uLuR::synapse0x3154630() {
   return (neuron0x3145ab0()*0.00771428);
}

double NNfunction_sb_uLuR::synapse0x3154670() {
   return (neuron0x3145df0()*-0.00692549);
}

double NNfunction_sb_uLuR::synapse0x31546b0() {
   return (neuron0x3146130()*-0.700268);
}

double NNfunction_sb_uLuR::synapse0x31546f0() {
   return (neuron0x3146470()*-0.0112974);
}

double NNfunction_sb_uLuR::synapse0x3154180() {
   return (neuron0x31467b0()*-0.00848915);
}

double NNfunction_sb_uLuR::synapse0x31541c0() {
   return (neuron0x3146d10()*-0.0171475);
}

double NNfunction_sb_uLuR::synapse0x3154840() {
   return (neuron0x3146f30()*-0.00674579);
}

double NNfunction_sb_uLuR::synapse0x3154880() {
   return (neuron0x3147270()*0.00558609);
}

double NNfunction_sb_uLuR::synapse0x31548c0() {
   return (neuron0x31475b0()*0.0041757);
}

double NNfunction_sb_uLuR::synapse0x3154900() {
   return (neuron0x31478f0()*-0.00802049);
}

double NNfunction_sb_uLuR::synapse0x3154940() {
   return (neuron0x3147c30()*0.0027462);
}

double NNfunction_sb_uLuR::synapse0x3154980() {
   return (neuron0x3147f70()*0.00996809);
}

double NNfunction_sb_uLuR::synapse0x3154d00() {
   return (neuron0x31433b0()*0.0610363);
}

double NNfunction_sb_uLuR::synapse0x3154d40() {
   return (neuron0x31436f0()*0.0123193);
}

double NNfunction_sb_uLuR::synapse0x3154d80() {
   return (neuron0x3143a30()*-0.226022);
}

double NNfunction_sb_uLuR::synapse0x3154dc0() {
   return (neuron0x3143d70()*-0.476046);
}

double NNfunction_sb_uLuR::synapse0x3154e00() {
   return (neuron0x31440b0()*-0.138236);
}

double NNfunction_sb_uLuR::synapse0x3154e40() {
   return (neuron0x31443f0()*0.422131);
}

double NNfunction_sb_uLuR::synapse0x3154e80() {
   return (neuron0x3144730()*0.73356);
}

double NNfunction_sb_uLuR::synapse0x3154ec0() {
   return (neuron0x3144a70()*-0.117318);
}

double NNfunction_sb_uLuR::synapse0x3154f00() {
   return (neuron0x3144db0()*0.115299);
}

double NNfunction_sb_uLuR::synapse0x3154f40() {
   return (neuron0x31450f0()*-0.353526);
}

double NNfunction_sb_uLuR::synapse0x3154f80() {
   return (neuron0x3145430()*0.726439);
}

double NNfunction_sb_uLuR::synapse0x3154fc0() {
   return (neuron0x3145770()*-0.410432);
}

double NNfunction_sb_uLuR::synapse0x3155000() {
   return (neuron0x3145ab0()*0.203934);
}

double NNfunction_sb_uLuR::synapse0x3155040() {
   return (neuron0x3145df0()*0.481682);
}

double NNfunction_sb_uLuR::synapse0x3155080() {
   return (neuron0x3146130()*-0.0822204);
}

double NNfunction_sb_uLuR::synapse0x31550c0() {
   return (neuron0x3146470()*0.0563967);
}

double NNfunction_sb_uLuR::synapse0x3154b50() {
   return (neuron0x31467b0()*-0.485956);
}

double NNfunction_sb_uLuR::synapse0x3154b90() {
   return (neuron0x3146d10()*-0.897111);
}

double NNfunction_sb_uLuR::synapse0x3155210() {
   return (neuron0x3146f30()*-0.0268686);
}

double NNfunction_sb_uLuR::synapse0x3155250() {
   return (neuron0x3147270()*0.017815);
}

double NNfunction_sb_uLuR::synapse0x3155290() {
   return (neuron0x31475b0()*-0.258226);
}

double NNfunction_sb_uLuR::synapse0x31552d0() {
   return (neuron0x31478f0()*0.192524);
}

double NNfunction_sb_uLuR::synapse0x3155310() {
   return (neuron0x3147c30()*-0.367359);
}

double NNfunction_sb_uLuR::synapse0x3155350() {
   return (neuron0x3147f70()*-0.0923806);
}

double NNfunction_sb_uLuR::synapse0x31556d0() {
   return (neuron0x31433b0()*-0.0429751);
}

double NNfunction_sb_uLuR::synapse0x3155710() {
   return (neuron0x31436f0()*-0.0267676);
}

double NNfunction_sb_uLuR::synapse0x3155750() {
   return (neuron0x3143a30()*-0.0084181);
}

double NNfunction_sb_uLuR::synapse0x3155790() {
   return (neuron0x3143d70()*0.133206);
}

double NNfunction_sb_uLuR::synapse0x31557d0() {
   return (neuron0x31440b0()*-0.0225622);
}

double NNfunction_sb_uLuR::synapse0x3155810() {
   return (neuron0x31443f0()*-0.0259339);
}

double NNfunction_sb_uLuR::synapse0x3155850() {
   return (neuron0x3144730()*0.00577676);
}

double NNfunction_sb_uLuR::synapse0x3155890() {
   return (neuron0x3144a70()*0.0189415);
}

double NNfunction_sb_uLuR::synapse0x31558d0() {
   return (neuron0x3144db0()*0.0154249);
}

double NNfunction_sb_uLuR::synapse0x3155910() {
   return (neuron0x31450f0()*0.0132683);
}

double NNfunction_sb_uLuR::synapse0x3155950() {
   return (neuron0x3145430()*0.0260101);
}

double NNfunction_sb_uLuR::synapse0x3155990() {
   return (neuron0x3145770()*0.12428);
}

double NNfunction_sb_uLuR::synapse0x31559d0() {
   return (neuron0x3145ab0()*0.544175);
}

double NNfunction_sb_uLuR::synapse0x3155a10() {
   return (neuron0x3145df0()*-0.0781957);
}

double NNfunction_sb_uLuR::synapse0x3155a50() {
   return (neuron0x3146130()*-0.0432291);
}

double NNfunction_sb_uLuR::synapse0x3155a90() {
   return (neuron0x3146470()*0.221117);
}

double NNfunction_sb_uLuR::synapse0x3155520() {
   return (neuron0x31467b0()*-0.0418721);
}

double NNfunction_sb_uLuR::synapse0x3155560() {
   return (neuron0x3146d10()*0.273713);
}

double NNfunction_sb_uLuR::synapse0x3155be0() {
   return (neuron0x3146f30()*0.308455);
}

double NNfunction_sb_uLuR::synapse0x3155c20() {
   return (neuron0x3147270()*-0.00461447);
}

double NNfunction_sb_uLuR::synapse0x3155c60() {
   return (neuron0x31475b0()*-0.00409997);
}

double NNfunction_sb_uLuR::synapse0x3155ca0() {
   return (neuron0x31478f0()*0.0220716);
}

double NNfunction_sb_uLuR::synapse0x3155ce0() {
   return (neuron0x3147c30()*0.00116682);
}

double NNfunction_sb_uLuR::synapse0x3155d20() {
   return (neuron0x3147f70()*0.00139206);
}

double NNfunction_sb_uLuR::synapse0x31560a0() {
   return (neuron0x31433b0()*-0.0852398);
}

double NNfunction_sb_uLuR::synapse0x31560e0() {
   return (neuron0x31436f0()*-0.0513775);
}

double NNfunction_sb_uLuR::synapse0x3156120() {
   return (neuron0x3143a30()*0.119572);
}

double NNfunction_sb_uLuR::synapse0x3156160() {
   return (neuron0x3143d70()*0.225385);
}

double NNfunction_sb_uLuR::synapse0x31561a0() {
   return (neuron0x31440b0()*-0.121647);
}

double NNfunction_sb_uLuR::synapse0x31561e0() {
   return (neuron0x31443f0()*0.111099);
}

double NNfunction_sb_uLuR::synapse0x3156220() {
   return (neuron0x3144730()*0.108436);
}

double NNfunction_sb_uLuR::synapse0x3156260() {
   return (neuron0x3144a70()*0.265704);
}

double NNfunction_sb_uLuR::synapse0x31562a0() {
   return (neuron0x3144db0()*0.104468);
}

double NNfunction_sb_uLuR::synapse0x31562e0() {
   return (neuron0x31450f0()*0.646279);
}

double NNfunction_sb_uLuR::synapse0x3156320() {
   return (neuron0x3145430()*0.0189217);
}

double NNfunction_sb_uLuR::synapse0x3156360() {
   return (neuron0x3145770()*0.850916);
}

double NNfunction_sb_uLuR::synapse0x31563a0() {
   return (neuron0x3145ab0()*0.493063);
}

double NNfunction_sb_uLuR::synapse0x31563e0() {
   return (neuron0x3145df0()*0.354009);
}

double NNfunction_sb_uLuR::synapse0x3156420() {
   return (neuron0x3146130()*-0.111748);
}

double NNfunction_sb_uLuR::synapse0x3156460() {
   return (neuron0x3146470()*0.0105171);
}

double NNfunction_sb_uLuR::synapse0x3155ef0() {
   return (neuron0x31467b0()*-0.418486);
}

double NNfunction_sb_uLuR::synapse0x3155f30() {
   return (neuron0x3146d10()*0.6623);
}

double NNfunction_sb_uLuR::synapse0x31565b0() {
   return (neuron0x3146f30()*0.167419);
}

double NNfunction_sb_uLuR::synapse0x31565f0() {
   return (neuron0x3147270()*0.0791323);
}

double NNfunction_sb_uLuR::synapse0x3156630() {
   return (neuron0x31475b0()*-0.366478);
}

double NNfunction_sb_uLuR::synapse0x3156670() {
   return (neuron0x31478f0()*-0.0789044);
}

double NNfunction_sb_uLuR::synapse0x31566b0() {
   return (neuron0x3147c30()*0.045367);
}

double NNfunction_sb_uLuR::synapse0x31566f0() {
   return (neuron0x3147f70()*0.133041);
}

double NNfunction_sb_uLuR::synapse0x3156a70() {
   return (neuron0x31433b0()*0.0252848);
}

double NNfunction_sb_uLuR::synapse0x3156ab0() {
   return (neuron0x31436f0()*-0.208256);
}

double NNfunction_sb_uLuR::synapse0x3156af0() {
   return (neuron0x3143a30()*-0.047125);
}

double NNfunction_sb_uLuR::synapse0x3156b30() {
   return (neuron0x3143d70()*0.70528);
}

double NNfunction_sb_uLuR::synapse0x3156b70() {
   return (neuron0x31440b0()*0.391981);
}

double NNfunction_sb_uLuR::synapse0x3156bb0() {
   return (neuron0x31443f0()*-0.130394);
}

double NNfunction_sb_uLuR::synapse0x3156bf0() {
   return (neuron0x3144730()*0.158166);
}

double NNfunction_sb_uLuR::synapse0x3156c30() {
   return (neuron0x3144a70()*0.164771);
}

double NNfunction_sb_uLuR::synapse0x3156c70() {
   return (neuron0x3144db0()*-0.0558025);
}

double NNfunction_sb_uLuR::synapse0x314ee30() {
   return (neuron0x31450f0()*-0.130908);
}

double NNfunction_sb_uLuR::synapse0x314ee70() {
   return (neuron0x3145430()*0.29551);
}

double NNfunction_sb_uLuR::synapse0x314eeb0() {
   return (neuron0x3145770()*0.152333);
}

double NNfunction_sb_uLuR::synapse0x314eef0() {
   return (neuron0x3145ab0()*-0.194517);
}

double NNfunction_sb_uLuR::synapse0x314ef30() {
   return (neuron0x3145df0()*0.0850564);
}

double NNfunction_sb_uLuR::synapse0x314ef70() {
   return (neuron0x3146130()*0.30153);
}

double NNfunction_sb_uLuR::synapse0x314efb0() {
   return (neuron0x3146470()*0.320013);
}

double NNfunction_sb_uLuR::synapse0x31568c0() {
   return (neuron0x31467b0()*-0.155929);
}

double NNfunction_sb_uLuR::synapse0x3156900() {
   return (neuron0x3146d10()*-0.612104);
}

double NNfunction_sb_uLuR::synapse0x314f100() {
   return (neuron0x3146f30()*-0.213054);
}

double NNfunction_sb_uLuR::synapse0x314f140() {
   return (neuron0x3147270()*0.734722);
}

double NNfunction_sb_uLuR::synapse0x314f180() {
   return (neuron0x31475b0()*0.494186);
}

double NNfunction_sb_uLuR::synapse0x314f1c0() {
   return (neuron0x31478f0()*0.248085);
}

double NNfunction_sb_uLuR::synapse0x314f200() {
   return (neuron0x3147c30()*-0.40248);
}

double NNfunction_sb_uLuR::synapse0x314f240() {
   return (neuron0x3147f70()*0.161114);
}

double NNfunction_sb_uLuR::synapse0x314f5c0() {
   return (neuron0x31433b0()*-0.218779);
}

double NNfunction_sb_uLuR::synapse0x314f600() {
   return (neuron0x31436f0()*-0.0284853);
}

double NNfunction_sb_uLuR::synapse0x314f640() {
   return (neuron0x3143a30()*-0.205604);
}

double NNfunction_sb_uLuR::synapse0x314f680() {
   return (neuron0x3143d70()*0.169894);
}

double NNfunction_sb_uLuR::synapse0x314f6c0() {
   return (neuron0x31440b0()*-0.122616);
}

double NNfunction_sb_uLuR::synapse0x314f700() {
   return (neuron0x31443f0()*0.647343);
}

double NNfunction_sb_uLuR::synapse0x314f740() {
   return (neuron0x3144730()*-0.252949);
}

double NNfunction_sb_uLuR::synapse0x314f780() {
   return (neuron0x3144a70()*0.094296);
}

double NNfunction_sb_uLuR::synapse0x314f7c0() {
   return (neuron0x3144db0()*-0.220188);
}

double NNfunction_sb_uLuR::synapse0x314f800() {
   return (neuron0x31450f0()*-0.203948);
}

double NNfunction_sb_uLuR::synapse0x314f840() {
   return (neuron0x3145430()*-0.3655);
}

double NNfunction_sb_uLuR::synapse0x314f880() {
   return (neuron0x3145770()*-0.223506);
}

double NNfunction_sb_uLuR::synapse0x314f8c0() {
   return (neuron0x3145ab0()*-0.01748);
}

double NNfunction_sb_uLuR::synapse0x314f900() {
   return (neuron0x3145df0()*-0.151433);
}

double NNfunction_sb_uLuR::synapse0x314f940() {
   return (neuron0x3146130()*-0.0935352);
}

double NNfunction_sb_uLuR::synapse0x314f980() {
   return (neuron0x3146470()*-0.0163312);
}

double NNfunction_sb_uLuR::synapse0x314f410() {
   return (neuron0x31467b0()*0.202557);
}

double NNfunction_sb_uLuR::synapse0x314f450() {
   return (neuron0x3146d10()*0.423763);
}

double NNfunction_sb_uLuR::synapse0x314fad0() {
   return (neuron0x3146f30()*-0.235622);
}

double NNfunction_sb_uLuR::synapse0x314fb10() {
   return (neuron0x3147270()*0.139837);
}

double NNfunction_sb_uLuR::synapse0x314fb50() {
   return (neuron0x31475b0()*0.0510131);
}

double NNfunction_sb_uLuR::synapse0x314fb90() {
   return (neuron0x31478f0()*-0.317569);
}

double NNfunction_sb_uLuR::synapse0x314fbd0() {
   return (neuron0x3147c30()*0.134727);
}

double NNfunction_sb_uLuR::synapse0x314fc10() {
   return (neuron0x3147f70()*0.191516);
}

double NNfunction_sb_uLuR::synapse0x314fde0() {
   return (neuron0x31433b0()*-0.0205418);
}

double NNfunction_sb_uLuR::synapse0x3158e70() {
   return (neuron0x31436f0()*0.0132132);
}

double NNfunction_sb_uLuR::synapse0x3158eb0() {
   return (neuron0x3143a30()*0.00233855);
}

double NNfunction_sb_uLuR::synapse0x3158ef0() {
   return (neuron0x3143d70()*0.432368);
}

double NNfunction_sb_uLuR::synapse0x3158f30() {
   return (neuron0x31440b0()*0.00737669);
}

double NNfunction_sb_uLuR::synapse0x3158f70() {
   return (neuron0x31443f0()*0.0119242);
}

double NNfunction_sb_uLuR::synapse0x3158fb0() {
   return (neuron0x3144730()*0.000691894);
}

double NNfunction_sb_uLuR::synapse0x3158ff0() {
   return (neuron0x3144a70()*-0.0038398);
}

double NNfunction_sb_uLuR::synapse0x3159030() {
   return (neuron0x3144db0()*-0.00898127);
}

double NNfunction_sb_uLuR::synapse0x3159070() {
   return (neuron0x31450f0()*0.0123546);
}

double NNfunction_sb_uLuR::synapse0x31590b0() {
   return (neuron0x3145430()*0.0152081);
}

double NNfunction_sb_uLuR::synapse0x31590f0() {
   return (neuron0x3145770()*-0.90942);
}

double NNfunction_sb_uLuR::synapse0x3159130() {
   return (neuron0x3145ab0()*0.0230878);
}

double NNfunction_sb_uLuR::synapse0x3159170() {
   return (neuron0x3145df0()*0.00628116);
}

double NNfunction_sb_uLuR::synapse0x31591b0() {
   return (neuron0x3146130()*-0.683747);
}

double NNfunction_sb_uLuR::synapse0x31591f0() {
   return (neuron0x3146470()*0.015164);
}

double NNfunction_sb_uLuR::synapse0x3158cc0() {
   return (neuron0x31467b0()*-0.0179959);
}

double NNfunction_sb_uLuR::synapse0x3158d00() {
   return (neuron0x3146d10()*0.00399579);
}

double NNfunction_sb_uLuR::synapse0x3159340() {
   return (neuron0x3146f30()*-0.0129404);
}

double NNfunction_sb_uLuR::synapse0x3159380() {
   return (neuron0x3147270()*-0.00238386);
}

double NNfunction_sb_uLuR::synapse0x31593c0() {
   return (neuron0x31475b0()*0.000208857);
}

double NNfunction_sb_uLuR::synapse0x3159400() {
   return (neuron0x31478f0()*-0.00521533);
}

double NNfunction_sb_uLuR::synapse0x3159440() {
   return (neuron0x3147c30()*-0.0250744);
}

double NNfunction_sb_uLuR::synapse0x3159480() {
   return (neuron0x3147f70()*-0.0227307);
}

double NNfunction_sb_uLuR::synapse0x3159800() {
   return (neuron0x31433b0()*-0.182656);
}

double NNfunction_sb_uLuR::synapse0x3159840() {
   return (neuron0x31436f0()*0.169707);
}

double NNfunction_sb_uLuR::synapse0x3159880() {
   return (neuron0x3143a30()*-0.22894);
}

double NNfunction_sb_uLuR::synapse0x31598c0() {
   return (neuron0x3143d70()*0.783989);
}

double NNfunction_sb_uLuR::synapse0x3159900() {
   return (neuron0x31440b0()*0.0685732);
}

double NNfunction_sb_uLuR::synapse0x3159940() {
   return (neuron0x31443f0()*-0.0912157);
}

double NNfunction_sb_uLuR::synapse0x3159980() {
   return (neuron0x3144730()*-0.108513);
}

double NNfunction_sb_uLuR::synapse0x31599c0() {
   return (neuron0x3144a70()*0.30931);
}

double NNfunction_sb_uLuR::synapse0x3159a00() {
   return (neuron0x3144db0()*-0.0754318);
}

double NNfunction_sb_uLuR::synapse0x3159a40() {
   return (neuron0x31450f0()*0.223524);
}

double NNfunction_sb_uLuR::synapse0x3159a80() {
   return (neuron0x3145430()*-0.0477528);
}

double NNfunction_sb_uLuR::synapse0x3159ac0() {
   return (neuron0x3145770()*0.552945);
}

double NNfunction_sb_uLuR::synapse0x3159b00() {
   return (neuron0x3145ab0()*-0.14411);
}

double NNfunction_sb_uLuR::synapse0x3159b40() {
   return (neuron0x3145df0()*0.0150236);
}

double NNfunction_sb_uLuR::synapse0x3159b80() {
   return (neuron0x3146130()*-1.10757);
}

double NNfunction_sb_uLuR::synapse0x3159bc0() {
   return (neuron0x3146470()*0.0031338);
}

double NNfunction_sb_uLuR::synapse0x3159650() {
   return (neuron0x31467b0()*0.126102);
}

double NNfunction_sb_uLuR::synapse0x3159690() {
   return (neuron0x3146d10()*-0.0584077);
}

double NNfunction_sb_uLuR::synapse0x3159d10() {
   return (neuron0x3146f30()*-0.17339);
}

double NNfunction_sb_uLuR::synapse0x3159d50() {
   return (neuron0x3147270()*-0.231874);
}

double NNfunction_sb_uLuR::synapse0x3159d90() {
   return (neuron0x31475b0()*-0.109474);
}

double NNfunction_sb_uLuR::synapse0x3159dd0() {
   return (neuron0x31478f0()*0.140744);
}

double NNfunction_sb_uLuR::synapse0x3159e10() {
   return (neuron0x3147c30()*-0.0813769);
}

double NNfunction_sb_uLuR::synapse0x3159e50() {
   return (neuron0x3147f70()*-0.0223626);
}

double NNfunction_sb_uLuR::synapse0x315a1d0() {
   return (neuron0x31433b0()*0.173448);
}

double NNfunction_sb_uLuR::synapse0x315a210() {
   return (neuron0x31436f0()*0.293977);
}

double NNfunction_sb_uLuR::synapse0x315a250() {
   return (neuron0x3143a30()*-0.134922);
}

double NNfunction_sb_uLuR::synapse0x315a290() {
   return (neuron0x3143d70()*-0.599504);
}

double NNfunction_sb_uLuR::synapse0x315a2d0() {
   return (neuron0x31440b0()*-0.0298324);
}

double NNfunction_sb_uLuR::synapse0x315a310() {
   return (neuron0x31443f0()*-0.263174);
}

double NNfunction_sb_uLuR::synapse0x315a350() {
   return (neuron0x3144730()*0.0268197);
}

double NNfunction_sb_uLuR::synapse0x315a390() {
   return (neuron0x3144a70()*-0.0151354);
}

double NNfunction_sb_uLuR::synapse0x315a3d0() {
   return (neuron0x3144db0()*0.0550157);
}

double NNfunction_sb_uLuR::synapse0x315a410() {
   return (neuron0x31450f0()*-0.197207);
}

double NNfunction_sb_uLuR::synapse0x315a450() {
   return (neuron0x3145430()*-0.163413);
}

double NNfunction_sb_uLuR::synapse0x315a490() {
   return (neuron0x3145770()*-0.0114596);
}

double NNfunction_sb_uLuR::synapse0x315a4d0() {
   return (neuron0x3145ab0()*-0.084923);
}

double NNfunction_sb_uLuR::synapse0x315a510() {
   return (neuron0x3145df0()*0.291693);
}

double NNfunction_sb_uLuR::synapse0x315a550() {
   return (neuron0x3146130()*0.114505);
}

double NNfunction_sb_uLuR::synapse0x315a590() {
   return (neuron0x3146470()*-0.066328);
}

double NNfunction_sb_uLuR::synapse0x315a020() {
   return (neuron0x31467b0()*0.209024);
}

double NNfunction_sb_uLuR::synapse0x315a060() {
   return (neuron0x3146d10()*0.0741378);
}

double NNfunction_sb_uLuR::synapse0x315a6e0() {
   return (neuron0x3146f30()*0.00754158);
}

double NNfunction_sb_uLuR::synapse0x315a720() {
   return (neuron0x3147270()*-0.0202707);
}

double NNfunction_sb_uLuR::synapse0x315a760() {
   return (neuron0x31475b0()*-0.0297002);
}

double NNfunction_sb_uLuR::synapse0x315a7a0() {
   return (neuron0x31478f0()*-0.0430687);
}

double NNfunction_sb_uLuR::synapse0x315a7e0() {
   return (neuron0x3147c30()*-0.00466342);
}

double NNfunction_sb_uLuR::synapse0x315a820() {
   return (neuron0x3147f70()*0.289599);
}

double NNfunction_sb_uLuR::synapse0x315aba0() {
   return (neuron0x31433b0()*0.00568554);
}

double NNfunction_sb_uLuR::synapse0x315abe0() {
   return (neuron0x31436f0()*0.064186);
}

double NNfunction_sb_uLuR::synapse0x315ac20() {
   return (neuron0x3143a30()*0.0259743);
}

double NNfunction_sb_uLuR::synapse0x315ac60() {
   return (neuron0x3143d70()*-2.50319);
}

double NNfunction_sb_uLuR::synapse0x315aca0() {
   return (neuron0x31440b0()*0.0464863);
}

double NNfunction_sb_uLuR::synapse0x315ace0() {
   return (neuron0x31443f0()*0.0214049);
}

double NNfunction_sb_uLuR::synapse0x315ad20() {
   return (neuron0x3144730()*0.00860121);
}

double NNfunction_sb_uLuR::synapse0x315ad60() {
   return (neuron0x3144a70()*-1.84171e-06);
}

double NNfunction_sb_uLuR::synapse0x315ada0() {
   return (neuron0x3144db0()*-0.0774761);
}

double NNfunction_sb_uLuR::synapse0x315ade0() {
   return (neuron0x31450f0()*0.0135069);
}

double NNfunction_sb_uLuR::synapse0x315ae20() {
   return (neuron0x3145430()*0.0105377);
}

double NNfunction_sb_uLuR::synapse0x315ae60() {
   return (neuron0x3145770()*-0.378383);
}

double NNfunction_sb_uLuR::synapse0x315aea0() {
   return (neuron0x3145ab0()*0.00303728);
}

double NNfunction_sb_uLuR::synapse0x315aee0() {
   return (neuron0x3145df0()*0.0252999);
}

double NNfunction_sb_uLuR::synapse0x315af20() {
   return (neuron0x3146130()*-0.31399);
}

double NNfunction_sb_uLuR::synapse0x315af60() {
   return (neuron0x3146470()*0.0213416);
}

double NNfunction_sb_uLuR::synapse0x315a9f0() {
   return (neuron0x31467b0()*0.0115603);
}

double NNfunction_sb_uLuR::synapse0x315aa30() {
   return (neuron0x3146d10()*-0.0019529);
}

double NNfunction_sb_uLuR::synapse0x315b0b0() {
   return (neuron0x3146f30()*-0.0132549);
}

double NNfunction_sb_uLuR::synapse0x315b0f0() {
   return (neuron0x3147270()*-0.0078352);
}

double NNfunction_sb_uLuR::synapse0x315b130() {
   return (neuron0x31475b0()*0.00295838);
}

double NNfunction_sb_uLuR::synapse0x315b170() {
   return (neuron0x31478f0()*0.0109369);
}

double NNfunction_sb_uLuR::synapse0x315b1b0() {
   return (neuron0x3147c30()*0.0218854);
}

double NNfunction_sb_uLuR::synapse0x315b1f0() {
   return (neuron0x3147f70()*0.027361);
}

double NNfunction_sb_uLuR::synapse0x315b570() {
   return (neuron0x31433b0()*0.0214789);
}

double NNfunction_sb_uLuR::synapse0x315b5b0() {
   return (neuron0x31436f0()*-0.0260057);
}

double NNfunction_sb_uLuR::synapse0x315b5f0() {
   return (neuron0x3143a30()*-0.0512334);
}

double NNfunction_sb_uLuR::synapse0x315b630() {
   return (neuron0x3143d70()*0.1102);
}

double NNfunction_sb_uLuR::synapse0x315b670() {
   return (neuron0x31440b0()*-0.0189953);
}

double NNfunction_sb_uLuR::synapse0x315b6b0() {
   return (neuron0x31443f0()*0.0215741);
}

double NNfunction_sb_uLuR::synapse0x315b6f0() {
   return (neuron0x3144730()*-0.0220342);
}

double NNfunction_sb_uLuR::synapse0x315b730() {
   return (neuron0x3144a70()*0.0203668);
}

double NNfunction_sb_uLuR::synapse0x315b770() {
   return (neuron0x3144db0()*-0.0179073);
}

double NNfunction_sb_uLuR::synapse0x315b7b0() {
   return (neuron0x31450f0()*0.013742);
}

double NNfunction_sb_uLuR::synapse0x315b7f0() {
   return (neuron0x3145430()*0.0200963);
}

double NNfunction_sb_uLuR::synapse0x315b830() {
   return (neuron0x3145770()*1.88523);
}

double NNfunction_sb_uLuR::synapse0x315b870() {
   return (neuron0x3145ab0()*0.0192433);
}

double NNfunction_sb_uLuR::synapse0x315b8b0() {
   return (neuron0x3145df0()*0.0330764);
}

double NNfunction_sb_uLuR::synapse0x315b8f0() {
   return (neuron0x3146130()*-0.379328);
}

double NNfunction_sb_uLuR::synapse0x315b930() {
   return (neuron0x3146470()*0.0122336);
}

double NNfunction_sb_uLuR::synapse0x315b3c0() {
   return (neuron0x31467b0()*-0.00967258);
}

double NNfunction_sb_uLuR::synapse0x315b400() {
   return (neuron0x3146d10()*-0.0137468);
}

double NNfunction_sb_uLuR::synapse0x315ba80() {
   return (neuron0x3146f30()*-0.00399956);
}

double NNfunction_sb_uLuR::synapse0x315bac0() {
   return (neuron0x3147270()*0.0140752);
}

double NNfunction_sb_uLuR::synapse0x315bb00() {
   return (neuron0x31475b0()*2.088e-05);
}

double NNfunction_sb_uLuR::synapse0x315bb40() {
   return (neuron0x31478f0()*0.0687667);
}

double NNfunction_sb_uLuR::synapse0x315bb80() {
   return (neuron0x3147c30()*0.00295151);
}

double NNfunction_sb_uLuR::synapse0x315bbc0() {
   return (neuron0x3147f70()*0.0421983);
}

double NNfunction_sb_uLuR::synapse0x315bf40() {
   return (neuron0x31433b0()*-0.0204905);
}

double NNfunction_sb_uLuR::synapse0x315bf80() {
   return (neuron0x31436f0()*0.00199737);
}

double NNfunction_sb_uLuR::synapse0x315bfc0() {
   return (neuron0x3143a30()*-0.011448);
}

double NNfunction_sb_uLuR::synapse0x315c000() {
   return (neuron0x3143d70()*-2.0132);
}

double NNfunction_sb_uLuR::synapse0x315c040() {
   return (neuron0x31440b0()*0.011569);
}

double NNfunction_sb_uLuR::synapse0x315c080() {
   return (neuron0x31443f0()*-0.000898114);
}

double NNfunction_sb_uLuR::synapse0x315c0c0() {
   return (neuron0x3144730()*0.00632466);
}

double NNfunction_sb_uLuR::synapse0x315c100() {
   return (neuron0x3144a70()*0.0341157);
}

double NNfunction_sb_uLuR::synapse0x315c140() {
   return (neuron0x3144db0()*-0.0181142);
}

double NNfunction_sb_uLuR::synapse0x315c180() {
   return (neuron0x31450f0()*-0.00210658);
}

double NNfunction_sb_uLuR::synapse0x315c1c0() {
   return (neuron0x3145430()*-0.00271971);
}

double NNfunction_sb_uLuR::synapse0x315c200() {
   return (neuron0x3145770()*0.0697312);
}

double NNfunction_sb_uLuR::synapse0x315c240() {
   return (neuron0x3145ab0()*-0.028565);
}

double NNfunction_sb_uLuR::synapse0x315c280() {
   return (neuron0x3145df0()*-0.00356017);
}

double NNfunction_sb_uLuR::synapse0x315c2c0() {
   return (neuron0x3146130()*0.0608162);
}

double NNfunction_sb_uLuR::synapse0x315c300() {
   return (neuron0x3146470()*0.0104693);
}

double NNfunction_sb_uLuR::synapse0x315bd90() {
   return (neuron0x31467b0()*-0.000114386);
}

double NNfunction_sb_uLuR::synapse0x315bdd0() {
   return (neuron0x3146d10()*-0.00558387);
}

double NNfunction_sb_uLuR::synapse0x315c450() {
   return (neuron0x3146f30()*-0.035484);
}

double NNfunction_sb_uLuR::synapse0x315c490() {
   return (neuron0x3147270()*0.0148353);
}

double NNfunction_sb_uLuR::synapse0x315c4d0() {
   return (neuron0x31475b0()*0.00931647);
}

double NNfunction_sb_uLuR::synapse0x315c510() {
   return (neuron0x31478f0()*0.00432075);
}

double NNfunction_sb_uLuR::synapse0x315c550() {
   return (neuron0x3147c30()*0.0124553);
}

double NNfunction_sb_uLuR::synapse0x315c590() {
   return (neuron0x3147f70()*0.00472292);
}

double NNfunction_sb_uLuR::synapse0x315c910() {
   return (neuron0x31433b0()*0.398045);
}

double NNfunction_sb_uLuR::synapse0x315c950() {
   return (neuron0x31436f0()*0.145142);
}

double NNfunction_sb_uLuR::synapse0x315c990() {
   return (neuron0x3143a30()*0.0600903);
}

double NNfunction_sb_uLuR::synapse0x315c9d0() {
   return (neuron0x3143d70()*0.447664);
}

double NNfunction_sb_uLuR::synapse0x315ca10() {
   return (neuron0x31440b0()*-0.0850453);
}

double NNfunction_sb_uLuR::synapse0x315ca50() {
   return (neuron0x31443f0()*0.0421676);
}

double NNfunction_sb_uLuR::synapse0x315ca90() {
   return (neuron0x3144730()*0.357617);
}

double NNfunction_sb_uLuR::synapse0x315cad0() {
   return (neuron0x3144a70()*0.111487);
}

double NNfunction_sb_uLuR::synapse0x315cb10() {
   return (neuron0x3144db0()*-0.627221);
}

double NNfunction_sb_uLuR::synapse0x315cb50() {
   return (neuron0x31450f0()*-0.0250288);
}

double NNfunction_sb_uLuR::synapse0x315cb90() {
   return (neuron0x3145430()*0.853884);
}

double NNfunction_sb_uLuR::synapse0x315cbd0() {
   return (neuron0x3145770()*0.617413);
}

double NNfunction_sb_uLuR::synapse0x315cc10() {
   return (neuron0x3145ab0()*0.0938225);
}

double NNfunction_sb_uLuR::synapse0x315cc50() {
   return (neuron0x3145df0()*-0.283212);
}

double NNfunction_sb_uLuR::synapse0x315cc90() {
   return (neuron0x3146130()*-0.19847);
}

double NNfunction_sb_uLuR::synapse0x315ccd0() {
   return (neuron0x3146470()*0.305348);
}

double NNfunction_sb_uLuR::synapse0x315c760() {
   return (neuron0x31467b0()*0.302082);
}

double NNfunction_sb_uLuR::synapse0x315c7a0() {
   return (neuron0x3146d10()*-0.310074);
}

double NNfunction_sb_uLuR::synapse0x315ce20() {
   return (neuron0x3146f30()*0.33013);
}

double NNfunction_sb_uLuR::synapse0x315ce60() {
   return (neuron0x3147270()*0.16193);
}

double NNfunction_sb_uLuR::synapse0x315cea0() {
   return (neuron0x31475b0()*-0.080887);
}

double NNfunction_sb_uLuR::synapse0x315cee0() {
   return (neuron0x31478f0()*0.43883);
}

double NNfunction_sb_uLuR::synapse0x315cf20() {
   return (neuron0x3147c30()*-0.277805);
}

double NNfunction_sb_uLuR::synapse0x315cf60() {
   return (neuron0x3147f70()*-0.0888939);
}

double NNfunction_sb_uLuR::synapse0x315d2e0() {
   return (neuron0x31433b0()*-0.126549);
}

double NNfunction_sb_uLuR::synapse0x315d320() {
   return (neuron0x31436f0()*0.299529);
}

double NNfunction_sb_uLuR::synapse0x315d360() {
   return (neuron0x3143a30()*0.304053);
}

double NNfunction_sb_uLuR::synapse0x315d3a0() {
   return (neuron0x3143d70()*-0.333321);
}

double NNfunction_sb_uLuR::synapse0x315d3e0() {
   return (neuron0x31440b0()*-0.237731);
}

double NNfunction_sb_uLuR::synapse0x315d420() {
   return (neuron0x31443f0()*0.301075);
}

double NNfunction_sb_uLuR::synapse0x315d460() {
   return (neuron0x3144730()*0.301102);
}

double NNfunction_sb_uLuR::synapse0x315d4a0() {
   return (neuron0x3144a70()*-0.0372587);
}

double NNfunction_sb_uLuR::synapse0x315d4e0() {
   return (neuron0x3144db0()*0.0224562);
}

double NNfunction_sb_uLuR::synapse0x315d520() {
   return (neuron0x31450f0()*-0.29748);
}

double NNfunction_sb_uLuR::synapse0x315d560() {
   return (neuron0x3145430()*0.46795);
}

double NNfunction_sb_uLuR::synapse0x315d5a0() {
   return (neuron0x3145770()*0.377565);
}

double NNfunction_sb_uLuR::synapse0x315d5e0() {
   return (neuron0x3145ab0()*0.582513);
}

double NNfunction_sb_uLuR::synapse0x315d620() {
   return (neuron0x3145df0()*-0.233236);
}

double NNfunction_sb_uLuR::synapse0x315d660() {
   return (neuron0x3146130()*-0.525346);
}

double NNfunction_sb_uLuR::synapse0x315d6a0() {
   return (neuron0x3146470()*-0.0877288);
}

double NNfunction_sb_uLuR::synapse0x315d130() {
   return (neuron0x31467b0()*0.676597);
}

double NNfunction_sb_uLuR::synapse0x315d170() {
   return (neuron0x3146d10()*0.0325802);
}

double NNfunction_sb_uLuR::synapse0x315d7f0() {
   return (neuron0x3146f30()*0.384901);
}

double NNfunction_sb_uLuR::synapse0x315d830() {
   return (neuron0x3147270()*0.399244);
}

double NNfunction_sb_uLuR::synapse0x315d870() {
   return (neuron0x31475b0()*0.0952756);
}

double NNfunction_sb_uLuR::synapse0x315d8b0() {
   return (neuron0x31478f0()*-0.194915);
}

double NNfunction_sb_uLuR::synapse0x315d8f0() {
   return (neuron0x3147c30()*0.174444);
}

double NNfunction_sb_uLuR::synapse0x315d930() {
   return (neuron0x3147f70()*-0.399616);
}

double NNfunction_sb_uLuR::synapse0x315dcb0() {
   return (neuron0x31433b0()*-0.0686681);
}

double NNfunction_sb_uLuR::synapse0x3152280() {
   return (neuron0x31436f0()*-0.0111318);
}

double NNfunction_sb_uLuR::synapse0x31522c0() {
   return (neuron0x3143a30()*-0.215928);
}

double NNfunction_sb_uLuR::synapse0x3152300() {
   return (neuron0x3143d70()*0.0959066);
}

double NNfunction_sb_uLuR::synapse0x3152550() {
   return (neuron0x31440b0()*-0.033377);
}

double NNfunction_sb_uLuR::synapse0x3152590() {
   return (neuron0x31443f0()*0.0574953);
}

double NNfunction_sb_uLuR::synapse0x31525d0() {
   return (neuron0x3144730()*-0.107517);
}

double NNfunction_sb_uLuR::synapse0x3152820() {
   return (neuron0x3144a70()*-0.0662252);
}

double NNfunction_sb_uLuR::synapse0x3152860() {
   return (neuron0x3144db0()*-0.00803976);
}

double NNfunction_sb_uLuR::synapse0x3152ab0() {
   return (neuron0x31450f0()*-0.052261);
}

double NNfunction_sb_uLuR::synapse0x3152af0() {
   return (neuron0x3145430()*-0.0299539);
}

double NNfunction_sb_uLuR::synapse0x3152b30() {
   return (neuron0x3145770()*-0.0518299);
}

double NNfunction_sb_uLuR::synapse0x3152d80() {
   return (neuron0x3145ab0()*-0.0332859);
}

double NNfunction_sb_uLuR::synapse0x3152dc0() {
   return (neuron0x3145df0()*0.00129299);
}

double NNfunction_sb_uLuR::synapse0x3153010() {
   return (neuron0x3146130()*0.275679);
}

double NNfunction_sb_uLuR::synapse0x3153050() {
   return (neuron0x3146470()*-0.0290849);
}

double NNfunction_sb_uLuR::synapse0x315db00() {
   return (neuron0x31467b0()*-0.0602617);
}

double NNfunction_sb_uLuR::synapse0x315db40() {
   return (neuron0x3146d10()*-0.0406102);
}

double NNfunction_sb_uLuR::synapse0x31531a0() {
   return (neuron0x3146f30()*-0.0319015);
}

double NNfunction_sb_uLuR::synapse0x31536b0() {
   return (neuron0x3147270()*-0.0426702);
}

double NNfunction_sb_uLuR::synapse0x31536f0() {
   return (neuron0x31475b0()*-0.0419141);
}

double NNfunction_sb_uLuR::synapse0x3153730() {
   return (neuron0x31478f0()*-0.071111);
}

double NNfunction_sb_uLuR::synapse0x3153980() {
   return (neuron0x3147c30()*-0.0678524);
}

double NNfunction_sb_uLuR::synapse0x31539c0() {
   return (neuron0x3147f70()*0.00842642);
}

double NNfunction_sb_uLuR::synapse0x3153270() {
   return (neuron0x31433b0()*-0.000165883);
}

double NNfunction_sb_uLuR::synapse0x31532b0() {
   return (neuron0x31436f0()*0.00748546);
}

double NNfunction_sb_uLuR::synapse0x31532f0() {
   return (neuron0x3143a30()*-0.0347508);
}

double NNfunction_sb_uLuR::synapse0x3153330() {
   return (neuron0x3143d70()*-0.0215936);
}

double NNfunction_sb_uLuR::synapse0x3153cb0() {
   return (neuron0x31440b0()*-0.0239571);
}

double NNfunction_sb_uLuR::synapse0x3160000() {
   return (neuron0x31443f0()*-0.0370286);
}

double NNfunction_sb_uLuR::synapse0x3160040() {
   return (neuron0x3144730()*-0.0877672);
}

double NNfunction_sb_uLuR::synapse0x3160080() {
   return (neuron0x3144a70()*0.0170143);
}

double NNfunction_sb_uLuR::synapse0x31600c0() {
   return (neuron0x3144db0()*-0.0156384);
}

double NNfunction_sb_uLuR::synapse0x3160100() {
   return (neuron0x31450f0()*-0.0136737);
}

double NNfunction_sb_uLuR::synapse0x3160140() {
   return (neuron0x3145430()*0.0424329);
}

double NNfunction_sb_uLuR::synapse0x3160180() {
   return (neuron0x3145770()*-1.02671);
}

double NNfunction_sb_uLuR::synapse0x31601c0() {
   return (neuron0x3145ab0()*0.000777631);
}

double NNfunction_sb_uLuR::synapse0x3160200() {
   return (neuron0x3145df0()*-0.0430257);
}

double NNfunction_sb_uLuR::synapse0x3160240() {
   return (neuron0x3146130()*2.37934);
}

double NNfunction_sb_uLuR::synapse0x3160280() {
   return (neuron0x3146470()*0.00256645);
}

double NNfunction_sb_uLuR::synapse0x3153b90() {
   return (neuron0x31467b0()*0.0227012);
}

double NNfunction_sb_uLuR::synapse0x3153bd0() {
   return (neuron0x3146d10()*-0.0134084);
}

double NNfunction_sb_uLuR::synapse0x31603d0() {
   return (neuron0x3146f30()*0.0389768);
}

double NNfunction_sb_uLuR::synapse0x3160410() {
   return (neuron0x3147270()*0.0249552);
}

double NNfunction_sb_uLuR::synapse0x3160450() {
   return (neuron0x31475b0()*0.0607221);
}

double NNfunction_sb_uLuR::synapse0x3160490() {
   return (neuron0x31478f0()*0.0217186);
}

double NNfunction_sb_uLuR::synapse0x31604d0() {
   return (neuron0x3147c30()*0.0265618);
}

double NNfunction_sb_uLuR::synapse0x3160510() {
   return (neuron0x3147f70()*-0.0447224);
}

double NNfunction_sb_uLuR::synapse0x3160890() {
   return (neuron0x31433b0()*-0.224464);
}

double NNfunction_sb_uLuR::synapse0x31608d0() {
   return (neuron0x31436f0()*0.361261);
}

double NNfunction_sb_uLuR::synapse0x3160910() {
   return (neuron0x3143a30()*-0.714603);
}

double NNfunction_sb_uLuR::synapse0x3160950() {
   return (neuron0x3143d70()*0.266263);
}

double NNfunction_sb_uLuR::synapse0x3160990() {
   return (neuron0x31440b0()*0.0949314);
}

double NNfunction_sb_uLuR::synapse0x31609d0() {
   return (neuron0x31443f0()*0.232964);
}

double NNfunction_sb_uLuR::synapse0x3160a10() {
   return (neuron0x3144730()*0.136161);
}

double NNfunction_sb_uLuR::synapse0x3160a50() {
   return (neuron0x3144a70()*0.507044);
}

double NNfunction_sb_uLuR::synapse0x3160a90() {
   return (neuron0x3144db0()*0.11304);
}

double NNfunction_sb_uLuR::synapse0x3160ad0() {
   return (neuron0x31450f0()*-0.0515378);
}

double NNfunction_sb_uLuR::synapse0x3160b10() {
   return (neuron0x3145430()*0.255124);
}

double NNfunction_sb_uLuR::synapse0x3160b50() {
   return (neuron0x3145770()*0.0340092);
}

double NNfunction_sb_uLuR::synapse0x3160b90() {
   return (neuron0x3145ab0()*-0.459622);
}

double NNfunction_sb_uLuR::synapse0x3160bd0() {
   return (neuron0x3145df0()*-0.192342);
}

double NNfunction_sb_uLuR::synapse0x3160c10() {
   return (neuron0x3146130()*0.325887);
}

double NNfunction_sb_uLuR::synapse0x3160c50() {
   return (neuron0x3146470()*0.289527);
}

double NNfunction_sb_uLuR::synapse0x31606e0() {
   return (neuron0x31467b0()*0.320588);
}

double NNfunction_sb_uLuR::synapse0x3160720() {
   return (neuron0x3146d10()*-0.367375);
}

double NNfunction_sb_uLuR::synapse0x3160da0() {
   return (neuron0x3146f30()*0.0538217);
}

double NNfunction_sb_uLuR::synapse0x3160de0() {
   return (neuron0x3147270()*0.0674863);
}

double NNfunction_sb_uLuR::synapse0x3160e20() {
   return (neuron0x31475b0()*0.176716);
}

double NNfunction_sb_uLuR::synapse0x3160e60() {
   return (neuron0x31478f0()*-0.461352);
}

double NNfunction_sb_uLuR::synapse0x3160ea0() {
   return (neuron0x3147c30()*-0.0888112);
}

double NNfunction_sb_uLuR::synapse0x3160ee0() {
   return (neuron0x3147f70()*0.179882);
}

double NNfunction_sb_uLuR::synapse0x3161260() {
   return (neuron0x31433b0()*0.323399);
}

double NNfunction_sb_uLuR::synapse0x31612a0() {
   return (neuron0x31436f0()*-0.548083);
}

double NNfunction_sb_uLuR::synapse0x31612e0() {
   return (neuron0x3143a30()*0.119392);
}

double NNfunction_sb_uLuR::synapse0x3161320() {
   return (neuron0x3143d70()*-0.0148079);
}

double NNfunction_sb_uLuR::synapse0x3161360() {
   return (neuron0x31440b0()*-0.0643975);
}

double NNfunction_sb_uLuR::synapse0x31613a0() {
   return (neuron0x31443f0()*0.51563);
}

double NNfunction_sb_uLuR::synapse0x31613e0() {
   return (neuron0x3144730()*0.0066994);
}

double NNfunction_sb_uLuR::synapse0x3161420() {
   return (neuron0x3144a70()*0.156625);
}

double NNfunction_sb_uLuR::synapse0x3161460() {
   return (neuron0x3144db0()*-0.202598);
}

double NNfunction_sb_uLuR::synapse0x31614a0() {
   return (neuron0x31450f0()*0.683913);
}

double NNfunction_sb_uLuR::synapse0x31614e0() {
   return (neuron0x3145430()*-0.795461);
}

double NNfunction_sb_uLuR::synapse0x3161520() {
   return (neuron0x3145770()*-0.205549);
}

double NNfunction_sb_uLuR::synapse0x3161560() {
   return (neuron0x3145ab0()*-0.6751);
}

double NNfunction_sb_uLuR::synapse0x31615a0() {
   return (neuron0x3145df0()*0.0496824);
}

double NNfunction_sb_uLuR::synapse0x31615e0() {
   return (neuron0x3146130()*-0.0925307);
}

double NNfunction_sb_uLuR::synapse0x3161620() {
   return (neuron0x3146470()*-0.181508);
}

double NNfunction_sb_uLuR::synapse0x31610b0() {
   return (neuron0x31467b0()*-0.171113);
}

double NNfunction_sb_uLuR::synapse0x31610f0() {
   return (neuron0x3146d10()*-0.1054);
}

double NNfunction_sb_uLuR::synapse0x3161770() {
   return (neuron0x3146f30()*0.573248);
}

double NNfunction_sb_uLuR::synapse0x31617b0() {
   return (neuron0x3147270()*0.173493);
}

double NNfunction_sb_uLuR::synapse0x31617f0() {
   return (neuron0x31475b0()*0.509273);
}

double NNfunction_sb_uLuR::synapse0x3161830() {
   return (neuron0x31478f0()*-0.19442);
}

double NNfunction_sb_uLuR::synapse0x3161870() {
   return (neuron0x3147c30()*0.33761);
}

double NNfunction_sb_uLuR::synapse0x31618b0() {
   return (neuron0x3147f70()*0.076956);
}

double NNfunction_sb_uLuR::synapse0x3161c30() {
   return (neuron0x31433b0()*-0.130024);
}

double NNfunction_sb_uLuR::synapse0x3161c70() {
   return (neuron0x31436f0()*-0.0827797);
}

double NNfunction_sb_uLuR::synapse0x3161cb0() {
   return (neuron0x3143a30()*-0.0944475);
}

double NNfunction_sb_uLuR::synapse0x3161cf0() {
   return (neuron0x3143d70()*-0.0520729);
}

double NNfunction_sb_uLuR::synapse0x3161d30() {
   return (neuron0x31440b0()*-0.103276);
}

double NNfunction_sb_uLuR::synapse0x3161d70() {
   return (neuron0x31443f0()*0.39157);
}

double NNfunction_sb_uLuR::synapse0x3161db0() {
   return (neuron0x3144730()*0.0759329);
}

double NNfunction_sb_uLuR::synapse0x3161df0() {
   return (neuron0x3144a70()*0.199097);
}

double NNfunction_sb_uLuR::synapse0x3161e30() {
   return (neuron0x3144db0()*0.16934);
}

double NNfunction_sb_uLuR::synapse0x3161e70() {
   return (neuron0x31450f0()*0.0489796);
}

double NNfunction_sb_uLuR::synapse0x3161eb0() {
   return (neuron0x3145430()*-0.038839);
}

double NNfunction_sb_uLuR::synapse0x3161ef0() {
   return (neuron0x3145770()*-0.852271);
}

double NNfunction_sb_uLuR::synapse0x3161f30() {
   return (neuron0x3145ab0()*0.10502);
}

double NNfunction_sb_uLuR::synapse0x3161f70() {
   return (neuron0x3145df0()*0.0642022);
}

double NNfunction_sb_uLuR::synapse0x3161fb0() {
   return (neuron0x3146130()*-0.634682);
}

double NNfunction_sb_uLuR::synapse0x3161ff0() {
   return (neuron0x3146470()*-0.330881);
}

double NNfunction_sb_uLuR::synapse0x3161a80() {
   return (neuron0x31467b0()*-0.131857);
}

double NNfunction_sb_uLuR::synapse0x3161ac0() {
   return (neuron0x3146d10()*-0.0437249);
}

double NNfunction_sb_uLuR::synapse0x3162140() {
   return (neuron0x3146f30()*0.0405361);
}

double NNfunction_sb_uLuR::synapse0x3162180() {
   return (neuron0x3147270()*0.181349);
}

double NNfunction_sb_uLuR::synapse0x31621c0() {
   return (neuron0x31475b0()*0.112468);
}

double NNfunction_sb_uLuR::synapse0x3162200() {
   return (neuron0x31478f0()*-0.0241557);
}

double NNfunction_sb_uLuR::synapse0x3162240() {
   return (neuron0x3147c30()*-0.025368);
}

double NNfunction_sb_uLuR::synapse0x3162280() {
   return (neuron0x3147f70()*0.0538106);
}

double NNfunction_sb_uLuR::synapse0x3162600() {
   return (neuron0x31433b0()*-0.0097073);
}

double NNfunction_sb_uLuR::synapse0x3162640() {
   return (neuron0x31436f0()*-0.0329466);
}

double NNfunction_sb_uLuR::synapse0x3162680() {
   return (neuron0x3143a30()*1.06253);
}

double NNfunction_sb_uLuR::synapse0x31626c0() {
   return (neuron0x3143d70()*0.144961);
}

double NNfunction_sb_uLuR::synapse0x3162700() {
   return (neuron0x31440b0()*-0.0287707);
}

double NNfunction_sb_uLuR::synapse0x3162740() {
   return (neuron0x31443f0()*-0.00629635);
}

double NNfunction_sb_uLuR::synapse0x3162780() {
   return (neuron0x3144730()*-0.037107);
}

double NNfunction_sb_uLuR::synapse0x31627c0() {
   return (neuron0x3144a70()*0.0307486);
}

double NNfunction_sb_uLuR::synapse0x3162800() {
   return (neuron0x3144db0()*0.0488655);
}

double NNfunction_sb_uLuR::synapse0x3162840() {
   return (neuron0x31450f0()*-0.00713237);
}

double NNfunction_sb_uLuR::synapse0x3162880() {
   return (neuron0x3145430()*-0.00162999);
}

double NNfunction_sb_uLuR::synapse0x31628c0() {
   return (neuron0x3145770()*-0.428077);
}

double NNfunction_sb_uLuR::synapse0x3162900() {
   return (neuron0x3145ab0()*-0.0175047);
}

double NNfunction_sb_uLuR::synapse0x3162940() {
   return (neuron0x3145df0()*-0.00149838);
}

double NNfunction_sb_uLuR::synapse0x3162980() {
   return (neuron0x3146130()*0.148663);
}

double NNfunction_sb_uLuR::synapse0x31629c0() {
   return (neuron0x3146470()*0.0295818);
}

double NNfunction_sb_uLuR::synapse0x3162450() {
   return (neuron0x31467b0()*0.0103951);
}

double NNfunction_sb_uLuR::synapse0x3162490() {
   return (neuron0x3146d10()*0.0320498);
}

double NNfunction_sb_uLuR::synapse0x3162b10() {
   return (neuron0x3146f30()*0.00973546);
}

double NNfunction_sb_uLuR::synapse0x3162b50() {
   return (neuron0x3147270()*-0.00734974);
}

double NNfunction_sb_uLuR::synapse0x3162b90() {
   return (neuron0x31475b0()*-0.0309983);
}

double NNfunction_sb_uLuR::synapse0x3162bd0() {
   return (neuron0x31478f0()*-0.0129353);
}

double NNfunction_sb_uLuR::synapse0x3162c10() {
   return (neuron0x3147c30()*0.00623837);
}

double NNfunction_sb_uLuR::synapse0x3162c50() {
   return (neuron0x3147f70()*-0.0218479);
}

double NNfunction_sb_uLuR::synapse0x3162fd0() {
   return (neuron0x31433b0()*-0.146901);
}

double NNfunction_sb_uLuR::synapse0x3163010() {
   return (neuron0x31436f0()*-0.120042);
}

double NNfunction_sb_uLuR::synapse0x3163050() {
   return (neuron0x3143a30()*-0.392126);
}

double NNfunction_sb_uLuR::synapse0x3163090() {
   return (neuron0x3143d70()*0.352947);
}

double NNfunction_sb_uLuR::synapse0x31630d0() {
   return (neuron0x31440b0()*-0.194745);
}

double NNfunction_sb_uLuR::synapse0x3163110() {
   return (neuron0x31443f0()*0.335028);
}

double NNfunction_sb_uLuR::synapse0x3163150() {
   return (neuron0x3144730()*-0.547348);
}

double NNfunction_sb_uLuR::synapse0x3163190() {
   return (neuron0x3144a70()*-0.633228);
}

double NNfunction_sb_uLuR::synapse0x31631d0() {
   return (neuron0x3144db0()*0.0473271);
}

double NNfunction_sb_uLuR::synapse0x3163210() {
   return (neuron0x31450f0()*-0.379064);
}

double NNfunction_sb_uLuR::synapse0x3163250() {
   return (neuron0x3145430()*0.315164);
}

double NNfunction_sb_uLuR::synapse0x3163290() {
   return (neuron0x3145770()*-0.511389);
}

double NNfunction_sb_uLuR::synapse0x31632d0() {
   return (neuron0x3145ab0()*0.320926);
}

double NNfunction_sb_uLuR::synapse0x3163310() {
   return (neuron0x3145df0()*0.116981);
}

double NNfunction_sb_uLuR::synapse0x3163350() {
   return (neuron0x3146130()*-0.295579);
}

double NNfunction_sb_uLuR::synapse0x3163390() {
   return (neuron0x3146470()*0.873768);
}

double NNfunction_sb_uLuR::synapse0x3162e20() {
   return (neuron0x31467b0()*0.164891);
}

double NNfunction_sb_uLuR::synapse0x3162e60() {
   return (neuron0x3146d10()*-0.72048);
}

double NNfunction_sb_uLuR::synapse0x31634e0() {
   return (neuron0x3146f30()*-0.0547784);
}

double NNfunction_sb_uLuR::synapse0x3163520() {
   return (neuron0x3147270()*0.23981);
}

double NNfunction_sb_uLuR::synapse0x3163560() {
   return (neuron0x31475b0()*0.223042);
}

double NNfunction_sb_uLuR::synapse0x31635a0() {
   return (neuron0x31478f0()*-0.954035);
}

double NNfunction_sb_uLuR::synapse0x31635e0() {
   return (neuron0x3147c30()*-0.243854);
}

double NNfunction_sb_uLuR::synapse0x3163620() {
   return (neuron0x3147f70()*-0.0904803);
}

double NNfunction_sb_uLuR::synapse0x31639a0() {
   return (neuron0x31433b0()*0.338764);
}

double NNfunction_sb_uLuR::synapse0x31639e0() {
   return (neuron0x31436f0()*-0.576342);
}

double NNfunction_sb_uLuR::synapse0x3163a20() {
   return (neuron0x3143a30()*0.608035);
}

double NNfunction_sb_uLuR::synapse0x3163a60() {
   return (neuron0x3143d70()*-0.191098);
}

double NNfunction_sb_uLuR::synapse0x3163aa0() {
   return (neuron0x31440b0()*-0.116755);
}

double NNfunction_sb_uLuR::synapse0x3163ae0() {
   return (neuron0x31443f0()*-0.136827);
}

double NNfunction_sb_uLuR::synapse0x3163b20() {
   return (neuron0x3144730()*-0.0659736);
}

double NNfunction_sb_uLuR::synapse0x3163b60() {
   return (neuron0x3144a70()*-0.098527);
}

double NNfunction_sb_uLuR::synapse0x3163ba0() {
   return (neuron0x3144db0()*-0.42909);
}

double NNfunction_sb_uLuR::synapse0x3163be0() {
   return (neuron0x31450f0()*0.369941);
}

double NNfunction_sb_uLuR::synapse0x3163c20() {
   return (neuron0x3145430()*0.746906);
}

double NNfunction_sb_uLuR::synapse0x3163c60() {
   return (neuron0x3145770()*-0.507128);
}

double NNfunction_sb_uLuR::synapse0x3163ca0() {
   return (neuron0x3145ab0()*0.0816565);
}

double NNfunction_sb_uLuR::synapse0x3163ce0() {
   return (neuron0x3145df0()*-0.00724003);
}

double NNfunction_sb_uLuR::synapse0x3163d20() {
   return (neuron0x3146130()*-0.284627);
}

double NNfunction_sb_uLuR::synapse0x3163d60() {
   return (neuron0x3146470()*0.488044);
}

double NNfunction_sb_uLuR::synapse0x31637f0() {
   return (neuron0x31467b0()*-0.451997);
}

double NNfunction_sb_uLuR::synapse0x3163830() {
   return (neuron0x3146d10()*0.323256);
}

double NNfunction_sb_uLuR::synapse0x3163eb0() {
   return (neuron0x3146f30()*0.446609);
}

double NNfunction_sb_uLuR::synapse0x3163ef0() {
   return (neuron0x3147270()*-0.0899447);
}

double NNfunction_sb_uLuR::synapse0x3163f30() {
   return (neuron0x31475b0()*0.17697);
}

double NNfunction_sb_uLuR::synapse0x3163f70() {
   return (neuron0x31478f0()*0.486005);
}

double NNfunction_sb_uLuR::synapse0x3163fb0() {
   return (neuron0x3147c30()*0.149851);
}

double NNfunction_sb_uLuR::synapse0x3163ff0() {
   return (neuron0x3147f70()*0.00872602);
}

double NNfunction_sb_uLuR::synapse0x3164370() {
   return (neuron0x31433b0()*-0.0400682);
}

double NNfunction_sb_uLuR::synapse0x31643b0() {
   return (neuron0x31436f0()*-0.00153105);
}

double NNfunction_sb_uLuR::synapse0x31643f0() {
   return (neuron0x3143a30()*-0.0643297);
}

double NNfunction_sb_uLuR::synapse0x3164430() {
   return (neuron0x3143d70()*0.488459);
}

double NNfunction_sb_uLuR::synapse0x3164470() {
   return (neuron0x31440b0()*-0.0864969);
}

double NNfunction_sb_uLuR::synapse0x31644b0() {
   return (neuron0x31443f0()*0.062444);
}

double NNfunction_sb_uLuR::synapse0x31644f0() {
   return (neuron0x3144730()*-0.161944);
}

double NNfunction_sb_uLuR::synapse0x3164530() {
   return (neuron0x3144a70()*-0.0481587);
}

double NNfunction_sb_uLuR::synapse0x3164570() {
   return (neuron0x3144db0()*0.11062);
}

double NNfunction_sb_uLuR::synapse0x31645b0() {
   return (neuron0x31450f0()*0.0772318);
}

double NNfunction_sb_uLuR::synapse0x31645f0() {
   return (neuron0x3145430()*0.0166826);
}

double NNfunction_sb_uLuR::synapse0x3164630() {
   return (neuron0x3145770()*0.740496);
}

double NNfunction_sb_uLuR::synapse0x3164670() {
   return (neuron0x3145ab0()*-0.181845);
}

double NNfunction_sb_uLuR::synapse0x31646b0() {
   return (neuron0x3145df0()*-0.29878);
}

double NNfunction_sb_uLuR::synapse0x31646f0() {
   return (neuron0x3146130()*1.02239);
}

double NNfunction_sb_uLuR::synapse0x3164730() {
   return (neuron0x3146470()*0.123221);
}

double NNfunction_sb_uLuR::synapse0x31641c0() {
   return (neuron0x31467b0()*0.313054);
}

double NNfunction_sb_uLuR::synapse0x3164200() {
   return (neuron0x3146d10()*-0.00640492);
}

double NNfunction_sb_uLuR::synapse0x3164880() {
   return (neuron0x3146f30()*-0.0405996);
}

double NNfunction_sb_uLuR::synapse0x31648c0() {
   return (neuron0x3147270()*0.0692892);
}

double NNfunction_sb_uLuR::synapse0x3164900() {
   return (neuron0x31475b0()*0.000919419);
}

double NNfunction_sb_uLuR::synapse0x3164940() {
   return (neuron0x31478f0()*0.0670862);
}

double NNfunction_sb_uLuR::synapse0x3164980() {
   return (neuron0x3147c30()*-0.0609288);
}

double NNfunction_sb_uLuR::synapse0x31649c0() {
   return (neuron0x3147f70()*-0.1917);
}

double NNfunction_sb_uLuR::synapse0x314d470() {
   return (neuron0x31433b0()*0.365954);
}

double NNfunction_sb_uLuR::synapse0x314d4b0() {
   return (neuron0x31436f0()*-0.13712);
}

double NNfunction_sb_uLuR::synapse0x314d4f0() {
   return (neuron0x3143a30()*-0.296426);
}

double NNfunction_sb_uLuR::synapse0x314d530() {
   return (neuron0x3143d70()*0.47188);
}

double NNfunction_sb_uLuR::synapse0x314d570() {
   return (neuron0x31440b0()*0.477551);
}

double NNfunction_sb_uLuR::synapse0x314d5b0() {
   return (neuron0x31443f0()*0.15698);
}

double NNfunction_sb_uLuR::synapse0x314d5f0() {
   return (neuron0x3144730()*-0.244086);
}

double NNfunction_sb_uLuR::synapse0x314d630() {
   return (neuron0x3144a70()*-0.0055647);
}

double NNfunction_sb_uLuR::synapse0x3165150() {
   return (neuron0x3144db0()*-0.526844);
}

double NNfunction_sb_uLuR::synapse0x3165190() {
   return (neuron0x31450f0()*0.134715);
}

double NNfunction_sb_uLuR::synapse0x31651d0() {
   return (neuron0x3145430()*-1.13307);
}

double NNfunction_sb_uLuR::synapse0x3165210() {
   return (neuron0x3145770()*-0.818331);
}

double NNfunction_sb_uLuR::synapse0x3165250() {
   return (neuron0x3145ab0()*-0.302129);
}

double NNfunction_sb_uLuR::synapse0x3165290() {
   return (neuron0x3145df0()*0.55272);
}

double NNfunction_sb_uLuR::synapse0x31652d0() {
   return (neuron0x3146130()*0.263528);
}

double NNfunction_sb_uLuR::synapse0x3165310() {
   return (neuron0x3146470()*0.0256727);
}

double NNfunction_sb_uLuR::synapse0x3164b90() {
   return (neuron0x31467b0()*-0.486845);
}

double NNfunction_sb_uLuR::synapse0x3164bd0() {
   return (neuron0x3146d10()*0.672315);
}

double NNfunction_sb_uLuR::synapse0x3165460() {
   return (neuron0x3146f30()*-1.06955);
}

double NNfunction_sb_uLuR::synapse0x31654a0() {
   return (neuron0x3147270()*0.151141);
}

double NNfunction_sb_uLuR::synapse0x31654e0() {
   return (neuron0x31475b0()*0.560097);
}

double NNfunction_sb_uLuR::synapse0x3165520() {
   return (neuron0x31478f0()*0.383431);
}

double NNfunction_sb_uLuR::synapse0x3165560() {
   return (neuron0x3147c30()*-0.0698182);
}

double NNfunction_sb_uLuR::synapse0x31655a0() {
   return (neuron0x3147f70()*-0.205448);
}

double NNfunction_sb_uLuR::synapse0x3165920() {
   return (neuron0x31433b0()*0.157884);
}

double NNfunction_sb_uLuR::synapse0x3165960() {
   return (neuron0x31436f0()*-0.106527);
}

double NNfunction_sb_uLuR::synapse0x31659a0() {
   return (neuron0x3143a30()*0.243875);
}

double NNfunction_sb_uLuR::synapse0x31659e0() {
   return (neuron0x3143d70()*-0.357628);
}

double NNfunction_sb_uLuR::synapse0x3165a20() {
   return (neuron0x31440b0()*0.110718);
}

double NNfunction_sb_uLuR::synapse0x3165a60() {
   return (neuron0x31443f0()*0.424809);
}

double NNfunction_sb_uLuR::synapse0x3165aa0() {
   return (neuron0x3144730()*-0.012028);
}

double NNfunction_sb_uLuR::synapse0x3165ae0() {
   return (neuron0x3144a70()*-0.10303);
}

double NNfunction_sb_uLuR::synapse0x3165b20() {
   return (neuron0x3144db0()*-0.605876);
}

double NNfunction_sb_uLuR::synapse0x3165b60() {
   return (neuron0x31450f0()*0.256041);
}

double NNfunction_sb_uLuR::synapse0x3165ba0() {
   return (neuron0x3145430()*0.191814);
}

double NNfunction_sb_uLuR::synapse0x3165be0() {
   return (neuron0x3145770()*-0.265269);
}

double NNfunction_sb_uLuR::synapse0x3165c20() {
   return (neuron0x3145ab0()*0.134819);
}

double NNfunction_sb_uLuR::synapse0x3165c60() {
   return (neuron0x3145df0()*-0.45158);
}

double NNfunction_sb_uLuR::synapse0x3165ca0() {
   return (neuron0x3146130()*0.475994);
}

double NNfunction_sb_uLuR::synapse0x3165ce0() {
   return (neuron0x3146470()*0.171217);
}

double NNfunction_sb_uLuR::synapse0x3165770() {
   return (neuron0x31467b0()*0.277612);
}

double NNfunction_sb_uLuR::synapse0x31657b0() {
   return (neuron0x3146d10()*0.270711);
}

double NNfunction_sb_uLuR::synapse0x3165e30() {
   return (neuron0x3146f30()*0.131239);
}

double NNfunction_sb_uLuR::synapse0x3165e70() {
   return (neuron0x3147270()*-0.0009271);
}

double NNfunction_sb_uLuR::synapse0x3165eb0() {
   return (neuron0x31475b0()*0.189045);
}

double NNfunction_sb_uLuR::synapse0x3165ef0() {
   return (neuron0x31478f0()*0.279005);
}

double NNfunction_sb_uLuR::synapse0x3165f30() {
   return (neuron0x3147c30()*-0.388971);
}

double NNfunction_sb_uLuR::synapse0x3165f70() {
   return (neuron0x3147f70()*-0.176905);
}

double NNfunction_sb_uLuR::synapse0x31662f0() {
   return (neuron0x31433b0()*-0.201289);
}

double NNfunction_sb_uLuR::synapse0x3166330() {
   return (neuron0x31436f0()*-0.152234);
}

double NNfunction_sb_uLuR::synapse0x3166370() {
   return (neuron0x3143a30()*-0.588451);
}

double NNfunction_sb_uLuR::synapse0x31663b0() {
   return (neuron0x3143d70()*0.639333);
}

double NNfunction_sb_uLuR::synapse0x31663f0() {
   return (neuron0x31440b0()*0.406211);
}

double NNfunction_sb_uLuR::synapse0x3166430() {
   return (neuron0x31443f0()*0.240737);
}

double NNfunction_sb_uLuR::synapse0x3166470() {
   return (neuron0x3144730()*-0.107124);
}

double NNfunction_sb_uLuR::synapse0x31664b0() {
   return (neuron0x3144a70()*-0.292725);
}

double NNfunction_sb_uLuR::synapse0x31664f0() {
   return (neuron0x3144db0()*0.0723207);
}

double NNfunction_sb_uLuR::synapse0x3166530() {
   return (neuron0x31450f0()*-0.633594);
}

double NNfunction_sb_uLuR::synapse0x3166570() {
   return (neuron0x3145430()*-0.669648);
}

double NNfunction_sb_uLuR::synapse0x31665b0() {
   return (neuron0x3145770()*-0.417102);
}

double NNfunction_sb_uLuR::synapse0x31665f0() {
   return (neuron0x3145ab0()*0.603223);
}

double NNfunction_sb_uLuR::synapse0x3166630() {
   return (neuron0x3145df0()*0.297819);
}

double NNfunction_sb_uLuR::synapse0x3166670() {
   return (neuron0x3146130()*-0.393673);
}

double NNfunction_sb_uLuR::synapse0x31666b0() {
   return (neuron0x3146470()*-0.301028);
}

double NNfunction_sb_uLuR::synapse0x3166140() {
   return (neuron0x31467b0()*-0.402013);
}

double NNfunction_sb_uLuR::synapse0x3166180() {
   return (neuron0x3146d10()*-0.681796);
}

double NNfunction_sb_uLuR::synapse0x3156cb0() {
   return (neuron0x3146f30()*-0.0695924);
}

double NNfunction_sb_uLuR::synapse0x3156cf0() {
   return (neuron0x3147270()*0.369031);
}

double NNfunction_sb_uLuR::synapse0x3156d30() {
   return (neuron0x31475b0()*-0.0667082);
}

double NNfunction_sb_uLuR::synapse0x3156d70() {
   return (neuron0x31478f0()*-0.242735);
}

double NNfunction_sb_uLuR::synapse0x3156db0() {
   return (neuron0x3147c30()*-0.233728);
}

double NNfunction_sb_uLuR::synapse0x3156df0() {
   return (neuron0x3147f70()*-0.0545482);
}

double NNfunction_sb_uLuR::synapse0x3157170() {
   return (neuron0x31433b0()*0.0381926);
}

double NNfunction_sb_uLuR::synapse0x31571b0() {
   return (neuron0x31436f0()*0.00077486);
}

double NNfunction_sb_uLuR::synapse0x31571f0() {
   return (neuron0x3143a30()*0.00280641);
}

double NNfunction_sb_uLuR::synapse0x3157230() {
   return (neuron0x3143d70()*-11.4803);
}

double NNfunction_sb_uLuR::synapse0x3157270() {
   return (neuron0x31440b0()*0.000417782);
}

double NNfunction_sb_uLuR::synapse0x31572b0() {
   return (neuron0x31443f0()*0.0279525);
}

double NNfunction_sb_uLuR::synapse0x31572f0() {
   return (neuron0x3144730()*0.0158701);
}

double NNfunction_sb_uLuR::synapse0x3157330() {
   return (neuron0x3144a70()*0.0132342);
}

double NNfunction_sb_uLuR::synapse0x3157370() {
   return (neuron0x3144db0()*-0.0040931);
}

double NNfunction_sb_uLuR::synapse0x31573b0() {
   return (neuron0x31450f0()*0.0546186);
}

double NNfunction_sb_uLuR::synapse0x31573f0() {
   return (neuron0x3145430()*0.0053683);
}

double NNfunction_sb_uLuR::synapse0x3157430() {
   return (neuron0x3145770()*0.0782286);
}

double NNfunction_sb_uLuR::synapse0x3157470() {
   return (neuron0x3145ab0()*0.0207697);
}

double NNfunction_sb_uLuR::synapse0x31574b0() {
   return (neuron0x3145df0()*0.0140306);
}

double NNfunction_sb_uLuR::synapse0x31574f0() {
   return (neuron0x3146130()*0.103464);
}

double NNfunction_sb_uLuR::synapse0x3157530() {
   return (neuron0x3146470()*-0.0148321);
}

double NNfunction_sb_uLuR::synapse0x3156fc0() {
   return (neuron0x31467b0()*-0.0248828);
}

double NNfunction_sb_uLuR::synapse0x3157000() {
   return (neuron0x3146d10()*-0.00132979);
}

double NNfunction_sb_uLuR::synapse0x3157680() {
   return (neuron0x3146f30()*0.0378544);
}

double NNfunction_sb_uLuR::synapse0x31576c0() {
   return (neuron0x3147270()*0.00909028);
}

double NNfunction_sb_uLuR::synapse0x3157700() {
   return (neuron0x31475b0()*-0.0623026);
}

double NNfunction_sb_uLuR::synapse0x3157740() {
   return (neuron0x31478f0()*-0.0265281);
}

double NNfunction_sb_uLuR::synapse0x3157780() {
   return (neuron0x3147c30()*0.0230593);
}

double NNfunction_sb_uLuR::synapse0x31577c0() {
   return (neuron0x3147f70()*0.0145009);
}

double NNfunction_sb_uLuR::synapse0x3157b40() {
   return (neuron0x31433b0()*0.16296);
}

double NNfunction_sb_uLuR::synapse0x3157b80() {
   return (neuron0x31436f0()*0.184892);
}

double NNfunction_sb_uLuR::synapse0x3157bc0() {
   return (neuron0x3143a30()*0.0914637);
}

double NNfunction_sb_uLuR::synapse0x3157c00() {
   return (neuron0x3143d70()*0.779707);
}

double NNfunction_sb_uLuR::synapse0x3157c40() {
   return (neuron0x31440b0()*0.324787);
}

double NNfunction_sb_uLuR::synapse0x3157c80() {
   return (neuron0x31443f0()*0.117913);
}

double NNfunction_sb_uLuR::synapse0x3157cc0() {
   return (neuron0x3144730()*-0.0414099);
}

double NNfunction_sb_uLuR::synapse0x3157d00() {
   return (neuron0x3144a70()*0.0625791);
}

double NNfunction_sb_uLuR::synapse0x3157d40() {
   return (neuron0x3144db0()*-0.585416);
}

double NNfunction_sb_uLuR::synapse0x3157d80() {
   return (neuron0x31450f0()*0.351627);
}

double NNfunction_sb_uLuR::synapse0x3157dc0() {
   return (neuron0x3145430()*0.615948);
}

double NNfunction_sb_uLuR::synapse0x3157e00() {
   return (neuron0x3145770()*0.124816);
}

double NNfunction_sb_uLuR::synapse0x3157e40() {
   return (neuron0x3145ab0()*0.528556);
}

double NNfunction_sb_uLuR::synapse0x3157e80() {
   return (neuron0x3145df0()*0.161298);
}

double NNfunction_sb_uLuR::synapse0x3157ec0() {
   return (neuron0x3146130()*0.195356);
}

double NNfunction_sb_uLuR::synapse0x3157f00() {
   return (neuron0x3146470()*-0.222374);
}

double NNfunction_sb_uLuR::synapse0x3157990() {
   return (neuron0x31467b0()*-0.624223);
}

double NNfunction_sb_uLuR::synapse0x31579d0() {
   return (neuron0x3146d10()*-0.632834);
}

double NNfunction_sb_uLuR::synapse0x3158050() {
   return (neuron0x3146f30()*0.0697784);
}

double NNfunction_sb_uLuR::synapse0x3158090() {
   return (neuron0x3147270()*-0.23584);
}

double NNfunction_sb_uLuR::synapse0x31580d0() {
   return (neuron0x31475b0()*-0.425631);
}

double NNfunction_sb_uLuR::synapse0x3158110() {
   return (neuron0x31478f0()*-0.212361);
}

double NNfunction_sb_uLuR::synapse0x3158150() {
   return (neuron0x3147c30()*-0.00832641);
}

double NNfunction_sb_uLuR::synapse0x3158190() {
   return (neuron0x3147f70()*-0.814357);
}

double NNfunction_sb_uLuR::synapse0x3158510() {
   return (neuron0x31433b0()*0.00458);
}

double NNfunction_sb_uLuR::synapse0x3158550() {
   return (neuron0x31436f0()*0.0251258);
}

double NNfunction_sb_uLuR::synapse0x3158590() {
   return (neuron0x3143a30()*0.00443759);
}

double NNfunction_sb_uLuR::synapse0x31585d0() {
   return (neuron0x3143d70()*5.09884);
}

double NNfunction_sb_uLuR::synapse0x3158610() {
   return (neuron0x31440b0()*-0.00016536);
}

double NNfunction_sb_uLuR::synapse0x3158650() {
   return (neuron0x31443f0()*-0.00220253);
}

double NNfunction_sb_uLuR::synapse0x3158690() {
   return (neuron0x3144730()*-0.00788642);
}

double NNfunction_sb_uLuR::synapse0x31586d0() {
   return (neuron0x3144a70()*-0.0164339);
}

double NNfunction_sb_uLuR::synapse0x3158710() {
   return (neuron0x3144db0()*-0.039969);
}

double NNfunction_sb_uLuR::synapse0x3158750() {
   return (neuron0x31450f0()*0.0152668);
}

double NNfunction_sb_uLuR::synapse0x3158790() {
   return (neuron0x3145430()*0.0561921);
}

double NNfunction_sb_uLuR::synapse0x31587d0() {
   return (neuron0x3145770()*-0.641038);
}

double NNfunction_sb_uLuR::synapse0x3158810() {
   return (neuron0x3145ab0()*0.0302916);
}

double NNfunction_sb_uLuR::synapse0x3158850() {
   return (neuron0x3145df0()*-0.00587622);
}

double NNfunction_sb_uLuR::synapse0x3158890() {
   return (neuron0x3146130()*-1.20058);
}

double NNfunction_sb_uLuR::synapse0x31588d0() {
   return (neuron0x3146470()*0.00248664);
}

double NNfunction_sb_uLuR::synapse0x3158360() {
   return (neuron0x31467b0()*-0.00280726);
}

double NNfunction_sb_uLuR::synapse0x31583a0() {
   return (neuron0x3146d10()*0.0287464);
}

double NNfunction_sb_uLuR::synapse0x3158a20() {
   return (neuron0x3146f30()*-0.00756488);
}

double NNfunction_sb_uLuR::synapse0x3158a60() {
   return (neuron0x3147270()*0.0157838);
}

double NNfunction_sb_uLuR::synapse0x3158aa0() {
   return (neuron0x31475b0()*0.0324172);
}

double NNfunction_sb_uLuR::synapse0x3158ae0() {
   return (neuron0x31478f0()*0.00615395);
}

double NNfunction_sb_uLuR::synapse0x3158b20() {
   return (neuron0x3147c30()*-0.0167637);
}

double NNfunction_sb_uLuR::synapse0x3158b60() {
   return (neuron0x3147f70()*-0.00969731);
}

double NNfunction_sb_uLuR::synapse0x316aa30() {
   return (neuron0x31433b0()*-0.218182);
}

double NNfunction_sb_uLuR::synapse0x316aa70() {
   return (neuron0x31436f0()*0.254887);
}

double NNfunction_sb_uLuR::synapse0x316aab0() {
   return (neuron0x3143a30()*-0.319057);
}

double NNfunction_sb_uLuR::synapse0x316aaf0() {
   return (neuron0x3143d70()*0.00202724);
}

double NNfunction_sb_uLuR::synapse0x316ab30() {
   return (neuron0x31440b0()*0.552372);
}

double NNfunction_sb_uLuR::synapse0x316ab70() {
   return (neuron0x31443f0()*-0.895535);
}

double NNfunction_sb_uLuR::synapse0x316abb0() {
   return (neuron0x3144730()*0.258256);
}

double NNfunction_sb_uLuR::synapse0x316abf0() {
   return (neuron0x3144a70()*-0.434892);
}

double NNfunction_sb_uLuR::synapse0x316ac30() {
   return (neuron0x3144db0()*0.259714);
}

double NNfunction_sb_uLuR::synapse0x316ac70() {
   return (neuron0x31450f0()*-0.297371);
}

double NNfunction_sb_uLuR::synapse0x316acb0() {
   return (neuron0x3145430()*0.305904);
}

double NNfunction_sb_uLuR::synapse0x316acf0() {
   return (neuron0x3145770()*0.426397);
}

double NNfunction_sb_uLuR::synapse0x316ad30() {
   return (neuron0x3145ab0()*0.395273);
}

double NNfunction_sb_uLuR::synapse0x316ad70() {
   return (neuron0x3145df0()*0.0393876);
}

double NNfunction_sb_uLuR::synapse0x316adb0() {
   return (neuron0x3146130()*0.256339);
}

double NNfunction_sb_uLuR::synapse0x316adf0() {
   return (neuron0x3146470()*-0.442094);
}

double NNfunction_sb_uLuR::synapse0x3158ba0() {
   return (neuron0x31467b0()*-0.5054);
}

double NNfunction_sb_uLuR::synapse0x3158be0() {
   return (neuron0x3146d10()*-0.100717);
}

double NNfunction_sb_uLuR::synapse0x316af40() {
   return (neuron0x3146f30()*0.259882);
}

double NNfunction_sb_uLuR::synapse0x316af80() {
   return (neuron0x3147270()*-0.460129);
}

double NNfunction_sb_uLuR::synapse0x316afc0() {
   return (neuron0x31475b0()*0.286863);
}

double NNfunction_sb_uLuR::synapse0x316b000() {
   return (neuron0x31478f0()*0.689889);
}

double NNfunction_sb_uLuR::synapse0x316b040() {
   return (neuron0x3147c30()*-0.638563);
}

double NNfunction_sb_uLuR::synapse0x316b080() {
   return (neuron0x3147f70()*0.217515);
}

double NNfunction_sb_uLuR::synapse0x316b400() {
   return (neuron0x31433b0()*-0.402061);
}

double NNfunction_sb_uLuR::synapse0x316b440() {
   return (neuron0x31436f0()*-0.0881904);
}

double NNfunction_sb_uLuR::synapse0x316b480() {
   return (neuron0x3143a30()*0.201124);
}

double NNfunction_sb_uLuR::synapse0x316b4c0() {
   return (neuron0x3143d70()*-0.023254);
}

double NNfunction_sb_uLuR::synapse0x316b500() {
   return (neuron0x31440b0()*-0.356457);
}

double NNfunction_sb_uLuR::synapse0x316b540() {
   return (neuron0x31443f0()*0.118617);
}

double NNfunction_sb_uLuR::synapse0x316b580() {
   return (neuron0x3144730()*-0.276488);
}

double NNfunction_sb_uLuR::synapse0x316b5c0() {
   return (neuron0x3144a70()*-0.114729);
}

double NNfunction_sb_uLuR::synapse0x316b600() {
   return (neuron0x3144db0()*-0.114465);
}

double NNfunction_sb_uLuR::synapse0x316b640() {
   return (neuron0x31450f0()*0.459921);
}

double NNfunction_sb_uLuR::synapse0x316b680() {
   return (neuron0x3145430()*-0.320865);
}

double NNfunction_sb_uLuR::synapse0x316b6c0() {
   return (neuron0x3145770()*-0.0564434);
}

double NNfunction_sb_uLuR::synapse0x316b700() {
   return (neuron0x3145ab0()*-0.513912);
}

double NNfunction_sb_uLuR::synapse0x316b740() {
   return (neuron0x3145df0()*-0.603696);
}

double NNfunction_sb_uLuR::synapse0x316b780() {
   return (neuron0x3146130()*0.0470076);
}

double NNfunction_sb_uLuR::synapse0x316b7c0() {
   return (neuron0x3146470()*0.203491);
}

double NNfunction_sb_uLuR::synapse0x316b250() {
   return (neuron0x31467b0()*0.628283);
}

double NNfunction_sb_uLuR::synapse0x316b290() {
   return (neuron0x3146d10()*0.963615);
}

double NNfunction_sb_uLuR::synapse0x316b910() {
   return (neuron0x3146f30()*0.0189264);
}

double NNfunction_sb_uLuR::synapse0x316b950() {
   return (neuron0x3147270()*0.23101);
}

double NNfunction_sb_uLuR::synapse0x316b990() {
   return (neuron0x31475b0()*0.053454);
}

double NNfunction_sb_uLuR::synapse0x316b9d0() {
   return (neuron0x31478f0()*0.356169);
}

double NNfunction_sb_uLuR::synapse0x316ba10() {
   return (neuron0x3147c30()*-0.369577);
}

double NNfunction_sb_uLuR::synapse0x316ba50() {
   return (neuron0x3147f70()*-0.356884);
}

double NNfunction_sb_uLuR::synapse0x316bdd0() {
   return (neuron0x31433b0()*0.532639);
}

double NNfunction_sb_uLuR::synapse0x316be10() {
   return (neuron0x31436f0()*0.507766);
}

double NNfunction_sb_uLuR::synapse0x316be50() {
   return (neuron0x3143a30()*-0.0922375);
}

double NNfunction_sb_uLuR::synapse0x316be90() {
   return (neuron0x3143d70()*-0.131878);
}

double NNfunction_sb_uLuR::synapse0x316bed0() {
   return (neuron0x31440b0()*-0.128905);
}

double NNfunction_sb_uLuR::synapse0x316bf10() {
   return (neuron0x31443f0()*0.0848933);
}

double NNfunction_sb_uLuR::synapse0x316bf50() {
   return (neuron0x3144730()*0.0867578);
}

double NNfunction_sb_uLuR::synapse0x316bf90() {
   return (neuron0x3144a70()*0.112029);
}

double NNfunction_sb_uLuR::synapse0x316bfd0() {
   return (neuron0x3144db0()*0.0969321);
}

double NNfunction_sb_uLuR::synapse0x316c010() {
   return (neuron0x31450f0()*1.07784);
}

double NNfunction_sb_uLuR::synapse0x316c050() {
   return (neuron0x3145430()*0.00597572);
}

double NNfunction_sb_uLuR::synapse0x316c090() {
   return (neuron0x3145770()*0.586249);
}

double NNfunction_sb_uLuR::synapse0x316c0d0() {
   return (neuron0x3145ab0()*-0.474965);
}

double NNfunction_sb_uLuR::synapse0x316c110() {
   return (neuron0x3145df0()*-0.400751);
}

double NNfunction_sb_uLuR::synapse0x316c150() {
   return (neuron0x3146130()*-0.0639642);
}

double NNfunction_sb_uLuR::synapse0x316c190() {
   return (neuron0x3146470()*-0.00542242);
}

double NNfunction_sb_uLuR::synapse0x316bc20() {
   return (neuron0x31467b0()*0.271575);
}

double NNfunction_sb_uLuR::synapse0x316bc60() {
   return (neuron0x3146d10()*-0.136822);
}

double NNfunction_sb_uLuR::synapse0x316c2e0() {
   return (neuron0x3146f30()*0.467272);
}

double NNfunction_sb_uLuR::synapse0x316c320() {
   return (neuron0x3147270()*0.197209);
}

double NNfunction_sb_uLuR::synapse0x316c360() {
   return (neuron0x31475b0()*0.1563);
}

double NNfunction_sb_uLuR::synapse0x316c3a0() {
   return (neuron0x31478f0()*-0.0451618);
}

double NNfunction_sb_uLuR::synapse0x316c3e0() {
   return (neuron0x3147c30()*0.143897);
}

double NNfunction_sb_uLuR::synapse0x316c420() {
   return (neuron0x3147f70()*0.527324);
}

double NNfunction_sb_uLuR::synapse0x316c7a0() {
   return (neuron0x31433b0()*0.0878857);
}

double NNfunction_sb_uLuR::synapse0x316c7e0() {
   return (neuron0x31436f0()*-0.504868);
}

double NNfunction_sb_uLuR::synapse0x316c820() {
   return (neuron0x3143a30()*-0.164644);
}

double NNfunction_sb_uLuR::synapse0x316c860() {
   return (neuron0x3143d70()*0.710667);
}

double NNfunction_sb_uLuR::synapse0x316c8a0() {
   return (neuron0x31440b0()*0.00201909);
}

double NNfunction_sb_uLuR::synapse0x316c8e0() {
   return (neuron0x31443f0()*0.0638384);
}

double NNfunction_sb_uLuR::synapse0x316c920() {
   return (neuron0x3144730()*0.0601724);
}

double NNfunction_sb_uLuR::synapse0x316c960() {
   return (neuron0x3144a70()*0.0760361);
}

double NNfunction_sb_uLuR::synapse0x316c9a0() {
   return (neuron0x3144db0()*0.235255);
}

double NNfunction_sb_uLuR::synapse0x316c9e0() {
   return (neuron0x31450f0()*-0.0181494);
}

double NNfunction_sb_uLuR::synapse0x316ca20() {
   return (neuron0x3145430()*0.111734);
}

double NNfunction_sb_uLuR::synapse0x316ca60() {
   return (neuron0x3145770()*-0.146703);
}

double NNfunction_sb_uLuR::synapse0x316caa0() {
   return (neuron0x3145ab0()*0.0376385);
}

double NNfunction_sb_uLuR::synapse0x316cae0() {
   return (neuron0x3145df0()*-0.0968552);
}

double NNfunction_sb_uLuR::synapse0x316cb20() {
   return (neuron0x3146130()*-0.378086);
}

double NNfunction_sb_uLuR::synapse0x316cb60() {
   return (neuron0x3146470()*-0.0871871);
}

double NNfunction_sb_uLuR::synapse0x316c5f0() {
   return (neuron0x31467b0()*0.14611);
}

double NNfunction_sb_uLuR::synapse0x316c630() {
   return (neuron0x3146d10()*-0.109235);
}

double NNfunction_sb_uLuR::synapse0x316ccb0() {
   return (neuron0x3146f30()*-0.075774);
}

double NNfunction_sb_uLuR::synapse0x316ccf0() {
   return (neuron0x3147270()*-0.141977);
}

double NNfunction_sb_uLuR::synapse0x316cd30() {
   return (neuron0x31475b0()*0.0106761);
}

double NNfunction_sb_uLuR::synapse0x316cd70() {
   return (neuron0x31478f0()*0.0480561);
}

double NNfunction_sb_uLuR::synapse0x316cdb0() {
   return (neuron0x3147c30()*-0.206653);
}

double NNfunction_sb_uLuR::synapse0x316cdf0() {
   return (neuron0x3147f70()*0.0719216);
}

double NNfunction_sb_uLuR::synapse0x2f0cd00() {
   return (neuron0x31483e0()*-0.427273);
}

double NNfunction_sb_uLuR::synapse0x2f0cd40() {
   return (neuron0x3148d30()*0.472372);
}

double NNfunction_sb_uLuR::synapse0x314a8a0() {
   return (neuron0x3149810()*0.477188);
}

double NNfunction_sb_uLuR::synapse0x314a8e0() {
   return (neuron0x31492b0()*-2.23931);
}

double NNfunction_sb_uLuR::synapse0x314b270() {
   return (neuron0x314a5f0()*1.14518);
}

double NNfunction_sb_uLuR::synapse0x314b2b0() {
   return (neuron0x314afc0()*0.239217);
}

double NNfunction_sb_uLuR::synapse0x314c040() {
   return (neuron0x314bd90()*-1.13814);
}

double NNfunction_sb_uLuR::synapse0x314c080() {
   return (neuron0x314c760()*1.03629);
}

double NNfunction_sb_uLuR::synapse0x314ca10() {
   return (neuron0x314d130()*-0.36484);
}

double NNfunction_sb_uLuR::synapse0x314ca50() {
   return (neuron0x314dc10()*0.44884);
}

double NNfunction_sb_uLuR::synapse0x314d3e0() {
   return (neuron0x314e5e0()*0.268982);
}

double NNfunction_sb_uLuR::synapse0x314d420() {
   return (neuron0x314b6c0()*-1.09743);
}

double NNfunction_sb_uLuR::synapse0x314dec0() {
   return (neuron0x3150190()*-0.913144);
}

double NNfunction_sb_uLuR::synapse0x314df00() {
   return (neuron0x3150b60()*-0.412934);
}

double NNfunction_sb_uLuR::synapse0x314e890() {
   return (neuron0x3151530()*0.56755);
}

double NNfunction_sb_uLuR::synapse0x314e8d0() {
   return (neuron0x3151f00()*7.06672);
}

double NNfunction_sb_uLuR::synapse0x314b970() {
   return (neuron0x3153d10()*0.620936);
}

double NNfunction_sb_uLuR::synapse0x314b9b0() {
   return (neuron0x3153ff0()*0.244683);
}

double NNfunction_sb_uLuR::synapse0x3150440() {
   return (neuron0x31549c0()*0.610816);
}

double NNfunction_sb_uLuR::synapse0x3150480() {
   return (neuron0x3155390()*-0.338308);
}

double NNfunction_sb_uLuR::synapse0x3150e10() {
   return (neuron0x3155d60()*-0.793471);
}

double NNfunction_sb_uLuR::synapse0x3150e50() {
   return (neuron0x3156730()*-0.402444);
}

double NNfunction_sb_uLuR::synapse0x31517e0() {
   return (neuron0x314f280()*-0.490727);
}

double NNfunction_sb_uLuR::synapse0x3151820() {
   return (neuron0x314fc50()*1.24926);
}

double NNfunction_sb_uLuR::synapse0x31521b0() {
   return (neuron0x31594c0()*-1.29995);
}

double NNfunction_sb_uLuR::synapse0x31521f0() {
   return (neuron0x3159e90()*-0.859312);
}

double NNfunction_sb_uLuR::synapse0x3146350() {
   return (neuron0x315a860()*-0.57809);
}

double NNfunction_sb_uLuR::synapse0x3146390() {
   return (neuron0x315b230()*0.0459985);
}

double NNfunction_sb_uLuR::synapse0x31542a0() {
   return (neuron0x315bc00()*-2.34066);
}

double NNfunction_sb_uLuR::synapse0x31542e0() {
   return (neuron0x315c5d0()*-0.690579);
}

double NNfunction_sb_uLuR::synapse0x3154c70() {
   return (neuron0x315cfa0()*0.668632);
}

double NNfunction_sb_uLuR::synapse0x3154cb0() {
   return (neuron0x315d970()*-1.04598);
}

double NNfunction_sb_uLuR::synapse0x3155640() {
   return (neuron0x3153a00()*0.711818);
}

double NNfunction_sb_uLuR::synapse0x3155680() {
   return (neuron0x3160550()*0.704958);
}

double NNfunction_sb_uLuR::synapse0x3156010() {
   return (neuron0x3160f20()*-0.418357);
}

double NNfunction_sb_uLuR::synapse0x3156050() {
   return (neuron0x31618f0()*-0.643096);
}

double NNfunction_sb_uLuR::synapse0x31569e0() {
   return (neuron0x31622c0()*-0.365889);
}

double NNfunction_sb_uLuR::synapse0x3156a20() {
   return (neuron0x3162c90()*-0.575849);
}

double NNfunction_sb_uLuR::synapse0x314f530() {
   return (neuron0x3163660()*0.482749);
}

double NNfunction_sb_uLuR::synapse0x314f570() {
   return (neuron0x3164030()*0.528554);
}

double NNfunction_sb_uLuR::synapse0x3158de0() {
   return (neuron0x3164a00()*0.419971);
}

double NNfunction_sb_uLuR::synapse0x3158e20() {
   return (neuron0x31655e0()*-0.0583645);
}

double NNfunction_sb_uLuR::synapse0x3159770() {
   return (neuron0x3165fb0()*-0.019714);
}

double NNfunction_sb_uLuR::synapse0x31597b0() {
   return (neuron0x3156e30()*0.134112);
}

double NNfunction_sb_uLuR::synapse0x315a140() {
   return (neuron0x3157800()*-0.313601);
}

double NNfunction_sb_uLuR::synapse0x315a180() {
   return (neuron0x31581d0()*2.57057);
}

double NNfunction_sb_uLuR::synapse0x315ab10() {
   return (neuron0x316a810()*-0.377401);
}

double NNfunction_sb_uLuR::synapse0x315ab50() {
   return (neuron0x316b0c0()*-0.0513116);
}

double NNfunction_sb_uLuR::synapse0x315b4e0() {
   return (neuron0x316ba90()*0.291472);
}

double NNfunction_sb_uLuR::synapse0x315b520() {
   return (neuron0x316c460()*-0.747244);
}

double NNfunction_sb_uLuR::synapse0x315dc20() {
   return (neuron0x31483e0()*-0.0705174);
}

double NNfunction_sb_uLuR::synapse0x315dc60() {
   return (neuron0x3148d30()*-0.0141432);
}

double NNfunction_sb_uLuR::synapse0x31531e0() {
   return (neuron0x3149810()*0.032287);
}

double NNfunction_sb_uLuR::synapse0x3153220() {
   return (neuron0x31492b0()*0.0998646);
}

double NNfunction_sb_uLuR::synapse0x3160800() {
   return (neuron0x314a5f0()*-0.11532);
}

double NNfunction_sb_uLuR::synapse0x3160840() {
   return (neuron0x314afc0()*0.269848);
}

double NNfunction_sb_uLuR::synapse0x31611d0() {
   return (neuron0x314bd90()*-0.129466);
}

double NNfunction_sb_uLuR::synapse0x3161210() {
   return (neuron0x314c760()*-0.0790451);
}

double NNfunction_sb_uLuR::synapse0x3161ba0() {
   return (neuron0x314d130()*-0.0354295);
}

double NNfunction_sb_uLuR::synapse0x3161be0() {
   return (neuron0x314dc10()*0.0485176);
}

double NNfunction_sb_uLuR::synapse0x3162570() {
   return (neuron0x314e5e0()*-0.239441);
}

double NNfunction_sb_uLuR::synapse0x31625b0() {
   return (neuron0x314b6c0()*-0.0945741);
}

double NNfunction_sb_uLuR::synapse0x3162f40() {
   return (neuron0x3150190()*1.66641);
}

double NNfunction_sb_uLuR::synapse0x3162f80() {
   return (neuron0x3150b60()*-0.0582195);
}

double NNfunction_sb_uLuR::synapse0x3163910() {
   return (neuron0x3151530()*0.0512411);
}

double NNfunction_sb_uLuR::synapse0x3163950() {
   return (neuron0x3151f00()*0.710024);
}

double NNfunction_sb_uLuR::synapse0x31642e0() {
   return (neuron0x3153d10()*-0.533771);
}

double NNfunction_sb_uLuR::synapse0x3164320() {
   return (neuron0x3153ff0()*-1.49659);
}

double NNfunction_sb_uLuR::synapse0x3164cb0() {
   return (neuron0x31549c0()*0.0616677);
}

double NNfunction_sb_uLuR::synapse0x3164cf0() {
   return (neuron0x3155390()*0.218267);
}

double NNfunction_sb_uLuR::synapse0x3165890() {
   return (neuron0x3155d60()*-0.0865101);
}

double NNfunction_sb_uLuR::synapse0x31658d0() {
   return (neuron0x3156730()*-0.11995);
}

double NNfunction_sb_uLuR::synapse0x3166260() {
   return (neuron0x314f280()*0.0214153);
}

double NNfunction_sb_uLuR::synapse0x31662a0() {
   return (neuron0x314fc50()*-1.00458);
}

double NNfunction_sb_uLuR::synapse0x31570e0() {
   return (neuron0x31594c0()*-0.269707);
}

double NNfunction_sb_uLuR::synapse0x3157120() {
   return (neuron0x3159e90()*-0.21875);
}

double NNfunction_sb_uLuR::synapse0x3157ab0() {
   return (neuron0x315a860()*-0.362841);
}

double NNfunction_sb_uLuR::synapse0x3157af0() {
   return (neuron0x315b230()*0.116037);
}

double NNfunction_sb_uLuR::synapse0x3158480() {
   return (neuron0x315bc00()*-1.11564);
}

double NNfunction_sb_uLuR::synapse0x31584c0() {
   return (neuron0x315c5d0()*-0.0678399);
}

double NNfunction_sb_uLuR::synapse0x316a9a0() {
   return (neuron0x315cfa0()*0.0640457);
}

double NNfunction_sb_uLuR::synapse0x316a9e0() {
   return (neuron0x315d970()*0.288844);
}

double NNfunction_sb_uLuR::synapse0x316b370() {
   return (neuron0x3153a00()*0.120194);
}

double NNfunction_sb_uLuR::synapse0x316b3b0() {
   return (neuron0x3160550()*0.0957599);
}

double NNfunction_sb_uLuR::synapse0x316bd40() {
   return (neuron0x3160f20()*-0.0685399);
}

double NNfunction_sb_uLuR::synapse0x316bd80() {
   return (neuron0x31618f0()*-0.0546554);
}

double NNfunction_sb_uLuR::synapse0x316c710() {
   return (neuron0x31622c0()*0.105221);
}

double NNfunction_sb_uLuR::synapse0x316c750() {
   return (neuron0x3162c90()*-0.0441034);
}

double NNfunction_sb_uLuR::synapse0x3148600() {
   return (neuron0x3163660()*0.0900491);
}

double NNfunction_sb_uLuR::synapse0x3148640() {
   return (neuron0x3164030()*-0.212786);
}

double NNfunction_sb_uLuR::synapse0x315beb0() {
   return (neuron0x3164a00()*0.0437369);
}

double NNfunction_sb_uLuR::synapse0x315bef0() {
   return (neuron0x31655e0()*0.00409935);
}

double NNfunction_sb_uLuR::synapse0x316ce30() {
   return (neuron0x3165fb0()*0.0755884);
}

double NNfunction_sb_uLuR::synapse0x316ce70() {
   return (neuron0x3156e30()*-0.144817);
}

double NNfunction_sb_uLuR::synapse0x316ceb0() {
   return (neuron0x3157800()*-0.0132375);
}

double NNfunction_sb_uLuR::synapse0x316cef0() {
   return (neuron0x31581d0()*0.217904);
}

double NNfunction_sb_uLuR::synapse0x3173da0() {
   return (neuron0x316a810()*0.0128038);
}

double NNfunction_sb_uLuR::synapse0x3173de0() {
   return (neuron0x316b0c0()*0.0787823);
}

double NNfunction_sb_uLuR::synapse0x3173e20() {
   return (neuron0x316ba90()*0.0681874);
}

double NNfunction_sb_uLuR::synapse0x3173e60() {
   return (neuron0x316c460()*-0.052189);
}

double NNfunction_sb_uLuR::synapse0x31741e0() {
   return (neuron0x31483e0()*-0.125067);
}

double NNfunction_sb_uLuR::synapse0x3174220() {
   return (neuron0x3148d30()*-0.993388);
}

double NNfunction_sb_uLuR::synapse0x3174260() {
   return (neuron0x3149810()*0.192134);
}

double NNfunction_sb_uLuR::synapse0x31742a0() {
   return (neuron0x31492b0()*-0.173262);
}

double NNfunction_sb_uLuR::synapse0x31742e0() {
   return (neuron0x314a5f0()*1.00072);
}

double NNfunction_sb_uLuR::synapse0x3174320() {
   return (neuron0x314afc0()*0.866507);
}

double NNfunction_sb_uLuR::synapse0x3174360() {
   return (neuron0x314bd90()*-0.22373);
}

double NNfunction_sb_uLuR::synapse0x31743a0() {
   return (neuron0x314c760()*0.313029);
}

double NNfunction_sb_uLuR::synapse0x31743e0() {
   return (neuron0x314d130()*-0.088825);
}

double NNfunction_sb_uLuR::synapse0x3174420() {
   return (neuron0x314dc10()*0.107797);
}

double NNfunction_sb_uLuR::synapse0x3174460() {
   return (neuron0x314e5e0()*-0.410216);
}

double NNfunction_sb_uLuR::synapse0x31744a0() {
   return (neuron0x314b6c0()*-0.31847);
}

double NNfunction_sb_uLuR::synapse0x31744e0() {
   return (neuron0x3150190()*0.459557);
}

double NNfunction_sb_uLuR::synapse0x3174520() {
   return (neuron0x3150b60()*-0.161624);
}

double NNfunction_sb_uLuR::synapse0x3174560() {
   return (neuron0x3151530()*0.151592);
}

double NNfunction_sb_uLuR::synapse0x31745a0() {
   return (neuron0x3151f00()*1.76117);
}

double NNfunction_sb_uLuR::synapse0x3174030() {
   return (neuron0x3153d10()*-0.993563);
}

double NNfunction_sb_uLuR::synapse0x3174070() {
   return (neuron0x3153ff0()*-1.08606);
}

double NNfunction_sb_uLuR::synapse0x31746f0() {
   return (neuron0x31549c0()*0.128727);
}

double NNfunction_sb_uLuR::synapse0x3174730() {
   return (neuron0x3155390()*0.526159);
}

double NNfunction_sb_uLuR::synapse0x3174770() {
   return (neuron0x3155d60()*-0.331173);
}

double NNfunction_sb_uLuR::synapse0x31747b0() {
   return (neuron0x3156730()*-0.105066);
}

double NNfunction_sb_uLuR::synapse0x31747f0() {
   return (neuron0x314f280()*-0.343573);
}

double NNfunction_sb_uLuR::synapse0x3174830() {
   return (neuron0x314fc50()*-0.803297);
}

double NNfunction_sb_uLuR::synapse0x3174870() {
   return (neuron0x31594c0()*-0.364266);
}

double NNfunction_sb_uLuR::synapse0x31748b0() {
   return (neuron0x3159e90()*-0.00268582);
}

double NNfunction_sb_uLuR::synapse0x31748f0() {
   return (neuron0x315a860()*3.3481);
}

double NNfunction_sb_uLuR::synapse0x3174930() {
   return (neuron0x315b230()*0.965464);
}

double NNfunction_sb_uLuR::synapse0x3174970() {
   return (neuron0x315bc00()*2.01667);
}

double NNfunction_sb_uLuR::synapse0x31749b0() {
   return (neuron0x315c5d0()*-0.196053);
}

double NNfunction_sb_uLuR::synapse0x31749f0() {
   return (neuron0x315cfa0()*0.216222);
}

double NNfunction_sb_uLuR::synapse0x3174a30() {
   return (neuron0x315d970()*0.629836);
}

double NNfunction_sb_uLuR::synapse0x31745e0() {
   return (neuron0x3153a00()*0.515212);
}

double NNfunction_sb_uLuR::synapse0x3174620() {
   return (neuron0x3160550()*0.119314);
}

double NNfunction_sb_uLuR::synapse0x3174660() {
   return (neuron0x3160f20()*-0.129382);
}

double NNfunction_sb_uLuR::synapse0x31746a0() {
   return (neuron0x31618f0()*0.0358503);
}

double NNfunction_sb_uLuR::synapse0x3174c80() {
   return (neuron0x31622c0()*0.262034);
}

double NNfunction_sb_uLuR::synapse0x3174cc0() {
   return (neuron0x3162c90()*-0.136873);
}

double NNfunction_sb_uLuR::synapse0x3174d00() {
   return (neuron0x3163660()*0.141755);
}

double NNfunction_sb_uLuR::synapse0x3174d40() {
   return (neuron0x3164030()*0.438466);
}

double NNfunction_sb_uLuR::synapse0x3174d80() {
   return (neuron0x3164a00()*0.141565);
}

double NNfunction_sb_uLuR::synapse0x3174dc0() {
   return (neuron0x31655e0()*-0.0282115);
}

double NNfunction_sb_uLuR::synapse0x3174e00() {
   return (neuron0x3165fb0()*-0.0529864);
}

double NNfunction_sb_uLuR::synapse0x3174e40() {
   return (neuron0x3156e30()*-2.00579);
}

double NNfunction_sb_uLuR::synapse0x3174e80() {
   return (neuron0x3157800()*-0.0459783);
}

double NNfunction_sb_uLuR::synapse0x3174ec0() {
   return (neuron0x31581d0()*-0.879446);
}

double NNfunction_sb_uLuR::synapse0x3174f00() {
   return (neuron0x316a810()*-0.138406);
}

double NNfunction_sb_uLuR::synapse0x3174f40() {
   return (neuron0x316b0c0()*0.0198707);
}

double NNfunction_sb_uLuR::synapse0x3174f80() {
   return (neuron0x316ba90()*0.0662462);
}

double NNfunction_sb_uLuR::synapse0x3174fc0() {
   return (neuron0x316c460()*-0.270225);
}

double NNfunction_sb_uLuR::synapse0x3175340() {
   return (neuron0x31483e0()*0.219491);
}

double NNfunction_sb_uLuR::synapse0x3175380() {
   return (neuron0x3148d30()*-1.75402);
}

double NNfunction_sb_uLuR::synapse0x31753c0() {
   return (neuron0x3149810()*-0.417596);
}

double NNfunction_sb_uLuR::synapse0x3175400() {
   return (neuron0x31492b0()*-0.751869);
}

double NNfunction_sb_uLuR::synapse0x3175440() {
   return (neuron0x314a5f0()*2.02537);
}

double NNfunction_sb_uLuR::synapse0x3175480() {
   return (neuron0x314afc0()*1.2491);
}

double NNfunction_sb_uLuR::synapse0x31754c0() {
   return (neuron0x314bd90()*0.0850822);
}

double NNfunction_sb_uLuR::synapse0x3175500() {
   return (neuron0x314c760()*-0.689944);
}

double NNfunction_sb_uLuR::synapse0x3175540() {
   return (neuron0x314d130()*0.149522);
}

double NNfunction_sb_uLuR::synapse0x3175580() {
   return (neuron0x314dc10()*-0.327648);
}

double NNfunction_sb_uLuR::synapse0x31755c0() {
   return (neuron0x314e5e0()*-0.555456);
}

double NNfunction_sb_uLuR::synapse0x3175600() {
   return (neuron0x314b6c0()*-0.823651);
}

double NNfunction_sb_uLuR::synapse0x3175640() {
   return (neuron0x3150190()*1.44455);
}

double NNfunction_sb_uLuR::synapse0x3175680() {
   return (neuron0x3150b60()*0.250894);
}

double NNfunction_sb_uLuR::synapse0x31756c0() {
   return (neuron0x3151530()*-0.417431);
}

double NNfunction_sb_uLuR::synapse0x3175700() {
   return (neuron0x3151f00()*1.56543);
}

double NNfunction_sb_uLuR::synapse0x3175190() {
   return (neuron0x3153d10()*-1.48633);
}

double NNfunction_sb_uLuR::synapse0x31751d0() {
   return (neuron0x3153ff0()*-0.672548);
}

double NNfunction_sb_uLuR::synapse0x3175850() {
   return (neuron0x31549c0()*-0.0279344);
}

double NNfunction_sb_uLuR::synapse0x3175890() {
   return (neuron0x3155390()*-0.183355);
}

double NNfunction_sb_uLuR::synapse0x31758d0() {
   return (neuron0x3155d60()*0.17416);
}

double NNfunction_sb_uLuR::synapse0x3175910() {
   return (neuron0x3156730()*-0.0197864);
}

double NNfunction_sb_uLuR::synapse0x3175950() {
   return (neuron0x314f280()*0.797538);
}

double NNfunction_sb_uLuR::synapse0x3175990() {
   return (neuron0x314fc50()*-0.954987);
}

double NNfunction_sb_uLuR::synapse0x31759d0() {
   return (neuron0x31594c0()*1.09634);
}

double NNfunction_sb_uLuR::synapse0x3175a10() {
   return (neuron0x3159e90()*0.155502);
}

double NNfunction_sb_uLuR::synapse0x3175a50() {
   return (neuron0x315a860()*1.83529);
}

double NNfunction_sb_uLuR::synapse0x3175a90() {
   return (neuron0x315b230()*1.39549);
}

double NNfunction_sb_uLuR::synapse0x3175ad0() {
   return (neuron0x315bc00()*1.10806);
}

double NNfunction_sb_uLuR::synapse0x3175b10() {
   return (neuron0x315c5d0()*0.43947);
}

double NNfunction_sb_uLuR::synapse0x3175b50() {
   return (neuron0x315cfa0()*0.150464);
}

double NNfunction_sb_uLuR::synapse0x3175b90() {
   return (neuron0x315d970()*1.70504);
}

double NNfunction_sb_uLuR::synapse0x3175740() {
   return (neuron0x3153a00()*2.0139);
}

double NNfunction_sb_uLuR::synapse0x3175780() {
   return (neuron0x3160550()*0.00910002);
}

double NNfunction_sb_uLuR::synapse0x31757c0() {
   return (neuron0x3160f20()*0.348274);
}

double NNfunction_sb_uLuR::synapse0x3175800() {
   return (neuron0x31618f0()*-1.50732);
}

double NNfunction_sb_uLuR::synapse0x3175de0() {
   return (neuron0x31622c0()*1.18642);
}

double NNfunction_sb_uLuR::synapse0x3175e20() {
   return (neuron0x3162c90()*-0.195614);
}

double NNfunction_sb_uLuR::synapse0x3175e60() {
   return (neuron0x3163660()*0.558121);
}

double NNfunction_sb_uLuR::synapse0x3175ea0() {
   return (neuron0x3164030()*0.699555);
}

double NNfunction_sb_uLuR::synapse0x3175ee0() {
   return (neuron0x3164a00()*-0.242017);
}

double NNfunction_sb_uLuR::synapse0x3175f20() {
   return (neuron0x31655e0()*-0.850591);
}

double NNfunction_sb_uLuR::synapse0x3175f60() {
   return (neuron0x3165fb0()*0.712038);
}

double NNfunction_sb_uLuR::synapse0x3175fa0() {
   return (neuron0x3156e30()*-0.374844);
}

double NNfunction_sb_uLuR::synapse0x3175fe0() {
   return (neuron0x3157800()*0.351916);
}

double NNfunction_sb_uLuR::synapse0x3176020() {
   return (neuron0x31581d0()*-4.45034);
}

double NNfunction_sb_uLuR::synapse0x3176060() {
   return (neuron0x316a810()*0.44331);
}

double NNfunction_sb_uLuR::synapse0x31760a0() {
   return (neuron0x316b0c0()*0.714853);
}

double NNfunction_sb_uLuR::synapse0x31760e0() {
   return (neuron0x316ba90()*0.474586);
}

double NNfunction_sb_uLuR::synapse0x3176120() {
   return (neuron0x316c460()*1.3311);
}

double NNfunction_sb_uLuR::synapse0x31764a0() {
   return (neuron0x31483e0()*-0.0865647);
}

double NNfunction_sb_uLuR::synapse0x31764e0() {
   return (neuron0x3148d30()*0.0100195);
}

double NNfunction_sb_uLuR::synapse0x3176520() {
   return (neuron0x3149810()*-0.00951215);
}

double NNfunction_sb_uLuR::synapse0x3176560() {
   return (neuron0x31492b0()*-0.172614);
}

double NNfunction_sb_uLuR::synapse0x31765a0() {
   return (neuron0x314a5f0()*-0.0603232);
}

double NNfunction_sb_uLuR::synapse0x31765e0() {
   return (neuron0x314afc0()*-1.16838);
}

double NNfunction_sb_uLuR::synapse0x3176620() {
   return (neuron0x314bd90()*-0.263898);
}

double NNfunction_sb_uLuR::synapse0x3176660() {
   return (neuron0x314c760()*0.459671);
}

double NNfunction_sb_uLuR::synapse0x31766a0() {
   return (neuron0x314d130()*-0.0387202);
}

double NNfunction_sb_uLuR::synapse0x31766e0() {
   return (neuron0x314dc10()*0.0371049);
}

double NNfunction_sb_uLuR::synapse0x3176720() {
   return (neuron0x314e5e0()*-0.418349);
}

double NNfunction_sb_uLuR::synapse0x3176760() {
   return (neuron0x314b6c0()*-0.163916);
}

double NNfunction_sb_uLuR::synapse0x31767a0() {
   return (neuron0x3150190()*-1.47078);
}

double NNfunction_sb_uLuR::synapse0x31767e0() {
   return (neuron0x3150b60()*-0.0402137);
}

double NNfunction_sb_uLuR::synapse0x3176820() {
   return (neuron0x3151530()*0.067406);
}

double NNfunction_sb_uLuR::synapse0x3176860() {
   return (neuron0x3151f00()*-0.54769);
}

double NNfunction_sb_uLuR::synapse0x31762f0() {
   return (neuron0x3153d10()*0.250783);
}

double NNfunction_sb_uLuR::synapse0x3176330() {
   return (neuron0x3153ff0()*0.512095);
}

double NNfunction_sb_uLuR::synapse0x31769b0() {
   return (neuron0x31549c0()*0.0803441);
}

double NNfunction_sb_uLuR::synapse0x31769f0() {
   return (neuron0x3155390()*-0.381968);
}

double NNfunction_sb_uLuR::synapse0x3176a30() {
   return (neuron0x3155d60()*-0.201651);
}

double NNfunction_sb_uLuR::synapse0x3176a70() {
   return (neuron0x3156730()*-0.211278);
}

double NNfunction_sb_uLuR::synapse0x3176ab0() {
   return (neuron0x314f280()*0.0113134);
}

double NNfunction_sb_uLuR::synapse0x3176af0() {
   return (neuron0x314fc50()*0.792702);
}

double NNfunction_sb_uLuR::synapse0x3176b30() {
   return (neuron0x31594c0()*-0.254419);
}

double NNfunction_sb_uLuR::synapse0x3176b70() {
   return (neuron0x3159e90()*-0.0945285);
}

double NNfunction_sb_uLuR::synapse0x3176bb0() {
   return (neuron0x315a860()*-0.642401);
}

double NNfunction_sb_uLuR::synapse0x3176bf0() {
   return (neuron0x315b230()*-0.0312255);
}

double NNfunction_sb_uLuR::synapse0x3176c30() {
   return (neuron0x315bc00()*-1.80907);
}

double NNfunction_sb_uLuR::synapse0x3176c70() {
   return (neuron0x315c5d0()*-0.061873);
}

double NNfunction_sb_uLuR::synapse0x3176cb0() {
   return (neuron0x315cfa0()*0.0971805);
}

double NNfunction_sb_uLuR::synapse0x3176cf0() {
   return (neuron0x315d970()*-0.530111);
}

double NNfunction_sb_uLuR::synapse0x31768a0() {
   return (neuron0x3153a00()*0.00327126);
}

double NNfunction_sb_uLuR::synapse0x31768e0() {
   return (neuron0x3160550()*0.150042);
}

double NNfunction_sb_uLuR::synapse0x3176920() {
   return (neuron0x3160f20()*-0.0964203);
}

double NNfunction_sb_uLuR::synapse0x3176960() {
   return (neuron0x31618f0()*-0.188583);
}

double NNfunction_sb_uLuR::synapse0x3176f40() {
   return (neuron0x31622c0()*-0.13783);
}

double NNfunction_sb_uLuR::synapse0x3176f80() {
   return (neuron0x3162c90()*-0.0888574);
}

double NNfunction_sb_uLuR::synapse0x3176fc0() {
   return (neuron0x3163660()*0.175294);
}

double NNfunction_sb_uLuR::synapse0x3177000() {
   return (neuron0x3164030()*-0.291833);
}

double NNfunction_sb_uLuR::synapse0x3177040() {
   return (neuron0x3164a00()*0.0412482);
}

double NNfunction_sb_uLuR::synapse0x3177080() {
   return (neuron0x31655e0()*-0.0485128);
}

double NNfunction_sb_uLuR::synapse0x31770c0() {
   return (neuron0x3165fb0()*0.168722);
}

double NNfunction_sb_uLuR::synapse0x3177100() {
   return (neuron0x3156e30()*5.39195);
}

double NNfunction_sb_uLuR::synapse0x3177140() {
   return (neuron0x3157800()*0.00244199);
}

double NNfunction_sb_uLuR::synapse0x3177180() {
   return (neuron0x31581d0()*1.14812);
}

double NNfunction_sb_uLuR::synapse0x31771c0() {
   return (neuron0x316a810()*0.0386342);
}

double NNfunction_sb_uLuR::synapse0x3177200() {
   return (neuron0x316b0c0()*0.177428);
}

double NNfunction_sb_uLuR::synapse0x3177240() {
   return (neuron0x316ba90()*0.121025);
}

double NNfunction_sb_uLuR::synapse0x3177280() {
   return (neuron0x316c460()*-0.148751);
}

double NNfunction_sb_uLuR::synapse0x31774e0() {
   return (neuron0x3173660()*8.37504);
}

double NNfunction_sb_uLuR::synapse0x3177520() {
   return (neuron0x3173a00()*-5.95002);
}

double NNfunction_sb_uLuR::synapse0x3177560() {
   return (neuron0x3173ea0()*-4.36274);
}

double NNfunction_sb_uLuR::synapse0x31775a0() {
   return (neuron0x3175000()*-5.03342);
}

double NNfunction_sb_uLuR::synapse0x31775e0() {
   return (neuron0x3176160()*7.2983);
}

