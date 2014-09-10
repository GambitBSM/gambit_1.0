#include "NNfunction_ng_chiPlus2.h"
#include <cmath>

double NNfunction_ng_chiPlus2::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.9277)/15.0092;
   input1 = (in1 - 25.4813)/939.925;
   input2 = (in2 - 395.965)/433.888;
   input3 = (in3 - 151.924)/649.356;
   input4 = (in4 - 942.114)/823.854;
   input5 = (in5 - 887.78)/863.366;
   input6 = (in6 - 893.171)/863.387;
   input7 = (in7 - 886.542)/840.733;
   input8 = (in8 - 903.509)/884.568;
   input9 = (in9 - 895.261)/874.778;
   input10 = (in10 - 898.188)/855.942;
   input11 = (in11 - 722.858)/702.595;
   input12 = (in12 - 816.821)/791.978;
   input13 = (in13 - 598.149)/512.502;
   input14 = (in14 - 816.948)/757.552;
   input15 = (in15 - 819.615)/759.545;
   input16 = (in16 - 569.951)/500.072;
   input17 = (in17 - 844.778)/820.345;
   input18 = (in18 - 842.289)/819.372;
   input19 = (in19 - 829.926)/770.011;
   input20 = (in20 - -121.77)/442.565;
   input21 = (in21 - -157.639)/978.073;
   input22 = (in22 - 2.29778)/1009.29;
   input23 = (in23 - -31.8034)/321.219;
   switch(index) {
     case 0:
         return neuron0x3638380();
     default:
         return 0.;
   }
}

double NNfunction_ng_chiPlus2::Value(int index, double* input) {
   input0 = (input[0] - 23.9277)/15.0092;
   input1 = (input[1] - 25.4813)/939.925;
   input2 = (input[2] - 395.965)/433.888;
   input3 = (input[3] - 151.924)/649.356;
   input4 = (input[4] - 942.114)/823.854;
   input5 = (input[5] - 887.78)/863.366;
   input6 = (input[6] - 893.171)/863.387;
   input7 = (input[7] - 886.542)/840.733;
   input8 = (input[8] - 903.509)/884.568;
   input9 = (input[9] - 895.261)/874.778;
   input10 = (input[10] - 898.188)/855.942;
   input11 = (input[11] - 722.858)/702.595;
   input12 = (input[12] - 816.821)/791.978;
   input13 = (input[13] - 598.149)/512.502;
   input14 = (input[14] - 816.948)/757.552;
   input15 = (input[15] - 819.615)/759.545;
   input16 = (input[16] - 569.951)/500.072;
   input17 = (input[17] - 844.778)/820.345;
   input18 = (input[18] - 842.289)/819.372;
   input19 = (input[19] - 829.926)/770.011;
   input20 = (input[20] - -121.77)/442.565;
   input21 = (input[21] - -157.639)/978.073;
   input22 = (input[22] - 2.29778)/1009.29;
   input23 = (input[23] - -31.8034)/321.219;
   switch(index) {
     case 0:
         return neuron0x3638380();
     default:
         return 0.;
   }
}

double NNfunction_ng_chiPlus2::neuron0x36033f0() {
   return input0;
}

double NNfunction_ng_chiPlus2::neuron0x36036a0() {
   return input1;
}

double NNfunction_ng_chiPlus2::neuron0x36039e0() {
   return input2;
}

double NNfunction_ng_chiPlus2::neuron0x3603d20() {
   return input3;
}

double NNfunction_ng_chiPlus2::neuron0x3604060() {
   return input4;
}

double NNfunction_ng_chiPlus2::neuron0x36043a0() {
   return input5;
}

double NNfunction_ng_chiPlus2::neuron0x36046e0() {
   return input6;
}

double NNfunction_ng_chiPlus2::neuron0x3604a20() {
   return input7;
}

double NNfunction_ng_chiPlus2::neuron0x3604d60() {
   return input8;
}

double NNfunction_ng_chiPlus2::neuron0x36050a0() {
   return input9;
}

double NNfunction_ng_chiPlus2::neuron0x36053e0() {
   return input10;
}

double NNfunction_ng_chiPlus2::neuron0x3605720() {
   return input11;
}

double NNfunction_ng_chiPlus2::neuron0x3605a60() {
   return input12;
}

double NNfunction_ng_chiPlus2::neuron0x3605da0() {
   return input13;
}

double NNfunction_ng_chiPlus2::neuron0x36060e0() {
   return input14;
}

double NNfunction_ng_chiPlus2::neuron0x3606420() {
   return input15;
}

double NNfunction_ng_chiPlus2::neuron0x3606760() {
   return input16;
}

double NNfunction_ng_chiPlus2::neuron0x3606cc0() {
   return input17;
}

double NNfunction_ng_chiPlus2::neuron0x3607000() {
   return input18;
}

double NNfunction_ng_chiPlus2::neuron0x3607340() {
   return input19;
}

double NNfunction_ng_chiPlus2::neuron0x3607680() {
   return input20;
}

double NNfunction_ng_chiPlus2::neuron0x36079c0() {
   return input21;
}

double NNfunction_ng_chiPlus2::neuron0x3607d00() {
   return input22;
}

double NNfunction_ng_chiPlus2::neuron0x3608040() {
   return input23;
}

double NNfunction_ng_chiPlus2::input0x36084b0() {
   double input = -0.272272;
   input += synapse0x36087f0();
   input += synapse0x3608830();
   input += synapse0x3608870();
   input += synapse0x36088b0();
   input += synapse0x36088f0();
   input += synapse0x3608930();
   input += synapse0x3608970();
   input += synapse0x36089b0();
   input += synapse0x36089f0();
   input += synapse0x3608a30();
   input += synapse0x3608a70();
   input += synapse0x3608ab0();
   input += synapse0x3608af0();
   input += synapse0x3608b30();
   input += synapse0x3608b70();
   input += synapse0x3608bb0();
   input += synapse0x3608640();
   input += synapse0x3608680();
   input += synapse0x33bf800();
   input += synapse0x33bf840();
   input += synapse0x3608bf0();
   input += synapse0x3608c30();
   input += synapse0x3608c70();
   input += synapse0x3608cb0();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x36084b0() {
   double input = input0x36084b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3608cf0() {
   double input = 0.435732;
   input += synapse0x3609030();
   input += synapse0x3609070();
   input += synapse0x36090b0();
   input += synapse0x36090f0();
   input += synapse0x3609130();
   input += synapse0x3609170();
   input += synapse0x36091b0();
   input += synapse0x36091f0();
   input += synapse0x3609230();
   input += synapse0x33bf650();
   input += synapse0x33bf690();
   input += synapse0x33bf6d0();
   input += synapse0x33bf710();
   input += synapse0x3609480();
   input += synapse0x36094c0();
   input += synapse0x3609500();
   input += synapse0x3608e80();
   input += synapse0x3608ec0();
   input += synapse0x3609650();
   input += synapse0x3609690();
   input += synapse0x36096d0();
   input += synapse0x3609710();
   input += synapse0x3609750();
   input += synapse0x3609790();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3608cf0() {
   double input = input0x3608cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x36097d0() {
   double input = 2.46774;
   input += synapse0x3609b10();
   input += synapse0x3609b50();
   input += synapse0x3609b90();
   input += synapse0x3609bd0();
   input += synapse0x3609c10();
   input += synapse0x3609c50();
   input += synapse0x3609c90();
   input += synapse0x3609cd0();
   input += synapse0x3609d10();
   input += synapse0x3609d50();
   input += synapse0x3609d90();
   input += synapse0x3609dd0();
   input += synapse0x3609e10();
   input += synapse0x3609e50();
   input += synapse0x3609e90();
   input += synapse0x3609ed0();
   input += synapse0x3609960();
   input += synapse0x36099a0();
   input += synapse0x33cd490();
   input += synapse0x33cd4d0();
   input += synapse0x360be00();
   input += synapse0x360be40();
   input += synapse0x3603130();
   input += synapse0x3603170();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x36097d0() {
   double input = input0x36097d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x33cdbf0() {
   double input = -0.244734;
   input += synapse0x33cdd80();
   input += synapse0x3609390();
   input += synapse0x36093d0();
   input += synapse0x3609410();
   input += synapse0x360a020();
   input += synapse0x360a060();
   input += synapse0x360a0a0();
   input += synapse0x360a0e0();
   input += synapse0x360a120();
   input += synapse0x360a160();
   input += synapse0x360a1a0();
   input += synapse0x360a1e0();
   input += synapse0x360a220();
   input += synapse0x360a260();
   input += synapse0x360a2a0();
   input += synapse0x360a2e0();
   input += synapse0x36031b0();
   input += synapse0x36031f0();
   input += synapse0x360a430();
   input += synapse0x360a470();
   input += synapse0x360a4b0();
   input += synapse0x360a4f0();
   input += synapse0x360a530();
   input += synapse0x360a570();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x33cdbf0() {
   double input = input0x33cdbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x360a5b0() {
   double input = -3.71098;
   input += synapse0x360a8f0();
   input += synapse0x360a930();
   input += synapse0x360a970();
   input += synapse0x360a9b0();
   input += synapse0x360a9f0();
   input += synapse0x360aa30();
   input += synapse0x360aa70();
   input += synapse0x360aab0();
   input += synapse0x360aaf0();
   input += synapse0x360ab30();
   input += synapse0x360ab70();
   input += synapse0x360abb0();
   input += synapse0x360abf0();
   input += synapse0x360ac30();
   input += synapse0x360ac70();
   input += synapse0x360acb0();
   input += synapse0x360ae00();
   input += synapse0x360a740();
   input += synapse0x360a780();
   input += synapse0x360bf40();
   input += synapse0x360bf80();
   input += synapse0x360bfc0();
   input += synapse0x360c000();
   input += synapse0x360c040();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x360a5b0() {
   double input = input0x360a5b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x360c080() {
   double input = -1.40751;
   input += synapse0x360c3c0();
   input += synapse0x360c400();
   input += synapse0x360c440();
   input += synapse0x360c480();
   input += synapse0x360c4c0();
   input += synapse0x360c500();
   input += synapse0x360c540();
   input += synapse0x360c580();
   input += synapse0x360c5c0();
   input += synapse0x33cd7e0();
   input += synapse0x33cd820();
   input += synapse0x33cd860();
   input += synapse0x33cd8a0();
   input += synapse0x33cd8e0();
   input += synapse0x33cd920();
   input += synapse0x33cd960();
   input += synapse0x360c210();
   input += synapse0x360c250();
   input += synapse0x33cdab0();
   input += synapse0x33cdaf0();
   input += synapse0x33cdb30();
   input += synapse0x33cdb70();
   input += synapse0x33cdbb0();
   input += synapse0x360ce10();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x360c080() {
   double input = input0x360c080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x360ce50() {
   double input = -0.313788;
   input += synapse0x360d190();
   input += synapse0x360d1d0();
   input += synapse0x360d210();
   input += synapse0x360d250();
   input += synapse0x360d290();
   input += synapse0x360d2d0();
   input += synapse0x360d310();
   input += synapse0x360d350();
   input += synapse0x360d390();
   input += synapse0x360d3d0();
   input += synapse0x360d410();
   input += synapse0x360d450();
   input += synapse0x360d490();
   input += synapse0x360d4d0();
   input += synapse0x360d510();
   input += synapse0x360d550();
   input += synapse0x360cfe0();
   input += synapse0x360d020();
   input += synapse0x360d6a0();
   input += synapse0x360d6e0();
   input += synapse0x360d720();
   input += synapse0x360d760();
   input += synapse0x360d7a0();
   input += synapse0x360d7e0();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x360ce50() {
   double input = input0x360ce50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x360d820() {
   double input = 0.270196;
   input += synapse0x360db60();
   input += synapse0x360dba0();
   input += synapse0x360dbe0();
   input += synapse0x360dc20();
   input += synapse0x360dc60();
   input += synapse0x360dca0();
   input += synapse0x360dce0();
   input += synapse0x360dd20();
   input += synapse0x360dd60();
   input += synapse0x360dda0();
   input += synapse0x360dde0();
   input += synapse0x360de20();
   input += synapse0x360de60();
   input += synapse0x360dea0();
   input += synapse0x360dee0();
   input += synapse0x360df20();
   input += synapse0x360d9b0();
   input += synapse0x360d9f0();
   input += synapse0x360e070();
   input += synapse0x360e0b0();
   input += synapse0x360e0f0();
   input += synapse0x360e130();
   input += synapse0x360e170();
   input += synapse0x360e1b0();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x360d820() {
   double input = input0x360d820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x360e1f0() {
   double input = -0.551367;
   input += synapse0x3606bb0();
   input += synapse0x3606bf0();
   input += synapse0x3606c30();
   input += synapse0x3606c70();
   input += synapse0x360e740();
   input += synapse0x360e780();
   input += synapse0x360e7c0();
   input += synapse0x360e800();
   input += synapse0x360e840();
   input += synapse0x360e880();
   input += synapse0x360e8c0();
   input += synapse0x360e900();
   input += synapse0x360e940();
   input += synapse0x360e980();
   input += synapse0x360e9c0();
   input += synapse0x360ea00();
   input += synapse0x360e380();
   input += synapse0x360e3c0();
   input += synapse0x360eb50();
   input += synapse0x360eb90();
   input += synapse0x360ebd0();
   input += synapse0x360ec10();
   input += synapse0x360ec50();
   input += synapse0x360ec90();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x360e1f0() {
   double input = input0x360e1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x360ecd0() {
   double input = -0.247526;
   input += synapse0x360f010();
   input += synapse0x360f050();
   input += synapse0x360f090();
   input += synapse0x360f0d0();
   input += synapse0x360f110();
   input += synapse0x360f150();
   input += synapse0x360f190();
   input += synapse0x360f1d0();
   input += synapse0x360f210();
   input += synapse0x360f250();
   input += synapse0x360f290();
   input += synapse0x360f2d0();
   input += synapse0x360f310();
   input += synapse0x360f350();
   input += synapse0x360f390();
   input += synapse0x360f3d0();
   input += synapse0x360ee60();
   input += synapse0x360eea0();
   input += synapse0x360f520();
   input += synapse0x360f560();
   input += synapse0x360f5a0();
   input += synapse0x360f5e0();
   input += synapse0x360f620();
   input += synapse0x360f660();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x360ecd0() {
   double input = input0x360ecd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x360f6a0() {
   double input = -0.0609917;
   input += synapse0x360f9e0();
   input += synapse0x360fa20();
   input += synapse0x360fa60();
   input += synapse0x360faa0();
   input += synapse0x360fae0();
   input += synapse0x360fb20();
   input += synapse0x360fb60();
   input += synapse0x360fba0();
   input += synapse0x360fbe0();
   input += synapse0x360fc20();
   input += synapse0x360fc60();
   input += synapse0x360fca0();
   input += synapse0x360fce0();
   input += synapse0x360fd20();
   input += synapse0x360fd60();
   input += synapse0x360fda0();
   input += synapse0x360f830();
   input += synapse0x360f870();
   input += synapse0x360c600();
   input += synapse0x360c640();
   input += synapse0x360c680();
   input += synapse0x360c6c0();
   input += synapse0x360c700();
   input += synapse0x360c740();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x360f6a0() {
   double input = input0x360f6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x360c780() {
   double input = -0.147554;
   input += synapse0x360cac0();
   input += synapse0x360cb00();
   input += synapse0x360cb40();
   input += synapse0x360cb80();
   input += synapse0x360cbc0();
   input += synapse0x360cc00();
   input += synapse0x360cc40();
   input += synapse0x360cc80();
   input += synapse0x360ccc0();
   input += synapse0x360cd00();
   input += synapse0x360cd40();
   input += synapse0x360cd80();
   input += synapse0x360cdc0();
   input += synapse0x3610f00();
   input += synapse0x3610f40();
   input += synapse0x3610f80();
   input += synapse0x360c910();
   input += synapse0x360c950();
   input += synapse0x36110d0();
   input += synapse0x3611110();
   input += synapse0x3611150();
   input += synapse0x3611190();
   input += synapse0x36111d0();
   input += synapse0x3611210();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x360c780() {
   double input = input0x360c780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3611250() {
   double input = -0.0135665;
   input += synapse0x3611590();
   input += synapse0x36115d0();
   input += synapse0x3611610();
   input += synapse0x3611650();
   input += synapse0x3611690();
   input += synapse0x36116d0();
   input += synapse0x3611710();
   input += synapse0x3611750();
   input += synapse0x3611790();
   input += synapse0x36117d0();
   input += synapse0x3611810();
   input += synapse0x3611850();
   input += synapse0x3611890();
   input += synapse0x36118d0();
   input += synapse0x3611910();
   input += synapse0x3611950();
   input += synapse0x36113e0();
   input += synapse0x3611420();
   input += synapse0x3611aa0();
   input += synapse0x3611ae0();
   input += synapse0x3611b20();
   input += synapse0x3611b60();
   input += synapse0x3611ba0();
   input += synapse0x3611be0();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3611250() {
   double input = input0x3611250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3611c20() {
   double input = -0.605698;
   input += synapse0x3611f60();
   input += synapse0x3611fa0();
   input += synapse0x3611fe0();
   input += synapse0x3612020();
   input += synapse0x3612060();
   input += synapse0x36120a0();
   input += synapse0x36120e0();
   input += synapse0x3612120();
   input += synapse0x3612160();
   input += synapse0x36121a0();
   input += synapse0x36121e0();
   input += synapse0x3612220();
   input += synapse0x3612260();
   input += synapse0x36122a0();
   input += synapse0x36122e0();
   input += synapse0x3612320();
   input += synapse0x3611db0();
   input += synapse0x3611df0();
   input += synapse0x3612470();
   input += synapse0x36124b0();
   input += synapse0x36124f0();
   input += synapse0x3612530();
   input += synapse0x3612570();
   input += synapse0x36125b0();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3611c20() {
   double input = input0x3611c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x36125f0() {
   double input = 0.150771;
   input += synapse0x3612930();
   input += synapse0x3612970();
   input += synapse0x36129b0();
   input += synapse0x36129f0();
   input += synapse0x3612a30();
   input += synapse0x3612a70();
   input += synapse0x3612ab0();
   input += synapse0x3612af0();
   input += synapse0x3612b30();
   input += synapse0x3612b70();
   input += synapse0x3612bb0();
   input += synapse0x3612bf0();
   input += synapse0x3612c30();
   input += synapse0x3612c70();
   input += synapse0x3612cb0();
   input += synapse0x3612cf0();
   input += synapse0x3612780();
   input += synapse0x36127c0();
   input += synapse0x3612e40();
   input += synapse0x3612e80();
   input += synapse0x3612ec0();
   input += synapse0x3612f00();
   input += synapse0x3612f40();
   input += synapse0x3612f80();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x36125f0() {
   double input = input0x36125f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3612fc0() {
   double input = -0.707127;
   input += synapse0x3613300();
   input += synapse0x3603580();
   input += synapse0x36035c0();
   input += synapse0x36038c0();
   input += synapse0x3603900();
   input += synapse0x3603c00();
   input += synapse0x3603c40();
   input += synapse0x3603f40();
   input += synapse0x3603f80();
   input += synapse0x3604280();
   input += synapse0x36042c0();
   input += synapse0x36045c0();
   input += synapse0x3604600();
   input += synapse0x3604900();
   input += synapse0x3604940();
   input += synapse0x3604c40();
   input += synapse0x3604c80();
   input += synapse0x3604f80();
   input += synapse0x3604fc0();
   input += synapse0x36052c0();
   input += synapse0x3605300();
   input += synapse0x3605600();
   input += synapse0x3605640();
   input += synapse0x3605940();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3612fc0() {
   double input = input0x3612fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3614dd0() {
   double input = -0.238379;
   input += synapse0x3605980();
   input += synapse0x3606640();
   input += synapse0x3606680();
   input += synapse0x3613150();
   input += synapse0x3613190();
   input += synapse0x3606980();
   input += synapse0x36069c0();
   input += synapse0x3606ee0();
   input += synapse0x3606f20();
   input += synapse0x3607220();
   input += synapse0x3607260();
   input += synapse0x3607560();
   input += synapse0x36075a0();
   input += synapse0x36078a0();
   input += synapse0x36078e0();
   input += synapse0x3607be0();
   input += synapse0x3607c20();
   input += synapse0x3607f20();
   input += synapse0x3607f60();
   input += synapse0x3608260();
   input += synapse0x36082a0();
   input += synapse0x3605c80();
   input += synapse0x3605cc0();
   input += synapse0x3615070();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3614dd0() {
   double input = input0x3614dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x36150b0() {
   double input = -2.49991;
   input += synapse0x36153f0();
   input += synapse0x3615430();
   input += synapse0x3615470();
   input += synapse0x36154b0();
   input += synapse0x36154f0();
   input += synapse0x3615530();
   input += synapse0x3615570();
   input += synapse0x36155b0();
   input += synapse0x36155f0();
   input += synapse0x3615630();
   input += synapse0x3615670();
   input += synapse0x36156b0();
   input += synapse0x36156f0();
   input += synapse0x3615730();
   input += synapse0x3615770();
   input += synapse0x36157b0();
   input += synapse0x3615240();
   input += synapse0x3615280();
   input += synapse0x3615900();
   input += synapse0x3615940();
   input += synapse0x3615980();
   input += synapse0x36159c0();
   input += synapse0x3615a00();
   input += synapse0x3615a40();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x36150b0() {
   double input = input0x36150b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3615a80() {
   double input = 0.449195;
   input += synapse0x3615dc0();
   input += synapse0x3615e00();
   input += synapse0x3615e40();
   input += synapse0x3615e80();
   input += synapse0x3615ec0();
   input += synapse0x3615f00();
   input += synapse0x3615f40();
   input += synapse0x3615f80();
   input += synapse0x3615fc0();
   input += synapse0x3616000();
   input += synapse0x3616040();
   input += synapse0x3616080();
   input += synapse0x36160c0();
   input += synapse0x3616100();
   input += synapse0x3616140();
   input += synapse0x3616180();
   input += synapse0x3615c10();
   input += synapse0x3615c50();
   input += synapse0x36162d0();
   input += synapse0x3616310();
   input += synapse0x3616350();
   input += synapse0x3616390();
   input += synapse0x36163d0();
   input += synapse0x3616410();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3615a80() {
   double input = input0x3615a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3616450() {
   double input = -0.54421;
   input += synapse0x3616790();
   input += synapse0x36167d0();
   input += synapse0x3616810();
   input += synapse0x3616850();
   input += synapse0x3616890();
   input += synapse0x36168d0();
   input += synapse0x3616910();
   input += synapse0x3616950();
   input += synapse0x3616990();
   input += synapse0x36169d0();
   input += synapse0x3616a10();
   input += synapse0x3616a50();
   input += synapse0x3616a90();
   input += synapse0x3616ad0();
   input += synapse0x3616b10();
   input += synapse0x3616b50();
   input += synapse0x36165e0();
   input += synapse0x3616620();
   input += synapse0x3616ca0();
   input += synapse0x3616ce0();
   input += synapse0x3616d20();
   input += synapse0x3616d60();
   input += synapse0x3616da0();
   input += synapse0x3616de0();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3616450() {
   double input = input0x3616450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3616e20() {
   double input = -1.34794;
   input += synapse0x3617160();
   input += synapse0x36171a0();
   input += synapse0x36171e0();
   input += synapse0x3617220();
   input += synapse0x3617260();
   input += synapse0x36172a0();
   input += synapse0x36172e0();
   input += synapse0x3617320();
   input += synapse0x3617360();
   input += synapse0x36173a0();
   input += synapse0x36173e0();
   input += synapse0x3617420();
   input += synapse0x3617460();
   input += synapse0x36174a0();
   input += synapse0x36174e0();
   input += synapse0x3617520();
   input += synapse0x3616fb0();
   input += synapse0x3616ff0();
   input += synapse0x3617670();
   input += synapse0x36176b0();
   input += synapse0x36176f0();
   input += synapse0x3617730();
   input += synapse0x3617770();
   input += synapse0x36177b0();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3616e20() {
   double input = input0x3616e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x36177f0() {
   double input = -2.36778;
   input += synapse0x3617b30();
   input += synapse0x3617b70();
   input += synapse0x3617bb0();
   input += synapse0x3617bf0();
   input += synapse0x3617c30();
   input += synapse0x3617c70();
   input += synapse0x3617cb0();
   input += synapse0x3617cf0();
   input += synapse0x3617d30();
   input += synapse0x360fef0();
   input += synapse0x360ff30();
   input += synapse0x360ff70();
   input += synapse0x360ffb0();
   input += synapse0x360fff0();
   input += synapse0x3610030();
   input += synapse0x3610070();
   input += synapse0x3617980();
   input += synapse0x36179c0();
   input += synapse0x36101c0();
   input += synapse0x3610200();
   input += synapse0x3610240();
   input += synapse0x3610280();
   input += synapse0x36102c0();
   input += synapse0x3610300();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x36177f0() {
   double input = input0x36177f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3610340() {
   double input = 0.366072;
   input += synapse0x3610680();
   input += synapse0x36106c0();
   input += synapse0x3610700();
   input += synapse0x3610740();
   input += synapse0x3610780();
   input += synapse0x36107c0();
   input += synapse0x3610800();
   input += synapse0x3610840();
   input += synapse0x3610880();
   input += synapse0x36108c0();
   input += synapse0x3610900();
   input += synapse0x3610940();
   input += synapse0x3610980();
   input += synapse0x36109c0();
   input += synapse0x3610a00();
   input += synapse0x3610a40();
   input += synapse0x36104d0();
   input += synapse0x3610510();
   input += synapse0x3610b90();
   input += synapse0x3610bd0();
   input += synapse0x3610c10();
   input += synapse0x3610c50();
   input += synapse0x3610c90();
   input += synapse0x3610cd0();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3610340() {
   double input = input0x3610340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3610d10() {
   double input = -0.758073;
   input += synapse0x3610ea0();
   input += synapse0x3619f30();
   input += synapse0x3619f70();
   input += synapse0x3619fb0();
   input += synapse0x3619ff0();
   input += synapse0x361a030();
   input += synapse0x361a070();
   input += synapse0x361a0b0();
   input += synapse0x361a0f0();
   input += synapse0x361a130();
   input += synapse0x361a170();
   input += synapse0x361a1b0();
   input += synapse0x361a1f0();
   input += synapse0x361a230();
   input += synapse0x361a270();
   input += synapse0x361a2b0();
   input += synapse0x3619d80();
   input += synapse0x3619dc0();
   input += synapse0x361a400();
   input += synapse0x361a440();
   input += synapse0x361a480();
   input += synapse0x361a4c0();
   input += synapse0x361a500();
   input += synapse0x361a540();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3610d10() {
   double input = input0x3610d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x361a580() {
   double input = 1.19831;
   input += synapse0x361a8c0();
   input += synapse0x361a900();
   input += synapse0x361a940();
   input += synapse0x361a980();
   input += synapse0x361a9c0();
   input += synapse0x361aa00();
   input += synapse0x361aa40();
   input += synapse0x361aa80();
   input += synapse0x361aac0();
   input += synapse0x361ab00();
   input += synapse0x361ab40();
   input += synapse0x361ab80();
   input += synapse0x361abc0();
   input += synapse0x361ac00();
   input += synapse0x361ac40();
   input += synapse0x361ac80();
   input += synapse0x361a710();
   input += synapse0x361a750();
   input += synapse0x361add0();
   input += synapse0x361ae10();
   input += synapse0x361ae50();
   input += synapse0x361ae90();
   input += synapse0x361aed0();
   input += synapse0x361af10();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x361a580() {
   double input = input0x361a580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x361af50() {
   double input = -1.17204;
   input += synapse0x361b290();
   input += synapse0x361b2d0();
   input += synapse0x361b310();
   input += synapse0x361b350();
   input += synapse0x361b390();
   input += synapse0x361b3d0();
   input += synapse0x361b410();
   input += synapse0x361b450();
   input += synapse0x361b490();
   input += synapse0x361b4d0();
   input += synapse0x361b510();
   input += synapse0x361b550();
   input += synapse0x361b590();
   input += synapse0x361b5d0();
   input += synapse0x361b610();
   input += synapse0x361b650();
   input += synapse0x361b0e0();
   input += synapse0x361b120();
   input += synapse0x361b7a0();
   input += synapse0x361b7e0();
   input += synapse0x361b820();
   input += synapse0x361b860();
   input += synapse0x361b8a0();
   input += synapse0x361b8e0();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x361af50() {
   double input = input0x361af50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x361b920() {
   double input = 0.601503;
   input += synapse0x361bc60();
   input += synapse0x361bca0();
   input += synapse0x361bce0();
   input += synapse0x361bd20();
   input += synapse0x361bd60();
   input += synapse0x361bda0();
   input += synapse0x361bde0();
   input += synapse0x361be20();
   input += synapse0x361be60();
   input += synapse0x361bea0();
   input += synapse0x361bee0();
   input += synapse0x361bf20();
   input += synapse0x361bf60();
   input += synapse0x361bfa0();
   input += synapse0x361bfe0();
   input += synapse0x361c020();
   input += synapse0x361bab0();
   input += synapse0x361baf0();
   input += synapse0x361c170();
   input += synapse0x361c1b0();
   input += synapse0x361c1f0();
   input += synapse0x361c230();
   input += synapse0x361c270();
   input += synapse0x361c2b0();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x361b920() {
   double input = input0x361b920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x361c2f0() {
   double input = -0.375251;
   input += synapse0x361c630();
   input += synapse0x361c670();
   input += synapse0x361c6b0();
   input += synapse0x361c6f0();
   input += synapse0x361c730();
   input += synapse0x361c770();
   input += synapse0x361c7b0();
   input += synapse0x361c7f0();
   input += synapse0x361c830();
   input += synapse0x361c870();
   input += synapse0x361c8b0();
   input += synapse0x361c8f0();
   input += synapse0x361c930();
   input += synapse0x361c970();
   input += synapse0x361c9b0();
   input += synapse0x361c9f0();
   input += synapse0x361c480();
   input += synapse0x361c4c0();
   input += synapse0x361cb40();
   input += synapse0x361cb80();
   input += synapse0x361cbc0();
   input += synapse0x361cc00();
   input += synapse0x361cc40();
   input += synapse0x361cc80();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x361c2f0() {
   double input = input0x361c2f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x361ccc0() {
   double input = 2.88859;
   input += synapse0x361d000();
   input += synapse0x361d040();
   input += synapse0x361d080();
   input += synapse0x361d0c0();
   input += synapse0x361d100();
   input += synapse0x361d140();
   input += synapse0x361d180();
   input += synapse0x361d1c0();
   input += synapse0x361d200();
   input += synapse0x361d240();
   input += synapse0x361d280();
   input += synapse0x361d2c0();
   input += synapse0x361d300();
   input += synapse0x361d340();
   input += synapse0x361d380();
   input += synapse0x361d3c0();
   input += synapse0x361ce50();
   input += synapse0x361ce90();
   input += synapse0x361d510();
   input += synapse0x361d550();
   input += synapse0x361d590();
   input += synapse0x361d5d0();
   input += synapse0x361d610();
   input += synapse0x361d650();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x361ccc0() {
   double input = input0x361ccc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x361d690() {
   double input = -0.310935;
   input += synapse0x361d9d0();
   input += synapse0x361da10();
   input += synapse0x361da50();
   input += synapse0x361da90();
   input += synapse0x361dad0();
   input += synapse0x361db10();
   input += synapse0x361db50();
   input += synapse0x361db90();
   input += synapse0x361dbd0();
   input += synapse0x361dc10();
   input += synapse0x361dc50();
   input += synapse0x361dc90();
   input += synapse0x361dcd0();
   input += synapse0x361dd10();
   input += synapse0x361dd50();
   input += synapse0x361dd90();
   input += synapse0x361d820();
   input += synapse0x361d860();
   input += synapse0x361dee0();
   input += synapse0x361df20();
   input += synapse0x361df60();
   input += synapse0x361dfa0();
   input += synapse0x361dfe0();
   input += synapse0x361e020();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x361d690() {
   double input = input0x361d690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x361e060() {
   double input = 0.248092;
   input += synapse0x361e3a0();
   input += synapse0x361e3e0();
   input += synapse0x361e420();
   input += synapse0x361e460();
   input += synapse0x361e4a0();
   input += synapse0x361e4e0();
   input += synapse0x361e520();
   input += synapse0x361e560();
   input += synapse0x361e5a0();
   input += synapse0x361e5e0();
   input += synapse0x361e620();
   input += synapse0x361e660();
   input += synapse0x361e6a0();
   input += synapse0x361e6e0();
   input += synapse0x361e720();
   input += synapse0x361e760();
   input += synapse0x361e1f0();
   input += synapse0x361e230();
   input += synapse0x361e8b0();
   input += synapse0x361e8f0();
   input += synapse0x361e930();
   input += synapse0x361e970();
   input += synapse0x361e9b0();
   input += synapse0x361e9f0();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x361e060() {
   double input = input0x361e060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x361ea30() {
   double input = 0.344605;
   input += synapse0x361ed70();
   input += synapse0x3613340();
   input += synapse0x3613380();
   input += synapse0x36133c0();
   input += synapse0x3613610();
   input += synapse0x3613650();
   input += synapse0x3613690();
   input += synapse0x36138e0();
   input += synapse0x3613920();
   input += synapse0x3613b70();
   input += synapse0x3613bb0();
   input += synapse0x3613bf0();
   input += synapse0x3613e40();
   input += synapse0x3613e80();
   input += synapse0x36140d0();
   input += synapse0x3614110();
   input += synapse0x361ebc0();
   input += synapse0x361ec00();
   input += synapse0x3614260();
   input += synapse0x3614770();
   input += synapse0x36147b0();
   input += synapse0x36147f0();
   input += synapse0x3614a40();
   input += synapse0x3614a80();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x361ea30() {
   double input = input0x361ea30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3614ac0() {
   double input = 1.05924;
   input += synapse0x3614330();
   input += synapse0x3614370();
   input += synapse0x36143b0();
   input += synapse0x36143f0();
   input += synapse0x3614d70();
   input += synapse0x36210c0();
   input += synapse0x3621100();
   input += synapse0x3621140();
   input += synapse0x3621180();
   input += synapse0x36211c0();
   input += synapse0x3621200();
   input += synapse0x3621240();
   input += synapse0x3621280();
   input += synapse0x36212c0();
   input += synapse0x3621300();
   input += synapse0x3621340();
   input += synapse0x3614c50();
   input += synapse0x3614c90();
   input += synapse0x3621490();
   input += synapse0x36214d0();
   input += synapse0x3621510();
   input += synapse0x3621550();
   input += synapse0x3621590();
   input += synapse0x36215d0();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3614ac0() {
   double input = input0x3614ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3621610() {
   double input = 0.224215;
   input += synapse0x3621950();
   input += synapse0x3621990();
   input += synapse0x36219d0();
   input += synapse0x3621a10();
   input += synapse0x3621a50();
   input += synapse0x3621a90();
   input += synapse0x3621ad0();
   input += synapse0x3621b10();
   input += synapse0x3621b50();
   input += synapse0x3621b90();
   input += synapse0x3621bd0();
   input += synapse0x3621c10();
   input += synapse0x3621c50();
   input += synapse0x3621c90();
   input += synapse0x3621cd0();
   input += synapse0x3621d10();
   input += synapse0x36217a0();
   input += synapse0x36217e0();
   input += synapse0x3621e60();
   input += synapse0x3621ea0();
   input += synapse0x3621ee0();
   input += synapse0x3621f20();
   input += synapse0x3621f60();
   input += synapse0x3621fa0();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3621610() {
   double input = input0x3621610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3621fe0() {
   double input = 0.1777;
   input += synapse0x3622320();
   input += synapse0x3622360();
   input += synapse0x36223a0();
   input += synapse0x36223e0();
   input += synapse0x3622420();
   input += synapse0x3622460();
   input += synapse0x36224a0();
   input += synapse0x36224e0();
   input += synapse0x3622520();
   input += synapse0x3622560();
   input += synapse0x36225a0();
   input += synapse0x36225e0();
   input += synapse0x3622620();
   input += synapse0x3622660();
   input += synapse0x36226a0();
   input += synapse0x36226e0();
   input += synapse0x3622170();
   input += synapse0x36221b0();
   input += synapse0x3622830();
   input += synapse0x3622870();
   input += synapse0x36228b0();
   input += synapse0x36228f0();
   input += synapse0x3622930();
   input += synapse0x3622970();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3621fe0() {
   double input = input0x3621fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x36229b0() {
   double input = 2.10835;
   input += synapse0x3622cf0();
   input += synapse0x3622d30();
   input += synapse0x3622d70();
   input += synapse0x3622db0();
   input += synapse0x3622df0();
   input += synapse0x3622e30();
   input += synapse0x3622e70();
   input += synapse0x3622eb0();
   input += synapse0x3622ef0();
   input += synapse0x3622f30();
   input += synapse0x3622f70();
   input += synapse0x3622fb0();
   input += synapse0x3622ff0();
   input += synapse0x3623030();
   input += synapse0x3623070();
   input += synapse0x36230b0();
   input += synapse0x3622b40();
   input += synapse0x3622b80();
   input += synapse0x3623200();
   input += synapse0x3623240();
   input += synapse0x3623280();
   input += synapse0x36232c0();
   input += synapse0x3623300();
   input += synapse0x3623340();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x36229b0() {
   double input = input0x36229b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3623380() {
   double input = 0.247051;
   input += synapse0x36236c0();
   input += synapse0x3623700();
   input += synapse0x3623740();
   input += synapse0x3623780();
   input += synapse0x36237c0();
   input += synapse0x3623800();
   input += synapse0x3623840();
   input += synapse0x3623880();
   input += synapse0x36238c0();
   input += synapse0x3623900();
   input += synapse0x3623940();
   input += synapse0x3623980();
   input += synapse0x36239c0();
   input += synapse0x3623a00();
   input += synapse0x3623a40();
   input += synapse0x3623a80();
   input += synapse0x3623510();
   input += synapse0x3623550();
   input += synapse0x3623bd0();
   input += synapse0x3623c10();
   input += synapse0x3623c50();
   input += synapse0x3623c90();
   input += synapse0x3623cd0();
   input += synapse0x3623d10();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3623380() {
   double input = input0x3623380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3623d50() {
   double input = 3.01066;
   input += synapse0x3624090();
   input += synapse0x36240d0();
   input += synapse0x3624110();
   input += synapse0x3624150();
   input += synapse0x3624190();
   input += synapse0x36241d0();
   input += synapse0x3624210();
   input += synapse0x3624250();
   input += synapse0x3624290();
   input += synapse0x36242d0();
   input += synapse0x3624310();
   input += synapse0x3624350();
   input += synapse0x3624390();
   input += synapse0x36243d0();
   input += synapse0x3624410();
   input += synapse0x3624450();
   input += synapse0x3623ee0();
   input += synapse0x3623f20();
   input += synapse0x36245a0();
   input += synapse0x36245e0();
   input += synapse0x3624620();
   input += synapse0x3624660();
   input += synapse0x36246a0();
   input += synapse0x36246e0();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3623d50() {
   double input = input0x3623d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3624720() {
   double input = 0.430759;
   input += synapse0x3624a60();
   input += synapse0x3624aa0();
   input += synapse0x3624ae0();
   input += synapse0x3624b20();
   input += synapse0x3624b60();
   input += synapse0x3624ba0();
   input += synapse0x3624be0();
   input += synapse0x3624c20();
   input += synapse0x3624c60();
   input += synapse0x3624ca0();
   input += synapse0x3624ce0();
   input += synapse0x3624d20();
   input += synapse0x3624d60();
   input += synapse0x3624da0();
   input += synapse0x3624de0();
   input += synapse0x3624e20();
   input += synapse0x36248b0();
   input += synapse0x36248f0();
   input += synapse0x3624f70();
   input += synapse0x3624fb0();
   input += synapse0x3624ff0();
   input += synapse0x3625030();
   input += synapse0x3625070();
   input += synapse0x36250b0();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3624720() {
   double input = input0x3624720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x36250f0() {
   double input = -1.52764;
   input += synapse0x3625430();
   input += synapse0x3625470();
   input += synapse0x36254b0();
   input += synapse0x36254f0();
   input += synapse0x3625530();
   input += synapse0x3625570();
   input += synapse0x36255b0();
   input += synapse0x36255f0();
   input += synapse0x3625630();
   input += synapse0x3625670();
   input += synapse0x36256b0();
   input += synapse0x36256f0();
   input += synapse0x3625730();
   input += synapse0x3625770();
   input += synapse0x36257b0();
   input += synapse0x36257f0();
   input += synapse0x3625280();
   input += synapse0x36252c0();
   input += synapse0x3625940();
   input += synapse0x3625980();
   input += synapse0x36259c0();
   input += synapse0x3625a00();
   input += synapse0x3625a40();
   input += synapse0x3625a80();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x36250f0() {
   double input = input0x36250f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3625ac0() {
   double input = 0.458576;
   input += synapse0x360e530();
   input += synapse0x360e570();
   input += synapse0x360e5b0();
   input += synapse0x360e5f0();
   input += synapse0x360e630();
   input += synapse0x360e670();
   input += synapse0x360e6b0();
   input += synapse0x360e6f0();
   input += synapse0x3626210();
   input += synapse0x3626250();
   input += synapse0x3626290();
   input += synapse0x36262d0();
   input += synapse0x3626310();
   input += synapse0x3626350();
   input += synapse0x3626390();
   input += synapse0x36263d0();
   input += synapse0x3625c50();
   input += synapse0x3625c90();
   input += synapse0x3626520();
   input += synapse0x3626560();
   input += synapse0x36265a0();
   input += synapse0x36265e0();
   input += synapse0x3626620();
   input += synapse0x3626660();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3625ac0() {
   double input = input0x3625ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x36266a0() {
   double input = -0.33453;
   input += synapse0x36269e0();
   input += synapse0x3626a20();
   input += synapse0x3626a60();
   input += synapse0x3626aa0();
   input += synapse0x3626ae0();
   input += synapse0x3626b20();
   input += synapse0x3626b60();
   input += synapse0x3626ba0();
   input += synapse0x3626be0();
   input += synapse0x3626c20();
   input += synapse0x3626c60();
   input += synapse0x3626ca0();
   input += synapse0x3626ce0();
   input += synapse0x3626d20();
   input += synapse0x3626d60();
   input += synapse0x3626da0();
   input += synapse0x3626830();
   input += synapse0x3626870();
   input += synapse0x3626ef0();
   input += synapse0x3626f30();
   input += synapse0x3626f70();
   input += synapse0x3626fb0();
   input += synapse0x3626ff0();
   input += synapse0x3627030();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x36266a0() {
   double input = input0x36266a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3627070() {
   double input = -0.449856;
   input += synapse0x36273b0();
   input += synapse0x36273f0();
   input += synapse0x3627430();
   input += synapse0x3627470();
   input += synapse0x36274b0();
   input += synapse0x36274f0();
   input += synapse0x3627530();
   input += synapse0x3627570();
   input += synapse0x36275b0();
   input += synapse0x36275f0();
   input += synapse0x3627630();
   input += synapse0x3627670();
   input += synapse0x36276b0();
   input += synapse0x36276f0();
   input += synapse0x3627730();
   input += synapse0x3627770();
   input += synapse0x3627200();
   input += synapse0x3627240();
   input += synapse0x3617d70();
   input += synapse0x3617db0();
   input += synapse0x3617df0();
   input += synapse0x3617e30();
   input += synapse0x3617e70();
   input += synapse0x3617eb0();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3627070() {
   double input = input0x3627070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3617ef0() {
   double input = 0.860733;
   input += synapse0x3618230();
   input += synapse0x3618270();
   input += synapse0x36182b0();
   input += synapse0x36182f0();
   input += synapse0x3618330();
   input += synapse0x3618370();
   input += synapse0x36183b0();
   input += synapse0x36183f0();
   input += synapse0x3618430();
   input += synapse0x3618470();
   input += synapse0x36184b0();
   input += synapse0x36184f0();
   input += synapse0x3618530();
   input += synapse0x3618570();
   input += synapse0x36185b0();
   input += synapse0x36185f0();
   input += synapse0x3618080();
   input += synapse0x36180c0();
   input += synapse0x3618740();
   input += synapse0x3618780();
   input += synapse0x36187c0();
   input += synapse0x3618800();
   input += synapse0x3618840();
   input += synapse0x3618880();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3617ef0() {
   double input = input0x3617ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x36188c0() {
   double input = 1.20462;
   input += synapse0x3618c00();
   input += synapse0x3618c40();
   input += synapse0x3618c80();
   input += synapse0x3618cc0();
   input += synapse0x3618d00();
   input += synapse0x3618d40();
   input += synapse0x3618d80();
   input += synapse0x3618dc0();
   input += synapse0x3618e00();
   input += synapse0x3618e40();
   input += synapse0x3618e80();
   input += synapse0x3618ec0();
   input += synapse0x3618f00();
   input += synapse0x3618f40();
   input += synapse0x3618f80();
   input += synapse0x3618fc0();
   input += synapse0x3618a50();
   input += synapse0x3618a90();
   input += synapse0x3619110();
   input += synapse0x3619150();
   input += synapse0x3619190();
   input += synapse0x36191d0();
   input += synapse0x3619210();
   input += synapse0x3619250();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x36188c0() {
   double input = input0x36188c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3619290() {
   double input = 3.22999;
   input += synapse0x36195d0();
   input += synapse0x3619610();
   input += synapse0x3619650();
   input += synapse0x3619690();
   input += synapse0x36196d0();
   input += synapse0x3619710();
   input += synapse0x3619750();
   input += synapse0x3619790();
   input += synapse0x36197d0();
   input += synapse0x3619810();
   input += synapse0x3619850();
   input += synapse0x3619890();
   input += synapse0x36198d0();
   input += synapse0x3619910();
   input += synapse0x3619950();
   input += synapse0x3619990();
   input += synapse0x3619420();
   input += synapse0x3619460();
   input += synapse0x3619ae0();
   input += synapse0x3619b20();
   input += synapse0x3619b60();
   input += synapse0x3619ba0();
   input += synapse0x3619be0();
   input += synapse0x3619c20();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3619290() {
   double input = input0x3619290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x362b8d0() {
   double input = -1.34721;
   input += synapse0x362baf0();
   input += synapse0x362bb30();
   input += synapse0x362bb70();
   input += synapse0x362bbb0();
   input += synapse0x362bbf0();
   input += synapse0x362bc30();
   input += synapse0x362bc70();
   input += synapse0x362bcb0();
   input += synapse0x362bcf0();
   input += synapse0x362bd30();
   input += synapse0x362bd70();
   input += synapse0x362bdb0();
   input += synapse0x362bdf0();
   input += synapse0x362be30();
   input += synapse0x362be70();
   input += synapse0x362beb0();
   input += synapse0x3619c60();
   input += synapse0x3619ca0();
   input += synapse0x362c000();
   input += synapse0x362c040();
   input += synapse0x362c080();
   input += synapse0x362c0c0();
   input += synapse0x362c100();
   input += synapse0x362c140();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x362b8d0() {
   double input = input0x362b8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x362c180() {
   double input = 0.705185;
   input += synapse0x362c4c0();
   input += synapse0x362c500();
   input += synapse0x362c540();
   input += synapse0x362c580();
   input += synapse0x362c5c0();
   input += synapse0x362c600();
   input += synapse0x362c640();
   input += synapse0x362c680();
   input += synapse0x362c6c0();
   input += synapse0x362c700();
   input += synapse0x362c740();
   input += synapse0x362c780();
   input += synapse0x362c7c0();
   input += synapse0x362c800();
   input += synapse0x362c840();
   input += synapse0x362c880();
   input += synapse0x362c310();
   input += synapse0x362c350();
   input += synapse0x362c9d0();
   input += synapse0x362ca10();
   input += synapse0x362ca50();
   input += synapse0x362ca90();
   input += synapse0x362cad0();
   input += synapse0x362cb10();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x362c180() {
   double input = input0x362c180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x362cb50() {
   double input = -1.93104;
   input += synapse0x362ce90();
   input += synapse0x362ced0();
   input += synapse0x362cf10();
   input += synapse0x362cf50();
   input += synapse0x362cf90();
   input += synapse0x362cfd0();
   input += synapse0x362d010();
   input += synapse0x362d050();
   input += synapse0x362d090();
   input += synapse0x362d0d0();
   input += synapse0x362d110();
   input += synapse0x362d150();
   input += synapse0x362d190();
   input += synapse0x362d1d0();
   input += synapse0x362d210();
   input += synapse0x362d250();
   input += synapse0x362cce0();
   input += synapse0x362cd20();
   input += synapse0x362d3a0();
   input += synapse0x362d3e0();
   input += synapse0x362d420();
   input += synapse0x362d460();
   input += synapse0x362d4a0();
   input += synapse0x362d4e0();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x362cb50() {
   double input = input0x362cb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x362d520() {
   double input = 0.328368;
   input += synapse0x362d860();
   input += synapse0x362d8a0();
   input += synapse0x362d8e0();
   input += synapse0x362d920();
   input += synapse0x362d960();
   input += synapse0x362d9a0();
   input += synapse0x362d9e0();
   input += synapse0x362da20();
   input += synapse0x362da60();
   input += synapse0x362daa0();
   input += synapse0x362dae0();
   input += synapse0x362db20();
   input += synapse0x362db60();
   input += synapse0x362dba0();
   input += synapse0x362dbe0();
   input += synapse0x362dc20();
   input += synapse0x362d6b0();
   input += synapse0x362d6f0();
   input += synapse0x362dd70();
   input += synapse0x362ddb0();
   input += synapse0x362ddf0();
   input += synapse0x362de30();
   input += synapse0x362de70();
   input += synapse0x362deb0();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x362d520() {
   double input = input0x362d520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3634720() {
   double input = 0.0508926;
   input += synapse0x3609300();
   input += synapse0x3609340();
   input += synapse0x360a860();
   input += synapse0x360a8a0();
   input += synapse0x360c330();
   input += synapse0x360c370();
   input += synapse0x360d100();
   input += synapse0x360d140();
   input += synapse0x360dad0();
   input += synapse0x360db10();
   input += synapse0x360e4a0();
   input += synapse0x360e4e0();
   input += synapse0x360ef80();
   input += synapse0x360efc0();
   input += synapse0x360f950();
   input += synapse0x360f990();
   input += synapse0x360ca30();
   input += synapse0x360ca70();
   input += synapse0x3611500();
   input += synapse0x3611540();
   input += synapse0x3611ed0();
   input += synapse0x3611f10();
   input += synapse0x36128a0();
   input += synapse0x36128e0();
   input += synapse0x3613270();
   input += synapse0x36132b0();
   input += synapse0x3606300();
   input += synapse0x3606340();
   input += synapse0x3615360();
   input += synapse0x36153a0();
   input += synapse0x3615d30();
   input += synapse0x3615d70();
   input += synapse0x3616700();
   input += synapse0x3616740();
   input += synapse0x36170d0();
   input += synapse0x3617110();
   input += synapse0x3617aa0();
   input += synapse0x3617ae0();
   input += synapse0x36105f0();
   input += synapse0x3610630();
   input += synapse0x3619ea0();
   input += synapse0x3619ee0();
   input += synapse0x361a830();
   input += synapse0x361a870();
   input += synapse0x361b200();
   input += synapse0x361b240();
   input += synapse0x361bbd0();
   input += synapse0x361bc10();
   input += synapse0x361c5a0();
   input += synapse0x361c5e0();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3634720() {
   double input = input0x3634720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3634ac0() {
   double input = 0.516802;
   input += synapse0x361ece0();
   input += synapse0x361ed20();
   input += synapse0x36142a0();
   input += synapse0x36142e0();
   input += synapse0x36218c0();
   input += synapse0x3621900();
   input += synapse0x3622290();
   input += synapse0x36222d0();
   input += synapse0x3622c60();
   input += synapse0x3622ca0();
   input += synapse0x3623630();
   input += synapse0x3623670();
   input += synapse0x3624000();
   input += synapse0x3624040();
   input += synapse0x36249d0();
   input += synapse0x3624a10();
   input += synapse0x36253a0();
   input += synapse0x36253e0();
   input += synapse0x3625d70();
   input += synapse0x3625db0();
   input += synapse0x3626950();
   input += synapse0x3626990();
   input += synapse0x3627320();
   input += synapse0x3627360();
   input += synapse0x36181a0();
   input += synapse0x36181e0();
   input += synapse0x3618b70();
   input += synapse0x3618bb0();
   input += synapse0x3619540();
   input += synapse0x3619580();
   input += synapse0x362ba60();
   input += synapse0x362baa0();
   input += synapse0x362c430();
   input += synapse0x362c470();
   input += synapse0x362ce00();
   input += synapse0x362ce40();
   input += synapse0x362d7d0();
   input += synapse0x362d810();
   input += synapse0x3608760();
   input += synapse0x36087a0();
   input += synapse0x361cf70();
   input += synapse0x361cfb0();
   input += synapse0x362def0();
   input += synapse0x362df30();
   input += synapse0x362df70();
   input += synapse0x362dfb0();
   input += synapse0x3634e60();
   input += synapse0x3634ea0();
   input += synapse0x3634ee0();
   input += synapse0x3634f20();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3634ac0() {
   double input = input0x3634ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3634f60() {
   double input = -0.780933;
   input += synapse0x36352a0();
   input += synapse0x36352e0();
   input += synapse0x3635320();
   input += synapse0x3635360();
   input += synapse0x36353a0();
   input += synapse0x36353e0();
   input += synapse0x3635420();
   input += synapse0x3635460();
   input += synapse0x36354a0();
   input += synapse0x36354e0();
   input += synapse0x3635520();
   input += synapse0x3635560();
   input += synapse0x36355a0();
   input += synapse0x36355e0();
   input += synapse0x3635620();
   input += synapse0x3635660();
   input += synapse0x36350f0();
   input += synapse0x3635130();
   input += synapse0x36357b0();
   input += synapse0x36357f0();
   input += synapse0x3635830();
   input += synapse0x3635870();
   input += synapse0x36358b0();
   input += synapse0x36358f0();
   input += synapse0x3635930();
   input += synapse0x3635970();
   input += synapse0x36359b0();
   input += synapse0x36359f0();
   input += synapse0x3635a30();
   input += synapse0x3635a70();
   input += synapse0x3635ab0();
   input += synapse0x3635af0();
   input += synapse0x36356a0();
   input += synapse0x36356e0();
   input += synapse0x3635720();
   input += synapse0x3635760();
   input += synapse0x3635d40();
   input += synapse0x3635d80();
   input += synapse0x3635dc0();
   input += synapse0x3635e00();
   input += synapse0x3635e40();
   input += synapse0x3635e80();
   input += synapse0x3635ec0();
   input += synapse0x3635f00();
   input += synapse0x3635f40();
   input += synapse0x3635f80();
   input += synapse0x3635fc0();
   input += synapse0x3636000();
   input += synapse0x3636040();
   input += synapse0x3636080();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3634f60() {
   double input = input0x3634f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x36360c0() {
   double input = 0.180494;
   input += synapse0x3636400();
   input += synapse0x3636440();
   input += synapse0x3636480();
   input += synapse0x36364c0();
   input += synapse0x3636500();
   input += synapse0x3636540();
   input += synapse0x3636580();
   input += synapse0x36365c0();
   input += synapse0x3636600();
   input += synapse0x3636640();
   input += synapse0x3636680();
   input += synapse0x36366c0();
   input += synapse0x3636700();
   input += synapse0x3636740();
   input += synapse0x3636780();
   input += synapse0x36367c0();
   input += synapse0x3636250();
   input += synapse0x3636290();
   input += synapse0x3636910();
   input += synapse0x3636950();
   input += synapse0x3636990();
   input += synapse0x36369d0();
   input += synapse0x3636a10();
   input += synapse0x3636a50();
   input += synapse0x3636a90();
   input += synapse0x3636ad0();
   input += synapse0x3636b10();
   input += synapse0x3636b50();
   input += synapse0x3636b90();
   input += synapse0x3636bd0();
   input += synapse0x3636c10();
   input += synapse0x3636c50();
   input += synapse0x3636800();
   input += synapse0x3636840();
   input += synapse0x3636880();
   input += synapse0x36368c0();
   input += synapse0x3636ea0();
   input += synapse0x3636ee0();
   input += synapse0x3636f20();
   input += synapse0x3636f60();
   input += synapse0x3636fa0();
   input += synapse0x3636fe0();
   input += synapse0x3637020();
   input += synapse0x3637060();
   input += synapse0x36370a0();
   input += synapse0x36370e0();
   input += synapse0x3637120();
   input += synapse0x3637160();
   input += synapse0x36371a0();
   input += synapse0x36371e0();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x36360c0() {
   double input = input0x36360c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3637220() {
   double input = 0.354735;
   input += synapse0x3637560();
   input += synapse0x36375a0();
   input += synapse0x36375e0();
   input += synapse0x3637620();
   input += synapse0x3637660();
   input += synapse0x36376a0();
   input += synapse0x36376e0();
   input += synapse0x3637720();
   input += synapse0x3637760();
   input += synapse0x36377a0();
   input += synapse0x36377e0();
   input += synapse0x3637820();
   input += synapse0x3637860();
   input += synapse0x36378a0();
   input += synapse0x36378e0();
   input += synapse0x3637920();
   input += synapse0x36373b0();
   input += synapse0x36373f0();
   input += synapse0x3637a70();
   input += synapse0x3637ab0();
   input += synapse0x3637af0();
   input += synapse0x3637b30();
   input += synapse0x3637b70();
   input += synapse0x3637bb0();
   input += synapse0x3637bf0();
   input += synapse0x3637c30();
   input += synapse0x3637c70();
   input += synapse0x3637cb0();
   input += synapse0x3637cf0();
   input += synapse0x3637d30();
   input += synapse0x3637d70();
   input += synapse0x3637db0();
   input += synapse0x3637960();
   input += synapse0x36379a0();
   input += synapse0x36379e0();
   input += synapse0x3637a20();
   input += synapse0x3638000();
   input += synapse0x3638040();
   input += synapse0x3638080();
   input += synapse0x36380c0();
   input += synapse0x3638100();
   input += synapse0x3638140();
   input += synapse0x3638180();
   input += synapse0x36381c0();
   input += synapse0x3638200();
   input += synapse0x3638240();
   input += synapse0x3638280();
   input += synapse0x36382c0();
   input += synapse0x3638300();
   input += synapse0x3638340();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3637220() {
   double input = input0x3637220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus2::input0x3638380() {
   double input = 2.40333;
   input += synapse0x36385a0();
   input += synapse0x36385e0();
   input += synapse0x3638620();
   input += synapse0x3638660();
   input += synapse0x36386a0();
   return input;
}

double NNfunction_ng_chiPlus2::neuron0x3638380() {
   double input = input0x3638380();
   return (input * 1)+0;
}

double NNfunction_ng_chiPlus2::synapse0x36087f0() {
   return (neuron0x36033f0()*0.00157426);
}

double NNfunction_ng_chiPlus2::synapse0x3608830() {
   return (neuron0x36036a0()*0.00189184);
}

double NNfunction_ng_chiPlus2::synapse0x3608870() {
   return (neuron0x36039e0()*0.433111);
}

double NNfunction_ng_chiPlus2::synapse0x36088b0() {
   return (neuron0x3603d20()*-0.0109054);
}

double NNfunction_ng_chiPlus2::synapse0x36088f0() {
   return (neuron0x3604060()*-0.000588998);
}

double NNfunction_ng_chiPlus2::synapse0x3608930() {
   return (neuron0x36043a0()*0.00549457);
}

double NNfunction_ng_chiPlus2::synapse0x3608970() {
   return (neuron0x36046e0()*0.0031194);
}

double NNfunction_ng_chiPlus2::synapse0x36089b0() {
   return (neuron0x3604a20()*-0.00278931);
}

double NNfunction_ng_chiPlus2::synapse0x36089f0() {
   return (neuron0x3604d60()*-0.00100982);
}

double NNfunction_ng_chiPlus2::synapse0x3608a30() {
   return (neuron0x36050a0()*0.000199318);
}

double NNfunction_ng_chiPlus2::synapse0x3608a70() {
   return (neuron0x36053e0()*0.000159008);
}

double NNfunction_ng_chiPlus2::synapse0x3608ab0() {
   return (neuron0x3605720()*0.128108);
}

double NNfunction_ng_chiPlus2::synapse0x3608af0() {
   return (neuron0x3605a60()*-0.00424431);
}

double NNfunction_ng_chiPlus2::synapse0x3608b30() {
   return (neuron0x3605da0()*0.00531523);
}

double NNfunction_ng_chiPlus2::synapse0x3608b70() {
   return (neuron0x36060e0()*-0.00124718);
}

double NNfunction_ng_chiPlus2::synapse0x3608bb0() {
   return (neuron0x3606420()*0.00649077);
}

double NNfunction_ng_chiPlus2::synapse0x3608640() {
   return (neuron0x3606760()*-0.00432306);
}

double NNfunction_ng_chiPlus2::synapse0x3608680() {
   return (neuron0x3606cc0()*-0.00737657);
}

double NNfunction_ng_chiPlus2::synapse0x33bf800() {
   return (neuron0x3607000()*0.000629469);
}

double NNfunction_ng_chiPlus2::synapse0x33bf840() {
   return (neuron0x3607340()*0.00037845);
}

double NNfunction_ng_chiPlus2::synapse0x3608bf0() {
   return (neuron0x3607680()*-0.00748744);
}

double NNfunction_ng_chiPlus2::synapse0x3608c30() {
   return (neuron0x36079c0()*1.31753e-06);
}

double NNfunction_ng_chiPlus2::synapse0x3608c70() {
   return (neuron0x3607d00()*0.00122077);
}

double NNfunction_ng_chiPlus2::synapse0x3608cb0() {
   return (neuron0x3608040()*0.695678);
}

double NNfunction_ng_chiPlus2::synapse0x3609030() {
   return (neuron0x36033f0()*-0.043693);
}

double NNfunction_ng_chiPlus2::synapse0x3609070() {
   return (neuron0x36036a0()*0.209177);
}

double NNfunction_ng_chiPlus2::synapse0x36090b0() {
   return (neuron0x36039e0()*0.184348);
}

double NNfunction_ng_chiPlus2::synapse0x36090f0() {
   return (neuron0x3603d20()*-0.674104);
}

double NNfunction_ng_chiPlus2::synapse0x3609130() {
   return (neuron0x3604060()*0.103014);
}

double NNfunction_ng_chiPlus2::synapse0x3609170() {
   return (neuron0x36043a0()*0.260934);
}

double NNfunction_ng_chiPlus2::synapse0x36091b0() {
   return (neuron0x36046e0()*-0.375325);
}

double NNfunction_ng_chiPlus2::synapse0x36091f0() {
   return (neuron0x3604a20()*-0.0391565);
}

double NNfunction_ng_chiPlus2::synapse0x3609230() {
   return (neuron0x3604d60()*0.152247);
}

double NNfunction_ng_chiPlus2::synapse0x33bf650() {
   return (neuron0x36050a0()*-0.107689);
}

double NNfunction_ng_chiPlus2::synapse0x33bf690() {
   return (neuron0x36053e0()*0.0636944);
}

double NNfunction_ng_chiPlus2::synapse0x33bf6d0() {
   return (neuron0x3605720()*0.682825);
}

double NNfunction_ng_chiPlus2::synapse0x33bf710() {
   return (neuron0x3605a60()*0.151448);
}

double NNfunction_ng_chiPlus2::synapse0x3609480() {
   return (neuron0x3605da0()*-0.378588);
}

double NNfunction_ng_chiPlus2::synapse0x36094c0() {
   return (neuron0x36060e0()*-0.197793);
}

double NNfunction_ng_chiPlus2::synapse0x3609500() {
   return (neuron0x3606420()*-0.138607);
}

double NNfunction_ng_chiPlus2::synapse0x3608e80() {
   return (neuron0x3606760()*0.222413);
}

double NNfunction_ng_chiPlus2::synapse0x3608ec0() {
   return (neuron0x3606cc0()*0.535969);
}

double NNfunction_ng_chiPlus2::synapse0x3609650() {
   return (neuron0x3607000()*0.31448);
}

double NNfunction_ng_chiPlus2::synapse0x3609690() {
   return (neuron0x3607340()*0.345874);
}

double NNfunction_ng_chiPlus2::synapse0x36096d0() {
   return (neuron0x3607680()*-0.200542);
}

double NNfunction_ng_chiPlus2::synapse0x3609710() {
   return (neuron0x36079c0()*0.0411588);
}

double NNfunction_ng_chiPlus2::synapse0x3609750() {
   return (neuron0x3607d00()*-0.35103);
}

double NNfunction_ng_chiPlus2::synapse0x3609790() {
   return (neuron0x3608040()*-0.214322);
}

double NNfunction_ng_chiPlus2::synapse0x3609b10() {
   return (neuron0x36033f0()*0.00357599);
}

double NNfunction_ng_chiPlus2::synapse0x3609b50() {
   return (neuron0x36036a0()*-0.0105728);
}

double NNfunction_ng_chiPlus2::synapse0x3609b90() {
   return (neuron0x36039e0()*0.11022);
}

double NNfunction_ng_chiPlus2::synapse0x3609bd0() {
   return (neuron0x3603d20()*7.00573);
}

double NNfunction_ng_chiPlus2::synapse0x3609c10() {
   return (neuron0x3604060()*-0.00193668);
}

double NNfunction_ng_chiPlus2::synapse0x3609c50() {
   return (neuron0x36043a0()*0.00784124);
}

double NNfunction_ng_chiPlus2::synapse0x3609c90() {
   return (neuron0x36046e0()*-0.0291161);
}

double NNfunction_ng_chiPlus2::synapse0x3609cd0() {
   return (neuron0x3604a20()*-0.0126779);
}

double NNfunction_ng_chiPlus2::synapse0x3609d10() {
   return (neuron0x3604d60()*0.00214527);
}

double NNfunction_ng_chiPlus2::synapse0x3609d50() {
   return (neuron0x36050a0()*-0.0126392);
}

double NNfunction_ng_chiPlus2::synapse0x3609d90() {
   return (neuron0x36053e0()*0.0110302);
}

double NNfunction_ng_chiPlus2::synapse0x3609dd0() {
   return (neuron0x3605720()*-0.302628);
}

double NNfunction_ng_chiPlus2::synapse0x3609e10() {
   return (neuron0x3605a60()*0.0693363);
}

double NNfunction_ng_chiPlus2::synapse0x3609e50() {
   return (neuron0x3605da0()*-0.0176148);
}

double NNfunction_ng_chiPlus2::synapse0x3609e90() {
   return (neuron0x36060e0()*-0.00357623);
}

double NNfunction_ng_chiPlus2::synapse0x3609ed0() {
   return (neuron0x3606420()*-0.00188176);
}

double NNfunction_ng_chiPlus2::synapse0x3609960() {
   return (neuron0x3606760()*-0.032301);
}

double NNfunction_ng_chiPlus2::synapse0x36099a0() {
   return (neuron0x3606cc0()*0.0201753);
}

double NNfunction_ng_chiPlus2::synapse0x33cd490() {
   return (neuron0x3607000()*0.0115658);
}

double NNfunction_ng_chiPlus2::synapse0x33cd4d0() {
   return (neuron0x3607340()*-0.00317516);
}

double NNfunction_ng_chiPlus2::synapse0x360be00() {
   return (neuron0x3607680()*0.00877491);
}

double NNfunction_ng_chiPlus2::synapse0x360be40() {
   return (neuron0x36079c0()*-0.0133043);
}

double NNfunction_ng_chiPlus2::synapse0x3603130() {
   return (neuron0x3607d00()*0.0153417);
}

double NNfunction_ng_chiPlus2::synapse0x3603170() {
   return (neuron0x3608040()*0.10481);
}

double NNfunction_ng_chiPlus2::synapse0x33cdd80() {
   return (neuron0x36033f0()*0.193725);
}

double NNfunction_ng_chiPlus2::synapse0x3609390() {
   return (neuron0x36036a0()*-0.193537);
}

double NNfunction_ng_chiPlus2::synapse0x36093d0() {
   return (neuron0x36039e0()*0.331588);
}

double NNfunction_ng_chiPlus2::synapse0x3609410() {
   return (neuron0x3603d20()*0.30663);
}

double NNfunction_ng_chiPlus2::synapse0x360a020() {
   return (neuron0x3604060()*-0.401);
}

double NNfunction_ng_chiPlus2::synapse0x360a060() {
   return (neuron0x36043a0()*0.219031);
}

double NNfunction_ng_chiPlus2::synapse0x360a0a0() {
   return (neuron0x36046e0()*-0.145437);
}

double NNfunction_ng_chiPlus2::synapse0x360a0e0() {
   return (neuron0x3604a20()*-0.0291215);
}

double NNfunction_ng_chiPlus2::synapse0x360a120() {
   return (neuron0x3604d60()*-0.451647);
}

double NNfunction_ng_chiPlus2::synapse0x360a160() {
   return (neuron0x36050a0()*-0.286145);
}

double NNfunction_ng_chiPlus2::synapse0x360a1a0() {
   return (neuron0x36053e0()*-0.168175);
}

double NNfunction_ng_chiPlus2::synapse0x360a1e0() {
   return (neuron0x3605720()*0.204354);
}

double NNfunction_ng_chiPlus2::synapse0x360a220() {
   return (neuron0x3605a60()*0.157798);
}

double NNfunction_ng_chiPlus2::synapse0x360a260() {
   return (neuron0x3605da0()*0.233222);
}

double NNfunction_ng_chiPlus2::synapse0x360a2a0() {
   return (neuron0x36060e0()*-0.333268);
}

double NNfunction_ng_chiPlus2::synapse0x360a2e0() {
   return (neuron0x3606420()*0.00916715);
}

double NNfunction_ng_chiPlus2::synapse0x36031b0() {
   return (neuron0x3606760()*-0.476859);
}

double NNfunction_ng_chiPlus2::synapse0x36031f0() {
   return (neuron0x3606cc0()*-0.271277);
}

double NNfunction_ng_chiPlus2::synapse0x360a430() {
   return (neuron0x3607000()*0.0378174);
}

double NNfunction_ng_chiPlus2::synapse0x360a470() {
   return (neuron0x3607340()*-0.412983);
}

double NNfunction_ng_chiPlus2::synapse0x360a4b0() {
   return (neuron0x3607680()*0.228578);
}

double NNfunction_ng_chiPlus2::synapse0x360a4f0() {
   return (neuron0x36079c0()*0.323586);
}

double NNfunction_ng_chiPlus2::synapse0x360a530() {
   return (neuron0x3607d00()*-0.194439);
}

double NNfunction_ng_chiPlus2::synapse0x360a570() {
   return (neuron0x3608040()*-0.00983274);
}

double NNfunction_ng_chiPlus2::synapse0x360a8f0() {
   return (neuron0x36033f0()*-0.0245984);
}

double NNfunction_ng_chiPlus2::synapse0x360a930() {
   return (neuron0x36036a0()*0.00595388);
}

double NNfunction_ng_chiPlus2::synapse0x360a970() {
   return (neuron0x36039e0()*-4.10102);
}

double NNfunction_ng_chiPlus2::synapse0x360a9b0() {
   return (neuron0x3603d20()*0.0513615);
}

double NNfunction_ng_chiPlus2::synapse0x360a9f0() {
   return (neuron0x3604060()*0.00178872);
}

double NNfunction_ng_chiPlus2::synapse0x360aa30() {
   return (neuron0x36043a0()*-0.00983921);
}

double NNfunction_ng_chiPlus2::synapse0x360aa70() {
   return (neuron0x36046e0()*-0.0105806);
}

double NNfunction_ng_chiPlus2::synapse0x360aab0() {
   return (neuron0x3604a20()*-0.0127733);
}

double NNfunction_ng_chiPlus2::synapse0x360aaf0() {
   return (neuron0x3604d60()*-0.00772272);
}

double NNfunction_ng_chiPlus2::synapse0x360ab30() {
   return (neuron0x36050a0()*-0.0112203);
}

double NNfunction_ng_chiPlus2::synapse0x360ab70() {
   return (neuron0x36053e0()*-0.00617555);
}

double NNfunction_ng_chiPlus2::synapse0x360abb0() {
   return (neuron0x3605720()*-0.15892);
}

double NNfunction_ng_chiPlus2::synapse0x360abf0() {
   return (neuron0x3605a60()*-0.00143882);
}

double NNfunction_ng_chiPlus2::synapse0x360ac30() {
   return (neuron0x3605da0()*0.00920635);
}

double NNfunction_ng_chiPlus2::synapse0x360ac70() {
   return (neuron0x36060e0()*0.00717799);
}

double NNfunction_ng_chiPlus2::synapse0x360acb0() {
   return (neuron0x3606420()*0.00865798);
}

double NNfunction_ng_chiPlus2::synapse0x360ae00() {
   return (neuron0x3606760()*0.0140694);
}

double NNfunction_ng_chiPlus2::synapse0x360a740() {
   return (neuron0x3606cc0()*-0.00884588);
}

double NNfunction_ng_chiPlus2::synapse0x360a780() {
   return (neuron0x3607000()*2.49817e-05);
}

double NNfunction_ng_chiPlus2::synapse0x360bf40() {
   return (neuron0x3607340()*0.0029957);
}

double NNfunction_ng_chiPlus2::synapse0x360bf80() {
   return (neuron0x3607680()*-0.0195732);
}

double NNfunction_ng_chiPlus2::synapse0x360bfc0() {
   return (neuron0x36079c0()*-0.00714629);
}

double NNfunction_ng_chiPlus2::synapse0x360c000() {
   return (neuron0x3607d00()*0.00317164);
}

double NNfunction_ng_chiPlus2::synapse0x360c040() {
   return (neuron0x3608040()*-3.07733);
}

double NNfunction_ng_chiPlus2::synapse0x360c3c0() {
   return (neuron0x36033f0()*0.000631792);
}

double NNfunction_ng_chiPlus2::synapse0x360c400() {
   return (neuron0x36036a0()*0.0176358);
}

double NNfunction_ng_chiPlus2::synapse0x360c440() {
   return (neuron0x36039e0()*-0.348698);
}

double NNfunction_ng_chiPlus2::synapse0x360c480() {
   return (neuron0x3603d20()*-1.11954);
}

double NNfunction_ng_chiPlus2::synapse0x360c4c0() {
   return (neuron0x3604060()*-0.0120075);
}

double NNfunction_ng_chiPlus2::synapse0x360c500() {
   return (neuron0x36043a0()*-0.0142464);
}

double NNfunction_ng_chiPlus2::synapse0x360c540() {
   return (neuron0x36046e0()*-0.00969045);
}

double NNfunction_ng_chiPlus2::synapse0x360c580() {
   return (neuron0x3604a20()*-0.00428685);
}

double NNfunction_ng_chiPlus2::synapse0x360c5c0() {
   return (neuron0x3604d60()*-0.0129692);
}

double NNfunction_ng_chiPlus2::synapse0x33cd7e0() {
   return (neuron0x36050a0()*-0.0229889);
}

double NNfunction_ng_chiPlus2::synapse0x33cd820() {
   return (neuron0x36053e0()*-0.0294594);
}

double NNfunction_ng_chiPlus2::synapse0x33cd860() {
   return (neuron0x3605720()*0.184722);
}

double NNfunction_ng_chiPlus2::synapse0x33cd8a0() {
   return (neuron0x3605a60()*-0.665278);
}

double NNfunction_ng_chiPlus2::synapse0x33cd8e0() {
   return (neuron0x3605da0()*-0.0094539);
}

double NNfunction_ng_chiPlus2::synapse0x33cd920() {
   return (neuron0x36060e0()*0.0577661);
}

double NNfunction_ng_chiPlus2::synapse0x33cd960() {
   return (neuron0x3606420()*0.0163648);
}

double NNfunction_ng_chiPlus2::synapse0x360c210() {
   return (neuron0x3606760()*-0.00523681);
}

double NNfunction_ng_chiPlus2::synapse0x360c250() {
   return (neuron0x3606cc0()*0.00827274);
}

double NNfunction_ng_chiPlus2::synapse0x33cdab0() {
   return (neuron0x3607000()*0.00749713);
}

double NNfunction_ng_chiPlus2::synapse0x33cdaf0() {
   return (neuron0x3607340()*-0.0213028);
}

double NNfunction_ng_chiPlus2::synapse0x33cdb30() {
   return (neuron0x3607680()*-0.00881066);
}

double NNfunction_ng_chiPlus2::synapse0x33cdb70() {
   return (neuron0x36079c0()*-0.0197649);
}

double NNfunction_ng_chiPlus2::synapse0x33cdbb0() {
   return (neuron0x3607d00()*0.00558988);
}

double NNfunction_ng_chiPlus2::synapse0x360ce10() {
   return (neuron0x3608040()*-0.115998);
}

double NNfunction_ng_chiPlus2::synapse0x360d190() {
   return (neuron0x36033f0()*0.0816162);
}

double NNfunction_ng_chiPlus2::synapse0x360d1d0() {
   return (neuron0x36036a0()*0.299533);
}

double NNfunction_ng_chiPlus2::synapse0x360d210() {
   return (neuron0x36039e0()*0.270598);
}

double NNfunction_ng_chiPlus2::synapse0x360d250() {
   return (neuron0x3603d20()*0.57337);
}

double NNfunction_ng_chiPlus2::synapse0x360d290() {
   return (neuron0x3604060()*-0.00570619);
}

double NNfunction_ng_chiPlus2::synapse0x360d2d0() {
   return (neuron0x36043a0()*-0.252846);
}

double NNfunction_ng_chiPlus2::synapse0x360d310() {
   return (neuron0x36046e0()*-0.00420454);
}

double NNfunction_ng_chiPlus2::synapse0x360d350() {
   return (neuron0x3604a20()*-0.145169);
}

double NNfunction_ng_chiPlus2::synapse0x360d390() {
   return (neuron0x3604d60()*0.358481);
}

double NNfunction_ng_chiPlus2::synapse0x360d3d0() {
   return (neuron0x36050a0()*-0.208936);
}

double NNfunction_ng_chiPlus2::synapse0x360d410() {
   return (neuron0x36053e0()*-0.363047);
}

double NNfunction_ng_chiPlus2::synapse0x360d450() {
   return (neuron0x3605720()*0.130014);
}

double NNfunction_ng_chiPlus2::synapse0x360d490() {
   return (neuron0x3605a60()*0.64954);
}

double NNfunction_ng_chiPlus2::synapse0x360d4d0() {
   return (neuron0x3605da0()*-0.288039);
}

double NNfunction_ng_chiPlus2::synapse0x360d510() {
   return (neuron0x36060e0()*0.208558);
}

double NNfunction_ng_chiPlus2::synapse0x360d550() {
   return (neuron0x3606420()*0.0743888);
}

double NNfunction_ng_chiPlus2::synapse0x360cfe0() {
   return (neuron0x3606760()*0.199594);
}

double NNfunction_ng_chiPlus2::synapse0x360d020() {
   return (neuron0x3606cc0()*-0.233098);
}

double NNfunction_ng_chiPlus2::synapse0x360d6a0() {
   return (neuron0x3607000()*0.498355);
}

double NNfunction_ng_chiPlus2::synapse0x360d6e0() {
   return (neuron0x3607340()*-0.0466474);
}

double NNfunction_ng_chiPlus2::synapse0x360d720() {
   return (neuron0x3607680()*0.0903129);
}

double NNfunction_ng_chiPlus2::synapse0x360d760() {
   return (neuron0x36079c0()*0.03808);
}

double NNfunction_ng_chiPlus2::synapse0x360d7a0() {
   return (neuron0x3607d00()*-0.224579);
}

double NNfunction_ng_chiPlus2::synapse0x360d7e0() {
   return (neuron0x3608040()*-0.461762);
}

double NNfunction_ng_chiPlus2::synapse0x360db60() {
   return (neuron0x36033f0()*0.0833832);
}

double NNfunction_ng_chiPlus2::synapse0x360dba0() {
   return (neuron0x36036a0()*-0.0563421);
}

double NNfunction_ng_chiPlus2::synapse0x360dbe0() {
   return (neuron0x36039e0()*-0.651635);
}

double NNfunction_ng_chiPlus2::synapse0x360dc20() {
   return (neuron0x3603d20()*0.260901);
}

double NNfunction_ng_chiPlus2::synapse0x360dc60() {
   return (neuron0x3604060()*-0.148401);
}

double NNfunction_ng_chiPlus2::synapse0x360dca0() {
   return (neuron0x36043a0()*-0.140891);
}

double NNfunction_ng_chiPlus2::synapse0x360dce0() {
   return (neuron0x36046e0()*0.00891641);
}

double NNfunction_ng_chiPlus2::synapse0x360dd20() {
   return (neuron0x3604a20()*-0.129628);
}

double NNfunction_ng_chiPlus2::synapse0x360dd60() {
   return (neuron0x3604d60()*-0.0696229);
}

double NNfunction_ng_chiPlus2::synapse0x360dda0() {
   return (neuron0x36050a0()*0.229385);
}

double NNfunction_ng_chiPlus2::synapse0x360dde0() {
   return (neuron0x36053e0()*0.0911742);
}

double NNfunction_ng_chiPlus2::synapse0x360de20() {
   return (neuron0x3605720()*-0.0467834);
}

double NNfunction_ng_chiPlus2::synapse0x360de60() {
   return (neuron0x3605a60()*0.0809086);
}

double NNfunction_ng_chiPlus2::synapse0x360dea0() {
   return (neuron0x3605da0()*0.276349);
}

double NNfunction_ng_chiPlus2::synapse0x360dee0() {
   return (neuron0x36060e0()*-0.0056707);
}

double NNfunction_ng_chiPlus2::synapse0x360df20() {
   return (neuron0x3606420()*-0.00874451);
}

double NNfunction_ng_chiPlus2::synapse0x360d9b0() {
   return (neuron0x3606760()*0.01552);
}

double NNfunction_ng_chiPlus2::synapse0x360d9f0() {
   return (neuron0x3606cc0()*0.135428);
}

double NNfunction_ng_chiPlus2::synapse0x360e070() {
   return (neuron0x3607000()*-0.169976);
}

double NNfunction_ng_chiPlus2::synapse0x360e0b0() {
   return (neuron0x3607340()*-0.117602);
}

double NNfunction_ng_chiPlus2::synapse0x360e0f0() {
   return (neuron0x3607680()*-0.119066);
}

double NNfunction_ng_chiPlus2::synapse0x360e130() {
   return (neuron0x36079c0()*-0.1161);
}

double NNfunction_ng_chiPlus2::synapse0x360e170() {
   return (neuron0x3607d00()*-0.122651);
}

double NNfunction_ng_chiPlus2::synapse0x360e1b0() {
   return (neuron0x3608040()*0.261098);
}

double NNfunction_ng_chiPlus2::synapse0x3606bb0() {
   return (neuron0x36033f0()*-0.0370795);
}

double NNfunction_ng_chiPlus2::synapse0x3606bf0() {
   return (neuron0x36036a0()*0.0558103);
}

double NNfunction_ng_chiPlus2::synapse0x3606c30() {
   return (neuron0x36039e0()*0.301866);
}

double NNfunction_ng_chiPlus2::synapse0x3606c70() {
   return (neuron0x3603d20()*-0.276178);
}

double NNfunction_ng_chiPlus2::synapse0x360e740() {
   return (neuron0x3604060()*0.020701);
}

double NNfunction_ng_chiPlus2::synapse0x360e780() {
   return (neuron0x36043a0()*-0.0298596);
}

double NNfunction_ng_chiPlus2::synapse0x360e7c0() {
   return (neuron0x36046e0()*-0.158408);
}

double NNfunction_ng_chiPlus2::synapse0x360e800() {
   return (neuron0x3604a20()*-0.0977542);
}

double NNfunction_ng_chiPlus2::synapse0x360e840() {
   return (neuron0x3604d60()*-0.00810338);
}

double NNfunction_ng_chiPlus2::synapse0x360e880() {
   return (neuron0x36050a0()*-0.0669011);
}

double NNfunction_ng_chiPlus2::synapse0x360e8c0() {
   return (neuron0x36053e0()*0.0897626);
}

double NNfunction_ng_chiPlus2::synapse0x360e900() {
   return (neuron0x3605720()*-0.556019);
}

double NNfunction_ng_chiPlus2::synapse0x360e940() {
   return (neuron0x3605a60()*-0.181254);
}

double NNfunction_ng_chiPlus2::synapse0x360e980() {
   return (neuron0x3605da0()*0.0898911);
}

double NNfunction_ng_chiPlus2::synapse0x360e9c0() {
   return (neuron0x36060e0()*-0.283308);
}

double NNfunction_ng_chiPlus2::synapse0x360ea00() {
   return (neuron0x3606420()*-0.205235);
}

double NNfunction_ng_chiPlus2::synapse0x360e380() {
   return (neuron0x3606760()*0.305445);
}

double NNfunction_ng_chiPlus2::synapse0x360e3c0() {
   return (neuron0x3606cc0()*0.153466);
}

double NNfunction_ng_chiPlus2::synapse0x360eb50() {
   return (neuron0x3607000()*-0.0146818);
}

double NNfunction_ng_chiPlus2::synapse0x360eb90() {
   return (neuron0x3607340()*-0.0787837);
}

double NNfunction_ng_chiPlus2::synapse0x360ebd0() {
   return (neuron0x3607680()*0.0871699);
}

double NNfunction_ng_chiPlus2::synapse0x360ec10() {
   return (neuron0x36079c0()*0.223989);
}

double NNfunction_ng_chiPlus2::synapse0x360ec50() {
   return (neuron0x3607d00()*0.0759286);
}

double NNfunction_ng_chiPlus2::synapse0x360ec90() {
   return (neuron0x3608040()*-0.534552);
}

double NNfunction_ng_chiPlus2::synapse0x360f010() {
   return (neuron0x36033f0()*-0.352112);
}

double NNfunction_ng_chiPlus2::synapse0x360f050() {
   return (neuron0x36036a0()*0.125921);
}

double NNfunction_ng_chiPlus2::synapse0x360f090() {
   return (neuron0x36039e0()*-0.126338);
}

double NNfunction_ng_chiPlus2::synapse0x360f0d0() {
   return (neuron0x3603d20()*0.574194);
}

double NNfunction_ng_chiPlus2::synapse0x360f110() {
   return (neuron0x3604060()*-0.106657);
}

double NNfunction_ng_chiPlus2::synapse0x360f150() {
   return (neuron0x36043a0()*0.14375);
}

double NNfunction_ng_chiPlus2::synapse0x360f190() {
   return (neuron0x36046e0()*-0.427599);
}

double NNfunction_ng_chiPlus2::synapse0x360f1d0() {
   return (neuron0x3604a20()*-0.278098);
}

double NNfunction_ng_chiPlus2::synapse0x360f210() {
   return (neuron0x3604d60()*0.18698);
}

double NNfunction_ng_chiPlus2::synapse0x360f250() {
   return (neuron0x36050a0()*0.104653);
}

double NNfunction_ng_chiPlus2::synapse0x360f290() {
   return (neuron0x36053e0()*0.349455);
}

double NNfunction_ng_chiPlus2::synapse0x360f2d0() {
   return (neuron0x3605720()*0.0140621);
}

double NNfunction_ng_chiPlus2::synapse0x360f310() {
   return (neuron0x3605a60()*-0.230537);
}

double NNfunction_ng_chiPlus2::synapse0x360f350() {
   return (neuron0x3605da0()*0.252198);
}

double NNfunction_ng_chiPlus2::synapse0x360f390() {
   return (neuron0x36060e0()*0.205893);
}

double NNfunction_ng_chiPlus2::synapse0x360f3d0() {
   return (neuron0x3606420()*-0.150741);
}

double NNfunction_ng_chiPlus2::synapse0x360ee60() {
   return (neuron0x3606760()*0.011433);
}

double NNfunction_ng_chiPlus2::synapse0x360eea0() {
   return (neuron0x3606cc0()*0.188904);
}

double NNfunction_ng_chiPlus2::synapse0x360f520() {
   return (neuron0x3607000()*-0.0607023);
}

double NNfunction_ng_chiPlus2::synapse0x360f560() {
   return (neuron0x3607340()*-0.458328);
}

double NNfunction_ng_chiPlus2::synapse0x360f5a0() {
   return (neuron0x3607680()*0.18655);
}

double NNfunction_ng_chiPlus2::synapse0x360f5e0() {
   return (neuron0x36079c0()*-0.490641);
}

double NNfunction_ng_chiPlus2::synapse0x360f620() {
   return (neuron0x3607d00()*-0.128866);
}

double NNfunction_ng_chiPlus2::synapse0x360f660() {
   return (neuron0x3608040()*-0.27445);
}

double NNfunction_ng_chiPlus2::synapse0x360f9e0() {
   return (neuron0x36033f0()*-0.102003);
}

double NNfunction_ng_chiPlus2::synapse0x360fa20() {
   return (neuron0x36036a0()*0.00235754);
}

double NNfunction_ng_chiPlus2::synapse0x360fa60() {
   return (neuron0x36039e0()*0.0230937);
}

double NNfunction_ng_chiPlus2::synapse0x360faa0() {
   return (neuron0x3603d20()*0.200595);
}

double NNfunction_ng_chiPlus2::synapse0x360fae0() {
   return (neuron0x3604060()*0.280088);
}

double NNfunction_ng_chiPlus2::synapse0x360fb20() {
   return (neuron0x36043a0()*0.133693);
}

double NNfunction_ng_chiPlus2::synapse0x360fb60() {
   return (neuron0x36046e0()*0.119791);
}

double NNfunction_ng_chiPlus2::synapse0x360fba0() {
   return (neuron0x3604a20()*0.115897);
}

double NNfunction_ng_chiPlus2::synapse0x360fbe0() {
   return (neuron0x3604d60()*0.0766633);
}

double NNfunction_ng_chiPlus2::synapse0x360fc20() {
   return (neuron0x36050a0()*-0.0140974);
}

double NNfunction_ng_chiPlus2::synapse0x360fc60() {
   return (neuron0x36053e0()*-0.019278);
}

double NNfunction_ng_chiPlus2::synapse0x360fca0() {
   return (neuron0x3605720()*0.155404);
}

double NNfunction_ng_chiPlus2::synapse0x360fce0() {
   return (neuron0x3605a60()*-0.11361);
}

double NNfunction_ng_chiPlus2::synapse0x360fd20() {
   return (neuron0x3605da0()*0.1171);
}

double NNfunction_ng_chiPlus2::synapse0x360fd60() {
   return (neuron0x36060e0()*0.168502);
}

double NNfunction_ng_chiPlus2::synapse0x360fda0() {
   return (neuron0x3606420()*0.00281882);
}

double NNfunction_ng_chiPlus2::synapse0x360f830() {
   return (neuron0x3606760()*0.214959);
}

double NNfunction_ng_chiPlus2::synapse0x360f870() {
   return (neuron0x3606cc0()*0.197023);
}

double NNfunction_ng_chiPlus2::synapse0x360c600() {
   return (neuron0x3607000()*0.0416805);
}

double NNfunction_ng_chiPlus2::synapse0x360c640() {
   return (neuron0x3607340()*-0.0942142);
}

double NNfunction_ng_chiPlus2::synapse0x360c680() {
   return (neuron0x3607680()*-0.0915261);
}

double NNfunction_ng_chiPlus2::synapse0x360c6c0() {
   return (neuron0x36079c0()*0.0785981);
}

double NNfunction_ng_chiPlus2::synapse0x360c700() {
   return (neuron0x3607d00()*-0.0587814);
}

double NNfunction_ng_chiPlus2::synapse0x360c740() {
   return (neuron0x3608040()*-0.146474);
}

double NNfunction_ng_chiPlus2::synapse0x360cac0() {
   return (neuron0x36033f0()*-0.469124);
}

double NNfunction_ng_chiPlus2::synapse0x360cb00() {
   return (neuron0x36036a0()*0.388501);
}

double NNfunction_ng_chiPlus2::synapse0x360cb40() {
   return (neuron0x36039e0()*0.152865);
}

double NNfunction_ng_chiPlus2::synapse0x360cb80() {
   return (neuron0x3603d20()*-0.21727);
}

double NNfunction_ng_chiPlus2::synapse0x360cbc0() {
   return (neuron0x3604060()*-0.229151);
}

double NNfunction_ng_chiPlus2::synapse0x360cc00() {
   return (neuron0x36043a0()*0.00178316);
}

double NNfunction_ng_chiPlus2::synapse0x360cc40() {
   return (neuron0x36046e0()*0.0537912);
}

double NNfunction_ng_chiPlus2::synapse0x360cc80() {
   return (neuron0x3604a20()*-0.0482852);
}

double NNfunction_ng_chiPlus2::synapse0x360ccc0() {
   return (neuron0x3604d60()*-0.224588);
}

double NNfunction_ng_chiPlus2::synapse0x360cd00() {
   return (neuron0x36050a0()*-0.0978157);
}

double NNfunction_ng_chiPlus2::synapse0x360cd40() {
   return (neuron0x36053e0()*-0.20563);
}

double NNfunction_ng_chiPlus2::synapse0x360cd80() {
   return (neuron0x3605720()*-0.147409);
}

double NNfunction_ng_chiPlus2::synapse0x360cdc0() {
   return (neuron0x3605a60()*0.0567535);
}

double NNfunction_ng_chiPlus2::synapse0x3610f00() {
   return (neuron0x3605da0()*0.0337461);
}

double NNfunction_ng_chiPlus2::synapse0x3610f40() {
   return (neuron0x36060e0()*-0.278853);
}

double NNfunction_ng_chiPlus2::synapse0x3610f80() {
   return (neuron0x3606420()*0.355275);
}

double NNfunction_ng_chiPlus2::synapse0x360c910() {
   return (neuron0x3606760()*0.166351);
}

double NNfunction_ng_chiPlus2::synapse0x360c950() {
   return (neuron0x3606cc0()*0.169602);
}

double NNfunction_ng_chiPlus2::synapse0x36110d0() {
   return (neuron0x3607000()*0.318043);
}

double NNfunction_ng_chiPlus2::synapse0x3611110() {
   return (neuron0x3607340()*0.196784);
}

double NNfunction_ng_chiPlus2::synapse0x3611150() {
   return (neuron0x3607680()*-0.106449);
}

double NNfunction_ng_chiPlus2::synapse0x3611190() {
   return (neuron0x36079c0()*0.0259969);
}

double NNfunction_ng_chiPlus2::synapse0x36111d0() {
   return (neuron0x3607d00()*-0.236938);
}

double NNfunction_ng_chiPlus2::synapse0x3611210() {
   return (neuron0x3608040()*0.420673);
}

double NNfunction_ng_chiPlus2::synapse0x3611590() {
   return (neuron0x36033f0()*-0.213298);
}

double NNfunction_ng_chiPlus2::synapse0x36115d0() {
   return (neuron0x36036a0()*-0.11249);
}

double NNfunction_ng_chiPlus2::synapse0x3611610() {
   return (neuron0x36039e0()*-0.106961);
}

double NNfunction_ng_chiPlus2::synapse0x3611650() {
   return (neuron0x3603d20()*-0.128756);
}

double NNfunction_ng_chiPlus2::synapse0x3611690() {
   return (neuron0x3604060()*0.0487919);
}

double NNfunction_ng_chiPlus2::synapse0x36116d0() {
   return (neuron0x36043a0()*-0.0313442);
}

double NNfunction_ng_chiPlus2::synapse0x3611710() {
   return (neuron0x36046e0()*-0.186902);
}

double NNfunction_ng_chiPlus2::synapse0x3611750() {
   return (neuron0x3604a20()*0.00723354);
}

double NNfunction_ng_chiPlus2::synapse0x3611790() {
   return (neuron0x3604d60()*0.0250779);
}

double NNfunction_ng_chiPlus2::synapse0x36117d0() {
   return (neuron0x36050a0()*-0.257955);
}

double NNfunction_ng_chiPlus2::synapse0x3611810() {
   return (neuron0x36053e0()*0.233328);
}

double NNfunction_ng_chiPlus2::synapse0x3611850() {
   return (neuron0x3605720()*0.648857);
}

double NNfunction_ng_chiPlus2::synapse0x3611890() {
   return (neuron0x3605a60()*-0.182361);
}

double NNfunction_ng_chiPlus2::synapse0x36118d0() {
   return (neuron0x3605da0()*-0.185931);
}

double NNfunction_ng_chiPlus2::synapse0x3611910() {
   return (neuron0x36060e0()*-0.254849);
}

double NNfunction_ng_chiPlus2::synapse0x3611950() {
   return (neuron0x3606420()*-0.131425);
}

double NNfunction_ng_chiPlus2::synapse0x36113e0() {
   return (neuron0x3606760()*0.208228);
}

double NNfunction_ng_chiPlus2::synapse0x3611420() {
   return (neuron0x3606cc0()*0.230945);
}

double NNfunction_ng_chiPlus2::synapse0x3611aa0() {
   return (neuron0x3607000()*0.292758);
}

double NNfunction_ng_chiPlus2::synapse0x3611ae0() {
   return (neuron0x3607340()*0.0329216);
}

double NNfunction_ng_chiPlus2::synapse0x3611b20() {
   return (neuron0x3607680()*-0.51603);
}

double NNfunction_ng_chiPlus2::synapse0x3611b60() {
   return (neuron0x36079c0()*-0.125884);
}

double NNfunction_ng_chiPlus2::synapse0x3611ba0() {
   return (neuron0x3607d00()*-0.176961);
}

double NNfunction_ng_chiPlus2::synapse0x3611be0() {
   return (neuron0x3608040()*0.68487);
}

double NNfunction_ng_chiPlus2::synapse0x3611f60() {
   return (neuron0x36033f0()*-0.0196332);
}

double NNfunction_ng_chiPlus2::synapse0x3611fa0() {
   return (neuron0x36036a0()*0.0234898);
}

double NNfunction_ng_chiPlus2::synapse0x3611fe0() {
   return (neuron0x36039e0()*-0.040827);
}

double NNfunction_ng_chiPlus2::synapse0x3612020() {
   return (neuron0x3603d20()*-1.37251);
}

double NNfunction_ng_chiPlus2::synapse0x3612060() {
   return (neuron0x3604060()*-0.0471321);
}

double NNfunction_ng_chiPlus2::synapse0x36120a0() {
   return (neuron0x36043a0()*-0.040287);
}

double NNfunction_ng_chiPlus2::synapse0x36120e0() {
   return (neuron0x36046e0()*-0.0617091);
}

double NNfunction_ng_chiPlus2::synapse0x3612120() {
   return (neuron0x3604a20()*-0.0132472);
}

double NNfunction_ng_chiPlus2::synapse0x3612160() {
   return (neuron0x3604d60()*-0.0597803);
}

double NNfunction_ng_chiPlus2::synapse0x36121a0() {
   return (neuron0x36050a0()*0.0127097);
}

double NNfunction_ng_chiPlus2::synapse0x36121e0() {
   return (neuron0x36053e0()*-0.0158972);
}

double NNfunction_ng_chiPlus2::synapse0x3612220() {
   return (neuron0x3605720()*-0.41157);
}

double NNfunction_ng_chiPlus2::synapse0x3612260() {
   return (neuron0x3605a60()*-0.118973);
}

double NNfunction_ng_chiPlus2::synapse0x36122a0() {
   return (neuron0x3605da0()*-0.0257984);
}

double NNfunction_ng_chiPlus2::synapse0x36122e0() {
   return (neuron0x36060e0()*-0.146753);
}

double NNfunction_ng_chiPlus2::synapse0x3612320() {
   return (neuron0x3606420()*-0.183217);
}

double NNfunction_ng_chiPlus2::synapse0x3611db0() {
   return (neuron0x3606760()*-0.00490464);
}

double NNfunction_ng_chiPlus2::synapse0x3611df0() {
   return (neuron0x3606cc0()*-0.0865217);
}

double NNfunction_ng_chiPlus2::synapse0x3612470() {
   return (neuron0x3607000()*-0.0991134);
}

double NNfunction_ng_chiPlus2::synapse0x36124b0() {
   return (neuron0x3607340()*-0.00393592);
}

double NNfunction_ng_chiPlus2::synapse0x36124f0() {
   return (neuron0x3607680()*-0.0397879);
}

double NNfunction_ng_chiPlus2::synapse0x3612530() {
   return (neuron0x36079c0()*-0.0348174);
}

double NNfunction_ng_chiPlus2::synapse0x3612570() {
   return (neuron0x3607d00()*0.0325124);
}

double NNfunction_ng_chiPlus2::synapse0x36125b0() {
   return (neuron0x3608040()*0.446211);
}

double NNfunction_ng_chiPlus2::synapse0x3612930() {
   return (neuron0x36033f0()*0.501434);
}

double NNfunction_ng_chiPlus2::synapse0x3612970() {
   return (neuron0x36036a0()*-0.0725394);
}

double NNfunction_ng_chiPlus2::synapse0x36129b0() {
   return (neuron0x36039e0()*0.670352);
}

double NNfunction_ng_chiPlus2::synapse0x36129f0() {
   return (neuron0x3603d20()*-0.326578);
}

double NNfunction_ng_chiPlus2::synapse0x3612a30() {
   return (neuron0x3604060()*0.318208);
}

double NNfunction_ng_chiPlus2::synapse0x3612a70() {
   return (neuron0x36043a0()*-0.305379);
}

double NNfunction_ng_chiPlus2::synapse0x3612ab0() {
   return (neuron0x36046e0()*0.0586214);
}

double NNfunction_ng_chiPlus2::synapse0x3612af0() {
   return (neuron0x3604a20()*0.139018);
}

double NNfunction_ng_chiPlus2::synapse0x3612b30() {
   return (neuron0x3604d60()*-0.249144);
}

double NNfunction_ng_chiPlus2::synapse0x3612b70() {
   return (neuron0x36050a0()*0.289952);
}

double NNfunction_ng_chiPlus2::synapse0x3612bb0() {
   return (neuron0x36053e0()*0.327375);
}

double NNfunction_ng_chiPlus2::synapse0x3612bf0() {
   return (neuron0x3605720()*0.378878);
}

double NNfunction_ng_chiPlus2::synapse0x3612c30() {
   return (neuron0x3605a60()*0.0229901);
}

double NNfunction_ng_chiPlus2::synapse0x3612c70() {
   return (neuron0x3605da0()*0.28103);
}

double NNfunction_ng_chiPlus2::synapse0x3612cb0() {
   return (neuron0x36060e0()*-0.334383);
}

double NNfunction_ng_chiPlus2::synapse0x3612cf0() {
   return (neuron0x3606420()*-0.0144548);
}

double NNfunction_ng_chiPlus2::synapse0x3612780() {
   return (neuron0x3606760()*-0.11866);
}

double NNfunction_ng_chiPlus2::synapse0x36127c0() {
   return (neuron0x3606cc0()*-0.0682973);
}

double NNfunction_ng_chiPlus2::synapse0x3612e40() {
   return (neuron0x3607000()*-0.174846);
}

double NNfunction_ng_chiPlus2::synapse0x3612e80() {
   return (neuron0x3607340()*-0.21593);
}

double NNfunction_ng_chiPlus2::synapse0x3612ec0() {
   return (neuron0x3607680()*0.0818031);
}

double NNfunction_ng_chiPlus2::synapse0x3612f00() {
   return (neuron0x36079c0()*-0.00452783);
}

double NNfunction_ng_chiPlus2::synapse0x3612f40() {
   return (neuron0x3607d00()*0.184005);
}

double NNfunction_ng_chiPlus2::synapse0x3612f80() {
   return (neuron0x3608040()*-0.117326);
}

double NNfunction_ng_chiPlus2::synapse0x3613300() {
   return (neuron0x36033f0()*0.104203);
}

double NNfunction_ng_chiPlus2::synapse0x3603580() {
   return (neuron0x36036a0()*0.0128501);
}

double NNfunction_ng_chiPlus2::synapse0x36035c0() {
   return (neuron0x36039e0()*-0.104917);
}

double NNfunction_ng_chiPlus2::synapse0x36038c0() {
   return (neuron0x3603d20()*-1.39572);
}

double NNfunction_ng_chiPlus2::synapse0x3603900() {
   return (neuron0x3604060()*-0.0311686);
}

double NNfunction_ng_chiPlus2::synapse0x3603c00() {
   return (neuron0x36043a0()*-0.0507807);
}

double NNfunction_ng_chiPlus2::synapse0x3603c40() {
   return (neuron0x36046e0()*0.00912104);
}

double NNfunction_ng_chiPlus2::synapse0x3603f40() {
   return (neuron0x3604a20()*0.0304655);
}

double NNfunction_ng_chiPlus2::synapse0x3603f80() {
   return (neuron0x3604d60()*0.0276744);
}

double NNfunction_ng_chiPlus2::synapse0x3604280() {
   return (neuron0x36050a0()*-0.0173727);
}

double NNfunction_ng_chiPlus2::synapse0x36042c0() {
   return (neuron0x36053e0()*-0.00957412);
}

double NNfunction_ng_chiPlus2::synapse0x36045c0() {
   return (neuron0x3605720()*0.501408);
}

double NNfunction_ng_chiPlus2::synapse0x3604600() {
   return (neuron0x3605a60()*-0.192726);
}

double NNfunction_ng_chiPlus2::synapse0x3604900() {
   return (neuron0x3605da0()*-0.0235176);
}

double NNfunction_ng_chiPlus2::synapse0x3604940() {
   return (neuron0x36060e0()*0.0953307);
}

double NNfunction_ng_chiPlus2::synapse0x3604c40() {
   return (neuron0x3606420()*0.0563372);
}

double NNfunction_ng_chiPlus2::synapse0x3604c80() {
   return (neuron0x3606760()*0.0783528);
}

double NNfunction_ng_chiPlus2::synapse0x3604f80() {
   return (neuron0x3606cc0()*-0.00588885);
}

double NNfunction_ng_chiPlus2::synapse0x3604fc0() {
   return (neuron0x3607000()*0.0234759);
}

double NNfunction_ng_chiPlus2::synapse0x36052c0() {
   return (neuron0x3607340()*-0.077879);
}

double NNfunction_ng_chiPlus2::synapse0x3605300() {
   return (neuron0x3607680()*0.011099);
}

double NNfunction_ng_chiPlus2::synapse0x3605600() {
   return (neuron0x36079c0()*-0.0288413);
}

double NNfunction_ng_chiPlus2::synapse0x3605640() {
   return (neuron0x3607d00()*0.0242022);
}

double NNfunction_ng_chiPlus2::synapse0x3605940() {
   return (neuron0x3608040()*-0.573941);
}

double NNfunction_ng_chiPlus2::synapse0x3605980() {
   return (neuron0x36033f0()*0.0509969);
}

double NNfunction_ng_chiPlus2::synapse0x3606640() {
   return (neuron0x36036a0()*-0.0187879);
}

double NNfunction_ng_chiPlus2::synapse0x3606680() {
   return (neuron0x36039e0()*0.144737);
}

double NNfunction_ng_chiPlus2::synapse0x3613150() {
   return (neuron0x3603d20()*0.274126);
}

double NNfunction_ng_chiPlus2::synapse0x3613190() {
   return (neuron0x3604060()*0.0175056);
}

double NNfunction_ng_chiPlus2::synapse0x3606980() {
   return (neuron0x36043a0()*0.0061964);
}

double NNfunction_ng_chiPlus2::synapse0x36069c0() {
   return (neuron0x36046e0()*0.0310702);
}

double NNfunction_ng_chiPlus2::synapse0x3606ee0() {
   return (neuron0x3604a20()*0.00150899);
}

double NNfunction_ng_chiPlus2::synapse0x3606f20() {
   return (neuron0x3604d60()*0.0187212);
}

double NNfunction_ng_chiPlus2::synapse0x3607220() {
   return (neuron0x36050a0()*0.00199938);
}

double NNfunction_ng_chiPlus2::synapse0x3607260() {
   return (neuron0x36053e0()*0.00645976);
}

double NNfunction_ng_chiPlus2::synapse0x3607560() {
   return (neuron0x3605720()*0.739768);
}

double NNfunction_ng_chiPlus2::synapse0x36075a0() {
   return (neuron0x3605a60()*-0.138566);
}

double NNfunction_ng_chiPlus2::synapse0x36078a0() {
   return (neuron0x3605da0()*-0.00220702);
}

double NNfunction_ng_chiPlus2::synapse0x36078e0() {
   return (neuron0x36060e0()*0.0128361);
}

double NNfunction_ng_chiPlus2::synapse0x3607be0() {
   return (neuron0x3606420()*0.0433138);
}

double NNfunction_ng_chiPlus2::synapse0x3607c20() {
   return (neuron0x3606760()*0.0232785);
}

double NNfunction_ng_chiPlus2::synapse0x3607f20() {
   return (neuron0x3606cc0()*0.00339334);
}

double NNfunction_ng_chiPlus2::synapse0x3607f60() {
   return (neuron0x3607000()*0.0260034);
}

double NNfunction_ng_chiPlus2::synapse0x3608260() {
   return (neuron0x3607340()*-0.0108832);
}

double NNfunction_ng_chiPlus2::synapse0x36082a0() {
   return (neuron0x3607680()*0.00403377);
}

double NNfunction_ng_chiPlus2::synapse0x3605c80() {
   return (neuron0x36079c0()*0.00994675);
}

double NNfunction_ng_chiPlus2::synapse0x3605cc0() {
   return (neuron0x3607d00()*0.00524208);
}

double NNfunction_ng_chiPlus2::synapse0x3615070() {
   return (neuron0x3608040()*-0.497772);
}

double NNfunction_ng_chiPlus2::synapse0x36153f0() {
   return (neuron0x36033f0()*-0.02099);
}

double NNfunction_ng_chiPlus2::synapse0x3615430() {
   return (neuron0x36036a0()*0.00681643);
}

double NNfunction_ng_chiPlus2::synapse0x3615470() {
   return (neuron0x36039e0()*-3.29209);
}

double NNfunction_ng_chiPlus2::synapse0x36154b0() {
   return (neuron0x3603d20()*0.0551777);
}

double NNfunction_ng_chiPlus2::synapse0x36154f0() {
   return (neuron0x3604060()*-0.0127904);
}

double NNfunction_ng_chiPlus2::synapse0x3615530() {
   return (neuron0x36043a0()*-0.0130446);
}

double NNfunction_ng_chiPlus2::synapse0x3615570() {
   return (neuron0x36046e0()*-0.00762225);
}

double NNfunction_ng_chiPlus2::synapse0x36155b0() {
   return (neuron0x3604a20()*-0.00550534);
}

double NNfunction_ng_chiPlus2::synapse0x36155f0() {
   return (neuron0x3604d60()*-0.0163374);
}

double NNfunction_ng_chiPlus2::synapse0x3615630() {
   return (neuron0x36050a0()*-0.00521886);
}

double NNfunction_ng_chiPlus2::synapse0x3615670() {
   return (neuron0x36053e0()*-0.00736746);
}

double NNfunction_ng_chiPlus2::synapse0x36156b0() {
   return (neuron0x3605720()*-0.0667593);
}

double NNfunction_ng_chiPlus2::synapse0x36156f0() {
   return (neuron0x3605a60()*-0.000344479);
}

double NNfunction_ng_chiPlus2::synapse0x3615730() {
   return (neuron0x3605da0()*0.00740043);
}

double NNfunction_ng_chiPlus2::synapse0x3615770() {
   return (neuron0x36060e0()*0.00994096);
}

double NNfunction_ng_chiPlus2::synapse0x36157b0() {
   return (neuron0x3606420()*0.000730232);
}

double NNfunction_ng_chiPlus2::synapse0x3615240() {
   return (neuron0x3606760()*0.0105847);
}

double NNfunction_ng_chiPlus2::synapse0x3615280() {
   return (neuron0x3606cc0()*0.000195168);
}

double NNfunction_ng_chiPlus2::synapse0x3615900() {
   return (neuron0x3607000()*-0.00755318);
}

double NNfunction_ng_chiPlus2::synapse0x3615940() {
   return (neuron0x3607340()*0.00357915);
}

double NNfunction_ng_chiPlus2::synapse0x3615980() {
   return (neuron0x3607680()*-0.000456925);
}

double NNfunction_ng_chiPlus2::synapse0x36159c0() {
   return (neuron0x36079c0()*-0.00489592);
}

double NNfunction_ng_chiPlus2::synapse0x3615a00() {
   return (neuron0x3607d00()*0.00269573);
}

double NNfunction_ng_chiPlus2::synapse0x3615a40() {
   return (neuron0x3608040()*2.89566);
}

double NNfunction_ng_chiPlus2::synapse0x3615dc0() {
   return (neuron0x36033f0()*0.00664608);
}

double NNfunction_ng_chiPlus2::synapse0x3615e00() {
   return (neuron0x36036a0()*-0.00778587);
}

double NNfunction_ng_chiPlus2::synapse0x3615e40() {
   return (neuron0x36039e0()*1.01271);
}

double NNfunction_ng_chiPlus2::synapse0x3615e80() {
   return (neuron0x3603d20()*-0.349508);
}

double NNfunction_ng_chiPlus2::synapse0x3615ec0() {
   return (neuron0x3604060()*0.00064222);
}

double NNfunction_ng_chiPlus2::synapse0x3615f00() {
   return (neuron0x36043a0()*-0.0169642);
}

double NNfunction_ng_chiPlus2::synapse0x3615f40() {
   return (neuron0x36046e0()*0.0178665);
}

double NNfunction_ng_chiPlus2::synapse0x3615f80() {
   return (neuron0x3604a20()*0.00180409);
}

double NNfunction_ng_chiPlus2::synapse0x3615fc0() {
   return (neuron0x3604d60()*0.00459449);
}

double NNfunction_ng_chiPlus2::synapse0x3616000() {
   return (neuron0x36050a0()*-0.00603948);
}

double NNfunction_ng_chiPlus2::synapse0x3616040() {
   return (neuron0x36053e0()*0.012005);
}

double NNfunction_ng_chiPlus2::synapse0x3616080() {
   return (neuron0x3605720()*-0.674084);
}

double NNfunction_ng_chiPlus2::synapse0x36160c0() {
   return (neuron0x3605a60()*1.54524);
}

double NNfunction_ng_chiPlus2::synapse0x3616100() {
   return (neuron0x3605da0()*0.0474939);
}

double NNfunction_ng_chiPlus2::synapse0x3616140() {
   return (neuron0x36060e0()*-0.0160969);
}

double NNfunction_ng_chiPlus2::synapse0x3616180() {
   return (neuron0x3606420()*-0.0187295);
}

double NNfunction_ng_chiPlus2::synapse0x3615c10() {
   return (neuron0x3606760()*0.0285988);
}

double NNfunction_ng_chiPlus2::synapse0x3615c50() {
   return (neuron0x3606cc0()*-0.0136237);
}

double NNfunction_ng_chiPlus2::synapse0x36162d0() {
   return (neuron0x3607000()*0.0231799);
}

double NNfunction_ng_chiPlus2::synapse0x3616310() {
   return (neuron0x3607340()*0.0154397);
}

double NNfunction_ng_chiPlus2::synapse0x3616350() {
   return (neuron0x3607680()*0.0333115);
}

double NNfunction_ng_chiPlus2::synapse0x3616390() {
   return (neuron0x36079c0()*-0.00309975);
}

double NNfunction_ng_chiPlus2::synapse0x36163d0() {
   return (neuron0x3607d00()*-0.0087912);
}

double NNfunction_ng_chiPlus2::synapse0x3616410() {
   return (neuron0x3608040()*-0.312145);
}

double NNfunction_ng_chiPlus2::synapse0x3616790() {
   return (neuron0x36033f0()*-0.166502);
}

double NNfunction_ng_chiPlus2::synapse0x36167d0() {
   return (neuron0x36036a0()*-0.108928);
}

double NNfunction_ng_chiPlus2::synapse0x3616810() {
   return (neuron0x36039e0()*0.314002);
}

double NNfunction_ng_chiPlus2::synapse0x3616850() {
   return (neuron0x3603d20()*-1.31297);
}

double NNfunction_ng_chiPlus2::synapse0x3616890() {
   return (neuron0x3604060()*-0.165964);
}

double NNfunction_ng_chiPlus2::synapse0x36168d0() {
   return (neuron0x36043a0()*0.141591);
}

double NNfunction_ng_chiPlus2::synapse0x3616910() {
   return (neuron0x36046e0()*0.212149);
}

double NNfunction_ng_chiPlus2::synapse0x3616950() {
   return (neuron0x3604a20()*-0.0315153);
}

double NNfunction_ng_chiPlus2::synapse0x3616990() {
   return (neuron0x3604d60()*-0.0136089);
}

double NNfunction_ng_chiPlus2::synapse0x36169d0() {
   return (neuron0x36050a0()*-0.133623);
}

double NNfunction_ng_chiPlus2::synapse0x3616a10() {
   return (neuron0x36053e0()*0.0566427);
}

double NNfunction_ng_chiPlus2::synapse0x3616a50() {
   return (neuron0x3605720()*-0.310744);
}

double NNfunction_ng_chiPlus2::synapse0x3616a90() {
   return (neuron0x3605a60()*-0.204491);
}

double NNfunction_ng_chiPlus2::synapse0x3616ad0() {
   return (neuron0x3605da0()*0.0174693);
}

double NNfunction_ng_chiPlus2::synapse0x3616b10() {
   return (neuron0x36060e0()*0.117966);
}

double NNfunction_ng_chiPlus2::synapse0x3616b50() {
   return (neuron0x3606420()*0.342145);
}

double NNfunction_ng_chiPlus2::synapse0x36165e0() {
   return (neuron0x3606760()*-0.328975);
}

double NNfunction_ng_chiPlus2::synapse0x3616620() {
   return (neuron0x3606cc0()*-0.0138543);
}

double NNfunction_ng_chiPlus2::synapse0x3616ca0() {
   return (neuron0x3607000()*-0.214844);
}

double NNfunction_ng_chiPlus2::synapse0x3616ce0() {
   return (neuron0x3607340()*0.0712421);
}

double NNfunction_ng_chiPlus2::synapse0x3616d20() {
   return (neuron0x3607680()*0.0832326);
}

double NNfunction_ng_chiPlus2::synapse0x3616d60() {
   return (neuron0x36079c0()*-0.0913711);
}

double NNfunction_ng_chiPlus2::synapse0x3616da0() {
   return (neuron0x3607d00()*-0.0892718);
}

double NNfunction_ng_chiPlus2::synapse0x3616de0() {
   return (neuron0x3608040()*0.645316);
}

double NNfunction_ng_chiPlus2::synapse0x3617160() {
   return (neuron0x36033f0()*-0.0323066);
}

double NNfunction_ng_chiPlus2::synapse0x36171a0() {
   return (neuron0x36036a0()*-0.0179858);
}

double NNfunction_ng_chiPlus2::synapse0x36171e0() {
   return (neuron0x36039e0()*-1.14218);
}

double NNfunction_ng_chiPlus2::synapse0x3617220() {
   return (neuron0x3603d20()*0.0947936);
}

double NNfunction_ng_chiPlus2::synapse0x3617260() {
   return (neuron0x3604060()*0.0502797);
}

double NNfunction_ng_chiPlus2::synapse0x36172a0() {
   return (neuron0x36043a0()*0.0387958);
}

double NNfunction_ng_chiPlus2::synapse0x36172e0() {
   return (neuron0x36046e0()*0.0148933);
}

double NNfunction_ng_chiPlus2::synapse0x3617320() {
   return (neuron0x3604a20()*-0.00420086);
}

double NNfunction_ng_chiPlus2::synapse0x3617360() {
   return (neuron0x3604d60()*0.0312964);
}

double NNfunction_ng_chiPlus2::synapse0x36173a0() {
   return (neuron0x36050a0()*0.0358197);
}

double NNfunction_ng_chiPlus2::synapse0x36173e0() {
   return (neuron0x36053e0()*-0.000214505);
}

double NNfunction_ng_chiPlus2::synapse0x3617420() {
   return (neuron0x3605720()*-0.11527);
}

double NNfunction_ng_chiPlus2::synapse0x3617460() {
   return (neuron0x3605a60()*-1.48241);
}

double NNfunction_ng_chiPlus2::synapse0x36174a0() {
   return (neuron0x3605da0()*-0.00808089);
}

double NNfunction_ng_chiPlus2::synapse0x36174e0() {
   return (neuron0x36060e0()*-0.0111237);
}

double NNfunction_ng_chiPlus2::synapse0x3617520() {
   return (neuron0x3606420()*0.0110265);
}

double NNfunction_ng_chiPlus2::synapse0x3616fb0() {
   return (neuron0x3606760()*-0.0206037);
}

double NNfunction_ng_chiPlus2::synapse0x3616ff0() {
   return (neuron0x3606cc0()*3.20614e-05);
}

double NNfunction_ng_chiPlus2::synapse0x3617670() {
   return (neuron0x3607000()*-0.0167597);
}

double NNfunction_ng_chiPlus2::synapse0x36176b0() {
   return (neuron0x3607340()*0.00439856);
}

double NNfunction_ng_chiPlus2::synapse0x36176f0() {
   return (neuron0x3607680()*-0.0116425);
}

double NNfunction_ng_chiPlus2::synapse0x3617730() {
   return (neuron0x36079c0()*0.0131875);
}

double NNfunction_ng_chiPlus2::synapse0x3617770() {
   return (neuron0x3607d00()*-0.0124404);
}

double NNfunction_ng_chiPlus2::synapse0x36177b0() {
   return (neuron0x3608040()*0.67736);
}

double NNfunction_ng_chiPlus2::synapse0x3617b30() {
   return (neuron0x36033f0()*-0.000569335);
}

double NNfunction_ng_chiPlus2::synapse0x3617b70() {
   return (neuron0x36036a0()*-0.00110468);
}

double NNfunction_ng_chiPlus2::synapse0x3617bb0() {
   return (neuron0x36039e0()*0.184914);
}

double NNfunction_ng_chiPlus2::synapse0x3617bf0() {
   return (neuron0x3603d20()*-0.621509);
}

double NNfunction_ng_chiPlus2::synapse0x3617c30() {
   return (neuron0x3604060()*0.00128431);
}

double NNfunction_ng_chiPlus2::synapse0x3617c70() {
   return (neuron0x36043a0()*-0.00828133);
}

double NNfunction_ng_chiPlus2::synapse0x3617cb0() {
   return (neuron0x36046e0()*0.00115012);
}

double NNfunction_ng_chiPlus2::synapse0x3617cf0() {
   return (neuron0x3604a20()*-0.0016314);
}

double NNfunction_ng_chiPlus2::synapse0x3617d30() {
   return (neuron0x3604d60()*-0.00898468);
}

double NNfunction_ng_chiPlus2::synapse0x360fef0() {
   return (neuron0x36050a0()*-0.00850414);
}

double NNfunction_ng_chiPlus2::synapse0x360ff30() {
   return (neuron0x36053e0()*0.00519612);
}

double NNfunction_ng_chiPlus2::synapse0x360ff70() {
   return (neuron0x3605720()*0.0858579);
}

double NNfunction_ng_chiPlus2::synapse0x360ffb0() {
   return (neuron0x3605a60()*-0.0604761);
}

double NNfunction_ng_chiPlus2::synapse0x360fff0() {
   return (neuron0x3605da0()*0.00448892);
}

double NNfunction_ng_chiPlus2::synapse0x3610030() {
   return (neuron0x36060e0()*0.0120469);
}

double NNfunction_ng_chiPlus2::synapse0x3610070() {
   return (neuron0x3606420()*0.00811216);
}

double NNfunction_ng_chiPlus2::synapse0x3617980() {
   return (neuron0x3606760()*0.0132599);
}

double NNfunction_ng_chiPlus2::synapse0x36179c0() {
   return (neuron0x3606cc0()*0.00669478);
}

double NNfunction_ng_chiPlus2::synapse0x36101c0() {
   return (neuron0x3607000()*0.00987477);
}

double NNfunction_ng_chiPlus2::synapse0x3610200() {
   return (neuron0x3607340()*-0.00322328);
}

double NNfunction_ng_chiPlus2::synapse0x3610240() {
   return (neuron0x3607680()*0.000113471);
}

double NNfunction_ng_chiPlus2::synapse0x3610280() {
   return (neuron0x36079c0()*-0.0125939);
}

double NNfunction_ng_chiPlus2::synapse0x36102c0() {
   return (neuron0x3607d00()*0.00433646);
}

double NNfunction_ng_chiPlus2::synapse0x3610300() {
   return (neuron0x3608040()*-0.293308);
}

double NNfunction_ng_chiPlus2::synapse0x3610680() {
   return (neuron0x36033f0()*-0.240264);
}

double NNfunction_ng_chiPlus2::synapse0x36106c0() {
   return (neuron0x36036a0()*0.00704619);
}

double NNfunction_ng_chiPlus2::synapse0x3610700() {
   return (neuron0x36039e0()*1.31098);
}

double NNfunction_ng_chiPlus2::synapse0x3610740() {
   return (neuron0x3603d20()*-1.18845);
}

double NNfunction_ng_chiPlus2::synapse0x3610780() {
   return (neuron0x3604060()*-0.0839111);
}

double NNfunction_ng_chiPlus2::synapse0x36107c0() {
   return (neuron0x36043a0()*0.0108199);
}

double NNfunction_ng_chiPlus2::synapse0x3610800() {
   return (neuron0x36046e0()*-0.213672);
}

double NNfunction_ng_chiPlus2::synapse0x3610840() {
   return (neuron0x3604a20()*-0.175795);
}

double NNfunction_ng_chiPlus2::synapse0x3610880() {
   return (neuron0x3604d60()*-0.0774168);
}

double NNfunction_ng_chiPlus2::synapse0x36108c0() {
   return (neuron0x36050a0()*0.120187);
}

double NNfunction_ng_chiPlus2::synapse0x3610900() {
   return (neuron0x36053e0()*-0.024198);
}

double NNfunction_ng_chiPlus2::synapse0x3610940() {
   return (neuron0x3605720()*0.98239);
}

double NNfunction_ng_chiPlus2::synapse0x3610980() {
   return (neuron0x3605a60()*-0.162881);
}

double NNfunction_ng_chiPlus2::synapse0x36109c0() {
   return (neuron0x3605da0()*-0.42263);
}

double NNfunction_ng_chiPlus2::synapse0x3610a00() {
   return (neuron0x36060e0()*0.122614);
}

double NNfunction_ng_chiPlus2::synapse0x3610a40() {
   return (neuron0x3606420()*-0.196781);
}

double NNfunction_ng_chiPlus2::synapse0x36104d0() {
   return (neuron0x3606760()*-0.0588677);
}

double NNfunction_ng_chiPlus2::synapse0x3610510() {
   return (neuron0x3606cc0()*0.298101);
}

double NNfunction_ng_chiPlus2::synapse0x3610b90() {
   return (neuron0x3607000()*-0.135514);
}

double NNfunction_ng_chiPlus2::synapse0x3610bd0() {
   return (neuron0x3607340()*-0.153976);
}

double NNfunction_ng_chiPlus2::synapse0x3610c10() {
   return (neuron0x3607680()*-0.0803754);
}

double NNfunction_ng_chiPlus2::synapse0x3610c50() {
   return (neuron0x36079c0()*0.0527557);
}

double NNfunction_ng_chiPlus2::synapse0x3610c90() {
   return (neuron0x3607d00()*-0.0442263);
}

double NNfunction_ng_chiPlus2::synapse0x3610cd0() {
   return (neuron0x3608040()*-0.40203);
}

double NNfunction_ng_chiPlus2::synapse0x3610ea0() {
   return (neuron0x36033f0()*0.047582);
}

double NNfunction_ng_chiPlus2::synapse0x3619f30() {
   return (neuron0x36036a0()*-0.0146718);
}

double NNfunction_ng_chiPlus2::synapse0x3619f70() {
   return (neuron0x36039e0()*-0.119554);
}

double NNfunction_ng_chiPlus2::synapse0x3619fb0() {
   return (neuron0x3603d20()*-0.48683);
}

double NNfunction_ng_chiPlus2::synapse0x3619ff0() {
   return (neuron0x3604060()*-0.0143551);
}

double NNfunction_ng_chiPlus2::synapse0x361a030() {
   return (neuron0x36043a0()*-0.0102223);
}

double NNfunction_ng_chiPlus2::synapse0x361a070() {
   return (neuron0x36046e0()*0.0151943);
}

double NNfunction_ng_chiPlus2::synapse0x361a0b0() {
   return (neuron0x3604a20()*0.00323739);
}

double NNfunction_ng_chiPlus2::synapse0x361a0f0() {
   return (neuron0x3604d60()*0.00928734);
}

double NNfunction_ng_chiPlus2::synapse0x361a130() {
   return (neuron0x36050a0()*-0.0115939);
}

double NNfunction_ng_chiPlus2::synapse0x361a170() {
   return (neuron0x36053e0()*0.00174362);
}

double NNfunction_ng_chiPlus2::synapse0x361a1b0() {
   return (neuron0x3605720()*0.111184);
}

double NNfunction_ng_chiPlus2::synapse0x361a1f0() {
   return (neuron0x3605a60()*0.228287);
}

double NNfunction_ng_chiPlus2::synapse0x361a230() {
   return (neuron0x3605da0()*0.0678833);
}

double NNfunction_ng_chiPlus2::synapse0x361a270() {
   return (neuron0x36060e0()*-0.00696297);
}

double NNfunction_ng_chiPlus2::synapse0x361a2b0() {
   return (neuron0x3606420()*0.00985277);
}

double NNfunction_ng_chiPlus2::synapse0x3619d80() {
   return (neuron0x3606760()*-0.0136479);
}

double NNfunction_ng_chiPlus2::synapse0x3619dc0() {
   return (neuron0x3606cc0()*-0.00350821);
}

double NNfunction_ng_chiPlus2::synapse0x361a400() {
   return (neuron0x3607000()*-0.0103222);
}

double NNfunction_ng_chiPlus2::synapse0x361a440() {
   return (neuron0x3607340()*-0.0173575);
}

double NNfunction_ng_chiPlus2::synapse0x361a480() {
   return (neuron0x3607680()*-0.00423116);
}

double NNfunction_ng_chiPlus2::synapse0x361a4c0() {
   return (neuron0x36079c0()*0.00195516);
}

double NNfunction_ng_chiPlus2::synapse0x361a500() {
   return (neuron0x3607d00()*-0.00140052);
}

double NNfunction_ng_chiPlus2::synapse0x361a540() {
   return (neuron0x3608040()*0.567965);
}

double NNfunction_ng_chiPlus2::synapse0x361a8c0() {
   return (neuron0x36033f0()*0.0911936);
}

double NNfunction_ng_chiPlus2::synapse0x361a900() {
   return (neuron0x36036a0()*0.00529667);
}

double NNfunction_ng_chiPlus2::synapse0x361a940() {
   return (neuron0x36039e0()*4.1618);
}

double NNfunction_ng_chiPlus2::synapse0x361a980() {
   return (neuron0x3603d20()*0.00962628);
}

double NNfunction_ng_chiPlus2::synapse0x361a9c0() {
   return (neuron0x3604060()*-0.0430589);
}

double NNfunction_ng_chiPlus2::synapse0x361aa00() {
   return (neuron0x36043a0()*0.00852545);
}

double NNfunction_ng_chiPlus2::synapse0x361aa40() {
   return (neuron0x36046e0()*0.0106349);
}

double NNfunction_ng_chiPlus2::synapse0x361aa80() {
   return (neuron0x3604a20()*0.00674233);
}

double NNfunction_ng_chiPlus2::synapse0x361aac0() {
   return (neuron0x3604d60()*0.0140151);
}

double NNfunction_ng_chiPlus2::synapse0x361ab00() {
   return (neuron0x36050a0()*-0.00714674);
}

double NNfunction_ng_chiPlus2::synapse0x361ab40() {
   return (neuron0x36053e0()*-0.0101546);
}

double NNfunction_ng_chiPlus2::synapse0x361ab80() {
   return (neuron0x3605720()*-0.133887);
}

double NNfunction_ng_chiPlus2::synapse0x361abc0() {
   return (neuron0x3605a60()*0.0251164);
}

double NNfunction_ng_chiPlus2::synapse0x361ac00() {
   return (neuron0x3605da0()*0.0197308);
}

double NNfunction_ng_chiPlus2::synapse0x361ac40() {
   return (neuron0x36060e0()*-0.0122387);
}

double NNfunction_ng_chiPlus2::synapse0x361ac80() {
   return (neuron0x3606420()*0.0020259);
}

double NNfunction_ng_chiPlus2::synapse0x361a710() {
   return (neuron0x3606760()*-0.0491677);
}

double NNfunction_ng_chiPlus2::synapse0x361a750() {
   return (neuron0x3606cc0()*-0.0210697);
}

double NNfunction_ng_chiPlus2::synapse0x361add0() {
   return (neuron0x3607000()*-0.0226339);
}

double NNfunction_ng_chiPlus2::synapse0x361ae10() {
   return (neuron0x3607340()*0.012097);
}

double NNfunction_ng_chiPlus2::synapse0x361ae50() {
   return (neuron0x3607680()*-0.00476835);
}

double NNfunction_ng_chiPlus2::synapse0x361ae90() {
   return (neuron0x36079c0()*0.00706465);
}

double NNfunction_ng_chiPlus2::synapse0x361aed0() {
   return (neuron0x3607d00()*0.000895415);
}

double NNfunction_ng_chiPlus2::synapse0x361af10() {
   return (neuron0x3608040()*1.18203);
}

double NNfunction_ng_chiPlus2::synapse0x361b290() {
   return (neuron0x36033f0()*0.0123801);
}

double NNfunction_ng_chiPlus2::synapse0x361b2d0() {
   return (neuron0x36036a0()*-0.0066918);
}

double NNfunction_ng_chiPlus2::synapse0x361b310() {
   return (neuron0x36039e0()*-0.227195);
}

double NNfunction_ng_chiPlus2::synapse0x361b350() {
   return (neuron0x3603d20()*-1.65174);
}

double NNfunction_ng_chiPlus2::synapse0x361b390() {
   return (neuron0x3604060()*0.0126868);
}

double NNfunction_ng_chiPlus2::synapse0x361b3d0() {
   return (neuron0x36043a0()*0.00876801);
}

double NNfunction_ng_chiPlus2::synapse0x361b410() {
   return (neuron0x36046e0()*-0.0176108);
}

double NNfunction_ng_chiPlus2::synapse0x361b450() {
   return (neuron0x3604a20()*9.28204e-05);
}

double NNfunction_ng_chiPlus2::synapse0x361b490() {
   return (neuron0x3604d60()*0.0122713);
}

double NNfunction_ng_chiPlus2::synapse0x361b4d0() {
   return (neuron0x36050a0()*-0.0177182);
}

double NNfunction_ng_chiPlus2::synapse0x361b510() {
   return (neuron0x36053e0()*-0.0123487);
}

double NNfunction_ng_chiPlus2::synapse0x361b550() {
   return (neuron0x3605720()*-0.321096);
}

double NNfunction_ng_chiPlus2::synapse0x361b590() {
   return (neuron0x3605a60()*0.338622);
}

double NNfunction_ng_chiPlus2::synapse0x361b5d0() {
   return (neuron0x3605da0()*0.0278869);
}

double NNfunction_ng_chiPlus2::synapse0x361b610() {
   return (neuron0x36060e0()*0.14115);
}

double NNfunction_ng_chiPlus2::synapse0x361b650() {
   return (neuron0x3606420()*0.10388);
}

double NNfunction_ng_chiPlus2::synapse0x361b0e0() {
   return (neuron0x3606760()*-0.0285309);
}

double NNfunction_ng_chiPlus2::synapse0x361b120() {
   return (neuron0x3606cc0()*0.10929);
}

double NNfunction_ng_chiPlus2::synapse0x361b7a0() {
   return (neuron0x3607000()*0.102377);
}

double NNfunction_ng_chiPlus2::synapse0x361b7e0() {
   return (neuron0x3607340()*0.00295943);
}

double NNfunction_ng_chiPlus2::synapse0x361b820() {
   return (neuron0x3607680()*-0.0270426);
}

double NNfunction_ng_chiPlus2::synapse0x361b860() {
   return (neuron0x36079c0()*0.014198);
}

double NNfunction_ng_chiPlus2::synapse0x361b8a0() {
   return (neuron0x3607d00()*-0.00437177);
}

double NNfunction_ng_chiPlus2::synapse0x361b8e0() {
   return (neuron0x3608040()*0.122067);
}

double NNfunction_ng_chiPlus2::synapse0x361bc60() {
   return (neuron0x36033f0()*-0.00243712);
}

double NNfunction_ng_chiPlus2::synapse0x361bca0() {
   return (neuron0x36036a0()*-0.00516563);
}

double NNfunction_ng_chiPlus2::synapse0x361bce0() {
   return (neuron0x36039e0()*-0.440027);
}

double NNfunction_ng_chiPlus2::synapse0x361bd20() {
   return (neuron0x3603d20()*0.00489823);
}

double NNfunction_ng_chiPlus2::synapse0x361bd60() {
   return (neuron0x3604060()*-0.0107688);
}

double NNfunction_ng_chiPlus2::synapse0x361bda0() {
   return (neuron0x36043a0()*-0.00109212);
}

double NNfunction_ng_chiPlus2::synapse0x361bde0() {
   return (neuron0x36046e0()*0.00421172);
}

double NNfunction_ng_chiPlus2::synapse0x361be20() {
   return (neuron0x3604a20()*0.000806449);
}

double NNfunction_ng_chiPlus2::synapse0x361be60() {
   return (neuron0x3604d60()*0.00223567);
}

double NNfunction_ng_chiPlus2::synapse0x361bea0() {
   return (neuron0x36050a0()*-0.000473533);
}

double NNfunction_ng_chiPlus2::synapse0x361bee0() {
   return (neuron0x36053e0()*0.00153556);
}

double NNfunction_ng_chiPlus2::synapse0x361bf20() {
   return (neuron0x3605720()*0.0591978);
}

double NNfunction_ng_chiPlus2::synapse0x361bf60() {
   return (neuron0x3605a60()*-0.0273351);
}

double NNfunction_ng_chiPlus2::synapse0x361bfa0() {
   return (neuron0x3605da0()*0.00145153);
}

double NNfunction_ng_chiPlus2::synapse0x361bfe0() {
   return (neuron0x36060e0()*-0.00121729);
}

double NNfunction_ng_chiPlus2::synapse0x361c020() {
   return (neuron0x3606420()*0.00575567);
}

double NNfunction_ng_chiPlus2::synapse0x361bab0() {
   return (neuron0x3606760()*0.00379235);
}

double NNfunction_ng_chiPlus2::synapse0x361baf0() {
   return (neuron0x3606cc0()*-0.00407264);
}

double NNfunction_ng_chiPlus2::synapse0x361c170() {
   return (neuron0x3607000()*-0.000552227);
}

double NNfunction_ng_chiPlus2::synapse0x361c1b0() {
   return (neuron0x3607340()*-0.00209536);
}

double NNfunction_ng_chiPlus2::synapse0x361c1f0() {
   return (neuron0x3607680()*-0.00375268);
}

double NNfunction_ng_chiPlus2::synapse0x361c230() {
   return (neuron0x36079c0()*-0.000438787);
}

double NNfunction_ng_chiPlus2::synapse0x361c270() {
   return (neuron0x3607d00()*0.000888109);
}

double NNfunction_ng_chiPlus2::synapse0x361c2b0() {
   return (neuron0x3608040()*1.18614);
}

double NNfunction_ng_chiPlus2::synapse0x361c630() {
   return (neuron0x36033f0()*0.250205);
}

double NNfunction_ng_chiPlus2::synapse0x361c670() {
   return (neuron0x36036a0()*-0.28493);
}

double NNfunction_ng_chiPlus2::synapse0x361c6b0() {
   return (neuron0x36039e0()*-0.0115865);
}

double NNfunction_ng_chiPlus2::synapse0x361c6f0() {
   return (neuron0x3603d20()*-1.13107);
}

double NNfunction_ng_chiPlus2::synapse0x361c730() {
   return (neuron0x3604060()*-0.0316769);
}

double NNfunction_ng_chiPlus2::synapse0x361c770() {
   return (neuron0x36043a0()*0.440789);
}

double NNfunction_ng_chiPlus2::synapse0x361c7b0() {
   return (neuron0x36046e0()*-0.287803);
}

double NNfunction_ng_chiPlus2::synapse0x361c7f0() {
   return (neuron0x3604a20()*0.15215);
}

double NNfunction_ng_chiPlus2::synapse0x361c830() {
   return (neuron0x3604d60()*0.807162);
}

double NNfunction_ng_chiPlus2::synapse0x361c870() {
   return (neuron0x36050a0()*0.526043);
}

double NNfunction_ng_chiPlus2::synapse0x361c8b0() {
   return (neuron0x36053e0()*-0.171638);
}

double NNfunction_ng_chiPlus2::synapse0x361c8f0() {
   return (neuron0x3605720()*-1.06193);
}

double NNfunction_ng_chiPlus2::synapse0x361c930() {
   return (neuron0x3605a60()*-0.297179);
}

double NNfunction_ng_chiPlus2::synapse0x361c970() {
   return (neuron0x3605da0()*0.138889);
}

double NNfunction_ng_chiPlus2::synapse0x361c9b0() {
   return (neuron0x36060e0()*0.384387);
}

double NNfunction_ng_chiPlus2::synapse0x361c9f0() {
   return (neuron0x3606420()*-0.351522);
}

double NNfunction_ng_chiPlus2::synapse0x361c480() {
   return (neuron0x3606760()*0.302334);
}

double NNfunction_ng_chiPlus2::synapse0x361c4c0() {
   return (neuron0x3606cc0()*-0.316302);
}

double NNfunction_ng_chiPlus2::synapse0x361cb40() {
   return (neuron0x3607000()*0.490999);
}

double NNfunction_ng_chiPlus2::synapse0x361cb80() {
   return (neuron0x3607340()*-0.00376324);
}

double NNfunction_ng_chiPlus2::synapse0x361cbc0() {
   return (neuron0x3607680()*-0.374538);
}

double NNfunction_ng_chiPlus2::synapse0x361cc00() {
   return (neuron0x36079c0()*0.621613);
}

double NNfunction_ng_chiPlus2::synapse0x361cc40() {
   return (neuron0x3607d00()*-0.276272);
}

double NNfunction_ng_chiPlus2::synapse0x361cc80() {
   return (neuron0x3608040()*-0.0122868);
}

double NNfunction_ng_chiPlus2::synapse0x361d000() {
   return (neuron0x36033f0()*0.0221296);
}

double NNfunction_ng_chiPlus2::synapse0x361d040() {
   return (neuron0x36036a0()*-0.00496012);
}

double NNfunction_ng_chiPlus2::synapse0x361d080() {
   return (neuron0x36039e0()*3.63509);
}

double NNfunction_ng_chiPlus2::synapse0x361d0c0() {
   return (neuron0x3603d20()*-0.057762);
}

double NNfunction_ng_chiPlus2::synapse0x361d100() {
   return (neuron0x3604060()*-0.00630543);
}

double NNfunction_ng_chiPlus2::synapse0x361d140() {
   return (neuron0x36043a0()*0.00727086);
}

double NNfunction_ng_chiPlus2::synapse0x361d180() {
   return (neuron0x36046e0()*0.00948959);
}

double NNfunction_ng_chiPlus2::synapse0x361d1c0() {
   return (neuron0x3604a20()*0.0109559);
}

double NNfunction_ng_chiPlus2::synapse0x361d200() {
   return (neuron0x3604d60()*0.00898609);
}

double NNfunction_ng_chiPlus2::synapse0x361d240() {
   return (neuron0x36050a0()*0.0101418);
}

double NNfunction_ng_chiPlus2::synapse0x361d280() {
   return (neuron0x36053e0()*0.00567477);
}

double NNfunction_ng_chiPlus2::synapse0x361d2c0() {
   return (neuron0x3605720()*0.168935);
}

double NNfunction_ng_chiPlus2::synapse0x361d300() {
   return (neuron0x3605a60()*0.00828738);
}

double NNfunction_ng_chiPlus2::synapse0x361d340() {
   return (neuron0x3605da0()*-0.011384);
}

double NNfunction_ng_chiPlus2::synapse0x361d380() {
   return (neuron0x36060e0()*-0.00568881);
}

double NNfunction_ng_chiPlus2::synapse0x361d3c0() {
   return (neuron0x3606420()*-0.00880428);
}

double NNfunction_ng_chiPlus2::synapse0x361ce50() {
   return (neuron0x3606760()*-0.0157241);
}

double NNfunction_ng_chiPlus2::synapse0x361ce90() {
   return (neuron0x3606cc0()*0.00894543);
}

double NNfunction_ng_chiPlus2::synapse0x361d510() {
   return (neuron0x3607000()*-0.00147877);
}

double NNfunction_ng_chiPlus2::synapse0x361d550() {
   return (neuron0x3607340()*-0.00421124);
}

double NNfunction_ng_chiPlus2::synapse0x361d590() {
   return (neuron0x3607680()*0.0214063);
}

double NNfunction_ng_chiPlus2::synapse0x361d5d0() {
   return (neuron0x36079c0()*0.00725186);
}

double NNfunction_ng_chiPlus2::synapse0x361d610() {
   return (neuron0x3607d00()*-0.00236428);
}

double NNfunction_ng_chiPlus2::synapse0x361d650() {
   return (neuron0x3608040()*2.76078);
}

double NNfunction_ng_chiPlus2::synapse0x361d9d0() {
   return (neuron0x36033f0()*-0.0662742);
}

double NNfunction_ng_chiPlus2::synapse0x361da10() {
   return (neuron0x36036a0()*0.34961);
}

double NNfunction_ng_chiPlus2::synapse0x361da50() {
   return (neuron0x36039e0()*0.0995441);
}

double NNfunction_ng_chiPlus2::synapse0x361da90() {
   return (neuron0x3603d20()*-0.68039);
}

double NNfunction_ng_chiPlus2::synapse0x361dad0() {
   return (neuron0x3604060()*0.366347);
}

double NNfunction_ng_chiPlus2::synapse0x361db10() {
   return (neuron0x36043a0()*0.203009);
}

double NNfunction_ng_chiPlus2::synapse0x361db50() {
   return (neuron0x36046e0()*-0.0884282);
}

double NNfunction_ng_chiPlus2::synapse0x361db90() {
   return (neuron0x3604a20()*0.337337);
}

double NNfunction_ng_chiPlus2::synapse0x361dbd0() {
   return (neuron0x3604d60()*-0.298675);
}

double NNfunction_ng_chiPlus2::synapse0x361dc10() {
   return (neuron0x36050a0()*0.37295);
}

double NNfunction_ng_chiPlus2::synapse0x361dc50() {
   return (neuron0x36053e0()*0.256489);
}

double NNfunction_ng_chiPlus2::synapse0x361dc90() {
   return (neuron0x3605720()*-0.186294);
}

double NNfunction_ng_chiPlus2::synapse0x361dcd0() {
   return (neuron0x3605a60()*-0.101629);
}

double NNfunction_ng_chiPlus2::synapse0x361dd10() {
   return (neuron0x3605da0()*0.498699);
}

double NNfunction_ng_chiPlus2::synapse0x361dd50() {
   return (neuron0x36060e0()*-0.185169);
}

double NNfunction_ng_chiPlus2::synapse0x361dd90() {
   return (neuron0x3606420()*-0.39648);
}

double NNfunction_ng_chiPlus2::synapse0x361d820() {
   return (neuron0x3606760()*0.225517);
}

double NNfunction_ng_chiPlus2::synapse0x361d860() {
   return (neuron0x3606cc0()*0.0245105);
}

double NNfunction_ng_chiPlus2::synapse0x361dee0() {
   return (neuron0x3607000()*-0.0580834);
}

double NNfunction_ng_chiPlus2::synapse0x361df20() {
   return (neuron0x3607340()*-0.379456);
}

double NNfunction_ng_chiPlus2::synapse0x361df60() {
   return (neuron0x3607680()*-0.338898);
}

double NNfunction_ng_chiPlus2::synapse0x361dfa0() {
   return (neuron0x36079c0()*-0.492939);
}

double NNfunction_ng_chiPlus2::synapse0x361dfe0() {
   return (neuron0x3607d00()*-0.228042);
}

double NNfunction_ng_chiPlus2::synapse0x361e020() {
   return (neuron0x3608040()*-0.247351);
}

double NNfunction_ng_chiPlus2::synapse0x361e3a0() {
   return (neuron0x36033f0()*0.406259);
}

double NNfunction_ng_chiPlus2::synapse0x361e3e0() {
   return (neuron0x36036a0()*0.0495218);
}

double NNfunction_ng_chiPlus2::synapse0x361e420() {
   return (neuron0x36039e0()*-0.418174);
}

double NNfunction_ng_chiPlus2::synapse0x361e460() {
   return (neuron0x3603d20()*-0.575605);
}

double NNfunction_ng_chiPlus2::synapse0x361e4a0() {
   return (neuron0x3604060()*0.147203);
}

double NNfunction_ng_chiPlus2::synapse0x361e4e0() {
   return (neuron0x36043a0()*0.125956);
}

double NNfunction_ng_chiPlus2::synapse0x361e520() {
   return (neuron0x36046e0()*-0.475687);
}

double NNfunction_ng_chiPlus2::synapse0x361e560() {
   return (neuron0x3604a20()*0.0344477);
}

double NNfunction_ng_chiPlus2::synapse0x361e5a0() {
   return (neuron0x3604d60()*-0.127314);
}

double NNfunction_ng_chiPlus2::synapse0x361e5e0() {
   return (neuron0x36050a0()*-0.410411);
}

double NNfunction_ng_chiPlus2::synapse0x361e620() {
   return (neuron0x36053e0()*0.0913319);
}

double NNfunction_ng_chiPlus2::synapse0x361e660() {
   return (neuron0x3605720()*-0.298625);
}

double NNfunction_ng_chiPlus2::synapse0x361e6a0() {
   return (neuron0x3605a60()*-0.54529);
}

double NNfunction_ng_chiPlus2::synapse0x361e6e0() {
   return (neuron0x3605da0()*-0.631232);
}

double NNfunction_ng_chiPlus2::synapse0x361e720() {
   return (neuron0x36060e0()*-0.100134);
}

double NNfunction_ng_chiPlus2::synapse0x361e760() {
   return (neuron0x3606420()*0.210361);
}

double NNfunction_ng_chiPlus2::synapse0x361e1f0() {
   return (neuron0x3606760()*0.207731);
}

double NNfunction_ng_chiPlus2::synapse0x361e230() {
   return (neuron0x3606cc0()*0.00498813);
}

double NNfunction_ng_chiPlus2::synapse0x361e8b0() {
   return (neuron0x3607000()*0.237341);
}

double NNfunction_ng_chiPlus2::synapse0x361e8f0() {
   return (neuron0x3607340()*0.29667);
}

double NNfunction_ng_chiPlus2::synapse0x361e930() {
   return (neuron0x3607680()*0.334816);
}

double NNfunction_ng_chiPlus2::synapse0x361e970() {
   return (neuron0x36079c0()*0.33324);
}

double NNfunction_ng_chiPlus2::synapse0x361e9b0() {
   return (neuron0x3607d00()*-0.0777123);
}

double NNfunction_ng_chiPlus2::synapse0x361e9f0() {
   return (neuron0x3608040()*-0.0249752);
}

double NNfunction_ng_chiPlus2::synapse0x361ed70() {
   return (neuron0x36033f0()*-0.121735);
}

double NNfunction_ng_chiPlus2::synapse0x3613340() {
   return (neuron0x36036a0()*0.555824);
}

double NNfunction_ng_chiPlus2::synapse0x3613380() {
   return (neuron0x36039e0()*-0.528751);
}

double NNfunction_ng_chiPlus2::synapse0x36133c0() {
   return (neuron0x3603d20()*1.01487);
}

double NNfunction_ng_chiPlus2::synapse0x3613610() {
   return (neuron0x3604060()*-0.478226);
}

double NNfunction_ng_chiPlus2::synapse0x3613650() {
   return (neuron0x36043a0()*0.370528);
}

double NNfunction_ng_chiPlus2::synapse0x3613690() {
   return (neuron0x36046e0()*-0.350469);
}

double NNfunction_ng_chiPlus2::synapse0x36138e0() {
   return (neuron0x3604a20()*-0.465471);
}

double NNfunction_ng_chiPlus2::synapse0x3613920() {
   return (neuron0x3604d60()*0.312219);
}

double NNfunction_ng_chiPlus2::synapse0x3613b70() {
   return (neuron0x36050a0()*-0.0713312);
}

double NNfunction_ng_chiPlus2::synapse0x3613bb0() {
   return (neuron0x36053e0()*0.0412963);
}

double NNfunction_ng_chiPlus2::synapse0x3613bf0() {
   return (neuron0x3605720()*-0.666958);
}

double NNfunction_ng_chiPlus2::synapse0x3613e40() {
   return (neuron0x3605a60()*-0.605279);
}

double NNfunction_ng_chiPlus2::synapse0x3613e80() {
   return (neuron0x3605da0()*0.0807592);
}

double NNfunction_ng_chiPlus2::synapse0x36140d0() {
   return (neuron0x36060e0()*0.207718);
}

double NNfunction_ng_chiPlus2::synapse0x3614110() {
   return (neuron0x3606420()*-0.027952);
}

double NNfunction_ng_chiPlus2::synapse0x361ebc0() {
   return (neuron0x3606760()*-0.498318);
}

double NNfunction_ng_chiPlus2::synapse0x361ec00() {
   return (neuron0x3606cc0()*0.0949333);
}

double NNfunction_ng_chiPlus2::synapse0x3614260() {
   return (neuron0x3607000()*-0.345875);
}

double NNfunction_ng_chiPlus2::synapse0x3614770() {
   return (neuron0x3607340()*0.456064);
}

double NNfunction_ng_chiPlus2::synapse0x36147b0() {
   return (neuron0x3607680()*0.417584);
}

double NNfunction_ng_chiPlus2::synapse0x36147f0() {
   return (neuron0x36079c0()*0.313797);
}

double NNfunction_ng_chiPlus2::synapse0x3614a40() {
   return (neuron0x3607d00()*0.401384);
}

double NNfunction_ng_chiPlus2::synapse0x3614a80() {
   return (neuron0x3608040()*-0.301298);
}

double NNfunction_ng_chiPlus2::synapse0x3614330() {
   return (neuron0x36033f0()*0.00682394);
}

double NNfunction_ng_chiPlus2::synapse0x3614370() {
   return (neuron0x36036a0()*0.00132892);
}

double NNfunction_ng_chiPlus2::synapse0x36143b0() {
   return (neuron0x36039e0()*0.0309046);
}

double NNfunction_ng_chiPlus2::synapse0x36143f0() {
   return (neuron0x3603d20()*-1.01129);
}

double NNfunction_ng_chiPlus2::synapse0x3614d70() {
   return (neuron0x3604060()*-0.00156099);
}

double NNfunction_ng_chiPlus2::synapse0x36210c0() {
   return (neuron0x36043a0()*0.00331997);
}

double NNfunction_ng_chiPlus2::synapse0x3621100() {
   return (neuron0x36046e0()*0.00698901);
}

double NNfunction_ng_chiPlus2::synapse0x3621140() {
   return (neuron0x3604a20()*-0.000188169);
}

double NNfunction_ng_chiPlus2::synapse0x3621180() {
   return (neuron0x3604d60()*0.00387937);
}

double NNfunction_ng_chiPlus2::synapse0x36211c0() {
   return (neuron0x36050a0()*-0.0013803);
}

double NNfunction_ng_chiPlus2::synapse0x3621200() {
   return (neuron0x36053e0()*0.00164155);
}

double NNfunction_ng_chiPlus2::synapse0x3621240() {
   return (neuron0x3605720()*0.00671565);
}

double NNfunction_ng_chiPlus2::synapse0x3621280() {
   return (neuron0x3605a60()*-0.0148052);
}

double NNfunction_ng_chiPlus2::synapse0x36212c0() {
   return (neuron0x3605da0()*0.000982706);
}

double NNfunction_ng_chiPlus2::synapse0x3621300() {
   return (neuron0x36060e0()*-0.00275082);
}

double NNfunction_ng_chiPlus2::synapse0x3621340() {
   return (neuron0x3606420()*-0.000347736);
}

double NNfunction_ng_chiPlus2::synapse0x3614c50() {
   return (neuron0x3606760()*-0.00129891);
}

double NNfunction_ng_chiPlus2::synapse0x3614c90() {
   return (neuron0x3606cc0()*-0.00776774);
}

double NNfunction_ng_chiPlus2::synapse0x3621490() {
   return (neuron0x3607000()*-0.00698677);
}

double NNfunction_ng_chiPlus2::synapse0x36214d0() {
   return (neuron0x3607340()*-0.00738046);
}

double NNfunction_ng_chiPlus2::synapse0x3621510() {
   return (neuron0x3607680()*-0.00375111);
}

double NNfunction_ng_chiPlus2::synapse0x3621550() {
   return (neuron0x36079c0()*0.00445534);
}

double NNfunction_ng_chiPlus2::synapse0x3621590() {
   return (neuron0x3607d00()*9.11887e-05);
}

double NNfunction_ng_chiPlus2::synapse0x36215d0() {
   return (neuron0x3608040()*-0.0199745);
}

double NNfunction_ng_chiPlus2::synapse0x3621950() {
   return (neuron0x36033f0()*-0.0668808);
}

double NNfunction_ng_chiPlus2::synapse0x3621990() {
   return (neuron0x36036a0()*0.00298806);
}

double NNfunction_ng_chiPlus2::synapse0x36219d0() {
   return (neuron0x36039e0()*0.287434);
}

double NNfunction_ng_chiPlus2::synapse0x3621a10() {
   return (neuron0x3603d20()*0.096838);
}

double NNfunction_ng_chiPlus2::synapse0x3621a50() {
   return (neuron0x3604060()*-0.0182589);
}

double NNfunction_ng_chiPlus2::synapse0x3621a90() {
   return (neuron0x36043a0()*-0.00505934);
}

double NNfunction_ng_chiPlus2::synapse0x3621ad0() {
   return (neuron0x36046e0()*0.00633904);
}

double NNfunction_ng_chiPlus2::synapse0x3621b10() {
   return (neuron0x3604a20()*0.00888471);
}

double NNfunction_ng_chiPlus2::synapse0x3621b50() {
   return (neuron0x3604d60()*-0.0412808);
}

double NNfunction_ng_chiPlus2::synapse0x3621b90() {
   return (neuron0x36050a0()*-0.00652844);
}

double NNfunction_ng_chiPlus2::synapse0x3621bd0() {
   return (neuron0x36053e0()*-0.0338089);
}

double NNfunction_ng_chiPlus2::synapse0x3621c10() {
   return (neuron0x3605720()*1.54657);
}

double NNfunction_ng_chiPlus2::synapse0x3621c50() {
   return (neuron0x3605a60()*-0.0564772);
}

double NNfunction_ng_chiPlus2::synapse0x3621c90() {
   return (neuron0x3605da0()*0.0567751);
}

double NNfunction_ng_chiPlus2::synapse0x3621cd0() {
   return (neuron0x36060e0()*0.0422307);
}

double NNfunction_ng_chiPlus2::synapse0x3621d10() {
   return (neuron0x3606420()*0.00113414);
}

double NNfunction_ng_chiPlus2::synapse0x36217a0() {
   return (neuron0x3606760()*-0.0185491);
}

double NNfunction_ng_chiPlus2::synapse0x36217e0() {
   return (neuron0x3606cc0()*0.00661126);
}

double NNfunction_ng_chiPlus2::synapse0x3621e60() {
   return (neuron0x3607000()*0.00592777);
}

double NNfunction_ng_chiPlus2::synapse0x3621ea0() {
   return (neuron0x3607340()*-0.00846649);
}

double NNfunction_ng_chiPlus2::synapse0x3621ee0() {
   return (neuron0x3607680()*0.00982813);
}

double NNfunction_ng_chiPlus2::synapse0x3621f20() {
   return (neuron0x36079c0()*-0.00620626);
}

double NNfunction_ng_chiPlus2::synapse0x3621f60() {
   return (neuron0x3607d00()*-0.020011);
}

double NNfunction_ng_chiPlus2::synapse0x3621fa0() {
   return (neuron0x3608040()*0.451974);
}

double NNfunction_ng_chiPlus2::synapse0x3622320() {
   return (neuron0x36033f0()*-0.0250551);
}

double NNfunction_ng_chiPlus2::synapse0x3622360() {
   return (neuron0x36036a0()*-0.0192107);
}

double NNfunction_ng_chiPlus2::synapse0x36223a0() {
   return (neuron0x36039e0()*0.415405);
}

double NNfunction_ng_chiPlus2::synapse0x36223e0() {
   return (neuron0x3603d20()*1.44138);
}

double NNfunction_ng_chiPlus2::synapse0x3622420() {
   return (neuron0x3604060()*0.0208577);
}

double NNfunction_ng_chiPlus2::synapse0x3622460() {
   return (neuron0x36043a0()*0.00736534);
}

double NNfunction_ng_chiPlus2::synapse0x36224a0() {
   return (neuron0x36046e0()*-0.0132918);
}

double NNfunction_ng_chiPlus2::synapse0x36224e0() {
   return (neuron0x3604a20()*-0.00191256);
}

double NNfunction_ng_chiPlus2::synapse0x3622520() {
   return (neuron0x3604d60()*0.00219373);
}

double NNfunction_ng_chiPlus2::synapse0x3622560() {
   return (neuron0x36050a0()*0.0237366);
}

double NNfunction_ng_chiPlus2::synapse0x36225a0() {
   return (neuron0x36053e0()*0.0087176);
}

double NNfunction_ng_chiPlus2::synapse0x36225e0() {
   return (neuron0x3605720()*-0.876724);
}

double NNfunction_ng_chiPlus2::synapse0x3622620() {
   return (neuron0x3605a60()*0.88151);
}

double NNfunction_ng_chiPlus2::synapse0x3622660() {
   return (neuron0x3605da0()*0.0325837);
}

double NNfunction_ng_chiPlus2::synapse0x36226a0() {
   return (neuron0x36060e0()*-0.0286922);
}

double NNfunction_ng_chiPlus2::synapse0x36226e0() {
   return (neuron0x3606420()*-0.00838304);
}

double NNfunction_ng_chiPlus2::synapse0x3622170() {
   return (neuron0x3606760()*0.0101879);
}

double NNfunction_ng_chiPlus2::synapse0x36221b0() {
   return (neuron0x3606cc0()*-0.0135839);
}

double NNfunction_ng_chiPlus2::synapse0x3622830() {
   return (neuron0x3607000()*0.0312795);
}

double NNfunction_ng_chiPlus2::synapse0x3622870() {
   return (neuron0x3607340()*0.0325191);
}

double NNfunction_ng_chiPlus2::synapse0x36228b0() {
   return (neuron0x3607680()*0.00804461);
}

double NNfunction_ng_chiPlus2::synapse0x36228f0() {
   return (neuron0x36079c0()*0.0194911);
}

double NNfunction_ng_chiPlus2::synapse0x3622930() {
   return (neuron0x3607d00()*-0.0185111);
}

double NNfunction_ng_chiPlus2::synapse0x3622970() {
   return (neuron0x3608040()*0.110533);
}

double NNfunction_ng_chiPlus2::synapse0x3622cf0() {
   return (neuron0x36033f0()*-0.0151249);
}

double NNfunction_ng_chiPlus2::synapse0x3622d30() {
   return (neuron0x36036a0()*-0.00772864);
}

double NNfunction_ng_chiPlus2::synapse0x3622d70() {
   return (neuron0x36039e0()*0.0942911);
}

double NNfunction_ng_chiPlus2::synapse0x3622db0() {
   return (neuron0x3603d20()*0.0240375);
}

double NNfunction_ng_chiPlus2::synapse0x3622df0() {
   return (neuron0x3604060()*0.00241285);
}

double NNfunction_ng_chiPlus2::synapse0x3622e30() {
   return (neuron0x36043a0()*-0.00251194);
}

double NNfunction_ng_chiPlus2::synapse0x3622e70() {
   return (neuron0x36046e0()*0.00869946);
}

double NNfunction_ng_chiPlus2::synapse0x3622eb0() {
   return (neuron0x3604a20()*-0.00612369);
}

double NNfunction_ng_chiPlus2::synapse0x3622ef0() {
   return (neuron0x3604d60()*0.00410485);
}

double NNfunction_ng_chiPlus2::synapse0x3622f30() {
   return (neuron0x36050a0()*0.000272006);
}

double NNfunction_ng_chiPlus2::synapse0x3622f70() {
   return (neuron0x36053e0()*0.006869);
}

double NNfunction_ng_chiPlus2::synapse0x3622fb0() {
   return (neuron0x3605720()*-0.0489475);
}

double NNfunction_ng_chiPlus2::synapse0x3622ff0() {
   return (neuron0x3605a60()*-0.0628105);
}

double NNfunction_ng_chiPlus2::synapse0x3623030() {
   return (neuron0x3605da0()*-0.0156794);
}

double NNfunction_ng_chiPlus2::synapse0x3623070() {
   return (neuron0x36060e0()*-0.00307505);
}

double NNfunction_ng_chiPlus2::synapse0x36230b0() {
   return (neuron0x3606420()*0.000726013);
}

double NNfunction_ng_chiPlus2::synapse0x3622b40() {
   return (neuron0x3606760()*0.00734961);
}

double NNfunction_ng_chiPlus2::synapse0x3622b80() {
   return (neuron0x3606cc0()*0.00938674);
}

double NNfunction_ng_chiPlus2::synapse0x3623200() {
   return (neuron0x3607000()*0.00616183);
}

double NNfunction_ng_chiPlus2::synapse0x3623240() {
   return (neuron0x3607340()*-0.0033581);
}

double NNfunction_ng_chiPlus2::synapse0x3623280() {
   return (neuron0x3607680()*0.00268456);
}

double NNfunction_ng_chiPlus2::synapse0x36232c0() {
   return (neuron0x36079c0()*-0.00444919);
}

double NNfunction_ng_chiPlus2::synapse0x3623300() {
   return (neuron0x3607d00()*0.00227511);
}

double NNfunction_ng_chiPlus2::synapse0x3623340() {
   return (neuron0x3608040()*0.927678);
}

double NNfunction_ng_chiPlus2::synapse0x36236c0() {
   return (neuron0x36033f0()*-0.290545);
}

double NNfunction_ng_chiPlus2::synapse0x3623700() {
   return (neuron0x36036a0()*0.0519677);
}

double NNfunction_ng_chiPlus2::synapse0x3623740() {
   return (neuron0x36039e0()*0.207227);
}

double NNfunction_ng_chiPlus2::synapse0x3623780() {
   return (neuron0x3603d20()*-0.590408);
}

double NNfunction_ng_chiPlus2::synapse0x36237c0() {
   return (neuron0x3604060()*0.346025);
}

double NNfunction_ng_chiPlus2::synapse0x3623800() {
   return (neuron0x36043a0()*0.190088);
}

double NNfunction_ng_chiPlus2::synapse0x3623840() {
   return (neuron0x36046e0()*0.0958203);
}

double NNfunction_ng_chiPlus2::synapse0x3623880() {
   return (neuron0x3604a20()*0.0851192);
}

double NNfunction_ng_chiPlus2::synapse0x36238c0() {
   return (neuron0x3604d60()*0.242784);
}

double NNfunction_ng_chiPlus2::synapse0x3623900() {
   return (neuron0x36050a0()*0.348999);
}

double NNfunction_ng_chiPlus2::synapse0x3623940() {
   return (neuron0x36053e0()*-0.273517);
}

double NNfunction_ng_chiPlus2::synapse0x3623980() {
   return (neuron0x3605720()*0.512369);
}

double NNfunction_ng_chiPlus2::synapse0x36239c0() {
   return (neuron0x3605a60()*0.432396);
}

double NNfunction_ng_chiPlus2::synapse0x3623a00() {
   return (neuron0x3605da0()*-0.225944);
}

double NNfunction_ng_chiPlus2::synapse0x3623a40() {
   return (neuron0x36060e0()*-0.0186092);
}

double NNfunction_ng_chiPlus2::synapse0x3623a80() {
   return (neuron0x3606420()*-0.061782);
}

double NNfunction_ng_chiPlus2::synapse0x3623510() {
   return (neuron0x3606760()*-0.187569);
}

double NNfunction_ng_chiPlus2::synapse0x3623550() {
   return (neuron0x3606cc0()*0.2575);
}

double NNfunction_ng_chiPlus2::synapse0x3623bd0() {
   return (neuron0x3607000()*-0.206249);
}

double NNfunction_ng_chiPlus2::synapse0x3623c10() {
   return (neuron0x3607340()*0.0504737);
}

double NNfunction_ng_chiPlus2::synapse0x3623c50() {
   return (neuron0x3607680()*-0.0951542);
}

double NNfunction_ng_chiPlus2::synapse0x3623c90() {
   return (neuron0x36079c0()*0.383388);
}

double NNfunction_ng_chiPlus2::synapse0x3623cd0() {
   return (neuron0x3607d00()*-0.244844);
}

double NNfunction_ng_chiPlus2::synapse0x3623d10() {
   return (neuron0x3608040()*-0.287243);
}

double NNfunction_ng_chiPlus2::synapse0x3624090() {
   return (neuron0x36033f0()*-0.0170728);
}

double NNfunction_ng_chiPlus2::synapse0x36240d0() {
   return (neuron0x36036a0()*-0.00467053);
}

double NNfunction_ng_chiPlus2::synapse0x3624110() {
   return (neuron0x36039e0()*-0.0580532);
}

double NNfunction_ng_chiPlus2::synapse0x3624150() {
   return (neuron0x3603d20()*6.185);
}

double NNfunction_ng_chiPlus2::synapse0x3624190() {
   return (neuron0x3604060()*0.0132153);
}

double NNfunction_ng_chiPlus2::synapse0x36241d0() {
   return (neuron0x36043a0()*0.00255588);
}

double NNfunction_ng_chiPlus2::synapse0x3624210() {
   return (neuron0x36046e0()*0.00808665);
}

double NNfunction_ng_chiPlus2::synapse0x3624250() {
   return (neuron0x3604a20()*-0.00212194);
}

double NNfunction_ng_chiPlus2::synapse0x3624290() {
   return (neuron0x3604d60()*0.0126624);
}

double NNfunction_ng_chiPlus2::synapse0x36242d0() {
   return (neuron0x36050a0()*-0.00558535);
}

double NNfunction_ng_chiPlus2::synapse0x3624310() {
   return (neuron0x36053e0()*0.00598147);
}

double NNfunction_ng_chiPlus2::synapse0x3624350() {
   return (neuron0x3605720()*1.48623);
}

double NNfunction_ng_chiPlus2::synapse0x3624390() {
   return (neuron0x3605a60()*-0.165428);
}

double NNfunction_ng_chiPlus2::synapse0x36243d0() {
   return (neuron0x3605da0()*0.0166533);
}

double NNfunction_ng_chiPlus2::synapse0x3624410() {
   return (neuron0x36060e0()*-0.009883);
}

double NNfunction_ng_chiPlus2::synapse0x3624450() {
   return (neuron0x3606420()*0.0054214);
}

double NNfunction_ng_chiPlus2::synapse0x3623ee0() {
   return (neuron0x3606760()*-0.0118171);
}

double NNfunction_ng_chiPlus2::synapse0x3623f20() {
   return (neuron0x3606cc0()*-0.0102671);
}

double NNfunction_ng_chiPlus2::synapse0x36245a0() {
   return (neuron0x3607000()*-0.0123276);
}

double NNfunction_ng_chiPlus2::synapse0x36245e0() {
   return (neuron0x3607340()*-0.0268897);
}

double NNfunction_ng_chiPlus2::synapse0x3624620() {
   return (neuron0x3607680()*-0.0149853);
}

double NNfunction_ng_chiPlus2::synapse0x3624660() {
   return (neuron0x36079c0()*-0.0106932);
}

double NNfunction_ng_chiPlus2::synapse0x36246a0() {
   return (neuron0x3607d00()*-0.0120718);
}

double NNfunction_ng_chiPlus2::synapse0x36246e0() {
   return (neuron0x3608040()*0.0187644);
}

double NNfunction_ng_chiPlus2::synapse0x3624a60() {
   return (neuron0x36033f0()*0.365157);
}

double NNfunction_ng_chiPlus2::synapse0x3624aa0() {
   return (neuron0x36036a0()*0.0276805);
}

double NNfunction_ng_chiPlus2::synapse0x3624ae0() {
   return (neuron0x36039e0()*0.259722);
}

double NNfunction_ng_chiPlus2::synapse0x3624b20() {
   return (neuron0x3603d20()*0.721181);
}

double NNfunction_ng_chiPlus2::synapse0x3624b60() {
   return (neuron0x3604060()*-0.141611);
}

double NNfunction_ng_chiPlus2::synapse0x3624ba0() {
   return (neuron0x36043a0()*-0.150207);
}

double NNfunction_ng_chiPlus2::synapse0x3624be0() {
   return (neuron0x36046e0()*0.19094);
}

double NNfunction_ng_chiPlus2::synapse0x3624c20() {
   return (neuron0x3604a20()*0.13179);
}

double NNfunction_ng_chiPlus2::synapse0x3624c60() {
   return (neuron0x3604d60()*0.108524);
}

double NNfunction_ng_chiPlus2::synapse0x3624ca0() {
   return (neuron0x36050a0()*-0.211245);
}

double NNfunction_ng_chiPlus2::synapse0x3624ce0() {
   return (neuron0x36053e0()*-0.0912105);
}

double NNfunction_ng_chiPlus2::synapse0x3624d20() {
   return (neuron0x3605720()*0.228942);
}

double NNfunction_ng_chiPlus2::synapse0x3624d60() {
   return (neuron0x3605a60()*-0.129104);
}

double NNfunction_ng_chiPlus2::synapse0x3624da0() {
   return (neuron0x3605da0()*0.46256);
}

double NNfunction_ng_chiPlus2::synapse0x3624de0() {
   return (neuron0x36060e0()*0.00524814);
}

double NNfunction_ng_chiPlus2::synapse0x3624e20() {
   return (neuron0x3606420()*0.211617);
}

double NNfunction_ng_chiPlus2::synapse0x36248b0() {
   return (neuron0x3606760()*0.344228);
}

double NNfunction_ng_chiPlus2::synapse0x36248f0() {
   return (neuron0x3606cc0()*-0.201635);
}

double NNfunction_ng_chiPlus2::synapse0x3624f70() {
   return (neuron0x3607000()*0.116865);
}

double NNfunction_ng_chiPlus2::synapse0x3624fb0() {
   return (neuron0x3607340()*0.221083);
}

double NNfunction_ng_chiPlus2::synapse0x3624ff0() {
   return (neuron0x3607680()*-0.00116857);
}

double NNfunction_ng_chiPlus2::synapse0x3625030() {
   return (neuron0x36079c0()*0.107896);
}

double NNfunction_ng_chiPlus2::synapse0x3625070() {
   return (neuron0x3607d00()*-0.0936278);
}

double NNfunction_ng_chiPlus2::synapse0x36250b0() {
   return (neuron0x3608040()*-0.184421);
}

double NNfunction_ng_chiPlus2::synapse0x3625430() {
   return (neuron0x36033f0()*-0.030006);
}

double NNfunction_ng_chiPlus2::synapse0x3625470() {
   return (neuron0x36036a0()*-0.00230469);
}

double NNfunction_ng_chiPlus2::synapse0x36254b0() {
   return (neuron0x36039e0()*0.00718763);
}

double NNfunction_ng_chiPlus2::synapse0x36254f0() {
   return (neuron0x3603d20()*-1.77976);
}

double NNfunction_ng_chiPlus2::synapse0x3625530() {
   return (neuron0x3604060()*0.0442659);
}

double NNfunction_ng_chiPlus2::synapse0x3625570() {
   return (neuron0x36043a0()*0.0208152);
}

double NNfunction_ng_chiPlus2::synapse0x36255b0() {
   return (neuron0x36046e0()*0.0289463);
}

double NNfunction_ng_chiPlus2::synapse0x36255f0() {
   return (neuron0x3604a20()*0.00180165);
}

double NNfunction_ng_chiPlus2::synapse0x3625630() {
   return (neuron0x3604d60()*0.0289127);
}

double NNfunction_ng_chiPlus2::synapse0x3625670() {
   return (neuron0x36050a0()*-0.00221533);
}

double NNfunction_ng_chiPlus2::synapse0x36256b0() {
   return (neuron0x36053e0()*0.00932303);
}

double NNfunction_ng_chiPlus2::synapse0x36256f0() {
   return (neuron0x3605720()*0.138893);
}

double NNfunction_ng_chiPlus2::synapse0x3625730() {
   return (neuron0x3605a60()*0.0811984);
}

double NNfunction_ng_chiPlus2::synapse0x3625770() {
   return (neuron0x3605da0()*-0.0395278);
}

double NNfunction_ng_chiPlus2::synapse0x36257b0() {
   return (neuron0x36060e0()*-0.0143052);
}

double NNfunction_ng_chiPlus2::synapse0x36257f0() {
   return (neuron0x3606420()*-0.0264871);
}

double NNfunction_ng_chiPlus2::synapse0x3625280() {
   return (neuron0x3606760()*-0.00298494);
}

double NNfunction_ng_chiPlus2::synapse0x36252c0() {
   return (neuron0x3606cc0()*-0.0176614);
}

double NNfunction_ng_chiPlus2::synapse0x3625940() {
   return (neuron0x3607000()*-0.00868581);
}

double NNfunction_ng_chiPlus2::synapse0x3625980() {
   return (neuron0x3607340()*0.00103755);
}

double NNfunction_ng_chiPlus2::synapse0x36259c0() {
   return (neuron0x3607680()*0.0257195);
}

double NNfunction_ng_chiPlus2::synapse0x3625a00() {
   return (neuron0x36079c0()*0.0137958);
}

double NNfunction_ng_chiPlus2::synapse0x3625a40() {
   return (neuron0x3607d00()*-0.0198981);
}

double NNfunction_ng_chiPlus2::synapse0x3625a80() {
   return (neuron0x3608040()*-0.267602);
}

double NNfunction_ng_chiPlus2::synapse0x360e530() {
   return (neuron0x36033f0()*-0.0804203);
}

double NNfunction_ng_chiPlus2::synapse0x360e570() {
   return (neuron0x36036a0()*-0.10199);
}

double NNfunction_ng_chiPlus2::synapse0x360e5b0() {
   return (neuron0x36039e0()*0.402109);
}

double NNfunction_ng_chiPlus2::synapse0x360e5f0() {
   return (neuron0x3603d20()*0.45193);
}

double NNfunction_ng_chiPlus2::synapse0x360e630() {
   return (neuron0x3604060()*-0.361161);
}

double NNfunction_ng_chiPlus2::synapse0x360e670() {
   return (neuron0x36043a0()*-0.0274243);
}

double NNfunction_ng_chiPlus2::synapse0x360e6b0() {
   return (neuron0x36046e0()*0.125454);
}

double NNfunction_ng_chiPlus2::synapse0x360e6f0() {
   return (neuron0x3604a20()*0.199917);
}

double NNfunction_ng_chiPlus2::synapse0x3626210() {
   return (neuron0x3604d60()*0.0612474);
}

double NNfunction_ng_chiPlus2::synapse0x3626250() {
   return (neuron0x36050a0()*0.370779);
}

double NNfunction_ng_chiPlus2::synapse0x3626290() {
   return (neuron0x36053e0()*-0.0799867);
}

double NNfunction_ng_chiPlus2::synapse0x36262d0() {
   return (neuron0x3605720()*-0.161316);
}

double NNfunction_ng_chiPlus2::synapse0x3626310() {
   return (neuron0x3605a60()*-0.553738);
}

double NNfunction_ng_chiPlus2::synapse0x3626350() {
   return (neuron0x3605da0()*-0.43269);
}

double NNfunction_ng_chiPlus2::synapse0x3626390() {
   return (neuron0x36060e0()*-0.498725);
}

double NNfunction_ng_chiPlus2::synapse0x36263d0() {
   return (neuron0x3606420()*-0.4071);
}

double NNfunction_ng_chiPlus2::synapse0x3625c50() {
   return (neuron0x3606760()*-0.110221);
}

double NNfunction_ng_chiPlus2::synapse0x3625c90() {
   return (neuron0x3606cc0()*-0.178429);
}

double NNfunction_ng_chiPlus2::synapse0x3626520() {
   return (neuron0x3607000()*-0.256439);
}

double NNfunction_ng_chiPlus2::synapse0x3626560() {
   return (neuron0x3607340()*0.300279);
}

double NNfunction_ng_chiPlus2::synapse0x36265a0() {
   return (neuron0x3607680()*-0.0119691);
}

double NNfunction_ng_chiPlus2::synapse0x36265e0() {
   return (neuron0x36079c0()*0.0713533);
}

double NNfunction_ng_chiPlus2::synapse0x3626620() {
   return (neuron0x3607d00()*-0.112129);
}

double NNfunction_ng_chiPlus2::synapse0x3626660() {
   return (neuron0x3608040()*-0.559744);
}

double NNfunction_ng_chiPlus2::synapse0x36269e0() {
   return (neuron0x36033f0()*-0.0622766);
}

double NNfunction_ng_chiPlus2::synapse0x3626a20() {
   return (neuron0x36036a0()*-0.0791258);
}

double NNfunction_ng_chiPlus2::synapse0x3626a60() {
   return (neuron0x36039e0()*1.08442);
}

double NNfunction_ng_chiPlus2::synapse0x3626aa0() {
   return (neuron0x3603d20()*0.607723);
}

double NNfunction_ng_chiPlus2::synapse0x3626ae0() {
   return (neuron0x3604060()*0.0977744);
}

double NNfunction_ng_chiPlus2::synapse0x3626b20() {
   return (neuron0x36043a0()*0.117148);
}

double NNfunction_ng_chiPlus2::synapse0x3626b60() {
   return (neuron0x36046e0()*0.0514112);
}

double NNfunction_ng_chiPlus2::synapse0x3626ba0() {
   return (neuron0x3604a20()*0.116081);
}

double NNfunction_ng_chiPlus2::synapse0x3626be0() {
   return (neuron0x3604d60()*-0.0241447);
}

double NNfunction_ng_chiPlus2::synapse0x3626c20() {
   return (neuron0x36050a0()*0.0259285);
}

double NNfunction_ng_chiPlus2::synapse0x3626c60() {
   return (neuron0x36053e0()*-0.069942);
}

double NNfunction_ng_chiPlus2::synapse0x3626ca0() {
   return (neuron0x3605720()*1.42064);
}

double NNfunction_ng_chiPlus2::synapse0x3626ce0() {
   return (neuron0x3605a60()*0.138761);
}

double NNfunction_ng_chiPlus2::synapse0x3626d20() {
   return (neuron0x3605da0()*0.20721);
}

double NNfunction_ng_chiPlus2::synapse0x3626d60() {
   return (neuron0x36060e0()*0.0829283);
}

double NNfunction_ng_chiPlus2::synapse0x3626da0() {
   return (neuron0x3606420()*-0.159416);
}

double NNfunction_ng_chiPlus2::synapse0x3626830() {
   return (neuron0x3606760()*0.0435078);
}

double NNfunction_ng_chiPlus2::synapse0x3626870() {
   return (neuron0x3606cc0()*-0.119869);
}

double NNfunction_ng_chiPlus2::synapse0x3626ef0() {
   return (neuron0x3607000()*0.00554366);
}

double NNfunction_ng_chiPlus2::synapse0x3626f30() {
   return (neuron0x3607340()*0.0134047);
}

double NNfunction_ng_chiPlus2::synapse0x3626f70() {
   return (neuron0x3607680()*0.0896283);
}

double NNfunction_ng_chiPlus2::synapse0x3626fb0() {
   return (neuron0x36079c0()*-0.0421137);
}

double NNfunction_ng_chiPlus2::synapse0x3626ff0() {
   return (neuron0x3607d00()*-0.0786611);
}

double NNfunction_ng_chiPlus2::synapse0x3627030() {
   return (neuron0x3608040()*0.0600523);
}

double NNfunction_ng_chiPlus2::synapse0x36273b0() {
   return (neuron0x36033f0()*-0.278263);
}

double NNfunction_ng_chiPlus2::synapse0x36273f0() {
   return (neuron0x36036a0()*-0.00308276);
}

double NNfunction_ng_chiPlus2::synapse0x3627430() {
   return (neuron0x36039e0()*0.777678);
}

double NNfunction_ng_chiPlus2::synapse0x3627470() {
   return (neuron0x3603d20()*-0.848198);
}

double NNfunction_ng_chiPlus2::synapse0x36274b0() {
   return (neuron0x3604060()*-0.289626);
}

double NNfunction_ng_chiPlus2::synapse0x36274f0() {
   return (neuron0x36043a0()*-0.192647);
}

double NNfunction_ng_chiPlus2::synapse0x3627530() {
   return (neuron0x36046e0()*0.0883724);
}

double NNfunction_ng_chiPlus2::synapse0x3627570() {
   return (neuron0x3604a20()*0.124105);
}

double NNfunction_ng_chiPlus2::synapse0x36275b0() {
   return (neuron0x3604d60()*0.290488);
}

double NNfunction_ng_chiPlus2::synapse0x36275f0() {
   return (neuron0x36050a0()*-0.128967);
}

double NNfunction_ng_chiPlus2::synapse0x3627630() {
   return (neuron0x36053e0()*0.182483);
}

double NNfunction_ng_chiPlus2::synapse0x3627670() {
   return (neuron0x3605720()*0.897015);
}

double NNfunction_ng_chiPlus2::synapse0x36276b0() {
   return (neuron0x3605a60()*-0.0184082);
}

double NNfunction_ng_chiPlus2::synapse0x36276f0() {
   return (neuron0x3605da0()*-0.0914472);
}

double NNfunction_ng_chiPlus2::synapse0x3627730() {
   return (neuron0x36060e0()*0.42684);
}

double NNfunction_ng_chiPlus2::synapse0x3627770() {
   return (neuron0x3606420()*0.217495);
}

double NNfunction_ng_chiPlus2::synapse0x3627200() {
   return (neuron0x3606760()*0.166982);
}

double NNfunction_ng_chiPlus2::synapse0x3627240() {
   return (neuron0x3606cc0()*-0.407315);
}

double NNfunction_ng_chiPlus2::synapse0x3617d70() {
   return (neuron0x3607000()*0.00929138);
}

double NNfunction_ng_chiPlus2::synapse0x3617db0() {
   return (neuron0x3607340()*0.0356407);
}

double NNfunction_ng_chiPlus2::synapse0x3617df0() {
   return (neuron0x3607680()*-0.241737);
}

double NNfunction_ng_chiPlus2::synapse0x3617e30() {
   return (neuron0x36079c0()*-0.304255);
}

double NNfunction_ng_chiPlus2::synapse0x3617e70() {
   return (neuron0x3607d00()*-0.178828);
}

double NNfunction_ng_chiPlus2::synapse0x3617eb0() {
   return (neuron0x3608040()*-0.047915);
}

double NNfunction_ng_chiPlus2::synapse0x3618230() {
   return (neuron0x36033f0()*0.0497205);
}

double NNfunction_ng_chiPlus2::synapse0x3618270() {
   return (neuron0x36036a0()*0.0232776);
}

double NNfunction_ng_chiPlus2::synapse0x36182b0() {
   return (neuron0x36039e0()*0.354395);
}

double NNfunction_ng_chiPlus2::synapse0x36182f0() {
   return (neuron0x3603d20()*2.20665);
}

double NNfunction_ng_chiPlus2::synapse0x3618330() {
   return (neuron0x3604060()*0.0643112);
}

double NNfunction_ng_chiPlus2::synapse0x3618370() {
   return (neuron0x36043a0()*0.034544);
}

double NNfunction_ng_chiPlus2::synapse0x36183b0() {
   return (neuron0x36046e0()*0.0336458);
}

double NNfunction_ng_chiPlus2::synapse0x36183f0() {
   return (neuron0x3604a20()*0.0737068);
}

double NNfunction_ng_chiPlus2::synapse0x3618430() {
   return (neuron0x3604d60()*-0.0171548);
}

double NNfunction_ng_chiPlus2::synapse0x3618470() {
   return (neuron0x36050a0()*-0.0104747);
}

double NNfunction_ng_chiPlus2::synapse0x36184b0() {
   return (neuron0x36053e0()*-0.0356065);
}

double NNfunction_ng_chiPlus2::synapse0x36184f0() {
   return (neuron0x3605720()*-0.45969);
}

double NNfunction_ng_chiPlus2::synapse0x3618530() {
   return (neuron0x3605a60()*-0.00375402);
}

double NNfunction_ng_chiPlus2::synapse0x3618570() {
   return (neuron0x3605da0()*-0.326183);
}

double NNfunction_ng_chiPlus2::synapse0x36185b0() {
   return (neuron0x36060e0()*0.178164);
}

double NNfunction_ng_chiPlus2::synapse0x36185f0() {
   return (neuron0x3606420()*0.0504628);
}

double NNfunction_ng_chiPlus2::synapse0x3618080() {
   return (neuron0x3606760()*-0.0050406);
}

double NNfunction_ng_chiPlus2::synapse0x36180c0() {
   return (neuron0x3606cc0()*0.0911957);
}

double NNfunction_ng_chiPlus2::synapse0x3618740() {
   return (neuron0x3607000()*0.126304);
}

double NNfunction_ng_chiPlus2::synapse0x3618780() {
   return (neuron0x3607340()*-0.0827985);
}

double NNfunction_ng_chiPlus2::synapse0x36187c0() {
   return (neuron0x3607680()*-0.00675442);
}

double NNfunction_ng_chiPlus2::synapse0x3618800() {
   return (neuron0x36079c0()*-0.0166292);
}

double NNfunction_ng_chiPlus2::synapse0x3618840() {
   return (neuron0x3607d00()*0.0145103);
}

double NNfunction_ng_chiPlus2::synapse0x3618880() {
   return (neuron0x3608040()*0.243937);
}

double NNfunction_ng_chiPlus2::synapse0x3618c00() {
   return (neuron0x36033f0()*0.0253513);
}

double NNfunction_ng_chiPlus2::synapse0x3618c40() {
   return (neuron0x36036a0()*0.00102933);
}

double NNfunction_ng_chiPlus2::synapse0x3618c80() {
   return (neuron0x36039e0()*0.344749);
}

double NNfunction_ng_chiPlus2::synapse0x3618cc0() {
   return (neuron0x3603d20()*0.647686);
}

double NNfunction_ng_chiPlus2::synapse0x3618d00() {
   return (neuron0x3604060()*-0.00271899);
}

double NNfunction_ng_chiPlus2::synapse0x3618d40() {
   return (neuron0x36043a0()*-0.00719839);
}

double NNfunction_ng_chiPlus2::synapse0x3618d80() {
   return (neuron0x36046e0()*0.011784);
}

double NNfunction_ng_chiPlus2::synapse0x3618dc0() {
   return (neuron0x3604a20()*-0.0062553);
}

double NNfunction_ng_chiPlus2::synapse0x3618e00() {
   return (neuron0x3604d60()*-0.0204344);
}

double NNfunction_ng_chiPlus2::synapse0x3618e40() {
   return (neuron0x36050a0()*-0.0080249);
}

double NNfunction_ng_chiPlus2::synapse0x3618e80() {
   return (neuron0x36053e0()*0.00644842);
}

double NNfunction_ng_chiPlus2::synapse0x3618ec0() {
   return (neuron0x3605720()*0.0853732);
}

double NNfunction_ng_chiPlus2::synapse0x3618f00() {
   return (neuron0x3605a60()*0.0113118);
}

double NNfunction_ng_chiPlus2::synapse0x3618f40() {
   return (neuron0x3605da0()*0.017469);
}

double NNfunction_ng_chiPlus2::synapse0x3618f80() {
   return (neuron0x36060e0()*-0.0314348);
}

double NNfunction_ng_chiPlus2::synapse0x3618fc0() {
   return (neuron0x3606420()*-0.0123714);
}

double NNfunction_ng_chiPlus2::synapse0x3618a50() {
   return (neuron0x3606760()*-0.00723395);
}

double NNfunction_ng_chiPlus2::synapse0x3618a90() {
   return (neuron0x3606cc0()*-0.0206528);
}

double NNfunction_ng_chiPlus2::synapse0x3619110() {
   return (neuron0x3607000()*-0.0253599);
}

double NNfunction_ng_chiPlus2::synapse0x3619150() {
   return (neuron0x3607340()*-0.0177009);
}

double NNfunction_ng_chiPlus2::synapse0x3619190() {
   return (neuron0x3607680()*-0.0170439);
}

double NNfunction_ng_chiPlus2::synapse0x36191d0() {
   return (neuron0x36079c0()*-0.00881499);
}

double NNfunction_ng_chiPlus2::synapse0x3619210() {
   return (neuron0x3607d00()*-0.00344376);
}

double NNfunction_ng_chiPlus2::synapse0x3619250() {
   return (neuron0x3608040()*-0.181694);
}

double NNfunction_ng_chiPlus2::synapse0x36195d0() {
   return (neuron0x36033f0()*0.015527);
}

double NNfunction_ng_chiPlus2::synapse0x3619610() {
   return (neuron0x36036a0()*-0.0097207);
}

double NNfunction_ng_chiPlus2::synapse0x3619650() {
   return (neuron0x36039e0()*3.20846);
}

double NNfunction_ng_chiPlus2::synapse0x3619690() {
   return (neuron0x3603d20()*-0.0399967);
}

double NNfunction_ng_chiPlus2::synapse0x36196d0() {
   return (neuron0x3604060()*0.0103595);
}

double NNfunction_ng_chiPlus2::synapse0x3619710() {
   return (neuron0x36043a0()*0.0102939);
}

double NNfunction_ng_chiPlus2::synapse0x3619750() {
   return (neuron0x36046e0()*0.012189);
}

double NNfunction_ng_chiPlus2::synapse0x3619790() {
   return (neuron0x3604a20()*0.00682512);
}

double NNfunction_ng_chiPlus2::synapse0x36197d0() {
   return (neuron0x3604d60()*0.0141624);
}

double NNfunction_ng_chiPlus2::synapse0x3619810() {
   return (neuron0x36050a0()*0.00258301);
}

double NNfunction_ng_chiPlus2::synapse0x3619850() {
   return (neuron0x36053e0()*0.00344314);
}

double NNfunction_ng_chiPlus2::synapse0x3619890() {
   return (neuron0x3605720()*0.112976);
}

double NNfunction_ng_chiPlus2::synapse0x36198d0() {
   return (neuron0x3605a60()*-0.0249664);
}

double NNfunction_ng_chiPlus2::synapse0x3619910() {
   return (neuron0x3605da0()*0.00355203);
}

double NNfunction_ng_chiPlus2::synapse0x3619950() {
   return (neuron0x36060e0()*-0.00485477);
}

double NNfunction_ng_chiPlus2::synapse0x3619990() {
   return (neuron0x3606420()*0.00468417);
}

double NNfunction_ng_chiPlus2::synapse0x3619420() {
   return (neuron0x3606760()*-0.00179582);
}

double NNfunction_ng_chiPlus2::synapse0x3619460() {
   return (neuron0x3606cc0()*-0.000355956);
}

double NNfunction_ng_chiPlus2::synapse0x3619ae0() {
   return (neuron0x3607000()*0.00974536);
}

double NNfunction_ng_chiPlus2::synapse0x3619b20() {
   return (neuron0x3607340()*-0.00804291);
}

double NNfunction_ng_chiPlus2::synapse0x3619b60() {
   return (neuron0x3607680()*-0.00124931);
}

double NNfunction_ng_chiPlus2::synapse0x3619ba0() {
   return (neuron0x36079c0()*0.00510733);
}

double NNfunction_ng_chiPlus2::synapse0x3619be0() {
   return (neuron0x3607d00()*-0.00312386);
}

double NNfunction_ng_chiPlus2::synapse0x3619c20() {
   return (neuron0x3608040()*-2.58315);
}

double NNfunction_ng_chiPlus2::synapse0x362baf0() {
   return (neuron0x36033f0()*0.0435391);
}

double NNfunction_ng_chiPlus2::synapse0x362bb30() {
   return (neuron0x36036a0()*-0.0146283);
}

double NNfunction_ng_chiPlus2::synapse0x362bb70() {
   return (neuron0x36039e0()*0.830116);
}

double NNfunction_ng_chiPlus2::synapse0x362bbb0() {
   return (neuron0x3603d20()*-1.02865);
}

double NNfunction_ng_chiPlus2::synapse0x362bbf0() {
   return (neuron0x3604060()*0.0231607);
}

double NNfunction_ng_chiPlus2::synapse0x362bc30() {
   return (neuron0x36043a0()*0.0129144);
}

double NNfunction_ng_chiPlus2::synapse0x362bc70() {
   return (neuron0x36046e0()*0.0628061);
}

double NNfunction_ng_chiPlus2::synapse0x362bcb0() {
   return (neuron0x3604a20()*0.00693333);
}

double NNfunction_ng_chiPlus2::synapse0x362bcf0() {
   return (neuron0x3604d60()*0.00855465);
}

double NNfunction_ng_chiPlus2::synapse0x362bd30() {
   return (neuron0x36050a0()*-0.0430491);
}

double NNfunction_ng_chiPlus2::synapse0x362bd70() {
   return (neuron0x36053e0()*-0.0141911);
}

double NNfunction_ng_chiPlus2::synapse0x362bdb0() {
   return (neuron0x3605720()*0.519726);
}

double NNfunction_ng_chiPlus2::synapse0x362bdf0() {
   return (neuron0x3605a60()*-0.105725);
}

double NNfunction_ng_chiPlus2::synapse0x362be30() {
   return (neuron0x3605da0()*0.0923436);
}

double NNfunction_ng_chiPlus2::synapse0x362be70() {
   return (neuron0x36060e0()*0.0314986);
}

double NNfunction_ng_chiPlus2::synapse0x362beb0() {
   return (neuron0x3606420()*0.0593635);
}

double NNfunction_ng_chiPlus2::synapse0x3619c60() {
   return (neuron0x3606760()*0.0157618);
}

double NNfunction_ng_chiPlus2::synapse0x3619ca0() {
   return (neuron0x3606cc0()*0.0172678);
}

double NNfunction_ng_chiPlus2::synapse0x362c000() {
   return (neuron0x3607000()*0.0329395);
}

double NNfunction_ng_chiPlus2::synapse0x362c040() {
   return (neuron0x3607340()*0.024199);
}

double NNfunction_ng_chiPlus2::synapse0x362c080() {
   return (neuron0x3607680()*0.0206533);
}

double NNfunction_ng_chiPlus2::synapse0x362c0c0() {
   return (neuron0x36079c0()*0.0206757);
}

double NNfunction_ng_chiPlus2::synapse0x362c100() {
   return (neuron0x3607d00()*-0.0140565);
}

double NNfunction_ng_chiPlus2::synapse0x362c140() {
   return (neuron0x3608040()*0.932184);
}

double NNfunction_ng_chiPlus2::synapse0x362c4c0() {
   return (neuron0x36033f0()*0.0601735);
}

double NNfunction_ng_chiPlus2::synapse0x362c500() {
   return (neuron0x36036a0()*-0.0469305);
}

double NNfunction_ng_chiPlus2::synapse0x362c540() {
   return (neuron0x36039e0()*0.0524661);
}

double NNfunction_ng_chiPlus2::synapse0x362c580() {
   return (neuron0x3603d20()*0.153401);
}

double NNfunction_ng_chiPlus2::synapse0x362c5c0() {
   return (neuron0x3604060()*0.0124694);
}

double NNfunction_ng_chiPlus2::synapse0x362c600() {
   return (neuron0x36043a0()*-0.0472019);
}

double NNfunction_ng_chiPlus2::synapse0x362c640() {
   return (neuron0x36046e0()*-0.162474);
}

double NNfunction_ng_chiPlus2::synapse0x362c680() {
   return (neuron0x3604a20()*0.0923101);
}

double NNfunction_ng_chiPlus2::synapse0x362c6c0() {
   return (neuron0x3604d60()*-0.0918467);
}

double NNfunction_ng_chiPlus2::synapse0x362c700() {
   return (neuron0x36050a0()*0.0710507);
}

double NNfunction_ng_chiPlus2::synapse0x362c740() {
   return (neuron0x36053e0()*0.0640018);
}

double NNfunction_ng_chiPlus2::synapse0x362c780() {
   return (neuron0x3605720()*0.785538);
}

double NNfunction_ng_chiPlus2::synapse0x362c7c0() {
   return (neuron0x3605a60()*-0.601281);
}

double NNfunction_ng_chiPlus2::synapse0x362c800() {
   return (neuron0x3605da0()*-0.0186691);
}

double NNfunction_ng_chiPlus2::synapse0x362c840() {
   return (neuron0x36060e0()*0.153989);
}

double NNfunction_ng_chiPlus2::synapse0x362c880() {
   return (neuron0x3606420()*-0.0367929);
}

double NNfunction_ng_chiPlus2::synapse0x362c310() {
   return (neuron0x3606760()*-0.00872869);
}

double NNfunction_ng_chiPlus2::synapse0x362c350() {
   return (neuron0x3606cc0()*-0.0148579);
}

double NNfunction_ng_chiPlus2::synapse0x362c9d0() {
   return (neuron0x3607000()*0.00870557);
}

double NNfunction_ng_chiPlus2::synapse0x362ca10() {
   return (neuron0x3607340()*0.346547);
}

double NNfunction_ng_chiPlus2::synapse0x362ca50() {
   return (neuron0x3607680()*-0.00461953);
}

double NNfunction_ng_chiPlus2::synapse0x362ca90() {
   return (neuron0x36079c0()*-0.108798);
}

double NNfunction_ng_chiPlus2::synapse0x362cad0() {
   return (neuron0x3607d00()*-0.000282739);
}

double NNfunction_ng_chiPlus2::synapse0x362cb10() {
   return (neuron0x3608040()*-0.528982);
}

double NNfunction_ng_chiPlus2::synapse0x362ce90() {
   return (neuron0x36033f0()*-0.00188471);
}

double NNfunction_ng_chiPlus2::synapse0x362ced0() {
   return (neuron0x36036a0()*0.00321841);
}

double NNfunction_ng_chiPlus2::synapse0x362cf10() {
   return (neuron0x36039e0()*-0.0121146);
}

double NNfunction_ng_chiPlus2::synapse0x362cf50() {
   return (neuron0x3603d20()*-5.20903);
}

double NNfunction_ng_chiPlus2::synapse0x362cf90() {
   return (neuron0x3604060()*0.00205052);
}

double NNfunction_ng_chiPlus2::synapse0x362cfd0() {
   return (neuron0x36043a0()*0.00475063);
}

double NNfunction_ng_chiPlus2::synapse0x362d010() {
   return (neuron0x36046e0()*0.000398894);
}

double NNfunction_ng_chiPlus2::synapse0x362d050() {
   return (neuron0x3604a20()*0.0157448);
}

double NNfunction_ng_chiPlus2::synapse0x362d090() {
   return (neuron0x3604d60()*0.00563202);
}

double NNfunction_ng_chiPlus2::synapse0x362d0d0() {
   return (neuron0x36050a0()*0.00182267);
}

double NNfunction_ng_chiPlus2::synapse0x362d110() {
   return (neuron0x36053e0()*0.00320986);
}

double NNfunction_ng_chiPlus2::synapse0x362d150() {
   return (neuron0x3605720()*-0.172905);
}

double NNfunction_ng_chiPlus2::synapse0x362d190() {
   return (neuron0x3605a60()*0.128462);
}

double NNfunction_ng_chiPlus2::synapse0x362d1d0() {
   return (neuron0x3605da0()*-0.0349241);
}

double NNfunction_ng_chiPlus2::synapse0x362d210() {
   return (neuron0x36060e0()*0.0303943);
}

double NNfunction_ng_chiPlus2::synapse0x362d250() {
   return (neuron0x3606420()*0.0091608);
}

double NNfunction_ng_chiPlus2::synapse0x362cce0() {
   return (neuron0x3606760()*-0.00431207);
}

double NNfunction_ng_chiPlus2::synapse0x362cd20() {
   return (neuron0x3606cc0()*0.00274278);
}

double NNfunction_ng_chiPlus2::synapse0x362d3a0() {
   return (neuron0x3607000()*0.0138476);
}

double NNfunction_ng_chiPlus2::synapse0x362d3e0() {
   return (neuron0x3607340()*-0.00146074);
}

double NNfunction_ng_chiPlus2::synapse0x362d420() {
   return (neuron0x3607680()*0.0163933);
}

double NNfunction_ng_chiPlus2::synapse0x362d460() {
   return (neuron0x36079c0()*0.00766086);
}

double NNfunction_ng_chiPlus2::synapse0x362d4a0() {
   return (neuron0x3607d00()*0.0127258);
}

double NNfunction_ng_chiPlus2::synapse0x362d4e0() {
   return (neuron0x3608040()*0.0018066);
}

double NNfunction_ng_chiPlus2::synapse0x362d860() {
   return (neuron0x36033f0()*0.262314);
}

double NNfunction_ng_chiPlus2::synapse0x362d8a0() {
   return (neuron0x36036a0()*-0.0702797);
}

double NNfunction_ng_chiPlus2::synapse0x362d8e0() {
   return (neuron0x36039e0()*-0.269362);
}

double NNfunction_ng_chiPlus2::synapse0x362d920() {
   return (neuron0x3603d20()*-0.485424);
}

double NNfunction_ng_chiPlus2::synapse0x362d960() {
   return (neuron0x3604060()*0.130772);
}

double NNfunction_ng_chiPlus2::synapse0x362d9a0() {
   return (neuron0x36043a0()*-0.0643754);
}

double NNfunction_ng_chiPlus2::synapse0x362d9e0() {
   return (neuron0x36046e0()*0.104569);
}

double NNfunction_ng_chiPlus2::synapse0x362da20() {
   return (neuron0x3604a20()*-0.00959856);
}

double NNfunction_ng_chiPlus2::synapse0x362da60() {
   return (neuron0x3604d60()*0.0966229);
}

double NNfunction_ng_chiPlus2::synapse0x362daa0() {
   return (neuron0x36050a0()*-0.0665368);
}

double NNfunction_ng_chiPlus2::synapse0x362dae0() {
   return (neuron0x36053e0()*0.0391289);
}

double NNfunction_ng_chiPlus2::synapse0x362db20() {
   return (neuron0x3605720()*1.01476);
}

double NNfunction_ng_chiPlus2::synapse0x362db60() {
   return (neuron0x3605a60()*-0.136026);
}

double NNfunction_ng_chiPlus2::synapse0x362dba0() {
   return (neuron0x3605da0()*0.13845);
}

double NNfunction_ng_chiPlus2::synapse0x362dbe0() {
   return (neuron0x36060e0()*0.256864);
}

double NNfunction_ng_chiPlus2::synapse0x362dc20() {
   return (neuron0x3606420()*0.209633);
}

double NNfunction_ng_chiPlus2::synapse0x362d6b0() {
   return (neuron0x3606760()*0.118096);
}

double NNfunction_ng_chiPlus2::synapse0x362d6f0() {
   return (neuron0x3606cc0()*-0.0314392);
}

double NNfunction_ng_chiPlus2::synapse0x362dd70() {
   return (neuron0x3607000()*0.148604);
}

double NNfunction_ng_chiPlus2::synapse0x362ddb0() {
   return (neuron0x3607340()*-0.0238948);
}

double NNfunction_ng_chiPlus2::synapse0x362ddf0() {
   return (neuron0x3607680()*-0.0127253);
}

double NNfunction_ng_chiPlus2::synapse0x362de30() {
   return (neuron0x36079c0()*-0.0246076);
}

double NNfunction_ng_chiPlus2::synapse0x362de70() {
   return (neuron0x3607d00()*0.0915984);
}

double NNfunction_ng_chiPlus2::synapse0x362deb0() {
   return (neuron0x3608040()*-0.57944);
}

double NNfunction_ng_chiPlus2::synapse0x3609300() {
   return (neuron0x36084b0()*1.17329);
}

double NNfunction_ng_chiPlus2::synapse0x3609340() {
   return (neuron0x3608cf0()*-0.0765082);
}

double NNfunction_ng_chiPlus2::synapse0x360a860() {
   return (neuron0x36097d0()*1.86032);
}

double NNfunction_ng_chiPlus2::synapse0x360a8a0() {
   return (neuron0x33cdbf0()*0.0500584);
}

double NNfunction_ng_chiPlus2::synapse0x360c330() {
   return (neuron0x360a5b0()*1.33756);
}

double NNfunction_ng_chiPlus2::synapse0x360c370() {
   return (neuron0x360c080()*-1.50307);
}

double NNfunction_ng_chiPlus2::synapse0x360d100() {
   return (neuron0x360ce50()*0.0271494);
}

double NNfunction_ng_chiPlus2::synapse0x360d140() {
   return (neuron0x360d820()*0.136264);
}

double NNfunction_ng_chiPlus2::synapse0x360dad0() {
   return (neuron0x360e1f0()*-0.121187);
}

double NNfunction_ng_chiPlus2::synapse0x360db10() {
   return (neuron0x360ecd0()*0.0147271);
}

double NNfunction_ng_chiPlus2::synapse0x360e4a0() {
   return (neuron0x360f6a0()*0.178742);
}

double NNfunction_ng_chiPlus2::synapse0x360e4e0() {
   return (neuron0x360c780()*0.00866543);
}

double NNfunction_ng_chiPlus2::synapse0x360ef80() {
   return (neuron0x3611250()*0.0171168);
}

double NNfunction_ng_chiPlus2::synapse0x360efc0() {
   return (neuron0x3611c20()*-0.406296);
}

double NNfunction_ng_chiPlus2::synapse0x360f950() {
   return (neuron0x36125f0()*-0.10684);
}

double NNfunction_ng_chiPlus2::synapse0x360f990() {
   return (neuron0x3612fc0()*-0.29253);
}

double NNfunction_ng_chiPlus2::synapse0x360ca30() {
   return (neuron0x3614dd0()*-0.121512);
}

double NNfunction_ng_chiPlus2::synapse0x360ca70() {
   return (neuron0x36150b0()*-0.514098);
}

double NNfunction_ng_chiPlus2::synapse0x3611500() {
   return (neuron0x3615a80()*-0.472355);
}

double NNfunction_ng_chiPlus2::synapse0x3611540() {
   return (neuron0x3616450()*-0.189351);
}

double NNfunction_ng_chiPlus2::synapse0x3611ed0() {
   return (neuron0x3616e20()*-0.386732);
}

double NNfunction_ng_chiPlus2::synapse0x3611f10() {
   return (neuron0x36177f0()*0.108736);
}

double NNfunction_ng_chiPlus2::synapse0x36128a0() {
   return (neuron0x3610340()*-0.0297002);
}

double NNfunction_ng_chiPlus2::synapse0x36128e0() {
   return (neuron0x3610d10()*0.62531);
}

double NNfunction_ng_chiPlus2::synapse0x3613270() {
   return (neuron0x361a580()*-0.0802432);
}

double NNfunction_ng_chiPlus2::synapse0x36132b0() {
   return (neuron0x361af50()*-1.26295);
}

double NNfunction_ng_chiPlus2::synapse0x3606300() {
   return (neuron0x361b920()*-0.50615);
}

double NNfunction_ng_chiPlus2::synapse0x3606340() {
   return (neuron0x361c2f0()*-0.0198248);
}

double NNfunction_ng_chiPlus2::synapse0x3615360() {
   return (neuron0x361ccc0()*1.13525);
}

double NNfunction_ng_chiPlus2::synapse0x36153a0() {
   return (neuron0x361d690()*-0.0543983);
}

double NNfunction_ng_chiPlus2::synapse0x3615d30() {
   return (neuron0x361e060()*-0.0127114);
}

double NNfunction_ng_chiPlus2::synapse0x3615d70() {
   return (neuron0x361ea30()*-0.00150262);
}

double NNfunction_ng_chiPlus2::synapse0x3616700() {
   return (neuron0x3614ac0()*-1.45644);
}

double NNfunction_ng_chiPlus2::synapse0x3616740() {
   return (neuron0x3621610()*0.268265);
}

double NNfunction_ng_chiPlus2::synapse0x36170d0() {
   return (neuron0x3621fe0()*-0.429607);
}

double NNfunction_ng_chiPlus2::synapse0x3617110() {
   return (neuron0x36229b0()*-0.927452);
}

double NNfunction_ng_chiPlus2::synapse0x3617aa0() {
   return (neuron0x3623380()*0.0152613);
}

double NNfunction_ng_chiPlus2::synapse0x3617ae0() {
   return (neuron0x3623d50()*1.05171);
}

double NNfunction_ng_chiPlus2::synapse0x36105f0() {
   return (neuron0x3624720()*0.0871115);
}

double NNfunction_ng_chiPlus2::synapse0x3610630() {
   return (neuron0x36250f0()*-0.188993);
}

double NNfunction_ng_chiPlus2::synapse0x3619ea0() {
   return (neuron0x3625ac0()*-0.139154);
}

double NNfunction_ng_chiPlus2::synapse0x3619ee0() {
   return (neuron0x36266a0()*-0.146414);
}

double NNfunction_ng_chiPlus2::synapse0x361a830() {
   return (neuron0x3627070()*-0.0289151);
}

double NNfunction_ng_chiPlus2::synapse0x361a870() {
   return (neuron0x3617ef0()*0.29281);
}

double NNfunction_ng_chiPlus2::synapse0x361b200() {
   return (neuron0x36188c0()*0.13112);
}

double NNfunction_ng_chiPlus2::synapse0x361b240() {
   return (neuron0x3619290()*-0.654828);
}

double NNfunction_ng_chiPlus2::synapse0x361bbd0() {
   return (neuron0x362b8d0()*-0.652559);
}

double NNfunction_ng_chiPlus2::synapse0x361bc10() {
   return (neuron0x362c180()*0.208414);
}

double NNfunction_ng_chiPlus2::synapse0x361c5a0() {
   return (neuron0x362cb50()*-0.0653359);
}

double NNfunction_ng_chiPlus2::synapse0x361c5e0() {
   return (neuron0x362d520()*-0.00733756);
}

double NNfunction_ng_chiPlus2::synapse0x361ece0() {
   return (neuron0x36084b0()*0.205027);
}

double NNfunction_ng_chiPlus2::synapse0x361ed20() {
   return (neuron0x3608cf0()*0.0816164);
}

double NNfunction_ng_chiPlus2::synapse0x36142a0() {
   return (neuron0x36097d0()*-2.91439);
}

double NNfunction_ng_chiPlus2::synapse0x36142e0() {
   return (neuron0x33cdbf0()*-0.114305);
}

double NNfunction_ng_chiPlus2::synapse0x36218c0() {
   return (neuron0x360a5b0()*1.07736);
}

double NNfunction_ng_chiPlus2::synapse0x3621900() {
   return (neuron0x360c080()*0.290726);
}

double NNfunction_ng_chiPlus2::synapse0x3622290() {
   return (neuron0x360ce50()*0.273795);
}

double NNfunction_ng_chiPlus2::synapse0x36222d0() {
   return (neuron0x360d820()*0.0462271);
}

double NNfunction_ng_chiPlus2::synapse0x3622c60() {
   return (neuron0x360e1f0()*0.400815);
}

double NNfunction_ng_chiPlus2::synapse0x3622ca0() {
   return (neuron0x360ecd0()*-0.153509);
}

double NNfunction_ng_chiPlus2::synapse0x3623630() {
   return (neuron0x360f6a0()*-0.127479);
}

double NNfunction_ng_chiPlus2::synapse0x3623670() {
   return (neuron0x360c780()*0.197543);
}

double NNfunction_ng_chiPlus2::synapse0x3624000() {
   return (neuron0x3611250()*-0.164978);
}

double NNfunction_ng_chiPlus2::synapse0x3624040() {
   return (neuron0x3611c20()*1.42468);
}

double NNfunction_ng_chiPlus2::synapse0x36249d0() {
   return (neuron0x36125f0()*0.0641376);
}

double NNfunction_ng_chiPlus2::synapse0x3624a10() {
   return (neuron0x3612fc0()*0.710444);
}

double NNfunction_ng_chiPlus2::synapse0x36253a0() {
   return (neuron0x3614dd0()*-0.268506);
}

double NNfunction_ng_chiPlus2::synapse0x36253e0() {
   return (neuron0x36150b0()*-0.98547);
}

double NNfunction_ng_chiPlus2::synapse0x3625d70() {
   return (neuron0x3615a80()*0.0708204);
}

double NNfunction_ng_chiPlus2::synapse0x3625db0() {
   return (neuron0x3616450()*0.675219);
}

double NNfunction_ng_chiPlus2::synapse0x3626950() {
   return (neuron0x3616e20()*-0.831168);
}

double NNfunction_ng_chiPlus2::synapse0x3626990() {
   return (neuron0x36177f0()*0.639414);
}

double NNfunction_ng_chiPlus2::synapse0x3627320() {
   return (neuron0x3610340()*0.0413736);
}

double NNfunction_ng_chiPlus2::synapse0x3627360() {
   return (neuron0x3610d10()*0.881744);
}

double NNfunction_ng_chiPlus2::synapse0x36181a0() {
   return (neuron0x361a580()*0.146658);
}

double NNfunction_ng_chiPlus2::synapse0x36181e0() {
   return (neuron0x361af50()*1.30919);
}

double NNfunction_ng_chiPlus2::synapse0x3618b70() {
   return (neuron0x361b920()*-0.576042);
}

double NNfunction_ng_chiPlus2::synapse0x3618bb0() {
   return (neuron0x361c2f0()*0.211802);
}

double NNfunction_ng_chiPlus2::synapse0x3619540() {
   return (neuron0x361ccc0()*1.22466);
}

double NNfunction_ng_chiPlus2::synapse0x3619580() {
   return (neuron0x361d690()*0.170956);
}

double NNfunction_ng_chiPlus2::synapse0x362ba60() {
   return (neuron0x361e060()*0.124714);
}

double NNfunction_ng_chiPlus2::synapse0x362baa0() {
   return (neuron0x361ea30()*-0.200508);
}

double NNfunction_ng_chiPlus2::synapse0x362c430() {
   return (neuron0x3614ac0()*-0.0215262);
}

double NNfunction_ng_chiPlus2::synapse0x362c470() {
   return (neuron0x3621610()*-0.42977);
}

double NNfunction_ng_chiPlus2::synapse0x362ce00() {
   return (neuron0x3621fe0()*-1.29678);
}

double NNfunction_ng_chiPlus2::synapse0x362ce40() {
   return (neuron0x36229b0()*-0.0993325);
}

double NNfunction_ng_chiPlus2::synapse0x362d7d0() {
   return (neuron0x3623380()*-0.0567803);
}

double NNfunction_ng_chiPlus2::synapse0x362d810() {
   return (neuron0x3623d50()*-0.876861);
}

double NNfunction_ng_chiPlus2::synapse0x3608760() {
   return (neuron0x3624720()*-0.576527);
}

double NNfunction_ng_chiPlus2::synapse0x36087a0() {
   return (neuron0x36250f0()*0.935761);
}

double NNfunction_ng_chiPlus2::synapse0x361cf70() {
   return (neuron0x3625ac0()*0.205016);
}

double NNfunction_ng_chiPlus2::synapse0x361cfb0() {
   return (neuron0x36266a0()*-0.0473143);
}

double NNfunction_ng_chiPlus2::synapse0x362def0() {
   return (neuron0x3627070()*-0.154151);
}

double NNfunction_ng_chiPlus2::synapse0x362df30() {
   return (neuron0x3617ef0()*-1.33833);
}

double NNfunction_ng_chiPlus2::synapse0x362df70() {
   return (neuron0x36188c0()*-0.717035);
}

double NNfunction_ng_chiPlus2::synapse0x362dfb0() {
   return (neuron0x3619290()*-1.0422);
}

double NNfunction_ng_chiPlus2::synapse0x3634e60() {
   return (neuron0x362b8d0()*0.940928);
}

double NNfunction_ng_chiPlus2::synapse0x3634ea0() {
   return (neuron0x362c180()*0.0539384);
}

double NNfunction_ng_chiPlus2::synapse0x3634ee0() {
   return (neuron0x362cb50()*2.63499);
}

double NNfunction_ng_chiPlus2::synapse0x3634f20() {
   return (neuron0x362d520()*0.405753);
}

double NNfunction_ng_chiPlus2::synapse0x36352a0() {
   return (neuron0x36084b0()*-1.78059);
}

double NNfunction_ng_chiPlus2::synapse0x36352e0() {
   return (neuron0x3608cf0()*-0.111812);
}

double NNfunction_ng_chiPlus2::synapse0x3635320() {
   return (neuron0x36097d0()*-0.164639);
}

double NNfunction_ng_chiPlus2::synapse0x3635360() {
   return (neuron0x33cdbf0()*0.0279599);
}

double NNfunction_ng_chiPlus2::synapse0x36353a0() {
   return (neuron0x360a5b0()*-1.80517);
}

double NNfunction_ng_chiPlus2::synapse0x36353e0() {
   return (neuron0x360c080()*0.122204);
}

double NNfunction_ng_chiPlus2::synapse0x3635420() {
   return (neuron0x360ce50()*0.0194442);
}

double NNfunction_ng_chiPlus2::synapse0x3635460() {
   return (neuron0x360d820()*0.247711);
}

double NNfunction_ng_chiPlus2::synapse0x36354a0() {
   return (neuron0x360e1f0()*-0.22254);
}

double NNfunction_ng_chiPlus2::synapse0x36354e0() {
   return (neuron0x360ecd0()*-0.0179256);
}

double NNfunction_ng_chiPlus2::synapse0x3635520() {
   return (neuron0x360f6a0()*0.0172382);
}

double NNfunction_ng_chiPlus2::synapse0x3635560() {
   return (neuron0x360c780()*0.0321464);
}

double NNfunction_ng_chiPlus2::synapse0x36355a0() {
   return (neuron0x3611250()*0.0496334);
}

double NNfunction_ng_chiPlus2::synapse0x36355e0() {
   return (neuron0x3611c20()*-0.0398632);
}

double NNfunction_ng_chiPlus2::synapse0x3635620() {
   return (neuron0x36125f0()*-0.141118);
}

double NNfunction_ng_chiPlus2::synapse0x3635660() {
   return (neuron0x3612fc0()*0.236765);
}

double NNfunction_ng_chiPlus2::synapse0x36350f0() {
   return (neuron0x3614dd0()*-0.657705);
}

double NNfunction_ng_chiPlus2::synapse0x3635130() {
   return (neuron0x36150b0()*0.796695);
}

double NNfunction_ng_chiPlus2::synapse0x36357b0() {
   return (neuron0x3615a80()*-0.82177);
}

double NNfunction_ng_chiPlus2::synapse0x36357f0() {
   return (neuron0x3616450()*-0.200053);
}

double NNfunction_ng_chiPlus2::synapse0x3635830() {
   return (neuron0x3616e20()*-0.508619);
}

double NNfunction_ng_chiPlus2::synapse0x3635870() {
   return (neuron0x36177f0()*-1.00564);
}

double NNfunction_ng_chiPlus2::synapse0x36358b0() {
   return (neuron0x3610340()*-0.195972);
}

double NNfunction_ng_chiPlus2::synapse0x36358f0() {
   return (neuron0x3610d10()*-0.469408);
}

double NNfunction_ng_chiPlus2::synapse0x3635930() {
   return (neuron0x361a580()*0.2794);
}

double NNfunction_ng_chiPlus2::synapse0x3635970() {
   return (neuron0x361af50()*-0.0698003);
}

double NNfunction_ng_chiPlus2::synapse0x36359b0() {
   return (neuron0x361b920()*0.613598);
}

double NNfunction_ng_chiPlus2::synapse0x36359f0() {
   return (neuron0x361c2f0()*-0.016728);
}

double NNfunction_ng_chiPlus2::synapse0x3635a30() {
   return (neuron0x361ccc0()*-1.20844);
}

double NNfunction_ng_chiPlus2::synapse0x3635a70() {
   return (neuron0x361d690()*-0.0331826);
}

double NNfunction_ng_chiPlus2::synapse0x3635ab0() {
   return (neuron0x361e060()*0.0701194);
}

double NNfunction_ng_chiPlus2::synapse0x3635af0() {
   return (neuron0x361ea30()*-0.0172223);
}

double NNfunction_ng_chiPlus2::synapse0x36356a0() {
   return (neuron0x3614ac0()*2.30185);
}

double NNfunction_ng_chiPlus2::synapse0x36356e0() {
   return (neuron0x3621610()*0.0344603);
}

double NNfunction_ng_chiPlus2::synapse0x3635720() {
   return (neuron0x3621fe0()*0.153254);
}

double NNfunction_ng_chiPlus2::synapse0x3635760() {
   return (neuron0x36229b0()*0.997053);
}

double NNfunction_ng_chiPlus2::synapse0x3635d40() {
   return (neuron0x3623380()*0.0417528);
}

double NNfunction_ng_chiPlus2::synapse0x3635d80() {
   return (neuron0x3623d50()*0.0158757);
}

double NNfunction_ng_chiPlus2::synapse0x3635dc0() {
   return (neuron0x3624720()*-0.04107);
}

double NNfunction_ng_chiPlus2::synapse0x3635e00() {
   return (neuron0x36250f0()*0.196734);
}

double NNfunction_ng_chiPlus2::synapse0x3635e40() {
   return (neuron0x3625ac0()*-0.168538);
}

double NNfunction_ng_chiPlus2::synapse0x3635e80() {
   return (neuron0x36266a0()*-0.113622);
}

double NNfunction_ng_chiPlus2::synapse0x3635ec0() {
   return (neuron0x3627070()*-0.0985817);
}

double NNfunction_ng_chiPlus2::synapse0x3635f00() {
   return (neuron0x3617ef0()*-0.0309467);
}

double NNfunction_ng_chiPlus2::synapse0x3635f40() {
   return (neuron0x36188c0()*1.18537);
}

double NNfunction_ng_chiPlus2::synapse0x3635f80() {
   return (neuron0x3619290()*1.30692);
}

double NNfunction_ng_chiPlus2::synapse0x3635fc0() {
   return (neuron0x362b8d0()*-0.30804);
}

double NNfunction_ng_chiPlus2::synapse0x3636000() {
   return (neuron0x362c180()*0.13068);
}

double NNfunction_ng_chiPlus2::synapse0x3636040() {
   return (neuron0x362cb50()*-0.598029);
}

double NNfunction_ng_chiPlus2::synapse0x3636080() {
   return (neuron0x362d520()*-0.0026071);
}

double NNfunction_ng_chiPlus2::synapse0x3636400() {
   return (neuron0x36084b0()*1.71208);
}

double NNfunction_ng_chiPlus2::synapse0x3636440() {
   return (neuron0x3608cf0()*-0.118457);
}

double NNfunction_ng_chiPlus2::synapse0x3636480() {
   return (neuron0x36097d0()*-0.0994508);
}

double NNfunction_ng_chiPlus2::synapse0x36364c0() {
   return (neuron0x33cdbf0()*0.0228683);
}

double NNfunction_ng_chiPlus2::synapse0x3636500() {
   return (neuron0x360a5b0()*1.71637);
}

double NNfunction_ng_chiPlus2::synapse0x3636540() {
   return (neuron0x360c080()*-0.299441);
}

double NNfunction_ng_chiPlus2::synapse0x3636580() {
   return (neuron0x360ce50()*0.037467);
}

double NNfunction_ng_chiPlus2::synapse0x36365c0() {
   return (neuron0x360d820()*0.396125);
}

double NNfunction_ng_chiPlus2::synapse0x3636600() {
   return (neuron0x360e1f0()*-0.171496);
}

double NNfunction_ng_chiPlus2::synapse0x3636640() {
   return (neuron0x360ecd0()*-0.0642441);
}

double NNfunction_ng_chiPlus2::synapse0x3636680() {
   return (neuron0x360f6a0()*0.035981);
}

double NNfunction_ng_chiPlus2::synapse0x36366c0() {
   return (neuron0x360c780()*0.0402027);
}

double NNfunction_ng_chiPlus2::synapse0x3636700() {
   return (neuron0x3611250()*0.0391003);
}

double NNfunction_ng_chiPlus2::synapse0x3636740() {
   return (neuron0x3611c20()*0.557572);
}

double NNfunction_ng_chiPlus2::synapse0x3636780() {
   return (neuron0x36125f0()*-0.177638);
}

double NNfunction_ng_chiPlus2::synapse0x36367c0() {
   return (neuron0x3612fc0()*0.520724);
}

double NNfunction_ng_chiPlus2::synapse0x3636250() {
   return (neuron0x3614dd0()*0.169092);
}

double NNfunction_ng_chiPlus2::synapse0x3636290() {
   return (neuron0x36150b0()*-0.544141);
}

double NNfunction_ng_chiPlus2::synapse0x3636910() {
   return (neuron0x3615a80()*-1.42608);
}

double NNfunction_ng_chiPlus2::synapse0x3636950() {
   return (neuron0x3616450()*-0.132448);
}

double NNfunction_ng_chiPlus2::synapse0x3636990() {
   return (neuron0x3616e20()*-0.992125);
}

double NNfunction_ng_chiPlus2::synapse0x36369d0() {
   return (neuron0x36177f0()*1.58525);
}

double NNfunction_ng_chiPlus2::synapse0x3636a10() {
   return (neuron0x3610340()*-0.312611);
}

double NNfunction_ng_chiPlus2::synapse0x3636a50() {
   return (neuron0x3610d10()*0.126887);
}

double NNfunction_ng_chiPlus2::synapse0x3636a90() {
   return (neuron0x361a580()*0.093768);
}

double NNfunction_ng_chiPlus2::synapse0x3636ad0() {
   return (neuron0x361af50()*0.302747);
}

double NNfunction_ng_chiPlus2::synapse0x3636b10() {
   return (neuron0x361b920()*-0.748633);
}

double NNfunction_ng_chiPlus2::synapse0x3636b50() {
   return (neuron0x361c2f0()*-0.028195);
}

double NNfunction_ng_chiPlus2::synapse0x3636b90() {
   return (neuron0x361ccc0()*1.38878);
}

double NNfunction_ng_chiPlus2::synapse0x3636bd0() {
   return (neuron0x361d690()*-0.0321562);
}

double NNfunction_ng_chiPlus2::synapse0x3636c10() {
   return (neuron0x361e060()*0.0717317);
}

double NNfunction_ng_chiPlus2::synapse0x3636c50() {
   return (neuron0x361ea30()*-0.0327335);
}

double NNfunction_ng_chiPlus2::synapse0x3636800() {
   return (neuron0x3614ac0()*-1.01614);
}

double NNfunction_ng_chiPlus2::synapse0x3636840() {
   return (neuron0x3621610()*0.108206);
}

double NNfunction_ng_chiPlus2::synapse0x3636880() {
   return (neuron0x3621fe0()*-0.0219097);
}

double NNfunction_ng_chiPlus2::synapse0x36368c0() {
   return (neuron0x36229b0()*-0.661168);
}

double NNfunction_ng_chiPlus2::synapse0x3636ea0() {
   return (neuron0x3623380()*0.0526468);
}

double NNfunction_ng_chiPlus2::synapse0x3636ee0() {
   return (neuron0x3623d50()*-0.274305);
}

double NNfunction_ng_chiPlus2::synapse0x3636f20() {
   return (neuron0x3624720()*-0.0504495);
}

double NNfunction_ng_chiPlus2::synapse0x3636f60() {
   return (neuron0x36250f0()*1.10034);
}

double NNfunction_ng_chiPlus2::synapse0x3636fa0() {
   return (neuron0x3625ac0()*-0.224425);
}

double NNfunction_ng_chiPlus2::synapse0x3636fe0() {
   return (neuron0x36266a0()*-0.0619336);
}

double NNfunction_ng_chiPlus2::synapse0x3637020() {
   return (neuron0x3627070()*-0.0900886);
}

double NNfunction_ng_chiPlus2::synapse0x3637060() {
   return (neuron0x3617ef0()*-0.1198);
}

double NNfunction_ng_chiPlus2::synapse0x36370a0() {
   return (neuron0x36188c0()*-0.498395);
}

double NNfunction_ng_chiPlus2::synapse0x36370e0() {
   return (neuron0x3619290()*-0.888311);
}

double NNfunction_ng_chiPlus2::synapse0x3637120() {
   return (neuron0x362b8d0()*-0.273646);
}

double NNfunction_ng_chiPlus2::synapse0x3637160() {
   return (neuron0x362c180()*0.202841);
}

double NNfunction_ng_chiPlus2::synapse0x36371a0() {
   return (neuron0x362cb50()*0.785468);
}

double NNfunction_ng_chiPlus2::synapse0x36371e0() {
   return (neuron0x362d520()*-0.191561);
}

double NNfunction_ng_chiPlus2::synapse0x3637560() {
   return (neuron0x36084b0()*2.39735);
}

double NNfunction_ng_chiPlus2::synapse0x36375a0() {
   return (neuron0x3608cf0()*-0.0461585);
}

double NNfunction_ng_chiPlus2::synapse0x36375e0() {
   return (neuron0x36097d0()*-1.41355);
}

double NNfunction_ng_chiPlus2::synapse0x3637620() {
   return (neuron0x33cdbf0()*-0.00293768);
}

double NNfunction_ng_chiPlus2::synapse0x3637660() {
   return (neuron0x360a5b0()*0.959798);
}

double NNfunction_ng_chiPlus2::synapse0x36376a0() {
   return (neuron0x360c080()*-0.297752);
}

double NNfunction_ng_chiPlus2::synapse0x36376e0() {
   return (neuron0x360ce50()*-0.046253);
}

double NNfunction_ng_chiPlus2::synapse0x3637720() {
   return (neuron0x360d820()*0.0340129);
}

double NNfunction_ng_chiPlus2::synapse0x3637760() {
   return (neuron0x360e1f0()*-0.21772);
}

double NNfunction_ng_chiPlus2::synapse0x36377a0() {
   return (neuron0x360ecd0()*0.0724998);
}

double NNfunction_ng_chiPlus2::synapse0x36377e0() {
   return (neuron0x360f6a0()*0.116408);
}

double NNfunction_ng_chiPlus2::synapse0x3637820() {
   return (neuron0x360c780()*0.0322712);
}

double NNfunction_ng_chiPlus2::synapse0x3637860() {
   return (neuron0x3611250()*0.171203);
}

double NNfunction_ng_chiPlus2::synapse0x36378a0() {
   return (neuron0x3611c20()*-0.0986808);
}

double NNfunction_ng_chiPlus2::synapse0x36378e0() {
   return (neuron0x36125f0()*-0.0218523);
}

double NNfunction_ng_chiPlus2::synapse0x3637920() {
   return (neuron0x3612fc0()*0.456474);
}

double NNfunction_ng_chiPlus2::synapse0x36373b0() {
   return (neuron0x3614dd0()*0.533747);
}

double NNfunction_ng_chiPlus2::synapse0x36373f0() {
   return (neuron0x36150b0()*-1.39111);
}

double NNfunction_ng_chiPlus2::synapse0x3637a70() {
   return (neuron0x3615a80()*0.157011);
}

double NNfunction_ng_chiPlus2::synapse0x3637ab0() {
   return (neuron0x3616450()*-0.196795);
}

double NNfunction_ng_chiPlus2::synapse0x3637af0() {
   return (neuron0x3616e20()*0.18114);
}

double NNfunction_ng_chiPlus2::synapse0x3637b30() {
   return (neuron0x36177f0()*0.467075);
}

double NNfunction_ng_chiPlus2::synapse0x3637b70() {
   return (neuron0x3610340()*0.0614099);
}

double NNfunction_ng_chiPlus2::synapse0x3637bb0() {
   return (neuron0x3610d10()*-0.183161);
}

double NNfunction_ng_chiPlus2::synapse0x3637bf0() {
   return (neuron0x361a580()*-0.612096);
}

double NNfunction_ng_chiPlus2::synapse0x3637c30() {
   return (neuron0x361af50()*-0.0135957);
}

double NNfunction_ng_chiPlus2::synapse0x3637c70() {
   return (neuron0x361b920()*-1.65398);
}

double NNfunction_ng_chiPlus2::synapse0x3637cb0() {
   return (neuron0x361c2f0()*0.0139496);
}

double NNfunction_ng_chiPlus2::synapse0x3637cf0() {
   return (neuron0x361ccc0()*2.75787);
}

double NNfunction_ng_chiPlus2::synapse0x3637d30() {
   return (neuron0x361d690()*-0.0385972);
}

double NNfunction_ng_chiPlus2::synapse0x3637d70() {
   return (neuron0x361e060()*0.0840442);
}

double NNfunction_ng_chiPlus2::synapse0x3637db0() {
   return (neuron0x361ea30()*0.0392863);
}

double NNfunction_ng_chiPlus2::synapse0x3637960() {
   return (neuron0x3614ac0()*0.0157503);
}

double NNfunction_ng_chiPlus2::synapse0x36379a0() {
   return (neuron0x3621610()*1.45239);
}

double NNfunction_ng_chiPlus2::synapse0x36379e0() {
   return (neuron0x3621fe0()*-0.344088);
}

double NNfunction_ng_chiPlus2::synapse0x3637a20() {
   return (neuron0x36229b0()*-1.28567);
}

double NNfunction_ng_chiPlus2::synapse0x3638000() {
   return (neuron0x3623380()*-0.0750939);
}

double NNfunction_ng_chiPlus2::synapse0x3638040() {
   return (neuron0x3623d50()*3.0309);
}

double NNfunction_ng_chiPlus2::synapse0x3638080() {
   return (neuron0x3624720()*-0.0732275);
}

double NNfunction_ng_chiPlus2::synapse0x36380c0() {
   return (neuron0x36250f0()*0.274503);
}

double NNfunction_ng_chiPlus2::synapse0x3638100() {
   return (neuron0x3625ac0()*0.17148);
}

double NNfunction_ng_chiPlus2::synapse0x3638140() {
   return (neuron0x36266a0()*-0.467929);
}

double NNfunction_ng_chiPlus2::synapse0x3638180() {
   return (neuron0x3627070()*-0.1698);
}

double NNfunction_ng_chiPlus2::synapse0x36381c0() {
   return (neuron0x3617ef0()*-0.558507);
}

double NNfunction_ng_chiPlus2::synapse0x3638200() {
   return (neuron0x36188c0()*0.280999);
}

double NNfunction_ng_chiPlus2::synapse0x3638240() {
   return (neuron0x3619290()*-0.590121);
}

double NNfunction_ng_chiPlus2::synapse0x3638280() {
   return (neuron0x362b8d0()*0.21805);
}

double NNfunction_ng_chiPlus2::synapse0x36382c0() {
   return (neuron0x362c180()*-0.0879532);
}

double NNfunction_ng_chiPlus2::synapse0x3638300() {
   return (neuron0x362cb50()*0.676829);
}

double NNfunction_ng_chiPlus2::synapse0x3638340() {
   return (neuron0x362d520()*0.327054);
}

double NNfunction_ng_chiPlus2::synapse0x36385a0() {
   return (neuron0x3634720()*-6.18037);
}

double NNfunction_ng_chiPlus2::synapse0x36385e0() {
   return (neuron0x3634ac0()*-2.32939);
}

double NNfunction_ng_chiPlus2::synapse0x3638620() {
   return (neuron0x3634f60()*6.38268);
}

double NNfunction_ng_chiPlus2::synapse0x3638660() {
   return (neuron0x36360c0()*-5.2505);
}

double NNfunction_ng_chiPlus2::synapse0x36386a0() {
   return (neuron0x3637220()*-3.8262);
}

