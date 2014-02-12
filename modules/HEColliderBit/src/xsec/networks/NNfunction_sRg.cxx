#include "NNfunction_sRg.h"
#include <cmath>

double NNfunction_sRg::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5338)/15.3279;
   input1 = (in1 - 0.241035)/1156.52;
   input2 = (in2 - 665.048)/630.201;
   input3 = (in3 - -39.6114)/787.902;
   input4 = (in4 - 1052.34)/955.234;
   input5 = (in5 - 895.911)/948.037;
   input6 = (in6 - 905.408)/950.968;
   input7 = (in7 - 925.573)/930.674;
   input8 = (in8 - 924.457)/976.366;
   input9 = (in9 - 912.602)/962.332;
   input10 = (in10 - 983.7)/956.172;
   input11 = (in11 - 726.406)/867.409;
   input12 = (in12 - 729.825)/870.581;
   input13 = (in13 - 501.784)/513.047;
   input14 = (in14 - 724.652)/816.566;
   input15 = (in15 - 722.152)/812.862;
   input16 = (in16 - 541.849)/567.248;
   input17 = (in17 - 762.89)/902.41;
   input18 = (in18 - 441.535)/476.259;
   input19 = (in19 - 806.927)/877.705;
   input20 = (in20 - -4.61893)/490.507;
   input21 = (in21 - -1.18846)/1151.09;
   input22 = (in22 - -0.349032)/1203.46;
   input23 = (in23 - -206.345)/608.269;
   switch(index) {
     case 0:
         return neuron0x343bc20();
     default:
         return 0.;
   }
}

double NNfunction_sRg::Value(int index, double* input) {
   input0 = (input[0] - 23.5338)/15.3279;
   input1 = (input[1] - 0.241035)/1156.52;
   input2 = (input[2] - 665.048)/630.201;
   input3 = (input[3] - -39.6114)/787.902;
   input4 = (input[4] - 1052.34)/955.234;
   input5 = (input[5] - 895.911)/948.037;
   input6 = (input[6] - 905.408)/950.968;
   input7 = (input[7] - 925.573)/930.674;
   input8 = (input[8] - 924.457)/976.366;
   input9 = (input[9] - 912.602)/962.332;
   input10 = (input[10] - 983.7)/956.172;
   input11 = (input[11] - 726.406)/867.409;
   input12 = (input[12] - 729.825)/870.581;
   input13 = (input[13] - 501.784)/513.047;
   input14 = (input[14] - 724.652)/816.566;
   input15 = (input[15] - 722.152)/812.862;
   input16 = (input[16] - 541.849)/567.248;
   input17 = (input[17] - 762.89)/902.41;
   input18 = (input[18] - 441.535)/476.259;
   input19 = (input[19] - 806.927)/877.705;
   input20 = (input[20] - -4.61893)/490.507;
   input21 = (input[21] - -1.18846)/1151.09;
   input22 = (input[22] - -0.349032)/1203.46;
   input23 = (input[23] - -206.345)/608.269;
   switch(index) {
     case 0:
         return neuron0x343bc20();
     default:
         return 0.;
   }
}

double NNfunction_sRg::neuron0x3407d10() {
   return input0;
}

double NNfunction_sRg::neuron0x3408050() {
   return input1;
}

double NNfunction_sRg::neuron0x3408390() {
   return input2;
}

double NNfunction_sRg::neuron0x34086d0() {
   return input3;
}

double NNfunction_sRg::neuron0x3408a10() {
   return input4;
}

double NNfunction_sRg::neuron0x3408d50() {
   return input5;
}

double NNfunction_sRg::neuron0x3409090() {
   return input6;
}

double NNfunction_sRg::neuron0x34093d0() {
   return input7;
}

double NNfunction_sRg::neuron0x3409710() {
   return input8;
}

double NNfunction_sRg::neuron0x3409a50() {
   return input9;
}

double NNfunction_sRg::neuron0x3409d90() {
   return input10;
}

double NNfunction_sRg::neuron0x340a0d0() {
   return input11;
}

double NNfunction_sRg::neuron0x340a410() {
   return input12;
}

double NNfunction_sRg::neuron0x340a750() {
   return input13;
}

double NNfunction_sRg::neuron0x340aa90() {
   return input14;
}

double NNfunction_sRg::neuron0x340add0() {
   return input15;
}

double NNfunction_sRg::neuron0x340b110() {
   return input16;
}

double NNfunction_sRg::neuron0x340b670() {
   return input17;
}

double NNfunction_sRg::neuron0x340b890() {
   return input18;
}

double NNfunction_sRg::neuron0x340bbd0() {
   return input19;
}

double NNfunction_sRg::neuron0x340bf10() {
   return input20;
}

double NNfunction_sRg::neuron0x340c250() {
   return input21;
}

double NNfunction_sRg::neuron0x340c590() {
   return input22;
}

double NNfunction_sRg::neuron0x340c8d0() {
   return input23;
}

double NNfunction_sRg::input0x340cd40() {
   double input = 1.03952;
   input += synapse0x3407bd0();
   input += synapse0x3407c10();
   input += synapse0x340cff0();
   input += synapse0x340d030();
   input += synapse0x340d070();
   input += synapse0x340d0b0();
   input += synapse0x340d0f0();
   input += synapse0x340d130();
   input += synapse0x340d170();
   input += synapse0x340d1b0();
   input += synapse0x340d1f0();
   input += synapse0x340d230();
   input += synapse0x340d270();
   input += synapse0x340d2b0();
   input += synapse0x340d2f0();
   input += synapse0x340d330();
   input += synapse0x3407b40();
   input += synapse0x3407b80();
   input += synapse0x31b9780();
   input += synapse0x31b97c0();
   input += synapse0x340d590();
   input += synapse0x340d5d0();
   input += synapse0x340d610();
   input += synapse0x340d650();
   return input;
}

double NNfunction_sRg::neuron0x340cd40() {
   double input = input0x340cd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x340d690() {
   double input = 1.07527;
   input += synapse0x340d9d0();
   input += synapse0x340da10();
   input += synapse0x340da50();
   input += synapse0x340da90();
   input += synapse0x340dad0();
   input += synapse0x340db10();
   input += synapse0x340db50();
   input += synapse0x340db90();
   input += synapse0x340dbd0();
   input += synapse0x340d480();
   input += synapse0x340d4c0();
   input += synapse0x340d500();
   input += synapse0x340d540();
   input += synapse0x340de20();
   input += synapse0x340de60();
   input += synapse0x340dea0();
   input += synapse0x340d820();
   input += synapse0x340d860();
   input += synapse0x340dff0();
   input += synapse0x340e030();
   input += synapse0x340e070();
   input += synapse0x340e0b0();
   input += synapse0x340e0f0();
   input += synapse0x340e130();
   return input;
}

double NNfunction_sRg::neuron0x340d690() {
   double input = input0x340d690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x340e170() {
   double input = -2.4909;
   input += synapse0x340e4b0();
   input += synapse0x340e4f0();
   input += synapse0x340e530();
   input += synapse0x340e570();
   input += synapse0x340e5b0();
   input += synapse0x340e5f0();
   input += synapse0x340e630();
   input += synapse0x340e670();
   input += synapse0x340e6b0();
   input += synapse0x340e6f0();
   input += synapse0x340e730();
   input += synapse0x340e770();
   input += synapse0x340e7b0();
   input += synapse0x340e7f0();
   input += synapse0x340e830();
   input += synapse0x340e870();
   input += synapse0x340e300();
   input += synapse0x340e340();
   input += synapse0x31b9bb0();
   input += synapse0x31c7310();
   input += synapse0x31c7350();
   input += synapse0x33f6da0();
   input += synapse0x33f6de0();
   input += synapse0x33f6e20();
   return input;
}

double NNfunction_sRg::neuron0x340e170() {
   double input = input0x340e170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x340dc10() {
   double input = -0.022868;
   input += synapse0x31c7bb0();
   input += synapse0x340dda0();
   input += synapse0x340dde0();
   input += synapse0x340e9c0();
   input += synapse0x340ea00();
   input += synapse0x340ea40();
   input += synapse0x340ea80();
   input += synapse0x340eac0();
   input += synapse0x340eb00();
   input += synapse0x340eb40();
   input += synapse0x340eb80();
   input += synapse0x340ebc0();
   input += synapse0x340ec00();
   input += synapse0x340ec40();
   input += synapse0x340ec80();
   input += synapse0x340ecc0();
   input += synapse0x3407c50();
   input += synapse0x3407c90();
   input += synapse0x3407cd0();
   input += synapse0x340ee10();
   input += synapse0x340ee50();
   input += synapse0x340ee90();
   input += synapse0x340eed0();
   input += synapse0x340ef10();
   return input;
}

double NNfunction_sRg::neuron0x340dc10() {
   double input = input0x340dc10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x340ef50() {
   double input = 0.0433543;
   input += synapse0x340f290();
   input += synapse0x340f2d0();
   input += synapse0x340f310();
   input += synapse0x340f350();
   input += synapse0x340f390();
   input += synapse0x340f3d0();
   input += synapse0x340f410();
   input += synapse0x340f450();
   input += synapse0x340f490();
   input += synapse0x340f4d0();
   input += synapse0x340f510();
   input += synapse0x340f550();
   input += synapse0x340f590();
   input += synapse0x340f5d0();
   input += synapse0x340f610();
   input += synapse0x340f650();
   input += synapse0x340f0e0();
   input += synapse0x340f120();
   input += synapse0x340f7a0();
   input += synapse0x340f7e0();
   input += synapse0x340f820();
   input += synapse0x340f860();
   input += synapse0x340f8a0();
   input += synapse0x340f8e0();
   return input;
}

double NNfunction_sRg::neuron0x340ef50() {
   double input = input0x340ef50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x340f920() {
   double input = 0.75333;
   input += synapse0x340fc60();
   input += synapse0x340fca0();
   input += synapse0x340fce0();
   input += synapse0x340fd20();
   input += synapse0x340fd60();
   input += synapse0x340fda0();
   input += synapse0x340fde0();
   input += synapse0x340fe20();
   input += synapse0x340fe60();
   input += synapse0x31c7680();
   input += synapse0x31c76c0();
   input += synapse0x31c7700();
   input += synapse0x31c7740();
   input += synapse0x31c7780();
   input += synapse0x31c77c0();
   input += synapse0x31c7800();
   input += synapse0x340fab0();
   input += synapse0x340faf0();
   input += synapse0x31c7950();
   input += synapse0x31c7990();
   input += synapse0x31c79d0();
   input += synapse0x31c7a10();
   input += synapse0x31c7a50();
   input += synapse0x34106b0();
   return input;
}

double NNfunction_sRg::neuron0x340f920() {
   double input = input0x340f920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x34106f0() {
   double input = 0.849837;
   input += synapse0x3410a30();
   input += synapse0x3410a70();
   input += synapse0x3410ab0();
   input += synapse0x3410af0();
   input += synapse0x3410b30();
   input += synapse0x3410b70();
   input += synapse0x3410bb0();
   input += synapse0x3410bf0();
   input += synapse0x3410c30();
   input += synapse0x3410c70();
   input += synapse0x3410cb0();
   input += synapse0x3410cf0();
   input += synapse0x3410d30();
   input += synapse0x3410d70();
   input += synapse0x3410db0();
   input += synapse0x3410df0();
   input += synapse0x3410880();
   input += synapse0x34108c0();
   input += synapse0x3410f40();
   input += synapse0x3410f80();
   input += synapse0x3410fc0();
   input += synapse0x3411000();
   input += synapse0x3411040();
   input += synapse0x3411080();
   return input;
}

double NNfunction_sRg::neuron0x34106f0() {
   double input = input0x34106f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x34110c0() {
   double input = 1.96895;
   input += synapse0x3411400();
   input += synapse0x3411440();
   input += synapse0x3411480();
   input += synapse0x34114c0();
   input += synapse0x3411500();
   input += synapse0x3411540();
   input += synapse0x3411580();
   input += synapse0x34115c0();
   input += synapse0x3411600();
   input += synapse0x3411640();
   input += synapse0x3411680();
   input += synapse0x34116c0();
   input += synapse0x3411700();
   input += synapse0x3411740();
   input += synapse0x3411780();
   input += synapse0x34117c0();
   input += synapse0x3411250();
   input += synapse0x3411290();
   input += synapse0x3411910();
   input += synapse0x3411950();
   input += synapse0x3411990();
   input += synapse0x34119d0();
   input += synapse0x3411a10();
   input += synapse0x3411a50();
   return input;
}

double NNfunction_sRg::neuron0x34110c0() {
   double input = input0x34110c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3411a90() {
   double input = -0.699678;
   input += synapse0x340b560();
   input += synapse0x340b5a0();
   input += synapse0x340b5e0();
   input += synapse0x340b620();
   input += synapse0x3411fe0();
   input += synapse0x3412020();
   input += synapse0x3412060();
   input += synapse0x34120a0();
   input += synapse0x34120e0();
   input += synapse0x3412120();
   input += synapse0x3412160();
   input += synapse0x34121a0();
   input += synapse0x34121e0();
   input += synapse0x3412220();
   input += synapse0x3412260();
   input += synapse0x34122a0();
   input += synapse0x3411c20();
   input += synapse0x3411c60();
   input += synapse0x34123f0();
   input += synapse0x3412430();
   input += synapse0x3412470();
   input += synapse0x34124b0();
   input += synapse0x34124f0();
   input += synapse0x3412530();
   return input;
}

double NNfunction_sRg::neuron0x3411a90() {
   double input = input0x3411a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3412570() {
   double input = -3.56979;
   input += synapse0x34128b0();
   input += synapse0x34128f0();
   input += synapse0x3412930();
   input += synapse0x3412970();
   input += synapse0x34129b0();
   input += synapse0x34129f0();
   input += synapse0x3412a30();
   input += synapse0x3412a70();
   input += synapse0x3412ab0();
   input += synapse0x3412af0();
   input += synapse0x3412b30();
   input += synapse0x3412b70();
   input += synapse0x3412bb0();
   input += synapse0x3412bf0();
   input += synapse0x3412c30();
   input += synapse0x3412c70();
   input += synapse0x3412700();
   input += synapse0x3412740();
   input += synapse0x3412dc0();
   input += synapse0x3412e00();
   input += synapse0x3412e40();
   input += synapse0x3412e80();
   input += synapse0x3412ec0();
   input += synapse0x3412f00();
   return input;
}

double NNfunction_sRg::neuron0x3412570() {
   double input = input0x3412570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3412f40() {
   double input = 0.591837;
   input += synapse0x3413280();
   input += synapse0x34132c0();
   input += synapse0x3413300();
   input += synapse0x3413340();
   input += synapse0x3413380();
   input += synapse0x34133c0();
   input += synapse0x3413400();
   input += synapse0x3413440();
   input += synapse0x3413480();
   input += synapse0x34134c0();
   input += synapse0x3413500();
   input += synapse0x3413540();
   input += synapse0x3413580();
   input += synapse0x34135c0();
   input += synapse0x3413600();
   input += synapse0x3413640();
   input += synapse0x34130d0();
   input += synapse0x3413110();
   input += synapse0x340fea0();
   input += synapse0x340fee0();
   input += synapse0x340ff20();
   input += synapse0x340ff60();
   input += synapse0x340ffa0();
   input += synapse0x340ffe0();
   return input;
}

double NNfunction_sRg::neuron0x3412f40() {
   double input = input0x3412f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3410020() {
   double input = -0.215538;
   input += synapse0x3410360();
   input += synapse0x34103a0();
   input += synapse0x34103e0();
   input += synapse0x3410420();
   input += synapse0x3410460();
   input += synapse0x34104a0();
   input += synapse0x34104e0();
   input += synapse0x3410520();
   input += synapse0x3410560();
   input += synapse0x34105a0();
   input += synapse0x34105e0();
   input += synapse0x3410620();
   input += synapse0x3410660();
   input += synapse0x34147a0();
   input += synapse0x34147e0();
   input += synapse0x3414820();
   input += synapse0x34101b0();
   input += synapse0x34101f0();
   input += synapse0x3414970();
   input += synapse0x34149b0();
   input += synapse0x34149f0();
   input += synapse0x3414a30();
   input += synapse0x3414a70();
   input += synapse0x3414ab0();
   return input;
}

double NNfunction_sRg::neuron0x3410020() {
   double input = input0x3410020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3414af0() {
   double input = -3.4942;
   input += synapse0x3414e30();
   input += synapse0x3414e70();
   input += synapse0x3414eb0();
   input += synapse0x3414ef0();
   input += synapse0x3414f30();
   input += synapse0x3414f70();
   input += synapse0x3414fb0();
   input += synapse0x3414ff0();
   input += synapse0x3415030();
   input += synapse0x3415070();
   input += synapse0x34150b0();
   input += synapse0x34150f0();
   input += synapse0x3415130();
   input += synapse0x3415170();
   input += synapse0x34151b0();
   input += synapse0x34151f0();
   input += synapse0x3414c80();
   input += synapse0x3414cc0();
   input += synapse0x3415340();
   input += synapse0x3415380();
   input += synapse0x34153c0();
   input += synapse0x3415400();
   input += synapse0x3415440();
   input += synapse0x3415480();
   return input;
}

double NNfunction_sRg::neuron0x3414af0() {
   double input = input0x3414af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x34154c0() {
   double input = -0.0307979;
   input += synapse0x3415800();
   input += synapse0x3415840();
   input += synapse0x3415880();
   input += synapse0x34158c0();
   input += synapse0x3415900();
   input += synapse0x3415940();
   input += synapse0x3415980();
   input += synapse0x34159c0();
   input += synapse0x3415a00();
   input += synapse0x3415a40();
   input += synapse0x3415a80();
   input += synapse0x3415ac0();
   input += synapse0x3415b00();
   input += synapse0x3415b40();
   input += synapse0x3415b80();
   input += synapse0x3415bc0();
   input += synapse0x3415650();
   input += synapse0x3415690();
   input += synapse0x3415d10();
   input += synapse0x3415d50();
   input += synapse0x3415d90();
   input += synapse0x3415dd0();
   input += synapse0x3415e10();
   input += synapse0x3415e50();
   return input;
}

double NNfunction_sRg::neuron0x34154c0() {
   double input = input0x34154c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3415e90() {
   double input = -0.392459;
   input += synapse0x34161d0();
   input += synapse0x3416210();
   input += synapse0x3416250();
   input += synapse0x3416290();
   input += synapse0x34162d0();
   input += synapse0x3416310();
   input += synapse0x3416350();
   input += synapse0x3416390();
   input += synapse0x34163d0();
   input += synapse0x3416410();
   input += synapse0x3416450();
   input += synapse0x3416490();
   input += synapse0x34164d0();
   input += synapse0x3416510();
   input += synapse0x3416550();
   input += synapse0x3416590();
   input += synapse0x3416020();
   input += synapse0x3416060();
   input += synapse0x34166e0();
   input += synapse0x3416720();
   input += synapse0x3416760();
   input += synapse0x34167a0();
   input += synapse0x34167e0();
   input += synapse0x3416820();
   return input;
}

double NNfunction_sRg::neuron0x3415e90() {
   double input = input0x3415e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3416860() {
   double input = -0.53178;
   input += synapse0x3416ba0();
   input += synapse0x3407f30();
   input += synapse0x3407f70();
   input += synapse0x3408270();
   input += synapse0x34082b0();
   input += synapse0x34085b0();
   input += synapse0x34085f0();
   input += synapse0x34088f0();
   input += synapse0x3408930();
   input += synapse0x3408c30();
   input += synapse0x3408c70();
   input += synapse0x3408f70();
   input += synapse0x3408fb0();
   input += synapse0x34092b0();
   input += synapse0x34092f0();
   input += synapse0x34095f0();
   input += synapse0x3409630();
   input += synapse0x3409930();
   input += synapse0x3409970();
   input += synapse0x3409c70();
   input += synapse0x3409cb0();
   input += synapse0x3409fb0();
   input += synapse0x3409ff0();
   input += synapse0x340a2f0();
   return input;
}

double NNfunction_sRg::neuron0x3416860() {
   double input = input0x3416860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3418670() {
   double input = 0.339276;
   input += synapse0x340a330();
   input += synapse0x340aff0();
   input += synapse0x340b030();
   input += synapse0x34169f0();
   input += synapse0x3416a30();
   input += synapse0x340b330();
   input += synapse0x340b370();
   input += synapse0x31b9660();
   input += synapse0x31b96a0();
   input += synapse0x340bab0();
   input += synapse0x340baf0();
   input += synapse0x340bdf0();
   input += synapse0x340be30();
   input += synapse0x340c130();
   input += synapse0x340c170();
   input += synapse0x340c470();
   input += synapse0x340c4b0();
   input += synapse0x340c7b0();
   input += synapse0x340c7f0();
   input += synapse0x340caf0();
   input += synapse0x340cb30();
   input += synapse0x340a630();
   input += synapse0x340a670();
   input += synapse0x3418910();
   return input;
}

double NNfunction_sRg::neuron0x3418670() {
   double input = input0x3418670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3418950() {
   double input = 0.299359;
   input += synapse0x3418c90();
   input += synapse0x3418cd0();
   input += synapse0x3418d10();
   input += synapse0x3418d50();
   input += synapse0x3418d90();
   input += synapse0x3418dd0();
   input += synapse0x3418e10();
   input += synapse0x3418e50();
   input += synapse0x3418e90();
   input += synapse0x3418ed0();
   input += synapse0x3418f10();
   input += synapse0x3418f50();
   input += synapse0x3418f90();
   input += synapse0x3418fd0();
   input += synapse0x3419010();
   input += synapse0x3419050();
   input += synapse0x3418ae0();
   input += synapse0x3418b20();
   input += synapse0x34191a0();
   input += synapse0x34191e0();
   input += synapse0x3419220();
   input += synapse0x3419260();
   input += synapse0x34192a0();
   input += synapse0x34192e0();
   return input;
}

double NNfunction_sRg::neuron0x3418950() {
   double input = input0x3418950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3419320() {
   double input = -0.900664;
   input += synapse0x3419660();
   input += synapse0x34196a0();
   input += synapse0x34196e0();
   input += synapse0x3419720();
   input += synapse0x3419760();
   input += synapse0x34197a0();
   input += synapse0x34197e0();
   input += synapse0x3419820();
   input += synapse0x3419860();
   input += synapse0x34198a0();
   input += synapse0x34198e0();
   input += synapse0x3419920();
   input += synapse0x3419960();
   input += synapse0x34199a0();
   input += synapse0x34199e0();
   input += synapse0x3419a20();
   input += synapse0x34194b0();
   input += synapse0x34194f0();
   input += synapse0x3419b70();
   input += synapse0x3419bb0();
   input += synapse0x3419bf0();
   input += synapse0x3419c30();
   input += synapse0x3419c70();
   input += synapse0x3419cb0();
   return input;
}

double NNfunction_sRg::neuron0x3419320() {
   double input = input0x3419320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3419cf0() {
   double input = 0.949123;
   input += synapse0x341a030();
   input += synapse0x341a070();
   input += synapse0x341a0b0();
   input += synapse0x341a0f0();
   input += synapse0x341a130();
   input += synapse0x341a170();
   input += synapse0x341a1b0();
   input += synapse0x341a1f0();
   input += synapse0x341a230();
   input += synapse0x341a270();
   input += synapse0x341a2b0();
   input += synapse0x341a2f0();
   input += synapse0x341a330();
   input += synapse0x341a370();
   input += synapse0x341a3b0();
   input += synapse0x341a3f0();
   input += synapse0x3419e80();
   input += synapse0x3419ec0();
   input += synapse0x341a540();
   input += synapse0x341a580();
   input += synapse0x341a5c0();
   input += synapse0x341a600();
   input += synapse0x341a640();
   input += synapse0x341a680();
   return input;
}

double NNfunction_sRg::neuron0x3419cf0() {
   double input = input0x3419cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x341a6c0() {
   double input = 1.37155;
   input += synapse0x341aa00();
   input += synapse0x341aa40();
   input += synapse0x341aa80();
   input += synapse0x341aac0();
   input += synapse0x341ab00();
   input += synapse0x341ab40();
   input += synapse0x341ab80();
   input += synapse0x341abc0();
   input += synapse0x341ac00();
   input += synapse0x341ac40();
   input += synapse0x341ac80();
   input += synapse0x341acc0();
   input += synapse0x341ad00();
   input += synapse0x341ad40();
   input += synapse0x341ad80();
   input += synapse0x341adc0();
   input += synapse0x341a850();
   input += synapse0x341a890();
   input += synapse0x341af10();
   input += synapse0x341af50();
   input += synapse0x341af90();
   input += synapse0x341afd0();
   input += synapse0x341b010();
   input += synapse0x341b050();
   return input;
}

double NNfunction_sRg::neuron0x341a6c0() {
   double input = input0x341a6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x341b090() {
   double input = -0.182703;
   input += synapse0x341b3d0();
   input += synapse0x341b410();
   input += synapse0x341b450();
   input += synapse0x341b490();
   input += synapse0x341b4d0();
   input += synapse0x341b510();
   input += synapse0x341b550();
   input += synapse0x341b590();
   input += synapse0x341b5d0();
   input += synapse0x3413790();
   input += synapse0x34137d0();
   input += synapse0x3413810();
   input += synapse0x3413850();
   input += synapse0x3413890();
   input += synapse0x34138d0();
   input += synapse0x3413910();
   input += synapse0x341b220();
   input += synapse0x341b260();
   input += synapse0x3413a60();
   input += synapse0x3413aa0();
   input += synapse0x3413ae0();
   input += synapse0x3413b20();
   input += synapse0x3413b60();
   input += synapse0x3413ba0();
   return input;
}

double NNfunction_sRg::neuron0x341b090() {
   double input = input0x341b090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3413be0() {
   double input = 0.158055;
   input += synapse0x3413f20();
   input += synapse0x3413f60();
   input += synapse0x3413fa0();
   input += synapse0x3413fe0();
   input += synapse0x3414020();
   input += synapse0x3414060();
   input += synapse0x34140a0();
   input += synapse0x34140e0();
   input += synapse0x3414120();
   input += synapse0x3414160();
   input += synapse0x34141a0();
   input += synapse0x34141e0();
   input += synapse0x3414220();
   input += synapse0x3414260();
   input += synapse0x34142a0();
   input += synapse0x34142e0();
   input += synapse0x3413d70();
   input += synapse0x3413db0();
   input += synapse0x3414430();
   input += synapse0x3414470();
   input += synapse0x34144b0();
   input += synapse0x34144f0();
   input += synapse0x3414530();
   input += synapse0x3414570();
   return input;
}

double NNfunction_sRg::neuron0x3413be0() {
   double input = input0x3413be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x34145b0() {
   double input = 0.343327;
   input += synapse0x3414740();
   input += synapse0x341d7d0();
   input += synapse0x341d810();
   input += synapse0x341d850();
   input += synapse0x341d890();
   input += synapse0x341d8d0();
   input += synapse0x341d910();
   input += synapse0x341d950();
   input += synapse0x341d990();
   input += synapse0x341d9d0();
   input += synapse0x341da10();
   input += synapse0x341da50();
   input += synapse0x341da90();
   input += synapse0x341dad0();
   input += synapse0x341db10();
   input += synapse0x341db50();
   input += synapse0x341d620();
   input += synapse0x341d660();
   input += synapse0x341dca0();
   input += synapse0x341dce0();
   input += synapse0x341dd20();
   input += synapse0x341dd60();
   input += synapse0x341dda0();
   input += synapse0x341dde0();
   return input;
}

double NNfunction_sRg::neuron0x34145b0() {
   double input = input0x34145b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x341de20() {
   double input = 1.2631;
   input += synapse0x341e160();
   input += synapse0x341e1a0();
   input += synapse0x341e1e0();
   input += synapse0x341e220();
   input += synapse0x341e260();
   input += synapse0x341e2a0();
   input += synapse0x341e2e0();
   input += synapse0x341e320();
   input += synapse0x341e360();
   input += synapse0x341e3a0();
   input += synapse0x341e3e0();
   input += synapse0x341e420();
   input += synapse0x341e460();
   input += synapse0x341e4a0();
   input += synapse0x341e4e0();
   input += synapse0x341e520();
   input += synapse0x341dfb0();
   input += synapse0x341dff0();
   input += synapse0x341e670();
   input += synapse0x341e6b0();
   input += synapse0x341e6f0();
   input += synapse0x341e730();
   input += synapse0x341e770();
   input += synapse0x341e7b0();
   return input;
}

double NNfunction_sRg::neuron0x341de20() {
   double input = input0x341de20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x341e7f0() {
   double input = -0.471138;
   input += synapse0x341eb30();
   input += synapse0x341eb70();
   input += synapse0x341ebb0();
   input += synapse0x341ebf0();
   input += synapse0x341ec30();
   input += synapse0x341ec70();
   input += synapse0x341ecb0();
   input += synapse0x341ecf0();
   input += synapse0x341ed30();
   input += synapse0x341ed70();
   input += synapse0x341edb0();
   input += synapse0x341edf0();
   input += synapse0x341ee30();
   input += synapse0x341ee70();
   input += synapse0x341eeb0();
   input += synapse0x341eef0();
   input += synapse0x341e980();
   input += synapse0x341e9c0();
   input += synapse0x341f040();
   input += synapse0x341f080();
   input += synapse0x341f0c0();
   input += synapse0x341f100();
   input += synapse0x341f140();
   input += synapse0x341f180();
   return input;
}

double NNfunction_sRg::neuron0x341e7f0() {
   double input = input0x341e7f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x341f1c0() {
   double input = -2.73311;
   input += synapse0x341f500();
   input += synapse0x341f540();
   input += synapse0x341f580();
   input += synapse0x341f5c0();
   input += synapse0x341f600();
   input += synapse0x341f640();
   input += synapse0x341f680();
   input += synapse0x341f6c0();
   input += synapse0x341f700();
   input += synapse0x341f740();
   input += synapse0x341f780();
   input += synapse0x341f7c0();
   input += synapse0x341f800();
   input += synapse0x341f840();
   input += synapse0x341f880();
   input += synapse0x341f8c0();
   input += synapse0x341f350();
   input += synapse0x341f390();
   input += synapse0x341fa10();
   input += synapse0x341fa50();
   input += synapse0x341fa90();
   input += synapse0x341fad0();
   input += synapse0x341fb10();
   input += synapse0x341fb50();
   return input;
}

double NNfunction_sRg::neuron0x341f1c0() {
   double input = input0x341f1c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x341fb90() {
   double input = -2.13092;
   input += synapse0x341fed0();
   input += synapse0x341ff10();
   input += synapse0x341ff50();
   input += synapse0x341ff90();
   input += synapse0x341ffd0();
   input += synapse0x3420010();
   input += synapse0x3420050();
   input += synapse0x3420090();
   input += synapse0x34200d0();
   input += synapse0x3420110();
   input += synapse0x3420150();
   input += synapse0x3420190();
   input += synapse0x34201d0();
   input += synapse0x3420210();
   input += synapse0x3420250();
   input += synapse0x3420290();
   input += synapse0x341fd20();
   input += synapse0x341fd60();
   input += synapse0x34203e0();
   input += synapse0x3420420();
   input += synapse0x3420460();
   input += synapse0x34204a0();
   input += synapse0x34204e0();
   input += synapse0x3420520();
   return input;
}

double NNfunction_sRg::neuron0x341fb90() {
   double input = input0x341fb90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3420560() {
   double input = -0.405881;
   input += synapse0x34208a0();
   input += synapse0x34208e0();
   input += synapse0x3420920();
   input += synapse0x3420960();
   input += synapse0x34209a0();
   input += synapse0x34209e0();
   input += synapse0x3420a20();
   input += synapse0x3420a60();
   input += synapse0x3420aa0();
   input += synapse0x3420ae0();
   input += synapse0x3420b20();
   input += synapse0x3420b60();
   input += synapse0x3420ba0();
   input += synapse0x3420be0();
   input += synapse0x3420c20();
   input += synapse0x3420c60();
   input += synapse0x34206f0();
   input += synapse0x3420730();
   input += synapse0x3420db0();
   input += synapse0x3420df0();
   input += synapse0x3420e30();
   input += synapse0x3420e70();
   input += synapse0x3420eb0();
   input += synapse0x3420ef0();
   return input;
}

double NNfunction_sRg::neuron0x3420560() {
   double input = input0x3420560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3420f30() {
   double input = -0.458389;
   input += synapse0x3421270();
   input += synapse0x34212b0();
   input += synapse0x34212f0();
   input += synapse0x3421330();
   input += synapse0x3421370();
   input += synapse0x34213b0();
   input += synapse0x34213f0();
   input += synapse0x3421430();
   input += synapse0x3421470();
   input += synapse0x34214b0();
   input += synapse0x34214f0();
   input += synapse0x3421530();
   input += synapse0x3421570();
   input += synapse0x34215b0();
   input += synapse0x34215f0();
   input += synapse0x3421630();
   input += synapse0x34210c0();
   input += synapse0x3421100();
   input += synapse0x3421780();
   input += synapse0x34217c0();
   input += synapse0x3421800();
   input += synapse0x3421840();
   input += synapse0x3421880();
   input += synapse0x34218c0();
   return input;
}

double NNfunction_sRg::neuron0x3420f30() {
   double input = input0x3420f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3421900() {
   double input = 0.704475;
   input += synapse0x3421c40();
   input += synapse0x3421c80();
   input += synapse0x3421cc0();
   input += synapse0x3421d00();
   input += synapse0x3421d40();
   input += synapse0x3421d80();
   input += synapse0x3421dc0();
   input += synapse0x3421e00();
   input += synapse0x3421e40();
   input += synapse0x3421e80();
   input += synapse0x3421ec0();
   input += synapse0x3421f00();
   input += synapse0x3421f40();
   input += synapse0x3421f80();
   input += synapse0x3421fc0();
   input += synapse0x3422000();
   input += synapse0x3421a90();
   input += synapse0x3421ad0();
   input += synapse0x3422150();
   input += synapse0x3422190();
   input += synapse0x34221d0();
   input += synapse0x3422210();
   input += synapse0x3422250();
   input += synapse0x3422290();
   return input;
}

double NNfunction_sRg::neuron0x3421900() {
   double input = input0x3421900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x34222d0() {
   double input = 0.613583;
   input += synapse0x3422610();
   input += synapse0x3416be0();
   input += synapse0x3416c20();
   input += synapse0x3416c60();
   input += synapse0x3416eb0();
   input += synapse0x3416ef0();
   input += synapse0x3416f30();
   input += synapse0x3417180();
   input += synapse0x34171c0();
   input += synapse0x3417410();
   input += synapse0x3417450();
   input += synapse0x3417490();
   input += synapse0x34176e0();
   input += synapse0x3417720();
   input += synapse0x3417970();
   input += synapse0x34179b0();
   input += synapse0x3422460();
   input += synapse0x34224a0();
   input += synapse0x3417b00();
   input += synapse0x3418010();
   input += synapse0x3418050();
   input += synapse0x3418090();
   input += synapse0x34182e0();
   input += synapse0x3418320();
   return input;
}

double NNfunction_sRg::neuron0x34222d0() {
   double input = input0x34222d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3418360() {
   double input = 0.290125;
   input += synapse0x3417bd0();
   input += synapse0x3417c10();
   input += synapse0x3417c50();
   input += synapse0x3417c90();
   input += synapse0x3418610();
   input += synapse0x3424960();
   input += synapse0x34249a0();
   input += synapse0x34249e0();
   input += synapse0x3424a20();
   input += synapse0x3424a60();
   input += synapse0x3424aa0();
   input += synapse0x3424ae0();
   input += synapse0x3424b20();
   input += synapse0x3424b60();
   input += synapse0x3424ba0();
   input += synapse0x3424be0();
   input += synapse0x34184f0();
   input += synapse0x3418530();
   input += synapse0x3424d30();
   input += synapse0x3424d70();
   input += synapse0x3424db0();
   input += synapse0x3424df0();
   input += synapse0x3424e30();
   input += synapse0x3424e70();
   return input;
}

double NNfunction_sRg::neuron0x3418360() {
   double input = input0x3418360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3424eb0() {
   double input = 0.259393;
   input += synapse0x34251f0();
   input += synapse0x3425230();
   input += synapse0x3425270();
   input += synapse0x34252b0();
   input += synapse0x34252f0();
   input += synapse0x3425330();
   input += synapse0x3425370();
   input += synapse0x34253b0();
   input += synapse0x34253f0();
   input += synapse0x3425430();
   input += synapse0x3425470();
   input += synapse0x34254b0();
   input += synapse0x34254f0();
   input += synapse0x3425530();
   input += synapse0x3425570();
   input += synapse0x34255b0();
   input += synapse0x3425040();
   input += synapse0x3425080();
   input += synapse0x3425700();
   input += synapse0x3425740();
   input += synapse0x3425780();
   input += synapse0x34257c0();
   input += synapse0x3425800();
   input += synapse0x3425840();
   return input;
}

double NNfunction_sRg::neuron0x3424eb0() {
   double input = input0x3424eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3425880() {
   double input = 0.249299;
   input += synapse0x3425bc0();
   input += synapse0x3425c00();
   input += synapse0x3425c40();
   input += synapse0x3425c80();
   input += synapse0x3425cc0();
   input += synapse0x3425d00();
   input += synapse0x3425d40();
   input += synapse0x3425d80();
   input += synapse0x3425dc0();
   input += synapse0x3425e00();
   input += synapse0x3425e40();
   input += synapse0x3425e80();
   input += synapse0x3425ec0();
   input += synapse0x3425f00();
   input += synapse0x3425f40();
   input += synapse0x3425f80();
   input += synapse0x3425a10();
   input += synapse0x3425a50();
   input += synapse0x34260d0();
   input += synapse0x3426110();
   input += synapse0x3426150();
   input += synapse0x3426190();
   input += synapse0x34261d0();
   input += synapse0x3426210();
   return input;
}

double NNfunction_sRg::neuron0x3425880() {
   double input = input0x3425880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3426250() {
   double input = -1.1725;
   input += synapse0x3426590();
   input += synapse0x34265d0();
   input += synapse0x3426610();
   input += synapse0x3426650();
   input += synapse0x3426690();
   input += synapse0x34266d0();
   input += synapse0x3426710();
   input += synapse0x3426750();
   input += synapse0x3426790();
   input += synapse0x34267d0();
   input += synapse0x3426810();
   input += synapse0x3426850();
   input += synapse0x3426890();
   input += synapse0x34268d0();
   input += synapse0x3426910();
   input += synapse0x3426950();
   input += synapse0x34263e0();
   input += synapse0x3426420();
   input += synapse0x3426aa0();
   input += synapse0x3426ae0();
   input += synapse0x3426b20();
   input += synapse0x3426b60();
   input += synapse0x3426ba0();
   input += synapse0x3426be0();
   return input;
}

double NNfunction_sRg::neuron0x3426250() {
   double input = input0x3426250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3426c20() {
   double input = -1.44104;
   input += synapse0x3426f60();
   input += synapse0x3426fa0();
   input += synapse0x3426fe0();
   input += synapse0x3427020();
   input += synapse0x3427060();
   input += synapse0x34270a0();
   input += synapse0x34270e0();
   input += synapse0x3427120();
   input += synapse0x3427160();
   input += synapse0x34271a0();
   input += synapse0x34271e0();
   input += synapse0x3427220();
   input += synapse0x3427260();
   input += synapse0x34272a0();
   input += synapse0x34272e0();
   input += synapse0x3427320();
   input += synapse0x3426db0();
   input += synapse0x3426df0();
   input += synapse0x3427470();
   input += synapse0x34274b0();
   input += synapse0x34274f0();
   input += synapse0x3427530();
   input += synapse0x3427570();
   input += synapse0x34275b0();
   return input;
}

double NNfunction_sRg::neuron0x3426c20() {
   double input = input0x3426c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x34275f0() {
   double input = 0.256621;
   input += synapse0x3427930();
   input += synapse0x3427970();
   input += synapse0x34279b0();
   input += synapse0x34279f0();
   input += synapse0x3427a30();
   input += synapse0x3427a70();
   input += synapse0x3427ab0();
   input += synapse0x3427af0();
   input += synapse0x3427b30();
   input += synapse0x3427b70();
   input += synapse0x3427bb0();
   input += synapse0x3427bf0();
   input += synapse0x3427c30();
   input += synapse0x3427c70();
   input += synapse0x3427cb0();
   input += synapse0x3427cf0();
   input += synapse0x3427780();
   input += synapse0x34277c0();
   input += synapse0x3427e40();
   input += synapse0x3427e80();
   input += synapse0x3427ec0();
   input += synapse0x3427f00();
   input += synapse0x3427f40();
   input += synapse0x3427f80();
   return input;
}

double NNfunction_sRg::neuron0x34275f0() {
   double input = input0x34275f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3427fc0() {
   double input = -0.565037;
   input += synapse0x3428300();
   input += synapse0x3428340();
   input += synapse0x3428380();
   input += synapse0x34283c0();
   input += synapse0x3428400();
   input += synapse0x3428440();
   input += synapse0x3428480();
   input += synapse0x34284c0();
   input += synapse0x3428500();
   input += synapse0x3428540();
   input += synapse0x3428580();
   input += synapse0x34285c0();
   input += synapse0x3428600();
   input += synapse0x3428640();
   input += synapse0x3428680();
   input += synapse0x34286c0();
   input += synapse0x3428150();
   input += synapse0x3428190();
   input += synapse0x3428810();
   input += synapse0x3428850();
   input += synapse0x3428890();
   input += synapse0x34288d0();
   input += synapse0x3428910();
   input += synapse0x3428950();
   return input;
}

double NNfunction_sRg::neuron0x3427fc0() {
   double input = input0x3427fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3428990() {
   double input = -1.74011;
   input += synapse0x3428cd0();
   input += synapse0x3428d10();
   input += synapse0x3428d50();
   input += synapse0x3428d90();
   input += synapse0x3428dd0();
   input += synapse0x3428e10();
   input += synapse0x3428e50();
   input += synapse0x3428e90();
   input += synapse0x3428ed0();
   input += synapse0x3428f10();
   input += synapse0x3428f50();
   input += synapse0x3428f90();
   input += synapse0x3428fd0();
   input += synapse0x3429010();
   input += synapse0x3429050();
   input += synapse0x3429090();
   input += synapse0x3428b20();
   input += synapse0x3428b60();
   input += synapse0x34291e0();
   input += synapse0x3429220();
   input += synapse0x3429260();
   input += synapse0x34292a0();
   input += synapse0x34292e0();
   input += synapse0x3429320();
   return input;
}

double NNfunction_sRg::neuron0x3428990() {
   double input = input0x3428990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3429360() {
   double input = -0.84551;
   input += synapse0x3411dd0();
   input += synapse0x3411e10();
   input += synapse0x3411e50();
   input += synapse0x3411e90();
   input += synapse0x3411ed0();
   input += synapse0x3411f10();
   input += synapse0x3411f50();
   input += synapse0x3411f90();
   input += synapse0x3429ab0();
   input += synapse0x3429af0();
   input += synapse0x3429b30();
   input += synapse0x3429b70();
   input += synapse0x3429bb0();
   input += synapse0x3429bf0();
   input += synapse0x3429c30();
   input += synapse0x3429c70();
   input += synapse0x34294f0();
   input += synapse0x3429530();
   input += synapse0x3429dc0();
   input += synapse0x3429e00();
   input += synapse0x3429e40();
   input += synapse0x3429e80();
   input += synapse0x3429ec0();
   input += synapse0x3429f00();
   return input;
}

double NNfunction_sRg::neuron0x3429360() {
   double input = input0x3429360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3429f40() {
   double input = -0.861196;
   input += synapse0x342a280();
   input += synapse0x342a2c0();
   input += synapse0x342a300();
   input += synapse0x342a340();
   input += synapse0x342a380();
   input += synapse0x342a3c0();
   input += synapse0x342a400();
   input += synapse0x342a440();
   input += synapse0x342a480();
   input += synapse0x342a4c0();
   input += synapse0x342a500();
   input += synapse0x342a540();
   input += synapse0x342a580();
   input += synapse0x342a5c0();
   input += synapse0x342a600();
   input += synapse0x342a640();
   input += synapse0x342a0d0();
   input += synapse0x342a110();
   input += synapse0x342a790();
   input += synapse0x342a7d0();
   input += synapse0x342a810();
   input += synapse0x342a850();
   input += synapse0x342a890();
   input += synapse0x342a8d0();
   return input;
}

double NNfunction_sRg::neuron0x3429f40() {
   double input = input0x3429f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x342a910() {
   double input = 1.44182;
   input += synapse0x342ac50();
   input += synapse0x342ac90();
   input += synapse0x342acd0();
   input += synapse0x342ad10();
   input += synapse0x342ad50();
   input += synapse0x342ad90();
   input += synapse0x342add0();
   input += synapse0x342ae10();
   input += synapse0x342ae50();
   input += synapse0x342ae90();
   input += synapse0x342aed0();
   input += synapse0x342af10();
   input += synapse0x342af50();
   input += synapse0x342af90();
   input += synapse0x342afd0();
   input += synapse0x342b010();
   input += synapse0x342aaa0();
   input += synapse0x342aae0();
   input += synapse0x341b610();
   input += synapse0x341b650();
   input += synapse0x341b690();
   input += synapse0x341b6d0();
   input += synapse0x341b710();
   input += synapse0x341b750();
   return input;
}

double NNfunction_sRg::neuron0x342a910() {
   double input = input0x342a910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x341b790() {
   double input = 0.0432949;
   input += synapse0x341bad0();
   input += synapse0x341bb10();
   input += synapse0x341bb50();
   input += synapse0x341bb90();
   input += synapse0x341bbd0();
   input += synapse0x341bc10();
   input += synapse0x341bc50();
   input += synapse0x341bc90();
   input += synapse0x341bcd0();
   input += synapse0x341bd10();
   input += synapse0x341bd50();
   input += synapse0x341bd90();
   input += synapse0x341bdd0();
   input += synapse0x341be10();
   input += synapse0x341be50();
   input += synapse0x341be90();
   input += synapse0x341b920();
   input += synapse0x341b960();
   input += synapse0x341bfe0();
   input += synapse0x341c020();
   input += synapse0x341c060();
   input += synapse0x341c0a0();
   input += synapse0x341c0e0();
   input += synapse0x341c120();
   return input;
}

double NNfunction_sRg::neuron0x341b790() {
   double input = input0x341b790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x341c160() {
   double input = -0.456265;
   input += synapse0x341c4a0();
   input += synapse0x341c4e0();
   input += synapse0x341c520();
   input += synapse0x341c560();
   input += synapse0x341c5a0();
   input += synapse0x341c5e0();
   input += synapse0x341c620();
   input += synapse0x341c660();
   input += synapse0x341c6a0();
   input += synapse0x341c6e0();
   input += synapse0x341c720();
   input += synapse0x341c760();
   input += synapse0x341c7a0();
   input += synapse0x341c7e0();
   input += synapse0x341c820();
   input += synapse0x341c860();
   input += synapse0x341c2f0();
   input += synapse0x341c330();
   input += synapse0x341c9b0();
   input += synapse0x341c9f0();
   input += synapse0x341ca30();
   input += synapse0x341ca70();
   input += synapse0x341cab0();
   input += synapse0x341caf0();
   return input;
}

double NNfunction_sRg::neuron0x341c160() {
   double input = input0x341c160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x341cb30() {
   double input = 1.44348;
   input += synapse0x341ce70();
   input += synapse0x341ceb0();
   input += synapse0x341cef0();
   input += synapse0x341cf30();
   input += synapse0x341cf70();
   input += synapse0x341cfb0();
   input += synapse0x341cff0();
   input += synapse0x341d030();
   input += synapse0x341d070();
   input += synapse0x341d0b0();
   input += synapse0x341d0f0();
   input += synapse0x341d130();
   input += synapse0x341d170();
   input += synapse0x341d1b0();
   input += synapse0x341d1f0();
   input += synapse0x341d230();
   input += synapse0x341ccc0();
   input += synapse0x341cd00();
   input += synapse0x341d380();
   input += synapse0x341d3c0();
   input += synapse0x341d400();
   input += synapse0x341d440();
   input += synapse0x341d480();
   input += synapse0x341d4c0();
   return input;
}

double NNfunction_sRg::neuron0x341cb30() {
   double input = input0x341cb30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x342f170() {
   double input = -0.34372;
   input += synapse0x342f390();
   input += synapse0x342f3d0();
   input += synapse0x342f410();
   input += synapse0x342f450();
   input += synapse0x342f490();
   input += synapse0x342f4d0();
   input += synapse0x342f510();
   input += synapse0x342f550();
   input += synapse0x342f590();
   input += synapse0x342f5d0();
   input += synapse0x342f610();
   input += synapse0x342f650();
   input += synapse0x342f690();
   input += synapse0x342f6d0();
   input += synapse0x342f710();
   input += synapse0x342f750();
   input += synapse0x341d500();
   input += synapse0x341d540();
   input += synapse0x342f8a0();
   input += synapse0x342f8e0();
   input += synapse0x342f920();
   input += synapse0x342f960();
   input += synapse0x342f9a0();
   input += synapse0x342f9e0();
   return input;
}

double NNfunction_sRg::neuron0x342f170() {
   double input = input0x342f170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x342fa20() {
   double input = 0.109373;
   input += synapse0x342fd60();
   input += synapse0x342fda0();
   input += synapse0x342fde0();
   input += synapse0x342fe20();
   input += synapse0x342fe60();
   input += synapse0x342fea0();
   input += synapse0x342fee0();
   input += synapse0x342ff20();
   input += synapse0x342ff60();
   input += synapse0x342ffa0();
   input += synapse0x342ffe0();
   input += synapse0x3430020();
   input += synapse0x3430060();
   input += synapse0x34300a0();
   input += synapse0x34300e0();
   input += synapse0x3430120();
   input += synapse0x342fbb0();
   input += synapse0x342fbf0();
   input += synapse0x3430270();
   input += synapse0x34302b0();
   input += synapse0x34302f0();
   input += synapse0x3430330();
   input += synapse0x3430370();
   input += synapse0x34303b0();
   return input;
}

double NNfunction_sRg::neuron0x342fa20() {
   double input = input0x342fa20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x34303f0() {
   double input = 0.135638;
   input += synapse0x3430730();
   input += synapse0x3430770();
   input += synapse0x34307b0();
   input += synapse0x34307f0();
   input += synapse0x3430830();
   input += synapse0x3430870();
   input += synapse0x34308b0();
   input += synapse0x34308f0();
   input += synapse0x3430930();
   input += synapse0x3430970();
   input += synapse0x34309b0();
   input += synapse0x34309f0();
   input += synapse0x3430a30();
   input += synapse0x3430a70();
   input += synapse0x3430ab0();
   input += synapse0x3430af0();
   input += synapse0x3430580();
   input += synapse0x34305c0();
   input += synapse0x3430c40();
   input += synapse0x3430c80();
   input += synapse0x3430cc0();
   input += synapse0x3430d00();
   input += synapse0x3430d40();
   input += synapse0x3430d80();
   return input;
}

double NNfunction_sRg::neuron0x34303f0() {
   double input = input0x34303f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3430dc0() {
   double input = -1.51274;
   input += synapse0x3431100();
   input += synapse0x3431140();
   input += synapse0x3431180();
   input += synapse0x34311c0();
   input += synapse0x3431200();
   input += synapse0x3431240();
   input += synapse0x3431280();
   input += synapse0x34312c0();
   input += synapse0x3431300();
   input += synapse0x3431340();
   input += synapse0x3431380();
   input += synapse0x34313c0();
   input += synapse0x3431400();
   input += synapse0x3431440();
   input += synapse0x3431480();
   input += synapse0x34314c0();
   input += synapse0x3430f50();
   input += synapse0x3430f90();
   input += synapse0x3431610();
   input += synapse0x3431650();
   input += synapse0x3431690();
   input += synapse0x34316d0();
   input += synapse0x3431710();
   input += synapse0x3431750();
   return input;
}

double NNfunction_sRg::neuron0x3430dc0() {
   double input = input0x3430dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3437fc0() {
   double input = -0.556364;
   input += synapse0x31c7b20();
   input += synapse0x31c7b60();
   input += synapse0x340f200();
   input += synapse0x340f240();
   input += synapse0x340fbd0();
   input += synapse0x340fc10();
   input += synapse0x34109a0();
   input += synapse0x34109e0();
   input += synapse0x3411370();
   input += synapse0x34113b0();
   input += synapse0x3411d40();
   input += synapse0x3411d80();
   input += synapse0x3412820();
   input += synapse0x3412860();
   input += synapse0x34131f0();
   input += synapse0x3413230();
   input += synapse0x34102d0();
   input += synapse0x3410310();
   input += synapse0x3414da0();
   input += synapse0x3414de0();
   input += synapse0x3415770();
   input += synapse0x34157b0();
   input += synapse0x3416140();
   input += synapse0x3416180();
   input += synapse0x3416b10();
   input += synapse0x3416b50();
   input += synapse0x340acb0();
   input += synapse0x340acf0();
   input += synapse0x3418c00();
   input += synapse0x3418c40();
   input += synapse0x34195d0();
   input += synapse0x3419610();
   input += synapse0x3419fa0();
   input += synapse0x3419fe0();
   input += synapse0x341a970();
   input += synapse0x341a9b0();
   input += synapse0x341b340();
   input += synapse0x341b380();
   input += synapse0x3413e90();
   input += synapse0x3413ed0();
   input += synapse0x341d740();
   input += synapse0x341d780();
   input += synapse0x341e0d0();
   input += synapse0x341e110();
   input += synapse0x341eaa0();
   input += synapse0x341eae0();
   input += synapse0x341f470();
   input += synapse0x341f4b0();
   input += synapse0x341fe40();
   input += synapse0x341fe80();
   return input;
}

double NNfunction_sRg::neuron0x3437fc0() {
   double input = input0x3437fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3438360() {
   double input = 0.577831;
   input += synapse0x3422580();
   input += synapse0x34225c0();
   input += synapse0x3417b40();
   input += synapse0x3417b80();
   input += synapse0x3425160();
   input += synapse0x34251a0();
   input += synapse0x3425b30();
   input += synapse0x3425b70();
   input += synapse0x3426500();
   input += synapse0x3426540();
   input += synapse0x3426ed0();
   input += synapse0x3426f10();
   input += synapse0x34278a0();
   input += synapse0x34278e0();
   input += synapse0x3428270();
   input += synapse0x34282b0();
   input += synapse0x3428c40();
   input += synapse0x3428c80();
   input += synapse0x3429610();
   input += synapse0x3429650();
   input += synapse0x342a1f0();
   input += synapse0x342a230();
   input += synapse0x342abc0();
   input += synapse0x342ac00();
   input += synapse0x341ba40();
   input += synapse0x341ba80();
   input += synapse0x341c410();
   input += synapse0x341c450();
   input += synapse0x341cde0();
   input += synapse0x341ce20();
   input += synapse0x342f300();
   input += synapse0x342f340();
   input += synapse0x342fcd0();
   input += synapse0x342fd10();
   input += synapse0x34306a0();
   input += synapse0x34306e0();
   input += synapse0x3431070();
   input += synapse0x34310b0();
   input += synapse0x340cf60();
   input += synapse0x340cfa0();
   input += synapse0x3420810();
   input += synapse0x3420850();
   input += synapse0x3431790();
   input += synapse0x34317d0();
   input += synapse0x3431810();
   input += synapse0x3431850();
   input += synapse0x3438700();
   input += synapse0x3438740();
   input += synapse0x3438780();
   input += synapse0x34387c0();
   return input;
}

double NNfunction_sRg::neuron0x3438360() {
   double input = input0x3438360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3438800() {
   double input = 0.757718;
   input += synapse0x3438b40();
   input += synapse0x3438b80();
   input += synapse0x3438bc0();
   input += synapse0x3438c00();
   input += synapse0x3438c40();
   input += synapse0x3438c80();
   input += synapse0x3438cc0();
   input += synapse0x3438d00();
   input += synapse0x3438d40();
   input += synapse0x3438d80();
   input += synapse0x3438dc0();
   input += synapse0x3438e00();
   input += synapse0x3438e40();
   input += synapse0x3438e80();
   input += synapse0x3438ec0();
   input += synapse0x3438f00();
   input += synapse0x3438990();
   input += synapse0x34389d0();
   input += synapse0x3439050();
   input += synapse0x3439090();
   input += synapse0x34390d0();
   input += synapse0x3439110();
   input += synapse0x3439150();
   input += synapse0x3439190();
   input += synapse0x34391d0();
   input += synapse0x3439210();
   input += synapse0x3439250();
   input += synapse0x3439290();
   input += synapse0x34392d0();
   input += synapse0x3439310();
   input += synapse0x3439350();
   input += synapse0x3439390();
   input += synapse0x3438f40();
   input += synapse0x3438f80();
   input += synapse0x3438fc0();
   input += synapse0x3439000();
   input += synapse0x34395e0();
   input += synapse0x3439620();
   input += synapse0x3439660();
   input += synapse0x34396a0();
   input += synapse0x34396e0();
   input += synapse0x3439720();
   input += synapse0x3439760();
   input += synapse0x34397a0();
   input += synapse0x34397e0();
   input += synapse0x3439820();
   input += synapse0x3439860();
   input += synapse0x34398a0();
   input += synapse0x34398e0();
   input += synapse0x3439920();
   return input;
}

double NNfunction_sRg::neuron0x3438800() {
   double input = input0x3438800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x3439960() {
   double input = -0.401867;
   input += synapse0x3439ca0();
   input += synapse0x3439ce0();
   input += synapse0x3439d20();
   input += synapse0x3439d60();
   input += synapse0x3439da0();
   input += synapse0x3439de0();
   input += synapse0x3439e20();
   input += synapse0x3439e60();
   input += synapse0x3439ea0();
   input += synapse0x3439ee0();
   input += synapse0x3439f20();
   input += synapse0x3439f60();
   input += synapse0x3439fa0();
   input += synapse0x3439fe0();
   input += synapse0x343a020();
   input += synapse0x343a060();
   input += synapse0x3439af0();
   input += synapse0x3439b30();
   input += synapse0x343a1b0();
   input += synapse0x343a1f0();
   input += synapse0x343a230();
   input += synapse0x343a270();
   input += synapse0x343a2b0();
   input += synapse0x343a2f0();
   input += synapse0x343a330();
   input += synapse0x343a370();
   input += synapse0x343a3b0();
   input += synapse0x343a3f0();
   input += synapse0x343a430();
   input += synapse0x343a470();
   input += synapse0x343a4b0();
   input += synapse0x343a4f0();
   input += synapse0x343a0a0();
   input += synapse0x343a0e0();
   input += synapse0x343a120();
   input += synapse0x343a160();
   input += synapse0x343a740();
   input += synapse0x343a780();
   input += synapse0x343a7c0();
   input += synapse0x343a800();
   input += synapse0x343a840();
   input += synapse0x343a880();
   input += synapse0x343a8c0();
   input += synapse0x343a900();
   input += synapse0x343a940();
   input += synapse0x343a980();
   input += synapse0x343a9c0();
   input += synapse0x343aa00();
   input += synapse0x343aa40();
   input += synapse0x343aa80();
   return input;
}

double NNfunction_sRg::neuron0x3439960() {
   double input = input0x3439960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x343aac0() {
   double input = -0.0661106;
   input += synapse0x343ae00();
   input += synapse0x343ae40();
   input += synapse0x343ae80();
   input += synapse0x343aec0();
   input += synapse0x343af00();
   input += synapse0x343af40();
   input += synapse0x343af80();
   input += synapse0x343afc0();
   input += synapse0x343b000();
   input += synapse0x343b040();
   input += synapse0x343b080();
   input += synapse0x343b0c0();
   input += synapse0x343b100();
   input += synapse0x343b140();
   input += synapse0x343b180();
   input += synapse0x343b1c0();
   input += synapse0x343ac50();
   input += synapse0x343ac90();
   input += synapse0x343b310();
   input += synapse0x343b350();
   input += synapse0x343b390();
   input += synapse0x343b3d0();
   input += synapse0x343b410();
   input += synapse0x343b450();
   input += synapse0x343b490();
   input += synapse0x343b4d0();
   input += synapse0x343b510();
   input += synapse0x343b550();
   input += synapse0x343b590();
   input += synapse0x343b5d0();
   input += synapse0x343b610();
   input += synapse0x343b650();
   input += synapse0x343b200();
   input += synapse0x343b240();
   input += synapse0x343b280();
   input += synapse0x343b2c0();
   input += synapse0x343b8a0();
   input += synapse0x343b8e0();
   input += synapse0x343b920();
   input += synapse0x343b960();
   input += synapse0x343b9a0();
   input += synapse0x343b9e0();
   input += synapse0x343ba20();
   input += synapse0x343ba60();
   input += synapse0x343baa0();
   input += synapse0x343bae0();
   input += synapse0x343bb20();
   input += synapse0x343bb60();
   input += synapse0x343bba0();
   input += synapse0x343bbe0();
   return input;
}

double NNfunction_sRg::neuron0x343aac0() {
   double input = input0x343aac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sRg::input0x343bc20() {
   double input = 4.78675;
   input += synapse0x343be40();
   input += synapse0x343be80();
   input += synapse0x343bec0();
   input += synapse0x343bf00();
   input += synapse0x343bf40();
   return input;
}

double NNfunction_sRg::neuron0x343bc20() {
   double input = input0x343bc20();
   return (input * 1)+0;
}

double NNfunction_sRg::synapse0x3407bd0() {
   return (neuron0x3407d10()*0.2415);
}

double NNfunction_sRg::synapse0x3407c10() {
   return (neuron0x3408050()*0.0203827);
}

double NNfunction_sRg::synapse0x340cff0() {
   return (neuron0x3408390()*-0.268447);
}

double NNfunction_sRg::synapse0x340d030() {
   return (neuron0x34086d0()*-0.0140528);
}

double NNfunction_sRg::synapse0x340d070() {
   return (neuron0x3408a10()*-0.186449);
}

double NNfunction_sRg::synapse0x340d0b0() {
   return (neuron0x3408d50()*-0.0610632);
}

double NNfunction_sRg::synapse0x340d0f0() {
   return (neuron0x3409090()*-0.368133);
}

double NNfunction_sRg::synapse0x340d130() {
   return (neuron0x34093d0()*-0.194677);
}

double NNfunction_sRg::synapse0x340d170() {
   return (neuron0x3409710()*0.136093);
}

double NNfunction_sRg::synapse0x340d1b0() {
   return (neuron0x3409a50()*0.0760078);
}

double NNfunction_sRg::synapse0x340d1f0() {
   return (neuron0x3409d90()*-0.31108);
}

double NNfunction_sRg::synapse0x340d230() {
   return (neuron0x340a0d0()*0.349195);
}

double NNfunction_sRg::synapse0x340d270() {
   return (neuron0x340a410()*0.348325);
}

double NNfunction_sRg::synapse0x340d2b0() {
   return (neuron0x340a750()*-0.616762);
}

double NNfunction_sRg::synapse0x340d2f0() {
   return (neuron0x340aa90()*-0.0619202);
}

double NNfunction_sRg::synapse0x340d330() {
   return (neuron0x340add0()*-0.0382565);
}

double NNfunction_sRg::synapse0x3407b40() {
   return (neuron0x340b110()*0.571506);
}

double NNfunction_sRg::synapse0x3407b80() {
   return (neuron0x340b670()*-0.199332);
}

double NNfunction_sRg::synapse0x31b9780() {
   return (neuron0x340b890()*-1.27239);
}

double NNfunction_sRg::synapse0x31b97c0() {
   return (neuron0x340bbd0()*0.802071);
}

double NNfunction_sRg::synapse0x340d590() {
   return (neuron0x340bf10()*-0.0732756);
}

double NNfunction_sRg::synapse0x340d5d0() {
   return (neuron0x340c250()*-0.405938);
}

double NNfunction_sRg::synapse0x340d610() {
   return (neuron0x340c590()*-0.379438);
}

double NNfunction_sRg::synapse0x340d650() {
   return (neuron0x340c8d0()*-0.0907153);
}

double NNfunction_sRg::synapse0x340d9d0() {
   return (neuron0x3407d10()*-0.0414587);
}

double NNfunction_sRg::synapse0x340da10() {
   return (neuron0x3408050()*0.00859894);
}

double NNfunction_sRg::synapse0x340da50() {
   return (neuron0x3408390()*0.00206351);
}

double NNfunction_sRg::synapse0x340da90() {
   return (neuron0x34086d0()*3.08895);
}

double NNfunction_sRg::synapse0x340dad0() {
   return (neuron0x3408a10()*-0.0304713);
}

double NNfunction_sRg::synapse0x340db10() {
   return (neuron0x3408d50()*-0.021798);
}

double NNfunction_sRg::synapse0x340db50() {
   return (neuron0x3409090()*-0.0180023);
}

double NNfunction_sRg::synapse0x340db90() {
   return (neuron0x34093d0()*0.007499);
}

double NNfunction_sRg::synapse0x340dbd0() {
   return (neuron0x3409710()*-0.0138704);
}

double NNfunction_sRg::synapse0x340d480() {
   return (neuron0x3409a50()*0.0268684);
}

double NNfunction_sRg::synapse0x340d4c0() {
   return (neuron0x3409d90()*0.313128);
}

double NNfunction_sRg::synapse0x340d500() {
   return (neuron0x340a0d0()*0.00787582);
}

double NNfunction_sRg::synapse0x340d540() {
   return (neuron0x340a410()*-0.0167152);
}

double NNfunction_sRg::synapse0x340de20() {
   return (neuron0x340a750()*-0.00158076);
}

double NNfunction_sRg::synapse0x340de60() {
   return (neuron0x340aa90()*-0.0222568);
}

double NNfunction_sRg::synapse0x340dea0() {
   return (neuron0x340add0()*0.0324803);
}

double NNfunction_sRg::synapse0x340d820() {
   return (neuron0x340b110()*-0.0333985);
}

double NNfunction_sRg::synapse0x340d860() {
   return (neuron0x340b670()*-0.0285188);
}

double NNfunction_sRg::synapse0x340dff0() {
   return (neuron0x340b890()*-0.790129);
}

double NNfunction_sRg::synapse0x340e030() {
   return (neuron0x340bbd0()*0.000123697);
}

double NNfunction_sRg::synapse0x340e070() {
   return (neuron0x340bf10()*0.00589674);
}

double NNfunction_sRg::synapse0x340e0b0() {
   return (neuron0x340c250()*-0.00832799);
}

double NNfunction_sRg::synapse0x340e0f0() {
   return (neuron0x340c590()*-0.00645807);
}

double NNfunction_sRg::synapse0x340e130() {
   return (neuron0x340c8d0()*0.00158568);
}

double NNfunction_sRg::synapse0x340e4b0() {
   return (neuron0x3407d10()*0.00557796);
}

double NNfunction_sRg::synapse0x340e4f0() {
   return (neuron0x3408050()*0.019343);
}

double NNfunction_sRg::synapse0x340e530() {
   return (neuron0x3408390()*0.00509824);
}

double NNfunction_sRg::synapse0x340e570() {
   return (neuron0x34086d0()*-5.27429);
}

double NNfunction_sRg::synapse0x340e5b0() {
   return (neuron0x3408a10()*0.0154933);
}

double NNfunction_sRg::synapse0x340e5f0() {
   return (neuron0x3408d50()*-0.00573072);
}

double NNfunction_sRg::synapse0x340e630() {
   return (neuron0x3409090()*-0.0401302);
}

double NNfunction_sRg::synapse0x340e670() {
   return (neuron0x34093d0()*-0.0468645);
}

double NNfunction_sRg::synapse0x340e6b0() {
   return (neuron0x3409710()*-0.0103111);
}

double NNfunction_sRg::synapse0x340e6f0() {
   return (neuron0x3409a50()*0.0253223);
}

double NNfunction_sRg::synapse0x340e730() {
   return (neuron0x3409d90()*-0.00325512);
}

double NNfunction_sRg::synapse0x340e770() {
   return (neuron0x340a0d0()*0.0130912);
}

double NNfunction_sRg::synapse0x340e7b0() {
   return (neuron0x340a410()*0.00464488);
}

double NNfunction_sRg::synapse0x340e7f0() {
   return (neuron0x340a750()*-0.0324684);
}

double NNfunction_sRg::synapse0x340e830() {
   return (neuron0x340aa90()*-0.0185336);
}

double NNfunction_sRg::synapse0x340e870() {
   return (neuron0x340add0()*-0.0415292);
}

double NNfunction_sRg::synapse0x340e300() {
   return (neuron0x340b110()*0.0481227);
}

double NNfunction_sRg::synapse0x340e340() {
   return (neuron0x340b670()*0.02647);
}

double NNfunction_sRg::synapse0x31b9bb0() {
   return (neuron0x340b890()*-2.54116);
}

double NNfunction_sRg::synapse0x31c7310() {
   return (neuron0x340bbd0()*0.0163096);
}

double NNfunction_sRg::synapse0x31c7350() {
   return (neuron0x340bf10()*0.0124426);
}

double NNfunction_sRg::synapse0x33f6da0() {
   return (neuron0x340c250()*0.00725307);
}

double NNfunction_sRg::synapse0x33f6de0() {
   return (neuron0x340c590()*0.0103019);
}

double NNfunction_sRg::synapse0x33f6e20() {
   return (neuron0x340c8d0()*-0.0259305);
}

double NNfunction_sRg::synapse0x31c7bb0() {
   return (neuron0x3407d10()*-0.0340725);
}

double NNfunction_sRg::synapse0x340dda0() {
   return (neuron0x3408050()*-0.0897105);
}

double NNfunction_sRg::synapse0x340dde0() {
   return (neuron0x3408390()*-0.0133137);
}

double NNfunction_sRg::synapse0x340e9c0() {
   return (neuron0x34086d0()*0.771193);
}

double NNfunction_sRg::synapse0x340ea00() {
   return (neuron0x3408a10()*0.018637);
}

double NNfunction_sRg::synapse0x340ea40() {
   return (neuron0x3408d50()*0.0657417);
}

double NNfunction_sRg::synapse0x340ea80() {
   return (neuron0x3409090()*-0.0199612);
}

double NNfunction_sRg::synapse0x340eac0() {
   return (neuron0x34093d0()*0.0643385);
}

double NNfunction_sRg::synapse0x340eb00() {
   return (neuron0x3409710()*0.018274);
}

double NNfunction_sRg::synapse0x340eb40() {
   return (neuron0x3409a50()*0.0726023);
}

double NNfunction_sRg::synapse0x340eb80() {
   return (neuron0x3409d90()*0.373721);
}

double NNfunction_sRg::synapse0x340ebc0() {
   return (neuron0x340a0d0()*-0.152046);
}

double NNfunction_sRg::synapse0x340ec00() {
   return (neuron0x340a410()*-0.134966);
}

double NNfunction_sRg::synapse0x340ec40() {
   return (neuron0x340a750()*-0.0979732);
}

double NNfunction_sRg::synapse0x340ec80() {
   return (neuron0x340aa90()*-0.111715);
}

double NNfunction_sRg::synapse0x340ecc0() {
   return (neuron0x340add0()*-0.117315);
}

double NNfunction_sRg::synapse0x3407c50() {
   return (neuron0x340b110()*-0.0139358);
}

double NNfunction_sRg::synapse0x3407c90() {
   return (neuron0x340b670()*-0.0911346);
}

double NNfunction_sRg::synapse0x3407cd0() {
   return (neuron0x340b890()*0.688591);
}

double NNfunction_sRg::synapse0x340ee10() {
   return (neuron0x340bbd0()*0.0455667);
}

double NNfunction_sRg::synapse0x340ee50() {
   return (neuron0x340bf10()*-0.0437204);
}

double NNfunction_sRg::synapse0x340ee90() {
   return (neuron0x340c250()*-0.0111332);
}

double NNfunction_sRg::synapse0x340eed0() {
   return (neuron0x340c590()*-0.00277674);
}

double NNfunction_sRg::synapse0x340ef10() {
   return (neuron0x340c8d0()*0.0903496);
}

double NNfunction_sRg::synapse0x340f290() {
   return (neuron0x3407d10()*0.00236216);
}

double NNfunction_sRg::synapse0x340f2d0() {
   return (neuron0x3408050()*-0.000615499);
}

double NNfunction_sRg::synapse0x340f310() {
   return (neuron0x3408390()*-0.00969642);
}

double NNfunction_sRg::synapse0x340f350() {
   return (neuron0x34086d0()*7.31528);
}

double NNfunction_sRg::synapse0x340f390() {
   return (neuron0x3408a10()*-0.000361739);
}

double NNfunction_sRg::synapse0x340f3d0() {
   return (neuron0x3408d50()*-0.000545097);
}

double NNfunction_sRg::synapse0x340f410() {
   return (neuron0x3409090()*0.0065432);
}

double NNfunction_sRg::synapse0x340f450() {
   return (neuron0x34093d0()*-0.00176305);
}

double NNfunction_sRg::synapse0x340f490() {
   return (neuron0x3409710()*0.000847117);
}

double NNfunction_sRg::synapse0x340f4d0() {
   return (neuron0x3409a50()*0.0196854);
}

double NNfunction_sRg::synapse0x340f510() {
   return (neuron0x3409d90()*0.00232124);
}

double NNfunction_sRg::synapse0x340f550() {
   return (neuron0x340a0d0()*0.0272071);
}

double NNfunction_sRg::synapse0x340f590() {
   return (neuron0x340a410()*0.0545603);
}

double NNfunction_sRg::synapse0x340f5d0() {
   return (neuron0x340a750()*-0.0164219);
}

double NNfunction_sRg::synapse0x340f610() {
   return (neuron0x340aa90()*-0.000711348);
}

double NNfunction_sRg::synapse0x340f650() {
   return (neuron0x340add0()*0.00576649);
}

double NNfunction_sRg::synapse0x340f0e0() {
   return (neuron0x340b110()*-0.00432674);
}

double NNfunction_sRg::synapse0x340f120() {
   return (neuron0x340b670()*0.0164266);
}

double NNfunction_sRg::synapse0x340f7a0() {
   return (neuron0x340b890()*0.600535);
}

double NNfunction_sRg::synapse0x340f7e0() {
   return (neuron0x340bbd0()*0.000594479);
}

double NNfunction_sRg::synapse0x340f820() {
   return (neuron0x340bf10()*-0.00279614);
}

double NNfunction_sRg::synapse0x340f860() {
   return (neuron0x340c250()*0.00650185);
}

double NNfunction_sRg::synapse0x340f8a0() {
   return (neuron0x340c590()*0.00917085);
}

double NNfunction_sRg::synapse0x340f8e0() {
   return (neuron0x340c8d0()*-0.00525727);
}

double NNfunction_sRg::synapse0x340fc60() {
   return (neuron0x3407d10()*0.00310123);
}

double NNfunction_sRg::synapse0x340fca0() {
   return (neuron0x3408050()*-0.000438255);
}

double NNfunction_sRg::synapse0x340fce0() {
   return (neuron0x3408390()*-0.00852828);
}

double NNfunction_sRg::synapse0x340fd20() {
   return (neuron0x34086d0()*0.0136364);
}

double NNfunction_sRg::synapse0x340fd60() {
   return (neuron0x3408a10()*-0.0141921);
}

double NNfunction_sRg::synapse0x340fda0() {
   return (neuron0x3408d50()*-0.00686305);
}

double NNfunction_sRg::synapse0x340fde0() {
   return (neuron0x3409090()*-0.00610228);
}

double NNfunction_sRg::synapse0x340fe20() {
   return (neuron0x34093d0()*0.00899441);
}

double NNfunction_sRg::synapse0x340fe60() {
   return (neuron0x3409710()*0.000778095);
}

double NNfunction_sRg::synapse0x31c7680() {
   return (neuron0x3409a50()*0.000708611);
}

double NNfunction_sRg::synapse0x31c76c0() {
   return (neuron0x3409d90()*0.0027123);
}

double NNfunction_sRg::synapse0x31c7700() {
   return (neuron0x340a0d0()*-0.0046147);
}

double NNfunction_sRg::synapse0x31c7740() {
   return (neuron0x340a410()*-0.00626942);
}

double NNfunction_sRg::synapse0x31c7780() {
   return (neuron0x340a750()*-0.00267437);
}

double NNfunction_sRg::synapse0x31c77c0() {
   return (neuron0x340aa90()*0.00562112);
}

double NNfunction_sRg::synapse0x31c7800() {
   return (neuron0x340add0()*-0.00376404);
}

double NNfunction_sRg::synapse0x340fab0() {
   return (neuron0x340b110()*-0.0144314);
}

double NNfunction_sRg::synapse0x340faf0() {
   return (neuron0x340b670()*-0.00481219);
}

double NNfunction_sRg::synapse0x31c7950() {
   return (neuron0x340b890()*-1.74584);
}

double NNfunction_sRg::synapse0x31c7990() {
   return (neuron0x340bbd0()*0.0013837);
}

double NNfunction_sRg::synapse0x31c79d0() {
   return (neuron0x340bf10()*-0.0026831);
}

double NNfunction_sRg::synapse0x31c7a10() {
   return (neuron0x340c250()*0.000168411);
}

double NNfunction_sRg::synapse0x31c7a50() {
   return (neuron0x340c590()*0.00293353);
}

double NNfunction_sRg::synapse0x34106b0() {
   return (neuron0x340c8d0()*-0.00321947);
}

double NNfunction_sRg::synapse0x3410a30() {
   return (neuron0x3407d10()*0.000954751);
}

double NNfunction_sRg::synapse0x3410a70() {
   return (neuron0x3408050()*0.00559966);
}

double NNfunction_sRg::synapse0x3410ab0() {
   return (neuron0x3408390()*0.0158134);
}

double NNfunction_sRg::synapse0x3410af0() {
   return (neuron0x34086d0()*-17.6516);
}

double NNfunction_sRg::synapse0x3410b30() {
   return (neuron0x3408a10()*0.00343896);
}

double NNfunction_sRg::synapse0x3410b70() {
   return (neuron0x3408d50()*0.00887306);
}

double NNfunction_sRg::synapse0x3410bb0() {
   return (neuron0x3409090()*-0.00295009);
}

double NNfunction_sRg::synapse0x3410bf0() {
   return (neuron0x34093d0()*-0.00652918);
}

double NNfunction_sRg::synapse0x3410c30() {
   return (neuron0x3409710()*0.00667461);
}

double NNfunction_sRg::synapse0x3410c70() {
   return (neuron0x3409a50()*-0.0111259);
}

double NNfunction_sRg::synapse0x3410cb0() {
   return (neuron0x3409d90()*-0.00484312);
}

double NNfunction_sRg::synapse0x3410cf0() {
   return (neuron0x340a0d0()*0.00404779);
}

double NNfunction_sRg::synapse0x3410d30() {
   return (neuron0x340a410()*-0.0240209);
}

double NNfunction_sRg::synapse0x3410d70() {
   return (neuron0x340a750()*0.00340957);
}

double NNfunction_sRg::synapse0x3410db0() {
   return (neuron0x340aa90()*0.00293098);
}

double NNfunction_sRg::synapse0x3410df0() {
   return (neuron0x340add0()*-0.00180398);
}

double NNfunction_sRg::synapse0x3410880() {
   return (neuron0x340b110()*-0.00281822);
}

double NNfunction_sRg::synapse0x34108c0() {
   return (neuron0x340b670()*0.00633006);
}

double NNfunction_sRg::synapse0x3410f40() {
   return (neuron0x340b890()*0.0488015);
}

double NNfunction_sRg::synapse0x3410f80() {
   return (neuron0x340bbd0()*-0.00210793);
}

double NNfunction_sRg::synapse0x3410fc0() {
   return (neuron0x340bf10()*0.00471288);
}

double NNfunction_sRg::synapse0x3411000() {
   return (neuron0x340c250()*-0.00871138);
}

double NNfunction_sRg::synapse0x3411040() {
   return (neuron0x340c590()*0.00375576);
}

double NNfunction_sRg::synapse0x3411080() {
   return (neuron0x340c8d0()*-0.000360977);
}

double NNfunction_sRg::synapse0x3411400() {
   return (neuron0x3407d10()*-0.00261249);
}

double NNfunction_sRg::synapse0x3411440() {
   return (neuron0x3408050()*-0.0851529);
}

double NNfunction_sRg::synapse0x3411480() {
   return (neuron0x3408390()*0.0062147);
}

double NNfunction_sRg::synapse0x34114c0() {
   return (neuron0x34086d0()*0.79421);
}

double NNfunction_sRg::synapse0x3411500() {
   return (neuron0x3408a10()*0.01184);
}

double NNfunction_sRg::synapse0x3411540() {
   return (neuron0x3408d50()*-0.0178628);
}

double NNfunction_sRg::synapse0x3411580() {
   return (neuron0x3409090()*0.0306598);
}

double NNfunction_sRg::synapse0x34115c0() {
   return (neuron0x34093d0()*0.00403516);
}

double NNfunction_sRg::synapse0x3411600() {
   return (neuron0x3409710()*0.0210562);
}

double NNfunction_sRg::synapse0x3411640() {
   return (neuron0x3409a50()*-0.00158169);
}

double NNfunction_sRg::synapse0x3411680() {
   return (neuron0x3409d90()*-0.016064);
}

double NNfunction_sRg::synapse0x34116c0() {
   return (neuron0x340a0d0()*0.0451428);
}

double NNfunction_sRg::synapse0x3411700() {
   return (neuron0x340a410()*0.0934769);
}

double NNfunction_sRg::synapse0x3411740() {
   return (neuron0x340a750()*0.00180163);
}

double NNfunction_sRg::synapse0x3411780() {
   return (neuron0x340aa90()*-0.0486471);
}

double NNfunction_sRg::synapse0x34117c0() {
   return (neuron0x340add0()*-0.0389614);
}

double NNfunction_sRg::synapse0x3411250() {
   return (neuron0x340b110()*0.0108454);
}

double NNfunction_sRg::synapse0x3411290() {
   return (neuron0x340b670()*0.0217893);
}

double NNfunction_sRg::synapse0x3411910() {
   return (neuron0x340b890()*-0.828168);
}

double NNfunction_sRg::synapse0x3411950() {
   return (neuron0x340bbd0()*-0.0381404);
}

double NNfunction_sRg::synapse0x3411990() {
   return (neuron0x340bf10()*0.0113057);
}

double NNfunction_sRg::synapse0x34119d0() {
   return (neuron0x340c250()*0.0123247);
}

double NNfunction_sRg::synapse0x3411a10() {
   return (neuron0x340c590()*0.018092);
}

double NNfunction_sRg::synapse0x3411a50() {
   return (neuron0x340c8d0()*-0.00135406);
}

double NNfunction_sRg::synapse0x340b560() {
   return (neuron0x3407d10()*0.508961);
}

double NNfunction_sRg::synapse0x340b5a0() {
   return (neuron0x3408050()*0.146039);
}

double NNfunction_sRg::synapse0x340b5e0() {
   return (neuron0x3408390()*0.228313);
}

double NNfunction_sRg::synapse0x340b620() {
   return (neuron0x34086d0()*0.995675);
}

double NNfunction_sRg::synapse0x3411fe0() {
   return (neuron0x3408a10()*0.482371);
}

double NNfunction_sRg::synapse0x3412020() {
   return (neuron0x3408d50()*0.251331);
}

double NNfunction_sRg::synapse0x3412060() {
   return (neuron0x3409090()*-0.0343459);
}

double NNfunction_sRg::synapse0x34120a0() {
   return (neuron0x34093d0()*0.105272);
}

double NNfunction_sRg::synapse0x34120e0() {
   return (neuron0x3409710()*-0.784901);
}

double NNfunction_sRg::synapse0x3412120() {
   return (neuron0x3409a50()*-0.705595);
}

double NNfunction_sRg::synapse0x3412160() {
   return (neuron0x3409d90()*-1.0037);
}

double NNfunction_sRg::synapse0x34121a0() {
   return (neuron0x340a0d0()*0.0521386);
}

double NNfunction_sRg::synapse0x34121e0() {
   return (neuron0x340a410()*0.289602);
}

double NNfunction_sRg::synapse0x3412220() {
   return (neuron0x340a750()*-0.773138);
}

double NNfunction_sRg::synapse0x3412260() {
   return (neuron0x340aa90()*0.350493);
}

double NNfunction_sRg::synapse0x34122a0() {
   return (neuron0x340add0()*-0.154242);
}

double NNfunction_sRg::synapse0x3411c20() {
   return (neuron0x340b110()*-0.088561);
}

double NNfunction_sRg::synapse0x3411c60() {
   return (neuron0x340b670()*0.105342);
}

double NNfunction_sRg::synapse0x34123f0() {
   return (neuron0x340b890()*0.403176);
}

double NNfunction_sRg::synapse0x3412430() {
   return (neuron0x340bbd0()*-0.341037);
}

double NNfunction_sRg::synapse0x3412470() {
   return (neuron0x340bf10()*-0.230892);
}

double NNfunction_sRg::synapse0x34124b0() {
   return (neuron0x340c250()*0.165074);
}

double NNfunction_sRg::synapse0x34124f0() {
   return (neuron0x340c590()*0.163989);
}

double NNfunction_sRg::synapse0x3412530() {
   return (neuron0x340c8d0()*-0.0214868);
}

double NNfunction_sRg::synapse0x34128b0() {
   return (neuron0x3407d10()*-0.0536246);
}

double NNfunction_sRg::synapse0x34128f0() {
   return (neuron0x3408050()*-0.0791191);
}

double NNfunction_sRg::synapse0x3412930() {
   return (neuron0x3408390()*-0.0575446);
}

double NNfunction_sRg::synapse0x3412970() {
   return (neuron0x34086d0()*-3.03616);
}

double NNfunction_sRg::synapse0x34129b0() {
   return (neuron0x3408a10()*0.00816563);
}

double NNfunction_sRg::synapse0x34129f0() {
   return (neuron0x3408d50()*0.0611673);
}

double NNfunction_sRg::synapse0x3412a30() {
   return (neuron0x3409090()*0.107586);
}

double NNfunction_sRg::synapse0x3412a70() {
   return (neuron0x34093d0()*0.159338);
}

double NNfunction_sRg::synapse0x3412ab0() {
   return (neuron0x3409710()*-0.026516);
}

double NNfunction_sRg::synapse0x3412af0() {
   return (neuron0x3409a50()*-0.0419492);
}

double NNfunction_sRg::synapse0x3412b30() {
   return (neuron0x3409d90()*-0.0386609);
}

double NNfunction_sRg::synapse0x3412b70() {
   return (neuron0x340a0d0()*0.117659);
}

double NNfunction_sRg::synapse0x3412bb0() {
   return (neuron0x340a410()*0.167485);
}

double NNfunction_sRg::synapse0x3412bf0() {
   return (neuron0x340a750()*-0.0561761);
}

double NNfunction_sRg::synapse0x3412c30() {
   return (neuron0x340aa90()*0.156553);
}

double NNfunction_sRg::synapse0x3412c70() {
   return (neuron0x340add0()*0.174556);
}

double NNfunction_sRg::synapse0x3412700() {
   return (neuron0x340b110()*-0.278871);
}

double NNfunction_sRg::synapse0x3412740() {
   return (neuron0x340b670()*0.0841104);
}

double NNfunction_sRg::synapse0x3412dc0() {
   return (neuron0x340b890()*-2.32474);
}

double NNfunction_sRg::synapse0x3412e00() {
   return (neuron0x340bbd0()*0.00343429);
}

double NNfunction_sRg::synapse0x3412e40() {
   return (neuron0x340bf10()*-0.0105663);
}

double NNfunction_sRg::synapse0x3412e80() {
   return (neuron0x340c250()*0.00997494);
}

double NNfunction_sRg::synapse0x3412ec0() {
   return (neuron0x340c590()*-0.000765801);
}

double NNfunction_sRg::synapse0x3412f00() {
   return (neuron0x340c8d0()*0.0358045);
}

double NNfunction_sRg::synapse0x3413280() {
   return (neuron0x3407d10()*-0.174121);
}

double NNfunction_sRg::synapse0x34132c0() {
   return (neuron0x3408050()*0.123548);
}

double NNfunction_sRg::synapse0x3413300() {
   return (neuron0x3408390()*-0.0324326);
}

double NNfunction_sRg::synapse0x3413340() {
   return (neuron0x34086d0()*0.0412899);
}

double NNfunction_sRg::synapse0x3413380() {
   return (neuron0x3408a10()*-0.458189);
}

double NNfunction_sRg::synapse0x34133c0() {
   return (neuron0x3408d50()*0.678182);
}

double NNfunction_sRg::synapse0x3413400() {
   return (neuron0x3409090()*0.0423328);
}

double NNfunction_sRg::synapse0x3413440() {
   return (neuron0x34093d0()*-0.0199927);
}

double NNfunction_sRg::synapse0x3413480() {
   return (neuron0x3409710()*-0.0443477);
}

double NNfunction_sRg::synapse0x34134c0() {
   return (neuron0x3409a50()*0.0684172);
}

double NNfunction_sRg::synapse0x3413500() {
   return (neuron0x3409d90()*0.059518);
}

double NNfunction_sRg::synapse0x3413540() {
   return (neuron0x340a0d0()*0.179156);
}

double NNfunction_sRg::synapse0x3413580() {
   return (neuron0x340a410()*-0.181361);
}

double NNfunction_sRg::synapse0x34135c0() {
   return (neuron0x340a750()*-0.077788);
}

double NNfunction_sRg::synapse0x3413600() {
   return (neuron0x340aa90()*-0.308897);
}

double NNfunction_sRg::synapse0x3413640() {
   return (neuron0x340add0()*-0.13019);
}

double NNfunction_sRg::synapse0x34130d0() {
   return (neuron0x340b110()*0.209853);
}

double NNfunction_sRg::synapse0x3413110() {
   return (neuron0x340b670()*0.0523131);
}

double NNfunction_sRg::synapse0x340fea0() {
   return (neuron0x340b890()*-0.648354);
}

double NNfunction_sRg::synapse0x340fee0() {
   return (neuron0x340bbd0()*-0.0360775);
}

double NNfunction_sRg::synapse0x340ff20() {
   return (neuron0x340bf10()*-0.0713986);
}

double NNfunction_sRg::synapse0x340ff60() {
   return (neuron0x340c250()*-0.0163176);
}

double NNfunction_sRg::synapse0x340ffa0() {
   return (neuron0x340c590()*0.0455003);
}

double NNfunction_sRg::synapse0x340ffe0() {
   return (neuron0x340c8d0()*-0.0116666);
}

double NNfunction_sRg::synapse0x3410360() {
   return (neuron0x3407d10()*-0.0266835);
}

double NNfunction_sRg::synapse0x34103a0() {
   return (neuron0x3408050()*-0.0616585);
}

double NNfunction_sRg::synapse0x34103e0() {
   return (neuron0x3408390()*-0.0111264);
}

double NNfunction_sRg::synapse0x3410420() {
   return (neuron0x34086d0()*1.31004);
}

double NNfunction_sRg::synapse0x3410460() {
   return (neuron0x3408a10()*0.0451035);
}

double NNfunction_sRg::synapse0x34104a0() {
   return (neuron0x3408d50()*0.0449018);
}

double NNfunction_sRg::synapse0x34104e0() {
   return (neuron0x3409090()*-0.0880976);
}

double NNfunction_sRg::synapse0x3410520() {
   return (neuron0x34093d0()*0.325028);
}

double NNfunction_sRg::synapse0x3410560() {
   return (neuron0x3409710()*0.036399);
}

double NNfunction_sRg::synapse0x34105a0() {
   return (neuron0x3409a50()*-0.0864744);
}

double NNfunction_sRg::synapse0x34105e0() {
   return (neuron0x3409d90()*0.0498144);
}

double NNfunction_sRg::synapse0x3410620() {
   return (neuron0x340a0d0()*0.0694321);
}

double NNfunction_sRg::synapse0x3410660() {
   return (neuron0x340a410()*-0.0484234);
}

double NNfunction_sRg::synapse0x34147a0() {
   return (neuron0x340a750()*-0.0978251);
}

double NNfunction_sRg::synapse0x34147e0() {
   return (neuron0x340aa90()*0.0117317);
}

double NNfunction_sRg::synapse0x3414820() {
   return (neuron0x340add0()*0.00721741);
}

double NNfunction_sRg::synapse0x34101b0() {
   return (neuron0x340b110()*-0.14785);
}

double NNfunction_sRg::synapse0x34101f0() {
   return (neuron0x340b670()*0.0139934);
}

double NNfunction_sRg::synapse0x3414970() {
   return (neuron0x340b890()*-0.0226864);
}

double NNfunction_sRg::synapse0x34149b0() {
   return (neuron0x340bbd0()*0.0511468);
}

double NNfunction_sRg::synapse0x34149f0() {
   return (neuron0x340bf10()*0.0256766);
}

double NNfunction_sRg::synapse0x3414a30() {
   return (neuron0x340c250()*0.00886872);
}

double NNfunction_sRg::synapse0x3414a70() {
   return (neuron0x340c590()*-0.006109);
}

double NNfunction_sRg::synapse0x3414ab0() {
   return (neuron0x340c8d0()*-0.0132356);
}

double NNfunction_sRg::synapse0x3414e30() {
   return (neuron0x3407d10()*0.00267223);
}

double NNfunction_sRg::synapse0x3414e70() {
   return (neuron0x3408050()*0.011305);
}

double NNfunction_sRg::synapse0x3414eb0() {
   return (neuron0x3408390()*-0.00230582);
}

double NNfunction_sRg::synapse0x3414ef0() {
   return (neuron0x34086d0()*1.15588);
}

double NNfunction_sRg::synapse0x3414f30() {
   return (neuron0x3408a10()*0.0157949);
}

double NNfunction_sRg::synapse0x3414f70() {
   return (neuron0x3408d50()*0.0237907);
}

double NNfunction_sRg::synapse0x3414fb0() {
   return (neuron0x3409090()*-0.000617868);
}

double NNfunction_sRg::synapse0x3414ff0() {
   return (neuron0x34093d0()*0.00113474);
}

double NNfunction_sRg::synapse0x3415030() {
   return (neuron0x3409710()*-0.0425003);
}

double NNfunction_sRg::synapse0x3415070() {
   return (neuron0x3409a50()*0.0169489);
}

double NNfunction_sRg::synapse0x34150b0() {
   return (neuron0x3409d90()*0.0107945);
}

double NNfunction_sRg::synapse0x34150f0() {
   return (neuron0x340a0d0()*-0.0154615);
}

double NNfunction_sRg::synapse0x3415130() {
   return (neuron0x340a410()*-0.0128951);
}

double NNfunction_sRg::synapse0x3415170() {
   return (neuron0x340a750()*0.0127929);
}

double NNfunction_sRg::synapse0x34151b0() {
   return (neuron0x340aa90()*-0.00205943);
}

double NNfunction_sRg::synapse0x34151f0() {
   return (neuron0x340add0()*0.034813);
}

double NNfunction_sRg::synapse0x3414c80() {
   return (neuron0x340b110()*0.00650185);
}

double NNfunction_sRg::synapse0x3414cc0() {
   return (neuron0x340b670()*0.00244754);
}

double NNfunction_sRg::synapse0x3415340() {
   return (neuron0x340b890()*1.02944);
}

double NNfunction_sRg::synapse0x3415380() {
   return (neuron0x340bbd0()*0.00943112);
}

double NNfunction_sRg::synapse0x34153c0() {
   return (neuron0x340bf10()*-0.0100211);
}

double NNfunction_sRg::synapse0x3415400() {
   return (neuron0x340c250()*0.00124297);
}

double NNfunction_sRg::synapse0x3415440() {
   return (neuron0x340c590()*-0.00556191);
}

double NNfunction_sRg::synapse0x3415480() {
   return (neuron0x340c8d0()*0.00233851);
}

double NNfunction_sRg::synapse0x3415800() {
   return (neuron0x3407d10()*-0.0171031);
}

double NNfunction_sRg::synapse0x3415840() {
   return (neuron0x3408050()*-0.0845608);
}

double NNfunction_sRg::synapse0x3415880() {
   return (neuron0x3408390()*0.0122979);
}

double NNfunction_sRg::synapse0x34158c0() {
   return (neuron0x34086d0()*0.027775);
}

double NNfunction_sRg::synapse0x3415900() {
   return (neuron0x3408a10()*-0.00520736);
}

double NNfunction_sRg::synapse0x3415940() {
   return (neuron0x3408d50()*-0.0455168);
}

double NNfunction_sRg::synapse0x3415980() {
   return (neuron0x3409090()*-0.0274886);
}

double NNfunction_sRg::synapse0x34159c0() {
   return (neuron0x34093d0()*-0.0422238);
}

double NNfunction_sRg::synapse0x3415a00() {
   return (neuron0x3409710()*0.0703533);
}

double NNfunction_sRg::synapse0x3415a40() {
   return (neuron0x3409a50()*0.0973469);
}

double NNfunction_sRg::synapse0x3415a80() {
   return (neuron0x3409d90()*-0.093318);
}

double NNfunction_sRg::synapse0x3415ac0() {
   return (neuron0x340a0d0()*0.0236365);
}

double NNfunction_sRg::synapse0x3415b00() {
   return (neuron0x340a410()*0.0307753);
}

double NNfunction_sRg::synapse0x3415b40() {
   return (neuron0x340a750()*0.0637693);
}

double NNfunction_sRg::synapse0x3415b80() {
   return (neuron0x340aa90()*-0.153789);
}

double NNfunction_sRg::synapse0x3415bc0() {
   return (neuron0x340add0()*-0.148934);
}

double NNfunction_sRg::synapse0x3415650() {
   return (neuron0x340b110()*0.0186388);
}

double NNfunction_sRg::synapse0x3415690() {
   return (neuron0x340b670()*0.0178747);
}

double NNfunction_sRg::synapse0x3415d10() {
   return (neuron0x340b890()*0.0650711);
}

double NNfunction_sRg::synapse0x3415d50() {
   return (neuron0x340bbd0()*0.0599494);
}

double NNfunction_sRg::synapse0x3415d90() {
   return (neuron0x340bf10()*0.0045442);
}

double NNfunction_sRg::synapse0x3415dd0() {
   return (neuron0x340c250()*-0.0172798);
}

double NNfunction_sRg::synapse0x3415e10() {
   return (neuron0x340c590()*-0.00276751);
}

double NNfunction_sRg::synapse0x3415e50() {
   return (neuron0x340c8d0()*0.0358053);
}

double NNfunction_sRg::synapse0x34161d0() {
   return (neuron0x3407d10()*-0.0712588);
}

double NNfunction_sRg::synapse0x3416210() {
   return (neuron0x3408050()*-0.168941);
}

double NNfunction_sRg::synapse0x3416250() {
   return (neuron0x3408390()*0.0444385);
}

double NNfunction_sRg::synapse0x3416290() {
   return (neuron0x34086d0()*-1.65008);
}

double NNfunction_sRg::synapse0x34162d0() {
   return (neuron0x3408a10()*-0.155338);
}

double NNfunction_sRg::synapse0x3416310() {
   return (neuron0x3408d50()*0.0460092);
}

double NNfunction_sRg::synapse0x3416350() {
   return (neuron0x3409090()*-0.0375464);
}

double NNfunction_sRg::synapse0x3416390() {
   return (neuron0x34093d0()*-0.191899);
}

double NNfunction_sRg::synapse0x34163d0() {
   return (neuron0x3409710()*-0.182043);
}

double NNfunction_sRg::synapse0x3416410() {
   return (neuron0x3409a50()*-0.241232);
}

double NNfunction_sRg::synapse0x3416450() {
   return (neuron0x3409d90()*-0.0919245);
}

double NNfunction_sRg::synapse0x3416490() {
   return (neuron0x340a0d0()*-0.00325233);
}

double NNfunction_sRg::synapse0x34164d0() {
   return (neuron0x340a410()*-0.258487);
}

double NNfunction_sRg::synapse0x3416510() {
   return (neuron0x340a750()*-0.447226);
}

double NNfunction_sRg::synapse0x3416550() {
   return (neuron0x340aa90()*0.230249);
}

double NNfunction_sRg::synapse0x3416590() {
   return (neuron0x340add0()*-0.0902707);
}

double NNfunction_sRg::synapse0x3416020() {
   return (neuron0x340b110()*0.571144);
}

double NNfunction_sRg::synapse0x3416060() {
   return (neuron0x340b670()*-0.0777815);
}

double NNfunction_sRg::synapse0x34166e0() {
   return (neuron0x340b890()*-1.09177);
}

double NNfunction_sRg::synapse0x3416720() {
   return (neuron0x340bbd0()*0.118104);
}

double NNfunction_sRg::synapse0x3416760() {
   return (neuron0x340bf10()*0.058562);
}

double NNfunction_sRg::synapse0x34167a0() {
   return (neuron0x340c250()*-0.149051);
}

double NNfunction_sRg::synapse0x34167e0() {
   return (neuron0x340c590()*0.0447045);
}

double NNfunction_sRg::synapse0x3416820() {
   return (neuron0x340c8d0()*-0.0152183);
}

double NNfunction_sRg::synapse0x3416ba0() {
   return (neuron0x3407d10()*0.076302);
}

double NNfunction_sRg::synapse0x3407f30() {
   return (neuron0x3408050()*-0.0263812);
}

double NNfunction_sRg::synapse0x3407f70() {
   return (neuron0x3408390()*-0.01586);
}

double NNfunction_sRg::synapse0x3408270() {
   return (neuron0x34086d0()*-0.813011);
}

double NNfunction_sRg::synapse0x34082b0() {
   return (neuron0x3408a10()*-0.125389);
}

double NNfunction_sRg::synapse0x34085b0() {
   return (neuron0x3408d50()*-0.33163);
}

double NNfunction_sRg::synapse0x34085f0() {
   return (neuron0x3409090()*0.330705);
}

double NNfunction_sRg::synapse0x34088f0() {
   return (neuron0x34093d0()*0.118823);
}

double NNfunction_sRg::synapse0x3408930() {
   return (neuron0x3409710()*0.0430152);
}

double NNfunction_sRg::synapse0x3408c30() {
   return (neuron0x3409a50()*-0.0695928);
}

double NNfunction_sRg::synapse0x3408c70() {
   return (neuron0x3409d90()*-0.00398717);
}

double NNfunction_sRg::synapse0x3408f70() {
   return (neuron0x340a0d0()*-0.136053);
}

double NNfunction_sRg::synapse0x3408fb0() {
   return (neuron0x340a410()*0.0364699);
}

double NNfunction_sRg::synapse0x34092b0() {
   return (neuron0x340a750()*-0.0134533);
}

double NNfunction_sRg::synapse0x34092f0() {
   return (neuron0x340aa90()*-0.289723);
}

double NNfunction_sRg::synapse0x34095f0() {
   return (neuron0x340add0()*0.396121);
}

double NNfunction_sRg::synapse0x3409630() {
   return (neuron0x340b110()*0.0348996);
}

double NNfunction_sRg::synapse0x3409930() {
   return (neuron0x340b670()*-0.176958);
}

double NNfunction_sRg::synapse0x3409970() {
   return (neuron0x340b890()*0.585077);
}

double NNfunction_sRg::synapse0x3409c70() {
   return (neuron0x340bbd0()*-0.0485575);
}

double NNfunction_sRg::synapse0x3409cb0() {
   return (neuron0x340bf10()*-0.135215);
}

double NNfunction_sRg::synapse0x3409fb0() {
   return (neuron0x340c250()*0.0569055);
}

double NNfunction_sRg::synapse0x3409ff0() {
   return (neuron0x340c590()*-0.149043);
}

double NNfunction_sRg::synapse0x340a2f0() {
   return (neuron0x340c8d0()*0.0720398);
}

double NNfunction_sRg::synapse0x340a330() {
   return (neuron0x3407d10()*-0.00499803);
}

double NNfunction_sRg::synapse0x340aff0() {
   return (neuron0x3408050()*-0.169274);
}

double NNfunction_sRg::synapse0x340b030() {
   return (neuron0x3408390()*0.108425);
}

double NNfunction_sRg::synapse0x34169f0() {
   return (neuron0x34086d0()*-1.04026);
}

double NNfunction_sRg::synapse0x3416a30() {
   return (neuron0x3408a10()*-0.0543322);
}

double NNfunction_sRg::synapse0x340b330() {
   return (neuron0x3408d50()*-0.186703);
}

double NNfunction_sRg::synapse0x340b370() {
   return (neuron0x3409090()*-0.181133);
}

double NNfunction_sRg::synapse0x31b9660() {
   return (neuron0x34093d0()*-0.206948);
}

double NNfunction_sRg::synapse0x31b96a0() {
   return (neuron0x3409710()*0.079141);
}

double NNfunction_sRg::synapse0x340bab0() {
   return (neuron0x3409a50()*-0.0997813);
}

double NNfunction_sRg::synapse0x340baf0() {
   return (neuron0x3409d90()*0.0969197);
}

double NNfunction_sRg::synapse0x340bdf0() {
   return (neuron0x340a0d0()*0.148148);
}

double NNfunction_sRg::synapse0x340be30() {
   return (neuron0x340a410()*0.00514097);
}

double NNfunction_sRg::synapse0x340c130() {
   return (neuron0x340a750()*0.227285);
}

double NNfunction_sRg::synapse0x340c170() {
   return (neuron0x340aa90()*-0.230383);
}

double NNfunction_sRg::synapse0x340c470() {
   return (neuron0x340add0()*-0.416479);
}

double NNfunction_sRg::synapse0x340c4b0() {
   return (neuron0x340b110()*0.3882);
}

double NNfunction_sRg::synapse0x340c7b0() {
   return (neuron0x340b670()*-0.0216391);
}

double NNfunction_sRg::synapse0x340c7f0() {
   return (neuron0x340b890()*-0.0301255);
}

double NNfunction_sRg::synapse0x340caf0() {
   return (neuron0x340bbd0()*0.167488);
}

double NNfunction_sRg::synapse0x340cb30() {
   return (neuron0x340bf10()*0.182972);
}

double NNfunction_sRg::synapse0x340a630() {
   return (neuron0x340c250()*0.132113);
}

double NNfunction_sRg::synapse0x340a670() {
   return (neuron0x340c590()*-0.13287);
}

double NNfunction_sRg::synapse0x3418910() {
   return (neuron0x340c8d0()*0.00688017);
}

double NNfunction_sRg::synapse0x3418c90() {
   return (neuron0x3407d10()*-0.00783689);
}

double NNfunction_sRg::synapse0x3418cd0() {
   return (neuron0x3408050()*-0.0663841);
}

double NNfunction_sRg::synapse0x3418d10() {
   return (neuron0x3408390()*0.0274883);
}

double NNfunction_sRg::synapse0x3418d50() {
   return (neuron0x34086d0()*0.400073);
}

double NNfunction_sRg::synapse0x3418d90() {
   return (neuron0x3408a10()*-0.0426034);
}

double NNfunction_sRg::synapse0x3418dd0() {
   return (neuron0x3408d50()*-0.0119063);
}

double NNfunction_sRg::synapse0x3418e10() {
   return (neuron0x3409090()*-0.0359381);
}

double NNfunction_sRg::synapse0x3418e50() {
   return (neuron0x34093d0()*-0.0415649);
}

double NNfunction_sRg::synapse0x3418e90() {
   return (neuron0x3409710()*0.00170868);
}

double NNfunction_sRg::synapse0x3418ed0() {
   return (neuron0x3409a50()*-0.0467157);
}

double NNfunction_sRg::synapse0x3418f10() {
   return (neuron0x3409d90()*-0.000660515);
}

double NNfunction_sRg::synapse0x3418f50() {
   return (neuron0x340a0d0()*-0.0129471);
}

double NNfunction_sRg::synapse0x3418f90() {
   return (neuron0x340a410()*-0.0404112);
}

double NNfunction_sRg::synapse0x3418fd0() {
   return (neuron0x340a750()*0.00424044);
}

double NNfunction_sRg::synapse0x3419010() {
   return (neuron0x340aa90()*-0.0571199);
}

double NNfunction_sRg::synapse0x3419050() {
   return (neuron0x340add0()*0.972756);
}

double NNfunction_sRg::synapse0x3418ae0() {
   return (neuron0x340b110()*0.0103881);
}

double NNfunction_sRg::synapse0x3418b20() {
   return (neuron0x340b670()*-0.00767357);
}

double NNfunction_sRg::synapse0x34191a0() {
   return (neuron0x340b890()*-0.267474);
}

double NNfunction_sRg::synapse0x34191e0() {
   return (neuron0x340bbd0()*-0.0157716);
}

double NNfunction_sRg::synapse0x3419220() {
   return (neuron0x340bf10()*0.00503419);
}

double NNfunction_sRg::synapse0x3419260() {
   return (neuron0x340c250()*0.0410519);
}

double NNfunction_sRg::synapse0x34192a0() {
   return (neuron0x340c590()*-0.00355314);
}

double NNfunction_sRg::synapse0x34192e0() {
   return (neuron0x340c8d0()*0.0216524);
}

double NNfunction_sRg::synapse0x3419660() {
   return (neuron0x3407d10()*-0.026996);
}

double NNfunction_sRg::synapse0x34196a0() {
   return (neuron0x3408050()*-0.24682);
}

double NNfunction_sRg::synapse0x34196e0() {
   return (neuron0x3408390()*0.00644715);
}

double NNfunction_sRg::synapse0x3419720() {
   return (neuron0x34086d0()*-0.89636);
}

double NNfunction_sRg::synapse0x3419760() {
   return (neuron0x3408a10()*-0.0523125);
}

double NNfunction_sRg::synapse0x34197a0() {
   return (neuron0x3408d50()*-0.0820183);
}

double NNfunction_sRg::synapse0x34197e0() {
   return (neuron0x3409090()*-0.0832619);
}

double NNfunction_sRg::synapse0x3419820() {
   return (neuron0x34093d0()*-0.0326217);
}

double NNfunction_sRg::synapse0x3419860() {
   return (neuron0x3409710()*0.0439098);
}

double NNfunction_sRg::synapse0x34198a0() {
   return (neuron0x3409a50()*0.0102457);
}

double NNfunction_sRg::synapse0x34198e0() {
   return (neuron0x3409d90()*0.0116222);
}

double NNfunction_sRg::synapse0x3419920() {
   return (neuron0x340a0d0()*0.0122823);
}

double NNfunction_sRg::synapse0x3419960() {
   return (neuron0x340a410()*-0.0461315);
}

double NNfunction_sRg::synapse0x34199a0() {
   return (neuron0x340a750()*0.0116336);
}

double NNfunction_sRg::synapse0x34199e0() {
   return (neuron0x340aa90()*-0.0593653);
}

double NNfunction_sRg::synapse0x3419a20() {
   return (neuron0x340add0()*-0.107484);
}

double NNfunction_sRg::synapse0x34194b0() {
   return (neuron0x340b110()*0.0273762);
}

double NNfunction_sRg::synapse0x34194f0() {
   return (neuron0x340b670()*0.0200725);
}

double NNfunction_sRg::synapse0x3419b70() {
   return (neuron0x340b890()*0.489649);
}

double NNfunction_sRg::synapse0x3419bb0() {
   return (neuron0x340bbd0()*0.0176347);
}

double NNfunction_sRg::synapse0x3419bf0() {
   return (neuron0x340bf10()*-0.00282729);
}

double NNfunction_sRg::synapse0x3419c30() {
   return (neuron0x340c250()*-0.0130001);
}

double NNfunction_sRg::synapse0x3419c70() {
   return (neuron0x340c590()*0.0170121);
}

double NNfunction_sRg::synapse0x3419cb0() {
   return (neuron0x340c8d0()*0.0172135);
}

double NNfunction_sRg::synapse0x341a030() {
   return (neuron0x3407d10()*-0.0109095);
}

double NNfunction_sRg::synapse0x341a070() {
   return (neuron0x3408050()*0.0156889);
}

double NNfunction_sRg::synapse0x341a0b0() {
   return (neuron0x3408390()*-0.00578074);
}

double NNfunction_sRg::synapse0x341a0f0() {
   return (neuron0x34086d0()*-2.46648);
}

double NNfunction_sRg::synapse0x341a130() {
   return (neuron0x3408a10()*-0.0127035);
}

double NNfunction_sRg::synapse0x341a170() {
   return (neuron0x3408d50()*-0.00767364);
}

double NNfunction_sRg::synapse0x341a1b0() {
   return (neuron0x3409090()*-0.0186632);
}

double NNfunction_sRg::synapse0x341a1f0() {
   return (neuron0x34093d0()*0.000914947);
}

double NNfunction_sRg::synapse0x341a230() {
   return (neuron0x3409710()*0.0158766);
}

double NNfunction_sRg::synapse0x341a270() {
   return (neuron0x3409a50()*-0.0275917);
}

double NNfunction_sRg::synapse0x341a2b0() {
   return (neuron0x3409d90()*-0.0152261);
}

double NNfunction_sRg::synapse0x341a2f0() {
   return (neuron0x340a0d0()*-0.00948348);
}

double NNfunction_sRg::synapse0x341a330() {
   return (neuron0x340a410()*-0.0307874);
}

double NNfunction_sRg::synapse0x341a370() {
   return (neuron0x340a750()*-0.0374708);
}

double NNfunction_sRg::synapse0x341a3b0() {
   return (neuron0x340aa90()*-0.0145959);
}

double NNfunction_sRg::synapse0x341a3f0() {
   return (neuron0x340add0()*-0.0180569);
}

double NNfunction_sRg::synapse0x3419e80() {
   return (neuron0x340b110()*0.00869988);
}

double NNfunction_sRg::synapse0x3419ec0() {
   return (neuron0x340b670()*-0.00949466);
}

double NNfunction_sRg::synapse0x341a540() {
   return (neuron0x340b890()*-0.54819);
}

double NNfunction_sRg::synapse0x341a580() {
   return (neuron0x340bbd0()*-0.00689308);
}

double NNfunction_sRg::synapse0x341a5c0() {
   return (neuron0x340bf10()*0.0159827);
}

double NNfunction_sRg::synapse0x341a600() {
   return (neuron0x340c250()*-0.00175913);
}

double NNfunction_sRg::synapse0x341a640() {
   return (neuron0x340c590()*0.00685394);
}

double NNfunction_sRg::synapse0x341a680() {
   return (neuron0x340c8d0()*-0.0115192);
}

double NNfunction_sRg::synapse0x341aa00() {
   return (neuron0x3407d10()*0.00729938);
}

double NNfunction_sRg::synapse0x341aa40() {
   return (neuron0x3408050()*0.00864028);
}

double NNfunction_sRg::synapse0x341aa80() {
   return (neuron0x3408390()*-0.0132358);
}

double NNfunction_sRg::synapse0x341aac0() {
   return (neuron0x34086d0()*-0.442155);
}

double NNfunction_sRg::synapse0x341ab00() {
   return (neuron0x3408a10()*-0.0040722);
}

double NNfunction_sRg::synapse0x341ab40() {
   return (neuron0x3408d50()*0.0390017);
}

double NNfunction_sRg::synapse0x341ab80() {
   return (neuron0x3409090()*-0.0183727);
}

double NNfunction_sRg::synapse0x341abc0() {
   return (neuron0x34093d0()*-0.0360065);
}

double NNfunction_sRg::synapse0x341ac00() {
   return (neuron0x3409710()*-0.0477532);
}

double NNfunction_sRg::synapse0x341ac40() {
   return (neuron0x3409a50()*0.43025);
}

double NNfunction_sRg::synapse0x341ac80() {
   return (neuron0x3409d90()*-0.0926714);
}

double NNfunction_sRg::synapse0x341acc0() {
   return (neuron0x340a0d0()*-0.0532319);
}

double NNfunction_sRg::synapse0x341ad00() {
   return (neuron0x340a410()*-0.0407328);
}

double NNfunction_sRg::synapse0x341ad40() {
   return (neuron0x340a750()*0.00146269);
}

double NNfunction_sRg::synapse0x341ad80() {
   return (neuron0x340aa90()*-0.000123691);
}

double NNfunction_sRg::synapse0x341adc0() {
   return (neuron0x340add0()*-0.00697034);
}

double NNfunction_sRg::synapse0x341a850() {
   return (neuron0x340b110()*0.043352);
}

double NNfunction_sRg::synapse0x341a890() {
   return (neuron0x340b670()*-0.0160575);
}

double NNfunction_sRg::synapse0x341af10() {
   return (neuron0x340b890()*-0.239075);
}

double NNfunction_sRg::synapse0x341af50() {
   return (neuron0x340bbd0()*-0.0391111);
}

double NNfunction_sRg::synapse0x341af90() {
   return (neuron0x340bf10()*-0.0135689);
}

double NNfunction_sRg::synapse0x341afd0() {
   return (neuron0x340c250()*-0.0136942);
}

double NNfunction_sRg::synapse0x341b010() {
   return (neuron0x340c590()*-0.00258174);
}

double NNfunction_sRg::synapse0x341b050() {
   return (neuron0x340c8d0()*0.0103544);
}

double NNfunction_sRg::synapse0x341b3d0() {
   return (neuron0x3407d10()*0.0203367);
}

double NNfunction_sRg::synapse0x341b410() {
   return (neuron0x3408050()*0.104433);
}

double NNfunction_sRg::synapse0x341b450() {
   return (neuron0x3408390()*0.0308537);
}

double NNfunction_sRg::synapse0x341b490() {
   return (neuron0x34086d0()*0.124957);
}

double NNfunction_sRg::synapse0x341b4d0() {
   return (neuron0x3408a10()*0.058159);
}

double NNfunction_sRg::synapse0x341b510() {
   return (neuron0x3408d50()*0.0392675);
}

double NNfunction_sRg::synapse0x341b550() {
   return (neuron0x3409090()*0.0231544);
}

double NNfunction_sRg::synapse0x341b590() {
   return (neuron0x34093d0()*0.0672923);
}

double NNfunction_sRg::synapse0x341b5d0() {
   return (neuron0x3409710()*0.0228895);
}

double NNfunction_sRg::synapse0x3413790() {
   return (neuron0x3409a50()*0.00668302);
}

double NNfunction_sRg::synapse0x34137d0() {
   return (neuron0x3409d90()*0.00937658);
}

double NNfunction_sRg::synapse0x3413810() {
   return (neuron0x340a0d0()*0.017782);
}

double NNfunction_sRg::synapse0x3413850() {
   return (neuron0x340a410()*0.0199773);
}

double NNfunction_sRg::synapse0x3413890() {
   return (neuron0x340a750()*0.0940444);
}

double NNfunction_sRg::synapse0x34138d0() {
   return (neuron0x340aa90()*-0.894874);
}

double NNfunction_sRg::synapse0x3413910() {
   return (neuron0x340add0()*0.0778807);
}

double NNfunction_sRg::synapse0x341b220() {
   return (neuron0x340b110()*0.00230021);
}

double NNfunction_sRg::synapse0x341b260() {
   return (neuron0x340b670()*0.0126619);
}

double NNfunction_sRg::synapse0x3413a60() {
   return (neuron0x340b890()*0.275017);
}

double NNfunction_sRg::synapse0x3413aa0() {
   return (neuron0x340bbd0()*-0.0215984);
}

double NNfunction_sRg::synapse0x3413ae0() {
   return (neuron0x340bf10()*0.0149246);
}

double NNfunction_sRg::synapse0x3413b20() {
   return (neuron0x340c250()*0.00791524);
}

double NNfunction_sRg::synapse0x3413b60() {
   return (neuron0x340c590()*0.0193193);
}

double NNfunction_sRg::synapse0x3413ba0() {
   return (neuron0x340c8d0()*-0.0107873);
}

double NNfunction_sRg::synapse0x3413f20() {
   return (neuron0x3407d10()*0.349523);
}

double NNfunction_sRg::synapse0x3413f60() {
   return (neuron0x3408050()*0.0801011);
}

double NNfunction_sRg::synapse0x3413fa0() {
   return (neuron0x3408390()*-0.219222);
}

double NNfunction_sRg::synapse0x3413fe0() {
   return (neuron0x34086d0()*-0.133882);
}

double NNfunction_sRg::synapse0x3414020() {
   return (neuron0x3408a10()*-0.0120252);
}

double NNfunction_sRg::synapse0x3414060() {
   return (neuron0x3408d50()*-0.207129);
}

double NNfunction_sRg::synapse0x34140a0() {
   return (neuron0x3409090()*-0.109594);
}

double NNfunction_sRg::synapse0x34140e0() {
   return (neuron0x34093d0()*-0.254319);
}

double NNfunction_sRg::synapse0x3414120() {
   return (neuron0x3409710()*-0.0116281);
}

double NNfunction_sRg::synapse0x3414160() {
   return (neuron0x3409a50()*0.215975);
}

double NNfunction_sRg::synapse0x34141a0() {
   return (neuron0x3409d90()*0.190444);
}

double NNfunction_sRg::synapse0x34141e0() {
   return (neuron0x340a0d0()*-0.0557479);
}

double NNfunction_sRg::synapse0x3414220() {
   return (neuron0x340a410()*0.209759);
}

double NNfunction_sRg::synapse0x3414260() {
   return (neuron0x340a750()*-0.112199);
}

double NNfunction_sRg::synapse0x34142a0() {
   return (neuron0x340aa90()*-0.0270072);
}

double NNfunction_sRg::synapse0x34142e0() {
   return (neuron0x340add0()*-0.344231);
}

double NNfunction_sRg::synapse0x3413d70() {
   return (neuron0x340b110()*-0.113441);
}

double NNfunction_sRg::synapse0x3413db0() {
   return (neuron0x340b670()*0.260154);
}

double NNfunction_sRg::synapse0x3414430() {
   return (neuron0x340b890()*0.225277);
}

double NNfunction_sRg::synapse0x3414470() {
   return (neuron0x340bbd0()*-0.0439619);
}

double NNfunction_sRg::synapse0x34144b0() {
   return (neuron0x340bf10()*0.250677);
}

double NNfunction_sRg::synapse0x34144f0() {
   return (neuron0x340c250()*-0.148539);
}

double NNfunction_sRg::synapse0x3414530() {
   return (neuron0x340c590()*0.09062);
}

double NNfunction_sRg::synapse0x3414570() {
   return (neuron0x340c8d0()*-0.382263);
}

double NNfunction_sRg::synapse0x3414740() {
   return (neuron0x3407d10()*0.0478546);
}

double NNfunction_sRg::synapse0x341d7d0() {
   return (neuron0x3408050()*-0.0597345);
}

double NNfunction_sRg::synapse0x341d810() {
   return (neuron0x3408390()*-0.0152767);
}

double NNfunction_sRg::synapse0x341d850() {
   return (neuron0x34086d0()*-1.65021);
}

double NNfunction_sRg::synapse0x341d890() {
   return (neuron0x3408a10()*0.0214664);
}

double NNfunction_sRg::synapse0x341d8d0() {
   return (neuron0x3408d50()*0.0551162);
}

double NNfunction_sRg::synapse0x341d910() {
   return (neuron0x3409090()*0.116583);
}

double NNfunction_sRg::synapse0x341d950() {
   return (neuron0x34093d0()*0.11826);
}

double NNfunction_sRg::synapse0x341d990() {
   return (neuron0x3409710()*-0.0914688);
}

double NNfunction_sRg::synapse0x341d9d0() {
   return (neuron0x3409a50()*-0.0135802);
}

double NNfunction_sRg::synapse0x341da10() {
   return (neuron0x3409d90()*0.0376685);
}

double NNfunction_sRg::synapse0x341da50() {
   return (neuron0x340a0d0()*0.148578);
}

double NNfunction_sRg::synapse0x341da90() {
   return (neuron0x340a410()*0.233285);
}

double NNfunction_sRg::synapse0x341dad0() {
   return (neuron0x340a750()*-0.05952);
}

double NNfunction_sRg::synapse0x341db10() {
   return (neuron0x340aa90()*0.000532396);
}

double NNfunction_sRg::synapse0x341db50() {
   return (neuron0x340add0()*0.0216036);
}

double NNfunction_sRg::synapse0x341d620() {
   return (neuron0x340b110()*-0.0828748);
}

double NNfunction_sRg::synapse0x341d660() {
   return (neuron0x340b670()*0.0430798);
}

double NNfunction_sRg::synapse0x341dca0() {
   return (neuron0x340b890()*-0.285058);
}

double NNfunction_sRg::synapse0x341dce0() {
   return (neuron0x340bbd0()*-0.00160656);
}

double NNfunction_sRg::synapse0x341dd20() {
   return (neuron0x340bf10()*-0.0422201);
}

double NNfunction_sRg::synapse0x341dd60() {
   return (neuron0x340c250()*0.00158305);
}

double NNfunction_sRg::synapse0x341dda0() {
   return (neuron0x340c590()*0.0213476);
}

double NNfunction_sRg::synapse0x341dde0() {
   return (neuron0x340c8d0()*-0.0210793);
}

double NNfunction_sRg::synapse0x341e160() {
   return (neuron0x3407d10()*0.000576532);
}

double NNfunction_sRg::synapse0x341e1a0() {
   return (neuron0x3408050()*0.00216608);
}

double NNfunction_sRg::synapse0x341e1e0() {
   return (neuron0x3408390()*0.0120798);
}

double NNfunction_sRg::synapse0x341e220() {
   return (neuron0x34086d0()*0.922199);
}

double NNfunction_sRg::synapse0x341e260() {
   return (neuron0x3408a10()*-0.0162365);
}

double NNfunction_sRg::synapse0x341e2a0() {
   return (neuron0x3408d50()*0.00439258);
}

double NNfunction_sRg::synapse0x341e2e0() {
   return (neuron0x3409090()*-0.00288136);
}

double NNfunction_sRg::synapse0x341e320() {
   return (neuron0x34093d0()*-0.0118166);
}

double NNfunction_sRg::synapse0x341e360() {
   return (neuron0x3409710()*0.066156);
}

double NNfunction_sRg::synapse0x341e3a0() {
   return (neuron0x3409a50()*0.00108585);
}

double NNfunction_sRg::synapse0x341e3e0() {
   return (neuron0x3409d90()*-0.0453037);
}

double NNfunction_sRg::synapse0x341e420() {
   return (neuron0x340a0d0()*-0.0510543);
}

double NNfunction_sRg::synapse0x341e460() {
   return (neuron0x340a410()*-0.0691039);
}

double NNfunction_sRg::synapse0x341e4a0() {
   return (neuron0x340a750()*-0.00378691);
}

double NNfunction_sRg::synapse0x341e4e0() {
   return (neuron0x340aa90()*0.0244556);
}

double NNfunction_sRg::synapse0x341e520() {
   return (neuron0x340add0()*0.0480672);
}

double NNfunction_sRg::synapse0x341dfb0() {
   return (neuron0x340b110()*-0.00816185);
}

double NNfunction_sRg::synapse0x341dff0() {
   return (neuron0x340b670()*-0.0384438);
}

double NNfunction_sRg::synapse0x341e670() {
   return (neuron0x340b890()*-0.489249);
}

double NNfunction_sRg::synapse0x341e6b0() {
   return (neuron0x340bbd0()*-0.00719107);
}

double NNfunction_sRg::synapse0x341e6f0() {
   return (neuron0x340bf10()*0.00364063);
}

double NNfunction_sRg::synapse0x341e730() {
   return (neuron0x340c250()*-0.00243275);
}

double NNfunction_sRg::synapse0x341e770() {
   return (neuron0x340c590()*-0.00159157);
}

double NNfunction_sRg::synapse0x341e7b0() {
   return (neuron0x340c8d0()*0.0119743);
}

double NNfunction_sRg::synapse0x341eb30() {
   return (neuron0x3407d10()*0.0307415);
}

double NNfunction_sRg::synapse0x341eb70() {
   return (neuron0x3408050()*-0.057104);
}

double NNfunction_sRg::synapse0x341ebb0() {
   return (neuron0x3408390()*0.0287237);
}

double NNfunction_sRg::synapse0x341ebf0() {
   return (neuron0x34086d0()*-0.649195);
}

double NNfunction_sRg::synapse0x341ec30() {
   return (neuron0x3408a10()*-0.24342);
}

double NNfunction_sRg::synapse0x341ec70() {
   return (neuron0x3408d50()*0.096579);
}

double NNfunction_sRg::synapse0x341ecb0() {
   return (neuron0x3409090()*0.0891968);
}

double NNfunction_sRg::synapse0x341ecf0() {
   return (neuron0x34093d0()*0.165749);
}

double NNfunction_sRg::synapse0x341ed30() {
   return (neuron0x3409710()*0.0759485);
}

double NNfunction_sRg::synapse0x341ed70() {
   return (neuron0x3409a50()*-0.0953375);
}

double NNfunction_sRg::synapse0x341edb0() {
   return (neuron0x3409d90()*-0.159126);
}

double NNfunction_sRg::synapse0x341edf0() {
   return (neuron0x340a0d0()*0.2061);
}

double NNfunction_sRg::synapse0x341ee30() {
   return (neuron0x340a410()*0.147323);
}

double NNfunction_sRg::synapse0x341ee70() {
   return (neuron0x340a750()*0.238407);
}

double NNfunction_sRg::synapse0x341eeb0() {
   return (neuron0x340aa90()*0.282353);
}

double NNfunction_sRg::synapse0x341eef0() {
   return (neuron0x340add0()*0.164636);
}

double NNfunction_sRg::synapse0x341e980() {
   return (neuron0x340b110()*0.260698);
}

double NNfunction_sRg::synapse0x341e9c0() {
   return (neuron0x340b670()*0.00679729);
}

double NNfunction_sRg::synapse0x341f040() {
   return (neuron0x340b890()*0.22635);
}

double NNfunction_sRg::synapse0x341f080() {
   return (neuron0x340bbd0()*0.150089);
}

double NNfunction_sRg::synapse0x341f0c0() {
   return (neuron0x340bf10()*0.179968);
}

double NNfunction_sRg::synapse0x341f100() {
   return (neuron0x340c250()*0.0691024);
}

double NNfunction_sRg::synapse0x341f140() {
   return (neuron0x340c590()*0.0987464);
}

double NNfunction_sRg::synapse0x341f180() {
   return (neuron0x340c8d0()*0.028797);
}

double NNfunction_sRg::synapse0x341f500() {
   return (neuron0x3407d10()*-0.00562229);
}

double NNfunction_sRg::synapse0x341f540() {
   return (neuron0x3408050()*-0.00301172);
}

double NNfunction_sRg::synapse0x341f580() {
   return (neuron0x3408390()*-0.00442183);
}

double NNfunction_sRg::synapse0x341f5c0() {
   return (neuron0x34086d0()*-1.47745);
}

double NNfunction_sRg::synapse0x341f600() {
   return (neuron0x3408a10()*-0.00458979);
}

double NNfunction_sRg::synapse0x341f640() {
   return (neuron0x3408d50()*0.00476495);
}

double NNfunction_sRg::synapse0x341f680() {
   return (neuron0x3409090()*0.00563327);
}

double NNfunction_sRg::synapse0x341f6c0() {
   return (neuron0x34093d0()*0.00995846);
}

double NNfunction_sRg::synapse0x341f700() {
   return (neuron0x3409710()*0.0329932);
}

double NNfunction_sRg::synapse0x341f740() {
   return (neuron0x3409a50()*-0.00050383);
}

double NNfunction_sRg::synapse0x341f780() {
   return (neuron0x3409d90()*-0.016375);
}

double NNfunction_sRg::synapse0x341f7c0() {
   return (neuron0x340a0d0()*0.00917974);
}

double NNfunction_sRg::synapse0x341f800() {
   return (neuron0x340a410()*0.0168146);
}

double NNfunction_sRg::synapse0x341f840() {
   return (neuron0x340a750()*2.03446e-05);
}

double NNfunction_sRg::synapse0x341f880() {
   return (neuron0x340aa90()*0.00105401);
}

double NNfunction_sRg::synapse0x341f8c0() {
   return (neuron0x340add0()*0.0129458);
}

double NNfunction_sRg::synapse0x341f350() {
   return (neuron0x340b110()*-0.013932);
}

double NNfunction_sRg::synapse0x341f390() {
   return (neuron0x340b670()*0.00578833);
}

double NNfunction_sRg::synapse0x341fa10() {
   return (neuron0x340b890()*-1.41163);
}

double NNfunction_sRg::synapse0x341fa50() {
   return (neuron0x340bbd0()*-0.00023955);
}

double NNfunction_sRg::synapse0x341fa90() {
   return (neuron0x340bf10()*-0.00115759);
}

double NNfunction_sRg::synapse0x341fad0() {
   return (neuron0x340c250()*0.00359435);
}

double NNfunction_sRg::synapse0x341fb10() {
   return (neuron0x340c590()*-0.00145889);
}

double NNfunction_sRg::synapse0x341fb50() {
   return (neuron0x340c8d0()*0.00631971);
}

double NNfunction_sRg::synapse0x341fed0() {
   return (neuron0x3407d10()*0.018739);
}

double NNfunction_sRg::synapse0x341ff10() {
   return (neuron0x3408050()*0.0295349);
}

double NNfunction_sRg::synapse0x341ff50() {
   return (neuron0x3408390()*0.335715);
}

double NNfunction_sRg::synapse0x341ff90() {
   return (neuron0x34086d0()*-0.437987);
}

double NNfunction_sRg::synapse0x341ffd0() {
   return (neuron0x3408a10()*0.548345);
}

double NNfunction_sRg::synapse0x3420010() {
   return (neuron0x3408d50()*-0.103175);
}

double NNfunction_sRg::synapse0x3420050() {
   return (neuron0x3409090()*-0.46429);
}

double NNfunction_sRg::synapse0x3420090() {
   return (neuron0x34093d0()*0.854733);
}

double NNfunction_sRg::synapse0x34200d0() {
   return (neuron0x3409710()*0.336444);
}

double NNfunction_sRg::synapse0x3420110() {
   return (neuron0x3409a50()*0.129277);
}

double NNfunction_sRg::synapse0x3420150() {
   return (neuron0x3409d90()*-0.062176);
}

double NNfunction_sRg::synapse0x3420190() {
   return (neuron0x340a0d0()*-0.349698);
}

double NNfunction_sRg::synapse0x34201d0() {
   return (neuron0x340a410()*0.149094);
}

double NNfunction_sRg::synapse0x3420210() {
   return (neuron0x340a750()*0.232124);
}

double NNfunction_sRg::synapse0x3420250() {
   return (neuron0x340aa90()*0.153587);
}

double NNfunction_sRg::synapse0x3420290() {
   return (neuron0x340add0()*-0.0130245);
}

double NNfunction_sRg::synapse0x341fd20() {
   return (neuron0x340b110()*-0.477477);
}

double NNfunction_sRg::synapse0x341fd60() {
   return (neuron0x340b670()*-0.16201);
}

double NNfunction_sRg::synapse0x34203e0() {
   return (neuron0x340b890()*1.01557);
}

double NNfunction_sRg::synapse0x3420420() {
   return (neuron0x340bbd0()*-0.562955);
}

double NNfunction_sRg::synapse0x3420460() {
   return (neuron0x340bf10()*0.0896454);
}

double NNfunction_sRg::synapse0x34204a0() {
   return (neuron0x340c250()*0.375827);
}

double NNfunction_sRg::synapse0x34204e0() {
   return (neuron0x340c590()*-0.146117);
}

double NNfunction_sRg::synapse0x3420520() {
   return (neuron0x340c8d0()*0.0993554);
}

double NNfunction_sRg::synapse0x34208a0() {
   return (neuron0x3407d10()*0.0112967);
}

double NNfunction_sRg::synapse0x34208e0() {
   return (neuron0x3408050()*-0.0111186);
}

double NNfunction_sRg::synapse0x3420920() {
   return (neuron0x3408390()*0.0029685);
}

double NNfunction_sRg::synapse0x3420960() {
   return (neuron0x34086d0()*-1.62986);
}

double NNfunction_sRg::synapse0x34209a0() {
   return (neuron0x3408a10()*-0.0123971);
}

double NNfunction_sRg::synapse0x34209e0() {
   return (neuron0x3408d50()*0.0400871);
}

double NNfunction_sRg::synapse0x3420a20() {
   return (neuron0x3409090()*0.0445568);
}

double NNfunction_sRg::synapse0x3420a60() {
   return (neuron0x34093d0()*0.0594875);
}

double NNfunction_sRg::synapse0x3420aa0() {
   return (neuron0x3409710()*-0.0312485);
}

double NNfunction_sRg::synapse0x3420ae0() {
   return (neuron0x3409a50()*0.0777299);
}

double NNfunction_sRg::synapse0x3420b20() {
   return (neuron0x3409d90()*0.0208084);
}

double NNfunction_sRg::synapse0x3420b60() {
   return (neuron0x340a0d0()*-0.399406);
}

double NNfunction_sRg::synapse0x3420ba0() {
   return (neuron0x340a410()*-0.371966);
}

double NNfunction_sRg::synapse0x3420be0() {
   return (neuron0x340a750()*0.0835341);
}

double NNfunction_sRg::synapse0x3420c20() {
   return (neuron0x340aa90()*-0.188488);
}

double NNfunction_sRg::synapse0x3420c60() {
   return (neuron0x340add0()*-0.145691);
}

double NNfunction_sRg::synapse0x34206f0() {
   return (neuron0x340b110()*0.0293524);
}

double NNfunction_sRg::synapse0x3420730() {
   return (neuron0x340b670()*-0.190403);
}

double NNfunction_sRg::synapse0x3420db0() {
   return (neuron0x340b890()*-0.0672411);
}

double NNfunction_sRg::synapse0x3420df0() {
   return (neuron0x340bbd0()*0.0138363);
}

double NNfunction_sRg::synapse0x3420e30() {
   return (neuron0x340bf10()*-0.00327315);
}

double NNfunction_sRg::synapse0x3420e70() {
   return (neuron0x340c250()*-0.00175727);
}

double NNfunction_sRg::synapse0x3420eb0() {
   return (neuron0x340c590()*-0.00172965);
}

double NNfunction_sRg::synapse0x3420ef0() {
   return (neuron0x340c8d0()*-0.00218882);
}

double NNfunction_sRg::synapse0x3421270() {
   return (neuron0x3407d10()*-0.148642);
}

double NNfunction_sRg::synapse0x34212b0() {
   return (neuron0x3408050()*0.116958);
}

double NNfunction_sRg::synapse0x34212f0() {
   return (neuron0x3408390()*0.0812964);
}

double NNfunction_sRg::synapse0x3421330() {
   return (neuron0x34086d0()*-0.367201);
}

double NNfunction_sRg::synapse0x3421370() {
   return (neuron0x3408a10()*0.516957);
}

double NNfunction_sRg::synapse0x34213b0() {
   return (neuron0x3408d50()*0.18607);
}

double NNfunction_sRg::synapse0x34213f0() {
   return (neuron0x3409090()*-0.546577);
}

double NNfunction_sRg::synapse0x3421430() {
   return (neuron0x34093d0()*0.34814);
}

double NNfunction_sRg::synapse0x3421470() {
   return (neuron0x3409710()*0.407407);
}

double NNfunction_sRg::synapse0x34214b0() {
   return (neuron0x3409a50()*0.202415);
}

double NNfunction_sRg::synapse0x34214f0() {
   return (neuron0x3409d90()*-0.323984);
}

double NNfunction_sRg::synapse0x3421530() {
   return (neuron0x340a0d0()*0.126195);
}

double NNfunction_sRg::synapse0x3421570() {
   return (neuron0x340a410()*0.464496);
}

double NNfunction_sRg::synapse0x34215b0() {
   return (neuron0x340a750()*0.145165);
}

double NNfunction_sRg::synapse0x34215f0() {
   return (neuron0x340aa90()*-0.284599);
}

double NNfunction_sRg::synapse0x3421630() {
   return (neuron0x340add0()*0.191971);
}

double NNfunction_sRg::synapse0x34210c0() {
   return (neuron0x340b110()*-0.753169);
}

double NNfunction_sRg::synapse0x3421100() {
   return (neuron0x340b670()*0.310442);
}

double NNfunction_sRg::synapse0x3421780() {
   return (neuron0x340b890()*0.048404);
}

double NNfunction_sRg::synapse0x34217c0() {
   return (neuron0x340bbd0()*0.279932);
}

double NNfunction_sRg::synapse0x3421800() {
   return (neuron0x340bf10()*-0.161634);
}

double NNfunction_sRg::synapse0x3421840() {
   return (neuron0x340c250()*-0.120405);
}

double NNfunction_sRg::synapse0x3421880() {
   return (neuron0x340c590()*0.203939);
}

double NNfunction_sRg::synapse0x34218c0() {
   return (neuron0x340c8d0()*0.32824);
}

double NNfunction_sRg::synapse0x3421c40() {
   return (neuron0x3407d10()*0.0299332);
}

double NNfunction_sRg::synapse0x3421c80() {
   return (neuron0x3408050()*0.0261536);
}

double NNfunction_sRg::synapse0x3421cc0() {
   return (neuron0x3408390()*-0.036505);
}

double NNfunction_sRg::synapse0x3421d00() {
   return (neuron0x34086d0()*-1.1058);
}

double NNfunction_sRg::synapse0x3421d40() {
   return (neuron0x3408a10()*-0.0445385);
}

double NNfunction_sRg::synapse0x3421d80() {
   return (neuron0x3408d50()*0.0233841);
}

double NNfunction_sRg::synapse0x3421dc0() {
   return (neuron0x3409090()*0.0336098);
}

double NNfunction_sRg::synapse0x3421e00() {
   return (neuron0x34093d0()*-0.0262971);
}

double NNfunction_sRg::synapse0x3421e40() {
   return (neuron0x3409710()*-0.290486);
}

double NNfunction_sRg::synapse0x3421e80() {
   return (neuron0x3409a50()*-0.00578543);
}

double NNfunction_sRg::synapse0x3421ec0() {
   return (neuron0x3409d90()*0.19316);
}

double NNfunction_sRg::synapse0x3421f00() {
   return (neuron0x340a0d0()*0.049614);
}

double NNfunction_sRg::synapse0x3421f40() {
   return (neuron0x340a410()*0.0688933);
}

double NNfunction_sRg::synapse0x3421f80() {
   return (neuron0x340a750()*-0.0319599);
}

double NNfunction_sRg::synapse0x3421fc0() {
   return (neuron0x340aa90()*0.0261007);
}

double NNfunction_sRg::synapse0x3422000() {
   return (neuron0x340add0()*-0.0449159);
}

double NNfunction_sRg::synapse0x3421a90() {
   return (neuron0x340b110()*-0.00870861);
}

double NNfunction_sRg::synapse0x3421ad0() {
   return (neuron0x340b670()*0.0356351);
}

double NNfunction_sRg::synapse0x3422150() {
   return (neuron0x340b890()*-0.639479);
}

double NNfunction_sRg::synapse0x3422190() {
   return (neuron0x340bbd0()*0.0121364);
}

double NNfunction_sRg::synapse0x34221d0() {
   return (neuron0x340bf10()*-0.0220857);
}

double NNfunction_sRg::synapse0x3422210() {
   return (neuron0x340c250()*-0.00620317);
}

double NNfunction_sRg::synapse0x3422250() {
   return (neuron0x340c590()*0.0128599);
}

double NNfunction_sRg::synapse0x3422290() {
   return (neuron0x340c8d0()*-0.0387561);
}

double NNfunction_sRg::synapse0x3422610() {
   return (neuron0x3407d10()*-0.0436807);
}

double NNfunction_sRg::synapse0x3416be0() {
   return (neuron0x3408050()*-0.00795505);
}

double NNfunction_sRg::synapse0x3416c20() {
   return (neuron0x3408390()*0.00652405);
}

double NNfunction_sRg::synapse0x3416c60() {
   return (neuron0x34086d0()*-0.231569);
}

double NNfunction_sRg::synapse0x3416eb0() {
   return (neuron0x3408a10()*0.0283614);
}

double NNfunction_sRg::synapse0x3416ef0() {
   return (neuron0x3408d50()*0.05158);
}

double NNfunction_sRg::synapse0x3416f30() {
   return (neuron0x3409090()*0.0192727);
}

double NNfunction_sRg::synapse0x3417180() {
   return (neuron0x34093d0()*-0.00134225);
}

double NNfunction_sRg::synapse0x34171c0() {
   return (neuron0x3409710()*-0.0879742);
}

double NNfunction_sRg::synapse0x3417410() {
   return (neuron0x3409a50()*-0.0994379);
}

double NNfunction_sRg::synapse0x3417450() {
   return (neuron0x3409d90()*-0.2712);
}

double NNfunction_sRg::synapse0x3417490() {
   return (neuron0x340a0d0()*0.0709819);
}

double NNfunction_sRg::synapse0x34176e0() {
   return (neuron0x340a410()*0.06592);
}

double NNfunction_sRg::synapse0x3417720() {
   return (neuron0x340a750()*0.104);
}

double NNfunction_sRg::synapse0x3417970() {
   return (neuron0x340aa90()*0.0378172);
}

double NNfunction_sRg::synapse0x34179b0() {
   return (neuron0x340add0()*0.0650718);
}

double NNfunction_sRg::synapse0x3422460() {
   return (neuron0x340b110()*0.0455612);
}

double NNfunction_sRg::synapse0x34224a0() {
   return (neuron0x340b670()*0.133379);
}

double NNfunction_sRg::synapse0x3417b00() {
   return (neuron0x340b890()*-0.398351);
}

double NNfunction_sRg::synapse0x3418010() {
   return (neuron0x340bbd0()*0.0779444);
}

double NNfunction_sRg::synapse0x3418050() {
   return (neuron0x340bf10()*-0.00492636);
}

double NNfunction_sRg::synapse0x3418090() {
   return (neuron0x340c250()*0.00752765);
}

double NNfunction_sRg::synapse0x34182e0() {
   return (neuron0x340c590()*0.0204825);
}

double NNfunction_sRg::synapse0x3418320() {
   return (neuron0x340c8d0()*0.028746);
}

double NNfunction_sRg::synapse0x3417bd0() {
   return (neuron0x3407d10()*0.021088);
}

double NNfunction_sRg::synapse0x3417c10() {
   return (neuron0x3408050()*0.412831);
}

double NNfunction_sRg::synapse0x3417c50() {
   return (neuron0x3408390()*0.0147506);
}

double NNfunction_sRg::synapse0x3417c90() {
   return (neuron0x34086d0()*-0.535486);
}

double NNfunction_sRg::synapse0x3418610() {
   return (neuron0x3408a10()*0.00786426);
}

double NNfunction_sRg::synapse0x3424960() {
   return (neuron0x3408d50()*0.118523);
}

double NNfunction_sRg::synapse0x34249a0() {
   return (neuron0x3409090()*-0.0490346);
}

double NNfunction_sRg::synapse0x34249e0() {
   return (neuron0x34093d0()*0.0665887);
}

double NNfunction_sRg::synapse0x3424a20() {
   return (neuron0x3409710()*-0.000297336);
}

double NNfunction_sRg::synapse0x3424a60() {
   return (neuron0x3409a50()*-0.00732061);
}

double NNfunction_sRg::synapse0x3424aa0() {
   return (neuron0x3409d90()*-0.0155599);
}

double NNfunction_sRg::synapse0x3424ae0() {
   return (neuron0x340a0d0()*-0.0276116);
}

double NNfunction_sRg::synapse0x3424b20() {
   return (neuron0x340a410()*-0.0628694);
}

double NNfunction_sRg::synapse0x3424b60() {
   return (neuron0x340a750()*-0.0277728);
}

double NNfunction_sRg::synapse0x3424ba0() {
   return (neuron0x340aa90()*0.35698);
}

double NNfunction_sRg::synapse0x3424be0() {
   return (neuron0x340add0()*0.239036);
}

double NNfunction_sRg::synapse0x34184f0() {
   return (neuron0x340b110()*0.043609);
}

double NNfunction_sRg::synapse0x3418530() {
   return (neuron0x340b670()*-0.00388549);
}

double NNfunction_sRg::synapse0x3424d30() {
   return (neuron0x340b890()*-0.711819);
}

double NNfunction_sRg::synapse0x3424d70() {
   return (neuron0x340bbd0()*-0.0290044);
}

double NNfunction_sRg::synapse0x3424db0() {
   return (neuron0x340bf10()*0.0270377);
}

double NNfunction_sRg::synapse0x3424df0() {
   return (neuron0x340c250()*-0.00685871);
}

double NNfunction_sRg::synapse0x3424e30() {
   return (neuron0x340c590()*-0.032031);
}

double NNfunction_sRg::synapse0x3424e70() {
   return (neuron0x340c8d0()*-0.034877);
}

double NNfunction_sRg::synapse0x34251f0() {
   return (neuron0x3407d10()*0.136749);
}

double NNfunction_sRg::synapse0x3425230() {
   return (neuron0x3408050()*-0.448746);
}

double NNfunction_sRg::synapse0x3425270() {
   return (neuron0x3408390()*-0.276464);
}

double NNfunction_sRg::synapse0x34252b0() {
   return (neuron0x34086d0()*0.0664875);
}

double NNfunction_sRg::synapse0x34252f0() {
   return (neuron0x3408a10()*0.164095);
}

double NNfunction_sRg::synapse0x3425330() {
   return (neuron0x3408d50()*0.656553);
}

double NNfunction_sRg::synapse0x3425370() {
   return (neuron0x3409090()*-0.180794);
}

double NNfunction_sRg::synapse0x34253b0() {
   return (neuron0x34093d0()*-0.357895);
}

double NNfunction_sRg::synapse0x34253f0() {
   return (neuron0x3409710()*-0.294654);
}

double NNfunction_sRg::synapse0x3425430() {
   return (neuron0x3409a50()*-0.386577);
}

double NNfunction_sRg::synapse0x3425470() {
   return (neuron0x3409d90()*-0.292267);
}

double NNfunction_sRg::synapse0x34254b0() {
   return (neuron0x340a0d0()*0.170492);
}

double NNfunction_sRg::synapse0x34254f0() {
   return (neuron0x340a410()*0.275847);
}

double NNfunction_sRg::synapse0x3425530() {
   return (neuron0x340a750()*0.468415);
}

double NNfunction_sRg::synapse0x3425570() {
   return (neuron0x340aa90()*0.326874);
}

double NNfunction_sRg::synapse0x34255b0() {
   return (neuron0x340add0()*-0.342422);
}

double NNfunction_sRg::synapse0x3425040() {
   return (neuron0x340b110()*-0.191034);
}

double NNfunction_sRg::synapse0x3425080() {
   return (neuron0x340b670()*0.243343);
}

double NNfunction_sRg::synapse0x3425700() {
   return (neuron0x340b890()*-0.0263455);
}

double NNfunction_sRg::synapse0x3425740() {
   return (neuron0x340bbd0()*0.152818);
}

double NNfunction_sRg::synapse0x3425780() {
   return (neuron0x340bf10()*0.235583);
}

double NNfunction_sRg::synapse0x34257c0() {
   return (neuron0x340c250()*0.13294);
}

double NNfunction_sRg::synapse0x3425800() {
   return (neuron0x340c590()*-0.157072);
}

double NNfunction_sRg::synapse0x3425840() {
   return (neuron0x340c8d0()*-0.102393);
}

double NNfunction_sRg::synapse0x3425bc0() {
   return (neuron0x3407d10()*-0.0297541);
}

double NNfunction_sRg::synapse0x3425c00() {
   return (neuron0x3408050()*0.137645);
}

double NNfunction_sRg::synapse0x3425c40() {
   return (neuron0x3408390()*-0.0385011);
}

double NNfunction_sRg::synapse0x3425c80() {
   return (neuron0x34086d0()*-0.911303);
}

double NNfunction_sRg::synapse0x3425cc0() {
   return (neuron0x3408a10()*0.00416277);
}

double NNfunction_sRg::synapse0x3425d00() {
   return (neuron0x3408d50()*0.189474);
}

double NNfunction_sRg::synapse0x3425d40() {
   return (neuron0x3409090()*0.00148411);
}

double NNfunction_sRg::synapse0x3425d80() {
   return (neuron0x34093d0()*0.0158505);
}

double NNfunction_sRg::synapse0x3425dc0() {
   return (neuron0x3409710()*0.0548947);
}

double NNfunction_sRg::synapse0x3425e00() {
   return (neuron0x3409a50()*0.47388);
}

double NNfunction_sRg::synapse0x3425e40() {
   return (neuron0x3409d90()*-0.155223);
}

double NNfunction_sRg::synapse0x3425e80() {
   return (neuron0x340a0d0()*0.0300294);
}

double NNfunction_sRg::synapse0x3425ec0() {
   return (neuron0x340a410()*-0.068675);
}

double NNfunction_sRg::synapse0x3425f00() {
   return (neuron0x340a750()*-0.0534876);
}

double NNfunction_sRg::synapse0x3425f40() {
   return (neuron0x340aa90()*0.107279);
}

double NNfunction_sRg::synapse0x3425f80() {
   return (neuron0x340add0()*0.147531);
}

double NNfunction_sRg::synapse0x3425a10() {
   return (neuron0x340b110()*-0.0349425);
}

double NNfunction_sRg::synapse0x3425a50() {
   return (neuron0x340b670()*-0.0803973);
}

double NNfunction_sRg::synapse0x34260d0() {
   return (neuron0x340b890()*-0.593402);
}

double NNfunction_sRg::synapse0x3426110() {
   return (neuron0x340bbd0()*-0.0867734);
}

double NNfunction_sRg::synapse0x3426150() {
   return (neuron0x340bf10()*-0.0405393);
}

double NNfunction_sRg::synapse0x3426190() {
   return (neuron0x340c250()*-0.0945846);
}

double NNfunction_sRg::synapse0x34261d0() {
   return (neuron0x340c590()*-0.0102034);
}

double NNfunction_sRg::synapse0x3426210() {
   return (neuron0x340c8d0()*0.0484871);
}

double NNfunction_sRg::synapse0x3426590() {
   return (neuron0x3407d10()*0.0463761);
}

double NNfunction_sRg::synapse0x34265d0() {
   return (neuron0x3408050()*0.00864832);
}

double NNfunction_sRg::synapse0x3426610() {
   return (neuron0x3408390()*-0.131346);
}

double NNfunction_sRg::synapse0x3426650() {
   return (neuron0x34086d0()*0.405743);
}

double NNfunction_sRg::synapse0x3426690() {
   return (neuron0x3408a10()*-0.120427);
}

double NNfunction_sRg::synapse0x34266d0() {
   return (neuron0x3408d50()*0.0270528);
}

double NNfunction_sRg::synapse0x3426710() {
   return (neuron0x3409090()*-0.0138944);
}

double NNfunction_sRg::synapse0x3426750() {
   return (neuron0x34093d0()*-0.429049);
}

double NNfunction_sRg::synapse0x3426790() {
   return (neuron0x3409710()*-0.00843419);
}

double NNfunction_sRg::synapse0x34267d0() {
   return (neuron0x3409a50()*0.0198219);
}

double NNfunction_sRg::synapse0x3426810() {
   return (neuron0x3409d90()*0.111335);
}

double NNfunction_sRg::synapse0x3426850() {
   return (neuron0x340a0d0()*0.169035);
}

double NNfunction_sRg::synapse0x3426890() {
   return (neuron0x340a410()*0.118045);
}

double NNfunction_sRg::synapse0x34268d0() {
   return (neuron0x340a750()*-0.361019);
}

double NNfunction_sRg::synapse0x3426910() {
   return (neuron0x340aa90()*-0.060718);
}

double NNfunction_sRg::synapse0x3426950() {
   return (neuron0x340add0()*-0.0959975);
}

double NNfunction_sRg::synapse0x34263e0() {
   return (neuron0x340b110()*-0.981666);
}

double NNfunction_sRg::synapse0x3426420() {
   return (neuron0x340b670()*0.0418985);
}

double NNfunction_sRg::synapse0x3426aa0() {
   return (neuron0x340b890()*-0.398454);
}

double NNfunction_sRg::synapse0x3426ae0() {
   return (neuron0x340bbd0()*0.18519);
}

double NNfunction_sRg::synapse0x3426b20() {
   return (neuron0x340bf10()*-0.00309166);
}

double NNfunction_sRg::synapse0x3426b60() {
   return (neuron0x340c250()*0.032603);
}

double NNfunction_sRg::synapse0x3426ba0() {
   return (neuron0x340c590()*-0.0684638);
}

double NNfunction_sRg::synapse0x3426be0() {
   return (neuron0x340c8d0()*0.012735);
}

double NNfunction_sRg::synapse0x3426f60() {
   return (neuron0x3407d10()*-0.00303702);
}

double NNfunction_sRg::synapse0x3426fa0() {
   return (neuron0x3408050()*-0.000604578);
}

double NNfunction_sRg::synapse0x3426fe0() {
   return (neuron0x3408390()*-0.00999283);
}

double NNfunction_sRg::synapse0x3427020() {
   return (neuron0x34086d0()*1.04706);
}

double NNfunction_sRg::synapse0x3427060() {
   return (neuron0x3408a10()*0.0074432);
}

double NNfunction_sRg::synapse0x34270a0() {
   return (neuron0x3408d50()*0.01175);
}

double NNfunction_sRg::synapse0x34270e0() {
   return (neuron0x3409090()*0.0118241);
}

double NNfunction_sRg::synapse0x3427120() {
   return (neuron0x34093d0()*0.0122971);
}

double NNfunction_sRg::synapse0x3427160() {
   return (neuron0x3409710()*-0.00780631);
}

double NNfunction_sRg::synapse0x34271a0() {
   return (neuron0x3409a50()*-0.00961627);
}

double NNfunction_sRg::synapse0x34271e0() {
   return (neuron0x3409d90()*-0.0134243);
}

double NNfunction_sRg::synapse0x3427220() {
   return (neuron0x340a0d0()*0.0260312);
}

double NNfunction_sRg::synapse0x3427260() {
   return (neuron0x340a410()*0.0416033);
}

double NNfunction_sRg::synapse0x34272a0() {
   return (neuron0x340a750()*0.00100651);
}

double NNfunction_sRg::synapse0x34272e0() {
   return (neuron0x340aa90()*0.0261511);
}

double NNfunction_sRg::synapse0x3427320() {
   return (neuron0x340add0()*0.0140975);
}

double NNfunction_sRg::synapse0x3426db0() {
   return (neuron0x340b110()*-0.0163751);
}

double NNfunction_sRg::synapse0x3426df0() {
   return (neuron0x340b670()*0.0244117);
}

double NNfunction_sRg::synapse0x3427470() {
   return (neuron0x340b890()*-0.669431);
}

double NNfunction_sRg::synapse0x34274b0() {
   return (neuron0x340bbd0()*-0.00810343);
}

double NNfunction_sRg::synapse0x34274f0() {
   return (neuron0x340bf10()*0.00109465);
}

double NNfunction_sRg::synapse0x3427530() {
   return (neuron0x340c250()*0.0081721);
}

double NNfunction_sRg::synapse0x3427570() {
   return (neuron0x340c590()*0.00753996);
}

double NNfunction_sRg::synapse0x34275b0() {
   return (neuron0x340c8d0()*-0.00356292);
}

double NNfunction_sRg::synapse0x3427930() {
   return (neuron0x3407d10()*-0.185485);
}

double NNfunction_sRg::synapse0x3427970() {
   return (neuron0x3408050()*0.0936056);
}

double NNfunction_sRg::synapse0x34279b0() {
   return (neuron0x3408390()*0.0716534);
}

double NNfunction_sRg::synapse0x34279f0() {
   return (neuron0x34086d0()*-0.685736);
}

double NNfunction_sRg::synapse0x3427a30() {
   return (neuron0x3408a10()*-0.0618879);
}

double NNfunction_sRg::synapse0x3427a70() {
   return (neuron0x3408d50()*-0.0683309);
}

double NNfunction_sRg::synapse0x3427ab0() {
   return (neuron0x3409090()*0.111813);
}

double NNfunction_sRg::synapse0x3427af0() {
   return (neuron0x34093d0()*0.0439599);
}

double NNfunction_sRg::synapse0x3427b30() {
   return (neuron0x3409710()*0.218258);
}

double NNfunction_sRg::synapse0x3427b70() {
   return (neuron0x3409a50()*-0.558805);
}

double NNfunction_sRg::synapse0x3427bb0() {
   return (neuron0x3409d90()*-0.0238246);
}

double NNfunction_sRg::synapse0x3427bf0() {
   return (neuron0x340a0d0()*-0.00789544);
}

double NNfunction_sRg::synapse0x3427c30() {
   return (neuron0x340a410()*-0.0262068);
}

double NNfunction_sRg::synapse0x3427c70() {
   return (neuron0x340a750()*0.0196415);
}

double NNfunction_sRg::synapse0x3427cb0() {
   return (neuron0x340aa90()*0.0898842);
}

double NNfunction_sRg::synapse0x3427cf0() {
   return (neuron0x340add0()*0.32381);
}

double NNfunction_sRg::synapse0x3427780() {
   return (neuron0x340b110()*-0.246177);
}

double NNfunction_sRg::synapse0x34277c0() {
   return (neuron0x340b670()*-0.176756);
}

double NNfunction_sRg::synapse0x3427e40() {
   return (neuron0x340b890()*-0.181442);
}

double NNfunction_sRg::synapse0x3427e80() {
   return (neuron0x340bbd0()*0.0712576);
}

double NNfunction_sRg::synapse0x3427ec0() {
   return (neuron0x340bf10()*-0.13362);
}

double NNfunction_sRg::synapse0x3427f00() {
   return (neuron0x340c250()*0.0155694);
}

double NNfunction_sRg::synapse0x3427f40() {
   return (neuron0x340c590()*0.0894219);
}

double NNfunction_sRg::synapse0x3427f80() {
   return (neuron0x340c8d0()*0.208824);
}

double NNfunction_sRg::synapse0x3428300() {
   return (neuron0x3407d10()*-0.00841439);
}

double NNfunction_sRg::synapse0x3428340() {
   return (neuron0x3408050()*0.0277491);
}

double NNfunction_sRg::synapse0x3428380() {
   return (neuron0x3408390()*0.00523203);
}

double NNfunction_sRg::synapse0x34283c0() {
   return (neuron0x34086d0()*1.57965);
}

double NNfunction_sRg::synapse0x3428400() {
   return (neuron0x3408a10()*0.00031052);
}

double NNfunction_sRg::synapse0x3428440() {
   return (neuron0x3408d50()*0.0247727);
}

double NNfunction_sRg::synapse0x3428480() {
   return (neuron0x3409090()*0.00552761);
}

double NNfunction_sRg::synapse0x34284c0() {
   return (neuron0x34093d0()*0.0161507);
}

double NNfunction_sRg::synapse0x3428500() {
   return (neuron0x3409710()*-0.0286887);
}

double NNfunction_sRg::synapse0x3428540() {
   return (neuron0x3409a50()*-0.00590306);
}

double NNfunction_sRg::synapse0x3428580() {
   return (neuron0x3409d90()*0.0619426);
}

double NNfunction_sRg::synapse0x34285c0() {
   return (neuron0x340a0d0()*0.0162452);
}

double NNfunction_sRg::synapse0x3428600() {
   return (neuron0x340a410()*0.023419);
}

double NNfunction_sRg::synapse0x3428640() {
   return (neuron0x340a750()*-3.53498e-05);
}

double NNfunction_sRg::synapse0x3428680() {
   return (neuron0x340aa90()*0.0220733);
}

double NNfunction_sRg::synapse0x34286c0() {
   return (neuron0x340add0()*0.0550992);
}

double NNfunction_sRg::synapse0x3428150() {
   return (neuron0x340b110()*-0.0124682);
}

double NNfunction_sRg::synapse0x3428190() {
   return (neuron0x340b670()*0.0046359);
}

double NNfunction_sRg::synapse0x3428810() {
   return (neuron0x340b890()*-1.36516);
}

double NNfunction_sRg::synapse0x3428850() {
   return (neuron0x340bbd0()*0.000367008);
}

double NNfunction_sRg::synapse0x3428890() {
   return (neuron0x340bf10()*0.00724527);
}

double NNfunction_sRg::synapse0x34288d0() {
   return (neuron0x340c250()*0.00905239);
}

double NNfunction_sRg::synapse0x3428910() {
   return (neuron0x340c590()*-0.0250793);
}

double NNfunction_sRg::synapse0x3428950() {
   return (neuron0x340c8d0()*0.00702186);
}

double NNfunction_sRg::synapse0x3428cd0() {
   return (neuron0x3407d10()*0.00232954);
}

double NNfunction_sRg::synapse0x3428d10() {
   return (neuron0x3408050()*0.00426866);
}

double NNfunction_sRg::synapse0x3428d50() {
   return (neuron0x3408390()*-0.011359);
}

double NNfunction_sRg::synapse0x3428d90() {
   return (neuron0x34086d0()*-3.17321);
}

double NNfunction_sRg::synapse0x3428dd0() {
   return (neuron0x3408a10()*-0.00464676);
}

double NNfunction_sRg::synapse0x3428e10() {
   return (neuron0x3408d50()*-0.00608766);
}

double NNfunction_sRg::synapse0x3428e50() {
   return (neuron0x3409090()*0.0111214);
}

double NNfunction_sRg::synapse0x3428e90() {
   return (neuron0x34093d0()*-0.0124803);
}

double NNfunction_sRg::synapse0x3428ed0() {
   return (neuron0x3409710()*-0.228069);
}

double NNfunction_sRg::synapse0x3428f10() {
   return (neuron0x3409a50()*-0.0135663);
}

double NNfunction_sRg::synapse0x3428f50() {
   return (neuron0x3409d90()*0.132399);
}

double NNfunction_sRg::synapse0x3428f90() {
   return (neuron0x340a0d0()*-0.0217806);
}

double NNfunction_sRg::synapse0x3428fd0() {
   return (neuron0x340a410()*-0.00655893);
}

double NNfunction_sRg::synapse0x3429010() {
   return (neuron0x340a750()*0.0144684);
}

double NNfunction_sRg::synapse0x3429050() {
   return (neuron0x340aa90()*-0.0137468);
}

double NNfunction_sRg::synapse0x3429090() {
   return (neuron0x340add0()*-0.0186994);
}

double NNfunction_sRg::synapse0x3428b20() {
   return (neuron0x340b110()*0.0159661);
}

double NNfunction_sRg::synapse0x3428b60() {
   return (neuron0x340b670()*0.00934818);
}

double NNfunction_sRg::synapse0x34291e0() {
   return (neuron0x340b890()*-0.0206887);
}

double NNfunction_sRg::synapse0x3429220() {
   return (neuron0x340bbd0()*-0.0069197);
}

double NNfunction_sRg::synapse0x3429260() {
   return (neuron0x340bf10()*-0.00550654);
}

double NNfunction_sRg::synapse0x34292a0() {
   return (neuron0x340c250()*-0.00437372);
}

double NNfunction_sRg::synapse0x34292e0() {
   return (neuron0x340c590()*0.0047438);
}

double NNfunction_sRg::synapse0x3429320() {
   return (neuron0x340c8d0()*-0.014703);
}

double NNfunction_sRg::synapse0x3411dd0() {
   return (neuron0x3407d10()*0.192678);
}

double NNfunction_sRg::synapse0x3411e10() {
   return (neuron0x3408050()*-0.0661114);
}

double NNfunction_sRg::synapse0x3411e50() {
   return (neuron0x3408390()*0.461831);
}

double NNfunction_sRg::synapse0x3411e90() {
   return (neuron0x34086d0()*0.638552);
}

double NNfunction_sRg::synapse0x3411ed0() {
   return (neuron0x3408a10()*0.272529);
}

double NNfunction_sRg::synapse0x3411f10() {
   return (neuron0x3408d50()*0.122899);
}

double NNfunction_sRg::synapse0x3411f50() {
   return (neuron0x3409090()*-0.211003);
}

double NNfunction_sRg::synapse0x3411f90() {
   return (neuron0x34093d0()*0.0272251);
}

double NNfunction_sRg::synapse0x3429ab0() {
   return (neuron0x3409710()*0.00574782);
}

double NNfunction_sRg::synapse0x3429af0() {
   return (neuron0x3409a50()*-0.0448021);
}

double NNfunction_sRg::synapse0x3429b30() {
   return (neuron0x3409d90()*-0.0875012);
}

double NNfunction_sRg::synapse0x3429b70() {
   return (neuron0x340a0d0()*-0.198131);
}

double NNfunction_sRg::synapse0x3429bb0() {
   return (neuron0x340a410()*0.00681601);
}

double NNfunction_sRg::synapse0x3429bf0() {
   return (neuron0x340a750()*0.2742);
}

double NNfunction_sRg::synapse0x3429c30() {
   return (neuron0x340aa90()*-0.542842);
}

double NNfunction_sRg::synapse0x3429c70() {
   return (neuron0x340add0()*0.320751);
}

double NNfunction_sRg::synapse0x34294f0() {
   return (neuron0x340b110()*-0.193649);
}

double NNfunction_sRg::synapse0x3429530() {
   return (neuron0x340b670()*0.244919);
}

double NNfunction_sRg::synapse0x3429dc0() {
   return (neuron0x340b890()*0.486966);
}

double NNfunction_sRg::synapse0x3429e00() {
   return (neuron0x340bbd0()*-0.628543);
}

double NNfunction_sRg::synapse0x3429e40() {
   return (neuron0x340bf10()*-0.105024);
}

double NNfunction_sRg::synapse0x3429e80() {
   return (neuron0x340c250()*0.363303);
}

double NNfunction_sRg::synapse0x3429ec0() {
   return (neuron0x340c590()*-0.0901308);
}

double NNfunction_sRg::synapse0x3429f00() {
   return (neuron0x340c8d0()*0.171881);
}

double NNfunction_sRg::synapse0x342a280() {
   return (neuron0x3407d10()*-0.0552084);
}

double NNfunction_sRg::synapse0x342a2c0() {
   return (neuron0x3408050()*-0.00471034);
}

double NNfunction_sRg::synapse0x342a300() {
   return (neuron0x3408390()*0.00966918);
}

double NNfunction_sRg::synapse0x342a340() {
   return (neuron0x34086d0()*-2.68444);
}

double NNfunction_sRg::synapse0x342a380() {
   return (neuron0x3408a10()*-0.0285142);
}

double NNfunction_sRg::synapse0x342a3c0() {
   return (neuron0x3408d50()*-0.0173005);
}

double NNfunction_sRg::synapse0x342a400() {
   return (neuron0x3409090()*-0.0559749);
}

double NNfunction_sRg::synapse0x342a440() {
   return (neuron0x34093d0()*0.00642368);
}

double NNfunction_sRg::synapse0x342a480() {
   return (neuron0x3409710()*0.153446);
}

double NNfunction_sRg::synapse0x342a4c0() {
   return (neuron0x3409a50()*-0.0129573);
}

double NNfunction_sRg::synapse0x342a500() {
   return (neuron0x3409d90()*0.0514999);
}

double NNfunction_sRg::synapse0x342a540() {
   return (neuron0x340a0d0()*0.0311278);
}

double NNfunction_sRg::synapse0x342a580() {
   return (neuron0x340a410()*-0.0211841);
}

double NNfunction_sRg::synapse0x342a5c0() {
   return (neuron0x340a750()*-0.0178078);
}

double NNfunction_sRg::synapse0x342a600() {
   return (neuron0x340aa90()*0.00795381);
}

double NNfunction_sRg::synapse0x342a640() {
   return (neuron0x340add0()*-0.000319062);
}

double NNfunction_sRg::synapse0x342a0d0() {
   return (neuron0x340b110()*-0.0335489);
}

double NNfunction_sRg::synapse0x342a110() {
   return (neuron0x340b670()*0.00545341);
}

double NNfunction_sRg::synapse0x342a790() {
   return (neuron0x340b890()*0.333242);
}

double NNfunction_sRg::synapse0x342a7d0() {
   return (neuron0x340bbd0()*-0.00570019);
}

double NNfunction_sRg::synapse0x342a810() {
   return (neuron0x340bf10()*0.0240265);
}

double NNfunction_sRg::synapse0x342a850() {
   return (neuron0x340c250()*0.00293217);
}

double NNfunction_sRg::synapse0x342a890() {
   return (neuron0x340c590()*-0.00861304);
}

double NNfunction_sRg::synapse0x342a8d0() {
   return (neuron0x340c8d0()*0.0057553);
}

double NNfunction_sRg::synapse0x342ac50() {
   return (neuron0x3407d10()*0.00648638);
}

double NNfunction_sRg::synapse0x342ac90() {
   return (neuron0x3408050()*-0.000126636);
}

double NNfunction_sRg::synapse0x342acd0() {
   return (neuron0x3408390()*-0.000846825);
}

double NNfunction_sRg::synapse0x342ad10() {
   return (neuron0x34086d0()*7.11113);
}

double NNfunction_sRg::synapse0x342ad50() {
   return (neuron0x3408a10()*0.00300551);
}

double NNfunction_sRg::synapse0x342ad90() {
   return (neuron0x3408d50()*0.00257471);
}

double NNfunction_sRg::synapse0x342add0() {
   return (neuron0x3409090()*0.0111152);
}

double NNfunction_sRg::synapse0x342ae10() {
   return (neuron0x34093d0()*0.000418017);
}

double NNfunction_sRg::synapse0x342ae50() {
   return (neuron0x3409710()*-0.0166581);
}

double NNfunction_sRg::synapse0x342ae90() {
   return (neuron0x3409a50()*-0.00451366);
}

double NNfunction_sRg::synapse0x342aed0() {
   return (neuron0x3409d90()*0.0104881);
}

double NNfunction_sRg::synapse0x342af10() {
   return (neuron0x340a0d0()*0.000668236);
}

double NNfunction_sRg::synapse0x342af50() {
   return (neuron0x340a410()*0.00816687);
}

double NNfunction_sRg::synapse0x342af90() {
   return (neuron0x340a750()*0.0059121);
}

double NNfunction_sRg::synapse0x342afd0() {
   return (neuron0x340aa90()*0.000905577);
}

double NNfunction_sRg::synapse0x342b010() {
   return (neuron0x340add0()*-0.00399898);
}

double NNfunction_sRg::synapse0x342aaa0() {
   return (neuron0x340b110()*0.0145092);
}

double NNfunction_sRg::synapse0x342aae0() {
   return (neuron0x340b670()*-0.00659486);
}

double NNfunction_sRg::synapse0x341b610() {
   return (neuron0x340b890()*0.0533998);
}

double NNfunction_sRg::synapse0x341b650() {
   return (neuron0x340bbd0()*0.00507631);
}

double NNfunction_sRg::synapse0x341b690() {
   return (neuron0x340bf10()*-0.0101293);
}

double NNfunction_sRg::synapse0x341b6d0() {
   return (neuron0x340c250()*-0.00227293);
}

double NNfunction_sRg::synapse0x341b710() {
   return (neuron0x340c590()*0.00437271);
}

double NNfunction_sRg::synapse0x341b750() {
   return (neuron0x340c8d0()*-0.00152234);
}

double NNfunction_sRg::synapse0x341bad0() {
   return (neuron0x3407d10()*0.141879);
}

double NNfunction_sRg::synapse0x341bb10() {
   return (neuron0x3408050()*0.093702);
}

double NNfunction_sRg::synapse0x341bb50() {
   return (neuron0x3408390()*0.0851323);
}

double NNfunction_sRg::synapse0x341bb90() {
   return (neuron0x34086d0()*0.111151);
}

double NNfunction_sRg::synapse0x341bbd0() {
   return (neuron0x3408a10()*0.286317);
}

double NNfunction_sRg::synapse0x341bc10() {
   return (neuron0x3408d50()*-0.00554217);
}

double NNfunction_sRg::synapse0x341bc50() {
   return (neuron0x3409090()*0.0684356);
}

double NNfunction_sRg::synapse0x341bc90() {
   return (neuron0x34093d0()*-0.146725);
}

double NNfunction_sRg::synapse0x341bcd0() {
   return (neuron0x3409710()*-0.593048);
}

double NNfunction_sRg::synapse0x341bd10() {
   return (neuron0x3409a50()*-0.151006);
}

double NNfunction_sRg::synapse0x341bd50() {
   return (neuron0x3409d90()*-0.0497021);
}

double NNfunction_sRg::synapse0x341bd90() {
   return (neuron0x340a0d0()*0.195536);
}

double NNfunction_sRg::synapse0x341bdd0() {
   return (neuron0x340a410()*0.185157);
}

double NNfunction_sRg::synapse0x341be10() {
   return (neuron0x340a750()*0.243943);
}

double NNfunction_sRg::synapse0x341be50() {
   return (neuron0x340aa90()*-0.215211);
}

double NNfunction_sRg::synapse0x341be90() {
   return (neuron0x340add0()*0.222737);
}

double NNfunction_sRg::synapse0x341b920() {
   return (neuron0x340b110()*-0.101553);
}

double NNfunction_sRg::synapse0x341b960() {
   return (neuron0x340b670()*-0.0956555);
}

double NNfunction_sRg::synapse0x341bfe0() {
   return (neuron0x340b890()*0.803687);
}

double NNfunction_sRg::synapse0x341c020() {
   return (neuron0x340bbd0()*-0.0892984);
}

double NNfunction_sRg::synapse0x341c060() {
   return (neuron0x340bf10()*0.00086153);
}

double NNfunction_sRg::synapse0x341c0a0() {
   return (neuron0x340c250()*0.150594);
}

double NNfunction_sRg::synapse0x341c0e0() {
   return (neuron0x340c590()*-0.0387142);
}

double NNfunction_sRg::synapse0x341c120() {
   return (neuron0x340c8d0()*0.24567);
}

double NNfunction_sRg::synapse0x341c4a0() {
   return (neuron0x3407d10()*0.00265119);
}

double NNfunction_sRg::synapse0x341c4e0() {
   return (neuron0x3408050()*-0.0342605);
}

double NNfunction_sRg::synapse0x341c520() {
   return (neuron0x3408390()*-0.00612878);
}

double NNfunction_sRg::synapse0x341c560() {
   return (neuron0x34086d0()*1.54968);
}

double NNfunction_sRg::synapse0x341c5a0() {
   return (neuron0x3408a10()*-0.0204804);
}

double NNfunction_sRg::synapse0x341c5e0() {
   return (neuron0x3408d50()*0.00751306);
}

double NNfunction_sRg::synapse0x341c620() {
   return (neuron0x3409090()*0.0065996);
}

double NNfunction_sRg::synapse0x341c660() {
   return (neuron0x34093d0()*0.00452908);
}

double NNfunction_sRg::synapse0x341c6a0() {
   return (neuron0x3409710()*0.0291657);
}

double NNfunction_sRg::synapse0x341c6e0() {
   return (neuron0x3409a50()*0.0154419);
}

double NNfunction_sRg::synapse0x341c720() {
   return (neuron0x3409d90()*0.0193714);
}

double NNfunction_sRg::synapse0x341c760() {
   return (neuron0x340a0d0()*-0.445822);
}

double NNfunction_sRg::synapse0x341c7a0() {
   return (neuron0x340a410()*-0.458674);
}

double NNfunction_sRg::synapse0x341c7e0() {
   return (neuron0x340a750()*-0.0045202);
}

double NNfunction_sRg::synapse0x341c820() {
   return (neuron0x340aa90()*-0.187926);
}

double NNfunction_sRg::synapse0x341c860() {
   return (neuron0x340add0()*-0.194993);
}

double NNfunction_sRg::synapse0x341c2f0() {
   return (neuron0x340b110()*0.0245916);
}

double NNfunction_sRg::synapse0x341c330() {
   return (neuron0x340b670()*-0.233542);
}

double NNfunction_sRg::synapse0x341c9b0() {
   return (neuron0x340b890()*-0.144769);
}

double NNfunction_sRg::synapse0x341c9f0() {
   return (neuron0x340bbd0()*-0.0222852);
}

double NNfunction_sRg::synapse0x341ca30() {
   return (neuron0x340bf10()*-0.0231324);
}

double NNfunction_sRg::synapse0x341ca70() {
   return (neuron0x340c250()*0.00173977);
}

double NNfunction_sRg::synapse0x341cab0() {
   return (neuron0x340c590()*0.000848174);
}

double NNfunction_sRg::synapse0x341caf0() {
   return (neuron0x340c8d0()*0.0108149);
}

double NNfunction_sRg::synapse0x341ce70() {
   return (neuron0x3407d10()*-0.0421307);
}

double NNfunction_sRg::synapse0x341ceb0() {
   return (neuron0x3408050()*0.164353);
}

double NNfunction_sRg::synapse0x341cef0() {
   return (neuron0x3408390()*-0.0151431);
}

double NNfunction_sRg::synapse0x341cf30() {
   return (neuron0x34086d0()*0.358117);
}

double NNfunction_sRg::synapse0x341cf70() {
   return (neuron0x3408a10()*-0.386975);
}

double NNfunction_sRg::synapse0x341cfb0() {
   return (neuron0x3408d50()*-0.547289);
}

double NNfunction_sRg::synapse0x341cff0() {
   return (neuron0x3409090()*0.00984345);
}

double NNfunction_sRg::synapse0x341d030() {
   return (neuron0x34093d0()*0.106427);
}

double NNfunction_sRg::synapse0x341d070() {
   return (neuron0x3409710()*0.00831694);
}

double NNfunction_sRg::synapse0x341d0b0() {
   return (neuron0x3409a50()*0.022499);
}

double NNfunction_sRg::synapse0x341d0f0() {
   return (neuron0x3409d90()*0.0576001);
}

double NNfunction_sRg::synapse0x341d130() {
   return (neuron0x340a0d0()*0.161317);
}

double NNfunction_sRg::synapse0x341d170() {
   return (neuron0x340a410()*-0.114239);
}

double NNfunction_sRg::synapse0x341d1b0() {
   return (neuron0x340a750()*-0.0160671);
}

double NNfunction_sRg::synapse0x341d1f0() {
   return (neuron0x340aa90()*-0.0243797);
}

double NNfunction_sRg::synapse0x341d230() {
   return (neuron0x340add0()*-0.0486022);
}

double NNfunction_sRg::synapse0x341ccc0() {
   return (neuron0x340b110()*-0.0138516);
}

double NNfunction_sRg::synapse0x341cd00() {
   return (neuron0x340b670()*0.0576428);
}

double NNfunction_sRg::synapse0x341d380() {
   return (neuron0x340b890()*-0.575605);
}

double NNfunction_sRg::synapse0x341d3c0() {
   return (neuron0x340bbd0()*0.0461952);
}

double NNfunction_sRg::synapse0x341d400() {
   return (neuron0x340bf10()*0.0057645);
}

double NNfunction_sRg::synapse0x341d440() {
   return (neuron0x340c250()*-0.0261025);
}

double NNfunction_sRg::synapse0x341d480() {
   return (neuron0x340c590()*0.0553155);
}

double NNfunction_sRg::synapse0x341d4c0() {
   return (neuron0x340c8d0()*-0.0287754);
}

double NNfunction_sRg::synapse0x342f390() {
   return (neuron0x3407d10()*0.0418748);
}

double NNfunction_sRg::synapse0x342f3d0() {
   return (neuron0x3408050()*-0.0510681);
}

double NNfunction_sRg::synapse0x342f410() {
   return (neuron0x3408390()*-0.0811326);
}

double NNfunction_sRg::synapse0x342f450() {
   return (neuron0x34086d0()*1.24687);
}

double NNfunction_sRg::synapse0x342f490() {
   return (neuron0x3408a10()*0.0271664);
}

double NNfunction_sRg::synapse0x342f4d0() {
   return (neuron0x3408d50()*0.0099714);
}

double NNfunction_sRg::synapse0x342f510() {
   return (neuron0x3409090()*0.0938828);
}

double NNfunction_sRg::synapse0x342f550() {
   return (neuron0x34093d0()*0.02046);
}

double NNfunction_sRg::synapse0x342f590() {
   return (neuron0x3409710()*-0.326531);
}

double NNfunction_sRg::synapse0x342f5d0() {
   return (neuron0x3409a50()*0.0405261);
}

double NNfunction_sRg::synapse0x342f610() {
   return (neuron0x3409d90()*-0.30455);
}

double NNfunction_sRg::synapse0x342f650() {
   return (neuron0x340a0d0()*-0.0609597);
}

double NNfunction_sRg::synapse0x342f690() {
   return (neuron0x340a410()*-0.0837102);
}

double NNfunction_sRg::synapse0x342f6d0() {
   return (neuron0x340a750()*-0.00215397);
}

double NNfunction_sRg::synapse0x342f710() {
   return (neuron0x340aa90()*-0.0151151);
}

double NNfunction_sRg::synapse0x342f750() {
   return (neuron0x340add0()*0.00630323);
}

double NNfunction_sRg::synapse0x341d500() {
   return (neuron0x340b110()*-0.0696526);
}

double NNfunction_sRg::synapse0x341d540() {
   return (neuron0x340b670()*-0.12258);
}

double NNfunction_sRg::synapse0x342f8a0() {
   return (neuron0x340b890()*0.75642);
}

double NNfunction_sRg::synapse0x342f8e0() {
   return (neuron0x340bbd0()*0.00831502);
}

double NNfunction_sRg::synapse0x342f920() {
   return (neuron0x340bf10()*-0.0828734);
}

double NNfunction_sRg::synapse0x342f960() {
   return (neuron0x340c250()*-0.0293579);
}

double NNfunction_sRg::synapse0x342f9a0() {
   return (neuron0x340c590()*0.0433602);
}

double NNfunction_sRg::synapse0x342f9e0() {
   return (neuron0x340c8d0()*-0.013705);
}

double NNfunction_sRg::synapse0x342fd60() {
   return (neuron0x3407d10()*-0.00935138);
}

double NNfunction_sRg::synapse0x342fda0() {
   return (neuron0x3408050()*0.0604144);
}

double NNfunction_sRg::synapse0x342fde0() {
   return (neuron0x3408390()*-0.00158364);
}

double NNfunction_sRg::synapse0x342fe20() {
   return (neuron0x34086d0()*-1.11359);
}

double NNfunction_sRg::synapse0x342fe60() {
   return (neuron0x3408a10()*0.0214309);
}

double NNfunction_sRg::synapse0x342fea0() {
   return (neuron0x3408d50()*0.07309);
}

double NNfunction_sRg::synapse0x342fee0() {
   return (neuron0x3409090()*0.035967);
}

double NNfunction_sRg::synapse0x342ff20() {
   return (neuron0x34093d0()*-0.0243416);
}

double NNfunction_sRg::synapse0x342ff60() {
   return (neuron0x3409710()*0.00278541);
}

double NNfunction_sRg::synapse0x342ffa0() {
   return (neuron0x3409a50()*-0.0698166);
}

double NNfunction_sRg::synapse0x342ffe0() {
   return (neuron0x3409d90()*-0.0185401);
}

double NNfunction_sRg::synapse0x3430020() {
   return (neuron0x340a0d0()*-0.0319426);
}

double NNfunction_sRg::synapse0x3430060() {
   return (neuron0x340a410()*-0.0918972);
}

double NNfunction_sRg::synapse0x34300a0() {
   return (neuron0x340a750()*-0.063095);
}

double NNfunction_sRg::synapse0x34300e0() {
   return (neuron0x340aa90()*-0.322791);
}

double NNfunction_sRg::synapse0x3430120() {
   return (neuron0x340add0()*0.751119);
}

double NNfunction_sRg::synapse0x342fbb0() {
   return (neuron0x340b110()*-0.0120621);
}

double NNfunction_sRg::synapse0x342fbf0() {
   return (neuron0x340b670()*-0.0714718);
}

double NNfunction_sRg::synapse0x3430270() {
   return (neuron0x340b890()*-0.941948);
}

double NNfunction_sRg::synapse0x34302b0() {
   return (neuron0x340bbd0()*-0.0820387);
}

double NNfunction_sRg::synapse0x34302f0() {
   return (neuron0x340bf10()*-0.0391506);
}

double NNfunction_sRg::synapse0x3430330() {
   return (neuron0x340c250()*0.00811962);
}

double NNfunction_sRg::synapse0x3430370() {
   return (neuron0x340c590()*-0.0142113);
}

double NNfunction_sRg::synapse0x34303b0() {
   return (neuron0x340c8d0()*-0.0265686);
}

double NNfunction_sRg::synapse0x3430730() {
   return (neuron0x3407d10()*0.0692263);
}

double NNfunction_sRg::synapse0x3430770() {
   return (neuron0x3408050()*0.0249674);
}

double NNfunction_sRg::synapse0x34307b0() {
   return (neuron0x3408390()*0.0818345);
}

double NNfunction_sRg::synapse0x34307f0() {
   return (neuron0x34086d0()*0.0753027);
}

double NNfunction_sRg::synapse0x3430830() {
   return (neuron0x3408a10()*-0.0249544);
}

double NNfunction_sRg::synapse0x3430870() {
   return (neuron0x3408d50()*-0.0716548);
}

double NNfunction_sRg::synapse0x34308b0() {
   return (neuron0x3409090()*-0.0197775);
}

double NNfunction_sRg::synapse0x34308f0() {
   return (neuron0x34093d0()*0.0995383);
}

double NNfunction_sRg::synapse0x3430930() {
   return (neuron0x3409710()*-0.16079);
}

double NNfunction_sRg::synapse0x3430970() {
   return (neuron0x3409a50()*-0.290273);
}

double NNfunction_sRg::synapse0x34309b0() {
   return (neuron0x3409d90()*0.184437);
}

double NNfunction_sRg::synapse0x34309f0() {
   return (neuron0x340a0d0()*0.36907);
}

double NNfunction_sRg::synapse0x3430a30() {
   return (neuron0x340a410()*0.33138);
}

double NNfunction_sRg::synapse0x3430a70() {
   return (neuron0x340a750()*0.303415);
}

double NNfunction_sRg::synapse0x3430ab0() {
   return (neuron0x340aa90()*0.0455312);
}

double NNfunction_sRg::synapse0x3430af0() {
   return (neuron0x340add0()*-0.0458389);
}

double NNfunction_sRg::synapse0x3430580() {
   return (neuron0x340b110()*0.0199974);
}

double NNfunction_sRg::synapse0x34305c0() {
   return (neuron0x340b670()*0.130175);
}

double NNfunction_sRg::synapse0x3430c40() {
   return (neuron0x340b890()*1.14023);
}

double NNfunction_sRg::synapse0x3430c80() {
   return (neuron0x340bbd0()*0.240235);
}

double NNfunction_sRg::synapse0x3430cc0() {
   return (neuron0x340bf10()*0.00815066);
}

double NNfunction_sRg::synapse0x3430d00() {
   return (neuron0x340c250()*-0.00641952);
}

double NNfunction_sRg::synapse0x3430d40() {
   return (neuron0x340c590()*-0.0593864);
}

double NNfunction_sRg::synapse0x3430d80() {
   return (neuron0x340c8d0()*0.050892);
}

double NNfunction_sRg::synapse0x3431100() {
   return (neuron0x3407d10()*-0.00909471);
}

double NNfunction_sRg::synapse0x3431140() {
   return (neuron0x3408050()*-0.00847443);
}

double NNfunction_sRg::synapse0x3431180() {
   return (neuron0x3408390()*-0.00337194);
}

double NNfunction_sRg::synapse0x34311c0() {
   return (neuron0x34086d0()*0.01676);
}

double NNfunction_sRg::synapse0x3431200() {
   return (neuron0x3408a10()*-0.00647021);
}

double NNfunction_sRg::synapse0x3431240() {
   return (neuron0x3408d50()*-0.0010362);
}

double NNfunction_sRg::synapse0x3431280() {
   return (neuron0x3409090()*0.00496731);
}

double NNfunction_sRg::synapse0x34312c0() {
   return (neuron0x34093d0()*0.00835116);
}

double NNfunction_sRg::synapse0x3431300() {
   return (neuron0x3409710()*-0.00515392);
}

double NNfunction_sRg::synapse0x3431340() {
   return (neuron0x3409a50()*-0.00375932);
}

double NNfunction_sRg::synapse0x3431380() {
   return (neuron0x3409d90()*0.0116964);
}

double NNfunction_sRg::synapse0x34313c0() {
   return (neuron0x340a0d0()*-0.0012916);
}

double NNfunction_sRg::synapse0x3431400() {
   return (neuron0x340a410()*0.00267796);
}

double NNfunction_sRg::synapse0x3431440() {
   return (neuron0x340a750()*-0.0153169);
}

double NNfunction_sRg::synapse0x3431480() {
   return (neuron0x340aa90()*-0.0041988);
}

double NNfunction_sRg::synapse0x34314c0() {
   return (neuron0x340add0()*0.00148392);
}

double NNfunction_sRg::synapse0x3430f50() {
   return (neuron0x340b110()*-0.0202898);
}

double NNfunction_sRg::synapse0x3430f90() {
   return (neuron0x340b670()*0.00100878);
}

double NNfunction_sRg::synapse0x3431610() {
   return (neuron0x340b890()*-3.27788);
}

double NNfunction_sRg::synapse0x3431650() {
   return (neuron0x340bbd0()*-0.0151657);
}

double NNfunction_sRg::synapse0x3431690() {
   return (neuron0x340bf10()*0.00513437);
}

double NNfunction_sRg::synapse0x34316d0() {
   return (neuron0x340c250()*2.72846e-05);
}

double NNfunction_sRg::synapse0x3431710() {
   return (neuron0x340c590()*0.000537134);
}

double NNfunction_sRg::synapse0x3431750() {
   return (neuron0x340c8d0()*0.00381462);
}

double NNfunction_sRg::synapse0x31c7b20() {
   return (neuron0x340cd40()*-0.0118655);
}

double NNfunction_sRg::synapse0x31c7b60() {
   return (neuron0x340d690()*-0.885553);
}

double NNfunction_sRg::synapse0x340f200() {
   return (neuron0x340e170()*0.0499509);
}

double NNfunction_sRg::synapse0x340f240() {
   return (neuron0x340dc10()*-0.463943);
}

double NNfunction_sRg::synapse0x340fbd0() {
   return (neuron0x340ef50()*0.247823);
}

double NNfunction_sRg::synapse0x340fc10() {
   return (neuron0x340f920()*-0.808009);
}

double NNfunction_sRg::synapse0x34109a0() {
   return (neuron0x34106f0()*0.427598);
}

double NNfunction_sRg::synapse0x34109e0() {
   return (neuron0x34110c0()*-1.59528);
}

double NNfunction_sRg::synapse0x3411370() {
   return (neuron0x3411a90()*0.0317707);
}

double NNfunction_sRg::synapse0x34113b0() {
   return (neuron0x3412570()*-0.00763806);
}

double NNfunction_sRg::synapse0x3411d40() {
   return (neuron0x3412f40()*-0.142556);
}

double NNfunction_sRg::synapse0x3411d80() {
   return (neuron0x3410020()*-0.232465);
}

double NNfunction_sRg::synapse0x3412820() {
   return (neuron0x3414af0()*-0.123807);
}

double NNfunction_sRg::synapse0x3412860() {
   return (neuron0x34154c0()*-0.386091);
}

double NNfunction_sRg::synapse0x34131f0() {
   return (neuron0x3415e90()*-0.0417661);
}

double NNfunction_sRg::synapse0x3413230() {
   return (neuron0x3416860()*0.192563);
}

double NNfunction_sRg::synapse0x34102d0() {
   return (neuron0x3418670()*-0.133048);
}

double NNfunction_sRg::synapse0x3410310() {
   return (neuron0x3418950()*-0.269187);
}

double NNfunction_sRg::synapse0x3414da0() {
   return (neuron0x3419320()*0.817476);
}

double NNfunction_sRg::synapse0x3414de0() {
   return (neuron0x3419cf0()*0.155295);
}

double NNfunction_sRg::synapse0x3415770() {
   return (neuron0x341a6c0()*0.1942);
}

double NNfunction_sRg::synapse0x34157b0() {
   return (neuron0x341b090()*0.254053);
}

double NNfunction_sRg::synapse0x3416140() {
   return (neuron0x3413be0()*-0.0531643);
}

double NNfunction_sRg::synapse0x3416180() {
   return (neuron0x34145b0()*-0.21387);
}

double NNfunction_sRg::synapse0x3416b10() {
   return (neuron0x341de20()*-1.72898);
}

double NNfunction_sRg::synapse0x3416b50() {
   return (neuron0x341e7f0()*0.394598);
}

double NNfunction_sRg::synapse0x340acb0() {
   return (neuron0x341f1c0()*-0.0447694);
}

double NNfunction_sRg::synapse0x340acf0() {
   return (neuron0x341fb90()*-0.015212);
}

double NNfunction_sRg::synapse0x3418c00() {
   return (neuron0x3420560()*-0.127305);
}

double NNfunction_sRg::synapse0x3418c40() {
   return (neuron0x3420f30()*-0.00224551);
}

double NNfunction_sRg::synapse0x34195d0() {
   return (neuron0x3421900()*-0.201109);
}

double NNfunction_sRg::synapse0x3419610() {
   return (neuron0x34222d0()*-0.145195);
}

double NNfunction_sRg::synapse0x3419fa0() {
   return (neuron0x3418360()*-0.225886);
}

double NNfunction_sRg::synapse0x3419fe0() {
   return (neuron0x3424eb0()*-0.0506649);
}

double NNfunction_sRg::synapse0x341a970() {
   return (neuron0x3425880()*0.160904);
}

double NNfunction_sRg::synapse0x341a9b0() {
   return (neuron0x3426250()*0.0985793);
}

double NNfunction_sRg::synapse0x341b340() {
   return (neuron0x3426c20()*-0.327177);
}

double NNfunction_sRg::synapse0x341b380() {
   return (neuron0x34275f0()*0.0945486);
}

double NNfunction_sRg::synapse0x3413e90() {
   return (neuron0x3427fc0()*-1.1122);
}

double NNfunction_sRg::synapse0x3413ed0() {
   return (neuron0x3428990()*0.535006);
}

double NNfunction_sRg::synapse0x341d740() {
   return (neuron0x3429360()*-0.00940154);
}

double NNfunction_sRg::synapse0x341d780() {
   return (neuron0x3429f40()*0.972245);
}

double NNfunction_sRg::synapse0x341e0d0() {
   return (neuron0x342a910()*-0.478724);
}

double NNfunction_sRg::synapse0x341e110() {
   return (neuron0x341b790()*-0.086194);
}

double NNfunction_sRg::synapse0x341eaa0() {
   return (neuron0x341c160()*-0.216369);
}

double NNfunction_sRg::synapse0x341eae0() {
   return (neuron0x341cb30()*-0.308656);
}

double NNfunction_sRg::synapse0x341f470() {
   return (neuron0x342f170()*-0.325161);
}

double NNfunction_sRg::synapse0x341f4b0() {
   return (neuron0x342fa20()*-0.0135059);
}

double NNfunction_sRg::synapse0x341fe40() {
   return (neuron0x34303f0()*-0.110859);
}

double NNfunction_sRg::synapse0x341fe80() {
   return (neuron0x3430dc0()*-0.939838);
}

double NNfunction_sRg::synapse0x3422580() {
   return (neuron0x340cd40()*1.81299);
}

double NNfunction_sRg::synapse0x34225c0() {
   return (neuron0x340d690()*0.740784);
}

double NNfunction_sRg::synapse0x3417b40() {
   return (neuron0x340e170()*1.06272);
}

double NNfunction_sRg::synapse0x3417b80() {
   return (neuron0x340dc10()*0.873629);
}

double NNfunction_sRg::synapse0x3425160() {
   return (neuron0x340ef50()*-0.181679);
}

double NNfunction_sRg::synapse0x34251a0() {
   return (neuron0x340f920()*-0.0897314);
}

double NNfunction_sRg::synapse0x3425b30() {
   return (neuron0x34106f0()*-0.843421);
}

double NNfunction_sRg::synapse0x3425b70() {
   return (neuron0x34110c0()*1.1441);
}

double NNfunction_sRg::synapse0x3426500() {
   return (neuron0x3411a90()*0.00622907);
}

double NNfunction_sRg::synapse0x3426540() {
   return (neuron0x3412570()*-0.0351721);
}

double NNfunction_sRg::synapse0x3426ed0() {
   return (neuron0x3412f40()*1.14764);
}

double NNfunction_sRg::synapse0x3426f10() {
   return (neuron0x3410020()*0.159867);
}

double NNfunction_sRg::synapse0x34278a0() {
   return (neuron0x3414af0()*-1.21802);
}

double NNfunction_sRg::synapse0x34278e0() {
   return (neuron0x34154c0()*0.448468);
}

double NNfunction_sRg::synapse0x3428270() {
   return (neuron0x3415e90()*0.439969);
}

double NNfunction_sRg::synapse0x34282b0() {
   return (neuron0x3416860()*0.727941);
}

double NNfunction_sRg::synapse0x3428c40() {
   return (neuron0x3418670()*0.602072);
}

double NNfunction_sRg::synapse0x3428c80() {
   return (neuron0x3418950()*-0.561668);
}

double NNfunction_sRg::synapse0x3429610() {
   return (neuron0x3419320()*0.62931);
}

double NNfunction_sRg::synapse0x3429650() {
   return (neuron0x3419cf0()*1.20632);
}

double NNfunction_sRg::synapse0x342a1f0() {
   return (neuron0x341a6c0()*0.668259);
}

double NNfunction_sRg::synapse0x342a230() {
   return (neuron0x341b090()*-0.322742);
}

double NNfunction_sRg::synapse0x342abc0() {
   return (neuron0x3413be0()*0.769647);
}

double NNfunction_sRg::synapse0x342ac00() {
   return (neuron0x34145b0()*0.962024);
}

double NNfunction_sRg::synapse0x341ba40() {
   return (neuron0x341de20()*0.196653);
}

double NNfunction_sRg::synapse0x341ba80() {
   return (neuron0x341e7f0()*-0.0945899);
}

double NNfunction_sRg::synapse0x341c410() {
   return (neuron0x341f1c0()*0.450162);
}

double NNfunction_sRg::synapse0x341c450() {
   return (neuron0x341fb90()*-0.554032);
}

double NNfunction_sRg::synapse0x341cde0() {
   return (neuron0x3420560()*0.612952);
}

double NNfunction_sRg::synapse0x341ce20() {
   return (neuron0x3420f30()*-0.133238);
}

double NNfunction_sRg::synapse0x342f300() {
   return (neuron0x3421900()*2.1082);
}

double NNfunction_sRg::synapse0x342f340() {
   return (neuron0x34222d0()*1.0108);
}

double NNfunction_sRg::synapse0x342fcd0() {
   return (neuron0x3418360()*1.28784);
}

double NNfunction_sRg::synapse0x342fd10() {
   return (neuron0x3424eb0()*0.220245);
}

double NNfunction_sRg::synapse0x34306a0() {
   return (neuron0x3425880()*0.645949);
}

double NNfunction_sRg::synapse0x34306e0() {
   return (neuron0x3426250()*0.644936);
}

double NNfunction_sRg::synapse0x3431070() {
   return (neuron0x3426c20()*-0.24787);
}

double NNfunction_sRg::synapse0x34310b0() {
   return (neuron0x34275f0()*0.976459);
}

double NNfunction_sRg::synapse0x340cf60() {
   return (neuron0x3427fc0()*-0.769698);
}

double NNfunction_sRg::synapse0x340cfa0() {
   return (neuron0x3428990()*-0.525761);
}

double NNfunction_sRg::synapse0x3420810() {
   return (neuron0x3429360()*-0.571481);
}

double NNfunction_sRg::synapse0x3420850() {
   return (neuron0x3429f40()*0.87859);
}

double NNfunction_sRg::synapse0x3431790() {
   return (neuron0x342a910()*0.519182);
}

double NNfunction_sRg::synapse0x34317d0() {
   return (neuron0x341b790()*-0.765864);
}

double NNfunction_sRg::synapse0x3431810() {
   return (neuron0x341c160()*0.298168);
}

double NNfunction_sRg::synapse0x3431850() {
   return (neuron0x341cb30()*0.44503);
}

double NNfunction_sRg::synapse0x3438700() {
   return (neuron0x342f170()*0.276614);
}

double NNfunction_sRg::synapse0x3438740() {
   return (neuron0x342fa20()*0.749548);
}

double NNfunction_sRg::synapse0x3438780() {
   return (neuron0x34303f0()*0.892608);
}

double NNfunction_sRg::synapse0x34387c0() {
   return (neuron0x3430dc0()*1.1461);
}

double NNfunction_sRg::synapse0x3438b40() {
   return (neuron0x340cd40()*0.00263292);
}

double NNfunction_sRg::synapse0x3438b80() {
   return (neuron0x340d690()*-0.471534);
}

double NNfunction_sRg::synapse0x3438bc0() {
   return (neuron0x340e170()*-1.98959);
}

double NNfunction_sRg::synapse0x3438c00() {
   return (neuron0x340dc10()*-0.0941143);
}

double NNfunction_sRg::synapse0x3438c40() {
   return (neuron0x340ef50()*2.78394);
}

double NNfunction_sRg::synapse0x3438c80() {
   return (neuron0x340f920()*-0.705293);
}

double NNfunction_sRg::synapse0x3438cc0() {
   return (neuron0x34106f0()*4.31072);
}

double NNfunction_sRg::synapse0x3438d00() {
   return (neuron0x34110c0()*0.723938);
}

double NNfunction_sRg::synapse0x3438d40() {
   return (neuron0x3411a90()*0.00137815);
}

double NNfunction_sRg::synapse0x3438d80() {
   return (neuron0x3412570()*-1.29333);
}

double NNfunction_sRg::synapse0x3438dc0() {
   return (neuron0x3412f40()*0.0406596);
}

double NNfunction_sRg::synapse0x3438e00() {
   return (neuron0x3410020()*0.209658);
}

double NNfunction_sRg::synapse0x3438e40() {
   return (neuron0x3414af0()*1.43588);
}

double NNfunction_sRg::synapse0x3438e80() {
   return (neuron0x34154c0()*0.980985);
}

double NNfunction_sRg::synapse0x3438ec0() {
   return (neuron0x3415e90()*0.0411501);
}

double NNfunction_sRg::synapse0x3438f00() {
   return (neuron0x3416860()*-0.0205884);
}

double NNfunction_sRg::synapse0x3438990() {
   return (neuron0x3418670()*-0.0145182);
}

double NNfunction_sRg::synapse0x34389d0() {
   return (neuron0x3418950()*0.0647112);
}

double NNfunction_sRg::synapse0x3439050() {
   return (neuron0x3419320()*-0.386084);
}

double NNfunction_sRg::synapse0x3439090() {
   return (neuron0x3419cf0()*-0.988765);
}

double NNfunction_sRg::synapse0x34390d0() {
   return (neuron0x341a6c0()*-0.174045);
}

double NNfunction_sRg::synapse0x3439110() {
   return (neuron0x341b090()*-0.131339);
}

double NNfunction_sRg::synapse0x3439150() {
   return (neuron0x3413be0()*0.0108106);
}

double NNfunction_sRg::synapse0x3439190() {
   return (neuron0x34145b0()*-0.14754);
}

double NNfunction_sRg::synapse0x34391d0() {
   return (neuron0x341de20()*0.539057);
}

double NNfunction_sRg::synapse0x3439210() {
   return (neuron0x341e7f0()*-0.0247052);
}

double NNfunction_sRg::synapse0x3439250() {
   return (neuron0x341f1c0()*1.15486);
}

double NNfunction_sRg::synapse0x3439290() {
   return (neuron0x341fb90()*-0.0119492);
}

double NNfunction_sRg::synapse0x34392d0() {
   return (neuron0x3420560()*-0.213095);
}

double NNfunction_sRg::synapse0x3439310() {
   return (neuron0x3420f30()*-0.0100158);
}

double NNfunction_sRg::synapse0x3439350() {
   return (neuron0x3421900()*0.27656);
}

double NNfunction_sRg::synapse0x3439390() {
   return (neuron0x34222d0()*-0.306539);
}

double NNfunction_sRg::synapse0x3438f40() {
   return (neuron0x3418360()*0.138756);
}

double NNfunction_sRg::synapse0x3438f80() {
   return (neuron0x3424eb0()*-0.0025445);
}

double NNfunction_sRg::synapse0x3438fc0() {
   return (neuron0x3425880()*-0.0256384);
}

double NNfunction_sRg::synapse0x3439000() {
   return (neuron0x3426250()*-0.0385971);
}

double NNfunction_sRg::synapse0x34395e0() {
   return (neuron0x3426c20()*2.22539);
}

double NNfunction_sRg::synapse0x3439620() {
   return (neuron0x34275f0()*0.0105859);
}

double NNfunction_sRg::synapse0x3439660() {
   return (neuron0x3427fc0()*-0.277121);
}

double NNfunction_sRg::synapse0x34396a0() {
   return (neuron0x3428990()*1.96879);
}

double NNfunction_sRg::synapse0x34396e0() {
   return (neuron0x3429360()*-0.0019531);
}

double NNfunction_sRg::synapse0x3439720() {
   return (neuron0x3429f40()*0.498929);
}

double NNfunction_sRg::synapse0x3439760() {
   return (neuron0x342a910()*-4.46456);
}

double NNfunction_sRg::synapse0x34397a0() {
   return (neuron0x341b790()*0.0133735);
}

double NNfunction_sRg::synapse0x34397e0() {
   return (neuron0x341c160()*0.294354);
}

double NNfunction_sRg::synapse0x3439820() {
   return (neuron0x341cb30()*0.059514);
}

double NNfunction_sRg::synapse0x3439860() {
   return (neuron0x342f170()*-0.0600172);
}

double NNfunction_sRg::synapse0x34398a0() {
   return (neuron0x342fa20()*0.132343);
}

double NNfunction_sRg::synapse0x34398e0() {
   return (neuron0x34303f0()*0.0322813);
}

double NNfunction_sRg::synapse0x3439920() {
   return (neuron0x3430dc0()*-0.558803);
}

double NNfunction_sRg::synapse0x3439ca0() {
   return (neuron0x340cd40()*-0.00351789);
}

double NNfunction_sRg::synapse0x3439ce0() {
   return (neuron0x340d690()*-0.0471878);
}

double NNfunction_sRg::synapse0x3439d20() {
   return (neuron0x340e170()*0.188658);
}

double NNfunction_sRg::synapse0x3439d60() {
   return (neuron0x340dc10()*0.150827);
}

double NNfunction_sRg::synapse0x3439da0() {
   return (neuron0x340ef50()*0.402828);
}

double NNfunction_sRg::synapse0x3439de0() {
   return (neuron0x340f920()*-0.945372);
}

double NNfunction_sRg::synapse0x3439e20() {
   return (neuron0x34106f0()*1.09376);
}

double NNfunction_sRg::synapse0x3439e60() {
   return (neuron0x34110c0()*-0.148653);
}

double NNfunction_sRg::synapse0x3439ea0() {
   return (neuron0x3411a90()*0.00905364);
}

double NNfunction_sRg::synapse0x3439ee0() {
   return (neuron0x3412570()*0.167893);
}

double NNfunction_sRg::synapse0x3439f20() {
   return (neuron0x3412f40()*0.0674975);
}

double NNfunction_sRg::synapse0x3439f60() {
   return (neuron0x3410020()*-0.214875);
}

double NNfunction_sRg::synapse0x3439fa0() {
   return (neuron0x3414af0()*0.979154);
}

double NNfunction_sRg::synapse0x3439fe0() {
   return (neuron0x34154c0()*0.281069);
}

double NNfunction_sRg::synapse0x343a020() {
   return (neuron0x3415e90()*-0.0157479);
}

double NNfunction_sRg::synapse0x343a060() {
   return (neuron0x3416860()*-0.0783283);
}

double NNfunction_sRg::synapse0x3439af0() {
   return (neuron0x3418670()*0.0662277);
}

double NNfunction_sRg::synapse0x3439b30() {
   return (neuron0x3418950()*0.212128);
}

double NNfunction_sRg::synapse0x343a1b0() {
   return (neuron0x3419320()*-0.0823996);
}

double NNfunction_sRg::synapse0x343a1f0() {
   return (neuron0x3419cf0()*0.0788597);
}

double NNfunction_sRg::synapse0x343a230() {
   return (neuron0x341a6c0()*-0.303909);
}

double NNfunction_sRg::synapse0x343a270() {
   return (neuron0x341b090()*-0.182292);
}

double NNfunction_sRg::synapse0x343a2b0() {
   return (neuron0x3413be0()*0.033118);
}

double NNfunction_sRg::synapse0x343a2f0() {
   return (neuron0x34145b0()*0.482245);
}

double NNfunction_sRg::synapse0x343a330() {
   return (neuron0x341de20()*-0.913771);
}

double NNfunction_sRg::synapse0x343a370() {
   return (neuron0x341e7f0()*-0.0598225);
}

double NNfunction_sRg::synapse0x343a3b0() {
   return (neuron0x341f1c0()*1.91693);
}

double NNfunction_sRg::synapse0x343a3f0() {
   return (neuron0x341fb90()*-0.00763179);
}

double NNfunction_sRg::synapse0x343a430() {
   return (neuron0x3420560()*0.385268);
}

double NNfunction_sRg::synapse0x343a470() {
   return (neuron0x3420f30()*0.00386878);
}

double NNfunction_sRg::synapse0x343a4b0() {
   return (neuron0x3421900()*-0.410773);
}

double NNfunction_sRg::synapse0x343a4f0() {
   return (neuron0x34222d0()*-0.149826);
}

double NNfunction_sRg::synapse0x343a0a0() {
   return (neuron0x3418360()*0.15764);
}

double NNfunction_sRg::synapse0x343a0e0() {
   return (neuron0x3424eb0()*0.0148846);
}

double NNfunction_sRg::synapse0x343a120() {
   return (neuron0x3425880()*-0.0209223);
}

double NNfunction_sRg::synapse0x343a160() {
   return (neuron0x3426250()*-0.0672728);
}

double NNfunction_sRg::synapse0x343a740() {
   return (neuron0x3426c20()*-0.334241);
}

double NNfunction_sRg::synapse0x343a780() {
   return (neuron0x34275f0()*-0.0312925);
}

double NNfunction_sRg::synapse0x343a7c0() {
   return (neuron0x3427fc0()*-0.316288);
}

double NNfunction_sRg::synapse0x343a800() {
   return (neuron0x3428990()*-0.000741554);
}

double NNfunction_sRg::synapse0x343a840() {
   return (neuron0x3429360()*0.00548915);
}

double NNfunction_sRg::synapse0x343a880() {
   return (neuron0x3429f40()*0.420758);
}

double NNfunction_sRg::synapse0x343a8c0() {
   return (neuron0x342a910()*-0.617979);
}

double NNfunction_sRg::synapse0x343a900() {
   return (neuron0x341b790()*0.0416154);
}

double NNfunction_sRg::synapse0x343a940() {
   return (neuron0x341c160()*-0.284509);
}

double NNfunction_sRg::synapse0x343a980() {
   return (neuron0x341cb30()*0.122726);
}

double NNfunction_sRg::synapse0x343a9c0() {
   return (neuron0x342f170()*0.202764);
}

double NNfunction_sRg::synapse0x343aa00() {
   return (neuron0x342fa20()*-0.0102781);
}

double NNfunction_sRg::synapse0x343aa40() {
   return (neuron0x34303f0()*0.0705091);
}

double NNfunction_sRg::synapse0x343aa80() {
   return (neuron0x3430dc0()*-0.797676);
}

double NNfunction_sRg::synapse0x343ae00() {
   return (neuron0x340cd40()*0.020171);
}

double NNfunction_sRg::synapse0x343ae40() {
   return (neuron0x340d690()*1.0355);
}

double NNfunction_sRg::synapse0x343ae80() {
   return (neuron0x340e170()*-2.4784);
}

double NNfunction_sRg::synapse0x343aec0() {
   return (neuron0x340dc10()*0.323086);
}

double NNfunction_sRg::synapse0x343af00() {
   return (neuron0x340ef50()*1.78778);
}

double NNfunction_sRg::synapse0x343af40() {
   return (neuron0x340f920()*0.741023);
}

double NNfunction_sRg::synapse0x343af80() {
   return (neuron0x34106f0()*-4.17379);
}

double NNfunction_sRg::synapse0x343afc0() {
   return (neuron0x34110c0()*1.45891);
}

double NNfunction_sRg::synapse0x343b000() {
   return (neuron0x3411a90()*0.0386629);
}

double NNfunction_sRg::synapse0x343b040() {
   return (neuron0x3412570()*-2.43789);
}

double NNfunction_sRg::synapse0x343b080() {
   return (neuron0x3412f40()*0.0415326);
}

double NNfunction_sRg::synapse0x343b0c0() {
   return (neuron0x3410020()*0.0887767);
}

double NNfunction_sRg::synapse0x343b100() {
   return (neuron0x3414af0()*-0.175622);
}

double NNfunction_sRg::synapse0x343b140() {
   return (neuron0x34154c0()*1.17069);
}

double NNfunction_sRg::synapse0x343b180() {
   return (neuron0x3415e90()*0.0202335);
}

double NNfunction_sRg::synapse0x343b1c0() {
   return (neuron0x3416860()*-0.273366);
}

double NNfunction_sRg::synapse0x343ac50() {
   return (neuron0x3418670()*-0.551564);
}

double NNfunction_sRg::synapse0x343ac90() {
   return (neuron0x3418950()*0.0402767);
}

double NNfunction_sRg::synapse0x343b310() {
   return (neuron0x3419320()*-1.09728);
}

double NNfunction_sRg::synapse0x343b350() {
   return (neuron0x3419cf0()*-1.51081);
}

double NNfunction_sRg::synapse0x343b390() {
   return (neuron0x341a6c0()*-0.608229);
}

double NNfunction_sRg::synapse0x343b3d0() {
   return (neuron0x341b090()*-0.0680904);
}

double NNfunction_sRg::synapse0x343b410() {
   return (neuron0x3413be0()*-0.326029);
}

double NNfunction_sRg::synapse0x343b450() {
   return (neuron0x34145b0()*-1.29732);
}

double NNfunction_sRg::synapse0x343b490() {
   return (neuron0x341de20()*0.313375);
}

double NNfunction_sRg::synapse0x343b4d0() {
   return (neuron0x341e7f0()*0.0963704);
}

double NNfunction_sRg::synapse0x343b510() {
   return (neuron0x341f1c0()*-1.68462);
}

double NNfunction_sRg::synapse0x343b550() {
   return (neuron0x341fb90()*-0.0419246);
}

double NNfunction_sRg::synapse0x343b590() {
   return (neuron0x3420560()*-0.680873);
}

double NNfunction_sRg::synapse0x343b5d0() {
   return (neuron0x3420f30()*-0.0654442);
}

double NNfunction_sRg::synapse0x343b610() {
   return (neuron0x3421900()*-0.875583);
}

double NNfunction_sRg::synapse0x343b650() {
   return (neuron0x34222d0()*-0.892275);
}

double NNfunction_sRg::synapse0x343b200() {
   return (neuron0x3418360()*-0.0145287);
}

double NNfunction_sRg::synapse0x343b240() {
   return (neuron0x3424eb0()*0.0618792);
}

double NNfunction_sRg::synapse0x343b280() {
   return (neuron0x3425880()*-0.711165);
}

double NNfunction_sRg::synapse0x343b2c0() {
   return (neuron0x3426250()*0.000998138);
}

double NNfunction_sRg::synapse0x343b8a0() {
   return (neuron0x3426c20()*0.99033);
}

double NNfunction_sRg::synapse0x343b8e0() {
   return (neuron0x34275f0()*-0.483175);
}

double NNfunction_sRg::synapse0x343b920() {
   return (neuron0x3427fc0()*1.25064);
}

double NNfunction_sRg::synapse0x343b960() {
   return (neuron0x3428990()*-1.51112);
}

double NNfunction_sRg::synapse0x343b9a0() {
   return (neuron0x3429360()*0.0462639);
}

double NNfunction_sRg::synapse0x343b9e0() {
   return (neuron0x3429f40()*-1.51264);
}

double NNfunction_sRg::synapse0x343ba20() {
   return (neuron0x342a910()*0.645811);
}

double NNfunction_sRg::synapse0x343ba60() {
   return (neuron0x341b790()*-0.213914);
}

double NNfunction_sRg::synapse0x343baa0() {
   return (neuron0x341c160()*0.0545246);
}

double NNfunction_sRg::synapse0x343bae0() {
   return (neuron0x341cb30()*0.191647);
}

double NNfunction_sRg::synapse0x343bb20() {
   return (neuron0x342f170()*0.787737);
}

double NNfunction_sRg::synapse0x343bb60() {
   return (neuron0x342fa20()*0.0713732);
}

double NNfunction_sRg::synapse0x343bba0() {
   return (neuron0x34303f0()*0.219867);
}

double NNfunction_sRg::synapse0x343bbe0() {
   return (neuron0x3430dc0()*1.6683);
}

double NNfunction_sRg::synapse0x343be40() {
   return (neuron0x3437fc0()*-3.26166);
}

double NNfunction_sRg::synapse0x343be80() {
   return (neuron0x3438360()*6.86144);
}

double NNfunction_sRg::synapse0x343bec0() {
   return (neuron0x3438800()*-9.25572);
}

double NNfunction_sRg::synapse0x343bf00() {
   return (neuron0x3439960()*-6.18964);
}

double NNfunction_sRg::synapse0x343bf40() {
   return (neuron0x343aac0()*-7.153);
}

